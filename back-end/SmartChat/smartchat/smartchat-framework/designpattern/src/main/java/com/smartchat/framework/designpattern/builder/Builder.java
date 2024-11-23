package com.smartchat.framework.designpattern.builder;

import java.io.Serializable;

public interface Builder<T> extends Serializable {


    /**
     * 构建方法
     *
     * @return 构建后的对象
     */
    T build();
}
