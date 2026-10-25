// addr:      71000ff3e0
// offset:    0xff3e0
// name:      FUN_71000ff3e0
// mangled:   
// size:      592

71000ff3e0  sub sp,sp,#0x40
71000ff3e4  str x21,[sp, #0x10]
71000ff3e8  stp x20,x19,[sp, #0x20]
71000ff3ec  stp x29,x30,[sp, #0x30]
71000ff3f0  add x29,sp,#0x30
71000ff3f4  adrp x21,0x71052a5000
71000ff3f8  ldr x21,[x21, #0x80]
71000ff3fc  mov x19,x0
71000ff400  ldr x0,[x21]
71000ff404  bl 0x7100146ba0
71000ff408  cmp w0,#0x7
71000ff40c  b.eq 0x71000ff430
71000ff410  cmp w0,#0x6
71000ff414  b.eq 0x71000ff440
71000ff418  cmp w0,#0x5
71000ff41c  b.ne 0x71000ff450
71000ff420  mov w8,#0x1
71000ff424  orr w9,wzr,#0x3
71000ff428  mov w10,#0xc406
71000ff42c  b 0x71000ff464
71000ff430  mov w8,#0x1
71000ff434  orr w9,wzr,#0x3
71000ff438  mov w10,#0xc420
71000ff43c  b 0x71000ff464
71000ff440  mov w8,#0x1
71000ff444  orr w9,wzr,#0x3
71000ff448  mov w10,#0xa471
71000ff44c  b 0x71000ff464
71000ff450  cmp w0,#0x8
71000ff454  b.ne 0x71000ff4e0
71000ff458  mov w8,#0x1
71000ff45c  orr w9,wzr,#0x3
71000ff460  mov w10,#0xc421
71000ff464  strb w8,[x19, #0xfa]
71000ff468  mov x8,sp
71000ff46c  orr x20,x8,#0x4
71000ff470  mov x0,x20
71000ff474  strb w9,[x19, #0x130]
71000ff478  str w10,[sp]
71000ff47c  bl 0x71039c0a80
71000ff480  add x1,sp,#0x18
71000ff484  mov x0,x20
71000ff488  str wzr,[sp, #0x18]
71000ff48c  bl 0x71039c0a90
71000ff490  add x0,x19,#0x220
71000ff494  mov x1,sp
71000ff498  bl 0x71000bcf30
71000ff49c  ldr x8,[x21]
71000ff4a0  ldr x0,[x8, #0x8]
71000ff4a4  ldr x8,[x0]
71000ff4a8  ldr x8,[x8, #0x28]
71000ff4ac  blr x8
71000ff4b0  adrp x8,0x71052a5000
71000ff4b4  ldr x8,[x8, #0x240]
71000ff4b8  mov x0,xzr
71000ff4bc  stp x8,xzr,[x19, #0x30]
71000ff4c0  adrp x8,0x71043ac000
71000ff4c4  add x8,x8,#0x982
71000ff4c8  str x8,[x19, #0x40]
71000ff4cc  ldp x29,x30,[sp, #0x30]
71000ff4d0  ldr x21,[sp, #0x10]
71000ff4d4  ldp x20,x19,[sp, #0x20]
71000ff4d8  add sp,sp,#0x40
71000ff4dc  ret
71000ff4e0  ldrb w8,[x19, #0xfb]
71000ff4e4  cbz w8,0x71000ff51c
71000ff4e8  add x1,x19,#0x100
71000ff4ec  add x0,x19,#0x220
71000ff4f0  bl 0x71000bcf30
71000ff4f4  adrp x8,0x71052a5000
71000ff4f8  ldr x8,[x8, #0x238]
71000ff4fc  orr w9,wzr,#0x6
71000ff500  strb w9,[x19, #0x130]
71000ff504  adrp x9,0x7104290000
71000ff508  add x9,x9,#0xd05
71000ff50c  stp x8,xzr,[x19, #0x30]
71000ff510  str x9,[x19, #0x40]
71000ff514  mov w0,#0x5
71000ff518  b 0x71000ff4cc
71000ff51c  ldr x0,[x19, #0x58]
71000ff520  cbz x0,0x71000ff570
71000ff524  ldrb w8,[x0, #0x28]
71000ff528  cbz w8,0x71000ff570
71000ff52c  ldr w8,[x0]
71000ff530  sub w8,w8,#0x2
71000ff534  cmp w8,#0x3
71000ff538  b.cc 0x71000ff540
71000ff53c  bl 0x71000b4260
71000ff540  str xzr,[x19, #0x58]
71000ff544  ldr x8,[x21]
71000ff548  ldrb w9,[x8, #0x162]
71000ff54c  cmp w9,#0x0
71000ff550  cset w9,eq
71000ff554  add x8,x8,w9, UXTW  #0x3
71000ff558  ldr x0,[x8, #0x168]
71000ff55c  bl 0x71000d8f90
71000ff560  mov x0,x19
71000ff564  bl 0x7100140910
71000ff568  mov w0,#0x1
71000ff56c  b 0x71000ff4cc
71000ff570  ldr x20,[x21]
71000ff574  mov x0,x19
71000ff578  bl 0x7100140e30
71000ff57c  adrp x8,0x71052a4000
71000ff580  ldr x8,[x8, #0xc70]
71000ff584  ldr x9,[x8]
71000ff588  ldr x8,[x19, #0x1e8]
71000ff58c  ldr x9,[x9, #0x30]
71000ff590  tbz w0,#0x0,0x71000ff5a8
71000ff594  ldrb w10,[x19, #0x250]
71000ff598  cmp x8,x9
71000ff59c  b.cs 0x71000ff5bc
71000ff5a0  cbnz w10,0x71000ff5c0
71000ff5a4  b 0x71000ff5c4
71000ff5a8  ldrb w10,[x19, #0x240]
71000ff5ac  cmp x8,x9
71000ff5b0  b.cs 0x71000ff604
71000ff5b4  cbnz w10,0x71000ff608
71000ff5b8  b 0x71000ff60c
71000ff5bc  cbz w10,0x71000ff628
71000ff5c0  strb wzr,[x19, #0x260]
71000ff5c4  ldrb w8,[x20, #0x162]
71000ff5c8  add x8,x20,x8, LSL #0x3
71000ff5cc  ldr x0,[x8, #0x168]
71000ff5d0  ldr x8,[x0]
71000ff5d4  ldr x8,[x8, #0xe0]
71000ff5d8  blr x8
71000ff5dc  adrp x8,0x71052a5000
71000ff5e0  ldr x8,[x8, #0x388]
71000ff5e4  adrp x9,0x7104411000
71000ff5e8  add x9,x9,#0xaa7
71000ff5ec  stp xzr,x9,[x19, #0x38]
71000ff5f0  str x8,[x19, #0x30]
71000ff5f4  tst w0,#0x1
71000ff5f8  mov w8,#0x5
71000ff5fc  csel x0,x8,xzr,ne
71000ff600  b 0x71000ff4cc
71000ff604  cbz w10,0x71000ff628
71000ff608  strb wzr,[x19, #0x260]
71000ff60c  adrp x8,0x71052a5000
71000ff610  ldr x8,[x8, #0x388]
71000ff614  mov x0,xzr
71000ff618  stp x8,xzr,[x19, #0x30]
71000ff61c  adrp x8,0x7104411000
71000ff620  add x8,x8,#0xaa7
71000ff624  b 0x71000ff4c8
71000ff628  mov w0,#0x5
71000ff62c  b 0x71000ff4cc
