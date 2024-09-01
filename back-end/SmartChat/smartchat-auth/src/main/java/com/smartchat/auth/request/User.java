package com.smartchat.auth.request;

import java.time.LocalDate;

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

