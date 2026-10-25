// addr:      71021cf9c0
// offset:    0x21cf9c0
// name:      FUN_71021cf9c0
// mangled:   
// size:      144

71021cf9c0  stp x20,x19,[sp, #-0x20]!
71021cf9c4  stp x29,x30,[sp, #0x10]
71021cf9c8  add x29,sp,#0x10
71021cf9cc  and w2,w2,#0x1
71021cf9d0  mov x19,x1
71021cf9d4  mov x20,x0
71021cf9d8  bl 0x7101ff91a0
71021cf9dc  ldr x8,[x19, #0x10]
71021cf9e0  adrp x9,0x71021cf000
71021cf9e4  add x9,x9,#0x900
71021cf9e8  str x9,[x8]
71021cf9ec  mov w9,#0x2
71021cf9f0  str w9,[x8, #0x8]
71021cf9f4  ldr x8,[x19, #0x10]
71021cf9f8  add x9,x8,#0x10
71021cf9fc  sub x1,x8,#0x10
71021cfa00  adrp x2,0x710430c000
71021cfa04  add x2,x2,#0x66a
71021cfa08  mov x0,x19
71021cfa0c  str x9,[x19, #0x10]
71021cfa10  bl 0x71038f5390
71021cfa14  ldrsw x8,[x20, #0x2c]
71021cfa18  ldr x9,[x19, #0x10]
71021cfa1c  mov w10,#0x13
71021cfa20  str x8,[x9]
71021cfa24  str w10,[x9, #0x8]
71021cfa28  ldr x8,[x19, #0x10]
71021cfa2c  add x9,x8,#0x10
71021cfa30  str x9,[x19, #0x10]
71021cfa34  sub x1,x8,#0x10
71021cfa38  ldp x29,x30,[sp, #0x10]
71021cfa3c  adrp x2,0x7104323000
71021cfa40  add x2,x2,#0xa14
71021cfa44  mov x0,x19
71021cfa48  ldp x20,x19,[sp], #0x20
71021cfa4c  b 0x71038f5390
