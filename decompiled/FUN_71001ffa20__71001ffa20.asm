// addr:      71001ffa20
// offset:    0x1ffa20
// name:      FUN_71001ffa20
// mangled:   
// size:      232

71001ffa20  stp x22,x21,[sp, #-0x30]!
71001ffa24  stp x20,x19,[sp, #0x10]
71001ffa28  stp x29,x30,[sp, #0x20]
71001ffa2c  add x29,sp,#0x20
71001ffa30  adrp x8,0x71052a4000
71001ffa34  ldr x8,[x8, #0xda8]
71001ffa38  adrp x22,0x71052a4000
71001ffa3c  ldrb w8,[x8]
71001ffa40  ldr x22,[x22, #0xdb0]
71001ffa44  mov w20,w1
71001ffa48  mov x19,x0
71001ffa4c  add x21,x22,#0x28
71001ffa50  cbz w8,0x71001ffa8c
71001ffa54  adrp x8,0x71052a4000
71001ffa58  ldr x8,[x8, #0xdb8]
71001ffa5c  ldr x0,[x8]
71001ffa60  bl 0x7101717960
71001ffa64  ldr w8,[x0]
71001ffa68  cbz w8,0x71001ffa8c
71001ffa6c  ldr x10,[x22, #0xa0]
71001ffa70  ldp x9,x10,[x10]
71001ffa74  sub x10,x10,x9
71001ffa78  asr x10,x10,#0x3
71001ffa7c  cmp x10,x8
71001ffa80  b.ls 0x71001ffaa4
71001ffa84  ldr x8,[x9, x8, LSL #0x3]
71001ffa88  add x21,x8,#0x20
71001ffa8c  ldr x8,[x21]
71001ffa90  cbz x8,0x71001ffabc
71001ffa94  ldr x8,[x8, #0x10]
71001ffa98  cbz x8,0x71001ffabc
71001ffa9c  ldr x21,[x8, #0x10]
71001ffaa0  b 0x71001ffac0
71001ffaa4  adrp x0,0x71042c4000
71001ffaa8  add x0,x0,#0x35f
71001ffaac  mov w1,#0x47
71001ffab0  orr w2,wzr,#0xe0000003
71001ffab4  mov w3,wzr
71001ffab8  bl 0x71001b1300
71001ffabc  mov x21,xzr
71001ffac0  ldr x8,[x21, #0x78]!
71001ffac4  ldr x8,[x8, #0x10]
71001ffac8  mov x0,x21
71001ffacc  blr x8
71001ffad0  ldr x8,[x19, #0xf8]
71001ffad4  str w20,[x19, #0x110]
71001ffad8  cbz x8,0x71001ffae4
71001ffadc  mov x0,x19
71001ffae0  bl 0x71001ffb10
71001ffae4  mov x0,x19
71001ffae8  bl 0x71001ffca0
71001ffaec  ldr x8,[x21]
71001ffaf0  ldr x1,[x8, #0x20]
71001ffaf4  mov x0,x21
71001ffaf8  ldp x29,x30,[sp, #0x20]
71001ffafc  ldp x20,x19,[sp, #0x10]
71001ffb00  ldp x22,x21,[sp], #0x30
71001ffb04  br x1
