import TurmsClient from 'turms-client-js'
import { useUserInfoStore } from '@/store/modules/userInfo'

// 全局唯一的 TurmsClient 实例
let turmsClient: null | TurmsClient = null

export async function useTurmsClient() {
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
  const { client } = await useTurmsClient()

  console.log('开始登录', userId, password)

  const result = await client.userService.login({
    userId: userId,
    password: password
  })

  const userInfo = useUserInfoStore()
  userInfo.user.id = userId

  console.log('登录结束', result)
  return result
}
