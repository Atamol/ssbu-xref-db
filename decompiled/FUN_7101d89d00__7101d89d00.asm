// addr:      7101d89d00
// offset:    0x1d89d00
// name:      FUN_7101d89d00
// mangled:   
// size:      10792

7101d89d00  str d8,[sp, #-0x70]!
7101d89d04  stp x28,x27,[sp, #0x10]
7101d89d08  stp x26,x25,[sp, #0x20]
7101d89d0c  stp x24,x23,[sp, #0x30]
7101d89d10  stp x22,x21,[sp, #0x40]
7101d89d14  stp x20,x19,[sp, #0x50]
7101d89d18  stp x29,x30,[sp, #0x60]
7101d89d1c  add x29,sp,#0x60
7101d89d20  sub sp,sp,#0x220
7101d89d24  mov w1,#0x1
7101d89d28  mov x26,x0
7101d89d2c  bl 0x7101d8c730
7101d89d30  mov x0,x26
7101d89d34  bl 0x7101d8dc90
7101d89d38  adrp x8,0x710532f000
7101d89d3c  ldr x8,[x8, #0x730]
7101d89d40  ldr x25,[x8, #0x8]
7101d89d44  ldrsh w8,[x26, #0x200]
7101d89d48  add x24,x26,#0x120
7101d89d4c  add x23,x26,#0x10
7101d89d50  cmn w8,#0x1
7101d89d54  b.eq 0x7101d89da4
7101d89d58  adrp x1,0x710435b000
7101d89d5c  add x1,x1,#0xe8f
7101d89d60  add x8,sp,#0x148
7101d89d64  mov x0,x24
7101d89d68  mov w2,wzr
7101d89d6c  bl 0x7103776640
7101d89d70  ldr x0,[sp, #0x150]
7101d89d74  ldrh w19,[x26, #0x200]
7101d89d78  fmov s0,0x3f800000
7101d89d7c  adrp x1,0x710438b000
7101d89d80  add x1,x1,#0x28f
7101d89d84  bl 0x7103778300
7101d89d88  ldr x8,[x25, #0x1d8]
7101d89d8c  orr w9,wzr,#0xffff
7101d89d90  cmp x19,x9
7101d89d94  b.eq 0x7101d89db0
7101d89d98  add x9,x8,w19, SXTH  #0x1
7101d89d9c  ldrh w9,[x9, #0x60]
7101d89da0  b 0x7101d89db4
7101d89da4  mov w21,wzr
7101d89da8  mov w22,wzr
7101d89dac  b 0x7101d89eac
7101d89db0  mov w9,#0xffffffff
7101d89db4  ldp x10,x8,[x8, #0x20]
7101d89db8  sub x8,x8,x10
7101d89dbc  orr x11,xzr,#-0x3333333333333334
7101d89dc0  movk x11,#0xcccd
7101d89dc4  asr x8,x8,#0x6
7101d89dc8  mul x8,x8,x11
7101d89dcc  mov w11,#0x140
7101d89dd0  madd x10,x9,x11,x10
7101d89dd4  adrp x11,0x7105182000
7101d89dd8  add x11,x11,#0xb08
7101d89ddc  cmp x8,x9
7101d89de0  csel x8,x10,x11,hi
7101d89de4  ldr x0,[x25, #0x218]
7101d89de8  ldrh w1,[x8, #0x6a]
7101d89dec  bl 0x71032a0fd0
7101d89df0  and w22,w0,#0xff
7101d89df4  adrp x1,0x710424f000
7101d89df8  add x1,x1,#0xa8f
7101d89dfc  add x0,sp,#0x148
7101d89e00  mov w2,w22
7101d89e04  bl 0x7103778430
7101d89e08  add x0,sp,#0xc8
7101d89e0c  add x1,sp,#0x148
7101d89e10  add x20,x26,#0x208
7101d89e14  bl 0x7103776390
7101d89e18  mov w8,#0x1
7101d89e1c  add x2,sp,#0xc8
7101d89e20  mov w4,#0x1
7101d89e24  mov w7,#0x2
7101d89e28  mov x0,x20
7101d89e2c  str w8,[sp, #0x8]
7101d89e30  mov x1,x23
7101d89e34  mov x3,x19
7101d89e38  strb w8,[sp]
7101d89e3c  mov w5,wzr
7101d89e40  mov w6,wzr
7101d89e44  bl 0x7101d8e0c0
7101d89e48  ldr x19,[sp, #0xd0]
7101d89e4c  adrp x20,0x710523d000
7101d89e50  add x20,x20,#0x988
7101d89e54  stp x20,xzr,[sp, #0xc8]
7101d89e58  cbz x19,0x7101d89e7c
7101d89e5c  ldr x0,[x19, #0x18]
7101d89e60  adrp x8,0x710523d000
7101d89e64  add x8,x8,#0x9a8
7101d89e68  stp x8,xzr,[x19, #0x10]
7101d89e6c  cbz x0,0x7101d89e74
7101d89e70  bl 0x710392eb40
7101d89e74  mov x0,x19
7101d89e78  bl 0x710392eb40
7101d89e7c  ldr x19,[sp, #0x150]
7101d89e80  stp x20,xzr,[sp, #0x148]
7101d89e84  cbz x19,0x7101d89ea8
7101d89e88  ldr x0,[x19, #0x18]
7101d89e8c  adrp x8,0x710523d000
7101d89e90  add x8,x8,#0x9a8
7101d89e94  stp x8,xzr,[x19, #0x10]
7101d89e98  cbz x0,0x7101d89ea0
7101d89e9c  bl 0x710392eb40
7101d89ea0  mov x0,x19
7101d89ea4  bl 0x710392eb40
7101d89ea8  mov w21,#0x1
7101d89eac  ldrsh w8,[x26, #0x202]
7101d89eb0  cmn w8,#0x1
7101d89eb4  stur x24,[x29, #-0x58]
7101d89eb8  b.eq 0x7101d8a010
7101d89ebc  adrp x1,0x710435b000
7101d89ec0  add x1,x1,#0xe8f
7101d89ec4  add x8,sp,#0x148
7101d89ec8  mov x0,x24
7101d89ecc  mov w2,w21
7101d89ed0  bl 0x7103776640
7101d89ed4  ldr x0,[sp, #0x150]
7101d89ed8  ldrh w19,[x26, #0x202]
7101d89edc  fmov s0,0x3f800000
7101d89ee0  adrp x1,0x710438b000
7101d89ee4  add x1,x1,#0x28f
7101d89ee8  bl 0x7103778300
7101d89eec  ldr x8,[x25, #0x1d8]
7101d89ef0  orr w9,wzr,#0xffff
7101d89ef4  cmp x19,x9
7101d89ef8  b.eq 0x7101d89f08
7101d89efc  add x9,x8,w19, SXTH  #0x1
7101d89f00  ldrh w9,[x9, #0x60]
7101d89f04  b 0x7101d89f0c
7101d89f08  mov w9,#0xffffffff
7101d89f0c  ldp x10,x8,[x8, #0x20]
7101d89f10  sub x8,x8,x10
7101d89f14  orr x11,xzr,#-0x3333333333333334
7101d89f18  movk x11,#0xcccd
7101d89f1c  asr x8,x8,#0x6
7101d89f20  mul x8,x8,x11
7101d89f24  mov w11,#0x140
7101d89f28  madd x10,x9,x11,x10
7101d89f2c  adrp x11,0x7105182000
7101d89f30  add x11,x11,#0xb08
7101d89f34  cmp x8,x9
7101d89f38  csel x8,x10,x11,hi
7101d89f3c  ldr x0,[x25, #0x218]
7101d89f40  ldrh w1,[x8, #0x6a]
7101d89f44  bl 0x71032a0fd0
7101d89f48  and w24,w0,#0xff
7101d89f4c  adrp x1,0x710424f000
7101d89f50  add x1,x1,#0xa8f
7101d89f54  add x0,sp,#0x148
7101d89f58  mov w2,w24
7101d89f5c  bl 0x7103778430
7101d89f60  add x8,x26,x21, LSL #0x5
7101d89f64  add x0,sp,#0xc8
7101d89f68  add x1,sp,#0x148
7101d89f6c  add x20,x8,#0x208
7101d89f70  bl 0x7103776390
7101d89f74  mov w8,#0x1
7101d89f78  add x2,sp,#0xc8
7101d89f7c  mov w4,#0x1
7101d89f80  mov w7,#0x2
7101d89f84  mov x0,x20
7101d89f88  str w8,[sp, #0x8]
7101d89f8c  mov x1,x23
7101d89f90  mov x3,x19
7101d89f94  strb w8,[sp]
7101d89f98  mov w5,wzr
7101d89f9c  mov w6,wzr
7101d89fa0  bl 0x7101d8e0c0
7101d89fa4  ldr x19,[sp, #0xd0]
7101d89fa8  adrp x20,0x710523d000
7101d89fac  add x20,x20,#0x988
7101d89fb0  stp x20,xzr,[sp, #0xc8]
7101d89fb4  cbz x19,0x7101d89fd8
7101d89fb8  ldr x0,[x19, #0x18]
7101d89fbc  adrp x8,0x710523d000
7101d89fc0  add x8,x8,#0x9a8
7101d89fc4  stp x8,xzr,[x19, #0x10]
7101d89fc8  cbz x0,0x7101d89fd0
7101d89fcc  bl 0x710392eb40
7101d89fd0  mov x0,x19
7101d89fd4  bl 0x710392eb40
7101d89fd8  add w22,w22,w24
7101d89fdc  ldr x19,[sp, #0x150]
7101d89fe0  ldur x24,[x29, #-0x58]
7101d89fe4  add w21,w21,#0x1
7101d89fe8  stp x20,xzr,[sp, #0x148]
7101d89fec  cbz x19,0x7101d8a010
7101d89ff0  ldr x0,[x19, #0x18]
7101d89ff4  adrp x8,0x710523d000
7101d89ff8  add x8,x8,#0x9a8
7101d89ffc  stp x8,xzr,[x19, #0x10]
7101d8a000  cbz x0,0x7101d8a008
7101d8a004  bl 0x710392eb40
7101d8a008  mov x0,x19
7101d8a00c  bl 0x710392eb40
7101d8a010  ldrsh w8,[x26, #0x204]
7101d8a014  cmn w8,#0x1
7101d8a018  b.eq 0x7101d8a170
7101d8a01c  adrp x1,0x710435b000
7101d8a020  add x1,x1,#0xe8f
7101d8a024  add x8,sp,#0x148
7101d8a028  mov x0,x24
7101d8a02c  mov w2,w21
7101d8a030  bl 0x7103776640
7101d8a034  ldr x0,[sp, #0x150]
7101d8a038  ldrh w19,[x26, #0x204]
7101d8a03c  fmov s0,0x3f800000
7101d8a040  adrp x1,0x710438b000
7101d8a044  add x1,x1,#0x28f
7101d8a048  bl 0x7103778300
7101d8a04c  ldr x8,[x25, #0x1d8]
7101d8a050  orr w9,wzr,#0xffff
7101d8a054  cmp x19,x9
7101d8a058  b.eq 0x7101d8a068
7101d8a05c  add x9,x8,w19, SXTH  #0x1
7101d8a060  ldrh w9,[x9, #0x60]
7101d8a064  b 0x7101d8a06c
7101d8a068  mov w9,#0xffffffff
7101d8a06c  ldp x10,x8,[x8, #0x20]
7101d8a070  sub x8,x8,x10
7101d8a074  orr x11,xzr,#-0x3333333333333334
7101d8a078  movk x11,#0xcccd
7101d8a07c  asr x8,x8,#0x6
7101d8a080  mul x8,x8,x11
7101d8a084  mov w11,#0x140
7101d8a088  madd x10,x9,x11,x10
7101d8a08c  adrp x11,0x7105182000
7101d8a090  add x11,x11,#0xb08
7101d8a094  cmp x8,x9
7101d8a098  csel x8,x10,x11,hi
7101d8a09c  ldr x0,[x25, #0x218]
7101d8a0a0  ldrh w1,[x8, #0x6a]
7101d8a0a4  bl 0x71032a0fd0
7101d8a0a8  and w24,w0,#0xff
7101d8a0ac  adrp x1,0x710424f000
7101d8a0b0  add x1,x1,#0xa8f
7101d8a0b4  add x0,sp,#0x148
7101d8a0b8  mov w2,w24
7101d8a0bc  bl 0x7103778430
7101d8a0c0  add x8,x26,x21, LSL #0x5
7101d8a0c4  add x0,sp,#0xc8
7101d8a0c8  add x1,sp,#0x148
7101d8a0cc  add x20,x8,#0x208
7101d8a0d0  bl 0x7103776390
7101d8a0d4  mov w8,#0x1
7101d8a0d8  add x2,sp,#0xc8
7101d8a0dc  mov w4,#0x1
7101d8a0e0  mov w7,#0x2
7101d8a0e4  mov x0,x20
7101d8a0e8  str w8,[sp, #0x8]
7101d8a0ec  mov x1,x23
7101d8a0f0  mov x3,x19
7101d8a0f4  strb w8,[sp]
7101d8a0f8  mov w5,wzr
7101d8a0fc  mov w6,wzr
7101d8a100  bl 0x7101d8e0c0
7101d8a104  ldr x19,[sp, #0xd0]
7101d8a108  adrp x20,0x710523d000
7101d8a10c  add x20,x20,#0x988
7101d8a110  stp x20,xzr,[sp, #0xc8]
7101d8a114  cbz x19,0x7101d8a138
7101d8a118  ldr x0,[x19, #0x18]
7101d8a11c  adrp x8,0x710523d000
7101d8a120  add x8,x8,#0x9a8
7101d8a124  stp x8,xzr,[x19, #0x10]
7101d8a128  cbz x0,0x7101d8a130
7101d8a12c  bl 0x710392eb40
7101d8a130  mov x0,x19
7101d8a134  bl 0x710392eb40
7101d8a138  add w22,w22,w24
7101d8a13c  ldr x19,[sp, #0x150]
7101d8a140  ldur x24,[x29, #-0x58]
7101d8a144  add w21,w21,#0x1
7101d8a148  stp x20,xzr,[sp, #0x148]
7101d8a14c  cbz x19,0x7101d8a170
7101d8a150  ldr x0,[x19, #0x18]
7101d8a154  adrp x8,0x710523d000
7101d8a158  add x8,x8,#0x9a8
7101d8a15c  stp x8,xzr,[x19, #0x10]
7101d8a160  cbz x0,0x7101d8a168
7101d8a164  bl 0x710392eb40
7101d8a168  mov x0,x19
7101d8a16c  bl 0x710392eb40
7101d8a170  ldrsh x8,[x26, #0x15c]
7101d8a174  cmn x8,#0x1
7101d8a178  b.eq 0x7101d8a1c0
7101d8a17c  ldr x9,[x25, #0x1d8]
7101d8a180  add x8,x9,x8, LSL #0x1
7101d8a184  ldrh w8,[x8, #0x60]
7101d8a188  ldp x10,x9,[x9, #0x20]
7101d8a18c  sub x9,x9,x10
7101d8a190  orr x11,xzr,#-0x3333333333333334
7101d8a194  movk x11,#0xcccd
7101d8a198  asr x9,x9,#0x6
7101d8a19c  mul x9,x9,x11
7101d8a1a0  mov w11,#0x140
7101d8a1a4  madd x10,x8,x11,x10
7101d8a1a8  adrp x11,0x7105182000
7101d8a1ac  add x11,x11,#0xb08
7101d8a1b0  cmp x9,x8
7101d8a1b4  csel x8,x10,x11,hi
7101d8a1b8  ldrb w25,[x8, #0x69]
7101d8a1bc  b 0x7101d8a1c4
7101d8a1c0  mov w25,wzr
7101d8a1c4  cmp w21,#0x2
7101d8a1c8  str x26,[sp, #0x10]
7101d8a1cc  b.hi 0x7101d8a304
7101d8a1d0  fmov s8,0x3f800000
7101d8a1d4  adrp x23,0x710435b000
7101d8a1d8  add x23,x23,#0xe8f
7101d8a1dc  adrp x26,0x710523d000
7101d8a1e0  add x26,x26,#0x988
7101d8a1e4  adrp x27,0x710523d000
7101d8a1e8  add x27,x27,#0x9a8
7101d8a1ec  add w28,w22,#0x1
7101d8a1f0  mov w22,w21
7101d8a1f4  add x8,sp,#0x148
7101d8a1f8  mov x0,x24
7101d8a1fc  mov x1,x23
7101d8a200  mov w2,w21
7101d8a204  bl 0x7103776640
7101d8a208  add x0,sp,#0x148
7101d8a20c  bl 0x71025b0f50
7101d8a210  ldr x19,[sp, #0x150]
7101d8a214  mov x0,x19
7101d8a218  cmp w28,w25
7101d8a21c  b.ls 0x7101d8a234
7101d8a220  mov v0.16B,v8.16B
7101d8a224  adrp x1,0x7104348000
7101d8a228  add x1,x1,#0x100
7101d8a22c  bl 0x7103778300
7101d8a230  b 0x7101d8a2c8
7101d8a234  mov v0.16B,v8.16B
7101d8a238  adrp x1,0x710438b000
7101d8a23c  add x1,x1,#0x28f
7101d8a240  bl 0x7103778300
7101d8a244  mov v0.16B,v8.16B
7101d8a248  mov x0,x19
7101d8a24c  adrp x1,0x71043be000
7101d8a250  add x1,x1,#0x9f8
7101d8a254  bl 0x7103778300
7101d8a258  add x8,sp,#0x18
7101d8a25c  add x0,sp,#0x148
7101d8a260  adrp x1,0x710436a000
7101d8a264  add x1,x1,#0xc4b
7101d8a268  bl 0x7103776910
7101d8a26c  ldr x20,[sp, #0x20]
7101d8a270  mov w1,#0x1
7101d8a274  mov x0,x20
7101d8a278  bl 0x71037790a0
7101d8a27c  add x8,sp,#0x60
7101d8a280  add x0,sp,#0x148
7101d8a284  adrp x1,0x7104441000
7101d8a288  add x1,x1,#0x875
7101d8a28c  bl 0x7103776910
7101d8a290  ldr x24,[sp, #0x68]
7101d8a294  mov w1,#0x1
7101d8a298  mov x0,x24
7101d8a29c  bl 0x71037790a0
7101d8a2a0  stp x27,xzr,[sp, #0x60]
7101d8a2a4  cbz x24,0x7101d8a2b0
7101d8a2a8  mov x0,x24
7101d8a2ac  bl 0x710392eb40
7101d8a2b0  add w22,w22,#0x1
7101d8a2b4  stp x27,xzr,[sp, #0x18]
7101d8a2b8  cbz x20,0x7101d8a2c4
7101d8a2bc  mov x0,x20
7101d8a2c0  bl 0x710392eb40
7101d8a2c4  ldur x24,[x29, #-0x58]
7101d8a2c8  add w21,w21,#0x1
7101d8a2cc  stp x26,xzr,[sp, #0x148]
7101d8a2d0  cbz x19,0x7101d8a2ec
7101d8a2d4  ldr x0,[x19, #0x18]
7101d8a2d8  stp x27,xzr,[x19, #0x10]
7101d8a2dc  cbz x0,0x7101d8a2e4
7101d8a2e0  bl 0x710392eb40
7101d8a2e4  mov x0,x19
7101d8a2e8  bl 0x710392eb40
7101d8a2ec  add w28,w28,#0x1
7101d8a2f0  cmp w21,#0x3
7101d8a2f4  b.ne 0x7101d8a1f4
7101d8a2f8  ldr x28,[sp, #0x10]
7101d8a2fc  cbnz w22,0x7101d8a310
7101d8a300  b 0x7101d8a35c
7101d8a304  mov w22,w21
7101d8a308  ldr x28,[sp, #0x10]
7101d8a30c  cbz w22,0x7101d8a35c
7101d8a310  ldr w8,[x28, #0x158]
7101d8a314  cmp w8,#0x8
7101d8a318  b.ne 0x7101d8a348
7101d8a31c  adrp x2,0x71042f8000
7101d8a320  add x2,x2,#0x6cf
7101d8a324  add x0,sp,#0x148
7101d8a328  mov w1,#0x20
7101d8a32c  mov w3,w22
7101d8a330  bl 0x71039c04d0
7101d8a334  ldr x0,[x28, #0x128]
7101d8a338  fmov s0,0x3f800000
7101d8a33c  add x1,sp,#0x148
7101d8a340  bl 0x7103778300
7101d8a344  b 0x7101d8a35c
7101d8a348  adrp x1,0x71042b4000
7101d8a34c  add x1,x1,#0x841
7101d8a350  mov x0,x24
7101d8a354  mov w2,w22
7101d8a358  bl 0x7103778430
7101d8a35c  ldr w8,[x28, #0x158]
7101d8a360  sub w8,w8,#0x1
7101d8a364  cmp w8,#0x8
7101d8a368  b.hi 0x7101d8a778
7101d8a36c  adrp x9,0x71044fb000
7101d8a370  add x9,x9,#0x324
7101d8a374  ldrsw x8,[x9, x8, LSL #0x2]
7101d8a378  add x8,x8,x9
7101d8a37c  br x8
7101d8a380  ldr x8,[x28, #0x138]
7101d8a384  ldr x8,[x8, #0x8]
7101d8a388  add x22,x28,#0x130
7101d8a38c  cbz x8,0x7101d8a3a4
7101d8a390  ldr x8,[x8, #0x18]
7101d8a394  cbz x8,0x7101d8a3a4
7101d8a398  ldrb w9,[x8, #0x58]
7101d8a39c  orr w9,w9,#0x1
7101d8a3a0  strb w9,[x8, #0x58]
7101d8a3a4  adrp x1,0x7104308000
7101d8a3a8  add x1,x1,#0x855
7101d8a3ac  sub x8,x29,#0x78
7101d8a3b0  mov x0,x22
7101d8a3b4  bl 0x7103776910
7101d8a3b8  adrp x1,0x71043be000
7101d8a3bc  add x1,x1,#0xa54
7101d8a3c0  sub x8,x29,#0x88
7101d8a3c4  mov x0,x22
7101d8a3c8  bl 0x7103776910
7101d8a3cc  adrp x1,0x71043cf000
7101d8a3d0  add x1,x1,#0x7bb
7101d8a3d4  sub x8,x29,#0x98
7101d8a3d8  mov x0,x22
7101d8a3dc  bl 0x7103776910
7101d8a3e0  adrp x8,0x710532f000
7101d8a3e4  ldr x8,[x8, #0x730]
7101d8a3e8  ldr x26,[x8, #0x8]
7101d8a3ec  adrp x8,0x7105329000
7101d8a3f0  ldr x8,[x8, #0xf98]
7101d8a3f4  ldr x20,[x8]
7101d8a3f8  ldrsh w8,[x28, #0x15c]
7101d8a3fc  cmn w8,#0x1
7101d8a400  b.eq 0x7101d8a450
7101d8a404  cmp w8,#0x7cf
7101d8a408  b.gt 0x7101d8a450
7101d8a40c  ldr x19,[x26, #0x1d8]
7101d8a410  ldp x10,x11,[x19, #0x20]
7101d8a414  sxtw x8,w8
7101d8a418  add x9,x19,x8, LSL #0x1
7101d8a41c  ldrh w9,[x9, #0x60]
7101d8a420  sub x10,x11,x10
7101d8a424  mov w11,#0xcccd
7101d8a428  movk w11,#0xcccc, LSL #16
7101d8a42c  lsr x10,x10,#0x6
7101d8a430  mul w10,w10,w11
7101d8a434  cmp w10,w9
7101d8a438  b.ls 0x7101d8a450
7101d8a43c  ldr x9,[x20, #0x30]
7101d8a440  mov w10,#0x24
7101d8a444  madd x9,x8,x10,x9
7101d8a448  ldrb w9,[x9, #0x1]
7101d8a44c  tbnz w9,#0x3,0x7101d8b378
7101d8a450  adrp x1,0x7104292000
7101d8a454  add x1,x1,#0x204
7101d8a458  add x8,sp,#0x148
7101d8a45c  mov x0,x22
7101d8a460  bl 0x7103776910
7101d8a464  adrp x1,0x710424f000
7101d8a468  add x1,x1,#0x8af
7101d8a46c  add x0,sp,#0x148
7101d8a470  bl 0x710377a120
7101d8a474  ldr x0,[sp, #0x150]
7101d8a478  adrp x8,0x710523d000
7101d8a47c  add x8,x8,#0x9a8
7101d8a480  stp x8,xzr,[sp, #0x148]
7101d8a484  cbz x0,0x7101d8a48c
7101d8a488  bl 0x710392eb40
7101d8a48c  adrp x1,0x710438b000
7101d8a490  add x1,x1,#0x306
7101d8a494  sub x8,x29,#0xa8
7101d8a498  mov x0,x22
7101d8a49c  bl 0x7103776640
7101d8a4a0  ldrsh x8,[x28, #0x15c]
7101d8a4a4  ldr x9,[x26, #0x1d8]
7101d8a4a8  cmn x8,#0x1
7101d8a4ac  b.eq 0x7101d8a4b8
7101d8a4b0  add x8,x9,x8, LSL #0x1
7101d8a4b4  ldrh w8,[x8, #0x60]
7101d8a4b8  ldp x10,x9,[x9, #0x20]
7101d8a4bc  sub x9,x9,x10
7101d8a4c0  orr x11,xzr,#-0x3333333333333334
7101d8a4c4  movk x11,#0xcccd
7101d8a4c8  asr x9,x9,#0x6
7101d8a4cc  mul x9,x9,x11
7101d8a4d0  mov w11,#0x140
7101d8a4d4  madd x10,x8,x11,x10
7101d8a4d8  adrp x28,0x7105182000
7101d8a4dc  add x28,x28,#0xb08
7101d8a4e0  cmp x9,x8
7101d8a4e4  csel x8,x10,x28,hi
7101d8a4e8  ldrb w8,[x8, #0x68]
7101d8a4ec  cmp w8,#0x3
7101d8a4f0  b.hi 0x7101d8abf8
7101d8a4f4  adrp x9,0x71044fb000
7101d8a4f8  add x9,x9,#0x348
7101d8a4fc  ldrsw x8,[x9, x8, LSL #0x2]
7101d8a500  add x8,x8,x9
7101d8a504  br x8
7101d8a508  ldur x21,[x29, #-0xa0]
7101d8a50c  adrp x1,0x7104464000
7101d8a510  add x1,x1,#0x374
7101d8a514  b 0x7101d8ac48
7101d8a518  ldr x8,[x28, #0x138]
7101d8a51c  ldr x8,[x8, #0x8]
7101d8a520  cbz x8,0x7101d8c688
7101d8a524  ldr x8,[x8, #0x18]
7101d8a528  cbz x8,0x7101d8c688
7101d8a52c  ldrb w9,[x8, #0x58]
7101d8a530  and w9,w9,#0xfe
7101d8a534  strb w9,[x8, #0x58]
7101d8a538  b 0x7101d8c688
7101d8a53c  ldr x0,[x28, #0x138]
7101d8a540  ldr x8,[x0, #0x8]
7101d8a544  add x20,x28,#0x130
7101d8a548  cbz x8,0x7101d8a56c
7101d8a54c  ldr x8,[x8, #0x18]
7101d8a550  cbz x8,0x7101d8a56c
7101d8a554  ldrb w10,[x8, #0x58]
7101d8a558  ldrb w9,[x28, #0x339]
7101d8a55c  and w10,w10,#0xfe
7101d8a560  orr w9,w10,w9
7101d8a564  strb w9,[x8, #0x58]
7101d8a568  ldr x0,[x28, #0x138]
7101d8a56c  fmov s0,0x3f800000
7101d8a570  adrp x1,0x710436a000
7101d8a574  add x1,x1,#0x273
7101d8a578  bl 0x7103778300
7101d8a57c  adrp x1,0x7104308000
7101d8a580  add x1,x1,#0x855
7101d8a584  add x8,sp,#0x60
7101d8a588  mov x0,x20
7101d8a58c  bl 0x7103776910
7101d8a590  adrp x1,0x71043be000
7101d8a594  add x1,x1,#0xa54
7101d8a598  sub x8,x29,#0x78
7101d8a59c  mov x0,x20
7101d8a5a0  bl 0x7103776910
7101d8a5a4  adrp x1,0x71043cf000
7101d8a5a8  add x1,x1,#0x7bb
7101d8a5ac  sub x8,x29,#0x88
7101d8a5b0  mov x0,x20
7101d8a5b4  bl 0x7103776910
7101d8a5b8  ldrsh w8,[x28, #0x15c]
7101d8a5bc  cmn w8,#0x1
7101d8a5c0  b.eq 0x7101d8aa3c
7101d8a5c4  cmp w8,#0x7cf
7101d8a5c8  b.gt 0x7101d8aa3c
7101d8a5cc  adrp x9,0x710532f000
7101d8a5d0  ldr x9,[x9, #0x730]
7101d8a5d4  ldr x21,[x9, #0x8]
7101d8a5d8  ldr x19,[x21, #0x1d8]
7101d8a5dc  ldp x10,x11,[x19, #0x20]
7101d8a5e0  sxtw x8,w8
7101d8a5e4  add x9,x19,x8, LSL #0x1
7101d8a5e8  ldrh w9,[x9, #0x60]
7101d8a5ec  sub x10,x11,x10
7101d8a5f0  lsr x10,x10,#0x6
7101d8a5f4  mov w26,#0xcccd
7101d8a5f8  movk w26,#0xcccc, LSL #16
7101d8a5fc  mul w10,w10,w26
7101d8a600  cmp w10,w9
7101d8a604  b.ls 0x7101d8aa3c
7101d8a608  and x1,x8,#0xffff
7101d8a60c  mov x0,x19
7101d8a610  bl 0x71032a9470
7101d8a614  mov x2,x0
7101d8a618  add x0,sp,#0x148
7101d8a61c  mov x1,x19
7101d8a620  add x22,sp,#0x148
7101d8a624  bl 0x71032a9540
7101d8a628  add x1,x22,#0x8
7101d8a62c  adrp x0,0x7104464000
7101d8a630  add x0,x0,#0x1d4
7101d8a634  add x8,sp,#0xc8
7101d8a638  add x19,sp,#0xc8
7101d8a63c  bl 0x71003a4ca0
7101d8a640  add x1,x19,#0x8
7101d8a644  add x0,sp,#0x60
7101d8a648  bl 0x710377a120
7101d8a64c  ldrsh x8,[x28, #0x15c]
7101d8a650  ldr x9,[x21, #0x1d8]
7101d8a654  cmn x8,#0x1
7101d8a658  b.eq 0x7101d8a664
7101d8a65c  add x8,x9,x8, LSL #0x1
7101d8a660  ldrh w8,[x8, #0x60]
7101d8a664  ldp x10,x9,[x9, #0x20]
7101d8a668  sub x9,x9,x10
7101d8a66c  orr x27,xzr,#-0x3333333333333334
7101d8a670  movk x27,#0xcccd
7101d8a674  mov w11,#0x140
7101d8a678  madd x10,x8,x11,x10
7101d8a67c  adrp x25,0x7105182000
7101d8a680  add x25,x25,#0xb08
7101d8a684  adrp x1,0x710424f000
7101d8a688  add x1,x1,#0x8e8
7101d8a68c  asr x9,x9,#0x6
7101d8a690  mul x9,x9,x27
7101d8a694  cmp x9,x8
7101d8a698  add x8,sp,#0x148
7101d8a69c  mov x0,x20
7101d8a6a0  csel x24,x10,x25,hi
7101d8a6a4  bl 0x7103776910
7101d8a6a8  ldrh w3,[x24, #0x5c]
7101d8a6ac  adrp x1,0x710432a000
7101d8a6b0  add x1,x1,#0x47a
7101d8a6b4  add x0,sp,#0x148
7101d8a6b8  mov w2,#0x1
7101d8a6bc  bl 0x710377a280
7101d8a6c0  ldr x0,[sp, #0x150]
7101d8a6c4  adrp x23,0x710523d000
7101d8a6c8  add x23,x23,#0x9a8
7101d8a6cc  stp x23,xzr,[sp, #0x148]
7101d8a6d0  cbz x0,0x7101d8a6d8
7101d8a6d4  bl 0x710392eb40
7101d8a6d8  ldr x2,[x24, #0x110]
7101d8a6dc  and x9,x2,#-0x100000000000000
7101d8a6e0  mov x10,#0x5c00000000000000
7101d8a6e4  and x8,x2,#0xffffffffff
7101d8a6e8  cmp x9,x10
7101d8a6ec  b.ne 0x7101d8b6f4
7101d8a6f0  cbz x8,0x7101d8b6f4
7101d8a6f4  mov x9,#0x832e
7101d8a6f8  movk x9,#0xb2d9, LSL #16
7101d8a6fc  and x8,x2,#0xffffffffff
7101d8a700  movk x9,#0x13, LSL #32
7101d8a704  cmp x8,x9
7101d8a708  b.eq 0x7101d8b708
7101d8a70c  mov x9,#0xb4dc
7101d8a710  movk x9,#0x1d15, LSL #16
7101d8a714  movk x9,#0x11, LSL #32
7101d8a718  cmp x8,x9
7101d8a71c  b.ne 0x7101d8b754
7101d8a720  adrp x8,0x710532f000
7101d8a724  ldr x8,[x8, #0x730]
7101d8a728  ldr x19,[x8, #0x8]
7101d8a72c  ldr x2,[x24, #0x60]
7101d8a730  add x21,sp,#0x148
7101d8a734  ldr x1,[x19, #0x188]
7101d8a738  add x0,sp,#0x148
7101d8a73c  bl 0x7103299d20
7101d8a740  add x1,x21,#0x8
7101d8a744  adrp x0,0x7104280000
7101d8a748  add x0,x0,#0xec3
7101d8a74c  add x8,sp,#0x18
7101d8a750  add x21,sp,#0x18
7101d8a754  bl 0x71003a4ca0
7101d8a758  ldr x1,[x24, #0x60]
7101d8a75c  ldr x0,[x19, #0x188]
7101d8a760  bl 0x710329acf0
7101d8a764  add x3,x21,#0x8
7101d8a768  tbnz w0,#0x0,0x7101d8b79c
7101d8a76c  sub x0,x29,#0x78
7101d8a770  mov x1,x3
7101d8a774  b 0x7101d8b74c
7101d8a778  ldr x8,[x28, #0x138]
7101d8a77c  ldr x8,[x8, #0x8]
7101d8a780  add x20,x28,#0x130
7101d8a784  cbz x8,0x7101d8a79c
7101d8a788  ldr x8,[x8, #0x18]
7101d8a78c  cbz x8,0x7101d8a79c
7101d8a790  ldrb w9,[x8, #0x58]
7101d8a794  orr w9,w9,#0x1
7101d8a798  strb w9,[x8, #0x58]
7101d8a79c  adrp x8,0x710532f000
7101d8a7a0  ldr x8,[x8, #0x730]
7101d8a7a4  ldr x19,[x8, #0x8]
7101d8a7a8  adrp x1,0x71042f5000
7101d8a7ac  add x1,x1,#0xbc0
7101d8a7b0  add x8,sp,#0x60
7101d8a7b4  mov x0,x20
7101d8a7b8  bl 0x7103776640
7101d8a7bc  adrp x1,0x71042c5000
7101d8a7c0  add x1,x1,#0x386
7101d8a7c4  sub x8,x29,#0x78
7101d8a7c8  mov x0,x20
7101d8a7cc  bl 0x7103776640
7101d8a7d0  ldrsh w8,[x28, #0x15c]
7101d8a7d4  cmn w8,#0x1
7101d8a7d8  b.eq 0x7101d8ab10
7101d8a7dc  cmp w8,#0x7cf
7101d8a7e0  b.gt 0x7101d8ab10
7101d8a7e4  ldr x9,[x19, #0x1d8]
7101d8a7e8  sxtw x8,w8
7101d8a7ec  add x10,x9,x8, LSL #0x1
7101d8a7f0  ldrh w11,[x10, #0x60]
7101d8a7f4  ldp x10,x9,[x9, #0x20]
7101d8a7f8  sub x9,x9,x10
7101d8a7fc  asr x12,x9,#0x6
7101d8a800  orr x9,xzr,#-0x3333333333333334
7101d8a804  movk x9,#0xcccd
7101d8a808  mul x12,x12,x9
7101d8a80c  cmp w12,w11
7101d8a810  b.ls 0x7101d8ab10
7101d8a814  mov w13,#0x140
7101d8a818  madd x13,x11,x13,x10
7101d8a81c  cmp x12,x11
7101d8a820  adrp x11,0x710532f000
7101d8a824  ldr x11,[x11, #0x730]
7101d8a828  ldr x11,[x11, #0x8]
7101d8a82c  ldr x12,[x11, #0x1d8]
7101d8a830  add x8,x12,x8, LSL #0x1
7101d8a834  ldrh w8,[x8, #0x60]
7101d8a838  ldp x11,x12,[x12, #0x20]
7101d8a83c  sub x12,x12,x11
7101d8a840  asr x12,x12,#0x6
7101d8a844  mul x9,x12,x9
7101d8a848  adrp x10,0x7105182000
7101d8a84c  add x10,x10,#0xb08
7101d8a850  csel x25,x13,x10,hi
7101d8a854  cmp w9,w8
7101d8a858  b.ls 0x7101d8ba70
7101d8a85c  mov w12,#0x140
7101d8a860  madd x11,x8,x12,x11
7101d8a864  cmp x9,x8
7101d8a868  csel x8,x11,x10,hi
7101d8a86c  ldrb w9,[x8, #0x5e]
7101d8a870  cbz w9,0x7101d8ba48
7101d8a874  mov w22,#0x4
7101d8a878  b 0x7101d8ba74
7101d8a87c  ldr x8,[x28, #0x138]
7101d8a880  ldrsh w9,[x28, #0x15e]
7101d8a884  add x20,x28,#0x130
7101d8a888  ldr x8,[x8, #0x8]
7101d8a88c  cmn w9,#0x1
7101d8a890  b.eq 0x7101d8adb0
7101d8a894  cbz x8,0x7101d8adc8
7101d8a898  ldr x8,[x8, #0x18]
7101d8a89c  cbz x8,0x7101d8adc8
7101d8a8a0  ldrb w9,[x8, #0x58]
7101d8a8a4  orr w9,w9,#0x1
7101d8a8a8  b 0x7101d8adc4
7101d8a8ac  ldr x8,[x28, #0x138]
7101d8a8b0  ldr x8,[x8, #0x8]
7101d8a8b4  add x19,x28,#0x130
7101d8a8b8  cbz x8,0x7101d8a8d0
7101d8a8bc  ldr x8,[x8, #0x18]
7101d8a8c0  cbz x8,0x7101d8a8d0
7101d8a8c4  ldrb w9,[x8, #0x58]
7101d8a8c8  orr w9,w9,#0x1
7101d8a8cc  strb w9,[x8, #0x58]
7101d8a8d0  adrp x8,0x710532f000
7101d8a8d4  ldr x8,[x8, #0x730]
7101d8a8d8  ldr x21,[x8, #0x8]
7101d8a8dc  adrp x1,0x7104422000
7101d8a8e0  add x1,x1,#0x6fb
7101d8a8e4  add x8,sp,#0x18
7101d8a8e8  mov x0,x19
7101d8a8ec  bl 0x7103776910
7101d8a8f0  adrp x1,0x7104422000
7101d8a8f4  add x1,x1,#0x712
7101d8a8f8  add x8,sp,#0x60
7101d8a8fc  mov x0,x19
7101d8a900  bl 0x7103776640
7101d8a904  ldrsh w8,[x28, #0x15c]
7101d8a908  cmn w8,#0x1
7101d8a90c  b.eq 0x7101d8ab6c
7101d8a910  cmp w8,#0x7cf
7101d8a914  b.gt 0x7101d8ab6c
7101d8a918  ldr x19,[x21, #0x1d8]
7101d8a91c  ldp x10,x11,[x19, #0x20]
7101d8a920  sxtw x8,w8
7101d8a924  add x9,x19,x8, LSL #0x1
7101d8a928  ldrh w9,[x9, #0x60]
7101d8a92c  sub x10,x11,x10
7101d8a930  mov w11,#0xcccd
7101d8a934  movk w11,#0xcccc, LSL #16
7101d8a938  lsr x10,x10,#0x6
7101d8a93c  mul w10,w10,w11
7101d8a940  cmp w10,w9
7101d8a944  b.ls 0x7101d8ab6c
7101d8a948  and x1,x8,#0xffff
7101d8a94c  mov x0,x19
7101d8a950  bl 0x71032a9470
7101d8a954  mov x2,x0
7101d8a958  add x0,sp,#0x148
7101d8a95c  mov x1,x19
7101d8a960  add x20,sp,#0x148
7101d8a964  bl 0x71032a9540
7101d8a968  add x1,x20,#0x8
7101d8a96c  adrp x0,0x7104464000
7101d8a970  add x0,x0,#0x1d4
7101d8a974  add x8,sp,#0xc8
7101d8a978  add x19,sp,#0xc8
7101d8a97c  bl 0x71003a4ca0
7101d8a980  add x1,x19,#0x8
7101d8a984  add x0,sp,#0x18
7101d8a988  bl 0x710377a120
7101d8a98c  ldr x20,[sp, #0x68]
7101d8a990  ldr x8,[x20, #0x8]
7101d8a994  cbz x8,0x7101d8a9ac
7101d8a998  ldr x8,[x8, #0x18]
7101d8a99c  cbz x8,0x7101d8a9ac
7101d8a9a0  ldrb w9,[x8, #0x58]
7101d8a9a4  orr w9,w9,#0x1
7101d8a9a8  strb w9,[x8, #0x58]
7101d8a9ac  ldr x0,[x28]
7101d8a9b0  ldrh w2,[x28, #0x15c]
7101d8a9b4  add x1,sp,#0x60
7101d8a9b8  bl 0x7101b14960
7101d8a9bc  ldrsh x8,[x28, #0x15c]
7101d8a9c0  ldr x9,[x21, #0x1d8]
7101d8a9c4  cmn x8,#0x1
7101d8a9c8  b.eq 0x7101d8a9d4
7101d8a9cc  add x8,x9,x8, LSL #0x1
7101d8a9d0  ldrh w8,[x8, #0x60]
7101d8a9d4  ldp x10,x9,[x9, #0x20]
7101d8a9d8  sub x9,x9,x10
7101d8a9dc  orr x11,xzr,#-0x3333333333333334
7101d8a9e0  movk x11,#0xcccd
7101d8a9e4  asr x9,x9,#0x6
7101d8a9e8  mul x9,x9,x11
7101d8a9ec  mov w11,#0x140
7101d8a9f0  madd x10,x8,x11,x10
7101d8a9f4  adrp x11,0x7105182000
7101d8a9f8  add x11,x11,#0xb08
7101d8a9fc  cmp x9,x8
7101d8aa00  csel x19,x10,x11,hi
7101d8aa04  ldrb w8,[x19, #0x5e]
7101d8aa08  cmp w8,#0x3
7101d8aa0c  b.ne 0x7101d8aa28
7101d8aa10  fmov s0,0x3f800000
7101d8aa14  adrp x1,0x710424f000
7101d8aa18  add x1,x1,#0x898
7101d8aa1c  mov x0,x20
7101d8aa20  bl 0x7103778300
7101d8aa24  ldrb w8,[x19, #0x5e]
7101d8aa28  cmp w8,#0x1
7101d8aa2c  mov w8,#0x5a
7101d8aa30  csel w8,w8,wzr,eq
7101d8aa34  str w8,[x28, #0x340]
7101d8aa38  b 0x7101d8abb0
7101d8aa3c  ldr x21,[sp, #0x68]
7101d8aa40  ldr x8,[x21]
7101d8aa44  cbz x8,0x7101d8aa54
7101d8aa48  ldrb w9,[x8, #0x58]
7101d8aa4c  and w9,w9,#0xfe
7101d8aa50  strb w9,[x8, #0x58]
7101d8aa54  ldur x22,[x29, #-0x70]
7101d8aa58  ldr x8,[x22]
7101d8aa5c  cbz x8,0x7101d8aa6c
7101d8aa60  ldrb w9,[x8, #0x58]
7101d8aa64  and w9,w9,#0xfe
7101d8aa68  strb w9,[x8, #0x58]
7101d8aa6c  ldr x8,[x28, #0x148]
7101d8aa70  ldr x9,[x8, #0x1b8]
7101d8aa74  cbz x9,0x7101d8aae0
7101d8aa78  add x10,x8,#0x1b8
7101d8aa7c  mov x8,x10
7101d8aa80  ldr w11,[x9, #0x20]
7101d8aa84  cmp w11,#0x0
7101d8aa88  cset w11,lt
7101d8aa8c  csel x8,x8,x9,lt
7101d8aa90  ldr x9,[x9, w11, UXTW #0x3]
7101d8aa94  cbnz x9,0x7101d8aa80
7101d8aa98  cmp x8,x10
7101d8aa9c  b.eq 0x7101d8aae0
7101d8aaa0  ldr w9,[x8, #0x20]
7101d8aaa4  cmp w9,#0x0
7101d8aaa8  b.gt 0x7101d8aae0
7101d8aaac  ldr x19,[x8, #0x28]
7101d8aab0  cbz x19,0x7101d8aae0
7101d8aab4  ldr x8,[x19]
7101d8aab8  ldr x8,[x8, #0x208]
7101d8aabc  mov x0,x19
7101d8aac0  mov w1,wzr
7101d8aac4  blr x8
7101d8aac8  ldr x8,[x19]
7101d8aacc  ldr x8,[x8, #0x388]
7101d8aad0  mov w1,#0x1
7101d8aad4  mov x0,x19
7101d8aad8  mov w2,wzr
7101d8aadc  blr x8
7101d8aae0  ldur x19,[x29, #-0x80]
7101d8aae4  ldr x8,[x19]
7101d8aae8  cbz x8,0x7101d8aaf8
7101d8aaec  ldrb w9,[x8, #0x58]
7101d8aaf0  and w9,w9,#0xfe
7101d8aaf4  strb w9,[x8, #0x58]
7101d8aaf8  ldr x0,[x28, #0x138]
7101d8aafc  fmov s0,0x3f800000
7101d8ab00  adrp x1,0x710433a000
7101d8ab04  add x1,x1,#0x4e5
7101d8ab08  bl 0x7103778300
7101d8ab0c  b 0x7101d8c650
7101d8ab10  add x0,sp,#0x60
7101d8ab14  sub x1,x29,#0x78
7101d8ab18  bl 0x71025c7300
7101d8ab1c  ldur x19,[x29, #-0x70]
7101d8ab20  adrp x20,0x710523d000
7101d8ab24  add x20,x20,#0x988
7101d8ab28  stp x20,xzr,[x29, #-0x78]
7101d8ab2c  cbz x19,0x7101d8ab50
7101d8ab30  ldr x0,[x19, #0x18]
7101d8ab34  adrp x8,0x710523d000
7101d8ab38  add x8,x8,#0x9a8
7101d8ab3c  stp x8,xzr,[x19, #0x10]
7101d8ab40  cbz x0,0x7101d8ab48
7101d8ab44  bl 0x710392eb40
7101d8ab48  mov x0,x19
7101d8ab4c  bl 0x710392eb40
7101d8ab50  ldr x19,[sp, #0x68]
7101d8ab54  stp x20,xzr,[sp, #0x60]
7101d8ab58  cbz x19,0x7101d8c688
7101d8ab5c  adrp x8,0x710523d000
7101d8ab60  add x8,x8,#0x9a8
7101d8ab64  str x8,[x19, #0x10]
7101d8ab68  b 0x7101d8be00
7101d8ab6c  str wzr,[x28, #0x340]
7101d8ab70  ldr x8,[sp, #0x20]
7101d8ab74  ldr x0,[x8, #0x10]
7101d8ab78  cbz x0,0x7101d8ab90
7101d8ab7c  add x1,sp,#0x148
7101d8ab80  mov w2,wzr
7101d8ab84  mov w3,wzr
7101d8ab88  str wzr,[sp, #0x148]
7101d8ab8c  bl 0x71037a2270
7101d8ab90  ldr x20,[sp, #0x68]
7101d8ab94  ldr x8,[x20, #0x8]
7101d8ab98  cbz x8,0x7101d8abb0
7101d8ab9c  ldr x8,[x8, #0x18]
7101d8aba0  cbz x8,0x7101d8abb0
7101d8aba4  ldrb w9,[x8, #0x58]
7101d8aba8  and w9,w9,#0xfe
7101d8abac  strb w9,[x8, #0x58]
7101d8abb0  adrp x8,0x710523d000
7101d8abb4  add x8,x8,#0x988
7101d8abb8  stp x8,xzr,[sp, #0x60]
7101d8abbc  cbz x20,0x7101d8abe0
7101d8abc0  ldr x0,[x20, #0x18]
7101d8abc4  adrp x8,0x710523d000
7101d8abc8  add x8,x8,#0x9a8
7101d8abcc  stp x8,xzr,[x20, #0x10]
7101d8abd0  cbz x0,0x7101d8abd8
7101d8abd4  bl 0x710392eb40
7101d8abd8  mov x0,x20
7101d8abdc  bl 0x710392eb40
7101d8abe0  ldr x0,[sp, #0x20]
7101d8abe4  adrp x8,0x710523d000
7101d8abe8  add x8,x8,#0x9a8
7101d8abec  stp x8,xzr,[sp, #0x18]
7101d8abf0  cbnz x0,0x7101d8c684
7101d8abf4  b 0x7101d8c688
7101d8abf8  ldur x21,[x29, #-0xa0]
7101d8abfc  ldr x8,[x21, #0x8]
7101d8ac00  cbz x8,0x7101d8ac54
7101d8ac04  ldr x8,[x8, #0x18]
7101d8ac08  cbz x8,0x7101d8ac54
7101d8ac0c  ldrb w9,[x8, #0x58]
7101d8ac10  and w9,w9,#0xfe
7101d8ac14  strb w9,[x8, #0x58]
7101d8ac18  b 0x7101d8ac54
7101d8ac1c  ldur x21,[x29, #-0xa0]
7101d8ac20  adrp x1,0x7104442000
7101d8ac24  add x1,x1,#0x147
7101d8ac28  b 0x7101d8ac48
7101d8ac2c  ldur x21,[x29, #-0xa0]
7101d8ac30  adrp x1,0x7104453000
7101d8ac34  add x1,x1,#0xac
7101d8ac38  b 0x7101d8ac48
7101d8ac3c  ldur x21,[x29, #-0xa0]
7101d8ac40  adrp x1,0x710436a000
7101d8ac44  add x1,x1,#0xc3e
7101d8ac48  fmov s0,0x3f800000
7101d8ac4c  mov x0,x21
7101d8ac50  bl 0x7103778300
7101d8ac54  adrp x1,0x7104454000
7101d8ac58  add x1,x1,#0xe48
7101d8ac5c  sub x8,x29,#0xb8
7101d8ac60  mov x0,x22
7101d8ac64  bl 0x7103776640
7101d8ac68  ldur x23,[x29, #-0xb0]
7101d8ac6c  fmov s0,0x3f800000
7101d8ac70  adrp x1,0x710436c000
7101d8ac74  add x1,x1,#0x7b4
7101d8ac78  mov x0,x23
7101d8ac7c  bl 0x7103778300
7101d8ac80  adrp x2,0x7104433000
7101d8ac84  add x2,x2,#0x4b0
7101d8ac88  add x0,sp,#0x148
7101d8ac8c  mov w1,#0x80
7101d8ac90  bl 0x71037a8790
7101d8ac94  ldr x8,[sp, #0x10]
7101d8ac98  ldrsh w8,[x8, #0x15c]
7101d8ac9c  mov w4,wzr
7101d8aca0  cmn w8,#0x1
7101d8aca4  b.eq 0x7101d8ad04
7101d8aca8  cmp w8,#0x7cf
7101d8acac  b.gt 0x7101d8ad04
7101d8acb0  adrp x9,0x710532f000
7101d8acb4  ldr x9,[x9, #0x730]
7101d8acb8  ldr x9,[x9, #0x8]
7101d8acbc  ldr x9,[x9, #0x1d8]
7101d8acc0  sxtw x8,w8
7101d8acc4  add x10,x9,x8, LSL #0x1
7101d8acc8  ldp x11,x9,[x9, #0x20]
7101d8accc  ldrh w10,[x10, #0x60]
7101d8acd0  sub x9,x9,x11
7101d8acd4  mov w11,#0xcccd
7101d8acd8  movk w11,#0xcccc, LSL #16
7101d8acdc  lsr x9,x9,#0x6
7101d8ace0  mul w9,w9,w11
7101d8ace4  cmp w9,w10
7101d8ace8  b.ls 0x7101d8ad00
7101d8acec  ldr x9,[x20, #0x30]
7101d8acf0  mov w10,#0x24
7101d8acf4  madd x8,x8,x10,x9
7101d8acf8  ldrh w4,[x8, #0x20]
7101d8acfc  b 0x7101d8ad04
7101d8ad00  mov w4,wzr
7101d8ad04  adrp x2,0x71043ad000
7101d8ad08  add x2,x2,#0xb9e
7101d8ad0c  add x0,sp,#0xc8
7101d8ad10  mov w1,#0x80
7101d8ad14  add x3,sp,#0x148
7101d8ad18  bl 0x71039c04d0
7101d8ad1c  adrp x1,0x7104412000
7101d8ad20  add x1,x1,#0xcb4
7101d8ad24  add x8,sp,#0x18
7101d8ad28  sub x0,x29,#0xb8
7101d8ad2c  bl 0x7103776910
7101d8ad30  ldr x19,[sp, #0x20]
7101d8ad34  ldr x0,[x19, #0x10]
7101d8ad38  cbz x0,0x7101d8ad44
7101d8ad3c  add x1,sp,#0xc8
7101d8ad40  bl 0x71037a28a0
7101d8ad44  adrp x27,0x710523d000
7101d8ad48  add x27,x27,#0x9a8
7101d8ad4c  stp x27,xzr,[sp, #0x18]
7101d8ad50  cbz x19,0x7101d8ad5c
7101d8ad54  mov x0,x19
7101d8ad58  bl 0x710392eb40
7101d8ad5c  ldr x19,[sp, #0x10]
7101d8ad60  ldr w8,[x19, #0x2f8]
7101d8ad64  cmp w8,#0x1
7101d8ad68  b.lt 0x7101d8ad9c
7101d8ad6c  fmov s0,0x3f800000
7101d8ad70  adrp x1,0x7104433000
7101d8ad74  add x1,x1,#0x4d2
7101d8ad78  mov x0,x23
7101d8ad7c  bl 0x7103778300
7101d8ad80  mov x0,x19
7101d8ad84  mov w1,wzr
7101d8ad88  bl 0x7101d8cda0
7101d8ad8c  ldr w8,[x19, #0x2f8]
7101d8ad90  sub w8,w8,#0x1
7101d8ad94  str w8,[x19, #0x2f8]
7101d8ad98  b 0x7101d8aea0
7101d8ad9c  ldrb w8,[x19, #0x2f4]
7101d8ada0  cbz w8,0x7101d8ae40
7101d8ada4  adrp x1,0x71043cf000
7101d8ada8  add x1,x1,#0x7d1
7101d8adac  b 0x7101d8ae48
7101d8adb0  cbz x8,0x7101d8adc8
7101d8adb4  ldr x8,[x8, #0x18]
7101d8adb8  cbz x8,0x7101d8adc8
7101d8adbc  ldrb w9,[x8, #0x58]
7101d8adc0  and w9,w9,#0xfe
7101d8adc4  strb w9,[x8, #0x58]
7101d8adc8  ldrsh w8,[x28, #0x15c]
7101d8adcc  cmn w8,#0x1
7101d8add0  b.eq 0x7101d8bcd8
7101d8add4  cmp w8,#0x7cf
7101d8add8  b.gt 0x7101d8bcd8
7101d8addc  adrp x9,0x710532f000
7101d8ade0  ldr x9,[x9, #0x730]
7101d8ade4  ldr x9,[x9, #0x8]
7101d8ade8  ldr x10,[x9, #0x1d8]
7101d8adec  sxtw x8,w8
7101d8adf0  add x8,x10,x8, LSL #0x1
7101d8adf4  ldp x9,x10,[x10, #0x20]
7101d8adf8  sub x10,x10,x9
7101d8adfc  orr x11,xzr,#-0x3333333333333334
7101d8ae00  movk x11,#0xcccd
7101d8ae04  ldrh w8,[x8, #0x60]
7101d8ae08  asr x10,x10,#0x6
7101d8ae0c  mul x10,x10,x11
7101d8ae10  cmp w10,w8
7101d8ae14  b.ls 0x7101d8bcd8
7101d8ae18  mov w11,#0x140
7101d8ae1c  madd x9,x8,x11,x9
7101d8ae20  adrp x11,0x7105182000
7101d8ae24  add x11,x11,#0xb08
7101d8ae28  cmp x10,x8
7101d8ae2c  csel x8,x9,x11,hi
7101d8ae30  ldrb w9,[x8, #0x5e]
7101d8ae34  cbz w9,0x7101d8b80c
7101d8ae38  mov w21,#0x4
7101d8ae3c  b 0x7101d8bc14
7101d8ae40  adrp x1,0x71042a3000
7101d8ae44  add x1,x1,#0x3f6
7101d8ae48  fmov s0,0x3f800000
7101d8ae4c  mov x0,x23
7101d8ae50  bl 0x7103778300
7101d8ae54  ldr x19,[sp, #0x10]
7101d8ae58  mov w1,#0x1
7101d8ae5c  mov x0,x19
7101d8ae60  bl 0x7101d8cda0
7101d8ae64  ldrb w8,[x19, #0x2f6]
7101d8ae68  cbz w8,0x7101d8ae9c
7101d8ae6c  adrp x8,0x7105314000
7101d8ae70  ldr x8,[x8, #0x510]
7101d8ae74  ldr x8,[x8]
7101d8ae78  ldr x8,[x8, #0xd8]
7101d8ae7c  ldr x8,[x8]
7101d8ae80  ldr x8,[x8]
7101d8ae84  ldr x0,[x19, #0x300]
7101d8ae88  ldr w1,[x8, #0x24]
7101d8ae8c  ldr w8,[x0, #0x94]
7101d8ae90  cmp w8,w1
7101d8ae94  b.eq 0x7101d8ae9c
7101d8ae98  bl 0x7103399f50
7101d8ae9c  strb wzr,[x19, #0x2f6]
7101d8aea0  adrp x8,0x710532f000
7101d8aea4  ldr x8,[x8, #0x730]
7101d8aea8  ldr x8,[x8, #0x8]
7101d8aeac  ldrh w0,[x19, #0x15c]
7101d8aeb0  orr w9,wzr,#0xffff
7101d8aeb4  cmp x0,x9
7101d8aeb8  ldr x8,[x8, #0x1d8]
7101d8aebc  b.eq 0x7101d8aecc
7101d8aec0  add x9,x8,w0, SXTH  #0x1
7101d8aec4  ldrh w9,[x9, #0x60]
7101d8aec8  b 0x7101d8aed0
7101d8aecc  mov w9,#0xffffffff
7101d8aed0  ldp x10,x8,[x8, #0x20]
7101d8aed4  sub x8,x8,x10
7101d8aed8  orr x11,xzr,#-0x3333333333333334
7101d8aedc  movk x11,#0xcccd
7101d8aee0  asr x8,x8,#0x6
7101d8aee4  mul x8,x8,x11
7101d8aee8  mov w11,#0x140
7101d8aeec  madd x10,x9,x11,x10
7101d8aef0  cmp x8,x9
7101d8aef4  csel x8,x10,x28,hi
7101d8aef8  ldrb w8,[x8, #0x5e]
7101d8aefc  cmp w8,#0x3
7101d8af00  b.ne 0x7101d8af10
7101d8af04  bl 0x71025c9890
7101d8af08  eor w20,w0,#0x1
7101d8af0c  b 0x7101d8af14
7101d8af10  mov w20,wzr
7101d8af14  ldr x8,[sp, #0x10]
7101d8af18  ldr x8,[x8, #0x148]
7101d8af1c  ldr x9,[x8, #0x1b8]
7101d8af20  cbz x9,0x7101d8af90
7101d8af24  add x10,x8,#0x1b8
7101d8af28  mov x8,x10
7101d8af2c  ldr w11,[x9, #0x20]
7101d8af30  cmp w11,#0x0
7101d8af34  cset w11,lt
7101d8af38  csel x8,x8,x9,lt
7101d8af3c  ldr x9,[x9, w11, UXTW #0x3]
7101d8af40  cbnz x9,0x7101d8af2c
7101d8af44  cmp x8,x10
7101d8af48  b.eq 0x7101d8af90
7101d8af4c  ldr w9,[x8, #0x20]
7101d8af50  cmp w9,#0x0
7101d8af54  b.gt 0x7101d8af90
7101d8af58  ldr x19,[x8, #0x28]
7101d8af5c  cbz x19,0x7101d8af90
7101d8af60  ldr x8,[x19]
7101d8af64  ldr x8,[x8, #0x208]
7101d8af68  and w1,w20,#0x1
7101d8af6c  mov x0,x19
7101d8af70  blr x8
7101d8af74  ldr x9,[x19]
7101d8af78  ldr x9,[x9, #0x388]
7101d8af7c  mvn w8,w20
7101d8af80  and w1,w8,#0x1
7101d8af84  mov x0,x19
7101d8af88  mov w2,wzr
7101d8af8c  blr x9
7101d8af90  ldur x24,[x29, #-0x90]
7101d8af94  ldr x8,[x24]
7101d8af98  cbz x8,0x7101d8afa8
7101d8af9c  ldrb w9,[x8, #0x58]
7101d8afa0  bfxil w9,w20,#0x0,#0x1
7101d8afa4  strb w9,[x8, #0x58]
7101d8afa8  ldr x8,[sp, #0x10]
7101d8afac  ldr w25,[x8, #0x2f0]
7101d8afb0  cbz w25,0x7101d8b008
7101d8afb4  fmov s0,0x3f800000
7101d8afb8  adrp x1,0x71043be000
7101d8afbc  add x1,x1,#0x9e9
7101d8afc0  mov x0,x23
7101d8afc4  bl 0x7103778300
7101d8afc8  adrp x1,0x7104291000
7101d8afcc  add x1,x1,#0xf87
7101d8afd0  add x8,sp,#0x18
7101d8afd4  sub x0,x29,#0xb8
7101d8afd8  bl 0x7103776910
7101d8afdc  adrp x1,0x7104270000
7101d8afe0  add x1,x1,#0x248
7101d8afe4  add x0,sp,#0x18
7101d8afe8  mov w2,#0x1
7101d8afec  mov w3,w25
7101d8aff0  bl 0x710377a280
7101d8aff4  ldr x0,[sp, #0x20]
7101d8aff8  stp x27,xzr,[sp, #0x18]
7101d8affc  cbz x0,0x7101d8b0d8
7101d8b000  bl 0x710392eb40
7101d8b004  b 0x7101d8b0d8
7101d8b008  ldur x8,[x29, #-0x70]
7101d8b00c  ldr x8,[x8]
7101d8b010  cbz x8,0x7101d8b020
7101d8b014  ldrb w9,[x8, #0x58]
7101d8b018  and w9,w9,#0xfe
7101d8b01c  strb w9,[x8, #0x58]
7101d8b020  ldur x8,[x29, #-0x80]
7101d8b024  ldr x8,[x8]
7101d8b028  cbz x8,0x7101d8b038
7101d8b02c  ldrb w9,[x8, #0x58]
7101d8b030  and w9,w9,#0xfe
7101d8b034  strb w9,[x8, #0x58]
7101d8b038  ldr x8,[sp, #0x10]
7101d8b03c  ldr x8,[x8, #0x148]
7101d8b040  ldr x9,[x8, #0x1b8]
7101d8b044  cbz x9,0x7101d8b0b0
7101d8b048  add x10,x8,#0x1b8
7101d8b04c  mov x8,x10
7101d8b050  ldr w11,[x9, #0x20]
7101d8b054  cmp w11,#0x0
7101d8b058  cset w11,lt
7101d8b05c  csel x8,x8,x9,lt
7101d8b060  ldr x9,[x9, w11, UXTW #0x3]
7101d8b064  cbnz x9,0x7101d8b050
7101d8b068  cmp x8,x10
7101d8b06c  b.eq 0x7101d8b0b0
7101d8b070  ldr w9,[x8, #0x20]
7101d8b074  cmp w9,#0x0
7101d8b078  b.gt 0x7101d8b0b0
7101d8b07c  ldr x19,[x8, #0x28]
7101d8b080  cbz x19,0x7101d8b0b0
7101d8b084  ldr x8,[x19]
7101d8b088  ldr x8,[x8, #0x208]
7101d8b08c  mov x0,x19
7101d8b090  mov w1,wzr
7101d8b094  blr x8
7101d8b098  ldr x8,[x19]
7101d8b09c  ldr x8,[x8, #0x388]
7101d8b0a0  mov w1,#0x1
7101d8b0a4  mov x0,x19
7101d8b0a8  mov w2,wzr
7101d8b0ac  blr x8
7101d8b0b0  ldr x8,[x24]
7101d8b0b4  cbz x8,0x7101d8b0c4
7101d8b0b8  ldrb w9,[x8, #0x58]
7101d8b0bc  and w9,w9,#0xfe
7101d8b0c0  strb w9,[x8, #0x58]
7101d8b0c4  fmov s0,0x3f800000
7101d8b0c8  adrp x1,0x710425f000
7101d8b0cc  add x1,x1,#0x84f
7101d8b0d0  mov x0,x23
7101d8b0d4  bl 0x7103778300
7101d8b0d8  ldr x8,[sp, #0x10]
7101d8b0dc  ldrsh x8,[x8, #0x15c]
7101d8b0e0  ldr x9,[x26, #0x1d8]
7101d8b0e4  cmn x8,#0x1
7101d8b0e8  b.eq 0x7101d8b0f8
7101d8b0ec  add x10,x9,x8, LSL #0x1
7101d8b0f0  ldrh w10,[x10, #0x60]
7101d8b0f4  b 0x7101d8b0fc
7101d8b0f8  mov w10,#0xffffffff
7101d8b0fc  ldp x11,x9,[x9, #0x20]
7101d8b100  sub x9,x9,x11
7101d8b104  orr x12,xzr,#-0x3333333333333334
7101d8b108  movk x12,#0xcccd
7101d8b10c  asr x9,x9,#0x6
7101d8b110  mul x9,x9,x12
7101d8b114  mov w12,#0x140
7101d8b118  madd x11,x10,x12,x11
7101d8b11c  cmp x9,x10
7101d8b120  csel x20,x11,x28,hi
7101d8b124  cmn w8,#0x1
7101d8b128  ldr w26,[x20, #0xb8]
7101d8b12c  b.eq 0x7101d8b16c
7101d8b130  adrp x1,0x71042a3000
7101d8b134  add x1,x1,#0x40b
7101d8b138  add x8,sp,#0x18
7101d8b13c  sub x0,x29,#0xb8
7101d8b140  bl 0x7103776910
7101d8b144  adrp x1,0x710424f000
7101d8b148  add x1,x1,#0x8cb
7101d8b14c  add x0,sp,#0x18
7101d8b150  mov w2,#0x1
7101d8b154  mov w3,w26
7101d8b158  bl 0x710377a280
7101d8b15c  ldr x0,[sp, #0x20]
7101d8b160  stp x27,xzr,[sp, #0x18]
7101d8b164  cbz x0,0x7101d8b16c
7101d8b168  bl 0x710392eb40
7101d8b16c  adrp x8,0x7105314000
7101d8b170  ldr x8,[x8, #0x510]
7101d8b174  ldr x8,[x8]
7101d8b178  ldr x8,[x8, #0xd8]
7101d8b17c  ldr x8,[x8]
7101d8b180  ldr x8,[x8]
7101d8b184  ldr w19,[x8, #0x24]
7101d8b188  adrp x1,0x71042b4000
7101d8b18c  add x1,x1,#0xa41
7101d8b190  add x8,sp,#0xb8
7101d8b194  sub x0,x29,#0xb8
7101d8b198  bl 0x7103776640
7101d8b19c  ldr x8,[sp, #0x10]
7101d8b1a0  ldrb w8,[x8, #0x308]
7101d8b1a4  cbnz w8,0x7101d8b25c
7101d8b1a8  ldr x28,[sp, #0x10]
7101d8b1ac  ldr x0,[x28, #0x300]
7101d8b1b0  adrp x2,0x71042c3000
7101d8b1b4  add x2,x2,#0x68c
7101d8b1b8  adrp x3,0x7104412000
7101d8b1bc  add x3,x3,#0xcc5
7101d8b1c0  add x1,sp,#0xb8
7101d8b1c4  bl 0x7103399950
7101d8b1c8  ldr x0,[x28, #0x300]
7101d8b1cc  adrp x2,0x7104464000
7101d8b1d0  add x2,x2,#0x38d
7101d8b1d4  adrp x3,0x7104348000
7101d8b1d8  add x3,x3,#0xacf
7101d8b1dc  add x1,sp,#0xb8
7101d8b1e0  bl 0x7103399a70
7101d8b1e4  ldr x8,[x28, #0x300]
7101d8b1e8  mov x9,#0xfc80
7101d8b1ec  movk x9,#0x5bf6, LSL #16
7101d8b1f0  mov x10,#0xf4dd
7101d8b1f4  movk x10,#0x7123, LSL #16
7101d8b1f8  movk x9,#0x20, LSL #32
7101d8b1fc  movk x10,#0x25, LSL #32
7101d8b200  stp x9,x10,[x8, #0x58]
7101d8b204  ldr x8,[x28, #0x300]
7101d8b208  mov x9,#0x1a56
7101d8b20c  movk x9,#0xfc22, LSL #16
7101d8b210  mov x10,#0xd702
7101d8b214  movk x10,#0xef44, LSL #16
7101d8b218  movk x9,#0x21, LSL #32
7101d8b21c  movk x10,#0x26, LSL #32
7101d8b220  stp x9,x10,[x8, #0x68]
7101d8b224  ldr x0,[x28, #0x300]
7101d8b228  ldr w8,[x0, #0x94]
7101d8b22c  cmp w8,w19
7101d8b230  b.eq 0x7101d8b248
7101d8b234  add x1,x0,#0x18
7101d8b238  mov w2,#0x1
7101d8b23c  mov w3,w19
7101d8b240  str w19,[x0, #0x94]
7101d8b244  bl 0x710377a280
7101d8b248  ldr x9,[sp, #0x10]
7101d8b24c  mov w8,#0x1
7101d8b250  adrp x28,0x7105182000
7101d8b254  add x28,x28,#0xb08
7101d8b258  strb w8,[x9, #0x308]
7101d8b25c  add w8,w19,w25
7101d8b260  cmp w8,w26
7101d8b264  b.cs 0x7101d8b274
7101d8b268  adrp x1,0x71043ad000
7101d8b26c  add x1,x1,#0xba4
7101d8b270  b 0x7101d8b27c
7101d8b274  adrp x1,0x71042c5000
7101d8b278  add x1,x1,#0x1da
7101d8b27c  fmov s0,0x3f800000
7101d8b280  mov x0,x23
7101d8b284  bl 0x7103778300
7101d8b288  adrp x1,0x71042f5000
7101d8b28c  add x1,x1,#0xbc0
7101d8b290  add x8,sp,#0xa8
7101d8b294  mov x0,x22
7101d8b298  bl 0x7103776640
7101d8b29c  adrp x1,0x71042c5000
7101d8b2a0  add x1,x1,#0x386
7101d8b2a4  add x8,sp,#0x98
7101d8b2a8  mov x0,x22
7101d8b2ac  bl 0x7103776640
7101d8b2b0  ldr x19,[sp, #0x10]
7101d8b2b4  ldrh w3,[x19, #0x15c]
7101d8b2b8  add x0,x19,#0x8
7101d8b2bc  add x1,sp,#0xa8
7101d8b2c0  add x2,sp,#0x98
7101d8b2c4  orr w4,wzr,#0xffff
7101d8b2c8  bl 0x71025c7b60
7101d8b2cc  adrp x1,0x71042e7000
7101d8b2d0  add x1,x1,#0x799
7101d8b2d4  add x8,sp,#0x88
7101d8b2d8  mov x0,x22
7101d8b2dc  bl 0x7103776640
7101d8b2e0  ldrsh x8,[x19, #0x15c]
7101d8b2e4  mov w26,wzr
7101d8b2e8  cmn x8,#0x1
7101d8b2ec  b.eq 0x7101d8b404
7101d8b2f0  cmp w8,#0x7cf
7101d8b2f4  b.gt 0x7101d8b404
7101d8b2f8  adrp x9,0x710532f000
7101d8b2fc  ldr x9,[x9, #0x730]
7101d8b300  ldr x9,[x9, #0x8]
7101d8b304  ldr x11,[x9, #0x1d8]
7101d8b308  add x9,x11,x8, LSL #0x1
7101d8b30c  orr x12,xzr,#-0x3333333333333334
7101d8b310  ldp x10,x11,[x11, #0x20]
7101d8b314  sub x11,x11,x10
7101d8b318  asr x11,x11,#0x6
7101d8b31c  movk x12,#0xcccd
7101d8b320  mul x11,x11,x12
7101d8b324  ldrh w9,[x9, #0x60]
7101d8b328  cmp w11,w9
7101d8b32c  b.ls 0x7101d8b400
7101d8b330  mov w12,#0x140
7101d8b334  madd x10,x9,x12,x10
7101d8b338  cmp x11,x9
7101d8b33c  csel x9,x10,x28,hi
7101d8b340  ldrb w10,[x9, #0x5e]
7101d8b344  cbz w10,0x7101d8b3cc
7101d8b348  ldr x25,[sp, #0x90]
7101d8b34c  ldr x8,[x25, #0x8]
7101d8b350  cbz x8,0x7101d8b368
7101d8b354  ldr x8,[x8, #0x18]
7101d8b358  cbz x8,0x7101d8b368
7101d8b35c  ldrb w9,[x8, #0x58]
7101d8b360  and w9,w9,#0xfe
7101d8b364  strb w9,[x8, #0x58]
7101d8b368  ldr x19,[sp, #0x10]
7101d8b36c  mov w8,#0x5a
7101d8b370  str w8,[x19, #0x340]
7101d8b374  b 0x7101d8b508
7101d8b378  and x1,x8,#0xffff
7101d8b37c  mov x0,x19
7101d8b380  bl 0x71032a9470
7101d8b384  mov x2,x0
7101d8b388  add x0,sp,#0x148
7101d8b38c  mov x1,x19
7101d8b390  add x21,sp,#0x148
7101d8b394  bl 0x71032a9540
7101d8b398  add x1,x21,#0x8
7101d8b39c  adrp x0,0x7104464000
7101d8b3a0  add x0,x0,#0x1d4
7101d8b3a4  add x8,sp,#0xc8
7101d8b3a8  add x19,sp,#0xc8
7101d8b3ac  bl 0x71003a4ca0
7101d8b3b0  adrp x1,0x7104292000
7101d8b3b4  add x1,x1,#0x204
7101d8b3b8  add x8,sp,#0x148
7101d8b3bc  mov x0,x22
7101d8b3c0  bl 0x7103776910
7101d8b3c4  add x1,x19,#0x8
7101d8b3c8  b 0x7101d8a46c
7101d8b3cc  ldrb w9,[x9, #0x6c]
7101d8b3d0  sub w9,w9,#0x1
7101d8b3d4  cmp w9,#0x2
7101d8b3d8  b.hi 0x7101d8b400
7101d8b3dc  and x9,x9,#0xff
7101d8b3e0  lsl x9,x9,#0x3
7101d8b3e4  mov w10,#0x301
7101d8b3e8  movk w10,#0x2, LSL #16
7101d8b3ec  lsr w26,w10,w9
7101d8b3f0  and w9,w26,#0xff
7101d8b3f4  cmp w9,#0x4
7101d8b3f8  b.eq 0x7101d8b348
7101d8b3fc  b 0x7101d8b404
7101d8b400  mov w26,wzr
7101d8b404  ldr x25,[sp, #0x90]
7101d8b408  ldr x9,[x25, #0x8]
7101d8b40c  cbz x9,0x7101d8b42c
7101d8b410  ldr x9,[x9, #0x18]
7101d8b414  ldr x10,[sp, #0x10]
7101d8b418  cbz x9,0x7101d8b42c
7101d8b41c  ldrb w8,[x9, #0x58]
7101d8b420  orr w8,w8,#0x1
7101d8b424  strb w8,[x9, #0x58]
7101d8b428  ldrh w8,[x10, #0x15c]
7101d8b42c  mov w9,#0x1
7101d8b430  str x9,[sp, #0x60]
7101d8b434  mov x9,#0xff0000000000
7101d8b438  movk x9,#0x52ff, LSL #48
7101d8b43c  and x1,x8,#0xffff
7101d8b440  add x0,sp,#0x60
7101d8b444  mov w2,#0x1
7101d8b448  strb wzr,[sp, #0x68]
7101d8b44c  stur xzr,[sp, #0x6c]
7101d8b450  str x9,[sp, #0x78]
7101d8b454  str wzr,[sp, #0x80]
7101d8b458  bl 0x71025ca840
7101d8b45c  add x0,sp,#0x60
7101d8b460  bl 0x71025cb8d0
7101d8b464  mov w19,w0
7101d8b468  adrp x1,0x7104452000
7101d8b46c  add x1,x1,#0x707
7101d8b470  add x8,sp,#0x18
7101d8b474  add x0,sp,#0x88
7101d8b478  bl 0x7103776910
7101d8b47c  adrp x1,0x71043ff000
7101d8b480  add x1,x1,#0x11e
7101d8b484  add x0,sp,#0x18
7101d8b488  mov w2,#0x1
7101d8b48c  mov w3,w19
7101d8b490  bl 0x710377a280
7101d8b494  ldr x0,[sp, #0x20]
7101d8b498  stp x27,xzr,[sp, #0x18]
7101d8b49c  cbz x0,0x7101d8b4a4
7101d8b4a0  bl 0x710392eb40
7101d8b4a4  adrp x1,0x71043ee000
7101d8b4a8  add x1,x1,#0x91f
7101d8b4ac  add x8,sp,#0x18
7101d8b4b0  add x0,sp,#0x88
7101d8b4b4  add x28,sp,#0x18
7101d8b4b8  bl 0x7103776910
7101d8b4bc  adrp x1,0x71043ff000
7101d8b4c0  add x1,x1,#0x11e
7101d8b4c4  add x0,sp,#0x18
7101d8b4c8  mov w2,#0x1
7101d8b4cc  mov w3,w19
7101d8b4d0  bl 0x710377a280
7101d8b4d4  ldr x0,[sp, #0x20]
7101d8b4d8  stp x27,xzr,[sp, #0x18]
7101d8b4dc  cbz x0,0x7101d8b4e4
7101d8b4e0  bl 0x710392eb40
7101d8b4e4  add x0,sp,#0x18
7101d8b4e8  mov w1,w26
7101d8b4ec  mov w2,wzr
7101d8b4f0  bl 0x710339dde0
7101d8b4f4  fmov s0,0x3f800000
7101d8b4f8  add x1,x28,#0x8
7101d8b4fc  mov x0,x25
7101d8b500  bl 0x7103778300
7101d8b504  ldr x19,[sp, #0x10]
7101d8b508  ldr x0,[x19]
7101d8b50c  ldrh w2,[x19, #0x15c]
7101d8b510  mov x1,x22
7101d8b514  ldrh w3,[x19, #0x15e]
7101d8b518  bl 0x71025c9570
7101d8b51c  ldrb w8,[x20, #0x5e]
7101d8b520  cmp w8,#0x1
7101d8b524  b.eq 0x7101d8b53c
7101d8b528  cbnz w8,0x7101d8b550
7101d8b52c  ldr x0,[x19, #0x138]
7101d8b530  adrp x1,0x710425d000
7101d8b534  add x1,x1,#0x1ad
7101d8b538  b 0x7101d8b548
7101d8b53c  ldr x0,[x19, #0x138]
7101d8b540  adrp x1,0x7104441000
7101d8b544  add x1,x1,#0x885
7101d8b548  fmov s0,0x3f800000
7101d8b54c  bl 0x7103778300
7101d8b550  ldr x0,[x19, #0x150]
7101d8b554  ldr x8,[x0]
7101d8b558  ldr x8,[x8, #0x60]
7101d8b55c  mov w1,#0x1
7101d8b560  blr x8
7101d8b564  adrp x1,0x7104327000
7101d8b568  add x1,x1,#0xe94
7101d8b56c  add x8,sp,#0x18
7101d8b570  mov x0,x22
7101d8b574  bl 0x7103776640
7101d8b578  ldr x19,[sp, #0x20]
7101d8b57c  ldr x8,[x19, #0x8]
7101d8b580  cbz x8,0x7101d8b598
7101d8b584  ldr x8,[x8, #0x18]
7101d8b588  cbz x8,0x7101d8b598
7101d8b58c  ldrb w9,[x8, #0x58]
7101d8b590  and w9,w9,#0xfe
7101d8b594  strb w9,[x8, #0x58]
7101d8b598  ldur x0,[x29, #-0x58]
7101d8b59c  adrp x1,0x710439d000
7101d8b5a0  add x1,x1,#0x945
7101d8b5a4  add x8,sp,#0x60
7101d8b5a8  bl 0x7103776640
7101d8b5ac  ldr x20,[sp, #0x68]
7101d8b5b0  adrp x22,0x710523d000
7101d8b5b4  add x22,x22,#0x988
7101d8b5b8  stp x22,xzr,[sp, #0x60]
7101d8b5bc  cbz x20,0x7101d8b5d8
7101d8b5c0  ldr x0,[x20, #0x18]
7101d8b5c4  stp x27,xzr,[x20, #0x10]
7101d8b5c8  cbz x0,0x7101d8b5d0
7101d8b5cc  bl 0x710392eb40
7101d8b5d0  mov x0,x20
7101d8b5d4  bl 0x710392eb40
7101d8b5d8  stp x22,xzr,[sp, #0x18]
7101d8b5dc  cbz x19,0x7101d8b5f8
7101d8b5e0  ldr x0,[x19, #0x18]
7101d8b5e4  stp x27,xzr,[x19, #0x10]
7101d8b5e8  cbz x0,0x7101d8b5f0
7101d8b5ec  bl 0x710392eb40
7101d8b5f0  mov x0,x19
7101d8b5f4  bl 0x710392eb40
7101d8b5f8  stp x22,xzr,[sp, #0x88]
7101d8b5fc  cbz x25,0x7101d8b618
7101d8b600  ldr x0,[x25, #0x18]
7101d8b604  stp x27,xzr,[x25, #0x10]
7101d8b608  cbz x0,0x7101d8b610
7101d8b60c  bl 0x710392eb40
7101d8b610  mov x0,x25
7101d8b614  bl 0x710392eb40
7101d8b618  ldr x19,[sp, #0xa0]
7101d8b61c  stp x22,xzr,[sp, #0x98]
7101d8b620  cbz x19,0x7101d8b63c
7101d8b624  ldr x0,[x19, #0x18]
7101d8b628  stp x27,xzr,[x19, #0x10]
7101d8b62c  cbz x0,0x7101d8b634
7101d8b630  bl 0x710392eb40
7101d8b634  mov x0,x19
7101d8b638  bl 0x710392eb40
7101d8b63c  ldr x19,[sp, #0xb0]
7101d8b640  stp x22,xzr,[sp, #0xa8]
7101d8b644  cbz x19,0x7101d8b660
7101d8b648  ldr x0,[x19, #0x18]
7101d8b64c  stp x27,xzr,[x19, #0x10]
7101d8b650  cbz x0,0x7101d8b658
7101d8b654  bl 0x710392eb40
7101d8b658  mov x0,x19
7101d8b65c  bl 0x710392eb40
7101d8b660  ldr x19,[sp, #0xc0]
7101d8b664  stp x22,xzr,[sp, #0xb8]
7101d8b668  cbz x19,0x7101d8b684
7101d8b66c  ldr x0,[x19, #0x18]
7101d8b670  stp x27,xzr,[x19, #0x10]
7101d8b674  cbz x0,0x7101d8b67c
7101d8b678  bl 0x710392eb40
7101d8b67c  mov x0,x19
7101d8b680  bl 0x710392eb40
7101d8b684  stp x22,xzr,[x29, #-0xb8]
7101d8b688  cbz x23,0x7101d8b6a4
7101d8b68c  ldr x0,[x23, #0x18]
7101d8b690  stp x27,xzr,[x23, #0x10]
7101d8b694  cbz x0,0x7101d8b69c
7101d8b698  bl 0x710392eb40
7101d8b69c  mov x0,x23
7101d8b6a0  bl 0x710392eb40
7101d8b6a4  stp x22,xzr,[x29, #-0xa8]
7101d8b6a8  cbz x21,0x7101d8b6c4
7101d8b6ac  ldr x0,[x21, #0x18]
7101d8b6b0  stp x27,xzr,[x21, #0x10]
7101d8b6b4  cbz x0,0x7101d8b6bc
7101d8b6b8  bl 0x710392eb40
7101d8b6bc  mov x0,x21
7101d8b6c0  bl 0x710392eb40
7101d8b6c4  stp x27,xzr,[x29, #-0x98]
7101d8b6c8  cbz x24,0x7101d8b6d4
7101d8b6cc  mov x0,x24
7101d8b6d0  bl 0x710392eb40
7101d8b6d4  ldur x0,[x29, #-0x80]
7101d8b6d8  stp x27,xzr,[x29, #-0x88]
7101d8b6dc  cbz x0,0x7101d8b6e4
7101d8b6e0  bl 0x710392eb40
7101d8b6e4  ldur x0,[x29, #-0x70]
7101d8b6e8  stp x27,xzr,[x29, #-0x78]
7101d8b6ec  cbnz x0,0x7101d8c684
7101d8b6f0  b 0x7101d8c688
7101d8b6f4  mov x9,#0x832e
7101d8b6f8  movk x9,#0xb2d9, LSL #16
7101d8b6fc  movk x9,#0x13, LSL #32
7101d8b700  cmp x8,x9
7101d8b704  b.ne 0x7101d8b754
7101d8b708  ldr x19,[x21, #0x1d8]
7101d8b70c  ldrh w1,[x28, #0x15c]
7101d8b710  mov x0,x19
7101d8b714  bl 0x71032a9470
7101d8b718  mov x2,x0
7101d8b71c  add x0,sp,#0x148
7101d8b720  mov x1,x19
7101d8b724  add x21,sp,#0x148
7101d8b728  bl 0x71032a9540
7101d8b72c  add x1,x21,#0x8
7101d8b730  adrp x0,0x710436c000
7101d8b734  add x0,x0,#0x861
7101d8b738  add x8,sp,#0x18
7101d8b73c  add x19,sp,#0x18
7101d8b740  bl 0x71003a4ca0
7101d8b744  add x1,x19,#0x8
7101d8b748  sub x0,x29,#0x78
7101d8b74c  bl 0x710377a120
7101d8b750  b 0x7101d8b7b0
7101d8b754  adrp x8,0x710532f000
7101d8b758  ldr x8,[x8, #0x730]
7101d8b75c  ldr x19,[x8, #0x8]
7101d8b760  ldr x1,[x19, #0x2b8]
7101d8b764  add x0,sp,#0x148
7101d8b768  add x21,sp,#0x148
7101d8b76c  bl 0x710327c1a0
7101d8b770  add x1,x21,#0x8
7101d8b774  adrp x0,0x7104420000
7101d8b778  add x0,x0,#0xa46
7101d8b77c  add x8,sp,#0x18
7101d8b780  add x21,sp,#0x18
7101d8b784  bl 0x71003a4ca0
7101d8b788  ldr x1,[x24, #0x110]
7101d8b78c  ldr x0,[x19, #0x2b8]
7101d8b790  bl 0x710327cba0
7101d8b794  add x3,x21,#0x8
7101d8b798  tbz w0,#0x0,0x7101d8a76c
7101d8b79c  adrp x1,0x710434a000
7101d8b7a0  add x1,x1,#0x786
7101d8b7a4  sub x0,x29,#0x78
7101d8b7a8  mov w2,#0x1
7101d8b7ac  bl 0x710377a280
7101d8b7b0  ldr x21,[sp, #0x68]
7101d8b7b4  ldr x8,[x21]
7101d8b7b8  cbz x8,0x7101d8b7c8
7101d8b7bc  ldrb w9,[x8, #0x58]
7101d8b7c0  orr w9,w9,#0x1
7101d8b7c4  strb w9,[x8, #0x58]
7101d8b7c8  ldur x22,[x29, #-0x70]
7101d8b7cc  ldr x8,[x22]
7101d8b7d0  cbz x8,0x7101d8b7e0
7101d8b7d4  ldrb w9,[x8, #0x58]
7101d8b7d8  orr w9,w9,#0x1
7101d8b7dc  strb w9,[x8, #0x58]
7101d8b7e0  adrp x8,0x710532f000
7101d8b7e4  ldr x8,[x8, #0x730]
7101d8b7e8  ldr x8,[x8, #0x8]
7101d8b7ec  ldrh w0,[x28, #0x15c]
7101d8b7f0  orr w9,wzr,#0xffff
7101d8b7f4  cmp x0,x9
7101d8b7f8  ldr x8,[x8, #0x1d8]
7101d8b7fc  b.eq 0x7101d8b834
7101d8b800  add x9,x8,w0, SXTH  #0x1
7101d8b804  ldrh w9,[x9, #0x60]
7101d8b808  b 0x7101d8b838
7101d8b80c  ldrb w8,[x8, #0x6c]
7101d8b810  sub w8,w8,#0x1
7101d8b814  cmp w8,#0x2
7101d8b818  b.hi 0x7101d8bc10
7101d8b81c  and x8,x8,#0xff
7101d8b820  lsl x8,x8,#0x3
7101d8b824  mov w9,#0x301
7101d8b828  movk w9,#0x2, LSL #16
7101d8b82c  lsr w21,w9,w8
7101d8b830  b 0x7101d8bc14
7101d8b834  mov w9,#0xffffffff
7101d8b838  ldp x10,x8,[x8, #0x20]
7101d8b83c  sub x8,x8,x10
7101d8b840  asr x8,x8,#0x6
7101d8b844  mul x8,x8,x27
7101d8b848  mov w11,#0x140
7101d8b84c  madd x10,x9,x11,x10
7101d8b850  cmp x8,x9
7101d8b854  csel x8,x10,x25,hi
7101d8b858  ldrb w8,[x8, #0x5e]
7101d8b85c  cmp w8,#0x3
7101d8b860  b.ne 0x7101d8b870
7101d8b864  bl 0x71025c9890
7101d8b868  eor w28,w0,#0x1
7101d8b86c  b 0x7101d8b874
7101d8b870  mov w28,wzr
7101d8b874  ldr x8,[sp, #0x10]
7101d8b878  ldr x8,[x8, #0x148]
7101d8b87c  ldr x9,[x8, #0x1b8]
7101d8b880  cbz x9,0x7101d8b8f0
7101d8b884  add x10,x8,#0x1b8
7101d8b888  mov x8,x10
7101d8b88c  ldr w11,[x9, #0x20]
7101d8b890  cmp w11,#0x0
7101d8b894  cset w11,lt
7101d8b898  csel x8,x8,x9,lt
7101d8b89c  ldr x9,[x9, w11, UXTW #0x3]
7101d8b8a0  cbnz x9,0x7101d8b88c
7101d8b8a4  cmp x8,x10
7101d8b8a8  b.eq 0x7101d8b8f0
7101d8b8ac  ldr w9,[x8, #0x20]
7101d8b8b0  cmp w9,#0x0
7101d8b8b4  b.gt 0x7101d8b8f0
7101d8b8b8  ldr x19,[x8, #0x28]
7101d8b8bc  cbz x19,0x7101d8b8f0
7101d8b8c0  ldr x8,[x19]
7101d8b8c4  ldr x8,[x8, #0x208]
7101d8b8c8  and w1,w28,#0x1
7101d8b8cc  mov x0,x19
7101d8b8d0  blr x8
7101d8b8d4  ldr x9,[x19]
7101d8b8d8  ldr x9,[x9, #0x388]
7101d8b8dc  mvn w8,w28
7101d8b8e0  and w1,w8,#0x1
7101d8b8e4  mov x0,x19
7101d8b8e8  mov w2,wzr
7101d8b8ec  blr x9
7101d8b8f0  ldr x8,[sp, #0x10]
7101d8b8f4  ldrsh w11,[x8, #0x15c]
7101d8b8f8  adrp x8,0x710532f000
7101d8b8fc  ldr x8,[x8, #0x730]
7101d8b900  ldr x8,[x8, #0x8]
7101d8b904  ldr x9,[x8, #0x1d8]
7101d8b908  mov w28,wzr
7101d8b90c  sxtw x10,w11
7101d8b910  cmn w11,#0x1
7101d8b914  b.eq 0x7101d8b968
7101d8b918  cmp w11,#0x7cf
7101d8b91c  b.gt 0x7101d8b968
7101d8b920  ldp x12,x13,[x9, #0x20]
7101d8b924  add x11,x9,x10, LSL #0x1
7101d8b928  ldrh w11,[x11, #0x60]
7101d8b92c  sub x12,x13,x12
7101d8b930  lsr x12,x12,#0x6
7101d8b934  mul w12,w12,w26
7101d8b938  cmp w12,w11
7101d8b93c  b.ls 0x7101d8b964
7101d8b940  adrp x11,0x7105329000
7101d8b944  ldr x11,[x11, #0xf98]
7101d8b948  ldr x11,[x11]
7101d8b94c  ldr x11,[x11, #0x30]
7101d8b950  mov w12,#0x24
7101d8b954  madd x11,x10,x12,x11
7101d8b958  ldrb w11,[x11, #0x1]
7101d8b95c  ubfx w28,w11,#0x3,#0x1
7101d8b960  b 0x7101d8b968
7101d8b964  mov w28,wzr
7101d8b968  ldr x26,[sp, #0x10]
7101d8b96c  ldr w11,[x26, #0x158]
7101d8b970  cmp w11,#0x1
7101d8b974  b.ne 0x7101d8c364
7101d8b978  ldrb w11,[x26, #0x355]
7101d8b97c  cbz w11,0x7101d8c364
7101d8b980  ldrb w11,[x26, #0x354]
7101d8b984  cbz w11,0x7101d8c364
7101d8b988  cmn w10,#0x1
7101d8b98c  b.eq 0x7101d8c364
7101d8b990  cmp w10,#0x7cf
7101d8b994  b.gt 0x7101d8c364
7101d8b998  add x10,x9,x10, LSL #0x1
7101d8b99c  ldp x11,x9,[x9, #0x20]
7101d8b9a0  ldrh w10,[x10, #0x60]
7101d8b9a4  sub x9,x9,x11
7101d8b9a8  asr x9,x9,#0x6
7101d8b9ac  mul x9,x9,x27
7101d8b9b0  cmp w9,w10
7101d8b9b4  b.ls 0x7101d8c364
7101d8b9b8  mov w12,#0x140
7101d8b9bc  madd x11,x10,x12,x11
7101d8b9c0  cmp x9,x10
7101d8b9c4  csel x9,x11,x25,hi
7101d8b9c8  ldrb w10,[x9, #0x5a]
7101d8b9cc  cbz w10,0x7101d8c2e4
7101d8b9d0  ldrb w8,[x9, #0x92]
7101d8b9d4  ldr x26,[sp, #0x10]
7101d8b9d8  cbz w8,0x7101d8c364
7101d8b9dc  eor w8,w28,#0x1
7101d8b9e0  tbnz w8,#0x0,0x7101d8c364
7101d8b9e4  ldrsh x8,[x26, #0x15c]
7101d8b9e8  cmp x8,#0x7cf
7101d8b9ec  b.hi 0x7101d8c32c
7101d8b9f0  adrp x9,0x7105314000
7101d8b9f4  ldr x9,[x9, #0x510]
7101d8b9f8  ldr x9,[x9]
7101d8b9fc  ldr x9,[x9, #0x268]
7101d8ba00  ldr x9,[x9]
7101d8ba04  ldr x9,[x9]
7101d8ba08  add x8,x9,x8, LSL #0x2
7101d8ba0c  mov w9,#0x65a0
7101d8ba10  ldr w19,[x8, x9, LSL #0x0]
7101d8ba14  cbz w19,0x7101d8c32c
7101d8ba18  adrp x1,0x71042a3000
7101d8ba1c  add x1,x1,#0x41f
7101d8ba20  add x8,sp,#0x148
7101d8ba24  mov x0,x20
7101d8ba28  bl 0x7103776910
7101d8ba2c  adrp x1,0x71043be000
7101d8ba30  add x1,x1,#0xaa4
7101d8ba34  add x0,sp,#0x148
7101d8ba38  mov w2,#0x1
7101d8ba3c  mov w3,w19
7101d8ba40  bl 0x710377a280
7101d8ba44  b 0x7101d8c350
7101d8ba48  ldrb w8,[x8, #0x6c]
7101d8ba4c  sub w8,w8,#0x1
7101d8ba50  cmp w8,#0x2
7101d8ba54  b.hi 0x7101d8ba70
7101d8ba58  and x8,x8,#0xff
7101d8ba5c  lsl x8,x8,#0x3
7101d8ba60  mov w9,#0x301
7101d8ba64  movk w9,#0x2, LSL #16
7101d8ba68  lsr w22,w9,w8
7101d8ba6c  b 0x7101d8ba74
7101d8ba70  mov w22,wzr
7101d8ba74  adrp x1,0x710438b000
7101d8ba78  add x1,x1,#0x306
7101d8ba7c  sub x8,x29,#0x88
7101d8ba80  mov x0,x20
7101d8ba84  bl 0x7103776640
7101d8ba88  ldrb w1,[x25, #0x68]
7101d8ba8c  sub x0,x29,#0x88
7101d8ba90  bl 0x71025b10e0
7101d8ba94  ldrh w3,[x28, #0x15c]
7101d8ba98  ldrh w4,[x28, #0x15e]
7101d8ba9c  add x0,x28,#0x8
7101d8baa0  add x1,sp,#0x60
7101d8baa4  sub x2,x29,#0x78
7101d8baa8  bl 0x71025c7b60
7101d8baac  ldrb w8,[x25, #0x5e]
7101d8bab0  cmp w8,#0x1
7101d8bab4  b.ne 0x7101d8bac4
7101d8bab8  mov w8,#0x5a
7101d8babc  str w8,[x28, #0x340]
7101d8bac0  ldrb w8,[x25, #0x5e]
7101d8bac4  cmp w8,#0x1
7101d8bac8  b.eq 0x7101d8bae0
7101d8bacc  cbnz w8,0x7101d8baf4
7101d8bad0  ldr x0,[x28, #0x138]
7101d8bad4  adrp x1,0x710425d000
7101d8bad8  add x1,x1,#0x1ad
7101d8badc  b 0x7101d8baec
7101d8bae0  ldr x0,[x28, #0x138]
7101d8bae4  adrp x1,0x7104441000
7101d8bae8  add x1,x1,#0x885
7101d8baec  fmov s0,0x3f800000
7101d8baf0  bl 0x7103778300
7101d8baf4  adrp x1,0x710433a000
7101d8baf8  add x1,x1,#0x6bd
7101d8bafc  sub x8,x29,#0x98
7101d8bb00  mov x0,x20
7101d8bb04  bl 0x7103776640
7101d8bb08  ldur x21,[x29, #-0x90]
7101d8bb0c  ldr w9,[x28, #0x158]
7101d8bb10  cmp w9,#0x3
7101d8bb14  ldr x8,[x21, #0x8]
7101d8bb18  b.ne 0x7101d8bb4c
7101d8bb1c  cbz x8,0x7101d8bb34
7101d8bb20  ldr x8,[x8, #0x18]
7101d8bb24  cbz x8,0x7101d8bb34
7101d8bb28  ldrb w9,[x8, #0x58]
7101d8bb2c  orr w9,w9,#0x1
7101d8bb30  strb w9,[x8, #0x58]
7101d8bb34  ldrh w23,[x28, #0x15e]
7101d8bb38  ubfx x8,x23,#0x4,#0x1c
7101d8bb3c  cmp w8,#0x176
7101d8bb40  b.ls 0x7101d8bb68
7101d8bb44  mov w26,wzr
7101d8bb48  b 0x7101d8bb90
7101d8bb4c  cbz x8,0x7101d8bf28
7101d8bb50  ldr x8,[x8, #0x18]
7101d8bb54  cbz x8,0x7101d8bf28
7101d8bb58  ldrb w9,[x8, #0x58]
7101d8bb5c  and w9,w9,#0xfe
7101d8bb60  strb w9,[x8, #0x58]
7101d8bb64  b 0x7101d8bf28
7101d8bb68  adrp x9,0x7105329000
7101d8bb6c  ldr x9,[x9, #0xf98]
7101d8bb70  ldr x9,[x9]
7101d8bb74  ldr x9,[x9, #0x30]
7101d8bb78  mov w10,#0x50
7101d8bb7c  madd x9,x23,x10,x9
7101d8bb80  mov w10,#0x197e
7101d8bb84  movk w10,#0x1, LSL #16
7101d8bb88  ldrb w9,[x9, x10, LSL ]
7101d8bb8c  ubfx w26,w9,#0x1,#0x1
7101d8bb90  ldr x24,[x28, #0x348]
7101d8bb94  mov x27,#0x5200000000000000
7101d8bb98  and x9,x24,#-0x100000000000000
7101d8bb9c  cmp x9,x27
7101d8bba0  b.ne 0x7101d8bedc
7101d8bba4  and x9,x24,#0xffffffffff
7101d8bba8  cbz x9,0x7101d8bedc
7101d8bbac  adrp x9,0x7105329000
7101d8bbb0  ldr x9,[x9, #0xf98]
7101d8bbb4  ldr x9,[x9]
7101d8bbb8  ldr x9,[x9, #0x30]
7101d8bbbc  cmp w8,#0x177
7101d8bbc0  b.cc 0x7101d8be18
7101d8bbc4  mov w8,#0xffffe890
7101d8bbc8  add w10,w23,w8
7101d8bbcc  adrp x8,0x710532a000
7101d8bbd0  add x8,x8,#0x878
7101d8bbd4  and w11,w10,#0xffff
7101d8bbd8  cmp w11,#0x63
7101d8bbdc  b.hi 0x7101d8be2c
7101d8bbe0  and x10,x10,#0xffff
7101d8bbe4  mov w11,#0x50
7101d8bbe8  madd x9,x10,x11,x9
7101d8bbec  mov w11,#0x8cc8
7101d8bbf0  movk w11,#0x8, LSL #16
7101d8bbf4  mov w10,#0x8cc0
7101d8bbf8  movk w10,#0x8, LSL #16
7101d8bbfc  ldrsh w11,[x9, x11, LSL #0x0]
7101d8bc00  add x9,x9,x10
7101d8bc04  cmn w11,#0x1
7101d8bc08  csel x8,x8,x9,eq
7101d8bc0c  b 0x7101d8be2c
7101d8bc10  mov w21,wzr
7101d8bc14  adrp x1,0x71042c5000
7101d8bc18  add x1,x1,#0x1e4
7101d8bc1c  add x8,sp,#0xc8
7101d8bc20  mov x0,x20
7101d8bc24  bl 0x7103776640
7101d8bc28  add x0,sp,#0x148
7101d8bc2c  mov w1,w21
7101d8bc30  mov w2,wzr
7101d8bc34  add x19,sp,#0x148
7101d8bc38  bl 0x710339dde0
7101d8bc3c  add x1,x19,#0x8
7101d8bc40  ldr x19,[sp, #0xd0]
7101d8bc44  fmov s0,0x3f800000
7101d8bc48  mov x0,x19
7101d8bc4c  bl 0x7103778300
7101d8bc50  adrp x1,0x71043ee000
7101d8bc54  add x1,x1,#0x90c
7101d8bc58  add x8,sp,#0x18
7101d8bc5c  add x0,sp,#0xc8
7101d8bc60  bl 0x7103776640
7101d8bc64  mov w2,#0xffffffff
7101d8bc68  add x0,sp,#0x18
7101d8bc6c  mov w1,w21
7101d8bc70  mov w3,wzr
7101d8bc74  mov w4,wzr
7101d8bc78  bl 0x71025b12c0
7101d8bc7c  ldr x21,[sp, #0x20]
7101d8bc80  adrp x22,0x710523d000
7101d8bc84  add x22,x22,#0x988
7101d8bc88  stp x22,xzr,[sp, #0x18]
7101d8bc8c  cbz x21,0x7101d8bcb0
7101d8bc90  ldr x0,[x21, #0x18]
7101d8bc94  adrp x8,0x710523d000
7101d8bc98  add x8,x8,#0x9a8
7101d8bc9c  stp x8,xzr,[x21, #0x10]
7101d8bca0  cbz x0,0x7101d8bca8
7101d8bca4  bl 0x710392eb40
7101d8bca8  mov x0,x21
7101d8bcac  bl 0x710392eb40
7101d8bcb0  stp x22,xzr,[sp, #0xc8]
7101d8bcb4  cbz x19,0x7101d8bcd8
7101d8bcb8  ldr x0,[x19, #0x18]
7101d8bcbc  adrp x8,0x710523d000
7101d8bcc0  add x8,x8,#0x9a8
7101d8bcc4  stp x8,xzr,[x19, #0x10]
7101d8bcc8  cbz x0,0x7101d8bcd0
7101d8bccc  bl 0x710392eb40
7101d8bcd0  mov x0,x19
7101d8bcd4  bl 0x710392eb40
7101d8bcd8  mov x0,x28
7101d8bcdc  mov w1,wzr
7101d8bce0  mov w2,wzr
7101d8bce4  bl 0x7101d8cfb0
7101d8bce8  mov x0,x28
7101d8bcec  bl 0x7101d8d450
7101d8bcf0  adrp x1,0x71042b4000
7101d8bcf4  add x1,x1,#0xa41
7101d8bcf8  add x8,sp,#0x148
7101d8bcfc  mov x0,x20
7101d8bd00  bl 0x7103776640
7101d8bd04  adrp x1,0x7104319000
7101d8bd08  add x1,x1,#0x327
7101d8bd0c  add x8,sp,#0xc8
7101d8bd10  add x0,sp,#0x148
7101d8bd14  bl 0x7103776640
7101d8bd18  adrp x1,0x7104338000
7101d8bd1c  add x1,x1,#0xd31
7101d8bd20  add x8,sp,#0x18
7101d8bd24  add x0,sp,#0xc8
7101d8bd28  bl 0x7103776910
7101d8bd2c  ldr w3,[x28, #0x288]
7101d8bd30  adrp x1,0x71043be000
7101d8bd34  add x1,x1,#0xb6c
7101d8bd38  add x0,sp,#0x18
7101d8bd3c  mov w2,#0x1
7101d8bd40  bl 0x710377a280
7101d8bd44  ldr x0,[sp, #0x20]
7101d8bd48  adrp x21,0x710523d000
7101d8bd4c  add x21,x21,#0x9a8
7101d8bd50  stp x21,xzr,[sp, #0x18]
7101d8bd54  cbz x0,0x7101d8bd5c
7101d8bd58  bl 0x710392eb40
7101d8bd5c  ldr x19,[sp, #0xd0]
7101d8bd60  adrp x22,0x710523d000
7101d8bd64  add x22,x22,#0x988
7101d8bd68  stp x22,xzr,[sp, #0xc8]
7101d8bd6c  cbz x19,0x7101d8bd88
7101d8bd70  ldr x0,[x19, #0x18]
7101d8bd74  stp x21,xzr,[x19, #0x10]
7101d8bd78  cbz x0,0x7101d8bd80
7101d8bd7c  bl 0x710392eb40
7101d8bd80  mov x0,x19
7101d8bd84  bl 0x710392eb40
7101d8bd88  ldr x19,[sp, #0x150]
7101d8bd8c  stp x22,xzr,[sp, #0x148]
7101d8bd90  cbz x19,0x7101d8bdac
7101d8bd94  ldr x0,[x19, #0x18]
7101d8bd98  stp x21,xzr,[x19, #0x10]
7101d8bd9c  cbz x0,0x7101d8bda4
7101d8bda0  bl 0x710392eb40
7101d8bda4  mov x0,x19
7101d8bda8  bl 0x710392eb40
7101d8bdac  adrp x1,0x71043e0000
7101d8bdb0  add x1,x1,#0x4ef
7101d8bdb4  add x8,sp,#0x148
7101d8bdb8  mov x0,x20
7101d8bdbc  bl 0x7103776640
7101d8bdc0  ldr x19,[sp, #0x150]
7101d8bdc4  ldr x8,[x19, #0x8]
7101d8bdc8  cbz x8,0x7101d8bde0
7101d8bdcc  ldr x8,[x8, #0x18]
7101d8bdd0  cbz x8,0x7101d8bde0
7101d8bdd4  ldrb w9,[x8, #0x58]
7101d8bdd8  and w9,w9,#0xfe
7101d8bddc  strb w9,[x8, #0x58]
7101d8bde0  ldr x0,[x28, #0x138]
7101d8bde4  fmov s0,0x3f800000
7101d8bde8  adrp x1,0x710436a000
7101d8bdec  add x1,x1,#0x273
7101d8bdf0  bl 0x7103778300
7101d8bdf4  stp x22,xzr,[sp, #0x148]
7101d8bdf8  cbz x19,0x7101d8c688
7101d8bdfc  str x21,[x19, #0x10]
7101d8be00  ldr x0,[x19, #0x18]
7101d8be04  str xzr,[x19, #0x18]
7101d8be08  cbz x0,0x7101d8be10
7101d8be0c  bl 0x710392eb40
7101d8be10  mov x0,x19
7101d8be14  b 0x7101d8c684
7101d8be18  mov w8,#0x50
7101d8be1c  madd x8,x23,x8,x9
7101d8be20  mov w9,#0x1940
7101d8be24  movk w9,#0x1, LSL #16
7101d8be28  add x8,x8,x9
7101d8be2c  ldr x8,[x8, #0x18]
7101d8be30  and x9,x8,#-0x100000000000000
7101d8be34  cmp x9,x27
7101d8be38  b.ne 0x7101d8be50
7101d8be3c  and x9,x8,#0xffffffffff
7101d8be40  cbz x9,0x7101d8be50
7101d8be44  eor x8,x24,x8
7101d8be48  tst x8,#0xffffffffff
7101d8be4c  b.eq 0x7101d8bedc
7101d8be50  adrp x8,0x710532f000
7101d8be54  ldr x8,[x8, #0x730]
7101d8be58  ldr x8,[x8, #0x8]
7101d8be5c  ldr x8,[x8, #0x208]
7101d8be60  ldr x0,[x8, #0x8]
7101d8be64  mov x1,#0xe86
7101d8be68  movk x1,#0x30ff, LSL #16
7101d8be6c  movk x1,#0x15, LSL #32
7101d8be70  bl 0x71032a3d90
7101d8be74  and x8,x0,#-0x100000000000000
7101d8be78  and x9,x0,#0xffffffffff
7101d8be7c  cmp x8,x27
7101d8be80  b.ne 0x7101d8be98
7101d8be84  cbz x9,0x7101d8be98
7101d8be88  eor x8,x0,x24
7101d8be8c  tst x8,#0xffffffffff
7101d8be90  b.ne 0x7101d8bea4
7101d8be94  b 0x7101d8beb4
7101d8be98  cbz x9,0x7101d8bea4
7101d8be9c  cmp x8,x27
7101d8bea0  b.eq 0x7101d8beb4
7101d8bea4  mov w0,w23
7101d8bea8  mov x1,x24
7101d8beac  bl 0x71025ca280
7101d8beb0  tbz w0,#0x0,0x7101d8bedc
7101d8beb4  ldr s0,[x28, #0x350]
7101d8beb8  ldrh w0,[x28, #0x15c]
7101d8bebc  bl 0x71025cba90
7101d8bec0  and w8,w0,#0xff
7101d8bec4  cmp w8,#0x2
7101d8bec8  b.eq 0x7101d8bf14
7101d8becc  cbz w8,0x7101d8bf08
7101d8bed0  adrp x1,0x71043cd000
7101d8bed4  add x1,x1,#0x335
7101d8bed8  b 0x7101d8bf1c
7101d8bedc  cbz w26,0x7101d8beec
7101d8bee0  adrp x1,0x7104270000
7101d8bee4  add x1,x1,#0x4e1
7101d8bee8  b 0x7101d8bf1c
7101d8beec  ldr s0,[x28, #0x350]
7101d8bef0  ldrh w0,[x28, #0x15c]
7101d8bef4  bl 0x71025cba90
7101d8bef8  and w8,w0,#0xff
7101d8befc  cmp w8,#0x2
7101d8bf00  b.eq 0x7101d8bf14
7101d8bf04  cbnz w8,0x7101d8bed0
7101d8bf08  adrp x1,0x7104292000
7101d8bf0c  add x1,x1,#0x174
7101d8bf10  b 0x7101d8bf1c
7101d8bf14  adrp x1,0x7104422000
7101d8bf18  add x1,x1,#0x8b4
7101d8bf1c  fmov s0,0x3f800000
7101d8bf20  mov x0,x21
7101d8bf24  bl 0x7103778300
7101d8bf28  adrp x1,0x71043e0000
7101d8bf2c  add x1,x1,#0x4ef
7101d8bf30  sub x8,x29,#0xa8
7101d8bf34  mov x0,x20
7101d8bf38  bl 0x7103776640
7101d8bf3c  ldrb w8,[x25, #0x5e]
7101d8bf40  cbnz w8,0x7101d8bf50
7101d8bf44  ldr w8,[x28, #0x158]
7101d8bf48  cmp w8,#0x5
7101d8bf4c  b.ne 0x7101d8bf74
7101d8bf50  ldur x23,[x29, #-0xa0]
7101d8bf54  ldr x8,[x23, #0x8]
7101d8bf58  cbz x8,0x7101d8bfd0
7101d8bf5c  ldr x8,[x8, #0x18]
7101d8bf60  cbz x8,0x7101d8bfd0
7101d8bf64  ldrb w9,[x8, #0x58]
7101d8bf68  and w9,w9,#0xfe
7101d8bf6c  strb w9,[x8, #0x58]
7101d8bf70  b 0x7101d8bfd0
7101d8bf74  ldur x23,[x29, #-0xa0]
7101d8bf78  ldr x8,[x23, #0x8]
7101d8bf7c  cbz x8,0x7101d8bf94
7101d8bf80  ldr x8,[x8, #0x18]
7101d8bf84  cbz x8,0x7101d8bf94
7101d8bf88  ldrb w9,[x8, #0x58]
7101d8bf8c  orr w9,w9,#0x1
7101d8bf90  strb w9,[x8, #0x58]
7101d8bf94  adrp x1,0x710437c000
7101d8bf98  add x1,x1,#0x980
7101d8bf9c  add x8,sp,#0x148
7101d8bfa0  sub x0,x29,#0xa8
7101d8bfa4  bl 0x7103776910
7101d8bfa8  adrp x1,0x710437c000
7101d8bfac  add x1,x1,#0x989
7101d8bfb0  add x0,sp,#0x148
7101d8bfb4  bl 0x710377a120
7101d8bfb8  ldr x0,[sp, #0x150]
7101d8bfbc  adrp x8,0x710523d000
7101d8bfc0  add x8,x8,#0x9a8
7101d8bfc4  stp x8,xzr,[sp, #0x148]
7101d8bfc8  cbz x0,0x7101d8bfd0
7101d8bfcc  bl 0x710392eb40
7101d8bfd0  ldr x19,[x19, #0x1d8]
7101d8bfd4  ldrh w1,[x28, #0x15c]
7101d8bfd8  mov x0,x19
7101d8bfdc  bl 0x71032a9470
7101d8bfe0  mov x2,x0
7101d8bfe4  add x0,sp,#0x148
7101d8bfe8  mov x1,x19
7101d8bfec  add x24,sp,#0x148
7101d8bff0  bl 0x71032a9540
7101d8bff4  add x1,x24,#0x8
7101d8bff8  adrp x0,0x7104464000
7101d8bffc  add x0,x0,#0x1d4
7101d8c000  add x8,sp,#0xc8
7101d8c004  add x19,sp,#0xc8
7101d8c008  bl 0x71003a4ca0
7101d8c00c  adrp x1,0x7104292000
7101d8c010  add x1,x1,#0x204
7101d8c014  add x8,sp,#0x148
7101d8c018  mov x0,x20
7101d8c01c  bl 0x7103776910
7101d8c020  add x1,x19,#0x8
7101d8c024  add x0,sp,#0x148
7101d8c028  bl 0x710377a120
7101d8c02c  ldr x0,[sp, #0x150]
7101d8c030  adrp x24,0x710523d000
7101d8c034  add x24,x24,#0x9a8
7101d8c038  stp x24,xzr,[sp, #0x148]
7101d8c03c  cbz x0,0x7101d8c044
7101d8c040  bl 0x710392eb40
7101d8c044  and w8,w22,#0xff
7101d8c048  cmp w8,#0x4
7101d8c04c  b.ne 0x7101d8c098
7101d8c050  adrp x1,0x71042e7000
7101d8c054  add x1,x1,#0x799
7101d8c058  add x8,sp,#0x148
7101d8c05c  mov x0,x20
7101d8c060  bl 0x7103776640
7101d8c064  ldr x19,[sp, #0x150]
7101d8c068  ldr x8,[x19, #0x8]
7101d8c06c  cbz x8,0x7101d8c084
7101d8c070  ldr x8,[x8, #0x18]
7101d8c074  cbz x8,0x7101d8c084
7101d8c078  ldrb w9,[x8, #0x58]
7101d8c07c  and w9,w9,#0xfe
7101d8c080  strb w9,[x8, #0x58]
7101d8c084  adrp x8,0x710523d000
7101d8c088  add x8,x8,#0x988
7101d8c08c  stp x8,xzr,[sp, #0x148]
7101d8c090  cbnz x19,0x7101d8c244
7101d8c094  b 0x7101d8c25c
7101d8c098  mov x8,#0xff0000000000
7101d8c09c  mov w2,#0x1
7101d8c0a0  str x2,[sp, #0x18]
7101d8c0a4  movk x8,#0x52ff, LSL #48
7101d8c0a8  strb wzr,[sp, #0x20]
7101d8c0ac  stur xzr,[sp, #0x24]
7101d8c0b0  str x8,[sp, #0x30]
7101d8c0b4  orr w9,wzr,#0xffff
7101d8c0b8  str wzr,[sp, #0x38]
7101d8c0bc  ldrh w8,[x28, #0x15e]
7101d8c0c0  cmp x8,x9
7101d8c0c4  b.eq 0x7101d8c148
7101d8c0c8  adrp x9,0x7105329000
7101d8c0cc  ldr x9,[x9, #0xf98]
7101d8c0d0  ldr x9,[x9]
7101d8c0d4  ldr x9,[x9, #0x30]
7101d8c0d8  ubfx x10,x8,#0x4,#0x1c
7101d8c0dc  cmp w10,#0x177
7101d8c0e0  b.cc 0x7101d8c130
7101d8c0e4  mov w10,#0xffffe890
7101d8c0e8  add w10,w8,w10
7101d8c0ec  adrp x8,0x710532a000
7101d8c0f0  add x8,x8,#0x878
7101d8c0f4  and w11,w10,#0xffff
7101d8c0f8  cmp w11,#0x63
7101d8c0fc  b.hi 0x7101d8c144
7101d8c100  and x10,x10,#0xffff
7101d8c104  mov w11,#0x50
7101d8c108  madd x9,x10,x11,x9
7101d8c10c  mov w11,#0x8cc8
7101d8c110  movk w11,#0x8, LSL #16
7101d8c114  mov w10,#0x8cc0
7101d8c118  movk w10,#0x8, LSL #16
7101d8c11c  ldrsh w11,[x9, x11, LSL #0x0]
7101d8c120  add x9,x9,x10
7101d8c124  cmn w11,#0x1
7101d8c128  csel x8,x8,x9,eq
7101d8c12c  b 0x7101d8c144
7101d8c130  mov w10,#0x50
7101d8c134  madd x8,x8,x10,x9
7101d8c138  mov w9,#0x1940
7101d8c13c  movk w9,#0x1, LSL #16
7101d8c140  add x8,x8,x9
7101d8c144  ldrh w2,[x8, #0x10]
7101d8c148  ldrh w1,[x28, #0x15c]
7101d8c14c  add x0,sp,#0x18
7101d8c150  bl 0x71025ca840
7101d8c154  add x0,sp,#0x18
7101d8c158  bl 0x71025cb8d0
7101d8c15c  mov w19,w0
7101d8c160  str w0,[x28, #0x27c]
7101d8c164  adrp x1,0x71042e7000
7101d8c168  add x1,x1,#0x799
7101d8c16c  sub x8,x29,#0xb8
7101d8c170  mov x0,x20
7101d8c174  bl 0x7103776640
7101d8c178  adrp x1,0x7104452000
7101d8c17c  add x1,x1,#0x707
7101d8c180  add x8,sp,#0x148
7101d8c184  sub x0,x29,#0xb8
7101d8c188  bl 0x7103776910
7101d8c18c  adrp x1,0x71043ff000
7101d8c190  add x1,x1,#0x11e
7101d8c194  add x0,sp,#0x148
7101d8c198  mov w2,#0x1
7101d8c19c  mov w3,w19
7101d8c1a0  bl 0x710377a280
7101d8c1a4  ldr x0,[sp, #0x150]
7101d8c1a8  stp x24,xzr,[sp, #0x148]
7101d8c1ac  cbz x0,0x7101d8c1b4
7101d8c1b0  bl 0x710392eb40
7101d8c1b4  adrp x1,0x71043ee000
7101d8c1b8  add x1,x1,#0x91f
7101d8c1bc  add x8,sp,#0x148
7101d8c1c0  sub x0,x29,#0xb8
7101d8c1c4  add x25,sp,#0x148
7101d8c1c8  bl 0x7103776910
7101d8c1cc  adrp x1,0x71043ff000
7101d8c1d0  add x1,x1,#0x11e
7101d8c1d4  add x0,sp,#0x148
7101d8c1d8  mov w2,#0x1
7101d8c1dc  mov w3,w19
7101d8c1e0  bl 0x710377a280
7101d8c1e4  ldr x0,[sp, #0x150]
7101d8c1e8  stp x24,xzr,[sp, #0x148]
7101d8c1ec  cbz x0,0x7101d8c1f4
7101d8c1f0  bl 0x710392eb40
7101d8c1f4  add x0,sp,#0x148
7101d8c1f8  mov w1,w22
7101d8c1fc  mov w2,wzr
7101d8c200  bl 0x710339dde0
7101d8c204  ldur x19,[x29, #-0xb0]
7101d8c208  fmov s0,0x3f800000
7101d8c20c  add x1,x25,#0x8
7101d8c210  mov x0,x19
7101d8c214  bl 0x7103778300
7101d8c218  ldr x8,[x19, #0x8]
7101d8c21c  cbz x8,0x7101d8c234
7101d8c220  ldr x8,[x8, #0x18]
7101d8c224  cbz x8,0x7101d8c234
7101d8c228  ldrb w9,[x8, #0x58]
7101d8c22c  orr w9,w9,#0x1
7101d8c230  strb w9,[x8, #0x58]
7101d8c234  adrp x8,0x710523d000
7101d8c238  add x8,x8,#0x988
7101d8c23c  stp x8,xzr,[x29, #-0xb8]
7101d8c240  cbz x19,0x7101d8c25c
7101d8c244  ldr x0,[x19, #0x18]
7101d8c248  stp x24,xzr,[x19, #0x10]
7101d8c24c  cbz x0,0x7101d8c254
7101d8c250  bl 0x710392eb40
7101d8c254  mov x0,x19
7101d8c258  bl 0x710392eb40
7101d8c25c  ldr x0,[x28]
7101d8c260  ldrh w2,[x28, #0x15c]
7101d8c264  mov x1,x20
7101d8c268  ldrh w3,[x28, #0x15e]
7101d8c26c  bl 0x71025c9570
7101d8c270  adrp x19,0x710523d000
7101d8c274  add x19,x19,#0x988
7101d8c278  stp x19,xzr,[x29, #-0xa8]
7101d8c27c  cbz x23,0x7101d8c298
7101d8c280  ldr x0,[x23, #0x18]
7101d8c284  stp x24,xzr,[x23, #0x10]
7101d8c288  cbz x0,0x7101d8c290
7101d8c28c  bl 0x710392eb40
7101d8c290  mov x0,x23
7101d8c294  bl 0x710392eb40
7101d8c298  stp x19,xzr,[x29, #-0x98]
7101d8c29c  cbz x21,0x7101d8c2b8
7101d8c2a0  ldr x0,[x21, #0x18]
7101d8c2a4  stp x24,xzr,[x21, #0x10]
7101d8c2a8  cbz x0,0x7101d8c2b0
7101d8c2ac  bl 0x710392eb40
7101d8c2b0  mov x0,x21
7101d8c2b4  bl 0x710392eb40
7101d8c2b8  stur x19,[x29, #-0x88]
7101d8c2bc  ldur x19,[x29, #-0x80]
7101d8c2c0  stur xzr,[x29, #-0x80]
7101d8c2c4  cbz x19,0x7101d8ab1c
7101d8c2c8  ldr x0,[x19, #0x18]
7101d8c2cc  stp x24,xzr,[x19, #0x10]
7101d8c2d0  cbz x0,0x7101d8c2d8
7101d8c2d4  bl 0x710392eb40
7101d8c2d8  mov x0,x19
7101d8c2dc  bl 0x710392eb40
7101d8c2e0  b 0x7101d8ab1c
7101d8c2e4  ldrb w10,[x9, #0x120]
7101d8c2e8  ldr x26,[sp, #0x10]
7101d8c2ec  cbz w10,0x7101d8c364
7101d8c2f0  ldr x0,[x8, #0x168]
7101d8c2f4  ldr x19,[x9, #0x98]
7101d8c2f8  mov x1,#0xfa78
7101d8c2fc  movk x1,#0xd5f7, LSL #16
7101d8c300  movk x1,#0xf, LSL #32
7101d8c304  mov x25,#-0x3f00000000000000
7101d8c308  bl 0x71032631a0
7101d8c30c  and x10,x19,#-0x100000000000000
7101d8c310  and x9,x19,#0xffffffffff
7101d8c314  and x8,x0,#0xffffffffff
7101d8c318  cmp x10,x25
7101d8c31c  ccmp x9,#0x0,#0x4,eq
7101d8c320  b.ne 0x7101d8c6ac
7101d8c324  and x11,x0,#-0x100000000000000
7101d8c328  b 0x7101d8c6e8
7101d8c32c  adrp x1,0x71042a3000
7101d8c330  add x1,x1,#0x41f
7101d8c334  add x8,sp,#0x148
7101d8c338  mov x0,x20
7101d8c33c  bl 0x7103776910
7101d8c340  adrp x1,0x71043be000
7101d8c344  add x1,x1,#0xace
7101d8c348  add x0,sp,#0x148
7101d8c34c  bl 0x710377a120
7101d8c350  ldr x0,[sp, #0x150]
7101d8c354  stp x23,xzr,[sp, #0x148]
7101d8c358  cbz x0,0x7101d8c360
7101d8c35c  bl 0x710392eb40
7101d8c360  ldr x26,[sp, #0x10]
7101d8c364  ldr w19,[x26, #0x35c]
7101d8c368  ldrb w8,[x26, #0x360]
7101d8c36c  add x10,sp,#0x148
7101d8c370  mov w9,#0x9dc5
7101d8c374  movk w9,#0x811c, LSL #16
7101d8c378  add x1,x10,#0x8
7101d8c37c  cmp w19,#0x2
7101d8c380  strb wzr,[sp, #0x150]
7101d8c384  str x9,[sp, #0x148]
7101d8c388  b.eq 0x7101d8c3e8
7101d8c38c  cmp w19,#0x1
7101d8c390  b.eq 0x7101d8c440
7101d8c394  cbnz w19,0x7101d8c498
7101d8c398  mov x10,#0x656b
7101d8c39c  movk x10,#0x6879, LSL #16
7101d8c3a0  movk x10,#0x6c65, LSL #32
7101d8c3a4  movk x10,#0x5f70, LSL #48
7101d8c3a8  add x11,sp,#0x148
7101d8c3ac  str x10,[sp, #0x150]
7101d8c3b0  mov w12,#0x666f
7101d8c3b4  movk w12,#0x66, LSL #16
7101d8c3b8  str w12,[sp, #0x158]
7101d8c3bc  add x10,x11,#0x9
7101d8c3c0  mov w11,#0xb
7101d8c3c4  str w11,[sp, #0x14c]
7101d8c3c8  mov w12,#0x6b
7101d8c3cc  mov w11,#0x89
7101d8c3d0  mul w9,w9,w11
7101d8c3d4  and w12,w12,#0xff
7101d8c3d8  eor w9,w9,w12
7101d8c3dc  ldrb w12,[x10], #0x1
7101d8c3e0  cbnz w12,0x7101d8c3d0
7101d8c3e4  b 0x7101d8c494
7101d8c3e8  mov x11,#0x656b
7101d8c3ec  movk x11,#0x6879, LSL #16
7101d8c3f0  mov x12,#0x6e6f
7101d8c3f4  movk x12,#0x625f, LSL #16
7101d8c3f8  movk x11,#0x6c65, LSL #32
7101d8c3fc  movk x11,#0x5f70, LSL #48
7101d8c400  movk x12,#0x7461, LSL #32
7101d8c404  movk x12,#0x6c74, LSL #48
7101d8c408  mov w13,#0x65
7101d8c40c  stp x11,x12,[sp, #0x150]
7101d8c410  strh w13,[sp, #0x160]
7101d8c414  add x10,x10,#0x9
7101d8c418  mov w13,#0x11
7101d8c41c  str w13,[sp, #0x14c]
7101d8c420  mov w12,#0x6b
7101d8c424  mov w11,#0x89
7101d8c428  mul w9,w9,w11
7101d8c42c  and w12,w12,#0xff
7101d8c430  eor w9,w9,w12
7101d8c434  ldrb w12,[x10], #0x1
7101d8c438  cbnz w12,0x7101d8c428
7101d8c43c  b 0x7101d8c494
7101d8c440  mov x10,#0x656b
7101d8c444  movk x10,#0x6879, LSL #16
7101d8c448  movk x10,#0x6c65, LSL #32
7101d8c44c  movk x10,#0x5f70, LSL #48
7101d8c450  add x11,sp,#0x148
7101d8c454  str x10,[sp, #0x150]
7101d8c458  add x10,x11,#0x9
7101d8c45c  mov w11,#0x77
7101d8c460  strh w11,[sp, #0x15c]
7101d8c464  mov w12,#0x6e6f
7101d8c468  movk w12,#0x615f, LSL #16
7101d8c46c  str w12,[sp, #0x158]
7101d8c470  mov w11,#0xd
7101d8c474  mov w12,#0x6b
7101d8c478  str w11,[sp, #0x14c]
7101d8c47c  mov w11,#0x89
7101d8c480  mul w9,w9,w11
7101d8c484  and w12,w12,#0xff
7101d8c488  eor w9,w9,w12
7101d8c48c  ldrb w12,[x10], #0x1
7101d8c490  cbnz w12,0x7101d8c480
7101d8c494  str w9,[sp, #0x148]
7101d8c498  ldr x0,[x26, #0x138]
7101d8c49c  cbz w8,0x7101d8c4a8
7101d8c4a0  bl 0x7103778760
7101d8c4a4  b 0x7101d8c4b0
7101d8c4a8  fmov s0,0x3f800000
7101d8c4ac  bl 0x7103778300
7101d8c4b0  str w19,[x26, #0x358]
7101d8c4b4  strb wzr,[x26, #0x360]
7101d8c4b8  ldrb w8,[x24, #0x5e]
7101d8c4bc  cmp w8,#0x2
7101d8c4c0  b.ne 0x7101d8c4f4
7101d8c4c4  adrp x8,0x710532f000
7101d8c4c8  ldr x8,[x8, #0x730]
7101d8c4cc  ldr x25,[x8, #0x8]
7101d8c4d0  ldrh w1,[x26, #0x15c]
7101d8c4d4  ldr x0,[x25, #0x208]
7101d8c4d8  bl 0x71032a4c20
7101d8c4dc  and x9,x0,#-0x100000000000000
7101d8c4e0  mov x10,#0x5200000000000000
7101d8c4e4  and x8,x0,#0xffffffffff
7101d8c4e8  cmp x9,x10
7101d8c4ec  ccmp x8,#0x0,#0x4,eq
7101d8c4f0  b.ne 0x7101d8c530
7101d8c4f4  adrp x1,0x71042c5000
7101d8c4f8  add x1,x1,#0x30f
7101d8c4fc  add x8,sp,#0x148
7101d8c500  mov x0,x20
7101d8c504  bl 0x7103776910
7101d8c508  ldr x19,[sp, #0x150]
7101d8c50c  ldr x0,[x19, #0x10]
7101d8c510  cbz x0,0x7101d8c520
7101d8c514  adrp x1,0x7104867000
7101d8c518  add x1,x1,#0xc2e
7101d8c51c  bl 0x71037a28a0
7101d8c520  stp x23,xzr,[sp, #0x148]
7101d8c524  cbz x19,0x7101d8c578
7101d8c528  mov x0,x19
7101d8c52c  b 0x7101d8c574
7101d8c530  mov x19,x0
7101d8c534  adrp x1,0x71042c5000
7101d8c538  add x1,x1,#0x30f
7101d8c53c  add x8,sp,#0x18
7101d8c540  mov x0,x20
7101d8c544  bl 0x7103776910
7101d8c548  ldr x1,[x25, #0x208]
7101d8c54c  add x0,sp,#0x148
7101d8c550  mov x2,x19
7101d8c554  add x25,sp,#0x148
7101d8c558  bl 0x71032a4e40
7101d8c55c  add x1,x25,#0x8
7101d8c560  add x0,sp,#0x18
7101d8c564  bl 0x710377a120
7101d8c568  ldr x0,[sp, #0x20]
7101d8c56c  stp x23,xzr,[sp, #0x18]
7101d8c570  cbz x0,0x7101d8c578
7101d8c574  bl 0x710392eb40
7101d8c578  ldrb w8,[x24, #0x5e]
7101d8c57c  sub w9,w8,#0x2
7101d8c580  cmp w9,#0x2
7101d8c584  b.cc 0x7101d8c614
7101d8c588  cmp w8,#0x1
7101d8c58c  b.hi 0x7101d8c64c
7101d8c590  adrp x1,0x710438b000
7101d8c594  add x1,x1,#0x306
7101d8c598  add x8,sp,#0x148
7101d8c59c  mov x0,x20
7101d8c5a0  bl 0x7103776910
7101d8c5a4  ldr x0,[sp, #0x150]
7101d8c5a8  ldr x8,[x0]
7101d8c5ac  cbz x8,0x7101d8c5bc
7101d8c5b0  ldrb w9,[x8, #0x58]
7101d8c5b4  orr w9,w9,#0x1
7101d8c5b8  strb w9,[x8, #0x58]
7101d8c5bc  stp x23,xzr,[sp, #0x148]
7101d8c5c0  cbz x0,0x7101d8c5c8
7101d8c5c4  bl 0x710392eb40
7101d8c5c8  adrp x1,0x710438b000
7101d8c5cc  add x1,x1,#0x306
7101d8c5d0  add x8,sp,#0x148
7101d8c5d4  mov x0,x20
7101d8c5d8  bl 0x7103776640
7101d8c5dc  ldrb w1,[x24, #0x68]
7101d8c5e0  add x0,sp,#0x148
7101d8c5e4  bl 0x71025b10e0
7101d8c5e8  ldr x19,[sp, #0x150]
7101d8c5ec  adrp x8,0x710523d000
7101d8c5f0  add x8,x8,#0x988
7101d8c5f4  stp x8,xzr,[sp, #0x148]
7101d8c5f8  cbz x19,0x7101d8c64c
7101d8c5fc  ldr x0,[x19, #0x18]
7101d8c600  stp x23,xzr,[x19, #0x10]
7101d8c604  cbz x0,0x7101d8c60c
7101d8c608  bl 0x710392eb40
7101d8c60c  mov x0,x19
7101d8c610  b 0x7101d8c648
7101d8c614  adrp x1,0x710438b000
7101d8c618  add x1,x1,#0x306
7101d8c61c  add x8,sp,#0x148
7101d8c620  mov x0,x20
7101d8c624  bl 0x7103776910
7101d8c628  ldr x0,[sp, #0x150]
7101d8c62c  ldr x8,[x0]
7101d8c630  cbz x8,0x7101d8c640
7101d8c634  ldrb w9,[x8, #0x58]
7101d8c638  and w9,w9,#0xfe
7101d8c63c  strb w9,[x8, #0x58]
7101d8c640  stp x23,xzr,[sp, #0x148]
7101d8c644  cbz x0,0x7101d8c64c
7101d8c648  bl 0x710392eb40
7101d8c64c  ldur x19,[x29, #-0x80]
7101d8c650  adrp x20,0x710523d000
7101d8c654  add x20,x20,#0x9a8
7101d8c658  stp x20,xzr,[x29, #-0x88]
7101d8c65c  cbz x19,0x7101d8c668
7101d8c660  mov x0,x19
7101d8c664  bl 0x710392eb40
7101d8c668  stp x20,xzr,[x29, #-0x78]
7101d8c66c  cbz x22,0x7101d8c678
7101d8c670  mov x0,x22
7101d8c674  bl 0x710392eb40
7101d8c678  stp x20,xzr,[sp, #0x60]
7101d8c67c  cbz x21,0x7101d8c688
7101d8c680  mov x0,x21
7101d8c684  bl 0x710392eb40
7101d8c688  add sp,sp,#0x220
7101d8c68c  ldp x29,x30,[sp, #0x60]
7101d8c690  ldp x20,x19,[sp, #0x50]
7101d8c694  ldp x22,x21,[sp, #0x40]
7101d8c698  ldp x24,x23,[sp, #0x30]
7101d8c69c  ldp x26,x25,[sp, #0x20]
7101d8c6a0  ldp x28,x27,[sp, #0x10]
7101d8c6a4  ldr d8,[sp], #0x70
7101d8c6a8  ret
7101d8c6ac  and x11,x0,#-0x100000000000000
7101d8c6b0  cmp x11,x25
7101d8c6b4  b.ne 0x7101d8c6e8
7101d8c6b8  cbz x8,0x7101d8c6e8
7101d8c6bc  eor x8,x0,x19
7101d8c6c0  tst x8,#0xffffffffff
7101d8c6c4  b.eq 0x7101d8c71c
7101d8c6c8  mov x0,x19
7101d8c6cc  mov w1,wzr
7101d8c6d0  mov w2,wzr
7101d8c6d4  bl 0x7101797560
7101d8c6d8  ldr x26,[sp, #0x10]
7101d8c6dc  and w8,w0,w28
7101d8c6e0  tbnz w8,#0x0,0x7101d8b9e4
7101d8c6e4  b 0x7101d8c364
7101d8c6e8  cmp x10,x25
7101d8c6ec  cset w10,eq
7101d8c6f0  cmp x9,#0x0
7101d8c6f4  cset w9,ne
7101d8c6f8  cmp x8,#0x0
7101d8c6fc  cset w8,ne
7101d8c700  cmp x11,x25
7101d8c704  and w9,w10,w9
7101d8c708  cset w10,eq
7101d8c70c  and w8,w8,w10
7101d8c710  eor w8,w8,w9
7101d8c714  cmp w8,#0x1
7101d8c718  b.eq 0x7101d8c6c8
7101d8c71c  ldr x26,[sp, #0x10]
7101d8c720  cbnz w28,0x7101d8b9e4
7101d8c724  b 0x7101d8c364
