// addr:      7102eb3380
// offset:    0x2eb3380
// name:      FUN_7102eb3380
// mangled:   
// size:      216

7102eb3380  stp x20,x19,[sp, #-0x20]!
7102eb3384  stp x29,x30,[sp, #0x10]
7102eb3388  add x29,sp,#0x10
7102eb338c  ldrb w8,[x0, #0x140]
7102eb3390  mov x19,x0
7102eb3394  cbz w8,0x7102eb342c
7102eb3398  ldr x8,[x19, #0x10]
7102eb339c  movi v0.2D,#0x0
7102eb33a0  strb wzr,[x19, #0x140]
7102eb33a4  add x9,x8,#0x2c
7102eb33a8  ld1 {v0.S}[0],[x9]
7102eb33ac  add x9,x8,#0x30
7102eb33b0  add x8,x8,#0x34
7102eb33b4  adrp x1,0x71043bc000
7102eb33b8  add x1,x1,#0x9c9
7102eb33bc  ld1 {v0.S}[1],[x9]
7102eb33c0  ld1 {v0.S}[2],[x8]
7102eb33c4  adrp x8,0x71052a8000
7102eb33c8  ldr x8,[x8, #0xa88]
7102eb33cc  ldr x0,[x19, #0x108]
7102eb33d0  add x20,x19,#0x108
7102eb33d4  str q0,[x19, #0x20]
7102eb33d8  ldr q1,[x8]
7102eb33dc  fmov s0,wzr
7102eb33e0  ext v2.16B,v1.16B,v1.16B,0x8
7102eb33e4  mov v2.S[0x1],v0.S[0x0]
7102eb33e8  mov v1.D[0x1],v2.D[0x0]
7102eb33ec  stp q1,q1,[x19, #0x120]
7102eb33f0  bl 0x7102610070
7102eb33f4  ldr x8,[x19, #0x108]
7102eb33f8  cbz x8,0x7102eb3430
7102eb33fc  ldr x9,[x8, #0xd8]
7102eb3400  cbz x9,0x7102eb3418
7102eb3404  ldrb w10,[x9, #0x22]
7102eb3408  cbz w10,0x7102eb3418
7102eb340c  strb wzr,[x9, #0x22]
7102eb3410  ldr x8,[x20]
7102eb3414  cbz x8,0x7102eb3430
7102eb3418  ldr x0,[x8, #0xd8]
7102eb341c  fmov s0,wzr
7102eb3420  mov w1,#0x1
7102eb3424  bl 0x71025ee450
7102eb3428  b 0x7102eb3430
7102eb342c  add x20,x19,#0x108
7102eb3430  ldr x0,[x20]
7102eb3434  bl 0x710260ffb0
7102eb3438  tbz w0,#0x0,0x7102eb344c
7102eb343c  orr w8,wzr,#0x3
7102eb3440  str w8,[x19, #0x40]
7102eb3444  mov w8,#0x1
7102eb3448  strb w8,[x19, #0x140]
7102eb344c  ldp x29,x30,[sp, #0x10]
7102eb3450  ldp x20,x19,[sp], #0x20
7102eb3454  ret
