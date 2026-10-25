// addr:      71001d3db0
// offset:    0x1d3db0
// name:      FUN_71001d3db0
// mangled:   
// size:      608

71001d3db0  sub sp,sp,#0x50
71001d3db4  stp x22,x21,[sp, #0x20]
71001d3db8  stp x20,x19,[sp, #0x30]
71001d3dbc  stp x29,x30,[sp, #0x40]
71001d3dc0  add x29,sp,#0x40
71001d3dc4  adrp x8,0x71052a4000
71001d3dc8  ldr x8,[x8, #0xda8]
71001d3dcc  adrp x21,0x71052a4000
71001d3dd0  ldrb w8,[x8]
71001d3dd4  ldr x21,[x21, #0xdb0]
71001d3dd8  mov x19,x0
71001d3ddc  add x20,x21,#0x28
71001d3de0  cbz w8,0x71001d3e1c
71001d3de4  adrp x8,0x71052a4000
71001d3de8  ldr x8,[x8, #0xdb8]
71001d3dec  ldr x0,[x8]
71001d3df0  bl 0x7101717960
71001d3df4  ldr w8,[x0]
71001d3df8  cbz w8,0x71001d3e1c
71001d3dfc  ldr x10,[x21, #0xa0]
71001d3e00  ldp x9,x10,[x10]
71001d3e04  sub x10,x10,x9
71001d3e08  asr x10,x10,#0x3
71001d3e0c  cmp x10,x8
71001d3e10  b.ls 0x71001d3ff8
71001d3e14  ldr x8,[x9, x8, LSL #0x3]
71001d3e18  add x20,x8,#0x20
71001d3e1c  ldr x8,[x20]
71001d3e20  ldr x8,[x8, #0x10]
71001d3e24  ldr x9,[x8, #0x18]
71001d3e28  ldr w8,[x19, #0xa0]
71001d3e2c  ldr x11,[x9, #0x50]!
71001d3e30  cbz x11,0x71001d3ee4
71001d3e34  mov x10,x9
71001d3e38  ldr w12,[x11, #0x20]
71001d3e3c  cmp w12,w8
71001d3e40  cset w12,cc
71001d3e44  csel x10,x10,x11,cc
71001d3e48  ldr x11,[x11, w12, UXTW #0x3]
71001d3e4c  cbnz x11,0x71001d3e38
71001d3e50  cmp x10,x9
71001d3e54  b.eq 0x71001d3ee4
71001d3e58  ldr w9,[x10, #0x20]
71001d3e5c  cmp w9,w8
71001d3e60  b.hi 0x71001d3ee4
71001d3e64  ldr x8,[x10, #0x28]
71001d3e68  cbz x8,0x71001d3ee4
71001d3e6c  ldr x22,[x19, #0xb0]
71001d3e70  ldr w8,[x22, #0x14]
71001d3e74  cmp w8,#0x1
71001d3e78  b.ne 0x71001d3f1c
71001d3e7c  mov w8,#0x2
71001d3e80  mov w0,#0x20
71001d3e84  str w8,[x19, #0x40]
71001d3e88  bl 0x71001af850
71001d3e8c  mov x20,x0
71001d3e90  cbz x0,0x71001d3eb8
71001d3e94  adrp x8,0x71052a6000
71001d3e98  ldr x8,[x8, #0xc28]
71001d3e9c  adrp x9,0x71052a6000
71001d3ea0  ldr x9,[x9, #0xc48]
71001d3ea4  adrp x10,0x7104411000
71001d3ea8  add x10,x10,#0x4cc
71001d3eac  stp xzr,x10,[x20, #0x10]
71001d3eb0  add x8,x8,#0x10
71001d3eb4  stp x8,x9,[x20]
71001d3eb8  add x8,x19,#0x8
71001d3ebc  ldar w10,[x8]
71001d3ec0  ldaxr w9,[x8]
71001d3ec4  cmp w9,w10
71001d3ec8  b.ne 0x71001d3f48
71001d3ecc  add w10,w10,#0x1
71001d3ed0  stlxr w11,w10,[x8]
71001d3ed4  cbnz w11,0x71001d3f4c
71001d3ed8  mov w10,#0x1
71001d3edc  tbz w10,#0x0,0x71001d3f54
71001d3ee0  b 0x71001d3f8c
71001d3ee4  mov w8,#0x4
71001d3ee8  movk w8,#0x8001, LSL #16
71001d3eec  add x0,sp,#0x8
71001d3ef0  add x1,sp,#0x4
71001d3ef4  str w8,[sp, #0x4]
71001d3ef8  bl 0x71001b4200
71001d3efc  add x1,sp,#0x8
71001d3f00  mov x0,x19
71001d3f04  bl 0x71001d4010
71001d3f08  ldp x29,x30,[sp, #0x40]
71001d3f0c  ldp x20,x19,[sp, #0x30]
71001d3f10  ldp x22,x21,[sp, #0x20]
71001d3f14  add sp,sp,#0x50
71001d3f18  ret
71001d3f1c  add x8,sp,#0x8
71001d3f20  bl 0x71001b12a0
71001d3f24  adrp x8,0x71052a6000
71001d3f28  ldr x8,[x8, #0xc48]
71001d3f2c  ldr x9,[sp, #0x8]
71001d3f30  stp x8,xzr,[x19, #0x80]
71001d3f34  adrp x8,0x7104411000
71001d3f38  add x8,x8,#0x4cc
71001d3f3c  str x9,[x19, #0x68]
71001d3f40  str x8,[x19, #0x90]
71001d3f44  b 0x71001d3f08
71001d3f48  clrex 
71001d3f4c  mov w10,wzr
71001d3f50  tbnz w10,#0x0,0x71001d3f8c
71001d3f54  ldaxr w10,[x8]
71001d3f58  cmp w10,w9
71001d3f5c  b.ne 0x71001d3f7c
71001d3f60  add w9,w9,#0x1
71001d3f64  stlxr w11,w9,[x8]
71001d3f68  cbnz w11,0x71001d3f80
71001d3f6c  mov w11,#0x1
71001d3f70  mov w9,w10
71001d3f74  cbz w11,0x71001d3f54
71001d3f78  b 0x71001d3f8c
71001d3f7c  clrex 
71001d3f80  mov w11,wzr
71001d3f84  mov w9,w10
71001d3f88  cbz w11,0x71001d3f54
71001d3f8c  mov w0,#0x28
71001d3f90  bl 0x71001af850
71001d3f94  mov x21,x0
71001d3f98  cbz x0,0x71001d3fbc
71001d3f9c  adrp x8,0x71052a6000
71001d3fa0  ldr x8,[x8, #0xc50]
71001d3fa4  add x8,x8,#0x10
71001d3fa8  stp x8,x19,[x21]
71001d3fac  adrp x8,0x71052a6000
71001d3fb0  ldr x8,[x8, #0xc58]
71001d3fb4  stp x8,xzr,[x21, #0x10]
71001d3fb8  str x20,[x21, #0x20]
71001d3fbc  mov w0,#0x20
71001d3fc0  add x19,x22,#0x20
71001d3fc4  bl 0x71001b1820
71001d3fc8  adrp x8,0x71052a6000
71001d3fcc  ldr x8,[x8, #0xc60]
71001d3fd0  stp x8,x21,[x0, #0x10]
71001d3fd4  stp xzr,x19,[x0]
71001d3fd8  ldr x8,[x22, #0x20]
71001d3fdc  str x8,[x0]
71001d3fe0  str x0,[x8, #0x8]
71001d3fe4  ldr x8,[x22, #0x30]
71001d3fe8  add x8,x8,#0x1
71001d3fec  str x0,[x22, #0x20]
71001d3ff0  str x8,[x22, #0x30]
71001d3ff4  b 0x71001d3f08
71001d3ff8  adrp x0,0x71042c4000
71001d3ffc  add x0,x0,#0x35f
71001d4000  mov w1,#0x47
71001d4004  orr w2,wzr,#0xe0000003
71001d4008  mov w3,wzr
71001d400c  bl 0x71001b1300
