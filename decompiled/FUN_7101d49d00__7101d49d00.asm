// addr:      7101d49d00
// offset:    0x1d49d00
// name:      FUN_7101d49d00
// mangled:   
// size:      1796

7101d49d00  sub sp,sp,#0x120
7101d49d04  stp x28,x27,[sp, #0xc0]
7101d49d08  stp x26,x25,[sp, #0xd0]
7101d49d0c  stp x24,x23,[sp, #0xe0]
7101d49d10  stp x22,x21,[sp, #0xf0]
7101d49d14  stp x20,x19,[sp, #0x100]
7101d49d18  stp x29,x30,[sp, #0x110]
7101d49d1c  add x29,sp,#0x110
7101d49d20  mov w18,w1
7101d49d24  mov x19,x0
7101d49d28  cmp w2,#0x1
7101d49d2c  b.ne 0x7101d49d44
7101d49d30  add x8,x19,#0x2d5
7101d49d34  ldr w8,[x8]
7101d49d38  add x20,x19,#0x200
7101d49d3c  stur w8,[x29, #-0x5c]
7101d49d40  b 0x7101d49d54
7101d49d44  add x8,x19,#0x2d1
7101d49d48  ldr w8,[x8]
7101d49d4c  stur w8,[x29, #-0x5c]
7101d49d50  add x20,x19,#0x1f8
7101d49d54  adrp x25,0x710532f000
7101d49d58  ldr x8,[x25, #0x730]
7101d49d5c  strb wzr,[sp, #0x70]
7101d49d60  str xzr,[sp, #0x68]
7101d49d64  ldr x8,[x8, #0x8]
7101d49d68  ldr x26,[x8, #0x308]
7101d49d6c  ldr x1,[x26, #0x8]
7101d49d70  ldr x8,[x1, #0x20]
7101d49d74  sub x9,x29,#0x5c
7101d49d78  ldrb w21,[x9, w18, UXTW ]
7101d49d7c  ldrb w9,[x8]
7101d49d80  cmp w9,#0xc
7101d49d84  str w18,[sp, #0xc]
7101d49d88  b.ne 0x7101d49e0c
7101d49d8c  ldur w9,[x8, #0x1]
7101d49d90  subs w10,w9,#0x1
7101d49d94  b.lt 0x7101d49e0c
7101d49d98  ldr x9,[x1, #0x48]
7101d49d9c  ldr x14,[x1, #0x18]
7101d49da0  and x12,x9,#0xffffffffff
7101d49da4  ldursw x9,[x8, #0x5]
7101d49da8  ldp x13,x14,[x14, #0x20]
7101d49dac  mov w11,wzr
7101d49db0  add x14,x14,x9
7101d49db4  adrp x9,0x7104742000
7101d49db8  add x9,x9,#0xdbb
7101d49dbc  add w15,w10,w11
7101d49dc0  cmp w15,#0x0
7101d49dc4  cinc w15,w15,lt
7101d49dc8  asr w15,w15,#0x1
7101d49dcc  add x16,x14,w15, SXTW  #0x3
7101d49dd0  ldr w17,[x16]
7101d49dd4  ldr x17,[x13, x17, LSL #0x3]
7101d49dd8  cmp x17,x12
7101d49ddc  b.eq 0x7101d49dfc
7101d49de0  sub w16,w15,#0x1
7101d49de4  cmp x17,x12
7101d49de8  csel w10,w16,w10,hi
7101d49dec  csinc w11,w11,w15,hi
7101d49df0  cmp w11,w10
7101d49df4  b.le 0x7101d49dbc
7101d49df8  b 0x7101d49e14
7101d49dfc  ldrsw x9,[x16, #0x4]
7101d49e00  tbnz w9,#0x1f,0x7101d49e0c
7101d49e04  add x9,x8,x9
7101d49e08  b 0x7101d49e14
7101d49e0c  adrp x9,0x7104742000
7101d49e10  add x9,x9,#0xdbb
7101d49e14  ldrb w8,[x9]
7101d49e18  sub w8,w8,#0xb
7101d49e1c  cmp w8,#0x1
7101d49e20  b.hi 0x7101d49f70
7101d49e24  ldur w27,[x9, #0x1]
7101d49e28  cmp w27,#0x1
7101d49e2c  b.lt 0x7101d49f70
7101d49e30  mov x24,#0x5c66
7101d49e34  movk x24,#0x8be9, LSL #16
7101d49e38  mov w22,wzr
7101d49e3c  adrp x28,0x7104742000
7101d49e40  add x28,x28,#0xdbb
7101d49e44  movk x24,#0xa, LSL #32
7101d49e48  adrp x23,0x71044fa000
7101d49e4c  add x23,x23,#0xdb8
7101d49e50  b 0x7101d49e58
7101d49e54  ldr x1,[x26, #0x8]
7101d49e58  add x0,sp,#0x20
7101d49e5c  mov w2,w22
7101d49e60  bl 0x710326a3e0
7101d49e64  ldr x8,[sp, #0x28]
7101d49e68  ldrb w9,[x8]
7101d49e6c  cmp w9,#0xc
7101d49e70  mov x9,x28
7101d49e74  b.ne 0x7101d49eec
7101d49e78  ldur w9,[x8, #0x1]
7101d49e7c  subs w9,w9,#0x1
7101d49e80  b.lt 0x7101d49ee8
7101d49e84  ldr x13,[sp, #0x20]
7101d49e88  ldursw x12,[x8, #0x5]
7101d49e8c  mov w10,wzr
7101d49e90  ldp x11,x13,[x13, #0x20]
7101d49e94  add x12,x13,x12
7101d49e98  add w13,w9,w10
7101d49e9c  cmp w13,#0x0
7101d49ea0  cinc w13,w13,lt
7101d49ea4  asr w13,w13,#0x1
7101d49ea8  add x14,x12,w13, SXTW  #0x3
7101d49eac  ldr w15,[x14]
7101d49eb0  ldr x15,[x11, x15, LSL #0x3]
7101d49eb4  cmp x15,x24
7101d49eb8  b.eq 0x7101d49ed8
7101d49ebc  sub w14,w13,#0x1
7101d49ec0  cmp x15,x24
7101d49ec4  csel w9,w14,w9,hi
7101d49ec8  csinc w10,w10,w13,hi
7101d49ecc  cmp w10,w9
7101d49ed0  b.le 0x7101d49e98
7101d49ed4  b 0x7101d49ee8
7101d49ed8  ldrsw x9,[x14, #0x4]
7101d49edc  tbnz w9,#0x1f,0x7101d49ee8
7101d49ee0  add x9,x8,x9
7101d49ee4  b 0x7101d49eec
7101d49ee8  mov x9,x28
7101d49eec  ldrb w8,[x9]
7101d49ef0  sub w8,w8,#0x1
7101d49ef4  cmp w8,#0x6
7101d49ef8  b.hi 0x7101d49f28
7101d49efc  ldrsw x8,[x23, x8, LSL #0x2]
7101d49f00  add x8,x8,x23
7101d49f04  br x8
7101d49f08  ldrb w8,[x9, #0x1]
7101d49f0c  cmp w8,w21
7101d49f10  b.ne 0x7101d49f64
7101d49f14  b 0x7101d4a154
7101d49f18  ldur w8,[x9, #0x1]
7101d49f1c  cmp w8,w21
7101d49f20  b.ne 0x7101d49f64
7101d49f24  b 0x7101d4a154
7101d49f28  mov w8,wzr
7101d49f2c  cmp w8,w21
7101d49f30  b.ne 0x7101d49f64
7101d49f34  b 0x7101d4a154
7101d49f38  ldrsb w8,[x9, #0x1]
7101d49f3c  cmp w8,w21
7101d49f40  b.ne 0x7101d49f64
7101d49f44  b 0x7101d4a154
7101d49f48  ldursh w8,[x9, #0x1]
7101d49f4c  cmp w8,w21
7101d49f50  b.ne 0x7101d49f64
7101d49f54  b 0x7101d4a154
7101d49f58  ldurh w8,[x9, #0x1]
7101d49f5c  cmp w8,w21
7101d49f60  b.eq 0x7101d4a154
7101d49f64  add w22,w22,#0x1
7101d49f68  cmp w22,w27
7101d49f6c  b.lt 0x7101d49e54
7101d49f70  mov x9,xzr
7101d49f74  add x8,sp,#0x20
7101d49f78  adrp x10,0x710428f000
7101d49f7c  add x10,x10,#0xf42
7101d49f80  str xzr,[sp, #0x20]
7101d49f84  b 0x7101d49f90
7101d49f88  add x9,x9,#0x2
7101d49f8c  strb w12,[x11, #0x9]
7101d49f90  add x12,x10,x9
7101d49f94  ldrb w13,[x12]
7101d49f98  cbz w13,0x7101d49fb0
7101d49f9c  ldrb w12,[x12, #0x1]
7101d49fa0  add x11,x8,x9
7101d49fa4  strb w13,[x11, #0x8]
7101d49fa8  cbnz w12,0x7101d49f88
7101d49fac  add x9,x9,#0x1
7101d49fb0  add x10,sp,#0x20
7101d49fb4  add x8,x10,#0x8
7101d49fb8  ldr w2,[sp, #0xc]
7101d49fbc  strb wzr,[x8, w9, UXTW ]
7101d49fc0  str w9,[sp, #0x24]
7101d49fc4  ldrb w9,[sp, #0x28]
7101d49fc8  mov w8,#0x9dc5
7101d49fcc  movk w8,#0x811c, LSL #16
7101d49fd0  cbz w9,0x7101d4a034
7101d49fd4  add x10,x10,#0x9
7101d49fd8  mov w11,#0x89
7101d49fdc  mov w13,w9
7101d49fe0  mov w12,w8
7101d49fe4  mul w12,w12,w11
7101d49fe8  and w13,w13,#0xff
7101d49fec  eor w12,w12,w13
7101d49ff0  ldrb w13,[x10], #0x1
7101d49ff4  cbnz w13,0x7101d49fe4
7101d49ff8  str w12,[sp, #0x20]
7101d49ffc  add x11,sp,#0x20
7101d4a000  add x12,sp,#0x68
7101d4a004  mov x10,xzr
7101d4a008  add x11,x11,#0x9
7101d4a00c  add x13,x12,#0x8
7101d4a010  add w12,w10,#0x1
7101d4a014  cmp w12,#0x3e
7101d4a018  strb w9,[x13, x10, LSL ]
7101d4a01c  b.hi 0x7101d4a040
7101d4a020  ldrb w9,[x11, x10, LSL ]
7101d4a024  add x12,x10,#0x1
7101d4a028  mov x10,x12
7101d4a02c  cbnz w9,0x7101d4a010
7101d4a030  b 0x7101d4a044
7101d4a034  mov w12,wzr
7101d4a038  str w8,[sp, #0x20]
7101d4a03c  b 0x7101d4a044
7101d4a040  add w12,w10,#0x1
7101d4a044  add x9,sp,#0x68
7101d4a048  add x21,x9,#0x8
7101d4a04c  strb wzr,[x21, w12, UXTW ]
7101d4a050  ldrb w10,[sp, #0x70]
7101d4a054  str w12,[sp, #0x6c]
7101d4a058  cbz w10,0x7101d4a078
7101d4a05c  add x9,x9,#0x9
7101d4a060  mov w11,#0x89
7101d4a064  mul w8,w8,w11
7101d4a068  and w10,w10,#0xff
7101d4a06c  eor w8,w8,w10
7101d4a070  ldrb w10,[x9], #0x1
7101d4a074  cbnz w10,0x7101d4a064
7101d4a078  str w8,[sp, #0x68]
7101d4a07c  ldr x1,[x20]
7101d4a080  add x0,sp,#0x20
7101d4a084  bl 0x7103771d60
7101d4a088  ldr x0,[sp, #0x28]
7101d4a08c  ldr x8,[x0]
7101d4a090  cbz x8,0x7101d4a09c
7101d4a094  ldr x20,[x8, #0x88]
7101d4a098  b 0x7101d4a0a4
7101d4a09c  adrp x20,0x7104867000
7101d4a0a0  add x20,x20,#0xc2e
7101d4a0a4  adrp x8,0x710523d000
7101d4a0a8  add x8,x8,#0x9c8
7101d4a0ac  stp x8,xzr,[sp, #0x20]
7101d4a0b0  cbz x0,0x7101d4a0b8
7101d4a0b4  bl 0x710392eb40
7101d4a0b8  ldr x8,[x19, #0xa0]
7101d4a0bc  ldr x8,[x8]
7101d4a0c0  add x0,x8,#0x8
7101d4a0c4  add x8,sp,#0x10
7101d4a0c8  mov x1,x20
7101d4a0cc  bl 0x7103776640
7101d4a0d0  adrp x1,0x71043cd000
7101d4a0d4  add x1,x1,#0xab4
7101d4a0d8  add x8,sp,#0x20
7101d4a0dc  add x0,sp,#0x10
7101d4a0e0  bl 0x7103776910
7101d4a0e4  add x0,sp,#0x20
7101d4a0e8  mov x1,x21
7101d4a0ec  bl 0x710377a120
7101d4a0f0  ldr x0,[sp, #0x28]
7101d4a0f4  adrp x20,0x710523d000
7101d4a0f8  add x20,x20,#0x9a8
7101d4a0fc  stp x20,xzr,[sp, #0x20]
7101d4a100  cbz x0,0x7101d4a108
7101d4a104  bl 0x710392eb40
7101d4a108  ldr x19,[sp, #0x18]
7101d4a10c  adrp x8,0x710523d000
7101d4a110  add x8,x8,#0x988
7101d4a114  stp x8,xzr,[sp, #0x10]
7101d4a118  cbz x19,0x7101d4a134
7101d4a11c  ldr x0,[x19, #0x18]
7101d4a120  stp x20,xzr,[x19, #0x10]
7101d4a124  cbz x0,0x7101d4a12c
7101d4a128  bl 0x710392eb40
7101d4a12c  mov x0,x19
7101d4a130  bl 0x710392eb40
7101d4a134  ldp x29,x30,[sp, #0x110]
7101d4a138  ldp x20,x19,[sp, #0x100]
7101d4a13c  ldp x22,x21,[sp, #0xf0]
7101d4a140  ldp x24,x23,[sp, #0xe0]
7101d4a144  ldp x26,x25,[sp, #0xd0]
7101d4a148  ldp x28,x27,[sp, #0xc0]
7101d4a14c  add sp,sp,#0x120
7101d4a150  ret
7101d4a154  ldr x8,[x25, #0x730]
7101d4a158  ldr x8,[x8, #0x8]
7101d4a15c  ldr x25,[x8, #0x308]
7101d4a160  ldr x1,[x25, #0x8]
7101d4a164  ldr x8,[x1, #0x20]
7101d4a168  ldrb w9,[x8]
7101d4a16c  cmp w9,#0xc
7101d4a170  b.ne 0x7101d4a1f4
7101d4a174  ldur w9,[x8, #0x1]
7101d4a178  subs w10,w9,#0x1
7101d4a17c  b.lt 0x7101d4a1f4
7101d4a180  ldr x9,[x1, #0x48]
7101d4a184  ldr x14,[x1, #0x18]
7101d4a188  and x12,x9,#0xffffffffff
7101d4a18c  ldursw x9,[x8, #0x5]
7101d4a190  ldp x13,x14,[x14, #0x20]
7101d4a194  mov w11,wzr
7101d4a198  add x14,x14,x9
7101d4a19c  adrp x9,0x7104742000
7101d4a1a0  add x9,x9,#0xdbb
7101d4a1a4  add w15,w10,w11
7101d4a1a8  cmp w15,#0x0
7101d4a1ac  cinc w15,w15,lt
7101d4a1b0  asr w15,w15,#0x1
7101d4a1b4  add x16,x14,w15, SXTW  #0x3
7101d4a1b8  ldr w17,[x16]
7101d4a1bc  ldr x17,[x13, x17, LSL #0x3]
7101d4a1c0  cmp x17,x12
7101d4a1c4  b.eq 0x7101d4a1e4
7101d4a1c8  sub w16,w15,#0x1
7101d4a1cc  cmp x17,x12
7101d4a1d0  csel w10,w16,w10,hi
7101d4a1d4  csinc w11,w11,w15,hi
7101d4a1d8  cmp w11,w10
7101d4a1dc  b.le 0x7101d4a1a4
7101d4a1e0  b 0x7101d4a1fc
7101d4a1e4  ldrsw x9,[x16, #0x4]
7101d4a1e8  tbnz w9,#0x1f,0x7101d4a1f4
7101d4a1ec  add x9,x8,x9
7101d4a1f0  b 0x7101d4a1fc
7101d4a1f4  adrp x9,0x7104742000
7101d4a1f8  add x9,x9,#0xdbb
7101d4a1fc  ldrb w8,[x9]
7101d4a200  sub w8,w8,#0xb
7101d4a204  cmp w8,#0x1
7101d4a208  b.hi 0x7101d4a34c
7101d4a20c  ldur w26,[x9, #0x1]
7101d4a210  cmp w26,#0x1
7101d4a214  b.lt 0x7101d4a34c
7101d4a218  mov w22,wzr
7101d4a21c  adrp x27,0x7104742000
7101d4a220  add x27,x27,#0xdbb
7101d4a224  adrp x23,0x71044fa000
7101d4a228  add x23,x23,#0xdd4
7101d4a22c  b 0x7101d4a234
7101d4a230  ldr x1,[x25, #0x8]
7101d4a234  add x0,sp,#0x20
7101d4a238  mov w2,w22
7101d4a23c  bl 0x710326a3e0
7101d4a240  ldr x8,[sp, #0x28]
7101d4a244  ldrb w9,[x8]
7101d4a248  cmp w9,#0xc
7101d4a24c  mov x9,x27
7101d4a250  b.ne 0x7101d4a2c8
7101d4a254  ldur w9,[x8, #0x1]
7101d4a258  subs w9,w9,#0x1
7101d4a25c  b.lt 0x7101d4a2c4
7101d4a260  ldr x13,[sp, #0x20]
7101d4a264  ldursw x12,[x8, #0x5]
7101d4a268  mov w10,wzr
7101d4a26c  ldp x11,x13,[x13, #0x20]
7101d4a270  add x12,x13,x12
7101d4a274  add w13,w9,w10
7101d4a278  cmp w13,#0x0
7101d4a27c  cinc w13,w13,lt
7101d4a280  asr w13,w13,#0x1
7101d4a284  add x14,x12,w13, SXTW  #0x3
7101d4a288  ldr w15,[x14]
7101d4a28c  ldr x15,[x11, x15, LSL #0x3]
7101d4a290  cmp x15,x24
7101d4a294  b.eq 0x7101d4a2b4
7101d4a298  sub w14,w13,#0x1
7101d4a29c  cmp x15,x24
7101d4a2a0  csel w9,w14,w9,hi
7101d4a2a4  csinc w10,w10,w13,hi
7101d4a2a8  cmp w10,w9
7101d4a2ac  b.le 0x7101d4a274
7101d4a2b0  b 0x7101d4a2c4
7101d4a2b4  ldrsw x9,[x14, #0x4]
7101d4a2b8  tbnz w9,#0x1f,0x7101d4a2c4
7101d4a2bc  add x9,x8,x9
7101d4a2c0  b 0x7101d4a2c8
7101d4a2c4  mov x9,x27
7101d4a2c8  ldrb w8,[x9]
7101d4a2cc  sub w8,w8,#0x1
7101d4a2d0  cmp w8,#0x6
7101d4a2d4  b.hi 0x7101d4a304
7101d4a2d8  ldrsw x8,[x23, x8, LSL #0x2]
7101d4a2dc  add x8,x8,x23
7101d4a2e0  br x8
7101d4a2e4  ldrb w8,[x9, #0x1]
7101d4a2e8  cmp w8,w21
7101d4a2ec  b.ne 0x7101d4a340
7101d4a2f0  b 0x7101d4a3ec
7101d4a2f4  ldur w8,[x9, #0x1]
7101d4a2f8  cmp w8,w21
7101d4a2fc  b.ne 0x7101d4a340
7101d4a300  b 0x7101d4a3ec
7101d4a304  mov w8,wzr
7101d4a308  cmp w8,w21
7101d4a30c  b.ne 0x7101d4a340
7101d4a310  b 0x7101d4a3ec
7101d4a314  ldrsb w8,[x9, #0x1]
7101d4a318  cmp w8,w21
7101d4a31c  b.ne 0x7101d4a340
7101d4a320  b 0x7101d4a3ec
7101d4a324  ldursh w8,[x9, #0x1]
7101d4a328  cmp w8,w21
7101d4a32c  b.ne 0x7101d4a340
7101d4a330  b 0x7101d4a3ec
7101d4a334  ldurh w8,[x9, #0x1]
7101d4a338  cmp w8,w21
7101d4a33c  b.eq 0x7101d4a3ec
7101d4a340  add w22,w22,#0x1
7101d4a344  cmp w22,w26
7101d4a348  b.lt 0x7101d4a230
7101d4a34c  strb wzr,[sp, #0x28]
7101d4a350  str xzr,[sp, #0x20]
7101d4a354  ldr w2,[sp, #0xc]
7101d4a358  add x9,sp,#0x20
7101d4a35c  mov x8,xzr
7101d4a360  add x9,x9,#0x8
7101d4a364  add x10,sp,#0x68
7101d4a368  b 0x7101d4a374
7101d4a36c  add x8,x8,#0x2
7101d4a370  strb w11,[x12, #0x9]
7101d4a374  add x11,x9,x8
7101d4a378  ldrb w13,[x11]
7101d4a37c  cbz w13,0x7101d4a3a8
7101d4a380  add w14,w8,#0x1
7101d4a384  add x12,x10,x8
7101d4a388  cmp w14,#0x3f
7101d4a38c  strb w13,[x12, #0x8]
7101d4a390  b.cs 0x7101d4a3a4
7101d4a394  ldrb w11,[x11, #0x1]
7101d4a398  cbnz w11,0x7101d4a36c
7101d4a39c  add x8,x8,#0x1
7101d4a3a0  b 0x7101d4a3a8
7101d4a3a4  add w8,w8,#0x1
7101d4a3a8  add x11,sp,#0x68
7101d4a3ac  add x21,x11,#0x8
7101d4a3b0  mov w9,#0x9dc5
7101d4a3b4  movk w9,#0x811c, LSL #16
7101d4a3b8  strb wzr,[x21, w8, UXTW ]
7101d4a3bc  ldrb w10,[sp, #0x70]
7101d4a3c0  str w8,[sp, #0x6c]
7101d4a3c4  cbz w10,0x7101d4a3e4
7101d4a3c8  add x8,x11,#0x9
7101d4a3cc  mov w11,#0x89
7101d4a3d0  mul w9,w9,w11
7101d4a3d4  and w10,w10,#0xff
7101d4a3d8  eor w9,w9,w10
7101d4a3dc  ldrb w10,[x8], #0x1
7101d4a3e0  cbnz w10,0x7101d4a3d0
7101d4a3e4  str w9,[sp, #0x68]
7101d4a3e8  b 0x7101d4a07c
7101d4a3ec  adrp x0,0x71042e5000
7101d4a3f0  add x0,x0,#0x7c8
7101d4a3f4  add x8,sp,#0x20
7101d4a3f8  mov w1,w21
7101d4a3fc  bl 0x71003a4ca0
7101d4a400  b 0x7101d4a354
