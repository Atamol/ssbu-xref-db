// addr:      710022d600
// offset:    0x22d600
// name:      FUN_710022d600
// mangled:   
// size:      276

710022d600  sub sp,sp,#0x70
710022d604  stp x24,x23,[sp, #0x30]
710022d608  stp x22,x21,[sp, #0x40]
710022d60c  stp x20,x19,[sp, #0x50]
710022d610  stp x29,x30,[sp, #0x60]
710022d614  add x29,sp,#0x60
710022d618  adrp x9,0x71052a4000
710022d61c  ldr x9,[x9, #0xd80]
710022d620  add x8,sp,#0x8
710022d624  mov x21,#-0x1
710022d628  mov x20,x1
710022d62c  mov x19,x0
710022d630  add x0,sp,#0x8
710022d634  add x22,x9,#0x10
710022d638  add x23,x8,#0x8
710022d63c  mov w24,#0x10
710022d640  adrp x1,0x710424e000
710022d644  add x1,x1,#0xb15
710022d648  mov x2,x21
710022d64c  strb wzr,[sp, #0x10]
710022d650  str x22,[sp, #0x8]
710022d654  stp x23,x24,[sp, #0x20]
710022d658  bl 0x71001b47e0
710022d65c  add x1,sp,#0x8
710022d660  mov x0,x19
710022d664  bl 0x71001d22e0
710022d668  add x0,sp,#0x8
710022d66c  str x22,[sp, #0x8]
710022d670  bl 0x71001b4910
710022d674  strh wzr,[x19, #0x48]
710022d678  stp xzr,xzr,[x19, #0x50]
710022d67c  adrp x8,0x71052a7000
710022d680  adrp x1,0x7104339000
710022d684  add x1,x1,#0x70e
710022d688  str xzr,[x19, #0x68]
710022d68c  add x0,sp,#0x8
710022d690  mov x2,x21
710022d694  strb wzr,[x19, #0x70]
710022d698  str xzr,[x19, #0x78]
710022d69c  str wzr,[x19, #0x80]
710022d6a0  ldr x8,[x8, #0x5b0]
710022d6a4  add x8,x8,#0x10
710022d6a8  str x8,[x19]
710022d6ac  mov x8,x19
710022d6b0  str xzr,[x8, #0x90]!
710022d6b4  str x8,[x19, #0x88]
710022d6b8  add x8,x19,#0xa8
710022d6bc  str wzr,[x19, #0xc8]
710022d6c0  stp xzr,x20,[x19, #0x98]
710022d6c4  stp x8,x8,[x19, #0xa8]
710022d6c8  mov w8,#0x9
710022d6cc  str w8,[x19, #0x60]
710022d6d0  stp xzr,xzr,[x19, #0xb8]
710022d6d4  str x22,[sp, #0x8]
710022d6d8  strb wzr,[sp, #0x10]
710022d6dc  stp x23,x24,[sp, #0x20]
710022d6e0  bl 0x71001b47e0
710022d6e4  add x1,sp,#0x8
710022d6e8  mov x0,x19
710022d6ec  bl 0x71001db340
710022d6f0  add x0,sp,#0x8
710022d6f4  str x22,[sp, #0x8]
710022d6f8  bl 0x71001b4910
710022d6fc  ldp x29,x30,[sp, #0x60]
710022d700  ldp x20,x19,[sp, #0x50]
710022d704  ldp x22,x21,[sp, #0x40]
710022d708  ldp x24,x23,[sp, #0x30]
710022d70c  add sp,sp,#0x70
710022d710  ret
