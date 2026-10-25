// addr:      710011ecf0
// offset:    0x11ecf0
// name:      FUN_710011ecf0
// mangled:   
// size:      188

710011ecf0  sub sp,sp,#0x50
710011ecf4  str x21,[sp, #0x20]
710011ecf8  stp x20,x19,[sp, #0x30]
710011ecfc  stp x29,x30,[sp, #0x40]
710011ed00  add x29,sp,#0x40
710011ed04  adrp x8,0x71052a5000
710011ed08  ldr x8,[x8, #0x80]
710011ed0c  mov x19,x0
710011ed10  ldr x0,[x8]
710011ed14  bl 0x7100146ba0
710011ed18  cmp w0,#0x5
710011ed1c  b.ne 0x710011ed7c
710011ed20  mov x0,x19
710011ed24  bl 0x7100140490
710011ed28  ldr x20,[x19, #0x58]
710011ed2c  cbz x20,0x710011ed74
710011ed30  mov w8,#0xc406
710011ed34  str w8,[sp]
710011ed38  mov x8,sp
710011ed3c  orr x21,x8,#0x4
710011ed40  mov x0,x21
710011ed44  bl 0x71039c0a80
710011ed48  sub x1,x29,#0x18
710011ed4c  mov x0,x21
710011ed50  stur wzr,[x29, #-0x18]
710011ed54  bl 0x71039c0a90
710011ed58  add x0,sp,#0x10
710011ed5c  mov x1,sp
710011ed60  bl 0x71000bce50
710011ed64  add x1,sp,#0x10
710011ed68  mov x0,x20
710011ed6c  bl 0x71000b41f0
710011ed70  str xzr,[x19, #0x58]
710011ed74  mov w0,#0x1
710011ed78  b 0x710011ed98
710011ed7c  adrp x8,0x71052a5000
710011ed80  ldr x8,[x8, #0x9c8]
710011ed84  mov x0,xzr
710011ed88  stp x8,xzr,[x19, #0x30]
710011ed8c  adrp x8,0x710439c000
710011ed90  add x8,x8,#0x5a5
710011ed94  str x8,[x19, #0x40]
710011ed98  ldp x29,x30,[sp, #0x40]
710011ed9c  ldr x21,[sp, #0x20]
710011eda0  ldp x20,x19,[sp, #0x30]
710011eda4  add sp,sp,#0x50
710011eda8  ret
