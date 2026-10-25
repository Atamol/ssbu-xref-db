// addr:      710018d6e0
// offset:    0x18d6e0
// name:      FUN_710018d6e0
// mangled:   
// size:      88

710018d6e0  sub sp,sp,#0x30
710018d6e4  str x19,[sp, #0x10]
710018d6e8  stp x29,x30,[sp, #0x20]
710018d6ec  add x29,sp,#0x20
710018d6f0  adrp x8,0x71052a4000
710018d6f4  ldr x8,[x8, #0xdf0]
710018d6f8  mov x19,x0
710018d6fc  ldr x0,[x8]
710018d700  add x1,x19,#0xc0
710018d704  mov x8,sp
710018d708  bl 0x7100192af0
710018d70c  adrp x8,0x71052a6000
710018d710  ldr x8,[x8, #0x5f0]
710018d714  adrp x9,0x7104400000
710018d718  add x9,x9,#0x87e
710018d71c  str x9,[x19, #0x40]
710018d720  mov w0,#0x5
710018d724  stp x8,xzr,[x19, #0x30]
710018d728  ldr x19,[sp, #0x10]
710018d72c  ldp x29,x30,[sp, #0x20]
710018d730  add sp,sp,#0x30
710018d734  ret
