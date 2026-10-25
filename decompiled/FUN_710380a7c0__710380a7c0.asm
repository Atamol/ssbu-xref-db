// addr:      710380a7c0
// offset:    0x380a7c0
// name:      FUN_710380a7c0
// mangled:   
// size:      28

710380a7c0  ldr x8,[x1, #0x8]
710380a7c4  adrp x9,0x7104759000
710380a7c8  add x9,x9,#0x6e0
710380a7cc  add x10,x0,#0x8
710380a7d0  cmp x8,x9
710380a7d4  csel x0,x10,xzr,eq
710380a7d8  ret
