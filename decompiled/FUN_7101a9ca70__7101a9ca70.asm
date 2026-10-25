// addr:      7101a9ca70
// offset:    0x1a9ca70
// name:      FUN_7101a9ca70
// mangled:   
// size:      708

7101a9ca70  sub sp,sp,#0x70
7101a9ca74  str x23,[sp, #0x30]
7101a9ca78  stp x22,x21,[sp, #0x40]
7101a9ca7c  stp x20,x19,[sp, #0x50]
7101a9ca80  stp x29,x30,[sp, #0x60]
7101a9ca84  add x29,sp,#0x60
7101a9ca88  ldr w8,[x0, #0x1dc]
7101a9ca8c  mov x19,x0
7101a9ca90  cbz w8,0x7101a9cae4
7101a9ca94  ldr x0,[x19, #0x1f8]
7101a9ca98  ldr w1,[x0, #0x2a4]
7101a9ca9c  bl 0x71037814c0
7101a9caa0  tbz w0,#0x0,0x7101a9cd18
7101a9caa4  ldr x8,[x19, #0x1f0]
7101a9caa8  ldr x8,[x8]
7101a9caac  ldr x0,[x8, #0x10]
7101a9cab0  fmov s0,0x3f800000
7101a9cab4  adrp x1,0x71042b4000
7101a9cab8  add x1,x1,#0x86a
7101a9cabc  bl 0x7103778300
7101a9cac0  ldr x8,[x19, #0x240]
7101a9cac4  ldr x8,[x8]
7101a9cac8  cbz x8,0x7101a9cb70
7101a9cacc  movi v0.2D,#0x0
7101a9cad0  add x9,x8,#0x30
7101a9cad4  add x8,x8,#0x34
7101a9cad8  ld1 {v0.S}[0],[x9]
7101a9cadc  ld1 {v0.S}[1],[x8]
7101a9cae0  b 0x7101a9cb7c
7101a9cae4  adrp x8,0x7105314000
7101a9cae8  ldr x8,[x8, #0x510]
7101a9caec  ldr x8,[x8]
7101a9caf0  ldr x1,[x19, #0x200]
7101a9caf4  add x0,sp,#0x20
7101a9caf8  ldr x22,[x8, #0x68]
7101a9cafc  mov w2,#0x1
7101a9cb00  bl 0x7103771d60
7101a9cb04  ldr x20,[sp, #0x28]
7101a9cb08  ldr x21,[x20]
7101a9cb0c  cbz x21,0x7101a9cbd4
7101a9cb10  ldr x9,[x22]
7101a9cb14  ldrsw x8,[x19, #0x294]
7101a9cb18  mov w10,#0x48
7101a9cb1c  mov x0,x21
7101a9cb20  ldr x9,[x9, #0x8]
7101a9cb24  madd x8,x8,x10,x9
7101a9cb28  mov w9,#0x354c
7101a9cb2c  ldrb w8,[x8, x9, LSL ]
7101a9cb30  cmp w8,#0x0
7101a9cb34  ldr x8,[x21]
7101a9cb38  cset w1,eq
7101a9cb3c  ldr x8,[x8, #0x1f8]
7101a9cb40  blr x8
7101a9cb44  ldr x8,[x21]
7101a9cb48  ldr x8,[x8, #0x200]
7101a9cb4c  mov x0,x21
7101a9cb50  blr x8
7101a9cb54  tbz w0,#0x0,0x7101a9cbb8
7101a9cb58  ldr x8,[x21]
7101a9cb5c  ldr x8,[x8, #0x210]
7101a9cb60  mov x0,x21
7101a9cb64  blr x8
7101a9cb68  eor w8,w0,#0x1
7101a9cb6c  b 0x7101a9cbbc
7101a9cb70  adrp x8,0x71052a8000
7101a9cb74  ldr x8,[x8, #0xa80]
7101a9cb78  ldr q0,[x8]
7101a9cb7c  ldr x8,[x19, #0x230]
7101a9cb80  ldr x8,[x8]
7101a9cb84  cbz x8,0x7101a9cb9c
7101a9cb88  add x9,x8,#0x34
7101a9cb8c  st1 {v0.S}[1],[x9]
7101a9cb90  ldrb w9,[x8, #0x58]
7101a9cb94  orr w9,w9,#0x10
7101a9cb98  strb w9,[x8, #0x58]
7101a9cb9c  ldrsw x8,[x19, #0x1d4]
7101a9cba0  cmp w8,#0x13
7101a9cba4  b.cs 0x7101a9cd30
7101a9cba8  add x8,x19,x8, LSL #0x2
7101a9cbac  mov w9,#0x4
7101a9cbb0  str w9,[x8, #0x188]
7101a9cbb4  b 0x7101a9cd18
7101a9cbb8  mov w8,#0x1
7101a9cbbc  ldr x9,[x21]
7101a9cbc0  ldr x9,[x9, #0x388]
7101a9cbc4  and w1,w8,#0x1
7101a9cbc8  mov x0,x21
7101a9cbcc  mov w2,wzr
7101a9cbd0  blr x9
7101a9cbd4  adrp x8,0x710523d000
7101a9cbd8  add x8,x8,#0x9c8
7101a9cbdc  stp x8,xzr,[sp, #0x20]
7101a9cbe0  cbz x20,0x7101a9cbec
7101a9cbe4  mov x0,x20
7101a9cbe8  bl 0x710392eb40
7101a9cbec  ldr x8,[x22]
7101a9cbf0  ldrsw x9,[x19, #0x294]
7101a9cbf4  mov w12,#0x48
7101a9cbf8  mov w10,#0x354c
7101a9cbfc  adrp x11,0x710436b000
7101a9cc00  add x11,x11,#0xdb6
7101a9cc04  adrp x13,0x710425e000
7101a9cc08  add x13,x13,#0xdef
7101a9cc0c  add x20,x19,#0x200
7101a9cc10  ldr x8,[x8, #0x8]
7101a9cc14  madd x8,x9,x12,x8
7101a9cc18  adrp x1,0x7104431000
7101a9cc1c  add x1,x1,#0x6e2
7101a9cc20  ldrb w8,[x8, x10, LSL ]
7101a9cc24  cmp w8,#0x0
7101a9cc28  ldr x8,[x19, #0x1f0]
7101a9cc2c  csel x21,x13,x11,eq
7101a9cc30  ldr x8,[x8]
7101a9cc34  add x0,x8,#0x8
7101a9cc38  add x8,sp,#0x20
7101a9cc3c  bl 0x7103776640
7101a9cc40  adrp x1,0x71042a2000
7101a9cc44  add x1,x1,#0xa3c
7101a9cc48  mov x8,sp
7101a9cc4c  add x0,sp,#0x20
7101a9cc50  bl 0x7103776640
7101a9cc54  adrp x1,0x71043cd000
7101a9cc58  add x1,x1,#0xab4
7101a9cc5c  add x8,sp,#0x10
7101a9cc60  mov x0,sp
7101a9cc64  bl 0x7103776910
7101a9cc68  add x0,sp,#0x10
7101a9cc6c  mov x1,x21
7101a9cc70  bl 0x710377a120
7101a9cc74  ldr x0,[sp, #0x18]
7101a9cc78  adrp x22,0x710523d000
7101a9cc7c  add x22,x22,#0x9a8
7101a9cc80  stp x22,xzr,[sp, #0x10]
7101a9cc84  cbz x0,0x7101a9cc8c
7101a9cc88  bl 0x710392eb40
7101a9cc8c  ldr x21,[sp, #0x8]
7101a9cc90  adrp x23,0x710523d000
7101a9cc94  add x23,x23,#0x988
7101a9cc98  stp x23,xzr,[sp]
7101a9cc9c  cbz x21,0x7101a9ccb8
7101a9cca0  ldr x0,[x21, #0x18]
7101a9cca4  stp x22,xzr,[x21, #0x10]
7101a9cca8  cbz x0,0x7101a9ccb0
7101a9ccac  bl 0x710392eb40
7101a9ccb0  mov x0,x21
7101a9ccb4  bl 0x710392eb40
7101a9ccb8  mov x0,x20
7101a9ccbc  mov w1,wzr
7101a9ccc0  mov w2,wzr
7101a9ccc4  bl 0x7103771a80
7101a9ccc8  ldr x8,[x19, #0x1f8]
7101a9cccc  ldr w1,[x8, #0x2a4]
7101a9ccd0  add x0,x19,#0x1f8
7101a9ccd4  mov w2,wzr
7101a9ccd8  mov w3,wzr
7101a9ccdc  bl 0x7103783c10
7101a9cce0  ldr x0,[x19, #0x1f8]
7101a9cce4  ldr x8,[x0]
7101a9cce8  ldr x8,[x8, #0x70]
7101a9ccec  mov w1,wzr
7101a9ccf0  blr x8
7101a9ccf4  ldr x19,[sp, #0x28]
7101a9ccf8  stp x23,xzr,[sp, #0x20]
7101a9ccfc  cbz x19,0x7101a9cd18
7101a9cd00  ldr x0,[x19, #0x18]
7101a9cd04  stp x22,xzr,[x19, #0x10]
7101a9cd08  cbz x0,0x7101a9cd10
7101a9cd0c  bl 0x710392eb40
7101a9cd10  mov x0,x19
7101a9cd14  bl 0x710392eb40
7101a9cd18  ldp x29,x30,[sp, #0x60]
7101a9cd1c  ldr x23,[sp, #0x30]
7101a9cd20  ldp x20,x19,[sp, #0x50]
7101a9cd24  ldp x22,x21,[sp, #0x40]
7101a9cd28  add sp,sp,#0x70
7101a9cd2c  ret
7101a9cd30  bl 0x71039c2650
