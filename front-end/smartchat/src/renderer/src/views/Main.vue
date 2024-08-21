<template>
  <div class="wrapper" @click="handleWechatClick" @contextmenu="handleWrapperContextMenu">
    <WeChat
      @click="handleWechatClick"
      :style="{ zIndex: wechatIndex }"
      @contextmenu="handleWechatContextMenu"
    />
    <!-- <Edit/> -->
    <Winbtn></Winbtn>
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
import Winbtn from "../components/Winbtn.vue";



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
