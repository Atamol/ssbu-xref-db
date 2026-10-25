// addr:      71000f9e90
// offset:    0xf9e90
// name:      FUN_71000f9e90
// mangled:   
// size:      812

71000f9e90  sub sp,sp,#0x60
71000f9e94  stp x22,x21,[sp, #0x30]
71000f9e98  stp x20,x19,[sp, #0x40]
71000f9e9c  stp x29,x30,[sp, #0x50]
71000f9ea0  add x29,sp,#0x50
71000f9ea4  adrp x21,0x71052a5000
71000f9ea8  ldr x21,[x21, #0x80]
71000f9eac  mov x19,x0
71000f9eb0  ldr x0,[x21]
71000f9eb4  bl 0x7100146ba0
71000f9eb8  sub w8,w0,#0x5
71000f9ebc  cmp w8,#0x3
71000f9ec0  b.hi 0x71000f9ee8
71000f9ec4  adrp x9,0x7104496000
71000f9ec8  add x9,x9,#0x2c8
71000f9ecc  ldrsw x8,[x9, x8, LSL #0x2]
71000f9ed0  add x8,x8,x9
71000f9ed4  br x8
71000f9ed8  mov w8,#0x1
71000f9edc  orr w9,wzr,#0x3
71000f9ee0  mov w10,#0xc406
71000f9ee4  b 0x71000f9f9c
71000f9ee8  adrp x8,0x71052a4000
71000f9eec  ldr x8,[x8, #0xdf0]
71000f9ef0  ldr x0,[x8]
71000f9ef4  add x8,sp,#0x18
71000f9ef8  bl 0x7100192e90
71000f9efc  ldr w8,[sp, #0x18]
71000f9f00  cbnz w8,0x71000f9f14
71000f9f04  ldr x0,[x21]
71000f9f08  bl 0x7100146ba0
71000f9f0c  cmp w0,#0x4
71000f9f10  b.ne 0x71000fa018
71000f9f14  mov w8,#0x6c59
71000f9f18  str w8,[sp, #0x18]
71000f9f1c  add x8,sp,#0x18
71000f9f20  orr x20,x8,#0x4
71000f9f24  mov x0,x20
71000f9f28  bl 0x71039c0a80
71000f9f2c  add x1,sp,#0x8
71000f9f30  mov x0,x20
71000f9f34  str wzr,[sp, #0x8]
71000f9f38  bl 0x71039c0a90
71000f9f3c  add x0,x19,#0x220
71000f9f40  add x1,sp,#0x18
71000f9f44  bl 0x71000bcf30
71000f9f48  adrp x8,0x71052a5000
71000f9f4c  ldr x8,[x8, #0x238]
71000f9f50  mov w9,#0x4
71000f9f54  strb w9,[x19, #0x130]
71000f9f58  adrp x9,0x7104290000
71000f9f5c  add x9,x9,#0xd05
71000f9f60  stp x8,xzr,[x19, #0x30]
71000f9f64  str x9,[x19, #0x40]
71000f9f68  mov w0,#0x5
71000f9f6c  b 0x71000fa004
71000f9f70  mov w8,#0x1
71000f9f74  orr w9,wzr,#0x3
71000f9f78  mov w10,#0xa471
71000f9f7c  b 0x71000f9f9c
71000f9f80  mov w8,#0x1
71000f9f84  orr w9,wzr,#0x3
71000f9f88  mov w10,#0xc420
71000f9f8c  b 0x71000f9f9c
71000f9f90  mov w8,#0x1
71000f9f94  orr w9,wzr,#0x3
71000f9f98  mov w10,#0xc421
71000f9f9c  strb w8,[x19, #0xfa]
71000f9fa0  add x8,sp,#0x18
71000f9fa4  orr x20,x8,#0x4
71000f9fa8  mov x0,x20
71000f9fac  strb w9,[x19, #0x130]
71000f9fb0  str w10,[sp, #0x18]
71000f9fb4  bl 0x71039c0a80
71000f9fb8  add x1,sp,#0x8
71000f9fbc  mov x0,x20
71000f9fc0  str wzr,[sp, #0x8]
71000f9fc4  bl 0x71039c0a90
71000f9fc8  add x0,x19,#0x220
71000f9fcc  add x1,sp,#0x18
71000f9fd0  bl 0x71000bcf30
71000f9fd4  ldr x8,[x21]
71000f9fd8  ldr x0,[x8, #0x8]
71000f9fdc  ldr x8,[x0]
71000f9fe0  ldr x8,[x8, #0x28]
71000f9fe4  blr x8
71000f9fe8  adrp x8,0x71052a5000
71000f9fec  ldr x8,[x8, #0x240]
71000f9ff0  mov x0,xzr
71000f9ff4  stp x8,xzr,[x19, #0x30]
71000f9ff8  adrp x8,0x71043ac000
71000f9ffc  add x8,x8,#0x982
71000fa000  str x8,[x19, #0x40]
71000fa004  ldp x29,x30,[sp, #0x50]
71000fa008  ldp x20,x19,[sp, #0x40]
71000fa00c  ldp x22,x21,[sp, #0x30]
71000fa010  add sp,sp,#0x60
71000fa014  ret
71000fa018  ldrb w8,[x19, #0xfb]
71000fa01c  cbz w8,0x71000fa03c
71000fa020  add x1,x19,#0x100
71000fa024  add x0,x19,#0x220
71000fa028  bl 0x71000bcf30
71000fa02c  adrp x8,0x71052a5000
71000fa030  ldr x8,[x8, #0x238]
71000fa034  orr w9,wzr,#0x6
71000fa038  b 0x71000f9f54
71000fa03c  ldr x22,[x21]
71000fa040  ldr x0,[x22, #0xc8]
71000fa044  ldr w1,[x19, #0x90]
71000fa048  ldr x2,[x19, #0xa0]
71000fa04c  add x8,sp,#0x18
71000fa050  mov w3,#0x1
71000fa054  bl 0x710014e380
71000fa058  mov w8,#0x4c0d
71000fa05c  str w8,[sp, #0x8]
71000fa060  add x8,sp,#0x8
71000fa064  orr x20,x8,#0x4
71000fa068  mov x0,x20
71000fa06c  bl 0x71039c0a80
71000fa070  add x1,sp,#0x28
71000fa074  mov x0,x20
71000fa078  str wzr,[sp, #0x28]
71000fa07c  bl 0x71039c0a90
71000fa080  ldr w8,[sp, #0x18]
71000fa084  ldr w9,[sp, #0x8]
71000fa088  cmp w8,w9
71000fa08c  b.eq 0x71000f9f68
71000fa090  mov x0,x19
71000fa094  bl 0x7100140e30
71000fa098  tbz w0,#0x0,0x71000fa118
71000fa09c  ldr w8,[sp, #0x18]
71000fa0a0  cbz w8,0x71000fa184
71000fa0a4  mov w8,#0x5
71000fa0a8  strb w8,[x19, #0x130]
71000fa0ac  add x8,sp,#0x8
71000fa0b0  orr x20,x8,#0x4
71000fa0b4  mov w9,#0x6c57
71000fa0b8  str w9,[sp, #0x8]
71000fa0bc  mov x0,x20
71000fa0c0  bl 0x71039c0a80
71000fa0c4  add x1,sp,#0x28
71000fa0c8  mov x0,x20
71000fa0cc  str wzr,[sp, #0x28]
71000fa0d0  bl 0x71039c0a90
71000fa0d4  add x0,x19,#0x220
71000fa0d8  add x1,sp,#0x8
71000fa0dc  bl 0x71000bcf30
71000fa0e0  ldr x8,[x21]
71000fa0e4  ldrb w9,[x8, #0x162]
71000fa0e8  cmp w9,#0x0
71000fa0ec  cset w9,eq
71000fa0f0  add x8,x8,w9, UXTW  #0x3
71000fa0f4  ldr x0,[x8, #0x168]
71000fa0f8  bl 0x71000d8f90
71000fa0fc  adrp x8,0x71052a5000
71000fa100  ldr x8,[x8, #0x238]
71000fa104  stp x8,xzr,[x19, #0x30]
71000fa108  adrp x8,0x7104290000
71000fa10c  add x8,x8,#0xd05
71000fa110  str x8,[x19, #0x40]
71000fa114  b 0x71000f9f68
71000fa118  ldr x0,[x22, #0xb8]
71000fa11c  ldr x1,[x22, #0xf0]
71000fa120  mov w2,#0x1
71000fa124  mov w20,#0x1
71000fa128  bl 0x7100150440
71000fa12c  ldr x0,[x22, #0xb8]
71000fa130  ldr x1,[x19, #0xa0]
71000fa134  mov w2,#0x1
71000fa138  bl 0x7100150440
71000fa13c  ldr x0,[x21]
71000fa140  mov w8,#0xa
71000fa144  adrp x9,0x71052a5000
71000fa148  strb w20,[x0, #0x15c]
71000fa14c  str w8,[x19, #0x98]
71000fa150  strb wzr,[x19, #0xf7]
71000fa154  ldrb w8,[x22, #0x162]
71000fa158  ldr x9,[x9, #0x2d0]
71000fa15c  add x8,x22,x8, LSL #0x2
71000fa160  ldr w8,[x8, #0x180]
71000fa164  adrp x10,0x7104339000
71000fa168  add x10,x10,#0x430
71000fa16c  stp x9,xzr,[x19, #0x30]
71000fa170  str x10,[x19, #0x40]
71000fa174  str w8,[x19, #0xf0]
71000fa178  orr w8,wzr,#0xc
71000fa17c  str w8,[x19, #0x230]
71000fa180  b 0x71000fa1b0
71000fa184  adrp x9,0x71052a5000
71000fa188  ldr x9,[x9, #0x2d8]
71000fa18c  orr w8,wzr,#0x3
71000fa190  str w8,[x19, #0x98]
71000fa194  adrp x8,0x71043ce000
71000fa198  add x8,x8,#0x653
71000fa19c  str x8,[x19, #0x40]
71000fa1a0  mov w8,#0x9
71000fa1a4  str w8,[x19, #0x230]
71000fa1a8  stp x9,xzr,[x19, #0x30]
71000fa1ac  ldr x0,[x21]
71000fa1b0  mov w1,#0x2
71000fa1b4  bl 0x7100149240
71000fa1b8  b 0x71000f9f68
