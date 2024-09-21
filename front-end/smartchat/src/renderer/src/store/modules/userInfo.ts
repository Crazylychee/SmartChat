import { defineStore } from 'pinia'
import { useTurmsClient } from '@/services/turms'
import { ref } from 'vue'
import type { ParsedModel } from 'turms-client-js'

// 无法修复 :(
// 修复 turms-client-js 的 ProfileAccessStrategy 枚举导入问题，不知道为什么导入不了
// 好像是由于命名冲突？
// declare enum ProfileAccessStrategy {
//   ALL = 0,
//   ALL_EXCEPT_BLOCKED_USERS = 1,
//   FRIENDS = 2,
//   UNRECOGNIZED = -1
// }

type UserInfo = ParsedModel.UserInfo & {
  lastUpadteDate: Date
  // profileAccessStrategy?: ProfileAccessStrategy
}

const dedaultProfilePicture =
  'data:image/svg+xml;base64,PHN2ZyB4bWxucz0iaHR0cDovL3d3dy53My5vcmcvMjAwMC9zdmciIHdpZHRoPSIxMjgiIGhlaWdodD0iMTI4IiB2aWV3Qm94PSIwIDAgMzYgMzYiPjxwYXRoIGZpbGw9IiNGRkNCNEMiIGQ9Ik0zNS41OTcgMTQuMjMyYzIuMDgzIDkuNzItNC4xMDggMTkuMjg5LTEzLjgyOCAyMS4zNzJTMi40OCAzMS40OTYuMzk3IDIxLjc3NlM0LjUwNiAyLjQ4NyAxNC4yMjUuNDA0YzkuNzItMi4wODQgMTkuMjg5IDQuMTA4IDIxLjM3MiAxMy44MjgiLz48cGF0aCBmaWxsPSIjRjRGN0Y5IiBkPSJNMjkuMjg0IDkuMDEyYTYuNzM0IDYuNzM0IDAgMSAxLTEzLjE2OSAyLjgyMWE2LjczNCA2LjczNCAwIDAgMSAxMy4xNjktMi44MjEiLz48Y2lyY2xlIGN4PSIyMi4zMDYiIGN5PSI5LjI5MSIgcj0iMi4wMzciIGZpbGw9IiMyOTJGMzMiLz48cGF0aCBmaWxsPSIjRjRGN0Y5IiBkPSJNMTQuMDg4IDE0LjI4MmEzLjkzOCAzLjkzOCAwIDEgMS03LjcgMS42NWEzLjkzOCAzLjkzOCAwIDAgMSA3LjctMS42NSIvPjxjaXJjbGUgY3g9IjEwLjIzOCIgY3k9IjE1Ljg1NyIgcj0iMS45NDIiIGZpbGw9IiMyOTJGMzMiIHRyYW5zZm9ybT0icm90YXRlKC0xMi4wOTUgMTAuMjM2IDE1Ljg1MykiLz48cGF0aCBmaWxsPSIjNjU0NzFCIiBkPSJNMTguNjI1IDIwLjkzN2MtMy41NDMuNzU5LTUuOTgxLjg1LTkuMDEuOTA4Yy0uNjkxLjAxNS0xLjk1NS40MTktMS41MzYgMi4zNzVjLjgzOCAzLjkxMSA2LjM3OSA3LjgzNyAxMi42NDIgNi40OTVjNi4yNjItMS4zNDIgOS43MDgtNy4xOTQgOC44Ny0xMS4xMDVjLS40MTktMS45NTYtMS43MzktMS44MDgtMi4zNzUtMS41MzZjLTIuNzg2IDEuMTg3LTUuMDQ4IDIuMTA0LTguNTkxIDIuODYzIi8+PHBhdGggZmlsbD0iI0U4NTk2RSIgZD0iTTExIDI0LjAwNHY2YzAgMyAyIDYgNiA2czYtMyA2LTZ2LTZ6Ii8+PHBhdGggZmlsbD0iI0REMkY0NSIgZD0iTTE3IDMxLjg4M2EuNTQ1LjU0NSAwIDAgMCAuNTQ1LS41NDV2LTYuMjk1aC0xLjA5MXY2LjI5NWEuNTQ2LjU0NiAwIDAgMCAuNTQ2LjU0NSIvPjxwYXRoIGZpbGw9IiNGRkYiIGQ9Ik0xMC4wMzQgMjMuODAxczMuMTQzLjM0OSA5LjAxLS45MDhzOC41OTEtMi44NjQgOC41OTEtMi44NjRzLTEuMTE3IDQuMzMtNy45NjIgNS43OTdzLTkuNjM5LTIuMDI1LTkuNjM5LTIuMDI1Ii8+PC9zdmc+'

export const useUserInfoStore = defineStore('userInfo', () => {
  const user = ref<UserInfo>({
    id: '',
    name: '',
    intro: '',
    profilePicture: dedaultProfilePicture,
    profileAccessStrategy: undefined,
    registrationDate: undefined,
    active: false,
    customAttributes: [],
    lastUpadteDate: new Date(0)
  })

  const users = ref(new Map<string, UserInfo>())

  /**
   * @param userId
   * @returns UserInfo
   * 获取用户信息
   * 优先从本地缓存中获取，如果没有再从服务器获取
   */
  async function getUserInfo(userId: string) {
    if (users.value.has(userId)) {
      return users.value.get(userId)
    }

    const userIds = [userId]

    const { client } = await useTurmsClient()

    const respond = await client.userService.queryUserProfiles({
      userIds
    })

    if (respond.code === 1000) {
      const userInfo = respond.data
      console.log(`获取${userId}用户信息成功`, userInfo)
      if (userInfo.length > 0) {
        users.value.set(userId, { ...userInfo[0], lastUpadteDate: new Date(0) })
        return userInfo[0]
      }
    }

    console.error(`获取${userId}用户信息失败`)
    return undefined
  }

  /**
   * 同步自己的用户信息
   */
  async function syncUserInfo() {
    const { client } = await useTurmsClient()

    if (!user.value.id) {
      console.error('未登录，无法同步用户信息')
      return
    }

    try {
      const respond = await client.userService.queryUserProfiles({
        userIds: [user.value.id],
        lastUpdatedDate: user.value.lastUpadteDate
      })

      if (respond.code === 1000) {
        const userInfo = respond.data
        console.log(`同步${user.value.id}用户信息成功`, userInfo)
        if (userInfo.length > 0) {
          user.value = { ...user.value, ...userInfo[0], lastUpadteDate: new Date() }
          console.log(user.value)
        }
      }
    } catch (error) {
      console.error('同步用户信息失败', error)
    }
  }

  return { user, getUserInfo, syncUserInfo }
})
