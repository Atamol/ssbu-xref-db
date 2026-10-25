// addr:      71029d3b90
// offset:    0x29d3b90
// name:      FUN_71029d3b90
// mangled:   
// size:      10176

71029d3b90  stp d9,d8,[sp, #-0x70]!
71029d3b94  stp x28,x27,[sp, #0x10]
71029d3b98  stp x26,x25,[sp, #0x20]
71029d3b9c  stp x24,x23,[sp, #0x30]
71029d3ba0  stp x22,x21,[sp, #0x40]
71029d3ba4  stp x20,x19,[sp, #0x50]
71029d3ba8  stp x29,x30,[sp, #0x60]
71029d3bac  add x29,sp,#0x60
71029d3bb0  sub sp,sp,#0x220
71029d3bb4  mov x19,x0
71029d3bb8  bl 0x71025d9250
71029d3bbc  ldr x9,[x19, #0x308]
71029d3bc0  ldp x11,x10,[x9, #0x150]
71029d3bc4  str x10,[sp, #0xb8]
71029d3bc8  ldp x10,x8,[x9, #0x140]
71029d3bcc  stp x8,x11,[sp, #0xa8]
71029d3bd0  str x10,[sp, #0xa0]
71029d3bd4  movi d16,#0x0
71029d3bd8  mov v7.16B,v16.16B
71029d3bdc  ldr q4,[x9, #0x160]
71029d3be0  ldp x8,x10,[x9, #0x170]
71029d3be4  ldr w11,[x9, #0x180]
71029d3be8  str w11,[sp, #0x90]
71029d3bec  stp x8,x10,[sp, #0x80]
71029d3bf0  ldp x8,x10,[x9, #0x188]
71029d3bf4  ldr x11,[x9, #0x198]
71029d3bf8  mov v7.S[0x0],v4.S[0x2]
71029d3bfc  str x8,[sp, #0x68]
71029d3c00  stp x10,x11,[sp, #0x70]
71029d3c04  ldr x10,[x9, #0x200]
71029d3c08  ldp q0,q1,[x9, #0x1a0]
71029d3c0c  mov v4.D[0x1],v7.D[0x0]
71029d3c10  mov v7.16B,v16.16B
71029d3c14  ldp q2,q3,[x9, #0x1c0]
71029d3c18  mov v7.S[0x0],v0.S[0x2]
71029d3c1c  ldr w8,[x9, #0x1e0]
71029d3c20  mov v0.D[0x1],v7.D[0x0]
71029d3c24  mov v7.16B,v16.16B
71029d3c28  mov v7.S[0x0],v1.S[0x2]
71029d3c2c  ldr q5,[x9, #0x1f0]
71029d3c30  mov v1.D[0x1],v7.D[0x0]
71029d3c34  mov v7.16B,v16.16B
71029d3c38  mov v7.S[0x0],v2.S[0x2]
71029d3c3c  str x10,[sp, #0x40]
71029d3c40  ldr x11,[x9, #0x208]
71029d3c44  ldr w10,[x9, #0x220]
71029d3c48  ldr x12,[x9, #0x218]
71029d3c4c  mov v2.D[0x1],v7.D[0x0]
71029d3c50  mov v7.16B,v16.16B
71029d3c54  str x11,[sp, #0x48]
71029d3c58  ldr x11,[x9, #0x210]
71029d3c5c  str w10,[sp, #0x60]
71029d3c60  mov v7.S[0x0],v3.S[0x2]
71029d3c64  ldr w10,[sp, #0xb0]
71029d3c68  stp x11,x12,[sp, #0x50]
71029d3c6c  ldr x11,[sp, #0xa8]
71029d3c70  ldr s6,[x19, #0x9e0]
71029d3c74  str x11,[x9, #0x268]
71029d3c78  ldr x11,[sp, #0xa0]
71029d3c7c  scvtf s6,s6
71029d3c80  str w10,[x9, #0x270]
71029d3c84  mov v3.D[0x1],v7.D[0x0]
71029d3c88  mov v7.16B,v16.16B
71029d3c8c  str q4,[x9, #0x280]
71029d3c90  mov v7.S[0x0],v5.S[0x2]
71029d3c94  str x11,[x9, #0x260]
71029d3c98  ldr x11,[sp, #0x88]
71029d3c9c  ldr w10,[sp, #0x90]
71029d3ca0  str x11,[x9, #0x298]
71029d3ca4  ldr x11,[sp, #0x80]
71029d3ca8  str w10,[x9, #0x2a0]
71029d3cac  str x11,[x9, #0x290]
71029d3cb0  mov v5.D[0x1],v7.D[0x0]
71029d3cb4  str s6,[x9, #0x2a4]
71029d3cb8  ldp x10,x11,[sp, #0x68]
71029d3cbc  ldrb w12,[sp, #0x78]
71029d3cc0  strb w12,[x9, #0x2b8]
71029d3cc4  str x11,[x9, #0x2b0]
71029d3cc8  str x10,[x9, #0x2a8]
71029d3ccc  stp q0,q1,[x9, #0x2c0]
71029d3cd0  str w8,[x9, #0x300]
71029d3cd4  stp q2,q3,[x9, #0x2e0]
71029d3cd8  str q5,[x9, #0x310]
71029d3cdc  ldr x10,[sp, #0x40]
71029d3ce0  str x10,[x9, #0x320]
71029d3ce4  ldr x12,[sp, #0x58]
71029d3ce8  ldp x10,x11,[sp, #0x48]
71029d3cec  ldr w13,[sp, #0x60]
71029d3cf0  str w13,[x9, #0x340]
71029d3cf4  str x12,[x9, #0x338]
71029d3cf8  str x11,[x9, #0x330]
71029d3cfc  str x10,[x9, #0x328]
71029d3d00  adrp x10,0x710532a000
71029d3d04  ldr x10,[x10, #0x9d8]
71029d3d08  ldr x10,[x10]
71029d3d0c  ldr x11,[x10, #0x1c0]
71029d3d10  mov x10,x11
71029d3d14  ldr x9,[x9, #0x8]
71029d3d18  ldr x12,[x10, #0x50]!
71029d3d1c  cbz x12,0x71029d3d60
71029d3d20  add x13,x11,#0x50
71029d3d24  b 0x71029d3d30
71029d3d28  mov x13,x12
71029d3d2c  mov x12,x14
71029d3d30  ldr x14,[x12, #0x20]
71029d3d34  cmp x14,x9
71029d3d38  b.ls 0x71029d3d4c
71029d3d3c  ldr x14,[x12]
71029d3d40  mov x13,x12
71029d3d44  cbnz x14,0x71029d3d28
71029d3d48  b 0x71029d3d64
71029d3d4c  b.cs 0x71029d3d64
71029d3d50  ldr x14,[x12, #0x8]!
71029d3d54  mov x13,x12
71029d3d58  cbnz x14,0x71029d3d28
71029d3d5c  b 0x71029d3d64
71029d3d60  mov x13,x10
71029d3d64  ldr x12,[x13]
71029d3d68  ldp x14,x13,[sp, #0xa0]
71029d3d6c  ldr x12,[x12, #0x28]
71029d3d70  ldr w15,[sp, #0xb0]
71029d3d74  str w15,[x12, #0xd0]
71029d3d78  str q4,[x12, #0xe0]
71029d3d7c  stp x14,x13,[x12, #0xc0]
71029d3d80  ldr w15,[sp, #0x90]
71029d3d84  ldp x13,x14,[sp, #0x80]
71029d3d88  str w15,[x12, #0x100]
71029d3d8c  stp x13,x14,[x12, #0xf0]
71029d3d90  str s6,[x12, #0x104]
71029d3d94  ldp x13,x14,[sp, #0x68]
71029d3d98  ldrb w15,[sp, #0x78]
71029d3d9c  strb w15,[x12, #0x118]
71029d3da0  stp x13,x14,[x12, #0x108]
71029d3da4  stp q0,q1,[x12, #0x120]
71029d3da8  str w8,[x12, #0x160]
71029d3dac  stp q2,q3,[x12, #0x140]
71029d3db0  str q5,[x12, #0x170]
71029d3db4  ldr x8,[sp, #0x40]
71029d3db8  str x8,[x12, #0x180]
71029d3dbc  ldr x14,[sp, #0x58]
71029d3dc0  ldp x8,x13,[sp, #0x48]
71029d3dc4  ldr w15,[sp, #0x60]
71029d3dc8  str w15,[x12, #0x1a0]
71029d3dcc  stp x13,x14,[x12, #0x190]
71029d3dd0  str x8,[x12, #0x188]
71029d3dd4  ldr x8,[x11, #0x20]
71029d3dd8  cmp x8,x9
71029d3ddc  b.ne 0x71029d3e44
71029d3de0  ldr x8,[x10]
71029d3de4  cbz x8,0x71029d3e24
71029d3de8  add x10,x11,#0x50
71029d3dec  b 0x71029d3df8
71029d3df0  mov x10,x8
71029d3df4  mov x8,x11
71029d3df8  ldr x11,[x8, #0x20]
71029d3dfc  cmp x11,x9
71029d3e00  b.ls 0x71029d3e14
71029d3e04  ldr x11,[x8]
71029d3e08  mov x10,x8
71029d3e0c  cbnz x11,0x71029d3df0
71029d3e10  b 0x71029d3e24
71029d3e14  b.cs 0x71029d3e24
71029d3e18  ldr x11,[x8, #0x8]!
71029d3e1c  mov x10,x8
71029d3e20  cbnz x11,0x71029d3df0
71029d3e24  ldr x8,[x10]
71029d3e28  ldr x8,[x8, #0x28]
71029d3e2c  ldr x0,[x8, #0x1d0]
71029d3e30  cbz x0,0x71029d6344
71029d3e34  add x1,x8,#0xc0
71029d3e38  ldr x8,[x0]
71029d3e3c  ldr x8,[x8, #0x30]
71029d3e40  blr x8
71029d3e44  mov w0,#0x10
71029d3e48  mov w1,#0x8
71029d3e4c  bl 0x710392e290
71029d3e50  mov x20,x0
71029d3e54  cbnz x0,0x71029d3ea0
71029d3e58  adrp x8,0x7105332000
71029d3e5c  ldr x0,[x8, #0xf00]
71029d3e60  cbz x0,0x71029d3e9c
71029d3e64  mov w8,#0x8
71029d3e68  str wzr,[sp, #0xc0]
71029d3e6c  add x1,sp,#0xc0
71029d3e70  str x8,[sp, #0x100]
71029d3e74  ldr x8,[x0]
71029d3e78  ldr x8,[x8, #0x30]
71029d3e7c  add x2,sp,#0x100
71029d3e80  blr x8
71029d3e84  tbz w0,#0x0,0x71029d3e9c
71029d3e88  mov w0,#0x10
71029d3e8c  mov w1,#0x8
71029d3e90  bl 0x710392e290
71029d3e94  mov x20,x0
71029d3e98  cbnz x0,0x71029d3ea0
71029d3e9c  mov x20,xzr
71029d3ea0  mov x0,x20
71029d3ea4  bl 0x710317f6b0
71029d3ea8  ldr x21,[x19, #0xa80]
71029d3eac  str x20,[x19, #0xa80]
71029d3eb0  cbz x21,0x71029d3ec4
71029d3eb4  mov x0,x21
71029d3eb8  bl 0x710317f920
71029d3ebc  mov x0,x21
71029d3ec0  bl 0x710392eb40
71029d3ec4  adrp x8,0x71052a8000
71029d3ec8  ldr x8,[x8, #0xa88]
71029d3ecc  ldr q0,[x8]
71029d3ed0  fmov s2,wzr
71029d3ed4  ldr x8,[x19, #0x310]
71029d3ed8  str xzr,[x19, #0x790]
71029d3edc  str xzr,[x19, #0x788]
71029d3ee0  str xzr,[x19, #0x780]
71029d3ee4  ext v1.16B,v0.16B,v0.16B,0x8
71029d3ee8  mov v1.S[0x1],v2.S[0x0]
71029d3eec  str wzr,[x19, #0x798]
71029d3ef0  mov v0.D[0x1],v1.D[0x0]
71029d3ef4  str q0,[x19, #0x770]
71029d3ef8  ldp x10,x11,[x8, #0xd0]
71029d3efc  cmp x10,x11
71029d3f00  b.eq 0x71029d3f38
71029d3f04  mov x8,#0x7b84
71029d3f08  movk x8,#0x127c, LSL #16
71029d3f0c  movk x8,#0x19, LSL #32
71029d3f10  ldr w9,[x10, #0x8]
71029d3f14  cmp w9,#0x1
71029d3f18  b.hi 0x71029d3f2c
71029d3f1c  ldr x9,[x10]
71029d3f20  ldr x12,[x9, #0x68]
71029d3f24  cmp x12,x8
71029d3f28  b.eq 0x71029d4b50
71029d3f2c  add x10,x10,#0x10
71029d3f30  cmp x11,x10
71029d3f34  b.ne 0x71029d3f10
71029d3f38  str xzr,[x19, #0x760]
71029d3f3c  ldr x8,[x19, #0x950]
71029d3f40  ldr x20,[x19, #0x948]
71029d3f44  sub x8,x8,x20
71029d3f48  mov x9,#0x8e39
71029d3f4c  movk x9,#0x38e3, LSL #16
71029d3f50  movk x9,#0xe38e, LSL #32
71029d3f54  movk x9,#0x8e38, LSL #48
71029d3f58  asr x8,x8,#0x3
71029d3f5c  mul x8,x8,x9
71029d3f60  cmp w8,#0x1
71029d3f64  b.lt 0x71029d45a4
71029d3f68  add x9,x19,#0x740
71029d3f6c  and x23,x8,#0xffffffff
71029d3f70  adrp x8,0x7104473000
71029d3f74  str x9,[sp, #0x10]
71029d3f78  adrp x27,0x71052a8000
71029d3f7c  ldr s8,[x8, #0x710]
71029d3f80  ldr x27,[x27, #0xa80]
71029d3f84  mov x24,xzr
71029d3f88  str x23,[sp, #0x8]
71029d3f8c  b 0x71029d3f94
71029d3f90  ldr x20,[x19, #0x948]
71029d3f94  ldr q0,[x27]
71029d3f98  mov w0,#0x10
71029d3f9c  orr w1,wzr,#0xf0
71029d3fa0  str q0,[sp, #0x20]
71029d3fa4  and w26,w26,#0xffff0000
71029d3fa8  bl 0x710392e290
71029d3fac  mov x22,x0
71029d3fb0  cbnz x0,0x71029d3ffc
71029d3fb4  adrp x8,0x7105332000
71029d3fb8  ldr x0,[x8, #0xf00]
71029d3fbc  cbz x0,0x71029d3ff8
71029d3fc0  orr w8,wzr,#0xf0
71029d3fc4  str wzr,[sp, #0xc0]
71029d3fc8  add x1,sp,#0xc0
71029d3fcc  str x8,[sp, #0x100]
71029d3fd0  ldr x8,[x0]
71029d3fd4  ldr x8,[x8, #0x30]
71029d3fd8  add x2,sp,#0x100
71029d3fdc  blr x8
71029d3fe0  tbz w0,#0x0,0x71029d3ff8
71029d3fe4  mov w0,#0x10
71029d3fe8  orr w1,wzr,#0xf0
71029d3fec  bl 0x710392e290
71029d3ff0  mov x22,x0
71029d3ff4  cbnz x0,0x71029d3ffc
71029d3ff8  mov x22,xzr
71029d3ffc  add x8,x24,x24, LSL #0x3
71029d4000  lsl x21,x8,#0x3
71029d4004  add x8,x20,x21
71029d4008  ldr x2,[x8, #0x40]
71029d400c  mov x0,x22
71029d4010  mov x1,x19
71029d4014  mov w3,wzr
71029d4018  mov w4,wzr
71029d401c  mov x5,xzr
71029d4020  bl 0x7103146b70
71029d4024  ldr x8,[x19, #0x948]
71029d4028  movi v0.2D,#0x0
71029d402c  add x8,x8,x21
71029d4030  add x9,x8,#0x8
71029d4034  mov x0,x22
71029d4038  ld1 {v0.S}[0],[x8], #0x4
71029d403c  ld1 {v0.S}[1],[x8]
71029d4040  ld1 {v0.S}[2],[x9]
71029d4044  str q0,[sp, #0x30]
71029d4048  bl 0x7103146db0
71029d404c  mov x0,x22
71029d4050  bl 0x710313ef20
71029d4054  ldr x9,[x19, #0x948]
71029d4058  ldr x8,[x19, #0x340]
71029d405c  add x9,x9,x21
71029d4060  ldp s0,s1,[x9, #0x2c]
71029d4064  fsub s1,s1,s0
71029d4068  ldp w9,w10,[x8]
71029d406c  str w10,[x8]
71029d4070  ldp w10,w11,[x8, #0x8]
71029d4074  eor w9,w9,w9, LSL #0xb
71029d4078  eor w9,w9,w9, LSR #0x8
71029d407c  eor w9,w9,w11
71029d4080  eor w9,w9,w11, LSR #0x13
71029d4084  ucvtf s2,w9
71029d4088  fmul s1,s1,s2
71029d408c  stp w10,w11,[x8, #0x4]
71029d4090  str w9,[x8, #0xc]
71029d4094  ldr x8,[x19, #0x948]
71029d4098  add x8,x8,x21
71029d409c  ldr w20,[x8, #0x3c]
71029d40a0  ldr x28,[x19, #0x748]
71029d40a4  ldr x8,[x19, #0x750]
71029d40a8  cmp x28,x8
71029d40ac  fmul s2,s1,s8
71029d40b0  fadd s9,s0,s2
71029d40b4  b.cs 0x71029d40e8
71029d40b8  ldr q0,[sp, #0x30]
71029d40bc  str x22,[x28]
71029d40c0  str wzr,[x28, #0x30]
71029d40c4  str q0,[x28, #0x10]
71029d40c8  ldr q0,[sp, #0x20]
71029d40cc  str s9,[x28, #0x34]
71029d40d0  stp w26,w20,[x28, #0x38]
71029d40d4  str q0,[x28, #0x20]
71029d40d8  ldr x8,[x19, #0x748]
71029d40dc  add x8,x8,#0x40
71029d40e0  str x8,[x19, #0x748]
71029d40e4  b 0x71029d458c
71029d40e8  ldr x9,[sp, #0x10]
71029d40ec  ldr x21,[x9]
71029d40f0  sub x9,x28,x21
71029d40f4  str w26,[sp, #0x18]
71029d40f8  asr x26,x9,#0x6
71029d40fc  add x9,x26,#0x1
71029d4100  lsr x10,x9,#0x3a
71029d4104  cbnz x10,0x71029d6334
71029d4108  ldr q0,[sp, #0x30]
71029d410c  sub x8,x8,x21
71029d4110  asr x10,x8,#0x6
71029d4114  orr x11,xzr,#0x1fffffffffffffe
71029d4118  cmp x10,x11
71029d411c  b.hi 0x71029d413c
71029d4120  asr x8,x8,#0x5
71029d4124  cmp x8,x9
71029d4128  csel x25,x9,x8,cc
71029d412c  cbz x25,0x71029d459c
71029d4130  lsr x8,x25,#0x3a
71029d4134  cbz x8,0x71029d4140
71029d4138  b 0x71029d6344
71029d413c  orr x25,xzr,#0x3ffffffffffffff
71029d4140  lsl x8,x25,#0x6
71029d4144  cmp x8,#0x0
71029d4148  csinc x23,x8,xzr,ne
71029d414c  mov w0,#0x10
71029d4150  mov x1,x23
71029d4154  bl 0x710392e290
71029d4158  cbnz x0,0x71029d419c
71029d415c  adrp x8,0x7105332000
71029d4160  ldr x0,[x8, #0xf00]
71029d4164  cbz x0,0x71029d4198
71029d4168  str wzr,[sp, #0xc0]
71029d416c  str x23,[sp, #0x100]
71029d4170  ldr x8,[x0]
71029d4174  ldr x8,[x8, #0x30]
71029d4178  add x1,sp,#0xc0
71029d417c  add x2,sp,#0x100
71029d4180  blr x8
71029d4184  tbz w0,#0x0,0x71029d4198
71029d4188  mov w0,#0x10
71029d418c  mov x1,x23
71029d4190  bl 0x710392e290
71029d4194  cbnz x0,0x71029d419c
71029d4198  mov x0,xzr
71029d419c  ldr q0,[sp, #0x30]
71029d41a0  ldr x23,[sp, #0x8]
71029d41a4  ldr w9,[sp, #0x18]
71029d41a8  add x12,x0,x26, LSL #0x6
71029d41ac  str x22,[x12]
71029d41b0  str q0,[x12, #0x10]
71029d41b4  str wzr,[x12, #0x30]
71029d41b8  add x8,x0,x25, LSL #0x6
71029d41bc  subs x10,x28,x21
71029d41c0  str s9,[x12, #0x34]
71029d41c4  stp w9,w20,[x12, #0x38]
71029d41c8  ldr q0,[sp, #0x20]
71029d41cc  add x9,x12,#0x40
71029d41d0  str q0,[x12, #0x20]
71029d41d4  b.eq 0x71029d4570
71029d41d8  sub x11,x10,#0x40
71029d41dc  lsr x13,x11,#0x6
71029d41e0  mvn x10,x13
71029d41e4  add w13,w13,#0x1
71029d41e8  ands x13,x13,#0x7
71029d41ec  b.eq 0x71029d425c
71029d41f0  sub x14,x26,x13
71029d41f4  neg x13,x13
71029d41f8  sub x12,x12,#0x40
71029d41fc  sub x15,x28,#0x40
71029d4200  mov x16,x13
71029d4204  ldr x17,[x15, #0x8]
71029d4208  ldr x18,[x15, #0x18]
71029d420c  str x18,[x12, #0x18]
71029d4210  str x17,[x12, #0x8]
71029d4214  ldr x17,[x15, #0x28]
71029d4218  ldr x18,[x15, #0x38]
71029d421c  str x18,[x12, #0x38]
71029d4220  str x17,[x12, #0x28]
71029d4224  ldr x17,[x15]
71029d4228  ldr x18,[x15, #0x10]
71029d422c  str x18,[x12, #0x10]
71029d4230  str x17,[x12]
71029d4234  ldr x17,[x15, #0x20]
71029d4238  ldr x18,[x15, #0x30]
71029d423c  str x18,[x12, #0x30]
71029d4240  str x17,[x12, #0x20]
71029d4244  sub x12,x12,#0x40
71029d4248  sub x15,x15,#0x40
71029d424c  adds x16,x16,#0x1
71029d4250  b.ne 0x71029d4204
71029d4254  add x12,x0,x14, LSL #0x6
71029d4258  add x28,x28,x13, LSL #0x6
71029d425c  add x10,x26,x10
71029d4260  cmp x11,#0x1c0
71029d4264  b.cc 0x71029d4454
71029d4268  sub x11,x12,#0x100
71029d426c  ldur x13,[x28, #-0x28]
71029d4270  ldur x12,[x28, #-0x38]
71029d4274  str x13,[x11, #0xd8]
71029d4278  ldur x13,[x28, #-0x40]
71029d427c  ldur x14,[x28, #-0x30]
71029d4280  str x13,[x11, #0xc0]
71029d4284  stp x12,x14,[x11, #0xc8]
71029d4288  ldur x12,[x28, #-0x8]
71029d428c  ldur x13,[x28, #-0x18]
71029d4290  str x12,[x11, #0xf8]
71029d4294  ldur x12,[x28, #-0x20]
71029d4298  ldur x14,[x28, #-0x10]
71029d429c  stp x13,x14,[x11, #0xe8]
71029d42a0  str x12,[x11, #0xe0]
71029d42a4  ldp x12,x13,[x28, #-0x60]
71029d42a8  ldp x14,x15,[x28, #-0x50]
71029d42ac  str x12,[x11, #0xa0]
71029d42b0  ldp x12,x16,[x28, #-0x80]
71029d42b4  sub x1,x28,#0x1e0
71029d42b8  ldp x17,x18,[x28, #-0x70]
71029d42bc  str x13,[x11, #0xa8]
71029d42c0  stp x14,x15,[x11, #0xb0]
71029d42c4  sub x2,x28,#0x1d8
71029d42c8  stp x17,x18,[x11, #0x90]
71029d42cc  sub x17,x28,#0x1f0
71029d42d0  stp x12,x16,[x11, #0x80]
71029d42d4  sub x16,x28,#0x1f8
71029d42d8  ldp x12,x13,[x28, #-0xc0]
71029d42dc  sub x18,x28,#0x1e8
71029d42e0  ldp x14,x15,[x28, #-0xb0]
71029d42e4  stp x14,x15,[x11, #0x50]
71029d42e8  stp x12,x13,[x11, #0x40]
71029d42ec  ldp x12,x13,[x28, #-0xa0]
71029d42f0  ldp x14,x15,[x28, #-0x90]
71029d42f4  stp x14,x15,[x11, #0x70]
71029d42f8  stp x12,x13,[x11, #0x60]
71029d42fc  ldp x12,x13,[x28, #-0x100]
71029d4300  ldp x14,x15,[x28, #-0xf0]
71029d4304  stp x14,x15,[x11, #0x10]
71029d4308  stp x12,x13,[x11]
71029d430c  ldp x12,x13,[x28, #-0xe0]
71029d4310  ldp x14,x15,[x28, #-0xd0]
71029d4314  stp x14,x15,[x11, #0x30]
71029d4318  sub x14,x28,#0x130
71029d431c  stp x12,x13,[x11, #0x20]
71029d4320  sub x12,x28,#0x140
71029d4324  sub x13,x28,#0x138
71029d4328  sub x15,x28,#0x128
71029d432c  ldr x12,[x12]
71029d4330  ldr x13,[x13]
71029d4334  ldr x14,[x14]
71029d4338  ldr x15,[x15]
71029d433c  stp x14,x15,[x11, #-0x30]
71029d4340  sub x14,x28,#0x110
71029d4344  stp x12,x13,[x11, #-0x40]
71029d4348  sub x12,x28,#0x120
71029d434c  sub x13,x28,#0x118
71029d4350  sub x15,x28,#0x108
71029d4354  ldr x12,[x12]
71029d4358  ldr x13,[x13]
71029d435c  ldr x14,[x14]
71029d4360  ldr x15,[x15]
71029d4364  stp x14,x15,[x11, #-0x10]
71029d4368  sub x14,x28,#0x170
71029d436c  stp x12,x13,[x11, #-0x20]
71029d4370  sub x12,x28,#0x180
71029d4374  sub x13,x28,#0x178
71029d4378  sub x15,x28,#0x168
71029d437c  ldr x12,[x12]
71029d4380  ldr x13,[x13]
71029d4384  ldr x14,[x14]
71029d4388  ldr x15,[x15]
71029d438c  stp x14,x15,[x11, #-0x70]
71029d4390  sub x14,x28,#0x150
71029d4394  stp x12,x13,[x11, #-0x80]
71029d4398  sub x12,x28,#0x160
71029d439c  sub x13,x28,#0x158
71029d43a0  sub x15,x28,#0x148
71029d43a4  ldr x12,[x12]
71029d43a8  ldr x13,[x13]
71029d43ac  ldr x14,[x14]
71029d43b0  ldr x15,[x15]
71029d43b4  stp x14,x15,[x11, #-0x50]
71029d43b8  sub x14,x28,#0x1b0
71029d43bc  stp x12,x13,[x11, #-0x60]
71029d43c0  sub x12,x28,#0x1c0
71029d43c4  sub x13,x28,#0x1b8
71029d43c8  sub x15,x28,#0x1a8
71029d43cc  ldr x12,[x12]
71029d43d0  ldr x13,[x13]
71029d43d4  ldr x14,[x14]
71029d43d8  ldr x15,[x15]
71029d43dc  stp x14,x15,[x11, #-0xb0]
71029d43e0  sub x14,x28,#0x190
71029d43e4  stp x12,x13,[x11, #-0xc0]
71029d43e8  sub x12,x28,#0x1a0
71029d43ec  sub x13,x28,#0x198
71029d43f0  sub x15,x28,#0x188
71029d43f4  ldr x12,[x12]
71029d43f8  ldr x13,[x13]
71029d43fc  ldr x14,[x14]
71029d4400  ldr x15,[x15]
71029d4404  stp x14,x15,[x11, #-0x90]
71029d4408  sub x14,x28,#0x1d0
71029d440c  stp x12,x13,[x11, #-0xa0]
71029d4410  sub x12,x28,#0x1c8
71029d4414  sub x28,x28,#0x200
71029d4418  ldr x13,[x28]
71029d441c  ldr x15,[x16]
71029d4420  ldr x16,[x17]
71029d4424  ldr x17,[x18]
71029d4428  cmp x21,x28
71029d442c  stp x16,x17,[x11, #-0xf0]
71029d4430  stp x13,x15,[x11, #-0x100]
71029d4434  ldr x13,[x1]
71029d4438  ldr x15,[x2]
71029d443c  ldr x14,[x14]
71029d4440  ldr x12,[x12]
71029d4444  stp x14,x12,[x11, #-0xd0]
71029d4448  stp x13,x15,[x11, #-0xe0]
71029d444c  sub x11,x11,#0x200
71029d4450  b.ne 0x71029d426c
71029d4454  add x11,x0,x10, LSL #0x6
71029d4458  ldr x21,[x19, #0x740]
71029d445c  ldr x10,[x19, #0x748]
71029d4460  ldr w26,[sp, #0x18]
71029d4464  str x8,[x19, #0x750]
71029d4468  str x11,[x19, #0x740]
71029d446c  subs x8,x10,x21
71029d4470  str x9,[x19, #0x748]
71029d4474  b.eq 0x71029d4580
71029d4478  sub x8,x8,#0x40
71029d447c  ubfx x9,x8,#0x6,#0x1a
71029d4480  add w9,w9,#0x1
71029d4484  ands x9,x9,#0x7
71029d4488  b.eq 0x71029d44a8
71029d448c  neg x9,x9
71029d4490  sub x11,x10,#0x40
71029d4494  mov x12,x9
71029d4498  adds x12,x12,#0x1
71029d449c  str xzr,[x11], #-0x40
71029d44a0  b.ne 0x71029d4498
71029d44a4  add x10,x10,x9, LSL #0x6
71029d44a8  cmp x8,#0x1c0
71029d44ac  b.cc 0x71029d4580
71029d44b0  sub x8,x10,x21
71029d44b4  sub x8,x8,#0x200
71029d44b8  tbnz w8,#0x9,0x71029d44ec
71029d44bc  sub x9,x10,#0x140
71029d44c0  stur xzr,[x10, #-0x40]
71029d44c4  stur xzr,[x10, #-0x80]
71029d44c8  stur xzr,[x10, #-0xc0]
71029d44cc  stur xzr,[x10, #-0x100]
71029d44d0  str xzr,[x9]
71029d44d4  sub x9,x10,#0x180
71029d44d8  str xzr,[x9]
71029d44dc  sub x9,x10,#0x1c0
71029d44e0  sub x10,x10,#0x200
71029d44e4  str xzr,[x9]
71029d44e8  str xzr,[x10]
71029d44ec  cmp x8,#0x200
71029d44f0  b.cc 0x71029d4580
71029d44f4  sub x8,x10,#0x140
71029d44f8  stur xzr,[x10, #-0x40]
71029d44fc  stur xzr,[x10, #-0x80]
71029d4500  stur xzr,[x10, #-0xc0]
71029d4504  stur xzr,[x10, #-0x100]
71029d4508  str xzr,[x8]
71029d450c  sub x8,x10,#0x180
71029d4510  str xzr,[x8]
71029d4514  sub x8,x10,#0x1c0
71029d4518  str xzr,[x8]
71029d451c  sub x8,x10,#0x200
71029d4520  str xzr,[x8]
71029d4524  sub x8,x10,#0x240
71029d4528  str xzr,[x8]
71029d452c  sub x8,x10,#0x280
71029d4530  str xzr,[x8]
71029d4534  sub x8,x10,#0x2c0
71029d4538  str xzr,[x8]
71029d453c  sub x8,x10,#0x300
71029d4540  str xzr,[x8]
71029d4544  sub x8,x10,#0x340
71029d4548  str xzr,[x8]
71029d454c  sub x8,x10,#0x380
71029d4550  str xzr,[x8]
71029d4554  sub x8,x10,#0x3c0
71029d4558  sub x10,x10,#0x400
71029d455c  cmp x21,x10
71029d4560  str xzr,[x8]
71029d4564  str xzr,[x10]
71029d4568  b.ne 0x71029d44f4
71029d456c  b 0x71029d4580
71029d4570  ldr w26,[sp, #0x18]
71029d4574  str x12,[x19, #0x740]
71029d4578  str x9,[x19, #0x748]
71029d457c  str x8,[x19, #0x750]
71029d4580  cbz x21,0x71029d458c
71029d4584  mov x0,x21
71029d4588  bl 0x710392eb40
71029d458c  add x24,x24,#0x1
71029d4590  cmp x24,x23
71029d4594  b.ne 0x71029d3f90
71029d4598  b 0x71029d45a4
71029d459c  mov x0,xzr
71029d45a0  b 0x71029d41a4
71029d45a4  ldr x9,[x19, #0x8d8]
71029d45a8  ldr x8,[x19, #0x8d0]
71029d45ac  mov w26,#0x50000000
71029d45b0  cmp x9,x8
71029d45b4  b.eq 0x71029d49f8
71029d45b8  fmov s8,0xbf800000
71029d45bc  mov x27,xzr
71029d45c0  add x9,x19,#0x7a8
71029d45c4  orr w28,wzr,#0xc
71029d45c8  mov w20,#0x10
71029d45cc  mov w21,#0x1a0
71029d45d0  adrp x23,0x71043bc000
71029d45d4  add x23,x23,#0x648
71029d45d8  str x9,[sp, #0x18]
71029d45dc  b 0x71029d4604
71029d45e0  str x10,[x19, #0x7a8]
71029d45e4  str x9,[x19, #0x7b0]
71029d45e8  orr w28,wzr,#0xc
71029d45ec  str x8,[x19, #0x7b8]
71029d45f0  mov w20,#0x10
71029d45f4  cbnz x24,0x71029d49c8
71029d45f8  b 0x71029d49d0
71029d45fc  mov x0,xzr
71029d4600  b 0x71029d4890
71029d4604  madd x8,x27,x28,x8
71029d4608  ldr s0,[x8]
71029d460c  add x9,x8,#0x4
71029d4610  ld1 {v0.S}[1],[x9]
71029d4614  ldr s1,[x8, #0x8]
71029d4618  mov w0,#0x10
71029d461c  mov x1,x21
71029d4620  stp q1,q0,[sp, #0x20]
71029d4624  bl 0x710392e290
71029d4628  mov x25,x0
71029d462c  cbnz x0,0x71029d4674
71029d4630  adrp x8,0x7105332000
71029d4634  ldr x0,[x8, #0xf00]
71029d4638  cbz x0,0x71029d4670
71029d463c  str wzr,[sp, #0xc0]
71029d4640  str x21,[sp, #0x100]
71029d4644  ldr x8,[x0]
71029d4648  ldr x8,[x8, #0x30]
71029d464c  add x1,sp,#0xc0
71029d4650  add x2,sp,#0x100
71029d4654  blr x8
71029d4658  tbz w0,#0x0,0x71029d4670
71029d465c  mov w0,#0x10
71029d4660  mov x1,x21
71029d4664  bl 0x710392e290
71029d4668  mov x25,x0
71029d466c  cbnz x0,0x71029d4674
71029d4670  mov x25,xzr
71029d4674  cmp x27,#0x0
71029d4678  cset w3,ne
71029d467c  mov x0,x25
71029d4680  mov x1,x19
71029d4684  adrp x2,0x71042a1000
71029d4688  add x2,x2,#0x186
71029d468c  mov x4,x23
71029d4690  mov w5,wzr
71029d4694  bl 0x7103143880
71029d4698  ldr q0,[sp, #0x30]
71029d469c  movi d1,#0x0
71029d46a0  add x8,x19,#0x8e8
71029d46a4  mov v0.D[0x1],v1.D[0x0]
71029d46a8  movi v1.2D,#0x0
71029d46ac  ld1 {v1.S}[0],[x8]
71029d46b0  add x8,x19,#0x8ec
71029d46b4  ld1 {v1.S}[1],[x8]
71029d46b8  add x8,sp,#0x100
71029d46bc  mov w9,#0xffffffff
71029d46c0  str xzr,[sp, #0x120]
71029d46c4  str w26,[sp, #0x128]
71029d46c8  stur x9,[x8, #0x2c]
71029d46cc  strh wzr,[sp, #0x134]
71029d46d0  str w26,[sp, #0x138]
71029d46d4  stp q0,q1,[sp, #0x100]
71029d46d8  ldr x8,[x25]
71029d46dc  ldr x8,[x8, #0x98]
71029d46e0  add x1,sp,#0x100
71029d46e4  mov x0,x25
71029d46e8  mov w2,wzr
71029d46ec  blr x8
71029d46f0  ldr q1,[sp, #0x20]
71029d46f4  movi d0,#0x0
71029d46f8  ldr x8,[x19, #0x900]
71029d46fc  mov v0.S[0x0],v1.S[0x0]
71029d4700  ldr q1,[sp, #0x30]
71029d4704  mov v1.D[0x1],v0.D[0x0]
71029d4708  lsl x9,x27,#0x3
71029d470c  ldr s9,[x8,x9]
71029d4710  mov x0,x25
71029d4714  str q1,[x25, #0x70]
71029d4718  bl 0x7103143fd0
71029d471c  fcmp s9,s8
71029d4720  str s9,[x25, #0x124]
71029d4724  b.pl 0x71029d4730
71029d4728  mov w8,#0x1
71029d472c  strb w8,[x25, #0x190]
71029d4730  ldr x8,[x19, #0x900]
71029d4734  add x8,x8,x27, LSL #0x3
71029d4738  ldr w8,[x8, #0x4]
71029d473c  str w8,[x25, #0x11c]
71029d4740  movi d2,#0x0
71029d4744  mov v1.16B,v2.16B
71029d4748  add x8,x19,#0x8f4
71029d474c  add x9,x19,#0x8f8
71029d4750  ldr s0,[x19, #0x8f0]
71029d4754  ld1 {v1.S}[0],[x9]
71029d4758  ld1 {v0.S}[1],[x8]
71029d475c  adrp x8,0x71052a8000
71029d4760  mov v0.D[0x1],v1.D[0x0]
71029d4764  mov v1.16B,v2.16B
71029d4768  str q0,[x25, #0x130]
71029d476c  ldr x8,[x8, #0xa88]
71029d4770  ldr q0,[x8]
71029d4774  ldr x8,[x19, #0x338]
71029d4778  str x8,[x25, #0x108]
71029d477c  mov v1.S[0x0],v0.S[0x2]
71029d4780  mov v0.D[0x1],v1.D[0x0]
71029d4784  str w20,[x25, #0x104]
71029d4788  str q0,[x25, #0x180]
71029d478c  ldrb w8,[x19, #0x18]
71029d4790  cbz w8,0x71029d47a0
71029d4794  mov x0,x25
71029d4798  bl 0x710313ef20
71029d479c  b 0x71029d47bc
71029d47a0  ldr x8,[x25, #0xb8]
71029d47a4  cbz x8,0x71029d47b4
71029d47a8  add x0,x8,#0x108
71029d47ac  strb wzr,[x8, #0x110]
71029d47b0  bl 0x71025e9d50
71029d47b4  mov x0,x25
71029d47b8  bl 0x7103140b20
71029d47bc  ldr x22,[x19, #0x7b0]
71029d47c0  ldr x8,[x19, #0x7b8]
71029d47c4  cmp x22,x8
71029d47c8  b.cs 0x71029d47e0
71029d47cc  str x25,[x22]
71029d47d0  ldr x8,[x19, #0x7b0]
71029d47d4  add x8,x8,#0x8
71029d47d8  str x8,[x19, #0x7b0]
71029d47dc  b 0x71029d49d0
71029d47e0  ldr x9,[sp, #0x18]
71029d47e4  ldr x24,[x9]
71029d47e8  sub x9,x22,x24
71029d47ec  asr x20,x9,#0x3
71029d47f0  add x9,x20,#0x1
71029d47f4  lsr x10,x9,#0x3d
71029d47f8  cbnz x10,0x71029d633c
71029d47fc  sub x8,x8,x24
71029d4800  asr x10,x8,#0x3
71029d4804  orr x11,xzr,#0xffffffffffffffe
71029d4808  cmp x10,x11
71029d480c  b.hi 0x71029d482c
71029d4810  asr x8,x8,#0x2
71029d4814  cmp x8,x9
71029d4818  csel x28,x9,x8,cc
71029d481c  cbz x28,0x71029d45fc
71029d4820  lsr x8,x28,#0x3d
71029d4824  cbz x8,0x71029d4830
71029d4828  b 0x71029d6344
71029d482c  orr x28,xzr,#0x1fffffffffffffff
71029d4830  lsl x8,x28,#0x3
71029d4834  cmp x8,#0x0
71029d4838  csinc x26,x8,xzr,ne
71029d483c  mov w0,#0x10
71029d4840  mov x1,x26
71029d4844  bl 0x710392e290
71029d4848  cbnz x0,0x71029d488c
71029d484c  adrp x8,0x7105332000
71029d4850  ldr x0,[x8, #0xf00]
71029d4854  cbz x0,0x71029d4888
71029d4858  stur wzr,[x29, #-0x80]
71029d485c  str x26,[sp, #0xc0]
71029d4860  ldr x8,[x0]
71029d4864  ldr x8,[x8, #0x30]
71029d4868  sub x1,x29,#0x80
71029d486c  add x2,sp,#0xc0
71029d4870  blr x8
71029d4874  tbz w0,#0x0,0x71029d4888
71029d4878  mov w0,#0x10
71029d487c  mov x1,x26
71029d4880  bl 0x710392e290
71029d4884  cbnz x0,0x71029d488c
71029d4888  mov x0,xzr
71029d488c  mov w26,#0x50000000
71029d4890  add x10,x0,x20, LSL #0x3
71029d4894  mov x9,x10
71029d4898  add x8,x0,x28, LSL #0x3
71029d489c  str x25,[x9], #0x8
71029d48a0  subs x11,x22,x24
71029d48a4  b.eq 0x71029d45e0
71029d48a8  sub x12,x11,#0x8
71029d48ac  lsr x13,x12,#0x3
71029d48b0  mvn x11,x13
71029d48b4  add w13,w13,#0x1
71029d48b8  ands x13,x13,#0x3
71029d48bc  orr w28,wzr,#0xc
71029d48c0  b.eq 0x71029d48f0
71029d48c4  sub x14,x20,x13
71029d48c8  neg x13,x13
71029d48cc  sub x10,x10,#0x8
71029d48d0  sub x15,x22,#0x8
71029d48d4  mov x16,x13
71029d48d8  ldr x17,[x15], #-0x8
71029d48dc  adds x16,x16,#0x1
71029d48e0  str x17,[x10], #-0x8
71029d48e4  b.ne 0x71029d48d8
71029d48e8  add x10,x0,x14, LSL #0x3
71029d48ec  add x22,x22,x13, LSL #0x3
71029d48f0  add x11,x20,x11
71029d48f4  cmp x12,#0x18
71029d48f8  mov w20,#0x10
71029d48fc  b.cc 0x71029d4988
71029d4900  sub x12,x22,x24
71029d4904  sub x12,x12,#0x20
71029d4908  tbnz w12,#0x5,0x71029d4930
71029d490c  ldur x13,[x22, #-0x8]
71029d4910  stur x13,[x10, #-0x8]
71029d4914  ldur x13,[x22, #-0x10]
71029d4918  stur x13,[x10, #-0x10]
71029d491c  ldur x13,[x22, #-0x18]
71029d4920  stur x13,[x10, #-0x18]
71029d4924  ldr x13,[x22, #-0x20]!
71029d4928  stur x13,[x10, #-0x20]
71029d492c  sub x10,x10,#0x20
71029d4930  cmp x12,#0x20
71029d4934  b.cc 0x71029d4988
71029d4938  sub x10,x10,#0x20
71029d493c  ldur x12,[x22, #-0x8]
71029d4940  str x12,[x10, #0x18]
71029d4944  ldur x12,[x22, #-0x10]
71029d4948  str x12,[x10, #0x10]
71029d494c  ldur x12,[x22, #-0x18]
71029d4950  str x12,[x10, #0x8]
71029d4954  ldur x12,[x22, #-0x20]
71029d4958  str x12,[x10]
71029d495c  ldur x12,[x22, #-0x28]
71029d4960  stur x12,[x10, #-0x8]
71029d4964  ldur x12,[x22, #-0x30]
71029d4968  stur x12,[x10, #-0x10]
71029d496c  ldur x12,[x22, #-0x38]
71029d4970  stur x12,[x10, #-0x18]
71029d4974  ldr x12,[x22, #-0x40]!
71029d4978  stur x12,[x10, #-0x20]
71029d497c  sub x10,x10,#0x40
71029d4980  cmp x24,x22
71029d4984  b.ne 0x71029d493c
71029d4988  ldr x24,[x19, #0x7a8]
71029d498c  ldr x10,[x19, #0x7b0]
71029d4990  add x11,x0,x11, LSL #0x3
71029d4994  str x8,[x19, #0x7b8]
71029d4998  str x11,[x19, #0x7a8]
71029d499c  subs x8,x10,x24
71029d49a0  str x9,[x19, #0x7b0]
71029d49a4  b.eq 0x71029d49c4
71029d49a8  sub x9,x8,#0x8
71029d49ac  mvn x9,x9
71029d49b0  and x9,x9,#-0x8
71029d49b4  add x0,x10,x9
71029d49b8  and x2,x8,#-0x8
71029d49bc  mov w1,wzr
71029d49c0  bl 0x71039c02a0
71029d49c4  cbz x24,0x71029d49d0
71029d49c8  mov x0,x24
71029d49cc  bl 0x710392eb40
71029d49d0  ldr x9,[x19, #0x8d8]
71029d49d4  ldr x8,[x19, #0x8d0]
71029d49d8  sub x9,x9,x8
71029d49dc  orr x10,xzr,#-0x5555555555555556
71029d49e0  movk x10,#0xaaab
71029d49e4  asr x9,x9,#0x2
71029d49e8  mul x9,x9,x10
71029d49ec  add x27,x27,#0x1
71029d49f0  cmp x9,x27
71029d49f4  b.hi 0x71029d4604
71029d49f8  ldr x9,[x19, #0x310]
71029d49fc  str xzr,[x19, #0x7c8]
71029d4a00  str xzr,[x19, #0x7c0]
71029d4a04  ldp x8,x9,[x9, #0xd0]
71029d4a08  cmp x8,x9
71029d4a0c  b.eq 0x71029d4a48
71029d4a10  mov x20,#0xad18
71029d4a14  movk x20,#0xe8bf, LSL #16
71029d4a18  add x21,x19,#0x7c0
71029d4a1c  movk x20,#0x19, LSL #32
71029d4a20  ldr w10,[x8, #0x8]
71029d4a24  cmp w10,#0x1
71029d4a28  b.hi 0x71029d4a3c
71029d4a2c  ldr x0,[x8]
71029d4a30  ldr x10,[x0, #0x68]
71029d4a34  cmp x10,x20
71029d4a38  b.eq 0x71029d4bc0
71029d4a3c  add x8,x8,#0x10
71029d4a40  cmp x9,x8
71029d4a44  b.ne 0x71029d4a20
71029d4a48  str xzr,[x19, #0x7c0]
71029d4a4c  ldr x9,[x19, #0x310]
71029d4a50  str wzr,[x19, #0x848]
71029d4a54  str xzr,[x19, #0x840]
71029d4a58  str xzr,[x19, #0x838]
71029d4a5c  ldp x10,x11,[x9, #0xd0]
71029d4a60  cmp x10,x11
71029d4a64  b.eq 0x71029d4a9c
71029d4a68  mov x12,#0x1cd5
71029d4a6c  movk x12,#0xec3, LSL #16
71029d4a70  movk x12,#0xd, LSL #32
71029d4a74  ldr w8,[x10, #0x8]
71029d4a78  cmp w8,#0x1
71029d4a7c  b.hi 0x71029d4a90
71029d4a80  ldr x8,[x10]
71029d4a84  ldr x13,[x8, #0x68]
71029d4a88  cmp x13,x12
71029d4a8c  b.eq 0x71029d4aa0
71029d4a90  add x10,x10,#0x10
71029d4a94  cmp x11,x10
71029d4a98  b.ne 0x71029d4a74
71029d4a9c  mov x8,xzr
71029d4aa0  str x8,[x19, #0x838]
71029d4aa4  ldp x10,x9,[x9, #0xd0]
71029d4aa8  cmp x10,x9
71029d4aac  b.eq 0x71029d4ae4
71029d4ab0  mov x11,#0x2ff9
71029d4ab4  movk x11,#0xe025, LSL #16
71029d4ab8  movk x11,#0x17, LSL #32
71029d4abc  ldr w12,[x10, #0x8]
71029d4ac0  cmp w12,#0x1
71029d4ac4  b.hi 0x71029d4ad8
71029d4ac8  ldr x12,[x10]
71029d4acc  ldr x13,[x12, #0x68]
71029d4ad0  cmp x13,x11
71029d4ad4  b.eq 0x71029d4ae8
71029d4ad8  add x10,x10,#0x10
71029d4adc  cmp x9,x10
71029d4ae0  b.ne 0x71029d4abc
71029d4ae4  mov x12,xzr
71029d4ae8  str x12,[x19, #0x840]
71029d4aec  cbz x8,0x71029d4e24
71029d4af0  cbz x12,0x71029d4e24
71029d4af4  ldrb w9,[x8, #0xe0]
71029d4af8  cbz w9,0x71029d4b08
71029d4afc  ldr x9,[x8, #0xc8]
71029d4b00  cbz x9,0x71029d4b08
71029d4b04  strb wzr,[x9, #0xc]
71029d4b08  ldr x8,[x8, #0xd8]
71029d4b0c  add x20,x19,#0x838
71029d4b10  cbz x8,0x71029d4b18
71029d4b14  strb wzr,[x8, #0x28]
71029d4b18  ldr x8,[x20]
71029d4b1c  cbz x8,0x71029d4cb0
71029d4b20  ldrb w9,[x8, #0xe0]
71029d4b24  cbz w9,0x71029d4b34
71029d4b28  ldr x9,[x8, #0xc8]
71029d4b2c  cbz x9,0x71029d4b34
71029d4b30  strh wzr,[x9, #0x32]
71029d4b34  ldr x8,[x8, #0xd8]
71029d4b38  cbz x8,0x71029d4b40
71029d4b3c  strb wzr,[x8, #0x22]
71029d4b40  ldr x0,[x20]
71029d4b44  mov x8,x0
71029d4b48  cbnz x8,0x71029d4cb8
71029d4b4c  b 0x71029d4d1c
71029d4b50  str x9,[x19, #0x760]
71029d4b54  cbz x9,0x71029d3f3c
71029d4b58  ldr x10,[x19, #0xa40]
71029d4b5c  mov x11,x10
71029d4b60  fmov s1,wzr
71029d4b64  ld1 {v0.S}[0],[x11], #0x4
71029d4b68  str q0,[x19, #0x770]
71029d4b6c  ld1 {v0.S}[1],[x11]
71029d4b70  add x11,x10,#0x8
71029d4b74  str q0,[x19, #0x770]
71029d4b78  ld1 {v0.S}[2],[x11]
71029d4b7c  mov v0.S[0x3],v1.S[0x0]
71029d4b80  str q0,[x19, #0x770]
71029d4b84  ldr w11,[x10, #0x10]
71029d4b88  str w11,[x19, #0x784]
71029d4b8c  ldr x11,[x19, #0x300]
71029d4b90  ldr x12,[x11, #0x18]
71029d4b94  ldp x11,x12,[x12]
71029d4b98  cmp x11,x12
71029d4b9c  b.eq 0x71029d5d30
71029d4ba0  ldr x13,[x11], #0x8
71029d4ba4  ldr x14,[x13, #0xa0]
71029d4ba8  and x14,x14,#0xffffffffff
71029d4bac  cmp x14,x8
71029d4bb0  b.eq 0x71029d5d18
71029d4bb4  cmp x12,x11
71029d4bb8  b.ne 0x71029d4ba0
71029d4bbc  b 0x71029d5d30
71029d4bc0  str x0,[x19, #0x7c0]
71029d4bc4  cbz x0,0x71029d4a4c
71029d4bc8  fmov s0,wzr
71029d4bcc  mov w1,#0x1
71029d4bd0  bl 0x710260fdd0
71029d4bd4  ldr x8,[x21]
71029d4bd8  cbz x8,0x71029d4c2c
71029d4bdc  ldrb w9,[x8, #0xe0]
71029d4be0  cbz w9,0x71029d4bf4
71029d4be4  ldr x9,[x8, #0xc8]
71029d4be8  cbz x9,0x71029d4bf4
71029d4bec  mov w10,#0x101
71029d4bf0  strh w10,[x9, #0x30]
71029d4bf4  ldr x9,[x8, #0xd8]
71029d4bf8  cbz x9,0x71029d4c04
71029d4bfc  mov w10,#0x1
71029d4c00  strb w10,[x9, #0x21]
71029d4c04  ldrb w9,[x8, #0xe0]
71029d4c08  cbz w9,0x71029d4c14
71029d4c0c  ldr x8,[x8, #0xb0]
71029d4c10  strb wzr,[x8, #0x10]
71029d4c14  ldr x8,[x21]
71029d4c18  cbz x8,0x71029d4c2c
71029d4c1c  add x0,x8,#0x108
71029d4c20  mov w9,#0x1
71029d4c24  strb w9,[x8, #0x110]
71029d4c28  bl 0x71025e9d50
71029d4c2c  ldr x8,[x19, #0x340]
71029d4c30  ldp w9,w10,[x8]
71029d4c34  ldr s0,[x19, #0x980]
71029d4c38  ldr s1,[x19, #0x984]
71029d4c3c  fsub s1,s1,s0
71029d4c40  str w10,[x8]
71029d4c44  ldp w10,w11,[x8, #0x8]
71029d4c48  eor w9,w9,w9, LSL #0xb
71029d4c4c  eor w9,w9,w9, LSR #0x8
71029d4c50  eor w9,w9,w11
71029d4c54  eor w9,w9,w11, LSR #0x13
71029d4c58  ucvtf s2,w9
71029d4c5c  stp w10,w11,[x8, #0x4]
71029d4c60  str w9,[x8, #0xc]
71029d4c64  adrp x8,0x7104473000
71029d4c68  fmul s1,s1,s2
71029d4c6c  ldr s2,[x8, #0x710]
71029d4c70  ldr x8,[x19, #0x300]
71029d4c74  fmul s4,s1,s2
71029d4c78  fadd s0,s0,s4
71029d4c7c  str s0,[x19, #0x7cc]
71029d4c80  ldr x9,[x8, #0x18]
71029d4c84  ldp x8,x9,[x9]
71029d4c88  cmp x8,x9
71029d4c8c  b.eq 0x71029d5f10
71029d4c90  ldr x10,[x8], #0x8
71029d4c94  ldr x11,[x10, #0xa0]
71029d4c98  and x11,x11,#0xffffffffff
71029d4c9c  cmp x11,x20
71029d4ca0  b.eq 0x71029d5e70
71029d4ca4  cmp x9,x8
71029d4ca8  b.ne 0x71029d4c90
71029d4cac  b 0x71029d5f10
71029d4cb0  mov x0,xzr
71029d4cb4  cbz x8,0x71029d4d1c
71029d4cb8  fmov s0,wzr
71029d4cbc  mov w1,#0x1
71029d4cc0  bl 0x710260fdd0
71029d4cc4  ldr x8,[x20]
71029d4cc8  cbz x8,0x71029d4d1c
71029d4ccc  ldrb w9,[x8, #0xe0]
71029d4cd0  cbz w9,0x71029d4ce4
71029d4cd4  ldr x9,[x8, #0xc8]
71029d4cd8  cbz x9,0x71029d4ce4
71029d4cdc  mov w10,#0x101
71029d4ce0  strh w10,[x9, #0x30]
71029d4ce4  ldr x9,[x8, #0xd8]
71029d4ce8  cbz x9,0x71029d4cf4
71029d4cec  mov w10,#0x1
71029d4cf0  strb w10,[x9, #0x21]
71029d4cf4  ldrb w9,[x8, #0xe0]
71029d4cf8  cbz w9,0x71029d4d04
71029d4cfc  ldr x8,[x8, #0xb0]
71029d4d00  strb wzr,[x8, #0x10]
71029d4d04  ldr x8,[x20]
71029d4d08  cbz x8,0x71029d4d1c
71029d4d0c  add x0,x8,#0x108
71029d4d10  mov w9,#0x1
71029d4d14  strb w9,[x8, #0x110]
71029d4d18  bl 0x71025e9d50
71029d4d1c  ldr x8,[x19, #0x840]
71029d4d20  cbz x8,0x71029d4de8
71029d4d24  ldrb w9,[x8, #0xe0]
71029d4d28  cbz w9,0x71029d4d38
71029d4d2c  ldr x9,[x8, #0xc8]
71029d4d30  cbz x9,0x71029d4d38
71029d4d34  strb wzr,[x9, #0xc]
71029d4d38  ldr x8,[x8, #0xd8]
71029d4d3c  cbz x8,0x71029d4d44
71029d4d40  strb wzr,[x8, #0x28]
71029d4d44  ldr x8,[x19, #0x840]
71029d4d48  cbz x8,0x71029d4d7c
71029d4d4c  ldrb w9,[x8, #0xe0]
71029d4d50  cbz w9,0x71029d4d60
71029d4d54  ldr x9,[x8, #0xc8]
71029d4d58  cbz x9,0x71029d4d60
71029d4d5c  strh wzr,[x9, #0x32]
71029d4d60  ldr x8,[x8, #0xd8]
71029d4d64  cbz x8,0x71029d4d6c
71029d4d68  strb wzr,[x8, #0x22]
71029d4d6c  ldr x0,[x19, #0x840]
71029d4d70  mov x8,x0
71029d4d74  cbnz x8,0x71029d4d84
71029d4d78  b 0x71029d4de8
71029d4d7c  mov x0,xzr
71029d4d80  cbz x8,0x71029d4de8
71029d4d84  fmov s0,wzr
71029d4d88  mov w1,#0x1
71029d4d8c  bl 0x710260fdd0
71029d4d90  ldr x8,[x19, #0x840]
71029d4d94  cbz x8,0x71029d4de8
71029d4d98  ldrb w9,[x8, #0xe0]
71029d4d9c  cbz w9,0x71029d4db0
71029d4da0  ldr x9,[x8, #0xc8]
71029d4da4  cbz x9,0x71029d4db0
71029d4da8  mov w10,#0x101
71029d4dac  strh w10,[x9, #0x30]
71029d4db0  ldr x9,[x8, #0xd8]
71029d4db4  cbz x9,0x71029d4dc0
71029d4db8  mov w10,#0x1
71029d4dbc  strb w10,[x9, #0x21]
71029d4dc0  ldrb w9,[x8, #0xe0]
71029d4dc4  cbz w9,0x71029d4dd0
71029d4dc8  ldr x8,[x8, #0xb0]
71029d4dcc  strb wzr,[x8, #0x10]
71029d4dd0  ldr x8,[x19, #0x840]
71029d4dd4  cbz x8,0x71029d4de8
71029d4dd8  add x0,x8,#0x108
71029d4ddc  mov w9,#0x1
71029d4de0  strb w9,[x8, #0x110]
71029d4de4  bl 0x71025e9d50
71029d4de8  ldr x8,[x20]
71029d4dec  cbz x8,0x71029d4dfc
71029d4df0  add x0,x8,#0x108
71029d4df4  strb wzr,[x8, #0x110]
71029d4df8  bl 0x71025e9d50
71029d4dfc  ldr x8,[x19, #0x840]
71029d4e00  cbz x8,0x71029d4e10
71029d4e04  add x0,x8,#0x108
71029d4e08  strb wzr,[x8, #0x110]
71029d4e0c  bl 0x71025e9d50
71029d4e10  adrp x1,0x710428f000
71029d4e14  add x1,x1,#0x828
71029d4e18  mov w2,#0x1
71029d4e1c  mov x0,x19
71029d4e20  bl 0x71029da0f0
71029d4e24  mov x8,#0x2b3
71029d4e28  movk x8,#0xa2c5, LSL #16
71029d4e2c  mov x12,#0x1fca
71029d4e30  movk x12,#0x1ed9, LSL #16
71029d4e34  movk x8,#0x15, LSL #32
71029d4e38  fmov s8,0x3f800000
71029d4e3c  movk x12,#0x3, LSL #32
71029d4e40  orr x13,xzr,#0x3f8000003f800000
71029d4e44  str x12,[sp, #0x148]
71029d4e48  orr w14,wzr,#0x3f800000
71029d4e4c  add x9,sp,#0x100
71029d4e50  str w14,[sp, #0x140]
71029d4e54  stp xzr,xzr,[sp, #0x110]
71029d4e58  mov x10,#0x7a80
71029d4e5c  movk x10,#0xfb99, LSL #16
71029d4e60  stp xzr,xzr,[sp, #0x100]
71029d4e64  stp xzr,x13,[sp, #0x130]
71029d4e68  mov x11,#0xfc4f
71029d4e6c  movk x11,#0x25cb, LSL #16
71029d4e70  sturh wzr,[x9, #0x71]
71029d4e74  movk x10,#0x7, LSL #32
71029d4e78  stp x8,xzr,[sp, #0x158]
71029d4e7c  orr w8,wzr,#0xe
71029d4e80  movk x11,#0x4, LSL #32
71029d4e84  mov x24,xzr
71029d4e88  mov w23,#0x1
71029d4e8c  stp xzr,xzr,[sp, #0x120]
71029d4e90  orr w27,wzr,#0x1c
71029d4e94  orr w28,wzr,#0x18
71029d4e98  strb wzr,[sp, #0x154]
71029d4e9c  str wzr,[sp, #0x150]
71029d4ea0  strb wzr,[sp, #0x173]
71029d4ea4  strh wzr,[sp, #0x174]
71029d4ea8  strh wzr,[sp, #0x180]
71029d4eac  strb wzr,[sp, #0x170]
71029d4eb0  str xzr,[sp, #0x168]
71029d4eb4  strb w8,[sp, #0x176]
71029d4eb8  adrp x8,0x71052a8000
71029d4ebc  str xzr,[sp, #0x178]
71029d4ec0  str x12,[sp, #0x188]
71029d4ec4  ldr x8,[x8, #0xa80]
71029d4ec8  ldr q0,[x8]
71029d4ecc  add x8,sp,#0x100
71029d4ed0  add x26,x8,#0xd4
71029d4ed4  add x8,x8,#0x67
71029d4ed8  orr w12,wzr,#0x3
71029d4edc  str x8,[sp, #0x30]
71029d4ee0  adrp x8,0x710446a000
71029d4ee4  ldr q1,[x8, #0x350]
71029d4ee8  str wzr,[sp, #0x1a0]
71029d4eec  strb wzr,[sp, #0x1a6]
71029d4ef0  strh wzr,[sp, #0x1a4]
71029d4ef4  str x13,[sp, #0x1a8]
71029d4ef8  str wzr,[sp, #0x1b0]
71029d4efc  strh wzr,[sp, #0x1c8]
71029d4f00  strh wzr,[sp, #0x1cc]
71029d4f04  stp x11,x10,[sp, #0x1b8]
71029d4f08  mov w11,#0xbf800000
71029d4f0c  mov w10,#0xffffffff
71029d4f10  str w11,[sp, #0x1d0]
71029d4f14  str q0,[sp, #0x190]
71029d4f18  stur xzr,[x9, #0xe4]
71029d4f1c  stur xzr,[x9, #0xdc]
71029d4f20  stur xzr,[x9, #0xd4]
71029d4f24  str w10,[sp, #0x1ec]
71029d4f28  strh w12,[sp, #0x1f0]
71029d4f2c  str w14,[sp, #0x1f4]
71029d4f30  strh wzr,[sp, #0x1f8]
71029d4f34  strb wzr,[sp, #0x1fa]
71029d4f38  str q1,[sp, #0x20]
71029d4f3c  b 0x71029d4f4c
71029d4f40  adrp x8,0x71052a8000
71029d4f44  ldr x8,[x8, #0xa80]
71029d4f48  ldr q0,[x8]
71029d4f4c  adrp x8,0x71052a8000
71029d4f50  ldr x8,[x8, #0xa88]
71029d4f54  ldr q1,[x8]
71029d4f58  ldr x8,[x19, #0x918]
71029d4f5c  strh w23,[sp, #0x164]
71029d4f60  strb wzr,[sp, #0x166]
71029d4f64  strh wzr,[sp, #0x174]
71029d4f68  strh wzr,[sp, #0x180]
71029d4f6c  ext v2.16B,v1.16B,v1.16B,0x8
71029d4f70  fmov s3,wzr
71029d4f74  mov v2.S[0x1],v3.S[0x0]
71029d4f78  orr x9,xzr,#0x3f8000003f800000
71029d4f7c  mov w10,#0x169
71029d4f80  orr w11,wzr,#0x3f800000
71029d4f84  stp x9,x10,[sp, #0x120]
71029d4f88  str w11,[sp, #0x140]
71029d4f8c  stp xzr,x9,[sp, #0x130]
71029d4f90  mov x9,#0x1fca
71029d4f94  movk x9,#0x1ed9, LSL #16
71029d4f98  movk x9,#0x3, LSL #32
71029d4f9c  mov x10,x9
71029d4fa0  str x9,[sp, #0x148]
71029d4fa4  mov w9,#0x3f
71029d4fa8  movk w9,#0x3, LSL #16
71029d4fac  str w9,[sp, #0x150]
71029d4fb0  mov w9,#0x19
71029d4fb4  strb w9,[sp, #0x154]
71029d4fb8  mov v1.D[0x1],v2.D[0x0]
71029d4fbc  mov x9,#0x2b3
71029d4fc0  movk x9,#0xa2c5, LSL #16
71029d4fc4  movk x9,#0x15, LSL #32
71029d4fc8  str x9,[sp, #0x158]
71029d4fcc  mov w9,#0x100
71029d4fd0  str w9,[sp, #0x160]
71029d4fd4  orr w9,wzr,#0xe
71029d4fd8  strb w9,[sp, #0x176]
71029d4fdc  ldr x9,[sp, #0x30]
71029d4fe0  mov w0,#0x10
71029d4fe4  stp q1,q1,[sp, #0x100]
71029d4fe8  stur xzr,[x9, #0x5]
71029d4fec  str xzr,[x9]
71029d4ff0  add x9,sp,#0x100
71029d4ff4  str xzr,[sp, #0x178]
71029d4ff8  str x10,[sp, #0x188]
71029d4ffc  str wzr,[sp, #0x1a0]
71029d5000  strh wzr,[sp, #0x1a4]
71029d5004  str q0,[sp, #0x190]
71029d5008  stur x11,[x9, #0xac]
71029d500c  mov x9,#0xfc4f
71029d5010  movk x9,#0x25cb, LSL #16
71029d5014  movk x9,#0x4, LSL #32
71029d5018  str x9,[sp, #0x1b8]
71029d501c  mov x9,#0x7a80
71029d5020  movk x9,#0xfb99, LSL #16
71029d5024  movk x9,#0x7, LSL #32
71029d5028  str x9,[sp, #0x1c0]
71029d502c  mov w9,#0xbf800000
71029d5030  str w9,[sp, #0x1d0]
71029d5034  mov w9,#0xffffffff
71029d5038  strh wzr,[sp, #0x1c8]
71029d503c  strh wzr,[sp, #0x1cc]
71029d5040  str xzr,[x26]
71029d5044  stp xzr,xzr,[x26, #0x8]
71029d5048  str w9,[sp, #0x1ec]
71029d504c  orr w9,wzr,#0x3
71029d5050  strh w9,[sp, #0x1f0]
71029d5054  orr w9,wzr,#0x38
71029d5058  madd x8,x24,x9,x8
71029d505c  str w11,[sp, #0x1f4]
71029d5060  strh wzr,[sp, #0x1f8]
71029d5064  mov w1,#0x2a0
71029d5068  strb wzr,[sp, #0x1fa]
71029d506c  ldr s0,[x8]
71029d5070  ucvtf s0,s0
71029d5074  str s0,[sp, #0x120]
71029d5078  ldr w9,[x8, #0x4]
71029d507c  str w9,[sp, #0x128]
71029d5080  ldr w9,[x8, #0x8]
71029d5084  str w9,[sp, #0x12c]
71029d5088  ldr w9,[x8, #0xc]
71029d508c  str w9,[sp, #0x130]
71029d5090  ldr w9,[x8, #0x10]
71029d5094  str w9,[sp, #0x134]
71029d5098  ldr w9,[x8, #0x14]
71029d509c  str w9,[sp, #0x178]
71029d50a0  ldr w9,[x8, #0x18]
71029d50a4  str w9,[sp, #0x13c]
71029d50a8  ldrb w9,[x8, #0x1c]
71029d50ac  strb w9,[sp, #0x16d]
71029d50b0  mov w9,#0x3f
71029d50b4  movk w9,#0x7, LSL #16
71029d50b8  str w9,[sp, #0x150]
71029d50bc  orr w9,wzr,#0x1f
71029d50c0  strb w9,[sp, #0x154]
71029d50c4  ldr x9,[x8, #0x20]
71029d50c8  str x9,[sp, #0x158]
71029d50cc  ldr w9,[x8, #0x30]
71029d50d0  strb w9,[sp, #0x160]
71029d50d4  ldr w9,[x8, #0x28]
71029d50d8  strb w9,[sp, #0x161]
71029d50dc  ldr w9,[x8, #0x2c]
71029d50e0  strb w9,[sp, #0x16a]
71029d50e4  strb wzr,[sp, #0x171]
71029d50e8  ldr w8,[x8, #0x34]
71029d50ec  str w8,[sp, #0x140]
71029d50f0  ldr x23,[x19, #0x930]
71029d50f4  madd x8,x24,x27,x23
71029d50f8  add x20,x8,#0x18
71029d50fc  bl 0x710392e290
71029d5100  mov x22,x0
71029d5104  cbnz x0,0x71029d5150
71029d5108  adrp x8,0x7105332000
71029d510c  ldr x0,[x8, #0xf00]
71029d5110  cbz x0,0x71029d514c
71029d5114  mov w8,#0x2a0
71029d5118  stur wzr,[x29, #-0x80]
71029d511c  sub x1,x29,#0x80
71029d5120  str x8,[sp, #0xc0]
71029d5124  ldr x8,[x0]
71029d5128  ldr x8,[x8, #0x30]
71029d512c  add x2,sp,#0xc0
71029d5130  blr x8
71029d5134  tbz w0,#0x0,0x71029d514c
71029d5138  mov w0,#0x10
71029d513c  mov w1,#0x2a0
71029d5140  bl 0x710392e290
71029d5144  mov x22,x0
71029d5148  cbnz x0,0x71029d5150
71029d514c  mov x22,xzr
71029d5150  ldr s0,[x20]
71029d5154  add x2,sp,#0x100
71029d5158  mov x0,x22
71029d515c  mov x1,x19
71029d5160  mov x3,xzr
71029d5164  bl 0x7103141b60
71029d5168  madd x8,x24,x28,x19
71029d516c  madd x28,x24,x27,x23
71029d5170  orr w9,wzr,#0x18
71029d5174  add x21,x8,#0x850
71029d5178  add x27,x28,#0x4
71029d517c  add x20,x28,#0x8
71029d5180  cmp x24,#0x3
71029d5184  str x22,[x8, #0x850]
71029d5188  b.ne 0x71029d5234
71029d518c  ldr x9,[x19, #0x310]
71029d5190  ldp x8,x9,[x9, #0xd0]
71029d5194  mov x11,#0x7cbd
71029d5198  movk x11,#0x2d61, LSL #16
71029d519c  movk x11,#0x16, LSL #32
71029d51a0  cmp x8,x9
71029d51a4  b.eq 0x71029d51d0
71029d51a8  ldr w10,[x8, #0x8]
71029d51ac  cmp w10,#0x1
71029d51b0  b.hi 0x71029d51c4
71029d51b4  ldr x22,[x8]
71029d51b8  ldr x10,[x22, #0x68]
71029d51bc  cmp x10,x11
71029d51c0  b.eq 0x71029d547c
71029d51c4  add x8,x8,#0x10
71029d51c8  cmp x9,x8
71029d51cc  b.ne 0x71029d51a8
71029d51d0  ldr w25,[x19, #0x8a8]
71029d51d4  mov x22,xzr
71029d51d8  str xzr,[x19, #0x8a0]
71029d51dc  ldr q0,[sp, #0x20]
71029d51e0  cbz x22,0x71029d5270
71029d51e4  ldr x8,[x22, #0xd8]
71029d51e8  cbz x8,0x71029d5258
71029d51ec  ldr x8,[x8, #0x8]
71029d51f0  ldr x0,[x8, #0x8]
71029d51f4  ldr x8,[x0]
71029d51f8  ldr x8,[x8, #0x10]
71029d51fc  blr x8
71029d5200  cmp w0,w25
71029d5204  b.ls 0x71029d5258
71029d5208  ldr x8,[x22, #0xd8]
71029d520c  ldr x8,[x8, #0x8]
71029d5210  ldr x0,[x8, #0x48]
71029d5214  ldr x8,[x0]
71029d5218  ldr x8,[x8, #0x38]
71029d521c  mov w1,wzr
71029d5220  blr x8
71029d5224  mov w8,w25
71029d5228  add x8,x1,x8, LSL #0x6
71029d522c  add x8,x8,#0x30
71029d5230  b 0x71029d526c
71029d5234  movi v0.2D,#0x0
71029d5238  ld1 {v0.S}[0],[x28]
71029d523c  ld1 {v0.S}[1],[x27]
71029d5240  movi d1,#0x0
71029d5244  ld1 {v0.S}[2],[x20]
71029d5248  madd x8,x24,x9,x19
71029d524c  mov v3.16B,v1.16B
71029d5250  str xzr,[x8, #0x858]
71029d5254  b 0x71029d52a8
71029d5258  ldr x0,[x22, #0x90]
71029d525c  ldr x8,[x0]
71029d5260  ldr x8,[x8, #0x158]
71029d5264  blr x8
71029d5268  add x8,x0,#0x30
71029d526c  ldr q0,[x8]
71029d5270  movi d1,#0x0
71029d5274  mov v3.16B,v1.16B
71029d5278  mov v2.16B,v3.16B
71029d527c  mov v1.S[0x0],v0.S[0x2]
71029d5280  ldr x22,[x21]
71029d5284  ld1 {v2.S}[0],[x20]
71029d5288  mov v0.D[0x1],v1.D[0x0]
71029d528c  ldr s1,[x28]
71029d5290  ld1 {v1.S}[1],[x27]
71029d5294  mov v1.D[0x1],v2.D[0x0]
71029d5298  fadd v0.4S,v0.4S,v1.4S
71029d529c  mov v1.16B,v3.16B
71029d52a0  mov v1.S[0x0],v0.S[0x2]
71029d52a4  mov v0.D[0x1],v1.D[0x0]
71029d52a8  adrp x8,0x71052a8000
71029d52ac  ldr x8,[x8, #0xa88]
71029d52b0  ldr q1,[x8]
71029d52b4  mov v2.16B,v3.16B
71029d52b8  mov v2.S[0x0],v0.S[0x2]
71029d52bc  mov v4.16B,v3.16B
71029d52c0  mov v3.S[0x0],v1.S[0x2]
71029d52c4  orr w27,wzr,#0x1c
71029d52c8  madd x8,x24,x27,x23
71029d52cc  add x10,x8,#0x14
71029d52d0  mov v0.D[0x1],v2.D[0x0]
71029d52d4  ldr s2,[x8, #0xc]
71029d52d8  mov v1.D[0x1],v3.D[0x0]
71029d52dc  mov v3.16B,v4.16B
71029d52e0  add x8,x8,#0x10
71029d52e4  ld1 {v2.S}[1],[x8]
71029d52e8  ld1 {v3.S}[0],[x10]
71029d52ec  ldr w9,[x22, #0x78]
71029d52f0  str q0,[x22, #0x1d0]
71029d52f4  mov v2.D[0x1],v3.D[0x0]
71029d52f8  add x20,x22,#0x80
71029d52fc  orr w25,wzr,#0x70
71029d5300  madd x8,x9,x25,x20
71029d5304  str xzr,[x22, #0x70]
71029d5308  stp q2,q1,[x22, #0x1e0]
71029d530c  ldr q0,[x8]
71029d5310  mov v1.16B,v4.16B
71029d5314  mov v1.S[0x0],v0.S[0x2]
71029d5318  mov v0.D[0x1],v1.D[0x0]
71029d531c  mov v1.16B,v4.16B
71029d5320  str q0,[x22, #0x160]
71029d5324  ldr q0,[x8, #0x10]
71029d5328  mov v1.S[0x0],v0.S[0x2]
71029d532c  mov v0.D[0x1],v1.D[0x0]
71029d5330  mov v1.16B,v4.16B
71029d5334  str q0,[x22, #0x170]
71029d5338  ldr q0,[x8, #0x20]
71029d533c  mov v1.S[0x0],v0.S[0x2]
71029d5340  mov v0.D[0x1],v1.D[0x0]
71029d5344  mov x0,x22
71029d5348  str q0,[x22, #0x180]
71029d534c  ldp x9,x10,[x8, #0x30]
71029d5350  mov v0.16B,v8.16B
71029d5354  ldp x11,x12,[x8, #0x40]
71029d5358  str x9,[x22, #0x190]
71029d535c  stp x10,x11,[x22, #0x198]
71029d5360  orr w28,wzr,#0x18
71029d5364  ldp x9,x10,[x8, #0x50]
71029d5368  ldp x11,x8,[x8, #0x60]
71029d536c  str x8,[x22, #0x1c8]
71029d5370  stp x10,x11,[x22, #0x1b8]
71029d5374  stp x12,x9,[x22, #0x1a8]
71029d5378  bl 0x7103142120
71029d537c  ldr w8,[x22, #0x78]
71029d5380  madd x9,x8,x25,x20
71029d5384  movi d2,#0x0
71029d5388  mov v1.16B,v2.16B
71029d538c  mov w23,#0x1
71029d5390  sub w8,w23,w8
71029d5394  umaddl x8,w8,w25,x20
71029d5398  ldr q0,[x9]
71029d539c  mov x0,x22
71029d53a0  mov v1.S[0x0],v0.S[0x2]
71029d53a4  mov v0.D[0x1],v1.D[0x0]
71029d53a8  mov v1.16B,v2.16B
71029d53ac  str q0,[x8]
71029d53b0  ldr q0,[x9, #0x10]
71029d53b4  mov v1.S[0x0],v0.S[0x2]
71029d53b8  mov v0.D[0x1],v1.D[0x0]
71029d53bc  mov v1.16B,v2.16B
71029d53c0  str q0,[x8, #0x10]
71029d53c4  ldr q0,[x9, #0x20]
71029d53c8  mov v1.S[0x0],v0.S[0x2]
71029d53cc  mov v0.D[0x1],v1.D[0x0]
71029d53d0  str q0,[x8, #0x20]
71029d53d4  ldp x10,x11,[x9, #0x30]
71029d53d8  ldp x12,x13,[x9, #0x40]
71029d53dc  str x10,[x8, #0x30]
71029d53e0  stp x11,x12,[x8, #0x38]
71029d53e4  ldp x10,x11,[x9, #0x50]
71029d53e8  ldp x12,x9,[x9, #0x60]
71029d53ec  str x9,[x8, #0x68]
71029d53f0  stp x11,x12,[x8, #0x58]
71029d53f4  stp x13,x10,[x8, #0x48]
71029d53f8  bl 0x7103142390
71029d53fc  ldrb w8,[x19, #0x18]
71029d5400  ldr x22,[x21]
71029d5404  cbz w8,0x71029d5414
71029d5408  mov x0,x22
71029d540c  bl 0x710313ef20
71029d5410  b 0x71029d546c
71029d5414  ldrb w8,[x22, #0x40]
71029d5418  cbz w8,0x71029d5468
71029d541c  ldr x20,[x22, #0x30]
71029d5420  cbz x20,0x71029d5458
71029d5424  ldrb w8,[x20, #0x10]
71029d5428  cbz w8,0x71029d5458
71029d542c  ldrb w8,[x20, #0x50]
71029d5430  strb wzr,[x20, #0x10]
71029d5434  cbz w8,0x71029d5458
71029d5438  ldr x8,[x20]
71029d543c  ldr w0,[x8, #0x8]
71029d5440  bl 0x71003ac560
71029d5444  ldr x8,[x0]
71029d5448  ldr x8,[x8, #0x48]
71029d544c  mov w1,wzr
71029d5450  blr x8
71029d5454  strb wzr,[x20, #0x50]
71029d5458  ldr x8,[x22]
71029d545c  ldr x8,[x8, #0x30]
71029d5460  mov x0,x22
71029d5464  blr x8
71029d5468  strb wzr,[x22, #0x40]
71029d546c  add x24,x24,#0x1
71029d5470  cmp x24,#0x5
71029d5474  b.ne 0x71029d4f40
71029d5478  b 0x71029d54d0
71029d547c  str x22,[x19, #0x8a0]
71029d5480  cbz x22,0x71029d54c0
71029d5484  ldr x8,[x22, #0xd8]
71029d5488  cbz x8,0x71029d54ac
71029d548c  ldr x8,[x8, #0x8]
71029d5490  ldr x0,[x8, #0x8]
71029d5494  ldr x8,[x0]
71029d5498  ldr x8,[x8, #0x18]
71029d549c  adrp x1,0x71042a1000
71029d54a0  add x1,x1,#0x175
71029d54a4  blr x8
71029d54a8  ldr x22,[x19, #0x8a0]
71029d54ac  mov w25,wzr
71029d54b0  str wzr,[x19, #0x8a8]
71029d54b4  ldr q0,[sp, #0x20]
71029d54b8  cbnz x22,0x71029d51e4
71029d54bc  b 0x71029d5270
71029d54c0  ldr w25,[x19, #0x8a8]
71029d54c4  ldr q0,[sp, #0x20]
71029d54c8  cbnz x22,0x71029d51e4
71029d54cc  b 0x71029d5270
71029d54d0  ldr x8,[x19, #0x7a0]
71029d54d4  cbz x8,0x71029d54dc
71029d54d8  str xzr,[x19, #0x7a0]
71029d54dc  mov w1,#0x160
71029d54e0  mov w0,#0x10
71029d54e4  bl 0x710392e290
71029d54e8  mov x20,x0
71029d54ec  mov w21,#0x50000000
71029d54f0  cbnz x0,0x71029d553c
71029d54f4  adrp x8,0x7105332000
71029d54f8  ldr x0,[x8, #0xf00]
71029d54fc  cbz x0,0x71029d5538
71029d5500  mov w8,#0x160
71029d5504  str wzr,[sp, #0xc0]
71029d5508  add x1,sp,#0xc0
71029d550c  str x8,[sp, #0x100]
71029d5510  ldr x8,[x0]
71029d5514  ldr x8,[x8, #0x30]
71029d5518  add x2,sp,#0x100
71029d551c  blr x8
71029d5520  tbz w0,#0x0,0x71029d5538
71029d5524  mov w1,#0x160
71029d5528  mov w0,#0x10
71029d552c  bl 0x710392e290
71029d5530  mov x20,x0
71029d5534  cbnz x0,0x71029d553c
71029d5538  mov x20,xzr
71029d553c  adrp x2,0x7104410000
71029d5540  add x2,x2,#0x84c
71029d5544  mov x0,x20
71029d5548  mov x1,x19
71029d554c  mov w3,wzr
71029d5550  bl 0x7103140260
71029d5554  adrp x8,0x7105178000
71029d5558  add x8,x8,#0xfc0
71029d555c  str x8,[x20]
71029d5560  stp xzr,xzr,[x20, #0x120]
71029d5564  adrp x8,0x71052a8000
71029d5568  stp xzr,xzr,[x20, #0x110]
71029d556c  ldr x8,[x8, #0xa88]
71029d5570  movi d2,#0x0
71029d5574  mov v1.16B,v2.16B
71029d5578  ldr q0,[x8]
71029d557c  ldr x8,[x20, #0xb8]
71029d5580  str x8,[x20, #0x150]
71029d5584  stp q0,q0,[x20, #0x130]
71029d5588  cbz x8,0x71029d55ac
71029d558c  ldrb w9,[x8, #0xe0]
71029d5590  cbz w9,0x71029d55a0
71029d5594  ldr x9,[x8, #0xc8]
71029d5598  cbz x9,0x71029d55a0
71029d559c  strh wzr,[x9, #0x32]
71029d55a0  ldr x8,[x8, #0xd8]
71029d55a4  cbz x8,0x71029d55ac
71029d55a8  strb wzr,[x8, #0x22]
71029d55ac  strb wzr,[x20, #0x158]
71029d55b0  ldr s0,[x19, #0x998]
71029d55b4  str x20,[x19, #0x7a0]
71029d55b8  add x8,x19,#0x99c
71029d55bc  add x9,x19,#0x9a0
71029d55c0  add x1,sp,#0x100
71029d55c4  ld1 {v0.S}[1],[x8]
71029d55c8  add x8,x19,#0x9a4
71029d55cc  ld1 {v1.S}[0],[x9]
71029d55d0  add x9,x19,#0x9a8
71029d55d4  mov v0.D[0x1],v1.D[0x0]
71029d55d8  mov x0,x20
71029d55dc  str q0,[sp, #0xc0]
71029d55e0  movi v0.2D,#0x0
71029d55e4  ld1 {v0.S}[0],[x8]
71029d55e8  adrp x8,0x71052a8000
71029d55ec  ld1 {v0.S}[1],[x9]
71029d55f0  ldr x8,[x8, #0xa80]
71029d55f4  ldr q1,[x8]
71029d55f8  mov w8,#0xffffffff
71029d55fc  add x9,sp,#0x100
71029d5600  str xzr,[sp, #0x120]
71029d5604  str w21,[sp, #0x128]
71029d5608  stp q1,q0,[sp, #0x100]
71029d560c  stur x8,[x9, #0x2c]
71029d5610  strh wzr,[sp, #0x134]
71029d5614  str w21,[sp, #0x138]
71029d5618  ldr x8,[x20]
71029d561c  ldr x8,[x8, #0x98]
71029d5620  mov w2,wzr
71029d5624  blr x8
71029d5628  ldr x0,[x19, #0x7a0]
71029d562c  ldrb w2,[x19, #0x9ac]
71029d5630  add x1,sp,#0xc0
71029d5634  ldrb w3,[x19, #0x9ad]
71029d5638  bl 0x7103143590
71029d563c  ldr x0,[x19, #0x7a0]
71029d5640  bl 0x710313ef20
71029d5644  str xzr,[x19, #0x7d8]
71029d5648  str xzr,[x19, #0x7d0]
71029d564c  adrp x8,0x71052a8000
71029d5650  ldr x8,[x8, #0xa88]
71029d5654  ldr q0,[x8]
71029d5658  movi d1,#0x0
71029d565c  mov v1.S[0x0],v0.S[0x2]
71029d5660  add x8,x19,#0x80d
71029d5664  mov v0.D[0x1],v1.D[0x0]
71029d5668  str xzr,[x19, #0x800]
71029d566c  str q0,[x19, #0x7e0]
71029d5670  str q0,[x19, #0x7f0]
71029d5674  str xzr,[x8]
71029d5678  ldr x9,[x19, #0x310]
71029d567c  str xzr,[x19, #0x808]
71029d5680  ldp x10,x11,[x9, #0xd0]
71029d5684  cmp x10,x11
71029d5688  b.eq 0x71029d56c0
71029d568c  mov x12,#0xbde2
71029d5690  movk x12,#0xb43b, LSL #16
71029d5694  movk x12,#0xe, LSL #32
71029d5698  ldr w8,[x10, #0x8]
71029d569c  cmp w8,#0x1
71029d56a0  b.hi 0x71029d56b4
71029d56a4  ldr x8,[x10]
71029d56a8  ldr x13,[x8, #0x68]
71029d56ac  cmp x13,x12
71029d56b0  b.eq 0x71029d56c4
71029d56b4  add x10,x10,#0x10
71029d56b8  cmp x11,x10
71029d56bc  b.ne 0x71029d5698
71029d56c0  mov x8,xzr
71029d56c4  str x8,[x19, #0x7d0]
71029d56c8  ldp x10,x11,[x9, #0xd0]
71029d56cc  cmp x10,x11
71029d56d0  b.eq 0x71029d5708
71029d56d4  mov x12,#0xad27
71029d56d8  movk x12,#0x450f, LSL #16
71029d56dc  movk x12,#0x12, LSL #32
71029d56e0  ldr w9,[x10, #0x8]
71029d56e4  cmp w9,#0x1
71029d56e8  b.hi 0x71029d56fc
71029d56ec  ldr x9,[x10]
71029d56f0  ldr x13,[x9, #0x68]
71029d56f4  cmp x13,x12
71029d56f8  b.eq 0x71029d570c
71029d56fc  add x10,x10,#0x10
71029d5700  cmp x11,x10
71029d5704  b.ne 0x71029d56e0
71029d5708  mov x9,xzr
71029d570c  ldrb w10,[x19, #0x731]
71029d5710  str x9,[x19, #0x7d8]
71029d5714  cbz w10,0x71029d5760
71029d5718  cbz x8,0x71029d5b90
71029d571c  ldrb w9,[x8, #0x118]
71029d5720  orr w9,w9,#0x1
71029d5724  strb w9,[x8, #0x118]
71029d5728  ldr x9,[x19, #0x7d8]
71029d572c  add x20,x19,#0x7d8
71029d5730  cbz x9,0x71029d5bd4
71029d5734  ldr x8,[x20]
71029d5738  cbz x8,0x71029d5bd4
71029d573c  add x0,x8,#0x108
71029d5740  strb wzr,[x8, #0x110]
71029d5744  bl 0x71025e9d50
71029d5748  ldr x8,[x20]
71029d574c  cbz x8,0x71029d5bd4
71029d5750  ldrb w9,[x8, #0x118]
71029d5754  orr w9,w9,#0x1
71029d5758  strb w9,[x8, #0x118]
71029d575c  b 0x71029d5bd4
71029d5760  cbz x9,0x71029d5bd4
71029d5764  cbz x8,0x71029d5bd4
71029d5768  ldr x9,[x19, #0x9d0]
71029d576c  ldr x10,[x19, #0x9c8]
71029d5770  cmp x9,x10
71029d5774  b.eq 0x71029d5b74
71029d5778  add x8,x19,#0x7d0
71029d577c  mov x20,#0x1
71029d5780  mov x21,xzr
71029d5784  str x8,[sp, #0x20]
71029d5788  add x8,x19,#0x820
71029d578c  mov w25,#0x1
71029d5790  mov x26,#0x100000001
71029d5794  movk x20,#0x10, LSL #32
71029d5798  str x8,[sp, #0x30]
71029d579c  mov w22,#0x48
71029d57a0  adrp x27,0x710313f000
71029d57a4  add x27,x27,#0x320
71029d57a8  b 0x71029d57d4
71029d57ac  str x10,[x19, #0x820]
71029d57b0  str x9,[x19, #0x828]
71029d57b4  mov x26,#0x100000001
71029d57b8  str x8,[x19, #0x830]
71029d57bc  mov x20,x22
71029d57c0  mov w22,#0x48
71029d57c4  cbnz x23,0x71029d5b3c
71029d57c8  b 0x71029d5b44
71029d57cc  mov x0,xzr
71029d57d0  b 0x71029d5a00
71029d57d4  mov w0,#0x10
71029d57d8  mov x1,x22
71029d57dc  str x20,[sp, #0xd0]
71029d57e0  stp x25,x26,[sp, #0xc0]
71029d57e4  bl 0x710392e290
71029d57e8  mov x24,x0
71029d57ec  cbnz x0,0x71029d5834
71029d57f0  adrp x8,0x7105332000
71029d57f4  ldr x0,[x8, #0xf00]
71029d57f8  cbz x0,0x71029d5830
71029d57fc  stur wzr,[x29, #-0x80]
71029d5800  str x22,[sp, #0x100]
71029d5804  ldr x8,[x0]
71029d5808  ldr x8,[x8, #0x30]
71029d580c  sub x1,x29,#0x80
71029d5810  add x2,sp,#0x100
71029d5814  blr x8
71029d5818  tbz w0,#0x0,0x71029d5830
71029d581c  mov w0,#0x10
71029d5820  mov x1,x22
71029d5824  bl 0x710392e290
71029d5828  mov x24,x0
71029d582c  cbnz x0,0x71029d5834
71029d5830  mov x24,xzr
71029d5834  add x2,sp,#0xc0
71029d5838  mov x0,x24
71029d583c  mov x1,x19
71029d5840  bl 0x710313e6a0
71029d5844  ldr x8,[x19, #0x9c8]
71029d5848  mov w9,#0x14
71029d584c  madd x8,x21,x9,x8
71029d5850  movi v1.2D,#0x0
71029d5854  mov v0.16B,v1.16B
71029d5858  mov x9,x8
71029d585c  ld1 {v0.S}[0],[x9], #0x4
71029d5860  ld1 {v0.S}[1],[x9]
71029d5864  add x9,x8,#0x8
71029d5868  ld1 {v1.S}[0],[x9]
71029d586c  add x9,x8,#0xc
71029d5870  ldr w8,[x8, #0x10]
71029d5874  ld1 {v1.S}[1],[x9]
71029d5878  str w8,[sp, #0x120]
71029d587c  mov w8,#0x2
71029d5880  str w8,[sp, #0x124]
71029d5884  fsub v1.4S,v1.4S,v0.4S
71029d5888  stp q0,q1,[sp, #0x100]
71029d588c  ldr x8,[x24, #0x38]
71029d5890  cbz x8,0x71029d58b8
71029d5894  ldr x0,[x8, #0x130]
71029d5898  ldr x8,[x0]
71029d589c  ldr x8,[x8, #0x58]
71029d58a0  add x2,sp,#0x100
71029d58a4  mov w1,wzr
71029d58a8  mov w3,w21
71029d58ac  mov w4,wzr
71029d58b0  mov w5,wzr
71029d58b4  blr x8
71029d58b8  mov x0,x24
71029d58bc  bl 0x710313ef20
71029d58c0  ldr x8,[x24, #0x38]
71029d58c4  ldr x0,[x8, #0x130]
71029d58c8  ldr x8,[x0]
71029d58cc  ldr x8,[x8, #0x1a0]
71029d58d0  blr x8
71029d58d4  ldr x9,[x0, #0x30]
71029d58d8  cbz x9,0x71029d5928
71029d58dc  ldr x8,[x0, #0x38]
71029d58e0  mov w10,#0x2d0
71029d58e4  madd x9,x9,x10,x8
71029d58e8  ldr w11,[x8, #0xc]
71029d58ec  cmp w11,#0x1
71029d58f0  b.lt 0x71029d591c
71029d58f4  ldrsw x10,[x8, #0x8]
71029d58f8  add w11,w11,w10
71029d58fc  sxtw x11,w11
71029d5900  add x12,x8,x10, LSL #0x3
71029d5904  ldr x12,[x12, #0x30]
71029d5908  cbz x12,0x71029d5910
71029d590c  str x27,[x12, #0x30]
71029d5910  add x10,x10,#0x1
71029d5914  cmp x10,x11
71029d5918  b.lt 0x71029d5900
71029d591c  add x8,x8,#0x2d0
71029d5920  cmp x8,x9
71029d5924  b.ne 0x71029d58e8
71029d5928  ldr x28,[x19, #0x828]
71029d592c  ldr x8,[x19, #0x830]
71029d5930  cmp x28,x8
71029d5934  b.cs 0x71029d594c
71029d5938  str x24,[x28]
71029d593c  ldr x8,[x19, #0x828]
71029d5940  add x8,x8,#0x8
71029d5944  str x8,[x19, #0x828]
71029d5948  b 0x71029d5b44
71029d594c  ldr x9,[sp, #0x30]
71029d5950  ldr x23,[x9]
71029d5954  sub x9,x28,x23
71029d5958  mov x22,x20
71029d595c  asr x20,x9,#0x3
71029d5960  add x9,x20,#0x1
71029d5964  lsr x10,x9,#0x3d
71029d5968  cbnz x10,0x71029d6348
71029d596c  sub x8,x8,x23
71029d5970  asr x10,x8,#0x3
71029d5974  orr x11,xzr,#0xffffffffffffffe
71029d5978  cmp x10,x11
71029d597c  b.hi 0x71029d599c
71029d5980  asr x8,x8,#0x2
71029d5984  cmp x8,x9
71029d5988  csel x26,x9,x8,cc
71029d598c  cbz x26,0x71029d57cc
71029d5990  lsr x8,x26,#0x3d
71029d5994  cbz x8,0x71029d59a0
71029d5998  b 0x71029d6344
71029d599c  orr x26,xzr,#0x1fffffffffffffff
71029d59a0  lsl x8,x26,#0x3
71029d59a4  cmp x8,#0x0
71029d59a8  csinc x25,x8,xzr,ne
71029d59ac  mov w0,#0x10
71029d59b0  mov x1,x25
71029d59b4  bl 0x710392e290
71029d59b8  cbnz x0,0x71029d59fc
71029d59bc  adrp x8,0x7105332000
71029d59c0  ldr x0,[x8, #0xf00]
71029d59c4  cbz x0,0x71029d59f8
71029d59c8  stur wzr,[x29, #-0x74]
71029d59cc  stur x25,[x29, #-0x80]
71029d59d0  ldr x8,[x0]
71029d59d4  ldr x8,[x8, #0x30]
71029d59d8  sub x1,x29,#0x74
71029d59dc  sub x2,x29,#0x80
71029d59e0  blr x8
71029d59e4  tbz w0,#0x0,0x71029d59f8
71029d59e8  mov w0,#0x10
71029d59ec  mov x1,x25
71029d59f0  bl 0x710392e290
71029d59f4  cbnz x0,0x71029d59fc
71029d59f8  mov x0,xzr
71029d59fc  mov w25,#0x1
71029d5a00  add x10,x0,x20, LSL #0x3
71029d5a04  mov x9,x10
71029d5a08  add x8,x0,x26, LSL #0x3
71029d5a0c  str x24,[x9], #0x8
71029d5a10  subs x11,x28,x23
71029d5a14  b.eq 0x71029d57ac
71029d5a18  sub x12,x11,#0x8
71029d5a1c  lsr x13,x12,#0x3
71029d5a20  mvn x11,x13
71029d5a24  add w13,w13,#0x1
71029d5a28  ands x13,x13,#0x3
71029d5a2c  mov x26,#0x100000001
71029d5a30  b.eq 0x71029d5a60
71029d5a34  sub x14,x20,x13
71029d5a38  neg x13,x13
71029d5a3c  sub x10,x10,#0x8
71029d5a40  sub x15,x28,#0x8
71029d5a44  mov x16,x13
71029d5a48  ldr x17,[x15], #-0x8
71029d5a4c  adds x16,x16,#0x1
71029d5a50  str x17,[x10], #-0x8
71029d5a54  b.ne 0x71029d5a48
71029d5a58  add x10,x0,x14, LSL #0x3
71029d5a5c  add x28,x28,x13, LSL #0x3
71029d5a60  add x11,x20,x11
71029d5a64  cmp x12,#0x18
71029d5a68  mov x20,x22
71029d5a6c  mov w22,#0x48
71029d5a70  b.cc 0x71029d5afc
71029d5a74  sub x12,x28,x23
71029d5a78  sub x12,x12,#0x20
71029d5a7c  tbnz w12,#0x5,0x71029d5aa4
71029d5a80  ldur x13,[x28, #-0x8]
71029d5a84  stur x13,[x10, #-0x8]
71029d5a88  ldur x13,[x28, #-0x10]
71029d5a8c  stur x13,[x10, #-0x10]
71029d5a90  ldur x13,[x28, #-0x18]
71029d5a94  stur x13,[x10, #-0x18]
71029d5a98  ldr x13,[x28, #-0x20]!
71029d5a9c  stur x13,[x10, #-0x20]
71029d5aa0  sub x10,x10,#0x20
71029d5aa4  cmp x12,#0x20
71029d5aa8  b.cc 0x71029d5afc
71029d5aac  sub x10,x10,#0x20
71029d5ab0  ldur x12,[x28, #-0x8]
71029d5ab4  str x12,[x10, #0x18]
71029d5ab8  ldur x12,[x28, #-0x10]
71029d5abc  str x12,[x10, #0x10]
71029d5ac0  ldur x12,[x28, #-0x18]
71029d5ac4  str x12,[x10, #0x8]
71029d5ac8  ldur x12,[x28, #-0x20]
71029d5acc  str x12,[x10]
71029d5ad0  ldur x12,[x28, #-0x28]
71029d5ad4  stur x12,[x10, #-0x8]
71029d5ad8  ldur x12,[x28, #-0x30]
71029d5adc  stur x12,[x10, #-0x10]
71029d5ae0  ldur x12,[x28, #-0x38]
71029d5ae4  stur x12,[x10, #-0x18]
71029d5ae8  ldr x12,[x28, #-0x40]!
71029d5aec  stur x12,[x10, #-0x20]
71029d5af0  sub x10,x10,#0x40
71029d5af4  cmp x23,x28
71029d5af8  b.ne 0x71029d5ab0
71029d5afc  ldr x23,[x19, #0x820]
71029d5b00  ldr x10,[x19, #0x828]
71029d5b04  add x11,x0,x11, LSL #0x3
71029d5b08  str x8,[x19, #0x830]
71029d5b0c  str x11,[x19, #0x820]
71029d5b10  subs x8,x10,x23
71029d5b14  str x9,[x19, #0x828]
71029d5b18  b.eq 0x71029d5b38
71029d5b1c  sub x9,x8,#0x8
71029d5b20  mvn x9,x9
71029d5b24  and x9,x9,#-0x8
71029d5b28  add x0,x10,x9
71029d5b2c  and x2,x8,#-0x8
71029d5b30  mov w1,wzr
71029d5b34  bl 0x71039c02a0
71029d5b38  cbz x23,0x71029d5b44
71029d5b3c  mov x0,x23
71029d5b40  bl 0x710392eb40
71029d5b44  ldr x8,[x19, #0x9d0]
71029d5b48  ldr x9,[x19, #0x9c8]
71029d5b4c  sub x8,x8,x9
71029d5b50  orr x9,xzr,#-0x3333333333333334
71029d5b54  asr x8,x8,#0x2
71029d5b58  movk x9,#0xcccd
71029d5b5c  mul x8,x8,x9
71029d5b60  add w21,w21,#0x1
71029d5b64  cmp x8,x21
71029d5b68  b.hi 0x71029d57d4
71029d5b6c  ldr x8,[sp, #0x20]
71029d5b70  ldr x8,[x8]
71029d5b74  cbz x8,0x71029d5b9c
71029d5b78  ldr x0,[x8, #0x90]
71029d5b7c  ldr x8,[x0]
71029d5b80  ldr x8,[x8, #0x158]
71029d5b84  blr x8
71029d5b88  mov x20,x0
71029d5b8c  b 0x71029d5bb4
71029d5b90  add x20,x19,#0x7d8
71029d5b94  cbnz x9,0x71029d5734
71029d5b98  b 0x71029d5bd4
71029d5b9c  adrp x8,0x710532a000
71029d5ba0  add x8,x8,#0x9e0
71029d5ba4  ldarb w8,[x8]
71029d5ba8  tbz w8,#0x0,0x71029d62e4
71029d5bac  adrp x20,0x710532a000
71029d5bb0  add x20,x20,#0x9f0
71029d5bb4  ldr q0,[x20, #0x30]
71029d5bb8  ext v1.16B,v0.16B,v0.16B,0x8
71029d5bbc  fmov s2,wzr
71029d5bc0  mov v1.S[0x1],v2.S[0x0]
71029d5bc4  mov x0,x19
71029d5bc8  mov v0.D[0x1],v1.D[0x0]
71029d5bcc  str q0,[x19, #0x7e0]
71029d5bd0  bl 0x71029d9c20
71029d5bd4  ldr x8,[x19, #0x300]
71029d5bd8  ldr x8,[x8, #0x18]
71029d5bdc  ldp x21,x22,[x8]
71029d5be0  cmp x21,x22
71029d5be4  b.eq 0x71029d5d08
71029d5be8  mov x8,#0xe196
71029d5bec  movk x8,#0xaacd, LSL #16
71029d5bf0  movk x8,#0x13, LSL #32
71029d5bf4  mov x9,x21
71029d5bf8  ldr x10,[x9], #0x8
71029d5bfc  ldr x11,[x10, #0xa0]
71029d5c00  and x11,x11,#0xffffffffff
71029d5c04  cmp x11,x8
71029d5c08  b.eq 0x71029d5c18
71029d5c0c  cmp x22,x9
71029d5c10  b.ne 0x71029d5bf8
71029d5c14  b 0x71029d5c74
71029d5c18  ldr x8,[x10, #0x110]
71029d5c1c  cbz x8,0x71029d5c74
71029d5c20  ldp x9,x10,[x8]
71029d5c24  cmp x9,x10
71029d5c28  b.eq 0x71029d5c74
71029d5c2c  ldp x23,x24,[x8, #0x18]
71029d5c30  cmp x23,x24
71029d5c34  b.eq 0x71029d5c74
71029d5c38  mov w25,#0x9d52
71029d5c3c  movk w25,#0xfb8c, LSL #16
71029d5c40  adrp x20,0x710436a000
71029d5c44  add x20,x20,#0x55f
71029d5c48  ldr x26,[x23]
71029d5c4c  ldr w8,[x26, #0x18]
71029d5c50  cmp w8,w25
71029d5c54  b.ne 0x71029d5c68
71029d5c58  add x0,x26,#0x20
71029d5c5c  mov x1,x20
71029d5c60  bl 0x71039c0060
71029d5c64  cbz w0,0x71029d5f24
71029d5c68  add x23,x23,#0x8
71029d5c6c  cmp x24,x23
71029d5c70  b.ne 0x71029d5c48
71029d5c74  cmp x21,x22
71029d5c78  b.eq 0x71029d5f4c
71029d5c7c  mov x8,#0x1656
71029d5c80  movk x8,#0x8582, LSL #16
71029d5c84  movk x8,#0x11, LSL #32
71029d5c88  mov x9,x21
71029d5c8c  ldr x10,[x9], #0x8
71029d5c90  ldr x11,[x10, #0xa0]
71029d5c94  and x11,x11,#0xffffffffff
71029d5c98  cmp x11,x8
71029d5c9c  b.eq 0x71029d5cac
71029d5ca0  cmp x22,x9
71029d5ca4  b.ne 0x71029d5c8c
71029d5ca8  b 0x71029d5d08
71029d5cac  ldr x8,[x10, #0x110]
71029d5cb0  cbz x8,0x71029d5d08
71029d5cb4  ldp x9,x10,[x8]
71029d5cb8  cmp x9,x10
71029d5cbc  b.eq 0x71029d5d08
71029d5cc0  ldp x22,x23,[x8, #0x18]
71029d5cc4  cmp x22,x23
71029d5cc8  b.eq 0x71029d5d08
71029d5ccc  mov w24,#0x9490
71029d5cd0  movk w24,#0x240a, LSL #16
71029d5cd4  adrp x20,0x7104452000
71029d5cd8  add x20,x20,#0x90b
71029d5cdc  ldr x25,[x22]
71029d5ce0  ldr w8,[x25, #0x18]
71029d5ce4  cmp w8,w24
71029d5ce8  b.ne 0x71029d5cfc
71029d5cec  add x0,x25,#0x20
71029d5cf0  mov x1,x20
71029d5cf4  bl 0x71039c0060
71029d5cf8  cbz w0,0x71029d6128
71029d5cfc  add x22,x22,#0x8
71029d5d00  cmp x23,x22
71029d5d04  b.ne 0x71029d5cdc
71029d5d08  mov x8,#0xdf99
71029d5d0c  movk x8,#0xb569, LSL #16
71029d5d10  movk x8,#0x7, LSL #32
71029d5d14  b 0x71029d5f64
71029d5d18  cbz x13,0x71029d5d30
71029d5d1c  ldr x8,[x13, #0x130]
71029d5d20  cbz x8,0x71029d5d30
71029d5d24  str x8,[x19, #0x790]
71029d5d28  ldr w8,[x10, #0x30]
71029d5d2c  str w8,[x19, #0x798]
71029d5d30  ldr x0,[x9, #0x90]
71029d5d34  ldr x8,[x0]
71029d5d38  ldr x8,[x8, #0x158]
71029d5d3c  blr x8
71029d5d40  ldr x9,[x0, #0x18]
71029d5d44  ldr x8,[x0, #0x8]
71029d5d48  str x9,[sp, #0xd8]
71029d5d4c  ldr x9,[x0]
71029d5d50  ldr x10,[x0, #0x10]
71029d5d54  str x9,[sp, #0xc0]
71029d5d58  stp x8,x10,[sp, #0xc8]
71029d5d5c  ldr x9,[x0, #0x28]
71029d5d60  ldr x8,[x0, #0x38]
71029d5d64  str x9,[sp, #0xe8]
71029d5d68  ldr x9,[x0, #0x30]
71029d5d6c  ldr x10,[x0, #0x20]
71029d5d70  str x10,[sp, #0xe0]
71029d5d74  stp x9,x8,[sp, #0xf0]
71029d5d78  ldr q0,[x19, #0x770]
71029d5d7c  add x8,sp,#0xc0
71029d5d80  add x8,x8,#0x3c
71029d5d84  ld1 {v0.S}[3],[x8]
71029d5d88  str q0,[sp, #0xf0]
71029d5d8c  ldr x20,[x19, #0x760]
71029d5d90  cbz x20,0x71029d5e18
71029d5d94  ldr x0,[x20, #0x90]
71029d5d98  ldr x8,[x0]
71029d5d9c  ldr x8,[x8, #0x148]
71029d5da0  add x1,sp,#0xc0
71029d5da4  blr x8
71029d5da8  ldr x20,[x20, #0xd8]
71029d5dac  cbz x20,0x71029d5e18
71029d5db0  ldr x8,[sp, #0xd8]
71029d5db4  str x8,[sp, #0x118]
71029d5db8  ldr x8,[sp, #0xd0]
71029d5dbc  str x8,[sp, #0x110]
71029d5dc0  ldr x8,[sp, #0xc8]
71029d5dc4  str x8,[sp, #0x108]
71029d5dc8  ldr x8,[sp, #0xc0]
71029d5dcc  str x8,[sp, #0x100]
71029d5dd0  ldr x8,[sp, #0xf8]
71029d5dd4  str x8,[sp, #0x138]
71029d5dd8  ldr x8,[sp, #0xf0]
71029d5ddc  str x8,[sp, #0x130]
71029d5de0  ldr x8,[sp, #0xe8]
71029d5de4  str x8,[sp, #0x128]
71029d5de8  ldr x8,[sp, #0xe0]
71029d5dec  str x8,[sp, #0x120]
71029d5df0  ldr x8,[x20, #0x8]
71029d5df4  ldrb w9,[x8, #0xa8]
71029d5df8  cbz w9,0x71029d5e10
71029d5dfc  ldr x0,[x8, #0x48]
71029d5e00  ldr x8,[x0]
71029d5e04  ldr x8,[x8, #0x20]
71029d5e08  add x1,sp,#0x100
71029d5e0c  blr x8
71029d5e10  mov w8,#0x1
71029d5e14  strb w8,[x20, #0x20]
71029d5e18  ldrb w8,[x19, #0x18]
71029d5e1c  cbnz w8,0x71029d3f3c
71029d5e20  ldr x9,[x19, #0x310]
71029d5e24  orr w8,wzr,#0x6
71029d5e28  str w8,[x19, #0x78c]
71029d5e2c  ldp x8,x9,[x9, #0xd0]
71029d5e30  mov x20,#0x8c76
71029d5e34  movk x20,#0x1385, LSL #16
71029d5e38  movk x20,#0xe, LSL #32
71029d5e3c  cmp x8,x9
71029d5e40  b.eq 0x71029d615c
71029d5e44  ldr w10,[x8, #0x8]
71029d5e48  cmp w10,#0x1
71029d5e4c  b.hi 0x71029d5e60
71029d5e50  ldr x10,[x8]
71029d5e54  ldr x11,[x10, #0x68]
71029d5e58  cmp x11,x20
71029d5e5c  b.eq 0x71029d614c
71029d5e60  add x8,x8,#0x10
71029d5e64  cmp x9,x8
71029d5e68  b.ne 0x71029d5e44
71029d5e6c  b 0x71029d615c
71029d5e70  ldr x24,[x10, #0x110]
71029d5e74  cbz x24,0x71029d5f10
71029d5e78  ldp x8,x9,[x24]
71029d5e7c  cmp x8,x9
71029d5e80  b.eq 0x71029d5f10
71029d5e84  ldp x21,x22,[x24, #0x18]
71029d5e88  cmp x21,x22
71029d5e8c  b.eq 0x71029d5f10
71029d5e90  mov w23,#0x1e24
71029d5e94  movk w23,#0x6dd2, LSL #16
71029d5e98  mov x25,x21
71029d5e9c  adrp x20,0x7104463000
71029d5ea0  add x20,x20,#0xb87
71029d5ea4  ldr x26,[x25]
71029d5ea8  ldr w8,[x26, #0x18]
71029d5eac  cmp w8,w23
71029d5eb0  b.ne 0x71029d5ec4
71029d5eb4  add x0,x26,#0x20
71029d5eb8  mov x1,x20
71029d5ebc  bl 0x71039c0060
71029d5ec0  cbz w0,0x71029d6260
71029d5ec4  add x25,x25,#0x8
71029d5ec8  cmp x22,x25
71029d5ecc  b.ne 0x71029d5ea4
71029d5ed0  cmp x21,x22
71029d5ed4  b.eq 0x71029d5f10
71029d5ed8  adrp x20,0x710426d000
71029d5edc  add x20,x20,#0xf2b
71029d5ee0  ldr x24,[x21]
71029d5ee4  ldr w8,[x24, #0x18]
71029d5ee8  add w9,w23,#0x16
71029d5eec  cmp w8,w9
71029d5ef0  b.ne 0x71029d5f04
71029d5ef4  add x0,x24,#0x20
71029d5ef8  mov x1,x20
71029d5efc  bl 0x71039c0060
71029d5f00  cbz w0,0x71029d6284
71029d5f04  add x21,x21,#0x8
71029d5f08  cmp x22,x21
71029d5f0c  b.ne 0x71029d5ee0
71029d5f10  ldrb w8,[x19, #0x18]
71029d5f14  cbnz w8,0x71029d4a4c
71029d5f18  mov w8,#0x4
71029d5f1c  str w8,[x19, #0x7c8]
71029d5f20  b 0x71029d4a4c
71029d5f24  cbz x26,0x71029d5c74
71029d5f28  ldr x8,[x26, #0x8]
71029d5f2c  ldr x8,[x8, #0x108]
71029d5f30  cbz x8,0x71029d5c74
71029d5f34  strb wzr,[x8, #0x44]
71029d5f38  ldr x8,[x19, #0x300]
71029d5f3c  ldr x8,[x8, #0x18]
71029d5f40  ldp x21,x22,[x8]
71029d5f44  cmp x21,x22
71029d5f48  b.ne 0x71029d5c7c
71029d5f4c  mov x8,#0xdf99
71029d5f50  movk x8,#0xb569, LSL #16
71029d5f54  mov x21,x22
71029d5f58  movk x8,#0x7, LSL #32
71029d5f5c  b 0x71029d5f64
71029d5f60  add x21,x21,#0x8
71029d5f64  ldr x9,[x21]
71029d5f68  ldr x10,[x9, #0xa0]
71029d5f6c  and x10,x10,#0xffffffffff
71029d5f70  cmp x10,x8
71029d5f74  b.ne 0x71029d5f60
71029d5f78  adrp x8,0x7105314000
71029d5f7c  add x8,x8,#0x4d8
71029d5f80  ldr x20,[x9, #0x130]
71029d5f84  ldarb w8,[x8]
71029d5f88  tbz w8,#0x0,0x71029d62a4
71029d5f8c  adrp x8,0x71052c5000
71029d5f90  ldrb w8,[x8, #0x1ba]
71029d5f94  adrp x2,0x71042a1000
71029d5f98  add x2,x2,#0x676
71029d5f9c  ldp x0,x1,[x20]
71029d5fa0  cbz w8,0x71029d5fb4
71029d5fa4  bl 0x71025f5420
71029d5fa8  ldrb w8,[x19, #0x731]
71029d5fac  cbnz w8,0x71029d5fc0
71029d5fb0  b 0x71029d60b8
71029d5fb4  bl 0x71025f55b0
71029d5fb8  ldrb w8,[x19, #0x731]
71029d5fbc  cbz w8,0x71029d60b8
71029d5fc0  ldr x9,[x19, #0xa10]
71029d5fc4  ldr x8,[x19, #0xa08]
71029d5fc8  cmp x9,x8
71029d5fcc  b.eq 0x71029d60b8
71029d5fd0  mov x20,xzr
71029d5fd4  b 0x71029d6058
71029d5fd8  cbz x22,0x71029d60a0
71029d5fdc  add x0,x22,#0x108
71029d5fe0  strb wzr,[x22, #0x110]
71029d5fe4  bl 0x71025e9d50
71029d5fe8  ldrb w8,[x22, #0x118]
71029d5fec  orr w8,w8,#0x1
71029d5ff0  strb w8,[x22, #0x118]
71029d5ff4  ldr x9,[x19, #0x300]
71029d5ff8  ldr x10,[x9, #0x18]
71029d5ffc  ldr x8,[x19, #0xa08]
71029d6000  ldp x9,x10,[x10]
71029d6004  cmp x9,x10
71029d6008  b.eq 0x71029d60a0
71029d600c  ldr x11,[x8, x21, LSL #0x0]
71029d6010  ldr x12,[x9], #0x8
71029d6014  ldr x13,[x12, #0xa0]
71029d6018  eor x13,x13,x11
71029d601c  tst x13,#0xffffffffff
71029d6020  b.eq 0x71029d6030
71029d6024  cmp x10,x9
71029d6028  b.ne 0x71029d6010
71029d602c  b 0x71029d60a0
71029d6030  cbz x12,0x71029d60a0
71029d6034  ldr x9,[x12, #0x110]
71029d6038  cbz x9,0x71029d60a0
71029d603c  ldp x0,x1,[x9]
71029d6040  cmp x0,x1
71029d6044  b.eq 0x71029d60a0
71029d6048  mov w2,#0x1
71029d604c  bl 0x71025f4d80
71029d6050  ldr x8,[x19, #0xa08]
71029d6054  b 0x71029d60a0
71029d6058  lsl x21,x20,#0x4
71029d605c  ldr x9,[x8, x21, LSL #0x0]
71029d6060  ands x9,x9,#0xffffffffff
71029d6064  b.eq 0x71029d60a0
71029d6068  ldr x11,[x19, #0x310]
71029d606c  ldp x10,x11,[x11, #0xd0]
71029d6070  cmp x10,x11
71029d6074  b.eq 0x71029d60a0
71029d6078  ldr w12,[x10, #0x8]
71029d607c  cmp w12,#0x1
71029d6080  b.hi 0x71029d6094
71029d6084  ldr x22,[x10]
71029d6088  ldr x12,[x22, #0x68]
71029d608c  cmp x9,x12
71029d6090  b.eq 0x71029d5fd8
71029d6094  add x10,x10,#0x10
71029d6098  cmp x11,x10
71029d609c  b.ne 0x71029d6078
71029d60a0  ldr x9,[x19, #0xa10]
71029d60a4  sub x9,x9,x8
71029d60a8  add w20,w20,#0x1
71029d60ac  asr x9,x9,#0x4
71029d60b0  cmp x9,x20
71029d60b4  b.hi 0x71029d6058
71029d60b8  ldrb w8,[x19, #0xc8]
71029d60bc  cbz w8,0x71029d60c8
71029d60c0  ldrb w8,[x19, #0x18]
71029d60c4  cbz w8,0x71029d60ec
71029d60c8  add sp,sp,#0x220
71029d60cc  ldp x29,x30,[sp, #0x60]
71029d60d0  ldp x20,x19,[sp, #0x50]
71029d60d4  ldp x22,x21,[sp, #0x40]
71029d60d8  ldp x24,x23,[sp, #0x30]
71029d60dc  ldp x26,x25,[sp, #0x20]
71029d60e0  ldp x28,x27,[sp, #0x10]
71029d60e4  ldp d9,d8,[sp], #0x70
71029d60e8  ret
71029d60ec  ldr x8,[x19, #0x310]
71029d60f0  ldr x8,[x8, #0x118]
71029d60f4  cbz x8,0x71029d60c8
71029d60f8  ldr x8,[x8]
71029d60fc  ldrb w9,[x8, #0x80]
71029d6100  cbz w9,0x71029d60c8
71029d6104  ldr x0,[x8, #0x30]
71029d6108  ldr x8,[x0]
71029d610c  ldr x8,[x8, #0x180]
71029d6110  mov x1,#0x8da4
71029d6114  movk x1,#0x1ca4, LSL #16
71029d6118  movk x1,#0xf, LSL #32
71029d611c  mov w2,wzr
71029d6120  blr x8
71029d6124  b 0x71029d60c8
71029d6128  cbz x25,0x71029d5d08
71029d612c  ldr x8,[x25, #0x8]
71029d6130  ldr x8,[x8, #0x108]
71029d6134  cbz x8,0x71029d5d08
71029d6138  strb wzr,[x8, #0x44]
71029d613c  ldr x8,[x19, #0x300]
71029d6140  ldr x8,[x8, #0x18]
71029d6144  ldr x21,[x8]
71029d6148  b 0x71029d5d08
71029d614c  cbz x10,0x71029d615c
71029d6150  add x0,x10,#0x108
71029d6154  strb wzr,[x10, #0x110]
71029d6158  bl 0x71025e9d50
71029d615c  ldr x8,[x19, #0x300]
71029d6160  ldr x9,[x8, #0x18]
71029d6164  ldp x8,x9,[x9]
71029d6168  cmp x8,x9
71029d616c  b.eq 0x71029d61b0
71029d6170  ldr x10,[x8], #0x8
71029d6174  ldr x11,[x10, #0xa0]
71029d6178  and x11,x11,#0xffffffffff
71029d617c  cmp x11,x20
71029d6180  b.eq 0x71029d6190
71029d6184  cmp x9,x8
71029d6188  b.ne 0x71029d6170
71029d618c  b 0x71029d61b0
71029d6190  cbz x10,0x71029d61b0
71029d6194  ldr x8,[x10, #0x110]
71029d6198  cbz x8,0x71029d61b0
71029d619c  ldp x0,x1,[x8]
71029d61a0  cmp x0,x1
71029d61a4  b.eq 0x71029d61b0
71029d61a8  mov w2,#0x1
71029d61ac  bl 0x71025f4d80
71029d61b0  ldr x9,[x19, #0x310]
71029d61b4  ldp x8,x9,[x9, #0xd0]
71029d61b8  mov x20,#0x9f8a
71029d61bc  movk x20,#0xf694, LSL #16
71029d61c0  movk x20,#0x11, LSL #32
71029d61c4  cmp x8,x9
71029d61c8  b.eq 0x71029d6208
71029d61cc  ldr w10,[x8, #0x8]
71029d61d0  cmp w10,#0x1
71029d61d4  b.hi 0x71029d61e8
71029d61d8  ldr x10,[x8]
71029d61dc  ldr x11,[x10, #0x68]
71029d61e0  cmp x11,x20
71029d61e4  b.eq 0x71029d61f8
71029d61e8  add x8,x8,#0x10
71029d61ec  cmp x9,x8
71029d61f0  b.ne 0x71029d61cc
71029d61f4  b 0x71029d6208
71029d61f8  cbz x10,0x71029d6208
71029d61fc  add x0,x10,#0x108
71029d6200  strb wzr,[x10, #0x110]
71029d6204  bl 0x71025e9d50
71029d6208  ldr x8,[x19, #0x300]
71029d620c  ldr x9,[x8, #0x18]
71029d6210  ldp x8,x9,[x9]
71029d6214  cmp x8,x9
71029d6218  b.eq 0x71029d3f3c
71029d621c  ldr x10,[x8], #0x8
71029d6220  ldr x11,[x10, #0xa0]
71029d6224  and x11,x11,#0xffffffffff
71029d6228  cmp x11,x20
71029d622c  b.eq 0x71029d623c
71029d6230  cmp x9,x8
71029d6234  b.ne 0x71029d621c
71029d6238  b 0x71029d3f3c
71029d623c  cbz x10,0x71029d3f3c
71029d6240  ldr x8,[x10, #0x110]
71029d6244  cbz x8,0x71029d3f3c
71029d6248  ldp x0,x1,[x8]
71029d624c  cmp x0,x1
71029d6250  b.eq 0x71029d3f3c
71029d6254  mov w2,#0x1
71029d6258  bl 0x71025f4d80
71029d625c  b 0x71029d3f3c
71029d6260  cbz x26,0x71029d5ed0
71029d6264  ldr x8,[x26, #0x8]
71029d6268  ldr x8,[x8, #0x108]
71029d626c  cbz x8,0x71029d5ed0
71029d6270  strb wzr,[x8, #0x44]
71029d6274  ldp x21,x22,[x24, #0x18]
71029d6278  cmp x21,x22
71029d627c  b.ne 0x71029d5ed8
71029d6280  b 0x71029d5f10
71029d6284  cbz x24,0x71029d5f10
71029d6288  ldr x8,[x24, #0x8]
71029d628c  ldr x8,[x8, #0x108]
71029d6290  cbz x8,0x71029d5f10
71029d6294  strb wzr,[x8, #0x44]
71029d6298  ldrb w8,[x19, #0x18]
71029d629c  cbnz w8,0x71029d4a4c
71029d62a0  b 0x71029d5f18
71029d62a4  adrp x0,0x7105314000
71029d62a8  add x0,x0,#0x4d8
71029d62ac  bl 0x71039c06b0
71029d62b0  cbz w0,0x71029d5f8c
71029d62b4  bl 0x7101764000
71029d62b8  adrp x0,0x7101763000
71029d62bc  add x0,x0,#0xc40
71029d62c0  adrp x1,0x71052c5000
71029d62c4  add x1,x1,#0x180
71029d62c8  adrp x2,0x7104f17000
71029d62cc  add x2,x2,#0x0
71029d62d0  bl 0x71000001c0
71029d62d4  adrp x0,0x7105314000
71029d62d8  add x0,x0,#0x4d8
71029d62dc  bl 0x71039c06c0
71029d62e0  b 0x71029d5f8c
71029d62e4  adrp x0,0x710532a000
71029d62e8  add x0,x0,#0x9e0
71029d62ec  bl 0x71039c06b0
71029d62f0  adrp x20,0x710532a000
71029d62f4  add x20,x20,#0x9f0
71029d62f8  cbz w0,0x71029d5bb4
71029d62fc  adrp x8,0x7104468000
71029d6300  adrp x9,0x710446a000
71029d6304  ldr q0,[x8, #0xca0]
71029d6308  ldr q1,[x9, #0x360]
71029d630c  adrp x8,0x7104465000
71029d6310  adrp x9,0x710446a000
71029d6314  stp q0,q1,[x20]
71029d6318  ldr q0,[x9, #0x350]
71029d631c  ldr q1,[x8, #0x6b0]
71029d6320  adrp x0,0x710532a000
71029d6324  add x0,x0,#0x9e0
71029d6328  stp q1,q0,[x20, #0x20]
71029d632c  bl 0x71039c06c0
71029d6330  b 0x71029d5bb4
71029d6334  ldr x0,[sp, #0x10]
71029d6338  bl 0x71039c0c00
71029d633c  ldr x0,[sp, #0x18]
71029d6340  bl 0x71039c0c00
71029d6344  bl 0x71039c2650
71029d6348  ldr x0,[sp, #0x30]
71029d634c  bl 0x71039c0c00
