// addr:      7101ce1a40
// offset:    0x1ce1a40
// name:      FUN_7101ce1a40
// mangled:   
// size:      5236

7101ce1a40  stp x28,x27,[sp, #-0x60]!
7101ce1a44  stp x26,x25,[sp, #0x10]
7101ce1a48  stp x24,x23,[sp, #0x20]
7101ce1a4c  stp x22,x21,[sp, #0x30]
7101ce1a50  stp x20,x19,[sp, #0x40]
7101ce1a54  stp x29,x30,[sp, #0x50]
7101ce1a58  add x29,sp,#0x50
7101ce1a5c  sub sp,sp,#0x1e0
7101ce1a60  ldr w8,[x0, #0x228]
7101ce1a64  cmp w8,#0x1a
7101ce1a68  b.eq 0x7101ce2e28
7101ce1a6c  add x23,x0,#0x288
7101ce1a70  str w1,[sp, #0x1c]
7101ce1a74  mov x1,x23
7101ce1a78  mov w24,w5
7101ce1a7c  mov w25,w4
7101ce1a80  mov w21,w3
7101ce1a84  mov x19,x0
7101ce1a88  mov w20,w2
7101ce1a8c  str wzr,[x0, #0x2a8]
7101ce1a90  add x27,sp,#0xb0
7101ce1a94  bl 0x7101ce0260
7101ce1a98  add x9,x19,#0x2e8
7101ce1a9c  str x9,[sp]
7101ce1aa0  ldrb w9,[x19, #0x300]
7101ce1aa4  adrp x10,0x71043be000
7101ce1aa8  add x10,x10,#0x77c
7101ce1aac  adrp x11,0x7104443000
7101ce1ab0  add x11,x11,#0x89f
7101ce1ab4  cmp w9,#0x0
7101ce1ab8  mov x8,xzr
7101ce1abc  add x22,x19,#0x300
7101ce1ac0  stur xzr,[x29, #-0xa8]
7101ce1ac4  stp w25,w24,[sp, #0xc]
7101ce1ac8  csel x9,x11,x10,eq
7101ce1acc  sub x10,x29,#0xa8
7101ce1ad0  b 0x7101ce1adc
7101ce1ad4  add x8,x8,#0x2
7101ce1ad8  strb w11,[x12, #0x9]
7101ce1adc  add x11,x9,x8
7101ce1ae0  ldrb w13,[x11]
7101ce1ae4  cbz w13,0x7101ce1b10
7101ce1ae8  add w14,w8,#0x1
7101ce1aec  add x12,x10,x8
7101ce1af0  cmp w14,#0x3f
7101ce1af4  strb w13,[x12, #0x8]
7101ce1af8  b.cs 0x7101ce1b0c
7101ce1afc  ldrb w11,[x11, #0x1]
7101ce1b00  cbnz w11,0x7101ce1ad4
7101ce1b04  add x8,x8,#0x1
7101ce1b08  b 0x7101ce1b10
7101ce1b0c  add w8,w8,#0x1
7101ce1b10  sub x9,x29,#0xa8
7101ce1b14  add x10,x9,#0x8
7101ce1b18  mov w26,#0x9dc5
7101ce1b1c  movk w26,#0x811c, LSL #16
7101ce1b20  strb wzr,[x10, w8, UXTW ]
7101ce1b24  stur w8,[x29, #-0xa4]
7101ce1b28  ldurb w8,[x29, #-0xa0]
7101ce1b2c  mov w10,w26
7101ce1b30  cbz w8,0x7101ce1b54
7101ce1b34  add x9,x9,#0x9
7101ce1b38  mov w11,#0x89
7101ce1b3c  mov w10,w26
7101ce1b40  mul w10,w10,w11
7101ce1b44  and w8,w8,#0xff
7101ce1b48  eor w10,w10,w8
7101ce1b4c  ldrb w8,[x9], #0x1
7101ce1b50  cbnz w8,0x7101ce1b40
7101ce1b54  stur w10,[x29, #-0xa8]
7101ce1b58  ldr x0,[x19, #0x2f0]
7101ce1b5c  mov w1,#0x1
7101ce1b60  sub x2,x29,#0xa8
7101ce1b64  bl 0x71032d65d0
7101ce1b68  mov x9,#0x6e6d
7101ce1b6c  movk x9,#0x5f75, LSL #16
7101ce1b70  orr x8,xzr,#0x1e00000000
7101ce1b74  movk x9,#0x6873, LSL #32
7101ce1b78  movk x9,#0x7261, LSL #48
7101ce1b7c  mov w10,#0x6966
7101ce1b80  movk w10,#0x656c, LSL #16
7101ce1b84  stp x8,x9,[x29, #-0xf0]
7101ce1b88  mov x8,#0x5f65
7101ce1b8c  movk x8,#0x6564, LSL #16
7101ce1b90  movk x8,#0x6174, LSL #32
7101ce1b94  movk x8,#0x6c69, LSL #48
7101ce1b98  stur x8,[x29, #-0xe0]
7101ce1b9c  mov w8,#0x6f5f
7101ce1ba0  sturh w8,[x29, #-0xd8]
7101ce1ba4  mov x8,#0x6e77
7101ce1ba8  movk x8,#0x7265, LSL #16
7101ce1bac  movk x8,#0x705f, LSL #32
7101ce1bb0  movk x8,#0x6f72, LSL #48
7101ce1bb4  stur x8,[x27, #0xaa]
7101ce1bb8  mov w9,#0x6d
7101ce1bbc  stur w10,[x27, #0xb2]
7101ce1bc0  sturb wzr,[x29, #-0xca]
7101ce1bc4  mov w8,#0x9
7101ce1bc8  mov w24,#0x89
7101ce1bcc  sub x10,x29,#0xf0
7101ce1bd0  mov w11,w26
7101ce1bd4  mul w11,w11,w24
7101ce1bd8  and w9,w9,#0xff
7101ce1bdc  eor w11,w11,w9
7101ce1be0  ldrb w9,[x10, x8, LSL ]
7101ce1be4  add x8,x8,#0x1
7101ce1be8  cbnz w9,0x7101ce1bd4
7101ce1bec  stur w11,[x29, #-0xf0]
7101ce1bf0  ldr x0,[x19, #0x2f0]
7101ce1bf4  sub x2,x29,#0xf0
7101ce1bf8  mov w1,wzr
7101ce1bfc  bl 0x71032d65d0
7101ce1c00  ldrb w9,[x19, #0x301]
7101ce1c04  adrp x10,0x7104412000
7101ce1c08  add x10,x10,#0xb12
7101ce1c0c  adrp x11,0x71043f0000
7101ce1c10  add x11,x11,#0xad4
7101ce1c14  str xzr,[sp, #0xf8]
7101ce1c18  cmp w9,#0x0
7101ce1c1c  mov x8,xzr
7101ce1c20  csel x9,x11,x10,eq
7101ce1c24  add x10,sp,#0xf8
7101ce1c28  b 0x7101ce1c34
7101ce1c2c  add x8,x8,#0x2
7101ce1c30  strb w11,[x12, #0x9]
7101ce1c34  add x11,x9,x8
7101ce1c38  ldrb w13,[x11]
7101ce1c3c  cbz w13,0x7101ce1c68
7101ce1c40  add w14,w8,#0x1
7101ce1c44  add x12,x10,x8
7101ce1c48  cmp w14,#0x3f
7101ce1c4c  strb w13,[x12, #0x8]
7101ce1c50  b.cs 0x7101ce1c64
7101ce1c54  ldrb w11,[x11, #0x1]
7101ce1c58  cbnz w11,0x7101ce1c2c
7101ce1c5c  add x8,x8,#0x1
7101ce1c60  b 0x7101ce1c68
7101ce1c64  add w8,w8,#0x1
7101ce1c68  add x9,sp,#0xf8
7101ce1c6c  add x10,x9,#0x8
7101ce1c70  strb wzr,[x10, w8, UXTW ]
7101ce1c74  str w8,[sp, #0xfc]
7101ce1c78  ldrb w8,[sp, #0x100]
7101ce1c7c  mov w10,w26
7101ce1c80  cbz w8,0x7101ce1ca0
7101ce1c84  add x9,x9,#0x9
7101ce1c88  mov w10,w26
7101ce1c8c  mul w10,w10,w24
7101ce1c90  and w8,w8,#0xff
7101ce1c94  eor w10,w10,w8
7101ce1c98  ldrb w8,[x9], #0x1
7101ce1c9c  cbnz w8,0x7101ce1c8c
7101ce1ca0  str w10,[sp, #0xf8]
7101ce1ca4  ldr x0,[x19, #0x2f0]
7101ce1ca8  mov w1,#0x2
7101ce1cac  add x2,sp,#0xf8
7101ce1cb0  bl 0x71032d65d0
7101ce1cb4  ldr x8,[x19, #0x2f0]
7101ce1cb8  ldr w9,[x8, #0xc8]
7101ce1cbc  ldrb w10,[x19, #0x301]
7101ce1cc0  str w21,[sp, #0x8]
7101ce1cc4  cmp w9,#0x2
7101ce1cc8  cbz w10,0x7101ce1d0c
7101ce1ccc  b.le 0x7101ce1d88
7101ce1cd0  ldr x1,[x8, #0xe0]
7101ce1cd4  cbz x1,0x7101ce1d88
7101ce1cd8  add x0,sp,#0xb0
7101ce1cdc  mov w2,#0x2
7101ce1ce0  bl 0x7103771d60
7101ce1ce4  adrp x8,0x710532f000
7101ce1ce8  ldr x8,[x8, #0x8d0]
7101ce1cec  ldr x9,[x8, #0x8]
7101ce1cf0  ldp x8,x9,[x9, #0x40]
7101ce1cf4  sub x9,x9,x8
7101ce1cf8  asr x9,x9,#0x3
7101ce1cfc  cmp x9,#0x5
7101ce1d00  b.cc 0x7101ce1d4c
7101ce1d04  ldr x8,[x8, #0x20]
7101ce1d08  b 0x7101ce1d50
7101ce1d0c  b.le 0x7101ce1d88
7101ce1d10  ldr x1,[x8, #0xe0]
7101ce1d14  cbz x1,0x7101ce1d88
7101ce1d18  add x0,sp,#0xb0
7101ce1d1c  mov w2,#0x2
7101ce1d20  bl 0x7103771d60
7101ce1d24  adrp x8,0x710532f000
7101ce1d28  ldr x8,[x8, #0x8d0]
7101ce1d2c  ldr x9,[x8, #0x8]
7101ce1d30  ldp x8,x9,[x9, #0x40]
7101ce1d34  sub x9,x9,x8
7101ce1d38  asr x9,x9,#0x3
7101ce1d3c  cmp x9,#0x3
7101ce1d40  b.cc 0x7101ce1d4c
7101ce1d44  ldr x8,[x8, #0x10]
7101ce1d48  b 0x7101ce1d50
7101ce1d4c  mov x8,xzr
7101ce1d50  ldr x21,[sp, #0xb8]
7101ce1d54  str x8,[sp, #0x60]
7101ce1d58  ldr x0,[x21]
7101ce1d5c  cbz x0,0x7101ce1d70
7101ce1d60  ldr x8,[x0]
7101ce1d64  ldr x8,[x8, #0x2b0]
7101ce1d68  add x1,sp,#0x60
7101ce1d6c  blr x8
7101ce1d70  adrp x8,0x710523d000
7101ce1d74  add x8,x8,#0x9c8
7101ce1d78  stp x8,xzr,[sp, #0xb0]
7101ce1d7c  cbz x21,0x7101ce1d88
7101ce1d80  mov x0,x21
7101ce1d84  bl 0x710392eb40
7101ce1d88  ldr x8,[x19, #0x2f0]
7101ce1d8c  ldr w9,[x8, #0xc8]
7101ce1d90  cmp w9,#0x2
7101ce1d94  b.lt 0x7101ce1e9c
7101ce1d98  ldr x1,[x8, #0xe0]
7101ce1d9c  cbz x1,0x7101ce1e10
7101ce1da0  add x0,sp,#0xb0
7101ce1da4  mov w2,#0x1
7101ce1da8  bl 0x7103771d60
7101ce1dac  adrp x8,0x710532f000
7101ce1db0  ldr x8,[x8, #0x8d0]
7101ce1db4  ldr x9,[x8, #0x8]
7101ce1db8  ldp x8,x9,[x9, #0x40]
7101ce1dbc  cmp x9,x8
7101ce1dc0  b.ne 0x7101ce1dcc
7101ce1dc4  mov x8,xzr
7101ce1dc8  b 0x7101ce1dd0
7101ce1dcc  ldr x8,[x8]
7101ce1dd0  ldr x21,[sp, #0xb8]
7101ce1dd4  str x8,[sp, #0x60]
7101ce1dd8  ldr x0,[x21]
7101ce1ddc  cbz x0,0x7101ce1df0
7101ce1de0  ldr x8,[x0]
7101ce1de4  ldr x8,[x8, #0x2b0]
7101ce1de8  add x1,sp,#0x60
7101ce1dec  blr x8
7101ce1df0  adrp x8,0x710523d000
7101ce1df4  add x8,x8,#0x9c8
7101ce1df8  stp x8,xzr,[sp, #0xb0]
7101ce1dfc  cbz x21,0x7101ce1e08
7101ce1e00  mov x0,x21
7101ce1e04  bl 0x710392eb40
7101ce1e08  ldr x8,[x19, #0x2f0]
7101ce1e0c  ldr w9,[x8, #0xc8]
7101ce1e10  cmp w9,#0x3
7101ce1e14  b.lt 0x7101ce1e9c
7101ce1e18  ldr x9,[x8, #0xe0]
7101ce1e1c  cbz x9,0x7101ce1e9c
7101ce1e20  ldr x10,[x9, #0x1b8]
7101ce1e24  cbz x10,0x7101ce1e9c
7101ce1e28  ldrb w8,[x19, #0x301]
7101ce1e2c  add x11,x9,#0x1b8
7101ce1e30  mov x9,x11
7101ce1e34  ldr w12,[x10, #0x20]
7101ce1e38  cmp w12,#0x2
7101ce1e3c  cset w12,lt
7101ce1e40  csel x9,x9,x10,lt
7101ce1e44  ldr x10,[x10, w12, UXTW #0x3]
7101ce1e48  cbnz x10,0x7101ce1e34
7101ce1e4c  cmp x9,x11
7101ce1e50  b.eq 0x7101ce1e9c
7101ce1e54  ldr w10,[x9, #0x20]
7101ce1e58  cmp w10,#0x2
7101ce1e5c  b.gt 0x7101ce1e9c
7101ce1e60  ldr x21,[x9, #0x28]
7101ce1e64  cbz x21,0x7101ce1e9c
7101ce1e68  cmp w8,#0x0
7101ce1e6c  ldr x8,[x21]
7101ce1e70  cset w1,eq
7101ce1e74  cset w25,ne
7101ce1e78  ldr x8,[x8, #0x1f8]
7101ce1e7c  mov x0,x21
7101ce1e80  blr x8
7101ce1e84  ldr x8,[x21]
7101ce1e88  ldr x8,[x8, #0x388]
7101ce1e8c  mov x0,x21
7101ce1e90  mov w1,w25
7101ce1e94  mov w2,wzr
7101ce1e98  blr x8
7101ce1e9c  mov x0,x19
7101ce1ea0  str w20,[sp, #0x18]
7101ce1ea4  str xzr,[x19, #0x2f8]
7101ce1ea8  bl 0x7101ce1840
7101ce1eac  mov x0,x19
7101ce1eb0  bl 0x7101cdf560
7101ce1eb4  add x28,x19,#0x250
7101ce1eb8  adrp x1,0x7104443000
7101ce1ebc  add x1,x1,#0x93d
7101ce1ec0  add x8,sp,#0xb0
7101ce1ec4  mov x0,x28
7101ce1ec8  bl 0x7103776910
7101ce1ecc  ldr x21,[sp, #0xb8]
7101ce1ed0  mov x0,x21
7101ce1ed4  bl 0x7103779650
7101ce1ed8  adrp x20,0x710523d000
7101ce1edc  add x20,x20,#0x9a8
7101ce1ee0  stp x20,xzr,[sp, #0xb0]
7101ce1ee4  cbz x21,0x7101ce1ef0
7101ce1ee8  mov x0,x21
7101ce1eec  bl 0x710392eb40
7101ce1ef0  add x27,x19,#0x260
7101ce1ef4  adrp x1,0x7104443000
7101ce1ef8  add x1,x1,#0x93d
7101ce1efc  add x8,sp,#0xb0
7101ce1f00  mov x0,x27
7101ce1f04  add x21,x19,#0x2f8
7101ce1f08  bl 0x7103776910
7101ce1f0c  ldr x25,[sp, #0xb8]
7101ce1f10  mov x0,x25
7101ce1f14  bl 0x7103779650
7101ce1f18  stp x20,xzr,[sp, #0xb0]
7101ce1f1c  cbz x25,0x7101ce1f28
7101ce1f20  mov x0,x25
7101ce1f24  bl 0x710392eb40
7101ce1f28  ldr w8,[sp, #0x1c]
7101ce1f2c  cbz w8,0x7101ce1f48
7101ce1f30  add x4,x19,#0x2fc
7101ce1f34  add x2,x19,#0x298
7101ce1f38  add x3,x19,#0x306
7101ce1f3c  mov x0,x19
7101ce1f40  mov x1,x27
7101ce1f44  bl 0x7101ce2ec0
7101ce1f48  mov x0,x19
7101ce1f4c  mov x1,x28
7101ce1f50  mov x2,x23
7101ce1f54  mov x3,x22
7101ce1f58  mov x4,x21
7101ce1f5c  bl 0x7101ce2ec0
7101ce1f60  ldr x1,[x19, #0x290]
7101ce1f64  cbz x1,0x7101ce1f84
7101ce1f68  adrp x8,0x710532f000
7101ce1f6c  ldr x8,[x8, #0x8f8]
7101ce1f70  ldr x0,[x8, #0x8]
7101ce1f74  ldr w2,[x23]
7101ce1f78  bl 0x710334c7d0
7101ce1f7c  mov w20,w0
7101ce1f80  b 0x7101ce1f88
7101ce1f84  orr w20,wzr,#0xffff
7101ce1f88  mov x0,x19
7101ce1f8c  mov w1,wzr
7101ce1f90  mov w2,w20
7101ce1f94  bl 0x7101ce5140
7101ce1f98  mov w1,#0x1
7101ce1f9c  mov x0,x19
7101ce1fa0  mov w2,w20
7101ce1fa4  str w20,[sp, #0x14]
7101ce1fa8  bl 0x7101ce5140
7101ce1fac  ldr x8,[x19, #0x2b8]
7101ce1fb0  ldr x10,[x8, #0x1c8]
7101ce1fb4  add x9,x8,#0x1d0
7101ce1fb8  b 0x7101ce1fc0
7101ce1fbc  mov x10,x12
7101ce1fc0  cmp x10,x9
7101ce1fc4  b.eq 0x7101ce2014
7101ce1fc8  ldr x11,[x10, #0x8]
7101ce1fcc  str wzr,[x10, #0x28]
7101ce1fd0  cbz x11,0x7101ce1fe4
7101ce1fd4  mov x10,x11
7101ce1fd8  ldr x11,[x11]
7101ce1fdc  cbnz x11,0x7101ce1fd4
7101ce1fe0  b 0x7101ce1fc0
7101ce1fe4  mov x11,x10
7101ce1fe8  ldr x12,[x11, #0x10]!
7101ce1fec  ldr x13,[x12]
7101ce1ff0  cmp x13,x10
7101ce1ff4  b.eq 0x7101ce1fbc
7101ce1ff8  ldr x12,[x11]
7101ce1ffc  mov x11,x12
7101ce2000  ldr x10,[x11, #0x10]!
7101ce2004  ldr x13,[x10]
7101ce2008  cmp x13,x12
7101ce200c  b.ne 0x7101ce1ff8
7101ce2010  b 0x7101ce1fc0
7101ce2014  mov x25,#-0x1
7101ce2018  str x25,[x8, #0x258]
7101ce201c  str x25,[x8, #0x250]
7101ce2020  strb wzr,[x8, #0x280]
7101ce2024  add x8,x8,#0x282
7101ce2028  adrp x1,0x71042f8000
7101ce202c  add x1,x1,#0x402
7101ce2030  str wzr,[x8]
7101ce2034  add x8,sp,#0xb0
7101ce2038  mov x0,x28
7101ce203c  bl 0x71037780e0
7101ce2040  ldr x22,[sp, #0xb8]
7101ce2044  ldr x21,[x22, #0x8]
7101ce2048  cbz x21,0x7101ce2138
7101ce204c  ldrb w8,[x22, #0x10]
7101ce2050  cbz w8,0x7101ce2118
7101ce2054  ldr x8,[x22]
7101ce2058  ldr x23,[x8, #0x80]
7101ce205c  add x20,x8,#0x88
7101ce2060  cmp x23,x20
7101ce2064  b.eq 0x7101ce2118
7101ce2068  ldr x0,[x23, #0x68]
7101ce206c  ldr x8,[x0]
7101ce2070  ldr x8,[x8, #0x148]
7101ce2074  blr x8
7101ce2078  tbz w0,#0x0,0x7101ce20b8
7101ce207c  ldr x8,[x21]
7101ce2080  ldr x1,[x23, #0x68]
7101ce2084  mov x0,x21
7101ce2088  ldr x8,[x8, #0x120]
7101ce208c  blr x8
7101ce2090  tbz w0,#0x0,0x7101ce20b8
7101ce2094  ldr x0,[x23, #0x68]
7101ce2098  ldr x8,[x0]
7101ce209c  ldr x8,[x8, #0x178]
7101ce20a0  blr x8
7101ce20a4  ldr x0,[x23, #0x68]
7101ce20a8  ldr x8,[x0]
7101ce20ac  ldr x8,[x8, #0x140]
7101ce20b0  mov w1,wzr
7101ce20b4  blr x8
7101ce20b8  ldr x8,[x23, #0x8]
7101ce20bc  cbz x8,0x7101ce20d0
7101ce20c0  mov x23,x8
7101ce20c4  ldr x8,[x8]
7101ce20c8  cbnz x8,0x7101ce20c0
7101ce20cc  b 0x7101ce20fc
7101ce20d0  mov x8,x23
7101ce20d4  ldr x9,[x8, #0x10]!
7101ce20d8  ldr x10,[x9]
7101ce20dc  cmp x10,x23
7101ce20e0  b.eq 0x7101ce2108
7101ce20e4  ldr x9,[x8]
7101ce20e8  mov x8,x9
7101ce20ec  ldr x23,[x8, #0x10]!
7101ce20f0  ldr x10,[x23]
7101ce20f4  cmp x10,x9
7101ce20f8  b.ne 0x7101ce20e4
7101ce20fc  cmp x23,x20
7101ce2100  b.ne 0x7101ce2068
7101ce2104  b 0x7101ce2114
7101ce2108  mov x23,x9
7101ce210c  cmp x23,x20
7101ce2110  b.ne 0x7101ce2068
7101ce2114  ldr x21,[x22, #0x8]
7101ce2118  ldr x8,[x21]
7101ce211c  ldr x8,[x8, #0x188]
7101ce2120  mov x0,x21
7101ce2124  blr x8
7101ce2128  adrp x8,0x710523d000
7101ce212c  add x8,x8,#0x9e8
7101ce2130  stp x8,xzr,[sp, #0xb0]
7101ce2134  b 0x7101ce2148
7101ce2138  adrp x8,0x710523d000
7101ce213c  add x8,x8,#0x9e8
7101ce2140  stp x8,xzr,[sp, #0xb0]
7101ce2144  cbz x22,0x7101ce2150
7101ce2148  mov x0,x22
7101ce214c  bl 0x710392eb40
7101ce2150  adrp x1,0x71042f8000
7101ce2154  add x1,x1,#0x402
7101ce2158  add x8,sp,#0xb0
7101ce215c  mov x0,x27
7101ce2160  bl 0x71037780e0
7101ce2164  ldr x22,[sp, #0xb8]
7101ce2168  ldr x21,[x22, #0x8]
7101ce216c  cbz x21,0x7101ce225c
7101ce2170  ldrb w8,[x22, #0x10]
7101ce2174  cbz w8,0x7101ce223c
7101ce2178  ldr x8,[x22]
7101ce217c  ldr x23,[x8, #0x80]
7101ce2180  add x20,x8,#0x88
7101ce2184  cmp x23,x20
7101ce2188  b.eq 0x7101ce223c
7101ce218c  ldr x0,[x23, #0x68]
7101ce2190  ldr x8,[x0]
7101ce2194  ldr x8,[x8, #0x148]
7101ce2198  blr x8
7101ce219c  tbz w0,#0x0,0x7101ce21dc
7101ce21a0  ldr x8,[x21]
7101ce21a4  ldr x1,[x23, #0x68]
7101ce21a8  mov x0,x21
7101ce21ac  ldr x8,[x8, #0x120]
7101ce21b0  blr x8
7101ce21b4  tbz w0,#0x0,0x7101ce21dc
7101ce21b8  ldr x0,[x23, #0x68]
7101ce21bc  ldr x8,[x0]
7101ce21c0  ldr x8,[x8, #0x178]
7101ce21c4  blr x8
7101ce21c8  ldr x0,[x23, #0x68]
7101ce21cc  ldr x8,[x0]
7101ce21d0  ldr x8,[x8, #0x140]
7101ce21d4  mov w1,wzr
7101ce21d8  blr x8
7101ce21dc  ldr x8,[x23, #0x8]
7101ce21e0  cbz x8,0x7101ce21f4
7101ce21e4  mov x23,x8
7101ce21e8  ldr x8,[x8]
7101ce21ec  cbnz x8,0x7101ce21e4
7101ce21f0  b 0x7101ce2220
7101ce21f4  mov x8,x23
7101ce21f8  ldr x9,[x8, #0x10]!
7101ce21fc  ldr x10,[x9]
7101ce2200  cmp x10,x23
7101ce2204  b.eq 0x7101ce222c
7101ce2208  ldr x9,[x8]
7101ce220c  mov x8,x9
7101ce2210  ldr x23,[x8, #0x10]!
7101ce2214  ldr x10,[x23]
7101ce2218  cmp x10,x9
7101ce221c  b.ne 0x7101ce2208
7101ce2220  cmp x23,x20
7101ce2224  b.ne 0x7101ce218c
7101ce2228  b 0x7101ce2238
7101ce222c  mov x23,x9
7101ce2230  cmp x23,x20
7101ce2234  b.ne 0x7101ce218c
7101ce2238  ldr x21,[x22, #0x8]
7101ce223c  ldr x8,[x21]
7101ce2240  ldr x8,[x8, #0x188]
7101ce2244  mov x0,x21
7101ce2248  blr x8
7101ce224c  adrp x8,0x710523d000
7101ce2250  add x8,x8,#0x9e8
7101ce2254  stp x8,xzr,[sp, #0xb0]
7101ce2258  b 0x7101ce226c
7101ce225c  adrp x8,0x710523d000
7101ce2260  add x8,x8,#0x9e8
7101ce2264  stp x8,xzr,[sp, #0xb0]
7101ce2268  cbz x22,0x7101ce2274
7101ce226c  mov x0,x22
7101ce2270  bl 0x710392eb40
7101ce2274  ldr w22,[sp, #0x1c]
7101ce2278  cmp w22,#0x1
7101ce227c  add x8,sp,#0xb0
7101ce2280  strb wzr,[sp, #0xb8]
7101ce2284  str xzr,[sp, #0xb0]
7101ce2288  b.eq 0x7101ce22cc
7101ce228c  cmp w22,#0x2
7101ce2290  b.ne 0x7101ce2308
7101ce2294  mov x9,#0x4
7101ce2298  movk x9,#0x6e69, LSL #32
7101ce229c  movk x9,#0x725f, LSL #48
7101ce22a0  add x10,sp,#0xb0
7101ce22a4  strb wzr,[sp, #0xbc]
7101ce22a8  add x8,x8,#0x9
7101ce22ac  stur x9,[x10, #0x4]
7101ce22b0  mov w9,#0x69
7101ce22b4  mul w10,w26,w24
7101ce22b8  and w9,w9,#0xff
7101ce22bc  eor w26,w10,w9
7101ce22c0  ldrb w9,[x8], #0x1
7101ce22c4  cbnz w9,0x7101ce22b4
7101ce22c8  b 0x7101ce2300
7101ce22cc  mov x9,#0x4
7101ce22d0  movk x9,#0x6e69, LSL #32
7101ce22d4  movk x9,#0x6c5f, LSL #48
7101ce22d8  add x10,sp,#0xb0
7101ce22dc  strb wzr,[sp, #0xbc]
7101ce22e0  add x8,x8,#0x9
7101ce22e4  stur x9,[x10, #0x4]
7101ce22e8  mov w9,#0x69
7101ce22ec  mul w10,w26,w24
7101ce22f0  and w9,w9,#0xff
7101ce22f4  eor w26,w10,w9
7101ce22f8  ldrb w9,[x8], #0x1
7101ce22fc  cbnz w9,0x7101ce22ec
7101ce2300  mov w21,#0x1
7101ce2304  b 0x7101ce2348
7101ce2308  mov w9,#0x6e69
7101ce230c  mov x10,#0x6
7101ce2310  add x8,x8,#0x9
7101ce2314  strh w9,[sp, #0xbc]
7101ce2318  movk x10,#0x6f70, LSL #32
7101ce231c  movk x10,#0x5f70, LSL #48
7101ce2320  orr w9,wzr,#0x70
7101ce2324  add x11,sp,#0xb0
7101ce2328  strb wzr,[sp, #0xbe]
7101ce232c  stur x10,[x11, #0x4]
7101ce2330  mul w10,w26,w24
7101ce2334  and w9,w9,#0xff
7101ce2338  eor w26,w10,w9
7101ce233c  ldrb w9,[x8], #0x1
7101ce2340  cbnz w9,0x7101ce2330
7101ce2344  mov w21,wzr
7101ce2348  mov w0,#0x10
7101ce234c  orr w1,wzr,#0x18
7101ce2350  str w26,[sp, #0xb0]
7101ce2354  bl 0x710392e290
7101ce2358  cbnz x0,0x7101ce23a0
7101ce235c  adrp x8,0x7105332000
7101ce2360  ldr x0,[x8, #0xf00]
7101ce2364  cbz x0,0x7101ce239c
7101ce2368  orr w8,wzr,#0x18
7101ce236c  stur wzr,[x29, #-0x5c]
7101ce2370  sub x1,x29,#0x5c
7101ce2374  str x8,[sp, #0x60]
7101ce2378  ldr x8,[x0]
7101ce237c  ldr x8,[x8, #0x30]
7101ce2380  add x2,sp,#0x60
7101ce2384  blr x8
7101ce2388  tbz w0,#0x0,0x7101ce239c
7101ce238c  mov w0,#0x10
7101ce2390  orr w1,wzr,#0x18
7101ce2394  bl 0x710392e290
7101ce2398  cbnz x0,0x7101ce23a0
7101ce239c  mov x0,xzr
7101ce23a0  mov w8,#0x1
7101ce23a4  stp xzr,xzr,[x0]
7101ce23a8  strb w8,[x0, #0x10]
7101ce23ac  ldr x8,[x19, #0x330]
7101ce23b0  str x0,[x19, #0x330]
7101ce23b4  ldp w20,w24,[sp, #0xc]
7101ce23b8  cbz x8,0x7101ce23c4
7101ce23bc  mov x0,x8
7101ce23c0  bl 0x710392eb40
7101ce23c4  tbz w20,#0x0,0x7101ce23f4
7101ce23c8  adrp x8,0x710532f000
7101ce23cc  ldr x8,[x8, #0x8d0]
7101ce23d0  ldr x0,[x8, #0x8]
7101ce23d4  ldp x8,x9,[x0, #0x40]
7101ce23d8  sub x9,x9,x8
7101ce23dc  asr x9,x9,#0x3
7101ce23e0  cbz w21,0x7101ce2408
7101ce23e4  cmp x9,#0x9
7101ce23e8  b.cc 0x7101ce2420
7101ce23ec  ldr x21,[x8, #0x40]
7101ce23f0  b 0x7101ce2424
7101ce23f4  ldr x0,[x19, #0x248]
7101ce23f8  add x8,sp,#0xb0
7101ce23fc  add x1,x8,#0x8
7101ce2400  bl 0x7103778760
7101ce2404  b 0x7101ce25e4
7101ce2408  cmp x9,#0x6
7101ce240c  b.cc 0x7101ce2524
7101ce2410  ldr x21,[x8, #0x28]
7101ce2414  ldrb w8,[x0, #0x191]
7101ce2418  cbnz w8,0x7101ce25a0
7101ce241c  b 0x7101ce2530
7101ce2420  mov x21,xzr
7101ce2424  ldrb w8,[x0, #0x191]
7101ce2428  add x20,x19,#0x328
7101ce242c  cbnz w8,0x7101ce24a0
7101ce2430  mov w2,#0x4
7101ce2434  mov x1,x21
7101ce2438  bl 0x7103313f20
7101ce243c  tbz w0,#0x0,0x7101ce24a0
7101ce2440  add x0,sp,#0x70
7101ce2444  mov x1,x21
7101ce2448  bl 0x71024076d0
7101ce244c  ldr x8,[sp, #0x80]
7101ce2450  adrp x9,0x7104f73000
7101ce2454  add x9,x9,#0xd50
7101ce2458  str x9,[sp, #0x78]
7101ce245c  cbz x8,0x7101ce24c8
7101ce2460  adrp x8,0x7106dd5000
7101ce2464  ldrb w8,[x8, #0x3a8]
7101ce2468  cmp w8,#0x1
7101ce246c  b.ne 0x7101ce24c8
7101ce2470  adrp x9,0x7106dd5000
7101ce2474  ldr w8,[sp, #0x88]
7101ce2478  ldr w9,[x9, #0x3ac]
7101ce247c  cmp w8,w9
7101ce2480  b.ne 0x7101ce24c8
7101ce2484  ldr x8,[sp, #0x80]
7101ce2488  ldr wzr,[x8, #0x38]!
7101ce248c  ldaxr w9,[x8]
7101ce2490  sub w9,w9,#0x1
7101ce2494  stlxr w10,w9,[x8]
7101ce2498  cbnz w10,0x7101ce248c
7101ce249c  b 0x7101ce24c8
7101ce24a0  mov x8,#0x650000000000
7101ce24a4  movk x8,#0x87, LSL #48
7101ce24a8  strb wzr,[sp, #0x90]
7101ce24ac  stp x25,xzr,[sp, #0x98]
7101ce24b0  str wzr,[sp, #0x70]
7101ce24b4  str xzr,[sp, #0xa8]
7101ce24b8  stp xzr,x8,[sp, #0x80]
7101ce24bc  adrp x8,0x7104f73000
7101ce24c0  add x8,x8,#0xd50
7101ce24c4  str x8,[sp, #0x78]
7101ce24c8  add x8,sp,#0xb0
7101ce24cc  add x0,x19,#0x240
7101ce24d0  add x21,sp,#0x60
7101ce24d4  add x1,x8,#0x8
7101ce24d8  add x8,sp,#0x60
7101ce24dc  str xzr,[sp, #0x80]
7101ce24e0  strb wzr,[sp, #0x90]
7101ce24e4  bl 0x71037780e0
7101ce24e8  cmp x20,x21
7101ce24ec  b.eq 0x7101ce2508
7101ce24f0  ldr x8,[sp, #0x68]
7101ce24f4  str xzr,[sp, #0x68]
7101ce24f8  ldr x0,[x19, #0x330]
7101ce24fc  str x8,[x19, #0x330]
7101ce2500  cbz x0,0x7101ce2508
7101ce2504  bl 0x710392eb40
7101ce2508  ldr x0,[sp, #0x68]
7101ce250c  adrp x8,0x710523d000
7101ce2510  add x8,x8,#0x9e8
7101ce2514  stp x8,xzr,[sp, #0x60]
7101ce2518  cbz x0,0x7101ce25e4
7101ce251c  bl 0x710392eb40
7101ce2520  b 0x7101ce25e4
7101ce2524  mov x21,xzr
7101ce2528  ldrb w8,[x0, #0x191]
7101ce252c  cbnz w8,0x7101ce25a0
7101ce2530  mov w2,#0x4
7101ce2534  mov x1,x21
7101ce2538  bl 0x7103313f20
7101ce253c  tbz w0,#0x0,0x7101ce25a0
7101ce2540  add x0,sp,#0x20
7101ce2544  mov x1,x21
7101ce2548  bl 0x71024076d0
7101ce254c  ldr x8,[sp, #0x30]
7101ce2550  adrp x9,0x7104f73000
7101ce2554  add x9,x9,#0xd50
7101ce2558  str x9,[sp, #0x28]
7101ce255c  cbz x8,0x7101ce25c8
7101ce2560  adrp x8,0x7106dd5000
7101ce2564  ldrb w8,[x8, #0x3a8]
7101ce2568  cmp w8,#0x1
7101ce256c  b.ne 0x7101ce25c8
7101ce2570  adrp x9,0x7106dd5000
7101ce2574  ldr w8,[sp, #0x38]
7101ce2578  ldr w9,[x9, #0x3ac]
7101ce257c  cmp w8,w9
7101ce2580  b.ne 0x7101ce25c8
7101ce2584  ldr x8,[sp, #0x30]
7101ce2588  ldr wzr,[x8, #0x38]!
7101ce258c  ldaxr w9,[x8]
7101ce2590  sub w9,w9,#0x1
7101ce2594  stlxr w10,w9,[x8]
7101ce2598  cbnz w10,0x7101ce258c
7101ce259c  b 0x7101ce25c8
7101ce25a0  mov x8,#0x650000000000
7101ce25a4  movk x8,#0x87, LSL #48
7101ce25a8  strb wzr,[sp, #0x40]
7101ce25ac  stp x25,xzr,[sp, #0x48]
7101ce25b0  str wzr,[sp, #0x20]
7101ce25b4  str xzr,[sp, #0x58]
7101ce25b8  stp xzr,x8,[sp, #0x30]
7101ce25bc  adrp x8,0x7104f73000
7101ce25c0  add x8,x8,#0xd50
7101ce25c4  str x8,[sp, #0x28]
7101ce25c8  str xzr,[sp, #0x30]
7101ce25cc  strb wzr,[sp, #0x40]
7101ce25d0  ldr x0,[x19, #0x248]
7101ce25d4  fmov s0,0x3f800000
7101ce25d8  add x8,sp,#0xb0
7101ce25dc  add x1,x8,#0x8
7101ce25e0  bl 0x7103778300
7101ce25e4  mov x0,x28
7101ce25e8  ldr w28,[sp, #0x14]
7101ce25ec  mov w1,#0x1
7101ce25f0  mov w3,wzr
7101ce25f4  mov w2,w28
7101ce25f8  bl 0x7101cdfad0
7101ce25fc  ldr x1,[x19, #0x2a0]
7101ce2600  cbz x1,0x7101ce2620
7101ce2604  adrp x8,0x710532f000
7101ce2608  ldr x8,[x8, #0x8f8]
7101ce260c  ldr x0,[x8, #0x8]
7101ce2610  ldr w2,[x19, #0x298]
7101ce2614  bl 0x710334c7d0
7101ce2618  mov w2,w0
7101ce261c  b 0x7101ce2624
7101ce2620  orr w2,wzr,#0xffff
7101ce2624  ldr w23,[sp, #0x18]
7101ce2628  mov w1,#0x1
7101ce262c  mov x0,x27
7101ce2630  mov w3,wzr
7101ce2634  bl 0x7101cdfad0
7101ce2638  ldr x8,[x19, #0x2b0]
7101ce263c  ldr x10,[x8, #0x1c8]
7101ce2640  add x9,x8,#0x1d0
7101ce2644  b 0x7101ce264c
7101ce2648  mov x10,x12
7101ce264c  cmp x10,x9
7101ce2650  b.eq 0x7101ce26a0
7101ce2654  ldr x11,[x10, #0x8]
7101ce2658  str wzr,[x10, #0x28]
7101ce265c  cbz x11,0x7101ce2670
7101ce2660  mov x10,x11
7101ce2664  ldr x11,[x11]
7101ce2668  cbnz x11,0x7101ce2660
7101ce266c  b 0x7101ce264c
7101ce2670  mov x11,x10
7101ce2674  ldr x12,[x11, #0x10]!
7101ce2678  ldr x13,[x12]
7101ce267c  cmp x13,x10
7101ce2680  b.eq 0x7101ce2648
7101ce2684  ldr x12,[x11]
7101ce2688  mov x11,x12
7101ce268c  ldr x10,[x11, #0x10]!
7101ce2690  ldr x13,[x10]
7101ce2694  cmp x13,x12
7101ce2698  b.ne 0x7101ce2684
7101ce269c  b 0x7101ce264c
7101ce26a0  str x25,[x8, #0x258]
7101ce26a4  str x25,[x8, #0x250]
7101ce26a8  strb wzr,[x8, #0x280]
7101ce26ac  add x8,x8,#0x282
7101ce26b0  str wzr,[x8]
7101ce26b4  ldr x8,[x19, #0x2b8]
7101ce26b8  ldr x10,[x8, #0x1c8]
7101ce26bc  add x9,x8,#0x1d0
7101ce26c0  b 0x7101ce26c8
7101ce26c4  mov x10,x12
7101ce26c8  cmp x10,x9
7101ce26cc  b.eq 0x7101ce271c
7101ce26d0  ldr x11,[x10, #0x8]
7101ce26d4  str wzr,[x10, #0x28]
7101ce26d8  cbz x11,0x7101ce26ec
7101ce26dc  mov x10,x11
7101ce26e0  ldr x11,[x11]
7101ce26e4  cbnz x11,0x7101ce26dc
7101ce26e8  b 0x7101ce26c8
7101ce26ec  mov x11,x10
7101ce26f0  ldr x12,[x11, #0x10]!
7101ce26f4  ldr x13,[x12]
7101ce26f8  cmp x13,x10
7101ce26fc  b.eq 0x7101ce26c4
7101ce2700  ldr x12,[x11]
7101ce2704  mov x11,x12
7101ce2708  ldr x10,[x11, #0x10]!
7101ce270c  ldr x13,[x10]
7101ce2710  cmp x13,x12
7101ce2714  b.ne 0x7101ce2700
7101ce2718  b 0x7101ce26c8
7101ce271c  str x25,[x8, #0x258]
7101ce2720  str x25,[x8, #0x250]
7101ce2724  strb wzr,[x8, #0x280]
7101ce2728  add x8,x8,#0x282
7101ce272c  str wzr,[x8]
7101ce2730  tbz w24,#0x0,0x7101ce2914
7101ce2734  cmp w22,#0x2
7101ce2738  b.eq 0x7101ce279c
7101ce273c  cmp w22,#0x1
7101ce2740  b.ne 0x7101ce2914
7101ce2744  ldr x22,[x19, #0x2b8]
7101ce2748  ldr x26,[x22, #0x1e8]
7101ce274c  add x24,x22,#0x1e8
7101ce2750  cbnz x26,0x7101ce276c
7101ce2754  mov x26,x24
7101ce2758  ldr x21,[x24]
7101ce275c  cbnz x21,0x7101ce290c
7101ce2760  b 0x7101ce2804
7101ce2764  mov x24,x26
7101ce2768  mov x26,x8
7101ce276c  ldr w8,[x26, #0x1c]
7101ce2770  cmp w8,#0x1
7101ce2774  b.lt 0x7101ce2784
7101ce2778  ldr x8,[x26]
7101ce277c  cbnz x8,0x7101ce2764
7101ce2780  b 0x7101ce27f8
7101ce2784  tbz w8,#0x1f,0x7101ce27fc
7101ce2788  mov x24,x26
7101ce278c  ldr x8,[x24, #0x8]!
7101ce2790  cbz x8,0x7101ce27fc
7101ce2794  mov x26,x8
7101ce2798  b 0x7101ce276c
7101ce279c  ldr x22,[x19, #0x2b8]
7101ce27a0  ldr x26,[x22, #0x1e8]
7101ce27a4  add x24,x22,#0x1e8
7101ce27a8  cbnz x26,0x7101ce27c4
7101ce27ac  mov x26,x24
7101ce27b0  ldr x21,[x24]
7101ce27b4  cbnz x21,0x7101ce290c
7101ce27b8  b 0x7101ce2874
7101ce27bc  mov x24,x26
7101ce27c0  mov x26,x8
7101ce27c4  ldr w8,[x26, #0x1c]
7101ce27c8  cmp w8,#0x2
7101ce27cc  b.lt 0x7101ce27dc
7101ce27d0  ldr x8,[x26]
7101ce27d4  cbnz x8,0x7101ce27bc
7101ce27d8  b 0x7101ce2868
7101ce27dc  cmp w8,#0x1
7101ce27e0  b.eq 0x7101ce286c
7101ce27e4  mov x24,x26
7101ce27e8  ldr x8,[x24, #0x8]!
7101ce27ec  cbz x8,0x7101ce286c
7101ce27f0  mov x26,x8
7101ce27f4  b 0x7101ce27c4
7101ce27f8  mov x24,x26
7101ce27fc  ldr x21,[x24]
7101ce2800  cbnz x21,0x7101ce290c
7101ce2804  mov w1,#0x28
7101ce2808  mov w0,#0x10
7101ce280c  bl 0x710392e290
7101ce2810  mov x21,x0
7101ce2814  cbnz x0,0x7101ce2850
7101ce2818  adrp x8,0x7105332000
7101ce281c  ldr x0,[x8, #0xf00]
7101ce2820  mov w21,#0x28
7101ce2824  stur wzr,[x29, #-0x5c]
7101ce2828  str x21,[sp, #0x60]
7101ce282c  ldr x8,[x0]
7101ce2830  ldr x8,[x8, #0x30]
7101ce2834  sub x1,x29,#0x5c
7101ce2838  add x2,sp,#0x60
7101ce283c  blr x8
7101ce2840  mov w0,#0x10
7101ce2844  mov x1,x21
7101ce2848  bl 0x710392e290
7101ce284c  mov x21,x0
7101ce2850  mov w8,#0x32
7101ce2854  str wzr,[x21, #0x1c]
7101ce2858  str x26,[x21, #0x10]
7101ce285c  str x8,[x21, #0x20]
7101ce2860  stp xzr,xzr,[x21]
7101ce2864  b 0x7101ce28d8
7101ce2868  mov x24,x26
7101ce286c  ldr x21,[x24]
7101ce2870  cbnz x21,0x7101ce290c
7101ce2874  mov w1,#0x28
7101ce2878  mov w0,#0x10
7101ce287c  bl 0x710392e290
7101ce2880  mov x21,x0
7101ce2884  cbnz x0,0x7101ce28c0
7101ce2888  adrp x8,0x7105332000
7101ce288c  ldr x0,[x8, #0xf00]
7101ce2890  mov w21,#0x28
7101ce2894  stur wzr,[x29, #-0x5c]
7101ce2898  str x21,[sp, #0x60]
7101ce289c  ldr x8,[x0]
7101ce28a0  ldr x8,[x8, #0x30]
7101ce28a4  sub x1,x29,#0x5c
7101ce28a8  add x2,sp,#0x60
7101ce28ac  blr x8
7101ce28b0  mov w0,#0x10
7101ce28b4  mov x1,x21
7101ce28b8  bl 0x710392e290
7101ce28bc  mov x21,x0
7101ce28c0  mov w8,#0x1
7101ce28c4  str w8,[x21, #0x1c]
7101ce28c8  mov w8,#0x32
7101ce28cc  stp xzr,xzr,[x21]
7101ce28d0  str x8,[x21, #0x20]
7101ce28d4  str x26,[x21, #0x10]
7101ce28d8  str x21,[x24]
7101ce28dc  ldr x8,[x22, #0x1e0]
7101ce28e0  ldr x8,[x8]
7101ce28e4  cbz x8,0x7101ce28f4
7101ce28e8  str x8,[x22, #0x1e0]
7101ce28ec  ldr x1,[x24]
7101ce28f0  b 0x7101ce28f8
7101ce28f4  mov x1,x21
7101ce28f8  ldr x0,[x22, #0x1e8]
7101ce28fc  bl 0x71003e59f0
7101ce2900  ldr x8,[x22, #0x1f0]
7101ce2904  add x8,x8,#0x1
7101ce2908  str x8,[x22, #0x1f0]
7101ce290c  mov w8,#0x1
7101ce2910  strb w8,[x21, #0x25]
7101ce2914  ldr x8,[x19, #0x2c0]
7101ce2918  ldr x10,[x8, #0x1c8]
7101ce291c  add x9,x8,#0x1d0
7101ce2920  b 0x7101ce2928
7101ce2924  mov x10,x12
7101ce2928  cmp x10,x9
7101ce292c  b.eq 0x7101ce297c
7101ce2930  ldr x11,[x10, #0x8]
7101ce2934  str wzr,[x10, #0x28]
7101ce2938  cbz x11,0x7101ce294c
7101ce293c  mov x10,x11
7101ce2940  ldr x11,[x11]
7101ce2944  cbnz x11,0x7101ce293c
7101ce2948  b 0x7101ce2928
7101ce294c  mov x11,x10
7101ce2950  ldr x12,[x11, #0x10]!
7101ce2954  ldr x13,[x12]
7101ce2958  cmp x13,x10
7101ce295c  b.eq 0x7101ce2924
7101ce2960  ldr x12,[x11]
7101ce2964  mov x11,x12
7101ce2968  ldr x10,[x11, #0x10]!
7101ce296c  ldr x13,[x10]
7101ce2970  cmp x13,x12
7101ce2974  b.ne 0x7101ce2960
7101ce2978  b 0x7101ce2928
7101ce297c  str x25,[x8, #0x258]
7101ce2980  str x25,[x8, #0x250]
7101ce2984  strb wzr,[x8, #0x280]
7101ce2988  add x8,x8,#0x282
7101ce298c  str wzr,[x8]
7101ce2990  ldr x8,[x19, #0x2c8]
7101ce2994  ldr x10,[x8, #0x1c8]
7101ce2998  add x9,x8,#0x1d0
7101ce299c  b 0x7101ce29a4
7101ce29a0  mov x10,x12
7101ce29a4  cmp x10,x9
7101ce29a8  b.eq 0x7101ce29f8
7101ce29ac  ldr x11,[x10, #0x8]
7101ce29b0  str wzr,[x10, #0x28]
7101ce29b4  cbz x11,0x7101ce29c8
7101ce29b8  mov x10,x11
7101ce29bc  ldr x11,[x11]
7101ce29c0  cbnz x11,0x7101ce29b8
7101ce29c4  b 0x7101ce29a4
7101ce29c8  mov x11,x10
7101ce29cc  ldr x12,[x11, #0x10]!
7101ce29d0  ldr x13,[x12]
7101ce29d4  cmp x13,x10
7101ce29d8  b.eq 0x7101ce29a0
7101ce29dc  ldr x12,[x11]
7101ce29e0  mov x11,x12
7101ce29e4  ldr x10,[x11, #0x10]!
7101ce29e8  ldr x13,[x10]
7101ce29ec  cmp x13,x12
7101ce29f0  b.ne 0x7101ce29dc
7101ce29f4  b 0x7101ce29a4
7101ce29f8  str x25,[x8, #0x258]
7101ce29fc  str x25,[x8, #0x250]
7101ce2a00  add x22,x19,#0x2d0
7101ce2a04  strb wzr,[x8, #0x280]
7101ce2a08  add x8,x8,#0x282
7101ce2a0c  str wzr,[x8]
7101ce2a10  ldr x8,[x19, #0x2d0]
7101ce2a14  ldr x10,[x8, #0x1c8]
7101ce2a18  add x9,x8,#0x1d0
7101ce2a1c  b 0x7101ce2a24
7101ce2a20  mov x10,x12
7101ce2a24  cmp x10,x9
7101ce2a28  b.eq 0x7101ce2a78
7101ce2a2c  ldr x11,[x10, #0x8]
7101ce2a30  str wzr,[x10, #0x28]
7101ce2a34  cbz x11,0x7101ce2a48
7101ce2a38  mov x10,x11
7101ce2a3c  ldr x11,[x11]
7101ce2a40  cbnz x11,0x7101ce2a38
7101ce2a44  b 0x7101ce2a24
7101ce2a48  mov x11,x10
7101ce2a4c  ldr x12,[x11, #0x10]!
7101ce2a50  ldr x13,[x12]
7101ce2a54  cmp x13,x10
7101ce2a58  b.eq 0x7101ce2a20
7101ce2a5c  ldr x12,[x11]
7101ce2a60  mov x11,x12
7101ce2a64  ldr x10,[x11, #0x10]!
7101ce2a68  ldr x13,[x10]
7101ce2a6c  cmp x13,x12
7101ce2a70  b.ne 0x7101ce2a5c
7101ce2a74  b 0x7101ce2a24
7101ce2a78  str x25,[x8, #0x258]
7101ce2a7c  str x25,[x8, #0x250]
7101ce2a80  add x0,sp,#0x60
7101ce2a84  strb wzr,[x8, #0x280]
7101ce2a88  add x8,x8,#0x282
7101ce2a8c  orr w2,wzr,#0x7
7101ce2a90  str wzr,[x8]
7101ce2a94  ldr x1,[x22]
7101ce2a98  bl 0x7103771d60
7101ce2a9c  ldr x21,[sp, #0x68]
7101ce2aa0  ldr x0,[x21]
7101ce2aa4  cbz x0,0x7101ce2abc
7101ce2aa8  ldr x8,[x0]
7101ce2aac  ldr x8,[x8, #0x2f0]
7101ce2ab0  mov w1,wzr
7101ce2ab4  mov w2,wzr
7101ce2ab8  blr x8
7101ce2abc  adrp x8,0x710523d000
7101ce2ac0  add x8,x8,#0x9c8
7101ce2ac4  stp x8,xzr,[sp, #0x60]
7101ce2ac8  cbz x21,0x7101ce2ad4
7101ce2acc  mov x0,x21
7101ce2ad0  bl 0x710392eb40
7101ce2ad4  ldr x8,[x19, #0x2d8]
7101ce2ad8  ldr x10,[x8, #0x1c8]
7101ce2adc  add x9,x8,#0x1d0
7101ce2ae0  b 0x7101ce2ae8
7101ce2ae4  mov x10,x12
7101ce2ae8  cmp x10,x9
7101ce2aec  b.eq 0x7101ce2b3c
7101ce2af0  ldr x11,[x10, #0x8]
7101ce2af4  str wzr,[x10, #0x28]
7101ce2af8  cbz x11,0x7101ce2b0c
7101ce2afc  mov x10,x11
7101ce2b00  ldr x11,[x11]
7101ce2b04  cbnz x11,0x7101ce2afc
7101ce2b08  b 0x7101ce2ae8
7101ce2b0c  mov x11,x10
7101ce2b10  ldr x12,[x11, #0x10]!
7101ce2b14  ldr x13,[x12]
7101ce2b18  cmp x13,x10
7101ce2b1c  b.eq 0x7101ce2ae4
7101ce2b20  ldr x12,[x11]
7101ce2b24  mov x11,x12
7101ce2b28  ldr x10,[x11, #0x10]!
7101ce2b2c  ldr x13,[x10]
7101ce2b30  cmp x13,x12
7101ce2b34  b.ne 0x7101ce2b20
7101ce2b38  b 0x7101ce2ae8
7101ce2b3c  str x25,[x8, #0x258]
7101ce2b40  str x25,[x8, #0x250]
7101ce2b44  sub w20,w28,#0x2
7101ce2b48  strb wzr,[x8, #0x280]
7101ce2b4c  add x8,x8,#0x282
7101ce2b50  and w21,w28,#0xffff
7101ce2b54  str wzr,[x8]
7101ce2b58  ldr x0,[x19, #0x2c0]
7101ce2b5c  and w8,w20,#0xffff
7101ce2b60  cmp w8,#0x3
7101ce2b64  ldr x8,[x0]
7101ce2b68  ldr x8,[x8, #0x60]
7101ce2b6c  cset w1,cc
7101ce2b70  blr x8
7101ce2b74  ldr x0,[x19, #0x2c8]
7101ce2b78  ldr x8,[x0]
7101ce2b7c  ldr x8,[x8, #0x60]
7101ce2b80  cmp w21,#0x2
7101ce2b84  cset w1,cc
7101ce2b88  blr x8
7101ce2b8c  ldr x0,[x19, #0x2d0]
7101ce2b90  orr w21,w28,#0x2
7101ce2b94  and w8,w21,#0xffff
7101ce2b98  cmp w8,#0x2
7101ce2b9c  cset w1,eq
7101ce2ba0  ldr x8,[x0]
7101ce2ba4  ldr x8,[x8, #0x60]
7101ce2ba8  blr x8
7101ce2bac  cmp w23,#0x7
7101ce2bb0  b.hi 0x7101ce2cdc
7101ce2bb4  mov w8,w23
7101ce2bb8  adrp x9,0x71044fa000
7101ce2bbc  add x9,x9,#0x80
7101ce2bc0  ldrsw x8,[x9, x8, LSL #0x2]
7101ce2bc4  add x8,x8,x9
7101ce2bc8  add x0,x19,#0x2b0
7101ce2bcc  br x8
7101ce2bd0  and w8,w28,#0xffff
7101ce2bd4  cmp w8,#0x2
7101ce2bd8  b.cs 0x7101ce2cdc
7101ce2bdc  mov w1,w23
7101ce2be0  mov w2,wzr
7101ce2be4  bl 0x7103771a80
7101ce2be8  sub w8,w23,#0x3
7101ce2bec  cmp w8,#0x2
7101ce2bf0  b.cs 0x7101ce2c64
7101ce2bf4  add x21,x19,#0x2c8
7101ce2bf8  ldr x8,[x21]
7101ce2bfc  ldr x9,[x8, #0x1b8]
7101ce2c00  cbz x9,0x7101ce2c70
7101ce2c04  add x10,x8,#0x1b8
7101ce2c08  mov x8,x10
7101ce2c0c  ldr w11,[x9, #0x20]
7101ce2c10  cmp w11,w23
7101ce2c14  cset w11,lt
7101ce2c18  csel x8,x8,x9,lt
7101ce2c1c  ldr x9,[x9, w11, UXTW #0x3]
7101ce2c20  cbnz x9,0x7101ce2c0c
7101ce2c24  cmp x8,x10
7101ce2c28  b.eq 0x7101ce2c70
7101ce2c2c  ldr w9,[x8, #0x20]
7101ce2c30  cmp w9,w23
7101ce2c34  b.gt 0x7101ce2c70
7101ce2c38  ldr x0,[x8, #0x28]
7101ce2c3c  cbz x0,0x7101ce2c70
7101ce2c40  ldr x8,[x0]
7101ce2c44  ldr x8,[x8, #0x200]
7101ce2c48  blr x8
7101ce2c4c  tbz w0,#0x0,0x7101ce2c70
7101ce2c50  mov w2,#0x1
7101ce2c54  mov x0,x21
7101ce2c58  mov w1,w23
7101ce2c5c  bl 0x7103771a80
7101ce2c60  b 0x7101ce2ce8
7101ce2c64  cmp w23,#0x5
7101ce2c68  b.ne 0x7101ce2ce8
7101ce2c6c  b 0x7101ce2e54
7101ce2c70  orr w1,wzr,#0x3
7101ce2c74  mov w2,#0x1
7101ce2c78  mov x0,x21
7101ce2c7c  bl 0x7103771a80
7101ce2c80  b 0x7101ce2ce8
7101ce2c84  and w8,w20,#0xffff
7101ce2c88  cmp w8,#0x2
7101ce2c8c  b.hi 0x7101ce2cdc
7101ce2c90  mov w1,#0x2
7101ce2c94  mov w2,wzr
7101ce2c98  mov w20,#0x2
7101ce2c9c  bl 0x7103771a80
7101ce2ca0  b 0x7101ce2cec
7101ce2ca4  and w8,w21,#0xffff
7101ce2ca8  cmp w8,#0x2
7101ce2cac  b.ne 0x7101ce2cdc
7101ce2cb0  orr w1,wzr,#0x7
7101ce2cb4  mov w2,wzr
7101ce2cb8  bl 0x7103771a80
7101ce2cbc  orr w1,wzr,#0x7
7101ce2cc0  mov w2,#0x1
7101ce2cc4  mov x0,x22
7101ce2cc8  bl 0x7103771a80
7101ce2ccc  b 0x7101ce2ce8
7101ce2cd0  and w8,w28,#0xffff
7101ce2cd4  cmp w8,#0x3
7101ce2cd8  b.ne 0x7101ce2e48
7101ce2cdc  mov x0,x19
7101ce2ce0  mov w1,w28
7101ce2ce4  bl 0x7101ce19a0
7101ce2ce8  mov w20,#0x2
7101ce2cec  ldrsw x8,[x19, #0x224]
7101ce2cf0  cmp w8,#0x13
7101ce2cf4  b.cs 0x7101ce2eb0
7101ce2cf8  add x8,x19,x8, LSL #0x2
7101ce2cfc  str w20,[x8, #0x1d8]
7101ce2d00  ldrb w8,[x19, #0x304]
7101ce2d04  cbz w8,0x7101ce2d30
7101ce2d08  ldr w8,[x19, #0x224]
7101ce2d0c  cmp w8,#0x11
7101ce2d10  b.gt 0x7101ce2d30
7101ce2d14  add w8,w8,#0x1
7101ce2d18  cmp w8,#0x13
7101ce2d1c  str w8,[x19, #0x224]
7101ce2d20  b.cs 0x7101ce2eb0
7101ce2d24  add x8,x19,w8, SXTW  #0x2
7101ce2d28  orr w9,wzr,#0x6
7101ce2d2c  str w9,[x8, #0x1d8]
7101ce2d30  adrp x8,0x7105314000
7101ce2d34  add x8,x8,#0x4d8
7101ce2d38  ldarb w8,[x8]
7101ce2d3c  tbz w8,#0x0,0x7101ce2e70
7101ce2d40  adrp x8,0x71052e8000
7101ce2d44  ldrb w8,[x8, #0xb49]
7101ce2d48  cbz w8,0x7101ce2d74
7101ce2d4c  ldr w8,[x19, #0x224]
7101ce2d50  cmp w8,#0x11
7101ce2d54  b.gt 0x7101ce2d74
7101ce2d58  add w8,w8,#0x1
7101ce2d5c  cmp w8,#0x13
7101ce2d60  str w8,[x19, #0x224]
7101ce2d64  b.cs 0x7101ce2eb0
7101ce2d68  add x8,x19,w8, SXTW  #0x2
7101ce2d6c  mov w9,#0x14
7101ce2d70  str w9,[x8, #0x1d8]
7101ce2d74  ldr x8,[x19, #0x330]
7101ce2d78  ldr x9,[x8]
7101ce2d7c  cbz x9,0x7101ce2dc0
7101ce2d80  ldr x8,[x8, #0x8]
7101ce2d84  cbz x8,0x7101ce2dc0
7101ce2d88  ldr x8,[x19, #0x2e0]
7101ce2d8c  cbz x8,0x7101ce2d98
7101ce2d90  ldr x8,[x8, #0x8]
7101ce2d94  strb wzr,[x8, #0x4aa]
7101ce2d98  ldr w8,[x19, #0x224]
7101ce2d9c  cmp w8,#0x11
7101ce2da0  b.gt 0x7101ce2dc0
7101ce2da4  add w8,w8,#0x1
7101ce2da8  cmp w8,#0x13
7101ce2dac  str w8,[x19, #0x224]
7101ce2db0  b.cs 0x7101ce2eb0
7101ce2db4  add x8,x19,w8, SXTW  #0x2
7101ce2db8  mov w9,#0x1
7101ce2dbc  str w9,[x8, #0x1d8]
7101ce2dc0  adrp x8,0x7105325000
7101ce2dc4  ldr x8,[x8, #0xca0]
7101ce2dc8  ldr x19,[x8, #0x8]
7101ce2dcc  mov x0,x19
7101ce2dd0  strb wzr,[x19, #0xd8]
7101ce2dd4  bl 0x7101cc4b30
7101ce2dd8  mov x0,x19
7101ce2ddc  bl 0x7101cc4970
7101ce2de0  tbz w0,#0x0,0x7101ce2e08
7101ce2de4  adrp x8,0x710532f000
7101ce2de8  ldr x8,[x8, #0x820]
7101ce2dec  ldr x8,[x8, #0x8]
7101ce2df0  ldr x8,[x8, #0x110]
7101ce2df4  ldr x8,[x8, #0x80]
7101ce2df8  ldrb w8,[x8, #0x14d]
7101ce2dfc  cbnz w8,0x7101ce2e08
7101ce2e00  mov x0,x19
7101ce2e04  bl 0x7101cc4b30
7101ce2e08  ldr x8,[x19, #0xb8]
7101ce2e0c  str x8,[x19, #0xc0]
7101ce2e10  adrp x8,0x710532f000
7101ce2e14  ldr x8,[x8, #0x820]
7101ce2e18  ldr x8,[x8, #0x8]
7101ce2e1c  ldr x8,[x8, #0x110]
7101ce2e20  ldr x8,[x8, #0x80]
7101ce2e24  strb wzr,[x8, #0x14a]
7101ce2e28  add sp,sp,#0x1e0
7101ce2e2c  ldp x29,x30,[sp, #0x50]
7101ce2e30  ldp x20,x19,[sp, #0x40]
7101ce2e34  ldp x22,x21,[sp, #0x30]
7101ce2e38  ldp x24,x23,[sp, #0x20]
7101ce2e3c  ldp x26,x25,[sp, #0x10]
7101ce2e40  ldp x28,x27,[sp], #0x60
7101ce2e44  ret
7101ce2e48  mov w1,#0x5
7101ce2e4c  mov w2,wzr
7101ce2e50  bl 0x7103771a80
7101ce2e54  ldr w1,[sp, #0x8]
7101ce2e58  cmp w1,#0x2
7101ce2e5c  b.hi 0x7101ce2ce8
7101ce2e60  ldr x0,[sp]
7101ce2e64  bl 0x71032d6120
7101ce2e68  mov w20,#0xb
7101ce2e6c  b 0x7101ce2cec
7101ce2e70  adrp x0,0x7105314000
7101ce2e74  add x0,x0,#0x4d8
7101ce2e78  bl 0x71039c06b0
7101ce2e7c  cbz w0,0x7101ce2d40
7101ce2e80  bl 0x7101764000
7101ce2e84  adrp x0,0x7101763000
7101ce2e88  add x0,x0,#0xc40
7101ce2e8c  adrp x1,0x71052c5000
7101ce2e90  add x1,x1,#0x180
7101ce2e94  adrp x2,0x7104f17000
7101ce2e98  add x2,x2,#0x0
7101ce2e9c  bl 0x71000001c0
7101ce2ea0  adrp x0,0x7105314000
7101ce2ea4  add x0,x0,#0x4d8
7101ce2ea8  bl 0x71039c06c0
7101ce2eac  b 0x7101ce2d40
7101ce2eb0  bl 0x71039c2650
