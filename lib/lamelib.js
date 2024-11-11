let lameWasmInstance;

const MAX_LINE_SIZE = 4096;
let output = "";

function write_impl(stream, content) {
    const memory = new Uint8Array(lameWasmInstance.exports.memory.buffer);

    let currentPtr = content;
    while (memory[currentPtr] !== 0) {
        const chr = String.fromCharCode(memory[currentPtr]);
        if (chr == "\n") {
            fflush(stream);
        } else {
            output += String.fromCharCode(memory[currentPtr]);
        }
        currentPtr++;

        if (currentPtr - content > MAX_LINE_SIZE) {
            throw new Error(`At write_impl MAX_LINE_SIZE exceeded: ${MAX_LINE_SIZE}`);
        }
    }
}

function putc_impl(stream, chrCode) {
    const chr = String.fromCharCode(chrCode);
    if (chr == "\n") {
        fflush(stream);
    } else {
        output += chr;
    }
}

function print_int(n) {
    console.log(n);
}

function fopen(filename, mode) {
    throw new Error("Function `fopen` is not implemented");
}

function fclose(stream) {
    throw new Error("Function `fclose` is not implemented");
}

function remove(filename) {
    throw new Error("Function `remove` is not implemented");
}

function getc(stream) {
    throw new Error("Function `getc` is not implemented");
}

function fflush(stream) {
    if (output) {
        console.log(stream, output);
        output = "";
    }
}

function exit(retcode) {
    throw new Error(`Refal machine exited: ${retcode}`);
}

function abort(retcode) {
    throw new Error(`Refal machine aborted`);
}

function clock() {
    return performance.now();
}

function time(t) {
    const currentTime = Math.floor(Date.now() / 1000);
    if (t) {
        t[0] = currentTime;
    }
    return currentTime;
}

function ctime(t) {
    const date = new Date(t * 1000);
    return date.toUTCString();
}

export function getLameWasmEnv() {
    return {
        write_impl: write_impl,
        putc_impl: putc_impl,
        exit: exit,
        abort: abort,
        clock: clock,
        time: time,
        ctime: ctime,
        print_int: print_int,
        fopen: fopen,
        fclose: fclose,
        remove: remove,
        getc: getc,
        fflush: fflush,
    };
}

export function lamePostInit(wasmInstance) {
    lameWasmInstance = wasmInstance;
}
