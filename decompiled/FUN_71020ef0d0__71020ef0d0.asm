// addr:      71020ef0d0
// offset:    0x20ef0d0
// name:      FUN_71020ef0d0
// mangled:   
// size:      88

71020ef0d0  str x19,[sp, #-0x20]!
71020ef0d4  stp x29,x30,[sp, #0x10]
71020ef0d8  add x29,sp,#0x10
71020ef0dc  and w2,w2,#0x1
71020ef0e0  mov x19,x1
71020ef0e4  bl 0x71020d4810
71020ef0e8  ldr x8,[x19, #0x10]
71020ef0ec  adrp x9,0x71020ef000
71020ef0f0  add x9,x9,#0x30
71020ef0f4  mov w10,#0x2
71020ef0f8  str x9,[x8]
71020ef0fc  str w10,[x8, #0x8]
71020ef100  ldr x8,[x19, #0x10]
71020ef104  add x9,x8,#0x10
71020ef108  str x9,[x19, #0x10]
71020ef10c  ldp x29,x30,[sp, #0x10]
71020ef110  sub x1,x8,#0x10
71020ef114  adrp x2,0x710430c000
71020ef118  add x2,x2,#0x66a
71020ef11c  mov x0,x19
71020ef120  ldr x19,[sp], #0x20
71020ef124  b 0x71038f5390
