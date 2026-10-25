// addr:      710011e870
// offset:    0x11e870
// name:      FUN_710011e870
// mangled:   
// size:      32

710011e870  adrp x8,0x71052a5000
710011e874  ldr x8,[x8, #0x978]
710011e878  adrp x9,0x71042b3000
710011e87c  add x9,x9,#0x5d6
710011e880  str x9,[x0, #0x40]
710011e884  stp x8,xzr,[x0, #0x30]
710011e888  mov x0,xzr
710011e88c  ret
