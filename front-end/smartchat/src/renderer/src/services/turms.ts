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
  return turmsClient
}
