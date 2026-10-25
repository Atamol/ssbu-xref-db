// addr:      710011f950
// offset:    0x11f950
// name:      FUN_710011f950
// mangled:   
// size:      28

710011f950  adrp x8,0x71052a5000
710011f954  ldr x8,[x8, #0x500]
710011f958  stp x8,xzr,[x0, #0x30]
710011f95c  adrp x8,0x7104339000
710011f960  add x8,x8,#0x5ee
710011f964  str x8,[x0, #0x40]
710011f968  ret
