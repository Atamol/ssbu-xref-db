// addr:      71019bc840
// offset:    0x19bc840
// name:      FUN_71019bc840
// mangled:   
// size:      2312

71019bc840  sub sp,sp,#0x80
71019bc844  stp x28,x27,[sp, #0x20]
71019bc848  stp x26,x25,[sp, #0x30]
71019bc84c  stp x24,x23,[sp, #0x40]
71019bc850  stp x22,x21,[sp, #0x50]
71019bc854  stp x20,x19,[sp, #0x60]
71019bc858  stp x29,x30,[sp, #0x70]
71019bc85c  add x29,sp,#0x70
71019bc860  adrp x8,0x71050a7000
71019bc864  add x8,x8,#0x6a8
71019bc868  mov w21,#0x1
71019bc86c  stp x8,xzr,[x0]
71019bc870  orr x8,xzr,#0x1ffffffff
71019bc874  mov x24,x1
71019bc878  mov x19,x0
71019bc87c  strb wzr,[x0, #0x58]
71019bc880  stp xzr,xzr,[x0, #0x10]
71019bc884  str x1,[x0, #0x78]
71019bc888  mov w1,#0x470
71019bc88c  strb w21,[x0, #0x70]
71019bc890  stp xzr,xzr,[x0, #0x48]
71019bc894  stp xzr,x8,[x0, #0x60]
71019bc898  mov w0,#0x10
71019bc89c  bl 0x710392e290
71019bc8a0  mov x20,x0
71019bc8a4  cbnz x0,0x71019bc8f0
71019bc8a8  adrp x8,0x7105332000
71019bc8ac  ldr x0,[x8, #0xf00]
71019bc8b0  cbz x0,0x71019bc8ec
71019bc8b4  mov w8,#0x470
71019bc8b8  str wzr,[sp, #0x1c]
71019bc8bc  add x1,sp,#0x1c
71019bc8c0  str x8,[sp]
71019bc8c4  ldr x8,[x0]
71019bc8c8  ldr x8,[x8, #0x30]
71019bc8cc  mov x2,sp
71019bc8d0  blr x8
71019bc8d4  tbz w0,#0x0,0x71019bc8ec
71019bc8d8  mov w1,#0x470
71019bc8dc  mov w0,#0x10
71019bc8e0  bl 0x710392e290
71019bc8e4  mov x20,x0
71019bc8e8  cbnz x0,0x71019bc8f0
71019bc8ec  mov x20,xzr
71019bc8f0  mov w8,#0x100
71019bc8f4  strh w8,[x20, #0x8]
71019bc8f8  mov w8,#0x4001
71019bc8fc  str w8,[x20, #0xc]
71019bc900  adrp x8,0x71050a7000
71019bc904  add x8,x8,#0x620
71019bc908  mov w0,#0x10
71019bc90c  mov w1,#0x8
71019bc910  strb w21,[x20, #0x10]
71019bc914  str w21,[x20, #0x14]
71019bc918  strb wzr,[x20, #0x18]
71019bc91c  str x8,[x20]
71019bc920  bl 0x710392e290
71019bc924  mov x21,x0
71019bc928  cbnz x0,0x71019bc974
71019bc92c  adrp x8,0x7105332000
71019bc930  ldr x0,[x8, #0xf00]
71019bc934  cbz x0,0x71019bc970
71019bc938  mov w8,#0x8
71019bc93c  str wzr,[sp, #0x1c]
71019bc940  add x1,sp,#0x1c
71019bc944  str x8,[sp]
71019bc948  ldr x8,[x0]
71019bc94c  ldr x8,[x8, #0x30]
71019bc950  mov x2,sp
71019bc954  blr x8
71019bc958  tbz w0,#0x0,0x71019bc970
71019bc95c  mov w0,#0x10
71019bc960  mov w1,#0x8
71019bc964  bl 0x710392e290
71019bc968  mov x21,x0
71019bc96c  cbnz x0,0x71019bc974
71019bc970  mov x21,xzr
71019bc974  mov x0,x21
71019bc978  bl 0x7103773200
71019bc97c  str x21,[x20, #0x20]
71019bc980  add x21,x20,#0x28
71019bc984  mov x0,x21
71019bc988  bl 0x7103776290
71019bc98c  add x23,x20,#0x38
71019bc990  mov x0,x23
71019bc994  bl 0x7103776290
71019bc998  mov x22,x20
71019bc99c  mov w25,#0xffffffff
71019bc9a0  add x0,x20,#0x88
71019bc9a4  mov w2,#0x16c
71019bc9a8  mov w1,wzr
71019bc9ac  str xzr,[x22, #0x48]!
71019bc9b0  stp xzr,xzr,[x20, #0x50]
71019bc9b4  str wzr,[x20, #0x1f4]
71019bc9b8  stp xzr,xzr,[x20, #0x78]
71019bc9bc  str x20,[x20, #0x60]
71019bc9c0  str x25,[x20, #0x1f8]
71019bc9c4  str w25,[x20, #0x200]
71019bc9c8  strb wzr,[x20, #0x204]
71019bc9cc  stp xzr,xzr,[x20, #0x68]
71019bc9d0  bl 0x71039c02a0
71019bc9d4  mov w0,#0x10
71019bc9d8  mov w1,#0x80
71019bc9dc  str w25,[x20, #0x208]
71019bc9e0  str xzr,[x20, #0x220]
71019bc9e4  str xzr,[x20, #0x218]
71019bc9e8  str xzr,[x20, #0x210]
71019bc9ec  str x24,[x20, #0x228]
71019bc9f0  bl 0x710392e290
71019bc9f4  cbnz x0,0x71019bca3c
71019bc9f8  adrp x8,0x7105332000
71019bc9fc  ldr x0,[x8, #0xf00]
71019bca00  cbz x0,0x71019bca38
71019bca04  mov w8,#0x80
71019bca08  str wzr,[sp, #0x1c]
71019bca0c  add x1,sp,#0x1c
71019bca10  str x8,[sp]
71019bca14  ldr x8,[x0]
71019bca18  ldr x8,[x8, #0x30]
71019bca1c  mov x2,sp
71019bca20  blr x8
71019bca24  tbz w0,#0x0,0x71019bca38
71019bca28  mov w0,#0x10
71019bca2c  mov w1,#0x80
71019bca30  bl 0x710392e290
71019bca34  cbnz x0,0x71019bca3c
71019bca38  mov x0,xzr
71019bca3c  adrp x8,0x7105181000
71019bca40  add x8,x8,#0xb40
71019bca44  str x8,[x0]
71019bca48  mov x8,x0
71019bca4c  mov w1,#0xb8
71019bca50  str xzr,[x8, #0x10]!
71019bca54  str x8,[x0, #0x8]
71019bca58  mov x8,x0
71019bca5c  str xzr,[x8, #0x28]!
71019bca60  stp xzr,x8,[x0, #0x18]
71019bca64  mov x8,x0
71019bca68  str xzr,[x8, #0x40]!
71019bca6c  stp xzr,x8,[x0, #0x30]
71019bca70  mov x8,x0
71019bca74  str xzr,[x8, #0x58]!
71019bca78  stp xzr,x8,[x0, #0x48]
71019bca7c  mov w8,#0x2
71019bca80  str w8,[x0, #0x68]
71019bca84  add x8,x20,#0x238
71019bca88  str xzr,[x0, #0x60]
71019bca8c  str wzr,[x0, #0x78]
71019bca90  str xzr,[x0, #0x70]
71019bca94  str x8,[x20, #0x238]
71019bca98  adrp x8,0x7103345000
71019bca9c  add x8,x8,#0x940
71019bcaa0  str xzr,[x20, #0x260]
71019bcaa4  str x8,[x20, #0x260]
71019bcaa8  adrp x8,0x7103345000
71019bcaac  add x8,x8,#0x950
71019bcab0  str xzr,[x20, #0x270]
71019bcab4  str x8,[x20, #0x270]
71019bcab8  adrp x8,0x7103345000
71019bcabc  add x8,x8,#0xa70
71019bcac0  str xzr,[x20, #0x290]
71019bcac4  str x8,[x20, #0x290]
71019bcac8  adrp x8,0x7103345000
71019bcacc  add x8,x8,#0xb50
71019bcad0  str xzr,[x20, #0x280]
71019bcad4  str x8,[x20, #0x280]
71019bcad8  adrp x8,0x7103345000
71019bcadc  add x8,x8,#0xd80
71019bcae0  str xzr,[x20, #0x2a0]
71019bcae4  str x8,[x20, #0x2a0]
71019bcae8  adrp x8,0x7103345000
71019bcaec  add x8,x8,#0xeb0
71019bcaf0  str xzr,[x20, #0x2b0]
71019bcaf4  str x8,[x20, #0x2b0]
71019bcaf8  adrp x8,0x7103345000
71019bcafc  add x8,x8,#0xf60
71019bcb00  str xzr,[x20, #0x2c0]
71019bcb04  str x8,[x20, #0x2c0]
71019bcb08  adrp x8,0x7103346000
71019bcb0c  add x8,x8,#0xa0
71019bcb10  str x0,[x20, #0x230]
71019bcb14  mov w0,#0x10
71019bcb18  str xzr,[x20, #0x2d0]
71019bcb1c  str x8,[x20, #0x2d0]
71019bcb20  adrp x8,0x7103346000
71019bcb24  add x8,x8,#0x140
71019bcb28  str xzr,[x20, #0x258]
71019bcb2c  str xzr,[x20, #0x250]
71019bcb30  str xzr,[x20, #0x248]
71019bcb34  str xzr,[x20, #0x240]
71019bcb38  str x25,[x20, #0x340]
71019bcb3c  str w25,[x20, #0x348]
71019bcb40  strb wzr,[x20, #0x34c]
71019bcb44  str xzr,[x20, #0x338]
71019bcb48  str xzr,[x20, #0x330]
71019bcb4c  str xzr,[x20, #0x328]
71019bcb50  str xzr,[x20, #0x320]
71019bcb54  str xzr,[x20, #0x318]
71019bcb58  str xzr,[x20, #0x310]
71019bcb5c  str xzr,[x20, #0x308]
71019bcb60  str xzr,[x20, #0x300]
71019bcb64  str xzr,[x20, #0x2f8]
71019bcb68  str xzr,[x20, #0x2f0]
71019bcb6c  str xzr,[x20, #0x2e8]
71019bcb70  str xzr,[x20, #0x2e0]
71019bcb74  str xzr,[x20, #0x2d8]
71019bcb78  str xzr,[x20, #0x2c8]
71019bcb7c  str xzr,[x20, #0x2b8]
71019bcb80  str xzr,[x20, #0x2a8]
71019bcb84  str xzr,[x20, #0x298]
71019bcb88  str xzr,[x20, #0x288]
71019bcb8c  str xzr,[x20, #0x278]
71019bcb90  str xzr,[x20, #0x268]
71019bcb94  str xzr,[x20, #0x268]
71019bcb98  str xzr,[x20, #0x278]
71019bcb9c  str xzr,[x20, #0x298]
71019bcba0  str xzr,[x20, #0x288]
71019bcba4  str xzr,[x20, #0x2a8]
71019bcba8  str xzr,[x20, #0x2b8]
71019bcbac  str xzr,[x20, #0x2c8]
71019bcbb0  str xzr,[x20, #0x2d8]
71019bcbb4  str x8,[x20, #0x2e0]
71019bcbb8  str xzr,[x20, #0x2e8]
71019bcbbc  str wzr,[x20, #0x2f0]
71019bcbc0  bl 0x710392e290
71019bcbc4  cbnz x0,0x71019bcc0c
71019bcbc8  adrp x8,0x7105332000
71019bcbcc  ldr x0,[x8, #0xf00]
71019bcbd0  cbz x0,0x71019bcc08
71019bcbd4  mov w8,#0xb8
71019bcbd8  str wzr,[sp, #0x1c]
71019bcbdc  add x1,sp,#0x1c
71019bcbe0  str x8,[sp]
71019bcbe4  ldr x8,[x0]
71019bcbe8  ldr x8,[x8, #0x30]
71019bcbec  mov x2,sp
71019bcbf0  blr x8
71019bcbf4  tbz w0,#0x0,0x71019bcc08
71019bcbf8  mov w1,#0xb8
71019bcbfc  mov w0,#0x10
71019bcc00  bl 0x710392e290
71019bcc04  cbnz x0,0x71019bcc0c
71019bcc08  mov x0,xzr
71019bcc0c  adrp x8,0x71050a7000
71019bcc10  add x8,x8,#0x138
71019bcc14  str w25,[x0, #0xa8]
71019bcc18  stp x8,x0,[x0]
71019bcc1c  adrp x8,0x7101990000
71019bcc20  add x8,x8,#0x4d0
71019bcc24  stp xzr,xzr,[x0, #0x38]
71019bcc28  adrp x9,0x71019b8000
71019bcc2c  add x9,x9,#0x430
71019bcc30  strb wzr,[x0, #0xac]
71019bcc34  str w25,[x0, #0xb0]
71019bcc38  stp xzr,xzr,[x0, #0x30]
71019bcc3c  str x8,[x0, #0x30]
71019bcc40  adrp x8,0x7101990000
71019bcc44  add x8,x8,#0x4e0
71019bcc48  stp xzr,xzr,[x0, #0x48]
71019bcc4c  str wzr,[x0, #0x50]
71019bcc50  stp x8,xzr,[x0, #0x40]
71019bcc54  add x8,x20,#0x360
71019bcc58  stp xzr,xzr,[x0, #0x10]
71019bcc5c  stp xzr,xzr,[x0, #0x20]
71019bcc60  stp xzr,x25,[x0, #0x98]
71019bcc64  stp xzr,xzr,[x0, #0x88]
71019bcc68  stp xzr,xzr,[x0, #0x78]
71019bcc6c  stp xzr,xzr,[x0, #0x68]
71019bcc70  stp xzr,xzr,[x0, #0x58]
71019bcc74  str x8,[x20, #0x360]
71019bcc78  adrp x8,0x71019b8000
71019bcc7c  add x8,x8,#0x240
71019bcc80  str xzr,[x20, #0x388]
71019bcc84  str x8,[x20, #0x388]
71019bcc88  adrp x8,0x71019b8000
71019bcc8c  add x8,x8,#0x250
71019bcc90  str xzr,[x20, #0x398]
71019bcc94  str x8,[x20, #0x398]
71019bcc98  mov x8,#0x650000000000
71019bcc9c  movk x8,#0x87, LSL #48
71019bcca0  str x8,[x20, #0x440]
71019bcca4  adrp x8,0x7104f73000
71019bcca8  add x8,x8,#0xd30
71019bccac  str x8,[x20, #0x430]
71019bccb0  mov x8,#-0x1
71019bccb4  str x8,[x20, #0x450]
71019bccb8  adrp x8,0x71019b8000
71019bccbc  add x8,x8,#0x420
71019bccc0  str x0,[x20, #0x350]
71019bccc4  str wzr,[x20, #0x358]
71019bccc8  str xzr,[x20, #0x378]
71019bcccc  str xzr,[x20, #0x370]
71019bccd0  str xzr,[x20, #0x368]
71019bccd4  str xzr,[x20, #0x380]
71019bccd8  str x25,[x20, #0x3f8]
71019bccdc  str w25,[x20, #0x400]
71019bcce0  strb wzr,[x20, #0x404]
71019bcce4  str xzr,[x20, #0x3f0]
71019bcce8  str xzr,[x20, #0x3e8]
71019bccec  str xzr,[x20, #0x3e0]
71019bccf0  str xzr,[x20, #0x3d8]
71019bccf4  str xzr,[x20, #0x3d0]
71019bccf8  str xzr,[x20, #0x3c8]
71019bccfc  str xzr,[x20, #0x3c0]
71019bcd00  str xzr,[x20, #0x3b8]
71019bcd04  str xzr,[x20, #0x3b0]
71019bcd08  str xzr,[x20, #0x3a8]
71019bcd0c  str xzr,[x20, #0x3a0]
71019bcd10  str xzr,[x20, #0x390]
71019bcd14  str xzr,[x20, #0x408]
71019bcd18  str xzr,[x20, #0x390]
71019bcd1c  str xzr,[x20, #0x3a0]
71019bcd20  str wzr,[x20, #0x3a8]
71019bcd24  strb wzr,[x20, #0x410]
71019bcd28  strb wzr,[x20, #0x414]
71019bcd2c  strb wzr,[x20, #0x41c]
71019bcd30  str xzr,[x20, #0x438]
71019bcd34  strb wzr,[x20, #0x448]
71019bcd38  str wzr,[x20, #0x428]
71019bcd3c  str xzr,[x20, #0x460]
71019bcd40  str xzr,[x20, #0x458]
71019bcd44  strb wzr,[x20, #0x468]
71019bcd48  stp x8,xzr,[x20, #0x88]
71019bcd4c  adrp x8,0x71019b8000
71019bcd50  add x8,x8,#0x770
71019bcd54  stp x8,xzr,[x20, #0xa8]
71019bcd58  adrp x8,0x71019b8000
71019bcd5c  add x8,x8,#0x840
71019bcd60  stp x8,xzr,[x20, #0xb8]
71019bcd64  adrp x8,0x71019b9000
71019bcd68  add x8,x8,#0x780
71019bcd6c  stp x8,xzr,[x20, #0xd8]
71019bcd70  adrp x8,0x71019b9000
71019bcd74  add x8,x8,#0x8c0
71019bcd78  stp x8,xzr,[x20, #0xf8]
71019bcd7c  adrp x8,0x71019ba000
71019bcd80  add x8,x8,#0xb50
71019bcd84  stp x8,xzr,[x20, #0x118]
71019bcd88  adrp x8,0x71019ba000
71019bcd8c  add x8,x8,#0xbf0
71019bcd90  stp x8,xzr,[x20, #0xe8]
71019bcd94  adrp x8,0x71019ba000
71019bcd98  add x8,x8,#0xcf0
71019bcd9c  stp x8,xzr,[x20, #0x138]
71019bcda0  adrp x8,0x71019ba000
71019bcda4  add x8,x8,#0xde0
71019bcda8  stp x8,xzr,[x20, #0x148]
71019bcdac  adrp x8,0x71019bb000
71019bcdb0  add x8,x8,#0x340
71019bcdb4  stp x9,xzr,[x20, #0x98]
71019bcdb8  adrp x9,0x71019b9000
71019bcdbc  add x9,x9,#0x1e0
71019bcdc0  stp x8,xzr,[x20, #0x168]
71019bcdc4  adrp x8,0x71019bb000
71019bcdc8  add x8,x8,#0x3d0
71019bcdcc  stp x9,xzr,[x20, #0xc8]
71019bcdd0  adrp x9,0x71019ba000
71019bcdd4  add x9,x9,#0x8b0
71019bcdd8  stp x8,xzr,[x20, #0x178]
71019bcddc  ldrsw x8,[x20, #0x1f4]
71019bcde0  cmp w8,#0x13
71019bcde4  stp x9,xzr,[x20, #0x108]
71019bcde8  adrp x9,0x71019ba000
71019bcdec  add x9,x9,#0xc50
71019bcdf0  stp x9,xzr,[x20, #0x128]
71019bcdf4  adrp x9,0x71019bb000
71019bcdf8  add x9,x9,#0x60
71019bcdfc  stp x9,xzr,[x20, #0x158]
71019bce00  adrp x9,0x71019bb000
71019bce04  add x9,x9,#0x510
71019bce08  stp x9,xzr,[x20, #0x188]
71019bce0c  adrp x9,0x71019bb000
71019bce10  add x9,x9,#0x700
71019bce14  stp x9,xzr,[x20, #0x198]
71019bce18  b.cs 0x71019bd144
71019bce1c  add x8,x20,x8, LSL #0x2
71019bce20  str wzr,[x8, #0x1a8]
71019bce24  ldr x8,[x20, #0x228]
71019bce28  ldr x1,[x8]
71019bce2c  add x0,x20,#0x20
71019bce30  adrp x2,0x7104543000
71019bce34  add x2,x2,#0x9e0
71019bce38  mov w3,#0x1
71019bce3c  bl 0x71032cbf30
71019bce40  ldr x8,[x20, #0x20]
71019bce44  ldr x8,[x8]
71019bce48  add x9,x8,#0x8
71019bce4c  cmp x9,x21
71019bce50  b.eq 0x71019bcec4
71019bce54  ldr x9,[x8, #0x10]
71019bce58  ldr x9,[x9]
71019bce5c  ldr x10,[x20, #0x30]
71019bce60  str x9,[x10]
71019bce64  ldr x9,[x8, #0x10]
71019bce68  ldr x9,[x9, #0x8]
71019bce6c  ldr x10,[x20, #0x30]
71019bce70  str x9,[x10, #0x8]
71019bce74  ldr x9,[x8, #0x10]
71019bce78  ldr x8,[x20, #0x30]
71019bce7c  cmp x8,x9
71019bce80  b.eq 0x71019bcec4
71019bce84  ldr x10,[x9, #0x18]
71019bce88  ldr x10,[x10]
71019bce8c  ldr x11,[x8, #0x18]
71019bce90  str x10,[x11]
71019bce94  ldr x10,[x9, #0x18]
71019bce98  ldr x10,[x10, #0x8]
71019bce9c  ldr x11,[x8, #0x18]
71019bcea0  str x10,[x11, #0x8]
71019bcea4  ldr x10,[x9, #0x18]
71019bcea8  ldr x10,[x10, #0x10]
71019bceac  ldr x11,[x8, #0x18]
71019bceb0  str x10,[x11, #0x10]
71019bceb4  ldr x9,[x9, #0x18]
71019bceb8  ldr x9,[x9, #0x18]
71019bcebc  ldr x8,[x8, #0x18]
71019bcec0  str x9,[x8, #0x18]
71019bcec4  adrp x1,0x7104421000
71019bcec8  add x1,x1,#0xbfc
71019bcecc  mov x8,sp
71019bced0  mov x0,x21
71019bced4  mov x24,sp
71019bced8  bl 0x7103776640
71019bcedc  cmp x24,x23
71019bcee0  b.eq 0x71019bcf18
71019bcee4  ldr x8,[sp, #0x8]
71019bcee8  str xzr,[sp, #0x8]
71019bceec  ldr x23,[x20, #0x40]
71019bcef0  str x8,[x20, #0x40]
71019bcef4  cbz x23,0x71019bcf18
71019bcef8  ldr x0,[x23, #0x18]
71019bcefc  adrp x8,0x710523d000
71019bcf00  add x8,x8,#0x9a8
71019bcf04  stp x8,xzr,[x23, #0x10]
71019bcf08  cbz x0,0x71019bcf10
71019bcf0c  bl 0x710392eb40
71019bcf10  mov x0,x23
71019bcf14  bl 0x710392eb40
71019bcf18  ldr x23,[sp, #0x8]
71019bcf1c  adrp x27,0x710523d000
71019bcf20  add x27,x27,#0x988
71019bcf24  stp x27,xzr,[sp]
71019bcf28  cbz x23,0x71019bcf4c
71019bcf2c  ldr x0,[x23, #0x18]
71019bcf30  adrp x8,0x710523d000
71019bcf34  add x8,x8,#0x9a8
71019bcf38  stp x8,xzr,[x23, #0x10]
71019bcf3c  cbz x0,0x71019bcf44
71019bcf40  bl 0x710392eb40
71019bcf44  mov x0,x23
71019bcf48  bl 0x710392eb40
71019bcf4c  adrp x1,0x710438c000
71019bcf50  add x1,x1,#0x23e
71019bcf54  mov x8,sp
71019bcf58  mov x0,x21
71019bcf5c  bl 0x7103776cd0
71019bcf60  ldp x24,x25,[sp]
71019bcf64  sub x26,x25,x24
71019bcf68  asr x23,x26,#0x4
71019bcf6c  cbz x24,0x71019bcfa8
71019bcf70  cmp x25,x24
71019bcf74  b.eq 0x71019bcf9c
71019bcf78  ldr x8,[x25, #-0x10]!
71019bcf7c  ldr x8,[x8]
71019bcf80  mov x0,x25
71019bcf84  blr x8
71019bcf88  cmp x24,x25
71019bcf8c  b.ne 0x71019bcf78
71019bcf90  str x24,[sp, #0x8]
71019bcf94  cbnz x24,0x71019bcfa0
71019bcf98  b 0x71019bcfa8
71019bcf9c  str x24,[sp, #0x8]
71019bcfa0  mov x0,x24
71019bcfa4  bl 0x710392eb40
71019bcfa8  mov x0,x22
71019bcfac  mov x1,x23
71019bcfb0  bl 0x71019bb740
71019bcfb4  cbz x26,0x71019bd03c
71019bcfb8  mov x24,xzr
71019bcfbc  adrp x25,0x71043df000
71019bcfc0  add x25,x25,#0x9b4
71019bcfc4  adrp x28,0x710523d000
71019bcfc8  add x28,x28,#0x9a8
71019bcfcc  mov x8,sp
71019bcfd0  mov x0,x21
71019bcfd4  mov x1,x25
71019bcfd8  mov w2,w24
71019bcfdc  bl 0x7103776640
71019bcfe0  ldp x0,x8,[x20, #0x50]
71019bcfe4  mov x1,sp
71019bcfe8  cmp x0,x8
71019bcfec  b.eq 0x71019bd004
71019bcff0  bl 0x7103776390
71019bcff4  ldr x8,[x20, #0x50]
71019bcff8  add x8,x8,#0x10
71019bcffc  str x8,[x20, #0x50]
71019bd000  b 0x71019bd00c
71019bd004  mov x0,x22
71019bd008  bl 0x71019bb8f0
71019bd00c  ldr x26,[sp, #0x8]
71019bd010  stp x27,xzr,[sp]
71019bd014  cbz x26,0x71019bd030
71019bd018  ldr x0,[x26, #0x18]
71019bd01c  stp x28,xzr,[x26, #0x10]
71019bd020  cbz x0,0x71019bd028
71019bd024  bl 0x710392eb40
71019bd028  mov x0,x26
71019bd02c  bl 0x710392eb40
71019bd030  add x24,x24,#0x1
71019bd034  cmp x24,x23
71019bd038  b.cc 0x71019bcfcc
71019bd03c  ldr x8,[x20, #0x20]
71019bd040  ldr x8,[x8]
71019bd044  ldr x8,[x8]
71019bd048  ldr x8,[x8, #0x600]
71019bd04c  strb wzr,[x8, #0x4aa]
71019bd050  mov w8,#0x101
71019bd054  strh w8,[x20, #0x8]
71019bd058  ldrh w8,[sp, #0x1c]
71019bd05c  strh w8,[x20, #0xa]
71019bd060  mov w8,#0x1000
71019bd064  movk w8,#0x1, LSL #16
71019bd068  mov w9,#0x1
71019bd06c  strb w9,[x20, #0x10]
71019bd070  str w8,[x20, #0xc]
71019bd074  ldrh w10,[sp]
71019bd078  ldrb w11,[sp, #0x2]
71019bd07c  str w8,[x20, #0xc]
71019bd080  ldr x8,[x20, #0x20]
71019bd084  sturh w10,[x20, #0x11]
71019bd088  strb w11,[x20, #0x13]
71019bd08c  str w9,[x20, #0x14]
71019bd090  strb wzr,[x20, #0x18]
71019bd094  ldr x8,[x8]
71019bd098  ldr x10,[x8]
71019bd09c  ldr x8,[x10, #0x600]
71019bd0a0  str w9,[x8, #0x494]
71019bd0a4  ldr x8,[x10, #0x608]
71019bd0a8  ldr x9,[x10, #0x610]
71019bd0ac  cmp x8,x9
71019bd0b0  b.eq 0x71019bd120
71019bd0b4  sub x10,x9,#0x10
71019bd0b8  sub x10,x10,x8
71019bd0bc  ubfx x11,x10,#0x4,#0x1c
71019bd0c0  add w11,w11,#0x1
71019bd0c4  ands x11,x11,#0x3
71019bd0c8  b.eq 0x71019bd0e8
71019bd0cc  neg x11,x11
71019bd0d0  mov w12,#0x1
71019bd0d4  ldr x13,[x8, #0x8]
71019bd0d8  add x8,x8,#0x10
71019bd0dc  adds x11,x11,#0x1
71019bd0e0  str w12,[x13, #0x494]
71019bd0e4  b.ne 0x71019bd0d4
71019bd0e8  cmp x10,#0x30
71019bd0ec  b.cc 0x71019bd120
71019bd0f0  mov w10,#0x1
71019bd0f4  ldr x11,[x8, #0x8]
71019bd0f8  str w10,[x11, #0x494]
71019bd0fc  ldr x11,[x8, #0x18]
71019bd100  str w10,[x11, #0x494]
71019bd104  ldr x11,[x8, #0x28]
71019bd108  str w10,[x11, #0x494]
71019bd10c  ldr x11,[x8, #0x38]
71019bd110  add x8,x8,#0x40
71019bd114  cmp x9,x8
71019bd118  str w10,[x11, #0x494]
71019bd11c  b.ne 0x71019bd0f4
71019bd120  str x20,[x19, #0x80]
71019bd124  ldp x29,x30,[sp, #0x70]
71019bd128  ldp x20,x19,[sp, #0x60]
71019bd12c  ldp x22,x21,[sp, #0x50]
71019bd130  ldp x24,x23,[sp, #0x40]
71019bd134  ldp x26,x25,[sp, #0x30]
71019bd138  ldp x28,x27,[sp, #0x20]
71019bd13c  add sp,sp,#0x80
71019bd140  ret
71019bd144  bl 0x71039c2650
