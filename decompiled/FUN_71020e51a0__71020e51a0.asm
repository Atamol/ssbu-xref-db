// addr:      71020e51a0
// offset:    0x20e51a0
// name:      FUN_71020e51a0
// mangled:   
// size:      88

71020e51a0  str x19,[sp, #-0x20]!
71020e51a4  stp x29,x30,[sp, #0x10]
71020e51a8  add x29,sp,#0x10
71020e51ac  and w2,w2,#0x1
71020e51b0  mov x19,x1
71020e51b4  bl 0x71020d4810
71020e51b8  ldr x8,[x19, #0x10]
71020e51bc  adrp x9,0x71020e5000
71020e51c0  add x9,x9,#0x100
71020e51c4  mov w10,#0x2
71020e51c8  str x9,[x8]
71020e51cc  str w10,[x8, #0x8]
71020e51d0  ldr x8,[x19, #0x10]
71020e51d4  add x9,x8,#0x10
71020e51d8  str x9,[x19, #0x10]
71020e51dc  ldp x29,x30,[sp, #0x10]
71020e51e0  sub x1,x8,#0x10
71020e51e4  adrp x2,0x710430c000
71020e51e8  add x2,x2,#0x66a
71020e51ec  mov x0,x19
71020e51f0  ldr x19,[sp], #0x20
71020e51f4  b 0x71038f5390
