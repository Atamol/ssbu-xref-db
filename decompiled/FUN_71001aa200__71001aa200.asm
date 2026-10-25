// addr:      71001aa200
// offset:    0x1aa200
// name:      FUN_71001aa200
// mangled:   
// size:      296

71001aa200  sub sp,sp,#0x60
71001aa204  str x23,[sp, #0x20]
71001aa208  stp x22,x21,[sp, #0x30]
71001aa20c  stp x20,x19,[sp, #0x40]
71001aa210  stp x29,x30,[sp, #0x50]
71001aa214  add x29,sp,#0x50
71001aa218  adrp x22,0x71052a4000
71001aa21c  ldr x22,[x22, #0xdf0]
71001aa220  mov x19,x0
71001aa224  ldr x0,[x22]
71001aa228  bl 0x7100193560
71001aa22c  and w8,w0,#0xff
71001aa230  cmp w8,#0x1f
71001aa234  b.hi 0x71001aa2ec
71001aa238  orr x23,xzr,#0x80000000000
71001aa23c  str x23,[sp, #0x10]
71001aa240  str wzr,[sp, #0x18]
71001aa244  ldr x8,[x19]
71001aa248  ldr x8,[x8, #0x28]
71001aa24c  mov w20,w0
71001aa250  add x1,sp,#0x10
71001aa254  mov x0,x19
71001aa258  blr x8
71001aa25c  ldr x0,[x22]
71001aa260  bl 0x7100193a30
71001aa264  add x1,sp,#0x10
71001aa268  mov x21,x0
71001aa26c  str x23,[sp, #0x10]
71001aa270  str wzr,[sp, #0x18]
71001aa274  bl 0x71001ac5b0
71001aa278  ldrh w8,[x19, #0x58]
71001aa27c  ldr x1,[x19, #0x68]
71001aa280  add x4,x19,#0x7c
71001aa284  ldr w3,[x19, #0x78]
71001aa288  mov x0,x21
71001aa28c  mov w5,w20
71001aa290  ldr x6,[x19, #0x80]
71001aa294  mul w2,w8,w8
71001aa298  add x8,sp,#0x10
71001aa29c  bl 0x71001abc50
71001aa2a0  ldr w8,[sp, #0x10]
71001aa2a4  cbnz w8,0x71001aa2ec
71001aa2a8  ldr w8,[x19, #0x5c]
71001aa2ac  str w8,[x21, #0x38]
71001aa2b0  ldr w8,[x19, #0x60]
71001aa2b4  mov x1,sp
71001aa2b8  mov x0,x21
71001aa2bc  str w8,[x21, #0x34]
71001aa2c0  str wzr,[x19, #0x78]
71001aa2c4  str x23,[sp]
71001aa2c8  str wzr,[sp, #0x8]
71001aa2cc  bl 0x71001ac5b0
71001aa2d0  ldr x0,[x22]
71001aa2d4  bl 0x7100193580
71001aa2d8  bl 0x710019aa90
71001aa2dc  tbz w0,#0x0,0x71001aa308
71001aa2e0  ldr w8,[x19, #0x60]
71001aa2e4  add w8,w8,#0x1
71001aa2e8  str w8,[x19, #0x60]
71001aa2ec  mov w0,#0x1
71001aa2f0  ldp x29,x30,[sp, #0x50]
71001aa2f4  ldr x23,[sp, #0x20]
71001aa2f8  ldp x20,x19,[sp, #0x40]
71001aa2fc  ldp x22,x21,[sp, #0x30]
71001aa300  add sp,sp,#0x60
71001aa304  ret
71001aa308  adrp x8,0x71052a6000
71001aa30c  ldr x8,[x8, #0x7f0]
71001aa310  adrp x9,0x71043ef000
71001aa314  add x9,x9,#0xe1e
71001aa318  str x9,[x19, #0x40]
71001aa31c  mov w0,#0x5
71001aa320  stp x8,xzr,[x19, #0x30]
71001aa324  b 0x71001aa2f0
