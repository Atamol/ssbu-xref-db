// addr:      7101ef1dd0
// offset:    0x1ef1dd0
// name:      FUN_7101ef1dd0
// mangled:   
// size:      412

7101ef1dd0  sub sp,sp,#0x60
7101ef1dd4  str x19,[sp, #0x40]
7101ef1dd8  stp x29,x30,[sp, #0x50]
7101ef1ddc  add x29,sp,#0x50
7101ef1de0  mov x19,x0
7101ef1de4  ldr w8,[x0, #0x24c]
7101ef1de8  ldr x0,[x0, #0x260]
7101ef1dec  cbz w8,0x7101ef1e30
7101ef1df0  ldr x0,[x0, #0x8]
7101ef1df4  cbz x0,0x7101ef1e18
7101ef1df8  adrp x1,0x7104401000
7101ef1dfc  add x1,x1,#0xd77
7101ef1e00  bl 0x71037964b0
7101ef1e04  cbz x0,0x7101ef1e18
7101ef1e08  ldr x8,[x0]
7101ef1e0c  ldr x8,[x8, #0x138]
7101ef1e10  blr x8
7101ef1e14  tbz w0,#0x0,0x7101ef1e80
7101ef1e18  ldrsw x8,[x19, #0x244]
7101ef1e1c  cmp w8,#0x13
7101ef1e20  b.cs 0x7101ef1f68
7101ef1e24  add x8,x19,x8, LSL #0x2
7101ef1e28  mov w9,#0x2
7101ef1e2c  b 0x7101ef1e7c
7101ef1e30  fmov s0,0x3f800000
7101ef1e34  adrp x1,0x71042e7000
7101ef1e38  add x1,x1,#0xaf5
7101ef1e3c  bl 0x7103778300
7101ef1e40  adrp x8,0x7105328000
7101ef1e44  ldr x8,[x8, #0xe18]
7101ef1e48  ldr x8,[x8]
7101ef1e4c  ldrb w8,[x8, #0x3a4]
7101ef1e50  ldr x0,[x19, #0x260]
7101ef1e54  cbz w8,0x7101ef1e90
7101ef1e58  fmov s0,0x3f800000
7101ef1e5c  adrp x1,0x710434a000
7101ef1e60  add x1,x1,#0xb9c
7101ef1e64  bl 0x7103778300
7101ef1e68  ldrsw x8,[x19, #0x244]
7101ef1e6c  cmp w8,#0x13
7101ef1e70  b.cs 0x7101ef1f68
7101ef1e74  add x8,x19,x8, LSL #0x2
7101ef1e78  mov w9,#0x5
7101ef1e7c  str w9,[x8, #0x1f8]
7101ef1e80  ldp x29,x30,[sp, #0x50]
7101ef1e84  ldr x19,[sp, #0x40]
7101ef1e88  add sp,sp,#0x60
7101ef1e8c  ret
7101ef1e90  fmov s0,0x3f800000
7101ef1e94  adrp x1,0x7104401000
7101ef1e98  add x1,x1,#0xd77
7101ef1e9c  bl 0x7103778300
7101ef1ea0  adrp x8,0x710532f000
7101ef1ea4  ldr x8,[x8, #0x8d0]
7101ef1ea8  ldr x0,[x8, #0x8]
7101ef1eac  ldrb w8,[x0, #0x191]
7101ef1eb0  cbnz w8,0x7101ef1f30
7101ef1eb4  mov x19,#0x92ad
7101ef1eb8  movk x19,#0xa4d2, LSL #16
7101ef1ebc  movk x19,#0xf, LSL #32
7101ef1ec0  mov w2,#0x4
7101ef1ec4  mov x1,x19
7101ef1ec8  bl 0x7103313f20
7101ef1ecc  tbz w0,#0x0,0x7101ef1f30
7101ef1ed0  mov x0,sp
7101ef1ed4  mov x1,x19
7101ef1ed8  bl 0x71024076d0
7101ef1edc  ldr x8,[sp, #0x10]
7101ef1ee0  adrp x9,0x7104f73000
7101ef1ee4  add x9,x9,#0xd50
7101ef1ee8  str x9,[sp, #0x8]
7101ef1eec  cbz x8,0x7101ef1f5c
7101ef1ef0  adrp x8,0x7106dd5000
7101ef1ef4  ldrb w8,[x8, #0x3a8]
7101ef1ef8  cmp w8,#0x1
7101ef1efc  b.ne 0x7101ef1f5c
7101ef1f00  adrp x9,0x7106dd5000
7101ef1f04  ldr w8,[sp, #0x18]
7101ef1f08  ldr w9,[x9, #0x3ac]
7101ef1f0c  cmp w8,w9
7101ef1f10  b.ne 0x7101ef1f5c
7101ef1f14  ldr x8,[sp, #0x10]
7101ef1f18  ldr wzr,[x8, #0x38]!
7101ef1f1c  ldaxr w9,[x8]
7101ef1f20  sub w9,w9,#0x1
7101ef1f24  stlxr w10,w9,[x8]
7101ef1f28  cbnz w10,0x7101ef1f1c
7101ef1f2c  b 0x7101ef1f5c
7101ef1f30  mov x8,#0x650000000000
7101ef1f34  movk x8,#0x87, LSL #48
7101ef1f38  strb wzr,[sp, #0x20]
7101ef1f3c  stp xzr,x8,[sp, #0x10]
7101ef1f40  mov x8,#-0x1
7101ef1f44  stp x8,xzr,[sp, #0x28]
7101ef1f48  adrp x8,0x7104f73000
7101ef1f4c  add x8,x8,#0xd50
7101ef1f50  str wzr,[sp]
7101ef1f54  str xzr,[sp, #0x38]
7101ef1f58  str x8,[sp, #0x8]
7101ef1f5c  str xzr,[sp, #0x10]
7101ef1f60  strb wzr,[sp, #0x20]
7101ef1f64  b 0x7101ef1e80
7101ef1f68  bl 0x71039c2650
