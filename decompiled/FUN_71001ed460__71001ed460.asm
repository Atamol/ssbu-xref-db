// addr:      71001ed460
// offset:    0x1ed460
// name:      FUN_71001ed460
// mangled:   
// size:      444

71001ed460  str x21,[sp, #-0x30]!
71001ed464  stp x20,x19,[sp, #0x10]
71001ed468  stp x29,x30,[sp, #0x20]
71001ed46c  add x29,sp,#0x20
71001ed470  adrp x20,0x71052a4000
71001ed474  ldr x20,[x20, #0xda8]
71001ed478  adrp x19,0x71052a4000
71001ed47c  ldrb w8,[x20]
71001ed480  ldr x19,[x19, #0xdb0]
71001ed484  add x21,x19,#0x18
71001ed488  cbz w8,0x71001ed4c4
71001ed48c  adrp x8,0x71052a4000
71001ed490  ldr x8,[x8, #0xdb8]
71001ed494  ldr x0,[x8]
71001ed498  bl 0x7101717960
71001ed49c  ldr w8,[x0]
71001ed4a0  cbz w8,0x71001ed4c4
71001ed4a4  ldr x10,[x19, #0xa0]
71001ed4a8  ldp x9,x10,[x10]
71001ed4ac  sub x10,x10,x9
71001ed4b0  asr x10,x10,#0x3
71001ed4b4  cmp x10,x8
71001ed4b8  b.ls 0x71001ed59c
71001ed4bc  ldr x8,[x9, x8, LSL #0x3]
71001ed4c0  add x21,x8,#0x10
71001ed4c4  ldr x8,[x21]
71001ed4c8  cbz x8,0x71001ed588
71001ed4cc  ldr x8,[x8, #0x10]
71001ed4d0  cbz x8,0x71001ed5c8
71001ed4d4  ldrb w8,[x20]
71001ed4d8  cbz w8,0x71001ed5dc
71001ed4dc  adrp x21,0x71052a4000
71001ed4e0  ldr x21,[x21, #0xdb8]
71001ed4e4  ldr x0,[x21]
71001ed4e8  bl 0x7101717960
71001ed4ec  ldr w8,[x0]
71001ed4f0  cbz w8,0x71001ed524
71001ed4f4  ldr x9,[x19, #0xa0]
71001ed4f8  ldp x10,x9,[x9]
71001ed4fc  sub x9,x9,x10
71001ed500  asr x9,x9,#0x3
71001ed504  cmp x9,x8
71001ed508  b.hi 0x71001ed524
71001ed50c  adrp x0,0x71042c4000
71001ed510  add x0,x0,#0x35f
71001ed514  mov w1,#0x47
71001ed518  orr w2,wzr,#0xe0000003
71001ed51c  mov w3,wzr
71001ed520  bl 0x71001b1300
71001ed524  ldrb w8,[x20]
71001ed528  add x20,x19,#0x18
71001ed52c  cbz w8,0x71001ed560
71001ed530  ldr x0,[x21]
71001ed534  bl 0x7101717960
71001ed538  ldr w8,[x0]
71001ed53c  cbz w8,0x71001ed560
71001ed540  ldr x10,[x19, #0xa0]
71001ed544  ldp x9,x10,[x10]
71001ed548  sub x10,x10,x9
71001ed54c  asr x10,x10,#0x3
71001ed550  cmp x10,x8
71001ed554  b.ls 0x71001ed604
71001ed558  ldr x8,[x9, x8, LSL #0x3]
71001ed55c  add x20,x8,#0x10
71001ed560  ldr x8,[x20]
71001ed564  ldr x8,[x8, #0x10]
71001ed568  ldr x9,[x8, #0x180]
71001ed56c  cbz x9,0x71001ed5f0
71001ed570  mov w0,#0x1
71001ed574  str xzr,[x8, #0x180]
71001ed578  ldp x29,x30,[sp, #0x20]
71001ed57c  ldp x20,x19,[sp, #0x10]
71001ed580  ldr x21,[sp], #0x30
71001ed584  ret
71001ed588  mov w0,wzr
71001ed58c  ldp x29,x30,[sp, #0x20]
71001ed590  ldp x20,x19,[sp, #0x10]
71001ed594  ldr x21,[sp], #0x30
71001ed598  ret
71001ed59c  adrp x0,0x71042c4000
71001ed5a0  add x0,x0,#0x35f
71001ed5a4  mov w1,#0x47
71001ed5a8  orr w2,wzr,#0xe0000003
71001ed5ac  mov w3,wzr
71001ed5b0  bl 0x71001b1300
71001ed5b4  mov w0,wzr
71001ed5b8  ldp x29,x30,[sp, #0x20]
71001ed5bc  ldp x20,x19,[sp, #0x10]
71001ed5c0  ldr x21,[sp], #0x30
71001ed5c4  ret
71001ed5c8  mov w0,wzr
71001ed5cc  ldp x29,x30,[sp, #0x20]
71001ed5d0  ldp x20,x19,[sp, #0x10]
71001ed5d4  ldr x21,[sp], #0x30
71001ed5d8  ret
71001ed5dc  add x20,x19,#0x18
71001ed5e0  ldr x8,[x20]
71001ed5e4  ldr x8,[x8, #0x10]
71001ed5e8  ldr x9,[x8, #0x180]
71001ed5ec  cbnz x9,0x71001ed570
71001ed5f0  mov w0,wzr
71001ed5f4  ldp x29,x30,[sp, #0x20]
71001ed5f8  ldp x20,x19,[sp, #0x10]
71001ed5fc  ldr x21,[sp], #0x30
71001ed600  ret
71001ed604  adrp x0,0x71042c4000
71001ed608  add x0,x0,#0x35f
71001ed60c  mov w1,#0x47
71001ed610  orr w2,wzr,#0xe0000003
71001ed614  mov w3,wzr
71001ed618  bl 0x71001b1300
