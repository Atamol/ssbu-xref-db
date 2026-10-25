// addr:      71000fc2f0
// offset:    0xfc2f0
// name:      FUN_71000fc2f0
// mangled:   
// size:      1248

71000fc2f0  sub sp,sp,#0x190
71000fc2f4  stp x28,x27,[sp, #0x130]
71000fc2f8  stp x26,x25,[sp, #0x140]
71000fc2fc  stp x24,x23,[sp, #0x150]
71000fc300  stp x22,x21,[sp, #0x160]
71000fc304  stp x20,x19,[sp, #0x170]
71000fc308  stp x29,x30,[sp, #0x180]
71000fc30c  add x29,sp,#0x180
71000fc310  adrp x25,0x71052a5000
71000fc314  ldr x25,[x25, #0x80]
71000fc318  mov x19,x0
71000fc31c  ldr x0,[x25]
71000fc320  bl 0x7100146ba0
71000fc324  sub w8,w0,#0x5
71000fc328  cmp w8,#0x3
71000fc32c  b.hi 0x71000fc354
71000fc330  adrp x9,0x7104496000
71000fc334  add x9,x9,#0x38c
71000fc338  ldrsw x8,[x9, x8, LSL #0x2]
71000fc33c  add x8,x8,x9
71000fc340  br x8
71000fc344  mov w8,#0x1
71000fc348  orr w9,wzr,#0x3
71000fc34c  mov w10,#0xc406
71000fc350  b 0x71000fc408
71000fc354  adrp x20,0x71052a4000
71000fc358  ldr x20,[x20, #0xdf0]
71000fc35c  ldr x0,[x20]
71000fc360  add x8,sp,#0x28
71000fc364  bl 0x7100192e90
71000fc368  ldr w8,[sp, #0x28]
71000fc36c  cbnz w8,0x71000fc380
71000fc370  ldr x0,[x25]
71000fc374  bl 0x7100146ba0
71000fc378  cmp w0,#0x4
71000fc37c  b.ne 0x71000fc490
71000fc380  mov w8,#0x6c59
71000fc384  str w8,[sp, #0x28]
71000fc388  add x8,sp,#0x28
71000fc38c  orr x20,x8,#0x4
71000fc390  mov x0,x20
71000fc394  bl 0x71039c0a80
71000fc398  add x1,sp,#0x18
71000fc39c  mov x0,x20
71000fc3a0  str wzr,[sp, #0x18]
71000fc3a4  bl 0x71039c0a90
71000fc3a8  add x0,x19,#0x220
71000fc3ac  add x1,sp,#0x28
71000fc3b0  bl 0x71000bcf30
71000fc3b4  adrp x8,0x71052a5000
71000fc3b8  ldr x8,[x8, #0x238]
71000fc3bc  mov w9,#0x4
71000fc3c0  strb w9,[x19, #0x130]
71000fc3c4  adrp x9,0x7104290000
71000fc3c8  add x9,x9,#0xd05
71000fc3cc  str x9,[x19, #0x40]
71000fc3d0  stp x8,xzr,[x19, #0x30]
71000fc3d4  mov w0,#0x5
71000fc3d8  b 0x71000fc470
71000fc3dc  mov w8,#0x1
71000fc3e0  orr w9,wzr,#0x3
71000fc3e4  mov w10,#0xa471
71000fc3e8  b 0x71000fc408
71000fc3ec  mov w8,#0x1
71000fc3f0  orr w9,wzr,#0x3
71000fc3f4  mov w10,#0xc420
71000fc3f8  b 0x71000fc408
71000fc3fc  mov w8,#0x1
71000fc400  orr w9,wzr,#0x3
71000fc404  mov w10,#0xc421
71000fc408  strb w8,[x19, #0xfa]
71000fc40c  add x8,sp,#0x28
71000fc410  orr x20,x8,#0x4
71000fc414  mov x0,x20
71000fc418  strb w9,[x19, #0x130]
71000fc41c  str w10,[sp, #0x28]
71000fc420  bl 0x71039c0a80
71000fc424  add x1,sp,#0x18
71000fc428  mov x0,x20
71000fc42c  str wzr,[sp, #0x18]
71000fc430  bl 0x71039c0a90
71000fc434  add x0,x19,#0x220
71000fc438  add x1,sp,#0x28
71000fc43c  bl 0x71000bcf30
71000fc440  ldr x8,[x25]
71000fc444  ldr x0,[x8, #0x8]
71000fc448  ldr x8,[x0]
71000fc44c  ldr x8,[x8, #0x28]
71000fc450  blr x8
71000fc454  adrp x8,0x71052a5000
71000fc458  ldr x8,[x8, #0x240]
71000fc45c  mov x0,xzr
71000fc460  stp x8,xzr,[x19, #0x30]
71000fc464  adrp x8,0x71043ac000
71000fc468  add x8,x8,#0x982
71000fc46c  str x8,[x19, #0x40]
71000fc470  ldp x29,x30,[sp, #0x180]
71000fc474  ldp x20,x19,[sp, #0x170]
71000fc478  ldp x22,x21,[sp, #0x160]
71000fc47c  ldp x24,x23,[sp, #0x150]
71000fc480  ldp x26,x25,[sp, #0x140]
71000fc484  ldp x28,x27,[sp, #0x130]
71000fc488  add sp,sp,#0x190
71000fc48c  ret
71000fc490  ldrb w8,[x19, #0xfb]
71000fc494  cbz w8,0x71000fc4b4
71000fc498  add x1,x19,#0x100
71000fc49c  add x0,x19,#0x220
71000fc4a0  bl 0x71000bcf30
71000fc4a4  adrp x8,0x71052a5000
71000fc4a8  ldr x8,[x8, #0x238]
71000fc4ac  orr w9,wzr,#0x6
71000fc4b0  b 0x71000fc3c0
71000fc4b4  ldr x0,[x19, #0x58]
71000fc4b8  cbz x0,0x71000fc508
71000fc4bc  ldrb w8,[x0, #0x28]
71000fc4c0  cbz w8,0x71000fc508
71000fc4c4  ldr w8,[x0]
71000fc4c8  sub w8,w8,#0x2
71000fc4cc  cmp w8,#0x3
71000fc4d0  b.cc 0x71000fc4d8
71000fc4d4  bl 0x71000b4260
71000fc4d8  str xzr,[x19, #0x58]
71000fc4dc  ldr x8,[x25]
71000fc4e0  ldrb w9,[x8, #0x162]
71000fc4e4  cmp w9,#0x0
71000fc4e8  cset w9,eq
71000fc4ec  add x8,x8,w9, UXTW  #0x3
71000fc4f0  ldr x0,[x8, #0x168]
71000fc4f4  bl 0x71000d8f90
71000fc4f8  mov x0,x19
71000fc4fc  bl 0x7100140910
71000fc500  mov w0,#0x1
71000fc504  b 0x71000fc470
71000fc508  mov w8,#0x8
71000fc50c  str w8,[x19, #0x230]
71000fc510  ldr x26,[x25]
71000fc514  ldrb w8,[x19, #0xf4]
71000fc518  cbz w8,0x71000fc534
71000fc51c  ldrb w8,[x19, #0x234]
71000fc520  cbz w8,0x71000fc534
71000fc524  ldr x8,[x19, #0x238]
71000fc528  ldr x9,[x26, #0xf0]
71000fc52c  cmp x8,x9
71000fc530  b.ne 0x71000fc6bc
71000fc534  ldr x0,[x20]
71000fc538  bl 0x71001939c0
71000fc53c  ldrb w8,[x0, #0x84]
71000fc540  cbz w8,0x71000fc54c
71000fc544  mov w0,#0x5
71000fc548  b 0x71000fc470
71000fc54c  ldr x0,[x26, #0xb8]
71000fc550  bl 0x7100150770
71000fc554  ldr x21,[x19, #0xb0]
71000fc558  add x20,x19,#0xa8
71000fc55c  cmp x21,x20
71000fc560  b.eq 0x71000fc640
71000fc564  mov w27,wzr
71000fc568  add x22,sp,#0x28
71000fc56c  ldr x0,[x26, #0xb8]
71000fc570  ldr x1,[x21, #0x10]
71000fc574  bl 0x7100150680
71000fc578  tbz w0,#0x0,0x71000fc58c
71000fc57c  ldr x8,[x21, #0x10]
71000fc580  and x9,x27,#0xffff
71000fc584  add w27,w27,#0x1
71000fc588  str x8,[x22, x9, LSL #0x3]
71000fc58c  ldr x21,[x21, #0x8]
71000fc590  cmp x21,x20
71000fc594  b.ne 0x71000fc56c
71000fc598  and w8,w27,#0xffff
71000fc59c  cmp w8,#0x1
71000fc5a0  b.ls 0x71000fc640
71000fc5a4  ldrb w8,[x26, #0x162]
71000fc5a8  cmp x8,#0x0
71000fc5ac  add x8,x26,x8, LSL #0x2
71000fc5b0  cset w9,eq
71000fc5b4  add x9,x26,w9, UXTW  #0x3
71000fc5b8  ldr x20,[x9, #0x168]
71000fc5bc  ldr w23,[x8, #0x180]
71000fc5c0  ldr x8,[x20]
71000fc5c4  ldr x8,[x8, #0xf0]
71000fc5c8  ldr x21,[x26, #0xc8]
71000fc5cc  ldr w22,[x19, #0x90]
71000fc5d0  ldr w24,[x19, #0xf0]
71000fc5d4  mov x0,x20
71000fc5d8  blr x8
71000fc5dc  mov x4,x0
71000fc5e0  add x5,x20,#0x568
71000fc5e4  add x8,sp,#0x18
71000fc5e8  mov w6,#0x20
71000fc5ec  add x7,sp,#0x28
71000fc5f0  strh w27,[sp]
71000fc5f4  mov x0,x21
71000fc5f8  mov w1,w22
71000fc5fc  mov w2,w23
71000fc600  mov w3,w24
71000fc604  bl 0x710014e550
71000fc608  mov w8,#0x4c0d
71000fc60c  str w8,[sp, #0x8]
71000fc610  add x8,sp,#0x8
71000fc614  orr x20,x8,#0x4
71000fc618  mov x0,x20
71000fc61c  bl 0x71039c0a80
71000fc620  sub x1,x29,#0x60
71000fc624  mov x0,x20
71000fc628  stur wzr,[x29, #-0x60]
71000fc62c  bl 0x71039c0a90
71000fc630  ldr w8,[sp, #0x18]
71000fc634  ldr w9,[sp, #0x8]
71000fc638  cmp w8,w9
71000fc63c  b.ne 0x71000fc6e4
71000fc640  ldr x0,[x26, #0xb8]
71000fc644  bl 0x7100150410
71000fc648  ldr x0,[x26, #0xb8]
71000fc64c  bl 0x7100150770
71000fc650  ldr x0,[x26, #0xb8]
71000fc654  ldr x1,[x26, #0xf0]
71000fc658  mov w2,#0x1
71000fc65c  bl 0x7100150440
71000fc660  ldr x0,[x26, #0xb8]
71000fc664  ldr x1,[x26, #0xf0]
71000fc668  mov w2,#0x1
71000fc66c  bl 0x71001506d0
71000fc670  adrp x8,0x71052a4000
71000fc674  ldr x8,[x8, #0xc70]
71000fc678  ldr x20,[x8]
71000fc67c  ldr x8,[x20, #0x30]
71000fc680  str x8,[x19, #0x1c0]
71000fc684  bl 0x71000bb680
71000fc688  mov x8,x0
71000fc68c  adrp x10,0x71052a5000
71000fc690  ldr x9,[x20, #0x30]
71000fc694  ldr x10,[x10, #0x338]
71000fc698  ldr x8,[x8]
71000fc69c  mov w11,#0x3a98
71000fc6a0  madd x8,x8,x11,x9
71000fc6a4  mov x0,xzr
71000fc6a8  str x8,[x19, #0x1f0]
71000fc6ac  adrp x8,0x71042a2000
71000fc6b0  add x8,x8,#0xcb
71000fc6b4  stp x10,xzr,[x19, #0x30]
71000fc6b8  b 0x71000fc46c
71000fc6bc  strb wzr,[x19, #0x234]
71000fc6c0  strb wzr,[x19, #0xf4]
71000fc6c4  adrp x9,0x71052a5000
71000fc6c8  ldr x9,[x9, #0x340]
71000fc6cc  mov x0,xzr
71000fc6d0  str x8,[x19, #0xa0]
71000fc6d4  stp x9,xzr,[x19, #0x30]
71000fc6d8  adrp x8,0x7104307000
71000fc6dc  add x8,x8,#0x7d0
71000fc6e0  b 0x71000fc46c
71000fc6e4  mov w8,#0x2c0a
71000fc6e8  mov x0,x20
71000fc6ec  str w8,[sp, #0x8]
71000fc6f0  bl 0x71039c0a80
71000fc6f4  sub x1,x29,#0x60
71000fc6f8  mov x0,x20
71000fc6fc  stur wzr,[x29, #-0x60]
71000fc700  bl 0x71039c0a90
71000fc704  ldr w8,[sp, #0x18]
71000fc708  ldr w9,[sp, #0x8]
71000fc70c  cmp w8,w9
71000fc710  b.ne 0x71000fc790
71000fc714  mov w20,wzr
71000fc718  and x21,x27,#0xffff
71000fc71c  add x22,sp,#0x28
71000fc720  ldr x1,[x22]
71000fc724  ldr x8,[x26, #0xf0]
71000fc728  cmp x1,x8
71000fc72c  b.eq 0x71000fc740
71000fc730  ldr x0,[x26, #0xb8]
71000fc734  bl 0x7100150680
71000fc738  and w8,w0,#0x1
71000fc73c  add w20,w20,w8
71000fc740  add x22,x22,#0x8
71000fc744  subs x21,x21,#0x1
71000fc748  b.ne 0x71000fc720
71000fc74c  tst w20,#0xffff
71000fc750  b.eq 0x71000fc640
71000fc754  mov w8,#0x9
71000fc758  strb w8,[x19, #0x130]
71000fc75c  add x8,sp,#0x8
71000fc760  orr x20,x8,#0x4
71000fc764  mov w9,#0x6c57
71000fc768  str w9,[sp, #0x8]
71000fc76c  mov x0,x20
71000fc770  bl 0x71039c0a80
71000fc774  sub x1,x29,#0x60
71000fc778  mov x0,x20
71000fc77c  stur wzr,[x29, #-0x60]
71000fc780  bl 0x71039c0a90
71000fc784  add x0,x19,#0x220
71000fc788  add x1,sp,#0x8
71000fc78c  b 0x71000fc7a4
71000fc790  cbz w8,0x71000fc640
71000fc794  orr w8,wzr,#0x3
71000fc798  add x0,x19,#0x220
71000fc79c  add x1,sp,#0x18
71000fc7a0  strb w8,[x19, #0x130]
71000fc7a4  bl 0x71000bcf30
71000fc7a8  ldr x8,[x25]
71000fc7ac  ldrb w9,[x8, #0x162]
71000fc7b0  cmp w9,#0x0
71000fc7b4  cset w9,eq
71000fc7b8  add x8,x8,w9, UXTW  #0x3
71000fc7bc  ldr x0,[x8, #0x168]
71000fc7c0  bl 0x71000d8f90
71000fc7c4  adrp x8,0x71052a5000
71000fc7c8  ldr x8,[x8, #0x238]
71000fc7cc  b 0x71000fc3c4
