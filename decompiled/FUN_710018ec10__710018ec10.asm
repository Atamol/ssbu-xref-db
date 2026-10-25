// addr:      710018ec10
// offset:    0x18ec10
// name:      FUN_710018ec10
// mangled:   
// size:      100

710018ec10  stp x20,x19,[sp, #-0x20]!
710018ec14  stp x29,x30,[sp, #0x10]
710018ec18  add x29,sp,#0x10
710018ec1c  adrp x20,0x71052a4000
710018ec20  ldr x20,[x20, #0xdf0]
710018ec24  mov x19,x0
710018ec28  ldr x0,[x20]
710018ec2c  bl 0x7100193580
710018ec30  bl 0x7100199b50
710018ec34  ldr x0,[x20]
710018ec38  bl 0x7100193580
710018ec3c  mov x1,x19
710018ec40  bl 0x710019b560
710018ec44  adrp x8,0x71052a6000
710018ec48  ldr x8,[x8, #0x630]
710018ec4c  mov w9,#0x1
710018ec50  adrp x10,0x7104400000
710018ec54  add x10,x10,#0x8ba
710018ec58  strb w9,[x19, #0x78]
710018ec5c  stp x8,xzr,[x19, #0x30]
710018ec60  str x10,[x19, #0x40]
710018ec64  ldp x29,x30,[sp, #0x10]
710018ec68  mov w0,#0x5
710018ec6c  ldp x20,x19,[sp], #0x20
710018ec70  ret
