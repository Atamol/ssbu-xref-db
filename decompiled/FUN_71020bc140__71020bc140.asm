// addr:      71020bc140
// offset:    0x20bc140
// name:      FUN_71020bc140
// mangled:   
// size:      196

71020bc140  stp x22,x21,[sp, #-0x30]!
71020bc144  stp x20,x19,[sp, #0x10]
71020bc148  stp x29,x30,[sp, #0x20]
71020bc14c  add x29,sp,#0x20
71020bc150  ldr x8,[x1, #0x10]
71020bc154  adrp x9,0x71020bc000
71020bc158  add x9,x9,#0x20
71020bc15c  mov w22,#0x2
71020bc160  str x9,[x8]
71020bc164  str w22,[x8, #0x8]
71020bc168  ldr x8,[x1, #0x10]
71020bc16c  mov x19,x1
71020bc170  adrp x21,0x710430c000
71020bc174  add x21,x21,#0x66a
71020bc178  mov x20,x0
71020bc17c  mov x0,x19
71020bc180  mov x2,x21
71020bc184  add x9,x8,#0x10
71020bc188  str x9,[x1, #0x10]
71020bc18c  sub x1,x8,#0x10
71020bc190  bl 0x71038f5390
71020bc194  ldrsw x8,[x20, #0x8]
71020bc198  ldr x9,[x19, #0x10]
71020bc19c  str x8,[x9]
71020bc1a0  mov w8,#0x13
71020bc1a4  str w8,[x9, #0x8]
71020bc1a8  ldr x8,[x19, #0x10]
71020bc1ac  add x9,x8,#0x10
71020bc1b0  sub x1,x8,#0x10
71020bc1b4  adrp x2,0x7104292000
71020bc1b8  add x2,x2,#0xdc3
71020bc1bc  mov x0,x19
71020bc1c0  str x9,[x19, #0x10]
71020bc1c4  bl 0x71038f5390
71020bc1c8  ldr x8,[x19, #0x10]
71020bc1cc  adrp x9,0x71020bc000
71020bc1d0  add x9,x9,#0xa0
71020bc1d4  str x9,[x8]
71020bc1d8  str w22,[x8, #0x8]
71020bc1dc  ldr x8,[x19, #0x10]
71020bc1e0  add x9,x8,#0x10
71020bc1e4  str x9,[x19, #0x10]
71020bc1e8  mov x0,x19
71020bc1ec  ldp x29,x30,[sp, #0x20]
71020bc1f0  sub x1,x8,#0x10
71020bc1f4  ldp x20,x19,[sp, #0x10]
71020bc1f8  mov x2,x21
71020bc1fc  ldp x22,x21,[sp], #0x30
71020bc200  b 0x71038f5390
