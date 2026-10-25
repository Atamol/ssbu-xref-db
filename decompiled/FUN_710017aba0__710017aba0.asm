// addr:      710017aba0
// offset:    0x17aba0
// name:      FUN_710017aba0
// mangled:   
// size:      128

710017aba0  sub sp,sp,#0x30
710017aba4  str x19,[sp, #0x10]
710017aba8  stp x29,x30,[sp, #0x20]
710017abac  add x29,sp,#0x20
710017abb0  mov x19,x0
710017abb4  ldr x0,[x0, #0xa0]
710017abb8  add x1,x19,#0x60
710017abbc  ldr x8,[x0]
710017abc0  ldr x9,[x8, #0x70]
710017abc4  mov x8,sp
710017abc8  mov w2,wzr
710017abcc  blr x9
710017abd0  adrp x8,0x71052a6000
710017abd4  adrp x9,0x71052a6000
710017abd8  ldr x8,[x8, #0x300]
710017abdc  ldr x9,[x9, #0x308]
710017abe0  ldr w11,[sp]
710017abe4  cmp w11,#0x0
710017abe8  adrp x10,0x710426f000
710017abec  add x10,x10,#0x4b3
710017abf0  csel x8,x9,x8,eq
710017abf4  adrp x9,0x7104290000
710017abf8  add x9,x9,#0xfaa
710017abfc  csel x9,x9,x10,eq
710017ac00  stp x8,xzr,[x19, #0x30]
710017ac04  mov w10,#0x5
710017ac08  str x9,[x19, #0x40]
710017ac0c  ldp x29,x30,[sp, #0x20]
710017ac10  ldr x19,[sp, #0x10]
710017ac14  csel x0,x10,xzr,eq
710017ac18  add sp,sp,#0x30
710017ac1c  ret
