// addr:      710017a3d0
// offset:    0x17a3d0
// name:      FUN_710017a3d0
// mangled:   
// size:      120

710017a3d0  str x19,[sp, #-0x20]!
710017a3d4  stp x29,x30,[sp, #0x10]
710017a3d8  add x29,sp,#0x10
710017a3dc  adrp x8,0x71052a5000
710017a3e0  ldr x8,[x8, #0x80]
710017a3e4  ldr x8,[x8]
710017a3e8  ldrb w9,[x8, #0x162]
710017a3ec  add x8,x8,x9, LSL #0x3
710017a3f0  mov x19,x0
710017a3f4  ldr x0,[x8, #0x168]
710017a3f8  ldr x8,[x0]
710017a3fc  ldr x8,[x8, #0x68]
710017a400  blr x8
710017a404  tbz w0,#0x0,0x710017a438
710017a408  add x0,x19,#0x60
710017a40c  bl 0x71000b40e0
710017a410  adrp x8,0x71052a5000
710017a414  ldr x8,[x8, #0x198]
710017a418  mov x0,xzr
710017a41c  stp x8,xzr,[x19, #0x30]
710017a420  adrp x8,0x71043ef000
710017a424  add x8,x8,#0xd99
710017a428  str x8,[x19, #0x40]
710017a42c  ldp x29,x30,[sp, #0x10]
710017a430  ldr x19,[sp], #0x20
710017a434  ret
710017a438  mov w0,#0x5
710017a43c  ldp x29,x30,[sp, #0x10]
710017a440  ldr x19,[sp], #0x20
710017a444  ret
