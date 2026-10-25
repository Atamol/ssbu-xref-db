// addr:      71001dce50
// offset:    0x1dce50
// name:      FUN_71001dce50
// mangled:   
// size:      384

71001dce50  sub sp,sp,#0x80
71001dce54  str x21,[sp, #0x50]
71001dce58  stp x20,x19,[sp, #0x60]
71001dce5c  stp x29,x30,[sp, #0x70]
71001dce60  add x29,sp,#0x70
71001dce64  adrp x8,0x71052a4000
71001dce68  ldr x8,[x8, #0xda8]
71001dce6c  adrp x21,0x71052a4000
71001dce70  ldrb w8,[x8]
71001dce74  ldr x21,[x21, #0xdb0]
71001dce78  mov x19,x0
71001dce7c  add x20,x21,#0x28
71001dce80  cbz w8,0x71001dcebc
71001dce84  adrp x8,0x71052a4000
71001dce88  ldr x8,[x8, #0xdb8]
71001dce8c  ldr x0,[x8]
71001dce90  bl 0x7101717960
71001dce94  ldr w8,[x0]
71001dce98  cbz w8,0x71001dcebc
71001dce9c  ldr x10,[x21, #0xa0]
71001dcea0  ldp x9,x10,[x10]
71001dcea4  sub x10,x10,x9
71001dcea8  asr x10,x10,#0x3
71001dceac  cmp x10,x8
71001dceb0  b.ls 0x71001dcfb8
71001dceb4  ldr x8,[x9, x8, LSL #0x3]
71001dceb8  add x20,x8,#0x20
71001dcebc  ldr x8,[x20]
71001dcec0  ldr x8,[x8, #0x10]
71001dcec4  ldr x9,[x8, #0x18]
71001dcec8  ldr w8,[x19, #0x64]
71001dcecc  ldr x11,[x9, #0x50]!
71001dced0  cbz x11,0x71001dcf88
71001dced4  mov x10,x9
71001dced8  ldr w12,[x11, #0x20]
71001dcedc  cmp w12,w8
71001dcee0  cset w12,cc
71001dcee4  csel x10,x10,x11,cc
71001dcee8  ldr x11,[x11, w12, UXTW #0x3]
71001dceec  cbnz x11,0x71001dced8
71001dcef0  cmp x10,x9
71001dcef4  b.eq 0x71001dcf88
71001dcef8  ldr w9,[x10, #0x20]
71001dcefc  cmp w9,w8
71001dcf00  b.hi 0x71001dcf88
71001dcf04  ldr x20,[x10, #0x28]
71001dcf08  cbz x20,0x71001dcf88
71001dcf0c  ldp x8,x9,[x19, #0x68]
71001dcf10  ldr x10,[x19, #0x78]
71001dcf14  str x8,[sp, #0x8]
71001dcf18  mov w8,#0x1
71001dcf1c  add x0,sp,#0x8
71001dcf20  sub x1,x29,#0x14
71001dcf24  stp x9,x10,[sp, #0x10]
71001dcf28  sturb w8,[x29, #-0x14]
71001dcf2c  bl 0x71001b4280
71001dcf30  tbz w0,#0x0,0x71001dcf58
71001dcf34  ldp x9,x8,[sp, #0x10]
71001dcf38  ldr x10,[sp, #0x8]
71001dcf3c  stp x9,x8,[sp, #0x28]
71001dcf40  mov w1,#0x2
71001dcf44  stp x9,x8,[sp, #0x40]
71001dcf48  mov x8,x10
71001dcf4c  str x10,[sp, #0x20]
71001dcf50  str x8,[sp, #0x38]
71001dcf54  b 0x71001dcf78
71001dcf58  ldp x9,x8,[sp, #0x10]
71001dcf5c  ldr x10,[sp, #0x8]
71001dcf60  stp x9,x8,[sp, #0x28]
71001dcf64  str x10,[sp, #0x20]
71001dcf68  stp x9,x8,[sp, #0x40]
71001dcf6c  mov x8,x10
71001dcf70  str x8,[sp, #0x38]
71001dcf74  orr w1,wzr,#0x3
71001dcf78  add x2,sp,#0x38
71001dcf7c  mov w3,#0x1
71001dcf80  mov x0,x20
71001dcf84  bl 0x71001d0f00
71001dcf88  mov w8,#0x5
71001dcf8c  str w8,[x19, #0x40]
71001dcf90  ldr x8,[x19, #0x28]
71001dcf94  cbz x8,0x71001dcfa4
71001dcf98  add x1,x19,#0x30
71001dcf9c  mov x0,x19
71001dcfa0  blr x8
71001dcfa4  ldp x29,x30,[sp, #0x70]
71001dcfa8  ldr x21,[sp, #0x50]
71001dcfac  ldp x20,x19,[sp, #0x60]
71001dcfb0  add sp,sp,#0x80
71001dcfb4  ret
71001dcfb8  adrp x0,0x71042c4000
71001dcfbc  add x0,x0,#0x35f
71001dcfc0  mov w1,#0x47
71001dcfc4  orr w2,wzr,#0xe0000003
71001dcfc8  mov w3,wzr
71001dcfcc  bl 0x71001b1300
