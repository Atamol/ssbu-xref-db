// addr:      71020bf440
// offset:    0x20bf440
// name:      FUN_71020bf440
// mangled:   
// size:      444

71020bf440  str x23,[sp, #-0x40]!
71020bf444  stp x22,x21,[sp, #0x10]
71020bf448  stp x20,x19,[sp, #0x20]
71020bf44c  stp x29,x30,[sp, #0x30]
71020bf450  add x29,sp,#0x30
71020bf454  ldr x9,[x0, #0x20]
71020bf458  ldr x9,[x9]
71020bf45c  ldr x8,[x0, #0x10]
71020bf460  adrp x10,0x7104862000
71020bf464  add x10,x10,#0x960
71020bf468  add x11,x9,#0x10
71020bf46c  cmp x11,x8
71020bf470  sub x22,x8,x11
71020bf474  csel x11,x11,x10,cc
71020bf478  ldr w12,[x11, #0x8]
71020bf47c  and w12,w12,#0xf
71020bf480  mov x19,x0
71020bf484  lsr x23,x22,#0x4
71020bf488  cmp w12,#0x2
71020bf48c  b.eq 0x71020bf4a4
71020bf490  cmp w12,#0x7
71020bf494  b.ne 0x71020bf4ac
71020bf498  ldr x11,[x11]
71020bf49c  add x20,x11,#0x28
71020bf4a0  b 0x71020bf4b0
71020bf4a4  ldr x20,[x11]
71020bf4a8  b 0x71020bf4b0
71020bf4ac  mov x20,xzr
71020bf4b0  add x9,x9,#0x20
71020bf4b4  cmp x9,x8
71020bf4b8  csel x1,x9,x10,cc
71020bf4bc  adrp x2,0x710430c000
71020bf4c0  add x2,x2,#0x66a
71020bf4c4  mov x0,x19
71020bf4c8  bl 0x71038f4d40
71020bf4cc  ldr x9,[x19, #0x10]
71020bf4d0  sub x8,x9,#0x10
71020bf4d4  ldur w9,[x9, #-0x8]
71020bf4d8  and w9,w9,#0xf
71020bf4dc  cmp w9,#0x2
71020bf4e0  b.eq 0x71020bf4f8
71020bf4e4  cmp w9,#0x7
71020bf4e8  b.ne 0x71020bf500
71020bf4ec  ldr x9,[x8]
71020bf4f0  add x9,x9,#0x28
71020bf4f4  b 0x71020bf504
71020bf4f8  ldr x9,[x8]
71020bf4fc  b 0x71020bf504
71020bf500  mov x9,xzr
71020bf504  str x8,[x19, #0x10]
71020bf508  blr x9
71020bf50c  mov w2,#0x2
71020bf510  mov x1,x19
71020bf514  mov x21,x0
71020bf518  bl 0x71020bed60
71020bf51c  tbnz w23,#0x1f,0x71020bf530
71020bf520  ldr x8,[x19, #0x10]
71020bf524  neg x9,x22, LSL #0x1c
71020bf528  add x8,x8,x9, ASR #0x1c
71020bf52c  b 0x71020bf568
71020bf530  ldr x8,[x19, #0x20]
71020bf534  ldr x8,[x8]
71020bf538  lsl x10,x22,#0x1c
71020bf53c  ldr x9,[x19, #0x10]
71020bf540  eor x10,x10,#-0x100000000
71020bf544  add x8,x8,x10, ASR #0x1c
71020bf548  add x8,x8,#0x10
71020bf54c  b 0x71020bf560
71020bf550  add x10,x9,#0x10
71020bf554  str x10,[x19, #0x10]
71020bf558  str wzr,[x9, #0x8]
71020bf55c  ldr x9,[x19, #0x10]
71020bf560  cmp x9,x8
71020bf564  b.cc 0x71020bf550
71020bf568  mov x0,x20
71020bf56c  mov x1,x21
71020bf570  str x8,[x19, #0x10]
71020bf574  bl 0x710068ed50
71020bf578  ldr x8,[x19, #0x10]
71020bf57c  and w9,w0,#0x1
71020bf580  str w9,[x8]
71020bf584  mov w9,#0x1
71020bf588  str w9,[x8, #0x8]
71020bf58c  ldp x8,x9,[x19, #0x10]
71020bf590  add x8,x8,#0x10
71020bf594  str x8,[x19, #0x10]
71020bf598  ldr x8,[x9, #0x18]
71020bf59c  cmp x8,#0x1
71020bf5a0  b.lt 0x71020bf5ac
71020bf5a4  mov x0,x19
71020bf5a8  bl 0x71038fec40
71020bf5ac  mov x0,x19
71020bf5b0  bl 0x710391e050
71020bf5b4  ldr x8,[x19, #0x10]
71020bf5b8  mov w9,#0x45
71020bf5bc  str x0,[x8]
71020bf5c0  str w9,[x8, #0x8]
71020bf5c4  ldr x8,[x19, #0x10]
71020bf5c8  add x8,x8,#0x10
71020bf5cc  mov x0,x21
71020bf5d0  mov x1,x19
71020bf5d4  str x8,[x19, #0x10]
71020bf5d8  bl 0x71020bf290
71020bf5dc  mov x0,x21
71020bf5e0  bl 0x710392eb40
71020bf5e4  ldp x29,x30,[sp, #0x30]
71020bf5e8  mov w0,#0x2
71020bf5ec  ldp x20,x19,[sp, #0x20]
71020bf5f0  ldp x22,x21,[sp, #0x10]
71020bf5f4  ldr x23,[sp], #0x40
71020bf5f8  ret
