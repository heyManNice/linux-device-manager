export const supports = [
    'zh_CN',
] as const;

export type Lang = {
    [key: string]: {
        [key in typeof supports[number]]?: string;
    }
};