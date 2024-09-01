package com.smartchat.auth.mapper.user;

import com.smartchat.auth.domain.user.User;
import com.smartchat.auth.query.user.UserQuery;
import com.baomidou.mybatisplus.core.mapper.BaseMapper;
import com.baomidou.mybatisplus.extension.plugins.pagination.Page;
import org.apache.ibatis.annotations.Mapper;
import org.apache.ibatis.annotations.Param;
import java.util.List;

/**
* <p>
*  Mapper接口
* </p>
*
* @author Crazylychee
*/
@Mapper
public interface UserMapper extends BaseMapper<User> {

    //查询分页列表数据
    List<User> selectMySqlPage(Page<User> page, @Param("query") UserQuery query);
}