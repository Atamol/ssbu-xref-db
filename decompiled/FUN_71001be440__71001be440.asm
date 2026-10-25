// addr:      71001be440
// offset:    0x1be440
// name:      FUN_71001be440
// mangled:   
// size:      588

71001be440  sub sp,sp,#0x190
71001be444  str x28,[sp, #0x150]
71001be448  stp x22,x21,[sp, #0x160]
71001be44c  stp x20,x19,[sp, #0x170]
71001be450  stp x29,x30,[sp, #0x180]
71001be454  add x29,sp,#0x180
71001be458  mov x20,x0
71001be45c  add x19,x0,#0x140
71001be460  ldr x0,[x0, #0x158]
71001be464  mov x21,x1
71001be468  adrp x1,0x7104411000
71001be46c  add x1,x1,#0x4cc
71001be470  bl 0x71001b4e00
71001be474  tbz w0,#0x0,0x71001be514
71001be478  add x0,sp,#0x28
71001be47c  bl 0x71001b6080
71001be480  ldr w0,[x21]
71001be484  bl 0x71039c0f70
71001be488  mov w0,w0
71001be48c  bl 0x71039c12e0
71001be490  adrp x8,0x71052a4000
71001be494  ldr x8,[x8, #0xd80]
71001be498  strb wzr,[sp, #0x8]
71001be49c  add x22,x8,#0x10
71001be4a0  mov x8,sp
71001be4a4  add x8,x8,#0x8
71001be4a8  mov x1,x0
71001be4ac  mov x2,#-0x1
71001be4b0  mov x0,sp
71001be4b4  str x22,[sp]
71001be4b8  str x8,[sp, #0x18]
71001be4bc  mov w8,#0x10
71001be4c0  str x8,[sp, #0x20]
71001be4c4  bl 0x71001b47e0
71001be4c8  add x0,sp,#0x28
71001be4cc  mov x1,sp
71001be4d0  bl 0x71001b5d60
71001be4d4  adrp x1,0x7104442000
71001be4d8  add x1,x1,#0x5b1
71001be4dc  bl 0x71001b0ab0
71001be4e0  ldrh w1,[x21, #0x8]
71001be4e4  bl 0x71001b6470
71001be4e8  adrp x1,0x710426e000
71001be4ec  add x1,x1,#0xe53
71001be4f0  bl 0x71001b0ab0
71001be4f4  mov x0,sp
71001be4f8  str x22,[sp]
71001be4fc  bl 0x71001b4910
71001be500  ldr x1,[sp, #0x30]
71001be504  mov x0,x19
71001be508  bl 0x71001b3cb0
71001be50c  add x0,sp,#0x28
71001be510  bl 0x71001b60c0
71001be514  mov w8,#0x101
71001be518  str w8,[sp, #0x28]
71001be51c  adrp x22,0x71052a4000
71001be520  ldr x22,[x22, #0xd80]
71001be524  add x9,sp,#0x28
71001be528  add x10,x9,#0x10
71001be52c  str x10,[sp, #0x48]
71001be530  mov w10,#0x10
71001be534  add x11,x9,#0x38
71001be538  stp x11,x10,[sp, #0x70]
71001be53c  add x11,x9,#0x60
71001be540  stp x11,x10,[sp, #0x98]
71001be544  add x11,x9,#0x88
71001be548  strb wzr,[sp, #0x60]
71001be54c  add x8,x22,#0x10
71001be550  str x8,[sp, #0xa8]
71001be554  str x8,[sp, #0x30]
71001be558  str x8,[sp, #0x80]
71001be55c  str x8,[sp, #0xd0]
71001be560  strb wzr,[sp, #0x38]
71001be564  strb wzr,[sp, #0x88]
71001be568  strb wzr,[sp, #0xb0]
71001be56c  strb wzr,[sp, #0xd8]
71001be570  str xzr,[sp, #0x108]
71001be574  stp x10,x8,[sp, #0x50]
71001be578  add x8,x9,#0xb0
71001be57c  stp x8,x10,[sp, #0xe8]
71001be580  mov w8,#0x1
71001be584  str w8,[sp, #0x110]
71001be588  stp x11,x10,[sp, #0xc0]
71001be58c  stp xzr,xzr,[sp, #0xf8]
71001be590  ldrb w8,[x20, #0x168]
71001be594  cbz w8,0x71001be59c
71001be598  strh wzr,[sp, #0x28]
71001be59c  add x21,x20,#0x170
71001be5a0  mov x0,x21
71001be5a4  bl 0x71001b52a0
71001be5a8  cbz x0,0x71001be5bc
71001be5ac  add x8,sp,#0x28
71001be5b0  add x0,x8,#0x80
71001be5b4  mov x1,x21
71001be5b8  bl 0x71001b2f70
71001be5bc  mov x8,sp
71001be5c0  add x8,x8,#0x8
71001be5c4  add x21,x22,#0x10
71001be5c8  adrp x1,0x71042a2000
71001be5cc  add x1,x1,#0x4e8
71001be5d0  str x21,[sp]
71001be5d4  str x8,[sp, #0x18]
71001be5d8  mov w8,#0x10
71001be5dc  mov x2,#-0x1
71001be5e0  mov x0,sp
71001be5e4  add x20,x20,#0x10
71001be5e8  strb wzr,[sp, #0x8]
71001be5ec  str x8,[sp, #0x20]
71001be5f0  bl 0x71001b47e0
71001be5f4  mov x2,sp
71001be5f8  add x4,sp,#0x28
71001be5fc  mov x0,x20
71001be600  mov x1,x19
71001be604  mov w3,wzr
71001be608  add x22,sp,#0x28
71001be60c  bl 0x7100224030
71001be610  mvn w8,w0
71001be614  mov x0,sp
71001be618  and w19,w8,#0x1
71001be61c  str x21,[sp]
71001be620  bl 0x71001b4910
71001be624  ldr x0,[sp, #0xf8]
71001be628  cbz x0,0x71001be634
71001be62c  str x0,[sp, #0x100]
71001be630  bl 0x71001b1870
71001be634  add x0,x22,#0xa8
71001be638  str x21,[sp, #0xd0]
71001be63c  bl 0x71001b4910
71001be640  add x0,x22,#0x80
71001be644  str x21,[sp, #0xa8]
71001be648  bl 0x71001b4910
71001be64c  add x0,x22,#0x58
71001be650  str x21,[sp, #0x80]
71001be654  bl 0x71001b4910
71001be658  add x0,x22,#0x30
71001be65c  str x21,[sp, #0x58]
71001be660  bl 0x71001b4910
71001be664  add x0,x22,#0x8
71001be668  str x21,[sp, #0x30]
71001be66c  bl 0x71001b4910
71001be670  mov w0,w19
71001be674  ldp x29,x30,[sp, #0x180]
71001be678  ldp x20,x19,[sp, #0x170]
71001be67c  ldr x28,[sp, #0x150]
71001be680  ldp x22,x21,[sp, #0x160]
71001be684  add sp,sp,#0x190
71001be688  ret
