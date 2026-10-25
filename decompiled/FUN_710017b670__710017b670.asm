// addr:      710017b670
// offset:    0x17b670
// name:      FUN_710017b670
// mangled:   
// size:      68

710017b670  str x19,[sp, #-0x20]!
710017b674  stp x29,x30,[sp, #0x10]
710017b678  add x29,sp,#0x10
710017b67c  mov x19,x0
710017b680  ldr x0,[x0, #0x60]
710017b684  mov w1,#0x1
710017b688  bl 0x71001757a0
710017b68c  adrp x8,0x71052a6000
710017b690  ldr x8,[x8, #0x358]
710017b694  adrp x9,0x71042a2000
710017b698  add x9,x9,#0x408
710017b69c  str x9,[x19, #0x40]
710017b6a0  mov x0,xzr
710017b6a4  stp x8,xzr,[x19, #0x30]
710017b6a8  ldp x29,x30,[sp, #0x10]
710017b6ac  ldr x19,[sp], #0x20
710017b6b0  ret
