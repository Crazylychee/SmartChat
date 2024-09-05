<template>
  <div class="login-panel">
    <div class="title drag">SmartChat</div>
    <div v-if="showLoading" class="loading-panel">
      <img src="@/assets/img/loading1.gif" />
    </div>
    <div v-else class="login-form">
      <div class="error-msg">{{ errorMsg }}</div>
      <div class="advise-msg">{{ adviseMsg }}</div>
      <el-form ref="formDataRef" :model="formData" :rules="rules" label-width="0px" @submit.prevent>
        <!--input输入-->
        <el-form-item prop="email">
          <el-input
            v-model.trim="formData.email"
            clearable
            placeholder="请输入邮箱"
            size="large"
            maxlength="30"
            @focus="clearVerify"
          >
            <template #prefix>
              <span class="iconfont icon-email"></span>
            </template>
          </el-input>
        </el-form-item>
        <el-form-item v-if="!isLogin" prop="nickName">
          <el-input
            v-model.trim="formData.username"
            maxlength="15"
            clearable
            placeholder="请输入昵称"
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
            v-model.trim="formData.password"
            clearable
            placeholder="请输入密码"
            show-password
            size="large"
            @focus="clearVerify"
          >
            <template #prefix>
              <span class="iconfont icon-password"></span>
            </template>
          </el-input>
        </el-form-item>

        <el-form-item v-if="!isLogin" prop="rePassword">
          <el-input
            v-model.trim="formData.rePassword"
            clearable
            placeholder="确认密码"
            show-password
            size="large"
            @focus="clearVerify"
          >
            <template #prefix>
              <span class="iconfont icon-password"></span>
            </template>
          </el-input>
        </el-form-item>

        <el-form-item v-if="isLogin" prop="code">
          <div class="check-code-panel">
            <el-input
              v-model.trim="formData.code"
              clearable
              placeholder="请输入验证码"
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


        <el-form-item v-if="!isLogin" prop="code">
          <div class="check-code-panel">
            <el-input
              v-model.trim="formData.code"
              clearable
              placeholder="请输入邮箱验证码"
              size="large"
              @focus="clearVerify"
            >
              <template #prefix>
                <span class="iconfont icon-checkcode"></span>
              </template>
            </el-input>
            <el-button type="primary" :disabled="isSending" @click="sendCheckCode">{{ buttonText }}</el-button>
          </div>
        </el-form-item>


        <el-form-item>
          <el-button type="primary" class="login-btn" @click="submit"
            >{{ isLogin ? '登录' : '注册' }}
          </el-button>
        </el-form-item>
        <div class="bottom-link">
          <span class="a-link" @click="changeOptype">{{
            isLogin ? '没有账号？' : '立即登录'
          }}</span>
        </div>
      </el-form>
    </div>
  </div>
  <Winbtn :show-set-top="false" :show-min="false" :show-max="false" :close-type="0"></Winbtn>
</template>
<script setup>
import { ref, reactive, getCurrentInstance, nextTick, onMounted, computed } from "vue";
import auth from '@/api/auth'
import { useRouter } from 'vue-router'

import TurmsClient from 'turms-client-js'
import DeviceType from 'turms-client-js'

import { useWindowFocus } from '@vueuse/core'
import useStore from '@/store'

const { useContextMenuStore, useSystemStore, useUserInfoStore } = useStore()



// const client = new TurmsClient({
//   wsUrl: 'ws://47.113.224.195:10510',
//   // wsUrl: 'ws://localhost:10510',
//   // wsUrl: 'http://playground.turms.im:10510',
//   connectionTimeout: 10000,
//   requestTimeout: 5000,
//   minRequestInterval: 100,
//   heartbeatInterval: 30000,
//   useSharedContext: false
// });


// 当客户端离线时会触发
// client.userService.addOnOfflineListener(info => {
//   console.info(`onOffline: ${info.closeStatus}:${info.businessStatus}:${info.reason}`);
// });
//
// // 接收来自其他用户或服务器的通知。
// client.notificationService.addNotificationListener(notification => {
//   console.info(`onNotification: Receive a notification from other users or server: ${JSON.stringify(notification)}`);
// });
//
// // 用于接收来自其他用户或服务器的消息。
// client.messageService.addMessageListener(message => {
//   console.info(`onMessage: Receive a message from other users or server: ${JSON.stringify(message)}`);
// });
//
// client.userService.login({
//   userId: '6',
//   password: '123'
// }).then(()=>{
//   console.log("登录成功")
// }).catch(()=>{
//   console.log("登录失败")
// })

// client.userService.createFriendRelationship({
//
// })


// client.messageService.sendMessage({
//   isGroupMessage: false,
//   targetId: '2',
//   deliveryDate: new Date(),
//   text: 'Hello Turms',
//
// }).then(response => {
//   console.log(`message ${response.data} has been sent`);
// }).catch(error => {
//   console.error('Error sending message:', error);
//   // 你可以在这里添加更多的错误处理逻辑，比如显示错误信息给用户
// });

const router = useRouter()
const { proxy } = getCurrentInstance()

