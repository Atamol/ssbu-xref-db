// addr:      710380c900
// offset:    0x380c900
// name:      FUN_710380c900
// mangled:   
// size:      28

710380c900  ldr x8,[x1, #0x8]
710380c904  adrp x9,0x7104759000
710380c908  add x9,x9,#0xda0
710380c90c  add x10,x0,#0x8
710380c910  cmp x8,x9
710380c914  csel x0,x10,xzr,eq
710380c918  ret
