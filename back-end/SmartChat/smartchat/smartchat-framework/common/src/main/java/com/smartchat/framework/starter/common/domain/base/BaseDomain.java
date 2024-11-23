package com.smartchat.framework.starter.common.domain.base;


import java.time.LocalDateTime;
import java.io.Serializable;

/**
 * @desc 基础Domain类
 * @author Crazylychee
 */
public class BaseDomain implements Serializable {

    private static final long serialVersionUID = 1L;


    private String sysCreateUserName;


    private String sysUpdateUserName;



    private LocalDateTime sysCreateTime;



    private LocalDateTime sysUpdateTime;
    // 构造函数
    public BaseDomain() {
    }

    // getter 和 setter 方法
    public String getSysCreateUserName() {
        return sysCreateUserName;
    }

    public void setSysCreateUserName(String sysCreateUserName) {
        this.sysCreateUserName = sysCreateUserName;
    }

    public String getSysUpdateUserName() {
        return sysUpdateUserName;
    }

    public void setSysUpdateUserName(String sysUpdateUserName) {
        this.sysUpdateUserName = sysUpdateUserName;
    }

    public LocalDateTime getSysCreateTime() {
        return sysCreateTime;
    }

    public void setSysCreateTime(LocalDateTime sysCreateTime) {
        this.sysCreateTime = sysCreateTime;
    }

    public LocalDateTime getSysUpdateTime() {
    return sysUpdateTime;
    }

    public void setSysUpdateTime(LocalDateTime sysUpdateTime) {
    this.sysUpdateTime = sysUpdateTime;
    }

    // equals 方法
    @Override
    public boolean equals(Object obj) {
        if (this == obj) return true;
        if (obj == null || getClass() != obj.getClass()) return false;
        BaseDomain baseDomain = (BaseDomain) obj;
        return sysCreateUserName.equals(baseDomain.sysCreateUserName) &&
               sysUpdateUserName.equals(baseDomain.sysUpdateUserName) &&
               sysCreateTime.equals(baseDomain.sysCreateTime);
    }

    // hashCode 方法
    @Override
    public int hashCode() {
        int result = sysCreateUserName != null ? sysCreateUserName.hashCode() : 0;
        result = 31 * result + (sysUpdateUserName != null ? sysUpdateUserName.hashCode() : 0);
        result = 31 * result + (sysCreateTime != null ? sysCreateTime.hashCode() : 0);
        return result;
    }

    // toString 方法
    @Override
    public String toString() {
        return "BaseDomain{" +
               "sysCreateUserName='" + sysCreateUserName + '\'' +
               ", sysUpdateUserName='" + sysUpdateUserName + '\'' +
               ", sysCreateTime='" + sysCreateTime + '\'' +
               '}';
    }
}
