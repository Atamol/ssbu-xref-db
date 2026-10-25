// addr:      710024cd60
// offset:    0x24cd60
// name:      FUN_710024cd60
// mangled:   
// size:      52

710024cd60  mov x0,x8
710024cd64  adrp x8,0x71052a4000
710024cd68  ldr x8,[x8, #0xd80]
710024cd6c  mov x9,x0
710024cd70  add x8,x8,#0x10
710024cd74  adrp x1,0x7104349000
710024cd78  add x1,x1,#0x84f
710024cd7c  mov x2,#-0x1
710024cd80  str x8,[x0]
710024cd84  strb wzr,[x9, #0x8]!
710024cd88  mov w8,#0x10
710024cd8c  stp x9,x8,[x0, #0x18]
710024cd90  b 0x71001b47e0
