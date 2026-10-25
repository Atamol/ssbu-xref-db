// addr:      7101a38d80
// offset:    0x1a38d80
// name:      FUN_7101a38d80
// mangled:   
// size:      580

7101a38d80  stp x22,x21,[sp, #-0x30]!
7101a38d84  stp x20,x19,[sp, #0x10]
7101a38d88  stp x29,x30,[sp, #0x20]
7101a38d8c  add x29,sp,#0x20
7101a38d90  mov x20,x0
7101a38d94  ldr x0,[x1, #0x8]
7101a38d98  ldr x10,[x0, #0x258]
7101a38d9c  ldr x9,[x0, #0x250]
7101a38da0  sub x10,x10,x9
7101a38da4  mov x22,#0xbf7f
7101a38da8  movk x22,#0xefdf, LSL #16
7101a38dac  movk x22,#0xfbf7, LSL #32
7101a38db0  movk x22,#0x7efd, LSL #48
7101a38db4  add x8,x0,#0x250
7101a38db8  asr x10,x10,#0x3
7101a38dbc  mul x10,x10,x22
7101a38dc0  sxtw x21,w2
7101a38dc4  cmp x10,x21
7101a38dc8  b.ls 0x7101a38fac
7101a38dcc  orr w11,wzr,#0x3f8
7101a38dd0  madd x11,x21,x11,x9
7101a38dd4  ldrh w11,[x11, #0x2e]
7101a38dd8  mov x19,x1
7101a38ddc  cbnz w11,0x7101a38e78
7101a38de0  ldrb w8,[x20, #0x129]
7101a38de4  cmp w8,#0xb
7101a38de8  b.hi 0x7101a38e0c
7101a38dec  adrp x9,0x71044f7000
7101a38df0  add x9,x9,#0x6f0
7101a38df4  mov w1,#0xa
7101a38df8  ldrsw x8,[x9, x8, LSL #0x2]
7101a38dfc  add x8,x8,x9
7101a38e00  br x8
7101a38e04  orr w1,wzr,#0x1e
7101a38e08  b 0x7101a38e58
7101a38e0c  mov w1,#0x96
7101a38e10  b 0x7101a38e58
7101a38e14  mov w1,#0x3e7
7101a38e18  b 0x7101a38e58
7101a38e1c  mov w1,#0x50
7101a38e20  b 0x7101a38e58
7101a38e24  mov w1,#0x1f4
7101a38e28  b 0x7101a38e58
7101a38e2c  mov w1,#0x32
7101a38e30  b 0x7101a38e58
7101a38e34  mov w1,#0xfa
7101a38e38  b 0x7101a38e58
7101a38e3c  mov w1,#0x64
7101a38e40  b 0x7101a38e58
7101a38e44  mov w1,#0xc8
7101a38e48  b 0x7101a38e58
7101a38e4c  mov w1,#0x12c
7101a38e50  b 0x7101a38e58
7101a38e54  mov w1,#0x2ee
7101a38e58  bl 0x7101a489d0
7101a38e5c  ldr x9,[x19, #0x8]
7101a38e60  add x8,x9,#0x250
7101a38e64  ldr x10,[x9, #0x258]
7101a38e68  ldr x9,[x9, #0x250]
7101a38e6c  sub x10,x10,x9
7101a38e70  asr x10,x10,#0x3
7101a38e74  mul x10,x10,x22
7101a38e78  cmp x10,x21
7101a38e7c  b.ls 0x7101a38fac
7101a38e80  orr w8,wzr,#0x3f8
7101a38e84  madd x8,x21,x8,x9
7101a38e88  ldr w8,[x8, #0x10]
7101a38e8c  cmp w8,#0x1
7101a38e90  b.ne 0x7101a38f9c
7101a38e94  orr w8,wzr,#0x3f8
7101a38e98  madd x8,x21,x8,x9
7101a38e9c  ldrb w8,[x8, #0x29]
7101a38ea0  cbnz w8,0x7101a38f9c
7101a38ea4  ldrb w8,[x20, #0x12a]
7101a38ea8  cmp w8,#0x9
7101a38eac  mov w9,#0x2
7101a38eb0  csel w8,w8,w9,ne
7101a38eb4  b.ne 0x7101a38efc
7101a38eb8  adrp x8,0x7105239000
7101a38ebc  add x8,x8,#0x1c0
7101a38ec0  ldp w9,w10,[x8]
7101a38ec4  str w10,[x8]
7101a38ec8  ldp w10,w11,[x8, #0x8]
7101a38ecc  eor w9,w9,w9, LSL #0xb
7101a38ed0  eor w9,w9,w9, LSR #0x8
7101a38ed4  eor w9,w9,w11
7101a38ed8  eor w9,w9,w11, LSR #0x13
7101a38edc  stp w10,w11,[x8, #0x4]
7101a38ee0  str w9,[x8, #0xc]
7101a38ee4  mov w8,#0x8e39
7101a38ee8  movk w8,#0x38e3, LSL #16
7101a38eec  umull x8,w9,w8
7101a38ef0  lsr x8,x8,#0x21
7101a38ef4  add w8,w8,w8, LSL #0x3
7101a38ef8  sub w8,w9,w8
7101a38efc  and w8,w8,#0xff
7101a38f00  cmp w8,#0x9
7101a38f04  orr w9,wzr,#0x3
7101a38f08  csinc w3,w9,w8,cs
7101a38f0c  ldr x8,[x19, #0x8]
7101a38f10  ldr x10,[x8, #0x258]
7101a38f14  ldr x9,[x8, #0x250]
7101a38f18  sub x10,x10,x9
7101a38f1c  asr x10,x10,#0x3
7101a38f20  mul x10,x10,x22
7101a38f24  cmp x10,x21
7101a38f28  b.ls 0x7101a38fb4
7101a38f2c  orr w10,wzr,#0x3f8
7101a38f30  madd x9,x21,x10,x9
7101a38f34  strb w3,[x9, #0x29]
7101a38f38  ldr x10,[x8, #0x3b8]
7101a38f3c  ldr x9,[x8, #0x3b0]
7101a38f40  sub x10,x10,x9
7101a38f44  asr x10,x10,#0x4
7101a38f48  cmp x10,x21
7101a38f4c  b.ls 0x7101a38fbc
7101a38f50  add x8,x9,x21, LSL #0x4
7101a38f54  ldr x19,[x8, #0x8]
7101a38f58  ldr w8,[x19, #0xd8]
7101a38f5c  cmp w8,#0x1
7101a38f60  str w3,[x19, #0xfc]
7101a38f64  b.ne 0x7101a38f9c
7101a38f68  add x0,x19,#0x78
7101a38f6c  adrp x1,0x71042b3000
7101a38f70  add x1,x1,#0xd87
7101a38f74  mov w2,#0x1
7101a38f78  bl 0x710377a280
7101a38f7c  add x0,x19,#0x58
7101a38f80  ldr w2,[x19, #0xfc]
7101a38f84  adrp x1,0x710439d000
7101a38f88  add x1,x1,#0xc8e
7101a38f8c  ldp x29,x30,[sp, #0x20]
7101a38f90  ldp x20,x19,[sp, #0x10]
7101a38f94  ldp x22,x21,[sp], #0x30
7101a38f98  b 0x7103778430
7101a38f9c  ldp x29,x30,[sp, #0x20]
7101a38fa0  ldp x20,x19,[sp, #0x10]
7101a38fa4  ldp x22,x21,[sp], #0x30
7101a38fa8  ret
7101a38fac  mov x0,x8
7101a38fb0  bl 0x71039c1330
7101a38fb4  add x0,x8,#0x250
7101a38fb8  bl 0x71039c1330
7101a38fbc  add x0,x8,#0x3b0
7101a38fc0  bl 0x71039c1330
