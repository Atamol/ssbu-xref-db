// addr:      710024cb60
// offset:    0x24cb60
// name:      FUN_710024cb60
// mangled:   
// size:      52

710024cb60  mov x0,x8
710024cb64  adrp x8,0x71052a4000
710024cb68  ldr x8,[x8, #0xd80]
710024cb6c  mov x9,x0
710024cb70  add x8,x8,#0x10
710024cb74  adrp x1,0x710438b000
710024cb78  add x1,x1,#0xf47
710024cb7c  mov x2,#-0x1
710024cb80  str x8,[x0]
710024cb84  strb wzr,[x9, #0x8]!
710024cb88  mov w8,#0x10
710024cb8c  stp x9,x8,[x0, #0x18]
710024cb90  b 0x71001b47e0
