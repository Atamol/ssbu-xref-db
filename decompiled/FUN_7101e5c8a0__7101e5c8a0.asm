// addr:      7101e5c8a0
// offset:    0x1e5c8a0
// name:      FUN_7101e5c8a0
// mangled:   
// size:      1292

7101e5c8a0  sub sp,sp,#0xe0
7101e5c8a4  str d8,[sp, #0x90]
7101e5c8a8  str x25,[sp, #0x98]
7101e5c8ac  stp x24,x23,[sp, #0xa0]
7101e5c8b0  stp x22,x21,[sp, #0xb0]
7101e5c8b4  stp x20,x19,[sp, #0xc0]
7101e5c8b8  stp x29,x30,[sp, #0xd0]
7101e5c8bc  add x29,sp,#0xd0
7101e5c8c0  ldr w8,[x0, #0x1e4]
7101e5c8c4  mov x19,x0
7101e5c8c8  cbz w8,0x7101e5c8fc
7101e5c8cc  ldr x20,[x19, #0x2e0]
7101e5c8d0  ldr x0,[x20]
7101e5c8d4  ldrsw x8,[x0, #0x25c]
7101e5c8d8  cmn w8,#0x1
7101e5c8dc  b.eq 0x7101e5c9c0
7101e5c8e0  cmp w8,#0x2
7101e5c8e4  b.cs 0x7101e5cda8
7101e5c8e8  mov w9,#0x48
7101e5c8ec  madd x8,x8,x9,x20
7101e5c8f0  mov w9,#0x1
7101e5c8f4  ldrb w8,[x8, #0x8]
7101e5c8f8  b 0x7101e5c9c8
7101e5c8fc  ldr x8,[x19, #0x3b0]
7101e5c900  ldrb w8,[x8, #0x8]
7101e5c904  add w1,w8,#0x1
7101e5c908  adrp x0,0x71042d6000
7101e5c90c  add x0,x0,#0x950
7101e5c910  add x8,sp,#0x48
7101e5c914  add x20,x19,#0x2e8
7101e5c918  add x21,sp,#0x48
7101e5c91c  bl 0x71003a4ca0
7101e5c920  ldr x8,[x19, #0x2e8]
7101e5c924  add x1,x21,#0x8
7101e5c928  add x0,x8,#0x10
7101e5c92c  bl 0x710377a120
7101e5c930  ldr x8,[x19, #0x2e8]
7101e5c934  ldr x8,[x8, #0x18]
7101e5c938  ldr x8,[x8, #0x10]
7101e5c93c  cbz x8,0x7101e5cab4
7101e5c940  ldr x9,[x8, #0xd8]
7101e5c944  cbz x9,0x7101e5cab0
7101e5c948  ldrh w12,[x9]
7101e5c94c  cbz w12,0x7101e5cab0
7101e5c950  mov w10,wzr
7101e5c954  mov w8,wzr
7101e5c958  orr w11,wzr,#0x3
7101e5c95c  mov x13,x9
7101e5c960  orr w14,w12,#0x1
7101e5c964  and w14,w14,#0xffff
7101e5c968  cmp w14,#0xf
7101e5c96c  b.ne 0x7101e5c990
7101e5c970  and w14,w12,#0xffff
7101e5c974  cmp w14,#0xe
7101e5c978  b.ne 0x7101e5c99c
7101e5c97c  ldrh w13,[x13, #0x6]
7101e5c980  lsr w13,w13,#0x1
7101e5c984  mov w12,wzr
7101e5c988  add w13,w13,#0x4
7101e5c98c  b 0x7101e5c9a8
7101e5c990  mov w12,#0x1
7101e5c994  mov w13,#0x1
7101e5c998  b 0x7101e5c9a8
7101e5c99c  cmp w14,#0xf
7101e5c9a0  mov w12,wzr
7101e5c9a4  csel w13,w11,wzr,eq
7101e5c9a8  add w10,w13,w10
7101e5c9ac  add x13,x9,w10, UXTW  #0x1
7101e5c9b0  add w8,w12,w8
7101e5c9b4  ldrh w12,[x13]
7101e5c9b8  cbnz w12,0x7101e5c960
7101e5c9bc  b 0x7101e5cab4
7101e5c9c0  mov x9,xzr
7101e5c9c4  mov w8,wzr
7101e5c9c8  ldr x11,[x19, #0x3b0]
7101e5c9cc  ldrb w10,[x11, #0x8]
7101e5c9d0  cmp x10,#0xd
7101e5c9d4  b.hi 0x7101e5ca44
7101e5c9d8  ldr x11,[x11]
7101e5c9dc  ldr x12,[x11, #0x8]
7101e5c9e0  ldrb w11,[x12, #0x388]
7101e5c9e4  cbz w11,0x7101e5ca44
7101e5c9e8  ldrb w11,[x19, #0x382]
7101e5c9ec  cmp w11,#0x3
7101e5c9f0  b.hi 0x7101e5ca44
7101e5c9f4  add x10,x12,x10, LSL #0x3
7101e5c9f8  ldr x10,[x10, #0x8]
7101e5c9fc  cbz x10,0x7101e5ca44
7101e5ca00  mov w12,#0x1c8
7101e5ca04  madd x10,x11,x12,x10
7101e5ca08  ldrb w10,[x10, #0x28]
7101e5ca0c  cmp w10,#0x3
7101e5ca10  b.ne 0x7101e5ca44
7101e5ca14  adrp x8,0x710532f000
7101e5ca18  ldr x8,[x8, #0x8d0]
7101e5ca1c  ldr x0,[x8, #0x8]
7101e5ca20  ldp x8,x9,[x0, #0x40]
7101e5ca24  sub x9,x9,x8
7101e5ca28  asr x9,x9,#0x3
7101e5ca2c  cmp x9,#0x4
7101e5ca30  b.cc 0x7101e5cc40
7101e5ca34  ldr x20,[x8, #0x18]
7101e5ca38  ldrb w8,[x0, #0x191]
7101e5ca3c  cbnz w8,0x7101e5ccbc
7101e5ca40  b 0x7101e5cc4c
7101e5ca44  ldrb w10,[x0, #0x280]
7101e5ca48  cbz w10,0x7101e5ca9c
7101e5ca4c  ldr x8,[x0]
7101e5ca50  ldr x8,[x8, #0x60]
7101e5ca54  mov w1,wzr
7101e5ca58  blr x8
7101e5ca5c  ldr x0,[x20]
7101e5ca60  ldr x8,[x0]
7101e5ca64  ldr x8,[x8, #0x70]
7101e5ca68  mov w1,wzr
7101e5ca6c  blr x8
7101e5ca70  ldr x8,[x19, #0x1f0]
7101e5ca74  ldr x8,[x8]
7101e5ca78  ldr x0,[x8]
7101e5ca7c  mov w1,wzr
7101e5ca80  bl 0x71037760f0
7101e5ca84  ldrsw x8,[x19, #0x1dc]
7101e5ca88  cmp w8,#0x13
7101e5ca8c  b.cs 0x7101e5cda8
7101e5ca90  add x8,x19,x8, LSL #0x2
7101e5ca94  orr w9,wzr,#0xc
7101e5ca98  b 0x7101e5cd0c
7101e5ca9c  cbz x9,0x7101e5cd10
7101e5caa0  cmp w8,#0x1
7101e5caa4  b.eq 0x7101e5cc38
7101e5caa8  cbz w8,0x7101e5ccf0
7101e5caac  b 0x7101e5cd10
7101e5cab0  mov w8,wzr
7101e5cab4  mov x0,x20
7101e5cab8  mov w1,wzr
7101e5cabc  str w8,[x19, #0x2f8]
7101e5cac0  bl 0x7101e94ba0
7101e5cac4  ldr x21,[x19, #0x2e0]
7101e5cac8  ldr x0,[x21]
7101e5cacc  ldr x8,[x0]
7101e5cad0  ldr x8,[x8, #0x60]
7101e5cad4  mov w1,#0x1
7101e5cad8  add x20,x19,#0x2d8
7101e5cadc  blr x8
7101e5cae0  ldr x0,[x21]
7101e5cae4  ldr x8,[x0]
7101e5cae8  ldr x8,[x8, #0x70]
7101e5caec  mov w1,#0x1
7101e5caf0  blr x8
7101e5caf4  ldr x8,[x19, #0x2e0]
7101e5caf8  ldrb w9,[x8, #0x8]!
7101e5cafc  cmp w9,#0x0
7101e5cb00  cset w9,ne
7101e5cb04  mov w24,#0x48
7101e5cb08  umaddl x22,w9,w24,x8
7101e5cb0c  adrp x21,0x710433a000
7101e5cb10  add x21,x21,#0x78b
7101e5cb14  mov x1,x21
7101e5cb18  add x0,x22,#0x18
7101e5cb1c  bl 0x710377a120
7101e5cb20  add x0,x22,#0x28
7101e5cb24  mov x1,x21
7101e5cb28  bl 0x710377a120
7101e5cb2c  add x0,x22,#0x38
7101e5cb30  mov x1,x21
7101e5cb34  bl 0x710377a120
7101e5cb38  ldr x8,[x19, #0x2e0]
7101e5cb3c  ldrb w9,[x8, #0x8]!
7101e5cb40  cmp w9,#0x0
7101e5cb44  cset w9,ne
7101e5cb48  umaddl x22,w9,w24,x8
7101e5cb4c  fmov s8,0x3f800000
7101e5cb50  mov v0.16B,v8.16B
7101e5cb54  adrp x21,0x710433a000
7101e5cb58  add x21,x21,#0x880
7101e5cb5c  mov x1,x21
7101e5cb60  ldr x0,[x22, #0x10]
7101e5cb64  bl 0x7103778300
7101e5cb68  ldr x0,[x22, #0x10]
7101e5cb6c  mov v0.16B,v8.16B
7101e5cb70  adrp x22,0x710425f000
7101e5cb74  add x22,x22,#0xba5
7101e5cb78  mov x1,x22
7101e5cb7c  bl 0x7103778300
7101e5cb80  mov x0,x20
7101e5cb84  mov w1,wzr
7101e5cb88  bl 0x7101e96fc0
7101e5cb8c  ldr x8,[x19, #0x2e0]
7101e5cb90  ldrb w9,[x8, #0x8]!
7101e5cb94  cmp w9,#0x1
7101e5cb98  cset w9,ne
7101e5cb9c  umaddl x25,w9,w24,x8
7101e5cba0  adrp x23,0x7104308000
7101e5cba4  add x23,x23,#0xab2
7101e5cba8  mov x1,x23
7101e5cbac  add x0,x25,#0x18
7101e5cbb0  bl 0x710377a120
7101e5cbb4  add x0,x25,#0x28
7101e5cbb8  mov x1,x23
7101e5cbbc  bl 0x710377a120
7101e5cbc0  add x0,x25,#0x38
7101e5cbc4  mov x1,x23
7101e5cbc8  bl 0x710377a120
7101e5cbcc  ldr x8,[x19, #0x2e0]
7101e5cbd0  ldrb w9,[x8, #0x8]!
7101e5cbd4  cmp w9,#0x1
7101e5cbd8  cset w9,ne
7101e5cbdc  umaddl x23,w9,w24,x8
7101e5cbe0  ldr x0,[x23, #0x10]
7101e5cbe4  mov v0.16B,v8.16B
7101e5cbe8  mov x1,x21
7101e5cbec  bl 0x7103778300
7101e5cbf0  ldr x0,[x23, #0x10]
7101e5cbf4  mov v0.16B,v8.16B
7101e5cbf8  mov x1,x22
7101e5cbfc  bl 0x7103778300
7101e5cc00  mov w1,#0x1
7101e5cc04  mov x0,x20
7101e5cc08  bl 0x7101e96fc0
7101e5cc0c  ldr x0,[x19, #0x2e0]
7101e5cc10  ldrb w8,[x0, #0x8]
7101e5cc14  cmp w8,#0x0
7101e5cc18  cset w1,ne
7101e5cc1c  mov w2,#0x1
7101e5cc20  bl 0x7103771a80
7101e5cc24  ldr x8,[x19, #0x1f0]
7101e5cc28  ldr x8,[x8]
7101e5cc2c  ldr x0,[x8]
7101e5cc30  mov w1,#0x1
7101e5cc34  b 0x7101e5cd84
7101e5cc38  mov w8,#0x5
7101e5cc3c  b 0x7101e5ccf4
7101e5cc40  mov x20,xzr
7101e5cc44  ldrb w8,[x0, #0x191]
7101e5cc48  cbnz w8,0x7101e5ccbc
7101e5cc4c  mov w2,#0x4
7101e5cc50  mov x1,x20
7101e5cc54  bl 0x7103313f20
7101e5cc58  tbz w0,#0x0,0x7101e5ccbc
7101e5cc5c  add x0,sp,#0x8
7101e5cc60  mov x1,x20
7101e5cc64  bl 0x71024076d0
7101e5cc68  ldr x8,[sp, #0x18]
7101e5cc6c  adrp x9,0x7104f73000
7101e5cc70  add x9,x9,#0xd50
7101e5cc74  str x9,[sp, #0x10]
7101e5cc78  cbz x8,0x7101e5cce8
7101e5cc7c  adrp x8,0x7106dd5000
7101e5cc80  ldrb w8,[x8, #0x3a8]
7101e5cc84  cmp w8,#0x1
7101e5cc88  b.ne 0x7101e5cce8
7101e5cc8c  adrp x9,0x7106dd5000
7101e5cc90  ldr w8,[sp, #0x20]
7101e5cc94  ldr w9,[x9, #0x3ac]
7101e5cc98  cmp w8,w9
7101e5cc9c  b.ne 0x7101e5cce8
7101e5cca0  ldr x8,[sp, #0x18]
7101e5cca4  ldr wzr,[x8, #0x38]!
7101e5cca8  ldaxr w9,[x8]
7101e5ccac  sub w9,w9,#0x1
7101e5ccb0  stlxr w10,w9,[x8]
7101e5ccb4  cbnz w10,0x7101e5cca8
7101e5ccb8  b 0x7101e5cce8
7101e5ccbc  mov x8,#0x650000000000
7101e5ccc0  movk x8,#0x87, LSL #48
7101e5ccc4  strb wzr,[sp, #0x28]
7101e5ccc8  stp xzr,x8,[sp, #0x18]
7101e5cccc  mov x8,#-0x1
7101e5ccd0  stp x8,xzr,[sp, #0x30]
7101e5ccd4  adrp x8,0x7104f73000
7101e5ccd8  add x8,x8,#0xd50
7101e5ccdc  str wzr,[sp, #0x8]
7101e5cce0  str xzr,[sp, #0x40]
7101e5cce4  str x8,[sp, #0x10]
7101e5cce8  str xzr,[sp, #0x18]
7101e5ccec  strb wzr,[sp, #0x28]
7101e5ccf0  mov w8,#0x1
7101e5ccf4  strb w8,[x19, #0x380]
7101e5ccf8  ldrsw x8,[x19, #0x1dc]
7101e5ccfc  cmp w8,#0x13
7101e5cd00  b.cs 0x7101e5cda8
7101e5cd04  add x8,x19,x8, LSL #0x2
7101e5cd08  orr w9,wzr,#0xf
7101e5cd0c  str w9,[x8, #0x190]
7101e5cd10  ldrb w8,[x19, #0x380]
7101e5cd14  cbz w8,0x7101e5cd88
7101e5cd18  ldrb w8,[x19, #0x382]
7101e5cd1c  cmp x8,#0x3
7101e5cd20  b.hi 0x7101e5cd48
7101e5cd24  ldr x9,[x19, #0x208]
7101e5cd28  add x8,x9,x8, LSL #0x3
7101e5cd2c  ldr x8,[x8, #0x48]
7101e5cd30  cbz x8,0x7101e5cd48
7101e5cd34  ldr x0,[x8, #0x8]
7101e5cd38  fmov s0,0x3f800000
7101e5cd3c  adrp x1,0x710432a000
7101e5cd40  add x1,x1,#0x8bc
7101e5cd44  bl 0x7103778300
7101e5cd48  ldr x20,[x19, #0x2e0]
7101e5cd4c  ldr x0,[x20]
7101e5cd50  ldr x8,[x0]
7101e5cd54  ldr x8,[x8, #0x60]
7101e5cd58  mov w1,wzr
7101e5cd5c  blr x8
7101e5cd60  ldr x0,[x20]
7101e5cd64  ldr x8,[x0]
7101e5cd68  ldr x8,[x8, #0x70]
7101e5cd6c  mov w1,wzr
7101e5cd70  blr x8
7101e5cd74  ldr x8,[x19, #0x1f0]
7101e5cd78  ldr x8,[x8]
7101e5cd7c  ldr x0,[x8]
7101e5cd80  mov w1,wzr
7101e5cd84  bl 0x71037760f0
7101e5cd88  ldr d8,[sp, #0x90]
7101e5cd8c  ldp x29,x30,[sp, #0xd0]
7101e5cd90  ldp x20,x19,[sp, #0xc0]
7101e5cd94  ldr x25,[sp, #0x98]
7101e5cd98  ldp x22,x21,[sp, #0xb0]
7101e5cd9c  ldp x24,x23,[sp, #0xa0]
7101e5cda0  add sp,sp,#0xe0
7101e5cda4  ret
7101e5cda8  bl 0x71039c2650
