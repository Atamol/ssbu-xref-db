// addr:      7101dd3c80
// offset:    0x1dd3c80
// name:      FUN_7101dd3c80
// mangled:   
// size:      1260

7101dd3c80  sub sp,sp,#0xc0
7101dd3c84  str d8,[sp, #0x60]
7101dd3c88  str x27,[sp, #0x68]
7101dd3c8c  stp x26,x25,[sp, #0x70]
7101dd3c90  stp x24,x23,[sp, #0x80]
7101dd3c94  stp x22,x21,[sp, #0x90]
7101dd3c98  stp x20,x19,[sp, #0xa0]
7101dd3c9c  stp x29,x30,[sp, #0xb0]
7101dd3ca0  add x29,sp,#0xb0
7101dd3ca4  and w8,w1,#0xffff
7101dd3ca8  cmp w8,#0xf
7101dd3cac  b.hi 0x7101dd4144
7101dd3cb0  add x25,x0,w1, UXTH  #0x3
7101dd3cb4  ldr x22,[x25, #0x10]!
7101dd3cb8  mov x19,x0
7101dd3cbc  cbz x22,0x7101dd4144
7101dd3cc0  ldp x9,x10,[x19, #0x90]
7101dd3cc4  ldrb w24,[x22, #0x28]
7101dd3cc8  sub x10,x10,x9
7101dd3ccc  and x8,x1,#0xffff
7101dd3cd0  asr x10,x10,#0x3
7101dd3cd4  cmp x10,x8
7101dd3cd8  b.ls 0x7101dd3d40
7101dd3cdc  adrp x26,0x710532f000
7101dd3ce0  ldr x21,[x9, x8, LSL #0x3]
7101dd3ce4  ldr x8,[x26, #0x730]
7101dd3ce8  mov x1,x21
7101dd3cec  ldr x8,[x8, #0x8]
7101dd3cf0  add x0,x8,#0x310
7101dd3cf4  bl 0x710327de70
7101dd3cf8  tst w0,#0xff
7101dd3cfc  b.eq 0x7101dd3d10
7101dd3d00  sub w9,w0,#0x1
7101dd3d04  and w8,w9,#0xff
7101dd3d08  cmp w8,#0xf
7101dd3d0c  b.ls 0x7101dd3f2c
7101dd3d10  mov w20,wzr
7101dd3d14  add x0,x22,#0x18
7101dd3d18  adrp x1,0x7104412000
7101dd3d1c  add x1,x1,#0xe16
7101dd3d20  mov w2,#0x1
7101dd3d24  mov w3,w20
7101dd3d28  bl 0x710377a280
7101dd3d2c  ldr x0,[x22, #0x10]
7101dd3d30  cbz w20,0x7101dd3e60
7101dd3d34  adrp x1,0x710438c000
7101dd3d38  add x1,x1,#0xf86
7101dd3d3c  b 0x7101dd3e68
7101dd3d40  ldr x9,[x19, #0x8]
7101dd3d44  ldr x8,[x9, #0x1b8]
7101dd3d48  cbz x8,0x7101dd3e2c
7101dd3d4c  add x9,x9,#0x1b8
7101dd3d50  mov x10,x9
7101dd3d54  mov x11,x8
7101dd3d58  ldr w12,[x11, #0x20]
7101dd3d5c  cmp w12,w24
7101dd3d60  cset w12,lt
7101dd3d64  csel x10,x10,x11,lt
7101dd3d68  ldr x11,[x11, w12, UXTW #0x3]
7101dd3d6c  cbnz x11,0x7101dd3d58
7101dd3d70  cmp x10,x9
7101dd3d74  b.eq 0x7101dd3dc4
7101dd3d78  ldr w11,[x10, #0x20]
7101dd3d7c  cmp w11,w24
7101dd3d80  b.gt 0x7101dd3dc4
7101dd3d84  ldr x20,[x10, #0x28]
7101dd3d88  cbz x20,0x7101dd3dc4
7101dd3d8c  ldr x8,[x20]
7101dd3d90  ldr x8,[x8, #0x1f8]
7101dd3d94  mov x0,x20
7101dd3d98  mov w1,wzr
7101dd3d9c  blr x8
7101dd3da0  ldr x8,[x20]
7101dd3da4  ldr x8,[x8, #0x388]
7101dd3da8  mov w1,#0x1
7101dd3dac  mov x0,x20
7101dd3db0  mov w2,wzr
7101dd3db4  blr x8
7101dd3db8  ldr x8,[x19, #0x8]
7101dd3dbc  add x9,x8,#0x1b8
7101dd3dc0  ldr x8,[x8, #0x1b8]
7101dd3dc4  cbz x8,0x7101dd3e2c
7101dd3dc8  mov x10,x9
7101dd3dcc  ldr w11,[x8, #0x20]
7101dd3dd0  cmp w11,w24
7101dd3dd4  cset w11,lt
7101dd3dd8  csel x10,x10,x8,lt
7101dd3ddc  ldr x8,[x8, w11, UXTW #0x3]
7101dd3de0  cbnz x8,0x7101dd3dcc
7101dd3de4  cmp x10,x9
7101dd3de8  b.eq 0x7101dd3e2c
7101dd3dec  ldr w8,[x10, #0x20]
7101dd3df0  cmp w8,w24
7101dd3df4  b.gt 0x7101dd3e2c
7101dd3df8  ldr x19,[x10, #0x28]
7101dd3dfc  cbz x19,0x7101dd3e2c
7101dd3e00  ldr x8,[x19]
7101dd3e04  ldr x8,[x8, #0x208]
7101dd3e08  mov x0,x19
7101dd3e0c  mov w1,wzr
7101dd3e10  blr x8
7101dd3e14  ldr x8,[x19]
7101dd3e18  ldr x8,[x8, #0x388]
7101dd3e1c  mov w1,#0x1
7101dd3e20  mov x0,x19
7101dd3e24  mov w2,wzr
7101dd3e28  blr x8
7101dd3e2c  ldr x0,[x25]
7101dd3e30  ldp x26,x25,[sp, #0x70]
7101dd3e34  ldr x8,[x0]
7101dd3e38  ldr d8,[sp, #0x60]
7101dd3e3c  ldr x27,[sp, #0x68]
7101dd3e40  ldp x29,x30,[sp, #0xb0]
7101dd3e44  mov w1,wzr
7101dd3e48  ldp x20,x19,[sp, #0xa0]
7101dd3e4c  ldr x2,[x8, #0x10]
7101dd3e50  ldp x22,x21,[sp, #0x90]
7101dd3e54  ldp x24,x23,[sp, #0x80]
7101dd3e58  add sp,sp,#0xc0
7101dd3e5c  br x2
7101dd3e60  adrp x1,0x7104422000
7101dd3e64  add x1,x1,#0x8f0
7101dd3e68  fmov s0,0x3f800000
7101dd3e6c  bl 0x7103778300
7101dd3e70  ldr x8,[x26, #0x730]
7101dd3e74  ldr x22,[x8, #0x8]
7101dd3e78  ldr x0,[x22, #0x318]
7101dd3e7c  ldr x27,[x25]
7101dd3e80  mov x1,x21
7101dd3e84  bl 0x710327d3b0
7101dd3e88  mov x9,#0x7990
7101dd3e8c  movk x9,#0x9711, LSL #16
7101dd3e90  and x8,x0,#0xffffffffff
7101dd3e94  movk x9,#0x6, LSL #32
7101dd3e98  orr w23,wzr,#0xfffffffe
7101dd3e9c  cmp x8,x9
7101dd3ea0  b.le 0x7101dd3ee8
7101dd3ea4  mov x9,#0x387c
7101dd3ea8  movk x9,#0x32ae, LSL #16
7101dd3eac  movk x9,#0xe, LSL #32
7101dd3eb0  cmp x8,x9
7101dd3eb4  b.gt 0x7101dd3f68
7101dd3eb8  mov x9,#0x7991
7101dd3ebc  movk x9,#0x9711, LSL #16
7101dd3ec0  movk x9,#0x6, LSL #32
7101dd3ec4  cmp x8,x9
7101dd3ec8  b.eq 0x7101dd3fcc
7101dd3ecc  mov x9,#0x3d9f
7101dd3ed0  movk x9,#0xaaec, LSL #16
7101dd3ed4  movk x9,#0xd, LSL #32
7101dd3ed8  cmp x8,x9
7101dd3edc  b.ne 0x7101dd3fe0
7101dd3ee0  mov w23,#0x1
7101dd3ee4  b 0x7101dd3fe0
7101dd3ee8  mov x9,#0x483a
7101dd3eec  movk x9,#0x8a9, LSL #16
7101dd3ef0  movk x9,#0x3, LSL #32
7101dd3ef4  cmp x8,x9
7101dd3ef8  b.eq 0x7101dd3fc4
7101dd3efc  mov x9,#0x5cc9
7101dd3f00  movk x9,#0x2eb5, LSL #16
7101dd3f04  movk x9,#0x3, LSL #32
7101dd3f08  cmp x8,x9
7101dd3f0c  b.eq 0x7101dd3fdc
7101dd3f10  mov x9,#0xf324
7101dd3f14  movk x9,#0xb7a5, LSL #16
7101dd3f18  movk x9,#0x5, LSL #32
7101dd3f1c  cmp x8,x9
7101dd3f20  b.ne 0x7101dd3fe0
7101dd3f24  mov w23,#0x4
7101dd3f28  b 0x7101dd3fe0
7101dd3f2c  adrp x8,0x7105314000
7101dd3f30  ldr x8,[x8, #0x510]
7101dd3f34  ldr x8,[x8]
7101dd3f38  ldr x8,[x8, #0xd8]
7101dd3f3c  ldr x8,[x8]
7101dd3f40  and w10,w0,#0xff
7101dd3f44  cmp w10,#0xe
7101dd3f48  b.cs 0x7101dd3f98
7101dd3f4c  and w10,w9,#0xff
7101dd3f50  cmp w10,#0xd
7101dd3f54  b.cs 0x7101dd4168
7101dd3f58  ldr x8,[x8]
7101dd3f5c  and x9,x9,#0xff
7101dd3f60  ldrb w20,[x8, x9, LSL ]
7101dd3f64  b 0x7101dd3d14
7101dd3f68  mov x9,#0x387d
7101dd3f6c  movk x9,#0x32ae, LSL #16
7101dd3f70  movk x9,#0xe, LSL #32
7101dd3f74  cmp x8,x9
7101dd3f78  b.eq 0x7101dd3fd4
7101dd3f7c  mov x9,#0x1611
7101dd3f80  movk x9,#0x6cb9, LSL #16
7101dd3f84  movk x9,#0x10, LSL #32
7101dd3f88  cmp x8,x9
7101dd3f8c  b.ne 0x7101dd3fe0
7101dd3f90  mov w23,#0x2
7101dd3f94  b 0x7101dd3fe0
7101dd3f98  sub w9,w0,#0xe
7101dd3f9c  mvn w10,w9
7101dd3fa0  tst w10,#0xff
7101dd3fa4  b.eq 0x7101dd3d10
7101dd3fa8  and w10,w9,#0xff
7101dd3fac  cmp w10,#0x3
7101dd3fb0  b.cs 0x7101dd4168
7101dd3fb4  ldr x8,[x8]
7101dd3fb8  add x8,x8,w9, UXTB  #0x1
7101dd3fbc  ldrh w20,[x8, #0xe]
7101dd3fc0  b 0x7101dd3d14
7101dd3fc4  orr w23,wzr,#0x3
7101dd3fc8  b 0x7101dd3fe0
7101dd3fcc  mov w23,#0xffffffff
7101dd3fd0  b 0x7101dd3fe0
7101dd3fd4  mov w23,wzr
7101dd3fd8  b 0x7101dd3fe0
7101dd3fdc  mov w23,#0x5
7101dd3fe0  ldr x0,[x22, #0x318]
7101dd3fe4  mov x1,x21
7101dd3fe8  bl 0x710327d0d0
7101dd3fec  mov x9,#0x9f9
7101dd3ff0  movk x9,#0xdb83, LSL #16
7101dd3ff4  and x8,x0,#0xffffffffff
7101dd3ff8  movk x9,#0x7, LSL #32
7101dd3ffc  adrp x1,0x710435b000
7101dd4000  add x1,x1,#0xc8f
7101dd4004  cmp x8,x9
7101dd4008  adrp x22,0x710425f000
7101dd400c  add x22,x22,#0x996
7101dd4010  b.ne 0x7101dd4030
7101dd4014  adrp x8,0x71042e7000
7101dd4018  add x8,x8,#0x6de
7101dd401c  cmp w23,#0x3
7101dd4020  csel x1,x8,x1,cc
7101dd4024  adrp x8,0x71042d6000
7101dd4028  add x8,x8,#0x7af
7101dd402c  csel x22,x8,x22,cc
7101dd4030  fmov s8,0x3f800000
7101dd4034  ldr x0,[x27, #0x10]
7101dd4038  mov v0.16B,v8.16B
7101dd403c  add x23,x27,#0x8
7101dd4040  bl 0x7103778300
7101dd4044  add x8,sp,#0x8
7101dd4048  mov x0,x23
7101dd404c  mov x1,x22
7101dd4050  bl 0x7103776640
7101dd4054  ldr x8,[x26, #0x730]
7101dd4058  ldr x8,[x8, #0x8]
7101dd405c  ldr x1,[x8, #0x318]
7101dd4060  add x0,sp,#0x18
7101dd4064  mov x2,x21
7101dd4068  add x22,sp,#0x18
7101dd406c  bl 0x710327cd40
7101dd4070  ldr x21,[sp, #0x10]
7101dd4074  mov v0.16B,v8.16B
7101dd4078  add x1,x22,#0x8
7101dd407c  mov x0,x21
7101dd4080  bl 0x7103778300
7101dd4084  adrp x8,0x710523d000
7101dd4088  add x8,x8,#0x988
7101dd408c  stp x8,xzr,[sp, #0x8]
7101dd4090  cbz x21,0x7101dd40b4
7101dd4094  ldr x0,[x21, #0x18]
7101dd4098  adrp x8,0x710523d000
7101dd409c  add x8,x8,#0x9a8
7101dd40a0  stp x8,xzr,[x21, #0x10]
7101dd40a4  cbz x0,0x7101dd40ac
7101dd40a8  bl 0x710392eb40
7101dd40ac  mov x0,x21
7101dd40b0  bl 0x710392eb40
7101dd40b4  ldr x0,[x25]
7101dd40b8  ldr x8,[x0]
7101dd40bc  ldr x8,[x8, #0x10]
7101dd40c0  mov w1,#0x1
7101dd40c4  blr x8
7101dd40c8  ldr x8,[x19, #0x8]
7101dd40cc  ldr x9,[x8, #0x1b8]
7101dd40d0  cbz x9,0x7101dd4144
7101dd40d4  add x10,x8,#0x1b8
7101dd40d8  mov x8,x10
7101dd40dc  ldr w11,[x9, #0x20]
7101dd40e0  cmp w11,w24
7101dd40e4  cset w11,lt
7101dd40e8  csel x8,x8,x9,lt
7101dd40ec  ldr x9,[x9, w11, UXTW #0x3]
7101dd40f0  cbnz x9,0x7101dd40dc
7101dd40f4  cmp x8,x10
7101dd40f8  b.eq 0x7101dd4144
7101dd40fc  ldr w9,[x8, #0x20]
7101dd4100  cmp w9,w24
7101dd4104  b.gt 0x7101dd4144
7101dd4108  ldr x19,[x8, #0x28]
7101dd410c  cbz x19,0x7101dd4144
7101dd4110  ldr x8,[x19]
7101dd4114  ldr x8,[x8, #0x208]
7101dd4118  cmp w20,#0x0
7101dd411c  cset w1,ne
7101dd4120  mov x0,x19
7101dd4124  cset w20,eq
7101dd4128  blr x8
7101dd412c  ldr x8,[x19]
7101dd4130  ldr x8,[x8, #0x388]
7101dd4134  mov x0,x19
7101dd4138  mov w1,w20
7101dd413c  mov w2,wzr
7101dd4140  blr x8
7101dd4144  ldr d8,[sp, #0x60]
7101dd4148  ldp x29,x30,[sp, #0xb0]
7101dd414c  ldp x20,x19,[sp, #0xa0]
7101dd4150  ldr x27,[sp, #0x68]
7101dd4154  ldp x22,x21,[sp, #0x90]
7101dd4158  ldp x24,x23,[sp, #0x80]
7101dd415c  ldp x26,x25,[sp, #0x70]
7101dd4160  add sp,sp,#0xc0
7101dd4164  ret
7101dd4168  bl 0x71039c2650
