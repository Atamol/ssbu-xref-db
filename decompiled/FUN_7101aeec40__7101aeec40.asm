// addr:      7101aeec40
// offset:    0x1aeec40
// name:      FUN_7101aeec40
// mangled:   
// size:      600

7101aeec40  sub sp,sp,#0x60
7101aeec44  stp x22,x21,[sp, #0x30]
7101aeec48  stp x20,x19,[sp, #0x40]
7101aeec4c  stp x29,x30,[sp, #0x50]
7101aeec50  add x29,sp,#0x50
7101aeec54  mov x19,x1
7101aeec58  mov x21,x0
7101aeec5c  mov w1,#0x2a
7101aeec60  mov x0,x2
7101aeec64  mov x20,x2
7101aeec68  bl 0x710323ac20
7101aeec6c  tst x0,#0xffffffffff
7101aeec70  b.eq 0x7101aeed88
7101aeec74  mov x1,x0
7101aeec78  add x0,sp,#0x18
7101aeec7c  bl 0x710353da30
7101aeec80  ldr w1,[sp, #0x18]
7101aeec84  orr w22,wzr,#0xffffff
7101aeec88  cmp w1,w22
7101aeec8c  b.eq 0x7101aeed90
7101aeec90  adrp x8,0x7105332000
7101aeec94  ldr x0,[x8, #0xf20]
7101aeec98  bl 0x7103540b10
7101aeec9c  mov w2,#0x2a
7101aeeca0  mov x0,x21
7101aeeca4  mov x1,x20
7101aeeca8  str w22,[sp, #0x18]
7101aeecac  bl 0x7103240bd0
7101aeecb0  mov x20,x0
7101aeecb4  adrp x21,0x710523d000
7101aeecb8  add x21,x21,#0xa08
7101aeecbc  mov w0,#0x10
7101aeecc0  mov w1,#0x10
7101aeecc4  str x21,[sp, #0x18]
7101aeecc8  bl 0x710392e290
7101aeeccc  cbnz x0,0x7101aeed14
7101aeecd0  adrp x8,0x7105332000
7101aeecd4  ldr x0,[x8, #0xf00]
7101aeecd8  cbz x0,0x7101aeed10
7101aeecdc  mov w8,#0x10
7101aeece0  stur wzr,[x29, #-0x24]
7101aeece4  sub x1,x29,#0x24
7101aeece8  str x8,[sp, #0x8]
7101aeecec  ldr x8,[x0]
7101aeecf0  ldr x8,[x8, #0x30]
7101aeecf4  add x2,sp,#0x8
7101aeecf8  blr x8
7101aeecfc  tbz w0,#0x0,0x7101aeed10
7101aeed00  mov w0,#0x10
7101aeed04  mov w1,#0x10
7101aeed08  bl 0x710392e290
7101aeed0c  cbnz x0,0x7101aeed14
7101aeed10  mov x0,xzr
7101aeed14  add x8,sp,#0x18
7101aeed18  cmp x8,x20
7101aeed1c  stp xzr,xzr,[x0]
7101aeed20  str x0,[sp, #0x20]
7101aeed24  b.eq 0x7101aeedac
7101aeed28  ldr x8,[x20, #0x8]
7101aeed2c  ldp x9,x8,[x8]
7101aeed30  cbz x8,0x7101aeeda8
7101aeed34  add x10,x8,#0x8
7101aeed38  ldxr x11,[x10]
7101aeed3c  add x11,x11,#0x1
7101aeed40  stxr w12,x11,[x10]
7101aeed44  cbnz w12,0x7101aeed38
7101aeed48  ldr x20,[x0, #0x8]
7101aeed4c  stp x9,x8,[x0]
7101aeed50  cbz x20,0x7101aeedac
7101aeed54  add x8,x20,#0x8
7101aeed58  ldaxr x9,[x8]
7101aeed5c  sub x10,x9,#0x1
7101aeed60  stlxr w11,x10,[x8]
7101aeed64  cbnz w11,0x7101aeed58
7101aeed68  cbnz x9,0x7101aeedac
7101aeed6c  ldr x8,[x20]
7101aeed70  ldr x8,[x8, #0x10]
7101aeed74  mov x0,x20
7101aeed78  blr x8
7101aeed7c  mov x0,x20
7101aeed80  bl 0x71039c2670
7101aeed84  b 0x7101aeedac
7101aeed88  orr w8,wzr,#0xffffff
7101aeed8c  str w8,[sp, #0x18]
7101aeed90  ldr x0,[x19, #0x8]
7101aeed94  fmov s0,0x3f800000
7101aeed98  adrp x1,0x710425e000
7101aeed9c  add x1,x1,#0xe72
7101aeeda0  bl 0x7103778300
7101aeeda4  b 0x7101aeee84
7101aeeda8  stp x9,x8,[x0]
7101aeedac  ldr x0,[x19, #0x8]
7101aeedb0  fmov s0,0x3f800000
7101aeedb4  adrp x1,0x7104454000
7101aeedb8  add x1,x1,#0x5c2
7101aeedbc  bl 0x7103778300
7101aeedc0  adrp x1,0x7104308000
7101aeedc4  add x1,x1,#0xd3
7101aeedc8  add x8,sp,#0x8
7101aeedcc  mov x0,x19
7101aeedd0  bl 0x7103776910
7101aeedd4  ldr x19,[sp, #0x10]
7101aeedd8  add x1,sp,#0x18
7101aeeddc  mov x0,x19
7101aeede0  bl 0x7103778b80
7101aeede4  adrp x8,0x710523d000
7101aeede8  add x8,x8,#0x9a8
7101aeedec  stp x8,xzr,[sp, #0x8]
7101aeedf0  cbz x19,0x7101aeedfc
7101aeedf4  mov x0,x19
7101aeedf8  bl 0x710392eb40
7101aeedfc  ldr x19,[sp, #0x20]
7101aeee00  stp x21,xzr,[sp, #0x18]
7101aeee04  cbz x19,0x7101aeee84
7101aeee08  ldr x20,[x19, #0x8]
7101aeee0c  stp xzr,xzr,[x19]
7101aeee10  cbz x20,0x7101aeee7c
7101aeee14  add x8,x20,#0x8
7101aeee18  ldaxr x9,[x8]
7101aeee1c  sub x10,x9,#0x1
7101aeee20  stlxr w11,x10,[x8]
7101aeee24  cbnz w11,0x7101aeee18
7101aeee28  cbnz x9,0x7101aeee44
7101aeee2c  ldr x8,[x20]
7101aeee30  ldr x8,[x8, #0x10]
7101aeee34  mov x0,x20
7101aeee38  blr x8
7101aeee3c  mov x0,x20
7101aeee40  bl 0x71039c2670
7101aeee44  ldr x20,[x19, #0x8]
7101aeee48  cbz x20,0x7101aeee7c
7101aeee4c  add x8,x20,#0x8
7101aeee50  ldaxr x9,[x8]
7101aeee54  sub x10,x9,#0x1
7101aeee58  stlxr w11,x10,[x8]
7101aeee5c  cbnz w11,0x7101aeee50
7101aeee60  cbnz x9,0x7101aeee7c
7101aeee64  ldr x8,[x20]
7101aeee68  ldr x8,[x8, #0x10]
7101aeee6c  mov x0,x20
7101aeee70  blr x8
7101aeee74  mov x0,x20
7101aeee78  bl 0x71039c2670
7101aeee7c  mov x0,x19
7101aeee80  bl 0x710392eb40
7101aeee84  ldp x29,x30,[sp, #0x50]
7101aeee88  ldp x20,x19,[sp, #0x40]
7101aeee8c  ldp x22,x21,[sp, #0x30]
7101aeee90  add sp,sp,#0x60
7101aeee94  ret
