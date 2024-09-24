import TurmsClient from 'turms-client-js'
import { useUserInfoStore } from '@/store/modules/userInfo'
import { time } from 'console'

// 全局唯一的 TurmsClient 实例
let turmsClient: null | TurmsClient = null

export function useTurmsClient() {
  if (!turmsClient) {
    turmsClient = new TurmsClient({
      wsUrl: import.meta.env.RENDERER_VITE_TURMS_WS_URL,
      connectionTimeout: 10000,
      requestTimeout: 5000,
      heartbeatInterval: 30000,
      useSharedContext: false
    })
  }

  return { client: turmsClient }
}

export async function loginTurmsClient(userId: string, password: string) {
  const { client } = useTurmsClient()

  console.log('开始登录', userId, password)

  const result = await client.userService.login({
    userId: userId,
    password: password
  })

  saveLoginData(userId, password)

  // 延迟 1 秒，等待用户信息加载完成
  await new Promise((resolve) => setTimeout(resolve, 1000))

  const userInfo = useUserInfoStore()
  userInfo.user.id = userId

  console.log('登录结束', result)
  return result
}

// 过期时间1小时
const EXPIRY_TIME = 60 * 60 * 1000

function saveLoginData(turmsId, turmsToken) {
  const expiryTimestamp = Date.now() + EXPIRY_TIME // 当前时间 + 过期时间
  const loginData = {
    turmsId: turmsId,
    turmsToken: turmsToken,
    expiry: expiryTimestamp
  }

  // 保存数据到 localStorage
  localStorage.setItem('turmsLoginData', JSON.stringify(loginData))
  console.log('turmsId 和 turmsToken 已保存')
}

type LoginData = {
  turmsId: string
  turmsToken: string
  expiry: number
}

async function autoLoginTurmsClient() {
  const savedLoginData = localStorage.getItem('turmsLoginData')
  console.log(savedLoginData)

  if (savedLoginData) {
    const parsedData: LoginData = JSON.parse(savedLoginData)
    const currentTime = Date.now()

    // 检查 turmsToken 是否过期
    if (currentTime < parsedData.expiry) {
      console.log(
        '自动登录成功，turmsId 为：' +
          parsedData.turmsId +
          '，turmsToken 为：' +
          parsedData.turmsToken
      )
      await loginTurmsClient(parsedData.turmsId, parsedData.turmsToken)
    } else {
      console.log('turmsToken 已过期')
      localStorage.removeItem('loginData') // 删除过期的 turmsToken 和 turmsId
      loginTurmsClientFailed()
    }
  } else {
    console.log('没有保存的登录信息，自动登录失败')
    loginTurmsClientFailed()
  }
}

function loginTurmsClientFailed() {
  console.log('登录失败')
}

// 确保请求时已经登录
export async function loginVerifier<T>(fetcher: () => Promise<T>): Promise<T> {
  const { client } = useTurmsClient()
  if (client.userService.isLoggedIn) {
    return fetcher()
  } else {
    await autoLoginTurmsClient()
    if (client.userService.isLoggedIn) {
      return fetcher()
    } else {
      throw new Error('未登录')
    }
  }
}
