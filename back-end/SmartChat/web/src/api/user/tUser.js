import request from '@/utils/request'

/**
* 查询数据（分页）
*/
export function getUserTableData(params) {
  return request({
    url: '/user/pagelist',
    method: 'post',
    data: params
  })
}

/**
* 查询数据（不分页）
*/
export function getUserList() {
  return request({
    url: '/user/list',
    method: 'get',
  })
}

/**
* 批量删除
*/
export function deleteUser(ids) {
  return request({
    url: '/user/batchDelete',
    method: 'post',
    data: ids,
  })
}


/**
* 新增数据
*/
export function addUser(params) {
  return request({
    url: '/user/save',
    method: 'post',
    data: params
  })
}

/**
* 修改数据
*/
export function updateUser(params) {
  return request({
    url: '/user/update',
    method: 'post',
    data: params
  })
}
