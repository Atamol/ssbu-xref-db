// addr:      71001e3bc0
// offset:    0x1e3bc0
// name:      FUN_71001e3bc0
// mangled:   
// size:      1084

71001e3bc0  sub sp,sp,#0xd0
71001e3bc4  str x23,[sp, #0x90]
71001e3bc8  stp x22,x21,[sp, #0xa0]
71001e3bcc  stp x20,x19,[sp, #0xb0]
71001e3bd0  stp x29,x30,[sp, #0xc0]
71001e3bd4  add x29,sp,#0xc0
71001e3bd8  adrp x21,0x71052a4000
71001e3bdc  ldr x21,[x21, #0xda8]
71001e3be0  adrp x20,0x71052a4000
71001e3be4  ldrb w8,[x21]
71001e3be8  ldr x20,[x20, #0xdb0]
71001e3bec  mov x19,x0
71001e3bf0  add x22,x20,#0x18
71001e3bf4  cbz w8,0x71001e3c30
71001e3bf8  adrp x8,0x71052a4000
71001e3bfc  ldr x8,[x8, #0xdb8]
71001e3c00  ldr x0,[x8]
71001e3c04  bl 0x7101717960
71001e3c08  ldr w8,[x0]
71001e3c0c  cbz w8,0x71001e3c30
71001e3c10  ldr x10,[x20, #0xa0]
71001e3c14  ldp x9,x10,[x10]
71001e3c18  sub x10,x10,x9
71001e3c1c  asr x10,x10,#0x3
71001e3c20  cmp x10,x8
71001e3c24  b.ls 0x71001e3d2c
71001e3c28  ldr x8,[x9, x8, LSL #0x3]
71001e3c2c  add x22,x8,#0x10
71001e3c30  ldr x8,[x22]
71001e3c34  cbz x8,0x71001e3d44
71001e3c38  ldr x8,[x8, #0x10]
71001e3c3c  cbz x8,0x71001e3d44
71001e3c40  ldrb w8,[x21]
71001e3c44  add x22,x20,#0x18
71001e3c48  cbz w8,0x71001e3c84
71001e3c4c  adrp x8,0x71052a4000
71001e3c50  ldr x8,[x8, #0xdb8]
71001e3c54  ldr x0,[x8]
71001e3c58  bl 0x7101717960
71001e3c5c  ldr w8,[x0]
71001e3c60  cbz w8,0x71001e3c84
71001e3c64  ldr x10,[x20, #0xa0]
71001e3c68  ldp x9,x10,[x10]
71001e3c6c  sub x10,x10,x9
71001e3c70  asr x10,x10,#0x3
71001e3c74  cmp x10,x8
71001e3c78  b.ls 0x71001e3fe4
71001e3c7c  ldr x8,[x9, x8, LSL #0x3]
71001e3c80  add x22,x8,#0x10
71001e3c84  ldr x8,[x22]
71001e3c88  ldr x8,[x8, #0x10]
71001e3c8c  ldr x8,[x8, #0x198]
71001e3c90  cbz x8,0x71001e3d44
71001e3c94  ldrb w8,[x19, #0x320]
71001e3c98  cbz w8,0x71001e3d8c
71001e3c9c  ldrb w8,[x21]
71001e3ca0  add x21,x20,#0x18
71001e3ca4  cbz w8,0x71001e3ce0
71001e3ca8  adrp x8,0x71052a4000
71001e3cac  ldr x8,[x8, #0xdb8]
71001e3cb0  ldr x0,[x8]
71001e3cb4  bl 0x7101717960
71001e3cb8  ldr w8,[x0]
71001e3cbc  cbz w8,0x71001e3ce0
71001e3cc0  ldr x10,[x20, #0xa0]
71001e3cc4  ldp x9,x10,[x10]
71001e3cc8  sub x10,x10,x9
71001e3ccc  asr x10,x10,#0x3
71001e3cd0  cmp x10,x8
71001e3cd4  b.ls 0x71001e3fe4
71001e3cd8  ldr x8,[x9, x8, LSL #0x3]
71001e3cdc  add x21,x8,#0x10
71001e3ce0  ldr x8,[x21]
71001e3ce4  ldr x8,[x8, #0x10]
71001e3ce8  ldr x20,[x8, #0x198]
71001e3cec  ldr x8,[x19, #0x318]
71001e3cf0  add x0,x8,#0x10
71001e3cf4  adrp x1,0x710449c000
71001e3cf8  add x1,x1,#0xe33
71001e3cfc  mov x2,xzr
71001e3d00  bl 0x71001f2ba0
71001e3d04  mov x1,x0
71001e3d08  mov x0,x20
71001e3d0c  bl 0x71001e85d0
71001e3d10  cmn w0,#0x1
71001e3d14  b.eq 0x71001e3fb4
71001e3d18  adrp x8,0x71052a6000
71001e3d1c  adrp x9,0x71052a6000
71001e3d20  ldr x8,[x8, #0xc28]
71001e3d24  ldr x9,[x9, #0xf08]
71001e3d28  b 0x71001e3d54
71001e3d2c  adrp x0,0x71042c4000
71001e3d30  add x0,x0,#0x35f
71001e3d34  mov w1,#0x47
71001e3d38  orr w2,wzr,#0xe0000003
71001e3d3c  mov w3,wzr
71001e3d40  bl 0x71001b1300
71001e3d44  adrp x8,0x71052a6000
71001e3d48  adrp x9,0x71052a6000
71001e3d4c  ldr x8,[x8, #0xc28]
71001e3d50  ldr x9,[x9, #0xee0]
71001e3d54  add x8,x8,#0x10
71001e3d58  stp x8,x9,[x29, #-0x50]
71001e3d5c  adrp x8,0x7104411000
71001e3d60  add x8,x8,#0x4cc
71001e3d64  sub x1,x29,#0x50
71001e3d68  mov x0,x19
71001e3d6c  stp xzr,x8,[x29, #-0x40]
71001e3d70  bl 0x71001d3d60
71001e3d74  ldp x29,x30,[sp, #0xc0]
71001e3d78  ldr x23,[sp, #0x90]
71001e3d7c  ldp x20,x19,[sp, #0xb0]
71001e3d80  ldp x22,x21,[sp, #0xa0]
71001e3d84  add sp,sp,#0xd0
71001e3d88  ret
71001e3d8c  ldr x8,[x19, #0x318]
71001e3d90  ldr x23,[x19, #0x338]
71001e3d94  adrp x1,0x710449c000
71001e3d98  add x1,x1,#0xe33
71001e3d9c  ldr x22,[x19, #0x340]
71001e3da0  mov x2,xzr
71001e3da4  add x0,x8,#0x10
71001e3da8  bl 0x71001f2ba0
71001e3dac  cmp x23,x22
71001e3db0  b.eq 0x71001e3df0
71001e3db4  ldr w8,[x23]
71001e3db8  cmp w8,w0
71001e3dbc  b.eq 0x71001e3df0
71001e3dc0  add x8,x23,#0x4
71001e3dc4  cmp x22,x8
71001e3dc8  b.eq 0x71001e3dec
71001e3dcc  ldr w9,[x8], #0x4
71001e3dd0  cmp w9,w0
71001e3dd4  b.ne 0x71001e3dc4
71001e3dd8  sub x23,x8,#0x4
71001e3ddc  ldr x8,[x19, #0x340]
71001e3de0  cmp x8,x23
71001e3de4  b.ne 0x71001e3dfc
71001e3de8  b 0x71001e3e80
71001e3dec  mov x23,x22
71001e3df0  ldr x8,[x19, #0x340]
71001e3df4  cmp x8,x23
71001e3df8  b.eq 0x71001e3e80
71001e3dfc  ldrh w8,[x19, #0x310]
71001e3e00  cbz w8,0x71001e3e60
71001e3e04  ldr x21,[x19, #0x318]
71001e3e08  ldrb w8,[x21, #0x78]
71001e3e0c  add x20,x19,#0x280
71001e3e10  cbnz w8,0x71001e3e1c
71001e3e14  add x0,x21,#0x10
71001e3e18  bl 0x71001f2180
71001e3e1c  ldr x0,[x21, #0x18]
71001e3e20  mov x1,x20
71001e3e24  bl 0x71001bec20
71001e3e28  strb wzr,[x21, #0x79]
71001e3e2c  ldr x22,[x19, #0x318]
71001e3e30  ldrh w21,[x19, #0x310]
71001e3e34  ldrb w8,[x22, #0x78]
71001e3e38  cbnz w8,0x71001e3e44
71001e3e3c  add x0,x22,#0x10
71001e3e40  bl 0x71001f2180
71001e3e44  ldr x0,[x22, #0x18]
71001e3e48  mov w1,w21
71001e3e4c  bl 0x71001bee30
71001e3e50  mov x0,x20
71001e3e54  strb wzr,[x22, #0x79]
71001e3e58  bl 0x71001beb90
71001e3e5c  strh wzr,[x19, #0x310]
71001e3e60  adrp x8,0x71052a6000
71001e3e64  ldr x8,[x8, #0xc28]
71001e3e68  ldr x9,[x19, #0x318]
71001e3e6c  ldr x9,[x9, #0x8]
71001e3e70  str x9,[x19, #0x318]
71001e3e74  adrp x9,0x71052a6000
71001e3e78  ldr x9,[x9, #0xee8]
71001e3e7c  b 0x71001e3d54
71001e3e80  ldrb w8,[x21]
71001e3e84  add x21,x20,#0x18
71001e3e88  cbz w8,0x71001e3ec4
71001e3e8c  adrp x8,0x71052a4000
71001e3e90  ldr x8,[x8, #0xdb8]
71001e3e94  ldr x0,[x8]
71001e3e98  bl 0x7101717960
71001e3e9c  ldr w8,[x0]
71001e3ea0  cbz w8,0x71001e3ec4
71001e3ea4  ldr x10,[x20, #0xa0]
71001e3ea8  ldp x9,x10,[x10]
71001e3eac  sub x10,x10,x9
71001e3eb0  asr x10,x10,#0x3
71001e3eb4  cmp x10,x8
71001e3eb8  b.ls 0x71001e3fe4
71001e3ebc  ldr x8,[x9, x8, LSL #0x3]
71001e3ec0  add x21,x8,#0x10
71001e3ec4  ldr x8,[x21]
71001e3ec8  adrp x10,0x71052a6000
71001e3ecc  ldr x9,[x19, #0x318]
71001e3ed0  ldr x10,[x10, #0xe70]
71001e3ed4  add x21,x9,#0x10
71001e3ed8  ldr x8,[x8, #0x10]
71001e3edc  add x23,x10,#0x10
71001e3ee0  ldr x20,[x8, #0x198]
71001e3ee4  mov x8,sp
71001e3ee8  stp xzr,xzr,[sp, #0x20]
71001e3eec  add x10,x8,#0x20
71001e3ef0  add x9,x8,#0x38
71001e3ef4  add x8,x8,#0x50
71001e3ef8  str x8,[sp, #0x48]
71001e3efc  mov w8,#0x1
71001e3f00  mov w0,#0x90
71001e3f04  str x23,[sp]
71001e3f08  str x10,[sp, #0x18]
71001e3f0c  stp xzr,xzr,[sp, #0x38]
71001e3f10  str x9,[sp, #0x30]
71001e3f14  stp xzr,xzr,[sp, #0x50]
71001e3f18  str xzr,[sp, #0x60]
71001e3f1c  strb wzr,[sp, #0x6a]
71001e3f20  strh w8,[sp, #0x68]
71001e3f24  bl 0x71001af850
71001e3f28  mov x22,x0
71001e3f2c  cbz x0,0x71001e3f38
71001e3f30  mov x0,x22
71001e3f34  bl 0x71001beb40
71001e3f38  mov x0,sp
71001e3f3c  mov x1,x21
71001e3f40  str x22,[sp, #0x8]
71001e3f44  bl 0x71001f1f40
71001e3f48  mov x1,sp
71001e3f4c  mov x0,x20
71001e3f50  bl 0x71001e4400
71001e3f54  ldr x8,[sp, #0x60]
71001e3f58  mov w20,w0
71001e3f5c  str x23,[sp]
71001e3f60  cbz x8,0x71001e3f74
71001e3f64  sub x0,x8,#0x4
71001e3f68  bl 0x71001b1870
71001e3f6c  str xzr,[sp, #0x60]
71001e3f70  strb wzr,[sp, #0x69]
71001e3f74  ldr x0,[sp, #0x8]
71001e3f78  cbz x0,0x71001e3f88
71001e3f7c  ldr x8,[x0]
71001e3f80  ldr x8,[x8, #0x8]
71001e3f84  blr x8
71001e3f88  ldr x1,[sp, #0x50]
71001e3f8c  mov x21,sp
71001e3f90  add x0,x21,#0x48
71001e3f94  bl 0x7101711670
71001e3f98  ldr x1,[sp, #0x38]
71001e3f9c  add x0,x21,#0x30
71001e3fa0  bl 0x7101711670
71001e3fa4  ldr x1,[sp, #0x20]
71001e3fa8  add x0,x21,#0x18
71001e3fac  bl 0x7100219ca0
71001e3fb0  tbz w20,#0x0,0x71001e3d18
71001e3fb4  adrp x8,0x71052a6000
71001e3fb8  ldr x8,[x8, #0xf20]
71001e3fbc  ldr w0,[x8]
71001e3fc0  sub x8,x29,#0x50
71001e3fc4  bl 0x71001b74f0
71001e3fc8  adrp x8,0x71052a6000
71001e3fcc  ldr x8,[x8, #0xc28]
71001e3fd0  ldur x9,[x29, #-0x50]
71001e3fd4  str x9,[x19, #0x258]
71001e3fd8  adrp x9,0x71052a6000
71001e3fdc  ldr x9,[x9, #0xf28]
71001e3fe0  b 0x71001e3d54
71001e3fe4  adrp x0,0x71042c4000
71001e3fe8  add x0,x0,#0x35f
71001e3fec  mov w1,#0x47
71001e3ff0  orr w2,wzr,#0xe0000003
71001e3ff4  mov w3,wzr
71001e3ff8  bl 0x71001b1300
