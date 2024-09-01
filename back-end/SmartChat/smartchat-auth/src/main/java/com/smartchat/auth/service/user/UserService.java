package com.smartchat.auth.service.user;

import com.alibaba.fastjson2.JSON;
import com.smartchat.auth.config.redis.RedisCache;
import com.smartchat.auth.controller.email.RegisterDTO;
import com.smartchat.auth.controller.user.BCryptUtil;
import com.smartchat.auth.domain.dto.UserDTO;
import com.smartchat.auth.domain.user.User;
import com.smartchat.auth.mapper.user.UserMapper;
import com.smartchat.auth.query.user.UserQuery;
import com.baomidou.mybatisplus.core.conditions.query.QueryWrapper;
import com.baomidou.mybatisplus.extension.plugins.pagination.Page;
import com.baomidou.mybatisplus.extension.service.impl.ServiceImpl;
import com.smartchat.auth.controller.captcha.CaptchaException;
import com.smartchat.auth.controller.captcha.CaptchaExpireException;
import com.smartchat.auth.request.FeignUserService;
import com.smartchat.auth.request.Response;
import org.springframework.transaction.annotation.Transactional;
import org.springframework.stereotype.Service;
import org.apache.commons.lang3.StringUtils;
import org.slf4j.Logger;
import org.slf4j.LoggerFactory;
import org.springframework.beans.factory.annotation.Autowired;

import java.util.*;

import static com.smartchat.auth.request.ProfileAccessStrategy.ALL;

/**
 * <p>
 *  服务实现类
 * </p>
 *
 * @author Crazylychee
 */
@Transactional
@Service
public class UserService extends ServiceImpl<UserMapper, User>{

    private static final Logger log = LoggerFactory.getLogger(UserService.class);

    @Autowired
    private UserMapper tuserMapper;


    @Autowired
    private RedisCache redisCache;

    @Autowired
    private FeignUserService feignUserService;

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

        String verifyKey = com.smartchat.auth.controller.captcha.Constants.CAPTCHA_CODE_KEY + (StringUtils.isNotEmpty(uuid) ? uuid : "");
        String captcha = redisCache.getCacheObject(verifyKey);
        redisCache.deleteObject(verifyKey);
        if (captcha == null) {
            throw new CaptchaExpireException();
        }
        if (!code.equalsIgnoreCase(captcha)) {
            throw new CaptchaException();
        }
    }


    public void register(RegisterDTO user)  {
        Random random = new Random();
        int randomCode = 100000 + random.nextInt(900000);
        String pwd = String.valueOf(randomCode);

        com.smartchat.auth.request.User userReq = new com.smartchat.auth.request.User(
        null,
         pwd,
         user.getUsername(),
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

        com.smartchat.auth.request.User user1 = JSON.parseObject(response.getData().toString(), com.smartchat.auth.request.User.class);
        User tuser = new User();
        tuser.setEmail(user.getEmail());
        tuser.setUserId(user1.id());
        tuser.setPassword(BCryptUtil.hashPassword(user.getPassword()));
        tuser.setPwd(pwd);
        tuserMapper.insert(tuser);
    }
}
