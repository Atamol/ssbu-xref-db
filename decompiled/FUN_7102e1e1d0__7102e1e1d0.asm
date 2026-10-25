// addr:      7102e1e1d0
// offset:    0x2e1e1d0
// name:      FUN_7102e1e1d0
// mangled:   
// size:      388

7102e1e1d0  sub sp,sp,#0x170
7102e1e1d4  stp x28,x23,[sp, #0x130]
7102e1e1d8  stp x22,x21,[sp, #0x140]
7102e1e1dc  stp x20,x19,[sp, #0x150]
7102e1e1e0  stp x29,x30,[sp, #0x160]
7102e1e1e4  add x29,sp,#0x160
7102e1e1e8  sub w8,w2,#0x1
7102e1e1ec  mov x19,x0
7102e1e1f0  cmp w8,#0x4
7102e1e1f4  b.hi 0x7102e1e340
7102e1e1f8  adrp x9,0x710451c000
7102e1e1fc  add x9,x9,#0xa20
7102e1e200  mov x3,x1
7102e1e204  ldrsw x8,[x9, x8, LSL #0x2]
7102e1e208  add x8,x8,x9
7102e1e20c  br x8
7102e1e210  adrp x2,0x710425d000
7102e1e214  add x2,x2,#0x73b
7102e1e218  b 0x7102e1e248
7102e1e21c  adrp x2,0x7104431000
7102e1e220  add x2,x2,#0x3f9
7102e1e224  b 0x7102e1e248
7102e1e228  adrp x2,0x71043ff000
7102e1e22c  add x2,x2,#0x70e
7102e1e230  b 0x7102e1e248
7102e1e234  adrp x2,0x7104338000
7102e1e238  add x2,x2,#0x5fa
7102e1e23c  b 0x7102e1e248
7102e1e240  adrp x2,0x71042e5000
7102e1e244  add x2,x2,#0x536
7102e1e248  add x0,sp,#0x20
7102e1e24c  mov w1,#0x100
7102e1e250  bl 0x71039c04d0
7102e1e254  add x0,sp,#0x20
7102e1e258  stp xzr,xzr,[sp, #0x10]
7102e1e25c  str xzr,[sp, #0x8]
7102e1e260  bl 0x71039c0070
7102e1e264  cmn x0,#0x10
7102e1e268  b.cs 0x7102e1e34c
7102e1e26c  mov x20,x0
7102e1e270  cmp x0,#0x17
7102e1e274  b.cs 0x7102e1e290
7102e1e278  lsl w8,w20,#0x1
7102e1e27c  strb w8,[sp, #0x8]
7102e1e280  add x8,sp,#0x8
7102e1e284  orr x22,x8,#0x1
7102e1e288  cbnz x20,0x7102e1e304
7102e1e28c  b 0x7102e1e314
7102e1e290  add x8,x20,#0x10
7102e1e294  and x23,x8,#-0x10
7102e1e298  tst x8,#-0x10
7102e1e29c  csinc x21,x23,xzr,ne
7102e1e2a0  mov w0,#0x10
7102e1e2a4  mov x1,x21
7102e1e2a8  bl 0x710392e290
7102e1e2ac  mov x22,x0
7102e1e2b0  cbnz x0,0x7102e1e2f8
7102e1e2b4  adrp x8,0x7105332000
7102e1e2b8  ldr x0,[x8, #0xf00]
7102e1e2bc  cbz x0,0x7102e1e2f4
7102e1e2c0  stur wzr,[x29, #-0x34]
7102e1e2c4  stur x21,[x29, #-0x40]
7102e1e2c8  ldr x8,[x0]
7102e1e2cc  ldr x8,[x8, #0x30]
7102e1e2d0  sub x1,x29,#0x34
7102e1e2d4  sub x2,x29,#0x40
7102e1e2d8  blr x8
7102e1e2dc  tbz w0,#0x0,0x7102e1e2f4
7102e1e2e0  mov w0,#0x10
7102e1e2e4  mov x1,x21
7102e1e2e8  bl 0x710392e290
7102e1e2ec  mov x22,x0
7102e1e2f0  cbnz x0,0x7102e1e2f8
7102e1e2f4  mov x22,xzr
7102e1e2f8  orr x8,x23,#0x1
7102e1e2fc  stp x20,x22,[sp, #0x10]
7102e1e300  str x8,[sp, #0x8]
7102e1e304  add x1,sp,#0x20
7102e1e308  mov x0,x22
7102e1e30c  mov x2,x20
7102e1e310  bl 0x71039c00e0
7102e1e314  strb wzr,[x22, x20, LSL ]
7102e1e318  ldr x9,[sp, #0x18]
7102e1e31c  str x9,[x19, #0x10]
7102e1e320  ldp x8,x9,[sp, #0x8]
7102e1e324  stp x8,x9,[x19]
7102e1e328  ldp x29,x30,[sp, #0x160]
7102e1e32c  ldp x20,x19,[sp, #0x150]
7102e1e330  ldp x22,x21,[sp, #0x140]
7102e1e334  ldp x28,x23,[sp, #0x130]
7102e1e338  add sp,sp,#0x170
7102e1e33c  ret
7102e1e340  stp xzr,xzr,[x19, #0x8]
7102e1e344  str xzr,[x19]
7102e1e348  b 0x7102e1e328
7102e1e34c  add x0,sp,#0x8
7102e1e350  bl 0x71039c1a00
