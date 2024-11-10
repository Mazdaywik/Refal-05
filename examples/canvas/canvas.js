let canvasWasmInstance;

function getString(strPtr) {
    const memory = new Uint8Array(canvasWasmInstance.exports.memory.buffer);

    let str = "";
    let currentPtr = strPtr;
    while (memory[currentPtr] !== 0) {
        str += String.fromCharCode(memory[currentPtr]);
        currentPtr++;
    }
    return str;
}

export function getCanvasWasmEnv(ctx) {
    return {
        fillRect: ctx.fillRect.bind(ctx),
        clearRect: ctx.clearRect.bind(ctx),
        strokeRect: ctx.strokeRect.bind(ctx),
        beginPath: ctx.beginPath.bind(ctx),
        closePath: ctx.closePath.bind(ctx),
        moveTo: ctx.moveTo.bind(ctx),
        lineTo: ctx.lineTo.bind(ctx),
        stroke: ctx.stroke.bind(ctx),
        fill: ctx.fill.bind(ctx),
        arc: ctx.arc.bind(ctx),
        arcTo: ctx.arcTo.bind(ctx),
        bezierCurveTo: ctx.bezierCurveTo.bind(ctx),
        quadraticCurveTo: ctx.quadraticCurveTo.bind(ctx),
        setLineWidth: (lineWidth) => {
            ctx.lineWidth = lineWidth;
        },
        setLineJoin: (lineJoin) => {
            ctx.lineJoin = lineJoin;
        },
        setLineCap: (lineCap) => {
            ctx.lineCap = getString(lineCap);
        },
        setStrokeStyle: (strokeStyle) => {
            ctx.strokeStyle = getString(strokeStyle);
        },
        setFillStyle: (fillStyle) => {
            ctx.fillStyle = getString(fillStyle);
        },
        setGlobalAlpha: (alpha) => {
            ctx.globalAlpha = alpha;
        },
        setTransform: (a, b, c, d, e, f) => {
            ctx.setTransform(a, b, c, d, e, f);
        },
        drawImage: ctx.drawImage.bind(ctx),
        createLinearGradient: ctx.createLinearGradient.bind(ctx),
        createRadialGradient: ctx.createRadialGradient.bind(ctx),
        createPattern: ctx.createPattern.bind(ctx),
    };
}

export function canvasPostInit(wasmInstance) {
    canvasWasmInstance = wasmInstance;
}
