// addr:      71020bf290
// offset:    0x20bf290
// name:      FUN_71020bf290
// mangled:   
// size:      296

71020bf290  str x21,[sp, #-0x30]!
71020bf294  stp x20,x19,[sp, #0x10]
71020bf298  stp x29,x30,[sp, #0x20]
71020bf29c  add x29,sp,#0x20
71020bf2a0  ldr x8,[x1, #0x10]
71020bf2a4  adrp x9,0x71020bf000
71020bf2a8  add x9,x9,#0x3c0
71020bf2ac  str x9,[x8]
71020bf2b0  mov w9,#0x2
71020bf2b4  str w9,[x8, #0x8]
71020bf2b8  ldr x8,[x1, #0x10]
71020bf2bc  mov x19,x1
71020bf2c0  mov x20,x0
71020bf2c4  adrp x2,0x710430c000
71020bf2c8  add x2,x2,#0x66a
71020bf2cc  mov x0,x19
71020bf2d0  add x9,x8,#0x10
71020bf2d4  str x9,[x1, #0x10]
71020bf2d8  sub x1,x8,#0x10
71020bf2dc  bl 0x71038f5390
71020bf2e0  ldrh w8,[x20]
71020bf2e4  ldr x9,[x19, #0x10]
71020bf2e8  str x8,[x9]
71020bf2ec  mov w8,#0x13
71020bf2f0  str w8,[x9, #0x8]
71020bf2f4  ldr x8,[x19, #0x10]
71020bf2f8  add x9,x8,#0x10
71020bf2fc  sub x1,x8,#0x10
71020bf300  adrp x2,0x71042c6000
71020bf304  add x2,x2,#0x252
71020bf308  mov x0,x19
71020bf30c  str x9,[x19, #0x10]
71020bf310  bl 0x71038f5390
71020bf314  ldr w8,[x20, #0x4]
71020bf318  ldr x9,[x19, #0x10]
71020bf31c  orr w21,wzr,#0x3
71020bf320  str w8,[x9]
71020bf324  str w21,[x9, #0x8]
71020bf328  ldr x8,[x19, #0x10]
71020bf32c  add x9,x8,#0x10
71020bf330  sub x1,x8,#0x10
71020bf334  adrp x2,0x7104319000
71020bf338  add x2,x2,#0xf0f
71020bf33c  mov x0,x19
71020bf340  str x9,[x19, #0x10]
71020bf344  bl 0x71038f5390
71020bf348  ldr w8,[x20, #0x8]
71020bf34c  ldr x9,[x19, #0x10]
71020bf350  str w8,[x9]
71020bf354  str w21,[x9, #0x8]
71020bf358  ldr x8,[x19, #0x10]
71020bf35c  add x9,x8,#0x10
71020bf360  sub x1,x8,#0x10
71020bf364  adrp x2,0x7104402000
71020bf368  add x2,x2,#0x859
71020bf36c  mov x0,x19
71020bf370  str x9,[x19, #0x10]
71020bf374  bl 0x71038f5390
71020bf378  ldrb w8,[x20, #0xc]
71020bf37c  ldr x9,[x19, #0x10]
71020bf380  mov w10,#0x1
71020bf384  str w8,[x9]
71020bf388  str w10,[x9, #0x8]
71020bf38c  ldr x8,[x19, #0x10]
71020bf390  add x9,x8,#0x10
71020bf394  str x9,[x19, #0x10]
71020bf398  mov x0,x19
71020bf39c  ldp x29,x30,[sp, #0x20]
71020bf3a0  sub x1,x8,#0x10
71020bf3a4  ldp x20,x19,[sp, #0x10]
71020bf3a8  adrp x2,0x710432b000
71020bf3ac  add x2,x2,#0x1d1
71020bf3b0  ldr x21,[sp], #0x30
71020bf3b4  b 0x71038f5390
