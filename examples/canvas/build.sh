export R05ROOT="/home/butvinm/Dev/lame-refal"
export R05PATH="$R05ROOT/lib:$R05ROOT/src:$R05ROOT/examples/canvas"
R05CCOMP="clang -DLAMELIB -target wasm32 -ffreestanding --no-standard-libraries -fno-builtin -Wl,--export-table -Wl,--no-entry -Wl,--export=main -Wl,--export=malloc -Wl,--allow-undefined -o main.wasm" $R05ROOT/bin/refal05c main refal05rts Library Canvas
