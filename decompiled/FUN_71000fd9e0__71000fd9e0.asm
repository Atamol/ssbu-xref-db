// addr:      71000fd9e0
// offset:    0xfd9e0
// name:      FUN_71000fd9e0
// mangled:   
// size:      1008

71000fd9e0  sub sp,sp,#0x60
71000fd9e4  str x23,[sp, #0x20]
71000fd9e8  stp x22,x21,[sp, #0x30]
71000fd9ec  stp x20,x19,[sp, #0x40]
71000fd9f0  stp x29,x30,[sp, #0x50]
71000fd9f4  add x29,sp,#0x50
71000fd9f8  adrp x22,0x71052a5000
71000fd9fc  ldr x22,[x22, #0x80]
71000fda00  mov x19,x0
71000fda04  ldr x0,[x22]
71000fda08  bl 0x7100146ba0
71000fda0c  sub w8,w0,#0x5
71000fda10  cmp w8,#0x3
71000fda14  b.hi 0x71000fda3c
71000fda18  adrp x9,0x7104496000
71000fda1c  add x9,x9,#0x3dc
71000fda20  ldrsw x8,[x9, x8, LSL #0x2]
71000fda24  add x8,x8,x9
71000fda28  br x8
71000fda2c  mov w8,#0x1
71000fda30  orr w9,wzr,#0x3
71000fda34  mov w10,#0xc406
71000fda38  b 0x71000fdaf0
71000fda3c  adrp x21,0x71052a4000
71000fda40  ldr x21,[x21, #0xdf0]
71000fda44  ldr x0,[x21]
71000fda48  add x8,sp,#0x10
71000fda4c  bl 0x7100192e90
71000fda50  ldr w8,[sp, #0x10]
71000fda54  cbnz w8,0x71000fda68
71000fda58  ldr x0,[x22]
71000fda5c  bl 0x7100146ba0
71000fda60  cmp w0,#0x4
71000fda64  b.ne 0x71000fdb74
71000fda68  mov w8,#0x6c59
71000fda6c  str w8,[sp, #0x10]
71000fda70  add x8,sp,#0x10
71000fda74  orr x20,x8,#0x4
71000fda78  mov x0,x20
71000fda7c  bl 0x71039c0a80
71000fda80  mov x1,sp
71000fda84  mov x0,x20
71000fda88  str wzr,[sp]
71000fda8c  bl 0x71039c0a90
71000fda90  add x0,x19,#0x220
71000fda94  add x1,sp,#0x10
71000fda98  bl 0x71000bcf30
71000fda9c  adrp x8,0x71052a5000
71000fdaa0  ldr x8,[x8, #0x238]
71000fdaa4  mov w9,#0x4
71000fdaa8  strb w9,[x19, #0x130]
71000fdaac  adrp x9,0x7104290000
71000fdab0  add x9,x9,#0xd05
71000fdab4  str x9,[x19, #0x40]
71000fdab8  stp x8,xzr,[x19, #0x30]
71000fdabc  mov w20,#0x5
71000fdac0  b 0x71000fdb58
71000fdac4  mov w8,#0x1
71000fdac8  orr w9,wzr,#0x3
71000fdacc  mov w10,#0xa471
71000fdad0  b 0x71000fdaf0
71000fdad4  mov w8,#0x1
71000fdad8  orr w9,wzr,#0x3
71000fdadc  mov w10,#0xc420
71000fdae0  b 0x71000fdaf0
71000fdae4  mov w8,#0x1
71000fdae8  orr w9,wzr,#0x3
71000fdaec  mov w10,#0xc421
71000fdaf0  strb w8,[x19, #0xfa]
71000fdaf4  add x8,sp,#0x10
71000fdaf8  orr x20,x8,#0x4
71000fdafc  mov x0,x20
71000fdb00  strb w9,[x19, #0x130]
71000fdb04  str w10,[sp, #0x10]
71000fdb08  bl 0x71039c0a80
71000fdb0c  mov x1,sp
71000fdb10  mov x0,x20
71000fdb14  str wzr,[sp]
71000fdb18  bl 0x71039c0a90
71000fdb1c  add x0,x19,#0x220
71000fdb20  add x1,sp,#0x10
71000fdb24  bl 0x71000bcf30
71000fdb28  ldr x8,[x22]
71000fdb2c  ldr x0,[x8, #0x8]
71000fdb30  ldr x8,[x0]
71000fdb34  ldr x8,[x8, #0x28]
71000fdb38  blr x8
71000fdb3c  adrp x8,0x71052a5000
71000fdb40  ldr x8,[x8, #0x240]
71000fdb44  mov x20,xzr
71000fdb48  stp x8,xzr,[x19, #0x30]
71000fdb4c  adrp x8,0x71043ac000
71000fdb50  add x8,x8,#0x982
71000fdb54  str x8,[x19, #0x40]
71000fdb58  mov x0,x20
71000fdb5c  ldp x29,x30,[sp, #0x50]
71000fdb60  ldp x20,x19,[sp, #0x40]
71000fdb64  ldr x23,[sp, #0x20]
71000fdb68  ldp x22,x21,[sp, #0x30]
71000fdb6c  add sp,sp,#0x60
71000fdb70  ret
71000fdb74  ldrb w8,[x19, #0xfb]
71000fdb78  cbz w8,0x71000fdb98
71000fdb7c  add x1,x19,#0x100
71000fdb80  add x0,x19,#0x220
71000fdb84  bl 0x71000bcf30
71000fdb88  adrp x8,0x71052a5000
71000fdb8c  ldr x8,[x8, #0x238]
71000fdb90  orr w9,wzr,#0x6
71000fdb94  b 0x71000fdaa8
71000fdb98  ldr x20,[x22]
71000fdb9c  ldr x0,[x20, #0xb8]
71000fdba0  ldr x1,[x19, #0xa0]
71000fdba4  bl 0x7100150680
71000fdba8  tbz w0,#0x0,0x71000fdbf4
71000fdbac  ldr w1,[x19, #0xf0]
71000fdbb0  cbz w1,0x71000fddb0
71000fdbb4  ldr x0,[x20, #0x8]
71000fdbb8  bl 0x71000edff0
71000fdbbc  tbz w0,#0x0,0x71000fddb0
71000fdbc0  mov w8,#0xa
71000fdbc4  str w8,[x19, #0x230]
71000fdbc8  ldr x0,[x22]
71000fdbcc  ldrb w8,[x0, #0x162]
71000fdbd0  add x8,x0,x8, LSL #0x2
71000fdbd4  ldr w8,[x8, #0x180]
71000fdbd8  ldr w1,[x19, #0xf0]
71000fdbdc  cmp w8,w1
71000fdbe0  b.ne 0x71000fdd4c
71000fdbe4  mov w8,#0x11
71000fdbe8  mov w9,#0xc08
71000fdbec  movk w9,#0x1, LSL #16
71000fdbf0  b 0x71000fdcf0
71000fdbf4  mov x0,x20
71000fdbf8  bl 0x7100146ed0
71000fdbfc  tbz w0,#0x0,0x71000fdc78
71000fdc00  ldrb w8,[x20, #0x162]
71000fdc04  cmp w8,#0x0
71000fdc08  cset w8,eq
71000fdc0c  add x8,x20,w8, UXTW  #0x2
71000fdc10  ldr w8,[x8, #0x180]
71000fdc14  cbz w8,0x71000fdce8
71000fdc18  ldr x0,[x21]
71000fdc1c  add x8,sp,#0x10
71000fdc20  add x23,sp,#0x10
71000fdc24  bl 0x7100192e90
71000fdc28  mov w8,#0x6c50
71000fdc2c  str w8,[sp]
71000fdc30  mov x8,sp
71000fdc34  orr x21,x8,#0x4
71000fdc38  mov x0,x21
71000fdc3c  bl 0x71039c0a80
71000fdc40  add x1,sp,#0x28
71000fdc44  mov x0,x21
71000fdc48  str wzr,[sp, #0x28]
71000fdc4c  bl 0x71039c0a90
71000fdc50  ldr w8,[sp, #0x10]
71000fdc54  ldr w9,[sp]
71000fdc58  cmp w8,w9
71000fdc5c  b.ne 0x71000fdd94
71000fdc60  mov w8,#0x4
71000fdc64  strb w8,[x19, #0x130]
71000fdc68  mov w8,#0x6c59
71000fdc6c  str w8,[sp, #0x10]
71000fdc70  orr x20,x23,#0x4
71000fdc74  b 0x71000fdd00
71000fdc78  mov w20,#0x5
71000fdc7c  mov w8,#0x6c59
71000fdc80  strb w20,[x19, #0x130]
71000fdc84  str w8,[sp, #0x10]
71000fdc88  add x8,sp,#0x10
71000fdc8c  orr x21,x8,#0x4
71000fdc90  mov x0,x21
71000fdc94  bl 0x71039c0a80
71000fdc98  mov x1,sp
71000fdc9c  mov x0,x21
71000fdca0  str wzr,[sp]
71000fdca4  bl 0x71039c0a90
71000fdca8  add x0,x19,#0x220
71000fdcac  add x1,sp,#0x10
71000fdcb0  bl 0x71000bcf30
71000fdcb4  ldr x8,[x22]
71000fdcb8  ldrb w9,[x8, #0x162]
71000fdcbc  cmp w9,#0x0
71000fdcc0  cset w9,eq
71000fdcc4  add x8,x8,w9, UXTW  #0x3
71000fdcc8  ldr x0,[x8, #0x168]
71000fdccc  bl 0x71000d8f90
71000fdcd0  adrp x8,0x71052a5000
71000fdcd4  ldr x8,[x8, #0x238]
71000fdcd8  stp x8,xzr,[x19, #0x30]
71000fdcdc  adrp x8,0x7104290000
71000fdce0  add x8,x8,#0xd05
71000fdce4  b 0x71000fdb54
71000fdce8  mov w8,#0x14
71000fdcec  mov w9,#0x6c59
71000fdcf0  strb w8,[x19, #0x130]
71000fdcf4  add x8,sp,#0x10
71000fdcf8  orr x20,x8,#0x4
71000fdcfc  str w9,[sp, #0x10]
71000fdd00  mov x0,x20
71000fdd04  bl 0x71039c0a80
71000fdd08  mov x1,sp
71000fdd0c  mov x0,x20
71000fdd10  str wzr,[sp]
71000fdd14  bl 0x71039c0a90
71000fdd18  add x0,x19,#0x220
71000fdd1c  add x1,sp,#0x10
71000fdd20  bl 0x71000bcf30
71000fdd24  ldr x8,[x22]
71000fdd28  ldrb w9,[x8, #0x162]
71000fdd2c  cmp w9,#0x0
71000fdd30  cset w9,eq
71000fdd34  add x8,x8,w9, UXTW  #0x3
71000fdd38  ldr x0,[x8, #0x168]
71000fdd3c  bl 0x71000d8f90
71000fdd40  adrp x8,0x71052a5000
71000fdd44  ldr x8,[x8, #0x238]
71000fdd48  b 0x71000fdaac
71000fdd4c  bl 0x7100149290
71000fdd50  str wzr,[x19, #0x98]
71000fdd54  ldrb w8,[x20, #0x162]
71000fdd58  cmp w8,#0x0
71000fdd5c  cset w8,eq
71000fdd60  add x8,x20,w8, UXTW  #0x3
71000fdd64  ldr x0,[x8, #0x168]
71000fdd68  ldr x8,[x0]
71000fdd6c  ldr x8,[x8, #0xf0]
71000fdd70  blr x8
71000fdd74  mov x20,xzr
71000fdd78  cbz x0,0x71000fddb8
71000fdd7c  adrp x8,0x71052a5000
71000fdd80  ldr x8,[x8, #0x340]
71000fdd84  stp x8,xzr,[x19, #0x30]
71000fdd88  adrp x8,0x7104307000
71000fdd8c  add x8,x8,#0x7d0
71000fdd90  b 0x71000fdb54
71000fdd94  ldrb w8,[x20, #0x162]
71000fdd98  cmp w8,#0x0
71000fdd9c  cset w8,eq
71000fdda0  add x8,x20,w8, UXTW  #0x2
71000fdda4  ldr w1,[x8, #0x180]
71000fdda8  str w1,[x19, #0xf0]
71000fddac  cbnz w1,0x71000fdbb4
71000fddb0  mov w20,#0x5
71000fddb4  b 0x71000fdb58
71000fddb8  adrp x8,0x71052a5000
71000fddbc  ldr x8,[x8, #0x370]
71000fddc0  stp x8,xzr,[x19, #0x30]
71000fddc4  adrp x8,0x71043ef000
71000fddc8  add x8,x8,#0xafe
71000fddcc  b 0x71000fdb54
