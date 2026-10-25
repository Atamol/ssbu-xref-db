// addr:      710017cbd0
// offset:    0x17cbd0
// name:      FUN_710017cbd0
// mangled:   
// size:      600

710017cbd0  sub sp,sp,#0x70
710017cbd4  str x21,[sp, #0x40]
710017cbd8  stp x20,x19,[sp, #0x50]
710017cbdc  stp x29,x30,[sp, #0x60]
710017cbe0  add x29,sp,#0x60
710017cbe4  ldr x8,[x0, #0x158]
710017cbe8  ldr x8,[x8, #0x18]
710017cbec  mov x19,x0
710017cbf0  add x0,sp,#0x20
710017cbf4  add x1,x8,#0x2c0
710017cbf8  bl 0x71000b1c60
710017cbfc  add x20,x19,#0x138
710017cc00  mov w21,#0x20
710017cc04  mov x1,sp
710017cc08  mov x0,x20
710017cc0c  str wzr,[sp, #0x8]
710017cc10  str x21,[sp]
710017cc14  bl 0x71000b2b70
710017cc18  add x0,sp,#0x20
710017cc1c  mov x1,sp
710017cc20  str wzr,[sp, #0x8]
710017cc24  str x21,[sp]
710017cc28  bl 0x71000b2b70
710017cc2c  orr w8,wzr,#0x6
710017cc30  str w8,[x19, #0x110]
710017cc34  ldrb w8,[x19, #0x160]
710017cc38  cbnz w8,0x710017cc58
710017cc3c  ldr x8,[x19, #0x158]
710017cc40  ldr x0,[x8, #0x18]
710017cc44  mov x1,x20
710017cc48  bl 0x710017f4a0
710017cc4c  mvn w8,w0
710017cc50  tst w8,#0xffff
710017cc54  b.eq 0x710017cc90
710017cc58  add x0,sp,#0x20
710017cc5c  mov x1,x20
710017cc60  bl 0x71000b2b10
710017cc64  tbz w0,#0x0,0x710017cca8
710017cc68  ldr x0,[x19, #0x158]
710017cc6c  bl 0x7100174cb0
710017cc70  tbnz w0,#0x0,0x710017cca8
710017cc74  adrp x8,0x71052a5000
710017cc78  ldr x8,[x8, #0x780]
710017cc7c  mov x20,xzr
710017cc80  stp x8,xzr,[x19, #0x30]
710017cc84  adrp x8,0x71043ce000
710017cc88  add x8,x8,#0x83b
710017cc8c  b 0x710017cd2c
710017cc90  mov w8,#0x1
710017cc94  strb w8,[x19, #0x160]
710017cc98  add x0,sp,#0x20
710017cc9c  mov x1,x20
710017cca0  bl 0x71000b2b10
710017cca4  tbnz w0,#0x0,0x710017cc68
710017cca8  add x21,x19,#0x118
710017ccac  mov x0,x21
710017ccb0  bl 0x71000b2850
710017ccb4  tbz w0,#0x0,0x710017cce4
710017ccb8  add x0,sp,#0x20
710017ccbc  bl 0x71000b2850
710017ccc0  tbz w0,#0x0,0x710017cce4
710017ccc4  add x0,sp,#0x20
710017ccc8  mov x1,x21
710017cccc  bl 0x71000b2b10
710017ccd0  tbnz w0,#0x0,0x710017cce4
710017ccd4  add x0,sp,#0x20
710017ccd8  mov x1,x20
710017ccdc  bl 0x71000b2b10
710017cce0  tbz w0,#0x0,0x710017cd58
710017cce4  adrp x8,0x71052a4000
710017cce8  ldr x8,[x8, #0xc70]
710017ccec  ldr x8,[x8]
710017ccf0  ldr x9,[x19, #0x58]
710017ccf4  ldr x8,[x8, #0x30]
710017ccf8  cmp x9,x8
710017ccfc  b.ls 0x710017cd14
710017cd00  ldr x8,[x19, #0x158]
710017cd04  ldr x8,[x8, #0x18]
710017cd08  ldr w8,[x8, #0x41c]
710017cd0c  cmp w8,#0x4
710017cd10  b.ne 0x710017cd50
710017cd14  adrp x8,0x71052a5000
710017cd18  ldr x8,[x8, #0x758]
710017cd1c  mov x20,xzr
710017cd20  stp x8,xzr,[x19, #0x30]
710017cd24  adrp x8,0x710437b000
710017cd28  add x8,x8,#0xbcb
710017cd2c  str x8,[x19, #0x40]
710017cd30  add x0,sp,#0x20
710017cd34  bl 0x71000b1cf0
710017cd38  mov x0,x20
710017cd3c  ldp x29,x30,[sp, #0x60]
710017cd40  ldp x20,x19,[sp, #0x50]
710017cd44  ldr x21,[sp, #0x40]
710017cd48  add sp,sp,#0x70
710017cd4c  ret
710017cd50  mov w20,#0x5
710017cd54  b 0x710017cd30
710017cd58  mov w21,#0x20
710017cd5c  mov x1,sp
710017cd60  mov x0,x20
710017cd64  str wzr,[sp, #0x8]
710017cd68  str x21,[sp]
710017cd6c  bl 0x71000b2b70
710017cd70  add x0,sp,#0x20
710017cd74  mov x1,sp
710017cd78  str wzr,[sp, #0x8]
710017cd7c  str x21,[sp]
710017cd80  bl 0x71000b2b70
710017cd84  ldrb w8,[x19, #0x160]
710017cd88  cbz w8,0x710017cd14
710017cd8c  add x1,sp,#0x20
710017cd90  mov x0,x20
710017cd94  bl 0x71000b1cb0
710017cd98  adrp x8,0x71052a4000
710017cd9c  ldr x8,[x8, #0xdc8]
710017cda0  ldr x0,[x8]
710017cda4  bl 0x7100161fa0
710017cda8  ldr x8,[x0]
710017cdac  ldr x8,[x8, #0x68]
710017cdb0  mov x1,x20
710017cdb4  blr x8
710017cdb8  cbz x0,0x710017cd14
710017cdbc  ldrb w8,[x0, #0x38]
710017cdc0  strb w8,[x19, #0x90]
710017cdc4  ldr x8,[x19, #0x158]
710017cdc8  ldr x8,[x8, #0x18]
710017cdcc  add x1,x8,#0x2a0
710017cdd0  mov x0,sp
710017cdd4  bl 0x71000b1c60
710017cdd8  mov x1,sp
710017cddc  mov x0,x20
710017cde0  bl 0x71000b2b10
710017cde4  adrp x8,0x71052a5000
710017cde8  adrp x9,0x71052a6000
710017cdec  adrp x10,0x71043ce000
710017cdf0  add x10,x10,#0x83b
710017cdf4  ldr x8,[x8, #0x780]
710017cdf8  ldr x9,[x9, #0x3b0]
710017cdfc  tst w0,#0x1
710017ce00  mov x0,sp
710017ce04  csel x8,x9,x8,ne
710017ce08  adrp x9,0x7104432000
710017ce0c  add x9,x9,#0x43c
710017ce10  csel x9,x9,x10,ne
710017ce14  stp x8,xzr,[x19, #0x30]
710017ce18  str x9,[x19, #0x40]
710017ce1c  bl 0x71000b1cf0
710017ce20  mov x20,xzr
710017ce24  b 0x710017cd30
