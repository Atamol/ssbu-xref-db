// addr:      710017ae70
// offset:    0x17ae70
// name:      FUN_710017ae70
// mangled:   
// size:      152

710017ae70  sub sp,sp,#0x30
710017ae74  str x19,[sp, #0x10]
710017ae78  stp x29,x30,[sp, #0x20]
710017ae7c  add x29,sp,#0x20
710017ae80  adrp x8,0x71052a5000
710017ae84  ldr x8,[x8, #0x80]
710017ae88  ldr x8,[x8]
710017ae8c  ldrb w9,[x8, #0x162]
710017ae90  add x10,x8,x9, LSL #0x3
710017ae94  mov x19,x0
710017ae98  ldr x0,[x10, #0x168]
710017ae9c  add x8,x8,x9, LSL #0x2
710017aea0  ldr w2,[x8, #0x180]
710017aea4  ldr x8,[x0]
710017aea8  ldr x9,[x8, #0x70]
710017aeac  add x1,x19,#0x60
710017aeb0  mov x8,sp
710017aeb4  blr x9
710017aeb8  adrp x8,0x71052a5000
710017aebc  adrp x9,0x71052a6000
710017aec0  ldr x8,[x8, #0x510]
710017aec4  ldr x9,[x9, #0x320]
710017aec8  ldr w11,[sp]
710017aecc  cmp w11,#0x0
710017aed0  adrp x10,0x7104432000
710017aed4  add x10,x10,#0x3da
710017aed8  csel x8,x9,x8,eq
710017aedc  adrp x9,0x71042a2000
710017aee0  add x9,x9,#0x3a5
710017aee4  csel x9,x9,x10,eq
710017aee8  stp x8,xzr,[x19, #0x30]
710017aeec  mov w10,#0x5
710017aef0  str x9,[x19, #0x40]
710017aef4  ldp x29,x30,[sp, #0x20]
710017aef8  ldr x19,[sp, #0x10]
710017aefc  csel x0,x10,xzr,eq
710017af00  add sp,sp,#0x30
710017af04  ret
