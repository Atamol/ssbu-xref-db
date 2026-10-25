// addr:      710017aa80
// offset:    0x17aa80
// name:      FUN_710017aa80
// mangled:   
// size:      224

710017aa80  sub sp,sp,#0x60
710017aa84  str x21,[sp, #0x30]
710017aa88  stp x20,x19,[sp, #0x40]
710017aa8c  stp x29,x30,[sp, #0x50]
710017aa90  add x29,sp,#0x50
710017aa94  ldr x20,[x0, #0xa8]
710017aa98  mov x19,x0
710017aa9c  mov x0,x20
710017aaa0  bl 0x7100174f00
710017aaa4  tbnz w0,#0x0,0x710017aab4
710017aaa8  mov x0,x20
710017aaac  bl 0x7100174f20
710017aab0  tbz w0,#0x0,0x710017ab00
710017aab4  ldr x0,[x19, #0xa8]
710017aab8  add x8,sp,#0x10
710017aabc  bl 0x7100175430
710017aac0  ldr w8,[sp, #0x10]
710017aac4  cbz w8,0x710017aae0
710017aac8  ldr x20,[x19, #0x58]
710017aacc  mov x0,sp
710017aad0  add x1,sp,#0x10
710017aad4  bl 0x71000bce50
710017aad8  mov x1,sp
710017aadc  b 0x710017ab3c
710017aae0  adrp x8,0x71052a5000
710017aae4  ldr x8,[x8, #0x4e8]
710017aae8  mov x0,xzr
710017aaec  stp x8,xzr,[x19, #0x30]
710017aaf0  adrp x8,0x71042c4000
710017aaf4  add x8,x8,#0x3a
710017aaf8  str x8,[x19, #0x40]
710017aafc  b 0x710017ab4c
710017ab00  mov w8,#0xc406
710017ab04  ldr x20,[x19, #0x58]
710017ab08  str w8,[sp, #0x10]
710017ab0c  add x8,sp,#0x10
710017ab10  orr x21,x8,#0x4
710017ab14  mov x0,x21
710017ab18  bl 0x71039c0a80
710017ab1c  sub x1,x29,#0x18
710017ab20  mov x0,x21
710017ab24  stur wzr,[x29, #-0x18]
710017ab28  bl 0x71039c0a90
710017ab2c  add x0,sp,#0x20
710017ab30  add x1,sp,#0x10
710017ab34  bl 0x71000bce50
710017ab38  add x1,sp,#0x20
710017ab3c  mov x0,x20
710017ab40  bl 0x71000b41f0
710017ab44  str xzr,[x19, #0x58]
710017ab48  mov w0,#0x1
710017ab4c  ldp x29,x30,[sp, #0x50]
710017ab50  ldr x21,[sp, #0x30]
710017ab54  ldp x20,x19,[sp, #0x40]
710017ab58  add sp,sp,#0x60
710017ab5c  ret
