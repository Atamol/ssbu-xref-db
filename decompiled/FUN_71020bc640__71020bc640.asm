// addr:      71020bc640
// offset:    0x20bc640
// name:      FUN_71020bc640
// mangled:   
// size:      136

71020bc640  stp x20,x19,[sp, #-0x20]!
71020bc644  stp x29,x30,[sp, #0x10]
71020bc648  add x29,sp,#0x10
71020bc64c  ldr x8,[x1, #0x10]
71020bc650  adrp x9,0x71020bc000
71020bc654  add x9,x9,#0x20
71020bc658  str x9,[x8]
71020bc65c  mov w9,#0x2
71020bc660  str w9,[x8, #0x8]
71020bc664  ldr x8,[x1, #0x10]
71020bc668  mov x19,x1
71020bc66c  mov x20,x0
71020bc670  adrp x2,0x710430c000
71020bc674  add x2,x2,#0x66a
71020bc678  mov x0,x19
71020bc67c  add x9,x8,#0x10
71020bc680  str x9,[x1, #0x10]
71020bc684  sub x1,x8,#0x10
71020bc688  bl 0x71038f5390
71020bc68c  ldrsw x8,[x20, #0x8]
71020bc690  ldr x9,[x19, #0x10]
71020bc694  mov w10,#0x13
71020bc698  str x8,[x9]
71020bc69c  str w10,[x9, #0x8]
71020bc6a0  ldr x8,[x19, #0x10]
71020bc6a4  add x9,x8,#0x10
71020bc6a8  str x9,[x19, #0x10]
71020bc6ac  sub x1,x8,#0x10
71020bc6b0  ldp x29,x30,[sp, #0x10]
71020bc6b4  adrp x2,0x7104292000
71020bc6b8  add x2,x2,#0xdc3
71020bc6bc  mov x0,x19
71020bc6c0  ldp x20,x19,[sp], #0x20
71020bc6c4  b 0x71038f5390
