// addr:      710392e290
// offset:    0x392e290
// name:      FUN_710392e290
// mangled:   
// size:      152

710392e290  sub sp,sp,#0x80
710392e294  stp x29,x30,[sp, #0x70]
710392e298  add x29,sp,#0x70
710392e29c  stur x0,[x29, #-0x8]
710392e2a0  stur x1,[x29, #-0x10]
710392e2a4  b 0x710392e2a8
710392e2a8  b 0x710392e2ac
710392e2ac  add x0,sp,#0x30
710392e2b0  bl 0x710392cea0
710392e2b4  mov x0,sp
710392e2b8  bl 0x710392cf00
710392e2bc  mov w8,#0x1
710392e2c0  strb w8,[sp, #0x31]
710392e2c4  strb w8,[sp, #0x33]
710392e2c8  strb w8,[sp, #0x34]
710392e2cc  str x8,[sp, #0x38]
710392e2d0  adrp x9,0x710435a000
710392e2d4  add x9,x9,#0xbe
710392e2d8  str x9,[sp, #0x40]
710392e2dc  adrp x9,0x710436a000
710392e2e0  add x9,x9,#0xfd2
710392e2e4  str x9,[sp, #0x48]
710392e2e8  sub x9,x29,#0x18
710392e2ec  str x9,[sp]
710392e2f0  str x8,[sp, #0x8]
710392e2f4  ldur x8,[x29, #-0x10]
710392e2f8  str x8,[sp, #0x10]
710392e2fc  ldur x8,[x29, #-0x8]
710392e300  str x8,[sp, #0x18]
710392e304  add x0,sp,#0x30
710392e308  mov x1,sp
710392e30c  bl 0x710392cf50
710392e310  b 0x710392e314
710392e314  b 0x710392e318
710392e318  ldur x0,[x29, #-0x18]
710392e31c  ldp x29,x30,[sp, #0x70]
710392e320  add sp,sp,#0x80
710392e324  ret
