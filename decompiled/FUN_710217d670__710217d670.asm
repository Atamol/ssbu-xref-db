// addr:      710217d670
// offset:    0x217d670
// name:      FUN_710217d670
// mangled:   
// size:      144

710217d670  stp x20,x19,[sp, #-0x20]!
710217d674  stp x29,x30,[sp, #0x10]
710217d678  add x29,sp,#0x10
710217d67c  and w2,w2,#0x1
710217d680  mov x19,x1
710217d684  mov x20,x0
710217d688  bl 0x7101ff91a0
710217d68c  ldr x8,[x19, #0x10]
710217d690  adrp x9,0x710217d000
710217d694  add x9,x9,#0x5b0
710217d698  str x9,[x8]
710217d69c  mov w9,#0x2
710217d6a0  str w9,[x8, #0x8]
710217d6a4  ldr x8,[x19, #0x10]
710217d6a8  add x9,x8,#0x10
710217d6ac  sub x1,x8,#0x10
710217d6b0  adrp x2,0x710430c000
710217d6b4  add x2,x2,#0x66a
710217d6b8  mov x0,x19
710217d6bc  str x9,[x19, #0x10]
710217d6c0  bl 0x71038f5390
710217d6c4  ldrsw x8,[x20, #0x2c]
710217d6c8  ldr x9,[x19, #0x10]
710217d6cc  mov w10,#0x13
710217d6d0  str x8,[x9]
710217d6d4  str w10,[x9, #0x8]
710217d6d8  ldr x8,[x19, #0x10]
710217d6dc  add x9,x8,#0x10
710217d6e0  str x9,[x19, #0x10]
710217d6e4  sub x1,x8,#0x10
710217d6e8  ldp x29,x30,[sp, #0x10]
710217d6ec  adrp x2,0x710431f000
710217d6f0  add x2,x2,#0xb9d
710217d6f4  mov x0,x19
710217d6f8  ldp x20,x19,[sp], #0x20
710217d6fc  b 0x71038f5390
