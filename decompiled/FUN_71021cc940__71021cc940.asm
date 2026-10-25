// addr:      71021cc940
// offset:    0x21cc940
// name:      FUN_71021cc940
// mangled:   
// size:      200

71021cc940  str x21,[sp, #-0x30]!
71021cc944  stp x20,x19,[sp, #0x10]
71021cc948  stp x29,x30,[sp, #0x20]
71021cc94c  add x29,sp,#0x20
71021cc950  and w2,w2,#0x1
71021cc954  mov x19,x1
71021cc958  mov x20,x0
71021cc95c  bl 0x7101ff91a0
71021cc960  ldr x8,[x19, #0x10]
71021cc964  adrp x9,0x71021cc000
71021cc968  add x9,x9,#0x880
71021cc96c  str x9,[x8]
71021cc970  mov w9,#0x2
71021cc974  str w9,[x8, #0x8]
71021cc978  ldr x8,[x19, #0x10]
71021cc97c  add x9,x8,#0x10
71021cc980  sub x1,x8,#0x10
71021cc984  adrp x2,0x710430c000
71021cc988  add x2,x2,#0x66a
71021cc98c  mov x0,x19
71021cc990  str x9,[x19, #0x10]
71021cc994  bl 0x71038f5390
71021cc998  ldr w8,[x20, #0x2c]
71021cc99c  ldr x9,[x19, #0x10]
71021cc9a0  orr w21,wzr,#0x3
71021cc9a4  str w8,[x9]
71021cc9a8  str w21,[x9, #0x8]
71021cc9ac  ldr x8,[x19, #0x10]
71021cc9b0  add x9,x8,#0x10
71021cc9b4  sub x1,x8,#0x10
71021cc9b8  adrp x2,0x710444d000
71021cc9bc  add x2,x2,#0xeb5
71021cc9c0  mov x0,x19
71021cc9c4  str x9,[x19, #0x10]
71021cc9c8  bl 0x71038f5390
71021cc9cc  ldr w8,[x20, #0x30]
71021cc9d0  ldr x9,[x19, #0x10]
71021cc9d4  str w8,[x9]
71021cc9d8  str w21,[x9, #0x8]
71021cc9dc  ldr x8,[x19, #0x10]
71021cc9e0  add x9,x8,#0x10
71021cc9e4  str x9,[x19, #0x10]
71021cc9e8  mov x0,x19
71021cc9ec  sub x1,x8,#0x10
71021cc9f0  ldp x29,x30,[sp, #0x20]
71021cc9f4  adrp x2,0x7104354000
71021cc9f8  add x2,x2,#0x78c
71021cc9fc  ldp x20,x19,[sp, #0x10]
71021cca00  ldr x21,[sp], #0x30
71021cca04  b 0x71038f5390
