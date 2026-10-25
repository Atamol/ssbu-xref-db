// addr:      71025b1bc0
// offset:    0x25b1bc0
// name:      FUN_71025b1bc0
// mangled:   
// size:      4840

71025b1bc0  sub sp,sp,#0x1f0
71025b1bc4  stp x28,x27,[sp, #0x190]
71025b1bc8  stp x26,x25,[sp, #0x1a0]
71025b1bcc  stp x24,x23,[sp, #0x1b0]
71025b1bd0  stp x22,x21,[sp, #0x1c0]
71025b1bd4  stp x20,x19,[sp, #0x1d0]
71025b1bd8  stp x29,x30,[sp, #0x1e0]
71025b1bdc  add x29,sp,#0x1e0
71025b1be0  stp xzr,xzr,[x29, #-0xb0]
71025b1be4  mov x9,x1
71025b1be8  stur xzr,[x29, #-0xb8]
71025b1bec  ldr x8,[x9, #0x50]!
71025b1bf0  str x9,[sp, #0x30]
71025b1bf4  ldr x9,[x9, #0x8]
71025b1bf8  sub x9,x9,x8
71025b1bfc  mov x20,x2
71025b1c00  mov x21,x1
71025b1c04  mov x25,x0
71025b1c08  mov w23,#0x9dc5
71025b1c0c  movk w23,#0x811c, LSL #16
71025b1c10  asr x9,x9,#0x5
71025b1c14  cbz w9,0x71025b1c44
71025b1c18  mov w10,wzr
71025b1c1c  mov w10,w10
71025b1c20  cmp x9,x10
71025b1c24  b.ls 0x71025b2ea0
71025b1c28  lsl x11,x10,#0x5
71025b1c2c  ldrb w11,[x8, x11, LSL ]
71025b1c30  cmp w11,#0xc
71025b1c34  b.eq 0x71025b1c60
71025b1c38  add w10,w10,#0x1
71025b1c3c  cmp w10,w9
71025b1c40  b.cc 0x71025b1c1c
71025b1c44  ldrb w8,[x21, #0x32]
71025b1c48  sub w8,w8,#0x1
71025b1c4c  cmp w8,#0x8
71025b1c50  b.hi 0x71025b2498
71025b1c54  and w8,w8,#0xff
71025b1c58  add w23,w8,#0x1
71025b1c5c  b 0x71025b1c64
71025b1c60  mov w23,#0x8
71025b1c64  sub w8,w23,#0x1
71025b1c68  mov x9,#0xff0000000000
71025b1c6c  cmp w8,#0x8
71025b1c70  movk x9,#0x71ff, LSL #48
71025b1c74  strb wzr,[sp, #0x90]
71025b1c78  str xzr,[sp, #0x88]
71025b1c7c  strb wzr,[sp, #0xd8]
71025b1c80  str xzr,[sp, #0xd0]
71025b1c84  strh wzr,[sp, #0x118]
71025b1c88  str x9,[sp, #0x120]
71025b1c8c  b.hi 0x71025b2490
71025b1c90  adrp x9,0x7104506000
71025b1c94  add x9,x9,#0x29c
71025b1c98  ldrsw x8,[x9, x8, LSL #0x2]
71025b1c9c  add x8,x8,x9
71025b1ca0  br x8
71025b1ca4  mov x8,#0x6e6d
71025b1ca8  movk x8,#0x5f75, LSL #16
71025b1cac  movk x8,#0x7073, LSL #32
71025b1cb0  movk x8,#0x7269, LSL #48
71025b1cb4  mov x9,#0x7469
71025b1cb8  movk x9,#0x5f73, LSL #16
71025b1cbc  str x8,[sp, #0x90]
71025b1cc0  add x8,sp,#0x88
71025b1cc4  movk x9,#0x6863, LSL #32
71025b1cc8  movk x9,#0x6c61, LSL #48
71025b1ccc  str x9,[sp, #0x98]
71025b1cd0  add x9,x8,#0x9
71025b1cd4  mov w8,#0x656c
71025b1cd8  strh w8,[sp, #0xa0]
71025b1cdc  mov x8,#0x676e
71025b1ce0  movk x8,#0x6265, LSL #16
71025b1ce4  movk x8,#0x616f, LSL #32
71025b1ce8  movk x8,#0x6472, LSL #48
71025b1cec  stur x8,[sp, #0xa2]
71025b1cf0  mov w8,#0x675f
71025b1cf4  movk w8,#0x6d69, LSL #16
71025b1cf8  stur w8,[sp, #0xaa]
71025b1cfc  mov w8,#0x696d
71025b1d00  strh w8,[sp, #0xae]
71025b1d04  mov x8,#0x6b63
71025b1d08  movk x8,#0x705f, LSL #16
71025b1d0c  movk x8,#0x696f, LSL #32
71025b1d10  movk x8,#0x6f73, LSL #48
71025b1d14  str x8,[sp, #0xb0]
71025b1d18  mov x8,#0x5f6e
71025b1d1c  movk x8,#0x6c66, LSL #16
71025b1d20  movk x8,#0x6f6f, LSL #32
71025b1d24  movk x8,#0x72, LSL #48
71025b1d28  str x8,[sp, #0xb8]
71025b1d2c  mov w12,#0x2f
71025b1d30  str w12,[sp, #0x8c]
71025b1d34  mov w11,#0x6d
71025b1d38  mov w10,#0x89
71025b1d3c  mov w8,#0x9dc5
71025b1d40  movk w8,#0x811c, LSL #16
71025b1d44  mul w8,w8,w10
71025b1d48  and w11,w11,#0xff
71025b1d4c  eor w8,w8,w11
71025b1d50  ldrb w11,[x9], #0x1
71025b1d54  cbnz w11,0x71025b1d44
71025b1d58  b 0x71025b2308
71025b1d5c  mov x8,#0x6e6d
71025b1d60  movk x8,#0x5f75, LSL #16
71025b1d64  movk x8,#0x7073, LSL #32
71025b1d68  movk x8,#0x7269, LSL #48
71025b1d6c  mov x9,#0x7469
71025b1d70  movk x9,#0x5f73, LSL #16
71025b1d74  str x8,[sp, #0x90]
71025b1d78  add x8,sp,#0x88
71025b1d7c  movk x9,#0x6863, LSL #32
71025b1d80  movk x9,#0x6c61, LSL #48
71025b1d84  str x9,[sp, #0x98]
71025b1d88  add x9,x8,#0x9
71025b1d8c  mov w8,#0x656c
71025b1d90  strh w8,[sp, #0xa0]
71025b1d94  mov x8,#0x676e
71025b1d98  movk x8,#0x6265, LSL #16
71025b1d9c  movk x8,#0x616f, LSL #32
71025b1da0  movk x8,#0x6472, LSL #48
71025b1da4  stur x8,[sp, #0xa2]
71025b1da8  mov w8,#0x675f
71025b1dac  movk w8,#0x6d69, LSL #16
71025b1db0  stur w8,[sp, #0xaa]
71025b1db4  mov w8,#0x696d
71025b1db8  strh w8,[sp, #0xae]
71025b1dbc  mov x8,#0x6b63
71025b1dc0  movk x8,#0x645f, LSL #16
71025b1dc4  movk x8,#0x6d61, LSL #32
71025b1dc8  movk x8,#0x6761, LSL #48
71025b1dcc  str x8,[sp, #0xb0]
71025b1dd0  mov x8,#0x5f65
71025b1dd4  movk x8,#0x6c66, LSL #16
71025b1dd8  movk x8,#0x6f6f, LSL #32
71025b1ddc  movk x8,#0x72, LSL #48
71025b1de0  str x8,[sp, #0xb8]
71025b1de4  mov w12,#0x2f
71025b1de8  str w12,[sp, #0x8c]
71025b1dec  mov w11,#0x6d
71025b1df0  mov w10,#0x89
71025b1df4  mov w8,#0x9dc5
71025b1df8  movk w8,#0x811c, LSL #16
71025b1dfc  mul w8,w8,w10
71025b1e00  and w11,w11,#0xff
71025b1e04  eor w8,w8,w11
71025b1e08  ldrb w11,[x9], #0x1
71025b1e0c  cbnz w11,0x71025b1dfc
71025b1e10  b 0x71025b2308
71025b1e14  mov x8,#0x6e6d
71025b1e18  movk x8,#0x5f75, LSL #16
71025b1e1c  movk x8,#0x7073, LSL #32
71025b1e20  movk x8,#0x7269, LSL #48
71025b1e24  str x8,[sp, #0x90]
71025b1e28  mov x8,#0x7469
71025b1e2c  movk x8,#0x5f73, LSL #16
71025b1e30  movk x8,#0x6863, LSL #32
71025b1e34  movk x8,#0x6c61, LSL #48
71025b1e38  str x8,[sp, #0x98]
71025b1e3c  mov w8,#0x656c
71025b1e40  strh w8,[sp, #0xa0]
71025b1e44  mov x8,#0x676e
71025b1e48  movk x8,#0x6265, LSL #16
71025b1e4c  movk x8,#0x616f, LSL #32
71025b1e50  movk x8,#0x6472, LSL #48
71025b1e54  stur x8,[sp, #0xa2]
71025b1e58  mov w8,#0x675f
71025b1e5c  movk w8,#0x6d69, LSL #16
71025b1e60  stur w8,[sp, #0xaa]
71025b1e64  mov w8,#0x696d
71025b1e68  strh w8,[sp, #0xae]
71025b1e6c  mov x8,#0x6b63
71025b1e70  movk x8,#0x655f, LSL #16
71025b1e74  movk x8,#0x656c, LSL #32
71025b1e78  movk x8,#0x7463, LSL #48
71025b1e7c  mov w9,#0x31
71025b1e80  str w9,[sp, #0x8c]
71025b1e84  ldrb w9,[sp, #0x90]
71025b1e88  str x8,[sp, #0xb0]
71025b1e8c  mov x8,#0x6972
71025b1e90  movk x8,#0x5f63, LSL #16
71025b1e94  movk x8,#0x6c66, LSL #32
71025b1e98  movk x8,#0x6f6f, LSL #48
71025b1e9c  str x8,[sp, #0xb8]
71025b1ea0  mov w8,#0x72
71025b1ea4  strh w8,[sp, #0xc0]
71025b1ea8  mov w8,#0x9dc5
71025b1eac  movk w8,#0x811c, LSL #16
71025b1eb0  cbz w9,0x71025b2308
71025b1eb4  add x8,sp,#0x88
71025b1eb8  add x10,x8,#0x9
71025b1ebc  mov w11,#0x89
71025b1ec0  mov w8,#0x9dc5
71025b1ec4  movk w8,#0x811c, LSL #16
71025b1ec8  mul w8,w8,w11
71025b1ecc  and w9,w9,#0xff
71025b1ed0  eor w8,w8,w9
71025b1ed4  ldrb w9,[x10], #0x1
71025b1ed8  cbnz w9,0x71025b1ec8
71025b1edc  b 0x71025b2308
71025b1ee0  mov x8,#0x6e6d
71025b1ee4  movk x8,#0x5f75, LSL #16
71025b1ee8  movk x8,#0x7073, LSL #32
71025b1eec  movk x8,#0x7269, LSL #48
71025b1ef0  mov x9,#0x7469
71025b1ef4  movk x9,#0x5f73, LSL #16
71025b1ef8  str x8,[sp, #0x90]
71025b1efc  add x8,sp,#0x88
71025b1f00  strb wzr,[sp, #0xbe]
71025b1f04  movk x9,#0x6863, LSL #32
71025b1f08  movk x9,#0x6c61, LSL #48
71025b1f0c  str x9,[sp, #0x98]
71025b1f10  add x9,x8,#0x9
71025b1f14  mov w8,#0x656c
71025b1f18  strh w8,[sp, #0xa0]
71025b1f1c  mov x8,#0x676e
71025b1f20  movk x8,#0x6265, LSL #16
71025b1f24  movk x8,#0x616f, LSL #32
71025b1f28  movk x8,#0x6472, LSL #48
71025b1f2c  stur x8,[sp, #0xa2]
71025b1f30  mov w8,#0x675f
71025b1f34  movk w8,#0x6d69, LSL #16
71025b1f38  stur w8,[sp, #0xaa]
71025b1f3c  mov w8,#0x696d
71025b1f40  strh w8,[sp, #0xae]
71025b1f44  mov x8,#0x6b63
71025b1f48  movk x8,#0x735f, LSL #16
71025b1f4c  movk x8,#0x656c, LSL #32
71025b1f50  movk x8,#0x7065, LSL #48
71025b1f54  str x8,[sp, #0xb0]
71025b1f58  mov w8,#0x665f
71025b1f5c  movk w8,#0x6f6c, LSL #16
71025b1f60  str w8,[sp, #0xb8]
71025b1f64  mov w8,#0x726f
71025b1f68  strh w8,[sp, #0xbc]
71025b1f6c  mov w8,#0x2e
71025b1f70  mov w11,#0x6d
71025b1f74  str w8,[sp, #0x8c]
71025b1f78  mov w10,#0x89
71025b1f7c  mov w8,#0x9dc5
71025b1f80  movk w8,#0x811c, LSL #16
71025b1f84  mul w8,w8,w10
71025b1f88  and w11,w11,#0xff
71025b1f8c  eor w8,w8,w11
71025b1f90  ldrb w11,[x9], #0x1
71025b1f94  cbnz w11,0x71025b1f84
71025b1f98  b 0x71025b2308
71025b1f9c  mov x8,#0x6e6d
71025b1fa0  movk x8,#0x5f75, LSL #16
71025b1fa4  movk x8,#0x7073, LSL #32
71025b1fa8  movk x8,#0x7269, LSL #48
71025b1fac  mov x9,#0x7469
71025b1fb0  movk x9,#0x5f73, LSL #16
71025b1fb4  str x8,[sp, #0x90]
71025b1fb8  add x8,sp,#0x88
71025b1fbc  strb wzr,[sp, #0xbc]
71025b1fc0  movk x9,#0x6863, LSL #32
71025b1fc4  movk x9,#0x6c61, LSL #48
71025b1fc8  str x9,[sp, #0x98]
71025b1fcc  add x9,x8,#0x9
71025b1fd0  mov w8,#0x656c
71025b1fd4  strh w8,[sp, #0xa0]
71025b1fd8  mov x8,#0x676e
71025b1fdc  movk x8,#0x6265, LSL #16
71025b1fe0  movk x8,#0x616f, LSL #32
71025b1fe4  movk x8,#0x6472, LSL #48
71025b1fe8  stur x8,[sp, #0xa2]
71025b1fec  mov w8,#0x675f
71025b1ff0  movk w8,#0x6d69, LSL #16
71025b1ff4  stur w8,[sp, #0xaa]
71025b1ff8  mov w8,#0x696d
71025b1ffc  strh w8,[sp, #0xae]
71025b2000  mov x8,#0x6b63
71025b2004  movk x8,#0x695f, LSL #16
71025b2008  movk x8,#0x6563, LSL #32
71025b200c  movk x8,#0x665f, LSL #48
71025b2010  str x8,[sp, #0xb0]
71025b2014  mov w8,#0x6f6c
71025b2018  movk w8,#0x726f, LSL #16
71025b201c  str w8,[sp, #0xb8]
71025b2020  mov w8,#0x2c
71025b2024  str w8,[sp, #0x8c]
71025b2028  mov w11,#0x6d
71025b202c  mov w10,#0x89
71025b2030  mov w8,#0x9dc5
71025b2034  movk w8,#0x811c, LSL #16
71025b2038  mul w8,w8,w10
71025b203c  and w11,w11,#0xff
71025b2040  eor w8,w8,w11
71025b2044  ldrb w11,[x9], #0x1
71025b2048  cbnz w11,0x71025b2038
71025b204c  b 0x71025b2308
71025b2050  mov x8,#0x6e6d
71025b2054  movk x8,#0x5f75, LSL #16
71025b2058  movk x8,#0x7073, LSL #32
71025b205c  movk x8,#0x7269, LSL #48
71025b2060  str x8,[sp, #0x90]
71025b2064  mov x8,#0x7469
71025b2068  movk x8,#0x5f73, LSL #16
71025b206c  movk x8,#0x6863, LSL #32
71025b2070  movk x8,#0x6c61, LSL #48
71025b2074  str x8,[sp, #0x98]
71025b2078  mov w8,#0x656c
71025b207c  strh w8,[sp, #0xa0]
71025b2080  mov x8,#0x676e
71025b2084  movk x8,#0x6265, LSL #16
71025b2088  movk x8,#0x616f, LSL #32
71025b208c  movk x8,#0x6472, LSL #48
71025b2090  stur x8,[sp, #0xa2]
71025b2094  mov w8,#0x675f
71025b2098  movk w8,#0x6d69, LSL #16
71025b209c  stur w8,[sp, #0xaa]
71025b20a0  mov w8,#0x696d
71025b20a4  strh w8,[sp, #0xae]
71025b20a8  mov x8,#0x6b63
71025b20ac  movk x8,#0x775f, LSL #16
71025b20b0  add x9,sp,#0x88
71025b20b4  add x9,x9,#0x9
71025b20b8  mov w12,#0x27
71025b20bc  str w12,[sp, #0x8c]
71025b20c0  mov w11,#0x6d
71025b20c4  movk x8,#0x6e69, LSL #32
71025b20c8  movk x8,#0x64, LSL #48
71025b20cc  str x8,[sp, #0xb0]
71025b20d0  mov w10,#0x89
71025b20d4  mov w8,#0x9dc5
71025b20d8  movk w8,#0x811c, LSL #16
71025b20dc  mul w8,w8,w10
71025b20e0  and w11,w11,#0xff
71025b20e4  eor w8,w8,w11
71025b20e8  ldrb w11,[x9], #0x1
71025b20ec  cbnz w11,0x71025b20dc
71025b20f0  b 0x71025b2308
71025b20f4  mov x8,#0x6e6d
71025b20f8  movk x8,#0x5f75, LSL #16
71025b20fc  movk x8,#0x7073, LSL #32
71025b2100  movk x8,#0x7269, LSL #48
71025b2104  mov x9,#0x7469
71025b2108  movk x9,#0x5f73, LSL #16
71025b210c  str x8,[sp, #0x90]
71025b2110  add x8,sp,#0x88
71025b2114  movk x9,#0x6863, LSL #32
71025b2118  movk x9,#0x6c61, LSL #48
71025b211c  str x9,[sp, #0x98]
71025b2120  add x9,x8,#0x9
71025b2124  mov w8,#0x656c
71025b2128  strh w8,[sp, #0xa0]
71025b212c  mov x8,#0x676e
71025b2130  movk x8,#0x6265, LSL #16
71025b2134  movk x8,#0x616f, LSL #32
71025b2138  movk x8,#0x6472, LSL #48
71025b213c  stur x8,[sp, #0xa2]
71025b2140  mov w8,#0x675f
71025b2144  movk w8,#0x6d69, LSL #16
71025b2148  stur w8,[sp, #0xaa]
71025b214c  mov w8,#0x696d
71025b2150  strh w8,[sp, #0xae]
71025b2154  mov x8,#0x6b63
71025b2158  movk x8,#0x735f, LSL #16
71025b215c  movk x8,#0x6974, LSL #32
71025b2160  movk x8,#0x6b63, LSL #48
71025b2164  str x8,[sp, #0xb0]
71025b2168  mov x8,#0x5f79
71025b216c  movk x8,#0x6c66, LSL #16
71025b2170  movk x8,#0x6f6f, LSL #32
71025b2174  movk x8,#0x72, LSL #48
71025b2178  str x8,[sp, #0xb8]
71025b217c  mov w12,#0x2f
71025b2180  str w12,[sp, #0x8c]
71025b2184  mov w11,#0x6d
71025b2188  mov w10,#0x89
71025b218c  mov w8,#0x9dc5
71025b2190  movk w8,#0x811c, LSL #16
71025b2194  mul w8,w8,w10
71025b2198  and w11,w11,#0xff
71025b219c  eor w8,w8,w11
71025b21a0  ldrb w11,[x9], #0x1
71025b21a4  cbnz w11,0x71025b2194
71025b21a8  b 0x71025b2308
71025b21ac  mov x8,#0x6e6d
71025b21b0  movk x8,#0x5f75, LSL #16
71025b21b4  movk x8,#0x7073, LSL #32
71025b21b8  movk x8,#0x7269, LSL #48
71025b21bc  mov x9,#0x7469
71025b21c0  movk x9,#0x5f73, LSL #16
71025b21c4  str x8,[sp, #0x90]
71025b21c8  add x8,sp,#0x88
71025b21cc  strb wzr,[sp, #0xbe]
71025b21d0  movk x9,#0x6863, LSL #32
71025b21d4  movk x9,#0x6c61, LSL #48
71025b21d8  str x9,[sp, #0x98]
71025b21dc  add x9,x8,#0x9
71025b21e0  mov w8,#0x656c
71025b21e4  strh w8,[sp, #0xa0]
71025b21e8  mov x8,#0x676e
71025b21ec  movk x8,#0x6265, LSL #16
71025b21f0  movk x8,#0x616f, LSL #32
71025b21f4  movk x8,#0x6472, LSL #48
71025b21f8  stur x8,[sp, #0xa2]
71025b21fc  mov w8,#0x675f
71025b2200  movk w8,#0x6d69, LSL #16
71025b2204  stur w8,[sp, #0xaa]
71025b2208  mov w8,#0x696d
71025b220c  strh w8,[sp, #0xae]
71025b2210  mov x8,#0x6b63
71025b2214  movk x8,#0x705f, LSL #16
71025b2218  movk x8,#0x696f, LSL #32
71025b221c  movk x8,#0x6f73, LSL #48
71025b2220  str x8,[sp, #0xb0]
71025b2224  mov w8,#0x5f6e
71025b2228  movk w8,#0x696d, LSL #16
71025b222c  str w8,[sp, #0xb8]
71025b2230  mov w8,#0x7473
71025b2234  strh w8,[sp, #0xbc]
71025b2238  mov w8,#0x2e
71025b223c  mov w11,#0x6d
71025b2240  str w8,[sp, #0x8c]
71025b2244  mov w10,#0x89
71025b2248  mov w8,#0x9dc5
71025b224c  movk w8,#0x811c, LSL #16
71025b2250  mul w8,w8,w10
71025b2254  and w11,w11,#0xff
71025b2258  eor w8,w8,w11
71025b225c  ldrb w11,[x9], #0x1
71025b2260  cbnz w11,0x71025b2250
71025b2264  b 0x71025b2308
71025b2268  mov x8,#0x6e6d
71025b226c  movk x8,#0x5f75, LSL #16
71025b2270  movk x8,#0x7073, LSL #32
71025b2274  movk x8,#0x7269, LSL #48
71025b2278  str x8,[sp, #0x90]
71025b227c  mov x8,#0x7469
71025b2280  movk x8,#0x5f73, LSL #16
71025b2284  movk x8,#0x6863, LSL #32
71025b2288  movk x8,#0x6c61, LSL #48
71025b228c  str x8,[sp, #0x98]
71025b2290  mov w8,#0x656c
71025b2294  strh w8,[sp, #0xa0]
71025b2298  mov x8,#0x676e
71025b229c  movk x8,#0x6265, LSL #16
71025b22a0  movk x8,#0x616f, LSL #32
71025b22a4  movk x8,#0x6472, LSL #48
71025b22a8  stur x8,[sp, #0xa2]
71025b22ac  mov w8,#0x675f
71025b22b0  movk w8,#0x6d69, LSL #16
71025b22b4  stur w8,[sp, #0xaa]
71025b22b8  mov w8,#0x696d
71025b22bc  strh w8,[sp, #0xae]
71025b22c0  mov x8,#0x6b63
71025b22c4  movk x8,#0x6d5f, LSL #16
71025b22c8  add x9,sp,#0x88
71025b22cc  add x9,x9,#0x9
71025b22d0  mov w12,#0x27
71025b22d4  str w12,[sp, #0x8c]
71025b22d8  mov w11,#0x6d
71025b22dc  movk x8,#0x7369, LSL #32
71025b22e0  movk x8,#0x74, LSL #48
71025b22e4  str x8,[sp, #0xb0]
71025b22e8  mov w10,#0x89
71025b22ec  mov w8,#0x9dc5
71025b22f0  movk w8,#0x811c, LSL #16
71025b22f4  mul w8,w8,w10
71025b22f8  and w11,w11,#0xff
71025b22fc  eor w8,w8,w11
71025b2300  ldrb w11,[x9], #0x1
71025b2304  cbnz w11,0x71025b22f4
71025b2308  str w8,[sp, #0x88]
71025b230c  mov w8,#0x1
71025b2310  mov w0,w23
71025b2314  strb w8,[sp, #0x118]
71025b2318  bl 0x71025b2eb0
71025b231c  str x0,[sp, #0x120]
71025b2320  cbz x20,0x71025b2338
71025b2324  mov w0,w23
71025b2328  mov x1,x20
71025b232c  bl 0x71025cfbc0
71025b2330  and w8,w0,#0x1
71025b2334  strb w8,[sp, #0x119]
71025b2338  ldp x8,x9,[x29, #-0xb0]
71025b233c  cmp x8,x9
71025b2340  b.eq 0x71025b23a0
71025b2344  add x9,sp,#0x88
71025b2348  add x11,sp,#0x88
71025b234c  mov x10,xzr
71025b2350  add x9,x9,#0x90
71025b2354  add x11,x11,#0x8
71025b2358  str wzr,[x8]
71025b235c  mov w16,#0x9dc5
71025b2360  movk w16,#0x811c, LSL #16
71025b2364  b 0x71025b2370
71025b2368  add x10,x10,#0x2
71025b236c  strb w12,[x13, #0x9]
71025b2370  add x12,x11,x10
71025b2374  ldrb w14,[x12]
71025b2378  cbz w14,0x71025b23b4
71025b237c  add w15,w10,#0x1
71025b2380  add x13,x8,x10
71025b2384  cmp w15,#0x3f
71025b2388  strb w14,[x13, #0x8]
71025b238c  b.cs 0x71025b23b0
71025b2390  ldrb w12,[x12, #0x1]
71025b2394  cbnz w12,0x71025b2368
71025b2398  add x10,x10,#0x1
71025b239c  b 0x71025b23b4
71025b23a0  sub x0,x29,#0xb8
71025b23a4  add x1,sp,#0x88
71025b23a8  bl 0x71025b2ee0
71025b23ac  b 0x71025b2490
71025b23b0  add w10,w10,#0x1
71025b23b4  add x11,x8,#0x8
71025b23b8  strb wzr,[x11, w10, UXTW ]
71025b23bc  str w10,[x8, #0x4]
71025b23c0  ldrb w10,[x8, #0x8]
71025b23c4  mov w12,w16
71025b23c8  cbz w10,0x71025b23ec
71025b23cc  add x11,x8,#0x9
71025b23d0  mov w13,#0x89
71025b23d4  mov w12,w16
71025b23d8  mul w12,w12,w13
71025b23dc  and w10,w10,#0xff
71025b23e0  eor w12,w12,w10
71025b23e4  ldrb w10,[x11], #0x1
71025b23e8  cbnz w10,0x71025b23d8
71025b23ec  add x11,sp,#0x88
71025b23f0  mov x10,xzr
71025b23f4  str w12,[x8]
71025b23f8  add x11,x11,#0x50
71025b23fc  str wzr,[x8, #0x48]
71025b2400  b 0x71025b240c
71025b2404  add x10,x10,#0x2
71025b2408  strb w12,[x13, #0x51]
71025b240c  add x12,x11,x10
71025b2410  ldrb w14,[x12]
71025b2414  cbz w14,0x71025b2440
71025b2418  add w15,w10,#0x1
71025b241c  add x13,x8,x10
71025b2420  cmp w15,#0x3f
71025b2424  strb w14,[x13, #0x50]
71025b2428  b.cs 0x71025b243c
71025b242c  ldrb w12,[x12, #0x1]
71025b2430  cbnz w12,0x71025b2404
71025b2434  add x10,x10,#0x1
71025b2438  b 0x71025b2440
71025b243c  add w10,w10,#0x1
71025b2440  add x11,x8,#0x50
71025b2444  strb wzr,[x11, w10, UXTW ]
71025b2448  str w10,[x8, #0x4c]
71025b244c  ldrb w10,[x8, #0x50]
71025b2450  mov w12,w16
71025b2454  cbz w10,0x71025b2478
71025b2458  add x11,x8,#0x51
71025b245c  mov w13,#0x89
71025b2460  mov w12,w16
71025b2464  mul w12,w12,w13
71025b2468  and w10,w10,#0xff
71025b246c  eor w12,w12,w10
71025b2470  ldrb w10,[x11], #0x1
71025b2474  cbnz w10,0x71025b2464
71025b2478  str w12,[x8, #0x48]
71025b247c  ldp x10,x9,[x9]
71025b2480  stp x10,x9,[x8, #0x90]
71025b2484  ldur x8,[x29, #-0xb0]
71025b2488  add x8,x8,#0xa0
71025b248c  stur x8,[x29, #-0xb0]
71025b2490  mov w23,#0x9dc5
71025b2494  movk w23,#0x811c, LSL #16
71025b2498  ldr x8,[x21, #0x40]
71025b249c  mov x10,#0xcf
71025b24a0  movk x10,#0x7f90, LSL #16
71025b24a4  movk x10,#0x4, LSL #32
71025b24a8  and x9,x8,#0xffffffffff
71025b24ac  cmp x9,x10
71025b24b0  b.eq 0x71025b2940
71025b24b4  adrp x9,0x7105329000
71025b24b8  ldr x9,[x9, #0xfa0]
71025b24bc  ldr x9,[x9]
71025b24c0  ldr x10,[x9, #0x6b0]
71025b24c4  ldr x9,[x9, #0x6a8]
71025b24c8  subs x10,x10,x9
71025b24cc  b.eq 0x71025b2940
71025b24d0  mov x12,xzr
71025b24d4  asr x11,x10,#0x6
71025b24d8  mov w10,#0xffffffff
71025b24dc  mov w13,#0x1
71025b24e0  lsl x12,x12,#0x6
71025b24e4  ldr x12,[x9, x12, LSL #0x0]
71025b24e8  eor x12,x12,x8
71025b24ec  sub w14,w13,#0x1
71025b24f0  tst x12,#0xffffffffff
71025b24f4  mov w12,w13
71025b24f8  add w13,w13,#0x1
71025b24fc  csel w10,w14,w10,eq
71025b2500  cmp x11,x12
71025b2504  b.hi 0x71025b24e0
71025b2508  cmn w10,#0x1
71025b250c  b.eq 0x71025b2940
71025b2510  sxtw x8,w10
71025b2514  add x8,x9,x8, LSL #0x6
71025b2518  ldrb w9,[x8, #0x8]
71025b251c  cbz w9,0x71025b2940
71025b2520  mov w11,#0x7469
71025b2524  strh w11,[sp, #0x98]
71025b2528  mov x11,#0x5f73
71025b252c  movk x11,#0x6863, LSL #16
71025b2530  movk x11,#0x6c61, LSL #32
71025b2534  movk x11,#0x656c, LSL #48
71025b2538  stur x11,[sp, #0x9a]
71025b253c  mov x11,#0x676e
71025b2540  movk x11,#0x6265, LSL #16
71025b2544  movk x11,#0x616f, LSL #32
71025b2548  movk x11,#0x6472, LSL #48
71025b254c  stur x11,[sp, #0xa2]
71025b2550  mov w11,#0x695f
71025b2554  movk w11,#0x6574, LSL #16
71025b2558  mov x9,#0x6e00
71025b255c  movk x9,#0x5f75, LSL #16
71025b2560  strb wzr,[sp, #0xd8]
71025b2564  str xzr,[sp, #0xd0]
71025b2568  stur w11,[sp, #0xaa]
71025b256c  mov w11,#0x5f6d
71025b2570  movk x9,#0x7073, LSL #32
71025b2574  movk x9,#0x7269, LSL #48
71025b2578  mov x10,#0xff0000000000
71025b257c  strh w11,[sp, #0xae]
71025b2580  mov w11,#0x6966
71025b2584  movk w11,#0x6978, LSL #16
71025b2588  str w11,[sp, #0xb0]
71025b258c  stp xzr,x9,[sp, #0x88]
71025b2590  add x9,sp,#0x88
71025b2594  mov w13,w23
71025b2598  movk x10,#0x71ff, LSL #48
71025b259c  mov w11,#0x676e
71025b25a0  mov w12,#0x26
71025b25a4  add x23,x9,#0x90
71025b25a8  str x10,[sp, #0x120]
71025b25ac  mov w10,#0x6d
71025b25b0  strh w11,[sp, #0xb4]
71025b25b4  mov w11,#0x9
71025b25b8  mov w26,#0x89
71025b25bc  str w12,[sp, #0x8c]
71025b25c0  mov w12,w13
71025b25c4  strh wzr,[sp, #0x118]
71025b25c8  strb w10,[sp, #0x90]
71025b25cc  strb wzr,[sp, #0xb6]
71025b25d0  mul w12,w12,w26
71025b25d4  and w10,w10,#0xff
71025b25d8  eor w12,w12,w10
71025b25dc  ldrb w10,[x9, x11, LSL ]
71025b25e0  add x11,x11,#0x1
71025b25e4  cbnz w10,0x71025b25d0
71025b25e8  str w12,[sp, #0x88]
71025b25ec  mov x9,x8
71025b25f0  ldrb w10,[x9, #0x10]!
71025b25f4  tbnz w10,#0x0,0x71025b2684
71025b25f8  lsr x10,x10,#0x1
71025b25fc  cbz x10,0x71025b268c
71025b2600  mov x10,#0x616e
71025b2604  movk x10,#0x5f6d, LSL #16
71025b2608  movk x10,#0x7073, LSL #32
71025b260c  movk x10,#0x7269, LSL #48
71025b2610  add x11,sp,#0x88
71025b2614  strb wzr,[sp, #0xee]
71025b2618  str x10,[sp, #0xd8]
71025b261c  mov x12,#0x7469
71025b2620  movk x12,#0x5f73, LSL #16
71025b2624  add x10,x11,#0x51
71025b2628  mov w11,#0x6b5f
71025b262c  strh w11,[sp, #0xe8]
71025b2630  movk x12,#0x7572, LSL #32
71025b2634  movk x12,#0x656c, LSL #48
71025b2638  str x12,[sp, #0xe0]
71025b263c  mov w11,#0x6e69
71025b2640  movk w11,#0x5f64, LSL #16
71025b2644  stur w11,[sp, #0xea]
71025b2648  mov w13,#0x16
71025b264c  mov w11,#0x6e
71025b2650  str w13,[sp, #0xd4]
71025b2654  mov w12,#0x9dc5
71025b2658  movk w12,#0x811c, LSL #16
71025b265c  mul w12,w12,w26
71025b2660  and w11,w11,#0xff
71025b2664  eor w12,w12,w11
71025b2668  ldrb w11,[x10], #0x1
71025b266c  cbnz w11,0x71025b265c
71025b2670  str w12,[sp, #0xd0]
71025b2674  ldrb w10,[x9]
71025b2678  tbnz w10,#0x0,0x71025b2720
71025b267c  add x8,x9,#0x1
71025b2680  b 0x71025b2728
71025b2684  ldr x10,[x8, #0x18]
71025b2688  cbnz x10,0x71025b2600
71025b268c  ldp x9,x8,[x8, #0x28]
71025b2690  sub x8,x8,x9
71025b2694  lsr x8,x8,#0x3
71025b2698  cmp w8,#0x1
71025b269c  b.lt 0x71025b27e8
71025b26a0  adrp x8,0x710532f000
71025b26a4  ldr x8,[x8, #0x730]
71025b26a8  ldr x8,[x8, #0x8]
71025b26ac  ldr x2,[x9]
71025b26b0  sub x0,x29,#0xa0
71025b26b4  sub x19,x29,#0xa0
71025b26b8  ldr x1,[x8, #0x268]
71025b26bc  bl 0x710327fc30
71025b26c0  add x1,x19,#0x8
71025b26c4  adrp x0,0x710436a000
71025b26c8  add x0,x0,#0xc69
71025b26cc  add x8,sp,#0x40
71025b26d0  add x19,sp,#0x40
71025b26d4  bl 0x71003a4ca0
71025b26d8  mov x8,xzr
71025b26dc  add x9,x19,#0x8
71025b26e0  add x10,sp,#0x88
71025b26e4  b 0x71025b26f0
71025b26e8  add x8,x8,#0x2
71025b26ec  strb w11,[x12, #0x51]
71025b26f0  add x11,x9,x8
71025b26f4  ldrb w13,[x11]
71025b26f8  cbz w13,0x71025b27a4
71025b26fc  add w14,w8,#0x1
71025b2700  add x12,x10,x8
71025b2704  cmp w14,#0x3f
71025b2708  strb w13,[x12, #0x50]
71025b270c  b.cs 0x71025b27a0
71025b2710  ldrb w11,[x11, #0x1]
71025b2714  cbnz w11,0x71025b26e8
71025b2718  add x8,x8,#0x1
71025b271c  b 0x71025b27a4
71025b2720  ldr x8,[x8, #0x20]
71025b2724  cbz x8,0x71025b27e8
71025b2728  mov x9,xzr
71025b272c  add x10,sp,#0x88
71025b2730  ldrb w11,[x8, x9, LSL ]
71025b2734  cbz w11,0x71025b275c
71025b2738  ldrsw x12,[sp, #0xd4]
71025b273c  add w13,w12,#0x1
71025b2740  add x12,x10,x12
71025b2744  add x9,x9,#0x1
71025b2748  str w13,[sp, #0xd4]
71025b274c  strb w11,[x12, #0x50]
71025b2750  add w11,w9,#0x15
71025b2754  cmp w11,#0x3e
71025b2758  b.cc 0x71025b2730
71025b275c  ldrsw x8,[sp, #0xd4]
71025b2760  add x9,sp,#0x88
71025b2764  add x8,x9,x8
71025b2768  strb wzr,[x8, #0x50]
71025b276c  ldrb w8,[sp, #0xd8]
71025b2770  mov w10,#0x9dc5
71025b2774  movk w10,#0x811c, LSL #16
71025b2778  cbz w8,0x71025b27e4
71025b277c  add x9,x9,#0x51
71025b2780  mov w10,#0x9dc5
71025b2784  movk w10,#0x811c, LSL #16
71025b2788  mul w10,w10,w26
71025b278c  and w8,w8,#0xff
71025b2790  eor w10,w10,w8
71025b2794  ldrb w8,[x9], #0x1
71025b2798  cbnz w8,0x71025b2788
71025b279c  b 0x71025b27e4
71025b27a0  add w8,w8,#0x1
71025b27a4  add x9,sp,#0x88
71025b27a8  add x10,x9,#0x50
71025b27ac  strb wzr,[x10, w8, UXTW ]
71025b27b0  str w8,[sp, #0xd4]
71025b27b4  ldrb w8,[sp, #0xd8]
71025b27b8  mov w10,#0x9dc5
71025b27bc  movk w10,#0x811c, LSL #16
71025b27c0  cbz w8,0x71025b27e4
71025b27c4  add x9,x9,#0x51
71025b27c8  mov w10,#0x9dc5
71025b27cc  movk w10,#0x811c, LSL #16
71025b27d0  mul w10,w10,w26
71025b27d4  and w8,w8,#0xff
71025b27d8  eor w10,w10,w8
71025b27dc  ldrb w8,[x9], #0x1
71025b27e0  cbnz w8,0x71025b27d0
71025b27e4  str w10,[sp, #0xd0]
71025b27e8  ldp x8,x9,[x29, #-0xb0]
71025b27ec  cmp x8,x9
71025b27f0  b.eq 0x71025b2840
71025b27f4  add x10,sp,#0x88
71025b27f8  mov x9,xzr
71025b27fc  str wzr,[x8]
71025b2800  add x10,x10,#0x8
71025b2804  b 0x71025b2810
71025b2808  add x9,x9,#0x2
71025b280c  strb w11,[x12, #0x9]
71025b2810  add x11,x10,x9
71025b2814  ldrb w13,[x11]
71025b2818  cbz w13,0x71025b2854
71025b281c  add w14,w9,#0x1
71025b2820  add x12,x8,x9
71025b2824  cmp w14,#0x3f
71025b2828  strb w13,[x12, #0x8]
71025b282c  b.cs 0x71025b2850
71025b2830  ldrb w11,[x11, #0x1]
71025b2834  cbnz w11,0x71025b2808
71025b2838  add x9,x9,#0x1
71025b283c  b 0x71025b2854
71025b2840  sub x0,x29,#0xb8
71025b2844  add x1,sp,#0x88
71025b2848  bl 0x71025b2ee0
71025b284c  b 0x71025b2938
71025b2850  add w9,w9,#0x1
71025b2854  add x10,x8,#0x8
71025b2858  strb wzr,[x10, w9, UXTW ]
71025b285c  str w9,[x8, #0x4]
71025b2860  ldrb w9,[x8, #0x8]
71025b2864  mov w11,#0x9dc5
71025b2868  movk w11,#0x811c, LSL #16
71025b286c  cbz w9,0x71025b2890
71025b2870  add x10,x8,#0x9
71025b2874  mov w11,#0x9dc5
71025b2878  movk w11,#0x811c, LSL #16
71025b287c  mul w11,w11,w26
71025b2880  and w9,w9,#0xff
71025b2884  eor w11,w11,w9
71025b2888  ldrb w9,[x10], #0x1
71025b288c  cbnz w9,0x71025b287c
71025b2890  add x10,sp,#0x88
71025b2894  mov x9,xzr
71025b2898  str w11,[x8]
71025b289c  add x10,x10,#0x50
71025b28a0  str wzr,[x8, #0x48]
71025b28a4  b 0x71025b28b0
71025b28a8  add x9,x9,#0x2
71025b28ac  strb w11,[x12, #0x51]
71025b28b0  add x11,x10,x9
71025b28b4  ldrb w13,[x11]
71025b28b8  cbz w13,0x71025b28e4
71025b28bc  add w14,w9,#0x1
71025b28c0  add x12,x8,x9
71025b28c4  cmp w14,#0x3f
71025b28c8  strb w13,[x12, #0x50]
71025b28cc  b.cs 0x71025b28e0
71025b28d0  ldrb w11,[x11, #0x1]
71025b28d4  cbnz w11,0x71025b28a8
71025b28d8  add x9,x9,#0x1
71025b28dc  b 0x71025b28e4
71025b28e0  add w9,w9,#0x1
71025b28e4  add x10,x8,#0x50
71025b28e8  strb wzr,[x10, w9, UXTW ]
71025b28ec  str w9,[x8, #0x4c]
71025b28f0  ldrb w9,[x8, #0x50]
71025b28f4  mov w11,#0x9dc5
71025b28f8  movk w11,#0x811c, LSL #16
71025b28fc  cbz w9,0x71025b2920
71025b2900  add x10,x8,#0x51
71025b2904  mov w11,#0x9dc5
71025b2908  movk w11,#0x811c, LSL #16
71025b290c  mul w11,w11,w26
71025b2910  and w9,w9,#0xff
71025b2914  eor w11,w11,w9
71025b2918  ldrb w9,[x10], #0x1
71025b291c  cbnz w9,0x71025b290c
71025b2920  str w11,[x8, #0x48]
71025b2924  ldp x9,x10,[x23]
71025b2928  stp x9,x10,[x8, #0x90]
71025b292c  ldur x8,[x29, #-0xb0]
71025b2930  add x8,x8,#0xa0
71025b2934  stur x8,[x29, #-0xb0]
71025b2938  mov w23,#0x9dc5
71025b293c  movk w23,#0x811c, LSL #16
71025b2940  ldp x8,x9,[x21, #0x50]
71025b2944  cmp x9,x8
71025b2948  b.ne 0x71025b295c
71025b294c  sub x8,x29,#0xb8
71025b2950  add x8,x8,#0x8
71025b2954  str x8,[sp, #0x8]
71025b2958  b 0x71025b2c54
71025b295c  add x28,sp,#0x88
71025b2960  add x9,x28,#0x90
71025b2964  str x9,[sp, #0x28]
71025b2968  sub x9,x29,#0xb8
71025b296c  str x20,[sp, #0x38]
71025b2970  str x25,[sp, #0x20]
71025b2974  mov x27,xzr
71025b2978  add x25,x28,#0x48
71025b297c  add x22,x28,#0x9
71025b2980  add x9,x9,#0x8
71025b2984  add x20,x28,#0x50
71025b2988  mov w24,#0x89
71025b298c  str x9,[sp, #0x8]
71025b2990  lsl x19,x27,#0x5
71025b2994  ldrb w0,[x8, x19, LSL ]
71025b2998  cmp w0,#0xc
71025b299c  b.eq 0x71025b2c38
71025b29a0  add x8,x8,x27, LSL #0x5
71025b29a4  ldr x1,[x8, #0x8]
71025b29a8  bl 0x71025b32d0
71025b29ac  cbz x0,0x71025b2c38
71025b29b0  mov x9,#0xff0000000000
71025b29b4  mov x8,xzr
71025b29b8  strb wzr,[sp, #0x90]
71025b29bc  movk x9,#0x71ff, LSL #48
71025b29c0  str xzr,[sp, #0x88]
71025b29c4  strb wzr,[x25, #0x8]
71025b29c8  str xzr,[x25]
71025b29cc  strh wzr,[sp, #0x118]
71025b29d0  str x9,[sp, #0x120]
71025b29d4  add x10,x0,x8
71025b29d8  ldrb w11,[x10]
71025b29dc  cbz w11,0x71025b2a1c
71025b29e0  add x9,x28,x8
71025b29e4  strb w11,[x9, #0x8]
71025b29e8  ldrb w11,[x10, #0x1]
71025b29ec  cbz w11,0x71025b2a10
71025b29f0  strb w11,[x9, #0x9]
71025b29f4  ldrb w10,[x10, #0x2]
71025b29f8  cbz w10,0x71025b2a18
71025b29fc  add x8,x8,#0x3
71025b2a00  cmp w8,#0x3f
71025b2a04  strb w10,[x9, #0xa]
71025b2a08  b.cc 0x71025b29d4
71025b2a0c  b 0x71025b2a1c
71025b2a10  add x8,x8,#0x1
71025b2a14  b 0x71025b2a1c
71025b2a18  add x8,x8,#0x2
71025b2a1c  add x9,x28,#0x8
71025b2a20  strb wzr,[x9, w8, UXTW ]
71025b2a24  ldrb w26,[sp, #0x90]
71025b2a28  str w8,[sp, #0x8c]
71025b2a2c  mov w8,w23
71025b2a30  cbz w26,0x71025b2a54
71025b2a34  mov x9,x22
71025b2a38  mov w10,w26
71025b2a3c  mov w8,w23
71025b2a40  mul w8,w8,w24
71025b2a44  and w10,w10,#0xff
71025b2a48  eor w8,w8,w10
71025b2a4c  ldrb w10,[x9], #0x1
71025b2a50  cbnz w10,0x71025b2a40
71025b2a54  str w8,[sp, #0x88]
71025b2a58  ldr x8,[sp, #0x30]
71025b2a5c  ldr x8,[x8]
71025b2a60  ldrb w23,[x8, x19, LSL ]
71025b2a64  mov w8,#0x1
71025b2a68  lsl w8,w8,w23
71025b2a6c  mov w9,#0x30100000
71025b2a70  cmp w23,#0x1d
71025b2a74  and w8,w8,w9
71025b2a78  ccmp w8,#0x0,#0x4,ls
71025b2a7c  b.eq 0x71025b2b40
71025b2a80  mov w19,#0x1
71025b2a84  mov w0,w23
71025b2a88  strb w19,[sp, #0x118]
71025b2a8c  bl 0x71025b3940
71025b2a90  str x0,[sp, #0x120]
71025b2a94  ldr x8,[sp, #0x38]
71025b2a98  cbz x8,0x71025b2ab4
71025b2a9c  cbz w19,0x71025b2ab4
71025b2aa0  ldr x1,[sp, #0x38]
71025b2aa4  mov w0,w23
71025b2aa8  bl 0x71025d0920
71025b2aac  and w8,w0,#0x1
71025b2ab0  strb w8,[sp, #0x119]
71025b2ab4  ldp x8,x9,[x29, #-0xb0]
71025b2ab8  cmp x8,x9
71025b2abc  b.eq 0x71025b2b28
71025b2ac0  mov x10,x8
71025b2ac4  mov x9,xzr
71025b2ac8  mov w23,#0x9dc5
71025b2acc  movk w23,#0x811c, LSL #16
71025b2ad0  str wzr,[x10], #0x8
71025b2ad4  tst w26,#0xff
71025b2ad8  b.ne 0x71025b2af0
71025b2adc  b 0x71025b2b5c
71025b2ae0  ldrb w26,[x11, #0x2]
71025b2ae4  add x9,x9,#0x3
71025b2ae8  tst w26,#0xff
71025b2aec  b.eq 0x71025b2b5c
71025b2af0  strb w26,[x10, x9, LSL ]
71025b2af4  ldrb w13,[x22, x9, LSL ]
71025b2af8  cbz w13,0x71025b2b50
71025b2afc  add x12,x10,x9
71025b2b00  add x11,x22,x9
71025b2b04  strb w13,[x12, #0x1]
71025b2b08  ldrb w13,[x11, #0x1]
71025b2b0c  cbz w13,0x71025b2b58
71025b2b10  add w14,w9,#0x3
71025b2b14  cmp w14,#0x3e
71025b2b18  strb w13,[x12, #0x2]
71025b2b1c  b.ls 0x71025b2ae0
71025b2b20  add w9,w9,#0x3
71025b2b24  b 0x71025b2b5c
71025b2b28  sub x0,x29,#0xb8
71025b2b2c  add x1,sp,#0x88
71025b2b30  bl 0x71025b2ee0
71025b2b34  mov w23,#0x9dc5
71025b2b38  movk w23,#0x811c, LSL #16
71025b2b3c  b 0x71025b2c38
71025b2b40  ldrb w19,[sp, #0x118]
71025b2b44  ldr x8,[sp, #0x38]
71025b2b48  cbnz x8,0x71025b2a9c
71025b2b4c  b 0x71025b2ab4
71025b2b50  add x9,x9,#0x1
71025b2b54  b 0x71025b2b5c
71025b2b58  add x9,x9,#0x2
71025b2b5c  add x10,x8,#0x8
71025b2b60  strb wzr,[x10, w9, UXTW ]
71025b2b64  str w9,[x8, #0x4]
71025b2b68  ldrb w9,[x8, #0x8]
71025b2b6c  mov w11,w23
71025b2b70  cbz w9,0x71025b2b90
71025b2b74  add x10,x8,#0x9
71025b2b78  mov w11,w23
71025b2b7c  mul w11,w11,w24
71025b2b80  and w9,w9,#0xff
71025b2b84  eor w11,w11,w9
71025b2b88  ldrb w9,[x10], #0x1
71025b2b8c  cbnz w9,0x71025b2b7c
71025b2b90  mov x9,xzr
71025b2b94  add x10,x8,#0x50
71025b2b98  str w11,[x8]
71025b2b9c  str wzr,[x8, #0x48]
71025b2ba0  add x11,x20,x9
71025b2ba4  ldrb w12,[x11]
71025b2ba8  cbz w12,0x71025b2be8
71025b2bac  strb w12,[x10, x9, LSL ]
71025b2bb0  ldrb w13,[x11, #0x1]
71025b2bb4  cbz w13,0x71025b2bdc
71025b2bb8  add x12,x10,x9
71025b2bbc  strb w13,[x12, #0x1]
71025b2bc0  ldrb w11,[x11, #0x2]
71025b2bc4  cbz w11,0x71025b2be4
71025b2bc8  add x9,x9,#0x3
71025b2bcc  cmp w9,#0x3f
71025b2bd0  strb w11,[x12, #0x2]
71025b2bd4  b.cc 0x71025b2ba0
71025b2bd8  b 0x71025b2be8
71025b2bdc  add x9,x9,#0x1
71025b2be0  b 0x71025b2be8
71025b2be4  add x9,x9,#0x2
71025b2be8  add x10,x8,#0x50
71025b2bec  strb wzr,[x10, w9, UXTW ]
71025b2bf0  str w9,[x8, #0x4c]
71025b2bf4  ldrb w9,[x8, #0x50]
71025b2bf8  mov w11,w23
71025b2bfc  cbz w9,0x71025b2c1c
71025b2c00  add x10,x8,#0x51
71025b2c04  mov w11,w23
71025b2c08  mul w11,w11,w24
71025b2c0c  and w9,w9,#0xff
71025b2c10  eor w11,w11,w9
71025b2c14  ldrb w9,[x10], #0x1
71025b2c18  cbnz w9,0x71025b2c08
71025b2c1c  ldr x10,[sp, #0x28]
71025b2c20  str w11,[x8, #0x48]
71025b2c24  ldp x9,x10,[x10]
71025b2c28  stp x9,x10,[x8, #0x90]
71025b2c2c  ldur x8,[x29, #-0xb0]
71025b2c30  add x8,x8,#0xa0
71025b2c34  stur x8,[x29, #-0xb0]
71025b2c38  ldp x8,x9,[x21, #0x50]
71025b2c3c  sub x9,x9,x8
71025b2c40  add x27,x27,#0x1
71025b2c44  asr x9,x9,#0x5
71025b2c48  cmp x9,x27
71025b2c4c  b.hi 0x71025b2990
71025b2c50  ldr x25,[sp, #0x20]
71025b2c54  ldp x8,x9,[x29, #-0xb8]
71025b2c58  cmp x8,x9
71025b2c5c  str x8,[sp, #0x10]
71025b2c60  str x9,[sp, #0x30]
71025b2c64  b.eq 0x71025b2e68
71025b2c68  add x8,x25,#0x8
71025b2c6c  ldr x20,[sp, #0x10]
71025b2c70  mov w26,#0xa0
71025b2c74  str x8,[sp, #0x38]
71025b2c78  add x8,x25,#0x9
71025b2c7c  str x8,[sp, #0x20]
71025b2c80  add x8,x25,#0x50
71025b2c84  mov w24,wzr
71025b2c88  mov w28,#0x89
71025b2c8c  str x8,[sp, #0x28]
71025b2c90  add x8,x25,#0x51
71025b2c94  str x8,[sp, #0x18]
71025b2c98  cbz w24,0x71025b2cf8
71025b2c9c  mov x21,x20
71025b2ca0  ldr w23,[x21], #0x8
71025b2ca4  ldr x22,[sp, #0x38]
71025b2ca8  mov x27,xzr
71025b2cac  mov w19,w24
71025b2cb0  cmp x27,#0x3
71025b2cb4  b.cs 0x71025b2e9c
71025b2cb8  ldur w8,[x22, #-0x8]
71025b2cbc  cmp w23,w8
71025b2cc0  b.ne 0x71025b2cd4
71025b2cc4  mov x0,x21
71025b2cc8  mov x1,x22
71025b2ccc  bl 0x71039c0060
71025b2cd0  cbz w0,0x71025b2d50
71025b2cd4  add x27,x27,#0x1
71025b2cd8  add x22,x22,#0xa0
71025b2cdc  cmp x27,x19
71025b2ce0  b.cc 0x71025b2cb0
71025b2ce4  cmp w24,#0x3
71025b2ce8  mov w23,#0x9dc5
71025b2cec  movk w23,#0x811c, LSL #16
71025b2cf0  b.cc 0x71025b2cfc
71025b2cf4  b 0x71025b2e9c
71025b2cf8  mov w19,w24
71025b2cfc  madd x8,x19,x26,x25
71025b2d00  cmp x8,x20
71025b2d04  b.eq 0x71025b2e40
71025b2d08  ldr x10,[sp, #0x38]
71025b2d0c  madd x10,x19,x26,x10
71025b2d10  mov x9,xzr
71025b2d14  add x11,x20,x9
71025b2d18  ldrb w12,[x11, #0x8]
71025b2d1c  cbz w12,0x71025b2d68
71025b2d20  strb w12,[x10, x9, LSL ]
71025b2d24  ldrb w13,[x11, #0x9]
71025b2d28  cbz w13,0x71025b2d5c
71025b2d2c  add x12,x10,x9
71025b2d30  strb w13,[x12, #0x1]
71025b2d34  ldrb w11,[x11, #0xa]
71025b2d38  cbz w11,0x71025b2d64
71025b2d3c  add x9,x9,#0x3
71025b2d40  cmp w9,#0x3f
71025b2d44  strb w11,[x12, #0x2]
71025b2d48  b.cc 0x71025b2d14
71025b2d4c  b 0x71025b2d68
71025b2d50  mov w23,#0x9dc5
71025b2d54  movk w23,#0x811c, LSL #16
71025b2d58  b 0x71025b2e58
71025b2d5c  add x9,x9,#0x1
71025b2d60  b 0x71025b2d68
71025b2d64  add x9,x9,#0x2
71025b2d68  madd x10,x19,x26,x25
71025b2d6c  add x11,x10,#0x8
71025b2d70  strb wzr,[x11, w9, UXTW ]
71025b2d74  str w9,[x10, #0x4]
71025b2d78  ldrb w9,[x10, #0x8]
71025b2d7c  mov w11,w23
71025b2d80  cbz w9,0x71025b2da4
71025b2d84  ldr x10,[sp, #0x20]
71025b2d88  madd x10,x19,x26,x10
71025b2d8c  mov w11,w23
71025b2d90  mul w11,w11,w28
71025b2d94  and w9,w9,#0xff
71025b2d98  eor w11,w11,w9
71025b2d9c  ldrb w9,[x10], #0x1
71025b2da0  cbnz w9,0x71025b2d90
71025b2da4  str w11,[x8]
71025b2da8  ldr x8,[sp, #0x28]
71025b2dac  madd x8,x19,x26,x8
71025b2db0  mov x9,xzr
71025b2db4  add x10,x20,x9
71025b2db8  ldrb w11,[x10, #0x50]
71025b2dbc  cbz w11,0x71025b2dfc
71025b2dc0  strb w11,[x8, x9, LSL ]
71025b2dc4  ldrb w12,[x10, #0x51]
71025b2dc8  cbz w12,0x71025b2df0
71025b2dcc  add x11,x8,x9
71025b2dd0  strb w12,[x11, #0x1]
71025b2dd4  ldrb w10,[x10, #0x52]
71025b2dd8  cbz w10,0x71025b2df8
71025b2ddc  add x9,x9,#0x3
71025b2de0  cmp w9,#0x3f
71025b2de4  strb w10,[x11, #0x2]
71025b2de8  b.cc 0x71025b2db4
71025b2dec  b 0x71025b2dfc
71025b2df0  add x9,x9,#0x1
71025b2df4  b 0x71025b2dfc
71025b2df8  add x9,x9,#0x2
71025b2dfc  madd x8,x19,x26,x25
71025b2e00  add x10,x8,#0x50
71025b2e04  strb wzr,[x10, w9, UXTW ]
71025b2e08  str w9,[x8, #0x4c]
71025b2e0c  ldrb w8,[x8, #0x50]
71025b2e10  mov w9,w23
71025b2e14  cbz w8,0x71025b2e38
71025b2e18  ldr x9,[sp, #0x18]
71025b2e1c  madd x10,x19,x26,x9
71025b2e20  mov w9,w23
71025b2e24  mul w9,w9,w28
71025b2e28  and w8,w8,#0xff
71025b2e2c  eor w9,w9,w8
71025b2e30  ldrb w8,[x10], #0x1
71025b2e34  cbnz w8,0x71025b2e24
71025b2e38  madd x8,x19,x26,x25
71025b2e3c  str w9,[x8, #0x48]
71025b2e40  madd x8,x19,x26,x25
71025b2e44  ldp x9,x10,[x20, #0x90]
71025b2e48  add w24,w24,#0x1
71025b2e4c  cmp w24,#0x3
71025b2e50  stp x9,x10,[x8, #0x90]
71025b2e54  b.eq 0x71025b2e68
71025b2e58  ldr x8,[sp, #0x30]
71025b2e5c  add x20,x20,#0xa0
71025b2e60  cmp x20,x8
71025b2e64  b.ne 0x71025b2c98
71025b2e68  ldr x0,[sp, #0x10]
71025b2e6c  cbz x0,0x71025b2e7c
71025b2e70  ldr x8,[sp, #0x8]
71025b2e74  str x0,[x8]
71025b2e78  bl 0x710392eb40
71025b2e7c  ldp x29,x30,[sp, #0x1e0]
71025b2e80  ldp x20,x19,[sp, #0x1d0]
71025b2e84  ldp x22,x21,[sp, #0x1c0]
71025b2e88  ldp x24,x23,[sp, #0x1b0]
71025b2e8c  ldp x26,x25,[sp, #0x1a0]
71025b2e90  ldp x28,x27,[sp, #0x190]
71025b2e94  add sp,sp,#0x1f0
71025b2e98  ret
71025b2e9c  bl 0x71039c2650
71025b2ea0  ldr x0,[sp, #0x30]
71025b2ea4  bl 0x71039c1330
