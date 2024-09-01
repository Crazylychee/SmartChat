package com.smartchat.auth.controller.email;


import com.smartchat.auth.result.JSONResult;
import jakarta.mail.MessagingException;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestBody;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RestController;


@RestController
@RequestMapping("/email")
public class EmailController {

    @Autowired
    private EmailService emailService;




    @PostMapping("/send")
    public JSONResult<String> sendEmail(@RequestBody RegisterDTO registerDTO) throws MessagingException {

        emailService.sendRegisterCode(registerDTO);
        return JSONResult.success("发送验证码成功");

    }
}
