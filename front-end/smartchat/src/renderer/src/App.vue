<template>
  <el-config-provider :locale="locale">
    <router-view></router-view>
  </el-config-provider>
</template>
<script setup>
import { ElConfigProvider } from 'element-plus'
import zhCn from 'element-plus/es/locale/lang/zh-cn'
import { getCurrentInstance, reactive } from 'vue'
const {proxy} = getCurrentInstance()
const locale = zhCn
const config = reactive({
  max:1
})
</script>

<style lang="less"></style>
