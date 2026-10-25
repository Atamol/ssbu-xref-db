// addr:      710011d730
// offset:    0x11d730
// name:      FUN_710011d730
// mangled:   
// size:      32

710011d730  adrp x8,0x71052a5000
710011d734  ldr x8,[x8, #0x8b0]
710011d738  adrp x9,0x7104339000
710011d73c  add x9,x9,#0x523
710011d740  str x9,[x0, #0x40]
710011d744  stp x8,xzr,[x0, #0x30]
710011d748  mov x0,xzr
710011d74c  ret
