// addr:      7101dfc8c0
// offset:    0x1dfc8c0
// name:      FUN_7101dfc8c0
// mangled:   
// size:      6976

7101dfc8c0  sub sp,sp,#0x100
7101dfc8c4  str d8,[sp, #0x90]
7101dfc8c8  stp x28,x27,[sp, #0xa0]
7101dfc8cc  stp x26,x25,[sp, #0xb0]
7101dfc8d0  stp x24,x23,[sp, #0xc0]
7101dfc8d4  stp x22,x21,[sp, #0xd0]
7101dfc8d8  stp x20,x19,[sp, #0xe0]
7101dfc8dc  stp x29,x30,[sp, #0xf0]
7101dfc8e0  add x29,sp,#0xf0
7101dfc8e4  ldr w8,[x0, #0x2ac]
7101dfc8e8  mov x19,x2
7101dfc8ec  mov w21,w1
7101dfc8f0  mov x20,x0
7101dfc8f4  cmp w8,#0xe
7101dfc8f8  b.ne 0x7101dfc984
7101dfc8fc  adrp x1,0x71042d6000
7101dfc900  add x1,x1,#0x9cf
7101dfc904  add x8,sp,#0x38
7101dfc908  mov x0,x19
7101dfc90c  add x22,sp,#0x38
7101dfc910  bl 0x7103776640
7101dfc914  cmp x22,x19
7101dfc918  b.eq 0x7101dfc950
7101dfc91c  ldr x8,[sp, #0x40]
7101dfc920  str xzr,[sp, #0x40]
7101dfc924  ldr x22,[x19, #0x8]
7101dfc928  str x8,[x19, #0x8]
7101dfc92c  cbz x22,0x7101dfc950
7101dfc930  ldr x0,[x22, #0x18]
7101dfc934  adrp x8,0x710523d000
7101dfc938  add x8,x8,#0x9a8
7101dfc93c  stp x8,xzr,[x22, #0x10]
7101dfc940  cbz x0,0x7101dfc948
7101dfc944  bl 0x710392eb40
7101dfc948  mov x0,x22
7101dfc94c  bl 0x710392eb40
7101dfc950  ldr x22,[sp, #0x40]
7101dfc954  adrp x8,0x710523d000
7101dfc958  add x8,x8,#0x988
7101dfc95c  stp x8,xzr,[sp, #0x38]
7101dfc960  cbz x22,0x7101dfc984
7101dfc964  ldr x0,[x22, #0x18]
7101dfc968  adrp x8,0x710523d000
7101dfc96c  add x8,x8,#0x9a8
7101dfc970  stp x8,xzr,[x22, #0x10]
7101dfc974  cbz x0,0x7101dfc97c
7101dfc978  bl 0x710392eb40
7101dfc97c  mov x0,x22
7101dfc980  bl 0x710392eb40
7101dfc984  mov w0,#0x10
7101dfc988  mov w1,#0x8
7101dfc98c  bl 0x710392e290
7101dfc990  mov x22,x0
7101dfc994  cbnz x0,0x7101dfc9e0
7101dfc998  adrp x8,0x7105332000
7101dfc99c  ldr x0,[x8, #0xf00]
7101dfc9a0  cbz x0,0x7101dfc9dc
7101dfc9a4  mov w8,#0x8
7101dfc9a8  stur wzr,[x29, #-0x70]
7101dfc9ac  sub x1,x29,#0x70
7101dfc9b0  str x8,[sp, #0x38]
7101dfc9b4  ldr x8,[x0]
7101dfc9b8  ldr x8,[x8, #0x30]
7101dfc9bc  add x2,sp,#0x38
7101dfc9c0  blr x8
7101dfc9c4  tbz w0,#0x0,0x7101dfc9dc
7101dfc9c8  mov w0,#0x10
7101dfc9cc  mov w1,#0x8
7101dfc9d0  bl 0x710392e290
7101dfc9d4  mov x22,x0
7101dfc9d8  cbnz x0,0x7101dfc9e0
7101dfc9dc  mov x22,xzr
7101dfc9e0  str xzr,[x22]
7101dfc9e4  ldr x8,[x19, #0x8]
7101dfc9e8  ldr x8,[x8, #0x8]
7101dfc9ec  cbz x8,0x7101dfca20
7101dfc9f0  ldr x0,[x8, #0x60]
7101dfc9f4  cbz x0,0x7101dfca20
7101dfc9f8  ldr x8,[x8, #0x18]
7101dfc9fc  add x1,x8,#0xb0
7101dfca00  bl 0x7103796f20
7101dfca04  str x0,[x22]
7101dfca08  cbz x0,0x7101dfca24
7101dfca0c  ldr x8,[x0]
7101dfca10  ldr x8,[x8, #0x2e0]
7101dfca14  mov w1,wzr
7101dfca18  blr x8
7101dfca1c  b 0x7101dfca24
7101dfca20  str xzr,[x22]
7101dfca24  mov x0,x22
7101dfca28  bl 0x710392eb40
7101dfca2c  ldp x8,x9,[x20, #0x1e0]
7101dfca30  sub x9,x9,x8
7101dfca34  asr x9,x9,#0x3
7101dfca38  cmp w9,w21
7101dfca3c  b.lt 0x7101dfe264
7101dfca40  sxtw x10,w21
7101dfca44  cmp x9,x10
7101dfca48  b.ls 0x7101dfe3f8
7101dfca4c  ldr x8,[x8, x10, LSL #0x3]
7101dfca50  ldrh w22,[x8]
7101dfca54  ldrh w21,[x8, #0x8]
7101dfca58  lsr w8,w22,#0x2
7101dfca5c  mov w23,wzr
7101dfca60  cmp w8,#0x5f4
7101dfca64  b.hi 0x7101dfca90
7101dfca68  ldrb w8,[x20, #0x2a0]
7101dfca6c  cbz w8,0x7101dfca90
7101dfca70  lsr x8,x22,#0x3
7101dfca74  and x8,x8,#0x1ffc
7101dfca78  add x8,x20,x8
7101dfca7c  ldr w8,[x8, #0x2b0]
7101dfca80  mov w9,#0x1
7101dfca84  lsl w9,w9,w22
7101dfca88  tst w8,w9
7101dfca8c  cset w23,ne
7101dfca90  mov w0,#0x10
7101dfca94  mov w1,#0x8
7101dfca98  bl 0x710392e290
7101dfca9c  mov x24,x0
7101dfcaa0  cbnz x0,0x7101dfcaec
7101dfcaa4  adrp x8,0x7105332000
7101dfcaa8  ldr x0,[x8, #0xf00]
7101dfcaac  cbz x0,0x7101dfcae8
7101dfcab0  mov w8,#0x8
7101dfcab4  stur wzr,[x29, #-0x70]
7101dfcab8  sub x1,x29,#0x70
7101dfcabc  str x8,[sp, #0x38]
7101dfcac0  ldr x8,[x0]
7101dfcac4  ldr x8,[x8, #0x30]
7101dfcac8  add x2,sp,#0x38
7101dfcacc  blr x8
7101dfcad0  tbz w0,#0x0,0x7101dfcae8
7101dfcad4  mov w0,#0x10
7101dfcad8  mov w1,#0x8
7101dfcadc  bl 0x710392e290
7101dfcae0  mov x24,x0
7101dfcae4  cbnz x0,0x7101dfcaec
7101dfcae8  mov x24,xzr
7101dfcaec  str xzr,[x24]
7101dfcaf0  ldr x8,[x19, #0x8]
7101dfcaf4  ldr x8,[x8, #0x8]
7101dfcaf8  cbz x8,0x7101dfcb30
7101dfcafc  ldr x0,[x8, #0x60]
7101dfcb00  cbz x0,0x7101dfcb30
7101dfcb04  ldr x8,[x8, #0x18]
7101dfcb08  add x1,x8,#0xb0
7101dfcb0c  bl 0x7103796f20
7101dfcb10  str x0,[x24]
7101dfcb14  cbz x0,0x7101dfcb34
7101dfcb18  ldr x8,[x0]
7101dfcb1c  ldr x8,[x8, #0x2f0]
7101dfcb20  mov w2,#0x1
7101dfcb24  mov w1,w23
7101dfcb28  blr x8
7101dfcb2c  b 0x7101dfcb34
7101dfcb30  str xzr,[x24]
7101dfcb34  mov x0,x24
7101dfcb38  bl 0x710392eb40
7101dfcb3c  ldr w8,[x20, #0x2ac]
7101dfcb40  add x9,x20,#0xf0
7101dfcb44  add x10,x20,#0x8
7101dfcb48  mov w1,#0x1
7101dfcb4c  cmp w8,#0xe
7101dfcb50  csel x0,x9,x10,eq
7101dfcb54  mov x2,x21
7101dfcb58  bl 0x710259a790
7101dfcb5c  adrp x26,0x7105329000
7101dfcb60  ldr x8,[x26, #0xf98]
7101dfcb64  ldr x8,[x8]
7101dfcb68  ldr x23,[x8, #0x20]
7101dfcb6c  orr w8,wzr,#0xffff
7101dfcb70  cmp w21,w8
7101dfcb74  b.eq 0x7101dfcbf8
7101dfcb78  mov x0,x23
7101dfcb7c  ldr x8,[x0, #0x28]!
7101dfcb80  ldr x9,[x0, #0x8]
7101dfcb84  sub x11,x9,x8
7101dfcb88  asr x9,x11,#0x3
7101dfcb8c  cmp w9,#0x1
7101dfcb90  b.lt 0x7101dfcbf8
7101dfcb94  mov x10,xzr
7101dfcb98  sbfx x11,x11,#0x3,#0x20
7101dfcb9c  cmp x9,x10
7101dfcba0  b.ls 0x7101dfe3fc
7101dfcba4  ldrh w12,[x8]
7101dfcba8  cmp w12,w21
7101dfcbac  b.eq 0x7101dfcbc4
7101dfcbb0  add x10,x10,#0x1
7101dfcbb4  add x8,x8,#0x8
7101dfcbb8  cmp x10,x11
7101dfcbbc  b.lt 0x7101dfcb9c
7101dfcbc0  b 0x7101dfcbf8
7101dfcbc4  tbnz w10,#0x1f,0x7101dfcbf8
7101dfcbc8  adrp x8,0x710532f000
7101dfcbcc  ldr x8,[x8, #0x730]
7101dfcbd0  ldr x8,[x8, #0x8]
7101dfcbd4  ldr x0,[x8, #0x1d8]
7101dfcbd8  mov x1,x21
7101dfcbdc  bl 0x71032a9470
7101dfcbe0  mov x1,x0
7101dfcbe4  add x0,x23,#0x8
7101dfcbe8  orr w2,wzr,#0x18
7101dfcbec  bl 0x710323faf0
7101dfcbf0  mov x23,x0
7101dfcbf4  b 0x7101dfcbfc
7101dfcbf8  add x23,x23,#0x70
7101dfcbfc  adrp x1,0x710436a000
7101dfcc00  add x1,x1,#0xc4b
7101dfcc04  add x8,sp,#0x38
7101dfcc08  mov x0,x19
7101dfcc0c  sxth x25,w21
7101dfcc10  bl 0x7103776910
7101dfcc14  ldr x24,[sp, #0x40]
7101dfcc18  mov x0,x24
7101dfcc1c  mov x1,x23
7101dfcc20  bl 0x7103778b80
7101dfcc24  adrp x27,0x710523d000
7101dfcc28  add x27,x27,#0x9a8
7101dfcc2c  stp x27,xzr,[sp, #0x38]
7101dfcc30  cbz x24,0x7101dfcc3c
7101dfcc34  mov x0,x24
7101dfcc38  bl 0x710392eb40
7101dfcc3c  adrp x1,0x7104328000
7101dfcc40  add x1,x1,#0x77e
7101dfcc44  add x8,sp,#0x38
7101dfcc48  mov x0,x19
7101dfcc4c  bl 0x7103776910
7101dfcc50  ldr x24,[sp, #0x40]
7101dfcc54  mov x0,x24
7101dfcc58  mov x1,x23
7101dfcc5c  bl 0x7103778b80
7101dfcc60  stp x27,xzr,[sp, #0x38]
7101dfcc64  cbz x24,0x7101dfcc70
7101dfcc68  mov x0,x24
7101dfcc6c  bl 0x710392eb40
7101dfcc70  adrp x8,0x710532f000
7101dfcc74  ldr x8,[x8, #0x730]
7101dfcc78  ldr x15,[x8, #0x8]
7101dfcc7c  ldr x8,[x15, #0x1d8]
7101dfcc80  cmn w25,#0x1
7101dfcc84  b.eq 0x7101dfcc94
7101dfcc88  add x9,x8,x25, LSL #0x1
7101dfcc8c  ldrh w12,[x9, #0x60]
7101dfcc90  b 0x7101dfcc98
7101dfcc94  mov w12,#0xffffffff
7101dfcc98  ldp x9,x10,[x8, #0x20]
7101dfcc9c  sub x10,x10,x9
7101dfcca0  orr x11,xzr,#-0x3333333333333334
7101dfcca4  movk x11,#0xcccd
7101dfcca8  asr x10,x10,#0x6
7101dfccac  mul x10,x10,x11
7101dfccb0  mov w11,#0x140
7101dfccb4  madd x13,x12,x11,x9
7101dfccb8  adrp x11,0x7105182000
7101dfccbc  add x11,x11,#0xb08
7101dfccc0  cmp x10,x12
7101dfccc4  csel x12,x13,x11,hi
7101dfccc8  stur x12,[x29, #-0x58]
7101dfcccc  ldr x12,[x26, #0xf98]
7101dfccd0  ldr x16,[x12]
7101dfccd4  ldr x12,[x16, #0x30]
7101dfccd8  ubfx x17,x22,#0x4,#0x1c
7101dfccdc  cmp w17,#0x177
7101dfcce0  b.cc 0x7101dfcd30
7101dfcce4  mov w13,#0xffffe890
7101dfcce8  add w13,w22,w13
7101dfccec  and w14,w13,#0xffff
7101dfccf0  adrp x28,0x710532a000
7101dfccf4  add x28,x28,#0x878
7101dfccf8  cmp w14,#0x63
7101dfccfc  b.hi 0x7101dfcd44
7101dfcd00  and x13,x13,#0xffff
7101dfcd04  mov w14,#0x50
7101dfcd08  madd x12,x13,x14,x12
7101dfcd0c  mov w14,#0x8cc8
7101dfcd10  movk w14,#0x8, LSL #16
7101dfcd14  mov w13,#0x8cc0
7101dfcd18  movk w13,#0x8, LSL #16
7101dfcd1c  ldrsh w14,[x12, x14, LSL #0x0]
7101dfcd20  add x12,x12,x13
7101dfcd24  cmn w14,#0x1
7101dfcd28  csel x28,x28,x12,eq
7101dfcd2c  b 0x7101dfcd44
7101dfcd30  mov w13,#0x50
7101dfcd34  madd x12,x22,x13,x12
7101dfcd38  mov w13,#0x1940
7101dfcd3c  movk w13,#0x1, LSL #16
7101dfcd40  add x28,x12,x13
7101dfcd44  cmn w25,#0x1
7101dfcd48  cset w12,ne
7101dfcd4c  cmp w25,#0x7d0
7101dfcd50  stp x16,x15,[sp, #0x10]
7101dfcd54  cset w13,lt
7101dfcd58  and w13,w12,w13
7101dfcd5c  cmp w13,#0x1
7101dfcd60  str w13,[sp, #0x2c]
7101dfcd64  str x17,[sp, #0x20]
7101dfcd68  b.ne 0x7101dfcdc4
7101dfcd6c  add x8,x8,x25, LSL #0x1
7101dfcd70  ldrh w8,[x8, #0x60]
7101dfcd74  cmp w10,w8
7101dfcd78  b.ls 0x7101dfcdc4
7101dfcd7c  mov w12,#0x140
7101dfcd80  madd x9,x8,x12,x9
7101dfcd84  cmp x10,x8
7101dfcd88  csel x8,x9,x11,hi
7101dfcd8c  ldrb w9,[x8, #0x5e]
7101dfcd90  cbz w9,0x7101dfcd9c
7101dfcd94  mov w1,#0x4
7101dfcd98  b 0x7101dfcdc8
7101dfcd9c  ldrb w8,[x8, #0x6c]
7101dfcda0  sub w8,w8,#0x1
7101dfcda4  cmp w8,#0x2
7101dfcda8  b.hi 0x7101dfcdc4
7101dfcdac  and x8,x8,#0xff
7101dfcdb0  lsl x8,x8,#0x3
7101dfcdb4  mov w9,#0x301
7101dfcdb8  movk w9,#0x2, LSL #16
7101dfcdbc  lsr w1,w9,w8
7101dfcdc0  b 0x7101dfcdc8
7101dfcdc4  mov w1,wzr
7101dfcdc8  add x0,sp,#0x38
7101dfcdcc  mov w2,wzr
7101dfcdd0  add x23,sp,#0x38
7101dfcdd4  bl 0x710339dde0
7101dfcdd8  fmov s8,0x3f800000
7101dfcddc  ldr x0,[x19, #0x8]
7101dfcde0  mov v0.16B,v8.16B
7101dfcde4  add x24,x23,#0x8
7101dfcde8  mov x1,x24
7101dfcdec  bl 0x7103778300
7101dfcdf0  adrp x1,0x7104319000
7101dfcdf4  add x1,x1,#0x364
7101dfcdf8  sub x8,x29,#0x70
7101dfcdfc  mov x0,x19
7101dfce00  bl 0x7103776640
7101dfce04  ldur x23,[x29, #-0x68]
7101dfce08  mov v0.16B,v8.16B
7101dfce0c  mov x1,x24
7101dfce10  mov x0,x23
7101dfce14  bl 0x7103778300
7101dfce18  adrp x8,0x710523d000
7101dfce1c  add x8,x8,#0x988
7101dfce20  stp x8,xzr,[x29, #-0x70]
7101dfce24  cbz x23,0x7101dfce40
7101dfce28  ldr x0,[x23, #0x18]
7101dfce2c  stp x27,xzr,[x23, #0x10]
7101dfce30  cbz x0,0x7101dfce38
7101dfce34  bl 0x710392eb40
7101dfce38  mov x0,x23
7101dfce3c  bl 0x710392eb40
7101dfce40  ldur x8,[x29, #-0x58]
7101dfce44  ldrb w26,[x8, #0x68]
7101dfce48  cmp w26,#0x3
7101dfce4c  b.hi 0x7101dfcfc8
7101dfce50  adrp x8,0x71044fb000
7101dfce54  add x8,x8,#0x91c
7101dfce58  ldrsw x9,[x8, x26, LSL #0x2]
7101dfce5c  add x8,x9,x8
7101dfce60  br x8
7101dfce64  mov x11,#0x6c63
7101dfce68  movk x11,#0x7361, LSL #16
7101dfce6c  mov x9,#0xa00000000
7101dfce70  add x10,sp,#0x38
7101dfce74  movk x11,#0x5f73, LSL #32
7101dfce78  movk x11,#0x6f6e, LSL #48
7101dfce7c  stp x9,x11,[sp, #0x38]
7101dfce80  add x23,x10,#0x8
7101dfce84  add x9,x10,#0x9
7101dfce88  mov w10,#0x656e
7101dfce8c  strh w10,[sp, #0x48]
7101dfce90  mov w8,#0x9dc5
7101dfce94  movk w8,#0x811c, LSL #16
7101dfce98  strb wzr,[sp, #0x4a]
7101dfce9c  mov w11,#0x63
7101dfcea0  mov w10,#0x89
7101dfcea4  mul w8,w8,w10
7101dfcea8  and w11,w11,#0xff
7101dfceac  eor w8,w8,w11
7101dfceb0  ldrb w11,[x9], #0x1
7101dfceb4  cbnz w11,0x7101dfcea4
7101dfceb8  b 0x7101dfd01c
7101dfcebc  mov x9,#0x900000000
7101dfcec0  str x9,[sp, #0x38]
7101dfcec4  mov x9,#0x6c63
7101dfcec8  movk x9,#0x7361, LSL #16
7101dfcecc  add x10,sp,#0x38
7101dfced0  add x23,x10,#0x8
7101dfced4  movk x9,#0x5f73, LSL #32
7101dfced8  movk x9,#0x6361, LSL #48
7101dfcedc  str x9,[sp, #0x40]
7101dfcee0  add x9,x10,#0x9
7101dfcee4  mov w10,#0x65
7101dfcee8  strh w10,[sp, #0x48]
7101dfceec  mov w8,#0x9dc5
7101dfcef0  movk w8,#0x811c, LSL #16
7101dfcef4  mov w11,#0x63
7101dfcef8  mov w10,#0x89
7101dfcefc  mul w8,w8,w10
7101dfcf00  and w11,w11,#0xff
7101dfcf04  eor w8,w8,w11
7101dfcf08  ldrb w11,[x9], #0x1
7101dfcf0c  cbnz w11,0x7101dfcefc
7101dfcf10  b 0x7101dfd01c
7101dfcf14  mov x11,#0x6c63
7101dfcf18  movk x11,#0x7361, LSL #16
7101dfcf1c  orr x9,xzr,#0xc00000000
7101dfcf20  add x10,sp,#0x38
7101dfcf24  movk x11,#0x5f73, LSL #32
7101dfcf28  movk x11,#0x656c, LSL #48
7101dfcf2c  stp x9,x11,[sp, #0x38]
7101dfcf30  add x23,x10,#0x8
7101dfcf34  add x9,x10,#0x9
7101dfcf38  mov w10,#0x6567
7101dfcf3c  movk w10,#0x646e, LSL #16
7101dfcf40  mov w8,#0x9dc5
7101dfcf44  movk w8,#0x811c, LSL #16
7101dfcf48  str w10,[sp, #0x48]
7101dfcf4c  mov w11,#0x63
7101dfcf50  strb wzr,[sp, #0x4c]
7101dfcf54  mov w10,#0x89
7101dfcf58  mul w8,w8,w10
7101dfcf5c  and w11,w11,#0xff
7101dfcf60  eor w8,w8,w11
7101dfcf64  ldrb w11,[x9], #0x1
7101dfcf68  cbnz w11,0x7101dfcf58
7101dfcf6c  b 0x7101dfd01c
7101dfcf70  mov x11,#0x6c63
7101dfcf74  movk x11,#0x7361, LSL #16
7101dfcf78  mov x9,#0xa00000000
7101dfcf7c  add x10,sp,#0x38
7101dfcf80  movk x11,#0x5f73, LSL #32
7101dfcf84  movk x11,#0x6f68, LSL #48
7101dfcf88  stp x9,x11,[sp, #0x38]
7101dfcf8c  add x23,x10,#0x8
7101dfcf90  add x9,x10,#0x9
7101dfcf94  mov w10,#0x6570
7101dfcf98  strh w10,[sp, #0x48]
7101dfcf9c  mov w8,#0x9dc5
7101dfcfa0  movk w8,#0x811c, LSL #16
7101dfcfa4  strb wzr,[sp, #0x4a]
7101dfcfa8  mov w11,#0x63
7101dfcfac  mov w10,#0x89
7101dfcfb0  mul w8,w8,w10
7101dfcfb4  and w11,w11,#0xff
7101dfcfb8  eor w8,w8,w11
7101dfcfbc  ldrb w11,[x9], #0x1
7101dfcfc0  cbnz w11,0x7101dfcfb0
7101dfcfc4  b 0x7101dfd01c
7101dfcfc8  mov x11,#0x6c63
7101dfcfcc  movk x11,#0x7361, LSL #16
7101dfcfd0  mov x9,#0xa00000000
7101dfcfd4  add x10,sp,#0x38
7101dfcfd8  movk x11,#0x5f73, LSL #32
7101dfcfdc  movk x11,#0x6f6e, LSL #48
7101dfcfe0  stp x9,x11,[sp, #0x38]
7101dfcfe4  add x23,x10,#0x8
7101dfcfe8  add x9,x10,#0x9
7101dfcfec  mov w10,#0x656e
7101dfcff0  strh w10,[sp, #0x48]
7101dfcff4  mov w8,#0x9dc5
7101dfcff8  movk w8,#0x811c, LSL #16
7101dfcffc  strb wzr,[sp, #0x4a]
7101dfd000  mov w11,#0x63
7101dfd004  mov w10,#0x89
7101dfd008  mul w8,w8,w10
7101dfd00c  and w11,w11,#0xff
7101dfd010  eor w8,w8,w11
7101dfd014  ldrb w11,[x9], #0x1
7101dfd018  cbnz w11,0x7101dfd008
7101dfd01c  str w8,[sp, #0x38]
7101dfd020  ldr x0,[x19, #0x8]
7101dfd024  fmov s0,0x3f800000
7101dfd028  mov x1,x23
7101dfd02c  bl 0x7103778300
7101dfd030  ldr w8,[x20, #0x2ac]
7101dfd034  cmp w8,#0xe
7101dfd038  str x28,[sp, #0x30]
7101dfd03c  b.ne 0x7101dfd514
7101dfd040  adrp x8,0x7105239000
7101dfd044  add x8,x8,#0x1c0
7101dfd048  mov x28,x27
7101dfd04c  ldp w9,w10,[x8]
7101dfd050  str w10,[x8]
7101dfd054  ldp w10,w11,[x8, #0x8]
7101dfd058  eor w9,w9,w9, LSL #0xb
7101dfd05c  eor w9,w9,w9, LSR #0x8
7101dfd060  eor w9,w9,w11
7101dfd064  eor w9,w9,w11, LSR #0x13
7101dfd068  stp w10,w11,[x8, #0x4]
7101dfd06c  mov w10,#0x64
7101dfd070  str w9,[x8, #0xc]
7101dfd074  mov w8,#0x851f
7101dfd078  movk w8,#0x51eb, LSL #16
7101dfd07c  umull x8,w9,w8
7101dfd080  lsr x8,x8,#0x25
7101dfd084  msub w27,w8,w10,w9
7101dfd088  adrp x1,0x710433a000
7101dfd08c  add x1,x1,#0x66a
7101dfd090  sub x8,x29,#0x70
7101dfd094  mov x0,x19
7101dfd098  bl 0x7103776640
7101dfd09c  ldur x24,[x29, #-0x68]
7101dfd0a0  fmov s0,0x3f800000
7101dfd0a4  mov x0,x24
7101dfd0a8  mov x1,x23
7101dfd0ac  bl 0x7103778300
7101dfd0b0  adrp x8,0x710523d000
7101dfd0b4  add x8,x8,#0x988
7101dfd0b8  stp x8,xzr,[x29, #-0x70]
7101dfd0bc  cbz x24,0x7101dfd0d8
7101dfd0c0  ldr x0,[x24, #0x18]
7101dfd0c4  stp x28,xzr,[x24, #0x10]
7101dfd0c8  cbz x0,0x7101dfd0d0
7101dfd0cc  bl 0x710392eb40
7101dfd0d0  mov x0,x24
7101dfd0d4  bl 0x710392eb40
7101dfd0d8  adrp x1,0x710433a000
7101dfd0dc  add x1,x1,#0x66a
7101dfd0e0  sub x8,x29,#0x70
7101dfd0e4  mov x0,x19
7101dfd0e8  bl 0x7103776640
7101dfd0ec  ucvtf s8,w27
7101dfd0f0  ldur x24,[x29, #-0x68]
7101dfd0f4  ldr x0,[x24, #0x8]
7101dfd0f8  cbz x0,0x7101dfd11c
7101dfd0fc  adrp x1,0x710436a000
7101dfd100  add x1,x1,#0xc3e
7101dfd104  bl 0x71037964b0
7101dfd108  cbz x0,0x7101dfd11c
7101dfd10c  ldr x8,[x0]
7101dfd110  ldr x8,[x8, #0x1a0]
7101dfd114  mov v0.16B,v8.16B
7101dfd118  blr x8
7101dfd11c  mov x27,x28
7101dfd120  ldr x28,[sp, #0x30]
7101dfd124  adrp x8,0x710523d000
7101dfd128  add x8,x8,#0x988
7101dfd12c  stp x8,xzr,[x29, #-0x70]
7101dfd130  cbz x24,0x7101dfd14c
7101dfd134  ldr x0,[x24, #0x18]
7101dfd138  stp x27,xzr,[x24, #0x10]
7101dfd13c  cbz x0,0x7101dfd144
7101dfd140  bl 0x710392eb40
7101dfd144  mov x0,x24
7101dfd148  bl 0x710392eb40
7101dfd14c  adrp x1,0x710438d000
7101dfd150  add x1,x1,#0x2e
7101dfd154  sub x8,x29,#0x70
7101dfd158  mov x0,x19
7101dfd15c  bl 0x7103776640
7101dfd160  ldur x24,[x29, #-0x68]
7101dfd164  fmov s0,0x3f800000
7101dfd168  mov x0,x24
7101dfd16c  mov x1,x23
7101dfd170  bl 0x7103778300
7101dfd174  adrp x8,0x710523d000
7101dfd178  add x8,x8,#0x988
7101dfd17c  stp x8,xzr,[x29, #-0x70]
7101dfd180  cbz x24,0x7101dfd19c
7101dfd184  ldr x0,[x24, #0x18]
7101dfd188  stp x27,xzr,[x24, #0x10]
7101dfd18c  cbz x0,0x7101dfd194
7101dfd190  bl 0x710392eb40
7101dfd194  mov x0,x24
7101dfd198  bl 0x710392eb40
7101dfd19c  adrp x1,0x710438d000
7101dfd1a0  add x1,x1,#0x2e
7101dfd1a4  sub x8,x29,#0x70
7101dfd1a8  mov x0,x19
7101dfd1ac  bl 0x7103776640
7101dfd1b0  ldur x24,[x29, #-0x68]
7101dfd1b4  ldr x0,[x24, #0x8]
7101dfd1b8  cbz x0,0x7101dfd1dc
7101dfd1bc  adrp x1,0x7104453000
7101dfd1c0  add x1,x1,#0xac
7101dfd1c4  bl 0x71037964b0
7101dfd1c8  cbz x0,0x7101dfd1dc
7101dfd1cc  ldr x8,[x0]
7101dfd1d0  ldr x8,[x8, #0x1a0]
7101dfd1d4  mov v0.16B,v8.16B
7101dfd1d8  blr x8
7101dfd1dc  adrp x8,0x710523d000
7101dfd1e0  add x8,x8,#0x988
7101dfd1e4  stp x8,xzr,[x29, #-0x70]
7101dfd1e8  cbz x24,0x7101dfd204
7101dfd1ec  ldr x0,[x24, #0x18]
7101dfd1f0  stp x27,xzr,[x24, #0x10]
7101dfd1f4  cbz x0,0x7101dfd1fc
7101dfd1f8  bl 0x710392eb40
7101dfd1fc  mov x0,x24
7101dfd200  bl 0x710392eb40
7101dfd204  adrp x1,0x7104281000
7101dfd208  add x1,x1,#0x1a
7101dfd20c  sub x8,x29,#0x70
7101dfd210  mov x0,x19
7101dfd214  bl 0x7103776640
7101dfd218  ldur x24,[x29, #-0x68]
7101dfd21c  fmov s0,0x3f800000
7101dfd220  mov x0,x24
7101dfd224  mov x1,x23
7101dfd228  bl 0x7103778300
7101dfd22c  adrp x8,0x710523d000
7101dfd230  add x8,x8,#0x988
7101dfd234  stp x8,xzr,[x29, #-0x70]
7101dfd238  cbz x24,0x7101dfd254
7101dfd23c  ldr x0,[x24, #0x18]
7101dfd240  stp x27,xzr,[x24, #0x10]
7101dfd244  cbz x0,0x7101dfd24c
7101dfd248  bl 0x710392eb40
7101dfd24c  mov x0,x24
7101dfd250  bl 0x710392eb40
7101dfd254  adrp x1,0x7104281000
7101dfd258  add x1,x1,#0x1a
7101dfd25c  sub x8,x29,#0x70
7101dfd260  mov x0,x19
7101dfd264  bl 0x7103776640
7101dfd268  ldur x24,[x29, #-0x68]
7101dfd26c  ldr x0,[x24, #0x8]
7101dfd270  cbz x0,0x7101dfd294
7101dfd274  adrp x1,0x7104442000
7101dfd278  add x1,x1,#0x147
7101dfd27c  bl 0x71037964b0
7101dfd280  cbz x0,0x7101dfd294
7101dfd284  ldr x8,[x0]
7101dfd288  ldr x8,[x8, #0x1a0]
7101dfd28c  mov v0.16B,v8.16B
7101dfd290  blr x8
7101dfd294  adrp x8,0x710523d000
7101dfd298  add x8,x8,#0x988
7101dfd29c  stp x8,xzr,[x29, #-0x70]
7101dfd2a0  cbz x24,0x7101dfd2bc
7101dfd2a4  ldr x0,[x24, #0x18]
7101dfd2a8  stp x27,xzr,[x24, #0x10]
7101dfd2ac  cbz x0,0x7101dfd2b4
7101dfd2b0  bl 0x710392eb40
7101dfd2b4  mov x0,x24
7101dfd2b8  bl 0x710392eb40
7101dfd2bc  adrp x1,0x7104422000
7101dfd2c0  add x1,x1,#0x8db
7101dfd2c4  sub x8,x29,#0x70
7101dfd2c8  mov x0,x19
7101dfd2cc  bl 0x7103776640
7101dfd2d0  ldur x24,[x29, #-0x68]
7101dfd2d4  fmov s0,0x3f800000
7101dfd2d8  mov x0,x24
7101dfd2dc  mov x1,x23
7101dfd2e0  bl 0x7103778300
7101dfd2e4  adrp x8,0x710523d000
7101dfd2e8  add x8,x8,#0x988
7101dfd2ec  stp x8,xzr,[x29, #-0x70]
7101dfd2f0  cbz x24,0x7101dfd30c
7101dfd2f4  ldr x0,[x24, #0x18]
7101dfd2f8  stp x27,xzr,[x24, #0x10]
7101dfd2fc  cbz x0,0x7101dfd304
7101dfd300  bl 0x710392eb40
7101dfd304  mov x0,x24
7101dfd308  bl 0x710392eb40
7101dfd30c  adrp x1,0x7104422000
7101dfd310  add x1,x1,#0x8db
7101dfd314  sub x8,x29,#0x70
7101dfd318  mov x0,x19
7101dfd31c  bl 0x7103776640
7101dfd320  ldur x23,[x29, #-0x68]
7101dfd324  ldr x0,[x23, #0x8]
7101dfd328  cbz x0,0x7101dfd34c
7101dfd32c  adrp x1,0x7104464000
7101dfd330  add x1,x1,#0x374
7101dfd334  bl 0x71037964b0
7101dfd338  cbz x0,0x7101dfd34c
7101dfd33c  ldr x8,[x0]
7101dfd340  ldr x8,[x8, #0x1a0]
7101dfd344  mov v0.16B,v8.16B
7101dfd348  blr x8
7101dfd34c  adrp x8,0x710523d000
7101dfd350  add x8,x8,#0x988
7101dfd354  stp x8,xzr,[x29, #-0x70]
7101dfd358  cbz x23,0x7101dfd374
7101dfd35c  ldr x0,[x23, #0x18]
7101dfd360  stp x27,xzr,[x23, #0x10]
7101dfd364  cbz x0,0x7101dfd36c
7101dfd368  bl 0x710392eb40
7101dfd36c  mov x0,x23
7101dfd370  bl 0x710392eb40
7101dfd374  adrp x1,0x710433a000
7101dfd378  add x1,x1,#0x66a
7101dfd37c  sub x8,x29,#0x70
7101dfd380  mov x0,x19
7101dfd384  bl 0x7103776640
7101dfd388  ldur x23,[x29, #-0x68]
7101dfd38c  ldr x8,[x23, #0x8]
7101dfd390  cbz x8,0x7101dfd3b4
7101dfd394  ldr x8,[x8, #0x18]
7101dfd398  cbz x8,0x7101dfd3b4
7101dfd39c  ldrb w10,[x8, #0x58]
7101dfd3a0  cmp w26,#0x3
7101dfd3a4  cset w9,eq
7101dfd3a8  and w10,w10,#0xfe
7101dfd3ac  orr w9,w10,w9
7101dfd3b0  strb w9,[x8, #0x58]
7101dfd3b4  adrp x8,0x710523d000
7101dfd3b8  add x8,x8,#0x988
7101dfd3bc  stp x8,xzr,[x29, #-0x70]
7101dfd3c0  cbz x23,0x7101dfd3dc
7101dfd3c4  ldr x0,[x23, #0x18]
7101dfd3c8  stp x27,xzr,[x23, #0x10]
7101dfd3cc  cbz x0,0x7101dfd3d4
7101dfd3d0  bl 0x710392eb40
7101dfd3d4  mov x0,x23
7101dfd3d8  bl 0x710392eb40
7101dfd3dc  adrp x1,0x710438d000
7101dfd3e0  add x1,x1,#0x2e
7101dfd3e4  sub x8,x29,#0x70
7101dfd3e8  mov x0,x19
7101dfd3ec  bl 0x7103776640
7101dfd3f0  ldur x23,[x29, #-0x68]
7101dfd3f4  ldr x8,[x23, #0x8]
7101dfd3f8  cbz x8,0x7101dfd41c
7101dfd3fc  ldr x8,[x8, #0x18]
7101dfd400  cbz x8,0x7101dfd41c
7101dfd404  ldrb w10,[x8, #0x58]
7101dfd408  cmp w26,#0x2
7101dfd40c  cset w9,eq
7101dfd410  and w10,w10,#0xfe
7101dfd414  orr w9,w10,w9
7101dfd418  strb w9,[x8, #0x58]
7101dfd41c  adrp x8,0x710523d000
7101dfd420  add x8,x8,#0x988
7101dfd424  stp x8,xzr,[x29, #-0x70]
7101dfd428  cbz x23,0x7101dfd444
7101dfd42c  ldr x0,[x23, #0x18]
7101dfd430  stp x27,xzr,[x23, #0x10]
7101dfd434  cbz x0,0x7101dfd43c
7101dfd438  bl 0x710392eb40
7101dfd43c  mov x0,x23
7101dfd440  bl 0x710392eb40
7101dfd444  adrp x1,0x7104281000
7101dfd448  add x1,x1,#0x1a
7101dfd44c  sub x8,x29,#0x70
7101dfd450  mov x0,x19
7101dfd454  bl 0x7103776640
7101dfd458  ldur x23,[x29, #-0x68]
7101dfd45c  ldr x8,[x23, #0x8]
7101dfd460  cbz x8,0x7101dfd484
7101dfd464  ldr x8,[x8, #0x18]
7101dfd468  cbz x8,0x7101dfd484
7101dfd46c  ldrb w10,[x8, #0x58]
7101dfd470  cmp w26,#0x1
7101dfd474  cset w9,eq
7101dfd478  and w10,w10,#0xfe
7101dfd47c  orr w9,w10,w9
7101dfd480  strb w9,[x8, #0x58]
7101dfd484  adrp x8,0x710523d000
7101dfd488  add x8,x8,#0x988
7101dfd48c  stp x8,xzr,[x29, #-0x70]
7101dfd490  cbz x23,0x7101dfd4ac
7101dfd494  ldr x0,[x23, #0x18]
7101dfd498  stp x27,xzr,[x23, #0x10]
7101dfd49c  cbz x0,0x7101dfd4a4
7101dfd4a0  bl 0x710392eb40
7101dfd4a4  mov x0,x23
7101dfd4a8  bl 0x710392eb40
7101dfd4ac  adrp x1,0x7104422000
7101dfd4b0  add x1,x1,#0x8db
7101dfd4b4  sub x8,x29,#0x70
7101dfd4b8  mov x0,x19
7101dfd4bc  bl 0x7103776640
7101dfd4c0  ldur x23,[x29, #-0x68]
7101dfd4c4  ldr x8,[x23, #0x8]
7101dfd4c8  cbz x8,0x7101dfd4ec
7101dfd4cc  ldr x8,[x8, #0x18]
7101dfd4d0  cbz x8,0x7101dfd4ec
7101dfd4d4  ldrb w10,[x8, #0x58]
7101dfd4d8  cmp w26,#0x0
7101dfd4dc  cset w9,eq
7101dfd4e0  and w10,w10,#0xfe
7101dfd4e4  orr w9,w10,w9
7101dfd4e8  strb w9,[x8, #0x58]
7101dfd4ec  adrp x8,0x710523d000
7101dfd4f0  add x8,x8,#0x988
7101dfd4f4  stp x8,xzr,[x29, #-0x70]
7101dfd4f8  cbz x23,0x7101dfd514
7101dfd4fc  ldr x0,[x23, #0x18]
7101dfd500  stp x27,xzr,[x23, #0x10]
7101dfd504  cbz x0,0x7101dfd50c
7101dfd508  bl 0x710392eb40
7101dfd50c  mov x0,x23
7101dfd510  bl 0x710392eb40
7101dfd514  ldrb w23,[x28, #0x3e]
7101dfd518  adrp x1,0x7104308000
7101dfd51c  add x1,x1,#0xa24
7101dfd520  add x8,sp,#0x38
7101dfd524  mov x0,x19
7101dfd528  bl 0x7103776640
7101dfd52c  tst w23,#0x4
7101dfd530  ldr x23,[sp, #0x40]
7101dfd534  fmov s0,0x3f800000
7101dfd538  adrp x8,0x7104292000
7101dfd53c  add x8,x8,#0x57e
7101dfd540  adrp x9,0x71043cd000
7101dfd544  add x9,x9,#0x335
7101dfd548  csel x1,x9,x8,eq
7101dfd54c  mov x0,x23
7101dfd550  bl 0x7103778300
7101dfd554  adrp x8,0x710523d000
7101dfd558  add x8,x8,#0x988
7101dfd55c  stp x8,xzr,[sp, #0x38]
7101dfd560  cbz x23,0x7101dfd57c
7101dfd564  ldr x0,[x23, #0x18]
7101dfd568  stp x27,xzr,[x23, #0x10]
7101dfd56c  cbz x0,0x7101dfd574
7101dfd570  bl 0x710392eb40
7101dfd574  mov x0,x23
7101dfd578  bl 0x710392eb40
7101dfd57c  ldr x8,[sp, #0x20]
7101dfd580  cmp w8,#0x176
7101dfd584  b.ls 0x7101dfd590
7101dfd588  mov w24,wzr
7101dfd58c  b 0x7101dfd5b0
7101dfd590  ldr x8,[sp, #0x10]
7101dfd594  ldr x8,[x8, #0x30]
7101dfd598  mov w9,#0x50
7101dfd59c  umaddl x8,w22,w9,x8
7101dfd5a0  mov w9,#0x197e
7101dfd5a4  movk w9,#0x1, LSL #16
7101dfd5a8  ldrb w8,[x8, x9, LSL ]
7101dfd5ac  ubfx w24,w8,#0x1,#0x1
7101dfd5b0  ldr x1,[x20, #0x258]
7101dfd5b4  mov w0,w22
7101dfd5b8  mov x26,#0x5200000000000000
7101dfd5bc  bl 0x71025ca280
7101dfd5c0  ldr x12,[x28, #0x18]
7101dfd5c4  ldr x13,[x20, #0x258]
7101dfd5c8  and x10,x12,#-0x100000000000000
7101dfd5cc  mov w23,w0
7101dfd5d0  and x8,x12,#0xffffffffff
7101dfd5d4  and x9,x13,#0xffffffffff
7101dfd5d8  cmp x10,x26
7101dfd5dc  b.ne 0x7101dfd604
7101dfd5e0  cbz x8,0x7101dfd604
7101dfd5e4  and x11,x13,#-0x100000000000000
7101dfd5e8  cmp x11,x26
7101dfd5ec  b.ne 0x7101dfd608
7101dfd5f0  cbz x9,0x7101dfd608
7101dfd5f4  eor x8,x13,x12
7101dfd5f8  tst x8,#0xffffffffff
7101dfd5fc  cset w8,eq
7101dfd600  b 0x7101dfd638
7101dfd604  and x11,x13,#-0x100000000000000
7101dfd608  cmp x10,x26
7101dfd60c  cset w10,eq
7101dfd610  cmp x8,#0x0
7101dfd614  cset w8,ne
7101dfd618  cmp x9,#0x0
7101dfd61c  cset w9,ne
7101dfd620  cmp x11,x26
7101dfd624  and w8,w10,w8
7101dfd628  cset w10,eq
7101dfd62c  and w9,w9,w10
7101dfd630  eor w8,w9,w8
7101dfd634  eor w8,w8,#0x1
7101dfd638  str w8,[sp, #0x20]
7101dfd63c  adrp x1,0x710433a000
7101dfd640  add x1,x1,#0x6bd
7101dfd644  add x8,sp,#0x38
7101dfd648  mov x0,x19
7101dfd64c  bl 0x7103776640
7101dfd650  ldr w8,[x20, #0x2ac]
7101dfd654  sub w9,w8,#0x8
7101dfd658  cmp w9,#0x3
7101dfd65c  b.cs 0x7101dfd710
7101dfd660  cmp w8,#0x8
7101dfd664  b.ne 0x7101dfd6cc
7101dfd668  adrp x8,0x710532f000
7101dfd66c  ldr x8,[x8, #0x730]
7101dfd670  ldr x8,[x8, #0x8]
7101dfd674  ldr x8,[x8, #0x208]
7101dfd678  ldr x0,[x8, #0x8]
7101dfd67c  mov x1,#0xe86
7101dfd680  movk x1,#0x30ff, LSL #16
7101dfd684  movk x1,#0x15, LSL #32
7101dfd688  bl 0x71032a3d90
7101dfd68c  ldr x12,[x20, #0x258]
7101dfd690  and x10,x12,#-0x100000000000000
7101dfd694  and x9,x12,#0xffffffffff
7101dfd698  and x8,x0,#0xffffffffff
7101dfd69c  cmp x10,x26
7101dfd6a0  b.ne 0x7101dfd764
7101dfd6a4  cbz x9,0x7101dfd764
7101dfd6a8  and x11,x0,#-0x100000000000000
7101dfd6ac  cmp x11,x26
7101dfd6b0  b.ne 0x7101dfd768
7101dfd6b4  cbz x8,0x7101dfd768
7101dfd6b8  eor x8,x0,x12
7101dfd6bc  tst x8,#0xffffffffff
7101dfd6c0  cset w8,eq
7101dfd6c4  orr w8,w8,w23
7101dfd6c8  tbnz w8,#0x0,0x7101dfd7a0
7101dfd6cc  cbz w24,0x7101dfd734
7101dfd6d0  fmov s8,0x3f800000
7101dfd6d4  ldr x23,[sp, #0x40]
7101dfd6d8  adrp x1,0x7104270000
7101dfd6dc  add x1,x1,#0x4e1
7101dfd6e0  mov v0.16B,v8.16B
7101dfd6e4  mov x0,x23
7101dfd6e8  bl 0x7103778300
7101dfd6ec  mov v0.16B,v8.16B
7101dfd6f0  adrp x1,0x71043ad000
7101dfd6f4  add x1,x1,#0xd07
7101dfd6f8  mov x0,x23
7101dfd6fc  bl 0x7103778300
7101dfd700  mov w8,#0x1
7101dfd704  str w8,[sp, #0x10]
7101dfd708  adrp x24,0x7105329000
7101dfd70c  b 0x7101dfd7ec
7101dfd710  ldr x23,[sp, #0x40]
7101dfd714  fmov s0,0x3f800000
7101dfd718  adrp x1,0x71043cd000
7101dfd71c  add x1,x1,#0x335
7101dfd720  mov x0,x23
7101dfd724  bl 0x7103778300
7101dfd728  str wzr,[sp, #0x10]
7101dfd72c  adrp x24,0x7105329000
7101dfd730  b 0x7101dfd7ec
7101dfd734  ldr s0,[x20, #0x5ac]
7101dfd738  mov x0,x21
7101dfd73c  bl 0x71025cba90
7101dfd740  and w8,w0,#0xff
7101dfd744  cmp w8,#0x2
7101dfd748  adrp x24,0x7105329000
7101dfd74c  b.eq 0x7101dfd7d0
7101dfd750  cbnz w8,0x7101dfd7c0
7101dfd754  ldr x23,[sp, #0x40]
7101dfd758  adrp x1,0x7104292000
7101dfd75c  add x1,x1,#0x174
7101dfd760  b 0x7101dfd7dc
7101dfd764  and x11,x0,#-0x100000000000000
7101dfd768  cmp x10,x26
7101dfd76c  cset w10,eq
7101dfd770  cmp x9,#0x0
7101dfd774  cset w9,ne
7101dfd778  cmp x8,#0x0
7101dfd77c  cset w8,ne
7101dfd780  cmp x11,x26
7101dfd784  and w9,w10,w9
7101dfd788  cset w10,eq
7101dfd78c  and w8,w8,w10
7101dfd790  eor w8,w8,w9
7101dfd794  eor w8,w8,#0x1
7101dfd798  orr w8,w8,w23
7101dfd79c  tbz w8,#0x0,0x7101dfd6cc
7101dfd7a0  ldr s0,[x20, #0x5ac]
7101dfd7a4  mov x0,x21
7101dfd7a8  bl 0x71025cba90
7101dfd7ac  and w8,w0,#0xff
7101dfd7b0  cmp w8,#0x2
7101dfd7b4  adrp x24,0x7105329000
7101dfd7b8  b.eq 0x7101dfd7d0
7101dfd7bc  cbz w8,0x7101dfd754
7101dfd7c0  ldr x23,[sp, #0x40]
7101dfd7c4  adrp x1,0x71043cd000
7101dfd7c8  add x1,x1,#0x335
7101dfd7cc  b 0x7101dfd7dc
7101dfd7d0  ldr x23,[sp, #0x40]
7101dfd7d4  adrp x1,0x7104422000
7101dfd7d8  add x1,x1,#0x8b4
7101dfd7dc  fmov s0,0x3f800000
7101dfd7e0  mov x0,x23
7101dfd7e4  bl 0x7103778300
7101dfd7e8  str wzr,[sp, #0x10]
7101dfd7ec  adrp x8,0x710523d000
7101dfd7f0  add x8,x8,#0x988
7101dfd7f4  stp x8,xzr,[sp, #0x38]
7101dfd7f8  cbz x23,0x7101dfd814
7101dfd7fc  ldr x0,[x23, #0x18]
7101dfd800  stp x27,xzr,[x23, #0x10]
7101dfd804  cbz x0,0x7101dfd80c
7101dfd808  bl 0x710392eb40
7101dfd80c  mov x0,x23
7101dfd810  bl 0x710392eb40
7101dfd814  ldr w8,[x20, #0x2ac]
7101dfd818  cmp w8,#0x8
7101dfd81c  cset w8,eq
7101dfd820  str w8,[sp, #0xc]
7101dfd824  ldr x8,[x24, #0xf98]
7101dfd828  ldr x8,[x8]
7101dfd82c  add x0,x8,#0x38
7101dfd830  mov w1,w22
7101dfd834  bl 0x710251a7e0
7101dfd838  mov w22,w0
7101dfd83c  adrp x1,0x7104455000
7101dfd840  add x1,x1,#0x6b
7101dfd844  add x8,sp,#0x38
7101dfd848  mov x0,x19
7101dfd84c  bl 0x7103776640
7101dfd850  ldr x23,[sp, #0x40]
7101dfd854  fmov s0,0x3f800000
7101dfd858  tst w22,#0x1
7101dfd85c  adrp x8,0x7104292000
7101dfd860  add x8,x8,#0x57e
7101dfd864  adrp x9,0x71043cd000
7101dfd868  add x9,x9,#0x335
7101dfd86c  csel x1,x8,x9,ne
7101dfd870  mov x0,x23
7101dfd874  bl 0x7103778300
7101dfd878  adrp x8,0x710523d000
7101dfd87c  add x8,x8,#0x988
7101dfd880  stp x8,xzr,[sp, #0x38]
7101dfd884  cbz x23,0x7101dfd8a0
7101dfd888  ldr x0,[x23, #0x18]
7101dfd88c  stp x27,xzr,[x23, #0x10]
7101dfd890  cbz x0,0x7101dfd898
7101dfd894  bl 0x710392eb40
7101dfd898  mov x0,x23
7101dfd89c  bl 0x710392eb40
7101dfd8a0  ldur x8,[x29, #-0x58]
7101dfd8a4  ldrb w26,[x8, #0x5e]
7101dfd8a8  ldrh w28,[x8, #0x90]
7101dfd8ac  ldr w8,[sp, #0x2c]
7101dfd8b0  str w22,[sp, #0x8]
7101dfd8b4  cbz w8,0x7101dfd908
7101dfd8b8  ldr x8,[sp, #0x18]
7101dfd8bc  ldr x9,[x8, #0x1d8]
7101dfd8c0  add x8,x9,x25, LSL #0x1
7101dfd8c4  ldrh w10,[x8, #0x60]
7101dfd8c8  ldp x8,x11,[x9, #0x20]
7101dfd8cc  sub x11,x11,x8
7101dfd8d0  lsr x11,x11,#0x6
7101dfd8d4  mov w12,#0xcccd
7101dfd8d8  movk w12,#0xcccc, LSL #16
7101dfd8dc  mul w11,w11,w12
7101dfd8e0  cmp w11,w10
7101dfd8e4  b.ls 0x7101dfd908
7101dfd8e8  add x9,x9,x10, LSL #0x1
7101dfd8ec  ldrh w9,[x9, #0x1000]
7101dfd8f0  cmp w11,w9
7101dfd8f4  b.ls 0x7101dfd908
7101dfd8f8  mov w10,#0x140
7101dfd8fc  mul x9,x9,x10
7101dfd900  ldrh w8,[x8, x9, LSL #0x0]
7101dfd904  b 0x7101dfd90c
7101dfd908  orr w8,wzr,#0xffff
7101dfd90c  ldr x9,[sp, #0x30]
7101dfd910  ldrh w22,[x9, #0x10]
7101dfd914  ldur x9,[x29, #-0x58]
7101dfd918  cmp w28,#0x0
7101dfd91c  adrp x1,0x7104292000
7101dfd920  add x1,x1,#0x272
7101dfd924  mov x0,x19
7101dfd928  ldrh w9,[x9, #0x6a]
7101dfd92c  str w8,[sp, #0x2c]
7101dfd930  cset w8,ne
7101dfd934  cmp w26,#0x0
7101dfd938  cset w24,eq
7101dfd93c  tst w24,w8
7101dfd940  add x8,sp,#0x38
7101dfd944  csel w23,w28,w9,ne
7101dfd948  bl 0x7103776640
7101dfd94c  ldr w8,[x20, #0x260]
7101dfd950  cmp w8,#0xe
7101dfd954  cset w8,eq
7101dfd958  and w3,w8,w24
7101dfd95c  add x2,sp,#0x38
7101dfd960  mov w0,w23
7101dfd964  mov x1,x20
7101dfd968  bl 0x7101dfe5a0
7101dfd96c  ldr x25,[sp, #0x40]
7101dfd970  mov w24,w0
7101dfd974  adrp x8,0x710523d000
7101dfd978  add x8,x8,#0x988
7101dfd97c  stp x8,xzr,[sp, #0x38]
7101dfd980  cbz x25,0x7101dfd99c
7101dfd984  ldr x0,[x25, #0x18]
7101dfd988  stp x27,xzr,[x25, #0x10]
7101dfd98c  cbz x0,0x7101dfd994
7101dfd990  bl 0x710392eb40
7101dfd994  mov x0,x25
7101dfd998  bl 0x710392eb40
7101dfd99c  tbz w24,#0x0,0x7101dfda20
7101dfd9a0  adrp x1,0x71042a3000
7101dfd9a4  add x1,x1,#0x598
7101dfd9a8  sub x8,x29,#0x70
7101dfd9ac  mov x0,x19
7101dfd9b0  bl 0x7103776640
7101dfd9b4  ldur x23,[x29, #-0x68]
7101dfd9b8  fmov s0,0x3f800000
7101dfd9bc  adrp x1,0x71043cd000
7101dfd9c0  add x1,x1,#0x335
7101dfd9c4  mov x0,x23
7101dfd9c8  bl 0x7103778300
7101dfd9cc  ldr x8,[x23, #0x8]
7101dfd9d0  cbz x8,0x7101dfd9e8
7101dfd9d4  ldr x8,[x8, #0x18]
7101dfd9d8  cbz x8,0x7101dfd9e8
7101dfd9dc  ldrb w9,[x8, #0x58]
7101dfd9e0  and w9,w9,#0xfe
7101dfd9e4  strb w9,[x8, #0x58]
7101dfd9e8  adrp x8,0x710523d000
7101dfd9ec  add x8,x8,#0x988
7101dfd9f0  stp x8,xzr,[x29, #-0x70]
7101dfd9f4  cbz x23,0x7101dfda10
7101dfd9f8  ldr x0,[x23, #0x18]
7101dfd9fc  stp x27,xzr,[x23, #0x10]
7101dfda00  cbz x0,0x7101dfda08
7101dfda04  bl 0x710392eb40
7101dfda08  mov x0,x23
7101dfda0c  bl 0x710392eb40
7101dfda10  ldr x0,[x19, #0x8]
7101dfda14  adrp x1,0x7104455000
7101dfda18  add x1,x1,#0x80
7101dfda1c  b 0x7101dfdaa8
7101dfda20  cmp w26,#0x1
7101dfda24  adrp x1,0x71042a3000
7101dfda28  add x1,x1,#0x598
7101dfda2c  sub x8,x29,#0x70
7101dfda30  mov x0,x19
7101dfda34  cset w24,eq
7101dfda38  bl 0x7103776640
7101dfda3c  ldr w8,[x20, #0x260]
7101dfda40  cmp w8,#0x10
7101dfda44  cset w8,eq
7101dfda48  and w3,w8,w24
7101dfda4c  sub x2,x29,#0x70
7101dfda50  mov w0,w23
7101dfda54  mov x1,x20
7101dfda58  bl 0x7101dfe5a0
7101dfda5c  ldur x24,[x29, #-0x68]
7101dfda60  mov w23,w0
7101dfda64  adrp x8,0x710523d000
7101dfda68  add x8,x8,#0x988
7101dfda6c  stp x8,xzr,[x29, #-0x70]
7101dfda70  cbz x24,0x7101dfda8c
7101dfda74  ldr x0,[x24, #0x18]
7101dfda78  stp x27,xzr,[x24, #0x10]
7101dfda7c  cbz x0,0x7101dfda84
7101dfda80  bl 0x710392eb40
7101dfda84  mov x0,x24
7101dfda88  bl 0x710392eb40
7101dfda8c  ldr x0,[x19, #0x8]
7101dfda90  adrp x8,0x7104292000
7101dfda94  add x8,x8,#0x287
7101dfda98  adrp x9,0x71043f0000
7101dfda9c  add x9,x9,#0xe60
7101dfdaa0  tst w23,#0x1
7101dfdaa4  csel x1,x9,x8,ne
7101dfdaa8  fmov s0,0x3f800000
7101dfdaac  bl 0x7103778300
7101dfdab0  ldur x8,[x29, #-0x58]
7101dfdab4  ldrh w23,[x8, #0x6a]
7101dfdab8  adrp x1,0x7104401000
7101dfdabc  add x1,x1,#0xaa2
7101dfdac0  add x8,sp,#0x38
7101dfdac4  mov x0,x19
7101dfdac8  bl 0x7103776640
7101dfdacc  cbz x23,0x7101dfdb08
7101dfdad0  ldr w8,[x20, #0x2ac]
7101dfdad4  cmp w8,#0x3
7101dfdad8  b.ne 0x7101dfdb08
7101dfdadc  ldr x10,[x20, #0x238]
7101dfdae0  cbz x10,0x7101dfdba8
7101dfdae4  sub x11,x10,#0x1
7101dfdae8  ands x12,x11,x10
7101dfdaec  b.eq 0x7101dfdb18
7101dfdaf0  cmp x10,x23
7101dfdaf4  mov x9,x23
7101dfdaf8  b.hi 0x7101dfdb1c
7101dfdafc  udiv x8,x23,x10
7101dfdb00  msub x9,x8,x10,x23
7101dfdb04  b 0x7101dfdb1c
7101dfdb08  ldr x23,[sp, #0x40]
7101dfdb0c  adrp x1,0x71043cd000
7101dfdb10  add x1,x1,#0x335
7101dfdb14  b 0x7101dfdbc8
7101dfdb18  and x9,x11,x23
7101dfdb1c  ldr x8,[x20, #0x230]
7101dfdb20  ldr x8,[x8, x9, LSL #0x3]
7101dfdb24  cbz x8,0x7101dfdbac
7101dfdb28  ldr x8,[x8]
7101dfdb2c  cbz x8,0x7101dfdbac
7101dfdb30  cbz x12,0x7101dfdb74
7101dfdb34  ldr x11,[x8, #0x8]
7101dfdb38  cmp x11,x23
7101dfdb3c  b.ne 0x7101dfdb50
7101dfdb40  ldrh w11,[x8, #0x10]
7101dfdb44  cmp w11,w23
7101dfdb48  b.ne 0x7101dfdb68
7101dfdb4c  b 0x7101dfdbac
7101dfdb50  cmp x11,x10
7101dfdb54  b.cc 0x7101dfdb60
7101dfdb58  udiv x12,x11,x10
7101dfdb5c  msub x11,x12,x10,x11
7101dfdb60  cmp x11,x9
7101dfdb64  b.ne 0x7101dfdba8
7101dfdb68  ldr x8,[x8]
7101dfdb6c  cbnz x8,0x7101dfdb34
7101dfdb70  b 0x7101dfdbac
7101dfdb74  ldr x10,[x8, #0x8]
7101dfdb78  and x12,x10,x11
7101dfdb7c  cmp x10,x23
7101dfdb80  ccmp x12,x9,#0x4,ne
7101dfdb84  b.ne 0x7101dfdba8
7101dfdb88  cmp x10,x23
7101dfdb8c  b.ne 0x7101dfdb9c
7101dfdb90  ldrh w10,[x8, #0x10]
7101dfdb94  cmp w10,w23
7101dfdb98  b.eq 0x7101dfdbac
7101dfdb9c  ldr x8,[x8]
7101dfdba0  cbnz x8,0x7101dfdb74
7101dfdba4  b 0x7101dfdbac
7101dfdba8  mov x8,xzr
7101dfdbac  ldr x23,[sp, #0x40]
7101dfdbb0  cmp x8,#0x0
7101dfdbb4  adrp x8,0x7104292000
7101dfdbb8  add x8,x8,#0x57e
7101dfdbbc  adrp x9,0x71043cd000
7101dfdbc0  add x9,x9,#0x335
7101dfdbc4  csel x1,x9,x8,eq
7101dfdbc8  fmov s0,0x3f800000
7101dfdbcc  mov x0,x23
7101dfdbd0  bl 0x7103778300
7101dfdbd4  adrp x8,0x710523d000
7101dfdbd8  add x8,x8,#0x988
7101dfdbdc  stp x8,xzr,[sp, #0x38]
7101dfdbe0  cbz x23,0x7101dfdbfc
7101dfdbe4  ldr x0,[x23, #0x18]
7101dfdbe8  stp x27,xzr,[x23, #0x10]
7101dfdbec  cbz x0,0x7101dfdbf4
7101dfdbf0  bl 0x710392eb40
7101dfdbf4  mov x0,x23
7101dfdbf8  bl 0x710392eb40
7101dfdbfc  ldr x8,[sp, #0x30]
7101dfdc00  ldrh w24,[x8, #0x10]
7101dfdc04  adrp x1,0x7104327000
7101dfdc08  add x1,x1,#0xe94
7101dfdc0c  sub x8,x29,#0x70
7101dfdc10  mov x0,x19
7101dfdc14  bl 0x7103776640
7101dfdc18  ldur x23,[x29, #-0x68]
7101dfdc1c  cbz w26,0x7101dfde58
7101dfdc20  adrp x1,0x71043cd000
7101dfdc24  add x1,x1,#0x335
7101dfdc28  fmov s8,0x3f800000
7101dfdc2c  mov v0.16B,v8.16B
7101dfdc30  mov x0,x23
7101dfdc34  bl 0x7103778300
7101dfdc38  ldr x0,[x19, #0x8]
7101dfdc3c  mov v0.16B,v8.16B
7101dfdc40  adrp x1,0x71043e0000
7101dfdc44  add x1,x1,#0x6a3
7101dfdc48  bl 0x7103778300
7101dfdc4c  adrp x8,0x710523d000
7101dfdc50  add x8,x8,#0x988
7101dfdc54  stp x8,xzr,[x29, #-0x70]
7101dfdc58  cbz x23,0x7101dfdc74
7101dfdc5c  ldr x0,[x23, #0x18]
7101dfdc60  stp x27,xzr,[x23, #0x10]
7101dfdc64  cbz x0,0x7101dfdc6c
7101dfdc68  bl 0x710392eb40
7101dfdc6c  mov x0,x23
7101dfdc70  bl 0x710392eb40
7101dfdc74  ldr w8,[x20, #0x2ac]
7101dfdc78  cmp w22,#0x63
7101dfdc7c  b.cc 0x7101dfdc90
7101dfdc80  cmp w8,#0x9
7101dfdc84  b.ne 0x7101dfdc90
7101dfdc88  mov w24,#0x1
7101dfdc8c  b 0x7101dfdcfc
7101dfdc90  ldp w10,w9,[sp, #0xc]
7101dfdc94  bic w9,w10,w9
7101dfdc98  ldr w10,[sp, #0x20]
7101dfdc9c  and w9,w10,w9
7101dfdca0  ldr w10,[sp, #0x8]
7101dfdca4  ldr w12,[sp, #0x2c]
7101dfdca8  ldr w14,[x20, #0x260]
7101dfdcac  cmp w22,#0x63
7101dfdcb0  orr w11,wzr,#0xffff
7101dfdcb4  orr w9,w10,w9
7101dfdcb8  cset w10,cc
7101dfdcbc  cmp w12,w11
7101dfdcc0  cset w11,ne
7101dfdcc4  cset w12,eq
7101dfdcc8  cmp w28,#0x0
7101dfdccc  cset w13,eq
7101dfdcd0  cmp w14,#0x16
7101dfdcd4  cset w14,eq
7101dfdcd8  cmp w8,#0x5
7101dfdcdc  cset w8,ne
7101dfdce0  and w12,w12,w14
7101dfdce4  orr w8,w10,w8
7101dfdce8  and w12,w13,w12
7101dfdcec  orr w8,w11,w8
7101dfdcf0  orr w9,w9,w12
7101dfdcf4  eor w8,w8,#0x1
7101dfdcf8  orr w24,w9,w8
7101dfdcfc  ldr x23,[sp, #0x30]
7101dfdd00  ldrh w22,[x23, #0x10]
7101dfdd04  adrp x1,0x71042c5000
7101dfdd08  add x1,x1,#0x401
7101dfdd0c  sub x8,x29,#0x70
7101dfdd10  mov x0,x19
7101dfdd14  bl 0x7103776910
7101dfdd18  cbz w26,0x7101dfde7c
7101dfdd1c  ldur x22,[x29, #-0x68]
7101dfdd20  ldr x0,[x22, #0x10]
7101dfdd24  cbz x0,0x7101dfdd3c
7101dfdd28  add x1,sp,#0x38
7101dfdd2c  mov w2,wzr
7101dfdd30  mov w3,wzr
7101dfdd34  str wzr,[sp, #0x38]
7101dfdd38  bl 0x71037a2270
7101dfdd3c  ldr x8,[x22]
7101dfdd40  cbz x8,0x7101dfdd50
7101dfdd44  ldrb w9,[x8, #0x58]
7101dfdd48  and w9,w9,#0xfe
7101dfdd4c  strb w9,[x8, #0x58]
7101dfdd50  stp x27,xzr,[x29, #-0x70]
7101dfdd54  mov x0,x22
7101dfdd58  bl 0x710392eb40
7101dfdd5c  ldrb w22,[x23, #0x3e]
7101dfdd60  adrp x1,0x7104443000
7101dfdd64  add x1,x1,#0xd28
7101dfdd68  add x8,sp,#0x38
7101dfdd6c  mov x0,x19
7101dfdd70  bl 0x7103776640
7101dfdd74  fmov s8,0x3f800000
7101dfdd78  tst w22,#0x1
7101dfdd7c  ldr x22,[sp, #0x40]
7101dfdd80  adrp x8,0x7104292000
7101dfdd84  add x8,x8,#0x57e
7101dfdd88  adrp x9,0x71043cd000
7101dfdd8c  add x9,x9,#0x335
7101dfdd90  csel x1,x8,x9,ne
7101dfdd94  adrp x8,0x71042d6000
7101dfdd98  add x8,x8,#0x840
7101dfdd9c  mov v0.16B,v8.16B
7101dfdda0  adrp x9,0x710425f000
7101dfdda4  add x9,x9,#0x9ac
7101dfdda8  mov x0,x22
7101dfddac  csel x23,x9,x8,ne
7101dfddb0  bl 0x7103778300
7101dfddb4  ldr x0,[x19, #0x8]
7101dfddb8  mov v0.16B,v8.16B
7101dfddbc  mov x1,x23
7101dfddc0  bl 0x7103778300
7101dfddc4  adrp x8,0x710523d000
7101dfddc8  add x8,x8,#0x988
7101dfddcc  stp x8,xzr,[sp, #0x38]
7101dfddd0  cbz x22,0x7101dfddec
7101dfddd4  ldr x0,[x22, #0x18]
7101dfddd8  stp x27,xzr,[x22, #0x10]
7101dfdddc  cbz x0,0x7101dfdde4
7101dfdde0  bl 0x710392eb40
7101dfdde4  mov x0,x22
7101dfdde8  bl 0x710392eb40
7101dfddec  cbz w26,0x7101dfdf0c
7101dfddf0  cmp w26,#0x1
7101dfddf4  b.ne 0x7101dfe070
7101dfddf8  adrp x8,0x710532f000
7101dfddfc  ldr x8,[x8, #0x730]
7101dfde00  ldr x8,[x8, #0x8]
7101dfde04  ldr x0,[x8, #0x218]
7101dfde08  ldur x8,[x29, #-0x58]
7101dfde0c  ldrh w1,[x8, #0x6a]
7101dfde10  bl 0x71032a0fd0
7101dfde14  sub w8,w0,#0x1
7101dfde18  and w8,w8,#0xff
7101dfde1c  mov w22,w0
7101dfde20  cmp w8,#0x2
7101dfde24  b.hi 0x7101dfdf58
7101dfde28  and w22,w22,#0xff
7101dfde2c  adrp x0,0x710437c000
7101dfde30  add x0,x0,#0xacd
7101dfde34  add x8,sp,#0x38
7101dfde38  mov w1,w22
7101dfde3c  add x23,sp,#0x38
7101dfde40  bl 0x71003a4ca0
7101dfde44  ldr x0,[x19, #0x8]
7101dfde48  fmov s0,0x3f800000
7101dfde4c  add x1,x23,#0x8
7101dfde50  bl 0x7103778300
7101dfde54  b 0x7101dfdf70
7101dfde58  ldr w9,[sp, #0x2c]
7101dfde5c  orr w8,wzr,#0xffff
7101dfde60  cmp w9,w8
7101dfde64  b.eq 0x7101dfe178
7101dfde68  cmp w24,#0x63
7101dfde6c  b.cc 0x7101dfe188
7101dfde70  adrp x1,0x7104455000
7101dfde74  add x1,x1,#0x10
7101dfde78  b 0x7101dfdc28
7101dfde7c  ldr w8,[x20, #0x260]
7101dfde80  cmp w8,#0xb
7101dfde84  b.eq 0x7101dfe2f0
7101dfde88  cmp w8,#0xa
7101dfde8c  b.eq 0x7101dfe288
7101dfde90  cmp w8,#0x9
7101dfde94  b.ne 0x7101dfdd1c
7101dfde98  ldr x0,[x19, #0x8]
7101dfde9c  fmov s0,0x3f800000
7101dfdea0  adrp x1,0x71043e0000
7101dfdea4  add x1,x1,#0x745
7101dfdea8  bl 0x7103778300
7101dfdeac  mov w8,#0x1
7101dfdeb0  str x8,[sp, #0x38]
7101dfdeb4  mov x8,#0xff0000000000
7101dfdeb8  movk x8,#0x52ff, LSL #48
7101dfdebc  add x0,sp,#0x38
7101dfdec0  mov x1,x21
7101dfdec4  mov w2,w22
7101dfdec8  strb wzr,[sp, #0x40]
7101dfdecc  stur xzr,[sp, #0x44]
7101dfded0  str x8,[sp, #0x50]
7101dfded4  str wzr,[sp, #0x58]
7101dfded8  bl 0x71025ca840
7101dfdedc  add x0,sp,#0x38
7101dfdee0  bl 0x71025cb8d0
7101dfdee4  ldur x22,[x29, #-0x68]
7101dfdee8  ldr x8,[x22]
7101dfdeec  mov w3,w0
7101dfdef0  cbz x8,0x7101dfdf00
7101dfdef4  ldrb w9,[x8, #0x58]
7101dfdef8  orr w9,w9,#0x1
7101dfdefc  strb w9,[x8, #0x58]
7101dfdf00  adrp x1,0x71043ff000
7101dfdf04  add x1,x1,#0x11e
7101dfdf08  b 0x7101dfe354
7101dfdf0c  ldur x8,[x29, #-0x58]
7101dfdf10  ldrb w1,[x8, #0x69]
7101dfdf14  sub w8,w1,#0x1
7101dfdf18  cmp w8,#0x2
7101dfdf1c  b.hi 0x7101dfdf40
7101dfdf20  adrp x0,0x710424f000
7101dfdf24  add x0,x0,#0xa8f
7101dfdf28  add x8,sp,#0x38
7101dfdf2c  add x22,sp,#0x38
7101dfdf30  bl 0x71003a4ca0
7101dfdf34  ldr x0,[x19, #0x8]
7101dfdf38  add x1,x22,#0x8
7101dfdf3c  b 0x7101dfdf4c
7101dfdf40  ldr x0,[x19, #0x8]
7101dfdf44  adrp x1,0x710432a000
7101dfdf48  add x1,x1,#0x5ee
7101dfdf4c  fmov s0,0x3f800000
7101dfdf50  bl 0x7103778300
7101dfdf54  b 0x7101dfe070
7101dfdf58  ldr x0,[x19, #0x8]
7101dfdf5c  fmov s0,0x3f800000
7101dfdf60  adrp x1,0x710433a000
7101dfdf64  add x1,x1,#0x681
7101dfdf68  bl 0x7103778300
7101dfdf6c  and w22,w22,#0xff
7101dfdf70  ldr w8,[x20, #0x2a4]
7101dfdf74  cmp w8,w22
7101dfdf78  b.cs 0x7101dfe070
7101dfdf7c  mov x0,x20
7101dfdf80  mov x1,x19
7101dfdf84  mov x2,x21
7101dfdf88  bl 0x7101dfe430
7101dfdf8c  mov w0,#0x10
7101dfdf90  mov w1,#0x8
7101dfdf94  bl 0x710392e290
7101dfdf98  mov x20,x0
7101dfdf9c  cbnz x0,0x7101dfdfe8
7101dfdfa0  adrp x8,0x7105332000
7101dfdfa4  ldr x0,[x8, #0xf00]
7101dfdfa8  cbz x0,0x7101dfdfe4
7101dfdfac  mov w8,#0x8
7101dfdfb0  stur wzr,[x29, #-0x70]
7101dfdfb4  sub x1,x29,#0x70
7101dfdfb8  str x8,[sp, #0x38]
7101dfdfbc  ldr x8,[x0]
7101dfdfc0  ldr x8,[x8, #0x30]
7101dfdfc4  add x2,sp,#0x38
7101dfdfc8  blr x8
7101dfdfcc  tbz w0,#0x0,0x7101dfdfe4
7101dfdfd0  mov w0,#0x10
7101dfdfd4  mov w1,#0x8
7101dfdfd8  bl 0x710392e290
7101dfdfdc  mov x20,x0
7101dfdfe0  cbnz x0,0x7101dfdfe8
7101dfdfe4  mov x20,xzr
7101dfdfe8  str xzr,[x20]
7101dfdfec  ldr x8,[x19, #0x8]
7101dfdff0  ldr x8,[x8, #0x8]
7101dfdff4  cbz x8,0x7101dfe1ac
7101dfdff8  ldr x0,[x8, #0x60]
7101dfdffc  cbz x0,0x7101dfe1ac
7101dfe000  ldr x8,[x8, #0x18]
7101dfe004  add x1,x8,#0xb0
7101dfe008  bl 0x7103796f20
7101dfe00c  str x0,[x20]
7101dfe010  cbz x0,0x7101dfe1b0
7101dfe014  ldr x8,[x0]
7101dfe018  ldr x8,[x8, #0x1f8]
7101dfe01c  mov w1,#0x1
7101dfe020  mov x21,x0
7101dfe024  mov w22,#0x1
7101dfe028  blr x8
7101dfe02c  ldr x8,[x21]
7101dfe030  ldr x8,[x8, #0x200]
7101dfe034  mov x0,x21
7101dfe038  blr x8
7101dfe03c  tbz w0,#0x0,0x7101dfe054
7101dfe040  ldr x8,[x21]
7101dfe044  ldr x8,[x8, #0x210]
7101dfe048  mov x0,x21
7101dfe04c  blr x8
7101dfe050  eor w22,w0,#0x1
7101dfe054  ldr x8,[x21]
7101dfe058  ldr x8,[x8, #0x388]
7101dfe05c  and w1,w22,#0x1
7101dfe060  mov x0,x21
7101dfe064  mov w2,wzr
7101dfe068  blr x8
7101dfe06c  b 0x7101dfe1b0
7101dfe070  mov x0,x20
7101dfe074  mov x1,x19
7101dfe078  mov x2,x21
7101dfe07c  bl 0x7101dfe430
7101dfe080  mov w0,#0x10
7101dfe084  mov w1,#0x8
7101dfe088  bl 0x710392e290
7101dfe08c  mov x20,x0
7101dfe090  cbnz x0,0x7101dfe0dc
7101dfe094  adrp x8,0x7105332000
7101dfe098  ldr x0,[x8, #0xf00]
7101dfe09c  cbz x0,0x7101dfe0d8
7101dfe0a0  mov w8,#0x8
7101dfe0a4  stur wzr,[x29, #-0x70]
7101dfe0a8  sub x1,x29,#0x70
7101dfe0ac  str x8,[sp, #0x38]
7101dfe0b0  ldr x8,[x0]
7101dfe0b4  ldr x8,[x8, #0x30]
7101dfe0b8  add x2,sp,#0x38
7101dfe0bc  blr x8
7101dfe0c0  tbz w0,#0x0,0x7101dfe0d8
7101dfe0c4  mov w0,#0x10
7101dfe0c8  mov w1,#0x8
7101dfe0cc  bl 0x710392e290
7101dfe0d0  mov x20,x0
7101dfe0d4  cbnz x0,0x7101dfe0dc
7101dfe0d8  mov x20,xzr
7101dfe0dc  str xzr,[x20]
7101dfe0e0  ldr x8,[x19, #0x8]
7101dfe0e4  ldr x8,[x8, #0x8]
7101dfe0e8  cbz x8,0x7101dfe164
7101dfe0ec  ldr x0,[x8, #0x60]
7101dfe0f0  cbz x0,0x7101dfe164
7101dfe0f4  ldr x8,[x8, #0x18]
7101dfe0f8  add x1,x8,#0xb0
7101dfe0fc  bl 0x7103796f20
7101dfe100  str x0,[x20]
7101dfe104  cbz x0,0x7101dfe168
7101dfe108  ldr x8,[x0]
7101dfe10c  ldr x8,[x8, #0x1f8]
7101dfe110  mov w1,#0x1
7101dfe114  mov x21,x0
7101dfe118  mov w22,#0x1
7101dfe11c  blr x8
7101dfe120  ldr x8,[x21]
7101dfe124  ldr x8,[x8, #0x200]
7101dfe128  mov x0,x21
7101dfe12c  blr x8
7101dfe130  tbz w0,#0x0,0x7101dfe148
7101dfe134  ldr x8,[x21]
7101dfe138  ldr x8,[x8, #0x210]
7101dfe13c  mov x0,x21
7101dfe140  blr x8
7101dfe144  eor w22,w0,#0x1
7101dfe148  ldr x8,[x21]
7101dfe14c  ldr x8,[x8, #0x388]
7101dfe150  and w1,w22,#0x1
7101dfe154  mov x0,x21
7101dfe158  mov w2,wzr
7101dfe15c  blr x8
7101dfe160  b 0x7101dfe168
7101dfe164  str xzr,[x20]
7101dfe168  mov x0,x20
7101dfe16c  bl 0x710392eb40
7101dfe170  tbnz w24,#0x0,0x7101dfe1b8
7101dfe174  b 0x7101dfe264
7101dfe178  cbz w28,0x7101dfe36c
7101dfe17c  adrp x1,0x7104463000
7101dfe180  add x1,x1,#0x92a
7101dfe184  b 0x7101dfe374
7101dfe188  fmov s8,0x3f800000
7101dfe18c  mov v0.16B,v8.16B
7101dfe190  adrp x1,0x710437a000
7101dfe194  add x1,x1,#0x53a
7101dfe198  mov x0,x23
7101dfe19c  bl 0x7103778300
7101dfe1a0  ldr x0,[x19, #0x8]
7101dfe1a4  mov v0.16B,v8.16B
7101dfe1a8  b 0x7101dfe3ac
7101dfe1ac  str xzr,[x20]
7101dfe1b0  mov x0,x20
7101dfe1b4  bl 0x710392eb40
7101dfe1b8  mov w0,#0x10
7101dfe1bc  mov w1,#0x8
7101dfe1c0  bl 0x710392e290
7101dfe1c4  mov x20,x0
7101dfe1c8  cbnz x0,0x7101dfe214
7101dfe1cc  adrp x8,0x7105332000
7101dfe1d0  ldr x0,[x8, #0xf00]
7101dfe1d4  cbz x0,0x7101dfe210
7101dfe1d8  mov w8,#0x8
7101dfe1dc  stur wzr,[x29, #-0x70]
7101dfe1e0  sub x1,x29,#0x70
7101dfe1e4  str x8,[sp, #0x38]
7101dfe1e8  ldr x8,[x0]
7101dfe1ec  ldr x8,[x8, #0x30]
7101dfe1f0  add x2,sp,#0x38
7101dfe1f4  blr x8
7101dfe1f8  tbz w0,#0x0,0x7101dfe210
7101dfe1fc  mov w0,#0x10
7101dfe200  mov w1,#0x8
7101dfe204  bl 0x710392e290
7101dfe208  mov x20,x0
7101dfe20c  cbnz x0,0x7101dfe214
7101dfe210  mov x20,xzr
7101dfe214  str xzr,[x20]
7101dfe218  ldr x8,[x19, #0x8]
7101dfe21c  ldr x8,[x8, #0x8]
7101dfe220  cbz x8,0x7101dfe258
7101dfe224  ldr x0,[x8, #0x60]
7101dfe228  cbz x0,0x7101dfe258
7101dfe22c  ldr x8,[x8, #0x18]
7101dfe230  add x1,x8,#0xb0
7101dfe234  bl 0x7103796f20
7101dfe238  str x0,[x20]
7101dfe23c  cbz x0,0x7101dfe25c
7101dfe240  ldr x8,[x0]
7101dfe244  ldr x8,[x8, #0x388]
7101dfe248  mov w1,#0x1
7101dfe24c  mov w2,wzr
7101dfe250  blr x8
7101dfe254  b 0x7101dfe25c
7101dfe258  str xzr,[x20]
7101dfe25c  mov x0,x20
7101dfe260  bl 0x710392eb40
7101dfe264  ldr d8,[sp, #0x90]
7101dfe268  ldp x29,x30,[sp, #0xf0]
7101dfe26c  ldp x20,x19,[sp, #0xe0]
7101dfe270  ldp x22,x21,[sp, #0xd0]
7101dfe274  ldp x24,x23,[sp, #0xc0]
7101dfe278  ldp x26,x25,[sp, #0xb0]
7101dfe27c  ldp x28,x27,[sp, #0xa0]
7101dfe280  add sp,sp,#0x100
7101dfe284  ret
7101dfe288  ldr x0,[x19, #0x8]
7101dfe28c  fmov s0,0x3f800000
7101dfe290  adrp x1,0x7104401000
7101dfe294  add x1,x1,#0xab9
7101dfe298  bl 0x7103778300
7101dfe29c  mov x8,#0xff0000000000
7101dfe2a0  movk x8,#0x52ff, LSL #48
7101dfe2a4  add x0,sp,#0x38
7101dfe2a8  mov x1,x21
7101dfe2ac  mov w2,w22
7101dfe2b0  strb wzr,[sp, #0x38]
7101dfe2b4  stur xzr,[sp, #0x3c]
7101dfe2b8  stp x8,xzr,[sp, #0x48]
7101dfe2bc  strh wzr,[sp, #0x58]
7101dfe2c0  bl 0x71025caab0
7101dfe2c4  ldr s0,[sp, #0x3c]
7101dfe2c8  fcvtzu w3,s0
7101dfe2cc  ldur x22,[x29, #-0x68]
7101dfe2d0  ldr x8,[x22]
7101dfe2d4  cbz x8,0x7101dfe2e4
7101dfe2d8  ldrb w9,[x8, #0x58]
7101dfe2dc  orr w9,w9,#0x1
7101dfe2e0  strb w9,[x8, #0x58]
7101dfe2e4  adrp x1,0x7104412000
7101dfe2e8  add x1,x1,#0xe94
7101dfe2ec  b 0x7101dfe354
7101dfe2f0  ldr x0,[x19, #0x8]
7101dfe2f4  fmov s0,0x3f800000
7101dfe2f8  adrp x1,0x7104412000
7101dfe2fc  add x1,x1,#0xeb0
7101dfe300  bl 0x7103778300
7101dfe304  mov x8,#0xff0000000000
7101dfe308  movk x8,#0x52ff, LSL #48
7101dfe30c  add x0,sp,#0x38
7101dfe310  mov x1,x21
7101dfe314  mov w2,w22
7101dfe318  strb wzr,[sp, #0x38]
7101dfe31c  stur xzr,[sp, #0x3c]
7101dfe320  stp x8,xzr,[sp, #0x48]
7101dfe324  strh wzr,[sp, #0x58]
7101dfe328  bl 0x71025caab0
7101dfe32c  ldr s0,[sp, #0x40]
7101dfe330  fcvtzu w3,s0
7101dfe334  ldur x22,[x29, #-0x68]
7101dfe338  ldr x8,[x22]
7101dfe33c  cbz x8,0x7101dfe34c
7101dfe340  ldrb w9,[x8, #0x58]
7101dfe344  orr w9,w9,#0x1
7101dfe348  strb w9,[x8, #0x58]
7101dfe34c  adrp x1,0x7104292000
7101dfe350  add x1,x1,#0x297
7101dfe354  sub x0,x29,#0x70
7101dfe358  mov w2,#0x1
7101dfe35c  bl 0x710377a280
7101dfe360  stp x27,xzr,[x29, #-0x70]
7101dfe364  cbnz x22,0x7101dfdd54
7101dfe368  b 0x7101dfdd5c
7101dfe36c  adrp x1,0x71043cd000
7101dfe370  add x1,x1,#0x335
7101dfe374  fmov s0,0x3f800000
7101dfe378  mov x0,x23
7101dfe37c  bl 0x7103778300
7101dfe380  ldr x0,[x19, #0x8]
7101dfe384  cmp w24,#0x63
7101dfe388  b.cc 0x7101dfe3a8
7101dfe38c  fmov s0,0x3f800000
7101dfe390  adrp x1,0x7104306000
7101dfe394  add x1,x1,#0x3a8
7101dfe398  bl 0x7103778300
7101dfe39c  adrp x1,0x7104306000
7101dfe3a0  add x1,x1,#0x396
7101dfe3a4  b 0x7101dfe3c0
7101dfe3a8  fmov s0,0x3f800000
7101dfe3ac  adrp x1,0x71042a0000
7101dfe3b0  add x1,x1,#0xe51
7101dfe3b4  bl 0x7103778300
7101dfe3b8  adrp x1,0x710438d000
7101dfe3bc  add x1,x1,#0x369
7101dfe3c0  add x8,sp,#0x38
7101dfe3c4  mov x0,x19
7101dfe3c8  bl 0x7103776910
7101dfe3cc  adrp x1,0x71042e4000
7101dfe3d0  add x1,x1,#0xfdc
7101dfe3d4  add x0,sp,#0x38
7101dfe3d8  mov w2,#0x1
7101dfe3dc  mov w3,w24
7101dfe3e0  bl 0x710377a280
7101dfe3e4  ldr x0,[sp, #0x40]
7101dfe3e8  stp x27,xzr,[sp, #0x38]
7101dfe3ec  cbz x0,0x7101dfdc4c
7101dfe3f0  bl 0x710392eb40
7101dfe3f4  b 0x7101dfdc4c
7101dfe3f8  add x0,x20,#0x1e0
7101dfe3fc  bl 0x71039c1330
