import { createApp } from 'vue'
import pinia from './store/pinia.js'
import '@/assets/icon/iconfont.css'
import App from './App.vue'
import 'element-plus/dist/index.css'
import Antd from 'ant-design-vue'
import 'ant-design-vue/dist/reset.css'
import './global.less'
import ui from '@/components/libs'
import ElementPlus from 'element-plus'
import router from '@/router'
import Utils from '@/utils/Utils'
import Winbtn from '@/components/Winbtn.vue'
//引入
import PerfectScrollbar from 'vue3-perfect-scrollbar'
import 'perfect-scrollbar/css/perfect-scrollbar.css'

import Vue3EmojiPicker from 'vue3-emoji-picker'

const app = createApp(App)

app.use(pinia)
app.use(Antd)
app.use(ElementPlus)
app.use(ui)
app.use(router)
app.use(PerfectScrollbar)
app.component('Vue3EmojiPicker', Vue3EmojiPicker)
app.component('Winbtn',Winbtn)
app.config.globalProperties.Utils = Utils
app.config.globalProperties.Request = Request

app.mount('#app')
