// addr:      710010cc20
// offset:    0x10cc20
// name:      FUN_710010cc20
// mangled:   
// size:      452

710010cc20  sub sp,sp,#0x90
710010cc24  str x21,[sp, #0x60]
710010cc28  stp x20,x19,[sp, #0x70]
710010cc2c  stp x29,x30,[sp, #0x80]
710010cc30  add x29,sp,#0x80
710010cc34  adrp x8,0x71052a5000
710010cc38  ldr x8,[x8, #0x80]
710010cc3c  mov x19,x0
710010cc40  ldr x0,[x8]
710010cc44  bl 0x7100146ba0
710010cc48  sub w8,w0,#0x5
710010cc4c  cmp w8,#0x3
710010cc50  b.hi 0x710010cca8
710010cc54  adrp x9,0x7104496000
710010cc58  add x9,x9,#0x9b0
710010cc5c  ldrsw x8,[x9, x8, LSL #0x2]
710010cc60  add x8,x8,x9
710010cc64  br x8
710010cc68  mov w8,#0xc406
710010cc6c  ldr x20,[x19, #0x58]
710010cc70  str w8,[sp, #0x40]
710010cc74  add x8,sp,#0x40
710010cc78  orr x21,x8,#0x4
710010cc7c  mov x0,x21
710010cc80  bl 0x71039c0a80
710010cc84  sub x1,x29,#0x18
710010cc88  mov x0,x21
710010cc8c  stur wzr,[x29, #-0x18]
710010cc90  bl 0x71039c0a90
710010cc94  sub x0,x29,#0x30
710010cc98  add x1,sp,#0x40
710010cc9c  bl 0x71000bce50
710010cca0  sub x1,x29,#0x30
710010cca4  b 0x710010cda0
710010cca8  ldr x0,[x19, #0x90]
710010ccac  ldr x8,[x0]
710010ccb0  ldr w2,[x19, #0x98]
710010ccb4  add x1,x19,#0x60
710010ccb8  ldr x9,[x8, #0x70]
710010ccbc  add x8,sp,#0x40
710010ccc0  blr x9
710010ccc4  ldr w8,[sp, #0x40]
710010ccc8  cbz w8,0x710010cdc4
710010cccc  ldr x20,[x19, #0x58]
710010ccd0  mov x0,sp
710010ccd4  add x1,sp,#0x40
710010ccd8  bl 0x71000bce50
710010ccdc  mov x1,sp
710010cce0  b 0x710010cda0
710010cce4  mov w8,#0xa471
710010cce8  ldr x20,[x19, #0x58]
710010ccec  str w8,[sp, #0x40]
710010ccf0  add x8,sp,#0x40
710010ccf4  orr x21,x8,#0x4
710010ccf8  mov x0,x21
710010ccfc  bl 0x71039c0a80
710010cd00  sub x1,x29,#0x18
710010cd04  mov x0,x21
710010cd08  stur wzr,[x29, #-0x18]
710010cd0c  bl 0x71039c0a90
710010cd10  add x0,sp,#0x30
710010cd14  add x1,sp,#0x40
710010cd18  bl 0x71000bce50
710010cd1c  add x1,sp,#0x30
710010cd20  b 0x710010cda0
710010cd24  mov w8,#0xc420
710010cd28  ldr x20,[x19, #0x58]
710010cd2c  str w8,[sp, #0x40]
710010cd30  add x8,sp,#0x40
710010cd34  orr x21,x8,#0x4
710010cd38  mov x0,x21
710010cd3c  bl 0x71039c0a80
710010cd40  sub x1,x29,#0x18
710010cd44  mov x0,x21
710010cd48  stur wzr,[x29, #-0x18]
710010cd4c  bl 0x71039c0a90
710010cd50  add x0,sp,#0x20
710010cd54  add x1,sp,#0x40
710010cd58  bl 0x71000bce50
710010cd5c  add x1,sp,#0x20
710010cd60  b 0x710010cda0
710010cd64  mov w8,#0xc421
710010cd68  ldr x20,[x19, #0x58]
710010cd6c  str w8,[sp, #0x40]
710010cd70  add x8,sp,#0x40
710010cd74  orr x21,x8,#0x4
710010cd78  mov x0,x21
710010cd7c  bl 0x71039c0a80
710010cd80  sub x1,x29,#0x18
710010cd84  mov x0,x21
710010cd88  stur wzr,[x29, #-0x18]
710010cd8c  bl 0x71039c0a90
710010cd90  add x0,sp,#0x10
710010cd94  add x1,sp,#0x40
710010cd98  bl 0x71000bce50
710010cd9c  add x1,sp,#0x10
710010cda0  mov x0,x20
710010cda4  bl 0x71000b41f0
710010cda8  str xzr,[x19, #0x58]
710010cdac  mov w0,#0x1
710010cdb0  ldp x29,x30,[sp, #0x80]
710010cdb4  ldr x21,[sp, #0x60]
710010cdb8  ldp x20,x19,[sp, #0x70]
710010cdbc  add sp,sp,#0x90
710010cdc0  ret
710010cdc4  adrp x8,0x71052a5000
710010cdc8  ldr x8,[x8, #0x6b0]
710010cdcc  adrp x9,0x710436b000
710010cdd0  add x9,x9,#0x61f
710010cdd4  mov w0,#0x5
710010cdd8  str x9,[x19, #0x40]
710010cddc  stp x8,xzr,[x19, #0x30]
710010cde0  b 0x710010cdb0
