// addr:      7101cf8af0
// offset:    0x1cf8af0
// name:      FUN_7101cf8af0
// mangled:   
// size:      6096

7101cf8af0  sub sp,sp,#0x1d0
7101cf8af4  stp x28,x27,[sp, #0x170]
7101cf8af8  stp x26,x25,[sp, #0x180]
7101cf8afc  stp x24,x23,[sp, #0x190]
7101cf8b00  stp x22,x21,[sp, #0x1a0]
7101cf8b04  stp x20,x19,[sp, #0x1b0]
7101cf8b08  stp x29,x30,[sp, #0x1c0]
7101cf8b0c  add x29,sp,#0x1c0
7101cf8b10  ldr x8,[x0, #0x150]
7101cf8b14  ldr x8,[x8]
7101cf8b18  ldr x8,[x8, #0x10]
7101cf8b1c  ldr x8,[x8, #0x8]
7101cf8b20  mov x20,x3
7101cf8b24  mov w21,w1
7101cf8b28  mov x19,x0
7101cf8b2c  cbz x8,0x7101cf8b44
7101cf8b30  ldr x8,[x8, #0x18]
7101cf8b34  cbz x8,0x7101cf8b44
7101cf8b38  ldrb w9,[x8, #0x58]
7101cf8b3c  orr w9,w9,#0x1
7101cf8b40  strb w9,[x8, #0x58]
7101cf8b44  ldr x8,[x19, #0x158]
7101cf8b48  ldr x8,[x8]
7101cf8b4c  ldr x8,[x8, #0x10]
7101cf8b50  ldr x8,[x8, #0x8]
7101cf8b54  cbz x8,0x7101cf8b6c
7101cf8b58  ldr x8,[x8, #0x18]
7101cf8b5c  cbz x8,0x7101cf8b6c
7101cf8b60  ldrb w9,[x8, #0x58]
7101cf8b64  orr w9,w9,#0x1
7101cf8b68  strb w9,[x8, #0x58]
7101cf8b6c  ldr x8,[x19, #0x148]
7101cf8b70  ldr x8,[x8]
7101cf8b74  ldr x8,[x8, #0x10]
7101cf8b78  ldr x8,[x8, #0x8]
7101cf8b7c  cbz x8,0x7101cf8b94
7101cf8b80  ldr x8,[x8, #0x18]
7101cf8b84  cbz x8,0x7101cf8b94
7101cf8b88  ldrb w9,[x8, #0x58]
7101cf8b8c  orr w9,w9,#0x1
7101cf8b90  strb w9,[x8, #0x58]
7101cf8b94  mov w27,#0x9dc5
7101cf8b98  movk w27,#0x811c, LSL #16
7101cf8b9c  subs w22,w21,#0x1
7101cf8ba0  str w21,[x19, #0x1a8]
7101cf8ba4  b.eq 0x7101cf8bf0
7101cf8ba8  cbnz w21,0x7101cf8c34
7101cf8bac  orr x8,xzr,#0x300000000
7101cf8bb0  sub x9,x29,#0xa0
7101cf8bb4  mov w10,#0x7331
7101cf8bb8  movk w10,#0x74, LSL #16
7101cf8bbc  stur x8,[x29, #-0xa0]
7101cf8bc0  add x1,x9,#0x8
7101cf8bc4  stur w10,[x29, #-0x98]
7101cf8bc8  add x8,x9,#0x9
7101cf8bcc  mov w10,#0x31
7101cf8bd0  mov w9,#0x89
7101cf8bd4  mov w11,w27
7101cf8bd8  mul w11,w11,w9
7101cf8bdc  and w10,w10,#0xff
7101cf8be0  eor w11,w11,w10
7101cf8be4  ldrb w10,[x8], #0x1
7101cf8be8  cbnz w10,0x7101cf8bd8
7101cf8bec  b 0x7101cf8d2c
7101cf8bf0  orr x8,xzr,#0x300000000
7101cf8bf4  sub x9,x29,#0xa0
7101cf8bf8  mov w10,#0x6e32
7101cf8bfc  movk w10,#0x64, LSL #16
7101cf8c00  stur x8,[x29, #-0xa0]
7101cf8c04  add x1,x9,#0x8
7101cf8c08  stur w10,[x29, #-0x98]
7101cf8c0c  add x8,x9,#0x9
7101cf8c10  mov w10,#0x32
7101cf8c14  mov w9,#0x89
7101cf8c18  mov w11,w27
7101cf8c1c  mul w11,w11,w9
7101cf8c20  and w10,w10,#0xff
7101cf8c24  eor w11,w11,w10
7101cf8c28  ldrb w10,[x8], #0x1
7101cf8c2c  cbnz w10,0x7101cf8c1c
7101cf8c30  b 0x7101cf8d2c
7101cf8c34  cmp w2,#0x1
7101cf8c38  b.eq 0x7101cf8c94
7101cf8c3c  cmp w2,#0x2
7101cf8c40  b.ne 0x7101cf8ce4
7101cf8c44  mov x10,#0x7233
7101cf8c48  movk x10,#0x5f64, LSL #16
7101cf8c4c  mov x8,#0x900000000
7101cf8c50  sub x9,x29,#0xa0
7101cf8c54  movk x10,#0x7665, LSL #32
7101cf8c58  movk x10,#0x6e65, LSL #48
7101cf8c5c  stp x8,x10,[x29, #-0xa0]
7101cf8c60  add x1,x9,#0x8
7101cf8c64  add x8,x9,#0x9
7101cf8c68  mov w9,#0x74
7101cf8c6c  sturh w9,[x29, #-0x90]
7101cf8c70  mov w10,#0x33
7101cf8c74  mov w9,#0x89
7101cf8c78  mov w11,w27
7101cf8c7c  mul w11,w11,w9
7101cf8c80  and w10,w10,#0xff
7101cf8c84  eor w11,w11,w10
7101cf8c88  ldrb w10,[x8], #0x1
7101cf8c8c  cbnz w10,0x7101cf8c7c
7101cf8c90  b 0x7101cf8d2c
7101cf8c94  mov x10,#0x7233
7101cf8c98  movk x10,#0x5f64, LSL #16
7101cf8c9c  mov x8,#0x900000000
7101cf8ca0  sub x9,x29,#0xa0
7101cf8ca4  movk x10,#0x656d, LSL #32
7101cf8ca8  movk x10,#0x656c, LSL #48
7101cf8cac  stp x8,x10,[x29, #-0xa0]
7101cf8cb0  add x1,x9,#0x8
7101cf8cb4  add x8,x9,#0x9
7101cf8cb8  mov w9,#0x65
7101cf8cbc  sturh w9,[x29, #-0x90]
7101cf8cc0  mov w10,#0x33
7101cf8cc4  mov w9,#0x89
7101cf8cc8  mov w11,w27
7101cf8ccc  mul w11,w11,w9
7101cf8cd0  and w10,w10,#0xff
7101cf8cd4  eor w11,w11,w10
7101cf8cd8  ldrb w10,[x8], #0x1
7101cf8cdc  cbnz w10,0x7101cf8ccc
7101cf8ce0  b 0x7101cf8d2c
7101cf8ce4  mov x10,#0x7233
7101cf8ce8  movk x10,#0x5f64, LSL #16
7101cf8cec  orr x8,xzr,#0x800000000
7101cf8cf0  sub x9,x29,#0xa0
7101cf8cf4  movk x10,#0x6f31, LSL #32
7101cf8cf8  movk x10,#0x316e, LSL #48
7101cf8cfc  stp x8,x10,[x29, #-0xa0]
7101cf8d00  add x1,x9,#0x8
7101cf8d04  add x8,x9,#0x9
7101cf8d08  mov w10,#0x33
7101cf8d0c  sturb wzr,[x29, #-0x90]
7101cf8d10  mov w9,#0x89
7101cf8d14  mov w11,w27
7101cf8d18  mul w11,w11,w9
7101cf8d1c  and w10,w10,#0xff
7101cf8d20  eor w11,w11,w10
7101cf8d24  ldrb w10,[x8], #0x1
7101cf8d28  cbnz w10,0x7101cf8d18
7101cf8d2c  stur w11,[x29, #-0xa0]
7101cf8d30  ldr x8,[x19, #0x148]
7101cf8d34  ldr x8,[x8]
7101cf8d38  ldr x0,[x8, #0x10]
7101cf8d3c  fmov s0,0x3f800000
7101cf8d40  add x23,sp,#0xc8
7101cf8d44  bl 0x7103778300
7101cf8d48  cmp w22,#0x5
7101cf8d4c  b.hi 0x7101cf9100
7101cf8d50  adrp x8,0x71044fa000
7101cf8d54  add x8,x8,#0x194
7101cf8d58  ldrsw x9,[x8, x22, LSL #0x2]
7101cf8d5c  add x8,x9,x8
7101cf8d60  br x8
7101cf8d64  mov x9,#0x656d
7101cf8d68  movk x9,#0x5f6c, LSL #16
7101cf8d6c  movk x9,#0x6f74, LSL #32
7101cf8d70  movk x9,#0x7275, LSL #48
7101cf8d74  str x9,[sp, #0xd0]
7101cf8d78  mov x9,#0x616e
7101cf8d7c  movk x9,#0x656d, LSL #16
7101cf8d80  movk x9,#0x746e, LSL #32
7101cf8d84  movk x9,#0x635f, LSL #48
7101cf8d88  str x9,[sp, #0xd8]
7101cf8d8c  mov w9,#0x6168
7101cf8d90  strh w9,[sp, #0xe0]
7101cf8d94  mov x9,#0x7472
7101cf8d98  movk x9,#0x725f, LSL #16
7101cf8d9c  mov x8,#0x2400000000
7101cf8da0  str x8,[sp, #0xc8]
7101cf8da4  add x8,sp,#0xc8
7101cf8da8  add x22,x8,#0x8
7101cf8dac  movk x9,#0x7365, LSL #32
7101cf8db0  movk x9,#0x6c75, LSL #48
7101cf8db4  stur x9,[x23, #0x1a]
7101cf8db8  mov w9,#0x5f74
7101cf8dbc  movk w9,#0x6966, LSL #16
7101cf8dc0  stur w9,[x23, #0x22]
7101cf8dc4  mov w9,#0x616e
7101cf8dc8  strh w9,[sp, #0xee]
7101cf8dcc  mov w9,#0x5f6c
7101cf8dd0  movk w9,#0x3230, LSL #16
7101cf8dd4  str w9,[sp, #0xf0]
7101cf8dd8  add x8,x8,#0x9
7101cf8ddc  mov w10,#0x6d
7101cf8de0  strb wzr,[sp, #0xf4]
7101cf8de4  mov w9,#0x89
7101cf8de8  mov w11,w27
7101cf8dec  mul w11,w11,w9
7101cf8df0  and w10,w10,#0xff
7101cf8df4  eor w11,w11,w10
7101cf8df8  ldrb w10,[x8], #0x1
7101cf8dfc  cbnz w10,0x7101cf8dec
7101cf8e00  b 0x7101cf919c
7101cf8e04  mov x10,#0x656d
7101cf8e08  movk x10,#0x5f6c, LSL #16
7101cf8e0c  mov x8,#0x2100000000
7101cf8e10  add x9,sp,#0xc8
7101cf8e14  movk x10,#0x6f74, LSL #32
7101cf8e18  movk x10,#0x7275, LSL #48
7101cf8e1c  stp x8,x10,[sp, #0xc8]
7101cf8e20  add x22,x9,#0x8
7101cf8e24  add x8,x9,#0x9
7101cf8e28  mov x9,#0x616e
7101cf8e2c  movk x9,#0x656d, LSL #16
7101cf8e30  movk x9,#0x746e, LSL #32
7101cf8e34  movk x9,#0x635f, LSL #48
7101cf8e38  str x9,[sp, #0xd8]
7101cf8e3c  mov w9,#0x6168
7101cf8e40  strh w9,[sp, #0xe0]
7101cf8e44  mov x9,#0x7472
7101cf8e48  movk x9,#0x725f, LSL #16
7101cf8e4c  mov x11,#0x5f74
7101cf8e50  movk x11,#0x6562, LSL #16
7101cf8e54  movk x9,#0x7365, LSL #32
7101cf8e58  movk x9,#0x6c75, LSL #48
7101cf8e5c  stur x9,[x23, #0x1a]
7101cf8e60  movk x11,#0x7473, LSL #32
7101cf8e64  movk x11,#0x38, LSL #48
7101cf8e68  stur x11,[x23, #0x22]
7101cf8e6c  mov w10,#0x6d
7101cf8e70  mov w9,#0x89
7101cf8e74  mov w11,w27
7101cf8e78  mul w11,w11,w9
7101cf8e7c  and w10,w10,#0xff
7101cf8e80  eor w11,w11,w10
7101cf8e84  ldrb w10,[x8], #0x1
7101cf8e88  cbnz w10,0x7101cf8e78
7101cf8e8c  b 0x7101cf919c
7101cf8e90  mov x9,#0x656d
7101cf8e94  movk x9,#0x5f6c, LSL #16
7101cf8e98  movk x9,#0x6f74, LSL #32
7101cf8e9c  movk x9,#0x7275, LSL #48
7101cf8ea0  str x9,[sp, #0xd0]
7101cf8ea4  mov x9,#0x616e
7101cf8ea8  movk x9,#0x656d, LSL #16
7101cf8eac  movk x9,#0x746e, LSL #32
7101cf8eb0  movk x9,#0x635f, LSL #48
7101cf8eb4  str x9,[sp, #0xd8]
7101cf8eb8  mov w9,#0x6168
7101cf8ebc  strh w9,[sp, #0xe0]
7101cf8ec0  mov x9,#0x7472
7101cf8ec4  movk x9,#0x725f, LSL #16
7101cf8ec8  mov x8,#0x2400000000
7101cf8ecc  str x8,[sp, #0xc8]
7101cf8ed0  add x8,sp,#0xc8
7101cf8ed4  add x22,x8,#0x8
7101cf8ed8  movk x9,#0x7365, LSL #32
7101cf8edc  movk x9,#0x6c75, LSL #48
7101cf8ee0  stur x9,[x23, #0x1a]
7101cf8ee4  mov w9,#0x5f74
7101cf8ee8  movk w9,#0x6966, LSL #16
7101cf8eec  stur w9,[x23, #0x22]
7101cf8ef0  mov w9,#0x616e
7101cf8ef4  strh w9,[sp, #0xee]
7101cf8ef8  mov w9,#0x5f6c
7101cf8efc  movk w9,#0x3430, LSL #16
7101cf8f00  str w9,[sp, #0xf0]
7101cf8f04  add x8,x8,#0x9
7101cf8f08  mov w10,#0x6d
7101cf8f0c  strb wzr,[sp, #0xf4]
7101cf8f10  mov w9,#0x89
7101cf8f14  mov w11,w27
7101cf8f18  mul w11,w11,w9
7101cf8f1c  and w10,w10,#0xff
7101cf8f20  eor w11,w11,w10
7101cf8f24  ldrb w10,[x8], #0x1
7101cf8f28  cbnz w10,0x7101cf8f18
7101cf8f2c  b 0x7101cf919c
7101cf8f30  mov x9,#0x656d
7101cf8f34  movk x9,#0x5f6c, LSL #16
7101cf8f38  movk x9,#0x6f74, LSL #32
7101cf8f3c  movk x9,#0x7275, LSL #48
7101cf8f40  str x9,[sp, #0xd0]
7101cf8f44  mov x9,#0x616e
7101cf8f48  movk x9,#0x656d, LSL #16
7101cf8f4c  movk x9,#0x746e, LSL #32
7101cf8f50  movk x9,#0x635f, LSL #48
7101cf8f54  str x9,[sp, #0xd8]
7101cf8f58  mov w9,#0x6168
7101cf8f5c  strh w9,[sp, #0xe0]
7101cf8f60  mov x9,#0x7472
7101cf8f64  movk x9,#0x725f, LSL #16
7101cf8f68  mov x8,#0x2400000000
7101cf8f6c  str x8,[sp, #0xc8]
7101cf8f70  add x8,sp,#0xc8
7101cf8f74  add x22,x8,#0x8
7101cf8f78  movk x9,#0x7365, LSL #32
7101cf8f7c  movk x9,#0x6c75, LSL #48
7101cf8f80  stur x9,[x23, #0x1a]
7101cf8f84  mov w9,#0x5f74
7101cf8f88  movk w9,#0x6966, LSL #16
7101cf8f8c  stur w9,[x23, #0x22]
7101cf8f90  mov w9,#0x616e
7101cf8f94  strh w9,[sp, #0xee]
7101cf8f98  mov w9,#0x5f6c
7101cf8f9c  movk w9,#0x3330, LSL #16
7101cf8fa0  str w9,[sp, #0xf0]
7101cf8fa4  add x8,x8,#0x9
7101cf8fa8  mov w10,#0x6d
7101cf8fac  strb wzr,[sp, #0xf4]
7101cf8fb0  mov w9,#0x89
7101cf8fb4  mov w11,w27
7101cf8fb8  mul w11,w11,w9
7101cf8fbc  and w10,w10,#0xff
7101cf8fc0  eor w11,w11,w10
7101cf8fc4  ldrb w10,[x8], #0x1
7101cf8fc8  cbnz w10,0x7101cf8fb8
7101cf8fcc  b 0x7101cf919c
7101cf8fd0  mov x9,#0x656d
7101cf8fd4  movk x9,#0x5f6c, LSL #16
7101cf8fd8  movk x9,#0x6f74, LSL #32
7101cf8fdc  movk x9,#0x7275, LSL #48
7101cf8fe0  str x9,[sp, #0xd0]
7101cf8fe4  mov x9,#0x616e
7101cf8fe8  movk x9,#0x656d, LSL #16
7101cf8fec  movk x9,#0x746e, LSL #32
7101cf8ff0  movk x9,#0x635f, LSL #48
7101cf8ff4  str x9,[sp, #0xd8]
7101cf8ff8  mov w9,#0x6168
7101cf8ffc  strh w9,[sp, #0xe0]
7101cf9000  mov x9,#0x7472
7101cf9004  movk x9,#0x725f, LSL #16
7101cf9008  mov x8,#0x2400000000
7101cf900c  str x8,[sp, #0xc8]
7101cf9010  add x8,sp,#0xc8
7101cf9014  add x22,x8,#0x8
7101cf9018  movk x9,#0x7365, LSL #32
7101cf901c  movk x9,#0x6c75, LSL #48
7101cf9020  stur x9,[x23, #0x1a]
7101cf9024  mov w9,#0x5f74
7101cf9028  movk w9,#0x6966, LSL #16
7101cf902c  stur w9,[x23, #0x22]
7101cf9030  mov w9,#0x616e
7101cf9034  strh w9,[sp, #0xee]
7101cf9038  mov w9,#0x5f6c
7101cf903c  movk w9,#0x3330, LSL #16
7101cf9040  str w9,[sp, #0xf0]
7101cf9044  add x8,x8,#0x9
7101cf9048  mov w10,#0x6d
7101cf904c  strb wzr,[sp, #0xf4]
7101cf9050  mov w9,#0x89
7101cf9054  mov w11,w27
7101cf9058  mul w11,w11,w9
7101cf905c  and w10,w10,#0xff
7101cf9060  eor w11,w11,w10
7101cf9064  ldrb w10,[x8], #0x1
7101cf9068  cbnz w10,0x7101cf9058
7101cf906c  b 0x7101cf919c
7101cf9070  mov x10,#0x656d
7101cf9074  movk x10,#0x5f6c, LSL #16
7101cf9078  mov x8,#0x2200000000
7101cf907c  add x9,sp,#0xc8
7101cf9080  movk x10,#0x6f74, LSL #32
7101cf9084  movk x10,#0x7275, LSL #48
7101cf9088  stp x8,x10,[sp, #0xc8]
7101cf908c  add x22,x9,#0x8
7101cf9090  add x8,x9,#0x9
7101cf9094  mov x9,#0x616e
7101cf9098  movk x9,#0x656d, LSL #16
7101cf909c  movk x9,#0x746e, LSL #32
7101cf90a0  movk x9,#0x635f, LSL #48
7101cf90a4  str x9,[sp, #0xd8]
7101cf90a8  mov w9,#0x6168
7101cf90ac  strh w9,[sp, #0xe0]
7101cf90b0  mov x9,#0x7472
7101cf90b4  movk x9,#0x725f, LSL #16
7101cf90b8  movk x9,#0x7365, LSL #32
7101cf90bc  movk x9,#0x6c75, LSL #48
7101cf90c0  stur x9,[x23, #0x1a]
7101cf90c4  mov x9,#0x5f74
7101cf90c8  movk x9,#0x6562, LSL #16
7101cf90cc  movk x9,#0x7473, LSL #32
7101cf90d0  movk x9,#0x3631, LSL #48
7101cf90d4  stur x9,[x23, #0x22]
7101cf90d8  strb wzr,[sp, #0xf2]
7101cf90dc  mov w10,#0x6d
7101cf90e0  mov w9,#0x89
7101cf90e4  mov w11,w27
7101cf90e8  mul w11,w11,w9
7101cf90ec  and w10,w10,#0xff
7101cf90f0  eor w11,w11,w10
7101cf90f4  ldrb w10,[x8], #0x1
7101cf90f8  cbnz w10,0x7101cf90e8
7101cf90fc  b 0x7101cf919c
7101cf9100  mov x9,#0x656d
7101cf9104  movk x9,#0x5f6c, LSL #16
7101cf9108  movk x9,#0x6f74, LSL #32
7101cf910c  movk x9,#0x7275, LSL #48
7101cf9110  str x9,[sp, #0xd0]
7101cf9114  mov x9,#0x616e
7101cf9118  movk x9,#0x656d, LSL #16
7101cf911c  movk x9,#0x746e, LSL #32
7101cf9120  movk x9,#0x635f, LSL #48
7101cf9124  str x9,[sp, #0xd8]
7101cf9128  mov w9,#0x6168
7101cf912c  strh w9,[sp, #0xe0]
7101cf9130  mov x9,#0x7472
7101cf9134  movk x9,#0x725f, LSL #16
7101cf9138  mov x8,#0x2400000000
7101cf913c  str x8,[sp, #0xc8]
7101cf9140  add x8,sp,#0xc8
7101cf9144  add x22,x8,#0x8
7101cf9148  movk x9,#0x7365, LSL #32
7101cf914c  movk x9,#0x6c75, LSL #48
7101cf9150  stur x9,[x23, #0x1a]
7101cf9154  mov w9,#0x5f74
7101cf9158  movk w9,#0x6966, LSL #16
7101cf915c  stur w9,[x23, #0x22]
7101cf9160  mov w9,#0x616e
7101cf9164  strh w9,[sp, #0xee]
7101cf9168  mov w9,#0x5f6c
7101cf916c  movk w9,#0x3130, LSL #16
7101cf9170  str w9,[sp, #0xf0]
7101cf9174  add x8,x8,#0x9
7101cf9178  mov w10,#0x6d
7101cf917c  strb wzr,[sp, #0xf4]
7101cf9180  mov w9,#0x89
7101cf9184  mov w11,w27
7101cf9188  mul w11,w11,w9
7101cf918c  and w10,w10,#0xff
7101cf9190  eor w11,w11,w10
7101cf9194  ldrb w10,[x8], #0x1
7101cf9198  cbnz w10,0x7101cf9188
7101cf919c  str w11,[sp, #0xc8]
7101cf91a0  ldr x8,[x19, #0x148]
7101cf91a4  ldr x8,[x8]
7101cf91a8  add x0,x8,#0x8
7101cf91ac  adrp x1,0x71043ad000
7101cf91b0  add x1,x1,#0xaf0
7101cf91b4  sub x8,x29,#0xb0
7101cf91b8  bl 0x7103776910
7101cf91bc  sub x0,x29,#0xb0
7101cf91c0  mov x1,x22
7101cf91c4  bl 0x710377a120
7101cf91c8  ldur x0,[x29, #-0xa8]
7101cf91cc  adrp x26,0x710523d000
7101cf91d0  add x26,x26,#0x9a8
7101cf91d4  stp x26,xzr,[x29, #-0xb0]
7101cf91d8  cbz x0,0x7101cf91e0
7101cf91dc  bl 0x710392eb40
7101cf91e0  sub x0,x29,#0xa0
7101cf91e4  bl 0x71039c2680
7101cf91e8  cbz w0,0x7101cf91f4
7101cf91ec  sub x0,x29,#0xa0
7101cf91f0  bl 0x71039c1070
7101cf91f4  ldur x0,[x29, #-0xa0]
7101cf91f8  add x1,sp,#0x10
7101cf91fc  str xzr,[sp, #0x10]
7101cf9200  bl 0x7103741810
7101cf9204  ldr x8,[sp, #0x10]
7101cf9208  mov w9,#0x4240
7101cf920c  movk w9,#0xf, LSL #16
7101cf9210  mov w11,#0x3e8
7101cf9214  and x10,x8,#0xfff
7101cf9218  mul x9,x10,x9
7101cf921c  ubfx x12,x8,#0xc,#0x4
7101cf9220  ubfx x8,x8,#0x10,#0x5
7101cf9224  madd x9,x12,x11,x9
7101cf9228  add x22,x9,x8
7101cf922c  ldr x8,[x19, #0x148]
7101cf9230  ldr x8,[x8]
7101cf9234  add x0,x8,#0x8
7101cf9238  adrp x1,0x71043be000
7101cf923c  add x1,x1,#0x822
7101cf9240  sub x8,x29,#0xa0
7101cf9244  bl 0x7103776910
7101cf9248  sub x0,x29,#0xa0
7101cf924c  mov w1,#0x1
7101cf9250  mov x2,x22
7101cf9254  bl 0x710377a310
7101cf9258  ldur x0,[x29, #-0x98]
7101cf925c  stp x26,xzr,[x29, #-0xa0]
7101cf9260  cbz x0,0x7101cf9268
7101cf9264  bl 0x710392eb40
7101cf9268  adrp x8,0x7105329000
7101cf926c  ldr x8,[x8, #0x740]
7101cf9270  ldr x0,[x8, #0x8]
7101cf9274  ldr x8,[x0, #0x80]!
7101cf9278  ldr x9,[x0, #0x8]
7101cf927c  cmp x9,x8
7101cf9280  b.eq 0x7101cfa2b8
7101cf9284  ldr w8,[x8, #0x814]
7101cf9288  cmp w8,#0x2
7101cf928c  b.cc 0x7101cf93f8
7101cf9290  adrp x25,0x710532f000
7101cf9294  ldr x8,[x25, #0x730]
7101cf9298  ldr x28,[x8, #0x8]
7101cf929c  ldr x8,[x19, #0x148]
7101cf92a0  ldr x8,[x8]
7101cf92a4  ldr x22,[x19, #0x78]
7101cf92a8  mov x23,#0xf67e
7101cf92ac  movk x23,#0x3829, LSL #16
7101cf92b0  sub x0,x29,#0xb0
7101cf92b4  movk x23,#0x14, LSL #32
7101cf92b8  add x1,x8,#0x8
7101cf92bc  bl 0x7103776390
7101cf92c0  ldr x8,[x25, #0x730]
7101cf92c4  ldr x24,[x20, #0x38]
7101cf92c8  mov x1,x24
7101cf92cc  ldr x25,[x8, #0x8]
7101cf92d0  add x0,x25,#0x160
7101cf92d4  bl 0x71032648e0
7101cf92d8  tbz w0,#0x0,0x7101cf92ec
7101cf92dc  ldr x0,[x25, #0x168]
7101cf92e0  mov x1,x23
7101cf92e4  bl 0x71032631a0
7101cf92e8  mov x24,x0
7101cf92ec  ldrb w2,[x20, #0x48]
7101cf92f0  ldr x0,[x28, #0x168]
7101cf92f4  mov x1,x24
7101cf92f8  bl 0x7103263540
7101cf92fc  ldr x1,[x28, #0x168]
7101cf9300  mov w25,w0
7101cf9304  sub x0,x29,#0xa0
7101cf9308  mov x2,x24
7101cf930c  sub x23,x29,#0xa0
7101cf9310  bl 0x7103262310
7101cf9314  add x2,x23,#0x8
7101cf9318  adrp x0,0x71042f6000
7101cf931c  add x0,x0,#0x3c0
7101cf9320  add x8,sp,#0xc8
7101cf9324  mov w1,w25
7101cf9328  add x23,sp,#0xc8
7101cf932c  bl 0x71003a4ca0
7101cf9330  add x24,x23,#0x8
7101cf9334  adrp x23,0x710593b000
7101cf9338  ldr x8,[x23, #0xc60]
7101cf933c  ldr x0,[x8]
7101cf9340  mov x1,x24
7101cf9344  bl 0x71037a4570
7101cf9348  tbz w0,#0x0,0x7101cf9538
7101cf934c  ldr x8,[x23, #0xc60]
7101cf9350  ldr x0,[x8]
7101cf9354  mov x1,x24
7101cf9358  bl 0x71037a4450
7101cf935c  cbz x0,0x7101cf9538
7101cf9360  ldrh w11,[x0]
7101cf9364  cmp w11,#0x0
7101cf9368  cset w8,ne
7101cf936c  cbz w11,0x7101cf93d0
7101cf9370  mov w9,wzr
7101cf9374  orr w10,wzr,#0x3
7101cf9378  mov x12,x0
7101cf937c  orr w13,w11,#0x1
7101cf9380  and w11,w11,#0xffff
7101cf9384  and w13,w13,#0xffff
7101cf9388  cmp w13,#0xf
7101cf938c  b.ne 0x7101cf93a8
7101cf9390  cmp w11,#0xe
7101cf9394  b.ne 0x7101cf93b8
7101cf9398  ldrh w11,[x12, #0x6]
7101cf939c  lsr w11,w11,#0x1
7101cf93a0  add w11,w11,#0x4
7101cf93a4  b 0x7101cf93c0
7101cf93a8  cmp w11,#0xa
7101cf93ac  mov w11,#0x1
7101cf93b0  cinc w8,w8,eq
7101cf93b4  b 0x7101cf93c0
7101cf93b8  cmp w11,#0xf
7101cf93bc  csel w11,w10,wzr,eq
7101cf93c0  add w9,w11,w9
7101cf93c4  add x12,x0,w9, UXTW  #0x1
7101cf93c8  ldrh w11,[x12]
7101cf93cc  cbnz w11,0x7101cf937c
7101cf93d0  cmp w8,#0x1
7101cf93d4  b.ne 0x7101cf9538
7101cf93d8  ldur x0,[x29, #-0xa8]
7101cf93dc  fmov s0,0x3f800000
7101cf93e0  adrp x1,0x710438c000
7101cf93e4  add x1,x1,#0xc9c
7101cf93e8  bl 0x7103778300
7101cf93ec  adrp x1,0x710439d000
7101cf93f0  add x1,x1,#0x5fb
7101cf93f4  b 0x7101cf9554
7101cf93f8  adrp x24,0x710532f000
7101cf93fc  ldr x8,[x24, #0x730]
7101cf9400  ldr x25,[x8, #0x8]
7101cf9404  ldr x8,[x19, #0x148]
7101cf9408  ldr x8,[x8]
7101cf940c  ldr x22,[x19, #0x78]
7101cf9410  add x1,x8,#0x8
7101cf9414  sub x0,x29,#0xb0
7101cf9418  bl 0x7103776390
7101cf941c  ldr x8,[x24, #0x730]
7101cf9420  ldr x23,[x20, #0x38]
7101cf9424  mov x1,x23
7101cf9428  ldr x24,[x8, #0x8]
7101cf942c  add x0,x24,#0x160
7101cf9430  bl 0x71032648e0
7101cf9434  tbz w0,#0x0,0x7101cf9450
7101cf9438  ldr x0,[x24, #0x168]
7101cf943c  mov x1,#0xf67e
7101cf9440  movk x1,#0x3829, LSL #16
7101cf9444  movk x1,#0x14, LSL #32
7101cf9448  bl 0x71032631a0
7101cf944c  mov x23,x0
7101cf9450  ldrb w2,[x20, #0x48]
7101cf9454  ldr x0,[x25, #0x168]
7101cf9458  mov x1,x23
7101cf945c  bl 0x7103263540
7101cf9460  ldr x1,[x25, #0x168]
7101cf9464  mov w24,w0
7101cf9468  sub x0,x29,#0xa0
7101cf946c  mov x2,x23
7101cf9470  sub x28,x29,#0xa0
7101cf9474  bl 0x7103262310
7101cf9478  add x2,x28,#0x8
7101cf947c  adrp x0,0x71042f6000
7101cf9480  add x0,x0,#0x3c0
7101cf9484  add x8,sp,#0xc8
7101cf9488  mov w1,w24
7101cf948c  add x23,sp,#0xc8
7101cf9490  bl 0x71003a4ca0
7101cf9494  adrp x24,0x710593b000
7101cf9498  ldr x8,[x24, #0xc60]
7101cf949c  ldr x0,[x8]
7101cf94a0  add x23,x23,#0x8
7101cf94a4  mov x1,x23
7101cf94a8  bl 0x71037a4570
7101cf94ac  tbz w0,#0x0,0x7101cf9d94
7101cf94b0  ldr x8,[x24, #0xc60]
7101cf94b4  ldr x0,[x8]
7101cf94b8  mov x1,x23
7101cf94bc  bl 0x71037a4450
7101cf94c0  cbz x0,0x7101cf9d94
7101cf94c4  ldrh w10,[x0]
7101cf94c8  cmp w10,#0x0
7101cf94cc  cset w24,ne
7101cf94d0  cbz w10,0x7101cf9d98
7101cf94d4  mov w8,wzr
7101cf94d8  orr w9,wzr,#0x3
7101cf94dc  mov x11,x0
7101cf94e0  orr w12,w10,#0x1
7101cf94e4  and w10,w10,#0xffff
7101cf94e8  and w12,w12,#0xffff
7101cf94ec  cmp w12,#0xf
7101cf94f0  b.ne 0x7101cf950c
7101cf94f4  cmp w10,#0xe
7101cf94f8  b.ne 0x7101cf951c
7101cf94fc  ldrh w10,[x11, #0x6]
7101cf9500  lsr w10,w10,#0x1
7101cf9504  add w10,w10,#0x4
7101cf9508  b 0x7101cf9524
7101cf950c  cmp w10,#0xa
7101cf9510  mov w10,#0x1
7101cf9514  cinc w24,w24,eq
7101cf9518  b 0x7101cf9524
7101cf951c  cmp w10,#0xf
7101cf9520  csel w10,w9,wzr,eq
7101cf9524  add w8,w10,w8
7101cf9528  add x11,x0,w8, UXTW  #0x1
7101cf952c  ldrh w10,[x11]
7101cf9530  cbnz w10,0x7101cf94e0
7101cf9534  b 0x7101cf9d98
7101cf9538  ldur x0,[x29, #-0xa8]
7101cf953c  fmov s0,0x3f800000
7101cf9540  adrp x1,0x710438c000
7101cf9544  add x1,x1,#0xcad
7101cf9548  bl 0x7103778300
7101cf954c  adrp x1,0x7104319000
7101cf9550  add x1,x1,#0xcb
7101cf9554  sub x8,x29,#0xa0
7101cf9558  sub x0,x29,#0xb0
7101cf955c  bl 0x7103776910
7101cf9560  sub x0,x29,#0xa0
7101cf9564  mov x1,x24
7101cf9568  bl 0x710377a120
7101cf956c  ldur x0,[x29, #-0x98]
7101cf9570  stp x26,xzr,[x29, #-0xa0]
7101cf9574  cbz x0,0x7101cf957c
7101cf9578  bl 0x710392eb40
7101cf957c  ldr w8,[x20, #0x814]
7101cf9580  cmp w8,#0x2
7101cf9584  b.cc 0x7101cf9594
7101cf9588  ldr w8,[x20, #0x1f8]
7101cf958c  cmp w8,#0x2
7101cf9590  b.ne 0x7101cfa12c
7101cf9594  sub x0,x29,#0xa0
7101cf9598  mov x1,x20
7101cf959c  mov w2,wzr
7101cf95a0  bl 0x7102398db0
7101cf95a4  adrp x1,0x710438c000
7101cf95a8  add x1,x1,#0xcbe
7101cf95ac  add x8,sp,#0xb8
7101cf95b0  sub x0,x29,#0xb0
7101cf95b4  bl 0x7103776910
7101cf95b8  ldr x24,[sp, #0xc0]
7101cf95bc  ldr x0,[x24, #0x10]
7101cf95c0  cbz x0,0x7101cf95d8
7101cf95c4  sub x8,x29,#0xa0
7101cf95c8  add x1,x8,#0x8
7101cf95cc  mov w2,#0xffffffff
7101cf95d0  mov w3,#0x1
7101cf95d4  bl 0x71037a2270
7101cf95d8  stp x26,xzr,[sp, #0xb8]
7101cf95dc  cbz x24,0x7101cf95e8
7101cf95e0  mov x0,x24
7101cf95e4  bl 0x710392eb40
7101cf95e8  adrp x1,0x7104401000
7101cf95ec  add x1,x1,#0xd32
7101cf95f0  add x8,sp,#0xb8
7101cf95f4  sub x0,x29,#0xb0
7101cf95f8  bl 0x7103776910
7101cf95fc  add x0,sp,#0xb8
7101cf9600  orr w4,wzr,#0x3
7101cf9604  orr w5,wzr,#0x7
7101cf9608  mov x1,x22
7101cf960c  mov x2,x20
7101cf9610  mov w3,wzr
7101cf9614  bl 0x710239d920
7101cf9618  ldr x0,[sp, #0xc0]
7101cf961c  stp x26,xzr,[sp, #0xb8]
7101cf9620  cbz x0,0x7101cf9628
7101cf9624  bl 0x710392eb40
7101cf9628  adrp x1,0x7104412000
7101cf962c  add x1,x1,#0xb7a
7101cf9630  add x8,sp,#0xa8
7101cf9634  sub x0,x29,#0xb0
7101cf9638  bl 0x7103776910
7101cf963c  add x0,sp,#0xa8
7101cf9640  orr w4,wzr,#0x3
7101cf9644  orr w5,wzr,#0x7
7101cf9648  mov x1,x22
7101cf964c  mov x2,x20
7101cf9650  mov w3,wzr
7101cf9654  bl 0x710239d920
7101cf9658  ldr x0,[sp, #0xb0]
7101cf965c  stp x26,xzr,[sp, #0xa8]
7101cf9660  cbz x0,0x7101cf9668
7101cf9664  bl 0x710392eb40
7101cf9668  adrp x1,0x710435b000
7101cf966c  add x1,x1,#0x981
7101cf9670  add x8,sp,#0x98
7101cf9674  sub x0,x29,#0xb0
7101cf9678  bl 0x7103776910
7101cf967c  add x0,sp,#0x98
7101cf9680  orr w4,wzr,#0x3
7101cf9684  orr w5,wzr,#0x7
7101cf9688  mov x1,x22
7101cf968c  mov x2,x20
7101cf9690  mov w3,wzr
7101cf9694  bl 0x710239d920
7101cf9698  ldr x0,[sp, #0xa0]
7101cf969c  stp x26,xzr,[sp, #0x98]
7101cf96a0  cbz x0,0x7101cf96a8
7101cf96a4  bl 0x710392eb40
7101cf96a8  adrp x1,0x7104433000
7101cf96ac  add x1,x1,#0x78e
7101cf96b0  add x8,sp,#0x88
7101cf96b4  sub x0,x29,#0xb0
7101cf96b8  str w21,[sp, #0xc]
7101cf96bc  bl 0x7103776910
7101cf96c0  add x0,sp,#0x88
7101cf96c4  orr w4,wzr,#0x3
7101cf96c8  orr w5,wzr,#0x7
7101cf96cc  mov x1,x22
7101cf96d0  mov x2,x20
7101cf96d4  mov w3,wzr
7101cf96d8  bl 0x710239d920
7101cf96dc  ldr x0,[sp, #0x90]
7101cf96e0  stp x26,xzr,[sp, #0x88]
7101cf96e4  cbz x0,0x7101cf96ec
7101cf96e8  bl 0x710392eb40
7101cf96ec  adrp x1,0x71043ad000
7101cf96f0  add x1,x1,#0x95b
7101cf96f4  add x8,sp,#0x78
7101cf96f8  sub x0,x29,#0xb0
7101cf96fc  mov x21,x23
7101cf9700  bl 0x7103776910
7101cf9704  add x0,sp,#0x78
7101cf9708  orr w4,wzr,#0x3
7101cf970c  orr w5,wzr,#0x7
7101cf9710  mov x1,x22
7101cf9714  mov x2,x20
7101cf9718  mov w3,wzr
7101cf971c  bl 0x710239d920
7101cf9720  ldr x0,[sp, #0x80]
7101cf9724  stp x26,xzr,[sp, #0x78]
7101cf9728  cbz x0,0x7101cf9730
7101cf972c  bl 0x710392eb40
7101cf9730  ldr x1,[x20, #0x38]
7101cf9734  ldr x0,[x28, #0x168]
7101cf9738  bl 0x7103263f80
7101cf973c  mov x1,x0
7101cf9740  mov w2,#0x11
7101cf9744  mov x0,x22
7101cf9748  bl 0x710323f600
7101cf974c  mov x24,x0
7101cf9750  adrp x1,0x71042e7000
7101cf9754  add x1,x1,#0x40f
7101cf9758  add x8,sp,#0x68
7101cf975c  sub x0,x29,#0xb0
7101cf9760  bl 0x7103776910
7101cf9764  ldr x25,[sp, #0x70]
7101cf9768  mov x0,x25
7101cf976c  mov x1,x24
7101cf9770  bl 0x7103778b80
7101cf9774  stp x26,xzr,[sp, #0x68]
7101cf9778  cbz x25,0x7101cf9784
7101cf977c  mov x0,x25
7101cf9780  bl 0x710392eb40
7101cf9784  adrp x1,0x71043be000
7101cf9788  add x1,x1,#0x809
7101cf978c  add x8,sp,#0x68
7101cf9790  sub x0,x29,#0xb0
7101cf9794  bl 0x7103776910
7101cf9798  ldr x25,[sp, #0x70]
7101cf979c  mov x0,x25
7101cf97a0  mov x1,x24
7101cf97a4  bl 0x7103778b80
7101cf97a8  stp x26,xzr,[sp, #0x68]
7101cf97ac  cbz x25,0x7101cf97b8
7101cf97b0  mov x0,x25
7101cf97b4  bl 0x710392eb40
7101cf97b8  adrp x1,0x7104433000
7101cf97bc  add x1,x1,#0x332
7101cf97c0  add x8,sp,#0x68
7101cf97c4  sub x0,x29,#0xb0
7101cf97c8  bl 0x7103776910
7101cf97cc  ldr x25,[sp, #0x70]
7101cf97d0  mov x0,x25
7101cf97d4  mov x1,x24
7101cf97d8  bl 0x7103778b80
7101cf97dc  stp x26,xzr,[sp, #0x68]
7101cf97e0  cbz x25,0x7101cf97ec
7101cf97e4  mov x0,x25
7101cf97e8  bl 0x710392eb40
7101cf97ec  adrp x1,0x71042f8000
7101cf97f0  add x1,x1,#0x48c
7101cf97f4  add x8,sp,#0x68
7101cf97f8  sub x0,x29,#0xb0
7101cf97fc  bl 0x7103776910
7101cf9800  ldr x25,[sp, #0x70]
7101cf9804  mov x0,x25
7101cf9808  mov x1,x24
7101cf980c  bl 0x7103778b80
7101cf9810  stp x26,xzr,[sp, #0x68]
7101cf9814  cbz x25,0x7101cf9820
7101cf9818  mov x0,x25
7101cf981c  bl 0x710392eb40
7101cf9820  adrp x1,0x71042e7000
7101cf9824  add x1,x1,#0x428
7101cf9828  add x8,sp,#0x68
7101cf982c  sub x0,x29,#0xb0
7101cf9830  bl 0x7103776910
7101cf9834  ldr x25,[sp, #0x70]
7101cf9838  mov x0,x25
7101cf983c  mov x1,x24
7101cf9840  bl 0x7103778b80
7101cf9844  stp x26,xzr,[sp, #0x68]
7101cf9848  cbz x25,0x7101cf9854
7101cf984c  mov x0,x25
7101cf9850  bl 0x710392eb40
7101cf9854  adrp x8,0x710532f000
7101cf9858  ldr x8,[x8, #0x730]
7101cf985c  ldr x24,[x20, #0x200]
7101cf9860  mov x1,x24
7101cf9864  ldr x23,[x8, #0x8]
7101cf9868  add x0,x23,#0x160
7101cf986c  bl 0x71032648e0
7101cf9870  tbz w0,#0x0,0x7101cf988c
7101cf9874  ldr x0,[x23, #0x168]
7101cf9878  mov x1,#0xf67e
7101cf987c  movk x1,#0x3829, LSL #16
7101cf9880  movk x1,#0x14, LSL #32
7101cf9884  bl 0x71032631a0
7101cf9888  mov x24,x0
7101cf988c  ldrb w2,[x20, #0x210]
7101cf9890  ldr x0,[x28, #0x168]
7101cf9894  mov x1,x24
7101cf9898  bl 0x7103263540
7101cf989c  ldr x1,[x28, #0x168]
7101cf98a0  mov w23,w0
7101cf98a4  sub x0,x29,#0xa0
7101cf98a8  mov x2,x24
7101cf98ac  sub x25,x29,#0xa0
7101cf98b0  bl 0x7103262310
7101cf98b4  add x2,x25,#0x8
7101cf98b8  adrp x0,0x71042f6000
7101cf98bc  add x0,x0,#0x3c0
7101cf98c0  add x8,sp,#0xc8
7101cf98c4  mov w1,w23
7101cf98c8  add x24,sp,#0xc8
7101cf98cc  bl 0x71003a4ca0
7101cf98d0  ldr x8,[x21, #0xc60]
7101cf98d4  ldr x0,[x8]
7101cf98d8  add x23,x24,#0x8
7101cf98dc  mov x1,x23
7101cf98e0  bl 0x71037a4570
7101cf98e4  tbz w0,#0x0,0x7101cf9994
7101cf98e8  ldr x8,[x21, #0xc60]
7101cf98ec  ldr x0,[x8]
7101cf98f0  mov x1,x23
7101cf98f4  bl 0x71037a4450
7101cf98f8  cbz x0,0x7101cf9994
7101cf98fc  ldrh w11,[x0]
7101cf9900  cmp w11,#0x0
7101cf9904  cset w8,ne
7101cf9908  cbz w11,0x7101cf996c
7101cf990c  mov w9,wzr
7101cf9910  orr w10,wzr,#0x3
7101cf9914  mov x12,x0
7101cf9918  orr w13,w11,#0x1
7101cf991c  and w11,w11,#0xffff
7101cf9920  and w13,w13,#0xffff
7101cf9924  cmp w13,#0xf
7101cf9928  b.ne 0x7101cf9944
7101cf992c  cmp w11,#0xe
7101cf9930  b.ne 0x7101cf9954
7101cf9934  ldrh w11,[x12, #0x6]
7101cf9938  lsr w11,w11,#0x1
7101cf993c  add w11,w11,#0x4
7101cf9940  b 0x7101cf995c
7101cf9944  cmp w11,#0xa
7101cf9948  mov w11,#0x1
7101cf994c  cinc w8,w8,eq
7101cf9950  b 0x7101cf995c
7101cf9954  cmp w11,#0xf
7101cf9958  csel w11,w10,wzr,eq
7101cf995c  add w9,w11,w9
7101cf9960  add x12,x0,w9, UXTW  #0x1
7101cf9964  ldrh w11,[x12]
7101cf9968  cbnz w11,0x7101cf9918
7101cf996c  cmp w8,#0x1
7101cf9970  b.ne 0x7101cf9994
7101cf9974  ldur x0,[x29, #-0xa8]
7101cf9978  fmov s0,0x3f800000
7101cf997c  adrp x1,0x71042f8000
7101cf9980  add x1,x1,#0x4a5
7101cf9984  bl 0x7103778300
7101cf9988  adrp x1,0x7104270000
7101cf998c  add x1,x1,#0x780
7101cf9990  b 0x7101cf99b0
7101cf9994  ldur x0,[x29, #-0xa8]
7101cf9998  fmov s0,0x3f800000
7101cf999c  adrp x1,0x7104319000
7101cf99a0  add x1,x1,#0xdd
7101cf99a4  bl 0x7103778300
7101cf99a8  adrp x1,0x7104281000
7101cf99ac  add x1,x1,#0x2d4
7101cf99b0  sub x8,x29,#0xa0
7101cf99b4  sub x0,x29,#0xb0
7101cf99b8  bl 0x7103776910
7101cf99bc  sub x0,x29,#0xa0
7101cf99c0  mov x1,x23
7101cf99c4  bl 0x710377a120
7101cf99c8  ldur x0,[x29, #-0x98]
7101cf99cc  stp x26,xzr,[x29, #-0xa0]
7101cf99d0  cbz x0,0x7101cf99d8
7101cf99d4  bl 0x710392eb40
7101cf99d8  ldr w8,[x20, #0x814]
7101cf99dc  ldr w21,[sp, #0xc]
7101cf99e0  cmp w8,#0x2
7101cf99e4  b.cc 0x7101cf99f4
7101cf99e8  ldr w8,[x20, #0x1f8]
7101cf99ec  cmp w8,#0x2
7101cf99f0  b.ne 0x7101cfa1a0
7101cf99f4  sub x0,x29,#0xa0
7101cf99f8  mov w2,#0x1
7101cf99fc  mov x1,x20
7101cf9a00  bl 0x7102398db0
7101cf9a04  adrp x1,0x710439d000
7101cf9a08  add x1,x1,#0xca6
7101cf9a0c  add x8,sp,#0x68
7101cf9a10  sub x0,x29,#0xb0
7101cf9a14  bl 0x7103776910
7101cf9a18  ldr x23,[sp, #0x70]
7101cf9a1c  ldr x0,[x23, #0x10]
7101cf9a20  cbz x0,0x7101cf9a38
7101cf9a24  sub x8,x29,#0xa0
7101cf9a28  add x1,x8,#0x8
7101cf9a2c  mov w2,#0xffffffff
7101cf9a30  mov w3,#0x1
7101cf9a34  bl 0x71037a2270
7101cf9a38  stp x26,xzr,[sp, #0x68]
7101cf9a3c  cbz x23,0x7101cf9a48
7101cf9a40  mov x0,x23
7101cf9a44  bl 0x710392eb40
7101cf9a48  adrp x1,0x710425f000
7101cf9a4c  add x1,x1,#0x627
7101cf9a50  add x8,sp,#0x68
7101cf9a54  sub x0,x29,#0xb0
7101cf9a58  bl 0x7103776910
7101cf9a5c  add x0,sp,#0x68
7101cf9a60  mov w3,#0x1
7101cf9a64  orr w4,wzr,#0x3
7101cf9a68  orr w5,wzr,#0x7
7101cf9a6c  mov x1,x22
7101cf9a70  mov x2,x20
7101cf9a74  bl 0x710239d920
7101cf9a78  ldr x0,[sp, #0x70]
7101cf9a7c  stp x26,xzr,[sp, #0x68]
7101cf9a80  cbz x0,0x7101cf9a88
7101cf9a84  bl 0x710392eb40
7101cf9a88  adrp x1,0x71043ad000
7101cf9a8c  add x1,x1,#0x96b
7101cf9a90  add x8,sp,#0x58
7101cf9a94  sub x0,x29,#0xb0
7101cf9a98  bl 0x7103776910
7101cf9a9c  add x0,sp,#0x58
7101cf9aa0  mov w3,#0x1
7101cf9aa4  orr w4,wzr,#0x3
7101cf9aa8  orr w5,wzr,#0x7
7101cf9aac  mov x1,x22
7101cf9ab0  mov x2,x20
7101cf9ab4  bl 0x710239d920
7101cf9ab8  ldr x0,[sp, #0x60]
7101cf9abc  stp x26,xzr,[sp, #0x58]
7101cf9ac0  cbz x0,0x7101cf9ac8
7101cf9ac4  bl 0x710392eb40
7101cf9ac8  adrp x1,0x7104454000
7101cf9acc  add x1,x1,#0xc03
7101cf9ad0  add x8,sp,#0x48
7101cf9ad4  sub x0,x29,#0xb0
7101cf9ad8  bl 0x7103776910
7101cf9adc  add x0,sp,#0x48
7101cf9ae0  mov w3,#0x1
7101cf9ae4  orr w4,wzr,#0x3
7101cf9ae8  orr w5,wzr,#0x7
7101cf9aec  mov x1,x22
7101cf9af0  mov x2,x20
7101cf9af4  bl 0x710239d920
7101cf9af8  ldr x0,[sp, #0x50]
7101cf9afc  stp x26,xzr,[sp, #0x48]
7101cf9b00  cbz x0,0x7101cf9b08
7101cf9b04  bl 0x710392eb40
7101cf9b08  adrp x1,0x710425f000
7101cf9b0c  add x1,x1,#0x639
7101cf9b10  add x8,sp,#0x38
7101cf9b14  sub x0,x29,#0xb0
7101cf9b18  bl 0x7103776910
7101cf9b1c  add x0,sp,#0x38
7101cf9b20  mov w3,#0x1
7101cf9b24  orr w4,wzr,#0x3
7101cf9b28  orr w5,wzr,#0x7
7101cf9b2c  mov x1,x22
7101cf9b30  mov x2,x20
7101cf9b34  bl 0x710239d920
7101cf9b38  ldr x0,[sp, #0x40]
7101cf9b3c  stp x26,xzr,[sp, #0x38]
7101cf9b40  cbz x0,0x7101cf9b48
7101cf9b44  bl 0x710392eb40
7101cf9b48  adrp x1,0x71043f0000
7101cf9b4c  add x1,x1,#0xb9b
7101cf9b50  add x8,sp,#0x28
7101cf9b54  sub x0,x29,#0xb0
7101cf9b58  bl 0x7103776910
7101cf9b5c  add x0,sp,#0x28
7101cf9b60  mov w3,#0x1
7101cf9b64  orr w4,wzr,#0x3
7101cf9b68  orr w5,wzr,#0x7
7101cf9b6c  mov x1,x22
7101cf9b70  mov x2,x20
7101cf9b74  bl 0x710239d920
7101cf9b78  ldr x0,[sp, #0x30]
7101cf9b7c  stp x26,xzr,[sp, #0x28]
7101cf9b80  cbz x0,0x7101cf9b88
7101cf9b84  bl 0x710392eb40
7101cf9b88  ldr x1,[x20, #0x200]
7101cf9b8c  ldr x0,[x28, #0x168]
7101cf9b90  bl 0x7103263f80
7101cf9b94  mov x1,x0
7101cf9b98  mov w2,#0x11
7101cf9b9c  mov x0,x22
7101cf9ba0  bl 0x710323f600
7101cf9ba4  mov x22,x0
7101cf9ba8  adrp x1,0x710433a000
7101cf9bac  add x1,x1,#0x32b
7101cf9bb0  add x8,sp,#0x18
7101cf9bb4  sub x0,x29,#0xb0
7101cf9bb8  bl 0x7103776910
7101cf9bbc  ldr x23,[sp, #0x20]
7101cf9bc0  mov x0,x23
7101cf9bc4  mov x1,x22
7101cf9bc8  bl 0x7103778b80
7101cf9bcc  stp x26,xzr,[sp, #0x18]
7101cf9bd0  cbz x23,0x7101cf9bdc
7101cf9bd4  mov x0,x23
7101cf9bd8  bl 0x710392eb40
7101cf9bdc  adrp x1,0x71042f8000
7101cf9be0  add x1,x1,#0x4b4
7101cf9be4  add x8,sp,#0x18
7101cf9be8  sub x0,x29,#0xb0
7101cf9bec  bl 0x7103776910
7101cf9bf0  ldr x23,[sp, #0x20]
7101cf9bf4  mov x0,x23
7101cf9bf8  mov x1,x22
7101cf9bfc  bl 0x7103778b80
7101cf9c00  stp x26,xzr,[sp, #0x18]
7101cf9c04  cbz x23,0x7101cf9c10
7101cf9c08  mov x0,x23
7101cf9c0c  bl 0x710392eb40
7101cf9c10  adrp x1,0x7104433000
7101cf9c14  add x1,x1,#0x319
7101cf9c18  add x8,sp,#0x18
7101cf9c1c  sub x0,x29,#0xb0
7101cf9c20  bl 0x7103776910
7101cf9c24  ldr x23,[sp, #0x20]
7101cf9c28  mov x0,x23
7101cf9c2c  mov x1,x22
7101cf9c30  bl 0x7103778b80
7101cf9c34  stp x26,xzr,[sp, #0x18]
7101cf9c38  cbz x23,0x7101cf9c44
7101cf9c3c  mov x0,x23
7101cf9c40  bl 0x710392eb40
7101cf9c44  adrp x1,0x71042c4000
7101cf9c48  add x1,x1,#0xfc6
7101cf9c4c  add x8,sp,#0x18
7101cf9c50  sub x0,x29,#0xb0
7101cf9c54  bl 0x7103776910
7101cf9c58  ldr x23,[sp, #0x20]
7101cf9c5c  mov x0,x23
7101cf9c60  mov x1,x22
7101cf9c64  bl 0x7103778b80
7101cf9c68  stp x26,xzr,[sp, #0x18]
7101cf9c6c  cbz x23,0x7101cf9c78
7101cf9c70  mov x0,x23
7101cf9c74  bl 0x710392eb40
7101cf9c78  adrp x1,0x71042f8000
7101cf9c7c  add x1,x1,#0x4cd
7101cf9c80  add x8,sp,#0x18
7101cf9c84  sub x0,x29,#0xb0
7101cf9c88  bl 0x7103776910
7101cf9c8c  ldr x23,[sp, #0x20]
7101cf9c90  mov x0,x23
7101cf9c94  mov x1,x22
7101cf9c98  bl 0x7103778b80
7101cf9c9c  stp x26,xzr,[sp, #0x18]
7101cf9ca0  cbz x23,0x7101cf9cac
7101cf9ca4  mov x0,x23
7101cf9ca8  bl 0x710392eb40
7101cf9cac  ldur x22,[x29, #-0xa8]
7101cf9cb0  adrp x8,0x710523d000
7101cf9cb4  add x8,x8,#0x988
7101cf9cb8  stp x8,xzr,[x29, #-0xb0]
7101cf9cbc  cbz x22,0x7101cf9cd8
7101cf9cc0  ldr x0,[x22, #0x18]
7101cf9cc4  stp x26,xzr,[x22, #0x10]
7101cf9cc8  cbz x0,0x7101cf9cd0
7101cf9ccc  bl 0x710392eb40
7101cf9cd0  mov x0,x22
7101cf9cd4  bl 0x710392eb40
7101cf9cd8  cbnz w21,0x7101cf9d34
7101cf9cdc  adrp x8,0x7105314000
7101cf9ce0  add x8,x8,#0x4d8
7101cf9ce4  ldarb w8,[x8]
7101cf9ce8  tbz w8,#0x0,0x7101cfa278
7101cf9cec  adrp x8,0x7105307000
7101cf9cf0  ldr w1,[x8, #0xb68]
7101cf9cf4  cmn w1,#0x1
7101cf9cf8  b.eq 0x7101cf9d34
7101cf9cfc  adrp x8,0x71052c5000
7101cf9d00  ldr x8,[x8, #0x120]
7101cf9d04  fmov s0,0x3f800000
7101cf9d08  mov v1.16B,v0.16B
7101cf9d0c  mov w3,wzr
7101cf9d10  mov w4,wzr
7101cf9d14  mov w5,wzr
7101cf9d18  mov w6,wzr
7101cf9d1c  ldr x0,[x8, #0x8]
7101cf9d20  mov x2,#0xcdfe
7101cf9d24  movk x2,#0x6049, LSL #16
7101cf9d28  movk x2,#0x18, LSL #32
7101cf9d2c  mov w7,wzr
7101cf9d30  bl 0x710175dfc0
7101cf9d34  adrp x8,0x710532f000
7101cf9d38  ldr x8,[x8, #0x730]
7101cf9d3c  ldr x8,[x8, #0x8]
7101cf9d40  ldr x2,[x20, #0x38]
7101cf9d44  ldrb w3,[x20, #0x48]
7101cf9d48  ldr x0,[x8, #0x168]
7101cf9d4c  mov w1,#0x2
7101cf9d50  bl 0x7103266830
7101cf9d54  ldrsw x8,[x19, #0x134]
7101cf9d58  cmp w8,#0x13
7101cf9d5c  str x0,[x19, #0x1a0]
7101cf9d60  b.cs 0x7101cfa2bc
7101cf9d64  add x8,x19,x8, LSL #0x2
7101cf9d68  mov w9,#0x1
7101cf9d6c  str w9,[x8, #0xe8]
7101cf9d70  strb wzr,[x19, #0x70]
7101cf9d74  ldp x29,x30,[sp, #0x1c0]
7101cf9d78  ldp x20,x19,[sp, #0x1b0]
7101cf9d7c  ldp x22,x21,[sp, #0x1a0]
7101cf9d80  ldp x24,x23,[sp, #0x190]
7101cf9d84  ldp x26,x25,[sp, #0x180]
7101cf9d88  ldp x28,x27,[sp, #0x170]
7101cf9d8c  add sp,sp,#0x1d0
7101cf9d90  ret
7101cf9d94  mov w24,wzr
7101cf9d98  adrp x1,0x71043ad000
7101cf9d9c  add x1,x1,#0x97d
7101cf9da0  sub x0,x29,#0xb0
7101cf9da4  mov w2,w24
7101cf9da8  bl 0x7103778430
7101cf9dac  adrp x1,0x71042a3000
7101cf9db0  add x1,x1,#0x22b
7101cf9db4  sub x8,x29,#0xa0
7101cf9db8  sub x0,x29,#0xb0
7101cf9dbc  mov w2,w24
7101cf9dc0  bl 0x7103776910
7101cf9dc4  sub x0,x29,#0xa0
7101cf9dc8  mov x1,x23
7101cf9dcc  bl 0x710377a120
7101cf9dd0  ldur x0,[x29, #-0x98]
7101cf9dd4  stp x26,xzr,[x29, #-0xa0]
7101cf9dd8  cbz x0,0x7101cf9de0
7101cf9ddc  bl 0x710392eb40
7101cf9de0  adrp x1,0x710439d000
7101cf9de4  add x1,x1,#0xca6
7101cf9de8  add x8,sp,#0xb8
7101cf9dec  sub x0,x29,#0xb0
7101cf9df0  bl 0x7103776910
7101cf9df4  ldr w8,[x20, #0x814]
7101cf9df8  cmp w8,#0x2
7101cf9dfc  b.cc 0x7101cf9e0c
7101cf9e00  ldr w8,[x20, #0x1f8]
7101cf9e04  cmp w8,#0x2
7101cf9e08  b.ne 0x7101cfa20c
7101cf9e0c  sub x0,x29,#0xa0
7101cf9e10  mov x1,x20
7101cf9e14  mov w2,wzr
7101cf9e18  bl 0x7102398db0
7101cf9e1c  ldr x23,[sp, #0xc0]
7101cf9e20  ldr x0,[x23, #0x10]
7101cf9e24  cbz x0,0x7101cf9e3c
7101cf9e28  sub x8,x29,#0xa0
7101cf9e2c  add x1,x8,#0x8
7101cf9e30  mov w2,#0xffffffff
7101cf9e34  mov w3,#0x1
7101cf9e38  bl 0x71037a2270
7101cf9e3c  adrp x1,0x7104401000
7101cf9e40  add x1,x1,#0xd32
7101cf9e44  add x8,sp,#0xa8
7101cf9e48  sub x0,x29,#0xb0
7101cf9e4c  bl 0x7103776910
7101cf9e50  add x0,sp,#0xa8
7101cf9e54  orr w4,wzr,#0x3
7101cf9e58  orr w5,wzr,#0x7
7101cf9e5c  mov x1,x22
7101cf9e60  mov x2,x20
7101cf9e64  mov w3,wzr
7101cf9e68  bl 0x710239d920
7101cf9e6c  ldr x0,[sp, #0xb0]
7101cf9e70  stp x26,xzr,[sp, #0xa8]
7101cf9e74  cbz x0,0x7101cf9e7c
7101cf9e78  bl 0x710392eb40
7101cf9e7c  adrp x1,0x7104412000
7101cf9e80  add x1,x1,#0xb7a
7101cf9e84  add x8,sp,#0x98
7101cf9e88  sub x0,x29,#0xb0
7101cf9e8c  bl 0x7103776910
7101cf9e90  add x0,sp,#0x98
7101cf9e94  orr w4,wzr,#0x3
7101cf9e98  orr w5,wzr,#0x7
7101cf9e9c  mov x1,x22
7101cf9ea0  mov x2,x20
7101cf9ea4  mov w3,wzr
7101cf9ea8  bl 0x710239d920
7101cf9eac  ldr x0,[sp, #0xa0]
7101cf9eb0  stp x26,xzr,[sp, #0x98]
7101cf9eb4  cbz x0,0x7101cf9ebc
7101cf9eb8  bl 0x710392eb40
7101cf9ebc  adrp x1,0x710435b000
7101cf9ec0  add x1,x1,#0x981
7101cf9ec4  add x8,sp,#0x88
7101cf9ec8  sub x0,x29,#0xb0
7101cf9ecc  bl 0x7103776910
7101cf9ed0  add x0,sp,#0x88
7101cf9ed4  orr w4,wzr,#0x3
7101cf9ed8  orr w5,wzr,#0x7
7101cf9edc  mov x1,x22
7101cf9ee0  mov x2,x20
7101cf9ee4  mov w3,wzr
7101cf9ee8  bl 0x710239d920
7101cf9eec  ldr x0,[sp, #0x90]
7101cf9ef0  stp x26,xzr,[sp, #0x88]
7101cf9ef4  cbz x0,0x7101cf9efc
7101cf9ef8  bl 0x710392eb40
7101cf9efc  adrp x1,0x71043ad000
7101cf9f00  add x1,x1,#0x96b
7101cf9f04  add x8,sp,#0x78
7101cf9f08  sub x0,x29,#0xb0
7101cf9f0c  bl 0x7103776910
7101cf9f10  add x0,sp,#0x78
7101cf9f14  orr w4,wzr,#0x3
7101cf9f18  orr w5,wzr,#0x7
7101cf9f1c  mov x1,x22
7101cf9f20  mov x2,x20
7101cf9f24  mov w3,wzr
7101cf9f28  bl 0x710239d920
7101cf9f2c  ldr x0,[sp, #0x80]
7101cf9f30  stp x26,xzr,[sp, #0x78]
7101cf9f34  cbz x0,0x7101cf9f3c
7101cf9f38  bl 0x710392eb40
7101cf9f3c  adrp x1,0x7104454000
7101cf9f40  add x1,x1,#0xc03
7101cf9f44  add x8,sp,#0x68
7101cf9f48  sub x0,x29,#0xb0
7101cf9f4c  bl 0x7103776910
7101cf9f50  add x0,sp,#0x68
7101cf9f54  orr w4,wzr,#0x3
7101cf9f58  orr w5,wzr,#0x7
7101cf9f5c  mov x1,x22
7101cf9f60  mov x2,x20
7101cf9f64  mov w3,wzr
7101cf9f68  bl 0x710239d920
7101cf9f6c  ldr x0,[sp, #0x70]
7101cf9f70  stp x26,xzr,[sp, #0x68]
7101cf9f74  cbz x0,0x7101cf9f7c
7101cf9f78  bl 0x710392eb40
7101cf9f7c  adrp x1,0x7104433000
7101cf9f80  add x1,x1,#0x78e
7101cf9f84  add x8,sp,#0x58
7101cf9f88  sub x0,x29,#0xb0
7101cf9f8c  bl 0x7103776910
7101cf9f90  add x0,sp,#0x58
7101cf9f94  orr w4,wzr,#0x3
7101cf9f98  orr w5,wzr,#0x7
7101cf9f9c  mov x1,x22
7101cf9fa0  mov x2,x20
7101cf9fa4  mov w3,wzr
7101cf9fa8  bl 0x710239d920
7101cf9fac  ldr x0,[sp, #0x60]
7101cf9fb0  stp x26,xzr,[sp, #0x58]
7101cf9fb4  cbz x0,0x7101cf9fbc
7101cf9fb8  bl 0x710392eb40
7101cf9fbc  adrp x1,0x71043ad000
7101cf9fc0  add x1,x1,#0x95b
7101cf9fc4  add x8,sp,#0x48
7101cf9fc8  sub x0,x29,#0xb0
7101cf9fcc  bl 0x7103776910
7101cf9fd0  add x0,sp,#0x48
7101cf9fd4  orr w4,wzr,#0x3
7101cf9fd8  orr w5,wzr,#0x7
7101cf9fdc  mov x1,x22
7101cf9fe0  mov x2,x20
7101cf9fe4  mov w3,wzr
7101cf9fe8  bl 0x710239d920
7101cf9fec  ldr x0,[sp, #0x50]
7101cf9ff0  stp x26,xzr,[sp, #0x48]
7101cf9ff4  cbz x0,0x7101cf9ffc
7101cf9ff8  bl 0x710392eb40
7101cf9ffc  ldr x1,[x20, #0x38]
7101cfa000  ldr x0,[x25, #0x168]
7101cfa004  bl 0x7103263f80
7101cfa008  mov x1,x0
7101cfa00c  mov w2,#0x11
7101cfa010  mov x0,x22
7101cfa014  bl 0x710323f600
7101cfa018  mov x22,x0
7101cfa01c  adrp x1,0x71042e7000
7101cfa020  add x1,x1,#0x40f
7101cfa024  add x8,sp,#0x38
7101cfa028  sub x0,x29,#0xb0
7101cfa02c  bl 0x7103776910
7101cfa030  ldr x24,[sp, #0x40]
7101cfa034  mov x0,x24
7101cfa038  mov x1,x22
7101cfa03c  bl 0x7103778b80
7101cfa040  stp x26,xzr,[sp, #0x38]
7101cfa044  cbz x24,0x7101cfa050
7101cfa048  mov x0,x24
7101cfa04c  bl 0x710392eb40
7101cfa050  adrp x1,0x710433a000
7101cfa054  add x1,x1,#0x32b
7101cfa058  add x8,sp,#0x38
7101cfa05c  sub x0,x29,#0xb0
7101cfa060  bl 0x7103776910
7101cfa064  ldr x24,[sp, #0x40]
7101cfa068  mov x0,x24
7101cfa06c  mov x1,x22
7101cfa070  bl 0x7103778b80
7101cfa074  stp x26,xzr,[sp, #0x38]
7101cfa078  cbz x24,0x7101cfa084
7101cfa07c  mov x0,x24
7101cfa080  bl 0x710392eb40
7101cfa084  adrp x1,0x71042f8000
7101cfa088  add x1,x1,#0x4b4
7101cfa08c  add x8,sp,#0x38
7101cfa090  sub x0,x29,#0xb0
7101cfa094  bl 0x7103776910
7101cfa098  ldr x24,[sp, #0x40]
7101cfa09c  mov x0,x24
7101cfa0a0  mov x1,x22
7101cfa0a4  bl 0x7103778b80
7101cfa0a8  stp x26,xzr,[sp, #0x38]
7101cfa0ac  cbz x24,0x7101cfa0b8
7101cfa0b0  mov x0,x24
7101cfa0b4  bl 0x710392eb40
7101cfa0b8  adrp x1,0x71042f8000
7101cfa0bc  add x1,x1,#0x48c
7101cfa0c0  add x8,sp,#0x38
7101cfa0c4  sub x0,x29,#0xb0
7101cfa0c8  bl 0x7103776910
7101cfa0cc  ldr x24,[sp, #0x40]
7101cfa0d0  mov x0,x24
7101cfa0d4  mov x1,x22
7101cfa0d8  bl 0x7103778b80
7101cfa0dc  stp x26,xzr,[sp, #0x38]
7101cfa0e0  cbz x24,0x7101cfa0ec
7101cfa0e4  mov x0,x24
7101cfa0e8  bl 0x710392eb40
7101cfa0ec  adrp x1,0x71042c4000
7101cfa0f0  add x1,x1,#0xfc6
7101cfa0f4  add x8,sp,#0x38
7101cfa0f8  sub x0,x29,#0xb0
7101cfa0fc  bl 0x7103776910
7101cfa100  ldr x24,[sp, #0x40]
7101cfa104  mov x0,x24
7101cfa108  mov x1,x22
7101cfa10c  bl 0x7103778b80
7101cfa110  stp x26,xzr,[sp, #0x38]
7101cfa114  cbz x24,0x7101cfa120
7101cfa118  mov x0,x24
7101cfa11c  bl 0x710392eb40
7101cfa120  stp x26,xzr,[sp, #0xb8]
7101cfa124  cbnz x23,0x7101cf9ca4
7101cfa128  b 0x7101cf9cac
7101cfa12c  sub x0,x29,#0xa0
7101cfa130  mov x1,x20
7101cfa134  mov w2,wzr
7101cfa138  sub x24,x29,#0xa0
7101cfa13c  bl 0x7102398db0
7101cfa140  ldursw x8,[x29, #-0x9c]
7101cfa144  cmp w8,#0xa
7101cfa148  b.gt 0x7101cf95a4
7101cfa14c  add w9,w8,#0x1
7101cfa150  stur w9,[x29, #-0x9c]
7101cfa154  add x9,x24,#0x8
7101cfa158  mov w10,#0x31
7101cfa15c  strh w10,[x9, x8, LSL #0x1]
7101cfa160  ldursw x8,[x29, #-0x9c]
7101cfa164  strh wzr,[x9, x8, LSL #0x1]
7101cfa168  ldurh w8,[x29, #-0x98]
7101cfa16c  mov w10,w27
7101cfa170  cbz w8,0x7101cfa198
7101cfa174  sub x9,x29,#0xa0
7101cfa178  add x9,x9,#0xa
7101cfa17c  mov w11,#0x89
7101cfa180  mov w10,w27
7101cfa184  mul w10,w10,w11
7101cfa188  and w8,w8,#0xffff
7101cfa18c  eor w10,w10,w8
7101cfa190  ldrh w8,[x9], #0x2
7101cfa194  cbnz w8,0x7101cfa184
7101cfa198  stur w10,[x29, #-0xa0]
7101cfa19c  b 0x7101cf95a4
7101cfa1a0  sub x0,x29,#0xa0
7101cfa1a4  mov w2,#0x1
7101cfa1a8  mov x1,x20
7101cfa1ac  sub x23,x29,#0xa0
7101cfa1b0  bl 0x7102398db0
7101cfa1b4  ldursw x8,[x29, #-0x9c]
7101cfa1b8  cmp w8,#0xa
7101cfa1bc  b.gt 0x7101cf9a04
7101cfa1c0  add w9,w8,#0x1
7101cfa1c4  stur w9,[x29, #-0x9c]
7101cfa1c8  add x9,x23,#0x8
7101cfa1cc  mov w10,#0x32
7101cfa1d0  strh w10,[x9, x8, LSL #0x1]
7101cfa1d4  ldursw x8,[x29, #-0x9c]
7101cfa1d8  strh wzr,[x9, x8, LSL #0x1]
7101cfa1dc  ldurh w9,[x29, #-0x98]
7101cfa1e0  cbz w9,0x7101cfa204
7101cfa1e4  sub x8,x29,#0xa0
7101cfa1e8  add x8,x8,#0xa
7101cfa1ec  mov w10,#0x89
7101cfa1f0  mul w11,w27,w10
7101cfa1f4  and w9,w9,#0xffff
7101cfa1f8  eor w27,w11,w9
7101cfa1fc  ldrh w9,[x8], #0x2
7101cfa200  cbnz w9,0x7101cfa1f0
7101cfa204  stur w27,[x29, #-0xa0]
7101cfa208  b 0x7101cf9a04
7101cfa20c  sub x0,x29,#0xa0
7101cfa210  mov x1,x20
7101cfa214  mov w2,wzr
7101cfa218  sub x23,x29,#0xa0
7101cfa21c  bl 0x7102398db0
7101cfa220  ldursw x8,[x29, #-0x9c]
7101cfa224  cmp w8,#0xa
7101cfa228  b.gt 0x7101cf9e1c
7101cfa22c  add w9,w8,#0x1
7101cfa230  stur w9,[x29, #-0x9c]
7101cfa234  add x9,x23,#0x8
7101cfa238  mov w10,#0x31
7101cfa23c  strh w10,[x9, x8, LSL #0x1]
7101cfa240  ldursw x8,[x29, #-0x9c]
7101cfa244  strh wzr,[x9, x8, LSL #0x1]
7101cfa248  ldurh w9,[x29, #-0x98]
7101cfa24c  cbz w9,0x7101cfa270
7101cfa250  sub x8,x29,#0xa0
7101cfa254  add x8,x8,#0xa
7101cfa258  mov w10,#0x89
7101cfa25c  mul w11,w27,w10
7101cfa260  and w9,w9,#0xffff
7101cfa264  eor w27,w11,w9
7101cfa268  ldrh w9,[x8], #0x2
7101cfa26c  cbnz w9,0x7101cfa25c
7101cfa270  stur w27,[x29, #-0xa0]
7101cfa274  b 0x7101cf9e1c
7101cfa278  adrp x0,0x7105314000
7101cfa27c  add x0,x0,#0x4d8
7101cfa280  bl 0x71039c06b0
7101cfa284  cbz w0,0x7101cf9cec
7101cfa288  bl 0x7101764000
7101cfa28c  adrp x0,0x7101763000
7101cfa290  add x0,x0,#0xc40
7101cfa294  adrp x1,0x71052c5000
7101cfa298  add x1,x1,#0x180
7101cfa29c  adrp x2,0x7104f17000
7101cfa2a0  add x2,x2,#0x0
7101cfa2a4  bl 0x71000001c0
7101cfa2a8  adrp x0,0x7105314000
7101cfa2ac  add x0,x0,#0x4d8
7101cfa2b0  bl 0x71039c06c0
7101cfa2b4  b 0x7101cf9cec
7101cfa2b8  bl 0x71039c1330
7101cfa2bc  bl 0x71039c2650
