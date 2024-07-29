import { createApp } from "vue";
import pinia from "./store/pinia.js";
import App from "./App.vue";

import Antd from "ant-design-vue";
import "ant-design-vue/dist/reset.css";
import "./global.less";
import ui from "./components/libs/index.js";


const app = createApp(App);

app.use(pinia);
app.use(Antd);
app.use(ui);
app.mount("#app");
