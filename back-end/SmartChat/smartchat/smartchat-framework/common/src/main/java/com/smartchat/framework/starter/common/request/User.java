package com.smartchat.framework.starter.common.request;



public record User(
        Long id,
        String password,
        String name,
        String intro,
        String profilePicture,
        ProfileAccessStrategy profileAccessStrategy,
        int permissionGroupId,
        String registrationDate,
        boolean isActive
) {
    // 你可以在这里添加其他方法或构造函数
}

