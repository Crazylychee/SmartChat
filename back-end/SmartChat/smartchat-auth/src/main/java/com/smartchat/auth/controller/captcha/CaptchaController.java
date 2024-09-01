package com.smartchat.auth.controller.captcha;

import com.google.code.kaptcha.Producer;
import com.smartchat.auth.config.redis.RedisCache;
import jakarta.annotation.Resource;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.util.FastByteArrayOutputStream;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RestController;

import javax.imageio.ImageIO;
import java.awt.image.BufferedImage;
import java.io.IOException;
import java.util.HashMap;
import java.util.concurrent.TimeUnit;

import static com.smartchat.auth.controller.captcha.Constants.CAPTCHA_CODE_KEY;

@RestController
@RequestMapping("/user")
public class CaptchaController {

    @Autowired
    private RedisCache redisCache;


    @Resource(name = "captchaProducerMath")
    private Producer captchaProducerMath;


    @GetMapping("/captchaImage")
    public Object getCode()
    {
        // 保存验证码信息
        String uuid = IdUtils.simpleUUID();

        String verifyKey = CAPTCHA_CODE_KEY + uuid;


        String capStr = null, code = null;
        BufferedImage image = null;

        // 生成验证码
        String capText = captchaProducerMath.createText();
        capStr = capText.substring(0, capText.lastIndexOf("@"));
        code = capText.substring(capText.lastIndexOf("@") + 1);
        image = captchaProducerMath.createImage(capStr);
        System.out.println("验证码是："+code);

        //存入redis
        redisCache.setCacheObject(verifyKey, code, Constants.CAPTCHA_EXPIRATION, TimeUnit.MINUTES);
        // 转换流信息写出
        FastByteArrayOutputStream os = new FastByteArrayOutputStream();
        try
        {
            ImageIO.write(image, "jpg", os);
        }
        catch (IOException e)
        {
            //异常处理
            throw new RuntimeException("验证码生成失败");
        }

        HashMap<String,String> ajax = new HashMap<>();

        ajax.put("uuid", uuid);
        ajax.put("img", Base64.encode(os.toByteArray()));
        return ajax;
    }
}
