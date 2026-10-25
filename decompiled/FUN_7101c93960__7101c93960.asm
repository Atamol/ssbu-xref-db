// addr:      7101c93960
// offset:    0x1c93960
// name:      FUN_7101c93960
// mangled:   
// size:      1860

7101c93960  sub sp,sp,#0x80
7101c93964  stp x20,x19,[sp, #0x60]
7101c93968  stp x29,x30,[sp, #0x70]
7101c9396c  add x29,sp,#0x70
7101c93970  mov x9,x1
7101c93974  mov x19,x0
7101c93978  adrp x1,0x7104338000
7101c9397c  add x1,x1,#0xd31
7101c93980  sub x8,x29,#0x20
7101c93984  mov x0,x9
7101c93988  mov w20,w2
7101c9398c  bl 0x7103776910
7101c93990  cmp w20,#0x6
7101c93994  b.hi 0x7101c93aac
7101c93998  mov w8,w20
7101c9399c  adrp x9,0x71044f9000
7101c939a0  add x9,x9,#0x974
7101c939a4  ldrsw x8,[x9, x8, LSL #0x2]
7101c939a8  add x8,x8,x9
7101c939ac  br x8
7101c939b0  adrp x1,0x7104433000
7101c939b4  add x1,x1,#0x1d9
7101c939b8  b 0x7101c93d8c
7101c939bc  ldrsb x9,[x19, #0x114]
7101c939c0  cmp x9,#0x2
7101c939c4  b.cs 0x7101c940a0
7101c939c8  adrp x10,0x7104545000
7101c939cc  add x10,x10,#0x280
7101c939d0  adrp x11,0x7104433000
7101c939d4  add x11,x11,#0x148
7101c939d8  ldrb w9,[x10, x9, LSL ]
7101c939dc  adrp x10,0x710425f000
7101c939e0  add x10,x10,#0x3f9
7101c939e4  str xzr,[sp, #0x8]
7101c939e8  cmp w9,#0x2
7101c939ec  mov x8,xzr
7101c939f0  csel x9,x11,x10,eq
7101c939f4  add x10,sp,#0x8
7101c939f8  b 0x7101c93a04
7101c939fc  add x8,x8,#0x2
7101c93a00  strb w11,[x12, #0x9]
7101c93a04  add x11,x9,x8
7101c93a08  ldrb w13,[x11]
7101c93a0c  cbz w13,0x7101c93c80
7101c93a10  add w14,w8,#0x1
7101c93a14  add x12,x10,x8
7101c93a18  cmp w14,#0x3f
7101c93a1c  strb w13,[x12, #0x8]
7101c93a20  b.cs 0x7101c93c7c
7101c93a24  ldrb w11,[x11, #0x1]
7101c93a28  cbnz w11,0x7101c939fc
7101c93a2c  add x8,x8,#0x1
7101c93a30  b 0x7101c93c80
7101c93a34  ldrsb x9,[x19, #0x112]
7101c93a38  cmp x9,#0x2
7101c93a3c  b.cs 0x7101c940a0
7101c93a40  adrp x10,0x7104545000
7101c93a44  add x10,x10,#0x280
7101c93a48  adrp x11,0x710424f000
7101c93a4c  add x11,x11,#0x545
7101c93a50  ldrb w9,[x10, x9, LSL ]
7101c93a54  adrp x10,0x710425f000
7101c93a58  add x10,x10,#0x41a
7101c93a5c  str xzr,[sp, #0x8]
7101c93a60  cmp w9,#0x2
7101c93a64  mov x8,xzr
7101c93a68  csel x9,x11,x10,eq
7101c93a6c  add x10,sp,#0x8
7101c93a70  b 0x7101c93a7c
7101c93a74  add x8,x8,#0x2
7101c93a78  strb w11,[x12, #0x9]
7101c93a7c  add x11,x9,x8
7101c93a80  ldrb w13,[x11]
7101c93a84  cbz w13,0x7101c93cc4
7101c93a88  add w14,w8,#0x1
7101c93a8c  add x12,x10,x8
7101c93a90  cmp w14,#0x3f
7101c93a94  strb w13,[x12, #0x8]
7101c93a98  b.cs 0x7101c93cc0
7101c93a9c  ldrb w11,[x11, #0x1]
7101c93aa0  cbnz w11,0x7101c93a74
7101c93aa4  add x8,x8,#0x1
7101c93aa8  b 0x7101c93cc4
7101c93aac  adrp x1,0x7104867000
7101c93ab0  add x1,x1,#0xc2e
7101c93ab4  b 0x7101c93d8c
7101c93ab8  ldrsb x8,[x19, #0x111]
7101c93abc  cmp x8,#0x5
7101c93ac0  b.cs 0x7101c940a0
7101c93ac4  adrp x9,0x7104545000
7101c93ac8  add x9,x9,#0x2a2
7101c93acc  ldrb w8,[x9, x8, LSL ]
7101c93ad0  sub w8,w8,#0x4
7101c93ad4  cmp w8,#0x3
7101c93ad8  b.hi 0x7101c93fe4
7101c93adc  adrp x9,0x71044f9000
7101c93ae0  add x9,x9,#0x990
7101c93ae4  ldrsw x8,[x9, x8, LSL #0x2]
7101c93ae8  add x8,x8,x9
7101c93aec  br x8
7101c93af0  mov x11,#0x6e6d
7101c93af4  movk x11,#0x5f75, LSL #16
7101c93af8  mov x9,#0x2100000000
7101c93afc  movk x11,#0x6e6f, LSL #32
7101c93b00  movk x11,#0x696c, LSL #48
7101c93b04  add x10,sp,#0x8
7101c93b08  stp x9,x11,[sp, #0x8]
7101c93b0c  mov x9,#0x656e
7101c93b10  movk x9,#0x725f, LSL #16
7101c93b14  movk x9,#0x6f6f, LSL #32
7101c93b18  movk x9,#0x5f6d, LSL #48
7101c93b1c  add x1,x10,#0x8
7101c93b20  str x9,[sp, #0x18]
7101c93b24  add x9,x10,#0x9
7101c93b28  mov w10,#0x6568
7101c93b2c  strh w10,[sp, #0x20]
7101c93b30  mov x10,#0x706c
7101c93b34  movk x10,#0x735f, LSL #16
7101c93b38  movk x10,#0x6174, LSL #32
7101c93b3c  movk x10,#0x6567, LSL #48
7101c93b40  stur x10,[sp, #0x22]
7101c93b44  mov x10,#0x725f
7101c93b48  movk x10,#0x6e61, LSL #16
7101c93b4c  movk x10,#0x6f64, LSL #32
7101c93b50  movk x10,#0x6d, LSL #48
7101c93b54  stur x10,[sp, #0x2a]
7101c93b58  mov w8,#0x9dc5
7101c93b5c  movk w8,#0x811c, LSL #16
7101c93b60  mov w11,#0x6d
7101c93b64  mov w10,#0x89
7101c93b68  mul w8,w8,w10
7101c93b6c  and w11,w11,#0xff
7101c93b70  eor w8,w8,w11
7101c93b74  ldrb w11,[x9], #0x1
7101c93b78  cbnz w11,0x7101c93b68
7101c93b7c  b 0x7101c94098
7101c93b80  ldrsb x9,[x19, #0x113]
7101c93b84  cmp x9,#0x2
7101c93b88  b.cs 0x7101c940a0
7101c93b8c  adrp x10,0x7104545000
7101c93b90  add x10,x10,#0x280
7101c93b94  adrp x11,0x710425f000
7101c93b98  add x11,x11,#0x43d
7101c93b9c  ldrb w9,[x10, x9, LSL ]
7101c93ba0  adrp x10,0x710424f000
7101c93ba4  add x10,x10,#0x567
7101c93ba8  str xzr,[sp, #0x8]
7101c93bac  cmp w9,#0x2
7101c93bb0  mov x8,xzr
7101c93bb4  csel x9,x11,x10,eq
7101c93bb8  add x10,sp,#0x8
7101c93bbc  b 0x7101c93bc8
7101c93bc0  add x8,x8,#0x2
7101c93bc4  strb w11,[x12, #0x9]
7101c93bc8  add x11,x9,x8
7101c93bcc  ldrb w13,[x11]
7101c93bd0  cbz w13,0x7101c93d08
7101c93bd4  add w14,w8,#0x1
7101c93bd8  add x12,x10,x8
7101c93bdc  cmp w14,#0x3f
7101c93be0  strb w13,[x12, #0x8]
7101c93be4  b.cs 0x7101c93d04
7101c93be8  ldrb w11,[x11, #0x1]
7101c93bec  cbnz w11,0x7101c93bc0
7101c93bf0  add x8,x8,#0x1
7101c93bf4  b 0x7101c93d08
7101c93bf8  ldrsb x9,[x19, #0x115]
7101c93bfc  cmp x9,#0x2
7101c93c00  b.cs 0x7101c940a0
7101c93c04  adrp x10,0x7104545000
7101c93c08  add x10,x10,#0x280
7101c93c0c  adrp x11,0x710435b000
7101c93c10  add x11,x11,#0x849
7101c93c14  ldrb w9,[x10, x9, LSL ]
7101c93c18  adrp x10,0x71042e7000
7101c93c1c  add x10,x10,#0x1c6
7101c93c20  str xzr,[sp, #0x8]
7101c93c24  cmp w9,#0x2
7101c93c28  mov x8,xzr
7101c93c2c  csel x9,x11,x10,eq
7101c93c30  add x10,sp,#0x8
7101c93c34  b 0x7101c93c40
7101c93c38  add x8,x8,#0x2
7101c93c3c  strb w11,[x12, #0x9]
7101c93c40  add x11,x9,x8
7101c93c44  ldrb w13,[x11]
7101c93c48  cbz w13,0x7101c93d4c
7101c93c4c  add w14,w8,#0x1
7101c93c50  add x12,x10,x8
7101c93c54  cmp w14,#0x3f
7101c93c58  strb w13,[x12, #0x8]
7101c93c5c  b.cs 0x7101c93d48
7101c93c60  ldrb w11,[x11, #0x1]
7101c93c64  cbnz w11,0x7101c93c38
7101c93c68  add x8,x8,#0x1
7101c93c6c  b 0x7101c93d4c
7101c93c70  adrp x1,0x710437c000
7101c93c74  add x1,x1,#0x640
7101c93c78  b 0x7101c93d8c
7101c93c7c  add w8,w8,#0x1
7101c93c80  add x11,sp,#0x8
7101c93c84  add x1,x11,#0x8
7101c93c88  mov w9,#0x9dc5
7101c93c8c  movk w9,#0x811c, LSL #16
7101c93c90  strb wzr,[x1, w8, UXTW ]
7101c93c94  ldrb w10,[sp, #0x10]
7101c93c98  str w8,[sp, #0xc]
7101c93c9c  cbz w10,0x7101c93d88
7101c93ca0  add x8,x11,#0x9
7101c93ca4  mov w11,#0x89
7101c93ca8  mul w9,w9,w11
7101c93cac  and w10,w10,#0xff
7101c93cb0  eor w9,w9,w10
7101c93cb4  ldrb w10,[x8], #0x1
7101c93cb8  cbnz w10,0x7101c93ca8
7101c93cbc  b 0x7101c93d88
7101c93cc0  add w8,w8,#0x1
7101c93cc4  add x11,sp,#0x8
7101c93cc8  add x1,x11,#0x8
7101c93ccc  mov w9,#0x9dc5
7101c93cd0  movk w9,#0x811c, LSL #16
7101c93cd4  strb wzr,[x1, w8, UXTW ]
7101c93cd8  ldrb w10,[sp, #0x10]
7101c93cdc  str w8,[sp, #0xc]
7101c93ce0  cbz w10,0x7101c93d88
7101c93ce4  add x8,x11,#0x9
7101c93ce8  mov w11,#0x89
7101c93cec  mul w9,w9,w11
7101c93cf0  and w10,w10,#0xff
7101c93cf4  eor w9,w9,w10
7101c93cf8  ldrb w10,[x8], #0x1
7101c93cfc  cbnz w10,0x7101c93cec
7101c93d00  b 0x7101c93d88
7101c93d04  add w8,w8,#0x1
7101c93d08  add x11,sp,#0x8
7101c93d0c  add x1,x11,#0x8
7101c93d10  mov w9,#0x9dc5
7101c93d14  movk w9,#0x811c, LSL #16
7101c93d18  strb wzr,[x1, w8, UXTW ]
7101c93d1c  ldrb w10,[sp, #0x10]
7101c93d20  str w8,[sp, #0xc]
7101c93d24  cbz w10,0x7101c93d88
7101c93d28  add x8,x11,#0x9
7101c93d2c  mov w11,#0x89
7101c93d30  mul w9,w9,w11
7101c93d34  and w10,w10,#0xff
7101c93d38  eor w9,w9,w10
7101c93d3c  ldrb w10,[x8], #0x1
7101c93d40  cbnz w10,0x7101c93d30
7101c93d44  b 0x7101c93d88
7101c93d48  add w8,w8,#0x1
7101c93d4c  add x11,sp,#0x8
7101c93d50  add x1,x11,#0x8
7101c93d54  mov w9,#0x9dc5
7101c93d58  movk w9,#0x811c, LSL #16
7101c93d5c  strb wzr,[x1, w8, UXTW ]
7101c93d60  ldrb w10,[sp, #0x10]
7101c93d64  str w8,[sp, #0xc]
7101c93d68  cbz w10,0x7101c93d88
7101c93d6c  add x8,x11,#0x9
7101c93d70  mov w11,#0x89
7101c93d74  mul w9,w9,w11
7101c93d78  and w10,w10,#0xff
7101c93d7c  eor w9,w9,w10
7101c93d80  ldrb w10,[x8], #0x1
7101c93d84  cbnz w10,0x7101c93d74
7101c93d88  str w9,[sp, #0x8]
7101c93d8c  sub x0,x29,#0x20
7101c93d90  bl 0x710377a120
7101c93d94  ldur x0,[x29, #-0x18]
7101c93d98  adrp x8,0x710523d000
7101c93d9c  add x8,x8,#0x9a8
7101c93da0  stp x8,xzr,[x29, #-0x20]
7101c93da4  cbz x0,0x7101c93dac
7101c93da8  bl 0x710392eb40
7101c93dac  ldp x29,x30,[sp, #0x70]
7101c93db0  ldp x20,x19,[sp, #0x60]
7101c93db4  add sp,sp,#0x80
7101c93db8  ret
7101c93dbc  mov x10,#0x656e
7101c93dc0  movk x10,#0x725f, LSL #16
7101c93dc4  movk x10,#0x6f6f, LSL #32
7101c93dc8  movk x10,#0x5f6d, LSL #48
7101c93dcc  str x10,[sp, #0x18]
7101c93dd0  mov w10,#0x6568
7101c93dd4  strh w10,[sp, #0x20]
7101c93dd8  mov x10,#0x706c
7101c93ddc  movk x10,#0x735f, LSL #16
7101c93de0  movk x10,#0x6174, LSL #32
7101c93de4  movk x10,#0x6567, LSL #48
7101c93de8  stur x10,[sp, #0x22]
7101c93dec  mov w10,#0x725f
7101c93df0  movk w10,#0x6e61, LSL #16
7101c93df4  stur w10,[sp, #0x2a]
7101c93df8  mov w10,#0x6f64
7101c93dfc  strh w10,[sp, #0x2e]
7101c93e00  mov x10,#0x5f6d
7101c93e04  movk x10,#0x6162, LSL #16
7101c93e08  mov x9,#0x6e6d
7101c93e0c  movk x9,#0x5f75, LSL #16
7101c93e10  movk x9,#0x6e6f, LSL #32
7101c93e14  movk x9,#0x696c, LSL #48
7101c93e18  str x9,[sp, #0x10]
7101c93e1c  movk x10,#0x7474, LSL #32
7101c93e20  movk x10,#0x656c, LSL #48
7101c93e24  str x10,[sp, #0x30]
7101c93e28  mov w10,#0x6966
7101c93e2c  movk w10,#0x6c65, LSL #16
7101c93e30  str w10,[sp, #0x38]
7101c93e34  mov x8,#0x2d00000000
7101c93e38  str x8,[sp, #0x8]
7101c93e3c  add x9,sp,#0x8
7101c93e40  mov w10,#0x64
7101c93e44  strh w10,[sp, #0x3c]
7101c93e48  mov w8,#0x9dc5
7101c93e4c  movk w8,#0x811c, LSL #16
7101c93e50  add x1,x9,#0x8
7101c93e54  add x9,x9,#0x9
7101c93e58  mov w11,#0x6d
7101c93e5c  mov w10,#0x89
7101c93e60  mul w8,w8,w10
7101c93e64  and w11,w11,#0xff
7101c93e68  eor w8,w8,w11
7101c93e6c  ldrb w11,[x9], #0x1
7101c93e70  cbnz w11,0x7101c93e60
7101c93e74  b 0x7101c94098
7101c93e78  mov x10,#0x6e6d
7101c93e7c  movk x10,#0x5f75, LSL #16
7101c93e80  movk x10,#0x6e6f, LSL #32
7101c93e84  movk x10,#0x696c, LSL #48
7101c93e88  stp xzr,x10,[sp, #0x8]
7101c93e8c  mov x10,#0x656e
7101c93e90  movk x10,#0x725f, LSL #16
7101c93e94  movk x10,#0x6f6f, LSL #32
7101c93e98  movk x10,#0x5f6d, LSL #48
7101c93e9c  str x10,[sp, #0x18]
7101c93ea0  mov x10,#0x6568
7101c93ea4  movk x10,#0x706c, LSL #16
7101c93ea8  movk x10,#0x735f, LSL #32
7101c93eac  movk x10,#0x6174, LSL #48
7101c93eb0  str x10,[sp, #0x20]
7101c93eb4  mov w10,#0x6567
7101c93eb8  movk w10,#0x725f, LSL #16
7101c93ebc  str w10,[sp, #0x28]
7101c93ec0  mov w10,#0x6e61
7101c93ec4  strh w10,[sp, #0x2c]
7101c93ec8  mov x10,#0x6f64
7101c93ecc  movk x10,#0x5f6d, LSL #16
7101c93ed0  movk x10,#0x6162, LSL #32
7101c93ed4  movk x10,#0x7474, LSL #48
7101c93ed8  stur x10,[sp, #0x2e]
7101c93edc  mov x10,#0x656c
7101c93ee0  movk x10,#0x6966, LSL #16
7101c93ee4  movk x10,#0x6c65, LSL #32
7101c93ee8  movk x10,#0x5f64, LSL #48
7101c93eec  stur x10,[sp, #0x36]
7101c93ef0  mov w10,#0x6e65
7101c93ef4  movk w10,#0x64, LSL #16
7101c93ef8  stur w10,[sp, #0x3e]
7101c93efc  mov w10,#0x31
7101c93f00  str w10,[sp, #0xc]
7101c93f04  ldrb w10,[sp, #0x10]
7101c93f08  add x9,sp,#0x8
7101c93f0c  mov w8,#0x9dc5
7101c93f10  movk w8,#0x811c, LSL #16
7101c93f14  add x1,x9,#0x8
7101c93f18  cbz w10,0x7101c94098
7101c93f1c  add x9,x9,#0x9
7101c93f20  mov w11,#0x89
7101c93f24  mul w8,w8,w11
7101c93f28  and w10,w10,#0xff
7101c93f2c  eor w8,w8,w10
7101c93f30  ldrb w10,[x9], #0x1
7101c93f34  cbnz w10,0x7101c93f24
7101c93f38  b 0x7101c94098
7101c93f3c  mov x10,#0x6e6d
7101c93f40  movk x10,#0x5f75, LSL #16
7101c93f44  movk x10,#0x6e6f, LSL #32
7101c93f48  movk x10,#0x696c, LSL #48
7101c93f4c  str x10,[sp, #0x10]
7101c93f50  mov x10,#0x656e
7101c93f54  movk x10,#0x725f, LSL #16
7101c93f58  movk x10,#0x6f6f, LSL #32
7101c93f5c  movk x10,#0x5f6d, LSL #48
7101c93f60  str x10,[sp, #0x18]
7101c93f64  mov w10,#0x6568
7101c93f68  strh w10,[sp, #0x20]
7101c93f6c  mov x10,#0x706c
7101c93f70  movk x10,#0x735f, LSL #16
7101c93f74  movk x10,#0x6174, LSL #32
7101c93f78  movk x10,#0x6567, LSL #48
7101c93f7c  stur x10,[sp, #0x22]
7101c93f80  mov w10,#0x725f
7101c93f84  movk w10,#0x6e61, LSL #16
7101c93f88  stur w10,[sp, #0x2a]
7101c93f8c  mov w10,#0x6f64
7101c93f90  mov x9,#0x2500000000
7101c93f94  str x9,[sp, #0x8]
7101c93f98  add x9,sp,#0x8
7101c93f9c  add x1,x9,#0x8
7101c93fa0  strh w10,[sp, #0x2e]
7101c93fa4  mov w10,#0x5f6d
7101c93fa8  movk w10,#0x6e65, LSL #16
7101c93fac  str w10,[sp, #0x30]
7101c93fb0  mov w10,#0x64
7101c93fb4  mov w8,#0x9dc5
7101c93fb8  movk w8,#0x811c, LSL #16
7101c93fbc  strh w10,[sp, #0x34]
7101c93fc0  add x9,x9,#0x9
7101c93fc4  mov w11,#0x6d
7101c93fc8  mov w10,#0x89
7101c93fcc  mul w8,w8,w10
7101c93fd0  and w11,w11,#0xff
7101c93fd4  eor w8,w8,w11
7101c93fd8  ldrb w11,[x9], #0x1
7101c93fdc  cbnz w11,0x7101c93fcc
7101c93fe0  b 0x7101c94098
7101c93fe4  mov x10,#0x656e
7101c93fe8  movk x10,#0x725f, LSL #16
7101c93fec  movk x10,#0x6f6f, LSL #32
7101c93ff0  movk x10,#0x5f6d, LSL #48
7101c93ff4  str x10,[sp, #0x18]
7101c93ff8  mov w10,#0x6568
7101c93ffc  strh w10,[sp, #0x20]
7101c94000  mov x10,#0x706c
7101c94004  movk x10,#0x735f, LSL #16
7101c94008  movk x10,#0x6174, LSL #32
7101c9400c  movk x10,#0x6567, LSL #48
7101c94010  stur x10,[sp, #0x22]
7101c94014  mov w10,#0x705f
7101c94018  movk w10,#0x6572, LSL #16
7101c9401c  stur w10,[sp, #0x2a]
7101c94020  mov w10,#0x6976
7101c94024  mov x9,#0x6e6d
7101c94028  movk x9,#0x5f75, LSL #16
7101c9402c  movk x9,#0x6e6f, LSL #32
7101c94030  movk x9,#0x696c, LSL #48
7101c94034  str x9,[sp, #0x10]
7101c94038  strh w10,[sp, #0x2e]
7101c9403c  mov x10,#0x756f
7101c94040  movk x10,#0x6c73, LSL #16
7101c94044  movk x10,#0x5f79, LSL #32
7101c94048  movk x10,#0x6573, LSL #48
7101c9404c  str x10,[sp, #0x30]
7101c94050  mov x8,#0x2c00000000
7101c94054  str x8,[sp, #0x8]
7101c94058  strb wzr,[sp, #0x3c]
7101c9405c  add x9,sp,#0x8
7101c94060  mov w10,#0x656c
7101c94064  movk w10,#0x7463, LSL #16
7101c94068  mov w8,#0x9dc5
7101c9406c  movk w8,#0x811c, LSL #16
7101c94070  str w10,[sp, #0x38]
7101c94074  add x1,x9,#0x8
7101c94078  add x9,x9,#0x9
7101c9407c  mov w11,#0x6d
7101c94080  mov w10,#0x89
7101c94084  mul w8,w8,w10
7101c94088  and w11,w11,#0xff
7101c9408c  eor w8,w8,w11
7101c94090  ldrb w11,[x9], #0x1
7101c94094  cbnz w11,0x7101c94084
7101c94098  str w8,[sp, #0x8]
7101c9409c  b 0x7101c93d8c
7101c940a0  bl 0x71039c2650
