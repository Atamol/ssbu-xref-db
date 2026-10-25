// addr:      7101e3a0c0
// offset:    0x1e3a0c0
// name:      FUN_7101e3a0c0
// mangled:   
// size:      5640

7101e3a0c0  str d8,[sp, #-0x70]!
7101e3a0c4  stp x28,x27,[sp, #0x10]
7101e3a0c8  stp x26,x25,[sp, #0x20]
7101e3a0cc  stp x24,x23,[sp, #0x30]
7101e3a0d0  stp x22,x21,[sp, #0x40]
7101e3a0d4  stp x20,x19,[sp, #0x50]
7101e3a0d8  stp x29,x30,[sp, #0x60]
7101e3a0dc  add x29,sp,#0x60
7101e3a0e0  sub sp,sp,#0x200
7101e3a0e4  mov w27,w1
7101e3a0e8  mov x23,x0
7101e3a0ec  mov w0,#0x10
7101e3a0f0  mov w1,#0x8
7101e3a0f4  mov x24,x2
7101e3a0f8  bl 0x710392e290
7101e3a0fc  mov x19,x0
7101e3a100  cbnz x0,0x7101e3a14c
7101e3a104  adrp x8,0x7105332000
7101e3a108  ldr x0,[x8, #0xf00]
7101e3a10c  cbz x0,0x7101e3a148
7101e3a110  mov w8,#0x8
7101e3a114  str wzr,[sp, #0x110]
7101e3a118  add x1,sp,#0x110
7101e3a11c  str x8,[sp, #0x158]
7101e3a120  ldr x8,[x0]
7101e3a124  ldr x8,[x8, #0x30]
7101e3a128  add x2,sp,#0x158
7101e3a12c  blr x8
7101e3a130  tbz w0,#0x0,0x7101e3a148
7101e3a134  mov w0,#0x10
7101e3a138  mov w1,#0x8
7101e3a13c  bl 0x710392e290
7101e3a140  mov x19,x0
7101e3a144  cbnz x0,0x7101e3a14c
7101e3a148  mov x19,xzr
7101e3a14c  str xzr,[x19]
7101e3a150  ldr x8,[x24, #0x8]
7101e3a154  ldr x8,[x8, #0x8]
7101e3a158  cbz x8,0x7101e3a18c
7101e3a15c  ldr x0,[x8, #0x60]
7101e3a160  cbz x0,0x7101e3a18c
7101e3a164  ldr x8,[x8, #0x18]
7101e3a168  add x1,x8,#0xb0
7101e3a16c  bl 0x7103796f20
7101e3a170  str x0,[x19]
7101e3a174  cbz x0,0x7101e3a190
7101e3a178  ldr x8,[x0]
7101e3a17c  ldr x8,[x8, #0x2e0]
7101e3a180  mov w1,wzr
7101e3a184  blr x8
7101e3a188  b 0x7101e3a190
7101e3a18c  str xzr,[x19]
7101e3a190  mov x0,x19
7101e3a194  bl 0x710392eb40
7101e3a198  mov x21,x23
7101e3a19c  ldr x8,[x21, #0x8]!
7101e3a1a0  ldrb w9,[x21, #0x4c]
7101e3a1a4  cbz w9,0x7101e3a1f8
7101e3a1a8  ldr x9,[x23, #0x10]
7101e3a1ac  sub x9,x9,x8
7101e3a1b0  sxtw x28,w27
7101e3a1b4  asr x9,x9,#0x3
7101e3a1b8  cmp x9,x28
7101e3a1bc  b.ls 0x7101e3b6c0
7101e3a1c0  ldr x8,[x8, x28, LSL #0x3]
7101e3a1c4  ldrh w8,[x8]
7101e3a1c8  lsr w9,w8,#0x4
7101e3a1cc  cmp w9,#0x176
7101e3a1d0  b.hi 0x7101e3a204
7101e3a1d4  lsr x9,x8,#0x3
7101e3a1d8  and x9,x9,#0x1ffc
7101e3a1dc  add x9,x23,x9
7101e3a1e0  ldr w9,[x9, #0x5c]
7101e3a1e4  mov w10,#0x1
7101e3a1e8  lsl w8,w10,w8
7101e3a1ec  tst w9,w8
7101e3a1f0  cset w19,ne
7101e3a1f4  b 0x7101e3a208
7101e3a1f8  mov w19,wzr
7101e3a1fc  sxtw x28,w27
7101e3a200  b 0x7101e3a208
7101e3a204  mov w19,wzr
7101e3a208  mov w0,#0x10
7101e3a20c  mov w1,#0x8
7101e3a210  bl 0x710392e290
7101e3a214  mov x20,x0
7101e3a218  cbnz x0,0x7101e3a264
7101e3a21c  adrp x8,0x7105332000
7101e3a220  ldr x0,[x8, #0xf00]
7101e3a224  cbz x0,0x7101e3a260
7101e3a228  mov w8,#0x8
7101e3a22c  str wzr,[sp, #0x110]
7101e3a230  add x1,sp,#0x110
7101e3a234  str x8,[sp, #0x158]
7101e3a238  ldr x8,[x0]
7101e3a23c  ldr x8,[x8, #0x30]
7101e3a240  add x2,sp,#0x158
7101e3a244  blr x8
7101e3a248  tbz w0,#0x0,0x7101e3a260
7101e3a24c  mov w0,#0x10
7101e3a250  mov w1,#0x8
7101e3a254  bl 0x710392e290
7101e3a258  mov x20,x0
7101e3a25c  cbnz x0,0x7101e3a264
7101e3a260  mov x20,xzr
7101e3a264  str xzr,[x20]
7101e3a268  ldr x8,[x24, #0x8]
7101e3a26c  ldr x8,[x8, #0x8]
7101e3a270  cbz x8,0x7101e3a2a8
7101e3a274  ldr x0,[x8, #0x60]
7101e3a278  cbz x0,0x7101e3a2a8
7101e3a27c  ldr x8,[x8, #0x18]
7101e3a280  add x1,x8,#0xb0
7101e3a284  bl 0x7103796f20
7101e3a288  str x0,[x20]
7101e3a28c  cbz x0,0x7101e3a2ac
7101e3a290  ldr x8,[x0]
7101e3a294  ldr x8,[x8, #0x2f0]
7101e3a298  mov w1,w19
7101e3a29c  mov w2,wzr
7101e3a2a0  blr x8
7101e3a2a4  b 0x7101e3a2ac
7101e3a2a8  str xzr,[x20]
7101e3a2ac  mov x0,x20
7101e3a2b0  bl 0x710392eb40
7101e3a2b4  ldp x8,x9,[x23, #0x8]
7101e3a2b8  sub x9,x9,x8
7101e3a2bc  asr x9,x9,#0x3
7101e3a2c0  cmp x9,x28
7101e3a2c4  b.ls 0x7101e3b6c0
7101e3a2c8  ldr x8,[x8, x28, LSL #0x3]
7101e3a2cc  ldrh w26,[x8, #0x8]
7101e3a2d0  adrp x8,0x7105329000
7101e3a2d4  ldr x8,[x8, #0xf98]
7101e3a2d8  ldr x19,[x8]
7101e3a2dc  ldr x0,[x19, #0x20]
7101e3a2e0  mov w1,#0x1
7101e3a2e4  mov w3,#0x10
7101e3a2e8  mov x2,x26
7101e3a2ec  bl 0x710259c150
7101e3a2f0  ldr x19,[x19, #0x20]
7101e3a2f4  orr w8,wzr,#0xffff
7101e3a2f8  cmp x26,x8
7101e3a2fc  str x21,[sp, #0x8]
7101e3a300  b.eq 0x7101e3a384
7101e3a304  mov x0,x19
7101e3a308  ldr x8,[x0, #0x28]!
7101e3a30c  ldr x9,[x0, #0x8]
7101e3a310  sub x11,x9,x8
7101e3a314  asr x9,x11,#0x3
7101e3a318  cmp w9,#0x1
7101e3a31c  b.lt 0x7101e3a384
7101e3a320  mov x10,xzr
7101e3a324  sbfx x11,x11,#0x3,#0x20
7101e3a328  cmp x9,x10
7101e3a32c  b.ls 0x7101e3b6c4
7101e3a330  ldrh w12,[x8]
7101e3a334  cmp w12,w26
7101e3a338  b.eq 0x7101e3a350
7101e3a33c  add x10,x10,#0x1
7101e3a340  add x8,x8,#0x8
7101e3a344  cmp x10,x11
7101e3a348  b.lt 0x7101e3a328
7101e3a34c  b 0x7101e3a384
7101e3a350  tbnz w10,#0x1f,0x7101e3a384
7101e3a354  adrp x8,0x710532f000
7101e3a358  ldr x8,[x8, #0x730]
7101e3a35c  ldr x8,[x8, #0x8]
7101e3a360  ldr x0,[x8, #0x1d8]
7101e3a364  mov x1,x26
7101e3a368  bl 0x71032a9470
7101e3a36c  mov x1,x0
7101e3a370  add x0,x19,#0x8
7101e3a374  orr w2,wzr,#0x18
7101e3a378  bl 0x710323faf0
7101e3a37c  mov x19,x0
7101e3a380  b 0x7101e3a388
7101e3a384  add x19,x19,#0x70
7101e3a388  adrp x1,0x710438b000
7101e3a38c  add x1,x1,#0x337
7101e3a390  sub x8,x29,#0xb0
7101e3a394  mov x0,x24
7101e3a398  sxth x21,w26
7101e3a39c  bl 0x7103776910
7101e3a3a0  ldur x22,[x29, #-0xa8]
7101e3a3a4  ldr x8,[x22]
7101e3a3a8  cbnz x8,0x7101e3a3e8
7101e3a3ac  adrp x1,0x710436a000
7101e3a3b0  add x1,x1,#0xc4b
7101e3a3b4  add x8,sp,#0x158
7101e3a3b8  mov x0,x24
7101e3a3bc  bl 0x7103776910
7101e3a3c0  ldr x20,[sp, #0x160]
7101e3a3c4  str xzr,[sp, #0x160]
7101e3a3c8  stur x20,[x29, #-0xa8]
7101e3a3cc  cbz x22,0x7101e3a3d8
7101e3a3d0  mov x0,x22
7101e3a3d4  bl 0x710392eb40
7101e3a3d8  adrp x8,0x710523d000
7101e3a3dc  add x8,x8,#0x9a8
7101e3a3e0  mov x22,x20
7101e3a3e4  stp x8,xzr,[sp, #0x158]
7101e3a3e8  adrp x1,0x710439d000
7101e3a3ec  add x1,x1,#0x963
7101e3a3f0  sub x8,x29,#0xc0
7101e3a3f4  mov x0,x24
7101e3a3f8  bl 0x7103776910
7101e3a3fc  mov x0,x22
7101e3a400  mov x1,x19
7101e3a404  bl 0x7103778b80
7101e3a408  ldur x20,[x29, #-0xb8]
7101e3a40c  mov x0,x20
7101e3a410  mov x1,x19
7101e3a414  bl 0x7103778b80
7101e3a418  adrp x8,0x710532f000
7101e3a41c  ldr x8,[x8, #0x730]
7101e3a420  ldr x8,[x8, #0x8]
7101e3a424  ldr x8,[x8, #0x1d8]
7101e3a428  cmn w21,#0x1
7101e3a42c  b.eq 0x7101e3a43c
7101e3a430  add x9,x8,x21, LSL #0x1
7101e3a434  ldrh w11,[x9, #0x60]
7101e3a438  b 0x7101e3a440
7101e3a43c  mov w11,#0xffffffff
7101e3a440  ldp x9,x10,[x8, #0x20]
7101e3a444  str x20,[sp, #0x50]
7101e3a448  sub x10,x10,x9
7101e3a44c  orr x12,xzr,#-0x3333333333333334
7101e3a450  movk x12,#0xcccd
7101e3a454  asr x10,x10,#0x6
7101e3a458  mul x10,x10,x12
7101e3a45c  mov w12,#0x140
7101e3a460  madd x12,x11,x12,x9
7101e3a464  adrp x13,0x7105182000
7101e3a468  add x13,x13,#0xb08
7101e3a46c  cmp x10,x11
7101e3a470  csel x19,x12,x13,hi
7101e3a474  cmn w21,#0x1
7101e3a478  ldrb w25,[x19, #0x5e]
7101e3a47c  cset w11,ne
7101e3a480  cmp w21,#0x7d0
7101e3a484  cset w12,lt
7101e3a488  and w11,w11,w12
7101e3a48c  cmp w11,#0x1
7101e3a490  stur w11,[x29, #-0x54]
7101e3a494  b.ne 0x7101e3a4f8
7101e3a498  add x8,x8,x21, LSL #0x1
7101e3a49c  ldrh w8,[x8, #0x60]
7101e3a4a0  cmp w10,w8
7101e3a4a4  b.ls 0x7101e3a4f8
7101e3a4a8  mov w11,#0x140
7101e3a4ac  madd x9,x8,x11,x9
7101e3a4b0  cmp x10,x8
7101e3a4b4  adrp x8,0x7105182000
7101e3a4b8  add x8,x8,#0xb08
7101e3a4bc  csel x8,x9,x8,hi
7101e3a4c0  ldrb w9,[x8, #0x5e]
7101e3a4c4  cbz w9,0x7101e3a4d0
7101e3a4c8  mov w1,#0x4
7101e3a4cc  b 0x7101e3a4fc
7101e3a4d0  ldrb w8,[x8, #0x6c]
7101e3a4d4  sub w8,w8,#0x1
7101e3a4d8  cmp w8,#0x2
7101e3a4dc  b.hi 0x7101e3a4f8
7101e3a4e0  and x8,x8,#0xff
7101e3a4e4  lsl x8,x8,#0x3
7101e3a4e8  mov w9,#0x301
7101e3a4ec  movk w9,#0x2, LSL #16
7101e3a4f0  lsr w1,w9,w8
7101e3a4f4  b 0x7101e3a4fc
7101e3a4f8  mov w1,wzr
7101e3a4fc  add x0,sp,#0x158
7101e3a500  mov w2,wzr
7101e3a504  add x20,sp,#0x158
7101e3a508  bl 0x710339dde0
7101e3a50c  ldr x0,[x24, #0x8]
7101e3a510  fmov s0,0x3f800000
7101e3a514  add x20,x20,#0x8
7101e3a518  mov x1,x20
7101e3a51c  bl 0x7103778300
7101e3a520  ldrb w8,[x19, #0x68]
7101e3a524  cmp w8,#0x3
7101e3a528  str x27,[sp, #0x10]
7101e3a52c  stur w25,[x29, #-0x58]
7101e3a530  b.hi 0x7101e3a6ac
7101e3a534  adrp x9,0x71044fb000
7101e3a538  add x9,x9,#0xd50
7101e3a53c  ldrsw x8,[x9, x8, LSL #0x2]
7101e3a540  add x8,x8,x9
7101e3a544  br x8
7101e3a548  mov x11,#0x6c63
7101e3a54c  movk x11,#0x7361, LSL #16
7101e3a550  mov x9,#0xa00000000
7101e3a554  add x10,sp,#0x110
7101e3a558  movk x11,#0x5f73, LSL #32
7101e3a55c  movk x11,#0x6f6e, LSL #48
7101e3a560  stp x9,x11,[sp, #0x110]
7101e3a564  add x19,x10,#0x8
7101e3a568  add x9,x10,#0x9
7101e3a56c  mov w10,#0x656e
7101e3a570  strh w10,[sp, #0x120]
7101e3a574  mov w8,#0x9dc5
7101e3a578  movk w8,#0x811c, LSL #16
7101e3a57c  strb wzr,[sp, #0x122]
7101e3a580  mov w11,#0x63
7101e3a584  mov w10,#0x89
7101e3a588  mul w8,w8,w10
7101e3a58c  and w11,w11,#0xff
7101e3a590  eor w8,w8,w11
7101e3a594  ldrb w11,[x9], #0x1
7101e3a598  cbnz w11,0x7101e3a588
7101e3a59c  b 0x7101e3a700
7101e3a5a0  mov x9,#0x900000000
7101e3a5a4  str x9,[sp, #0x110]
7101e3a5a8  mov x9,#0x6c63
7101e3a5ac  movk x9,#0x7361, LSL #16
7101e3a5b0  add x10,sp,#0x110
7101e3a5b4  add x19,x10,#0x8
7101e3a5b8  movk x9,#0x5f73, LSL #32
7101e3a5bc  movk x9,#0x6361, LSL #48
7101e3a5c0  str x9,[sp, #0x118]
7101e3a5c4  add x9,x10,#0x9
7101e3a5c8  mov w10,#0x65
7101e3a5cc  strh w10,[sp, #0x120]
7101e3a5d0  mov w8,#0x9dc5
7101e3a5d4  movk w8,#0x811c, LSL #16
7101e3a5d8  mov w11,#0x63
7101e3a5dc  mov w10,#0x89
7101e3a5e0  mul w8,w8,w10
7101e3a5e4  and w11,w11,#0xff
7101e3a5e8  eor w8,w8,w11
7101e3a5ec  ldrb w11,[x9], #0x1
7101e3a5f0  cbnz w11,0x7101e3a5e0
7101e3a5f4  b 0x7101e3a700
7101e3a5f8  mov x11,#0x6c63
7101e3a5fc  movk x11,#0x7361, LSL #16
7101e3a600  mov x9,#0xa00000000
7101e3a604  add x10,sp,#0x110
7101e3a608  movk x11,#0x5f73, LSL #32
7101e3a60c  movk x11,#0x6f68, LSL #48
7101e3a610  stp x9,x11,[sp, #0x110]
7101e3a614  add x19,x10,#0x8
7101e3a618  add x9,x10,#0x9
7101e3a61c  mov w10,#0x6570
7101e3a620  strh w10,[sp, #0x120]
7101e3a624  mov w8,#0x9dc5
7101e3a628  movk w8,#0x811c, LSL #16
7101e3a62c  strb wzr,[sp, #0x122]
7101e3a630  mov w11,#0x63
7101e3a634  mov w10,#0x89
7101e3a638  mul w8,w8,w10
7101e3a63c  and w11,w11,#0xff
7101e3a640  eor w8,w8,w11
7101e3a644  ldrb w11,[x9], #0x1
7101e3a648  cbnz w11,0x7101e3a638
7101e3a64c  b 0x7101e3a700
7101e3a650  mov x11,#0x6c63
7101e3a654  movk x11,#0x7361, LSL #16
7101e3a658  orr x9,xzr,#0xc00000000
7101e3a65c  add x10,sp,#0x110
7101e3a660  movk x11,#0x5f73, LSL #32
7101e3a664  movk x11,#0x656c, LSL #48
7101e3a668  stp x9,x11,[sp, #0x110]
7101e3a66c  add x19,x10,#0x8
7101e3a670  add x9,x10,#0x9
7101e3a674  mov w10,#0x6567
7101e3a678  movk w10,#0x646e, LSL #16
7101e3a67c  mov w8,#0x9dc5
7101e3a680  movk w8,#0x811c, LSL #16
7101e3a684  str w10,[sp, #0x120]
7101e3a688  mov w11,#0x63
7101e3a68c  strb wzr,[sp, #0x124]
7101e3a690  mov w10,#0x89
7101e3a694  mul w8,w8,w10
7101e3a698  and w11,w11,#0xff
7101e3a69c  eor w8,w8,w11
7101e3a6a0  ldrb w11,[x9], #0x1
7101e3a6a4  cbnz w11,0x7101e3a694
7101e3a6a8  b 0x7101e3a700
7101e3a6ac  mov x11,#0x6c63
7101e3a6b0  movk x11,#0x7361, LSL #16
7101e3a6b4  mov x9,#0xa00000000
7101e3a6b8  add x10,sp,#0x110
7101e3a6bc  movk x11,#0x5f73, LSL #32
7101e3a6c0  movk x11,#0x6f6e, LSL #48
7101e3a6c4  stp x9,x11,[sp, #0x110]
7101e3a6c8  add x19,x10,#0x8
7101e3a6cc  add x9,x10,#0x9
7101e3a6d0  mov w10,#0x656e
7101e3a6d4  strh w10,[sp, #0x120]
7101e3a6d8  mov w8,#0x9dc5
7101e3a6dc  movk w8,#0x811c, LSL #16
7101e3a6e0  strb wzr,[sp, #0x122]
7101e3a6e4  mov w11,#0x63
7101e3a6e8  mov w10,#0x89
7101e3a6ec  mul w8,w8,w10
7101e3a6f0  and w11,w11,#0xff
7101e3a6f4  eor w8,w8,w11
7101e3a6f8  ldrb w11,[x9], #0x1
7101e3a6fc  cbnz w11,0x7101e3a6ec
7101e3a700  str w8,[sp, #0x110]
7101e3a704  adrp x1,0x7104319000
7101e3a708  add x1,x1,#0x364
7101e3a70c  add x8,sp,#0x100
7101e3a710  mov x0,x24
7101e3a714  bl 0x7103776640
7101e3a718  fmov s8,0x3f800000
7101e3a71c  ldr x0,[sp, #0x108]
7101e3a720  mov x1,x20
7101e3a724  mov v0.16B,v8.16B
7101e3a728  str x0,[sp, #0x48]
7101e3a72c  bl 0x7103778300
7101e3a730  adrp x1,0x7104359000
7101e3a734  add x1,x1,#0xb85
7101e3a738  add x8,sp,#0xf0
7101e3a73c  mov x0,x24
7101e3a740  bl 0x7103776640
7101e3a744  ldr x27,[sp, #0xf8]
7101e3a748  mov v0.16B,v8.16B
7101e3a74c  mov x1,x19
7101e3a750  mov x0,x27
7101e3a754  bl 0x7103778300
7101e3a758  mov v0.16B,v8.16B
7101e3a75c  mov x0,x27
7101e3a760  mov x1,x20
7101e3a764  str x27,[sp, #0x40]
7101e3a768  bl 0x7103778300
7101e3a76c  adrp x1,0x710436a000
7101e3a770  add x1,x1,#0xc27
7101e3a774  sub x8,x29,#0x90
7101e3a778  add x0,sp,#0xf0
7101e3a77c  mov w2,wzr
7101e3a780  bl 0x7103776910
7101e3a784  ldur x8,[x29, #-0x88]
7101e3a788  ldr x0,[x8]
7101e3a78c  mov w1,wzr
7101e3a790  bl 0x710377aa20
7101e3a794  ldur x0,[x29, #-0x88]
7101e3a798  adrp x25,0x710523d000
7101e3a79c  add x25,x25,#0x9a8
7101e3a7a0  stp x25,xzr,[x29, #-0x90]
7101e3a7a4  cbz x0,0x7101e3a7ac
7101e3a7a8  bl 0x710392eb40
7101e3a7ac  adrp x1,0x710436a000
7101e3a7b0  add x1,x1,#0xc27
7101e3a7b4  sub x8,x29,#0x90
7101e3a7b8  add x0,sp,#0xf0
7101e3a7bc  mov w2,#0x1
7101e3a7c0  bl 0x7103776910
7101e3a7c4  ldur x8,[x29, #-0x88]
7101e3a7c8  ldr x0,[x8]
7101e3a7cc  mov w1,wzr
7101e3a7d0  bl 0x710377aa20
7101e3a7d4  ldur x0,[x29, #-0x88]
7101e3a7d8  stp x25,xzr,[x29, #-0x90]
7101e3a7dc  cbz x0,0x7101e3a7e4
7101e3a7e0  bl 0x710392eb40
7101e3a7e4  adrp x1,0x710436a000
7101e3a7e8  add x1,x1,#0xc27
7101e3a7ec  sub x8,x29,#0x90
7101e3a7f0  add x0,sp,#0xf0
7101e3a7f4  mov w2,#0x2
7101e3a7f8  bl 0x7103776910
7101e3a7fc  ldur x8,[x29, #-0x88]
7101e3a800  ldr x0,[x8]
7101e3a804  mov w1,wzr
7101e3a808  bl 0x710377aa20
7101e3a80c  ldur x0,[x29, #-0x88]
7101e3a810  stp x25,xzr,[x29, #-0x90]
7101e3a814  cbz x0,0x7101e3a81c
7101e3a818  bl 0x710392eb40
7101e3a81c  adrp x1,0x710436a000
7101e3a820  add x1,x1,#0xc27
7101e3a824  sub x8,x29,#0x90
7101e3a828  add x0,sp,#0xf0
7101e3a82c  orr w2,wzr,#0x3
7101e3a830  bl 0x7103776910
7101e3a834  ldur x8,[x29, #-0x88]
7101e3a838  ldr x0,[x8]
7101e3a83c  mov w1,wzr
7101e3a840  bl 0x710377aa20
7101e3a844  ldur x0,[x29, #-0x88]
7101e3a848  stp x25,xzr,[x29, #-0x90]
7101e3a84c  cbz x0,0x7101e3a854
7101e3a850  bl 0x710392eb40
7101e3a854  adrp x1,0x710436a000
7101e3a858  add x1,x1,#0xc27
7101e3a85c  sub x8,x29,#0x90
7101e3a860  add x0,sp,#0xf0
7101e3a864  mov w2,#0x4
7101e3a868  bl 0x7103776910
7101e3a86c  ldur x8,[x29, #-0x88]
7101e3a870  ldr x0,[x8]
7101e3a874  mov w1,wzr
7101e3a878  bl 0x710377aa20
7101e3a87c  ldur x0,[x29, #-0x88]
7101e3a880  stp x25,xzr,[x29, #-0x90]
7101e3a884  cbz x0,0x7101e3a88c
7101e3a888  bl 0x710392eb40
7101e3a88c  adrp x1,0x710436a000
7101e3a890  add x1,x1,#0xc27
7101e3a894  mov w2,#0x5
7101e3a898  sub x8,x29,#0x90
7101e3a89c  add x0,sp,#0xf0
7101e3a8a0  bl 0x7103776910
7101e3a8a4  ldur x8,[x29, #-0x88]
7101e3a8a8  ldr x0,[x8]
7101e3a8ac  mov w1,wzr
7101e3a8b0  bl 0x710377aa20
7101e3a8b4  ldur x0,[x29, #-0x88]
7101e3a8b8  stp x25,xzr,[x29, #-0x90]
7101e3a8bc  cbz x0,0x7101e3a8c4
7101e3a8c0  bl 0x710392eb40
7101e3a8c4  adrp x1,0x710436a000
7101e3a8c8  add x1,x1,#0xc27
7101e3a8cc  sub x8,x29,#0x90
7101e3a8d0  add x0,sp,#0xf0
7101e3a8d4  orr w2,wzr,#0x6
7101e3a8d8  bl 0x7103776910
7101e3a8dc  ldur x8,[x29, #-0x88]
7101e3a8e0  ldr x0,[x8]
7101e3a8e4  mov w1,wzr
7101e3a8e8  bl 0x710377aa20
7101e3a8ec  ldur x0,[x29, #-0x88]
7101e3a8f0  stp x25,xzr,[x29, #-0x90]
7101e3a8f4  cbz x0,0x7101e3a8fc
7101e3a8f8  bl 0x710392eb40
7101e3a8fc  adrp x1,0x710436a000
7101e3a900  add x1,x1,#0xc27
7101e3a904  sub x8,x29,#0x90
7101e3a908  add x0,sp,#0xf0
7101e3a90c  orr w2,wzr,#0x7
7101e3a910  bl 0x7103776910
7101e3a914  ldur x8,[x29, #-0x88]
7101e3a918  ldr x0,[x8]
7101e3a91c  mov w1,wzr
7101e3a920  bl 0x710377aa20
7101e3a924  ldur x0,[x29, #-0x88]
7101e3a928  stp x25,xzr,[x29, #-0x90]
7101e3a92c  cbz x0,0x7101e3a934
7101e3a930  bl 0x710392eb40
7101e3a934  adrp x1,0x710436a000
7101e3a938  add x1,x1,#0xc27
7101e3a93c  sub x8,x29,#0x90
7101e3a940  add x0,sp,#0xf0
7101e3a944  mov w2,#0x8
7101e3a948  bl 0x7103776910
7101e3a94c  ldur x8,[x29, #-0x88]
7101e3a950  ldr x0,[x8]
7101e3a954  mov w1,wzr
7101e3a958  bl 0x710377aa20
7101e3a95c  ldur x0,[x29, #-0x88]
7101e3a960  stp x25,xzr,[x29, #-0x90]
7101e3a964  cbz x0,0x7101e3a96c
7101e3a968  bl 0x710392eb40
7101e3a96c  adrp x1,0x710436a000
7101e3a970  add x1,x1,#0xc27
7101e3a974  mov w2,#0x9
7101e3a978  sub x8,x29,#0x90
7101e3a97c  add x0,sp,#0xf0
7101e3a980  bl 0x7103776910
7101e3a984  ldur x8,[x29, #-0x88]
7101e3a988  ldr x0,[x8]
7101e3a98c  mov w1,wzr
7101e3a990  bl 0x710377aa20
7101e3a994  ldur x0,[x29, #-0x88]
7101e3a998  stp x25,xzr,[x29, #-0x90]
7101e3a99c  cbz x0,0x7101e3a9a4
7101e3a9a0  bl 0x710392eb40
7101e3a9a4  adrp x1,0x710436a000
7101e3a9a8  add x1,x1,#0xc27
7101e3a9ac  mov w2,#0xa
7101e3a9b0  sub x8,x29,#0x90
7101e3a9b4  add x0,sp,#0xf0
7101e3a9b8  bl 0x7103776910
7101e3a9bc  ldur x8,[x29, #-0x88]
7101e3a9c0  ldr x0,[x8]
7101e3a9c4  mov w1,wzr
7101e3a9c8  bl 0x710377aa20
7101e3a9cc  ldur x0,[x29, #-0x88]
7101e3a9d0  stp x25,xzr,[x29, #-0x90]
7101e3a9d4  cbz x0,0x7101e3a9dc
7101e3a9d8  bl 0x710392eb40
7101e3a9dc  adrp x1,0x710436a000
7101e3a9e0  add x1,x1,#0xc27
7101e3a9e4  mov w2,#0xb
7101e3a9e8  sub x8,x29,#0x90
7101e3a9ec  add x0,sp,#0xf0
7101e3a9f0  bl 0x7103776910
7101e3a9f4  ldur x8,[x29, #-0x88]
7101e3a9f8  ldr x0,[x8]
7101e3a9fc  mov w1,wzr
7101e3aa00  bl 0x710377aa20
7101e3aa04  ldur x0,[x29, #-0x88]
7101e3aa08  stp x25,xzr,[x29, #-0x90]
7101e3aa0c  cbz x0,0x7101e3aa14
7101e3aa10  bl 0x710392eb40
7101e3aa14  adrp x1,0x710436a000
7101e3aa18  add x1,x1,#0xc27
7101e3aa1c  sub x8,x29,#0x90
7101e3aa20  add x0,sp,#0xf0
7101e3aa24  orr w2,wzr,#0xc
7101e3aa28  bl 0x7103776910
7101e3aa2c  ldur x8,[x29, #-0x88]
7101e3aa30  ldr x0,[x8]
7101e3aa34  mov w1,wzr
7101e3aa38  bl 0x710377aa20
7101e3aa3c  ldur x0,[x29, #-0x88]
7101e3aa40  stp x25,xzr,[x29, #-0x90]
7101e3aa44  cbz x0,0x7101e3aa4c
7101e3aa48  bl 0x710392eb40
7101e3aa4c  adrp x1,0x710436a000
7101e3aa50  add x1,x1,#0xc27
7101e3aa54  mov w2,#0xd
7101e3aa58  sub x8,x29,#0x90
7101e3aa5c  add x0,sp,#0xf0
7101e3aa60  bl 0x7103776910
7101e3aa64  ldur x8,[x29, #-0x88]
7101e3aa68  ldr x0,[x8]
7101e3aa6c  mov w1,wzr
7101e3aa70  bl 0x710377aa20
7101e3aa74  ldur x0,[x29, #-0x88]
7101e3aa78  stp x25,xzr,[x29, #-0x90]
7101e3aa7c  cbz x0,0x7101e3aa84
7101e3aa80  bl 0x710392eb40
7101e3aa84  adrp x1,0x710436a000
7101e3aa88  add x1,x1,#0xc27
7101e3aa8c  sub x8,x29,#0x90
7101e3aa90  add x0,sp,#0xf0
7101e3aa94  orr w2,wzr,#0xe
7101e3aa98  bl 0x7103776910
7101e3aa9c  ldur x8,[x29, #-0x88]
7101e3aaa0  ldr x0,[x8]
7101e3aaa4  mov w1,wzr
7101e3aaa8  bl 0x710377aa20
7101e3aaac  ldur x0,[x29, #-0x88]
7101e3aab0  stp x25,xzr,[x29, #-0x90]
7101e3aab4  cbz x0,0x7101e3aabc
7101e3aab8  bl 0x710392eb40
7101e3aabc  adrp x1,0x710436a000
7101e3aac0  add x1,x1,#0xc27
7101e3aac4  sub x8,x29,#0x90
7101e3aac8  add x0,sp,#0xf0
7101e3aacc  orr w2,wzr,#0xf
7101e3aad0  bl 0x7103776910
7101e3aad4  ldur x8,[x29, #-0x88]
7101e3aad8  ldr x0,[x8]
7101e3aadc  mov w1,wzr
7101e3aae0  bl 0x710377aa20
7101e3aae4  ldur x0,[x29, #-0x88]
7101e3aae8  stp x25,xzr,[x29, #-0x90]
7101e3aaec  cbz x0,0x7101e3aaf4
7101e3aaf0  bl 0x710392eb40
7101e3aaf4  adrp x1,0x71042c5000
7101e3aaf8  add x1,x1,#0x3ec
7101e3aafc  add x8,sp,#0xe0
7101e3ab00  mov x0,x24
7101e3ab04  bl 0x7103776640
7101e3ab08  fmov s8,0x3f800000
7101e3ab0c  ldr x0,[sp, #0xe8]
7101e3ab10  mov x1,x19
7101e3ab14  mov v0.16B,v8.16B
7101e3ab18  str x0,[sp, #0x38]
7101e3ab1c  bl 0x7103778300
7101e3ab20  adrp x1,0x7104308000
7101e3ab24  add x1,x1,#0xa24
7101e3ab28  add x8,sp,#0xd0
7101e3ab2c  mov x0,x24
7101e3ab30  bl 0x7103776640
7101e3ab34  ldr x0,[sp, #0xd8]
7101e3ab38  mov v0.16B,v8.16B
7101e3ab3c  adrp x19,0x71043cd000
7101e3ab40  add x19,x19,#0x335
7101e3ab44  mov x1,x19
7101e3ab48  str x0,[sp, #0x30]
7101e3ab4c  bl 0x7103778300
7101e3ab50  adrp x1,0x710433a000
7101e3ab54  add x1,x1,#0x6bd
7101e3ab58  add x8,sp,#0xc0
7101e3ab5c  mov x0,x24
7101e3ab60  bl 0x7103776640
7101e3ab64  ldr x0,[sp, #0xc8]
7101e3ab68  mov v0.16B,v8.16B
7101e3ab6c  mov x1,x19
7101e3ab70  str x0,[sp, #0x18]
7101e3ab74  bl 0x7103778300
7101e3ab78  adrp x1,0x7104455000
7101e3ab7c  add x1,x1,#0x6b
7101e3ab80  add x8,sp,#0xb0
7101e3ab84  mov x0,x24
7101e3ab88  bl 0x7103776640
7101e3ab8c  ldp x8,x9,[x23, #0x8]
7101e3ab90  sub x9,x9,x8
7101e3ab94  asr x9,x9,#0x3
7101e3ab98  cmp x9,x28
7101e3ab9c  b.ls 0x7101e3b6b8
7101e3aba0  adrp x19,0x7105329000
7101e3aba4  ldr x9,[x19, #0xf98]
7101e3aba8  ldr x9,[x9]
7101e3abac  ldr x8,[x8, x28, LSL #0x3]
7101e3abb0  ldrh w1,[x8]
7101e3abb4  add x0,x9,#0x38
7101e3abb8  bl 0x710251a7e0
7101e3abbc  ldr x8,[sp, #0xb8]
7101e3abc0  str x22,[sp, #0x58]
7101e3abc4  str x8,[sp, #0x28]
7101e3abc8  tbz w0,#0x0,0x7101e3abd8
7101e3abcc  adrp x1,0x7104292000
7101e3abd0  add x1,x1,#0x57e
7101e3abd4  b 0x7101e3abe0
7101e3abd8  adrp x1,0x71043cd000
7101e3abdc  add x1,x1,#0x335
7101e3abe0  fmov s0,0x3f800000
7101e3abe4  mov x0,x8
7101e3abe8  bl 0x7103778300
7101e3abec  adrp x1,0x7104292000
7101e3abf0  add x1,x1,#0x272
7101e3abf4  add x8,sp,#0xa0
7101e3abf8  mov x0,x24
7101e3abfc  bl 0x7103776640
7101e3ac00  fmov s8,0x3f800000
7101e3ac04  ldr x0,[sp, #0xa8]
7101e3ac08  adrp x22,0x71043cd000
7101e3ac0c  add x22,x22,#0x335
7101e3ac10  mov x1,x22
7101e3ac14  mov v0.16B,v8.16B
7101e3ac18  mov x20,x0
7101e3ac1c  bl 0x7103778300
7101e3ac20  adrp x1,0x71042a3000
7101e3ac24  add x1,x1,#0x598
7101e3ac28  add x8,sp,#0x90
7101e3ac2c  mov x0,x24
7101e3ac30  bl 0x7103776640
7101e3ac34  ldr x0,[sp, #0x98]
7101e3ac38  mov v0.16B,v8.16B
7101e3ac3c  mov x1,x22
7101e3ac40  str x0,[sp, #0x20]
7101e3ac44  bl 0x7103778300
7101e3ac48  adrp x1,0x7104401000
7101e3ac4c  add x1,x1,#0xaa2
7101e3ac50  add x8,sp,#0x80
7101e3ac54  mov x0,x24
7101e3ac58  bl 0x7103776640
7101e3ac5c  ldr x0,[sp, #0x88]
7101e3ac60  mov v0.16B,v8.16B
7101e3ac64  mov x1,x22
7101e3ac68  mov x27,x0
7101e3ac6c  bl 0x7103778300
7101e3ac70  adrp x1,0x7104327000
7101e3ac74  add x1,x1,#0xe94
7101e3ac78  add x8,sp,#0x70
7101e3ac7c  mov x0,x24
7101e3ac80  bl 0x7103776640
7101e3ac84  adrp x8,0x710532f000
7101e3ac88  ldr x8,[x8, #0x730]
7101e3ac8c  ldr x8,[x8, #0x8]
7101e3ac90  ldr x8,[x8, #0x1d8]
7101e3ac94  ldur w9,[x29, #-0x54]
7101e3ac98  cbz w9,0x7101e3acf8
7101e3ac9c  add x9,x8,x21, LSL #0x1
7101e3aca0  ldrh w10,[x9, #0x60]
7101e3aca4  mov w12,#0xcccd
7101e3aca8  movk w12,#0xcccc, LSL #16
7101e3acac  ldp x9,x11,[x8, #0x20]
7101e3acb0  sub x11,x11,x9
7101e3acb4  lsr x11,x11,#0x6
7101e3acb8  mul w11,w11,w12
7101e3acbc  cmp w11,w10
7101e3acc0  b.ls 0x7101e3acf8
7101e3acc4  add x10,x8,x10, LSL #0x1
7101e3acc8  ldrh w10,[x10, #0x1000]
7101e3accc  cmp w11,w10
7101e3acd0  b.ls 0x7101e3acf8
7101e3acd4  mov w11,#0x140
7101e3acd8  mul x10,x10,x11
7101e3acdc  ldrsh w9,[x9, x10, LSL #0x0]
7101e3ace0  cmn w9,#0x1
7101e3ace4  b.eq 0x7101e3acf8
7101e3ace8  ldr x22,[sp, #0x78]
7101e3acec  adrp x1,0x710437a000
7101e3acf0  add x1,x1,#0x53a
7101e3acf4  b 0x7101e3ad60
7101e3acf8  cmn w21,#0x1
7101e3acfc  b.eq 0x7101e3ad0c
7101e3ad00  add x9,x8,x21, LSL #0x1
7101e3ad04  ldrh w9,[x9, #0x60]
7101e3ad08  b 0x7101e3ad10
7101e3ad0c  mov w9,#0xffffffff
7101e3ad10  ldp x10,x8,[x8, #0x20]
7101e3ad14  sub x8,x8,x10
7101e3ad18  orr x11,xzr,#-0x3333333333333334
7101e3ad1c  movk x11,#0xcccd
7101e3ad20  asr x8,x8,#0x6
7101e3ad24  mul x8,x8,x11
7101e3ad28  mov w11,#0x140
7101e3ad2c  madd x10,x9,x11,x10
7101e3ad30  cmp x8,x9
7101e3ad34  adrp x8,0x7105182000
7101e3ad38  add x8,x8,#0xb08
7101e3ad3c  csel x8,x10,x8,hi
7101e3ad40  ldrh w8,[x8, #0x90]
7101e3ad44  ldr x22,[sp, #0x78]
7101e3ad48  cbz w8,0x7101e3ad58
7101e3ad4c  adrp x1,0x7104463000
7101e3ad50  add x1,x1,#0x92a
7101e3ad54  b 0x7101e3ad60
7101e3ad58  adrp x1,0x71043cd000
7101e3ad5c  add x1,x1,#0x335
7101e3ad60  fmov s0,0x3f800000
7101e3ad64  mov x0,x22
7101e3ad68  bl 0x7103778300
7101e3ad6c  mov x9,x23
7101e3ad70  ldp x8,x9,[x23, #0x8]
7101e3ad74  sub x9,x9,x8
7101e3ad78  asr x9,x9,#0x3
7101e3ad7c  cmp x9,x28
7101e3ad80  b.ls 0x7101e3b6b8
7101e3ad84  ldr x9,[x19, #0xf98]
7101e3ad88  ldr x8,[x8, x28, LSL #0x3]
7101e3ad8c  ldr x19,[x9]
7101e3ad90  ldrh w9,[x8]
7101e3ad94  ldr x8,[x19, #0x30]
7101e3ad98  ubfx x10,x9,#0x4,#0x1c
7101e3ad9c  cmp w10,#0x177
7101e3ada0  b.cc 0x7101e3adf0
7101e3ada4  mov w10,#0xffffe890
7101e3ada8  add w9,w9,w10
7101e3adac  and w10,w9,#0xffff
7101e3adb0  adrp x28,0x710532a000
7101e3adb4  add x28,x28,#0x878
7101e3adb8  cmp w10,#0x63
7101e3adbc  b.hi 0x7101e3ae04
7101e3adc0  and x9,x9,#0xffff
7101e3adc4  mov w10,#0x50
7101e3adc8  madd x8,x9,x10,x8
7101e3adcc  mov w10,#0x8cc8
7101e3add0  movk w10,#0x8, LSL #16
7101e3add4  mov w9,#0x8cc0
7101e3add8  movk w9,#0x8, LSL #16
7101e3addc  ldrsh w10,[x8, x10, LSL #0x0]
7101e3ade0  add x8,x8,x9
7101e3ade4  cmn w10,#0x1
7101e3ade8  csel x28,x28,x8,eq
7101e3adec  b 0x7101e3ae04
7101e3adf0  mov w10,#0x50
7101e3adf4  madd x8,x9,x10,x8
7101e3adf8  mov w9,#0x1940
7101e3adfc  movk w9,#0x1, LSL #16
7101e3ae00  add x28,x8,x9
7101e3ae04  adrp x1,0x7104443000
7101e3ae08  add x1,x1,#0xd28
7101e3ae0c  add x8,sp,#0x60
7101e3ae10  mov x0,x24
7101e3ae14  bl 0x7103776640
7101e3ae18  ldrb w8,[x28, #0x3e]
7101e3ae1c  ldr x28,[sp, #0x68]
7101e3ae20  tbnz w8,#0x0,0x7101e3ae30
7101e3ae24  adrp x1,0x71043cd000
7101e3ae28  add x1,x1,#0x335
7101e3ae2c  b 0x7101e3ae38
7101e3ae30  adrp x1,0x7104292000
7101e3ae34  add x1,x1,#0x57e
7101e3ae38  fmov s0,0x3f800000
7101e3ae3c  mov x0,x28
7101e3ae40  bl 0x7103778300
7101e3ae44  ldur w8,[x29, #-0x54]
7101e3ae48  cbz w8,0x7101e3aeb0
7101e3ae4c  adrp x8,0x710532f000
7101e3ae50  ldr x8,[x8, #0x730]
7101e3ae54  ldr x8,[x8, #0x8]
7101e3ae58  ldr x8,[x8, #0x1d8]
7101e3ae5c  add x9,x8,x21, LSL #0x1
7101e3ae60  ldrh w9,[x9, #0x60]
7101e3ae64  ldp x10,x8,[x8, #0x20]
7101e3ae68  sub x8,x8,x10
7101e3ae6c  mov w10,#0xcccd
7101e3ae70  movk w10,#0xcccc, LSL #16
7101e3ae74  lsr x8,x8,#0x6
7101e3ae78  mul w8,w8,w10
7101e3ae7c  cmp w8,w9
7101e3ae80  b.ls 0x7101e3aeb0
7101e3ae84  ldr x8,[x19, #0x30]
7101e3ae88  mov w9,#0x24
7101e3ae8c  madd x8,x21,x9,x8
7101e3ae90  ldrh w8,[x8, #0x20]
7101e3ae94  cbz w8,0x7101e3aeb0
7101e3ae98  ldr x0,[x24, #0x8]
7101e3ae9c  fmov s0,0x3f800000
7101e3aea0  adrp x1,0x71042d6000
7101e3aea4  add x1,x1,#0x8b4
7101e3aea8  bl 0x7103778300
7101e3aeac  b 0x7101e3aef8
7101e3aeb0  ldr x0,[x24, #0x8]
7101e3aeb4  fmov s0,0x3f800000
7101e3aeb8  adrp x1,0x71043be000
7101e3aebc  add x1,x1,#0xc15
7101e3aec0  bl 0x7103778300
7101e3aec4  adrp x1,0x7104443000
7101e3aec8  add x1,x1,#0xd40
7101e3aecc  sub x8,x29,#0x90
7101e3aed0  mov x0,x24
7101e3aed4  bl 0x7103776910
7101e3aed8  adrp x1,0x71043ad000
7101e3aedc  add x1,x1,#0xd57
7101e3aee0  sub x0,x29,#0x90
7101e3aee4  bl 0x710377a120
7101e3aee8  ldur x0,[x29, #-0x88]
7101e3aeec  stp x25,xzr,[x29, #-0x90]
7101e3aef0  cbz x0,0x7101e3aef8
7101e3aef4  bl 0x710392eb40
7101e3aef8  mov x0,x26
7101e3aefc  bl 0x7101e3b6d0
7101e3af00  tbz w0,#0x0,0x7101e3af20
7101e3af04  ldr x0,[x24, #0x8]
7101e3af08  fmov s0,0x3f800000
7101e3af0c  adrp x1,0x7104281000
7101e3af10  add x1,x1,#0x86
7101e3af14  bl 0x7103778300
7101e3af18  mov x26,x20
7101e3af1c  b 0x7101e3af8c
7101e3af20  ldur w8,[x29, #-0x54]
7101e3af24  mov x26,x20
7101e3af28  cbz w8,0x7101e3af78
7101e3af2c  adrp x8,0x710532f000
7101e3af30  ldr x8,[x8, #0x730]
7101e3af34  ldr x8,[x8, #0x8]
7101e3af38  ldr x8,[x8, #0x1d8]
7101e3af3c  add x9,x8,x21, LSL #0x1
7101e3af40  ldrh w9,[x9, #0x60]
7101e3af44  ldp x10,x8,[x8, #0x20]
7101e3af48  sub x8,x8,x10
7101e3af4c  mov w10,#0xcccd
7101e3af50  movk w10,#0xcccc, LSL #16
7101e3af54  lsr x8,x8,#0x6
7101e3af58  mul w8,w8,w10
7101e3af5c  cmp w8,w9
7101e3af60  b.ls 0x7101e3af78
7101e3af64  ldr x8,[x19, #0x30]
7101e3af68  mov w9,#0x24
7101e3af6c  madd x8,x21,x9,x8
7101e3af70  ldrb w8,[x8, #0x1]
7101e3af74  tbnz w8,#0x3,0x7101e3aff4
7101e3af78  ldr x0,[x24, #0x8]
7101e3af7c  adrp x1,0x7104270000
7101e3af80  add x1,x1,#0x562
7101e3af84  fmov s0,0x3f800000
7101e3af88  bl 0x7103778300
7101e3af8c  ldr w8,[x23, #0x50]
7101e3af90  mov x20,x27
7101e3af94  ldr x27,[sp, #0x18]
7101e3af98  cmp w8,#0x14
7101e3af9c  b.hi 0x7101e3b4e8
7101e3afa0  adrp x9,0x71044fb000
7101e3afa4  add x9,x9,#0xd60
7101e3afa8  sub x19,x29,#0x90
7101e3afac  ldrsw x8,[x9, x8, LSL #0x2]
7101e3afb0  add x8,x8,x9
7101e3afb4  br x8
7101e3afb8  ldr x0,[x24, #0x8]
7101e3afbc  fmov s0,0x3f800000
7101e3afc0  adrp x1,0x7104292000
7101e3afc4  add x1,x1,#0x287
7101e3afc8  b 0x7101e3b2e8
7101e3afcc  ldr x0,[x24, #0x8]
7101e3afd0  fmov s0,0x3f800000
7101e3afd4  adrp x1,0x710425f000
7101e3afd8  add x1,x1,#0xa2e
7101e3afdc  b 0x7101e3b2e8
7101e3afe0  ldr x0,[x24, #0x8]
7101e3afe4  fmov s0,0x3f800000
7101e3afe8  adrp x1,0x71042f8000
7101e3afec  add x1,x1,#0x8ae
7101e3aff0  b 0x7101e3b2e8
7101e3aff4  ldr x0,[x24, #0x8]
7101e3aff8  adrp x1,0x71042f8000
7101e3affc  add x1,x1,#0x898
7101e3b000  b 0x7101e3af84
7101e3b004  ldr x0,[x24, #0x8]
7101e3b008  fmov s0,0x3f800000
7101e3b00c  adrp x1,0x71043f0000
7101e3b010  add x1,x1,#0xe60
7101e3b014  b 0x7101e3b2e8
7101e3b018  ldr x0,[x24, #0x8]
7101e3b01c  fmov s0,0x3f800000
7101e3b020  adrp x1,0x7104412000
7101e3b024  add x1,x1,#0xeb0
7101e3b028  bl 0x7103778300
7101e3b02c  adrp x1,0x71042c5000
7101e3b030  add x1,x1,#0x401
7101e3b034  sub x8,x29,#0xa0
7101e3b038  mov x0,x24
7101e3b03c  bl 0x7103776910
7101e3b040  ldur w8,[x29, #-0x58]
7101e3b044  cbnz w8,0x7101e3b1d8
7101e3b048  ldr x8,[sp, #0x10]
7101e3b04c  ldr x9,[x23, #0x8]
7101e3b050  and w8,w8,#0xffff
7101e3b054  ldr x8,[x9, w8, UXTW #0x3]
7101e3b058  ldrh w1,[x8, #0x8]
7101e3b05c  ldrh w2,[x8, #0x10]
7101e3b060  mov x8,#0xff0000000000
7101e3b064  movk x8,#0x52ff, LSL #48
7101e3b068  sub x0,x29,#0x90
7101e3b06c  sturb wzr,[x29, #-0x90]
7101e3b070  stur xzr,[x19, #0x4]
7101e3b074  stp x8,xzr,[x29, #-0x80]
7101e3b078  sturh wzr,[x29, #-0x70]
7101e3b07c  bl 0x71025caab0
7101e3b080  ldur s0,[x29, #-0x88]
7101e3b084  fcvtzu w3,s0
7101e3b088  ldur x23,[x29, #-0x98]
7101e3b08c  ldr x8,[x23]
7101e3b090  cbz x8,0x7101e3b0a0
7101e3b094  ldrb w9,[x8, #0x58]
7101e3b098  orr w9,w9,#0x1
7101e3b09c  strb w9,[x8, #0x58]
7101e3b0a0  adrp x1,0x7104292000
7101e3b0a4  add x1,x1,#0x297
7101e3b0a8  b 0x7101e3b4cc
7101e3b0ac  ldr x0,[x24, #0x8]
7101e3b0b0  fmov s0,0x3f800000
7101e3b0b4  adrp x1,0x7104455000
7101e3b0b8  add x1,x1,#0x80
7101e3b0bc  b 0x7101e3b2e8
7101e3b0c0  ldr x0,[x24, #0x8]
7101e3b0c4  fmov s0,0x3f800000
7101e3b0c8  adrp x1,0x710438d000
7101e3b0cc  add x1,x1,#0x8e
7101e3b0d0  b 0x7101e3b2e8
7101e3b0d4  ldr x0,[x24, #0x8]
7101e3b0d8  fmov s0,0x3f800000
7101e3b0dc  adrp x1,0x710438d000
7101e3b0e0  add x1,x1,#0x9c
7101e3b0e4  b 0x7101e3b2e8
7101e3b0e8  ldr x0,[x24, #0x8]
7101e3b0ec  fmov s0,0x3f800000
7101e3b0f0  adrp x1,0x71043e0000
7101e3b0f4  add x1,x1,#0x745
7101e3b0f8  bl 0x7103778300
7101e3b0fc  adrp x1,0x71042c5000
7101e3b100  add x1,x1,#0x401
7101e3b104  sub x8,x29,#0xa0
7101e3b108  mov x0,x24
7101e3b10c  bl 0x7103776910
7101e3b110  ldur w8,[x29, #-0x58]
7101e3b114  cbnz w8,0x7101e3b1d8
7101e3b118  ldr x8,[sp, #0x10]
7101e3b11c  ldr x9,[x23, #0x8]
7101e3b120  and w8,w8,#0xffff
7101e3b124  ldr x8,[x9, w8, UXTW #0x3]
7101e3b128  ldrh w1,[x8, #0x8]
7101e3b12c  ldrh w2,[x8, #0x10]
7101e3b130  mov x8,#0xff0000000000
7101e3b134  movk x8,#0x52ff, LSL #48
7101e3b138  sub x0,x29,#0x90
7101e3b13c  sturb wzr,[x29, #-0x90]
7101e3b140  stur xzr,[x19, #0x4]
7101e3b144  stp x8,xzr,[x29, #-0x80]
7101e3b148  sturh wzr,[x29, #-0x70]
7101e3b14c  bl 0x71025caab0
7101e3b150  ldp s0,s1,[x29, #-0x8c]
7101e3b154  fadd s0,s0,s1
7101e3b158  fcvtzu w3,s0
7101e3b15c  ldur x23,[x29, #-0x98]
7101e3b160  ldr x8,[x23]
7101e3b164  cbz x8,0x7101e3b174
7101e3b168  ldrb w9,[x8, #0x58]
7101e3b16c  orr w9,w9,#0x1
7101e3b170  strb w9,[x8, #0x58]
7101e3b174  adrp x1,0x71043ff000
7101e3b178  add x1,x1,#0x11e
7101e3b17c  b 0x7101e3b4cc
7101e3b180  ldr x0,[x24, #0x8]
7101e3b184  fmov s0,0x3f800000
7101e3b188  adrp x1,0x71043e0000
7101e3b18c  add x1,x1,#0x745
7101e3b190  b 0x7101e3b2e8
7101e3b194  ldr x0,[x24, #0x8]
7101e3b198  fmov s0,0x3f800000
7101e3b19c  adrp x1,0x71042a3000
7101e3b1a0  add x1,x1,#0x5ad
7101e3b1a4  b 0x7101e3b2e8
7101e3b1a8  ldr x0,[x24, #0x8]
7101e3b1ac  fmov s0,0x3f800000
7101e3b1b0  adrp x1,0x7104401000
7101e3b1b4  add x1,x1,#0xab9
7101e3b1b8  bl 0x7103778300
7101e3b1bc  adrp x1,0x71042c5000
7101e3b1c0  add x1,x1,#0x401
7101e3b1c4  sub x8,x29,#0xa0
7101e3b1c8  mov x0,x24
7101e3b1cc  bl 0x7103776910
7101e3b1d0  ldur w8,[x29, #-0x58]
7101e3b1d4  cbz w8,0x7101e3b46c
7101e3b1d8  ldur x23,[x29, #-0x98]
7101e3b1dc  ldr x8,[x23]
7101e3b1e0  cbz x8,0x7101e3b1f0
7101e3b1e4  ldrb w9,[x8, #0x58]
7101e3b1e8  and w9,w9,#0xfe
7101e3b1ec  strb w9,[x8, #0x58]
7101e3b1f0  stp x25,xzr,[x29, #-0xa0]
7101e3b1f4  cbnz x23,0x7101e3b4e0
7101e3b1f8  b 0x7101e3b4e8
7101e3b1fc  ldr x0,[x24, #0x8]
7101e3b200  fmov s0,0x3f800000
7101e3b204  adrp x1,0x7104319000
7101e3b208  add x1,x1,#0x377
7101e3b20c  b 0x7101e3b2e8
7101e3b210  ldr x0,[x24, #0x8]
7101e3b214  fmov s0,0x3f800000
7101e3b218  adrp x1,0x71043ad000
7101e3b21c  add x1,x1,#0xd73
7101e3b220  b 0x7101e3b2e8
7101e3b224  ldr x0,[x24, #0x8]
7101e3b228  fmov s0,0x3f800000
7101e3b22c  adrp x1,0x71042c5000
7101e3b230  add x1,x1,#0x414
7101e3b234  bl 0x7103778300
7101e3b238  adrp x1,0x710424f000
7101e3b23c  add x1,x1,#0xae5
7101e3b240  sub x8,x29,#0x90
7101e3b244  mov x0,x24
7101e3b248  bl 0x7103776910
7101e3b24c  ldur w8,[x29, #-0x58]
7101e3b250  cbnz w8,0x7101e3b448
7101e3b254  ldr x9,[sp, #0x10]
7101e3b258  adrp x8,0x710532f000
7101e3b25c  ldr x10,[x23, #0x8]
7101e3b260  ldr x8,[x8, #0x730]
7101e3b264  and w9,w9,#0xffff
7101e3b268  ldr x8,[x8, #0x8]
7101e3b26c  ldr x9,[x10, w9, UXTW #0x3]
7101e3b270  ldrsh x9,[x9, #0x8]
7101e3b274  ldr x8,[x8, #0x1d8]
7101e3b278  cmn x9,#0x1
7101e3b27c  b.eq 0x7101e3b288
7101e3b280  add x9,x8,x9, LSL #0x1
7101e3b284  ldrh w9,[x9, #0x60]
7101e3b288  ldp x10,x8,[x8, #0x20]
7101e3b28c  sub x8,x8,x10
7101e3b290  orr x11,xzr,#-0x3333333333333334
7101e3b294  movk x11,#0xcccd
7101e3b298  asr x8,x8,#0x6
7101e3b29c  mul x8,x8,x11
7101e3b2a0  ldur x23,[x29, #-0x88]
7101e3b2a4  mov w11,#0x140
7101e3b2a8  madd x10,x9,x11,x10
7101e3b2ac  cmp x8,x9
7101e3b2b0  ldr x9,[x23]
7101e3b2b4  adrp x8,0x7105182000
7101e3b2b8  add x8,x8,#0xb08
7101e3b2bc  csel x8,x10,x8,hi
7101e3b2c0  cbz x9,0x7101e3b2d0
7101e3b2c4  ldrb w10,[x9, #0x58]
7101e3b2c8  orr w10,w10,#0x1
7101e3b2cc  strb w10,[x9, #0x58]
7101e3b2d0  ldrb w3,[x8, #0x69]
7101e3b2d4  b 0x7101e3b430
7101e3b2d8  ldr x0,[x24, #0x8]
7101e3b2dc  fmov s0,0x3f800000
7101e3b2e0  adrp x1,0x71042a3000
7101e3b2e4  add x1,x1,#0x5bd
7101e3b2e8  bl 0x7103778300
7101e3b2ec  adrp x1,0x710438d000
7101e3b2f0  add x1,x1,#0x369
7101e3b2f4  sub x8,x29,#0x90
7101e3b2f8  mov x0,x24
7101e3b2fc  bl 0x7103776910
7101e3b300  ldur x24,[x29, #-0x88]
7101e3b304  ldr x8,[x24]
7101e3b308  ldur w9,[x29, #-0x58]
7101e3b30c  cbz w9,0x7101e3b32c
7101e3b310  cbz x8,0x7101e3b320
7101e3b314  ldrb w9,[x8, #0x58]
7101e3b318  and w9,w9,#0xfe
7101e3b31c  strb w9,[x8, #0x58]
7101e3b320  stp x25,xzr,[x29, #-0x90]
7101e3b324  cbnz x24,0x7101e3b36c
7101e3b328  b 0x7101e3b4e8
7101e3b32c  cbz x8,0x7101e3b33c
7101e3b330  ldrb w9,[x8, #0x58]
7101e3b334  orr w9,w9,#0x1
7101e3b338  strb w9,[x8, #0x58]
7101e3b33c  ldr x8,[sp, #0x10]
7101e3b340  ldr x9,[x23, #0x8]
7101e3b344  adrp x1,0x71042e4000
7101e3b348  add x1,x1,#0xfdc
7101e3b34c  sub x0,x29,#0x90
7101e3b350  and w8,w8,#0xffff
7101e3b354  ldr x8,[x9, w8, UXTW #0x3]
7101e3b358  ldrh w3,[x8, #0x10]
7101e3b35c  mov w2,#0x1
7101e3b360  bl 0x710377a280
7101e3b364  stp x25,xzr,[x29, #-0x90]
7101e3b368  cbz x24,0x7101e3b4e8
7101e3b36c  mov x0,x24
7101e3b370  b 0x7101e3b4e4
7101e3b374  ldr x0,[x24, #0x8]
7101e3b378  fmov s0,0x3f800000
7101e3b37c  adrp x1,0x71042c5000
7101e3b380  add x1,x1,#0x414
7101e3b384  bl 0x7103778300
7101e3b388  adrp x1,0x710424f000
7101e3b38c  add x1,x1,#0xae5
7101e3b390  sub x8,x29,#0x90
7101e3b394  mov x0,x24
7101e3b398  bl 0x7103776910
7101e3b39c  ldur w8,[x29, #-0x58]
7101e3b3a0  cbz w8,0x7101e3b448
7101e3b3a4  ldr x9,[sp, #0x10]
7101e3b3a8  adrp x8,0x710532f000
7101e3b3ac  ldr x10,[x23, #0x8]
7101e3b3b0  ldr x8,[x8, #0x730]
7101e3b3b4  and w9,w9,#0xffff
7101e3b3b8  ldr x8,[x8, #0x8]
7101e3b3bc  ldr x9,[x10, w9, UXTW #0x3]
7101e3b3c0  ldrsh x10,[x9, #0x8]
7101e3b3c4  ldr x9,[x8, #0x1d8]
7101e3b3c8  cmn x10,#0x1
7101e3b3cc  b.eq 0x7101e3b3d8
7101e3b3d0  add x10,x9,x10, LSL #0x1
7101e3b3d4  ldrh w10,[x10, #0x60]
7101e3b3d8  ldp x11,x9,[x9, #0x20]
7101e3b3dc  sub x9,x9,x11
7101e3b3e0  orr x12,xzr,#-0x3333333333333334
7101e3b3e4  movk x12,#0xcccd
7101e3b3e8  asr x9,x9,#0x6
7101e3b3ec  mul x9,x9,x12
7101e3b3f0  mov w12,#0x140
7101e3b3f4  madd x11,x10,x12,x11
7101e3b3f8  cmp x9,x10
7101e3b3fc  adrp x9,0x7105182000
7101e3b400  add x9,x9,#0xb08
7101e3b404  csel x9,x11,x9,hi
7101e3b408  ldr x0,[x8, #0x218]
7101e3b40c  ldrh w1,[x9, #0x6a]
7101e3b410  bl 0x71032a0fd0
7101e3b414  ldur x23,[x29, #-0x88]
7101e3b418  ldr x8,[x23]
7101e3b41c  cbz x8,0x7101e3b42c
7101e3b420  ldrb w9,[x8, #0x58]
7101e3b424  orr w9,w9,#0x1
7101e3b428  strb w9,[x8, #0x58]
7101e3b42c  and w3,w0,#0xff
7101e3b430  adrp x1,0x7104319000
7101e3b434  add x1,x1,#0x388
7101e3b438  sub x0,x29,#0x90
7101e3b43c  mov w2,#0x1
7101e3b440  bl 0x710377a280
7101e3b444  b 0x7101e3b460
7101e3b448  ldur x23,[x29, #-0x88]
7101e3b44c  ldr x8,[x23]
7101e3b450  cbz x8,0x7101e3b460
7101e3b454  ldrb w9,[x8, #0x58]
7101e3b458  and w9,w9,#0xfe
7101e3b45c  strb w9,[x8, #0x58]
7101e3b460  stp x25,xzr,[x29, #-0x90]
7101e3b464  cbnz x23,0x7101e3b4e0
7101e3b468  b 0x7101e3b4e8
7101e3b46c  ldr x8,[sp, #0x10]
7101e3b470  ldr x9,[x23, #0x8]
7101e3b474  and w8,w8,#0xffff
7101e3b478  ldr x8,[x9, w8, UXTW #0x3]
7101e3b47c  ldrh w1,[x8, #0x8]
7101e3b480  ldrh w2,[x8, #0x10]
7101e3b484  mov x8,#0xff0000000000
7101e3b488  movk x8,#0x52ff, LSL #48
7101e3b48c  sub x0,x29,#0x90
7101e3b490  sturb wzr,[x29, #-0x90]
7101e3b494  stur xzr,[x19, #0x4]
7101e3b498  stp x8,xzr,[x29, #-0x80]
7101e3b49c  sturh wzr,[x29, #-0x70]
7101e3b4a0  bl 0x71025caab0
7101e3b4a4  ldur s0,[x29, #-0x8c]
7101e3b4a8  fcvtzu w3,s0
7101e3b4ac  ldur x23,[x29, #-0x98]
7101e3b4b0  ldr x8,[x23]
7101e3b4b4  cbz x8,0x7101e3b4c4
7101e3b4b8  ldrb w9,[x8, #0x58]
7101e3b4bc  orr w9,w9,#0x1
7101e3b4c0  strb w9,[x8, #0x58]
7101e3b4c4  adrp x1,0x7104412000
7101e3b4c8  add x1,x1,#0xe94
7101e3b4cc  sub x0,x29,#0xa0
7101e3b4d0  mov w2,#0x1
7101e3b4d4  bl 0x710377a280
7101e3b4d8  stp x25,xzr,[x29, #-0xa0]
7101e3b4dc  cbz x23,0x7101e3b4e8
7101e3b4e0  mov x0,x23
7101e3b4e4  bl 0x710392eb40
7101e3b4e8  ldp x24,x23,[sp, #0x30]
7101e3b4ec  adrp x21,0x710523d000
7101e3b4f0  add x21,x21,#0x988
7101e3b4f4  stp x21,xzr,[sp, #0x60]
7101e3b4f8  cbz x28,0x7101e3b514
7101e3b4fc  ldr x0,[x28, #0x18]
7101e3b500  stp x25,xzr,[x28, #0x10]
7101e3b504  cbz x0,0x7101e3b50c
7101e3b508  bl 0x710392eb40
7101e3b50c  mov x0,x28
7101e3b510  bl 0x710392eb40
7101e3b514  ldr x28,[sp, #0x20]
7101e3b518  stp x21,xzr,[sp, #0x70]
7101e3b51c  cbz x22,0x7101e3b538
7101e3b520  ldr x0,[x22, #0x18]
7101e3b524  stp x25,xzr,[x22, #0x10]
7101e3b528  cbz x0,0x7101e3b530
7101e3b52c  bl 0x710392eb40
7101e3b530  mov x0,x22
7101e3b534  bl 0x710392eb40
7101e3b538  ldr x19,[sp, #0x58]
7101e3b53c  ldr x22,[sp, #0x40]
7101e3b540  stp x21,xzr,[sp, #0x80]
7101e3b544  cbz x20,0x7101e3b560
7101e3b548  ldr x0,[x20, #0x18]
7101e3b54c  stp x25,xzr,[x20, #0x10]
7101e3b550  cbz x0,0x7101e3b558
7101e3b554  bl 0x710392eb40
7101e3b558  mov x0,x20
7101e3b55c  bl 0x710392eb40
7101e3b560  ldr x20,[sp, #0x50]
7101e3b564  stp x21,xzr,[sp, #0x90]
7101e3b568  cbz x28,0x7101e3b584
7101e3b56c  ldr x0,[x28, #0x18]
7101e3b570  stp x25,xzr,[x28, #0x10]
7101e3b574  cbz x0,0x7101e3b57c
7101e3b578  bl 0x710392eb40
7101e3b57c  mov x0,x28
7101e3b580  bl 0x710392eb40
7101e3b584  stp x21,xzr,[sp, #0xa0]
7101e3b588  cbz x26,0x7101e3b5a4
7101e3b58c  ldr x0,[x26, #0x18]
7101e3b590  stp x25,xzr,[x26, #0x10]
7101e3b594  cbz x0,0x7101e3b59c
7101e3b598  bl 0x710392eb40
7101e3b59c  mov x0,x26
7101e3b5a0  bl 0x710392eb40
7101e3b5a4  ldr x8,[sp, #0x28]
7101e3b5a8  stp x21,xzr,[sp, #0xb0]
7101e3b5ac  cbz x8,0x7101e3b5d0
7101e3b5b0  ldr x0,[x8, #0x18]
7101e3b5b4  stp x25,xzr,[x8, #0x10]
7101e3b5b8  cbz x0,0x7101e3b5c8
7101e3b5bc  mov x26,x8
7101e3b5c0  bl 0x710392eb40
7101e3b5c4  mov x8,x26
7101e3b5c8  mov x0,x8
7101e3b5cc  bl 0x710392eb40
7101e3b5d0  stp x21,xzr,[sp, #0xc0]
7101e3b5d4  cbz x27,0x7101e3b5f0
7101e3b5d8  ldr x0,[x27, #0x18]
7101e3b5dc  stp x25,xzr,[x27, #0x10]
7101e3b5e0  cbz x0,0x7101e3b5e8
7101e3b5e4  bl 0x710392eb40
7101e3b5e8  mov x0,x27
7101e3b5ec  bl 0x710392eb40
7101e3b5f0  stp x21,xzr,[sp, #0xd0]
7101e3b5f4  cbz x24,0x7101e3b610
7101e3b5f8  ldr x0,[x24, #0x18]
7101e3b5fc  stp x25,xzr,[x24, #0x10]
7101e3b600  cbz x0,0x7101e3b608
7101e3b604  bl 0x710392eb40
7101e3b608  mov x0,x24
7101e3b60c  bl 0x710392eb40
7101e3b610  stp x21,xzr,[sp, #0xe0]
7101e3b614  cbz x23,0x7101e3b630
7101e3b618  ldr x0,[x23, #0x18]
7101e3b61c  stp x25,xzr,[x23, #0x10]
7101e3b620  cbz x0,0x7101e3b628
7101e3b624  bl 0x710392eb40
7101e3b628  mov x0,x23
7101e3b62c  bl 0x710392eb40
7101e3b630  stp x21,xzr,[sp, #0xf0]
7101e3b634  cbz x22,0x7101e3b650
7101e3b638  ldr x0,[x22, #0x18]
7101e3b63c  stp x25,xzr,[x22, #0x10]
7101e3b640  cbz x0,0x7101e3b648
7101e3b644  bl 0x710392eb40
7101e3b648  mov x0,x22
7101e3b64c  bl 0x710392eb40
7101e3b650  stp x21,xzr,[sp, #0x100]
7101e3b654  ldr x21,[sp, #0x48]
7101e3b658  cbz x21,0x7101e3b674
7101e3b65c  ldr x0,[x21, #0x18]
7101e3b660  stp x25,xzr,[x21, #0x10]
7101e3b664  cbz x0,0x7101e3b66c
7101e3b668  bl 0x710392eb40
7101e3b66c  mov x0,x21
7101e3b670  bl 0x710392eb40
7101e3b674  stp x25,xzr,[x29, #-0xc0]
7101e3b678  cbz x20,0x7101e3b684
7101e3b67c  mov x0,x20
7101e3b680  bl 0x710392eb40
7101e3b684  stp x25,xzr,[x29, #-0xb0]
7101e3b688  cbz x19,0x7101e3b694
7101e3b68c  mov x0,x19
7101e3b690  bl 0x710392eb40
7101e3b694  add sp,sp,#0x200
7101e3b698  ldp x29,x30,[sp, #0x60]
7101e3b69c  ldp x20,x19,[sp, #0x50]
7101e3b6a0  ldp x22,x21,[sp, #0x40]
7101e3b6a4  ldp x24,x23,[sp, #0x30]
7101e3b6a8  ldp x26,x25,[sp, #0x20]
7101e3b6ac  ldp x28,x27,[sp, #0x10]
7101e3b6b0  ldr d8,[sp], #0x70
7101e3b6b4  ret
7101e3b6b8  ldr x0,[sp, #0x8]
7101e3b6bc  bl 0x71039c1330
7101e3b6c0  mov x0,x21
7101e3b6c4  bl 0x71039c1330
