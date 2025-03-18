package com.smartchat.auth.service.handler.filter.user;

import com.smartchat.framework.starter.common.domain.dto.RegisterDTO;
import com.smartchat.auth.service.UserService;
import com.smartchat.framework.starter.common.exception.ClientException;
import lombok.RequiredArgsConstructor;
import org.springframework.stereotype.Component;

/**
 * 用户注册用户名唯一校验
 */
@Component
@RequiredArgsConstructor
public class UserRegisterHasUsernameChainHandler implements UserRegisterCreateChainFilter<RegisterDTO> {

    private final UserService userService;

    @Override
    public void handler(RegisterDTO requestParam) {
        if(!userService.hasEmail(requestParam.getUsername())){
            throw new ClientException("邮箱已存在");
        }
    }

    @Override
    public int getOrder() {
        return 1;
    }
}
