// addr:      710380a280
// offset:    0x380a280
// name:      FUN_710380a280
// mangled:   
// size:      28

710380a280  ldr x8,[x1, #0x8]
710380a284  adrp x9,0x7104759000
710380a288  add x9,x9,#0x2b0
710380a28c  add x10,x0,#0x8
710380a290  cmp x8,x9
710380a294  csel x0,x10,xzr,eq
710380a298  ret
