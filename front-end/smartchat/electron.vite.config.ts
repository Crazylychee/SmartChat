import { resolve } from 'path'
import { defineConfig, externalizeDepsPlugin } from 'electron-vite'
import vue from '@vitejs/plugin-vue'

export default defineConfig({
  main: {
    plugins: [externalizeDepsPlugin()]
  },
  preload: {
    plugins: [externalizeDepsPlugin()]
  },
  renderer: {
    resolve: {
      alias: {
        // '@/*': resolve(__dirname,'src/renderer/src/*')
        '@': resolve(__dirname, './src/renderer/src'),
        // 'turms-client-js': 'file:D:/client-js/turms/turms-client-js'
      }
    },
    plugins: [vue()]
  }
})
