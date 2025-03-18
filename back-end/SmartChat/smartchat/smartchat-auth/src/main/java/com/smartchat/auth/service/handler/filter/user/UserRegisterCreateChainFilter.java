package com.smartchat.auth.service.handler.filter.user;

import com.smartchat.framework.starter.common.domain.dto.RegisterDTO;
import com.smartchat.framework.designpattern.chain.AbstractChainHandler;
import com.smartchat.framework.starter.common.enums.UserChainMarkEnum;

public interface UserRegisterCreateChainFilter <T extends RegisterDTO> extends AbstractChainHandler<RegisterDTO> {

    @Override
    default String mark() {
        return UserChainMarkEnum.USER_REGISTER_FILTER.name();
    }
}
