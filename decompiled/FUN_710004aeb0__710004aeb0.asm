// addr:      710004aeb0
// offset:    0x4aeb0
// name:      FUN_710004aeb0
// mangled:   
// size:      92

710004aeb0  sub sp,sp,#0xb0
710004aeb4  str x19,[sp, #0x90]
710004aeb8  stp x29,x30,[sp, #0xa0]
710004aebc  add x29,sp,#0xa0
710004aec0  ldr x3,[x0, #0x30]
710004aec4  mov x4,x1
710004aec8  mov x19,x0
710004aecc  adrp x2,0x7104411000
710004aed0  add x2,x2,#0x8ae
710004aed4  mov w1,#0x88
710004aed8  add x0,sp,#0x8
710004aedc  bl 0x71039c0770
710004aee0  ldr x0,[x19, #0x40]
710004aee4  ldr x8,[x0]
710004aee8  ldr x8,[x8, #0x50]
710004aeec  mov w1,#0x696d
710004aef0  movk w1,#0x616e, LSL #16
710004aef4  add x2,sp,#0x8
710004aef8  blr x8
710004aefc  ldp x29,x30,[sp, #0xa0]
710004af00  ldr x19,[sp, #0x90]
710004af04  add sp,sp,#0xb0
710004af08  ret
