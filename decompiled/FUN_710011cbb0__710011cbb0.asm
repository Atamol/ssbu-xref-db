// addr:      710011cbb0
// offset:    0x11cbb0
// name:      FUN_710011cbb0
// mangled:   
// size:      372

710011cbb0  sub sp,sp,#0x40
710011cbb4  stp x20,x19,[sp, #0x20]
710011cbb8  stp x29,x30,[sp, #0x30]
710011cbbc  add x29,sp,#0x30
710011cbc0  adrp x20,0x71052a5000
710011cbc4  ldr x20,[x20, #0x80]
710011cbc8  mov x19,x0
710011cbcc  ldr x0,[x20]
710011cbd0  bl 0x7100146ba0
710011cbd4  cmp w0,#0x5
710011cbd8  b.ne 0x710011cc2c
710011cbdc  mov w8,#0xc406
710011cbe0  str w8,[sp, #0x10]
710011cbe4  add x8,sp,#0x10
710011cbe8  orr x20,x8,#0x4
710011cbec  mov x0,x20
710011cbf0  bl 0x71039c0a80
710011cbf4  mov x1,sp
710011cbf8  mov x0,x20
710011cbfc  str wzr,[sp]
710011cc00  bl 0x71039c0a90
710011cc04  add x0,x19,#0x120
710011cc08  add x1,sp,#0x10
710011cc0c  bl 0x71000bcf30
710011cc10  adrp x8,0x71052a5000
710011cc14  ldr x8,[x8, #0x198]
710011cc18  mov x0,xzr
710011cc1c  stp x8,xzr,[x19, #0x30]
710011cc20  adrp x8,0x71042b3000
710011cc24  add x8,x8,#0x57c
710011cc28  b 0x710011cd10
710011cc2c  ldr x8,[x19, #0x58]
710011cc30  cbz x8,0x710011cc9c
710011cc34  ldrb w8,[x8, #0x28]
710011cc38  cbz w8,0x710011cc9c
710011cc3c  mov w8,#0x6c05
710011cc40  str w8,[sp, #0x10]
710011cc44  add x8,sp,#0x10
710011cc48  orr x20,x8,#0x4
710011cc4c  mov x0,x20
710011cc50  bl 0x71039c0a80
710011cc54  mov x1,sp
710011cc58  mov x0,x20
710011cc5c  str wzr,[sp]
710011cc60  bl 0x71039c0a90
710011cc64  add x0,x19,#0x120
710011cc68  add x1,sp,#0x10
710011cc6c  bl 0x71000bcf30
710011cc70  adrp x8,0x71052a5000
710011cc74  ldr x8,[x8, #0x8b0]
710011cc78  adrp x9,0x7104339000
710011cc7c  add x9,x9,#0x523
710011cc80  str x9,[x19, #0x40]
710011cc84  mov w0,#0x5
710011cc88  stp x8,xzr,[x19, #0x30]
710011cc8c  ldp x29,x30,[sp, #0x30]
710011cc90  ldp x20,x19,[sp, #0x20]
710011cc94  add sp,sp,#0x40
710011cc98  ret
710011cc9c  ldr x8,[x20]
710011cca0  ldrb w9,[x8, #0x162]
710011cca4  ldr x0,[x19, #0x138]
710011cca8  add x1,x19,#0x60
710011ccac  add x8,x8,x9, LSL #0x2
710011ccb0  ldr w2,[x8, #0x180]
710011ccb4  ldr x8,[x0]
710011ccb8  ldr x9,[x8, #0xa0]
710011ccbc  add x8,sp,#0x10
710011ccc0  blr x9
710011ccc4  ldr w8,[sp, #0x10]
710011ccc8  cbz w8,0x710011ccf8
710011cccc  add x1,x19,#0x64
710011ccd0  mov x0,sp
710011ccd4  bl 0x71000bce50
710011ccd8  add x0,x19,#0x120
710011ccdc  mov x1,sp
710011cce0  bl 0x71000bcf30
710011cce4  adrp x9,0x71052a5000
710011cce8  ldr x9,[x9, #0x8b0]
710011ccec  adrp x8,0x7104339000
710011ccf0  add x8,x8,#0x523
710011ccf4  b 0x710011cd08
710011ccf8  adrp x9,0x71052a5000
710011ccfc  ldr x9,[x9, #0x8b8]
710011cd00  adrp x8,0x7104349000
710011cd04  add x8,x8,#0x616
710011cd08  mov w0,#0x5
710011cd0c  stp x9,xzr,[x19, #0x30]
710011cd10  str x8,[x19, #0x40]
710011cd14  ldp x29,x30,[sp, #0x30]
710011cd18  ldp x20,x19,[sp, #0x20]
710011cd1c  add sp,sp,#0x40
710011cd20  ret
