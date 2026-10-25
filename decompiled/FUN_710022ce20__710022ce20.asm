// addr:      710022ce20
// offset:    0x22ce20
// name:      FUN_710022ce20
// mangled:   
// size:      276

710022ce20  sub sp,sp,#0x70
710022ce24  stp x24,x23,[sp, #0x30]
710022ce28  stp x22,x21,[sp, #0x40]
710022ce2c  stp x20,x19,[sp, #0x50]
710022ce30  stp x29,x30,[sp, #0x60]
710022ce34  add x29,sp,#0x60
710022ce38  mov x20,x0
710022ce3c  mov w0,#0xa8
710022ce40  bl 0x71001af850
710022ce44  mov x19,x0
710022ce48  cbz x0,0x710022cf18
710022ce4c  adrp x8,0x71052a4000
710022ce50  ldr x8,[x8, #0xd80]
710022ce54  strb wzr,[sp, #0x10]
710022ce58  add x22,x8,#0x10
710022ce5c  add x8,sp,#0x8
710022ce60  mov x21,#-0x1
710022ce64  mov x2,x21
710022ce68  add x23,x8,#0x8
710022ce6c  mov w24,#0x10
710022ce70  adrp x1,0x710424e000
710022ce74  add x1,x1,#0xb15
710022ce78  add x0,sp,#0x8
710022ce7c  str x22,[sp, #0x8]
710022ce80  stp x23,x24,[sp, #0x20]
710022ce84  bl 0x71001b47e0
710022ce88  add x1,sp,#0x8
710022ce8c  mov x0,x19
710022ce90  bl 0x71001d22e0
710022ce94  add x0,sp,#0x8
710022ce98  str x22,[sp, #0x8]
710022ce9c  bl 0x71001b4910
710022cea0  strh wzr,[x19, #0x48]
710022cea4  stp xzr,xzr,[x19, #0x50]
710022cea8  adrp x8,0x71052a7000
710022ceac  adrp x1,0x710427f000
710022ceb0  add x1,x1,#0xf79
710022ceb4  str xzr,[x19, #0x68]
710022ceb8  add x0,sp,#0x8
710022cebc  mov x2,x21
710022cec0  strb wzr,[x19, #0x70]
710022cec4  str xzr,[x19, #0x78]
710022cec8  str wzr,[x19, #0x80]
710022cecc  ldr x8,[x8, #0x588]
710022ced0  add x8,x8,#0x10
710022ced4  str x8,[x19]
710022ced8  mov x8,x19
710022cedc  str xzr,[x8, #0x90]!
710022cee0  str x8,[x19, #0x88]
710022cee4  mov w8,#0x9
710022cee8  str w8,[x19, #0x60]
710022ceec  stp xzr,x20,[x19, #0x98]
710022cef0  str x22,[sp, #0x8]
710022cef4  strb wzr,[sp, #0x10]
710022cef8  stp x23,x24,[sp, #0x20]
710022cefc  bl 0x71001b47e0
710022cf00  add x1,sp,#0x8
710022cf04  mov x0,x19
710022cf08  bl 0x71001db340
710022cf0c  add x0,sp,#0x8
710022cf10  str x22,[sp, #0x8]
710022cf14  bl 0x71001b4910
710022cf18  mov x0,x19
710022cf1c  ldp x29,x30,[sp, #0x60]
710022cf20  ldp x20,x19,[sp, #0x50]
710022cf24  ldp x22,x21,[sp, #0x40]
710022cf28  ldp x24,x23,[sp, #0x30]
710022cf2c  add sp,sp,#0x70
710022cf30  ret
