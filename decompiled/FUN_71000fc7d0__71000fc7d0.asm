// addr:      71000fc7d0
// offset:    0xfc7d0
// name:      FUN_71000fc7d0
// mangled:   
// size:      1164

71000fc7d0  sub sp,sp,#0x60
71000fc7d4  str x23,[sp, #0x20]
71000fc7d8  stp x22,x21,[sp, #0x30]
71000fc7dc  stp x20,x19,[sp, #0x40]
71000fc7e0  stp x29,x30,[sp, #0x50]
71000fc7e4  add x29,sp,#0x50
71000fc7e8  adrp x22,0x71052a5000
71000fc7ec  ldr x22,[x22, #0x80]
71000fc7f0  mov x19,x0
71000fc7f4  ldr x0,[x22]
71000fc7f8  bl 0x7100146ba0
71000fc7fc  sub w8,w0,#0x5
71000fc800  cmp w8,#0x3
71000fc804  b.hi 0x71000fc82c
71000fc808  adrp x9,0x7104496000
71000fc80c  add x9,x9,#0x39c
71000fc810  ldrsw x8,[x9, x8, LSL #0x2]
71000fc814  add x8,x8,x9
71000fc818  br x8
71000fc81c  mov w8,#0x1
71000fc820  orr w9,wzr,#0x3
71000fc824  mov w10,#0xc406
71000fc828  b 0x71000fc8e0
71000fc82c  adrp x20,0x71052a4000
71000fc830  ldr x20,[x20, #0xdf0]
71000fc834  ldr x0,[x20]
71000fc838  add x8,sp,#0x10
71000fc83c  bl 0x7100192e90
71000fc840  ldr w8,[sp, #0x10]
71000fc844  cbnz w8,0x71000fc858
71000fc848  ldr x0,[x22]
71000fc84c  bl 0x7100146ba0
71000fc850  cmp w0,#0x4
71000fc854  b.ne 0x71000fc964
71000fc858  mov w8,#0x6c59
71000fc85c  str w8,[sp, #0x10]
71000fc860  add x8,sp,#0x10
71000fc864  orr x20,x8,#0x4
71000fc868  mov x0,x20
71000fc86c  bl 0x71039c0a80
71000fc870  mov x1,sp
71000fc874  mov x0,x20
71000fc878  str wzr,[sp]
71000fc87c  bl 0x71039c0a90
71000fc880  add x0,x19,#0x220
71000fc884  add x1,sp,#0x10
71000fc888  bl 0x71000bcf30
71000fc88c  adrp x8,0x71052a5000
71000fc890  ldr x8,[x8, #0x238]
71000fc894  mov w9,#0x4
71000fc898  strb w9,[x19, #0x130]
71000fc89c  adrp x9,0x7104290000
71000fc8a0  add x9,x9,#0xd05
71000fc8a4  str x9,[x19, #0x40]
71000fc8a8  stp x8,xzr,[x19, #0x30]
71000fc8ac  mov w20,#0x5
71000fc8b0  b 0x71000fc948
71000fc8b4  mov w8,#0x1
71000fc8b8  orr w9,wzr,#0x3
71000fc8bc  mov w10,#0xa471
71000fc8c0  b 0x71000fc8e0
71000fc8c4  mov w8,#0x1
71000fc8c8  orr w9,wzr,#0x3
71000fc8cc  mov w10,#0xc420
71000fc8d0  b 0x71000fc8e0
71000fc8d4  mov w8,#0x1
71000fc8d8  orr w9,wzr,#0x3
71000fc8dc  mov w10,#0xc421
71000fc8e0  strb w8,[x19, #0xfa]
71000fc8e4  add x8,sp,#0x10
71000fc8e8  orr x20,x8,#0x4
71000fc8ec  mov x0,x20
71000fc8f0  strb w9,[x19, #0x130]
71000fc8f4  str w10,[sp, #0x10]
71000fc8f8  bl 0x71039c0a80
71000fc8fc  mov x1,sp
71000fc900  mov x0,x20
71000fc904  str wzr,[sp]
71000fc908  bl 0x71039c0a90
71000fc90c  add x0,x19,#0x220
71000fc910  add x1,sp,#0x10
71000fc914  bl 0x71000bcf30
71000fc918  ldr x8,[x22]
71000fc91c  ldr x0,[x8, #0x8]
71000fc920  ldr x8,[x0]
71000fc924  ldr x8,[x8, #0x28]
71000fc928  blr x8
71000fc92c  adrp x8,0x71052a5000
71000fc930  ldr x8,[x8, #0x240]
71000fc934  mov x20,xzr
71000fc938  stp x8,xzr,[x19, #0x30]
71000fc93c  adrp x8,0x71043ac000
71000fc940  add x8,x8,#0x982
71000fc944  str x8,[x19, #0x40]
71000fc948  mov x0,x20
71000fc94c  ldp x29,x30,[sp, #0x50]
71000fc950  ldp x20,x19,[sp, #0x40]
71000fc954  ldr x23,[sp, #0x20]
71000fc958  ldp x22,x21,[sp, #0x30]
71000fc95c  add sp,sp,#0x60
71000fc960  ret
71000fc964  ldrb w8,[x19, #0xfb]
71000fc968  cbz w8,0x71000fc988
71000fc96c  add x1,x19,#0x100
71000fc970  add x0,x19,#0x220
71000fc974  bl 0x71000bcf30
71000fc978  adrp x8,0x71052a5000
71000fc97c  ldr x8,[x8, #0x238]
71000fc980  orr w9,wzr,#0x6
71000fc984  b 0x71000fc898
71000fc988  ldr x21,[x22]
71000fc98c  ldr x0,[x21, #0xb8]
71000fc990  ldr x1,[x19, #0xa0]
71000fc994  bl 0x7100150680
71000fc998  tbz w0,#0x0,0x71000fca30
71000fc99c  ldr x0,[x21, #0xc8]
71000fc9a0  ldr w1,[x19, #0x90]
71000fc9a4  add x8,sp,#0x10
71000fc9a8  ldr x2,[x19, #0xa0]
71000fc9ac  mov w4,#0x1
71000fc9b0  ldr w3,[x19, #0xf0]
71000fc9b4  bl 0x710014e050
71000fc9b8  mov w8,#0x4c0d
71000fc9bc  str w8,[sp]
71000fc9c0  mov x8,sp
71000fc9c4  orr x20,x8,#0x4
71000fc9c8  mov x0,x20
71000fc9cc  bl 0x71039c0a80
71000fc9d0  add x1,sp,#0x28
71000fc9d4  mov x0,x20
71000fc9d8  str wzr,[sp, #0x28]
71000fc9dc  bl 0x71039c0a90
71000fc9e0  ldr w8,[sp, #0x10]
71000fc9e4  ldr w9,[sp]
71000fc9e8  mov w20,#0x5
71000fc9ec  cmp w8,w9
71000fc9f0  b.eq 0x71000fc948
71000fc9f4  cbz w8,0x71000fcbb0
71000fc9f8  mov w8,#0x6c57
71000fc9fc  strb w20,[x19, #0x130]
71000fca00  str w8,[sp]
71000fca04  mov x8,sp
71000fca08  orr x21,x8,#0x4
71000fca0c  mov x0,x21
71000fca10  bl 0x71039c0a80
71000fca14  add x1,sp,#0x28
71000fca18  mov x0,x21
71000fca1c  str wzr,[sp, #0x28]
71000fca20  bl 0x71039c0a90
71000fca24  add x0,x19,#0x220
71000fca28  mov x1,sp
71000fca2c  b 0x71000fcb1c
71000fca30  mov x0,x21
71000fca34  bl 0x7100146ed0
71000fca38  tbz w0,#0x0,0x71000fcae4
71000fca3c  ldr x0,[x20]
71000fca40  add x8,sp,#0x10
71000fca44  add x23,sp,#0x10
71000fca48  bl 0x7100192e90
71000fca4c  mov w8,#0x6c50
71000fca50  str w8,[sp]
71000fca54  mov x8,sp
71000fca58  orr x20,x8,#0x4
71000fca5c  mov x0,x20
71000fca60  bl 0x71039c0a80
71000fca64  add x1,sp,#0x28
71000fca68  mov x0,x20
71000fca6c  str wzr,[sp, #0x28]
71000fca70  bl 0x71039c0a90
71000fca74  ldr w8,[sp, #0x10]
71000fca78  ldr w9,[sp]
71000fca7c  cmp w8,w9
71000fca80  b.ne 0x71000fcb54
71000fca84  mov w8,#0x4
71000fca88  orr x20,x23,#0x4
71000fca8c  strb w8,[x19, #0x130]
71000fca90  mov w8,#0x6c59
71000fca94  mov x0,x20
71000fca98  str w8,[sp, #0x10]
71000fca9c  bl 0x71039c0a80
71000fcaa0  mov x1,sp
71000fcaa4  mov x0,x20
71000fcaa8  str wzr,[sp]
71000fcaac  bl 0x71039c0a90
71000fcab0  add x0,x19,#0x220
71000fcab4  add x1,sp,#0x10
71000fcab8  bl 0x71000bcf30
71000fcabc  ldr x8,[x22]
71000fcac0  ldrb w9,[x8, #0x162]
71000fcac4  cmp w9,#0x0
71000fcac8  cset w9,eq
71000fcacc  add x8,x8,w9, UXTW  #0x3
71000fcad0  ldr x0,[x8, #0x168]
71000fcad4  bl 0x71000d8f90
71000fcad8  adrp x8,0x71052a5000
71000fcadc  ldr x8,[x8, #0x238]
71000fcae0  b 0x71000fc89c
71000fcae4  mov w20,#0x5
71000fcae8  mov w8,#0x6c59
71000fcaec  strb w20,[x19, #0x130]
71000fcaf0  str w8,[sp, #0x10]
71000fcaf4  add x8,sp,#0x10
71000fcaf8  orr x21,x8,#0x4
71000fcafc  mov x0,x21
71000fcb00  bl 0x71039c0a80
71000fcb04  mov x1,sp
71000fcb08  mov x0,x21
71000fcb0c  str wzr,[sp]
71000fcb10  bl 0x71039c0a90
71000fcb14  add x0,x19,#0x220
71000fcb18  add x1,sp,#0x10
71000fcb1c  bl 0x71000bcf30
71000fcb20  ldr x8,[x22]
71000fcb24  ldrb w9,[x8, #0x162]
71000fcb28  cmp w9,#0x0
71000fcb2c  cset w9,eq
71000fcb30  add x8,x8,w9, UXTW  #0x3
71000fcb34  ldr x0,[x8, #0x168]
71000fcb38  bl 0x71000d8f90
71000fcb3c  adrp x8,0x71052a5000
71000fcb40  ldr x8,[x8, #0x238]
71000fcb44  stp x8,xzr,[x19, #0x30]
71000fcb48  adrp x8,0x7104290000
71000fcb4c  add x8,x8,#0xd05
71000fcb50  b 0x71000fc944
71000fcb54  ldrb w8,[x19, #0x234]
71000fcb58  cbz w8,0x71000fcc10
71000fcb5c  strb wzr,[x19, #0x234]
71000fcb60  ldr x8,[x19, #0x238]
71000fcb64  ldr x9,[x21, #0xf0]
71000fcb68  cmp x8,x9
71000fcb6c  b.ne 0x71000fcc18
71000fcb70  mov x0,x19
71000fcb74  bl 0x71000f9670
71000fcb78  ldrb w8,[x21, #0x162]
71000fcb7c  cmp w8,#0x0
71000fcb80  cset w8,eq
71000fcb84  add x8,x21,w8, UXTW  #0x2
71000fcb88  adrp x9,0x71052a5000
71000fcb8c  ldr x9,[x9, #0x330]
71000fcb90  ldr w8,[x8, #0x180]
71000fcb94  str w8,[x19, #0xf0]
71000fcb98  adrp x8,0x71043ef000
71000fcb9c  add x8,x8,#0xad3
71000fcba0  stp x9,xzr,[x19, #0x30]
71000fcba4  str x8,[x19, #0x40]
71000fcba8  mov w20,#0x5
71000fcbac  b 0x71000fc948
71000fcbb0  ldr x0,[x21, #0xb8]
71000fcbb4  ldr x1,[x21, #0xf0]
71000fcbb8  mov w2,#0x1
71000fcbbc  mov w23,#0x1
71000fcbc0  bl 0x7100150440
71000fcbc4  ldr x0,[x21, #0xb8]
71000fcbc8  ldr x1,[x19, #0xa0]
71000fcbcc  mov w2,#0x1
71000fcbd0  bl 0x7100150440
71000fcbd4  ldr x8,[x22]
71000fcbd8  strb w23,[x8, #0x15c]
71000fcbdc  adrp x8,0x71052a5000
71000fcbe0  ldr x8,[x8, #0x2d0]
71000fcbe4  mov w9,#0xa
71000fcbe8  mov x20,xzr
71000fcbec  str w9,[x19, #0x98]
71000fcbf0  adrp x9,0x7104339000
71000fcbf4  add x9,x9,#0x430
71000fcbf8  stp x8,xzr,[x19, #0x30]
71000fcbfc  orr w8,wzr,#0xc
71000fcc00  strb wzr,[x19, #0xf7]
71000fcc04  str x9,[x19, #0x40]
71000fcc08  str w8,[x19, #0x230]
71000fcc0c  b 0x71000fc948
71000fcc10  mov w20,#0x5
71000fcc14  b 0x71000fc948
71000fcc18  str x8,[x19, #0xa0]
71000fcc1c  str wzr,[x19, #0xf0]
71000fcc20  ldr x0,[x22]
71000fcc24  mov w1,wzr
71000fcc28  bl 0x7100149290
71000fcc2c  adrp x9,0x71052a5000
71000fcc30  ldr x9,[x9, #0x2d8]
71000fcc34  orr w8,wzr,#0x3
71000fcc38  str w8,[x19, #0x98]
71000fcc3c  adrp x8,0x71043ce000
71000fcc40  add x8,x8,#0x653
71000fcc44  stp xzr,x8,[x19, #0x38]
71000fcc48  mov w8,#0x9
71000fcc4c  str w8,[x19, #0x230]
71000fcc50  mov w20,#0x5
71000fcc54  str x9,[x19, #0x30]
71000fcc58  b 0x71000fc948
