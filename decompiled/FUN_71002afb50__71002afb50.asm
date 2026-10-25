// addr:      71002afb50
// offset:    0x2afb50
// name:      FUN_71002afb50
// mangled:   
// size:      488

71002afb50  sub sp,sp,#0xd0
71002afb54  stp x24,x23,[sp, #0x90]
71002afb58  stp x22,x21,[sp, #0xa0]
71002afb5c  stp x20,x19,[sp, #0xb0]
71002afb60  stp x29,x30,[sp, #0xc0]
71002afb64  add x29,sp,#0xc0
71002afb68  mov x20,x0
71002afb6c  add x0,sp,#0x20
71002afb70  mov x21,x3
71002afb74  mov x23,x2
71002afb78  mov x19,x1
71002afb7c  bl 0x71001e6720
71002afb80  adrp x8,0x71052a4000
71002afb84  ldr x8,[x8, #0xda8]
71002afb88  adrp x24,0x71052a4000
71002afb8c  ldrb w8,[x8]
71002afb90  ldr x24,[x24, #0xdb0]
71002afb94  add x22,x24,#0x28
71002afb98  cbz w8,0x71002afbd4
71002afb9c  adrp x8,0x71052a4000
71002afba0  ldr x8,[x8, #0xdb8]
71002afba4  ldr x0,[x8]
71002afba8  bl 0x7101717960
71002afbac  ldr w8,[x0]
71002afbb0  cbz w8,0x71002afbd4
71002afbb4  ldr x10,[x24, #0xa0]
71002afbb8  ldp x9,x10,[x10]
71002afbbc  sub x10,x10,x9
71002afbc0  asr x10,x10,#0x3
71002afbc4  cmp x10,x8
71002afbc8  b.ls 0x71002afbec
71002afbcc  ldr x8,[x9, x8, LSL #0x3]
71002afbd0  add x22,x8,#0x20
71002afbd4  ldr x8,[x22]
71002afbd8  cbz x8,0x71002afc04
71002afbdc  ldr x8,[x8, #0x10]
71002afbe0  cbz x8,0x71002afc04
71002afbe4  ldr x22,[x8, #0x10]
71002afbe8  b 0x71002afc08
71002afbec  adrp x0,0x71042c4000
71002afbf0  add x0,x0,#0x35f
71002afbf4  mov w1,#0x47
71002afbf8  orr w2,wzr,#0xe0000003
71002afbfc  mov w3,wzr
71002afc00  bl 0x71001b1300
71002afc04  mov x22,xzr
71002afc08  ldr x8,[x22, #0x78]!
71002afc0c  ldr x8,[x8, #0x10]
71002afc10  mov x0,x22
71002afc14  blr x8
71002afc18  ldrh w1,[x20, #0x48]
71002afc1c  add x0,sp,#0x20
71002afc20  mov w2,#0x1
71002afc24  bl 0x710022b480
71002afc28  add x0,sp,#0x20
71002afc2c  mov x1,x19
71002afc30  bl 0x710022b390
71002afc34  tbz w0,#0x0,0x71002afc88
71002afc38  add x0,sp,#0x20
71002afc3c  orr w1,wzr,#0xc
71002afc40  bl 0x710022b400
71002afc44  add x0,sp,#0x20
71002afc48  mov x1,x23
71002afc4c  bl 0x71002b0230
71002afc50  ldrb w8,[sp, #0x28]
71002afc54  cbz w8,0x71002afc90
71002afc58  mov w8,#0xa
71002afc5c  movk w8,#0x8001, LSL #16
71002afc60  add x0,sp,#0x8
71002afc64  add x1,sp,#0x4
71002afc68  str w8,[sp, #0x4]
71002afc6c  bl 0x71001b4200
71002afc70  add x1,sp,#0x8
71002afc74  mov x0,x19
71002afc78  bl 0x71001d0c90
71002afc7c  mov w23,wzr
71002afc80  mov w21,#0x1
71002afc84  b 0x71002afcec
71002afc88  mov w21,wzr
71002afc8c  b 0x71002afce8
71002afc90  cbz x19,0x71002afca0
71002afc94  mov x0,x19
71002afc98  mov x1,x21
71002afc9c  bl 0x710022b430
71002afca0  adrp x8,0x71052a8000
71002afca4  adrp x9,0x71052a8000
71002afca8  ldr x8,[x8, #0x988]
71002afcac  ldr x9,[x9, #0x9a8]
71002afcb0  str x9,[x8, #0x58]
71002afcb4  ldrb w8,[x20, #0x70]
71002afcb8  cbz w8,0x71002afcd4
71002afcbc  mov w1,#0x10
71002afcc0  mov x0,x20
71002afcc4  bl 0x710022b500
71002afcc8  tbz w0,#0x0,0x71002afcd4
71002afccc  mov w23,#0x1
71002afcd0  b 0x71002afcec
71002afcd4  add x2,sp,#0x20
71002afcd8  mov x0,x20
71002afcdc  mov x1,x19
71002afce0  bl 0x710022a7f0
71002afce4  mov w21,w0
71002afce8  mov w23,wzr
71002afcec  ldr x8,[x22]
71002afcf0  ldr x8,[x8, #0x20]
71002afcf4  mov x0,x22
71002afcf8  blr x8
71002afcfc  cbz w23,0x71002afd14
71002afd00  add x2,sp,#0x20
71002afd04  mov x0,x20
71002afd08  mov x1,x19
71002afd0c  bl 0x710022a7f0
71002afd10  mov w21,w0
71002afd14  add x0,sp,#0x20
71002afd18  bl 0x71001e6910
71002afd1c  and w0,w21,#0x1
71002afd20  ldp x29,x30,[sp, #0xc0]
71002afd24  ldp x20,x19,[sp, #0xb0]
71002afd28  ldp x22,x21,[sp, #0xa0]
71002afd2c  ldp x24,x23,[sp, #0x90]
71002afd30  add sp,sp,#0xd0
71002afd34  ret
