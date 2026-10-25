// addr:      7101ca95f0
// offset:    0x1ca95f0
// name:      FUN_7101ca95f0
// mangled:   
// size:      2200

7101ca95f0  str x28,[sp, #-0x60]!
7101ca95f4  stp x26,x25,[sp, #0x10]
7101ca95f8  stp x24,x23,[sp, #0x20]
7101ca95fc  stp x22,x21,[sp, #0x30]
7101ca9600  stp x20,x19,[sp, #0x40]
7101ca9604  stp x29,x30,[sp, #0x50]
7101ca9608  add x29,sp,#0x50
7101ca960c  sub sp,sp,#0x2, LSL #12
7101ca9610  sub sp,sp,#0x6c0
7101ca9614  mov w8,#0x2330
7101ca9618  add x20,x0,x8
7101ca961c  ldr x8,[x0, #0x2318]
7101ca9620  ldr x8,[x8]
7101ca9624  ldr x8,[x8]
7101ca9628  mov x19,x0
7101ca962c  mov x0,x20
7101ca9630  add x1,x8,#0x5f8
7101ca9634  bl 0x7101ce7e70
7101ca9638  ldr w8,[x19, #0x16c]
7101ca963c  cbz w8,0x7101ca98ac
7101ca9640  ldr x8,[x19, #0x2350]
7101ca9644  ldr w8,[x8, #0x228]
7101ca9648  cmp w8,#0x0
7101ca964c  b.gt 0x7101ca9e64
7101ca9650  mov w8,#0x2a24
7101ca9654  add x21,x19,x8
7101ca9658  ldr x8,[x19, #0x2318]
7101ca965c  ldr x0,[x8]
7101ca9660  add x22,sp,#0x2, LSL #12
7101ca9664  sub x23,x29,#0xd8
7101ca9668  add x22,x22,#0x1e0
7101ca966c  add x26,sp,#0x50
7101ca9670  mov w24,#0x9dc5
7101ca9674  movk w24,#0x811c, LSL #16
7101ca9678  bl 0x7103775fa0
7101ca967c  adrp x9,0x710593b000
7101ca9680  ldr x9,[x9, #0x988]
7101ca9684  ldr w8,[x19, #0x2344]
7101ca9688  mov w10,#0x1
7101ca968c  lsl w8,w10,w8
7101ca9690  mov w1,wzr
7101ca9694  ldr x9,[x9, #0x8]
7101ca9698  ldr w10,[x9]
7101ca969c  bic w8,w10,w8
7101ca96a0  str w8,[x9]
7101ca96a4  ldr x8,[x19, #0x2318]
7101ca96a8  ldr x8,[x8]
7101ca96ac  ldr x0,[x8]
7101ca96b0  bl 0x71037760f0
7101ca96b4  ldr x8,[x19, #0x180]
7101ca96b8  ldr x0,[x8, #0x80]
7101ca96bc  add x20,x19,#0x188
7101ca96c0  mov x1,x20
7101ca96c4  bl 0x7101af8210
7101ca96c8  add x0,sp,#0x50
7101ca96cc  mov x1,x20
7101ca96d0  add x25,sp,#0x50
7101ca96d4  bl 0x7101af5880
7101ca96d8  mov x10,#0x6e6d
7101ca96dc  movk x10,#0x5f75, LSL #16
7101ca96e0  mov x9,#0x656e
7101ca96e4  movk x9,#0x725f, LSL #16
7101ca96e8  movk x10,#0x6e6f, LSL #32
7101ca96ec  movk x10,#0x696c, LSL #48
7101ca96f0  movk x9,#0x7065, LSL #32
7101ca96f4  movk x9,#0x726f, LSL #48
7101ca96f8  stur x10,[x26, #0xac]
7101ca96fc  mov w8,#0x5f74
7101ca9700  stur x9,[x26, #0xb4]
7101ca9704  strh w8,[sp, #0x10c]
7101ca9708  mov w8,#0x6974
7101ca970c  movk w8,#0x6c74, LSL #16
7101ca9710  stur w8,[x26, #0xbe]
7101ca9714  mov w11,#0x65
7101ca9718  mov w13,#0x17
7101ca971c  strh w11,[sp, #0x112]
7101ca9720  mov w12,#0x6d
7101ca9724  mov w11,#0xad
7101ca9728  str w13,[sp, #0xf8]
7101ca972c  mov w8,#0x89
7101ca9730  mov w13,w24
7101ca9734  mul w13,w13,w8
7101ca9738  and w12,w12,#0xff
7101ca973c  eor w13,w13,w12
7101ca9740  ldrb w12,[x25, x11, LSL ]
7101ca9744  add x11,x11,#0x1
7101ca9748  cbnz w12,0x7101ca9734
7101ca974c  mov w11,#0x1
7101ca9750  str w11,[sp, #0x1194]
7101ca9754  str x10,[sp, #0x11a0]
7101ca9758  mov x10,#0x5f74
7101ca975c  movk x10,#0x6568, LSL #16
7101ca9760  mov w11,#0x6e6f
7101ca9764  movk w11,#0x7274, LSL #16
7101ca9768  movk x10,#0x706c, LSL #32
7101ca976c  movk x10,#0x635f, LSL #48
7101ca9770  str w11,[sp, #0x11b8]
7101ca9774  mov x11,#0x7475
7101ca9778  movk x11,#0x6f69, LSL #16
7101ca977c  str x9,[sp, #0x11a8]
7101ca9780  mov w12,#0x6269
7101ca9784  str x10,[sp, #0x11b0]
7101ca9788  mov w10,#0x116e
7101ca978c  add x9,sp,#0x50
7101ca9790  movk x11,#0x5f6e, LSL #32
7101ca9794  movk x11,#0x6564, LSL #48
7101ca9798  str w13,[sp, #0xf4]
7101ca979c  strh w12,[sp, #0x11bc]
7101ca97a0  str x11,[x9, x10, LSL #0x0]
7101ca97a4  mov w10,#0x1176
7101ca97a8  mov w11,#0x6174
7101ca97ac  movk w11,#0x6c69, LSL #16
7101ca97b0  mov w12,#0x117a
7101ca97b4  str w11,[x9, x10, LSL #0x0]
7101ca97b8  mov w13,#0x2a
7101ca97bc  strb wzr,[x9, x12, LSL ]
7101ca97c0  mov w11,#0x6d
7101ca97c4  mov w10,#0x1151
7101ca97c8  mov w12,w24
7101ca97cc  str w13,[sp, #0x119c]
7101ca97d0  mul w12,w12,w8
7101ca97d4  and w11,w11,#0xff
7101ca97d8  eor w12,w12,w11
7101ca97dc  ldrb w11,[x9, x10, LSL ]
7101ca97e0  add x10,x10,#0x1
7101ca97e4  cbnz w11,0x7101ca97d0
7101ca97e8  mov x10,#0x6e6d
7101ca97ec  movk x10,#0x5f75, LSL #16
7101ca97f0  mov x9,#0x1100000000
7101ca97f4  movk x10,#0x6f66, LSL #32
7101ca97f8  movk x10,#0x746f, LSL #48
7101ca97fc  str w12,[sp, #0x1198]
7101ca9800  stp x9,x10,[sp, #0x8]
7101ca9804  mov x10,#0x7265
7101ca9808  movk x10,#0x725f, LSL #16
7101ca980c  add x11,sp,#0x8
7101ca9810  movk x10,#0x7065, LSL #32
7101ca9814  movk x10,#0x726f, LSL #48
7101ca9818  add x9,x11,#0x9
7101ca981c  str x10,[sp, #0x18]
7101ca9820  mov w12,#0x74
7101ca9824  mov w10,#0x6d
7101ca9828  strh w12,[sp, #0x20]
7101ca982c  mov w11,w24
7101ca9830  mul w11,w11,w8
7101ca9834  and w10,w10,#0xff
7101ca9838  eor w11,w11,w10
7101ca983c  ldrb w10,[x9], #0x1
7101ca9840  cbnz w10,0x7101ca9830
7101ca9844  str w11,[sp, #0x8]
7101ca9848  mov w10,#0x1100
7101ca984c  add x11,sp,#0x50
7101ca9850  mov w12,#0x1101
7101ca9854  mov x9,xzr
7101ca9858  add x10,x11,x10
7101ca985c  add x11,x11,x12
7101ca9860  mov w13,#0x6d
7101ca9864  add x12,sp,#0x8
7101ca9868  tst w13,#0xff
7101ca986c  b.ne 0x7101ca9888
7101ca9870  b 0x7101ca9900
7101ca9874  ldrb w13,[x13, #0xa]
7101ca9878  strb w14,[x11, x9, LSL ]
7101ca987c  add x9,x9,#0x2
7101ca9880  tst w13,#0xff
7101ca9884  b.eq 0x7101ca9900
7101ca9888  add w14,w9,#0x1
7101ca988c  cmp w14,#0x3f
7101ca9890  strb w13,[x10, x9, LSL ]
7101ca9894  b.cs 0x7101ca98fc
7101ca9898  add x13,x12,x9
7101ca989c  ldrb w14,[x13, #0x9]
7101ca98a0  cbnz w14,0x7101ca9874
7101ca98a4  add x9,x9,#0x1
7101ca98a8  b 0x7101ca9900
7101ca98ac  mov w8,#0x2370
7101ca98b0  mov w9,#0x1
7101ca98b4  mov w10,#0x2374
7101ca98b8  strb w9,[x19, x8, LSL ]
7101ca98bc  mov w8,#0xffffffff
7101ca98c0  str x8,[x19, x10, LSL #0x0]
7101ca98c4  mov w8,#0x2380
7101ca98c8  str wzr,[x19, #0x237c]
7101ca98cc  strh wzr,[x19, x8, LSL #0x0]
7101ca98d0  str wzr,[x19, #0x26b0]
7101ca98d4  mov x0,x20
7101ca98d8  add sp,sp,#0x2, LSL #12
7101ca98dc  add sp,sp,#0x6c0
7101ca98e0  ldp x29,x30,[sp, #0x50]
7101ca98e4  ldp x20,x19,[sp, #0x40]
7101ca98e8  ldp x22,x21,[sp, #0x30]
7101ca98ec  ldp x24,x23,[sp, #0x20]
7101ca98f0  ldp x26,x25,[sp, #0x10]
7101ca98f4  ldr x28,[sp], #0x60
7101ca98f8  b 0x7101ce8640
7101ca98fc  add w9,w9,#0x1
7101ca9900  mov w11,#0x1100
7101ca9904  add x10,sp,#0x50
7101ca9908  add x11,x10,x11
7101ca990c  strb wzr,[x11, w9, UXTW ]
7101ca9910  str w9,[sp, #0x114c]
7101ca9914  ldrb w9,[x11]
7101ca9918  mov w11,w24
7101ca991c  cbz w9,0x7101ca9940
7101ca9920  mov w11,#0x1101
7101ca9924  add x10,x10,x11
7101ca9928  mov w11,w24
7101ca992c  mul w11,w11,w8
7101ca9930  and w9,w9,#0xff
7101ca9934  eor w11,w11,w9
7101ca9938  ldrb w9,[x10], #0x1
7101ca993c  cbnz w9,0x7101ca992c
7101ca9940  mov w8,#0xa
7101ca9944  str w11,[sp, #0x1148]
7101ca9948  add x1,sp,#0x50
7101ca994c  str w8,[sp, #0x1140]
7101ca9950  ldr x0,[x19, #0x180]
7101ca9954  mov w2,#0x1
7101ca9958  mov w3,#0x2
7101ca995c  bl 0x7101af8570
7101ca9960  ldr x8,[x19, #0x180]
7101ca9964  ldr x25,[x8, #0x80]
7101ca9968  mov w8,#0x2268
7101ca996c  ldr x0,[x25, #0x2268]
7101ca9970  add x20,x25,x8
7101ca9974  ldr x8,[x0]
7101ca9978  ldr x8,[x8, #0x70]
7101ca997c  mov w1,wzr
7101ca9980  blr x8
7101ca9984  mov w8,#0x11b4
7101ca9988  ldrb w8,[x25, x8, LSL ]
7101ca998c  cbz w8,0x7101ca99a8
7101ca9990  ldr x0,[x20]
7101ca9994  ldr w8,[x0, #0x254]
7101ca9998  cmp w8,#0x3
7101ca999c  b.ne 0x7101ca99b8
7101ca99a0  bl 0x710376b960
7101ca99a4  b 0x7101ca99b8
7101ca99a8  orr w1,wzr,#0x3
7101ca99ac  mov x0,x20
7101ca99b0  mov w2,wzr
7101ca99b4  bl 0x7103771a80
7101ca99b8  ldr x8,[x19, #0x2350]
7101ca99bc  ldr x9,[x8, #0x288]
7101ca99c0  ldr x8,[x8, #0x290]
7101ca99c4  str x8,[x19, #0x2a30]
7101ca99c8  mov w8,#0x2a28
7101ca99cc  add x20,x19,x8
7101ca99d0  str x9,[x19, #0x2a28]
7101ca99d4  adrp x8,0x710532f000
7101ca99d8  ldr x26,[x8, #0x8f8]
7101ca99dc  stur wzr,[x29, #-0xc4]
7101ca99e0  strh wzr,[x22, #0x470]
7101ca99e4  strh wzr,[x22, #0x468]
7101ca99e8  stp xzr,xzr,[x29, #-0xd8]
7101ca99ec  stur xzr,[x23, #0x6d]
7101ca99f0  stp xzr,xzr,[x29, #-0x78]
7101ca99f4  stur xzr,[x29, #-0x80]
7101ca99f8  ldr x0,[x26, #0x8]
7101ca99fc  sub x2,x29,#0xd8
7101ca9a00  mov x1,x20
7101ca9a04  sub x25,x29,#0xd8
7101ca9a08  bl 0x710334e560
7101ca9a0c  add x0,sp,#0x2, LSL #12
7101ca9a10  mov w2,#0x370
7101ca9a14  mov w1,wzr
7101ca9a18  add x0,x0,#0x1e0
7101ca9a1c  bl 0x71039c02a0
7101ca9a20  mov w8,#0x1
7101ca9a24  mov w9,#0x26c0
7101ca9a28  str w8,[sp, #0x252c]
7101ca9a2c  str wzr,[sp, #0x253c]
7101ca9a30  strb wzr,[x22, #0x360]
7101ca9a34  mov w10,#0x2a10
7101ca9a38  strh wzr,[x19, x9, LSL #0x0]
7101ca9a3c  mov w9,#0x29ec
7101ca9a40  str wzr,[x19, #0x26bc]
7101ca9a44  str w24,[x19, #0x26b8]
7101ca9a48  strh wzr,[x19, x9, LSL #0x0]
7101ca9a4c  str wzr,[x19, #0x29e8]
7101ca9a50  str w24,[x19, #0x29e4]
7101ca9a54  str w8,[x19, #0x2a04]
7101ca9a58  ldr x8,[sp, #0x2530]
7101ca9a5c  ldrb w9,[x22, #0x358]
7101ca9a60  str x8,[x19, #0x2a08]
7101ca9a64  mov w8,#0x2a18
7101ca9a68  strb w9,[x19, x10, LSL ]
7101ca9a6c  strb wzr,[x19, x8, LSL ]
7101ca9a70  ldr x1,[x19, #0x2a30]
7101ca9a74  str wzr,[x19, #0x2a14]
7101ca9a78  str wzr,[x19, #0x2a24]
7101ca9a7c  cbz x1,0x7101ca9a90
7101ca9a80  ldr x0,[x26, #0x8]
7101ca9a84  ldr w2,[x20]
7101ca9a88  bl 0x710334c7d0
7101ca9a8c  b 0x7101ca9a94
7101ca9a90  orr w0,wzr,#0xffff
7101ca9a94  mov w8,#0x29e4
7101ca9a98  strh w0,[x21]
7101ca9a9c  mov x0,x20
7101ca9aa0  add x1,x19,x8
7101ca9aa4  bl 0x7101cf4120
7101ca9aa8  ldur x8,[x29, #-0xd8]
7101ca9aac  str x8,[x19, #0x2a08]
7101ca9ab0  mov w8,#0x2a14
7101ca9ab4  add x9,x25,#0x70
7101ca9ab8  add x8,x19,x8
7101ca9abc  cmp x8,x9
7101ca9ac0  b.eq 0x7101ca9b90
7101ca9ac4  ldrb w8,[x23, #0x74]
7101ca9ac8  cbz w8,0x7101ca9b80
7101ca9acc  mov w9,#0x2a18
7101ca9ad0  strb w8,[x19, x9, LSL ]
7101ca9ad4  ldrb w8,[x23, #0x75]
7101ca9ad8  cbz w8,0x7101ca9b4c
7101ca9adc  mov w9,#0x2a19
7101ca9ae0  strb w8,[x19, x9, LSL ]
7101ca9ae4  ldrb w8,[x23, #0x76]
7101ca9ae8  cbz w8,0x7101ca9b54
7101ca9aec  mov w9,#0x2a1a
7101ca9af0  strb w8,[x19, x9, LSL ]
7101ca9af4  ldrb w8,[x23, #0x77]
7101ca9af8  cbz w8,0x7101ca9b5c
7101ca9afc  mov w9,#0x2a1b
7101ca9b00  strb w8,[x19, x9, LSL ]
7101ca9b04  ldrb w8,[x23, #0x78]
7101ca9b08  cbz w8,0x7101ca9b64
7101ca9b0c  mov w9,#0x2a1c
7101ca9b10  strb w8,[x19, x9, LSL ]
7101ca9b14  ldrb w8,[x23, #0x79]
7101ca9b18  cbz w8,0x7101ca9b6c
7101ca9b1c  mov w9,#0x2a1d
7101ca9b20  strb w8,[x19, x9, LSL ]
7101ca9b24  ldrb w8,[x23, #0x7a]
7101ca9b28  cbz w8,0x7101ca9b74
7101ca9b2c  mov w9,#0x2a1e
7101ca9b30  strb w8,[x19, x9, LSL ]
7101ca9b34  ldrb w8,[x23, #0x7b]
7101ca9b38  cbz w8,0x7101ca9b7c
7101ca9b3c  mov w9,#0x2a1f
7101ca9b40  strb w8,[x19, x9, LSL ]
7101ca9b44  mov w8,#0x8
7101ca9b48  b 0x7101ca9b80
7101ca9b4c  mov w8,#0x1
7101ca9b50  b 0x7101ca9b80
7101ca9b54  mov w8,#0x2
7101ca9b58  b 0x7101ca9b80
7101ca9b5c  orr w8,wzr,#0x3
7101ca9b60  b 0x7101ca9b80
7101ca9b64  mov w8,#0x4
7101ca9b68  b 0x7101ca9b80
7101ca9b6c  mov w8,#0x5
7101ca9b70  b 0x7101ca9b80
7101ca9b74  orr w8,wzr,#0x6
7101ca9b78  b 0x7101ca9b80
7101ca9b7c  orr w8,wzr,#0x7
7101ca9b80  add x9,x19,x8
7101ca9b84  mov w10,#0x2a18
7101ca9b88  strb wzr,[x9, x10, LSL ]
7101ca9b8c  str w8,[x19, #0x2a14]
7101ca9b90  adrp x8,0x710523d000
7101ca9b94  ldr w8,[x8, #0xc]
7101ca9b98  mov w9,#0x2a26
7101ca9b9c  strb w8,[x19, x9, LSL ]
7101ca9ba0  ldrh w8,[x21]
7101ca9ba4  cmp w8,#0x2
7101ca9ba8  strb wzr,[x21, #0x3]
7101ca9bac  b.ne 0x7101ca9c3c
7101ca9bb0  add x8,sp,#0x2, LSL #12
7101ca9bb4  add x8,x8,#0x1e0
7101ca9bb8  add x0,x8,#0xf8
7101ca9bbc  str wzr,[sp, #0x21f4]
7101ca9bc0  strh wzr,[x22, #0x18]
7101ca9bc4  strh wzr,[x22, #0x10]
7101ca9bc8  str xzr,[sp, #0x21e8]
7101ca9bcc  str xzr,[sp, #0x21e0]
7101ca9bd0  stur xzr,[x22, #0x6d]
7101ca9bd4  str xzr,[sp, #0x2248]
7101ca9bd8  str xzr,[sp, #0x2240]
7101ca9bdc  str xzr,[sp, #0x2238]
7101ca9be0  str xzr,[sp, #0x2260]
7101ca9be4  bl 0x710143c4d0
7101ca9be8  mov x8,#0xff0000000000
7101ca9bec  movk x8,#0xc1ff, LSL #48
7101ca9bf0  str x8,[sp, #0x2570]
7101ca9bf4  str x8,[sp, #0x2580]
7101ca9bf8  str x8,[sp, #0x2590]
7101ca9bfc  str x8,[sp, #0x25a0]
7101ca9c00  add x2,sp,#0x2, LSL #12
7101ca9c04  add x2,x2,#0x1e0
7101ca9c08  mov x1,x20
7101ca9c0c  str x8,[sp, #0x25b0]
7101ca9c10  str x8,[sp, #0x25c0]
7101ca9c14  str x8,[sp, #0x25d0]
7101ca9c18  str x8,[sp, #0x25e0]
7101ca9c1c  str x8,[sp, #0x25f0]
7101ca9c20  str x8,[sp, #0x2600]
7101ca9c24  ldr x0,[x26, #0x8]
7101ca9c28  bl 0x710334e9e0
7101ca9c2c  ldr w8,[sp, #0x262c]
7101ca9c30  cbz w8,0x7101ca9c3c
7101ca9c34  mov w8,#0x1
7101ca9c38  strb w8,[x21, #0x3]
7101ca9c3c  ldur w8,[x29, #-0xc4]
7101ca9c40  cbz w8,0x7101ca9c80
7101ca9c44  ldr x8,[x19, #0x2320]
7101ca9c48  ldr x8,[x8]
7101ca9c4c  add x0,x8,#0x8
7101ca9c50  add x8,sp,#0x2, LSL #12
7101ca9c54  adrp x1,0x71043cf000
7101ca9c58  add x1,x1,#0xca4
7101ca9c5c  add x8,x8,#0x1e0
7101ca9c60  bl 0x7103776910
7101ca9c64  ldr x21,[sp, #0x21e8]
7101ca9c68  ldr x0,[x21, #0x10]
7101ca9c6c  cbz x0,0x7101ca9cc0
7101ca9c70  add x1,x25,#0x18
7101ca9c74  mov w2,#0xffffffff
7101ca9c78  mov w3,#0x1
7101ca9c7c  b 0x7101ca9cbc
7101ca9c80  ldr x8,[x19, #0x2320]
7101ca9c84  ldr x8,[x8]
7101ca9c88  add x0,x8,#0x8
7101ca9c8c  add x8,sp,#0x2, LSL #12
7101ca9c90  adrp x1,0x71043cf000
7101ca9c94  add x1,x1,#0xca4
7101ca9c98  add x8,x8,#0x1e0
7101ca9c9c  bl 0x7103776910
7101ca9ca0  ldr x21,[sp, #0x21e8]
7101ca9ca4  ldr x0,[x21, #0x10]
7101ca9ca8  cbz x0,0x7101ca9cc0
7101ca9cac  stur wzr,[x29, #-0x54]
7101ca9cb0  sub x1,x29,#0x54
7101ca9cb4  mov w2,wzr
7101ca9cb8  mov w3,wzr
7101ca9cbc  bl 0x71037a2270
7101ca9cc0  adrp x8,0x710523d000
7101ca9cc4  add x8,x8,#0x9a8
7101ca9cc8  str x8,[sp, #0x21e0]
7101ca9ccc  str xzr,[sp, #0x21e8]
7101ca9cd0  cbz x21,0x7101ca9cdc
7101ca9cd4  mov x0,x21
7101ca9cd8  bl 0x710392eb40
7101ca9cdc  ldr x8,[x19, #0x2320]
7101ca9ce0  ldr x8,[x8]
7101ca9ce4  add x0,sp,#0x2, LSL #12
7101ca9ce8  add x0,x0,#0x1e0
7101ca9cec  add x1,x8,#0x8
7101ca9cf0  bl 0x7103776390
7101ca9cf4  add x1,sp,#0x2, LSL #12
7101ca9cf8  add x1,x1,#0x1e0
7101ca9cfc  mov x0,x19
7101ca9d00  mov x2,x20
7101ca9d04  bl 0x7101cac0c0
7101ca9d08  ldr x20,[sp, #0x21e8]
7101ca9d0c  adrp x21,0x710523d000
7101ca9d10  add x21,x21,#0x988
7101ca9d14  str x21,[sp, #0x21e0]
7101ca9d18  str xzr,[sp, #0x21e8]
7101ca9d1c  cbz x20,0x7101ca9d40
7101ca9d20  ldr x0,[x20, #0x18]
7101ca9d24  adrp x8,0x710523d000
7101ca9d28  add x8,x8,#0x9a8
7101ca9d2c  stp x8,xzr,[x20, #0x10]
7101ca9d30  cbz x0,0x7101ca9d38
7101ca9d34  bl 0x710392eb40
7101ca9d38  mov x0,x20
7101ca9d3c  bl 0x710392eb40
7101ca9d40  ldr x8,[x19, #0x2320]
7101ca9d44  ldr x0,[x8]
7101ca9d48  mov w2,#0x1003
7101ca9d4c  mov w1,wzr
7101ca9d50  bl 0x7103775dc0
7101ca9d54  ldr x8,[x19, #0x2328]
7101ca9d58  ldr x0,[x8]
7101ca9d5c  mov w2,#0x1004
7101ca9d60  mov w1,wzr
7101ca9d64  bl 0x7103775dc0
7101ca9d68  ldr x8,[x19, #0x2320]
7101ca9d6c  ldr x8,[x8]
7101ca9d70  add x0,x8,#0x8
7101ca9d74  add x8,sp,#0x2, LSL #12
7101ca9d78  adrp x1,0x7104422000
7101ca9d7c  add x1,x1,#0x52d
7101ca9d80  add x8,x8,#0x1e0
7101ca9d84  bl 0x7103776640
7101ca9d88  add x0,sp,#0x2, LSL #12
7101ca9d8c  adrp x1,0x7104318000
7101ca9d90  add x1,x1,#0xfd0
7101ca9d94  sub x8,x29,#0xd8
7101ca9d98  add x0,x0,#0x1e0
7101ca9d9c  bl 0x7103776910
7101ca9da0  adrp x1,0x71042e7000
7101ca9da4  add x1,x1,#0x305
7101ca9da8  sub x0,x29,#0xd8
7101ca9dac  bl 0x710377a120
7101ca9db0  ldur x0,[x29, #-0xd0]
7101ca9db4  adrp x20,0x710523d000
7101ca9db8  add x20,x20,#0x9a8
7101ca9dbc  stp x20,xzr,[x29, #-0xd8]
7101ca9dc0  cbz x0,0x7101ca9dc8
7101ca9dc4  bl 0x710392eb40
7101ca9dc8  add x0,sp,#0x2, LSL #12
7101ca9dcc  adrp x1,0x7104291000
7101ca9dd0  add x1,x1,#0xd51
7101ca9dd4  sub x8,x29,#0xd8
7101ca9dd8  add x0,x0,#0x1e0
7101ca9ddc  bl 0x7103776910
7101ca9de0  adrp x1,0x71042e7000
7101ca9de4  add x1,x1,#0x305
7101ca9de8  sub x0,x29,#0xd8
7101ca9dec  bl 0x710377a120
7101ca9df0  ldur x0,[x29, #-0xd0]
7101ca9df4  stp x20,xzr,[x29, #-0xd8]
7101ca9df8  cbz x0,0x7101ca9e00
7101ca9dfc  bl 0x710392eb40
7101ca9e00  ldr x8,[x19, #0x2320]
7101ca9e04  ldr x8,[x8]
7101ca9e08  ldr x0,[x8, #0x10]
7101ca9e0c  fmov s0,0x3f800000
7101ca9e10  adrp x1,0x7104421000
7101ca9e14  add x1,x1,#0x55
7101ca9e18  bl 0x7103778300
7101ca9e1c  adrp x8,0x710532f000
7101ca9e20  ldr x8,[x8, #0x7c8]
7101ca9e24  ldr x0,[x8, #0x8]
7101ca9e28  bl 0x71032e5a30
7101ca9e2c  ldr w8,[x19, #0x164]
7101ca9e30  subs w8,w8,#0x1
7101ca9e34  b.lt 0x7101ca9e3c
7101ca9e38  str w8,[x19, #0x164]
7101ca9e3c  ldr x19,[sp, #0x21e8]
7101ca9e40  str x21,[sp, #0x21e0]
7101ca9e44  str xzr,[sp, #0x21e8]
7101ca9e48  cbz x19,0x7101ca9e64
7101ca9e4c  ldr x0,[x19, #0x18]
7101ca9e50  stp x20,xzr,[x19, #0x10]
7101ca9e54  cbz x0,0x7101ca9e5c
7101ca9e58  bl 0x710392eb40
7101ca9e5c  mov x0,x19
7101ca9e60  bl 0x710392eb40
7101ca9e64  add sp,sp,#0x2, LSL #12
7101ca9e68  add sp,sp,#0x6c0
7101ca9e6c  ldp x29,x30,[sp, #0x50]
7101ca9e70  ldp x20,x19,[sp, #0x40]
7101ca9e74  ldp x22,x21,[sp, #0x30]
7101ca9e78  ldp x24,x23,[sp, #0x20]
7101ca9e7c  ldp x26,x25,[sp, #0x10]
7101ca9e80  ldr x28,[sp], #0x60
7101ca9e84  ret
