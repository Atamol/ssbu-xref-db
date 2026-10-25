// addr:      7100105fd0
// offset:    0x105fd0
// name:      FUN_7100105fd0
// mangled:   
// size:      64

7100105fd0  str x19,[sp, #-0x20]!
7100105fd4  stp x29,x30,[sp, #0x10]
7100105fd8  add x29,sp,#0x10
7100105fdc  mov x19,x0
7100105fe0  add x0,x0,#0x90
7100105fe4  bl 0x71000bcf30
7100105fe8  adrp x8,0x71052a5000
7100105fec  ldr x8,[x8, #0x4c0]
7100105ff0  adrp x9,0x7104432000
7100105ff4  add x9,x9,#0x294
7100105ff8  str x9,[x19, #0x40]
7100105ffc  mov w0,#0x5
7100106000  stp x8,xzr,[x19, #0x30]
7100106004  ldp x29,x30,[sp, #0x10]
7100106008  ldr x19,[sp], #0x20
710010600c  ret
