<template>
  <div class="chat-item" :class="[props.type === 'send' ? 'chat-send' : 'chat-receive']">
    <div class="chat-time">
      <span>{{ friendTime(props.createTime, 'datetime') }}</span>
    </div>
    <div class="chat-info">
      <chat-avatar :user-id="props.userId" />
      <p class="chat-content">
        {{ props.content }}
      </p>
      <!-- TODO：支持文件类型 -->
      <!-- <p class="chat-content" v-else>
        <a-tooltip :title="chat.File.name">
          <span class="upload-name-view">{{ chat.File.name }}</span>
        </a-tooltip>
        <i class="wechatfont wechat-folder"></i>
      </p> -->
    </div>
  </div>
</template>

<script setup lang="ts">
import { defineProps } from 'vue'
import { friendTime } from '@/utils/Utils'
import ChatAvatar from './ChatAvatar.vue'

const props = defineProps({
  userId: {
    type: String,
    required: true
  },
  type: {
    type: String,
    required: true
  },
  content: {
    type: String,
    required: true
  },
  createTime: {
    type: Date,
    required: true
  }
})
</script>

<style lang="less" scoped>
.ps {
  height: 400px;
}

.chat-item {
  font-size: 14px;
  width: 100%;

  .chat-time {
    margin: 10px auto;
    text-align: center;

    span {
      display: inline-block;
      background-color: #eaeaea;
      font-size: 12px;
      color: #ffffff;
      padding: 4px 6px;
      border-radius: 2px;
    }
  }

  .chat-info {
    display: flex;

    img {
      width: 42px;
      height: 42px;
      overflow: hidden;
      cursor: pointer;
    }

    .chat-content {
      position: relative;
      max-width: 76%;
      padding: 12px;
      border-radius: 6px;
      margin: 0 16px;
      line-height: 1.4;
      word-break: break-all;
      user-select: text;

      &::before {
        content: '';
        position: absolute;
        width: 0;
        height: 0;
        border: 8px solid transparent;
        border-right: 8px solid #fff;
        left: -16px;
        top: 12px;
      }
    }
  }

  &.chat-send {
    .chat-info {
      flex-direction: row-reverse;
    }

    .chat-content {
      background-color: #95ec69;

      &::before {
        border-right: 0;
        border-left: 8px solid #95ec69;
        left: auto;
        right: -8px;
        top: 12px;
      }

      &:hover {
        background-color: #89d961;

        &::before {
          border-left: 8px solid #89d961;
        }
      }
    }
  }

  &.chat-receive {
    align-self: flex-start;

    .chat-content {
      background-color: #ffffff;

      &:hover {
        background-color: #ebebeb;

        &::before {
          border-right: 8px solid #ebebeb;
        }
      }
    }
  }
}
</style>
