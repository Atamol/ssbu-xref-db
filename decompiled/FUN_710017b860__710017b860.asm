// addr:      710017b860
// offset:    0x17b860
// name:      FUN_710017b860
// mangled:   
// size:      72

710017b860  str x19,[sp, #-0x20]!
710017b864  stp x29,x30,[sp, #0x10]
710017b868  add x29,sp,#0x10
710017b86c  mov x19,x0
710017b870  ldr x0,[x0, #0x98]
710017b874  ldr x8,[x0]
710017b878  ldr x8,[x8, #0x170]
710017b87c  blr x8
710017b880  adrp x8,0x71052a5000
710017b884  ldr x8,[x8, #0x558]
710017b888  adrp x9,0x71042b3000
710017b88c  add x9,x9,#0x6eb
710017b890  str x9,[x19, #0x40]
710017b894  mov x0,xzr
710017b898  stp x8,xzr,[x19, #0x30]
710017b89c  ldp x29,x30,[sp, #0x10]
710017b8a0  ldr x19,[sp], #0x20
710017b8a4  ret
