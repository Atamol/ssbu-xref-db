// addr:      71019b98c0
// offset:    0x19b98c0
// name:      FUN_71019b98c0
// mangled:   
// size:      4068

71019b98c0  stp d9,d8,[sp, #-0x70]!
71019b98c4  stp x28,x27,[sp, #0x10]
71019b98c8  stp x26,x25,[sp, #0x20]
71019b98cc  stp x24,x23,[sp, #0x30]
71019b98d0  stp x22,x21,[sp, #0x40]
71019b98d4  stp x20,x19,[sp, #0x50]
71019b98d8  stp x29,x30,[sp, #0x60]
71019b98dc  add x29,sp,#0x60
71019b98e0  sub sp,sp,#0x3a0
71019b98e4  ldr w8,[x0, #0x1fc]
71019b98e8  mov x28,x0
71019b98ec  cbz w8,0x71019b996c
71019b98f0  ldr x8,[x28, #0x30]
71019b98f4  ldr x0,[x8, #0x8]
71019b98f8  cbz x0,0x71019b991c
71019b98fc  adrp x1,0x71042b3000
71019b9900  add x1,x1,#0xcc4
71019b9904  bl 0x71037964b0
71019b9908  cbz x0,0x71019b991c
71019b990c  ldr x8,[x0]
71019b9910  ldr x8,[x8, #0x138]
71019b9914  blr x8
71019b9918  tbz w0,#0x0,0x71019ba874
71019b991c  ldr w8,[x28, #0x358]
71019b9920  sub w9,w8,#0x2
71019b9924  ldrsw x8,[x28, #0x1f4]
71019b9928  cmp w9,#0x2
71019b992c  b.hi 0x71019b99a0
71019b9930  cmp w8,#0x13
71019b9934  b.cs 0x71019ba898
71019b9938  add x8,x28,x8, LSL #0x2
71019b993c  mov w9,#0x8
71019b9940  str w9,[x8, #0x1a8]
71019b9944  ldr w8,[x28, #0x1f4]
71019b9948  cmp w8,#0x11
71019b994c  b.gt 0x71019ba874
71019b9950  add w8,w8,#0x1
71019b9954  cmp w8,#0x13
71019b9958  str w8,[x28, #0x1f4]
71019b995c  b.cs 0x71019ba898
71019b9960  add x8,x28,w8, SXTW  #0x2
71019b9964  mov w9,#0x5
71019b9968  b 0x71019b99b0
71019b996c  ldr x8,[x28, #0x350]
71019b9970  ldrsw x1,[x8, #0xb0]
71019b9974  cmn w1,#0x1
71019b9978  b.eq 0x71019b9a34
71019b997c  adrp x8,0x7105339000
71019b9980  ldr x8,[x8, #0x8b0]
71019b9984  ldrb w8,[x8, #0x8]
71019b9988  cmp w1,#0x9
71019b998c  ccmp w8,#0x0,#0x4,ls
71019b9990  b.ne 0x71019b99b8
71019b9994  adrp x8,0x7105339000
71019b9998  add x8,x8,#0x830
71019b999c  b 0x71019b99c8
71019b99a0  cmp w8,#0x13
71019b99a4  b.cs 0x71019ba898
71019b99a8  add x8,x28,x8, LSL #0x2
71019b99ac  mov w9,#0x10
71019b99b0  str w9,[x8, #0x1a8]
71019b99b4  b 0x71019ba874
71019b99b8  adrp x8,0x7105339000
71019b99bc  add x8,x8,#0x860
71019b99c0  ldr x8,[x8, x1, LSL #0x3]
71019b99c4  cbz x8,0x71019b99f0
71019b99c8  ldr x8,[x8, #0x10]
71019b99cc  ldr w8,[x8, #0x9c]
71019b99d0  sub w8,w8,#0x1
71019b99d4  cmp w8,#0x6
71019b99d8  b.hi 0x71019b99ec
71019b99dc  adrp x9,0x7104753000
71019b99e0  add x9,x9,#0xde0
71019b99e4  ldr w8,[x9, w8, SXTW #0x2]
71019b99e8  b 0x71019b99f0
71019b99ec  mov w8,wzr
71019b99f0  sub w8,w8,#0x1
71019b99f4  cmp w8,#0x2
71019b99f8  adrp x8,0x71052c5000
71019b99fc  ldr x8,[x8, #0x120]
71019b9a00  fmov s1,0x3f800000
71019b9a04  fmov s0,wzr
71019b9a08  fcsel s0,s0,s1,cc
71019b9a0c  mov x2,#0x925a
71019b9a10  movk x2,#0x6c6c, LSL #16
71019b9a14  movk x2,#0x1a, LSL #32
71019b9a18  mov w3,wzr
71019b9a1c  mov w4,wzr
71019b9a20  mov w5,wzr
71019b9a24  mov w6,wzr
71019b9a28  ldr x0,[x8, #0x8]
71019b9a2c  mov w7,wzr
71019b9a30  bl 0x710175dfc0
71019b9a34  adrp x27,0x710532f000
71019b9a38  ldr x8,[x27, #0x7b0]
71019b9a3c  ldr x0,[x8, #0x8]
71019b9a40  ldr w8,[x28, #0x358]
71019b9a44  ldr w26,[x0, #0x214]
71019b9a48  cmp w8,#0x2
71019b9a4c  b.ne 0x71019b9b90
71019b9a50  add x1,sp,#0x28
71019b9a54  mov w0,w26
71019b9a58  stur xzr,[sp, #0x75]
71019b9a5c  stp xzr,xzr,[sp, #0x68]
71019b9a60  stp xzr,xzr,[sp, #0x58]
71019b9a64  stp xzr,xzr,[sp, #0x48]
71019b9a68  stp xzr,xzr,[sp, #0x38]
71019b9a6c  stp xzr,xzr,[sp, #0x28]
71019b9a70  bl 0x71022e5e10
71019b9a74  tbz w0,#0x0,0x71019b9b88
71019b9a78  adrp x8,0x7105314000
71019b9a7c  ldr x8,[x8, #0x510]
71019b9a80  ldr x8,[x8]
71019b9a84  ldrb w9,[x8, #0x1]
71019b9a88  cbnz w9,0x71019b9ad0
71019b9a8c  ldr x8,[x8, #0x168]
71019b9a90  ldr x8,[x8]
71019b9a94  ldr x11,[sp, #0x38]
71019b9a98  ldp x9,x10,[sp, #0x28]
71019b9a9c  ldr x8,[x8]
71019b9aa0  stp x10,x11,[x8, #0x8]
71019b9aa4  str x9,[x8]
71019b9aa8  ldp x9,x10,[sp, #0x40]
71019b9aac  ldp x11,x12,[sp, #0x50]
71019b9ab0  stp x11,x12,[x8, #0x28]
71019b9ab4  stp x9,x10,[x8, #0x18]
71019b9ab8  ldr x11,[sp, #0x70]
71019b9abc  ldp x9,x10,[sp, #0x60]
71019b9ac0  ldur x12,[sp, #0x75]
71019b9ac4  stur x12,[x8, #0x4d]
71019b9ac8  stp x10,x11,[x8, #0x40]
71019b9acc  str x9,[x8, #0x38]
71019b9ad0  adrp x8,0x7105314000
71019b9ad4  ldr x8,[x8, #0x508]
71019b9ad8  ldr x8,[x8]
71019b9adc  mov w9,#0x4dd8
71019b9ae0  movk w9,#0x5b, LSL #16
71019b9ae4  add x19,x8,x9
71019b9ae8  mov w9,#0x4de8
71019b9aec  movk w9,#0x5b, LSL #16
71019b9af0  add x20,x8,x9
71019b9af4  ldr x8,[x20]
71019b9af8  cbz x8,0x71019b9b10
71019b9afc  ldr x8,[x19]
71019b9b00  ldrb w9,[x8, #0x10]
71019b9b04  and w9,w9,#0x1
71019b9b08  strb w9,[x8, #0x10]
71019b9b0c  b 0x71019b9b88
71019b9b10  mov w0,#0x10
71019b9b14  orr w1,wzr,#0x18
71019b9b18  bl 0x710392e290
71019b9b1c  cbnz x0,0x71019b9b64
71019b9b20  adrp x8,0x7105332000
71019b9b24  ldr x0,[x8, #0xf00]
71019b9b28  cbz x0,0x71019b9b60
71019b9b2c  orr w8,wzr,#0x18
71019b9b30  stur wzr,[x29, #-0x70]
71019b9b34  sub x1,x29,#0x70
71019b9b38  str x8,[sp, #0x268]
71019b9b3c  ldr x8,[x0]
71019b9b40  ldr x8,[x8, #0x30]
71019b9b44  add x2,sp,#0x268
71019b9b48  blr x8
71019b9b4c  tbz w0,#0x0,0x71019b9b60
71019b9b50  mov w0,#0x10
71019b9b54  orr w1,wzr,#0x18
71019b9b58  bl 0x710392e290
71019b9b5c  cbnz x0,0x71019b9b64
71019b9b60  mov x0,xzr
71019b9b64  strb wzr,[x0, #0x10]
71019b9b68  str x19,[x0, #0x8]
71019b9b6c  ldr x8,[x19]
71019b9b70  str x8,[x0]
71019b9b74  str x0,[x8, #0x8]
71019b9b78  str x0,[x19]
71019b9b7c  ldr x8,[x20]
71019b9b80  add x8,x8,#0x1
71019b9b84  str x8,[x20]
71019b9b88  ldr x8,[x27, #0x7b0]
71019b9b8c  ldr x0,[x8, #0x8]
71019b9b90  mov w1,w26
71019b9b94  bl 0x71032df050
71019b9b98  stp xzr,xzr,[sp, #0x30]
71019b9b9c  mov x20,x0
71019b9ba0  str xzr,[sp, #0x28]
71019b9ba4  ldp x24,x8,[x0, #0x118]
71019b9ba8  subs x23,x8,x24
71019b9bac  b.eq 0x71019b9ddc
71019b9bb0  asr x19,x23,#0x2
71019b9bb4  lsr x8,x19,#0x3e
71019b9bb8  cbnz x8,0x71019ba89c
71019b9bbc  mov w0,#0x10
71019b9bc0  mov x1,x23
71019b9bc4  bl 0x710392e290
71019b9bc8  mov x22,x0
71019b9bcc  cbnz x0,0x71019b9c14
71019b9bd0  adrp x8,0x7105332000
71019b9bd4  ldr x0,[x8, #0xf00]
71019b9bd8  cbz x0,0x71019b9c10
71019b9bdc  stur wzr,[x29, #-0x70]
71019b9be0  str x23,[sp, #0x268]
71019b9be4  ldr x8,[x0]
71019b9be8  ldr x8,[x8, #0x30]
71019b9bec  sub x1,x29,#0x70
71019b9bf0  add x2,sp,#0x268
71019b9bf4  blr x8
71019b9bf8  tbz w0,#0x0,0x71019b9c10
71019b9bfc  mov w0,#0x10
71019b9c00  mov x1,x23
71019b9c04  bl 0x710392e290
71019b9c08  mov x22,x0
71019b9c0c  cbnz x0,0x71019b9c14
71019b9c10  mov x22,xzr
71019b9c14  add x8,x22,x19, LSL #0x2
71019b9c18  cmp x23,#0x1
71019b9c1c  str x8,[sp, #0x38]
71019b9c20  stp x22,x22,[sp, #0x28]
71019b9c24  b.lt 0x71019b9dcc
71019b9c28  mov x0,x22
71019b9c2c  mov x1,x24
71019b9c30  mov x2,x23
71019b9c34  bl 0x71039c00e0
71019b9c38  add x0,x22,x23
71019b9c3c  str x0,[sp, #0x30]
71019b9c40  cbz x23,0x71019ba324
71019b9c44  str x20,[sp, #0x8]
71019b9c48  str w26,[sp, #0x14]
71019b9c4c  mov w25,#0xffffffff
71019b9c50  stp x28,x0,[sp, #0x18]
71019b9c54  adrp x28,0x71052b7000
71019b9c58  mov w26,#0x14
71019b9c5c  adrp x20,0x7105314000
71019b9c60  mov w19,#0xe040
71019b9c64  movk w19,#0x5, LSL #16
71019b9c68  mov w21,#0xe048
71019b9c6c  movk w21,#0x5, LSL #16
71019b9c70  mov w24,#0x4dd3
71019b9c74  movk w24,#0x1062, LSL #16
71019b9c78  mov w1,#0x1f4
71019b9c7c  b 0x71019b9d50
71019b9c80  add x0,sp,#0x268
71019b9c84  bl 0x71039c2680
71019b9c88  cbz w0,0x71019b9ca4
71019b9c8c  add x0,sp,#0x268
71019b9c90  bl 0x71039c1070
71019b9c94  cbz w0,0x71019b9ca4
71019b9c98  ldr x0,[sp, #0x20]
71019b9c9c  mov w1,#0x1f4
71019b9ca0  b 0x71019b9d64
71019b9ca4  ldr x8,[sp, #0x268]
71019b9ca8  ldr x9,[x23, #0x10]
71019b9cac  mov w1,#0x1f4
71019b9cb0  ldr x0,[sp, #0x20]
71019b9cb4  cmp x8,x9
71019b9cb8  b.le 0x71019b9d64
71019b9cbc  mov w8,#0x2
71019b9cc0  str x8,[x23]
71019b9cc4  mov w8,#0x1
71019b9cc8  mov w9,#0x2728
71019b9ccc  add x9,x23,x9
71019b9cd0  strb w8,[x23, #0x8]
71019b9cd4  add x8,x23,#0x18
71019b9cd8  str xzr,[x23, #0x10]
71019b9cdc  stp xzr,xzr,[x8]
71019b9ce0  str w25,[x8, #0x10]
71019b9ce4  stur xzr,[x8, #0x1c]
71019b9ce8  stur xzr,[x8, #0x14]
71019b9cec  str w25,[x8, #0x24]
71019b9cf0  str w25,[x8, #0x38]
71019b9cf4  stur xzr,[x8, #0x44]
71019b9cf8  stur xzr,[x8, #0x3c]
71019b9cfc  str w25,[x8, #0x4c]
71019b9d00  str w25,[x8, #0x60]
71019b9d04  stur xzr,[x8, #0x6c]
71019b9d08  stur xzr,[x8, #0x64]
71019b9d0c  str w25,[x8, #0x74]
71019b9d10  str w25,[x8, #0x88]
71019b9d14  stur xzr,[x8, #0x94]
71019b9d18  stur xzr,[x8, #0x8c]
71019b9d1c  str w25,[x8, #0x9c]
71019b9d20  str w25,[x8, #0xb0]
71019b9d24  stur xzr,[x8, #0xbc]
71019b9d28  stur xzr,[x8, #0xb4]
71019b9d2c  str w25,[x8, #0xc4]
71019b9d30  stp xzr,xzr,[x8, #0x28]
71019b9d34  stp xzr,xzr,[x8, #0x50]
71019b9d38  stp xzr,xzr,[x8, #0x78]
71019b9d3c  stp xzr,xzr,[x8, #0xa0]
71019b9d40  add x8,x8,#0xc8
71019b9d44  cmp x8,x9
71019b9d48  b.ne 0x71019b9cdc
71019b9d4c  b 0x71019b9d64
71019b9d50  ldr x8,[x28, #0x950]
71019b9d54  ldr x23,[x8]
71019b9d58  ldr w27,[x22]
71019b9d5c  ldrb w8,[x23, #0x8]
71019b9d60  cbz w8,0x71019b9c80
71019b9d64  ldr w8,[x23, #0x4]
71019b9d68  cmp w8,#0x1f4
71019b9d6c  b.cs 0x71019ba898
71019b9d70  madd x9,x8,x26,x23
71019b9d74  add w8,w8,#0x1
71019b9d78  umull x11,w8,w24
71019b9d7c  lsr x11,x11,#0x25
71019b9d80  str w27,[x9, #0x28]
71019b9d84  ldr x10,[x20, #0x510]
71019b9d88  ldr x10,[x10]
71019b9d8c  ldr x10,[x10, #0x78]
71019b9d90  ldr x10,[x10]
71019b9d94  ldr x10,[x10]
71019b9d98  ldr x12,[x10, x19, LSL #0x0]
71019b9d9c  ldr x10,[x10, x21, LSL #0x0]
71019b9da0  msub w8,w11,w1,w8
71019b9da4  add x22,x22,#0x4
71019b9da8  cmp x22,x0
71019b9dac  stp x12,x10,[x9, #0x18]
71019b9db0  str w8,[x23, #0x4]
71019b9db4  b.ne 0x71019b9d50
71019b9db8  ldr x22,[sp, #0x28]
71019b9dbc  ldr x28,[sp, #0x18]
71019b9dc0  adrp x27,0x710532f000
71019b9dc4  ldr w26,[sp, #0x14]
71019b9dc8  ldr x20,[sp, #0x8]
71019b9dcc  cbz x22,0x71019b9ddc
71019b9dd0  mov x0,x22
71019b9dd4  str x22,[sp, #0x30]
71019b9dd8  bl 0x710392eb40
71019b9ddc  add x19,x20,#0x118
71019b9de0  ldr x0,[x19]
71019b9de4  cbz x0,0x71019b9df8
71019b9de8  str x0,[x20, #0x120]
71019b9dec  bl 0x710392eb40
71019b9df0  stp xzr,xzr,[x19, #0x8]
71019b9df4  str xzr,[x19]
71019b9df8  stp xzr,xzr,[x19, #0x8]
71019b9dfc  adrp x8,0x71052b7000
71019b9e00  str xzr,[x19]
71019b9e04  ldr x8,[x8, #0x950]
71019b9e08  ldr x0,[x8]
71019b9e0c  bl 0x71003a5020
71019b9e10  ldr x8,[x27, #0x7b0]
71019b9e14  ldr x0,[x8, #0x8]
71019b9e18  ldr w24,[x28, #0x358]
71019b9e1c  mov w1,w26
71019b9e20  bl 0x71032df050
71019b9e24  mov x21,x0
71019b9e28  adrp x1,0x710439c000
71019b9e2c  add x1,x1,#0xcf6
71019b9e30  sub x0,x29,#0x70
71019b9e34  bl 0x710375aa90
71019b9e38  ldr x8,[x27, #0x7b0]
71019b9e3c  ldr x1,[x8, #0x8]
71019b9e40  add x0,sp,#0x268
71019b9e44  mov w2,w26
71019b9e48  bl 0x71032e2e70
71019b9e4c  ldrb w8,[sp, #0x272]
71019b9e50  cmp w8,#0xa
71019b9e54  mov w25,#0xa
71019b9e58  csel w19,w8,w25,cc
71019b9e5c  strb wzr,[sp, #0x30]
71019b9e60  str xzr,[sp, #0x28]
71019b9e64  cbz w19,0x71019b9eb0
71019b9e68  ldrb w2,[sp, #0x268]
71019b9e6c  adrp x1,0x710436b000
71019b9e70  add x1,x1,#0x8af
71019b9e74  add x0,sp,#0x28
71019b9e78  bl 0x71019bc200
71019b9e7c  cmp w19,#0x1
71019b9e80  b.eq 0x71019b9eb0
71019b9e84  mov w20,#0x1
71019b9e88  add x23,sp,#0x268
71019b9e8c  adrp x22,0x710426f000
71019b9e90  add x22,x22,#0x911
71019b9e94  ldrb w2,[x23, x20, LSL ]
71019b9e98  add x0,sp,#0x28
71019b9e9c  mov x1,x22
71019b9ea0  bl 0x71019bc200
71019b9ea4  add x20,x20,#0x1
71019b9ea8  cmp x20,x19
71019b9eac  b.cc 0x71019b9e94
71019b9eb0  ldur x23,[x29, #-0x70]
71019b9eb4  add x8,sp,#0x28
71019b9eb8  add x2,x8,#0x8
71019b9ebc  ldr x8,[x23]
71019b9ec0  mov w19,#0x4020
71019b9ec4  add x0,x8,x19
71019b9ec8  adrp x1,0x7104400000
71019b9ecc  add x1,x1,#0xcf5
71019b9ed0  bl 0x71039c5f90
71019b9ed4  ldr x8,[x27, #0x7b0]
71019b9ed8  ldr x0,[x8, #0x8]
71019b9edc  mov w1,w26
71019b9ee0  mov w20,w26
71019b9ee4  bl 0x71032e00b0
71019b9ee8  ldr x9,[x23]
71019b9eec  and x8,x0,#0xffff
71019b9ef0  add x0,x9,x19
71019b9ef4  adrp x1,0x7104349000
71019b9ef8  add x1,x1,#0xbf4
71019b9efc  add x2,sp,#0x28
71019b9f00  str x8,[sp, #0x28]
71019b9f04  bl 0x71039c5fa0
71019b9f08  adrp x26,0x710532f000
71019b9f0c  ldr x8,[x26, #0x730]
71019b9f10  ldr x8,[x8, #0x8]
71019b9f14  ldr x1,[x21, #0x8]
71019b9f18  ldr x0,[x8, #0x168]
71019b9f1c  bl 0x7103264270
71019b9f20  ldr x8,[x23]
71019b9f24  sxtw x2,w0
71019b9f28  add x0,x8,x19
71019b9f2c  adrp x1,0x7104359000
71019b9f30  add x1,x1,#0xc60
71019b9f34  bl 0x71039c60a0
71019b9f38  ldr x8,[x26, #0x730]
71019b9f3c  ldr x8,[x8, #0x8]
71019b9f40  ldr x1,[x21, #0x8]
71019b9f44  ldr x0,[x8, #0x168]
71019b9f48  bl 0x71032633f0
71019b9f4c  ldrb w8,[x21, #0x12]
71019b9f50  ldr x9,[x23]
71019b9f54  adrp x1,0x710436a000
71019b9f58  add x1,x1,#0xe62
71019b9f5c  cmp w0,w8
71019b9f60  csel x8,x8,xzr,hi
71019b9f64  add x0,x9,x19
71019b9f68  add x2,sp,#0x28
71019b9f6c  str x8,[sp, #0x28]
71019b9f70  bl 0x71039c5fa0
71019b9f74  ldrb w8,[x21, #0xaa]
71019b9f78  add w9,w8,#0x2e
71019b9f7c  cmp w8,#0xdf
71019b9f80  csel w22,w8,w9,cc
71019b9f84  cbz w22,0x71019b9ff0
71019b9f88  cmp w22,#0xdf
71019b9f8c  b.cc 0x71019b9ff4
71019b9f90  ldr x8,[x26, #0x730]
71019b9f94  ldr x19,[x8, #0x8]
71019b9f98  ldr x0,[x19, #0x218]
71019b9f9c  mov w1,w22
71019b9fa0  bl 0x71032a2c10
71019b9fa4  tbz w0,#0x0,0x71019b9ff0
71019b9fa8  ldr x0,[x19, #0x218]
71019b9fac  mov w1,w22
71019b9fb0  bl 0x71032a2f50
71019b9fb4  cmp w0,#0xd
71019b9fb8  b.gt 0x71019b9ff0
71019b9fbc  ldr x8,[x26, #0x730]
71019b9fc0  ldr x19,[x8, #0x8]
71019b9fc4  ldr x0,[x19, #0x218]
71019b9fc8  mov w1,w22
71019b9fcc  bl 0x71032a2c10
71019b9fd0  tbz w0,#0x0,0x71019b9ff0
71019b9fd4  ldr x0,[x19, #0x218]
71019b9fd8  mov w1,w22
71019b9fdc  bl 0x71032a2f50
71019b9fe0  cmp w0,#0xd
71019b9fe4  b.gt 0x71019b9ff0
71019b9fe8  ldrb w8,[x21, #0xaa]
71019b9fec  b 0x71019b9ff4
71019b9ff0  mov w8,wzr
71019b9ff4  ldr x9,[x23]
71019b9ff8  str x8,[sp, #0x28]
71019b9ffc  mov w8,#0x4020
71019ba000  add x0,x9,x8
71019ba004  adrp x1,0x7104349000
71019ba008  add x1,x1,#0xc01
71019ba00c  add x2,sp,#0x28
71019ba010  bl 0x71039c5fa0
71019ba014  ldrb w8,[x21, #0xab]
71019ba018  add w9,w8,#0x2e
71019ba01c  cmp w8,#0xdf
71019ba020  csel w22,w8,w9,cc
71019ba024  cbz w22,0x71019ba090
71019ba028  cmp w22,#0xdf
71019ba02c  b.cc 0x71019ba094
71019ba030  ldr x8,[x26, #0x730]
71019ba034  ldr x19,[x8, #0x8]
71019ba038  ldr x0,[x19, #0x218]
71019ba03c  mov w1,w22
71019ba040  bl 0x71032a2c10
71019ba044  tbz w0,#0x0,0x71019ba090
71019ba048  ldr x0,[x19, #0x218]
71019ba04c  mov w1,w22
71019ba050  bl 0x71032a2f50
71019ba054  cmp w0,#0xd
71019ba058  b.gt 0x71019ba090
71019ba05c  ldr x8,[x26, #0x730]
71019ba060  ldr x19,[x8, #0x8]
71019ba064  ldr x0,[x19, #0x218]
71019ba068  mov w1,w22
71019ba06c  bl 0x71032a2c10
71019ba070  tbz w0,#0x0,0x71019ba090
71019ba074  ldr x0,[x19, #0x218]
71019ba078  mov w1,w22
71019ba07c  bl 0x71032a2f50
71019ba080  ldrb w8,[x21, #0xab]
71019ba084  cmp w0,#0xe
71019ba088  csel w8,w8,wzr,lt
71019ba08c  b 0x71019ba094
71019ba090  mov w8,wzr
71019ba094  ldr x9,[x23]
71019ba098  and x8,x8,#0xff
71019ba09c  str x8,[sp, #0x28]
71019ba0a0  mov w8,#0x4020
71019ba0a4  add x0,x9,x8
71019ba0a8  adrp x1,0x71042e6000
71019ba0ac  add x1,x1,#0x9e0
71019ba0b0  add x2,sp,#0x28
71019ba0b4  bl 0x71039c5fa0
71019ba0b8  ldrb w8,[x21, #0xac]
71019ba0bc  add w9,w8,#0x2e
71019ba0c0  cmp w8,#0xdf
71019ba0c4  csel w22,w8,w9,cc
71019ba0c8  cbz w22,0x71019ba134
71019ba0cc  cmp w22,#0xdf
71019ba0d0  b.cc 0x71019ba138
71019ba0d4  ldr x8,[x26, #0x730]
71019ba0d8  ldr x19,[x8, #0x8]
71019ba0dc  ldr x0,[x19, #0x218]
71019ba0e0  mov w1,w22
71019ba0e4  bl 0x71032a2c10
71019ba0e8  tbz w0,#0x0,0x71019ba134
71019ba0ec  ldr x0,[x19, #0x218]
71019ba0f0  mov w1,w22
71019ba0f4  bl 0x71032a2f50
71019ba0f8  cmp w0,#0xd
71019ba0fc  b.gt 0x71019ba134
71019ba100  ldr x8,[x26, #0x730]
71019ba104  ldr x19,[x8, #0x8]
71019ba108  ldr x0,[x19, #0x218]
71019ba10c  mov w1,w22
71019ba110  bl 0x71032a2c10
71019ba114  tbz w0,#0x0,0x71019ba134
71019ba118  ldr x0,[x19, #0x218]
71019ba11c  mov w1,w22
71019ba120  bl 0x71032a2f50
71019ba124  cmp w0,#0xd
71019ba128  b.gt 0x71019ba134
71019ba12c  ldrb w8,[x21, #0xac]
71019ba130  b 0x71019ba138
71019ba134  mov w8,wzr
71019ba138  ldr x9,[x23]
71019ba13c  mov w19,#0x4020
71019ba140  add x0,x9,x19
71019ba144  adrp x1,0x7104421000
71019ba148  add x1,x1,#0xc15
71019ba14c  add x2,sp,#0x28
71019ba150  mov x27,#-0x3f00000000000000
71019ba154  str x8,[sp, #0x28]
71019ba158  bl 0x71039c5fa0
71019ba15c  ldr x9,[x23]
71019ba160  ldrh w8,[x21, #0xa2]
71019ba164  adrp x1,0x710437b000
71019ba168  add x1,x1,#0xf3a
71019ba16c  add x2,sp,#0x28
71019ba170  add x0,x9,x19
71019ba174  str x8,[sp, #0x28]
71019ba178  bl 0x71039c5fa0
71019ba17c  ldr x9,[x23]
71019ba180  ldrh w8,[x21, #0xa4]
71019ba184  adrp x1,0x7104442000
71019ba188  add x1,x1,#0xf84
71019ba18c  add x2,sp,#0x28
71019ba190  add x0,x9,x19
71019ba194  str x8,[sp, #0x28]
71019ba198  bl 0x71039c5fa0
71019ba19c  ldr x8,[x23]
71019ba1a0  ldrsh x2,[x21, #0xa6]
71019ba1a4  adrp x1,0x7104329000
71019ba1a8  add x1,x1,#0x92c
71019ba1ac  add x0,x8,x19
71019ba1b0  bl 0x71039c60a0
71019ba1b4  ldr x8,[x23]
71019ba1b8  ldrsh x2,[x21, #0xa8]
71019ba1bc  adrp x1,0x71043f0000
71019ba1c0  add x1,x1,#0x387
71019ba1c4  add x0,x8,x19
71019ba1c8  bl 0x71039c60a0
71019ba1cc  ldr x9,[x23]
71019ba1d0  ldrh w8,[x21, #0xb0]
71019ba1d4  adrp x1,0x71042b3000
71019ba1d8  add x1,x1,#0xc92
71019ba1dc  add x2,sp,#0x28
71019ba1e0  add x0,x9,x19
71019ba1e4  str x8,[sp, #0x28]
71019ba1e8  bl 0x71039c5fa0
71019ba1ec  ldr x8,[x23]
71019ba1f0  ldrsb x2,[x21, #0x100]
71019ba1f4  adrp x1,0x7104339000
71019ba1f8  add x1,x1,#0xab8
71019ba1fc  add x0,x8,x19
71019ba200  bl 0x71039c60a0
71019ba204  ldr x8,[x23]
71019ba208  ldrsb x2,[x21, #0x101]
71019ba20c  adrp x1,0x7104432000
71019ba210  add x1,x1,#0x8fc
71019ba214  add x0,x8,x19
71019ba218  bl 0x71039c60a0
71019ba21c  ldr x8,[x23]
71019ba220  ldrsb x2,[x21, #0x102]
71019ba224  adrp x1,0x7104432000
71019ba228  add x1,x1,#0x90e
71019ba22c  add x0,x8,x19
71019ba230  bl 0x71039c60a0
71019ba234  ldr x8,[x23]
71019ba238  ldrsb x2,[x21, #0xff]
71019ba23c  adrp x1,0x710438c000
71019ba240  add x1,x1,#0x247
71019ba244  add x0,x8,x19
71019ba248  bl 0x71039c60a0
71019ba24c  mov w2,#0x120
71019ba250  add x0,sp,#0x268
71019ba254  mov w1,wzr
71019ba258  bl 0x71039c02a0
71019ba25c  mov w8,#0xffffffff
71019ba260  str w8,[sp, #0x388]
71019ba264  ldr x8,[x26, #0x730]
71019ba268  ldr x23,[x21, #0x8]
71019ba26c  ldr x8,[x8, #0x8]
71019ba270  ldr x22,[x8, #0x168]
71019ba274  mov x1,#0xb807
71019ba278  movk x1,#0xb1cc, LSL #16
71019ba27c  movk x1,#0x11, LSL #32
71019ba280  mov x0,x22
71019ba284  bl 0x71032631a0
71019ba288  and x10,x23,#-0x100000000000000
71019ba28c  and x9,x23,#0xffffffffff
71019ba290  and x8,x0,#0xffffffffff
71019ba294  cmp x10,x27
71019ba298  b.ne 0x71019ba2c4
71019ba29c  cbz x9,0x71019ba2c4
71019ba2a0  and x11,x0,#-0x100000000000000
71019ba2a4  cmp x11,x27
71019ba2a8  mov w26,w20
71019ba2ac  b.ne 0x71019ba2cc
71019ba2b0  cbz x8,0x71019ba2cc
71019ba2b4  eor x8,x0,x23
71019ba2b8  tst x8,#0xffffffffff
71019ba2bc  b.ne 0x71019ba364
71019ba2c0  b 0x71019ba300
71019ba2c4  and x11,x0,#-0x100000000000000
71019ba2c8  mov w26,w20
71019ba2cc  cmp x10,x27
71019ba2d0  cset w10,eq
71019ba2d4  cmp x9,#0x0
71019ba2d8  cset w9,ne
71019ba2dc  cmp x8,#0x0
71019ba2e0  cset w8,ne
71019ba2e4  cmp x11,x27
71019ba2e8  and w9,w10,w9
71019ba2ec  cset w10,eq
71019ba2f0  and w8,w8,w10
71019ba2f4  eor w8,w8,w9
71019ba2f8  cmp w8,#0x1
71019ba2fc  b.eq 0x71019ba364
71019ba300  ldr w8,[x21, #0x108]
71019ba304  cmp w8,#0x2
71019ba308  b.eq 0x71019ba340
71019ba30c  cmp w8,#0x1
71019ba310  b.eq 0x71019ba330
71019ba314  cbnz w8,0x71019ba35c
71019ba318  mov x1,#0xc82e
71019ba31c  movk x1,#0x80f1, LSL #16
71019ba320  b 0x71019ba348
71019ba324  mov x22,x0
71019ba328  cbnz x22,0x71019b9dd0
71019ba32c  b 0x71019b9ddc
71019ba330  mov x1,#0xf367
71019ba334  movk x1,#0xef73, LSL #16
71019ba338  movk x1,#0x14, LSL #32
71019ba33c  b 0x71019ba34c
71019ba340  mov x1,#0x4ff6
71019ba344  movk x1,#0x915a, LSL #16
71019ba348  movk x1,#0x12, LSL #32
71019ba34c  mov x0,x22
71019ba350  bl 0x71032631a0
71019ba354  mov x23,x0
71019ba358  b 0x71019ba364
71019ba35c  mov x23,#0xff0000000000
71019ba360  movk x23,#0xc1ff, LSL #48
71019ba364  mov x0,x22
71019ba368  mov x1,x23
71019ba36c  bl 0x71032626e0
71019ba370  cmp w0,#0x6e
71019ba374  b.eq 0x71019ba388
71019ba378  cmp w0,#0x72
71019ba37c  b.ne 0x71019ba38c
71019ba380  mov w0,#0x24
71019ba384  b 0x71019ba38c
71019ba388  mov w0,#0x4b
71019ba38c  str w0,[sp, #0x388]
71019ba390  ldur x8,[x21, #0xc5]
71019ba394  ldur x9,[x21, #0xcd]
71019ba398  ldur x10,[x21, #0xd5]
71019ba39c  add x0,sp,#0x268
71019ba3a0  add x1,sp,#0x28
71019ba3a4  ldur x11,[x21, #0xdd]
71019ba3a8  stp x10,x11,[sp, #0x38]
71019ba3ac  stp x8,x9,[sp, #0x28]
71019ba3b0  ldur x8,[x21, #0xe5]
71019ba3b4  ldur x9,[x21, #0xed]
71019ba3b8  ldur x10,[x21, #0xf5]
71019ba3bc  ldurh w11,[x21, #0xfd]
71019ba3c0  strh w11,[sp, #0x60]
71019ba3c4  stp x9,x10,[sp, #0x50]
71019ba3c8  str x8,[sp, #0x48]
71019ba3cc  add x22,sp,#0x268
71019ba3d0  add x23,sp,#0x28
71019ba3d4  bl 0x7100323350
71019ba3d8  adrp x8,0x71042e6000
71019ba3dc  add x8,x8,#0x9f1
71019ba3e0  str x8,[sp, #0x30]
71019ba3e4  adrp x8,0x71042e6000
71019ba3e8  add x8,x8,#0x9f6
71019ba3ec  str x8,[sp, #0x40]
71019ba3f0  mov w8,#0x2
71019ba3f4  str w8,[sp, #0x48]
71019ba3f8  adrp x8,0x710425e000
71019ba3fc  add x8,x8,#0xce6
71019ba400  str x8,[sp, #0x50]
71019ba404  orr w8,wzr,#0x3
71019ba408  str w8,[sp, #0x58]
71019ba40c  adrp x8,0x710437b000
71019ba410  add x8,x8,#0xf41
71019ba414  str x8,[sp, #0x60]
71019ba418  mov w8,#0x4
71019ba41c  str w8,[sp, #0x68]
71019ba420  mov w8,#0x5
71019ba424  str w8,[sp, #0x78]
71019ba428  adrp x8,0x7104339000
71019ba42c  add x8,x8,#0xac9
71019ba430  str x8,[sp, #0x80]
71019ba434  orr w8,wzr,#0x6
71019ba438  str w8,[sp, #0x88]
71019ba43c  adrp x8,0x7104400000
71019ba440  add x8,x8,#0xcf9
71019ba444  str x8,[sp, #0x90]
71019ba448  orr w8,wzr,#0x7
71019ba44c  str w8,[sp, #0x98]
71019ba450  mov w8,#0x8
71019ba454  str w8,[sp, #0xa8]
71019ba458  adrp x8,0x7104421000
71019ba45c  add x8,x8,#0xc26
71019ba460  str x8,[sp, #0xb0]
71019ba464  mov w8,#0x9
71019ba468  str w8,[sp, #0xb8]
71019ba46c  adrp x8,0x71042e6000
71019ba470  add x8,x8,#0xa00
71019ba474  str x8,[sp, #0xc0]
71019ba478  adrp x8,0x71043be000
71019ba47c  add x8,x8,#0x23
71019ba480  str x8,[sp, #0xd0]
71019ba484  mov w8,#0xb
71019ba488  str w8,[sp, #0xd8]
71019ba48c  adrp x8,0x710436b000
71019ba490  add x8,x8,#0xc12
71019ba494  str x8,[sp, #0xe0]
71019ba498  orr w8,wzr,#0xc
71019ba49c  str w8,[sp, #0xe8]
71019ba4a0  mov w8,#0xd
71019ba4a4  str w8,[sp, #0xf8]
71019ba4a8  adrp x8,0x710435a000
71019ba4ac  add x8,x8,#0xe09
71019ba4b0  str x8,[sp, #0x100]
71019ba4b4  orr w8,wzr,#0xe
71019ba4b8  str w8,[sp, #0x108]
71019ba4bc  adrp x8,0x7104280000
71019ba4c0  add x8,x8,#0x32b
71019ba4c4  str x8,[sp, #0x110]
71019ba4c8  orr w8,wzr,#0xf
71019ba4cc  str w8,[sp, #0x118]
71019ba4d0  mov w8,#0x10
71019ba4d4  str w8,[sp, #0x128]
71019ba4d8  adrp x8,0x7104280000
71019ba4dc  add x8,x8,#0x339
71019ba4e0  str x8,[sp, #0x130]
71019ba4e4  mov w8,#0x11
71019ba4e8  str w8,[sp, #0x138]
71019ba4ec  adrp x8,0x71043f0000
71019ba4f0  add x8,x8,#0x391
71019ba4f4  str x8,[sp, #0x140]
71019ba4f8  mov w8,#0x12
71019ba4fc  str w8,[sp, #0x148]
71019ba500  mov w8,#0x13
71019ba504  str w8,[sp, #0x158]
71019ba508  adrp x8,0x7104412000
71019ba50c  add x8,x8,#0x22d
71019ba510  str x8,[sp, #0x160]
71019ba514  mov w8,#0x14
71019ba518  str w8,[sp, #0x168]
71019ba51c  adrp x8,0x710425e000
71019ba520  add x8,x8,#0xcef
71019ba524  str x8,[sp, #0x170]
71019ba528  mov w8,#0x15
71019ba52c  str w8,[sp, #0x178]
71019ba530  mov w8,#0x16
71019ba534  str w8,[sp, #0x188]
71019ba538  adrp x8,0x71042a2000
71019ba53c  add x8,x8,#0x8c3
71019ba540  str x8,[sp, #0x190]
71019ba544  mov w8,#0x17
71019ba548  str w8,[sp, #0x198]
71019ba54c  adrp x8,0x710437b000
71019ba550  add x8,x8,#0xf52
71019ba554  str x8,[sp, #0x1a0]
71019ba558  orr w8,wzr,#0x18
71019ba55c  mov w9,#0x1
71019ba560  str w9,[sp, #0x38]
71019ba564  adrp x9,0x7104454000
71019ba568  add x9,x9,#0x3c2
71019ba56c  str x9,[sp, #0x70]
71019ba570  adrp x9,0x71042b3000
71019ba574  add x9,x9,#0xc9e
71019ba578  ldur x21,[x29, #-0x70]
71019ba57c  fmov s8,0x3f800000
71019ba580  fmov d9,xzr
71019ba584  adrp x10,0x7104349000
71019ba588  add x10,x10,#0xc26
71019ba58c  add x19,x23,#0x240
71019ba590  orr x20,xzr,#0x7ff0000000000000
71019ba594  str x9,[sp, #0xa0]
71019ba598  adrp x9,0x7104329000
71019ba59c  add x9,x9,#0x936
71019ba5a0  str x9,[sp, #0xf0]
71019ba5a4  adrp x9,0x710426f000
71019ba5a8  add x9,x9,#0x917
71019ba5ac  str x9,[sp, #0x120]
71019ba5b0  adrp x9,0x71042b3000
71019ba5b4  add x9,x9,#0xca6
71019ba5b8  str w8,[sp, #0x1a8]
71019ba5bc  mov w8,#0x19
71019ba5c0  str w8,[sp, #0x1b8]
71019ba5c4  adrp x8,0x71042a2000
71019ba5c8  add x8,x8,#0x8d2
71019ba5cc  str x8,[sp, #0x1c0]
71019ba5d0  mov w8,#0x1a
71019ba5d4  str w8,[sp, #0x1c8]
71019ba5d8  adrp x8,0x710437b000
71019ba5dc  add x8,x8,#0xf67
71019ba5e0  str x8,[sp, #0x1d0]
71019ba5e4  mov w8,#0x1b
71019ba5e8  str w8,[sp, #0x1d8]
71019ba5ec  orr w8,wzr,#0x1c
71019ba5f0  str x9,[sp, #0x150]
71019ba5f4  adrp x9,0x7104349000
71019ba5f8  add x9,x9,#0xc12
71019ba5fc  str x9,[sp, #0x180]
71019ba600  adrp x9,0x7104329000
71019ba604  add x9,x9,#0x944
71019ba608  str w8,[sp, #0x1e8]
71019ba60c  adrp x8,0x71043be000
71019ba610  add x8,x8,#0x31
71019ba614  str x8,[sp, #0x1f0]
71019ba618  mov w8,#0x1d
71019ba61c  str x9,[sp, #0x1b0]
71019ba620  adrp x9,0x71042b3000
71019ba624  add x9,x9,#0xcb4
71019ba628  str w8,[sp, #0x1f8]
71019ba62c  adrp x8,0x71043ce000
71019ba630  add x8,x8,#0xd6e
71019ba634  str x9,[sp, #0x1e0]
71019ba638  adrp x9,0x71043be000
71019ba63c  add x9,x9,#0x3e
71019ba640  str x8,[sp, #0x200]
71019ba644  orr w8,wzr,#0x1e
71019ba648  str w8,[sp, #0x208]
71019ba64c  orr w8,wzr,#0x1f
71019ba650  str x9,[sp, #0x210]
71019ba654  mov w9,#0x20
71019ba658  str w8,[sp, #0x218]
71019ba65c  adrp x8,0x71042c4000
71019ba660  add x8,x8,#0x759
71019ba664  str w9,[sp, #0x228]
71019ba668  mov w9,#0x21
71019ba66c  str x8,[sp, #0x220]
71019ba670  adrp x8,0x71043ad000
71019ba674  add x8,x8,#0x9e
71019ba678  str w9,[sp, #0x238]
71019ba67c  mov w9,#0x22
71019ba680  str w25,[sp, #0xc8]
71019ba684  mov w25,#0x4020
71019ba688  str x8,[sp, #0x230]
71019ba68c  adrp x8,0x71043ad000
71019ba690  add x8,x8,#0xab
71019ba694  str x10,[sp, #0x240]
71019ba698  adrp x10,0x71043be000
71019ba69c  add x10,x10,#0x4b
71019ba6a0  str w9,[sp, #0x248]
71019ba6a4  mov w9,#0x23
71019ba6a8  str wzr,[sp, #0x28]
71019ba6ac  str x8,[sp, #0x250]
71019ba6b0  str w9,[sp, #0x258]
71019ba6b4  str x10,[sp, #0x260]
71019ba6b8  ldrsw x8,[x23]
71019ba6bc  mov v0.16B,v8.16B
71019ba6c0  cmp w8,#0x47
71019ba6c4  b.hi 0x71019ba6cc
71019ba6c8  ldr s0,[x22,x8, lsl #2]
71019ba6cc  fcvt d0,s0
71019ba6d0  fmov x9,d0
71019ba6d4  ldr x8,[x21]
71019ba6d8  add x0,x8,x25
71019ba6dc  and x9,x9,#0x7fffffffffffffff
71019ba6e0  ldr x1,[x23, #0x8]
71019ba6e4  cmp x9,x20
71019ba6e8  fcsel d0,d9,d0,hi
71019ba6ec  bl 0x71039c60b0
71019ba6f0  add x23,x23,#0x10
71019ba6f4  cmp x23,x19
71019ba6f8  b.ne 0x71019ba6b8
71019ba6fc  cmp w24,#0x2
71019ba700  b.eq 0x71019ba74c
71019ba704  cmp w24,#0x3
71019ba708  b.eq 0x71019ba730
71019ba70c  cmp w24,#0x4
71019ba710  b.ne 0x71019ba768
71019ba714  ldr x8,[x21]
71019ba718  mov w9,#0x4020
71019ba71c  add x0,x8,x9
71019ba720  adrp x1,0x7104421000
71019ba724  add x1,x1,#0xc33
71019ba728  orr w2,wzr,#0x3
71019ba72c  b 0x71019ba764
71019ba730  ldr x8,[x21]
71019ba734  mov w9,#0x4020
71019ba738  add x0,x8,x9
71019ba73c  adrp x1,0x7104421000
71019ba740  add x1,x1,#0xc33
71019ba744  mov w2,#0x2
71019ba748  b 0x71019ba764
71019ba74c  ldr x8,[x21]
71019ba750  mov w9,#0x4020
71019ba754  add x0,x8,x9
71019ba758  adrp x1,0x7104421000
71019ba75c  add x1,x1,#0xc33
71019ba760  mov w2,#0x1
71019ba764  bl 0x71039c60a0
71019ba768  adrp x8,0x710593b000
71019ba76c  ldr x8,[x8, #0x580]
71019ba770  ldr x1,[x8]
71019ba774  mov w8,#0x7300
71019ba778  ldrsw x8,[x1, x8, LSL #0x0]
71019ba77c  cmn w8,#0x1
71019ba780  b.eq 0x71019ba79c
71019ba784  ldr x9,[x1, #0x72c0]
71019ba788  cmp x9,x8
71019ba78c  b.ls 0x71019ba898
71019ba790  mov w9,#0xcc0
71019ba794  madd x8,x8,x9,x1
71019ba798  add x1,x8,#0xcc0
71019ba79c  ldr x8,[x21]
71019ba7a0  mov w9,#0x4020
71019ba7a4  add x0,x8,x9
71019ba7a8  bl 0x71039c5fb0
71019ba7ac  stur xzr,[x29, #-0x70]
71019ba7b0  ldr x0,[x21]
71019ba7b4  str xzr,[x21]
71019ba7b8  cbz x0,0x71019ba7c0
71019ba7bc  bl 0x710392eb40
71019ba7c0  mov x0,x21
71019ba7c4  bl 0x710392eb40
71019ba7c8  ldr w8,[x28, #0x358]
71019ba7cc  cmp w8,#0x2
71019ba7d0  b.cs 0x71019ba874
71019ba7d4  ldr x0,[x28, #0x30]
71019ba7d8  fmov s0,0x3f800000
71019ba7dc  adrp x1,0x71042b3000
71019ba7e0  add x1,x1,#0xcc4
71019ba7e4  bl 0x7103778300
71019ba7e8  add x2,x28,#0x38
71019ba7ec  mov x0,x28
71019ba7f0  mov w1,w26
71019ba7f4  bl 0x71019bbbf0
71019ba7f8  ldr x8,[x28, #0x210]
71019ba7fc  ldr x9,[x28, #0x218]
71019ba800  cmp x8,x9
71019ba804  b.eq 0x71019ba838
71019ba808  ldr w10,[x8]
71019ba80c  cmp w10,w26
71019ba810  mov x10,x8
71019ba814  b.eq 0x71019ba844
71019ba818  add x10,x8,#0x4
71019ba81c  cmp x9,x10
71019ba820  b.eq 0x71019ba840
71019ba824  ldr w11,[x10], #0x4
71019ba828  cmp w11,w26
71019ba82c  b.ne 0x71019ba81c
71019ba830  sub x10,x10,#0x4
71019ba834  b 0x71019ba844
71019ba838  mov x10,x8
71019ba83c  b 0x71019ba844
71019ba840  mov x10,x9
71019ba844  sub x8,x10,x8
71019ba848  ldp x9,x10,[x28, #0x48]
71019ba84c  asr x8,x8,#0x2
71019ba850  sub x10,x10,x9
71019ba854  cmp x8,x10, ASR #0x4
71019ba858  b.cs 0x71019ba874
71019ba85c  add x8,x9,x8, LSL #0x4
71019ba860  ldr x0,[x8, #0x8]
71019ba864  fmov s0,0x3f800000
71019ba868  adrp x1,0x71043df000
71019ba86c  add x1,x1,#0x9cf
71019ba870  bl 0x7103778300
71019ba874  add sp,sp,#0x3a0
71019ba878  ldp x29,x30,[sp, #0x60]
71019ba87c  ldp x20,x19,[sp, #0x50]
71019ba880  ldp x22,x21,[sp, #0x40]
71019ba884  ldp x24,x23,[sp, #0x30]
71019ba888  ldp x26,x25,[sp, #0x20]
71019ba88c  ldp x28,x27,[sp, #0x10]
71019ba890  ldp d9,d8,[sp], #0x70
71019ba894  ret
71019ba898  bl 0x71039c2650
71019ba89c  add x0,sp,#0x28
71019ba8a0  bl 0x71039c0c00
