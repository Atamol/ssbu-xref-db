// addr:      710017ad40
// offset:    0x17ad40
// name:      FUN_710017ad40
// mangled:   
// size:      64

710017ad40  str x19,[sp, #-0x20]!
710017ad44  stp x29,x30,[sp, #0x10]
710017ad48  add x29,sp,#0x10
710017ad4c  mov x19,x0
710017ad50  add x0,x0,#0xb0
710017ad54  bl 0x71000bcf30
710017ad58  adrp x8,0x71052a6000
710017ad5c  ldr x8,[x8, #0x310]
710017ad60  adrp x9,0x710438b000
710017ad64  add x9,x9,#0xea2
710017ad68  str x9,[x19, #0x40]
710017ad6c  mov x0,xzr
710017ad70  stp x8,xzr,[x19, #0x30]
710017ad74  ldp x29,x30,[sp, #0x10]
710017ad78  ldr x19,[sp], #0x20
710017ad7c  ret
