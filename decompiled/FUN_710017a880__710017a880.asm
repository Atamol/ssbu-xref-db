// addr:      710017a880
// offset:    0x17a880
// name:      FUN_710017a880
// mangled:   
// size:      200

710017a880  sub sp,sp,#0x40
710017a884  stp x20,x19,[sp, #0x20]
710017a888  stp x29,x30,[sp, #0x30]
710017a88c  add x29,sp,#0x30
710017a890  ldr x8,[x0, #0x58]
710017a894  mov x19,x0
710017a898  cbz x8,0x710017a8c8
710017a89c  ldrb w8,[x8, #0x28]
710017a8a0  cbz w8,0x710017a8c8
710017a8a4  ldr x8,[x19]
710017a8a8  ldr x8,[x8, #0x30]
710017a8ac  mov x0,x19
710017a8b0  blr x8
710017a8b4  mov w0,#0x1
710017a8b8  ldp x29,x30,[sp, #0x30]
710017a8bc  ldp x20,x19,[sp, #0x20]
710017a8c0  add sp,sp,#0x40
710017a8c4  ret
710017a8c8  ldr x0,[x19, #0xa0]
710017a8cc  ldr x8,[x0]
710017a8d0  ldr x9,[x8, #0x40]
710017a8d4  add x1,x19,#0x60
710017a8d8  add x8,sp,#0x10
710017a8dc  blr x9
710017a8e0  ldr w8,[sp, #0x10]
710017a8e4  cbz w8,0x710017a91c
710017a8e8  ldr x20,[x19, #0x58]
710017a8ec  mov x0,sp
710017a8f0  add x1,sp,#0x10
710017a8f4  bl 0x71000bce50
710017a8f8  mov x1,sp
710017a8fc  mov x0,x20
710017a900  bl 0x71000b41f0
710017a904  str xzr,[x19, #0x58]
710017a908  mov w0,#0x1
710017a90c  ldp x29,x30,[sp, #0x30]
710017a910  ldp x20,x19,[sp, #0x20]
710017a914  add sp,sp,#0x40
710017a918  ret
710017a91c  adrp x8,0x71052a6000
710017a920  ldr x8,[x8, #0x2e8]
710017a924  adrp x9,0x710424e000
710017a928  add x9,x9,#0x9a8
710017a92c  mov w0,#0x5
710017a930  str x9,[x19, #0x40]
710017a934  stp x8,xzr,[x19, #0x30]
710017a938  ldp x29,x30,[sp, #0x30]
710017a93c  ldp x20,x19,[sp, #0x20]
710017a940  add sp,sp,#0x40
710017a944  ret
