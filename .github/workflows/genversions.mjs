import { createReadStream } from "fs";
import { readFile, stat } from "fs/promises";
import { normalize } from "path";
import { createInterface } from "readline";
// same calculation as ebusd filereader.cpp hashFunction():
const hashFunction = (chars) => chars.reduce((hash, c) => ((31 * hash) ^ c) & 0xffffffff, 0);
const toHex = (hash) => hash < 0
    // little trick for 32 bit signed negative value
    ? ((hash >> 24) & 0xff).toString(16) + ((hash & 0xffffff) | 0x1000000).toString(16).substring(1)
    : hash.toString(16);
const calcVersion = async (file) => {
    const st = await stat(file);
    const size = st.size;
    const mtime = Math.floor(st.mtime.getTime() / 1000);
    const fileStream = createReadStream(file, 'utf-8');
    let lineNo = 0;
    let hash = 0;
    for await (const line of createInterface({
        input: fileStream,
        crlfDelay: Infinity,
    })) {
        lineNo++;
        const chars = Buffer.from(line.trim());
        // same calculation as ebusd filereader.cpp splitFields():
        hash ^= (hashFunction(chars) ^ (chars.length << (7 * (lineNo % 5)))) & 0xffffffff;
    }
    return { hash: toHex(hash), size, mtime };
};
(async () => {
    const files = process.argv.slice(2);
    let previous = {};
    if (files[0] === '-i') {
        const input = files.splice(0, 2)[1];
        try {
            previous = JSON.parse(await readFile(input, 'utf-8'));
        }
        catch (e) {
            console.error('unable to read previous input: ' + e);
        }
    }
    const ret = {};
    for (const file of files) {
        const version = await calcVersion(file);
        const normFile = normalize(file);
        const prev = previous[normFile];
        if (prev) {
            if (version.hash === prev.hash && version.size == prev.size) {
                version.mtime = Math.min(prev.mtime, version.mtime); // keep previous mtime
            }
        }
        ret[normFile] = version;
    }
    return ret;
})().then(entries => console.log(JSON.stringify(entries, undefined, 2)), console.error);
