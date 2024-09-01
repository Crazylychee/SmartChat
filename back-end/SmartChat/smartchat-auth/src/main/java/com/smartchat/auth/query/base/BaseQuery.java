package com.smartchat.auth.query.base;

import io.swagger.annotations.ApiModelProperty;
import java.io.Serializable;

/**
* 基础查询对象
* @author Crazylychee
*/
public class BaseQuery implements Serializable {
    @ApiModelProperty(value = "批量删除时，前端传来的主键ID集合",
                required = true,
                example = "",
                allowableValues = "",
                position = 1,
                hidden = false,
                accessMode = ApiModelProperty.AccessMode.READ_WRITE)
    private Long[] ids;

    @ApiModelProperty(value = "关键字",
                required = true,
                example = "",
                allowableValues = "",
                position = 1,
                hidden = false,
                accessMode = ApiModelProperty.AccessMode.READ_WRITE)
    private String keyword;

    @ApiModelProperty(value = "当前页",
                required = true,
                example = "",
                allowableValues = "",
                position = 1,
                hidden = false,
                accessMode = ApiModelProperty.AccessMode.READ_WRITE)
    private Integer current = 1;

    @ApiModelProperty(value = "每页显示多少条",
                required = true,
                example = "",
                allowableValues = "",
                position = 1,
                hidden = false,
                accessMode = ApiModelProperty.AccessMode.READ_WRITE)
    private Integer size = 10;

    public Long[] getIds() {
            return ids;
    }

    public void setIds(Long[] ids) {
        this.ids = ids;
    }

    public String getKeyword() {
        return keyword;
    }

    public void setKeyword(String keyword) {
        this.keyword = keyword;
    }

    public Integer getCurrent() {
        return current;
    }

    public void setCurrent(Integer current) {
        this.current = current;
    }

    public Integer getSize() {
        return size;
    }

    public void setSize(Integer size) {
        this.size = size;
    }
}
