// addr:      7102d76cf0
// offset:    0x2d76cf0
// name:      FUN_7102d76cf0
// mangled:   
// size:      364

7102d76cf0  str x21,[sp, #-0x30]!
7102d76cf4  stp x20,x19,[sp, #0x10]
7102d76cf8  stp x29,x30,[sp, #0x20]
7102d76cfc  add x29,sp,#0x20
7102d76d00  mov x19,x0
7102d76d04  ldr x0,[x0, #0x58]
7102d76d08  ldr x8,[x0]
7102d76d0c  ldr x8,[x8, #0x40]
7102d76d10  blr x8
7102d76d14  ldp x20,x21,[x19, #0x60]
7102d76d18  cmp x20,x21
7102d76d1c  b.eq 0x7102d76d38
7102d76d20  ldr x0,[x20], #0x8
7102d76d24  ldr x8,[x0]
7102d76d28  ldr x8,[x8, #0x40]
7102d76d2c  blr x8
7102d76d30  cmp x21,x20
7102d76d34  b.ne 0x7102d76d20
7102d76d38  ldp x20,x21,[x19, #0x78]
7102d76d3c  cmp x20,x21
7102d76d40  b.eq 0x7102d76d5c
7102d76d44  ldr x0,[x20], #0x8
7102d76d48  ldr x8,[x0]
7102d76d4c  ldr x8,[x8, #0x40]
7102d76d50  blr x8
7102d76d54  cmp x21,x20
7102d76d58  b.ne 0x7102d76d44
7102d76d5c  ldr x8,[x19, #0x8]
7102d76d60  ldr x9,[x8, #0x338]
7102d76d64  ldr x9,[x9]
7102d76d68  ldr x0,[x9, #0x8]
7102d76d6c  cbz x0,0x7102d76d88
7102d76d70  ldr x8,[x0]
7102d76d74  ldr x8,[x8, #0x58]
7102d76d78  mov w1,#0x1b
7102d76d7c  mov w2,#0xffffffff
7102d76d80  blr x8
7102d76d84  ldr x8,[x19, #0x8]
7102d76d88  ldr x8,[x8, #0x300]
7102d76d8c  ldr x9,[x8, #0x18]
7102d76d90  ldp x8,x9,[x9]
7102d76d94  cmp x8,x9
7102d76d98  b.eq 0x7102d76e4c
7102d76d9c  mov x10,#0xdf99
7102d76da0  movk x10,#0xb569, LSL #16
7102d76da4  movk x10,#0x7, LSL #32
7102d76da8  mov x11,x8
7102d76dac  ldr x12,[x11], #0x8
7102d76db0  ldr x13,[x12, #0xa0]
7102d76db4  and x13,x13,#0xffffffffff
7102d76db8  cmp x13,x10
7102d76dbc  b.eq 0x7102d76dcc
7102d76dc0  cmp x9,x11
7102d76dc4  b.ne 0x7102d76dac
7102d76dc8  b 0x7102d76df4
7102d76dcc  ldr x10,[x12, #0x130]
7102d76dd0  cbz x10,0x7102d76df4
7102d76dd4  ldp x0,x1,[x10]
7102d76dd8  adrp x2,0x71042a1000
7102d76ddc  add x2,x2,#0x67e
7102d76de0  bl 0x71025f5420
7102d76de4  ldr x8,[x19, #0x8]
7102d76de8  ldr x8,[x8, #0x300]
7102d76dec  ldr x9,[x8, #0x18]
7102d76df0  ldp x8,x9,[x9]
7102d76df4  cmp x8,x9
7102d76df8  b.eq 0x7102d76e4c
7102d76dfc  mov x10,#0x3c84
7102d76e00  movk x10,#0x6330, LSL #16
7102d76e04  movk x10,#0x7, LSL #32
7102d76e08  ldr x11,[x8], #0x8
7102d76e0c  ldr x12,[x11, #0xa0]
7102d76e10  and x12,x12,#0xffffffffff
7102d76e14  cmp x12,x10
7102d76e18  b.eq 0x7102d76e28
7102d76e1c  cmp x9,x8
7102d76e20  b.ne 0x7102d76e08
7102d76e24  b 0x7102d76e4c
7102d76e28  ldr x8,[x11, #0x130]
7102d76e2c  cbz x8,0x7102d76e4c
7102d76e30  ldp x0,x1,[x8]
7102d76e34  adrp x2,0x71042c3000
7102d76e38  add x2,x2,#0xb1
7102d76e3c  ldp x29,x30,[sp, #0x20]
7102d76e40  ldp x20,x19,[sp, #0x10]
7102d76e44  ldr x21,[sp], #0x30
7102d76e48  b 0x71025f55b0
7102d76e4c  ldp x29,x30,[sp, #0x20]
7102d76e50  ldp x20,x19,[sp, #0x10]
7102d76e54  ldr x21,[sp], #0x30
7102d76e58  ret
