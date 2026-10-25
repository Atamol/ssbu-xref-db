// addr:      710014b970
// offset:    0x14b970
// name:      FUN_710014b970
// mangled:   
// size:      216

710014b970  sub sp,sp,#0x50
710014b974  str x23,[sp, #0x10]
710014b978  stp x22,x21,[sp, #0x20]
710014b97c  stp x20,x19,[sp, #0x30]
710014b980  stp x29,x30,[sp, #0x40]
710014b984  add x29,sp,#0x40
710014b988  mov x19,x8
710014b98c  ldr x8,[x3]
710014b990  ldr x8,[x8, #0xe0]
710014b994  mov x20,x0
710014b998  mov x0,x3
710014b99c  mov x21,x3
710014b9a0  mov w22,w2
710014b9a4  mov x23,x1
710014b9a8  blr x8
710014b9ac  tbz w0,#0x0,0x710014b9f8
710014b9b0  mov x0,x23
710014b9b4  str x23,[x20, #0x58]
710014b9b8  bl 0x71000b4160
710014b9bc  ldr x8,[x20]
710014b9c0  str w22,[x20, #0x90]
710014b9c4  str x21,[x20, #0x98]
710014b9c8  ldr x8,[x8, #0x10]
710014b9cc  mov w1,#0x1
710014b9d0  mov x0,x20
710014b9d4  blr x8
710014b9d8  adrp x8,0x71052a5000
710014b9dc  ldr x8,[x8, #0xef0]
710014b9e0  adrp x9,0x7104442000
710014b9e4  add x9,x9,#0xaab
710014b9e8  stp xzr,x9,[x20, #0x38]
710014b9ec  str x8,[x20, #0x30]
710014b9f0  str wzr,[sp]
710014b9f4  b 0x710014ba04
710014b9f8  mov w8,#0xc08
710014b9fc  movk w8,#0x1, LSL #16
710014ba00  str w8,[sp]
710014ba04  mov x8,sp
710014ba08  orr x20,x8,#0x4
710014ba0c  mov x0,x20
710014ba10  bl 0x71039c0a80
710014ba14  add x1,sp,#0x18
710014ba18  mov x0,x20
710014ba1c  str wzr,[sp, #0x18]
710014ba20  bl 0x71039c0a90
710014ba24  mov x1,sp
710014ba28  mov x0,x19
710014ba2c  bl 0x71000bce50
710014ba30  ldp x29,x30,[sp, #0x40]
710014ba34  ldr x23,[sp, #0x10]
710014ba38  ldp x20,x19,[sp, #0x30]
710014ba3c  ldp x22,x21,[sp, #0x20]
710014ba40  add sp,sp,#0x50
710014ba44  ret
