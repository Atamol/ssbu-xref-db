// addr:      7101a9a070
// offset:    0x1a9a070
// name:      FUN_7101a9a070
// mangled:   
// size:      1920

7101a9a070  sub sp,sp,#0x150
7101a9a074  str d8,[sp, #0x110]
7101a9a078  stp x28,x21,[sp, #0x120]
7101a9a07c  stp x20,x19,[sp, #0x130]
7101a9a080  stp x29,x30,[sp, #0x140]
7101a9a084  add x29,sp,#0x140
7101a9a088  ldr w8,[x0, #0xfc]
7101a9a08c  mov x19,x0
7101a9a090  cbz w8,0x7101a9a09c
7101a9a094  add x20,x19,#0x110
7101a9a098  b 0x7101a9a0b8
7101a9a09c  ldr x8,[x19, #0x110]
7101a9a0a0  strb wzr,[x19, #0x170]
7101a9a0a4  ldr x8,[x8]
7101a9a0a8  ldr x0,[x8]
7101a9a0ac  mov w1,#0x1
7101a9a0b0  add x20,x19,#0x110
7101a9a0b4  bl 0x71037760f0
7101a9a0b8  ldr x8,[x19, #0x110]
7101a9a0bc  ldr x8,[x8]
7101a9a0c0  ldr x21,[x8]
7101a9a0c4  ldr x8,[x19, #0x130]
7101a9a0c8  ldr x8,[x8, #0x8]
7101a9a0cc  ldrb w9,[x8, #0x113]
7101a9a0d0  cbz w9,0x7101a9a114
7101a9a0d4  ldrb w9,[x19, #0x169]
7101a9a0d8  cbz w9,0x7101a9a0f4
7101a9a0dc  ldr x0,[x8, #0xe8]
7101a9a0e0  cbz x0,0x7101a9a0f4
7101a9a0e4  ldr x8,[x0]
7101a9a0e8  ldr x8,[x8, #0xd8]
7101a9a0ec  blr x8
7101a9a0f0  tbz w0,#0x0,0x7101a9a294
7101a9a0f4  mov w8,#0x1
7101a9a0f8  str w8,[x19, #0x16c]
7101a9a0fc  ldr w8,[x19, #0xf4]
7101a9a100  cmp w8,#0x13
7101a9a104  b.cs 0x7101a9a7ec
7101a9a108  mov w9,#0x5
7101a9a10c  add x8,x19,w8, SXTW  #0x2
7101a9a110  str w9,[x8, #0xa8]
7101a9a114  ldrb w8,[x19, #0x178]
7101a9a118  cbz w8,0x7101a9a7d4
7101a9a11c  ldr x8,[x21, #0x600]
7101a9a120  ldrb w9,[x8, #0x4aa]
7101a9a124  cbz w9,0x7101a9a7d4
7101a9a128  ldrb w10,[x8, #0x1ac]
7101a9a12c  tbnz w10,#0x1,0x7101a9a244
7101a9a130  ldrb w10,[x8, #0x1a8]
7101a9a134  tbnz w10,#0x1,0x7101a9a2e4
7101a9a138  ldrb w10,[x8, #0x1b0]
7101a9a13c  tbnz w10,#0x1,0x7101a9a5b0
7101a9a140  ldrb w10,[x8, #0x1b8]
7101a9a144  tbnz w10,#0x1,0x7101a9a574
7101a9a148  cmp w9,#0x0
7101a9a14c  cset w9,eq
7101a9a150  ldrb w10,[x8, #0x1b4]
7101a9a154  tbnz w10,#0x1,0x7101a9a188
7101a9a158  tbnz w9,#0x0,0x7101a9a7d4
7101a9a15c  ldrb w8,[x8, #0x1bc]
7101a9a160  tbz w8,#0x1,0x7101a9a7d4
7101a9a164  adrp x8,0x710532f000
7101a9a168  ldr x8,[x8, #0x7d0]
7101a9a16c  ldr x8,[x8, #0x8]
7101a9a170  ldr x0,[x8, #0x18]
7101a9a174  cbz x0,0x7101a9a188
7101a9a178  ldr x8,[x0]
7101a9a17c  ldr x8,[x8, #0x48]
7101a9a180  blr x8
7101a9a184  tbnz w0,#0x0,0x7101a9a7d4
7101a9a188  add x20,x19,#0x158
7101a9a18c  adrp x1,0x71043ad000
7101a9a190  add x1,x1,#0x264
7101a9a194  add x8,sp,#0x80
7101a9a198  mov x0,x20
7101a9a19c  strb wzr,[x19, #0x16a]
7101a9a1a0  bl 0x71037780e0
7101a9a1a4  add x0,sp,#0x80
7101a9a1a8  bl 0x710377b140
7101a9a1ac  ldr x0,[sp, #0x88]
7101a9a1b0  adrp x21,0x710523d000
7101a9a1b4  add x21,x21,#0x9e8
7101a9a1b8  stp x21,xzr,[sp, #0x80]
7101a9a1bc  cbz x0,0x7101a9a1c4
7101a9a1c0  bl 0x710392eb40
7101a9a1c4  adrp x1,0x710436b000
7101a9a1c8  add x1,x1,#0xda9
7101a9a1cc  add x8,sp,#0x80
7101a9a1d0  mov x0,x20
7101a9a1d4  bl 0x71037780e0
7101a9a1d8  add x0,sp,#0x80
7101a9a1dc  bl 0x710377b140
7101a9a1e0  ldr x0,[sp, #0x88]
7101a9a1e4  stp x21,xzr,[sp, #0x80]
7101a9a1e8  cbz x0,0x7101a9a1f0
7101a9a1ec  bl 0x710392eb40
7101a9a1f0  ldrb w8,[x19, #0x128]
7101a9a1f4  cbz w8,0x7101a9a1fc
7101a9a1f8  strb wzr,[x19, #0x169]
7101a9a1fc  ldrsw x8,[x19, #0xf4]
7101a9a200  cmp w8,#0x13
7101a9a204  b.cs 0x7101a9a7ec
7101a9a208  add x8,x19,x8, LSL #0x2
7101a9a20c  orr w9,wzr,#0x3
7101a9a210  str w9,[x8, #0xa8]
7101a9a214  adrp x8,0x710532f000
7101a9a218  ldr x8,[x8, #0x8d0]
7101a9a21c  ldr x0,[x8, #0x8]
7101a9a220  ldp x8,x9,[x0, #0x40]
7101a9a224  sub x9,x9,x8
7101a9a228  asr x9,x9,#0x3
7101a9a22c  cmp x9,#0x9
7101a9a230  b.cc 0x7101a9a724
7101a9a234  ldr x19,[x8, #0x40]
7101a9a238  ldrb w8,[x0, #0x191]
7101a9a23c  cbnz w8,0x7101a9a7a0
7101a9a240  b 0x7101a9a730
7101a9a244  mov w8,#0x1
7101a9a248  str w8,[x19, #0x16c]
7101a9a24c  ldrsw x8,[x19, #0xf4]
7101a9a250  cmp w8,#0x13
7101a9a254  b.cs 0x7101a9a7ec
7101a9a258  add x8,x19,x8, LSL #0x2
7101a9a25c  mov w9,#0x5
7101a9a260  str w9,[x8, #0xa8]
7101a9a264  adrp x8,0x710532f000
7101a9a268  ldr x8,[x8, #0x8d0]
7101a9a26c  ldr x0,[x8, #0x8]
7101a9a270  ldp x8,x9,[x0, #0x40]
7101a9a274  sub x9,x9,x8
7101a9a278  asr x9,x9,#0x3
7101a9a27c  cmp x9,#0x4
7101a9a280  b.cc 0x7101a9a34c
7101a9a284  ldr x19,[x8, #0x18]
7101a9a288  ldrb w8,[x0, #0x191]
7101a9a28c  cbnz w8,0x7101a9a3c8
7101a9a290  b 0x7101a9a358
7101a9a294  ldrb w8,[x19, #0x128]
7101a9a298  cbz w8,0x7101a9a400
7101a9a29c  ldr x9,[x19, #0x120]
7101a9a2a0  ldr w9,[x9]
7101a9a2a4  ldr w8,[x19, #0x3c8]
7101a9a2a8  add w10,w9,#0x1
7101a9a2ac  cmp w10,w8
7101a9a2b0  csinc w8,wzr,w9,ge
7101a9a2b4  ldr w9,[x19, #0x174]
7101a9a2b8  cmp w8,w9
7101a9a2bc  b.ne 0x7101a9a400
7101a9a2c0  mov w8,#0x1
7101a9a2c4  str w8,[x19, #0x16c]
7101a9a2c8  ldrsw x8,[x19, #0xf4]
7101a9a2cc  cmp w8,#0x13
7101a9a2d0  b.cs 0x7101a9a7ec
7101a9a2d4  add x8,x19,x8, LSL #0x2
7101a9a2d8  mov w9,#0x5
7101a9a2dc  str w9,[x8, #0xa8]
7101a9a2e0  b 0x7101a9a7d4
7101a9a2e4  ldrb w8,[x19, #0x168]
7101a9a2e8  ldr x0,[x19, #0x160]
7101a9a2ec  cbz w8,0x7101a9a41c
7101a9a2f0  fmov s0,0x3f800000
7101a9a2f4  adrp x1,0x710436b000
7101a9a2f8  add x1,x1,#0xda9
7101a9a2fc  bl 0x7103778300
7101a9a300  ldr x8,[x19, #0x130]
7101a9a304  strb wzr,[x19, #0x168]
7101a9a308  ldr x19,[x8, #0x8]
7101a9a30c  ldr x0,[x19, #0xe8]
7101a9a310  cbz x0,0x7101a9a490
7101a9a314  ldr w8,[x19, #0xd8]
7101a9a318  cmp w8,#0x3
7101a9a31c  b.ne 0x7101a9a490
7101a9a320  ldrb w8,[x19, #0x110]
7101a9a324  cbnz w8,0x7101a9a490
7101a9a328  ldrb w8,[x19, #0x112]
7101a9a32c  cbnz w8,0x7101a9a344
7101a9a330  ldr x8,[x0]
7101a9a334  ldr x8,[x8, #0x18]
7101a9a338  blr x8
7101a9a33c  mov w8,#0x1
7101a9a340  strb w8,[x19, #0x112]
7101a9a344  strb wzr,[x19, #0x113]
7101a9a348  b 0x7101a9a490
7101a9a34c  mov x19,xzr
7101a9a350  ldrb w8,[x0, #0x191]
7101a9a354  cbnz w8,0x7101a9a3c8
7101a9a358  mov w2,#0x4
7101a9a35c  mov x1,x19
7101a9a360  bl 0x7103313f20
7101a9a364  tbz w0,#0x0,0x7101a9a3c8
7101a9a368  sub x0,x29,#0x70
7101a9a36c  mov x1,x19
7101a9a370  bl 0x71024076d0
7101a9a374  ldur x8,[x29, #-0x60]
7101a9a378  adrp x9,0x7104f73000
7101a9a37c  add x9,x9,#0xd50
7101a9a380  stur x9,[x29, #-0x68]
7101a9a384  cbz x8,0x7101a9a3f4
7101a9a388  adrp x8,0x7106dd5000
7101a9a38c  ldrb w8,[x8, #0x3a8]
7101a9a390  cmp w8,#0x1
7101a9a394  b.ne 0x7101a9a3f4
7101a9a398  adrp x9,0x7106dd5000
7101a9a39c  ldur w8,[x29, #-0x58]
7101a9a3a0  ldr w9,[x9, #0x3ac]
7101a9a3a4  cmp w8,w9
7101a9a3a8  b.ne 0x7101a9a3f4
7101a9a3ac  ldur x8,[x29, #-0x60]
7101a9a3b0  ldr wzr,[x8, #0x38]!
7101a9a3b4  ldaxr w9,[x8]
7101a9a3b8  sub w9,w9,#0x1
7101a9a3bc  stlxr w10,w9,[x8]
7101a9a3c0  cbnz w10,0x7101a9a3b4
7101a9a3c4  b 0x7101a9a3f4
7101a9a3c8  mov x8,#0x650000000000
7101a9a3cc  movk x8,#0x87, LSL #48
7101a9a3d0  sturb wzr,[x29, #-0x50]
7101a9a3d4  stp xzr,x8,[x29, #-0x60]
7101a9a3d8  mov x8,#-0x1
7101a9a3dc  stp x8,xzr,[x29, #-0x48]
7101a9a3e0  adrp x8,0x7104f73000
7101a9a3e4  add x8,x8,#0xd50
7101a9a3e8  stur wzr,[x29, #-0x70]
7101a9a3ec  stur xzr,[x29, #-0x38]
7101a9a3f0  stur x8,[x29, #-0x68]
7101a9a3f4  stur xzr,[x29, #-0x60]
7101a9a3f8  sturb wzr,[x29, #-0x50]
7101a9a3fc  b 0x7101a9a7d4
7101a9a400  mov w8,#0x1
7101a9a404  strb w8,[x19, #0x16a]
7101a9a408  ldr w8,[x19, #0xf4]
7101a9a40c  cmp w8,#0x13
7101a9a410  b.cs 0x7101a9a7ec
7101a9a414  orr w9,wzr,#0x3
7101a9a418  b 0x7101a9a10c
7101a9a41c  fmov s8,0x3f800000
7101a9a420  mov v0.16B,v8.16B
7101a9a424  adrp x1,0x71043ad000
7101a9a428  add x1,x1,#0x264
7101a9a42c  bl 0x7103778300
7101a9a430  ldr x8,[x20]
7101a9a434  ldr x8,[x8]
7101a9a438  ldr x0,[x8, #0x10]
7101a9a43c  mov v0.16B,v8.16B
7101a9a440  adrp x1,0x710435b000
7101a9a444  add x1,x1,#0xba
7101a9a448  bl 0x7103778300
7101a9a44c  mov w8,#0x1
7101a9a450  strb w8,[x19, #0x168]
7101a9a454  ldr x8,[x19, #0x130]
7101a9a458  ldr x19,[x8, #0x8]
7101a9a45c  ldr x0,[x19, #0xe8]
7101a9a460  cbz x0,0x7101a9a490
7101a9a464  ldr w8,[x19, #0xd8]
7101a9a468  cmp w8,#0x3
7101a9a46c  b.ne 0x7101a9a490
7101a9a470  ldrb w8,[x19, #0x110]
7101a9a474  cbnz w8,0x7101a9a490
7101a9a478  ldrb w8,[x19, #0x112]
7101a9a47c  cbz w8,0x7101a9a490
7101a9a480  ldr x8,[x0]
7101a9a484  ldr x8,[x8, #0x10]
7101a9a488  blr x8
7101a9a48c  strb wzr,[x19, #0x112]
7101a9a490  adrp x8,0x710532f000
7101a9a494  ldr x8,[x8, #0x8d0]
7101a9a498  ldr x0,[x8, #0x8]
7101a9a49c  ldp x8,x9,[x0, #0x40]
7101a9a4a0  sub x9,x9,x8
7101a9a4a4  asr x9,x9,#0x3
7101a9a4a8  cmp x9,#0x3
7101a9a4ac  b.cc 0x7101a9a4c0
7101a9a4b0  ldr x19,[x8, #0x10]
7101a9a4b4  ldrb w8,[x0, #0x191]
7101a9a4b8  cbnz w8,0x7101a9a53c
7101a9a4bc  b 0x7101a9a4cc
7101a9a4c0  mov x19,xzr
7101a9a4c4  ldrb w8,[x0, #0x191]
7101a9a4c8  cbnz w8,0x7101a9a53c
7101a9a4cc  mov w2,#0x4
7101a9a4d0  mov x1,x19
7101a9a4d4  bl 0x7103313f20
7101a9a4d8  tbz w0,#0x0,0x7101a9a53c
7101a9a4dc  add x0,sp,#0x90
7101a9a4e0  mov x1,x19
7101a9a4e4  bl 0x71024076d0
7101a9a4e8  ldr x8,[sp, #0xa0]
7101a9a4ec  adrp x9,0x7104f73000
7101a9a4f0  add x9,x9,#0xd50
7101a9a4f4  str x9,[sp, #0x98]
7101a9a4f8  cbz x8,0x7101a9a568
7101a9a4fc  adrp x8,0x7106dd5000
7101a9a500  ldrb w8,[x8, #0x3a8]
7101a9a504  cmp w8,#0x1
7101a9a508  b.ne 0x7101a9a568
7101a9a50c  adrp x9,0x7106dd5000
7101a9a510  ldr w8,[sp, #0xa8]
7101a9a514  ldr w9,[x9, #0x3ac]
7101a9a518  cmp w8,w9
7101a9a51c  b.ne 0x7101a9a568
7101a9a520  ldr x8,[sp, #0xa0]
7101a9a524  ldr wzr,[x8, #0x38]!
7101a9a528  ldaxr w9,[x8]
7101a9a52c  sub w9,w9,#0x1
7101a9a530  stlxr w10,w9,[x8]
7101a9a534  cbnz w10,0x7101a9a528
7101a9a538  b 0x7101a9a568
7101a9a53c  mov x8,#0x650000000000
7101a9a540  movk x8,#0x87, LSL #48
7101a9a544  strb wzr,[sp, #0xb0]
7101a9a548  stp xzr,x8,[sp, #0xa0]
7101a9a54c  mov x8,#-0x1
7101a9a550  stp x8,xzr,[sp, #0xb8]
7101a9a554  adrp x8,0x7104f73000
7101a9a558  add x8,x8,#0xd50
7101a9a55c  str wzr,[sp, #0x90]
7101a9a560  str xzr,[sp, #0xc8]
7101a9a564  str x8,[sp, #0x98]
7101a9a568  str xzr,[sp, #0xa0]
7101a9a56c  strb wzr,[sp, #0xb0]
7101a9a570  b 0x7101a9a7d4
7101a9a574  adrp x8,0x710532f000
7101a9a578  ldr x8,[x8, #0x7d0]
7101a9a57c  ldr x8,[x8, #0x8]
7101a9a580  ldr x0,[x8, #0x18]
7101a9a584  cbz x0,0x7101a9a5b0
7101a9a588  ldr x8,[x0]
7101a9a58c  ldr x8,[x8, #0x48]
7101a9a590  blr x8
7101a9a594  tbz w0,#0x0,0x7101a9a5b0
7101a9a598  ldr x8,[x21, #0x600]
7101a9a59c  ldrb w10,[x8, #0x4aa]
7101a9a5a0  cmp w10,#0x0
7101a9a5a4  cset w9,eq
7101a9a5a8  cbnz w10,0x7101a9a150
7101a9a5ac  b 0x7101a9a7d4
7101a9a5b0  mov w8,#0x1
7101a9a5b4  add x20,x19,#0x158
7101a9a5b8  strb w8,[x19, #0x16a]
7101a9a5bc  adrp x1,0x71043ad000
7101a9a5c0  add x1,x1,#0x264
7101a9a5c4  add x8,sp,#0x80
7101a9a5c8  mov x0,x20
7101a9a5cc  bl 0x71037780e0
7101a9a5d0  add x0,sp,#0x80
7101a9a5d4  bl 0x710377b140
7101a9a5d8  ldr x0,[sp, #0x88]
7101a9a5dc  adrp x21,0x710523d000
7101a9a5e0  add x21,x21,#0x9e8
7101a9a5e4  stp x21,xzr,[sp, #0x80]
7101a9a5e8  cbz x0,0x7101a9a5f0
7101a9a5ec  bl 0x710392eb40
7101a9a5f0  adrp x1,0x710436b000
7101a9a5f4  add x1,x1,#0xda9
7101a9a5f8  add x8,sp,#0x80
7101a9a5fc  mov x0,x20
7101a9a600  bl 0x71037780e0
7101a9a604  add x0,sp,#0x80
7101a9a608  bl 0x710377b140
7101a9a60c  ldr x0,[sp, #0x88]
7101a9a610  stp x21,xzr,[sp, #0x80]
7101a9a614  cbz x0,0x7101a9a61c
7101a9a618  bl 0x710392eb40
7101a9a61c  ldrb w8,[x19, #0x128]
7101a9a620  cbz w8,0x7101a9a628
7101a9a624  strb wzr,[x19, #0x169]
7101a9a628  ldrsw x8,[x19, #0xf4]
7101a9a62c  cmp w8,#0x13
7101a9a630  b.cs 0x7101a9a7ec
7101a9a634  add x8,x19,x8, LSL #0x2
7101a9a638  orr w9,wzr,#0x3
7101a9a63c  str w9,[x8, #0xa8]
7101a9a640  adrp x8,0x710532f000
7101a9a644  ldr x8,[x8, #0x8d0]
7101a9a648  ldr x0,[x8, #0x8]
7101a9a64c  ldp x8,x9,[x0, #0x40]
7101a9a650  sub x9,x9,x8
7101a9a654  asr x9,x9,#0x3
7101a9a658  cmp x9,#0x9
7101a9a65c  b.cc 0x7101a9a670
7101a9a660  ldr x19,[x8, #0x40]
7101a9a664  ldrb w8,[x0, #0x191]
7101a9a668  cbnz w8,0x7101a9a6ec
7101a9a66c  b 0x7101a9a67c
7101a9a670  mov x19,xzr
7101a9a674  ldrb w8,[x0, #0x191]
7101a9a678  cbnz w8,0x7101a9a6ec
7101a9a67c  mov w2,#0x4
7101a9a680  mov x1,x19
7101a9a684  bl 0x7103313f20
7101a9a688  tbz w0,#0x0,0x7101a9a6ec
7101a9a68c  add x0,sp,#0x40
7101a9a690  mov x1,x19
7101a9a694  bl 0x71024076d0
7101a9a698  ldr x8,[sp, #0x50]
7101a9a69c  adrp x9,0x7104f73000
7101a9a6a0  add x9,x9,#0xd50
7101a9a6a4  str x9,[sp, #0x48]
7101a9a6a8  cbz x8,0x7101a9a718
7101a9a6ac  adrp x8,0x7106dd5000
7101a9a6b0  ldrb w8,[x8, #0x3a8]
7101a9a6b4  cmp w8,#0x1
7101a9a6b8  b.ne 0x7101a9a718
7101a9a6bc  adrp x9,0x7106dd5000
7101a9a6c0  ldr w8,[sp, #0x58]
7101a9a6c4  ldr w9,[x9, #0x3ac]
7101a9a6c8  cmp w8,w9
7101a9a6cc  b.ne 0x7101a9a718
7101a9a6d0  ldr x8,[sp, #0x50]
7101a9a6d4  ldr wzr,[x8, #0x38]!
7101a9a6d8  ldaxr w9,[x8]
7101a9a6dc  sub w9,w9,#0x1
7101a9a6e0  stlxr w10,w9,[x8]
7101a9a6e4  cbnz w10,0x7101a9a6d8
7101a9a6e8  b 0x7101a9a718
7101a9a6ec  mov x8,#0x650000000000
7101a9a6f0  movk x8,#0x87, LSL #48
7101a9a6f4  strb wzr,[sp, #0x60]
7101a9a6f8  stp xzr,x8,[sp, #0x50]
7101a9a6fc  mov x8,#-0x1
7101a9a700  stp x8,xzr,[sp, #0x68]
7101a9a704  adrp x8,0x7104f73000
7101a9a708  add x8,x8,#0xd50
7101a9a70c  str wzr,[sp, #0x40]
7101a9a710  str xzr,[sp, #0x78]
7101a9a714  str x8,[sp, #0x48]
7101a9a718  str xzr,[sp, #0x50]
7101a9a71c  strb wzr,[sp, #0x60]
7101a9a720  b 0x7101a9a7d4
7101a9a724  mov x19,xzr
7101a9a728  ldrb w8,[x0, #0x191]
7101a9a72c  cbnz w8,0x7101a9a7a0
7101a9a730  mov w2,#0x4
7101a9a734  mov x1,x19
7101a9a738  bl 0x7103313f20
7101a9a73c  tbz w0,#0x0,0x7101a9a7a0
7101a9a740  mov x0,sp
7101a9a744  mov x1,x19
7101a9a748  bl 0x71024076d0
7101a9a74c  ldr x8,[sp, #0x10]
7101a9a750  adrp x9,0x7104f73000
7101a9a754  add x9,x9,#0xd50
7101a9a758  str x9,[sp, #0x8]
7101a9a75c  cbz x8,0x7101a9a7cc
7101a9a760  adrp x8,0x7106dd5000
7101a9a764  ldrb w8,[x8, #0x3a8]
7101a9a768  cmp w8,#0x1
7101a9a76c  b.ne 0x7101a9a7cc
7101a9a770  adrp x9,0x7106dd5000
7101a9a774  ldr w8,[sp, #0x18]
7101a9a778  ldr w9,[x9, #0x3ac]
7101a9a77c  cmp w8,w9
7101a9a780  b.ne 0x7101a9a7cc
7101a9a784  ldr x8,[sp, #0x10]
7101a9a788  ldr wzr,[x8, #0x38]!
7101a9a78c  ldaxr w9,[x8]
7101a9a790  sub w9,w9,#0x1
7101a9a794  stlxr w10,w9,[x8]
7101a9a798  cbnz w10,0x7101a9a78c
7101a9a79c  b 0x7101a9a7cc
7101a9a7a0  mov x8,#0x650000000000
7101a9a7a4  movk x8,#0x87, LSL #48
7101a9a7a8  strb wzr,[sp, #0x20]
7101a9a7ac  stp xzr,x8,[sp, #0x10]
7101a9a7b0  mov x8,#-0x1
7101a9a7b4  stp x8,xzr,[sp, #0x28]
7101a9a7b8  adrp x8,0x7104f73000
7101a9a7bc  add x8,x8,#0xd50
7101a9a7c0  str wzr,[sp]
7101a9a7c4  str xzr,[sp, #0x38]
7101a9a7c8  str x8,[sp, #0x8]
7101a9a7cc  str xzr,[sp, #0x10]
7101a9a7d0  strb wzr,[sp, #0x20]
7101a9a7d4  ldr d8,[sp, #0x110]
7101a9a7d8  ldp x29,x30,[sp, #0x140]
7101a9a7dc  ldp x20,x19,[sp, #0x130]
7101a9a7e0  ldp x28,x21,[sp, #0x120]
7101a9a7e4  add sp,sp,#0x150
7101a9a7e8  ret
7101a9a7ec  bl 0x71039c2650
