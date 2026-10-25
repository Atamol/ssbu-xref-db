// addr:      71000fe620
// offset:    0xfe620
// name:      FUN_71000fe620
// mangled:   
// size:      392

71000fe620  sub sp,sp,#0x40
71000fe624  str x21,[sp, #0x10]
71000fe628  stp x20,x19,[sp, #0x20]
71000fe62c  stp x29,x30,[sp, #0x30]
71000fe630  add x29,sp,#0x30
71000fe634  adrp x21,0x71052a5000
71000fe638  ldr x21,[x21, #0x80]
71000fe63c  mov x19,x0
71000fe640  ldr x0,[x21]
71000fe644  bl 0x7100146ba0
71000fe648  sub w8,w0,#0x5
71000fe64c  cmp w8,#0x3
71000fe650  b.hi 0x71000fe678
71000fe654  adrp x9,0x7104496000
71000fe658  add x9,x9,#0x41c
71000fe65c  ldrsw x8,[x9, x8, LSL #0x2]
71000fe660  add x8,x8,x9
71000fe664  br x8
71000fe668  mov w8,#0x1
71000fe66c  orr w9,wzr,#0x3
71000fe670  mov w10,#0xc406
71000fe674  b 0x71000fe6d8
71000fe678  ldrb w8,[x19, #0xfb]
71000fe67c  cbz w8,0x71000fe754
71000fe680  add x1,x19,#0x100
71000fe684  add x0,x19,#0x220
71000fe688  bl 0x71000bcf30
71000fe68c  orr w8,wzr,#0x6
71000fe690  strb w8,[x19, #0x130]
71000fe694  adrp x8,0x71052a5000
71000fe698  ldr x8,[x8, #0x238]
71000fe69c  mov w0,#0x5
71000fe6a0  adrp x9,0x7104290000
71000fe6a4  add x9,x9,#0xd05
71000fe6a8  b 0x71000fe738
71000fe6ac  mov w8,#0x1
71000fe6b0  orr w9,wzr,#0x3
71000fe6b4  mov w10,#0xa471
71000fe6b8  b 0x71000fe6d8
71000fe6bc  mov w8,#0x1
71000fe6c0  orr w9,wzr,#0x3
71000fe6c4  mov w10,#0xc420
71000fe6c8  b 0x71000fe6d8
71000fe6cc  mov w8,#0x1
71000fe6d0  orr w9,wzr,#0x3
71000fe6d4  mov w10,#0xc421
71000fe6d8  strb w8,[x19, #0xfa]
71000fe6dc  mov x8,sp
71000fe6e0  orr x20,x8,#0x4
71000fe6e4  mov x0,x20
71000fe6e8  strb w9,[x19, #0x130]
71000fe6ec  str w10,[sp]
71000fe6f0  bl 0x71039c0a80
71000fe6f4  add x1,sp,#0x18
71000fe6f8  mov x0,x20
71000fe6fc  str wzr,[sp, #0x18]
71000fe700  bl 0x71039c0a90
71000fe704  add x0,x19,#0x220
71000fe708  mov x1,sp
71000fe70c  bl 0x71000bcf30
71000fe710  ldr x8,[x21]
71000fe714  ldr x0,[x8, #0x8]
71000fe718  ldr x8,[x0]
71000fe71c  ldr x8,[x8, #0x28]
71000fe720  blr x8
71000fe724  adrp x8,0x71052a5000
71000fe728  ldr x8,[x8, #0x240]
71000fe72c  mov x0,xzr
71000fe730  adrp x9,0x71043ac000
71000fe734  add x9,x9,#0x982
71000fe738  stp x8,xzr,[x19, #0x30]
71000fe73c  str x9,[x19, #0x40]
71000fe740  ldp x29,x30,[sp, #0x30]
71000fe744  ldr x21,[sp, #0x10]
71000fe748  ldp x20,x19,[sp, #0x20]
71000fe74c  add sp,sp,#0x40
71000fe750  ret
71000fe754  adrp x8,0x71052a4000
71000fe758  ldr x8,[x8, #0xc70]
71000fe75c  ldr x8,[x8]
71000fe760  ldr x8,[x8, #0x30]
71000fe764  ldr x9,[x19, #0x208]
71000fe768  cmp x8,x9
71000fe76c  b.ls 0x71000fe788
71000fe770  adrp x8,0x71052a5000
71000fe774  ldr x8,[x8, #0x388]
71000fe778  stp x8,xzr,[x19, #0x30]
71000fe77c  adrp x8,0x7104411000
71000fe780  add x8,x8,#0xaa7
71000fe784  str x8,[x19, #0x40]
71000fe788  ldrb w8,[x19, #0xf4]
71000fe78c  mov w0,#0x5
71000fe790  cbz w8,0x71000fe740
71000fe794  adrp x8,0x71052a5000
71000fe798  ldr x8,[x8, #0x388]
71000fe79c  adrp x9,0x7104411000
71000fe7a0  add x9,x9,#0xaa7
71000fe7a4  b 0x71000fe738
