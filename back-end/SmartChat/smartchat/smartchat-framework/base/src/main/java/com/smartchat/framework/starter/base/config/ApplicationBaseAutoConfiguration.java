package com.smartchat.framework.starter.base.config;

import com.smartchat.framework.starter.base.ApplicationContextHolder;
import com.smartchat.framework.starter.base.init.ApplicationContentPostProcessor;
import org.springframework.boot.autoconfigure.condition.ConditionalOnMissingBean;
import org.springframework.context.ApplicationContext;
import org.springframework.context.annotation.Bean;

public class ApplicationBaseAutoConfiguration {

//    @Bean
//    @ConditionalOnMissingBean
//    public ApplicationContextHolder congoApplicationContextHolder() {
//        return new ApplicationContextHolder();
//    }

    @Bean
    @ConditionalOnMissingBean
    public ApplicationContentPostProcessor congoApplicationContentPostProcessor(ApplicationContext applicationContext) {
        return new ApplicationContentPostProcessor(applicationContext);
    }

}
