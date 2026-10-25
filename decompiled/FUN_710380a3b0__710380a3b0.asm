// addr:      710380a3b0
// offset:    0x380a3b0
// name:      FUN_710380a3b0
// mangled:   
// size:      28

710380a3b0  ldr x8,[x1, #0x8]
710380a3b4  adrp x9,0x7104759000
710380a3b8  add x9,x9,#0x410
710380a3bc  add x10,x0,#0x8
710380a3c0  cmp x8,x9
710380a3c4  csel x0,x10,xzr,eq
710380a3c8  ret
