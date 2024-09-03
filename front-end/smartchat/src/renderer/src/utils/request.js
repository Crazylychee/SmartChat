import axios from 'axios'
import {getToken} from "@/utils/auth";

// create an axios instance
const service = axios.create({
  baseURL: "http://47.113.224.195:9216",
  // baseURL: "http://localhost:9216",
  // withCredentials: true, // send cookies when cross-domain requests
  timeout: 9000 // request timeout
})

// request interceptor
service.interceptors.request.use(config => {

  const token = getToken();
  console.log(token)
  if (token) {
    config.headers['authorization'] = token;
  }
  // 设置默认的 Content-Type 为 application/json
  config.headers['Content-Type'] = 'application/json';
  return config;
}, error => {
  return Promise.reject(error);
});

// response interceptor
service.interceptors.response.use(
  /**
   * If you want to get http information such as headers or status
   * Please return  response => response
   */

  /**
   * Determine the request status by custom code
   * Here is just an example
   * You can also judge the status by HTTP Status Code
   */
  response => {

    // try {
    const res = response.data

    // if the custom code is not 20000, it is judged as an error.
    if (res.code !== 200) {

      /**
       * 403：认证状态失效，请重新登录！
       * 401：Token错误或失效！
       */
      if (res.code === 403 || res.code === 401) {
        // to re-login

      }
      return Promise.reject(new Error(res.message || 'Error'))
    } else if (res.code === 200 && res.showMessage) {
      return res
    } else {
      return res
    }
    // } catch (e) {
    //     console.log("数据格式有误")
    // }
  },
  error => {
    console.log('err' + error) // for debug
    return Promise.reject(error)
  }
)

export default service
