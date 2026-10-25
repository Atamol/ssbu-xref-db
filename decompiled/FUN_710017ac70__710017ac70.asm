// addr:      710017ac70
// offset:    0x17ac70
// name:      FUN_710017ac70
// mangled:   
// size:      128

710017ac70  str x19,[sp, #-0x20]!
710017ac74  stp x29,x30,[sp, #0x10]
710017ac78  add x29,sp,#0x10
710017ac7c  mov x19,x0
710017ac80  ldr x0,[x0, #0xa0]
710017ac84  ldr x8,[x0]
710017ac88  ldr x8,[x8, #0x78]
710017ac8c  blr x8
710017ac90  tbz w0,#0x0,0x710017acd0
710017ac94  ldr w8,[x19, #0x60]
710017ac98  cmp w8,#0x2
710017ac9c  b.eq 0x710017aca8
710017aca0  cmp w8,#0x3
710017aca4  b.ne 0x710017ace0
710017aca8  adrp x8,0x71052a6000
710017acac  ldr x8,[x8, #0x300]
710017acb0  mov x0,xzr
710017acb4  stp x8,xzr,[x19, #0x30]
710017acb8  adrp x8,0x710426f000
710017acbc  add x8,x8,#0x4b3
710017acc0  str x8,[x19, #0x40]
710017acc4  ldp x29,x30,[sp, #0x10]
710017acc8  ldr x19,[sp], #0x20
710017accc  ret
710017acd0  mov w0,#0x5
710017acd4  ldp x29,x30,[sp, #0x10]
710017acd8  ldr x19,[sp], #0x20
710017acdc  ret
710017ace0  mov w0,#0x5
710017ace4  ldp x29,x30,[sp, #0x10]
710017ace8  ldr x19,[sp], #0x20
710017acec  ret
