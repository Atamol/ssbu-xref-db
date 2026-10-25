// addr:      71020ea140
// offset:    0x20ea140
// name:      FUN_71020ea140
// mangled:   
// size:      144

71020ea140  stp x20,x19,[sp, #-0x20]!
71020ea144  stp x29,x30,[sp, #0x10]
71020ea148  add x29,sp,#0x10
71020ea14c  and w2,w2,#0x1
71020ea150  mov x19,x1
71020ea154  mov x20,x0
71020ea158  bl 0x71020d4810
71020ea15c  ldr x8,[x19, #0x10]
71020ea160  adrp x9,0x71020ea000
71020ea164  add x9,x9,#0xa0
71020ea168  str x9,[x8]
71020ea16c  mov w9,#0x2
71020ea170  str w9,[x8, #0x8]
71020ea174  ldr x8,[x19, #0x10]
71020ea178  add x9,x8,#0x10
71020ea17c  sub x1,x8,#0x10
71020ea180  adrp x2,0x710430c000
71020ea184  add x2,x2,#0x66a
71020ea188  mov x0,x19
71020ea18c  str x9,[x19, #0x10]
71020ea190  bl 0x71038f5390
71020ea194  ldrb w8,[x20, #0x18]
71020ea198  ldr x9,[x19, #0x10]
71020ea19c  mov w10,#0x1
71020ea1a0  str w8,[x9]
71020ea1a4  str w10,[x9, #0x8]
71020ea1a8  ldr x8,[x19, #0x10]
71020ea1ac  add x9,x8,#0x10
71020ea1b0  str x9,[x19, #0x10]
71020ea1b4  sub x1,x8,#0x10
71020ea1b8  ldp x29,x30,[sp, #0x10]
71020ea1bc  adrp x2,0x71042f9000
71020ea1c0  add x2,x2,#0x565
71020ea1c4  mov x0,x19
71020ea1c8  ldp x20,x19,[sp], #0x20
71020ea1cc  b 0x71038f5390
