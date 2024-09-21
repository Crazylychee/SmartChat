import { defineStore } from 'pinia'
import dayjs from 'dayjs'
import { guid } from '../../utils/Utils'
import { message } from 'ant-design-vue'
import { useTurmsClient } from '../../services/turms'
// import { useUserInfoStore } from './userInfo'

export const useChatStore = defineStore('chat', {
  state: () => {
    return {
      chatList: [
        {
          id: 1,
          friendId: 'user123',
          name: '张三',
          phone: 'wevDvi67',
          address: '广州深圳',
          avatar:
            'https://gd-hbimg.huaban.com/031f5d3bd63f279dad59f01c60a55c663f2a697b1717d-WCfqyf_fw480webp',
          lastChatTime: '2024-08-02T15:20:00Z',
          lastChatContent: '你好，很高兴认识你！',
          unReadCount: 6,
          isTop: false,
          isGroup: false
        },
        {
          id: 2,
          friendId: 'user124',
          name: '张三',
          phone: 'wevDvi11',
          address: '广州珠海',
          avatar:
            'https://gd-hbimg.huaban.com/f6c7acbca39dc564a5ab96838025ed54e44270374817f-cJymqZ_fw480webp',
          lastChatTime: '2024-08-02T15:21:00Z',
          lastChatContent: '你好！',
          unReadCount: 0,
          isTop: false,
          isGroup: false
        },
        {
          id: 3,
          friendId: 'user125',
          name: '群聊1',
          avatar:
            'https://gd-hbimg.huaban.com/e9a8611330775adc688738ecbfde875bc2c2e6fc13348-2VJc6U_fw480webp',
          lastChatTime: '2024-08-02T15:22:00Z',
          lastChatContent: '你好，很高兴认识你！',
          unReadCount: 9,
          isTop: false,
          isGroup: true
        },
        {
          id: 4,
          friendId: 'user126',
          name: '里斯',
          phone: 'wevDvi11',
          address: '广州珠海',
          avatar:
            'https://gd-hbimg.huaban.com/8424977b522ffcf85937b1d68a1352954198e8f03b4ee-rMEHQM_fw480webp',
          lastChatTime: '2024-08-02T15:23:00Z',
          lastChatContent: '你好，很高兴认识你！',
          unReadCount: 4,
          isTop: false,
          isGroup: false
        }
      ], // 聊天列表
      chatInfos: {
        user123: [
          {
            id: 1,
            type: 'send',
            content: '你是谁',
            createTime: '2023-08-10 12:12:12'
          },
          {
            id: 2,
            type: 'receive',
            content: '我是Vite',
            createTime: '2023-08-10 12:15:12'
          },
          {
            id: 3,
            type: 'send',
            content: '你是谁',
            createTime: '2023-08-10 12:12:12'
          },
          {
            id: 4,
            type: 'receive',
            content: '我是Vite',
            createTime: '2023-08-10 12:15:12'
          },
          {
            id: 5,
            type: 'send',
            content: '你是谁',
            createTime: '2023-08-10 12:12:12'
          },
          {
            id: 6,
            type: 'receive',
            content: '最新信息',
            createTime: '2023-08-10 12:15:12'
          }
        ],
        user124: [
          {
            id: 1,
            type: 'send',
            content: '很高兴认识你',
            createTime: '2023-08-10 12:12:12'
          },
          {
            id: 2,
            type: 'receive',
            content: '我也是！'
          }
        ],
        user125: [
          {
            id: 1,
            type: 'send',
            content: '大家好',
            createTime: '2023-08-10 12:12:12'
          },
          {
            id: 2,
            type: 'receive',
            content: '大家好'
          }
        ],
        user126: [
          {
            id: 1,
            type: 'send',
            content: '你好',
            createTime: '2023-08-10 12:12:12'
          }
        ]
      },
      messageList: [],
      // 聊天记录
      activeChat: '', // 当前聚焦的聊天对象id
      isFocusSendArea: false,
      sendMethods: 'enter' // 发送消息方式
    }
  },
  actions: {
    addChat() {
      this.chatList.shift({
        id: '2',
        name: '',
        type: '',
        lastChatTime: '',
        lastChatContnt: '',
        lastChatContntType: '',
        avatar: ''
      })
    },
    editChat() {},
    deleteChat() {},
    /**
     * 将文本添加至聊天记录
     * @param {string} activeChat 当前聊天
     * @param {string} content 发送的信息
     */
    sendChatMsg(activeChat, content) {
      console.log(content, 'content')
      if (content.uid) {
        const typeStart = content.type.toLowerCase()
        if (typeStart.startsWith('image/')) {
          message.error('图片！')
          //转化图片地址base64
          const getBase64 = (file) => {
            return new Promise((resolve, reject) => {
              const reader = new FileReader()
              reader.readAsDataURL(file)
              reader.onload = () => resolve(reader.result)
              reader.onerror = (error) => reject(error)
            })
          }

          const that = this
          async function setBase64Url(file) {
            try {
              const base64Url = await getBase64(file)
              // 由于使用了 await，base64Url 现在包含了结果
              console.log(base64Url)
              that.chatInfos[activeChat].push({
                id: guid(),
                type: 'send',
                File: content,
                base64Url: base64Url,
                createTime: dayjs().format('YYYY-MM-DD HH:mm:ss')
              })
            } catch (error) {
              console.error('Error converting file to base64 URL:', error)
            }
          }

          // 调用异步函数
          setBase64Url(content.originFileObj)
        } else {
          this.chatInfos[activeChat].push({
            id: guid(),
            type: 'send',
            File: content,
            createTime: dayjs().format('YYYY-MM-DD HH:mm:ss')
          })
        }
        console.log(this.chatInfos[activeChat], 'this.chatInfos[activeChat]')

        this.chatInfos[activeChat].push({
          id: guid(),
          type: 'send',
          File: content,
          createTime: dayjs().format('YYYY-MM-DD HH:mm:ss')
        })
        console.log(this.chatInfos[activeChat], 'this.chatInfos[activeChat]')
      } else {
        this.chatInfos[activeChat].push({
          id: guid(),
          type: 'send',
          content: content,
          createTime: dayjs().format('YYYY-MM-DD HH:mm:ss')
        })
      }
      console.log(this.chatInfos[activeChat], 'this.chatInfos[activeChat]')
    },
    /**
     * 将聊天前移
     * @param {string} activeChat 当前聊天
     * @param {string} content 发送的信息
     */
    forwardChat(activeChat, content) {
      const targetIndex = this.chatList.findIndex((item) => item.friendId === activeChat)
      const targetItem = this.chatList.splice(targetIndex, 1)[0]
      targetItem.lastChatContent = content
      targetItem.lastChatTime = dayjs().format('YYYY-MM-DD HH:mm:ss')
      this.chatList.unshift(targetItem)
    },
    async addListener() {
      const { client } = useTurmsClient()

      const listener = (message, messageAddition) => {
        this.messageList.push(message)
      }

      client.messageService.addMessageListener(listener)

      return () => {
        client.messageService.removeMessageListener({ listener })
      }
    }
  },
  getters: {
    latestMessages: (state) => {
      return getLastestMessage(state.messageList)
    }
  },
  persist: {
    // enabled: true,
    strategies: [
      {
        storage: localStorage
      }
    ]
  }
})

function getLastestMessage(messages) {
  // 按发送者分组
  const groupedMessages = messages.reduce((acc, message) => {
    if (!acc[message.senderId]) {
      acc[message.senderId] = []
    }
    acc[message.senderId].push(message)
    return acc
  }, {})

  // 获取每个用户的最新消息
  const latestMessages = Object.keys(groupedMessages).map((senderId) => {
    const userMessages = groupedMessages[senderId]
    // 按 deliveryDate 排序，获取最新的消息
    userMessages.sort((a, b) => new Date(b.deliveryDate) - new Date(a.deliveryDate))
    return userMessages[0]
  })

  return latestMessages
}
