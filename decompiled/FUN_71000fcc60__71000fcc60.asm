// addr:      71000fcc60
// offset:    0xfcc60
// name:      FUN_71000fcc60
// mangled:   
// size:      912

71000fcc60  sub sp,sp,#0x170
71000fcc64  stp x28,x27,[sp, #0x110]
71000fcc68  stp x26,x25,[sp, #0x120]
71000fcc6c  stp x24,x23,[sp, #0x130]
71000fcc70  stp x22,x21,[sp, #0x140]
71000fcc74  stp x20,x19,[sp, #0x150]
71000fcc78  stp x29,x30,[sp, #0x160]
71000fcc7c  add x29,sp,#0x160
71000fcc80  adrp x21,0x71052a5000
71000fcc84  ldr x21,[x21, #0x80]
71000fcc88  mov x19,x0
71000fcc8c  ldr x0,[x21]
71000fcc90  bl 0x7100146ba0
71000fcc94  sub w8,w0,#0x5
71000fcc98  cmp w8,#0x3
71000fcc9c  b.hi 0x71000fccc4
71000fcca0  adrp x9,0x7104496000
71000fcca4  add x9,x9,#0x3ac
71000fcca8  ldrsw x8,[x9, x8, LSL #0x2]
71000fccac  add x8,x8,x9
71000fccb0  br x8
71000fccb4  mov w8,#0x1
71000fccb8  orr w9,wzr,#0x3
71000fccbc  mov w10,#0xc406
71000fccc0  b 0x71000fcd78
71000fccc4  adrp x8,0x71052a4000
71000fccc8  ldr x8,[x8, #0xdf0]
71000fcccc  ldr x0,[x8]
71000fccd0  add x8,sp,#0x8
71000fccd4  bl 0x7100192e90
71000fccd8  ldr w8,[sp, #0x8]
71000fccdc  cbnz w8,0x71000fccf0
71000fcce0  ldr x0,[x21]
71000fcce4  bl 0x7100146ba0
71000fcce8  cmp w0,#0x4
71000fccec  b.ne 0x71000fce00
71000fccf0  mov w8,#0x6c59
71000fccf4  str w8,[sp, #0x8]
71000fccf8  add x8,sp,#0x8
71000fccfc  orr x20,x8,#0x4
71000fcd00  mov x0,x20
71000fcd04  bl 0x71039c0a80
71000fcd08  sub x1,x29,#0x60
71000fcd0c  mov x0,x20
71000fcd10  stur wzr,[x29, #-0x60]
71000fcd14  bl 0x71039c0a90
71000fcd18  add x0,x19,#0x220
71000fcd1c  add x1,sp,#0x8
71000fcd20  bl 0x71000bcf30
71000fcd24  adrp x8,0x71052a5000
71000fcd28  ldr x8,[x8, #0x238]
71000fcd2c  mov w9,#0x4
71000fcd30  strb w9,[x19, #0x130]
71000fcd34  adrp x9,0x7104290000
71000fcd38  add x9,x9,#0xd05
71000fcd3c  stp x8,xzr,[x19, #0x30]
71000fcd40  mov w0,#0x5
71000fcd44  str x9,[x19, #0x40]
71000fcd48  b 0x71000fcde0
71000fcd4c  mov w8,#0x1
71000fcd50  orr w9,wzr,#0x3
71000fcd54  mov w10,#0xa471
71000fcd58  b 0x71000fcd78
71000fcd5c  mov w8,#0x1
71000fcd60  orr w9,wzr,#0x3
71000fcd64  mov w10,#0xc420
71000fcd68  b 0x71000fcd78
71000fcd6c  mov w8,#0x1
71000fcd70  orr w9,wzr,#0x3
71000fcd74  mov w10,#0xc421
71000fcd78  strb w8,[x19, #0xfa]
71000fcd7c  add x8,sp,#0x8
71000fcd80  orr x20,x8,#0x4
71000fcd84  mov x0,x20
71000fcd88  strb w9,[x19, #0x130]
71000fcd8c  str w10,[sp, #0x8]
71000fcd90  bl 0x71039c0a80
71000fcd94  sub x1,x29,#0x60
71000fcd98  mov x0,x20
71000fcd9c  stur wzr,[x29, #-0x60]
71000fcda0  bl 0x71039c0a90
71000fcda4  add x0,x19,#0x220
71000fcda8  add x1,sp,#0x8
71000fcdac  bl 0x71000bcf30
71000fcdb0  ldr x8,[x21]
71000fcdb4  ldr x0,[x8, #0x8]
71000fcdb8  ldr x8,[x0]
71000fcdbc  ldr x8,[x8, #0x28]
71000fcdc0  blr x8
71000fcdc4  adrp x8,0x71052a5000
71000fcdc8  ldr x8,[x8, #0x240]
71000fcdcc  mov x0,xzr
71000fcdd0  stp x8,xzr,[x19, #0x30]
71000fcdd4  adrp x8,0x71043ac000
71000fcdd8  add x8,x8,#0x982
71000fcddc  str x8,[x19, #0x40]
71000fcde0  ldp x29,x30,[sp, #0x160]
71000fcde4  ldp x20,x19,[sp, #0x150]
71000fcde8  ldp x22,x21,[sp, #0x140]
71000fcdec  ldp x24,x23,[sp, #0x130]
71000fcdf0  ldp x26,x25,[sp, #0x120]
71000fcdf4  ldp x28,x27,[sp, #0x110]
71000fcdf8  add sp,sp,#0x170
71000fcdfc  ret
71000fce00  ldrb w8,[x19, #0xfb]
71000fce04  cbz w8,0x71000fce24
71000fce08  add x1,x19,#0x100
71000fce0c  add x0,x19,#0x220
71000fce10  bl 0x71000bcf30
71000fce14  adrp x8,0x71052a5000
71000fce18  ldr x8,[x8, #0x238]
71000fce1c  orr w9,wzr,#0x6
71000fce20  b 0x71000fcd30
71000fce24  ldr x0,[x19, #0x58]
71000fce28  cbz x0,0x71000fce78
71000fce2c  ldrb w8,[x0, #0x28]
71000fce30  cbz w8,0x71000fce78
71000fce34  ldr w8,[x0]
71000fce38  sub w8,w8,#0x2
71000fce3c  cmp w8,#0x3
71000fce40  b.cc 0x71000fce48
71000fce44  bl 0x71000b4260
71000fce48  str xzr,[x19, #0x58]
71000fce4c  ldr x8,[x21]
71000fce50  ldrb w9,[x8, #0x162]
71000fce54  cmp w9,#0x0
71000fce58  cset w9,eq
71000fce5c  add x8,x8,w9, UXTW  #0x3
71000fce60  ldr x0,[x8, #0x168]
71000fce64  bl 0x71000d8f90
71000fce68  mov x0,x19
71000fce6c  bl 0x7100140910
71000fce70  mov w0,#0x1
71000fce74  b 0x71000fcde0
71000fce78  ldr x22,[x21]
71000fce7c  ldrb w8,[x19, #0xf4]
71000fce80  cbz w8,0x71000fce9c
71000fce84  ldrb w8,[x19, #0x234]
71000fce88  cbz w8,0x71000fce9c
71000fce8c  ldr x8,[x19, #0x238]
71000fce90  ldr x9,[x22, #0xf0]
71000fce94  cmp x8,x9
71000fce98  b.ne 0x71000fcfc4
71000fce9c  adrp x21,0x71052a4000
71000fcea0  ldr x21,[x21, #0xc70]
71000fcea4  ldr x8,[x21]
71000fcea8  ldr x26,[x19, #0xb0]
71000fceac  ldr x24,[x19, #0x1f0]
71000fceb0  ldr x23,[x8, #0x30]
71000fceb4  ldr x0,[x22, #0xb8]
71000fceb8  add x25,x19,#0xa8
71000fcebc  cmp x26,x25
71000fcec0  b.eq 0x71000fcf10
71000fcec4  mov w20,wzr
71000fcec8  add x27,sp,#0x8
71000fcecc  ldr x1,[x26, #0x10]
71000fced0  bl 0x7100150680
71000fced4  tbz w0,#0x0,0x71000fcefc
71000fced8  ldr x0,[x22, #0xb8]
71000fcedc  ldr x1,[x26, #0x10]
71000fcee0  bl 0x7100150550
71000fcee4  cmp w0,#0x1
71000fcee8  b.eq 0x71000fcefc
71000fceec  ldr x8,[x26, #0x10]
71000fcef0  and x9,x20,#0xffff
71000fcef4  add w20,w20,#0x1
71000fcef8  str x8,[x27, x9, LSL #0x3]
71000fcefc  ldr x26,[x26, #0x8]
71000fcf00  ldr x0,[x22, #0xb8]
71000fcf04  cmp x26,x25
71000fcf08  b.ne 0x71000fcecc
71000fcf0c  b 0x71000fcf14
71000fcf10  mov w20,wzr
71000fcf14  add x1,sp,#0x8
71000fcf18  mov w2,w20
71000fcf1c  bl 0x7100150480
71000fcf20  cmp x23,x24
71000fcf24  b.hi 0x71000fcf60
71000fcf28  cmp w0,#0x1
71000fcf2c  b.ne 0x71000fcf60
71000fcf30  ldr x8,[x21]
71000fcf34  ldr x8,[x8, #0x30]
71000fcf38  ldr x9,[x19, #0x1c0]
71000fcf3c  sub x20,x8,x9
71000fcf40  bl 0x71000bb680
71000fcf44  ldr x8,[x0]
71000fcf48  mov w9,#0x7d0
71000fcf4c  mul x8,x8,x9
71000fcf50  cmp x20,x8
71000fcf54  b.ge 0x71000fcfa8
71000fcf58  mov w0,#0x5
71000fcf5c  b 0x71000fcde0
71000fcf60  adrp x8,0x71052a5000
71000fcf64  ldr x8,[x8, #0x2e0]
71000fcf68  adrp x9,0x710438b000
71000fcf6c  add x9,x9,#0xd92
71000fcf70  str x9,[x19, #0x40]
71000fcf74  stp x8,xzr,[x19, #0x30]
71000fcf78  ldr x20,[x21]
71000fcf7c  bl 0x71000bb680
71000fcf80  mov x8,x0
71000fcf84  mov x0,xzr
71000fcf88  ldr x8,[x8]
71000fcf8c  ldr x10,[x20, #0x30]
71000fcf90  mov w9,#0x7530
71000fcf94  madd x8,x8,x9,x10
71000fcf98  str x8,[x19, #0x1e0]
71000fcf9c  mov w8,#0xb
71000fcfa0  str w8,[x19, #0x230]
71000fcfa4  b 0x71000fcde0
71000fcfa8  adrp x8,0x71052a5000
71000fcfac  ldr x8,[x8, #0x348]
71000fcfb0  mov x0,xzr
71000fcfb4  stp x8,xzr,[x19, #0x30]
71000fcfb8  adrp x8,0x71043ce000
71000fcfbc  add x8,x8,#0x626
71000fcfc0  b 0x71000fcddc
71000fcfc4  strb wzr,[x19, #0x234]
71000fcfc8  strb wzr,[x19, #0xf4]
71000fcfcc  adrp x9,0x71052a5000
71000fcfd0  ldr x9,[x9, #0x340]
71000fcfd4  str x8,[x19, #0xa0]
71000fcfd8  adrp x8,0x7104307000
71000fcfdc  add x8,x8,#0x7d0
71000fcfe0  mov x0,xzr
71000fcfe4  str x8,[x19, #0x40]
71000fcfe8  stp x9,xzr,[x19, #0x30]
71000fcfec  b 0x71000fcde0
