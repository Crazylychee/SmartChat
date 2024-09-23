<template>
  <img v-if="data" v-lazyload="data.profilePicture" />
  <img v-else v-lazyload="defaultProfilePicture" />
  <!-- TODO: 点击头像查看用户信息卡片 -->
  <!-- <img v-else v-lazyload="useUserInfoStore?.user?.avatar" @click="showUserInfo(e)" /> -->
</template>

<script lang="ts" setup>
import type { UserInfo } from '@/store/modules/userInfo'
import { useRequest } from 'vue-request'
import { defaultProfilePicture, useUserInfoStore } from '@/store/modules/userInfo'

const userInfoStore = useUserInfoStore()

const props = defineProps({
  userId: {
    type: String,
    required: true
  }
})

// const infoVisible = ref(false)
// const userInfo = ref({})

// const showUserInfo = (e) => {
//   infoVisible.value = true
//   userInfo.value = useUserInfoStore.user
//   useRelativeBoxStore.showBox(e.clientY, e.clientX)
// }

const { data, error, loading } = useRequest<UserInfo>(() => userInfoStore.getUserInfo(props.userId))
</script>
