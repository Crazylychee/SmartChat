<template>
  <div style="display: inline-block">
    <div>
      <a-upload
      v-model:file-list="fileList"
      list-type="picture"
      :max-count="1"
      @change ="handleChange"
     :showUploadList="false"
    >
      <a-button>
        <upload-outlined></upload-outlined>
   Upload (Max: 1)
      </a-button>
    </a-upload>
      <template v-if="fileList.length">
        <div v-for="(item, index) in fileList" :key="index" class="file-list-box">
         <i class="wechatfont wechat-folder" title="发送文件"></i>
          <a-tooltip :title="item.name">
            <span class="upload-name-view">{{ item.name }}</span>
          </a-tooltip>
  
         
        </div>
      </template>
   
    </div>
 
  </div>
</template>

<script setup>
import { ref } from 'vue';

  
const fileList = ref([]);


  
    const handleDelete = (file) =>{
      fileList = fileList.filter((item) => item.uid!== file.uid)
    }
    const handleChange =(file)=>{
console.log(fileList)
console.log(file)
    }
   

</script>

<style scoped>
.upload-name-view {
  max-width: 80px;
  white-space: nowrap;
  text-overflow: ellipsis;
}
.upload-icon-view {
  position: relative;
  max-height: 48px;
  min-height: 48px;
  font-size: 32px;
  padding: 2px 10px 2px 2px;
  color: #0071fc;
}
.after-icon {
  line-height: 48px;
}
.file-list-box {
  position: relative;
  height: 40px;
  line-height: 48px;
  padding: 8px;
  border: 1px solid #d9d9d9;
  border-radius: 4px;
  margin-top: 10px;
  width: fit-content;
  display: flex;
  align-items: center;
  justify-content: space-between;
  background-color: #fafafa;
  cursor: pointer;
  transition: all 0.3s;
  color: #000;
  font-size: 14px;
  box-shadow: 0 2px 8px rgb(0 0 0 / 15%);
}
</style>

