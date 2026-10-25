// addr:      7101efc970
// offset:    0x1efc970
// name:      FUN_7101efc970
// mangled:   
// size:      3972

7101efc970  sub sp,sp,#0x90
7101efc974  stp x28,x27,[sp, #0x30]
7101efc978  stp x26,x25,[sp, #0x40]
7101efc97c  stp x24,x23,[sp, #0x50]
7101efc980  stp x22,x21,[sp, #0x60]
7101efc984  stp x20,x19,[sp, #0x70]
7101efc988  stp x29,x30,[sp, #0x80]
7101efc98c  add x29,sp,#0x80
7101efc990  ldr w8,[x0, #0x1fc]
7101efc994  mov x26,x0
7101efc998  str x0,[sp, #0x18]
7101efc99c  cbz w8,0x7101efca14
7101efc9a0  ldr x8,[x26, #0x230]
7101efc9a4  ldr x9,[x26, #0x238]
7101efc9a8  cmp x8,x9
7101efc9ac  b.eq 0x7101efcc44
7101efc9b0  sub x9,x9,#0x10
7101efc9b4  sub x9,x9,x8
7101efc9b8  lsr x9,x9,#0x4
7101efc9bc  add w10,w9,#0x1
7101efc9c0  and x10,x10,#0x1
7101efc9c4  cbz x9,0x7101efcc20
7101efc9c8  sub x11,x10,#0x1
7101efc9cc  sub x11,x11,x9
7101efc9d0  mov w9,#0x1
7101efc9d4  ldr x12,[x8]
7101efc9d8  ldr x13,[x8, #0x10]
7101efc9dc  add x8,x8,#0x20
7101efc9e0  ldr x12,[x12]
7101efc9e4  ldr x13,[x13]
7101efc9e8  ldr w12,[x12, #0x200]
7101efc9ec  ldr w13,[x13, #0x200]
7101efc9f0  orr w12,w12,w13
7101efc9f4  cmp w12,#0x0
7101efc9f8  cset w12,eq
7101efc9fc  adds x11,x11,#0x2
7101efca00  and w9,w12,w9
7101efca04  b.ne 0x7101efc9d4
7101efca08  cbnz x10,0x7101efcc28
7101efca0c  tbnz w9,#0x0,0x7101efcc44
7101efca10  b 0x7101efd684
7101efca14  adrp x12,0x7105314000
7101efca18  add x12,x12,#0x4d8
7101efca1c  ldarb w8,[x12]
7101efca20  tbz w8,#0x0,0x7101efd6a4
7101efca24  adrp x8,0x710530a000
7101efca28  ldrb w8,[x8, #0x976]
7101efca2c  cbz w8,0x7101efcdf0
7101efca30  ldr w20,[x26]
7101efca34  cmp w20,#0x2
7101efca38  b.cs 0x7101efd8e0
7101efca3c  adrp x21,0x7105328000
7101efca40  ldr x8,[x21, #0xe18]
7101efca44  ldr x25,[x8]
7101efca48  mov w8,#0x1b8
7101efca4c  madd x8,x20,x8,x25
7101efca50  ldr w22,[x8, #0x28]
7101efca54  ldarb w8,[x12]
7101efca58  tbz w8,#0x0,0x7101efd6f4
7101efca5c  cmp w22,#0x5
7101efca60  b.cs 0x7101efd8e0
7101efca64  adrp x24,0x710530a000
7101efca68  add x24,x24,#0x9c8
7101efca6c  mov w8,#0x1428
7101efca70  add x8,x24,x8
7101efca74  cmp w20,#0x0
7101efca78  csel x8,x24,x8,eq
7101efca7c  mov w9,#0x1c8
7101efca80  madd x8,x22,x9,x8
7101efca84  mov w10,#0x1b8
7101efca88  madd x10,x20,x10,x25
7101efca8c  ldr w25,[x26]
7101efca90  ldrsh w9,[x8, #0x1b6]
7101efca94  mov w8,#0x50
7101efca98  madd x8,x22,x8,x10
7101efca9c  cmn w9,#0x1
7101efcaa0  ldr w10,[x8, #0x70]
7101efcaa4  ldr x8,[x21, #0xe18]
7101efcaa8  ldr x26,[x8]
7101efcaac  ldarb w8,[x12]
7101efcab0  sxtw x23,w22
7101efcab4  ccmp w10,#0x0,#0x4,ne
7101efcab8  b.ne 0x7101efd410
7101efcabc  tbz w8,#0x0,0x7101efd74c
7101efcac0  cmp w25,#0x2
7101efcac4  b.cs 0x7101efd8e0
7101efcac8  mov w10,#0x1b8
7101efcacc  madd x10,x25,x10,x26
7101efcad0  mov w9,#0x50
7101efcad4  madd x9,x22,x9,x10
7101efcad8  ldr w9,[x9, #0x80]
7101efcadc  ldr x19,[sp, #0x18]
7101efcae0  mov w8,#0x1428
7101efcae4  add x8,x24,x8
7101efcae8  cmp w25,#0x0
7101efcaec  csel x8,x24,x8,eq
7101efcaf0  cbz w9,0x7101efd684
7101efcaf4  mov w9,#0x1c8
7101efcaf8  madd x8,x22,x9,x8
7101efcafc  ldr w8,[x8, #0x30]
7101efcb00  cmp w8,#0x2
7101efcb04  b.ne 0x7101efd684
7101efcb08  ldr x8,[x21, #0xe18]
7101efcb0c  ldr w20,[x19]
7101efcb10  ldr x25,[x8]
7101efcb14  ldarb w8,[x12]
7101efcb18  tbz w8,#0x0,0x7101efd844
7101efcb1c  cmp w20,#0x2
7101efcb20  b.cs 0x7101efd8e0
7101efcb24  mov w8,#0x1428
7101efcb28  cmp w20,#0x0
7101efcb2c  mov w9,#0x1c8
7101efcb30  add x8,x24,x8
7101efcb34  mov w10,#0x1b8
7101efcb38  madd x10,x20,x10,x25
7101efcb3c  csel x8,x24,x8,eq
7101efcb40  madd x8,x22,x9,x8
7101efcb44  mov w11,#0x50
7101efcb48  madd x9,x22,x11,x10
7101efcb4c  ldr x10,[x21, #0xe18]
7101efcb50  ldr x25,[x10]
7101efcb54  ldr w8,[x8, #0x30]
7101efcb58  cmp w8,#0x2
7101efcb5c  ldr w9,[x9, #0x7c]
7101efcb60  ldr w20,[x19]
7101efcb64  ldarb w8,[x12]
7101efcb68  csel w21,w9,wzr,eq
7101efcb6c  tbz w8,#0x0,0x7101efd89c
7101efcb70  cmp w20,#0x2
7101efcb74  b.cs 0x7101efd8e0
7101efcb78  ldr x9,[x19, #0x238]
7101efcb7c  ldr x8,[x19, #0x230]
7101efcb80  sub x9,x9,x8
7101efcb84  asr x9,x9,#0x4
7101efcb88  cmp x9,x23
7101efcb8c  b.ls 0x7101efd8ec
7101efcb90  mov w9,#0x1428
7101efcb94  mov w10,#0x1b8
7101efcb98  cmp w20,#0x0
7101efcb9c  madd x10,x20,x10,x25
7101efcba0  add x9,x24,x9
7101efcba4  mov w11,#0x1c8
7101efcba8  csel x9,x24,x9,eq
7101efcbac  mov w12,#0x50
7101efcbb0  madd x9,x22,x11,x9
7101efcbb4  lsl x11,x23,#0x4
7101efcbb8  madd x10,x22,x12,x10
7101efcbbc  ldr w9,[x9, #0x30]
7101efcbc0  ldr x8,[x8, x11, LSL #0x0]
7101efcbc4  ldr x8,[x8]
7101efcbc8  mov w11,#0xffffffff
7101efcbcc  ldr w10,[x10, #0x80]
7101efcbd0  cmp w9,#0x2
7101efcbd4  stp xzr,xzr,[x8, #0x20]
7101efcbd8  csel w9,w10,wzr,eq
7101efcbdc  stp xzr,xzr,[x8, #0x1e8]
7101efcbe0  add w9,w9,w21
7101efcbe4  mov x12,#0x1600000000
7101efcbe8  stp xzr,xzr,[x8, #0x1c8]
7101efcbec  stp xzr,xzr,[x8, #0x1b8]
7101efcbf0  str w9,[x8, #0x26c]
7101efcbf4  mov w9,#0x1
7101efcbf8  str w21,[x8, #0x264]
7101efcbfc  str w21,[x8, #0x268]
7101efcc00  str wzr,[x8, #0x1f8]
7101efcc04  stp xzr,xzr,[x8, #0x1d8]
7101efcc08  str x12,[x8, #0x1b0]
7101efcc0c  str x11,[x8, #0x200]
7101efcc10  str w11,[x8, #0x208]
7101efcc14  strb wzr,[x8, #0x20c]
7101efcc18  str w9,[x8, #0x1fc]
7101efcc1c  b 0x7101efd684
7101efcc20  mov w9,#0x1
7101efcc24  cbz x10,0x7101efca0c
7101efcc28  ldr x8,[x8]
7101efcc2c  ldr x8,[x8]
7101efcc30  ldr w8,[x8, #0x200]
7101efcc34  cmp w8,#0x0
7101efcc38  cset w8,eq
7101efcc3c  and w8,w9,w8
7101efcc40  tbz w8,#0x0,0x7101efd684
7101efcc44  adrp x8,0x7105328000
7101efcc48  ldr x8,[x8, #0xe18]
7101efcc4c  ldr x8,[x8]
7101efcc50  ldp w9,w10,[x8, #0x6c]
7101efcc54  add w9,w9,w10
7101efcc58  stp w9,wzr,[x8, #0x6c]
7101efcc5c  ldp w9,w10,[x8, #0x7c]
7101efcc60  add w9,w9,w10
7101efcc64  stp w9,wzr,[x8, #0x7c]
7101efcc68  ldr w11,[x8, #0x120]
7101efcc6c  ldp w9,w10,[x8, #0xbc]
7101efcc70  add w9,w9,w10
7101efcc74  stp w9,wzr,[x8, #0xbc]
7101efcc78  ldp w9,w10,[x8, #0xcc]
7101efcc7c  add w9,w9,w10
7101efcc80  ldr w10,[x8, #0x10c]
7101efcc84  stp w9,wzr,[x8, #0xcc]
7101efcc88  ldr w9,[x8, #0x110]
7101efcc8c  str wzr,[x8, #0x110]
7101efcc90  add w9,w10,w9
7101efcc94  ldr w10,[x8, #0x11c]
7101efcc98  str w9,[x8, #0x10c]
7101efcc9c  ldr w9,[x8, #0x160]
7101efcca0  str wzr,[x8, #0x160]
7101efcca4  add w10,w10,w11
7101efcca8  str w10,[x8, #0x11c]
7101efccac  ldr w10,[x8, #0x15c]
7101efccb0  add w9,w10,w9
7101efccb4  ldr w10,[x8, #0x16c]
7101efccb8  str w9,[x8, #0x15c]
7101efccbc  ldr w9,[x8, #0x170]
7101efccc0  str wzr,[x8, #0x170]
7101efccc4  add w9,w10,w9
7101efccc8  ldr w10,[x8, #0x1ac]
7101efcccc  str w9,[x8, #0x16c]
7101efccd0  ldr w9,[x8, #0x1b0]
7101efccd4  str wzr,[x8, #0x1b0]
7101efccd8  add w9,w10,w9
7101efccdc  ldr w10,[x8, #0x1bc]
7101efcce0  str w9,[x8, #0x1ac]
7101efcce4  ldr w9,[x8, #0x1c0]
7101efcce8  str wzr,[x8, #0x1c0]
7101efccec  add w9,w10,w9
7101efccf0  ldr w10,[x8, #0x224]
7101efccf4  str w9,[x8, #0x1bc]
7101efccf8  ldr w9,[x8, #0x228]
7101efccfc  str wzr,[x8, #0x228]
7101efcd00  add w9,w10,w9
7101efcd04  ldr w10,[x8, #0x234]
7101efcd08  str w9,[x8, #0x224]
7101efcd0c  ldr w9,[x8, #0x238]
7101efcd10  str wzr,[x8, #0x238]
7101efcd14  add w9,w10,w9
7101efcd18  ldr w10,[x8, #0x274]
7101efcd1c  str w9,[x8, #0x234]
7101efcd20  ldr w9,[x8, #0x278]
7101efcd24  str wzr,[x8, #0x278]
7101efcd28  add w9,w10,w9
7101efcd2c  ldr w10,[x8, #0x284]
7101efcd30  str w9,[x8, #0x274]
7101efcd34  ldr w9,[x8, #0x288]
7101efcd38  str wzr,[x8, #0x288]
7101efcd3c  add w9,w10,w9
7101efcd40  ldr w10,[x8, #0x2c4]
7101efcd44  str w9,[x8, #0x284]
7101efcd48  ldr w9,[x8, #0x2c8]
7101efcd4c  str wzr,[x8, #0x2c8]
7101efcd50  add w9,w10,w9
7101efcd54  ldr w10,[x8, #0x2d4]
7101efcd58  str w9,[x8, #0x2c4]
7101efcd5c  ldr w9,[x8, #0x2d8]
7101efcd60  str wzr,[x8, #0x2d8]
7101efcd64  add w9,w10,w9
7101efcd68  ldr w10,[x8, #0x314]
7101efcd6c  str w9,[x8, #0x2d4]
7101efcd70  ldr w9,[x8, #0x318]
7101efcd74  str wzr,[x8, #0x318]
7101efcd78  add w9,w10,w9
7101efcd7c  ldr w10,[x8, #0x324]
7101efcd80  str w9,[x8, #0x314]
7101efcd84  ldr w9,[x8, #0x328]
7101efcd88  str wzr,[x8, #0x328]
7101efcd8c  add w9,w10,w9
7101efcd90  ldr w10,[x8, #0x364]
7101efcd94  str w9,[x8, #0x324]
7101efcd98  ldr w9,[x8, #0x368]
7101efcd9c  str wzr,[x8, #0x368]
7101efcda0  add w9,w10,w9
7101efcda4  ldr w10,[x8, #0x374]
7101efcda8  str w9,[x8, #0x364]
7101efcdac  ldr w9,[x8, #0x378]
7101efcdb0  str wzr,[x8, #0x378]
7101efcdb4  add w9,w10,w9
7101efcdb8  str wzr,[x8, #0x120]
7101efcdbc  str w9,[x8, #0x374]
7101efcdc0  ldr x21,[x26, #0x230]
7101efcdc4  ldr x22,[x26, #0x238]
7101efcdc8  cmp x21,x22
7101efcdcc  b.eq 0x7101efd66c
7101efcdd0  adrp x9,0x710530a000
7101efcdd4  add x9,x9,#0x9c8
7101efcdd8  mov w8,#0x1428
7101efcddc  mov w23,#0x50
7101efcde0  mov w24,#0x1b8
7101efcde4  mov x19,x9
7101efcde8  add x25,x9,x8
7101efcdec  b 0x7101efd560
7101efcdf0  ldr x8,[x26, #0x238]
7101efcdf4  ldr x9,[x26, #0x230]
7101efcdf8  cmp x8,x9
7101efcdfc  b.eq 0x7101efd684
7101efce00  adrp x16,0x710530a000
7101efce04  add x16,x16,#0x9c8
7101efce08  mov w13,#0x1428
7101efce0c  mov x27,xzr
7101efce10  mov x28,xzr
7101efce14  mov x22,xzr
7101efce18  add x8,x26,#0x230
7101efce1c  mov w23,#0x1b6
7101efce20  adrp x11,0x7105328000
7101efce24  add x14,x16,x13
7101efce28  stp x8,x14,[sp, #0x8]
7101efce2c  mov w15,#0x1b8
7101efce30  ldr x8,[x11, #0xe18]
7101efce34  ldr w20,[x26]
7101efce38  ldr x24,[x8]
7101efce3c  ldarb w8,[x12]
7101efce40  tbz w8,#0x0,0x7101efd108
7101efce44  cmp w20,#0x2
7101efce48  b.cs 0x7101efd8e0
7101efce4c  cmp x22,#0x5
7101efce50  b.cs 0x7101efd8e0
7101efce54  cmp w20,#0x0
7101efce58  csel x8,x16,x14,eq
7101efce5c  ldr w26,[x26]
7101efce60  ldrsh w9,[x8, x23, LSL #0x0]
7101efce64  madd x8,x20,x15,x24
7101efce68  add x8,x8,x27
7101efce6c  ldr w10,[x8, #0x70]
7101efce70  ldr x8,[x11, #0xe18]
7101efce74  ldr x20,[x8]
7101efce78  ldarb w8,[x12]
7101efce7c  cmn w9,#0x1
7101efce80  ccmp w10,#0x0,#0x4,ne
7101efce84  b.ne 0x7101efcfcc
7101efce88  tbz w8,#0x0,0x7101efd190
7101efce8c  cmp w26,#0x2
7101efce90  b.cs 0x7101efd8e0
7101efce94  madd x9,x26,x15,x20
7101efce98  add x9,x9,x27
7101efce9c  cmp w26,#0x0
7101efcea0  ldr x26,[sp, #0x18]
7101efcea4  ldr w9,[x9, #0x80]
7101efcea8  add x8,x16,x13
7101efceac  csel x8,x16,x8,eq
7101efceb0  cbz w9,0x7101efd0dc
7101efceb4  add x8,x8,x23
7101efceb8  sub x8,x8,#0x186
7101efcebc  ldr w8,[x8]
7101efcec0  cmp w8,#0x2
7101efcec4  b.ne 0x7101efd0dc
7101efcec8  ldr x8,[x11, #0xe18]
7101efcecc  ldr w20,[x26]
7101efced0  ldr x24,[x8]
7101efced4  ldarb w8,[x12]
7101efced8  tbz w8,#0x0,0x7101efd300
7101efcedc  cmp w20,#0x2
7101efcee0  b.cs 0x7101efd8e0
7101efcee4  add x8,x16,x13
7101efcee8  cmp w20,#0x0
7101efceec  madd x9,x20,x15,x24
7101efcef0  csel x8,x16,x8,eq
7101efcef4  add x8,x8,x23
7101efcef8  sub x8,x8,#0x186
7101efcefc  ldr x10,[x11, #0xe18]
7101efcf00  ldr w8,[x8]
7101efcf04  cmp w8,#0x2
7101efcf08  add x9,x9,x27
7101efcf0c  ldr w9,[x9, #0x7c]
7101efcf10  ldr w26,[x26]
7101efcf14  ldr x24,[x10]
7101efcf18  ldarb w8,[x12]
7101efcf1c  csel w20,w9,wzr,eq
7101efcf20  tbz w8,#0x0,0x7101efd388
7101efcf24  cmp w26,#0x2
7101efcf28  b.cs 0x7101efd8e0
7101efcf2c  ldr x8,[sp, #0x18]
7101efcf30  ldr x9,[x8, #0x238]
7101efcf34  ldr x8,[x8, #0x230]
7101efcf38  sub x9,x9,x8
7101efcf3c  asr x9,x9,#0x4
7101efcf40  cmp x9,x22
7101efcf44  b.ls 0x7101efd8e4
7101efcf48  madd x9,x26,x15,x24
7101efcf4c  add x10,x16,x13
7101efcf50  cmp w26,#0x0
7101efcf54  ldr x8,[x8, x28, LSL #0x0]
7101efcf58  csel x10,x16,x10,eq
7101efcf5c  add x10,x10,x23
7101efcf60  sub x10,x10,#0x186
7101efcf64  ldr w10,[x10]
7101efcf68  ldr x8,[x8]
7101efcf6c  add x9,x9,x27
7101efcf70  ldr w9,[x9, #0x80]
7101efcf74  cmp w10,#0x2
7101efcf78  stp xzr,xzr,[x8, #0x20]
7101efcf7c  stp xzr,xzr,[x8, #0x1e8]
7101efcf80  str w20,[x8, #0x268]
7101efcf84  stp xzr,xzr,[x8, #0x1d8]
7101efcf88  str wzr,[x8, #0x1f8]
7101efcf8c  stp xzr,xzr,[x8, #0x1c8]
7101efcf90  csel w9,w9,wzr,eq
7101efcf94  stp xzr,xzr,[x8, #0x1b8]
7101efcf98  ldr x26,[sp, #0x18]
7101efcf9c  add w9,w9,w20
7101efcfa0  str w9,[x8, #0x26c]
7101efcfa4  mov x9,#0x1600000000
7101efcfa8  str x9,[x8, #0x1b0]
7101efcfac  mov w9,#0xffffffff
7101efcfb0  str x9,[x8, #0x200]
7101efcfb4  str w9,[x8, #0x208]
7101efcfb8  mov w9,#0x1
7101efcfbc  str w20,[x8, #0x264]
7101efcfc0  strb wzr,[x8, #0x20c]
7101efcfc4  str w9,[x8, #0x1fc]
7101efcfc8  b 0x7101efd0dc
7101efcfcc  tbz w8,#0x0,0x7101efd218
7101efcfd0  cmp w26,#0x2
7101efcfd4  b.cs 0x7101efd8e0
7101efcfd8  add x8,x16,x13
7101efcfdc  cmp w26,#0x0
7101efcfe0  csel x8,x16,x8,eq
7101efcfe4  ldrsh w8,[x8, x23, LSL #0x0]
7101efcfe8  madd x9,x26,x15,x20
7101efcfec  ldr x10,[x11, #0xe18]
7101efcff0  ldr x24,[x10]
7101efcff4  add x9,x9,x27
7101efcff8  ldr w9,[x9, #0x6c]
7101efcffc  cmn w8,#0x1
7101efd000  ldr x8,[sp, #0x18]
7101efd004  csel w26,wzr,w9,eq
7101efd008  ldr w20,[x8]
7101efd00c  ldarb w8,[x12]
7101efd010  tbz w8,#0x0,0x7101efd298
7101efd014  cmp w20,#0x2
7101efd018  b.cs 0x7101efd8e0
7101efd01c  ldr x8,[sp, #0x18]
7101efd020  ldr x9,[x8, #0x238]
7101efd024  ldr x8,[x8, #0x230]
7101efd028  sub x9,x9,x8
7101efd02c  asr x9,x9,#0x4
7101efd030  cmp x9,x22
7101efd034  b.ls 0x7101efd8e4
7101efd038  madd x10,x20,x15,x24
7101efd03c  add x9,x16,x13
7101efd040  cmp w20,#0x0
7101efd044  csel x9,x16,x9,eq
7101efd048  ldr x8,[x8, x28, LSL #0x0]
7101efd04c  ldrsh w9,[x9, x23, LSL #0x0]
7101efd050  ldr x20,[x8]
7101efd054  cmn w9,#0x1
7101efd058  add x10,x10,x27
7101efd05c  ldr w10,[x10, #0x70]
7101efd060  csel w9,wzr,w10,eq
7101efd064  add w2,w9,w26
7101efd068  add x0,x20,#0x240
7101efd06c  mov w1,w26
7101efd070  mov x25,x13
7101efd074  mov x19,x16
7101efd078  mov x21,x15
7101efd07c  bl 0x710339b6b0
7101efd080  ldr x8,[x20, #0x240]
7101efd084  ldr x0,[x8, #0x18]
7101efd088  ldr x9,[x0, #0x8]
7101efd08c  cbz x9,0x7101efd0a4
7101efd090  ldr s0,[x8, #0x58]
7101efd094  ucvtf s0,s0
7101efd098  adrp x1,0x7104464000
7101efd09c  add x1,x1,#0x398
7101efd0a0  bl 0x7103778630
7101efd0a4  ldrsw x8,[x20, #0x1fc]
7101efd0a8  ldr x26,[sp, #0x18]
7101efd0ac  cmp w8,#0x13
7101efd0b0  b.cs 0x7101efd8e0
7101efd0b4  ldr x14,[sp, #0x10]
7101efd0b8  add x8,x20,x8, LSL #0x2
7101efd0bc  mov w9,#0x15
7101efd0c0  str w9,[x8, #0x1b0]
7101efd0c4  adrp x12,0x7105314000
7101efd0c8  add x12,x12,#0x4d8
7101efd0cc  adrp x11,0x7105328000
7101efd0d0  mov x13,x25
7101efd0d4  mov x15,x21
7101efd0d8  mov x16,x19
7101efd0dc  ldr x8,[x26, #0x238]
7101efd0e0  ldr x9,[x26, #0x230]
7101efd0e4  sub x8,x8,x9
7101efd0e8  add x22,x22,#0x1
7101efd0ec  add x28,x28,#0x10
7101efd0f0  add x23,x23,#0x1c8
7101efd0f4  add x27,x27,#0x50
7101efd0f8  asr x8,x8,#0x4
7101efd0fc  cmp x8,x22
7101efd100  b.hi 0x7101efce30
7101efd104  b 0x7101efd684
7101efd108  mov x0,x12
7101efd10c  mov x25,x13
7101efd110  mov x21,x15
7101efd114  mov x19,x16
7101efd118  bl 0x71039c06b0
7101efd11c  ldr x14,[sp, #0x10]
7101efd120  mov x16,x19
7101efd124  mov x15,x21
7101efd128  mov x13,x25
7101efd12c  adrp x11,0x7105328000
7101efd130  adrp x12,0x7105314000
7101efd134  add x12,x12,#0x4d8
7101efd138  cbz w0,0x7101efce44
7101efd13c  bl 0x7101764000
7101efd140  adrp x0,0x7101763000
7101efd144  add x0,x0,#0xc40
7101efd148  adrp x1,0x71052c5000
7101efd14c  add x1,x1,#0x180
7101efd150  adrp x2,0x7104f17000
7101efd154  add x2,x2,#0x0
7101efd158  bl 0x71000001c0
7101efd15c  adrp x0,0x7105314000
7101efd160  add x0,x0,#0x4d8
7101efd164  bl 0x71039c06c0
7101efd168  ldr x14,[sp, #0x10]
7101efd16c  mov x16,x19
7101efd170  mov x15,x21
7101efd174  mov x13,x25
7101efd178  adrp x11,0x7105328000
7101efd17c  adrp x12,0x7105314000
7101efd180  add x12,x12,#0x4d8
7101efd184  cmp w20,#0x2
7101efd188  b.cc 0x7101efce4c
7101efd18c  b 0x7101efd8e0
7101efd190  mov x0,x12
7101efd194  mov x24,x13
7101efd198  mov x21,x15
7101efd19c  mov x19,x16
7101efd1a0  bl 0x71039c06b0
7101efd1a4  ldr x14,[sp, #0x10]
7101efd1a8  mov x16,x19
7101efd1ac  mov x15,x21
7101efd1b0  mov x13,x24
7101efd1b4  adrp x11,0x7105328000
7101efd1b8  adrp x12,0x7105314000
7101efd1bc  add x12,x12,#0x4d8
7101efd1c0  cbz w0,0x7101efce8c
7101efd1c4  bl 0x7101764000
7101efd1c8  adrp x0,0x7101763000
7101efd1cc  add x0,x0,#0xc40
7101efd1d0  adrp x1,0x71052c5000
7101efd1d4  add x1,x1,#0x180
7101efd1d8  adrp x2,0x7104f17000
7101efd1dc  add x2,x2,#0x0
7101efd1e0  bl 0x71000001c0
7101efd1e4  adrp x0,0x7105314000
7101efd1e8  add x0,x0,#0x4d8
7101efd1ec  bl 0x71039c06c0
7101efd1f0  ldr x14,[sp, #0x10]
7101efd1f4  mov x16,x19
7101efd1f8  mov x15,x21
7101efd1fc  mov x13,x24
7101efd200  adrp x11,0x7105328000
7101efd204  adrp x12,0x7105314000
7101efd208  add x12,x12,#0x4d8
7101efd20c  cmp w26,#0x2
7101efd210  b.cc 0x7101efce94
7101efd214  b 0x7101efd8e0
7101efd218  mov x0,x12
7101efd21c  mov x24,x13
7101efd220  mov x21,x15
7101efd224  mov x19,x16
7101efd228  bl 0x71039c06b0
7101efd22c  mov x16,x19
7101efd230  mov x15,x21
7101efd234  mov x13,x24
7101efd238  adrp x11,0x7105328000
7101efd23c  adrp x12,0x7105314000
7101efd240  add x12,x12,#0x4d8
7101efd244  cbz w0,0x7101efcfd0
7101efd248  bl 0x7101764000
7101efd24c  adrp x0,0x7101763000
7101efd250  add x0,x0,#0xc40
7101efd254  adrp x1,0x71052c5000
7101efd258  add x1,x1,#0x180
7101efd25c  adrp x2,0x7104f17000
7101efd260  add x2,x2,#0x0
7101efd264  bl 0x71000001c0
7101efd268  adrp x0,0x7105314000
7101efd26c  add x0,x0,#0x4d8
7101efd270  bl 0x71039c06c0
7101efd274  mov x16,x19
7101efd278  mov x15,x21
7101efd27c  mov x13,x24
7101efd280  adrp x11,0x7105328000
7101efd284  adrp x12,0x7105314000
7101efd288  add x12,x12,#0x4d8
7101efd28c  cmp w26,#0x2
7101efd290  b.cc 0x7101efcfd8
7101efd294  b 0x7101efd8e0
7101efd298  mov x0,x12
7101efd29c  mov x25,x13
7101efd2a0  mov x21,x15
7101efd2a4  mov x19,x16
7101efd2a8  bl 0x71039c06b0
7101efd2ac  mov x16,x19
7101efd2b0  mov x15,x21
7101efd2b4  mov x13,x25
7101efd2b8  cbz w0,0x7101efd014
7101efd2bc  bl 0x7101764000
7101efd2c0  adrp x0,0x7101763000
7101efd2c4  add x0,x0,#0xc40
7101efd2c8  adrp x1,0x71052c5000
7101efd2cc  add x1,x1,#0x180
7101efd2d0  adrp x2,0x7104f17000
7101efd2d4  add x2,x2,#0x0
7101efd2d8  bl 0x71000001c0
7101efd2dc  adrp x0,0x7105314000
7101efd2e0  add x0,x0,#0x4d8
7101efd2e4  bl 0x71039c06c0
7101efd2e8  mov x16,x19
7101efd2ec  mov x15,x21
7101efd2f0  mov x13,x25
7101efd2f4  cmp w20,#0x2
7101efd2f8  b.cc 0x7101efd01c
7101efd2fc  b 0x7101efd8e0
7101efd300  mov x0,x12
7101efd304  mov x25,x13
7101efd308  mov x21,x15
7101efd30c  mov x19,x16
7101efd310  bl 0x71039c06b0
7101efd314  ldr x14,[sp, #0x10]
7101efd318  mov x16,x19
7101efd31c  mov x15,x21
7101efd320  mov x13,x25
7101efd324  adrp x11,0x7105328000
7101efd328  adrp x12,0x7105314000
7101efd32c  add x12,x12,#0x4d8
7101efd330  cbz w0,0x7101efcedc
7101efd334  bl 0x7101764000
7101efd338  adrp x0,0x7101763000
7101efd33c  add x0,x0,#0xc40
7101efd340  adrp x1,0x71052c5000
7101efd344  add x1,x1,#0x180
7101efd348  adrp x2,0x7104f17000
7101efd34c  add x2,x2,#0x0
7101efd350  bl 0x71000001c0
7101efd354  adrp x0,0x7105314000
7101efd358  add x0,x0,#0x4d8
7101efd35c  bl 0x71039c06c0
7101efd360  ldr x14,[sp, #0x10]
7101efd364  mov x16,x19
7101efd368  mov x15,x21
7101efd36c  mov x13,x25
7101efd370  adrp x11,0x7105328000
7101efd374  adrp x12,0x7105314000
7101efd378  add x12,x12,#0x4d8
7101efd37c  cmp w20,#0x2
7101efd380  b.cc 0x7101efcee4
7101efd384  b 0x7101efd8e0
7101efd388  mov x0,x12
7101efd38c  mov x25,x13
7101efd390  mov x21,x15
7101efd394  mov x19,x16
7101efd398  bl 0x71039c06b0
7101efd39c  ldr x14,[sp, #0x10]
7101efd3a0  mov x16,x19
7101efd3a4  mov x15,x21
7101efd3a8  mov x13,x25
7101efd3ac  adrp x11,0x7105328000
7101efd3b0  adrp x12,0x7105314000
7101efd3b4  add x12,x12,#0x4d8
7101efd3b8  cbz w0,0x7101efcf24
7101efd3bc  bl 0x7101764000
7101efd3c0  adrp x0,0x7101763000
7101efd3c4  add x0,x0,#0xc40
7101efd3c8  adrp x1,0x71052c5000
7101efd3cc  add x1,x1,#0x180
7101efd3d0  adrp x2,0x7104f17000
7101efd3d4  add x2,x2,#0x0
7101efd3d8  bl 0x71000001c0
7101efd3dc  adrp x0,0x7105314000
7101efd3e0  add x0,x0,#0x4d8
7101efd3e4  bl 0x71039c06c0
7101efd3e8  ldr x14,[sp, #0x10]
7101efd3ec  mov x16,x19
7101efd3f0  mov x15,x21
7101efd3f4  mov x13,x25
7101efd3f8  adrp x11,0x7105328000
7101efd3fc  adrp x12,0x7105314000
7101efd400  add x12,x12,#0x4d8
7101efd404  cmp w26,#0x2
7101efd408  b.cc 0x7101efcf2c
7101efd40c  b 0x7101efd8e0
7101efd410  tbz w8,#0x0,0x7101efd7a4
7101efd414  cmp w25,#0x2
7101efd418  b.cs 0x7101efd8e0
7101efd41c  mov w8,#0x1428
7101efd420  cmp w25,#0x0
7101efd424  mov w9,#0x1c8
7101efd428  add x8,x24,x8
7101efd42c  mov w10,#0x1b8
7101efd430  madd x10,x25,x10,x26
7101efd434  csel x8,x24,x8,eq
7101efd438  madd x8,x22,x9,x8
7101efd43c  mov w11,#0x50
7101efd440  madd x9,x22,x11,x10
7101efd444  ldr x10,[x21, #0xe18]
7101efd448  ldrsh w8,[x8, #0x1b6]
7101efd44c  ldr x19,[sp, #0x18]
7101efd450  ldr w20,[x19]
7101efd454  ldr w9,[x9, #0x6c]
7101efd458  ldr x25,[x10]
7101efd45c  cmn w8,#0x1
7101efd460  ldarb w8,[x12]
7101efd464  csel w21,wzr,w9,eq
7101efd468  tbz w8,#0x0,0x7101efd7fc
7101efd46c  cmp w20,#0x2
7101efd470  b.cs 0x7101efd8e0
7101efd474  ldr x9,[x19, #0x238]
7101efd478  ldr x8,[x19, #0x230]
7101efd47c  sub x9,x9,x8
7101efd480  asr x9,x9,#0x4
7101efd484  cmp x9,x23
7101efd488  b.ls 0x7101efd8ec
7101efd48c  mov w9,#0x1428
7101efd490  mov w10,#0x1b8
7101efd494  cmp w20,#0x0
7101efd498  madd x10,x20,x10,x25
7101efd49c  add x9,x24,x9
7101efd4a0  mov w11,#0x1c8
7101efd4a4  csel x9,x24,x9,eq
7101efd4a8  mov w12,#0x50
7101efd4ac  madd x9,x22,x11,x9
7101efd4b0  madd x10,x22,x12,x10
7101efd4b4  ldrsh w9,[x9, #0x1b6]
7101efd4b8  ldr w10,[x10, #0x70]
7101efd4bc  cmn w9,#0x1
7101efd4c0  csel w9,wzr,w10,eq
7101efd4c4  lsl x10,x23,#0x4
7101efd4c8  ldr x8,[x8, x10, LSL #0x0]
7101efd4cc  ldr x19,[x8]
7101efd4d0  add w2,w9,w21
7101efd4d4  add x0,x19,#0x240
7101efd4d8  mov w1,w21
7101efd4dc  bl 0x710339b6b0
7101efd4e0  ldr x8,[x19, #0x240]
7101efd4e4  ldr x0,[x8, #0x18]
7101efd4e8  ldr x9,[x0, #0x8]
7101efd4ec  cbz x9,0x7101efd504
7101efd4f0  ldr s0,[x8, #0x58]
7101efd4f4  ucvtf s0,s0
7101efd4f8  adrp x1,0x7104464000
7101efd4fc  add x1,x1,#0x398
7101efd500  bl 0x7103778630
7101efd504  ldrsw x8,[x19, #0x1fc]
7101efd508  cmp w8,#0x13
7101efd50c  b.cs 0x7101efd8e0
7101efd510  add x8,x19,x8, LSL #0x2
7101efd514  mov w9,#0x15
7101efd518  str w9,[x8, #0x1b0]
7101efd51c  b 0x7101efd684
7101efd520  adrp x0,0x7105314000
7101efd524  add x0,x0,#0x4d8
7101efd528  bl 0x71039c06b0
7101efd52c  cbz w0,0x7101efd5b0
7101efd530  bl 0x7101764000
7101efd534  adrp x0,0x7101763000
7101efd538  add x0,x0,#0xc40
7101efd53c  adrp x1,0x71052c5000
7101efd540  add x1,x1,#0x180
7101efd544  adrp x2,0x7104f17000
7101efd548  add x2,x2,#0x0
7101efd54c  bl 0x71000001c0
7101efd550  adrp x0,0x7105314000
7101efd554  add x0,x0,#0x4d8
7101efd558  bl 0x71039c06c0
7101efd55c  b 0x7101efd5b0
7101efd560  ldr x8,[x21]
7101efd564  ldr x28,[x8]
7101efd568  ldr w27,[x28]
7101efd56c  cmp w27,#0x2
7101efd570  b.cs 0x7101efd8e0
7101efd574  ldr w26,[x28, #0x8]
7101efd578  cmp w26,#0x5
7101efd57c  b.cs 0x7101efd8e0
7101efd580  adrp x8,0x7105328000
7101efd584  ldr x8,[x8, #0xe18]
7101efd588  ldr x20,[x8]
7101efd58c  madd x8,x27,x24,x20
7101efd590  madd x8,x26,x23,x8
7101efd594  ldrsh w8,[x8, #0x78]
7101efd598  cmn w8,#0x1
7101efd59c  b.eq 0x7101efd660
7101efd5a0  adrp x8,0x7105314000
7101efd5a4  add x8,x8,#0x4d8
7101efd5a8  ldarb w8,[x8]
7101efd5ac  tbz w8,#0x0,0x7101efd520
7101efd5b0  cmp w27,#0x0
7101efd5b4  csel x8,x19,x25,eq
7101efd5b8  mov w9,#0x1c8
7101efd5bc  madd x8,x26,x9,x8
7101efd5c0  madd x9,x27,x24,x20
7101efd5c4  add x27,x28,#0x240
7101efd5c8  mov x0,x27
7101efd5cc  madd x9,x26,x23,x9
7101efd5d0  ldrsh w8,[x8, #0x1b6]
7101efd5d4  ldr w9,[x9, #0x6c]
7101efd5d8  cmn w8,#0x1
7101efd5dc  csel w1,wzr,w9,eq
7101efd5e0  mov w2,w1
7101efd5e4  bl 0x710339b6b0
7101efd5e8  ldr x20,[x28, #0x240]
7101efd5ec  ldr x8,[x20, #0x18]
7101efd5f0  ldr x8,[x8, #0x8]
7101efd5f4  cbz x8,0x7101efd660
7101efd5f8  add x0,x20,#0x10
7101efd5fc  add x8,sp,#0x20
7101efd600  adrp x1,0x710439b000
7101efd604  add x1,x1,#0x9ff
7101efd608  bl 0x7103776910
7101efd60c  ldr w3,[x20, #0x50]
7101efd610  add x0,sp,#0x20
7101efd614  mov w2,#0x1
7101efd618  adrp x1,0x7104290000
7101efd61c  add x1,x1,#0x179
7101efd620  bl 0x710377a280
7101efd624  ldr x0,[sp, #0x28]
7101efd628  adrp x8,0x710523d000
7101efd62c  add x8,x8,#0x9a8
7101efd630  stp x8,xzr,[sp, #0x20]
7101efd634  cbz x0,0x7101efd63c
7101efd638  bl 0x710392eb40
7101efd63c  ldr x8,[x27]
7101efd640  ldr x0,[x8, #0x18]
7101efd644  ldr x9,[x0, #0x8]
7101efd648  cbz x9,0x7101efd660
7101efd64c  ldr s0,[x8, #0x58]
7101efd650  ucvtf s0,s0
7101efd654  adrp x1,0x7104464000
7101efd658  add x1,x1,#0x398
7101efd65c  bl 0x7103778630
7101efd660  add x21,x21,#0x10
7101efd664  cmp x22,x21
7101efd668  b.ne 0x7101efd560
7101efd66c  ldr x9,[sp, #0x18]
7101efd670  ldrsw x8,[x9, #0x1f4]
7101efd674  cmp w8,#0x13
7101efd678  b.cs 0x7101efd8e0
7101efd67c  add x8,x9,x8, LSL #0x2
7101efd680  str wzr,[x8, #0x1a8]
7101efd684  ldp x29,x30,[sp, #0x80]
7101efd688  ldp x20,x19,[sp, #0x70]
7101efd68c  ldp x22,x21,[sp, #0x60]
7101efd690  ldp x24,x23,[sp, #0x50]
7101efd694  ldp x26,x25,[sp, #0x40]
7101efd698  ldp x28,x27,[sp, #0x30]
7101efd69c  add sp,sp,#0x90
7101efd6a0  ret
7101efd6a4  adrp x0,0x7105314000
7101efd6a8  add x0,x0,#0x4d8
7101efd6ac  bl 0x71039c06b0
7101efd6b0  adrp x12,0x7105314000
7101efd6b4  add x12,x12,#0x4d8
7101efd6b8  cbz w0,0x7101efca24
7101efd6bc  bl 0x7101764000
7101efd6c0  adrp x0,0x7101763000
7101efd6c4  add x0,x0,#0xc40
7101efd6c8  adrp x1,0x71052c5000
7101efd6cc  add x1,x1,#0x180
7101efd6d0  adrp x2,0x7104f17000
7101efd6d4  add x2,x2,#0x0
7101efd6d8  bl 0x71000001c0
7101efd6dc  adrp x0,0x7105314000
7101efd6e0  add x0,x0,#0x4d8
7101efd6e4  bl 0x71039c06c0
7101efd6e8  adrp x12,0x7105314000
7101efd6ec  add x12,x12,#0x4d8
7101efd6f0  b 0x7101efca24
7101efd6f4  adrp x0,0x7105314000
7101efd6f8  add x0,x0,#0x4d8
7101efd6fc  bl 0x71039c06b0
7101efd700  adrp x12,0x7105314000
7101efd704  add x12,x12,#0x4d8
7101efd708  cbz w0,0x7101efca5c
7101efd70c  bl 0x7101764000
7101efd710  adrp x0,0x7101763000
7101efd714  add x0,x0,#0xc40
7101efd718  adrp x1,0x71052c5000
7101efd71c  add x1,x1,#0x180
7101efd720  adrp x2,0x7104f17000
7101efd724  add x2,x2,#0x0
7101efd728  bl 0x71000001c0
7101efd72c  adrp x0,0x7105314000
7101efd730  add x0,x0,#0x4d8
7101efd734  bl 0x71039c06c0
7101efd738  adrp x12,0x7105314000
7101efd73c  add x12,x12,#0x4d8
7101efd740  cmp w22,#0x5
7101efd744  b.cc 0x7101efca64
7101efd748  b 0x7101efd8e0
7101efd74c  adrp x0,0x7105314000
7101efd750  add x0,x0,#0x4d8
7101efd754  bl 0x71039c06b0
7101efd758  adrp x12,0x7105314000
7101efd75c  add x12,x12,#0x4d8
7101efd760  cbz w0,0x7101efcac0
7101efd764  bl 0x7101764000
7101efd768  adrp x0,0x7101763000
7101efd76c  add x0,x0,#0xc40
7101efd770  adrp x1,0x71052c5000
7101efd774  add x1,x1,#0x180
7101efd778  adrp x2,0x7104f17000
7101efd77c  add x2,x2,#0x0
7101efd780  bl 0x71000001c0
7101efd784  adrp x0,0x7105314000
7101efd788  add x0,x0,#0x4d8
7101efd78c  bl 0x71039c06c0
7101efd790  adrp x12,0x7105314000
7101efd794  add x12,x12,#0x4d8
7101efd798  cmp w25,#0x2
7101efd79c  b.cc 0x7101efcac8
7101efd7a0  b 0x7101efd8e0
7101efd7a4  adrp x0,0x7105314000
7101efd7a8  add x0,x0,#0x4d8
7101efd7ac  bl 0x71039c06b0
7101efd7b0  adrp x12,0x7105314000
7101efd7b4  add x12,x12,#0x4d8
7101efd7b8  cbz w0,0x7101efd414
7101efd7bc  bl 0x7101764000
7101efd7c0  adrp x0,0x7101763000
7101efd7c4  add x0,x0,#0xc40
7101efd7c8  adrp x1,0x71052c5000
7101efd7cc  add x1,x1,#0x180
7101efd7d0  adrp x2,0x7104f17000
7101efd7d4  add x2,x2,#0x0
7101efd7d8  bl 0x71000001c0
7101efd7dc  adrp x0,0x7105314000
7101efd7e0  add x0,x0,#0x4d8
7101efd7e4  bl 0x71039c06c0
7101efd7e8  adrp x12,0x7105314000
7101efd7ec  add x12,x12,#0x4d8
7101efd7f0  cmp w25,#0x2
7101efd7f4  b.cc 0x7101efd41c
7101efd7f8  b 0x7101efd8e0
7101efd7fc  adrp x0,0x7105314000
7101efd800  add x0,x0,#0x4d8
7101efd804  bl 0x71039c06b0
7101efd808  cbz w0,0x7101efd46c
7101efd80c  bl 0x7101764000
7101efd810  adrp x0,0x7101763000
7101efd814  add x0,x0,#0xc40
7101efd818  adrp x1,0x71052c5000
7101efd81c  add x1,x1,#0x180
7101efd820  adrp x2,0x7104f17000
7101efd824  add x2,x2,#0x0
7101efd828  bl 0x71000001c0
7101efd82c  adrp x0,0x7105314000
7101efd830  add x0,x0,#0x4d8
7101efd834  bl 0x71039c06c0
7101efd838  cmp w20,#0x2
7101efd83c  b.cc 0x7101efd474
7101efd840  b 0x7101efd8e0
7101efd844  adrp x0,0x7105314000
7101efd848  add x0,x0,#0x4d8
7101efd84c  bl 0x71039c06b0
7101efd850  adrp x12,0x7105314000
7101efd854  add x12,x12,#0x4d8
7101efd858  cbz w0,0x7101efcb1c
7101efd85c  bl 0x7101764000
7101efd860  adrp x0,0x7101763000
7101efd864  add x0,x0,#0xc40
7101efd868  adrp x1,0x71052c5000
7101efd86c  add x1,x1,#0x180
7101efd870  adrp x2,0x7104f17000
7101efd874  add x2,x2,#0x0
7101efd878  bl 0x71000001c0
7101efd87c  adrp x0,0x7105314000
7101efd880  add x0,x0,#0x4d8
7101efd884  bl 0x71039c06c0
7101efd888  adrp x12,0x7105314000
7101efd88c  add x12,x12,#0x4d8
7101efd890  cmp w20,#0x2
7101efd894  b.cc 0x7101efcb24
7101efd898  b 0x7101efd8e0
7101efd89c  adrp x0,0x7105314000
7101efd8a0  add x0,x0,#0x4d8
7101efd8a4  bl 0x71039c06b0
7101efd8a8  cbz w0,0x7101efcb70
7101efd8ac  bl 0x7101764000
7101efd8b0  adrp x0,0x7101763000
7101efd8b4  add x0,x0,#0xc40
7101efd8b8  adrp x1,0x71052c5000
7101efd8bc  add x1,x1,#0x180
7101efd8c0  adrp x2,0x7104f17000
7101efd8c4  add x2,x2,#0x0
7101efd8c8  bl 0x71000001c0
7101efd8cc  adrp x0,0x7105314000
7101efd8d0  add x0,x0,#0x4d8
7101efd8d4  bl 0x71039c06c0
7101efd8d8  cmp w20,#0x2
7101efd8dc  b.cc 0x7101efcb78
7101efd8e0  bl 0x71039c2650
7101efd8e4  ldr x0,[sp, #0x8]
7101efd8e8  bl 0x71039c1330
7101efd8ec  add x0,x19,#0x230
7101efd8f0  bl 0x71039c1330
