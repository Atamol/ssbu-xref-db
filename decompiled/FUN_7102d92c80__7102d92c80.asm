// addr:      7102d92c80
// offset:    0x2d92c80
// name:      FUN_7102d92c80
// mangled:   
// size:      280

7102d92c80  str x19,[sp, #-0x20]!
7102d92c84  stp x29,x30,[sp, #0x10]
7102d92c88  add x29,sp,#0x10
7102d92c8c  mov x19,x0
7102d92c90  ldr x0,[x0, #0x38]
7102d92c94  ldr x8,[x0]
7102d92c98  ldr x8,[x8, #0x38]
7102d92c9c  blr x8
7102d92ca0  ldr x8,[x19, #0x8]
7102d92ca4  ldr x9,[x8, #0x338]
7102d92ca8  ldr x9,[x9]
7102d92cac  ldr x0,[x9, #0x8]
7102d92cb0  cbz x0,0x7102d92ccc
7102d92cb4  ldr x8,[x0]
7102d92cb8  ldr x8,[x8, #0x58]
7102d92cbc  mov w1,#0x16
7102d92cc0  mov w2,#0xffffffff
7102d92cc4  blr x8
7102d92cc8  ldr x8,[x19, #0x8]
7102d92ccc  ldr x8,[x8, #0x300]
7102d92cd0  ldr x9,[x8, #0x18]
7102d92cd4  ldp x8,x9,[x9]
7102d92cd8  cmp x8,x9
7102d92cdc  b.eq 0x7102d92d8c
7102d92ce0  mov x10,#0xdf99
7102d92ce4  movk x10,#0xb569, LSL #16
7102d92ce8  movk x10,#0x7, LSL #32
7102d92cec  mov x11,x8
7102d92cf0  ldr x12,[x11], #0x8
7102d92cf4  ldr x13,[x12, #0xa0]
7102d92cf8  and x13,x13,#0xffffffffff
7102d92cfc  cmp x13,x10
7102d92d00  b.eq 0x7102d92d10
7102d92d04  cmp x9,x11
7102d92d08  b.ne 0x7102d92cf0
7102d92d0c  b 0x7102d92d38
7102d92d10  ldr x10,[x12, #0x130]
7102d92d14  cbz x10,0x7102d92d38
7102d92d18  ldp x0,x1,[x10]
7102d92d1c  adrp x2,0x71042a1000
7102d92d20  add x2,x2,#0x67e
7102d92d24  bl 0x71025f55b0
7102d92d28  ldr x8,[x19, #0x8]
7102d92d2c  ldr x8,[x8, #0x300]
7102d92d30  ldr x9,[x8, #0x18]
7102d92d34  ldp x8,x9,[x9]
7102d92d38  cmp x8,x9
7102d92d3c  b.eq 0x7102d92d8c
7102d92d40  mov x10,#0x6fbb
7102d92d44  movk x10,#0x6f3e, LSL #16
7102d92d48  movk x10,#0x7, LSL #32
7102d92d4c  ldr x11,[x8], #0x8
7102d92d50  ldr x12,[x11, #0xa0]
7102d92d54  and x12,x12,#0xffffffffff
7102d92d58  cmp x12,x10
7102d92d5c  b.eq 0x7102d92d6c
7102d92d60  cmp x9,x8
7102d92d64  b.ne 0x7102d92d4c
7102d92d68  b 0x7102d92d8c
7102d92d6c  ldr x8,[x11, #0x130]
7102d92d70  cbz x8,0x7102d92d8c
7102d92d74  ldp x0,x1,[x8]
7102d92d78  adrp x2,0x71042c3000
7102d92d7c  add x2,x2,#0xb9
7102d92d80  ldp x29,x30,[sp, #0x10]
7102d92d84  ldr x19,[sp], #0x20
7102d92d88  b 0x71025f5420
7102d92d8c  ldp x29,x30,[sp, #0x10]
7102d92d90  ldr x19,[sp], #0x20
7102d92d94  ret
