import { defineStore } from 'pinia'
import { reactive, ref } from 'vue'
import { ai, defaultMessages, defaultModel } from '@/ai/openai'
import type { AIMessage } from '@/ai/openai'
import { useSystemStore } from './system'

type Chat = {
  messages: AIMessage[]
  title: string
  id: string
  update: Date
  model: string
  type: 'chat' | 'chathistory'
  isLoading: boolean
  customAttributes: object
}

type ChatConfig = {
  messages?: AIMessage[]
  title?: string
  id?: string
  update?: Date
  model?: string
  type?: 'chat' | 'chathistory'
}

type Chats = Record<string, Chat>

export const useAIStore = defineStore('ai', () => {
  const systemStore = useSystemStore()

  const activeChatId = ref('1')
  const chats = reactive<Chats>({
    '1': {
      messages: [
        { role: 'system', content: '你是一直猫娘，回复带上喵~，使用富含颜表情的方式对话' },
        { role: 'user', content: '早上好' }
      ],
      title: 'AI Chat',
      id: '1',
      update: new Date(),
      model: defaultModel,
      type: 'chathistory',
      isLoading: false,
      customAttributes: { chathistoryId: '1', chathistoryName: '管理员' }
    }
  })

  const chat = () => {
    return chats[activeChatId.value]
  }

  const createChat = async (config?: ChatConfig) => {
    const chatId = Date.now().toString()
    const defaultConfig: Chat = {
      messages: [...defaultMessages],
      title: '新的聊天',
      id: chatId,
      update: new Date(),
      model: defaultModel,
      type: 'chat',
      isLoading: false,
      customAttributes: {}
    }
    const chat: Chat = { ...defaultConfig, ...config }
    chats[chat.id] = chat
    return chatId
  }

  const activeChat = (chatId: string) => {
    systemStore.activeMenu = 'ai'
    activeChatId.value = chatId
  }

  const chatWithAI = async (content) => {
    const chatId = activeChatId.value
    console.log('chatWithAI content', content)
    console.log('chatWithAI chatId', chatId)

    if (!chats[chatId]) throw new Error('AI Chat not found')

    const chat = chats[chatId]
    chat.messages.push({ role: 'user', content })
    console.log('chatWithAI messages', chat.messages[chatId])
    chat.isLoading = true
    ai.chat.completions
      .create({
        model: defaultModel,
        messages: chat.messages
      })
      .then((completion) => {
        const message = completion.choices[0].message
        console.log('chatWithAI message', message)
        chat.messages.push(message)
        chat.update = new Date()
        chat.isLoading = false
      })
      .catch((error) => {
        console.error('chatWithAI error', error)
        chat.isLoading = false
      })
  }

  return { activeChatId, chats, chat, createChat, chatWithAI, activeChat }
})
