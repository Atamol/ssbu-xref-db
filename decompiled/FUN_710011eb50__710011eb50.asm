// addr:      710011eb50
// offset:    0x11eb50
// name:      FUN_710011eb50
// mangled:   
// size:      188

710011eb50  sub sp,sp,#0x50
710011eb54  str x21,[sp, #0x20]
710011eb58  stp x20,x19,[sp, #0x30]
710011eb5c  stp x29,x30,[sp, #0x40]
710011eb60  add x29,sp,#0x40
710011eb64  adrp x8,0x71052a5000
710011eb68  ldr x8,[x8, #0x80]
710011eb6c  mov x19,x0
710011eb70  ldr x0,[x8]
710011eb74  bl 0x7100146ba0
710011eb78  cmp w0,#0x5
710011eb7c  b.ne 0x710011ebdc
710011eb80  mov x0,x19
710011eb84  bl 0x7100140490
710011eb88  ldr x20,[x19, #0x58]
710011eb8c  cbz x20,0x710011ebd4
710011eb90  mov w8,#0xc406
710011eb94  str w8,[sp]
710011eb98  mov x8,sp
710011eb9c  orr x21,x8,#0x4
710011eba0  mov x0,x21
710011eba4  bl 0x71039c0a80
710011eba8  sub x1,x29,#0x18
710011ebac  mov x0,x21
710011ebb0  stur wzr,[x29, #-0x18]
710011ebb4  bl 0x71039c0a90
710011ebb8  add x0,sp,#0x10
710011ebbc  mov x1,sp
710011ebc0  bl 0x71000bce50
710011ebc4  add x1,sp,#0x10
710011ebc8  mov x0,x20
710011ebcc  bl 0x71000b41f0
710011ebd0  str xzr,[x19, #0x58]
710011ebd4  mov w0,#0x1
710011ebd8  b 0x710011ebf8
710011ebdc  adrp x8,0x71052a5000
710011ebe0  ldr x8,[x8, #0x9b8]
710011ebe4  mov x0,xzr
710011ebe8  stp x8,xzr,[x19, #0x30]
710011ebec  adrp x8,0x71042e6000
710011ebf0  add x8,x8,#0x3eb
710011ebf4  str x8,[x19, #0x40]
710011ebf8  ldp x29,x30,[sp, #0x40]
710011ebfc  ldr x21,[sp, #0x20]
710011ec00  ldp x20,x19,[sp, #0x30]
710011ec04  add sp,sp,#0x50
710011ec08  ret
