// addr:      71002aa1f0
// offset:    0x2aa1f0
// name:      FUN_71002aa1f0
// mangled:   
// size:      240

71002aa1f0  stp x20,x19,[sp, #-0x20]!
71002aa1f4  stp x29,x30,[sp, #0x10]
71002aa1f8  add x29,sp,#0x10
71002aa1fc  adrp x8,0x71052a8000
71002aa200  adrp x9,0x71052a8000
71002aa204  ldr x8,[x8, #0x8f0]
71002aa208  ldr x9,[x9, #0x750]
71002aa20c  str xzr,[x0, #0x10]
71002aa210  add x8,x8,#0x10
71002aa214  add x9,x9,#0x10
71002aa218  mov x19,x0
71002aa21c  stp x8,x9,[x0]
71002aa220  mov w0,#0x4
71002aa224  bl 0x71001b1820
71002aa228  adrp x8,0x71052a8000
71002aa22c  ldr x8,[x8, #0x758]
71002aa230  mov x20,x0
71002aa234  mov w0,#0x20
71002aa238  add x8,x8,#0x10
71002aa23c  str x8,[x19, #0x18]
71002aa240  bl 0x71001af850
71002aa244  cbz x0,0x71002aa280
71002aa248  adrp x8,0x71052a6000
71002aa24c  ldr x8,[x8, #0xab0]
71002aa250  add x8,x8,#0x10
71002aa254  str x8,[x0]
71002aa258  adrp x8,0x71052a8000
71002aa25c  ldr x8,[x8, #0x8f8]
71002aa260  add x9,x0,#0x8
71002aa264  mov w10,#0x1
71002aa268  stlr w10,[x9]
71002aa26c  add x9,x0,#0xc
71002aa270  stlr w10,[x9]
71002aa274  str x20,[x0, #0x10]
71002aa278  add x8,x8,#0x10
71002aa27c  str x8,[x0]
71002aa280  str x0,[x19, #0x20]
71002aa284  mov w0,#0x8
71002aa288  bl 0x71001af850
71002aa28c  cbz x0,0x71002aa2a0
71002aa290  adrp x8,0x71052a8000
71002aa294  ldr x8,[x8, #0x900]
71002aa298  add x8,x8,#0x10
71002aa29c  str x8,[x0]
71002aa2a0  str x0,[x19, #0x28]
71002aa2a4  mov w8,#0x10
71002aa2a8  adrp x0,0x7104f16000
71002aa2ac  add x0,x0,#0xeff
71002aa2b0  str w8,[x19, #0x30]
71002aa2b4  str xzr,[x19, #0x48]
71002aa2b8  stp xzr,xzr,[x19, #0x38]
71002aa2bc  str wzr,[x19, #0x50]
71002aa2c0  bl 0x71039c0530
71002aa2c4  bl 0x71001d5a90
71002aa2c8  ldr x8,[x19, #0x20]
71002aa2cc  ldr x8,[x8, #0x10]
71002aa2d0  str wzr,[x8]
71002aa2d4  ldp x29,x30,[sp, #0x10]
71002aa2d8  ldp x20,x19,[sp], #0x20
71002aa2dc  ret
