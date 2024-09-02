import TurmsClient from 'turms-client-js'

// 全局唯一的 TurmsClient 实例
let turmsClient: null | TurmsClient = null

export function useTurmsClient() {
  if (!turmsClient) {
    turmsClient = new TurmsClient({
      wsUrl: process.env.TURMS_WS_URL,
      connectionTimeout: 10000,
      requestTimeout: 5000,
      minRequestInterval: 100,
      heartbeatInterval: 30000,
      useSharedContext: false
    })
  }

  // 临时代码，一创建就登录

  // 检查环境变量是否存在
  if (process.env.TURMS_USERNAME === undefined || process.env.TURMS_PASSWORD === undefined) {
    console.warn('请设置环境变量 TURMS_USERNAME 和 TURMS_PASSWORD')
    return
  }

  turmsClient.userService.login({
    userId: process.env.TURMS_USERNAME,
    password: process.env.TURMS_PASSWORD
  })

  return turmsClient
}
