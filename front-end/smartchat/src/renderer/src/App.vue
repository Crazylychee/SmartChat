<template>
  <div class="wrapper" @click="handleWechatClick" @contextmenu="handleWrapperContextMenu">
    <WeChat
      @click="handleWechatClick"
      :style="{ zIndex: wechatIndex }"
      @contextmenu="handleWechatContextMenu"
    />
    <!-- <Edit/> -->
  </div>
</template>

<script setup>
import TurmsClient from 'turms-client-js'
import DeviceType from 'turms-client-js'
import { ref, watch } from 'vue'
import { useWindowFocus } from '@vueuse/core'
import useStore from '@/store'

const { useContextMenuStore, useSystemStore } = useStore()
import WeChat from '@/components/WeChat.vue'
import TaskBar from './components/layout/TaskBar/Index.vue'
import Edit from './components/Edit.vue'
///////////////////////////////////////////////
// On the first tab of the same origin
// The client will create a new WebSocket connection
const client = new TurmsClient({
  wsUrl: 'ws://47.113.224.195:31115',
  connectionTimeout: 10000,
  requestTimeout: 5000,
  minRequestInterval: 100,
  heartbeatInterval: 30000,
  useSharedContext: false
});
client.userService.login({
  userId: 1,
  password: "123",
  deviceType: DeviceType.BROWSER
});


//////////////////////////////////////////////

const windowFocused = useWindowFocus()
watch(windowFocused, (newVal) => {
  if (!newVal) {
    // 浏览器失焦时，隐藏菜单
    doHide()
  }
})

const handleWechatClick = () => {
  // 点击wechat任意位置移除系统默认右键菜单
  doHide()
}

const handleWechatContextMenu = (e) => {
  // 点击wechat任意位置屏蔽系统默认右键菜单
  e.preventDefault()
  // 如果已展示自定义菜单，则隐藏
  doHide()
}
const handleWrapperContextMenu = (e) => {
  doHide()
}

const doHide = () => {
  useContextMenuStore.menuVisible && useContextMenuStore.hideContextMenu()
}

// 监听是否置顶Wechat
const wechatIndex = ref('auto')
watch(
  () => useSystemStore.windowState.isTop,
  (newVal) => {
    wechatIndex.value = newVal ? 99 : 'auto'
  },
  {
    immediate: true,
    deep: true
  }
)

const showGitee = ref(true)
watch(
  () => useSystemStore.windowState.status,
  (newVal) => {
    showGitee.value = newVal !== 'maximize'
  },
  {
    immediate: true,
    deep: true
  }
)
</script>
<style scoped>
@import url(//at.alicdn.com/t/c/font_4200334_7n3az5gz1m6.css);

#app {
  height: 100vh;
  background: url(@/assets/bg.jpg) no-repeat center / cover;
  overflow: hidden;
  user-select: none;

  .wrapper {
    width: 100%;
    height: 100%;
  }
}

.widget {
  position: fixed;
  top: 0;
  right: 0;
}
</style>
