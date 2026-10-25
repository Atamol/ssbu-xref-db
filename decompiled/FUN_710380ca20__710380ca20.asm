// addr:      710380ca20
// offset:    0x380ca20
// name:      FUN_710380ca20
// mangled:   
// size:      28

710380ca20  ldr x8,[x1, #0x8]
710380ca24  adrp x9,0x7104759000
710380ca28  add x9,x9,#0xf00
710380ca2c  add x10,x0,#0x8
710380ca30  cmp x8,x9
710380ca34  csel x0,x10,xzr,eq
710380ca38  ret
