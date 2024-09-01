package com.smartchat.auth.domain.user;

import com.baomidou.mybatisplus.annotation.TableName;
import com.baomidou.mybatisplus.annotation.IdType;
import com.baomidou.mybatisplus.annotation.TableId;
import java.io.Serializable;
import com.baomidou.mybatisplus.annotation.TableField;
import com.smartchat.auth.domain.base.BaseDomain;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.util.Objects;

/**
 * <p>
 *
 * </p>
 *
 * @author Crazylychee
 * @date 2024-08-30
 */
@TableName("t_user")
@ApiModel(value="t_user 表对应的实体对象", description="")
public class User extends BaseDomain implements Serializable {

    private static final long serialVersionUID = 1L;

    @ApiModelProperty(value = "主键",
        required = true,
        example = "",
        allowableValues = "",
        position = 1,
        hidden = false,
        accessMode = ApiModelProperty.AccessMode.READ_WRITE )
    @TableId(value = "id", type = IdType.AUTO)
    private Long id;

    @ApiModelProperty(value = "用户id",
        required = true,
        example = "",
        allowableValues = "",
        position = 1,
        hidden = false,
        accessMode = ApiModelProperty.AccessMode.READ_WRITE )
    @TableField(value = "user_id")
    private Long userId;

    @ApiModelProperty(value = "用户密码",
        required = true,
        example = "",
        allowableValues = "",
        position = 1,
        hidden = false,
        accessMode = ApiModelProperty.AccessMode.READ_WRITE )
    @TableField(value = "password")
    private String password;

    @ApiModelProperty(value = "用户密钥",
        required = true,
        example = "",
        allowableValues = "",
        position = 1,
        hidden = false,
        accessMode = ApiModelProperty.AccessMode.READ_WRITE )
    @TableField(value = "pwd")
    private String pwd;

    @ApiModelProperty(value = "用户邮箱",
        required = true,
        example = "",
        allowableValues = "",
        position = 1,
        hidden = false,
        accessMode = ApiModelProperty.AccessMode.READ_WRITE )
    @TableField(value = "email")
    private String email;
    public Long getId() {
        return id;
    }

    public void setId(Long id) {
        this.id = id;
    }
    public Long getUserId() {
        return userId;
    }

    public void setUserId(Long userId) {
        this.userId = userId;
    }
    public String getPassword() {
        return password;
    }

    public void setPassword(String password) {
        this.password = password;
    }
    public String getPwd() {
        return pwd;
    }

    public void setPwd(String pwd) {
        this.pwd = pwd;
    }
    public String getEmail() {
        return email;
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
        User User = (User) o;
        return Objects.equals(id, User.id)
    && Objects.equals(userId, User.userId)
    && Objects.equals(password, User.password)
    && Objects.equals(pwd, User.pwd)
    && Objects.equals(email, User.email);
    }

    public User() {

    }

    public User(
        Long id,
        Long userId,
        String password,
        String pwd,
        String email
    ) {
        this.id = id;
        this.userId = userId;
        this.password = password;
        this.pwd = pwd;
        this.email = email;
    }
}
