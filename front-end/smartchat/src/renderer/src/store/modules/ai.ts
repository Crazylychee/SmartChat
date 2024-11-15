import { defineStore } from 'pinia'
import { reactive, ref } from 'vue'
import { ai, defaultMessages, defaultModel } from '@/ai/openai'
import type { AIMessage } from '@/ai/openai'

type Chat = {
  messages: AIMessage[]
  title: string
  id: string
  update: Date
  model: string
}

type Chats = Record<string, Chat>

export const useAIStore = defineStore('ai', () => {
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
      model: defaultModel
    }
  })

  const createChat = async (title = '新的聊天') => {
    const chat: Chat = {
      messages: [...defaultMessages],
      title,
      id: Date.now().toString(),
      update: new Date(),
      model: defaultModel
    }
    chats[chat.id] = chat
  }

  const chatWithAI = async (content) => {
    const chatId = activeChatId.value
    console.log('chatWithAI content', content)
    console.log('chatWithAI chatId', chatId)

    if (!chats[chatId]) throw new Error('AI Chat not found')

    const chat = chats[chatId]
    chat.messages.push({ role: 'user', content })
    console.log('chatWithAI messages', chat.messages[chatId])
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
      })
  }

  return { activeChatId, chats, createChat, chatWithAI }
})
