// addr:      710011dfe0
// offset:    0x11dfe0
// name:      FUN_710011dfe0
// mangled:   
// size:      32

710011dfe0  adrp x8,0x71052a5000
710011dfe4  ldr x8,[x8, #0x928]
710011dfe8  adrp x9,0x7104400000
710011dfec  add x9,x9,#0x692
710011dff0  str x9,[x0, #0x40]
710011dff4  stp x8,xzr,[x0, #0x30]
710011dff8  mov w0,#0x5
710011dffc  ret
