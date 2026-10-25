// addr:      7101bcd210
// offset:    0x1bcd210
// name:      FUN_7101bcd210
// mangled:   
// size:      172

7101bcd210  str x19,[sp, #-0x20]!
7101bcd214  stp x29,x30,[sp, #0x10]
7101bcd218  add x29,sp,#0x10
7101bcd21c  ldr w8,[x0, #0x110]
7101bcd220  mov x19,x0
7101bcd224  cmp w8,#0x2
7101bcd228  b.eq 0x7101bcd25c
7101bcd22c  cmp w8,#0x1
7101bcd230  b.eq 0x7101bcd27c
7101bcd234  cbnz w8,0x7101bcd29c
7101bcd238  ldr w10,[x19]
7101bcd23c  adrp x9,0x710435b000
7101bcd240  add x9,x9,#0x5a2
7101bcd244  cmp w10,#0x1
7101bcd248  csel x1,x9,xzr,eq
7101bcd24c  cbnz w10,0x7101bcd274
7101bcd250  adrp x1,0x7104280000
7101bcd254  add x1,x1,#0x86e
7101bcd258  b 0x7101bcd290
7101bcd25c  ldr w10,[x19]
7101bcd260  adrp x9,0x710436c000
7101bcd264  add x9,x9,#0x1ac
7101bcd268  cmp w10,#0x1
7101bcd26c  csel x1,x9,xzr,eq
7101bcd270  cbz w10,0x7101bcd288
7101bcd274  cbnz x1,0x7101bcd290
7101bcd278  b 0x7101bcd29c
7101bcd27c  adrp x1,0x71042a2000
7101bcd280  add x1,x1,#0xeb7
7101bcd284  b 0x7101bcd290
7101bcd288  adrp x1,0x710424f000
7101bcd28c  add x1,x1,#0x397
7101bcd290  add x0,x19,#0xd8
7101bcd294  bl 0x710377a120
7101bcd298  ldr w8,[x19, #0x110]
7101bcd29c  str w8,[x19, #0x114]
7101bcd2a0  ldr w8,[x19, #0xbc]
7101bcd2a4  subs w8,w8,#0x1
7101bcd2a8  b.lt 0x7101bcd2b0
7101bcd2ac  str w8,[x19, #0xbc]
7101bcd2b0  ldp x29,x30,[sp, #0x10]
7101bcd2b4  ldr x19,[sp], #0x20
7101bcd2b8  ret
