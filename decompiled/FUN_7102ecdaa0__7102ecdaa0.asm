// addr:      7102ecdaa0
// offset:    0x2ecdaa0
// name:      FUN_7102ecdaa0
// mangled:   
// size:      1096

7102ecdaa0  sub sp,sp,#0x70
7102ecdaa4  str x21,[sp, #0x40]
7102ecdaa8  stp x20,x19,[sp, #0x50]
7102ecdaac  stp x29,x30,[sp, #0x60]
7102ecdab0  add x29,sp,#0x60
7102ecdab4  adrp x8,0x7105148000
7102ecdab8  add x8,x8,#0x8
7102ecdabc  adrp x9,0x7104468000
7102ecdac0  stp x2,xzr,[x0, #0x10]
7102ecdac4  ldr q2,[x9, #0xca0]
7102ecdac8  stp x8,x1,[x0]
7102ecdacc  ldr x8,[x1, #0x338]
7102ecdad0  str x8,[x0, #0x20]
7102ecdad4  adrp x8,0x710446a000
7102ecdad8  ldr q1,[x8, #0x360]
7102ecdadc  adrp x8,0x7104465000
7102ecdae0  ldr q3,[x8, #0x6b0]
7102ecdae4  adrp x8,0x710446a000
7102ecdae8  ldr q4,[x8, #0x350]
7102ecdaec  movi v0.2D,#0x0
7102ecdaf0  str w3,[x0, #0x28]
7102ecdaf4  stp q2,q1,[x0, #0x50]
7102ecdaf8  str xzr,[x0, #0x40]
7102ecdafc  stp q3,q4,[x0, #0x70]
7102ecdb00  stur xzr,[x0, #0x32]
7102ecdb04  mov x19,x0
7102ecdb08  stur xzr,[x0, #0x2c]
7102ecdb0c  str xzr,[x0, #0x90]
7102ecdb10  str wzr,[x0, #0xe0]
7102ecdb14  str wzr,[x0, #0x220]
7102ecdb18  str xzr,[x0, #0x218]
7102ecdb1c  str xzr,[x0, #0x210]
7102ecdb20  stp q2,q1,[x0, #0xa0]
7102ecdb24  stp q3,q4,[x0, #0xc0]
7102ecdb28  stp q2,q1,[x0, #0xf0]
7102ecdb2c  stp q3,q4,[x0, #0x110]
7102ecdb30  stp q2,q1,[x0, #0x130]
7102ecdb34  stp q3,q4,[x0, #0x150]
7102ecdb38  stp q0,q2,[x0, #0x170]
7102ecdb3c  stp q1,q3,[x0, #0x190]
7102ecdb40  stp q4,q0,[x0, #0x1b0]
7102ecdb44  stp q2,q1,[x0, #0x1d0]
7102ecdb48  stp q3,q4,[x0, #0x1f0]
7102ecdb4c  ldr x8,[x1, #0x310]
7102ecdb50  ldp x9,x10,[x8, #0xd0]
7102ecdb54  cmp x9,x10
7102ecdb58  stp q2,q1,[sp, #0x20]
7102ecdb5c  stp q4,q3,[sp]
7102ecdb60  b.eq 0x7102ecdb98
7102ecdb64  mov x11,#0x7631
7102ecdb68  movk x11,#0x77b1, LSL #16
7102ecdb6c  movk x11,#0x10, LSL #32
7102ecdb70  ldr w8,[x9, #0x8]
7102ecdb74  cmp w8,#0x1
7102ecdb78  b.hi 0x7102ecdb8c
7102ecdb7c  ldr x8,[x9]
7102ecdb80  ldr x12,[x8, #0x68]
7102ecdb84  cmp x12,x11
7102ecdb88  b.eq 0x7102ecdcbc
7102ecdb8c  add x9,x9,#0x10
7102ecdb90  cmp x10,x9
7102ecdb94  b.ne 0x7102ecdb70
7102ecdb98  mov x0,xzr
7102ecdb9c  str xzr,[x19, #0x18]
7102ecdba0  fmov s0,wzr
7102ecdba4  mov w1,#0x1
7102ecdba8  bl 0x710260fdd0
7102ecdbac  ldr x20,[x19, #0x18]
7102ecdbb0  cbz x20,0x7102ecdbe4
7102ecdbb4  ldr x8,[x20, #0xd8]
7102ecdbb8  cbnz x8,0x7102ecdbe4
7102ecdbbc  add x0,x20,#0x90
7102ecdbc0  mov x1,xzr
7102ecdbc4  bl 0x71026533a0
7102ecdbc8  mov x8,x0
7102ecdbcc  ldr x0,[x20, #0xd8]
7102ecdbd0  str x8,[x20, #0xd8]
7102ecdbd4  cbz x0,0x7102ecdbe4
7102ecdbd8  ldr x8,[x0]
7102ecdbdc  ldr x8,[x8, #0x8]
7102ecdbe0  blr x8
7102ecdbe4  ldr x8,[x19, #0x8]
7102ecdbe8  ldr x9,[x8, #0x310]
7102ecdbec  fmov s17,wzr
7102ecdbf0  ldp x8,x9,[x9, #0xd0]
7102ecdbf4  cmp x8,x9
7102ecdbf8  b.eq 0x7102ecdc3c
7102ecdbfc  ldp q6,q5,[sp, #0x20]
7102ecdc00  ldp q16,q7,[sp]
7102ecdc04  mov x10,#0x778a
7102ecdc08  movk x10,#0xdf8c, LSL #16
7102ecdc0c  movk x10,#0xd, LSL #32
7102ecdc10  ldr w11,[x8, #0x8]
7102ecdc14  cmp w11,#0x1
7102ecdc18  b.hi 0x7102ecdc2c
7102ecdc1c  ldr x21,[x8]
7102ecdc20  ldr x11,[x21, #0x68]
7102ecdc24  cmp x11,x10
7102ecdc28  b.eq 0x7102ecdd54
7102ecdc2c  add x8,x8,#0x10
7102ecdc30  cmp x9,x8
7102ecdc34  b.ne 0x7102ecdc10
7102ecdc38  b 0x7102ecdc44
7102ecdc3c  ldp q6,q5,[sp, #0x20]
7102ecdc40  ldp q16,q7,[sp]
7102ecdc44  mov x21,xzr
7102ecdc48  mov w8,#0x1
7102ecdc4c  mov v0.16B,v5.16B
7102ecdc50  mov v1.16B,v6.16B
7102ecdc54  mov v3.16B,v7.16B
7102ecdc58  mov v2.16B,v16.16B
7102ecdc5c  ext v4.16B,v2.16B,v2.16B,0x8
7102ecdc60  mov v4.S[0x1],v17.S[0x0]
7102ecdc64  stp q3,q2,[x19, #0x150]
7102ecdc68  mov v3.16B,v5.16B
7102ecdc6c  stp q1,q0,[x19, #0x130]
7102ecdc70  mov v1.16B,v7.16B
7102ecdc74  mov v2.D[0x1],v4.D[0x0]
7102ecdc78  mov v0.16B,v16.16B
7102ecdc7c  str q2,[x19, #0x170]
7102ecdc80  mov v2.16B,v6.16B
7102ecdc84  tbnz w8,#0x0,0x7102ecde14
7102ecdc88  ldr x8,[x21, #0xd8]
7102ecdc8c  cbz x8,0x7102ecdd8c
7102ecdc90  ldr x8,[x8, #0x8]
7102ecdc94  ldr x0,[x8, #0x8]
7102ecdc98  ldr x8,[x0]
7102ecdc9c  ldr x8,[x8, #0x18]
7102ecdca0  adrp x1,0x710426e000
7102ecdca4  add x1,x1,#0x270
7102ecdca8  blr x8
7102ecdcac  mov w20,w0
7102ecdcb0  ldr x8,[x21, #0xd8]
7102ecdcb4  cbnz x8,0x7102ecdd98
7102ecdcb8  b 0x7102ecdddc
7102ecdcbc  str x8,[x19, #0x18]
7102ecdcc0  cbz x8,0x7102ecdd14
7102ecdcc4  add x0,x8,#0x108
7102ecdcc8  strb wzr,[x8, #0x110]
7102ecdccc  bl 0x71025e9d50
7102ecdcd0  ldr x8,[x19, #0x18]
7102ecdcd4  cbz x8,0x7102ecde50
7102ecdcd8  ldrb w9,[x8, #0xe0]
7102ecdcdc  cbz w9,0x7102ecdcf0
7102ecdce0  ldr x9,[x8, #0xc8]
7102ecdce4  cbz x9,0x7102ecdcf0
7102ecdce8  mov w10,#0x101
7102ecdcec  strh w10,[x9, #0x30]
7102ecdcf0  ldr x9,[x8, #0xd8]
7102ecdcf4  cbz x9,0x7102ecdd00
7102ecdcf8  mov w10,#0x1
7102ecdcfc  strb w10,[x9, #0x21]
7102ecdd00  ldrb w9,[x8, #0xe0]
7102ecdd04  cbz w9,0x7102ecdd10
7102ecdd08  ldr x8,[x8, #0xb0]
7102ecdd0c  strb wzr,[x8, #0x10]
7102ecdd10  ldr x8,[x19, #0x18]
7102ecdd14  cbz x8,0x7102ecde50
7102ecdd18  ldrb w9,[x8, #0xe0]
7102ecdd1c  cbz w9,0x7102ecdd2c
7102ecdd20  ldr x9,[x8, #0xc8]
7102ecdd24  cbz x9,0x7102ecdd2c
7102ecdd28  strh wzr,[x9, #0x32]
7102ecdd2c  ldr x8,[x8, #0xd8]
7102ecdd30  cbz x8,0x7102ecdd38
7102ecdd34  strb wzr,[x8, #0x22]
7102ecdd38  ldr x8,[x19, #0x18]
7102ecdd3c  cbz x8,0x7102ecde50
7102ecdd40  ldrb w9,[x8, #0x118]
7102ecdd44  orr w9,w9,#0x1
7102ecdd48  strb w9,[x8, #0x118]
7102ecdd4c  ldr x0,[x19, #0x18]
7102ecdd50  b 0x7102ecdba0
7102ecdd54  cbz x21,0x7102ecdc48
7102ecdd58  ldr x8,[x21, #0xd8]
7102ecdd5c  cbz x8,0x7102ecde58
7102ecdd60  ldr x8,[x8, #0x8]
7102ecdd64  ldr x0,[x8, #0x8]
7102ecdd68  ldr x8,[x0]
7102ecdd6c  ldr x8,[x8, #0x18]
7102ecdd70  adrp x1,0x710437a000
7102ecdd74  add x1,x1,#0xac6
7102ecdd78  blr x8
7102ecdd7c  mov w20,w0
7102ecdd80  ldr x8,[x21, #0xd8]
7102ecdd84  cbnz x8,0x7102ecde64
7102ecdd88  b 0x7102ecdea8
7102ecdd8c  mov w20,#0xffffffff
7102ecdd90  ldr x8,[x21, #0xd8]
7102ecdd94  cbz x8,0x7102ecdddc
7102ecdd98  ldr x8,[x8, #0x8]
7102ecdd9c  ldr x0,[x8, #0x8]
7102ecdda0  ldr x8,[x0]
7102ecdda4  ldr x8,[x8, #0x10]
7102ecdda8  blr x8
7102ecddac  cmp w0,w20
7102ecddb0  b.ls 0x7102ecdddc
7102ecddb4  ldr x8,[x21, #0xd8]
7102ecddb8  ldr x8,[x8, #0x8]
7102ecddbc  ldr x0,[x8, #0x48]
7102ecddc0  ldr x8,[x0]
7102ecddc4  ldr x8,[x8, #0x38]
7102ecddc8  mov w1,wzr
7102ecddcc  blr x8
7102ecddd0  mov w8,w20
7102ecddd4  add x0,x1,x8, LSL #0x6
7102ecddd8  b 0x7102ecddec
7102ecdddc  ldr x0,[x21, #0x90]
7102ecdde0  ldr x8,[x0]
7102ecdde4  ldr x8,[x8, #0x158]
7102ecdde8  blr x8
7102ecddec  add x8,x0,#0x10
7102ecddf0  add x9,x0,#0x20
7102ecddf4  add x10,x0,#0x30
7102ecddf8  ldp q6,q5,[sp, #0x20]
7102ecddfc  ldp q16,q7,[sp]
7102ecde00  ldr q1,[x9]
7102ecde04  fmov s17,wzr
7102ecde08  ldr q2,[x0]
7102ecde0c  ldr q3,[x8]
7102ecde10  ldr q0,[x10]
7102ecde14  ext v4.16B,v0.16B,v0.16B,0x8
7102ecde18  mov v4.S[0x1],v17.S[0x0]
7102ecde1c  stp q1,q0,[x19, #0x1a0]
7102ecde20  stp q2,q3,[x19, #0x180]
7102ecde24  mov v0.D[0x1],v4.D[0x0]
7102ecde28  stp q6,q5,[x19, #0xf0]
7102ecde2c  stp q7,q16,[x19, #0x110]
7102ecde30  str q16,[x19, #0x200]
7102ecde34  stp q5,q7,[x19, #0x1e0]
7102ecde38  stp q0,q6,[x19, #0x1c0]
7102ecde3c  ldr x21,[sp, #0x40]
7102ecde40  ldp x29,x30,[sp, #0x60]
7102ecde44  ldp x20,x19,[sp, #0x50]
7102ecde48  add sp,sp,#0x70
7102ecde4c  ret
7102ecde50  mov x0,xzr
7102ecde54  b 0x7102ecdba0
7102ecde58  mov w20,#0xffffffff
7102ecde5c  ldr x8,[x21, #0xd8]
7102ecde60  cbz x8,0x7102ecdea8
7102ecde64  ldr x8,[x8, #0x8]
7102ecde68  ldr x0,[x8, #0x8]
7102ecde6c  ldr x8,[x0]
7102ecde70  ldr x8,[x8, #0x10]
7102ecde74  blr x8
7102ecde78  cmp w0,w20
7102ecde7c  b.ls 0x7102ecdea8
7102ecde80  ldr x8,[x21, #0xd8]
7102ecde84  ldr x8,[x8, #0x8]
7102ecde88  ldr x0,[x8, #0x48]
7102ecde8c  ldr x8,[x0]
7102ecde90  ldr x8,[x8, #0x38]
7102ecde94  mov w1,wzr
7102ecde98  blr x8
7102ecde9c  mov w8,w20
7102ecdea0  add x0,x1,x8, LSL #0x6
7102ecdea4  b 0x7102ecdeb8
7102ecdea8  ldr x0,[x21, #0x90]
7102ecdeac  ldr x8,[x0]
7102ecdeb0  ldr x8,[x8, #0x158]
7102ecdeb4  blr x8
7102ecdeb8  add x9,x0,#0x10
7102ecdebc  add x10,x0,#0x20
7102ecdec0  add x11,x0,#0x30
7102ecdec4  ldp q6,q5,[sp, #0x20]
7102ecdec8  ldp q16,q7,[sp]
7102ecdecc  ldr q3,[x10]
7102ecded0  fmov s17,wzr
7102ecded4  mov w8,wzr
7102ecded8  ldr q1,[x0]
7102ecdedc  ldr q0,[x9]
7102ecdee0  ldr q2,[x11]
7102ecdee4  b 0x7102ecdc5c
