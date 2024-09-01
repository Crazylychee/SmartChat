package com.smartchat.auth.controller.handler;


import com.smartchat.auth.controller.captcha.CaptchaException;
import com.smartchat.auth.controller.captcha.CaptchaExpireException;
import com.smartchat.auth.result.HttpStatus;
import com.smartchat.auth.result.JSONResult;
import org.slf4j.Logger;
import org.slf4j.LoggerFactory;
import org.springframework.web.bind.annotation.ExceptionHandler;
import org.springframework.web.bind.annotation.RestControllerAdvice;
import org.springframework.web.servlet.resource.NoResourceFoundException;


@RestControllerAdvice
public class GlobalExceptionHandler {


    private static final Logger log = LoggerFactory.getLogger(GlobalExceptionHandler.class);

    /**
     * 处理预期以外的错误
     *
     * @param e 异常
     * @return 统一结果返回
     */
    @ExceptionHandler(Exception.class)
    public JSONResult handleException(Exception e) {
        log.error(e.getMessage(), e);
        return JSONResult.error(HttpStatus.ERROR);
    }



    @ExceptionHandler(CaptchaException.class)
    public JSONResult handleCaptchaException(CaptchaException e) {
        return JSONResult.error(HttpStatus.FORBIDDEN,"验证码错误");
    }


    @ExceptionHandler(CaptchaExpireException.class)
    public JSONResult handleCaptchaExpireException(CaptchaExpireException e) {
        return JSONResult.error(HttpStatus.FORBIDDEN,"验证码过期");
    }

    @ExceptionHandler(NoResourceFoundException.class)
    public void handleNoResourceFoundException(NoResourceFoundException e) {

    }
}
