package com.smartchat.framework.starter.common.domain.dto;

import lombok.Data;

@Data
public class RegisterDTO {

    /**
     * 邮箱
     */
    private String email;

    /**
     * 验证码
     */
    private String code;

    /**
     * 用户名
     */
    private String username;

    /**
     * 密码
     */
    private String password;

    /**
     *
     */
}
