
package com.smartchat.framework.designpattern.config;


import com.smartchat.framework.designpattern.chain.AbstractChainContext;
import com.smartchat.framework.starter.base.config.ApplicationBaseAutoConfiguration;
import org.springframework.boot.autoconfigure.ImportAutoConfiguration;
import org.springframework.context.annotation.Bean;
import org.springframework.context.annotation.Configuration;

/**
 * 设计模式自动装配
 */
@Configuration
@ImportAutoConfiguration(ApplicationBaseAutoConfiguration.class)
public class DesignPatternAutoConfiguration {


    /**
     * 责任链上下文
     */
    @Bean
    public AbstractChainContext abstractChainContext() {
        System.out.println(111);
        return new AbstractChainContext();
    }
}
