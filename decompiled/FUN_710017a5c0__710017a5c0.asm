// addr:      710017a5c0
// offset:    0x17a5c0
// name:      FUN_710017a5c0
// mangled:   
// size:      32

710017a5c0  adrp x8,0x71052a5000
710017a5c4  ldr x8,[x8, #0x190]
710017a5c8  adrp x9,0x71043df000
710017a5cc  add x9,x9,#0x4df
710017a5d0  str x9,[x0, #0x40]
710017a5d4  stp x8,xzr,[x0, #0x30]
710017a5d8  mov x0,xzr
710017a5dc  ret
