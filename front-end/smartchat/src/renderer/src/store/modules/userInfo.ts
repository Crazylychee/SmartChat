import { defineStore } from 'pinia'
import { useTurmsClient } from '@/services/turms'
import { ref } from 'vue'

export const useUserInfoStore = defineStore('userInfo', () => {
  const user = ref({
    // 随便写的默认头像
    avatar: 'https://avatars.githubusercontent.com/u/44367132'
  })

  async function getUserInfo() {
    const { client } = await useTurmsClient()

    const info = await client.userService.queryUserProfiles({
      userIds: ['5'],
      lastUpdatedDate: new Date()
    })

    console.log(info)

    if (info.data[0].profilePicture) {
      user.value.avatar = info.data[0].profilePicture
    }
  }

  return { user, getUserInfo }
})
