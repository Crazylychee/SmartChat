import request  from '@/utils/request'

const api = {
  userInfo: '/mock/api/userInfo',
  friend: '/mock/api/friend',
  group: '/mock/api/group',
  collect: '/mock/api/collect'
}

export default api

//post
export function postAction(url, parameter) {
  return request({
    url: url,
    method: 'post',
    data: parameter
  })
}

//post method= {post | put}
export function httpAction(url, parameter, method) {
  return request({
    url: url,
    method: method,
    data: parameter
  })
}

//get
export function getAction(url, parameter) {
  return request({
    url: url,
    method: 'get',
    params: parameter
  })
}

// 获取好友列表
export function getUserInfo(parameter) {
  return request({
    url: api.userInfo,
    method: 'get',
    params: parameter
  })
}

// 获取好友列表
export function getFriendList(parameter) {
  return request({
    url: api.friend,
    method: 'get',
    params: parameter
  })
}

// 获取群组列表
export function getGroupList(parameter) {
  return request({
    url: api.group,
    method: 'get',
    params: parameter
  })
}

// 获取收藏列表
export function getCollectList(parameter) {
  return request({
    url: api.collect,
    method: 'get',
    params: parameter
  })
}
