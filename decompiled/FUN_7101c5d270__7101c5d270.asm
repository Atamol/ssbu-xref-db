// addr:      7101c5d270
// offset:    0x1c5d270
// name:      FUN_7101c5d270
// mangled:   
// size:      196

7101c5d270  str x21,[sp, #-0x30]!
7101c5d274  stp x20,x19,[sp, #0x10]
7101c5d278  stp x29,x30,[sp, #0x20]
7101c5d27c  add x29,sp,#0x20
7101c5d280  and w8,w1,#0xff
7101c5d284  cmp w8,#0x8
7101c5d288  b.cs 0x7101c5d330
7101c5d28c  add x8,x0,w1, UXTB  #0x1
7101c5d290  ldrh w8,[x8, #0x160]
7101c5d294  mov x20,x0
7101c5d298  tst w8,#0xff
7101c5d29c  b.eq 0x7101c5d2dc
7101c5d2a0  cmp w8,#0x400
7101c5d2a4  b.cs 0x7101c5d330
7101c5d2a8  lsr w21,w8,#0x8
7101c5d2ac  ldr w8,[x2, #0x1d8]
7101c5d2b0  mov x19,x2
7101c5d2b4  cmp w8,#0x1
7101c5d2b8  b.eq 0x7101c5d2ec
7101c5d2bc  cbnz w8,0x7101c5d310
7101c5d2c0  add x9,x20,x21, LSL #0x4
7101c5d2c4  ldrb w8,[x19, #0x1e2]
7101c5d2c8  ldr x0,[x9, #0x28]
7101c5d2cc  cbz w8,0x7101c5d300
7101c5d2d0  adrp x1,0x710438c000
7101c5d2d4  add x1,x1,#0xa80
7101c5d2d8  b 0x7101c5d308
7101c5d2dc  ldp x29,x30,[sp, #0x20]
7101c5d2e0  ldp x20,x19,[sp, #0x10]
7101c5d2e4  ldr x21,[sp], #0x30
7101c5d2e8  ret
7101c5d2ec  add x8,x20,x21, LSL #0x4
7101c5d2f0  ldr x0,[x8, #0x28]
7101c5d2f4  adrp x1,0x710434a000
7101c5d2f8  add x1,x1,#0x349
7101c5d2fc  b 0x7101c5d308
7101c5d300  adrp x1,0x710433a000
7101c5d304  add x1,x1,#0x19d
7101c5d308  fmov s0,0x3f800000
7101c5d30c  bl 0x7103778300
7101c5d310  ldp w2,w3,[x19, #0x40]
7101c5d314  ldr w4,[x19, #0x1d8]
7101c5d318  mov x0,x20
7101c5d31c  ldp x29,x30,[sp, #0x20]
7101c5d320  ldp x20,x19,[sp, #0x10]
7101c5d324  mov w1,w21
7101c5d328  ldr x21,[sp], #0x30
7101c5d32c  b 0x7101c5d340
7101c5d330  bl 0x71039c2650
