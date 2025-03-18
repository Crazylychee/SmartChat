
package com.smartchat.framework.starter.common.exception;


import com.smartchat.framework.starter.common.web.HttpStatus;

/**
 * 客户端异常
 */
public class ClientException extends AbstractException {

    public ClientException(HttpStatus errorCode) {
        this(null, null, errorCode);
    }

    public ClientException(String message) {
        this(message, null, HttpStatus.BAD_REQUESTS);
    }

    public ClientException(String message, HttpStatus errorCode) {
        this(message, null, errorCode);
    }

    public ClientException(String message, Throwable throwable, HttpStatus errorCode) {
        super(message, throwable, errorCode);
    }

    @Override
    public String toString() {
        return "ClientException{" +
                "code='" + errorCode + "'," +
                "message='" + errorMessage + "'" +
                '}';
    }
}
