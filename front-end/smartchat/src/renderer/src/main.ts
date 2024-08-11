import { createApp } from 'vue'
import pinia from './store/pinia.js'
import App from './App.vue'

import Antd from 'ant-design-vue'
import 'ant-design-vue/dist/reset.css'
import './global.less'
import ui from './components/libs/index.js'

//引入
import PerfectScrollbar from 'vue3-perfect-scrollbar'
import 'perfect-scrollbar/css/perfect-scrollbar.css'

import Vue3EmojiPicker from 'vue3-emoji-picker'

const app = createApp(App)

app.use(pinia)
app.use(Antd)
app.use(ui)
app.use(PerfectScrollbar)
app.component('Vue3EmojiPicker', Vue3EmojiPicker)
app.mount('#app')
