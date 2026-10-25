// addr:      7102bc3a70
// offset:    0x2bc3a70
// name:      FUN_7102bc3a70
// mangled:   
// size:      2156

7102bc3a70  sub sp,sp,#0xc0
7102bc3a74  stp d9,d8,[sp, #0x80]
7102bc3a78  stp x22,x21,[sp, #0x90]
7102bc3a7c  stp x20,x19,[sp, #0xa0]
7102bc3a80  stp x29,x30,[sp, #0xb0]
7102bc3a84  add x29,sp,#0xb0
7102bc3a88  mov v8.16B,v0.16B
7102bc3a8c  mov x19,x0
7102bc3a90  bl 0x71025dd540
7102bc3a94  ldrb w9,[x19, #0x58]
7102bc3a98  ldr w8,[x19, #0x9f4]
7102bc3a9c  cbz w9,0x7102bc3abc
7102bc3aa0  sub w9,w8,#0x2
7102bc3aa4  cmp w9,#0x2
7102bc3aa8  b.cc 0x7102bc3ae8
7102bc3aac  cmp w8,#0x1
7102bc3ab0  b.eq 0x7102bc3af0
7102bc3ab4  cbz w8,0x7102bc3adc
7102bc3ab8  b 0x7102bc41a8
7102bc3abc  cmp w8,#0x3
7102bc3ac0  b.hi 0x7102bc41a8
7102bc3ac4  mov w8,w8
7102bc3ac8  adrp x9,0x7104518000
7102bc3acc  add x9,x9,#0x420
7102bc3ad0  ldrsw x8,[x9, x8, LSL #0x2]
7102bc3ad4  add x8,x8,x9
7102bc3ad8  br x8
7102bc3adc  mov x0,x19
7102bc3ae0  bl 0x7102bc4300
7102bc3ae4  b 0x7102bc41a8
7102bc3ae8  mov w8,#0x1
7102bc3aec  b 0x7102bc41a4
7102bc3af0  ldr w8,[x19, #0x76c]
7102bc3af4  str w8,[x19, #0x9f8]
7102bc3af8  mov v0.16B,v8.16B
7102bc3afc  mov x0,x19
7102bc3b00  bl 0x7102bc49e0
7102bc3b04  b 0x7102bc41a8
7102bc3b08  ldr w8,[x19, #0x76c]
7102bc3b0c  str w8,[x19, #0x9f8]
7102bc3b10  ldr w8,[x19, #0x9fc]
7102bc3b14  cmp w8,#0x1
7102bc3b18  csinc w8,wzr,w8,gt
7102bc3b1c  sxtw x20,w8
7102bc3b20  ldr x9,[x19, #0x938]
7102bc3b24  ldr x8,[x19, #0x930]
7102bc3b28  sub x9,x9,x8
7102bc3b2c  asr x9,x9,#0x2
7102bc3b30  cmp x9,x20
7102bc3b34  str wzr,[x19, #0xa00]
7102bc3b38  strb wzr,[x19, #0xbc1]
7102bc3b3c  strb wzr,[x19, #0x9f0]
7102bc3b40  b.ls 0x7102bc42d4
7102bc3b44  ldr s0,[x8,x20, lsl #2]
7102bc3b48  fcmp s0,#0.0
7102bc3b4c  str s0,[x19, #0xa80]
7102bc3b50  b.ls 0x7102bc3b70
7102bc3b54  cmp w20,#0x2
7102bc3b58  b.ls 0x7102bc3bac
7102bc3b5c  b 0x7102bc42d0
7102bc3b60  mov v0.16B,v8.16B
7102bc3b64  mov x0,x19
7102bc3b68  bl 0x7102bc64c0
7102bc3b6c  b 0x7102bc41a8
7102bc3b70  cmp w20,#0x3
7102bc3b74  str wzr,[x19, #0xa80]
7102bc3b78  b.cs 0x7102bc42d0
7102bc3b7c  adrp x8,0x710511c000
7102bc3b80  add x8,x8,#0xb8
7102bc3b84  lsl x21,x20,#0x3
7102bc3b88  ldr x0,[x19, #0x318]
7102bc3b8c  ldr x1,[x8, x21, LSL #0x0]
7102bc3b90  bl 0x7102633800
7102bc3b94  adrp x8,0x710511c000
7102bc3b98  add x8,x8,#0xd0
7102bc3b9c  ldr x0,[x19, #0x318]
7102bc3ba0  ldr x1,[x8, x21, LSL #0x0]
7102bc3ba4  mov w2,#0x1
7102bc3ba8  bl 0x7102633b90
7102bc3bac  adrp x8,0x710511c000
7102bc3bb0  add x8,x8,#0xe8
7102bc3bb4  add x21,x8,x20, LSL #0x4
7102bc3bb8  ldr x0,[x19, #0x318]
7102bc3bbc  ldr x1,[x21]
7102bc3bc0  mov w2,wzr
7102bc3bc4  bl 0x7102633a10
7102bc3bc8  ldr w8,[x21, #0x8]
7102bc3bcc  ldr x9,[x19, #0x318]
7102bc3bd0  str w8,[x19, #0xa7c]
7102bc3bd4  ldr x0,[x9, #0x10]
7102bc3bd8  adrp x9,0x710511c000
7102bc3bdc  add x9,x9,#0xa0
7102bc3be0  fmov s0,w8
7102bc3be4  ldr x1,[x9, x20, LSL #0x3]
7102bc3be8  bl 0x71025f74f0
7102bc3bec  mov x0,x19
7102bc3bf0  mov w1,w20
7102bc3bf4  bl 0x7102bca9f0
7102bc3bf8  ldr w8,[x19, #0x9fc]
7102bc3bfc  cbz w8,0x7102bc3d30
7102bc3c00  cmp w8,#0x1
7102bc3c04  b.eq 0x7102bc3c70
7102bc3c08  cmp w8,#0x2
7102bc3c0c  b.ne 0x7102bc41a0
7102bc3c10  ldrb w8,[x19, #0xb00]
7102bc3c14  cbz w8,0x7102bc3c2c
7102bc3c18  ldr x8,[x19, #0xaf0]
7102bc3c1c  strb wzr,[x19, #0xb00]
7102bc3c20  ldr x8,[x8, #0x8]
7102bc3c24  mov w9,#0x1
7102bc3c28  str w9,[x8, #0x10]
7102bc3c2c  ldrb w8,[x19, #0xb01]
7102bc3c30  cbz w8,0x7102bc3c48
7102bc3c34  ldr x8,[x19, #0xaf8]
7102bc3c38  strb wzr,[x19, #0xb01]
7102bc3c3c  ldr x8,[x8, #0x8]
7102bc3c40  mov w9,#0x1
7102bc3c44  str w9,[x8, #0x10]
7102bc3c48  ldr x8,[x19, #0x338]
7102bc3c4c  str wzr,[x19, #0xae4]
7102bc3c50  str wzr,[x19, #0xa00]
7102bc3c54  ldr x8,[x8]
7102bc3c58  ldr x0,[x8, #0x8]
7102bc3c5c  cbz x0,0x7102bc4178
7102bc3c60  ldr x8,[x0]
7102bc3c64  ldr x8,[x8, #0x58]
7102bc3c68  mov w1,#0x22
7102bc3c6c  b 0x7102bc4170
7102bc3c70  ldr x8,[x19, #0xa38]
7102bc3c74  cbz x8,0x7102bc3ed0
7102bc3c78  add x0,x8,#0x108
7102bc3c7c  mov w9,#0x1
7102bc3c80  strb w9,[x8, #0x110]
7102bc3c84  bl 0x71025e9d50
7102bc3c88  ldr x8,[x19, #0xa38]
7102bc3c8c  cbz x8,0x7102bc3ed0
7102bc3c90  ldrb w9,[x8, #0xe0]
7102bc3c94  cbz w9,0x7102bc3e98
7102bc3c98  ldr x20,[x8, #0xc8]
7102bc3c9c  cbz x20,0x7102bc3e98
7102bc3ca0  ldp x21,x22,[x20, #0x18]
7102bc3ca4  cmp x21,x22
7102bc3ca8  str wzr,[x20, #0x3c]
7102bc3cac  b.eq 0x7102bc3e94
7102bc3cb0  fmov s9,wzr
7102bc3cb4  ldr x0,[x21], #0x8
7102bc3cb8  ldr x8,[x0]
7102bc3cbc  ldr x8,[x8, #0x18]
7102bc3cc0  mov v0.16B,v9.16B
7102bc3cc4  mov w1,wzr
7102bc3cc8  blr x8
7102bc3ccc  cmp x22,x21
7102bc3cd0  b.ne 0x7102bc3cb4
7102bc3cd4  ldp x21,x22,[x20, #0x18]
7102bc3cd8  cmp x21,x22
7102bc3cdc  str wzr,[x20, #0x40]
7102bc3ce0  b.eq 0x7102bc3e98
7102bc3ce4  fmov s9,wzr
7102bc3ce8  ldr x0,[x21], #0x8
7102bc3cec  ldr x8,[x0]
7102bc3cf0  ldr x8,[x8, #0x18]
7102bc3cf4  mov v0.16B,v9.16B
7102bc3cf8  mov w1,#0x1
7102bc3cfc  blr x8
7102bc3d00  cmp x22,x21
7102bc3d04  b.ne 0x7102bc3ce8
7102bc3d08  ldp x21,x20,[x20, #0x18]
7102bc3d0c  cmp x21,x20
7102bc3d10  b.eq 0x7102bc3e98
7102bc3d14  ldr x0,[x21], #0x8
7102bc3d18  ldr x8,[x0]
7102bc3d1c  ldr x8,[x8, #0x38]
7102bc3d20  blr x8
7102bc3d24  cmp x20,x21
7102bc3d28  b.ne 0x7102bc3d14
7102bc3d2c  b 0x7102bc3e98
7102bc3d30  add x8,x19,#0xa84
7102bc3d34  str xzr,[x8]
7102bc3d38  mov w8,#0xc2c80000
7102bc3d3c  str w8,[x19, #0xbc4]
7102bc3d40  ldr x8,[x19, #0x990]
7102bc3d44  mov w20,#0x1
7102bc3d48  orr w21,wzr,#0x6
7102bc3d4c  strb w20,[x8, #0x1c]
7102bc3d50  str w21,[x8, #0x18]
7102bc3d54  ldr x0,[x19, #0x990]
7102bc3d58  mov v0.16B,v8.16B
7102bc3d5c  bl 0x7102bcae60
7102bc3d60  ldr x8,[x19, #0x9c0]
7102bc3d64  mov w9,#0x41a00000
7102bc3d68  str w9,[x8, #0xa0]
7102bc3d6c  mov w9,#0x4
7102bc3d70  str w9,[x8, #0x10]
7102bc3d74  strb w20,[x8, #0x14]
7102bc3d78  strb w20,[x8, #0xb8]
7102bc3d7c  ldr x0,[x19, #0x9c0]
7102bc3d80  mov v0.16B,v8.16B
7102bc3d84  bl 0x7102bcfb40
7102bc3d88  ldr x8,[x19, #0x9a0]
7102bc3d8c  orr w22,wzr,#0x7
7102bc3d90  strb w20,[x8, #0x70]
7102bc3d94  strb w20,[x8, #0x24]
7102bc3d98  str w22,[x8, #0x20]
7102bc3d9c  ldr x0,[x19, #0x9a0]
7102bc3da0  mov v0.16B,v8.16B
7102bc3da4  bl 0x7102bcce20
7102bc3da8  ldr x8,[x19, #0x9a8]
7102bc3dac  strb w20,[x8, #0x70]
7102bc3db0  strb w20,[x8, #0x24]
7102bc3db4  str w22,[x8, #0x20]
7102bc3db8  ldr x0,[x19, #0x9a8]
7102bc3dbc  mov v0.16B,v8.16B
7102bc3dc0  bl 0x7102bcce20
7102bc3dc4  ldr x8,[x19, #0x9b0]
7102bc3dc8  strb w20,[x8, #0x70]
7102bc3dcc  strb w20,[x8, #0x24]
7102bc3dd0  str w22,[x8, #0x20]
7102bc3dd4  ldr x0,[x19, #0x9b0]
7102bc3dd8  mov v0.16B,v8.16B
7102bc3ddc  bl 0x7102bcce20
7102bc3de0  ldr x8,[x19, #0x9b8]
7102bc3de4  str w21,[x8, #0x18]
7102bc3de8  strb w20,[x8, #0x1c]
7102bc3dec  ldr x0,[x19, #0x9b8]
7102bc3df0  mov v0.16B,v8.16B
7102bc3df4  bl 0x7102bcde30
7102bc3df8  ldr x8,[x19, #0xb08]
7102bc3dfc  strb w20,[x19, #0xaec]
7102bc3e00  ldr x9,[x8, #0x8]
7102bc3e04  strb w20,[x8, #0x128]
7102bc3e08  cbz x9,0x7102bc3e20
7102bc3e0c  mov x10,#-0x1
7102bc3e10  str x10,[x9, #0xd8]
7102bc3e14  ldr x0,[x8, #0x8]
7102bc3e18  mov w1,wzr
7102bc3e1c  bl 0x7100532bc0
7102bc3e20  ldr x8,[x19, #0xb10]
7102bc3e24  ldr x9,[x8, #0x8]
7102bc3e28  strb w20,[x8, #0x128]
7102bc3e2c  cbz x9,0x7102bc3e44
7102bc3e30  mov x10,#-0x1
7102bc3e34  str x10,[x9, #0xd8]
7102bc3e38  ldr x0,[x8, #0x8]
7102bc3e3c  mov w1,wzr
7102bc3e40  bl 0x7100532bc0
7102bc3e44  ldr x8,[x19, #0xb18]
7102bc3e48  mov w9,#0x1
7102bc3e4c  strb w9,[x8, #0x128]
7102bc3e50  ldr x9,[x8, #0x8]
7102bc3e54  cbz x9,0x7102bc3e6c
7102bc3e58  mov x10,#-0x1
7102bc3e5c  str x10,[x9, #0xd8]
7102bc3e60  ldr x0,[x8, #0x8]
7102bc3e64  mov w1,wzr
7102bc3e68  bl 0x7100532bc0
7102bc3e6c  ldr x8,[x19, #0x338]
7102bc3e70  str wzr,[x19, #0xa00]
7102bc3e74  ldr x8,[x8]
7102bc3e78  ldr x0,[x8, #0x8]
7102bc3e7c  cbz x0,0x7102bc4178
7102bc3e80  ldr x8,[x0]
7102bc3e84  ldr x8,[x8, #0x58]
7102bc3e88  mov w2,#0xffffffff
7102bc3e8c  mov w1,#0x20
7102bc3e90  b 0x7102bc4174
7102bc3e94  str wzr,[x20, #0x40]
7102bc3e98  ldr x8,[x19, #0xa38]
7102bc3e9c  cbz x8,0x7102bc3ed0
7102bc3ea0  ldrb w9,[x8, #0xe0]
7102bc3ea4  cbz w9,0x7102bc3ebc
7102bc3ea8  ldr x9,[x8, #0xc8]
7102bc3eac  cbz x9,0x7102bc3ebc
7102bc3eb0  strh wzr,[x9, #0x32]
7102bc3eb4  ldr x8,[x19, #0xa38]
7102bc3eb8  cbz x8,0x7102bc3ed0
7102bc3ebc  ldrb w9,[x8, #0xe0]
7102bc3ec0  cbz w9,0x7102bc3ed0
7102bc3ec4  ldr x8,[x8, #0xc8]
7102bc3ec8  cbz x8,0x7102bc3ed0
7102bc3ecc  strh wzr,[x8, #0x30]
7102bc3ed0  ldr x8,[x19, #0xb18]
7102bc3ed4  mov w9,#0x1
7102bc3ed8  strb w9,[x8, #0x128]
7102bc3edc  ldr x9,[x8, #0x8]
7102bc3ee0  cbz x9,0x7102bc3ef8
7102bc3ee4  mov x10,#-0x1
7102bc3ee8  str x10,[x9, #0xd8]
7102bc3eec  ldr x0,[x8, #0x8]
7102bc3ef0  mov w1,wzr
7102bc3ef4  bl 0x7100532bc0
7102bc3ef8  ldr q0,[x19, #0xb50]
7102bc3efc  mov v1.16B,v0.16B
7102bc3f00  adrp x8,0x7104473000
7102bc3f04  add x8,x8,#0x298
7102bc3f08  ld1 {v1.S}[1],[x8]
7102bc3f0c  ldr x8,[x19, #0xb18]
7102bc3f10  add x9,x19,#0xb50
7102bc3f14  add x10,x8,#0x10
7102bc3f18  str q1,[x19, #0xb50]
7102bc3f1c  ldrb w11,[x8, #0x128]
7102bc3f20  cbz w11,0x7102bc3f8c
7102bc3f24  ldr x11,[x8, #0x8]
7102bc3f28  ldrb w12,[x11, #0xe7]
7102bc3f2c  ldrb w11,[x11, #0xe8]
7102bc3f30  orr w11,w11,w12
7102bc3f34  tst w11,#0xff
7102bc3f38  b.ne 0x7102bc3f8c
7102bc3f3c  ldr q1,[x10]
7102bc3f40  adrp x11,0x7104472000
7102bc3f44  fabd s2,s1,s0
7102bc3f48  ldr s0,[x11, #0x970]
7102bc3f4c  fcmp s2,s0
7102bc3f50  b.gt 0x7102bc3f70
7102bc3f54  dup s1,v1.S[0x1]
7102bc3f58  adrp x11,0x7104473000
7102bc3f5c  ldr s2,[x11, #0x91c]
7102bc3f60  fadd s1,s1,s2
7102bc3f64  fabs s1,s1
7102bc3f68  fcmp s1,s0
7102bc3f6c  b.le 0x7102bc3fa4
7102bc3f70  ldr x11,[x9, #0x8]
7102bc3f74  str x11,[x10, #0x8]
7102bc3f78  ldr x9,[x9]
7102bc3f7c  str x9,[x10]
7102bc3f80  mov w9,#0x1
7102bc3f84  strb w9,[x8, #0x12a]
7102bc3f88  b 0x7102bc3fa4
7102bc3f8c  ldr x11,[x9, #0x8]
7102bc3f90  str x11,[x10, #0x8]
7102bc3f94  ldr x9,[x9]
7102bc3f98  str x9,[x10]
7102bc3f9c  mov w9,#0x1
7102bc3fa0  strb w9,[x8, #0x129]
7102bc3fa4  ldr s0,[x8, #0x30]
7102bc3fa8  adrp x9,0x7104472000
7102bc3fac  fabs s1,s0
7102bc3fb0  ldr s0,[x9, #0x970]
7102bc3fb4  fcmp s1,s0
7102bc3fb8  b.mi 0x7102bc3fc8
7102bc3fbc  mov w9,#0x1
7102bc3fc0  str wzr,[x8, #0x30]
7102bc3fc4  strb w9,[x8, #0x129]
7102bc3fc8  ldr q1,[x8, #0x50]
7102bc3fcc  fmov s2,0xbf800000
7102bc3fd0  fadd s3,s1,s2
7102bc3fd4  fabs s3,s3
7102bc3fd8  fcmp s3,s0
7102bc3fdc  b.mi 0x7102bc3ff4
7102bc3fe0  fmov s3,0x3f800000
7102bc3fe4  mov v1.S[0x0],v3.S[0x0]
7102bc3fe8  mov w9,#0x1
7102bc3fec  strb w9,[x8, #0x129]
7102bc3ff0  str q1,[x8, #0x50]
7102bc3ff4  dup s3,v1.S[0x1]
7102bc3ff8  fadd s2,s3,s2
7102bc3ffc  fabs s2,s2
7102bc4000  fcmp s2,s0
7102bc4004  b.mi 0x7102bc401c
7102bc4008  fmov s0,0x3f800000
7102bc400c  mov v1.S[0x1],v0.S[0x0]
7102bc4010  mov w9,#0x1
7102bc4014  strb w9,[x8, #0x129]
7102bc4018  str q1,[x8, #0x50]
7102bc401c  movi d0,#0x0
7102bc4020  mov v1.16B,v0.16B
7102bc4024  add x8,x19,#0xb54
7102bc4028  ld1 {v1.S}[1],[x8]
7102bc402c  adrp x8,0x7104468000
7102bc4030  mov v1.D[0x1],v0.D[0x0]
7102bc4034  fmov s0,0x3f800000
7102bc4038  mov v1.S[0x3],v0.S[0x0]
7102bc403c  ldr q0,[x8, #0xca0]
7102bc4040  adrp x8,0x710446a000
7102bc4044  str q0,[sp]
7102bc4048  ldr q0,[x8, #0x360]
7102bc404c  adrp x8,0x7104465000
7102bc4050  str q0,[sp, #0x10]
7102bc4054  ldr q0,[x8, #0x6b0]
7102bc4058  stp q0,q1,[sp, #0x20]
7102bc405c  ldr x20,[x19, #0xa38]
7102bc4060  cbz x20,0x7102bc40e8
7102bc4064  ldr x0,[x20, #0x90]
7102bc4068  ldr x8,[x0]
7102bc406c  ldr x8,[x8, #0x148]
7102bc4070  mov x1,sp
7102bc4074  blr x8
7102bc4078  ldr x20,[x20, #0xd8]
7102bc407c  cbz x20,0x7102bc40e8
7102bc4080  ldr x8,[sp, #0x18]
7102bc4084  str x8,[sp, #0x58]
7102bc4088  ldr x8,[sp, #0x10]
7102bc408c  str x8,[sp, #0x50]
7102bc4090  ldr x8,[sp, #0x8]
7102bc4094  str x8,[sp, #0x48]
7102bc4098  ldr x8,[sp]
7102bc409c  str x8,[sp, #0x40]
7102bc40a0  ldr x8,[sp, #0x38]
7102bc40a4  str x8,[sp, #0x78]
7102bc40a8  ldr x8,[sp, #0x30]
7102bc40ac  str x8,[sp, #0x70]
7102bc40b0  ldr x8,[sp, #0x28]
7102bc40b4  str x8,[sp, #0x68]
7102bc40b8  ldr x8,[sp, #0x20]
7102bc40bc  str x8,[sp, #0x60]
7102bc40c0  ldr x8,[x20, #0x8]
7102bc40c4  ldrb w9,[x8, #0xa8]
7102bc40c8  cbz w9,0x7102bc40e0
7102bc40cc  ldr x0,[x8, #0x48]
7102bc40d0  ldr x8,[x0]
7102bc40d4  ldr x8,[x8, #0x20]
7102bc40d8  add x1,sp,#0x40
7102bc40dc  blr x8
7102bc40e0  mov w8,#0x1
7102bc40e4  strb w8,[x20, #0x20]
7102bc40e8  mov w8,#0x40a00000
7102bc40ec  str w8,[x19, #0xac4]
7102bc40f0  mov w8,#0x41a00000
7102bc40f4  str w8,[x19, #0xbd8]
7102bc40f8  ldr w8,[x19, #0xbdc]
7102bc40fc  cbz w8,0x7102bc411c
7102bc4100  ucvtf s0,w8
7102bc4104  ldr s1,[x19, #0xbd4]
7102bc4108  fmul s0,s1,s0
7102bc410c  fmov s1,0x41a00000
7102bc4110  fcmp s0,s1
7102bc4114  b.pl 0x7102bc411c
7102bc4118  str s0,[x19, #0xbd8]
7102bc411c  mov w8,#0x1
7102bc4120  str w8,[x19, #0xae4]
7102bc4124  strb w8,[x19, #0xbc2]
7102bc4128  ldr x8,[x19, #0x338]
7102bc412c  str wzr,[x19, #0xac8]
7102bc4130  str wzr,[x19, #0xa00]
7102bc4134  ldr x8,[x8]
7102bc4138  ldr x0,[x8, #0x8]
7102bc413c  cbz x0,0x7102bc4178
7102bc4140  ldr x8,[x0]
7102bc4144  ldr x8,[x8, #0x58]
7102bc4148  mov w2,#0xffffffff
7102bc414c  orr w1,wzr,#0xe
7102bc4150  blr x8
7102bc4154  ldr x8,[x19, #0x338]
7102bc4158  ldr x8,[x8]
7102bc415c  ldr x0,[x8, #0x8]
7102bc4160  cbz x0,0x7102bc4178
7102bc4164  ldr x8,[x0]
7102bc4168  ldr x8,[x8, #0x58]
7102bc416c  mov w1,#0x21
7102bc4170  mov w2,#0xffffffff
7102bc4174  blr x8
7102bc4178  adrp x8,0x71052b9000
7102bc417c  ldr x8,[x8, #0x4f8]
7102bc4180  ldr x0,[x8]
7102bc4184  mov x1,#0x9f8c
7102bc4188  movk x1,#0xb87a, LSL #16
7102bc418c  movk x1,#0x17, LSL #32
7102bc4190  mov w4,#0x50000000
7102bc4194  mov w2,wzr
7102bc4198  mov w3,wzr
7102bc419c  bl 0x710067de90
7102bc41a0  orr w8,wzr,#0x3
7102bc41a4  str w8,[x19, #0x9f4]
7102bc41a8  ldr s0,[x19, #0xa7c]
7102bc41ac  fcmp s0,#0.0
7102bc41b0  b.le 0x7102bc4228
7102bc41b4  fsub s0,s0,s8
7102bc41b8  fcmp s0,#0.0
7102bc41bc  str s0,[x19, #0xa7c]
7102bc41c0  b.hi 0x7102bc4228
7102bc41c4  ldr w8,[x19, #0x9fc]
7102bc41c8  ldr w9,[x19, #0x9f4]
7102bc41cc  str wzr,[x19, #0xa7c]
7102bc41d0  cbz w9,0x7102bc41e8
7102bc41d4  cmp w8,#0x1
7102bc41d8  b.le 0x7102bc41e4
7102bc41dc  mov x8,xzr
7102bc41e0  b 0x7102bc41f4
7102bc41e4  add w8,w8,#0x1
7102bc41e8  cmp w8,#0x3
7102bc41ec  b.cs 0x7102bc42d0
7102bc41f0  sxtw x8,w8
7102bc41f4  adrp x9,0x710511c000
7102bc41f8  add x9,x9,#0x88
7102bc41fc  lsl x20,x8,#0x3
7102bc4200  ldr x0,[x19, #0x318]
7102bc4204  ldr x1,[x9, x20, LSL #0x0]
7102bc4208  mov w2,#0x1
7102bc420c  bl 0x7102633a10
7102bc4210  ldr x8,[x19, #0x318]
7102bc4214  adrp x9,0x710511c000
7102bc4218  add x9,x9,#0xa0
7102bc421c  ldr x1,[x9, x20, LSL #0x0]
7102bc4220  ldr x0,[x8, #0x10]
7102bc4224  bl 0x71025f7350
7102bc4228  ldr s0,[x19, #0xa80]
7102bc422c  fcmp s0,#0.0
7102bc4230  b.le 0x7102bc4244
7102bc4234  fsub s0,s0,s8
7102bc4238  fcmp s0,#0.0
7102bc423c  str s0,[x19, #0xa80]
7102bc4240  b.ls 0x7102bc425c
7102bc4244  ldp d9,d8,[sp, #0x80]
7102bc4248  ldp x29,x30,[sp, #0xb0]
7102bc424c  ldp x20,x19,[sp, #0xa0]
7102bc4250  ldp x22,x21,[sp, #0x90]
7102bc4254  add sp,sp,#0xc0
7102bc4258  ret
7102bc425c  ldr w8,[x19, #0x9fc]
7102bc4260  ldr w9,[x19, #0x9f4]
7102bc4264  str wzr,[x19, #0xa80]
7102bc4268  cbz w9,0x7102bc4280
7102bc426c  cmp w8,#0x1
7102bc4270  b.le 0x7102bc427c
7102bc4274  mov x8,xzr
7102bc4278  b 0x7102bc428c
7102bc427c  add w8,w8,#0x1
7102bc4280  cmp w8,#0x3
7102bc4284  b.cs 0x7102bc42d0
7102bc4288  sxtw x8,w8
7102bc428c  adrp x9,0x710511c000
7102bc4290  add x9,x9,#0xb8
7102bc4294  lsl x20,x8,#0x3
7102bc4298  ldr x0,[x19, #0x318]
7102bc429c  ldr x1,[x9, x20, LSL #0x0]
7102bc42a0  bl 0x7102633800
7102bc42a4  adrp x8,0x710511c000
7102bc42a8  add x8,x8,#0xd0
7102bc42ac  ldr x0,[x19, #0x318]
7102bc42b0  ldp d9,d8,[sp, #0x80]
7102bc42b4  mov w2,#0x1
7102bc42b8  ldr x1,[x8, x20, LSL #0x0]
7102bc42bc  ldp x29,x30,[sp, #0xb0]
7102bc42c0  ldp x20,x19,[sp, #0xa0]
7102bc42c4  ldp x22,x21,[sp, #0x90]
7102bc42c8  add sp,sp,#0xc0
7102bc42cc  b 0x7102633b90
7102bc42d0  bl 0x71039c2650
7102bc42d4  add x0,x19,#0x930
7102bc42d8  bl 0x71039c1330
