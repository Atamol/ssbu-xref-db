// addr:      710017ab60
// offset:    0x17ab60
// name:      FUN_710017ab60
// mangled:   
// size:      64

710017ab60  str x19,[sp, #-0x20]!
710017ab64  stp x29,x30,[sp, #0x10]
710017ab68  add x29,sp,#0x10
710017ab6c  mov x19,x0
710017ab70  ldr x0,[x0, #0xa8]
710017ab74  bl 0x7100175780
710017ab78  adrp x8,0x71052a6000
710017ab7c  ldr x8,[x8, #0x2f8]
710017ab80  adrp x9,0x7104329000
710017ab84  add x9,x9,#0x426
710017ab88  str x9,[x19, #0x40]
710017ab8c  mov x0,xzr
710017ab90  stp x8,xzr,[x19, #0x30]
710017ab94  ldp x29,x30,[sp, #0x10]
710017ab98  ldr x19,[sp], #0x20
710017ab9c  ret
