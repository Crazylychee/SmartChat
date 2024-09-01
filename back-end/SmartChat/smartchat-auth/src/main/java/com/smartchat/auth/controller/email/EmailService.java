package com.smartchat.auth.controller.email;

import com.smartchat.auth.config.redis.RedisCache;
import jakarta.mail.MessagingException;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;

import java.time.Instant;
import java.util.Random;
import java.util.concurrent.TimeUnit;

@Service
public class EmailService {

    @Autowired
    private RedisCache redisCache;

    @Autowired
    private EmailUtils emailUtils;

    /**
     * 验证验证码是否正确
     */
    public boolean verifyCode(String email, String code) {
        String key = Constants.USER_CODE_HASH + email;
        String cacheCode = redisCache.getCacheObject(key);

        return code.equals(cacheCode);
    }

    /**
     * 发送注册验证码
     */
    public void sendRegisterCode(RegisterDTO registerDTO) throws MessagingException {
        // 随机生成六位数验证码
        int code = new Random(Instant.now().toEpochMilli()).nextInt(899999) + 100000;

        String key = Constants.USER_CODE_HASH + registerDTO.getEmail();
        // 将验证码保存到缓存中（用户名、邮箱以及验证码一起校验，不允许其中一个有改动，全都放入缓存等待检验），五分钟内有效
        redisCache.setCacheObject(key, String.valueOf(code),  Constants.USER_CODE_EXPIRE , TimeUnit.MINUTES);

        String htmlContent = "<!DOCTYPE html>\n" +
                "<html>\n" +
                "<head>\n" +
                "    <style>\n" +
                "        body {\n" +
                "            font-family: Arial, sans-serif;\n" +
                "            background-color: #f4f4f4;\n" +
                "            margin: 0;\n" +
                "            padding: 0;\n" +
                "        }\n" +
                "        .container {\n" +
                "            max-width: 600px;\n" +
                "            margin: 0 auto;\n" +
                "            background-color: #ffffff;\n" +
                "            padding: 20px;\n" +
                "            border: 1px solid #ddd;\n" +
                "            box-shadow: 0 0 10px rgba(0, 0, 0, 0.1);\n" +
                "        }\n" +
                "        .header {\n" +
                "            background-color: #007bff;\n" +
                "            color: #ffffff;\n" +
                "            padding: 10px 20px;\n" +
                "            text-align: center;\n" +
                "        }\n" +
                "        .content {\n" +
                "            padding: 20px;\n" +
                "            line-height: 1.6;\n" +
                "        }\n" +
                "        .footer {\n" +
                "            background-color: #f4f4f4;\n" +
                "            padding: 10px 20px;\n" +
                "            text-align: center;\n" +
                "            font-size: 12px;\n" +
                "            color: #777;\n" +
                "        }\n" +
                "    </style>\n" +
                "</head>\n" +
                "<body>\n" +
                "    <div class=\"container\">\n" +
                "        <div class=\"header\">\n" +
                "            <h2>欢迎加入 SmartChat !</h2>\n" +
                "        </div>\n" +
                "        <div class=\"content\">\n" +
                "            <p>尊敬的用户 <strong>" + registerDTO.getUsername() + "</strong>，</p>\n" +
                "            <p>感谢您注册 SmartChat！您的验证码为：<strong>" + code + "</strong>，五分钟内有效。</p>\n" +
                "            <p>请在注册页面输入此验证码以完成注册过程。</p>\n" +
                "            <p>如果您有任何问题，请随时联系我们的技术支持。</p>\n" +
                "        </div>\n" +
                "        <div class=\"footer\">\n" +
                "            <p>此邮件由 SmartChat 自动发送，请勿直接回复。</p>\n" +
                "        </div>\n" +
                "    </div>\n" +
                "</body>\n" +
                "</html>";
        // 发送邮件
        emailUtils.sendHtmlEmail(registerDTO.getEmail(),"SmartChat 注册码", htmlContent);
    }

    public void deleteCode(String email) {
        String key = Constants.USER_CODE_HASH + email;
        redisCache.deleteObject(key);
    }
}
