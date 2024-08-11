import { defineStore } from 'pinia'

export const useUserInfoStore = defineStore('userInfo', {
  state: () => {
    return {
      user: {
        avatar:
          'https://gd-hbimg.huaban.com/27965eece017346400496b02945d98c9bc25187d1c980-YHZIpX_fw480webp'
      }
    }
  },
  persist: {
    enabled: true,
    strategies: [
      {
        storage: localStorage
      }
    ]
  }
})
