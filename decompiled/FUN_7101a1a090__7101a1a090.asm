// addr:      7101a1a090
// offset:    0x1a1a090
// name:      FUN_7101a1a090
// mangled:   
// size:      5124

7101a1a090  sub sp,sp,#0x1c0
7101a1a094  stp x28,x27,[sp, #0x160]
7101a1a098  stp x26,x25,[sp, #0x170]
7101a1a09c  stp x24,x23,[sp, #0x180]
7101a1a0a0  stp x22,x21,[sp, #0x190]
7101a1a0a4  stp x20,x19,[sp, #0x1a0]
7101a1a0a8  stp x29,x30,[sp, #0x1b0]
7101a1a0ac  add x29,sp,#0x1b0
7101a1a0b0  ldr w8,[x0, #0x16c]
7101a1a0b4  cmp w8,#0x1b
7101a1a0b8  b.ne 0x7101a1b44c
7101a1a0bc  ldr x10,[x0, #0x258]
7101a1a0c0  ldr x9,[x0, #0x250]
7101a1a0c4  sub x10,x10,x9
7101a1a0c8  sxtw x8,w1
7101a1a0cc  asr x10,x10,#0x4
7101a1a0d0  mov x21,x0
7101a1a0d4  cmp x10,x8
7101a1a0d8  b.ls 0x7101a1b484
7101a1a0dc  add x8,x9,x8, LSL #0x4
7101a1a0e0  ldr x8,[x8, #0x8]
7101a1a0e4  ldr x22,[x8, #0x200]
7101a1a0e8  ldr x8,[x21, #0x198]
7101a1a0ec  adrp x10,0x710532f000
7101a1a0f0  ldr x10,[x10, #0x730]
7101a1a0f4  ldr x20,[x10, #0x8]
7101a1a0f8  adrp x1,0x7104307000
7101a1a0fc  add x1,x1,#0xf14
7101a1a100  mov x24,#-0x3f00000000000000
7101a1a104  ldr x19,[x8]
7101a1a108  add x8,sp,#0x98
7101a1a10c  add x23,x19,#0x8
7101a1a110  mov x0,x23
7101a1a114  bl 0x7103776910
7101a1a118  adrp x1,0x7104339000
7101a1a11c  add x1,x1,#0xb8c
7101a1a120  add x8,sp,#0x88
7101a1a124  mov x0,x23
7101a1a128  bl 0x7103776910
7101a1a12c  and x9,x22,#-0x100000000000000
7101a1a130  and x8,x22,#0xffffffffff
7101a1a134  str x22,[sp, #0x30]
7101a1a138  cmp x9,x24
7101a1a13c  ccmp x8,#0x0,#0x4,eq
7101a1a140  b.ne 0x7101a1a27c
7101a1a144  ldr x0,[x19, #0x10]
7101a1a148  fmov s0,0x3f800000
7101a1a14c  adrp x1,0x7104412000
7101a1a150  add x1,x1,#0x2e8
7101a1a154  bl 0x7103778300
7101a1a158  ldr x8,[sp, #0xa0]
7101a1a15c  ldr x0,[x8, #0x10]
7101a1a160  cbz x0,0x7101a1a178
7101a1a164  add x1,sp,#0xa8
7101a1a168  mov w2,wzr
7101a1a16c  mov w3,wzr
7101a1a170  str wzr,[sp, #0xa8]
7101a1a174  bl 0x71037a2270
7101a1a178  ldr x20,[sp, #0x90]
7101a1a17c  ldr x0,[x20, #0x10]
7101a1a180  cbz x0,0x7101a1a198
7101a1a184  add x1,sp,#0xa8
7101a1a188  mov w2,wzr
7101a1a18c  mov w3,wzr
7101a1a190  str wzr,[sp, #0xa8]
7101a1a194  bl 0x71037a2270
7101a1a198  adrp x1,0x71043ad000
7101a1a19c  add x1,x1,#0x164
7101a1a1a0  add x8,sp,#0xa8
7101a1a1a4  mov x0,x23
7101a1a1a8  mov w2,wzr
7101a1a1ac  bl 0x7103776910
7101a1a1b0  ldr x21,[sp, #0xb0]
7101a1a1b4  ldr x0,[x21, #0x10]
7101a1a1b8  cbz x0,0x7101a1a1d0
7101a1a1bc  add x1,sp,#0x40
7101a1a1c0  mov w2,wzr
7101a1a1c4  mov w3,wzr
7101a1a1c8  str wzr,[sp, #0x40]
7101a1a1cc  bl 0x71037a2270
7101a1a1d0  adrp x22,0x710523d000
7101a1a1d4  add x22,x22,#0x9a8
7101a1a1d8  stp x22,xzr,[sp, #0xa8]
7101a1a1dc  cbz x21,0x7101a1a1e8
7101a1a1e0  mov x0,x21
7101a1a1e4  bl 0x710392eb40
7101a1a1e8  adrp x1,0x71043ad000
7101a1a1ec  add x1,x1,#0x164
7101a1a1f0  add x8,sp,#0xa8
7101a1a1f4  mov w2,#0x1
7101a1a1f8  mov x0,x23
7101a1a1fc  bl 0x7103776910
7101a1a200  ldr x21,[sp, #0xb0]
7101a1a204  ldr x0,[x21, #0x10]
7101a1a208  cbz x0,0x7101a1a220
7101a1a20c  add x1,sp,#0x40
7101a1a210  mov w2,wzr
7101a1a214  mov w3,wzr
7101a1a218  str wzr,[sp, #0x40]
7101a1a21c  bl 0x71037a2270
7101a1a220  stp x22,xzr,[sp, #0xa8]
7101a1a224  cbz x21,0x7101a1a230
7101a1a228  mov x0,x21
7101a1a22c  bl 0x710392eb40
7101a1a230  adrp x1,0x71043ad000
7101a1a234  add x1,x1,#0x164
7101a1a238  add x8,sp,#0xa8
7101a1a23c  mov w2,#0x2
7101a1a240  mov x0,x23
7101a1a244  bl 0x7103776910
7101a1a248  ldr x19,[sp, #0xb0]
7101a1a24c  ldr x0,[x19, #0x10]
7101a1a250  cbz x0,0x7101a1a268
7101a1a254  add x1,sp,#0x40
7101a1a258  mov w2,wzr
7101a1a25c  mov w3,wzr
7101a1a260  str wzr,[sp, #0x40]
7101a1a264  bl 0x71037a2270
7101a1a268  stp x22,xzr,[sp, #0xa8]
7101a1a26c  cbz x19,0x7101a1b424
7101a1a270  mov x0,x19
7101a1a274  bl 0x710392eb40
7101a1a278  b 0x7101a1b424
7101a1a27c  ldr x22,[x20, #0x168]
7101a1a280  mov x1,#0x26b0
7101a1a284  movk x1,#0xca41, LSL #16
7101a1a288  movk x1,#0x14, LSL #32
7101a1a28c  mov x0,x22
7101a1a290  mov w28,#0x9dc5
7101a1a294  movk w28,#0x811c, LSL #16
7101a1a298  bl 0x71032631a0
7101a1a29c  and x8,x0,#-0x100000000000000
7101a1a2a0  and x9,x0,#0xffffffffff
7101a1a2a4  str x20,[sp, #0x18]
7101a1a2a8  cmp x8,x24
7101a1a2ac  b.ne 0x7101a1a2c8
7101a1a2b0  cbz x9,0x7101a1a2c8
7101a1a2b4  ldr x8,[sp, #0x30]
7101a1a2b8  eor x8,x0,x8
7101a1a2bc  tst x8,#0xffffffffff
7101a1a2c0  b.ne 0x7101a1a394
7101a1a2c4  b 0x7101a1a2d4
7101a1a2c8  cbz x9,0x7101a1a394
7101a1a2cc  cmp x8,x24
7101a1a2d0  b.ne 0x7101a1a394
7101a1a2d4  mov x9,#0x656d
7101a1a2d8  movk x9,#0x5f6c, LSL #16
7101a1a2dc  movk x9,#0x6863, LSL #32
7101a1a2e0  movk x9,#0x7261, LSL #48
7101a1a2e4  str x9,[sp, #0x48]
7101a1a2e8  mov x9,#0x5f61
7101a1a2ec  movk x9,#0x6573, LSL #16
7101a1a2f0  movk x9,#0x656c, LSL #32
7101a1a2f4  movk x9,#0x7463, LSL #48
7101a1a2f8  str x9,[sp, #0x50]
7101a1a2fc  mov w9,#0x735f
7101a1a300  strh w9,[sp, #0x58]
7101a1a304  mov x9,#0x616d
7101a1a308  movk x9,#0x6e6b, LSL #16
7101a1a30c  movk x9,#0x776f, LSL #32
7101a1a310  movk x9,#0x656c, LSL #48
7101a1a314  stur x9,[sp, #0x5a]
7101a1a318  mov w9,#0x6764
7101a1a31c  movk w9,#0x5f65, LSL #16
7101a1a320  stur w9,[sp, #0x62]
7101a1a324  mov w9,#0x7270
7101a1a328  strh w9,[sp, #0x66]
7101a1a32c  mov x9,#0x7665
7101a1a330  movk x9,#0x745f, LSL #16
7101a1a334  mov x8,#0x2c00000000
7101a1a338  str x8,[sp, #0x40]
7101a1a33c  add x8,sp,#0x40
7101a1a340  add x2,x8,#0x8
7101a1a344  strb wzr,[sp, #0x74]
7101a1a348  add x8,x8,#0x9
7101a1a34c  movk x9,#0x7469, LSL #32
7101a1a350  movk x9,#0x656c, LSL #48
7101a1a354  str x9,[sp, #0x68]
7101a1a358  mov w9,#0x615f
7101a1a35c  movk w9,#0x6c6c, LSL #16
7101a1a360  str w9,[sp, #0x70]
7101a1a364  mov w10,#0x6d
7101a1a368  mov w9,#0x89
7101a1a36c  mov w11,w28
7101a1a370  mul w11,w11,w9
7101a1a374  and w10,w10,#0xff
7101a1a378  eor w11,w11,w10
7101a1a37c  ldrb w10,[x8], #0x1
7101a1a380  cbnz w10,0x7101a1a370
7101a1a384  mov w8,#0x1
7101a1a388  str w11,[sp, #0x40]
7101a1a38c  str w8,[sp, #0xc]
7101a1a390  b 0x7101a1a3e4
7101a1a394  ldr x24,[sp, #0x30]
7101a1a398  mov x0,x22
7101a1a39c  mov w2,wzr
7101a1a3a0  mov x1,x24
7101a1a3a4  bl 0x7103263540
7101a1a3a8  ldr x1,[x20, #0x168]
7101a1a3ac  mov w22,w0
7101a1a3b0  add x0,sp,#0xa8
7101a1a3b4  mov x2,x24
7101a1a3b8  add x20,sp,#0xa8
7101a1a3bc  bl 0x7103262310
7101a1a3c0  add x2,x20,#0x8
7101a1a3c4  adrp x0,0x710439b000
7101a1a3c8  add x0,x0,#0x815
7101a1a3cc  add x8,sp,#0x40
7101a1a3d0  mov w1,w22
7101a1a3d4  add x20,sp,#0x40
7101a1a3d8  bl 0x71003a4ca0
7101a1a3dc  str wzr,[sp, #0xc]
7101a1a3e0  add x2,x20,#0x8
7101a1a3e4  add x0,sp,#0x98
7101a1a3e8  mov w1,#0x1
7101a1a3ec  bl 0x710377a310
7101a1a3f0  adrp x8,0x710532f000
7101a1a3f4  ldr x0,[x8, #0x8e0]
7101a1a3f8  str x21,[sp, #0x28]
7101a1a3fc  cbz x0,0x7101a1a46c
7101a1a400  ldrb w2,[x21, #0xf83]
7101a1a404  ldr x21,[sp, #0x30]
7101a1a408  add x3,sp,#0xa8
7101a1a40c  sub x4,x29,#0x78
7101a1a410  mov x1,x21
7101a1a414  str xzr,[sp, #0xa8]
7101a1a418  stp xzr,xzr,[sp, #0xb0]
7101a1a41c  bl 0x710333dea0
7101a1a420  ldp x0,x8,[sp, #0xa8]
7101a1a424  sub x8,x8,x0
7101a1a428  lsr x8,x8,#0x4
7101a1a42c  mov w9,#0xaaab
7101a1a430  movk w9,#0xaaaa, LSL #16
7101a1a434  mul w22,w8,w9
7101a1a438  cbz x0,0x7101a1a444
7101a1a43c  str x0,[sp, #0xb0]
7101a1a440  bl 0x710392eb40
7101a1a444  add x0,sp,#0x88
7101a1a448  mov w1,#0x1
7101a1a44c  mov w2,w22
7101a1a450  bl 0x710377a310
7101a1a454  cmp w22,#0x4
7101a1a458  b.lt 0x7101a1a480
7101a1a45c  ldr x0,[x19, #0x10]
7101a1a460  adrp x1,0x71042d5000
7101a1a464  add x1,x1,#0xc34
7101a1a468  b 0x7101a1a48c
7101a1a46c  add x0,sp,#0x88
7101a1a470  mov w1,#0x1
7101a1a474  mov w2,wzr
7101a1a478  bl 0x710377a310
7101a1a47c  ldr x21,[sp, #0x30]
7101a1a480  ldr x0,[x19, #0x10]
7101a1a484  adrp x1,0x710425e000
7101a1a488  add x1,x1,#0xd4b
7101a1a48c  fmov s0,0x3f800000
7101a1a490  bl 0x7103778300
7101a1a494  adrp x8,0x710532f000
7101a1a498  ldr x8,[x8, #0x730]
7101a1a49c  ldr x26,[x8, #0x8]
7101a1a4a0  stp xzr,xzr,[x29, #-0x70]
7101a1a4a4  stur xzr,[x29, #-0x78]
7101a1a4a8  ldr x24,[x26, #0x168]
7101a1a4ac  mov x1,#0xb807
7101a1a4b0  movk x1,#0xb1cc, LSL #16
7101a1a4b4  movk x1,#0x11, LSL #32
7101a1a4b8  mov x0,x24
7101a1a4bc  bl 0x71032631a0
7101a1a4c0  and x8,x0,#-0x100000000000000
7101a1a4c4  mov x10,#-0x3f00000000000000
7101a1a4c8  and x9,x0,#0xffffffffff
7101a1a4cc  cmp x8,x10
7101a1a4d0  ccmp x9,#0x0,#0x4,eq
7101a1a4d4  str x23,[sp, #0x20]
7101a1a4d8  b.ne 0x7101a1a65c
7101a1a4dc  cbz x9,0x7101a1a668
7101a1a4e0  mov x9,#-0x3f00000000000000
7101a1a4e4  cmp x8,x9
7101a1a4e8  b.ne 0x7101a1a668
7101a1a4ec  mov x1,#0xc82e
7101a1a4f0  movk x1,#0x80f1, LSL #16
7101a1a4f4  movk x1,#0x12, LSL #32
7101a1a4f8  mov x0,x24
7101a1a4fc  bl 0x71032631a0
7101a1a500  mov x23,x0
7101a1a504  mov w0,#0x10
7101a1a508  mov w1,#0x8
7101a1a50c  bl 0x710392e290
7101a1a510  mov x24,x0
7101a1a514  cbnz x0,0x7101a1a560
7101a1a518  adrp x8,0x7105332000
7101a1a51c  ldr x0,[x8, #0xf00]
7101a1a520  cbz x0,0x7101a1a55c
7101a1a524  mov w8,#0x8
7101a1a528  stur wzr,[x29, #-0x90]
7101a1a52c  sub x1,x29,#0x90
7101a1a530  str x8,[sp, #0xa8]
7101a1a534  ldr x8,[x0]
7101a1a538  ldr x8,[x8, #0x30]
7101a1a53c  add x2,sp,#0xa8
7101a1a540  blr x8
7101a1a544  tbz w0,#0x0,0x7101a1a55c
7101a1a548  mov w0,#0x10
7101a1a54c  mov w1,#0x8
7101a1a550  bl 0x710392e290
7101a1a554  mov x24,x0
7101a1a558  cbnz x0,0x7101a1a560
7101a1a55c  mov x24,xzr
7101a1a560  mov x8,x24
7101a1a564  mov x1,#0xf367
7101a1a568  movk x1,#0xef73, LSL #16
7101a1a56c  str x23,[x8], #0x8
7101a1a570  stp x24,x8,[x29, #-0x78]
7101a1a574  stur x8,[x29, #-0x68]
7101a1a578  ldr x0,[x26, #0x168]
7101a1a57c  movk x1,#0x14, LSL #32
7101a1a580  bl 0x71032631a0
7101a1a584  mov x25,x0
7101a1a588  mov w0,#0x10
7101a1a58c  mov w1,#0x10
7101a1a590  bl 0x710392e290
7101a1a594  mov x23,x0
7101a1a598  cbnz x0,0x7101a1a5e4
7101a1a59c  adrp x8,0x7105332000
7101a1a5a0  ldr x0,[x8, #0xf00]
7101a1a5a4  cbz x0,0x7101a1a5e0
7101a1a5a8  mov w8,#0x10
7101a1a5ac  stur wzr,[x29, #-0x90]
7101a1a5b0  sub x1,x29,#0x90
7101a1a5b4  str x8,[sp, #0xa8]
7101a1a5b8  ldr x8,[x0]
7101a1a5bc  ldr x8,[x8, #0x30]
7101a1a5c0  add x2,sp,#0xa8
7101a1a5c4  blr x8
7101a1a5c8  tbz w0,#0x0,0x7101a1a5e0
7101a1a5cc  mov w0,#0x10
7101a1a5d0  mov w1,#0x10
7101a1a5d4  bl 0x710392e290
7101a1a5d8  mov x23,x0
7101a1a5dc  cbnz x0,0x7101a1a5e4
7101a1a5e0  mov x23,xzr
7101a1a5e4  ldr x8,[x24]
7101a1a5e8  add x19,x23,#0x10
7101a1a5ec  stp x8,x25,[x23]
7101a1a5f0  stur x19,[x29, #-0x68]
7101a1a5f4  stp x23,x19,[x29, #-0x78]
7101a1a5f8  cbz x24,0x7101a1a608
7101a1a5fc  mov x0,x24
7101a1a600  bl 0x710392eb40
7101a1a604  ldur x23,[x29, #-0x78]
7101a1a608  ldr x0,[x26, #0x168]
7101a1a60c  mov x1,#0x4ff6
7101a1a610  movk x1,#0x915a, LSL #16
7101a1a614  movk x1,#0x12, LSL #32
7101a1a618  bl 0x71032631a0
7101a1a61c  sub x24,x19,x23
7101a1a620  asr x19,x24,#0x3
7101a1a624  add x8,x19,#0x1
7101a1a628  lsr x9,x8,#0x3d
7101a1a62c  cbnz x9,0x7101a1b48c
7101a1a630  orr x9,xzr,#0xffffffffffffffe
7101a1a634  mov x25,x0
7101a1a638  cmp x19,x9
7101a1a63c  b.hi 0x7101a1a7e0
7101a1a640  asr x9,x24,#0x2
7101a1a644  cmp x9,x8
7101a1a648  csel x20,x8,x9,cc
7101a1a64c  cbz x20,0x7101a1a844
7101a1a650  lsr x8,x20,#0x3d
7101a1a654  cbz x8,0x7101a1a7e4
7101a1a658  b 0x7101a1aef0
7101a1a65c  eor x8,x0,x21
7101a1a660  tst x8,#0xffffffffff
7101a1a664  b.eq 0x7101a1a4ec
7101a1a668  mov x1,#0x98f0
7101a1a66c  movk x1,#0xd031, LSL #16
7101a1a670  movk x1,#0xf, LSL #32
7101a1a674  mov x0,x24
7101a1a678  bl 0x71032631a0
7101a1a67c  and x8,x0,#-0x100000000000000
7101a1a680  mov x9,#-0x3f00000000000000
7101a1a684  cmp x8,x9
7101a1a688  b.ne 0x7101a1a6a0
7101a1a68c  and x8,x0,#0xffffffffff
7101a1a690  cbz x8,0x7101a1a6a0
7101a1a694  eor x8,x0,x21
7101a1a698  tst x8,#0xffffffffff
7101a1a69c  b.eq 0x7101a1ad84
7101a1a6a0  add x0,x26,#0x160
7101a1a6a4  mov x1,x21
7101a1a6a8  bl 0x71032648e0
7101a1a6ac  tbz w0,#0x0,0x7101a1a880
7101a1a6b0  mov x1,#0xf67e
7101a1a6b4  movk x1,#0x3829, LSL #16
7101a1a6b8  movk x1,#0x14, LSL #32
7101a1a6bc  mov x0,x24
7101a1a6c0  bl 0x71032631a0
7101a1a6c4  mov x1,#0x453e
7101a1a6c8  movk x1,#0xb28d, LSL #16
7101a1a6cc  mov x21,x0
7101a1a6d0  movk x1,#0x13, LSL #32
7101a1a6d4  mov x0,x24
7101a1a6d8  bl 0x71032631a0
7101a1a6dc  mov x25,x0
7101a1a6e0  mov w0,#0x10
7101a1a6e4  mov w1,#0x8
7101a1a6e8  bl 0x710392e290
7101a1a6ec  mov x24,x0
7101a1a6f0  cbnz x0,0x7101a1a73c
7101a1a6f4  adrp x8,0x7105332000
7101a1a6f8  ldr x0,[x8, #0xf00]
7101a1a6fc  cbz x0,0x7101a1a738
7101a1a700  mov w8,#0x8
7101a1a704  stur wzr,[x29, #-0x90]
7101a1a708  sub x1,x29,#0x90
7101a1a70c  str x8,[sp, #0xa8]
7101a1a710  ldr x8,[x0]
7101a1a714  ldr x8,[x8, #0x30]
7101a1a718  add x2,sp,#0xa8
7101a1a71c  blr x8
7101a1a720  tbz w0,#0x0,0x7101a1a738
7101a1a724  mov w0,#0x10
7101a1a728  mov w1,#0x8
7101a1a72c  bl 0x710392e290
7101a1a730  mov x24,x0
7101a1a734  cbnz x0,0x7101a1a73c
7101a1a738  mov x24,xzr
7101a1a73c  mov x8,x24
7101a1a740  mov x1,#0x67a6
7101a1a744  movk x1,#0xb3e5, LSL #16
7101a1a748  str x25,[x8], #0x8
7101a1a74c  stp x24,x8,[x29, #-0x78]
7101a1a750  stur x8,[x29, #-0x68]
7101a1a754  ldr x0,[x26, #0x168]
7101a1a758  movk x1,#0x13, LSL #32
7101a1a75c  bl 0x71032631a0
7101a1a760  mov x25,x0
7101a1a764  mov w0,#0x10
7101a1a768  mov w1,#0x10
7101a1a76c  mov w19,#0x10
7101a1a770  bl 0x710392e290
7101a1a774  cbnz x0,0x7101a1a7b8
7101a1a778  adrp x8,0x7105332000
7101a1a77c  ldr x0,[x8, #0xf00]
7101a1a780  cbz x0,0x7101a1a7b4
7101a1a784  stur wzr,[x29, #-0x90]
7101a1a788  str x19,[sp, #0xa8]
7101a1a78c  ldr x8,[x0]
7101a1a790  ldr x8,[x8, #0x30]
7101a1a794  sub x1,x29,#0x90
7101a1a798  add x2,sp,#0xa8
7101a1a79c  blr x8
7101a1a7a0  tbz w0,#0x0,0x7101a1a7b4
7101a1a7a4  mov w0,#0x10
7101a1a7a8  mov w1,#0x10
7101a1a7ac  bl 0x710392e290
7101a1a7b0  cbnz x0,0x7101a1a7b8
7101a1a7b4  mov x0,xzr
7101a1a7b8  ldr x9,[x24]
7101a1a7bc  add x8,x0,#0x10
7101a1a7c0  stp x9,x25,[x0]
7101a1a7c4  stur x8,[x29, #-0x68]
7101a1a7c8  stp x0,x8,[x29, #-0x78]
7101a1a7cc  cbz x24,0x7101a1a7d8
7101a1a7d0  mov x0,x24
7101a1a7d4  bl 0x710392eb40
7101a1a7d8  mov w19,wzr
7101a1a7dc  b 0x7101a1a884
7101a1a7e0  orr x20,xzr,#0x1fffffffffffffff
7101a1a7e4  lsl x8,x20,#0x3
7101a1a7e8  cmp x8,#0x0
7101a1a7ec  csinc x26,x8,xzr,ne
7101a1a7f0  mov w0,#0x10
7101a1a7f4  mov x1,x26
7101a1a7f8  bl 0x710392e290
7101a1a7fc  mov x27,x0
7101a1a800  cbnz x0,0x7101a1a848
7101a1a804  adrp x8,0x7105332000
7101a1a808  ldr x0,[x8, #0xf00]
7101a1a80c  cbz x0,0x7101a1a844
7101a1a810  stur wzr,[x29, #-0x90]
7101a1a814  str x26,[sp, #0xa8]
7101a1a818  ldr x8,[x0]
7101a1a81c  ldr x8,[x8, #0x30]
7101a1a820  sub x1,x29,#0x90
7101a1a824  add x2,sp,#0xa8
7101a1a828  blr x8
7101a1a82c  tbz w0,#0x0,0x7101a1a844
7101a1a830  mov w0,#0x10
7101a1a834  mov x1,x26
7101a1a838  bl 0x710392e290
7101a1a83c  mov x27,x0
7101a1a840  cbnz x0,0x7101a1a848
7101a1a844  mov x27,xzr
7101a1a848  add x19,x27,x19, LSL #0x3
7101a1a84c  add x20,x27,x20, LSL #0x3
7101a1a850  cmp x24,#0x1
7101a1a854  str x25,[x19], #0x8
7101a1a858  b.lt 0x7101a1a86c
7101a1a85c  mov x0,x27
7101a1a860  mov x1,x23
7101a1a864  mov x2,x24
7101a1a868  bl 0x71039c00e0
7101a1a86c  stp x27,x19,[x29, #-0x78]
7101a1a870  stur x20,[x29, #-0x68]
7101a1a874  cbz x23,0x7101a1a880
7101a1a878  mov x0,x23
7101a1a87c  bl 0x710392eb40
7101a1a880  mov w19,#0x1
7101a1a884  sub x0,x29,#0x90
7101a1a888  mov x1,x21
7101a1a88c  bl 0x7101a10950
7101a1a890  mov w0,#0x10
7101a1a894  orr w1,wzr,#0x30
7101a1a898  bl 0x710392e290
7101a1a89c  cbnz x0,0x7101a1a8e4
7101a1a8a0  adrp x8,0x7105332000
7101a1a8a4  ldr x0,[x8, #0xf00]
7101a1a8a8  cbz x0,0x7101a1a8e0
7101a1a8ac  orr w8,wzr,#0x30
7101a1a8b0  stur wzr,[x29, #-0xa8]
7101a1a8b4  sub x1,x29,#0xa8
7101a1a8b8  str x8,[sp, #0xa8]
7101a1a8bc  ldr x8,[x0]
7101a1a8c0  ldr x8,[x8, #0x30]
7101a1a8c4  add x2,sp,#0xa8
7101a1a8c8  blr x8
7101a1a8cc  tbz w0,#0x0,0x7101a1a8e0
7101a1a8d0  mov w0,#0x10
7101a1a8d4  orr w1,wzr,#0x30
7101a1a8d8  bl 0x710392e290
7101a1a8dc  cbnz x0,0x7101a1a8e4
7101a1a8e0  mov x0,xzr
7101a1a8e4  add x8,x0,#0x30
7101a1a8e8  stur x8,[x29, #-0x98]
7101a1a8ec  ldp x9,x8,[x29, #-0x90]
7101a1a8f0  cmp x9,x8
7101a1a8f4  stp x0,x0,[x29, #-0xa8]
7101a1a8f8  b.eq 0x7101a1a914
7101a1a8fc  ldr x9,[x8, #-0x10]!
7101a1a900  ldr x10,[x8, #0x8]
7101a1a904  stp x9,x10,[x0]
7101a1a908  add x9,x0,#0x10
7101a1a90c  stur x9,[x29, #-0xa0]
7101a1a910  stur x8,[x29, #-0x88]
7101a1a914  tbz w19,#0x0,0x7101a1a98c
7101a1a918  ldp x19,x9,[x29, #-0x78]
7101a1a91c  sub x8,x29,#0x78
7101a1a920  add x22,x8,#0x8
7101a1a924  str x22,[sp, #0x10]
7101a1a928  sub x8,x9,x19
7101a1a92c  cmp x8,#0x9
7101a1a930  b.lt 0x7101a1a998
7101a1a934  sub x20,x9,#0x8
7101a1a938  cmp x20,x19
7101a1a93c  b.ls 0x7101a1a998
7101a1a940  lsr x8,x8,#0x3
7101a1a944  sub x21,x8,#0x1
7101a1a948  adrp x23,0x7105239000
7101a1a94c  add x23,x23,#0x1c0
7101a1a950  add x1,sp,#0xa8
7101a1a954  mov x0,x23
7101a1a958  stp xzr,x21,[sp, #0xa8]
7101a1a95c  bl 0x710137bc30
7101a1a960  cbz x0,0x7101a1a978
7101a1a964  lsl x9,x0,#0x3
7101a1a968  ldr x8,[x19]
7101a1a96c  ldr x10,[x19, x9, LSL #0x0]
7101a1a970  str x10,[x19]
7101a1a974  str x8,[x19, x9, LSL #0x0]
7101a1a978  add x19,x19,#0x8
7101a1a97c  sub x21,x21,#0x1
7101a1a980  cmp x20,x19
7101a1a984  b.hi 0x7101a1a950
7101a1a988  b 0x7101a1a998
7101a1a98c  sub x8,x29,#0x78
7101a1a990  add x8,x8,#0x8
7101a1a994  str x8,[sp, #0x10]
7101a1a998  ldp x22,x8,[x29, #-0x78]
7101a1a99c  cmp x22,x8
7101a1a9a0  str x8,[sp, #0x38]
7101a1a9a4  b.eq 0x7101a1ac40
7101a1a9a8  orr x21,xzr,#0x7fffffffffffffe
7101a1a9ac  ldr x1,[x22]
7101a1a9b0  add x0,sp,#0xa8
7101a1a9b4  bl 0x7101a10950
7101a1a9b8  ldp x0,x8,[sp, #0xa8]
7101a1a9bc  cmp x0,x8
7101a1a9c0  b.eq 0x7101a1ac18
7101a1a9c4  sub x20,x8,#0x10
7101a1a9c8  ldp x9,x8,[x29, #-0xa0]
7101a1a9cc  cmp x9,x8
7101a1a9d0  b.eq 0x7101a1a9ec
7101a1a9d4  ldp x8,x10,[x20]
7101a1a9d8  stp x8,x10,[x9]
7101a1a9dc  ldur x8,[x29, #-0xa0]
7101a1a9e0  add x8,x8,#0x10
7101a1a9e4  stur x8,[x29, #-0xa0]
7101a1a9e8  b 0x7101a1aad8
7101a1a9ec  ldur x23,[x29, #-0xa8]
7101a1a9f0  sub x24,x9,x23
7101a1a9f4  asr x19,x24,#0x4
7101a1a9f8  add x9,x19,#0x1
7101a1a9fc  lsr x10,x9,#0x3c
7101a1aa00  cbnz x10,0x7101a1b474
7101a1aa04  sub x8,x8,x23
7101a1aa08  asr x10,x8,#0x4
7101a1aa0c  cmp x10,x21
7101a1aa10  b.hi 0x7101a1aa30
7101a1aa14  asr x8,x8,#0x3
7101a1aa18  cmp x8,x9
7101a1aa1c  csel x27,x9,x8,cc
7101a1aa20  cbz x27,0x7101a1aa94
7101a1aa24  lsr x8,x27,#0x3c
7101a1aa28  cbz x8,0x7101a1aa34
7101a1aa2c  b 0x7101a1aef0
7101a1aa30  orr x27,xzr,#0xfffffffffffffff
7101a1aa34  lsl x8,x27,#0x4
7101a1aa38  cmp x8,#0x0
7101a1aa3c  csinc x26,x8,xzr,ne
7101a1aa40  mov w0,#0x10
7101a1aa44  mov x1,x26
7101a1aa48  bl 0x710392e290
7101a1aa4c  mov x25,x0
7101a1aa50  cbnz x0,0x7101a1aa98
7101a1aa54  adrp x8,0x7105332000
7101a1aa58  ldr x0,[x8, #0xf00]
7101a1aa5c  cbz x0,0x7101a1aa94
7101a1aa60  stur wzr,[x29, #-0x5c]
7101a1aa64  stur x26,[x29, #-0xc0]
7101a1aa68  ldr x8,[x0]
7101a1aa6c  ldr x8,[x8, #0x30]
7101a1aa70  sub x1,x29,#0x5c
7101a1aa74  sub x2,x29,#0xc0
7101a1aa78  blr x8
7101a1aa7c  tbz w0,#0x0,0x7101a1aa94
7101a1aa80  mov w0,#0x10
7101a1aa84  mov x1,x26
7101a1aa88  bl 0x710392e290
7101a1aa8c  mov x25,x0
7101a1aa90  cbnz x0,0x7101a1aa98
7101a1aa94  mov x25,xzr
7101a1aa98  ldp x8,x9,[x20]
7101a1aa9c  add x10,x25,x19, LSL #0x4
7101a1aaa0  add x26,x25,x27, LSL #0x4
7101a1aaa4  cmp x24,#0x1
7101a1aaa8  add x19,x10,#0x10
7101a1aaac  stp x8,x9,[x10]
7101a1aab0  b.lt 0x7101a1aac4
7101a1aab4  mov x0,x25
7101a1aab8  mov x1,x23
7101a1aabc  mov x2,x24
7101a1aac0  bl 0x71039c00e0
7101a1aac4  stp x25,x19,[x29, #-0xa8]
7101a1aac8  stur x26,[x29, #-0x98]
7101a1aacc  cbz x23,0x7101a1aad8
7101a1aad0  mov x0,x23
7101a1aad4  bl 0x710392eb40
7101a1aad8  ldp x8,x20,[sp, #0xa8]
7101a1aadc  sub x0,x20,#0x10
7101a1aae0  cmp x8,x0
7101a1aae4  str x0,[sp, #0xb0]
7101a1aae8  b.eq 0x7101a1ac20
7101a1aaec  add x28,x8,#0x10
7101a1aaf0  ldp x9,x8,[x29, #-0x88]
7101a1aaf4  cmp x9,x8
7101a1aaf8  b.eq 0x7101a1ab14
7101a1aafc  ldp x8,x10,[x28, #-0x10]
7101a1ab00  stp x8,x10,[x9]
7101a1ab04  ldur x8,[x29, #-0x88]
7101a1ab08  add x8,x8,#0x10
7101a1ab0c  stur x8,[x29, #-0x88]
7101a1ab10  b 0x7101a1ac00
7101a1ab14  ldur x23,[x29, #-0x90]
7101a1ab18  sub x24,x9,x23
7101a1ab1c  asr x19,x24,#0x4
7101a1ab20  add x9,x19,#0x1
7101a1ab24  lsr x10,x9,#0x3c
7101a1ab28  cbnz x10,0x7101a1b46c
7101a1ab2c  sub x8,x8,x23
7101a1ab30  asr x10,x8,#0x4
7101a1ab34  cmp x10,x21
7101a1ab38  b.hi 0x7101a1ab58
7101a1ab3c  asr x8,x8,#0x3
7101a1ab40  cmp x8,x9
7101a1ab44  csel x27,x9,x8,cc
7101a1ab48  cbz x27,0x7101a1abbc
7101a1ab4c  lsr x8,x27,#0x3c
7101a1ab50  cbz x8,0x7101a1ab5c
7101a1ab54  b 0x7101a1aef0
7101a1ab58  orr x27,xzr,#0xfffffffffffffff
7101a1ab5c  lsl x8,x27,#0x4
7101a1ab60  cmp x8,#0x0
7101a1ab64  csinc x26,x8,xzr,ne
7101a1ab68  mov w0,#0x10
7101a1ab6c  mov x1,x26
7101a1ab70  bl 0x710392e290
7101a1ab74  mov x25,x0
7101a1ab78  cbnz x0,0x7101a1abc0
7101a1ab7c  adrp x8,0x7105332000
7101a1ab80  ldr x0,[x8, #0xf00]
7101a1ab84  cbz x0,0x7101a1abbc
7101a1ab88  stur wzr,[x29, #-0x5c]
7101a1ab8c  stur x26,[x29, #-0xc0]
7101a1ab90  ldr x8,[x0]
7101a1ab94  ldr x8,[x8, #0x30]
7101a1ab98  sub x1,x29,#0x5c
7101a1ab9c  sub x2,x29,#0xc0
7101a1aba0  blr x8
7101a1aba4  tbz w0,#0x0,0x7101a1abbc
7101a1aba8  mov w0,#0x10
7101a1abac  mov x1,x26
7101a1abb0  bl 0x710392e290
7101a1abb4  mov x25,x0
7101a1abb8  cbnz x0,0x7101a1abc0
7101a1abbc  mov x25,xzr
7101a1abc0  ldp x8,x9,[x28, #-0x10]
7101a1abc4  add x10,x25,x19, LSL #0x4
7101a1abc8  add x26,x25,x27, LSL #0x4
7101a1abcc  cmp x24,#0x1
7101a1abd0  add x19,x10,#0x10
7101a1abd4  stp x8,x9,[x10]
7101a1abd8  b.lt 0x7101a1abec
7101a1abdc  mov x0,x25
7101a1abe0  mov x1,x23
7101a1abe4  mov x2,x24
7101a1abe8  bl 0x71039c00e0
7101a1abec  stp x25,x19,[x29, #-0x90]
7101a1abf0  stur x26,[x29, #-0x80]
7101a1abf4  cbz x23,0x7101a1ac00
7101a1abf8  mov x0,x23
7101a1abfc  bl 0x710392eb40
7101a1ac00  add x28,x28,#0x10
7101a1ac04  cmp x20,x28
7101a1ac08  b.ne 0x7101a1aaf0
7101a1ac0c  ldr x0,[sp, #0xa8]
7101a1ac10  mov w28,#0x9dc5
7101a1ac14  movk w28,#0x811c, LSL #16
7101a1ac18  cbnz x0,0x7101a1ac28
7101a1ac1c  b 0x7101a1ac30
7101a1ac20  mov w28,#0x9dc5
7101a1ac24  movk w28,#0x811c, LSL #16
7101a1ac28  str x0,[sp, #0xb0]
7101a1ac2c  bl 0x710392eb40
7101a1ac30  ldr x8,[sp, #0x38]
7101a1ac34  add x22,x22,#0x8
7101a1ac38  cmp x22,x8
7101a1ac3c  b.ne 0x7101a1a9ac
7101a1ac40  ldp x23,x1,[x29, #-0xa8]
7101a1ac44  sub x24,x1,x23
7101a1ac48  asr x19,x24,#0x4
7101a1ac4c  cmp x19,#0x3
7101a1ac50  b.cs 0x7101a1afac
7101a1ac54  ldp x9,x8,[x29, #-0x90]
7101a1ac58  cmp x9,x8
7101a1ac5c  b.eq 0x7101a1afa8
7101a1ac60  sub x20,x8,#0x10
7101a1ac64  ldur x8,[x29, #-0x98]
7101a1ac68  cmp x8,x1
7101a1ac6c  b.eq 0x7101a1ac88
7101a1ac70  ldp x8,x9,[x20]
7101a1ac74  stp x8,x9,[x1]
7101a1ac78  ldur x8,[x29, #-0xa0]
7101a1ac7c  add x8,x8,#0x10
7101a1ac80  stur x8,[x29, #-0xa0]
7101a1ac84  b 0x7101a1ad48
7101a1ac88  add x8,x19,#0x1
7101a1ac8c  asr x9,x24,#0x3
7101a1ac90  cmp x9,x8
7101a1ac94  csinc x21,x9,x19,cs
7101a1ac98  cbz x21,0x7101a1ad04
7101a1ac9c  lsr x8,x21,#0x3c
7101a1aca0  cbnz x8,0x7101a1aef0
7101a1aca4  lsl x8,x21,#0x4
7101a1aca8  cmp x8,#0x0
7101a1acac  csinc x26,x8,xzr,ne
7101a1acb0  mov w0,#0x10
7101a1acb4  mov x1,x26
7101a1acb8  bl 0x710392e290
7101a1acbc  mov x25,x0
7101a1acc0  cbnz x0,0x7101a1ad08
7101a1acc4  adrp x8,0x7105332000
7101a1acc8  ldr x0,[x8, #0xf00]
7101a1accc  cbz x0,0x7101a1ad04
7101a1acd0  stur wzr,[x29, #-0xc0]
7101a1acd4  str x26,[sp, #0xa8]
7101a1acd8  ldr x8,[x0]
7101a1acdc  ldr x8,[x8, #0x30]
7101a1ace0  sub x1,x29,#0xc0
7101a1ace4  add x2,sp,#0xa8
7101a1ace8  blr x8
7101a1acec  tbz w0,#0x0,0x7101a1ad04
7101a1acf0  mov w0,#0x10
7101a1acf4  mov x1,x26
7101a1acf8  bl 0x710392e290
7101a1acfc  mov x25,x0
7101a1ad00  cbnz x0,0x7101a1ad08
7101a1ad04  mov x25,xzr
7101a1ad08  ldp x8,x9,[x20]
7101a1ad0c  add x10,x25,x19, LSL #0x4
7101a1ad10  add x21,x25,x21, LSL #0x4
7101a1ad14  cmp x24,#0x1
7101a1ad18  add x19,x10,#0x10
7101a1ad1c  stp x8,x9,[x10]
7101a1ad20  b.lt 0x7101a1ad34
7101a1ad24  mov x0,x25
7101a1ad28  mov x1,x23
7101a1ad2c  mov x2,x24
7101a1ad30  bl 0x71039c00e0
7101a1ad34  stp x25,x19,[x29, #-0xa8]
7101a1ad38  stur x21,[x29, #-0x98]
7101a1ad3c  cbz x23,0x7101a1ad48
7101a1ad40  mov x0,x23
7101a1ad44  bl 0x710392eb40
7101a1ad48  ldp x10,x8,[x29, #-0x90]
7101a1ad4c  sub x9,x8,#0x10
7101a1ad50  cmp x10,x9
7101a1ad54  stur x9,[x29, #-0x88]
7101a1ad58  b.eq 0x7101a1afa8
7101a1ad5c  sub x19,x8,#0x20
7101a1ad60  ldp x9,x8,[x29, #-0xa0]
7101a1ad64  cmp x9,x8
7101a1ad68  b.eq 0x7101a1aeac
7101a1ad6c  ldp x8,x10,[x19]
7101a1ad70  stp x8,x10,[x9]
7101a1ad74  ldur x8,[x29, #-0xa0]
7101a1ad78  add x8,x8,#0x10
7101a1ad7c  stur x8,[x29, #-0xa0]
7101a1ad80  b 0x7101a1af9c
7101a1ad84  mov x1,#0xfb2b
7101a1ad88  movk x1,#0xfdfd, LSL #16
7101a1ad8c  movk x1,#0x13, LSL #32
7101a1ad90  mov x0,x24
7101a1ad94  bl 0x71032631a0
7101a1ad98  mov x1,#0x1f77
7101a1ad9c  movk x1,#0xd706, LSL #16
7101a1ada0  mov x21,x0
7101a1ada4  movk x1,#0x15, LSL #32
7101a1ada8  mov x0,x24
7101a1adac  bl 0x71032631a0
7101a1adb0  mov x25,x0
7101a1adb4  mov w0,#0x10
7101a1adb8  mov w1,#0x8
7101a1adbc  bl 0x710392e290
7101a1adc0  mov x24,x0
7101a1adc4  cbnz x0,0x7101a1ae10
7101a1adc8  adrp x8,0x7105332000
7101a1adcc  ldr x0,[x8, #0xf00]
7101a1add0  cbz x0,0x7101a1ae0c
7101a1add4  mov w8,#0x8
7101a1add8  stur wzr,[x29, #-0x90]
7101a1addc  sub x1,x29,#0x90
7101a1ade0  str x8,[sp, #0xa8]
7101a1ade4  ldr x8,[x0]
7101a1ade8  ldr x8,[x8, #0x30]
7101a1adec  add x2,sp,#0xa8
7101a1adf0  blr x8
7101a1adf4  tbz w0,#0x0,0x7101a1ae0c
7101a1adf8  mov w0,#0x10
7101a1adfc  mov w1,#0x8
7101a1ae00  bl 0x710392e290
7101a1ae04  mov x24,x0
7101a1ae08  cbnz x0,0x7101a1ae10
7101a1ae0c  mov x24,xzr
7101a1ae10  mov x8,x24
7101a1ae14  mov x1,#0x1d87
7101a1ae18  movk x1,#0x57ab, LSL #16
7101a1ae1c  str x25,[x8], #0x8
7101a1ae20  stp x24,x8,[x29, #-0x78]
7101a1ae24  stur x8,[x29, #-0x68]
7101a1ae28  ldr x0,[x26, #0x168]
7101a1ae2c  movk x1,#0x12, LSL #32
7101a1ae30  bl 0x71032631a0
7101a1ae34  mov x25,x0
7101a1ae38  mov w0,#0x10
7101a1ae3c  mov w1,#0x10
7101a1ae40  mov w19,#0x10
7101a1ae44  bl 0x710392e290
7101a1ae48  cbnz x0,0x7101a1ae8c
7101a1ae4c  adrp x8,0x7105332000
7101a1ae50  ldr x0,[x8, #0xf00]
7101a1ae54  cbz x0,0x7101a1ae88
7101a1ae58  stur wzr,[x29, #-0x90]
7101a1ae5c  str x19,[sp, #0xa8]
7101a1ae60  ldr x8,[x0]
7101a1ae64  ldr x8,[x8, #0x30]
7101a1ae68  sub x1,x29,#0x90
7101a1ae6c  add x2,sp,#0xa8
7101a1ae70  blr x8
7101a1ae74  tbz w0,#0x0,0x7101a1ae88
7101a1ae78  mov w0,#0x10
7101a1ae7c  mov w1,#0x10
7101a1ae80  bl 0x710392e290
7101a1ae84  cbnz x0,0x7101a1ae8c
7101a1ae88  mov x0,xzr
7101a1ae8c  ldr x9,[x24]
7101a1ae90  add x8,x0,#0x10
7101a1ae94  stp x9,x25,[x0]
7101a1ae98  stur x8,[x29, #-0x68]
7101a1ae9c  stp x0,x8,[x29, #-0x78]
7101a1aea0  cbz x24,0x7101a1a880
7101a1aea4  mov x0,x24
7101a1aea8  b 0x7101a1a87c
7101a1aeac  ldur x23,[x29, #-0xa8]
7101a1aeb0  sub x24,x9,x23
7101a1aeb4  asr x20,x24,#0x4
7101a1aeb8  add x9,x20,#0x1
7101a1aebc  lsr x10,x9,#0x3c
7101a1aec0  cbnz x10,0x7101a1b474
7101a1aec4  sub x8,x8,x23
7101a1aec8  asr x10,x8,#0x4
7101a1aecc  orr x11,xzr,#0x7fffffffffffffe
7101a1aed0  cmp x10,x11
7101a1aed4  b.hi 0x7101a1aef4
7101a1aed8  asr x8,x8,#0x3
7101a1aedc  cmp x8,x9
7101a1aee0  csel x21,x9,x8,cc
7101a1aee4  cbz x21,0x7101a1af58
7101a1aee8  lsr x8,x21,#0x3c
7101a1aeec  cbz x8,0x7101a1aef8
7101a1aef0  bl 0x71039c2650
7101a1aef4  orr x21,xzr,#0xfffffffffffffff
7101a1aef8  lsl x8,x21,#0x4
7101a1aefc  cmp x8,#0x0
7101a1af00  csinc x26,x8,xzr,ne
7101a1af04  mov w0,#0x10
7101a1af08  mov x1,x26
7101a1af0c  bl 0x710392e290
7101a1af10  mov x25,x0
7101a1af14  cbnz x0,0x7101a1af5c
7101a1af18  adrp x8,0x7105332000
7101a1af1c  ldr x0,[x8, #0xf00]
7101a1af20  cbz x0,0x7101a1af58
7101a1af24  stur wzr,[x29, #-0xc0]
7101a1af28  str x26,[sp, #0xa8]
7101a1af2c  ldr x8,[x0]
7101a1af30  ldr x8,[x8, #0x30]
7101a1af34  sub x1,x29,#0xc0
7101a1af38  add x2,sp,#0xa8
7101a1af3c  blr x8
7101a1af40  tbz w0,#0x0,0x7101a1af58
7101a1af44  mov w0,#0x10
7101a1af48  mov x1,x26
7101a1af4c  bl 0x710392e290
7101a1af50  mov x25,x0
7101a1af54  cbnz x0,0x7101a1af5c
7101a1af58  mov x25,xzr
7101a1af5c  ldp x8,x9,[x19]
7101a1af60  add x10,x25,x20, LSL #0x4
7101a1af64  add x21,x25,x21, LSL #0x4
7101a1af68  add x19,x10,#0x10
7101a1af6c  cmp x24,#0x1
7101a1af70  stp x8,x9,[x10]
7101a1af74  b.lt 0x7101a1af88
7101a1af78  mov x0,x25
7101a1af7c  mov x1,x23
7101a1af80  mov x2,x24
7101a1af84  bl 0x71039c00e0
7101a1af88  stp x25,x19,[x29, #-0xa8]
7101a1af8c  stur x21,[x29, #-0x98]
7101a1af90  cbz x23,0x7101a1af9c
7101a1af94  mov x0,x23
7101a1af98  bl 0x710392eb40
7101a1af9c  ldur x8,[x29, #-0x88]
7101a1afa0  sub x8,x8,#0x10
7101a1afa4  stur x8,[x29, #-0x88]
7101a1afa8  ldp x23,x1,[x29, #-0xa8]
7101a1afac  mov x0,x23
7101a1afb0  bl 0x7101a10eb0
7101a1afb4  mov w1,#0xd8
7101a1afb8  mov w0,#0x10
7101a1afbc  bl 0x710392e290
7101a1afc0  ldr x23,[sp, #0x28]
7101a1afc4  mov x24,#-0x3f00000000000000
7101a1afc8  cbnz x0,0x7101a1b010
7101a1afcc  adrp x8,0x7105332000
7101a1afd0  ldr x0,[x8, #0xf00]
7101a1afd4  cbz x0,0x7101a1b00c
7101a1afd8  mov w8,#0xd8
7101a1afdc  stur wzr,[x29, #-0xc0]
7101a1afe0  sub x1,x29,#0xc0
7101a1afe4  str x8,[sp, #0xa8]
7101a1afe8  ldr x8,[x0]
7101a1afec  ldr x8,[x8, #0x30]
7101a1aff0  add x2,sp,#0xa8
7101a1aff4  blr x8
7101a1aff8  tbz w0,#0x0,0x7101a1b00c
7101a1affc  mov w1,#0xd8
7101a1b000  mov w0,#0x10
7101a1b004  bl 0x710392e290
7101a1b008  cbnz x0,0x7101a1b010
7101a1b00c  mov x0,xzr
7101a1b010  ldp x19,x20,[x29, #-0xa8]
7101a1b014  add x8,x0,#0xd8
7101a1b018  stp x0,x0,[x29, #-0xc0]
7101a1b01c  stur x8,[x29, #-0xb0]
7101a1b020  cmp x19,x20
7101a1b024  b.eq 0x7101a1b144
7101a1b028  adrp x8,0x710532f000
7101a1b02c  ldr x8,[x8, #0x730]
7101a1b030  ldr x21,[x8, #0x8]
7101a1b034  add x8,sp,#0xa8
7101a1b038  add x22,x8,#0x8
7101a1b03c  mov w24,#0x89
7101a1b040  adrp x23,0x71042b2000
7101a1b044  add x23,x23,#0x794
7101a1b048  ldr x1,[x19, #0x8]
7101a1b04c  ldr x0,[x21, #0x1b8]
7101a1b050  bl 0x71032b6c10
7101a1b054  cmn w0,#0x1
7101a1b058  b.eq 0x7101a1b070
7101a1b05c  mov w1,w0
7101a1b060  add x8,sp,#0xa8
7101a1b064  mov x0,x23
7101a1b068  bl 0x71003a4ca0
7101a1b06c  b 0x7101a1b078
7101a1b070  strb wzr,[sp, #0xb0]
7101a1b074  str xzr,[sp, #0xa8]
7101a1b078  ldp x8,x9,[x29, #-0xb8]
7101a1b07c  cmp x8,x9
7101a1b080  b.cs 0x7101a1b0c8
7101a1b084  mov x9,xzr
7101a1b088  str wzr,[x8]
7101a1b08c  add x10,x22,x9
7101a1b090  ldrb w12,[x10]
7101a1b094  cbz w12,0x7101a1b0e4
7101a1b098  add x11,x8,x9
7101a1b09c  strb w12,[x11, #0x8]
7101a1b0a0  ldrb w12,[x10, #0x1]
7101a1b0a4  cbz w12,0x7101a1b0d8
7101a1b0a8  strb w12,[x11, #0x9]
7101a1b0ac  ldrb w10,[x10, #0x2]
7101a1b0b0  cbz w10,0x7101a1b0e0
7101a1b0b4  add x9,x9,#0x3
7101a1b0b8  cmp w9,#0x3f
7101a1b0bc  strb w10,[x11, #0xa]
7101a1b0c0  b.cc 0x7101a1b08c
7101a1b0c4  b 0x7101a1b0e4
7101a1b0c8  sub x0,x29,#0xc0
7101a1b0cc  add x1,sp,#0xa8
7101a1b0d0  bl 0x71019c1c50
7101a1b0d4  b 0x7101a1b128
7101a1b0d8  add x9,x9,#0x1
7101a1b0dc  b 0x7101a1b0e4
7101a1b0e0  add x9,x9,#0x2
7101a1b0e4  add x10,x8,#0x8
7101a1b0e8  strb wzr,[x10, w9, UXTW ]
7101a1b0ec  str w9,[x8, #0x4]
7101a1b0f0  ldrb w9,[x8, #0x8]
7101a1b0f4  mov w11,w28
7101a1b0f8  cbz w9,0x7101a1b118
7101a1b0fc  add x10,x8,#0x9
7101a1b100  mov w11,w28
7101a1b104  mul w11,w11,w24
7101a1b108  and w9,w9,#0xff
7101a1b10c  eor w11,w11,w9
7101a1b110  ldrb w9,[x10], #0x1
7101a1b114  cbnz w9,0x7101a1b104
7101a1b118  str w11,[x8]
7101a1b11c  ldur x8,[x29, #-0xb8]
7101a1b120  add x8,x8,#0x48
7101a1b124  stur x8,[x29, #-0xb8]
7101a1b128  add x19,x19,#0x10
7101a1b12c  cmp x19,x20
7101a1b130  b.ne 0x7101a1b048
7101a1b134  ldp x0,x8,[x29, #-0xc0]
7101a1b138  ldr x23,[sp, #0x28]
7101a1b13c  mov x24,#-0x3f00000000000000
7101a1b140  b 0x7101a1b148
7101a1b144  mov x8,x0
7101a1b148  sub x9,x8,x0
7101a1b14c  lsr x9,x9,#0x3
7101a1b150  mov w10,#0x8e39
7101a1b154  movk w10,#0x38e3, LSL #16
7101a1b158  mul w19,w9,w10
7101a1b15c  ldr x22,[sp, #0x20]
7101a1b160  cmp w19,#0x2
7101a1b164  b.gt 0x7101a1b24c
7101a1b168  add x9,sp,#0xa8
7101a1b16c  add x20,x9,#0x8
7101a1b170  mov w21,#0x89
7101a1b174  b 0x7101a1b180
7101a1b178  ldur x8,[x29, #-0xb8]
7101a1b17c  add w19,w19,#0x1
7101a1b180  ldur x9,[x29, #-0xb0]
7101a1b184  cmp x8,x9
7101a1b188  strb wzr,[sp, #0xb0]
7101a1b18c  str xzr,[sp, #0xa8]
7101a1b190  b.cs 0x7101a1b1d8
7101a1b194  mov x9,xzr
7101a1b198  str wzr,[x8]
7101a1b19c  add x10,x20,x9
7101a1b1a0  ldrb w12,[x10]
7101a1b1a4  cbz w12,0x7101a1b1fc
7101a1b1a8  add x11,x8,x9
7101a1b1ac  strb w12,[x11, #0x8]
7101a1b1b0  ldrb w12,[x10, #0x1]
7101a1b1b4  cbz w12,0x7101a1b1f0
7101a1b1b8  strb w12,[x11, #0x9]
7101a1b1bc  ldrb w10,[x10, #0x2]
7101a1b1c0  cbz w10,0x7101a1b1f8
7101a1b1c4  add x9,x9,#0x3
7101a1b1c8  cmp w9,#0x3f
7101a1b1cc  strb w10,[x11, #0xa]
7101a1b1d0  b.cc 0x7101a1b19c
7101a1b1d4  b 0x7101a1b1fc
7101a1b1d8  sub x0,x29,#0xc0
7101a1b1dc  add x1,sp,#0xa8
7101a1b1e0  bl 0x71019c1c50
7101a1b1e4  cmp w19,#0x1
7101a1b1e8  b.le 0x7101a1b178
7101a1b1ec  b 0x7101a1b248
7101a1b1f0  add x9,x9,#0x1
7101a1b1f4  b 0x7101a1b1fc
7101a1b1f8  add x9,x9,#0x2
7101a1b1fc  add x10,x8,#0x8
7101a1b200  strb wzr,[x10, w9, UXTW ]
7101a1b204  str w9,[x8, #0x4]
7101a1b208  ldrb w9,[x8, #0x8]
7101a1b20c  mov w11,w28
7101a1b210  cbz w9,0x7101a1b230
7101a1b214  add x10,x8,#0x9
7101a1b218  mov w11,w28
7101a1b21c  mul w11,w11,w21
7101a1b220  and w9,w9,#0xff
7101a1b224  eor w11,w11,w9
7101a1b228  ldrb w9,[x10], #0x1
7101a1b22c  cbnz w9,0x7101a1b21c
7101a1b230  str w11,[x8]
7101a1b234  ldur x8,[x29, #-0xb8]
7101a1b238  add x8,x8,#0x48
7101a1b23c  stur x8,[x29, #-0xb8]
7101a1b240  cmp w19,#0x1
7101a1b244  b.le 0x7101a1b178
7101a1b248  ldp x0,x8,[x29, #-0xc0]
7101a1b24c  ldr x19,[sp, #0x18]
7101a1b250  ldr x20,[sp, #0x30]
7101a1b254  stp x0,x8,[sp, #0xa8]
7101a1b258  ldp x8,x0,[x29, #-0xb0]
7101a1b25c  str x8,[sp, #0xb8]
7101a1b260  cbz x0,0x7101a1b26c
7101a1b264  stur x0,[x29, #-0xa0]
7101a1b268  bl 0x710392eb40
7101a1b26c  ldur x0,[x29, #-0x90]
7101a1b270  cbz x0,0x7101a1b27c
7101a1b274  stur x0,[x29, #-0x88]
7101a1b278  bl 0x710392eb40
7101a1b27c  ldur x0,[x29, #-0x78]
7101a1b280  cbz x0,0x7101a1b290
7101a1b284  ldr x8,[sp, #0x10]
7101a1b288  str x0,[x8]
7101a1b28c  bl 0x710392eb40
7101a1b290  ldr x0,[x19, #0x168]
7101a1b294  mov x1,#0xb807
7101a1b298  movk x1,#0xb1cc, LSL #16
7101a1b29c  movk x1,#0x11, LSL #32
7101a1b2a0  bl 0x71032631a0
7101a1b2a4  and x8,x0,#-0x100000000000000
7101a1b2a8  and x9,x0,#0xffffffffff
7101a1b2ac  cmp x8,x24
7101a1b2b0  b.ne 0x7101a1b2c8
7101a1b2b4  cbz x9,0x7101a1b2c8
7101a1b2b8  eor x8,x0,x20
7101a1b2bc  tst x8,#0xffffffffff
7101a1b2c0  b.ne 0x7101a1b2d4
7101a1b2c4  b 0x7101a1b2e4
7101a1b2c8  cbz x9,0x7101a1b2d4
7101a1b2cc  cmp x8,x24
7101a1b2d0  b.eq 0x7101a1b2e4
7101a1b2d4  ldrb w8,[x23, #0xf83]
7101a1b2d8  cbz w8,0x7101a1b2ec
7101a1b2dc  ldr w8,[sp, #0xc]
7101a1b2e0  cbz w8,0x7101a1b304
7101a1b2e4  mov w20,#0x1
7101a1b2e8  b 0x7101a1b308
7101a1b2ec  add x0,x19,#0x160
7101a1b2f0  mov x1,x20
7101a1b2f4  bl 0x7103265e70
7101a1b2f8  ldr w8,[sp, #0xc]
7101a1b2fc  orr w8,w8,w0
7101a1b300  tbnz w8,#0x0,0x7101a1b2e4
7101a1b304  mov w20,wzr
7101a1b308  adrp x1,0x71043ad000
7101a1b30c  add x1,x1,#0x164
7101a1b310  sub x8,x29,#0x78
7101a1b314  mov x0,x22
7101a1b318  mov w2,wzr
7101a1b31c  bl 0x7103776910
7101a1b320  ldp x8,x9,[sp, #0xa8]
7101a1b324  cmp x9,x8
7101a1b328  b.eq 0x7101a1b47c
7101a1b32c  add x1,x8,#0x8
7101a1b330  sub x0,x29,#0x78
7101a1b334  mov w2,#0x1
7101a1b338  mov w3,w20
7101a1b33c  bl 0x710377a280
7101a1b340  ldur x0,[x29, #-0x70]
7101a1b344  adrp x19,0x710523d000
7101a1b348  add x19,x19,#0x9a8
7101a1b34c  stp x19,xzr,[x29, #-0x78]
7101a1b350  cbz x0,0x7101a1b358
7101a1b354  bl 0x710392eb40
7101a1b358  adrp x1,0x71043ad000
7101a1b35c  add x1,x1,#0x164
7101a1b360  sub x8,x29,#0x78
7101a1b364  mov w2,#0x1
7101a1b368  mov x0,x22
7101a1b36c  bl 0x7103776910
7101a1b370  ldp x8,x9,[sp, #0xa8]
7101a1b374  sub x9,x9,x8
7101a1b378  mov x21,#0x8e39
7101a1b37c  movk x21,#0x38e3, LSL #16
7101a1b380  movk x21,#0xe38e, LSL #32
7101a1b384  movk x21,#0x8e38, LSL #48
7101a1b388  asr x9,x9,#0x3
7101a1b38c  mul x9,x9,x21
7101a1b390  cmp x9,#0x1
7101a1b394  b.ls 0x7101a1b47c
7101a1b398  add x1,x8,#0x50
7101a1b39c  sub x0,x29,#0x78
7101a1b3a0  mov w2,#0x1
7101a1b3a4  mov w3,w20
7101a1b3a8  bl 0x710377a280
7101a1b3ac  ldur x0,[x29, #-0x70]
7101a1b3b0  stp x19,xzr,[x29, #-0x78]
7101a1b3b4  cbz x0,0x7101a1b3bc
7101a1b3b8  bl 0x710392eb40
7101a1b3bc  adrp x1,0x71043ad000
7101a1b3c0  add x1,x1,#0x164
7101a1b3c4  sub x8,x29,#0x78
7101a1b3c8  mov w2,#0x2
7101a1b3cc  mov x0,x22
7101a1b3d0  bl 0x7103776910
7101a1b3d4  ldp x8,x9,[sp, #0xa8]
7101a1b3d8  sub x9,x9,x8
7101a1b3dc  asr x9,x9,#0x3
7101a1b3e0  mul x9,x9,x21
7101a1b3e4  cmp x9,#0x3
7101a1b3e8  b.cc 0x7101a1b47c
7101a1b3ec  add x1,x8,#0x98
7101a1b3f0  sub x0,x29,#0x78
7101a1b3f4  mov w2,#0x1
7101a1b3f8  mov w3,w20
7101a1b3fc  bl 0x710377a280
7101a1b400  ldur x0,[x29, #-0x70]
7101a1b404  stp x19,xzr,[x29, #-0x78]
7101a1b408  cbz x0,0x7101a1b410
7101a1b40c  bl 0x710392eb40
7101a1b410  ldr x0,[sp, #0xa8]
7101a1b414  cbz x0,0x7101a1b420
7101a1b418  str x0,[sp, #0xb0]
7101a1b41c  bl 0x710392eb40
7101a1b420  ldr x20,[sp, #0x90]
7101a1b424  adrp x19,0x710523d000
7101a1b428  add x19,x19,#0x9a8
7101a1b42c  stp x19,xzr,[sp, #0x88]
7101a1b430  cbz x20,0x7101a1b43c
7101a1b434  mov x0,x20
7101a1b438  bl 0x710392eb40
7101a1b43c  ldr x0,[sp, #0xa0]
7101a1b440  stp x19,xzr,[sp, #0x98]
7101a1b444  cbz x0,0x7101a1b44c
7101a1b448  bl 0x710392eb40
7101a1b44c  ldp x29,x30,[sp, #0x1b0]
7101a1b450  ldp x20,x19,[sp, #0x1a0]
7101a1b454  ldp x22,x21,[sp, #0x190]
7101a1b458  ldp x24,x23,[sp, #0x180]
7101a1b45c  ldp x26,x25,[sp, #0x170]
7101a1b460  ldp x28,x27,[sp, #0x160]
7101a1b464  add sp,sp,#0x1c0
7101a1b468  ret
7101a1b46c  sub x0,x29,#0x90
7101a1b470  bl 0x71039c0c00
7101a1b474  sub x0,x29,#0xa8
7101a1b478  bl 0x71039c0c00
7101a1b47c  add x0,sp,#0xa8
7101a1b480  bl 0x71039c1330
7101a1b484  add x0,x21,#0x250
7101a1b488  bl 0x71039c1330
7101a1b48c  sub x0,x29,#0x78
7101a1b490  bl 0x71039c0c00
