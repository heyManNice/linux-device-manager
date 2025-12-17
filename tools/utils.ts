import { exec } from 'child_process';


export async function execCommand(command: string): Promise<string> {
    return new Promise((resolve, reject) => {
        exec(command, (error, stdout, stderr) => {
            if (error) {
                reject(error);
            } else if (stderr) {
                reject(new Error(stderr));
            } else {
                resolve(stdout);
            }
        });
    });
}

export async function po2mo(inputPath: string, outputPath: string): Promise<void> {
    const command = `msgfmt "${inputPath}" -o "${outputPath}"`;
    await execCommand(command);
}