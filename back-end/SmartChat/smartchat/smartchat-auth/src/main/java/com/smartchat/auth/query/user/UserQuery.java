package com.smartchat.auth.query.user;

import com.smartchat.auth.query.base.BaseQuery;
import com.baomidou.mybatisplus.annotation.TableName;
import com.baomidou.mybatisplus.annotation.IdType;
import com.baomidou.mybatisplus.annotation.TableId;
import java.io.Serializable;
import com.baomidou.mybatisplus.annotation.TableField;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;

/**
* -查询对象
* @author Crazylychee
* @date 2024-08-30
*/
@TableName("t_user")
@ApiModel(value="t_user 表对应的查询对象", description="")
public class UserQuery extends BaseQuery{

    @ApiModelProperty(value = "主键",
            required = true,
            example = "",
            allowableValues = "",
            position = 1,
            hidden = false,
            accessMode = ApiModelProperty.AccessMode.READ_WRITE)
    @TableId(value = "id", type = IdType.AUTO)
    private Integer id;

    @ApiModelProperty(value = "用户id",
            required = true,
            example = "",
            allowableValues = "",
            position = 1,
            hidden = false,
            accessMode = ApiModelProperty.AccessMode.READ_WRITE)
    @TableField(value = "user_id")
    private Integer userId;

    @ApiModelProperty(value = "用户密码",
            required = true,
            example = "",
            allowableValues = "",
            position = 1,
            hidden = false,
            accessMode = ApiModelProperty.AccessMode.READ_WRITE)
    @TableField(value = "password")
    private String password;

    @ApiModelProperty(value = "用户密码模糊查询",
        required = true,
        example = "",
        allowableValues = "",
        position = 1,
        hidden = false,
        accessMode = ApiModelProperty.AccessMode.READ_WRITE)
    private String passwordFuzzy;

    @ApiModelProperty(value = "用户密钥",
            required = true,
            example = "",
            allowableValues = "",
            position = 1,
            hidden = false,
            accessMode = ApiModelProperty.AccessMode.READ_WRITE)
    @TableField(value = "pwd")
    private String pwd;

    @ApiModelProperty(value = "用户密钥模糊查询",
        required = true,
        example = "",
        allowableValues = "",
        position = 1,
        hidden = false,
        accessMode = ApiModelProperty.AccessMode.READ_WRITE)
    private String pwdFuzzy;

    @ApiModelProperty(value = "用户邮箱",
            required = true,
            example = "",
            allowableValues = "",
            position = 1,
            hidden = false,
            accessMode = ApiModelProperty.AccessMode.READ_WRITE)
    @TableField(value = "email")
    private String email;

    @ApiModelProperty(value = "用户邮箱模糊查询",
        required = true,
        example = "",
        allowableValues = "",
        position = 1,
        hidden = false,
        accessMode = ApiModelProperty.AccessMode.READ_WRITE)
    private String emailFuzzy;

    public Integer getId() {
        return id;
    }


    public void setId(Integer id) {
        this.id = id;
    }
    public Integer getUserId() {
        return userId;
    }


    public void setUserId(Integer userId) {
        this.userId = userId;
    }
    public String getPassword() {
        return password;
    }

    public String getPasswordFuzzy() {
        return passwordFuzzy;
    }



    public void setPassword(String password) {
        this.password = password;
    }
    public String getPwd() {
        return pwd;
    }

    public String getPwdFuzzy() {
        return pwdFuzzy;
    }



    public void setPwd(String pwd) {
        this.pwd = pwd;
    }
    public String getEmail() {
        return email;
    }

    public String getEmailFuzzy() {
        return emailFuzzy;
    }



    public void setEmail(String email) {
        this.email = email;
    }
    @Override
    public int hashCode() {
    return Objects.hash(
        id,
        userId,
        password,
        pwd,
        email
    );
    }
    @Override
    public String toString() {
    return "User{" +
            "id=" + id +
            ", userId=" + userId +
            ", password=" + password +
            ", pwd=" + pwd +
            ", email=" + email +
    "}";
    }
    @Override
    public boolean equals(Object o) {
        if (this == o) {
        return true;
    }
    if (o == null || getClass() != o.getClass()) {
        return false;
    }
    UserQuery UserQuery = (UserQuery) o;
    return Objects.equals(id, UserQuery.id)
    && Objects.equals(userId, UserQuery.userId)
    && Objects.equals(password, UserQuery.password)
    && Objects.equals(pwd, UserQuery.pwd)
    && Objects.equals(email, UserQuery.email);
    }

}