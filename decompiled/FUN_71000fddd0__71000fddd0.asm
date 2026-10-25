// addr:      71000fddd0
// offset:    0xfddd0
// name:      FUN_71000fddd0
// mangled:   
// size:      392

71000fddd0  sub sp,sp,#0x40
71000fddd4  str x21,[sp, #0x10]
71000fddd8  stp x20,x19,[sp, #0x20]
71000fdddc  stp x29,x30,[sp, #0x30]
71000fdde0  add x29,sp,#0x30
71000fdde4  adrp x21,0x71052a5000
71000fdde8  ldr x21,[x21, #0x80]
71000fddec  mov x19,x0
71000fddf0  ldr x0,[x21]
71000fddf4  bl 0x7100146ba0
71000fddf8  cmp w0,#0x7
71000fddfc  b.eq 0x71000fde20
71000fde00  cmp w0,#0x6
71000fde04  b.eq 0x71000fde30
71000fde08  cmp w0,#0x5
71000fde0c  b.ne 0x71000fde40
71000fde10  mov w8,#0x1
71000fde14  orr w9,wzr,#0x3
71000fde18  mov w10,#0xc406
71000fde1c  b 0x71000fde54
71000fde20  mov w8,#0x1
71000fde24  orr w9,wzr,#0x3
71000fde28  mov w10,#0xc420
71000fde2c  b 0x71000fde54
71000fde30  mov w8,#0x1
71000fde34  orr w9,wzr,#0x3
71000fde38  mov w10,#0xa471
71000fde3c  b 0x71000fde54
71000fde40  cmp w0,#0x8
71000fde44  b.ne 0x71000fded0
71000fde48  mov w8,#0x1
71000fde4c  orr w9,wzr,#0x3
71000fde50  mov w10,#0xc421
71000fde54  strb w8,[x19, #0xfa]
71000fde58  mov x8,sp
71000fde5c  orr x20,x8,#0x4
71000fde60  mov x0,x20
71000fde64  strb w9,[x19, #0x130]
71000fde68  str w10,[sp]
71000fde6c  bl 0x71039c0a80
71000fde70  add x1,sp,#0x18
71000fde74  mov x0,x20
71000fde78  str wzr,[sp, #0x18]
71000fde7c  bl 0x71039c0a90
71000fde80  add x0,x19,#0x220
71000fde84  mov x1,sp
71000fde88  bl 0x71000bcf30
71000fde8c  ldr x8,[x21]
71000fde90  ldr x0,[x8, #0x8]
71000fde94  ldr x8,[x0]
71000fde98  ldr x8,[x8, #0x28]
71000fde9c  blr x8
71000fdea0  adrp x8,0x71052a5000
71000fdea4  ldr x8,[x8, #0x240]
71000fdea8  mov x0,xzr
71000fdeac  stp x8,xzr,[x19, #0x30]
71000fdeb0  adrp x8,0x71043ac000
71000fdeb4  add x8,x8,#0x982
71000fdeb8  str x8,[x19, #0x40]
71000fdebc  ldp x29,x30,[sp, #0x30]
71000fdec0  ldr x21,[sp, #0x10]
71000fdec4  ldp x20,x19,[sp, #0x20]
71000fdec8  add sp,sp,#0x40
71000fdecc  ret
71000fded0  ldrb w8,[x19, #0xfb]
71000fded4  cbz w8,0x71000fdf0c
71000fded8  add x1,x19,#0x100
71000fdedc  add x0,x19,#0x220
71000fdee0  bl 0x71000bcf30
71000fdee4  adrp x8,0x71052a5000
71000fdee8  ldr x8,[x8, #0x238]
71000fdeec  orr w9,wzr,#0x6
71000fdef0  strb w9,[x19, #0x130]
71000fdef4  adrp x9,0x7104290000
71000fdef8  add x9,x9,#0xd05
71000fdefc  stp x8,xzr,[x19, #0x30]
71000fdf00  str x9,[x19, #0x40]
71000fdf04  mov w0,#0x5
71000fdf08  b 0x71000fdebc
71000fdf0c  ldr x8,[x21]
71000fdf10  ldr x0,[x8, #0xb8]
71000fdf14  ldr x1,[x19, #0xa0]
71000fdf18  bl 0x7100150680
71000fdf1c  tbz w0,#0x0,0x71000fdf34
71000fdf20  mov x0,x19
71000fdf24  bl 0x7100140060
71000fdf28  tbz w0,#0x0,0x71000fdf50
71000fdf2c  ldrb w8,[x19, #0xf7]
71000fdf30  cbz w8,0x71000fdf50
71000fdf34  adrp x8,0x71052a5000
71000fdf38  ldr x8,[x8, #0x350]
71000fdf3c  mov x0,xzr
71000fdf40  stp x8,xzr,[x19, #0x30]
71000fdf44  adrp x8,0x71043df000
71000fdf48  add x8,x8,#0x23e
71000fdf4c  b 0x71000fdeb8
71000fdf50  mov w0,#0x5
71000fdf54  b 0x71000fdebc
