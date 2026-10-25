// addr:      710017ca90
// offset:    0x17ca90
// name:      FUN_710017ca90
// mangled:   
// size:      32

710017ca90  adrp x8,0x71052a5000
710017ca94  ldr x8,[x8, #0x7d0]
710017ca98  adrp x9,0x7104290000
710017ca9c  add x9,x9,#0xe96
710017caa0  str x9,[x0, #0x40]
710017caa4  stp x8,xzr,[x0, #0x30]
710017caa8  mov w0,#0x1
710017caac  ret
