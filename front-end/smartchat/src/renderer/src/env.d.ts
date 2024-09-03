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
  // readonly VITE_TEST: string
  // more env variables...
}

interface ImportMeta {
  readonly env: ImportMetaEnv
}
