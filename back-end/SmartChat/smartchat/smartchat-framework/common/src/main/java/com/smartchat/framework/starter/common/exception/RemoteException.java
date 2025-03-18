
package com.smartchat.framework.starter.common.exception;


import com.smartchat.framework.starter.common.web.HttpStatus;

/**
 * 远程服务调用异常
 */
public class RemoteException extends AbstractException {

    public RemoteException(String message) {
        this(message, null, HttpStatus.REMOTE_SERVICE_ERROR);
    }

    public RemoteException(String message, HttpStatus errorCode) {
        this(message, null, errorCode);
    }

    public RemoteException(String message, Throwable throwable, HttpStatus errorCode) {
        super(message, throwable, errorCode);
    }

    @Override
    public String toString() {
        return "RemoteException{" +
                "code='" + errorCode + "'," +
                "message='" + errorMessage + "'" +
                '}';
    }
}
