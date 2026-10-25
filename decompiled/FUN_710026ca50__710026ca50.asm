// addr:      710026ca50
// offset:    0x26ca50
// name:      FUN_710026ca50
// mangled:   
// size:      468

710026ca50  sub sp,sp,#0xd0
710026ca54  str x23,[sp, #0x90]
710026ca58  stp x22,x21,[sp, #0xa0]
710026ca5c  stp x20,x19,[sp, #0xb0]
710026ca60  stp x29,x30,[sp, #0xc0]
710026ca64  add x29,sp,#0xc0
710026ca68  mov x20,x0
710026ca6c  add x0,sp,#0x20
710026ca70  mov x21,x2
710026ca74  mov x19,x1
710026ca78  bl 0x71001e6720
710026ca7c  adrp x8,0x71052a4000
710026ca80  ldr x8,[x8, #0xda8]
710026ca84  adrp x23,0x71052a4000
710026ca88  ldrb w8,[x8]
710026ca8c  ldr x23,[x23, #0xdb0]
710026ca90  add x22,x23,#0x28
710026ca94  cbz w8,0x710026cad0
710026ca98  adrp x8,0x71052a4000
710026ca9c  ldr x8,[x8, #0xdb8]
710026caa0  ldr x0,[x8]
710026caa4  bl 0x7101717960
710026caa8  ldr w8,[x0]
710026caac  cbz w8,0x710026cad0
710026cab0  ldr x10,[x23, #0xa0]
710026cab4  ldp x9,x10,[x10]
710026cab8  sub x10,x10,x9
710026cabc  asr x10,x10,#0x3
710026cac0  cmp x10,x8
710026cac4  b.ls 0x710026cae8
710026cac8  ldr x8,[x9, x8, LSL #0x3]
710026cacc  add x22,x8,#0x20
710026cad0  ldr x8,[x22]
710026cad4  cbz x8,0x710026cb00
710026cad8  ldr x8,[x8, #0x10]
710026cadc  cbz x8,0x710026cb00
710026cae0  ldr x22,[x8, #0x10]
710026cae4  b 0x710026cb04
710026cae8  adrp x0,0x71042c4000
710026caec  add x0,x0,#0x35f
710026caf0  mov w1,#0x47
710026caf4  orr w2,wzr,#0xe0000003
710026caf8  mov w3,wzr
710026cafc  bl 0x71001b1300
710026cb00  mov x22,xzr
710026cb04  ldr x8,[x22, #0x78]!
710026cb08  ldr x8,[x8, #0x10]
710026cb0c  mov x0,x22
710026cb10  blr x8
710026cb14  ldrh w1,[x20, #0x48]
710026cb18  add x0,sp,#0x20
710026cb1c  mov w2,#0x1
710026cb20  bl 0x710022b480
710026cb24  add x0,sp,#0x20
710026cb28  mov x1,x19
710026cb2c  bl 0x710022b390
710026cb30  tbz w0,#0x0,0x710026cb84
710026cb34  mov w1,#0x16
710026cb38  add x0,sp,#0x20
710026cb3c  bl 0x710022b400
710026cb40  add x0,sp,#0x20
710026cb44  mov x1,x21
710026cb48  bl 0x7100291c00
710026cb4c  ldrb w8,[sp, #0x28]
710026cb50  cbz w8,0x710026cb8c
710026cb54  mov w8,#0xa
710026cb58  movk w8,#0x8001, LSL #16
710026cb5c  add x0,sp,#0x8
710026cb60  sub x1,x29,#0x24
710026cb64  stur w8,[x29, #-0x24]
710026cb68  bl 0x71001b4200
710026cb6c  add x1,sp,#0x8
710026cb70  mov x0,x19
710026cb74  bl 0x71001d0c90
710026cb78  mov w23,wzr
710026cb7c  mov w21,#0x1
710026cb80  b 0x710026cbd8
710026cb84  mov w21,wzr
710026cb88  b 0x710026cbd4
710026cb8c  adrp x8,0x71052a7000
710026cb90  adrp x9,0x71052a8000
710026cb94  ldr x8,[x8, #0xf30]
710026cb98  ldr x9,[x9, #0x68]
710026cb9c  str x9,[x8, #0xa8]
710026cba0  ldrb w8,[x20, #0x70]
710026cba4  cbz w8,0x710026cbc0
710026cba8  mov w1,#0x10
710026cbac  mov x0,x20
710026cbb0  bl 0x710022b500
710026cbb4  tbz w0,#0x0,0x710026cbc0
710026cbb8  mov w23,#0x1
710026cbbc  b 0x710026cbd8
710026cbc0  add x2,sp,#0x20
710026cbc4  mov x0,x20
710026cbc8  mov x1,x19
710026cbcc  bl 0x710022a7f0
710026cbd0  mov w21,w0
710026cbd4  mov w23,wzr
710026cbd8  ldr x8,[x22]
710026cbdc  ldr x8,[x8, #0x20]
710026cbe0  mov x0,x22
710026cbe4  blr x8
710026cbe8  cbz w23,0x710026cc00
710026cbec  add x2,sp,#0x20
710026cbf0  mov x0,x20
710026cbf4  mov x1,x19
710026cbf8  bl 0x710022a7f0
710026cbfc  mov w21,w0
710026cc00  add x0,sp,#0x20
710026cc04  bl 0x71001e6910
710026cc08  and w0,w21,#0x1
710026cc0c  ldp x29,x30,[sp, #0xc0]
710026cc10  ldp x20,x19,[sp, #0xb0]
710026cc14  ldr x23,[sp, #0x90]
710026cc18  ldp x22,x21,[sp, #0xa0]
710026cc1c  add sp,sp,#0xd0
710026cc20  ret
