// addr:      7101ad2930
// offset:    0x1ad2930
// name:      FUN_7101ad2930
// mangled:   
// size:      2696

7101ad2930  str d8,[sp, #-0x70]!
7101ad2934  stp x28,x27,[sp, #0x10]
7101ad2938  stp x26,x25,[sp, #0x20]
7101ad293c  stp x24,x23,[sp, #0x30]
7101ad2940  stp x22,x21,[sp, #0x40]
7101ad2944  stp x20,x19,[sp, #0x50]
7101ad2948  stp x29,x30,[sp, #0x60]
7101ad294c  add x29,sp,#0x60
7101ad2950  sub sp,sp,#0x280
7101ad2954  ldr w8,[x0, #0xec]
7101ad2958  mov x19,x0
7101ad295c  cbz w8,0x7101ad2bf4
7101ad2960  ldr w8,[x19, #0x1f4]
7101ad2964  cbz w8,0x7101ad29cc
7101ad2968  ldr x8,[x19, #0x108]
7101ad296c  ldr x0,[x8, #0x8]
7101ad2970  cbz x0,0x7101ad2998
7101ad2974  add x1,x19,#0x1f8
7101ad2978  bl 0x71037964b0
7101ad297c  cbz x0,0x7101ad2998
7101ad2980  ldr x8,[x0]
7101ad2984  ldr x8,[x8, #0x138]
7101ad2988  blr x8
7101ad298c  tbz w0,#0x0,0x7101ad3308
7101ad2990  ldr w8,[x19, #0x1f4]
7101ad2994  cbz w8,0x7101ad29cc
7101ad2998  ldr x0,[x19, #0x108]
7101ad299c  fmov s0,wzr
7101ad29a0  adrp x1,0x7104422000
7101ad29a4  add x1,x1,#0x9ef
7101ad29a8  add x20,x19,#0x1f0
7101ad29ac  bl 0x7103778630
7101ad29b0  ldr x0,[x19, #0x108]
7101ad29b4  fmov s0,0x3f800000
7101ad29b8  adrp x1,0x71042f8000
7101ad29bc  add x1,x1,#0x56f
7101ad29c0  bl 0x7103778300
7101ad29c4  strb wzr,[x20, #0x8]
7101ad29c8  str xzr,[x20]
7101ad29cc  ldrb w8,[x19, #0x120]
7101ad29d0  cmp w8,#0x4
7101ad29d4  b.hi 0x7101ad2ea8
7101ad29d8  cmp w8,#0x2
7101ad29dc  b.eq 0x7101ad2ea8
7101ad29e0  fmov s8,0x3f800000
7101ad29e4  ldr x0,[x19, #0x108]
7101ad29e8  adrp x1,0x71042f8000
7101ad29ec  add x1,x1,#0x56f
7101ad29f0  mov v0.16B,v8.16B
7101ad29f4  add x20,x19,#0x100
7101ad29f8  bl 0x7103778300
7101ad29fc  adrp x1,0x710439d000
7101ad2a00  add x1,x1,#0x881
7101ad2a04  add x8,sp,#0x98
7101ad2a08  mov x0,x20
7101ad2a0c  bl 0x7103776640
7101ad2a10  ldr x21,[sp, #0xa0]
7101ad2a14  mov v0.16B,v8.16B
7101ad2a18  adrp x1,0x7104306000
7101ad2a1c  add x1,x1,#0xde4
7101ad2a20  mov x0,x21
7101ad2a24  bl 0x7103778300
7101ad2a28  adrp x26,0x710523d000
7101ad2a2c  add x26,x26,#0x988
7101ad2a30  stp x26,xzr,[sp, #0x98]
7101ad2a34  cbz x21,0x7101ad2a58
7101ad2a38  ldr x0,[x21, #0x18]
7101ad2a3c  adrp x8,0x710523d000
7101ad2a40  add x8,x8,#0x9a8
7101ad2a44  stp x8,xzr,[x21, #0x10]
7101ad2a48  cbz x0,0x7101ad2a50
7101ad2a4c  bl 0x710392eb40
7101ad2a50  mov x0,x21
7101ad2a54  bl 0x710392eb40
7101ad2a58  adrp x1,0x710439d000
7101ad2a5c  add x1,x1,#0x881
7101ad2a60  add x8,sp,#0x8
7101ad2a64  mov x0,x20
7101ad2a68  bl 0x7103776640
7101ad2a6c  adrp x1,0x7104359000
7101ad2a70  add x1,x1,#0xb85
7101ad2a74  add x8,sp,#0x98
7101ad2a78  add x0,sp,#0x8
7101ad2a7c  bl 0x7103776640
7101ad2a80  ldr x20,[sp, #0x10]
7101ad2a84  stp x26,xzr,[sp, #0x8]
7101ad2a88  cbz x20,0x7101ad2aac
7101ad2a8c  ldr x0,[x20, #0x18]
7101ad2a90  adrp x8,0x710523d000
7101ad2a94  add x8,x8,#0x9a8
7101ad2a98  stp x8,xzr,[x20, #0x10]
7101ad2a9c  cbz x0,0x7101ad2aa4
7101ad2aa0  bl 0x710392eb40
7101ad2aa4  mov x0,x20
7101ad2aa8  bl 0x710392eb40
7101ad2aac  mov w0,#0x10
7101ad2ab0  mov w1,#0x20
7101ad2ab4  bl 0x710392e290
7101ad2ab8  mov x25,x0
7101ad2abc  cbnz x0,0x7101ad2b08
7101ad2ac0  adrp x8,0x7105332000
7101ad2ac4  ldr x0,[x8, #0xf00]
7101ad2ac8  cbz x0,0x7101ad2b04
7101ad2acc  mov w8,#0x20
7101ad2ad0  stur wzr,[x29, #-0x54]
7101ad2ad4  sub x1,x29,#0x54
7101ad2ad8  str x8,[sp, #0x8]
7101ad2adc  ldr x8,[x0]
7101ad2ae0  ldr x8,[x8, #0x30]
7101ad2ae4  add x2,sp,#0x8
7101ad2ae8  blr x8
7101ad2aec  tbz w0,#0x0,0x7101ad2b04
7101ad2af0  mov w0,#0x10
7101ad2af4  mov w1,#0x20
7101ad2af8  bl 0x710392e290
7101ad2afc  mov x25,x0
7101ad2b00  cbnz x0,0x7101ad2b08
7101ad2b04  mov x25,xzr
7101ad2b08  fmov s8,0x3f800000
7101ad2b0c  mov w20,wzr
7101ad2b10  adrp x21,0x710436a000
7101ad2b14  add x21,x21,#0xc27
7101ad2b18  adrp x27,0x710523d000
7101ad2b1c  add x27,x27,#0x9a8
7101ad2b20  adrp x22,0x7104338000
7101ad2b24  add x22,x22,#0xaad
7101ad2b28  stp xzr,xzr,[x25, #0x10]
7101ad2b2c  stp xzr,xzr,[x25]
7101ad2b30  add x8,sp,#0x8
7101ad2b34  add x0,sp,#0x98
7101ad2b38  mov x1,x21
7101ad2b3c  mov w2,w20
7101ad2b40  bl 0x7103776910
7101ad2b44  ldr x23,[sp, #0x10]
7101ad2b48  str xzr,[sp, #0x10]
7101ad2b4c  cbz x25,0x7101ad2b58
7101ad2b50  mov x0,x25
7101ad2b54  bl 0x710392eb40
7101ad2b58  stp x27,xzr,[sp, #0x8]
7101ad2b5c  ldr x0,[x23]
7101ad2b60  mov w1,wzr
7101ad2b64  bl 0x710377aa20
7101ad2b68  ldr x8,[x23]
7101ad2b6c  cbz x8,0x7101ad2b7c
7101ad2b70  ldrb w9,[x8, #0x58]
7101ad2b74  and w9,w9,#0xfe
7101ad2b78  strb w9,[x8, #0x58]
7101ad2b7c  ldr x24,[sp, #0xa0]
7101ad2b80  mov v0.16B,v8.16B
7101ad2b84  mov x1,x22
7101ad2b88  mov x0,x24
7101ad2b8c  bl 0x7103778300
7101ad2b90  ldr x0,[x23]
7101ad2b94  mov w1,#0x1
7101ad2b98  bl 0x710377acb0
7101ad2b9c  add w20,w20,#0x1
7101ad2ba0  cmp w20,#0x10
7101ad2ba4  mov x25,x23
7101ad2ba8  b.ne 0x7101ad2b30
7101ad2bac  ldrsw x8,[x19, #0xe4]
7101ad2bb0  cmp w8,#0x13
7101ad2bb4  b.cs 0x7101ad33b4
7101ad2bb8  add x8,x19,x8, LSL #0x2
7101ad2bbc  mov w9,#0x5
7101ad2bc0  str w9,[x8, #0x98]
7101ad2bc4  cbz x23,0x7101ad2bd0
7101ad2bc8  mov x0,x23
7101ad2bcc  bl 0x710392eb40
7101ad2bd0  stp x26,xzr,[sp, #0x98]
7101ad2bd4  cbz x24,0x7101ad3308
7101ad2bd8  ldr x0,[x24, #0x18]
7101ad2bdc  stp x27,xzr,[x24, #0x10]
7101ad2be0  cbz x0,0x7101ad2be8
7101ad2be4  bl 0x710392eb40
7101ad2be8  mov x0,x24
7101ad2bec  bl 0x710392eb40
7101ad2bf0  b 0x7101ad3308
7101ad2bf4  adrp x23,0x7105314000
7101ad2bf8  ldr x9,[x23, #0x510]
7101ad2bfc  ldr x9,[x9]
7101ad2c00  ldr x10,[x9, #0x188]
7101ad2c04  ldr x9,[x9, #0x1b8]
7101ad2c08  ldr x10,[x10]
7101ad2c0c  ldr x10,[x10, #0x8]
7101ad2c10  ldr x10,[x10]
7101ad2c14  ldr x10,[x10]
7101ad2c18  ldr w8,[x19, #0x138]
7101ad2c1c  mov w12,#0xc9ff
7101ad2c20  movk w12,#0x3b9a, LSL #16
7101ad2c24  ldr w11,[x10, #0x3c]
7101ad2c28  add w11,w11,w8
7101ad2c2c  cmp w11,w12
7101ad2c30  csel w11,w11,w12,cc
7101ad2c34  str w11,[x10, #0x3c]
7101ad2c38  ldr x9,[x9]
7101ad2c3c  ldr x9,[x9]
7101ad2c40  ldr w10,[x9]
7101ad2c44  cmp w10,w8
7101ad2c48  add x20,x19,#0x118
7101ad2c4c  mov x0,x20
7101ad2c50  csel w10,w8,w10,cc
7101ad2c54  sub w8,w10,w8
7101ad2c58  str w8,[x9]
7101ad2c5c  bl 0x710338ed30
7101ad2c60  ldr x8,[x23, #0x510]
7101ad2c64  ldr x8,[x8]
7101ad2c68  ldr x8,[x8, #0x1c8]
7101ad2c6c  ldr x8,[x8]
7101ad2c70  ldr x8,[x8]
7101ad2c74  ldrb w9,[x8, #0x3f0]
7101ad2c78  cmp w9,#0x3
7101ad2c7c  b.eq 0x7101ad2c90
7101ad2c80  ldr w9,[x19, #0x138]
7101ad2c84  ldr w10,[x8, #0x3ec]
7101ad2c88  add w9,w9,w10
7101ad2c8c  str w9,[x8, #0x3ec]
7101ad2c90  ldr w8,[x19, #0x13c]
7101ad2c94  cbz w8,0x7101ad2ca0
7101ad2c98  mov w0,#0x68
7101ad2c9c  bl 0x710177a5c0
7101ad2ca0  ldrb w8,[x19, #0x253]
7101ad2ca4  mov w22,#0x6500
7101ad2ca8  movk w22,#0x87, LSL #16
7101ad2cac  cbnz w8,0x7101ad2da4
7101ad2cb0  ldr w21,[x19, #0x1dc]
7101ad2cb4  mov w1,#0x5
7101ad2cb8  add x0,sp,#0x98
7101ad2cbc  add x24,sp,#0x98
7101ad2cc0  bl 0x71033872b0
7101ad2cc4  cmp w21,#0xa
7101ad2cc8  b.cs 0x7101ad33b4
7101ad2ccc  orr w8,wzr,#0x30
7101ad2cd0  madd x8,x21,x8,x24
7101ad2cd4  mov w9,#0x1
7101ad2cd8  mov w0,#0x5
7101ad2cdc  add x1,sp,#0x98
7101ad2ce0  strb w9,[x8, #0x28]
7101ad2ce4  bl 0x710338aca0
7101ad2ce8  adrp x8,0x710532f000
7101ad2cec  ldr x8,[x8, #0x8d0]
7101ad2cf0  ldr x0,[x8, #0x8]
7101ad2cf4  ldrb w8,[x0, #0x191]
7101ad2cf8  cbnz w8,0x7101ad2d78
7101ad2cfc  mov x21,#0x23f5
7101ad2d00  movk x21,#0x57a5, LSL #16
7101ad2d04  movk x21,#0xf, LSL #32
7101ad2d08  mov w2,#0x4
7101ad2d0c  mov x1,x21
7101ad2d10  bl 0x7103313f20
7101ad2d14  tbz w0,#0x0,0x7101ad2d78
7101ad2d18  add x0,sp,#0x58
7101ad2d1c  mov x1,x21
7101ad2d20  bl 0x71024076d0
7101ad2d24  ldr x8,[sp, #0x68]
7101ad2d28  adrp x9,0x7104f73000
7101ad2d2c  add x9,x9,#0xd50
7101ad2d30  str x9,[sp, #0x60]
7101ad2d34  cbz x8,0x7101ad2d9c
7101ad2d38  adrp x8,0x7106dd5000
7101ad2d3c  ldrb w8,[x8, #0x3a8]
7101ad2d40  cmp w8,#0x1
7101ad2d44  b.ne 0x7101ad2d9c
7101ad2d48  adrp x9,0x7106dd5000
7101ad2d4c  ldr w8,[sp, #0x70]
7101ad2d50  ldr w9,[x9, #0x3ac]
7101ad2d54  cmp w8,w9
7101ad2d58  b.ne 0x7101ad2d9c
7101ad2d5c  ldr x8,[sp, #0x68]
7101ad2d60  ldr wzr,[x8, #0x38]!
7101ad2d64  ldaxr w9,[x8]
7101ad2d68  sub w9,w9,#0x1
7101ad2d6c  stlxr w10,w9,[x8]
7101ad2d70  cbnz w10,0x7101ad2d64
7101ad2d74  b 0x7101ad2d9c
7101ad2d78  mov x8,#-0x1
7101ad2d7c  stp x8,xzr,[sp, #0x80]
7101ad2d80  adrp x8,0x7104f73000
7101ad2d84  add x8,x8,#0xd50
7101ad2d88  stp wzr,w22,[sp, #0x70]
7101ad2d8c  strb wzr,[sp, #0x78]
7101ad2d90  str wzr,[sp, #0x58]
7101ad2d94  str xzr,[sp, #0x90]
7101ad2d98  stp x8,xzr,[sp, #0x60]
7101ad2d9c  str xzr,[sp, #0x68]
7101ad2da0  strb wzr,[sp, #0x78]
7101ad2da4  ldr w9,[x19, #0x25c]
7101ad2da8  add w9,w9,#0x1
7101ad2dac  str w9,[x19, #0x25c]
7101ad2db0  ldrb w9,[x19, #0x120]
7101ad2db4  mov w8,#0x1
7101ad2db8  strb w8,[x19, #0x258]
7101ad2dbc  cmp w9,#0x5
7101ad2dc0  b.ne 0x7101ad2e64
7101ad2dc4  ldrb w8,[x19, #0x253]
7101ad2dc8  cbz w8,0x7101ad2f44
7101ad2dcc  ldr x8,[x23, #0x510]
7101ad2dd0  ldr x8,[x8]
7101ad2dd4  ldr x8,[x8, #0x1c8]
7101ad2dd8  ldr x8,[x8]
7101ad2ddc  ldr x8,[x8]
7101ad2de0  ldrb w1,[x8, #0x3f0]
7101ad2de4  cmp w1,#0x3
7101ad2de8  b.eq 0x7101ad2e24
7101ad2dec  adrp x8,0x710532f000
7101ad2df0  ldr x8,[x8, #0x730]
7101ad2df4  ldr x8,[x8, #0x8]
7101ad2df8  ldr x0,[x8, #0x368]
7101ad2dfc  mov w2,wzr
7101ad2e00  bl 0x710329d690
7101ad2e04  ldr x8,[x23, #0x510]
7101ad2e08  ldr x9,[x8]
7101ad2e0c  ldr x9,[x9, #0x1c8]
7101ad2e10  ldr x9,[x9]
7101ad2e14  ldr x9,[x9]
7101ad2e18  ldr w9,[x9, #0x3ec]
7101ad2e1c  cmp w0,w9
7101ad2e20  b.ls 0x7101ad2ff4
7101ad2e24  ldr x0,[x19, #0x108]
7101ad2e28  fmov s0,0x3f800000
7101ad2e2c  adrp x1,0x71042c5000
7101ad2e30  add x1,x1,#0x6
7101ad2e34  bl 0x7103778300
7101ad2e38  ldr x8,[x23, #0x510]
7101ad2e3c  ldr x8,[x8]
7101ad2e40  ldr x8,[x8, #0x1b8]
7101ad2e44  ldr x8,[x8]
7101ad2e48  ldr x8,[x8]
7101ad2e4c  ldr w1,[x8]
7101ad2e50  ldr x0,[x19, #0x238]
7101ad2e54  bl 0x7103399f50
7101ad2e58  ldrb w8,[x19, #0x253]
7101ad2e5c  cbnz w8,0x7101ad2e9c
7101ad2e60  b 0x7101ad30dc
7101ad2e64  mov x0,x20
7101ad2e68  strh w8,[x19, #0x244]
7101ad2e6c  strb wzr,[x19, #0x246]
7101ad2e70  str wzr,[x19, #0x248]
7101ad2e74  strb wzr,[x19, #0x24c]
7101ad2e78  bl 0x71017831e0
7101ad2e7c  and w8,w0,#0x1
7101ad2e80  mov x0,x20
7101ad2e84  strb w8,[x19, #0x246]
7101ad2e88  str wzr,[x19, #0x248]
7101ad2e8c  strb wzr,[x19, #0x244]
7101ad2e90  bl 0x71017830a0
7101ad2e94  ldrb w8,[x19, #0x253]
7101ad2e98  cbz w8,0x7101ad30dc
7101ad2e9c  mov w8,#0x1
7101ad2ea0  strb w8,[x19, #0x255]
7101ad2ea4  b 0x7101ad3194
7101ad2ea8  ldrsw x8,[x19, #0xe4]
7101ad2eac  cmp w8,#0x13
7101ad2eb0  b.cs 0x7101ad33b4
7101ad2eb4  add x8,x19,x8, LSL #0x2
7101ad2eb8  mov w9,#0x2
7101ad2ebc  str w9,[x8, #0x98]
7101ad2ec0  ldrb w8,[x19, #0x120]
7101ad2ec4  cmp w8,#0x5
7101ad2ec8  b.ne 0x7101ad2f38
7101ad2ecc  ldrb w8,[x19, #0x253]
7101ad2ed0  cbz w8,0x7101ad2f38
7101ad2ed4  adrp x20,0x7105314000
7101ad2ed8  ldr x8,[x20, #0x510]
7101ad2edc  ldr x8,[x8]
7101ad2ee0  ldr x8,[x8, #0x1c8]
7101ad2ee4  ldr x8,[x8]
7101ad2ee8  ldr x8,[x8]
7101ad2eec  ldrb w1,[x8, #0x3f0]
7101ad2ef0  cmp w1,#0x3
7101ad2ef4  b.eq 0x7101ad2f30
7101ad2ef8  adrp x8,0x710532f000
7101ad2efc  ldr x8,[x8, #0x730]
7101ad2f00  ldr x8,[x8, #0x8]
7101ad2f04  ldr x0,[x8, #0x368]
7101ad2f08  mov w2,wzr
7101ad2f0c  bl 0x710329d690
7101ad2f10  ldr x8,[x20, #0x510]
7101ad2f14  ldr x8,[x8]
7101ad2f18  ldr x8,[x8, #0x1c8]
7101ad2f1c  ldr x8,[x8]
7101ad2f20  ldr x8,[x8]
7101ad2f24  ldr w8,[x8, #0x3ec]
7101ad2f28  cmp w0,w8
7101ad2f2c  b.ls 0x7101ad3364
7101ad2f30  strb wzr,[x19, #0x260]
7101ad2f34  b 0x7101ad3308
7101ad2f38  mov w8,#0x1
7101ad2f3c  strb w8,[x19, #0x260]
7101ad2f40  b 0x7101ad3308
7101ad2f44  mov x10,#0x6e61
7101ad2f48  movk x10,#0x6d69, LSL #16
7101ad2f4c  mov x9,#0x1100000000
7101ad2f50  movk x10,#0x675f, LSL #32
7101ad2f54  movk x10,#0x7465, LSL #48
7101ad2f58  mov x11,#0x735f
7101ad2f5c  movk x11,#0x6174, LSL #16
7101ad2f60  stp x9,x10,[sp, #0x98]
7101ad2f64  mov w8,#0x9dc5
7101ad2f68  movk w8,#0x811c, LSL #16
7101ad2f6c  movk x11,#0x646e, LSL #32
7101ad2f70  movk x11,#0x7261, LSL #48
7101ad2f74  str x11,[sp, #0xa8]
7101ad2f78  mov w9,#0x64
7101ad2f7c  mov w11,#0x61
7101ad2f80  strh w9,[sp, #0xb0]
7101ad2f84  mov w10,#0x9
7101ad2f88  mov w9,#0x89
7101ad2f8c  add x12,sp,#0x98
7101ad2f90  mov w13,w8
7101ad2f94  mul w13,w13,w9
7101ad2f98  and w11,w11,#0xff
7101ad2f9c  eor w13,w13,w11
7101ad2fa0  ldrb w11,[x12, x10, LSL ]
7101ad2fa4  add x10,x10,#0x1
7101ad2fa8  cbnz w11,0x7101ad2f94
7101ad2fac  add x10,x19,#0x1f0
7101ad2fb0  add x12,sp,#0x98
7101ad2fb4  cmp x10,x12
7101ad2fb8  str w13,[sp, #0x98]
7101ad2fbc  b.eq 0x7101ad2e94
7101ad2fc0  mov x11,xzr
7101ad2fc4  add x12,x12,#0x9
7101ad2fc8  add x13,x19,#0x1f8
7101ad2fcc  mov w15,#0x61
7101ad2fd0  add w14,w11,#0x1
7101ad2fd4  cmp w14,#0x3e
7101ad2fd8  strb w15,[x13, x11, LSL ]
7101ad2fdc  b.hi 0x7101ad30a0
7101ad2fe0  ldrb w15,[x12, x11, LSL ]
7101ad2fe4  add x14,x11,#0x1
7101ad2fe8  mov x11,x14
7101ad2fec  cbnz w15,0x7101ad2fd0
7101ad2ff0  b 0x7101ad30a4
7101ad2ff4  mov x11,#0x6e61
7101ad2ff8  movk x11,#0x6d69, LSL #16
7101ad2ffc  orr x10,xzr,#0xe00000000
7101ad3000  movk x11,#0x675f, LSL #32
7101ad3004  movk x11,#0x7465, LSL #48
7101ad3008  strb wzr,[sp, #0xae]
7101ad300c  mov w9,#0x9dc5
7101ad3010  movk w9,#0x811c, LSL #16
7101ad3014  mov w12,#0x6d5f
7101ad3018  movk w12,#0x6c75, LSL #16
7101ad301c  stp x10,x11,[sp, #0x98]
7101ad3020  mov w10,#0x6974
7101ad3024  str w12,[sp, #0xa8]
7101ad3028  mov w12,#0x61
7101ad302c  mov w11,#0x9
7101ad3030  strh w10,[sp, #0xac]
7101ad3034  mov w10,#0x89
7101ad3038  add x13,sp,#0x98
7101ad303c  mov w14,w9
7101ad3040  mul w14,w14,w10
7101ad3044  and w12,w12,#0xff
7101ad3048  eor w14,w14,w12
7101ad304c  ldrb w12,[x13, x11, LSL ]
7101ad3050  add x11,x11,#0x1
7101ad3054  cbnz w12,0x7101ad3040
7101ad3058  add x11,x19,#0x1f0
7101ad305c  add x13,sp,#0x98
7101ad3060  cmp x11,x13
7101ad3064  str w14,[sp, #0x98]
7101ad3068  b.eq 0x7101ad2e3c
7101ad306c  mov x12,xzr
7101ad3070  add x13,x13,#0x9
7101ad3074  add x14,x19,#0x1f8
7101ad3078  mov w16,#0x61
7101ad307c  add w15,w12,#0x1
7101ad3080  cmp w15,#0x3e
7101ad3084  strb w16,[x14, x12, LSL ]
7101ad3088  b.hi 0x7101ad332c
7101ad308c  ldrb w16,[x13, x12, LSL ]
7101ad3090  add x15,x12,#0x1
7101ad3094  mov x12,x15
7101ad3098  cbnz w16,0x7101ad307c
7101ad309c  b 0x7101ad3330
7101ad30a0  add w14,w11,#0x1
7101ad30a4  add x11,x19,#0x1f8
7101ad30a8  strb wzr,[x11, w14, UXTW ]
7101ad30ac  ldrb w12,[x19, #0x1f8]
7101ad30b0  str w14,[x19, #0x1f4]
7101ad30b4  cbz w12,0x7101ad30d0
7101ad30b8  add x11,x19,#0x1f9
7101ad30bc  mul w8,w8,w9
7101ad30c0  and w12,w12,#0xff
7101ad30c4  eor w8,w8,w12
7101ad30c8  ldrb w12,[x11], #0x1
7101ad30cc  cbnz w12,0x7101ad30bc
7101ad30d0  str w8,[x10]
7101ad30d4  ldrb w8,[x19, #0x253]
7101ad30d8  cbnz w8,0x7101ad2e9c
7101ad30dc  adrp x8,0x7105314000
7101ad30e0  ldr x8,[x8, #0x508]
7101ad30e4  ldr x8,[x8]
7101ad30e8  mov w9,#0x4dd8
7101ad30ec  movk w9,#0x5b, LSL #16
7101ad30f0  add x20,x8,x9
7101ad30f4  mov w9,#0x4de8
7101ad30f8  movk w9,#0x5b, LSL #16
7101ad30fc  add x21,x8,x9
7101ad3100  ldr x8,[x21]
7101ad3104  cbz x8,0x7101ad311c
7101ad3108  ldr x8,[x20]
7101ad310c  ldrb w9,[x8, #0x10]
7101ad3110  and w9,w9,#0x1
7101ad3114  strb w9,[x8, #0x10]
7101ad3118  b 0x7101ad3194
7101ad311c  mov w0,#0x10
7101ad3120  orr w1,wzr,#0x18
7101ad3124  bl 0x710392e290
7101ad3128  cbnz x0,0x7101ad3170
7101ad312c  adrp x8,0x7105332000
7101ad3130  ldr x0,[x8, #0xf00]
7101ad3134  cbz x0,0x7101ad316c
7101ad3138  orr w8,wzr,#0x18
7101ad313c  str wzr,[sp, #0x8]
7101ad3140  add x1,sp,#0x8
7101ad3144  str x8,[sp, #0x98]
7101ad3148  ldr x8,[x0]
7101ad314c  ldr x8,[x8, #0x30]
7101ad3150  add x2,sp,#0x98
7101ad3154  blr x8
7101ad3158  tbz w0,#0x0,0x7101ad316c
7101ad315c  mov w0,#0x10
7101ad3160  orr w1,wzr,#0x18
7101ad3164  bl 0x710392e290
7101ad3168  cbnz x0,0x7101ad3170
7101ad316c  mov x0,xzr
7101ad3170  strb wzr,[x0, #0x10]
7101ad3174  str x20,[x0, #0x8]
7101ad3178  ldr x8,[x20]
7101ad317c  str x8,[x0]
7101ad3180  str x0,[x8, #0x8]
7101ad3184  str x0,[x20]
7101ad3188  ldr x8,[x21]
7101ad318c  add x8,x8,#0x1
7101ad3190  str x8,[x21]
7101ad3194  ldrb w8,[x19, #0x120]
7101ad3198  cmp w8,#0x4
7101ad319c  b.eq 0x7101ad3200
7101ad31a0  add x0,x19,#0x100
7101ad31a4  adrp x1,0x710439d000
7101ad31a8  add x1,x1,#0x881
7101ad31ac  add x8,sp,#0x98
7101ad31b0  bl 0x7103776640
7101ad31b4  ldr x20,[sp, #0xa0]
7101ad31b8  fmov s0,0x3f800000
7101ad31bc  adrp x1,0x7104317000
7101ad31c0  add x1,x1,#0x6ce
7101ad31c4  mov x0,x20
7101ad31c8  bl 0x7103778300
7101ad31cc  adrp x8,0x710523d000
7101ad31d0  add x8,x8,#0x988
7101ad31d4  stp x8,xzr,[sp, #0x98]
7101ad31d8  cbz x20,0x7101ad31fc
7101ad31dc  ldr x0,[x20, #0x18]
7101ad31e0  adrp x8,0x710523d000
7101ad31e4  add x8,x8,#0x9a8
7101ad31e8  stp x8,xzr,[x20, #0x10]
7101ad31ec  cbz x0,0x7101ad31f4
7101ad31f0  bl 0x710392eb40
7101ad31f4  mov x0,x20
7101ad31f8  bl 0x710392eb40
7101ad31fc  strb wzr,[x19, #0x254]
7101ad3200  ldr w8,[x19, #0x1f4]
7101ad3204  cbz w8,0x7101ad3218
7101ad3208  ldr x0,[x19, #0x108]
7101ad320c  fmov s0,0x3f800000
7101ad3210  add x1,x19,#0x1f8
7101ad3214  bl 0x7103778300
7101ad3218  fmov s8,0x3f800000
7101ad321c  ldr x0,[x19, #0x108]
7101ad3220  adrp x1,0x7104422000
7101ad3224  add x1,x1,#0x9ef
7101ad3228  mov v0.16B,v8.16B
7101ad322c  bl 0x7103778300
7101ad3230  ldr x0,[x19, #0x108]
7101ad3234  mov v0.16B,v8.16B
7101ad3238  adrp x1,0x7104319000
7101ad323c  add x1,x1,#0x105
7101ad3240  bl 0x7103778300
7101ad3244  mov x0,x19
7101ad3248  bl 0x7101ad36e0
7101ad324c  adrp x8,0x710532f000
7101ad3250  ldr x8,[x8, #0x8d0]
7101ad3254  ldr x0,[x8, #0x8]
7101ad3258  ldrb w8,[x0, #0x191]
7101ad325c  cbnz w8,0x7101ad32dc
7101ad3260  mov x19,#0x35e7
7101ad3264  movk x19,#0x57d6, LSL #16
7101ad3268  movk x19,#0x10, LSL #32
7101ad326c  mov w2,#0x4
7101ad3270  mov x1,x19
7101ad3274  bl 0x7103313f20
7101ad3278  tbz w0,#0x0,0x7101ad32dc
7101ad327c  add x0,sp,#0x18
7101ad3280  mov x1,x19
7101ad3284  bl 0x71024076d0
7101ad3288  ldr x8,[sp, #0x28]
7101ad328c  adrp x9,0x7104f73000
7101ad3290  add x9,x9,#0xd50
7101ad3294  str x9,[sp, #0x20]
7101ad3298  cbz x8,0x7101ad3300
7101ad329c  adrp x8,0x7106dd5000
7101ad32a0  ldrb w8,[x8, #0x3a8]
7101ad32a4  cmp w8,#0x1
7101ad32a8  b.ne 0x7101ad3300
7101ad32ac  adrp x9,0x7106dd5000
7101ad32b0  ldr w8,[sp, #0x30]
7101ad32b4  ldr w9,[x9, #0x3ac]
7101ad32b8  cmp w8,w9
7101ad32bc  b.ne 0x7101ad3300
7101ad32c0  ldr x8,[sp, #0x28]
7101ad32c4  ldr wzr,[x8, #0x38]!
7101ad32c8  ldaxr w9,[x8]
7101ad32cc  sub w9,w9,#0x1
7101ad32d0  stlxr w10,w9,[x8]
7101ad32d4  cbnz w10,0x7101ad32c8
7101ad32d8  b 0x7101ad3300
7101ad32dc  mov x8,#-0x1
7101ad32e0  stp x8,xzr,[sp, #0x40]
7101ad32e4  adrp x8,0x7104f73000
7101ad32e8  add x8,x8,#0xd50
7101ad32ec  stp wzr,w22,[sp, #0x30]
7101ad32f0  strb wzr,[sp, #0x38]
7101ad32f4  str wzr,[sp, #0x18]
7101ad32f8  str xzr,[sp, #0x50]
7101ad32fc  stp x8,xzr,[sp, #0x20]
7101ad3300  str xzr,[sp, #0x28]
7101ad3304  strb wzr,[sp, #0x38]
7101ad3308  add sp,sp,#0x280
7101ad330c  ldp x29,x30,[sp, #0x60]
7101ad3310  ldp x20,x19,[sp, #0x50]
7101ad3314  ldp x22,x21,[sp, #0x40]
7101ad3318  ldp x24,x23,[sp, #0x30]
7101ad331c  ldp x26,x25,[sp, #0x20]
7101ad3320  ldp x28,x27,[sp, #0x10]
7101ad3324  ldr d8,[sp], #0x70
7101ad3328  ret
7101ad332c  add w15,w12,#0x1
7101ad3330  add x12,x19,#0x1f8
7101ad3334  strb wzr,[x12, w15, UXTW ]
7101ad3338  ldrb w13,[x19, #0x1f8]
7101ad333c  str w15,[x19, #0x1f4]
7101ad3340  cbz w13,0x7101ad335c
7101ad3344  add x12,x19,#0x1f9
7101ad3348  mul w9,w9,w10
7101ad334c  and w13,w13,#0xff
7101ad3350  eor w9,w9,w13
7101ad3354  ldrb w13,[x12], #0x1
7101ad3358  cbnz w13,0x7101ad3348
7101ad335c  str w9,[x11]
7101ad3360  b 0x7101ad2e3c
7101ad3364  ldr x0,[x19, #0x108]
7101ad3368  fmov s0,wzr
7101ad336c  mov w8,#0x1
7101ad3370  adrp x1,0x7104422000
7101ad3374  add x1,x1,#0x9ef
7101ad3378  strb w8,[x19, #0x260]
7101ad337c  bl 0x7103778630
7101ad3380  ldr x0,[x19, #0x108]
7101ad3384  adrp x1,0x71042f8000
7101ad3388  add x1,x1,#0x56f
7101ad338c  fmov s0,0x3f800000
7101ad3390  add sp,sp,#0x280
7101ad3394  ldp x29,x30,[sp, #0x60]
7101ad3398  ldp x20,x19,[sp, #0x50]
7101ad339c  ldp x22,x21,[sp, #0x40]
7101ad33a0  ldp x24,x23,[sp, #0x30]
7101ad33a4  ldp x26,x25,[sp, #0x20]
7101ad33a8  ldp x28,x27,[sp, #0x10]
7101ad33ac  ldr d8,[sp], #0x70
7101ad33b0  b 0x7103778300
7101ad33b4  bl 0x71039c2650
