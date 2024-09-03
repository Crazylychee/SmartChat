import TurmsClient from 'turms-client-js'

// 全局唯一的 TurmsClient 实例
let turmsClient: null | TurmsClient = null

export async function useTurmsClient() {
  if (!turmsClient) {
    turmsClient = new TurmsClient({
      wsUrl: import.meta.env.RENDERER_VITE_TURMS_WS_URL,
      connectionTimeout: 10000,
      requestTimeout: 5000,
      minRequestInterval: 100,
      heartbeatInterval: 30000,
      useSharedContext: false
    })
    // 临时代码，一创建就登录

    // 检查环境变量是否存在
    if (
      import.meta.env.RENDERER_VITE_TURMS_USERNAME === undefined ||
      import.meta.env.RENDERER_VITE_TURMS_PASSWORD === undefined
    ) {
      console.warn('请设置环境变量 TURMS_USERNAME 和 TURMS_PASSWORD')
      throw new Error('环境变量 TURMS_USERNAME 和 TURMS_PASSWORD 未设置')
    }

    const result = await turmsClient.userService.login({
      userId: import.meta.env.RENDERER_VITE_TURMS_USERNAME,
      password: import.meta.env.RENDERER_VITE_TURMS_PASSWORD
    })

    console.log('登录成功', result)
  }

  return { client: turmsClient }
}
