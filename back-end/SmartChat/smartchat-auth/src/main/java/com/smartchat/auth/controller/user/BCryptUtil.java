package com.smartchat.auth.controller.user;

import org.mindrot.jbcrypt.BCrypt;


public class BCryptUtil {
    public static final Integer CNT = 5;

    public static String hashPassword(String rawPassword){
        return BCrypt.hashpw(rawPassword,BCrypt.gensalt(CNT));
    }

    public static boolean matches(String rawPassword, String encode){
        return BCrypt.checkpw(rawPassword,encode);
    }

}

