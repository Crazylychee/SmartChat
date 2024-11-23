package com.smartchat.auth.service;

import com.smartchat.framework.starter.common.domain.dto.RegisterDTO;

public interface UserService {


    boolean hasEmail(String email);


    void checkEmailAndSendCode(RegisterDTO requestParam);
}
