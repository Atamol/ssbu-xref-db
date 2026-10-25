// addr:      710029cb20
// offset:    0x29cb20
// name:      FUN_710029cb20
// mangled:   
// size:      740

710029cb20  sub sp,sp,#0x60
710029cb24  stp x24,x23,[sp, #0x20]
710029cb28  stp x22,x21,[sp, #0x30]
710029cb2c  stp x20,x19,[sp, #0x40]
710029cb30  stp x29,x30,[sp, #0x50]
710029cb34  add x29,sp,#0x50
710029cb38  mov x0,x1
710029cb3c  mov w20,w5
710029cb40  mov x21,x4
710029cb44  mov x22,x3
710029cb48  mov x23,x2
710029cb4c  mov x24,x1
710029cb50  bl 0x71001ccd00
710029cb54  tbz w0,#0x0,0x710029ccd0
710029cb58  mov w0,#0x1a0
710029cb5c  bl 0x71001af850
710029cb60  mov x19,x0
710029cb64  cbz x0,0x710029cc44
710029cb68  mov w1,#0x2
710029cb6c  add x2,sp,#0x8
710029cb70  mov x0,x19
710029cb74  bl 0x71001d38d0
710029cb78  adrp x8,0x71052a8000
710029cb7c  ldr x8,[x8, #0x718]
710029cb80  add x8,x8,#0x10
710029cb84  stp xzr,xzr,[x19, #0xb0]
710029cb88  str x8,[x19]
710029cb8c  adrp x8,0x71052a6000
710029cb90  ldr x8,[x8, #0x970]
710029cb94  add x8,x8,#0x10
710029cb98  orr x9,xzr,#0x1000000000
710029cb9c  mov w10,#0x1
710029cba0  add x0,x19,#0x118
710029cba4  stp x9,xzr,[x19, #0xa0]
710029cba8  str x8,[x19, #0xc0]
710029cbac  add x8,x19,#0xc8
710029cbb0  stlr w10,[x8]
710029cbb4  strb wzr,[x19, #0xcc]
710029cbb8  adrp x8,0x71052a6000
710029cbbc  ldr x8,[x8, #0xbd0]
710029cbc0  str xzr,[x19, #0xd0]
710029cbc4  str wzr,[x19, #0xd8]
710029cbc8  stp xzr,xzr,[x19, #0xf0]
710029cbcc  stp xzr,xzr,[x19, #0x100]
710029cbd0  str xzr,[x19, #0x110]
710029cbd4  add x8,x8,#0x10
710029cbd8  str x8,[x19, #0xc0]
710029cbdc  add x8,x19,#0xe0
710029cbe0  stp x8,x8,[x19, #0xe0]
710029cbe4  mov w8,#0x1
710029cbe8  movk w8,#0x8001, LSL #16
710029cbec  add x1,sp,#0x8
710029cbf0  str w8,[sp, #0x8]
710029cbf4  bl 0x71001b4200
710029cbf8  str xzr,[x19, #0x130]
710029cbfc  str wzr,[x19, #0x138]
710029cc00  adrp x8,0x71052a4000
710029cc04  stp xzr,xzr,[x19, #0x140]
710029cc08  ldr x8,[x8, #0xd80]
710029cc0c  add x9,x19,#0x160
710029cc10  mov w10,#0x10
710029cc14  add x8,x8,#0x10
710029cc18  add x0,x19,#0x180
710029cc1c  str wzr,[x19, #0x150]
710029cc20  strb wzr,[x19, #0x160]
710029cc24  stp x9,x10,[x19, #0x170]
710029cc28  str x8,[x19, #0x158]
710029cc2c  bl 0x71002216e0
710029cc30  adrp x8,0x71052a8000
710029cc34  ldr x8,[x8, #0x720]
710029cc38  str xzr,[x19, #0x198]
710029cc3c  add x8,x8,#0x10
710029cc40  stp x8,xzr,[x19, #0x188]
710029cc44  ldr w1,[x24, #0x18]
710029cc48  mov x0,x19
710029cc4c  mov x2,x23
710029cc50  mov x3,x22
710029cc54  mov x4,x21
710029cc58  mov w5,w20
710029cc5c  bl 0x710029ce10
710029cc60  tbz w0,#0x0,0x710029cd0c
710029cc64  adrp x8,0x71052a4000
710029cc68  ldr x8,[x8, #0xda8]
710029cc6c  adrp x21,0x71052a4000
710029cc70  ldrb w8,[x8]
710029cc74  ldr x21,[x21, #0xdb0]
710029cc78  add x20,x21,#0x28
710029cc7c  cbz w8,0x710029ccb8
710029cc80  adrp x8,0x71052a4000
710029cc84  ldr x8,[x8, #0xdb8]
710029cc88  ldr x0,[x8]
710029cc8c  bl 0x7101717960
710029cc90  ldr w8,[x0]
710029cc94  cbz w8,0x710029ccb8
710029cc98  ldr x10,[x21, #0xa0]
710029cc9c  ldp x9,x10,[x10]
710029cca0  sub x10,x10,x9
710029cca4  asr x10,x10,#0x3
710029cca8  cmp x10,x8
710029ccac  b.ls 0x710029cda0
710029ccb0  ldr x8,[x9, x8, LSL #0x3]
710029ccb4  add x20,x8,#0x20
710029ccb8  ldr x8,[x20]
710029ccbc  cbz x8,0x710029cdb8
710029ccc0  ldr x8,[x8, #0x10]
710029ccc4  cbz x8,0x710029cdb8
710029ccc8  ldr x0,[x8, #0x10]
710029cccc  b 0x710029cdbc
710029ccd0  mov w8,#0x1
710029ccd4  movk w8,#0x8001, LSL #16
710029ccd8  add w8,w8,#0xc
710029ccdc  add x0,sp,#0x8
710029cce0  add x1,sp,#0x4
710029cce4  str w8,[sp, #0x4]
710029cce8  bl 0x71001b4200
710029ccec  ldr w8,[sp, #0x8]
710029ccf0  adrp x9,0x71052a5000
710029ccf4  ldr x9,[x9, #0x110]
710029ccf8  cmp w8,#0x0
710029ccfc  csel x8,x9,xzr,ge
710029cd00  cmp x8,#0x0
710029cd04  cset w0,ne
710029cd08  b 0x710029cdcc
710029cd0c  add x8,x19,#0x8
710029cd10  ldar w11,[x8]
710029cd14  ldaxr w10,[x8]
710029cd18  sub w9,w11,#0x1
710029cd1c  cmp w10,w11
710029cd20  b.ne 0x710029cd38
710029cd24  stlxr w11,w9,[x8]
710029cd28  cbnz w11,0x710029cd3c
710029cd2c  mov w11,#0x1
710029cd30  tbz w11,#0x0,0x710029cd44
710029cd34  b 0x710029cd8c
710029cd38  clrex 
710029cd3c  mov w11,wzr
710029cd40  tbnz w11,#0x0,0x710029cd8c
710029cd44  ldaxr w11,[x8]
710029cd48  sub w9,w10,#0x1
710029cd4c  cmp w11,w10
710029cd50  b.ne 0x710029cd6c
710029cd54  stlxr w10,w9,[x8]
710029cd58  cbz w10,0x710029cd80
710029cd5c  mov w12,wzr
710029cd60  mov w10,w11
710029cd64  cbz w12,0x710029cd44
710029cd68  b 0x710029cd8c
710029cd6c  clrex 
710029cd70  mov w12,wzr
710029cd74  mov w10,w11
710029cd78  cbz w12,0x710029cd44
710029cd7c  b 0x710029cd8c
710029cd80  mov w12,#0x1
710029cd84  mov w10,w11
710029cd88  cbz w12,0x710029cd44
710029cd8c  cbnz w9,0x710029cd98
710029cd90  ldrb w8,[x19, #0xc]
710029cd94  cbz w8,0x710029cde4
710029cd98  mov w0,wzr
710029cd9c  b 0x710029cdcc
710029cda0  adrp x0,0x71042c4000
710029cda4  add x0,x0,#0x35f
710029cda8  mov w1,#0x47
710029cdac  orr w2,wzr,#0xe0000003
710029cdb0  mov w3,wzr
710029cdb4  bl 0x71001b1300
710029cdb8  mov x0,xzr
710029cdbc  mov x1,x19
710029cdc0  mov w2,wzr
710029cdc4  bl 0x71001ccdf0
710029cdc8  mov w0,#0x1
710029cdcc  ldp x29,x30,[sp, #0x50]
710029cdd0  ldp x20,x19,[sp, #0x40]
710029cdd4  ldp x22,x21,[sp, #0x30]
710029cdd8  ldp x24,x23,[sp, #0x20]
710029cddc  add sp,sp,#0x60
710029cde0  ret
710029cde4  mov w8,#0x1
710029cde8  strb w8,[x19, #0xc]
710029cdec  ldr x8,[x19]
710029cdf0  ldr x8,[x8, #0x8]
710029cdf4  mov x0,x19
710029cdf8  blr x8
710029cdfc  mov w0,wzr
710029ce00  b 0x710029cdcc
