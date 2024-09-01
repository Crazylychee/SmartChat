package com.smartchat.auth.controller.user;

import com.alibaba.fastjson2.JSON;
import com.baomidou.mybatisplus.core.conditions.Wrapper;
import com.fasterxml.jackson.core.JsonProcessingException;
import com.smartchat.auth.controller.captcha.CaptchaException;
import com.smartchat.auth.controller.captcha.CaptchaExpireException;
import com.smartchat.auth.controller.email.EmailService;
import com.smartchat.auth.controller.email.RegisterDTO;
import com.smartchat.auth.domain.dto.UserDTO;
import com.smartchat.auth.domain.user.User;
import com.smartchat.auth.result.HttpStatus;
import com.smartchat.auth.result.PageList;
import com.smartchat.auth.service.user.UserService;
import com.smartchat.auth.query.user.UserQuery;
import com.smartchat.auth.controller.base.BaseController;
import com.smartchat.auth.result.JSONResult;
import com.smartchat.auth.result.PageList;
import io.swagger.annotations.*;
import com.baomidou.mybatisplus.extension.plugins.pagination.Page;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.web.bind.annotation.*;
import java.util.Arrays;
import java.util.List;

/**
 *  API接口
 * @author Crazylychee
 */
@RestController
@RequestMapping("/user")
@Api(value = "/user", tags = {" API接口"})
public class UserController extends BaseController{

    @Autowired
    private UserService userService;


    @Autowired
    private EmailService emailService;

    /**
     * 新增数据到【】
     * @author Crazylychee
     */
    @PostMapping(value="/save")
    @ApiOperation(
                value = "新增数据到【】",
                notes = "新增数据到【】",
                protocols = "http,https",
                tags = {"增删查改接口"},
                hidden = false
        )
    @ApiResponses({
            @ApiResponse(code = 200, message = "操作成功"),
            @ApiResponse(code = 400, message = "请求参数错误"),
            @ApiResponse(code = 404, message = "用户未找到"),
            @ApiResponse(code = 500, message = "服务器内部错误")
    })
    public JSONResult save(@RequestBody User user){
        userService.save(user);
        return JSONResult.success(true);
    }

    /**
     * 修改【】表数据
     * @author Crazylychee
     */
    @PostMapping(value="/update")
    @ApiOperation(
                value = "修改【】表数据",
                notes = "修改【】表数据",
                protocols = "http,https",
                tags = {"增删查改接口"},
                hidden = false
        )
    @ApiResponses({
            @ApiResponse(code = 200, message = "操作成功"),
            @ApiResponse(code = 400, message = "请求参数错误"),
            @ApiResponse(code = 404, message = "用户未找到"),
            @ApiResponse(code = 500, message = "服务器内部错误")
    })
    public JSONResult update(@RequestBody User user){
        userService.updateById(user);
        return JSONResult.success(true);
    }

    /**
     * 批量删除【】数据
     * @author Crazylychee
     */
    @PostMapping(value="/batchDelete")
    @ApiOperation(
                value = "批量删除【】数据",
                notes = "批量删除【】数据",
                protocols = "http,https",
                tags = {"增删查改接口"},
                hidden = false
        )
    @ApiResponses({
            @ApiResponse(code = 200, message = "操作成功"),
            @ApiResponse(code = 400, message = "请求参数错误"),
            @ApiResponse(code = 404, message = "用户未找到"),
            @ApiResponse(code = 500, message = "服务器内部错误")
    })
    public JSONResult batchDelete(@RequestBody UserQuery query){
        //批量删除数据库数据
        userService.removeByIds(Arrays.asList(query.getIds()));
        return JSONResult.success(true);
    }

    /**
     * 单个删除【】数据
     * @author Crazylychee
    */
   @ApiOperation(
               value = "单个删除【】数据",
               notes = "单个删除【】数据",
               protocols = "http,https",
               tags = {"增删查改接口"},
               hidden = false
       )
   @ApiResponses({
           @ApiResponse(code = 200, message = "操作成功"),
           @ApiResponse(code = 400, message = "请求参数错误"),
           @ApiResponse(code = 404, message = "用户未找到"),
           @ApiResponse(code = 500, message = "服务器内部错误")
   })
    @DeleteMapping("/singleDelete/{id}")
    public JSONResult batchDelete(@PathVariable("id") Long id){
        //单个删除数据库数据
        userService.removeById(id);
        return JSONResult.success(true);
    }

