// addr:      7102cdb3e0
// offset:    0x2cdb3e0
// name:      FUN_7102cdb3e0
// mangled:   
// size:      484

7102cdb3e0  str x19,[sp, #-0x20]!
7102cdb3e4  stp x29,x30,[sp, #0x10]
7102cdb3e8  add x29,sp,#0x10
7102cdb3ec  sub w8,w1,#0x5
7102cdb3f0  cmp w8,#0x4
7102cdb3f4  b.hi 0x7102cdb5b8
7102cdb3f8  adrp x9,0x7104519000
7102cdb3fc  add x9,x9,#0xfe0
7102cdb400  mov x19,x0
7102cdb404  ldrsw x8,[x9, x8, LSL #0x2]
7102cdb408  add x8,x8,x9
7102cdb40c  br x8
7102cdb410  ldr x8,[x19, #0x18]
7102cdb414  ldp x0,x1,[x8]
7102cdb418  adrp x2,0x71043bc000
7102cdb41c  add x2,x2,#0xb6c
7102cdb420  bl 0x71025f55b0
7102cdb424  ldr x9,[x19, #0x18]
7102cdb428  ldr w8,[x19, #0x104]
7102cdb42c  adrp x2,0x710436a000
7102cdb430  add x2,x2,#0x9e7
7102cdb434  ldp x0,x1,[x9]
7102cdb438  cmp w8,#0x3
7102cdb43c  b.lt 0x7102cdb568
7102cdb440  bl 0x71025f5420
7102cdb444  ldr x8,[x19, #0x18]
7102cdb448  ldp x0,x1,[x8]
7102cdb44c  adrp x2,0x71042a1000
7102cdb450  add x2,x2,#0x676
7102cdb454  bl 0x71025f55b0
7102cdb458  ldrb w8,[x19, #0x100]
7102cdb45c  cbnz w8,0x7102cdb588
7102cdb460  b 0x7102cdb5b8
7102cdb464  ldr x8,[x19, #0x20]
7102cdb468  ldr x8,[x8, #0x8]
7102cdb46c  cbz x8,0x7102cdb5b8
7102cdb470  ldr w9,[x8, #0x8]
7102cdb474  cmp w9,#0x1
7102cdb478  ccmp x8,#0x0,#0x4,ne
7102cdb47c  b.eq 0x7102cdb5b8
7102cdb480  mov w9,#0x1
7102cdb484  str w9,[x8, #0x8]
7102cdb488  ldr x8,[x8]
7102cdb48c  ldr x8,[x8, #0x8]
7102cdb490  str w9,[x8, #0x10]
7102cdb494  b 0x7102cdb5b8
7102cdb498  ldr x9,[x19, #0x18]
7102cdb49c  ldp x8,x9,[x9]
7102cdb4a0  cmp x8,x9
7102cdb4a4  b.eq 0x7102cdb5b8
7102cdb4a8  ldr x11,[x8]
7102cdb4ac  ldrb w10,[x11, #0x20]
7102cdb4b0  cbz w10,0x7102cdb510
7102cdb4b4  ldp x13,x10,[x11, #0x8]
7102cdb4b8  ldr x12,[x11]
7102cdb4bc  strb wzr,[x11, #0x20]
7102cdb4c0  str x12,[x13]
7102cdb4c4  str x13,[x12, #0x8]
7102cdb4c8  ldr x12,[x10, #0x18]
7102cdb4cc  sub x12,x12,#0x1
7102cdb4d0  str x12,[x10, #0x18]
7102cdb4d4  stp xzr,xzr,[x11]
7102cdb4d8  ldr x13,[x10, #0x40]
7102cdb4dc  add x12,x10,#0x38
7102cdb4e0  stp x12,x13,[x11]
7102cdb4e4  str x11,[x10, #0x40]
7102cdb4e8  str x11,[x13]
7102cdb4ec  ldr x12,[x10, #0x30]
7102cdb4f0  add x12,x12,#0x1
7102cdb4f4  str x12,[x10, #0x30]
7102cdb4f8  ldr x11,[x11, #0x18]
7102cdb4fc  cbz x11,0x7102cdb504
7102cdb500  ldr w11,[x11, #0x110]
7102cdb504  ldr w12,[x10, #0x48]
7102cdb508  sub w11,w12,w11
7102cdb50c  str w11,[x10, #0x48]
7102cdb510  add x8,x8,#0x8
7102cdb514  cmp x9,x8
7102cdb518  b.ne 0x7102cdb4a8
7102cdb51c  b 0x7102cdb5b8
7102cdb520  ldr x8,[x19, #0x18]
7102cdb524  ldp x0,x1,[x8]
7102cdb528  adrp x2,0x71043bc000
7102cdb52c  add x2,x2,#0xb6c
7102cdb530  b 0x7102cdb57c
7102cdb534  ldr x8,[x19, #0x10]
7102cdb538  adrp x9,0x7104472000
7102cdb53c  ldr s0,[x9, #0xc40]
7102cdb540  adrp x9,0x7102cda000
7102cdb544  add x9,x9,#0xc80
7102cdb548  ldr s1,[x8, #0x94]
7102cdb54c  mov w8,#0x1
7102cdb550  strh w8,[x19, #0x48]
7102cdb554  fadd s0,s1,s0
7102cdb558  stp x9,xzr,[x19, #0x30]
7102cdb55c  str s0,[x19, #0x44]
7102cdb560  str s0,[x19, #0x40]
7102cdb564  b 0x7102cdb5b8
7102cdb568  bl 0x71025f55b0
7102cdb56c  ldr x8,[x19, #0x18]
7102cdb570  ldp x0,x1,[x8]
7102cdb574  adrp x2,0x71042a1000
7102cdb578  add x2,x2,#0x676
7102cdb57c  bl 0x71025f5420
7102cdb580  ldrb w8,[x19, #0x100]
7102cdb584  cbz w8,0x7102cdb5b8
7102cdb588  ldr x8,[x19, #0x18]
7102cdb58c  ldp x0,x1,[x8]
7102cdb590  adrp x2,0x71042a1000
7102cdb594  add x2,x2,#0x67e
7102cdb598  bl 0x71025f5420
7102cdb59c  ldr x8,[x19, #0x18]
7102cdb5a0  ldp x0,x1,[x8]
7102cdb5a4  ldp x29,x30,[sp, #0x10]
7102cdb5a8  adrp x2,0x7104441000
7102cdb5ac  add x2,x2,#0xec7
7102cdb5b0  ldr x19,[sp], #0x20
7102cdb5b4  b 0x71025f5420
7102cdb5b8  ldp x29,x30,[sp, #0x10]
7102cdb5bc  ldr x19,[sp], #0x20
7102cdb5c0  ret
