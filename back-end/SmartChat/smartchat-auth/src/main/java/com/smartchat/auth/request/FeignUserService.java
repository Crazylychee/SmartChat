package com.smartchat.auth.request;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;

@Service
public class FeignUserService {

    @Autowired
    private HttpClient httpClient;


    public String saveUser(String user) {
        return httpClient.sendPostRequest(Constants.BASE_URL + Constants.ADD_USERS, user);
    }

}
