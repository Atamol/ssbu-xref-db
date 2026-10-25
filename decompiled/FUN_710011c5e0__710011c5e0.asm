// addr:      710011c5e0
// offset:    0x11c5e0
// name:      FUN_710011c5e0
// mangled:   
// size:      160

710011c5e0  sub sp,sp,#0x60
710011c5e4  str x21,[sp, #0x30]
710011c5e8  stp x20,x19,[sp, #0x40]
710011c5ec  stp x29,x30,[sp, #0x50]
710011c5f0  add x29,sp,#0x50
710011c5f4  ldr x20,[x0, #0x70]
710011c5f8  mov x19,x0
710011c5fc  add x0,x0,#0x80
710011c600  add x8,sp,#0x8
710011c604  add x21,sp,#0x8
710011c608  bl 0x7100160230
710011c60c  add x0,x20,#0x10
710011c610  add x1,sp,#0x8
710011c614  bl 0x71000beb40
710011c618  adrp x8,0x71052a4000
710011c61c  ldr x8,[x8, #0xd20]
710011c620  add x8,x8,#0x10
710011c624  add x0,x21,#0x8
710011c628  str x8,[sp, #0x8]
710011c62c  bl 0x71000b1cf0
710011c630  ldr x0,[x19, #0x70]
710011c634  mov w8,#0x40000000
710011c638  str wzr,[sp, #0x10]
710011c63c  str x8,[sp, #0x8]
710011c640  ldr x8,[x0]
710011c644  ldr x8,[x8, #0x18]
710011c648  add x1,sp,#0x8
710011c64c  blr x8
710011c650  adrp x8,0x71052a5000
710011c654  ldr x8,[x8, #0x178]
710011c658  adrp x9,0x71043df000
710011c65c  add x9,x9,#0x1b3
710011c660  str x9,[x19, #0x40]
710011c664  mov x0,xzr
710011c668  stp x8,xzr,[x19, #0x30]
710011c66c  ldr x21,[sp, #0x30]
710011c670  ldp x29,x30,[sp, #0x50]
710011c674  ldp x20,x19,[sp, #0x40]
710011c678  add sp,sp,#0x60
710011c67c  ret
