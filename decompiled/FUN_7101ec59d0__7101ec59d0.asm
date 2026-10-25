// addr:      7101ec59d0
// offset:    0x1ec59d0
// name:      FUN_7101ec59d0
// mangled:   
// size:      4412

7101ec59d0  sub sp,sp,#0x130
7101ec59d4  stp x28,x27,[sp, #0xd0]
7101ec59d8  stp x26,x25,[sp, #0xe0]
7101ec59dc  stp x24,x23,[sp, #0xf0]
7101ec59e0  stp x22,x21,[sp, #0x100]
7101ec59e4  stp x20,x19,[sp, #0x110]
7101ec59e8  stp x29,x30,[sp, #0x120]
7101ec59ec  add x29,sp,#0x120
7101ec59f0  mov x19,x0
7101ec59f4  mov w0,#0x10
7101ec59f8  orr w1,wzr,#0x1f8
7101ec59fc  bl 0x710392e290
7101ec5a00  cbnz x0,0x7101ec5a48
7101ec5a04  adrp x8,0x7105332000
7101ec5a08  ldr x0,[x8, #0xf00]
7101ec5a0c  cbz x0,0x7101ec5a44
7101ec5a10  orr w8,wzr,#0x1f8
7101ec5a14  str wzr,[sp, #0x90]
7101ec5a18  add x1,sp,#0x90
7101ec5a1c  str x8,[sp, #0x48]
7101ec5a20  ldr x8,[x0]
7101ec5a24  ldr x8,[x8, #0x30]
7101ec5a28  add x2,sp,#0x48
7101ec5a2c  blr x8
7101ec5a30  tbz w0,#0x0,0x7101ec5a44
7101ec5a34  mov w0,#0x10
7101ec5a38  orr w1,wzr,#0x1f8
7101ec5a3c  bl 0x710392e290
7101ec5a40  cbnz x0,0x7101ec5a48
7101ec5a44  mov x0,xzr
7101ec5a48  add x8,x0,#0x1f8
7101ec5a4c  str x8,[sp, #0xa0]
7101ec5a50  orr x8,xzr,#0x1000000000
7101ec5a54  stp x0,x0,[sp, #0x90]
7101ec5a58  mov w20,#0x9dc5
7101ec5a5c  movk w20,#0x811c, LSL #16
7101ec5a60  str x8,[sp, #0x48]
7101ec5a64  add x8,sp,#0x48
7101ec5a68  mov x22,#0x6573
7101ec5a6c  movk x22,#0x5f74, LSL #16
7101ec5a70  add x9,x8,#0x9
7101ec5a74  mov x8,#0x5f6c
7101ec5a78  movk x8,#0x6564, LSL #16
7101ec5a7c  movk x22,#0x7462, LSL #32
7101ec5a80  movk x22,#0x5f6e, LSL #48
7101ec5a84  movk x8,#0x6963, LSL #32
7101ec5a88  movk x8,#0x6564, LSL #48
7101ec5a8c  mov w10,#0x73
7101ec5a90  stp x22,x8,[sp, #0x50]
7101ec5a94  mov w21,#0x89
7101ec5a98  mov w11,w20
7101ec5a9c  strb wzr,[sp, #0x60]
7101ec5aa0  mul w11,w11,w21
7101ec5aa4  and w10,w10,#0xff
7101ec5aa8  eor w11,w11,w10
7101ec5aac  ldrb w10,[x9], #0x1
7101ec5ab0  cbnz w10,0x7101ec5aa0
7101ec5ab4  str w11,[sp, #0x48]
7101ec5ab8  mov x10,x0
7101ec5abc  add x11,sp,#0x48
7101ec5ac0  mov x9,xzr
7101ec5ac4  add x11,x11,#0x9
7101ec5ac8  mov w13,#0x73
7101ec5acc  str wzr,[x10], #0x8
7101ec5ad0  add w12,w9,#0x1
7101ec5ad4  cmp w12,#0x3e
7101ec5ad8  strb w13,[x10, x9, LSL ]
7101ec5adc  b.hi 0x7101ec5af4
7101ec5ae0  ldrb w13,[x11, x9, LSL ]
7101ec5ae4  add x12,x9,#0x1
7101ec5ae8  mov x9,x12
7101ec5aec  cbnz w13,0x7101ec5ad0
7101ec5af0  b 0x7101ec5af8
7101ec5af4  add w12,w9,#0x1
7101ec5af8  add x9,x0,#0x8
7101ec5afc  strb wzr,[x9, w12, UXTW ]
7101ec5b00  ldrb w9,[x0, #0x8]
7101ec5b04  mov w10,w20
7101ec5b08  str w12,[x0, #0x4]
7101ec5b0c  cbz w9,0x7101ec5b2c
7101ec5b10  add x11,x0,#0x9
7101ec5b14  mov w10,w20
7101ec5b18  mul w10,w10,w21
7101ec5b1c  and w9,w9,#0xff
7101ec5b20  eor w10,w10,w9
7101ec5b24  ldrb w9,[x11], #0x1
7101ec5b28  cbnz w9,0x7101ec5b18
7101ec5b2c  mov x9,x0
7101ec5b30  mov w12,#0x305f
7101ec5b34  movk w12,#0x31, LSL #16
7101ec5b38  str w10,[x9], #0x48
7101ec5b3c  mov x10,#0x1300000000
7101ec5b40  stp x10,x22,[sp, #0x48]
7101ec5b44  add x10,sp,#0x48
7101ec5b48  add x10,x10,#0x9
7101ec5b4c  str x8,[sp, #0x58]
7101ec5b50  mov w8,#0x73
7101ec5b54  mov w11,w20
7101ec5b58  str x9,[sp, #0x98]
7101ec5b5c  str w12,[sp, #0x60]
7101ec5b60  mul w11,w11,w21
7101ec5b64  and w8,w8,#0xff
7101ec5b68  eor w11,w11,w8
7101ec5b6c  ldrb w8,[x10], #0x1
7101ec5b70  cbnz w8,0x7101ec5b60
7101ec5b74  add x10,sp,#0x48
7101ec5b78  mov x8,xzr
7101ec5b7c  str w11,[sp, #0x48]
7101ec5b80  add x10,x10,#0x9
7101ec5b84  mov w11,#0x73
7101ec5b88  str wzr,[x9]
7101ec5b8c  tst w11,#0xff
7101ec5b90  b.ne 0x7101ec5bb0
7101ec5b94  b 0x7101ec5bd8
7101ec5b98  add x13,x10,x8
7101ec5b9c  strb w11,[x12, #0x51]
7101ec5ba0  ldrb w11,[x13, #0x1]
7101ec5ba4  add x8,x8,#0x2
7101ec5ba8  tst w11,#0xff
7101ec5bac  b.eq 0x7101ec5bd8
7101ec5bb0  add w13,w8,#0x1
7101ec5bb4  add x12,x0,x8
7101ec5bb8  cmp w13,#0x3f
7101ec5bbc  strb w11,[x12, #0x50]
7101ec5bc0  b.cs 0x7101ec5bd4
7101ec5bc4  ldrb w11,[x10, x8, LSL ]
7101ec5bc8  cbnz w11,0x7101ec5b98
7101ec5bcc  add x8,x8,#0x1
7101ec5bd0  b 0x7101ec5bd8
7101ec5bd4  add w8,w8,#0x1
7101ec5bd8  add x9,x9,w8, UXTW 
7101ec5bdc  strb wzr,[x9, #0x8]
7101ec5be0  str w8,[x0, #0x4c]
7101ec5be4  ldrb w8,[x0, #0x50]
7101ec5be8  mov w10,w20
7101ec5bec  cbz w8,0x7101ec5c0c
7101ec5bf0  add x9,x0,#0x51
7101ec5bf4  mov w10,w20
7101ec5bf8  mul w10,w10,w21
7101ec5bfc  and w8,w8,#0xff
7101ec5c00  eor w10,w10,w8
7101ec5c04  ldrb w8,[x9], #0x1
7101ec5c08  cbnz w8,0x7101ec5bf8
7101ec5c0c  add x8,x0,#0x90
7101ec5c10  str w10,[x0, #0x48]
7101ec5c14  str x8,[sp, #0x98]
7101ec5c18  mov x8,#0x6573
7101ec5c1c  movk x8,#0x5f74, LSL #16
7101ec5c20  orr x9,xzr,#0xc00000000
7101ec5c24  movk x8,#0x3930, LSL #32
7101ec5c28  movk x8,#0x745f, LSL #48
7101ec5c2c  add x10,sp,#0x48
7101ec5c30  stp x9,x8,[sp, #0x48]
7101ec5c34  mov w8,#0x6972
7101ec5c38  movk w8,#0x6c61, LSL #16
7101ec5c3c  mov w9,#0x73
7101ec5c40  str w8,[sp, #0x58]
7101ec5c44  mov w8,#0x9
7101ec5c48  mov w11,w20
7101ec5c4c  strb wzr,[sp, #0x5c]
7101ec5c50  mul w11,w11,w21
7101ec5c54  and w9,w9,#0xff
7101ec5c58  eor w11,w11,w9
7101ec5c5c  ldrb w9,[x10, x8, LSL ]
7101ec5c60  add x8,x8,#0x1
7101ec5c64  cbnz w9,0x7101ec5c50
7101ec5c68  ldp x8,x9,[sp, #0x98]
7101ec5c6c  cmp x8,x9
7101ec5c70  str w11,[sp, #0x48]
7101ec5c74  b.cs 0x7101ec5cd8
7101ec5c78  mov x10,x8
7101ec5c7c  add x11,sp,#0x48
7101ec5c80  mov x9,xzr
7101ec5c84  add x11,x11,#0x9
7101ec5c88  mov w12,#0x73
7101ec5c8c  str wzr,[x10], #0x9
7101ec5c90  tst w12,#0xff
7101ec5c94  b.ne 0x7101ec5cb4
7101ec5c98  b 0x7101ec5cec
7101ec5c9c  add x13,x11,x9
7101ec5ca0  strb w12,[x10, x9, LSL ]
7101ec5ca4  ldrb w12,[x13, #0x1]
7101ec5ca8  add x9,x9,#0x2
7101ec5cac  tst w12,#0xff
7101ec5cb0  b.eq 0x7101ec5cec
7101ec5cb4  add w13,w9,#0x1
7101ec5cb8  add x14,x10,x9
7101ec5cbc  cmp w13,#0x3f
7101ec5cc0  sturb w12,[x14, #-0x1]
7101ec5cc4  b.cs 0x7101ec5ce8
7101ec5cc8  ldrb w12,[x11, x9, LSL ]
7101ec5ccc  cbnz w12,0x7101ec5c9c
7101ec5cd0  add x9,x9,#0x1
7101ec5cd4  b 0x7101ec5cec
7101ec5cd8  add x0,sp,#0x90
7101ec5cdc  add x1,sp,#0x48
7101ec5ce0  bl 0x71019c1c50
7101ec5ce4  b 0x7101ec5d30
7101ec5ce8  add w9,w9,#0x1
7101ec5cec  add x10,x8,#0x8
7101ec5cf0  strb wzr,[x10, w9, UXTW ]
7101ec5cf4  str w9,[x8, #0x4]
7101ec5cf8  ldrb w9,[x8, #0x8]
7101ec5cfc  mov w11,w20
7101ec5d00  cbz w9,0x7101ec5d20
7101ec5d04  add x10,x8,#0x9
7101ec5d08  mov w11,w20
7101ec5d0c  mul w11,w11,w21
7101ec5d10  and w9,w9,#0xff
7101ec5d14  eor w11,w11,w9
7101ec5d18  ldrb w9,[x10], #0x1
7101ec5d1c  cbnz w9,0x7101ec5d0c
7101ec5d20  str w11,[x8]
7101ec5d24  ldr x8,[sp, #0x98]
7101ec5d28  add x8,x8,#0x48
7101ec5d2c  str x8,[sp, #0x98]
7101ec5d30  mov x10,#0x6573
7101ec5d34  movk x10,#0x5f74, LSL #16
7101ec5d38  mov x11,#0x6174
7101ec5d3c  movk x11,#0x6567, LSL #16
7101ec5d40  orr x8,xzr,#0x1000000000
7101ec5d44  strb wzr,[sp, #0x60]
7101ec5d48  movk x10,#0x3830, LSL #32
7101ec5d4c  movk x10,#0x735f, LSL #48
7101ec5d50  movk x11,#0x6976, LSL #32
7101ec5d54  movk x11,#0x7765, LSL #48
7101ec5d58  stp x8,x10,[sp, #0x48]
7101ec5d5c  mov w9,#0x73
7101ec5d60  str x11,[sp, #0x58]
7101ec5d64  mov w8,#0x9
7101ec5d68  add x10,sp,#0x48
7101ec5d6c  mov w11,w20
7101ec5d70  mul w11,w11,w21
7101ec5d74  and w9,w9,#0xff
7101ec5d78  eor w11,w11,w9
7101ec5d7c  ldrb w9,[x10, x8, LSL ]
7101ec5d80  add x8,x8,#0x1
7101ec5d84  cbnz w9,0x7101ec5d70
7101ec5d88  ldp x8,x9,[sp, #0x98]
7101ec5d8c  cmp x8,x9
7101ec5d90  str w11,[sp, #0x48]
7101ec5d94  b.cs 0x7101ec5de4
7101ec5d98  add x10,sp,#0x48
7101ec5d9c  mov x9,xzr
7101ec5da0  str wzr,[x8]
7101ec5da4  add x10,x10,#0x8
7101ec5da8  b 0x7101ec5db4
7101ec5dac  add x9,x9,#0x2
7101ec5db0  strb w11,[x12, #0x9]
7101ec5db4  add x11,x10,x9
7101ec5db8  ldrb w13,[x11]
7101ec5dbc  cbz w13,0x7101ec5df8
7101ec5dc0  add w14,w9,#0x1
7101ec5dc4  add x12,x8,x9
7101ec5dc8  cmp w14,#0x3f
7101ec5dcc  strb w13,[x12, #0x8]
7101ec5dd0  b.cs 0x7101ec5df4
7101ec5dd4  ldrb w11,[x11, #0x1]
7101ec5dd8  cbnz w11,0x7101ec5dac
7101ec5ddc  add x9,x9,#0x1
7101ec5de0  b 0x7101ec5df8
7101ec5de4  add x0,sp,#0x90
7101ec5de8  add x1,sp,#0x48
7101ec5dec  bl 0x71019c1c50
7101ec5df0  b 0x7101ec5e3c
7101ec5df4  add w9,w9,#0x1
7101ec5df8  add x10,x8,#0x8
7101ec5dfc  strb wzr,[x10, w9, UXTW ]
7101ec5e00  str w9,[x8, #0x4]
7101ec5e04  ldrb w9,[x8, #0x8]
7101ec5e08  mov w11,w20
7101ec5e0c  cbz w9,0x7101ec5e2c
7101ec5e10  add x10,x8,#0x9
7101ec5e14  mov w11,w20
7101ec5e18  mul w11,w11,w21
7101ec5e1c  and w9,w9,#0xff
7101ec5e20  eor w11,w11,w9
7101ec5e24  ldrb w9,[x10], #0x1
7101ec5e28  cbnz w9,0x7101ec5e18
7101ec5e2c  str w11,[x8]
7101ec5e30  ldr x8,[sp, #0x98]
7101ec5e34  add x8,x8,#0x48
7101ec5e38  str x8,[sp, #0x98]
7101ec5e3c  orr x8,xzr,#0xc00000000
7101ec5e40  mov w10,#0x6e75
7101ec5e44  movk w10,#0x6f64, LSL #16
7101ec5e48  mov w9,#0x73
7101ec5e4c  stp x8,x22,[sp, #0x48]
7101ec5e50  str w10,[sp, #0x58]
7101ec5e54  mov w8,#0x9
7101ec5e58  add x10,sp,#0x48
7101ec5e5c  mov w11,w20
7101ec5e60  strb wzr,[sp, #0x5c]
7101ec5e64  mul w11,w11,w21
7101ec5e68  and w9,w9,#0xff
7101ec5e6c  eor w11,w11,w9
7101ec5e70  ldrb w9,[x10, x8, LSL ]
7101ec5e74  add x8,x8,#0x1
7101ec5e78  cbnz w9,0x7101ec5e64
7101ec5e7c  ldp x8,x9,[sp, #0x98]
7101ec5e80  cmp x8,x9
7101ec5e84  str w11,[sp, #0x48]
7101ec5e88  b.cs 0x7101ec5eec
7101ec5e8c  mov x10,x8
7101ec5e90  add x11,sp,#0x48
7101ec5e94  mov x9,xzr
7101ec5e98  add x11,x11,#0x9
7101ec5e9c  mov w12,#0x73
7101ec5ea0  str wzr,[x10], #0x9
7101ec5ea4  tst w12,#0xff
7101ec5ea8  b.ne 0x7101ec5ec8
7101ec5eac  b 0x7101ec5f00
7101ec5eb0  add x13,x11,x9
7101ec5eb4  strb w12,[x10, x9, LSL ]
7101ec5eb8  ldrb w12,[x13, #0x1]
7101ec5ebc  add x9,x9,#0x2
7101ec5ec0  tst w12,#0xff
7101ec5ec4  b.eq 0x7101ec5f00
7101ec5ec8  add w13,w9,#0x1
7101ec5ecc  add x14,x10,x9
7101ec5ed0  cmp w13,#0x3f
7101ec5ed4  sturb w12,[x14, #-0x1]
7101ec5ed8  b.cs 0x7101ec5efc
7101ec5edc  ldrb w12,[x11, x9, LSL ]
7101ec5ee0  cbnz w12,0x7101ec5eb0
7101ec5ee4  add x9,x9,#0x1
7101ec5ee8  b 0x7101ec5f00
7101ec5eec  add x0,sp,#0x90
7101ec5ef0  add x1,sp,#0x48
7101ec5ef4  bl 0x71019c1c50
7101ec5ef8  b 0x7101ec5f44
7101ec5efc  add w9,w9,#0x1
7101ec5f00  add x10,x8,#0x8
7101ec5f04  strb wzr,[x10, w9, UXTW ]
7101ec5f08  str w9,[x8, #0x4]
7101ec5f0c  ldrb w9,[x8, #0x8]
7101ec5f10  mov w11,w20
7101ec5f14  cbz w9,0x7101ec5f34
7101ec5f18  add x10,x8,#0x9
7101ec5f1c  mov w11,w20
7101ec5f20  mul w11,w11,w21
7101ec5f24  and w9,w9,#0xff
7101ec5f28  eor w11,w11,w9
7101ec5f2c  ldrb w9,[x10], #0x1
7101ec5f30  cbnz w9,0x7101ec5f20
7101ec5f34  str w11,[x8]
7101ec5f38  ldr x8,[sp, #0x98]
7101ec5f3c  add x8,x8,#0x48
7101ec5f40  str x8,[sp, #0x98]
7101ec5f44  orr x8,xzr,#0xc00000000
7101ec5f48  mov w10,#0x6572
7101ec5f4c  movk w10,#0x6f64, LSL #16
7101ec5f50  mov w9,#0x73
7101ec5f54  stp x8,x22,[sp, #0x48]
7101ec5f58  str w10,[sp, #0x58]
7101ec5f5c  mov w8,#0x9
7101ec5f60  add x10,sp,#0x48
7101ec5f64  mov w11,w20
7101ec5f68  strb wzr,[sp, #0x5c]
7101ec5f6c  mul w11,w11,w21
7101ec5f70  and w9,w9,#0xff
7101ec5f74  eor w11,w11,w9
7101ec5f78  ldrb w9,[x10, x8, LSL ]
7101ec5f7c  add x8,x8,#0x1
7101ec5f80  cbnz w9,0x7101ec5f6c
7101ec5f84  ldp x8,x9,[sp, #0x98]
7101ec5f88  cmp x8,x9
7101ec5f8c  str w11,[sp, #0x48]
7101ec5f90  b.cs 0x7101ec5ff4
7101ec5f94  mov x10,x8
7101ec5f98  add x11,sp,#0x48
7101ec5f9c  mov x9,xzr
7101ec5fa0  add x11,x11,#0x9
7101ec5fa4  mov w12,#0x73
7101ec5fa8  str wzr,[x10], #0x9
7101ec5fac  tst w12,#0xff
7101ec5fb0  b.ne 0x7101ec5fd0
7101ec5fb4  b 0x7101ec6008
7101ec5fb8  add x13,x11,x9
7101ec5fbc  strb w12,[x10, x9, LSL ]
7101ec5fc0  ldrb w12,[x13, #0x1]
7101ec5fc4  add x9,x9,#0x2
7101ec5fc8  tst w12,#0xff
7101ec5fcc  b.eq 0x7101ec6008
7101ec5fd0  add w13,w9,#0x1
7101ec5fd4  add x14,x10,x9
7101ec5fd8  cmp w13,#0x3f
7101ec5fdc  sturb w12,[x14, #-0x1]
7101ec5fe0  b.cs 0x7101ec6004
7101ec5fe4  ldrb w12,[x11, x9, LSL ]
7101ec5fe8  cbnz w12,0x7101ec5fb8
7101ec5fec  add x9,x9,#0x1
7101ec5ff0  b 0x7101ec6008
7101ec5ff4  add x0,sp,#0x90
7101ec5ff8  add x1,sp,#0x48
7101ec5ffc  bl 0x71019c1c50
7101ec6000  b 0x7101ec604c
7101ec6004  add w9,w9,#0x1
7101ec6008  add x10,x8,#0x8
7101ec600c  strb wzr,[x10, w9, UXTW ]
7101ec6010  str w9,[x8, #0x4]
7101ec6014  ldrb w9,[x8, #0x8]
7101ec6018  mov w11,w20
7101ec601c  cbz w9,0x7101ec603c
7101ec6020  add x10,x8,#0x9
7101ec6024  mov w11,w20
7101ec6028  mul w11,w11,w21
7101ec602c  and w9,w9,#0xff
7101ec6030  eor w11,w11,w9
7101ec6034  ldrb w9,[x10], #0x1
7101ec6038  cbnz w9,0x7101ec6028
7101ec603c  str w11,[x8]
7101ec6040  ldr x8,[sp, #0x98]
7101ec6044  add x8,x8,#0x48
7101ec6048  str x8,[sp, #0x98]
7101ec604c  orr x8,xzr,#0xc00000000
7101ec6050  mov w10,#0x6568
7101ec6054  movk w10,#0x706c, LSL #16
7101ec6058  mov w9,#0x73
7101ec605c  stp x8,x22,[sp, #0x48]
7101ec6060  str w10,[sp, #0x58]
7101ec6064  mov w8,#0x9
7101ec6068  add x10,sp,#0x48
7101ec606c  mov w11,w20
7101ec6070  strb wzr,[sp, #0x5c]
7101ec6074  mul w11,w11,w21
7101ec6078  and w9,w9,#0xff
7101ec607c  eor w11,w11,w9
7101ec6080  ldrb w9,[x10, x8, LSL ]
7101ec6084  add x8,x8,#0x1
7101ec6088  cbnz w9,0x7101ec6074
7101ec608c  ldp x8,x9,[sp, #0x98]
7101ec6090  cmp x8,x9
7101ec6094  str w11,[sp, #0x48]
7101ec6098  b.cs 0x7101ec60fc
7101ec609c  mov x10,x8
7101ec60a0  add x11,sp,#0x48
7101ec60a4  mov x9,xzr
7101ec60a8  add x11,x11,#0x9
7101ec60ac  mov w12,#0x73
7101ec60b0  str wzr,[x10], #0x9
7101ec60b4  tst w12,#0xff
7101ec60b8  b.ne 0x7101ec60d8
7101ec60bc  b 0x7101ec6110
7101ec60c0  add x13,x11,x9
7101ec60c4  strb w12,[x10, x9, LSL ]
7101ec60c8  ldrb w12,[x13, #0x1]
7101ec60cc  add x9,x9,#0x2
7101ec60d0  tst w12,#0xff
7101ec60d4  b.eq 0x7101ec6110
7101ec60d8  add w13,w9,#0x1
7101ec60dc  add x14,x10,x9
7101ec60e0  cmp w13,#0x3f
7101ec60e4  sturb w12,[x14, #-0x1]
7101ec60e8  b.cs 0x7101ec610c
7101ec60ec  ldrb w12,[x11, x9, LSL ]
7101ec60f0  cbnz w12,0x7101ec60c0
7101ec60f4  add x9,x9,#0x1
7101ec60f8  b 0x7101ec6110
7101ec60fc  add x0,sp,#0x90
7101ec6100  add x1,sp,#0x48
7101ec6104  bl 0x71019c1c50
7101ec6108  b 0x7101ec614c
7101ec610c  add w9,w9,#0x1
7101ec6110  add x10,x8,#0x8
7101ec6114  strb wzr,[x10, w9, UXTW ]
7101ec6118  ldrb w10,[x8, #0x8]
7101ec611c  str w9,[x8, #0x4]
7101ec6120  cbz w10,0x7101ec613c
7101ec6124  add x9,x8,#0x9
7101ec6128  mul w11,w20,w21
7101ec612c  and w10,w10,#0xff
7101ec6130  eor w20,w11,w10
7101ec6134  ldrb w10,[x9], #0x1
7101ec6138  cbnz w10,0x7101ec6128
7101ec613c  str w20,[x8]
7101ec6140  ldr x8,[sp, #0x98]
7101ec6144  add x8,x8,#0x48
7101ec6148  str x8,[sp, #0x98]
7101ec614c  adrp x1,0x7104281000
7101ec6150  add x1,x1,#0x23f
7101ec6154  add x2,sp,#0x90
7101ec6158  mov x0,x19
7101ec615c  bl 0x7101ec4640
7101ec6160  mov x0,x19
7101ec6164  mov w1,wzr
7101ec6168  bl 0x7101ec7250
7101ec616c  mov w1,#0x1
7101ec6170  mov x0,x19
7101ec6174  bl 0x7101ec7250
7101ec6178  mov w1,#0x2
7101ec617c  mov x0,x19
7101ec6180  bl 0x7101ec7250
7101ec6184  orr w1,wzr,#0x3
7101ec6188  mov x0,x19
7101ec618c  bl 0x7101ec7250
7101ec6190  mov w1,#0x4
7101ec6194  mov x0,x19
7101ec6198  bl 0x7101ec7250
7101ec619c  mov w1,#0x5
7101ec61a0  mov x0,x19
7101ec61a4  bl 0x7101ec7250
7101ec61a8  orr w1,wzr,#0x6
7101ec61ac  mov x0,x19
7101ec61b0  bl 0x7101ec7250
7101ec61b4  mov x21,x19
7101ec61b8  ldr x9,[x21, #0x20]!
7101ec61bc  cbz x9,0x7101ec61f4
7101ec61c0  mov x8,x21
7101ec61c4  mov x10,x9
7101ec61c8  ldr w11,[x10, #0x20]
7101ec61cc  cmp w11,#0x0
7101ec61d0  cset w11,lt
7101ec61d4  csel x8,x8,x10,lt
7101ec61d8  ldr x10,[x10, w11, UXTW #0x3]
7101ec61dc  cbnz x10,0x7101ec61c8
7101ec61e0  cmp x8,x21
7101ec61e4  b.eq 0x7101ec61f4
7101ec61e8  ldr w10,[x8, #0x20]
7101ec61ec  cmp w10,#0x1
7101ec61f0  b.lt 0x7101ec61f8
7101ec61f4  mov x8,x21
7101ec61f8  cbz x9,0x7101ec622c
7101ec61fc  mov x10,x21
7101ec6200  ldr w11,[x9, #0x20]
7101ec6204  cmp w11,#0x1
7101ec6208  cset w11,lt
7101ec620c  csel x10,x10,x9,lt
7101ec6210  ldr x9,[x9, w11, UXTW #0x3]
7101ec6214  cbnz x9,0x7101ec6200
7101ec6218  cmp x10,x21
7101ec621c  b.eq 0x7101ec622c
7101ec6220  ldr w9,[x10, #0x20]
7101ec6224  cmp w9,#0x2
7101ec6228  b.lt 0x7101ec6230
7101ec622c  mov x10,x21
7101ec6230  ldr x1,[x19, #0x8]
7101ec6234  ldp x9,x8,[x8, #0x28]
7101ec6238  add x0,x19,#0xb8
7101ec623c  stp x9,x8,[sp, #0x38]
7101ec6240  cbz x8,0x7101ec6258
7101ec6244  add x8,x8,#0x8
7101ec6248  ldxr x9,[x8]
7101ec624c  add x9,x9,#0x1
7101ec6250  stxr w11,x9,[x8]
7101ec6254  cbnz w11,0x7101ec6248
7101ec6258  ldp x8,x20,[x10, #0x28]
7101ec625c  stp x8,x20,[sp, #0x28]
7101ec6260  cbz x20,0x7101ec62bc
7101ec6264  add x22,x20,#0x8
7101ec6268  ldxr x8,[x22]
7101ec626c  add x8,x8,#0x1
7101ec6270  stxr w9,x8,[x22]
7101ec6274  cbnz w9,0x7101ec6268
7101ec6278  add x2,sp,#0x38
7101ec627c  add x3,sp,#0x28
7101ec6280  bl 0x7101ec4ee0
7101ec6284  ldaxr x8,[x22]
7101ec6288  sub x9,x8,#0x1
7101ec628c  stlxr w10,x9,[x22]
7101ec6290  cbnz w10,0x7101ec6284
7101ec6294  cbnz x8,0x7101ec62c8
7101ec6298  ldr x8,[x20]
7101ec629c  ldr x8,[x8, #0x10]
7101ec62a0  mov x0,x20
7101ec62a4  blr x8
7101ec62a8  mov x0,x20
7101ec62ac  bl 0x71039c2670
7101ec62b0  ldr x20,[sp, #0x40]
7101ec62b4  cbnz x20,0x7101ec62d0
7101ec62b8  b 0x7101ec6300
7101ec62bc  add x2,sp,#0x38
7101ec62c0  add x3,sp,#0x28
7101ec62c4  bl 0x7101ec4ee0
7101ec62c8  ldr x20,[sp, #0x40]
7101ec62cc  cbz x20,0x7101ec6300
7101ec62d0  add x8,x20,#0x8
7101ec62d4  ldaxr x9,[x8]
7101ec62d8  sub x10,x9,#0x1
7101ec62dc  stlxr w11,x10,[x8]
7101ec62e0  cbnz w11,0x7101ec62d4
7101ec62e4  cbnz x9,0x7101ec6300
7101ec62e8  ldr x8,[x20]
7101ec62ec  ldr x8,[x8, #0x10]
7101ec62f0  mov x0,x20
7101ec62f4  blr x8
7101ec62f8  mov x0,x20
7101ec62fc  bl 0x71039c2670
7101ec6300  ldr x8,[x19, #0x10]
7101ec6304  ldr x9,[x8, #0x1b8]
7101ec6308  cbz x9,0x7101ec63cc
7101ec630c  add x10,x8,#0x1b8
7101ec6310  mov x8,x10
7101ec6314  ldr w11,[x9, #0x20]
7101ec6318  cmp w11,#0x1
7101ec631c  cset w11,lt
7101ec6320  csel x8,x8,x9,lt
7101ec6324  ldr x9,[x9, w11, UXTW #0x3]
7101ec6328  cbnz x9,0x7101ec6314
7101ec632c  cmp x8,x10
7101ec6330  b.eq 0x7101ec63cc
7101ec6334  ldr w9,[x8, #0x20]
7101ec6338  cmp w9,#0x1
7101ec633c  b.gt 0x7101ec63cc
7101ec6340  ldr x0,[x8, #0x28]
7101ec6344  cbz x0,0x7101ec63cc
7101ec6348  ldr x8,[x0]
7101ec634c  ldr x8,[x8, #0x200]
7101ec6350  blr x8
7101ec6354  tbz w0,#0x0,0x7101ec63cc
7101ec6358  ldr x8,[x19, #0x10]
7101ec635c  ldr x9,[x8, #0x1b8]
7101ec6360  cbz x9,0x7101ec63cc
7101ec6364  add x10,x8,#0x1b8
7101ec6368  mov x8,x10
7101ec636c  ldr w11,[x9, #0x20]
7101ec6370  cmp w11,#0x1
7101ec6374  cset w11,lt
7101ec6378  csel x8,x8,x9,lt
7101ec637c  ldr x9,[x9, w11, UXTW #0x3]
7101ec6380  cbnz x9,0x7101ec636c
7101ec6384  cmp x8,x10
7101ec6388  b.eq 0x7101ec63cc
7101ec638c  ldr w9,[x8, #0x20]
7101ec6390  cmp w9,#0x1
7101ec6394  b.gt 0x7101ec63cc
7101ec6398  ldr x20,[x8, #0x28]
7101ec639c  cbz x20,0x7101ec63cc
7101ec63a0  ldr x8,[x20]
7101ec63a4  ldr x8,[x8, #0x1f8]
7101ec63a8  mov x0,x20
7101ec63ac  mov w1,wzr
7101ec63b0  blr x8
7101ec63b4  ldr x8,[x20]
7101ec63b8  ldr x8,[x8, #0x388]
7101ec63bc  mov w1,#0x1
7101ec63c0  mov x0,x20
7101ec63c4  mov w2,wzr
7101ec63c8  blr x8
7101ec63cc  ldr x9,[x21]
7101ec63d0  cbz x9,0x7101ec6408
7101ec63d4  mov x8,x21
7101ec63d8  mov x10,x9
7101ec63dc  ldr w11,[x10, #0x20]
7101ec63e0  cmp w11,#0x4
7101ec63e4  cset w11,lt
7101ec63e8  csel x8,x8,x10,lt
7101ec63ec  ldr x10,[x10, w11, UXTW #0x3]
7101ec63f0  cbnz x10,0x7101ec63dc
7101ec63f4  cmp x8,x21
7101ec63f8  b.eq 0x7101ec6408
7101ec63fc  ldr w10,[x8, #0x20]
7101ec6400  cmp w10,#0x5
7101ec6404  b.lt 0x7101ec640c
7101ec6408  mov x8,x21
7101ec640c  cbz x9,0x7101ec6440
7101ec6410  mov x22,x21
7101ec6414  ldr w10,[x9, #0x20]
7101ec6418  cmp w10,#0x5
7101ec641c  cset w10,lt
7101ec6420  csel x22,x22,x9,lt
7101ec6424  ldr x9,[x9, w10, UXTW #0x3]
7101ec6428  cbnz x9,0x7101ec6414
7101ec642c  cmp x22,x21
7101ec6430  b.eq 0x7101ec6440
7101ec6434  ldr w9,[x22, #0x20]
7101ec6438  cmp w9,#0x6
7101ec643c  b.lt 0x7101ec6444
7101ec6440  mov x22,x21
7101ec6444  ldp x9,x20,[x8, #0x28]
7101ec6448  cbz x20,0x7101ec6470
7101ec644c  add x8,x20,#0x8
7101ec6450  ldxr x10,[x8]
7101ec6454  add x10,x10,#0x1
7101ec6458  stxr w11,x10,[x8]
7101ec645c  cbnz w11,0x7101ec6450
7101ec6460  ldxr x10,[x8]
7101ec6464  add x10,x10,#0x1
7101ec6468  stxr w11,x10,[x8]
7101ec646c  cbnz w11,0x7101ec6460
7101ec6470  ldr x21,[x19, #0x138]
7101ec6474  stp x9,x20,[x19, #0x130]
7101ec6478  cbz x21,0x7101ec64ac
7101ec647c  add x8,x21,#0x8
7101ec6480  ldaxr x9,[x8]
7101ec6484  sub x10,x9,#0x1
7101ec6488  stlxr w11,x10,[x8]
7101ec648c  cbnz w11,0x7101ec6480
7101ec6490  cbnz x9,0x7101ec64ac
7101ec6494  ldr x8,[x21]
7101ec6498  ldr x8,[x8, #0x10]
7101ec649c  mov x0,x21
7101ec64a0  blr x8
7101ec64a4  mov x0,x21
7101ec64a8  bl 0x71039c2670
7101ec64ac  cbz x20,0x7101ec64e0
7101ec64b0  add x8,x20,#0x8
7101ec64b4  ldaxr x9,[x8]
7101ec64b8  sub x10,x9,#0x1
7101ec64bc  stlxr w11,x10,[x8]
7101ec64c0  cbnz w11,0x7101ec64b4
7101ec64c4  cbnz x9,0x7101ec64e0
7101ec64c8  ldr x8,[x20]
7101ec64cc  ldr x8,[x8, #0x10]
7101ec64d0  mov x0,x20
7101ec64d4  blr x8
7101ec64d8  mov x0,x20
7101ec64dc  bl 0x71039c2670
7101ec64e0  ldp x8,x20,[x22, #0x28]
7101ec64e4  cbz x20,0x7101ec650c
7101ec64e8  add x9,x20,#0x8
7101ec64ec  ldxr x10,[x9]
7101ec64f0  add x10,x10,#0x1
7101ec64f4  stxr w11,x10,[x9]
7101ec64f8  cbnz w11,0x7101ec64ec
7101ec64fc  ldxr x10,[x9]
7101ec6500  add x10,x10,#0x1
7101ec6504  stxr w11,x10,[x9]
7101ec6508  cbnz w11,0x7101ec64fc
7101ec650c  ldr x21,[x19, #0x150]
7101ec6510  stp x8,x20,[x19, #0x148]
7101ec6514  cbz x21,0x7101ec6548
7101ec6518  add x8,x21,#0x8
7101ec651c  ldaxr x9,[x8]
7101ec6520  sub x10,x9,#0x1
7101ec6524  stlxr w11,x10,[x8]
7101ec6528  cbnz w11,0x7101ec651c
7101ec652c  cbnz x9,0x7101ec6548
7101ec6530  ldr x8,[x21]
7101ec6534  ldr x8,[x8, #0x10]
7101ec6538  mov x0,x21
7101ec653c  blr x8
7101ec6540  mov x0,x21
7101ec6544  bl 0x71039c2670
7101ec6548  cbz x20,0x7101ec657c
7101ec654c  add x8,x20,#0x8
7101ec6550  ldaxr x9,[x8]
7101ec6554  sub x10,x9,#0x1
7101ec6558  stlxr w11,x10,[x8]
7101ec655c  cbnz w11,0x7101ec6550
7101ec6560  cbnz x9,0x7101ec657c
7101ec6564  ldr x8,[x20]
7101ec6568  ldr x8,[x8, #0x10]
7101ec656c  mov x0,x20
7101ec6570  blr x8
7101ec6574  mov x0,x20
7101ec6578  bl 0x71039c2670
7101ec657c  ldr x21,[x19, #0x8]
7101ec6580  adrp x1,0x71042e7000
7101ec6584  add x1,x1,#0xa3a
7101ec6588  sub x8,x29,#0x78
7101ec658c  mov x0,x21
7101ec6590  bl 0x7103776640
7101ec6594  adrp x1,0x7104338000
7101ec6598  add x1,x1,#0xd31
7101ec659c  add x8,sp,#0x48
7101ec65a0  sub x0,x29,#0x78
7101ec65a4  add x22,sp,#0x48
7101ec65a8  bl 0x7103776910
7101ec65ac  add x20,x19,#0x38
7101ec65b0  cmp x20,x22
7101ec65b4  b.eq 0x7101ec65d0
7101ec65b8  ldr x8,[sp, #0x50]
7101ec65bc  str xzr,[sp, #0x50]
7101ec65c0  ldr x0,[x19, #0x40]
7101ec65c4  str x8,[x19, #0x40]
7101ec65c8  cbz x0,0x7101ec65d0
7101ec65cc  bl 0x710392eb40
7101ec65d0  ldr x0,[sp, #0x50]
7101ec65d4  adrp x26,0x710523d000
7101ec65d8  add x26,x26,#0x9a8
7101ec65dc  stp x26,xzr,[sp, #0x48]
7101ec65e0  cbz x0,0x7101ec65e8
7101ec65e4  bl 0x710392eb40
7101ec65e8  ldur x22,[x29, #-0x70]
7101ec65ec  adrp x27,0x710523d000
7101ec65f0  add x27,x27,#0x988
7101ec65f4  stp x27,xzr,[x29, #-0x78]
7101ec65f8  cbz x22,0x7101ec6614
7101ec65fc  ldr x0,[x22, #0x18]
7101ec6600  stp x26,xzr,[x22, #0x10]
7101ec6604  cbz x0,0x7101ec660c
7101ec6608  bl 0x710392eb40
7101ec660c  mov x0,x22
7101ec6610  bl 0x710392eb40
7101ec6614  adrp x1,0x71043cf000
7101ec6618  add x1,x1,#0xc04
7101ec661c  add x8,sp,#0x48
7101ec6620  mov x0,x21
7101ec6624  add x22,sp,#0x48
7101ec6628  bl 0x71037780e0
7101ec662c  add x8,x19,#0x48
7101ec6630  cmp x8,x22
7101ec6634  b.eq 0x7101ec6650
7101ec6638  ldr x8,[sp, #0x50]
7101ec663c  str xzr,[sp, #0x50]
7101ec6640  ldr x0,[x19, #0x50]
7101ec6644  str x8,[x19, #0x50]
7101ec6648  cbz x0,0x7101ec6650
7101ec664c  bl 0x710392eb40
7101ec6650  ldr x0,[sp, #0x50]
7101ec6654  adrp x28,0x710523d000
7101ec6658  add x28,x28,#0x9e8
7101ec665c  stp x28,xzr,[sp, #0x48]
7101ec6660  cbz x0,0x7101ec6668
7101ec6664  bl 0x710392eb40
7101ec6668  ldr x22,[x19, #0x8]
7101ec666c  adrp x1,0x710437c000
7101ec6670  add x1,x1,#0xc66
7101ec6674  sub x8,x29,#0x78
7101ec6678  mov x0,x22
7101ec667c  bl 0x7103776640
7101ec6680  adrp x1,0x7104338000
7101ec6684  add x1,x1,#0xd31
7101ec6688  add x8,sp,#0x48
7101ec668c  sub x0,x29,#0x78
7101ec6690  add x23,sp,#0x48
7101ec6694  bl 0x7103776910
7101ec6698  add x21,x19,#0x58
7101ec669c  cmp x21,x23
7101ec66a0  b.eq 0x7101ec66bc
7101ec66a4  ldr x8,[sp, #0x50]
7101ec66a8  str xzr,[sp, #0x50]
7101ec66ac  ldr x0,[x19, #0x60]
7101ec66b0  str x8,[x19, #0x60]
7101ec66b4  cbz x0,0x7101ec66bc
7101ec66b8  bl 0x710392eb40
7101ec66bc  ldr x0,[sp, #0x50]
7101ec66c0  stp x26,xzr,[sp, #0x48]
7101ec66c4  cbz x0,0x7101ec66cc
7101ec66c8  bl 0x710392eb40
7101ec66cc  ldur x23,[x29, #-0x70]
7101ec66d0  stp x27,xzr,[x29, #-0x78]
7101ec66d4  cbz x23,0x7101ec66f0
7101ec66d8  ldr x0,[x23, #0x18]
7101ec66dc  stp x26,xzr,[x23, #0x10]
7101ec66e0  cbz x0,0x7101ec66e8
7101ec66e4  bl 0x710392eb40
7101ec66e8  mov x0,x23
7101ec66ec  bl 0x710392eb40
7101ec66f0  adrp x1,0x71043be000
7101ec66f4  add x1,x1,#0xd92
7101ec66f8  add x8,sp,#0x48
7101ec66fc  mov x0,x22
7101ec6700  add x23,sp,#0x48
7101ec6704  bl 0x71037780e0
7101ec6708  add x8,x19,#0x68
7101ec670c  cmp x8,x23
7101ec6710  b.eq 0x7101ec672c
7101ec6714  ldr x8,[sp, #0x50]
7101ec6718  str xzr,[sp, #0x50]
7101ec671c  ldr x0,[x19, #0x70]
7101ec6720  str x8,[x19, #0x70]
7101ec6724  cbz x0,0x7101ec672c
7101ec6728  bl 0x710392eb40
7101ec672c  ldr x0,[sp, #0x50]
7101ec6730  stp x28,xzr,[sp, #0x48]
7101ec6734  cbz x0,0x7101ec673c
7101ec6738  bl 0x710392eb40
7101ec673c  ldr x23,[x19, #0x8]
7101ec6740  adrp x1,0x7104401000
7101ec6744  add x1,x1,#0xcf9
7101ec6748  sub x8,x29,#0x78
7101ec674c  mov x0,x23
7101ec6750  bl 0x7103776640
7101ec6754  adrp x1,0x7104338000
7101ec6758  add x1,x1,#0xd31
7101ec675c  add x8,sp,#0x48
7101ec6760  sub x0,x29,#0x78
7101ec6764  add x24,sp,#0x48
7101ec6768  bl 0x7103776910
7101ec676c  add x22,x19,#0x78
7101ec6770  cmp x22,x24
7101ec6774  b.eq 0x7101ec6790
7101ec6778  ldr x8,[sp, #0x50]
7101ec677c  str xzr,[sp, #0x50]
7101ec6780  ldr x0,[x19, #0x80]
7101ec6784  str x8,[x19, #0x80]
7101ec6788  cbz x0,0x7101ec6790
7101ec678c  bl 0x710392eb40
7101ec6790  ldr x0,[sp, #0x50]
7101ec6794  stp x26,xzr,[sp, #0x48]
7101ec6798  cbz x0,0x7101ec67a0
7101ec679c  bl 0x710392eb40
7101ec67a0  ldur x24,[x29, #-0x70]
7101ec67a4  stp x27,xzr,[x29, #-0x78]
7101ec67a8  cbz x24,0x7101ec67c4
7101ec67ac  ldr x0,[x24, #0x18]
7101ec67b0  stp x26,xzr,[x24, #0x10]
7101ec67b4  cbz x0,0x7101ec67bc
7101ec67b8  bl 0x710392eb40
7101ec67bc  mov x0,x24
7101ec67c0  bl 0x710392eb40
7101ec67c4  adrp x1,0x7104433000
7101ec67c8  add x1,x1,#0x811
7101ec67cc  add x8,sp,#0x48
7101ec67d0  mov x0,x23
7101ec67d4  add x24,sp,#0x48
7101ec67d8  bl 0x71037780e0
7101ec67dc  add x8,x19,#0x88
7101ec67e0  cmp x8,x24
7101ec67e4  b.eq 0x7101ec6800
7101ec67e8  ldr x8,[sp, #0x50]
7101ec67ec  str xzr,[sp, #0x50]
7101ec67f0  ldr x0,[x19, #0x90]
7101ec67f4  str x8,[x19, #0x90]
7101ec67f8  cbz x0,0x7101ec6800
7101ec67fc  bl 0x710392eb40
7101ec6800  ldr x0,[sp, #0x50]
7101ec6804  stp x28,xzr,[sp, #0x48]
7101ec6808  cbz x0,0x7101ec6810
7101ec680c  bl 0x710392eb40
7101ec6810  ldr x24,[x19, #0x8]
7101ec6814  adrp x1,0x710438d000
7101ec6818  add x1,x1,#0x2ad
7101ec681c  sub x8,x29,#0x78
7101ec6820  mov x0,x24
7101ec6824  bl 0x7103776640
7101ec6828  adrp x1,0x7104338000
7101ec682c  add x1,x1,#0xd31
7101ec6830  add x8,sp,#0x48
7101ec6834  sub x0,x29,#0x78
7101ec6838  add x25,sp,#0x48
7101ec683c  bl 0x7103776910
7101ec6840  add x23,x19,#0x98
7101ec6844  cmp x23,x25
7101ec6848  b.eq 0x7101ec6864
7101ec684c  ldr x8,[sp, #0x50]
7101ec6850  str xzr,[sp, #0x50]
7101ec6854  ldr x0,[x19, #0xa0]
7101ec6858  str x8,[x19, #0xa0]
7101ec685c  cbz x0,0x7101ec6864
7101ec6860  bl 0x710392eb40
7101ec6864  ldr x0,[sp, #0x50]
7101ec6868  stp x26,xzr,[sp, #0x48]
7101ec686c  cbz x0,0x7101ec6874
7101ec6870  bl 0x710392eb40
7101ec6874  ldur x25,[x29, #-0x70]
7101ec6878  stp x27,xzr,[x29, #-0x78]
7101ec687c  cbz x25,0x7101ec6898
7101ec6880  ldr x0,[x25, #0x18]
7101ec6884  stp x26,xzr,[x25, #0x10]
7101ec6888  cbz x0,0x7101ec6890
7101ec688c  bl 0x710392eb40
7101ec6890  mov x0,x25
7101ec6894  bl 0x710392eb40
7101ec6898  adrp x1,0x71042b4000
7101ec689c  add x1,x1,#0xb57
7101ec68a0  add x8,sp,#0x48
7101ec68a4  mov x0,x24
7101ec68a8  add x25,sp,#0x48
7101ec68ac  bl 0x71037780e0
7101ec68b0  add x8,x19,#0xa8
7101ec68b4  cmp x8,x25
7101ec68b8  b.eq 0x7101ec68d4
7101ec68bc  ldr x8,[sp, #0x50]
7101ec68c0  str xzr,[sp, #0x50]
7101ec68c4  ldr x0,[x19, #0xb0]
7101ec68c8  str x8,[x19, #0xb0]
7101ec68cc  cbz x0,0x7101ec68d4
7101ec68d0  bl 0x710392eb40
7101ec68d4  ldr x0,[sp, #0x50]
7101ec68d8  stp x28,xzr,[sp, #0x48]
7101ec68dc  cbz x0,0x7101ec68e4
7101ec68e0  bl 0x710392eb40
7101ec68e4  adrp x1,0x71042b4000
7101ec68e8  add x1,x1,#0xb22
7101ec68ec  mov x0,x20
7101ec68f0  bl 0x710377a120
7101ec68f4  adrp x1,0x7104422000
7101ec68f8  add x1,x1,#0xb16
7101ec68fc  mov x0,x21
7101ec6900  bl 0x710377a120
7101ec6904  adrp x1,0x710433a000
7101ec6908  add x1,x1,#0x986
7101ec690c  mov x0,x22
7101ec6910  bl 0x710377a120
7101ec6914  adrp x1,0x71043f1000
7101ec6918  add x1,x1,#0x5c
7101ec691c  mov x0,x23
7101ec6920  bl 0x710377a120
7101ec6924  ldr x0,[x19, #0x8]
7101ec6928  adrp x1,0x7104401000
7101ec692c  add x1,x1,#0xce8
7101ec6930  add x8,sp,#0x48
7101ec6934  bl 0x7103776640
7101ec6938  adrp x1,0x71043cf000
7101ec693c  add x1,x1,#0xca4
7101ec6940  sub x8,x29,#0x78
7101ec6944  add x0,sp,#0x48
7101ec6948  bl 0x7103776910
7101ec694c  adrp x1,0x7104281000
7101ec6950  add x1,x1,#0x24d
7101ec6954  sub x0,x29,#0x78
7101ec6958  bl 0x710377a120
7101ec695c  ldur x0,[x29, #-0x70]
7101ec6960  stp x26,xzr,[x29, #-0x78]
7101ec6964  cbz x0,0x7101ec696c
7101ec6968  bl 0x710392eb40
7101ec696c  adrp x1,0x7104281000
7101ec6970  add x1,x1,#0x234
7101ec6974  sub x8,x29,#0x78
7101ec6978  add x0,sp,#0x48
7101ec697c  bl 0x7103776910
7101ec6980  adrp x1,0x7104281000
7101ec6984  add x1,x1,#0x24d
7101ec6988  sub x0,x29,#0x78
7101ec698c  bl 0x710377a120
7101ec6990  ldur x0,[x29, #-0x70]
7101ec6994  stp x26,xzr,[x29, #-0x78]
7101ec6998  cbz x0,0x7101ec69a0
7101ec699c  bl 0x710392eb40
7101ec69a0  add x0,sp,#0x18
7101ec69a4  add x1,sp,#0x48
7101ec69a8  bl 0x7103776390
7101ec69ac  add x0,sp,#0x18
7101ec69b0  bl 0x710337d360
7101ec69b4  ldr x20,[sp, #0x20]
7101ec69b8  stp x27,xzr,[sp, #0x18]
7101ec69bc  cbz x20,0x7101ec69d8
7101ec69c0  ldr x0,[x20, #0x18]
7101ec69c4  stp x26,xzr,[x20, #0x10]
7101ec69c8  cbz x0,0x7101ec69d0
7101ec69cc  bl 0x710392eb40
7101ec69d0  mov x0,x20
7101ec69d4  bl 0x710392eb40
7101ec69d8  adrp x1,0x710424f000
7101ec69dc  add x1,x1,#0xc76
7101ec69e0  sub x8,x29,#0x78
7101ec69e4  add x0,sp,#0x48
7101ec69e8  bl 0x7103776910
7101ec69ec  mov w0,#0x10
7101ec69f0  mov w1,#0x20
7101ec69f4  str x26,[sp, #0x8]
7101ec69f8  bl 0x710392e290
7101ec69fc  cbnz x0,0x7101ec6a44
7101ec6a00  adrp x8,0x7105332000
7101ec6a04  ldr x0,[x8, #0xf00]
7101ec6a08  cbz x0,0x7101ec6a40
7101ec6a0c  mov w8,#0x20
7101ec6a10  stur wzr,[x29, #-0x5c]
7101ec6a14  sub x1,x29,#0x5c
7101ec6a18  stur x8,[x29, #-0x68]
7101ec6a1c  ldr x8,[x0]
7101ec6a20  ldr x8,[x8, #0x30]
7101ec6a24  sub x2,x29,#0x68
7101ec6a28  blr x8
7101ec6a2c  tbz w0,#0x0,0x7101ec6a40
7101ec6a30  mov w0,#0x10
7101ec6a34  mov w1,#0x20
7101ec6a38  bl 0x710392e290
7101ec6a3c  cbnz x0,0x7101ec6a44
7101ec6a40  mov x0,xzr
7101ec6a44  stp xzr,xzr,[x0, #0x10]
7101ec6a48  mov w1,#0x40000
7101ec6a4c  stp xzr,xzr,[x0]
7101ec6a50  ldur x8,[x29, #-0x70]
7101ec6a54  str x0,[sp, #0x10]
7101ec6a58  ldr x9,[x8]
7101ec6a5c  str x9,[x0]
7101ec6a60  ldr x8,[x8, #0x8]
7101ec6a64  str x8,[x0, #0x8]
7101ec6a68  ldur x20,[x29, #-0x70]
7101ec6a6c  ldr x8,[x20, #0x10]
7101ec6a70  mov x9,x0
7101ec6a74  add x0,sp,#0x8
7101ec6a78  str x8,[x9, #0x10]
7101ec6a7c  ldr x8,[x20, #0x18]
7101ec6a80  str x8,[x9, #0x18]
7101ec6a84  bl 0x710337cef0
7101ec6a88  ldr x0,[sp, #0x10]
7101ec6a8c  stp x26,xzr,[sp, #0x8]
7101ec6a90  cbz x0,0x7101ec6a98
7101ec6a94  bl 0x710392eb40
7101ec6a98  ldr x8,[x19]
7101ec6a9c  ldr x8,[x8, #0x18]
7101ec6aa0  mov x0,x19
7101ec6aa4  blr x8
7101ec6aa8  stp x26,xzr,[x29, #-0x78]
7101ec6aac  cbz x20,0x7101ec6ab8
7101ec6ab0  mov x0,x20
7101ec6ab4  bl 0x710392eb40
7101ec6ab8  ldr x19,[sp, #0x50]
7101ec6abc  stp x27,xzr,[sp, #0x48]
7101ec6ac0  cbz x19,0x7101ec6adc
7101ec6ac4  ldr x0,[x19, #0x18]
7101ec6ac8  stp x26,xzr,[x19, #0x10]
7101ec6acc  cbz x0,0x7101ec6ad4
7101ec6ad0  bl 0x710392eb40
7101ec6ad4  mov x0,x19
7101ec6ad8  bl 0x710392eb40
7101ec6adc  ldr x0,[sp, #0x90]
7101ec6ae0  cbz x0,0x7101ec6aec
7101ec6ae4  str x0,[sp, #0x98]
7101ec6ae8  bl 0x710392eb40
7101ec6aec  ldp x29,x30,[sp, #0x120]
7101ec6af0  ldp x20,x19,[sp, #0x110]
7101ec6af4  ldp x22,x21,[sp, #0x100]
7101ec6af8  ldp x24,x23,[sp, #0xf0]
7101ec6afc  ldp x26,x25,[sp, #0xe0]
7101ec6b00  ldp x28,x27,[sp, #0xd0]
7101ec6b04  add sp,sp,#0x130
7101ec6b08  ret
