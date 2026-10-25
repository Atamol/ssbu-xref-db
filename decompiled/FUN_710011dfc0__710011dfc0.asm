// addr:      710011dfc0
// offset:    0x11dfc0
// name:      FUN_710011dfc0
// mangled:   
// size:      32

710011dfc0  adrp x8,0x71052a5000
710011dfc4  ldr x8,[x8, #0x920]
710011dfc8  adrp x9,0x7104290000
710011dfcc  add x9,x9,#0xdd6
710011dfd0  str x9,[x0, #0x40]
710011dfd4  stp x8,xzr,[x0, #0x30]
710011dfd8  mov x0,xzr
710011dfdc  ret
