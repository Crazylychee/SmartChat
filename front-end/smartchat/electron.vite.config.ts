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
        '@': resolve(__dirname, './src/renderer/src')
        // 'turms-client-js': 'file:D:/client-js/turms/turms-client-js'
      }
    },
    plugins: [
      vue(),
      {
        name: 'inject-dev-script',
        transformIndexHtml(html) {
          // 在开发模式下注入 Vue Devtools standalone script
          if (process.env.NODE_ENV === 'development') {
            return html.replace(
              '</head>',
              `
              <script src="http://localhost:8098" async></script>
              </head>
              `
            )
          }
          return html
        }
      }
    ]
  }
})
