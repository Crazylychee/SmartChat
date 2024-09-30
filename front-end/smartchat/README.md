# smartchat

An Electron application with Vue and TypeScript

## Recommended IDE Setup

- [VSCode](https://code.visualstudio.com/) + [ESLint](https://marketplace.visualstudio.com/items?itemName=dbaeumer.vscode-eslint) + [Prettier](https://marketplace.visualstudio.com/items?itemName=esbenp.prettier-vscode) + [Volar](https://marketplace.visualstudio.com/items?itemName=Vue.volar) + [TypeScript Vue Plugin (Volar)](https://marketplace.visualstudio.com/items?itemName=Vue.vscode-typescript-vue-plugin)

## Project Setup

### 先编译 turms-client-js

```shell
cd turms-client-js
npm run quick-build

```

### Install 主项目依赖

```bash
$ npm install
```

### 运行开发版 Development

```bash
$ npm run dev
```

#### Vue DevTools 使用说明

**一切以最新版文档 [Vue DevTools Standalone Mode](https://devtools.vuejs.org/guide/standalone)  为准，以下内容仅供参考:**

由于 electron 窗口大小限制，Vue DevTools 会显示不全，使用 Standalone Mode 可以解决这个问题。
使用 Vite 插件在开发模式下自动启动注入 script，但是需要提前运行 Vue DevTools ，否则无法注入。

（作为一个软件直接安装到电脑上）安装
```bash
pnpm add -g @vue/devtools@next
```

> PS: 如果安装报错很可能是网络问题

运行(如果是环境变量问题，自己解决)
```bash
vue-devtools
```


### Build

```bash
# For windows
$ npm run build:win

# For macOS
$ npm run build:mac

# For Linux
$ npm run build:linux
```

#### 安装py的命令

```shell
Set-ExecutionPolicy RemoteSigned -Scope CurrentUser
Invoke-WebRequest -Uri get.scoop.sh -OutFile install.ps1
.\install.ps1


scoop bucket add versions

scoop search python3

scoop install python38
```

页面原型如下：

![image-20240727100712492](README/image-20240727100712492.png)



