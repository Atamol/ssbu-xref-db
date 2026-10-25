// addr:      71000fea60
// offset:    0xfea60
// name:      FUN_71000fea60
// mangled:   
// size:      472

71000fea60  sub sp,sp,#0x40
71000fea64  str x21,[sp, #0x10]
71000fea68  stp x20,x19,[sp, #0x20]
71000fea6c  stp x29,x30,[sp, #0x30]
71000fea70  add x29,sp,#0x30
71000fea74  adrp x21,0x71052a5000
71000fea78  ldr x21,[x21, #0x80]
71000fea7c  mov x19,x0
71000fea80  ldr x0,[x21]
71000fea84  bl 0x7100146ba0
71000fea88  cmp w0,#0x7
71000fea8c  b.eq 0x71000feab0
71000fea90  cmp w0,#0x6
71000fea94  b.eq 0x71000feac0
71000fea98  cmp w0,#0x5
71000fea9c  b.ne 0x71000fead0
71000feaa0  mov w8,#0x1
71000feaa4  orr w9,wzr,#0x3
71000feaa8  mov w10,#0xc406
71000feaac  b 0x71000feae4
71000feab0  mov w8,#0x1
71000feab4  orr w9,wzr,#0x3
71000feab8  mov w10,#0xc420
71000feabc  b 0x71000feae4
71000feac0  mov w8,#0x1
71000feac4  orr w9,wzr,#0x3
71000feac8  mov w10,#0xa471
71000feacc  b 0x71000feae4
71000fead0  cmp w0,#0x8
71000fead4  b.ne 0x71000feb60
71000fead8  mov w8,#0x1
71000feadc  orr w9,wzr,#0x3
71000feae0  mov w10,#0xc421
71000feae4  strb w8,[x19, #0xfa]
71000feae8  mov x8,sp
71000feaec  orr x20,x8,#0x4
71000feaf0  mov x0,x20
71000feaf4  strb w9,[x19, #0x130]
71000feaf8  str w10,[sp]
71000feafc  bl 0x71039c0a80
71000feb00  add x1,sp,#0x18
71000feb04  mov x0,x20
71000feb08  str wzr,[sp, #0x18]
71000feb0c  bl 0x71039c0a90
71000feb10  add x0,x19,#0x220
71000feb14  mov x1,sp
71000feb18  bl 0x71000bcf30
71000feb1c  ldr x8,[x21]
71000feb20  ldr x0,[x8, #0x8]
71000feb24  ldr x8,[x0]
71000feb28  ldr x8,[x8, #0x28]
71000feb2c  blr x8
71000feb30  adrp x8,0x71052a5000
71000feb34  ldr x8,[x8, #0x240]
71000feb38  mov x0,xzr
71000feb3c  stp x8,xzr,[x19, #0x30]
71000feb40  adrp x8,0x71043ac000
71000feb44  add x8,x8,#0x982
71000feb48  str x8,[x19, #0x40]
71000feb4c  ldp x29,x30,[sp, #0x30]
71000feb50  ldr x21,[sp, #0x10]
71000feb54  ldp x20,x19,[sp, #0x20]
71000feb58  add sp,sp,#0x40
71000feb5c  ret
71000feb60  ldr x0,[x19, #0x58]
71000feb64  cbz x0,0x71000feb98
71000feb68  ldrb w8,[x0, #0x28]
71000feb6c  cbz w8,0x71000feb98
71000feb70  ldr w8,[x0]
71000feb74  sub w8,w8,#0x2
71000feb78  cmp w8,#0x3
71000feb7c  b.cc 0x71000feb84
71000feb80  bl 0x71000b4260
71000feb84  mov x0,x19
71000feb88  str xzr,[x19, #0x58]
71000feb8c  bl 0x7100140910
71000feb90  mov w0,#0x1
71000feb94  b 0x71000feb4c
71000feb98  ldr x8,[x21]
71000feb9c  ldrb w9,[x8, #0x162]
71000feba0  cmp w9,#0x0
71000feba4  cset w9,eq
71000feba8  add x8,x8,w9, UXTW  #0x3
71000febac  ldrb w9,[x19, #0x263]
71000febb0  ldr x0,[x8, #0x168]
71000febb4  ldr x8,[x0]
71000febb8  cbz w9,0x71000fec24
71000febbc  ldr x8,[x8, #0x78]
71000febc0  blr x8
71000febc4  tbz w0,#0x0,0x71000fec30
71000febc8  ldr x0,[x21]
71000febcc  mov w1,wzr
71000febd0  bl 0x7100149290
71000febd4  ldr x0,[x21]
71000febd8  mov w1,wzr
71000febdc  bl 0x7100149250
71000febe0  adrp x8,0x71052a4000
71000febe4  ldr x8,[x8, #0xc70]
71000febe8  ldr x20,[x8]
71000febec  bl 0x71000bb680
71000febf0  mov x8,x0
71000febf4  adrp x10,0x71052a5000
71000febf8  ldr x9,[x20, #0x30]
71000febfc  ldr x10,[x10, #0x360]
71000fec00  ldr x8,[x8]
71000fec04  mov w11,#0x1388
71000fec08  madd x8,x8,x11,x9
71000fec0c  mov x0,xzr
71000fec10  str x8,[x19, #0x208]
71000fec14  adrp x8,0x7104411000
71000fec18  add x8,x8,#0xa7e
71000fec1c  stp x10,xzr,[x19, #0x30]
71000fec20  b 0x71000feb48
71000fec24  ldr x8,[x8, #0x68]
71000fec28  blr x8
71000fec2c  tbnz w0,#0x0,0x71000febc8
71000fec30  mov w0,#0x5
71000fec34  b 0x71000feb4c
