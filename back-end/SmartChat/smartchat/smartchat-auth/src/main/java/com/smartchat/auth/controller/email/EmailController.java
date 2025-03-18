package com.smartchat.auth.controller.email;


import com.smartchat.framework.starter.common.domain.dto.RegisterDTO;
import com.smartchat.auth.service.UserService;
import com.smartchat.framework.starter.common.web.JSONResult;
import jakarta.mail.MessagingException;
import lombok.AllArgsConstructor;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestBody;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RestController;


@RestController
@RequestMapping("/email")
@AllArgsConstructor
public class EmailController {


    private final UserService userService;


    @PostMapping("/send")
    public JSONResult<String> sendEmail(@RequestBody RegisterDTO requestParam) throws MessagingException {

        userService.checkEmailAndSendCode(requestParam);
        return JSONResult.success("发送验证码成功");

    }
}
