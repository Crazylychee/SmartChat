<template>
  <div class="container">
    <a-textarea
      ref="input"
      @input="handleInput"
      :value="inputRef"
      @blur="handletextareaBlur"
      class="textarea"
      :autoSize="{ minRows: 3, maxRows: 5 }"
    ></a-textarea>

    <a-button type="primary" @click="showDrawer">Open</a-button>
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

<script setup>
import { ref } from 'vue'

const inputRef = ref('')
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

  inputRef.value = currentText
}
function onEmojiSelect(emoji) {
  // 当用户选择emoji时，将其插入到textarea中
  if (emoji) {
    const text = inputRef.value
    const { i } = emoji
    inputRef.value = `${text}${i}`
  }
  onClose()
}
</script>

<style lang="less" scoped>
.container {
  display: flex;
  flex-direction: column;
  align-items: center;
  justify-content: center;
  height: 50vh;
  width: 50vw;
  background-color: #f0f0f0;

  overflow: hidden;
  .emoji-picker {
    overflow-y: scroll;
    width: 100%;
  }
}
.textarea {
  width: 200px;
  height: 200px;
  background: #918f8f;
  resize: none;
  padding: 10px;
  font-size: 16px;
  border: 1px solid #ccc;
  border-radius: 5px;
}
.drawer {
  width: 10%;
  height: 100%;
}
</style>
