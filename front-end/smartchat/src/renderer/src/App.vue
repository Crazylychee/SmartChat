<template>
  <el-config-provider :locale="locale">
    <router-view></router-view>
  </el-config-provider>
</template>
<script setup>

// import TurmsClient from 'turms-client-js'
// import DeviceType from 'turms-client-js'
// import { ref, watch } from 'vue'
// import { useWindowFocus } from '@vueuse/core'
// import useStore from '@/store'

// const { useContextMenuStore, useSystemStore } = useStore()
// import WeChat from '@/components/WeChat.vue'
// import TaskBar from './components/layout/TaskBar/Index.vue'
// import Edit from './components/Edit.vue'

// // On the first tab of the same origin
// // The client will create a new WebSocket connection
// const client = new TurmsClient({
//   wsUrl: 'ws://47.113.224.195:10510',
//   connectionTimeout: 10000,
//   requestTimeout: 5000,
//   minRequestInterval: 100,
//   heartbeatInterval: 30000,
//   useSharedContext: false
// });
// // Initialize client
// // const client = new TurmsClient('http://playground.turms.im:1051'); // new TurmsClient('ws://any-turms-gateway-server.com');

// // Listen to the offline event
// client.userService.addOnOfflineListener(info => {
//   console.info(`onOffline: ${info.closeStatus}:${info.businessStatus}:${info.reason}`);
// });

// // Listen to inbound notifications
// client.notificationService.addNotificationListener(notification => {
//   console.info(`onNotification: Receive a notification from other users or server: ${JSON.stringify(notification)}`);
// });

// // Listen to inbound messages
// client.messageService.addMessageListener(message => {
//   console.info(`onMessage: Receive a message from other users or server: ${JSON.stringify(message)}`);
// });

// client.userService.login({
//   userId: '1',
//   password: '123'
// });
import { ElConfigProvider } from 'element-plus'
import zhCn from 'element-plus/es/locale/lang/zh-cn'
import { getCurrentInstance, reactive } from 'vue'
const {proxy} = getCurrentInstance()
const locale = zhCn
const config = reactive({
  max:1
})
</script>

<style lang="less">



</style>
