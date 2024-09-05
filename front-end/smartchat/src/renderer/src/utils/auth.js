import Cookies from 'js-cookie'

const TokenKey = 'vue_admin_template_token'
const UserIdKey = 'vue_admin_template_user_id'

export function getToken() {
    return Cookies.get(TokenKey)
}

export function setToken(token) {
    return Cookies.set(TokenKey, token)
}

export function getUserId() {
    return Cookies.get(UserIdKey)
}

export function setUserId(userId) {
    return Cookies.set(UserIdKey, userId)
}

/**
 * 移除Cookies所有用户相关数据
 */
export function removeToken() {
    Cookies.remove(TokenKey)
    return Cookies.remove(UserIdKey)
}
