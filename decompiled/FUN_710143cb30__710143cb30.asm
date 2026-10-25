// addr:      710143cb30
// offset:    0x143cb30
// name:      FUN_710143cb30
// mangled:   
// size:      524

710143cb30  str x28,[sp, #-0x20]!
710143cb34  stp x29,x30,[sp, #0x10]
710143cb38  add x29,sp,#0x10
710143cb3c  sub sp,sp,#0x2c0
710143cb40  ldr w8,[x0, #0xfc]
710143cb44  cbz w8,0x710143cb70
710143cb48  ldr w8,[x0, #0x11c]
710143cb4c  cmp w8,#0x1
710143cb50  b.ne 0x710143cd28
710143cb54  ldrsw x8,[x0, #0xf4]
710143cb58  cmp w8,#0x13
710143cb5c  b.cs 0x710143cd38
710143cb60  add x8,x0,x8, LSL #0x2
710143cb64  orr w9,wzr,#0x3
710143cb68  str w9,[x8, #0xa8]
710143cb6c  b 0x710143cd28
710143cb70  mov w8,#0x4
710143cb74  str w8,[sp, #0x160]
710143cb78  adrp x8,0x710593b000
710143cb7c  ldr x8,[x8, #0x218]
710143cb80  add x9,sp,#0x65
710143cb84  mov w12,#0x1
710143cb88  mov x11,xzr
710143cb8c  add x10,x0,#0x11c
710143cb90  stur xzr,[x9, #0xff]
710143cb94  adrp x9,0x7104421000
710143cb98  add x9,x9,#0xa91
710143cb9c  strb w12,[sp, #0x2b8]
710143cba0  add x12,sp,#0x160
710143cba4  strb wzr,[sp, #0x16c]
710143cba8  str xzr,[sp, #0x288]
710143cbac  str xzr,[sp, #0x280]
710143cbb0  str xzr,[sp, #0x278]
710143cbb4  str xzr,[sp, #0x270]
710143cbb8  str xzr,[sp, #0x2b0]
710143cbbc  str xzr,[sp, #0x2a8]
710143cbc0  str xzr,[sp, #0x2a0]
710143cbc4  b 0x710143cbd0
710143cbc8  add x11,x11,#0x2
710143cbcc  strb w14,[x13, #0xd]
710143cbd0  add x14,x9,x11
710143cbd4  ldrb w15,[x14]
710143cbd8  cbz w15,0x710143cbf0
710143cbdc  ldrb w14,[x14, #0x1]
710143cbe0  add x13,x12,x11
710143cbe4  strb w15,[x13, #0xc]
710143cbe8  cbnz w14,0x710143cbc8
710143cbec  add x11,x11,#0x1
710143cbf0  add x12,sp,#0x160
710143cbf4  add x13,x12,#0xc
710143cbf8  mov w9,#0x9dc5
710143cbfc  movk w9,#0x811c, LSL #16
710143cc00  strb wzr,[x13, w11, UXTW ]
710143cc04  str w11,[sp, #0x168]
710143cc08  ldrb w11,[sp, #0x16c]
710143cc0c  mov w13,w9
710143cc10  cbz w11,0x710143cc38
710143cc14  add x12,x12,#0xd
710143cc18  mov w14,#0x89
710143cc1c  mov w15,w11
710143cc20  mov w13,w9
710143cc24  mul w13,w13,w14
710143cc28  and w15,w15,#0xff
710143cc2c  eor w13,w13,w15
710143cc30  ldrb w15,[x12], #0x1
710143cc34  cbnz w15,0x710143cc24
710143cc38  str w13,[sp, #0x164]
710143cc3c  str x10,[sp, #0x2b0]
710143cc40  str wzr,[x10]
710143cc44  mov w10,#0x4
710143cc48  str x10,[sp]
710143cc4c  cbz w11,0x710143cc90
710143cc50  add x10,sp,#0x160
710143cc54  add x12,x10,#0xd
710143cc58  mov x10,sp
710143cc5c  mov x13,xzr
710143cc60  add x14,x10,#0xc
710143cc64  mov w10,#0x103
710143cc68  add w15,w13,#0x1
710143cc6c  cmp w15,#0x102
710143cc70  strb w11,[x14, x13, LSL ]
710143cc74  b.hi 0x710143cc94
710143cc78  ldrb w11,[x12, x13, LSL ]
710143cc7c  add x15,x13,#0x1
710143cc80  mov x13,x15
710143cc84  cbnz w11,0x710143cc68
710143cc88  mov w10,w15
710143cc8c  b 0x710143cc94
710143cc90  mov w10,wzr
710143cc94  mov x12,sp
710143cc98  add x11,x12,#0xc
710143cc9c  strb wzr,[x11, w10, UXTW ]
710143cca0  ldrb w11,[sp, #0xc]
710143cca4  str w10,[sp, #0x8]
710143cca8  cbz w11,0x710143ccc8
710143ccac  add x10,x12,#0xd
710143ccb0  mov w12,#0x89
710143ccb4  mul w9,w9,w12
710143ccb8  and w11,w11,#0xff
710143ccbc  eor w9,w9,w11
710143ccc0  ldrb w11,[x10], #0x1
710143ccc4  cbnz w11,0x710143ccb4
710143ccc8  str w9,[sp, #0x4]
710143cccc  ldr x9,[sp, #0x278]
710143ccd0  str x9,[sp, #0x118]
710143ccd4  ldr x9,[sp, #0x270]
710143ccd8  str x9,[sp, #0x110]
710143ccdc  ldr x9,[sp, #0x298]
710143cce0  str x9,[sp, #0x138]
710143cce4  ldr x9,[sp, #0x290]
710143cce8  str x9,[sp, #0x130]
710143ccec  ldr x9,[sp, #0x288]
710143ccf0  str x9,[sp, #0x128]
710143ccf4  ldr x9,[sp, #0x280]
710143ccf8  str x9,[sp, #0x120]
710143ccfc  ldrb w9,[sp, #0x2b8]
710143cd00  strb w9,[sp, #0x158]
710143cd04  ldr x9,[sp, #0x2b0]
710143cd08  str x9,[sp, #0x150]
710143cd0c  ldr x9,[sp, #0x2a8]
710143cd10  str x9,[sp, #0x148]
710143cd14  ldr x9,[sp, #0x2a0]
710143cd18  str x9,[sp, #0x140]
710143cd1c  ldr x0,[x8]
710143cd20  mov x1,sp
710143cd24  bl 0x71037222b0
710143cd28  add sp,sp,#0x2c0
710143cd2c  ldp x29,x30,[sp, #0x10]
710143cd30  ldr x28,[sp], #0x20
710143cd34  ret
710143cd38  bl 0x71039c2650
