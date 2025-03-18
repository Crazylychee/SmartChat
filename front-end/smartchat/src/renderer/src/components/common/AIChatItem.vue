<template>
  <div
    v-if="props.type !== 'system'"
    class="chat-item"
    :class="[props.type === 'user' ? 'chat-send' : 'chat-receive']"
  >
    <div class="chat-info">
      <chat-avatar v-if="props.type === 'user'" :user-id="userInfoStore.user.id" />
      <img v-else :src="robot" />
      <p class="chat-content"><slot></slot></p>
    </div>
  </div>
</template>

<script setup lang="ts">
import { useUserInfoStore } from '@/store/modules/userInfo'
import { defineProps } from 'vue'
import ChatAvatar from './ChatAvatar.vue'
import robot from '@/assets/avatar/robot.svg'

const userInfoStore = useUserInfoStore()

const props = defineProps({
  type: {
    type: String,
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
  padding: 10px 0px;

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
