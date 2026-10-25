// addr:      7101e71d10
// offset:    0x1e71d10
// name:      FUN_7101e71d10
// mangled:   
// size:      396

7101e71d10  str x19,[sp, #-0x20]!
7101e71d14  stp x29,x30,[sp, #0x10]
7101e71d18  add x29,sp,#0x10
7101e71d1c  ldr x19,[x0, #0x80]
7101e71d20  ldr x8,[x19, #0x1e8]
7101e71d24  ldr x0,[x8, #0x10]
7101e71d28  bl 0x7103399c10
7101e71d2c  ldr x8,[x19, #0x1e8]
7101e71d30  ldr x8,[x8, #0x10]
7101e71d34  ldrb w8,[x8, #0x90]
7101e71d38  cbnz w8,0x7101e71d54
7101e71d3c  ldrb w8,[x19, #0x1f1]
7101e71d40  cbz w8,0x7101e71d54
7101e71d44  ldrb w1,[x19, #0x1f2]
7101e71d48  add x0,x19,#0x1e8
7101e71d4c  strb wzr,[x19, #0x1f1]
7101e71d50  bl 0x7101e943a0
7101e71d54  ldr x8,[x19, #0x1c8]
7101e71d58  ldr x8,[x8, #0x40]
7101e71d5c  cbz x8,0x7101e71d7c
7101e71d60  ldr x8,[x8, #0x8]
7101e71d64  ldr x0,[x8, #0x8]
7101e71d68  cbz x0,0x7101e71d7c
7101e71d6c  ldr x8,[x0]
7101e71d70  ldr x8,[x8, #0x138]
7101e71d74  blr x8
7101e71d78  tbz w0,#0x0,0x7101e71db0
7101e71d7c  ldrb w8,[x19, #0x1d1]
7101e71d80  cbz w8,0x7101e71da0
7101e71d84  ldr x8,[x19, #0x1c8]
7101e71d88  ldr x0,[x8, #0x8]
7101e71d8c  fmov s0,0x3f800000
7101e71d90  adrp x1,0x71042f8000
7101e71d94  add x1,x1,#0xa23
7101e71d98  bl 0x7103778300
7101e71d9c  strb wzr,[x19, #0x1d1]
7101e71da0  ldr w8,[x19, #0x1d4]
7101e71da4  cbz w8,0x7101e71db0
7101e71da8  sub w8,w8,#0x1
7101e71dac  str w8,[x19, #0x1d4]
7101e71db0  ldrsw x8,[x19, #0x18c]
7101e71db4  cmp w8,#0x13
7101e71db8  b.cs 0x7101e71e98
7101e71dbc  add x8,x19,x8, LSL #0x2
7101e71dc0  ldr w8,[x8, #0x140]
7101e71dc4  ldr w9,[x19, #0x190]
7101e71dc8  cmp w9,w8
7101e71dcc  b.eq 0x7101e71e1c
7101e71dd0  cmp w8,#0x11
7101e71dd4  str w9,[x19, #0x198]
7101e71dd8  str w8,[x19, #0x190]
7101e71ddc  b.cs 0x7101e71e98
7101e71de0  sxtw x8,w8
7101e71de4  add x8,x19,x8, LSL #0x4
7101e71de8  ldp x9,x8,[x8, #0x30]
7101e71dec  stp x9,x8,[x19, #0x10]
7101e71df0  ldp x8,x10,[x19, #0x20]
7101e71df4  and x9,x10,#0x1
7101e71df8  orr x11,x9,x8
7101e71dfc  cbz x11,0x7101e71e18
7101e71e00  ldr x11,[x19, #0x8]
7101e71e04  add x0,x11,x10, ASR #0x1
7101e71e08  cbz x9,0x7101e71e14
7101e71e0c  ldr x9,[x0]
7101e71e10  ldr x8,[x9, x8, LSL #0x0]
7101e71e14  blr x8
7101e71e18  str wzr,[x19, #0x194]
7101e71e1c  ldrb w8,[x19, #0x19c]
7101e71e20  cbz w8,0x7101e71e54
7101e71e24  ldp x8,x10,[x19, #0x20]
7101e71e28  and x9,x10,#0x1
7101e71e2c  orr x11,x9,x8
7101e71e30  cbz x11,0x7101e71e4c
7101e71e34  ldr x11,[x19, #0x8]
7101e71e38  add x0,x11,x10, ASR #0x1
7101e71e3c  cbz x9,0x7101e71e48
7101e71e40  ldr x9,[x0]
7101e71e44  ldr x8,[x9, x8, LSL #0x0]
7101e71e48  blr x8
7101e71e4c  str wzr,[x19, #0x194]
7101e71e50  strb wzr,[x19, #0x19c]
7101e71e54  ldr x9,[x19, #0x8]
7101e71e58  cbz x9,0x7101e71e80
7101e71e5c  ldp x8,x11,[x19, #0x10]
7101e71e60  and x10,x11,#0x1
7101e71e64  orr x12,x10,x8
7101e71e68  cbz x12,0x7101e71e80
7101e71e6c  add x0,x9,x11, ASR #0x1
7101e71e70  cbz x10,0x7101e71e7c
7101e71e74  ldr x9,[x0]
7101e71e78  ldr x8,[x9, x8, LSL #0x0]
7101e71e7c  blr x8
7101e71e80  ldr w8,[x19, #0x194]
7101e71e84  add w8,w8,#0x1
7101e71e88  str w8,[x19, #0x194]
7101e71e8c  ldp x29,x30,[sp, #0x10]
7101e71e90  ldr x19,[sp], #0x20
7101e71e94  ret
7101e71e98  bl 0x71039c2650
