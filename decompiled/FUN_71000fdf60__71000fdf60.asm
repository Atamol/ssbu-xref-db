// addr:      71000fdf60
// offset:    0xfdf60
// name:      FUN_71000fdf60
// mangled:   
// size:      580

71000fdf60  sub sp,sp,#0x40
71000fdf64  str x21,[sp, #0x10]
71000fdf68  stp x20,x19,[sp, #0x20]
71000fdf6c  stp x29,x30,[sp, #0x30]
71000fdf70  add x29,sp,#0x30
71000fdf74  adrp x21,0x71052a5000
71000fdf78  ldr x21,[x21, #0x80]
71000fdf7c  mov x19,x0
71000fdf80  ldr x0,[x21]
71000fdf84  bl 0x7100146ba0
71000fdf88  sub w8,w0,#0x5
71000fdf8c  cmp w8,#0x3
71000fdf90  b.hi 0x71000fdfb8
71000fdf94  adrp x9,0x7104496000
71000fdf98  add x9,x9,#0x3ec
71000fdf9c  ldrsw x8,[x9, x8, LSL #0x2]
71000fdfa0  add x8,x8,x9
71000fdfa4  br x8
71000fdfa8  mov w8,#0x1
71000fdfac  orr w9,wzr,#0x3
71000fdfb0  mov w10,#0xc406
71000fdfb4  b 0x71000fe06c
71000fdfb8  adrp x8,0x71052a4000
71000fdfbc  ldr x8,[x8, #0xdf0]
71000fdfc0  ldr x0,[x8]
71000fdfc4  mov x8,sp
71000fdfc8  bl 0x7100192e90
71000fdfcc  ldr w8,[sp]
71000fdfd0  cbnz w8,0x71000fdfe4
71000fdfd4  ldr x0,[x21]
71000fdfd8  bl 0x7100146ba0
71000fdfdc  cmp w0,#0x4
71000fdfe0  b.ne 0x71000fe0e8
71000fdfe4  mov w8,#0x6c59
71000fdfe8  str w8,[sp]
71000fdfec  mov x8,sp
71000fdff0  orr x20,x8,#0x4
71000fdff4  mov x0,x20
71000fdff8  bl 0x71039c0a80
71000fdffc  add x1,sp,#0x18
71000fe000  mov x0,x20
71000fe004  str wzr,[sp, #0x18]
71000fe008  bl 0x71039c0a90
71000fe00c  add x0,x19,#0x220
71000fe010  mov x1,sp
71000fe014  bl 0x71000bcf30
71000fe018  adrp x8,0x71052a5000
71000fe01c  ldr x8,[x8, #0x238]
71000fe020  mov w9,#0x4
71000fe024  strb w9,[x19, #0x130]
71000fe028  adrp x9,0x7104290000
71000fe02c  add x9,x9,#0xd05
71000fe030  stp x8,xzr,[x19, #0x30]
71000fe034  mov w0,#0x5
71000fe038  str x9,[x19, #0x40]
71000fe03c  b 0x71000fe0d4
71000fe040  mov w8,#0x1
71000fe044  orr w9,wzr,#0x3
71000fe048  mov w10,#0xa471
71000fe04c  b 0x71000fe06c
71000fe050  mov w8,#0x1
71000fe054  orr w9,wzr,#0x3
71000fe058  mov w10,#0xc420
71000fe05c  b 0x71000fe06c
71000fe060  mov w8,#0x1
71000fe064  orr w9,wzr,#0x3
71000fe068  mov w10,#0xc421
71000fe06c  strb w8,[x19, #0xfa]
71000fe070  mov x8,sp
71000fe074  orr x20,x8,#0x4
71000fe078  mov x0,x20
71000fe07c  strb w9,[x19, #0x130]
71000fe080  str w10,[sp]
71000fe084  bl 0x71039c0a80
71000fe088  add x1,sp,#0x18
71000fe08c  mov x0,x20
71000fe090  str wzr,[sp, #0x18]
71000fe094  bl 0x71039c0a90
71000fe098  add x0,x19,#0x220
71000fe09c  mov x1,sp
71000fe0a0  bl 0x71000bcf30
71000fe0a4  ldr x8,[x21]
71000fe0a8  ldr x0,[x8, #0x8]
71000fe0ac  ldr x8,[x0]
71000fe0b0  ldr x8,[x8, #0x28]
71000fe0b4  blr x8
71000fe0b8  adrp x8,0x71052a5000
71000fe0bc  ldr x8,[x8, #0x240]
71000fe0c0  mov x0,xzr
71000fe0c4  stp x8,xzr,[x19, #0x30]
71000fe0c8  adrp x8,0x71043ac000
71000fe0cc  add x8,x8,#0x982
71000fe0d0  str x8,[x19, #0x40]
71000fe0d4  ldp x29,x30,[sp, #0x30]
71000fe0d8  ldr x21,[sp, #0x10]
71000fe0dc  ldp x20,x19,[sp, #0x20]
71000fe0e0  add sp,sp,#0x40
71000fe0e4  ret
71000fe0e8  ldrb w8,[x19, #0xfb]
71000fe0ec  cbz w8,0x71000fe10c
71000fe0f0  add x1,x19,#0x100
71000fe0f4  add x0,x19,#0x220
71000fe0f8  bl 0x71000bcf30
71000fe0fc  adrp x8,0x71052a5000
71000fe100  ldr x8,[x8, #0x238]
71000fe104  orr w9,wzr,#0x6
71000fe108  b 0x71000fe024
71000fe10c  ldr x8,[x21]
71000fe110  ldrb w9,[x8, #0x162]
71000fe114  cmp w9,#0x0
71000fe118  cset w9,eq
71000fe11c  add x8,x8,w9, UXTW  #0x3
71000fe120  ldr x0,[x8, #0x168]
71000fe124  ldr x8,[x0]
71000fe128  ldr w2,[x19, #0xf0]
71000fe12c  add x1,x19,#0x60
71000fe130  ldr x9,[x8, #0xb0]
71000fe134  mov x8,sp
71000fe138  blr x9
71000fe13c  ldr w8,[sp]
71000fe140  cbz w8,0x71000fe188
71000fe144  mov w8,#0x16
71000fe148  add x0,x19,#0x220
71000fe14c  mov x1,sp
71000fe150  strb w8,[x19, #0x130]
71000fe154  bl 0x71000bcf30
71000fe158  ldr x8,[x21]
71000fe15c  ldrb w9,[x8, #0x162]
71000fe160  cmp w9,#0x0
71000fe164  cset w9,eq
71000fe168  add x8,x8,w9, UXTW  #0x3
71000fe16c  ldr x0,[x8, #0x168]
71000fe170  bl 0x71000d8f90
71000fe174  adrp x9,0x71052a5000
71000fe178  ldr x9,[x9, #0x238]
71000fe17c  adrp x8,0x7104290000
71000fe180  add x8,x8,#0xd05
71000fe184  b 0x71000fe198
71000fe188  adrp x9,0x71052a5000
71000fe18c  ldr x9,[x9, #0x378]
71000fe190  adrp x8,0x71043df000
71000fe194  add x8,x8,#0x26e
71000fe198  mov w0,#0x5
71000fe19c  stp x9,xzr,[x19, #0x30]
71000fe1a0  b 0x71000fe0d0
