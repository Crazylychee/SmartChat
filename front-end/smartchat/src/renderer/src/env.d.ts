// import EmojiPicker from 'vue3-emoji-picker'
// import 'vue3-emoji-picker/css'
/// <reference types="vite/client" />

declare module '*.vue' {
  import type { DefineComponent } from 'vue'
  // eslint-disable-next-line @typescript-eslint/no-explicit-any, @typescript-eslint/ban-types
  const component: DefineComponent<{}, {}, any>
  export default component
}

interface ImportMetaEnv {
  readonly RENDERER_VITE_TURMS_WS_URL: string
  readonly RENDERER_VITE_TURMS_USERNAME: string
  readonly RENDERER_VITE_TURMS_PASSWORD: string
  // more env variables...
}

interface ImportMeta {
  readonly env: ImportMetaEnv
}
