import {createRouter,createWebHashHistory} from 'vue-router'

const router = createRouter({
  mode:"hash",
  history:createWebHashHistory(import.meta.env.BASE_URL),
  routes:[
    {
      path:'/',
      name:'默认路径',
      redirect:'/login'
    },
    {
      path:'/login',
      name:'登录',
      component:()=> import('@/views/Login.vue')
    },
    {
      path:'/main',
      name:'主窗口',
      component:()=> import('@/views/Main.vue')

    }
  ]
})

export default router
