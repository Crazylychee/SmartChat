
<template>
  <button @click="sendToParent">Click Me!</button>
</template>

<script setup>
import {defineEmits} from 'vue'
//定义名为custom-event的自定义事件
const emit = defineEmits(['custom-event'])
const sendToParent = () => {
  emit('custom-event', { message: 'Hello from the child component!' })
}
</script>

