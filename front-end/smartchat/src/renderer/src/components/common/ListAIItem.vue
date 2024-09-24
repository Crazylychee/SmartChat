<template>
  <div
    class="chat-item custom-item"
    :class="{ active: AIStore.activeChatId === chatId }"
    @click="handleChatClick"
    @contextmenu.stop="(e) => rightClicked(e)"
  >
    <div class="chat-info">
      <div class="chat-info-top">
        <p class="chat-name">{{ props.title }}</p>
        <p class="chat-time">{{ friendTime(props.time) }}</p>
      </div>
      <p class="chat-content">{{ props.model }}</p>
    </div>
  </div>
</template>

<script setup lang="ts">
import { friendTime } from '@/utils/Utils'
import { useAIStore } from '@/store/modules/ai'
import useStore from '@/store'

const props = defineProps({
  chatId: {
    type: String,
    required: true
  },
  time: {
    type: Date,
    required: true
  },
  title: {
    type: String,
    required: true
  },
  model: {
    type: String,
    required: true
  }
})

const AIStore = useAIStore()

// 点击聊天列表
// TODO: 完成未读消息对接
const handleChatClick = () => {
  // 展示聊天内容
  AIStore.activeChatId = props.chatId
  // useChatStore.chatList.map((item) => {
  //   if (item.friendId === chat.friendId) {
  //     item['unReadCount'] = 0
  //   }
  // })
  // // 展示聊天标题
  // useSystemStore.boxTitleText = chat.name
  // useSystemStore.listSearchText = ''
}

// TODO: 完成contextmenu对接
// 点击右键展示自定义菜单
const rightClicked = (e) => {
  e.preventDefault()
  // useContextMenuStore.showContextMenu(e.clientX, e.clientY, 'chat', chat)
}
</script>

<style lang="less" scoped>
.chat-item {
  display: flex;
  padding: 12px;
  height: 64px;

  &.top {
    background-color: #dcdcdc;
    &:hover {
      background-color: #d6d6d6;
    }
    &.active {
      background-color: #c9c9c9;
    }
  }

  .chat-avatar {
    width: 40px;
    height: 40px;
    border-radius: 4px;
  }

  .chat-info {
    flex: 1;
    display: flex;
    flex-direction: column;
    justify-content: space-around;
    margin-left: 12px;
    width: 170px;

    .chat-info-top {
      display: flex;
      justify-content: space-between;
      font-size: 14px;
      color: #000;

      .chat-name {
        overflow: hidden;
        text-overflow: ellipsis;
        white-space: nowrap;
        flex: 1;
      }

      .chat-time {
        font-size: 12px;
        color: #999;
      }
    }

    .chat-content {
      font-size: 12px;
      color: #999;
      overflow: hidden;
      text-overflow: ellipsis;
      white-space: nowrap;
    }
  }
}
</style>

<style lang="less">
.ant-badge {
  .ant-badge-count {
    min-width: 16px !important;
    height: 16px !important;
    line-height: 16px !important;
    box-shadow: none !important;
    font-size: 12px !important;
    .ant-scroll-number-only,
    .ant-scroll-number-only-unit {
      height: 16px !important;
    }
  }
  .ant-badge-multiple-words {
    padding: 0 4px;
  }
}
</style>
