// addr:      710380c610
// offset:    0x380c610
// name:      FUN_710380c610
// mangled:   
// size:      28

710380c610  ldr x8,[x1, #0x8]
710380c614  adrp x9,0x7104759000
710380c618  add x9,x9,#0xc50
710380c61c  add x10,x0,#0x8
710380c620  cmp x8,x9
710380c624  csel x0,x10,xzr,eq
710380c628  ret
