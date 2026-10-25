// addr:      71018d98a0
// offset:    0x18d98a0
// name:      FUN_71018d98a0
// mangled:   
// size:      1116

71018d98a0  stp x28,x25,[sp, #-0x50]!
71018d98a4  stp x24,x23,[sp, #0x10]
71018d98a8  stp x22,x21,[sp, #0x20]
71018d98ac  stp x20,x19,[sp, #0x30]
71018d98b0  stp x29,x30,[sp, #0x40]
71018d98b4  add x29,sp,#0x40
71018d98b8  sub sp,sp,#0x2, LSL #12
71018d98bc  sub sp,sp,#0x190
71018d98c0  ldr x22,[x0, #0x58]
71018d98c4  ldrb w8,[x22, #0x2c]
71018d98c8  mov x19,x1
71018d98cc  cbz w8,0x71018d9a68
71018d98d0  adrp x8,0x7105314000
71018d98d4  add x8,x8,#0x4d8
71018d98d8  ldarb w8,[x8]
71018d98dc  tbz w8,#0x0,0x71018d9cbc
71018d98e0  adrp x8,0x7105305000
71018d98e4  ldr w20,[x8, #0xf0]
71018d98e8  mov w8,#0x100
71018d98ec  mov x21,sp
71018d98f0  add x0,x21,#0xec
71018d98f4  mov w2,#0x1000
71018d98f8  strh w8,[sp, #0x8]
71018d98fc  orr x8,xzr,#0x100000000
71018d9900  mov w1,wzr
71018d9904  str xzr,[sp]
71018d9908  stur x8,[sp, #0xc]
71018d990c  strb wzr,[sp, #0x1c]
71018d9910  stur xzr,[sp, #0x14]
71018d9914  strb wzr,[sp, #0x64]
71018d9918  stur xzr,[sp, #0x5c]
71018d991c  strb wzr,[sp, #0xac]
71018d9920  stur xzr,[sp, #0xa4]
71018d9924  bl 0x71039c02a0
71018d9928  mov w8,#0x10ec
71018d992c  mov w23,#0x1
71018d9930  mov w9,#0x10f4
71018d9934  strb w23,[x21, x8, LSL ]
71018d9938  str wzr,[sp, #0x10f0]
71018d993c  strb w23,[x21, x9, LSL ]
71018d9940  mov w8,#0x1100
71018d9944  mov w9,#0x1190
71018d9948  strb wzr,[x21, x8, LSL ]
71018d994c  mov w8,#0x20
71018d9950  add x0,x21,x9
71018d9954  mov w2,#0x1000
71018d9958  mov w1,wzr
71018d995c  str xzr,[sp, #0x10f8]
71018d9960  str w8,[sp, #0x1140]
71018d9964  bl 0x71039c02a0
71018d9968  mov w8,#0x1149
71018d996c  str xzr,[x21, x8, LSL #0x0]
71018d9970  mov w8,#0x1144
71018d9974  mov x0,sp
71018d9978  mov w1,w20
71018d997c  str xzr,[x21, x8, LSL #0x0]
71018d9980  bl 0x7101af73b0
71018d9984  adrp x8,0x710532f000
71018d9988  ldr x8,[x8, #0x7c8]
71018d998c  strb w23,[sp, #0x8]
71018d9990  str w23,[sp, #0x1144]
71018d9994  ldr x8,[x8, #0x8]
71018d9998  ldrb w8,[x8, #0x69]
71018d999c  ldr x0,[x22, #0x8]
71018d99a0  cmp w8,#0x0
71018d99a4  cinc w3,w23,ne
71018d99a8  mov x1,sp
71018d99ac  mov w2,#0x1
71018d99b0  bl 0x7101af8570
71018d99b4  ldr x8,[x22, #0x10]
71018d99b8  and w9,w20,#0x7f000000
71018d99bc  orr w10,wzr,#0xfe000000
71018d99c0  add w9,w9,w10
71018d99c4  lsr w9,w9,#0x18
71018d99c8  cmp w9,#0x6
71018d99cc  b.hi 0x71018d99e4
71018d99d0  adrp x10,0x7104544000
71018d99d4  add x10,x10,#0x710
71018d99d8  sxtb x9,w9
71018d99dc  ldr w1,[x10, x9, LSL #0x2]
71018d99e0  b 0x71018d99e8
71018d99e4  mov w1,#0xffffffff
71018d99e8  ldr x0,[x8, #0x80]
71018d99ec  bl 0x7101af2070
71018d99f0  adrp x8,0x710532f000
71018d99f4  ldr x21,[x8, #0x8d0]
71018d99f8  ldr x0,[x21, #0x8]
71018d99fc  bl 0x7103313c50
71018d9a00  ldr x20,[x21, #0x8]
71018d9a04  ldrb w8,[x20, #0x22]
71018d9a08  cbz w8,0x71018d9a2c
71018d9a0c  adrp x8,0x7105329000
71018d9a10  ldr x0,[x8, #0xf38]
71018d9a14  fmov s0,0x3f800000
71018d9a18  mov w1,#0x2
71018d9a1c  mov w2,wzr
71018d9a20  bl 0x71023eea60
71018d9a24  strb wzr,[x20, #0x22]
71018d9a28  ldr x20,[x21, #0x8]
71018d9a2c  ldrb w8,[x20, #0x23]
71018d9a30  cbz w8,0x71018d9a50
71018d9a34  strb wzr,[x20, #0x23]
71018d9a38  adrp x8,0x7105329000
71018d9a3c  ldr x0,[x8, #0xf38]
71018d9a40  fmov s0,0x3f800000
71018d9a44  mov w1,#0x2
71018d9a48  mov w2,wzr
71018d9a4c  bl 0x71023eea60
71018d9a50  adrp x8,0x710532f000
71018d9a54  ldr x8,[x8, #0x7f0]
71018d9a58  ldr x0,[x8, #0x8]
71018d9a5c  mov w1,wzr
71018d9a60  bl 0x71032eafc0
71018d9a64  strb wzr,[x22, #0x2c]
71018d9a68  ldr x8,[x22, #0x18]
71018d9a6c  ldr x8,[x8, #0x80]
71018d9a70  ldr x20,[x8, #0x40]
71018d9a74  cbz x20,0x71018d9cfc
71018d9a78  ldr x8,[x20]
71018d9a7c  cbz x8,0x71018d9bdc
71018d9a80  ldr x9,[x8, #0x8]
71018d9a84  cbz x9,0x71018d9aa8
71018d9a88  add sp,sp,#0x2, LSL #12
71018d9a8c  add sp,sp,#0x190
71018d9a90  ldp x29,x30,[sp, #0x40]
71018d9a94  ldp x20,x19,[sp, #0x30]
71018d9a98  ldp x22,x21,[sp, #0x20]
71018d9a9c  ldp x24,x23,[sp, #0x10]
71018d9aa0  ldp x28,x25,[sp], #0x50
71018d9aa4  ret
71018d9aa8  ldr x8,[x8, #0x8]
71018d9aac  cmp x8,#0x0
71018d9ab0  ccmp wzr,#0x0,#0x0,eq
71018d9ab4  b.ne 0x71018d9bdc
71018d9ab8  adrp x1,0x71042b2000
71018d9abc  add x1,x1,#0xa84
71018d9ac0  mov x0,sp
71018d9ac4  str xzr,[sp]
71018d9ac8  bl 0x71037aea50
71018d9acc  ldr x20,[x20]
71018d9ad0  ldr x0,[x20]
71018d9ad4  cbz x0,0x71018d9b54
71018d9ad8  ldr x8,[x0, #0x18]
71018d9adc  ldr x8,[x8, #0x40]
71018d9ae0  ldr w9,[x8, #0xc]
71018d9ae4  cmp w9,#0x2
71018d9ae8  b.cc 0x71018d9af8
71018d9aec  ldr x8,[x8, #0x10]
71018d9af0  add x1,x8,#0x10
71018d9af4  b 0x71018d9b44
71018d9af8  ldr x9,[x8, #0x18]
71018d9afc  ldrb w8,[x8, #0xb]
71018d9b00  mov w10,#0xffffffff
71018d9b04  lsl x8,x10,x8
71018d9b08  mvn w8,w8
71018d9b0c  and x8,x8,#0x2
71018d9b10  add x1,x9,x8, LSL #0x5
71018d9b14  adrp x8,0x7104862000
71018d9b18  add x8,x8,#0x960
71018d9b1c  ldr w9,[x1, #0x18]
71018d9b20  cmp w9,#0x13
71018d9b24  b.ne 0x71018d9b34
71018d9b28  ldr x9,[x1, #0x10]
71018d9b2c  cmp x9,#0x2
71018d9b30  b.eq 0x71018d9b44
71018d9b34  ldrsw x9,[x1, #0x1c]
71018d9b38  add x1,x1,x9, LSL #0x5
71018d9b3c  cbnz w9,0x71018d9b1c
71018d9b40  mov x1,x8
71018d9b44  adrp x2,0x7104421000
71018d9b48  add x2,x2,#0x84c
71018d9b4c  bl 0x71038f4d40
71018d9b50  ldr x0,[x20]
71018d9b54  mov x1,sp
71018d9b58  bl 0x710372d940
71018d9b5c  ldr x20,[sp]
71018d9b60  cbz x20,0x71018d9bdc
71018d9b64  ldp x8,x24,[x20, #0x8]
71018d9b68  ldr w21,[x8]
71018d9b6c  mov x23,xzr
71018d9b70  b 0x71018d9b78
71018d9b74  add x23,x23,#0x1
71018d9b78  ldrb w8,[x24, x23, LSL ]
71018d9b7c  cmp w8,#0x73
71018d9b80  b.eq 0x71018d9b8c
71018d9b84  cbnz w8,0x71018d9b74
71018d9b88  b 0x71018d9ba4
71018d9b8c  ldr x25,[x20, #0x8]
71018d9b90  ldr x0,[x25, x23, LSL #0x3]
71018d9b94  cbz x0,0x71018d9b9c
71018d9b98  bl 0x710392eb40
71018d9b9c  str xzr,[x25, x23, LSL #0x3]
71018d9ba0  b 0x71018d9b74
71018d9ba4  mov x0,x20
71018d9ba8  bl 0x710392eb40
71018d9bac  sub w8,w21,#0x1
71018d9bb0  cmp w8,#0x5
71018d9bb4  str xzr,[sp]
71018d9bb8  b.hi 0x71018d9bdc
71018d9bbc  adrp x9,0x71044f6000
71018d9bc0  add x9,x9,#0x118
71018d9bc4  ldrsw x8,[x9, x8, LSL #0x2]
71018d9bc8  add x8,x8,x9
71018d9bcc  br x8
71018d9bd0  orr w1,wzr,#0x3
71018d9bd4  str w1,[x22, #0x28]
71018d9bd8  b 0x71018d9c5c
71018d9bdc  ldr x0,[x22, #0x8]
71018d9be0  mov w8,#0x2
71018d9be4  mov w1,wzr
71018d9be8  str w8,[x22, #0x28]
71018d9bec  bl 0x7101af86a0
71018d9bf0  ldr x8,[x22, #0x10]
71018d9bf4  ldr x21,[x8, #0x80]
71018d9bf8  ldr w8,[x21, #0x8]
71018d9bfc  cmn w8,#0x1
71018d9c00  b.eq 0x71018d9c58
71018d9c04  ldr x20,[x21, #0x18]
71018d9c08  mov w8,#0xffffffff
71018d9c0c  str w8,[x21, #0x8]
71018d9c10  cbz x20,0x71018d9c28
71018d9c14  mov x0,x20
71018d9c18  str xzr,[x21, #0x18]
71018d9c1c  bl 0x7103375760
71018d9c20  mov x0,x20
71018d9c24  bl 0x710392eb40
71018d9c28  ldr x20,[x21, #0x10]
71018d9c2c  cbz x20,0x71018d9c58
71018d9c30  str xzr,[x21, #0x10]
71018d9c34  ldr x21,[x20]
71018d9c38  str xzr,[x20]
71018d9c3c  cbz x21,0x71018d9c50
71018d9c40  mov x0,x21
71018d9c44  bl 0x7103773770
71018d9c48  mov x0,x21
71018d9c4c  bl 0x710392eb40
71018d9c50  mov x0,x20
71018d9c54  bl 0x710392eb40
71018d9c58  ldr w1,[x22, #0x28]
71018d9c5c  ldr x0,[x19, #0x8]
71018d9c60  add sp,sp,#0x2, LSL #12
71018d9c64  add sp,sp,#0x190
71018d9c68  ldp x29,x30,[sp, #0x40]
71018d9c6c  ldp x20,x19,[sp, #0x30]
71018d9c70  ldp x22,x21,[sp, #0x20]
71018d9c74  ldp x24,x23,[sp, #0x10]
71018d9c78  ldp x28,x25,[sp], #0x50
71018d9c7c  b 0x7103726af0
71018d9c80  mov w1,#0x4
71018d9c84  str w1,[x22, #0x28]
71018d9c88  b 0x71018d9c5c
71018d9c8c  mov w1,#0x5
71018d9c90  str w1,[x22, #0x28]
71018d9c94  b 0x71018d9c5c
71018d9c98  orr w1,wzr,#0x6
71018d9c9c  str w1,[x22, #0x28]
71018d9ca0  b 0x71018d9c5c
71018d9ca4  orr w1,wzr,#0x7
71018d9ca8  str w1,[x22, #0x28]
71018d9cac  b 0x71018d9c5c
71018d9cb0  mov w1,#0x8
71018d9cb4  str w1,[x22, #0x28]
71018d9cb8  b 0x71018d9c5c
71018d9cbc  adrp x0,0x7105314000
71018d9cc0  add x0,x0,#0x4d8
71018d9cc4  bl 0x71039c06b0
71018d9cc8  cbz w0,0x71018d98e0
71018d9ccc  bl 0x7101764000
71018d9cd0  adrp x0,0x7101763000
71018d9cd4  add x0,x0,#0xc40
71018d9cd8  adrp x1,0x71052c5000
71018d9cdc  add x1,x1,#0x180
71018d9ce0  adrp x2,0x7104f17000
71018d9ce4  add x2,x2,#0x0
71018d9ce8  bl 0x71000001c0
71018d9cec  adrp x0,0x7105314000
71018d9cf0  add x0,x0,#0x4d8
71018d9cf4  bl 0x71039c06c0
71018d9cf8  b 0x71018d98e0
