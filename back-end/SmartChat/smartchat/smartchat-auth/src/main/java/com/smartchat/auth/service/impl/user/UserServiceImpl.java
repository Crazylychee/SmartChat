package com.smartchat.auth.service.impl.user;

import com.alibaba.fastjson2.JSON;
import com.baomidou.mybatisplus.extension.service.impl.ServiceImpl;


import com.smartchat.framework.designpattern.chain.AbstractChainContext;
import com.smartchat.framework.starter.common.domain.dto.RegisterDTO;
import com.smartchat.auth.service.UserService;
import com.smartchat.auth.service.impl.email.EmailService;
import com.smartchat.auth.utils.BCryptUtil;
import com.smartchat.framework.starter.common.domain.dto.UserDTO;
import com.smartchat.auth.domain.user.User;
import com.smartchat.auth.mapper.user.UserMapper;
import com.smartchat.auth.query.user.UserQuery;
import com.baomidou.mybatisplus.core.conditions.query.QueryWrapper;
import com.baomidou.mybatisplus.extension.plugins.pagination.Page;
import com.smartchat.auth.utils.FeignUserService;
import com.smartchat.auth.utils.RedisCache;

import com.smartchat.auth.controller.captcha.Constants;
import com.smartchat.framework.starter.common.constant.RedisKeyConstant;
import com.smartchat.framework.starter.common.exception.CaptchaException;
import com.smartchat.framework.starter.common.exception.CaptchaExpireException;
import com.smartchat.framework.starter.common.exception.ServiceException;
import com.smartchat.framework.starter.common.request.Response;
import com.smartchat.framework.starter.common.toolkit.UserUtil;
import lombok.RequiredArgsConstructor;
import lombok.SneakyThrows;
import lombok.extern.slf4j.Slf4j;
import org.redisson.api.RBloomFilter;
import org.redisson.api.RLock;
import org.redisson.api.RedissonClient;
import org.springframework.data.redis.core.StringRedisTemplate;
import org.springframework.stereotype.Service;
import org.apache.commons.lang3.StringUtils;
import org.springframework.transaction.annotation.Transactional;
import com.smartchat.framework.starter.common.enums.UserChainMarkEnum;
import java.util.*;

import static com.smartchat.framework.starter.common.constant.RedisKeyConstant.USER_REGISTER_REUSE_SHARDING;
import static com.smartchat.framework.starter.common.request.ProfileAccessStrategy.ALL;


/**
 * <p>
 *  服务实现类
 * </p>
 *
 * @author Crazylychee
 */
@Slf4j
@Service
@RequiredArgsConstructor
public class UserServiceImpl extends ServiceImpl<UserMapper, User> implements UserService {


    private final UserMapper tuserMapper;
    private final RedisCache redisCache;
    private final FeignUserService feignUserService;
    private final EmailService emailService;
    private final RBloomFilter<String> userRegisterCachePenetrationBloomFilter;
    private final StringRedisTemplate stringRedisTemplate;
    private final RedissonClient redissonClient;
    private final AbstractChainContext<RegisterDTO> chainContext;


    //查询分页列表数据(使用QueryWrapper操作)
    public Page<User> selectMyPage(UserQuery query) {
        QueryWrapper<User> wrapper = new QueryWrapper<>();

        if (!Objects.isNull(query.getId())) {
            wrapper.and(i -> i.eq("id", query.getId()));
        }
        if (!Objects.isNull(query.getUserId())) {
            wrapper.and(i -> i.eq("user_id", query.getUserId()));
        }
        if (!Objects.isNull(query.getPassword())) {
            wrapper.and(i -> i.eq("password", query.getPassword()));
        }
        if (!Objects.isNull(query.getPwd())) {
            wrapper.and(i -> i.eq("pwd", query.getPwd()));
        }
        if (!Objects.isNull(query.getEmail())) {
            wrapper.and(i -> i.eq("email", query.getEmail()));
        }
        if(StringUtils.isNotBlank(query.getPasswordFuzzy())){
            wrapper.and(i -> i.like("password", "%" + query.getPasswordFuzzy()));
        }
        if(StringUtils.isNotBlank(query.getPwdFuzzy())){
            wrapper.and(i -> i.like("pwd", "%" + query.getPwdFuzzy()));
        }
        if(StringUtils.isNotBlank(query.getEmailFuzzy())){
            wrapper.and(i -> i.like("email", "%" + query.getEmailFuzzy()));
        }

        // 按照id降序排序
        wrapper.orderByDesc("id");

        // 创建分页对象，设置当前页和每页显示数量
        Page<User> page = new Page<>(query.getCurrent(), query.getSize());

        // 执行分页查询并返回结果
        return super.page(page, wrapper);
    }

