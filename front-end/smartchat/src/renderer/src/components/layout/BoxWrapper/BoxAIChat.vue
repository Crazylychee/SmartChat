<template>
  <WeNoData v-if="noSelect" />
  <template v-else>
    <perfect-scrollbar ref="perfectScrollbarRef">
      <div class="chat-box">
        <AIChatItem
          v-for="(message, index) in messageList"
          :key="index"
          :type="message.role"
          :content="message.content"
        />
      </div>
    </perfect-scrollbar>
    <div class="input-box">
      <div class="input-control">
        <div>
          <a-button class="file-btn">
            <i class="wechatfont wechat-emoji" title="表情" @click="showDrawer"></i
          ></a-button>
          <a-upload
            accept="image/*,text/*,application/*"
            list-type="picture"
            :max-count="1"
            @change="handleChange"
            :showUploadList="false"
          >
            <a-button class="file-btn">
              <i class="wechatfont wechat-folder" title="发送文件"></i>
            </a-button>
          </a-upload>
          <a-button class="file-btn">
            <i class="wechatfont wechat-cropping" title="截图(Alt+A)"></i
          ></a-button>
          <a-button class="file-btn">
            <i class="wechatfont wechat-history_message" title="聊天记录"></i
          ></a-button>
        </div>
        <div>
          <a-button class="file-btn">
            <i class="wechatfont wechat-audio_chat" title="语音聊天"></i
          ></a-button>
          <a-button class="file-btn">
            <i class="wechatfont wechat-video_chat" title="视频聊天"></i
          ></a-button>
        </div>
      </div>
      <div class="input-area">
        <a-textarea
          class="scroll-no-bar"
          ref="input"
          v-model:value="inputText"
          placeholder="请输入"
          @focus="handletextareaFocus"
          @blur="handletextareaBlur"
          @pressEnter="handlePressEnter"
        />
      </div>
      <div class="input-btn">
        <a-tooltip placement="topRight" trigger="click">
          <template #title v-if="!inputText.trim()">不能发送空白信息</template>
          <button @click="sendMsg">发送(S)</button>
        </a-tooltip>
      </div>
      <a-drawer class="drawer" title="Emojis" placement="bottom" :open="open" @close="onClose">
        <Vue3EmojiPicker
          class="emoji-picker"
          :native="false"
          v-model="selectedEmoji"
          @select="onEmojiSelect"
          :hide-search="true"
          :hide-group-icons="true"
          :hide-group-names="true"
        />
      </a-drawer>
    </div>
  </template>
  <RelativeBox :visible="infoVisible" @close="infoVisible = false">
    <UserInfo :user="userInfo" type="own" />
  </RelativeBox>
</template>

<script setup>
import { onMounted, ref, watch, nextTick } from 'vue'
import { useFocus } from '@vueuse/core'
import RelativeBox from '../../../components/common/RelativeBox/Index.vue'
import UserInfo from '../../../components/common/UserInfo/Index.vue'
import useStore from '../../../store'
import { useAIStore } from '@/store/modules/ai'
const AIStore = useAIStore()
const { useChatStore, useContextMenuStore, useUserInfoStore, useRelativeBoxStore } = useStore()
import ChatItem from '@/components/common/ChatItem.vue'

import 'ant-design-vue/dist/reset.css'
import 'perfect-scrollbar/css/perfect-scrollbar.css'
import '@/assets/icon/iconfont.css'
import 'element-plus/dist/index.css'
import '@/global.less'

import eventBus from '../../../utils/eventBus'
import AIChatItem from '@/components/common/AIChatItem.vue'
// import BoxEmoji from "./BoxEmoji.vue"

const messageList = ref([])

// 点击头像展示信息
const infoVisible = ref(false)
const userInfo = ref({})

// const showSendInfo = (e) => {
//   infoVisible.value = true
//   userInfo.value = friendInfo.value
//   useRelativeBoxStore.showBox(e.clientY, e.clientX)
// }

// const showUserInfo = (e) => {
//   infoVisible.value = true
//   userInfo.value = useUserInfoStore.user
//   useRelativeBoxStore.showBox(e.clientY, e.clientX)
// }

// 右键聊天文本
// const handleContentContextmenu = (e) => {
//   e.preventDefault();
//   const selection = window.getSelection().toString();
//   if (selection) {
//     // 如果已选择文本的情况下右键
//     // 展示小菜单：复制、多选、搜一搜
//     useContextMenuStore.showContextMenu(e.clientX, e.clientY, "chatSelectSome");
//   } else {
//     // 直接右键聊天文本
//     // 全选文本并展示大菜单：复制、翻译、转发、收藏、多选、引用、搜一搜、删除
//     const node = e.target.childNodes[0]
//     selectText(node, 0, node.length); // 选择文本
//     useContextMenuStore.showContextMenu(e.clientX, e.clientY, "chatSelectAll");
//   }
//   // 选择指定范围的文本
//   function selectText(element, start, end) {
//     var range = document.createRange(); // 创建一个 Range 对象
//     range.setStart(element, start); // 设置起始位置
//     range.setEnd(element, end); // 设置结束位置

