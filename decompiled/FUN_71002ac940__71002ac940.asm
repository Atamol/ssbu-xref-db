// addr:      71002ac940
// offset:    0x2ac940
// name:      FUN_71002ac940
// mangled:   
// size:      944

71002ac940  stp x28,x25,[sp, #-0x50]!
71002ac944  stp x24,x23,[sp, #0x10]
71002ac948  stp x22,x21,[sp, #0x20]
71002ac94c  stp x20,x19,[sp, #0x30]
71002ac950  stp x29,x30,[sp, #0x40]
71002ac954  add x29,sp,#0x40
71002ac958  sub sp,sp,#0x4b0
71002ac95c  add x19,x0,#0x10
71002ac960  mov x21,x1
71002ac964  mov x20,x0
71002ac968  str xzr,[x0, #0x8]
71002ac96c  adrp x1,0x7104411000
71002ac970  add x1,x1,#0x4cc
71002ac974  mov x0,x19
71002ac978  bl 0x71001b3cb0
71002ac97c  mov w8,#0x10000
71002ac980  str x8,[sp, #0x78]
71002ac984  add x8,sp,#0x98
71002ac988  stp xzr,xzr,[sp, #0xa0]
71002ac98c  add x0,sp,#0x8
71002ac990  stp x8,xzr,[sp, #0x80]
71002ac994  sub x1,x29,#0x58
71002ac998  str xzr,[sp, #0x8]
71002ac99c  str wzr,[sp, #0x60]
71002ac9a0  stp xzr,x8,[sp, #0x68]
71002ac9a4  mov w8,#0x3e8
71002ac9a8  stp xzr,x8,[sp, #0x90]
71002ac9ac  add x8,sp,#0x70
71002ac9b0  stp x8,xzr,[sp, #0x20]
71002ac9b4  mov w8,#0x400
71002ac9b8  stp xzr,xzr,[sp, #0x10]
71002ac9bc  strh wzr,[sp, #0x1e]
71002ac9c0  stp xzr,xzr,[sp, #0x30]
71002ac9c4  stp xzr,xzr,[sp, #0x40]
71002ac9c8  stp xzr,x8,[sp, #0x50]
71002ac9cc  ldr x8,[x21]
71002ac9d0  stp x8,x8,[x29, #-0x58]
71002ac9d4  bl 0x71001ba380
71002ac9d8  ldr w8,[sp, #0x60]
71002ac9dc  mov w21,wzr
71002ac9e0  cbz w8,0x71002aca90
71002ac9e4  ldr x19,[sp, #0x28]
71002ac9e8  cbz x19,0x71002aca28
71002ac9ec  ldr x0,[x19]
71002ac9f0  cbz x0,0x71002aca14
71002ac9f4  ldr x8,[x19, #0x10]
71002ac9f8  cmp x8,x0
71002ac9fc  b.eq 0x71002acb6c
71002aca00  ldr x20,[x0, #0x10]
71002aca04  bl 0x71001b1870
71002aca08  mov x0,x20
71002aca0c  str x20,[x19]
71002aca10  cbnz x20,0x71002ac9f4
71002aca14  ldr x0,[x19, #0x20]
71002aca18  cbz x0,0x71002aca20
71002aca1c  bl 0x71001b1870
71002aca20  mov x0,x19
71002aca24  bl 0x710353c3d0
71002aca28  ldr x0,[sp, #0x40]
71002aca2c  bl 0x71001b1870
71002aca30  ldr x0,[sp, #0x38]
71002aca34  cbz x0,0x71002aca3c
71002aca38  bl 0x71001b1870
71002aca3c  ldr x0,[sp, #0x70]
71002aca40  cbz x0,0x71002aca64
71002aca44  ldr x8,[sp, #0x80]
71002aca48  cmp x8,x0
71002aca4c  b.eq 0x71002acb5c
71002aca50  ldr x19,[x0, #0x10]
71002aca54  bl 0x71001b1870
71002aca58  mov x0,x19
71002aca5c  str x19,[sp, #0x70]
71002aca60  cbnz x19,0x71002aca44
71002aca64  ldr x0,[sp, #0x90]
71002aca68  cbz x0,0x71002aca70
71002aca6c  bl 0x71001b1870
71002aca70  mov w0,w21
71002aca74  add sp,sp,#0x4b0
71002aca78  ldp x29,x30,[sp, #0x40]
71002aca7c  ldp x20,x19,[sp, #0x30]
71002aca80  ldp x22,x21,[sp, #0x20]
71002aca84  ldp x24,x23,[sp, #0x10]
71002aca88  ldp x28,x25,[sp], #0x50
71002aca8c  ret
71002aca90  adrp x8,0x710424e000
71002aca94  add x8,x8,#0xb25
71002aca98  ldr x21,[sp, #0x10]
71002aca9c  stp xzr,x8,[x29, #-0x58]
71002acaa0  ldr w8,[sp, #0x8]
71002acaa4  mov w22,#0x405
71002acaa8  orr w9,wzr,#0x6
71002acaac  stur xzr,[x29, #-0x48]
71002acab0  sturh w22,[x29, #-0x42]
71002acab4  stur w9,[x29, #-0x58]
71002acab8  cbz w8,0x71002acb7c
71002acabc  mov w11,wzr
71002acac0  mov w10,#0x405
71002acac4  orr w12,wzr,#0x6
71002acac8  mov w23,#0x15
71002acacc  sub x24,x29,#0x58
71002acad0  orr w25,wzr,#0x30
71002acad4  mov x9,x21
71002acad8  b 0x71002acae8
71002acadc  ldurh w10,[x29, #-0x42]
71002acae0  ldurb w11,[x29, #-0x43]
71002acae4  ldur w12,[x29, #-0x58]
71002acae8  sub w11,w23,w11, UXTB 
71002acaec  tst w10,#0x1000
71002acaf0  csel w11,w12,w11,eq
71002acaf4  ldrh w12,[x21, #0x16]
71002acaf8  ldrb w13,[x21, #0x15]
71002acafc  ldr w14,[x21]
71002acb00  sub w13,w23,w13
71002acb04  tst w12,#0x1000
71002acb08  csel w13,w14,w13,eq
71002acb0c  cmp w11,w13
71002acb10  b.ne 0x71002acb48
71002acb14  ldur x13,[x29, #-0x50]
71002acb18  tst w10,#0x1000
71002acb1c  ldr x10,[x21, #0x8]
71002acb20  csel x0,x13,x24,eq
71002acb24  tst w12,#0x1000
71002acb28  csel x1,x10,x21,eq
71002acb2c  cmp x0,x1
71002acb30  b.eq 0x71002acc90
71002acb34  mov w2,w11
71002acb38  bl 0x71039c0250
71002acb3c  cbz w0,0x71002acc88
71002acb40  ldr x9,[sp, #0x10]
71002acb44  ldr w8,[sp, #0x8]
71002acb48  umaddl x10,w8,w25,x9
71002acb4c  add x21,x21,#0x30
71002acb50  cmp x21,x10
71002acb54  b.ne 0x71002acadc
71002acb58  b 0x71002acc90
71002acb5c  str xzr,[x0, #0x8]
71002acb60  ldr x0,[sp, #0x90]
71002acb64  cbnz x0,0x71002aca6c
71002acb68  b 0x71002aca70
71002acb6c  str xzr,[x0, #0x8]
71002acb70  ldr x0,[x19, #0x20]
71002acb74  cbnz x0,0x71002aca1c
71002acb78  b 0x71002aca20
71002acb7c  mov x9,x21
71002acb80  mov x10,x21
71002acb84  orr w11,wzr,#0x30
71002acb88  umaddl x11,w8,w11,x9
71002acb8c  cmp x10,x11
71002acb90  b.eq 0x71002acca8
71002acb94  ldrb w11,[x10, #0x2e]
71002acb98  tbz w11,#0x4,0x71002acca8
71002acb9c  ldr x10,[x10, #0x18]
71002acba0  str x10,[x20, #0x8]
71002acba4  adrp x10,0x71043bd000
71002acba8  add x10,x10,#0xb79
71002acbac  stp x10,xzr,[x29, #-0x50]
71002acbb0  orr w10,wzr,#0xc
71002acbb4  stur xzr,[x29, #-0x58]
71002acbb8  sturh w22,[x29, #-0x42]
71002acbbc  stur w10,[x29, #-0x58]
71002acbc0  cbz w8,0x71002acc64
71002acbc4  mov w12,wzr
71002acbc8  mov w10,#0x405
71002acbcc  orr w13,wzr,#0xc
71002acbd0  mov w20,#0x15
71002acbd4  sub x22,x29,#0x58
71002acbd8  orr w23,wzr,#0x30
71002acbdc  mov x11,x21
71002acbe0  b 0x71002acbf0
71002acbe4  ldurh w10,[x29, #-0x42]
71002acbe8  ldurb w12,[x29, #-0x43]
71002acbec  ldur w13,[x29, #-0x58]
71002acbf0  sub w12,w20,w12, UXTB 
71002acbf4  tst w10,#0x1000
71002acbf8  csel w12,w13,w12,eq
71002acbfc  ldrh w13,[x21, #0x16]
71002acc00  ldrb w14,[x21, #0x15]
71002acc04  ldr w15,[x21]
71002acc08  sub w14,w20,w14
71002acc0c  tst w13,#0x1000
71002acc10  csel w14,w15,w14,eq
71002acc14  cmp w12,w14
71002acc18  b.ne 0x71002acc54
71002acc1c  ldur x11,[x29, #-0x50]
71002acc20  tst w10,#0x1000
71002acc24  ldr x10,[x21, #0x8]
71002acc28  csel x0,x11,x22,eq
71002acc2c  tst w13,#0x1000
71002acc30  csel x1,x10,x21,eq
71002acc34  cmp x0,x1
71002acc38  b.eq 0x71002acc64
71002acc3c  mov w2,w12
71002acc40  bl 0x71039c0250
71002acc44  cbz w0,0x71002accb8
71002acc48  ldr x9,[sp, #0x10]
71002acc4c  ldr w8,[sp, #0x8]
71002acc50  mov x11,x9
71002acc54  umaddl x10,w8,w23,x11
71002acc58  add x21,x21,#0x30
71002acc5c  cmp x21,x10
71002acc60  b.ne 0x71002acbe4
71002acc64  orr w10,wzr,#0x30
71002acc68  umaddl x8,w8,w10,x9
71002acc6c  cmp x21,x8
71002acc70  b.eq 0x71002acca8
71002acc74  ldrh w8,[x21, #0x2e]
71002acc78  tbz w8,#0xa,0x71002acca8
71002acc7c  tbnz w8,#0xc,0x71002accd4
71002acc80  ldr x1,[x21, #0x20]
71002acc84  b 0x71002accd8
71002acc88  ldr x9,[sp, #0x10]
71002acc8c  ldr w8,[sp, #0x8]
71002acc90  mov x10,x21
71002acc94  mov x21,x9
71002acc98  orr w11,wzr,#0x30
71002acc9c  umaddl x11,w8,w11,x9
71002acca0  cmp x10,x11
71002acca4  b.ne 0x71002acb94
71002acca8  mov w21,wzr
71002accac  ldr x19,[sp, #0x28]
71002accb0  cbnz x19,0x71002ac9ec
71002accb4  b 0x71002aca28
71002accb8  ldr x9,[sp, #0x10]
71002accbc  ldr w8,[sp, #0x8]
71002accc0  orr w10,wzr,#0x30
71002accc4  umaddl x8,w8,w10,x9
71002accc8  cmp x21,x8
71002acccc  b.ne 0x71002acc74
71002accd0  b 0x71002acca8
71002accd4  add x1,x21,#0x18
71002accd8  mov x0,x19
71002accdc  bl 0x71001b3cb0
71002acce0  mov w21,#0x1
71002acce4  ldr x19,[sp, #0x28]
71002acce8  cbnz x19,0x71002ac9ec
71002accec  b 0x71002aca28
