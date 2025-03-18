package com.smartchat.framework.starter.common.request;

import lombok.AllArgsConstructor;
import lombok.Data;
import lombok.NoArgsConstructor;

import java.time.OffsetDateTime;

@Data
@AllArgsConstructor
@NoArgsConstructor
public class Response<T> {

    private int code;

    private String reason;

    private OffsetDateTime timestamp;

    private T data;

}

