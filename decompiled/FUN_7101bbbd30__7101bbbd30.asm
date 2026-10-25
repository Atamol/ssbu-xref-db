// addr:      7101bbbd30
// offset:    0x1bbbd30
// name:      FUN_7101bbbd30
// mangled:   
// size:      588

7101bbbd30  str x28,[sp, #-0x50]!
7101bbbd34  stp x24,x23,[sp, #0x10]
7101bbbd38  stp x22,x21,[sp, #0x20]
7101bbbd3c  stp x20,x19,[sp, #0x30]
7101bbbd40  stp x29,x30,[sp, #0x40]
7101bbbd44  add x29,sp,#0x40
7101bbbd48  sub sp,sp,#0x1, LSL #12
7101bbbd4c  sub w8,w1,#0x2
7101bbbd50  mov x21,x2
7101bbbd54  cmp w8,#0x4
7101bbbd58  b.hi 0x7101bbbd98
7101bbbd5c  adrp x9,0x71044f8000
7101bbbd60  add x9,x9,#0xa24
7101bbbd64  mov x22,x0
7101bbbd68  ldrsw x8,[x9, x8, LSL #0x2]
7101bbbd6c  add x8,x8,x9
7101bbbd70  add x19,x0,#0x338
7101bbbd74  br x8
7101bbbd78  ldr w8,[x22, #0x30]
7101bbbd7c  sub w9,w8,#0x3
7101bbbd80  cmp w9,#0x3
7101bbbd84  b.hi 0x7101bbbe34
7101bbbd88  adrp x10,0x7104468000
7101bbbd8c  add x10,x10,#0x1a0
7101bbbd90  ldr w20,[x10, w9, SXTW #0x2]
7101bbbd94  b 0x7101bbbe38
7101bbbd98  adrp x1,0x7104308000
7101bbbd9c  add x1,x1,#0x315
7101bbbda0  mov x0,x21
7101bbbda4  b 0x7101bbbe18
7101bbbda8  adrp x1,0x7104280000
7101bbbdac  add x1,x1,#0x81a
7101bbbdb0  mov x0,x21
7101bbbdb4  bl 0x710377a120
7101bbbdb8  adrp x1,0x710425f000
7101bbbdbc  add x1,x1,#0x1c0
7101bbbdc0  b 0x7101bbbe14
7101bbbdc4  adrp x1,0x71042f8000
7101bbbdc8  add x1,x1,#0x105
7101bbbdcc  mov x0,x21
7101bbbdd0  bl 0x710377a120
7101bbbdd4  adrp x1,0x710424f000
7101bbbdd8  add x1,x1,#0x308
7101bbbddc  b 0x7101bbbe14
7101bbbde0  adrp x1,0x71043cf000
7101bbbde4  add x1,x1,#0x299
7101bbbde8  mov x0,x21
7101bbbdec  bl 0x710377a120
7101bbbdf0  adrp x1,0x71043be000
7101bbbdf4  add x1,x1,#0x474
7101bbbdf8  b 0x7101bbbe14
7101bbbdfc  adrp x1,0x7104308000
7101bbbe00  add x1,x1,#0x329
7101bbbe04  mov x0,x21
7101bbbe08  bl 0x710377a120
7101bbbe0c  adrp x1,0x7104401000
7101bbbe10  add x1,x1,#0x2ac
7101bbbe14  mov x0,x19
7101bbbe18  add sp,sp,#0x1, LSL #12
7101bbbe1c  ldp x29,x30,[sp, #0x40]
7101bbbe20  ldp x20,x19,[sp, #0x30]
7101bbbe24  ldp x22,x21,[sp, #0x20]
7101bbbe28  ldp x24,x23,[sp, #0x10]
7101bbbe2c  ldr x28,[sp], #0x50
7101bbbe30  b 0x710377a120
7101bbbe34  orr w20,wzr,#0xc
7101bbbe38  ldr x9,[x21, #0x8]
7101bbbe3c  ldr x23,[x9, #0x10]
7101bbbe40  cbz x23,0x7101bbbeb4
7101bbbe44  ldr x1,[x23, #0xe0]
7101bbbe48  str w8,[x23, #0x25c]
7101bbbe4c  cbz x1,0x7101bbbeb4
7101bbbe50  ldrb w8,[x1]
7101bbbe54  cmp w8,#0x23
7101bbbe58  b.eq 0x7101bbbeb4
7101bbbe5c  cmp w8,#0x40
7101bbbe60  b.eq 0x7101bbbeb4
7101bbbe64  adrp x8,0x710593b000
7101bbbe68  ldr x8,[x8, #0xc60]
7101bbbe6c  ldr x0,[x8]
7101bbbe70  bl 0x71037a4450
7101bbbe74  ldr w8,[x23, #0x25c]
7101bbbe78  mov x24,x0
7101bbbe7c  mov x0,sp
7101bbbe80  mov w2,#0x1000
7101bbbe84  mov w1,wzr
7101bbbe88  stur w8,[x29, #-0x38]
7101bbbe8c  bl 0x71039c02a0
7101bbbe90  mov x0,sp
7101bbbe94  sub x2,x29,#0x38
7101bbbe98  mov x1,x24
7101bbbe9c  bl 0x71037ae170
7101bbbea0  mov w2,w0
7101bbbea4  mov x1,sp
7101bbbea8  mov x0,x23
7101bbbeac  mov w3,wzr
7101bbbeb0  bl 0x71037a2270
7101bbbeb4  adrp x1,0x71042b4000
7101bbbeb8  add x1,x1,#0x16e
7101bbbebc  mov w2,#0x1
7101bbbec0  mov x0,x21
7101bbbec4  mov w3,w20
7101bbbec8  bl 0x710377a280
7101bbbecc  ldr x8,[x22, #0x340]
7101bbbed0  ldr x21,[x8, #0x10]
7101bbbed4  cbz x21,0x7101bbbf4c
7101bbbed8  ldr w8,[x22, #0x30]
7101bbbedc  ldr x1,[x21, #0xe0]
7101bbbee0  str w8,[x21, #0x25c]
7101bbbee4  cbz x1,0x7101bbbf4c
7101bbbee8  ldrb w8,[x1]
7101bbbeec  cmp w8,#0x23
7101bbbef0  b.eq 0x7101bbbf4c
7101bbbef4  cmp w8,#0x40
7101bbbef8  b.eq 0x7101bbbf4c
7101bbbefc  adrp x8,0x710593b000
7101bbbf00  ldr x8,[x8, #0xc60]
7101bbbf04  ldr x0,[x8]
7101bbbf08  bl 0x71037a4450
7101bbbf0c  ldr w8,[x21, #0x25c]
7101bbbf10  mov x22,x0
7101bbbf14  mov x0,sp
7101bbbf18  mov w2,#0x1000
7101bbbf1c  mov w1,wzr
7101bbbf20  stur w8,[x29, #-0x38]
7101bbbf24  bl 0x71039c02a0
7101bbbf28  mov x0,sp
7101bbbf2c  sub x2,x29,#0x38
7101bbbf30  mov x1,x22
7101bbbf34  bl 0x71037ae170
7101bbbf38  mov w2,w0
7101bbbf3c  mov x1,sp
7101bbbf40  mov x0,x21
7101bbbf44  mov w3,wzr
7101bbbf48  bl 0x71037a2270
7101bbbf4c  adrp x1,0x7104432000
7101bbbf50  add x1,x1,#0xe86
7101bbbf54  mov w2,#0x1
7101bbbf58  mov x0,x19
7101bbbf5c  mov w3,w20
7101bbbf60  add sp,sp,#0x1, LSL #12
7101bbbf64  ldp x29,x30,[sp, #0x40]
7101bbbf68  ldp x20,x19,[sp, #0x30]
7101bbbf6c  ldp x22,x21,[sp, #0x20]
7101bbbf70  ldp x24,x23,[sp, #0x10]
7101bbbf74  ldr x28,[sp], #0x50
7101bbbf78  b 0x710377a280
