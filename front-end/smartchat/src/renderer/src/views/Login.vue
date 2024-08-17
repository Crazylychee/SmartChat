<template>
  <div class="login-panel">
    <div class="title drag">SmartChat</div>
    <div v-if="showLoading" class="loading-panel">
      <img src="@/assets/img/loading1.gif">
    </div>
    <div class="login-form" v-else>
      <div class="error-msg">{{ errorMsg }}</div>
      <el-form :model="formData" :rules="rules" ref="formDataRef" label-width="0px" @submit.prevent>
        <!--input输入-->
        <el-form-item prop="email">
          <el-input
            @focus="clearVerify"
            clearable
            placeholder="请输入邮箱"
            v-model.trim="formData.email"
            size="large"
            maxlength="30"
          >
            <template #prefix>
              <span class="iconfont icon-email"></span>
            </template>
          </el-input>
        </el-form-item>
        <el-form-item prop="nickName" v-if="!isLogin">
          <el-input
            maxlength="15"
            clearable
            placeholder="请输入昵称"
            v-model.trim="formData.nickName"
            size="large"
            @focus="clearVerify"
          >
            <template #prefix>
              <span class="iconfont icon-user-nick"></span>
            </template>
          </el-input>
        </el-form-item>

        <el-form-item prop="password">
          <el-input
            clearable
            placeholder="请输入密码"
            v-model.trim="formData.password"
            show-password
            size="large"
            @focus="clearVerify"
          >
            <template #prefix>
              <span class="iconfont icon-password"></span>
            </template>
          </el-input>
        </el-form-item>

        <el-form-item prop="rePassword" v-if="!isLogin">
          <el-input
            clearable
            placeholder="确认密码"
            v-model.trim="formData.rePassword"
            show-password
            size="large"
            @focus="clearVerify"
          >
            <template #prefix>
              <span class="iconfont icon-password"></span>
            </template>
          </el-input>
        </el-form-item>

        <el-form-item prop="checkcode">
          <div class="check-code-panel">
            <el-input
              clearable
              placeholder="请输入验证码"
              v-model.trim="formData.checkCode"
              size="large"
              @focus="clearVerify"
            >
              <template #prefix>
                <span class="iconfont icon-checkcode"></span>
              </template>
            </el-input>
            <img :src="checkCodeUrl" class="check-code" @click="changeCheckCode" />
          </div>
        </el-form-item>

        <el-form-item>
          <el-button type="primary" class="login-btn" @click="submit">{{
              isLogin ? '登录' : '注册'
            }}</el-button>
        </el-form-item>
        <div class="bottom-link">
          <span class="a-link" @click="changeOptype">{{
              isLogin ? '没有账号？' : '立即登录'
            }}</span>
        </div>
      </el-form>
    </div>
  </div>
  <Winbtn :showSetTop="false" :showMin="false" :showMax="false" :closeType="0"></Winbtn>
</template>
<script setup >
import { ref, reactive, getCurrentInstance, nextTick, onMounted } from 'vue'

import {useRouter} from 'vue-router'

import TurmsClient from 'turms-client-js'
import DeviceType from 'turms-client-js'

import { useWindowFocus } from '@vueuse/core'
import useStore from '@/store'

const { useContextMenuStore, useSystemStore } = useStore()

const client = new TurmsClient({
  wsUrl: 'ws://47.113.224.195:10510',
  connectionTimeout: 10000,
  requestTimeout: 5000,
  minRequestInterval: 100,
  heartbeatInterval: 30000,
  useSharedContext: false
});


// 当客户端离线时会触发
client.userService.addOnOfflineListener(info => {
  console.info(`onOffline: ${info.closeStatus}:${info.businessStatus}:${info.reason}`);
});

// 接收来自其他用户或服务器的通知。
client.notificationService.addNotificationListener(notification => {
  console.info(`onNotification: Receive a notification from other users or server: ${JSON.stringify(notification)}`);
});

// 用于接收来自其他用户或服务器的消息。
client.messageService.addMessageListener(message => {
  console.info(`onMessage: Receive a message from other users or server: ${JSON.stringify(message)}`);
});

client.userService.login({
  userId: '2',
  password: '123'
})
  .then(() => {
    client.userService.queryNearbyUsers({
      latitude: 39.667651,
      longitude: 35.792657,
      maxCount: 10,
      maxDistance: 1000
    })
      .then(response => {
        console.log(`nearby users: ${JSON.stringify(response.data)}`);
      });
    client.messageService.sendMessage({
      isGroupMessage: false,
      targetId: '1',
      deliveryDate: new Date(),
      text: 'Hello Turms',
      burnAfter: 30
    })
      .then(response => {
        console.log(`message ${response.data} has been sent`);
      });
    client.groupService.createGroup({
      name: 'Turms Developers Group',
      intro: 'This is a group for the developers who are interested in Turms',
      announcement: 'nope'
    })
      .then(response => {
        console.log(`group ${response.data} has been created`);
      });
  })
  .catch(reason => {
    console.error(reason);
  });


const router = useRouter()
const { proxy } = getCurrentInstance()

import md5 from 'js-md5'
const formData = ref({
  email:"test@qq.com",
  password:"qqq@@222"
})
const formDataRef = ref()
const errorMsg = ref()
const rules = {
  title: [{ required: true, message: '请输入内容' }]
}

const changeOptype = () => {
  window.ipcRenderer.send('loginOrRegister', !isLogin.value) //往主线程发消息
  isLogin.value = !isLogin.value
  nextTick(() => {
    formDataRef.value.resetFields()
    formData.value = {}
    // changeCheckCode()
  })
}

