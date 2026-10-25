// addr:      710380c4e0
// offset:    0x380c4e0
// name:      FUN_710380c4e0
// mangled:   
// size:      28

710380c4e0  ldr x8,[x1, #0x8]
710380c4e4  adrp x9,0x7104759000
710380c4e8  add x9,x9,#0xb00
710380c4ec  add x10,x0,#0x8
710380c4f0  cmp x8,x9
710380c4f4  csel x0,x10,xzr,eq
710380c4f8  ret
