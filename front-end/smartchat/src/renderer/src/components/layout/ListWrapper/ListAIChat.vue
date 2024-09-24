<template>
  <perfect-scrollbar>
    <div class="chat-list">
      <ListAIItem
        v-for="(value, key) in AIStore.chats"
        :key="key"
        :chat-id="key"
        :time="value.update"
        :title="value.title"
        :model="value.model"
      />
    </div>
    <WeNoData
      v-if="!Object.keys(AIStore.chats).length"
      text="试试和AI聊天吧"
      :image-style="{ color: '#ccc' }"
    />
  </perfect-scrollbar>
</template>

<script setup>
import { useAIStore } from '@/store/modules/ai'
const AIStore = useAIStore()
import ListAIItem from '@/components/common/ListAIItem.vue'
</script>

<style lang="less" scoped>
.chat-list {
  background-color: #e7e6e5;
}
</style>
