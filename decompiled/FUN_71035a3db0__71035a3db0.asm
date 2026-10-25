// addr:      71035a3db0
// offset:    0x35a3db0
// name:      FUN_71035a3db0
// mangled:   
// size:      1080

71035a3db0  sub sp,sp,#0x60
71035a3db4  stp x22,x21,[sp, #0x30]
71035a3db8  stp x20,x19,[sp, #0x40]
71035a3dbc  stp x29,x30,[sp, #0x50]
71035a3dc0  add x29,sp,#0x50
71035a3dc4  ldr w8,[x0, #0x8]
71035a3dc8  mov x19,x0
71035a3dcc  cmn w8,#0x1
71035a3dd0  b.eq 0x71035a3ea0
71035a3dd4  ldr x22,[x19, #0x28]
71035a3dd8  stp xzr,xzr,[sp, #0x8]
71035a3ddc  str xzr,[sp]
71035a3de0  adds x20,x22,#0xb0
71035a3de4  b.eq 0x71035a3edc
71035a3de8  tbnz x20,#0x3f,0x71035a41b0
71035a3dec  mov w0,#0x10
71035a3df0  mov x1,x20
71035a3df4  bl 0x710392e290
71035a3df8  mov x21,x0
71035a3dfc  cbnz x0,0x71035a3e44
71035a3e00  adrp x8,0x7105332000
71035a3e04  ldr x0,[x8, #0xf00]
71035a3e08  cbz x0,0x71035a3e40
71035a3e0c  stur wzr,[x29, #-0x24]
71035a3e10  str x20,[sp, #0x20]
71035a3e14  ldr x8,[x0]
71035a3e18  ldr x8,[x8, #0x30]
71035a3e1c  sub x1,x29,#0x24
71035a3e20  add x2,sp,#0x20
71035a3e24  blr x8
71035a3e28  tbz w0,#0x0,0x71035a3e40
71035a3e2c  mov w0,#0x10
71035a3e30  mov x1,x20
71035a3e34  bl 0x710392e290
71035a3e38  mov x21,x0
71035a3e3c  cbnz x0,0x71035a3e44
71035a3e40  mov x21,xzr
71035a3e44  add x9,x21,x20
71035a3e48  mov x8,x21
71035a3e4c  str x9,[sp, #0x10]
71035a3e50  stp x21,x21,[sp]
71035a3e54  tbz w20,#0x0,0x71035a3e68
71035a3e58  mov x8,x21
71035a3e5c  add x20,x22,#0xaf
71035a3e60  strb wzr,[x8], #0x1
71035a3e64  str x8,[sp, #0x8]
71035a3e68  cmn x22,#0xaf
71035a3e6c  b.eq 0x71035a3ee0
71035a3e70  strb wzr,[x8]
71035a3e74  ldr x8,[sp, #0x8]
71035a3e78  add x9,x8,#0x1
71035a3e7c  str x9,[sp, #0x8]
71035a3e80  strb wzr,[x8, #0x1]
71035a3e84  ldr x8,[sp, #0x8]
71035a3e88  add x8,x8,#0x1
71035a3e8c  subs x20,x20,#0x2
71035a3e90  str x8,[sp, #0x8]
71035a3e94  b.ne 0x71035a3e70
71035a3e98  ldr x21,[sp]
71035a3e9c  b 0x71035a3ee0
71035a3ea0  adrp x8,0x7105338000
71035a3ea4  ldr x9,[x8, #0xf68]
71035a3ea8  ldr w8,[x19, #0x38]
71035a3eac  tbnz w8,#0x1f,0x71035a4044
71035a3eb0  ldr w10,[x9, #0x38]
71035a3eb4  ldr x9,[x9, #0x28]
71035a3eb8  cmp w10,w8
71035a3ebc  b.ls 0x71035a3ecc
71035a3ec0  add x8,x9,x8, LSL #0x8
71035a3ec4  ldrb w10,[x8, #0xf8]
71035a3ec8  cbnz w10,0x71035a4068
71035a3ecc  mov x8,x9
71035a3ed0  ldr x9,[x8, #0x40]
71035a3ed4  cbnz x9,0x71035a4070
71035a3ed8  b 0x71035a40e4
71035a3edc  mov x21,xzr
71035a3ee0  ldr x8,[x19, #0x30]
71035a3ee4  ldr x0,[x8]
71035a3ee8  adrp x8,0x7105940000
71035a3eec  ldr x8,[x8, #0xd28]
71035a3ef0  blr x8
71035a3ef4  ldr x8,[x19, #0x30]
71035a3ef8  ldr x2,[x8, #0x130]
71035a3efc  mov x1,x0
71035a3f00  mov x0,x21
71035a3f04  bl 0x71039c00e0
71035a3f08  ldr x8,[x19, #0x28]
71035a3f0c  add x9,x21,x8
71035a3f10  str w8,[x9]
71035a3f14  str wzr,[x9, #0x3c]
71035a3f18  stur xzr,[x9, #0x34]
71035a3f1c  stur xzr,[x9, #0x2c]
71035a3f20  stur xzr,[x9, #0x24]
71035a3f24  stur xzr,[x9, #0x1c]
71035a3f28  stur xzr,[x9, #0x14]
71035a3f2c  adrp x10,0x71043ac000
71035a3f30  add x10,x10,#0x1ec
71035a3f34  stur xzr,[x9, #0xc]
71035a3f38  stur xzr,[x9, #0x4]
71035a3f3c  ldr x8,[x19, #0x28]
71035a3f40  ldr x9,[sp]
71035a3f44  add x8,x9,x8
71035a3f48  mov w9,#0x5820
71035a3f4c  movk w9,#0x5445, LSL #16
71035a3f50  add w9,w9,#0x90, LSL #12
71035a3f54  str w9,[x8, #0x40]
71035a3f58  ldp x9,x11,[x10]
71035a3f5c  ldur x10,[x10, #0xd]
71035a3f60  stur x10,[x8, #0x51]
71035a3f64  stur x11,[x8, #0x4c]
71035a3f68  stur x9,[x8, #0x44]
71035a3f6c  ldr w9,[x19, #0x10]
71035a3f70  str w9,[x8, #0x84]
71035a3f74  ldr w9,[x19, #0x14]
71035a3f78  mov w10,#0x1
71035a3f7c  stp w9,w10,[x8, #0x88]
71035a3f80  ldr w9,[x19, #0x20]
71035a3f84  str w9,[x8, #0x90]
71035a3f88  mov x9,#0x2
71035a3f8c  movk x9,#0x1, LSL #32
71035a3f90  stur x9,[x8, #0x94]
71035a3f94  orr x9,xzr,#0x100000000
71035a3f98  stur x9,[x8, #0x9c]
71035a3f9c  ldr x9,[x19, #0x28]
71035a3fa0  str w9,[x8, #0xa4]
71035a3fa4  ldr x8,[x19, #0x28]
71035a3fa8  ldr x9,[sp]
71035a3fac  add x8,x9,x8
71035a3fb0  mov x9,#0x5820
71035a3fb4  movk x9,#0x5445, LSL #16
71035a3fb8  movk x9,#0x2, LSL #32
71035a3fbc  str x9,[x8, #0xa8]
71035a3fc0  ldr x20,[x19, #0x40]
71035a3fc4  cbz x20,0x71035a41ac
71035a3fc8  add x19,x20,#0x18
71035a3fcc  mov x0,x19
71035a3fd0  bl 0x71039c19c0
71035a3fd4  ldrb w8,[x20, #0x40]
71035a3fd8  tbnz w8,#0x0,0x71035a41ac
71035a3fdc  str xzr,[sp, #0x20]
71035a3fe0  ldr x21,[x20, #0x10]
71035a3fe4  add x0,sp,#0x20
71035a3fe8  bl 0x71039c6930
71035a3fec  cbnz x21,0x71035a41ac
71035a3ff0  ldr x8,[sp]
71035a3ff4  str x8,[x20, #0x48]
71035a3ff8  ldr x8,[sp, #0x8]
71035a3ffc  str x8,[x20, #0x50]
71035a4000  ldr x8,[sp, #0x10]
71035a4004  str x8,[x20, #0x58]
71035a4008  stp xzr,xzr,[sp, #0x8]
71035a400c  str xzr,[sp]
71035a4010  ldr w8,[x20, #0x40]
71035a4014  mov w9,#0x5
71035a4018  orr w8,w8,w9
71035a401c  add x0,x20,#0x38
71035a4020  str w8,[x20, #0x40]
71035a4024  bl 0x71039c6d60
71035a4028  mov x0,x19
71035a402c  bl 0x71039c19d0
71035a4030  ldr x0,[sp]
71035a4034  cbz x0,0x71035a40e4
71035a4038  str x0,[sp, #0x8]
71035a403c  bl 0x710392eb40
71035a4040  b 0x71035a40e4
71035a4044  ldp x10,x11,[x9, #0x58]
71035a4048  sub x11,x11,x10
71035a404c  asr x11,x11,#0x3
71035a4050  and w8,w8,#0x7fffffff
71035a4054  cmp x11,x8
71035a4058  b.ls 0x71035a4064
71035a405c  ldr x8,[x10, x8, LSL #0x3]
71035a4060  cbnz x8,0x71035a4068
71035a4064  ldr x8,[x9, #0x28]
71035a4068  ldr x9,[x8, #0x40]
71035a406c  cbz x9,0x71035a40e4
71035a4070  ldr x9,[x9]
71035a4074  ldr x10,[x8, #0x48]
71035a4078  cmp x9,x10
71035a407c  b.ne 0x71035a40e4
71035a4080  ldr x0,[x8, #0x38]
71035a4084  ldr x8,[x0]
71035a4088  ldr x9,[x8, #0x20]
71035a408c  ldr x22,[x19, #0x30]
71035a4090  mov x8,sp
71035a4094  blr x9
71035a4098  ldr x8,[sp, #0x8]
71035a409c  ldr x19,[x8, #0x1c0]
71035a40a0  adrp x8,0x7105940000
71035a40a4  ldr x0,[x22]
71035a40a8  ldr x8,[x8, #0xd30]
71035a40ac  blr x8
71035a40b0  adrp x8,0x7105335000
71035a40b4  add x8,x8,#0xe18
71035a40b8  ldarb w8,[x8]
71035a40bc  mov x20,x0
71035a40c0  tbz w8,#0x0,0x71035a40f8
71035a40c4  ldr w4,[x22, #0x118]
71035a40c8  ldr w5,[x22, #0x11c]
71035a40cc  mov x0,sp
71035a40d0  mov w6,#0x1
71035a40d4  mov x1,x19
71035a40d8  mov x2,x20
71035a40dc  mov w3,wzr
71035a40e0  bl 0x71037feb60
71035a40e4  ldp x29,x30,[sp, #0x50]
71035a40e8  ldp x20,x19,[sp, #0x40]
71035a40ec  ldp x22,x21,[sp, #0x30]
71035a40f0  add sp,sp,#0x60
71035a40f4  ret
71035a40f8  adrp x0,0x7105335000
71035a40fc  add x0,x0,#0xe18
71035a4100  bl 0x71039c06b0
71035a4104  cbz w0,0x71035a40c4
71035a4108  adrp x21,0x7105335000
71035a410c  add x21,x21,#0xb90
71035a4110  mov x0,x21
71035a4114  bl 0x71037c3a70
71035a4118  adrp x8,0x7105265000
71035a411c  add x8,x8,#0xb08
71035a4120  stur xzr,[x21, #0x35]
71035a4124  stp xzr,xzr,[x21, #0x28]
71035a4128  str x8,[x21]
71035a412c  stp xzr,xzr,[x21, #0x18]
71035a4130  add x0,x21,#0x40
71035a4134  bl 0x71039c2710
71035a4138  adrp x8,0x7105265000
71035a413c  add x8,x8,#0xb48
71035a4140  adrp x0,0x71037fb000
71035a4144  add x0,x0,#0x320
71035a4148  str x8,[x21]
71035a414c  add x8,x8,#0x50
71035a4150  stp x8,xzr,[x21, #0x60]
71035a4154  mov w8,#0x1
71035a4158  stp xzr,xzr,[x21, #0xa0]
71035a415c  adrp x2,0x7104f17000
71035a4160  add x2,x2,#0x0
71035a4164  strh w8,[x21, #0xa0]
71035a4168  mov w8,#0x20000
71035a416c  mov x1,x21
71035a4170  stp xzr,xzr,[x21, #0xb0]
71035a4174  strb wzr,[x21, #0xa2]
71035a4178  str x8,[x21, #0xc0]
71035a417c  stp xzr,xzr,[x21, #0x90]
71035a4180  stp xzr,xzr,[x21, #0x80]
71035a4184  stp xzr,xzr,[x21, #0x70]
71035a4188  stp xzr,xzr,[x21, #0xf8]
71035a418c  stp xzr,xzr,[x21, #0xe8]
71035a4190  stp xzr,xzr,[x21, #0xd8]
71035a4194  stp xzr,xzr,[x21, #0xc8]
71035a4198  bl 0x71000001c0
71035a419c  adrp x0,0x7105335000
71035a41a0  add x0,x0,#0xe18
71035a41a4  bl 0x71039c06c0
71035a41a8  b 0x71035a40c4
71035a41ac  bl 0x71039c2650
71035a41b0  mov x0,sp
71035a41b4  bl 0x71039c0c00
71035a41b8  mov x19,x0
71035a41bc  add x0,x21,#0x18
71035a41c0  bl 0x71037fb210
71035a41c4  adrp x8,0x7105241000
71035a41c8  add x8,x8,#0xa68
71035a41cc  str x8,[x21]
71035a41d0  bl 0x71037c3c30
71035a41d4  ldr x1,[x21, #0x8]
71035a41d8  bl 0x71037c4080
71035a41dc  mov x0,x19
71035a41e0  bl 0x71039c19f0
71035a41e4  bl 0x71037b2bc0
