// addr:      7101e6e1a0
// offset:    0x1e6e1a0
// name:      FUN_7101e6e1a0
// mangled:   
// size:      304

7101e6e1a0  sub sp,sp,#0x50
7101e6e1a4  str x21,[sp, #0x20]
7101e6e1a8  stp x20,x19,[sp, #0x30]
7101e6e1ac  stp x29,x30,[sp, #0x40]
7101e6e1b0  add x29,sp,#0x40
7101e6e1b4  mov x19,x0
7101e6e1b8  add x0,x0,#0x1a8
7101e6e1bc  adrp x1,0x710439d000
7101e6e1c0  add x1,x1,#0xa27
7101e6e1c4  add x8,sp,#0x8
7101e6e1c8  add x20,sp,#0x8
7101e6e1cc  bl 0x71037780e0
7101e6e1d0  mov w0,#0x10
7101e6e1d4  mov w1,#0x10
7101e6e1d8  bl 0x710392e290
7101e6e1dc  cbnz x0,0x7101e6e224
7101e6e1e0  adrp x8,0x7105332000
7101e6e1e4  ldr x0,[x8, #0xf00]
7101e6e1e8  cbz x0,0x7101e6e220
7101e6e1ec  mov w8,#0x10
7101e6e1f0  stur wzr,[x29, #-0x14]
7101e6e1f4  sub x1,x29,#0x14
7101e6e1f8  str x8,[sp, #0x18]
7101e6e1fc  ldr x8,[x0]
7101e6e200  ldr x8,[x8, #0x30]
7101e6e204  add x2,sp,#0x18
7101e6e208  blr x8
7101e6e20c  tbz w0,#0x0,0x7101e6e220
7101e6e210  mov w0,#0x10
7101e6e214  mov w1,#0x10
7101e6e218  bl 0x710392e290
7101e6e21c  cbnz x0,0x7101e6e224
7101e6e220  mov x0,xzr
7101e6e224  adrp x21,0x710523d000
7101e6e228  add x21,x21,#0x9e8
7101e6e22c  cmp x20,x0
7101e6e230  stp x21,xzr,[x0]
7101e6e234  b.eq 0x7101e6e244
7101e6e238  ldr x8,[sp, #0x10]
7101e6e23c  str xzr,[sp, #0x10]
7101e6e240  str x8,[x0, #0x8]
7101e6e244  ldr x8,[x19, #0x2d0]
7101e6e248  str x0,[x19, #0x2d0]
7101e6e24c  cbz x8,0x7101e6e260
7101e6e250  ldr x9,[x8]
7101e6e254  ldr x9,[x9, #0x8]
7101e6e258  mov x0,x8
7101e6e25c  blr x9
7101e6e260  ldr x0,[sp, #0x10]
7101e6e264  stp x21,xzr,[sp, #0x8]
7101e6e268  cbz x0,0x7101e6e270
7101e6e26c  bl 0x710392eb40
7101e6e270  ldr x0,[x19, #0x2d0]
7101e6e274  fmov s0,0x3f800000
7101e6e278  bl 0x710377aee0
7101e6e27c  add x8,x19,#0x194
7101e6e280  orr x9,xzr,#-0x100000000
7101e6e284  str wzr,[x19, #0x188]
7101e6e288  stp xzr,xzr,[x19, #0x10]
7101e6e28c  stp xzr,xzr,[x19, #0x178]
7101e6e290  stp xzr,xzr,[x19, #0x168]
7101e6e294  stp xzr,xzr,[x19, #0x158]
7101e6e298  stp xzr,xzr,[x19, #0x148]
7101e6e29c  ldr x21,[sp, #0x20]
7101e6e2a0  str x9,[x8]
7101e6e2a4  mov x8,#0x10
7101e6e2a8  movk x8,#0xf, LSL #32
7101e6e2ac  orr x9,xzr,#-0xffffffff
7101e6e2b0  str x8,[x19, #0x140]
7101e6e2b4  add x8,x19,#0x18c
7101e6e2b8  strb wzr,[x19, #0x19c]
7101e6e2bc  str x9,[x8]
7101e6e2c0  ldp x29,x30,[sp, #0x40]
7101e6e2c4  ldp x20,x19,[sp, #0x30]
7101e6e2c8  add sp,sp,#0x50
7101e6e2cc  ret
