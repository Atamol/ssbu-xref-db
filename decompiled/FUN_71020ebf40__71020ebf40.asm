// addr:      71020ebf40
// offset:    0x20ebf40
// name:      FUN_71020ebf40
// mangled:   
// size:      88

71020ebf40  str x19,[sp, #-0x20]!
71020ebf44  stp x29,x30,[sp, #0x10]
71020ebf48  add x29,sp,#0x10
71020ebf4c  and w2,w2,#0x1
71020ebf50  mov x19,x1
71020ebf54  bl 0x71020d4810
71020ebf58  ldr x8,[x19, #0x10]
71020ebf5c  adrp x9,0x71020eb000
71020ebf60  add x9,x9,#0xea0
71020ebf64  mov w10,#0x2
71020ebf68  str x9,[x8]
71020ebf6c  str w10,[x8, #0x8]
71020ebf70  ldr x8,[x19, #0x10]
71020ebf74  add x9,x8,#0x10
71020ebf78  str x9,[x19, #0x10]
71020ebf7c  ldp x29,x30,[sp, #0x10]
71020ebf80  sub x1,x8,#0x10
71020ebf84  adrp x2,0x710430c000
71020ebf88  add x2,x2,#0x66a
71020ebf8c  mov x0,x19
71020ebf90  ldr x19,[sp], #0x20
71020ebf94  b 0x71038f5390
