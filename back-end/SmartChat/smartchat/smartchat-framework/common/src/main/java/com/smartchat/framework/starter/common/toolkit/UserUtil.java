package com.smartchat.framework.starter.common.toolkit;

public final class UserUtil {

    /**
     * 用户注册可复用用户名分片数
     */
    public static final int USER_REGISTER_REUSE_SHARDING_COUNT = 1024;

    /**
     * 计算分片位置
     */
    public static int getShardingIndex(String username) {
        return Math.abs(username.hashCode() % USER_REGISTER_REUSE_SHARDING_COUNT);
    }
}
