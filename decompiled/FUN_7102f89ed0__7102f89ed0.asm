// addr:      7102f89ed0
// offset:    0x2f89ed0
// name:      FUN_7102f89ed0
// mangled:   
// size:      3180

7102f89ed0  sub sp,sp,#0xf0
7102f89ed4  str d8,[sp, #0x80]
7102f89ed8  stp x28,x27,[sp, #0x90]
7102f89edc  stp x26,x25,[sp, #0xa0]
7102f89ee0  stp x24,x23,[sp, #0xb0]
7102f89ee4  stp x22,x21,[sp, #0xc0]
7102f89ee8  stp x20,x19,[sp, #0xd0]
7102f89eec  stp x29,x30,[sp, #0xe0]
7102f89ef0  add x29,sp,#0xe0
7102f89ef4  mov w8,#0xcae0
7102f89ef8  add x26,x0,x8
7102f89efc  mov w8,#0xcad0
7102f89f00  ldr x8,[x0, x8, LSL #0x0]
7102f89f04  mov v8.16B,v0.16B
7102f89f08  mov x19,x0
7102f89f0c  cbz x8,0x7102f8a088
7102f89f10  ldr w8,[x19, #0xf28]
7102f89f14  cmp w8,#0x4
7102f89f18  b.eq 0x7102f89f8c
7102f89f1c  mov w9,#0xcad0
7102f89f20  ldr x9,[x19, x9, LSL #0x0]
7102f89f24  cbz x9,0x7102f89f8c
7102f89f28  ldrb w10,[x9, #0xe0]
7102f89f2c  fmov s0,wzr
7102f89f30  cbz w10,0x7102f89f40
7102f89f34  ldr x9,[x9, #0xc8]
7102f89f38  cbz x9,0x7102f89f40
7102f89f3c  ldr s0,[x9, #0x3c]
7102f89f40  mov w9,#0xcdb0
7102f89f44  ldr s1,[x19,x9]
7102f89f48  fcmp s0,s1
7102f89f4c  b.pl 0x7102f8a0b8
7102f89f50  mov w9,#0xcd98
7102f89f54  ldr w9,[x19, x9, LSL #0x0]
7102f89f58  cmp w9,#0x7
7102f89f5c  b.hi 0x7102f8a5ac
7102f89f60  adrp x10,0x7104522000
7102f89f64  add x10,x10,#0x7bc
7102f89f68  mov x8,xzr
7102f89f6c  ldrsw x9,[x10, x9, LSL #0x2]
7102f89f70  add x9,x9,x10
7102f89f74  br x9
7102f89f78  ldr w8,[x19, #0xf50]
7102f89f7c  cmp w8,#0x1
7102f89f80  mov w8,#0x1
7102f89f84  cinc x8,x8,eq
7102f89f88  b 0x7102f8a5e8
7102f89f8c  mov w8,#0xcd94
7102f89f90  ldr w20,[x19, x8, LSL #0x0]
7102f89f94  ldr w8,[x26, #0x42c]
7102f89f98  cmp w8,w20
7102f89f9c  b.ne 0x7102f89fa8
7102f89fa0  add x21,x26,#0x3a8
7102f89fa4  b 0x7102f8a3bc
7102f89fa8  cmp w20,#0x1b
7102f89fac  b.cs 0x7102f8ab30
7102f89fb0  adrp x8,0x710515b000
7102f89fb4  add x8,x8,#0x108
7102f89fb8  ldr x1,[x8, w20, UXTW #0x3]
7102f89fbc  cbz x1,0x7102f89fd8
7102f89fc0  ldr x8,[x19, #0x318]
7102f89fc4  ldr x0,[x8, #0x10]
7102f89fc8  bl 0x71025f7350
7102f89fcc  ldr x8,[x19, #0x318]
7102f89fd0  ldr x8,[x8, #0x10]
7102f89fd4  str wzr,[x8, #0x48]
7102f89fd8  str w20,[x26, #0x42c]
7102f89fdc  mov w8,#0xce78
7102f89fe0  ldr x8,[x19, x8, LSL #0x0]
7102f89fe4  cbz x8,0x7102f89ffc
7102f89fe8  cmp w20,#0x0
7102f89fec  cset w9,eq
7102f89ff0  add x0,x8,#0x108
7102f89ff4  strb w9,[x8, #0x110]
7102f89ff8  bl 0x71025e9d50
7102f89ffc  ldr x8,[x26, #0x3a0]
7102f8a000  cbz x8,0x7102f8a120
7102f8a004  sub w9,w20,#0x1
7102f8a008  cmp w9,#0x8
7102f8a00c  b.cc 0x7102f8a0c0
7102f8a010  ldrb w9,[x8, #0x118]
7102f8a014  orr w9,w9,#0x1
7102f8a018  strb w9,[x8, #0x118]
7102f8a01c  ldr x0,[x26, #0x3a0]
7102f8a020  cbz x0,0x7102f8a03c
7102f8a024  add x8,x0,#0x108
7102f8a028  mov w9,#0x1
7102f8a02c  strb w9,[x0, #0x110]
7102f8a030  mov x0,x8
7102f8a034  bl 0x71025e9d50
7102f8a038  ldr x0,[x26, #0x3a0]
7102f8a03c  fmov s0,wzr
7102f8a040  mov w1,#0x1
7102f8a044  bl 0x710260fdd0
7102f8a048  ldr x8,[x26, #0x3a0]
7102f8a04c  cbz x8,0x7102f8a120
7102f8a050  ldrb w9,[x8, #0xe0]
7102f8a054  cbz w9,0x7102f8a064
7102f8a058  ldr x9,[x8, #0xc8]
7102f8a05c  cbz x9,0x7102f8a064
7102f8a060  strh wzr,[x9, #0x30]
7102f8a064  ldr x9,[x8, #0xd8]
7102f8a068  cbz x9,0x7102f8a070
7102f8a06c  strb wzr,[x9, #0x21]
7102f8a070  ldrb w9,[x8, #0xe0]
7102f8a074  cbz w9,0x7102f8a120
7102f8a078  ldr x8,[x8, #0xb0]
7102f8a07c  mov w9,#0x1
7102f8a080  strb w9,[x8, #0x10]
7102f8a084  b 0x7102f8a120
7102f8a088  mov w8,#0xcd90
7102f8a08c  ldrb w8,[x19, x8, LSL ]
7102f8a090  cbz w8,0x7102f89f10
7102f8a094  adrp x8,0x71052b9000
7102f8a098  ldr x28,[x8, #0x4f8]
7102f8a09c  mov w9,#0xce90
7102f8a0a0  mov w8,#0xcea8
7102f8a0a4  mov w27,#0x50000000
7102f8a0a8  add x21,x19,x9
7102f8a0ac  add x22,x19,x8
7102f8a0b0  stur x22,[x29, #-0x58]
7102f8a0b4  b 0x7102f8a638
7102f8a0b8  mov w20,wzr
7102f8a0bc  b 0x7102f89f94
7102f8a0c0  add x0,x8,#0x108
7102f8a0c4  strb wzr,[x8, #0x110]
7102f8a0c8  bl 0x71025e9d50
7102f8a0cc  ldr x8,[x26, #0x3a0]
7102f8a0d0  cbz x8,0x7102f8a120
7102f8a0d4  ldrb w9,[x8, #0xe0]
7102f8a0d8  cbz w9,0x7102f8a0ec
7102f8a0dc  ldr x9,[x8, #0xc8]
7102f8a0e0  cbz x9,0x7102f8a0ec
7102f8a0e4  mov w10,#0x101
7102f8a0e8  strh w10,[x9, #0x30]
7102f8a0ec  ldr x9,[x8, #0xd8]
7102f8a0f0  cbz x9,0x7102f8a0fc
7102f8a0f4  mov w10,#0x1
7102f8a0f8  strb w10,[x9, #0x21]
7102f8a0fc  ldrb w9,[x8, #0xe0]
7102f8a100  cbz w9,0x7102f8a10c
7102f8a104  ldr x8,[x8, #0xb0]
7102f8a108  strb wzr,[x8, #0x10]
7102f8a10c  ldr x8,[x26, #0x3a0]
7102f8a110  cbz x8,0x7102f8a120
7102f8a114  ldrb w9,[x8, #0x118]
7102f8a118  orr w9,w9,#0x1
7102f8a11c  strb w9,[x8, #0x118]
7102f8a120  ldr x8,[x26, #0x3a8]
7102f8a124  add x21,x26,#0x3a8
7102f8a128  cbz x8,0x7102f8a218
7102f8a12c  sub w9,w20,#0x1
7102f8a130  cmp w9,#0x7
7102f8a134  b.hi 0x7102f8a1b8
7102f8a138  ldrb w9,[x8, #0x118]
7102f8a13c  orr w9,w9,#0x1
7102f8a140  strb w9,[x8, #0x118]
7102f8a144  ldr x0,[x21]
7102f8a148  cbz x0,0x7102f8a164
7102f8a14c  add x8,x0,#0x108
7102f8a150  mov w9,#0x1
7102f8a154  strb w9,[x0, #0x110]
7102f8a158  mov x0,x8
7102f8a15c  bl 0x71025e9d50
7102f8a160  ldr x0,[x21]
7102f8a164  fmov s0,wzr
7102f8a168  mov w1,#0x1
7102f8a16c  bl 0x710260fdd0
7102f8a170  ldr x8,[x21]
7102f8a174  cbz x8,0x7102f8a1ac
7102f8a178  ldrb w9,[x8, #0xe0]
7102f8a17c  cbz w9,0x7102f8a18c
7102f8a180  ldr x9,[x8, #0xc8]
7102f8a184  cbz x9,0x7102f8a18c
7102f8a188  strh wzr,[x9, #0x30]
7102f8a18c  ldr x9,[x8, #0xd8]
7102f8a190  cbz x9,0x7102f8a198
7102f8a194  strb wzr,[x9, #0x21]
7102f8a198  ldrb w9,[x8, #0xe0]
7102f8a19c  cbz w9,0x7102f8a1ac
7102f8a1a0  ldr x8,[x8, #0xb0]
7102f8a1a4  mov w9,#0x1
7102f8a1a8  strb w9,[x8, #0x10]
7102f8a1ac  ldr x0,[x19, #0x318]
7102f8a1b0  add x22,x19,#0x318
7102f8a1b4  b 0x7102f8a22c
7102f8a1b8  add x0,x8,#0x108
7102f8a1bc  strb wzr,[x8, #0x110]
7102f8a1c0  bl 0x71025e9d50
7102f8a1c4  ldr x8,[x21]
7102f8a1c8  cbz x8,0x7102f8a218
7102f8a1cc  ldrb w9,[x8, #0xe0]
7102f8a1d0  cbz w9,0x7102f8a1e4
7102f8a1d4  ldr x9,[x8, #0xc8]
7102f8a1d8  cbz x9,0x7102f8a1e4
7102f8a1dc  mov w10,#0x101
7102f8a1e0  strh w10,[x9, #0x30]
7102f8a1e4  ldr x9,[x8, #0xd8]
7102f8a1e8  cbz x9,0x7102f8a1f4
7102f8a1ec  mov w10,#0x1
7102f8a1f0  strb w10,[x9, #0x21]
7102f8a1f4  ldrb w9,[x8, #0xe0]
7102f8a1f8  cbz w9,0x7102f8a204
7102f8a1fc  ldr x8,[x8, #0xb0]
7102f8a200  strb wzr,[x8, #0x10]
7102f8a204  ldr x8,[x21]
7102f8a208  cbz x8,0x7102f8a218
7102f8a20c  ldrb w9,[x8, #0x118]
7102f8a210  orr w9,w9,#0x1
7102f8a214  strb w9,[x8, #0x118]
7102f8a218  ldr x0,[x19, #0x318]
7102f8a21c  sub w8,w20,#0xa
7102f8a220  add x22,x19,#0x318
7102f8a224  cmp w8,#0x7
7102f8a228  b.cc 0x7102f8a2f4
7102f8a22c  adrp x1,0x7104441000
7102f8a230  add x1,x1,#0xe80
7102f8a234  bl 0x7102633800
7102f8a238  ldr x0,[x22]
7102f8a23c  adrp x20,0x7104317000
7102f8a240  add x20,x20,#0x4bd
7102f8a244  mov w2,#0x1
7102f8a248  mov x1,x20
7102f8a24c  bl 0x7102633a10
7102f8a250  ldr x0,[x22]
7102f8a254  adrp x1,0x710437a000
7102f8a258  add x1,x1,#0xfdd
7102f8a25c  mov w2,#0x1
7102f8a260  bl 0x7102633b90
7102f8a264  adrp x8,0x710532e000
7102f8a268  add x8,x8,#0xbd0
7102f8a26c  ldp x22,x23,[x8]
7102f8a270  cmp x22,x23
7102f8a274  b.ne 0x7102f8a288
7102f8a278  b 0x7102f8a3bc
7102f8a27c  add x22,x22,#0x8
7102f8a280  cmp x22,x23
7102f8a284  b.eq 0x7102f8a3bc
7102f8a288  ldr x8,[x22]
7102f8a28c  ands x8,x8,#0xffffffffff
7102f8a290  b.eq 0x7102f8a27c
7102f8a294  ldr x10,[x19, #0x310]
7102f8a298  ldp x9,x10,[x10, #0xd0]
7102f8a29c  cmp x9,x10
7102f8a2a0  b.eq 0x7102f8a27c
7102f8a2a4  ldr w11,[x9, #0x8]
7102f8a2a8  cmp w11,#0x1
7102f8a2ac  b.hi 0x7102f8a2c0
7102f8a2b0  ldr x11,[x9]
7102f8a2b4  ldr x12,[x11, #0x68]
7102f8a2b8  cmp x8,x12
7102f8a2bc  b.eq 0x7102f8a2d0
7102f8a2c0  add x9,x9,#0x10
7102f8a2c4  cmp x10,x9
7102f8a2c8  b.ne 0x7102f8a2a4
7102f8a2cc  b 0x7102f8a27c
7102f8a2d0  cbz x11,0x7102f8a27c
7102f8a2d4  ldrb w8,[x11, #0xe0]
7102f8a2d8  cbz w8,0x7102f8a27c
7102f8a2dc  ldr x0,[x11, #0xb8]
7102f8a2e0  add x1,sp,#0x40
7102f8a2e4  mov w2,#0x1
7102f8a2e8  str x20,[sp, #0x40]
7102f8a2ec  bl 0x71026527b0
7102f8a2f0  b 0x7102f8a27c
7102f8a2f4  adrp x1,0x71043de000
7102f8a2f8  add x1,x1,#0x527
7102f8a2fc  bl 0x7102633800
7102f8a300  ldr x0,[x22]
7102f8a304  adrp x20,0x7104306000
7102f8a308  add x20,x20,#0xab5
7102f8a30c  mov w2,#0x1
7102f8a310  mov x1,x20
7102f8a314  bl 0x7102633a10
7102f8a318  ldr x0,[x22]
7102f8a31c  adrp x1,0x710437a000
7102f8a320  add x1,x1,#0xb80
7102f8a324  mov w2,#0x1
7102f8a328  bl 0x7102633b90
7102f8a32c  adrp x8,0x710532e000
7102f8a330  add x8,x8,#0xbd0
7102f8a334  ldp x22,x23,[x8]
7102f8a338  cmp x22,x23
7102f8a33c  b.ne 0x7102f8a350
7102f8a340  b 0x7102f8a3bc
7102f8a344  add x22,x22,#0x8
7102f8a348  cmp x22,x23
7102f8a34c  b.eq 0x7102f8a3bc
7102f8a350  ldr x8,[x22]
7102f8a354  ands x8,x8,#0xffffffffff
7102f8a358  b.eq 0x7102f8a344
7102f8a35c  ldr x10,[x19, #0x310]
7102f8a360  ldp x9,x10,[x10, #0xd0]
7102f8a364  cmp x9,x10
7102f8a368  b.eq 0x7102f8a344
7102f8a36c  ldr w11,[x9, #0x8]
7102f8a370  cmp w11,#0x1
7102f8a374  b.hi 0x7102f8a388
7102f8a378  ldr x11,[x9]
7102f8a37c  ldr x12,[x11, #0x68]
7102f8a380  cmp x8,x12
7102f8a384  b.eq 0x7102f8a398
7102f8a388  add x9,x9,#0x10
7102f8a38c  cmp x10,x9
7102f8a390  b.ne 0x7102f8a36c
7102f8a394  b 0x7102f8a344
7102f8a398  cbz x11,0x7102f8a344
7102f8a39c  ldrb w8,[x11, #0xe0]
7102f8a3a0  cbz w8,0x7102f8a344
7102f8a3a4  ldr x0,[x11, #0xb8]
7102f8a3a8  add x1,sp,#0x40
7102f8a3ac  mov w2,#0x1
7102f8a3b0  str x20,[sp, #0x40]
7102f8a3b4  bl 0x71026527b0
7102f8a3b8  b 0x7102f8a344
7102f8a3bc  ldr x20,[x21]
7102f8a3c0  cbz x20,0x7102f8a494
7102f8a3c4  ldrb w8,[x20, #0x110]
7102f8a3c8  cbz w8,0x7102f8a494
7102f8a3cc  adrp x8,0x71052b8000
7102f8a3d0  ldr x8,[x8, #0xf00]
7102f8a3d4  ldr x8,[x8]
7102f8a3d8  ldr q0,[x8, #0xeb0]
7102f8a3dc  movi d1,#0x0
7102f8a3e0  adrp x8,0x7104468000
7102f8a3e4  mov v0.D[0x1],v1.D[0x0]
7102f8a3e8  fmov s1,0x3f800000
7102f8a3ec  mov v0.S[0x3],v1.S[0x0]
7102f8a3f0  ldr q1,[x8, #0xca0]
7102f8a3f4  adrp x8,0x710446a000
7102f8a3f8  mov x1,sp
7102f8a3fc  str q1,[sp]
7102f8a400  ldr q1,[x8, #0x360]
7102f8a404  adrp x8,0x7104465000
7102f8a408  str q1,[sp, #0x10]
7102f8a40c  ldr q1,[x8, #0x6b0]
7102f8a410  stp q1,q0,[sp, #0x20]
7102f8a414  ldr x0,[x20, #0x90]
7102f8a418  ldr x8,[x0]
7102f8a41c  ldr x8,[x8, #0x148]
7102f8a420  blr x8
7102f8a424  ldr x20,[x20, #0xd8]
7102f8a428  cbz x20,0x7102f8a494
7102f8a42c  ldr x8,[sp, #0x18]
7102f8a430  str x8,[sp, #0x58]
7102f8a434  ldr x8,[sp, #0x10]
7102f8a438  str x8,[sp, #0x50]
7102f8a43c  ldr x8,[sp, #0x8]
7102f8a440  str x8,[sp, #0x48]
7102f8a444  ldr x8,[sp]
7102f8a448  str x8,[sp, #0x40]
7102f8a44c  ldr x8,[sp, #0x38]
7102f8a450  str x8,[sp, #0x78]
7102f8a454  ldr x8,[sp, #0x30]
7102f8a458  str x8,[sp, #0x70]
7102f8a45c  ldr x8,[sp, #0x28]
7102f8a460  str x8,[sp, #0x68]
7102f8a464  ldr x8,[sp, #0x20]
7102f8a468  str x8,[sp, #0x60]
7102f8a46c  ldr x8,[x20, #0x8]
7102f8a470  ldrb w9,[x8, #0xa8]
7102f8a474  cbz w9,0x7102f8a48c
7102f8a478  ldr x0,[x8, #0x48]
7102f8a47c  ldr x8,[x0]
7102f8a480  ldr x8,[x8, #0x20]
7102f8a484  add x1,sp,#0x40
7102f8a488  blr x8
7102f8a48c  mov w8,#0x1
7102f8a490  strb w8,[x20, #0x20]
7102f8a494  mov w8,#0xcf08
7102f8a498  ldrb w8,[x19, x8, LSL ]
7102f8a49c  cbnz w8,0x7102f8a57c
7102f8a4a0  mov w8,#0xcc08
7102f8a4a4  mov w9,#0xcb0c
7102f8a4a8  add x20,x26,#0x8
7102f8a4ac  add x22,x19,x8
7102f8a4b0  add x23,x19,x9
7102f8a4b4  mov w21,#0xffffffff
7102f8a4b8  orr w24,wzr,#0xc
7102f8a4bc  adrp x25,0x710455b000
7102f8a4c0  add x25,x25,#0xfa0
7102f8a4c4  mov x27,x23
7102f8a4c8  ldr w8,[x27, #-0x4]!
7102f8a4cc  cmn w8,#0x1
7102f8a4d0  b.eq 0x7102f8a568
7102f8a4d4  cmp w8,#0x42
7102f8a4d8  b.cs 0x7102f8ab30
7102f8a4dc  mul x9,x8,x24
7102f8a4e0  ldr w1,[x25, x9, LSL #0x0]
7102f8a4e4  cmn w1,#0x1
7102f8a4e8  b.eq 0x7102f8a568
7102f8a4ec  madd x9,x8,x24,x25
7102f8a4f0  ldr w10,[x9, #0x4]
7102f8a4f4  ldp x9,x11,[x26, #0x8]
7102f8a4f8  sub x11,x11,x9
7102f8a4fc  asr x11,x11,#0x5
7102f8a500  cmp x11,x10
7102f8a504  b.ls 0x7102f8a548
7102f8a508  ldr w12,[x23]
7102f8a50c  cmp w12,#0x1
7102f8a510  b.ne 0x7102f8a524
7102f8a514  madd x8,x8,x24,x25
7102f8a518  ldr w10,[x8, #0x8]
7102f8a51c  cmp x11,x10
7102f8a520  b.ls 0x7102f8ab34
7102f8a524  ldr x8,[x26]
7102f8a528  ldr x8,[x8]
7102f8a52c  ldr x0,[x8, #0x8]
7102f8a530  cbz x0,0x7102f8a568
7102f8a534  add x8,x9,x10, LSL #0x5
7102f8a538  ldr w2,[x8, #0x8]
7102f8a53c  ldr x8,[x0]
7102f8a540  ldr x8,[x8, #0x58]
7102f8a544  b 0x7102f8a564
7102f8a548  ldr x8,[x26]
7102f8a54c  ldr x8,[x8]
7102f8a550  ldr x0,[x8, #0x8]
7102f8a554  cbz x0,0x7102f8a568
7102f8a558  ldr x8,[x0]
7102f8a55c  ldr x8,[x8, #0x58]
7102f8a560  mov w2,w21
7102f8a564  blr x8
7102f8a568  add x8,x27,#0x8
7102f8a56c  stur x21,[x23, #-0x4]
7102f8a570  add x23,x23,#0x8
7102f8a574  cmp x8,x22
7102f8a578  b.ne 0x7102f8a4c4
7102f8a57c  mov v0.16B,v8.16B
7102f8a580  mov x0,x19
7102f8a584  bl 0x71025de7b0
7102f8a588  ldr d8,[sp, #0x80]
7102f8a58c  ldp x29,x30,[sp, #0xe0]
7102f8a590  ldp x20,x19,[sp, #0xd0]
7102f8a594  ldp x22,x21,[sp, #0xc0]
7102f8a598  ldp x24,x23,[sp, #0xb0]
7102f8a59c  ldp x26,x25,[sp, #0xa0]
7102f8a5a0  ldp x28,x27,[sp, #0x90]
7102f8a5a4  add sp,sp,#0xf0
7102f8a5a8  ret
7102f8a5ac  cmp w8,#0x5
7102f8a5b0  mov w8,#0x8
7102f8a5b4  cinc w20,w8,ne
7102f8a5b8  b 0x7102f89f94
7102f8a5bc  orr w8,wzr,#0x3
7102f8a5c0  b 0x7102f8a5e8
7102f8a5c4  mov w8,#0x4
7102f8a5c8  b 0x7102f8a5e8
7102f8a5cc  orr w8,wzr,#0x6
7102f8a5d0  b 0x7102f8a5e8
7102f8a5d4  mov w8,#0x5
7102f8a5d8  b 0x7102f8a5e8
7102f8a5dc  orr w8,wzr,#0x7
7102f8a5e0  b 0x7102f8a5e8
7102f8a5e4  mov w8,#0x8
7102f8a5e8  adrp x9,0x710455b000
7102f8a5ec  add x9,x9,#0xe88
7102f8a5f0  ldr w20,[x9, x8, LSL #0x2]
7102f8a5f4  b 0x7102f89f94
7102f8a5f8  adrp x0,0x7105314000
7102f8a5fc  add x0,x0,#0x4d8
7102f8a600  bl 0x71039c06b0
7102f8a604  cbz w0,0x7102f8a658
7102f8a608  bl 0x7101764000
7102f8a60c  adrp x0,0x7101763000
7102f8a610  add x0,x0,#0xc40
7102f8a614  adrp x1,0x71052c5000
7102f8a618  add x1,x1,#0x180
7102f8a61c  adrp x2,0x7104f17000
7102f8a620  add x2,x2,#0x0
7102f8a624  bl 0x71000001c0
7102f8a628  adrp x0,0x7105314000
7102f8a62c  add x0,x0,#0x4d8
7102f8a630  bl 0x71039c06c0
7102f8a634  b 0x7102f8a658
7102f8a638  ldr x20,[x21]
7102f8a63c  cbz x20,0x7102f8aaf0
7102f8a640  ldr x8,[x20, #0x38]
7102f8a644  cbz x8,0x7102f8aaf0
7102f8a648  adrp x8,0x7105314000
7102f8a64c  add x8,x8,#0x4d8
7102f8a650  ldarb w8,[x8]
7102f8a654  tbz w8,#0x0,0x7102f8a5f8
7102f8a658  adrp x8,0x71052c5000
7102f8a65c  ldrb w8,[x8, #0x18a]
7102f8a660  adrp x24,0x710532f000
7102f8a664  add x24,x24,#0x420
7102f8a668  cbnz w8,0x7102f8a688
7102f8a66c  ldr x8,[x20, #0x38]
7102f8a670  ldr x0,[x8, #0x130]
7102f8a674  ldr x8,[x0]
7102f8a678  ldr x8,[x8, #0x138]
7102f8a67c  blr x8
7102f8a680  mov x24,x0
7102f8a684  cbz x0,0x7102f8aaf0
7102f8a688  ldr x8,[x24, #0x10]
7102f8a68c  cbz x8,0x7102f8aaf0
7102f8a690  ldr x8,[x28]
7102f8a694  ldr w9,[x8, #0xa0]
7102f8a698  cmp w9,#0x1
7102f8a69c  b.lt 0x7102f8aaf0
7102f8a6a0  mov w20,wzr
7102f8a6a4  ldr x10,[x8, #0x20]
7102f8a6a8  mov w9,w20
7102f8a6ac  cbz x10,0x7102f8a6b8
7102f8a6b0  cbz w20,0x7102f8a72c
7102f8a6b4  sub w9,w20,#0x1
7102f8a6b8  ldr x10,[x8, #0x28]
7102f8a6bc  cbz x10,0x7102f8a6c8
7102f8a6c0  cbz w9,0x7102f8a734
7102f8a6c4  sub w9,w9,#0x1
7102f8a6c8  ldr x10,[x8, #0x30]
7102f8a6cc  cbz x10,0x7102f8a6d8
7102f8a6d0  cbz w9,0x7102f8a73c
7102f8a6d4  sub w9,w9,#0x1
7102f8a6d8  ldr x10,[x8, #0x38]
7102f8a6dc  cbz x10,0x7102f8a6e8
7102f8a6e0  cbz w9,0x7102f8a744
7102f8a6e4  sub w9,w9,#0x1
7102f8a6e8  ldr x10,[x8, #0x40]
7102f8a6ec  cbz x10,0x7102f8a6f8
7102f8a6f0  cbz w9,0x7102f8a74c
7102f8a6f4  sub w9,w9,#0x1
7102f8a6f8  ldr x10,[x8, #0x48]
7102f8a6fc  cbz x10,0x7102f8a708
7102f8a700  cbz w9,0x7102f8a754
7102f8a704  sub w9,w9,#0x1
7102f8a708  ldr x10,[x8, #0x50]
7102f8a70c  cbz x10,0x7102f8a718
7102f8a710  cbz w9,0x7102f8a75c
7102f8a714  sub w9,w9,#0x1
7102f8a718  cbnz w9,0x7102f8aadc
7102f8a71c  ldr x9,[x8, #0x58]
7102f8a720  cbz x9,0x7102f8aadc
7102f8a724  orr w9,wzr,#0x7
7102f8a728  b 0x7102f8a760
7102f8a72c  mov x9,xzr
7102f8a730  b 0x7102f8a760
7102f8a734  mov w9,#0x1
7102f8a738  b 0x7102f8a760
7102f8a73c  mov w9,#0x2
7102f8a740  b 0x7102f8a760
7102f8a744  orr w9,wzr,#0x3
7102f8a748  b 0x7102f8a760
7102f8a74c  mov w9,#0x4
7102f8a750  b 0x7102f8a760
7102f8a754  mov w9,#0x5
7102f8a758  b 0x7102f8a760
7102f8a75c  orr w9,wzr,#0x6
7102f8a760  add x8,x8,x9, LSL #0x3
7102f8a764  ldr x23,[x8, #0x20]
7102f8a768  cbz x23,0x7102f8aadc
7102f8a76c  mov w8,#0x5920
7102f8a770  ldrb w8,[x23, x8, LSL ]
7102f8a774  cmp w8,#0x6
7102f8a778  b.ne 0x7102f8aadc
7102f8a77c  mov w8,#0x5918
7102f8a780  ldrb w8,[x23, x8, LSL ]
7102f8a784  ldr x9,[x23, #0x4150]
7102f8a788  cmp x9,x8
7102f8a78c  b.ls 0x7102f8a7c0
7102f8a790  add x25,x23,x8, LSL #0x3
7102f8a794  ldr x0,[x25, #0x4160]
7102f8a798  cbz x0,0x7102f8a7c0
7102f8a79c  ldr x8,[x0]
7102f8a7a0  ldr x8,[x8, #0x518]
7102f8a7a4  blr x8
7102f8a7a8  tbz w0,#0x0,0x7102f8a7c0
7102f8a7ac  mov w8,#0x4160
7102f8a7b0  add x8,x25,x8
7102f8a7b4  ldr x1,[x8]
7102f8a7b8  add x0,sp,#0x40
7102f8a7bc  b 0x7102f8a7c8
7102f8a7c0  add x0,sp,#0x40
7102f8a7c4  mov x1,xzr
7102f8a7c8  bl 0x71003a9ab0
7102f8a7cc  ldr x0,[sp, #0x48]
7102f8a7d0  cbz x0,0x7102f8aadc
7102f8a7d4  ldr x8,[x0]
7102f8a7d8  ldr x8,[x8]
7102f8a7dc  blr x8
7102f8a7e0  tbnz w0,#0x0,0x7102f8aadc
7102f8a7e4  ldr x8,[x23, #0x4150]
7102f8a7e8  cbz x8,0x7102f8a810
7102f8a7ec  ldr x0,[x23, #0x4160]
7102f8a7f0  cbz x0,0x7102f8a810
7102f8a7f4  ldr x8,[x0]
7102f8a7f8  ldr x8,[x8, #0x518]
7102f8a7fc  blr x8
7102f8a800  tbz w0,#0x0,0x7102f8a810
7102f8a804  ldr x1,[x23, #0x4160]
7102f8a808  add x0,sp,#0x40
7102f8a80c  b 0x7102f8a818
7102f8a810  add x0,sp,#0x40
7102f8a814  mov x1,xzr
7102f8a818  bl 0x71003a9ab0
7102f8a81c  ldr x25,[sp, #0x48]
7102f8a820  cbz x25,0x7102f8a8dc
7102f8a824  ldr x8,[x25]
7102f8a828  ldr x8,[x8]
7102f8a82c  mov x0,x25
7102f8a830  blr x8
7102f8a834  tbnz w0,#0x0,0x7102f8a8dc
7102f8a838  ldr x22,[x25, #0x20]
7102f8a83c  ldr x0,[x22, #0xb0]
7102f8a840  ldr x8,[x0]
7102f8a844  ldr x8,[x8, #0x150]
7102f8a848  mov w1,wzr
7102f8a84c  blr x8
7102f8a850  mov w25,w0
7102f8a854  ldr x0,[x22, #0xb0]
7102f8a858  ldur x22,[x29, #-0x58]
7102f8a85c  ldr x8,[x0]
7102f8a860  ldr x8,[x8, #0x158]
7102f8a864  mov w1,wzr
7102f8a868  blr x8
7102f8a86c  orr w8,w25,#0x2
7102f8a870  cmp w8,#0x3
7102f8a874  b.eq 0x7102f8a8dc
7102f8a878  cbnz w0,0x7102f8a8dc
7102f8a87c  ldr x25,[x24, #0x8]
7102f8a880  cmp x24,x25
7102f8a884  b.ne 0x7102f8a898
7102f8a888  b 0x7102f8a8dc
7102f8a88c  ldr x25,[x25, #0x8]
7102f8a890  cmp x24,x25
7102f8a894  b.eq 0x7102f8a8dc
7102f8a898  ldr x9,[x23, #0x4150]
7102f8a89c  mov w8,w27
7102f8a8a0  cbz x9,0x7102f8a8cc
7102f8a8a4  ldr x0,[x23, #0x4160]
7102f8a8a8  mov w8,w27
7102f8a8ac  cbz x0,0x7102f8a8cc
7102f8a8b0  ldr x8,[x0]
7102f8a8b4  ldr x8,[x8, #0x518]
7102f8a8b8  blr x8
7102f8a8bc  mov w8,w27
7102f8a8c0  tbz w0,#0x0,0x7102f8a8cc
7102f8a8c4  ldr x8,[x23, #0x4160]
7102f8a8c8  ldr w8,[x8, #0x8]
7102f8a8cc  ldr w9,[x25, #0x14]
7102f8a8d0  cmp w8,w9
7102f8a8d4  b.ne 0x7102f8a88c
7102f8a8d8  b 0x7102f8ab00
7102f8a8dc  ldr x8,[x23, #0x4150]
7102f8a8e0  cmp x8,#0x2
7102f8a8e4  b.cc 0x7102f8a90c
7102f8a8e8  ldr x0,[x23, #0x4168]
7102f8a8ec  cbz x0,0x7102f8a90c
7102f8a8f0  ldr x8,[x0]
7102f8a8f4  ldr x8,[x8, #0x518]
7102f8a8f8  blr x8
7102f8a8fc  tbz w0,#0x0,0x7102f8a90c
7102f8a900  ldr x1,[x23, #0x4168]
7102f8a904  add x0,sp,#0x40
7102f8a908  b 0x7102f8a914
7102f8a90c  add x0,sp,#0x40
7102f8a910  mov x1,xzr
7102f8a914  bl 0x71003a9ab0
7102f8a918  ldr x25,[sp, #0x48]
7102f8a91c  cbz x25,0x7102f8a9dc
7102f8a920  ldr x8,[x25]
7102f8a924  ldr x8,[x8]
7102f8a928  mov x0,x25
7102f8a92c  blr x8
7102f8a930  tbnz w0,#0x0,0x7102f8a9dc
7102f8a934  ldr x22,[x25, #0x20]
7102f8a938  ldr x0,[x22, #0xb0]
7102f8a93c  ldr x8,[x0]
7102f8a940  ldr x8,[x8, #0x150]
7102f8a944  mov w1,wzr
7102f8a948  blr x8
7102f8a94c  mov w25,w0
7102f8a950  ldr x0,[x22, #0xb0]
7102f8a954  ldur x22,[x29, #-0x58]
7102f8a958  ldr x8,[x0]
7102f8a95c  ldr x8,[x8, #0x158]
7102f8a960  mov w1,wzr
7102f8a964  blr x8
7102f8a968  orr w8,w25,#0x2
7102f8a96c  cmp w8,#0x3
7102f8a970  ccmp w0,#0x0,#0x0,ne
7102f8a974  b.ne 0x7102f8a9dc
7102f8a978  ldr x25,[x24, #0x8]
7102f8a97c  cmp x24,x25
7102f8a980  b.ne 0x7102f8a994
7102f8a984  b 0x7102f8a9dc
7102f8a988  ldr x25,[x25, #0x8]
7102f8a98c  cmp x24,x25
7102f8a990  b.eq 0x7102f8a9dc
7102f8a994  ldr x8,[x23, #0x4150]
7102f8a998  cmp x8,#0x2
7102f8a99c  mov w8,w27
7102f8a9a0  b.cc 0x7102f8a9cc
7102f8a9a4  ldr x0,[x23, #0x4168]
7102f8a9a8  mov w8,w27
7102f8a9ac  cbz x0,0x7102f8a9cc
7102f8a9b0  ldr x8,[x0]
7102f8a9b4  ldr x8,[x8, #0x518]
7102f8a9b8  blr x8
7102f8a9bc  mov w8,w27
7102f8a9c0  tbz w0,#0x0,0x7102f8a9cc
7102f8a9c4  ldr x8,[x23, #0x4168]
7102f8a9c8  ldr w8,[x8, #0x8]
7102f8a9cc  ldr w9,[x25, #0x14]
7102f8a9d0  cmp w8,w9
7102f8a9d4  b.ne 0x7102f8a988
7102f8a9d8  b 0x7102f8ab00
7102f8a9dc  ldr x8,[x23, #0x4150]
7102f8a9e0  cmp x8,#0x3
7102f8a9e4  b.cc 0x7102f8aa0c
7102f8a9e8  ldr x0,[x23, #0x4170]
7102f8a9ec  cbz x0,0x7102f8aa0c
7102f8a9f0  ldr x8,[x0]
7102f8a9f4  ldr x8,[x8, #0x518]
7102f8a9f8  blr x8
7102f8a9fc  tbz w0,#0x0,0x7102f8aa0c
7102f8aa00  ldr x1,[x23, #0x4170]
7102f8aa04  add x0,sp,#0x40
7102f8aa08  b 0x7102f8aa14
7102f8aa0c  add x0,sp,#0x40
7102f8aa10  mov x1,xzr
7102f8aa14  bl 0x71003a9ab0
7102f8aa18  ldr x25,[sp, #0x48]
7102f8aa1c  cbz x25,0x7102f8aadc
7102f8aa20  ldr x8,[x25]
7102f8aa24  ldr x8,[x8]
7102f8aa28  mov x0,x25
7102f8aa2c  blr x8
7102f8aa30  tbnz w0,#0x0,0x7102f8aadc
7102f8aa34  ldr x22,[x25, #0x20]
7102f8aa38  ldr x0,[x22, #0xb0]
7102f8aa3c  ldr x8,[x0]
7102f8aa40  ldr x8,[x8, #0x150]
7102f8aa44  mov w1,wzr
7102f8aa48  blr x8
7102f8aa4c  mov w25,w0
7102f8aa50  ldr x0,[x22, #0xb0]
7102f8aa54  ldur x22,[x29, #-0x58]
7102f8aa58  ldr x8,[x0]
7102f8aa5c  ldr x8,[x8, #0x158]
7102f8aa60  mov w1,wzr
7102f8aa64  blr x8
7102f8aa68  orr w8,w25,#0x2
7102f8aa6c  cmp w8,#0x3
7102f8aa70  ccmp w0,#0x0,#0x0,ne
7102f8aa74  b.ne 0x7102f8aadc
7102f8aa78  ldr x25,[x24, #0x8]
7102f8aa7c  cmp x24,x25
7102f8aa80  b.ne 0x7102f8aa94
7102f8aa84  b 0x7102f8aadc
7102f8aa88  ldr x25,[x25, #0x8]
7102f8aa8c  cmp x24,x25
7102f8aa90  b.eq 0x7102f8aadc
7102f8aa94  ldr x8,[x23, #0x4150]
7102f8aa98  cmp x8,#0x3
7102f8aa9c  mov w8,w27
7102f8aaa0  b.cc 0x7102f8aacc
7102f8aaa4  ldr x0,[x23, #0x4170]
7102f8aaa8  mov w8,w27
7102f8aaac  cbz x0,0x7102f8aacc
7102f8aab0  ldr x8,[x0]
7102f8aab4  ldr x8,[x8, #0x518]
7102f8aab8  blr x8
7102f8aabc  mov w8,w27
7102f8aac0  tbz w0,#0x0,0x7102f8aacc
7102f8aac4  ldr x8,[x23, #0x4170]
7102f8aac8  ldr w8,[x8, #0x8]
7102f8aacc  ldr w9,[x25, #0x14]
7102f8aad0  cmp w8,w9
7102f8aad4  b.ne 0x7102f8aa88
7102f8aad8  b 0x7102f8ab00
7102f8aadc  ldr x8,[x28]
7102f8aae0  ldr w9,[x8, #0xa0]
7102f8aae4  add w20,w20,#0x1
7102f8aae8  cmp w20,w9
7102f8aaec  b.lt 0x7102f8a6a4
7102f8aaf0  add x21,x21,#0x8
7102f8aaf4  cmp x21,x22
7102f8aaf8  b.ne 0x7102f8a638
7102f8aafc  b 0x7102f89f10
7102f8ab00  add x0,x19,#0xf10
7102f8ab04  bl 0x7102f91de0
7102f8ab08  mov w8,#0xcf08
7102f8ab0c  mov w9,#0x1
7102f8ab10  strb w9,[x19, x8, LSL ]
7102f8ab14  mov w8,#0xcf10
7102f8ab18  ldr s0,[x19,x8]
7102f8ab1c  mov w8,#0xcf14
7102f8ab20  ldr s1,[x19,x8]
7102f8ab24  ldr x0,[x19, #0x308]
7102f8ab28  bl 0x7102624c20
7102f8ab2c  b 0x7102f89f10
7102f8ab30  bl 0x71039c2650
7102f8ab34  mov x0,x20
7102f8ab38  bl 0x71039c1330
