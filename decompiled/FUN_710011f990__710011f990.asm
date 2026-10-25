// addr:      710011f990
// offset:    0x11f990
// name:      FUN_710011f990
// mangled:   
// size:      152

710011f990  sub sp,sp,#0x30
710011f994  str x19,[sp, #0x10]
710011f998  stp x29,x30,[sp, #0x20]
710011f99c  add x29,sp,#0x20
710011f9a0  adrp x8,0x71052a5000
710011f9a4  ldr x8,[x8, #0x80]
710011f9a8  ldr x8,[x8]
710011f9ac  ldrb w9,[x8, #0x162]
710011f9b0  add x10,x8,x9, LSL #0x3
710011f9b4  mov x19,x0
710011f9b8  ldr x0,[x10, #0x168]
710011f9bc  add x8,x8,x9, LSL #0x2
710011f9c0  ldr w2,[x8, #0x180]
710011f9c4  ldr x8,[x0]
710011f9c8  ldr x9,[x8, #0x70]
710011f9cc  add x1,x19,#0x60
710011f9d0  mov x8,sp
710011f9d4  blr x9
710011f9d8  adrp x8,0x71052a5000
710011f9dc  adrp x9,0x71052a5000
710011f9e0  ldr x8,[x8, #0x510]
710011f9e4  ldr x9,[x9, #0xa10]
710011f9e8  ldr w11,[sp]
710011f9ec  cmp w11,#0x0
710011f9f0  adrp x10,0x710425e000
710011f9f4  add x10,x10,#0x5ab
710011f9f8  csel x8,x9,x8,eq
710011f9fc  adrp x9,0x710436b000
710011fa00  add x9,x9,#0x6f1
710011fa04  csel x9,x9,x10,eq
710011fa08  stp x8,xzr,[x19, #0x30]
710011fa0c  mov w10,#0x5
710011fa10  str x9,[x19, #0x40]
710011fa14  ldp x29,x30,[sp, #0x20]
710011fa18  ldr x19,[sp, #0x10]
710011fa1c  csel x0,x10,xzr,eq
710011fa20  add sp,sp,#0x30
710011fa24  ret
