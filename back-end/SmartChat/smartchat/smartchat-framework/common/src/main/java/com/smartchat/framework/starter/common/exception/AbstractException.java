package com.smartchat.framework.starter.common.exception;

import com.smartchat.framework.starter.common.web.HttpStatus;
import lombok.Getter;

import org.springframework.util.StringUtils;

import java.util.Optional;

/**
 * 抽象项目中三类异常体系，客户端异常、服务端异常以及远程服务调用异常
 * @see ClientException
 * @see ServiceException
 * @see RemoteException
 */
@Getter
public abstract class AbstractException extends RuntimeException {

    public final String errorCode;

    public final String errorMessage;

    public AbstractException(String message, Throwable throwable, HttpStatus errorCode) {
        super(message, throwable);
        this.errorCode = String.valueOf(errorCode.getCode());
        this.errorMessage = Optional.ofNullable(StringUtils.hasLength(message) ? message : null).orElse(errorCode.getMessage());
    }
}
