// addr:      710380a6a0
// offset:    0x380a6a0
// name:      FUN_710380a6a0
// mangled:   
// size:      28

710380a6a0  ldr x8,[x1, #0x8]
710380a6a4  adrp x9,0x7104759000
710380a6a8  add x9,x9,#0x570
710380a6ac  add x10,x0,#0x8
710380a6b0  cmp x8,x9
710380a6b4  csel x0,x10,xzr,eq
710380a6b8  ret
