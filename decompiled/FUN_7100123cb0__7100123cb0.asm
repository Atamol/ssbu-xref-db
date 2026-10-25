// addr:      7100123cb0
// offset:    0x123cb0
// name:      FUN_7100123cb0
// mangled:   
// size:      124

7100123cb0  sub sp,sp,#0x30
7100123cb4  str x19,[sp, #0x10]
7100123cb8  stp x29,x30,[sp, #0x20]
7100123cbc  add x29,sp,#0x20
7100123cc0  ldrb w1,[x0, #0x86]
7100123cc4  add x2,x0,#0xc5
7100123cc8  add x3,x0,#0xe8
7100123ccc  add x4,x0,#0xec
7100123cd0  mov x8,sp
7100123cd4  mov w5,wzr
7100123cd8  mov x19,x0
7100123cdc  bl 0x71001a2c80
7100123ce0  adrp x8,0x71052a5000
7100123ce4  adrp x9,0x71052a5000
7100123ce8  adrp x11,0x71042f6000
7100123cec  add x11,x11,#0xfff
7100123cf0  ldr x8,[x8, #0x758]
7100123cf4  ldr x9,[x9, #0xae8]
7100123cf8  ldr w10,[sp]
7100123cfc  adrp x12,0x71043df000
7100123d00  add x12,x12,#0x3fb
7100123d04  cmp w10,#0x0
7100123d08  csel x8,x9,x8,eq
7100123d0c  csel x9,x12,x11,eq
7100123d10  stp x8,xzr,[x19, #0x30]
7100123d14  str x9,[x19, #0x40]
7100123d18  ldp x29,x30,[sp, #0x20]
7100123d1c  ldr x19,[sp, #0x10]
7100123d20  mov x0,xzr
7100123d24  add sp,sp,#0x30
7100123d28  ret
