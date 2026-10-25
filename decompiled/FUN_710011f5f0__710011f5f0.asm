// addr:      710011f5f0
// offset:    0x11f5f0
// name:      FUN_710011f5f0
// mangled:   
// size:      64

710011f5f0  str x19,[sp, #-0x20]!
710011f5f4  stp x29,x30,[sp, #0x10]
710011f5f8  add x29,sp,#0x10
710011f5fc  mov x19,x0
710011f600  add x0,x0,#0xa0
710011f604  bl 0x71000bcf30
710011f608  adrp x8,0x71052a5000
710011f60c  ldr x8,[x8, #0x9f0]
710011f610  adrp x9,0x710437b000
710011f614  add x9,x9,#0xaf1
710011f618  str x9,[x19, #0x40]
710011f61c  mov w0,#0x5
710011f620  stp x8,xzr,[x19, #0x30]
710011f624  ldp x29,x30,[sp, #0x10]
710011f628  ldr x19,[sp], #0x20
710011f62c  ret
