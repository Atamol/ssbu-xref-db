// addr:      7101af97f0
// offset:    0x1af97f0
// name:      FUN_7101af97f0
// mangled:   
// size:      1136

7101af97f0  sub sp,sp,#0xa0
7101af97f4  str d8,[sp, #0x60]
7101af97f8  str x23,[sp, #0x68]
7101af97fc  stp x22,x21,[sp, #0x70]
7101af9800  stp x20,x19,[sp, #0x80]
7101af9804  stp x29,x30,[sp, #0x90]
7101af9808  add x29,sp,#0x90
7101af980c  ldr w8,[x0, #0xec]
7101af9810  mov x19,x0
7101af9814  cbz w8,0x7101af9820
7101af9818  add x20,x19,#0x138
7101af981c  b 0x7101af98a4
7101af9820  ldr w8,[x19, #0x1fc]
7101af9824  cmp w8,#0x1
7101af9828  str wzr,[x19, #0x1d4]
7101af982c  str wzr,[x19, #0x1dc]
7101af9830  b.eq 0x7101af9898
7101af9834  ldr x8,[x19, #0x130]
7101af9838  ldr x20,[x8]
7101af983c  mov x8,sp
7101af9840  add x0,x20,#0x8
7101af9844  adrp x1,0x71043ad000
7101af9848  add x1,x1,#0xfe3
7101af984c  bl 0x7103776910
7101af9850  ldr x0,[sp, #0x8]
7101af9854  ldr x8,[x0]
7101af9858  cbz x8,0x7101af9868
7101af985c  ldrb w9,[x8, #0x58]
7101af9860  orr w9,w9,#0x1
7101af9864  strb w9,[x8, #0x58]
7101af9868  adrp x8,0x710523d000
7101af986c  add x8,x8,#0x9a8
7101af9870  stp x8,xzr,[sp]
7101af9874  cbz x0,0x7101af987c
7101af9878  bl 0x710392eb40
7101af987c  ldr x0,[x20, #0x10]
7101af9880  fmov s0,0x3f800000
7101af9884  adrp x1,0x71042a3000
7101af9888  add x1,x1,#0x672
7101af988c  bl 0x7103778300
7101af9890  mov w8,#0x1
7101af9894  str w8,[x19, #0x1fc]
7101af9898  ldr x0,[x19, #0x138]
7101af989c  add x20,x19,#0x138
7101af98a0  bl 0x710376b960
7101af98a4  mov x0,x19
7101af98a8  bl 0x7101afd490
7101af98ac  ldr x0,[x19, #0x138]
7101af98b0  ldr x8,[x0]
7101af98b4  ldr x8,[x8, #0x78]
7101af98b8  blr x8
7101af98bc  tbz w0,#0x0,0x7101af98d4
7101af98c0  ldr x0,[x19, #0x138]
7101af98c4  ldr x8,[x0]
7101af98c8  ldr x8,[x8, #0x70]
7101af98cc  mov w1,wzr
7101af98d0  blr x8
7101af98d4  ldr x8,[x19, #0x120]
7101af98d8  cbz x8,0x7101af9c40
7101af98dc  mov x0,x19
7101af98e0  bl 0x7101afa660
7101af98e4  sub w8,w0,#0x2
7101af98e8  cmp w8,#0x4
7101af98ec  b.hi 0x7101af9c40
7101af98f0  adrp x9,0x71044f8000
7101af98f4  add x9,x9,#0x450
7101af98f8  lsr x22,x0,#0x20
7101af98fc  ldrsw x8,[x9, x8, LSL #0x2]
7101af9900  add x8,x8,x9
7101af9904  br x8
7101af9908  cmp w22,#0x0
7101af990c  cset w1,ne
7101af9910  mov x0,x19
7101af9914  bl 0x7101afdbe0
7101af9918  ldrb w8,[x19, #0x1f4]
7101af991c  cbz w8,0x7101af9bb8
7101af9920  ldr w8,[x19, #0x1e4]
7101af9924  cmp w8,#0x1
7101af9928  b.ne 0x7101af9ba8
7101af992c  cmp w22,#0x0
7101af9930  mov x0,x19
7101af9934  mov w1,wzr
7101af9938  cset w20,ne
7101af993c  bl 0x7101afb9a0
7101af9940  mov x0,x19
7101af9944  mov w1,w20
7101af9948  bl 0x7101afdcf0
7101af994c  ldrsw x8,[x19, #0xe4]
7101af9950  cmp w8,#0x13
7101af9954  b.cs 0x7101af9c5c
7101af9958  add x8,x19,x8, LSL #0x2
7101af995c  mov w9,#0x5
7101af9960  b 0x7101af9c3c
7101af9964  cmp w22,#0x0
7101af9968  cset w1,ne
7101af996c  mov x0,x19
7101af9970  bl 0x7101afdcf0
7101af9974  b 0x7101af9c40
7101af9978  mov x21,x1
7101af997c  cbz w21,0x7101af9998
7101af9980  cmp w22,#0x0
7101af9984  cset w2,ne
7101af9988  mov x0,x20
7101af998c  mov w1,w21
7101af9990  bl 0x7103771a80
7101af9994  str w21,[x19, #0x1e0]
7101af9998  ldr x8,[x19, #0x128]
7101af999c  ldr x8,[x8]
7101af99a0  adrp x9,0x710593b000
7101af99a4  ldr x9,[x9, #0x988]
7101af99a8  ldr x9,[x9, #0x8]
7101af99ac  ldr x8,[x8]
7101af99b0  ldr w10,[x9]
7101af99b4  ldr x8,[x8, #0x600]
7101af99b8  ldr w8,[x8, #0x494]
7101af99bc  mov w23,#0x1
7101af99c0  lsl w8,w23,w8
7101af99c4  orr w8,w10,w8
7101af99c8  str w8,[x9]
7101af99cc  ldr x8,[x19, #0x128]
7101af99d0  ldr x8,[x8]
7101af99d4  ldrb w1,[x19, #0x1f1]
7101af99d8  ldr x0,[x8]
7101af99dc  bl 0x71037760f0
7101af99e0  adrp x21,0x710523d000
7101af99e4  add x21,x21,#0x9e8
7101af99e8  mov w0,#0x10
7101af99ec  orr w1,wzr,#0x18
7101af99f0  stur x21,[x29, #-0x40]
7101af99f4  bl 0x710392e290
7101af99f8  mov x20,x0
7101af99fc  cbnz x0,0x7101af9a48
7101af9a00  adrp x8,0x7105332000
7101af9a04  ldr x0,[x8, #0xf00]
7101af9a08  cbz x0,0x7101af9a44
7101af9a0c  orr w8,wzr,#0x18
7101af9a10  str wzr,[sp, #0x40]
7101af9a14  add x1,sp,#0x40
7101af9a18  str x8,[sp]
7101af9a1c  ldr x8,[x0]
7101af9a20  ldr x8,[x8, #0x30]
7101af9a24  mov x2,sp
7101af9a28  blr x8
7101af9a2c  tbz w0,#0x0,0x7101af9a44
7101af9a30  mov w0,#0x10
7101af9a34  orr w1,wzr,#0x18
7101af9a38  bl 0x710392e290
7101af9a3c  mov x20,x0
7101af9a40  cbnz x0,0x7101af9a48
7101af9a44  mov x20,xzr
7101af9a48  stp xzr,xzr,[x20]
7101af9a4c  strb w23,[x20, #0x10]
7101af9a50  stur x20,[x29, #-0x38]
7101af9a54  ldrb w8,[x19, #0x1f4]
7101af9a58  cbz w8,0x7101af9a94
7101af9a5c  ldr x8,[x19, #0x130]
7101af9a60  ldr x8,[x8]
7101af9a64  add x0,x8,#0x8
7101af9a68  adrp x1,0x71042b3000
7101af9a6c  add x1,x1,#0xefb
7101af9a70  mov x8,sp
7101af9a74  bl 0x71037780e0
7101af9a78  ldr x8,[sp, #0x8]
7101af9a7c  str xzr,[sp, #0x8]
7101af9a80  stur x8,[x29, #-0x38]
7101af9a84  cbz x20,0x7101af9a90
7101af9a88  mov x0,x20
7101af9a8c  bl 0x710392eb40
7101af9a90  stp x21,xzr,[sp]
7101af9a94  ldr x8,[x19, #0x128]
7101af9a98  ldr x8,[x8]
7101af9a9c  add x0,x8,#0x8
7101af9aa0  adrp x1,0x71042b3000
7101af9aa4  add x1,x1,#0xefb
7101af9aa8  add x8,sp,#0x40
7101af9aac  bl 0x71037780e0
7101af9ab0  cbz w22,0x7101af9ae8
7101af9ab4  fmov s8,0x3f800000
7101af9ab8  mov v0.16B,v8.16B
7101af9abc  add x0,sp,#0x40
7101af9ac0  bl 0x710377aee0
7101af9ac4  mov v0.16B,v8.16B
7101af9ac8  sub x0,x29,#0x40
7101af9acc  bl 0x710377aee0
7101af9ad0  b 0x7101af9af8
7101af9ad4  cmp w22,#0x0
7101af9ad8  cset w1,ne
7101af9adc  mov x0,x19
7101af9ae0  bl 0x7101afbc50
7101af9ae4  b 0x7101af9c40
7101af9ae8  add x0,sp,#0x40
7101af9aec  bl 0x710377b140
7101af9af0  sub x0,x29,#0x40
7101af9af4  bl 0x710377b140
7101af9af8  ldr x0,[x19, #0x138]
7101af9afc  ldr x8,[x0]
7101af9b00  ldr x8,[x8, #0x70]
7101af9b04  mov w1,#0x1
7101af9b08  mov w22,#0x1
7101af9b0c  blr x8
7101af9b10  ldrb w8,[x19, #0x1f3]
7101af9b14  cbnz w8,0x7101af9c04
7101af9b18  adrp x8,0x710532f000
7101af9b1c  ldr x8,[x8, #0x8d0]
7101af9b20  ldr x0,[x8, #0x8]
7101af9b24  ldrb w8,[x0, #0x191]
7101af9b28  cbnz w8,0x7101af9bd0
7101af9b2c  mov x20,#0xab34
7101af9b30  movk x20,#0xd3fe, LSL #16
7101af9b34  movk x20,#0x15, LSL #32
7101af9b38  mov w2,#0x4
7101af9b3c  mov x1,x20
7101af9b40  bl 0x7103313f20
7101af9b44  tbz w0,#0x0,0x7101af9bd0
7101af9b48  mov x0,sp
7101af9b4c  mov x1,x20
7101af9b50  bl 0x71024076d0
7101af9b54  ldr x8,[sp, #0x10]
7101af9b58  adrp x9,0x7104f73000
7101af9b5c  add x9,x9,#0xd50
7101af9b60  str x9,[sp, #0x8]
7101af9b64  cbz x8,0x7101af9bfc
7101af9b68  adrp x8,0x7106dd5000
7101af9b6c  ldrb w8,[x8, #0x3a8]
7101af9b70  cmp w8,#0x1
7101af9b74  b.ne 0x7101af9bfc
7101af9b78  adrp x9,0x7106dd5000
7101af9b7c  ldr w8,[sp, #0x18]
7101af9b80  ldr w9,[x9, #0x3ac]
7101af9b84  cmp w8,w9
7101af9b88  b.ne 0x7101af9bfc
7101af9b8c  ldr x8,[sp, #0x10]
7101af9b90  ldr wzr,[x8, #0x38]!
7101af9b94  ldaxr w9,[x8]
7101af9b98  sub w9,w9,#0x1
7101af9b9c  stlxr w10,w9,[x8]
7101af9ba0  cbnz w10,0x7101af9b94
7101af9ba4  b 0x7101af9bfc
7101af9ba8  cmp w22,#0x0
7101af9bac  cset w1,ne
7101af9bb0  mov x0,x19
7101af9bb4  bl 0x7101afbc50
7101af9bb8  ldrsw x8,[x19, #0xe4]
7101af9bbc  cmp w8,#0x13
7101af9bc0  b.cs 0x7101af9c5c
7101af9bc4  add x8,x19,x8, LSL #0x2
7101af9bc8  str wzr,[x8, #0x98]
7101af9bcc  b 0x7101af9c40
7101af9bd0  mov x8,#0x650000000000
7101af9bd4  movk x8,#0x87, LSL #48
7101af9bd8  strb wzr,[sp, #0x20]
7101af9bdc  stp xzr,x8,[sp, #0x10]
7101af9be0  mov x8,#-0x1
7101af9be4  stp x8,xzr,[sp, #0x28]
7101af9be8  adrp x8,0x7104f73000
7101af9bec  add x8,x8,#0xd50
7101af9bf0  str wzr,[sp]
7101af9bf4  str xzr,[sp, #0x38]
7101af9bf8  str x8,[sp, #0x8]
7101af9bfc  str xzr,[sp, #0x10]
7101af9c00  strb wzr,[sp, #0x20]
7101af9c04  strb w22,[x19, #0x1f3]
7101af9c08  ldr x0,[sp, #0x48]
7101af9c0c  stp x21,xzr,[sp, #0x40]
7101af9c10  cbz x0,0x7101af9c18
7101af9c14  bl 0x710392eb40
7101af9c18  ldur x0,[x29, #-0x38]
7101af9c1c  stp x21,xzr,[x29, #-0x40]
7101af9c20  cbz x0,0x7101af9c28
7101af9c24  bl 0x710392eb40
7101af9c28  ldrsw x8,[x19, #0xe4]
7101af9c2c  cmp w8,#0x13
7101af9c30  b.cs 0x7101af9c5c
7101af9c34  add x8,x19,x8, LSL #0x2
7101af9c38  orr w9,wzr,#0x3
7101af9c3c  str w9,[x8, #0x98]
7101af9c40  ldr d8,[sp, #0x60]
7101af9c44  ldp x29,x30,[sp, #0x90]
7101af9c48  ldp x20,x19,[sp, #0x80]
7101af9c4c  ldr x23,[sp, #0x68]
7101af9c50  ldp x22,x21,[sp, #0x70]
7101af9c54  add sp,sp,#0xa0
7101af9c58  ret
7101af9c5c  bl 0x71039c2650
