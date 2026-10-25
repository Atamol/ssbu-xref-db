// addr:      710011ec10
// offset:    0x11ec10
// name:      FUN_710011ec10
// mangled:   
// size:      32

710011ec10  adrp x8,0x71052a5000
710011ec14  ldr x8,[x8, #0x9c0]
710011ec18  adrp x9,0x71043ce000
710011ec1c  add x9,x9,#0x6d6
710011ec20  str x9,[x0, #0x40]
710011ec24  stp x8,xzr,[x0, #0x30]
710011ec28  mov x0,xzr
710011ec2c  ret
