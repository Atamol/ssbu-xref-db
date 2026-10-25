// addr:      7101bcd2c0
// offset:    0x1bcd2c0
// name:      FUN_7101bcd2c0
// mangled:   
// size:      304

7101bcd2c0  str x19,[sp, #-0x20]!
7101bcd2c4  stp x29,x30,[sp, #0x10]
7101bcd2c8  add x29,sp,#0x10
7101bcd2cc  ldr w8,[x0, #0x114]
7101bcd2d0  mov x19,x0
7101bcd2d4  cmp w8,#0x2
7101bcd2d8  b.eq 0x7101bcd30c
7101bcd2dc  cmp w8,#0x1
7101bcd2e0  b.eq 0x7101bcd32c
7101bcd2e4  cbnz w8,0x7101bcd348
7101bcd2e8  ldr w9,[x19]
7101bcd2ec  adrp x8,0x710435b000
7101bcd2f0  add x8,x8,#0x5a2
7101bcd2f4  cmp w9,#0x1
7101bcd2f8  csel x1,x8,xzr,eq
7101bcd2fc  cbnz w9,0x7101bcd324
7101bcd300  adrp x1,0x7104280000
7101bcd304  add x1,x1,#0x86e
7101bcd308  b 0x7101bcd340
7101bcd30c  ldr w9,[x19]
7101bcd310  adrp x8,0x710436c000
7101bcd314  add x8,x8,#0x1ac
7101bcd318  cmp w9,#0x1
7101bcd31c  csel x1,x8,xzr,eq
7101bcd320  cbz w9,0x7101bcd338
7101bcd324  cbnz x1,0x7101bcd340
7101bcd328  b 0x7101bcd348
7101bcd32c  adrp x1,0x71042a2000
7101bcd330  add x1,x1,#0xeb7
7101bcd334  b 0x7101bcd340
7101bcd338  adrp x1,0x710424f000
7101bcd33c  add x1,x1,#0x397
7101bcd340  add x0,x19,#0xd8
7101bcd344  bl 0x710377a120
7101bcd348  ldr w8,[x19, #0x110]
7101bcd34c  cmp w8,#0x2
7101bcd350  b.eq 0x7101bcd384
7101bcd354  cmp w8,#0x1
7101bcd358  b.eq 0x7101bcd3a4
7101bcd35c  cbnz w8,0x7101bcd3c0
7101bcd360  ldr w9,[x19]
7101bcd364  adrp x8,0x710435b000
7101bcd368  add x8,x8,#0x5a2
7101bcd36c  cmp w9,#0x1
7101bcd370  csel x1,x8,xzr,eq
7101bcd374  cbnz w9,0x7101bcd39c
7101bcd378  adrp x1,0x7104280000
7101bcd37c  add x1,x1,#0x86e
7101bcd380  b 0x7101bcd3b8
7101bcd384  ldr w9,[x19]
7101bcd388  adrp x8,0x710436c000
7101bcd38c  add x8,x8,#0x1ac
7101bcd390  cmp w9,#0x1
7101bcd394  csel x1,x8,xzr,eq
7101bcd398  cbz w9,0x7101bcd3b0
7101bcd39c  cbnz x1,0x7101bcd3b8
7101bcd3a0  b 0x7101bcd3c0
7101bcd3a4  adrp x1,0x71042a2000
7101bcd3a8  add x1,x1,#0xeb7
7101bcd3ac  b 0x7101bcd3b8
7101bcd3b0  adrp x1,0x710424f000
7101bcd3b4  add x1,x1,#0x397
7101bcd3b8  add x0,x19,#0xe8
7101bcd3bc  bl 0x710377a120
7101bcd3c0  fmov s0,0x3f800000
7101bcd3c4  add x0,x19,#0x100
7101bcd3c8  bl 0x710377aee0
7101bcd3cc  ldr w8,[x19, #0x110]
7101bcd3d0  str w8,[x19, #0x114]
7101bcd3d4  ldr w8,[x19, #0xbc]
7101bcd3d8  subs w8,w8,#0x1
7101bcd3dc  b.lt 0x7101bcd3e4
7101bcd3e0  str w8,[x19, #0xbc]
7101bcd3e4  ldp x29,x30,[sp, #0x10]
7101bcd3e8  ldr x19,[sp], #0x20
7101bcd3ec  ret
