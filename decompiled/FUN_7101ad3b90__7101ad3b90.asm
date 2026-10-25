// addr:      7101ad3b90
// offset:    0x1ad3b90
// name:      FUN_7101ad3b90
// mangled:   
// size:      7388

7101ad3b90  str d8,[sp, #-0x70]!
7101ad3b94  stp x28,x27,[sp, #0x10]
7101ad3b98  stp x26,x25,[sp, #0x20]
7101ad3b9c  stp x24,x23,[sp, #0x30]
7101ad3ba0  stp x22,x21,[sp, #0x40]
7101ad3ba4  stp x20,x19,[sp, #0x50]
7101ad3ba8  stp x29,x30,[sp, #0x60]
7101ad3bac  add x29,sp,#0x60
7101ad3bb0  sub sp,sp,#0x2e0
7101ad3bb4  ldp x8,x9,[x1]
7101ad3bb8  add x23,x0,#0x118
7101ad3bbc  stp x8,x9,[x0, #0x118]
7101ad3bc0  ldr x10,[x1, #0x20]
7101ad3bc4  ldp x8,x9,[x1, #0x10]
7101ad3bc8  ldrb w11,[x1, #0x28]
7101ad3bcc  mov x22,x1
7101ad3bd0  mov x19,x0
7101ad3bd4  str x8,[x0, #0x128]
7101ad3bd8  strb w11,[x0, #0x140]
7101ad3bdc  stp x9,x10,[x0, #0x130]
7101ad3be0  sub x0,x29,#0x100
7101ad3be4  mov x1,x23
7101ad3be8  mov w20,w2
7101ad3bec  mov w25,#0x9dc5
7101ad3bf0  movk w25,#0x811c, LSL #16
7101ad3bf4  sub x21,x29,#0x100
7101ad3bf8  bl 0x710338bbe0
7101ad3bfc  ldurb w9,[x29, #-0x100]
7101ad3c00  add x8,x19,#0x148
7101ad3c04  cmp x8,x21
7101ad3c08  strb w9,[x19, #0x148]
7101ad3c0c  b.eq 0x7101ad3d1c
7101ad3c10  mov x8,xzr
7101ad3c14  add x9,x21,#0xc
7101ad3c18  b 0x7101ad3c24
7101ad3c1c  add x8,x8,#0x2
7101ad3c20  strb w10,[x11, #0x155]
7101ad3c24  add x10,x9,x8
7101ad3c28  ldrb w12,[x10]
7101ad3c2c  cbz w12,0x7101ad3c58
7101ad3c30  add w13,w8,#0x1
7101ad3c34  add x11,x19,x8
7101ad3c38  cmp w13,#0x3f
7101ad3c3c  strb w12,[x11, #0x154]
7101ad3c40  b.cs 0x7101ad3c54
7101ad3c44  ldrb w10,[x10, #0x1]
7101ad3c48  cbnz w10,0x7101ad3c1c
7101ad3c4c  add x8,x8,#0x1
7101ad3c50  b 0x7101ad3c58
7101ad3c54  add w8,w8,#0x1
7101ad3c58  add x9,x19,#0x154
7101ad3c5c  strb wzr,[x9, w8, UXTW ]
7101ad3c60  str w8,[x19, #0x150]
7101ad3c64  ldrb w8,[x19, #0x154]
7101ad3c68  mov w10,w25
7101ad3c6c  cbz w8,0x7101ad3c90
7101ad3c70  add x9,x19,#0x155
7101ad3c74  mov w11,#0x89
7101ad3c78  mov w10,w25
7101ad3c7c  mul w10,w10,w11
7101ad3c80  and w8,w8,#0xff
7101ad3c84  eor w10,w10,w8
7101ad3c88  ldrb w8,[x9], #0x1
7101ad3c8c  cbnz w8,0x7101ad3c7c
7101ad3c90  sub x9,x29,#0x100
7101ad3c94  mov x8,xzr
7101ad3c98  str w10,[x19, #0x14c]
7101ad3c9c  add x9,x9,#0x54
7101ad3ca0  b 0x7101ad3cac
7101ad3ca4  add x8,x8,#0x2
7101ad3ca8  strb w10,[x11, #0x19d]
7101ad3cac  add x10,x9,x8
7101ad3cb0  ldrb w12,[x10]
7101ad3cb4  cbz w12,0x7101ad3ce0
7101ad3cb8  add w13,w8,#0x1
7101ad3cbc  add x11,x19,x8
7101ad3cc0  cmp w13,#0x3f
7101ad3cc4  strb w12,[x11, #0x19c]
7101ad3cc8  b.cs 0x7101ad3cdc
7101ad3ccc  ldrb w10,[x10, #0x1]
7101ad3cd0  cbnz w10,0x7101ad3ca4
7101ad3cd4  add x8,x8,#0x1
7101ad3cd8  b 0x7101ad3ce0
7101ad3cdc  add w8,w8,#0x1
7101ad3ce0  add x9,x19,#0x19c
7101ad3ce4  strb wzr,[x9, w8, UXTW ]
7101ad3ce8  str w8,[x19, #0x198]
7101ad3cec  ldrb w8,[x19, #0x19c]
7101ad3cf0  mov w10,w25
7101ad3cf4  cbz w8,0x7101ad3d18
7101ad3cf8  add x9,x19,#0x19d
7101ad3cfc  mov w11,#0x89
7101ad3d00  mov w10,w25
7101ad3d04  mul w10,w10,w11
7101ad3d08  and w8,w8,#0xff
7101ad3d0c  eor w10,w10,w8
7101ad3d10  ldrb w8,[x9], #0x1
7101ad3d14  cbnz w8,0x7101ad3d04
7101ad3d18  str w10,[x19, #0x194]
7101ad3d1c  ldr x0,[x19, #0x108]
7101ad3d20  fmov s0,0x3f800000
7101ad3d24  adrp x1,0x7104308000
7101ad3d28  add x1,x1,#0xac3
7101ad3d2c  str w20,[x19, #0x1dc]
7101ad3d30  add x28,x19,#0x100
7101ad3d34  bl 0x7103778300
7101ad3d38  ldr x0,[x19, #0x108]
7101ad3d3c  adrp x1,0x710428f000
7101ad3d40  add x1,x1,#0xf7d
7101ad3d44  bl 0x7103778760
7101ad3d48  ldrb w8,[x19, #0x120]
7101ad3d4c  cmp w8,#0x5
7101ad3d50  b.ne 0x7101ad3d74
7101ad3d54  adrp x8,0x710532f000
7101ad3d58  ldr x8,[x8, #0x730]
7101ad3d5c  ldr x8,[x8, #0x8]
7101ad3d60  ldr x8,[x8, #0x318]
7101ad3d64  ldr x1,[x19, #0x128]
7101ad3d68  ldr x0,[x8, #0x8]
7101ad3d6c  bl 0x710327d930
7101ad3d70  b 0x7101ad3d7c
7101ad3d74  mov x0,#0xff0000000000
7101ad3d78  movk x0,#0x2dff, LSL #48
7101ad3d7c  bl 0x710338b490
7101ad3d80  cmp w0,#0x1
7101ad3d84  ldr x0,[x19, #0x238]
7101ad3d88  cset w8,eq
7101ad3d8c  strb w8,[x19, #0x253]
7101ad3d90  adrp x8,0x7105314000
7101ad3d94  ldr x8,[x8, #0x510]
7101ad3d98  ldr x8,[x8]
7101ad3d9c  ldr x8,[x8, #0x1b8]
7101ad3da0  ldr x8,[x8]
7101ad3da4  ldr x8,[x8]
7101ad3da8  ldr w3,[x8]
7101ad3dac  ldr w8,[x0, #0x94]
7101ad3db0  cmp w8,w3
7101ad3db4  b.eq 0x7101ad3dc8
7101ad3db8  add x1,x0,#0x18
7101ad3dbc  mov w2,#0x1
7101ad3dc0  str w3,[x0, #0x94]
7101ad3dc4  bl 0x710377a280
7101ad3dc8  mov x0,x19
7101ad3dcc  bl 0x7101ad36e0
7101ad3dd0  adrp x1,0x710439d000
7101ad3dd4  add x1,x1,#0x881
7101ad3dd8  add x8,sp,#0x230
7101ad3ddc  mov x0,x28
7101ad3de0  bl 0x7103776640
7101ad3de4  ldr x0,[x19, #0xf8]
7101ad3de8  add x2,sp,#0x230
7101ad3dec  mov x1,x22
7101ad3df0  bl 0x710338fff0
7101ad3df4  mov w8,#0x1
7101ad3df8  sub x0,x29,#0x100
7101ad3dfc  mov x1,x22
7101ad3e00  strb w8,[x19, #0x254]
7101ad3e04  bl 0x710338d030
7101ad3e08  mov x10,#0x616e
7101ad3e0c  movk x10,#0x5f6d, LSL #16
7101ad3e10  mov x8,#0x1300000000
7101ad3e14  add x9,sp,#0x1e8
7101ad3e18  movk x10,#0x6f67, LSL #32
7101ad3e1c  movk x10,#0x646f, LSL #48
7101ad3e20  stp x8,x10,[sp, #0x1e8]
7101ad3e24  add x21,x9,#0x8
7101ad3e28  add x8,x9,#0x9
7101ad3e2c  mov x9,#0x5f73
7101ad3e30  movk x9,#0x6163, LSL #16
7101ad3e34  movk x9,#0x6574, LSL #32
7101ad3e38  movk x9,#0x6f67, LSL #48
7101ad3e3c  str x9,[sp, #0x1f8]
7101ad3e40  mov w9,#0x7972
7101ad3e44  movk w9,#0x5f, LSL #16
7101ad3e48  str w9,[sp, #0x200]
7101ad3e4c  mov w9,#0x6e
7101ad3e50  mov w27,#0x89
7101ad3e54  mov w10,w25
7101ad3e58  mul w10,w10,w27
7101ad3e5c  and w9,w9,#0xff
7101ad3e60  eor w10,w10,w9
7101ad3e64  ldrb w9,[x8], #0x1
7101ad3e68  cbnz w9,0x7101ad3e58
7101ad3e6c  str w10,[sp, #0x1e8]
7101ad3e70  mov w8,#0x8
7101ad3e74  sub x9,x29,#0x100
7101ad3e78  add x10,sp,#0x1e8
7101ad3e7c  ldrb w11,[x9, x8, LSL ]
7101ad3e80  cbz w11,0x7101ad3ea8
7101ad3e84  ldrsw x12,[sp, #0x1ec]
7101ad3e88  add w13,w12,#0x1
7101ad3e8c  add x12,x10,x12
7101ad3e90  add x8,x8,#0x1
7101ad3e94  str w13,[sp, #0x1ec]
7101ad3e98  strb w11,[x12, #0x8]
7101ad3e9c  add w11,w8,#0xa
7101ad3ea0  cmp w11,#0x3e
7101ad3ea4  b.cc 0x7101ad3e7c
7101ad3ea8  ldrsw x8,[sp, #0x1ec]
7101ad3eac  add x9,sp,#0x1e8
7101ad3eb0  add x10,x9,#0x8
7101ad3eb4  strb wzr,[x10, x8, LSL ]
7101ad3eb8  ldrb w8,[sp, #0x1f0]
7101ad3ebc  mov w10,w25
7101ad3ec0  cbz w8,0x7101ad3ee0
7101ad3ec4  add x9,x9,#0x9
7101ad3ec8  mov w10,w25
7101ad3ecc  mul w10,w10,w27
7101ad3ed0  and w8,w8,#0xff
7101ad3ed4  eor w10,w10,w8
7101ad3ed8  ldrb w8,[x9], #0x1
7101ad3edc  cbnz w8,0x7101ad3ecc
7101ad3ee0  adrp x1,0x71042f6000
7101ad3ee4  add x1,x1,#0x4eb
7101ad3ee8  add x8,sp,#0x1d8
7101ad3eec  mov x0,x28
7101ad3ef0  str w10,[sp, #0x1e8]
7101ad3ef4  bl 0x7103776910
7101ad3ef8  add x0,sp,#0x1d8
7101ad3efc  mov x1,x21
7101ad3f00  bl 0x710377a120
7101ad3f04  add x8,sp,#0x148
7101ad3f08  add x9,x8,#0x8
7101ad3f0c  mov x21,#0x6e6d
7101ad3f10  movk x21,#0x5f75, LSL #16
7101ad3f14  mov x20,#0x625f
7101ad3f18  movk x20,#0x7975, LSL #16
7101ad3f1c  mov x24,#0x1400000000
7101ad3f20  stur x9,[x29, #-0x58]
7101ad3f24  strb wzr,[sp, #0x198]
7101ad3f28  movk x21,#0x6873, LSL #32
7101ad3f2c  movk x21,#0x706f, LSL #48
7101ad3f30  str xzr,[sp, #0x190]
7101ad3f34  add x8,x8,#0x9
7101ad3f38  movk x20,#0x675f, LSL #32
7101ad3f3c  movk x20,#0x7465, LSL #48
7101ad3f40  mov w26,#0x625f
7101ad3f44  movk w26,#0x6e74, LSL #16
7101ad3f48  str x20,[sp, #0x158]
7101ad3f4c  mov w9,#0x6d
7101ad3f50  stp x24,x21,[sp, #0x148]
7101ad3f54  mov w10,w25
7101ad3f58  str w26,[sp, #0x160]
7101ad3f5c  strb wzr,[sp, #0x164]
7101ad3f60  mul w10,w10,w27
7101ad3f64  and w9,w9,#0xff
7101ad3f68  eor w10,w10,w9
7101ad3f6c  ldrb w9,[x8], #0x1
7101ad3f70  cbnz w9,0x7101ad3f60
7101ad3f74  adrp x1,0x71043cf000
7101ad3f78  add x1,x1,#0x6c9
7101ad3f7c  add x8,sp,#0x100
7101ad3f80  mov x0,x28
7101ad3f84  str w10,[sp, #0x148]
7101ad3f88  bl 0x7103776910
7101ad3f8c  ldr x0,[sp, #0x108]
7101ad3f90  ldr x8,[x0]
7101ad3f94  cbz x8,0x7101ad3fa4
7101ad3f98  ldrb w9,[x8, #0x58]
7101ad3f9c  orr w9,w9,#0x1
7101ad3fa0  strb w9,[x8, #0x58]
7101ad3fa4  adrp x8,0x710523d000
7101ad3fa8  add x8,x8,#0x9a8
7101ad3fac  stp x8,xzr,[sp, #0x100]
7101ad3fb0  cbz x0,0x7101ad3fb8
7101ad3fb4  bl 0x710392eb40
7101ad3fb8  ldrb w8,[x22, #0x8]
7101ad3fbc  cmp w8,#0x5
7101ad3fc0  b.hi 0x7101ad54ec
7101ad3fc4  adrp x9,0x71044f8000
7101ad3fc8  add x9,x9,#0x344
7101ad3fcc  ldrsw x8,[x9, x8, LSL #0x2]
7101ad3fd0  add x8,x8,x9
7101ad3fd4  br x8
7101ad3fd8  adrp x1,0x710435b000
7101ad3fdc  add x1,x1,#0x196
7101ad3fe0  add x0,sp,#0x190
7101ad3fe4  bl 0x710062dc20
7101ad3fe8  mov w25,#0x1
7101ad3fec  mov w24,#0x1
7101ad3ff0  strb wzr,[sp, #0x108]
7101ad3ff4  str xzr,[sp, #0x100]
7101ad3ff8  b 0x7101ad4130
7101ad3ffc  adrp x1,0x7104421000
7101ad4000  add x1,x1,#0xe20
7101ad4004  add x0,sp,#0x190
7101ad4008  bl 0x710062dc20
7101ad400c  mov x0,x22
7101ad4010  bl 0x7101780950
7101ad4014  lsr x8,x0,#0x38
7101ad4018  cmp x8,#0x2d
7101ad401c  b.eq 0x7101ad4258
7101ad4020  mov w23,wzr
7101ad4024  b 0x7101ad4390
7101ad4028  adrp x1,0x71043df000
7101ad402c  add x1,x1,#0xc0b
7101ad4030  add x0,sp,#0x190
7101ad4034  str x28,[sp, #0x8]
7101ad4038  bl 0x710062dc20
7101ad403c  adrp x8,0x710532f000
7101ad4040  ldr x8,[x8, #0x730]
7101ad4044  ldr x27,[x8, #0x8]
7101ad4048  ldr x2,[x22, #0x10]
7101ad404c  add x1,x27,#0x240
7101ad4050  add x0,sp,#0x100
7101ad4054  bl 0x7103284fe0
7101ad4058  ldp x22,x28,[sp, #0x100]
7101ad405c  cmp x22,x28
7101ad4060  b.eq 0x7101ad4664
7101ad4064  mov x21,#0x8f7d
7101ad4068  movk x21,#0x4697, LSL #16
7101ad406c  mov x26,#0xece
7101ad4070  movk x26,#0x9be3, LSL #16
7101ad4074  mov x20,#0x8f7e
7101ad4078  movk x20,#0x4697, LSL #16
7101ad407c  mov w23,wzr
7101ad4080  mov w25,wzr
7101ad4084  mov w24,wzr
7101ad4088  movk x21,#0xb, LSL #32
7101ad408c  movk x26,#0x7, LSL #32
7101ad4090  movk x20,#0xb, LSL #32
7101ad4094  ldr x1,[x22]
7101ad4098  ldr x0,[x27, #0x248]
7101ad409c  bl 0x7103282890
7101ad40a0  and x8,x0,#0xffffffffff
7101ad40a4  cmp x8,x21
7101ad40a8  b.gt 0x7101ad40d0
7101ad40ac  cmp x8,x26
7101ad40b0  b.eq 0x7101ad40f4
7101ad40b4  mov x9,#0x4b32
7101ad40b8  movk x9,#0x3698, LSL #16
7101ad40bc  movk x9,#0xa, LSL #32
7101ad40c0  cmp x8,x9
7101ad40c4  b.ne 0x7101ad40f4
7101ad40c8  mov w24,#0x1
7101ad40cc  b 0x7101ad4100
7101ad40d0  cmp x8,x20
7101ad40d4  b.eq 0x7101ad40fc
7101ad40d8  mov x9,#0xb829
7101ad40dc  movk x9,#0x47a2, LSL #16
7101ad40e0  movk x9,#0xd, LSL #32
7101ad40e4  cmp x8,x9
7101ad40e8  b.ne 0x7101ad40f4
7101ad40ec  mov w25,#0x1
7101ad40f0  b 0x7101ad4100
7101ad40f4  mov w24,#0x1
7101ad40f8  mov w25,#0x1
7101ad40fc  mov w23,#0x1
7101ad4100  add x22,x22,#0x8
7101ad4104  cmp x28,x22
7101ad4108  b.ne 0x7101ad4094
7101ad410c  ldr x22,[sp, #0x100]
7101ad4110  ldr x28,[sp, #0x8]
7101ad4114  cbz x22,0x7101ad4124
7101ad4118  mov x0,x22
7101ad411c  str x22,[sp, #0x108]
7101ad4120  bl 0x710392eb40
7101ad4124  strb wzr,[sp, #0x108]
7101ad4128  str xzr,[sp, #0x100]
7101ad412c  tbz w23,#0x0,0x7101ad4598
7101ad4130  adrp x2,0x7104349000
7101ad4134  add x2,x2,#0xe53
7101ad4138  b 0x7101ad45a0
7101ad413c  adrp x1,0x7104319000
7101ad4140  add x1,x1,#0x12f
7101ad4144  add x0,sp,#0x190
7101ad4148  mov x21,x28
7101ad414c  bl 0x710062dc20
7101ad4150  adrp x8,0x710532f000
7101ad4154  ldr x8,[x8, #0x730]
7101ad4158  ldr x28,[x8, #0x8]
7101ad415c  ldr x23,[x28, #0x1d8]
7101ad4160  ldr x1,[x19, #0x128]
7101ad4164  mov x0,x23
7101ad4168  bl 0x71032a7800
7101ad416c  ldp x8,x9,[x23, #0x20]
7101ad4170  sub x9,x9,x8
7101ad4174  orr x10,xzr,#-0x3333333333333334
7101ad4178  movk x10,#0xcccd
7101ad417c  asr x9,x9,#0x6
7101ad4180  mul x9,x9,x10
7101ad4184  cmp w0,w9
7101ad4188  b.cs 0x7101ad4658
7101ad418c  mov w10,#0x140
7101ad4190  umull x10,w0,w10
7101ad4194  orr w22,wzr,#0xffff
7101ad4198  ldrh w11,[x8, x10, LSL #0x0]
7101ad419c  cmp x11,x22
7101ad41a0  b.eq 0x7101ad48ac
7101ad41a4  add x10,x23,w11, SXTH  #0x1
7101ad41a8  ldrh w10,[x10, #0x60]
7101ad41ac  mov x22,x11
7101ad41b0  b 0x7101ad48b0
7101ad41b4  ldrb w8,[x19, #0x253]
7101ad41b8  cbz w8,0x7101ad467c
7101ad41bc  mov w9,#0x6f5f
7101ad41c0  orr x8,xzr,#0x1800000000
7101ad41c4  add x10,sp,#0xb8
7101ad41c8  strh w9,[sp, #0x118]
7101ad41cc  mov w9,#0x656e
7101ad41d0  movk w9,#0x625f, LSL #16
7101ad41d4  stp x8,x21,[sp, #0x100]
7101ad41d8  add x8,sp,#0x100
7101ad41dc  str x20,[sp, #0x110]
7101ad41e0  stur w9,[x10, #0x62]
7101ad41e4  mov w9,#0x6e74
7101ad41e8  add x8,x8,#0x9
7101ad41ec  strh w9,[sp, #0x11e]
7101ad41f0  mov w9,#0x6d
7101ad41f4  mov w10,w25
7101ad41f8  strb wzr,[sp, #0x120]
7101ad41fc  mul w10,w10,w27
7101ad4200  and w9,w9,#0xff
7101ad4204  eor w10,w10,w9
7101ad4208  ldrb w9,[x8], #0x1
7101ad420c  cbnz w9,0x7101ad41fc
7101ad4210  str w10,[sp, #0x100]
7101ad4214  add x9,sp,#0x100
7101ad4218  add x10,sp,#0x148
7101ad421c  mov x8,xzr
7101ad4220  add x9,x9,#0x9
7101ad4224  add x10,x10,#0x8
7101ad4228  mov w12,#0x6d
7101ad422c  adrp x22,0x710523d000
7101ad4230  add x22,x22,#0x9a8
7101ad4234  add w11,w8,#0x1
7101ad4238  cmp w11,#0x3e
7101ad423c  strb w12,[x10, x8, LSL ]
7101ad4240  b.hi 0x7101ad4740
7101ad4244  ldrb w12,[x9, x8, LSL ]
7101ad4248  add x11,x8,#0x1
7101ad424c  mov x8,x11
7101ad4250  cbnz w12,0x7101ad4234
7101ad4254  b 0x7101ad4744
7101ad4258  mov x24,x0
7101ad425c  mov w23,wzr
7101ad4260  and x8,x0,#0xffffffffff
7101ad4264  cbz x8,0x7101ad4390
7101ad4268  mov x9,#0x81c5
7101ad426c  movk x9,#0x89ae, LSL #16
7101ad4270  movk x9,#0xe, LSL #32
7101ad4274  cmp x8,x9
7101ad4278  adrp x21,0x710523d000
7101ad427c  add x21,x21,#0x9a8
7101ad4280  b.eq 0x7101ad4398
7101ad4284  ldr x0,[x19, #0xf8]
7101ad4288  mov w2,#0x11
7101ad428c  mov x1,x24
7101ad4290  bl 0x710323f600
7101ad4294  mov x23,x0
7101ad4298  ldr x0,[x19, #0xf8]
7101ad429c  mov w2,#0x12
7101ad42a0  mov x1,x24
7101ad42a4  bl 0x710323f600
7101ad42a8  mov x24,x0
7101ad42ac  adrp x1,0x71042d4000
7101ad42b0  add x1,x1,#0x25c
7101ad42b4  add x8,sp,#0x100
7101ad42b8  mov x0,x28
7101ad42bc  bl 0x7103776910
7101ad42c0  ldr x25,[sp, #0x108]
7101ad42c4  mov x0,x25
7101ad42c8  mov x1,x24
7101ad42cc  bl 0x7103778b80
7101ad42d0  stp x21,xzr,[sp, #0x100]
7101ad42d4  cbz x25,0x7101ad42e0
7101ad42d8  mov x0,x25
7101ad42dc  bl 0x710392eb40
7101ad42e0  adrp x1,0x710439d000
7101ad42e4  add x1,x1,#0x86e
7101ad42e8  add x8,sp,#0x100
7101ad42ec  mov x0,x28
7101ad42f0  bl 0x7103776910
7101ad42f4  ldr x25,[sp, #0x108]
7101ad42f8  mov x0,x25
7101ad42fc  mov x1,x24
7101ad4300  bl 0x7103778b80
7101ad4304  stp x21,xzr,[sp, #0x100]
7101ad4308  cbz x25,0x7101ad4314
7101ad430c  mov x0,x25
7101ad4310  bl 0x710392eb40
7101ad4314  adrp x1,0x71042f6000
7101ad4318  add x1,x1,#0x4fc
7101ad431c  add x8,sp,#0xb8
7101ad4320  mov x0,x28
7101ad4324  bl 0x7103776640
7101ad4328  adrp x1,0x71042a1000
7101ad432c  add x1,x1,#0xaf1
7101ad4330  add x8,sp,#0x100
7101ad4334  add x0,sp,#0xb8
7101ad4338  bl 0x7103776910
7101ad433c  ldr x24,[sp, #0x108]
7101ad4340  mov x0,x24
7101ad4344  mov x1,x23
7101ad4348  bl 0x7103778b80
7101ad434c  stp x21,xzr,[sp, #0x100]
7101ad4350  cbz x24,0x7101ad435c
7101ad4354  mov x0,x24
7101ad4358  bl 0x710392eb40
7101ad435c  ldr x23,[sp, #0xc0]
7101ad4360  adrp x8,0x710523d000
7101ad4364  add x8,x8,#0x988
7101ad4368  stp x8,xzr,[sp, #0xb8]
7101ad436c  cbz x23,0x7101ad4388
7101ad4370  ldr x0,[x23, #0x18]
7101ad4374  stp x21,xzr,[x23, #0x10]
7101ad4378  cbz x0,0x7101ad4380
7101ad437c  bl 0x710392eb40
7101ad4380  mov x0,x23
7101ad4384  bl 0x710392eb40
7101ad4388  mov w23,#0x1
7101ad438c  b 0x7101ad4398
7101ad4390  adrp x21,0x710523d000
7101ad4394  add x21,x21,#0x9a8
7101ad4398  adrp x1,0x71042d4000
7101ad439c  add x1,x1,#0x25c
7101ad43a0  add x8,sp,#0x100
7101ad43a4  mov x0,x28
7101ad43a8  bl 0x7103776910
7101ad43ac  ldr x0,[sp, #0x108]
7101ad43b0  ldr x8,[x0]
7101ad43b4  cbz x8,0x7101ad43c8
7101ad43b8  ldrb w9,[x8, #0x58]
7101ad43bc  and w9,w9,#0xfe
7101ad43c0  orr w9,w9,w23
7101ad43c4  strb w9,[x8, #0x58]
7101ad43c8  stp x21,xzr,[sp, #0x100]
7101ad43cc  cbz x0,0x7101ad43d4
7101ad43d0  bl 0x710392eb40
7101ad43d4  adrp x1,0x710439d000
7101ad43d8  add x1,x1,#0x86e
7101ad43dc  add x8,sp,#0x100
7101ad43e0  mov x0,x28
7101ad43e4  bl 0x7103776910
7101ad43e8  ldr x0,[sp, #0x108]
7101ad43ec  ldr x8,[x0]
7101ad43f0  cbz x8,0x7101ad4404
7101ad43f4  ldrb w9,[x8, #0x58]
7101ad43f8  and w9,w9,#0xfe
7101ad43fc  orr w9,w9,w23
7101ad4400  strb w9,[x8, #0x58]
7101ad4404  stp x21,xzr,[sp, #0x100]
7101ad4408  cbz x0,0x7101ad4410
7101ad440c  bl 0x710392eb40
7101ad4410  adrp x1,0x71042f6000
7101ad4414  add x1,x1,#0x4fc
7101ad4418  add x8,sp,#0xb8
7101ad441c  mov x0,x28
7101ad4420  bl 0x7103776640
7101ad4424  adrp x1,0x71042a1000
7101ad4428  add x1,x1,#0xaf1
7101ad442c  add x8,sp,#0x100
7101ad4430  add x0,sp,#0xb8
7101ad4434  bl 0x7103776910
7101ad4438  ldr x0,[sp, #0x108]
7101ad443c  ldr x8,[x0]
7101ad4440  cbz x8,0x7101ad4454
7101ad4444  ldrb w9,[x8, #0x58]
7101ad4448  and w9,w9,#0xfe
7101ad444c  orr w9,w9,w23
7101ad4450  strb w9,[x8, #0x58]
7101ad4454  stp x21,xzr,[sp, #0x100]
7101ad4458  cbz x0,0x7101ad4460
7101ad445c  bl 0x710392eb40
7101ad4460  ldr x23,[sp, #0xc0]
7101ad4464  adrp x25,0x710523d000
7101ad4468  add x25,x25,#0x988
7101ad446c  stp x25,xzr,[sp, #0xb8]
7101ad4470  cbz x23,0x7101ad448c
7101ad4474  ldr x0,[x23, #0x18]
7101ad4478  stp x21,xzr,[x23, #0x10]
7101ad447c  cbz x0,0x7101ad4484
7101ad4480  bl 0x710392eb40
7101ad4484  mov x0,x23
7101ad4488  bl 0x710392eb40
7101ad448c  adrp x20,0x710532f000
7101ad4490  ldr x8,[x20, #0x730]
7101ad4494  ldrb w9,[x22, #0x8]
7101ad4498  cmp w9,#0x3
7101ad449c  ldr x8,[x8, #0x8]
7101ad44a0  b.ne 0x7101ad44c0
7101ad44a4  ldr x23,[x8, #0x278]
7101ad44a8  ldr x1,[x22, #0x10]
7101ad44ac  add x27,x8,#0x278
7101ad44b0  mov x0,x23
7101ad44b4  bl 0x71032575c0
7101ad44b8  mov x22,x0
7101ad44bc  b 0x7101ad44d0
7101ad44c0  ldr x23,[x8, #0x278]
7101ad44c4  mov x22,#0xff0000000000
7101ad44c8  add x27,x8,#0x278
7101ad44cc  movk x22,#0xd9ff, LSL #48
7101ad44d0  mov x0,x23
7101ad44d4  mov x1,x22
7101ad44d8  bl 0x710325dd40
7101ad44dc  ldr x8,[x20, #0x730]
7101ad44e0  ldr x8,[x8, #0x8]
7101ad44e4  mov x23,x0
7101ad44e8  adrp x1,0x71042f6000
7101ad44ec  add x1,x1,#0x4fc
7101ad44f0  mov x0,x28
7101ad44f4  add x24,x8,#0x2b0
7101ad44f8  add x8,sp,#0x70
7101ad44fc  bl 0x7103776640
7101ad4500  adrp x1,0x7104338000
7101ad4504  add x1,x1,#0xd31
7101ad4508  add x8,sp,#0xb8
7101ad450c  add x0,sp,#0x70
7101ad4510  bl 0x7103776910
7101ad4514  add x0,sp,#0x100
7101ad4518  mov x1,x24
7101ad451c  mov x2,x23
7101ad4520  add x20,sp,#0x100
7101ad4524  bl 0x710327c2f0
7101ad4528  add x1,x20,#0x8
7101ad452c  add x0,sp,#0xb8
7101ad4530  bl 0x710377a120
7101ad4534  ldr x0,[sp, #0xc0]
7101ad4538  stp x21,xzr,[sp, #0xb8]
7101ad453c  cbz x0,0x7101ad4544
7101ad4540  bl 0x710392eb40
7101ad4544  ldr x23,[sp, #0x78]
7101ad4548  stp x25,xzr,[sp, #0x70]
7101ad454c  cbz x23,0x7101ad4568
7101ad4550  ldr x0,[x23, #0x18]
7101ad4554  stp x21,xzr,[x23, #0x10]
7101ad4558  cbz x0,0x7101ad4560
7101ad455c  bl 0x710392eb40
7101ad4560  mov x0,x23
7101ad4564  bl 0x710392eb40
7101ad4568  ldr x0,[x27]
7101ad456c  mov x1,x22
7101ad4570  bl 0x710325d9e0
7101ad4574  cmp w0,#0x2
7101ad4578  strb wzr,[sp, #0x108]
7101ad457c  str xzr,[sp, #0x100]
7101ad4580  b.eq 0x7101ad46f8
7101ad4584  cmp w0,#0x3
7101ad4588  b.ne 0x7101ad4704
7101ad458c  adrp x1,0x710439c000
7101ad4590  add x1,x1,#0xf53
7101ad4594  b 0x7101ad470c
7101ad4598  adrp x2,0x7104454000
7101ad459c  add x2,x2,#0x581
7101ad45a0  adrp x22,0x71042a2000
7101ad45a4  add x22,x22,#0xae
7101ad45a8  add x0,sp,#0x100
7101ad45ac  mov x1,x22
7101ad45b0  add x20,sp,#0x100
7101ad45b4  bl 0x710062dc20
7101ad45b8  fmov s8,0x3f800000
7101ad45bc  ldr x0,[x19, #0x108]
7101ad45c0  mov v0.16B,v8.16B
7101ad45c4  add x1,x20,#0x8
7101ad45c8  bl 0x7103778300
7101ad45cc  adrp x8,0x7104349000
7101ad45d0  add x8,x8,#0xe6a
7101ad45d4  adrp x10,0x7104329000
7101ad45d8  add x10,x10,#0xb44
7101ad45dc  tst w25,#0x1
7101ad45e0  strb wzr,[sp, #0xc0]
7101ad45e4  add x9,sp,#0xb8
7101ad45e8  csel x2,x10,x8,ne
7101ad45ec  str xzr,[sp, #0xb8]
7101ad45f0  add x0,sp,#0xb8
7101ad45f4  mov x1,x22
7101ad45f8  add x23,x9,#0x8
7101ad45fc  bl 0x710062dc20
7101ad4600  ldr x0,[x19, #0x108]
7101ad4604  mov v0.16B,v8.16B
7101ad4608  mov x1,x23
7101ad460c  bl 0x7103778300
7101ad4610  adrp x8,0x7104421000
7101ad4614  add x8,x8,#0xe0a
7101ad4618  adrp x10,0x71043df000
7101ad461c  add x10,x10,#0xc1d
7101ad4620  tst w24,#0x1
7101ad4624  strb wzr,[sp, #0x78]
7101ad4628  add x9,sp,#0x70
7101ad462c  csel x2,x10,x8,ne
7101ad4630  str xzr,[sp, #0x70]
7101ad4634  add x0,sp,#0x70
7101ad4638  mov x1,x22
7101ad463c  add x23,x9,#0x8
7101ad4640  bl 0x710062dc20
7101ad4644  ldr x0,[x19, #0x108]
7101ad4648  mov v0.16B,v8.16B
7101ad464c  mov x1,x23
7101ad4650  bl 0x7103778300
7101ad4654  b 0x7101ad54ec
7101ad4658  mov w10,#0xffffffff
7101ad465c  orr w22,wzr,#0xffff
7101ad4660  b 0x7101ad48b0
7101ad4664  mov w24,wzr
7101ad4668  mov w25,wzr
7101ad466c  mov w23,wzr
7101ad4670  ldr x28,[sp, #0x8]
7101ad4674  cbnz x22,0x7101ad4118
7101ad4678  b 0x7101ad4124
7101ad467c  add x8,sp,#0x100
7101ad4680  add x8,x8,#0x9
7101ad4684  mov w9,#0x6d
7101ad4688  mov w10,w25
7101ad468c  stp x24,x21,[sp, #0x100]
7101ad4690  str x20,[sp, #0x110]
7101ad4694  str w26,[sp, #0x118]
7101ad4698  strb wzr,[sp, #0x11c]
7101ad469c  mul w10,w10,w27
7101ad46a0  and w9,w9,#0xff
7101ad46a4  eor w10,w10,w9
7101ad46a8  ldrb w9,[x8], #0x1
7101ad46ac  cbnz w9,0x7101ad469c
7101ad46b0  str w10,[sp, #0x100]
7101ad46b4  add x9,sp,#0x100
7101ad46b8  add x10,sp,#0x148
7101ad46bc  mov x8,xzr
7101ad46c0  add x9,x9,#0x9
7101ad46c4  add x10,x10,#0x8
7101ad46c8  mov w12,#0x6d
7101ad46cc  adrp x22,0x710523d000
7101ad46d0  add x22,x22,#0x9a8
7101ad46d4  add w11,w8,#0x1
7101ad46d8  cmp w11,#0x3e
7101ad46dc  strb w12,[x10, x8, LSL ]
7101ad46e0  b.hi 0x7101ad4778
7101ad46e4  ldrb w12,[x9, x8, LSL ]
7101ad46e8  add x11,x8,#0x1
7101ad46ec  mov x8,x11
7101ad46f0  cbnz w12,0x7101ad46d4
7101ad46f4  b 0x7101ad477c
7101ad46f8  adrp x1,0x710426f000
7101ad46fc  add x1,x1,#0xb32
7101ad4700  b 0x7101ad470c
7101ad4704  adrp x1,0x71042f7000
7101ad4708  add x1,x1,#0xdd7
7101ad470c  add x0,sp,#0x100
7101ad4710  bl 0x710062dc20
7101ad4714  ldr x0,[x19, #0x108]
7101ad4718  fmov s0,0x3f800000
7101ad471c  add x8,sp,#0x100
7101ad4720  add x1,x8,#0x8
7101ad4724  bl 0x7103778300
7101ad4728  adrp x8,0x710532f000
7101ad472c  ldr x0,[x8, #0x8d0]
7101ad4730  mov w2,#0x1
7101ad4734  mov x1,x22
7101ad4738  bl 0x71033145d0
7101ad473c  b 0x7101ad54ec
7101ad4740  add w11,w8,#0x1
7101ad4744  add x8,sp,#0x148
7101ad4748  add x9,x8,#0x8
7101ad474c  strb wzr,[x9, w11, UXTW ]
7101ad4750  ldrb w9,[sp, #0x150]
7101ad4754  str w11,[sp, #0x14c]
7101ad4758  cbz w9,0x7101ad47ac
7101ad475c  add x8,x8,#0x9
7101ad4760  mul w10,w25,w27
7101ad4764  and w9,w9,#0xff
7101ad4768  eor w25,w10,w9
7101ad476c  ldrb w9,[x8], #0x1
7101ad4770  cbnz w9,0x7101ad4760
7101ad4774  b 0x7101ad47ac
7101ad4778  add w11,w8,#0x1
7101ad477c  add x8,sp,#0x148
7101ad4780  add x9,x8,#0x8
7101ad4784  strb wzr,[x9, w11, UXTW ]
7101ad4788  ldrb w9,[sp, #0x150]
7101ad478c  str w11,[sp, #0x14c]
7101ad4790  cbz w9,0x7101ad47ac
7101ad4794  add x8,x8,#0x9
7101ad4798  mul w10,w25,w27
7101ad479c  and w9,w9,#0xff
7101ad47a0  eor w25,w10,w9
7101ad47a4  ldrb w9,[x8], #0x1
7101ad47a8  cbnz w9,0x7101ad4798
7101ad47ac  adrp x8,0x710532f000
7101ad47b0  ldr x8,[x8, #0x730]
7101ad47b4  str w25,[sp, #0x148]
7101ad47b8  ldr x8,[x8, #0x8]
7101ad47bc  ldr x8,[x8, #0x2f8]
7101ad47c0  ldr x0,[x8, #0x8]
7101ad47c4  ldr x21,[x19, #0x118]
7101ad47c8  mov x1,#0xf843
7101ad47cc  movk x1,#0x1c99, LSL #16
7101ad47d0  movk x1,#0x18, LSL #32
7101ad47d4  mov x20,#-0x3f00000000000000
7101ad47d8  bl 0x71032817a0
7101ad47dc  and x10,x21,#-0x100000000000000
7101ad47e0  and x9,x21,#0xffffffffff
7101ad47e4  and x8,x0,#0xffffffffff
7101ad47e8  cmp x10,x20
7101ad47ec  b.ne 0x7101ad4828
7101ad47f0  cbz x9,0x7101ad4828
7101ad47f4  and x11,x0,#-0x100000000000000
7101ad47f8  cmp x11,x20
7101ad47fc  ccmp x8,#0x0,#0x4,eq
7101ad4800  b.eq 0x7101ad482c
7101ad4804  eor x8,x0,x21
7101ad4808  tst x8,#0xffffffffff
7101ad480c  b.eq 0x7101ad4860
7101ad4810  mov x0,x23
7101ad4814  bl 0x7103390e60
7101ad4818  tbz w0,#0x0,0x7101ad486c
7101ad481c  adrp x1,0x71043f0000
7101ad4820  add x1,x1,#0xbfb
7101ad4824  b 0x7101ad4874
7101ad4828  and x11,x0,#-0x100000000000000
7101ad482c  cmp x10,x20
7101ad4830  cset w10,eq
7101ad4834  cmp x9,#0x0
7101ad4838  cset w9,ne
7101ad483c  cmp x8,#0x0
7101ad4840  cset w8,ne
7101ad4844  cmp x11,x20
7101ad4848  and w9,w10,w9
7101ad484c  cset w10,eq
7101ad4850  and w8,w8,w10
7101ad4854  eor w8,w8,w9
7101ad4858  cmp w8,#0x1
7101ad485c  b.eq 0x7101ad4810
7101ad4860  adrp x1,0x7104443000
7101ad4864  add x1,x1,#0x9a0
7101ad4868  b 0x7101ad4874
7101ad486c  adrp x1,0x7104443000
7101ad4870  add x1,x1,#0x9b0
7101ad4874  add x0,sp,#0x190
7101ad4878  bl 0x710062dc20
7101ad487c  adrp x1,0x71042e7000
7101ad4880  add x1,x1,#0x4b3
7101ad4884  add x8,sp,#0x100
7101ad4888  mov x0,x28
7101ad488c  bl 0x7103776910
7101ad4890  add x1,x19,#0x19c
7101ad4894  add x0,sp,#0x100
7101ad4898  bl 0x710377a120
7101ad489c  ldr x0,[sp, #0x108]
7101ad48a0  stp x22,xzr,[sp, #0x100]
7101ad48a4  cbnz x0,0x7101ad54e8
7101ad48a8  b 0x7101ad54ec
7101ad48ac  mov w10,#0xffffffff
7101ad48b0  mov w11,#0x140
7101ad48b4  madd x8,x10,x11,x8
7101ad48b8  adrp x12,0x7105182000
7101ad48bc  add x12,x12,#0xb08
7101ad48c0  cmp x9,x10
7101ad48c4  csel x24,x8,x12,hi
7101ad48c8  adrp x1,0x71042f5000
7101ad48cc  add x1,x1,#0xbc0
7101ad48d0  add x8,sp,#0x60
7101ad48d4  mov x0,x21
7101ad48d8  mov x20,x21
7101ad48dc  bl 0x7103776640
7101ad48e0  adrp x1,0x71042c5000
7101ad48e4  add x1,x1,#0x386
7101ad48e8  add x8,sp,#0x50
7101ad48ec  mov x0,x21
7101ad48f0  bl 0x7103776640
7101ad48f4  ldr x1,[x24, #0x60]
7101ad48f8  lsr x8,x1,#0x38
7101ad48fc  cmp x8,#0x2d
7101ad4900  adrp x26,0x710523d000
7101ad4904  add x26,x26,#0x9a8
7101ad4908  b.ne 0x7101ad4928
7101ad490c  and x8,x1,#0xffffffffff
7101ad4910  mov x9,#0x81c5
7101ad4914  movk x9,#0x89ae, LSL #16
7101ad4918  cmp x8,#0x0
7101ad491c  movk x9,#0xe, LSL #32
7101ad4920  ccmp x8,x9,#0x4,ne
7101ad4924  b.ne 0x7101ad4d04
7101ad4928  mov w23,wzr
7101ad492c  adrp x1,0x71042d4000
7101ad4930  add x1,x1,#0x25c
7101ad4934  add x8,sp,#0x100
7101ad4938  mov x0,x21
7101ad493c  bl 0x7103776910
7101ad4940  ldr x0,[sp, #0x108]
7101ad4944  ldr x8,[x0]
7101ad4948  cbz x8,0x7101ad495c
7101ad494c  ldrb w9,[x8, #0x58]
7101ad4950  and w9,w9,#0xfe
7101ad4954  orr w9,w9,w23
7101ad4958  strb w9,[x8, #0x58]
7101ad495c  stp x26,xzr,[sp, #0x100]
7101ad4960  cbz x0,0x7101ad4968
7101ad4964  bl 0x710392eb40
7101ad4968  adrp x1,0x710439d000
7101ad496c  add x1,x1,#0x86e
7101ad4970  add x8,sp,#0x100
7101ad4974  mov x0,x21
7101ad4978  bl 0x7103776910
7101ad497c  ldr x0,[sp, #0x108]
7101ad4980  ldr x8,[x0]
7101ad4984  cbz x8,0x7101ad4998
7101ad4988  ldrb w9,[x8, #0x58]
7101ad498c  and w9,w9,#0xfe
7101ad4990  orr w9,w9,w23
7101ad4994  strb w9,[x8, #0x58]
7101ad4998  stp x26,xzr,[sp, #0x100]
7101ad499c  cbz x0,0x7101ad49a4
7101ad49a0  bl 0x710392eb40
7101ad49a4  adrp x1,0x71042d4000
7101ad49a8  add x1,x1,#0x25c
7101ad49ac  add x8,sp,#0x100
7101ad49b0  add x0,sp,#0x50
7101ad49b4  bl 0x7103776910
7101ad49b8  ldr x0,[sp, #0x108]
7101ad49bc  ldr x8,[x0]
7101ad49c0  cbz x8,0x7101ad49d4
7101ad49c4  ldrb w9,[x8, #0x58]
7101ad49c8  and w9,w9,#0xfe
7101ad49cc  orr w9,w9,w23
7101ad49d0  strb w9,[x8, #0x58]
7101ad49d4  stp x26,xzr,[sp, #0x100]
7101ad49d8  cbz x0,0x7101ad49e0
7101ad49dc  bl 0x710392eb40
7101ad49e0  adrp x1,0x71042f5000
7101ad49e4  add x1,x1,#0xbb2
7101ad49e8  add x8,sp,#0x100
7101ad49ec  add x0,sp,#0x50
7101ad49f0  bl 0x7103776910
7101ad49f4  ldr x0,[sp, #0x108]
7101ad49f8  ldr x8,[x0]
7101ad49fc  cbz x8,0x7101ad4a10
7101ad4a00  ldrb w9,[x8, #0x58]
7101ad4a04  and w9,w9,#0xfe
7101ad4a08  orr w9,w9,w23
7101ad4a0c  strb w9,[x8, #0x58]
7101ad4a10  stp x26,xzr,[sp, #0x100]
7101ad4a14  cbz x0,0x7101ad4a1c
7101ad4a18  bl 0x710392eb40
7101ad4a1c  ldrb w8,[x24, #0x5e]
7101ad4a20  cmp w8,#0x3
7101ad4a24  b.eq 0x7101ad4c84
7101ad4a28  cmp w8,#0x1
7101ad4a2c  b.eq 0x7101ad4ad4
7101ad4a30  cbnz w8,0x7101ad5498
7101ad4a34  adrp x1,0x71042e7000
7101ad4a38  add x1,x1,#0x799
7101ad4a3c  add x8,sp,#0x40
7101ad4a40  mov x0,x21
7101ad4a44  mov x20,x21
7101ad4a48  bl 0x7103776640
7101ad4a4c  adrp x1,0x7104420000
7101ad4a50  add x1,x1,#0x13c
7101ad4a54  add x8,sp,#0x30
7101ad4a58  mov x0,x21
7101ad4a5c  bl 0x7103776640
7101ad4a60  adrp x1,0x71042b1000
7101ad4a64  add x1,x1,#0xeff
7101ad4a68  add x8,sp,#0x20
7101ad4a6c  mov x0,x21
7101ad4a70  bl 0x7103776640
7101ad4a74  adrp x1,0x7104327000
7101ad4a78  add x1,x1,#0xe94
7101ad4a7c  add x8,sp,#0x10
7101ad4a80  mov x0,x21
7101ad4a84  bl 0x7103776640
7101ad4a88  ldr x13,[sp, #0x28]
7101ad4a8c  ldrb w8,[x24, #0x5e]
7101ad4a90  ldr x9,[x13, #0x8]
7101ad4a94  cbz x9,0x7101ad4ab8
7101ad4a98  ldr x9,[x9, #0x18]
7101ad4a9c  cbz x9,0x7101ad4ab8
7101ad4aa0  ldrb w11,[x9, #0x58]
7101ad4aa4  cmp w8,#0x1
7101ad4aa8  cset w10,eq
7101ad4aac  and w11,w11,#0xfe
7101ad4ab0  orr w10,w11,w10
7101ad4ab4  strb w10,[x9, #0x58]
7101ad4ab8  cmp w8,#0x1
7101ad4abc  str x13,[sp, #0x8]
7101ad4ac0  b.ne 0x7101ad4dc0
7101ad4ac4  ldr x0,[x19, #0x108]
7101ad4ac8  adrp x1,0x710436a000
7101ad4acc  add x1,x1,#0x273
7101ad4ad0  b 0x7101ad4e60
7101ad4ad4  ldr x0,[x19, #0x108]
7101ad4ad8  fmov s0,0x3f800000
7101ad4adc  adrp x1,0x710432a000
7101ad4ae0  add x1,x1,#0x69e
7101ad4ae4  bl 0x7103778300
7101ad4ae8  adrp x8,0x710532f000
7101ad4aec  ldr x8,[x8, #0x730]
7101ad4af0  mov x23,x24
7101ad4af4  ldr x24,[x8, #0x8]
7101ad4af8  ldrh w2,[x23, #0x6a]
7101ad4afc  add x22,x24,#0x210
7101ad4b00  add x0,sp,#0x100
7101ad4b04  add x20,sp,#0x100
7101ad4b08  mov x1,x22
7101ad4b0c  bl 0x71032a0c90
7101ad4b10  ldrh w2,[x23, #0x6a]
7101ad4b14  add x0,sp,#0xb8
7101ad4b18  mov x1,x22
7101ad4b1c  mov x27,x23
7101ad4b20  bl 0x71032a0e30
7101ad4b24  adrp x1,0x71043cf000
7101ad4b28  add x1,x1,#0x954
7101ad4b2c  add x8,sp,#0x40
7101ad4b30  mov x0,x21
7101ad4b34  mov x22,x26
7101ad4b38  mov x26,x21
7101ad4b3c  bl 0x7103776640
7101ad4b40  adrp x1,0x7104338000
7101ad4b44  add x1,x1,#0xd31
7101ad4b48  add x8,sp,#0x70
7101ad4b4c  add x0,sp,#0x40
7101ad4b50  bl 0x7103776910
7101ad4b54  add x1,x20,#0x8
7101ad4b58  add x0,sp,#0x70
7101ad4b5c  bl 0x710377a120
7101ad4b60  ldr x0,[sp, #0x78]
7101ad4b64  stp x22,xzr,[sp, #0x70]
7101ad4b68  cbz x0,0x7101ad4b70
7101ad4b6c  bl 0x710392eb40
7101ad4b70  ldr x22,[sp, #0x48]
7101ad4b74  adrp x25,0x710523d000
7101ad4b78  add x25,x25,#0x988
7101ad4b7c  stp x25,xzr,[sp, #0x40]
7101ad4b80  cbz x22,0x7101ad4ba4
7101ad4b84  ldr x0,[x22, #0x18]
7101ad4b88  adrp x8,0x710523d000
7101ad4b8c  add x8,x8,#0x9a8
7101ad4b90  stp x8,xzr,[x22, #0x10]
7101ad4b94  cbz x0,0x7101ad4b9c
7101ad4b98  bl 0x710392eb40
7101ad4b9c  mov x0,x22
7101ad4ba0  bl 0x710392eb40
7101ad4ba4  adrp x1,0x7104411000
7101ad4ba8  add x1,x1,#0x1db
7101ad4bac  add x8,sp,#0x40
7101ad4bb0  mov x0,x26
7101ad4bb4  bl 0x7103776640
7101ad4bb8  adrp x1,0x710437a000
7101ad4bbc  add x1,x1,#0xe67
7101ad4bc0  add x8,sp,#0x70
7101ad4bc4  add x0,sp,#0x40
7101ad4bc8  bl 0x7103776910
7101ad4bcc  add x8,sp,#0xb8
7101ad4bd0  add x22,x8,#0x8
7101ad4bd4  add x0,sp,#0x70
7101ad4bd8  mov x1,x22
7101ad4bdc  bl 0x710377a120
7101ad4be0  ldr x0,[sp, #0x78]
7101ad4be4  adrp x8,0x710523d000
7101ad4be8  add x8,x8,#0x9a8
7101ad4bec  stp x8,xzr,[sp, #0x70]
7101ad4bf0  cbz x0,0x7101ad4bf8
7101ad4bf4  bl 0x710392eb40
7101ad4bf8  adrp x1,0x71042c3000
7101ad4bfc  add x1,x1,#0x645
7101ad4c00  add x8,sp,#0x70
7101ad4c04  add x0,sp,#0x40
7101ad4c08  bl 0x7103776910
7101ad4c0c  add x0,sp,#0x70
7101ad4c10  mov x1,x22
7101ad4c14  bl 0x710377a120
7101ad4c18  ldr x0,[sp, #0x78]
7101ad4c1c  adrp x8,0x710523d000
7101ad4c20  add x8,x8,#0x9a8
7101ad4c24  stp x8,xzr,[sp, #0x70]
7101ad4c28  cbz x0,0x7101ad4c30
7101ad4c2c  bl 0x710392eb40
7101ad4c30  ldr x8,[sp, #0x48]
7101ad4c34  ldr x8,[x8, #0x8]
7101ad4c38  cbz x8,0x7101ad52b4
7101ad4c3c  ldr x22,[x8, #0x78]
7101ad4c40  adrp x8,0x710593b000
7101ad4c44  add x8,x8,#0xa40
7101ad4c48  ldarb w8,[x8]
7101ad4c4c  tbz w8,#0x0,0x7101ad5788
7101ad4c50  cbz x22,0x7101ad52b4
7101ad4c54  ldr x8,[x22]
7101ad4c58  ldr x8,[x8]
7101ad4c5c  mov x0,x22
7101ad4c60  blr x8
7101ad4c64  cbz x0,0x7101ad52b4
7101ad4c68  adrp x8,0x710593b000
7101ad4c6c  add x8,x8,#0xa58
7101ad4c70  cmp x0,x8
7101ad4c74  b.eq 0x7101ad52ac
7101ad4c78  ldr x0,[x0]
7101ad4c7c  cbnz x0,0x7101ad4c70
7101ad4c80  b 0x7101ad52b4
7101ad4c84  ldr x0,[x19, #0x108]
7101ad4c88  fmov s0,0x3f800000
7101ad4c8c  adrp x1,0x710438c000
7101ad4c90  add x1,x1,#0xd2e
7101ad4c94  bl 0x7103778300
7101ad4c98  adrp x1,0x71042a3000
7101ad4c9c  add x1,x1,#0x2e8
7101ad4ca0  add x8,sp,#0x100
7101ad4ca4  mov x0,x21
7101ad4ca8  mov x20,x21
7101ad4cac  bl 0x7103776910
7101ad4cb0  add x1,x19,#0x19c
7101ad4cb4  add x0,sp,#0x100
7101ad4cb8  bl 0x710377a120
7101ad4cbc  ldr x0,[sp, #0x108]
7101ad4cc0  stp x26,xzr,[sp, #0x100]
7101ad4cc4  cbz x0,0x7101ad4ccc
7101ad4cc8  bl 0x710392eb40
7101ad4ccc  adrp x1,0x71043cf000
7101ad4cd0  add x1,x1,#0x6c9
7101ad4cd4  add x8,sp,#0x100
7101ad4cd8  mov x0,x20
7101ad4cdc  bl 0x7103776910
7101ad4ce0  ldr x0,[sp, #0x108]
7101ad4ce4  ldr x8,[x0]
7101ad4ce8  cbz x8,0x7101ad4cf8
7101ad4cec  ldrb w9,[x8, #0x58]
7101ad4cf0  and w9,w9,#0xfe
7101ad4cf4  strb w9,[x8, #0x58]
7101ad4cf8  stp x26,xzr,[sp, #0x100]
7101ad4cfc  cbnz x0,0x7101ad5494
7101ad4d00  b 0x7101ad5498
7101ad4d04  ldr x0,[x19, #0xf8]
7101ad4d08  mov w2,#0x12
7101ad4d0c  mov x20,x24
7101ad4d10  bl 0x710323f600
7101ad4d14  mov x23,x0
7101ad4d18  adrp x1,0x71042d4000
7101ad4d1c  add x1,x1,#0x25c
7101ad4d20  add x8,sp,#0x100
7101ad4d24  mov x0,x21
7101ad4d28  bl 0x7103776910
7101ad4d2c  ldr x24,[sp, #0x108]
7101ad4d30  mov x0,x24
7101ad4d34  mov x1,x23
7101ad4d38  bl 0x7103778b80
7101ad4d3c  stp x26,xzr,[sp, #0x100]
7101ad4d40  cbz x24,0x7101ad4d4c
7101ad4d44  mov x0,x24
7101ad4d48  bl 0x710392eb40
7101ad4d4c  adrp x1,0x710439d000
7101ad4d50  add x1,x1,#0x86e
7101ad4d54  add x8,sp,#0x100
7101ad4d58  mov x0,x21
7101ad4d5c  bl 0x7103776910
7101ad4d60  ldr x24,[sp, #0x108]
7101ad4d64  mov x0,x24
7101ad4d68  mov x1,x23
7101ad4d6c  bl 0x7103778b80
7101ad4d70  stp x26,xzr,[sp, #0x100]
7101ad4d74  cbz x24,0x7101ad4d80
7101ad4d78  mov x0,x24
7101ad4d7c  bl 0x710392eb40
7101ad4d80  adrp x1,0x71042d4000
7101ad4d84  add x1,x1,#0x25c
7101ad4d88  add x8,sp,#0x100
7101ad4d8c  add x0,sp,#0x50
7101ad4d90  bl 0x7103776910
7101ad4d94  ldr x24,[sp, #0x108]
7101ad4d98  mov x0,x24
7101ad4d9c  mov x1,x23
7101ad4da0  bl 0x7103778b80
7101ad4da4  stp x26,xzr,[sp, #0x100]
7101ad4da8  cbz x24,0x7101ad4db4
7101ad4dac  mov x0,x24
7101ad4db0  bl 0x710392eb40
7101ad4db4  mov w23,#0x1
7101ad4db8  mov x24,x20
7101ad4dbc  b 0x7101ad492c
7101ad4dc0  ldrh w8,[x24, #0x90]
7101ad4dc4  cbz w8,0x7101ad4dd8
7101ad4dc8  ldr x0,[x19, #0x108]
7101ad4dcc  adrp x1,0x71043dd000
7101ad4dd0  add x1,x1,#0xf43
7101ad4dd4  b 0x7101ad4e60
7101ad4dd8  orr w8,wzr,#0xffff
7101ad4ddc  cmp w22,w8
7101ad4de0  b.eq 0x7101ad4e54
7101ad4de4  sxth w8,w22
7101ad4de8  cmp w8,#0x7cf
7101ad4dec  b.gt 0x7101ad4e54
7101ad4df0  ldr x9,[x28, #0x1d8]
7101ad4df4  lsl x8,x22,#0x30
7101ad4df8  add x8,x9,x8, ASR #0x2f
7101ad4dfc  ldrh w10,[x8, #0x60]
7101ad4e00  ldp x8,x11,[x9, #0x20]
7101ad4e04  sub x11,x11,x8
7101ad4e08  lsr x11,x11,#0x6
7101ad4e0c  mov w12,#0xcccd
7101ad4e10  movk w12,#0xcccc, LSL #16
7101ad4e14  mul w11,w11,w12
7101ad4e18  cmp w11,w10
7101ad4e1c  b.ls 0x7101ad4e54
7101ad4e20  add x9,x9,x10, LSL #0x1
7101ad4e24  ldrh w9,[x9, #0x1000]
7101ad4e28  cmp w11,w9
7101ad4e2c  b.ls 0x7101ad4e54
7101ad4e30  mov w10,#0x140
7101ad4e34  mul x9,x9,x10
7101ad4e38  ldrsh w8,[x8, x9, LSL #0x0]
7101ad4e3c  cmn w8,#0x1
7101ad4e40  b.eq 0x7101ad4e54
7101ad4e44  ldr x0,[x19, #0x108]
7101ad4e48  adrp x1,0x7104348000
7101ad4e4c  add x1,x1,#0x163
7101ad4e50  b 0x7101ad4e60
7101ad4e54  ldr x0,[x19, #0x108]
7101ad4e58  adrp x1,0x7104327000
7101ad4e5c  add x1,x1,#0xe86
7101ad4e60  fmov s0,0x3f800000
7101ad4e64  bl 0x7103778300
7101ad4e68  orr w9,wzr,#0xffff
7101ad4e6c  sxth w8,w22
7101ad4e70  cmp w22,w9
7101ad4e74  cset w9,ne
7101ad4e78  cmp w8,#0x7d0
7101ad4e7c  cset w8,lt
7101ad4e80  and w23,w9,w8
7101ad4e84  cmp w23,#0x1
7101ad4e88  b.ne 0x7101ad4ed8
7101ad4e8c  ldr x8,[x28, #0x1d8]
7101ad4e90  lsl x9,x22,#0x30
7101ad4e94  add x9,x8,x9, ASR #0x2f
7101ad4e98  ldp x10,x8,[x8, #0x20]
7101ad4e9c  ldrh w9,[x9, #0x60]
7101ad4ea0  sub x8,x8,x10
7101ad4ea4  mov w10,#0xcccd
7101ad4ea8  movk w10,#0xcccc, LSL #16
7101ad4eac  lsr x8,x8,#0x6
7101ad4eb0  mul w8,w8,w10
7101ad4eb4  cmp w8,w9
7101ad4eb8  b.ls 0x7101ad4ed8
7101ad4ebc  ldr x0,[x19, #0xf8]
7101ad4ec0  add x1,sp,#0x60
7101ad4ec4  add x2,sp,#0x50
7101ad4ec8  orr w4,wzr,#0xffff
7101ad4ecc  mov x3,x22
7101ad4ed0  bl 0x71025c7b60
7101ad4ed4  b 0x7101ad4ee4
7101ad4ed8  add x0,sp,#0x60
7101ad4edc  add x1,sp,#0x50
7101ad4ee0  bl 0x71025c7300
7101ad4ee4  add x0,sp,#0x40
7101ad4ee8  mov x1,x22
7101ad4eec  bl 0x71025c8c30
7101ad4ef0  ldr x0,[x19, #0xf8]
7101ad4ef4  add x2,sp,#0x30
7101ad4ef8  add x3,sp,#0x20
7101ad4efc  add x4,sp,#0x10
7101ad4f00  mov x1,x21
7101ad4f04  mov x5,x22
7101ad4f08  mov x26,x21
7101ad4f0c  bl 0x71025c8e40
7101ad4f10  mov x8,#0xff0000000000
7101ad4f14  mov w2,#0x1
7101ad4f18  str x2,[sp, #0x70]
7101ad4f1c  movk x8,#0x52ff, LSL #48
7101ad4f20  strb wzr,[sp, #0x78]
7101ad4f24  stur xzr,[sp, #0x7c]
7101ad4f28  str x8,[sp, #0x88]
7101ad4f2c  str wzr,[sp, #0x90]
7101ad4f30  cbz w23,0x7101ad4fb4
7101ad4f34  adrp x8,0x710532f000
7101ad4f38  ldr x8,[x8, #0x730]
7101ad4f3c  ldr x8,[x8, #0x8]
7101ad4f40  ldr x10,[x8, #0x1d8]
7101ad4f44  lsl x8,x22,#0x30
7101ad4f48  add x8,x10,x8, ASR #0x2f
7101ad4f4c  ldrh w9,[x8, #0x60]
7101ad4f50  ldp x8,x10,[x10, #0x20]
7101ad4f54  sub x10,x10,x8
7101ad4f58  orr x11,xzr,#-0x3333333333333334
7101ad4f5c  movk x11,#0xcccd
7101ad4f60  asr x10,x10,#0x6
7101ad4f64  mul x10,x10,x11
7101ad4f68  cmp w10,w9
7101ad4f6c  b.ls 0x7101ad4fb0
7101ad4f70  orr w11,wzr,#0xffff
7101ad4f74  cmp x22,x11
7101ad4f78  mov w11,#0xffffffff
7101ad4f7c  csel x9,x11,x9,eq
7101ad4f80  mov w11,#0x140
7101ad4f84  madd x8,x9,x11,x8
7101ad4f88  cmp x10,x9
7101ad4f8c  adrp x9,0x7105182000
7101ad4f90  add x9,x9,#0xb08
7101ad4f94  csel x8,x8,x9,hi
7101ad4f98  ldr s0,[x8, #0x74]
7101ad4f9c  ldr w1,[x8, #0x70]
7101ad4fa0  mov w0,wzr
7101ad4fa4  bl 0x71025c9ac0
7101ad4fa8  mov w2,w0
7101ad4fac  b 0x7101ad4fb4
7101ad4fb0  mov w2,#0x1
7101ad4fb4  add x0,sp,#0x70
7101ad4fb8  mov x1,x22
7101ad4fbc  mov x28,x24
7101ad4fc0  bl 0x71025ca840
7101ad4fc4  add x0,sp,#0x70
7101ad4fc8  bl 0x71025cb8d0
7101ad4fcc  mov w24,w0
7101ad4fd0  adrp x1,0x7104291000
7101ad4fd4  add x1,x1,#0xe9b
7101ad4fd8  add x8,sp,#0x100
7101ad4fdc  mov x0,x26
7101ad4fe0  bl 0x7103776910
7101ad4fe4  add x0,sp,#0x100
7101ad4fe8  mov w1,#0x1
7101ad4fec  mov w2,w24
7101ad4ff0  bl 0x710377a310
7101ad4ff4  ldr x0,[sp, #0x108]
7101ad4ff8  adrp x8,0x710523d000
7101ad4ffc  add x8,x8,#0x9a8
7101ad5000  stp x8,xzr,[sp, #0x100]
7101ad5004  cbz x0,0x7101ad500c
7101ad5008  bl 0x710392eb40
7101ad500c  adrp x1,0x7104308000
7101ad5010  add x1,x1,#0x70c
7101ad5014  add x8,sp,#0x100
7101ad5018  mov x0,x26
7101ad501c  add x20,sp,#0x100
7101ad5020  bl 0x7103776910
7101ad5024  add x0,sp,#0x100
7101ad5028  mov w1,#0x1
7101ad502c  mov w2,w24
7101ad5030  bl 0x710377a310
7101ad5034  ldr x0,[sp, #0x108]
7101ad5038  adrp x26,0x710523d000
7101ad503c  add x26,x26,#0x9a8
7101ad5040  stp x26,xzr,[sp, #0x100]
7101ad5044  cbz x0,0x7101ad504c
7101ad5048  bl 0x710392eb40
7101ad504c  fmov s8,0x3f800000
7101ad5050  ldr x0,[sp, #0x58]
7101ad5054  adrp x1,0x710432a000
7101ad5058  add x1,x1,#0x5ee
7101ad505c  mov v0.16B,v8.16B
7101ad5060  bl 0x7103778300
7101ad5064  strb wzr,[sp, #0x108]
7101ad5068  str xzr,[sp, #0x100]
7101ad506c  ldrb w2,[x28, #0x69]
7101ad5070  adrp x1,0x7104412000
7101ad5074  add x1,x1,#0xbdd
7101ad5078  add x0,sp,#0x100
7101ad507c  add x24,x20,#0x8
7101ad5080  bl 0x710062dc20
7101ad5084  ldr x0,[x19, #0x108]
7101ad5088  mov v0.16B,v8.16B
7101ad508c  mov x1,x24
7101ad5090  bl 0x7103778300
7101ad5094  cbz w23,0x7101ad51bc
7101ad5098  adrp x8,0x710532f000
7101ad509c  ldr x8,[x8, #0x730]
7101ad50a0  ldr x8,[x8, #0x8]
7101ad50a4  ldr x10,[x8, #0x1d8]
7101ad50a8  lsl x8,x22,#0x30
7101ad50ac  add x8,x10,x8, ASR #0x2f
7101ad50b0  ldrh w9,[x8, #0x60]
7101ad50b4  ldp x8,x10,[x10, #0x20]
7101ad50b8  sub x10,x10,x8
7101ad50bc  orr x11,xzr,#-0x3333333333333334
7101ad50c0  movk x11,#0xcccd
7101ad50c4  asr x10,x10,#0x6
7101ad50c8  mul x10,x10,x11
7101ad50cc  cmp w10,w9
7101ad50d0  b.ls 0x7101ad51bc
7101ad50d4  orr w11,wzr,#0xffff
7101ad50d8  cmp x22,x11
7101ad50dc  mov w11,#0xffffffff
7101ad50e0  csel x9,x11,x9,eq
7101ad50e4  mov w11,#0x140
7101ad50e8  madd x8,x9,x11,x8
7101ad50ec  cmp x10,x9
7101ad50f0  adrp x9,0x7105182000
7101ad50f4  add x9,x9,#0xb08
7101ad50f8  csel x8,x8,x9,hi
7101ad50fc  ldrb w9,[x8, #0x5e]
7101ad5100  cbnz w9,0x7101ad51bc
7101ad5104  ldrb w8,[x8, #0x6c]
7101ad5108  sub w8,w8,#0x1
7101ad510c  cmp w8,#0x3
7101ad5110  b.cs 0x7101ad51bc
7101ad5114  and x8,x8,#0xff
7101ad5118  lsl x8,x8,#0x3
7101ad511c  mov w9,#0x301
7101ad5120  movk w9,#0x2, LSL #16
7101ad5124  lsr w8,w9,w8
7101ad5128  and w8,w8,#0xff
7101ad512c  cmp w8,#0x1
7101ad5130  strb wzr,[sp, #0xc0]
7101ad5134  str xzr,[sp, #0xb8]
7101ad5138  b.eq 0x7101ad5710
7101ad513c  ldr x23,[sp, #0x8]
7101ad5140  cmp w8,#0x2
7101ad5144  b.eq 0x7101ad569c
7101ad5148  cmp w8,#0x3
7101ad514c  b.ne 0x7101ad51c8
7101ad5150  mov x9,#0x7073
7101ad5154  movk x9,#0x7269, LSL #16
7101ad5158  mov x10,#0x7474
7101ad515c  movk x10,#0x6361, LSL #16
7101ad5160  movk x9,#0x7469, LSL #32
7101ad5164  movk x9,#0x615f, LSL #48
7101ad5168  movk x10,#0x656b, LSL #32
7101ad516c  movk x10,#0x5f72, LSL #48
7101ad5170  add x8,sp,#0xb8
7101ad5174  stp x9,x10,[sp, #0xc0]
7101ad5178  mov w9,#0x6874
7101ad517c  strh w9,[sp, #0xd0]
7101ad5180  mov w9,#0x6f72
7101ad5184  movk w9,#0x77, LSL #16
7101ad5188  add x10,sp,#0xb8
7101ad518c  stur w9,[x10, #0x1a]
7101ad5190  add x1,x8,#0x8
7101ad5194  add x8,x8,#0x9
7101ad5198  mov w10,#0x15
7101ad519c  str w10,[sp, #0xbc]
7101ad51a0  mov w9,#0x73
7101ad51a4  mul w10,w25,w27
7101ad51a8  and w9,w9,#0xff
7101ad51ac  eor w25,w10,w9
7101ad51b0  ldrb w9,[x8], #0x1
7101ad51b4  cbnz w9,0x7101ad51a4
7101ad51b8  b 0x7101ad5224
7101ad51bc  ldr x23,[sp, #0x8]
7101ad51c0  strb wzr,[sp, #0xc0]
7101ad51c4  str xzr,[sp, #0xb8]
7101ad51c8  mov x9,#0x7073
7101ad51cc  movk x9,#0x7269, LSL #16
7101ad51d0  mov x10,#0x7474
7101ad51d4  movk x10,#0x6361, LSL #16
7101ad51d8  movk x9,#0x7469, LSL #32
7101ad51dc  movk x9,#0x615f, LSL #48
7101ad51e0  movk x10,#0x656b, LSL #32
7101ad51e4  movk x10,#0x5f72, LSL #48
7101ad51e8  add x8,sp,#0xb8
7101ad51ec  stp x9,x10,[sp, #0xc0]
7101ad51f0  mov w9,#0x6f6e
7101ad51f4  movk w9,#0x6e, LSL #16
7101ad51f8  str w9,[sp, #0xd0]
7101ad51fc  mov w9,#0x13
7101ad5200  add x1,x8,#0x8
7101ad5204  str w9,[sp, #0xbc]
7101ad5208  add x8,x8,#0x9
7101ad520c  mov w9,#0x73
7101ad5210  mul w10,w25,w27
7101ad5214  and w9,w9,#0xff
7101ad5218  eor w25,w10,w9
7101ad521c  ldrb w9,[x8], #0x1
7101ad5220  cbnz w9,0x7101ad5210
7101ad5224  str w25,[sp, #0xb8]
7101ad5228  ldr x0,[x19, #0x108]
7101ad522c  fmov s0,0x3f800000
7101ad5230  bl 0x7103778300
7101ad5234  ldr x22,[sp, #0x18]
7101ad5238  adrp x20,0x710523d000
7101ad523c  add x20,x20,#0x988
7101ad5240  stp x20,xzr,[sp, #0x10]
7101ad5244  cbz x22,0x7101ad5260
7101ad5248  ldr x0,[x22, #0x18]
7101ad524c  stp x26,xzr,[x22, #0x10]
7101ad5250  cbz x0,0x7101ad5258
7101ad5254  bl 0x710392eb40
7101ad5258  mov x0,x22
7101ad525c  bl 0x710392eb40
7101ad5260  stp x20,xzr,[sp, #0x20]
7101ad5264  cbz x23,0x7101ad5280
7101ad5268  ldr x0,[x23, #0x18]
7101ad526c  stp x26,xzr,[x23, #0x10]
7101ad5270  cbz x0,0x7101ad5278
7101ad5274  bl 0x710392eb40
7101ad5278  mov x0,x23
7101ad527c  bl 0x710392eb40
7101ad5280  ldr x22,[sp, #0x38]
7101ad5284  stp x20,xzr,[sp, #0x30]
7101ad5288  cbz x22,0x7101ad52a4
7101ad528c  ldr x0,[x22, #0x18]
7101ad5290  stp x26,xzr,[x22, #0x10]
7101ad5294  cbz x0,0x7101ad529c
7101ad5298  bl 0x710392eb40
7101ad529c  mov x0,x22
7101ad52a0  bl 0x710392eb40
7101ad52a4  str x20,[sp, #0x40]
7101ad52a8  b 0x7101ad5474
7101ad52ac  mov w8,#0x1
7101ad52b0  strb w8,[x22, #0x60]
7101ad52b4  ldr x20,[sp, #0x48]
7101ad52b8  ldr x0,[x20, #0x8]
7101ad52bc  bl 0x7103778950
7101ad52c0  ldr x8,[x20, #0x8]
7101ad52c4  cbz x8,0x7101ad5398
7101ad52c8  ldr x22,[x8, #0x78]
7101ad52cc  adrp x8,0x710593b000
7101ad52d0  add x8,x8,#0xa40
7101ad52d4  ldarb w8,[x8]
7101ad52d8  tbz w8,#0x0,0x7101ad57d0
7101ad52dc  cbz x22,0x7101ad5398
7101ad52e0  ldr x8,[x22]
7101ad52e4  ldr x8,[x8]
7101ad52e8  mov x0,x22
7101ad52ec  blr x8
7101ad52f0  cbz x0,0x7101ad5398
7101ad52f4  adrp x8,0x710593b000
7101ad52f8  add x8,x8,#0xa58
7101ad52fc  cmp x0,x8
7101ad5300  b.eq 0x7101ad5310
7101ad5304  ldr x0,[x0]
7101ad5308  cbnz x0,0x7101ad52fc
7101ad530c  b 0x7101ad5398
7101ad5310  ldr w9,[x22, #0x54]
7101ad5314  ldr x8,[x22, #0x18]
7101ad5318  str w9,[x22, #0x58]
7101ad531c  cbz x8,0x7101ad5330
7101ad5320  str w9,[x8, #0x30]
7101ad5324  ldrb w9,[x8, #0x58]
7101ad5328  orr w9,w9,#0x10
7101ad532c  strb w9,[x8, #0x58]
7101ad5330  ldr x8,[x22, #0x20]
7101ad5334  cbz x8,0x7101ad534c
7101ad5338  ldr w9,[x22, #0x58]
7101ad533c  str w9,[x8, #0x30]
7101ad5340  ldrb w9,[x8, #0x58]
7101ad5344  orr w9,w9,#0x10
7101ad5348  strb w9,[x8, #0x58]
7101ad534c  ldr x0,[x22, #0x28]
7101ad5350  cbz x0,0x7101ad5364
7101ad5354  ldr x8,[x0]
7101ad5358  ldr x8,[x8, #0x180]
7101ad535c  fmov s0,wzr
7101ad5360  blr x8
7101ad5364  ldr x0,[x22, #0x30]
7101ad5368  cbz x0,0x7101ad5394
7101ad536c  ldrb w8,[x22, #0x63]
7101ad5370  cbz w8,0x7101ad5384
7101ad5374  ldr x8,[x0]
7101ad5378  ldr x8,[x8, #0x190]
7101ad537c  blr x8
7101ad5380  b 0x7101ad5394
7101ad5384  ldr x8,[x0]
7101ad5388  ldr x8,[x8, #0x180]
7101ad538c  fmov s0,wzr
7101ad5390  blr x8
7101ad5394  strh wzr,[x22, #0x64]
7101ad5398  mov w8,#0x5a
7101ad539c  str w8,[x19, #0x240]
7101ad53a0  ldr x0,[x24, #0x218]
7101ad53a4  ldrh w1,[x27, #0x6a]
7101ad53a8  bl 0x71032a1630
7101ad53ac  mov x1,x0
7101ad53b0  ldr x0,[x19, #0xf8]
7101ad53b4  bl 0x710323f760
7101ad53b8  mov x23,x0
7101ad53bc  adrp x1,0x71043cf000
7101ad53c0  add x1,x1,#0x954
7101ad53c4  add x8,sp,#0x30
7101ad53c8  mov x0,x26
7101ad53cc  bl 0x7103776640
7101ad53d0  adrp x1,0x71043ef000
7101ad53d4  add x1,x1,#0x356
7101ad53d8  add x8,sp,#0x70
7101ad53dc  add x0,sp,#0x30
7101ad53e0  bl 0x7103776910
7101ad53e4  ldr x22,[sp, #0x78]
7101ad53e8  mov x0,x22
7101ad53ec  mov x1,x23
7101ad53f0  bl 0x7103778b80
7101ad53f4  adrp x26,0x710523d000
7101ad53f8  add x26,x26,#0x9a8
7101ad53fc  stp x26,xzr,[sp, #0x70]
7101ad5400  cbz x22,0x7101ad540c
7101ad5404  mov x0,x22
7101ad5408  bl 0x710392eb40
7101ad540c  ldr x22,[sp, #0x38]
7101ad5410  stp x25,xzr,[sp, #0x30]
7101ad5414  cbz x22,0x7101ad5430
7101ad5418  ldr x0,[x22, #0x18]
7101ad541c  stp x26,xzr,[x22, #0x10]
7101ad5420  cbz x0,0x7101ad5428
7101ad5424  bl 0x710392eb40
7101ad5428  mov x0,x22
7101ad542c  bl 0x710392eb40
7101ad5430  strb wzr,[sp, #0x78]
7101ad5434  str xzr,[sp, #0x70]
7101ad5438  ldr x0,[x24, #0x218]
7101ad543c  ldrh w1,[x27, #0x6a]
7101ad5440  add x8,sp,#0x70
7101ad5444  add x22,x8,#0x8
7101ad5448  bl 0x71032a0fd0
7101ad544c  and w2,w0,#0xff
7101ad5450  adrp x1,0x7104412000
7101ad5454  add x1,x1,#0xbdd
7101ad5458  add x0,sp,#0x70
7101ad545c  bl 0x710062dc20
7101ad5460  ldr x0,[x19, #0x108]
7101ad5464  fmov s0,0x3f800000
7101ad5468  mov x1,x22
7101ad546c  bl 0x7103778300
7101ad5470  str x25,[sp, #0x40]
7101ad5474  ldr x22,[sp, #0x48]
7101ad5478  str xzr,[sp, #0x48]
7101ad547c  cbz x22,0x7101ad5498
7101ad5480  ldr x0,[x22, #0x18]
7101ad5484  stp x26,xzr,[x22, #0x10]
7101ad5488  cbz x0,0x7101ad5490
7101ad548c  bl 0x710392eb40
7101ad5490  mov x0,x22
7101ad5494  bl 0x710392eb40
7101ad5498  ldr x22,[sp, #0x58]
7101ad549c  adrp x20,0x710523d000
7101ad54a0  add x20,x20,#0x988
7101ad54a4  mov x28,x21
7101ad54a8  stp x20,xzr,[sp, #0x50]
7101ad54ac  cbz x22,0x7101ad54c8
7101ad54b0  ldr x0,[x22, #0x18]
7101ad54b4  stp x26,xzr,[x22, #0x10]
7101ad54b8  cbz x0,0x7101ad54c0
7101ad54bc  bl 0x710392eb40
7101ad54c0  mov x0,x22
7101ad54c4  bl 0x710392eb40
7101ad54c8  ldr x22,[sp, #0x68]
7101ad54cc  stp x20,xzr,[sp, #0x60]
7101ad54d0  cbz x22,0x7101ad54ec
7101ad54d4  ldr x0,[x22, #0x18]
7101ad54d8  stp x26,xzr,[x22, #0x10]
7101ad54dc  cbz x0,0x7101ad54e4
7101ad54e0  bl 0x710392eb40
7101ad54e4  mov x0,x22
7101ad54e8  bl 0x710392eb40
7101ad54ec  ldr x0,[x19, #0x108]
7101ad54f0  fmov s0,0x3f800000
7101ad54f4  add x8,sp,#0x190
7101ad54f8  add x1,x8,#0x8
7101ad54fc  bl 0x7103778300
7101ad5500  adrp x1,0x7104401000
7101ad5504  add x1,x1,#0xdad
7101ad5508  add x8,sp,#0xb8
7101ad550c  mov x0,x28
7101ad5510  bl 0x7103776640
7101ad5514  adrp x1,0x710439d000
7101ad5518  add x1,x1,#0xc9a
7101ad551c  add x8,sp,#0x100
7101ad5520  add x0,sp,#0xb8
7101ad5524  bl 0x7103776910
7101ad5528  ldur x1,[x29, #-0x58]
7101ad552c  add x0,sp,#0x100
7101ad5530  bl 0x710377a120
7101ad5534  ldr x0,[sp, #0x108]
7101ad5538  adrp x23,0x710523d000
7101ad553c  add x23,x23,#0x9a8
7101ad5540  stp x23,xzr,[sp, #0x100]
7101ad5544  cbz x0,0x7101ad554c
7101ad5548  bl 0x710392eb40
7101ad554c  ldr x21,[sp, #0xc0]
7101ad5550  adrp x22,0x710523d000
7101ad5554  add x22,x22,#0x988
7101ad5558  stp x22,xzr,[sp, #0xb8]
7101ad555c  cbz x21,0x7101ad5578
7101ad5560  ldr x0,[x21, #0x18]
7101ad5564  stp x23,xzr,[x21, #0x10]
7101ad5568  cbz x0,0x7101ad5570
7101ad556c  bl 0x710392eb40
7101ad5570  mov x0,x21
7101ad5574  bl 0x710392eb40
7101ad5578  adrp x1,0x710433a000
7101ad557c  add x1,x1,#0x953
7101ad5580  add x8,sp,#0x100
7101ad5584  mov x0,x28
7101ad5588  bl 0x7103776910
7101ad558c  add x1,x19,#0x154
7101ad5590  add x0,sp,#0x100
7101ad5594  bl 0x710377a120
7101ad5598  adrp x1,0x71042e7000
7101ad559c  add x1,x1,#0x4c9
7101ad55a0  add x8,sp,#0x70
7101ad55a4  mov x0,x28
7101ad55a8  bl 0x7103776640
7101ad55ac  adrp x1,0x71043cf000
7101ad55b0  add x1,x1,#0xca4
7101ad55b4  add x8,sp,#0xb8
7101ad55b8  add x0,sp,#0x70
7101ad55bc  bl 0x7103776910
7101ad55c0  ldr x20,[sp, #0x78]
7101ad55c4  stp x22,xzr,[sp, #0x70]
7101ad55c8  cbz x20,0x7101ad55e4
7101ad55cc  ldr x0,[x20, #0x18]
7101ad55d0  stp x23,xzr,[x20, #0x10]
7101ad55d4  cbz x0,0x7101ad55dc
7101ad55d8  bl 0x710392eb40
7101ad55dc  mov x0,x20
7101ad55e0  bl 0x710392eb40
7101ad55e4  add x1,x19,#0x19c
7101ad55e8  add x0,sp,#0xb8
7101ad55ec  bl 0x710377a120
7101ad55f0  ldr x8,[x19, #0x110]
7101ad55f4  cbz x8,0x7101ad5620
7101ad55f8  ldr w8,[x19, #0xe8]
7101ad55fc  sub w8,w8,#0x1
7101ad5600  cmp w8,#0x2
7101ad5604  b.cc 0x7101ad5620
7101ad5608  ldrsw x8,[x19, #0xe4]
7101ad560c  cmp w8,#0x13
7101ad5610  b.cs 0x7101ad5818
7101ad5614  add x8,x19,x8, LSL #0x2
7101ad5618  mov w9,#0x1
7101ad561c  str w9,[x8, #0x98]
7101ad5620  ldr x0,[sp, #0xc0]
7101ad5624  stp x23,xzr,[sp, #0xb8]
7101ad5628  cbz x0,0x7101ad5630
7101ad562c  bl 0x710392eb40
7101ad5630  ldr x0,[sp, #0x108]
7101ad5634  stp x23,xzr,[sp, #0x100]
7101ad5638  cbz x0,0x7101ad5640
7101ad563c  bl 0x710392eb40
7101ad5640  ldr x0,[sp, #0x1e0]
7101ad5644  stp x23,xzr,[sp, #0x1d8]
7101ad5648  cbz x0,0x7101ad5650
7101ad564c  bl 0x710392eb40
7101ad5650  ldr x19,[sp, #0x238]
7101ad5654  str x22,[sp, #0x230]
7101ad5658  str xzr,[sp, #0x238]
7101ad565c  cbz x19,0x7101ad5678
7101ad5660  ldr x0,[x19, #0x18]
7101ad5664  stp x23,xzr,[x19, #0x10]
7101ad5668  cbz x0,0x7101ad5670
7101ad566c  bl 0x710392eb40
7101ad5670  mov x0,x19
7101ad5674  bl 0x710392eb40
7101ad5678  add sp,sp,#0x2e0
7101ad567c  ldp x29,x30,[sp, #0x60]
7101ad5680  ldp x20,x19,[sp, #0x50]
7101ad5684  ldp x22,x21,[sp, #0x40]
7101ad5688  ldp x24,x23,[sp, #0x30]
7101ad568c  ldp x26,x25,[sp, #0x20]
7101ad5690  ldp x28,x27,[sp, #0x10]
7101ad5694  ldr d8,[sp], #0x70
7101ad5698  ret
7101ad569c  mov x9,#0x7073
7101ad56a0  movk x9,#0x7269, LSL #16
7101ad56a4  mov x10,#0x7474
7101ad56a8  movk x10,#0x6361, LSL #16
7101ad56ac  movk x9,#0x7469, LSL #32
7101ad56b0  movk x9,#0x615f, LSL #48
7101ad56b4  movk x10,#0x656b, LSL #32
7101ad56b8  movk x10,#0x5f72, LSL #48
7101ad56bc  add x8,sp,#0xb8
7101ad56c0  stp x9,x10,[sp, #0xc0]
7101ad56c4  mov w9,#0x6564
7101ad56c8  strh w9,[sp, #0xd0]
7101ad56cc  mov w9,#0x6566
7101ad56d0  movk w9,#0x736e, LSL #16
7101ad56d4  add x10,sp,#0xb8
7101ad56d8  stur w9,[x10, #0x1a]
7101ad56dc  mov w9,#0x65
7101ad56e0  add x1,x8,#0x8
7101ad56e4  strh w9,[sp, #0xd6]
7101ad56e8  add x8,x8,#0x9
7101ad56ec  mov w10,#0x17
7101ad56f0  str w10,[sp, #0xbc]
7101ad56f4  mov w9,#0x73
7101ad56f8  mul w10,w25,w27
7101ad56fc  and w9,w9,#0xff
7101ad5700  eor w25,w10,w9
7101ad5704  ldrb w9,[x8], #0x1
7101ad5708  cbnz w9,0x7101ad56f8
7101ad570c  b 0x7101ad5224
7101ad5710  mov x9,#0x7073
7101ad5714  movk x9,#0x7269, LSL #16
7101ad5718  mov x10,#0x7474
7101ad571c  movk x10,#0x6361, LSL #16
7101ad5720  movk x9,#0x7469, LSL #32
7101ad5724  movk x9,#0x615f, LSL #48
7101ad5728  movk x10,#0x656b, LSL #32
7101ad572c  movk x10,#0x5f72, LSL #48
7101ad5730  ldr x23,[sp, #0x8]
7101ad5734  stp x9,x10,[sp, #0xc0]
7101ad5738  mov w9,#0x666f
7101ad573c  strh w9,[sp, #0xd0]
7101ad5740  mov w9,#0x6566
7101ad5744  movk w9,#0x736e, LSL #16
7101ad5748  add x10,sp,#0xb8
7101ad574c  add x8,sp,#0xb8
7101ad5750  stur w9,[x10, #0x1a]
7101ad5754  mov w9,#0x65
7101ad5758  add x1,x8,#0x8
7101ad575c  strh w9,[sp, #0xd6]
7101ad5760  add x8,x8,#0x9
7101ad5764  mov w10,#0x17
7101ad5768  str w10,[sp, #0xbc]
7101ad576c  mov w9,#0x73
7101ad5770  mul w10,w25,w27
7101ad5774  and w9,w9,#0xff
7101ad5778  eor w25,w10,w9
7101ad577c  ldrb w9,[x8], #0x1
7101ad5780  cbnz w9,0x7101ad5770
7101ad5784  b 0x7101ad5224
7101ad5788  adrp x0,0x710593b000
7101ad578c  add x0,x0,#0xa40
7101ad5790  bl 0x71039c06b0
7101ad5794  cbz w0,0x7101ad4c50
7101ad5798  adrp x8,0x710593b000
7101ad579c  add x8,x8,#0xa48
7101ad57a0  ldarb w8,[x8]
7101ad57a4  tbz w8,#0x0,0x7101ad581c
7101ad57a8  adrp x8,0x710593b000
7101ad57ac  adrp x9,0x710593b000
7101ad57b0  add x9,x9,#0xa50
7101ad57b4  adrp x0,0x710593b000
7101ad57b8  add x0,x0,#0xa40
7101ad57bc  str x9,[x8, #0xa58]
7101ad57c0  bl 0x71039c06c0
7101ad57c4  mov x26,x21
7101ad57c8  cbnz x22,0x7101ad4c54
7101ad57cc  b 0x7101ad52b4
7101ad57d0  adrp x0,0x710593b000
7101ad57d4  add x0,x0,#0xa40
7101ad57d8  bl 0x71039c06b0
7101ad57dc  cbz w0,0x7101ad52dc
7101ad57e0  adrp x8,0x710593b000
7101ad57e4  add x8,x8,#0xa48
7101ad57e8  ldarb w8,[x8]
7101ad57ec  tbz w8,#0x0,0x7101ad5844
7101ad57f0  adrp x8,0x710593b000
7101ad57f4  adrp x9,0x710593b000
7101ad57f8  add x9,x9,#0xa50
7101ad57fc  adrp x0,0x710593b000
7101ad5800  add x0,x0,#0xa40
7101ad5804  str x9,[x8, #0xa58]
7101ad5808  bl 0x71039c06c0
7101ad580c  mov x26,x21
7101ad5810  cbnz x22,0x7101ad52e0
7101ad5814  b 0x7101ad5398
7101ad5818  bl 0x71039c2650
7101ad581c  adrp x0,0x710593b000
7101ad5820  add x0,x0,#0xa48
7101ad5824  bl 0x71039c06b0
7101ad5828  cbz w0,0x7101ad57a8
7101ad582c  adrp x8,0x710593b000
7101ad5830  adrp x0,0x710593b000
7101ad5834  add x0,x0,#0xa48
7101ad5838  str xzr,[x8, #0xa50]
7101ad583c  bl 0x71039c06c0
7101ad5840  b 0x7101ad57a8
7101ad5844  adrp x0,0x710593b000
7101ad5848  add x0,x0,#0xa48
7101ad584c  bl 0x71039c06b0
7101ad5850  cbz w0,0x7101ad57f0
7101ad5854  adrp x8,0x710593b000
7101ad5858  adrp x0,0x710593b000
7101ad585c  add x0,x0,#0xa48
7101ad5860  str xzr,[x8, #0xa50]
7101ad5864  bl 0x71039c06c0
7101ad5868  b 0x7101ad57f0
