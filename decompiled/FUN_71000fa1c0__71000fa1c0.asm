// addr:      71000fa1c0
// offset:    0xfa1c0
// name:      FUN_71000fa1c0
// mangled:   
// size:      1084

71000fa1c0  sub sp,sp,#0x80
71000fa1c4  stp x28,x27,[sp, #0x20]
71000fa1c8  stp x26,x25,[sp, #0x30]
71000fa1cc  stp x24,x23,[sp, #0x40]
71000fa1d0  stp x22,x21,[sp, #0x50]
71000fa1d4  stp x20,x19,[sp, #0x60]
71000fa1d8  stp x29,x30,[sp, #0x70]
71000fa1dc  add x29,sp,#0x70
71000fa1e0  adrp x21,0x71052a5000
71000fa1e4  ldr x21,[x21, #0x80]
71000fa1e8  mov x19,x0
71000fa1ec  ldr x0,[x21]
71000fa1f0  bl 0x7100146ba0
71000fa1f4  sub w8,w0,#0x5
71000fa1f8  cmp w8,#0x3
71000fa1fc  b.hi 0x71000fa224
71000fa200  adrp x9,0x7104496000
71000fa204  add x9,x9,#0x2d8
71000fa208  ldrsw x8,[x9, x8, LSL #0x2]
71000fa20c  add x8,x8,x9
71000fa210  br x8
71000fa214  mov w8,#0x1
71000fa218  orr w9,wzr,#0x3
71000fa21c  mov w10,#0xc406
71000fa220  b 0x71000fa2d8
71000fa224  adrp x8,0x71052a4000
71000fa228  ldr x8,[x8, #0xdf0]
71000fa22c  ldr x0,[x8]
71000fa230  add x8,sp,#0x8
71000fa234  bl 0x7100192e90
71000fa238  ldr w8,[sp, #0x8]
71000fa23c  cbnz w8,0x71000fa250
71000fa240  ldr x0,[x21]
71000fa244  bl 0x7100146ba0
71000fa248  cmp w0,#0x4
71000fa24c  b.ne 0x71000fa360
71000fa250  mov w8,#0x6c59
71000fa254  str w8,[sp, #0x8]
71000fa258  add x8,sp,#0x8
71000fa25c  orr x20,x8,#0x4
71000fa260  mov x0,x20
71000fa264  bl 0x71039c0a80
71000fa268  add x1,sp,#0x18
71000fa26c  mov x0,x20
71000fa270  str wzr,[sp, #0x18]
71000fa274  bl 0x71039c0a90
71000fa278  add x0,x19,#0x220
71000fa27c  add x1,sp,#0x8
71000fa280  bl 0x71000bcf30
71000fa284  adrp x8,0x71052a5000
71000fa288  ldr x8,[x8, #0x238]
71000fa28c  mov w9,#0x4
71000fa290  strb w9,[x19, #0x130]
71000fa294  adrp x9,0x7104290000
71000fa298  add x9,x9,#0xd05
71000fa29c  str x9,[x19, #0x40]
71000fa2a0  stp x8,xzr,[x19, #0x30]
71000fa2a4  mov w0,#0x5
71000fa2a8  b 0x71000fa340
71000fa2ac  mov w8,#0x1
71000fa2b0  orr w9,wzr,#0x3
71000fa2b4  mov w10,#0xa471
71000fa2b8  b 0x71000fa2d8
71000fa2bc  mov w8,#0x1
71000fa2c0  orr w9,wzr,#0x3
71000fa2c4  mov w10,#0xc420
71000fa2c8  b 0x71000fa2d8
71000fa2cc  mov w8,#0x1
71000fa2d0  orr w9,wzr,#0x3
71000fa2d4  mov w10,#0xc421
71000fa2d8  strb w8,[x19, #0xfa]
71000fa2dc  add x8,sp,#0x8
71000fa2e0  orr x20,x8,#0x4
71000fa2e4  mov x0,x20
71000fa2e8  strb w9,[x19, #0x130]
71000fa2ec  str w10,[sp, #0x8]
71000fa2f0  bl 0x71039c0a80
71000fa2f4  add x1,sp,#0x18
71000fa2f8  mov x0,x20
71000fa2fc  str wzr,[sp, #0x18]
71000fa300  bl 0x71039c0a90
71000fa304  add x0,x19,#0x220
71000fa308  add x1,sp,#0x8
71000fa30c  bl 0x71000bcf30
71000fa310  ldr x8,[x21]
71000fa314  ldr x0,[x8, #0x8]
71000fa318  ldr x8,[x0]
71000fa31c  ldr x8,[x8, #0x28]
71000fa320  blr x8
71000fa324  adrp x8,0x71052a5000
71000fa328  ldr x8,[x8, #0x240]
71000fa32c  mov x0,xzr
71000fa330  stp x8,xzr,[x19, #0x30]
71000fa334  adrp x8,0x71043ac000
71000fa338  add x8,x8,#0x982
71000fa33c  str x8,[x19, #0x40]
71000fa340  ldp x29,x30,[sp, #0x70]
71000fa344  ldp x20,x19,[sp, #0x60]
71000fa348  ldp x22,x21,[sp, #0x50]
71000fa34c  ldp x24,x23,[sp, #0x40]
71000fa350  ldp x26,x25,[sp, #0x30]
71000fa354  ldp x28,x27,[sp, #0x20]
71000fa358  add sp,sp,#0x80
71000fa35c  ret
71000fa360  ldrb w8,[x19, #0xfb]
71000fa364  cbz w8,0x71000fa384
71000fa368  add x1,x19,#0x100
71000fa36c  add x0,x19,#0x220
71000fa370  bl 0x71000bcf30
71000fa374  adrp x8,0x71052a5000
71000fa378  ldr x8,[x8, #0x238]
71000fa37c  orr w9,wzr,#0x6
71000fa380  b 0x71000fa290
71000fa384  ldr x0,[x19, #0x58]
71000fa388  cbz x0,0x71000fa3d8
71000fa38c  ldrb w8,[x0, #0x28]
71000fa390  cbz w8,0x71000fa3d8
71000fa394  ldr w8,[x0]
71000fa398  sub w8,w8,#0x2
71000fa39c  cmp w8,#0x3
71000fa3a0  b.cc 0x71000fa3a8
71000fa3a4  bl 0x71000b4260
71000fa3a8  str xzr,[x19, #0x58]
71000fa3ac  ldr x8,[x21]
71000fa3b0  ldrb w9,[x8, #0x162]
71000fa3b4  cmp w9,#0x0
71000fa3b8  cset w9,eq
71000fa3bc  add x8,x8,w9, UXTW  #0x3
71000fa3c0  ldr x0,[x8, #0x168]
71000fa3c4  bl 0x71000d8f90
71000fa3c8  mov x0,x19
71000fa3cc  bl 0x7100140910
71000fa3d0  mov w0,#0x1
71000fa3d4  b 0x71000fa340
71000fa3d8  adrp x22,0x71052a4000
71000fa3dc  ldr x22,[x22, #0xc70]
71000fa3e0  ldr x26,[x22]
71000fa3e4  ldr x20,[x26, #0x30]!
71000fa3e8  ldr x24,[x19, #0xb0]
71000fa3ec  add x23,x19,#0xa8
71000fa3f0  cmp x24,x23
71000fa3f4  b.eq 0x71000fa464
71000fa3f8  ldr x26,[x19, #0x1f0]
71000fa3fc  ldr x27,[x21]
71000fa400  mov w25,#0x1
71000fa404  ldr x0,[x27, #0xb8]
71000fa408  ldr x1,[x24, #0x10]
71000fa40c  bl 0x71001508c0
71000fa410  cbz w0,0x71000fa42c
71000fa414  cmp w0,#0x2
71000fa418  b.eq 0x71000fa4d4
71000fa41c  ldr x24,[x24, #0x8]
71000fa420  cmp x24,x23
71000fa424  b.ne 0x71000fa404
71000fa428  b 0x71000fa458
71000fa42c  ldr x0,[x27, #0xb8]
71000fa430  ldr x1,[x24, #0x10]
71000fa434  cmp x20,x26
71000fa438  cset w28,hi
71000fa43c  bl 0x7100150680
71000fa440  eor w8,w0,#0x1
71000fa444  orr w8,w28,w8
71000fa448  and w25,w25,w8
71000fa44c  ldr x24,[x24, #0x8]
71000fa450  cmp x24,x23
71000fa454  b.ne 0x71000fa404
71000fa458  ldr x26,[x22]
71000fa45c  ldr x20,[x26, #0x30]!
71000fa460  tbz w25,#0x0,0x71000fa4e0
71000fa464  ldr w8,[x19, #0x90]
71000fa468  sub w8,w8,#0x6
71000fa46c  cmp w8,#0x4
71000fa470  str wzr,[x19, #0x98]
71000fa474  str x20,[x19, #0x128]
71000fa478  b.hi 0x71000fa51c
71000fa47c  adrp x9,0x7104496000
71000fa480  add x9,x9,#0x2e8
71000fa484  ldrsw x8,[x9, x8, LSL #0x2]
71000fa488  add x8,x8,x9
71000fa48c  br x8
71000fa490  mov w8,#0xb
71000fa494  str w8,[x19, #0x230]
71000fa498  bl 0x71000bb680
71000fa49c  mov x8,x0
71000fa4a0  adrp x10,0x71052a5000
71000fa4a4  ldr x9,[x26]
71000fa4a8  ldr x10,[x10, #0x2e0]
71000fa4ac  ldr x8,[x8]
71000fa4b0  mov w11,#0x7530
71000fa4b4  madd x8,x8,x11,x9
71000fa4b8  str x8,[x19, #0x1e0]
71000fa4bc  adrp x8,0x710438b000
71000fa4c0  add x8,x8,#0xd92
71000fa4c4  mov x0,xzr
71000fa4c8  str x8,[x19, #0x40]
71000fa4cc  stp x10,xzr,[x19, #0x30]
71000fa4d0  b 0x71000fa340
71000fa4d4  orr w8,wzr,#0xc
71000fa4d8  mov w9,#0x6c59
71000fa4dc  b 0x71000fa528
71000fa4e0  ldr x8,[x19, #0x1b8]
71000fa4e4  sub x20,x20,x8
71000fa4e8  bl 0x71000bb680
71000fa4ec  ldr x8,[x0]
71000fa4f0  mov w9,#0x7d0
71000fa4f4  mul x8,x8,x9
71000fa4f8  cmp x20,x8
71000fa4fc  b.lt 0x71000fa2a4
71000fa500  adrp x8,0x71052a5000
71000fa504  ldr x8,[x8, #0x2e8]
71000fa508  mov x0,xzr
71000fa50c  stp x8,xzr,[x19, #0x30]
71000fa510  adrp x8,0x71042f6000
71000fa514  add x8,x8,#0xf1f
71000fa518  b 0x71000fa33c
71000fa51c  orr w8,wzr,#0x1f
71000fa520  mov w9,#0xc08
71000fa524  movk w9,#0x1, LSL #16
71000fa528  strb w8,[x19, #0x130]
71000fa52c  add x8,sp,#0x8
71000fa530  orr x20,x8,#0x4
71000fa534  mov x0,x20
71000fa538  str w9,[sp, #0x8]
71000fa53c  bl 0x71039c0a80
71000fa540  add x1,sp,#0x18
71000fa544  mov x0,x20
71000fa548  str wzr,[sp, #0x18]
71000fa54c  bl 0x71039c0a90
71000fa550  add x0,x19,#0x220
71000fa554  add x1,sp,#0x8
71000fa558  bl 0x71000bcf30
71000fa55c  ldr x8,[x21]
71000fa560  ldrb w9,[x8, #0x162]
71000fa564  cmp w9,#0x0
71000fa568  cset w9,eq
71000fa56c  add x8,x8,w9, UXTW  #0x3
71000fa570  ldr x0,[x8, #0x168]
71000fa574  bl 0x71000d8f90
71000fa578  adrp x8,0x71052a5000
71000fa57c  ldr x8,[x8, #0x238]
71000fa580  b 0x71000fa294
71000fa584  adrp x9,0x71052a5000
71000fa588  ldr x9,[x9, #0x2f0]
71000fa58c  orr w8,wzr,#0x7
71000fa590  str w8,[x19, #0x230]
71000fa594  adrp x8,0x7104442000
71000fa598  add x8,x8,#0x94f
71000fa59c  mov x0,xzr
71000fa5a0  str x8,[x19, #0x40]
71000fa5a4  stp x9,xzr,[x19, #0x30]
71000fa5a8  b 0x71000fa340
71000fa5ac  adrp x9,0x71052a5000
71000fa5b0  ldr x9,[x9, #0x2f8]
71000fa5b4  orr w8,wzr,#0x7
71000fa5b8  str w8,[x19, #0x230]
71000fa5bc  adrp x8,0x7104290000
71000fa5c0  add x8,x8,#0xd67
71000fa5c4  mov x0,xzr
71000fa5c8  str x8,[x19, #0x40]
71000fa5cc  stp x9,xzr,[x19, #0x30]
71000fa5d0  b 0x71000fa340
71000fa5d4  adrp x9,0x71052a5000
71000fa5d8  ldr x9,[x9, #0x300]
71000fa5dc  orr w8,wzr,#0x7
71000fa5e0  str w8,[x19, #0x230]
71000fa5e4  adrp x8,0x71043ef000
71000fa5e8  add x8,x8,#0xa78
71000fa5ec  mov x0,xzr
71000fa5f0  str x8,[x19, #0x40]
71000fa5f4  stp x9,xzr,[x19, #0x30]
71000fa5f8  b 0x71000fa340
