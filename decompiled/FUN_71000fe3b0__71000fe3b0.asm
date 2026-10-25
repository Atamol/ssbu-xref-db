// addr:      71000fe3b0
// offset:    0xfe3b0
// name:      FUN_71000fe3b0
// mangled:   
// size:      616

71000fe3b0  sub sp,sp,#0x60
71000fe3b4  str x23,[sp, #0x20]
71000fe3b8  stp x22,x21,[sp, #0x30]
71000fe3bc  stp x20,x19,[sp, #0x40]
71000fe3c0  stp x29,x30,[sp, #0x50]
71000fe3c4  add x29,sp,#0x50
71000fe3c8  adrp x8,0x71052a4000
71000fe3cc  ldr x8,[x8, #0xdf0]
71000fe3d0  mov x19,x0
71000fe3d4  ldr x0,[x8]
71000fe3d8  bl 0x71001902d0
71000fe3dc  adrp x23,0x71052a5000
71000fe3e0  ldr x23,[x23, #0x80]
71000fe3e4  ldr x0,[x23]
71000fe3e8  bl 0x7100146ba0
71000fe3ec  sub w8,w0,#0x5
71000fe3f0  cmp w8,#0x3
71000fe3f4  b.hi 0x71000fe41c
71000fe3f8  adrp x9,0x7104496000
71000fe3fc  add x9,x9,#0x40c
71000fe400  ldrsw x8,[x9, x8, LSL #0x2]
71000fe404  add x8,x8,x9
71000fe408  br x8
71000fe40c  mov w8,#0x1
71000fe410  orr w9,wzr,#0x3
71000fe414  mov w10,#0xc406
71000fe418  b 0x71000fe484
71000fe41c  ldrb w8,[x19, #0xfb]
71000fe420  cbz w8,0x71000fe504
71000fe424  add x1,x19,#0x100
71000fe428  add x0,x19,#0x220
71000fe42c  bl 0x71000bcf30
71000fe430  adrp x8,0x71052a5000
71000fe434  ldr x8,[x8, #0x238]
71000fe438  orr w9,wzr,#0x6
71000fe43c  strb w9,[x19, #0x130]
71000fe440  adrp x9,0x7104290000
71000fe444  add x9,x9,#0xd05
71000fe448  stp x8,xzr,[x19, #0x30]
71000fe44c  str x9,[x19, #0x40]
71000fe450  mov w0,#0x5
71000fe454  b 0x71000fe4ec
71000fe458  mov w8,#0x1
71000fe45c  orr w9,wzr,#0x3
71000fe460  mov w10,#0xa471
71000fe464  b 0x71000fe484
71000fe468  mov w8,#0x1
71000fe46c  orr w9,wzr,#0x3
71000fe470  mov w10,#0xc420
71000fe474  b 0x71000fe484
71000fe478  mov w8,#0x1
71000fe47c  orr w9,wzr,#0x3
71000fe480  mov w10,#0xc421
71000fe484  strb w8,[x19, #0xfa]
71000fe488  add x8,sp,#0x10
71000fe48c  orr x20,x8,#0x4
71000fe490  mov x0,x20
71000fe494  strb w9,[x19, #0x130]
71000fe498  str w10,[sp, #0x10]
71000fe49c  bl 0x71039c0a80
71000fe4a0  mov x1,sp
71000fe4a4  mov x0,x20
71000fe4a8  str wzr,[sp]
71000fe4ac  bl 0x71039c0a90
71000fe4b0  add x0,x19,#0x220
71000fe4b4  add x1,sp,#0x10
71000fe4b8  bl 0x71000bcf30
71000fe4bc  ldr x8,[x23]
71000fe4c0  ldr x0,[x8, #0x8]
71000fe4c4  ldr x8,[x0]
71000fe4c8  ldr x8,[x8, #0x28]
71000fe4cc  blr x8
71000fe4d0  adrp x8,0x71052a5000
71000fe4d4  ldr x8,[x8, #0x240]
71000fe4d8  mov x0,xzr
71000fe4dc  stp x8,xzr,[x19, #0x30]
71000fe4e0  adrp x8,0x71043ac000
71000fe4e4  add x8,x8,#0x982
71000fe4e8  str x8,[x19, #0x40]
71000fe4ec  ldp x29,x30,[sp, #0x50]
71000fe4f0  ldr x23,[sp, #0x20]
71000fe4f4  ldp x20,x19,[sp, #0x40]
71000fe4f8  ldp x22,x21,[sp, #0x30]
71000fe4fc  add sp,sp,#0x60
71000fe500  ret
71000fe504  ldr x8,[x23]
71000fe508  ldrb w9,[x8, #0x162]
71000fe50c  cmp w9,#0x0
71000fe510  cset w9,eq
71000fe514  add x10,x8,w9, UXTW  #0x3
71000fe518  add x8,x8,w9, UXTW  #0x2
71000fe51c  ldr x21,[x10, #0x168]
71000fe520  ldr w20,[x8, #0x180]
71000fe524  add x8,sp,#0x10
71000fe528  orr x22,x8,#0x4
71000fe52c  mov x0,x22
71000fe530  str wzr,[sp, #0x10]
71000fe534  bl 0x71039c0a80
71000fe538  mov x1,sp
71000fe53c  mov x0,x22
71000fe540  str wzr,[sp]
71000fe544  bl 0x71039c0a90
71000fe548  ldr x0,[x23]
71000fe54c  bl 0x7100146ed0
71000fe550  tbnz w0,#0x0,0x71000fe57c
71000fe554  ldr x8,[x21]
71000fe558  ldr x8,[x8, #0xe0]
71000fe55c  mov x0,x21
71000fe560  blr x8
71000fe564  tbz w0,#0x0,0x71000fe57c
71000fe568  mov w8,#0x1
71000fe56c  strb w8,[x19, #0x263]
71000fe570  ldr x8,[x21]
71000fe574  ldr x9,[x8, #0x70]
71000fe578  b 0x71000fe588
71000fe57c  strb wzr,[x19, #0x263]
71000fe580  ldr x8,[x21]
71000fe584  ldr x9,[x8, #0x60]
71000fe588  add x1,x19,#0x60
71000fe58c  mov x8,sp
71000fe590  mov x0,x21
71000fe594  mov w2,w20
71000fe598  blr x9
71000fe59c  add x0,sp,#0x10
71000fe5a0  mov x1,sp
71000fe5a4  bl 0x71000bcf30
71000fe5a8  ldr w8,[sp, #0x10]
71000fe5ac  cbz w8,0x71000fe5f8
71000fe5b0  mov w8,#0x26
71000fe5b4  add x0,x19,#0x220
71000fe5b8  add x1,sp,#0x10
71000fe5bc  strb w8,[x19, #0x130]
71000fe5c0  bl 0x71000bcf30
71000fe5c4  ldr x8,[x23]
71000fe5c8  ldrb w9,[x8, #0x162]
71000fe5cc  cmp w9,#0x0
71000fe5d0  cset w9,eq
71000fe5d4  add x8,x8,w9, UXTW  #0x3
71000fe5d8  ldr x0,[x8, #0x168]
71000fe5dc  bl 0x71000d8f90
71000fe5e0  adrp x8,0x71052a5000
71000fe5e4  ldr x8,[x8, #0x238]
71000fe5e8  mov w0,#0x5
71000fe5ec  adrp x9,0x7104290000
71000fe5f0  add x9,x9,#0xd05
71000fe5f4  b 0x71000fe60c
71000fe5f8  adrp x8,0x71052a5000
71000fe5fc  ldr x8,[x8, #0x380]
71000fe600  mov x0,xzr
71000fe604  adrp x9,0x71042b3000
71000fe608  add x9,x9,#0x44b
71000fe60c  stp x8,xzr,[x19, #0x30]
71000fe610  str x9,[x19, #0x40]
71000fe614  b 0x71000fe4ec
