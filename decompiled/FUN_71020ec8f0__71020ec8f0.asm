// addr:      71020ec8f0
// offset:    0x20ec8f0
// name:      FUN_71020ec8f0
// mangled:   
// size:      88

71020ec8f0  str x19,[sp, #-0x20]!
71020ec8f4  stp x29,x30,[sp, #0x10]
71020ec8f8  add x29,sp,#0x10
71020ec8fc  and w2,w2,#0x1
71020ec900  mov x19,x1
71020ec904  bl 0x71020d4810
71020ec908  ldr x8,[x19, #0x10]
71020ec90c  adrp x9,0x71020ec000
71020ec910  add x9,x9,#0x850
71020ec914  mov w10,#0x2
71020ec918  str x9,[x8]
71020ec91c  str w10,[x8, #0x8]
71020ec920  ldr x8,[x19, #0x10]
71020ec924  add x9,x8,#0x10
71020ec928  str x9,[x19, #0x10]
71020ec92c  ldp x29,x30,[sp, #0x10]
71020ec930  sub x1,x8,#0x10
71020ec934  adrp x2,0x710430c000
71020ec938  add x2,x2,#0x66a
71020ec93c  mov x0,x19
71020ec940  ldr x19,[sp], #0x20
71020ec944  b 0x71038f5390
