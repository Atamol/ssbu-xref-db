// addr:      710380a150
// offset:    0x380a150
// name:      FUN_710380a150
// mangled:   
// size:      28

710380a150  ldr x8,[x1, #0x8]
710380a154  adrp x9,0x7104759000
710380a158  add x9,x9,#0x180
710380a15c  add x10,x0,#0x8
710380a160  cmp x8,x9
710380a164  csel x0,x10,xzr,eq
710380a168  ret
