// addr:      7101c44cf0
// offset:    0x1c44cf0
// name:      FUN_7101c44cf0
// mangled:   
// size:      756

7101c44cf0  str x21,[sp, #-0x30]!
7101c44cf4  stp x20,x19,[sp, #0x10]
7101c44cf8  stp x29,x30,[sp, #0x20]
7101c44cfc  add x29,sp,#0x20
7101c44d00  ldr w8,[x0, #0x13c]
7101c44d04  mov x19,x0
7101c44d08  cbnz w8,0x7101c44d2c
7101c44d0c  ldr x8,[x19, #0x528]
7101c44d10  ldr x8,[x8]
7101c44d14  ldr x0,[x8]
7101c44d18  mov w1,wzr
7101c44d1c  bl 0x71037760f0
7101c44d20  adrp x8,0x710532f000
7101c44d24  ldr x0,[x8, #0x7c8]
7101c44d28  bl 0x71032e5bf0
7101c44d2c  adrp x8,0x710532f000
7101c44d30  ldr x8,[x8, #0x7c8]
7101c44d34  ldr x8,[x8, #0x8]
7101c44d38  ldrb w9,[x8, #0x6a]
7101c44d3c  cbz w9,0x7101c44fd0
7101c44d40  ldrb w8,[x8, #0x6b]
7101c44d44  cbnz w8,0x7101c44fd0
7101c44d48  mov x0,x19
7101c44d4c  bl 0x7101c44ff0
7101c44d50  ldrsw x8,[x19, #0x134]
7101c44d54  cmp w8,#0x13
7101c44d58  b.cs 0x7101c44fe0
7101c44d5c  add x8,x19,x8, LSL #0x2
7101c44d60  orr w9,wzr,#0x3
7101c44d64  str w9,[x8, #0xe8]
7101c44d68  ldr w8,[x19, #0x520]
7101c44d6c  and w8,w8,#0xfffffffe
7101c44d70  cmp w8,#0x2
7101c44d74  b.ne 0x7101c44ebc
7101c44d78  adrp x8,0x710532f000
7101c44d7c  ldr x8,[x8, #0x840]
7101c44d80  ldr x8,[x8, #0x8]
7101c44d84  ldr x8,[x8, #0xb8]
7101c44d88  ldr x21,[x8, #0x80]
7101c44d8c  ldrb w8,[x21, #0xc8]
7101c44d90  cbz w8,0x7101c44d9c
7101c44d94  strb wzr,[x21, #0xc8]
7101c44d98  b 0x7101c44da8
7101c44d9c  mov w8,#0x2253
7101c44da0  ldrb w8,[x21, x8, LSL ]
7101c44da4  cbz w8,0x7101c44e54
7101c44da8  mov w8,#0x2250
7101c44dac  ldrb w8,[x21, x8, LSL ]
7101c44db0  cbz w8,0x7101c44e54
7101c44db4  mov x0,x21
7101c44db8  mov w1,wzr
7101c44dbc  mov w2,wzr
7101c44dc0  bl 0x7101af4c80
7101c44dc4  ldrb w8,[x21, #0xc8]
7101c44dc8  cbz w8,0x7101c44ddc
7101c44dcc  ldrb w8,[x21, #0xc9]
7101c44dd0  cmp w8,#0x0
7101c44dd4  cset w20,ne
7101c44dd8  b 0x7101c44de0
7101c44ddc  mov w20,wzr
7101c44de0  ldr x8,[x21, #0x2260]
7101c44de4  ldr x9,[x8, #0x1b8]
7101c44de8  cbz x9,0x7101c44e54
7101c44dec  add x10,x8,#0x1b8
7101c44df0  mov x8,x10
7101c44df4  ldr w11,[x9, #0x20]
7101c44df8  cmp w11,#0x0
7101c44dfc  cset w11,lt
7101c44e00  csel x8,x8,x9,lt
7101c44e04  ldr x9,[x9, w11, UXTW #0x3]
7101c44e08  cbnz x9,0x7101c44df4
7101c44e0c  cmp x8,x10
7101c44e10  b.eq 0x7101c44e54
7101c44e14  ldr w9,[x8, #0x20]
7101c44e18  cmp w9,#0x0
7101c44e1c  b.gt 0x7101c44e54
7101c44e20  ldr x21,[x8, #0x28]
7101c44e24  cbz x21,0x7101c44e54
7101c44e28  ldr x8,[x21]
7101c44e2c  ldr x8,[x8, #0x1f8]
7101c44e30  mov x0,x21
7101c44e34  mov w1,w20
7101c44e38  blr x8
7101c44e3c  ldr x8,[x21]
7101c44e40  ldr x8,[x8, #0x388]
7101c44e44  eor w1,w20,#0x1
7101c44e48  mov x0,x21
7101c44e4c  mov w2,wzr
7101c44e50  blr x8
7101c44e54  ldr x8,[x19, #0x528]
7101c44e58  ldr x8,[x8]
7101c44e5c  ldr x0,[x8, #0x10]
7101c44e60  fmov s0,wzr
7101c44e64  adrp x1,0x710434a000
7101c44e68  add x1,x1,#0x2f6
7101c44e6c  bl 0x7103778630
7101c44e70  mov w1,#0xffffffff
7101c44e74  mov x0,x19
7101c44e78  mov w2,wzr
7101c44e7c  bl 0x7101c456b0
7101c44e80  ldr x0,[x19, #0x530]
7101c44e84  ldr x8,[x0]
7101c44e88  ldr x8,[x8, #0x70]
7101c44e8c  mov w1,wzr
7101c44e90  blr x8
7101c44e94  ldr w8,[x19, #0x134]
7101c44e98  cmp w8,#0x11
7101c44e9c  b.gt 0x7101c44ebc
7101c44ea0  add w8,w8,#0x1
7101c44ea4  cmp w8,#0x13
7101c44ea8  str w8,[x19, #0x134]
7101c44eac  b.cs 0x7101c44fe0
7101c44eb0  add x8,x19,w8, SXTW  #0x2
7101c44eb4  mov w9,#0x8
7101c44eb8  str w9,[x8, #0xe8]
7101c44ebc  ldr x8,[x19, #0x528]
7101c44ec0  ldr x8,[x8]
7101c44ec4  ldr x0,[x8, #0x10]
7101c44ec8  fmov s0,wzr
7101c44ecc  adrp x1,0x7104421000
7101c44ed0  add x1,x1,#0x55
7101c44ed4  bl 0x7103778630
7101c44ed8  ldr w8,[x19, #0x134]
7101c44edc  cmp w8,#0x11
7101c44ee0  b.gt 0x7101c44f00
7101c44ee4  add w8,w8,#0x1
7101c44ee8  cmp w8,#0x13
7101c44eec  str w8,[x19, #0x134]
7101c44ef0  b.cs 0x7101c44fe0
7101c44ef4  add x8,x19,w8, SXTW  #0x2
7101c44ef8  mov w9,#0x2
7101c44efc  str w9,[x8, #0xe8]
7101c44f00  ldr w8,[x19, #0x520]
7101c44f04  cmp w8,#0x4
7101c44f08  b.ne 0x7101c44f78
7101c44f0c  mov w8,#0x1
7101c44f10  str w8,[x19, #0x53c]
7101c44f14  add x8,x19,#0x12c
7101c44f18  stp xzr,xzr,[x19, #0x8]
7101c44f1c  mov w20,wzr
7101c44f20  str xzr,[x8]
7101c44f24  add x8,x19,#0x124
7101c44f28  str xzr,[x8]
7101c44f2c  add x8,x19,#0x11c
7101c44f30  str xzr,[x8]
7101c44f34  add x8,x19,#0x114
7101c44f38  str xzr,[x8]
7101c44f3c  add x8,x19,#0x10c
7101c44f40  str xzr,[x8]
7101c44f44  add x8,x19,#0x104
7101c44f48  str xzr,[x8]
7101c44f4c  mov w8,#0xffffffff
7101c44f50  str x8,[x19, #0x138]
7101c44f54  str w8,[x19, #0x140]
7101c44f58  mov w8,#0xb
7101c44f5c  str w8,[x19, #0xe8]
7101c44f60  str wzr,[x19, #0x134]
7101c44f64  stur xzr,[x19, #0xfc]
7101c44f68  stur xzr,[x19, #0xf4]
7101c44f6c  stur xzr,[x19, #0xec]
7101c44f70  strb wzr,[x19, #0x144]
7101c44f74  b 0x7101c44f7c
7101c44f78  ldr w20,[x19, #0x134]
7101c44f7c  adrp x8,0x710532f000
7101c44f80  ldr x8,[x8, #0x8c0]
7101c44f84  ldr x0,[x8, #0x8]
7101c44f88  adrp x8,0x7104472000
7101c44f8c  ldr s0,[x8, #0xe0c]
7101c44f90  mov x1,#0xe4b1
7101c44f94  movk x1,#0x148e, LSL #16
7101c44f98  movk x1,#0x1f, LSL #32
7101c44f9c  bl 0x71033112b0
7101c44fa0  fcvtzs w8,s0
7101c44fa4  cmp w20,#0x11
7101c44fa8  str w8,[x19, #0x64c]
7101c44fac  b.gt 0x7101c44fd0
7101c44fb0  sxtw x8,w20
7101c44fb4  add x8,x8,#0x1
7101c44fb8  cmp w8,#0x13
7101c44fbc  str w8,[x19, #0x134]
7101c44fc0  b.cs 0x7101c44fe0
7101c44fc4  add x8,x19,x8, LSL #0x2
7101c44fc8  mov w9,#0x1
7101c44fcc  str w9,[x8, #0xe8]
7101c44fd0  ldp x29,x30,[sp, #0x20]
7101c44fd4  ldp x20,x19,[sp, #0x10]
7101c44fd8  ldr x21,[sp], #0x30
7101c44fdc  ret
7101c44fe0  bl 0x71039c2650
