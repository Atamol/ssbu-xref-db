// addr:      7102ab1bb0
// offset:    0x2ab1bb0
// name:      FUN_7102ab1bb0
// mangled:   
// size:      3284

7102ab1bb0  sub sp,sp,#0xf0
7102ab1bb4  stp x28,x27,[sp, #0x90]
7102ab1bb8  stp x26,x25,[sp, #0xa0]
7102ab1bbc  stp x24,x23,[sp, #0xb0]
7102ab1bc0  stp x22,x21,[sp, #0xc0]
7102ab1bc4  stp x20,x19,[sp, #0xd0]
7102ab1bc8  stp x29,x30,[sp, #0xe0]
7102ab1bcc  add x29,sp,#0xe0
7102ab1bd0  adrp x23,0x710532a000
7102ab1bd4  ldr x9,[x23, #0x9d8]
7102ab1bd8  ldr x8,[x0, #0x308]
7102ab1bdc  ldr x2,[x8, #0x8]
7102ab1be0  mov w3,#0x1
7102ab1be4  ldr x9,[x9]
7102ab1be8  ldr x1,[x9, #0x1c0]
7102ab1bec  mov x19,x0
7102ab1bf0  add x0,sp,#0x10
7102ab1bf4  bl 0x710315a0a0
7102ab1bf8  ldr x8,[sp, #0x10]
7102ab1bfc  str xzr,[sp, #0x10]
7102ab1c00  ldr x20,[x19, #0xa70]
7102ab1c04  str x8,[x19, #0xa70]
7102ab1c08  cbz x20,0x7102ab1c30
7102ab1c0c  mov x0,x20
7102ab1c10  bl 0x71025e8370
7102ab1c14  mov x0,x20
7102ab1c18  bl 0x710392eb40
7102ab1c1c  str xzr,[sp, #0x10]
7102ab1c20  ldr x8,[x19, #0xa70]
7102ab1c24  ldrb w9,[x8, #0x10]
7102ab1c28  cbnz w9,0x7102ab1cac
7102ab1c2c  b 0x7102ab1c3c
7102ab1c30  str xzr,[sp, #0x10]
7102ab1c34  ldrb w9,[x8, #0x10]
7102ab1c38  cbnz w9,0x7102ab1cac
7102ab1c3c  ldr x20,[x8, #0x8]
7102ab1c40  mov w9,#0x1
7102ab1c44  strb w9,[x8, #0x10]
7102ab1c48  ldrb w9,[x8, #0x11]
7102ab1c4c  ldrb w8,[x20, #0x1c]
7102ab1c50  cbz w9,0x7102ab1c84
7102ab1c54  cbnz w8,0x7102ab1cac
7102ab1c58  adrp x8,0x71052b8000
7102ab1c5c  ldr x8,[x8, #0xf00]
7102ab1c60  ldr x8,[x8]
7102ab1c64  add x0,x8,#0xa30
7102ab1c68  ldr x8,[x8, #0xa30]
7102ab1c6c  ldr x8,[x8, #0x10]
7102ab1c70  mov x1,x20
7102ab1c74  blr x8
7102ab1c78  mov w8,#0x1
7102ab1c7c  strb w8,[x20, #0x1c]
7102ab1c80  b 0x7102ab1cac
7102ab1c84  cbz w8,0x7102ab1cac
7102ab1c88  adrp x8,0x71052b8000
7102ab1c8c  ldr x8,[x8, #0xf00]
7102ab1c90  ldr x8,[x8]
7102ab1c94  add x0,x8,#0xa30
7102ab1c98  ldr x8,[x8, #0xa30]
7102ab1c9c  ldr x8,[x8, #0x18]
7102ab1ca0  mov x1,x20
7102ab1ca4  blr x8
7102ab1ca8  strb wzr,[x20, #0x1c]
7102ab1cac  ldr x8,[x19, #0xa70]
7102ab1cb0  ldr x8,[x8, #0x8]
7102ab1cb4  mov w9,#0x1
7102ab1cb8  mov x0,x19
7102ab1cbc  str w9,[x8, #0x10]
7102ab1cc0  bl 0x71025d9250
7102ab1cc4  ldr w8,[x19, #0xb8]
7102ab1cc8  cmp w8,#0x3
7102ab1ccc  b.cs 0x7102ab2880
7102ab1cd0  adrp x9,0x710532a000
7102ab1cd4  ldr x9,[x9, #0x9d0]
7102ab1cd8  add x24,x19,#0x738
7102ab1cdc  ldr x9,[x9, x8, LSL #0x3]
7102ab1ce0  ldr x8,[x9, #0x228]
7102ab1ce4  ldr x9,[x9, #0x230]
7102ab1ce8  cmp x8,x9
7102ab1cec  b.eq 0x7102ab1d4c
7102ab1cf0  adrp x22,0x7105332000
7102ab1cf4  ldr x0,[x22, #0xf20]
7102ab1cf8  mov x11,#0xda81
7102ab1cfc  movk x11,#0xe719, LSL #16
7102ab1d00  orr w10,wzr,#0xffffff
7102ab1d04  movk x11,#0x13, LSL #32
7102ab1d08  ldr w21,[x8]
7102ab1d0c  cmp w21,w10
7102ab1d10  b.eq 0x7102ab1d40
7102ab1d14  ldr x12,[x0, #0x78]
7102ab1d18  ldr x12,[x12]
7102ab1d1c  ldr x13,[x12, #0x40]
7102ab1d20  ldr w13,[x13, #0x4]
7102ab1d24  cmp w13,w21
7102ab1d28  b.ls 0x7102ab1d40
7102ab1d2c  ldr x12,[x12, #0x60]
7102ab1d30  add x12,x12,x21, LSL #0x5
7102ab1d34  ldr x12,[x12, #0x18]
7102ab1d38  cmp x12,x11
7102ab1d3c  b.eq 0x7102ab2794
7102ab1d40  add x8,x8,#0x4
7102ab1d44  cmp x9,x8
7102ab1d48  b.ne 0x7102ab1d08
7102ab1d4c  orr w1,wzr,#0xffffff
7102ab1d50  mov x0,x24
7102ab1d54  bl 0x7103720ec0
7102ab1d58  mov w1,#0x28
7102ab1d5c  mov w0,#0x10
7102ab1d60  bl 0x710392e290
7102ab1d64  cbnz x0,0x7102ab1d9c
7102ab1d68  adrp x8,0x7105332000
7102ab1d6c  ldr x0,[x8, #0xf00]
7102ab1d70  mov w21,#0x28
7102ab1d74  str wzr,[sp, #0x60]
7102ab1d78  str x21,[sp, #0x10]
7102ab1d7c  ldr x8,[x0]
7102ab1d80  ldr x8,[x8, #0x30]
7102ab1d84  add x1,sp,#0x60
7102ab1d88  add x2,sp,#0x10
7102ab1d8c  blr x8
7102ab1d90  mov w0,#0x10
7102ab1d94  mov x1,x21
7102ab1d98  bl 0x710392e290
7102ab1d9c  ldr x8,[x19, #0x340]
7102ab1da0  mov x9,#-0x1
7102ab1da4  mov w27,#0xffffffff
7102ab1da8  strb wzr,[x0, #0x14]
7102ab1dac  str w27,[x0, #0x10]
7102ab1db0  strb wzr,[x0, #0x22]
7102ab1db4  stp x8,x9,[x0]
7102ab1db8  strh wzr,[x0, #0x20]
7102ab1dbc  ldr x8,[x19, #0xa60]
7102ab1dc0  str x0,[x19, #0xa60]
7102ab1dc4  cbz x8,0x7102ab1dd4
7102ab1dc8  mov x0,x8
7102ab1dcc  bl 0x710392eb40
7102ab1dd0  ldr x0,[x19, #0xa60]
7102ab1dd4  orr w8,wzr,#0x6
7102ab1dd8  strb w8,[x0, #0x20]
7102ab1ddc  ldr x8,[x19, #0xa60]
7102ab1de0  mov w9,#0x5
7102ab1de4  strb w9,[x8, #0x21]
7102ab1de8  ldr x8,[x19, #0xa60]
7102ab1dec  orr w9,wzr,#0x7
7102ab1df0  strb w9,[x8, #0x22]
7102ab1df4  ldr x8,[x19, #0x318]
7102ab1df8  ldr x0,[x8, #0x10]
7102ab1dfc  mov w8,#0x1
7102ab1e00  adrp x1,0x71042c2000
7102ab1e04  add x1,x1,#0xe16
7102ab1e08  strb w8,[x0, #0x25]
7102ab1e0c  bl 0x71025f7350
7102ab1e10  ldr x0,[x19, #0x318]
7102ab1e14  adrp x1,0x7104317000
7102ab1e18  add x1,x1,#0x4bd
7102ab1e1c  mov w2,#0x1
7102ab1e20  bl 0x7102633a10
7102ab1e24  ldr x0,[x19, #0x318]
7102ab1e28  adrp x1,0x710437a000
7102ab1e2c  add x1,x1,#0xfdd
7102ab1e30  mov w2,#0x1
7102ab1e34  bl 0x7102633b90
7102ab1e38  ldp x8,x9,[x19, #0x1a8]
7102ab1e3c  add x0,x19,#0x1a8
7102ab1e40  cmp x9,x8
7102ab1e44  b.eq 0x7102ab287c
7102ab1e48  ldr x11,[x8]
7102ab1e4c  ldp x10,x11,[x11, #0x20]
7102ab1e50  sub x11,x11,x10
7102ab1e54  lsr x11,x11,#0x3
7102ab1e58  cbz w11,0x7102ab1ecc
7102ab1e5c  ldr x10,[x10]
7102ab1e60  ldrb w11,[x10, #0x20]
7102ab1e64  cbnz w11,0x7102ab1ecc
7102ab1e68  mov w8,#0x1
7102ab1e6c  strb w8,[x10, #0x20]
7102ab1e70  ldr x9,[x10]
7102ab1e74  ldp x11,x8,[x10, #0x8]
7102ab1e78  str x9,[x11]
7102ab1e7c  str x11,[x9, #0x8]
7102ab1e80  ldr x9,[x8, #0x30]
7102ab1e84  sub x9,x9,#0x1
7102ab1e88  str x9,[x8, #0x30]
7102ab1e8c  stp xzr,xzr,[x10]
7102ab1e90  ldr x11,[x8, #0x28]
7102ab1e94  add x9,x8,#0x20
7102ab1e98  stp x9,x11,[x10]
7102ab1e9c  str x10,[x8, #0x28]
7102ab1ea0  str x10,[x11]
7102ab1ea4  ldr x9,[x8, #0x18]
7102ab1ea8  add x9,x9,#0x1
7102ab1eac  str x9,[x8, #0x18]
7102ab1eb0  ldr x9,[x10, #0x18]
7102ab1eb4  cbz x9,0x7102ab1ebc
7102ab1eb8  ldr w9,[x9, #0x110]
7102ab1ebc  ldr w10,[x8, #0x48]
7102ab1ec0  add w9,w10,w9
7102ab1ec4  str w9,[x8, #0x48]
7102ab1ec8  ldp x8,x9,[x19, #0x1a8]
7102ab1ecc  cmp x9,x8
7102ab1ed0  b.eq 0x7102ab287c
7102ab1ed4  ldr x11,[x8]
7102ab1ed8  ldp x10,x11,[x11, #0x20]
7102ab1edc  sub x11,x11,x10
7102ab1ee0  lsr x11,x11,#0x3
7102ab1ee4  cbz w11,0x7102ab1f58
7102ab1ee8  ldr x10,[x10, #0x8]
7102ab1eec  ldrb w11,[x10, #0x20]
7102ab1ef0  cbnz w11,0x7102ab1f58
7102ab1ef4  mov w8,#0x1
7102ab1ef8  strb w8,[x10, #0x20]
7102ab1efc  ldr x9,[x10]
7102ab1f00  ldp x11,x8,[x10, #0x8]
7102ab1f04  str x9,[x11]
7102ab1f08  str x11,[x9, #0x8]
7102ab1f0c  ldr x9,[x8, #0x30]
7102ab1f10  sub x9,x9,#0x1
7102ab1f14  str x9,[x8, #0x30]
7102ab1f18  stp xzr,xzr,[x10]
7102ab1f1c  ldr x11,[x8, #0x28]
7102ab1f20  add x9,x8,#0x20
7102ab1f24  stp x9,x11,[x10]
7102ab1f28  str x10,[x8, #0x28]
7102ab1f2c  str x10,[x11]
7102ab1f30  ldr x9,[x8, #0x18]
7102ab1f34  add x9,x9,#0x1
7102ab1f38  str x9,[x8, #0x18]
7102ab1f3c  ldr x9,[x10, #0x18]
7102ab1f40  cbz x9,0x7102ab1f48
7102ab1f44  ldr w9,[x9, #0x110]
7102ab1f48  ldr w10,[x8, #0x48]
7102ab1f4c  add w9,w10,w9
7102ab1f50  str w9,[x8, #0x48]
7102ab1f54  ldp x8,x9,[x19, #0x1a8]
7102ab1f58  cmp x9,x8
7102ab1f5c  b.eq 0x7102ab287c
7102ab1f60  ldr x9,[x8]
7102ab1f64  ldp x8,x9,[x9, #0x20]
7102ab1f68  sub x9,x9,x8
7102ab1f6c  lsr x9,x9,#0x3
7102ab1f70  cbz w9,0x7102ab1fdc
7102ab1f74  ldr x9,[x8, #0x10]
7102ab1f78  ldrb w8,[x9, #0x20]
7102ab1f7c  cbz w8,0x7102ab1fdc
7102ab1f80  ldp x11,x8,[x9, #0x8]
7102ab1f84  ldr x10,[x9]
7102ab1f88  strb wzr,[x9, #0x20]
7102ab1f8c  str x10,[x11]
7102ab1f90  str x11,[x10, #0x8]
7102ab1f94  ldr x10,[x8, #0x18]
7102ab1f98  sub x10,x10,#0x1
7102ab1f9c  str x10,[x8, #0x18]
7102ab1fa0  stp xzr,xzr,[x9]
7102ab1fa4  ldr x11,[x8, #0x40]
7102ab1fa8  add x10,x8,#0x38
7102ab1fac  stp x10,x11,[x9]
7102ab1fb0  str x9,[x8, #0x40]
7102ab1fb4  str x9,[x11]
7102ab1fb8  ldr x10,[x8, #0x30]
7102ab1fbc  add x10,x10,#0x1
7102ab1fc0  str x10,[x8, #0x30]
7102ab1fc4  ldr x9,[x9, #0x18]
7102ab1fc8  cbz x9,0x7102ab1fd0
7102ab1fcc  ldr w9,[x9, #0x110]
7102ab1fd0  ldr w10,[x8, #0x48]
7102ab1fd4  sub w9,w10,w9
7102ab1fd8  str w9,[x8, #0x48]
7102ab1fdc  adrp x8,0x71043ff000
7102ab1fe0  add x8,x8,#0x46f
7102ab1fe4  adrp x9,0x71043de000
7102ab1fe8  add x9,x9,#0x1dd
7102ab1fec  stp x8,x9,[sp, #0x10]
7102ab1ff0  adrp x8,0x7104338000
7102ab1ff4  add x8,x8,#0x35a
7102ab1ff8  adrp x9,0x710510d000
7102ab1ffc  add x9,x9,#0x740
7102ab2000  str x8,[sp, #0x20]
7102ab2004  ldr x8,[x9, #0x10]
7102ab2008  str x8,[sp, #0x38]
7102ab200c  ldp x8,x9,[x9]
7102ab2010  stp x8,x9,[sp, #0x28]
7102ab2014  adrp x8,0x7104410000
7102ab2018  add x8,x8,#0x8e7
7102ab201c  str x8,[sp, #0x40]
7102ab2020  adrp x8,0x710510d000
7102ab2024  add x8,x8,#0x758
7102ab2028  ldr x9,[x8, #0x10]
7102ab202c  str x9,[sp, #0x58]
7102ab2030  ldp x9,x8,[x8]
7102ab2034  mov x20,x23
7102ab2038  stp x9,x8,[sp, #0x48]
7102ab203c  ldr x23,[x19, #0x338]
7102ab2040  mov w1,#0x290
7102ab2044  mov w0,#0x10
7102ab2048  bl 0x710392e290
7102ab204c  mov x21,x0
7102ab2050  cbnz x0,0x7102ab209c
7102ab2054  adrp x8,0x7105332000
7102ab2058  ldr x0,[x8, #0xf00]
7102ab205c  cbz x0,0x7102ab2098
7102ab2060  mov w8,#0x290
7102ab2064  stur wzr,[x29, #-0x60]
7102ab2068  sub x1,x29,#0x60
7102ab206c  str x8,[sp, #0x60]
7102ab2070  ldr x8,[x0]
7102ab2074  ldr x8,[x8, #0x30]
7102ab2078  add x2,sp,#0x60
7102ab207c  blr x8
7102ab2080  tbz w0,#0x0,0x7102ab2098
7102ab2084  mov w1,#0x290
7102ab2088  mov w0,#0x10
7102ab208c  bl 0x710392e290
7102ab2090  mov x21,x0
7102ab2094  cbnz x0,0x7102ab209c
7102ab2098  mov x21,xzr
7102ab209c  adrp x9,0x7104468000
7102ab20a0  ldr q0,[x9, #0xca0]
7102ab20a4  adrp x9,0x7104465000
7102ab20a8  adrp x10,0x710446a000
7102ab20ac  ldr q1,[x10, #0x360]
7102ab20b0  mov x26,x21
7102ab20b4  ldr q2,[x9, #0x6b0]
7102ab20b8  adrp x9,0x710446a000
7102ab20bc  ldr q3,[x9, #0x350]
7102ab20c0  adrp x8,0x710510d000
7102ab20c4  add x8,x8,#0x7a0
7102ab20c8  mov x28,x21
7102ab20cc  stp x8,x24,[x21]
7102ab20d0  mov x25,x21
7102ab20d4  adrp x8,0x710517b000
7102ab20d8  add x8,x8,#0x340
7102ab20dc  add x9,x21,#0x209
7102ab20e0  str x24,[sp, #0x8]
7102ab20e4  add x22,x21,#0x214
7102ab20e8  add x24,x21,#0x230
7102ab20ec  str xzr,[x28, #0x10]!
7102ab20f0  str x8,[x25, #0x30]!
7102ab20f4  stp q0,q1,[x21, #0x50]
7102ab20f8  str xzr,[x21, #0x38]
7102ab20fc  stp xzr,xzr,[x21, #0x18]
7102ab2100  str w27,[x21, #0x40]
7102ab2104  stp q2,q3,[x21, #0x70]
7102ab2108  mov x1,x19
7102ab210c  mov x2,x24
7102ab2110  strb wzr,[x21, #0x90]
7102ab2114  str x8,[x26, #0xa0]!
7102ab2118  str xzr,[x21, #0xa8]
7102ab211c  str w27,[x21, #0xb0]
7102ab2120  strb wzr,[x21, #0x100]
7102ab2124  str w27,[x21, #0x120]
7102ab2128  strb wzr,[x21, #0x170]
7102ab212c  strb wzr,[x21, #0x1c0]
7102ab2130  str wzr,[x21, #0x1c4]
7102ab2134  strb wzr,[x21, #0x1c8]
7102ab2138  str xzr,[x21, #0x1e0]
7102ab213c  strb wzr,[x21, #0x1e8]
7102ab2140  stp x8,xzr,[x21, #0x110]
7102ab2144  add x8,x21,#0x1ec
7102ab2148  stp xzr,x23,[x21, #0x1d0]
7102ab214c  stp q0,q1,[x21, #0xc0]
7102ab2150  stp q2,q3,[x21, #0xe0]
7102ab2154  stp q0,q1,[x21, #0x130]
7102ab2158  stp q2,q3,[x21, #0x150]
7102ab215c  stp q0,q1,[x21, #0x180]
7102ab2160  stp q2,q3,[x21, #0x1a0]
7102ab2164  str xzr,[x9]
7102ab2168  add x9,x21,#0x204
7102ab216c  str xzr,[x9]
7102ab2170  add x9,x21,#0x1fc
7102ab2174  str xzr,[x9]
7102ab2178  add x9,x21,#0x1f4
7102ab217c  str xzr,[x8]
7102ab2180  add x8,x21,#0x21c
7102ab2184  str xzr,[x9]
7102ab2188  strh wzr,[x21, #0x224]
7102ab218c  str xzr,[x8]
7102ab2190  adrp x8,0x71052a8000
7102ab2194  str xzr,[x22]
7102ab2198  ldr x8,[x8, #0xa80]
7102ab219c  ldr q0,[x8]
7102ab21a0  mov w8,#0x1
7102ab21a4  str x19,[x21, #0x230]
7102ab21a8  strh w8,[x21, #0x238]
7102ab21ac  strb wzr,[x21, #0x23a]
7102ab21b0  str w27,[x21, #0x23c]
7102ab21b4  str wzr,[x21, #0x270]
7102ab21b8  str xzr,[x21, #0x268]
7102ab21bc  str xzr,[x21, #0x260]
7102ab21c0  stp q0,q0,[x21, #0x240]
7102ab21c4  ldr x8,[x20, #0x9d8]
7102ab21c8  ldr x8,[x8]
7102ab21cc  ldr x0,[x8, #0x1c8]
7102ab21d0  bl 0x71031675b0
7102ab21d4  and w8,w0,#0x1
7102ab21d8  strb w8,[x21, #0x238]
7102ab21dc  str x19,[x21, #0x280]
7102ab21e0  strb wzr,[x21, #0x288]
7102ab21e4  ldr x27,[sp, #0x10]
7102ab21e8  cbz x27,0x7102ab2288
7102ab21ec  ldrb w11,[x27]
7102ab21f0  cbz w11,0x7102ab2288
7102ab21f4  ldr x9,[x19, #0x310]
7102ab21f8  ldp x8,x9,[x9, #0xd0]
7102ab21fc  cmp x8,x9
7102ab2200  b.eq 0x7102ab2288
7102ab2204  mov x10,xzr
7102ab2208  add x20,x21,#0x110
7102ab220c  mov w12,#0xffffffff
7102ab2210  mov w13,#0x1
7102ab2214  orr x14,xzr,#0x100000000
7102ab2218  adrp x15,0x7104754000
7102ab221c  add x15,x15,#0x84
7102ab2220  and w11,w11,#0xff
7102ab2224  sub w16,w11,#0x41
7102ab2228  add w17,w11,#0x20
7102ab222c  cmp w16,#0x1a
7102ab2230  csel w11,w17,w11,cc
7102ab2234  eor w11,w11,w12
7102ab2238  and w11,w11,#0xff
7102ab223c  ldr w16,[x15, w11, UXTW #0x2]
7102ab2240  ldrb w11,[x27, x13, LSL ]
7102ab2244  add x13,x13,#0x1
7102ab2248  eor w12,w16,w12, LSR #0x8
7102ab224c  add x10,x10,x14
7102ab2250  cbnz w11,0x7102ab2220
7102ab2254  mvn w11,w12
7102ab2258  and x10,x10,#0xff00000000
7102ab225c  orr x11,x10,x11
7102ab2260  ldr w10,[x8, #0x8]
7102ab2264  cmp w10,#0x1
7102ab2268  b.hi 0x7102ab227c
7102ab226c  ldr x10,[x8]
7102ab2270  ldr x12,[x10, #0x68]
7102ab2274  cmp x11,x12
7102ab2278  b.eq 0x7102ab27b8
7102ab227c  add x8,x8,#0x10
7102ab2280  cmp x9,x8
7102ab2284  b.ne 0x7102ab2260
7102ab2288  str xzr,[x28]
7102ab228c  ldr x9,[x19, #0x300]
7102ab2290  ldr x10,[sp, #0x18]
7102ab2294  mov w13,#0xffffffff
7102ab2298  ldr x8,[x9, #0x18]
7102ab229c  ldr x11,[x8]
7102ab22a0  adrp x8,0x7104754000
7102ab22a4  add x8,x8,#0x84
7102ab22a8  ldrb w12,[x10], #0x1
7102ab22ac  orr x14,xzr,#0x100000000
7102ab22b0  ldr x15,[x11]
7102ab22b4  cbnz w12,0x7102ab22c8
7102ab22b8  b 0x7102ab2314
7102ab22bc  add x11,x11,#0x8
7102ab22c0  ldr x15,[x11]
7102ab22c4  cbz w12,0x7102ab2314
7102ab22c8  mov x16,xzr
7102ab22cc  mov x17,x10
7102ab22d0  mov w0,w12
7102ab22d4  mov w18,w13
7102ab22d8  and w0,w0,#0xff
7102ab22dc  sub w1,w0,#0x41
7102ab22e0  add w2,w0,#0x20
7102ab22e4  cmp w1,#0x1a
7102ab22e8  csel w0,w2,w0,cc
7102ab22ec  eor w0,w0,w18
7102ab22f0  and w0,w0,#0xff
7102ab22f4  ldr w0,[x8, w0, UXTW #0x2]
7102ab22f8  eor w18,w0,w18, LSR #0x8
7102ab22fc  ldrb w0,[x17], #0x1
7102ab2300  add x16,x16,x14
7102ab2304  cbnz w0,0x7102ab22d8
7102ab2308  mvn w17,w18
7102ab230c  and x16,x16,#0xff00000000
7102ab2310  b 0x7102ab231c
7102ab2314  mov x17,xzr
7102ab2318  mov x16,xzr
7102ab231c  orr x16,x16,x17
7102ab2320  ldr x17,[x15, #0xa0]
7102ab2324  and x17,x17,#0xffffffffff
7102ab2328  cmp x17,x16
7102ab232c  b.ne 0x7102ab22bc
7102ab2330  ldr x10,[x15, #0x110]
7102ab2334  str x10,[x21, #0x18]
7102ab2338  ldr x10,[sp, #0x20]
7102ab233c  ldr x9,[x9, #0x18]
7102ab2340  ldr x9,[x9]
7102ab2344  mov w12,#0xffffffff
7102ab2348  ldrb w11,[x10], #0x1
7102ab234c  orr x13,xzr,#0x100000000
7102ab2350  ldr x14,[x9]
7102ab2354  cbnz w11,0x7102ab2368
7102ab2358  b 0x7102ab23b4
7102ab235c  add x9,x9,#0x8
7102ab2360  ldr x14,[x9]
7102ab2364  cbz w11,0x7102ab23b4
7102ab2368  mov x15,xzr
7102ab236c  mov x16,x10
7102ab2370  mov w18,w11
7102ab2374  mov w17,w12
7102ab2378  and w18,w18,#0xff
7102ab237c  sub w0,w18,#0x41
7102ab2380  add w1,w18,#0x20
7102ab2384  cmp w0,#0x1a
7102ab2388  csel w18,w1,w18,cc
7102ab238c  eor w18,w18,w17
7102ab2390  and w18,w18,#0xff
7102ab2394  ldr w18,[x8, w18, UXTW #0x2]
7102ab2398  eor w17,w18,w17, LSR #0x8
7102ab239c  ldrb w18,[x16], #0x1
7102ab23a0  add x15,x15,x13
7102ab23a4  cbnz w18,0x7102ab2378
7102ab23a8  mvn w16,w17
7102ab23ac  and x15,x15,#0xff00000000
7102ab23b0  b 0x7102ab23bc
7102ab23b4  mov x16,xzr
7102ab23b8  mov x15,xzr
7102ab23bc  orr x15,x15,x16
7102ab23c0  ldr x16,[x14, #0xa0]
7102ab23c4  and x16,x16,#0xffffffffff
7102ab23c8  cmp x16,x15
7102ab23cc  b.ne 0x7102ab235c
7102ab23d0  ldr x8,[x14, #0x110]
7102ab23d4  mov w9,#0x1
7102ab23d8  mov w1,#0x190
7102ab23dc  strb w9,[x21, #0x225]
7102ab23e0  str x8,[x21, #0x20]
7102ab23e4  add x8,sp,#0x10
7102ab23e8  mov w0,#0x10
7102ab23ec  add x25,x8,#0x30
7102ab23f0  bl 0x710392e290
7102ab23f4  mov x26,x0
7102ab23f8  cbnz x0,0x7102ab2444
7102ab23fc  adrp x8,0x7105332000
7102ab2400  ldr x0,[x8, #0xf00]
7102ab2404  cbz x0,0x7102ab2440
7102ab2408  mov w8,#0x190
7102ab240c  stur wzr,[x29, #-0x60]
7102ab2410  sub x1,x29,#0x60
7102ab2414  str x8,[sp, #0x60]
7102ab2418  ldr x8,[x0]
7102ab241c  ldr x8,[x8, #0x30]
7102ab2420  add x2,sp,#0x60
7102ab2424  blr x8
7102ab2428  tbz w0,#0x0,0x7102ab2440
7102ab242c  mov w1,#0x190
7102ab2430  mov w0,#0x10
7102ab2434  bl 0x710392e290
7102ab2438  mov x26,x0
7102ab243c  cbnz x0,0x7102ab2444
7102ab2440  mov x26,xzr
7102ab2444  ldr x1,[x21, #0x280]
7102ab2448  ldr x3,[sp, #0x8]
7102ab244c  mov x0,x26
7102ab2450  mov x2,x25
7102ab2454  mov x4,x23
7102ab2458  bl 0x7102ac06b0
7102ab245c  ldr x0,[x21, #0x1d0]
7102ab2460  str x26,[x21, #0x1d0]
7102ab2464  cbz x0,0x7102ab2474
7102ab2468  ldr x8,[x0]
7102ab246c  ldr x8,[x8, #0x8]
7102ab2470  blr x8
7102ab2474  str x23,[x21, #0x1e0]
7102ab2478  str xzr,[sp, #0x60]
7102ab247c  ldr x8,[x23]
7102ab2480  mov w23,#0xffffffff
7102ab2484  ldr x0,[x8, #0x8]
7102ab2488  cbz x0,0x7102ab249c
7102ab248c  add x1,sp,#0x60
7102ab2490  mov w2,wzr
7102ab2494  bl 0x7102405040
7102ab2498  b 0x7102ab24a0
7102ab249c  mov w0,w23
7102ab24a0  mov x8,#0x1
7102ab24a4  movk x8,#0x2, LSL #32
7102ab24a8  str w0,[x21, #0x1ec]
7102ab24ac  str wzr,[x21, #0x208]
7102ab24b0  movi v0.2D,#0x0
7102ab24b4  mov v1.16B,v0.16B
7102ab24b8  str x8,[x21, #0x200]
7102ab24bc  ldr x8,[x19, #0x308]
7102ab24c0  sub x1,x29,#0x60
7102ab24c4  ldp x9,x8,[x8, #0xf8]
7102ab24c8  mov x0,x24
7102ab24cc  stp x9,x8,[x22]
7102ab24d0  ldr x8,[x21, #0x8]
7102ab24d4  add x9,x8,#0x2f0
7102ab24d8  ld1 {v1.S}[0],[x9]
7102ab24dc  add x9,x8,#0x2f4
7102ab24e0  ld1 {v1.S}[1],[x9]
7102ab24e4  str q1,[sp, #0x60]
7102ab24e8  mov v1.16B,v0.16B
7102ab24ec  add x9,sp,#0x60
7102ab24f0  add x20,x9,#0x10
7102ab24f4  add x9,x8,#0x2f8
7102ab24f8  ld1 {v1.S}[0],[x9]
7102ab24fc  add x9,x8,#0x2fc
7102ab2500  ld1 {v1.S}[1],[x9]
7102ab2504  str q1,[sp, #0x70]
7102ab2508  add x9,x8,#0x300
7102ab250c  add x8,x8,#0x304
7102ab2510  ld1 {v0.S}[0],[x9]
7102ab2514  ld1 {v0.S}[1],[x8]
7102ab2518  stur q0,[x29, #-0x60]
7102ab251c  bl 0x710317e220
7102ab2520  add x1,sp,#0x60
7102ab2524  mov x0,x24
7102ab2528  mov x2,x20
7102ab252c  bl 0x710317e570
7102ab2530  ldrb w8,[x19, #0x54]
7102ab2534  cmp w8,#0x1
7102ab2538  strb w8,[x21, #0x288]
7102ab253c  b.ne 0x7102ab267c
7102ab2540  ldr x8,[x28]
7102ab2544  cbz x8,0x7102ab2594
7102ab2548  ldrb w9,[x8, #0xe0]
7102ab254c  cbz w9,0x7102ab2560
7102ab2550  ldr x9,[x8, #0xc8]
7102ab2554  cbz x9,0x7102ab2560
7102ab2558  mov w10,#0x101
7102ab255c  strh w10,[x9, #0x30]
7102ab2560  ldr x9,[x8, #0xd8]
7102ab2564  cbz x9,0x7102ab2570
7102ab2568  mov w10,#0x1
7102ab256c  strb w10,[x9, #0x21]
7102ab2570  ldrb w9,[x8, #0xe0]
7102ab2574  cbz w9,0x7102ab2580
7102ab2578  ldr x8,[x8, #0xb0]
7102ab257c  strb wzr,[x8, #0x10]
7102ab2580  ldr x8,[x28]
7102ab2584  cbz x8,0x7102ab2594
7102ab2588  add x0,x8,#0x108
7102ab258c  strb wzr,[x8, #0x110]
7102ab2590  bl 0x71025e9d50
7102ab2594  ldr x8,[x21, #0x18]
7102ab2598  ldp x0,x1,[x8]
7102ab259c  mov w2,#0x1
7102ab25a0  bl 0x71025f4d80
7102ab25a4  ldr x8,[x21, #0x20]
7102ab25a8  ldp x0,x1,[x8]
7102ab25ac  mov w2,#0x1
7102ab25b0  bl 0x71025f4d80
7102ab25b4  ldr x8,[x21, #0x1d0]
7102ab25b8  ldr x9,[x8, #0x10]
7102ab25bc  cbz x9,0x7102ab260c
7102ab25c0  ldrb w10,[x9, #0xe0]
7102ab25c4  cbz w10,0x7102ab25d8
7102ab25c8  ldr x10,[x9, #0xc8]
7102ab25cc  cbz x10,0x7102ab25d8
7102ab25d0  mov w11,#0x101
7102ab25d4  strh w11,[x10, #0x30]
7102ab25d8  ldr x10,[x9, #0xd8]
7102ab25dc  cbz x10,0x7102ab25e8
7102ab25e0  mov w11,#0x1
7102ab25e4  strb w11,[x10, #0x21]
7102ab25e8  ldrb w10,[x9, #0xe0]
7102ab25ec  cbz w10,0x7102ab25f8
7102ab25f0  ldr x9,[x9, #0xb0]
7102ab25f4  strb wzr,[x9, #0x10]
7102ab25f8  ldr x8,[x8, #0x10]
7102ab25fc  cbz x8,0x7102ab260c
7102ab2600  add x0,x8,#0x108
7102ab2604  strb wzr,[x8, #0x110]
7102ab2608  bl 0x71025e9d50
7102ab260c  ldrb w8,[x21, #0x239]
7102ab2610  cbz w8,0x7102ab2658
7102ab2614  ldrsw x9,[x21, #0x23c]
7102ab2618  cmp w9,#0x37
7102ab261c  b.hi 0x7102ab2650
7102ab2620  adrp x8,0x71052b6000
7102ab2624  ldr x8,[x8, #0xfd8]
7102ab2628  ldr x8,[x8]
7102ab262c  ldr x8,[x8, #0xc0]
7102ab2630  add x9,x8,x9
7102ab2634  ldrb w10,[x9, #0x464]
7102ab2638  cbz w10,0x7102ab2650
7102ab263c  add x9,x9,#0x464
7102ab2640  strb wzr,[x9]
7102ab2644  ldr w9,[x8]
7102ab2648  sub w9,w9,#0x1
7102ab264c  str w9,[x8]
7102ab2650  str w23,[x21, #0x23c]
7102ab2654  strb wzr,[x21, #0x239]
7102ab2658  ldr x8,[x21, #0x280]
7102ab265c  strb wzr,[x21, #0x23a]
7102ab2660  ldr x0,[x8, #0x308]
7102ab2664  mov x1,x22
7102ab2668  bl 0x71026249a0
7102ab266c  mov w8,#0x1
7102ab2670  strb w8,[x21, #0x224]
7102ab2674  orr w8,wzr,#0x3
7102ab2678  strb w8,[x21, #0x1c0]
7102ab267c  ldr x0,[x19, #0xa88]
7102ab2680  str x21,[x19, #0xa88]
7102ab2684  cbz x0,0x7102ab2694
7102ab2688  ldr x8,[x0]
7102ab268c  ldr x8,[x8, #0x8]
7102ab2690  blr x8
7102ab2694  ldrb w8,[x19, #0x54]
7102ab2698  cmp w8,#0x1
7102ab269c  strb w8,[x19, #0xab1]
7102ab26a0  b.ne 0x7102ab2774
7102ab26a4  add x8,x19,#0xa4c
7102ab26a8  str xzr,[x8]
7102ab26ac  ldr w8,[x19, #0x740]
7102ab26b0  ldr w9,[x19, #0x744]
7102ab26b4  scvtf s0,w8
7102ab26b8  sub w8,w9,w8
7102ab26bc  scvtf s1,w8
7102ab26c0  ldr x8,[x19, #0x340]
7102ab26c4  orr w20,wzr,#0x3
7102ab26c8  strb w20,[x19, #0xa54]
7102ab26cc  ldp w9,w10,[x8]
7102ab26d0  str w10,[x8]
7102ab26d4  ldp w10,w11,[x8, #0x8]
7102ab26d8  eor w9,w9,w9, LSL #0xb
7102ab26dc  eor w9,w9,w9, LSR #0x8
7102ab26e0  eor w9,w9,w11
7102ab26e4  eor w9,w9,w11, LSR #0x13
7102ab26e8  ucvtf s2,w9
7102ab26ec  stp w10,w11,[x8, #0x4]
7102ab26f0  str w9,[x8, #0xc]
7102ab26f4  adrp x8,0x7104473000
7102ab26f8  ldr s3,[x8, #0x710]
7102ab26fc  ldr x8,[x19, #0x318]
7102ab2700  fmul s2,s2,s3
7102ab2704  fmul s1,s2,s1
7102ab2708  fadd s0,s1,s0
7102ab270c  str s0,[x19, #0xa58]
7102ab2710  strb wzr,[x19, #0xa68]
7102ab2714  ldr x0,[x8, #0x10]
7102ab2718  adrp x1,0x71042c2000
7102ab271c  add x1,x1,#0xe0b
7102ab2720  bl 0x71025f7350
7102ab2724  ldr x0,[x19, #0x318]
7102ab2728  adrp x1,0x71042e5000
7102ab272c  add x1,x1,#0x263
7102ab2730  mov w2,#0x1
7102ab2734  bl 0x7102633a10
7102ab2738  ldr x0,[x19, #0x318]
7102ab273c  adrp x1,0x7104441000
7102ab2740  add x1,x1,#0xb63
7102ab2744  mov w2,#0x1
7102ab2748  bl 0x7102633b90
7102ab274c  ldr x9,[x19, #0x300]
7102ab2750  strb w20,[x19, #0xa48]
7102ab2754  ldr x8,[x9, #0x48]
7102ab2758  ldr x8,[x8, #0x8]
7102ab275c  ldr x0,[x9, #0x60]
7102ab2760  add x10,x8,#0x8
7102ab2764  cmp x0,x10
7102ab2768  b.eq 0x7102ab2774
7102ab276c  ldp x1,x2,[x8, #0x8]
7102ab2770  bl 0x7102616cf0
7102ab2774  ldp x29,x30,[sp, #0xe0]
7102ab2778  ldp x20,x19,[sp, #0xd0]
7102ab277c  ldp x22,x21,[sp, #0xc0]
7102ab2780  ldp x24,x23,[sp, #0xb0]
7102ab2784  ldp x26,x25,[sp, #0xa0]
7102ab2788  ldp x28,x27,[sp, #0x90]
7102ab278c  add sp,sp,#0xf0
7102ab2790  ret
7102ab2794  mov w1,w21
7102ab2798  bl 0x7103540a00
7102ab279c  mov x0,x24
7102ab27a0  mov w1,w21
7102ab27a4  bl 0x7103720ec0
7102ab27a8  ldr x0,[x22, #0xf20]
7102ab27ac  mov w1,w21
7102ab27b0  bl 0x7103540b10
7102ab27b4  b 0x7102ab1d58
7102ab27b8  str x10,[x28]
7102ab27bc  cbz x10,0x7102ab2868
7102ab27c0  ldr x8,[x10, #0xd8]
7102ab27c4  cbz x8,0x7102ab286c
7102ab27c8  ldrb w8,[x10, #0xe0]
7102ab27cc  cbz w8,0x7102ab27dc
7102ab27d0  ldr x8,[x10, #0xc8]
7102ab27d4  cbz x8,0x7102ab27dc
7102ab27d8  strh wzr,[x8, #0x32]
7102ab27dc  ldr x8,[x10, #0xd8]
7102ab27e0  cbz x8,0x7102ab27e8
7102ab27e4  strb wzr,[x8, #0x22]
7102ab27e8  ldr x8,[x28]
7102ab27ec  cbz x8,0x7102ab2828
7102ab27f0  ldrb w9,[x8, #0xe0]
7102ab27f4  cbz w9,0x7102ab2808
7102ab27f8  ldr x9,[x8, #0xc8]
7102ab27fc  cbz x9,0x7102ab2808
7102ab2800  mov w10,#0x101
7102ab2804  strh w10,[x9, #0x30]
7102ab2808  ldr x9,[x8, #0xd8]
7102ab280c  cbz x9,0x7102ab2818
7102ab2810  mov w10,#0x1
7102ab2814  strb w10,[x9, #0x21]
7102ab2818  ldrb w9,[x8, #0xe0]
7102ab281c  cbz w9,0x7102ab2828
7102ab2820  ldr x8,[x8, #0xb0]
7102ab2824  strb wzr,[x8, #0x10]
7102ab2828  ldr x3,[sp, #0x28]
7102ab282c  mov x0,x25
7102ab2830  mov x1,x19
7102ab2834  mov x2,x27
7102ab2838  bl 0x710314fd10
7102ab283c  ldr x3,[sp, #0x30]
7102ab2840  mov x0,x26
7102ab2844  mov x1,x19
7102ab2848  mov x2,x27
7102ab284c  bl 0x710314fd10
7102ab2850  ldr x2,[sp, #0x10]
7102ab2854  ldr x3,[sp, #0x38]
7102ab2858  mov x0,x20
7102ab285c  mov x1,x19
7102ab2860  bl 0x710314fd10
7102ab2864  ldr x10,[x28]
7102ab2868  cbz x10,0x7102ab228c
7102ab286c  ldrb w8,[x10, #0x118]
7102ab2870  orr w8,w8,#0x1
7102ab2874  strb w8,[x10, #0x118]
7102ab2878  b 0x7102ab228c
7102ab287c  bl 0x71039c1330
7102ab2880  bl 0x71039c2650
