// addr:      710011ea90
// offset:    0x11ea90
// name:      FUN_710011ea90
// mangled:   
// size:      188

710011ea90  sub sp,sp,#0x50
710011ea94  str x21,[sp, #0x20]
710011ea98  stp x20,x19,[sp, #0x30]
710011ea9c  stp x29,x30,[sp, #0x40]
710011eaa0  add x29,sp,#0x40
710011eaa4  adrp x8,0x71052a5000
710011eaa8  ldr x8,[x8, #0x80]
710011eaac  mov x19,x0
710011eab0  ldr x0,[x8]
710011eab4  bl 0x7100146ba0
710011eab8  cmp w0,#0x5
710011eabc  b.ne 0x710011eb1c
710011eac0  mov x0,x19
710011eac4  bl 0x7100140490
710011eac8  ldr x20,[x19, #0x58]
710011eacc  cbz x20,0x710011eb14
710011ead0  mov w8,#0xc406
710011ead4  str w8,[sp]
710011ead8  mov x8,sp
710011eadc  orr x21,x8,#0x4
710011eae0  mov x0,x21
710011eae4  bl 0x71039c0a80
710011eae8  sub x1,x29,#0x18
710011eaec  mov x0,x21
710011eaf0  stur wzr,[x29, #-0x18]
710011eaf4  bl 0x71039c0a90
710011eaf8  add x0,sp,#0x10
710011eafc  mov x1,sp
710011eb00  bl 0x71000bce50
710011eb04  add x1,sp,#0x10
710011eb08  mov x0,x20
710011eb0c  bl 0x71000b41f0
710011eb10  str xzr,[x19, #0x58]
710011eb14  mov w0,#0x1
710011eb18  b 0x710011eb38
710011eb1c  adrp x8,0x71052a5000
710011eb20  ldr x8,[x8, #0x9b0]
710011eb24  mov x0,xzr
710011eb28  stp x8,xzr,[x19, #0x30]
710011eb2c  adrp x8,0x71043ce000
710011eb30  add x8,x8,#0x700
710011eb34  str x8,[x19, #0x40]
710011eb38  ldp x29,x30,[sp, #0x40]
710011eb3c  ldr x21,[sp, #0x20]
710011eb40  ldp x20,x19,[sp, #0x30]
710011eb44  add sp,sp,#0x50
710011eb48  ret
