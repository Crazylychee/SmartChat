import OpenAI from 'openai'

export const ai = new OpenAI({
  apiKey: import.meta.env.RENDERER_VITE_GROQ_API_KEY,
  baseURL: 'https://api.groq.com/openai/v1',
  dangerouslyAllowBrowser: true
})

export const defaultModel = 'llama-3.1-70b-versatile'
export const defaultMessages: AIMessage[] = [
  { role: 'system', content: 'You are a helpful assistant.' }
]

export type AIMessage = {
  role: 'system' | 'user' | 'assistant'
  content: string
}
