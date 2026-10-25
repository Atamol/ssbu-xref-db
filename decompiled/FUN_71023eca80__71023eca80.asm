// addr:      71023eca80
// offset:    0x23eca80
// name:      FUN_71023eca80
// mangled:   
// size:      736

71023eca80  sub sp,sp,#0x40
71023eca84  stp x22,x21,[sp, #0x10]
71023eca88  stp x20,x19,[sp, #0x20]
71023eca8c  stp x29,x30,[sp, #0x30]
71023eca90  add x29,sp,#0x30
71023eca94  mov x21,x1
71023eca98  mov x19,x0
71023eca9c  add x22,x0,#0x50
71023ecaa0  mov w0,#0x10
71023ecaa4  mov w1,#0x100
71023ecaa8  bl 0x710392e290
71023ecaac  mov x20,x0
71023ecab0  cbnz x0,0x71023ecafc
71023ecab4  adrp x8,0x7105332000
71023ecab8  ldr x0,[x8, #0xf00]
71023ecabc  cbz x0,0x71023ecaf8
71023ecac0  mov w8,#0x100
71023ecac4  str wzr,[sp, #0xc]
71023ecac8  add x1,sp,#0xc
71023ecacc  str x8,[sp]
71023ecad0  ldr x8,[x0]
71023ecad4  ldr x8,[x8, #0x30]
71023ecad8  mov x2,sp
71023ecadc  blr x8
71023ecae0  tbz w0,#0x0,0x71023ecaf8
71023ecae4  mov w0,#0x10
71023ecae8  mov w1,#0x100
71023ecaec  bl 0x710392e290
71023ecaf0  mov x20,x0
71023ecaf4  cbnz x0,0x71023ecafc
71023ecaf8  mov x20,xzr
71023ecafc  mov w8,#0xffffffff
71023ecb00  adrp x1,0x7105329000
71023ecb04  add x1,x1,#0xea8
71023ecb08  mov x0,x22
71023ecb0c  stp x22,x20,[x20]
71023ecb10  stp xzr,xzr,[x20, #0x10]
71023ecb14  str w8,[x20, #0xf8]
71023ecb18  strb wzr,[x20, #0xfc]
71023ecb1c  str xzr,[x20, #0x30]
71023ecb20  stp xzr,xzr,[x20, #0x20]
71023ecb24  stp xzr,x8,[x20, #0xe8]
71023ecb28  stp xzr,xzr,[x20, #0xd8]
71023ecb2c  stp xzr,xzr,[x20, #0xc8]
71023ecb30  stp xzr,xzr,[x20, #0xb8]
71023ecb34  stp xzr,xzr,[x20, #0xa8]
71023ecb38  stp xzr,xzr,[x20, #0x98]
71023ecb3c  stp xzr,xzr,[x20, #0x88]
71023ecb40  stp xzr,xzr,[x20, #0x78]
71023ecb44  stp xzr,xzr,[x20, #0x68]
71023ecb48  stp xzr,xzr,[x20, #0x58]
71023ecb4c  stp xzr,xzr,[x20, #0x48]
71023ecb50  stp xzr,xzr,[x20, #0x38]
71023ecb54  bl 0x7103723a90
71023ecb58  adrp x8,0x71023eb000
71023ecb5c  add x8,x8,#0x1b0
71023ecb60  adrp x9,0x71023eb000
71023ecb64  add x9,x9,#0x280
71023ecb68  stp x8,xzr,[x20, #0x30]
71023ecb6c  adrp x8,0x71023eb000
71023ecb70  add x8,x8,#0x3b0
71023ecb74  stp x8,xzr,[x20, #0x50]
71023ecb78  adrp x8,0x71023eb000
71023ecb7c  add x8,x8,#0x7b0
71023ecb80  stp x8,xzr,[x20, #0x60]
71023ecb84  adrp x8,0x71023eb000
71023ecb88  add x8,x8,#0xbf0
71023ecb8c  stp x9,xzr,[x20, #0x40]
71023ecb90  adrp x9,0x71023eb000
71023ecb94  add x9,x9,#0x980
71023ecb98  stp x8,xzr,[x20, #0x80]
71023ecb9c  adrp x8,0x71023ec000
71023ecba0  add x8,x8,#0x7e0
71023ecba4  stp x9,xzr,[x20, #0x70]
71023ecba8  stp x8,xzr,[x20, #0x90]
71023ecbac  ldr x21,[x21, #0xa8]
71023ecbb0  cbz x21,0x71023ecbf0
71023ecbb4  adrp x8,0x7105328000
71023ecbb8  add x8,x8,#0x150
71023ecbbc  ldarb w8,[x8]
71023ecbc0  tbz w8,#0x0,0x71023eccf8
71023ecbc4  ldr x8,[x21]
71023ecbc8  ldr x8,[x8]
71023ecbcc  mov x0,x21
71023ecbd0  blr x8
71023ecbd4  cbz x0,0x71023ecbf0
71023ecbd8  adrp x8,0x7105328000
71023ecbdc  add x8,x8,#0x158
71023ecbe0  cmp x0,x8
71023ecbe4  b.eq 0x71023ecc68
71023ecbe8  ldr x0,[x0]
71023ecbec  cbnz x0,0x71023ecbe0
71023ecbf0  ldr w8,[x20, #0xec]
71023ecbf4  cmp w8,#0x13
71023ecbf8  b.cs 0x71023eccb4
71023ecbfc  mov w9,wzr
71023ecc00  add x8,x20,w8, SXTW  #0x2
71023ecc04  str w9,[x8, #0xa0]
71023ecc08  ldr x21,[x19, #0xe8]
71023ecc0c  str x20,[x19, #0xe8]
71023ecc10  cbz x21,0x71023ecc54
71023ecc14  adrp x8,0x7105329000
71023ecc18  ldr x0,[x8, #0xf38]
71023ecc1c  fmov s0,0x3f800000
71023ecc20  mov w1,#0x2
71023ecc24  mov w2,wzr
71023ecc28  bl 0x71023eea60
71023ecc2c  ldr x0,[x21]
71023ecc30  adrp x1,0x7105329000
71023ecc34  add x1,x1,#0xea8
71023ecc38  bl 0x7103723e70
71023ecc3c  mov x0,x21
71023ecc40  ldp x29,x30,[sp, #0x30]
71023ecc44  ldp x20,x19,[sp, #0x20]
71023ecc48  ldp x22,x21,[sp, #0x10]
71023ecc4c  add sp,sp,#0x40
71023ecc50  b 0x710392eb40
71023ecc54  ldp x29,x30,[sp, #0x30]
71023ecc58  ldp x20,x19,[sp, #0x20]
71023ecc5c  ldp x22,x21,[sp, #0x10]
71023ecc60  add sp,sp,#0x40
71023ecc64  ret
71023ecc68  ldr w8,[x21, #0x8]
71023ecc6c  mov w9,#0x8f27
71023ecc70  movk w9,#0xe33b, LSL #16
71023ecc74  cmp w8,w9
71023ecc78  b.cc 0x71023ecca8
71023ecc7c  mov w10,#0x6b7a
71023ecc80  movk w10,#0xff12, LSL #16
71023ecc84  add x0,x21,#0x10
71023ecc88  cmp w8,w10
71023ecc8c  b.eq 0x71023eccb8
71023ecc90  cmp w8,w9
71023ecc94  b.ne 0x71023ecca8
71023ecc98  adrp x1,0x710428f000
71023ecc9c  add x1,x1,#0x635
71023ecca0  bl 0x71039c0060
71023ecca4  cbz w0,0x71023eccd8
71023ecca8  ldr w8,[x20, #0xec]
71023eccac  cmp w8,#0x12
71023eccb0  b.ls 0x71023ecbfc
71023eccb4  bl 0x71039c2650
71023eccb8  adrp x1,0x7104348000
71023eccbc  add x1,x1,#0x45
71023eccc0  bl 0x71039c0060
71023eccc4  ldr w8,[x20, #0xec]
71023eccc8  cmp w8,#0x13
71023ecccc  cbz w0,0x71023eccec
71023eccd0  b.cc 0x71023ecbfc
71023eccd4  b 0x71023eccb4
71023eccd8  ldr w8,[x20, #0xec]
71023eccdc  cmp w8,#0x13
71023ecce0  b.cs 0x71023eccb4
71023ecce4  orr w9,wzr,#0x3
71023ecce8  b 0x71023ecc00
71023eccec  b.cs 0x71023eccb4
71023eccf0  mov w9,#0x4
71023eccf4  b 0x71023ecc00
71023eccf8  adrp x0,0x7105328000
71023eccfc  add x0,x0,#0x150
71023ecd00  bl 0x71039c06b0
71023ecd04  cbz w0,0x71023ecbc4
71023ecd08  adrp x8,0x7105324000
71023ecd0c  add x8,x8,#0x750
71023ecd10  ldarb w8,[x8]
71023ecd14  tbz w8,#0x0,0x71023ecd38
71023ecd18  adrp x8,0x7105328000
71023ecd1c  adrp x9,0x7105324000
71023ecd20  add x9,x9,#0x758
71023ecd24  adrp x0,0x7105328000
71023ecd28  add x0,x0,#0x150
71023ecd2c  str x9,[x8, #0x158]
71023ecd30  bl 0x71039c06c0
71023ecd34  b 0x71023ecbc4
71023ecd38  adrp x0,0x7105324000
71023ecd3c  add x0,x0,#0x750
71023ecd40  bl 0x71039c06b0
71023ecd44  cbz w0,0x71023ecd18
71023ecd48  adrp x8,0x7105324000
71023ecd4c  adrp x0,0x7105324000
71023ecd50  add x0,x0,#0x750
71023ecd54  str xzr,[x8, #0x758]
71023ecd58  bl 0x71039c06c0
71023ecd5c  b 0x71023ecd18
