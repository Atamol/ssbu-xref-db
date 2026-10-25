// addr:      7102d92da0
// offset:    0x2d92da0
// name:      FUN_7102d92da0
// mangled:   
// size:      280

7102d92da0  str x19,[sp, #-0x20]!
7102d92da4  stp x29,x30,[sp, #0x10]
7102d92da8  add x29,sp,#0x10
7102d92dac  mov x19,x0
7102d92db0  ldr x0,[x0, #0x38]
7102d92db4  ldr x8,[x0]
7102d92db8  ldr x8,[x8, #0x40]
7102d92dbc  blr x8
7102d92dc0  ldr x8,[x19, #0x8]
7102d92dc4  ldr x9,[x8, #0x338]
7102d92dc8  ldr x9,[x9]
7102d92dcc  ldr x0,[x9, #0x8]
7102d92dd0  cbz x0,0x7102d92dec
7102d92dd4  ldr x8,[x0]
7102d92dd8  ldr x8,[x8, #0x58]
7102d92ddc  mov w1,#0x1b
7102d92de0  mov w2,#0xffffffff
7102d92de4  blr x8
7102d92de8  ldr x8,[x19, #0x8]
7102d92dec  ldr x8,[x8, #0x300]
7102d92df0  ldr x9,[x8, #0x18]
7102d92df4  ldp x8,x9,[x9]
7102d92df8  cmp x8,x9
7102d92dfc  b.eq 0x7102d92eac
7102d92e00  mov x10,#0xdf99
7102d92e04  movk x10,#0xb569, LSL #16
7102d92e08  movk x10,#0x7, LSL #32
7102d92e0c  mov x11,x8
7102d92e10  ldr x12,[x11], #0x8
7102d92e14  ldr x13,[x12, #0xa0]
7102d92e18  and x13,x13,#0xffffffffff
7102d92e1c  cmp x13,x10
7102d92e20  b.eq 0x7102d92e30
7102d92e24  cmp x9,x11
7102d92e28  b.ne 0x7102d92e10
7102d92e2c  b 0x7102d92e58
7102d92e30  ldr x10,[x12, #0x130]
7102d92e34  cbz x10,0x7102d92e58
7102d92e38  ldp x0,x1,[x10]
7102d92e3c  adrp x2,0x71042a1000
7102d92e40  add x2,x2,#0x67e
7102d92e44  bl 0x71025f5420
7102d92e48  ldr x8,[x19, #0x8]
7102d92e4c  ldr x8,[x8, #0x300]
7102d92e50  ldr x9,[x8, #0x18]
7102d92e54  ldp x8,x9,[x9]
7102d92e58  cmp x8,x9
7102d92e5c  b.eq 0x7102d92eac
7102d92e60  mov x10,#0x6fbb
7102d92e64  movk x10,#0x6f3e, LSL #16
7102d92e68  movk x10,#0x7, LSL #32
7102d92e6c  ldr x11,[x8], #0x8
7102d92e70  ldr x12,[x11, #0xa0]
7102d92e74  and x12,x12,#0xffffffffff
7102d92e78  cmp x12,x10
7102d92e7c  b.eq 0x7102d92e8c
7102d92e80  cmp x9,x8
7102d92e84  b.ne 0x7102d92e6c
7102d92e88  b 0x7102d92eac
7102d92e8c  ldr x8,[x11, #0x130]
7102d92e90  cbz x8,0x7102d92eac
7102d92e94  ldp x0,x1,[x8]
7102d92e98  adrp x2,0x71042c3000
7102d92e9c  add x2,x2,#0xb9
7102d92ea0  ldp x29,x30,[sp, #0x10]
7102d92ea4  ldr x19,[sp], #0x20
7102d92ea8  b 0x71025f55b0
7102d92eac  ldp x29,x30,[sp, #0x10]
7102d92eb0  ldr x19,[sp], #0x20
7102d92eb4  ret
