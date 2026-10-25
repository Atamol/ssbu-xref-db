// addr:      710023cb10
// offset:    0x23cb10
// name:      FUN_710023cb10
// mangled:   
// size:      400

710023cb10  stp x22,x21,[sp, #-0x30]!
710023cb14  stp x20,x19,[sp, #0x10]
710023cb18  stp x29,x30,[sp, #0x20]
710023cb1c  add x29,sp,#0x20
710023cb20  adrp x8,0x71052a4000
710023cb24  ldr x8,[x8, #0xda8]
710023cb28  adrp x22,0x71052a4000
710023cb2c  ldrb w8,[x8]
710023cb30  ldr x22,[x22, #0xdb0]
710023cb34  mov x21,x1
710023cb38  mov x19,x0
710023cb3c  add x20,x22,#0x28
710023cb40  cbz w8,0x710023cb7c
710023cb44  adrp x8,0x71052a4000
710023cb48  ldr x8,[x8, #0xdb8]
710023cb4c  ldr x0,[x8]
710023cb50  bl 0x7101717960
710023cb54  ldr w8,[x0]
710023cb58  cbz w8,0x710023cb7c
710023cb5c  ldr x10,[x22, #0xa0]
710023cb60  ldp x9,x10,[x10]
710023cb64  sub x10,x10,x9
710023cb68  asr x10,x10,#0x3
710023cb6c  cmp x10,x8
710023cb70  b.ls 0x710023cb94
710023cb74  ldr x8,[x9, x8, LSL #0x3]
710023cb78  add x20,x8,#0x20
710023cb7c  ldr x8,[x20]
710023cb80  cbz x8,0x710023cbac
710023cb84  ldr x8,[x8, #0x10]
710023cb88  cbz x8,0x710023cbac
710023cb8c  ldr x20,[x8, #0x10]
710023cb90  b 0x710023cbb0
710023cb94  adrp x0,0x71042c4000
710023cb98  add x0,x0,#0x35f
710023cb9c  mov w1,#0x47
710023cba0  orr w2,wzr,#0xe0000003
710023cba4  mov w3,wzr
710023cba8  bl 0x71001b1300
710023cbac  mov x20,xzr
710023cbb0  ldr x8,[x20, #0x78]!
710023cbb4  ldr x8,[x8, #0x10]
710023cbb8  mov x0,x20
710023cbbc  blr x8
710023cbc0  mov x8,x19
710023cbc4  ldr x0,[x8, #0xd8]!
710023cbc8  cbz x0,0x710023cc00
710023cbcc  mov x22,x8
710023cbd0  mov x9,x0
710023cbd4  ldr x10,[x9, #0x20]
710023cbd8  cmp x10,x21
710023cbdc  cset w10,cc
710023cbe0  csel x22,x22,x9,cc
710023cbe4  ldr x9,[x9, w10, UXTW #0x3]
710023cbe8  cbnz x9,0x710023cbd4
710023cbec  cmp x22,x8
710023cbf0  b.eq 0x710023cc00
710023cbf4  ldr x8,[x22, #0x20]
710023cbf8  cmp x8,x21
710023cbfc  b.ls 0x710023cc28
710023cc00  mov w19,wzr
710023cc04  ldr x8,[x20]
710023cc08  ldr x8,[x8, #0x20]
710023cc0c  mov x0,x20
710023cc10  blr x8
710023cc14  mov w0,w19
710023cc18  ldp x29,x30,[sp, #0x20]
710023cc1c  ldp x20,x19,[sp, #0x10]
710023cc20  ldp x22,x21,[sp], #0x30
710023cc24  ret
710023cc28  ldr x9,[x22, #0x8]
710023cc2c  cbz x9,0x710023cc40
710023cc30  mov x8,x9
710023cc34  ldr x9,[x9]
710023cc38  cbnz x9,0x710023cc30
710023cc3c  b 0x710023cc6c
710023cc40  mov x9,x22
710023cc44  ldr x8,[x9, #0x10]!
710023cc48  ldr x10,[x8]
710023cc4c  cmp x10,x22
710023cc50  b.eq 0x710023cc6c
710023cc54  ldr x10,[x9]
710023cc58  mov x9,x10
710023cc5c  ldr x8,[x9, #0x10]!
710023cc60  ldr x11,[x8]
710023cc64  cmp x11,x10
710023cc68  b.ne 0x710023cc54
710023cc6c  ldr x9,[x19, #0xd0]
710023cc70  cmp x9,x22
710023cc74  b.ne 0x710023cc7c
710023cc78  str x8,[x19, #0xd0]
710023cc7c  ldr x8,[x19, #0xe0]
710023cc80  sub x8,x8,#0x1
710023cc84  mov x1,x22
710023cc88  str x8,[x19, #0xe0]
710023cc8c  bl 0x7101412010
710023cc90  mov x0,x22
710023cc94  bl 0x71001b1870
710023cc98  mov w19,#0x1
710023cc9c  b 0x710023cc04
