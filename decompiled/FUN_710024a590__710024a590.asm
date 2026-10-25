// addr:      710024a590
// offset:    0x24a590
// name:      FUN_710024a590
// mangled:   
// size:      52

710024a590  mov x0,x8
710024a594  adrp x8,0x71052a4000
710024a598  ldr x8,[x8, #0xd80]
710024a59c  mov x9,x0
710024a5a0  add x8,x8,#0x10
710024a5a4  adrp x1,0x710437b000
710024a5a8  add x1,x1,#0xce0
710024a5ac  mov x2,#-0x1
710024a5b0  str x8,[x0]
710024a5b4  strb wzr,[x9, #0x8]!
710024a5b8  mov w8,#0x10
710024a5bc  stp x9,x8,[x0, #0x18]
710024a5c0  b 0x71001b47e0
