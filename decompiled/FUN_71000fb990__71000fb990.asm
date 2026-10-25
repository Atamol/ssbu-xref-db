// addr:      71000fb990
// offset:    0xfb990
// name:      FUN_71000fb990
// mangled:   
// size:      584

71000fb990  sub sp,sp,#0x50
71000fb994  stp x22,x21,[sp, #0x20]
71000fb998  stp x20,x19,[sp, #0x30]
71000fb99c  stp x29,x30,[sp, #0x40]
71000fb9a0  add x29,sp,#0x40
71000fb9a4  adrp x22,0x71052a5000
71000fb9a8  ldr x22,[x22, #0x80]
71000fb9ac  mov x19,x0
71000fb9b0  ldr x0,[x22]
71000fb9b4  bl 0x7100146ba0
71000fb9b8  sub w8,w0,#0x5
71000fb9bc  cmp w8,#0x3
71000fb9c0  b.hi 0x71000fb9e8
71000fb9c4  adrp x9,0x7104496000
71000fb9c8  add x9,x9,#0x34c
71000fb9cc  ldrsw x8,[x9, x8, LSL #0x2]
71000fb9d0  add x8,x8,x9
71000fb9d4  br x8
71000fb9d8  mov w8,#0x1
71000fb9dc  orr w9,wzr,#0x3
71000fb9e0  mov w10,#0xc406
71000fb9e4  b 0x71000fbab8
71000fb9e8  ldr x8,[x22]
71000fb9ec  str wzr,[sp, #0x18]
71000fb9f0  ldrb w9,[x8, #0x162]
71000fb9f4  cmp w9,#0x0
71000fb9f8  cset w9,eq
71000fb9fc  add x8,x8,w9, UXTW  #0x3
71000fba00  ldr x20,[x8, #0x168]
71000fba04  add x2,x19,#0xf5
71000fba08  add x1,sp,#0x18
71000fba0c  mov x0,x20
71000fba10  bl 0x71000d9620
71000fba14  tbz w0,#0x0,0x71000fbb34
71000fba18  mov x0,x20
71000fba1c  bl 0x71000d8f90
71000fba20  add x21,x19,#0x64
71000fba24  add x0,sp,#0x8
71000fba28  mov x1,x21
71000fba2c  bl 0x71000bce50
71000fba30  ldr w8,[sp, #0x8]
71000fba34  cbz w8,0x71000fbb3c
71000fba38  mov w8,#0x10
71000fba3c  add x0,sp,#0x8
71000fba40  mov x1,x21
71000fba44  strb w8,[x19, #0x130]
71000fba48  bl 0x71000bce50
71000fba4c  add x0,x19,#0x220
71000fba50  add x1,sp,#0x8
71000fba54  bl 0x71000bcf30
71000fba58  ldr x8,[x22]
71000fba5c  ldrb w9,[x8, #0x162]
71000fba60  cmp w9,#0x0
71000fba64  cset w9,eq
71000fba68  add x8,x8,w9, UXTW  #0x3
71000fba6c  ldr x0,[x8, #0x168]
71000fba70  bl 0x71000d8f90
71000fba74  adrp x9,0x71052a5000
71000fba78  ldr x9,[x9, #0x238]
71000fba7c  mov w0,#0x5
71000fba80  adrp x8,0x7104290000
71000fba84  add x8,x8,#0xd05
71000fba88  b 0x71000fbbd0
71000fba8c  mov w8,#0x1
71000fba90  orr w9,wzr,#0x3
71000fba94  mov w10,#0xa471
71000fba98  b 0x71000fbab8
71000fba9c  mov w8,#0x1
71000fbaa0  orr w9,wzr,#0x3
71000fbaa4  mov w10,#0xc420
71000fbaa8  b 0x71000fbab8
71000fbaac  mov w8,#0x1
71000fbab0  orr w9,wzr,#0x3
71000fbab4  mov w10,#0xc421
71000fbab8  strb w8,[x19, #0xfa]
71000fbabc  add x8,sp,#0x8
71000fbac0  orr x20,x8,#0x4
71000fbac4  mov x0,x20
71000fbac8  strb w9,[x19, #0x130]
71000fbacc  str w10,[sp, #0x8]
71000fbad0  bl 0x71039c0a80
71000fbad4  add x1,sp,#0x18
71000fbad8  mov x0,x20
71000fbadc  str wzr,[sp, #0x18]
71000fbae0  bl 0x71039c0a90
71000fbae4  add x0,x19,#0x220
71000fbae8  add x1,sp,#0x8
71000fbaec  bl 0x71000bcf30
71000fbaf0  ldr x8,[x22]
71000fbaf4  ldr x0,[x8, #0x8]
71000fbaf8  ldr x8,[x0]
71000fbafc  ldr x8,[x8, #0x28]
71000fbb00  blr x8
71000fbb04  adrp x8,0x71052a5000
71000fbb08  ldr x8,[x8, #0x240]
71000fbb0c  mov x0,xzr
71000fbb10  stp x8,xzr,[x19, #0x30]
71000fbb14  adrp x8,0x71043ac000
71000fbb18  add x8,x8,#0x982
71000fbb1c  str x8,[x19, #0x40]
71000fbb20  ldp x29,x30,[sp, #0x40]
71000fbb24  ldp x20,x19,[sp, #0x30]
71000fbb28  ldp x22,x21,[sp, #0x20]
71000fbb2c  add sp,sp,#0x50
71000fbb30  ret
71000fbb34  mov w0,#0x5
71000fbb38  b 0x71000fbb20
71000fbb3c  ldr w1,[sp, #0x18]
71000fbb40  str w1,[x19, #0xf0]
71000fbb44  ldr x0,[x22]
71000fbb48  bl 0x7100149290
71000fbb4c  ldrb w8,[x19, #0xf5]
71000fbb50  cbz w8,0x71000fbb70
71000fbb54  ldrb w8,[x19, #0x266]
71000fbb58  ldr x0,[x22]
71000fbb5c  cmp w8,#0x0
71000fbb60  mov w8,#0x1
71000fbb64  cinc w1,w8,eq
71000fbb68  bl 0x7100149250
71000fbb6c  b 0x71000fbb94
71000fbb70  mov x0,x20
71000fbb74  bl 0x71000eb6b0
71000fbb78  tbz w0,#0x0,0x71000fbb94
71000fbb7c  mov x0,x20
71000fbb80  bl 0x71000eb6c0
71000fbb84  ldr x8,[x22]
71000fbb88  mov w9,#0x1
71000fbb8c  str w0,[x8, #0x214]
71000fbb90  strb w9,[x8, #0x218]
71000fbb94  adrp x8,0x71052a4000
71000fbb98  ldr x8,[x8, #0xc70]
71000fbb9c  ldr x20,[x8]
71000fbba0  bl 0x71000bb680
71000fbba4  mov x8,x0
71000fbba8  mov x0,xzr
71000fbbac  ldr x8,[x8]
71000fbbb0  ldr x10,[x20, #0x30]
71000fbbb4  mov w9,#0x2710
71000fbbb8  madd x9,x8,x9,x10
71000fbbbc  adrp x8,0x710435a000
71000fbbc0  add x8,x8,#0x5e3
71000fbbc4  str x9,[x19, #0x210]
71000fbbc8  adrp x9,0x71052a5000
71000fbbcc  ldr x9,[x9, #0x328]
71000fbbd0  stp x9,xzr,[x19, #0x30]
71000fbbd4  b 0x71000fbb1c
