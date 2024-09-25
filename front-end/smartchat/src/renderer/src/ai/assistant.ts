import type { AIMessage } from '@/ai/openai'
import type { ParsedModel } from 'turms-client-js'

type Message = ParsedModel.Message

// 接收聊天记录，返回 prompt 字符串
export const chatToPrompt = (messages): AIMessage => {
  return {
    role: 'system',
    content:
      '你是一个人工智能助手，根据以下聊天记录(格式为 <发送者>:<消息内容>\\n)回答问题:' +
      messages.map((message) => `${message.senderId}: ${message.text}`).join('\n')
  }
}
