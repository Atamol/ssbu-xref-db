// addr:      710395aba0
// offset:    0x395aba0
// name:      FUN_710395aba0
// mangled:   
// size:      168

710395aba0  sub sp,sp,#0x30
710395aba4  stp x29,x30,[sp, #0x20]
710395aba8  add x29,sp,#0x20
710395abac  stur x0,[x29, #-0x8]
710395abb0  ldur x8,[x29, #-0x8]
710395abb4  ldr w8,[x8, #0x18]
710395abb8  stur w8,[x29, #-0xc]
710395abbc  ldur x8,[x29, #-0x8]
710395abc0  ldr w8,[x8]
710395abc4  cbnz w8,0x710395abdc
710395abc8  b 0x710395abcc
710395abcc  adrp x8,0x7104453000
710395abd0  add x8,x8,#0x70e
710395abd4  str x8,[sp, #0x8]
710395abd8  b 0x710395abf8
710395abdc  ldur w8,[x29, #-0xc]
710395abe0  lsl w8,w8,#0x1
710395abe4  stur w8,[x29, #-0xc]
710395abe8  adrp x8,0x71042b2000
710395abec  add x8,x8,#0xd9b
710395abf0  str x8,[sp, #0x8]
710395abf4  b 0x710395abf8
710395abf8  str wzr,[sp, #0x4]
710395abfc  b 0x710395ac00
710395ac00  ldr w8,[sp, #0x4]
710395ac04  ldur w9,[x29, #-0xc]
710395ac08  subs w8,w8,w9
710395ac0c  b.ge 0x710395ac3c
710395ac10  b 0x710395ac14
710395ac14  ldur x0,[x29, #-0x8]
710395ac18  ldr x2,[sp, #0x8]
710395ac1c  adrp x1,0x71042a2000
710395ac20  add x1,x1,#0xae
710395ac24  bl 0x710395aa50
710395ac28  b 0x710395ac2c
710395ac2c  ldr w8,[sp, #0x4]
710395ac30  add w8,w8,#0x1
710395ac34  str w8,[sp, #0x4]
710395ac38  b 0x710395ac00
710395ac3c  ldp x29,x30,[sp, #0x20]
710395ac40  add sp,sp,#0x30
710395ac44  ret
