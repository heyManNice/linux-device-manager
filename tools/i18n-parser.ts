import lang from '../i18n/lang.ts';
import { supports } from '../i18n/main.ts'
import fs from 'fs';
import path from 'path';
import { po2mo } from './utils.ts';

const header = `msgid ""\nmsgstr ""
"Content-Type: text/plain; charset=UTF-8\\n"
`;

async function main() {
    for (const locale of supports) {
        let output = header;
        for (const [id, values] of Object.entries(lang)) {
            const value = values[locale];
            if (!value) {
                console.warn(`Missing translation for locale "${locale}" in key "${id}"`);
                continue;
            }
            output += `\n\nmsgid ${JSON.stringify(id)}\nmsgstr ${JSON.stringify(value)}`;
        }

        fs.writeFileSync(`./dist/temp.po`, output, 'utf8');

        const localeDir = `./dist/locale/${locale}/LC_MESSAGES`;
        console.log(`${localeDir}/ldm.mo`);

        if (!fs.existsSync(localeDir)) {
            fs.mkdirSync(localeDir, { recursive: true });
        }

        await po2mo(`./dist/temp.po`, path.join(localeDir, 'ldm.mo'));
    }
    fs.unlinkSync(`./dist/temp.po`);
    console.log(`successfully.`);
}

if (module === require.main) {
    main()
}