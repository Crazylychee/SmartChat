const Store = require('electron-store')
const store = new Store()

let userId = null;
const initUserId = (_userId)=>{
  userId = _userId;
}
const setDate = (key,value)=>{
  store.set(key,value)
}

const getDate = (key)=>{
  return store.get(key)
}

const getUserId = ()=>{
  return userId
}
const setUserDate =(key,value)=>{
  setDate(userId+key,value)
}

const getUserDate = ()=>{
  return getDate(userId)
}

const deleteUserDate = (key)=>{
  store.delete(userId+key)
}


export default{
  setDate,
  getDate,
  initUserId,
  getUserId,
  setUserDate,
  getUserDate,
  deleteUserDate
}
