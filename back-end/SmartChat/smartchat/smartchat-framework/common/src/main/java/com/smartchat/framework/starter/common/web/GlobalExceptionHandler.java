package com.smartchat.framework.starter.common.web;



import com.smartchat.framework.starter.common.exception.CaptchaException;
import com.smartchat.framework.starter.common.exception.CaptchaExpireException;
import org.slf4j.Logger;
import org.slf4j.LoggerFactory;
import org.springframework.web.bind.annotation.ExceptionHandler;
import org.springframework.web.bind.annotation.RestControllerAdvice;


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


}
