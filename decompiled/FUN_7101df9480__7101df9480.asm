// addr:      7101df9480
// offset:    0x1df9480
// name:      FUN_7101df9480
// mangled:   
// size:      5816

7101df9480  stp d9,d8,[sp, #-0x70]!
7101df9484  stp x28,x27,[sp, #0x10]
7101df9488  stp x26,x25,[sp, #0x20]
7101df948c  stp x24,x23,[sp, #0x30]
7101df9490  stp x22,x21,[sp, #0x40]
7101df9494  stp x20,x19,[sp, #0x50]
7101df9498  stp x29,x30,[sp, #0x60]
7101df949c  add x29,sp,#0x60
7101df94a0  sub sp,sp,#0x210
7101df94a4  str w4,[sp, #0x24]
7101df94a8  ldp x10,x11,[x1]
7101df94ac  str x11,[x0, #0x640]
7101df94b0  mov x11,#0x6573
7101df94b4  movk x11,#0x5f74, LSL #16
7101df94b8  mov x8,#0x1400000000
7101df94bc  sub x9,x29,#0x100
7101df94c0  str x10,[x0, #0x638]
7101df94c4  add x10,x0,#0x638
7101df94c8  add x22,x9,#0x8
7101df94cc  sturb wzr,[x29, #-0xe4]
7101df94d0  movk x11,#0x6170, LSL #32
7101df94d4  movk x11,#0x7472, LSL #48
7101df94d8  mov x12,#0x5f73
7101df94dc  movk x12,#0x7462, LSL #16
7101df94e0  movk x12,#0x5f6e, LSL #32
7101df94e4  movk x12,#0x6966, LSL #48
7101df94e8  stp x8,x11,[x29, #-0x100]
7101df94ec  add x8,x9,#0x9
7101df94f0  mov w9,#0x746c
7101df94f4  movk w9,#0x7265, LSL #16
7101df94f8  mov x19,x3
7101df94fc  mov x21,x2
7101df9500  mov x20,x0
7101df9504  str x10,[sp, #0x18]
7101df9508  stur w9,[x29, #-0xe8]
7101df950c  mov w9,#0x9dc5
7101df9510  movk w9,#0x811c, LSL #16
7101df9514  mov w11,#0x73
7101df9518  mov w10,#0x89
7101df951c  stur x12,[x29, #-0xf0]
7101df9520  mul w9,w9,w10
7101df9524  and w11,w11,#0xff
7101df9528  eor w9,w9,w11
7101df952c  ldrb w11,[x8], #0x1
7101df9530  cbnz w11,0x7101df9520
7101df9534  stur w9,[x29, #-0x100]
7101df9538  ldp x8,x9,[x21]
7101df953c  ldrb w10,[x21, #0x10]
7101df9540  str x8,[x20, #0x648]
7101df9544  ldr x8,[x20, #0x8]
7101df9548  strb w10,[x20, #0x658]
7101df954c  str x9,[x20, #0x650]
7101df9550  ldr x1,[x8]
7101df9554  add x0,x20,#0x10
7101df9558  adrp x2,0x7104545000
7101df955c  add x2,x2,#0x9b0
7101df9560  mov w3,#0x1
7101df9564  bl 0x71032cbf30
7101df9568  ldr x8,[x20]
7101df956c  ldr x8,[x8]
7101df9570  ldr x8,[x8]
7101df9574  add x9,x8,#0x8
7101df9578  add x10,x20,#0x18
7101df957c  str x10,[sp, #0x38]
7101df9580  cmp x10,x9
7101df9584  b.eq 0x7101df95f8
7101df9588  ldr x9,[x8, #0x10]
7101df958c  ldr x9,[x9]
7101df9590  ldr x10,[x20, #0x20]
7101df9594  str x9,[x10]
7101df9598  ldr x9,[x8, #0x10]
7101df959c  ldr x9,[x9, #0x8]
7101df95a0  ldr x10,[x20, #0x20]
7101df95a4  str x9,[x10, #0x8]
7101df95a8  ldr x9,[x8, #0x10]
7101df95ac  ldr x8,[x20, #0x20]
7101df95b0  cmp x8,x9
7101df95b4  b.eq 0x7101df95f8
7101df95b8  ldr x10,[x9, #0x18]
7101df95bc  ldr x10,[x10]
7101df95c0  ldr x11,[x8, #0x18]
7101df95c4  str x10,[x11]
7101df95c8  ldr x10,[x9, #0x18]
7101df95cc  ldr x10,[x10, #0x8]
7101df95d0  ldr x11,[x8, #0x18]
7101df95d4  str x10,[x11, #0x8]
7101df95d8  ldr x10,[x9, #0x18]
7101df95dc  ldr x10,[x10, #0x10]
7101df95e0  ldr x11,[x8, #0x18]
7101df95e4  str x10,[x11, #0x10]
7101df95e8  ldr x9,[x9, #0x18]
7101df95ec  ldr x9,[x9, #0x18]
7101df95f0  ldr x8,[x8, #0x18]
7101df95f4  str x9,[x8, #0x18]
7101df95f8  ldr x0,[sp, #0x38]
7101df95fc  add x1,x19,#0x8
7101df9600  add x8,sp,#0x40
7101df9604  add x19,sp,#0x40
7101df9608  str x1,[sp]
7101df960c  bl 0x7103776640
7101df9610  add x8,x20,#0x40
7101df9614  cmp x8,x19
7101df9618  b.eq 0x7101df9650
7101df961c  ldr x8,[sp, #0x48]
7101df9620  str xzr,[sp, #0x48]
7101df9624  ldr x19,[x20, #0x48]
7101df9628  str x8,[x20, #0x48]
7101df962c  cbz x19,0x7101df9650
7101df9630  ldr x0,[x19, #0x18]
7101df9634  adrp x8,0x710523d000
7101df9638  add x8,x8,#0x9a8
7101df963c  stp x8,xzr,[x19, #0x10]
7101df9640  cbz x0,0x7101df9648
7101df9644  bl 0x710392eb40
7101df9648  mov x0,x19
7101df964c  bl 0x710392eb40
7101df9650  ldr x19,[sp, #0x48]
7101df9654  adrp x25,0x710523d000
7101df9658  add x25,x25,#0x988
7101df965c  stp x25,xzr,[sp, #0x40]
7101df9660  cbz x19,0x7101df9684
7101df9664  ldr x0,[x19, #0x18]
7101df9668  adrp x8,0x710523d000
7101df966c  add x8,x8,#0x9a8
7101df9670  stp x8,xzr,[x19, #0x10]
7101df9674  cbz x0,0x7101df967c
7101df9678  bl 0x710392eb40
7101df967c  mov x0,x19
7101df9680  bl 0x710392eb40
7101df9684  ldr x0,[sp, #0x38]
7101df9688  add x8,sp,#0x40
7101df968c  mov x1,x22
7101df9690  add x19,sp,#0x40
7101df9694  bl 0x7103776640
7101df9698  add x8,x20,#0x50
7101df969c  cmp x8,x19
7101df96a0  b.eq 0x7101df96d8
7101df96a4  ldr x8,[sp, #0x48]
7101df96a8  str xzr,[sp, #0x48]
7101df96ac  ldr x19,[x20, #0x58]
7101df96b0  str x8,[x20, #0x58]
7101df96b4  cbz x19,0x7101df96d8
7101df96b8  ldr x0,[x19, #0x18]
7101df96bc  adrp x8,0x710523d000
7101df96c0  add x8,x8,#0x9a8
7101df96c4  stp x8,xzr,[x19, #0x10]
7101df96c8  cbz x0,0x7101df96d0
7101df96cc  bl 0x710392eb40
7101df96d0  mov x0,x19
7101df96d4  bl 0x710392eb40
7101df96d8  ldr x19,[sp, #0x48]
7101df96dc  stp x25,xzr,[sp, #0x40]
7101df96e0  cbz x19,0x7101df9704
7101df96e4  ldr x0,[x19, #0x18]
7101df96e8  adrp x8,0x710523d000
7101df96ec  add x8,x8,#0x9a8
7101df96f0  stp x8,xzr,[x19, #0x10]
7101df96f4  cbz x0,0x7101df96fc
7101df96f8  bl 0x710392eb40
7101df96fc  mov x0,x19
7101df9700  bl 0x710392eb40
7101df9704  stp x22,x21,[sp, #0x8]
7101df9708  ldr x8,[x20, #0x640]
7101df970c  ldr x0,[sp, #0x38]
7101df9710  adrp x1,0x710426e000
7101df9714  add x1,x1,#0x7e3
7101df9718  str x20,[sp, #0x30]
7101df971c  str x8,[x20, #0x2b8]
7101df9720  add x8,sp,#0x40
7101df9724  bl 0x7103776cd0
7101df9728  ldp x8,x26,[sp, #0x40]
7101df972c  cmp x8,x26
7101df9730  str x8,[sp, #0x28]
7101df9734  b.eq 0x7101df9b84
7101df9738  ldr x24,[sp, #0x28]
7101df973c  fmov s8,0x3f800000
7101df9740  adrp x28,0x7105239000
7101df9744  add x28,x28,#0x1c0
7101df9748  adrp x21,0x710438d000
7101df974c  add x21,x21,#0x2e
7101df9750  adrp x27,0x7104281000
7101df9754  add x27,x27,#0x1a
7101df9758  adrp x20,0x7104422000
7101df975c  add x20,x20,#0x8db
7101df9760  adrp x23,0x710523d000
7101df9764  add x23,x23,#0x9a8
7101df9768  ldr x8,[x24, #0x8]
7101df976c  ldr x8,[x8]
7101df9770  ldr x0,[sp, #0x38]
7101df9774  add x9,x8,#0xb0
7101df9778  cmp x8,#0x0
7101df977c  adrp x8,0x7104867000
7101df9780  add x8,x8,#0xc2e
7101df9784  csel x1,x8,x9,eq
7101df9788  sub x8,x29,#0xa0
7101df978c  bl 0x7103776640
7101df9790  ldp w8,w9,[x28]
7101df9794  str w9,[x28]
7101df9798  ldp w9,w10,[x28, #0x8]
7101df979c  eor w8,w8,w8, LSL #0xb
7101df97a0  eor w8,w8,w8, LSR #0x8
7101df97a4  eor w8,w8,w10
7101df97a8  eor w8,w8,w10, LSR #0x13
7101df97ac  stp w9,w10,[x28, #0x4]
7101df97b0  mov w9,#0x851f
7101df97b4  movk w9,#0x51eb, LSL #16
7101df97b8  ldur x22,[x29, #-0x98]
7101df97bc  mov w10,#0x64
7101df97c0  mov x0,x22
7101df97c4  adrp x1,0x7104455000
7101df97c8  add x1,x1,#0x4c
7101df97cc  umull x9,w8,w9
7101df97d0  mov v0.16B,v8.16B
7101df97d4  str w8,[x28, #0xc]
7101df97d8  lsr x9,x9,#0x25
7101df97dc  msub w19,w9,w10,w8
7101df97e0  bl 0x7103778300
7101df97e4  ucvtf s9,w19
7101df97e8  ldr x0,[x22, #0x8]
7101df97ec  cbz x0,0x7101df9810
7101df97f0  adrp x1,0x7104455000
7101df97f4  add x1,x1,#0x4c
7101df97f8  bl 0x71037964b0
7101df97fc  cbz x0,0x7101df9810
7101df9800  ldr x8,[x0]
7101df9804  ldr x8,[x8, #0x1a0]
7101df9808  mov v0.16B,v9.16B
7101df980c  blr x8
7101df9810  mov v0.16B,v8.16B
7101df9814  mov x0,x22
7101df9818  adrp x1,0x710434a000
7101df981c  add x1,x1,#0x8f0
7101df9820  bl 0x7103778300
7101df9824  ldr x0,[x22, #0x8]
7101df9828  cbz x0,0x7101df984c
7101df982c  adrp x1,0x710434a000
7101df9830  add x1,x1,#0x8f0
7101df9834  bl 0x71037964b0
7101df9838  cbz x0,0x7101df984c
7101df983c  ldr x8,[x0]
7101df9840  ldr x8,[x8, #0x1a0]
7101df9844  mov v0.16B,v9.16B
7101df9848  blr x8
7101df984c  mov v0.16B,v8.16B
7101df9850  mov x0,x22
7101df9854  adrp x1,0x71042c5000
7101df9858  add x1,x1,#0x3b8
7101df985c  bl 0x7103778300
7101df9860  ldr x0,[x22, #0x8]
7101df9864  cbz x0,0x7101df9888
7101df9868  adrp x1,0x71042c5000
7101df986c  add x1,x1,#0x3b8
7101df9870  bl 0x71037964b0
7101df9874  cbz x0,0x7101df9888
7101df9878  ldr x8,[x0]
7101df987c  ldr x8,[x8, #0x1a0]
7101df9880  mov v0.16B,v9.16B
7101df9884  blr x8
7101df9888  mov v0.16B,v8.16B
7101df988c  mov x0,x22
7101df9890  adrp x1,0x7104281000
7101df9894  add x1,x1,#0x5d
7101df9898  bl 0x7103778300
7101df989c  ldr x0,[x22, #0x8]
7101df98a0  cbz x0,0x7101df98c4
7101df98a4  adrp x1,0x7104281000
7101df98a8  add x1,x1,#0x5d
7101df98ac  bl 0x71037964b0
7101df98b0  cbz x0,0x7101df98c4
7101df98b4  ldr x8,[x0]
7101df98b8  ldr x8,[x8, #0x1a0]
7101df98bc  mov v0.16B,v9.16B
7101df98c0  blr x8
7101df98c4  sub x8,x29,#0xb8
7101df98c8  sub x0,x29,#0xa0
7101df98cc  adrp x1,0x710433a000
7101df98d0  add x1,x1,#0x66a
7101df98d4  bl 0x7103776640
7101df98d8  ldur x19,[x29, #-0xb0]
7101df98dc  mov v0.16B,v8.16B
7101df98e0  adrp x1,0x710436a000
7101df98e4  add x1,x1,#0xc3e
7101df98e8  mov x0,x19
7101df98ec  bl 0x7103778300
7101df98f0  stp x25,xzr,[x29, #-0xb8]
7101df98f4  cbz x19,0x7101df9910
7101df98f8  ldr x0,[x19, #0x18]
7101df98fc  stp x23,xzr,[x19, #0x10]
7101df9900  cbz x0,0x7101df9908
7101df9904  bl 0x710392eb40
7101df9908  mov x0,x19
7101df990c  bl 0x710392eb40
7101df9910  sub x8,x29,#0xb8
7101df9914  sub x0,x29,#0xa0
7101df9918  adrp x1,0x710433a000
7101df991c  add x1,x1,#0x66a
7101df9920  bl 0x7103776640
7101df9924  ldur x19,[x29, #-0xb0]
7101df9928  ldr x0,[x19, #0x8]
7101df992c  cbz x0,0x7101df9950
7101df9930  adrp x1,0x710436a000
7101df9934  add x1,x1,#0xc3e
7101df9938  bl 0x71037964b0
7101df993c  cbz x0,0x7101df9950
7101df9940  ldr x8,[x0]
7101df9944  ldr x8,[x8, #0x1a0]
7101df9948  mov v0.16B,v9.16B
7101df994c  blr x8
7101df9950  stp x25,xzr,[x29, #-0xb8]
7101df9954  cbz x19,0x7101df9970
7101df9958  ldr x0,[x19, #0x18]
7101df995c  stp x23,xzr,[x19, #0x10]
7101df9960  cbz x0,0x7101df9968
7101df9964  bl 0x710392eb40
7101df9968  mov x0,x19
7101df996c  bl 0x710392eb40
7101df9970  sub x8,x29,#0xb8
7101df9974  sub x0,x29,#0xa0
7101df9978  mov x1,x21
7101df997c  bl 0x7103776640
7101df9980  ldur x19,[x29, #-0xb0]
7101df9984  mov v0.16B,v8.16B
7101df9988  adrp x1,0x7104453000
7101df998c  add x1,x1,#0xac
7101df9990  mov x0,x19
7101df9994  bl 0x7103778300
7101df9998  stp x25,xzr,[x29, #-0xb8]
7101df999c  cbz x19,0x7101df99b8
7101df99a0  ldr x0,[x19, #0x18]
7101df99a4  stp x23,xzr,[x19, #0x10]
7101df99a8  cbz x0,0x7101df99b0
7101df99ac  bl 0x710392eb40
7101df99b0  mov x0,x19
7101df99b4  bl 0x710392eb40
7101df99b8  sub x8,x29,#0xb8
7101df99bc  sub x0,x29,#0xa0
7101df99c0  mov x1,x21
7101df99c4  bl 0x7103776640
7101df99c8  ldur x19,[x29, #-0xb0]
7101df99cc  ldr x0,[x19, #0x8]
7101df99d0  cbz x0,0x7101df99f4
7101df99d4  adrp x1,0x7104453000
7101df99d8  add x1,x1,#0xac
7101df99dc  bl 0x71037964b0
7101df99e0  cbz x0,0x7101df99f4
7101df99e4  ldr x8,[x0]
7101df99e8  ldr x8,[x8, #0x1a0]
7101df99ec  mov v0.16B,v9.16B
7101df99f0  blr x8
7101df99f4  stp x25,xzr,[x29, #-0xb8]
7101df99f8  cbz x19,0x7101df9a14
7101df99fc  ldr x0,[x19, #0x18]
7101df9a00  stp x23,xzr,[x19, #0x10]
7101df9a04  cbz x0,0x7101df9a0c
7101df9a08  bl 0x710392eb40
7101df9a0c  mov x0,x19
7101df9a10  bl 0x710392eb40
7101df9a14  sub x8,x29,#0xb8
7101df9a18  sub x0,x29,#0xa0
7101df9a1c  mov x1,x27
7101df9a20  bl 0x7103776640
7101df9a24  ldur x19,[x29, #-0xb0]
7101df9a28  mov v0.16B,v8.16B
7101df9a2c  adrp x1,0x7104442000
7101df9a30  add x1,x1,#0x147
7101df9a34  mov x0,x19
7101df9a38  bl 0x7103778300
7101df9a3c  stp x25,xzr,[x29, #-0xb8]
7101df9a40  cbz x19,0x7101df9a5c
7101df9a44  ldr x0,[x19, #0x18]
7101df9a48  stp x23,xzr,[x19, #0x10]
7101df9a4c  cbz x0,0x7101df9a54
7101df9a50  bl 0x710392eb40
7101df9a54  mov x0,x19
7101df9a58  bl 0x710392eb40
7101df9a5c  sub x8,x29,#0xb8
7101df9a60  sub x0,x29,#0xa0
7101df9a64  mov x1,x27
7101df9a68  bl 0x7103776640
7101df9a6c  ldur x19,[x29, #-0xb0]
7101df9a70  ldr x0,[x19, #0x8]
7101df9a74  cbz x0,0x7101df9a98
7101df9a78  adrp x1,0x7104442000
7101df9a7c  add x1,x1,#0x147
7101df9a80  bl 0x71037964b0
7101df9a84  cbz x0,0x7101df9a98
7101df9a88  ldr x8,[x0]
7101df9a8c  ldr x8,[x8, #0x1a0]
7101df9a90  mov v0.16B,v9.16B
7101df9a94  blr x8
7101df9a98  stp x25,xzr,[x29, #-0xb8]
7101df9a9c  cbz x19,0x7101df9ab8
7101df9aa0  ldr x0,[x19, #0x18]
7101df9aa4  stp x23,xzr,[x19, #0x10]
7101df9aa8  cbz x0,0x7101df9ab0
7101df9aac  bl 0x710392eb40
7101df9ab0  mov x0,x19
7101df9ab4  bl 0x710392eb40
7101df9ab8  sub x8,x29,#0xb8
7101df9abc  sub x0,x29,#0xa0
7101df9ac0  mov x1,x20
7101df9ac4  bl 0x7103776640
7101df9ac8  ldur x19,[x29, #-0xb0]
7101df9acc  mov v0.16B,v8.16B
7101df9ad0  adrp x1,0x7104464000
7101df9ad4  add x1,x1,#0x374
7101df9ad8  mov x0,x19
7101df9adc  bl 0x7103778300
7101df9ae0  stp x25,xzr,[x29, #-0xb8]
7101df9ae4  cbz x19,0x7101df9b00
7101df9ae8  ldr x0,[x19, #0x18]
7101df9aec  stp x23,xzr,[x19, #0x10]
7101df9af0  cbz x0,0x7101df9af8
7101df9af4  bl 0x710392eb40
7101df9af8  mov x0,x19
7101df9afc  bl 0x710392eb40
7101df9b00  sub x8,x29,#0xb8
7101df9b04  sub x0,x29,#0xa0
7101df9b08  mov x1,x20
7101df9b0c  bl 0x7103776640
7101df9b10  ldur x19,[x29, #-0xb0]
7101df9b14  ldr x0,[x19, #0x8]
7101df9b18  cbz x0,0x7101df9b3c
7101df9b1c  adrp x1,0x7104464000
7101df9b20  add x1,x1,#0x374
7101df9b24  bl 0x71037964b0
7101df9b28  cbz x0,0x7101df9b3c
7101df9b2c  ldr x8,[x0]
7101df9b30  ldr x8,[x8, #0x1a0]
7101df9b34  mov v0.16B,v9.16B
7101df9b38  blr x8
7101df9b3c  stp x25,xzr,[x29, #-0xb8]
7101df9b40  cbz x19,0x7101df9b5c
7101df9b44  ldr x0,[x19, #0x18]
7101df9b48  stp x23,xzr,[x19, #0x10]
7101df9b4c  cbz x0,0x7101df9b54
7101df9b50  bl 0x710392eb40
7101df9b54  mov x0,x19
7101df9b58  bl 0x710392eb40
7101df9b5c  stp x25,xzr,[x29, #-0xa0]
7101df9b60  ldr x0,[x22, #0x18]
7101df9b64  stp x23,xzr,[x22, #0x10]
7101df9b68  cbz x0,0x7101df9b70
7101df9b6c  bl 0x710392eb40
7101df9b70  mov x0,x22
7101df9b74  bl 0x710392eb40
7101df9b78  add x24,x24,#0x10
7101df9b7c  cmp x26,x24
7101df9b80  b.ne 0x7101df9768
7101df9b84  ldp x19,x28,[sp, #0x28]
7101df9b88  ldr x27,[sp, #0x8]
7101df9b8c  cbnz x19,0x7101df9ba4
7101df9b90  b 0x7101df9bb8
7101df9b94  ldr x8,[x26, #-0x10]!
7101df9b98  ldr x8,[x8]
7101df9b9c  mov x0,x26
7101df9ba0  blr x8
7101df9ba4  cmp x19,x26
7101df9ba8  b.ne 0x7101df9b94
7101df9bac  mov x0,x19
7101df9bb0  str x19,[sp, #0x48]
7101df9bb4  bl 0x710392eb40
7101df9bb8  mov x22,#0xce8
7101df9bbc  movk x22,#0xfc42, LSL #16
7101df9bc0  mov w24,#0x101
7101df9bc4  mov w8,#0x1
7101df9bc8  mov x21,#0x41f0000000000000
7101df9bcc  str xzr,[sp, #0x40]
7101df9bd0  add x0,sp,#0x40
7101df9bd4  movk x22,#0x7, LSL #32
7101df9bd8  strh w24,[sp, #0x48]
7101df9bdc  strh wzr,[sp, #0x4e]
7101df9be0  stur wzr,[sp, #0x4a]
7101df9be4  str w8,[sp, #0x50]
7101df9be8  strh w8,[sp, #0x54]
7101df9bec  strb w8,[sp, #0x56]
7101df9bf0  str x21,[sp, #0x58]
7101df9bf4  str wzr,[sp, #0x60]
7101df9bf8  str xzr,[sp, #0x90]
7101df9bfc  str xzr,[sp, #0xc0]
7101df9c00  str xzr,[sp, #0xf0]
7101df9c04  str xzr,[sp, #0x120]
7101df9c08  str xzr,[sp, #0x150]
7101df9c0c  str wzr,[sp, #0x160]
7101df9c10  bl 0x710337df20
7101df9c14  ldr x23,[sp, #0x38]
7101df9c18  add x19,x28,#0x28
7101df9c1c  adrp x2,0x7104307000
7101df9c20  add x2,x2,#0x72
7101df9c24  add x3,sp,#0x40
7101df9c28  mov x0,x19
7101df9c2c  mov x1,x23
7101df9c30  bl 0x7103770b30
7101df9c34  ldr x2,[sp]
7101df9c38  mov w20,#0x64
7101df9c3c  mov x0,x19
7101df9c40  mov w1,w20
7101df9c44  bl 0x71037717d0
7101df9c48  ldr x26,[sp, #0x10]
7101df9c4c  ldr w2,[x26]
7101df9c50  ldr x0,[x28, #0x28]
7101df9c54  mov w1,w20
7101df9c58  mov w3,wzr
7101df9c5c  bl 0x7103771930
7101df9c60  stur x22,[x29, #-0xa0]
7101df9c64  ldr x0,[x28, #0x28]
7101df9c68  sub x2,x29,#0xa0
7101df9c6c  mov w1,w20
7101df9c70  bl 0x7103772070
7101df9c74  sub x8,x29,#0xa0
7101df9c78  mov x0,x23
7101df9c7c  mov x1,x27
7101df9c80  bl 0x7103776640
7101df9c84  ldur x20,[x29, #-0x98]
7101df9c88  ldr x23,[x20, #0x8]
7101df9c8c  stp x25,xzr,[x29, #-0xa0]
7101df9c90  cbz x20,0x7101df9cb4
7101df9c94  ldr x0,[x20, #0x18]
7101df9c98  adrp x8,0x710523d000
7101df9c9c  add x8,x8,#0x9a8
7101df9ca0  stp x8,xzr,[x20, #0x10]
7101df9ca4  cbz x0,0x7101df9cac
7101df9ca8  bl 0x710392eb40
7101df9cac  mov x0,x20
7101df9cb0  bl 0x710392eb40
7101df9cb4  cbz x23,0x7101df9cf4
7101df9cb8  mov w20,#0x65
7101df9cbc  mov x0,x19
7101df9cc0  mov w1,w20
7101df9cc4  mov x2,x27
7101df9cc8  bl 0x71037717d0
7101df9ccc  ldr w2,[x26, #0x8]
7101df9cd0  ldr x0,[x19]
7101df9cd4  mov w1,w20
7101df9cd8  mov w3,wzr
7101df9cdc  bl 0x7103771930
7101df9ce0  stur x22,[x29, #-0xa0]
7101df9ce4  ldr x0,[x19]
7101df9ce8  sub x2,x29,#0xa0
7101df9cec  mov w1,w20
7101df9cf0  bl 0x7103772070
7101df9cf4  adrp x2,0x7104348000
7101df9cf8  add x2,x2,#0xcf6
7101df9cfc  mov w1,#0x66
7101df9d00  mov x0,x19
7101df9d04  bl 0x71037717d0
7101df9d08  ldr x0,[x19]
7101df9d0c  ldr x8,[x0]
7101df9d10  ldr x8,[x8, #0x70]
7101df9d14  mov w1,wzr
7101df9d18  blr x8
7101df9d1c  ldr x0,[x19]
7101df9d20  ldr x8,[x0]
7101df9d24  ldr x8,[x8, #0x60]
7101df9d28  mov w1,wzr
7101df9d2c  blr x8
7101df9d30  ldr x0,[sp, #0x150]
7101df9d34  add x8,sp,#0x40
7101df9d38  add x8,x8,#0xf0
7101df9d3c  cmp x8,x0
7101df9d40  b.eq 0x7101df9d54
7101df9d44  cbz x0,0x7101df9d60
7101df9d48  ldr x8,[x0]
7101df9d4c  ldr x8,[x8, #0x28]
7101df9d50  b 0x7101df9d5c
7101df9d54  ldr x8,[x0]
7101df9d58  ldr x8,[x8, #0x20]
7101df9d5c  blr x8
7101df9d60  ldr x0,[sp, #0x120]
7101df9d64  add x8,sp,#0x40
7101df9d68  add x8,x8,#0xc0
7101df9d6c  cmp x8,x0
7101df9d70  b.eq 0x7101df9d84
7101df9d74  cbz x0,0x7101df9d90
7101df9d78  ldr x8,[x0]
7101df9d7c  ldr x8,[x8, #0x28]
7101df9d80  b 0x7101df9d8c
7101df9d84  ldr x8,[x0]
7101df9d88  ldr x8,[x8, #0x20]
7101df9d8c  blr x8
7101df9d90  ldr x0,[sp, #0xf0]
7101df9d94  add x8,sp,#0x40
7101df9d98  add x8,x8,#0x90
7101df9d9c  cmp x8,x0
7101df9da0  b.eq 0x7101df9db4
7101df9da4  cbz x0,0x7101df9dc0
7101df9da8  ldr x8,[x0]
7101df9dac  ldr x8,[x8, #0x28]
7101df9db0  b 0x7101df9dbc
7101df9db4  ldr x8,[x0]
7101df9db8  ldr x8,[x8, #0x20]
7101df9dbc  blr x8
7101df9dc0  ldr x0,[sp, #0xc0]
7101df9dc4  add x8,sp,#0x40
7101df9dc8  add x8,x8,#0x60
7101df9dcc  cmp x8,x0
7101df9dd0  b.eq 0x7101df9de4
7101df9dd4  cbz x0,0x7101df9df0
7101df9dd8  ldr x8,[x0]
7101df9ddc  ldr x8,[x8, #0x28]
7101df9de0  b 0x7101df9dec
7101df9de4  ldr x8,[x0]
7101df9de8  ldr x8,[x8, #0x20]
7101df9dec  blr x8
7101df9df0  ldr x0,[sp, #0x90]
7101df9df4  add x8,sp,#0x40
7101df9df8  add x8,x8,#0x30
7101df9dfc  cmp x8,x0
7101df9e00  b.eq 0x7101df9e14
7101df9e04  cbz x0,0x7101df9e20
7101df9e08  ldr x8,[x0]
7101df9e0c  ldr x8,[x8, #0x28]
7101df9e10  b 0x7101df9e1c
7101df9e14  ldr x8,[x0]
7101df9e18  ldr x8,[x8, #0x20]
7101df9e1c  blr x8
7101df9e20  mov w19,#0x1
7101df9e24  add x0,sp,#0x40
7101df9e28  str xzr,[sp, #0x40]
7101df9e2c  strh w24,[sp, #0x48]
7101df9e30  strh wzr,[sp, #0x4e]
7101df9e34  stur wzr,[sp, #0x4a]
7101df9e38  str w19,[sp, #0x50]
7101df9e3c  strh w19,[sp, #0x54]
7101df9e40  strb w19,[sp, #0x56]
7101df9e44  str x21,[sp, #0x58]
7101df9e48  str wzr,[sp, #0x60]
7101df9e4c  str xzr,[sp, #0x90]
7101df9e50  str xzr,[sp, #0xc0]
7101df9e54  str xzr,[sp, #0xf0]
7101df9e58  str xzr,[sp, #0x120]
7101df9e5c  str xzr,[sp, #0x150]
7101df9e60  str wzr,[sp, #0x160]
7101df9e64  bl 0x710337df20
7101df9e68  ldr x1,[sp, #0x38]
7101df9e6c  strb w19,[sp, #0x4a]
7101df9e70  add x19,x28,#0x30
7101df9e74  adrp x2,0x710424f000
7101df9e78  add x2,x2,#0xd71
7101df9e7c  add x3,sp,#0x40
7101df9e80  mov x0,x19
7101df9e84  bl 0x7103770b30
7101df9e88  mov w20,#0x67
7101df9e8c  adrp x2,0x71042b4000
7101df9e90  add x2,x2,#0xa2f
7101df9e94  mov x0,x19
7101df9e98  mov w1,w20
7101df9e9c  bl 0x71037717d0
7101df9ea0  ldr w2,[x26, #0x4]
7101df9ea4  ldr x0,[x28, #0x30]
7101df9ea8  mov w1,w20
7101df9eac  mov w3,wzr
7101df9eb0  bl 0x7103771930
7101df9eb4  ldr x1,[x28, #0x30]
7101df9eb8  sub x0,x29,#0xb8
7101df9ebc  mov w2,w20
7101df9ec0  bl 0x7103771d60
7101df9ec4  ldur x20,[x29, #-0xb0]
7101df9ec8  ldr x1,[x20]
7101df9ecc  sub x0,x29,#0xa0
7101df9ed0  bl 0x710377ad90
7101df9ed4  ldur x0,[x29, #-0x98]
7101df9ed8  ldr x8,[x0]
7101df9edc  cbz x8,0x7101df9ef4
7101df9ee0  ldrb w10,[x8, #0x58]
7101df9ee4  ldrb w9,[x26, #0x10]
7101df9ee8  and w10,w10,#0xfe
7101df9eec  orr w9,w10,w9
7101df9ef0  strb w9,[x8, #0x58]
7101df9ef4  adrp x21,0x710523d000
7101df9ef8  add x21,x21,#0x9a8
7101df9efc  stp x21,xzr,[x29, #-0xa0]
7101df9f00  cbz x0,0x7101df9f08
7101df9f04  bl 0x710392eb40
7101df9f08  adrp x8,0x710523d000
7101df9f0c  add x8,x8,#0x9c8
7101df9f10  stp x8,xzr,[x29, #-0xb8]
7101df9f14  cbz x20,0x7101df9f20
7101df9f18  mov x0,x20
7101df9f1c  bl 0x710392eb40
7101df9f20  ldr x0,[x19]
7101df9f24  ldr x8,[x0]
7101df9f28  ldr x8,[x8, #0x70]
7101df9f2c  mov w1,wzr
7101df9f30  blr x8
7101df9f34  ldr x0,[x19]
7101df9f38  ldr x8,[x0]
7101df9f3c  ldr x8,[x8, #0x60]
7101df9f40  mov w1,wzr
7101df9f44  blr x8
7101df9f48  ldr x0,[sp, #0x150]
7101df9f4c  add x8,sp,#0x40
7101df9f50  add x8,x8,#0xf0
7101df9f54  cmp x8,x0
7101df9f58  b.eq 0x7101df9f74
7101df9f5c  ldr x20,[sp, #0x18]
7101df9f60  cbz x0,0x7101df9f84
7101df9f64  ldr x8,[x0]
7101df9f68  ldr x8,[x8, #0x28]
7101df9f6c  blr x8
7101df9f70  b 0x7101df9f84
7101df9f74  ldr x8,[x0]
7101df9f78  ldr x8,[x8, #0x20]
7101df9f7c  blr x8
7101df9f80  ldr x20,[sp, #0x18]
7101df9f84  ldr x0,[sp, #0x120]
7101df9f88  add x8,sp,#0x40
7101df9f8c  add x8,x8,#0xc0
7101df9f90  cmp x8,x0
7101df9f94  b.eq 0x7101df9fa8
7101df9f98  cbz x0,0x7101df9fb4
7101df9f9c  ldr x8,[x0]
7101df9fa0  ldr x8,[x8, #0x28]
7101df9fa4  b 0x7101df9fb0
7101df9fa8  ldr x8,[x0]
7101df9fac  ldr x8,[x8, #0x20]
7101df9fb0  blr x8
7101df9fb4  ldr x0,[sp, #0xf0]
7101df9fb8  add x8,sp,#0x40
7101df9fbc  add x8,x8,#0x90
7101df9fc0  cmp x8,x0
7101df9fc4  b.eq 0x7101df9fd8
7101df9fc8  cbz x0,0x7101df9fe4
7101df9fcc  ldr x8,[x0]
7101df9fd0  ldr x8,[x8, #0x28]
7101df9fd4  b 0x7101df9fe0
7101df9fd8  ldr x8,[x0]
7101df9fdc  ldr x8,[x8, #0x20]
7101df9fe0  blr x8
7101df9fe4  ldr x0,[sp, #0xc0]
7101df9fe8  add x8,sp,#0x40
7101df9fec  add x8,x8,#0x60
7101df9ff0  cmp x8,x0
7101df9ff4  b.eq 0x7101dfa008
7101df9ff8  cbz x0,0x7101dfa014
7101df9ffc  ldr x8,[x0]
7101dfa000  ldr x8,[x8, #0x28]
7101dfa004  b 0x7101dfa010
7101dfa008  ldr x8,[x0]
7101dfa00c  ldr x8,[x8, #0x20]
7101dfa010  blr x8
7101dfa014  ldr x0,[sp, #0x90]
7101dfa018  add x8,sp,#0x40
7101dfa01c  add x8,x8,#0x30
7101dfa020  cmp x8,x0
7101dfa024  b.eq 0x7101dfa038
7101dfa028  cbz x0,0x7101dfa044
7101dfa02c  ldr x8,[x0]
7101dfa030  ldr x8,[x8, #0x28]
7101dfa034  b 0x7101dfa040
7101dfa038  ldr x8,[x0]
7101dfa03c  ldr x8,[x8, #0x20]
7101dfa040  blr x8
7101dfa044  ldr w1,[x20]
7101dfa048  cmp w1,#0xd
7101dfa04c  b.eq 0x7101dfa058
7101dfa050  cmp w1,#0x4
7101dfa054  b.ne 0x7101dfa20c
7101dfa058  ldr x19,[x28, #0x6e0]
7101dfa05c  ldrb w8,[x19, #0x90]
7101dfa060  cbz w8,0x7101dfa0e0
7101dfa064  ldr w8,[x19, #0xa4]
7101dfa068  ldr x0,[x19, #0x88]
7101dfa06c  str w8,[x19, #0xa0]
7101dfa070  cbz x0,0x7101dfa0e0
7101dfa074  mov w1,wzr
7101dfa078  bl 0x710373b540
7101dfa07c  ldr x0,[x19, #0x88]
7101dfa080  str xzr,[x19, #0x88]
7101dfa084  cbz x0,0x7101dfa0e0
7101dfa088  adrp x8,0x7104f73000
7101dfa08c  add x8,x8,#0xd50
7101dfa090  str x8,[x0, #0x8]
7101dfa094  ldr x8,[x0, #0x10]
7101dfa098  cbz x8,0x7101dfa0d4
7101dfa09c  adrp x9,0x7106dd5000
7101dfa0a0  ldrb w9,[x9, #0x3a8]
7101dfa0a4  cmp w9,#0x1
7101dfa0a8  b.ne 0x7101dfa0d4
7101dfa0ac  adrp x10,0x7106dd5000
7101dfa0b0  ldr w9,[x0, #0x18]
7101dfa0b4  ldr w10,[x10, #0x3ac]
7101dfa0b8  cmp w9,w10
7101dfa0bc  b.ne 0x7101dfa0d4
7101dfa0c0  ldr wzr,[x8, #0x38]!
7101dfa0c4  ldaxr w9,[x8]
7101dfa0c8  sub w9,w9,#0x1
7101dfa0cc  stlxr w10,w9,[x8]
7101dfa0d0  cbnz w10,0x7101dfa0c4
7101dfa0d4  str xzr,[x0, #0x10]
7101dfa0d8  strb wzr,[x0, #0x20]
7101dfa0dc  bl 0x710392eb40
7101dfa0e0  ldr x0,[sp, #0x38]
7101dfa0e4  adrp x1,0x71042b4000
7101dfa0e8  add x1,x1,#0xa41
7101dfa0ec  sub x8,x29,#0xa0
7101dfa0f0  bl 0x7103776640
7101dfa0f4  adrp x1,0x710436c000
7101dfa0f8  add x1,x1,#0x8f9
7101dfa0fc  add x8,sp,#0x40
7101dfa100  sub x0,x29,#0xa0
7101dfa104  bl 0x7103776640
7101dfa108  ldur x19,[x29, #-0x98]
7101dfa10c  stp x25,xzr,[x29, #-0xa0]
7101dfa110  cbz x19,0x7101dfa12c
7101dfa114  ldr x0,[x19, #0x18]
7101dfa118  stp x21,xzr,[x19, #0x10]
7101dfa11c  cbz x0,0x7101dfa124
7101dfa120  bl 0x710392eb40
7101dfa124  mov x0,x19
7101dfa128  bl 0x710392eb40
7101dfa12c  ldr x0,[x28, #0x6e0]
7101dfa130  adrp x2,0x71042b2000
7101dfa134  add x2,x2,#0x92e
7101dfa138  adrp x3,0x71043be000
7101dfa13c  add x3,x3,#0xb6c
7101dfa140  add x1,sp,#0x40
7101dfa144  bl 0x7103399950
7101dfa148  ldr x0,[x28, #0x6e0]
7101dfa14c  adrp x2,0x7104464000
7101dfa150  add x2,x2,#0x38d
7101dfa154  adrp x3,0x7104348000
7101dfa158  add x3,x3,#0xacf
7101dfa15c  add x1,sp,#0x40
7101dfa160  bl 0x7103399a70
7101dfa164  ldr x8,[x28, #0x6e0]
7101dfa168  mov x9,#0xfc80
7101dfa16c  movk x9,#0x5bf6, LSL #16
7101dfa170  mov x10,#0xf4dd
7101dfa174  movk x10,#0x7123, LSL #16
7101dfa178  movk x9,#0x20, LSL #32
7101dfa17c  movk x10,#0x25, LSL #32
7101dfa180  stp x9,x10,[x8, #0x58]
7101dfa184  ldr x8,[x28, #0x6e0]
7101dfa188  mov x9,#0x1a56
7101dfa18c  movk x9,#0xfc22, LSL #16
7101dfa190  mov x10,#0xd702
7101dfa194  movk x10,#0xef44, LSL #16
7101dfa198  movk x9,#0x21, LSL #32
7101dfa19c  movk x10,#0x26, LSL #32
7101dfa1a0  stp x9,x10,[x8, #0x68]
7101dfa1a4  adrp x8,0x7105314000
7101dfa1a8  ldr x8,[x8, #0x510]
7101dfa1ac  ldr x8,[x8]
7101dfa1b0  ldr x8,[x8, #0xd8]
7101dfa1b4  ldr x8,[x8]
7101dfa1b8  ldr x8,[x8]
7101dfa1bc  ldr w3,[x8, #0x24]
7101dfa1c0  ldr x0,[x28, #0x6e0]
7101dfa1c4  str w3,[x28, #0x6d0]
7101dfa1c8  ldr w8,[x0, #0x94]
7101dfa1cc  cmp w8,w3
7101dfa1d0  b.eq 0x7101dfa1e4
7101dfa1d4  add x1,x0,#0x18
7101dfa1d8  mov w2,#0x1
7101dfa1dc  str w3,[x0, #0x94]
7101dfa1e0  bl 0x710377a280
7101dfa1e4  ldr x19,[sp, #0x48]
7101dfa1e8  stp x25,xzr,[sp, #0x40]
7101dfa1ec  cbz x19,0x7101dfa208
7101dfa1f0  ldr x0,[x19, #0x18]
7101dfa1f4  stp x21,xzr,[x19, #0x10]
7101dfa1f8  cbz x0,0x7101dfa200
7101dfa1fc  bl 0x710392eb40
7101dfa200  mov x0,x19
7101dfa204  bl 0x710392eb40
7101dfa208  ldr w1,[x20]
7101dfa20c  mov x0,x28
7101dfa210  bl 0x7101df4b10
7101dfa214  mov x0,x28
7101dfa218  bl 0x7101df5560
7101dfa21c  ldr w8,[x28, #0x638]
7101dfa220  mov w19,#0x1
7101dfa224  cmp w8,#0x4
7101dfa228  b.eq 0x7101dfa238
7101dfa22c  cmp w8,#0xd
7101dfa230  b.eq 0x7101dfa238
7101dfa234  mov w19,wzr
7101dfa238  adrp x9,0x7105329000
7101dfa23c  ldr x9,[x9, #0xf98]
7101dfa240  stur xzr,[x29, #-0xb8]
7101dfa244  stp xzr,xzr,[x29, #-0xb0]
7101dfa248  ldr x9,[x9]
7101dfa24c  sub w8,w8,#0x1
7101dfa250  cmp w8,#0xc
7101dfa254  str w19,[sp, #0x28]
7101dfa258  b.hi 0x7101dfa280
7101dfa25c  adrp x10,0x71044fb000
7101dfa260  add x10,x10,#0x8e8
7101dfa264  ldrsw x8,[x10, x8, LSL #0x2]
7101dfa268  add x8,x8,x10
7101dfa26c  br x8
7101dfa270  ldr x0,[x9, #0x30]
7101dfa274  sub x1,x29,#0xb8
7101dfa278  mov w2,#0x1
7101dfa27c  b 0x7101dfa28c
7101dfa280  ldr x0,[x9, #0x30]
7101dfa284  sub x1,x29,#0xb8
7101dfa288  mov w2,wzr
7101dfa28c  bl 0x7102527570
7101dfa290  ldr x10,[x28, #0x678]
7101dfa294  ldr x9,[x28, #0x670]
7101dfa298  sub x10,x10,x9
7101dfa29c  ldr w8,[x28, #0x688]
7101dfa2a0  asr x10,x10,#0x2
7101dfa2a4  cmp x10,x8
7101dfa2a8  b.ls 0x7101dfab24
7101dfa2ac  ldr w20,[x9, x8, LSL #0x2]
7101dfa2b0  ldr w8,[x28, #0x638]
7101dfa2b4  ldrsb w21,[x28, #0x63e]
7101dfa2b8  str w8,[x28, #0x30c]
7101dfa2bc  add x0,x28,#0x240
7101dfa2c0  sub x8,x29,#0xb8
7101dfa2c4  add x19,x28,#0x60
7101dfa2c8  cmp x0,x8
7101dfa2cc  b.eq 0x7101dfa2d8
7101dfa2d0  ldp x1,x2,[x29, #-0xb8]
7101dfa2d4  bl 0x7101958040
7101dfa2d8  ldr x8,[x28, #0x248]
7101dfa2dc  mov x0,x19
7101dfa2e0  mov w1,w20
7101dfa2e4  str x8,[x28, #0x258]
7101dfa2e8  bl 0x7101dfe6f0
7101dfa2ec  ldr w8,[sp, #0x28]
7101dfa2f0  add x0,x28,#0x310
7101dfa2f4  mov w2,#0x2fc
7101dfa2f8  mov w1,wzr
7101dfa2fc  str w21,[x28, #0x304]
7101dfa300  strb w8,[x28, #0x300]
7101dfa304  bl 0x71039c02a0
7101dfa308  mov x8,#0x41800000
7101dfa30c  movk x8,#0x4248, LSL #48
7101dfa310  mov w21,#0x1
7101dfa314  stp xzr,x8,[sp, #0x40]
7101dfa318  mov x8,#0x3f800000
7101dfa31c  movk x8,#0x101, LSL #32
7101dfa320  movk x8,#0x1, LSL #48
7101dfa324  add x0,sp,#0x40
7101dfa328  strh wzr,[sp, #0x58]
7101dfa32c  strb w21,[sp, #0x5a]
7101dfa330  str xzr,[sp, #0x90]
7101dfa334  str x8,[sp, #0x50]
7101dfa338  add x20,sp,#0x40
7101dfa33c  str xzr,[sp, #0xc0]
7101dfa340  str xzr,[sp, #0xf0]
7101dfa344  str xzr,[sp, #0x120]
7101dfa348  str xzr,[sp, #0x150]
7101dfa34c  strb wzr,[sp, #0x61]
7101dfa350  sturh wzr,[sp, #0x5f]
7101dfa354  stur wzr,[sp, #0x5b]
7101dfa358  bl 0x710337e790
7101dfa35c  ldr w8,[sp, #0x24]
7101dfa360  tbnz w8,#0x0,0x7101dfa3ac
7101dfa364  add x1,x20,#0x30
7101dfa368  adrp x8,0x71050b0000
7101dfa36c  add x8,x8,#0xec0
7101dfa370  sub x22,x29,#0xa0
7101dfa374  sub x0,x29,#0xa0
7101dfa378  stur x8,[x29, #-0xa0]
7101dfa37c  stur x22,[x29, #-0x80]
7101dfa380  bl 0x71003cb050
7101dfa384  ldur x0,[x29, #-0x80]
7101dfa388  cmp x22,x0
7101dfa38c  b.eq 0x7101dfa3a0
7101dfa390  cbz x0,0x7101dfa3ac
7101dfa394  ldr x8,[x0]
7101dfa398  ldr x8,[x8, #0x28]
7101dfa39c  b 0x7101dfa3a8
7101dfa3a0  ldr x8,[x0]
7101dfa3a4  ldr x8,[x8, #0x20]
7101dfa3a8  blr x8
7101dfa3ac  str w21,[sp, #0x54]
7101dfa3b0  strh w24,[sp, #0x5c]
7101dfa3b4  add x0,x28,#0x38
7101dfa3b8  ldrb w9,[x28, #0x63c]
7101dfa3bc  ldp x10,x8,[x29, #-0xb8]
7101dfa3c0  sub x8,x8,x10
7101dfa3c4  lsr x8,x8,#0x3
7101dfa3c8  strb w9,[sp, #0x5e]
7101dfa3cc  ldrb w9,[x28, #0x63d]
7101dfa3d0  ldr x1,[sp, #0x38]
7101dfa3d4  adrp x2,0x710424f000
7101dfa3d8  add x2,x2,#0xc05
7101dfa3dc  add x3,sp,#0x40
7101dfa3e0  mov x4,x19
7101dfa3e4  strb w9,[sp, #0x5f]
7101dfa3e8  str w8,[sp, #0x44]
7101dfa3ec  bl 0x7103781a20
7101dfa3f0  ldr x0,[x28, #0x38]
7101dfa3f4  ldr x8,[x0]
7101dfa3f8  ldr x8,[x8, #0x70]
7101dfa3fc  mov w1,wzr
7101dfa400  blr x8
7101dfa404  ldp x8,x9,[x29, #-0xb8]
7101dfa408  cmp x8,x9
7101dfa40c  cset w1,ne
7101dfa410  mov x0,x28
7101dfa414  bl 0x7101df6240
7101dfa418  ldr x0,[sp, #0x150]
7101dfa41c  add x8,x20,#0xf0
7101dfa420  cmp x8,x0
7101dfa424  b.eq 0x7101dfa438
7101dfa428  cbz x0,0x7101dfa444
7101dfa42c  ldr x8,[x0]
7101dfa430  ldr x8,[x8, #0x28]
7101dfa434  b 0x7101dfa440
7101dfa438  ldr x8,[x0]
7101dfa43c  ldr x8,[x8, #0x20]
7101dfa440  blr x8
7101dfa444  ldr x0,[sp, #0x120]
7101dfa448  add x8,sp,#0x40
7101dfa44c  add x8,x8,#0xc0
7101dfa450  cmp x8,x0
7101dfa454  b.eq 0x7101dfa468
7101dfa458  cbz x0,0x7101dfa474
7101dfa45c  ldr x8,[x0]
7101dfa460  ldr x8,[x8, #0x28]
7101dfa464  b 0x7101dfa470
7101dfa468  ldr x8,[x0]
7101dfa46c  ldr x8,[x8, #0x20]
7101dfa470  blr x8
7101dfa474  ldr x0,[sp, #0xf0]
7101dfa478  add x8,sp,#0x40
7101dfa47c  add x8,x8,#0x90
7101dfa480  cmp x8,x0
7101dfa484  b.eq 0x7101dfa498
7101dfa488  cbz x0,0x7101dfa4a4
7101dfa48c  ldr x8,[x0]
7101dfa490  ldr x8,[x8, #0x28]
7101dfa494  b 0x7101dfa4a0
7101dfa498  ldr x8,[x0]
7101dfa49c  ldr x8,[x8, #0x20]
7101dfa4a0  blr x8
7101dfa4a4  ldr x0,[sp, #0xc0]
7101dfa4a8  add x8,sp,#0x40
7101dfa4ac  add x8,x8,#0x60
7101dfa4b0  cmp x8,x0
7101dfa4b4  b.eq 0x7101dfa4c8
7101dfa4b8  cbz x0,0x7101dfa4d4
7101dfa4bc  ldr x8,[x0]
7101dfa4c0  ldr x8,[x8, #0x28]
7101dfa4c4  b 0x7101dfa4d0
7101dfa4c8  ldr x8,[x0]
7101dfa4cc  ldr x8,[x8, #0x20]
7101dfa4d0  blr x8
7101dfa4d4  ldr x0,[sp, #0x90]
7101dfa4d8  add x8,sp,#0x40
7101dfa4dc  add x8,x8,#0x30
7101dfa4e0  cmp x8,x0
7101dfa4e4  b.eq 0x7101dfa4f8
7101dfa4e8  cbz x0,0x7101dfa504
7101dfa4ec  ldr x8,[x0]
7101dfa4f0  ldr x8,[x8, #0x28]
7101dfa4f4  b 0x7101dfa500
7101dfa4f8  ldr x8,[x0]
7101dfa4fc  ldr x8,[x8, #0x20]
7101dfa500  blr x8
7101dfa504  ldur x0,[x29, #-0xb8]
7101dfa508  cbz x0,0x7101dfa514
7101dfa50c  stur x0,[x29, #-0xb0]
7101dfa510  bl 0x710392eb40
7101dfa514  ldr w1,[x28, #0x638]
7101dfa518  mov x0,x28
7101dfa51c  bl 0x7101df5790
7101dfa520  add sp,sp,#0x210
7101dfa524  ldp x29,x30,[sp, #0x60]
7101dfa528  ldp x20,x19,[sp, #0x50]
7101dfa52c  ldp x22,x21,[sp, #0x40]
7101dfa530  ldp x24,x23,[sp, #0x30]
7101dfa534  ldp x26,x25,[sp, #0x20]
7101dfa538  ldp x28,x27,[sp, #0x10]
7101dfa53c  ldp d9,d8,[sp], #0x70
7101dfa540  ret
7101dfa544  ldr x0,[x9, #0x30]
7101dfa548  sub x1,x29,#0xb8
7101dfa54c  mov w2,#0x2
7101dfa550  bl 0x7102527570
7101dfa554  ldrb w25,[x28, #0x6a7]
7101dfa558  stp xzr,xzr,[sp, #0x48]
7101dfa55c  str xzr,[sp, #0x40]
7101dfa560  cbz w25,0x7101dfa86c
7101dfa564  ldrh w20,[x28, #0x69a]
7101dfa568  orr w8,wzr,#0xffff
7101dfa56c  cmp w20,w8
7101dfa570  b.eq 0x7101dfa878
7101dfa574  mov w0,#0x10
7101dfa578  mov w1,#0x2
7101dfa57c  bl 0x710392e290
7101dfa580  mov x19,x0
7101dfa584  cbnz x0,0x7101dfa5d0
7101dfa588  adrp x8,0x7105332000
7101dfa58c  ldr x0,[x8, #0xf00]
7101dfa590  cbz x0,0x7101dfa5cc
7101dfa594  mov w8,#0x2
7101dfa598  stur wzr,[x29, #-0x6c]
7101dfa59c  sub x1,x29,#0x6c
7101dfa5a0  stur x8,[x29, #-0xa0]
7101dfa5a4  ldr x8,[x0]
7101dfa5a8  ldr x8,[x8, #0x30]
7101dfa5ac  sub x2,x29,#0xa0
7101dfa5b0  blr x8
7101dfa5b4  tbz w0,#0x0,0x7101dfa5cc
7101dfa5b8  mov w0,#0x10
7101dfa5bc  mov w1,#0x2
7101dfa5c0  bl 0x710392e290
7101dfa5c4  mov x19,x0
7101dfa5c8  cbnz x0,0x7101dfa5d0
7101dfa5cc  mov x19,xzr
7101dfa5d0  mov x8,x19
7101dfa5d4  strh w20,[x8], #0x2
7101dfa5d8  stp x19,x8,[sp, #0x40]
7101dfa5dc  str x8,[sp, #0x50]
7101dfa5e0  cmp w25,#0x1
7101dfa5e4  b.ne 0x7101dfa888
7101dfa5e8  b 0x7101dfa970
7101dfa5ec  ldr x9,[x9, #0x30]
7101dfa5f0  mov w8,#0x1940
7101dfa5f4  movk w8,#0x1, LSL #16
7101dfa5f8  add x27,x9,x8
7101dfa5fc  mov w28,#0x5300
7101dfa600  movk w28,#0x7, LSL #16
7101dfa604  orr x25,xzr,#0xffffffffffffffe
7101dfa608  stur xzr,[x29, #-0xb0]
7101dfa60c  str x9,[sp, #0x18]
7101dfa610  ldrsh w8,[x27, #0x8]
7101dfa614  cmn w8,#0x1
7101dfa618  b.eq 0x7101dfa720
7101dfa61c  ldp x9,x8,[x29, #-0xb0]
7101dfa620  cmp x9,x8
7101dfa624  b.cs 0x7101dfa63c
7101dfa628  str x27,[x9]
7101dfa62c  ldur x8,[x29, #-0xb0]
7101dfa630  add x8,x8,#0x8
7101dfa634  stur x8,[x29, #-0xb0]
7101dfa638  b 0x7101dfa720
7101dfa63c  ldur x19,[x29, #-0xb8]
7101dfa640  sub x20,x9,x19
7101dfa644  asr x23,x20,#0x3
7101dfa648  add x9,x23,#0x1
7101dfa64c  lsr x10,x9,#0x3d
7101dfa650  cbnz x10,0x7101dfab1c
7101dfa654  sub x8,x8,x19
7101dfa658  asr x10,x8,#0x3
7101dfa65c  cmp x10,x25
7101dfa660  b.hi 0x7101dfa680
7101dfa664  asr x8,x8,#0x2
7101dfa668  cmp x8,x9
7101dfa66c  csel x26,x9,x8,cc
7101dfa670  cbz x26,0x7101dfa6e4
7101dfa674  lsr x8,x26,#0x3d
7101dfa678  cbz x8,0x7101dfa684
7101dfa67c  b 0x7101dfab2c
7101dfa680  orr x26,xzr,#0x1fffffffffffffff
7101dfa684  lsl x8,x26,#0x3
7101dfa688  cmp x8,#0x0
7101dfa68c  csinc x22,x8,xzr,ne
7101dfa690  mov w0,#0x10
7101dfa694  mov x1,x22
7101dfa698  bl 0x710392e290
7101dfa69c  mov x21,x0
7101dfa6a0  cbnz x0,0x7101dfa6e8
7101dfa6a4  adrp x8,0x7105332000
7101dfa6a8  ldr x0,[x8, #0xf00]
7101dfa6ac  cbz x0,0x7101dfa6e4
7101dfa6b0  stur wzr,[x29, #-0xa0]
7101dfa6b4  str x22,[sp, #0x40]
7101dfa6b8  ldr x8,[x0]
7101dfa6bc  ldr x8,[x8, #0x30]
7101dfa6c0  sub x1,x29,#0xa0
7101dfa6c4  add x2,sp,#0x40
7101dfa6c8  blr x8
7101dfa6cc  tbz w0,#0x0,0x7101dfa6e4
7101dfa6d0  mov w0,#0x10
7101dfa6d4  mov x1,x22
7101dfa6d8  bl 0x710392e290
7101dfa6dc  mov x21,x0
7101dfa6e0  cbnz x0,0x7101dfa6e8
7101dfa6e4  mov x21,xzr
7101dfa6e8  add x22,x21,x23, LSL #0x3
7101dfa6ec  add x23,x21,x26, LSL #0x3
7101dfa6f0  cmp x20,#0x1
7101dfa6f4  str x27,[x22], #0x8
7101dfa6f8  b.lt 0x7101dfa70c
7101dfa6fc  mov x0,x21
7101dfa700  mov x1,x19
7101dfa704  mov x2,x20
7101dfa708  bl 0x71039c00e0
7101dfa70c  stp x21,x22,[x29, #-0xb8]
7101dfa710  stur x23,[x29, #-0xa8]
7101dfa714  cbz x19,0x7101dfa720
7101dfa718  mov x0,x19
7101dfa71c  bl 0x710392eb40
7101dfa720  add x27,x27,#0x50
7101dfa724  subs x28,x28,#0x50
7101dfa728  b.ne 0x7101dfa610
7101dfa72c  ldr x9,[sp, #0x18]
7101dfa730  ldr x28,[sp, #0x30]
7101dfa734  mov w8,#0x8cc0
7101dfa738  movk w8,#0x8, LSL #16
7101dfa73c  add x26,x9,x8
7101dfa740  mov w27,#0x1f40
7101dfa744  orr x25,xzr,#0xffffffffffffffe
7101dfa748  ldrsh w8,[x26, #0x8]
7101dfa74c  cmn w8,#0x1
7101dfa750  b.eq 0x7101dfa85c
7101dfa754  ldp x9,x8,[x29, #-0xb0]
7101dfa758  cmp x9,x8
7101dfa75c  b.cs 0x7101dfa774
7101dfa760  str x26,[x9]
7101dfa764  ldur x8,[x29, #-0xb0]
7101dfa768  add x8,x8,#0x8
7101dfa76c  stur x8,[x29, #-0xb0]
7101dfa770  b 0x7101dfa85c
7101dfa774  ldur x19,[x29, #-0xb8]
7101dfa778  sub x20,x9,x19
7101dfa77c  asr x23,x20,#0x3
7101dfa780  add x9,x23,#0x1
7101dfa784  lsr x10,x9,#0x3d
7101dfa788  cbnz x10,0x7101dfab1c
7101dfa78c  sub x8,x8,x19
7101dfa790  asr x10,x8,#0x3
7101dfa794  cmp x10,x25
7101dfa798  b.hi 0x7101dfa7b8
7101dfa79c  asr x8,x8,#0x2
7101dfa7a0  cmp x8,x9
7101dfa7a4  csel x28,x9,x8,cc
7101dfa7a8  cbz x28,0x7101dfa81c
7101dfa7ac  lsr x8,x28,#0x3d
7101dfa7b0  cbz x8,0x7101dfa7bc
7101dfa7b4  b 0x7101dfab2c
7101dfa7b8  orr x28,xzr,#0x1fffffffffffffff
7101dfa7bc  lsl x8,x28,#0x3
7101dfa7c0  cmp x8,#0x0
7101dfa7c4  csinc x22,x8,xzr,ne
7101dfa7c8  mov w0,#0x10
7101dfa7cc  mov x1,x22
7101dfa7d0  bl 0x710392e290
7101dfa7d4  mov x21,x0
7101dfa7d8  cbnz x0,0x7101dfa820
7101dfa7dc  adrp x8,0x7105332000
7101dfa7e0  ldr x0,[x8, #0xf00]
7101dfa7e4  cbz x0,0x7101dfa81c
7101dfa7e8  stur wzr,[x29, #-0xa0]
7101dfa7ec  str x22,[sp, #0x40]
7101dfa7f0  ldr x8,[x0]
7101dfa7f4  ldr x8,[x8, #0x30]
7101dfa7f8  sub x1,x29,#0xa0
7101dfa7fc  add x2,sp,#0x40
7101dfa800  blr x8
7101dfa804  tbz w0,#0x0,0x7101dfa81c
7101dfa808  mov w0,#0x10
7101dfa80c  mov x1,x22
7101dfa810  bl 0x710392e290
7101dfa814  mov x21,x0
7101dfa818  cbnz x0,0x7101dfa820
7101dfa81c  mov x21,xzr
7101dfa820  add x22,x21,x23, LSL #0x3
7101dfa824  add x23,x21,x28, LSL #0x3
7101dfa828  cmp x20,#0x1
7101dfa82c  str x26,[x22], #0x8
7101dfa830  b.lt 0x7101dfa844
7101dfa834  mov x0,x21
7101dfa838  mov x1,x19
7101dfa83c  mov x2,x20
7101dfa840  bl 0x71039c00e0
7101dfa844  ldr x28,[sp, #0x30]
7101dfa848  stp x21,x22,[x29, #-0xb8]
7101dfa84c  stur x23,[x29, #-0xa8]
7101dfa850  cbz x19,0x7101dfa85c
7101dfa854  mov x0,x19
7101dfa858  bl 0x710392eb40
7101dfa85c  add x26,x26,#0x50
7101dfa860  subs x27,x27,#0x50
7101dfa864  b.ne 0x7101dfa748
7101dfa868  b 0x7101dfa290
7101dfa86c  mov x19,xzr
7101dfa870  mov x8,xzr
7101dfa874  b 0x7101dfa888
7101dfa878  mov x19,xzr
7101dfa87c  mov x8,xzr
7101dfa880  cmp w25,#0x1
7101dfa884  b.eq 0x7101dfa970
7101dfa888  ldrh w26,[x28, #0x69c]
7101dfa88c  orr w9,wzr,#0xffff
7101dfa890  cmp w26,w9
7101dfa894  b.eq 0x7101dfa968
7101dfa898  sub x20,x8,x19
7101dfa89c  cmn x20,#0x2
7101dfa8a0  b.lt 0x7101dfab30
7101dfa8a4  asr x23,x20,#0x1
7101dfa8a8  add x8,x23,#0x1
7101dfa8ac  cmp x20,x8
7101dfa8b0  orr x9,xzr,#0x3fffffffffffffff
7101dfa8b4  csel x8,x8,x20,cc
7101dfa8b8  cmp x23,x9
7101dfa8bc  orr x9,xzr,#0x7fffffffffffffff
7101dfa8c0  csel x27,x8,x9,cc
7101dfa8c4  cbz x27,0x7101dfa92c
7101dfa8c8  tbnz x27,#0x3f,0x7101dfab2c
7101dfa8cc  lsl x8,x27,#0x1
7101dfa8d0  cmp x8,#0x0
7101dfa8d4  csinc x21,x8,xzr,ne
7101dfa8d8  mov w0,#0x10
7101dfa8dc  mov x1,x21
7101dfa8e0  bl 0x710392e290
7101dfa8e4  mov x22,x0
7101dfa8e8  cbnz x0,0x7101dfa930
7101dfa8ec  adrp x8,0x7105332000
7101dfa8f0  ldr x0,[x8, #0xf00]
7101dfa8f4  cbz x0,0x7101dfa92c
7101dfa8f8  stur wzr,[x29, #-0x6c]
7101dfa8fc  stur x21,[x29, #-0xa0]
7101dfa900  ldr x8,[x0]
7101dfa904  ldr x8,[x8, #0x30]
7101dfa908  sub x1,x29,#0x6c
7101dfa90c  sub x2,x29,#0xa0
7101dfa910  blr x8
7101dfa914  tbz w0,#0x0,0x7101dfa92c
7101dfa918  mov w0,#0x10
7101dfa91c  mov x1,x21
7101dfa920  bl 0x710392e290
7101dfa924  mov x22,x0
7101dfa928  cbnz x0,0x7101dfa930
7101dfa92c  mov x22,xzr
7101dfa930  add x21,x22,x23, LSL #0x1
7101dfa934  add x23,x22,x27, LSL #0x1
7101dfa938  cmp x20,#0x1
7101dfa93c  strh w26,[x21], #0x2
7101dfa940  b.lt 0x7101dfa954
7101dfa944  mov x0,x22
7101dfa948  mov x1,x19
7101dfa94c  mov x2,x20
7101dfa950  bl 0x71039c00e0
7101dfa954  stp x22,x21,[sp, #0x40]
7101dfa958  str x23,[sp, #0x50]
7101dfa95c  cbz x19,0x7101dfa968
7101dfa960  mov x0,x19
7101dfa964  bl 0x710392eb40
7101dfa968  cmp w25,#0x2
7101dfa96c  b.eq 0x7101dfaa7c
7101dfa970  ldrh w25,[x28, #0x69e]
7101dfa974  orr w8,wzr,#0xffff
7101dfa978  cmp w25,w8
7101dfa97c  b.eq 0x7101dfaa7c
7101dfa980  ldp x9,x8,[sp, #0x48]
7101dfa984  cmp x9,x8
7101dfa988  b.eq 0x7101dfa9a0
7101dfa98c  strh w25,[x9]
7101dfa990  ldr x8,[sp, #0x48]
7101dfa994  add x8,x8,#0x2
7101dfa998  str x8,[sp, #0x48]
7101dfa99c  b 0x7101dfaa7c
7101dfa9a0  ldr x19,[sp, #0x40]
7101dfa9a4  sub x20,x9,x19
7101dfa9a8  cmn x20,#0x2
7101dfa9ac  b.lt 0x7101dfab30
7101dfa9b0  asr x23,x20,#0x1
7101dfa9b4  add x9,x23,#0x1
7101dfa9b8  sub x8,x8,x19
7101dfa9bc  asr x10,x8,#0x1
7101dfa9c0  cmp x8,x9
7101dfa9c4  csel x8,x9,x8,cc
7101dfa9c8  orr x9,xzr,#0x3fffffffffffffff
7101dfa9cc  cmp x10,x9
7101dfa9d0  orr x9,xzr,#0x7fffffffffffffff
7101dfa9d4  csel x26,x8,x9,cc
7101dfa9d8  cbz x26,0x7101dfaa40
7101dfa9dc  tbnz x26,#0x3f,0x7101dfab2c
7101dfa9e0  lsl x8,x26,#0x1
7101dfa9e4  cmp x8,#0x0
7101dfa9e8  csinc x21,x8,xzr,ne
7101dfa9ec  mov w0,#0x10
7101dfa9f0  mov x1,x21
7101dfa9f4  bl 0x710392e290
7101dfa9f8  mov x22,x0
7101dfa9fc  cbnz x0,0x7101dfaa44
7101dfaa00  adrp x8,0x7105332000
7101dfaa04  ldr x0,[x8, #0xf00]
7101dfaa08  cbz x0,0x7101dfaa40
7101dfaa0c  stur wzr,[x29, #-0x6c]
7101dfaa10  stur x21,[x29, #-0xa0]
7101dfaa14  ldr x8,[x0]
7101dfaa18  ldr x8,[x8, #0x30]
7101dfaa1c  sub x1,x29,#0x6c
7101dfaa20  sub x2,x29,#0xa0
7101dfaa24  blr x8
7101dfaa28  tbz w0,#0x0,0x7101dfaa40
7101dfaa2c  mov w0,#0x10
7101dfaa30  mov x1,x21
7101dfaa34  bl 0x710392e290
7101dfaa38  mov x22,x0
7101dfaa3c  cbnz x0,0x7101dfaa44
7101dfaa40  mov x22,xzr
7101dfaa44  add x21,x22,x23, LSL #0x1
7101dfaa48  add x23,x22,x26, LSL #0x1
7101dfaa4c  cmp x20,#0x1
7101dfaa50  strh w25,[x21], #0x2
7101dfaa54  b.lt 0x7101dfaa68
7101dfaa58  mov x0,x22
7101dfaa5c  mov x1,x19
7101dfaa60  mov x2,x20
7101dfaa64  bl 0x71039c00e0
7101dfaa68  stp x22,x21,[sp, #0x40]
7101dfaa6c  str x23,[sp, #0x50]
7101dfaa70  cbz x19,0x7101dfaa7c
7101dfaa74  mov x0,x19
7101dfaa78  bl 0x710392eb40
7101dfaa7c  ldp x0,x8,[sp, #0x40]
7101dfaa80  cmp x8,x0
7101dfaa84  b.eq 0x7101dfab0c
7101dfaa88  ldur x8,[x29, #-0xb0]
7101dfaa8c  mov x20,xzr
7101dfaa90  ldur x19,[x29, #-0xb8]
7101dfaa94  cmp x19,x8
7101dfaa98  b.ne 0x7101dfaaa4
7101dfaa9c  b 0x7101dfaaf4
7101dfaaa0  ldr x0,[sp, #0x40]
7101dfaaa4  ldr x10,[x19]
7101dfaaa8  ldrh w9,[x0, x20, LSL #0x1]
7101dfaaac  ldrh w10,[x10]
7101dfaab0  cmp w9,w10
7101dfaab4  b.ne 0x7101dfaae4
7101dfaab8  add x1,x19,#0x8
7101dfaabc  subs x2,x8,x1
7101dfaac0  asr x21,x2,#0x3
7101dfaac4  b.eq 0x7101dfaad0
7101dfaac8  mov x0,x19
7101dfaacc  bl 0x71039c00a0
7101dfaad0  add x8,x19,x21, LSL #0x3
7101dfaad4  stur x8,[x29, #-0xb0]
7101dfaad8  cmp x19,x8
7101dfaadc  b.ne 0x7101dfaaa0
7101dfaae0  b 0x7101dfaaf0
7101dfaae4  add x19,x19,#0x8
7101dfaae8  cmp x19,x8
7101dfaaec  b.ne 0x7101dfaaa0
7101dfaaf0  ldr x0,[sp, #0x40]
7101dfaaf4  ldr x9,[sp, #0x48]
7101dfaaf8  sub x9,x9,x0
7101dfaafc  add w20,w20,#0x1
7101dfab00  asr x9,x9,#0x1
7101dfab04  cmp x9,x20
7101dfab08  b.hi 0x7101dfaa90
7101dfab0c  cbz x0,0x7101dfa290
7101dfab10  str x0,[sp, #0x48]
7101dfab14  bl 0x710392eb40
7101dfab18  b 0x7101dfa290
7101dfab1c  sub x0,x29,#0xb8
7101dfab20  bl 0x71039c0c00
7101dfab24  add x0,x28,#0x670
7101dfab28  bl 0x71039c1330
7101dfab2c  bl 0x71039c2650
7101dfab30  add x0,sp,#0x40
7101dfab34  bl 0x71039c0c00
