// addr:      710011e990
// offset:    0x11e990
// name:      FUN_710011e990
// mangled:   
// size:      32

710011e990  adrp x8,0x71052a5000
710011e994  ldr x8,[x8, #0x998]
710011e998  adrp x9,0x7104432000
710011e99c  add x9,x9,#0x31c
710011e9a0  str x9,[x0, #0x40]
710011e9a4  stp x8,xzr,[x0, #0x30]
710011e9a8  mov w0,#0x5
710011e9ac  ret
