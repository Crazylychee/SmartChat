<template>
  <div
    class="chat-item custom-item"
    :class="{ active: useChatStore.activeChat === props.userId }"
    @click="handleChatClick"
    @contextmenu.stop="(e) => rightClicked(e)"
  >
    <!-- TODO: 完成未读消息对接 -->
    <a-badge :count="0" title="">
      <img v-if="data" :src="data.profilePicture" alt="" class="chat-avatar" />
      <img v-else :src="defaultProfilePicture" alt="" class="chat-avatar" />
    </a-badge>
    <div class="chat-info">
      <div class="chat-info-top">
        <p v-if="data" class="chat-name">{{ data.name }}</p>
        <p v-else class="chat-name">{{ props.userId }}</p>
        <p class="chat-time">{{ friendTime(props.time) }}</p>
      </div>
      <p class="chat-content">{{ props.context }}</p>
    </div>
  </div>
</template>

<script setup lang="ts">
import { friendTime } from '@/utils/Utils'
import type { UserInfo } from '@/store/modules/userInfo'
import { defaultProfilePicture, useUserInfoStore } from '@/store/modules/userInfo'
import useStore from '@/store'
import { useRequest } from 'vue-request'

const props = defineProps({
  userId: {
    type: String,
    required: true
  },
  context: {
    type: String,
    required: true
  },
  time: {
    type: Date,
    required: true
  }
})

const userInfoStore = useUserInfoStore()
const { useChatStore, useSystemStore, useContextMenuStore } = useStore()

// 点击聊天列表
// TODO: 完成未读消息对接
const handleChatClick = () => {
  // 展示聊天内容
  useChatStore.activeChat = props.userId
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

const { data, error, loading } = useRequest<UserInfo>(() => userInfoStore.getUserInfo(props.userId))
</script>

<style lang="less" scoped>
.chat-item {
  display: flex;
  padding: 12px;

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
