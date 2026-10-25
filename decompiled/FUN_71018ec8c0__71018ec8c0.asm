// addr:      71018ec8c0
// offset:    0x18ec8c0
// name:      FUN_71018ec8c0
// mangled:   
// size:      3144

71018ec8c0  stp x28,x27,[sp, #-0x60]!
71018ec8c4  stp x26,x25,[sp, #0x10]
71018ec8c8  stp x24,x23,[sp, #0x20]
71018ec8cc  stp x22,x21,[sp, #0x30]
71018ec8d0  stp x20,x19,[sp, #0x40]
71018ec8d4  stp x29,x30,[sp, #0x50]
71018ec8d8  add x29,sp,#0x50
71018ec8dc  sub sp,sp,#0x1f0
71018ec8e0  ldr w8,[x0, #0x10c]
71018ec8e4  mov x19,x0
71018ec8e8  cbz w8,0x71018ec924
71018ec8ec  adrp x23,0x7105329000
71018ec8f0  ldr x8,[x23, #0xf98]
71018ec8f4  ldr x8,[x8]
71018ec8f8  ldr x22,[x8, #0x10]
71018ec8fc  ldrb w8,[x22, #0x10]
71018ec900  cmp w8,#0x3
71018ec904  b.ne 0x71018ec910
71018ec908  mov x8,xzr
71018ec90c  b 0x71018ecb24
71018ec910  ldrb w8,[x22, #0x50]
71018ec914  cmp w8,#0x3
71018ec918  b.ne 0x71018ec9fc
71018ec91c  mov w8,#0x1
71018ec920  b 0x71018ecb24
71018ec924  mov x0,x19
71018ec928  bl 0x71018edb50
71018ec92c  ldr x8,[x19, #0x148]
71018ec930  ldr x21,[x8, #0x80]
71018ec934  ldr w8,[x21, #0x8]
71018ec938  cmn w8,#0x1
71018ec93c  b.eq 0x71018ec994
71018ec940  ldr x20,[x21, #0x18]
71018ec944  mov w8,#0xffffffff
71018ec948  str w8,[x21, #0x8]
71018ec94c  cbz x20,0x71018ec964
71018ec950  mov x0,x20
71018ec954  str xzr,[x21, #0x18]
71018ec958  bl 0x7103375760
71018ec95c  mov x0,x20
71018ec960  bl 0x710392eb40
71018ec964  ldr x20,[x21, #0x10]
71018ec968  cbz x20,0x71018ec994
71018ec96c  str xzr,[x21, #0x10]
71018ec970  ldr x21,[x20]
71018ec974  str xzr,[x20]
71018ec978  cbz x21,0x71018ec98c
71018ec97c  mov x0,x21
71018ec980  bl 0x7103773770
71018ec984  mov x0,x21
71018ec988  bl 0x710392eb40
71018ec98c  mov x0,x20
71018ec990  bl 0x710392eb40
71018ec994  ldr x20,[x19, #0x128]
71018ec998  ldr x21,[x20, #0x80]
71018ec99c  ldrsw x8,[x21, #0x50]
71018ec9a0  cmn w8,#0x1
71018ec9a4  b.eq 0x71018ec9c0
71018ec9a8  cmp w8,#0xa
71018ec9ac  b.cs 0x71018ed504
71018ec9b0  add x8,x21,x8, LSL #0x4
71018ec9b4  ldr x0,[x8, #0x78]
71018ec9b8  mov w1,wzr
71018ec9bc  bl 0x7101d96e80
71018ec9c0  ldr x8,[x21, #0x10]
71018ec9c4  ldr x0,[x8]
71018ec9c8  bl 0x7103775fa0
71018ec9cc  mov w8,#0x1
71018ec9d0  strb wzr,[x21, #0x4c]
71018ec9d4  strb w8,[x20, #0x70]
71018ec9d8  adrp x8,0x7105329000
71018ec9dc  ldr x8,[x8, #0xf98]
71018ec9e0  ldr x8,[x8]
71018ec9e4  ldr x8,[x8, #0x10]
71018ec9e8  ldrb w9,[x8, #0x10]
71018ec9ec  cmp w9,#0x3
71018ec9f0  b.ne 0x71018eca10
71018ec9f4  mov x9,xzr
71018ec9f8  b 0x71018ed428
71018ec9fc  ldrb w8,[x22, #0x90]
71018eca00  cmp w8,#0x3
71018eca04  b.ne 0x71018eca24
71018eca08  mov w8,#0x2
71018eca0c  b 0x71018ecb24
71018eca10  ldrb w9,[x8, #0x50]
71018eca14  cmp w9,#0x3
71018eca18  b.ne 0x71018eca38
71018eca1c  mov w9,#0x1
71018eca20  b 0x71018ed428
71018eca24  ldrb w8,[x22, #0xd0]
71018eca28  cmp w8,#0x3
71018eca2c  b.ne 0x71018eca4c
71018eca30  orr w8,wzr,#0x3
71018eca34  b 0x71018ecb24
71018eca38  ldrb w9,[x8, #0x90]
71018eca3c  cmp w9,#0x3
71018eca40  b.ne 0x71018eca60
71018eca44  mov w9,#0x2
71018eca48  b 0x71018ed428
71018eca4c  ldrb w8,[x22, #0x110]
71018eca50  cmp w8,#0x3
71018eca54  b.ne 0x71018eca74
71018eca58  mov w8,#0x4
71018eca5c  b 0x71018ecb24
71018eca60  ldrb w9,[x8, #0xd0]
71018eca64  cmp w9,#0x3
71018eca68  b.ne 0x71018eca88
71018eca6c  orr w9,wzr,#0x3
71018eca70  b 0x71018ed428
71018eca74  ldrb w8,[x22, #0x150]
71018eca78  cmp w8,#0x3
71018eca7c  b.ne 0x71018eca9c
71018eca80  mov w8,#0x5
71018eca84  b 0x71018ecb24
71018eca88  ldrb w9,[x8, #0x110]
71018eca8c  cmp w9,#0x3
71018eca90  b.ne 0x71018ecab0
71018eca94  mov w9,#0x4
71018eca98  b 0x71018ed428
71018eca9c  ldrb w8,[x22, #0x190]
71018ecaa0  cmp w8,#0x3
71018ecaa4  b.ne 0x71018ecac4
71018ecaa8  orr w8,wzr,#0x6
71018ecaac  b 0x71018ecb24
71018ecab0  ldrb w9,[x8, #0x150]
71018ecab4  cmp w9,#0x3
71018ecab8  b.ne 0x71018ecad8
71018ecabc  mov w9,#0x5
71018ecac0  b 0x71018ed428
71018ecac4  ldrb w8,[x22, #0x1d0]
71018ecac8  cmp w8,#0x3
71018ecacc  b.ne 0x71018ecaec
71018ecad0  orr w8,wzr,#0x7
71018ecad4  b 0x71018ecb24
71018ecad8  ldrb w9,[x8, #0x190]
71018ecadc  cmp w9,#0x3
71018ecae0  b.ne 0x71018ecb00
71018ecae4  orr w9,wzr,#0x6
71018ecae8  b 0x71018ed428
71018ecaec  ldrb w8,[x22, #0x210]
71018ecaf0  cmp w8,#0x3
71018ecaf4  b.ne 0x71018ecb14
71018ecaf8  mov w8,#0x8
71018ecafc  b 0x71018ecb24
71018ecb00  ldrb w9,[x8, #0x1d0]
71018ecb04  cmp w9,#0x3
71018ecb08  b.ne 0x71018ed3fc
71018ecb0c  orr w9,wzr,#0x7
71018ecb10  b 0x71018ed428
71018ecb14  ldrb w8,[x22, #0x250]
71018ecb18  cmp w8,#0x3
71018ecb1c  b.ne 0x71018ed410
71018ecb20  mov w8,#0x9
71018ecb24  add x8,x22,x8, LSL #0x6
71018ecb28  ldr x20,[x8, #0x20]
71018ecb2c  add x0,sp,#0x110
71018ecb30  stur xzr,[x29, #-0x60]
71018ecb34  bl 0x71039c6220
71018ecb38  add x0,sp,#0x40
71018ecb3c  bl 0x71039c6220
71018ecb40  mov w21,#0xd0
71018ecb44  add x0,sp,#0x110
71018ecb48  mov x1,x20
71018ecb4c  mov x2,x21
71018ecb50  bl 0x71039c00e0
71018ecb54  add x1,x22,#0x2a0
71018ecb58  add x0,sp,#0x40
71018ecb5c  mov x2,x21
71018ecb60  bl 0x71039c00e0
71018ecb64  sub x0,x29,#0x60
71018ecb68  add x1,sp,#0x110
71018ecb6c  add x2,sp,#0x40
71018ecb70  bl 0x71039c6230
71018ecb74  ldur x9,[x29, #-0x60]
71018ecb78  mov x8,xzr
71018ecb7c  tbnz x9,#0x3f,0x71018ecb90
71018ecb80  tbz w0,#0x0,0x71018ecb90
71018ecb84  ldr x8,[x20, #0xd0]
71018ecb88  subs x8,x8,x9
71018ecb8c  csel x8,xzr,x8,lt
71018ecb90  and x9,x8,#0xffffffff
71018ecb94  lsr x8,x8,#0x20
71018ecb98  mov w10,#0x94b3
71018ecb9c  movk w10,#0x26d6, LSL #16
71018ecba0  mul x11,x8,x10
71018ecba4  mul x10,x9,x10
71018ecba8  add x10,x11,x10, LSR #0x20
71018ecbac  mov w11,#0xbe8
71018ecbb0  movk w11,#0x112e, LSL #16
71018ecbb4  mul x8,x8,x11
71018ecbb8  mul x9,x9,x11
71018ecbbc  add x9,x9,w10, UXTW 
71018ecbc0  add x8,x8,x10, LSR #0x20
71018ecbc4  add x8,x8,x9, LSR #0x20
71018ecbc8  lsr x22,x8,#0x1a
71018ecbcc  ldr x8,[x19, #0x130]
71018ecbd0  ldr x24,[x8, #0x80]
71018ecbd4  mov w8,#0x8889
71018ecbd8  movk w8,#0x8888, LSL #16
71018ecbdc  umull x9,w22,w8
71018ecbe0  lsr x9,x9,#0x25
71018ecbe4  mul x8,x9,x8
71018ecbe8  mov w10,#0xffffffc4
71018ecbec  madd w20,w9,w10,w22
71018ecbf0  orr w10,wzr,#0x3c
71018ecbf4  add x0,x24,#0x160
71018ecbf8  lsr x8,x8,#0x25
71018ecbfc  msub w21,w8,w10,w9
71018ecc00  adrp x1,0x71043ae000
71018ecc04  add x1,x1,#0x1be
71018ecc08  add x8,sp,#0x40
71018ecc0c  bl 0x7103776910
71018ecc10  cbz w21,0x71018ecc54
71018ecc14  mov w8,#0xb3c5
71018ecc18  movk w8,#0x91a2, LSL #16
71018ecc1c  umull x8,w22,w8
71018ecc20  lsr x3,x8,#0x2b
71018ecc24  adrp x1,0x710434a000
71018ecc28  add x1,x1,#0x7dc
71018ecc2c  add x0,sp,#0x40
71018ecc30  orr w2,wzr,#0x3
71018ecc34  mov w4,w21
71018ecc38  mov w5,w20
71018ecc3c  bl 0x710377a280
71018ecc40  ldrb w8,[x24, #0x1b8]
71018ecc44  cmp w21,#0x4
71018ecc48  b.hi 0x71018ecc94
71018ecc4c  cbnz w8,0x71018eccb0
71018ecc50  b 0x71018ecc74
71018ecc54  adrp x1,0x7104308000
71018ecc58  add x1,x1,#0x89b
71018ecc5c  add x0,sp,#0x40
71018ecc60  mov w2,#0x1
71018ecc64  mov w3,w20
71018ecc68  bl 0x710377a280
71018ecc6c  ldrb w8,[x24, #0x1b8]
71018ecc70  cbnz w8,0x71018eccb0
71018ecc74  ldr x0,[x24, #0x168]
71018ecc78  fmov s0,0x3f800000
71018ecc7c  adrp x1,0x71042b4000
71018ecc80  add x1,x1,#0x74b
71018ecc84  bl 0x7103778300
71018ecc88  mov w8,#0x1
71018ecc8c  strb w8,[x24, #0x1b8]
71018ecc90  b 0x71018eccb0
71018ecc94  cbz w8,0x71018eccb0
71018ecc98  ldr x0,[x24, #0x168]
71018ecc9c  fmov s0,0x3f800000
71018ecca0  adrp x1,0x7104401000
71018ecca4  add x1,x1,#0x972
71018ecca8  bl 0x7103778300
71018eccac  strb wzr,[x24, #0x1b8]
71018eccb0  ldr w8,[x24, #0x118]
71018eccb4  and w8,w8,#0xfffffffe
71018eccb8  cmp w8,#0x2
71018eccbc  b.ne 0x71018ecdb8
71018eccc0  ldr w8,[x24, #0x1bc]
71018eccc4  cmp w8,w22
71018eccc8  b.eq 0x71018ecdb8
71018ecccc  cmp w20,#0xb
71018eccd0  cset w8,cc
71018eccd4  cmp w20,#0x1e
71018eccd8  cset w9,eq
71018eccdc  cbnz w21,0x71018ecce8
71018ecce0  orr w8,w8,w9
71018ecce4  tbnz w8,#0x0,0x71018eccf4
71018ecce8  cbnz w20,0x71018ecdb8
71018eccec  cmp w21,#0x1
71018eccf0  b.ne 0x71018ecdb8
71018eccf4  adrp x8,0x710532f000
71018eccf8  ldr x8,[x8, #0x8d0]
71018eccfc  ldr x0,[x8, #0x8]
71018ecd00  ldrb w8,[x0, #0x191]
71018ecd04  cbnz w8,0x71018ecd84
71018ecd08  mov x20,#0xb9da
71018ecd0c  movk x20,#0x8a0f, LSL #16
71018ecd10  movk x20,#0x1b, LSL #32
71018ecd14  mov w2,#0x4
71018ecd18  mov x1,x20
71018ecd1c  bl 0x7103313f20
71018ecd20  tbz w0,#0x0,0x71018ecd84
71018ecd24  add x0,sp,#0x110
71018ecd28  mov x1,x20
71018ecd2c  bl 0x71024076d0
71018ecd30  ldr x8,[sp, #0x120]
71018ecd34  adrp x9,0x7104f73000
71018ecd38  add x9,x9,#0xd50
71018ecd3c  str x9,[sp, #0x118]
71018ecd40  cbz x8,0x71018ecdb0
71018ecd44  adrp x8,0x7106dd5000
71018ecd48  ldrb w8,[x8, #0x3a8]
71018ecd4c  cmp w8,#0x1
71018ecd50  b.ne 0x71018ecdb0
71018ecd54  adrp x9,0x7106dd5000
71018ecd58  ldr w8,[sp, #0x128]
71018ecd5c  ldr w9,[x9, #0x3ac]
71018ecd60  cmp w8,w9
71018ecd64  b.ne 0x71018ecdb0
71018ecd68  ldr x8,[sp, #0x120]
71018ecd6c  ldr wzr,[x8, #0x38]!
71018ecd70  ldaxr w9,[x8]
71018ecd74  sub w9,w9,#0x1
71018ecd78  stlxr w10,w9,[x8]
71018ecd7c  cbnz w10,0x71018ecd70
71018ecd80  b 0x71018ecdb0
71018ecd84  mov x8,#0x650000000000
71018ecd88  movk x8,#0x87, LSL #48
71018ecd8c  strb wzr,[sp, #0x130]
71018ecd90  stp xzr,x8,[sp, #0x120]
71018ecd94  mov x8,#-0x1
71018ecd98  stp x8,xzr,[sp, #0x138]
71018ecd9c  adrp x8,0x7104f73000
71018ecda0  add x8,x8,#0xd50
71018ecda4  str wzr,[sp, #0x110]
71018ecda8  str xzr,[sp, #0x148]
71018ecdac  str x8,[sp, #0x118]
71018ecdb0  str xzr,[sp, #0x120]
71018ecdb4  strb wzr,[sp, #0x130]
71018ecdb8  str w22,[x24, #0x1bc]
71018ecdbc  ldr x0,[sp, #0x48]
71018ecdc0  adrp x8,0x710523d000
71018ecdc4  add x8,x8,#0x9a8
71018ecdc8  stp x8,xzr,[sp, #0x40]
71018ecdcc  cbz x0,0x71018ecdd4
71018ecdd0  bl 0x710392eb40
71018ecdd4  ldr x8,[x19, #0x130]
71018ecdd8  ldr x9,[x8, #0x80]
71018ecddc  ldr w8,[x9, #0x118]
71018ecde0  sub w10,w8,#0x2
71018ecde4  cmp w10,#0x2
71018ecde8  b.hi 0x71018ece18
71018ecdec  ldr x8,[x9, #0x1b0]
71018ecdf0  ldrb w8,[x8, #0x280]
71018ecdf4  cbz w8,0x71018ed2d8
71018ecdf8  ldr x8,[x19, #0x140]
71018ecdfc  ldr x20,[x8, #0x80]
71018ece00  ldrb w8,[x20, #0xc9]
71018ece04  mov w9,#0x2260
71018ece08  add x0,x20,x9
71018ece0c  cbz w8,0x71018ed034
71018ece10  mov w1,wzr
71018ece14  b 0x71018ed038
71018ece18  cmp w8,#0x6
71018ece1c  b.ne 0x71018ecf80
71018ece20  mov w8,#0x1
71018ece24  str w8,[x19, #0x118]
71018ece28  adrp x8,0x7105314000
71018ece2c  add x8,x8,#0x4d8
71018ece30  ldarb w8,[x8]
71018ece34  tbz w8,#0x0,0x71018ed47c
71018ece38  ldr x0,[x19, #0x130]
71018ece3c  ldr x8,[x0]
71018ece40  ldr x8,[x8, #0x20]
71018ece44  blr x8
71018ece48  cmn w0,#0x1
71018ece4c  b.eq 0x71018ecef0
71018ece50  adrp x8,0x7105307000
71018ece54  str w0,[x8, #0xb68]
71018ece58  adrp x8,0x7105339000
71018ece5c  add x8,x8,#0x830
71018ece60  cmp w0,#0x9
71018ece64  b.hi 0x71018ece88
71018ece68  adrp x9,0x7105339000
71018ece6c  ldr x9,[x9, #0x8b0]
71018ece70  ldrb w9,[x9, #0x8]
71018ece74  cbz w9,0x71018ece88
71018ece78  adrp x8,0x7105339000
71018ece7c  add x8,x8,#0x860
71018ece80  ldr x8,[x8, w0, SXTW #0x3]
71018ece84  cbz x8,0x71018eceb0
71018ece88  ldr x8,[x8, #0x10]
71018ece8c  ldr w8,[x8, #0x9c]
71018ece90  sub w8,w8,#0x1
71018ece94  cmp w8,#0x6
71018ece98  b.hi 0x71018eceb0
71018ece9c  adrp x9,0x7104753000
71018ecea0  add x9,x9,#0xde0
71018ecea4  ldr w8,[x9, w8, SXTW #0x2]
71018ecea8  adrp x9,0x7105307000
71018eceac  str w8,[x9, #0xb6c]
71018eceb0  adrp x8,0x710593b000
71018eceb4  ldr x8,[x8, #0xa90]
71018eceb8  cbz x8,0x71018ececc
71018ecebc  adrp x9,0x7105307000
71018ecec0  ldr w9,[x9, #0xb6c]
71018ecec4  ldr x8,[x8]
71018ecec8  str w9,[x8, #0x3ac]
71018ececc  adrp x8,0x710532f000
71018eced0  ldr x8,[x8, #0x7f0]
71018eced4  cbz x8,0x71018ecef0
71018eced8  ldr x8,[x8, #0x8]
71018ecedc  ldr x8,[x8, #0x8]
71018ecee0  adrp x9,0x7105307000
71018ecee4  ldr w1,[x9, #0xb6c]
71018ecee8  ldr x0,[x8, #0x80]
71018eceec  bl 0x7101afe3e0
71018ecef0  adrp x8,0x710532f000
71018ecef4  ldr x8,[x8, #0x8d0]
71018ecef8  ldr x0,[x8, #0x8]
71018ecefc  ldrb w8,[x0, #0x191]
71018ecf00  cbnz w8,0x71018ecffc
71018ecf04  mov x20,#0x23f5
71018ecf08  movk x20,#0x57a5, LSL #16
71018ecf0c  movk x20,#0xf, LSL #32
71018ecf10  mov w2,#0x4
71018ecf14  mov x1,x20
71018ecf18  bl 0x7103313f20
71018ecf1c  tbz w0,#0x0,0x71018ecffc
71018ecf20  mov x0,sp
71018ecf24  mov x1,x20
71018ecf28  bl 0x71024076d0
71018ecf2c  ldr x8,[sp, #0x10]
71018ecf30  adrp x9,0x7104f73000
71018ecf34  add x9,x9,#0xd50
71018ecf38  str x9,[sp, #0x8]
71018ecf3c  cbz x8,0x71018ed028
71018ecf40  adrp x8,0x7106dd5000
71018ecf44  ldrb w8,[x8, #0x3a8]
71018ecf48  cmp w8,#0x1
71018ecf4c  b.ne 0x71018ed028
71018ecf50  adrp x9,0x7106dd5000
71018ecf54  ldr w8,[sp, #0x18]
71018ecf58  ldr w9,[x9, #0x3ac]
71018ecf5c  cmp w8,w9
71018ecf60  b.ne 0x71018ed028
71018ecf64  ldr x8,[sp, #0x10]
71018ecf68  ldr wzr,[x8, #0x38]!
71018ecf6c  ldaxr w9,[x8]
71018ecf70  sub w9,w9,#0x1
71018ecf74  stlxr w10,w9,[x8]
71018ecf78  cbnz w10,0x71018ecf6c
71018ecf7c  b 0x71018ed028
71018ecf80  ldrb w9,[x19, #0x15c]
71018ecf84  cbz w9,0x71018ed2d8
71018ecf88  cmp w8,#0x7
71018ecf8c  b.ne 0x71018ed2d8
71018ecf90  mov w8,#0x2
71018ecf94  str w8,[x19, #0x118]
71018ecf98  ldr x8,[x23, #0xf98]
71018ecf9c  ldr x8,[x8]
71018ecfa0  ldr x8,[x8, #0x10]
71018ecfa4  ldrb w10,[x8, #0x290]
71018ecfa8  cbz w10,0x71018ed1a4
71018ecfac  sub w9,w10,#0x1
71018ecfb0  adrp x22,0x7105314000
71018ecfb4  cmp w9,#0xf
71018ecfb8  b.hi 0x71018ed080
71018ecfbc  ldr x8,[x22, #0x510]
71018ecfc0  ldr x8,[x8]
71018ecfc4  ldr x8,[x8, #0xd8]
71018ecfc8  ldr x8,[x8]
71018ecfcc  subs w10,w10,#0xe
71018ecfd0  b.cs 0x71018ed050
71018ecfd4  and w10,w9,#0xff
71018ecfd8  cmp w10,#0xd
71018ecfdc  b.cs 0x71018ed504
71018ecfe0  ldr x8,[x8]
71018ecfe4  and x9,x9,#0xff
71018ecfe8  ldrb w10,[x8, x9, LSL ]
71018ecfec  cbz w10,0x71018ed080
71018ecff0  sub w10,w10,#0x1
71018ecff4  strb w10,[x8, x9, LSL ]
71018ecff8  b 0x71018ed080
71018ecffc  mov x8,#0x650000000000
71018ed000  movk x8,#0x87, LSL #48
71018ed004  strb wzr,[sp, #0x20]
71018ed008  stp xzr,x8,[sp, #0x10]
71018ed00c  mov x8,#-0x1
71018ed010  stp x8,xzr,[sp, #0x28]
71018ed014  adrp x8,0x7104f73000
71018ed018  add x8,x8,#0xd50
71018ed01c  str wzr,[sp]
71018ed020  str xzr,[sp, #0x38]
71018ed024  str x8,[sp, #0x8]
71018ed028  str xzr,[sp, #0x10]
71018ed02c  strb wzr,[sp, #0x20]
71018ed030  b 0x71018ed2c0
71018ed034  mov w1,#0x4
71018ed038  mov w2,wzr
71018ed03c  bl 0x7103771be0
71018ed040  ldr x8,[x20, #0x2260]
71018ed044  ldr w8,[x8, #0x25c]
71018ed048  str w8,[x20, #0x2270]
71018ed04c  b 0x71018ed2d8
71018ed050  mvn w9,w10
71018ed054  tst w9,#0xff
71018ed058  b.eq 0x71018ed080
71018ed05c  and w9,w10,#0xff
71018ed060  cmp w9,#0x3
71018ed064  b.cs 0x71018ed504
71018ed068  ldr x8,[x8]
71018ed06c  add x8,x8,w10, UXTB  #0x1
71018ed070  ldrh w9,[x8, #0xe]!
71018ed074  cbz w9,0x71018ed080
71018ed078  sub w9,w9,#0x1
71018ed07c  strh w9,[x8]
71018ed080  adrp x24,0x710532f000
71018ed084  ldr x25,[x24, #0x730]
71018ed088  ldr x26,[x22, #0x510]
71018ed08c  ldr x9,[x26]
71018ed090  ldr x8,[x25, #0x8]
71018ed094  ldr x27,[x9, #0x248]
71018ed098  ldr x21,[x8, #0x348]
71018ed09c  mov x20,#0xfecc
71018ed0a0  movk x20,#0x5277, LSL #16
71018ed0a4  movk x20,#0x14, LSL #32
71018ed0a8  mov x1,x20
71018ed0ac  mov x0,x21
71018ed0b0  bl 0x71032673c0
71018ed0b4  mov x1,x0
71018ed0b8  mov x0,x21
71018ed0bc  bl 0x7103267ce0
71018ed0c0  ldr x8,[x27]
71018ed0c4  ldr x8,[x8]
71018ed0c8  ldr x9,[x25, #0x8]
71018ed0cc  mov w25,#0x95
71018ed0d0  cmp w0,#0x95
71018ed0d4  csel w10,w0,w25,cc
71018ed0d8  add x8,x8,w10, UXTW  #0x2
71018ed0dc  ldr w8,[x8, #0x4c]
71018ed0e0  add w27,w8,#0x1
71018ed0e4  ldr x8,[x26]
71018ed0e8  ldr x21,[x9, #0x348]
71018ed0ec  mov x0,x21
71018ed0f0  ldr x26,[x8, #0x248]
71018ed0f4  mov x1,x20
71018ed0f8  bl 0x71032673c0
71018ed0fc  mov x1,x0
71018ed100  mov x0,x21
71018ed104  bl 0x7103267ce0
71018ed108  ldr x8,[x26]
71018ed10c  ldr x8,[x8]
71018ed110  cmp w0,#0x95
71018ed114  csel w9,w0,w25,cc
71018ed118  add x8,x8,w9, UXTW  #0x2
71018ed11c  str w27,[x8, #0x4c]
71018ed120  ldr x8,[x24, #0x730]
71018ed124  ldr x8,[x8, #0x8]
71018ed128  ldr x21,[x8, #0x348]
71018ed12c  mov x0,x21
71018ed130  mov x1,x20
71018ed134  bl 0x71032673c0
71018ed138  mov x1,x0
71018ed13c  mov x0,x21
71018ed140  mov w2,wzr
71018ed144  bl 0x7103267960
71018ed148  ldr x8,[x24, #0x730]
71018ed14c  ldr x9,[x22, #0x510]
71018ed150  mov w21,w0
71018ed154  ldr x8,[x8, #0x8]
71018ed158  ldr x9,[x9]
71018ed15c  ldr x24,[x9, #0x248]
71018ed160  ldr x22,[x8, #0x348]
71018ed164  mov x0,x22
71018ed168  mov x1,x20
71018ed16c  bl 0x71032673c0
71018ed170  mov x1,x0
71018ed174  mov x0,x22
71018ed178  bl 0x7103267ce0
71018ed17c  ldr x8,[x24]
71018ed180  ldr x8,[x8]
71018ed184  cmp w0,#0x95
71018ed188  csel w9,w0,w25,cc
71018ed18c  add x8,x8,w9, UXTW  #0x2
71018ed190  ldr w8,[x8, #0x4c]
71018ed194  cmp w8,w21
71018ed198  b.cc 0x71018ed1a4
71018ed19c  mov w0,#0x39
71018ed1a0  bl 0x710177a5c0
71018ed1a4  ldr x0,[x19, #0x140]
71018ed1a8  ldr x8,[x0]
71018ed1ac  ldr x8,[x8, #0x20]
71018ed1b0  blr x8
71018ed1b4  adrp x8,0x7105314000
71018ed1b8  add x8,x8,#0x4d8
71018ed1bc  ldarb w8,[x8]
71018ed1c0  mov w20,w0
71018ed1c4  tbz w8,#0x0,0x71018ed4bc
71018ed1c8  cmn w20,#0x1
71018ed1cc  b.eq 0x71018ed2ac
71018ed1d0  adrp x8,0x7105307000
71018ed1d4  str w20,[x8, #0xb68]
71018ed1d8  adrp x8,0x7105339000
71018ed1dc  add x8,x8,#0x830
71018ed1e0  cmp w20,#0x9
71018ed1e4  b.hi 0x71018ed208
71018ed1e8  adrp x9,0x7105339000
71018ed1ec  ldr x9,[x9, #0x8b0]
71018ed1f0  ldrb w9,[x9, #0x8]
71018ed1f4  cbz w9,0x71018ed208
71018ed1f8  adrp x8,0x7105339000
71018ed1fc  add x8,x8,#0x860
71018ed200  ldr x8,[x8, w20, SXTW #0x3]
71018ed204  cbz x8,0x71018ed230
71018ed208  ldr x8,[x8, #0x10]
71018ed20c  ldr w8,[x8, #0x9c]
71018ed210  sub w8,w8,#0x1
71018ed214  cmp w8,#0x6
71018ed218  b.hi 0x71018ed230
71018ed21c  adrp x9,0x7104753000
71018ed220  add x9,x9,#0xde0
71018ed224  ldr w8,[x9, w8, SXTW #0x2]
71018ed228  adrp x9,0x7105307000
71018ed22c  str w8,[x9, #0xb6c]
71018ed230  adrp x8,0x710593b000
71018ed234  ldr x8,[x8, #0xa90]
71018ed238  cbz x8,0x71018ed24c
71018ed23c  adrp x9,0x7105307000
71018ed240  ldr w9,[x9, #0xb6c]
71018ed244  ldr x8,[x8]
71018ed248  str w9,[x8, #0x3ac]
71018ed24c  adrp x8,0x710532f000
71018ed250  ldr x8,[x8, #0x7f0]
71018ed254  cbz x8,0x71018ed270
71018ed258  ldr x8,[x8, #0x8]
71018ed25c  ldr x8,[x8, #0x8]
71018ed260  adrp x9,0x7105307000
71018ed264  ldr w1,[x9, #0xb6c]
71018ed268  ldr x0,[x8, #0x80]
71018ed26c  bl 0x7101afe3e0
71018ed270  adrp x8,0x71052c5000
71018ed274  ldr x8,[x8, #0x120]
71018ed278  fmov s0,0x3f800000
71018ed27c  mov v1.16B,v0.16B
71018ed280  mov w1,w20
71018ed284  mov w3,wzr
71018ed288  mov w4,wzr
71018ed28c  mov w5,wzr
71018ed290  mov w6,wzr
71018ed294  ldr x0,[x8, #0x8]
71018ed298  mov x2,#0xccdb
71018ed29c  movk x2,#0x13c4, LSL #16
71018ed2a0  movk x2,#0x1b, LSL #32
71018ed2a4  mov w7,wzr
71018ed2a8  bl 0x710175dfc0
71018ed2ac  ldr x8,[x23, #0xf98]
71018ed2b0  ldr x8,[x8]
71018ed2b4  ldr x0,[x8, #0x50]
71018ed2b8  mov w1,#0x12
71018ed2bc  bl 0x71024a2360
71018ed2c0  ldrsw x8,[x19, #0x104]
71018ed2c4  cmp w8,#0x13
71018ed2c8  b.cs 0x71018ed504
71018ed2cc  add x8,x19,x8, LSL #0x2
71018ed2d0  mov w9,#0x8
71018ed2d4  str w9,[x8, #0xb8]
71018ed2d8  ldr x8,[x19, #0x140]
71018ed2dc  ldr x8,[x8, #0x80]
71018ed2e0  ldr w8,[x8, #0x2270]
71018ed2e4  cbnz w8,0x71018ed3dc
71018ed2e8  ldr x8,[x23, #0xf98]
71018ed2ec  ldr x0,[x8]
71018ed2f0  bl 0x710248e4c0
71018ed2f4  ldr x8,[x19, #0x130]
71018ed2f8  ldr x0,[x8, #0x80]
71018ed2fc  mov w1,wzr
71018ed300  bl 0x7101da2890
71018ed304  ldrb w8,[x19, #0x158]
71018ed308  ldr x0,[x19, #0x128]
71018ed30c  mov w1,#0x1
71018ed310  bfm x1,x8,#0x30,#0x7
71018ed314  bl 0x7101d944a0
71018ed318  ldr x8,[x19, #0x148]
71018ed31c  ldr x0,[x8, #0x80]
71018ed320  mov w1,#0x1
71018ed324  bl 0x7101af2070
71018ed328  ldr x8,[x19, #0x140]
71018ed32c  ldr x20,[x8, #0x80]
71018ed330  ldr x0,[x20, #0x2268]
71018ed334  bl 0x710376b960
71018ed338  ldr x0,[x20, #0x2268]
71018ed33c  ldr x8,[x0]
71018ed340  ldr x8,[x8, #0x70]
71018ed344  mov w1,wzr
71018ed348  blr x8
71018ed34c  ldr w8,[x20, #0x11b0]
71018ed350  cbz w8,0x71018ed35c
71018ed354  str wzr,[x20, #0x11b0]
71018ed358  b 0x71018ed368
71018ed35c  mov w8,#0x2258
71018ed360  ldrb w8,[x20, x8, LSL ]
71018ed364  cbz w8,0x71018ed3c4
71018ed368  mov w8,#0x225a
71018ed36c  add x8,x20,x8
71018ed370  ldrb w9,[x8]
71018ed374  cmp w9,#0xff
71018ed378  b.ne 0x71018ed380
71018ed37c  strb wzr,[x8]
71018ed380  ldr w8,[x20, #0xa8]
71018ed384  cmp w8,#0x1
71018ed388  b.ne 0x71018ed3c4
71018ed38c  mov x8,#0x1
71018ed390  movk x8,#0x2, LSL #32
71018ed394  str wzr,[x20, #0xa0]
71018ed398  stp xzr,xzr,[x20, #0x8]
71018ed39c  strb wzr,[x20, #0xb4]
71018ed3a0  str x8,[x20, #0x58]
71018ed3a4  orr x8,xzr,#-0x100000000
71018ed3a8  stur x8,[x20, #0xac]
71018ed3ac  orr x8,xzr,#-0xffffffff
71018ed3b0  stur x8,[x20, #0xa4]
71018ed3b4  stp xzr,xzr,[x20, #0x90]
71018ed3b8  stp xzr,xzr,[x20, #0x80]
71018ed3bc  stp xzr,xzr,[x20, #0x70]
71018ed3c0  stp xzr,xzr,[x20, #0x60]
71018ed3c4  ldrsw x8,[x19, #0x104]
71018ed3c8  cmp w8,#0x13
71018ed3cc  b.cs 0x71018ed504
71018ed3d0  add x8,x19,x8, LSL #0x2
71018ed3d4  orr w9,wzr,#0x3
71018ed3d8  str w9,[x8, #0xb8]
71018ed3dc  add sp,sp,#0x1f0
71018ed3e0  ldp x29,x30,[sp, #0x50]
71018ed3e4  ldp x20,x19,[sp, #0x40]
71018ed3e8  ldp x22,x21,[sp, #0x30]
71018ed3ec  ldp x24,x23,[sp, #0x20]
71018ed3f0  ldp x26,x25,[sp, #0x10]
71018ed3f4  ldp x28,x27,[sp], #0x60
71018ed3f8  ret
71018ed3fc  ldrb w9,[x8, #0x210]
71018ed400  cmp w9,#0x3
71018ed404  b.ne 0x71018ed418
71018ed408  mov w9,#0x8
71018ed40c  b 0x71018ed428
71018ed410  mov w22,wzr
71018ed414  b 0x71018ecbcc
71018ed418  ldrb w9,[x8, #0x250]
71018ed41c  cmp w9,#0x3
71018ed420  b.ne 0x71018ec8ec
71018ed424  mov w9,#0x9
71018ed428  add x8,x8,x9, LSL #0x6
71018ed42c  ldr x8,[x8, #0x8]
71018ed430  ldrb w9,[x8, #0x8]
71018ed434  cbz w9,0x71018ec8ec
71018ed438  ldrb w9,[x8, #0xec]
71018ed43c  cbnz w9,0x71018ed44c
71018ed440  ldp x9,x10,[x8, #0x70]
71018ed444  cmp x10,x9
71018ed448  b.eq 0x71018ec8ec
71018ed44c  ldr x1,[x8, #0x28]
71018ed450  mov x9,#0x17e5
71018ed454  movk x9,#0x3d95, LSL #16
71018ed458  movk x9,#0x1e, LSL #32
71018ed45c  and x8,x1,#0xffffffffff
71018ed460  cmp x8,x9
71018ed464  b.eq 0x71018ec8ec
71018ed468  adrp x8,0x710532f000
71018ed46c  ldr x0,[x8, #0x8d0]
71018ed470  mov w2,#0x1
71018ed474  bl 0x71033145d0
71018ed478  b 0x71018ec8ec
71018ed47c  adrp x0,0x7105314000
71018ed480  add x0,x0,#0x4d8
71018ed484  bl 0x71039c06b0
71018ed488  cbz w0,0x71018ece38
71018ed48c  bl 0x7101764000
71018ed490  adrp x0,0x7101763000
71018ed494  add x0,x0,#0xc40
71018ed498  adrp x1,0x71052c5000
71018ed49c  add x1,x1,#0x180
71018ed4a0  adrp x2,0x7104f17000
71018ed4a4  add x2,x2,#0x0
71018ed4a8  bl 0x71000001c0
71018ed4ac  adrp x0,0x7105314000
71018ed4b0  add x0,x0,#0x4d8
71018ed4b4  bl 0x71039c06c0
71018ed4b8  b 0x71018ece38
71018ed4bc  adrp x0,0x7105314000
71018ed4c0  add x0,x0,#0x4d8
71018ed4c4  bl 0x71039c06b0
71018ed4c8  cbz w0,0x71018ed1c8
71018ed4cc  bl 0x7101764000
71018ed4d0  adrp x0,0x7101763000
71018ed4d4  add x0,x0,#0xc40
71018ed4d8  adrp x1,0x71052c5000
71018ed4dc  add x1,x1,#0x180
71018ed4e0  adrp x2,0x7104f17000
71018ed4e4  add x2,x2,#0x0
71018ed4e8  bl 0x71000001c0
71018ed4ec  adrp x0,0x7105314000
71018ed4f0  add x0,x0,#0x4d8
71018ed4f4  bl 0x71039c06c0
71018ed4f8  cmn w20,#0x1
71018ed4fc  b.ne 0x71018ed1d0
71018ed500  b 0x71018ed2ac
71018ed504  bl 0x71039c2650
