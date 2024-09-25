<template>
  <a-dropdown>
    <a class="ant-dropdown-link" @click.prevent>
      <slot></slot>
    </a>
    <template #overlay>
      <a-menu @click="onClick">
        <a-menu-item key="向AI提问">向AI提问</a-menu-item>
        <a-menu-item key="总结对话">总结对话</a-menu-item>
        <a-menu-item key="生成回复">生成回复</a-menu-item>
      </a-menu>
    </template>
  </a-dropdown>
</template>
<script lang="ts" setup>
import type { MenuProps } from 'ant-design-vue'
import { useAIStore } from '@/store/modules/ai'
import { chatToPrompt } from '@/ai/assistant'
import { useChatStore } from '@/store/modules/chat'
import { useUserInfoStore } from '@/store/modules/userInfo'

const AIStore = useAIStore()
const chatstore = useChatStore()
const userInfoStore = useUserInfoStore()

const onClick: MenuProps['onClick'] = async ({ key }) => {
  const messageList = chatstore.getMessageListBySenderId(chatstore.activeChat)
  const friendInfo = await userInfoStore.getUserInfo(chatstore.activeChat)
  const myInfo = userInfoStore.user

  const chat = messageList.map((message) => {
    return {
      sender: message.senderId === myInfo.id ? '<我>' : friendInfo.name,
      text: message.text
    }
  })

  switch (key) {
    case '向AI提问':
      console.log('向AI提问')

      AIStore.createChat({
        title: '根据聊天向AI提问',
        messages: [chatToPrompt(chat)],
        type: 'chathistory'
      }).then((chatId) => {
        AIStore.activeChat(chatId)
      })
      break
    case '总结对话':
      AIStore.createChat({
        title: '总结对话',
        messages: [chatToPrompt(chat)],
        type: 'chathistory'
      }).then((chatId) => {
        AIStore.activeChat(chatId)
        AIStore.chatWithAI('总结对话')
      })
      break
    case '生成回复':
      AIStore.createChat({
        title: '生成回复',
        messages: [chatToPrompt(chat)],
        type: 'chathistory'
      }).then((chatId) => {
        AIStore.activeChat(chatId)
        AIStore.chatWithAI('生成回复')
      })
      break
  }
}
</script>
