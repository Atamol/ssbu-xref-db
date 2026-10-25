// addr:      710395ff40
// offset:    0x395ff40
// name:      FUN_710395ff40
// mangled:   
// size:      160

710395ff40  stp x28,x19,[sp, #-0x20]!
710395ff44  stp x29,x30,[sp, #0x10]
710395ff48  add x29,sp,#0x10
710395ff4c  sub sp,sp,#0x1, LSL #12
710395ff50  sub sp,sp,#0x820
710395ff54  bl 0x710395f790
710395ff58  stur x0,[x29, #-0x18]
710395ff5c  ldur x8,[x29, #-0x18]
710395ff60  cbnz x8,0x710395ff78
710395ff64  b 0x710395ff68
710395ff68  adrp x0,0x71042e5000
710395ff6c  add x0,x0,#0xe12
710395ff70  bl 0x71039545b0
710395ff74  bl 0x71039c2650
710395ff78  adrp x8,0x7105297000
710395ff7c  add x8,x8,#0x238
710395ff80  strb wzr,[x8]
710395ff84  add x0,x8,#0x8
710395ff88  bl 0x710395fb40
710395ff8c  ldur x8,[x29, #-0x18]
710395ff90  strb wzr,[x8]
710395ff94  mov w19,#0x1810
710395ff98  add x0,sp,#0x8
710395ff9c  mov w1,wzr
710395ffa0  mov x2,x19
710395ffa4  bl 0x71039c02a0
710395ffa8  mov w8,#0x5
710395ffac  strb w8,[sp, #0x8]
710395ffb0  ldur x8,[x29, #-0x18]
710395ffb4  add x0,x8,#0x8
710395ffb8  add x1,sp,#0x8
710395ffbc  mov x2,x19
710395ffc0  bl 0x71039c00e0
710395ffc4  ldur x0,[x29, #-0x18]
710395ffc8  bl 0x710395f7c0
710395ffcc  add sp,sp,#0x1, LSL #12
710395ffd0  add sp,sp,#0x820
710395ffd4  ldp x29,x30,[sp, #0x10]
710395ffd8  ldp x28,x19,[sp], #0x20
710395ffdc  ret
