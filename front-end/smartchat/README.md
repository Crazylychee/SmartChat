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