    /**
    * 根据ID查询【】详情数据
    * @author Crazylychee
    */
    @GetMapping(value = "/{id}")
    @ApiOperation(
                value = "根据ID查询【】详情数据",
                notes = "根据ID查询【】详情数据",
                protocols = "http,https",
                tags = {"增删查改接口"},
                hidden = false
        )
    @ApiResponses({
            @ApiResponse(code = 200, message = "操作成功"),
            @ApiResponse(code = 400, message = "请求参数错误"),
            @ApiResponse(code = 404, message = "用户未找到"),
            @ApiResponse(code = 500, message = "服务器内部错误")
    })
    public JSONResult<User> get(@PathVariable("id")Long id){
        return JSONResult.success(userService.getById(id));
    }

    /**
    * 查询【】所有数据（不分页）
    * @author Crazylychee
    */
    @GetMapping(value = "/list")
    @ApiOperation(
                value = "查询【】所有数据（不分页）",
                notes = "查询【】所有数据（不分页）",
                protocols = "http,https",
                tags = {"增删查改接口"},
                hidden = false
        )
    @ApiResponses({
            @ApiResponse(code = 200, message = "操作成功"),
            @ApiResponse(code = 400, message = "请求参数错误"),
            @ApiResponse(code = 404, message = "用户未找到"),
            @ApiResponse(code = 500, message = "服务器内部错误")
    })
    public JSONResult<List<User>> list(){
        List<User> list = userService.list((Wrapper<User>) null);
        return JSONResult.success(list);
    }

    /**
     * 查询【】数据（分页）
     * @param query 查询对象
     * @return PageList 分页对象
     * @author Crazylychee
     */
    @PostMapping(value = "/pagelist")
    @ApiOperation(
                value = "查询【】数据（分页）",
                notes = "查询【】数据（分页）",
                protocols = "http,https",
                tags = {"增删查改接口"},
                hidden = false
        )
    @ApiResponses({
            @ApiResponse(code = 200, message = "操作成功"),
            @ApiResponse(code = 400, message = "请求参数错误"),
            @ApiResponse(code = 404, message = "用户未找到"),
            @ApiResponse(code = 500, message = "服务器内部错误")
    })
    public JSONResult<PageList<User>> pagelist(@RequestBody UserQuery query){
        Page<User> page = userService.selectMyPage(query);
        return JSONResult.success(new PageList<>(page.getTotal(), page.getRecords()));
    }

    /***********************************************************************************
    以上代码是自动生成的
    自己写的代码放在下面
    ***********************************************************************************/


    @PostMapping("/login")
    @ApiOperation(
            value = "用户登录",
            notes = "用户登录",
            protocols = "http,https",
            tags = {"用户接口"},
            hidden = false
    )
    @ApiResponses({
            @ApiResponse(code = 200, message = "操作成功"),
            @ApiResponse(code = 400, message = "请求参数错误"),
            @ApiResponse(code = 404, message = "用户未找到"),
            @ApiResponse(code = 500, message = "服务器内部错误")
    })
    public JSONResult<LoginDTO> login(@RequestBody UserDTO user) throws CaptchaExpireException, CaptchaException {

        User userInfo = userService.login(user);
        if (userInfo == null||!BCryptUtil.matches(user.getPassword(),userInfo.getPassword())){
            return JSONResult.error(HttpStatus.FORBIDDEN);
        }
        LoginDTO  loginDTO = new LoginDTO(
                userInfo.getUserId(),
                userInfo.getPwd()
        );
        return JSONResult.success(loginDTO);
    }

    @PostMapping("/register")
    @ApiOperation(
            value = "用户注册",
            notes = "用户注册",
            protocols = "http,https",
            tags = {"用户接口"},
            hidden = false
    )
    @ApiResponses({
            @ApiResponse(code = 200, message = "操作成功"),
            @ApiResponse(code = 400, message = "请求参数错误"),
            @ApiResponse(code = 404, message = "用户未找到"),
            @ApiResponse(code = 500, message = "服务器内部错误")
    })
    public JSONResult register(@RequestBody RegisterDTO user) {
        emailService.verifyCode(user.getEmail(), user.getCode());
        userService.register(user);
        emailService.deleteCode(user.getEmail());
        return JSONResult.success();
    }



}
