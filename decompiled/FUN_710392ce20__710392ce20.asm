// addr:      710392ce20
// offset:    0x392ce20
// name:      FUN_710392ce20
// mangled:   
// size:      124

710392ce20  sub sp,sp,#0x80
710392ce24  stp x29,x30,[sp, #0x70]
710392ce28  add x29,sp,#0x70
710392ce2c  stur x0,[x29, #-0x8]
710392ce30  b 0x710392ce34
710392ce34  b 0x710392ce38
710392ce38  add x0,sp,#0x38
710392ce3c  bl 0x710392cea0
710392ce40  add x0,sp,#0x8
710392ce44  bl 0x710392cf00
710392ce48  mov w8,#0x1
710392ce4c  strb w8,[sp, #0x39]
710392ce50  strb w8,[sp, #0x3b]
710392ce54  strb w8,[sp, #0x3c]
710392ce58  adrp x9,0x71042c3000
710392ce5c  add x9,x9,#0xa57
710392ce60  str x9,[sp, #0x48]
710392ce64  sub x9,x29,#0x10
710392ce68  str x9,[sp, #0x8]
710392ce6c  str x8,[sp, #0x10]
710392ce70  ldur x8,[x29, #-0x8]
710392ce74  str x8,[sp, #0x18]
710392ce78  add x0,sp,#0x38
710392ce7c  add x1,sp,#0x8
710392ce80  bl 0x710392cf50
710392ce84  b 0x710392ce88
710392ce88  b 0x710392ce8c
710392ce8c  ldur x0,[x29, #-0x10]
710392ce90  ldp x29,x30,[sp, #0x70]
710392ce94  add sp,sp,#0x80
710392ce98  ret
