<template>
  <perfect-scrollbar>
    <div class="chat-list">
      <ListChatItem
        v-for="(value, key) in chatLists"
        :key="key"
        :user-id="key"
        :context="value.text"
        :time="value.deliveryDate"
      />
    </div>
    <WeNoData
      v-if="!Object.keys(chatLists).length"
      text="无结果"
      :image-style="{ color: '#ccc' }"
    />
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
