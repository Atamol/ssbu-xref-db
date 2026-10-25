// addr:      7101ae9600
// offset:    0x1ae9600
// name:      FUN_7101ae9600
// mangled:   
// size:      1604

7101ae9600  sub sp,sp,#0x70
7101ae9604  str d8,[sp, #0x20]
7101ae9608  str x25,[sp, #0x28]
7101ae960c  stp x24,x23,[sp, #0x30]
7101ae9610  stp x22,x21,[sp, #0x40]
7101ae9614  stp x20,x19,[sp, #0x50]
7101ae9618  stp x29,x30,[sp, #0x60]
7101ae961c  add x29,sp,#0x60
7101ae9620  ldr x8,[x1, #0x8]
7101ae9624  ldr x9,[x0, #0x208]
7101ae9628  mov x21,x3
7101ae962c  ldr x8,[x8]
7101ae9630  ldr x9,[x9]
7101ae9634  mov x20,x2
7101ae9638  mov x19,x1
7101ae963c  mov x22,x0
7101ae9640  cmp x8,x9
7101ae9644  b.ne 0x7101ae96d8
7101ae9648  ldr x8,[x19, #0x18]
7101ae964c  ldr x9,[x22, #0x218]
7101ae9650  ldr x8,[x8]
7101ae9654  ldr x9,[x9]
7101ae9658  cmp x8,x9
7101ae965c  b.ne 0x7101ae96d8
7101ae9660  ldr x8,[x19, #0x28]
7101ae9664  ldr x9,[x22, #0x228]
7101ae9668  ldr x8,[x8]
7101ae966c  ldr x9,[x9]
7101ae9670  cmp x8,x9
7101ae9674  b.ne 0x7101ae96d8
7101ae9678  ldr x8,[x19, #0x38]
7101ae967c  ldr x9,[x22, #0x238]
7101ae9680  ldr x8,[x8]
7101ae9684  ldr x9,[x9]
7101ae9688  cmp x8,x9
7101ae968c  b.ne 0x7101ae96d8
7101ae9690  ldr x8,[x19, #0x48]
7101ae9694  ldr x9,[x22, #0x248]
7101ae9698  ldr x8,[x8]
7101ae969c  ldr x9,[x9]
7101ae96a0  cmp x8,x9
7101ae96a4  b.ne 0x7101ae96d8
7101ae96a8  ldr x8,[x19, #0x58]
7101ae96ac  ldr x9,[x22, #0x258]
7101ae96b0  ldr x8,[x8]
7101ae96b4  ldr x9,[x9]
7101ae96b8  cmp x8,x9
7101ae96bc  b.ne 0x7101ae96d8
7101ae96c0  ldr x8,[x19, #0x68]
7101ae96c4  ldr x9,[x22, #0x268]
7101ae96c8  ldr x8,[x8]
7101ae96cc  ldr x9,[x9]
7101ae96d0  cmp x8,x9
7101ae96d4  b.eq 0x7101ae9b50
7101ae96d8  ldr x8,[x21, #0x8]
7101ae96dc  ldr x8,[x8]
7101ae96e0  ldr x23,[x22, #0x128]
7101ae96e4  cbz x8,0x7101ae9740
7101ae96e8  ldr x0,[x23, #0x8]
7101ae96ec  cbz x0,0x7101ae972c
7101ae96f0  adrp x1,0x710432a000
7101ae96f4  add x1,x1,#0x87b
7101ae96f8  bl 0x71037964b0
7101ae96fc  cbz x0,0x7101ae972c
7101ae9700  ldr x8,[x0]
7101ae9704  ldr x8,[x8, #0x130]
7101ae9708  blr x8
7101ae970c  ldr x23,[x22, #0x128]
7101ae9710  tbz w0,#0x0,0x7101ae972c
7101ae9714  fmov s0,0x3f800000
7101ae9718  adrp x1,0x7104433000
7101ae971c  add x1,x1,#0x949
7101ae9720  mov x0,x23
7101ae9724  bl 0x7103778300
7101ae9728  b 0x7101ae9828
7101ae972c  adrp x1,0x7104433000
7101ae9730  add x1,x1,#0x949
7101ae9734  mov x0,x23
7101ae9738  bl 0x7103778760
7101ae973c  b 0x7101ae9828
7101ae9740  fmov s8,0x3f800000
7101ae9744  mov v0.16B,v8.16B
7101ae9748  adrp x1,0x71043be000
7101ae974c  add x1,x1,#0xebf
7101ae9750  mov x0,x23
7101ae9754  bl 0x7103778300
7101ae9758  ldr x0,[x22, #0x128]
7101ae975c  mov v0.16B,v8.16B
7101ae9760  adrp x1,0x710432a000
7101ae9764  add x1,x1,#0x87b
7101ae9768  bl 0x7103778300
7101ae976c  mov w8,#0x5a
7101ae9770  add x23,x22,#0x280
7101ae9774  str w8,[x22, #0x350]
7101ae9778  adrp x1,0x710437a000
7101ae977c  add x1,x1,#0xe67
7101ae9780  add x8,sp,#0x8
7101ae9784  mov x0,x23
7101ae9788  bl 0x7103776910
7101ae978c  ldr x24,[sp, #0x10]
7101ae9790  ldr x0,[x24, #0x10]
7101ae9794  cbz x0,0x7101ae97ac
7101ae9798  add x1,sp,#0x1c
7101ae979c  mov w2,wzr
7101ae97a0  mov w3,wzr
7101ae97a4  str wzr,[sp, #0x1c]
7101ae97a8  bl 0x71037a2270
7101ae97ac  adrp x25,0x710523d000
7101ae97b0  add x25,x25,#0x9a8
7101ae97b4  stp x25,xzr,[sp, #0x8]
7101ae97b8  cbz x24,0x7101ae97c4
7101ae97bc  mov x0,x24
7101ae97c0  bl 0x710392eb40
7101ae97c4  adrp x1,0x71042c3000
7101ae97c8  add x1,x1,#0x645
7101ae97cc  add x8,sp,#0x8
7101ae97d0  mov x0,x23
7101ae97d4  bl 0x7103776910
7101ae97d8  ldr x23,[sp, #0x10]
7101ae97dc  ldr x0,[x23, #0x10]
7101ae97e0  cbz x0,0x7101ae97f8
7101ae97e4  add x1,sp,#0x1c
7101ae97e8  mov w2,wzr
7101ae97ec  mov w3,wzr
7101ae97f0  str wzr,[sp, #0x1c]
7101ae97f4  bl 0x71037a2270
7101ae97f8  stp x25,xzr,[sp, #0x8]
7101ae97fc  cbz x23,0x7101ae9808
7101ae9800  mov x0,x23
7101ae9804  bl 0x710392eb40
7101ae9808  ldr x8,[x22, #0x218]
7101ae980c  ldr x0,[x8, #0x10]
7101ae9810  cbz x0,0x7101ae9828
7101ae9814  add x1,sp,#0x8
7101ae9818  mov w2,wzr
7101ae981c  mov w3,wzr
7101ae9820  str wzr,[sp, #0x8]
7101ae9824  bl 0x71037a2270
7101ae9828  ldr x8,[x21, #0x8]
7101ae982c  ldr x8,[x8]
7101ae9830  cbz x8,0x7101ae9924
7101ae9834  mov w8,#0x5a
7101ae9838  strb wzr,[x22, #0x354]
7101ae983c  adrp x1,0x710437a000
7101ae9840  add x1,x1,#0xe67
7101ae9844  str w8,[x22, #0x350]
7101ae9848  add x22,x19,#0x80
7101ae984c  add x8,sp,#0x8
7101ae9850  mov x0,x22
7101ae9854  add x23,x20,#0xc
7101ae9858  bl 0x7103776910
7101ae985c  ldr x24,[sp, #0x10]
7101ae9860  ldr x0,[x24, #0x10]
7101ae9864  cbz x0,0x7101ae9878
7101ae9868  mov w2,#0xffffffff
7101ae986c  mov w3,#0x1
7101ae9870  mov x1,x23
7101ae9874  bl 0x71037a2270
7101ae9878  adrp x25,0x710523d000
7101ae987c  add x25,x25,#0x9a8
7101ae9880  stp x25,xzr,[sp, #0x8]
7101ae9884  cbz x24,0x7101ae9890
7101ae9888  mov x0,x24
7101ae988c  bl 0x710392eb40
7101ae9890  adrp x1,0x71042c3000
7101ae9894  add x1,x1,#0x645
7101ae9898  add x8,sp,#0x8
7101ae989c  mov x0,x22
7101ae98a0  bl 0x7103776910
7101ae98a4  ldr x22,[sp, #0x10]
7101ae98a8  ldr x0,[x22, #0x10]
7101ae98ac  cbz x0,0x7101ae98c0
7101ae98b0  mov w2,#0xffffffff
7101ae98b4  mov w3,#0x1
7101ae98b8  mov x1,x23
7101ae98bc  bl 0x71037a2270
7101ae98c0  stp x25,xzr,[sp, #0x8]
7101ae98c4  cbz x22,0x7101ae98d0
7101ae98c8  mov x0,x22
7101ae98cc  bl 0x710392eb40
7101ae98d0  ldr x8,[x19, #0x88]
7101ae98d4  ldr x8,[x8, #0x8]
7101ae98d8  cbz x8,0x7101ae9a80
7101ae98dc  ldr x22,[x8, #0x78]
7101ae98e0  adrp x8,0x710593b000
7101ae98e4  add x8,x8,#0xa40
7101ae98e8  ldarb w8,[x8]
7101ae98ec  tbz w8,#0x0,0x7101ae9bd8
7101ae98f0  cbz x22,0x7101ae9a80
7101ae98f4  ldr x8,[x22]
7101ae98f8  ldr x8,[x8]
7101ae98fc  mov x0,x22
7101ae9900  blr x8
7101ae9904  cbz x0,0x7101ae9a80
7101ae9908  adrp x8,0x710593b000
7101ae990c  add x8,x8,#0xa58
7101ae9910  cmp x0,x8
7101ae9914  b.eq 0x7101ae99f8
7101ae9918  ldr x0,[x0]
7101ae991c  cbnz x0,0x7101ae9910
7101ae9920  b 0x7101ae9a80
7101ae9924  ldrb w8,[x22, #0x354]
7101ae9928  cbnz w8,0x7101ae99d8
7101ae992c  ldr x0,[x19, #0x78]
7101ae9930  bl 0x7103779650
7101ae9934  mov w8,#0x5a
7101ae9938  add x19,x19,#0x80
7101ae993c  str w8,[x22, #0x350]
7101ae9940  adrp x1,0x710437a000
7101ae9944  add x1,x1,#0xe67
7101ae9948  add x8,sp,#0x8
7101ae994c  mov x0,x19
7101ae9950  bl 0x7103776910
7101ae9954  ldr x20,[sp, #0x10]
7101ae9958  ldr x0,[x20, #0x10]
7101ae995c  cbz x0,0x7101ae9974
7101ae9960  add x1,sp,#0x1c
7101ae9964  mov w2,wzr
7101ae9968  mov w3,wzr
7101ae996c  str wzr,[sp, #0x1c]
7101ae9970  bl 0x71037a2270
7101ae9974  adrp x21,0x710523d000
7101ae9978  add x21,x21,#0x9a8
7101ae997c  stp x21,xzr,[sp, #0x8]
7101ae9980  cbz x20,0x7101ae998c
7101ae9984  mov x0,x20
7101ae9988  bl 0x710392eb40
7101ae998c  adrp x1,0x71042c3000
7101ae9990  add x1,x1,#0x645
7101ae9994  add x8,sp,#0x8
7101ae9998  mov x0,x19
7101ae999c  bl 0x7103776910
7101ae99a0  ldr x19,[sp, #0x10]
7101ae99a4  ldr x0,[x19, #0x10]
7101ae99a8  cbz x0,0x7101ae99c0
7101ae99ac  add x1,sp,#0x1c
7101ae99b0  mov w2,wzr
7101ae99b4  mov w3,wzr
7101ae99b8  str wzr,[sp, #0x1c]
7101ae99bc  bl 0x71037a2270
7101ae99c0  stp x21,xzr,[sp, #0x8]
7101ae99c4  cbz x19,0x7101ae99d0
7101ae99c8  mov x0,x19
7101ae99cc  bl 0x710392eb40
7101ae99d0  mov w8,#0x1
7101ae99d4  strb w8,[x22, #0x354]
7101ae99d8  ldr d8,[sp, #0x20]
7101ae99dc  ldp x29,x30,[sp, #0x60]
7101ae99e0  ldp x20,x19,[sp, #0x50]
7101ae99e4  ldr x25,[sp, #0x28]
7101ae99e8  ldp x22,x21,[sp, #0x40]
7101ae99ec  ldp x24,x23,[sp, #0x30]
7101ae99f0  add sp,sp,#0x70
7101ae99f4  ret
7101ae99f8  ldr w9,[x22, #0x54]
7101ae99fc  ldr x8,[x22, #0x18]
7101ae9a00  str w9,[x22, #0x58]
7101ae9a04  cbz x8,0x7101ae9a18
7101ae9a08  str w9,[x8, #0x30]
7101ae9a0c  ldrb w9,[x8, #0x58]
7101ae9a10  orr w9,w9,#0x10
7101ae9a14  strb w9,[x8, #0x58]
7101ae9a18  ldr x8,[x22, #0x20]
7101ae9a1c  cbz x8,0x7101ae9a34
7101ae9a20  ldr w9,[x22, #0x58]
7101ae9a24  str w9,[x8, #0x30]
7101ae9a28  ldrb w9,[x8, #0x58]
7101ae9a2c  orr w9,w9,#0x10
7101ae9a30  strb w9,[x8, #0x58]
7101ae9a34  ldr x0,[x22, #0x28]
7101ae9a38  cbz x0,0x7101ae9a4c
7101ae9a3c  ldr x8,[x0]
7101ae9a40  ldr x8,[x8, #0x180]
7101ae9a44  fmov s0,wzr
7101ae9a48  blr x8
7101ae9a4c  ldr x0,[x22, #0x30]
7101ae9a50  cbz x0,0x7101ae9a7c
7101ae9a54  ldrb w8,[x22, #0x63]
7101ae9a58  cbz w8,0x7101ae9a6c
7101ae9a5c  ldr x8,[x0]
7101ae9a60  ldr x8,[x8, #0x190]
7101ae9a64  blr x8
7101ae9a68  b 0x7101ae9a7c
7101ae9a6c  ldr x8,[x0]
7101ae9a70  ldr x8,[x8, #0x180]
7101ae9a74  fmov s0,wzr
7101ae9a78  blr x8
7101ae9a7c  strh wzr,[x22, #0x64]
7101ae9a80  add x0,x19,#0x70
7101ae9a84  mov x1,x21
7101ae9a88  bl 0x7103779480
7101ae9a8c  ldrsw x8,[x20, #0x60]
7101ae9a90  mov x9,#-0x7777
7101ae9a94  movk x9,#0x8888, LSL #16
7101ae9a98  mul x9,x8,x9
7101ae9a9c  lsr x9,x9,#0x20
7101ae9aa0  add w9,w9,w8
7101ae9aa4  asr w10,w9,#0x5
7101ae9aa8  add w9,w10,w9, LSR #0x1f
7101ae9aac  mov w10,#0xffffffc4
7101ae9ab0  madd w8,w9,w10,w8
7101ae9ab4  cmp w9,#0x3e7
7101ae9ab8  mov w10,#0x3e7
7101ae9abc  csel w9,w9,w10,lt
7101ae9ac0  cmp w8,#0x3e7
7101ae9ac4  mov w21,#0x3e8
7101ae9ac8  adrp x1,0x7104421000
7101ae9acc  add x1,x1,#0xe2f
7101ae9ad0  csel w8,w8,w10,lt
7101ae9ad4  madd w3,w9,w21,w8
7101ae9ad8  mov w2,#0x1
7101ae9adc  mov x0,x19
7101ae9ae0  bl 0x710377a280
7101ae9ae4  ldp w8,w9,[x20]
7101ae9ae8  mov w10,#0x4240
7101ae9aec  movk w10,#0xf, LSL #16
7101ae9af0  ldp x29,x30,[sp, #0x60]
7101ae9af4  ldp x24,x23,[sp, #0x30]
7101ae9af8  ubfx w13,w8,#0xc,#0x4
7101ae9afc  and w11,w8,#0xfff
7101ae9b00  mul w11,w11,w10
7101ae9b04  madd w11,w13,w21,w11
7101ae9b08  ubfx w12,w8,#0x15,#0x5
7101ae9b0c  mul w10,w12,w10
7101ae9b10  lsr w12,w8,#0x1a
7101ae9b14  ubfx w8,w8,#0x10,#0x5
7101ae9b18  ldr d8,[sp, #0x20]
7101ae9b1c  add x0,x19,#0x10
7101ae9b20  ldp x20,x19,[sp, #0x50]
7101ae9b24  ldr x25,[sp, #0x28]
7101ae9b28  and w9,w9,#0x3f
7101ae9b2c  adrp x1,0x7104339000
7101ae9b30  add x1,x1,#0xca6
7101ae9b34  mov w2,#0x2
7101ae9b38  add w3,w11,w8
7101ae9b3c  madd w8,w12,w21,w10
7101ae9b40  ldp x22,x21,[sp, #0x40]
7101ae9b44  add w4,w8,w9
7101ae9b48  add sp,sp,#0x70
7101ae9b4c  b 0x710377a280
7101ae9b50  ldr x8,[x19, #0x78]
7101ae9b54  ldr x9,[x22, #0x278]
7101ae9b58  ldr x8,[x8]
7101ae9b5c  ldr x9,[x9]
7101ae9b60  cmp x8,x9
7101ae9b64  b.ne 0x7101ae96d8
7101ae9b68  add x8,x22,#0x1f0
7101ae9b6c  cmp x8,x21
7101ae9b70  b.eq 0x7101ae96d8
7101ae9b74  ldr x9,[x21, #0x8]
7101ae9b78  ldr x8,[x22, #0x1f8]
7101ae9b7c  ldp x10,x9,[x9]
7101ae9b80  cbz x9,0x7101ae9b98
7101ae9b84  add x11,x9,#0x8
7101ae9b88  ldxr x12,[x11]
7101ae9b8c  add x12,x12,#0x1
7101ae9b90  stxr w13,x12,[x11]
7101ae9b94  cbnz w13,0x7101ae9b88
7101ae9b98  ldr x23,[x8, #0x8]
7101ae9b9c  stp x10,x9,[x8]
7101ae9ba0  cbz x23,0x7101ae96d8
7101ae9ba4  add x8,x23,#0x8
7101ae9ba8  ldaxr x9,[x8]
7101ae9bac  sub x10,x9,#0x1
7101ae9bb0  stlxr w11,x10,[x8]
7101ae9bb4  cbnz w11,0x7101ae9ba8
7101ae9bb8  cbnz x9,0x7101ae96d8
7101ae9bbc  ldr x8,[x23]
7101ae9bc0  ldr x8,[x8, #0x10]
7101ae9bc4  mov x0,x23
7101ae9bc8  blr x8
7101ae9bcc  mov x0,x23
7101ae9bd0  bl 0x71039c2670
7101ae9bd4  b 0x7101ae96d8
7101ae9bd8  adrp x0,0x710593b000
7101ae9bdc  add x0,x0,#0xa40
7101ae9be0  bl 0x71039c06b0
7101ae9be4  cbz w0,0x7101ae98f0
7101ae9be8  adrp x8,0x710593b000
7101ae9bec  add x8,x8,#0xa48
7101ae9bf0  ldarb w8,[x8]
7101ae9bf4  tbz w8,#0x0,0x7101ae9c1c
7101ae9bf8  adrp x8,0x710593b000
7101ae9bfc  adrp x9,0x710593b000
7101ae9c00  add x9,x9,#0xa50
7101ae9c04  adrp x0,0x710593b000
7101ae9c08  add x0,x0,#0xa40
7101ae9c0c  str x9,[x8, #0xa58]
7101ae9c10  bl 0x71039c06c0
7101ae9c14  cbnz x22,0x7101ae98f4
7101ae9c18  b 0x7101ae9a80
7101ae9c1c  adrp x0,0x710593b000
7101ae9c20  add x0,x0,#0xa48
7101ae9c24  bl 0x71039c06b0
7101ae9c28  cbz w0,0x7101ae9bf8
7101ae9c2c  adrp x8,0x710593b000
7101ae9c30  adrp x0,0x710593b000
7101ae9c34  add x0,x0,#0xa48
7101ae9c38  str xzr,[x8, #0xa50]
7101ae9c3c  bl 0x71039c06c0
7101ae9c40  b 0x7101ae9bf8
