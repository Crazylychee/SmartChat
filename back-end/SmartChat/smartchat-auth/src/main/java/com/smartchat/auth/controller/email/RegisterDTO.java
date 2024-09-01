package com.smartchat.auth.controller.email;

import lombok.Data;

@Data
public class RegisterDTO {

    private String email;

    private String code;

    private String username;

    private String password;
}
