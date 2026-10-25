// addr:      710018a060
// offset:    0x18a060
// name:      FUN_710018a060
// mangled:   
// size:      28

710018a060  adrp x8,0x71052a4000
710018a064  ldr x8,[x8, #0xfc0]
710018a068  stp x8,xzr,[x0, #0x30]
710018a06c  adrp x8,0x710436b000
710018a070  add x8,x8,#0x870
710018a074  str x8,[x0, #0x40]
710018a078  ret
