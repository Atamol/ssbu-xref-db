// addr:      710011e530
// offset:    0x11e530
// name:      FUN_710011e530
// mangled:   
// size:      32

710011e530  adrp x8,0x71052a5000
710011e534  ldr x8,[x8, #0x950]
710011e538  adrp x9,0x710439c000
710011e53c  add x9,x9,#0x576
710011e540  str x9,[x0, #0x40]
710011e544  stp x8,xzr,[x0, #0x30]
710011e548  mov w0,#0x5
710011e54c  ret
