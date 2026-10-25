// addr:      71000fe1b0
// offset:    0xfe1b0
// name:      FUN_71000fe1b0
// mangled:   
// size:      504

71000fe1b0  sub sp,sp,#0x50
71000fe1b4  stp x22,x21,[sp, #0x20]
71000fe1b8  stp x20,x19,[sp, #0x30]
71000fe1bc  stp x29,x30,[sp, #0x40]
71000fe1c0  add x29,sp,#0x40
71000fe1c4  adrp x21,0x71052a5000
71000fe1c8  ldr x21,[x21, #0x80]
71000fe1cc  mov x19,x0
71000fe1d0  ldr x0,[x21]
71000fe1d4  bl 0x7100146ba0
71000fe1d8  sub w8,w0,#0x5
71000fe1dc  cmp w8,#0x3
71000fe1e0  b.hi 0x71000fe208
71000fe1e4  adrp x9,0x7104496000
71000fe1e8  add x9,x9,#0x3fc
71000fe1ec  ldrsw x8,[x9, x8, LSL #0x2]
71000fe1f0  add x8,x8,x9
71000fe1f4  br x8
71000fe1f8  mov w8,#0x1
71000fe1fc  orr w9,wzr,#0x3
71000fe200  mov w10,#0xc406
71000fe204  b 0x71000fe2e4
71000fe208  ldr x8,[x21]
71000fe20c  ldrb w9,[x8, #0x162]
71000fe210  cmp w9,#0x0
71000fe214  cset w9,eq
71000fe218  add x8,x8,w9, UXTW  #0x3
71000fe21c  ldr x20,[x8, #0x168]
71000fe220  ldr x8,[x20]
71000fe224  ldr x8,[x8, #0xb8]
71000fe228  mov x0,x20
71000fe22c  blr x8
71000fe230  tbz w0,#0x0,0x71000fe360
71000fe234  add x1,x19,#0x64
71000fe238  add x0,sp,#0x8
71000fe23c  add x22,sp,#0x8
71000fe240  bl 0x71000bce50
71000fe244  ldr w8,[sp, #0x8]
71000fe248  cbz w8,0x71000fe368
71000fe24c  mov w8,#0x16
71000fe250  orr x20,x22,#0x4
71000fe254  strb w8,[x19, #0x130]
71000fe258  mov w8,#0x6c59
71000fe25c  mov x0,x20
71000fe260  str w8,[sp, #0x8]
71000fe264  bl 0x71039c0a80
71000fe268  add x1,sp,#0x18
71000fe26c  mov x0,x20
71000fe270  str wzr,[sp, #0x18]
71000fe274  bl 0x71039c0a90
71000fe278  add x0,x19,#0x220
71000fe27c  add x1,sp,#0x8
71000fe280  bl 0x71000bcf30
71000fe284  ldr x8,[x21]
71000fe288  ldrb w9,[x8, #0x162]
71000fe28c  cmp w9,#0x0
71000fe290  cset w9,eq
71000fe294  add x8,x8,w9, UXTW  #0x3
71000fe298  ldr x0,[x8, #0x168]
71000fe29c  bl 0x71000d8f90
71000fe2a0  adrp x8,0x71052a5000
71000fe2a4  ldr x8,[x8, #0x238]
71000fe2a8  mov w0,#0x5
71000fe2ac  adrp x9,0x7104290000
71000fe2b0  add x9,x9,#0xd05
71000fe2b4  b 0x71000fe344
71000fe2b8  mov w8,#0x1
71000fe2bc  orr w9,wzr,#0x3
71000fe2c0  mov w10,#0xa471
71000fe2c4  b 0x71000fe2e4
71000fe2c8  mov w8,#0x1
71000fe2cc  orr w9,wzr,#0x3
71000fe2d0  mov w10,#0xc420
71000fe2d4  b 0x71000fe2e4
71000fe2d8  mov w8,#0x1
71000fe2dc  orr w9,wzr,#0x3
71000fe2e0  mov w10,#0xc421
71000fe2e4  strb w8,[x19, #0xfa]
71000fe2e8  add x8,sp,#0x8
71000fe2ec  orr x20,x8,#0x4
71000fe2f0  mov x0,x20
71000fe2f4  strb w9,[x19, #0x130]
71000fe2f8  str w10,[sp, #0x8]
71000fe2fc  bl 0x71039c0a80
71000fe300  add x1,sp,#0x18
71000fe304  mov x0,x20
71000fe308  str wzr,[sp, #0x18]
71000fe30c  bl 0x71039c0a90
71000fe310  add x0,x19,#0x220
71000fe314  add x1,sp,#0x8
71000fe318  bl 0x71000bcf30
71000fe31c  ldr x8,[x21]
71000fe320  ldr x0,[x8, #0x8]
71000fe324  ldr x8,[x0]
71000fe328  ldr x8,[x8, #0x28]
71000fe32c  blr x8
71000fe330  adrp x8,0x71052a5000
71000fe334  ldr x8,[x8, #0x240]
71000fe338  mov x0,xzr
71000fe33c  adrp x9,0x71043ac000
71000fe340  add x9,x9,#0x982
71000fe344  stp x8,xzr,[x19, #0x30]
71000fe348  str x9,[x19, #0x40]
71000fe34c  ldp x29,x30,[sp, #0x40]
71000fe350  ldp x20,x19,[sp, #0x30]
71000fe354  ldp x22,x21,[sp, #0x20]
71000fe358  add sp,sp,#0x50
71000fe35c  ret
71000fe360  mov w0,#0x5
71000fe364  b 0x71000fe34c
71000fe368  ldr x8,[x20]
71000fe36c  ldr x8,[x8, #0x120]
71000fe370  mov x0,x20
71000fe374  blr x8
71000fe378  ldr x8,[x0]
71000fe37c  ldr x8,[x8, #0x30]
71000fe380  blr x8
71000fe384  and w1,w0,#0xff
71000fe388  ldr x0,[x21]
71000fe38c  bl 0x71001492f0
71000fe390  adrp x8,0x71052a5000
71000fe394  ldr x8,[x8, #0x340]
71000fe398  mov x0,xzr
71000fe39c  adrp x9,0x7104307000
71000fe3a0  add x9,x9,#0x7d0
71000fe3a4  b 0x71000fe344
