package com.smartchat.auth;

import org.springframework.boot.SpringApplication;
import org.springframework.boot.autoconfigure.SpringBootApplication;



@SpringBootApplication(scanBasePackages = {"com.smartchat.auth"})
public class SmartChatAuthApplication{

    public static void main(String[] args) {
        SpringApplication.run(SmartChatAuthApplication.class, args);
    }

}
