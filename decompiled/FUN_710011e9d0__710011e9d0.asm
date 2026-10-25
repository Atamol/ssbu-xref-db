// addr:      710011e9d0
// offset:    0x11e9d0
// name:      FUN_710011e9d0
// mangled:   
// size:      188

710011e9d0  sub sp,sp,#0x50
710011e9d4  str x21,[sp, #0x20]
710011e9d8  stp x20,x19,[sp, #0x30]
710011e9dc  stp x29,x30,[sp, #0x40]
710011e9e0  add x29,sp,#0x40
710011e9e4  adrp x8,0x71052a5000
710011e9e8  ldr x8,[x8, #0x80]
710011e9ec  mov x19,x0
710011e9f0  ldr x0,[x8]
710011e9f4  bl 0x7100146ba0
710011e9f8  cmp w0,#0x5
710011e9fc  b.ne 0x710011ea5c
710011ea00  mov x0,x19
710011ea04  bl 0x7100140490
710011ea08  ldr x20,[x19, #0x58]
710011ea0c  cbz x20,0x710011ea54
710011ea10  mov w8,#0xc406
710011ea14  str w8,[sp]
710011ea18  mov x8,sp
710011ea1c  orr x21,x8,#0x4
710011ea20  mov x0,x21
710011ea24  bl 0x71039c0a80
710011ea28  sub x1,x29,#0x18
710011ea2c  mov x0,x21
710011ea30  stur wzr,[x29, #-0x18]
710011ea34  bl 0x71039c0a90
710011ea38  add x0,sp,#0x10
710011ea3c  mov x1,sp
710011ea40  bl 0x71000bce50
710011ea44  add x1,sp,#0x10
710011ea48  mov x0,x20
710011ea4c  bl 0x71000b41f0
710011ea50  str xzr,[x19, #0x58]
710011ea54  mov w0,#0x1
710011ea58  b 0x710011ea78
710011ea5c  adrp x8,0x71052a5000
710011ea60  ldr x8,[x8, #0x9a8]
710011ea64  mov x0,xzr
710011ea68  stp x8,xzr,[x19, #0x30]
710011ea6c  adrp x8,0x7104411000
710011ea70  add x8,x8,#0xc05
710011ea74  str x8,[x19, #0x40]
710011ea78  ldp x29,x30,[sp, #0x40]
710011ea7c  ldr x21,[sp, #0x20]
710011ea80  ldp x20,x19,[sp, #0x30]
710011ea84  add sp,sp,#0x50
710011ea88  ret
