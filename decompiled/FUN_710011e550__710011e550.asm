// addr:      710011e550
// offset:    0x11e550
// name:      FUN_710011e550
// mangled:   
// size:      32

710011e550  adrp x8,0x71052a5000
710011e554  ldr x8,[x8, #0x958]
710011e558  adrp x9,0x7104290000
710011e55c  add x9,x9,#0xe08
710011e560  str x9,[x0, #0x40]
710011e564  stp x8,xzr,[x0, #0x30]
710011e568  mov w0,#0x5
710011e56c  ret
