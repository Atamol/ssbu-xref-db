// addr:      710017a330
// offset:    0x17a330
// name:      FUN_710017a330
// mangled:   
// size:      148

710017a330  sub sp,sp,#0x30
710017a334  str x19,[sp, #0x10]
710017a338  stp x29,x30,[sp, #0x20]
710017a33c  add x29,sp,#0x20
710017a340  adrp x8,0x71052a5000
710017a344  ldr x8,[x8, #0x80]
710017a348  ldr x8,[x8]
710017a34c  ldrb w9,[x8, #0x162]
710017a350  add x8,x8,x9, LSL #0x3
710017a354  mov x19,x0
710017a358  ldr x0,[x8, #0x168]
710017a35c  ldr x8,[x0]
710017a360  ldr w2,[x19, #0x114]
710017a364  add x1,x19,#0x60
710017a368  ldr x9,[x8, #0x60]
710017a36c  mov x8,sp
710017a370  blr x9
710017a374  adrp x8,0x71052a5000
710017a378  adrp x9,0x71052a6000
710017a37c  ldr x8,[x8, #0x198]
710017a380  ldr x9,[x9, #0x2c0]
710017a384  ldr w11,[sp]
710017a388  cmp w11,#0x0
710017a38c  adrp x10,0x71043ef000
710017a390  add x10,x10,#0xd99
710017a394  csel x8,x9,x8,eq
710017a398  adrp x9,0x7104400000
710017a39c  add x9,x9,#0x7f5
710017a3a0  csel x9,x9,x10,eq
710017a3a4  stp x8,xzr,[x19, #0x30]
710017a3a8  mov w10,#0x5
710017a3ac  str x9,[x19, #0x40]
710017a3b0  ldp x29,x30,[sp, #0x20]
710017a3b4  ldr x19,[sp, #0x10]
710017a3b8  csel x0,x10,xzr,eq
710017a3bc  add sp,sp,#0x30
710017a3c0  ret
