package com.smartchat.framework.starter.common.constant;

public final class RedisKeyConstant {

    /**
     * 用户注册锁，Key Prefix + 用户名
     */
    public static final String LOCK_USER_REGISTER = "smartchat-user-service:lock:user-register:";

    /**
     * 用户注销锁，Key Prefix + 用户名
     */
    public static final String USER_DELETION = "smartchat-user-service:user-deletion:";

    /**
     * 用户注册可复用用户名，Key Prefix + Id
     */
    public static final String USER_REGISTER_REUSE_SHARDING = "smartchat-user-service:user-reuse:";

}
