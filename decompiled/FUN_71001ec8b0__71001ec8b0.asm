// addr:      71001ec8b0
// offset:    0x1ec8b0
// name:      FUN_71001ec8b0
// mangled:   
// size:      1324

71001ec8b0  sub sp,sp,#0x170
71001ec8b4  stp x28,x27,[sp, #0x110]
71001ec8b8  stp x26,x25,[sp, #0x120]
71001ec8bc  stp x24,x23,[sp, #0x130]
71001ec8c0  stp x22,x21,[sp, #0x140]
71001ec8c4  stp x20,x19,[sp, #0x150]
71001ec8c8  stp x29,x30,[sp, #0x160]
71001ec8cc  add x29,sp,#0x160
71001ec8d0  adrp x25,0x71052a4000
71001ec8d4  ldr x25,[x25, #0xda8]
71001ec8d8  adrp x9,0x71052a4000
71001ec8dc  ldrb w8,[x25]
71001ec8e0  ldr x9,[x9, #0xdb0]
71001ec8e4  mov x19,x0
71001ec8e8  add x20,x9,#0x18
71001ec8ec  cbz w8,0x71001ec930
71001ec8f0  adrp x8,0x71052a4000
71001ec8f4  ldr x8,[x8, #0xdb8]
71001ec8f8  ldr x0,[x8]
71001ec8fc  bl 0x7101717960
71001ec900  ldr w8,[x0]
71001ec904  cbz w8,0x71001ec930
71001ec908  adrp x9,0x71052a4000
71001ec90c  ldr x9,[x9, #0xdb0]
71001ec910  ldr x10,[x9, #0xa0]
71001ec914  ldp x9,x10,[x10]
71001ec918  sub x10,x10,x9
71001ec91c  asr x10,x10,#0x3
71001ec920  cmp x10,x8
71001ec924  b.ls 0x71001ecdc4
71001ec928  ldr x8,[x9, x8, LSL #0x3]
71001ec92c  add x20,x8,#0x10
71001ec930  ldr x8,[x20]
71001ec934  ldr x8,[x8, #0x10]
71001ec938  ldr x8,[x8, #0xe8]
71001ec93c  ldr x8,[x8, #0x1e0]
71001ec940  adrp x23,0x71052a4000
71001ec944  mov x2,#-0x1
71001ec948  ldr x8,[x8]
71001ec94c  ldr x23,[x23, #0xd80]
71001ec950  ldr x1,[x8, #0x8]
71001ec954  add x8,x23,#0x10
71001ec958  str x8,[sp, #0x40]
71001ec95c  add x8,sp,#0x40
71001ec960  add x8,x8,#0x8
71001ec964  str x8,[sp, #0x58]
71001ec968  mov w8,#0x10
71001ec96c  add x0,sp,#0x40
71001ec970  strb wzr,[sp, #0x48]
71001ec974  str x8,[sp, #0x60]
71001ec978  bl 0x71001b47e0
71001ec97c  adrp x8,0x71052a6000
71001ec980  ldr x8,[x8, #0xe70]
71001ec984  str xzr,[sp, #0xf8]
71001ec988  stp xzr,xzr,[sp, #0xb8]
71001ec98c  add x8,x8,#0x10
71001ec990  stp xzr,xzr,[sp, #0xd0]
71001ec994  str x8,[sp, #0x98]
71001ec998  add x8,sp,#0x98
71001ec99c  add x9,x8,#0x20
71001ec9a0  str x9,[sp, #0xb0]
71001ec9a4  add x9,x8,#0x38
71001ec9a8  add x8,x8,#0x50
71001ec9ac  str x8,[sp, #0xe0]
71001ec9b0  mov w8,#0x100
71001ec9b4  mov w0,#0x90
71001ec9b8  str x9,[sp, #0xc8]
71001ec9bc  stp xzr,xzr,[sp, #0xe8]
71001ec9c0  strb wzr,[sp, #0x102]
71001ec9c4  strh w8,[sp, #0x100]
71001ec9c8  bl 0x71001af850
71001ec9cc  mov x20,x0
71001ec9d0  cbz x0,0x71001ec9dc
71001ec9d4  mov x0,x20
71001ec9d8  bl 0x71001beb40
71001ec9dc  str x20,[sp, #0xa0]
71001ec9e0  ldr x20,[sp, #0x58]
71001ec9e4  ldr x8,[sp, #0xf8]
71001ec9e8  cbz x8,0x71001ec9fc
71001ec9ec  sub x0,x8,#0x4
71001ec9f0  bl 0x71001b1870
71001ec9f4  str xzr,[sp, #0xf8]
71001ec9f8  strb wzr,[sp, #0x101]
71001ec9fc  cbz x20,0x71001eca40
71001eca00  mov x0,x20
71001eca04  bl 0x71039c0070
71001eca08  mov x21,x0
71001eca0c  add x22,x0,#0x1
71001eca10  add x0,x0,#0x5
71001eca14  bl 0x71001b1820
71001eca18  str w22,[x0], #0x4
71001eca1c  mov x1,x20
71001eca20  mov x2,x22
71001eca24  str x0,[sp, #0xf8]
71001eca28  bl 0x71039c0350
71001eca2c  ldr x8,[sp, #0xf8]
71001eca30  strb wzr,[x8, x21, LSL ]
71001eca34  mov w8,#0x100
71001eca38  strh w8,[sp, #0x100]
71001eca3c  strb wzr,[sp, #0x102]
71001eca40  add x8,x23,#0x10
71001eca44  add x0,sp,#0x40
71001eca48  str x8,[sp, #0x40]
71001eca4c  bl 0x71001b4910
71001eca50  adrp x8,0x71052a6000
71001eca54  ldr x8,[x8, #0xff0]
71001eca58  ldrh w20,[x8]
71001eca5c  ldrb w8,[sp, #0x100]
71001eca60  cbnz w8,0x71001eca6c
71001eca64  add x0,sp,#0x98
71001eca68  bl 0x71001f2180
71001eca6c  ldr x0,[sp, #0xa0]
71001eca70  mov w1,w20
71001eca74  bl 0x71001bee30
71001eca78  ldrb w8,[sp, #0x100]
71001eca7c  strb wzr,[sp, #0x101]
71001eca80  cbnz w8,0x71001eca8c
71001eca84  add x0,sp,#0x98
71001eca88  bl 0x71001f2180
71001eca8c  orr w8,wzr,#0x3
71001eca90  orr w0,wzr,#0x38
71001eca94  strb wzr,[sp, #0x101]
71001eca98  str w8,[sp, #0xa8]
71001eca9c  bl 0x71001af850
71001ecaa0  mov x20,x0
71001ecaa4  cbz x0,0x71001ecaec
71001ecaa8  adrp x8,0x71052a6000
71001ecaac  ldr x8,[x8, #0x970]
71001ecab0  adrp x9,0x71052a6000
71001ecab4  ldr x9,[x9, #0xb80]
71001ecab8  add x8,x8,#0x10
71001ecabc  str x8,[x20]
71001ecac0  add x8,x20,#0x8
71001ecac4  mov w10,#0x1
71001ecac8  stlr w10,[x8]
71001ecacc  add x8,x9,#0x10
71001ecad0  strb wzr,[x20, #0xc]
71001ecad4  str x8,[x20]
71001ecad8  bl 0x71001cf750
71001ecadc  mov x1,x0
71001ecae0  mov x0,x20
71001ecae4  mov w2,wzr
71001ecae8  bl 0x71001cf760
71001ecaec  add x0,sp,#0x78
71001ecaf0  bl 0x71001d0120
71001ecaf4  add x8,sp,#0x18
71001ecaf8  add x8,x8,#0x8
71001ecafc  mov x21,#-0x1
71001ecb00  add x22,x23,#0x10
71001ecb04  str x22,[sp, #0x18]
71001ecb08  str x8,[sp, #0x30]
71001ecb0c  mov w8,#0x10
71001ecb10  adrp x1,0x710438b000
71001ecb14  add x1,x1,#0xf2b
71001ecb18  add x0,sp,#0x18
71001ecb1c  mov x2,x21
71001ecb20  strb wzr,[sp, #0x20]
71001ecb24  str x8,[sp, #0x38]
71001ecb28  bl 0x71001b47e0
71001ecb2c  add x0,sp,#0x40
71001ecb30  add x1,sp,#0x18
71001ecb34  bl 0x71001cfa20
71001ecb38  add x0,sp,#0x78
71001ecb3c  add x1,sp,#0x40
71001ecb40  bl 0x71001d05f0
71001ecb44  add x0,sp,#0x40
71001ecb48  bl 0x71001cfad0
71001ecb4c  add x0,sp,#0x18
71001ecb50  str x22,[sp, #0x18]
71001ecb54  bl 0x71001b4910
71001ecb58  ldr x1,[sp, #0x88]
71001ecb5c  ldr x2,[x1, #0x18]
71001ecb60  mov x0,x20
71001ecb64  mov x3,x21
71001ecb68  bl 0x71001cb870
71001ecb6c  adrp x27,0x71052a6000
71001ecb70  ldr x27,[x27, #0xfe0]
71001ecb74  ldr w8,[x27]
71001ecb78  cbz w8,0x71001ecc8c
71001ecb7c  adrp x21,0x71052a6000
71001ecb80  adrp x22,0x71052a4000
71001ecb84  ldr x21,[x21, #0xe18]
71001ecb88  ldr x22,[x22, #0xdb8]
71001ecb8c  mov w28,wzr
71001ecb90  mov w24,#0x2e8
71001ecb94  adrp x9,0x71052a4000
71001ecb98  ldrb w8,[x25]
71001ecb9c  ldr x9,[x9, #0xdb0]
71001ecba0  add x23,x9,#0x18
71001ecba4  cbz w8,0x71001ecbe0
71001ecba8  ldr x0,[x22]
71001ecbac  bl 0x7101717960
71001ecbb0  ldr w8,[x0]
71001ecbb4  cbz w8,0x71001ecbe0
71001ecbb8  adrp x9,0x71052a4000
71001ecbbc  ldr x9,[x9, #0xdb0]
71001ecbc0  ldr x10,[x9, #0xa0]
71001ecbc4  ldp x9,x10,[x10]
71001ecbc8  sub x10,x10,x9
71001ecbcc  asr x10,x10,#0x3
71001ecbd0  cmp x10,x8
71001ecbd4  b.ls 0x71001ecc28
71001ecbd8  ldr x8,[x9, x8, LSL #0x3]
71001ecbdc  add x23,x8,#0x10
71001ecbe0  ldr x8,[x23]
71001ecbe4  cbz x8,0x71001ecc40
71001ecbe8  ldr x8,[x8, #0x10]
71001ecbec  cbz x8,0x71001ecc40
71001ecbf0  ldr x23,[x8, #0xe8]
71001ecbf4  ldr x8,[x19, #0x20]
71001ecbf8  ldr w26,[x8, #0x8]
71001ecbfc  ldrb w8,[x25]
71001ecc00  cbz w8,0x71001ecc54
71001ecc04  ldr x0,[x22]
71001ecc08  bl 0x7101717960
71001ecc0c  ldr w8,[x0]
71001ecc10  cbz w8,0x71001ecc54
71001ecc14  madd x9,x26,x24,x21
71001ecc18  ldr x9,[x9, #0x10]
71001ecc1c  mov w10,#0x168
71001ecc20  madd x8,x8,x10,x9
71001ecc24  b 0x71001ecc5c
71001ecc28  orr w2,wzr,#0xe0000003
71001ecc2c  adrp x0,0x71042c4000
71001ecc30  add x0,x0,#0x35f
71001ecc34  mov w1,#0x47
71001ecc38  mov w3,wzr
71001ecc3c  bl 0x71001b1300
71001ecc40  mov x23,xzr
71001ecc44  ldr x8,[x19, #0x20]
71001ecc48  ldr w26,[x8, #0x8]
71001ecc4c  ldrb w8,[x25]
71001ecc50  cbnz w8,0x71001ecc04
71001ecc54  madd x8,x26,x24,x21
71001ecc58  add x8,x8,#0x18
71001ecc5c  ldr w1,[x8, #0x140]
71001ecc60  ldr x8,[x23]
71001ecc64  add x2,sp,#0x98
71001ecc68  mov x0,x23
71001ecc6c  ldr x9,[x8, #0x98]
71001ecc70  mov x8,sp
71001ecc74  mov x3,x20
71001ecc78  blr x9
71001ecc7c  ldr w8,[x27]
71001ecc80  add w28,w28,#0x1
71001ecc84  cmp w28,w8
71001ecc88  b.cc 0x71001ecb94
71001ecc8c  add x8,x20,#0x8
71001ecc90  ldar w11,[x8]
71001ecc94  ldaxr w10,[x8]
71001ecc98  sub w9,w11,#0x1
71001ecc9c  cmp w10,w11
71001ecca0  b.ne 0x71001eccc0
71001ecca4  stlxr w11,w9,[x8]
71001ecca8  adrp x19,0x71052a6000
71001eccac  ldr x19,[x19, #0xe70]
71001eccb0  cbnz w11,0x71001ecccc
71001eccb4  mov w11,#0x1
71001eccb8  tbz w11,#0x0,0x71001eccd4
71001eccbc  b 0x71001ecd1c
71001eccc0  clrex 
71001eccc4  adrp x19,0x71052a6000
71001eccc8  ldr x19,[x19, #0xe70]
71001ecccc  mov w11,wzr
71001eccd0  tbnz w11,#0x0,0x71001ecd1c
71001eccd4  ldaxr w11,[x8]
71001eccd8  sub w9,w10,#0x1
71001eccdc  cmp w11,w10
71001ecce0  b.ne 0x71001eccfc
71001ecce4  stlxr w10,w9,[x8]
71001ecce8  cbz w10,0x71001ecd10
71001eccec  mov w12,wzr
71001eccf0  mov w10,w11
71001eccf4  cbz w12,0x71001eccd4
71001eccf8  b 0x71001ecd1c
71001eccfc  clrex 
71001ecd00  mov w12,wzr
71001ecd04  mov w10,w11
71001ecd08  cbz w12,0x71001eccd4
71001ecd0c  b 0x71001ecd1c
71001ecd10  mov w12,#0x1
71001ecd14  mov w10,w11
71001ecd18  cbz w12,0x71001eccd4
71001ecd1c  cbnz w9,0x71001ecd40
71001ecd20  ldrb w8,[x20, #0xc]
71001ecd24  cbnz w8,0x71001ecd40
71001ecd28  mov w8,#0x1
71001ecd2c  strb w8,[x20, #0xc]
71001ecd30  ldr x8,[x20]
71001ecd34  ldr x8,[x8, #0x8]
71001ecd38  mov x0,x20
71001ecd3c  blr x8
71001ecd40  add x0,sp,#0x78
71001ecd44  bl 0x71001d0250
71001ecd48  add x8,x19,#0x10
71001ecd4c  str x8,[sp, #0x98]
71001ecd50  ldr x8,[sp, #0xf8]
71001ecd54  cbz x8,0x71001ecd68
71001ecd58  sub x0,x8,#0x4
71001ecd5c  bl 0x71001b1870
71001ecd60  str xzr,[sp, #0xf8]
71001ecd64  strb wzr,[sp, #0x101]
71001ecd68  ldr x0,[sp, #0xa0]
71001ecd6c  cbz x0,0x71001ecd7c
71001ecd70  ldr x8,[x0]
71001ecd74  ldr x8,[x8, #0x8]
71001ecd78  blr x8
71001ecd7c  ldr x1,[sp, #0xe8]
71001ecd80  add x19,sp,#0x98
71001ecd84  add x0,x19,#0x48
71001ecd88  bl 0x7101711670
71001ecd8c  ldr x1,[sp, #0xd0]
71001ecd90  add x0,x19,#0x30
71001ecd94  bl 0x7101711670
71001ecd98  ldr x1,[sp, #0xb8]
71001ecd9c  add x0,x19,#0x18
71001ecda0  bl 0x7100219ca0
71001ecda4  ldp x29,x30,[sp, #0x160]
71001ecda8  ldp x20,x19,[sp, #0x150]
71001ecdac  ldp x22,x21,[sp, #0x140]
71001ecdb0  ldp x24,x23,[sp, #0x130]
71001ecdb4  ldp x26,x25,[sp, #0x120]
71001ecdb8  ldp x28,x27,[sp, #0x110]
71001ecdbc  add sp,sp,#0x170
71001ecdc0  ret
71001ecdc4  adrp x0,0x71042c4000
71001ecdc8  add x0,x0,#0x35f
71001ecdcc  mov w1,#0x47
71001ecdd0  orr w2,wzr,#0xe0000003
71001ecdd4  mov w3,wzr
71001ecdd8  bl 0x71001b1300
