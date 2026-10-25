// addr:      71021aa730
// offset:    0x21aa730
// name:      FUN_71021aa730
// mangled:   
// size:      148

71021aa730  stp x20,x19,[sp, #-0x20]!
71021aa734  stp x29,x30,[sp, #0x10]
71021aa738  add x29,sp,#0x10
71021aa73c  and w2,w2,#0x1
71021aa740  mov x19,x1
71021aa744  mov x20,x0
71021aa748  bl 0x7101ff91a0
71021aa74c  ldr x8,[x19, #0x10]
71021aa750  adrp x9,0x71021aa000
71021aa754  add x9,x9,#0x680
71021aa758  str x9,[x8]
71021aa75c  mov w9,#0x2
71021aa760  str w9,[x8, #0x8]
71021aa764  ldr x8,[x19, #0x10]
71021aa768  add x9,x8,#0x10
71021aa76c  sub x1,x8,#0x10
71021aa770  adrp x2,0x710430c000
71021aa774  add x2,x2,#0x66a
71021aa778  mov x0,x19
71021aa77c  str x9,[x19, #0x10]
71021aa780  bl 0x71038f5390
71021aa784  ldr x8,[x20, #0x30]
71021aa788  ldr x9,[x19, #0x10]
71021aa78c  mov w10,#0x13
71021aa790  str w10,[x9, #0x8]
71021aa794  and x8,x8,#0xffffffffff
71021aa798  str x8,[x9]
71021aa79c  ldr x8,[x19, #0x10]
71021aa7a0  add x9,x8,#0x10
71021aa7a4  str x9,[x19, #0x10]
71021aa7a8  ldp x29,x30,[sp, #0x10]
71021aa7ac  sub x1,x8,#0x10
71021aa7b0  adrp x2,0x71042fe000
71021aa7b4  add x2,x2,#0x5c6
71021aa7b8  mov x0,x19
71021aa7bc  ldp x20,x19,[sp], #0x20
71021aa7c0  b 0x71038f5390
