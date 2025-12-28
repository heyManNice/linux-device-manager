import type { Lang } from './main.ts'

const lang: Lang = {
    'Hello World!': {
        zh_CN: '你好，世界！',
    },
    "linux device manager": {
        zh_CN: 'linux 设备管理器'
    }
}

export default {
    ...lang,
};