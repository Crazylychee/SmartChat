import { ipcMain } from 'electron'

import store from './store.js'


const onLoginOrRegister = (callback) =>{
    ipcMain.on("loginOrRegister",(e,isLogin)=>{
        console.log("收到消息"+isLogin)
        callback(isLogin)
      })
}

const onLoginSuccess = (callback)=>{
    ipcMain.on("openChat",(e,config)=>{
        console.log("收到消息"+config.userId);
        store.initUserId(config.userId);
        store.setUserDate("token",config.token)
        //TODO增加用户配置
        callback(config)
        // initWs(config,e.sender)
    })
}

const winTitleOp=(callback)=>{
    ipcMain.on("winTitleOp",(e,data)=>{
        callback(e,data)
    })
}
const onSetLocalStore = ()=>{
    ipcMain.on("setLocalStore",(e,{key,value})=>{
        store.setDate(key,value)
    })
}

const onGetLocalStore = ()=>{
    ipcMain.on("getLocalStore",(e,key)=>{
        console.log("收到渲染进程的获取事件"+key);
        e.sender.send("getLocalStoreCallback",store.getDate(key)+"这是主进程加的内容");
    })
}

export {
    onLoginOrRegister,
    onLoginSuccess,
    winTitleOp,
    onSetLocalStore,
    onGetLocalStore
}
