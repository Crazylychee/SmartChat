package com.smartchat.auth.domain.dto;

import io.swagger.annotations.ApiModelProperty;
import lombok.AllArgsConstructor;
import lombok.Data;
import lombok.NoArgsConstructor;

@Data
@NoArgsConstructor
@AllArgsConstructor
public class UserDTO {

    @ApiModelProperty(value = "密码",
            required = true,
            example = "",
            allowableValues = "",
            position = 1,
            hidden = false,
            accessMode = ApiModelProperty.AccessMode.READ_WRITE )
    private String password;

    @ApiModelProperty(value = "邮箱",
            required = true,
            example = "",
            allowableValues = "",
            position = 1,
            hidden = false,
            accessMode = ApiModelProperty.AccessMode.READ_WRITE )
    private String email;

    @ApiModelProperty(value = "uuid",
            required = true,
            example = "",
            allowableValues = "",
            position = 1,
            hidden = false,
            accessMode = ApiModelProperty.AccessMode.READ_WRITE )
    private String uuid;

    @ApiModelProperty(value = "图形验证码",
            required = true,
            example = "",
            allowableValues = "",
            position = 1,
            hidden = false,
            accessMode = ApiModelProperty.AccessMode.READ_WRITE )
    private String code;


}
