// addr:      7102c6cc00
// offset:    0x2c6cc00
// name:      FUN_7102c6cc00
// mangled:   
// size:      604

7102c6cc00  sub sp,sp,#0x50
7102c6cc04  stp x24,x23,[sp, #0x10]
7102c6cc08  stp x22,x21,[sp, #0x20]
7102c6cc0c  stp x20,x19,[sp, #0x30]
7102c6cc10  stp x29,x30,[sp, #0x40]
7102c6cc14  add x29,sp,#0x40
7102c6cc18  mov x22,x1
7102c6cc1c  mov x19,x0
7102c6cc20  mov w1,#0x50
7102c6cc24  mov w0,#0x10
7102c6cc28  mov x23,x4
7102c6cc2c  mov x24,x3
7102c6cc30  mov x21,x2
7102c6cc34  bl 0x710392e290
7102c6cc38  mov x20,x0
7102c6cc3c  cbnz x0,0x7102c6cc88
7102c6cc40  adrp x8,0x7105332000
7102c6cc44  ldr x0,[x8, #0xf00]
7102c6cc48  cbz x0,0x7102c6cc84
7102c6cc4c  mov w8,#0x50
7102c6cc50  str wzr,[sp, #0x4]
7102c6cc54  add x1,sp,#0x4
7102c6cc58  str x8,[sp, #0x8]
7102c6cc5c  ldr x8,[x0]
7102c6cc60  ldr x8,[x8, #0x30]
7102c6cc64  add x2,sp,#0x8
7102c6cc68  blr x8
7102c6cc6c  tbz w0,#0x0,0x7102c6cc84
7102c6cc70  mov w1,#0x50
7102c6cc74  mov w0,#0x10
7102c6cc78  bl 0x710392e290
7102c6cc7c  mov x20,x0
7102c6cc80  cbnz x0,0x7102c6cc88
7102c6cc84  mov x20,xzr
7102c6cc88  orr x8,xzr,#-0x100000000
7102c6cc8c  stp x22,xzr,[x20]
7102c6cc90  str x8,[x20, #0x10]
7102c6cc94  ldr x8,[x24, #0x8]
7102c6cc98  str x8,[x20, #0x28]
7102c6cc9c  ldr x8,[x24]
7102c6cca0  str x8,[x20, #0x20]
7102c6cca4  ldr x8,[x23, #0x8]
7102c6cca8  stp x8,xzr,[x20, #0x38]
7102c6ccac  ldr x8,[x23]
7102c6ccb0  str x8,[x20, #0x30]
7102c6ccb4  ldr x9,[x22, #0x310]
7102c6ccb8  ldp x8,x9,[x9, #0xd0]
7102c6ccbc  cmp x8,x9
7102c6ccc0  b.eq 0x7102c6ccf8
7102c6ccc4  mov x10,#0x8b71
7102c6ccc8  movk x10,#0xc8ef, LSL #16
7102c6cccc  movk x10,#0x9, LSL #32
7102c6ccd0  ldr w11,[x8, #0x8]
7102c6ccd4  cmp w11,#0x1
7102c6ccd8  b.hi 0x7102c6ccec
7102c6ccdc  ldr x11,[x8]
7102c6cce0  ldr x12,[x11, #0x68]
7102c6cce4  cmp x12,x10
7102c6cce8  b.eq 0x7102c6cd80
7102c6ccec  add x8,x8,#0x10
7102c6ccf0  cmp x9,x8
7102c6ccf4  b.ne 0x7102c6ccd0
7102c6ccf8  str xzr,[x20, #0x8]
7102c6ccfc  mov w0,#0xffffffff
7102c6cd00  str w0,[x20, #0x14]
7102c6cd04  str xzr,[sp, #0x8]
7102c6cd08  ldr x8,[x22, #0x338]
7102c6cd0c  ldr x8,[x8]
7102c6cd10  ldr x0,[x8, #0x8]
7102c6cd14  cbz x0,0x7102c6cd28
7102c6cd18  add x1,sp,#0x8
7102c6cd1c  mov w2,wzr
7102c6cd20  bl 0x7102405040
7102c6cd24  b 0x7102c6cd2c
7102c6cd28  mov w0,#0xffffffff
7102c6cd2c  str w0,[x20, #0x10]
7102c6cd30  ldr w8,[x21, #0x12c]
7102c6cd34  str w8,[x20, #0x40]
7102c6cd38  ldrb w8,[x21, #0x128]
7102c6cd3c  ldr x0,[x20, #0x8]
7102c6cd40  strb w8,[x20, #0x44]
7102c6cd44  cbz x0,0x7102c6ce40
7102c6cd48  ldr x8,[x0, #0xd8]
7102c6cd4c  cbz x8,0x7102c6ce40
7102c6cd50  adrp x1,0x7104306000
7102c6cd54  add x1,x1,#0x864
7102c6cd58  bl 0x7102610070
7102c6cd5c  ldr x8,[x20, #0x8]
7102c6cd60  cbz x8,0x7102c6cdb0
7102c6cd64  add x0,x8,#0x60
7102c6cd68  adrp x1,0x7104306000
7102c6cd6c  add x1,x1,#0x864
7102c6cd70  mov w2,wzr
7102c6cd74  bl 0x71025ee080
7102c6cd78  ldr x0,[x20, #0x8]
7102c6cd7c  b 0x7102c6cdb4
7102c6cd80  str x11,[x20, #0x8]
7102c6cd84  cbz x11,0x7102c6ccfc
7102c6cd88  ldr x8,[x11, #0xd8]
7102c6cd8c  cbz x8,0x7102c6ccfc
7102c6cd90  ldr x8,[x8, #0x8]
7102c6cd94  ldr x0,[x8, #0x8]
7102c6cd98  ldr x8,[x0]
7102c6cd9c  ldr x8,[x8, #0x18]
7102c6cda0  adrp x1,0x7104359000
7102c6cda4  add x1,x1,#0x6b4
7102c6cda8  blr x8
7102c6cdac  b 0x7102c6cd00
7102c6cdb0  mov x0,xzr
7102c6cdb4  fmov s0,wzr
7102c6cdb8  mov w1,#0x1
7102c6cdbc  mov w21,#0x1
7102c6cdc0  bl 0x710260fdd0
7102c6cdc4  ldr x8,[x20, #0x8]
7102c6cdc8  cbz x8,0x7102c6ce3c
7102c6cdcc  ldrb w9,[x8, #0xe0]
7102c6cdd0  cbz w9,0x7102c6cde4
7102c6cdd4  ldr x9,[x8, #0xc8]
7102c6cdd8  cbz x9,0x7102c6cde4
7102c6cddc  mov w10,#0x101
7102c6cde0  strh w10,[x9, #0x32]
7102c6cde4  ldr x8,[x8, #0xd8]
7102c6cde8  cbz x8,0x7102c6cdf4
7102c6cdec  mov w9,#0x1
7102c6cdf0  strb w9,[x8, #0x22]
7102c6cdf4  ldr x8,[x20, #0x8]
7102c6cdf8  mov w9,#0x1
7102c6cdfc  strb w9,[x20, #0x46]
7102c6ce00  cbz x8,0x7102c6ce40
7102c6ce04  ldrb w9,[x8, #0xe0]
7102c6ce08  cbz w9,0x7102c6ce18
7102c6ce0c  ldr x9,[x8, #0xc8]
7102c6ce10  cbz x9,0x7102c6ce18
7102c6ce14  strh wzr,[x9, #0x30]
7102c6ce18  ldr x9,[x8, #0xd8]
7102c6ce1c  cbz x9,0x7102c6ce24
7102c6ce20  strb wzr,[x9, #0x21]
7102c6ce24  ldrb w9,[x8, #0xe0]
7102c6ce28  cbz w9,0x7102c6ce40
7102c6ce2c  ldr x8,[x8, #0xb0]
7102c6ce30  mov w9,#0x1
7102c6ce34  strb w9,[x8, #0x10]
7102c6ce38  b 0x7102c6ce40
7102c6ce3c  strb w21,[x20, #0x46]
7102c6ce40  str x20,[x19]
7102c6ce44  ldp x29,x30,[sp, #0x40]
7102c6ce48  ldp x20,x19,[sp, #0x30]
7102c6ce4c  ldp x22,x21,[sp, #0x20]
7102c6ce50  ldp x24,x23,[sp, #0x10]
7102c6ce54  add sp,sp,#0x50
7102c6ce58  ret
