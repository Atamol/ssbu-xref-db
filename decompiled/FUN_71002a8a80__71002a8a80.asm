// addr:      71002a8a80
// offset:    0x2a8a80
// name:      FUN_71002a8a80
// mangled:   
// size:      2232

71002a8a80  sub sp,sp,#0xe0
71002a8a84  stp x26,x25,[sp, #0x90]
71002a8a88  stp x24,x23,[sp, #0xa0]
71002a8a8c  stp x22,x21,[sp, #0xb0]
71002a8a90  stp x20,x19,[sp, #0xc0]
71002a8a94  stp x29,x30,[sp, #0xd0]
71002a8a98  add x29,sp,#0xd0
71002a8a9c  mov w8,#0x100
71002a8aa0  stp xzr,x8,[sp, #0x68]
71002a8aa4  add x8,sp,#0x48
71002a8aa8  str x8,[sp, #0x8]
71002a8aac  sub x8,x29,#0x58
71002a8ab0  stp xzr,xzr,[sp, #0x48]
71002a8ab4  mov x20,x0
71002a8ab8  add x0,sp,#0x8
71002a8abc  mov x19,x1
71002a8ac0  strb wzr,[sp, #0x44]
71002a8ac4  stp x8,xzr,[sp, #0x10]
71002a8ac8  mov w8,#0x200
71002a8acc  stp xzr,x8,[sp, #0x30]
71002a8ad0  mov w8,#0x144
71002a8ad4  str w8,[sp, #0x40]
71002a8ad8  stp xzr,xzr,[sp, #0x58]
71002a8adc  stp xzr,xzr,[sp, #0x20]
71002a8ae0  bl 0x71001b3160
71002a8ae4  ldp x8,x21,[sp, #0x20]
71002a8ae8  cmp x21,x8
71002a8aec  b.eq 0x71002a92e4
71002a8af0  ldur x8,[x21, #-0x10]
71002a8af4  cbz x8,0x71002a8b20
71002a8af8  ldurb w9,[x21, #-0x8]
71002a8afc  ldr x0,[sp, #0x8]
71002a8b00  cbz w9,0x71002a8b0c
71002a8b04  mov w1,#0x2c
71002a8b08  b 0x71002a8b1c
71002a8b0c  tst x8,#0x1
71002a8b10  mov w8,#0x3a
71002a8b14  mov w9,#0x2c
71002a8b18  csel w1,w9,w8,eq
71002a8b1c  bl 0x71002ad5d0
71002a8b20  ldur x8,[x21, #-0x10]
71002a8b24  add x8,x8,#0x1
71002a8b28  stur x8,[x21, #-0x10]
71002a8b2c  ldr x0,[sp, #0x8]
71002a8b30  orr w1,wzr,#0x38
71002a8b34  bl 0x71002ad6c0
71002a8b38  ldr x10,[sp, #0x8]
71002a8b3c  ldr x11,[x10, #0x18]
71002a8b40  mov w22,#0x22
71002a8b44  adrp x24,0x71052a8000
71002a8b48  ldr x24,[x24, #0x860]
71002a8b4c  mov w23,#0x5c
71002a8b50  orr w9,wzr,#0x30
71002a8b54  add x12,x11,#0x1
71002a8b58  str x12,[x10, #0x18]
71002a8b5c  strb w22,[x11]
71002a8b60  adrp x25,0x71052a8000
71002a8b64  ldr x25,[x25, #0x868]
71002a8b68  adrp x8,0x71042d5000
71002a8b6c  add x8,x8,#0x806
71002a8b70  mov x10,x8
71002a8b74  ldrb w11,[x10]
71002a8b78  ldrb w12,[x24, x11, LSL ]
71002a8b7c  cbnz w12,0x71002a8ba8
71002a8b80  ldr x12,[sp, #0x8]
71002a8b84  ldr x13,[x12, #0x18]
71002a8b88  add x10,x10,#0x1
71002a8b8c  add x14,x13,#0x1
71002a8b90  str x14,[x12, #0x18]
71002a8b94  strb w11,[x13]
71002a8b98  sub x11,x10,x8
71002a8b9c  cmp x11,#0x9
71002a8ba0  b.cc 0x71002a8b74
71002a8ba4  b 0x71002a8c48
71002a8ba8  ldr x13,[sp, #0x8]
71002a8bac  ldr x14,[x13, #0x18]
71002a8bb0  add x15,x14,#0x1
71002a8bb4  str x15,[x13, #0x18]
71002a8bb8  strb w23,[x14]
71002a8bbc  ldr x13,[sp, #0x8]
71002a8bc0  ldr x14,[x13, #0x18]
71002a8bc4  add x10,x10,#0x1
71002a8bc8  cmp w12,#0x75
71002a8bcc  add x15,x14,#0x1
71002a8bd0  str x15,[x13, #0x18]
71002a8bd4  strb w12,[x14]
71002a8bd8  b.ne 0x71002a8b98
71002a8bdc  ldr x12,[sp, #0x8]
71002a8be0  ldr x13,[x12, #0x18]
71002a8be4  add x14,x13,#0x1
71002a8be8  str x14,[x12, #0x18]
71002a8bec  strb w9,[x13]
71002a8bf0  ldr x12,[sp, #0x8]
71002a8bf4  ldr x13,[x12, #0x18]
71002a8bf8  add x14,x13,#0x1
71002a8bfc  str x14,[x12, #0x18]
71002a8c00  strb w9,[x13]
71002a8c04  ldr x12,[sp, #0x8]
71002a8c08  lsr x13,x11,#0x4
71002a8c0c  ldrb w13,[x25, x13, LSL ]
71002a8c10  and x11,x11,#0xf
71002a8c14  ldr x14,[x12, #0x18]
71002a8c18  add x15,x14,#0x1
71002a8c1c  str x15,[x12, #0x18]
71002a8c20  strb w13,[x14]
71002a8c24  ldr x12,[sp, #0x8]
71002a8c28  ldr x13,[x12, #0x18]
71002a8c2c  ldrb w11,[x25, x11, LSL ]
71002a8c30  add x14,x13,#0x1
71002a8c34  str x14,[x12, #0x18]
71002a8c38  strb w11,[x13]
71002a8c3c  sub x11,x10,x8
71002a8c40  cmp x11,#0x9
71002a8c44  b.cc 0x71002a8b74
71002a8c48  ldr x8,[sp, #0x8]
71002a8c4c  ldr x9,[x8, #0x18]
71002a8c50  add x10,x9,#0x1
71002a8c54  mov w0,#0xffffffff
71002a8c58  str x10,[x8, #0x18]
71002a8c5c  strb w22,[x9]
71002a8c60  bl 0x71001b34a0
71002a8c64  ldp x8,x26,[sp, #0x20]
71002a8c68  add w21,w0,#0x1
71002a8c6c  cmp x26,x8
71002a8c70  b.eq 0x71002a92f0
71002a8c74  ldur x8,[x26, #-0x10]
71002a8c78  cbz x8,0x71002a8ca4
71002a8c7c  ldurb w9,[x26, #-0x8]
71002a8c80  ldr x0,[sp, #0x8]
71002a8c84  cbz w9,0x71002a8c90
71002a8c88  mov w1,#0x2c
71002a8c8c  b 0x71002a8ca0
71002a8c90  tst x8,#0x1
71002a8c94  mov w8,#0x3a
71002a8c98  mov w9,#0x2c
71002a8c9c  csel w1,w9,w8,eq
71002a8ca0  bl 0x71002ad5d0
71002a8ca4  ldur x8,[x26, #-0x10]
71002a8ca8  add x8,x8,#0x1
71002a8cac  stur x8,[x26, #-0x10]
71002a8cb0  sub x1,x29,#0x54
71002a8cb4  mov w0,w21
71002a8cb8  sub x26,x29,#0x54
71002a8cbc  bl 0x71001b9fe0
71002a8cc0  mov x21,x0
71002a8cc4  ldr x0,[sp, #0x8]
71002a8cc8  sub x1,x21,x26
71002a8ccc  bl 0x71002ad6c0
71002a8cd0  cmp x26,x21
71002a8cd4  b.eq 0x71002a8cfc
71002a8cd8  sub x8,x29,#0x54
71002a8cdc  ldr x9,[sp, #0x8]
71002a8ce0  ldrb w10,[x8], #0x1
71002a8ce4  ldr x11,[x9, #0x18]
71002a8ce8  add x12,x11,#0x1
71002a8cec  cmp x21,x8
71002a8cf0  str x12,[x9, #0x18]
71002a8cf4  strb w10,[x11]
71002a8cf8  b.ne 0x71002a8cdc
71002a8cfc  ldp x8,x21,[sp, #0x20]
71002a8d00  cmp x21,x8
71002a8d04  b.eq 0x71002a92fc
71002a8d08  ldur x8,[x21, #-0x10]
71002a8d0c  cbz x8,0x71002a8d38
71002a8d10  ldurb w9,[x21, #-0x8]
71002a8d14  ldr x0,[sp, #0x8]
71002a8d18  cbz w9,0x71002a8d24
71002a8d1c  mov w1,#0x2c
71002a8d20  b 0x71002a8d34
71002a8d24  tst x8,#0x1
71002a8d28  mov w8,#0x3a
71002a8d2c  mov w9,#0x2c
71002a8d30  csel w1,w9,w8,eq
71002a8d34  bl 0x71002ad5d0
71002a8d38  ldur x8,[x21, #-0x10]
71002a8d3c  add x8,x8,#0x1
71002a8d40  stur x8,[x21, #-0x10]
71002a8d44  ldr x0,[sp, #0x8]
71002a8d48  orr w1,wzr,#0x38
71002a8d4c  bl 0x71002ad6c0
71002a8d50  ldr x9,[sp, #0x8]
71002a8d54  ldr x10,[x9, #0x18]
71002a8d58  adrp x8,0x7104349000
71002a8d5c  add x8,x8,#0x85b
71002a8d60  add x11,x10,#0x1
71002a8d64  str x11,[x9, #0x18]
71002a8d68  strb w22,[x10]
71002a8d6c  orr w9,wzr,#0x30
71002a8d70  mov x10,x8
71002a8d74  ldrb w11,[x10]
71002a8d78  ldrb w12,[x24, x11, LSL ]
71002a8d7c  cbnz w12,0x71002a8da8
71002a8d80  ldr x12,[sp, #0x8]
71002a8d84  ldr x13,[x12, #0x18]
71002a8d88  add x10,x10,#0x1
71002a8d8c  add x14,x13,#0x1
71002a8d90  str x14,[x12, #0x18]
71002a8d94  strb w11,[x13]
71002a8d98  sub x11,x10,x8
71002a8d9c  cmp x11,#0x9
71002a8da0  b.cc 0x71002a8d74
71002a8da4  b 0x71002a8e48
71002a8da8  ldr x13,[sp, #0x8]
71002a8dac  ldr x14,[x13, #0x18]
71002a8db0  add x15,x14,#0x1
71002a8db4  str x15,[x13, #0x18]
71002a8db8  strb w23,[x14]
71002a8dbc  ldr x13,[sp, #0x8]
71002a8dc0  ldr x14,[x13, #0x18]
71002a8dc4  add x10,x10,#0x1
71002a8dc8  cmp w12,#0x75
71002a8dcc  add x15,x14,#0x1
71002a8dd0  str x15,[x13, #0x18]
71002a8dd4  strb w12,[x14]
71002a8dd8  b.ne 0x71002a8d98
71002a8ddc  ldr x12,[sp, #0x8]
71002a8de0  ldr x13,[x12, #0x18]
71002a8de4  add x14,x13,#0x1
71002a8de8  str x14,[x12, #0x18]
71002a8dec  strb w9,[x13]
71002a8df0  ldr x12,[sp, #0x8]
71002a8df4  ldr x13,[x12, #0x18]
71002a8df8  add x14,x13,#0x1
71002a8dfc  str x14,[x12, #0x18]
71002a8e00  strb w9,[x13]
71002a8e04  ldr x12,[sp, #0x8]
71002a8e08  lsr x13,x11,#0x4
71002a8e0c  ldrb w13,[x25, x13, LSL ]
71002a8e10  and x11,x11,#0xf
71002a8e14  ldr x14,[x12, #0x18]
71002a8e18  add x15,x14,#0x1
71002a8e1c  str x15,[x12, #0x18]
71002a8e20  strb w13,[x14]
71002a8e24  ldr x12,[sp, #0x8]
71002a8e28  ldr x13,[x12, #0x18]
71002a8e2c  ldrb w11,[x25, x11, LSL ]
71002a8e30  add x14,x13,#0x1
71002a8e34  str x14,[x12, #0x18]
71002a8e38  strb w11,[x13]
71002a8e3c  sub x11,x10,x8
71002a8e40  cmp x11,#0x9
71002a8e44  b.cc 0x71002a8d74
71002a8e48  ldr x8,[sp, #0x8]
71002a8e4c  ldr x9,[x8, #0x18]
71002a8e50  add x10,x9,#0x1
71002a8e54  add x0,sp,#0x8
71002a8e58  str x10,[x8, #0x18]
71002a8e5c  strb w22,[x9]
71002a8e60  bl 0x71001b3160
71002a8e64  ldp x8,x21,[sp, #0x20]
71002a8e68  cmp x21,x8
71002a8e6c  b.eq 0x71002a9308
71002a8e70  ldur x8,[x21, #-0x10]
71002a8e74  cbz x8,0x71002a8ea0
71002a8e78  ldurb w9,[x21, #-0x8]
71002a8e7c  ldr x0,[sp, #0x8]
71002a8e80  cbz w9,0x71002a8e8c
71002a8e84  mov w1,#0x2c
71002a8e88  b 0x71002a8e9c
71002a8e8c  tst x8,#0x1
71002a8e90  mov w8,#0x3a
71002a8e94  mov w9,#0x2c
71002a8e98  csel w1,w9,w8,eq
71002a8e9c  bl 0x71002ad5d0
71002a8ea0  ldur x8,[x21, #-0x10]
71002a8ea4  add x8,x8,#0x1
71002a8ea8  stur x8,[x21, #-0x10]
71002a8eac  ldr x0,[sp, #0x8]
71002a8eb0  mov w1,#0x26
71002a8eb4  bl 0x71002ad6c0
71002a8eb8  ldr x9,[sp, #0x8]
71002a8ebc  ldr x10,[x9, #0x18]
71002a8ec0  adrp x8,0x7104318000
71002a8ec4  add x8,x8,#0x4b7
71002a8ec8  add x11,x10,#0x1
71002a8ecc  str x11,[x9, #0x18]
71002a8ed0  strb w22,[x10]
71002a8ed4  orr w9,wzr,#0x30
71002a8ed8  mov x10,x8
71002a8edc  ldrb w11,[x10]
71002a8ee0  ldrb w12,[x24, x11, LSL ]
71002a8ee4  cbnz w12,0x71002a8f10
71002a8ee8  ldr x12,[sp, #0x8]
71002a8eec  ldr x13,[x12, #0x18]
71002a8ef0  add x10,x10,#0x1
71002a8ef4  add x14,x13,#0x1
71002a8ef8  str x14,[x12, #0x18]
71002a8efc  strb w11,[x13]
71002a8f00  sub x11,x10,x8
71002a8f04  cmp x11,#0x6
71002a8f08  b.cc 0x71002a8edc
71002a8f0c  b 0x71002a8fb0
71002a8f10  ldr x13,[sp, #0x8]
71002a8f14  ldr x14,[x13, #0x18]
71002a8f18  add x15,x14,#0x1
71002a8f1c  str x15,[x13, #0x18]
71002a8f20  strb w23,[x14]
71002a8f24  ldr x13,[sp, #0x8]
71002a8f28  ldr x14,[x13, #0x18]
71002a8f2c  add x10,x10,#0x1
71002a8f30  cmp w12,#0x75
71002a8f34  add x15,x14,#0x1
71002a8f38  str x15,[x13, #0x18]
71002a8f3c  strb w12,[x14]
71002a8f40  b.ne 0x71002a8f00
71002a8f44  ldr x12,[sp, #0x8]
71002a8f48  ldr x13,[x12, #0x18]
71002a8f4c  add x14,x13,#0x1
71002a8f50  str x14,[x12, #0x18]
71002a8f54  strb w9,[x13]
71002a8f58  ldr x12,[sp, #0x8]
71002a8f5c  ldr x13,[x12, #0x18]
71002a8f60  add x14,x13,#0x1
71002a8f64  str x14,[x12, #0x18]
71002a8f68  strb w9,[x13]
71002a8f6c  ldr x12,[sp, #0x8]
71002a8f70  lsr x13,x11,#0x4
71002a8f74  ldrb w13,[x25, x13, LSL ]
71002a8f78  and x11,x11,#0xf
71002a8f7c  ldr x14,[x12, #0x18]
71002a8f80  add x15,x14,#0x1
71002a8f84  str x15,[x12, #0x18]
71002a8f88  strb w13,[x14]
71002a8f8c  ldr x12,[sp, #0x8]
71002a8f90  ldr x13,[x12, #0x18]
71002a8f94  ldrb w11,[x25, x11, LSL ]
71002a8f98  add x14,x13,#0x1
71002a8f9c  str x14,[x12, #0x18]
71002a8fa0  strb w11,[x13]
71002a8fa4  sub x11,x10,x8
71002a8fa8  cmp x11,#0x6
71002a8fac  b.cc 0x71002a8edc
71002a8fb0  ldr x8,[sp, #0x8]
71002a8fb4  ldr x9,[x8, #0x18]
71002a8fb8  add x10,x9,#0x1
71002a8fbc  str x10,[x8, #0x18]
71002a8fc0  strb w22,[x9]
71002a8fc4  ldr x21,[x20, #0x8]
71002a8fc8  ldp x8,x26,[sp, #0x20]
71002a8fcc  cmp x26,x8
71002a8fd0  b.eq 0x71002a9314
71002a8fd4  ldur x8,[x26, #-0x10]
71002a8fd8  cbz x8,0x71002a9004
71002a8fdc  ldurb w9,[x26, #-0x8]
71002a8fe0  ldr x0,[sp, #0x8]
71002a8fe4  cbz w9,0x71002a8ff0
71002a8fe8  mov w1,#0x2c
71002a8fec  b 0x71002a9000
71002a8ff0  tst x8,#0x1
71002a8ff4  mov w8,#0x3a
71002a8ff8  mov w9,#0x2c
71002a8ffc  csel w1,w9,w8,eq
71002a9000  bl 0x71002ad5d0
71002a9004  ldur x8,[x26, #-0x10]
71002a9008  add x8,x8,#0x1
71002a900c  stur x8,[x26, #-0x10]
71002a9010  sub x1,x29,#0x54
71002a9014  mov x0,x21
71002a9018  sub x26,x29,#0x54
71002a901c  bl 0x71001b9950
71002a9020  mov x21,x0
71002a9024  ldr x0,[sp, #0x8]
71002a9028  sub x1,x21,x26
71002a902c  bl 0x71002ad6c0
71002a9030  cmp x26,x21
71002a9034  b.eq 0x71002a905c
71002a9038  sub x8,x29,#0x54
71002a903c  ldr x9,[sp, #0x8]
71002a9040  ldrb w10,[x8], #0x1
71002a9044  ldr x11,[x9, #0x18]
71002a9048  add x12,x11,#0x1
71002a904c  cmp x21,x8
71002a9050  str x12,[x9, #0x18]
71002a9054  strb w10,[x11]
71002a9058  b.ne 0x71002a903c
71002a905c  ldp x8,x21,[sp, #0x20]
71002a9060  cmp x21,x8
71002a9064  b.eq 0x71002a9320
71002a9068  ldur x8,[x21, #-0x10]
71002a906c  cbz x8,0x71002a9098
71002a9070  ldurb w9,[x21, #-0x8]
71002a9074  ldr x0,[sp, #0x8]
71002a9078  cbz w9,0x71002a9084
71002a907c  mov w1,#0x2c
71002a9080  b 0x71002a9094
71002a9084  tst x8,#0x1
71002a9088  mov w8,#0x3a
71002a908c  mov w9,#0x2c
71002a9090  csel w1,w9,w8,eq
71002a9094  bl 0x71002ad5d0
71002a9098  ldur x8,[x21, #-0x10]
71002a909c  add x8,x8,#0x1
71002a90a0  stur x8,[x21, #-0x10]
71002a90a4  ldr x0,[sp, #0x8]
71002a90a8  orr w1,wzr,#0x38
71002a90ac  bl 0x71002ad6c0
71002a90b0  ldr x9,[sp, #0x8]
71002a90b4  ldr x10,[x9, #0x18]
71002a90b8  adrp x8,0x7104318000
71002a90bc  add x8,x8,#0x4be
71002a90c0  add x11,x10,#0x1
71002a90c4  str x11,[x9, #0x18]
71002a90c8  strb w22,[x10]
71002a90cc  orr w9,wzr,#0x30
71002a90d0  mov x10,x8
71002a90d4  ldrb w11,[x10]
71002a90d8  ldrb w12,[x24, x11, LSL ]
71002a90dc  cbnz w12,0x71002a9108
71002a90e0  ldr x12,[sp, #0x8]
71002a90e4  ldr x13,[x12, #0x18]
71002a90e8  add x10,x10,#0x1
71002a90ec  add x14,x13,#0x1
71002a90f0  str x14,[x12, #0x18]
71002a90f4  strb w11,[x13]
71002a90f8  sub x11,x10,x8
71002a90fc  cmp x11,#0x9
71002a9100  b.cc 0x71002a90d4
71002a9104  b 0x71002a91a8
71002a9108  ldr x13,[sp, #0x8]
71002a910c  ldr x14,[x13, #0x18]
71002a9110  add x15,x14,#0x1
71002a9114  str x15,[x13, #0x18]
71002a9118  strb w23,[x14]
71002a911c  ldr x13,[sp, #0x8]
71002a9120  ldr x14,[x13, #0x18]
71002a9124  add x10,x10,#0x1
71002a9128  cmp w12,#0x75
71002a912c  add x15,x14,#0x1
71002a9130  str x15,[x13, #0x18]
71002a9134  strb w12,[x14]
71002a9138  b.ne 0x71002a90f8
71002a913c  ldr x12,[sp, #0x8]
71002a9140  ldr x13,[x12, #0x18]
71002a9144  add x14,x13,#0x1
71002a9148  str x14,[x12, #0x18]
71002a914c  strb w9,[x13]
71002a9150  ldr x12,[sp, #0x8]
71002a9154  ldr x13,[x12, #0x18]
71002a9158  add x14,x13,#0x1
71002a915c  str x14,[x12, #0x18]
71002a9160  strb w9,[x13]
71002a9164  ldr x12,[sp, #0x8]
71002a9168  lsr x13,x11,#0x4
71002a916c  ldrb w13,[x25, x13, LSL ]
71002a9170  and x11,x11,#0xf
71002a9174  ldr x14,[x12, #0x18]
71002a9178  add x15,x14,#0x1
71002a917c  str x15,[x12, #0x18]
71002a9180  strb w13,[x14]
71002a9184  ldr x12,[sp, #0x8]
71002a9188  ldr x13,[x12, #0x18]
71002a918c  ldrb w11,[x25, x11, LSL ]
71002a9190  add x14,x13,#0x1
71002a9194  str x14,[x12, #0x18]
71002a9198  strb w11,[x13]
71002a919c  sub x11,x10,x8
71002a91a0  cmp x11,#0x9
71002a91a4  b.cc 0x71002a90d4
71002a91a8  ldr x8,[sp, #0x8]
71002a91ac  ldr x9,[x8, #0x18]
71002a91b0  add x10,x9,#0x1
71002a91b4  str x10,[x8, #0x18]
71002a91b8  strb w22,[x9]
71002a91bc  ldr w20,[x20, #0x10]
71002a91c0  ldp x8,x21,[sp, #0x20]
71002a91c4  cmp x21,x8
71002a91c8  b.eq 0x71002a932c
71002a91cc  ldur x8,[x21, #-0x10]
71002a91d0  cbz x8,0x71002a91fc
71002a91d4  ldurb w9,[x21, #-0x8]
71002a91d8  ldr x0,[sp, #0x8]
71002a91dc  cbz w9,0x71002a91e8
71002a91e0  mov w1,#0x2c
71002a91e4  b 0x71002a91f8
71002a91e8  tst x8,#0x1
71002a91ec  mov w8,#0x3a
71002a91f0  mov w9,#0x2c
71002a91f4  csel w1,w9,w8,eq
71002a91f8  bl 0x71002ad5d0
71002a91fc  ldur x8,[x21, #-0x10]
71002a9200  add x8,x8,#0x1
71002a9204  stur x8,[x21, #-0x10]
71002a9208  sub x1,x29,#0x54
71002a920c  mov w0,w20
71002a9210  sub x21,x29,#0x54
71002a9214  bl 0x71001b9fe0
71002a9218  mov x20,x0
71002a921c  ldr x0,[sp, #0x8]
71002a9220  sub x1,x20,x21
71002a9224  bl 0x71002ad6c0
71002a9228  cmp x21,x20
71002a922c  b.eq 0x71002a9254
71002a9230  sub x8,x29,#0x54
71002a9234  ldr x9,[sp, #0x8]
71002a9238  ldrb w10,[x8], #0x1
71002a923c  ldr x11,[x9, #0x18]
71002a9240  add x12,x11,#0x1
71002a9244  cmp x20,x8
71002a9248  str x12,[x9, #0x18]
71002a924c  strb w10,[x11]
71002a9250  b.ne 0x71002a9234
71002a9254  ldr x8,[sp, #0x28]
71002a9258  ldr x0,[sp, #0x8]
71002a925c  mov w20,#0x7d
71002a9260  mov w1,w20
71002a9264  sub x8,x8,#0x10
71002a9268  str x8,[sp, #0x28]
71002a926c  bl 0x71002ad5d0
71002a9270  ldr x8,[sp, #0x28]
71002a9274  ldr x0,[sp, #0x8]
71002a9278  sub x8,x8,#0x10
71002a927c  mov w1,w20
71002a9280  str x8,[sp, #0x28]
71002a9284  bl 0x71002ad5d0
71002a9288  add x0,sp,#0x48
71002a928c  bl 0x71002ac3d0
71002a9290  mov x1,x0
71002a9294  mov x0,x19
71002a9298  bl 0x71001b3cb0
71002a929c  ldr x0,[sp, #0x20]
71002a92a0  bl 0x71001b1870
71002a92a4  ldr x0,[sp, #0x18]
71002a92a8  cbz x0,0x71002a92b0
71002a92ac  bl 0x71001b1870
71002a92b0  ldr x0,[sp, #0x58]
71002a92b4  bl 0x71001b1870
71002a92b8  ldr x0,[sp, #0x50]
71002a92bc  cbz x0,0x71002a92c4
71002a92c0  bl 0x71001b1870
71002a92c4  ldp x29,x30,[sp, #0xd0]
71002a92c8  mov w0,#0x1
71002a92cc  ldp x20,x19,[sp, #0xc0]
71002a92d0  ldp x22,x21,[sp, #0xb0]
71002a92d4  ldp x24,x23,[sp, #0xa0]
71002a92d8  ldp x26,x25,[sp, #0x90]
71002a92dc  add sp,sp,#0xe0
71002a92e0  ret
71002a92e4  mov w8,#0x1
71002a92e8  strb w8,[sp, #0x44]
71002a92ec  b 0x71002a8b2c
71002a92f0  mov w8,#0x1
71002a92f4  strb w8,[sp, #0x44]
71002a92f8  b 0x71002a8cb0
71002a92fc  mov w8,#0x1
71002a9300  strb w8,[sp, #0x44]
71002a9304  b 0x71002a8d44
71002a9308  mov w8,#0x1
71002a930c  strb w8,[sp, #0x44]
71002a9310  b 0x71002a8eac
71002a9314  mov w8,#0x1
71002a9318  strb w8,[sp, #0x44]
71002a931c  b 0x71002a9010
71002a9320  mov w8,#0x1
71002a9324  strb w8,[sp, #0x44]
71002a9328  b 0x71002a90a4
71002a932c  mov w8,#0x1
71002a9330  strb w8,[sp, #0x44]
71002a9334  b 0x71002a9208
