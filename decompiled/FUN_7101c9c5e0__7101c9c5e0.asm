// addr:      7101c9c5e0
// offset:    0x1c9c5e0
// name:      FUN_7101c9c5e0
// mangled:   
// size:      3756

7101c9c5e0  sub sp,sp,#0x1f0
7101c9c5e4  stp x28,x27,[sp, #0x190]
7101c9c5e8  stp x26,x25,[sp, #0x1a0]
7101c9c5ec  stp x24,x23,[sp, #0x1b0]
7101c9c5f0  stp x22,x21,[sp, #0x1c0]
7101c9c5f4  stp x20,x19,[sp, #0x1d0]
7101c9c5f8  stp x29,x30,[sp, #0x1e0]
7101c9c5fc  add x29,sp,#0x1e0
7101c9c600  ldr w8,[x0, #0x10c]
7101c9c604  mov x19,x0
7101c9c608  cbz w8,0x7101c9c638
7101c9c60c  ldp x0,x8,[x19, #0x128]
7101c9c610  ldr w22,[x8, #0x25c]
7101c9c614  ldr x8,[x0]
7101c9c618  ldr x8,[x8, #0x78]
7101c9c61c  mov x23,x1
7101c9c620  blr x8
7101c9c624  tbz w0,#0x0,0x7101c9c6a8
7101c9c628  ldr x8,[x19, #0x128]
7101c9c62c  ldr w8,[x8, #0x254]
7101c9c630  str w8,[x19, #0x258]
7101c9c634  b 0x7101c9c6c8
7101c9c638  ldr x0,[x19, #0x128]
7101c9c63c  ldr x8,[x0]
7101c9c640  ldr x8,[x8, #0x70]
7101c9c644  mov w1,wzr
7101c9c648  blr x8
7101c9c64c  ldr x1,[x19, #0x128]
7101c9c650  sub x0,x29,#0x70
7101c9c654  mov w2,#0x1
7101c9c658  bl 0x7103771d60
7101c9c65c  ldur x20,[x29, #-0x68]
7101c9c660  ldr x21,[x20]
7101c9c664  cbz x21,0x7101c9c7f4
7101c9c668  ldr x8,[x21]
7101c9c66c  ldr x8,[x8, #0x1f8]
7101c9c670  mov x0,x21
7101c9c674  mov w1,wzr
7101c9c678  blr x8
7101c9c67c  ldr x8,[x21]
7101c9c680  ldr x8,[x8, #0x200]
7101c9c684  mov x0,x21
7101c9c688  blr x8
7101c9c68c  tbz w0,#0x0,0x7101c9c7d8
7101c9c690  ldr x8,[x21]
7101c9c694  ldr x8,[x8, #0x210]
7101c9c698  mov x0,x21
7101c9c69c  blr x8
7101c9c6a0  eor w8,w0,#0x1
7101c9c6a4  b 0x7101c9c7dc
7101c9c6a8  add x20,x19,#0x130
7101c9c6ac  ldr x0,[x20]
7101c9c6b0  ldrb w8,[x0, #0x280]
7101c9c6b4  cbz w8,0x7101c9ca0c
7101c9c6b8  ldrb w8,[x19, #0x242]
7101c9c6bc  strb w8,[x19, #0x24c]
7101c9c6c0  mov w8,#0x1
7101c9c6c4  strb w8,[x19, #0x26c]
7101c9c6c8  ldr x8,[x19, #0x128]
7101c9c6cc  ldr w1,[x19, #0x258]
7101c9c6d0  ldr w8,[x8, #0x254]
7101c9c6d4  cmp w1,w8
7101c9c6d8  b.eq 0x7101c9c6e4
7101c9c6dc  mov x0,x19
7101c9c6e0  bl 0x7101ca24d0
7101c9c6e4  mov x0,x19
7101c9c6e8  mov w1,wzr
7101c9c6ec  bl 0x7101ca2050
7101c9c6f0  ldr x0,[x19, #0x130]
7101c9c6f4  bl 0x710376b960
7101c9c6f8  ldr x0,[x19, #0x130]
7101c9c6fc  ldr x8,[x0]
7101c9c700  ldr x8,[x8, #0x70]
7101c9c704  mov w1,wzr
7101c9c708  blr x8
7101c9c70c  ldr x1,[x19, #0x128]
7101c9c710  sub x0,x29,#0x70
7101c9c714  mov w2,#0x1
7101c9c718  bl 0x7103771d60
7101c9c71c  ldur x20,[x29, #-0x68]
7101c9c720  ldr x21,[x20]
7101c9c724  cbz x21,0x7101c9c780
7101c9c728  ldr x8,[x21]
7101c9c72c  ldr x8,[x8, #0x1f8]
7101c9c730  mov w1,#0x1
7101c9c734  mov x0,x21
7101c9c738  mov w22,#0x1
7101c9c73c  blr x8
7101c9c740  ldr x8,[x21]
7101c9c744  ldr x8,[x8, #0x200]
7101c9c748  mov x0,x21
7101c9c74c  blr x8
7101c9c750  tbz w0,#0x0,0x7101c9c768
7101c9c754  ldr x8,[x21]
7101c9c758  ldr x8,[x8, #0x210]
7101c9c75c  mov x0,x21
7101c9c760  blr x8
7101c9c764  eor w22,w0,#0x1
7101c9c768  ldr x8,[x21]
7101c9c76c  ldr x8,[x8, #0x388]
7101c9c770  and w1,w22,#0x1
7101c9c774  mov x0,x21
7101c9c778  mov w2,wzr
7101c9c77c  blr x8
7101c9c780  adrp x8,0x710523d000
7101c9c784  add x8,x8,#0x9c8
7101c9c788  stp x8,xzr,[x29, #-0x70]
7101c9c78c  cbz x20,0x7101c9c798
7101c9c790  mov x0,x20
7101c9c794  bl 0x710392eb40
7101c9c798  ldr w8,[x19, #0x268]
7101c9c79c  cbnz w8,0x7101c9ccc8
7101c9c7a0  adrp x8,0x710532f000
7101c9c7a4  ldr x8,[x8, #0x8d0]
7101c9c7a8  ldr x0,[x8, #0x8]
7101c9c7ac  ldp x8,x9,[x0, #0x40]
7101c9c7b0  ldrb w10,[x19, #0x26c]
7101c9c7b4  sub x9,x9,x8
7101c9c7b8  asr x9,x9,#0x3
7101c9c7bc  cbz w10,0x7101c9ca58
7101c9c7c0  cmp x9,#0x4
7101c9c7c4  b.cc 0x7101c9ca88
7101c9c7c8  ldr x20,[x8, #0x18]
7101c9c7cc  ldrb w8,[x0, #0x191]
7101c9c7d0  cbnz w8,0x7101c9cb10
7101c9c7d4  b 0x7101c9ca94
7101c9c7d8  mov w8,#0x1
7101c9c7dc  ldr x9,[x21]
7101c9c7e0  ldr x9,[x9, #0x388]
7101c9c7e4  and w1,w8,#0x1
7101c9c7e8  mov x0,x21
7101c9c7ec  mov w2,wzr
7101c9c7f0  blr x9
7101c9c7f4  adrp x23,0x710523d000
7101c9c7f8  add x23,x23,#0x9c8
7101c9c7fc  stp x23,xzr,[x29, #-0x70]
7101c9c800  cbz x20,0x7101c9c80c
7101c9c804  mov x0,x20
7101c9c808  bl 0x710392eb40
7101c9c80c  ldr x0,[x19, #0x130]
7101c9c810  ldr x8,[x0]
7101c9c814  ldr x8,[x8, #0x60]
7101c9c818  mov w1,#0x1
7101c9c81c  blr x8
7101c9c820  adrp x1,0x7104454000
7101c9c824  add x1,x1,#0xb2a
7101c9c828  mov x0,x19
7101c9c82c  bl 0x7101ca1ee0
7101c9c830  add x0,x19,#0x118
7101c9c834  adrp x1,0x7104338000
7101c9c838  add x1,x1,#0xd31
7101c9c83c  sub x8,x29,#0x70
7101c9c840  bl 0x7103776910
7101c9c844  ldur x20,[x29, #-0x68]
7101c9c848  ldr x0,[x20, #0x10]
7101c9c84c  cbz x0,0x7101c9c864
7101c9c850  sub x1,x29,#0x5c
7101c9c854  mov w2,wzr
7101c9c858  mov w3,wzr
7101c9c85c  stur wzr,[x29, #-0x5c]
7101c9c860  bl 0x71037a2270
7101c9c864  adrp x8,0x710523d000
7101c9c868  add x8,x8,#0x9a8
7101c9c86c  stp x8,xzr,[x29, #-0x70]
7101c9c870  cbz x20,0x7101c9c87c
7101c9c874  mov x0,x20
7101c9c878  bl 0x710392eb40
7101c9c87c  ldrb w1,[x19, #0x24e]
7101c9c880  mov x0,x19
7101c9c884  bl 0x7101c9e110
7101c9c888  mov w1,#0x1
7101c9c88c  mov x0,x19
7101c9c890  bl 0x7101ca10c0
7101c9c894  ldr x8,[x19, #0x230]
7101c9c898  ldr x9,[x19, #0x228]
7101c9c89c  sub x8,x8,x9
7101c9c8a0  lsr x24,x8,#0x2
7101c9c8a4  cmp w24,#0x1
7101c9c8a8  b.lt 0x7101c9c944
7101c9c8ac  mov w20,wzr
7101c9c8b0  ldr x1,[x19, #0x168]
7101c9c8b4  sub x0,x29,#0x70
7101c9c8b8  mov w2,w20
7101c9c8bc  bl 0x7103771d60
7101c9c8c0  ldur x21,[x29, #-0x68]
7101c9c8c4  ldr x22,[x21]
7101c9c8c8  cbz x22,0x7101c9c928
7101c9c8cc  ldr x8,[x22]
7101c9c8d0  ldr x8,[x8, #0x1f8]
7101c9c8d4  mov x0,x22
7101c9c8d8  mov w1,wzr
7101c9c8dc  blr x8
7101c9c8e0  ldr x8,[x22]
7101c9c8e4  ldr x8,[x8, #0x200]
7101c9c8e8  mov x0,x22
7101c9c8ec  blr x8
7101c9c8f0  tbz w0,#0x0,0x7101c9c90c
7101c9c8f4  ldr x8,[x22]
7101c9c8f8  ldr x8,[x8, #0x210]
7101c9c8fc  mov x0,x22
7101c9c900  blr x8
7101c9c904  eor w8,w0,#0x1
7101c9c908  b 0x7101c9c910
7101c9c90c  mov w8,#0x1
7101c9c910  ldr x9,[x22]
7101c9c914  ldr x9,[x9, #0x388]
7101c9c918  and w1,w8,#0x1
7101c9c91c  mov x0,x22
7101c9c920  mov w2,wzr
7101c9c924  blr x9
7101c9c928  stp x23,xzr,[x29, #-0x70]
7101c9c92c  cbz x21,0x7101c9c938
7101c9c930  mov x0,x21
7101c9c934  bl 0x710392eb40
7101c9c938  add w20,w20,#0x1
7101c9c93c  cmp w24,w20
7101c9c940  b.ne 0x7101c9c8b0
7101c9c944  mov w1,#0x1
7101c9c948  mov x0,x19
7101c9c94c  add x20,x19,#0x130
7101c9c950  bl 0x7101ca2050
7101c9c954  ldp x21,x23,[x19, #0x180]
7101c9c958  cmp x21,x23
7101c9c95c  b.eq 0x7101c9c980
7101c9c960  add x22,x19,#0x24c
7101c9c964  mov x0,x19
7101c9c968  mov x1,x22
7101c9c96c  mov x2,x21
7101c9c970  bl 0x7101c9eb90
7101c9c974  add x21,x21,#0x1
7101c9c978  cmp x23,x21
7101c9c97c  b.ne 0x7101c9c964
7101c9c980  ldr x0,[x20]
7101c9c984  ldr w8,[x0, #0x254]
7101c9c988  cmn w8,#0x1
7101c9c98c  b.ne 0x7101c9c9a8
7101c9c990  ldr x8,[x19, #0x180]
7101c9c994  ldrb w1,[x8]
7101c9c998  mov w2,#0x1
7101c9c99c  mov x0,x20
7101c9c9a0  bl 0x7103771a80
7101c9c9a4  ldr x0,[x19, #0x130]
7101c9c9a8  mov w8,#0xffffffff
7101c9c9ac  str w8,[x19, #0x25c]
7101c9c9b0  ldr x8,[x0]
7101c9c9b4  ldr x8,[x8, #0x70]
7101c9c9b8  mov w1,#0x1
7101c9c9bc  blr x8
7101c9c9c0  ldr w8,[x19, #0x110]
7101c9c9c4  orr w8,w8,#0x2
7101c9c9c8  add x20,x19,#0x26c
7101c9c9cc  cmp w8,#0x6
7101c9c9d0  b.eq 0x7101c9cce8
7101c9c9d4  adrp x8,0x710532f000
7101c9c9d8  ldr x8,[x8, #0x8d0]
7101c9c9dc  ldr x0,[x8, #0x8]
7101c9c9e0  ldp x8,x9,[x0, #0x40]
7101c9c9e4  ldrb w10,[x20]
7101c9c9e8  sub x9,x9,x8
7101c9c9ec  asr x9,x9,#0x3
7101c9c9f0  cbz w10,0x7101c9ca70
7101c9c9f4  cmp x9,#0x3
7101c9c9f8  b.cc 0x7101c9cb48
7101c9c9fc  ldr x19,[x8, #0x10]
7101c9ca00  ldrb w8,[x0, #0x191]
7101c9ca04  cbnz w8,0x7101c9cbc4
7101c9ca08  b 0x7101c9cb54
7101c9ca0c  ldr x8,[x0]
7101c9ca10  ldr x8,[x8, #0x78]
7101c9ca14  blr x8
7101c9ca18  tbz w0,#0x0,0x7101c9cbfc
7101c9ca1c  ldr x8,[x19, #0x178]
7101c9ca20  ldr w8,[x8, #0x25c]
7101c9ca24  cmp w8,#0xc8
7101c9ca28  b.ne 0x7101c9cdc0
7101c9ca2c  ldr w8,[x19, #0x104]
7101c9ca30  cmp w8,#0x11
7101c9ca34  b.gt 0x7101c9cce4
7101c9ca38  add w8,w8,#0x1
7101c9ca3c  cmp w8,#0x13
7101c9ca40  str w8,[x19, #0x104]
7101c9ca44  b.cs 0x7101c9d458
7101c9ca48  add x8,x19,w8, SXTW  #0x2
7101c9ca4c  orr w9,wzr,#0x6
7101c9ca50  str w9,[x8, #0xb8]
7101c9ca54  b 0x7101c9cce4
7101c9ca58  cmp x9,#0x2
7101c9ca5c  b.cc 0x7101c9cc04
7101c9ca60  ldr x20,[x8, #0x8]
7101c9ca64  ldrb w8,[x0, #0x191]
7101c9ca68  cbnz w8,0x7101c9cc8c
7101c9ca6c  b 0x7101c9cc10
7101c9ca70  cmp x9,#0x2
7101c9ca74  b.cc 0x7101c9cd0c
7101c9ca78  ldr x19,[x8, #0x8]
7101c9ca7c  ldrb w8,[x0, #0x191]
7101c9ca80  cbnz w8,0x7101c9cd88
7101c9ca84  b 0x7101c9cd18
7101c9ca88  mov x20,xzr
7101c9ca8c  ldrb w8,[x0, #0x191]
7101c9ca90  cbnz w8,0x7101c9cb10
7101c9ca94  mov w2,#0x4
7101c9ca98  mov x1,x20
7101c9ca9c  bl 0x7103313f20
7101c9caa0  tbz w0,#0x0,0x7101c9cb10
7101c9caa4  add x0,sp,#0x70
7101c9caa8  mov x1,x20
7101c9caac  add x21,sp,#0x70
7101c9cab0  bl 0x71024076d0
7101c9cab4  ldr x9,[sp, #0x80]
7101c9cab8  add x8,x21,#0x10
7101c9cabc  adrp x10,0x7104f73000
7101c9cac0  add x10,x10,#0xd50
7101c9cac4  str x10,[sp, #0x78]
7101c9cac8  cbz x9,0x7101c9ccc0
7101c9cacc  adrp x9,0x7106dd5000
7101c9cad0  ldrb w9,[x9, #0x3a8]
7101c9cad4  cmp w9,#0x1
7101c9cad8  b.ne 0x7101c9ce5c
7101c9cadc  adrp x10,0x7106dd5000
7101c9cae0  ldr w9,[sp, #0x88]
7101c9cae4  ldr w10,[x10, #0x3ac]
7101c9cae8  cmp w9,w10
7101c9caec  b.ne 0x7101c9ce5c
7101c9caf0  ldr x9,[sp, #0x80]
7101c9caf4  ldr wzr,[x9, #0x38]!
7101c9caf8  ldaxr w10,[x9]
7101c9cafc  sub w10,w10,#0x1
7101c9cb00  add x21,sp,#0x70
7101c9cb04  stlxr w11,w10,[x9]
7101c9cb08  cbnz w11,0x7101c9caf8
7101c9cb0c  b 0x7101c9ccc0
7101c9cb10  mov x9,#0x650000000000
7101c9cb14  movk x9,#0x87, LSL #48
7101c9cb18  add x21,sp,#0x70
7101c9cb1c  stp xzr,x9,[sp, #0x80]
7101c9cb20  mov x9,#-0x1
7101c9cb24  stp x9,xzr,[sp, #0x98]
7101c9cb28  adrp x9,0x7104f73000
7101c9cb2c  add x9,x9,#0xd50
7101c9cb30  add x8,x21,#0x10
7101c9cb34  strb wzr,[sp, #0x90]
7101c9cb38  str wzr,[sp, #0x70]
7101c9cb3c  str xzr,[sp, #0xa8]
7101c9cb40  str x9,[sp, #0x78]
7101c9cb44  b 0x7101c9ccc0
7101c9cb48  mov x19,xzr
7101c9cb4c  ldrb w8,[x0, #0x191]
7101c9cb50  cbnz w8,0x7101c9cbc4
7101c9cb54  mov w2,#0x4
7101c9cb58  mov x1,x19
7101c9cb5c  bl 0x7103313f20
7101c9cb60  tbz w0,#0x0,0x7101c9cbc4
7101c9cb64  sub x0,x29,#0xb0
7101c9cb68  mov x1,x19
7101c9cb6c  bl 0x71024076d0
7101c9cb70  ldur x8,[x29, #-0xa0]
7101c9cb74  adrp x9,0x7104f73000
7101c9cb78  add x9,x9,#0xd50
7101c9cb7c  stur x9,[x29, #-0xa8]
7101c9cb80  cbz x8,0x7101c9cbf0
7101c9cb84  adrp x8,0x7106dd5000
7101c9cb88  ldrb w8,[x8, #0x3a8]
7101c9cb8c  cmp w8,#0x1
7101c9cb90  b.ne 0x7101c9cbf0
7101c9cb94  adrp x9,0x7106dd5000
7101c9cb98  ldur w8,[x29, #-0x98]
7101c9cb9c  ldr w9,[x9, #0x3ac]
7101c9cba0  cmp w8,w9
7101c9cba4  b.ne 0x7101c9cbf0
7101c9cba8  ldur x8,[x29, #-0xa0]
7101c9cbac  ldr wzr,[x8, #0x38]!
7101c9cbb0  ldaxr w9,[x8]
7101c9cbb4  sub w9,w9,#0x1
7101c9cbb8  stlxr w10,w9,[x8]
7101c9cbbc  cbnz w10,0x7101c9cbb0
7101c9cbc0  b 0x7101c9cbf0
7101c9cbc4  mov x8,#0x650000000000
7101c9cbc8  movk x8,#0x87, LSL #48
7101c9cbcc  sturb wzr,[x29, #-0x90]
7101c9cbd0  stp xzr,x8,[x29, #-0xa0]
7101c9cbd4  mov x8,#-0x1
7101c9cbd8  stp x8,xzr,[x29, #-0x88]
7101c9cbdc  adrp x8,0x7104f73000
7101c9cbe0  add x8,x8,#0xd50
7101c9cbe4  stur wzr,[x29, #-0xb0]
7101c9cbe8  stur xzr,[x29, #-0x78]
7101c9cbec  stur x8,[x29, #-0xa8]
7101c9cbf0  stur xzr,[x29, #-0xa0]
7101c9cbf4  sturb wzr,[x29, #-0x90]
7101c9cbf8  b 0x7101c9cce8
7101c9cbfc  mov w8,#0x1
7101c9cc00  b 0x7101c9c630
7101c9cc04  mov x20,xzr
7101c9cc08  ldrb w8,[x0, #0x191]
7101c9cc0c  cbnz w8,0x7101c9cc8c
7101c9cc10  mov w2,#0x4
7101c9cc14  mov x1,x20
7101c9cc18  bl 0x7103313f20
7101c9cc1c  tbz w0,#0x0,0x7101c9cc8c
7101c9cc20  add x0,sp,#0x30
7101c9cc24  mov x1,x20
7101c9cc28  add x21,sp,#0x30
7101c9cc2c  bl 0x71024076d0
7101c9cc30  ldr x9,[sp, #0x40]
7101c9cc34  add x8,x21,#0x10
7101c9cc38  adrp x10,0x7104f73000
7101c9cc3c  add x10,x10,#0xd50
7101c9cc40  str x10,[sp, #0x38]
7101c9cc44  cbz x9,0x7101c9ccc0
7101c9cc48  adrp x9,0x7106dd5000
7101c9cc4c  ldrb w9,[x9, #0x3a8]
7101c9cc50  cmp w9,#0x1
7101c9cc54  b.ne 0x7101c9cf80
7101c9cc58  adrp x10,0x7106dd5000
7101c9cc5c  ldr w9,[sp, #0x48]
7101c9cc60  ldr w10,[x10, #0x3ac]
7101c9cc64  cmp w9,w10
7101c9cc68  b.ne 0x7101c9cf80
7101c9cc6c  ldr x9,[sp, #0x40]
7101c9cc70  ldr wzr,[x9, #0x38]!
7101c9cc74  ldaxr w10,[x9]
7101c9cc78  sub w10,w10,#0x1
7101c9cc7c  add x21,sp,#0x30
7101c9cc80  stlxr w11,w10,[x9]
7101c9cc84  cbnz w11,0x7101c9cc74
7101c9cc88  b 0x7101c9ccc0
7101c9cc8c  mov x9,#0x650000000000
7101c9cc90  movk x9,#0x87, LSL #48
7101c9cc94  add x21,sp,#0x30
7101c9cc98  stp xzr,x9,[sp, #0x40]
7101c9cc9c  mov x9,#-0x1
7101c9cca0  stp x9,xzr,[sp, #0x58]
7101c9cca4  adrp x9,0x7104f73000
7101c9cca8  add x9,x9,#0xd50
7101c9ccac  add x8,x21,#0x10
7101c9ccb0  strb wzr,[sp, #0x50]
7101c9ccb4  str wzr,[sp, #0x30]
7101c9ccb8  str xzr,[sp, #0x68]
7101c9ccbc  str x9,[sp, #0x38]
7101c9ccc0  str xzr,[x8]
7101c9ccc4  strb wzr,[x21, #0x20]
7101c9ccc8  mov w1,#0x1
7101c9cccc  mov x0,x19
7101c9ccd0  bl 0x7101ca2610
7101c9ccd4  ldr w8,[x19, #0x104]
7101c9ccd8  subs w8,w8,#0x1
7101c9ccdc  b.lt 0x7101c9cce4
7101c9cce0  str w8,[x19, #0x104]
7101c9cce4  add x20,x19,#0x26c
7101c9cce8  strb wzr,[x20]
7101c9ccec  ldp x29,x30,[sp, #0x1e0]
7101c9ccf0  ldp x20,x19,[sp, #0x1d0]
7101c9ccf4  ldp x22,x21,[sp, #0x1c0]
7101c9ccf8  ldp x24,x23,[sp, #0x1b0]
7101c9ccfc  ldp x26,x25,[sp, #0x1a0]
7101c9cd00  ldp x28,x27,[sp, #0x190]
7101c9cd04  add sp,sp,#0x1f0
7101c9cd08  ret
7101c9cd0c  mov x19,xzr
7101c9cd10  ldrb w8,[x0, #0x191]
7101c9cd14  cbnz w8,0x7101c9cd88
7101c9cd18  mov w2,#0x4
7101c9cd1c  mov x1,x19
7101c9cd20  bl 0x7103313f20
7101c9cd24  tbz w0,#0x0,0x7101c9cd88
7101c9cd28  add x0,sp,#0xf0
7101c9cd2c  mov x1,x19
7101c9cd30  bl 0x71024076d0
7101c9cd34  ldr x8,[sp, #0x100]
7101c9cd38  adrp x9,0x7104f73000
7101c9cd3c  add x9,x9,#0xd50
7101c9cd40  str x9,[sp, #0xf8]
7101c9cd44  cbz x8,0x7101c9cdb4
7101c9cd48  adrp x8,0x7106dd5000
7101c9cd4c  ldrb w8,[x8, #0x3a8]
7101c9cd50  cmp w8,#0x1
7101c9cd54  b.ne 0x7101c9cdb4
7101c9cd58  adrp x9,0x7106dd5000
7101c9cd5c  ldr w8,[sp, #0x108]
7101c9cd60  ldr w9,[x9, #0x3ac]
7101c9cd64  cmp w8,w9
7101c9cd68  b.ne 0x7101c9cdb4
7101c9cd6c  ldr x8,[sp, #0x100]
7101c9cd70  ldr wzr,[x8, #0x38]!
7101c9cd74  ldaxr w9,[x8]
7101c9cd78  sub w9,w9,#0x1
7101c9cd7c  stlxr w10,w9,[x8]
7101c9cd80  cbnz w10,0x7101c9cd74
7101c9cd84  b 0x7101c9cdb4
7101c9cd88  mov x8,#0x650000000000
7101c9cd8c  movk x8,#0x87, LSL #48
7101c9cd90  strb wzr,[sp, #0x110]
7101c9cd94  stp xzr,x8,[sp, #0x100]
7101c9cd98  mov x8,#-0x1
7101c9cd9c  stp x8,xzr,[sp, #0x118]
7101c9cda0  adrp x8,0x7104f73000
7101c9cda4  add x8,x8,#0xd50
7101c9cda8  str wzr,[sp, #0xf0]
7101c9cdac  str xzr,[sp, #0x128]
7101c9cdb0  str x8,[sp, #0xf8]
7101c9cdb4  str xzr,[sp, #0x100]
7101c9cdb8  strb wzr,[sp, #0x110]
7101c9cdbc  b 0x7101c9cce8
7101c9cdc0  cmp w22,#0x6
7101c9cdc4  b.eq 0x7101c9ce64
7101c9cdc8  cmp w22,#0x64
7101c9cdcc  b.ne 0x7101c9cf04
7101c9cdd0  mov w8,#0x1
7101c9cdd4  strb w8,[x19, #0x24c]
7101c9cdd8  ldrb w8,[x19, #0x242]
7101c9cddc  cmp w8,#0x1
7101c9cde0  b.ne 0x7101c9cf48
7101c9cde4  ldrb w8,[x19, #0x243]
7101c9cde8  ldrb w9,[x19, #0x24d]
7101c9cdec  cmp w8,w9
7101c9cdf0  b.ne 0x7101c9cf48
7101c9cdf4  ldrb w8,[x19, #0x244]
7101c9cdf8  ldrb w9,[x19, #0x24e]
7101c9cdfc  cmp w8,w9
7101c9ce00  b.ne 0x7101c9cf48
7101c9ce04  ldrb w8,[x19, #0x245]
7101c9ce08  ldrb w9,[x19, #0x24f]
7101c9ce0c  cmp w8,w9
7101c9ce10  b.ne 0x7101c9cf48
7101c9ce14  ldrb w8,[x19, #0x246]
7101c9ce18  ldrb w9,[x19, #0x250]
7101c9ce1c  cmp w8,w9
7101c9ce20  b.ne 0x7101c9cf48
7101c9ce24  ldrb w8,[x19, #0x247]
7101c9ce28  ldrb w9,[x19, #0x251]
7101c9ce2c  cmp w8,w9
7101c9ce30  b.ne 0x7101c9cf48
7101c9ce34  ldrb w8,[x19, #0x248]
7101c9ce38  ldrb w9,[x19, #0x252]
7101c9ce3c  cmp w8,w9
7101c9ce40  b.ne 0x7101c9cf48
7101c9ce44  ldrh w8,[x19, #0x24a]
7101c9ce48  ldrh w9,[x19, #0x254]
7101c9ce4c  cmp w8,w9
7101c9ce50  b.ne 0x7101c9cf48
7101c9ce54  mov w8,#0x1
7101c9ce58  b 0x7101c9cf78
7101c9ce5c  add x21,sp,#0x70
7101c9ce60  b 0x7101c9ccc0
7101c9ce64  ldr w8,[x19, #0x104]
7101c9ce68  cmp w8,#0x11
7101c9ce6c  b.gt 0x7101c9ce8c
7101c9ce70  add w8,w8,#0x1
7101c9ce74  cmp w8,#0x13
7101c9ce78  str w8,[x19, #0x104]
7101c9ce7c  b.cs 0x7101c9d458
7101c9ce80  add x8,x19,w8, SXTW  #0x2
7101c9ce84  mov w9,#0x4
7101c9ce88  str w9,[x8, #0xb8]
7101c9ce8c  ldr x0,[x19, #0x130]
7101c9ce90  ldr x8,[x0]
7101c9ce94  ldr x8,[x8, #0x70]
7101c9ce98  mov w1,wzr
7101c9ce9c  blr x8
7101c9cea0  ldr x0,[x19, #0x130]
7101c9cea4  ldr x8,[x0]
7101c9cea8  ldr x8,[x8, #0x60]
7101c9ceac  mov w1,wzr
7101c9ceb0  blr x8
7101c9ceb4  mov x0,x19
7101c9ceb8  mov w1,wzr
7101c9cebc  bl 0x7101ca10c0
7101c9cec0  ldr x0,[x19, #0x120]
7101c9cec4  fmov s0,0x3f800000
7101c9cec8  adrp x1,0x7104443000
7101c9cecc  add x1,x1,#0x867
7101c9ced0  bl 0x7103778300
7101c9ced4  adrp x8,0x710532f000
7101c9ced8  ldr x8,[x8, #0x8d0]
7101c9cedc  ldr x0,[x8, #0x8]
7101c9cee0  ldp x8,x9,[x0, #0x40]
7101c9cee4  sub x9,x9,x8
7101c9cee8  asr x9,x9,#0x3
7101c9ceec  cmp x9,#0x6
7101c9cef0  b.cc 0x7101c9cf88
7101c9cef4  ldr x20,[x8, #0x28]
7101c9cef8  ldrb w8,[x0, #0x191]
7101c9cefc  cbnz w8,0x7101c9d004
7101c9cf00  b 0x7101c9cf94
7101c9cf04  ldr x8,[x20]
7101c9cf08  ldr w21,[x8, #0x254]
7101c9cf0c  cmp w21,#0x64
7101c9cf10  b.eq 0x7101c9d05c
7101c9cf14  ldr x8,[x23, #0x8]
7101c9cf18  ldrb w9,[x8, #0x4aa]
7101c9cf1c  cbz w9,0x7101c9cf30
7101c9cf20  ldrb w9,[x8, #0x1b0]
7101c9cf24  tbnz w9,#0x3,0x7101c9d03c
7101c9cf28  ldrb w8,[x8, #0x1b4]
7101c9cf2c  tbnz w8,#0x3,0x7101c9d04c
7101c9cf30  cmp w22,w21
7101c9cf34  b.ne 0x7101c9d05c
7101c9cf38  mov w2,#0x1
7101c9cf3c  mov x0,x19
7101c9cf40  mov w1,w22
7101c9cf44  b 0x7101c9d058
7101c9cf48  adrp x8,0x7105314000
7101c9cf4c  add x8,x8,#0x4d8
7101c9cf50  ldarb w8,[x8]
7101c9cf54  add x20,x19,#0x24c
7101c9cf58  tbz w8,#0x0,0x7101c9d418
7101c9cf5c  ldr x8,[x20]
7101c9cf60  ldrh w9,[x20, #0x8]
7101c9cf64  adrp x10,0x7105306000
7101c9cf68  add x10,x10,#0x970
7101c9cf6c  strh w9,[x10, #0x8]
7101c9cf70  str x8,[x10]
7101c9cf74  mov w8,#0x2
7101c9cf78  str w8,[x19, #0x268]
7101c9cf7c  b 0x7101c9c6c8
7101c9cf80  add x21,sp,#0x30
7101c9cf84  b 0x7101c9ccc0
7101c9cf88  mov x20,xzr
7101c9cf8c  ldrb w8,[x0, #0x191]
7101c9cf90  cbnz w8,0x7101c9d004
7101c9cf94  mov w2,#0x4
7101c9cf98  mov x1,x20
7101c9cf9c  bl 0x7103313f20
7101c9cfa0  tbz w0,#0x0,0x7101c9d004
7101c9cfa4  add x0,sp,#0xb0
7101c9cfa8  mov x1,x20
7101c9cfac  bl 0x71024076d0
7101c9cfb0  ldr x8,[sp, #0xc0]
7101c9cfb4  adrp x9,0x7104f73000
7101c9cfb8  add x9,x9,#0xd50
7101c9cfbc  str x9,[sp, #0xb8]
7101c9cfc0  cbz x8,0x7101c9d030
7101c9cfc4  adrp x8,0x7106dd5000
7101c9cfc8  ldrb w8,[x8, #0x3a8]
7101c9cfcc  cmp w8,#0x1
7101c9cfd0  b.ne 0x7101c9d030
7101c9cfd4  adrp x9,0x7106dd5000
7101c9cfd8  ldr w8,[sp, #0xc8]
7101c9cfdc  ldr w9,[x9, #0x3ac]
7101c9cfe0  cmp w8,w9
7101c9cfe4  b.ne 0x7101c9d030
7101c9cfe8  ldr x8,[sp, #0xc0]
7101c9cfec  ldr wzr,[x8, #0x38]!
7101c9cff0  ldaxr w9,[x8]
7101c9cff4  sub w9,w9,#0x1
7101c9cff8  stlxr w10,w9,[x8]
7101c9cffc  cbnz w10,0x7101c9cff0
7101c9d000  b 0x7101c9d030
7101c9d004  mov x8,#0x650000000000
7101c9d008  movk x8,#0x87, LSL #48
7101c9d00c  strb wzr,[sp, #0xd0]
7101c9d010  stp xzr,x8,[sp, #0xc0]
7101c9d014  mov x8,#-0x1
7101c9d018  stp x8,xzr,[sp, #0xd8]
7101c9d01c  adrp x8,0x7104f73000
7101c9d020  add x8,x8,#0xd50
7101c9d024  str wzr,[sp, #0xb0]
7101c9d028  str xzr,[sp, #0xe8]
7101c9d02c  str x8,[sp, #0xb8]
7101c9d030  str xzr,[sp, #0xc0]
7101c9d034  strb wzr,[sp, #0xd0]
7101c9d038  b 0x7101c9cce4
7101c9d03c  mov x0,x19
7101c9d040  mov w1,w21
7101c9d044  mov w2,wzr
7101c9d048  b 0x7101c9d058
7101c9d04c  mov w2,#0x1
7101c9d050  mov x0,x19
7101c9d054  mov w1,w21
7101c9d058  bl 0x7101ca2300
7101c9d05c  ldr x8,[x20]
7101c9d060  add x1,x8,#0x1f8
7101c9d064  sub x0,x29,#0x70
7101c9d068  bl 0x7103776390
7101c9d06c  ldur x8,[x29, #-0x68]
7101c9d070  ldr x9,[x8, #0x18]
7101c9d074  ldr x9,[x9]
7101c9d078  cbz x9,0x7101c9d098
7101c9d07c  ldrb w9,[x9, #0x58]
7101c9d080  cmp w21,#0x64
7101c9d084  cset w10,ne
7101c9d088  and w9,w9,#0x1
7101c9d08c  cmp w10,w9
7101c9d090  b.ne 0x7101c9d0a0
7101c9d094  b 0x7101c9d0c8
7101c9d098  cmp w21,#0x64
7101c9d09c  b.eq 0x7101c9d0c8
7101c9d0a0  ldr x8,[x8, #0x8]
7101c9d0a4  cbz x8,0x7101c9d0c8
7101c9d0a8  ldr x8,[x8, #0x18]
7101c9d0ac  cbz x8,0x7101c9d0c8
7101c9d0b0  ldrb w10,[x8, #0x58]
7101c9d0b4  cmp w21,#0x64
7101c9d0b8  cset w9,ne
7101c9d0bc  and w10,w10,#0xfe
7101c9d0c0  orr w9,w10,w9
7101c9d0c4  strb w9,[x8, #0x58]
7101c9d0c8  ldp x23,x24,[x19, #0x180]
7101c9d0cc  cmp x23,x24
7101c9d0d0  b.eq 0x7101c9d3b4
7101c9d0d4  add x8,x19,#0x198
7101c9d0d8  str x8,[sp, #0x28]
7101c9d0dc  add x8,x19,#0x1b0
7101c9d0e0  str x8,[sp, #0x20]
7101c9d0e4  add x8,x19,#0x1c8
7101c9d0e8  str x8,[sp, #0x18]
7101c9d0ec  add x8,x19,#0x1e0
7101c9d0f0  str x8,[sp, #0x10]
7101c9d0f4  add x8,x19,#0x1f8
7101c9d0f8  add x22,x19,#0x24c
7101c9d0fc  adrp x25,0x71044f9000
7101c9d100  add x25,x25,#0xa6c
7101c9d104  adrp x26,0x71044f9000
7101c9d108  add x26,x26,#0xa4c
7101c9d10c  str x8,[sp, #0x8]
7101c9d110  add x8,x19,#0x210
7101c9d114  str x8,[sp]
7101c9d118  ldrb w28,[x23]
7101c9d11c  cmp x28,#0x8
7101c9d120  sturb w28,[x29, #-0x5c]
7101c9d124  b.cs 0x7101c9d458
7101c9d128  add x8,x19,x28, LSL #0x3
7101c9d12c  ldr x8,[x8, #0x138]
7101c9d130  ldrsw x8,[x8, #0x254]
7101c9d134  tbnz w8,#0x1f,0x7101c9d3a8
7101c9d138  cmp w28,#0x7
7101c9d13c  b.hi 0x7101c9d15c
7101c9d140  ldrsw x10,[x26, x28, LSL #0x2]
7101c9d144  add x10,x10,x26
7101c9d148  mov w9,#0x2
7101c9d14c  br x10
7101c9d150  ldr w9,[x19, #0x1a0]
7101c9d154  ldr w10,[x19, #0x198]
7101c9d158  b 0x7101c9d19c
7101c9d15c  mov w9,wzr
7101c9d160  b 0x7101c9d1a0
7101c9d164  ldr w9,[x19, #0x1d0]
7101c9d168  ldr w10,[x19, #0x1c8]
7101c9d16c  b 0x7101c9d19c
7101c9d170  ldr w9,[x19, #0x218]
7101c9d174  ldr w10,[x19, #0x210]
7101c9d178  b 0x7101c9d19c
7101c9d17c  ldr w9,[x19, #0x1b8]
7101c9d180  ldr w10,[x19, #0x1b0]
7101c9d184  b 0x7101c9d19c
7101c9d188  ldr w9,[x19, #0x200]
7101c9d18c  ldr w10,[x19, #0x1f8]
7101c9d190  b 0x7101c9d19c
7101c9d194  ldr w9,[x19, #0x1e8]
7101c9d198  ldr w10,[x19, #0x1e0]
7101c9d19c  sub w9,w9,w10
7101c9d1a0  cmp w9,w8
7101c9d1a4  ccmp w28,#0x7,#0x2,gt
7101c9d1a8  b.hi 0x7101c9d3a8
7101c9d1ac  ldrsw x9,[x25, x28, LSL #0x2]
7101c9d1b0  add x9,x9,x25
7101c9d1b4  br x9
7101c9d1b8  ldp x9,x10,[x19, #0x198]
7101c9d1bc  sub x10,x10,x9
7101c9d1c0  cmp x10,x8
7101c9d1c4  b.ls 0x7101c9d45c
7101c9d1c8  ldrb w10,[x19, #0x24d]
7101c9d1cc  ldrb w8,[x9, x8, LSL ]
7101c9d1d0  cmp w10,w8
7101c9d1d4  b.eq 0x7101c9d3a8
7101c9d1d8  strb w8,[x19, #0x24d]
7101c9d1dc  b 0x7101c9d35c
7101c9d1e0  ldr x10,[x19, #0x218]
7101c9d1e4  ldr x9,[x19, #0x210]
7101c9d1e8  sub x10,x10,x9
7101c9d1ec  cmp x10,x8
7101c9d1f0  b.ls 0x7101c9d464
7101c9d1f4  ldrb w10,[x19, #0x252]
7101c9d1f8  ldrb w8,[x9, x8, LSL ]
7101c9d1fc  cmp w10,w8
7101c9d200  b.eq 0x7101c9d3a8
7101c9d204  strb w8,[x19, #0x252]
7101c9d208  b 0x7101c9d35c
7101c9d20c  ldp x9,x10,[x19, #0x1b0]
7101c9d210  sub x10,x10,x9
7101c9d214  cmp x10,x8
7101c9d218  b.ls 0x7101c9d46c
7101c9d21c  ldrb w10,[x19, #0x24e]
7101c9d220  ldrb w1,[x9, x8, LSL ]
7101c9d224  cmp w10,w1
7101c9d228  b.eq 0x7101c9d3a8
7101c9d22c  mov x0,x19
7101c9d230  strb w1,[x19, #0x24e]
7101c9d234  bl 0x7101c9e110
7101c9d238  mov w1,#0x1
7101c9d23c  mov x0,x19
7101c9d240  bl 0x7101ca10c0
7101c9d244  mov w2,#0x4
7101c9d248  mov x0,x19
7101c9d24c  mov x1,x22
7101c9d250  bl 0x7101c9ef10
7101c9d254  cmn w0,#0x1
7101c9d258  b.ne 0x7101c9d28c
7101c9d25c  ldp x9,x10,[x19, #0x1c8]
7101c9d260  ldrb w8,[x19, #0x24f]
7101c9d264  ldrb w11,[x9]
7101c9d268  ldrb w12,[x10, #-0x1]!
7101c9d26c  subs w11,w8,w11
7101c9d270  cneg w11,w11,mi
7101c9d274  subs w8,w8,w12
7101c9d278  cneg w8,w8,mi
7101c9d27c  cmp w11,w8
7101c9d280  csel x8,x9,x10,lt
7101c9d284  ldrb w8,[x8]
7101c9d288  strb w8,[x19, #0x24f]
7101c9d28c  ldp x21,x27,[x19, #0x180]
7101c9d290  cmp x21,x27
7101c9d294  b.eq 0x7101c9d36c
7101c9d298  mov x0,x19
7101c9d29c  mov x1,x22
7101c9d2a0  mov x2,x21
7101c9d2a4  bl 0x7101c9eb90
7101c9d2a8  add x21,x21,#0x1
7101c9d2ac  cmp x27,x21
7101c9d2b0  b.ne 0x7101c9d298
7101c9d2b4  b 0x7101c9d36c
7101c9d2b8  ldrh w9,[x19, #0x254]
7101c9d2bc  cmp w8,#0x0
7101c9d2c0  cset w10,ne
7101c9d2c4  and w11,w9,#0x100
7101c9d2c8  cmp w10,w11, LSR #0x8
7101c9d2cc  b.eq 0x7101c9d3a8
7101c9d2d0  and w10,w9,#0xfffffeff
7101c9d2d4  orr w9,w9,#0x100
7101c9d2d8  cmp w8,#0x0
7101c9d2dc  csel w8,w9,w10,ne
7101c9d2e0  strh w8,[x19, #0x254]
7101c9d2e4  b 0x7101c9d35c
7101c9d2e8  ldp x9,x10,[x19, #0x1f8]
7101c9d2ec  sub x10,x10,x9
7101c9d2f0  cmp x10,x8
7101c9d2f4  b.ls 0x7101c9d474
7101c9d2f8  ldrb w10,[x19, #0x251]
7101c9d2fc  ldrb w8,[x9, x8, LSL ]
7101c9d300  cmp w10,w8
7101c9d304  b.eq 0x7101c9d3a8
7101c9d308  strb w8,[x19, #0x251]
7101c9d30c  b 0x7101c9d35c
7101c9d310  ldp x9,x10,[x19, #0x1e0]
7101c9d314  sub x10,x10,x9
7101c9d318  cmp x10,x8
7101c9d31c  b.ls 0x7101c9d47c
7101c9d320  ldrb w10,[x19, #0x250]
7101c9d324  ldrb w8,[x9, x8, LSL ]
7101c9d328  cmp w10,w8
7101c9d32c  b.eq 0x7101c9d3a8
7101c9d330  strb w8,[x19, #0x250]
7101c9d334  b 0x7101c9d35c
7101c9d338  ldp x9,x10,[x19, #0x1c8]
7101c9d33c  sub x10,x10,x9
7101c9d340  cmp x10,x8
7101c9d344  b.ls 0x7101c9d484
7101c9d348  ldrb w10,[x19, #0x24f]
7101c9d34c  ldrb w8,[x9, x8, LSL ]
7101c9d350  cmp w10,w8
7101c9d354  b.eq 0x7101c9d3a8
7101c9d358  strb w8,[x19, #0x24f]
7101c9d35c  sub x2,x29,#0x5c
7101c9d360  mov x0,x19
7101c9d364  mov x1,x22
7101c9d368  bl 0x7101c9eb90
7101c9d36c  ldr x8,[x20]
7101c9d370  ldr w8,[x8, #0x254]
7101c9d374  cmp w8,w28
7101c9d378  b.eq 0x7101c9d38c
7101c9d37c  mov x0,x20
7101c9d380  mov w1,w28
7101c9d384  mov w2,wzr
7101c9d388  bl 0x7103771a80
7101c9d38c  sub x2,x29,#0x5c
7101c9d390  mov x0,x19
7101c9d394  mov x1,x22
7101c9d398  bl 0x7101c9ed20
7101c9d39c  mov w1,#0x1
7101c9d3a0  mov x0,x19
7101c9d3a4  bl 0x7101ca2050
7101c9d3a8  add x23,x23,#0x1
7101c9d3ac  cmp x23,x24
7101c9d3b0  b.ne 0x7101c9d118
7101c9d3b4  ldr x8,[x19, #0x130]
7101c9d3b8  ldr w8,[x8, #0x254]
7101c9d3bc  ldr w9,[x19, #0x25c]
7101c9d3c0  cmp w8,w9
7101c9d3c4  b.eq 0x7101c9d3e0
7101c9d3c8  add x1,x19,#0x24c
7101c9d3cc  sub x2,x29,#0x5c
7101c9d3d0  mov x0,x19
7101c9d3d4  str w8,[x19, #0x25c]
7101c9d3d8  sturb w8,[x29, #-0x5c]
7101c9d3dc  bl 0x7101c9ed20
7101c9d3e0  ldur x20,[x29, #-0x68]
7101c9d3e4  adrp x8,0x710523d000
7101c9d3e8  add x8,x8,#0x988
7101c9d3ec  stp x8,xzr,[x29, #-0x70]
7101c9d3f0  cbz x20,0x7101c9cce4
7101c9d3f4  ldr x0,[x20, #0x18]
7101c9d3f8  adrp x8,0x710523d000
7101c9d3fc  add x8,x8,#0x9a8
7101c9d400  stp x8,xzr,[x20, #0x10]
7101c9d404  cbz x0,0x7101c9d40c
7101c9d408  bl 0x710392eb40
7101c9d40c  mov x0,x20
7101c9d410  bl 0x710392eb40
7101c9d414  b 0x7101c9cce4
7101c9d418  adrp x0,0x7105314000
7101c9d41c  add x0,x0,#0x4d8
7101c9d420  bl 0x71039c06b0
7101c9d424  cbz w0,0x7101c9cf5c
7101c9d428  bl 0x7101764000
7101c9d42c  adrp x0,0x7101763000
7101c9d430  add x0,x0,#0xc40
7101c9d434  adrp x1,0x71052c5000
7101c9d438  add x1,x1,#0x180
7101c9d43c  adrp x2,0x7104f17000
7101c9d440  add x2,x2,#0x0
7101c9d444  bl 0x71000001c0
7101c9d448  adrp x0,0x7105314000
7101c9d44c  add x0,x0,#0x4d8
7101c9d450  bl 0x71039c06c0
7101c9d454  b 0x7101c9cf5c
7101c9d458  bl 0x71039c2650
7101c9d45c  ldr x0,[sp, #0x28]
7101c9d460  bl 0x71039c1330
7101c9d464  ldr x0,[sp]
7101c9d468  bl 0x71039c1330
7101c9d46c  ldr x0,[sp, #0x20]
7101c9d470  bl 0x71039c1330
7101c9d474  ldr x0,[sp, #0x8]
7101c9d478  bl 0x71039c1330
7101c9d47c  ldr x0,[sp, #0x10]
7101c9d480  bl 0x71039c1330
7101c9d484  ldr x0,[sp, #0x18]
7101c9d488  bl 0x71039c1330
