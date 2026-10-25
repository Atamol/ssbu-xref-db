// addr:      7100189ec0
// offset:    0x189ec0
// name:      FUN_7100189ec0
// mangled:   
// size:      72

7100189ec0  str x19,[sp, #-0x20]!
7100189ec4  stp x29,x30,[sp, #0x10]
7100189ec8  add x29,sp,#0x10
7100189ecc  ldr x8,[x0]
7100189ed0  ldr x8,[x8, #0x10]
7100189ed4  mov w1,#0x1
7100189ed8  mov x19,x0
7100189edc  blr x8
7100189ee0  adrp x8,0x71052a4000
7100189ee4  ldr x8,[x8, #0xfb0]
7100189ee8  adrp x9,0x7104329000
7100189eec  add x9,x9,#0x36b
7100189ef0  str x9,[x19, #0x40]
7100189ef4  mov w0,#0x1
7100189ef8  stp x8,xzr,[x19, #0x30]
7100189efc  ldp x29,x30,[sp, #0x10]
7100189f00  ldr x19,[sp], #0x20
7100189f04  ret
