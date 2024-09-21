<template>
  <perfect-scrollbar>
    <div class="chat-list">
      <ListChatItem
        v-for="chat in chatLists"
        :key="chat.senderId"
        :user-id="chat.senderId"
        :context="chat.text"
        :time="chat.deliveryDate"
      />
    </div>
    <WeNoData v-if="!chatLists.length" text="无结果" :image-style="{ color: '#ccc' }" />
  </perfect-scrollbar>
</template>

<script setup>
import useStore from '@/store'
const { useChatStore } = useStore()
import ListChatItem from '@/components/common/ListChatItem.vue'

const chatLists = useChatStore.latestMessages
</script>

<style lang="less" scoped>
.chat-list {
  background-color: #e7e6e5;
}
</style>
