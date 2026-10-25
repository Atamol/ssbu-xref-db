// addr:      710022cc40
// offset:    0x22cc40
// name:      FUN_710022cc40
// mangled:   
// size:      260

710022cc40  sub sp,sp,#0x70
710022cc44  stp x24,x23,[sp, #0x30]
710022cc48  stp x22,x21,[sp, #0x40]
710022cc4c  stp x20,x19,[sp, #0x50]
710022cc50  stp x29,x30,[sp, #0x60]
710022cc54  add x29,sp,#0x60
710022cc58  adrp x9,0x71052a4000
710022cc5c  ldr x9,[x9, #0xd80]
710022cc60  add x8,sp,#0x8
710022cc64  mov x21,#-0x1
710022cc68  mov x19,x1
710022cc6c  mov x20,x0
710022cc70  add x0,sp,#0x8
710022cc74  add x22,x9,#0x10
710022cc78  add x23,x8,#0x8
710022cc7c  mov w24,#0x10
710022cc80  adrp x1,0x710424e000
710022cc84  add x1,x1,#0xb15
710022cc88  mov x2,x21
710022cc8c  strb wzr,[sp, #0x10]
710022cc90  str x22,[sp, #0x8]
710022cc94  stp x23,x24,[sp, #0x20]
710022cc98  bl 0x71001b47e0
710022cc9c  add x1,sp,#0x8
710022cca0  mov x0,x20
710022cca4  bl 0x71001d22e0
710022cca8  add x0,sp,#0x8
710022ccac  str x22,[sp, #0x8]
710022ccb0  bl 0x71001b4910
710022ccb4  strh wzr,[x20, #0x48]
710022ccb8  stp xzr,xzr,[x20, #0x50]
710022ccbc  adrp x8,0x71052a7000
710022ccc0  adrp x1,0x710427f000
710022ccc4  add x1,x1,#0xf79
710022ccc8  str xzr,[x20, #0x68]
710022cccc  add x0,sp,#0x8
710022ccd0  mov x2,x21
710022ccd4  strb wzr,[x20, #0x70]
710022ccd8  str xzr,[x20, #0x78]
710022ccdc  str wzr,[x20, #0x80]
710022cce0  ldr x8,[x8, #0x588]
710022cce4  add x8,x8,#0x10
710022cce8  str x8,[x20]
710022ccec  mov x8,x20
710022ccf0  str xzr,[x8, #0x90]!
710022ccf4  str x8,[x20, #0x88]
710022ccf8  mov w8,#0x9
710022ccfc  str w8,[x20, #0x60]
710022cd00  stp xzr,x19,[x20, #0x98]
710022cd04  str x22,[sp, #0x8]
710022cd08  strb wzr,[sp, #0x10]
710022cd0c  stp x23,x24,[sp, #0x20]
710022cd10  bl 0x71001b47e0
710022cd14  add x1,sp,#0x8
710022cd18  mov x0,x20
710022cd1c  bl 0x71001db340
710022cd20  add x0,sp,#0x8
710022cd24  str x22,[sp, #0x8]
710022cd28  bl 0x71001b4910
710022cd2c  ldp x29,x30,[sp, #0x60]
710022cd30  ldp x20,x19,[sp, #0x50]
710022cd34  ldp x22,x21,[sp, #0x40]
710022cd38  ldp x24,x23,[sp, #0x30]
710022cd3c  add sp,sp,#0x70
710022cd40  ret
