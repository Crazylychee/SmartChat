package com.smartchat.framework.starter.common.exception;


import com.smartchat.framework.starter.common.web.HttpStatus;

import java.util.Optional;

/**
 * 服务端异常
 */
public class ServiceException extends AbstractException {

    public ServiceException(String message) {
        this(message, null, HttpStatus.ERROR);
    }

    public ServiceException(HttpStatus errorCode) {
        this(null, errorCode);
    }

    public ServiceException(String message, HttpStatus errorCode) {
        this(message, null, errorCode);
    }

    public ServiceException(String message, Throwable throwable, HttpStatus errorCode) {
        super(Optional.ofNullable(message).orElse(errorCode.getMessage()), throwable, errorCode);
    }

    @Override
    public String toString() {
        return "ServiceException{" +
                "code='" + errorCode + "'," +
                "message='" + errorMessage + "'" +
                '}';
    }
}
