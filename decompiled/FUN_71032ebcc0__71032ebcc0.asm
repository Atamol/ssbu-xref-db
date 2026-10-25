// addr:      71032ebcc0
// offset:    0x32ebcc0
// name:      FUN_71032ebcc0
// mangled:   
// size:      436

71032ebcc0  sub sp,sp,#0x70
71032ebcc4  str x27,[sp, #0x10]
71032ebcc8  stp x26,x25,[sp, #0x20]
71032ebccc  stp x24,x23,[sp, #0x30]
71032ebcd0  stp x22,x21,[sp, #0x40]
71032ebcd4  stp x20,x19,[sp, #0x50]
71032ebcd8  stp x29,x30,[sp, #0x60]
71032ebcdc  add x29,sp,#0x60
71032ebce0  ldr x8,[x0, #0x8]
71032ebce4  ldr x25,[x8, #0x80]
71032ebce8  tst x3,#0xffffffffff
71032ebcec  lsr x9,x3,#0x38
71032ebcf0  mov x21,x0
71032ebcf4  cset w8,ne
71032ebcf8  cmp x9,#0xc1
71032ebcfc  cset w9,eq
71032ebd00  tst w9,w8
71032ebd04  and w26,w9,w8
71032ebd08  ldr x0,[x25, #0x168]
71032ebd0c  fmov s0,0x3f800000
71032ebd10  adrp x10,0x71042c4000
71032ebd14  add x10,x10,#0x99d
71032ebd18  adrp x11,0x710437c000
71032ebd1c  add x11,x11,#0x152
71032ebd20  mov x23,x1
71032ebd24  csel x1,x11,x10,ne
71032ebd28  mov w19,w4
71032ebd2c  mov x20,x3
71032ebd30  mov w22,w2
71032ebd34  bl 0x7103778300
71032ebd38  ldr x0,[x25, #0x198]
71032ebd3c  mov w1,#0x1
71032ebd40  bl 0x71037790a0
71032ebd44  ldr x0,[x25, #0x1a8]
71032ebd48  mov w1,#0x1
71032ebd4c  bl 0x71037790a0
71032ebd50  lsr x8,x23,#0x38
71032ebd54  cmp x8,#0xc1
71032ebd58  b.ne 0x71032ebdb8
71032ebd5c  and x8,x23,#0xffffffffff
71032ebd60  cbz x8,0x71032ebdb8
71032ebd64  mov w2,#0x2
71032ebd68  mov x0,x23
71032ebd6c  mov w1,w22
71032ebd70  bl 0x7103238a70
71032ebd74  tst x0,#0xffffffffff
71032ebd78  b.eq 0x71032ebe14
71032ebd7c  mov x1,x0
71032ebd80  add x0,sp,#0x18
71032ebd84  bl 0x710353da30
71032ebd88  ldr x0,[x25, #0x198]
71032ebd8c  ldr w24,[sp, #0x18]
71032ebd90  add x1,sp,#0x18
71032ebd94  bl 0x7103778c70
71032ebd98  orr w27,wzr,#0xffffff
71032ebd9c  cmp w24,w27
71032ebda0  b.eq 0x71032ebdb8
71032ebda4  adrp x8,0x7105332000
71032ebda8  ldr x0,[x8, #0xf20]
71032ebdac  mov w1,w24
71032ebdb0  bl 0x7103540b10
71032ebdb4  str w27,[sp, #0x18]
71032ebdb8  cbz w26,0x71032ebe44
71032ebdbc  mov w2,#0x2
71032ebdc0  mov x0,x20
71032ebdc4  mov w1,w19
71032ebdc8  bl 0x7103238a70
71032ebdcc  tst x0,#0xffffffffff
71032ebdd0  b.eq 0x71032ebe30
71032ebdd4  mov x1,x0
71032ebdd8  add x0,sp,#0x8
71032ebddc  bl 0x710353da30
71032ebde0  ldr x0,[x25, #0x1a8]
71032ebde4  ldr w24,[sp, #0x8]
71032ebde8  add x1,sp,#0x8
71032ebdec  bl 0x7103778c70
71032ebdf0  orr w25,wzr,#0xffffff
71032ebdf4  cmp w24,w25
71032ebdf8  b.eq 0x71032ebe44
71032ebdfc  adrp x8,0x7105332000
71032ebe00  ldr x0,[x8, #0xf20]
71032ebe04  mov w1,w24
71032ebe08  bl 0x7103540b10
71032ebe0c  str w25,[sp, #0x8]
71032ebe10  b 0x71032ebe44
71032ebe14  orr w8,wzr,#0xffffff
71032ebe18  str w8,[sp, #0x18]
71032ebe1c  ldr x0,[x25, #0x198]
71032ebe20  add x1,sp,#0x18
71032ebe24  bl 0x7103778c70
71032ebe28  cbnz w26,0x71032ebdbc
71032ebe2c  b 0x71032ebe44
71032ebe30  orr w8,wzr,#0xffffff
71032ebe34  str w8,[sp, #0x8]
71032ebe38  ldr x0,[x25, #0x1a8]
71032ebe3c  add x1,sp,#0x8
71032ebe40  bl 0x7103778c70
71032ebe44  str x23,[x21, #0x10]
71032ebe48  str w22,[x21, #0x18]
71032ebe4c  ldr x27,[sp, #0x10]
71032ebe50  str x20,[x21, #0x20]
71032ebe54  str w19,[x21, #0x28]
71032ebe58  ldp x29,x30,[sp, #0x60]
71032ebe5c  ldp x20,x19,[sp, #0x50]
71032ebe60  ldp x22,x21,[sp, #0x40]
71032ebe64  ldp x24,x23,[sp, #0x30]
71032ebe68  ldp x26,x25,[sp, #0x20]
71032ebe6c  add sp,sp,#0x70
71032ebe70  ret
