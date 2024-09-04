import { defineStore } from 'pinia'
import { useTurmsClient } from '@/services/turms'
import { ref } from 'vue'

export const useUserInfoStore = defineStore('userInfo', () => {
  const user = ref({
    // 随便写的默认头像
    avatar: 'https://avatars.githubusercontent.com/u/44367132'
  })

  async function updateUserInfo(){
    const { client } = await useTurmsClient()
    const info = await client.userService.updateProfile({

      // lastUpdatedDate: new Date()
    })
    console.log(info)
}

  async function getUserInfo() {
    const { client } = await useTurmsClient()

    const info = await client.userService.queryUserProfiles({
      userIds: ["6"]
      // 此处不应传入时间，否则会导致查询不到用户（服务器端会根据时间判断是否需要更新）
      // lastUpdatedDate: new Date()
    })

    console.log(info)

    if (info.data[0].profilePicture) {
      user.value.avatar = info.data[0].profilePicture
    }
  }

  return { user, getUserInfo, updateUserInfo }
}
)
