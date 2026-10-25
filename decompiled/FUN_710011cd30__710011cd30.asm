// addr:      710011cd30
// offset:    0x11cd30
// name:      FUN_710011cd30
// mangled:   
// size:      248

710011cd30  sub sp,sp,#0x40
710011cd34  stp x20,x19,[sp, #0x20]
710011cd38  stp x29,x30,[sp, #0x30]
710011cd3c  add x29,sp,#0x30
710011cd40  adrp x20,0x71052a5000
710011cd44  ldr x20,[x20, #0x80]
710011cd48  mov x19,x0
710011cd4c  ldr x0,[x20]
710011cd50  bl 0x7100146ba0
710011cd54  cmp w0,#0x5
710011cd58  b.ne 0x710011cdac
710011cd5c  mov w8,#0xc406
710011cd60  str w8,[sp, #0x8]
710011cd64  add x8,sp,#0x8
710011cd68  orr x20,x8,#0x4
710011cd6c  mov x0,x20
710011cd70  bl 0x71039c0a80
710011cd74  add x1,sp,#0x18
710011cd78  mov x0,x20
710011cd7c  str wzr,[sp, #0x18]
710011cd80  bl 0x71039c0a90
710011cd84  add x0,x19,#0x120
710011cd88  add x1,sp,#0x8
710011cd8c  bl 0x71000bcf30
710011cd90  adrp x8,0x71052a5000
710011cd94  ldr x8,[x8, #0x198]
710011cd98  mov x0,xzr
710011cd9c  stp x8,xzr,[x19, #0x30]
710011cda0  adrp x8,0x71042b3000
710011cda4  add x8,x8,#0x57c
710011cda8  b 0x710011ce14
710011cdac  ldr x8,[x20]
710011cdb0  ldrb w9,[x8, #0x162]
710011cdb4  ldr x0,[x19, #0x138]
710011cdb8  add x1,x19,#0x60
710011cdbc  add x8,x8,x9, LSL #0x2
710011cdc0  ldr w2,[x8, #0x180]
710011cdc4  ldr x8,[x0]
710011cdc8  ldr x9,[x8, #0x60]
710011cdcc  add x8,sp,#0x8
710011cdd0  blr x9
710011cdd4  ldr w8,[sp, #0x8]
710011cdd8  cbz w8,0x710011cdfc
710011cddc  ldr x0,[x20]
710011cde0  mov w1,wzr
710011cde4  bl 0x7100149270
710011cde8  adrp x9,0x71052a5000
710011cdec  ldr x9,[x9, #0x198]
710011cdf0  adrp x8,0x710425e000
710011cdf4  add x8,x8,#0x68e
710011cdf8  b 0x710011ce0c
710011cdfc  adrp x9,0x71052a5000
710011ce00  ldr x9,[x9, #0x8c0]
710011ce04  adrp x8,0x710439c000
710011ce08  add x8,x8,#0x544
710011ce0c  mov w0,#0x5
710011ce10  stp x9,xzr,[x19, #0x30]
710011ce14  str x8,[x19, #0x40]
710011ce18  ldp x29,x30,[sp, #0x30]
710011ce1c  ldp x20,x19,[sp, #0x20]
710011ce20  add sp,sp,#0x40
710011ce24  ret
