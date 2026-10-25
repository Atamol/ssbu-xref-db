// addr:      710018df90
// offset:    0x18df90
// name:      FUN_710018df90
// mangled:   
// size:      60

710018df90  ldr w9,[x0, #0x160]
710018df94  sub w9,w9,#0x2
710018df98  cmp w9,#0x2
710018df9c  b.hi 0x710018dfc4
710018dfa0  adrp x9,0x71052a6000
710018dfa4  ldr x9,[x9, #0x610]
710018dfa8  mov x8,x0
710018dfac  mov x0,xzr
710018dfb0  stp x9,xzr,[x8, #0x30]
710018dfb4  adrp x9,0x7104400000
710018dfb8  add x9,x9,#0x899
710018dfbc  str x9,[x8, #0x40]
710018dfc0  ret
710018dfc4  mov w0,#0x5
710018dfc8  ret
