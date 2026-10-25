// addr:      710011e9b0
// offset:    0x11e9b0
// name:      FUN_710011e9b0
// mangled:   
// size:      32

710011e9b0  adrp x8,0x71052a5000
710011e9b4  ldr x8,[x8, #0x9a0]
710011e9b8  adrp x9,0x71042f6000
710011e9bc  add x9,x9,#0xfc3
710011e9c0  str x9,[x0, #0x40]
710011e9c4  stp x8,xzr,[x0, #0x30]
710011e9c8  mov x0,xzr
710011e9cc  ret
