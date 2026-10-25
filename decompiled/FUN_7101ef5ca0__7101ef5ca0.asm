// addr:      7101ef5ca0
// offset:    0x1ef5ca0
// name:      FUN_7101ef5ca0
// mangled:   
// size:      884

7101ef5ca0  sub sp,sp,#0xb0
7101ef5ca4  stp x20,x19,[sp, #0x90]
7101ef5ca8  stp x29,x30,[sp, #0xa0]
7101ef5cac  add x29,sp,#0xa0
7101ef5cb0  adrp x8,0x7105328000
7101ef5cb4  ldr x8,[x8, #0xe18]
7101ef5cb8  ldr x8,[x8]
7101ef5cbc  ldrb w20,[x8, #0x3a7]
7101ef5cc0  ldr w8,[x0, #0x24c]
7101ef5cc4  mov x19,x0
7101ef5cc8  cbz w8,0x7101ef5d34
7101ef5ccc  ldr x8,[x19]
7101ef5cd0  ldr x9,[x8]
7101ef5cd4  ldr x9,[x9]
7101ef5cd8  ldr x9,[x9, #0x600]
7101ef5cdc  ldrb w10,[x9, #0x4aa]
7101ef5ce0  cbz w10,0x7101ef5fc0
7101ef5ce4  ldrb w11,[x9, #0x1bc]
7101ef5ce8  tbnz w11,#0x1,0x7101ef5d78
7101ef5cec  ldrb w11,[x9, #0x1b4]
7101ef5cf0  tbnz w11,#0x1,0x7101ef5e6c
7101ef5cf4  cmp w20,#0x0
7101ef5cf8  ccmp w10,#0x0,#0x4,ne
7101ef5cfc  b.eq 0x7101ef5fc0
7101ef5d00  ldrb w8,[x9, #0x1b8]
7101ef5d04  tbz w8,#0x1,0x7101ef5fc0
7101ef5d08  ldr w8,[x19, #0x244]
7101ef5d0c  cmp w8,#0x11
7101ef5d10  b.gt 0x7101ef5fc0
7101ef5d14  add w8,w8,#0x1
7101ef5d18  cmp w8,#0x13
7101ef5d1c  str w8,[x19, #0x244]
7101ef5d20  b.cs 0x7101ef6010
7101ef5d24  add x8,x19,w8, SXTW  #0x2
7101ef5d28  mov w9,#0x17
7101ef5d2c  str w9,[x8, #0x1f8]
7101ef5d30  b 0x7101ef5fc0
7101ef5d34  ldr w8,[x19, #0x250]
7101ef5d38  sub w8,w8,#0x17
7101ef5d3c  cmp w8,#0x4
7101ef5d40  b.cc 0x7101ef5f7c
7101ef5d44  adrp x8,0x7105314000
7101ef5d48  add x8,x8,#0x4d8
7101ef5d4c  ldarb w8,[x8]
7101ef5d50  tbz w8,#0x0,0x7101ef5fd0
7101ef5d54  ldr x9,[x19]
7101ef5d58  ldr x9,[x9]
7101ef5d5c  adrp x8,0x71052cc000
7101ef5d60  ldrb w8,[x8, #0x5f0]
7101ef5d64  ldr x0,[x9]
7101ef5d68  cbz w8,0x7101ef5f60
7101ef5d6c  mov w1,wzr
7101ef5d70  bl 0x71037760f0
7101ef5d74  b 0x7101ef5f7c
7101ef5d78  mov w9,#0x4
7101ef5d7c  str w9,[x19, #0x2a0]
7101ef5d80  ldr x8,[x8]
7101ef5d84  ldr x0,[x8]
7101ef5d88  mov w1,wzr
7101ef5d8c  bl 0x71037760f0
7101ef5d90  ldrsw x8,[x19, #0x244]
7101ef5d94  cmp w8,#0x13
7101ef5d98  b.cs 0x7101ef6010
7101ef5d9c  add x8,x19,x8, LSL #0x2
7101ef5da0  str wzr,[x8, #0x1f8]
7101ef5da4  adrp x8,0x710532f000
7101ef5da8  ldr x8,[x8, #0x8d0]
7101ef5dac  ldr x0,[x8, #0x8]
7101ef5db0  ldrb w8,[x0, #0x191]
7101ef5db4  cbnz w8,0x7101ef5e34
7101ef5db8  mov x19,#0x23f5
7101ef5dbc  movk x19,#0x57a5, LSL #16
7101ef5dc0  movk x19,#0xf, LSL #32
7101ef5dc4  mov w2,#0x4
7101ef5dc8  mov x1,x19
7101ef5dcc  bl 0x7103313f20
7101ef5dd0  tbz w0,#0x0,0x7101ef5e34
7101ef5dd4  add x0,sp,#0x40
7101ef5dd8  mov x1,x19
7101ef5ddc  bl 0x71024076d0
7101ef5de0  ldr x8,[sp, #0x50]
7101ef5de4  adrp x9,0x7104f73000
7101ef5de8  add x9,x9,#0xd50
7101ef5dec  str x9,[sp, #0x48]
7101ef5df0  cbz x8,0x7101ef5e60
7101ef5df4  adrp x8,0x7106dd5000
7101ef5df8  ldrb w8,[x8, #0x3a8]
7101ef5dfc  cmp w8,#0x1
7101ef5e00  b.ne 0x7101ef5e60
7101ef5e04  adrp x9,0x7106dd5000
7101ef5e08  ldr w8,[sp, #0x58]
7101ef5e0c  ldr w9,[x9, #0x3ac]
7101ef5e10  cmp w8,w9
7101ef5e14  b.ne 0x7101ef5e60
7101ef5e18  ldr x8,[sp, #0x50]
7101ef5e1c  ldr wzr,[x8, #0x38]!
7101ef5e20  ldaxr w9,[x8]
7101ef5e24  sub w9,w9,#0x1
7101ef5e28  stlxr w10,w9,[x8]
7101ef5e2c  cbnz w10,0x7101ef5e20
7101ef5e30  b 0x7101ef5e60
7101ef5e34  mov x8,#0x650000000000
7101ef5e38  movk x8,#0x87, LSL #48
7101ef5e3c  strb wzr,[sp, #0x60]
7101ef5e40  stp xzr,x8,[sp, #0x50]
7101ef5e44  mov x8,#-0x1
7101ef5e48  stp x8,xzr,[sp, #0x68]
7101ef5e4c  adrp x8,0x7104f73000
7101ef5e50  add x8,x8,#0xd50
7101ef5e54  str wzr,[sp, #0x40]
7101ef5e58  str xzr,[sp, #0x78]
7101ef5e5c  str x8,[sp, #0x48]
7101ef5e60  str xzr,[sp, #0x50]
7101ef5e64  strb wzr,[sp, #0x60]
7101ef5e68  b 0x7101ef5fc0
7101ef5e6c  orr w9,wzr,#0x3
7101ef5e70  str w9,[x19, #0x2a0]
7101ef5e74  ldr x8,[x8]
7101ef5e78  ldr x0,[x8]
7101ef5e7c  mov w1,wzr
7101ef5e80  bl 0x71037760f0
7101ef5e84  ldrsw x8,[x19, #0x244]
7101ef5e88  cmp w8,#0x13
7101ef5e8c  b.cs 0x7101ef6010
7101ef5e90  add x8,x19,x8, LSL #0x2
7101ef5e94  str wzr,[x8, #0x1f8]
7101ef5e98  adrp x8,0x710532f000
7101ef5e9c  ldr x8,[x8, #0x8d0]
7101ef5ea0  ldr x0,[x8, #0x8]
7101ef5ea4  ldrb w8,[x0, #0x191]
7101ef5ea8  cbnz w8,0x7101ef5f28
7101ef5eac  mov x19,#0x23f5
7101ef5eb0  movk x19,#0x57a5, LSL #16
7101ef5eb4  movk x19,#0xf, LSL #32
7101ef5eb8  mov w2,#0x4
7101ef5ebc  mov x1,x19
7101ef5ec0  bl 0x7103313f20
7101ef5ec4  tbz w0,#0x0,0x7101ef5f28
7101ef5ec8  mov x0,sp
7101ef5ecc  mov x1,x19
7101ef5ed0  bl 0x71024076d0
7101ef5ed4  ldr x8,[sp, #0x10]
7101ef5ed8  adrp x9,0x7104f73000
7101ef5edc  add x9,x9,#0xd50
7101ef5ee0  str x9,[sp, #0x8]
7101ef5ee4  cbz x8,0x7101ef5f54
7101ef5ee8  adrp x8,0x7106dd5000
7101ef5eec  ldrb w8,[x8, #0x3a8]
7101ef5ef0  cmp w8,#0x1
7101ef5ef4  b.ne 0x7101ef5f54
7101ef5ef8  adrp x9,0x7106dd5000
7101ef5efc  ldr w8,[sp, #0x18]
7101ef5f00  ldr w9,[x9, #0x3ac]
7101ef5f04  cmp w8,w9
7101ef5f08  b.ne 0x7101ef5f54
7101ef5f0c  ldr x8,[sp, #0x10]
7101ef5f10  ldr wzr,[x8, #0x38]!
7101ef5f14  ldaxr w9,[x8]
7101ef5f18  sub w9,w9,#0x1
7101ef5f1c  stlxr w10,w9,[x8]
7101ef5f20  cbnz w10,0x7101ef5f14
7101ef5f24  b 0x7101ef5f54
7101ef5f28  mov x8,#0x650000000000
7101ef5f2c  movk x8,#0x87, LSL #48
7101ef5f30  strb wzr,[sp, #0x20]
7101ef5f34  stp xzr,x8,[sp, #0x10]
7101ef5f38  mov x8,#-0x1
7101ef5f3c  stp x8,xzr,[sp, #0x28]
7101ef5f40  adrp x8,0x7104f73000
7101ef5f44  add x8,x8,#0xd50
7101ef5f48  str wzr,[sp]
7101ef5f4c  str xzr,[sp, #0x38]
7101ef5f50  str x8,[sp, #0x8]
7101ef5f54  str xzr,[sp, #0x10]
7101ef5f58  strb wzr,[sp, #0x20]
7101ef5f5c  b 0x7101ef5fc0
7101ef5f60  mov w1,#0x1
7101ef5f64  bl 0x71037760f0
7101ef5f68  ldr x0,[x19, #0x260]
7101ef5f6c  fmov s0,0x3f800000
7101ef5f70  adrp x1,0x71042f8000
7101ef5f74  add x1,x1,#0xbfa
7101ef5f78  bl 0x7103778300
7101ef5f7c  add x0,x19,#0x258
7101ef5f80  adrp x1,0x71043be000
7101ef5f84  add x1,x1,#0xe8e
7101ef5f88  sub x8,x29,#0x20
7101ef5f8c  bl 0x7103776910
7101ef5f90  ldur x0,[x29, #-0x18]
7101ef5f94  ldr x8,[x0]
7101ef5f98  cbz x8,0x7101ef5fac
7101ef5f9c  ldrb w9,[x8, #0x58]
7101ef5fa0  and w9,w9,#0xfe
7101ef5fa4  orr w9,w9,w20
7101ef5fa8  strb w9,[x8, #0x58]
7101ef5fac  adrp x8,0x710523d000
7101ef5fb0  add x8,x8,#0x9a8
7101ef5fb4  stp x8,xzr,[x29, #-0x20]
7101ef5fb8  cbz x0,0x7101ef5fc0
7101ef5fbc  bl 0x710392eb40
7101ef5fc0  ldp x29,x30,[sp, #0xa0]
7101ef5fc4  ldp x20,x19,[sp, #0x90]
7101ef5fc8  add sp,sp,#0xb0
7101ef5fcc  ret
7101ef5fd0  adrp x0,0x7105314000
7101ef5fd4  add x0,x0,#0x4d8
7101ef5fd8  bl 0x71039c06b0
7101ef5fdc  cbz w0,0x7101ef5d54
7101ef5fe0  bl 0x7101764000
7101ef5fe4  adrp x0,0x7101763000
7101ef5fe8  add x0,x0,#0xc40
7101ef5fec  adrp x1,0x71052c5000
7101ef5ff0  add x1,x1,#0x180
7101ef5ff4  adrp x2,0x7104f17000
7101ef5ff8  add x2,x2,#0x0
7101ef5ffc  bl 0x71000001c0
7101ef6000  adrp x0,0x7105314000
7101ef6004  add x0,x0,#0x4d8
7101ef6008  bl 0x71039c06c0
7101ef600c  b 0x7101ef5d54
7101ef6010  bl 0x71039c2650
