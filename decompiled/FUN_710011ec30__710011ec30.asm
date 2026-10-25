// addr:      710011ec30
// offset:    0x11ec30
// name:      FUN_710011ec30
// mangled:   
// size:      188

710011ec30  sub sp,sp,#0x50
710011ec34  str x21,[sp, #0x20]
710011ec38  stp x20,x19,[sp, #0x30]
710011ec3c  stp x29,x30,[sp, #0x40]
710011ec40  add x29,sp,#0x40
710011ec44  adrp x8,0x71052a5000
710011ec48  ldr x8,[x8, #0x80]
710011ec4c  mov x19,x0
710011ec50  ldr x0,[x8]
710011ec54  bl 0x7100146ba0
710011ec58  cmp w0,#0x5
710011ec5c  b.ne 0x710011ecbc
710011ec60  mov x0,x19
710011ec64  bl 0x7100140490
710011ec68  ldr x20,[x19, #0x58]
710011ec6c  cbz x20,0x710011ecb4
710011ec70  mov w8,#0xc406
710011ec74  str w8,[sp]
710011ec78  mov x8,sp
710011ec7c  orr x21,x8,#0x4
710011ec80  mov x0,x21
710011ec84  bl 0x71039c0a80
710011ec88  sub x1,x29,#0x18
710011ec8c  mov x0,x21
710011ec90  stur wzr,[x29, #-0x18]
710011ec94  bl 0x71039c0a90
710011ec98  add x0,sp,#0x10
710011ec9c  mov x1,sp
710011eca0  bl 0x71000bce50
710011eca4  add x1,sp,#0x10
710011eca8  mov x0,x20
710011ecac  bl 0x71000b41f0
710011ecb0  str xzr,[x19, #0x58]
710011ecb4  mov w0,#0x1
710011ecb8  b 0x710011ecd8
710011ecbc  adrp x8,0x71052a5000
710011ecc0  ldr x8,[x8, #0x9a8]
710011ecc4  mov x0,xzr
710011ecc8  stp x8,xzr,[x19, #0x30]
710011eccc  adrp x8,0x7104411000
710011ecd0  add x8,x8,#0xc05
710011ecd4  str x8,[x19, #0x40]
710011ecd8  ldp x29,x30,[sp, #0x40]
710011ecdc  ldr x21,[sp, #0x20]
710011ece0  ldp x20,x19,[sp, #0x30]
710011ece4  add sp,sp,#0x50
710011ece8  ret
