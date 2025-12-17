export const supports = [
    'zh_CN',
] as const;

type Lang = {
    [key: string]: {
        [key in typeof supports[number]]?: string;
    }
};

const lang: Lang = {
    'Hello World!': {
        zh_CN: '你好，世界！',
    }
}

export default {
    ...lang,
};