//     let selection = window.getSelection(); // 获取当前选择对象
//     selection.removeAllRanges(); // 清空已有的选择范围
//     selection.addRange(range); // 添加新的选择范围
//   }
// }

const perfectScrollbarRef = ref(null)
onMounted(() => {
  autoScrollBottom()
})

// 自动滚动至底部
const autoScrollBottom = () => {
  nextTick(() => {
    if (perfectScrollbarRef?.value?.$el?.scrollHeight) {
      perfectScrollbarRef.value.$el.scrollTop = perfectScrollbarRef.value.$el.scrollHeight
    }
  })
}

// 监听当聊天对象切换时，展示对应的聊天内容
const noSelect = ref(true)
// const chatContent = ref([])
const input = ref()
const { focused: inputFocus } = useFocus(input, { initialValue: true })

// const friendInfo = ref({})

watch(
  [() => AIStore.activeChatId],
  ([activeChat]) => {
    noSelect.value = !activeChat
    inputFocus.value = true
    if (activeChat) {
      messageList.value = AIStore.chats[activeChat].messages || []
    }
    autoScrollBottom()
  },
  {
    immediate: true,
    deep: true
  }
)

// // 监听输入框聚焦失焦，方便ctrl+enter快捷发送信息
// const handletextareaFocus = () => {
//   useChatStore.isFocusSendArea = true;
// }
// const handletextareaBlur = () => {
//   useChatStore.isFocusSendArea = false;
// }

// 发送聊天信息
const inputText = ref('')
const sendMsg = () => {
  if (!inputText.value.trim()) {
    return
  }
  // useChatStore.sendMessage({
  //   isGroupMessage: false,
  //   targetId: useChatStore.activeChat,
  //   deliveryDate: new Date(),
  //   text: inputText.value
  // })
  // 清空输入框
  AIStore.chatWithAI(inputText.value)
  inputText.value = ''
  // 聊天记录自动滚动到底部
  autoScrollBottom()
}

// //发送文件
// let count = 0

// const handleChange = (file) => {
//   if (!file.file) {
//     return
//   }

//   if (file.file.status === 'error') {
//     console.log(count++)
//     // 将文件添加至聊天记录
//     useChatStore.sendChatMsg(useChatStore.activeChat, file.file)
//     // 将聊天前移
//     useChatStore.forwardChat(useChatStore.activeChat, file.file)
//     // 聊天记录自动滚动到底部
//     autoScrollBottom()
//   }
// }
//表情包
const open = ref(false)

const showDrawer = () => {
  open.value = true
}
const onClose = () => {
  open.value = false
}
function handletextareaBlur(event) {
  // 更新文本区域内容
  const currentText = event.target.value
  console.log(event.target.value)
  inputText.value = currentText
}
function onEmojiSelect(emoji) {
  console.log(emoji)
  // 当用户选择emoji时，将其插入到textarea中
  if (emoji) {
    const text = inputText.value
    const { i } = emoji
    inputText.value = `${text}${i}`
  }
  onClose()
}

// const handlePressEnter = (e) => {
//   if (!e.ctrlKey && useChatStore.sendMethods === "enter") {
//     e.preventDefault();
//     sendMsg();
//   }
// }

// eventBus.on("sendMsgEvent", () => {
//   sendMsg();
// });
</script>

<style lang="less" scoped>
.ps {
  height: 100%;
}

.chat-box {
  flex: 1;
  padding: 20px 30px;
  display: flex;
  flex-direction: column;
  // overflow-y: scroll;

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

.input-box {
  display: flex;
  flex-direction: column;
  border-top: 1px solid #ececec;

  .input-control {
    display: flex;
    justify-content: space-between;
    height: 36px;
    line-height: 36px;
    padding: 0 18px;
    div {
      display: flex;
    }
    i {
      font-size: 22px;
      margin: 0 6px;
      color: #666;
      cursor: pointer;

      &:hover {
        color: #000;
      }
    }
  }

  .input-area {
    flex: 1;
    padding: 0 18px;
    min-height: 120px;

    :deep(.ant-input) {
      height: 100%;
      background-color: transparent;
      border: none;
      box-shadow: none;
      line-height: 1.4;
      resize: none;
    }
  }

  .input-btn {
    height: 58px;
    display: flex;
    justify-content: flex-end;
    align-items: center;
    padding-right: 20px;

    button {
      width: 102px;
      height: 32px;
      background-color: #e9e9e9;
      border: none;
      font-size: 14px;
      color: #07c160;
      cursor: pointer;
      border-radius: 4px;

      &:hover {
        background-color: #d2d2d2;
      }
    }
  }
}
.file-btn {
  border: none;
  display: flex;
  align-items: center;
  justify-content: center;
  width: 32px;
  z-index: 999;
  background-color: transparent;
}
</style>
