// addr:      710011f970
// offset:    0x11f970
// name:      FUN_710011f970
// mangled:   
// size:      28

710011f970  adrp x8,0x71052a5000
710011f974  ldr x8,[x8, #0xa08]
710011f978  stp x8,xzr,[x0, #0x30]
710011f97c  adrp x8,0x710425e000
710011f980  add x8,x8,#0x6e4
710011f984  str x8,[x0, #0x40]
710011f988  ret
