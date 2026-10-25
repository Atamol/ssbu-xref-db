// addr:      71001ffb10
// offset:    0x1ffb10
// name:      FUN_71001ffb10
// mangled:   
// size:      388

71001ffb10  str x21,[sp, #-0x30]!
71001ffb14  stp x20,x19,[sp, #0x10]
71001ffb18  stp x29,x30,[sp, #0x20]
71001ffb1c  add x29,sp,#0x20
71001ffb20  adrp x8,0x71052a4000
71001ffb24  ldr x8,[x8, #0xda8]
71001ffb28  adrp x21,0x71052a4000
71001ffb2c  ldrb w8,[x8]
71001ffb30  ldr x21,[x21, #0xdb0]
71001ffb34  mov x19,x0
71001ffb38  add x20,x21,#0x28
71001ffb3c  cbz w8,0x71001ffb78
71001ffb40  adrp x8,0x71052a4000
71001ffb44  ldr x8,[x8, #0xdb8]
71001ffb48  ldr x0,[x8]
71001ffb4c  bl 0x7101717960
71001ffb50  ldr w8,[x0]
71001ffb54  cbz w8,0x71001ffb78
71001ffb58  ldr x10,[x21, #0xa0]
71001ffb5c  ldp x9,x10,[x10]
71001ffb60  sub x10,x10,x9
71001ffb64  asr x10,x10,#0x3
71001ffb68  cmp x10,x8
71001ffb6c  b.ls 0x71001ffb90
71001ffb70  ldr x8,[x9, x8, LSL #0x3]
71001ffb74  add x20,x8,#0x20
71001ffb78  ldr x8,[x20]
71001ffb7c  cbz x8,0x71001ffba8
71001ffb80  ldr x8,[x8, #0x10]
71001ffb84  cbz x8,0x71001ffba8
71001ffb88  ldr x20,[x8, #0x10]
71001ffb8c  b 0x71001ffbac
71001ffb90  adrp x0,0x71042c4000
71001ffb94  add x0,x0,#0x35f
71001ffb98  mov w1,#0x47
71001ffb9c  orr w2,wzr,#0xe0000003
71001ffba0  mov w3,wzr
71001ffba4  bl 0x71001b1300
71001ffba8  mov x20,xzr
71001ffbac  ldr x8,[x20, #0x78]!
71001ffbb0  ldr x8,[x8, #0x10]
71001ffbb4  mov x0,x20
71001ffbb8  blr x8
71001ffbbc  ldr x1,[x19, #0xf8]
71001ffbc0  cbz x1,0x71001ffc78
71001ffbc4  ldr x8,[x19, #0x8]
71001ffbc8  add x0,x8,#0x40
71001ffbcc  bl 0x7100201730
71001ffbd0  ldr x0,[x19, #0xf8]
71001ffbd4  add x8,x0,#0x8
71001ffbd8  ldar w11,[x8]
71001ffbdc  ldaxr w10,[x8]
71001ffbe0  sub w9,w11,#0x1
71001ffbe4  cmp w10,w11
71001ffbe8  b.ne 0x71001ffc00
71001ffbec  stlxr w11,w9,[x8]
71001ffbf0  cbnz w11,0x71001ffc04
71001ffbf4  mov w11,#0x1
71001ffbf8  tbz w11,#0x0,0x71001ffc0c
71001ffbfc  b 0x71001ffc54
71001ffc00  clrex 
71001ffc04  mov w11,wzr
71001ffc08  tbnz w11,#0x0,0x71001ffc54
71001ffc0c  ldaxr w11,[x8]
71001ffc10  sub w9,w10,#0x1
71001ffc14  cmp w11,w10
71001ffc18  b.ne 0x71001ffc34
71001ffc1c  stlxr w10,w9,[x8]
71001ffc20  cbz w10,0x71001ffc48
71001ffc24  mov w12,wzr
71001ffc28  mov w10,w11
71001ffc2c  cbz w12,0x71001ffc0c
71001ffc30  b 0x71001ffc54
71001ffc34  clrex 
71001ffc38  mov w12,wzr
71001ffc3c  mov w10,w11
71001ffc40  cbz w12,0x71001ffc0c
71001ffc44  b 0x71001ffc54
71001ffc48  mov w12,#0x1
71001ffc4c  mov w10,w11
71001ffc50  cbz w12,0x71001ffc0c
71001ffc54  cbnz w9,0x71001ffc74
71001ffc58  ldrb w8,[x0, #0xc]
71001ffc5c  cbnz w8,0x71001ffc74
71001ffc60  mov w8,#0x1
71001ffc64  strb w8,[x0, #0xc]
71001ffc68  ldr x8,[x0]
71001ffc6c  ldr x8,[x8, #0x8]
71001ffc70  blr x8
71001ffc74  str xzr,[x19, #0xf8]
71001ffc78  ldr x8,[x20]
71001ffc7c  ldr x1,[x8, #0x20]
71001ffc80  mov x0,x20
71001ffc84  ldp x29,x30,[sp, #0x20]
71001ffc88  ldp x20,x19,[sp, #0x10]
71001ffc8c  ldr x21,[sp], #0x30
71001ffc90  br x1
