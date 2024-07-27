# sqlite3的安装



```txt
npm WARN EBADENGINE Unsupported engine {
npm WARN EBADENGINE   package: 'fluent-ffmpeg@2.1.3',
npm WARN EBADENGINE   required: { node: '>=18' },
npm WARN EBADENGINE   current: { node: 'v16.20.2', npm: '8.19.4' }
npm WARN EBADENGINE }
npm WARN EBADENGINE Unsupported engine {
npm WARN EBADENGINE   package: 'isbinaryfile@5.0.2',
npm WARN EBADENGINE   required: { node: '>= 18.0.0' },
npm WARN EBADENGINE   current: { node: 'v16.20.2', npm: '8.19.4' }
npm WARN EBADENGINE }
npm ERR! code 1
npm ERR! path A:\usr\SmartChat\front-end\smartchat\node_modules\better-sqlite3
npm ERR! command failed
npm ERR! command C:\Windows\system32\cmd.exe /d /s /c prebuild-install || node-gyp rebuild --release
npm ERR! prebuild-install warn install connect ETIMEDOUT 20.205.243.166:443
npm ERR! gyp info it worked if it ends with ok
npm ERR! gyp info using node-gyp@9.1.0
npm ERR! gyp info using node@16.20.2 | win32 | x64
npm ERR! gyp info find Python using Python version 3.8.10 found at "A:\scoop\apps\python38\current\python.exe"
npm ERR! gyp ERR! find VS
npm ERR! gyp ERR! find VS msvs_version not set from command line or npm config
npm ERR! gyp ERR! find VS VCINSTALLDIR not set, not running in VS Command Prompt
npm ERR! gyp ERR! find VS checking VS2022 (17.10.35122.118) found at:
npm ERR! gyp ERR! find VS "A:\softwares\vs2022"
npm ERR! gyp ERR! find VS - found "Visual Studio C++ core features"
npm ERR! gyp ERR! find VS - missing any VC++ toolset
npm ERR! gyp ERR! find VS could not find a version of Visual Studio 2017 or newer to use
npm ERR! gyp ERR! find VS looking for Visual Studio 2015
npm ERR! gyp ERR! find VS - not found
npm ERR! gyp ERR! find VS not looking for VS2013 as it is only supported up to Node.js 8
npm ERR! gyp ERR! find VS
npm ERR! gyp ERR! find VS **************************************************************
npm ERR! gyp ERR! find VS You need to install the latest version of Visual Studio
npm ERR! gyp ERR! find VS including the "Desktop development with C++" workload.
npm ERR! gyp ERR! find VS For more information consult the documentation at:
npm ERR! gyp ERR! find VS https://github.com/nodejs/node-gyp#on-windows
npm ERR! gyp ERR! find VS **************************************************************
npm ERR! gyp ERR! configure error
npm ERR! gyp ERR! stack Error: Could not find any Visual Studio installation to use
npm ERR! gyp ERR! stack     at VisualStudioFinder.fail (C:\Users\usr\AppData\Roaming\nvm\v16.20.2\node_modules\npm\node_modules\node-gyp\lib\find-visualstudio.js:122:47)
npm ERR! gyp ERR! stack     at C:\Users\usr\AppData\Roaming\nvm\v16.20.2\node_modules\npm\node_modules\node-gyp\lib\find-visualstudio.js:75:16
npm ERR! gyp ERR! stack     at VisualStudioFinder.findVisualStudio2013 (C:\Users\usr\AppData\Roaming\nvm\v16.20.2\node_modules\npm\node_modules\node-gyp\lib\find-visualstudio.js:364:14)
npm ERR! gyp ERR! stack     at C:\Users\usr\AppData\Roaming\nvm\v16.20.2\node_modules\npm\node_modules\node-gyp\lib\find-visualstudio.js:71:14
npm ERR! gyp ERR! stack     at C:\Users\usr\AppData\Roaming\nvm\v16.20.2\node_modules\npm\node_modules\node-gyp\lib\find-visualstudio.js:385:16
npm ERR! gyp ERR! stack     at C:\Users\usr\AppData\Roaming\nvm\v16.20.2\node_modules\npm\node_modules\node-gyp\lib\util.js:54:7
npm ERR! gyp ERR! stack     at C:\Users\usr\AppData\Roaming\nvm\v16.20.2\node_modules\npm\node_modules\node-gyp\lib\util.js:33:16
npm ERR! gyp ERR! stack     at ChildProcess.exithandler (node:child_process:410:5)
npm ERR! gyp ERR! stack     at ChildProcess.emit (node:events:513:28)
npm ERR! gyp ERR! stack     at maybeClose (node:internal/child_process:1100:16)
npm ERR! gyp ERR! System Windows_NT 10.0.19045
npm ERR! gyp ERR! command "C:\\Program Files\\nodejs\\node.exe" "C:\\Users\\usr\\AppData\\Roaming\\nvm\\v16.20.2\\node_modules\\npm\\node_modules\\node-gyp\\bin\\node-gyp.js" "rebuild" "--release"
npm ERR! gyp ERR! cwd A:\usr\SmartChat\front-end\smartchat\node_modules\better-sqlite3
npm ERR! gyp ERR! node-gyp -v v9.1.0
npm ERR! gyp ERR! not ok

npm ERR! A complete log of this run can be found in:
npm ERR!     C:\Users\usr\AppData\Local\npm-cache\_logs\2024-07-26T16_06_02_902Z-debug-0.log

```

你们在npm i的时候可能会出现这种错误，这是由于npm无法找到sqlite3的二进制文件导致的，然后npm就执行本地安装。但是本地安装依赖于python环境，还有vs的C++编译库，所以要先进行以下步骤。



通过本地win包管理工具scoop安装py

这里记得选个有存储空间的。。。

```
Set-ExecutionPolicy RemoteSigned -Scope CurrentUser
Invoke-WebRequest -Uri get.scoop.sh -OutFile install.ps1
.\install.ps1


scoop bucket add versions

scoop search python3

scoop install python38

scoop reset python38
```



安装下载vs

[下载 Visual Studio Tools - 免费安装 Windows、Mac、Linux (microsoft.com)](https://visualstudio.microsoft.com/zh-hans/downloads/)

记得在安装界面勾选工作负载：桌面开发C++



如果不记得了也没事，安装之后在搜索功能那里查找就行。

