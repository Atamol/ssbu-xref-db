// addr:      71013e6d90
// offset:    0x13e6d90
// name:      FUN_71013e6d90
// mangled:   
// size:      588

71013e6d90  sub sp,sp,#0x30
71013e6d94  stp x20,x19,[sp, #0x10]
71013e6d98  stp x29,x30,[sp, #0x20]
71013e6d9c  add x29,sp,#0x20
71013e6da0  ldr x9,[x0, #0x8]
71013e6da4  mov x19,x0
71013e6da8  ldr w8,[x0, #0x204]
71013e6dac  ldr x0,[x9, #0x80]
71013e6db0  cbz w8,0x71013e6ddc
71013e6db4  bl 0x7101bc2f00
71013e6db8  tbnz w0,#0x0,0x71013e6fc0
71013e6dbc  ldr w8,[x19, #0x234]
71013e6dc0  cmp w8,#0x2
71013e6dc4  b.ne 0x71013e6e88
71013e6dc8  ldr w8,[x19, #0x238]
71013e6dcc  cmp w8,#0x2
71013e6dd0  b.ne 0x71013e6e94
71013e6dd4  ldr w8,[x19, #0x208]
71013e6dd8  b 0x71013e6e9c
71013e6ddc  fmov s0,0x3f800000
71013e6de0  add x0,x0,#0x128
71013e6de4  bl 0x710377aee0
71013e6de8  adrp x8,0x710532f000
71013e6dec  ldr x20,[x8, #0x7f0]
71013e6df0  cbz x20,0x71013e6fc0
71013e6df4  ldr x8,[x20, #0x8]
71013e6df8  ldr x8,[x8, #0x8]
71013e6dfc  ldr x19,[x8, #0x80]
71013e6e00  ldrb w8,[x19, #0x1f5]
71013e6e04  cbz w8,0x71013e6ef4
71013e6e08  ldp x8,x9,[x19, #0x100]
71013e6e0c  subs x10,x9,x8
71013e6e10  asr x10,x10,#0x3
71013e6e14  mov w11,#0x155
71013e6e18  mul x10,x10,x11
71013e6e1c  sub x10,x10,#0x1
71013e6e20  csel x11,xzr,x10,eq
71013e6e24  ldp x10,x12,[x19, #0x118]
71013e6e28  add x10,x12,x10
71013e6e2c  cmp x11,x10
71013e6e30  b.ne 0x71013e6e48
71013e6e34  add x0,x19,#0xf8
71013e6e38  bl 0x7101afbf30
71013e6e3c  ldp x10,x11,[x19, #0x118]
71013e6e40  add x10,x10,x11
71013e6e44  ldp x8,x9,[x19, #0x100]
71013e6e48  cmp x9,x8
71013e6e4c  b.eq 0x71013e6ec8
71013e6e50  mov x9,#0x6019
71013e6e54  movk x9,#0x180, LSL #16
71013e6e58  movk x9,#0x1806, LSL #32
71013e6e5c  movk x9,#0x8060, LSL #48
71013e6e60  umulh x9,x10,x9
71013e6e64  sub x11,x10,x9
71013e6e68  add x9,x9,x11, LSR #0x1
71013e6e6c  mov x11,#-0x155
71013e6e70  lsr x9,x9,#0x8
71013e6e74  ldr x8,[x8, x9, LSL #0x3]
71013e6e78  madd x9,x9,x11,x10
71013e6e7c  orr w10,wzr,#0xc
71013e6e80  madd x8,x9,x10,x8
71013e6e84  b 0x71013e6ecc
71013e6e88  mov w9,#0x2
71013e6e8c  str w9,[x19, #0x234]
71013e6e90  b 0x71013e6e9c
71013e6e94  mov w9,#0x2
71013e6e98  str w9,[x19, #0x238]
71013e6e9c  sub w8,w8,#0x6
71013e6ea0  cmp w8,#0x4
71013e6ea4  b.hi 0x71013e6fd0
71013e6ea8  adrp x9,0x71044ed000
71013e6eac  add x9,x9,#0x7e0
71013e6eb0  ldrsw x8,[x9, x8, LSL #0x2]
71013e6eb4  add x8,x8,x9
71013e6eb8  br x8
71013e6ebc  mov w8,#0x1
71013e6ec0  str w8,[x19, #0x23c]
71013e6ec4  b 0x71013e6fa8
71013e6ec8  mov x8,xzr
71013e6ecc  mov x9,#0x8
71013e6ed0  movk x9,#0x1, LSL #32
71013e6ed4  str x9,[x8]
71013e6ed8  str wzr,[x8, #0x8]
71013e6edc  ldr x8,[x19, #0x120]
71013e6ee0  add x8,x8,#0x1
71013e6ee4  str x8,[x19, #0x120]
71013e6ee8  ldr x8,[x20, #0x8]
71013e6eec  ldr x8,[x8, #0x8]
71013e6ef0  ldr x19,[x8, #0x80]
71013e6ef4  ldr x8,[x19, #0x130]
71013e6ef8  ldr x8,[x8]
71013e6efc  add x0,x8,#0x8
71013e6f00  adrp x1,0x71043ad000
71013e6f04  add x1,x1,#0xfe3
71013e6f08  mov x8,sp
71013e6f0c  bl 0x7103776910
71013e6f10  ldr x0,[sp, #0x8]
71013e6f14  ldr x8,[x0]
71013e6f18  cbz x8,0x71013e6f28
71013e6f1c  ldrb w9,[x8, #0x58]
71013e6f20  orr w9,w9,#0x1
71013e6f24  strb w9,[x8, #0x58]
71013e6f28  adrp x8,0x710523d000
71013e6f2c  add x8,x8,#0x9a8
71013e6f30  stp x8,xzr,[sp]
71013e6f34  cbz x0,0x71013e6f3c
71013e6f38  bl 0x710392eb40
71013e6f3c  mov w8,#0x1
71013e6f40  strb w8,[x19, #0x200]
71013e6f44  b 0x71013e6fc0
71013e6f48  mov w8,#0x5
71013e6f4c  str w8,[x19, #0x23c]
71013e6f50  ldr x8,[x19, #0x8]
71013e6f54  ldr x0,[x8, #0x80]
71013e6f58  orr w1,wzr,#0x3
71013e6f5c  b 0x71013e6fa4
71013e6f60  orr w8,wzr,#0x3
71013e6f64  str w8,[x19, #0x23c]
71013e6f68  ldr x8,[x19, #0x8]
71013e6f6c  ldr x0,[x8, #0x80]
71013e6f70  mov w1,#0x1
71013e6f74  b 0x71013e6fa4
71013e6f78  mov w8,#0x4
71013e6f7c  str w8,[x19, #0x23c]
71013e6f80  ldr x8,[x19, #0x8]
71013e6f84  ldr x0,[x8, #0x80]
71013e6f88  mov w1,#0x2
71013e6f8c  b 0x71013e6fa4
71013e6f90  mov w8,#0x2
71013e6f94  str w8,[x19, #0x23c]
71013e6f98  ldr x8,[x19, #0x8]
71013e6f9c  ldr x0,[x8, #0x80]
71013e6fa0  mov w1,wzr
71013e6fa4  bl 0x7101bb9290
71013e6fa8  ldrsw x8,[x19, #0x1fc]
71013e6fac  cmp w8,#0x13
71013e6fb0  b.cs 0x71013e6fd8
71013e6fb4  add x8,x19,x8, LSL #0x2
71013e6fb8  mov w9,#0x2
71013e6fbc  str w9,[x8, #0x1b0]
71013e6fc0  ldp x29,x30,[sp, #0x20]
71013e6fc4  ldp x20,x19,[sp, #0x10]
71013e6fc8  add sp,sp,#0x30
71013e6fcc  ret
71013e6fd0  str wzr,[x19, #0x23c]
71013e6fd4  b 0x71013e6fa8
71013e6fd8  bl 0x71039c2650
