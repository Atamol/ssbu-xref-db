// addr:      7101d8c730
// offset:    0x1d8c730
// name:      FUN_7101d8c730
// mangled:   
// size:      1640

7101d8c730  sub sp,sp,#0xc0
7101d8c734  str x25,[sp, #0x70]
7101d8c738  stp x24,x23,[sp, #0x80]
7101d8c73c  stp x22,x21,[sp, #0x90]
7101d8c740  stp x20,x19,[sp, #0xa0]
7101d8c744  stp x29,x30,[sp, #0xb0]
7101d8c748  add x29,sp,#0xb0
7101d8c74c  ldrsh w8,[x0, #0x15c]
7101d8c750  mov w22,w1
7101d8c754  mov x20,x0
7101d8c758  mov w21,wzr
7101d8c75c  adrp x24,0x710532f000
7101d8c760  cmn w8,#0x1
7101d8c764  b.eq 0x7101d8c7fc
7101d8c768  cmp w8,#0x7cf
7101d8c76c  b.gt 0x7101d8c7fc
7101d8c770  ldr x9,[x24, #0x730]
7101d8c774  ldr x9,[x9, #0x8]
7101d8c778  ldr x10,[x9, #0x1d8]
7101d8c77c  sxtw x8,w8
7101d8c780  add x8,x10,x8, LSL #0x1
7101d8c784  orr x11,xzr,#-0x3333333333333334
7101d8c788  ldp x9,x10,[x10, #0x20]
7101d8c78c  sub x10,x10,x9
7101d8c790  asr x10,x10,#0x6
7101d8c794  movk x11,#0xcccd
7101d8c798  mul x10,x10,x11
7101d8c79c  ldrh w8,[x8, #0x60]
7101d8c7a0  cmp w10,w8
7101d8c7a4  b.ls 0x7101d8c7f8
7101d8c7a8  mov w11,#0x140
7101d8c7ac  madd x9,x8,x11,x9
7101d8c7b0  adrp x11,0x7105182000
7101d8c7b4  add x11,x11,#0xb08
7101d8c7b8  cmp x10,x8
7101d8c7bc  csel x8,x9,x11,hi
7101d8c7c0  ldrb w9,[x8, #0x5e]
7101d8c7c4  cbz w9,0x7101d8c7d0
7101d8c7c8  mov w21,#0x4
7101d8c7cc  b 0x7101d8c7fc
7101d8c7d0  ldrb w8,[x8, #0x6c]
7101d8c7d4  sub w8,w8,#0x1
7101d8c7d8  cmp w8,#0x2
7101d8c7dc  b.hi 0x7101d8c7f8
7101d8c7e0  and x8,x8,#0xff
7101d8c7e4  lsl x8,x8,#0x3
7101d8c7e8  mov w9,#0x301
7101d8c7ec  movk w9,#0x2, LSL #16
7101d8c7f0  lsr w21,w9,w8
7101d8c7f4  b 0x7101d8c7fc
7101d8c7f8  mov w21,wzr
7101d8c7fc  add x19,x20,#0x110
7101d8c800  adrp x1,0x710438d000
7101d8c804  add x1,x1,#0x1e
7101d8c808  sub x8,x29,#0x50
7101d8c80c  mov x0,x19
7101d8c810  bl 0x7103776640
7101d8c814  ldr w8,[x20, #0x158]
7101d8c818  cmp w8,#0x9
7101d8c81c  b.hi 0x7101d8c878
7101d8c820  mov w9,#0x1
7101d8c824  lsl w8,w9,w8
7101d8c828  mov w9,#0x2e2
7101d8c82c  tst w8,w9
7101d8c830  b.eq 0x7101d8c878
7101d8c834  ldur x23,[x29, #-0x48]
7101d8c838  ldr x0,[x23, #0x8]
7101d8c83c  cbz x0,0x7101d8c860
7101d8c840  adrp x1,0x710436c000
7101d8c844  add x1,x1,#0x918
7101d8c848  bl 0x71037964b0
7101d8c84c  cbz x0,0x7101d8c860
7101d8c850  ldr x8,[x0]
7101d8c854  ldr x8,[x8, #0x130]
7101d8c858  blr x8
7101d8c85c  tbnz w0,#0x0,0x7101d8c8ac
7101d8c860  fmov s0,0x3f800000
7101d8c864  adrp x1,0x710436c000
7101d8c868  add x1,x1,#0x918
7101d8c86c  mov x0,x23
7101d8c870  bl 0x7103778300
7101d8c874  b 0x7101d8c8ac
7101d8c878  ldrb w8,[x20, #0x164]
7101d8c87c  cmp w8,w21, UXTB 
7101d8c880  b.eq 0x7101d8c8a8
7101d8c884  add x0,sp,#0x18
7101d8c888  mov w1,w21
7101d8c88c  mov w2,wzr
7101d8c890  add x23,sp,#0x18
7101d8c894  bl 0x710339dde0
7101d8c898  ldur x0,[x29, #-0x48]
7101d8c89c  fmov s0,0x3f800000
7101d8c8a0  add x1,x23,#0x8
7101d8c8a4  bl 0x7103778300
7101d8c8a8  strb w21,[x20, #0x164]
7101d8c8ac  adrp x1,0x71042b4000
7101d8c8b0  add x1,x1,#0x735
7101d8c8b4  add x8,sp,#0x18
7101d8c8b8  sub x0,x29,#0x50
7101d8c8bc  tbz w22,#0x0,0x7101d8c9d8
7101d8c8c0  bl 0x7103776910
7101d8c8c4  ldr x22,[sp, #0x20]
7101d8c8c8  ldr x0,[x22]
7101d8c8cc  tst w21,#0xff
7101d8c8d0  cset w1,eq
7101d8c8d4  bl 0x710377aa20
7101d8c8d8  adrp x23,0x710523d000
7101d8c8dc  add x23,x23,#0x9a8
7101d8c8e0  stp x23,xzr,[sp, #0x18]
7101d8c8e4  cbz x22,0x7101d8c8f0
7101d8c8e8  mov x0,x22
7101d8c8ec  bl 0x710392eb40
7101d8c8f0  adrp x1,0x71042f8000
7101d8c8f4  add x1,x1,#0x6e1
7101d8c8f8  add x8,sp,#0x18
7101d8c8fc  sub x0,x29,#0x50
7101d8c900  bl 0x7103776910
7101d8c904  ldr x22,[sp, #0x20]
7101d8c908  ldr x0,[x22]
7101d8c90c  and w25,w21,#0xff
7101d8c910  cmp w25,#0x1
7101d8c914  cset w1,eq
7101d8c918  bl 0x710377aa20
7101d8c91c  stp x23,xzr,[sp, #0x18]
7101d8c920  cbz x22,0x7101d8c92c
7101d8c924  mov x0,x22
7101d8c928  bl 0x710392eb40
7101d8c92c  adrp x1,0x7104270000
7101d8c930  add x1,x1,#0x284
7101d8c934  add x8,sp,#0x18
7101d8c938  sub x0,x29,#0x50
7101d8c93c  bl 0x7103776910
7101d8c940  ldr x22,[sp, #0x20]
7101d8c944  ldr x0,[x22]
7101d8c948  cmp w25,#0x2
7101d8c94c  cset w1,eq
7101d8c950  bl 0x710377aa20
7101d8c954  stp x23,xzr,[sp, #0x18]
7101d8c958  cbz x22,0x7101d8c964
7101d8c95c  mov x0,x22
7101d8c960  bl 0x710392eb40
7101d8c964  adrp x1,0x71043cf000
7101d8c968  add x1,x1,#0x7e6
7101d8c96c  add x8,sp,#0x18
7101d8c970  sub x0,x29,#0x50
7101d8c974  bl 0x7103776910
7101d8c978  and w22,w21,#0xff
7101d8c97c  ldr x21,[sp, #0x20]
7101d8c980  cmp w22,#0x3
7101d8c984  cset w1,eq
7101d8c988  ldr x0,[x21]
7101d8c98c  bl 0x710377aa20
7101d8c990  stp x23,xzr,[sp, #0x18]
7101d8c994  cbz x21,0x7101d8c9a0
7101d8c998  mov x0,x21
7101d8c99c  bl 0x710392eb40
7101d8c9a0  adrp x1,0x710432a000
7101d8c9a4  add x1,x1,#0x49e
7101d8c9a8  add x8,sp,#0x18
7101d8c9ac  sub x0,x29,#0x50
7101d8c9b0  bl 0x7103776910
7101d8c9b4  ldr x21,[sp, #0x20]
7101d8c9b8  ldr x0,[x21]
7101d8c9bc  cmp w22,#0x4
7101d8c9c0  cset w1,eq
7101d8c9c4  bl 0x710377aa20
7101d8c9c8  str x23,[sp, #0x18]
7101d8c9cc  str xzr,[sp, #0x20]
7101d8c9d0  cbnz x21,0x7101d8cad0
7101d8c9d4  b 0x7101d8cad8
7101d8c9d8  bl 0x7103776910
7101d8c9dc  ldr x21,[sp, #0x20]
7101d8c9e0  ldr x0,[x21]
7101d8c9e4  mov w1,wzr
7101d8c9e8  bl 0x710377aa20
7101d8c9ec  adrp x22,0x710523d000
7101d8c9f0  add x22,x22,#0x9a8
7101d8c9f4  stp x22,xzr,[sp, #0x18]
7101d8c9f8  cbz x21,0x7101d8ca04
7101d8c9fc  mov x0,x21
7101d8ca00  bl 0x710392eb40
7101d8ca04  adrp x1,0x71042f8000
7101d8ca08  add x1,x1,#0x6e1
7101d8ca0c  add x8,sp,#0x18
7101d8ca10  sub x0,x29,#0x50
7101d8ca14  bl 0x7103776910
7101d8ca18  ldr x21,[sp, #0x20]
7101d8ca1c  ldr x0,[x21]
7101d8ca20  mov w1,wzr
7101d8ca24  bl 0x710377aa20
7101d8ca28  stp x22,xzr,[sp, #0x18]
7101d8ca2c  cbz x21,0x7101d8ca38
7101d8ca30  mov x0,x21
7101d8ca34  bl 0x710392eb40
7101d8ca38  adrp x1,0x7104270000
7101d8ca3c  add x1,x1,#0x284
7101d8ca40  add x8,sp,#0x18
7101d8ca44  sub x0,x29,#0x50
7101d8ca48  bl 0x7103776910
7101d8ca4c  ldr x21,[sp, #0x20]
7101d8ca50  ldr x0,[x21]
7101d8ca54  mov w1,wzr
7101d8ca58  bl 0x710377aa20
7101d8ca5c  stp x22,xzr,[sp, #0x18]
7101d8ca60  cbz x21,0x7101d8ca6c
7101d8ca64  mov x0,x21
7101d8ca68  bl 0x710392eb40
7101d8ca6c  adrp x1,0x71043cf000
7101d8ca70  add x1,x1,#0x7e6
7101d8ca74  add x8,sp,#0x18
7101d8ca78  sub x0,x29,#0x50
7101d8ca7c  bl 0x7103776910
7101d8ca80  ldr x21,[sp, #0x20]
7101d8ca84  ldr x0,[x21]
7101d8ca88  mov w1,wzr
7101d8ca8c  bl 0x710377aa20
7101d8ca90  stp x22,xzr,[sp, #0x18]
7101d8ca94  cbz x21,0x7101d8caa0
7101d8ca98  mov x0,x21
7101d8ca9c  bl 0x710392eb40
7101d8caa0  adrp x1,0x710432a000
7101d8caa4  add x1,x1,#0x49e
7101d8caa8  add x8,sp,#0x18
7101d8caac  sub x0,x29,#0x50
7101d8cab0  bl 0x7103776910
7101d8cab4  ldr x21,[sp, #0x20]
7101d8cab8  ldr x0,[x21]
7101d8cabc  mov w1,wzr
7101d8cac0  bl 0x710377aa20
7101d8cac4  str x22,[sp, #0x18]
7101d8cac8  str xzr,[sp, #0x20]
7101d8cacc  cbz x21,0x7101d8cad8
7101d8cad0  mov x0,x21
7101d8cad4  bl 0x710392eb40
7101d8cad8  adrp x1,0x71043be000
7101d8cadc  add x1,x1,#0xa00
7101d8cae0  add x8,sp,#0x18
7101d8cae4  sub x0,x29,#0x50
7101d8cae8  bl 0x7103776910
7101d8caec  ldr x21,[sp, #0x20]
7101d8caf0  ldr x0,[x21]
7101d8caf4  mov w1,wzr
7101d8caf8  bl 0x710377aa20
7101d8cafc  adrp x22,0x710523d000
7101d8cb00  add x22,x22,#0x9a8
7101d8cb04  stp x22,xzr,[sp, #0x18]
7101d8cb08  cbz x21,0x7101d8cb14
7101d8cb0c  mov x0,x21
7101d8cb10  bl 0x710392eb40
7101d8cb14  ldr w8,[x20, #0x158]
7101d8cb18  ldr x0,[x20, #0x118]
7101d8cb1c  cmp w8,#0x1
7101d8cb20  b.ne 0x7101d8cb90
7101d8cb24  fmov s0,0x3f800000
7101d8cb28  adrp x1,0x7104291000
7101d8cb2c  add x1,x1,#0xf9d
7101d8cb30  bl 0x7103778300
7101d8cb34  mov x0,x20
7101d8cb38  bl 0x7101d8e430
7101d8cb3c  ldr x8,[x24, #0x730]
7101d8cb40  ldr x8,[x8, #0x8]
7101d8cb44  ldr x21,[x8, #0x1d8]
7101d8cb48  ldrh w1,[x20, #0x15c]
7101d8cb4c  mov x0,x21
7101d8cb50  bl 0x71032a9470
7101d8cb54  and x1,x0,#0xffffffffff
7101d8cb58  mov x0,x21
7101d8cb5c  bl 0x71032a7800
7101d8cb60  ldp x8,x9,[x21, #0x20]
7101d8cb64  sub x9,x9,x8
7101d8cb68  lsr x9,x9,#0x6
7101d8cb6c  mov w10,#0xcccd
7101d8cb70  movk w10,#0xcccc, LSL #16
7101d8cb74  mul w9,w9,w10
7101d8cb78  cmp w0,w9
7101d8cb7c  b.cs 0x7101d8cba4
7101d8cb80  mov w9,#0x140
7101d8cb84  umaddl x8,w0,w9,x8
7101d8cb88  ldr x1,[x8, #0x60]
7101d8cb8c  b 0x7101d8cbac
7101d8cb90  fmov s0,0x3f800000
7101d8cb94  adrp x1,0x71042c5000
7101d8cb98  add x1,x1,#0x20b
7101d8cb9c  bl 0x7103778300
7101d8cba0  b 0x7101d8cd50
7101d8cba4  mov x1,#0xff0000000000
7101d8cba8  movk x1,#0x2dff, LSL #48
7101d8cbac  add x0,x20,#0x8
7101d8cbb0  mov w2,#0x12
7101d8cbb4  bl 0x710323f600
7101d8cbb8  mov x20,x0
7101d8cbbc  adrp x21,0x710523d000
7101d8cbc0  add x21,x21,#0xa08
7101d8cbc4  mov w0,#0x10
7101d8cbc8  mov w1,#0x10
7101d8cbcc  str x21,[sp, #0x18]
7101d8cbd0  bl 0x710392e290
7101d8cbd4  cbnz x0,0x7101d8cc1c
7101d8cbd8  adrp x8,0x7105332000
7101d8cbdc  ldr x0,[x8, #0xf00]
7101d8cbe0  cbz x0,0x7101d8cc18
7101d8cbe4  mov w8,#0x10
7101d8cbe8  stur wzr,[x29, #-0x34]
7101d8cbec  sub x1,x29,#0x34
7101d8cbf0  str x8,[sp, #0x8]
7101d8cbf4  ldr x8,[x0]
7101d8cbf8  ldr x8,[x8, #0x30]
7101d8cbfc  add x2,sp,#0x8
7101d8cc00  blr x8
7101d8cc04  tbz w0,#0x0,0x7101d8cc18
7101d8cc08  mov w0,#0x10
7101d8cc0c  mov w1,#0x10
7101d8cc10  bl 0x710392e290
7101d8cc14  cbnz x0,0x7101d8cc1c
7101d8cc18  mov x0,xzr
7101d8cc1c  add x8,sp,#0x18
7101d8cc20  cmp x8,x20
7101d8cc24  stp xzr,xzr,[x0]
7101d8cc28  str x0,[sp, #0x20]
7101d8cc2c  b.eq 0x7101d8cc94
7101d8cc30  ldr x8,[x20, #0x8]
7101d8cc34  ldp x9,x8,[x8]
7101d8cc38  cbz x8,0x7101d8cc90
7101d8cc3c  add x10,x8,#0x8
7101d8cc40  ldxr x11,[x10]
7101d8cc44  add x11,x11,#0x1
7101d8cc48  stxr w12,x11,[x10]
7101d8cc4c  cbnz w12,0x7101d8cc40
7101d8cc50  ldr x20,[x0, #0x8]
7101d8cc54  stp x9,x8,[x0]
7101d8cc58  cbz x20,0x7101d8cc94
7101d8cc5c  add x8,x20,#0x8
7101d8cc60  ldaxr x9,[x8]
7101d8cc64  sub x10,x9,#0x1
7101d8cc68  stlxr w11,x10,[x8]
7101d8cc6c  cbnz w11,0x7101d8cc60
7101d8cc70  cbnz x9,0x7101d8cc94
7101d8cc74  ldr x8,[x20]
7101d8cc78  ldr x8,[x8, #0x10]
7101d8cc7c  mov x0,x20
7101d8cc80  blr x8
7101d8cc84  mov x0,x20
7101d8cc88  bl 0x71039c2670
7101d8cc8c  b 0x7101d8cc94
7101d8cc90  stp x9,x8,[x0]
7101d8cc94  adrp x1,0x71042c5000
7101d8cc98  add x1,x1,#0x1f7
7101d8cc9c  add x8,sp,#0x8
7101d8cca0  mov x0,x19
7101d8cca4  bl 0x7103776910
7101d8cca8  ldr x19,[sp, #0x10]
7101d8ccac  add x1,sp,#0x18
7101d8ccb0  mov x0,x19
7101d8ccb4  bl 0x7103778b80
7101d8ccb8  stp x22,xzr,[sp, #0x8]
7101d8ccbc  cbz x19,0x7101d8ccc8
7101d8ccc0  mov x0,x19
7101d8ccc4  bl 0x710392eb40
7101d8ccc8  ldr x19,[sp, #0x20]
7101d8cccc  stp x21,xzr,[sp, #0x18]
7101d8ccd0  cbz x19,0x7101d8cd50
7101d8ccd4  ldr x20,[x19, #0x8]
7101d8ccd8  stp xzr,xzr,[x19]
7101d8ccdc  cbz x20,0x7101d8cd48
7101d8cce0  add x8,x20,#0x8
7101d8cce4  ldaxr x9,[x8]
7101d8cce8  sub x10,x9,#0x1
7101d8ccec  stlxr w11,x10,[x8]
7101d8ccf0  cbnz w11,0x7101d8cce4
7101d8ccf4  cbnz x9,0x7101d8cd10
7101d8ccf8  ldr x8,[x20]
7101d8ccfc  ldr x8,[x8, #0x10]
7101d8cd00  mov x0,x20
7101d8cd04  blr x8
7101d8cd08  mov x0,x20
7101d8cd0c  bl 0x71039c2670
7101d8cd10  ldr x20,[x19, #0x8]
7101d8cd14  cbz x20,0x7101d8cd48
7101d8cd18  add x8,x20,#0x8
7101d8cd1c  ldaxr x9,[x8]
7101d8cd20  sub x10,x9,#0x1
7101d8cd24  stlxr w11,x10,[x8]
7101d8cd28  cbnz w11,0x7101d8cd1c
7101d8cd2c  cbnz x9,0x7101d8cd48
7101d8cd30  ldr x8,[x20]
7101d8cd34  ldr x8,[x8, #0x10]
7101d8cd38  mov x0,x20
7101d8cd3c  blr x8
7101d8cd40  mov x0,x20
7101d8cd44  bl 0x71039c2670
7101d8cd48  mov x0,x19
7101d8cd4c  bl 0x710392eb40
7101d8cd50  ldur x19,[x29, #-0x48]
7101d8cd54  adrp x8,0x710523d000
7101d8cd58  add x8,x8,#0x988
7101d8cd5c  stp x8,xzr,[x29, #-0x50]
7101d8cd60  cbz x19,0x7101d8cd7c
7101d8cd64  ldr x0,[x19, #0x18]
7101d8cd68  stp x22,xzr,[x19, #0x10]
7101d8cd6c  cbz x0,0x7101d8cd74
7101d8cd70  bl 0x710392eb40
7101d8cd74  mov x0,x19
7101d8cd78  bl 0x710392eb40
7101d8cd7c  ldp x29,x30,[sp, #0xb0]
7101d8cd80  ldr x25,[sp, #0x70]
7101d8cd84  ldp x20,x19,[sp, #0xa0]
7101d8cd88  ldp x22,x21,[sp, #0x90]
7101d8cd8c  ldp x24,x23,[sp, #0x80]
7101d8cd90  add sp,sp,#0xc0
7101d8cd94  ret
