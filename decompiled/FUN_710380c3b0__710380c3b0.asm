// addr:      710380c3b0
// offset:    0x380c3b0
// name:      FUN_710380c3b0
// mangled:   
// size:      28

710380c3b0  ldr x8,[x1, #0x8]
710380c3b4  adrp x9,0x7104759000
710380c3b8  add x9,x9,#0x9d0
710380c3bc  add x10,x0,#0x8
710380c3c0  cmp x8,x9
710380c3c4  csel x0,x10,xzr,eq
710380c3c8  ret
