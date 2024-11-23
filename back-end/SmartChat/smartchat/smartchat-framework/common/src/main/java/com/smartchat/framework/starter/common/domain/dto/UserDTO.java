package com.smartchat.framework.starter.common.domain.dto;

import lombok.AllArgsConstructor;
import lombok.Data;
import lombok.NoArgsConstructor;

@Data
@NoArgsConstructor
@AllArgsConstructor
public class UserDTO {


    private String password;


    private String email;


    private String uuid;


    private String code;


}
