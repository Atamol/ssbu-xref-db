// addr:      710011ca80
// offset:    0x11ca80
// name:      FUN_710011ca80
// mangled:   
// size:      296

710011ca80  sub sp,sp,#0x60
710011ca84  str x21,[sp, #0x30]
710011ca88  stp x20,x19,[sp, #0x40]
710011ca8c  stp x29,x30,[sp, #0x50]
710011ca90  add x29,sp,#0x50
710011ca94  ldr x20,[x0, #0x58]
710011ca98  mov x19,x0
710011ca9c  cbz x20,0x710011cae4
710011caa0  ldrb w8,[x20, #0x28]
710011caa4  cbz w8,0x710011cae4
710011caa8  mov w8,#0x6c05
710011caac  str w8,[sp, #0x10]
710011cab0  add x8,sp,#0x10
710011cab4  orr x21,x8,#0x4
710011cab8  mov x0,x21
710011cabc  bl 0x71039c0a80
710011cac0  sub x1,x29,#0x18
710011cac4  mov x0,x21
710011cac8  stur wzr,[x29, #-0x18]
710011cacc  bl 0x71039c0a90
710011cad0  add x0,sp,#0x20
710011cad4  add x1,sp,#0x10
710011cad8  bl 0x71000bce50
710011cadc  add x1,sp,#0x20
710011cae0  b 0x710011cb24
710011cae4  ldr x0,[x19, #0x138]
710011cae8  ldr x8,[x0]
710011caec  ldr x8,[x8, #0x58]
710011caf0  blr x8
710011caf4  tbz w0,#0x0,0x710011cb48
710011caf8  mov x20,x19
710011cafc  ldr w8,[x20, #0x60]!
710011cb00  cmp w8,#0x2
710011cb04  b.eq 0x710011cb50
710011cb08  cmp w8,#0x3
710011cb0c  b.ne 0x710011cb48
710011cb10  ldr x20,[x19, #0x58]
710011cb14  add x1,x19,#0x64
710011cb18  mov x0,sp
710011cb1c  bl 0x71000bce50
710011cb20  mov x1,sp
710011cb24  mov x0,x20
710011cb28  bl 0x71000b41f0
710011cb2c  ldr x8,[x19]
710011cb30  str xzr,[x19, #0x58]
710011cb34  ldr x8,[x8, #0x50]
710011cb38  mov x0,x19
710011cb3c  blr x8
710011cb40  mov w0,#0x1
710011cb44  b 0x710011cb94
710011cb48  mov w0,#0x5
710011cb4c  b 0x710011cb94
710011cb50  adrp x8,0x71052a5000
710011cb54  ldr x8,[x8, #0x80]
710011cb58  ldr x0,[x8]
710011cb5c  ldr w1,[x19, #0x114]
710011cb60  bl 0x7100149270
710011cb64  mov w1,#0x1
710011cb68  mov x0,x19
710011cb6c  bl 0x710013f6f0
710011cb70  mov x0,x20
710011cb74  bl 0x71000b40e0
710011cb78  adrp x8,0x71052a5000
710011cb7c  ldr x8,[x8, #0x8a8]
710011cb80  mov x0,xzr
710011cb84  stp x8,xzr,[x19, #0x30]
710011cb88  adrp x8,0x710437b000
710011cb8c  add x8,x8,#0xa9c
710011cb90  str x8,[x19, #0x40]
710011cb94  ldp x29,x30,[sp, #0x50]
710011cb98  ldr x21,[sp, #0x30]
710011cb9c  ldp x20,x19,[sp, #0x40]
710011cba0  add sp,sp,#0x60
710011cba4  ret
