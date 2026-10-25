// addr:      7102c0c720
// offset:    0x2c0c720
// name:      FUN_7102c0c720
// mangled:   
// size:      15448

7102c0c720  stp d9,d8,[sp, #-0x70]!
7102c0c724  stp x28,x27,[sp, #0x10]
7102c0c728  stp x26,x25,[sp, #0x20]
7102c0c72c  stp x24,x23,[sp, #0x30]
7102c0c730  stp x22,x21,[sp, #0x40]
7102c0c734  stp x20,x19,[sp, #0x50]
7102c0c738  stp x29,x30,[sp, #0x60]
7102c0c73c  add x29,sp,#0x60
7102c0c740  sub sp,sp,#0x5a0
7102c0c744  ldr x20,[x0]
7102c0c748  strb wzr,[x0, #0x1e8]
7102c0c74c  str x0,[sp, #0x58]
7102c0c750  add x19,x0,#0x8
7102c0c754  mov w0,#0x10
7102c0c758  mov w1,#0x8
7102c0c75c  bl 0x710392e290
7102c0c760  mov x22,x0
7102c0c764  cbnz x0,0x7102c0c7b0
7102c0c768  adrp x8,0x7105332000
7102c0c76c  ldr x0,[x8, #0xf00]
7102c0c770  cbz x0,0x7102c0c7ac
7102c0c774  mov w8,#0x8
7102c0c778  str wzr,[sp, #0xa0]
7102c0c77c  add x1,sp,#0xa0
7102c0c780  str x8,[sp, #0x150]
7102c0c784  ldr x8,[x0]
7102c0c788  ldr x8,[x8, #0x30]
7102c0c78c  add x2,sp,#0x150
7102c0c790  blr x8
7102c0c794  tbz w0,#0x0,0x7102c0c7ac
7102c0c798  mov w0,#0x10
7102c0c79c  mov w1,#0x8
7102c0c7a0  bl 0x710392e290
7102c0c7a4  mov x22,x0
7102c0c7a8  cbnz x0,0x7102c0c7b0
7102c0c7ac  mov x22,xzr
7102c0c7b0  mov w0,#0x10
7102c0c7b4  mov w1,#0x10
7102c0c7b8  bl 0x710392e290
7102c0c7bc  cbnz x0,0x7102c0c7f4
7102c0c7c0  adrp x8,0x7105332000
7102c0c7c4  ldr x0,[x8, #0xf00]
7102c0c7c8  mov w8,#0x10
7102c0c7cc  str wzr,[sp, #0xa0]
7102c0c7d0  add x1,sp,#0xa0
7102c0c7d4  str x8,[sp, #0x150]
7102c0c7d8  ldr x8,[x0]
7102c0c7dc  ldr x8,[x8, #0x30]
7102c0c7e0  add x2,sp,#0x150
7102c0c7e4  blr x8
7102c0c7e8  mov w0,#0x10
7102c0c7ec  mov w1,#0x10
7102c0c7f0  bl 0x710392e290
7102c0c7f4  stp x20,x19,[x0]
7102c0c7f8  ldr x19,[sp, #0x58]
7102c0c7fc  str x0,[x22]
7102c0c800  ldr x20,[x19, #0x1a8]
7102c0c804  str x22,[x19, #0x1a8]
7102c0c808  cbz x20,0x7102c0c828
7102c0c80c  ldr x0,[x20]
7102c0c810  str xzr,[x20]
7102c0c814  cbz x0,0x7102c0c81c
7102c0c818  bl 0x710392eb40
7102c0c81c  mov x0,x20
7102c0c820  bl 0x710392eb40
7102c0c824  ldr x22,[x19, #0x1a8]
7102c0c828  mov w0,#0x10
7102c0c82c  mov w1,#0x8
7102c0c830  bl 0x710392e290
7102c0c834  mov x20,x0
7102c0c838  cbnz x0,0x7102c0c884
7102c0c83c  adrp x8,0x7105332000
7102c0c840  ldr x0,[x8, #0xf00]
7102c0c844  cbz x0,0x7102c0c880
7102c0c848  mov w8,#0x8
7102c0c84c  str wzr,[sp, #0xa0]
7102c0c850  add x1,sp,#0xa0
7102c0c854  str x8,[sp, #0x150]
7102c0c858  ldr x8,[x0]
7102c0c85c  ldr x8,[x8, #0x30]
7102c0c860  add x2,sp,#0x150
7102c0c864  blr x8
7102c0c868  tbz w0,#0x0,0x7102c0c880
7102c0c86c  mov w0,#0x10
7102c0c870  mov w1,#0x8
7102c0c874  bl 0x710392e290
7102c0c878  mov x20,x0
7102c0c87c  cbnz x0,0x7102c0c884
7102c0c880  mov x20,xzr
7102c0c884  mov w0,#0x10
7102c0c888  orr w1,wzr,#0x60
7102c0c88c  bl 0x710392e290
7102c0c890  mov x21,x0
7102c0c894  cbnz x0,0x7102c0c8e0
7102c0c898  adrp x8,0x7105332000
7102c0c89c  ldr x0,[x8, #0xf00]
7102c0c8a0  cbz x0,0x7102c0c8dc
7102c0c8a4  orr w8,wzr,#0x60
7102c0c8a8  str wzr,[sp, #0xa0]
7102c0c8ac  add x1,sp,#0xa0
7102c0c8b0  str x8,[sp, #0x150]
7102c0c8b4  ldr x8,[x0]
7102c0c8b8  ldr x8,[x8, #0x30]
7102c0c8bc  add x2,sp,#0x150
7102c0c8c0  blr x8
7102c0c8c4  tbz w0,#0x0,0x7102c0c8dc
7102c0c8c8  mov w0,#0x10
7102c0c8cc  orr w1,wzr,#0x60
7102c0c8d0  bl 0x710392e290
7102c0c8d4  mov x21,x0
7102c0c8d8  cbnz x0,0x7102c0c8e0
7102c0c8dc  mov x21,xzr
7102c0c8e0  adrp x8,0x7104468000
7102c0c8e4  ldr q0,[x8, #0xca0]
7102c0c8e8  mov w8,#0xffffffff
7102c0c8ec  str w8,[x21, #0x58]
7102c0c8f0  adrp x8,0x7104465000
7102c0c8f4  adrp x9,0x710446a000
7102c0c8f8  ldr q1,[x9, #0x360]
7102c0c8fc  ldr q2,[x8, #0x6b0]
7102c0c900  adrp x8,0x710446a000
7102c0c904  ldr q3,[x8, #0x350]
7102c0c908  str x22,[x21]
7102c0c90c  str xzr,[x21, #0x50]
7102c0c910  stp q1,q0,[sp, #0x30]
7102c0c914  stp q0,q1,[x21, #0x10]
7102c0c918  str q2,[sp, #0x20]
7102c0c91c  stp q2,q3,[x21, #0x30]
7102c0c920  str q3,[sp, #0x70]
7102c0c924  cbz x22,0x7102c0ca4c
7102c0c928  ldr x8,[x22]
7102c0c92c  ldr x8,[x8]
7102c0c930  ldr x9,[x8, #0x310]
7102c0c934  ldp x8,x9,[x9, #0xd0]
7102c0c938  cmp x8,x9
7102c0c93c  b.eq 0x7102c0c974
7102c0c940  mov x10,#0x4689
7102c0c944  movk x10,#0xe457, LSL #16
7102c0c948  movk x10,#0xe, LSL #32
7102c0c94c  ldr w11,[x8, #0x8]
7102c0c950  cmp w11,#0x1
7102c0c954  b.hi 0x7102c0c968
7102c0c958  ldr x0,[x8]
7102c0c95c  ldr x11,[x0, #0x68]
7102c0c960  cmp x11,x10
7102c0c964  b.eq 0x7102c0cfd8
7102c0c968  add x8,x8,#0x10
7102c0c96c  cmp x9,x8
7102c0c970  b.ne 0x7102c0c94c
7102c0c974  mov x0,xzr
7102c0c978  str xzr,[x21, #0x50]
7102c0c97c  fmov s0,wzr
7102c0c980  mov w1,#0x1
7102c0c984  bl 0x710260fdd0
7102c0c988  ldr x8,[x21]
7102c0c98c  ldr x8,[x8]
7102c0c990  ldr x8,[x8]
7102c0c994  ldrb w0,[x8, #0x18]
7102c0c998  bl 0x7102c12990
7102c0c99c  ldr x8,[x21, #0x50]
7102c0c9a0  tbz w0,#0x0,0x7102c0ca10
7102c0c9a4  cbz x8,0x7102c0ca4c
7102c0c9a8  ldrb w9,[x8, #0xe0]
7102c0c9ac  cbz w9,0x7102c0c9c0
7102c0c9b0  ldr x9,[x8, #0xc8]
7102c0c9b4  cbz x9,0x7102c0c9c0
7102c0c9b8  mov w10,#0x101
7102c0c9bc  strh w10,[x9, #0x32]
7102c0c9c0  ldr x8,[x8, #0xd8]
7102c0c9c4  cbz x8,0x7102c0c9d0
7102c0c9c8  mov w9,#0x1
7102c0c9cc  strb w9,[x8, #0x22]
7102c0c9d0  ldr x8,[x21, #0x50]
7102c0c9d4  cbz x8,0x7102c0ca4c
7102c0c9d8  ldrb w9,[x8, #0xe0]
7102c0c9dc  cbz w9,0x7102c0c9ec
7102c0c9e0  ldr x9,[x8, #0xc8]
7102c0c9e4  cbz x9,0x7102c0c9ec
7102c0c9e8  strh wzr,[x9, #0x30]
7102c0c9ec  ldr x9,[x8, #0xd8]
7102c0c9f0  cbz x9,0x7102c0c9f8
7102c0c9f4  strb wzr,[x9, #0x21]
7102c0c9f8  ldrb w9,[x8, #0xe0]
7102c0c9fc  cbz w9,0x7102c0ca4c
7102c0ca00  ldr x8,[x8, #0xb0]
7102c0ca04  mov w9,#0x1
7102c0ca08  strb w9,[x8, #0x10]
7102c0ca0c  b 0x7102c0ca4c
7102c0ca10  cbz x8,0x7102c0ca4c
7102c0ca14  ldrb w9,[x8, #0xe0]
7102c0ca18  cbz w9,0x7102c0ca2c
7102c0ca1c  ldr x9,[x8, #0xc8]
7102c0ca20  cbz x9,0x7102c0ca2c
7102c0ca24  mov w10,#0x101
7102c0ca28  strh w10,[x9, #0x30]
7102c0ca2c  ldr x9,[x8, #0xd8]
7102c0ca30  cbz x9,0x7102c0ca3c
7102c0ca34  mov w10,#0x1
7102c0ca38  strb w10,[x9, #0x21]
7102c0ca3c  ldrb w9,[x8, #0xe0]
7102c0ca40  cbz w9,0x7102c0ca4c
7102c0ca44  ldr x8,[x8, #0xb0]
7102c0ca48  strb wzr,[x8, #0x10]
7102c0ca4c  str x21,[x20]
7102c0ca50  ldr x21,[x19, #0x1b0]
7102c0ca54  str x20,[x19, #0x1b0]
7102c0ca58  cbz x21,0x7102c0ca74
7102c0ca5c  ldr x0,[x21]
7102c0ca60  str xzr,[x21]
7102c0ca64  cbz x0,0x7102c0ca6c
7102c0ca68  bl 0x710392eb40
7102c0ca6c  mov x0,x21
7102c0ca70  bl 0x710392eb40
7102c0ca74  ldr x19,[x19, #0x1a8]
7102c0ca78  mov w0,#0x10
7102c0ca7c  mov w1,#0x8
7102c0ca80  bl 0x710392e290
7102c0ca84  mov x20,x0
7102c0ca88  cbnz x0,0x7102c0cad4
7102c0ca8c  adrp x8,0x7105332000
7102c0ca90  ldr x0,[x8, #0xf00]
7102c0ca94  cbz x0,0x7102c0cad0
7102c0ca98  mov w8,#0x8
7102c0ca9c  str wzr,[sp, #0xa0]
7102c0caa0  add x1,sp,#0xa0
7102c0caa4  str x8,[sp, #0x150]
7102c0caa8  ldr x8,[x0]
7102c0caac  ldr x8,[x8, #0x30]
7102c0cab0  add x2,sp,#0x150
7102c0cab4  blr x8
7102c0cab8  tbz w0,#0x0,0x7102c0cad0
7102c0cabc  mov w0,#0x10
7102c0cac0  mov w1,#0x8
7102c0cac4  bl 0x710392e290
7102c0cac8  mov x20,x0
7102c0cacc  cbnz x0,0x7102c0cad4
7102c0cad0  mov x20,xzr
7102c0cad4  mov w0,#0x10
7102c0cad8  orr w1,wzr,#0xe0
7102c0cadc  bl 0x710392e290
7102c0cae0  mov x25,x0
7102c0cae4  cbnz x0,0x7102c0cb30
7102c0cae8  adrp x8,0x7105332000
7102c0caec  ldr x0,[x8, #0xf00]
7102c0caf0  cbz x0,0x7102c0cb2c
7102c0caf4  orr w8,wzr,#0xe0
7102c0caf8  str wzr,[sp, #0xa0]
7102c0cafc  add x1,sp,#0xa0
7102c0cb00  str x8,[sp, #0x150]
7102c0cb04  ldr x8,[x0]
7102c0cb08  ldr x8,[x8, #0x30]
7102c0cb0c  add x2,sp,#0x150
7102c0cb10  blr x8
7102c0cb14  tbz w0,#0x0,0x7102c0cb2c
7102c0cb18  mov w0,#0x10
7102c0cb1c  orr w1,wzr,#0xe0
7102c0cb20  bl 0x710392e290
7102c0cb24  mov x25,x0
7102c0cb28  cbnz x0,0x7102c0cb30
7102c0cb2c  mov x25,xzr
7102c0cb30  mov x24,x25
7102c0cb34  mov w8,#0xffffffff
7102c0cb38  str x19,[x25]
7102c0cb3c  str xzr,[x24, #0x8]!
7102c0cb40  str w8,[x25, #0x28]
7102c0cb44  mov x8,x25
7102c0cb48  str xzr,[x25, #0x10]
7102c0cb4c  stp xzr,xzr,[x25, #0x18]
7102c0cb50  str xzr,[x25, #0x38]
7102c0cb54  str xzr,[x8, #0x30]!
7102c0cb58  str x8,[sp, #0x60]
7102c0cb5c  adrp x8,0x71052a8000
7102c0cb60  stp xzr,xzr,[x25, #0xb0]
7102c0cb64  stp xzr,xzr,[x25, #0xa0]
7102c0cb68  stp xzr,xzr,[x25, #0x90]
7102c0cb6c  stp xzr,xzr,[x25, #0x80]
7102c0cb70  stp xzr,xzr,[x25, #0x70]
7102c0cb74  stp xzr,xzr,[x25, #0x60]
7102c0cb78  stp xzr,xzr,[x25, #0x50]
7102c0cb7c  stp xzr,xzr,[x25, #0x40]
7102c0cb80  ldr x8,[x8, #0xa88]
7102c0cb84  ldr q0,[x8]
7102c0cb88  strb wzr,[x25, #0xd0]
7102c0cb8c  str wzr,[x25, #0xd4]
7102c0cb90  strh wzr,[x25, #0xd8]
7102c0cb94  str q0,[x25, #0xc0]
7102c0cb98  ldr x8,[x19]
7102c0cb9c  ldr x8,[x8]
7102c0cba0  ldr x8,[x8, #0x310]
7102c0cba4  ldp x9,x10,[x8, #0xd0]
7102c0cba8  cmp x9,x10
7102c0cbac  b.eq 0x7102c0cbe4
7102c0cbb0  mov x11,#0x5986
7102c0cbb4  movk x11,#0x62f4, LSL #16
7102c0cbb8  movk x11,#0xa, LSL #32
7102c0cbbc  ldr w8,[x9, #0x8]
7102c0cbc0  cmp w8,#0x1
7102c0cbc4  b.hi 0x7102c0cbd8
7102c0cbc8  ldr x8,[x9]
7102c0cbcc  ldr x12,[x8, #0x68]
7102c0cbd0  cmp x12,x11
7102c0cbd4  b.eq 0x7102c0cbe8
7102c0cbd8  add x9,x9,#0x10
7102c0cbdc  cmp x10,x9
7102c0cbe0  b.ne 0x7102c0cbbc
7102c0cbe4  mov x8,xzr
7102c0cbe8  stp x20,x24,[sp, #0x10]
7102c0cbec  str x8,[x24]
7102c0cbf0  ldr x9,[x19]
7102c0cbf4  ldr x9,[x9, #0x8]
7102c0cbf8  ldp x10,x9,[x9, #0x110]
7102c0cbfc  sub x9,x9,x10
7102c0cc00  lsr x10,x9,#0x3
7102c0cc04  cmp w10,#0x1
7102c0cc08  b.lt 0x7102c0cf4c
7102c0cc0c  sbfx x8,x9,#0x3,#0x20
7102c0cc10  cmp w10,#0x7
7102c0cc14  orr w9,wzr,#0x7
7102c0cc18  csel x8,x8,x9,lt
7102c0cc1c  str x8,[sp, #0x80]
7102c0cc20  add x8,sp,#0x150
7102c0cc24  add x9,x8,#0x8
7102c0cc28  add x8,x8,#0x110
7102c0cc2c  str x8,[sp, #0x8]
7102c0cc30  add x8,sp,#0xa0
7102c0cc34  mov x19,xzr
7102c0cc38  mov w22,#0xffffffff
7102c0cc3c  adrp x23,0x7104754000
7102c0cc40  add x23,x23,#0x84
7102c0cc44  str x9,[sp, #0x90]
7102c0cc48  add x27,x8,#0x9
7102c0cc4c  orr x28,xzr,#0x100000000
7102c0cc50  mov w0,#0x10
7102c0cc54  mov w1,#0x8
7102c0cc58  bl 0x710392e290
7102c0cc5c  mov x24,x0
7102c0cc60  cbnz x0,0x7102c0ccac
7102c0cc64  adrp x8,0x7105332000
7102c0cc68  ldr x0,[x8, #0xf00]
7102c0cc6c  cbz x0,0x7102c0cca8
7102c0cc70  mov w8,#0x8
7102c0cc74  str wzr,[sp, #0xa0]
7102c0cc78  add x1,sp,#0xa0
7102c0cc7c  str x8,[sp, #0x150]
7102c0cc80  ldr x8,[x0]
7102c0cc84  ldr x8,[x8, #0x30]
7102c0cc88  add x2,sp,#0x150
7102c0cc8c  blr x8
7102c0cc90  tbz w0,#0x0,0x7102c0cca8
7102c0cc94  mov w0,#0x10
7102c0cc98  mov w1,#0x8
7102c0cc9c  bl 0x710392e290
7102c0cca0  mov x24,x0
7102c0cca4  cbnz x0,0x7102c0ccac
7102c0cca8  mov x24,xzr
7102c0ccac  ldr x21,[x25]
7102c0ccb0  mov w0,#0x10
7102c0ccb4  orr w1,wzr,#0x30
7102c0ccb8  mov x26,x25
7102c0ccbc  bl 0x710392e290
7102c0ccc0  mov x25,x0
7102c0ccc4  cbnz x0,0x7102c0cd10
7102c0ccc8  adrp x8,0x7105332000
7102c0cccc  ldr x0,[x8, #0xf00]
7102c0ccd0  cbz x0,0x7102c0cd0c
7102c0ccd4  orr w8,wzr,#0x30
7102c0ccd8  str wzr,[sp, #0xa0]
7102c0ccdc  add x1,sp,#0xa0
7102c0cce0  str x8,[sp, #0x150]
7102c0cce4  ldr x8,[x0]
7102c0cce8  ldr x8,[x8, #0x30]
7102c0ccec  add x2,sp,#0x150
7102c0ccf0  blr x8
7102c0ccf4  tbz w0,#0x0,0x7102c0cd0c
7102c0ccf8  mov w0,#0x10
7102c0ccfc  orr w1,wzr,#0x30
7102c0cd00  bl 0x710392e290
7102c0cd04  mov x25,x0
7102c0cd08  cbnz x0,0x7102c0cd10
7102c0cd0c  mov x25,xzr
7102c0cd10  mov x20,x25
7102c0cd14  str x21,[x25]
7102c0cd18  strh wzr,[x25, #0x18]
7102c0cd1c  str xzr,[x20, #0x8]!
7102c0cd20  strb wzr,[x25, #0x1c]
7102c0cd24  ldr x0,[sp, #0x90]
7102c0cd28  str xzr,[x25, #0x20]
7102c0cd2c  str wzr,[x25, #0x28]
7102c0cd30  str xzr,[x25, #0x10]
7102c0cd34  ldr x8,[x21]
7102c0cd38  ldr x8,[x8, #0x8]
7102c0cd3c  add x1,x8,#0x8
7102c0cd40  bl 0x7102c12a90
7102c0cd44  adrp x8,0x7105121000
7102c0cd48  add x8,x8,#0x670
7102c0cd4c  str x8,[sp, #0x150]
7102c0cd50  ldr x9,[sp, #0x268]
7102c0cd54  ldr x8,[sp, #0x260]
7102c0cd58  sub x9,x9,x8
7102c0cd5c  asr x9,x9,#0x3
7102c0cd60  cmp w9,w19
7102c0cd64  b.le 0x7102c0ce78
7102c0cd68  sxtw x10,w19
7102c0cd6c  cmp x9,x10
7102c0cd70  b.ls 0x7102c10368
7102c0cd74  add x8,x8,x10, LSL #0x3
7102c0cd78  ldr w9,[x8]
7102c0cd7c  str w9,[x25, #0x20]
7102c0cd80  ldr s0,[x8, #0x4]
7102c0cd84  fmov s1,w9
7102c0cd88  fsub s1,s0,s1
7102c0cd8c  add w2,w19,#0x1
7102c0cd90  add x0,sp,#0xa0
7102c0cd94  adrp x1,0x710425d000
7102c0cd98  add x1,x1,#0x617
7102c0cd9c  stp s0,s1,[x25, #0x24]
7102c0cda0  strb wzr,[sp, #0xa8]
7102c0cda4  str xzr,[sp, #0xa0]
7102c0cda8  bl 0x710062dc20
7102c0cdac  ldr x8,[x25]
7102c0cdb0  ldr x8,[x8]
7102c0cdb4  ldr x8,[x8]
7102c0cdb8  ldr x8,[x8, #0x300]
7102c0cdbc  ldr x9,[x8, #0x18]
7102c0cdc0  ldp x8,x9,[x9]
7102c0cdc4  cmp x8,x9
7102c0cdc8  b.eq 0x7102c0ce78
7102c0cdcc  ldrb w10,[sp, #0xa8]
7102c0cdd0  mov w18,w22
7102c0cdd4  ldr x11,[x8]
7102c0cdd8  cbz w10,0x7102c0ce28
7102c0cddc  mov x12,xzr
7102c0cde0  mov x13,x27
7102c0cde4  mov w15,w10
7102c0cde8  mov w14,w18
7102c0cdec  and w15,w15,#0xff
7102c0cdf0  sub w16,w15,#0x41
7102c0cdf4  add w17,w15,#0x20
7102c0cdf8  cmp w16,#0x1a
7102c0cdfc  csel w15,w17,w15,cc
7102c0ce00  eor w15,w15,w14
7102c0ce04  and w15,w15,#0xff
7102c0ce08  ldr w15,[x23, w15, UXTW #0x2]
7102c0ce0c  eor w14,w15,w14, LSR #0x8
7102c0ce10  ldrb w15,[x13], #0x1
7102c0ce14  add x12,x12,x28
7102c0ce18  cbnz w15,0x7102c0cdec
7102c0ce1c  mvn w13,w14
7102c0ce20  and x12,x12,#0xff00000000
7102c0ce24  b 0x7102c0ce30
7102c0ce28  mov x13,xzr
7102c0ce2c  mov x12,xzr
7102c0ce30  orr x12,x12,x13
7102c0ce34  ldr x13,[x11, #0xa0]
7102c0ce38  and x13,x13,#0xffffffffff
7102c0ce3c  cmp x13,x12
7102c0ce40  b.eq 0x7102c0ce54
7102c0ce44  add x8,x8,#0x8
7102c0ce48  cmp x8,x9
7102c0ce4c  b.ne 0x7102c0cdd4
7102c0ce50  b 0x7102c0ce78
7102c0ce54  ldr x8,[x11, #0x110]
7102c0ce58  cbz x8,0x7102c0ce78
7102c0ce5c  ldp x9,x10,[x8]
7102c0ce60  cmp x9,x10
7102c0ce64  b.eq 0x7102c0ce78
7102c0ce68  str x8,[x20]
7102c0ce6c  ldp x0,x1,[x8]
7102c0ce70  mov w2,#0x1
7102c0ce74  bl 0x71025f4d80
7102c0ce78  ldr x0,[sp, #0x90]
7102c0ce7c  add x20,x26,x19, LSL #0x4
7102c0ce80  add x21,x20,#0x50
7102c0ce84  bl 0x7102c104b0
7102c0ce88  mov w0,#0x10
7102c0ce8c  mov w1,#0x20
7102c0ce90  str x25,[x24]
7102c0ce94  bl 0x710392e290
7102c0ce98  cbnz x0,0x7102c0cee0
7102c0ce9c  adrp x8,0x7105332000
7102c0cea0  ldr x0,[x8, #0xf00]
7102c0cea4  cbz x0,0x7102c0cedc
7102c0cea8  mov w8,#0x20
7102c0ceac  str wzr,[sp, #0xa0]
7102c0ceb0  add x1,sp,#0xa0
7102c0ceb4  str x8,[sp, #0x150]
7102c0ceb8  ldr x8,[x0]
7102c0cebc  ldr x8,[x8, #0x30]
7102c0cec0  add x2,sp,#0x150
7102c0cec4  blr x8
7102c0cec8  tbz w0,#0x0,0x7102c0cedc
7102c0cecc  mov w0,#0x10
7102c0ced0  mov w1,#0x20
7102c0ced4  bl 0x710392e290
7102c0ced8  cbnz x0,0x7102c0cee0
7102c0cedc  mov x0,xzr
7102c0cee0  adrp x8,0x7105121000
7102c0cee4  add x8,x8,#0xe8
7102c0cee8  mov x25,x26
7102c0ceec  stp x8,xzr,[x0]
7102c0cef0  stp xzr,x24,[x0, #0x10]
7102c0cef4  str x24,[x21]
7102c0cef8  ldr x24,[x20, #0x58]
7102c0cefc  str x0,[x20, #0x58]
7102c0cf00  cbz x24,0x7102c0cf34
7102c0cf04  add x8,x24,#0x8
7102c0cf08  ldaxr x9,[x8]
7102c0cf0c  sub x10,x9,#0x1
7102c0cf10  stlxr w11,x10,[x8]
7102c0cf14  cbnz w11,0x7102c0cf08
7102c0cf18  cbnz x9,0x7102c0cf34
7102c0cf1c  ldr x8,[x24]
7102c0cf20  ldr x8,[x8, #0x10]
7102c0cf24  mov x0,x24
7102c0cf28  blr x8
7102c0cf2c  mov x0,x24
7102c0cf30  bl 0x71039c2670
7102c0cf34  ldr x8,[sp, #0x80]
7102c0cf38  add x19,x19,#0x1
7102c0cf3c  cmp x19,x8
7102c0cf40  b.lt 0x7102c0cc50
7102c0cf44  ldr x24,[sp, #0x18]
7102c0cf48  ldr x8,[x24]
7102c0cf4c  cbz x8,0x7102c0d544
7102c0cf50  ldr x8,[x8, #0xd8]
7102c0cf54  cbz x8,0x7102c0d544
7102c0cf58  ldr x8,[x8, #0x8]
7102c0cf5c  ldr x0,[x8, #0x8]
7102c0cf60  ldr x8,[x0]
7102c0cf64  ldr x8,[x8, #0x18]
7102c0cf68  adrp x1,0x7104359000
7102c0cf6c  add x1,x1,#0x640
7102c0cf70  blr x8
7102c0cf74  cmn w0,#0x1
7102c0cf78  b.eq 0x7102c0d544
7102c0cf7c  ldr x19,[x24]
7102c0cf80  cbz x19,0x7102c0d02c
7102c0cf84  ldr x8,[x19, #0xd8]
7102c0cf88  cbz x8,0x7102c0d010
7102c0cf8c  ldr x8,[x8, #0x8]
7102c0cf90  mov w20,w0
7102c0cf94  ldr x0,[x8, #0x8]
7102c0cf98  ldr x8,[x0]
7102c0cf9c  ldr x8,[x8, #0x10]
7102c0cfa0  blr x8
7102c0cfa4  cmp w0,w20
7102c0cfa8  b.ls 0x7102c0d010
7102c0cfac  ldr x8,[x19, #0xd8]
7102c0cfb0  ldr x8,[x8, #0x8]
7102c0cfb4  ldr x0,[x8, #0x48]
7102c0cfb8  ldr x8,[x0]
7102c0cfbc  ldr x8,[x8, #0x38]
7102c0cfc0  mov w1,wzr
7102c0cfc4  blr x8
7102c0cfc8  mov w8,w20
7102c0cfcc  add x8,x1,x8, LSL #0x6
7102c0cfd0  add x8,x8,#0x30
7102c0cfd4  b 0x7102c0d024
7102c0cfd8  str x0,[x21, #0x50]
7102c0cfdc  cbz x0,0x7102c0c97c
7102c0cfe0  ldr x8,[x0, #0xd8]
7102c0cfe4  cbz x8,0x7102c0d498
7102c0cfe8  ldr x8,[x8, #0x8]
7102c0cfec  ldr x0,[x8, #0x8]
7102c0cff0  ldr x8,[x0]
7102c0cff4  ldr x8,[x8, #0x18]
7102c0cff8  adrp x1,0x7104410000
7102c0cffc  add x1,x1,#0x997
7102c0d000  blr x8
7102c0d004  mov w8,w0
7102c0d008  ldr x0,[x21, #0x50]
7102c0d00c  b 0x7102c0d49c
7102c0d010  ldr x0,[x19, #0x90]
7102c0d014  ldr x8,[x0]
7102c0d018  ldr x8,[x8, #0x158]
7102c0d01c  blr x8
7102c0d020  add x8,x0,#0x30
7102c0d024  ldr q0,[x8]
7102c0d028  str q0,[sp, #0x70]
7102c0d02c  ldr q1,[sp, #0x70]
7102c0d030  fmov s0,wzr
7102c0d034  mov w0,#0x10
7102c0d038  mov w1,#0x8
7102c0d03c  ext v1.16B,v1.16B,v1.16B,0x8
7102c0d040  mov v1.S[0x1],v0.S[0x0]
7102c0d044  str q1,[sp, #0x90]
7102c0d048  bl 0x710392e290
7102c0d04c  mov x20,x0
7102c0d050  cbnz x0,0x7102c0d09c
7102c0d054  adrp x8,0x7105332000
7102c0d058  ldr x0,[x8, #0xf00]
7102c0d05c  cbz x0,0x7102c0d098
7102c0d060  mov w8,#0x8
7102c0d064  str wzr,[sp, #0xa0]
7102c0d068  add x1,sp,#0xa0
7102c0d06c  str x8,[sp, #0x150]
7102c0d070  ldr x8,[x0]
7102c0d074  ldr x8,[x8, #0x30]
7102c0d078  add x2,sp,#0x150
7102c0d07c  blr x8
7102c0d080  tbz w0,#0x0,0x7102c0d098
7102c0d084  mov w0,#0x10
7102c0d088  mov w1,#0x8
7102c0d08c  bl 0x710392e290
7102c0d090  mov x20,x0
7102c0d094  cbnz x0,0x7102c0d09c
7102c0d098  mov x20,xzr
7102c0d09c  ldr q0,[sp, #0x70]
7102c0d0a0  ldr q1,[sp, #0x90]
7102c0d0a4  mov w0,#0x10
7102c0d0a8  mov v0.D[0x1],v1.D[0x0]
7102c0d0ac  ldr x21,[x25]
7102c0d0b0  orr w1,wzr,#0x70
7102c0d0b4  str q0,[sp, #0x70]
7102c0d0b8  bl 0x710392e290
7102c0d0bc  mov x22,x0
7102c0d0c0  cbnz x0,0x7102c0d10c
7102c0d0c4  adrp x8,0x7105332000
7102c0d0c8  ldr x0,[x8, #0xf00]
7102c0d0cc  cbz x0,0x7102c0d108
7102c0d0d0  orr w8,wzr,#0x70
7102c0d0d4  str wzr,[sp, #0xa0]
7102c0d0d8  add x1,sp,#0xa0
7102c0d0dc  str x8,[sp, #0x150]
7102c0d0e0  ldr x8,[x0]
7102c0d0e4  ldr x8,[x8, #0x30]
7102c0d0e8  add x2,sp,#0x150
7102c0d0ec  blr x8
7102c0d0f0  tbz w0,#0x0,0x7102c0d108
7102c0d0f4  mov w0,#0x10
7102c0d0f8  orr w1,wzr,#0x70
7102c0d0fc  bl 0x710392e290
7102c0d100  mov x22,x0
7102c0d104  cbnz x0,0x7102c0d10c
7102c0d108  mov x22,xzr
7102c0d10c  ldr q0,[sp, #0x70]
7102c0d110  mov x19,x22
7102c0d114  orr x8,xzr,#-0x100000000
7102c0d118  str x21,[x22]
7102c0d11c  strh wzr,[x22, #0x20]
7102c0d120  str xzr,[x19, #0x8]!
7102c0d124  strb wzr,[x22, #0x24]
7102c0d128  stp xzr,x8,[x22, #0x28]
7102c0d12c  adrp x8,0x71052a8000
7102c0d130  stp xzr,xzr,[x22, #0x10]
7102c0d134  str q0,[x22, #0x40]
7102c0d138  ldr x8,[x8, #0xa88]
7102c0d13c  ldr q0,[x8]
7102c0d140  mov w8,#0xffffffff
7102c0d144  str x8,[x22, #0x60]
7102c0d148  str wzr,[x22, #0x68]
7102c0d14c  str q0,[x22, #0x50]
7102c0d150  ldr x8,[x21]
7102c0d154  ldr x8,[x8, #0x8]
7102c0d158  ldr w9,[x8, #0x40]
7102c0d15c  str w9,[x22, #0x28]
7102c0d160  ldr s0,[x8, #0x44]
7102c0d164  fmov s1,w9
7102c0d168  fsub s1,s0,s1
7102c0d16c  stp s0,s1,[x22, #0x2c]
7102c0d170  ldr w8,[x8, #0x48]
7102c0d174  str w8,[x22, #0x64]
7102c0d178  ldr x8,[x21]
7102c0d17c  ldr x8,[x8]
7102c0d180  ldr x9,[x8, #0x310]
7102c0d184  ldp x8,x9,[x9, #0xd0]
7102c0d188  cmp x8,x9
7102c0d18c  b.eq 0x7102c0d1c4
7102c0d190  mov x10,#0x5c4c
7102c0d194  movk x10,#0x44b, LSL #16
7102c0d198  movk x10,#0x9, LSL #32
7102c0d19c  ldr w11,[x8, #0x8]
7102c0d1a0  cmp w11,#0x1
7102c0d1a4  b.hi 0x7102c0d1b8
7102c0d1a8  ldr x21,[x8]
7102c0d1ac  ldr x11,[x21, #0x68]
7102c0d1b0  cmp x11,x10
7102c0d1b4  b.eq 0x7102c0d1c8
7102c0d1b8  add x8,x8,#0x10
7102c0d1bc  cmp x9,x8
7102c0d1c0  b.ne 0x7102c0d19c
7102c0d1c4  mov x21,xzr
7102c0d1c8  ldr q1,[sp, #0x70]
7102c0d1cc  fmov s0,0x3f800000
7102c0d1d0  str x21,[x19]
7102c0d1d4  mov v1.S[0x3],v0.S[0x0]
7102c0d1d8  ldr q0,[sp, #0x40]
7102c0d1dc  str q0,[sp, #0xa0]
7102c0d1e0  ldr q0,[sp, #0x30]
7102c0d1e4  str q0,[sp, #0xb0]
7102c0d1e8  ldr q0,[sp, #0x20]
7102c0d1ec  stp q0,q1,[sp, #0xc0]
7102c0d1f0  cbz x21,0x7102c0d278
7102c0d1f4  ldr x0,[x21, #0x90]
7102c0d1f8  ldr x8,[x0]
7102c0d1fc  ldr x8,[x8, #0x148]
7102c0d200  add x1,sp,#0xa0
7102c0d204  blr x8
7102c0d208  ldr x21,[x21, #0xd8]
7102c0d20c  cbz x21,0x7102c0d278
7102c0d210  ldr x8,[sp, #0xb8]
7102c0d214  str x8,[sp, #0x168]
7102c0d218  ldr x8,[sp, #0xb0]
7102c0d21c  str x8,[sp, #0x160]
7102c0d220  ldr x8,[sp, #0xa8]
7102c0d224  str x8,[sp, #0x158]
7102c0d228  ldr x8,[sp, #0xa0]
7102c0d22c  str x8,[sp, #0x150]
7102c0d230  ldr x8,[sp, #0xd8]
7102c0d234  str x8,[sp, #0x188]
7102c0d238  ldr x8,[sp, #0xd0]
7102c0d23c  str x8,[sp, #0x180]
7102c0d240  ldr x8,[sp, #0xc8]
7102c0d244  str x8,[sp, #0x178]
7102c0d248  ldr x8,[sp, #0xc0]
7102c0d24c  str x8,[sp, #0x170]
7102c0d250  ldr x8,[x21, #0x8]
7102c0d254  ldrb w9,[x8, #0xa8]
7102c0d258  cbz w9,0x7102c0d270
7102c0d25c  ldr x0,[x8, #0x48]
7102c0d260  ldr x8,[x0]
7102c0d264  ldr x8,[x8, #0x20]
7102c0d268  add x1,sp,#0x150
7102c0d26c  blr x8
7102c0d270  mov w8,#0x1
7102c0d274  strb w8,[x21, #0x20]
7102c0d278  ldr x8,[x19]
7102c0d27c  cbz x8,0x7102c0d2a0
7102c0d280  add x0,x8,#0x108
7102c0d284  strb wzr,[x8, #0x110]
7102c0d288  bl 0x71025e9d50
7102c0d28c  ldr x8,[x19]
7102c0d290  cbz x8,0x7102c0d2a0
7102c0d294  ldrb w9,[x8, #0x118]
7102c0d298  orr w9,w9,#0x1
7102c0d29c  strb w9,[x8, #0x118]
7102c0d2a0  ldr x8,[x22, #0x10]
7102c0d2a4  cbz x8,0x7102c0d2b4
7102c0d2a8  ldp x0,x1,[x8]
7102c0d2ac  mov w2,#0x1
7102c0d2b0  bl 0x71025f4d80
7102c0d2b4  ldr x8,[x19]
7102c0d2b8  cbz x8,0x7102c0d324
7102c0d2bc  ldrb w9,[x8, #0xe0]
7102c0d2c0  cbz w9,0x7102c0d2d4
7102c0d2c4  ldr x9,[x8, #0xc8]
7102c0d2c8  cbz x9,0x7102c0d2d4
7102c0d2cc  mov w10,#0x101
7102c0d2d0  strh w10,[x9, #0x30]
7102c0d2d4  ldr x9,[x8, #0xd8]
7102c0d2d8  cbz x9,0x7102c0d2e4
7102c0d2dc  mov w10,#0x1
7102c0d2e0  strb w10,[x9, #0x21]
7102c0d2e4  ldrb w9,[x8, #0xe0]
7102c0d2e8  cbz w9,0x7102c0d2f4
7102c0d2ec  ldr x8,[x8, #0xb0]
7102c0d2f0  strb wzr,[x8, #0x10]
7102c0d2f4  ldr x8,[x19]
7102c0d2f8  cbz x8,0x7102c0d324
7102c0d2fc  ldr x8,[x8, #0xd8]
7102c0d300  cbz x8,0x7102c0d324
7102c0d304  ldr x8,[x8, #0x8]
7102c0d308  ldr x0,[x8, #0x8]
7102c0d30c  ldr x8,[x0]
7102c0d310  ldr x8,[x8, #0x18]
7102c0d314  adrp x1,0x7104420000
7102c0d318  add x1,x1,#0x5f7
7102c0d31c  blr x8
7102c0d320  b 0x7102c0d328
7102c0d324  mov w0,#0xffffffff
7102c0d328  ldr x8,[x22]
7102c0d32c  str w0,[x22, #0x60]
7102c0d330  ldr x8,[x8]
7102c0d334  ldr x8,[x8]
7102c0d338  ldr x8,[x8, #0x300]
7102c0d33c  ldr x9,[x8, #0x18]
7102c0d340  ldp x8,x9,[x9]
7102c0d344  cmp x8,x9
7102c0d348  b.eq 0x7102c0d518
7102c0d34c  mov x10,#0xa873
7102c0d350  movk x10,#0x4bcf, LSL #16
7102c0d354  movk x10,#0xa, LSL #32
7102c0d358  ldr x11,[x8], #0x8
7102c0d35c  ldr x12,[x11, #0xa0]
7102c0d360  and x12,x12,#0xffffffffff
7102c0d364  cmp x12,x10
7102c0d368  b.eq 0x7102c0d378
7102c0d36c  cmp x9,x8
7102c0d370  b.ne 0x7102c0d358
7102c0d374  b 0x7102c0d518
7102c0d378  ldr x8,[x11, #0x110]
7102c0d37c  cbz x8,0x7102c0d518
7102c0d380  ldp x9,x10,[x8]
7102c0d384  cmp x9,x10
7102c0d388  b.eq 0x7102c0d518
7102c0d38c  str x8,[x22, #0x10]
7102c0d390  ldp x1,x8,[x8]
7102c0d394  cmp x1,x8
7102c0d398  b.eq 0x7102c0d4a4
7102c0d39c  ldr q0,[x22, #0x40]
7102c0d3a0  dup s1,v0.S[0x1]
7102c0d3a4  ldr s2,[x22, #0x64]
7102c0d3a8  fadd s1,s1,s2
7102c0d3ac  movi v2.2D,#0x0
7102c0d3b0  mov v2.S[0x0],v0.S[0x0]
7102c0d3b4  adrp x10,0x7104472000
7102c0d3b8  mov v2.S[0x1],v1.S[0x0]
7102c0d3bc  ldr s3,[x10, #0x970]
7102c0d3c0  fmov s4,0xbf800000
7102c0d3c4  mov w9,#0x1
7102c0d3c8  ldr x10,[x1]
7102c0d3cc  ldr x12,[x10, #0x8]
7102c0d3d0  ldrb w13,[x12, #0xe7]
7102c0d3d4  ldrb w12,[x12, #0xe8]
7102c0d3d8  ldrb w11,[x10, #0x128]
7102c0d3dc  cmp w11,#0x0
7102c0d3e0  orr w12,w12,w13
7102c0d3e4  and w11,w12,#0xff
7102c0d3e8  ccmp w11,#0x0,#0x0,ne
7102c0d3ec  b.eq 0x7102c0d3f8
7102c0d3f0  strb w9,[x10, #0x129]
7102c0d3f4  b 0x7102c0d41c
7102c0d3f8  ldr q5,[x10, #0x10]
7102c0d3fc  fabd s6,s5,s0
7102c0d400  fcmp s6,s3
7102c0d404  b.gt 0x7102c0d418
7102c0d408  dup s5,v5.S[0x1]
7102c0d40c  fabd s5,s5,s1
7102c0d410  fcmp s5,s3
7102c0d414  b.le 0x7102c0d420
7102c0d418  strb w9,[x10, #0x12a]
7102c0d41c  str q2,[x10, #0x10]
7102c0d420  ldr s5,[x10, #0x30]
7102c0d424  fabs s5,s5
7102c0d428  fcmp s5,s3
7102c0d42c  b.mi 0x7102c0d438
7102c0d430  str wzr,[x10, #0x30]
7102c0d434  strb w9,[x10, #0x129]
7102c0d438  ldr q5,[x10, #0x50]
7102c0d43c  fadd s6,s5,s4
7102c0d440  fabs s6,s6
7102c0d444  fcmp s6,s3
7102c0d448  b.mi 0x7102c0d45c
7102c0d44c  fmov s6,0x3f800000
7102c0d450  mov v5.S[0x0],v6.S[0x0]
7102c0d454  str q5,[x10, #0x50]
7102c0d458  strb w9,[x10, #0x129]
7102c0d45c  dup s6,v5.S[0x1]
7102c0d460  fadd s6,s6,s4
7102c0d464  fabs s6,s6
7102c0d468  fcmp s6,s3
7102c0d46c  b.mi 0x7102c0d480
7102c0d470  fmov s6,0x3f800000
7102c0d474  mov v5.S[0x1],v6.S[0x0]
7102c0d478  str q5,[x10, #0x50]
7102c0d47c  strb w9,[x10, #0x129]
7102c0d480  add x1,x1,#0x8
7102c0d484  cmp x8,x1
7102c0d488  b.ne 0x7102c0d3c8
7102c0d48c  ldr x8,[x22, #0x10]
7102c0d490  ldp x0,x1,[x8]
7102c0d494  b 0x7102c0d4a8
7102c0d498  mov w8,#0xffffffff
7102c0d49c  str w8,[x21, #0x58]
7102c0d4a0  b 0x7102c0c97c
7102c0d4a4  mov x0,x1
7102c0d4a8  mov w2,#0x1
7102c0d4ac  bl 0x71025f4d80
7102c0d4b0  ldr x8,[x22]
7102c0d4b4  ldr x8,[x8]
7102c0d4b8  ldr x8,[x8]
7102c0d4bc  ldrb w0,[x8, #0x18]
7102c0d4c0  bl 0x7102c12990
7102c0d4c4  tbnz w0,#0x0,0x7102c0d4e0
7102c0d4c8  ldr x8,[x19]
7102c0d4cc  cbz x8,0x7102c0d4e0
7102c0d4d0  ldr x8,[x8, #0xd8]
7102c0d4d4  cbz x8,0x7102c0d4e0
7102c0d4d8  mov w9,#0x1
7102c0d4dc  strb w9,[x8, #0x21]
7102c0d4e0  str xzr,[sp, #0x150]
7102c0d4e4  ldr x8,[x22]
7102c0d4e8  ldr x8,[x8]
7102c0d4ec  ldr x8,[x8]
7102c0d4f0  ldr x8,[x8, #0x338]
7102c0d4f4  ldr x8,[x8]
7102c0d4f8  ldr x0,[x8, #0x8]
7102c0d4fc  cbz x0,0x7102c0d510
7102c0d500  add x1,sp,#0x150
7102c0d504  mov w2,wzr
7102c0d508  bl 0x7102405040
7102c0d50c  b 0x7102c0d514
7102c0d510  mov w0,#0xffffffff
7102c0d514  str w0,[x22, #0x34]
7102c0d518  ldr x8,[sp, #0x60]
7102c0d51c  str x22,[x20]
7102c0d520  ldr x22,[x8]
7102c0d524  str x20,[x8]
7102c0d528  cbz x22,0x7102c0d544
7102c0d52c  ldr x0,[x22]
7102c0d530  str xzr,[x22]
7102c0d534  cbz x0,0x7102c0d53c
7102c0d538  bl 0x710392eb40
7102c0d53c  mov x0,x22
7102c0d540  bl 0x710392eb40
7102c0d544  mov w0,#0x10
7102c0d548  mov w1,#0x8
7102c0d54c  bl 0x710392e290
7102c0d550  mov x21,x0
7102c0d554  cbnz x0,0x7102c0d5a0
7102c0d558  adrp x8,0x7105332000
7102c0d55c  ldr x0,[x8, #0xf00]
7102c0d560  cbz x0,0x7102c0d59c
7102c0d564  mov w8,#0x8
7102c0d568  str wzr,[sp, #0xa0]
7102c0d56c  add x1,sp,#0xa0
7102c0d570  str x8,[sp, #0x150]
7102c0d574  ldr x8,[x0]
7102c0d578  ldr x8,[x8, #0x30]
7102c0d57c  add x2,sp,#0x150
7102c0d580  blr x8
7102c0d584  tbz w0,#0x0,0x7102c0d59c
7102c0d588  mov w0,#0x10
7102c0d58c  mov w1,#0x8
7102c0d590  bl 0x710392e290
7102c0d594  mov x21,x0
7102c0d598  cbnz x0,0x7102c0d5a0
7102c0d59c  mov x21,xzr
7102c0d5a0  ldr x19,[x25]
7102c0d5a4  mov w1,#0x120
7102c0d5a8  mov w0,#0x10
7102c0d5ac  bl 0x710392e290
7102c0d5b0  mov x23,x0
7102c0d5b4  cbnz x0,0x7102c0d600
7102c0d5b8  adrp x8,0x7105332000
7102c0d5bc  ldr x0,[x8, #0xf00]
7102c0d5c0  cbz x0,0x7102c0d5fc
7102c0d5c4  mov w8,#0x120
7102c0d5c8  str wzr,[sp, #0xa0]
7102c0d5cc  add x1,sp,#0xa0
7102c0d5d0  str x8,[sp, #0x150]
7102c0d5d4  ldr x8,[x0]
7102c0d5d8  ldr x8,[x8, #0x30]
7102c0d5dc  add x2,sp,#0x150
7102c0d5e0  blr x8
7102c0d5e4  tbz w0,#0x0,0x7102c0d5fc
7102c0d5e8  mov w1,#0x120
7102c0d5ec  mov w0,#0x10
7102c0d5f0  bl 0x710392e290
7102c0d5f4  mov x23,x0
7102c0d5f8  cbnz x0,0x7102c0d600
7102c0d5fc  mov x23,xzr
7102c0d600  add x0,x23,#0x10
7102c0d604  mov w2,#0x110
7102c0d608  mov w1,wzr
7102c0d60c  str x19,[x23]
7102c0d610  strb wzr,[x23, #0x8]
7102c0d614  bl 0x71039c02a0
7102c0d618  add x0,sp,#0x150
7102c0d61c  mov w2,#0x400
7102c0d620  mov w1,wzr
7102c0d624  bl 0x71039c02a0
7102c0d628  adrp x2,0x7104306000
7102c0d62c  add x2,x2,#0x951
7102c0d630  adrp x3,0x7104338000
7102c0d634  add x3,x3,#0x49c
7102c0d638  add x0,sp,#0x150
7102c0d63c  mov w1,#0x400
7102c0d640  bl 0x71039c04d0
7102c0d644  orr w8,wzr,#0x3f800000
7102c0d648  stp xzr,xzr,[sp, #0x138]
7102c0d64c  stp xzr,xzr,[sp, #0x128]
7102c0d650  add x0,sp,#0x150
7102c0d654  str w8,[sp, #0x148]
7102c0d658  ldr x8,[x23]
7102c0d65c  ldr x8,[x8]
7102c0d660  ldr x8,[x8]
7102c0d664  ldr x19,[x8, #0x300]
7102c0d668  bl 0x7103151710
7102c0d66c  ldr x1,[x19, #0x8]
7102c0d670  mov w2,w0
7102c0d674  add x0,sp,#0xf0
7102c0d678  bl 0x710262cfa0
7102c0d67c  ldr x8,[sp, #0xf0]
7102c0d680  cbz x8,0x7102c0dfe0
7102c0d684  adrp x9,0x7104472000
7102c0d688  ldr s8,[x9, #0x970]
7102c0d68c  fmov s9,0xbf800000
7102c0d690  stp x21,x25,[sp]
7102c0d694  adrp x24,0x710438a000
7102c0d698  add x24,x24,#0xe33
7102c0d69c  mov w26,#0x130
7102c0d6a0  adrp x25,0x7104338000
7102c0d6a4  add x25,x25,#0x49c
7102c0d6a8  orr x19,xzr,#0x100000000
7102c0d6ac  adrp x22,0x7104754000
7102c0d6b0  add x22,x22,#0x84
7102c0d6b4  str x23,[sp, #0x80]
7102c0d6b8  b 0x7102c0d778
7102c0d6bc  bl 0x710262fb80
7102c0d6c0  mov x26,x0
7102c0d6c4  str x26,[x23]
7102c0d6c8  cbz x26,0x7102c0dadc
7102c0d6cc  ldr q0,[x20, #0xb0]
7102c0d6d0  fmov s1,0x3f800000
7102c0d6d4  sub x1,x29,#0xb0
7102c0d6d8  mov v0.S[0x3],v1.S[0x0]
7102c0d6dc  ldr q1,[sp, #0x40]
7102c0d6e0  stur q1,[x29, #-0xb0]
7102c0d6e4  ldr q1,[sp, #0x30]
7102c0d6e8  stur q1,[x29, #-0xa0]
7102c0d6ec  ldr q1,[sp, #0x20]
7102c0d6f0  stp q1,q0,[x29, #-0x90]
7102c0d6f4  ldr x0,[x26, #0x90]
7102c0d6f8  ldr x8,[x0]
7102c0d6fc  ldr x8,[x8, #0x148]
7102c0d700  blr x8
7102c0d704  ldr x26,[x26, #0xd8]
7102c0d708  cbz x26,0x7102c0dadc
7102c0d70c  ldur x8,[x29, #-0x98]
7102c0d710  str x8,[sp, #0xb8]
7102c0d714  ldur x8,[x29, #-0xa0]
7102c0d718  str x8,[sp, #0xb0]
7102c0d71c  ldur x8,[x29, #-0xa8]
7102c0d720  str x8,[sp, #0xa8]
7102c0d724  ldur x8,[x29, #-0xb0]
7102c0d728  str x8,[sp, #0xa0]
7102c0d72c  ldur x8,[x29, #-0x78]
7102c0d730  str x8,[sp, #0xd8]
7102c0d734  ldur x8,[x29, #-0x80]
7102c0d738  str x8,[sp, #0xd0]
7102c0d73c  ldur x8,[x29, #-0x88]
7102c0d740  str x8,[sp, #0xc8]
7102c0d744  ldur x8,[x29, #-0x90]
7102c0d748  str x8,[sp, #0xc0]
7102c0d74c  ldr x8,[x26, #0x8]
7102c0d750  ldrb w9,[x8, #0xa8]
7102c0d754  cbz w9,0x7102c0d76c
7102c0d758  ldr x0,[x8, #0x48]
7102c0d75c  ldr x8,[x0]
7102c0d760  ldr x8,[x8, #0x20]
7102c0d764  add x1,sp,#0xa0
7102c0d768  blr x8
7102c0d76c  mov w8,#0x1
7102c0d770  strb w8,[x26, #0x20]
7102c0d774  b 0x7102c0dadc
7102c0d778  ldp x10,x11,[x8, #0x1a8]
7102c0d77c  ldr w9,[sp, #0xf8]
7102c0d780  sub x11,x11,x10
7102c0d784  asr x11,x11,#0x3
7102c0d788  cmp x11,x9
7102c0d78c  b.ls 0x7102c10360
7102c0d790  ldr x11,[x10, x9, LSL #0x3]
7102c0d794  ldr w10,[sp, #0x100]
7102c0d798  ldr x11,[x11, #0x10]
7102c0d79c  ldr w12,[x11, #0x108]
7102c0d7a0  cmp w12,w10
7102c0d7a4  b.ls 0x7102c0d7b4
7102c0d7a8  ldr x11,[x11, #0x110]
7102c0d7ac  madd x20,x10,x26,x11
7102c0d7b0  b 0x7102c0d7b8
7102c0d7b4  mov x20,xzr
7102c0d7b8  ldp x11,x12,[x8, #0x1a8]
7102c0d7bc  sub x12,x12,x11
7102c0d7c0  asr x12,x12,#0x3
7102c0d7c4  cmp x12,x9
7102c0d7c8  b.ls 0x7102c10360
7102c0d7cc  ldr x8,[x11, x9, LSL #0x3]
7102c0d7d0  ldr x8,[x8, #0x10]
7102c0d7d4  ldr x8,[x8, #0x110]
7102c0d7d8  madd x8,x10,x26,x8
7102c0d7dc  ldr w21,[x8, #0x100]
7102c0d7e0  mov x27,xzr
7102c0d7e4  ldr x9,[sp, #0x130]
7102c0d7e8  cbz x9,0x7102c0d89c
7102c0d7ec  sub x11,x9,#0x1
7102c0d7f0  ands x12,x11,x9
7102c0d7f4  b.eq 0x7102c0d810
7102c0d7f8  cmp x9,x27
7102c0d7fc  mov x8,x27
7102c0d800  b.hi 0x7102c0d814
7102c0d804  udiv x8,x27,x9
7102c0d808  msub x8,x8,x9,x27
7102c0d80c  b 0x7102c0d814
7102c0d810  and x8,x11,x27
7102c0d814  ldr x10,[sp, #0x128]
7102c0d818  ldr x10,[x10, x8, LSL #0x3]
7102c0d81c  cbz x10,0x7102c0d89c
7102c0d820  ldr x10,[x10]
7102c0d824  cbz x10,0x7102c0d89c
7102c0d828  cbz x12,0x7102c0d86c
7102c0d82c  ldr x11,[x10, #0x8]
7102c0d830  cmp x11,x27
7102c0d834  b.ne 0x7102c0d848
7102c0d838  ldr w11,[x10, #0x10]
7102c0d83c  cmp x27,x11
7102c0d840  b.ne 0x7102c0d860
7102c0d844  b 0x7102c0d8e0
7102c0d848  cmp x11,x9
7102c0d84c  b.cc 0x7102c0d858
7102c0d850  udiv x12,x11,x9
7102c0d854  msub x11,x12,x9,x11
7102c0d858  cmp x11,x8
7102c0d85c  b.ne 0x7102c0d89c
7102c0d860  ldr x10,[x10]
7102c0d864  cbnz x10,0x7102c0d82c
7102c0d868  b 0x7102c0d89c
7102c0d86c  ldr x9,[x10, #0x8]
7102c0d870  and x12,x9,x11
7102c0d874  cmp x9,x27
7102c0d878  ccmp x12,x8,#0x4,ne
7102c0d87c  b.ne 0x7102c0d89c
7102c0d880  cmp x9,x27
7102c0d884  b.ne 0x7102c0d894
7102c0d888  ldr w9,[x10, #0x10]
7102c0d88c  cmp x27,x9
7102c0d890  b.eq 0x7102c0d8e0
7102c0d894  ldr x10,[x10]
7102c0d898  cbnz x10,0x7102c0d86c
7102c0d89c  add x0,sp,#0x150
7102c0d8a0  mov w2,#0x400
7102c0d8a4  mov w1,wzr
7102c0d8a8  bl 0x71039c02a0
7102c0d8ac  add w4,w27,#0x1
7102c0d8b0  add x0,sp,#0x150
7102c0d8b4  mov w1,#0x400
7102c0d8b8  mov x2,x24
7102c0d8bc  mov x3,x25
7102c0d8c0  bl 0x71039c04d0
7102c0d8c4  add x0,sp,#0x150
7102c0d8c8  bl 0x7103151710
7102c0d8cc  cmp w0,w21
7102c0d8d0  b.ne 0x7102c0d8e0
7102c0d8d4  ldr w8,[x20, #0x104]
7102c0d8d8  cmp w8,#0x4
7102c0d8dc  b.eq 0x7102c0d8f0
7102c0d8e0  cmp x27,#0x10
7102c0d8e4  add x27,x27,#0x1
7102c0d8e8  b.cc 0x7102c0d7e4
7102c0d8ec  b 0x7102c0dfb0
7102c0d8f0  movi v0.2D,#0x0
7102c0d8f4  mov v1.16B,v0.16B
7102c0d8f8  add x8,x20,#0x108
7102c0d8fc  ld1 {v1.S}[0],[x8]
7102c0d900  ldr s0,[x20, #0x10c]
7102c0d904  mov v1.S[0x1],v0.S[0x0]
7102c0d908  add x8,x20,#0x110
7102c0d90c  ld1 {v1.S}[2],[x8]
7102c0d910  mov w0,#0x10
7102c0d914  mov w1,#0x8
7102c0d918  stp q0,q1,[sp, #0x60]
7102c0d91c  bl 0x710392e290
7102c0d920  mov x28,x0
7102c0d924  cbnz x0,0x7102c0d970
7102c0d928  adrp x8,0x7105332000
7102c0d92c  ldr x0,[x8, #0xf00]
7102c0d930  cbz x0,0x7102c0d96c
7102c0d934  mov w8,#0x8
7102c0d938  stur wzr,[x29, #-0xb0]
7102c0d93c  sub x1,x29,#0xb0
7102c0d940  str x8,[sp, #0xa0]
7102c0d944  ldr x8,[x0]
7102c0d948  ldr x8,[x8, #0x30]
7102c0d94c  add x2,sp,#0xa0
7102c0d950  blr x8
7102c0d954  tbz w0,#0x0,0x7102c0d96c
7102c0d958  mov w0,#0x10
7102c0d95c  mov w1,#0x8
7102c0d960  bl 0x710392e290
7102c0d964  mov x28,x0
7102c0d968  cbnz x0,0x7102c0d970
7102c0d96c  mov x28,xzr
7102c0d970  ldr x21,[x23]
7102c0d974  mov w0,#0x10
7102c0d978  orr w1,wzr,#0xf0
7102c0d97c  bl 0x710392e290
7102c0d980  mov x20,x0
7102c0d984  cbnz x0,0x7102c0d9d0
7102c0d988  adrp x8,0x7105332000
7102c0d98c  ldr x0,[x8, #0xf00]
7102c0d990  cbz x0,0x7102c0d9cc
7102c0d994  orr w8,wzr,#0xf0
7102c0d998  stur wzr,[x29, #-0xb0]
7102c0d99c  sub x1,x29,#0xb0
7102c0d9a0  str x8,[sp, #0xa0]
7102c0d9a4  ldr x8,[x0]
7102c0d9a8  ldr x8,[x8, #0x30]
7102c0d9ac  add x2,sp,#0xa0
7102c0d9b0  blr x8
7102c0d9b4  tbz w0,#0x0,0x7102c0d9cc
7102c0d9b8  mov w0,#0x10
7102c0d9bc  orr w1,wzr,#0xf0
7102c0d9c0  bl 0x710392e290
7102c0d9c4  mov x20,x0
7102c0d9c8  cbnz x0,0x7102c0d9d0
7102c0d9cc  mov x20,xzr
7102c0d9d0  mov x23,x20
7102c0d9d4  orr x8,xzr,#-0x100000000
7102c0d9d8  str x21,[sp, #0x90]
7102c0d9dc  str x21,[x20]
7102c0d9e0  strb wzr,[x20, #0x20]
7102c0d9e4  cmp w27,#0x10
7102c0d9e8  str xzr,[x23, #0x8]!
7102c0d9ec  stp xzr,xzr,[x20, #0x10]
7102c0d9f0  strh wzr,[x20, #0x8c]
7102c0d9f4  stur xzr,[x20, #0x84]
7102c0d9f8  str wzr,[x20, #0x90]
7102c0d9fc  stur x8,[x20, #0x94]
7102c0da00  adrp x8,0x71052a8000
7102c0da04  strh wzr,[x20, #0x80]
7102c0da08  stp xzr,xzr,[x20, #0x70]
7102c0da0c  stp x20,xzr,[x20, #0x60]
7102c0da10  ldr x8,[x8, #0xa88]
7102c0da14  ldr q0,[x8]
7102c0da18  mov w8,#0x100
7102c0da1c  movk w8,#0x101, LSL #16
7102c0da20  stp wzr,w27,[x20, #0xc8]
7102c0da24  str xzr,[x20, #0xc0]
7102c0da28  str w8,[x20, #0xd0]
7102c0da2c  stur xzr,[x20, #0xd9]
7102c0da30  stur xzr,[x20, #0xd4]
7102c0da34  str q0,[x20, #0xa0]
7102c0da38  ldr q0,[sp, #0x70]
7102c0da3c  str q0,[x20, #0xb0]
7102c0da40  b.gt 0x7102c0de1c
7102c0da44  ldr q0,[sp, #0x60]
7102c0da48  stp s0,s0,[x20, #0xc0]
7102c0da4c  ldr x8,[sp, #0x90]
7102c0da50  ldr x8,[x8]
7102c0da54  ldr x21,[x8]
7102c0da58  ldr x0,[x21, #0x310]
7102c0da5c  mov x11,#0xf171
7102c0da60  movk x11,#0x9bde, LSL #16
7102c0da64  movk x11,#0xb, LSL #32
7102c0da68  cbz w27,0x7102c0daa4
7102c0da6c  ldp x1,x8,[x0, #0xd0]
7102c0da70  cmp x1,x8
7102c0da74  b.eq 0x7102c0dad8
7102c0da78  ldr w9,[x1, #0x8]
7102c0da7c  cmp w9,#0x1
7102c0da80  b.hi 0x7102c0da94
7102c0da84  ldr x9,[x1]
7102c0da88  ldr x9,[x9, #0x68]
7102c0da8c  cmp x9,x11
7102c0da90  b.eq 0x7102c0d6bc
7102c0da94  add x1,x1,#0x10
7102c0da98  cmp x8,x1
7102c0da9c  b.ne 0x7102c0da78
7102c0daa0  b 0x7102c0dad8
7102c0daa4  ldp x8,x9,[x0, #0xd0]
7102c0daa8  cmp x8,x9
7102c0daac  b.eq 0x7102c0dad8
7102c0dab0  ldr w10,[x8, #0x8]
7102c0dab4  cmp w10,#0x1
7102c0dab8  b.hi 0x7102c0dacc
7102c0dabc  ldr x26,[x8]
7102c0dac0  ldr x10,[x26, #0x68]
7102c0dac4  cmp x10,x11
7102c0dac8  b.eq 0x7102c0d6c4
7102c0dacc  add x8,x8,#0x10
7102c0dad0  cmp x9,x8
7102c0dad4  b.ne 0x7102c0dab0
7102c0dad8  str xzr,[x23]
7102c0dadc  ldr w8,[x20, #0xcc]
7102c0dae0  add x0,x20,#0x18
7102c0dae4  adrp x1,0x71042a1000
7102c0dae8  add x1,x1,#0x324
7102c0daec  add w2,w8,#0x1
7102c0daf0  bl 0x710062dc20
7102c0daf4  ldr x8,[x21, #0x300]
7102c0daf8  ldr x9,[x8, #0x18]
7102c0dafc  ldp x8,x9,[x9]
7102c0db00  cmp x8,x9
7102c0db04  b.eq 0x7102c0de1c
7102c0db08  ldrb w10,[x20, #0x20]
7102c0db0c  add x11,x20,#0x21
7102c0db10  ldr x12,[x8]
7102c0db14  cbz w10,0x7102c0db64
7102c0db18  mov x13,xzr
7102c0db1c  mov x14,x11
7102c0db20  mov w16,w10
7102c0db24  mov w15,#0xffffffff
7102c0db28  and w16,w16,#0xff
7102c0db2c  sub w17,w16,#0x41
7102c0db30  add w18,w16,#0x20
7102c0db34  cmp w17,#0x1a
7102c0db38  csel w16,w18,w16,cc
7102c0db3c  eor w16,w16,w15
7102c0db40  and w16,w16,#0xff
7102c0db44  ldr w16,[x22, w16, UXTW #0x2]
7102c0db48  eor w15,w16,w15, LSR #0x8
7102c0db4c  ldrb w16,[x14], #0x1
7102c0db50  add x13,x13,x19
7102c0db54  cbnz w16,0x7102c0db28
7102c0db58  mvn w14,w15
7102c0db5c  and x13,x13,#0xff00000000
7102c0db60  b 0x7102c0db6c
7102c0db64  mov x14,xzr
7102c0db68  mov x13,xzr
7102c0db6c  orr x13,x13,x14
7102c0db70  ldr x14,[x12, #0xa0]
7102c0db74  and x14,x14,#0xffffffffff
7102c0db78  cmp x14,x13
7102c0db7c  b.eq 0x7102c0db90
7102c0db80  add x8,x8,#0x8
7102c0db84  cmp x8,x9
7102c0db88  b.ne 0x7102c0db10
7102c0db8c  b 0x7102c0de1c
7102c0db90  ldr x9,[x12, #0x110]
7102c0db94  cbz x9,0x7102c0de1c
7102c0db98  ldp x8,x10,[x9]
7102c0db9c  cmp x8,x10
7102c0dba0  b.eq 0x7102c0de1c
7102c0dba4  str x9,[x20, #0x10]
7102c0dba8  ldp x8,x9,[x9]
7102c0dbac  cmp x8,x9
7102c0dbb0  b.eq 0x7102c0dca0
7102c0dbb4  ldr q0,[x20, #0xb0]
7102c0dbb8  mov v1.16B,v0.16B
7102c0dbbc  movi d2,#0x0
7102c0dbc0  mov v1.D[0x1],v2.D[0x0]
7102c0dbc4  dup s2,v0.S[0x1]
7102c0dbc8  ldr x10,[x8]
7102c0dbcc  ldr x12,[x10, #0x8]
7102c0dbd0  ldrb w13,[x12, #0xe7]
7102c0dbd4  ldrb w12,[x12, #0xe8]
7102c0dbd8  ldrb w11,[x10, #0x128]
7102c0dbdc  cmp w11,#0x0
7102c0dbe0  orr w12,w12,w13
7102c0dbe4  and w11,w12,#0xff
7102c0dbe8  ccmp w11,#0x0,#0x0,ne
7102c0dbec  b.eq 0x7102c0dbfc
7102c0dbf0  mov w11,#0x1
7102c0dbf4  strb w11,[x10, #0x129]
7102c0dbf8  b 0x7102c0dc24
7102c0dbfc  ldr q3,[x10, #0x10]
7102c0dc00  fabd s4,s3,s0
7102c0dc04  fcmp s4,s8
7102c0dc08  b.gt 0x7102c0dc1c
7102c0dc0c  dup s3,v3.S[0x1]
7102c0dc10  fabd s3,s3,s2
7102c0dc14  fcmp s3,s8
7102c0dc18  b.le 0x7102c0dc28
7102c0dc1c  mov w11,#0x1
7102c0dc20  strb w11,[x10, #0x12a]
7102c0dc24  str q1,[x10, #0x10]
7102c0dc28  ldr s3,[x10, #0x30]
7102c0dc2c  fabs s3,s3
7102c0dc30  fcmp s3,s8
7102c0dc34  b.mi 0x7102c0dc44
7102c0dc38  mov w11,#0x1
7102c0dc3c  str wzr,[x10, #0x30]
7102c0dc40  strb w11,[x10, #0x129]
7102c0dc44  ldr q3,[x10, #0x50]
7102c0dc48  fadd s4,s3,s9
7102c0dc4c  fabs s4,s4
7102c0dc50  fcmp s4,s8
7102c0dc54  b.mi 0x7102c0dc6c
7102c0dc58  fmov s4,0x3f800000
7102c0dc5c  mov v3.S[0x0],v4.S[0x0]
7102c0dc60  mov w11,#0x1
7102c0dc64  strb w11,[x10, #0x129]
7102c0dc68  str q3,[x10, #0x50]
7102c0dc6c  dup s4,v3.S[0x1]
7102c0dc70  fadd s4,s4,s9
7102c0dc74  fabs s4,s4
7102c0dc78  fcmp s4,s8
7102c0dc7c  b.mi 0x7102c0dc94
7102c0dc80  fmov s4,0x3f800000
7102c0dc84  mov v3.S[0x1],v4.S[0x0]
7102c0dc88  mov w11,#0x1
7102c0dc8c  strb w11,[x10, #0x129]
7102c0dc90  str q3,[x10, #0x50]
7102c0dc94  add x8,x8,#0x8
7102c0dc98  cmp x9,x8
7102c0dc9c  b.ne 0x7102c0dbc8
7102c0dca0  ldr x8,[x20]
7102c0dca4  ldr x8,[x8]
7102c0dca8  ldr x8,[x8]
7102c0dcac  ldrb w0,[x8, #0x18]
7102c0dcb0  bl 0x7102c12990
7102c0dcb4  tbz w0,#0x0,0x7102c0dd90
7102c0dcb8  ldr x8,[x20, #0x10]
7102c0dcbc  ldp x21,x8,[x8]
7102c0dcc0  cmp x21,x8
7102c0dcc4  str x8,[sp, #0x70]
7102c0dcc8  b.eq 0x7102c0dd90
7102c0dccc  ldr x26,[x21]
7102c0dcd0  ldr x8,[x26, #0x60]
7102c0dcd4  cbz x8,0x7102c0dd08
7102c0dcd8  ldrh w9,[x8, #0x8]
7102c0dcdc  sub w9,w9,#0x1
7102c0dce0  sxth w10,w9
7102c0dce4  cmp w10,#0x0
7102c0dce8  strh w9,[x8, #0x8]
7102c0dcec  b.gt 0x7102c0dd04
7102c0dcf0  ldr x0,[x26, #0x60]
7102c0dcf4  cbz x0,0x7102c0dd04
7102c0dcf8  ldr x8,[x0]
7102c0dcfc  ldr x8,[x8, #0x8]
7102c0dd00  blr x8
7102c0dd04  str xzr,[x26, #0x60]
7102c0dd08  mov w0,#0x10
7102c0dd0c  mov w1,#0x20
7102c0dd10  bl 0x710392e290
7102c0dd14  cbnz x0,0x7102c0dd5c
7102c0dd18  adrp x8,0x7105332000
7102c0dd1c  ldr x0,[x8, #0xf00]
7102c0dd20  cbz x0,0x7102c0dd58
7102c0dd24  mov w8,#0x20
7102c0dd28  stur wzr,[x29, #-0xb0]
7102c0dd2c  sub x1,x29,#0xb0
7102c0dd30  str x8,[sp, #0xa0]
7102c0dd34  ldr x8,[x0]
7102c0dd38  ldr x8,[x8, #0x30]
7102c0dd3c  add x2,sp,#0xa0
7102c0dd40  blr x8
7102c0dd44  tbz w0,#0x0,0x7102c0dd58
7102c0dd48  mov w0,#0x10
7102c0dd4c  mov w1,#0x20
7102c0dd50  bl 0x710392e290
7102c0dd54  cbnz x0,0x7102c0dd5c
7102c0dd58  mov x0,xzr
7102c0dd5c  orr w8,wzr,#0x10001
7102c0dd60  str w8,[x0, #0x8]
7102c0dd64  adrp x8,0x710507f000
7102c0dd68  add x8,x8,#0x650
7102c0dd6c  str x8,[x0]
7102c0dd70  adrp x8,0x7102c11000
7102c0dd74  add x8,x8,#0xa20
7102c0dd78  stp x20,x8,[x0, #0x10]
7102c0dd7c  ldr x8,[sp, #0x70]
7102c0dd80  add x21,x21,#0x8
7102c0dd84  cmp x8,x21
7102c0dd88  str x0,[x26, #0x60]
7102c0dd8c  b.ne 0x7102c0dccc
7102c0dd90  ldr x8,[x23]
7102c0dd94  cbz x8,0x7102c0ddbc
7102c0dd98  add x0,x8,#0x108
7102c0dd9c  mov w9,#0x1
7102c0dda0  strb w9,[x8, #0x110]
7102c0dda4  bl 0x71025e9d50
7102c0dda8  ldr x8,[x23]
7102c0ddac  cbz x8,0x7102c0ddbc
7102c0ddb0  ldrb w9,[x8, #0x118]
7102c0ddb4  and w9,w9,#0xfe
7102c0ddb8  strb w9,[x8, #0x118]
7102c0ddbc  ldr x8,[x20, #0x10]
7102c0ddc0  cbz x8,0x7102c0de08
7102c0ddc4  ldp x21,x26,[x8]
7102c0ddc8  cmp x21,x26
7102c0ddcc  b.eq 0x7102c0de04
7102c0ddd0  ldr x8,[x21]
7102c0ddd4  mov w9,#0x1
7102c0ddd8  strb w9,[x8, #0x128]
7102c0dddc  ldr x9,[x8, #0x8]
7102c0dde0  cbz x9,0x7102c0ddf8
7102c0dde4  mov x10,#-0x1
7102c0dde8  str x10,[x9, #0xd8]
7102c0ddec  ldr x0,[x8, #0x8]
7102c0ddf0  mov w1,wzr
7102c0ddf4  bl 0x7100532bc0
7102c0ddf8  add x21,x21,#0x8
7102c0ddfc  cmp x26,x21
7102c0de00  b.ne 0x7102c0ddd0
7102c0de04  strb wzr,[x20, #0xd3]
7102c0de08  mov w8,#0x1
7102c0de0c  strb w8,[x20, #0xd2]
7102c0de10  adrp x8,0x7102c11000
7102c0de14  add x8,x8,#0xa40
7102c0de18  stp x8,xzr,[x20, #0x68]
7102c0de1c  ldr x8,[x23]
7102c0de20  cbz x8,0x7102c0de44
7102c0de24  add x0,x8,#0x108
7102c0de28  strb wzr,[x8, #0x110]
7102c0de2c  bl 0x71025e9d50
7102c0de30  ldr x8,[x23]
7102c0de34  cbz x8,0x7102c0de44
7102c0de38  ldrb w9,[x8, #0x118]
7102c0de3c  orr w9,w9,#0x1
7102c0de40  strb w9,[x8, #0x118]
7102c0de44  ldr x8,[x20, #0x10]
7102c0de48  lsl x21,x27,#0x20
7102c0de4c  cbz x8,0x7102c0de88
7102c0de50  ldp x0,x1,[x8]
7102c0de54  mov w2,#0x1
7102c0de58  bl 0x71025f4d80
7102c0de5c  ldr x8,[x20, #0x10]
7102c0de60  ldr x23,[sp, #0x80]
7102c0de64  mov w9,#0x100
7102c0de68  strh w9,[x20, #0xd2]
7102c0de6c  cbz x8,0x7102c0de90
7102c0de70  ldp x0,x1,[x8]
7102c0de74  mov w2,#0x1
7102c0de78  bl 0x71025f4d80
7102c0de7c  mov w8,#0x1
7102c0de80  strb w8,[x20, #0xd3]
7102c0de84  b 0x7102c0de90
7102c0de88  ldr x23,[sp, #0x80]
7102c0de8c  strb wzr,[x20, #0xd2]
7102c0de90  ldr x8,[sp, #0x90]
7102c0de94  str xzr,[sp, #0xa0]
7102c0de98  ldr x8,[x8]
7102c0de9c  ldr x8,[x8]
7102c0dea0  ldr x8,[x8, #0x338]
7102c0dea4  ldr x8,[x8]
7102c0dea8  ldr x0,[x8, #0x8]
7102c0deac  add x23,x23,x21, ASR #0x1c
7102c0deb0  cbz x0,0x7102c0dec4
7102c0deb4  add x1,sp,#0xa0
7102c0deb8  mov w2,wzr
7102c0debc  bl 0x7102405040
7102c0dec0  b 0x7102c0dec8
7102c0dec4  mov w0,#0xffffffff
7102c0dec8  str w0,[x20, #0x98]
7102c0decc  mov w8,#0x1
7102c0ded0  mov w0,#0x10
7102c0ded4  mov w1,#0x20
7102c0ded8  sxtw x21,w27
7102c0dedc  add x23,x23,#0x10
7102c0dee0  str xzr,[x20, #0x78]
7102c0dee4  strh w8,[x20, #0x80]
7102c0dee8  stur xzr,[x20, #0x84]
7102c0deec  strh w8,[x20, #0x8c]
7102c0def0  str x20,[x28]
7102c0def4  bl 0x710392e290
7102c0def8  cbnz x0,0x7102c0df40
7102c0defc  adrp x8,0x7105332000
7102c0df00  ldr x0,[x8, #0xf00]
7102c0df04  cbz x0,0x7102c0df3c
7102c0df08  mov w8,#0x20
7102c0df0c  stur wzr,[x29, #-0xb0]
7102c0df10  sub x1,x29,#0xb0
7102c0df14  str x8,[sp, #0xa0]
7102c0df18  ldr x8,[x0]
7102c0df1c  ldr x8,[x8, #0x30]
7102c0df20  add x2,sp,#0xa0
7102c0df24  blr x8
7102c0df28  tbz w0,#0x0,0x7102c0df3c
7102c0df2c  mov w0,#0x10
7102c0df30  mov w1,#0x20
7102c0df34  bl 0x710392e290
7102c0df38  cbnz x0,0x7102c0df40
7102c0df3c  mov x0,xzr
7102c0df40  adrp x8,0x7105121000
7102c0df44  add x8,x8,#0x78
7102c0df48  mov w26,#0x130
7102c0df4c  stp x8,xzr,[x0]
7102c0df50  stp xzr,x28,[x0, #0x10]
7102c0df54  str x28,[x23]
7102c0df58  ldr x23,[sp, #0x80]
7102c0df5c  add x8,x23,x21, LSL #0x4
7102c0df60  ldr x20,[x8, #0x18]
7102c0df64  str x0,[x8, #0x18]
7102c0df68  cbz x20,0x7102c0df9c
7102c0df6c  add x8,x20,#0x8
7102c0df70  ldaxr x9,[x8]
7102c0df74  sub x10,x9,#0x1
7102c0df78  stlxr w11,x10,[x8]
7102c0df7c  cbnz w11,0x7102c0df70
7102c0df80  cbnz x9,0x7102c0df9c
7102c0df84  ldr x8,[x20]
7102c0df88  ldr x8,[x8, #0x10]
7102c0df8c  mov x0,x20
7102c0df90  blr x8
7102c0df94  mov x0,x20
7102c0df98  bl 0x71039c2670
7102c0df9c  add x0,sp,#0x128
7102c0dfa0  mov w1,w27
7102c0dfa4  bl 0x71029ebfb0
7102c0dfa8  mov w8,#0x1
7102c0dfac  strb w8,[x0]
7102c0dfb0  add x0,sp,#0xf0
7102c0dfb4  bl 0x71026825a0
7102c0dfb8  ldr x8,[sp, #0xf0]
7102c0dfbc  cbnz x8,0x7102c0d778
7102c0dfc0  ldr x0,[sp, #0x138]
7102c0dfc4  ldp x21,x25,[sp]
7102c0dfc8  ldr x24,[sp, #0x18]
7102c0dfcc  cbz x0,0x7102c0dfe0
7102c0dfd0  ldr x19,[x0]
7102c0dfd4  bl 0x710392eb40
7102c0dfd8  mov x0,x19
7102c0dfdc  cbnz x19,0x7102c0dfd0
7102c0dfe0  ldr x0,[sp, #0x128]
7102c0dfe4  str xzr,[sp, #0x128]
7102c0dfe8  cbz x0,0x7102c0dff0
7102c0dfec  bl 0x710392eb40
7102c0dff0  str x23,[x21]
7102c0dff4  ldr x20,[x25, #0x40]
7102c0dff8  str x21,[x25, #0x40]
7102c0dffc  cbz x20,0x7102c0e010
7102c0e000  mov x0,x20
7102c0e004  bl 0x7102c125a0
7102c0e008  mov x0,x20
7102c0e00c  bl 0x710392eb40
7102c0e010  ldr x8,[x24]
7102c0e014  cbz x8,0x7102c0e6fc
7102c0e018  ldr x8,[x8, #0xd8]
7102c0e01c  cbz x8,0x7102c0e6fc
7102c0e020  ldr x8,[x8, #0x8]
7102c0e024  ldr x0,[x8, #0x8]
7102c0e028  ldr x8,[x0]
7102c0e02c  ldr x8,[x8, #0x18]
7102c0e030  adrp x1,0x710428f000
7102c0e034  add x1,x1,#0x972
7102c0e038  blr x8
7102c0e03c  cmn w0,#0x1
7102c0e040  b.eq 0x7102c0e6fc
7102c0e044  ldr x19,[x24]
7102c0e048  cbz x19,0x7102c0e0bc
7102c0e04c  ldr x8,[x19, #0xd8]
7102c0e050  cbz x8,0x7102c0e0a0
7102c0e054  ldr x8,[x8, #0x8]
7102c0e058  mov w20,w0
7102c0e05c  ldr x0,[x8, #0x8]
7102c0e060  ldr x8,[x0]
7102c0e064  ldr x8,[x8, #0x10]
7102c0e068  blr x8
7102c0e06c  cmp w0,w20
7102c0e070  b.ls 0x7102c0e0a0
7102c0e074  ldr x8,[x19, #0xd8]
7102c0e078  ldr x8,[x8, #0x8]
7102c0e07c  ldr x0,[x8, #0x48]
7102c0e080  ldr x8,[x0]
7102c0e084  ldr x8,[x8, #0x38]
7102c0e088  mov w1,wzr
7102c0e08c  blr x8
7102c0e090  mov w8,w20
7102c0e094  add x8,x1,x8, LSL #0x6
7102c0e098  add x8,x8,#0x30
7102c0e09c  b 0x7102c0e0b4
7102c0e0a0  ldr x0,[x19, #0x90]
7102c0e0a4  ldr x8,[x0]
7102c0e0a8  ldr x8,[x8, #0x158]
7102c0e0ac  blr x8
7102c0e0b0  add x8,x0,#0x30
7102c0e0b4  ldr q1,[x8]
7102c0e0b8  b 0x7102c0e0c4
7102c0e0bc  adrp x8,0x710446a000
7102c0e0c0  ldr q1,[x8, #0x350]
7102c0e0c4  fmov s0,wzr
7102c0e0c8  mov w0,#0x10
7102c0e0cc  mov w1,#0x8
7102c0e0d0  str q1,[sp, #0x90]
7102c0e0d4  ext v1.16B,v1.16B,v1.16B,0x8
7102c0e0d8  mov v1.S[0x1],v0.S[0x0]
7102c0e0dc  str q1,[sp, #0x80]
7102c0e0e0  bl 0x710392e290
7102c0e0e4  mov x22,x0
7102c0e0e8  cbnz x0,0x7102c0e134
7102c0e0ec  adrp x8,0x7105332000
7102c0e0f0  ldr x0,[x8, #0xf00]
7102c0e0f4  cbz x0,0x7102c0e130
7102c0e0f8  mov w8,#0x8
7102c0e0fc  str wzr,[sp, #0xa0]
7102c0e100  add x1,sp,#0xa0
7102c0e104  str x8,[sp, #0x150]
7102c0e108  ldr x8,[x0]
7102c0e10c  ldr x8,[x8, #0x30]
7102c0e110  add x2,sp,#0x150
7102c0e114  blr x8
7102c0e118  tbz w0,#0x0,0x7102c0e130
7102c0e11c  mov w0,#0x10
7102c0e120  mov w1,#0x8
7102c0e124  bl 0x710392e290
7102c0e128  mov x22,x0
7102c0e12c  cbnz x0,0x7102c0e134
7102c0e130  mov x22,xzr
7102c0e134  ldp q1,q0,[sp, #0x80]
7102c0e138  mov v0.D[0x1],v1.D[0x0]
7102c0e13c  ldr x20,[x25]
7102c0e140  mov w1,#0xd0
7102c0e144  mov w0,#0x10
7102c0e148  str q0,[sp, #0x90]
7102c0e14c  bl 0x710392e290
7102c0e150  mov x23,x0
7102c0e154  cbnz x0,0x7102c0e1a0
7102c0e158  adrp x8,0x7105332000
7102c0e15c  ldr x0,[x8, #0xf00]
7102c0e160  cbz x0,0x7102c0e19c
7102c0e164  mov w8,#0xd0
7102c0e168  str wzr,[sp, #0xa0]
7102c0e16c  add x1,sp,#0xa0
7102c0e170  str x8,[sp, #0x150]
7102c0e174  ldr x8,[x0]
7102c0e178  ldr x8,[x8, #0x30]
7102c0e17c  add x2,sp,#0x150
7102c0e180  blr x8
7102c0e184  tbz w0,#0x0,0x7102c0e19c
7102c0e188  mov w1,#0xd0
7102c0e18c  mov w0,#0x10
7102c0e190  bl 0x710392e290
7102c0e194  mov x23,x0
7102c0e198  cbnz x0,0x7102c0e1a0
7102c0e19c  mov x23,xzr
7102c0e1a0  mov x8,x23
7102c0e1a4  str x20,[x23]
7102c0e1a8  mov w9,#0xffffffff
7102c0e1ac  str xzr,[x8, #0x8]!
7102c0e1b0  stp xzr,xzr,[x23, #0x20]
7102c0e1b4  fmov s7,0x3f800000
7102c0e1b8  stp xzr,xzr,[x23, #0x10]
7102c0e1bc  mov x19,#0x7e4b
7102c0e1c0  movk x19,#0x7168, LSL #16
7102c0e1c4  movk x19,#0xf, LSL #32
7102c0e1c8  str x23,[x23, #0x30]
7102c0e1cc  strb wzr,[x23, #0x90]
7102c0e1d0  stur xzr,[x23, #0x9c]
7102c0e1d4  stur xzr,[x23, #0x94]
7102c0e1d8  str w9,[x23, #0xa4]
7102c0e1dc  strb wzr,[x23, #0xa8]
7102c0e1e0  strh wzr,[x23, #0xb4]
7102c0e1e4  stur xzr,[x23, #0xac]
7102c0e1e8  strb wzr,[x23, #0xb8]
7102c0e1ec  str wzr,[x23, #0xbc]
7102c0e1f0  stp xzr,xzr,[x23, #0x38]
7102c0e1f4  ldr q1,[sp, #0x90]
7102c0e1f8  str xzr,[x23, #0xc0]
7102c0e1fc  stp xzr,xzr,[x23, #0x80]
7102c0e200  stp xzr,xzr,[x23, #0x70]
7102c0e204  stp q1,q1,[x23, #0x50]
7102c0e208  ldr q0,[sp, #0x40]
7102c0e20c  mov v1.S[0x3],v7.S[0x0]
7102c0e210  str q0,[sp, #0xa0]
7102c0e214  ldr q0,[sp, #0x30]
7102c0e218  str q0,[sp, #0xb0]
7102c0e21c  ldr q0,[sp, #0x20]
7102c0e220  stp q0,q1,[sp, #0xc0]
7102c0e224  ldr x9,[x20]
7102c0e228  ldr x20,[x9]
7102c0e22c  ldr x10,[x20, #0x310]
7102c0e230  ldp x9,x10,[x10, #0xd0]
7102c0e234  cmp x9,x10
7102c0e238  b.eq 0x7102c0e264
7102c0e23c  ldr w11,[x9, #0x8]
7102c0e240  cmp w11,#0x1
7102c0e244  b.hi 0x7102c0e258
7102c0e248  ldr x21,[x9]
7102c0e24c  ldr x11,[x21, #0x68]
7102c0e250  cmp x11,x19
7102c0e254  b.eq 0x7102c10100
7102c0e258  add x9,x9,#0x10
7102c0e25c  cmp x10,x9
7102c0e260  b.ne 0x7102c0e23c
7102c0e264  str xzr,[x8]
7102c0e268  ldr x9,[x20, #0x310]
7102c0e26c  ldp x8,x9,[x9, #0xd0]
7102c0e270  cmp x8,x9
7102c0e274  b.eq 0x7102c0e2ac
7102c0e278  mov x10,#0xe99a
7102c0e27c  movk x10,#0xf338, LSL #16
7102c0e280  movk x10,#0xf, LSL #32
7102c0e284  ldr w11,[x8, #0x8]
7102c0e288  cmp w11,#0x1
7102c0e28c  b.hi 0x7102c0e2a0
7102c0e290  ldr x21,[x8]
7102c0e294  ldr x11,[x21, #0x68]
7102c0e298  cmp x11,x10
7102c0e29c  b.eq 0x7102c10198
7102c0e2a0  add x8,x8,#0x10
7102c0e2a4  cmp x9,x8
7102c0e2a8  b.ne 0x7102c0e284
7102c0e2ac  str xzr,[x23, #0x10]
7102c0e2b0  ldr x9,[x20, #0x310]
7102c0e2b4  ldp x8,x9,[x9, #0xd0]
7102c0e2b8  cmp x8,x9
7102c0e2bc  b.eq 0x7102c0e2f4
7102c0e2c0  mov x10,#0xc079
7102c0e2c4  movk x10,#0x2ce8, LSL #16
7102c0e2c8  movk x10,#0xf, LSL #32
7102c0e2cc  ldr w11,[x8, #0x8]
7102c0e2d0  cmp w11,#0x1
7102c0e2d4  b.hi 0x7102c0e2e8
7102c0e2d8  ldr x21,[x8]
7102c0e2dc  ldr x11,[x21, #0x68]
7102c0e2e0  cmp x11,x10
7102c0e2e4  b.eq 0x7102c10230
7102c0e2e8  add x8,x8,#0x10
7102c0e2ec  cmp x9,x8
7102c0e2f0  b.ne 0x7102c0e2cc
7102c0e2f4  str xzr,[x23, #0x18]
7102c0e2f8  ldr x9,[x20, #0x310]
7102c0e2fc  ldp x8,x9,[x9, #0xd0]
7102c0e300  cmp x8,x9
7102c0e304  b.eq 0x7102c0e33c
7102c0e308  mov x10,#0x4435
7102c0e30c  movk x10,#0x9726, LSL #16
7102c0e310  movk x10,#0xe, LSL #32
7102c0e314  ldr w11,[x8, #0x8]
7102c0e318  cmp w11,#0x1
7102c0e31c  b.hi 0x7102c0e330
7102c0e320  ldr x21,[x8]
7102c0e324  ldr x11,[x21, #0x68]
7102c0e328  cmp x11,x10
7102c0e32c  b.eq 0x7102c102c8
7102c0e330  add x8,x8,#0x10
7102c0e334  cmp x9,x8
7102c0e338  b.ne 0x7102c0e314
7102c0e33c  str xzr,[x23, #0x20]
7102c0e340  ldr x8,[x20, #0x300]
7102c0e344  ldr x9,[x8, #0x18]
7102c0e348  ldp x8,x9,[x9]
7102c0e34c  cmp x8,x9
7102c0e350  b.eq 0x7102c0e560
7102c0e354  ldr x10,[x8], #0x8
7102c0e358  ldr x11,[x10, #0xa0]
7102c0e35c  and x11,x11,#0xffffffffff
7102c0e360  cmp x11,x19
7102c0e364  b.eq 0x7102c0e374
7102c0e368  cmp x9,x8
7102c0e36c  b.ne 0x7102c0e354
7102c0e370  b 0x7102c0e560
7102c0e374  ldr x9,[x10, #0x110]
7102c0e378  cbz x9,0x7102c0e560
7102c0e37c  ldp x8,x10,[x9]
7102c0e380  cmp x8,x10
7102c0e384  b.eq 0x7102c0e560
7102c0e388  str x9,[x23, #0x28]
7102c0e38c  ldp x8,x9,[x9]
7102c0e390  cmp x8,x9
7102c0e394  b.eq 0x7102c0e478
7102c0e398  ldr q0,[x23, #0x50]
7102c0e39c  movi d2,#0x0
7102c0e3a0  adrp x11,0x7104472000
7102c0e3a4  ldr s3,[x11, #0x970]
7102c0e3a8  mov w10,#0x1
7102c0e3ac  mov v1.16B,v0.16B
7102c0e3b0  mov v1.D[0x1],v2.D[0x0]
7102c0e3b4  fmov s4,0xbf800000
7102c0e3b8  dup s2,v0.S[0x1]
7102c0e3bc  ldr x11,[x8]
7102c0e3c0  ldr x13,[x11, #0x8]
7102c0e3c4  ldrb w14,[x13, #0xe7]
7102c0e3c8  ldrb w13,[x13, #0xe8]
7102c0e3cc  ldrb w12,[x11, #0x128]
7102c0e3d0  cmp w12,#0x0
7102c0e3d4  orr w13,w13,w14
7102c0e3d8  and w12,w13,#0xff
7102c0e3dc  ccmp w12,#0x0,#0x0,ne
7102c0e3e0  b.eq 0x7102c0e3ec
7102c0e3e4  strb w10,[x11, #0x129]
7102c0e3e8  b 0x7102c0e410
7102c0e3ec  ldr q5,[x11, #0x10]
7102c0e3f0  fabd s6,s5,s0
7102c0e3f4  fcmp s6,s3
7102c0e3f8  b.gt 0x7102c0e40c
7102c0e3fc  dup s5,v5.S[0x1]
7102c0e400  fabd s5,s5,s2
7102c0e404  fcmp s5,s3
7102c0e408  b.le 0x7102c0e414
7102c0e40c  strb w10,[x11, #0x12a]
7102c0e410  str q1,[x11, #0x10]
7102c0e414  ldr s5,[x11, #0x30]
7102c0e418  fabs s5,s5
7102c0e41c  fcmp s5,s3
7102c0e420  b.mi 0x7102c0e42c
7102c0e424  str wzr,[x11, #0x30]
7102c0e428  strb w10,[x11, #0x129]
7102c0e42c  ldr q5,[x11, #0x50]
7102c0e430  fadd s6,s5,s4
7102c0e434  fabs s6,s6
7102c0e438  fcmp s6,s3
7102c0e43c  b.mi 0x7102c0e44c
7102c0e440  mov v5.S[0x0],v7.S[0x0]
7102c0e444  strb w10,[x11, #0x129]
7102c0e448  str q5,[x11, #0x50]
7102c0e44c  dup s6,v5.S[0x1]
7102c0e450  fadd s6,s6,s4
7102c0e454  fabs s6,s6
7102c0e458  fcmp s6,s3
7102c0e45c  b.mi 0x7102c0e46c
7102c0e460  mov v5.S[0x1],v7.S[0x0]
7102c0e464  strb w10,[x11, #0x129]
7102c0e468  str q5,[x11, #0x50]
7102c0e46c  add x8,x8,#0x8
7102c0e470  cmp x9,x8
7102c0e474  b.ne 0x7102c0e3bc
7102c0e478  ldr x8,[x23]
7102c0e47c  ldr x8,[x8]
7102c0e480  ldr x8,[x8]
7102c0e484  ldrb w0,[x8, #0x18]
7102c0e488  bl 0x7102c12990
7102c0e48c  tbz w0,#0x0,0x7102c0e560
7102c0e490  ldr x8,[x23, #0x28]
7102c0e494  ldp x19,x20,[x8]
7102c0e498  cmp x19,x20
7102c0e49c  b.eq 0x7102c0e560
7102c0e4a0  adrp x21,0x710507f000
7102c0e4a4  add x21,x21,#0x650
7102c0e4a8  orr w26,wzr,#0x10001
7102c0e4ac  adrp x27,0x7102c16000
7102c0e4b0  add x27,x27,#0xd30
7102c0e4b4  ldr x28,[x19]
7102c0e4b8  ldr x8,[x28, #0x60]
7102c0e4bc  cbz x8,0x7102c0e4f0
7102c0e4c0  ldrh w9,[x8, #0x8]
7102c0e4c4  sub w9,w9,#0x1
7102c0e4c8  sxth w10,w9
7102c0e4cc  cmp w10,#0x0
7102c0e4d0  strh w9,[x8, #0x8]
7102c0e4d4  b.gt 0x7102c0e4ec
7102c0e4d8  ldr x0,[x28, #0x60]
7102c0e4dc  cbz x0,0x7102c0e4ec
7102c0e4e0  ldr x8,[x0]
7102c0e4e4  ldr x8,[x8, #0x8]
7102c0e4e8  blr x8
7102c0e4ec  str xzr,[x28, #0x60]
7102c0e4f0  mov w0,#0x10
7102c0e4f4  mov w1,#0x20
7102c0e4f8  bl 0x710392e290
7102c0e4fc  cbnz x0,0x7102c0e544
7102c0e500  adrp x8,0x7105332000
7102c0e504  ldr x0,[x8, #0xf00]
7102c0e508  cbz x0,0x7102c0e540
7102c0e50c  mov w8,#0x20
7102c0e510  stur wzr,[x29, #-0xb0]
7102c0e514  sub x1,x29,#0xb0
7102c0e518  str x8,[sp, #0x150]
7102c0e51c  ldr x8,[x0]
7102c0e520  ldr x8,[x8, #0x30]
7102c0e524  add x2,sp,#0x150
7102c0e528  blr x8
7102c0e52c  tbz w0,#0x0,0x7102c0e540
7102c0e530  mov w0,#0x10
7102c0e534  mov w1,#0x20
7102c0e538  bl 0x710392e290
7102c0e53c  cbnz x0,0x7102c0e544
7102c0e540  mov x0,xzr
7102c0e544  add x19,x19,#0x8
7102c0e548  cmp x20,x19
7102c0e54c  str w26,[x0, #0x8]
7102c0e550  str x21,[x0]
7102c0e554  stp x23,x27,[x0, #0x10]
7102c0e558  str x0,[x28, #0x60]
7102c0e55c  b.ne 0x7102c0e4b4
7102c0e560  str xzr,[sp, #0x150]
7102c0e564  ldr x8,[x23]
7102c0e568  ldr x8,[x8]
7102c0e56c  ldr x8,[x8]
7102c0e570  ldr x8,[x8, #0x338]
7102c0e574  ldr x8,[x8]
7102c0e578  ldr x0,[x8, #0x8]
7102c0e57c  cbz x0,0x7102c0e590
7102c0e580  add x1,sp,#0x150
7102c0e584  mov w2,wzr
7102c0e588  bl 0x7102405040
7102c0e58c  b 0x7102c0e594
7102c0e590  mov w0,#0xffffffff
7102c0e594  str w0,[x23, #0xa4]
7102c0e598  mov x0,x23
7102c0e59c  bl 0x7102c167c0
7102c0e5a0  ldr x8,[x23, #0x8]
7102c0e5a4  cbz x8,0x7102c0e5e0
7102c0e5a8  ldrb w9,[x8, #0xe0]
7102c0e5ac  cbz w9,0x7102c0e5c0
7102c0e5b0  ldr x9,[x8, #0xc8]
7102c0e5b4  cbz x9,0x7102c0e5c0
7102c0e5b8  mov w10,#0x101
7102c0e5bc  strh w10,[x9, #0x30]
7102c0e5c0  ldr x9,[x8, #0xd8]
7102c0e5c4  cbz x9,0x7102c0e5d0
7102c0e5c8  mov w10,#0x1
7102c0e5cc  strb w10,[x9, #0x21]
7102c0e5d0  ldrb w9,[x8, #0xe0]
7102c0e5d4  cbz w9,0x7102c0e5e0
7102c0e5d8  ldr x8,[x8, #0xb0]
7102c0e5dc  strb wzr,[x8, #0x10]
7102c0e5e0  ldr x8,[x23, #0x10]
7102c0e5e4  cbz x8,0x7102c0e620
7102c0e5e8  ldrb w9,[x8, #0xe0]
7102c0e5ec  cbz w9,0x7102c0e600
7102c0e5f0  ldr x9,[x8, #0xc8]
7102c0e5f4  cbz x9,0x7102c0e600
7102c0e5f8  mov w10,#0x101
7102c0e5fc  strh w10,[x9, #0x30]
7102c0e600  ldr x9,[x8, #0xd8]
7102c0e604  cbz x9,0x7102c0e610
7102c0e608  mov w10,#0x1
7102c0e60c  strb w10,[x9, #0x21]
7102c0e610  ldrb w9,[x8, #0xe0]
7102c0e614  cbz w9,0x7102c0e620
7102c0e618  ldr x8,[x8, #0xb0]
7102c0e61c  strb wzr,[x8, #0x10]
7102c0e620  ldr x8,[x23, #0x18]
7102c0e624  cbz x8,0x7102c0e660
7102c0e628  ldrb w9,[x8, #0xe0]
7102c0e62c  cbz w9,0x7102c0e640
7102c0e630  ldr x9,[x8, #0xc8]
7102c0e634  cbz x9,0x7102c0e640
7102c0e638  mov w10,#0x101
7102c0e63c  strh w10,[x9, #0x30]
7102c0e640  ldr x9,[x8, #0xd8]
7102c0e644  cbz x9,0x7102c0e650
7102c0e648  mov w10,#0x1
7102c0e64c  strb w10,[x9, #0x21]
7102c0e650  ldrb w9,[x8, #0xe0]
7102c0e654  cbz w9,0x7102c0e660
7102c0e658  ldr x8,[x8, #0xb0]
7102c0e65c  strb wzr,[x8, #0x10]
7102c0e660  ldr x8,[x23, #0x20]
7102c0e664  cbz x8,0x7102c0e6a0
7102c0e668  ldrb w9,[x8, #0xe0]
7102c0e66c  cbz w9,0x7102c0e680
7102c0e670  ldr x9,[x8, #0xc8]
7102c0e674  cbz x9,0x7102c0e680
7102c0e678  mov w10,#0x101
7102c0e67c  strh w10,[x9, #0x30]
7102c0e680  ldr x9,[x8, #0xd8]
7102c0e684  cbz x9,0x7102c0e690
7102c0e688  mov w10,#0x1
7102c0e68c  strb w10,[x9, #0x21]
7102c0e690  ldrb w9,[x8, #0xe0]
7102c0e694  cbz w9,0x7102c0e6a0
7102c0e698  ldr x8,[x8, #0xb0]
7102c0e69c  strb wzr,[x8, #0x10]
7102c0e6a0  ldr x8,[x23]
7102c0e6a4  ldr x8,[x8]
7102c0e6a8  ldr x8,[x8, #0x8]
7102c0e6ac  ldr w9,[x8, #0x20]
7102c0e6b0  str w9,[x23, #0xbc]
7102c0e6b4  ldr s0,[x8, #0x24]
7102c0e6b8  fmov s1,w9
7102c0e6bc  adrp x8,0x7102c16000
7102c0e6c0  add x8,x8,#0x8d0
7102c0e6c4  stp x8,xzr,[x23, #0x38]
7102c0e6c8  str s0,[x23, #0xc0]
7102c0e6cc  fsub s0,s0,s1
7102c0e6d0  str s0,[x23, #0xc4]
7102c0e6d4  str x23,[x22]
7102c0e6d8  ldr x20,[x25, #0x38]
7102c0e6dc  str x22,[x25, #0x38]
7102c0e6e0  cbz x20,0x7102c0e6fc
7102c0e6e4  ldr x0,[x20]
7102c0e6e8  str xzr,[x20]
7102c0e6ec  cbz x0,0x7102c0e6f4
7102c0e6f0  bl 0x710392eb40
7102c0e6f4  mov x0,x20
7102c0e6f8  bl 0x710392eb40
7102c0e6fc  ldr x8,[x25]
7102c0e700  ldr x8,[x8]
7102c0e704  ldr x8,[x8]
7102c0e708  ldr x8,[x8, #0x300]
7102c0e70c  ldr x9,[x8, #0x18]
7102c0e710  ldp x8,x9,[x9]
7102c0e714  cmp x8,x9
7102c0e718  b.eq 0x7102c0e760
7102c0e71c  mov x10,#0x915e
7102c0e720  movk x10,#0x37ca, LSL #16
7102c0e724  movk x10,#0xa, LSL #32
7102c0e728  ldr x11,[x8], #0x8
7102c0e72c  ldr x12,[x11, #0xa0]
7102c0e730  and x12,x12,#0xffffffffff
7102c0e734  cmp x12,x10
7102c0e738  b.eq 0x7102c0e748
7102c0e73c  cmp x9,x8
7102c0e740  b.ne 0x7102c0e728
7102c0e744  b 0x7102c0e760
7102c0e748  ldr x8,[x11, #0x110]
7102c0e74c  cbz x8,0x7102c0e760
7102c0e750  ldp x9,x10,[x8]
7102c0e754  cmp x9,x10
7102c0e758  b.eq 0x7102c0e760
7102c0e75c  str x8,[x25, #0x18]
7102c0e760  ldr x8,[x24]
7102c0e764  cbz x8,0x7102c0e790
7102c0e768  ldrb w9,[x8, #0xe0]
7102c0e76c  cbz w9,0x7102c0e790
7102c0e770  ldr x0,[x8, #0x90]
7102c0e774  ldr x8,[x0]
7102c0e778  ldr x8,[x8, #0x180]
7102c0e77c  mov x1,#0xeed7
7102c0e780  movk x1,#0x7953, LSL #16
7102c0e784  movk x1,#0x7, LSL #32
7102c0e788  mov w2,wzr
7102c0e78c  blr x8
7102c0e790  ldr x8,[x25, #0x18]
7102c0e794  ldp x0,x1,[x8]
7102c0e798  mov w2,#0x1
7102c0e79c  bl 0x71025f4d80
7102c0e7a0  ldr x8,[x25, #0x8]
7102c0e7a4  cbz x8,0x7102c0e7d0
7102c0e7a8  ldr x8,[x8, #0xd8]
7102c0e7ac  cbz x8,0x7102c0e7d0
7102c0e7b0  ldr x8,[x8, #0x8]
7102c0e7b4  ldr x0,[x8, #0x8]
7102c0e7b8  ldr x8,[x0]
7102c0e7bc  ldr x8,[x8, #0x18]
7102c0e7c0  adrp x1,0x71043de000
7102c0e7c4  add x1,x1,#0x298
7102c0e7c8  blr x8
7102c0e7cc  b 0x7102c0e7d4
7102c0e7d0  mov w0,#0xffffffff
7102c0e7d4  ldr x8,[x25]
7102c0e7d8  str w0,[x25, #0x28]
7102c0e7dc  ldr x8,[x8]
7102c0e7e0  ldr x8,[x8]
7102c0e7e4  ldr x8,[x8, #0x300]
7102c0e7e8  ldr x9,[x8, #0x18]
7102c0e7ec  ldp x8,x9,[x9]
7102c0e7f0  cmp x8,x9
7102c0e7f4  b.eq 0x7102c0e83c
7102c0e7f8  mov x10,#0x2ca8
7102c0e7fc  movk x10,#0x76, LSL #16
7102c0e800  movk x10,#0xb, LSL #32
7102c0e804  ldr x11,[x8], #0x8
7102c0e808  ldr x12,[x11, #0xa0]
7102c0e80c  and x12,x12,#0xffffffffff
7102c0e810  cmp x12,x10
7102c0e814  b.eq 0x7102c0e824
7102c0e818  cmp x9,x8
7102c0e81c  b.ne 0x7102c0e804
7102c0e820  b 0x7102c0e83c
7102c0e824  ldr x8,[x11, #0x110]
7102c0e828  cbz x8,0x7102c0e83c
7102c0e82c  ldp x9,x10,[x8]
7102c0e830  cmp x9,x10
7102c0e834  b.eq 0x7102c0e83c
7102c0e838  str x8,[x25, #0x20]
7102c0e83c  ldr x8,[x25, #0x20]
7102c0e840  ldp x0,x1,[x8]
7102c0e844  mov w2,#0x1
7102c0e848  bl 0x71025f4d80
7102c0e84c  mov w0,#0x10
7102c0e850  mov w1,#0x8
7102c0e854  bl 0x710392e290
7102c0e858  mov x20,x0
7102c0e85c  cbnz x0,0x7102c0e8a8
7102c0e860  adrp x8,0x7105332000
7102c0e864  ldr x0,[x8, #0xf00]
7102c0e868  cbz x0,0x7102c0e8a4
7102c0e86c  mov w8,#0x8
7102c0e870  str wzr,[sp, #0xa0]
7102c0e874  add x1,sp,#0xa0
7102c0e878  str x8,[sp, #0x150]
7102c0e87c  ldr x8,[x0]
7102c0e880  ldr x8,[x8, #0x30]
7102c0e884  add x2,sp,#0x150
7102c0e888  blr x8
7102c0e88c  tbz w0,#0x0,0x7102c0e8a4
7102c0e890  mov w0,#0x10
7102c0e894  mov w1,#0x8
7102c0e898  bl 0x710392e290
7102c0e89c  mov x20,x0
7102c0e8a0  cbnz x0,0x7102c0e8a8
7102c0e8a4  mov x20,xzr
7102c0e8a8  ldr x19,[x25]
7102c0e8ac  mov w0,#0x10
7102c0e8b0  mov w1,#0x10
7102c0e8b4  bl 0x710392e290
7102c0e8b8  cbnz x0,0x7102c0e900
7102c0e8bc  adrp x8,0x7105332000
7102c0e8c0  ldr x0,[x8, #0xf00]
7102c0e8c4  cbz x0,0x7102c0e8fc
7102c0e8c8  mov w8,#0x10
7102c0e8cc  str wzr,[sp, #0xa0]
7102c0e8d0  add x1,sp,#0xa0
7102c0e8d4  str x8,[sp, #0x150]
7102c0e8d8  ldr x8,[x0]
7102c0e8dc  ldr x8,[x8, #0x30]
7102c0e8e0  add x2,sp,#0x150
7102c0e8e4  blr x8
7102c0e8e8  tbz w0,#0x0,0x7102c0e8fc
7102c0e8ec  mov w0,#0x10
7102c0e8f0  mov w1,#0x10
7102c0e8f4  bl 0x710392e290
7102c0e8f8  cbnz x0,0x7102c0e900
7102c0e8fc  mov x0,xzr
7102c0e900  str x19,[x0]
7102c0e904  strb wzr,[x0, #0x8]
7102c0e908  ldr x19,[sp, #0x58]
7102c0e90c  str x0,[x20]
7102c0e910  ldr x22,[x25, #0x48]
7102c0e914  str x20,[x25, #0x48]
7102c0e918  cbz x22,0x7102c0e934
7102c0e91c  ldr x0,[x22]
7102c0e920  str xzr,[x22]
7102c0e924  cbz x0,0x7102c0e92c
7102c0e928  bl 0x710392eb40
7102c0e92c  mov x0,x22
7102c0e930  bl 0x710392eb40
7102c0e934  ldr x8,[x25]
7102c0e938  ldr x9,[x8]
7102c0e93c  ldr x9,[x9]
7102c0e940  ldr x10,[x9, #0x310]
7102c0e944  ldp x9,x10,[x10, #0xd0]
7102c0e948  cmp x9,x10
7102c0e94c  b.eq 0x7102c0e98c
7102c0e950  ldr x21,[sp, #0x10]
7102c0e954  mov x11,#0x123c
7102c0e958  movk x11,#0xfa0d, LSL #16
7102c0e95c  movk x11,#0x9, LSL #32
7102c0e960  ldr w12,[x9, #0x8]
7102c0e964  cmp w12,#0x1
7102c0e968  b.hi 0x7102c0e97c
7102c0e96c  ldr x12,[x9]
7102c0e970  ldr x13,[x12, #0x68]
7102c0e974  cmp x13,x11
7102c0e978  b.eq 0x7102c0e994
7102c0e97c  add x9,x9,#0x10
7102c0e980  cmp x10,x9
7102c0e984  b.ne 0x7102c0e960
7102c0e988  b 0x7102c0e990
7102c0e98c  ldr x21,[sp, #0x10]
7102c0e990  mov x12,xzr
7102c0e994  ldr x9,[x25, #0x8]
7102c0e998  str x12,[x25, #0x10]
7102c0e99c  cbz x9,0x7102c0ea70
7102c0e9a0  ldr x8,[x8]
7102c0e9a4  ldr x8,[x8]
7102c0e9a8  ldrb w0,[x8, #0x18]
7102c0e9ac  bl 0x7102c12990
7102c0e9b0  ldr x8,[x24]
7102c0e9b4  adrp x9,0x71043cd000
7102c0e9b8  add x9,x9,#0x724
7102c0e9bc  adrp x10,0x71043ee000
7102c0e9c0  add x10,x10,#0xc8a
7102c0e9c4  tst w0,#0x1
7102c0e9c8  csel x20,x10,x9,ne
7102c0e9cc  cbz x8,0x7102c0e9e8
7102c0e9d0  add x0,x8,#0x60
7102c0e9d4  mov x1,x20
7102c0e9d8  mov w2,wzr
7102c0e9dc  bl 0x71025ee080
7102c0e9e0  ldr x0,[x24]
7102c0e9e4  b 0x7102c0e9ec
7102c0e9e8  mov x0,xzr
7102c0e9ec  mov x1,x20
7102c0e9f0  bl 0x7102610070
7102c0e9f4  ldr x0,[x24]
7102c0e9f8  fmov s0,wzr
7102c0e9fc  mov w1,#0x1
7102c0ea00  bl 0x710260fdd0
7102c0ea04  ldr x8,[x24]
7102c0ea08  cbz x8,0x7102c0ea70
7102c0ea0c  ldrb w9,[x8, #0xe0]
7102c0ea10  cbz w9,0x7102c0ea24
7102c0ea14  ldr x9,[x8, #0xc8]
7102c0ea18  cbz x9,0x7102c0ea24
7102c0ea1c  mov w10,#0x101
7102c0ea20  strh w10,[x9, #0x32]
7102c0ea24  ldr x8,[x8, #0xd8]
7102c0ea28  cbz x8,0x7102c0ea34
7102c0ea2c  mov w9,#0x1
7102c0ea30  strb w9,[x8, #0x22]
7102c0ea34  ldr x8,[x24]
7102c0ea38  cbz x8,0x7102c0ea70
7102c0ea3c  ldrb w9,[x8, #0xe0]
7102c0ea40  cbz w9,0x7102c0ea50
7102c0ea44  ldr x9,[x8, #0xc8]
7102c0ea48  cbz x9,0x7102c0ea50
7102c0ea4c  strh wzr,[x9, #0x30]
7102c0ea50  ldr x9,[x8, #0xd8]
7102c0ea54  cbz x9,0x7102c0ea5c
7102c0ea58  strb wzr,[x9, #0x21]
7102c0ea5c  ldrb w9,[x8, #0xe0]
7102c0ea60  cbz w9,0x7102c0ea70
7102c0ea64  ldr x8,[x8, #0xb0]
7102c0ea68  mov w9,#0x1
7102c0ea6c  strb w9,[x8, #0x10]
7102c0ea70  str x25,[x21]
7102c0ea74  ldr x20,[x19, #0x1c0]
7102c0ea78  str x21,[x19, #0x1c0]
7102c0ea7c  cbz x20,0x7102c0ea90
7102c0ea80  mov x0,x20
7102c0ea84  bl 0x7102c139f0
7102c0ea88  mov x0,x20
7102c0ea8c  bl 0x710392eb40
7102c0ea90  ldr x21,[x19, #0x1a8]
7102c0ea94  mov w0,#0x10
7102c0ea98  mov w1,#0x8
7102c0ea9c  bl 0x710392e290
7102c0eaa0  mov x20,x0
7102c0eaa4  cbnz x0,0x7102c0eaf0
7102c0eaa8  adrp x8,0x7105332000
7102c0eaac  ldr x0,[x8, #0xf00]
7102c0eab0  cbz x0,0x7102c0eaec
7102c0eab4  mov w8,#0x8
7102c0eab8  str wzr,[sp, #0xa0]
7102c0eabc  add x1,sp,#0xa0
7102c0eac0  str x8,[sp, #0x150]
7102c0eac4  ldr x8,[x0]
7102c0eac8  ldr x8,[x8, #0x30]
7102c0eacc  add x2,sp,#0x150
7102c0ead0  blr x8
7102c0ead4  tbz w0,#0x0,0x7102c0eaec
7102c0ead8  mov w0,#0x10
7102c0eadc  mov w1,#0x8
7102c0eae0  bl 0x710392e290
7102c0eae4  mov x20,x0
7102c0eae8  cbnz x0,0x7102c0eaf0
7102c0eaec  mov x20,xzr
7102c0eaf0  mov w0,#0x10
7102c0eaf4  mov w1,#0x40
7102c0eaf8  bl 0x710392e290
7102c0eafc  mov x22,x0
7102c0eb00  cbnz x0,0x7102c0eb4c
7102c0eb04  adrp x8,0x7105332000
7102c0eb08  ldr x0,[x8, #0xf00]
7102c0eb0c  cbz x0,0x7102c0eb48
7102c0eb10  mov w8,#0x40
7102c0eb14  str wzr,[sp, #0xa0]
7102c0eb18  add x1,sp,#0xa0
7102c0eb1c  str x8,[sp, #0x150]
7102c0eb20  ldr x8,[x0]
7102c0eb24  ldr x8,[x8, #0x30]
7102c0eb28  add x2,sp,#0x150
7102c0eb2c  blr x8
7102c0eb30  tbz w0,#0x0,0x7102c0eb48
7102c0eb34  mov w0,#0x10
7102c0eb38  mov w1,#0x40
7102c0eb3c  bl 0x710392e290
7102c0eb40  mov x22,x0
7102c0eb44  cbnz x0,0x7102c0eb4c
7102c0eb48  mov x22,xzr
7102c0eb4c  mov w0,#0x10
7102c0eb50  mov w1,#0x8
7102c0eb54  strb wzr,[x22, #0x38]
7102c0eb58  stp xzr,xzr,[x22, #0x28]
7102c0eb5c  str x21,[x22]
7102c0eb60  stp xzr,xzr,[x22, #0x18]
7102c0eb64  stp xzr,xzr,[x22, #0x8]
7102c0eb68  bl 0x710392e290
7102c0eb6c  mov x23,x0
7102c0eb70  cbnz x0,0x7102c0ebbc
7102c0eb74  adrp x8,0x7105332000
7102c0eb78  ldr x0,[x8, #0xf00]
7102c0eb7c  cbz x0,0x7102c0ebb8
7102c0eb80  mov w8,#0x8
7102c0eb84  str wzr,[sp, #0xa0]
7102c0eb88  add x1,sp,#0xa0
7102c0eb8c  str x8,[sp, #0x150]
7102c0eb90  ldr x8,[x0]
7102c0eb94  ldr x8,[x8, #0x30]
7102c0eb98  add x2,sp,#0x150
7102c0eb9c  blr x8
7102c0eba0  tbz w0,#0x0,0x7102c0ebb8
7102c0eba4  mov w0,#0x10
7102c0eba8  mov w1,#0x8
7102c0ebac  bl 0x710392e290
7102c0ebb0  mov x23,x0
7102c0ebb4  cbnz x0,0x7102c0ebbc
7102c0ebb8  mov x23,xzr
7102c0ebbc  mov x0,x23
7102c0ebc0  mov x1,x21
7102c0ebc4  mov w2,wzr
7102c0ebc8  bl 0x7102c10570
7102c0ebcc  mov w0,#0x10
7102c0ebd0  mov w1,#0x20
7102c0ebd4  bl 0x710392e290
7102c0ebd8  cbnz x0,0x7102c0ec20
7102c0ebdc  adrp x8,0x7105332000
7102c0ebe0  ldr x0,[x8, #0xf00]
7102c0ebe4  cbz x0,0x7102c0ec1c
7102c0ebe8  mov w8,#0x20
7102c0ebec  str wzr,[sp, #0xa0]
7102c0ebf0  add x1,sp,#0xa0
7102c0ebf4  str x8,[sp, #0x150]
7102c0ebf8  ldr x8,[x0]
7102c0ebfc  ldr x8,[x8, #0x30]
7102c0ec00  add x2,sp,#0x150
7102c0ec04  blr x8
7102c0ec08  tbz w0,#0x0,0x7102c0ec1c
7102c0ec0c  mov w0,#0x10
7102c0ec10  mov w1,#0x20
7102c0ec14  bl 0x710392e290
7102c0ec18  cbnz x0,0x7102c0ec20
7102c0ec1c  mov x0,xzr
7102c0ec20  adrp x19,0x7105121000
7102c0ec24  add x19,x19,#0x40
7102c0ec28  stp x19,xzr,[x0]
7102c0ec2c  stp xzr,x23,[x0, #0x10]
7102c0ec30  str x23,[x22, #0x8]
7102c0ec34  ldr x23,[x22, #0x10]
7102c0ec38  str x0,[x22, #0x10]
7102c0ec3c  cbz x23,0x7102c0ec70
7102c0ec40  add x8,x23,#0x8
7102c0ec44  ldaxr x9,[x8]
7102c0ec48  sub x10,x9,#0x1
7102c0ec4c  stlxr w11,x10,[x8]
7102c0ec50  cbnz w11,0x7102c0ec44
7102c0ec54  cbnz x9,0x7102c0ec70
7102c0ec58  ldr x8,[x23]
7102c0ec5c  ldr x8,[x8, #0x10]
7102c0ec60  mov x0,x23
7102c0ec64  blr x8
7102c0ec68  mov x0,x23
7102c0ec6c  bl 0x71039c2670
7102c0ec70  mov w0,#0x10
7102c0ec74  mov w1,#0x8
7102c0ec78  bl 0x710392e290
7102c0ec7c  mov x23,x0
7102c0ec80  cbnz x0,0x7102c0eccc
7102c0ec84  adrp x8,0x7105332000
7102c0ec88  ldr x0,[x8, #0xf00]
7102c0ec8c  cbz x0,0x7102c0ecc8
7102c0ec90  mov w8,#0x8
7102c0ec94  str wzr,[sp, #0xa0]
7102c0ec98  add x1,sp,#0xa0
7102c0ec9c  str x8,[sp, #0x150]
7102c0eca0  ldr x8,[x0]
7102c0eca4  ldr x8,[x8, #0x30]
7102c0eca8  add x2,sp,#0x150
7102c0ecac  blr x8
7102c0ecb0  tbz w0,#0x0,0x7102c0ecc8
7102c0ecb4  mov w0,#0x10
7102c0ecb8  mov w1,#0x8
7102c0ecbc  bl 0x710392e290
7102c0ecc0  mov x23,x0
7102c0ecc4  cbnz x0,0x7102c0eccc
7102c0ecc8  mov x23,xzr
7102c0eccc  mov w2,#0x1
7102c0ecd0  mov x0,x23
7102c0ecd4  mov x1,x21
7102c0ecd8  bl 0x7102c10570
7102c0ecdc  mov w0,#0x10
7102c0ece0  mov w1,#0x20
7102c0ece4  bl 0x710392e290
7102c0ece8  cbnz x0,0x7102c0ed30
7102c0ecec  adrp x8,0x7105332000
7102c0ecf0  ldr x0,[x8, #0xf00]
7102c0ecf4  cbz x0,0x7102c0ed2c
7102c0ecf8  mov w8,#0x20
7102c0ecfc  str wzr,[sp, #0xa0]
7102c0ed00  add x1,sp,#0xa0
7102c0ed04  str x8,[sp, #0x150]
7102c0ed08  ldr x8,[x0]
7102c0ed0c  ldr x8,[x8, #0x30]
7102c0ed10  add x2,sp,#0x150
7102c0ed14  blr x8
7102c0ed18  tbz w0,#0x0,0x7102c0ed2c
7102c0ed1c  mov w0,#0x10
7102c0ed20  mov w1,#0x20
7102c0ed24  bl 0x710392e290
7102c0ed28  cbnz x0,0x7102c0ed30
7102c0ed2c  mov x0,xzr
7102c0ed30  stp x19,xzr,[x0]
7102c0ed34  stp xzr,x23,[x0, #0x10]
7102c0ed38  str x23,[x22, #0x18]
7102c0ed3c  ldr x23,[x22, #0x20]
7102c0ed40  str x0,[x22, #0x20]
7102c0ed44  cbz x23,0x7102c0ed78
7102c0ed48  add x8,x23,#0x8
7102c0ed4c  ldaxr x9,[x8]
7102c0ed50  sub x10,x9,#0x1
7102c0ed54  stlxr w11,x10,[x8]
7102c0ed58  cbnz w11,0x7102c0ed4c
7102c0ed5c  cbnz x9,0x7102c0ed78
7102c0ed60  ldr x8,[x23]
7102c0ed64  ldr x8,[x8, #0x10]
7102c0ed68  mov x0,x23
7102c0ed6c  blr x8
7102c0ed70  mov x0,x23
7102c0ed74  bl 0x71039c2670
7102c0ed78  mov w0,#0x10
7102c0ed7c  mov w1,#0x8
7102c0ed80  bl 0x710392e290
7102c0ed84  mov x23,x0
7102c0ed88  cbnz x0,0x7102c0edd4
7102c0ed8c  adrp x8,0x7105332000
7102c0ed90  ldr x0,[x8, #0xf00]
7102c0ed94  cbz x0,0x7102c0edd0
7102c0ed98  mov w8,#0x8
7102c0ed9c  str wzr,[sp, #0xa0]
7102c0eda0  add x1,sp,#0xa0
7102c0eda4  str x8,[sp, #0x150]
7102c0eda8  ldr x8,[x0]
7102c0edac  ldr x8,[x8, #0x30]
7102c0edb0  add x2,sp,#0x150
7102c0edb4  blr x8
7102c0edb8  tbz w0,#0x0,0x7102c0edd0
7102c0edbc  mov w0,#0x10
7102c0edc0  mov w1,#0x8
7102c0edc4  bl 0x710392e290
7102c0edc8  mov x23,x0
7102c0edcc  cbnz x0,0x7102c0edd4
7102c0edd0  mov x23,xzr
7102c0edd4  mov w2,#0x2
7102c0edd8  mov x0,x23
7102c0eddc  mov x1,x21
7102c0ede0  bl 0x7102c10570
7102c0ede4  mov w0,#0x10
7102c0ede8  mov w1,#0x20
7102c0edec  bl 0x710392e290
7102c0edf0  cbnz x0,0x7102c0ee38
7102c0edf4  adrp x8,0x7105332000
7102c0edf8  ldr x0,[x8, #0xf00]
7102c0edfc  cbz x0,0x7102c0ee34
7102c0ee00  mov w8,#0x20
7102c0ee04  str wzr,[sp, #0xa0]
7102c0ee08  add x1,sp,#0xa0
7102c0ee0c  str x8,[sp, #0x150]
7102c0ee10  ldr x8,[x0]
7102c0ee14  ldr x8,[x8, #0x30]
7102c0ee18  add x2,sp,#0x150
7102c0ee1c  blr x8
7102c0ee20  tbz w0,#0x0,0x7102c0ee34
7102c0ee24  mov w0,#0x10
7102c0ee28  mov w1,#0x20
7102c0ee2c  bl 0x710392e290
7102c0ee30  cbnz x0,0x7102c0ee38
7102c0ee34  mov x0,xzr
7102c0ee38  stp x19,xzr,[x0]
7102c0ee3c  stp xzr,x23,[x0, #0x10]
7102c0ee40  ldr x21,[x22, #0x30]
7102c0ee44  stp x23,x0,[x22, #0x28]
7102c0ee48  ldr x19,[sp, #0x58]
7102c0ee4c  cbz x21,0x7102c0ee80
7102c0ee50  add x8,x21,#0x8
7102c0ee54  ldaxr x9,[x8]
7102c0ee58  sub x10,x9,#0x1
7102c0ee5c  stlxr w11,x10,[x8]
7102c0ee60  cbnz w11,0x7102c0ee54
7102c0ee64  cbnz x9,0x7102c0ee80
7102c0ee68  ldr x8,[x21]
7102c0ee6c  ldr x8,[x8, #0x10]
7102c0ee70  mov x0,x21
7102c0ee74  blr x8
7102c0ee78  mov x0,x21
7102c0ee7c  bl 0x71039c2670
7102c0ee80  str x22,[x20]
7102c0ee84  ldr x21,[x19, #0x1c8]
7102c0ee88  str x20,[x19, #0x1c8]
7102c0ee8c  cbz x21,0x7102c0eea0
7102c0ee90  mov x0,x21
7102c0ee94  bl 0x7102c11940
7102c0ee98  mov x0,x21
7102c0ee9c  bl 0x710392eb40
7102c0eea0  ldr x19,[x19, #0x1a8]
7102c0eea4  mov w0,#0x10
7102c0eea8  mov w1,#0x8
7102c0eeac  bl 0x710392e290
7102c0eeb0  mov x20,x0
7102c0eeb4  cbnz x0,0x7102c0ef00
7102c0eeb8  adrp x8,0x7105332000
7102c0eebc  ldr x0,[x8, #0xf00]
7102c0eec0  cbz x0,0x7102c0eefc
7102c0eec4  mov w8,#0x8
7102c0eec8  str wzr,[sp, #0xa0]
7102c0eecc  add x1,sp,#0xa0
7102c0eed0  str x8,[sp, #0x150]
7102c0eed4  ldr x8,[x0]
7102c0eed8  ldr x8,[x8, #0x30]
7102c0eedc  add x2,sp,#0x150
7102c0eee0  blr x8
7102c0eee4  tbz w0,#0x0,0x7102c0eefc
7102c0eee8  mov w0,#0x10
7102c0eeec  mov w1,#0x8
7102c0eef0  bl 0x710392e290
7102c0eef4  mov x20,x0
7102c0eef8  cbnz x0,0x7102c0ef00
7102c0eefc  mov x20,xzr
7102c0ef00  mov w0,#0x10
7102c0ef04  mov w1,#0x10
7102c0ef08  bl 0x710392e290
7102c0ef0c  mov x21,x0
7102c0ef10  cbnz x0,0x7102c0ef5c
7102c0ef14  adrp x8,0x7105332000
7102c0ef18  ldr x0,[x8, #0xf00]
7102c0ef1c  cbz x0,0x7102c0ef58
7102c0ef20  mov w8,#0x10
7102c0ef24  str wzr,[sp, #0xa0]
7102c0ef28  add x1,sp,#0xa0
7102c0ef2c  str x8,[sp, #0x150]
7102c0ef30  ldr x8,[x0]
7102c0ef34  ldr x8,[x8, #0x30]
7102c0ef38  add x2,sp,#0x150
7102c0ef3c  blr x8
7102c0ef40  tbz w0,#0x0,0x7102c0ef58
7102c0ef44  mov w0,#0x10
7102c0ef48  mov w1,#0x10
7102c0ef4c  bl 0x710392e290
7102c0ef50  mov x21,x0
7102c0ef54  cbnz x0,0x7102c0ef5c
7102c0ef58  mov x21,xzr
7102c0ef5c  stp xzr,xzr,[x21]
7102c0ef60  ldr x8,[x19]
7102c0ef64  ldr x19,[x8]
7102c0ef68  ldr x9,[x19, #0x310]
7102c0ef6c  mov x22,#0x3164
7102c0ef70  movk x22,#0xbce1, LSL #16
7102c0ef74  movk x22,#0xc, LSL #32
7102c0ef78  ldp x8,x9,[x9, #0xd0]
7102c0ef7c  cmp x8,x9
7102c0ef80  b.eq 0x7102c0efac
7102c0ef84  ldr w10,[x8, #0x8]
7102c0ef88  cmp w10,#0x1
7102c0ef8c  b.hi 0x7102c0efa0
7102c0ef90  ldr x10,[x8]
7102c0ef94  ldr x11,[x10, #0x68]
7102c0ef98  cmp x11,x22
7102c0ef9c  b.eq 0x7102c10060
7102c0efa0  add x8,x8,#0x10
7102c0efa4  cmp x9,x8
7102c0efa8  b.ne 0x7102c0ef84
7102c0efac  str xzr,[x21]
7102c0efb0  ldr x8,[x19, #0x300]
7102c0efb4  ldr x19,[sp, #0x58]
7102c0efb8  ldr x9,[x8, #0x18]
7102c0efbc  ldp x8,x9,[x9]
7102c0efc0  cmp x8,x9
7102c0efc4  b.eq 0x7102c0f00c
7102c0efc8  ldr x10,[x8], #0x8
7102c0efcc  ldr x11,[x10, #0xa0]
7102c0efd0  and x11,x11,#0xffffffffff
7102c0efd4  cmp x11,x22
7102c0efd8  b.eq 0x7102c0efe8
7102c0efdc  cmp x9,x8
7102c0efe0  b.ne 0x7102c0efc8
7102c0efe4  b 0x7102c0f00c
7102c0efe8  ldr x8,[x10, #0x110]
7102c0efec  cbz x8,0x7102c0f00c
7102c0eff0  ldp x9,x10,[x8]
7102c0eff4  cmp x9,x10
7102c0eff8  b.eq 0x7102c0f00c
7102c0effc  str x8,[x21, #0x8]
7102c0f000  ldp x0,x1,[x8]
7102c0f004  mov w2,#0x1
7102c0f008  bl 0x71025f4d80
7102c0f00c  str x21,[x20]
7102c0f010  ldr x21,[x19, #0x1d0]
7102c0f014  str x20,[x19, #0x1d0]
7102c0f018  cbz x21,0x7102c0f034
7102c0f01c  ldr x0,[x21]
7102c0f020  str xzr,[x21]
7102c0f024  cbz x0,0x7102c0f02c
7102c0f028  bl 0x710392eb40
7102c0f02c  mov x0,x21
7102c0f030  bl 0x710392eb40
7102c0f034  ldr x19,[x19, #0x1a8]
7102c0f038  mov w0,#0x10
7102c0f03c  mov w1,#0x8
7102c0f040  bl 0x710392e290
7102c0f044  mov x20,x0
7102c0f048  cbnz x0,0x7102c0f094
7102c0f04c  adrp x8,0x7105332000
7102c0f050  ldr x0,[x8, #0xf00]
7102c0f054  cbz x0,0x7102c0f090
7102c0f058  mov w8,#0x8
7102c0f05c  str wzr,[sp, #0xa0]
7102c0f060  add x1,sp,#0xa0
7102c0f064  str x8,[sp, #0x150]
7102c0f068  ldr x8,[x0]
7102c0f06c  ldr x8,[x8, #0x30]
7102c0f070  add x2,sp,#0x150
7102c0f074  blr x8
7102c0f078  tbz w0,#0x0,0x7102c0f090
7102c0f07c  mov w0,#0x10
7102c0f080  mov w1,#0x8
7102c0f084  bl 0x710392e290
7102c0f088  mov x20,x0
7102c0f08c  cbnz x0,0x7102c0f094
7102c0f090  mov x20,xzr
7102c0f094  mov w0,#0x10
7102c0f098  orr w1,wzr,#0x30
7102c0f09c  bl 0x710392e290
7102c0f0a0  mov x21,x0
7102c0f0a4  cbnz x0,0x7102c0f0f0
7102c0f0a8  adrp x8,0x7105332000
7102c0f0ac  ldr x0,[x8, #0xf00]
7102c0f0b0  cbz x0,0x7102c0f0ec
7102c0f0b4  orr w8,wzr,#0x30
7102c0f0b8  str wzr,[sp, #0xa0]
7102c0f0bc  add x1,sp,#0xa0
7102c0f0c0  str x8,[sp, #0x150]
7102c0f0c4  ldr x8,[x0]
7102c0f0c8  ldr x8,[x8, #0x30]
7102c0f0cc  add x2,sp,#0x150
7102c0f0d0  blr x8
7102c0f0d4  tbz w0,#0x0,0x7102c0f0ec
7102c0f0d8  mov w0,#0x10
7102c0f0dc  orr w1,wzr,#0x30
7102c0f0e0  bl 0x710392e290
7102c0f0e4  mov x21,x0
7102c0f0e8  cbnz x0,0x7102c0f0f0
7102c0f0ec  mov x21,xzr
7102c0f0f0  stp x19,xzr,[x21]
7102c0f0f4  adrp x8,0x71052a8000
7102c0f0f8  ldr x8,[x8, #0xa88]
7102c0f0fc  ldr q0,[x8]
7102c0f100  mov w8,#0x1
7102c0f104  strb w8,[x21, #0x20]
7102c0f108  str q0,[x21, #0x10]
7102c0f10c  ldr x8,[x19]
7102c0f110  ldr x8,[x8]
7102c0f114  ldr x9,[x8, #0x310]
7102c0f118  ldp x8,x9,[x9, #0xd0]
7102c0f11c  cmp x8,x9
7102c0f120  b.eq 0x7102c0f158
7102c0f124  mov x10,#0x55d8
7102c0f128  movk x10,#0xe01b, LSL #16
7102c0f12c  movk x10,#0x8, LSL #32
7102c0f130  ldr w11,[x8, #0x8]
7102c0f134  cmp w11,#0x1
7102c0f138  b.hi 0x7102c0f14c
7102c0f13c  ldr x11,[x8]
7102c0f140  ldr x12,[x11, #0x68]
7102c0f144  cmp x12,x10
7102c0f148  b.eq 0x7102c0f15c
7102c0f14c  add x8,x8,#0x10
7102c0f150  cmp x9,x8
7102c0f154  b.ne 0x7102c0f130
7102c0f158  mov x11,xzr
7102c0f15c  str x11,[x21, #0x8]
7102c0f160  ldr x8,[x19]
7102c0f164  add x19,sp,#0x150
7102c0f168  add x22,x19,#0x8
7102c0f16c  mov x0,x22
7102c0f170  ldr x8,[x8, #0x8]
7102c0f174  add x1,x8,#0x8
7102c0f178  bl 0x7102c12a90
7102c0f17c  movi v0.2D,#0x0
7102c0f180  adrp x8,0x7105121000
7102c0f184  add x8,x8,#0x670
7102c0f188  str x8,[sp, #0x150]
7102c0f18c  add x8,x19,#0xfc
7102c0f190  fmov s1,0x3f800000
7102c0f194  ld1 {v0.S}[0],[x8]
7102c0f198  add x8,x19,#0x100
7102c0f19c  ld1 {v0.S}[1],[x8]
7102c0f1a0  add x8,x19,#0x104
7102c0f1a4  ld1 {v0.S}[2],[x8]
7102c0f1a8  str q0,[x21, #0x10]
7102c0f1ac  mov v0.S[0x3],v1.S[0x0]
7102c0f1b0  ldr q1,[sp, #0x40]
7102c0f1b4  stur q1,[x29, #-0xb0]
7102c0f1b8  ldr q1,[sp, #0x30]
7102c0f1bc  stur q1,[x29, #-0xa0]
7102c0f1c0  ldr q1,[sp, #0x20]
7102c0f1c4  stp q1,q0,[x29, #-0x90]
7102c0f1c8  ldr x19,[x21, #0x8]
7102c0f1cc  cbz x19,0x7102c0f254
7102c0f1d0  ldr x0,[x19, #0x90]
7102c0f1d4  ldr x8,[x0]
7102c0f1d8  ldr x8,[x8, #0x148]
7102c0f1dc  sub x1,x29,#0xb0
7102c0f1e0  blr x8
7102c0f1e4  ldr x19,[x19, #0xd8]
7102c0f1e8  cbz x19,0x7102c0f254
7102c0f1ec  ldur x8,[x29, #-0x98]
7102c0f1f0  str x8,[sp, #0xb8]
7102c0f1f4  ldur x8,[x29, #-0xa0]
7102c0f1f8  str x8,[sp, #0xb0]
7102c0f1fc  ldur x8,[x29, #-0xa8]
7102c0f200  str x8,[sp, #0xa8]
7102c0f204  ldur x8,[x29, #-0xb0]
7102c0f208  str x8,[sp, #0xa0]
7102c0f20c  ldur x8,[x29, #-0x78]
7102c0f210  str x8,[sp, #0xd8]
7102c0f214  ldur x8,[x29, #-0x80]
7102c0f218  str x8,[sp, #0xd0]
7102c0f21c  ldur x8,[x29, #-0x88]
7102c0f220  str x8,[sp, #0xc8]
7102c0f224  ldur x8,[x29, #-0x90]
7102c0f228  str x8,[sp, #0xc0]
7102c0f22c  ldr x8,[x19, #0x8]
7102c0f230  ldrb w9,[x8, #0xa8]
7102c0f234  cbz w9,0x7102c0f24c
7102c0f238  ldr x0,[x8, #0x48]
7102c0f23c  ldr x8,[x0]
7102c0f240  ldr x8,[x8, #0x20]
7102c0f244  add x1,sp,#0xa0
7102c0f248  blr x8
7102c0f24c  mov w8,#0x1
7102c0f250  strb w8,[x19, #0x20]
7102c0f254  ldrb w8,[x21, #0x20]
7102c0f258  ldr x19,[sp, #0x58]
7102c0f25c  cbz w8,0x7102c0f2cc
7102c0f260  ldr x8,[x21, #0x8]
7102c0f264  cbz x8,0x7102c0f2c8
7102c0f268  add x0,x8,#0x108
7102c0f26c  strb wzr,[x8, #0x110]
7102c0f270  bl 0x71025e9d50
7102c0f274  ldr x8,[x21, #0x8]
7102c0f278  cbz x8,0x7102c0f2c8
7102c0f27c  ldrb w9,[x8, #0x118]
7102c0f280  orr w9,w9,#0x1
7102c0f284  strb w9,[x8, #0x118]
7102c0f288  ldr x8,[x21, #0x8]
7102c0f28c  cbz x8,0x7102c0f2c8
7102c0f290  ldrb w9,[x8, #0xe0]
7102c0f294  cbz w9,0x7102c0f2a8
7102c0f298  ldr x9,[x8, #0xc8]
7102c0f29c  cbz x9,0x7102c0f2a8
7102c0f2a0  mov w10,#0x101
7102c0f2a4  strh w10,[x9, #0x30]
7102c0f2a8  ldr x9,[x8, #0xd8]
7102c0f2ac  cbz x9,0x7102c0f2b8
7102c0f2b0  mov w10,#0x1
7102c0f2b4  strb w10,[x9, #0x21]
7102c0f2b8  ldrb w9,[x8, #0xe0]
7102c0f2bc  cbz w9,0x7102c0f2c8
7102c0f2c0  ldr x8,[x8, #0xb0]
7102c0f2c4  strb wzr,[x8, #0x10]
7102c0f2c8  strb wzr,[x21, #0x20]
7102c0f2cc  mov x0,x22
7102c0f2d0  bl 0x7102c104b0
7102c0f2d4  str x21,[x20]
7102c0f2d8  ldr x21,[x19, #0x1d8]
7102c0f2dc  str x20,[x19, #0x1d8]
7102c0f2e0  cbz x21,0x7102c0f2fc
7102c0f2e4  ldr x0,[x21]
7102c0f2e8  str xzr,[x21]
7102c0f2ec  cbz x0,0x7102c0f2f4
7102c0f2f0  bl 0x710392eb40
7102c0f2f4  mov x0,x21
7102c0f2f8  bl 0x710392eb40
7102c0f2fc  ldr x20,[x19, #0x1a8]
7102c0f300  mov w0,#0x10
7102c0f304  mov w1,#0x8
7102c0f308  bl 0x710392e290
7102c0f30c  cbnz x0,0x7102c0f354
7102c0f310  adrp x8,0x7105332000
7102c0f314  ldr x0,[x8, #0xf00]
7102c0f318  cbz x0,0x7102c0f350
7102c0f31c  mov w8,#0x8
7102c0f320  str wzr,[sp, #0xa0]
7102c0f324  add x1,sp,#0xa0
7102c0f328  str x8,[sp, #0x150]
7102c0f32c  ldr x8,[x0]
7102c0f330  ldr x8,[x8, #0x30]
7102c0f334  add x2,sp,#0x150
7102c0f338  blr x8
7102c0f33c  tbz w0,#0x0,0x7102c0f350
7102c0f340  mov w0,#0x10
7102c0f344  mov w1,#0x8
7102c0f348  bl 0x710392e290
7102c0f34c  cbnz x0,0x7102c0f354
7102c0f350  mov x0,xzr
7102c0f354  str x0,[sp, #0x60]
7102c0f358  mov w1,#0x58
7102c0f35c  mov w0,#0x10
7102c0f360  bl 0x710392e290
7102c0f364  mov x21,x0
7102c0f368  cbnz x0,0x7102c0f3b4
7102c0f36c  adrp x8,0x7105332000
7102c0f370  ldr x0,[x8, #0xf00]
7102c0f374  cbz x0,0x7102c0f3b0
7102c0f378  mov w8,#0x58
7102c0f37c  str wzr,[sp, #0xa0]
7102c0f380  add x1,sp,#0xa0
7102c0f384  str x8,[sp, #0x150]
7102c0f388  ldr x8,[x0]
7102c0f38c  ldr x8,[x8, #0x30]
7102c0f390  add x2,sp,#0x150
7102c0f394  blr x8
7102c0f398  tbz w0,#0x0,0x7102c0f3b0
7102c0f39c  mov w1,#0x58
7102c0f3a0  mov w0,#0x10
7102c0f3a4  bl 0x710392e290
7102c0f3a8  mov x21,x0
7102c0f3ac  cbnz x0,0x7102c0f3b4
7102c0f3b0  mov x21,xzr
7102c0f3b4  mov x9,x21
7102c0f3b8  str x20,[x21]
7102c0f3bc  mov x22,x21
7102c0f3c0  str xzr,[x9, #0x18]!
7102c0f3c4  orr w8,wzr,#0x3f800000
7102c0f3c8  mov x10,x21
7102c0f3cc  str x9,[sp, #0x80]
7102c0f3d0  mov x9,x21
7102c0f3d4  mov x19,xzr
7102c0f3d8  str xzr,[x21, #0x20]
7102c0f3dc  str xzr,[x22, #0x8]!
7102c0f3e0  str xzr,[x21, #0x10]
7102c0f3e4  adrp x0,0x7105121000
7102c0f3e8  add x0,x0,#0xa0
7102c0f3ec  str w8,[x21, #0x28]
7102c0f3f0  mov w20,#0xffffffff
7102c0f3f4  orr x28,xzr,#0x100000000
7102c0f3f8  str xzr,[x10, #0x30]!
7102c0f3fc  str xzr,[x9, #0x40]!
7102c0f400  adrp x27,0x7104754000
7102c0f404  add x27,x27,#0x84
7102c0f408  str x10,[sp, #0x90]
7102c0f40c  str xzr,[x21, #0x48]
7102c0f410  str xzr,[x21, #0x38]
7102c0f414  str x9,[sp, #0x70]
7102c0f418  str w8,[x21, #0x50]
7102c0f41c  cbz x19,0x7102c0fbc8
7102c0f420  ldr x8,[x21]
7102c0f424  ldr x8,[x8]
7102c0f428  ldr x8,[x8]
7102c0f42c  ldr x8,[x8, #0x300]
7102c0f430  ldr x9,[x8, #0x18]
7102c0f434  ldp x8,x9,[x9]
7102c0f438  cmp x8,x9
7102c0f43c  b.eq 0x7102c0fbc8
7102c0f440  ldr x10,[x0, x19, LSL #0x3]
7102c0f444  ldrb w11,[x10], #0x1
7102c0f448  ldr x12,[x8]
7102c0f44c  cbz w11,0x7102c0f49c
7102c0f450  mov x13,xzr
7102c0f454  mov x14,x10
7102c0f458  mov w16,w11
7102c0f45c  mov w15,w20
7102c0f460  and w16,w16,#0xff
7102c0f464  sub w17,w16,#0x41
7102c0f468  add w18,w16,#0x20
7102c0f46c  cmp w17,#0x1a
7102c0f470  csel w16,w18,w16,cc
7102c0f474  eor w16,w16,w15
7102c0f478  and w16,w16,#0xff
7102c0f47c  ldr w16,[x27, w16, UXTW #0x2]
7102c0f480  eor w15,w16,w15, LSR #0x8
7102c0f484  ldrb w16,[x14], #0x1
7102c0f488  add x13,x13,x28
7102c0f48c  cbnz w16,0x7102c0f460
7102c0f490  mvn w14,w15
7102c0f494  and x13,x13,#0xff00000000
7102c0f498  b 0x7102c0f4a4
7102c0f49c  mov x14,xzr
7102c0f4a0  mov x13,xzr
7102c0f4a4  orr x13,x13,x14
7102c0f4a8  ldr x14,[x12, #0xa0]
7102c0f4ac  and x14,x14,#0xffffffffff
7102c0f4b0  cmp x14,x13
7102c0f4b4  b.eq 0x7102c0f4c8
7102c0f4b8  add x8,x8,#0x8
7102c0f4bc  cmp x8,x9
7102c0f4c0  b.ne 0x7102c0f448
7102c0f4c4  b 0x7102c0fbc8
7102c0f4c8  ldr x26,[x12, #0x130]
7102c0f4cc  cbz x26,0x7102c0fbc8
7102c0f4d0  ldr x25,[x21, #0x10]
7102c0f4d4  cbz x25,0x7102c0f578
7102c0f4d8  sub x8,x25,#0x1
7102c0f4dc  ands x9,x8,x25
7102c0f4e0  b.eq 0x7102c0f4fc
7102c0f4e4  cmp x25,x19
7102c0f4e8  mov x23,x19
7102c0f4ec  b.hi 0x7102c0f500
7102c0f4f0  udiv x10,x19,x25
7102c0f4f4  msub x23,x10,x25,x19
7102c0f4f8  b 0x7102c0f500
7102c0f4fc  and x23,x8,x19
7102c0f500  ldr x10,[x22]
7102c0f504  ldr x24,[x10, x23, LSL #0x3]
7102c0f508  cbz x24,0x7102c0f578
7102c0f50c  cbz x9,0x7102c0f54c
7102c0f510  ldr x24,[x24]
7102c0f514  cbz x24,0x7102c0f578
7102c0f518  ldr x8,[x24, #0x8]
7102c0f51c  cmp x8,x19
7102c0f520  b.eq 0x7102c0f53c
7102c0f524  cmp x8,x25
7102c0f528  b.cc 0x7102c0f534
7102c0f52c  udiv x9,x8,x25
7102c0f530  msub x8,x9,x25,x8
7102c0f534  cmp x8,x23
7102c0f538  b.ne 0x7102c0f578
7102c0f53c  ldr w8,[x24, #0x10]
7102c0f540  cmp x19,x8
7102c0f544  b.ne 0x7102c0f510
7102c0f548  b 0x7102c0f790
7102c0f54c  ldr x24,[x24]
7102c0f550  cbz x24,0x7102c0f578
7102c0f554  ldr x9,[x24, #0x8]
7102c0f558  and x10,x9,x8
7102c0f55c  cmp x9,x19
7102c0f560  ccmp x10,x23,#0x4,ne
7102c0f564  b.ne 0x7102c0f578
7102c0f568  ldr w9,[x24, #0x10]
7102c0f56c  cmp x19,x9
7102c0f570  b.ne 0x7102c0f54c
7102c0f574  b 0x7102c0f790
7102c0f578  mov w0,#0x10
7102c0f57c  mov w1,#0x20
7102c0f580  bl 0x710392e290
7102c0f584  mov x24,x0
7102c0f588  cbnz x0,0x7102c0f5d4
7102c0f58c  adrp x8,0x7105332000
7102c0f590  ldr x0,[x8, #0xf00]
7102c0f594  cbz x0,0x7102c0f5d0
7102c0f598  mov w8,#0x20
7102c0f59c  str wzr,[sp, #0xa0]
7102c0f5a0  add x1,sp,#0xa0
7102c0f5a4  str x8,[sp, #0x150]
7102c0f5a8  ldr x8,[x0]
7102c0f5ac  ldr x8,[x8, #0x30]
7102c0f5b0  add x2,sp,#0x150
7102c0f5b4  blr x8
7102c0f5b8  tbz w0,#0x0,0x7102c0f5d0
7102c0f5bc  mov w0,#0x10
7102c0f5c0  mov w1,#0x20
7102c0f5c4  bl 0x710392e290
7102c0f5c8  mov x24,x0
7102c0f5cc  cbnz x0,0x7102c0f5d4
7102c0f5d0  mov x24,xzr
7102c0f5d4  str w19,[x24, #0x10]
7102c0f5d8  str xzr,[x24, #0x18]
7102c0f5dc  stp xzr,x19,[x24]
7102c0f5e0  ldr x8,[x21, #0x20]
7102c0f5e4  add x8,x8,#0x1
7102c0f5e8  ucvtf s0,x8
7102c0f5ec  ldr s1,[x21, #0x28]
7102c0f5f0  cbz x25,0x7102c0f604
7102c0f5f4  ucvtf s2,x25
7102c0f5f8  fmul s2,s1,s2
7102c0f5fc  fcmp s2,s0
7102c0f600  b.pl 0x7102c0f71c
7102c0f604  lsl x8,x25,#0x1
7102c0f608  cmp x25,#0x3
7102c0f60c  b.cc 0x7102c0f620
7102c0f610  sub x9,x25,#0x1
7102c0f614  tst x9,x25
7102c0f618  cset w9,ne
7102c0f61c  b 0x7102c0f624
7102c0f620  mov w9,#0x1
7102c0f624  fdiv s0,s0,s1
7102c0f628  orr x8,x9,x8
7102c0f62c  fcvtpu x9,s0
7102c0f630  cmp x8,x9
7102c0f634  csel x25,x9,x8,cc
7102c0f638  subs x8,x25,#0x1
7102c0f63c  b.ne 0x7102c0f648
7102c0f640  mov w25,#0x2
7102c0f644  b 0x7102c0f65c
7102c0f648  tst x8,x25
7102c0f64c  b.eq 0x7102c0f65c
7102c0f650  mov x0,x25
7102c0f654  bl 0x71039c26e0
7102c0f658  mov x25,x0
7102c0f65c  ldr x23,[x21, #0x10]
7102c0f660  cmp x25,x23
7102c0f664  b.ls 0x7102c0f678
7102c0f668  mov x0,x22
7102c0f66c  mov x1,x25
7102c0f670  bl 0x7102c13630
7102c0f674  b 0x7102c0f6ec
7102c0f678  b.cs 0x7102c0f6ec
7102c0f67c  cmp x23,#0x3
7102c0f680  b.cc 0x7102c0f694
7102c0f684  sub x8,x23,#0x1
7102c0f688  tst x8,x23
7102c0f68c  cset w8,eq
7102c0f690  b 0x7102c0f698
7102c0f694  mov w8,wzr
7102c0f698  ldr x9,[x21, #0x20]
7102c0f69c  ucvtf s0,x9
7102c0f6a0  ldr s1,[x21, #0x28]
7102c0f6a4  fdiv s0,s0,s1
7102c0f6a8  fcvtpu x0,s0
7102c0f6ac  cbz w8,0x7102c0f6d0
7102c0f6b0  sub x8,x0,#0x1
7102c0f6b4  clz x8,x8
7102c0f6b8  neg x8,x8
7102c0f6bc  mov w9,#0x1
7102c0f6c0  lsl x8,x9,x8
7102c0f6c4  cmp x0,#0x2
7102c0f6c8  csel x0,x0,x8,cc
7102c0f6cc  b 0x7102c0f6d4
7102c0f6d0  bl 0x71039c26e0
7102c0f6d4  cmp x25,x0
7102c0f6d8  csel x1,x0,x25,cc
7102c0f6dc  cmp x1,x23
7102c0f6e0  b.cs 0x7102c0f6ec
7102c0f6e4  mov x0,x22
7102c0f6e8  b 0x7102c0f670
7102c0f6ec  ldr x25,[x21, #0x10]
7102c0f6f0  sub x8,x25,#0x1
7102c0f6f4  tst x8,x25
7102c0f6f8  b.eq 0x7102c0f70c
7102c0f6fc  cmp x25,x19
7102c0f700  b.ls 0x7102c0f714
7102c0f704  mov x23,x19
7102c0f708  b 0x7102c0f71c
7102c0f70c  and x23,x8,x19
7102c0f710  b 0x7102c0f71c
7102c0f714  udiv x8,x19,x25
7102c0f718  msub x23,x8,x25,x19
7102c0f71c  ldr x9,[x22]
7102c0f720  ldr x8,[x9, x23, LSL #0x3]
7102c0f724  cbz x8,0x7102c0f734
7102c0f728  ldr x9,[x8]
7102c0f72c  str x9,[x24]
7102c0f730  b 0x7102c0f780
7102c0f734  ldr x10,[sp, #0x80]
7102c0f738  ldr x8,[x10]
7102c0f73c  str x8,[x24]
7102c0f740  str x24,[x10]
7102c0f744  str x10,[x9, x23, LSL #0x3]
7102c0f748  ldr x8,[x24]
7102c0f74c  cbz x8,0x7102c0f784
7102c0f750  ldr x8,[x8, #0x8]
7102c0f754  sub x9,x25,#0x1
7102c0f758  tst x9,x25
7102c0f75c  b.eq 0x7102c0f774
7102c0f760  cmp x8,x25
7102c0f764  b.cc 0x7102c0f778
7102c0f768  udiv x9,x8,x25
7102c0f76c  msub x8,x9,x25,x8
7102c0f770  b 0x7102c0f778
7102c0f774  and x8,x8,x9
7102c0f778  ldr x9,[x22]
7102c0f77c  add x8,x9,x8, LSL #0x3
7102c0f780  str x24,[x8]
7102c0f784  ldr x8,[x21, #0x20]
7102c0f788  add x8,x8,#0x1
7102c0f78c  str x8,[x21, #0x20]
7102c0f790  str x26,[x24, #0x18]
7102c0f794  ldr x25,[x21, #0x38]
7102c0f798  cbz x25,0x7102c0f850
7102c0f79c  sub x9,x25,#0x1
7102c0f7a0  ands x10,x9,x25
7102c0f7a4  b.eq 0x7102c0f7c0
7102c0f7a8  cmp x25,x19
7102c0f7ac  mov x23,x19
7102c0f7b0  b.hi 0x7102c0f7c4
7102c0f7b4  udiv x8,x19,x25
7102c0f7b8  msub x23,x8,x25,x19
7102c0f7bc  b 0x7102c0f7c4
7102c0f7c0  and x23,x9,x19
7102c0f7c4  ldr x8,[sp, #0x90]
7102c0f7c8  ldr x8,[x8]
7102c0f7cc  ldr x8,[x8, x23, LSL #0x3]
7102c0f7d0  cbz x8,0x7102c0f850
7102c0f7d4  cbz x10,0x7102c0f818
7102c0f7d8  ldr x8,[x8]
7102c0f7dc  cbz x8,0x7102c0f850
7102c0f7e0  ldr x9,[x8, #0x8]
7102c0f7e4  cmp x9,x19
7102c0f7e8  b.eq 0x7102c0f804
7102c0f7ec  cmp x9,x25
7102c0f7f0  b.cc 0x7102c0f7fc
7102c0f7f4  udiv x10,x9,x25
7102c0f7f8  msub x9,x10,x25,x9
7102c0f7fc  cmp x9,x23
7102c0f800  b.ne 0x7102c0f850
7102c0f804  mov x26,x8
7102c0f808  ldr w9,[x26, #0x10]!
7102c0f80c  cmp x19,x9
7102c0f810  b.ne 0x7102c0f7d8
7102c0f814  b 0x7102c0f844
7102c0f818  ldr x8,[x8]
7102c0f81c  cbz x8,0x7102c0f850
7102c0f820  ldr x10,[x8, #0x8]
7102c0f824  and x11,x10,x9
7102c0f828  cmp x10,x19
7102c0f82c  ccmp x11,x23,#0x4,ne
7102c0f830  b.ne 0x7102c0f850
7102c0f834  mov x26,x8
7102c0f838  ldr w10,[x26, #0x10]!
7102c0f83c  cmp x19,x10
7102c0f840  b.ne 0x7102c0f818
7102c0f844  adrp x0,0x7105121000
7102c0f848  add x0,x0,#0xa0
7102c0f84c  b 0x7102c0fa84
7102c0f850  mov w0,#0x10
7102c0f854  orr w1,wzr,#0x18
7102c0f858  bl 0x710392e290
7102c0f85c  mov x24,x0
7102c0f860  cbnz x0,0x7102c0f8ac
7102c0f864  adrp x8,0x7105332000
7102c0f868  ldr x0,[x8, #0xf00]
7102c0f86c  cbz x0,0x7102c0f8a8
7102c0f870  orr w8,wzr,#0x18
7102c0f874  str wzr,[sp, #0xa0]
7102c0f878  add x1,sp,#0xa0
7102c0f87c  str x8,[sp, #0x150]
7102c0f880  ldr x8,[x0]
7102c0f884  ldr x8,[x8, #0x30]
7102c0f888  add x2,sp,#0x150
7102c0f88c  blr x8
7102c0f890  tbz w0,#0x0,0x7102c0f8a8
7102c0f894  mov w0,#0x10
7102c0f898  orr w1,wzr,#0x18
7102c0f89c  bl 0x710392e290
7102c0f8a0  mov x24,x0
7102c0f8a4  cbnz x0,0x7102c0f8ac
7102c0f8a8  mov x24,xzr
7102c0f8ac  mov x26,x24
7102c0f8b0  str w19,[x26, #0x10]!
7102c0f8b4  strb wzr,[x24, #0x14]
7102c0f8b8  stp xzr,x19,[x24]
7102c0f8bc  ldr x8,[x21, #0x48]
7102c0f8c0  add x8,x8,#0x1
7102c0f8c4  ldr s1,[x21, #0x50]
7102c0f8c8  ucvtf s0,x8
7102c0f8cc  cbz x25,0x7102c0f8e0
7102c0f8d0  ucvtf s2,x25
7102c0f8d4  fmul s2,s1,s2
7102c0f8d8  fcmp s2,s0
7102c0f8dc  b.pl 0x7102c0f9f8
7102c0f8e0  lsl x8,x25,#0x1
7102c0f8e4  cmp x25,#0x3
7102c0f8e8  b.cc 0x7102c0f8fc
7102c0f8ec  sub x9,x25,#0x1
7102c0f8f0  tst x9,x25
7102c0f8f4  cset w9,ne
7102c0f8f8  b 0x7102c0f900
7102c0f8fc  mov w9,#0x1
7102c0f900  fdiv s0,s0,s1
7102c0f904  orr x8,x9,x8
7102c0f908  fcvtpu x9,s0
7102c0f90c  cmp x8,x9
7102c0f910  csel x25,x9,x8,cc
7102c0f914  subs x8,x25,#0x1
7102c0f918  b.ne 0x7102c0f924
7102c0f91c  mov w25,#0x2
7102c0f920  b 0x7102c0f938
7102c0f924  tst x8,x25
7102c0f928  b.eq 0x7102c0f938
7102c0f92c  mov x0,x25
7102c0f930  bl 0x71039c26e0
7102c0f934  mov x25,x0
7102c0f938  ldr x23,[x21, #0x38]
7102c0f93c  cmp x25,x23
7102c0f940  b.ls 0x7102c0f954
7102c0f944  ldr x0,[sp, #0x90]
7102c0f948  mov x1,x25
7102c0f94c  bl 0x7102c13390
7102c0f950  b 0x7102c0f9c8
7102c0f954  b.cs 0x7102c0f9c8
7102c0f958  cmp x23,#0x3
7102c0f95c  b.cc 0x7102c0f970
7102c0f960  sub x8,x23,#0x1
7102c0f964  tst x8,x23
7102c0f968  cset w8,eq
7102c0f96c  b 0x7102c0f974
7102c0f970  mov w8,wzr
7102c0f974  ldr x9,[x21, #0x48]
7102c0f978  ucvtf s0,x9
7102c0f97c  ldr s1,[x21, #0x50]
7102c0f980  fdiv s0,s0,s1
7102c0f984  fcvtpu x0,s0
7102c0f988  cbz w8,0x7102c0f9ac
7102c0f98c  sub x8,x0,#0x1
7102c0f990  clz x8,x8
7102c0f994  neg x8,x8
7102c0f998  mov w9,#0x1
7102c0f99c  lsl x8,x9,x8
7102c0f9a0  cmp x0,#0x2
7102c0f9a4  csel x0,x0,x8,cc
7102c0f9a8  b 0x7102c0f9b0
7102c0f9ac  bl 0x71039c26e0
7102c0f9b0  cmp x25,x0
7102c0f9b4  csel x1,x0,x25,cc
7102c0f9b8  cmp x1,x23
7102c0f9bc  b.cs 0x7102c0f9c8
7102c0f9c0  ldr x0,[sp, #0x90]
7102c0f9c4  b 0x7102c0f94c
7102c0f9c8  ldr x25,[x21, #0x38]
7102c0f9cc  sub x8,x25,#0x1
7102c0f9d0  tst x8,x25
7102c0f9d4  b.eq 0x7102c0f9e8
7102c0f9d8  cmp x25,x19
7102c0f9dc  b.ls 0x7102c0f9f0
7102c0f9e0  mov x23,x19
7102c0f9e4  b 0x7102c0f9f8
7102c0f9e8  and x23,x8,x19
7102c0f9ec  b 0x7102c0f9f8
7102c0f9f0  udiv x8,x19,x25
7102c0f9f4  msub x23,x8,x25,x19
7102c0f9f8  ldr x8,[sp, #0x90]
7102c0f9fc  ldr x9,[x8]
7102c0fa00  ldr x8,[x9, x23, LSL #0x3]
7102c0fa04  cbz x8,0x7102c0fa1c
7102c0fa08  ldr x9,[x8]
7102c0fa0c  adrp x0,0x7105121000
7102c0fa10  add x0,x0,#0xa0
7102c0fa14  str x9,[x24]
7102c0fa18  b 0x7102c0fa74
7102c0fa1c  ldr x10,[sp, #0x70]
7102c0fa20  ldr x8,[x10]
7102c0fa24  str x8,[x24]
7102c0fa28  str x24,[x10]
7102c0fa2c  str x10,[x9, x23, LSL #0x3]
7102c0fa30  ldr x8,[x24]
7102c0fa34  adrp x0,0x7105121000
7102c0fa38  add x0,x0,#0xa0
7102c0fa3c  cbz x8,0x7102c0fa78
7102c0fa40  ldr x8,[x8, #0x8]
7102c0fa44  sub x9,x25,#0x1
7102c0fa48  tst x9,x25
7102c0fa4c  b.eq 0x7102c0fa64
7102c0fa50  cmp x8,x25
7102c0fa54  b.cc 0x7102c0fa68
7102c0fa58  udiv x9,x8,x25
7102c0fa5c  msub x8,x9,x25,x8
7102c0fa60  b 0x7102c0fa68
7102c0fa64  and x8,x8,x9
7102c0fa68  ldr x9,[sp, #0x90]
7102c0fa6c  ldr x9,[x9]
7102c0fa70  add x8,x9,x8, LSL #0x3
7102c0fa74  str x24,[x8]
7102c0fa78  ldr x8,[x21, #0x48]
7102c0fa7c  add x8,x8,#0x1
7102c0fa80  str x8,[x21, #0x48]
7102c0fa84  strb wzr,[x26, #0x4]
7102c0fa88  ldr x10,[x21, #0x10]
7102c0fa8c  cbz x10,0x7102c0fbc8
7102c0fa90  sub x11,x10,#0x1
7102c0fa94  ands x12,x11,x10
7102c0fa98  b.eq 0x7102c0fab4
7102c0fa9c  cmp x10,x19
7102c0faa0  mov x8,x19
7102c0faa4  b.hi 0x7102c0fab8
7102c0faa8  udiv x8,x19,x10
7102c0faac  msub x8,x8,x10,x19
7102c0fab0  b 0x7102c0fab8
7102c0fab4  and x8,x11,x19
7102c0fab8  ldr x9,[x22]
7102c0fabc  ldr x9,[x9, x8, LSL #0x3]
7102c0fac0  cbz x9,0x7102c0fbc8
7102c0fac4  ldr x9,[x9]
7102c0fac8  cbz x9,0x7102c0fbc8
7102c0facc  cbz x12,0x7102c0fb10
7102c0fad0  ldr x11,[x9, #0x8]
7102c0fad4  cmp x11,x19
7102c0fad8  b.ne 0x7102c0faec
7102c0fadc  ldr w11,[x9, #0x10]
7102c0fae0  cmp x19,x11
7102c0fae4  b.ne 0x7102c0fb04
7102c0fae8  b 0x7102c0fb44
7102c0faec  cmp x11,x10
7102c0faf0  b.cc 0x7102c0fafc
7102c0faf4  udiv x12,x11,x10
7102c0faf8  msub x11,x12,x10,x11
7102c0fafc  cmp x11,x8
7102c0fb00  b.ne 0x7102c0fbc8
7102c0fb04  ldr x9,[x9]
7102c0fb08  cbnz x9,0x7102c0fad0
7102c0fb0c  b 0x7102c0fbc8
7102c0fb10  ldr x10,[x9, #0x8]
7102c0fb14  and x12,x10,x11
7102c0fb18  cmp x10,x19
7102c0fb1c  ccmp x12,x8,#0x4,ne
7102c0fb20  b.ne 0x7102c0fbc8
7102c0fb24  cmp x10,x19
7102c0fb28  b.ne 0x7102c0fb38
7102c0fb2c  ldr w10,[x9, #0x10]
7102c0fb30  cmp x19,x10
7102c0fb34  b.eq 0x7102c0fb44
7102c0fb38  ldr x9,[x9]
7102c0fb3c  cbnz x9,0x7102c0fb10
7102c0fb40  b 0x7102c0fbc8
7102c0fb44  ldr x9,[x9, #0x18]
7102c0fb48  ldp x8,x9,[x9]
7102c0fb4c  cmp x8,x9
7102c0fb50  b.eq 0x7102c0fbc8
7102c0fb54  ldr x11,[x8]
7102c0fb58  ldrb w10,[x11, #0x20]
7102c0fb5c  cbz w10,0x7102c0fbbc
7102c0fb60  ldp x13,x10,[x11, #0x8]
7102c0fb64  ldr x12,[x11]
7102c0fb68  strb wzr,[x11, #0x20]
7102c0fb6c  str x12,[x13]
7102c0fb70  str x13,[x12, #0x8]
7102c0fb74  ldr x12,[x10, #0x18]
7102c0fb78  sub x12,x12,#0x1
7102c0fb7c  str x12,[x10, #0x18]
7102c0fb80  stp xzr,xzr,[x11]
7102c0fb84  ldr x13,[x10, #0x40]
7102c0fb88  add x12,x10,#0x38
7102c0fb8c  stp x12,x13,[x11]
7102c0fb90  str x11,[x10, #0x40]
7102c0fb94  str x11,[x13]
7102c0fb98  ldr x12,[x10, #0x30]
7102c0fb9c  add x12,x12,#0x1
7102c0fba0  str x12,[x10, #0x30]
7102c0fba4  ldr x11,[x11, #0x18]
7102c0fba8  cbz x11,0x7102c0fbb0
7102c0fbac  ldr w11,[x11, #0x110]
7102c0fbb0  ldr w12,[x10, #0x48]
7102c0fbb4  sub w11,w12,w11
7102c0fbb8  str w11,[x10, #0x48]
7102c0fbbc  add x8,x8,#0x8
7102c0fbc0  cmp x9,x8
7102c0fbc4  b.ne 0x7102c0fb54
7102c0fbc8  add x19,x19,#0x1
7102c0fbcc  cmp x19,#0x7
7102c0fbd0  b.ne 0x7102c0f41c
7102c0fbd4  ldp x19,x8,[sp, #0x58]
7102c0fbd8  str x21,[x8]
7102c0fbdc  ldr x21,[x19, #0x1e0]
7102c0fbe0  str x8,[x19, #0x1e0]
7102c0fbe4  cbz x21,0x7102c0fbf8
7102c0fbe8  mov x0,x21
7102c0fbec  bl 0x7102c138d0
7102c0fbf0  mov x0,x21
7102c0fbf4  bl 0x710392eb40
7102c0fbf8  ldr x19,[x19, #0x1a8]
7102c0fbfc  mov w0,#0x10
7102c0fc00  mov w1,#0x8
7102c0fc04  bl 0x710392e290
7102c0fc08  mov x20,x0
7102c0fc0c  cbnz x0,0x7102c0fc58
7102c0fc10  adrp x8,0x7105332000
7102c0fc14  ldr x0,[x8, #0xf00]
7102c0fc18  cbz x0,0x7102c0fc54
7102c0fc1c  mov w8,#0x8
7102c0fc20  str wzr,[sp, #0xa0]
7102c0fc24  add x1,sp,#0xa0
7102c0fc28  str x8,[sp, #0x150]
7102c0fc2c  ldr x8,[x0]
7102c0fc30  ldr x8,[x8, #0x30]
7102c0fc34  add x2,sp,#0x150
7102c0fc38  blr x8
7102c0fc3c  tbz w0,#0x0,0x7102c0fc54
7102c0fc40  mov w0,#0x10
7102c0fc44  mov w1,#0x8
7102c0fc48  bl 0x710392e290
7102c0fc4c  mov x20,x0
7102c0fc50  cbnz x0,0x7102c0fc58
7102c0fc54  mov x20,xzr
7102c0fc58  mov w0,#0x10
7102c0fc5c  orr w1,wzr,#0x70
7102c0fc60  bl 0x710392e290
7102c0fc64  mov x21,x0
7102c0fc68  cbnz x0,0x7102c0fcb4
7102c0fc6c  adrp x8,0x7105332000
7102c0fc70  ldr x0,[x8, #0xf00]
7102c0fc74  cbz x0,0x7102c0fcb0
7102c0fc78  orr w8,wzr,#0x70
7102c0fc7c  str wzr,[sp, #0xa0]
7102c0fc80  add x1,sp,#0xa0
7102c0fc84  str x8,[sp, #0x150]
7102c0fc88  ldr x8,[x0]
7102c0fc8c  ldr x8,[x8, #0x30]
7102c0fc90  add x2,sp,#0x150
7102c0fc94  blr x8
7102c0fc98  tbz w0,#0x0,0x7102c0fcb0
7102c0fc9c  mov w0,#0x10
7102c0fca0  orr w1,wzr,#0x70
7102c0fca4  bl 0x710392e290
7102c0fca8  mov x21,x0
7102c0fcac  cbnz x0,0x7102c0fcb4
7102c0fcb0  mov x21,xzr
7102c0fcb4  mov x23,x21
7102c0fcb8  orr x8,xzr,#-0x100000000
7102c0fcbc  str x19,[x21]
7102c0fcc0  str xzr,[x23, #0x8]!
7102c0fcc4  str wzr,[x21, #0x2c]
7102c0fcc8  str x8,[x21, #0x30]
7102c0fccc  adrp x8,0x71052a8000
7102c0fcd0  stp xzr,xzr,[x21, #0x18]
7102c0fcd4  str xzr,[x21, #0x10]
7102c0fcd8  strh wzr,[x21, #0x28]
7102c0fcdc  ldr x8,[x8, #0xa88]
7102c0fce0  ldr q0,[x8]
7102c0fce4  strh wzr,[x21, #0x50]
7102c0fce8  stur xzr,[x21, #0x5a]
7102c0fcec  stur xzr,[x21, #0x54]
7102c0fcf0  str q0,[x21, #0x40]
7102c0fcf4  ldr x8,[x19]
7102c0fcf8  ldr x8,[x8]
7102c0fcfc  ldr x9,[x8, #0x310]
7102c0fd00  ldp x8,x9,[x9, #0xd0]
7102c0fd04  cmp x8,x9
7102c0fd08  b.eq 0x7102c0fd40
7102c0fd0c  mov x10,#0x16ff
7102c0fd10  movk x10,#0xa3b6, LSL #16
7102c0fd14  movk x10,#0x8, LSL #32
7102c0fd18  ldr w11,[x8, #0x8]
7102c0fd1c  cmp w11,#0x1
7102c0fd20  b.hi 0x7102c0fd34
7102c0fd24  ldr x11,[x8]
7102c0fd28  ldr x12,[x11, #0x68]
7102c0fd2c  cmp x12,x10
7102c0fd30  b.eq 0x7102c100cc
7102c0fd34  add x8,x8,#0x10
7102c0fd38  cmp x9,x8
7102c0fd3c  b.ne 0x7102c0fd18
7102c0fd40  str xzr,[x23]
7102c0fd44  ldr x8,[x19]
7102c0fd48  ldr x8,[x8]
7102c0fd4c  ldrb w0,[x8, #0x18]
7102c0fd50  bl 0x7102c12990
7102c0fd54  ldr x8,[x23]
7102c0fd58  adrp x9,0x71042f5000
7102c0fd5c  add x9,x9,#0xfb0
7102c0fd60  adrp x10,0x710426e000
7102c0fd64  add x10,x10,#0x9f
7102c0fd68  tst w0,#0x1
7102c0fd6c  csel x22,x10,x9,ne
7102c0fd70  cbz x8,0x7102c0fd8c
7102c0fd74  add x0,x8,#0x60
7102c0fd78  mov x1,x22
7102c0fd7c  mov w2,wzr
7102c0fd80  bl 0x71025ee080
7102c0fd84  ldr x0,[x23]
7102c0fd88  b 0x7102c0fd90
7102c0fd8c  mov x0,xzr
7102c0fd90  mov x1,x22
7102c0fd94  bl 0x7102610070
7102c0fd98  ldr x8,[x23]
7102c0fd9c  cbz x8,0x7102c0fdc8
7102c0fda0  ldr x8,[x8, #0xd8]
7102c0fda4  cbz x8,0x7102c0fdc8
7102c0fda8  ldr x8,[x8, #0x8]
7102c0fdac  ldr x0,[x8, #0x8]
7102c0fdb0  ldr x8,[x0]
7102c0fdb4  ldr x8,[x8, #0x18]
7102c0fdb8  adrp x1,0x71043de000
7102c0fdbc  add x1,x1,#0x2a1
7102c0fdc0  blr x8
7102c0fdc4  b 0x7102c0fdcc
7102c0fdc8  mov w0,#0xffffffff
7102c0fdcc  ldr x8,[x21]
7102c0fdd0  str w0,[x21, #0x34]
7102c0fdd4  ldr x9,[x8]
7102c0fdd8  ldr x9,[x9]
7102c0fddc  ldr x10,[x9, #0x300]
7102c0fde0  ldr x11,[x10, #0x18]
7102c0fde4  ldp x10,x11,[x11]
7102c0fde8  mov x19,#0xeb24
7102c0fdec  movk x19,#0xfa30, LSL #16
7102c0fdf0  movk x19,#0x4, LSL #32
7102c0fdf4  cmp x10,x11
7102c0fdf8  b.eq 0x7102c0fe3c
7102c0fdfc  ldr x12,[x10], #0x8
7102c0fe00  ldr x13,[x12, #0xa0]
7102c0fe04  and x13,x13,#0xffffffffff
7102c0fe08  cmp x13,x19
7102c0fe0c  b.eq 0x7102c0fe1c
7102c0fe10  cmp x11,x10
7102c0fe14  b.ne 0x7102c0fdfc
7102c0fe18  b 0x7102c0fe3c
7102c0fe1c  ldr x10,[x12, #0x110]
7102c0fe20  cbz x10,0x7102c0fe3c
7102c0fe24  ldp x11,x12,[x10]
7102c0fe28  cmp x11,x12
7102c0fe2c  b.eq 0x7102c0fe3c
7102c0fe30  str x10,[x21, #0x10]
7102c0fe34  ldr x9,[x8]
7102c0fe38  ldr x9,[x9]
7102c0fe3c  str xzr,[sp, #0x150]
7102c0fe40  ldr x9,[x9, #0x338]
7102c0fe44  ldr x9,[x9]
7102c0fe48  ldr x0,[x9, #0x8]
7102c0fe4c  cbz x0,0x7102c0fe64
7102c0fe50  add x1,sp,#0x150
7102c0fe54  mov w2,wzr
7102c0fe58  bl 0x7102405040
7102c0fe5c  ldr x8,[x21]
7102c0fe60  b 0x7102c0fe68
7102c0fe64  mov w0,#0xffffffff
7102c0fe68  str w0,[x21, #0x2c]
7102c0fe6c  ldr x9,[x8]
7102c0fe70  ldr x9,[x9]
7102c0fe74  ldr x9,[x9, #0x338]
7102c0fe78  ldr x9,[x9]
7102c0fe7c  ldr x0,[x9, #0x8]
7102c0fe80  cbz x0,0x7102c0fe98
7102c0fe84  add x1,sp,#0x150
7102c0fe88  mov w2,wzr
7102c0fe8c  bl 0x7102405040
7102c0fe90  ldr x8,[x21]
7102c0fe94  b 0x7102c0fe9c
7102c0fe98  mov w0,#0xffffffff
7102c0fe9c  str w0,[x21, #0x30]
7102c0fea0  ldr x8,[x8]
7102c0fea4  ldr x8,[x8]
7102c0fea8  ldrb w0,[x8, #0x18]
7102c0feac  bl 0x7102c12990
7102c0feb0  mvn w8,w0
7102c0feb4  and w8,w8,#0x1
7102c0feb8  strb w8,[x21, #0x61]
7102c0febc  ldr x8,[x21]
7102c0fec0  ldr x9,[x8]
7102c0fec4  ldr x9,[x9, #0x8]
7102c0fec8  ldr w9,[x9, #0x160]
7102c0fecc  stp w9,w9,[x21, #0x20]
7102c0fed0  mov w9,#0x1
7102c0fed4  strh w9,[x21, #0x28]
7102c0fed8  ldr x9,[x8]
7102c0fedc  ldr x10,[x9, #0x8]
7102c0fee0  ldp x9,x11,[x10, #0x140]
7102c0fee4  cmp x11,x9
7102c0fee8  b.eq 0x7102c10370
7102c0feec  ldp w10,w9,[x9]
7102c0fef0  stp w10,w9,[x21, #0x58]
7102c0fef4  ldr x8,[x8]
7102c0fef8  ldr x8,[x8]
7102c0fefc  ldr x8,[x8, #0x300]
7102c0ff00  ldr x9,[x8, #0x18]
7102c0ff04  ldp x8,x9,[x9]
7102c0ff08  cmp x8,x9
7102c0ff0c  b.eq 0x7102c0ff3c
7102c0ff10  ldr x10,[x8], #0x8
7102c0ff14  ldr x11,[x10, #0xa0]
7102c0ff18  and x11,x11,#0xffffffffff
7102c0ff1c  cmp x11,x19
7102c0ff20  b.eq 0x7102c0ff30
7102c0ff24  cmp x9,x8
7102c0ff28  b.ne 0x7102c0ff10
7102c0ff2c  b 0x7102c0ff3c
7102c0ff30  ldr x8,[x10, #0x130]
7102c0ff34  cbz x8,0x7102c0ff3c
7102c0ff38  str x8,[x21, #0x18]
7102c0ff3c  ldr x19,[sp, #0x58]
7102c0ff40  str x21,[x20]
7102c0ff44  ldr x21,[x19, #0x1b8]
7102c0ff48  str x20,[x19, #0x1b8]
7102c0ff4c  cbz x21,0x7102c0ff68
7102c0ff50  ldr x0,[x21]
7102c0ff54  str xzr,[x21]
7102c0ff58  cbz x0,0x7102c0ff60
7102c0ff5c  bl 0x710392eb40
7102c0ff60  mov x0,x21
7102c0ff64  bl 0x710392eb40
7102c0ff68  ldr x8,[x19, #0x1b0]
7102c0ff6c  cbz x8,0x7102c0ffcc
7102c0ff70  ldr x0,[x8]
7102c0ff74  bl 0x7102c164e0
7102c0ff78  ldr x8,[x19, #0x1b0]
7102c0ff7c  ldr x8,[x8]
7102c0ff80  add x20,x19,#0x1f0
7102c0ff84  cbz x8,0x7102c0ffd0
7102c0ff88  ldr x9,[x8, #0x18]
7102c0ff8c  ldr x10,[x8, #0x28]
7102c0ff90  str x10,[x20, #0x18]
7102c0ff94  str x9,[x20, #0x8]
7102c0ff98  ldr x9,[x8, #0x38]
7102c0ff9c  ldr x10,[x8, #0x48]
7102c0ffa0  str x10,[x20, #0x38]
7102c0ffa4  str x9,[x20, #0x28]
7102c0ffa8  ldr x9,[x8, #0x10]
7102c0ffac  ldr x10,[x8, #0x20]
7102c0ffb0  str x10,[x20, #0x10]
7102c0ffb4  str x9,[x20]
7102c0ffb8  ldr x9,[x8, #0x30]
7102c0ffbc  ldr x8,[x8, #0x40]
7102c0ffc0  str x8,[x20, #0x30]
7102c0ffc4  str x9,[x20, #0x20]
7102c0ffc8  b 0x7102c0ffd0
7102c0ffcc  add x20,x19,#0x1f0
7102c0ffd0  ldr x8,[x19, #0x1c0]
7102c0ffd4  ldr x0,[x8]
7102c0ffd8  cbz x0,0x7102c0ffe8
7102c0ffdc  fmov s0,wzr
7102c0ffe0  mov x1,x20
7102c0ffe4  bl 0x7102c13c40
7102c0ffe8  fmov s0,wzr
7102c0ffec  ldr x0,[x19, #0x1b8]
7102c0fff0  mov x1,x20
7102c0fff4  mov v1.16B,v0.16B
7102c0fff8  bl 0x7102c16f10
7102c0fffc  ldr x8,[x20, #0x8]
7102c10000  ldr x9,[x20, #0x18]
7102c10004  str x9,[x19, #0x248]
7102c10008  str x8,[x19, #0x238]
7102c1000c  ldr x8,[x20, #0x28]
7102c10010  ldr x9,[x20, #0x38]
7102c10014  str x9,[x19, #0x268]
7102c10018  str x8,[x19, #0x258]
7102c1001c  ldr x8,[x20]
7102c10020  ldr x9,[x20, #0x10]
7102c10024  str x9,[x19, #0x240]
7102c10028  str x8,[x19, #0x230]
7102c1002c  ldr x8,[x20, #0x20]
7102c10030  ldr x9,[x20, #0x30]
7102c10034  str x9,[x19, #0x260]
7102c10038  str x8,[x19, #0x250]
7102c1003c  add sp,sp,#0x5a0
7102c10040  ldp x29,x30,[sp, #0x60]
7102c10044  ldp x20,x19,[sp, #0x50]
7102c10048  ldp x22,x21,[sp, #0x40]
7102c1004c  ldp x24,x23,[sp, #0x30]
7102c10050  ldp x26,x25,[sp, #0x20]
7102c10054  ldp x28,x27,[sp, #0x10]
7102c10058  ldp d9,d8,[sp], #0x70
7102c1005c  ret
7102c10060  str x10,[x21]
7102c10064  cbz x10,0x7102c0efb0
7102c10068  add x0,x10,#0x108
7102c1006c  strb wzr,[x10, #0x110]
7102c10070  bl 0x71025e9d50
7102c10074  ldr x8,[x21]
7102c10078  cbz x8,0x7102c0efb0
7102c1007c  ldrb w9,[x8, #0x118]
7102c10080  orr w9,w9,#0x1
7102c10084  strb w9,[x8, #0x118]
7102c10088  ldr x8,[x21]
7102c1008c  cbz x8,0x7102c0efb0
7102c10090  ldrb w9,[x8, #0xe0]
7102c10094  cbz w9,0x7102c100a8
7102c10098  ldr x9,[x8, #0xc8]
7102c1009c  cbz x9,0x7102c100a8
7102c100a0  mov w10,#0x101
7102c100a4  strh w10,[x9, #0x30]
7102c100a8  ldr x9,[x8, #0xd8]
7102c100ac  cbz x9,0x7102c100b8
7102c100b0  mov w10,#0x1
7102c100b4  strb w10,[x9, #0x21]
7102c100b8  ldrb w9,[x8, #0xe0]
7102c100bc  cbz w9,0x7102c0efb0
7102c100c0  ldr x8,[x8, #0xb0]
7102c100c4  strb wzr,[x8, #0x10]
7102c100c8  b 0x7102c0efb0
7102c100cc  str x11,[x23]
7102c100d0  cbz x11,0x7102c0fd44
7102c100d4  ldrb w8,[x11, #0xe0]
7102c100d8  cbz w8,0x7102c0fd44
7102c100dc  ldr x0,[x11, #0xb8]
7102c100e0  adrp x8,0x71043ab000
7102c100e4  add x8,x8,#0xbef
7102c100e8  add x1,sp,#0x150
7102c100ec  mov w2,#0x1
7102c100f0  str x8,[sp, #0x150]
7102c100f4  bl 0x71026527b0
7102c100f8  ldr x19,[x21]
7102c100fc  b 0x7102c0fd44
7102c10100  str x21,[x8]
7102c10104  cbz x21,0x7102c0e268
7102c10108  ldr x0,[x21, #0x90]
7102c1010c  ldr x8,[x0]
7102c10110  ldr x8,[x8, #0x148]
7102c10114  add x1,sp,#0xa0
7102c10118  blr x8
7102c1011c  ldr x21,[x21, #0xd8]
7102c10120  fmov s7,0x3f800000
7102c10124  cbz x21,0x7102c0e268
7102c10128  ldr x8,[sp, #0xb8]
7102c1012c  str x8,[sp, #0x168]
7102c10130  ldr x8,[sp, #0xb0]
7102c10134  str x8,[sp, #0x160]
7102c10138  ldr x8,[sp, #0xa8]
7102c1013c  str x8,[sp, #0x158]
7102c10140  ldr x8,[sp, #0xa0]
7102c10144  str x8,[sp, #0x150]
7102c10148  ldr x8,[sp, #0xd8]
7102c1014c  str x8,[sp, #0x188]
7102c10150  ldr x8,[sp, #0xd0]
7102c10154  str x8,[sp, #0x180]
7102c10158  ldr x8,[sp, #0xc8]
7102c1015c  str x8,[sp, #0x178]
7102c10160  ldr x8,[sp, #0xc0]
7102c10164  str x8,[sp, #0x170]
7102c10168  ldr x8,[x21, #0x8]
7102c1016c  ldrb w9,[x8, #0xa8]
7102c10170  cbz w9,0x7102c1018c
7102c10174  ldr x0,[x8, #0x48]
7102c10178  ldr x8,[x0]
7102c1017c  ldr x8,[x8, #0x20]
7102c10180  add x1,sp,#0x150
7102c10184  blr x8
7102c10188  fmov s7,0x3f800000
7102c1018c  mov w8,#0x1
7102c10190  strb w8,[x21, #0x20]
7102c10194  b 0x7102c0e268
7102c10198  str x21,[x23, #0x10]
7102c1019c  cbz x21,0x7102c0e2b0
7102c101a0  ldr x0,[x21, #0x90]
7102c101a4  ldr x8,[x0]
7102c101a8  ldr x8,[x8, #0x148]
7102c101ac  add x1,sp,#0xa0
7102c101b0  blr x8
7102c101b4  ldr x21,[x21, #0xd8]
7102c101b8  fmov s7,0x3f800000
7102c101bc  cbz x21,0x7102c0e2b0
7102c101c0  ldr x8,[sp, #0xb8]
7102c101c4  str x8,[sp, #0x168]
7102c101c8  ldr x8,[sp, #0xb0]
7102c101cc  str x8,[sp, #0x160]
7102c101d0  ldr x8,[sp, #0xa8]
7102c101d4  str x8,[sp, #0x158]
7102c101d8  ldr x8,[sp, #0xa0]
7102c101dc  str x8,[sp, #0x150]
7102c101e0  ldr x8,[sp, #0xd8]
7102c101e4  str x8,[sp, #0x188]
7102c101e8  ldr x8,[sp, #0xd0]
7102c101ec  str x8,[sp, #0x180]
7102c101f0  ldr x8,[sp, #0xc8]
7102c101f4  str x8,[sp, #0x178]
7102c101f8  ldr x8,[sp, #0xc0]
7102c101fc  str x8,[sp, #0x170]
7102c10200  ldr x8,[x21, #0x8]
7102c10204  ldrb w9,[x8, #0xa8]
7102c10208  cbz w9,0x7102c10224
7102c1020c  ldr x0,[x8, #0x48]
7102c10210  ldr x8,[x0]
7102c10214  ldr x8,[x8, #0x20]
7102c10218  add x1,sp,#0x150
7102c1021c  blr x8
7102c10220  fmov s7,0x3f800000
7102c10224  mov w8,#0x1
7102c10228  strb w8,[x21, #0x20]
7102c1022c  b 0x7102c0e2b0
7102c10230  str x21,[x23, #0x18]
7102c10234  cbz x21,0x7102c0e2f8
7102c10238  ldr x0,[x21, #0x90]
7102c1023c  ldr x8,[x0]
7102c10240  ldr x8,[x8, #0x148]
7102c10244  add x1,sp,#0xa0
7102c10248  blr x8
7102c1024c  ldr x21,[x21, #0xd8]
7102c10250  fmov s7,0x3f800000
7102c10254  cbz x21,0x7102c0e2f8
7102c10258  ldr x8,[sp, #0xb8]
7102c1025c  str x8,[sp, #0x168]
7102c10260  ldr x8,[sp, #0xb0]
7102c10264  str x8,[sp, #0x160]
7102c10268  ldr x8,[sp, #0xa8]
7102c1026c  str x8,[sp, #0x158]
7102c10270  ldr x8,[sp, #0xa0]
7102c10274  str x8,[sp, #0x150]
7102c10278  ldr x8,[sp, #0xd8]
7102c1027c  str x8,[sp, #0x188]
7102c10280  ldr x8,[sp, #0xd0]
7102c10284  str x8,[sp, #0x180]
7102c10288  ldr x8,[sp, #0xc8]
7102c1028c  str x8,[sp, #0x178]
7102c10290  ldr x8,[sp, #0xc0]
7102c10294  str x8,[sp, #0x170]
7102c10298  ldr x8,[x21, #0x8]
7102c1029c  ldrb w9,[x8, #0xa8]
7102c102a0  cbz w9,0x7102c102bc
7102c102a4  ldr x0,[x8, #0x48]
7102c102a8  ldr x8,[x0]
7102c102ac  ldr x8,[x8, #0x20]
7102c102b0  add x1,sp,#0x150
7102c102b4  blr x8
7102c102b8  fmov s7,0x3f800000
7102c102bc  mov w8,#0x1
7102c102c0  strb w8,[x21, #0x20]
7102c102c4  b 0x7102c0e2f8
7102c102c8  str x21,[x23, #0x20]
7102c102cc  cbz x21,0x7102c0e340
7102c102d0  ldr x0,[x21, #0x90]
7102c102d4  ldr x8,[x0]
7102c102d8  ldr x8,[x8, #0x148]
7102c102dc  add x1,sp,#0xa0
7102c102e0  blr x8
7102c102e4  ldr x21,[x21, #0xd8]
7102c102e8  fmov s7,0x3f800000
7102c102ec  cbz x21,0x7102c0e340
7102c102f0  ldr x8,[sp, #0xb8]
7102c102f4  str x8,[sp, #0x168]
7102c102f8  ldr x8,[sp, #0xb0]
7102c102fc  str x8,[sp, #0x160]
7102c10300  ldr x8,[sp, #0xa8]
7102c10304  str x8,[sp, #0x158]
7102c10308  ldr x8,[sp, #0xa0]
7102c1030c  str x8,[sp, #0x150]
7102c10310  ldr x8,[sp, #0xd8]
7102c10314  str x8,[sp, #0x188]
7102c10318  ldr x8,[sp, #0xd0]
7102c1031c  str x8,[sp, #0x180]
7102c10320  ldr x8,[sp, #0xc8]
7102c10324  str x8,[sp, #0x178]
7102c10328  ldr x8,[sp, #0xc0]
7102c1032c  str x8,[sp, #0x170]
7102c10330  ldr x8,[x21, #0x8]
7102c10334  ldrb w9,[x8, #0xa8]
7102c10338  cbz w9,0x7102c10354
7102c1033c  ldr x0,[x8, #0x48]
7102c10340  ldr x8,[x0]
7102c10344  ldr x8,[x8, #0x20]
7102c10348  add x1,sp,#0x150
7102c1034c  blr x8
7102c10350  fmov s7,0x3f800000
7102c10354  mov w8,#0x1
7102c10358  strb w8,[x21, #0x20]
7102c1035c  b 0x7102c0e340
7102c10360  add x0,x8,#0x1a8
7102c10364  bl 0x71039c1330
7102c10368  ldr x0,[sp, #0x8]
7102c1036c  bl 0x71039c1330
7102c10370  add x0,x10,#0x140
7102c10374  bl 0x71039c1330
