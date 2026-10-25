// addr:      710011fa30
// offset:    0x11fa30
// name:      FUN_710011fa30
// mangled:   
// size:      124

710011fa30  stp x20,x19,[sp, #-0x20]!
710011fa34  stp x29,x30,[sp, #0x10]
710011fa38  add x29,sp,#0x10
710011fa3c  adrp x20,0x71052a5000
710011fa40  ldr x20,[x20, #0x80]
710011fa44  ldr x8,[x20]
710011fa48  ldrb w9,[x8, #0x162]
710011fa4c  add x8,x8,x9, LSL #0x3
710011fa50  mov x19,x0
710011fa54  ldr x0,[x8, #0x168]
710011fa58  ldr x8,[x0]
710011fa5c  ldr x8,[x8, #0x78]
710011fa60  blr x8
710011fa64  tbz w0,#0x0,0x710011fa9c
710011fa68  ldr x0,[x20]
710011fa6c  mov w1,wzr
710011fa70  bl 0x7100149270
710011fa74  adrp x8,0x71052a5000
710011fa78  ldr x8,[x8, #0x510]
710011fa7c  mov x0,xzr
710011fa80  stp x8,xzr,[x19, #0x30]
710011fa84  adrp x8,0x710425e000
710011fa88  add x8,x8,#0x5ab
710011fa8c  str x8,[x19, #0x40]
710011fa90  ldp x29,x30,[sp, #0x10]
710011fa94  ldp x20,x19,[sp], #0x20
710011fa98  ret
710011fa9c  mov w0,#0x5
710011faa0  ldp x29,x30,[sp, #0x10]
710011faa4  ldp x20,x19,[sp], #0x20
710011faa8  ret
