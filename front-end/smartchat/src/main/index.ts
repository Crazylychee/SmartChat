import { app, shell, BrowserWindow } from 'electron'
import * as electron from "electron";
import { join } from 'path'
import { electronApp, optimizer, is } from '@electron-toolkit/utils'
import icon from '../../resources/icon.png?asset'
const NODE_ENV = process.env.NODE_ENV
import { onLoginOrRegister, onLoginSuccess, winTitleOp,onGetLocalStore,onSetLocalStore } from './ipc'
import Tray = electron.Tray;
import Menu = electron.Menu;
import { loginSqlite3Client } from './db/message';

//electro窗体大小
const login_width = 300;
const login_height = 370;
const register_height = 490;



function createWindow(): void {
  // Create the browser window.
  // const mainWindow = new BrowserWindow({
  //   width: 900,
  //   height: 670,
  //   show: false,
  //   frame: false,
  //   autoHideMenuBar: true,
  //   ...(process.platform === 'linux' ? { icon } : {}),
  //   webPreferences: {
  //     preload: join(__dirname, '../preload/index.js'),
  //     sandbox: false
  //   }
  // })

  const mainWindow = new BrowserWindow({
    icon: icon,
    width: login_width,
    height: login_height,
    show: false,
    autoHideMenuBar: true,
    titleBarStyle: 'hidden',//electron窗口标题
    resizable: false,//是否允许用户改变窗口
    frame: true,
    transparent: true,//透明窗体
    webPreferences: {
      preload: join(__dirname, '../preload/index.js'),
      sandbox: false,
      contextIsolation: false//上下文隔离
    }
  })

  loginSqlite3Client()


  //托盘
  const tray = new Tray(icon);
  const contextMenu = [
    {
      label: '退出EasyChat',
      click: function () {
        app.exit()
      }
    }
  ]
  const menu = Menu.buildFromTemplate(contextMenu);
  tray.setToolTip('EasyChat')
  tray.setContextMenu(menu)
  tray.on("click", () => {
    mainWindow.setSkipTaskbar(false)
    mainWindow.show()
  })

  //监听注册 登录切换窗口大小
  onLoginOrRegister((isLogin) => {
    mainWindow.setResizable(true)
    if (isLogin) {
      console.log(mainWindow.getSize()[1]);
      mainWindow.setSize(login_width, login_height)
    } else {
      mainWindow.setSize(login_width, register_height)
    }
    mainWindow.setResizable(false)
  })

  //监听登录成功
  onLoginSuccess((config) => {
    mainWindow.setResizable(true)
    mainWindow.setSize(850, 800)
    //居中显示
    mainWindow.center()
    //可以最大化
    mainWindow.setMaximizable(true)
    //设置最小窗口大小
    mainWindow.setMinimumSize(901, 673)
    //TODO 管理后台的窗口操作，托盘操作
    if (config.admin) {

    }
    contextMenu.unshift({
      label: "用户:" + config.nickName,
      click: function () {

      }
    })
    tray.setContextMenu(Menu.buildFromTemplate(contextMenu))

  })

  winTitleOp((e, { action, data }) => {
    const webContents = e.sender
    const win = BrowserWindow.fromWebContents(webContents)

    if (!win) {
      console.error("BrowserWindow is not found.");
      return;
    }

    switch (action) {
      case "close": {
        if (data.closeType == 0) {
          win.close()
        } else {
          win.setSkipTaskbar(true)
          win.hide()
        }
        break
      }
      case "minimize": {
        win.minimize()
        break
      }
      case "maximize": {
        win.maximize()
        break
      }
      case "unmaximize": {
        //还原窗口大小并居中
        win.setSize(850, 800)
        win.center()
        break
      }
      case "top": {
        win.setAlwaysOnTop(data.top)
        break
      }
    }
  });
  onSetLocalStore()
  onGetLocalStore()




  //打开控制台
  if (NODE_ENV === 'development') {
    mainWindow.webContents.openDevTools()
  }

  mainWindow.on('ready-to-show', () => {
    mainWindow.setTitle("SmartChat")
    mainWindow.show()
  })

  mainWindow.webContents.setWindowOpenHandler((details) => {
    shell.openExternal(details.url)
    return { action: 'deny' }
  })

  // HMR for renderer base on electron-vite cli.
  // Load the remote URL for development or the local html file for production.
  if (is.dev && process.env['ELECTRON_RENDERER_URL']) {
    mainWindow.loadURL(process.env['ELECTRON_RENDERER_URL'])
  } else {
    mainWindow.loadFile(join(__dirname, '../renderer/index.html'))
  }
}

// This method will be called when Electron has finished
// initialization and is ready to create browser windows.
// Some APIs can only be used after this event occurs.
app.whenReady().then(() => {
  // Set app user model id for windows
  electronApp.setAppUserModelId('com.electron')

  // Default open or close DevTools by F12 in development
  // and ignore CommandOrControl + R in production.
  // see https://github.com/alex8088/electron-toolkit/tree/master/packages/utils
  app.on('browser-window-created', (_, window) => {
    optimizer.watchWindowShortcuts(window)
  })

  createWindow()

  app.on('activate', function () {
    // On macOS it's common to re-create a window in the app when the
    // dock icon is clicked and there are no other windows open.
    if (BrowserWindow.getAllWindows().length === 0) createWindow()
  })
})

// Quit when all windows are closed, except on macOS. There, it's common
// for applications and their menu bar to stay active until the user quits
// explicitly with Cmd + Q.
app.on('window-all-closed', () => {
  if (process.platform !== 'darwin') {
    app.quit()
  }
})

// In this file you can include the rest of your app"s specific main process
// code. You can also put them in separate files and require them here.
