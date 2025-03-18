<!-- <script lang="ts" setup></script> -->

<template>
  <div>
    <!-- <a-button class="file-btn" @click="showModal">
      <i class="wechatfont wechat-audio_chat" title="语音聊天"></i
    ></a-button>
    <a-button class="file-btn" @click="showModal">
      <i class="wechatfont wechat-video_chat" title="视频聊天"></i
    ></a-button> -->
    <a-modal
      v-model:open="open"
      width="1000px"
      :mask-closable="false"
      :footer="null"
      :destroy-on-close="true"
      @ok="handleOk"
    >
      <LiveKit />
    </a-modal>
  </div>
</template>

<!-- <template>
  <div>
    <a-button type="primary" @click="showModal">Open Modal of 1000px width</a-button>
  </div>
</template> -->
<script lang="ts" setup>
import LiveKit from '../livekit/LiveKit.vue'

// const open = ref<boolean>(false)
const open = defineModel<boolean>('open')
// const showModal = () => {
//   open.value = true
// }

// const props = defineProps({
//   open: {
//     type: Boolean,
//     required: true
//   }
// })

const handleOk = (e: MouseEvent) => {
  console.log(e)
  open.value = false
}
</script>
