// addr:      710022d8d0
// offset:    0x22d8d0
// name:      FUN_710022d8d0
// mangled:   
// size:      292

710022d8d0  sub sp,sp,#0x70
710022d8d4  stp x24,x23,[sp, #0x30]
710022d8d8  stp x22,x21,[sp, #0x40]
710022d8dc  stp x20,x19,[sp, #0x50]
710022d8e0  stp x29,x30,[sp, #0x60]
710022d8e4  add x29,sp,#0x60
710022d8e8  mov x20,x0
710022d8ec  mov w0,#0xd0
710022d8f0  bl 0x71001af850
710022d8f4  mov x19,x0
710022d8f8  cbz x0,0x710022d9d8
710022d8fc  adrp x8,0x71052a4000
710022d900  ldr x8,[x8, #0xd80]
710022d904  strb wzr,[sp, #0x10]
710022d908  add x22,x8,#0x10
710022d90c  add x8,sp,#0x8
710022d910  mov x21,#-0x1
710022d914  mov x2,x21
710022d918  add x23,x8,#0x8
710022d91c  mov w24,#0x10
710022d920  adrp x1,0x710424e000
710022d924  add x1,x1,#0xb15
710022d928  add x0,sp,#0x8
710022d92c  str x22,[sp, #0x8]
710022d930  stp x23,x24,[sp, #0x20]
710022d934  bl 0x71001b47e0
710022d938  add x1,sp,#0x8
710022d93c  mov x0,x19
710022d940  bl 0x71001d22e0
710022d944  add x0,sp,#0x8
710022d948  str x22,[sp, #0x8]
710022d94c  bl 0x71001b4910
710022d950  strh wzr,[x19, #0x48]
710022d954  stp xzr,xzr,[x19, #0x50]
710022d958  adrp x8,0x71052a7000
710022d95c  adrp x1,0x7104339000
710022d960  add x1,x1,#0x70e
710022d964  str xzr,[x19, #0x68]
710022d968  add x0,sp,#0x8
710022d96c  mov x2,x21
710022d970  strb wzr,[x19, #0x70]
710022d974  str xzr,[x19, #0x78]
710022d978  str wzr,[x19, #0x80]
710022d97c  ldr x8,[x8, #0x5b0]
710022d980  add x8,x8,#0x10
710022d984  str x8,[x19]
710022d988  mov x8,x19
710022d98c  str xzr,[x8, #0x90]!
710022d990  str x8,[x19, #0x88]
710022d994  add x8,x19,#0xa8
710022d998  str wzr,[x19, #0xc8]
710022d99c  stp xzr,x20,[x19, #0x98]
710022d9a0  stp x8,x8,[x19, #0xa8]
710022d9a4  mov w8,#0x9
710022d9a8  str w8,[x19, #0x60]
710022d9ac  stp xzr,xzr,[x19, #0xb8]
710022d9b0  str x22,[sp, #0x8]
710022d9b4  strb wzr,[sp, #0x10]
710022d9b8  stp x23,x24,[sp, #0x20]
710022d9bc  bl 0x71001b47e0
710022d9c0  add x1,sp,#0x8
710022d9c4  mov x0,x19
710022d9c8  bl 0x71001db340
710022d9cc  add x0,sp,#0x8
710022d9d0  str x22,[sp, #0x8]
710022d9d4  bl 0x71001b4910
710022d9d8  mov x0,x19
710022d9dc  ldp x29,x30,[sp, #0x60]
710022d9e0  ldp x20,x19,[sp, #0x50]
710022d9e4  ldp x22,x21,[sp, #0x40]
710022d9e8  ldp x24,x23,[sp, #0x30]
710022d9ec  add sp,sp,#0x70
710022d9f0  ret