const isLogin = ref(true)
console.log(proxy.Utils.isEmpty('111'))

const showLoading = ref(false)
// 按钮方法
const submit = async() => {

  showLoading.value = true;

  // clearVerify()
  // if (!checkVerify('checkEmail', formData.value.email, '请输入正确的邮箱')) {
  //   return
  // }
  // if (
  //   !checkVerify(
  //     'checkPassword',
  //     formData.value.password,
  //     '密码同时包含数字、字母和特殊字符，并且长度在8到18位之间'
  //   )
  // ) {
  //   return
  // }
  //
  // if (!isLogin.value && !checkVerify(null, formData.value.nickName, '请输入正确的昵称')) {
  //   return
  // }
  // if (!isLogin.value && formData.value.password != formData.value.rePassword) {
  //   errorMsg.value = '两次输入密码不一致'
  //   return
  // }
  // if (!checkVerify(null, formData.value.checkCode, '请输入正确的验证码')) {
  //   return
  // }
  //
  // if(isLogin.value){
  //   showLoading.value = true
  // }
  //
  // let result = await proxy.Request({
  //   url:isLogin.value?proxy.Api.login:proxy.Api.register,
  //   showLoading:isLogin?false:true,
  //   showError : false,
  //   params:{
  //     email:formData.value.email,
  //     password:isLogin.value?md5(formData.value.password):formData.value.password,
  //     checkCode:formData.value.checkCode,
  //     nickName:formData.value.nickName,
  //     checkCodeKey:localStorage.getItem("checkCodeKey")
  //   },
  //   errorCallback:(response)=>{
  //     showLoading.value = false
  //     changeCheckCode()
  //     errorMsg.value = response.info
  //   }
  // })
  // if(!result){
  //   return;
  // }
  //
  // if(isLogin.value){
  //   useInfoStore.setInfo(result.data)
  //   console.log("正在登录。。。");
  //   localStorage.setItem("token",result.data.token);
  //   console.log("正在登录。。。");
  //   // 跳转到首页

    // console.log(result.data);
    router.push('/main')

    //向主进程发消息窗口交互
    window.ipcRenderer.send("openChat",{
      //TODO 这里记得改完接口后改成动态
      // email:formData.value.email,
      // token:result.data.token,
      // userId:result.data.userId,
      // nickName:result.data.nickName,
      // admin:result.data.admin,
      email:formData.value.email,
      token:"token",
      userId:1,
      nickName:1,
      admin:1,
      screenWidth:window.screen.width,
      screenHeight:window.screen.height
    })

  // 延迟两秒再结束加载动画
  setTimeout(() => {

    showLoading.value = false;
  }, 2000);
    // window.ipcRenderer.send("setLocalStore",{key:'devWsDomain',value:proxy.Api.devWsDomain})
    // window.ipcRenderer.send("getLocalStore",'devWsDomain')
  // }else{
  //   proxy.Message.success("注册成功！")
  //   //跳转到登录
  //   changeOptype()
  // }
}
const checkVerify = (type, value, msg) => {
  // debugger调试断点
  if (proxy.Utils.isEmpty(value)) {
    errorMsg.value = msg
    return false
  }
  if (type && !proxy.Verify[type](value)) {
    errorMsg.value = msg
    return false
  }
  return true
}

const clearVerify = () => {
  errorMsg.value = null
}


const init = ()=>{
  // window.ipcRenderer.send("setLocalStore",{key:'prodDomain',value:proxy.Api.prodDomain})
  // window.ipcRenderer.send("setLocalStore",{key:'devDomain',value:proxy.Api.devDomain})
  // window.ipcRenderer.send("setLocalStore",{key:'prodWsDomain',value:proxy.Api.prodWsDomain})
  // window.ipcRenderer.send("setLocalStore",{key:'devWsDomain',value:proxy.Api.devWsDomain})
  console.log("init")

}
onMounted(()=>{
  init()
})
</script>
<style lang="scss" scoped>
.email-select {
  width: 250px;
}
.loading-panel {
  height: calc(100vh - 32px);
  display: flex;
  justify-content: center;
  align-items: center;
  overflow: hidden;
  img {
    width: 50%;
  }
}
.login-form {
  padding: 0px 15px 29px 15px;
  :deep(.el-input_wrapper) {
    box-shadow: none;
    border-radius: none;
  }
  .el-form-item {
    border-bottom: 1px solid #ddd;
  }
  .email-panel {
    align-items: center;
    width: 100%;
    display: flex;
    .input {
      flex: 1;
    }
    .icon-down {
      margin-left: 3px;
      width: 16px;
      cursor: pointer;
      border: none;
    }
  }
  .error-msg {
    line-height: 30px;
    height: 30px;
    color: #fb7373;
  }
  .check-code-panel {
    display: flex;
    .check-code {
      cursor: pointer;
      width: 120px;
      margin-left: 5px;
    }
  }
  .login-btn {
    margin-top: 20px;
    width: 100%;
    background-color: #07c160;
    height: 36px;
    font-size: 16px;
  }
  .bottom-link {
    text-align: right;
  }
}

.login-panel {
  background-color: #fff;
  border-radius: 3px;
  border: 1px solid #ddd;
  .title {
    height: 30px;
    padding: 5px 0px 0px 10px;
  }
}

.a-link {
  display: flex;
  justify-content: end;
}
</style>
