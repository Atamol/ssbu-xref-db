// addr:      7101da3b00
// offset:    0x1da3b00
// name:      FUN_7101da3b00
// mangled:   
// size:      2212

7101da3b00  sub sp,sp,#0x140
7101da3b04  str d8,[sp, #0xe0]
7101da3b08  str x28,[sp, #0xe8]
7101da3b0c  stp x26,x25,[sp, #0xf0]
7101da3b10  stp x24,x23,[sp, #0x100]
7101da3b14  stp x22,x21,[sp, #0x110]
7101da3b18  stp x20,x19,[sp, #0x120]
7101da3b1c  stp x29,x30,[sp, #0x130]
7101da3b20  add x29,sp,#0x130
7101da3b24  ldr w8,[x0, #0x774]
7101da3b28  mov x19,x0
7101da3b2c  cbz w8,0x7101da3d6c
7101da3b30  ldrb w8,[x19, #0x44e]
7101da3b34  cbz w8,0x7101da3e10
7101da3b38  add x21,x19,#0x50
7101da3b3c  adrp x1,0x710438d000
7101da3b40  add x1,x1,#0x7
7101da3b44  sub x8,x29,#0x60
7101da3b48  mov x0,x21
7101da3b4c  bl 0x7103776640
7101da3b50  ldur x20,[x29, #-0x58]
7101da3b54  ldr x22,[x20, #0x8]
7101da3b58  cbz x22,0x7101da3bac
7101da3b5c  adrp x1,0x710436c000
7101da3b60  add x1,x1,#0x90a
7101da3b64  mov x0,x22
7101da3b68  bl 0x71037964b0
7101da3b6c  cbz x0,0x7101da3b88
7101da3b70  ldr x8,[x0]
7101da3b74  ldr x8,[x8, #0x138]
7101da3b78  blr x8
7101da3b7c  tbz w0,#0x0,0x7101da3d38
7101da3b80  ldr x22,[x20, #0x8]
7101da3b84  cbz x22,0x7101da3bac
7101da3b88  adrp x1,0x710436c000
7101da3b8c  add x1,x1,#0x90a
7101da3b90  mov x0,x22
7101da3b94  bl 0x71037964b0
7101da3b98  cbz x0,0x7101da3bac
7101da3b9c  ldr x8,[x0]
7101da3ba0  ldr x8,[x8, #0x1a0]
7101da3ba4  fmov s0,wzr
7101da3ba8  blr x8
7101da3bac  adrp x1,0x7104433000
7101da3bb0  add x1,x1,#0x603
7101da3bb4  sub x8,x29,#0x70
7101da3bb8  mov x0,x21
7101da3bbc  bl 0x7103776640
7101da3bc0  ldr w8,[x19, #0xb0]
7101da3bc4  cbz w8,0x7101da3c5c
7101da3bc8  fmov s8,wzr
7101da3bcc  mov w21,wzr
7101da3bd0  adrp x22,0x7104270000
7101da3bd4  add x22,x22,#0x51a
7101da3bd8  adrp x25,0x710523d000
7101da3bdc  add x25,x25,#0x988
7101da3be0  adrp x26,0x710523d000
7101da3be4  add x26,x26,#0x9a8
7101da3be8  adrp x23,0x710436c000
7101da3bec  add x23,x23,#0x90a
7101da3bf0  add x8,sp,#0x48
7101da3bf4  sub x0,x29,#0x70
7101da3bf8  mov x1,x22
7101da3bfc  mov w2,w21
7101da3c00  bl 0x7103776640
7101da3c04  ldr x24,[sp, #0x50]
7101da3c08  ldr x0,[x24, #0x8]
7101da3c0c  cbz x0,0x7101da3c2c
7101da3c10  mov x1,x23
7101da3c14  bl 0x71037964b0
7101da3c18  cbz x0,0x7101da3c2c
7101da3c1c  ldr x8,[x0]
7101da3c20  ldr x8,[x8, #0x1a0]
7101da3c24  mov v0.16B,v8.16B
7101da3c28  blr x8
7101da3c2c  stp x25,xzr,[sp, #0x48]
7101da3c30  cbz x24,0x7101da3c4c
7101da3c34  ldr x0,[x24, #0x18]
7101da3c38  stp x26,xzr,[x24, #0x10]
7101da3c3c  cbz x0,0x7101da3c44
7101da3c40  bl 0x710392eb40
7101da3c44  mov x0,x24
7101da3c48  bl 0x710392eb40
7101da3c4c  ldr w8,[x19, #0xb0]
7101da3c50  add w21,w21,#0x1
7101da3c54  cmp w21,w8
7101da3c58  b.cc 0x7101da3bf0
7101da3c5c  adrp x8,0x71050c0000
7101da3c60  add x8,x8,#0xb38
7101da3c64  mov x21,#-0x1
7101da3c68  orr w22,wzr,#0xffff
7101da3c6c  stp x8,x21,[x29, #-0x90]
7101da3c70  sturh wzr,[x29, #-0x7c]
7101da3c74  stur wzr,[x29, #-0x80]
7101da3c78  stur w22,[x29, #-0x7a]
7101da3c7c  sturb wzr,[x29, #-0x76]
7101da3c80  ldr w8,[x19, #0xe0]
7101da3c84  cmp w8,#0x4
7101da3c88  b.cs 0x7101da43a0
7101da3c8c  mov w9,#0x54
7101da3c90  madd x8,x8,x9,x19
7101da3c94  add x1,x8,#0x268
7101da3c98  sub x0,x29,#0x90
7101da3c9c  bl 0x7102529a70
7101da3ca0  mov w8,#0xffffffff
7101da3ca4  add x1,sp,#0x48
7101da3ca8  mov x0,x19
7101da3cac  strh w22,[sp, #0x50]
7101da3cb0  str x21,[sp, #0x48]
7101da3cb4  stur xzr,[sp, #0x54]
7101da3cb8  strh wzr,[sp, #0x5c]
7101da3cbc  str w8,[sp, #0x8c]
7101da3cc0  strb wzr,[sp, #0x90]
7101da3cc4  str wzr,[sp, #0x94]
7101da3cc8  strb wzr,[sp, #0x98]
7101da3ccc  stur x21,[sp, #0x4a]
7101da3cd0  bl 0x7101da9670
7101da3cd4  ldr w1,[x19, #0xe0]
7101da3cd8  add x2,sp,#0x48
7101da3cdc  mov x0,x19
7101da3ce0  mov w3,wzr
7101da3ce4  bl 0x7101da9e30
7101da3ce8  strb wzr,[x19, #0x44e]
7101da3cec  adrp x8,0x710593b000
7101da3cf0  ldr x8,[x8, #0x988]
7101da3cf4  ldr x8,[x8, #0x8]
7101da3cf8  ldr w9,[x8]
7101da3cfc  and w9,w9,#0xfffffffd
7101da3d00  str w9,[x8]
7101da3d04  ldur x19,[x29, #-0x68]
7101da3d08  adrp x8,0x710523d000
7101da3d0c  add x8,x8,#0x988
7101da3d10  stp x8,xzr,[x29, #-0x70]
7101da3d14  cbz x19,0x7101da3d38
7101da3d18  ldr x0,[x19, #0x18]
7101da3d1c  adrp x8,0x710523d000
7101da3d20  add x8,x8,#0x9a8
7101da3d24  stp x8,xzr,[x19, #0x10]
7101da3d28  cbz x0,0x7101da3d30
7101da3d2c  bl 0x710392eb40
7101da3d30  mov x0,x19
7101da3d34  bl 0x710392eb40
7101da3d38  adrp x8,0x710523d000
7101da3d3c  add x8,x8,#0x988
7101da3d40  stp x8,xzr,[x29, #-0x60]
7101da3d44  cbz x20,0x7101da437c
7101da3d48  ldr x0,[x20, #0x18]
7101da3d4c  adrp x8,0x710523d000
7101da3d50  add x8,x8,#0x9a8
7101da3d54  stp x8,xzr,[x20, #0x10]
7101da3d58  cbz x0,0x7101da3d60
7101da3d5c  bl 0x710392eb40
7101da3d60  mov x0,x20
7101da3d64  bl 0x710392eb40
7101da3d68  b 0x7101da437c
7101da3d6c  mov x0,x19
7101da3d70  bl 0x7101da5650
7101da3d74  mov x20,x19
7101da3d78  ldr x0,[x20, #0x70]!
7101da3d7c  ldr x8,[x0]
7101da3d80  ldr x8,[x8, #0x70]
7101da3d84  mov w1,#0x1
7101da3d88  blr x8
7101da3d8c  ldr x0,[x20, #0x10]
7101da3d90  ldr x8,[x0]
7101da3d94  ldr x8,[x8, #0x70]
7101da3d98  mov w1,wzr
7101da3d9c  blr x8
7101da3da0  ldr x0,[x20, #0x8]
7101da3da4  ldr x8,[x0]
7101da3da8  ldr x8,[x8, #0x70]
7101da3dac  mov w1,wzr
7101da3db0  blr x8
7101da3db4  ldr x0,[x20, #0x18]
7101da3db8  ldr x8,[x0]
7101da3dbc  ldr x8,[x8, #0x70]
7101da3dc0  mov w1,wzr
7101da3dc4  blr x8
7101da3dc8  ldur x8,[x20, #-0x68]
7101da3dcc  ldr x22,[x8, #0x80]
7101da3dd0  mov w8,#0x2268
7101da3dd4  ldr x0,[x22, #0x2268]
7101da3dd8  add x21,x22,x8
7101da3ddc  ldr x8,[x0]
7101da3de0  ldr x8,[x8, #0x70]
7101da3de4  mov w1,wzr
7101da3de8  blr x8
7101da3dec  mov w8,#0x11b4
7101da3df0  ldrb w8,[x22, x8, LSL ]
7101da3df4  cbz w8,0x7101da3ea0
7101da3df8  ldr x0,[x21]
7101da3dfc  ldr w8,[x0, #0x254]
7101da3e00  cmp w8,#0x3
7101da3e04  b.ne 0x7101da3eb0
7101da3e08  bl 0x710376b960
7101da3e0c  b 0x7101da3eb0
7101da3e10  mov x0,x19
7101da3e14  bl 0x7101da5740
7101da3e18  mov x20,x19
7101da3e1c  ldr x9,[x20, #0x70]!
7101da3e20  ldrb w9,[x9, #0x280]
7101da3e24  ldur x8,[x20, #-0x50]
7101da3e28  ldr x8,[x8]
7101da3e2c  ldr x8,[x8]
7101da3e30  cbz w9,0x7101da3e40
7101da3e34  ldr w9,[x19, #0x428]
7101da3e38  cmp w9,#0x2
7101da3e3c  b.ne 0x7101da3ee8
7101da3e40  ldr x8,[x8, #0x600]
7101da3e44  ldrb w9,[x8, #0x4aa]
7101da3e48  cbz w9,0x7101da42c0
7101da3e4c  ldrb w10,[x8, #0x1d4]
7101da3e50  tbnz w10,#0x1,0x7101da3f20
7101da3e54  ldrb w10,[x8, #0x1d8]
7101da3e58  tbnz w10,#0x1,0x7101da3f80
7101da3e5c  ldr w10,[x19, #0xb0]
7101da3e60  cmp w10,#0x1
7101da3e64  b.lt 0x7101da3e74
7101da3e68  cbz w9,0x7101da3e74
7101da3e6c  ldrb w9,[x8, #0x1b0]
7101da3e70  tbnz w9,#0x1,0x7101da4034
7101da3e74  ldrb w9,[x8, #0x1c0]
7101da3e78  tbnz w9,#0x1,0x7101da3f98
7101da3e7c  ldrb w8,[x8, #0x1c8]
7101da3e80  tbz w8,#0x1,0x7101da42c0
7101da3e84  ldr w8,[x19, #0x428]
7101da3e88  add x0,x19,#0x50
7101da3e8c  cmp w8,#0x2
7101da3e90  b.ne 0x7101da425c
7101da3e94  adrp x1,0x710439d000
7101da3e98  add x1,x1,#0x815
7101da3e9c  b 0x7101da4264
7101da3ea0  orr w1,wzr,#0x3
7101da3ea4  mov x0,x21
7101da3ea8  mov w2,wzr
7101da3eac  bl 0x7103771a80
7101da3eb0  mov x0,x19
7101da3eb4  bl 0x7101da8880
7101da3eb8  ldr x8,[x19, #0x70]
7101da3ebc  ldr w8,[x8, #0x254]
7101da3ec0  cmp w8,#0x3
7101da3ec4  b.eq 0x7101da3f18
7101da3ec8  ldrb w8,[x19, #0x44f]
7101da3ecc  cbz w8,0x7101da3f08
7101da3ed0  orr w1,wzr,#0x3
7101da3ed4  mov w2,#0x1
7101da3ed8  mov x0,x20
7101da3edc  bl 0x7103771a80
7101da3ee0  strh wzr,[x19, #0x44e]
7101da3ee4  b 0x7101da437c
7101da3ee8  ldr x8,[x19, #0x8]
7101da3eec  ldr x21,[x8, #0x80]
7101da3ef0  ldrb w8,[x21, #0xc9]
7101da3ef4  mov w9,#0x2260
7101da3ef8  add x0,x21,x9
7101da3efc  cbz w8,0x7101da3f50
7101da3f00  mov w1,wzr
7101da3f04  b 0x7101da3f54
7101da3f08  orr w1,wzr,#0x3
7101da3f0c  mov x0,x20
7101da3f10  mov w2,wzr
7101da3f14  bl 0x7103771a80
7101da3f18  strb wzr,[x19, #0x44e]
7101da3f1c  b 0x7101da437c
7101da3f20  mov x21,x19
7101da3f24  ldr x0,[x21, #0x78]!
7101da3f28  ldr x8,[x0]
7101da3f2c  ldr x8,[x8, #0x70]
7101da3f30  mov w1,#0x1
7101da3f34  blr x8
7101da3f38  mov w20,#0xa
7101da3f3c  mov x0,x21
7101da3f40  mov w1,w20
7101da3f44  mov w2,wzr
7101da3f48  bl 0x7103771a80
7101da3f4c  b 0x7101da42c4
7101da3f50  mov w1,#0x4
7101da3f54  mov w2,wzr
7101da3f58  bl 0x7103771be0
7101da3f5c  ldr x8,[x21, #0x2260]
7101da3f60  ldr w8,[x8, #0x25c]
7101da3f64  mov w1,#0x1
7101da3f68  mov x0,x20
7101da3f6c  mov w2,wzr
7101da3f70  str w8,[x21, #0x2270]
7101da3f74  bl 0x7103771a80
7101da3f78  mov w20,#0x5
7101da3f7c  b 0x7101da42c4
7101da3f80  ldr w8,[x19, #0x428]
7101da3f84  cmp w8,#0x2
7101da3f88  mov w8,#0x5
7101da3f8c  orr w9,wzr,#0x7
7101da3f90  csel w20,w9,w8,eq
7101da3f94  b 0x7101da42c4
7101da3f98  ldrsh w8,[x19, #0x98]
7101da3f9c  cmn w8,#0x1
7101da3fa0  b.eq 0x7101da42c0
7101da3fa4  add x20,x19,#0x50
7101da3fa8  adrp x1,0x7104422000
7101da3fac  add x1,x1,#0x8b8
7101da3fb0  add x8,sp,#0x48
7101da3fb4  mov x0,x20
7101da3fb8  bl 0x7103776640
7101da3fbc  ldr x21,[sp, #0x50]
7101da3fc0  fmov s0,0x3f800000
7101da3fc4  adrp x1,0x71042a3000
7101da3fc8  add x1,x1,#0x57e
7101da3fcc  mov x0,x21
7101da3fd0  bl 0x7103778300
7101da3fd4  adrp x25,0x710523d000
7101da3fd8  add x25,x25,#0x988
7101da3fdc  stp x25,xzr,[sp, #0x48]
7101da3fe0  cbz x21,0x7101da4004
7101da3fe4  ldr x0,[x21, #0x18]
7101da3fe8  adrp x8,0x710523d000
7101da3fec  add x8,x8,#0x9a8
7101da3ff0  stp x8,xzr,[x21, #0x10]
7101da3ff4  cbz x0,0x7101da3ffc
7101da3ff8  bl 0x710392eb40
7101da3ffc  mov x0,x21
7101da4000  bl 0x710392eb40
7101da4004  adrp x8,0x710532f000
7101da4008  ldr x8,[x8, #0x8d0]
7101da400c  ldr x0,[x8, #0x8]
7101da4010  ldp x8,x9,[x0, #0x40]
7101da4014  sub x9,x9,x8
7101da4018  asr x9,x9,#0x3
7101da401c  cmp x9,#0x3
7101da4020  b.cc 0x7101da4074
7101da4024  ldr x21,[x8, #0x10]
7101da4028  ldrb w8,[x0, #0x191]
7101da402c  cbnz w8,0x7101da40f0
7101da4030  b 0x7101da4080
7101da4034  ldr x0,[x19, #0x80]
7101da4038  ldr x8,[x0]
7101da403c  ldr x8,[x8, #0x70]
7101da4040  mov w1,#0x1
7101da4044  blr x8
7101da4048  ldr w8,[x19, #0xe0]
7101da404c  cmp w8,#0x4
7101da4050  b.cs 0x7101da43a0
7101da4054  mov w9,#0x54
7101da4058  madd x8,x8,x9,x19
7101da405c  add x1,x8,#0x268
7101da4060  mov x0,x19
7101da4064  mov w2,wzr
7101da4068  bl 0x7101dabb40
7101da406c  mov w20,#0x9
7101da4070  b 0x7101da42c4
7101da4074  mov x21,xzr
7101da4078  ldrb w8,[x0, #0x191]
7101da407c  cbnz w8,0x7101da40f0
7101da4080  mov w2,#0x4
7101da4084  mov x1,x21
7101da4088  bl 0x7103313f20
7101da408c  tbz w0,#0x0,0x7101da40f0
7101da4090  add x0,sp,#0x8
7101da4094  mov x1,x21
7101da4098  bl 0x71024076d0
7101da409c  ldr x8,[sp, #0x18]
7101da40a0  adrp x9,0x7104f73000
7101da40a4  add x9,x9,#0xd50
7101da40a8  str x9,[sp, #0x10]
7101da40ac  cbz x8,0x7101da411c
7101da40b0  adrp x8,0x7106dd5000
7101da40b4  ldrb w8,[x8, #0x3a8]
7101da40b8  cmp w8,#0x1
7101da40bc  b.ne 0x7101da411c
7101da40c0  adrp x9,0x7106dd5000
7101da40c4  ldr w8,[sp, #0x20]
7101da40c8  ldr w9,[x9, #0x3ac]
7101da40cc  cmp w8,w9
7101da40d0  b.ne 0x7101da411c
7101da40d4  ldr x8,[sp, #0x18]
7101da40d8  ldr wzr,[x8, #0x38]!
7101da40dc  ldaxr w9,[x8]
7101da40e0  sub w9,w9,#0x1
7101da40e4  stlxr w10,w9,[x8]
7101da40e8  cbnz w10,0x7101da40dc
7101da40ec  b 0x7101da411c
7101da40f0  mov x8,#0x650000000000
7101da40f4  movk x8,#0x87, LSL #48
7101da40f8  strb wzr,[sp, #0x28]
7101da40fc  stp xzr,x8,[sp, #0x18]
7101da4100  mov x8,#-0x1
7101da4104  stp x8,xzr,[sp, #0x30]
7101da4108  adrp x8,0x7104f73000
7101da410c  add x8,x8,#0xd50
7101da4110  str wzr,[sp, #0x8]
7101da4114  str xzr,[sp, #0x40]
7101da4118  str x8,[sp, #0x10]
7101da411c  adrp x1,0x710438d000
7101da4120  add x1,x1,#0x7
7101da4124  add x8,sp,#0x48
7101da4128  mov x0,x20
7101da412c  str xzr,[sp, #0x18]
7101da4130  strb wzr,[sp, #0x28]
7101da4134  bl 0x7103776640
7101da4138  ldr x21,[sp, #0x50]
7101da413c  fmov s0,0x3f800000
7101da4140  adrp x1,0x710436c000
7101da4144  add x1,x1,#0x90a
7101da4148  mov x0,x21
7101da414c  bl 0x7103778300
7101da4150  mov w8,#0x1
7101da4154  strb w8,[x19, #0x44e]
7101da4158  adrp x8,0x710593b000
7101da415c  ldr x8,[x8, #0x988]
7101da4160  ldr x8,[x8, #0x8]
7101da4164  ldr w9,[x8]
7101da4168  orr w9,w9,#0x2
7101da416c  str w9,[x8]
7101da4170  adrp x1,0x7104433000
7101da4174  add x1,x1,#0x603
7101da4178  sub x8,x29,#0x90
7101da417c  mov x0,x20
7101da4180  bl 0x7103776640
7101da4184  ldr w8,[x19, #0xb0]
7101da4188  cbz w8,0x7101da4204
7101da418c  fmov s8,0x3f800000
7101da4190  mov w20,wzr
7101da4194  adrp x22,0x7104270000
7101da4198  add x22,x22,#0x51a
7101da419c  adrp x23,0x710436c000
7101da41a0  add x23,x23,#0x90a
7101da41a4  adrp x26,0x710523d000
7101da41a8  add x26,x26,#0x9a8
7101da41ac  sub x8,x29,#0x60
7101da41b0  sub x0,x29,#0x90
7101da41b4  mov x1,x22
7101da41b8  mov w2,w20
7101da41bc  bl 0x7103776640
7101da41c0  ldur x24,[x29, #-0x58]
7101da41c4  mov v0.16B,v8.16B
7101da41c8  mov x1,x23
7101da41cc  mov x0,x24
7101da41d0  bl 0x7103778300
7101da41d4  stp x25,xzr,[x29, #-0x60]
7101da41d8  cbz x24,0x7101da41f4
7101da41dc  ldr x0,[x24, #0x18]
7101da41e0  stp x26,xzr,[x24, #0x10]
7101da41e4  cbz x0,0x7101da41ec
7101da41e8  bl 0x710392eb40
7101da41ec  mov x0,x24
7101da41f0  bl 0x710392eb40
7101da41f4  ldr w8,[x19, #0xb0]
7101da41f8  add w20,w20,#0x1
7101da41fc  cmp w20,w8
7101da4200  b.cc 0x7101da41ac
7101da4204  ldur x20,[x29, #-0x88]
7101da4208  stp x25,xzr,[x29, #-0x90]
7101da420c  cbz x20,0x7101da4230
7101da4210  ldr x0,[x20, #0x18]
7101da4214  adrp x8,0x710523d000
7101da4218  add x8,x8,#0x9a8
7101da421c  stp x8,xzr,[x20, #0x10]
7101da4220  cbz x0,0x7101da4228
7101da4224  bl 0x710392eb40
7101da4228  mov x0,x20
7101da422c  bl 0x710392eb40
7101da4230  stp x25,xzr,[sp, #0x48]
7101da4234  cbz x21,0x7101da42c0
7101da4238  ldr x0,[x21, #0x18]
7101da423c  adrp x8,0x710523d000
7101da4240  add x8,x8,#0x9a8
7101da4244  stp x8,xzr,[x21, #0x10]
7101da4248  cbz x0,0x7101da4250
7101da424c  bl 0x710392eb40
7101da4250  mov x0,x21
7101da4254  bl 0x710392eb40
7101da4258  b 0x7101da42c0
7101da425c  adrp x1,0x71042d6000
7101da4260  add x1,x1,#0x862
7101da4264  add x8,sp,#0x48
7101da4268  bl 0x7103776640
7101da426c  ldr x20,[sp, #0x50]
7101da4270  fmov s0,0x3f800000
7101da4274  adrp x1,0x71042a3000
7101da4278  add x1,x1,#0x57e
7101da427c  mov x0,x20
7101da4280  bl 0x7103778300
7101da4284  adrp x8,0x710523d000
7101da4288  add x8,x8,#0x988
7101da428c  stp x8,xzr,[sp, #0x48]
7101da4290  cbz x20,0x7101da42b4
7101da4294  ldr x0,[x20, #0x18]
7101da4298  adrp x8,0x710523d000
7101da429c  add x8,x8,#0x9a8
7101da42a0  stp x8,xzr,[x20, #0x10]
7101da42a4  cbz x0,0x7101da42ac
7101da42a8  bl 0x710392eb40
7101da42ac  mov x0,x20
7101da42b0  bl 0x710392eb40
7101da42b4  mov w1,#0x1
7101da42b8  mov x0,x19
7101da42bc  bl 0x7101dab570
7101da42c0  mov w20,wzr
7101da42c4  ldr x0,[x19, #0x80]
7101da42c8  ldr x8,[x0]
7101da42cc  ldr x8,[x8, #0x78]
7101da42d0  blr x8
7101da42d4  tbz w0,#0x0,0x7101da42e0
7101da42d8  mov w20,#0x9
7101da42dc  b 0x7101da4360
7101da42e0  ldr x0,[x19, #0x78]
7101da42e4  ldr x8,[x0]
7101da42e8  ldr x8,[x8, #0x78]
7101da42ec  blr x8
7101da42f0  tbz w0,#0x0,0x7101da42fc
7101da42f4  mov w20,#0xa
7101da42f8  b 0x7101da4360
7101da42fc  ldr x8,[x19, #0x8]
7101da4300  ldr x8,[x8, #0x80]
7101da4304  ldr x0,[x8, #0x2268]
7101da4308  ldr x8,[x0]
7101da430c  ldr x8,[x8, #0x78]
7101da4310  blr x8
7101da4314  tbz w0,#0x0,0x7101da432c
7101da4318  ldr w8,[x19, #0x428]
7101da431c  cmp w8,#0x2
7101da4320  b.ne 0x7101da4354
7101da4324  orr w20,wzr,#0x7
7101da4328  b 0x7101da4360
7101da432c  cbz w20,0x7101da437c
7101da4330  cmp w20,#0x5
7101da4334  b.ne 0x7101da4360
7101da4338  ldrsw x8,[x19, #0x76c]
7101da433c  cmp w8,#0x13
7101da4340  b.cs 0x7101da43a0
7101da4344  add x8,x19,x8, LSL #0x2
7101da4348  mov w9,#0x5
7101da434c  str w9,[x8, #0x720]
7101da4350  b 0x7101da437c
7101da4354  mov w8,#0x1
7101da4358  orr w20,wzr,#0x6
7101da435c  strb w8,[x19, #0x44f]
7101da4360  ldr x0,[x19, #0x70]
7101da4364  bl 0x710376b960
7101da4368  ldrsw x8,[x19, #0x76c]
7101da436c  cmp w8,#0x13
7101da4370  b.cs 0x7101da43a0
7101da4374  add x8,x19,x8, LSL #0x2
7101da4378  str w20,[x8, #0x720]
7101da437c  ldr d8,[sp, #0xe0]
7101da4380  ldp x29,x30,[sp, #0x130]
7101da4384  ldp x20,x19,[sp, #0x120]
7101da4388  ldr x28,[sp, #0xe8]
7101da438c  ldp x22,x21,[sp, #0x110]
7101da4390  ldp x24,x23,[sp, #0x100]
7101da4394  ldp x26,x25,[sp, #0xf0]
7101da4398  add sp,sp,#0x140
7101da439c  ret
7101da43a0  bl 0x71039c2650
