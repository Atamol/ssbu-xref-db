// addr:      71000ffa10
// offset:    0xffa10
// name:      FUN_71000ffa10
// mangled:   
// size:      644

71000ffa10  sub sp,sp,#0x50
71000ffa14  stp x22,x21,[sp, #0x20]
71000ffa18  stp x20,x19,[sp, #0x30]
71000ffa1c  stp x29,x30,[sp, #0x40]
71000ffa20  add x29,sp,#0x40
71000ffa24  adrp x21,0x71052a5000
71000ffa28  ldr x21,[x21, #0x80]
71000ffa2c  mov x19,x0
71000ffa30  ldr x0,[x21]
71000ffa34  bl 0x7100146ba0
71000ffa38  cmp w0,#0x7
71000ffa3c  b.eq 0x71000ffa60
71000ffa40  cmp w0,#0x6
71000ffa44  b.eq 0x71000ffa70
71000ffa48  cmp w0,#0x5
71000ffa4c  b.ne 0x71000ffa80
71000ffa50  mov w8,#0x1
71000ffa54  orr w9,wzr,#0x3
71000ffa58  mov w10,#0xc406
71000ffa5c  b 0x71000ffa94
71000ffa60  mov w8,#0x1
71000ffa64  orr w9,wzr,#0x3
71000ffa68  mov w10,#0xc420
71000ffa6c  b 0x71000ffa94
71000ffa70  mov w8,#0x1
71000ffa74  orr w9,wzr,#0x3
71000ffa78  mov w10,#0xa471
71000ffa7c  b 0x71000ffa94
71000ffa80  cmp w0,#0x8
71000ffa84  b.ne 0x71000ffb10
71000ffa88  mov w8,#0x1
71000ffa8c  orr w9,wzr,#0x3
71000ffa90  mov w10,#0xc421
71000ffa94  strb w8,[x19, #0xfa]
71000ffa98  add x8,sp,#0x8
71000ffa9c  orr x20,x8,#0x4
71000ffaa0  mov x0,x20
71000ffaa4  strb w9,[x19, #0x130]
71000ffaa8  str w10,[sp, #0x8]
71000ffaac  bl 0x71039c0a80
71000ffab0  add x1,sp,#0x18
71000ffab4  mov x0,x20
71000ffab8  str wzr,[sp, #0x18]
71000ffabc  bl 0x71039c0a90
71000ffac0  add x0,x19,#0x220
71000ffac4  add x1,sp,#0x8
71000ffac8  bl 0x71000bcf30
71000ffacc  ldr x8,[x21]
71000ffad0  ldr x0,[x8, #0x8]
71000ffad4  ldr x8,[x0]
71000ffad8  ldr x8,[x8, #0x28]
71000ffadc  blr x8
71000ffae0  adrp x8,0x71052a5000
71000ffae4  ldr x8,[x8, #0x240]
71000ffae8  mov x0,xzr
71000ffaec  stp x8,xzr,[x19, #0x30]
71000ffaf0  adrp x8,0x71043ac000
71000ffaf4  add x8,x8,#0x982
71000ffaf8  str x8,[x19, #0x40]
71000ffafc  ldp x29,x30,[sp, #0x40]
71000ffb00  ldp x20,x19,[sp, #0x30]
71000ffb04  ldp x22,x21,[sp, #0x20]
71000ffb08  add sp,sp,#0x50
71000ffb0c  ret
71000ffb10  ldr x0,[x19, #0x58]
71000ffb14  cbz x0,0x71000ffb64
71000ffb18  ldrb w8,[x0, #0x28]
71000ffb1c  cbz w8,0x71000ffb64
71000ffb20  ldr w8,[x0]
71000ffb24  sub w8,w8,#0x2
71000ffb28  cmp w8,#0x3
71000ffb2c  b.cc 0x71000ffb34
71000ffb30  bl 0x71000b4260
71000ffb34  str xzr,[x19, #0x58]
71000ffb38  ldr x8,[x21]
71000ffb3c  ldrb w9,[x8, #0x162]
71000ffb40  cmp w9,#0x0
71000ffb44  cset w9,eq
71000ffb48  add x8,x8,w9, UXTW  #0x3
71000ffb4c  ldr x0,[x8, #0x168]
71000ffb50  bl 0x71000d8f90
71000ffb54  mov x0,x19
71000ffb58  bl 0x7100140910
71000ffb5c  mov w0,#0x1
71000ffb60  b 0x71000ffafc
71000ffb64  adrp x22,0x71052a4000
71000ffb68  ldr x22,[x22, #0xdf0]
71000ffb6c  ldr x0,[x22]
71000ffb70  bl 0x71001919a0
71000ffb74  tbz w0,#0x0,0x71000ffba0
71000ffb78  ldrb w8,[x19, #0xfb]
71000ffb7c  cbz w8,0x71000ffba8
71000ffb80  add x1,x19,#0x100
71000ffb84  add x0,x19,#0x220
71000ffb88  bl 0x71000bcf30
71000ffb8c  adrp x8,0x71052a5000
71000ffb90  ldr x8,[x8, #0x238]
71000ffb94  orr w9,wzr,#0x6
71000ffb98  strb w9,[x19, #0x130]
71000ffb9c  b 0x71000ffbf4
71000ffba0  mov w0,#0x5
71000ffba4  b 0x71000ffafc
71000ffba8  ldr x0,[x22]
71000ffbac  add x8,sp,#0x8
71000ffbb0  bl 0x71001919d0
71000ffbb4  ldr w8,[sp, #0x8]
71000ffbb8  cbz w8,0x71000ffc0c
71000ffbbc  mov w8,#0x1b
71000ffbc0  add x0,x19,#0x220
71000ffbc4  add x1,sp,#0x8
71000ffbc8  strb w8,[x19, #0x130]
71000ffbcc  bl 0x71000bcf30
71000ffbd0  ldr x8,[x21]
71000ffbd4  ldrb w9,[x8, #0x162]
71000ffbd8  cmp w9,#0x0
71000ffbdc  cset w9,eq
71000ffbe0  add x8,x8,w9, UXTW  #0x3
71000ffbe4  ldr x0,[x8, #0x168]
71000ffbe8  bl 0x71000d8f90
71000ffbec  adrp x8,0x71052a5000
71000ffbf0  ldr x8,[x8, #0x238]
71000ffbf4  adrp x9,0x7104290000
71000ffbf8  add x9,x9,#0xd05
71000ffbfc  str x9,[x19, #0x40]
71000ffc00  stp x8,xzr,[x19, #0x30]
71000ffc04  mov w0,#0x5
71000ffc08  b 0x71000ffafc
71000ffc0c  mov x0,x19
71000ffc10  bl 0x7100140e30
71000ffc14  mov w20,w0
71000ffc18  ldr x0,[x22]
71000ffc1c  bl 0x7100193a50
71000ffc20  ldr x8,[x21]
71000ffc24  ldrb w9,[x8, #0x162]
71000ffc28  tbz w20,#0x0,0x71000ffc4c
71000ffc2c  cmp w9,#0x0
71000ffc30  cset w9,eq
71000ffc34  add x8,x8,w9, UXTW  #0x1
71000ffc38  ldrh w1,[x8, #0x15e]
71000ffc3c  bl 0x71001aea30
71000ffc40  mov w8,#0x1
71000ffc44  strb w8,[x19, #0xfc]
71000ffc48  b 0x71000ffc58
71000ffc4c  add x8,x8,x9, LSL #0x1
71000ffc50  ldrh w1,[x8, #0x15e]
71000ffc54  bl 0x71001aea30
71000ffc58  ldr x8,[x21]
71000ffc5c  ldr x0,[x8, #0xb8]
71000ffc60  ldr x1,[x8, #0xf0]
71000ffc64  mov w2,#0x1
71000ffc68  bl 0x71001507a0
71000ffc6c  adrp x8,0x71052a5000
71000ffc70  ldr x8,[x8, #0x3b8]
71000ffc74  mov x0,xzr
71000ffc78  adrp x9,0x71043bd000
71000ffc7c  add x9,x9,#0x742
71000ffc80  str x9,[x19, #0x40]
71000ffc84  stp x8,xzr,[x19, #0x30]
71000ffc88  mov w8,#0x11
71000ffc8c  str w8,[x19, #0x230]
71000ffc90  b 0x71000ffafc
