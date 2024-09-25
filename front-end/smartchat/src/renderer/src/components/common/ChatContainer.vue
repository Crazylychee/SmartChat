<template>
  <perfect-scrollbar ref="perfectScrollbarRef">
    <div ref="topSentinel" class="scroll-trigger"></div>
    <div class="chat-box">
      <ChatItem
        v-for="message in messageListToCheck"
        :key="message.id"
        :user-id="message.senderId"
        :type="message.senderId === useUserInfoStore.user.id ? 'send' : 'receive'"
        :content="message.text"
      />
    </div>
  </perfect-scrollbar>
</template>

<script setup>
import useStore from '@/store'
import { ref, onMounted, onUnmounted, nextTick, watch } from "vue";
import 'ant-design-vue/dist/reset.css'
import 'perfect-scrollbar/css/perfect-scrollbar.css'
import '@/assets/icon/iconfont.css'
import 'element-plus/dist/index.css'
import '@/global.less'
import ChatItem from './ChatItem.vue'; // 假设 ChatItem 组件已经定义
const {useUserInfoStore } = useStore();
const perfectScrollbarRef = ref(null);

const topSentinel = ref(null);
const chatContainer = ref(null);
let observer = null;
let timeoutId = null;

const emit = defineEmits(['trigger']);

const props = defineProps({
  messageListToCheck: {
    type: Array,
    required: true,
  },
  autoScrollBottom: {
    type: Boolean,
    required: false,
  },
});



onMounted(() => {

  autoScrollBottomFunction();
  if (topSentinel.value) {
  observer = new IntersectionObserver((entries) => {
    entries.forEach((entry) => {
      if (entry.isIntersecting) {
        // 当元素进入视口时，设置一个 1 秒的定时器
        timeoutId = setTimeout(() => {
          emit('trigger'); // 触发 'trigger' 事件
        }, 1000);
      } else {
        // 当元素离开视口时，清除定时器
        clearTimeout(timeoutId);
      }
    });
  }, {
    threshold: 0.5, // 当元素的 50% 进入视口时触发
  });

  observer.observe(topSentinel.value);
  }

});



onUnmounted(() => {
  if (observer) {
    observer.disconnect();
  }
});

// 监听 autoScrollBottom 属性的变化
watch(() => props.autoScrollBottom, (newValue) => {
  if (newValue) {
    autoScrollBottomFunction();
  }
});


// 自动滚动至底部
const autoScrollBottomFunction = () => {
  nextTick(() => {
    if (perfectScrollbarRef?.value?.$el?.scrollHeight) {
      perfectScrollbarRef.value.$el.scrollTop = perfectScrollbarRef.value.$el.scrollHeight
    }
  })
}

</script>

<style scoped>
.chat-box {
  flex: 1;
  padding: 20px 30px;
  display: flex;
  flex-direction: column;

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
}


.scroll-trigger {
  padding: 20px;
  background-color: #f0f0f0;
  border: 2px dashed #ccc;
  border-radius: 10px;
  text-align: center;
  font-size: 1.2em;
  color: #333;
  transition: background-color 0.3s, transform 0.3s;
}

.scroll-trigger:hover {
  background-color: #e0e0e0;
  transform: scale(1.05);
}
</style>
