// addr:      710380c280
// offset:    0x380c280
// name:      FUN_710380c280
// mangled:   
// size:      28

710380c280  ldr x8,[x1, #0x8]
710380c284  adrp x9,0x7104759000
710380c288  add x9,x9,#0x850
710380c28c  add x10,x0,#0x8
710380c290  cmp x8,x9
710380c294  csel x0,x10,xzr,eq
710380c298  ret
