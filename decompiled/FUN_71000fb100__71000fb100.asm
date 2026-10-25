// addr:      71000fb100
// offset:    0xfb100
// name:      FUN_71000fb100
// mangled:   
// size:      900

71000fb100  sub sp,sp,#0x180
71000fb104  str x28,[sp, #0x120]
71000fb108  stp x26,x25,[sp, #0x130]
71000fb10c  stp x24,x23,[sp, #0x140]
71000fb110  stp x22,x21,[sp, #0x150]
71000fb114  stp x20,x19,[sp, #0x160]
71000fb118  stp x29,x30,[sp, #0x170]
71000fb11c  add x29,sp,#0x170
71000fb120  adrp x22,0x71052a5000
71000fb124  ldr x22,[x22, #0x80]
71000fb128  mov x19,x0
71000fb12c  ldr x0,[x22]
71000fb130  bl 0x7100146ba0
71000fb134  sub w8,w0,#0x5
71000fb138  cmp w8,#0x3
71000fb13c  b.hi 0x71000fb164
71000fb140  adrp x9,0x7104496000
71000fb144  add x9,x9,#0x32c
71000fb148  ldrsw x8,[x9, x8, LSL #0x2]
71000fb14c  add x8,x8,x9
71000fb150  br x8
71000fb154  mov w8,#0x1
71000fb158  orr w9,wzr,#0x3
71000fb15c  mov w10,#0xc406
71000fb160  b 0x71000fb218
71000fb164  adrp x8,0x71052a4000
71000fb168  ldr x8,[x8, #0xdf0]
71000fb16c  ldr x0,[x8]
71000fb170  add x8,sp,#0x18
71000fb174  bl 0x7100192e90
71000fb178  ldr w8,[sp, #0x18]
71000fb17c  cbnz w8,0x71000fb190
71000fb180  ldr x0,[x22]
71000fb184  bl 0x7100146ba0
71000fb188  cmp w0,#0x4
71000fb18c  b.ne 0x71000fb2a0
71000fb190  mov w8,#0x6c59
71000fb194  str w8,[sp, #0x18]
71000fb198  add x8,sp,#0x18
71000fb19c  orr x20,x8,#0x4
71000fb1a0  mov x0,x20
71000fb1a4  bl 0x71039c0a80
71000fb1a8  sub x1,x29,#0x60
71000fb1ac  mov x0,x20
71000fb1b0  stur wzr,[x29, #-0x60]
71000fb1b4  bl 0x71039c0a90
71000fb1b8  add x0,x19,#0x220
71000fb1bc  add x1,sp,#0x18
71000fb1c0  bl 0x71000bcf30
71000fb1c4  adrp x8,0x71052a5000
71000fb1c8  ldr x8,[x8, #0x238]
71000fb1cc  mov w9,#0x4
71000fb1d0  strb w9,[x19, #0x130]
71000fb1d4  adrp x9,0x7104290000
71000fb1d8  add x9,x9,#0xd05
71000fb1dc  stp x8,xzr,[x19, #0x30]
71000fb1e0  mov w0,#0x5
71000fb1e4  str x9,[x19, #0x40]
71000fb1e8  b 0x71000fb280
71000fb1ec  mov w8,#0x1
71000fb1f0  orr w9,wzr,#0x3
71000fb1f4  mov w10,#0xa471
71000fb1f8  b 0x71000fb218
71000fb1fc  mov w8,#0x1
71000fb200  orr w9,wzr,#0x3
71000fb204  mov w10,#0xc420
71000fb208  b 0x71000fb218
71000fb20c  mov w8,#0x1
71000fb210  orr w9,wzr,#0x3
71000fb214  mov w10,#0xc421
71000fb218  strb w8,[x19, #0xfa]
71000fb21c  add x8,sp,#0x18
71000fb220  orr x20,x8,#0x4
71000fb224  mov x0,x20
71000fb228  strb w9,[x19, #0x130]
71000fb22c  str w10,[sp, #0x18]
71000fb230  bl 0x71039c0a80
71000fb234  sub x1,x29,#0x60
71000fb238  mov x0,x20
71000fb23c  stur wzr,[x29, #-0x60]
71000fb240  bl 0x71039c0a90
71000fb244  add x0,x19,#0x220
71000fb248  add x1,sp,#0x18
71000fb24c  bl 0x71000bcf30
71000fb250  ldr x8,[x22]
71000fb254  ldr x0,[x8, #0x8]
71000fb258  ldr x8,[x0]
71000fb25c  ldr x8,[x8, #0x28]
71000fb260  blr x8
71000fb264  adrp x8,0x71052a5000
71000fb268  ldr x8,[x8, #0x240]
71000fb26c  mov x0,xzr
71000fb270  stp x8,xzr,[x19, #0x30]
71000fb274  adrp x8,0x71043ac000
71000fb278  add x8,x8,#0x982
71000fb27c  str x8,[x19, #0x40]
71000fb280  ldp x29,x30,[sp, #0x170]
71000fb284  ldr x28,[sp, #0x120]
71000fb288  ldp x20,x19,[sp, #0x160]
71000fb28c  ldp x22,x21,[sp, #0x150]
71000fb290  ldp x24,x23,[sp, #0x140]
71000fb294  ldp x26,x25,[sp, #0x130]
71000fb298  add sp,sp,#0x180
71000fb29c  ret
71000fb2a0  ldrb w8,[x19, #0xfb]
71000fb2a4  cbz w8,0x71000fb2c4
71000fb2a8  add x1,x19,#0x100
71000fb2ac  add x0,x19,#0x220
71000fb2b0  bl 0x71000bcf30
71000fb2b4  adrp x8,0x71052a5000
71000fb2b8  ldr x8,[x8, #0x238]
71000fb2bc  orr w9,wzr,#0x6
71000fb2c0  b 0x71000fb1d0
71000fb2c4  ldr x0,[x19, #0x58]
71000fb2c8  cbz x0,0x71000fb318
71000fb2cc  ldrb w8,[x0, #0x28]
71000fb2d0  cbz w8,0x71000fb318
71000fb2d4  ldr w8,[x0]
71000fb2d8  sub w8,w8,#0x2
71000fb2dc  cmp w8,#0x3
71000fb2e0  b.cc 0x71000fb2e8
71000fb2e4  bl 0x71000b4260
71000fb2e8  str xzr,[x19, #0x58]
71000fb2ec  ldr x8,[x22]
71000fb2f0  ldrb w9,[x8, #0x162]
71000fb2f4  cmp w9,#0x0
71000fb2f8  cset w9,eq
71000fb2fc  add x8,x8,w9, UXTW  #0x3
71000fb300  ldr x0,[x8, #0x168]
71000fb304  bl 0x71000d8f90
71000fb308  mov x0,x19
71000fb30c  bl 0x7100140910
71000fb310  mov w0,#0x1
71000fb314  b 0x71000fb280
71000fb318  ldr x23,[x22]
71000fb31c  ldrb w8,[x23, #0x162]
71000fb320  cmp w8,#0x0
71000fb324  cset w8,eq
71000fb328  add x8,x23,w8, UXTW  #0x3
71000fb32c  ldr x20,[x8, #0x168]
71000fb330  sub x8,x29,#0x60
71000fb334  orr x21,x8,#0x4
71000fb338  mov x0,x21
71000fb33c  stur wzr,[x29, #-0x60]
71000fb340  bl 0x71039c0a80
71000fb344  add x1,sp,#0x18
71000fb348  mov x0,x21
71000fb34c  str wzr,[sp, #0x18]
71000fb350  add x24,sp,#0x18
71000fb354  bl 0x71039c0a90
71000fb358  stp xzr,xzr,[sp, #0x100]
71000fb35c  add x25,x19,#0xa8
71000fb360  stp xzr,xzr,[sp, #0xf0]
71000fb364  str xzr,[sp, #0x18]
71000fb368  stp xzr,xzr,[sp, #0xe0]
71000fb36c  stp xzr,xzr,[sp, #0xd0]
71000fb370  stp xzr,xzr,[sp, #0xc0]
71000fb374  stp xzr,xzr,[sp, #0xb0]
71000fb378  stp xzr,xzr,[sp, #0xa0]
71000fb37c  stp xzr,xzr,[sp, #0x90]
71000fb380  stp xzr,xzr,[sp, #0x80]
71000fb384  stp xzr,xzr,[sp, #0x70]
71000fb388  stp xzr,xzr,[sp, #0x60]
71000fb38c  stp xzr,xzr,[sp, #0x50]
71000fb390  stp xzr,xzr,[sp, #0x40]
71000fb394  stp xzr,xzr,[sp, #0x30]
71000fb398  stp xzr,xzr,[sp, #0x20]
71000fb39c  ldr x26,[x19, #0xb0]
71000fb3a0  cmp x26,x25
71000fb3a4  b.eq 0x71000fb3e4
71000fb3a8  mov w21,wzr
71000fb3ac  ldr x1,[x26, #0x10]
71000fb3b0  ldr x8,[x19, #0xa0]
71000fb3b4  cmp x1,x8
71000fb3b8  b.eq 0x71000fb3d4
71000fb3bc  ldr x0,[x23, #0xb8]
71000fb3c0  bl 0x7100150680
71000fb3c4  tbz w0,#0x0,0x71000fb3d4
71000fb3c8  ldr x8,[x26, #0x10]
71000fb3cc  str x8,[x24, w21, UXTW #0x3]
71000fb3d0  add w21,w21,#0x1
71000fb3d4  ldr x26,[x26, #0x8]
71000fb3d8  cmp x26,x25
71000fb3dc  b.ne 0x71000fb3ac
71000fb3e0  b 0x71000fb3e8
71000fb3e4  mov w21,wzr
71000fb3e8  ldr x8,[x22]
71000fb3ec  ldrb w9,[x8, #0x162]
71000fb3f0  add x8,x8,x9, LSL #0x2
71000fb3f4  ldr w4,[x8, #0x180]
71000fb3f8  add x1,x19,#0x60
71000fb3fc  add x8,sp,#0x8
71000fb400  add x2,sp,#0x18
71000fb404  mov x0,x20
71000fb408  mov w3,w21
71000fb40c  bl 0x71000d9470
71000fb410  sub x0,x29,#0x60
71000fb414  add x1,sp,#0x8
71000fb418  bl 0x71000bcf30
71000fb41c  ldur w8,[x29, #-0x60]
71000fb420  cbz w8,0x71000fb468
71000fb424  mov w8,#0x10
71000fb428  add x0,x19,#0x220
71000fb42c  sub x1,x29,#0x60
71000fb430  strb w8,[x19, #0x130]
71000fb434  bl 0x71000bcf30
71000fb438  ldr x8,[x22]
71000fb43c  ldrb w9,[x8, #0x162]
71000fb440  cmp w9,#0x0
71000fb444  cset w9,eq
71000fb448  add x8,x8,w9, UXTW  #0x3
71000fb44c  ldr x0,[x8, #0x168]
71000fb450  bl 0x71000d8f90
71000fb454  adrp x9,0x71052a5000
71000fb458  ldr x9,[x9, #0x238]
71000fb45c  adrp x8,0x7104290000
71000fb460  add x8,x8,#0xd05
71000fb464  b 0x71000fb478
71000fb468  adrp x9,0x71052a5000
71000fb46c  ldr x9,[x9, #0x318]
71000fb470  adrp x8,0x71043ef000
71000fb474  add x8,x8,#0xaa6
71000fb478  mov w0,#0x5
71000fb47c  stp x9,xzr,[x19, #0x30]
71000fb480  b 0x71000fb27c
