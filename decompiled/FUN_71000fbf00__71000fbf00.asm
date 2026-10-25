// addr:      71000fbf00
// offset:    0xfbf00
// name:      FUN_71000fbf00
// mangled:   
// size:      520

71000fbf00  sub sp,sp,#0x40
71000fbf04  str x21,[sp, #0x10]
71000fbf08  stp x20,x19,[sp, #0x20]
71000fbf0c  stp x29,x30,[sp, #0x30]
71000fbf10  add x29,sp,#0x30
71000fbf14  adrp x21,0x71052a5000
71000fbf18  ldr x21,[x21, #0x80]
71000fbf1c  mov x19,x0
71000fbf20  ldr x0,[x21]
71000fbf24  bl 0x7100146ba0
71000fbf28  sub w8,w0,#0x5
71000fbf2c  cmp w8,#0x3
71000fbf30  b.hi 0x71000fbf58
71000fbf34  adrp x9,0x7104496000
71000fbf38  add x9,x9,#0x36c
71000fbf3c  ldrsw x8,[x9, x8, LSL #0x2]
71000fbf40  add x8,x8,x9
71000fbf44  br x8
71000fbf48  mov w8,#0x1
71000fbf4c  orr w9,wzr,#0x3
71000fbf50  mov w10,#0xc406
71000fbf54  b 0x71000fc018
71000fbf58  ldr x8,[x21]
71000fbf5c  str wzr,[sp, #0x18]
71000fbf60  ldrb w9,[x8, #0x162]
71000fbf64  cmp w9,#0x0
71000fbf68  cset w9,eq
71000fbf6c  add x8,x8,w9, UXTW  #0x3
71000fbf70  ldr x0,[x8, #0x168]
71000fbf74  add x1,sp,#0x18
71000fbf78  bl 0x71000dc3a0
71000fbf7c  tbz w0,#0x0,0x71000fc094
71000fbf80  add x20,x19,#0x64
71000fbf84  mov x0,sp
71000fbf88  mov x1,x20
71000fbf8c  bl 0x71000bce50
71000fbf90  ldr w8,[sp]
71000fbf94  cbz w8,0x71000fc09c
71000fbf98  mov w8,#0x12
71000fbf9c  mov x0,sp
71000fbfa0  mov x1,x20
71000fbfa4  strb w8,[x19, #0x130]
71000fbfa8  bl 0x71000bce50
71000fbfac  add x0,x19,#0x220
71000fbfb0  mov x1,sp
71000fbfb4  bl 0x71000bcf30
71000fbfb8  ldr x8,[x21]
71000fbfbc  ldrb w9,[x8, #0x162]
71000fbfc0  cmp w9,#0x0
71000fbfc4  cset w9,eq
71000fbfc8  add x8,x8,w9, UXTW  #0x3
71000fbfcc  ldr x0,[x8, #0x168]
71000fbfd0  bl 0x71000d8f90
71000fbfd4  adrp x9,0x71052a5000
71000fbfd8  ldr x9,[x9, #0x238]
71000fbfdc  mov w0,#0x5
71000fbfe0  adrp x8,0x7104290000
71000fbfe4  add x8,x8,#0xd05
71000fbfe8  b 0x71000fc100
71000fbfec  mov w8,#0x1
71000fbff0  orr w9,wzr,#0x3
71000fbff4  mov w10,#0xa471
71000fbff8  b 0x71000fc018
71000fbffc  mov w8,#0x1
71000fc000  orr w9,wzr,#0x3
71000fc004  mov w10,#0xc420
71000fc008  b 0x71000fc018
71000fc00c  mov w8,#0x1
71000fc010  orr w9,wzr,#0x3
71000fc014  mov w10,#0xc421
71000fc018  strb w8,[x19, #0xfa]
71000fc01c  mov x8,sp
71000fc020  orr x20,x8,#0x4
71000fc024  mov x0,x20
71000fc028  strb w9,[x19, #0x130]
71000fc02c  str w10,[sp]
71000fc030  bl 0x71039c0a80
71000fc034  add x1,sp,#0x18
71000fc038  mov x0,x20
71000fc03c  str wzr,[sp, #0x18]
71000fc040  bl 0x71039c0a90
71000fc044  add x0,x19,#0x220
71000fc048  mov x1,sp
71000fc04c  bl 0x71000bcf30
71000fc050  ldr x8,[x21]
71000fc054  ldr x0,[x8, #0x8]
71000fc058  ldr x8,[x0]
71000fc05c  ldr x8,[x8, #0x28]
71000fc060  blr x8
71000fc064  adrp x8,0x71052a5000
71000fc068  ldr x8,[x8, #0x240]
71000fc06c  mov x0,xzr
71000fc070  stp x8,xzr,[x19, #0x30]
71000fc074  adrp x8,0x71043ac000
71000fc078  add x8,x8,#0x982
71000fc07c  str x8,[x19, #0x40]
71000fc080  ldp x29,x30,[sp, #0x30]
71000fc084  ldr x21,[sp, #0x10]
71000fc088  ldp x20,x19,[sp, #0x20]
71000fc08c  add sp,sp,#0x40
71000fc090  ret
71000fc094  mov w0,#0x5
71000fc098  b 0x71000fc080
71000fc09c  ldr w1,[sp, #0x18]
71000fc0a0  str w1,[x19, #0xf0]
71000fc0a4  ldr x0,[x21]
71000fc0a8  bl 0x7100149290
71000fc0ac  ldrb w8,[x19, #0x266]
71000fc0b0  ldr x0,[x21]
71000fc0b4  cmp w8,#0x0
71000fc0b8  mov w8,#0x1
71000fc0bc  cinc w1,w8,eq
71000fc0c0  bl 0x7100149250
71000fc0c4  adrp x8,0x71052a4000
71000fc0c8  ldr x8,[x8, #0xc70]
71000fc0cc  ldr x20,[x8]
71000fc0d0  bl 0x71000bb680
71000fc0d4  mov x8,x0
71000fc0d8  mov x0,xzr
71000fc0dc  ldr x8,[x8]
71000fc0e0  ldr x10,[x20, #0x30]
71000fc0e4  mov w9,#0x2710
71000fc0e8  madd x9,x8,x9,x10
71000fc0ec  adrp x8,0x710435a000
71000fc0f0  add x8,x8,#0x5e3
71000fc0f4  str x9,[x19, #0x210]
71000fc0f8  adrp x9,0x71052a5000
71000fc0fc  ldr x9,[x9, #0x328]
71000fc100  stp x9,xzr,[x19, #0x30]
71000fc104  b 0x71000fc07c
