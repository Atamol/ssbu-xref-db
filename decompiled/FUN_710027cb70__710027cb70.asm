// addr:      710027cb70
// offset:    0x27cb70
// name:      FUN_710027cb70
// mangled:   
// size:      1172

710027cb70  sub sp,sp,#0x80
710027cb74  stp x24,x23,[sp, #0x40]
710027cb78  stp x22,x21,[sp, #0x50]
710027cb7c  stp x20,x19,[sp, #0x60]
710027cb80  stp x29,x30,[sp, #0x70]
710027cb84  add x29,sp,#0x70
710027cb88  adrp x8,0x71052a4000
710027cb8c  ldr x8,[x8, #0xda8]
710027cb90  adrp x21,0x71052a4000
710027cb94  ldrb w8,[x8]
710027cb98  ldr x21,[x21, #0xdb0]
710027cb9c  mov x19,x0
710027cba0  add x20,x21,#0x28
710027cba4  cbz w8,0x710027cbe0
710027cba8  adrp x8,0x71052a4000
710027cbac  ldr x8,[x8, #0xdb8]
710027cbb0  ldr x0,[x8]
710027cbb4  bl 0x7101717960
710027cbb8  ldr w8,[x0]
710027cbbc  cbz w8,0x710027cbe0
710027cbc0  ldr x10,[x21, #0xa0]
710027cbc4  ldp x9,x10,[x10]
710027cbc8  sub x10,x10,x9
710027cbcc  asr x10,x10,#0x3
710027cbd0  cmp x10,x8
710027cbd4  b.ls 0x710027cfec
710027cbd8  ldr x8,[x9, x8, LSL #0x3]
710027cbdc  add x20,x8,#0x20
710027cbe0  ldr x8,[x20]
710027cbe4  ldr x8,[x8, #0x10]
710027cbe8  ldr x0,[x8, #0x18]
710027cbec  ldr w1,[x19, #0xa0]
710027cbf0  bl 0x71001cd7d0
710027cbf4  cbz x0,0x710027cd2c
710027cbf8  ldr w8,[x19, #0xd4]
710027cbfc  cmp w8,#0x2
710027cc00  b.ne 0x710027cd38
710027cc04  ldr x0,[x19, #0x1a0]
710027cc08  adrp x1,0x710449f000
710027cc0c  add x1,x1,#0xef3
710027cc10  add x21,x19,#0x188
710027cc14  bl 0x71001b4e00
710027cc18  add x20,x19,#0x3d8
710027cc1c  tbz w0,#0x0,0x710027cd54
710027cc20  ldr x8,[x19, #0x180]
710027cc24  mov x0,sp
710027cc28  str x8,[x19, #0x3e8]
710027cc2c  bl 0x71001cde10
710027cc30  ldr x8,[sp]
710027cc34  orr w23,wzr,#0x1f8
710027cc38  mov x0,sp
710027cc3c  stp x23,x20,[sp, #0x30]
710027cc40  ldr x8,[x8, #0x30]
710027cc44  add x1,sp,#0x38
710027cc48  add x2,sp,#0x30
710027cc4c  mov w3,#0x1
710027cc50  blr x8
710027cc54  str w0,[x19, #0x5d0]
710027cc58  mov x0,sp
710027cc5c  bl 0x71001cb860
710027cc60  add x22,x19,#0x3f0
710027cc64  orr w2,wzr,#0x1e0
710027cc68  mov x0,x22
710027cc6c  mov w1,wzr
710027cc70  bl 0x71039c02a0
710027cc74  add x1,sp,#0x28
710027cc78  mov x0,x21
710027cc7c  str xzr,[sp, #0x28]
710027cc80  bl 0x71001b2b10
710027cc84  ldr x1,[sp, #0x28]
710027cc88  mov w2,#0x1df
710027cc8c  mov x0,x22
710027cc90  bl 0x71039c0350
710027cc94  ldr x0,[sp, #0x28]
710027cc98  bl 0x71001b2bf0
710027cc9c  mov x0,sp
710027cca0  bl 0x71001cde10
710027cca4  ldr x8,[sp]
710027cca8  stp x23,x20,[sp, #0x30]
710027ccac  ldr x8,[x8, #0x30]
710027ccb0  mov x0,sp
710027ccb4  add x1,sp,#0x38
710027ccb8  add x2,sp,#0x30
710027ccbc  mov w3,#0x1
710027ccc0  blr x8
710027ccc4  str w0,[x19, #0x5d0]
710027ccc8  mov x0,sp
710027cccc  bl 0x71001cb860
710027ccd0  ldr w8,[x19, #0x1b0]
710027ccd4  mov x0,sp
710027ccd8  str w8,[x19, #0x3e0]
710027ccdc  bl 0x71001cde10
710027cce0  ldr x8,[sp]
710027cce4  stp x23,x20,[sp, #0x30]
710027cce8  ldr x8,[x8, #0x30]
710027ccec  mov x0,sp
710027ccf0  add x1,sp,#0x38
710027ccf4  add x2,sp,#0x30
710027ccf8  mov w3,#0x1
710027ccfc  blr x8
710027cd00  str w0,[x19, #0x5d0]
710027cd04  mov x0,sp
710027cd08  bl 0x71001cb860
710027cd0c  ldr x0,[x19, #0x5f0]
710027cd10  ldr x8,[x0]
710027cd14  ldr x3,[x19, #0x3e8]
710027cd18  mov x1,x20
710027cd1c  ldr x8,[x8, #0x18]
710027cd20  mov x2,xzr
710027cd24  blr x8
710027cd28  b 0x710027cf80
710027cd2c  mov w8,#0x4
710027cd30  movk w8,#0x8001, LSL #16
710027cd34  b 0x710027cf84
710027cd38  ldrb w8,[x19, #0x620]
710027cd3c  cbz w8,0x710027cda0
710027cd40  ldp x8,x9,[x19, #0x118]
710027cd44  ldr x10,[x19, #0x128]
710027cd48  stp x9,x10,[sp, #0x8]
710027cd4c  str x8,[sp]
710027cd50  b 0x710027cf94
710027cd54  ldr w8,[x19, #0x3dc]
710027cd58  cbz w8,0x710027ce18
710027cd5c  mov x0,sp
710027cd60  str wzr,[x19, #0x3dc]
710027cd64  bl 0x71001cde10
710027cd68  orr w8,wzr,#0x1f8
710027cd6c  stp x8,x20,[sp, #0x30]
710027cd70  ldr x8,[sp]
710027cd74  ldr x8,[x8, #0x30]
710027cd78  mov x0,sp
710027cd7c  add x1,sp,#0x38
710027cd80  add x2,sp,#0x30
710027cd84  mov w3,#0x1
710027cd88  mov w23,#0x1
710027cd8c  blr x8
710027cd90  str w0,[x19, #0x5d0]
710027cd94  mov x0,sp
710027cd98  bl 0x71001cb860
710027cd9c  b 0x710027ce1c
710027cda0  ldr w8,[x19, #0x3dc]
710027cda4  add w8,w8,#0x1
710027cda8  mov x0,sp
710027cdac  add x20,x19,#0x3d8
710027cdb0  str w8,[x19, #0x3dc]
710027cdb4  bl 0x71001cde10
710027cdb8  orr w8,wzr,#0x1f8
710027cdbc  stp x8,x20,[sp, #0x30]
710027cdc0  ldr x8,[sp]
710027cdc4  ldr x8,[x8, #0x30]
710027cdc8  mov x0,sp
710027cdcc  add x1,sp,#0x38
710027cdd0  add x2,sp,#0x30
710027cdd4  mov w3,#0x1
710027cdd8  mov w20,#0x1
710027cddc  blr x8
710027cde0  str w0,[x19, #0x5d0]
710027cde4  mov x0,sp
710027cde8  bl 0x71001cb860
710027cdec  mov w23,#0x1
710027cdf0  ldrb w8,[x19, #0x630]
710027cdf4  cbz w8,0x710027cf54
710027cdf8  cbz w20,0x710027ce04
710027cdfc  ldrb w8,[x19, #0x640]
710027ce00  cbz w8,0x710027cf54
710027ce04  ldr x8,[x19, #0x638]
710027ce08  mov w9,#0x1
710027ce0c  strb w9,[x8]
710027ce10  cbnz w23,0x710027cf58
710027ce14  b 0x710027cf74
710027ce18  mov w23,wzr
710027ce1c  adrp x8,0x71052a4000
710027ce20  ldr x8,[x8, #0xd80]
710027ce24  strb wzr,[sp, #0x8]
710027ce28  add x24,x8,#0x10
710027ce2c  mov x8,sp
710027ce30  add x8,x8,#0x8
710027ce34  add x1,x19,#0x1f0
710027ce38  mov x2,#-0x1
710027ce3c  str x24,[sp]
710027ce40  str x8,[sp, #0x18]
710027ce44  mov w8,#0x10
710027ce48  mov x0,sp
710027ce4c  str x8,[sp, #0x20]
710027ce50  bl 0x71001b47e0
710027ce54  ldr x0,[sp, #0x18]
710027ce58  ldr x1,[x19, #0x1a0]
710027ce5c  bl 0x71001b4e00
710027ce60  mov w22,w0
710027ce64  mov x0,sp
710027ce68  str x24,[sp]
710027ce6c  bl 0x71001b4910
710027ce70  tbnz w22,#0x0,0x710027ceec
710027ce74  add x22,x19,#0x3f0
710027ce78  orr w2,wzr,#0x1e0
710027ce7c  mov x0,x22
710027ce80  mov w1,wzr
710027ce84  bl 0x71039c02a0
710027ce88  add x1,sp,#0x28
710027ce8c  mov x0,x21
710027ce90  str xzr,[sp, #0x28]
710027ce94  bl 0x71001b2b10
710027ce98  ldr x1,[sp, #0x28]
710027ce9c  mov w2,#0x1df
710027cea0  mov x0,x22
710027cea4  bl 0x71039c0350
710027cea8  ldr x0,[sp, #0x28]
710027ceac  bl 0x71001b2bf0
710027ceb0  mov x0,sp
710027ceb4  bl 0x71001cde10
710027ceb8  orr w8,wzr,#0x1f8
710027cebc  stp x8,x20,[sp, #0x30]
710027cec0  ldr x8,[sp]
710027cec4  ldr x8,[x8, #0x30]
710027cec8  mov x0,sp
710027cecc  add x1,sp,#0x38
710027ced0  add x2,sp,#0x30
710027ced4  mov w3,#0x1
710027ced8  mov w23,#0x1
710027cedc  blr x8
710027cee0  str w0,[x19, #0x5d0]
710027cee4  mov x0,sp
710027cee8  bl 0x71001cb860
710027ceec  ldr w9,[x19, #0x1e0]
710027cef0  ldr w8,[x19, #0x1b0]
710027cef4  cmp w9,w8
710027cef8  b.eq 0x710027cf3c
710027cefc  mov x0,sp
710027cf00  str w8,[x19, #0x3e0]
710027cf04  bl 0x71001cde10
710027cf08  orr w8,wzr,#0x1f8
710027cf0c  stp x8,x20,[sp, #0x30]
710027cf10  ldr x8,[sp]
710027cf14  ldr x8,[x8, #0x30]
710027cf18  mov x0,sp
710027cf1c  add x1,sp,#0x38
710027cf20  add x2,sp,#0x30
710027cf24  mov w3,#0x1
710027cf28  mov w23,#0x1
710027cf2c  blr x8
710027cf30  str w0,[x19, #0x5d0]
710027cf34  mov x0,sp
710027cf38  bl 0x71001cb860
710027cf3c  ldr x8,[x19, #0x1e8]
710027cf40  ldr x9,[x19, #0x180]
710027cf44  cmp x8,x9
710027cf48  cset w20,cs
710027cf4c  ldrb w8,[x19, #0x630]
710027cf50  cbnz w8,0x710027cdf8
710027cf54  cbz w23,0x710027cf74
710027cf58  ldr x0,[x19, #0x5f0]
710027cf5c  ldr x8,[x0]
710027cf60  ldr x3,[x19, #0x3e8]
710027cf64  ldr x8,[x8, #0x18]
710027cf68  add x1,x19,#0x3d8
710027cf6c  mov x2,xzr
710027cf70  blr x8
710027cf74  tbnz w20,#0x0,0x710027cf80
710027cf78  ldrb w8,[x19, #0x630]
710027cf7c  cbz w8,0x710027cfb8
710027cf80  orr w8,wzr,#0x10001
710027cf84  mov x0,sp
710027cf88  add x1,sp,#0x38
710027cf8c  str w8,[sp, #0x38]
710027cf90  bl 0x71001b4200
710027cf94  mov x1,sp
710027cf98  mov x0,x19
710027cf9c  bl 0x710027ca30
710027cfa0  ldp x29,x30,[sp, #0x70]
710027cfa4  ldp x20,x19,[sp, #0x60]
710027cfa8  ldp x22,x21,[sp, #0x50]
710027cfac  ldp x24,x23,[sp, #0x40]
710027cfb0  add sp,sp,#0x80
710027cfb4  ret
710027cfb8  adrp x8,0x71052a6000
710027cfbc  ldr x8,[x8, #0xc28]
710027cfc0  adrp x9,0x71052a8000
710027cfc4  ldr x9,[x9, #0x388]
710027cfc8  mov x1,sp
710027cfcc  add x8,x8,#0x10
710027cfd0  stp x8,x9,[sp]
710027cfd4  adrp x8,0x7104411000
710027cfd8  add x8,x8,#0x4cc
710027cfdc  mov x0,x19
710027cfe0  stp xzr,x8,[sp, #0x10]
710027cfe4  bl 0x71001d3d60
710027cfe8  b 0x710027cfa0
710027cfec  adrp x0,0x71042c4000
710027cff0  add x0,x0,#0x35f
710027cff4  mov w1,#0x47
710027cff8  orr w2,wzr,#0xe0000003
710027cffc  mov w3,wzr
710027d000  bl 0x71001b1300
