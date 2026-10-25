// addr:      71001cf300
// offset:    0x1cf300
// name:      FUN_71001cf300
// mangled:   
// size:      592

71001cf300  str x27,[sp, #-0x60]!
71001cf304  stp x26,x25,[sp, #0x10]
71001cf308  stp x24,x23,[sp, #0x20]
71001cf30c  stp x22,x21,[sp, #0x30]
71001cf310  stp x20,x19,[sp, #0x40]
71001cf314  stp x29,x30,[sp, #0x50]
71001cf318  add x29,sp,#0x50
71001cf31c  mov x20,x1
71001cf320  ldr x1,[x0, #0x18]
71001cf324  ldr w8,[x0, #0x20]
71001cf328  orr w9,wzr,#0x7
71001cf32c  sub w9,w9,w8
71001cf330  add x10,x2,x1, LSL #0x3
71001cf334  add x10,x10,x9
71001cf338  ldr x9,[x0, #0x28]
71001cf33c  mov x19,x0
71001cf340  cmp x10,x9
71001cf344  b.ls 0x71001cf354
71001cf348  mov w8,#0x1
71001cf34c  strb w8,[x19, #0x8]
71001cf350  b 0x71001cf4a0
71001cf354  mov x22,x2
71001cf358  cmp w8,#0x7
71001cf35c  b.ne 0x71001cf398
71001cf360  ldr x8,[x19, #0x10]
71001cf364  ldr x10,[x8, #0x18]
71001cf368  lsr x21,x22,#0x3
71001cf36c  add x9,x1,x21
71001cf370  cmp x9,x10
71001cf374  b.ls 0x71001cf3b0
71001cf378  adrp x0,0x71043ce000
71001cf37c  add x0,x0,#0x963
71001cf380  mov w1,#0xe8
71001cf384  mov w2,#0x19
71001cf388  movk w2,#0xe000, LSL #16
71001cf38c  mov w3,wzr
71001cf390  bl 0x71001b1300
71001cf394  b 0x71001cf3cc
71001cf398  cmp x22,#0x8
71001cf39c  b.cs 0x71001cf4bc
71001cf3a0  mov x21,xzr
71001cf3a4  ands w22,w22,#0x7
71001cf3a8  b.ne 0x71001cf3e0
71001cf3ac  b 0x71001cf4a0
71001cf3b0  ldr x9,[x8, #0x10]
71001cf3b4  ldr x8,[x8, #0x28]
71001cf3b8  add x8,x9,x8
71001cf3bc  add x1,x8,x1
71001cf3c0  mov x0,x20
71001cf3c4  mov x2,x21
71001cf3c8  bl 0x71039c00e0
71001cf3cc  ldr x8,[x19, #0x18]
71001cf3d0  add x1,x8,x21
71001cf3d4  str x1,[x19, #0x18]
71001cf3d8  ands w22,w22,#0x7
71001cf3dc  b.eq 0x71001cf4a0
71001cf3e0  ldr w8,[x19, #0x20]
71001cf3e4  mov w23,wzr
71001cf3e8  mov w24,#0x80
71001cf3ec  orr w25,wzr,#0x7
71001cf3f0  mov w26,#0x1
71001cf3f4  b 0x71001cf400
71001cf3f8  ldr x1,[x19, #0x18]
71001cf3fc  ubfx w24,w24,#0x1,#0x7
71001cf400  mov w10,#0x1
71001cf404  bfm x10,x1,#0x3d,#0x3c
71001cf408  sub w9,w25,w8
71001cf40c  add x9,x10,x9
71001cf410  ldr x10,[x19, #0x28]
71001cf414  cmp x9,x10
71001cf418  b.ls 0x71001cf430
71001cf41c  strb w26,[x19, #0x8]
71001cf420  sub w22,w22,#0x1
71001cf424  tst w22,#0xff
71001cf428  b.ne 0x71001cf3f8
71001cf42c  b 0x71001cf49c
71001cf430  ldr x0,[x19, #0x10]
71001cf434  lsl w27,w26,w8
71001cf438  bl 0x71001cc3a0
71001cf43c  ldrb w8,[x0]
71001cf440  eor w8,w8,#0xff
71001cf444  and w9,w27,w8
71001cf448  ldr w8,[x19, #0x20]
71001cf44c  cbz w8,0x71001cf46c
71001cf450  sub w8,w8,#0x1
71001cf454  str w8,[x19, #0x20]
71001cf458  cbz w9,0x71001cf48c
71001cf45c  sub w22,w22,#0x1
71001cf460  tst w22,#0xff
71001cf464  b.ne 0x71001cf3f8
71001cf468  b 0x71001cf49c
71001cf46c  ldr x10,[x19, #0x18]
71001cf470  mov w8,#0x8
71001cf474  str w8,[x19, #0x20]
71001cf478  add x10,x10,#0x1
71001cf47c  str x10,[x19, #0x18]
71001cf480  sub w8,w8,#0x1
71001cf484  str w8,[x19, #0x20]
71001cf488  cbnz w9,0x71001cf45c
71001cf48c  orr w23,w24,w23
71001cf490  sub w22,w22,#0x1
71001cf494  tst w22,#0xff
71001cf498  b.ne 0x71001cf3f8
71001cf49c  strb w23,[x20, x21, LSL ]
71001cf4a0  ldp x29,x30,[sp, #0x50]
71001cf4a4  ldp x20,x19,[sp, #0x40]
71001cf4a8  ldp x22,x21,[sp, #0x30]
71001cf4ac  ldp x24,x23,[sp, #0x20]
71001cf4b0  ldp x26,x25,[sp, #0x10]
71001cf4b4  ldr x27,[sp], #0x60
71001cf4b8  ret
71001cf4bc  mov x21,xzr
71001cf4c0  mov w23,#0x10
71001cf4c4  orr w24,wzr,#0x7
71001cf4c8  mov w25,#0x1
71001cf4cc  b 0x71001cf4dc
71001cf4d0  ldr w8,[x19, #0x20]
71001cf4d4  ldr x9,[x19, #0x28]
71001cf4d8  add x23,x23,#0x8
71001cf4dc  sub w26,w24,w8
71001cf4e0  add x10,x26,x1, LSL #0x3
71001cf4e4  add x10,x10,#0x8
71001cf4e8  cmp x10,x9
71001cf4ec  b.ls 0x71001cf504
71001cf4f0  strb w25,[x19, #0x8]
71001cf4f4  add x21,x21,#0x1
71001cf4f8  cmp x23,x22
71001cf4fc  b.ls 0x71001cf4d0
71001cf500  b 0x71001cf3d8
71001cf504  ldr x0,[x19, #0x10]
71001cf508  add w27,w8,#0x1
71001cf50c  bl 0x71001cc3a0
71001cf510  ldrb w8,[x0]
71001cf514  lsl w26,w8,w26
71001cf518  ldp x0,x8,[x19, #0x10]
71001cf51c  add x1,x8,#0x1
71001cf520  bl 0x71001cc3a0
71001cf524  ldrb w8,[x0]
71001cf528  lsr w8,w8,w27
71001cf52c  orr w8,w8,w26
71001cf530  strb w8,[x20, x21, LSL ]
71001cf534  ldr x8,[x19, #0x18]
71001cf538  add x1,x8,#0x1
71001cf53c  str x1,[x19, #0x18]
71001cf540  add x21,x21,#0x1
71001cf544  cmp x23,x22
71001cf548  b.ls 0x71001cf4d0
71001cf54c  b 0x71001cf3d8
