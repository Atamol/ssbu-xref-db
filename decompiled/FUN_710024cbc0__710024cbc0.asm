// addr:      710024cbc0
// offset:    0x24cbc0
// name:      FUN_710024cbc0
// mangled:   
// size:      76

710024cbc0  str x19,[sp, #-0x20]!
710024cbc4  stp x29,x30,[sp, #0x10]
710024cbc8  add x29,sp,#0x10
710024cbcc  ldr x0,[x1, #0x18]
710024cbd0  mov x19,x1
710024cbd4  adrp x1,0x710438b000
710024cbd8  add x1,x1,#0xf47
710024cbdc  bl 0x71001b4e00
710024cbe0  tbz w0,#0x0,0x710024cbf4
710024cbe4  ldp x29,x30,[sp, #0x10]
710024cbe8  mov w0,#0x1
710024cbec  ldr x19,[sp], #0x20
710024cbf0  ret
710024cbf4  ldr x0,[x19, #0x18]
710024cbf8  ldp x29,x30,[sp, #0x10]
710024cbfc  adrp x1,0x710425e000
710024cc00  add x1,x1,#0x876
710024cc04  ldr x19,[sp], #0x20
710024cc08  b 0x71001b4e00