        //查询分页列表数据(自己写SQL)
        public Page<User> selectMySqlPage(UserQuery query) {
            Page<User> page = new Page<>(query.getCurrent(), query.getSize());
            List<User> list = tuserMapper.selectMySqlPage(page, query);
            return page.setRecords(list);
        }

    public User login(UserDTO user) throws CaptchaExpireException, CaptchaException {
        validateCaptcha(user.getCode(), user.getUuid());

        QueryWrapper<User> wrapper = new QueryWrapper<>();
        wrapper.eq("email", user.getEmail());
        return tuserMapper.selectOne(wrapper);
    }


    public void validateCaptcha(String code, String uuid) throws CaptchaException, CaptchaExpireException {

        String verifyKey = Constants.CAPTCHA_CODE_KEY + (StringUtils.isNotEmpty(uuid) ? uuid : "");
        String captcha = redisCache.getCacheObject(verifyKey);
        redisCache.deleteObject(verifyKey);
        if (captcha == null) {
            throw new CaptchaExpireException();
        }
        if (!code.equalsIgnoreCase(captcha)) {
            throw new CaptchaException();
        }
    }

    @Transactional(rollbackFor = Exception.class)
    public void register(RegisterDTO requestParam)  {


        emailService.verifyCode(requestParam.getEmail(), requestParam.getCode());



        Random random = new Random();
        int randomCode = 100000 + random.nextInt(900000);
        String pwd = String.valueOf(randomCode);

        //请求turms服务端进行注册
        com.smartchat.framework.starter.common.request.User userReq = new com.smartchat.framework.starter.common.request.User(
        null,
         pwd,
         requestParam.getUsername(),
        null,
        null,
        ALL,
        50,
        null,
        false
);



        String userReqStr = JSON.toJSONString(userReq);

        Response response = JSON.parseObject(feignUserService.saveUser(userReqStr), Response.class);
        if (response.getCode() != 1000) {
            throw new RuntimeException("调用远程服务失败");
        }

        com.smartchat.framework.starter.common.request.User user1 = JSON.parseObject(response.getData().toString(), com.smartchat.framework.starter.common.request.User.class);
        User tuser = new User();
        tuser.setEmail(requestParam.getEmail());
        tuser.setUserId(user1.id());
        tuser.setPassword(BCryptUtil.hashPassword(requestParam.getPassword()));
        tuser.setPwd(pwd);
        tuserMapper.insert(tuser);


        emailService.deleteCode(requestParam.getEmail());
    }

    @Override
    public boolean hasEmail(String email) {
        boolean hasUsername = userRegisterCachePenetrationBloomFilter.contains(email);
        if (hasUsername) {
            return Boolean.TRUE.equals(stringRedisTemplate.opsForSet().isMember(USER_REGISTER_REUSE_SHARDING + UserUtil.getShardingIndex(email), email));
        }
        return true;
    }

    @Override
    @SneakyThrows
    public void checkEmailAndSendCode(RegisterDTO requestParam) {
        chainContext.handler(UserChainMarkEnum.USER_REGISTER_FILTER.name(), requestParam);
        RLock lock = redissonClient.getLock(RedisKeyConstant.LOCK_USER_REGISTER + requestParam.getEmail());
        boolean trylock = lock.tryLock();
        if(!trylock){
            throw new ServiceException("验证码已发送，请一分钟后再试");
        }
        try{
            //查询数据库是否有对应的邮箱
            if (tuserMapper.selectCount(new QueryWrapper<User>().eq("email", requestParam.getEmail())) > 0) {
                throw new ServiceException("邮箱已被注册");
            }
        } finally{
            lock.unlock();
        }

        //发送注册邮箱验证码
        emailService.sendRegisterCode(requestParam);
    }
}
