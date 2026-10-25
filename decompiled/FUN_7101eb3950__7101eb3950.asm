// addr:      7101eb3950
// offset:    0x1eb3950
// name:      FUN_7101eb3950
// mangled:   
// size:      228

7101eb3950  str x19,[sp, #-0x20]!
7101eb3954  stp x29,x30,[sp, #0x10]
7101eb3958  add x29,sp,#0x10
7101eb395c  ldr x9,[x0, #0x328]
7101eb3960  ldr x8,[x0, #0x8]
7101eb3964  mov x19,x0
7101eb3968  ldr w9,[x9, #0x30]
7101eb396c  ldr x8,[x8]
7101eb3970  sub w9,w9,#0x1
7101eb3974  cmp w9,#0x6
7101eb3978  b.hi 0x7101eb398c
7101eb397c  adrp x10,0x71050b2000
7101eb3980  add x10,x10,#0x9f0
7101eb3984  ldr x1,[x10, w9, SXTW #0x3]
7101eb3988  b 0x7101eb3994
7101eb398c  adrp x1,0x7104281000
7101eb3990  add x1,x1,#0x212
7101eb3994  ldr w9,[x19, #0x270]
7101eb3998  ldr x0,[x8, #0x10]
7101eb399c  cmp w9,#0x1
7101eb39a0  b.ne 0x7101eb3a00
7101eb39a4  ldr x0,[x0, #0x8]
7101eb39a8  cbz x0,0x7101eb39c4
7101eb39ac  bl 0x71037964b0
7101eb39b0  cbz x0,0x7101eb39c4
7101eb39b4  ldr x8,[x0]
7101eb39b8  ldr x8,[x8, #0x138]
7101eb39bc  blr x8
7101eb39c0  tbz w0,#0x0,0x7101eb3a28
7101eb39c4  ldr x8,[x19, #0x358]
7101eb39c8  ldrb w9,[x8, #0x1ec]
7101eb39cc  cbz w9,0x7101eb39ec
7101eb39d0  ldr x8,[x8, #0x1c0]
7101eb39d4  ldr x0,[x8, #0x8]
7101eb39d8  cbz x0,0x7101eb39ec
7101eb39dc  ldr x8,[x0]
7101eb39e0  ldr x8,[x8, #0x138]
7101eb39e4  blr x8
7101eb39e8  tbz w0,#0x0,0x7101eb3a28
7101eb39ec  ldr x0,[x19, #0x318]
7101eb39f0  mov w1,wzr
7101eb39f4  bl 0x7101ec5050
7101eb39f8  stp xzr,xzr,[x19, #0x10]
7101eb39fc  b 0x7101eb3a28
7101eb3a00  fmov s0,0x3f800000
7101eb3a04  bl 0x7103778300
7101eb3a08  ldr x8,[x19, #0x358]
7101eb3a0c  ldrb w9,[x8, #0x1ec]
7101eb3a10  cbz w9,0x7101eb3a20
7101eb3a14  fmov s0,0x3f800000
7101eb3a18  add x0,x8,#0x1b8
7101eb3a1c  bl 0x710377aee0
7101eb3a20  mov w8,#0x1
7101eb3a24  str w8,[x19, #0x270]
7101eb3a28  ldp x29,x30,[sp, #0x10]
7101eb3a2c  ldr x19,[sp], #0x20
7101eb3a30  ret
