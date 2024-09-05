import request  from '@/utils/request'

const api = {
  userInfo: '/mock/api/userInfo',
  login: '/user/login',
  register: '/user/register',
  sendEmailCode: '/email/send',
  captchaImage: '/user/captchaImage'
}

export default api

//login
export function login(parameter) {
  return request({
    url: api.login,
    method: 'post',
    data: JSON.stringify(parameter)
  })
}

//register
export function register(parameter) {
  return request({
    url: api.register,
    method: 'post',
    data: JSON.stringify(parameter)
  })
}

//send email code
export function sendEmailCode(parameter) {
  return request({
    url: api.sendEmailCode,
    method: 'post',
    data: JSON.stringify(parameter)
  })
}

//captcha image
export function captchaImage() {
  return request({
    url: api.captchaImage,
    method: 'get',
  })
}

