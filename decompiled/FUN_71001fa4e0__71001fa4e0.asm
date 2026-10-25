// addr:      71001fa4e0
// offset:    0x1fa4e0
// name:      FUN_71001fa4e0
// mangled:   
// size:      376

71001fa4e0  sub sp,sp,#0x70
71001fa4e4  stp x24,x23,[sp, #0x30]
71001fa4e8  stp x22,x21,[sp, #0x40]
71001fa4ec  stp x20,x19,[sp, #0x50]
71001fa4f0  stp x29,x30,[sp, #0x60]
71001fa4f4  add x29,sp,#0x60
71001fa4f8  adrp x8,0x71052a4000
71001fa4fc  ldr x8,[x8, #0xda8]
71001fa500  adrp x24,0x71052a4000
71001fa504  ldrb w8,[x8]
71001fa508  ldr x24,[x24, #0xdb0]
71001fa50c  mov w21,w3
71001fa510  mov w22,w2
71001fa514  mov x19,x1
71001fa518  mov x20,x0
71001fa51c  add x23,x24,#0x28
71001fa520  cbz w8,0x71001fa55c
71001fa524  adrp x8,0x71052a4000
71001fa528  ldr x8,[x8, #0xdb8]
71001fa52c  ldr x0,[x8]
71001fa530  bl 0x7101717960
71001fa534  ldr w8,[x0]
71001fa538  cbz w8,0x71001fa55c
71001fa53c  ldr x10,[x24, #0xa0]
71001fa540  ldp x9,x10,[x10]
71001fa544  sub x10,x10,x9
71001fa548  asr x10,x10,#0x3
71001fa54c  cmp x10,x8
71001fa550  b.ls 0x71001fa574
71001fa554  ldr x8,[x9, x8, LSL #0x3]
71001fa558  add x23,x8,#0x20
71001fa55c  ldr x8,[x23]
71001fa560  cbz x8,0x71001fa58c
71001fa564  ldr x8,[x8, #0x10]
71001fa568  cbz x8,0x71001fa58c
71001fa56c  ldr x23,[x8, #0x10]
71001fa570  b 0x71001fa590
71001fa574  adrp x0,0x71042c4000
71001fa578  add x0,x0,#0x35f
71001fa57c  mov w1,#0x47
71001fa580  orr w2,wzr,#0xe0000003
71001fa584  mov w3,wzr
71001fa588  bl 0x71001b1300
71001fa58c  mov x23,xzr
71001fa590  ldr x8,[x23, #0x78]!
71001fa594  ldr x8,[x8, #0x10]
71001fa598  mov x0,x23
71001fa59c  blr x8
71001fa5a0  add x1,sp,#0x8
71001fa5a4  mov x0,x20
71001fa5a8  str w22,[sp, #0x8]
71001fa5ac  strh w21,[sp, #0xc]
71001fa5b0  bl 0x71001fa660
71001fa5b4  cbz x0,0x71001fa628
71001fa5b8  mov x20,x0
71001fa5bc  add x8,sp,#0x8
71001fa5c0  mov x0,x19
71001fa5c4  bl 0x71001f2f60
71001fa5c8  add x0,sp,#0x8
71001fa5cc  bl 0x71001b52a0
71001fa5d0  cbz x0,0x71001fa5ec
71001fa5d4  ldr x8,[x20, #0xb0]
71001fa5d8  ldr x0,[x8, #0x10]
71001fa5dc  ldr x8,[x0]
71001fa5e0  ldr x8,[x8, #0xa0]
71001fa5e4  add x1,sp,#0x8
71001fa5e8  blr x8
71001fa5ec  ldrb w8,[x19, #0x68]
71001fa5f0  cbnz w8,0x71001fa5fc
71001fa5f4  mov x0,x19
71001fa5f8  bl 0x71001f2180
71001fa5fc  ldr x1,[x19, #0x8]
71001fa600  mov x0,x20
71001fa604  bl 0x71001c0740
71001fa608  adrp x8,0x71052a4000
71001fa60c  ldr x8,[x8, #0xd80]
71001fa610  mov w19,w0
71001fa614  add x0,sp,#0x8
71001fa618  add x8,x8,#0x10
71001fa61c  str x8,[sp, #0x8]
71001fa620  bl 0x71001b4910
71001fa624  b 0x71001fa62c
71001fa628  mov w19,wzr
71001fa62c  ldr x8,[x23]
71001fa630  ldr x8,[x8, #0x20]
71001fa634  mov x0,x23
71001fa638  blr x8
71001fa63c  and w0,w19,#0x1
71001fa640  ldp x29,x30,[sp, #0x60]
71001fa644  ldp x20,x19,[sp, #0x50]
71001fa648  ldp x22,x21,[sp, #0x40]
71001fa64c  ldp x24,x23,[sp, #0x30]
71001fa650  add sp,sp,#0x70
71001fa654  ret
