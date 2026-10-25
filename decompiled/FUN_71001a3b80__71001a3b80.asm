// addr:      71001a3b80
// offset:    0x1a3b80
// name:      FUN_71001a3b80
// mangled:   
// size:      1328

71001a3b80  stp x28,x27,[sp, #-0x60]!
71001a3b84  stp x26,x25,[sp, #0x10]
71001a3b88  stp x24,x23,[sp, #0x20]
71001a3b8c  stp x22,x21,[sp, #0x30]
71001a3b90  stp x20,x19,[sp, #0x40]
71001a3b94  stp x29,x30,[sp, #0x50]
71001a3b98  add x29,sp,#0x50
71001a3b9c  sub sp,sp,#0x250
71001a3ba0  adrp x25,0x71052a4000
71001a3ba4  ldr x25,[x25, #0xdc8]
71001a3ba8  mov x19,x0
71001a3bac  ldr x0,[x25]
71001a3bb0  bl 0x7100161fa0
71001a3bb4  ldr x8,[x0, #0x98]
71001a3bb8  cbz x8,0x71001a4074
71001a3bbc  ldr x8,[x0]
71001a3bc0  ldr x8,[x8, #0x58]
71001a3bc4  add x1,x19,#0x90
71001a3bc8  mov x21,x0
71001a3bcc  blr x8
71001a3bd0  cbz x0,0x71001a4078
71001a3bd4  adrp x26,0x71052a4000
71001a3bd8  ldr x26,[x26, #0xdf0]
71001a3bdc  mov x20,x0
71001a3be0  ldr x0,[x26]
71001a3be4  bl 0x71001925f0
71001a3be8  and w8,w0,#0xff
71001a3bec  cmp w8,#0xfd
71001a3bf0  strb w0,[x19, #0xb8]
71001a3bf4  b.ne 0x71001a3c14
71001a3bf8  adrp x8,0x71052a6000
71001a3bfc  ldr x8,[x8, #0x778]
71001a3c00  mov x0,xzr
71001a3c04  stp x8,xzr,[x19, #0x30]
71001a3c08  adrp x8,0x71043df000
71001a3c0c  add x8,x8,#0x58c
71001a3c10  b 0x71001a408c
71001a3c14  add x0,sp,#0xc8
71001a3c18  str xzr,[sp, #0x240]
71001a3c1c  str xzr,[sp, #0x238]
71001a3c20  str xzr,[sp, #0x230]
71001a3c24  str xzr,[sp, #0x228]
71001a3c28  str xzr,[sp, #0x220]
71001a3c2c  str xzr,[sp, #0x218]
71001a3c30  str xzr,[sp, #0x210]
71001a3c34  str xzr,[sp, #0x208]
71001a3c38  stp xzr,xzr,[sp, #0x1f8]
71001a3c3c  stp xzr,xzr,[sp, #0x1e8]
71001a3c40  stp xzr,xzr,[sp, #0x1d8]
71001a3c44  stp xzr,xzr,[sp, #0x1c8]
71001a3c48  stp xzr,xzr,[sp, #0x1b8]
71001a3c4c  stp xzr,xzr,[sp, #0x1a8]
71001a3c50  stp xzr,xzr,[sp, #0x198]
71001a3c54  stp xzr,xzr,[sp, #0x188]
71001a3c58  stp xzr,xzr,[sp, #0x178]
71001a3c5c  stp xzr,xzr,[sp, #0x168]
71001a3c60  stp xzr,xzr,[sp, #0x158]
71001a3c64  stp xzr,xzr,[sp, #0x148]
71001a3c68  bl 0x710015fd60
71001a3c6c  add x0,sp,#0x48
71001a3c70  bl 0x710015fd60
71001a3c74  ldr x0,[x25]
71001a3c78  bl 0x7100161fb0
71001a3c7c  ldr x8,[x0]
71001a3c80  ldr x9,[x8, #0x28]
71001a3c84  add x8,sp,#0x38
71001a3c88  add x2,sp,#0xc8
71001a3c8c  mov x1,x20
71001a3c90  blr x9
71001a3c94  ldr w8,[sp, #0x38]
71001a3c98  mov x28,xzr
71001a3c9c  cbnz w8,0x71001a3e58
71001a3ca0  add x0,sp,#0xc8
71001a3ca4  bl 0x71001602c0
71001a3ca8  mov x28,x0
71001a3cac  add x8,sp,#0x10
71001a3cb0  add x0,sp,#0xc8
71001a3cb4  add x22,sp,#0x10
71001a3cb8  bl 0x7100160230
71001a3cbc  add x0,sp,#0x10
71001a3cc0  bl 0x71000beb20
71001a3cc4  adrp x8,0x71052a4000
71001a3cc8  ldr x8,[x8, #0xd20]
71001a3ccc  mov w23,w0
71001a3cd0  add x0,x22,#0x8
71001a3cd4  add x8,x8,#0x10
71001a3cd8  str x8,[sp, #0x10]
71001a3cdc  bl 0x71000b1cf0
71001a3ce0  tbz w23,#0x0,0x71001a3e58
71001a3ce4  ldr x24,[x21, #0x20]
71001a3ce8  add x23,x21,#0x18
71001a3cec  cmp x24,x23
71001a3cf0  b.eq 0x71001a3e58
71001a3cf4  mov w22,wzr
71001a3cf8  add x27,sp,#0x148
71001a3cfc  ldr x8,[x24, #0x10]
71001a3d00  cmp x8,x20
71001a3d04  b.eq 0x71001a3d5c
71001a3d08  ldr x0,[x25]
71001a3d0c  bl 0x7100161fb0
71001a3d10  ldr x8,[x0]
71001a3d14  ldr x1,[x24, #0x10]
71001a3d18  add x2,sp,#0x48
71001a3d1c  ldr x9,[x8, #0x28]
71001a3d20  add x8,sp,#0x10
71001a3d24  blr x9
71001a3d28  add x0,sp,#0x38
71001a3d2c  add x1,sp,#0x10
71001a3d30  bl 0x71000bcf30
71001a3d34  ldr w8,[sp, #0x38]
71001a3d38  cbnz w8,0x71001a3d5c
71001a3d3c  add x0,sp,#0xc8
71001a3d40  add x1,sp,#0x48
71001a3d44  bl 0x71001603e0
71001a3d48  tbz w0,#0x0,0x71001a3d5c
71001a3d4c  ldr x8,[x24, #0x10]
71001a3d50  and x9,x22,#0xffff
71001a3d54  add w22,w22,#0x1
71001a3d58  str x8,[x27, x9, LSL #0x3]
71001a3d5c  ldr x24,[x24, #0x8]
71001a3d60  cmp x24,x23
71001a3d64  b.ne 0x71001a3cfc
71001a3d68  tst w22,#0xffff
71001a3d6c  b.eq 0x71001a3e58
71001a3d70  str x28,[sp, #0x8]
71001a3d74  mov w28,wzr
71001a3d78  and x27,x22,#0xffff
71001a3d7c  add x22,sp,#0x148
71001a3d80  ldr x23,[x22]
71001a3d84  orr x8,xzr,#0x80000000000
71001a3d88  str x8,[sp, #0x10]
71001a3d8c  str wzr,[sp, #0x18]
71001a3d90  ldr x8,[x23]
71001a3d94  ldr x8,[x8, #0x18]
71001a3d98  add x1,sp,#0x10
71001a3d9c  mov x0,x23
71001a3da0  blr x8
71001a3da4  ldrb w24,[x23, #0x38]
71001a3da8  ldr x0,[x26]
71001a3dac  mov w1,w24
71001a3db0  bl 0x7100190a90
71001a3db4  tbz w0,#0x0,0x71001a3dc8
71001a3db8  ldr x0,[x26]
71001a3dbc  mov w1,w24
71001a3dc0  bl 0x7100190af0
71001a3dc4  mov w28,#0x1
71001a3dc8  ldr x0,[x23, #0xa8]
71001a3dcc  ldr x8,[x0]
71001a3dd0  ldr x8,[x8, #0x30]
71001a3dd4  mov x1,x23
71001a3dd8  blr x8
71001a3ddc  ldr x0,[x25]
71001a3de0  bl 0x7100161fb0
71001a3de4  ldr x8,[x0]
71001a3de8  ldr x8,[x8, #0x58]
71001a3dec  mov x1,x23
71001a3df0  blr x8
71001a3df4  ldr x0,[x26]
71001a3df8  bl 0x7100190ca0
71001a3dfc  mov x1,x23
71001a3e00  bl 0x7100189910
71001a3e04  mov x0,x23
71001a3e08  bl 0x710015e730
71001a3e0c  mov x0,x23
71001a3e10  bl 0x710019b820
71001a3e14  ldr x8,[x21]
71001a3e18  ldr x8,[x8, #0x28]
71001a3e1c  mov x0,x21
71001a3e20  mov x1,x23
71001a3e24  blr x8
71001a3e28  add x22,x22,#0x8
71001a3e2c  subs x27,x27,#0x1
71001a3e30  b.ne 0x71001a3d80
71001a3e34  ldr x0,[x25]
71001a3e38  bl 0x7100162430
71001a3e3c  tbz w28,#0x0,0x71001a3e54
71001a3e40  ldr x0,[x26]
71001a3e44  bl 0x7100193580
71001a3e48  mov w1,#0x1
71001a3e4c  mov w2,#0x1
71001a3e50  bl 0x7100198450
71001a3e54  ldr x28,[sp, #0x8]
71001a3e58  add x0,sp,#0x48
71001a3e5c  bl 0x710015ff20
71001a3e60  add x0,sp,#0xc8
71001a3e64  bl 0x710015ff20
71001a3e68  ldrb w1,[x19, #0xb8]
71001a3e6c  mov x0,x20
71001a3e70  bl 0x710015e540
71001a3e74  mov x0,x20
71001a3e78  mov x1,x28
71001a3e7c  bl 0x710015e550
71001a3e80  add x8,sp,#0x148
71001a3e84  mov x0,x20
71001a3e88  bl 0x710015e7d0
71001a3e8c  ldr x0,[x26]
71001a3e90  ldrb w1,[x19, #0xb8]
71001a3e94  bl 0x7100192f70
71001a3e98  ldr x0,[x26]
71001a3e9c  bl 0x7100193a30
71001a3ea0  cbz x0,0x71001a3ed0
71001a3ea4  ldr x0,[x26]
71001a3ea8  bl 0x7100193a30
71001a3eac  mov x21,x0
71001a3eb0  ldr x0,[x26]
71001a3eb4  bl 0x7100193560
71001a3eb8  ldrb w2,[x19, #0xb8]
71001a3ebc  mov w1,w0
71001a3ec0  add x8,sp,#0x148
71001a3ec4  mov x0,x21
71001a3ec8  mov w3,w2
71001a3ecc  bl 0x71001acaf0
71001a3ed0  add x0,sp,#0x148
71001a3ed4  str xzr,[sp, #0x148]
71001a3ed8  bl 0x71000bb5d0
71001a3edc  ldrsw x21,[x19, #0x60]
71001a3ee0  bl 0x71000bb680
71001a3ee4  ldr x8,[sp, #0x148]
71001a3ee8  ldr x9,[x0]
71001a3eec  madd x8,x9,x21,x8
71001a3ef0  ldr x9,[x19, #0x78]
71001a3ef4  str x8,[x19, #0x58]
71001a3ef8  ldr x8,[x19, #0x80]
71001a3efc  ldr x0,[x26]
71001a3f00  stp x9,x8,[sp, #0x148]
71001a3f04  ldr x8,[x19, #0x88]
71001a3f08  str x8,[sp, #0x158]
71001a3f0c  str wzr,[sp, #0x50]
71001a3f10  str xzr,[sp, #0x48]
71001a3f14  bl 0x7100193580
71001a3f18  ldrb w1,[x19, #0xb8]
71001a3f1c  add x2,sp,#0x148
71001a3f20  add x3,sp,#0x48
71001a3f24  bl 0x710019b1e0
71001a3f28  sub w8,w0,#0x1
71001a3f2c  and w8,w8,#0xff
71001a3f30  cmp w8,#0x2
71001a3f34  b.hi 0x71001a4074
71001a3f38  mov x28,x26
71001a3f3c  mov x21,xzr
71001a3f40  add x20,x20,#0x10
71001a3f44  str x0,[sp, #0x8]
71001a3f48  and x26,x0,#0xff
71001a3f4c  add x22,x19,#0x68
71001a3f50  ldr x0,[x28]
71001a3f54  mov x27,x28
71001a3f58  bl 0x7100193a40
71001a3f5c  add x8,sp,#0x148
71001a3f60  mov x23,x0
71001a3f64  ldr x0,[x28]
71001a3f68  ldr x24,[x8, x21, LSL #0x3]
71001a3f6c  add x8,sp,#0x48
71001a3f70  ldr w25,[x8, x21, LSL #0x2]
71001a3f74  bl 0x7100193580
71001a3f78  ldr x8,[x0]
71001a3f7c  ldr x8,[x8, #0x18]
71001a3f80  blr x8
71001a3f84  ldr x6,[x19, #0x58]
71001a3f88  and x5,x0,#0xffffffff
71001a3f8c  add x8,sp,#0xc8
71001a3f90  mov x0,x23
71001a3f94  mov x1,x22
71001a3f98  mov x2,x24
71001a3f9c  mov w3,w25
71001a3fa0  mov x4,x20
71001a3fa4  bl 0x71001adc20
71001a3fa8  ldr w8,[sp, #0xc8]
71001a3fac  cbnz w8,0x71001a4048
71001a3fb0  add x21,x21,#0x1
71001a3fb4  add x22,x22,#0x4
71001a3fb8  cmp x21,x26
71001a3fbc  b.cc 0x71001a3f50
71001a3fc0  ldr x11,[sp, #0x8]
71001a3fc4  and w8,w11,#0xff
71001a3fc8  cmp w8,#0x2
71001a3fcc  b.hi 0x71001a4028
71001a3fd0  orr w10,wzr,#0x3
71001a3fd4  and x8,x11,#0xff
71001a3fd8  mov w9,#0x2
71001a3fdc  sub w10,w10,w11
71001a3fe0  sub x9,x9,x8
71001a3fe4  ands w10,w10,#0x3
71001a3fe8  b.eq 0x71001a4004
71001a3fec  neg x10,x10
71001a3ff0  add x11,x19,x8, LSL #0x2
71001a3ff4  add x8,x8,#0x1
71001a3ff8  adds x10,x10,#0x1
71001a3ffc  str wzr,[x11, #0x68]
71001a4000  b.ne 0x71001a3ff0
71001a4004  cmp x9,#0x3
71001a4008  b.cc 0x71001a4028
71001a400c  lsl x8,x8,#0x2
71001a4010  add x8,x8,#0x68
71001a4014  add x9,x19,x8
71001a4018  add x8,x8,#0x10
71001a401c  cmp x8,#0x74
71001a4020  stp xzr,xzr,[x9]
71001a4024  b.ne 0x71001a4014
71001a4028  adrp x8,0x71052a6000
71001a402c  ldr x8,[x8, #0x788]
71001a4030  adrp x9,0x71043bd000
71001a4034  add x9,x9,#0xa88
71001a4038  str x9,[x19, #0x40]
71001a403c  mov w0,#0x5
71001a4040  stp x8,xzr,[x19, #0x30]
71001a4044  b 0x71001a4090
71001a4048  tst w21,#0xff
71001a404c  b.eq 0x71001a4074
71001a4050  add x20,x21,#0x19
71001a4054  ldr x0,[x28]
71001a4058  bl 0x7100193a40
71001a405c  ldr w1,[x19, x20, LSL #0x2]
71001a4060  bl 0x71001ae030
71001a4064  sub x8,x20,#0x19
71001a4068  sub x20,x20,#0x1
71001a406c  cmp x8,#0x1
71001a4070  b.gt 0x71001a4054
71001a4074  mov x0,xzr
71001a4078  adrp x8,0x71052a6000
71001a407c  ldr x8,[x8, #0x768]
71001a4080  stp x8,xzr,[x19, #0x30]
71001a4084  adrp x8,0x7104318000
71001a4088  add x8,x8,#0x425
71001a408c  str x8,[x19, #0x40]
71001a4090  add sp,sp,#0x250
71001a4094  ldp x29,x30,[sp, #0x50]
71001a4098  ldp x20,x19,[sp, #0x40]
71001a409c  ldp x22,x21,[sp, #0x30]
71001a40a0  ldp x24,x23,[sp, #0x20]
71001a40a4  ldp x26,x25,[sp, #0x10]
71001a40a8  ldp x28,x27,[sp], #0x60
71001a40ac  ret