import md5 from 'js-md5'
import { captchaImage, login, register, sendEmailCode } from "../api/auth";
const checkCodeUrl = ref('')
const formData = ref({
  email: '3122004883@mail2.gdut.edu.cn',
  password: '123',
  username: '123',
  rePassword: '123',
  uuid: '',
  code: ''

})
const formDataRef = ref()
const errorMsg = ref()
const adviseMsg = ref()
const isSending = ref(false);
const countdown = ref(0);
const rules = {
  title: [{ required: true, message: '请输入内容' }]
}
const changeOptype = () => {
  window.ipcRenderer.send('loginOrRegister', !isLogin.value) //往主线程发消息
  isLogin.value = !isLogin.value
  nextTick(() => {
    formDataRef.value.resetFields()
    formData.value.code = ''
    formData.value.rePassword = ''
    if(isLogin.value){
      changeCheckCode()
    }

  })
}

const isLogin = ref(true)
console.log(proxy.Utils.isEmpty('111'))

const showLoading = ref(false)
// 按钮方法
const submit = async () => {
  console.log('111111111')
  clearVerify()
  if (!checkVerify('checkEmail', formData.value.email, '请输入正确的邮箱')) {
    console.log('111111111')
    showLoading.value = false
    return
  }

  if (!isLogin.value && !checkVerify(null, formData.value.username, '请输入正确的昵称')) {
    console.log('111111111')
    showLoading.value = false
    return
  }

  if (
    !checkVerify(
      'checkPassword',
      formData.value.password,
      '密码同时包含数字、字母和特殊字符，并且长度在8到18位之间'
    )
  ) {
    console.log('111111111')
    showLoading.value = false
    return
  }

  if (!isLogin.value && formData.value.password !== formData.value.rePassword) {
    console.log('111111111')
    showLoading.value = false
    errorMsg.value = '两次输入密码不一致'
    return
  }
  if (!checkVerify(null, formData.value.code, '请输入正确的验证码')) {
    console.log(formData.value.code)
    showLoading.value = false
    return
  }



  // let result = await proxy.request({
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

  if(isLogin.value){
    login(formData.value)
      .then((res) => {
        console.log(res)

        if (res.code === 200) {
          showLoading.value = true
          router.push('/main')
          console.log('正在登录。。。')
          //向主进程发消息窗口交互
          window.ipcRenderer.send('openChat', {
            //TODO 这里记得改完接口后改成动态
            // email:formData.value.email,
            // token:result.data.token,
            // userId:result.data.userId,
            // nickName:result.data.nickName,
            // admin:result.data.admin,
            email: formData.value.email,
            token: 'token',
            userId: 1,
            nickName: 1,
            admin: 1,
            screenWidth: window.screen.width,
            screenHeight: window.screen.height
          })

          // 延迟两秒再结束加载动画
          setTimeout(() => {
            showLoading.value = false
          }, 2000)
        }
      })
      .catch((err) => {
        const errorMessage = typeof err === 'string' ? err : err.message;
        errorMsg.value = errorMessage.substring(0, 10);
        console.log(err);
      })
  }else{
    register(formData.value)
      .then((res) => {
        console.log(res)
        if (res.code === 200) {
          console.log('正在注册。。。')
          adviseMsg.value = '注册成功！请回到登录'

          // 延迟两秒再结束加载动画
          setTimeout(() => {
            showLoading.value = false
          }, 2000)
        }
      })
      .catch((err) => {
        const errorMessage = typeof err === 'string' ? err : err.message;
        errorMsg.value = errorMessage.substring(0, 10);
        console.log(err)
      })
  }






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
  // if (type && !proxy.Verify[type](value)) {
  //   errorMsg.value = msg;
  //   return false;
  // }
  return true
}

const clearVerify = () => {
  errorMsg.value = null
}

const changeCheckCode = async () => {
  await captchaImage().then((res) => {
    if (res.code !== 200) {
      errorMsg.value = res.msg
      return
    }
    checkCodeUrl.value = `data:image/png;base64,${res.data.img}`;
    formData.value.uuid = res.data.uuid
  })

}



const buttonText = computed(() => {
  return countdown.value > 0 ? `重新发送 (${countdown.value})` : '发送验证码';
});

const sendCheckCode = async () => {

  clearVerify()
  if (!checkVerify('checkEmail', formData.value.email, '请输入正确的邮箱')) {
    return
  }

  if (!isLogin.value && !checkVerify(null, formData.value.username, '请输入正确的昵称')) {
    return
  }

  if (
    !checkVerify(
      'checkPassword',
      formData.value.password,
      '密码同时包含数字、字母和特殊字符，并且长度在8到18位之间'
    )
  ) {
    return
  }

  if (!isLogin.value && formData.value.password !== formData.value.rePassword) {
    errorMsg.value = '两次输入密码不一致'
    return
  }


  if (isSending.value) return;

  try {
    isSending.value = true;
    await sendEmailCode(formData.value);
    // 处理发送成功后的逻辑，例如显示提示信息
    console.log('验证码已发送');

    // 启动倒计时
    countdown.value = 60;
    const interval = setInterval(() => {
      countdown.value -= 1;
      if (countdown.value <= 0) {
        clearInterval(interval);
        isSending.value = false;
      }
    }, 1000);
  } catch (error) {
    console.error('Failed to send check code:', error);
    isSending.value = false;
  }
};


const init = () => {
  // window.ipcRenderer.send("setLocalStore",{key:'prodDomain',value:proxy.Api.prodDomain})
  // window.ipcRenderer.send("setLocalStore",{key:'devDomain',value:proxy.Api.devDomain})
  // window.ipcRenderer.send("setLocalStore",{key:'prodWsDomain',value:proxy.Api.prodWsDomain})
  // window.ipcRenderer.send("setLocalStore",{key:'devWsDomain',value:proxy.Api.devWsDomain})
  console.log('init')
  changeCheckCode()
}
onMounted(() => {
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
