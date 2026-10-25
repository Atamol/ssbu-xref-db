// addr:      710010abb0
// offset:    0x10abb0
// name:      FUN_710010abb0
// mangled:   
// size:      136

710010abb0  sub sp,sp,#0x40
710010abb4  stp x20,x19,[sp, #0x20]
710010abb8  stp x29,x30,[sp, #0x30]
710010abbc  add x29,sp,#0x30
710010abc0  adrp x9,0x71052a5000
710010abc4  ldr x9,[x9, #0x80]
710010abc8  ldr x9,[x9]
710010abcc  ldrb w10,[x9, #0x162]
710010abd0  add x9,x9,x10, LSL #0x3
710010abd4  adrp x10,0x71052a5000
710010abd8  ldr x10,[x10, #0x618]
710010abdc  ldr x9,[x9, #0x168]
710010abe0  mov x19,x8
710010abe4  add x8,sp,#0x8
710010abe8  adrp x11,0x710435a000
710010abec  add x11,x11,#0x69e
710010abf0  orr x20,x8,#0x4
710010abf4  str x11,[x0, #0x40]
710010abf8  str x9,[x0, #0x98]
710010abfc  stp x10,xzr,[x0, #0x30]
710010ac00  mov x0,x20
710010ac04  str wzr,[sp, #0x8]
710010ac08  bl 0x71039c0a80
710010ac0c  add x1,sp,#0x18
710010ac10  mov x0,x20
710010ac14  str wzr,[sp, #0x18]
710010ac18  bl 0x71039c0a90
710010ac1c  add x1,sp,#0x8
710010ac20  mov x0,x19
710010ac24  bl 0x71000bce50
710010ac28  ldp x29,x30,[sp, #0x30]
710010ac2c  ldp x20,x19,[sp, #0x20]
710010ac30  add sp,sp,#0x40
710010ac34  ret
