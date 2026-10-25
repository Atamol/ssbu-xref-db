// addr:      710380a020
// offset:    0x380a020
// name:      FUN_710380a020
// mangled:   
// size:      28

710380a020  ldr x8,[x1, #0x8]
710380a024  adrp x9,0x7104759000
710380a028  add x9,x9,#0x0
710380a02c  add x10,x0,#0x8
710380a030  cmp x8,x9
710380a034  csel x0,x10,xzr,eq
710380a038  ret
