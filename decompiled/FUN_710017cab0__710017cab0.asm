// addr:      710017cab0
// offset:    0x17cab0
// name:      FUN_710017cab0
// mangled:   
// size:      288

710017cab0  sub sp,sp,#0x60
710017cab4  str x21,[sp, #0x30]
710017cab8  stp x20,x19,[sp, #0x40]
710017cabc  stp x29,x30,[sp, #0x50]
710017cac0  add x29,sp,#0x50
710017cac4  mov w8,#0x5
710017cac8  str w8,[x0, #0x110]
710017cacc  ldr x8,[x0, #0x158]
710017cad0  ldr x8,[x8, #0x18]
710017cad4  mov x19,x0
710017cad8  add x0,sp,#0x10
710017cadc  add x1,x8,#0x2a0
710017cae0  bl 0x71000b1c60
710017cae4  add x0,sp,#0x10
710017cae8  bl 0x71000b2850
710017caec  tbz w0,#0x0,0x710017cb04
710017caf0  add x20,x19,#0x138
710017caf4  add x0,sp,#0x10
710017caf8  mov x1,x20
710017cafc  bl 0x71000b2b10
710017cb00  tbz w0,#0x0,0x710017cb44
710017cb04  mov x0,x19
710017cb08  bl 0x71001a1890
710017cb0c  tbz w0,#0x0,0x710017cb70
710017cb10  mov x0,x19
710017cb14  bl 0x71001a1930
710017cb18  ldr x0,[x19, #0x158]
710017cb1c  bl 0x7100175240
710017cb20  sub w8,w0,#0x2
710017cb24  cmp w8,#0x2
710017cb28  b.cc 0x710017cb84
710017cb2c  adrp x8,0x71052a5000
710017cb30  ldr x8,[x8, #0x80]
710017cb34  cmp w0,#0x1
710017cb38  ldr x0,[x8]
710017cb3c  mov w1,#0x1
710017cb40  b 0x710017cb94
710017cb44  mov w21,#0x20
710017cb48  add x0,sp,#0x10
710017cb4c  mov x1,sp
710017cb50  str wzr,[sp, #0x8]
710017cb54  str x21,[sp]
710017cb58  bl 0x71000b2b70
710017cb5c  mov x1,sp
710017cb60  mov x0,x20
710017cb64  str wzr,[sp, #0x8]
710017cb68  str x21,[sp]
710017cb6c  bl 0x71000b2b70
710017cb70  adrp x9,0x71052a5000
710017cb74  ldr x9,[x9, #0x758]
710017cb78  adrp x8,0x710437b000
710017cb7c  add x8,x8,#0xbcb
710017cb80  b 0x710017cba8
710017cb84  adrp x8,0x71052a5000
710017cb88  ldr x8,[x8, #0x80]
710017cb8c  ldr x0,[x8]
710017cb90  mov w1,#0x2
710017cb94  bl 0x7100149240
710017cb98  adrp x9,0x71052a6000
710017cb9c  ldr x9,[x9, #0x3b8]
710017cba0  adrp x8,0x71042e6000
710017cba4  add x8,x8,#0x477
710017cba8  add x0,sp,#0x10
710017cbac  stp x9,xzr,[x19, #0x30]
710017cbb0  str x8,[x19, #0x40]
710017cbb4  bl 0x71000b1cf0
710017cbb8  ldp x29,x30,[sp, #0x50]
710017cbbc  ldr x21,[sp, #0x30]
710017cbc0  ldp x20,x19,[sp, #0x40]
710017cbc4  mov x0,xzr
710017cbc8  add sp,sp,#0x60
710017cbcc  ret
