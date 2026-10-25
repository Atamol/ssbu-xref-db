// addr:      710010eb50
// offset:    0x10eb50
// name:      FUN_710010eb50
// mangled:   
// size:      136

710010eb50  sub sp,sp,#0x40
710010eb54  stp x20,x19,[sp, #0x20]
710010eb58  stp x29,x30,[sp, #0x30]
710010eb5c  add x29,sp,#0x30
710010eb60  adrp x9,0x71052a5000
710010eb64  ldr x9,[x9, #0x80]
710010eb68  ldr x9,[x9]
710010eb6c  ldrb w10,[x9, #0x162]
710010eb70  add x9,x9,x10, LSL #0x3
710010eb74  adrp x10,0x71052a5000
710010eb78  ldr x10,[x10, #0x720]
710010eb7c  ldr x9,[x9, #0x168]
710010eb80  mov x19,x8
710010eb84  add x8,sp,#0x8
710010eb88  adrp x11,0x710439c000
710010eb8c  add x11,x11,#0x501
710010eb90  orr x20,x8,#0x4
710010eb94  str x11,[x0, #0x40]
710010eb98  str x9,[x0, #0x98]
710010eb9c  stp x10,xzr,[x0, #0x30]
710010eba0  mov x0,x20
710010eba4  str wzr,[sp, #0x8]
710010eba8  bl 0x71039c0a80
710010ebac  add x1,sp,#0x18
710010ebb0  mov x0,x20
710010ebb4  str wzr,[sp, #0x18]
710010ebb8  bl 0x71039c0a90
710010ebbc  add x1,sp,#0x8
710010ebc0  mov x0,x19
710010ebc4  bl 0x71000bce50
710010ebc8  ldp x29,x30,[sp, #0x30]
710010ebcc  ldp x20,x19,[sp, #0x20]
710010ebd0  add sp,sp,#0x40
710010ebd4  ret
