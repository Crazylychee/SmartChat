package com.smartchat.auth.controller.user;

public record LoginDTO(
        Long userId,
        String password
) {
}
