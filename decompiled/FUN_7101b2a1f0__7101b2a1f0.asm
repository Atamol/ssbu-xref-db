// addr:      7101b2a1f0
// offset:    0x1b2a1f0
// name:      FUN_7101b2a1f0
// mangled:   
// size:      30364

7101b2a1f0  stp d15,d14,[sp, #-0xa0]!
7101b2a1f4  stp d13,d12,[sp, #0x10]
7101b2a1f8  stp d11,d10,[sp, #0x20]
7101b2a1fc  stp d9,d8,[sp, #0x30]
7101b2a200  stp x28,x27,[sp, #0x40]
7101b2a204  stp x26,x25,[sp, #0x50]
7101b2a208  stp x24,x23,[sp, #0x60]
7101b2a20c  stp x22,x21,[sp, #0x70]
7101b2a210  stp x20,x19,[sp, #0x80]
7101b2a214  stp x29,x30,[sp, #0x90]
7101b2a218  add x29,sp,#0x90
7101b2a21c  sub sp,sp,#0x690
7101b2a220  adrp x8,0x7105314000
7101b2a224  add x8,x8,#0x4d8
7101b2a228  ldarb w8,[x8]
7101b2a22c  mov x23,x1
7101b2a230  mov x27,x0
7101b2a234  tbz w8,#0x0,0x7101b317d8
7101b2a238  adrp x8,0x7105305000
7101b2a23c  ldr w8,[x8, #0xf0]
7101b2a240  mov w9,#0x4090000
7101b2a244  cmp w8,w9
7101b2a248  b.ne 0x7101b2a258
7101b2a24c  mov w8,#0xa
7101b2a250  movk w8,#0x50, LSL #16
7101b2a254  str w8,[x27, #0x8]
7101b2a258  ldp x8,x10,[x23]
7101b2a25c  ldrb w9,[x23, #0x1d9]
7101b2a260  ldr x1,[x27, #0x48]
7101b2a264  mov x3,#0xa517
7101b2a268  movk x3,#0x7aa1, LSL #16
7101b2a26c  movk x3,#0x2d, LSL #32
7101b2a270  sub x8,x10,x8
7101b2a274  lsr x8,x8,#0x3
7101b2a278  cmp w8,#0x6e
7101b2a27c  cbz w9,0x7101b2a290
7101b2a280  b.gt 0x7101b2a2a0
7101b2a284  adrp x2,0x71050aa000
7101b2a288  add x2,x2,#0x7a0
7101b2a28c  b 0x7101b2a2a8
7101b2a290  b.gt 0x7101b2a458
7101b2a294  adrp x2,0x71050aa000
7101b2a298  add x2,x2,#0x7c0
7101b2a29c  b 0x7101b2a460
7101b2a2a0  adrp x2,0x71050aa000
7101b2a2a4  add x2,x2,#0x7b0
7101b2a2a8  mov w4,#0x2
7101b2a2ac  mov x0,x27
7101b2a2b0  bl 0x71032cb040
7101b2a2b4  mov w1,#0x120
7101b2a2b8  mov w0,#0x10
7101b2a2bc  bl 0x710392e290
7101b2a2c0  mov x19,x0
7101b2a2c4  cbnz x0,0x7101b2a310
7101b2a2c8  adrp x8,0x7105332000
7101b2a2cc  ldr x0,[x8, #0xf00]
7101b2a2d0  cbz x0,0x7101b2a30c
7101b2a2d4  mov w8,#0x120
7101b2a2d8  str wzr,[sp, #0x3b8]
7101b2a2dc  add x1,sp,#0x3b8
7101b2a2e0  str x8,[sp, #0x470]
7101b2a2e4  ldr x8,[x0]
7101b2a2e8  ldr x8,[x8, #0x30]
7101b2a2ec  add x2,sp,#0x470
7101b2a2f0  blr x8
7101b2a2f4  tbz w0,#0x0,0x7101b2a30c
7101b2a2f8  mov w1,#0x120
7101b2a2fc  mov w0,#0x10
7101b2a300  bl 0x710392e290
7101b2a304  mov x19,x0
7101b2a308  cbnz x0,0x7101b2a310
7101b2a30c  mov x19,xzr
7101b2a310  adrp x8,0x71050aa000
7101b2a314  add x8,x8,#0x430
7101b2a318  add x0,x19,#0x18
7101b2a31c  stp xzr,xzr,[x19, #0x8]
7101b2a320  str x8,[x19]
7101b2a324  bl 0x7103776290
7101b2a328  adrp x8,0x710523d000
7101b2a32c  add x8,x8,#0x9a8
7101b2a330  mov w0,#0x10
7101b2a334  mov w1,#0x20
7101b2a338  str x8,[x19, #0x28]
7101b2a33c  bl 0x710392e290
7101b2a340  cbnz x0,0x7101b2a388
7101b2a344  adrp x8,0x7105332000
7101b2a348  ldr x0,[x8, #0xf00]
7101b2a34c  cbz x0,0x7101b2a384
7101b2a350  mov w8,#0x20
7101b2a354  str wzr,[sp, #0x3b8]
7101b2a358  add x1,sp,#0x3b8
7101b2a35c  str x8,[sp, #0x470]
7101b2a360  ldr x8,[x0]
7101b2a364  ldr x8,[x8, #0x30]
7101b2a368  add x2,sp,#0x470
7101b2a36c  blr x8
7101b2a370  tbz w0,#0x0,0x7101b2a384
7101b2a374  mov w0,#0x10
7101b2a378  mov w1,#0x20
7101b2a37c  bl 0x710392e290
7101b2a380  cbnz x0,0x7101b2a388
7101b2a384  mov x0,xzr
7101b2a388  mov x8,#0xff0000000000
7101b2a38c  movk x8,#0xd9ff, LSL #48
7101b2a390  mov x20,x8
7101b2a394  stp xzr,xzr,[x0, #0x10]
7101b2a398  stp xzr,xzr,[x0]
7101b2a39c  strb wzr,[x19, #0x88]
7101b2a3a0  stp xzr,x8,[x19, #0x60]
7101b2a3a4  orr x8,xzr,#-0x100000000
7101b2a3a8  stp x20,x8,[x19, #0x70]
7101b2a3ac  mov x8,#-0x1
7101b2a3b0  str x8,[x19, #0x80]
7101b2a3b4  adrp x8,0x71050aa000
7101b2a3b8  add x8,x8,#0x480
7101b2a3bc  str x8,[x19]
7101b2a3c0  add x8,x8,#0x60
7101b2a3c4  stp x0,xzr,[x19, #0x30]
7101b2a3c8  add x0,x19,#0xa0
7101b2a3cc  stp xzr,xzr,[x19, #0x50]
7101b2a3d0  stp xzr,xzr,[x19, #0x40]
7101b2a3d4  stp x8,xzr,[x19, #0x90]
7101b2a3d8  bl 0x71032cc410
7101b2a3dc  mov x8,x19
7101b2a3e0  stp xzr,xzr,[x19, #0xd0]
7101b2a3e4  str xzr,[x19, #0xc8]
7101b2a3e8  mov w9,#0x2710
7101b2a3ec  adrp x10,0x710532f000
7101b2a3f0  str xzr,[x8, #0xe8]!
7101b2a3f4  str x8,[x19, #0xe0]
7101b2a3f8  mov w8,#0xffffffff
7101b2a3fc  fmov s8,wzr
7101b2a400  str w9,[x19, #0x118]
7101b2a404  mov w9,#0x100
7101b2a408  mov v0.16B,v8.16B
7101b2a40c  stp xzr,xzr,[x19, #0xf0]
7101b2a410  mov x1,#0x526e
7101b2a414  movk x1,#0xf135, LSL #16
7101b2a418  movk x1,#0x1a, LSL #32
7101b2a41c  str xzr,[x19, #0x110]
7101b2a420  strh w9,[x19, #0x11c]
7101b2a424  stp x20,x8,[x19, #0x100]
7101b2a428  ldr x20,[x10, #0x8c0]
7101b2a42c  ldr x0,[x20, #0x8]
7101b2a430  bl 0x71033112b0
7101b2a434  str s0,[x19, #0x110]
7101b2a438  ldr x0,[x20, #0x8]
7101b2a43c  mov v0.16B,v8.16B
7101b2a440  mov x1,#0xecb4
7101b2a444  movk x1,#0x1268, LSL #16
7101b2a448  movk x1,#0x1a, LSL #32
7101b2a44c  bl 0x71033112b0
7101b2a450  str s0,[x19, #0x114]
7101b2a454  b 0x7101b2a58c
7101b2a458  adrp x2,0x71050aa000
7101b2a45c  add x2,x2,#0x7d0
7101b2a460  mov w4,#0x2
7101b2a464  mov x0,x27
7101b2a468  bl 0x71032cb040
7101b2a46c  mov w1,#0x98
7101b2a470  mov w0,#0x10
7101b2a474  bl 0x710392e290
7101b2a478  mov x19,x0
7101b2a47c  cbnz x0,0x7101b2a4c8
7101b2a480  adrp x8,0x7105332000
7101b2a484  ldr x0,[x8, #0xf00]
7101b2a488  cbz x0,0x7101b2a4c4
7101b2a48c  mov w8,#0x98
7101b2a490  str wzr,[sp, #0x3b8]
7101b2a494  add x1,sp,#0x3b8
7101b2a498  str x8,[sp, #0x470]
7101b2a49c  ldr x8,[x0]
7101b2a4a0  ldr x8,[x8, #0x30]
7101b2a4a4  add x2,sp,#0x470
7101b2a4a8  blr x8
7101b2a4ac  tbz w0,#0x0,0x7101b2a4c4
7101b2a4b0  mov w1,#0x98
7101b2a4b4  mov w0,#0x10
7101b2a4b8  bl 0x710392e290
7101b2a4bc  mov x19,x0
7101b2a4c0  cbnz x0,0x7101b2a4c8
7101b2a4c4  mov x19,xzr
7101b2a4c8  adrp x8,0x71050aa000
7101b2a4cc  add x8,x8,#0x430
7101b2a4d0  add x0,x19,#0x18
7101b2a4d4  stp xzr,xzr,[x19, #0x8]
7101b2a4d8  str x8,[x19]
7101b2a4dc  bl 0x7103776290
7101b2a4e0  adrp x8,0x710523d000
7101b2a4e4  add x8,x8,#0x9a8
7101b2a4e8  mov w0,#0x10
7101b2a4ec  mov w1,#0x20
7101b2a4f0  str x8,[x19, #0x28]
7101b2a4f4  bl 0x710392e290
7101b2a4f8  cbnz x0,0x7101b2a540
7101b2a4fc  adrp x8,0x7105332000
7101b2a500  ldr x0,[x8, #0xf00]
7101b2a504  cbz x0,0x7101b2a53c
7101b2a508  mov w8,#0x20
7101b2a50c  str wzr,[sp, #0x3b8]
7101b2a510  add x1,sp,#0x3b8
7101b2a514  str x8,[sp, #0x470]
7101b2a518  ldr x8,[x0]
7101b2a51c  ldr x8,[x8, #0x30]
7101b2a520  add x2,sp,#0x470
7101b2a524  blr x8
7101b2a528  tbz w0,#0x0,0x7101b2a53c
7101b2a52c  mov w0,#0x10
7101b2a530  mov w1,#0x20
7101b2a534  bl 0x710392e290
7101b2a538  cbnz x0,0x7101b2a540
7101b2a53c  mov x0,xzr
7101b2a540  mov x8,#0xff0000000000
7101b2a544  movk x8,#0xd9ff, LSL #48
7101b2a548  mov x9,x8
7101b2a54c  stp xzr,xzr,[x0, #0x10]
7101b2a550  stp xzr,xzr,[x0]
7101b2a554  strb wzr,[x19, #0x88]
7101b2a558  stp xzr,x8,[x19, #0x60]
7101b2a55c  orr x8,xzr,#-0x100000000
7101b2a560  stp x9,x8,[x19, #0x70]
7101b2a564  mov x8,#-0x1
7101b2a568  str x8,[x19, #0x80]
7101b2a56c  adrp x8,0x71050aa000
7101b2a570  add x8,x8,#0x7f0
7101b2a574  str x8,[x19]
7101b2a578  add x8,x8,#0x60
7101b2a57c  str x8,[x19, #0x90]
7101b2a580  stp xzr,xzr,[x19, #0x50]
7101b2a584  stp xzr,xzr,[x19, #0x40]
7101b2a588  stp x0,xzr,[x19, #0x30]
7101b2a58c  ldr x0,[x27, #0x180]
7101b2a590  str x19,[x27, #0x180]
7101b2a594  cbz x0,0x7101b2a5a4
7101b2a598  ldr x8,[x0]
7101b2a59c  ldr x8,[x8, #0x38]
7101b2a5a0  blr x8
7101b2a5a4  mov x24,x27
7101b2a5a8  ldr x8,[x24, #0x10]!
7101b2a5ac  ldr x9,[x24, #0x8]
7101b2a5b0  cmp x9,x8
7101b2a5b4  b.eq 0x7101b31858
7101b2a5b8  ldr x19,[x8]
7101b2a5bc  ldr x8,[x19]
7101b2a5c0  ldr x8,[x8]
7101b2a5c4  ldr x8,[x8]
7101b2a5c8  ldr x9,[x8, #0x600]
7101b2a5cc  strb wzr,[x8, #0x656]
7101b2a5d0  strb wzr,[x9, #0x4ab]
7101b2a5d4  ldr x9,[x8, #0x608]
7101b2a5d8  ldr x10,[x8, #0x610]
7101b2a5dc  cmp x9,x10
7101b2a5e0  b.eq 0x7101b2a65c
7101b2a5e4  sub x11,x10,#0x10
7101b2a5e8  sub x11,x11,x9
7101b2a5ec  ubfx x12,x11,#0x4,#0x1c
7101b2a5f0  add w12,w12,#0x1
7101b2a5f4  ands x12,x12,#0x3
7101b2a5f8  b.eq 0x7101b2a618
7101b2a5fc  neg x12,x12
7101b2a600  ldrb w13,[x8, #0x656]
7101b2a604  ldr x14,[x9, #0x8]
7101b2a608  add x9,x9,#0x10
7101b2a60c  adds x12,x12,#0x1
7101b2a610  strb w13,[x14, #0x4ab]
7101b2a614  b.ne 0x7101b2a600
7101b2a618  cmp x11,#0x30
7101b2a61c  b.cc 0x7101b2a65c
7101b2a620  ldrb w11,[x8, #0x656]
7101b2a624  ldr x12,[x9, #0x8]
7101b2a628  strb w11,[x12, #0x4ab]
7101b2a62c  ldrb w11,[x8, #0x656]
7101b2a630  ldr x12,[x9, #0x18]
7101b2a634  strb w11,[x12, #0x4ab]
7101b2a638  ldrb w11,[x8, #0x656]
7101b2a63c  ldr x12,[x9, #0x28]
7101b2a640  strb w11,[x12, #0x4ab]
7101b2a644  ldrb w11,[x8, #0x656]
7101b2a648  ldr x12,[x9, #0x38]
7101b2a64c  add x9,x9,#0x40
7101b2a650  cmp x10,x9
7101b2a654  strb w11,[x12, #0x4ab]
7101b2a658  b.ne 0x7101b2a620
7101b2a65c  ldr x8,[x19]
7101b2a660  ldr x8,[x8]
7101b2a664  ldr x0,[x8]
7101b2a668  mov w1,wzr
7101b2a66c  bl 0x71037760f0
7101b2a670  ldr x8,[x19]
7101b2a674  ldr x25,[x8]
7101b2a678  ldrb w8,[x23, #0x38]
7101b2a67c  strb w8,[x27, #0x1dc]
7101b2a680  ldr w19,[x23, #0x30]
7101b2a684  str w19,[x27, #0x1e0]
7101b2a688  ldr x8,[x23, #0x48]
7101b2a68c  str x8,[x27, #0x1e8]
7101b2a690  ldrb w8,[x23, #0x1d5]
7101b2a694  strb w8,[x27, #0x1f0]
7101b2a698  ldrb w8,[x23, #0x1d6]
7101b2a69c  strb w8,[x27, #0x1f1]
7101b2a6a0  ldrb w8,[x23, #0x1d7]
7101b2a6a4  strb w8,[x27, #0x1f2]
7101b2a6a8  ldrb w8,[x23, #0x1d8]
7101b2a6ac  strb w8,[x27, #0x1f3]
7101b2a6b0  ldrb w9,[x23, #0x1d9]
7101b2a6b4  orr w8,w9,w8
7101b2a6b8  strb w9,[x27, #0x1f4]
7101b2a6bc  and w9,w8,#0xff
7101b2a6c0  eor w8,w8,#0x1
7101b2a6c4  cmp w19,#0x4
7101b2a6c8  csel w8,wzr,w8,eq
7101b2a6cc  strb w8,[x27, #0x1f5]
7101b2a6d0  cbz w9,0x7101b2a6e4
7101b2a6d4  mov w9,wzr
7101b2a6d8  mov w8,wzr
7101b2a6dc  strb wzr,[x27, #0x1f7]
7101b2a6e0  b 0x7101b2a6f4
7101b2a6e4  ldrb w8,[x23, #0x1de]
7101b2a6e8  strb w8,[x27, #0x1f7]
7101b2a6ec  ldrb w9,[x23, #0x1df]
7101b2a6f0  mov w8,#0x1
7101b2a6f4  cmp w19,#0x3
7101b2a6f8  strb w9,[x27, #0x201]
7101b2a6fc  strb w8,[x27, #0x1f6]
7101b2a700  b.eq 0x7101b2a71c
7101b2a704  cmp w19,#0x4
7101b2a708  b.ne 0x7101b2a72c
7101b2a70c  mov w8,#0x1
7101b2a710  str wzr,[sp, #0x44]
7101b2a714  str w8,[sp, #0x8c]
7101b2a718  b 0x7101b2a734
7101b2a71c  mov w8,#0x1
7101b2a720  str wzr,[sp, #0x8c]
7101b2a724  str w8,[sp, #0x44]
7101b2a728  b 0x7101b2a734
7101b2a72c  str wzr,[sp, #0x8c]
7101b2a730  str wzr,[sp, #0x44]
7101b2a734  ldr x8,[x27, #0x50]
7101b2a738  ldrb w9,[x8, #0x78]
7101b2a73c  add x26,x25,#0x8
7101b2a740  cbnz w9,0x7101b2a750
7101b2a744  mov w9,#0x2
7101b2a748  str w9,[x8, #0x68]
7101b2a74c  ldr w19,[x27, #0x1e0]
7101b2a750  adrp x8,0x7104412000
7101b2a754  add x8,x8,#0x575
7101b2a758  adrp x9,0x710436b000
7101b2a75c  add x9,x9,#0xf0b
7101b2a760  adrp x10,0x71043be000
7101b2a764  add x10,x10,#0x2db
7101b2a768  str x8,[sp, #0x410]
7101b2a76c  str x9,[sp, #0x418]
7101b2a770  str x10,[sp, #0x420]
7101b2a774  add x10,sp,#0x410
7101b2a778  str x9,[sp, #0x428]
7101b2a77c  str x8,[sp, #0x430]
7101b2a780  ldr x1,[x10, w19, SXTW #0x3]
7101b2a784  ldr x0,[x25, #0x10]
7101b2a788  fmov s0,0x3f800000
7101b2a78c  bl 0x7103778300
7101b2a790  adrp x8,0x7104544000
7101b2a794  add x8,x8,#0x878
7101b2a798  ldr w9,[x27, #0x1e0]
7101b2a79c  ldr w8,[x8, w19, SXTW #0x2]
7101b2a7a0  cmp w9,#0x4
7101b2a7a4  str w8,[x27, #0x1d8]
7101b2a7a8  cset w8,eq
7101b2a7ac  cmp w9,#0x3
7101b2a7b0  str w8,[x27, #0x1e4]
7101b2a7b4  b.eq 0x7101b2a7fc
7101b2a7b8  adrp x1,0x71043be000
7101b2a7bc  add x1,x1,#0x2e8
7101b2a7c0  add x8,sp,#0x470
7101b2a7c4  mov x0,x26
7101b2a7c8  bl 0x7103776910
7101b2a7cc  ldr x0,[sp, #0x478]
7101b2a7d0  ldr x8,[x0]
7101b2a7d4  cbz x8,0x7101b2a7e4
7101b2a7d8  ldrb w9,[x8, #0x58]
7101b2a7dc  and w9,w9,#0xfe
7101b2a7e0  strb w9,[x8, #0x58]
7101b2a7e4  adrp x8,0x710523d000
7101b2a7e8  add x8,x8,#0x9a8
7101b2a7ec  str x8,[sp, #0x470]
7101b2a7f0  str xzr,[sp, #0x478]
7101b2a7f4  cbz x0,0x7101b2a7fc
7101b2a7f8  bl 0x710392eb40
7101b2a7fc  ldr w8,[x23, #0x3c]
7101b2a800  ldr x0,[x25, #0x10]
7101b2a804  cmp w8,#0x1
7101b2a808  b.ne 0x7101b2a948
7101b2a80c  fmov s8,0x3f800000
7101b2a810  mov v0.16B,v8.16B
7101b2a814  adrp x1,0x71042a2000
7101b2a818  add x1,x1,#0xb60
7101b2a81c  bl 0x7103778300
7101b2a820  adrp x1,0x7104349000
7101b2a824  add x1,x1,#0xf4c
7101b2a828  add x8,sp,#0x470
7101b2a82c  mov x0,x26
7101b2a830  bl 0x7103776640
7101b2a834  ldr x19,[sp, #0x478]
7101b2a838  mov v0.16B,v8.16B
7101b2a83c  add x22,x23,#0xbc
7101b2a840  mov x1,x22
7101b2a844  mov x0,x19
7101b2a848  bl 0x7103778300
7101b2a84c  adrp x1,0x7104401000
7101b2a850  add x1,x1,#0x66c
7101b2a854  add x8,sp,#0x3b8
7101b2a858  mov x0,x26
7101b2a85c  bl 0x7103776640
7101b2a860  ldr x21,[sp, #0x3c0]
7101b2a864  mov v0.16B,v8.16B
7101b2a868  mov x1,x22
7101b2a86c  mov x0,x21
7101b2a870  bl 0x7103778300
7101b2a874  adrp x1,0x71042a2000
7101b2a878  add x1,x1,#0xf02
7101b2a87c  add x8,sp,#0x350
7101b2a880  add x0,sp,#0x3b8
7101b2a884  bl 0x7103776910
7101b2a888  adrp x1,0x710438c000
7101b2a88c  add x1,x1,#0xb0e
7101b2a890  add x8,sp,#0x2e8
7101b2a894  add x0,sp,#0x3b8
7101b2a898  bl 0x7103776910
7101b2a89c  add x1,x23,#0x14c
7101b2a8a0  add x3,x23,#0x104
7101b2a8a4  adrp x4,0x710438c000
7101b2a8a8  add x4,x4,#0x560
7101b2a8ac  add x0,sp,#0x350
7101b2a8b0  mov w2,#0x2
7101b2a8b4  bl 0x710377a280
7101b2a8b8  add x1,x23,#0x194
7101b2a8bc  add x0,sp,#0x2e8
7101b2a8c0  bl 0x710377a120
7101b2a8c4  ldr x0,[sp, #0x2f0]
7101b2a8c8  adrp x20,0x710523d000
7101b2a8cc  add x20,x20,#0x9a8
7101b2a8d0  str x20,[sp, #0x2e8]
7101b2a8d4  str xzr,[sp, #0x2f0]
7101b2a8d8  cbz x0,0x7101b2a8e0
7101b2a8dc  bl 0x710392eb40
7101b2a8e0  ldr x0,[sp, #0x358]
7101b2a8e4  str x20,[sp, #0x350]
7101b2a8e8  str xzr,[sp, #0x358]
7101b2a8ec  cbz x0,0x7101b2a8f4
7101b2a8f0  bl 0x710392eb40
7101b2a8f4  adrp x22,0x710523d000
7101b2a8f8  add x22,x22,#0x988
7101b2a8fc  str x22,[sp, #0x3b8]
7101b2a900  str xzr,[sp, #0x3c0]
7101b2a904  cbz x21,0x7101b2a920
7101b2a908  ldr x0,[x21, #0x18]
7101b2a90c  stp x20,xzr,[x21, #0x10]
7101b2a910  cbz x0,0x7101b2a918
7101b2a914  bl 0x710392eb40
7101b2a918  mov x0,x21
7101b2a91c  bl 0x710392eb40
7101b2a920  str x22,[sp, #0x470]
7101b2a924  str xzr,[sp, #0x478]
7101b2a928  cbz x19,0x7101b2a958
7101b2a92c  ldr x0,[x19, #0x18]
7101b2a930  stp x20,xzr,[x19, #0x10]
7101b2a934  cbz x0,0x7101b2a93c
7101b2a938  bl 0x710392eb40
7101b2a93c  mov x0,x19
7101b2a940  bl 0x710392eb40
7101b2a944  b 0x7101b2a958
7101b2a948  fmov s0,0x3f800000
7101b2a94c  adrp x1,0x71043ad000
7101b2a950  add x1,x1,#0x380
7101b2a954  bl 0x7103778300
7101b2a958  ldr x0,[x27, #0x180]
7101b2a95c  ldr x8,[x0]
7101b2a960  ldrb w4,[x27, #0x1f2]
7101b2a964  ldrb w6,[x23, #0x1de]
7101b2a968  add x5,x23,#0x18
7101b2a96c  mov x1,x24
7101b2a970  mov x2,x23
7101b2a974  ldr x8,[x8]
7101b2a978  ldr w3,[sp, #0x8c]
7101b2a97c  blr x8
7101b2a980  mov x0,x27
7101b2a984  mov w1,wzr
7101b2a988  bl 0x7101b2a000
7101b2a98c  mov w1,#0x1
7101b2a990  mov x0,x27
7101b2a994  bl 0x7101b2a000
7101b2a998  mov w1,#0x2
7101b2a99c  mov x0,x27
7101b2a9a0  mov w19,#0x2
7101b2a9a4  bl 0x7101b2a000
7101b2a9a8  orr w1,wzr,#0x3
7101b2a9ac  mov x0,x27
7101b2a9b0  bl 0x7101b2a000
7101b2a9b4  mov w1,#0x4
7101b2a9b8  mov x0,x27
7101b2a9bc  bl 0x7101b2a000
7101b2a9c0  add x1,x23,#0x54
7101b2a9c4  mov x0,x27
7101b2a9c8  bl 0x7101b31890
7101b2a9cc  ldr w8,[x23, #0x34]
7101b2a9d0  cmp w8,#0x1
7101b2a9d4  b.ne 0x7101b2aa04
7101b2a9d8  ldrb w9,[x27, #0x1dc]
7101b2a9dc  cmp x9,#0x7
7101b2a9e0  b.hi 0x7101b2aad4
7101b2a9e4  adrp x8,0x710593b000
7101b2a9e8  ldr x8,[x8, #0x990]
7101b2a9ec  ldr x10,[x8, #0x8]
7101b2a9f0  ldr w8,[x10, x9, LSL #0x2]
7101b2a9f4  cmn w8,#0x1
7101b2a9f8  b.eq 0x7101b2aa0c
7101b2a9fc  mov w19,wzr
7101b2aa00  b 0x7101b2aaf8
7101b2aa04  mov w8,#0xffffffff
7101b2aa08  b 0x7101b2aaf8
7101b2aa0c  cbz w9,0x7101b2aa2c
7101b2aa10  ldr w8,[x10]
7101b2aa14  cmn w8,#0x1
7101b2aa18  b.eq 0x7101b2aa24
7101b2aa1c  mov w9,wzr
7101b2aa20  b 0x7101b2aaf0
7101b2aa24  cmp w9,#0x1
7101b2aa28  b.eq 0x7101b2aa48
7101b2aa2c  ldr w8,[x10, #0x4]
7101b2aa30  cmn w8,#0x1
7101b2aa34  b.eq 0x7101b2aa40
7101b2aa38  mov w9,#0x1
7101b2aa3c  b 0x7101b2aaf0
7101b2aa40  cmp w9,#0x2
7101b2aa44  b.eq 0x7101b2aa64
7101b2aa48  ldr w8,[x10, #0x8]
7101b2aa4c  cmn w8,#0x1
7101b2aa50  b.eq 0x7101b2aa5c
7101b2aa54  mov w9,#0x2
7101b2aa58  b 0x7101b2aaf0
7101b2aa5c  cmp w9,#0x3
7101b2aa60  b.eq 0x7101b2aa80
7101b2aa64  ldr w8,[x10, #0xc]
7101b2aa68  cmn w8,#0x1
7101b2aa6c  b.eq 0x7101b2aa78
7101b2aa70  orr w9,wzr,#0x3
7101b2aa74  b 0x7101b2aaf0
7101b2aa78  cmp w9,#0x4
7101b2aa7c  b.eq 0x7101b2aa9c
7101b2aa80  ldr w8,[x10, #0x10]
7101b2aa84  cmn w8,#0x1
7101b2aa88  b.eq 0x7101b2aa94
7101b2aa8c  mov w9,#0x4
7101b2aa90  b 0x7101b2aaf0
7101b2aa94  cmp w9,#0x5
7101b2aa98  b.eq 0x7101b2aab8
7101b2aa9c  ldr w8,[x10, #0x14]
7101b2aaa0  cmn w8,#0x1
7101b2aaa4  b.eq 0x7101b2aab0
7101b2aaa8  mov w9,#0x5
7101b2aaac  b 0x7101b2aaf0
7101b2aab0  cmp w9,#0x6
7101b2aab4  b.eq 0x7101b2aae0
7101b2aab8  ldr w8,[x10, #0x18]
7101b2aabc  cmn w8,#0x1
7101b2aac0  b.eq 0x7101b2aacc
7101b2aac4  orr w9,wzr,#0x6
7101b2aac8  b 0x7101b2aaf0
7101b2aacc  cmp w9,#0x7
7101b2aad0  b.ne 0x7101b2aae0
7101b2aad4  mov w19,#0x2
7101b2aad8  mov w8,#0xffffffff
7101b2aadc  b 0x7101b2aaf8
7101b2aae0  ldr w8,[x10, #0x1c]
7101b2aae4  cmn w8,#0x1
7101b2aae8  b.eq 0x7101b317d0
7101b2aaec  orr w9,wzr,#0x7
7101b2aaf0  mov w19,wzr
7101b2aaf4  strb w9,[x27, #0x1dc]
7101b2aaf8  ldp x10,x11,[x27, #0x10]
7101b2aafc  sub x9,x11,x10
7101b2ab00  lsr x9,x9,#0x3
7101b2ab04  cmp w9,#0x1
7101b2ab08  b.lt 0x7101b2ab88
7101b2ab0c  mov x9,xzr
7101b2ab10  sub x11,x11,x10
7101b2ab14  asr x11,x11,#0x3
7101b2ab18  cmp x11,x9
7101b2ab1c  b.ls 0x7101b31858
7101b2ab20  ldr x10,[x10, x9, LSL #0x3]
7101b2ab24  ldr x10,[x10]
7101b2ab28  ldr x11,[x10]
7101b2ab2c  ldr x11,[x11]
7101b2ab30  ldr x11,[x11, #0x600]
7101b2ab34  str w19,[x11, #0x484]
7101b2ab38  str w8,[x11, #0x488]
7101b2ab3c  cbnz w19,0x7101b2ab50
7101b2ab40  ldr w12,[x11, #0x48c]
7101b2ab44  cmp w12,w8
7101b2ab48  b.eq 0x7101b2ab50
7101b2ab4c  str w8,[x11, #0x48c]
7101b2ab50  ldr x10,[x10]
7101b2ab54  ldr x10,[x10]
7101b2ab58  ldr x12,[x10, #0x610]
7101b2ab5c  ldr x11,[x10, #0x608]
7101b2ab60  cmp x12,x11
7101b2ab64  b.eq 0x7101b31860
7101b2ab68  ldr x10,[x11, #0x8]
7101b2ab6c  strb wzr,[x10, #0x4aa]
7101b2ab70  add x9,x9,#0x1
7101b2ab74  ldp x10,x11,[x27, #0x10]
7101b2ab78  sub x12,x11,x10
7101b2ab7c  lsr x12,x12,#0x3
7101b2ab80  cmp x9,w12, SXTW 
7101b2ab84  b.lt 0x7101b2ab10
7101b2ab88  cmp x11,x10
7101b2ab8c  b.eq 0x7101b31858
7101b2ab90  ldr x8,[x10]
7101b2ab94  mov w10,#0x20
7101b2ab98  ldr x8,[x8]
7101b2ab9c  ldr x8,[x8]
7101b2aba0  ldr x8,[x8]
7101b2aba4  ldr x9,[x8, #0x600]
7101b2aba8  str w10,[x9, #0x10]
7101b2abac  ldr x9,[x8, #0x600]
7101b2abb0  mov w10,#0x40
7101b2abb4  str w10,[x9, #0x14]
7101b2abb8  ldr x9,[x8, #0x600]
7101b2abbc  mov w10,#0x100
7101b2abc0  str w10,[x9, #0x48]
7101b2abc4  ldr x9,[x8, #0x600]
7101b2abc8  mov w11,#0x200
7101b2abcc  str w11,[x9, #0x4c]
7101b2abd0  ldr x9,[x8, #0x600]
7101b2abd4  mov w12,#0x1
7101b2abd8  movk w12,#0x10, LSL #16
7101b2abdc  str w12,[x9, #0x50]
7101b2abe0  ldr x9,[x8, #0x600]
7101b2abe4  mov w12,#0x4
7101b2abe8  movk w12,#0x40, LSL #16
7101b2abec  str w12,[x9, #0x54]
7101b2abf0  ldr x9,[x8, #0x600]
7101b2abf4  mov w12,#0x8
7101b2abf8  movk w12,#0x80, LSL #16
7101b2abfc  str w12,[x9, #0x58]
7101b2ac00  ldr x9,[x8, #0x600]
7101b2ac04  mov w12,#0x2
7101b2ac08  movk w12,#0x20, LSL #16
7101b2ac0c  str w12,[x9, #0x5c]
7101b2ac10  ldr x9,[x8, #0x600]
7101b2ac14  mov w12,#0x10
7101b2ac18  str w12,[x9, #0x1c]
7101b2ac1c  ldr x9,[x8, #0x600]
7101b2ac20  mov w12,#0x80
7101b2ac24  str w12,[x9, #0x20]
7101b2ac28  ldr x9,[x8, #0x600]
7101b2ac2c  str w11,[x9, #0x60]
7101b2ac30  ldr x9,[x8, #0x600]
7101b2ac34  mov w11,#0x1000000
7101b2ac38  str w11,[x9, #0x40]
7101b2ac3c  ldr x9,[x8, #0x600]
7101b2ac40  mov w11,#0x4000000
7101b2ac44  str w11,[x9, #0x44]
7101b2ac48  ldr x9,[x8, #0x600]
7101b2ac4c  orr w11,wzr,#0xc0000
7101b2ac50  str w11,[x9, #0x18]
7101b2ac54  ldr x9,[x8, #0x600]
7101b2ac58  mov w19,#0x1
7101b2ac5c  strb w19,[x9, #0x4a9]
7101b2ac60  ldr x9,[x8, #0x600]
7101b2ac64  orr w11,wzr,#0x300
7101b2ac68  str w11,[x9, #0x170]
7101b2ac6c  ldr x9,[x8, #0x600]
7101b2ac70  str w10,[x9, #0x12c]
7101b2ac74  ldr x9,[x8, #0x600]
7101b2ac78  str w11,[x9, #0xcc]
7101b2ac7c  ldr x9,[x8, #0x600]
7101b2ac80  str w11,[x9, #0xd0]
7101b2ac84  ldr x9,[x8, #0x600]
7101b2ac88  str w11,[x9, #0xd4]
7101b2ac8c  ldr x8,[x8, #0x600]
7101b2ac90  str w11,[x8, #0xd8]
7101b2ac94  ldrb w21,[x27, #0x1dc]
7101b2ac98  str w21,[sp, #0x400]
7101b2ac9c  str wzr,[sp, #0x404]
7101b2aca0  ldr w8,[x23, #0x34]
7101b2aca4  cmp w8,#0x1
7101b2aca8  cset w8,ne
7101b2acac  strb w8,[sp, #0x408]
7101b2acb0  ldr x0,[x27, #0x60]
7101b2acb4  add x2,sp,#0x400
7101b2acb8  mov x1,x26
7101b2acbc  bl 0x71032d2840
7101b2acc0  ldr w8,[x23, #0x34]
7101b2acc4  cmp w8,#0x1
7101b2acc8  b.ne 0x7101b2ace0
7101b2accc  ldrb w1,[x27, #0x1dc]
7101b2acd0  ldr x0,[x27, #0x60]
7101b2acd4  mov w3,#0xffffffff
7101b2acd8  mov w2,wzr
7101b2acdc  bl 0x71032d2e70
7101b2ace0  ldr x8,[x27, #0x60]
7101b2ace4  adrp x10,0x7104473000
7101b2ace8  ldr s0,[x10, #0x3c]
7101b2acec  adrp x10,0x7104472000
7101b2acf0  ldr s1,[x10, #0x21c]
7101b2acf4  adrp x10,0x7104472000
7101b2acf8  ldr s2,[x10, #0xa0]
7101b2acfc  adrp x10,0x7104472000
7101b2ad00  strb w19,[x8, #0x167]
7101b2ad04  ldr s10,[x10, #0x4c4]
7101b2ad08  ldr x10,[x27, #0x60]
7101b2ad0c  ldr x10,[x10, #0x100]
7101b2ad10  ldr q3,[x10, #0x60]
7101b2ad14  fmax s0,s3,s0
7101b2ad18  movi v4.2D,#0x0
7101b2ad1c  dup s3,v3.S[0x1]
7101b2ad20  mov x8,#0xc46b0000
7101b2ad24  mov x9,#0xc3fa0000
7101b2ad28  movk x8,#0x446b, LSL #48
7101b2ad2c  movk x9,#0x4407, LSL #48
7101b2ad30  stp x8,x9,[x10, #0x90]
7101b2ad34  ldr x8,[x10, #0x38]
7101b2ad38  fmin s0,s0,s1
7101b2ad3c  fmax s1,s3,s2
7101b2ad40  mov v2.16B,v4.16B
7101b2ad44  mov v2.S[0x0],v0.S[0x0]
7101b2ad48  fmin s1,s1,s10
7101b2ad4c  mov v2.S[0x1],v1.S[0x0]
7101b2ad50  str q2,[x10, #0x60]
7101b2ad54  cbz x8,0x7101b2ad68
7101b2ad58  ldrb w9,[x8, #0x58]
7101b2ad5c  orr w9,w9,#0x10
7101b2ad60  stp s0,s1,[x8, #0x30]
7101b2ad64  strb w9,[x8, #0x58]
7101b2ad68  add x8,x27,#0x58
7101b2ad6c  str x23,[sp, #0x68]
7101b2ad70  str x8,[sp, #0x50]
7101b2ad74  cbz w21,0x7101b2adec
7101b2ad78  adrp x1,0x710437a000
7101b2ad7c  add x1,x1,#0xd93
7101b2ad80  add x8,sp,#0x470
7101b2ad84  mov x0,x26
7101b2ad88  mov w2,wzr
7101b2ad8c  bl 0x7103776640
7101b2ad90  ldr x19,[sp, #0x478]
7101b2ad94  ldr x8,[x19, #0x8]
7101b2ad98  cbz x8,0x7101b2adb0
7101b2ad9c  ldr x8,[x8, #0x18]
7101b2ada0  cbz x8,0x7101b2adb0
7101b2ada4  ldrb w9,[x8, #0x58]
7101b2ada8  and w9,w9,#0xfe
7101b2adac  strb w9,[x8, #0x58]
7101b2adb0  adrp x8,0x710523d000
7101b2adb4  add x8,x8,#0x988
7101b2adb8  str x8,[sp, #0x470]
7101b2adbc  str xzr,[sp, #0x478]
7101b2adc0  cbz x19,0x7101b2ade4
7101b2adc4  ldr x0,[x19, #0x18]
7101b2adc8  adrp x8,0x710523d000
7101b2adcc  add x8,x8,#0x9a8
7101b2add0  stp x8,xzr,[x19, #0x10]
7101b2add4  cbz x0,0x7101b2addc
7101b2add8  bl 0x710392eb40
7101b2addc  mov x0,x19
7101b2ade0  bl 0x710392eb40
7101b2ade4  cmp w21,#0x1
7101b2ade8  b.eq 0x7101b2ae60
7101b2adec  adrp x1,0x710437a000
7101b2adf0  add x1,x1,#0xd93
7101b2adf4  add x8,sp,#0x470
7101b2adf8  mov w2,#0x1
7101b2adfc  mov x0,x26
7101b2ae00  bl 0x7103776640
7101b2ae04  ldr x19,[sp, #0x478]
7101b2ae08  ldr x8,[x19, #0x8]
7101b2ae0c  cbz x8,0x7101b2ae24
7101b2ae10  ldr x8,[x8, #0x18]
7101b2ae14  cbz x8,0x7101b2ae24
7101b2ae18  ldrb w9,[x8, #0x58]
7101b2ae1c  and w9,w9,#0xfe
7101b2ae20  strb w9,[x8, #0x58]
7101b2ae24  adrp x8,0x710523d000
7101b2ae28  add x8,x8,#0x988
7101b2ae2c  str x8,[sp, #0x470]
7101b2ae30  str xzr,[sp, #0x478]
7101b2ae34  cbz x19,0x7101b2ae58
7101b2ae38  ldr x0,[x19, #0x18]
7101b2ae3c  adrp x8,0x710523d000
7101b2ae40  add x8,x8,#0x9a8
7101b2ae44  stp x8,xzr,[x19, #0x10]
7101b2ae48  cbz x0,0x7101b2ae50
7101b2ae4c  bl 0x710392eb40
7101b2ae50  mov x0,x19
7101b2ae54  bl 0x710392eb40
7101b2ae58  cmp w21,#0x2
7101b2ae5c  b.eq 0x7101b2aed4
7101b2ae60  adrp x1,0x710437a000
7101b2ae64  add x1,x1,#0xd93
7101b2ae68  add x8,sp,#0x470
7101b2ae6c  mov w2,#0x2
7101b2ae70  mov x0,x26
7101b2ae74  bl 0x7103776640
7101b2ae78  ldr x19,[sp, #0x478]
7101b2ae7c  ldr x8,[x19, #0x8]
7101b2ae80  cbz x8,0x7101b2ae98
7101b2ae84  ldr x8,[x8, #0x18]
7101b2ae88  cbz x8,0x7101b2ae98
7101b2ae8c  ldrb w9,[x8, #0x58]
7101b2ae90  and w9,w9,#0xfe
7101b2ae94  strb w9,[x8, #0x58]
7101b2ae98  adrp x8,0x710523d000
7101b2ae9c  add x8,x8,#0x988
7101b2aea0  str x8,[sp, #0x470]
7101b2aea4  str xzr,[sp, #0x478]
7101b2aea8  cbz x19,0x7101b2aecc
7101b2aeac  ldr x0,[x19, #0x18]
7101b2aeb0  adrp x8,0x710523d000
7101b2aeb4  add x8,x8,#0x9a8
7101b2aeb8  stp x8,xzr,[x19, #0x10]
7101b2aebc  cbz x0,0x7101b2aec4
7101b2aec0  bl 0x710392eb40
7101b2aec4  mov x0,x19
7101b2aec8  bl 0x710392eb40
7101b2aecc  cmp w21,#0x3
7101b2aed0  b.eq 0x7101b2af48
7101b2aed4  adrp x1,0x710437a000
7101b2aed8  add x1,x1,#0xd93
7101b2aedc  add x8,sp,#0x470
7101b2aee0  orr w2,wzr,#0x3
7101b2aee4  mov x0,x26
7101b2aee8  bl 0x7103776640
7101b2aeec  ldr x19,[sp, #0x478]
7101b2aef0  ldr x8,[x19, #0x8]
7101b2aef4  cbz x8,0x7101b2af0c
7101b2aef8  ldr x8,[x8, #0x18]
7101b2aefc  cbz x8,0x7101b2af0c
7101b2af00  ldrb w9,[x8, #0x58]
7101b2af04  and w9,w9,#0xfe
7101b2af08  strb w9,[x8, #0x58]
7101b2af0c  adrp x8,0x710523d000
7101b2af10  add x8,x8,#0x988
7101b2af14  str x8,[sp, #0x470]
7101b2af18  str xzr,[sp, #0x478]
7101b2af1c  cbz x19,0x7101b2af40
7101b2af20  ldr x0,[x19, #0x18]
7101b2af24  adrp x8,0x710523d000
7101b2af28  add x8,x8,#0x9a8
7101b2af2c  stp x8,xzr,[x19, #0x10]
7101b2af30  cbz x0,0x7101b2af38
7101b2af34  bl 0x710392eb40
7101b2af38  mov x0,x19
7101b2af3c  bl 0x710392eb40
7101b2af40  cmp w21,#0x4
7101b2af44  b.eq 0x7101b2afbc
7101b2af48  adrp x1,0x710437a000
7101b2af4c  add x1,x1,#0xd93
7101b2af50  add x8,sp,#0x470
7101b2af54  mov w2,#0x4
7101b2af58  mov x0,x26
7101b2af5c  bl 0x7103776640
7101b2af60  ldr x19,[sp, #0x478]
7101b2af64  ldr x8,[x19, #0x8]
7101b2af68  cbz x8,0x7101b2af80
7101b2af6c  ldr x8,[x8, #0x18]
7101b2af70  cbz x8,0x7101b2af80
7101b2af74  ldrb w9,[x8, #0x58]
7101b2af78  and w9,w9,#0xfe
7101b2af7c  strb w9,[x8, #0x58]
7101b2af80  adrp x8,0x710523d000
7101b2af84  add x8,x8,#0x988
7101b2af88  str x8,[sp, #0x470]
7101b2af8c  str xzr,[sp, #0x478]
7101b2af90  cbz x19,0x7101b2afb4
7101b2af94  ldr x0,[x19, #0x18]
7101b2af98  adrp x8,0x710523d000
7101b2af9c  add x8,x8,#0x9a8
7101b2afa0  stp x8,xzr,[x19, #0x10]
7101b2afa4  cbz x0,0x7101b2afac
7101b2afa8  bl 0x710392eb40
7101b2afac  mov x0,x19
7101b2afb0  bl 0x710392eb40
7101b2afb4  cmp w21,#0x5
7101b2afb8  b.eq 0x7101b2b030
7101b2afbc  adrp x1,0x710437a000
7101b2afc0  add x1,x1,#0xd93
7101b2afc4  mov w2,#0x5
7101b2afc8  add x8,sp,#0x470
7101b2afcc  mov x0,x26
7101b2afd0  bl 0x7103776640
7101b2afd4  ldr x19,[sp, #0x478]
7101b2afd8  ldr x8,[x19, #0x8]
7101b2afdc  cbz x8,0x7101b2aff4
7101b2afe0  ldr x8,[x8, #0x18]
7101b2afe4  cbz x8,0x7101b2aff4
7101b2afe8  ldrb w9,[x8, #0x58]
7101b2afec  and w9,w9,#0xfe
7101b2aff0  strb w9,[x8, #0x58]
7101b2aff4  adrp x8,0x710523d000
7101b2aff8  add x8,x8,#0x988
7101b2affc  str x8,[sp, #0x470]
7101b2b000  str xzr,[sp, #0x478]
7101b2b004  cbz x19,0x7101b2b028
7101b2b008  ldr x0,[x19, #0x18]
7101b2b00c  adrp x8,0x710523d000
7101b2b010  add x8,x8,#0x9a8
7101b2b014  stp x8,xzr,[x19, #0x10]
7101b2b018  cbz x0,0x7101b2b020
7101b2b01c  bl 0x710392eb40
7101b2b020  mov x0,x19
7101b2b024  bl 0x710392eb40
7101b2b028  cmp w21,#0x6
7101b2b02c  b.eq 0x7101b2b0a4
7101b2b030  adrp x1,0x710437a000
7101b2b034  add x1,x1,#0xd93
7101b2b038  add x8,sp,#0x470
7101b2b03c  orr w2,wzr,#0x6
7101b2b040  mov x0,x26
7101b2b044  bl 0x7103776640
7101b2b048  ldr x19,[sp, #0x478]
7101b2b04c  ldr x8,[x19, #0x8]
7101b2b050  cbz x8,0x7101b2b068
7101b2b054  ldr x8,[x8, #0x18]
7101b2b058  cbz x8,0x7101b2b068
7101b2b05c  ldrb w9,[x8, #0x58]
7101b2b060  and w9,w9,#0xfe
7101b2b064  strb w9,[x8, #0x58]
7101b2b068  adrp x8,0x710523d000
7101b2b06c  add x8,x8,#0x988
7101b2b070  str x8,[sp, #0x470]
7101b2b074  str xzr,[sp, #0x478]
7101b2b078  cbz x19,0x7101b2b09c
7101b2b07c  ldr x0,[x19, #0x18]
7101b2b080  adrp x8,0x710523d000
7101b2b084  add x8,x8,#0x9a8
7101b2b088  stp x8,xzr,[x19, #0x10]
7101b2b08c  cbz x0,0x7101b2b094
7101b2b090  bl 0x710392eb40
7101b2b094  mov x0,x19
7101b2b098  bl 0x710392eb40
7101b2b09c  cmp w21,#0x7
7101b2b0a0  b.eq 0x7101b2b110
7101b2b0a4  adrp x1,0x710437a000
7101b2b0a8  add x1,x1,#0xd93
7101b2b0ac  add x8,sp,#0x470
7101b2b0b0  orr w2,wzr,#0x7
7101b2b0b4  mov x0,x26
7101b2b0b8  bl 0x7103776640
7101b2b0bc  ldr x19,[sp, #0x478]
7101b2b0c0  ldr x8,[x19, #0x8]
7101b2b0c4  cbz x8,0x7101b2b0dc
7101b2b0c8  ldr x8,[x8, #0x18]
7101b2b0cc  cbz x8,0x7101b2b0dc
7101b2b0d0  ldrb w9,[x8, #0x58]
7101b2b0d4  and w9,w9,#0xfe
7101b2b0d8  strb w9,[x8, #0x58]
7101b2b0dc  adrp x8,0x710523d000
7101b2b0e0  add x8,x8,#0x988
7101b2b0e4  str x8,[sp, #0x470]
7101b2b0e8  str xzr,[sp, #0x478]
7101b2b0ec  cbz x19,0x7101b2b110
7101b2b0f0  ldr x0,[x19, #0x18]
7101b2b0f4  adrp x8,0x710523d000
7101b2b0f8  add x8,x8,#0x9a8
7101b2b0fc  stp x8,xzr,[x19, #0x10]
7101b2b100  cbz x0,0x7101b2b108
7101b2b104  bl 0x710392eb40
7101b2b108  mov x0,x19
7101b2b10c  bl 0x710392eb40
7101b2b110  ldrsw x9,[x27, #0x1d8]
7101b2b114  adrp x8,0x71050aa000
7101b2b118  add x8,x8,#0xb00
7101b2b11c  ldr x23,[x8, x9, LSL #0x3]
7101b2b120  ldr w22,[x27, #0x1e4]
7101b2b124  fmov s8,0x3f800000
7101b2b128  mov x20,#0xff0000000000
7101b2b12c  str x25,[sp, #0x48]
7101b2b130  str x24,[sp, #0x38]
7101b2b134  mov x25,xzr
7101b2b138  adrp x19,0x710435b000
7101b2b13c  add x19,x19,#0x23c
7101b2b140  adrp x28,0x71043cf000
7101b2b144  add x28,x28,#0x1b
7101b2b148  mov w24,#0x28
7101b2b14c  movk x20,#0x69ff, LSL #48
7101b2b150  stp x26,x27,[sp, #0x90]
7101b2b154  b 0x7101b2b19c
7101b2b158  add x8,sp,#0x3b8
7101b2b15c  add x0,sp,#0x470
7101b2b160  adrp x1,0x7104291000
7101b2b164  add x1,x1,#0xc29
7101b2b168  bl 0x7103776910
7101b2b16c  ldr x0,[sp, #0x3c0]
7101b2b170  ldr x8,[x0]
7101b2b174  cbz x8,0x7101b2b184
7101b2b178  ldrb w9,[x8, #0x58]
7101b2b17c  and w9,w9,#0xfe
7101b2b180  strb w9,[x8, #0x58]
7101b2b184  adrp x8,0x710523d000
7101b2b188  add x8,x8,#0x9a8
7101b2b18c  str x8,[sp, #0x3b8]
7101b2b190  str xzr,[sp, #0x3c0]
7101b2b194  cbnz x0,0x7101b2b420
7101b2b198  b 0x7101b2b424
7101b2b19c  madd x8,x25,x24,x27
7101b2b1a0  str x20,[x8, #0xf8]
7101b2b1a4  str wzr,[x8, #0xf0]
7101b2b1a8  ldr w9,[x27, #0x1e4]
7101b2b1ac  str w9,[x8, #0x100]
7101b2b1b0  mov x9,#0xff0000000000
7101b2b1b4  movk x9,#0xd9ff, LSL #48
7101b2b1b8  str wzr,[x8, #0x104]
7101b2b1bc  str x9,[x8, #0x108]
7101b2b1c0  str wzr,[x8, #0x110]
7101b2b1c4  add x8,sp,#0x470
7101b2b1c8  mov x0,x26
7101b2b1cc  mov x1,x19
7101b2b1d0  mov w2,w25
7101b2b1d4  bl 0x7103776640
7101b2b1d8  ldrsw x8,[x27, #0x1d8]
7101b2b1dc  cmp x25,x8
7101b2b1e0  b.ge 0x7101b2b430
7101b2b1e4  add x8,sp,#0x3b8
7101b2b1e8  add x0,sp,#0x470
7101b2b1ec  adrp x1,0x710425e000
7101b2b1f0  add x1,x1,#0xee3
7101b2b1f4  bl 0x7103776910
7101b2b1f8  add x26,x25,#0x1
7101b2b1fc  add x0,sp,#0x3b8
7101b2b200  mov w2,#0x1
7101b2b204  adrp x1,0x7104291000
7101b2b208  add x1,x1,#0x7d9
7101b2b20c  mov w3,w26
7101b2b210  bl 0x710377a280
7101b2b214  ldr x0,[sp, #0x3c0]
7101b2b218  adrp x8,0x710523d000
7101b2b21c  add x8,x8,#0x9a8
7101b2b220  str x8,[sp, #0x3b8]
7101b2b224  str xzr,[sp, #0x3c0]
7101b2b228  cbz x0,0x7101b2b230
7101b2b22c  bl 0x710392eb40
7101b2b230  ldr x21,[sp, #0x478]
7101b2b234  mov v0.16B,v8.16B
7101b2b238  mov x1,x23
7101b2b23c  mov x0,x21
7101b2b240  bl 0x7103778300
7101b2b244  mov v0.16B,v8.16B
7101b2b248  mov x0,x21
7101b2b24c  adrp x1,0x71042d5000
7101b2b250  add x1,x1,#0xecb
7101b2b254  bl 0x7103778300
7101b2b258  mov v0.16B,v8.16B
7101b2b25c  mov x0,x21
7101b2b260  adrp x1,0x71042e6000
7101b2b264  add x1,x1,#0xc71
7101b2b268  bl 0x7103778300
7101b2b26c  mov v0.16B,v8.16B
7101b2b270  mov x0,x21
7101b2b274  adrp x1,0x7104280000
7101b2b278  add x1,x1,#0x66d
7101b2b27c  bl 0x7103778300
7101b2b280  mov x0,x27
7101b2b284  mov w1,w25
7101b2b288  bl 0x7101b31a10
7101b2b28c  mov x0,x27
7101b2b290  mov w1,w25
7101b2b294  mov w2,w22
7101b2b298  bl 0x7101b323a0
7101b2b29c  ldrb w8,[x27, #0x1f5]
7101b2b2a0  cbnz w8,0x7101b2b2ac
7101b2b2a4  ldrb w8,[x27, #0x1f6]
7101b2b2a8  cbz w8,0x7101b2b158
7101b2b2ac  add x8,sp,#0x3b8
7101b2b2b0  add x0,sp,#0x470
7101b2b2b4  adrp x1,0x71042f7000
7101b2b2b8  add x1,x1,#0xed2
7101b2b2bc  bl 0x7103776640
7101b2b2c0  ldr x25,[sp, #0x3c0]
7101b2b2c4  mov v0.16B,v8.16B
7101b2b2c8  adrp x1,0x71043ad000
7101b2b2cc  add x1,x1,#0x375
7101b2b2d0  mov x0,x25
7101b2b2d4  bl 0x7103778300
7101b2b2d8  mov v0.16B,v8.16B
7101b2b2dc  mov x0,x25
7101b2b2e0  adrp x1,0x710439d000
7101b2b2e4  add x1,x1,#0x47
7101b2b2e8  bl 0x7103778300
7101b2b2ec  mov v0.16B,v8.16B
7101b2b2f0  mov x0,x25
7101b2b2f4  mov x1,x28
7101b2b2f8  bl 0x7103778300
7101b2b2fc  ldr w8,[sp, #0x8c]
7101b2b300  cbz w8,0x7101b2b318
7101b2b304  mov v0.16B,v8.16B
7101b2b308  mov x0,x25
7101b2b30c  adrp x1,0x71042a2000
7101b2b310  add x1,x1,#0xb6c
7101b2b314  bl 0x7103778300
7101b2b318  ldrb w8,[x27, #0x201]
7101b2b31c  cbz w8,0x7101b2b334
7101b2b320  mov v0.16B,v8.16B
7101b2b324  mov x0,x25
7101b2b328  adrp x1,0x71042a2000
7101b2b32c  add x1,x1,#0xb6c
7101b2b330  bl 0x7103778300
7101b2b334  ldr w8,[x27, #0x1e4]
7101b2b338  cbz w8,0x7101b2b34c
7101b2b33c  mov x0,x25
7101b2b340  adrp x1,0x7104422000
7101b2b344  add x1,x1,#0x7ea
7101b2b348  bl 0x7103778760
7101b2b34c  add x8,sp,#0x350
7101b2b350  add x0,sp,#0x470
7101b2b354  adrp x1,0x71043ad000
7101b2b358  add x1,x1,#0x38d
7101b2b35c  bl 0x7103776640
7101b2b360  ldr x27,[sp, #0x358]
7101b2b364  mov v0.16B,v8.16B
7101b2b368  adrp x1,0x71043cf000
7101b2b36c  add x1,x1,#0x2f
7101b2b370  mov x0,x27
7101b2b374  bl 0x7103778300
7101b2b378  mov v0.16B,v8.16B
7101b2b37c  mov x0,x27
7101b2b380  adrp x1,0x71043df000
7101b2b384  add x1,x1,#0xd53
7101b2b388  bl 0x7103778300
7101b2b38c  mov v0.16B,v8.16B
7101b2b390  mov x0,x27
7101b2b394  mov x1,x28
7101b2b398  bl 0x7103778300
7101b2b39c  ldr x8,[x27, #0x8]
7101b2b3a0  cbz x8,0x7101b2b3b8
7101b2b3a4  ldr x8,[x8, #0x18]
7101b2b3a8  cbz x8,0x7101b2b3b8
7101b2b3ac  ldrb w9,[x8, #0x58]
7101b2b3b0  and w9,w9,#0xfe
7101b2b3b4  strb w9,[x8, #0x58]
7101b2b3b8  adrp x8,0x710523d000
7101b2b3bc  add x8,x8,#0x988
7101b2b3c0  str x8,[sp, #0x350]
7101b2b3c4  str xzr,[sp, #0x358]
7101b2b3c8  cbz x27,0x7101b2b3ec
7101b2b3cc  ldr x0,[x27, #0x18]
7101b2b3d0  adrp x8,0x710523d000
7101b2b3d4  add x8,x8,#0x9a8
7101b2b3d8  stp x8,xzr,[x27, #0x10]
7101b2b3dc  cbz x0,0x7101b2b3e4
7101b2b3e0  bl 0x710392eb40
7101b2b3e4  mov x0,x27
7101b2b3e8  bl 0x710392eb40
7101b2b3ec  ldr x27,[sp, #0x98]
7101b2b3f0  adrp x8,0x710523d000
7101b2b3f4  add x8,x8,#0x988
7101b2b3f8  str x8,[sp, #0x3b8]
7101b2b3fc  str xzr,[sp, #0x3c0]
7101b2b400  cbz x25,0x7101b2b424
7101b2b404  ldr x0,[x25, #0x18]
7101b2b408  adrp x8,0x710523d000
7101b2b40c  add x8,x8,#0x9a8
7101b2b410  stp x8,xzr,[x25, #0x10]
7101b2b414  cbz x0,0x7101b2b41c
7101b2b418  bl 0x710392eb40
7101b2b41c  mov x0,x25
7101b2b420  bl 0x710392eb40
7101b2b424  mov x25,x26
7101b2b428  ldr x26,[sp, #0x90]
7101b2b42c  b 0x7101b2b454
7101b2b430  ldr x21,[sp, #0x478]
7101b2b434  ldr x8,[x21, #0x8]
7101b2b438  cbz x8,0x7101b2b450
7101b2b43c  ldr x8,[x8, #0x18]
7101b2b440  cbz x8,0x7101b2b450
7101b2b444  ldrb w9,[x8, #0x58]
7101b2b448  and w9,w9,#0xfe
7101b2b44c  strb w9,[x8, #0x58]
7101b2b450  add x25,x25,#0x1
7101b2b454  adrp x8,0x710523d000
7101b2b458  add x8,x8,#0x988
7101b2b45c  str x8,[sp, #0x470]
7101b2b460  str xzr,[sp, #0x478]
7101b2b464  cbz x21,0x7101b2b488
7101b2b468  ldr x0,[x21, #0x18]
7101b2b46c  adrp x8,0x710523d000
7101b2b470  add x8,x8,#0x9a8
7101b2b474  stp x8,xzr,[x21, #0x10]
7101b2b478  cbz x0,0x7101b2b480
7101b2b47c  bl 0x710392eb40
7101b2b480  mov x0,x21
7101b2b484  bl 0x710392eb40
7101b2b488  cmp x25,#0x3
7101b2b48c  b.ne 0x7101b2b19c
7101b2b490  adrp x8,0x710532f000
7101b2b494  ldr x8,[x8, #0x730]
7101b2b498  ldr x23,[sp, #0x68]
7101b2b49c  ldr x20,[x8, #0x8]
7101b2b4a0  ldp x8,x9,[x23]
7101b2b4a4  sub x8,x9,x8
7101b2b4a8  mov w9,#0x79
7101b2b4ac  lsr x8,x8,#0x3
7101b2b4b0  cmp w8,#0x79
7101b2b4b4  csel w8,w8,w9,lt
7101b2b4b8  orr x9,xzr,#-0x5555555555555556
7101b2b4bc  sxtw x24,w8
7101b2b4c0  ldr x8,[x27, #0x178]
7101b2b4c4  ldr x19,[x27, #0x168]
7101b2b4c8  sub x8,x8,x19
7101b2b4cc  asr x8,x8,#0x3
7101b2b4d0  movk x9,#0xaaab
7101b2b4d4  mul x8,x8,x9
7101b2b4d8  cmp x8,x24
7101b2b4dc  str x20,[sp, #0x60]
7101b2b4e0  b.cs 0x7101b2b5b4
7101b2b4e4  tbnz w24,#0x1f,0x7101b31888
7101b2b4e8  ldr x8,[x27, #0x170]
7101b2b4ec  sub x21,x8,x19
7101b2b4f0  orr x9,xzr,#-0x5555555555555556
7101b2b4f4  movk x9,#0xaaab
7101b2b4f8  cmp w24,#0x0
7101b2b4fc  asr x8,x21,#0x3
7101b2b500  mul x20,x8,x9
7101b2b504  add x8,x24,x24, LSL #0x1
7101b2b508  lsl x8,x8,#0x3
7101b2b50c  csinc x22,x8,xzr,ne
7101b2b510  mov w0,#0x10
7101b2b514  mov x1,x22
7101b2b518  bl 0x710392e290
7101b2b51c  cbnz x0,0x7101b2b560
7101b2b520  adrp x8,0x7105332000
7101b2b524  ldr x0,[x8, #0xf00]
7101b2b528  cbz x0,0x7101b2b55c
7101b2b52c  str wzr,[sp, #0x3b8]
7101b2b530  str x22,[sp, #0x470]
7101b2b534  ldr x8,[x0]
7101b2b538  ldr x8,[x8, #0x30]
7101b2b53c  add x1,sp,#0x3b8
7101b2b540  add x2,sp,#0x470
7101b2b544  blr x8
7101b2b548  tbz w0,#0x0,0x7101b2b55c
7101b2b54c  mov w0,#0x10
7101b2b550  mov x1,x22
7101b2b554  bl 0x710392e290
7101b2b558  cbnz x0,0x7101b2b560
7101b2b55c  mov x0,xzr
7101b2b560  orr x9,xzr,#0x5555555555555555
7101b2b564  movk x9,#0xd555, LSL #48
7101b2b568  smulh x9,x21,x9
7101b2b56c  orr w8,wzr,#0x18
7101b2b570  madd x20,x20,x8,x0
7101b2b574  madd x23,x24,x8,x0
7101b2b578  cmp x21,#0x1
7101b2b57c  asr x10,x9,#0x2
7101b2b580  add x9,x10,x9, LSR #0x3f
7101b2b584  madd x22,x9,x8,x20
7101b2b588  b.lt 0x7101b2b59c
7101b2b58c  mov x0,x22
7101b2b590  mov x1,x19
7101b2b594  mov x2,x21
7101b2b598  bl 0x71039c00e0
7101b2b59c  stp x22,x20,[x27, #0x168]
7101b2b5a0  str x23,[x27, #0x178]
7101b2b5a4  ldp x20,x23,[sp, #0x60]
7101b2b5a8  cbz x19,0x7101b2b5b4
7101b2b5ac  mov x0,x19
7101b2b5b0  bl 0x710392eb40
7101b2b5b4  add x8,x27,#0x168
7101b2b5b8  str x8,[sp, #0x58]
7101b2b5bc  ldrb w8,[x27, #0x1dc]
7101b2b5c0  add w1,w8,#0x1
7101b2b5c4  adrp x0,0x7104410000
7101b2b5c8  add x0,x0,#0xef8
7101b2b5cc  add x8,sp,#0x3b8
7101b2b5d0  mov x22,#0x6900000000000000
7101b2b5d4  add x19,sp,#0x3b8
7101b2b5d8  bl 0x71003a4ca0
7101b2b5dc  add x8,x19,#0x8
7101b2b5e0  adrp x19,0x71042b3000
7101b2b5e4  add x19,x19,#0xf65
7101b2b5e8  str x8,[sp, #0x80]
7101b2b5ec  adrp x8,0x7104472000
7101b2b5f0  ldr s0,[x8, #0x8b8]
7101b2b5f4  adrp x8,0x7104473000
7101b2b5f8  ldr s13,[x8, #0x208]
7101b2b5fc  fmov s8,0x3f800000
7101b2b600  mov x28,xzr
7101b2b604  str x24,[sp, #0x78]
7101b2b608  str s0,[sp, #0x70]
7101b2b60c  b 0x7101b2b684
7101b2b610  mov v0.16B,v8.16B
7101b2b614  mov x0,x25
7101b2b618  adrp x1,0x71043f0000
7101b2b61c  add x1,x1,#0x612
7101b2b620  bl 0x7103778300
7101b2b624  add x8,sp,#0x350
7101b2b628  add x0,sp,#0x470
7101b2b62c  adrp x1,0x710433a000
7101b2b630  add x1,x1,#0x8f0
7101b2b634  bl 0x7103776910
7101b2b638  ldr x8,[sp, #0x98]
7101b2b63c  ldr x0,[x8, #0x48]
7101b2b640  mov x1,x27
7101b2b644  mov w2,#0xd
7101b2b648  bl 0x710323f4a0
7101b2b64c  ldr x19,[sp, #0x358]
7101b2b650  mov x1,x0
7101b2b654  mov x0,x19
7101b2b658  bl 0x7103778b80
7101b2b65c  mov x0,x19
7101b2b660  bl 0x71037799d0
7101b2b664  adrp x8,0x710523d000
7101b2b668  add x8,x8,#0x9a8
7101b2b66c  str x8,[sp, #0x350]
7101b2b670  str xzr,[sp, #0x358]
7101b2b674  cbz x19,0x7101b2b8cc
7101b2b678  mov x0,x19
7101b2b67c  bl 0x710392eb40
7101b2b680  b 0x7101b2b8cc
7101b2b684  add x8,sp,#0x470
7101b2b688  mov x0,x26
7101b2b68c  mov x1,x19
7101b2b690  mov w2,w28
7101b2b694  bl 0x7103776640
7101b2b698  ldr x25,[sp, #0x478]
7101b2b69c  ldr x8,[x25, #0x8]
7101b2b6a0  cmp x28,x24
7101b2b6a4  b.ge 0x7101b2b748
7101b2b6a8  cbz x8,0x7101b2bcd0
7101b2b6ac  ldr x1,[sp, #0x80]
7101b2b6b0  mov v0.16B,v8.16B
7101b2b6b4  mov x0,x25
7101b2b6b8  bl 0x7103778300
7101b2b6bc  ldp x8,x9,[x23]
7101b2b6c0  sub x9,x9,x8
7101b2b6c4  asr x9,x9,#0x3
7101b2b6c8  cmp x9,x28
7101b2b6cc  b.ls 0x7101b31870
7101b2b6d0  ldr x27,[x8, x28, LSL #0x3]
7101b2b6d4  ldr x8,[x20, #0x178]
7101b2b6d8  ldr x21,[x8, #0x8]
7101b2b6dc  mov x1,#0x484c
7101b2b6e0  movk x1,#0x1f1e, LSL #16
7101b2b6e4  movk x1,#0xf, LSL #32
7101b2b6e8  mov x0,x21
7101b2b6ec  bl 0x71032b23e0
7101b2b6f0  tst x27,#0xffffffffff
7101b2b6f4  and x8,x27,#-0x100000000000000
7101b2b6f8  cset w9,ne
7101b2b6fc  cmp x8,x22
7101b2b700  cset w10,eq
7101b2b704  and w19,w10,w9
7101b2b708  and x9,x0,#0xffffffffff
7101b2b70c  tbz w19,#0x0,0x7101b2b764
7101b2b710  and x10,x0,#-0x100000000000000
7101b2b714  cmp x10,x22
7101b2b718  b.ne 0x7101b2b768
7101b2b71c  cbz x9,0x7101b2b768
7101b2b720  eor x8,x0,x27
7101b2b724  mov x1,#0x6a0c
7101b2b728  movk x1,#0xbebd, LSL #16
7101b2b72c  tst x8,#0xffffffffff
7101b2b730  mov x0,x21
7101b2b734  movk x1,#0x14, LSL #32
7101b2b738  cset w24,eq
7101b2b73c  bl 0x71032b23e0
7101b2b740  and x8,x0,#0xffffffffff
7101b2b744  b 0x7101b2b7b8
7101b2b748  cbz x8,0x7101b2bcd0
7101b2b74c  ldr x8,[x8, #0x18]
7101b2b750  cbz x8,0x7101b2bcd0
7101b2b754  ldrb w9,[x8, #0x58]
7101b2b758  and w9,w9,#0xfe
7101b2b75c  strb w9,[x8, #0x58]
7101b2b760  b 0x7101b2bcd0
7101b2b764  and x10,x0,#-0x100000000000000
7101b2b768  and x11,x27,#0xffffffffff
7101b2b76c  cmp x8,x22
7101b2b770  cset w8,eq
7101b2b774  cmp x11,#0x0
7101b2b778  cset w11,ne
7101b2b77c  cmp x9,#0x0
7101b2b780  cset w9,ne
7101b2b784  cmp x10,x22
7101b2b788  cset w10,eq
7101b2b78c  and w8,w8,w11
7101b2b790  and w9,w9,w10
7101b2b794  mov x1,#0x6a0c
7101b2b798  movk x1,#0xbebd, LSL #16
7101b2b79c  mov x0,x21
7101b2b7a0  movk x1,#0x14, LSL #32
7101b2b7a4  eor w8,w9,w8
7101b2b7a8  eor w24,w8,#0x1
7101b2b7ac  bl 0x71032b23e0
7101b2b7b0  and x8,x0,#0xffffffffff
7101b2b7b4  tbz w19,#0x0,0x7101b2b7dc
7101b2b7b8  and x9,x0,#-0x100000000000000
7101b2b7bc  cmp x9,x22
7101b2b7c0  b.ne 0x7101b2b810
7101b2b7c4  cbz x8,0x7101b2b810
7101b2b7c8  eor x8,x0,x27
7101b2b7cc  tst x8,#0xffffffffff
7101b2b7d0  cset w22,eq
7101b2b7d4  tbnz w24,#0x0,0x7101b2b800
7101b2b7d8  b 0x7101b2b830
7101b2b7dc  and x9,x0,#-0x100000000000000
7101b2b7e0  cmp x8,#0x0
7101b2b7e4  cset w8,ne
7101b2b7e8  cmp x9,x22
7101b2b7ec  cset w9,eq
7101b2b7f0  and w8,w8,w9
7101b2b7f4  eor w8,w8,w19
7101b2b7f8  eor w22,w8,#0x1
7101b2b7fc  tbz w24,#0x0,0x7101b2b830
7101b2b800  mov x0,x25
7101b2b804  adrp x1,0x710436b000
7101b2b808  add x1,x1,#0xec9
7101b2b80c  b 0x7101b2b8c4
7101b2b810  cmp x8,#0x0
7101b2b814  cset w8,ne
7101b2b818  cmp x9,x22
7101b2b81c  cset w9,eq
7101b2b820  and w8,w8,w9
7101b2b824  eor w8,w8,w19
7101b2b828  eor w22,w8,#0x1
7101b2b82c  cbnz w24,0x7101b2b800
7101b2b830  cbz w22,0x7101b2b844
7101b2b834  mov x0,x25
7101b2b838  adrp x1,0x7104270000
7101b2b83c  add x1,x1,#0x57f
7101b2b840  b 0x7101b2b8c4
7101b2b844  mov x1,#0xabde
7101b2b848  movk x1,#0xf30e, LSL #16
7101b2b84c  mov x0,x21
7101b2b850  movk x1,#0x13, LSL #32
7101b2b854  bl 0x71032b23e0
7101b2b858  and x8,x0,#0xffffffffff
7101b2b85c  cbz w19,0x7101b2b884
7101b2b860  and x9,x0,#-0x100000000000000
7101b2b864  mov x10,#0x6900000000000000
7101b2b868  cmp x9,x10
7101b2b86c  b.ne 0x7101b2b888
7101b2b870  cbz x8,0x7101b2b888
7101b2b874  eor x8,x0,x27
7101b2b878  tst x8,#0xffffffffff
7101b2b87c  b.ne 0x7101b2b610
7101b2b880  b 0x7101b2b8ac
7101b2b884  and x9,x0,#-0x100000000000000
7101b2b888  cmp x8,#0x0
7101b2b88c  mov x10,#0x6900000000000000
7101b2b890  cset w8,ne
7101b2b894  cmp x9,x10
7101b2b898  cset w9,eq
7101b2b89c  and w8,w8,w9
7101b2b8a0  eor w8,w8,w19
7101b2b8a4  cmp w8,#0x1
7101b2b8a8  b.eq 0x7101b2b610
7101b2b8ac  ldr x8,[sp, #0x98]
7101b2b8b0  ldrb w8,[x8, #0x1f1]
7101b2b8b4  cbz w8,0x7101b2b610
7101b2b8b8  mov x0,x25
7101b2b8bc  adrp x1,0x7104412000
7101b2b8c0  add x1,x1,#0x582
7101b2b8c4  mov v0.16B,v8.16B
7101b2b8c8  bl 0x7103778300
7101b2b8cc  add x8,sp,#0x350
7101b2b8d0  add x0,sp,#0x470
7101b2b8d4  adrp x1,0x7104464000
7101b2b8d8  add x1,x1,#0x1f6
7101b2b8dc  bl 0x7103776910
7101b2b8e0  ldr x0,[sp, #0x358]
7101b2b8e4  ldr x8,[x0]
7101b2b8e8  cbz x8,0x7101b2b94c
7101b2b8ec  movi v7.2D,#0x0
7101b2b8f0  ldr s3,[x8, #0x30]
7101b2b8f4  add x9,x8,#0x34
7101b2b8f8  ldp s0,s1,[x8, #0x50]
7101b2b8fc  mov v2.16B,v7.16B
7101b2b900  ldp s4,s5,[x8, #0x48]
7101b2b904  fmul s1,s1,s5
7101b2b908  fmul s0,s0,s4
7101b2b90c  fmov s4,0x3f000000
7101b2b910  fabs s1,s1
7101b2b914  mov v2.S[0x0],v3.S[0x0]
7101b2b918  fabs s0,s0
7101b2b91c  fmul s4,s0,s4
7101b2b920  ld1 {v2.S}[1],[x9]
7101b2b924  add x9,x8,#0x38
7101b2b928  ld1 {v2.S}[2],[x9]
7101b2b92c  ldrb w9,[x8, #0x5b]
7101b2b930  and w10,w9,#0x3
7101b2b934  cmp w10,#0x2
7101b2b938  b.eq 0x7101b2b96c
7101b2b93c  cmp w10,#0x1
7101b2b940  b.ne 0x7101b2b974
7101b2b944  fadd s3,s3,s4
7101b2b948  b 0x7101b2b970
7101b2b94c  adrp x8,0x71052a8000
7101b2b950  ldr x8,[x8, #0xa88]
7101b2b954  fmov s0,wzr
7101b2b958  mov v1.16B,v0.16B
7101b2b95c  ldr q3,[x8]
7101b2b960  movi v7.2D,#0x0
7101b2b964  dup s4,v3.S[0x1]
7101b2b968  b 0x7101b2b9f0
7101b2b96c  fsub s3,s3,s4
7101b2b970  mov v2.S[0x0],v3.S[0x0]
7101b2b974  fmov s3,0x3f000000
7101b2b978  fmul s3,s1,s3
7101b2b97c  ubfx w9,w9,#0x2,#0x2
7101b2b980  cmp w9,#0x2
7101b2b984  b.eq 0x7101b2b99c
7101b2b988  cmp w9,#0x1
7101b2b98c  b.ne 0x7101b2b9a8
7101b2b990  dup s4,v2.S[0x1]
7101b2b994  fsub s3,s4,s3
7101b2b998  b 0x7101b2b9a4
7101b2b99c  dup s4,v2.S[0x1]
7101b2b9a0  fadd s3,s3,s4
7101b2b9a4  mov v2.S[0x1],v3.S[0x0]
7101b2b9a8  ldr x8,[x8, #0x18]
7101b2b9ac  cbz x8,0x7101b2b9e8
7101b2b9b0  ldp s3,s4,[x8, #0x30]
7101b2b9b4  fadd s3,s2,s3
7101b2b9b8  dup s5,v2.S[0x1]
7101b2b9bc  fadd s4,s5,s4
7101b2b9c0  dup s6,v2.S[0x2]
7101b2b9c4  mov v2.16B,v7.16B
7101b2b9c8  mov v2.S[0x0],v3.S[0x0]
7101b2b9cc  ldr s5,[x8, #0x38]
7101b2b9d0  mov v2.S[0x1],v4.S[0x0]
7101b2b9d4  fadd s5,s6,s5
7101b2b9d8  mov v2.S[0x2],v5.S[0x0]
7101b2b9dc  ldr x8,[x8, #0x18]
7101b2b9e0  cbnz x8,0x7101b2b9b0
7101b2b9e4  b 0x7101b2b9f0
7101b2b9e8  dup s4,v2.S[0x1]
7101b2b9ec  mov v3.16B,v2.16B
7101b2b9f0  mov v2.16B,v7.16B
7101b2b9f4  mov v2.S[0x0],v0.S[0x0]
7101b2b9f8  ldr s0,[sp, #0x70]
7101b2b9fc  fadd s0,s3,s0
7101b2ba00  adrp x8,0x710523d000
7101b2ba04  add x8,x8,#0x9a8
7101b2ba08  str x8,[sp, #0x350]
7101b2ba0c  str xzr,[sp, #0x358]
7101b2ba10  mov v2.S[0x1],v1.S[0x0]
7101b2ba14  movi v1.4S,#0x3f, LSL #24
7101b2ba18  fmul v1.4S,v2.4S,v1.4S
7101b2ba1c  fsub s2,s10,s4
7101b2ba20  fsub s9,s0,s1
7101b2ba24  fadd s14,s0,s1
7101b2ba28  dup s0,v1.S[0x1]
7101b2ba2c  fadd s8,s2,s0
7101b2ba30  fsub s12,s0,s2
7101b2ba34  cbz x0,0x7101b2ba3c
7101b2ba38  bl 0x710392eb40
7101b2ba3c  ldr x10,[sp, #0x98]
7101b2ba40  fadd s11,s9,s13
7101b2ba44  fadd s15,s14,s13
7101b2ba48  fadd s14,s12,s10
7101b2ba4c  fsub s9,s10,s8
7101b2ba50  ldp x8,x9,[x10, #0x170]
7101b2ba54  cmp x8,x9
7101b2ba58  b.eq 0x7101b2ba84
7101b2ba5c  str x27,[x8]
7101b2ba60  str s11,[x8, #0x8]
7101b2ba64  fmov s8,0x3f800000
7101b2ba68  str s15,[x8, #0xc]
7101b2ba6c  str s9,[x8, #0x10]
7101b2ba70  str s14,[x8, #0x14]
7101b2ba74  ldr x8,[x10, #0x170]
7101b2ba78  add x8,x8,#0x18
7101b2ba7c  str x8,[x10, #0x170]
7101b2ba80  b 0x7101b2bbbc
7101b2ba84  ldr x10,[sp, #0x58]
7101b2ba88  ldr x21,[x10]
7101b2ba8c  orr x10,xzr,#-0x5555555555555556
7101b2ba90  movk x10,#0xaaab
7101b2ba94  sub x23,x8,x21
7101b2ba98  asr x8,x23,#0x3
7101b2ba9c  mul x20,x8,x10
7101b2baa0  orr x26,xzr,#-0x5555555555555556
7101b2baa4  movk x26,#0xaaa, LSL #48
7101b2baa8  add x8,x20,#0x1
7101b2baac  cmp x8,x26
7101b2bab0  b.hi 0x7101b31878
7101b2bab4  sub x9,x9,x21
7101b2bab8  asr x9,x9,#0x3
7101b2babc  mul x9,x9,x10
7101b2bac0  orr x10,xzr,#0x5555555555555555
7101b2bac4  movk x10,#0x5554
7101b2bac8  movk x10,#0x555, LSL #48
7101b2bacc  cmp x9,x10
7101b2bad0  b.hi 0x7101b2bae4
7101b2bad4  lsl x9,x9,#0x1
7101b2bad8  cmp x9,x8
7101b2badc  csel x26,x8,x9,cc
7101b2bae0  cbz x26,0x7101b2bb40
7101b2bae4  add x8,x26,x26, LSL #0x1
7101b2bae8  lsl x8,x8,#0x3
7101b2baec  cmp x8,#0x0
7101b2baf0  csinc x19,x8,xzr,ne
7101b2baf4  mov w0,#0x10
7101b2baf8  mov x1,x19
7101b2bafc  bl 0x710392e290
7101b2bb00  cbnz x0,0x7101b2bb44
7101b2bb04  adrp x8,0x7105332000
7101b2bb08  ldr x0,[x8, #0xf00]
7101b2bb0c  cbz x0,0x7101b2bb40
7101b2bb10  str wzr,[sp, #0x2e8]
7101b2bb14  str x19,[sp, #0x350]
7101b2bb18  ldr x8,[x0]
7101b2bb1c  ldr x8,[x8, #0x30]
7101b2bb20  add x1,sp,#0x2e8
7101b2bb24  add x2,sp,#0x350
7101b2bb28  blr x8
7101b2bb2c  tbz w0,#0x0,0x7101b2bb40
7101b2bb30  mov w0,#0x10
7101b2bb34  mov x1,x19
7101b2bb38  bl 0x710392e290
7101b2bb3c  cbnz x0,0x7101b2bb44
7101b2bb40  mov x0,xzr
7101b2bb44  orr x9,xzr,#0x5555555555555555
7101b2bb48  movk x9,#0xd555, LSL #48
7101b2bb4c  smulh x9,x23,x9
7101b2bb50  orr w11,wzr,#0x18
7101b2bb54  madd x8,x20,x11,x0
7101b2bb58  madd x20,x26,x11,x0
7101b2bb5c  add x26,x8,#0x18
7101b2bb60  cmp x23,#0x1
7101b2bb64  str x27,[x8]
7101b2bb68  str s11,[x8, #0x8]
7101b2bb6c  str s15,[x8, #0xc]
7101b2bb70  str s9,[x8, #0x10]
7101b2bb74  str s14,[x8, #0x14]
7101b2bb78  asr x10,x9,#0x2
7101b2bb7c  add x9,x10,x9, LSR #0x3f
7101b2bb80  madd x19,x9,x11,x8
7101b2bb84  b.lt 0x7101b2bb98
7101b2bb88  mov x0,x19
7101b2bb8c  mov x1,x21
7101b2bb90  mov x2,x23
7101b2bb94  bl 0x71039c00e0
7101b2bb98  ldr x8,[sp, #0x98]
7101b2bb9c  stp x19,x26,[x8, #0x168]
7101b2bba0  str x20,[x8, #0x178]
7101b2bba4  ldp x20,x23,[sp, #0x60]
7101b2bba8  ldr x26,[sp, #0x90]
7101b2bbac  fmov s8,0x3f800000
7101b2bbb0  cbz x21,0x7101b2bbbc
7101b2bbb4  mov x0,x21
7101b2bbb8  bl 0x710392eb40
7101b2bbbc  orr w8,w24,w22
7101b2bbc0  ldr x24,[sp, #0x78]
7101b2bbc4  adrp x19,0x71042b3000
7101b2bbc8  add x19,x19,#0xf65
7101b2bbcc  tbnz w8,#0x0,0x7101b2bc00
7101b2bbd0  orr w1,wzr,#0xc
7101b2bbd4  mov x0,x27
7101b2bbd8  bl 0x7103238c50
7101b2bbdc  tst x0,#0xffffffffff
7101b2bbe0  str x0,[sp, #0x350]
7101b2bbe4  b.eq 0x7101b2bc00
7101b2bbe8  ldr x8,[sp, #0x98]
7101b2bbec  ldr x0,[x8, #0x50]
7101b2bbf0  ldrsw x2,[x0, #0x70]
7101b2bbf4  ldr w3,[x0, #0x68]
7101b2bbf8  add x1,sp,#0x350
7101b2bbfc  bl 0x710323c4e0
7101b2bc00  tbnz w22,#0x0,0x7101b2bc94
7101b2bc04  orr w1,wzr,#0xe
7101b2bc08  mov x0,x27
7101b2bc0c  bl 0x7103238c50
7101b2bc10  tst x0,#0xffffffffff
7101b2bc14  str x0,[sp, #0x350]
7101b2bc18  b.eq 0x7101b2bc34
7101b2bc1c  ldr x8,[sp, #0x98]
7101b2bc20  ldr x0,[x8, #0x50]
7101b2bc24  ldrsw x2,[x0, #0x70]
7101b2bc28  ldr w3,[x0, #0x68]
7101b2bc2c  add x1,sp,#0x350
7101b2bc30  bl 0x710323c4e0
7101b2bc34  orr w1,wzr,#0xf
7101b2bc38  mov x0,x27
7101b2bc3c  bl 0x7103238c50
7101b2bc40  tst x0,#0xffffffffff
7101b2bc44  str x0,[sp, #0x350]
7101b2bc48  b.eq 0x7101b2bc64
7101b2bc4c  ldr x8,[sp, #0x98]
7101b2bc50  ldr x0,[x8, #0x50]
7101b2bc54  ldrsw x2,[x0, #0x70]
7101b2bc58  ldr w3,[x0, #0x68]
7101b2bc5c  add x1,sp,#0x350
7101b2bc60  bl 0x710323c4e0
7101b2bc64  mov w1,#0x10
7101b2bc68  mov x0,x27
7101b2bc6c  bl 0x7103238c50
7101b2bc70  tst x0,#0xffffffffff
7101b2bc74  str x0,[sp, #0x350]
7101b2bc78  b.eq 0x7101b2bc94
7101b2bc7c  ldr x8,[sp, #0x98]
7101b2bc80  ldr x0,[x8, #0x50]
7101b2bc84  ldrsw x2,[x0, #0x70]
7101b2bc88  ldr w3,[x0, #0x68]
7101b2bc8c  add x1,sp,#0x350
7101b2bc90  bl 0x710323c4e0
7101b2bc94  ldr x0,[x20, #0x178]
7101b2bc98  mov x1,x27
7101b2bc9c  bl 0x71032b2de0
7101b2bca0  mov w1,#0x11
7101b2bca4  bl 0x7103238d60
7101b2bca8  ldr x27,[sp, #0x98]
7101b2bcac  tst x0,#0xffffffffff
7101b2bcb0  str x0,[sp, #0x350]
7101b2bcb4  b.eq 0x7101b2bccc
7101b2bcb8  ldr x0,[x27, #0x50]
7101b2bcbc  ldrsw x2,[x0, #0x70]
7101b2bcc0  ldr w3,[x0, #0x68]
7101b2bcc4  add x1,sp,#0x350
7101b2bcc8  bl 0x710323c4e0
7101b2bccc  mov x22,#0x6900000000000000
7101b2bcd0  adrp x8,0x710523d000
7101b2bcd4  add x8,x8,#0x988
7101b2bcd8  str x8,[sp, #0x470]
7101b2bcdc  str xzr,[sp, #0x478]
7101b2bce0  cbz x25,0x7101b2bd04
7101b2bce4  ldr x0,[x25, #0x18]
7101b2bce8  adrp x8,0x710523d000
7101b2bcec  add x8,x8,#0x9a8
7101b2bcf0  stp x8,xzr,[x25, #0x10]
7101b2bcf4  cbz x0,0x7101b2bcfc
7101b2bcf8  bl 0x710392eb40
7101b2bcfc  mov x0,x25
7101b2bd00  bl 0x710392eb40
7101b2bd04  add x28,x28,#0x1
7101b2bd08  cmp x28,#0x79
7101b2bd0c  b.cc 0x7101b2b684
7101b2bd10  adrp x1,0x710426e000
7101b2bd14  add x1,x1,#0x7ec
7101b2bd18  add x8,sp,#0x3a8
7101b2bd1c  mov x0,x26
7101b2bd20  bl 0x7103776640
7101b2bd24  ldr x0,[sp, #0x3b0]
7101b2bd28  ldr x1,[sp, #0x80]
7101b2bd2c  fmov s0,0x3f800000
7101b2bd30  bl 0x7103778300
7101b2bd34  add x8,sp,#0x398
7101b2bd38  stur xzr,[x8, #0x4]
7101b2bd3c  ldr w8,[x27, #0x1d8]
7101b2bd40  str w8,[sp, #0x398]
7101b2bd44  ldr x0,[x27, #0x70]
7101b2bd48  add x2,sp,#0x398
7101b2bd4c  mov x1,x26
7101b2bd50  add x19,x27,#0x68
7101b2bd54  bl 0x71032cf130
7101b2bd58  adrp x1,0x7104452000
7101b2bd5c  add x1,x1,#0xf80
7101b2bd60  add x8,sp,#0x470
7101b2bd64  mov x0,x26
7101b2bd68  mov w2,wzr
7101b2bd6c  bl 0x7103776640
7101b2bd70  adrp x1,0x710425e000
7101b2bd74  add x1,x1,#0xee3
7101b2bd78  add x8,sp,#0x350
7101b2bd7c  add x0,sp,#0x470
7101b2bd80  bl 0x7103776910
7101b2bd84  adrp x1,0x710436b000
7101b2bd88  add x1,x1,#0xf18
7101b2bd8c  add x0,sp,#0x350
7101b2bd90  mov w2,#0x1
7101b2bd94  mov w3,#0x1
7101b2bd98  bl 0x710377a280
7101b2bd9c  ldr x0,[sp, #0x358]
7101b2bda0  adrp x8,0x710523d000
7101b2bda4  add x8,x8,#0x9a8
7101b2bda8  str x8,[sp, #0x350]
7101b2bdac  str xzr,[sp, #0x358]
7101b2bdb0  cbz x0,0x7101b2bdb8
7101b2bdb4  bl 0x710392eb40
7101b2bdb8  ldr w8,[x27, #0x1d8]
7101b2bdbc  cmp w8,#0x0
7101b2bdc0  adrp x28,0x7105332000
7101b2bdc4  adrp x24,0x7105314000
7101b2bdc8  add x24,x24,#0x4d8
7101b2bdcc  adrp x25,0x7105305000
7101b2bdd0  b.le 0x7101b2c3b4
7101b2bdd4  ldr x8,[x27, #0x70]
7101b2bdd8  ldr x9,[sp, #0x50]
7101b2bddc  str x9,[x8, #0x110]
7101b2bde0  ldrb w2,[x27, #0x1dc]
7101b2bde4  mov w4,#0xffffffff
7101b2bde8  mov x0,x19
7101b2bdec  mov w1,wzr
7101b2bdf0  mov w3,wzr
7101b2bdf4  mov w5,wzr
7101b2bdf8  bl 0x71032d0830
7101b2bdfc  ldr x8,[x27, #0x70]
7101b2be00  mov w9,#0x461
7101b2be04  str w9,[x8, #0x1c]
7101b2be08  ldr x20,[x27, #0x70]
7101b2be0c  ldrb w8,[x20, #0x11f]
7101b2be10  cmp w8,#0x1
7101b2be14  b.eq 0x7101b2be80
7101b2be18  mov w8,#0x1
7101b2be1c  strb w8,[x20, #0x11f]
7101b2be20  orr w8,wzr,#0x3f800000
7101b2be24  str w8,[x20, #0x104]
7101b2be28  ldr w8,[x20, #0x100]
7101b2be2c  ldr x22,[x20, #0x28]
7101b2be30  str w8,[x20, #0x10c]
7101b2be34  ldr x8,[x22, #0x18]
7101b2be38  ldr x1,[x8]
7101b2be3c  cbz x1,0x7101b2be60
7101b2be40  ldr x21,[x1, #0x18]
7101b2be44  cbz x21,0x7101b2be60
7101b2be48  mov x0,x21
7101b2be4c  bl 0x7100058290
7101b2be50  ldr x8,[x22, #0x18]
7101b2be54  ldr x1,[x8]
7101b2be58  mov x0,x21
7101b2be5c  bl 0x7100058250
7101b2be60  ldr w8,[x20, #0x14]
7101b2be64  cmp w8,#0x2
7101b2be68  b.ne 0x7101b2be80
7101b2be6c  ldr x0,[x20, #0x28]
7101b2be70  fmov s0,0x3f800000
7101b2be74  adrp x1,0x71043bc000
7101b2be78  add x1,x1,#0xc03
7101b2be7c  bl 0x7103778300
7101b2be80  ldr x0,[x27, #0x70]
7101b2be84  ldr x8,[x0, #0x28]
7101b2be88  strb wzr,[x0, #0x11b]
7101b2be8c  ldr x8,[x8, #0x8]
7101b2be90  cbz x8,0x7101b2bea8
7101b2be94  ldr x8,[x8, #0x18]
7101b2be98  cbz x8,0x7101b2bea8
7101b2be9c  ldrb w9,[x8, #0x58]
7101b2bea0  and w9,w9,#0xfe
7101b2bea4  strb w9,[x8, #0x58]
7101b2bea8  bl 0x71032ce230
7101b2beac  ldr x21,[sp, #0x478]
7101b2beb0  adrp x8,0x710523d000
7101b2beb4  add x8,x8,#0x988
7101b2beb8  str x8,[sp, #0x470]
7101b2bebc  str xzr,[sp, #0x478]
7101b2bec0  cbz x21,0x7101b2bee4
7101b2bec4  ldr x0,[x21, #0x18]
7101b2bec8  adrp x8,0x710523d000
7101b2becc  add x8,x8,#0x9a8
7101b2bed0  stp x8,xzr,[x21, #0x10]
7101b2bed4  cbz x0,0x7101b2bedc
7101b2bed8  bl 0x710392eb40
7101b2bedc  mov x0,x21
7101b2bee0  bl 0x710392eb40
7101b2bee4  adrp x1,0x7104452000
7101b2bee8  add x1,x1,#0xf80
7101b2beec  add x8,sp,#0x470
7101b2bef0  mov w2,#0x1
7101b2bef4  mov x0,x26
7101b2bef8  bl 0x7103776640
7101b2befc  adrp x1,0x710425e000
7101b2bf00  add x1,x1,#0xee3
7101b2bf04  add x8,sp,#0x350
7101b2bf08  add x0,sp,#0x470
7101b2bf0c  bl 0x7103776910
7101b2bf10  adrp x1,0x710436b000
7101b2bf14  add x1,x1,#0xf18
7101b2bf18  add x0,sp,#0x350
7101b2bf1c  mov w2,#0x1
7101b2bf20  mov w3,#0x2
7101b2bf24  bl 0x710377a280
7101b2bf28  ldr x0,[sp, #0x358]
7101b2bf2c  adrp x8,0x710523d000
7101b2bf30  add x8,x8,#0x9a8
7101b2bf34  str x8,[sp, #0x350]
7101b2bf38  str xzr,[sp, #0x358]
7101b2bf3c  cbz x0,0x7101b2bf44
7101b2bf40  bl 0x710392eb40
7101b2bf44  ldr w8,[x27, #0x1d8]
7101b2bf48  cmp w8,#0x1
7101b2bf4c  b.le 0x7101b2c030
7101b2bf50  ldr x8,[x27, #0x70]
7101b2bf54  ldr x9,[sp, #0x50]
7101b2bf58  str x9,[x8, #0x240]
7101b2bf5c  ldrb w2,[x27, #0x1dc]
7101b2bf60  mov w4,#0xffffffff
7101b2bf64  mov w1,#0x1
7101b2bf68  mov x0,x19
7101b2bf6c  mov w3,wzr
7101b2bf70  mov w5,wzr
7101b2bf74  mov w21,#0x1
7101b2bf78  bl 0x71032d0830
7101b2bf7c  ldr x8,[x27, #0x70]
7101b2bf80  mov w9,#0x461
7101b2bf84  str w9,[x8, #0x14c]
7101b2bf88  ldr x20,[x27, #0x70]
7101b2bf8c  ldrb w8,[x20, #0x24f]
7101b2bf90  cmp w8,#0x1
7101b2bf94  b.eq 0x7101b2bffc
7101b2bf98  orr w8,wzr,#0x3f800000
7101b2bf9c  str w8,[x20, #0x234]
7101b2bfa0  ldr w8,[x20, #0x230]
7101b2bfa4  ldr x22,[x20, #0x158]
7101b2bfa8  strb w21,[x20, #0x24f]
7101b2bfac  str w8,[x20, #0x23c]
7101b2bfb0  ldr x8,[x22, #0x18]
7101b2bfb4  ldr x1,[x8]
7101b2bfb8  cbz x1,0x7101b2bfdc
7101b2bfbc  ldr x21,[x1, #0x18]
7101b2bfc0  cbz x21,0x7101b2bfdc
7101b2bfc4  mov x0,x21
7101b2bfc8  bl 0x7100058290
7101b2bfcc  ldr x8,[x22, #0x18]
7101b2bfd0  ldr x1,[x8]
7101b2bfd4  mov x0,x21
7101b2bfd8  bl 0x7100058250
7101b2bfdc  ldr w8,[x20, #0x144]
7101b2bfe0  cmp w8,#0x2
7101b2bfe4  b.ne 0x7101b2bffc
7101b2bfe8  ldr x0,[x20, #0x158]
7101b2bfec  fmov s0,0x3f800000
7101b2bff0  adrp x1,0x71043bc000
7101b2bff4  add x1,x1,#0xc03
7101b2bff8  bl 0x7103778300
7101b2bffc  ldr x0,[x27, #0x70]
7101b2c000  ldr x8,[x0, #0x158]
7101b2c004  strb wzr,[x0, #0x24b]
7101b2c008  ldr x8,[x8, #0x8]
7101b2c00c  cbz x8,0x7101b2c024
7101b2c010  ldr x8,[x8, #0x18]
7101b2c014  cbz x8,0x7101b2c024
7101b2c018  ldrb w9,[x8, #0x58]
7101b2c01c  and w9,w9,#0xfe
7101b2c020  strb w9,[x8, #0x58]
7101b2c024  bl 0x71032ce230
7101b2c028  ldr x21,[sp, #0x478]
7101b2c02c  b 0x7101b2c050
7101b2c030  ldr x21,[sp, #0x478]
7101b2c034  ldr x8,[x21, #0x8]
7101b2c038  cbz x8,0x7101b2c050
7101b2c03c  ldr x8,[x8, #0x18]
7101b2c040  cbz x8,0x7101b2c050
7101b2c044  ldrb w9,[x8, #0x58]
7101b2c048  and w9,w9,#0xfe
7101b2c04c  strb w9,[x8, #0x58]
7101b2c050  adrp x8,0x710523d000
7101b2c054  add x8,x8,#0x988
7101b2c058  str x8,[sp, #0x470]
7101b2c05c  str xzr,[sp, #0x478]
7101b2c060  cbz x21,0x7101b2c084
7101b2c064  ldr x0,[x21, #0x18]
7101b2c068  adrp x8,0x710523d000
7101b2c06c  add x8,x8,#0x9a8
7101b2c070  stp x8,xzr,[x21, #0x10]
7101b2c074  cbz x0,0x7101b2c07c
7101b2c078  bl 0x710392eb40
7101b2c07c  mov x0,x21
7101b2c080  bl 0x710392eb40
7101b2c084  adrp x1,0x7104452000
7101b2c088  add x1,x1,#0xf80
7101b2c08c  add x8,sp,#0x470
7101b2c090  mov w2,#0x2
7101b2c094  mov x0,x26
7101b2c098  bl 0x7103776640
7101b2c09c  adrp x1,0x710425e000
7101b2c0a0  add x1,x1,#0xee3
7101b2c0a4  add x8,sp,#0x350
7101b2c0a8  add x0,sp,#0x470
7101b2c0ac  bl 0x7103776910
7101b2c0b0  adrp x1,0x710436b000
7101b2c0b4  add x1,x1,#0xf18
7101b2c0b8  add x0,sp,#0x350
7101b2c0bc  mov w2,#0x1
7101b2c0c0  orr w3,wzr,#0x3
7101b2c0c4  bl 0x710377a280
7101b2c0c8  ldr x0,[sp, #0x358]
7101b2c0cc  adrp x8,0x710523d000
7101b2c0d0  add x8,x8,#0x9a8
7101b2c0d4  str x8,[sp, #0x350]
7101b2c0d8  str xzr,[sp, #0x358]
7101b2c0dc  cbz x0,0x7101b2c0e4
7101b2c0e0  bl 0x710392eb40
7101b2c0e4  ldr w8,[x27, #0x1d8]
7101b2c0e8  cmp w8,#0x2
7101b2c0ec  b.le 0x7101b2c1d0
7101b2c0f0  ldr x8,[x27, #0x70]
7101b2c0f4  ldr x9,[sp, #0x50]
7101b2c0f8  str x9,[x8, #0x370]
7101b2c0fc  ldrb w2,[x27, #0x1dc]
7101b2c100  mov w4,#0xffffffff
7101b2c104  mov w1,#0x2
7101b2c108  mov x0,x19
7101b2c10c  mov w3,wzr
7101b2c110  mov w5,wzr
7101b2c114  bl 0x71032d0830
7101b2c118  ldr x8,[x27, #0x70]
7101b2c11c  mov w9,#0x461
7101b2c120  str w9,[x8, #0x27c]
7101b2c124  ldr x20,[x27, #0x70]
7101b2c128  ldrb w8,[x20, #0x37f]
7101b2c12c  cmp w8,#0x1
7101b2c130  b.eq 0x7101b2c19c
7101b2c134  mov w8,#0x1
7101b2c138  strb w8,[x20, #0x37f]
7101b2c13c  orr w8,wzr,#0x3f800000
7101b2c140  str w8,[x20, #0x364]
7101b2c144  ldr w8,[x20, #0x360]
7101b2c148  ldr x21,[x20, #0x288]
7101b2c14c  str w8,[x20, #0x36c]
7101b2c150  ldr x8,[x21, #0x18]
7101b2c154  ldr x1,[x8]
7101b2c158  cbz x1,0x7101b2c17c
7101b2c15c  ldr x19,[x1, #0x18]
7101b2c160  cbz x19,0x7101b2c17c
7101b2c164  mov x0,x19
7101b2c168  bl 0x7100058290
7101b2c16c  ldr x8,[x21, #0x18]
7101b2c170  ldr x1,[x8]
7101b2c174  mov x0,x19
7101b2c178  bl 0x7100058250
7101b2c17c  ldr w8,[x20, #0x274]
7101b2c180  cmp w8,#0x2
7101b2c184  b.ne 0x7101b2c19c
7101b2c188  ldr x0,[x20, #0x288]
7101b2c18c  fmov s0,0x3f800000
7101b2c190  adrp x1,0x71043bc000
7101b2c194  add x1,x1,#0xc03
7101b2c198  bl 0x7103778300
7101b2c19c  ldr x0,[x27, #0x70]
7101b2c1a0  ldr x8,[x0, #0x288]
7101b2c1a4  strb wzr,[x0, #0x37b]
7101b2c1a8  ldr x8,[x8, #0x8]
7101b2c1ac  cbz x8,0x7101b2c1c4
7101b2c1b0  ldr x8,[x8, #0x18]
7101b2c1b4  cbz x8,0x7101b2c1c4
7101b2c1b8  ldrb w9,[x8, #0x58]
7101b2c1bc  and w9,w9,#0xfe
7101b2c1c0  strb w9,[x8, #0x58]
7101b2c1c4  bl 0x71032ce230
7101b2c1c8  ldr x19,[sp, #0x478]
7101b2c1cc  b 0x7101b2c1f0
7101b2c1d0  ldr x19,[sp, #0x478]
7101b2c1d4  ldr x8,[x19, #0x8]
7101b2c1d8  cbz x8,0x7101b2c1f0
7101b2c1dc  ldr x8,[x8, #0x18]
7101b2c1e0  cbz x8,0x7101b2c1f0
7101b2c1e4  ldrb w9,[x8, #0x58]
7101b2c1e8  and w9,w9,#0xfe
7101b2c1ec  strb w9,[x8, #0x58]
7101b2c1f0  adrp x8,0x710523d000
7101b2c1f4  add x8,x8,#0x988
7101b2c1f8  str x8,[sp, #0x470]
7101b2c1fc  str xzr,[sp, #0x478]
7101b2c200  cbz x19,0x7101b2c224
7101b2c204  ldr x0,[x19, #0x18]
7101b2c208  adrp x8,0x710523d000
7101b2c20c  add x8,x8,#0x9a8
7101b2c210  stp x8,xzr,[x19, #0x10]
7101b2c214  cbz x0,0x7101b2c21c
7101b2c218  bl 0x710392eb40
7101b2c21c  mov x0,x19
7101b2c220  bl 0x710392eb40
7101b2c224  mov x0,x27
7101b2c228  mov w1,wzr
7101b2c22c  bl 0x7101b32b00
7101b2c230  ldr w8,[x27, #0x1d8]
7101b2c234  cmp w8,#0x2
7101b2c238  b.ge 0x7101b2c35c
7101b2c23c  adrp x1,0x7104433000
7101b2c240  add x1,x1,#0x3c
7101b2c244  add x8,sp,#0x350
7101b2c248  mov x0,x26
7101b2c24c  bl 0x7103776640
7101b2c250  adrp x1,0x7104339000
7101b2c254  add x1,x1,#0xd7c
7101b2c258  add x8,sp,#0x470
7101b2c25c  add x0,sp,#0x350
7101b2c260  bl 0x7103776910
7101b2c264  ldr x0,[sp, #0x478]
7101b2c268  ldr x8,[x0]
7101b2c26c  cbz x8,0x7101b2c27c
7101b2c270  ldrb w9,[x8, #0x58]
7101b2c274  and w9,w9,#0xfe
7101b2c278  strb w9,[x8, #0x58]
7101b2c27c  adrp x8,0x710523d000
7101b2c280  add x8,x8,#0x9a8
7101b2c284  str x8,[sp, #0x470]
7101b2c288  str xzr,[sp, #0x478]
7101b2c28c  cbz x0,0x7101b2c294
7101b2c290  bl 0x710392eb40
7101b2c294  ldr x19,[sp, #0x358]
7101b2c298  adrp x8,0x710523d000
7101b2c29c  add x8,x8,#0x988
7101b2c2a0  str x8,[sp, #0x350]
7101b2c2a4  str xzr,[sp, #0x358]
7101b2c2a8  cbz x19,0x7101b2c2cc
7101b2c2ac  ldr x0,[x19, #0x18]
7101b2c2b0  adrp x8,0x710523d000
7101b2c2b4  add x8,x8,#0x9a8
7101b2c2b8  stp x8,xzr,[x19, #0x10]
7101b2c2bc  cbz x0,0x7101b2c2c4
7101b2c2c0  bl 0x710392eb40
7101b2c2c4  mov x0,x19
7101b2c2c8  bl 0x710392eb40
7101b2c2cc  adrp x1,0x7104318000
7101b2c2d0  add x1,x1,#0xa80
7101b2c2d4  add x8,sp,#0x350
7101b2c2d8  mov x0,x26
7101b2c2dc  bl 0x7103776640
7101b2c2e0  adrp x1,0x710425e000
7101b2c2e4  add x1,x1,#0xee3
7101b2c2e8  add x8,sp,#0x470
7101b2c2ec  add x0,sp,#0x350
7101b2c2f0  bl 0x7103776910
7101b2c2f4  ldr x0,[sp, #0x478]
7101b2c2f8  ldr x8,[x0]
7101b2c2fc  cbz x8,0x7101b2c30c
7101b2c300  ldrb w9,[x8, #0x58]
7101b2c304  and w9,w9,#0xfe
7101b2c308  strb w9,[x8, #0x58]
7101b2c30c  adrp x8,0x710523d000
7101b2c310  add x8,x8,#0x9a8
7101b2c314  str x8,[sp, #0x470]
7101b2c318  str xzr,[sp, #0x478]
7101b2c31c  cbz x0,0x7101b2c324
7101b2c320  bl 0x710392eb40
7101b2c324  ldr x19,[sp, #0x358]
7101b2c328  adrp x8,0x710523d000
7101b2c32c  add x8,x8,#0x988
7101b2c330  str x8,[sp, #0x350]
7101b2c334  str xzr,[sp, #0x358]
7101b2c338  cbz x19,0x7101b2c35c
7101b2c33c  ldr x0,[x19, #0x18]
7101b2c340  adrp x8,0x710523d000
7101b2c344  add x8,x8,#0x9a8
7101b2c348  stp x8,xzr,[x19, #0x10]
7101b2c34c  cbz x0,0x7101b2c354
7101b2c350  bl 0x710392eb40
7101b2c354  mov x0,x19
7101b2c358  bl 0x710392eb40
7101b2c35c  ldarb w8,[x24]
7101b2c360  tbz w8,#0x0,0x7101b31818
7101b2c364  ldr w8,[x25, #0xf0]
7101b2c368  and w19,w8,#0x7f000000
7101b2c36c  add x0,sp,#0x350
7101b2c370  mov w1,w19
7101b2c374  bl 0x710339d7d0
7101b2c378  adrp x1,0x71043ad000
7101b2c37c  add x1,x1,#0x3a1
7101b2c380  add x8,sp,#0x340
7101b2c384  mov x0,x26
7101b2c388  bl 0x7103776640
7101b2c38c  adrp x1,0x710439d000
7101b2c390  add x1,x1,#0x53
7101b2c394  add x8,sp,#0x330
7101b2c398  add x0,sp,#0x340
7101b2c39c  bl 0x7103776910
7101b2c3a0  ldrb w8,[x23, #0x1da]
7101b2c3a4  cbz w8,0x7101b2c3d8
7101b2c3a8  adrp x1,0x71043e0000
7101b2c3ac  add x1,x1,#0x1b1
7101b2c3b0  b 0x7101b2c3e0
7101b2c3b4  ldr x21,[sp, #0x478]
7101b2c3b8  ldr x8,[x21, #0x8]
7101b2c3bc  cbz x8,0x7101b2beb0
7101b2c3c0  ldr x8,[x8, #0x18]
7101b2c3c4  cbz x8,0x7101b2beb0
7101b2c3c8  ldrb w9,[x8, #0x58]
7101b2c3cc  and w9,w9,#0xfe
7101b2c3d0  strb w9,[x8, #0x58]
7101b2c3d4  b 0x7101b2beb0
7101b2c3d8  adrp x1,0x71043cf000
7101b2c3dc  add x1,x1,#0xa49
7101b2c3e0  add x0,sp,#0x330
7101b2c3e4  bl 0x710377a120
7101b2c3e8  ldr x20,[sp, #0x48]
7101b2c3ec  ldr w8,[sp, #0x354]
7101b2c3f0  cbz w8,0x7101b2c408
7101b2c3f4  ldr x0,[sp, #0x348]
7101b2c3f8  fmov s0,0x3f800000
7101b2c3fc  add x8,sp,#0x350
7101b2c400  add x1,x8,#0x8
7101b2c404  bl 0x7103778300
7101b2c408  mov w8,#0xfd000000
7101b2c40c  add w8,w19,w8
7101b2c410  lsr w8,w8,#0x18
7101b2c414  mov w12,#0x9dc5
7101b2c418  movk w12,#0x811c, LSL #16
7101b2c41c  strb wzr,[sp, #0x2f0]
7101b2c420  str xzr,[sp, #0x2e8]
7101b2c424  cmp w8,#0x4
7101b2c428  b.hi 0x7101b2c5e0
7101b2c42c  adrp x9,0x71044f8000
7101b2c430  add x9,x9,#0x68c
7101b2c434  ldrsw x8,[x9, x8, LSL #0x2]
7101b2c438  add x8,x8,x9
7101b2c43c  br x8
7101b2c440  mov x9,#0x6762
7101b2c444  movk x9,#0x735f, LSL #16
7101b2c448  add x8,sp,#0x2e8
7101b2c44c  movk x9,#0x6970, LSL #32
7101b2c450  movk x9,#0x6972, LSL #48
7101b2c454  str x9,[sp, #0x2f0]
7101b2c458  add x1,x8,#0x8
7101b2c45c  add x9,x8,#0x9
7101b2c460  strb wzr,[sp, #0x2fa]
7101b2c464  mov w8,#0x7374
7101b2c468  strh w8,[sp, #0x2f8]
7101b2c46c  mov w8,#0xa
7101b2c470  mov w11,#0x62
7101b2c474  str w8,[sp, #0x2ec]
7101b2c478  mov w10,#0x89
7101b2c47c  mov w8,w12
7101b2c480  mul w8,w8,w10
7101b2c484  and w11,w11,#0xff
7101b2c488  eor w8,w8,w11
7101b2c48c  ldrb w11,[x9], #0x1
7101b2c490  cbnz w11,0x7101b2c480
7101b2c494  b 0x7101b2c62c
7101b2c498  mov x9,#0x6762
7101b2c49c  movk x9,#0x6f5f, LSL #16
7101b2c4a0  add x8,sp,#0x2e8
7101b2c4a4  movk x9,#0x6c6e, LSL #32
7101b2c4a8  movk x9,#0x6e69, LSL #48
7101b2c4ac  str x9,[sp, #0x2f0]
7101b2c4b0  add x1,x8,#0x8
7101b2c4b4  add x9,x8,#0x9
7101b2c4b8  mov w8,#0x65
7101b2c4bc  strh w8,[sp, #0x2f8]
7101b2c4c0  mov w8,#0x9
7101b2c4c4  str w8,[sp, #0x2ec]
7101b2c4c8  mov w11,#0x62
7101b2c4cc  mov w10,#0x89
7101b2c4d0  mov w8,w12
7101b2c4d4  mul w8,w8,w10
7101b2c4d8  and w11,w11,#0xff
7101b2c4dc  eor w8,w8,w11
7101b2c4e0  ldrb w11,[x9], #0x1
7101b2c4e4  cbnz w11,0x7101b2c4d4
7101b2c4e8  b 0x7101b2c62c
7101b2c4ec  mov x9,#0x6762
7101b2c4f0  movk x9,#0x635f, LSL #16
7101b2c4f4  add x8,sp,#0x2e8
7101b2c4f8  movk x9,#0x6c6f, LSL #32
7101b2c4fc  movk x9,#0x656c, LSL #48
7101b2c500  str x9,[sp, #0x2f0]
7101b2c504  add x1,x8,#0x8
7101b2c508  add x9,x8,#0x9
7101b2c50c  strb wzr,[sp, #0x2f8]
7101b2c510  mov w8,#0x8
7101b2c514  str w8,[sp, #0x2ec]
7101b2c518  mov w11,#0x62
7101b2c51c  mov w10,#0x89
7101b2c520  mov w8,w12
7101b2c524  mul w8,w8,w10
7101b2c528  and w11,w11,#0xff
7101b2c52c  eor w8,w8,w11
7101b2c530  ldrb w11,[x9], #0x1
7101b2c534  cbnz w11,0x7101b2c524
7101b2c538  b 0x7101b2c62c
7101b2c53c  mov x9,#0x6762
7101b2c540  movk x9,#0x6f5f, LSL #16
7101b2c544  add x8,sp,#0x2e8
7101b2c548  movk x9,#0x7470, LSL #32
7101b2c54c  movk x9,#0x6f69, LSL #48
7101b2c550  str x9,[sp, #0x2f0]
7101b2c554  add x1,x8,#0x8
7101b2c558  add x9,x8,#0x9
7101b2c55c  mov w8,#0x6e
7101b2c560  strh w8,[sp, #0x2f8]
7101b2c564  mov w8,#0x9
7101b2c568  str w8,[sp, #0x2ec]
7101b2c56c  mov w11,#0x62
7101b2c570  mov w10,#0x89
7101b2c574  mov w8,w12
7101b2c578  mul w8,w8,w10
7101b2c57c  and w11,w11,#0xff
7101b2c580  eor w8,w8,w11
7101b2c584  ldrb w11,[x9], #0x1
7101b2c588  cbnz w11,0x7101b2c578
7101b2c58c  b 0x7101b2c62c
7101b2c590  mov x9,#0x6762
7101b2c594  movk x9,#0x6f5f, LSL #16
7101b2c598  add x8,sp,#0x2e8
7101b2c59c  movk x9,#0x6874, LSL #32
7101b2c5a0  movk x9,#0x7265, LSL #48
7101b2c5a4  str x9,[sp, #0x2f0]
7101b2c5a8  add x1,x8,#0x8
7101b2c5ac  add x9,x8,#0x9
7101b2c5b0  strb wzr,[sp, #0x2f8]
7101b2c5b4  mov w8,#0x8
7101b2c5b8  str w8,[sp, #0x2ec]
7101b2c5bc  mov w11,#0x62
7101b2c5c0  mov w10,#0x89
7101b2c5c4  mov w8,w12
7101b2c5c8  mul w8,w8,w10
7101b2c5cc  and w11,w11,#0xff
7101b2c5d0  eor w8,w8,w11
7101b2c5d4  ldrb w11,[x9], #0x1
7101b2c5d8  cbnz w11,0x7101b2c5c8
7101b2c5dc  b 0x7101b2c62c
7101b2c5e0  mov x9,#0x6762
7101b2c5e4  movk x9,#0x6d5f, LSL #16
7101b2c5e8  add x8,sp,#0x2e8
7101b2c5ec  movk x9,#0x6c65, LSL #32
7101b2c5f0  movk x9,#0x6565, LSL #48
7101b2c5f4  str x9,[sp, #0x2f0]
7101b2c5f8  add x1,x8,#0x8
7101b2c5fc  add x9,x8,#0x9
7101b2c600  strb wzr,[sp, #0x2f8]
7101b2c604  mov w8,#0x8
7101b2c608  str w8,[sp, #0x2ec]
7101b2c60c  mov w11,#0x62
7101b2c610  mov w10,#0x89
7101b2c614  mov w8,w12
7101b2c618  mul w8,w8,w10
7101b2c61c  and w11,w11,#0xff
7101b2c620  eor w8,w8,w11
7101b2c624  ldrb w11,[x9], #0x1
7101b2c628  cbnz w11,0x7101b2c618
7101b2c62c  str w8,[sp, #0x2e8]
7101b2c630  ldr x0,[x20, #0x10]
7101b2c634  fmov s0,0x3f800000
7101b2c638  bl 0x7103778300
7101b2c63c  ldp x8,x9,[x27, #0x10]
7101b2c640  cmp x9,x8
7101b2c644  b.eq 0x7101b31880
7101b2c648  ldr w9,[x23, #0x50]
7101b2c64c  ldr x8,[x8]
7101b2c650  add x0,sp,#0x610
7101b2c654  ldr w22,[x27, #0x1d8]
7101b2c658  str x8,[sp, #0x70]
7101b2c65c  str w9,[x27, #0x36c]
7101b2c660  str xzr,[sp, #0x620]
7101b2c664  mov w19,#0x2198
7101b2c668  movk w19,#0x3, LSL #16
7101b2c66c  str xzr,[sp, #0x618]
7101b2c670  str xzr,[sp, #0x610]
7101b2c674  bl 0x7101ebc290
7101b2c678  ldr x0,[sp, #0x610]
7101b2c67c  ldr x1,[sp, #0x618]
7101b2c680  bl 0x7101ebc6e0
7101b2c684  adrp x8,0x7105314000
7101b2c688  ldr x8,[x8, #0x510]
7101b2c68c  ldr x8,[x8]
7101b2c690  ldr x8,[x8, #0x298]
7101b2c694  mov w0,#0x10
7101b2c698  mov x1,x19
7101b2c69c  str x8,[sp, #0x80]
7101b2c6a0  bl 0x710392e290
7101b2c6a4  mov x23,x0
7101b2c6a8  cbnz x0,0x7101b2c6ec
7101b2c6ac  ldr x0,[x28, #0xf00]
7101b2c6b0  cbz x0,0x7101b2c6e8
7101b2c6b4  str wzr,[sp, #0x448]
7101b2c6b8  str x19,[sp, #0x470]
7101b2c6bc  ldr x8,[x0]
7101b2c6c0  ldr x8,[x8, #0x30]
7101b2c6c4  add x1,sp,#0x448
7101b2c6c8  add x2,sp,#0x470
7101b2c6cc  blr x8
7101b2c6d0  tbz w0,#0x0,0x7101b2c6e8
7101b2c6d4  mov w0,#0x10
7101b2c6d8  mov x1,x19
7101b2c6dc  bl 0x710392e290
7101b2c6e0  mov x23,x0
7101b2c6e4  cbnz x0,0x7101b2c6ec
7101b2c6e8  mov x23,xzr
7101b2c6ec  mov w19,#0x10a
7101b2c6f0  orr x8,xzr,#0x200000000
7101b2c6f4  add x0,x23,#0x8
7101b2c6f8  mov w1,wzr
7101b2c6fc  mov x2,x19
7101b2c700  str x8,[x23]
7101b2c704  add x21,x23,#0x134
7101b2c708  str x0,[sp, #0x58]
7101b2c70c  bl 0x71039c02a0
7101b2c710  mov x8,#0xff0000000000
7101b2c714  mov w20,#0x1
7101b2c718  str x21,[sp, #0x50]
7101b2c71c  movk x8,#0xd9ff, LSL #48
7101b2c720  str x20,[x21]
7101b2c724  add x0,x23,#0x158
7101b2c728  mov x21,x8
7101b2c72c  str x8,[x23, #0x140]
7101b2c730  add x8,x23,#0x14f
7101b2c734  mov w2,#0x2040
7101b2c738  movk w2,#0x3, LSL #16
7101b2c73c  mov w1,wzr
7101b2c740  str xzr,[x8]
7101b2c744  str x23,[sp, #0x90]
7101b2c748  str xzr,[x23, #0x148]
7101b2c74c  bl 0x71039c02a0
7101b2c750  add x8,sp,#0x470
7101b2c754  add x0,x8,#0x8
7101b2c758  add x23,x8,#0x134
7101b2c75c  mov w1,wzr
7101b2c760  mov x2,x19
7101b2c764  str wzr,[sp, #0x470]
7101b2c768  str x23,[sp, #0x60]
7101b2c76c  str x0,[sp, #0x48]
7101b2c770  bl 0x71039c02a0
7101b2c774  add x10,sp,#0x470
7101b2c778  add x8,x10,#0x14f
7101b2c77c  str x20,[x23]
7101b2c780  str x21,[sp, #0x5b0]
7101b2c784  str xzr,[x8]
7101b2c788  str xzr,[sp, #0x5b8]
7101b2c78c  ldr x8,[sp, #0x618]
7101b2c790  ldr x9,[sp, #0x610]
7101b2c794  sub x11,x8,x9
7101b2c798  strb wzr,[sp, #0x608]
7101b2c79c  str xzr,[sp, #0x600]
7101b2c7a0  str xzr,[sp, #0x5f8]
7101b2c7a4  str xzr,[sp, #0x5f0]
7101b2c7a8  sbfx x25,x11,#0x2,#0x20
7101b2c7ac  str xzr,[sp, #0x5e8]
7101b2c7b0  add x26,x27,#0x248
7101b2c7b4  str xzr,[sp, #0x5e0]
7101b2c7b8  str xzr,[sp, #0x5d8]
7101b2c7bc  str xzr,[sp, #0x5d0]
7101b2c7c0  str xzr,[sp, #0x5c8]
7101b2c7c4  ldr x20,[x27, #0x258]
7101b2c7c8  ldr x23,[x27, #0x248]
7101b2c7cc  sub x8,x20,x23
7101b2c7d0  asr x9,x8,#0x5
7101b2c7d4  mov x8,#0x4ec5
7101b2c7d8  movk x8,#0xc4ec, LSL #16
7101b2c7dc  movk x8,#0xec4e, LSL #32
7101b2c7e0  movk x8,#0x4ec4, LSL #48
7101b2c7e4  mul x9,x9,x8
7101b2c7e8  cmp x9,x25
7101b2c7ec  str w22,[sp, #0x78]
7101b2c7f0  b.cs 0x7101b2c98c
7101b2c7f4  mov x9,#0xd89e
7101b2c7f8  movk x9,#0x9d89, LSL #16
7101b2c7fc  movk x9,#0x89d8, LSL #32
7101b2c800  movk x9,#0x9d, LSL #48
7101b2c804  cmp x25,x9
7101b2c808  b.cs 0x7101b31888
7101b2c80c  add x24,x27,#0x250
7101b2c810  ldr x19,[x24]
7101b2c814  sub x10,x19,x23
7101b2c818  asr x10,x10,#0x5
7101b2c81c  mul x20,x10,x8
7101b2c820  mov w8,#0x1a0
7101b2c824  mul x8,x25,x8
7101b2c828  lsl x9,x11,#0x1e
7101b2c82c  cmp x9,#0x0
7101b2c830  csinc x22,x8,xzr,ne
7101b2c834  mov w0,#0x10
7101b2c838  mov x1,x22
7101b2c83c  str x11,[sp, #0x30]
7101b2c840  bl 0x710392e290
7101b2c844  mov x21,x0
7101b2c848  cbnz x0,0x7101b2c88c
7101b2c84c  ldr x0,[x28, #0xf00]
7101b2c850  cbz x0,0x7101b2c888
7101b2c854  str wzr,[sp, #0x460]
7101b2c858  str x22,[sp, #0x448]
7101b2c85c  ldr x8,[x0]
7101b2c860  ldr x8,[x8, #0x30]
7101b2c864  add x1,sp,#0x460
7101b2c868  add x2,sp,#0x448
7101b2c86c  blr x8
7101b2c870  tbz w0,#0x0,0x7101b2c888
7101b2c874  mov w0,#0x10
7101b2c878  mov x1,x22
7101b2c87c  bl 0x710392e290
7101b2c880  mov x21,x0
7101b2c884  cbnz x0,0x7101b2c88c
7101b2c888  mov x21,xzr
7101b2c88c  mov w8,#0x1a0
7101b2c890  madd x10,x20,x8,x21
7101b2c894  mov x9,x20
7101b2c898  madd x20,x25,x8,x21
7101b2c89c  cmp x19,x23
7101b2c8a0  b.eq 0x7101b2c998
7101b2c8a4  mov w8,#0x1a0
7101b2c8a8  stp x24,x26,[sp, #0x20]
7101b2c8ac  madd x26,x9,x8,x21
7101b2c8b0  mov x27,xzr
7101b2c8b4  sub x28,x23,x19
7101b2c8b8  mov w22,#0x108
7101b2c8bc  stp x10,x9,[sp, #0x10]
7101b2c8c0  add x23,x26,x27
7101b2c8c4  add x24,x19,x27
7101b2c8c8  sub x0,x23,#0x1a0
7101b2c8cc  sub x1,x24,#0x1a0
7101b2c8d0  mov x2,x22
7101b2c8d4  bl 0x71039c00e0
7101b2c8d8  str wzr,[x23, #-0x98]!
7101b2c8dc  sub x1,x24,#0x90
7101b2c8e0  mov x0,x23
7101b2c8e4  bl 0x7101748070
7101b2c8e8  ldur x8,[x24, #-0x6c]
7101b2c8ec  stur x8,[x23, #0x2c]
7101b2c8f0  ldur x8,[x24, #-0x64]
7101b2c8f4  ldur x9,[x24, #-0x5c]
7101b2c8f8  ldur x10,[x24, #-0x54]
7101b2c8fc  ldur x11,[x24, #-0x4c]
7101b2c900  stur x11,[x23, #0x4c]
7101b2c904  stur x10,[x23, #0x44]
7101b2c908  stur x9,[x23, #0x3c]
7101b2c90c  stur x8,[x23, #0x34]
7101b2c910  ldur x8,[x24, #-0x44]
7101b2c914  ldur x9,[x24, #-0x3c]
7101b2c918  ldur x10,[x24, #-0x34]
7101b2c91c  ldur x11,[x24, #-0x2c]
7101b2c920  stur x11,[x23, #0x6c]
7101b2c924  stur x10,[x23, #0x64]
7101b2c928  stur x9,[x23, #0x5c]
7101b2c92c  stur x8,[x23, #0x54]
7101b2c930  ldur x8,[x24, #-0x24]
7101b2c934  ldur x9,[x24, #-0x1c]
7101b2c938  ldur x10,[x24, #-0x14]
7101b2c93c  ldur w11,[x24, #-0xc]
7101b2c940  str w11,[x23, #0x8c]
7101b2c944  stur x10,[x23, #0x84]
7101b2c948  stur x9,[x23, #0x7c]
7101b2c94c  stur x8,[x23, #0x74]
7101b2c950  ldurb w8,[x24, #-0x8]
7101b2c954  sub x27,x27,#0x1a0
7101b2c958  cmp x28,x27
7101b2c95c  strb w8,[x23, #0x90]
7101b2c960  b.ne 0x7101b2c8c0
7101b2c964  ldp x9,x24,[sp, #0x18]
7101b2c968  mov w8,#0x1a0
7101b2c96c  mul x8,x9,x8
7101b2c970  ldr x26,[sp, #0x28]
7101b2c974  ldr x19,[x26]
7101b2c978  ldr x10,[sp, #0x10]
7101b2c97c  add x8,x21,x8
7101b2c980  add x8,x8,x27
7101b2c984  ldr x27,[sp, #0x98]
7101b2c988  b 0x7101b2c99c
7101b2c98c  ldr x23,[sp, #0x68]
7101b2c990  add x24,x27,#0x250
7101b2c994  b 0x7101b2c9c8
7101b2c998  mov x8,x10
7101b2c99c  ldr x23,[sp, #0x68]
7101b2c9a0  str x8,[x27, #0x248]
7101b2c9a4  str x10,[x27, #0x250]
7101b2c9a8  str x20,[x27, #0x258]
7101b2c9ac  cbz x19,0x7101b2c9bc
7101b2c9b0  mov x0,x19
7101b2c9b4  bl 0x710392eb40
7101b2c9b8  ldr x20,[x27, #0x258]
7101b2c9bc  ldr x11,[sp, #0x30]
7101b2c9c0  adrp x28,0x7105332000
7101b2c9c4  add x10,sp,#0x470
7101b2c9c8  ldr x21,[x24]
7101b2c9cc  add x19,x10,#0x110
7101b2c9d0  lsr x22,x11,#0x2
7101b2c9d4  cmp x21,x20
7101b2c9d8  b.eq 0x7101b2ca9c
7101b2c9dc  mov w2,#0x108
7101b2c9e0  add x1,sp,#0x470
7101b2c9e4  mov x0,x21
7101b2c9e8  bl 0x71039c00e0
7101b2c9ec  add x0,x21,#0x108
7101b2c9f0  mov x1,x19
7101b2c9f4  str wzr,[x21, #0x108]
7101b2c9f8  bl 0x7101748070
7101b2c9fc  ldr x13,[sp, #0x60]
7101b2ca00  ldr x9,[x13]
7101b2ca04  add x8,x21,#0x134
7101b2ca08  str x9,[x8]
7101b2ca0c  ldp x10,x11,[x13, #0x18]
7101b2ca10  ldp x8,x9,[x13, #0x8]
7101b2ca14  add x12,x21,#0x154
7101b2ca18  str x11,[x12]
7101b2ca1c  add x11,x21,#0x14c
7101b2ca20  str x10,[x11]
7101b2ca24  add x10,x21,#0x144
7101b2ca28  str x9,[x10]
7101b2ca2c  add x9,x21,#0x13c
7101b2ca30  str x8,[x9]
7101b2ca34  ldp x10,x11,[x13, #0x38]
7101b2ca38  ldp x8,x9,[x13, #0x28]
7101b2ca3c  add x12,x21,#0x174
7101b2ca40  str x11,[x12]
7101b2ca44  add x11,x21,#0x16c
7101b2ca48  str x10,[x11]
7101b2ca4c  add x10,x21,#0x164
7101b2ca50  str x9,[x10]
7101b2ca54  add x9,x21,#0x15c
7101b2ca58  str x8,[x9]
7101b2ca5c  ldr w11,[x13, #0x60]
7101b2ca60  ldr x10,[x13, #0x58]
7101b2ca64  ldp x8,x9,[x13, #0x48]
7101b2ca68  str w11,[x21, #0x194]
7101b2ca6c  add x11,x21,#0x18c
7101b2ca70  str x10,[x11]
7101b2ca74  add x10,x21,#0x184
7101b2ca78  str x9,[x10]
7101b2ca7c  add x9,x21,#0x17c
7101b2ca80  str x8,[x9]
7101b2ca84  ldrb w8,[sp, #0x608]
7101b2ca88  strb w8,[x21, #0x198]
7101b2ca8c  ldr x8,[x24]
7101b2ca90  add x8,x8,#0x1a0
7101b2ca94  str x8,[x24]
7101b2ca98  b 0x7101b2caa8
7101b2ca9c  add x1,sp,#0x470
7101b2caa0  mov x0,x26
7101b2caa4  bl 0x7101b260a0
7101b2caa8  ldr x14,[sp, #0x80]
7101b2caac  adrp x21,0x7105314000
7101b2cab0  cmp w22,#0x1
7101b2cab4  b.lt 0x7101b2d054
7101b2cab8  ldr x9,[sp, #0x90]
7101b2cabc  add x8,x9,#0x110
7101b2cac0  str x8,[sp, #0x30]
7101b2cac4  add x8,sp,#0x470
7101b2cac8  add x8,x8,#0x108
7101b2cacc  str x8,[sp, #0x28]
7101b2cad0  mov w8,#0xc998
7101b2cad4  add x8,x9,x8
7101b2cad8  str x8,[sp, #0x18]
7101b2cadc  add x8,sp,#0x448
7101b2cae0  mov x22,xzr
7101b2cae4  add x15,x27,#0x238
7101b2cae8  mov w2,#0x2198
7101b2caec  movk w2,#0x3, LSL #16
7101b2caf0  add x8,x8,#0x8
7101b2caf4  str x8,[sp, #0x20]
7101b2caf8  cbz x22,0x7101b2d048
7101b2cafc  ldr x9,[sp, #0x618]
7101b2cb00  ldr x8,[sp, #0x610]
7101b2cb04  sub x9,x9,x8
7101b2cb08  asr x9,x9,#0x2
7101b2cb0c  cmp x9,x22
7101b2cb10  b.ls 0x7101b31868
7101b2cb14  ldr w20,[x8, x22, LSL #0x2]
7101b2cb18  ldr x8,[x21, #0x510]
7101b2cb1c  ldr x8,[x8]
7101b2cb20  ldrb w8,[x8]
7101b2cb24  cmp w20,#0x0
7101b2cb28  ccmp w8,#0x0,#0x0,ne
7101b2cb2c  b.ne 0x7101b2d048
7101b2cb30  ldr x0,[x14]
7101b2cb34  ldp x8,x9,[x0]
7101b2cb38  cmp x8,x9
7101b2cb3c  b.eq 0x7101b2d048
7101b2cb40  ldr x10,[x0, #0x58]
7101b2cb44  cbz x10,0x7101b2d048
7101b2cb48  mov x11,x0
7101b2cb4c  ldr x12,[x11, #0x50]!
7101b2cb50  cbz x12,0x7101b2d048
7101b2cb54  mov x10,x11
7101b2cb58  ldr w13,[x12, #0x1c]
7101b2cb5c  cmp w13,w20
7101b2cb60  cset w13,cc
7101b2cb64  csel x10,x10,x12,cc
7101b2cb68  ldr x12,[x12, w13, UXTW #0x3]
7101b2cb6c  cbnz x12,0x7101b2cb58
7101b2cb70  cmp x10,x11
7101b2cb74  b.eq 0x7101b2d048
7101b2cb78  ldr w11,[x10, #0x1c]
7101b2cb7c  cmp w11,w20
7101b2cb80  b.hi 0x7101b2d048
7101b2cb84  ldrsw x10,[x10, #0x20]
7101b2cb88  cmn w10,#0x1
7101b2cb8c  b.eq 0x7101b2d048
7101b2cb90  sub x9,x9,x8
7101b2cb94  mov w11,#0x2198
7101b2cb98  movk w11,#0x3, LSL #16
7101b2cb9c  sdiv x9,x9,x11
7101b2cba0  cmp x9,x10
7101b2cba4  b.ls 0x7101b3186c
7101b2cba8  madd x9,x10,x2,x8
7101b2cbac  ldrh w9,[x9, #0x4]
7101b2cbb0  cmp w9,#0x2
7101b2cbb4  b.ne 0x7101b2d048
7101b2cbb8  madd x1,x10,x2,x8
7101b2cbbc  ldr x0,[sp, #0x90]
7101b2cbc0  stp x19,x15,[sp, #0x8]
7101b2cbc4  bl 0x71039c00e0
7101b2cbc8  ldr x0,[sp, #0x48]
7101b2cbcc  ldr x1,[sp, #0x58]
7101b2cbd0  mov w2,#0x100
7101b2cbd4  str w20,[sp, #0x470]
7101b2cbd8  bl 0x71039c00e0
7101b2cbdc  ldp x0,x1,[sp, #0x28]
7101b2cbe0  bl 0x7101748070
7101b2cbe4  ldr x12,[sp, #0x50]
7101b2cbe8  ldr x8,[x12]
7101b2cbec  ldr x19,[sp, #0x60]
7101b2cbf0  str x8,[x19]
7101b2cbf4  ldp x8,x9,[x12, #0x8]
7101b2cbf8  ldp x10,x11,[x12, #0x18]
7101b2cbfc  add x1,sp,#0x470
7101b2cc00  stp x10,x11,[x19, #0x18]
7101b2cc04  stp x8,x9,[x19, #0x8]
7101b2cc08  ldp x8,x9,[x12, #0x28]
7101b2cc0c  ldp x10,x11,[x12, #0x38]
7101b2cc10  stp x10,x11,[x19, #0x38]
7101b2cc14  stp x8,x9,[x19, #0x28]
7101b2cc18  ldr x10,[x12, #0x58]
7101b2cc1c  ldp x8,x9,[x12, #0x48]
7101b2cc20  ldr w11,[x12, #0x60]
7101b2cc24  str w11,[x19, #0x60]
7101b2cc28  stp x9,x10,[x19, #0x50]
7101b2cc2c  str x8,[x19, #0x48]
7101b2cc30  ldr x23,[x27, #0x250]
7101b2cc34  ldr x8,[x27, #0x258]
7101b2cc38  cmp x23,x8
7101b2cc3c  b.eq 0x7101b2ccf8
7101b2cc40  mov x0,x23
7101b2cc44  mov w2,#0x108
7101b2cc48  bl 0x71039c00e0
7101b2cc4c  ldr x1,[sp, #0x8]
7101b2cc50  add x0,x23,#0x108
7101b2cc54  str wzr,[x23, #0x108]
7101b2cc58  bl 0x7101748070
7101b2cc5c  ldr x9,[x19]
7101b2cc60  add x8,x23,#0x134
7101b2cc64  str x9,[x8]
7101b2cc68  ldp x10,x11,[x19, #0x18]
7101b2cc6c  add x12,x23,#0x154
7101b2cc70  ldp x8,x9,[x19, #0x8]
7101b2cc74  str x11,[x12]
7101b2cc78  add x11,x23,#0x14c
7101b2cc7c  str x10,[x11]
7101b2cc80  add x10,x23,#0x144
7101b2cc84  str x9,[x10]
7101b2cc88  add x9,x23,#0x13c
7101b2cc8c  str x8,[x9]
7101b2cc90  ldp x10,x11,[x19, #0x38]
7101b2cc94  add x12,x23,#0x174
7101b2cc98  ldp x8,x9,[x19, #0x28]
7101b2cc9c  str x11,[x12]
7101b2cca0  add x11,x23,#0x16c
7101b2cca4  str x10,[x11]
7101b2cca8  add x10,x23,#0x164
7101b2ccac  str x9,[x10]
7101b2ccb0  add x9,x23,#0x15c
7101b2ccb4  str x8,[x9]
7101b2ccb8  ldr w11,[x19, #0x60]
7101b2ccbc  ldr x10,[x19, #0x58]
7101b2ccc0  ldp x8,x9,[x19, #0x48]
7101b2ccc4  str w11,[x23, #0x194]
7101b2ccc8  add x11,x23,#0x18c
7101b2cccc  str x10,[x11]
7101b2ccd0  add x10,x23,#0x184
7101b2ccd4  str x9,[x10]
7101b2ccd8  add x9,x23,#0x17c
7101b2ccdc  str x8,[x9]
7101b2cce0  ldrb w8,[sp, #0x608]
7101b2cce4  strb w8,[x23, #0x198]
7101b2cce8  ldr x8,[x24]
7101b2ccec  add x8,x8,#0x1a0
7101b2ccf0  str x8,[x24]
7101b2ccf4  b 0x7101b2cd00
7101b2ccf8  mov x0,x26
7101b2ccfc  bl 0x7101b260a0
7101b2cd00  ldr x8,[sp, #0x90]
7101b2cd04  ldr w8,[x8, #0x160]
7101b2cd08  ldr x23,[sp, #0x68]
7101b2cd0c  ldr x14,[sp, #0x80]
7101b2cd10  ldp x19,x15,[sp, #0x8]
7101b2cd14  mov w2,#0x2198
7101b2cd18  movk w2,#0x3, LSL #16
7101b2cd1c  adrp x9,0x710523d000
7101b2cd20  add x9,x9,#0xa28
7101b2cd24  cbz w8,0x7101b2d048
7101b2cd28  mov w0,#0x10
7101b2cd2c  mov w1,#0x10
7101b2cd30  str x9,[sp, #0x460]
7101b2cd34  bl 0x710392e290
7101b2cd38  cbnz x0,0x7101b2cd7c
7101b2cd3c  ldr x0,[x28, #0xf00]
7101b2cd40  cbz x0,0x7101b2cd78
7101b2cd44  mov w8,#0x10
7101b2cd48  str wzr,[sp, #0x438]
7101b2cd4c  add x1,sp,#0x438
7101b2cd50  str x8,[sp, #0x448]
7101b2cd54  ldr x8,[x0]
7101b2cd58  ldr x8,[x8, #0x30]
7101b2cd5c  add x2,sp,#0x448
7101b2cd60  blr x8
7101b2cd64  tbz w0,#0x0,0x7101b2cd78
7101b2cd68  mov w0,#0x10
7101b2cd6c  mov w1,#0x10
7101b2cd70  bl 0x710392e290
7101b2cd74  cbnz x0,0x7101b2cd7c
7101b2cd78  mov x0,xzr
7101b2cd7c  stp xzr,xzr,[x0]
7101b2cd80  ldr x8,[sp, #0x90]
7101b2cd84  str x0,[sp, #0x468]
7101b2cd88  ldr w2,[x8, #0x160]
7101b2cd8c  ldr x1,[sp, #0x18]
7101b2cd90  mov w3,wzr
7101b2cd94  bl 0x710377b8b0
7101b2cd98  ldr x0,[sp, #0x20]
7101b2cd9c  add x1,sp,#0x460
7101b2cda0  str w20,[sp, #0x448]
7101b2cda4  bl 0x710377b720
7101b2cda8  ldr x15,[sp, #0x10]
7101b2cdac  ldr x20,[x15]
7101b2cdb0  cbz x20,0x7101b2ce10
7101b2cdb4  ldr w8,[sp, #0x448]
7101b2cdb8  ldr x14,[sp, #0x80]
7101b2cdbc  mov x21,x15
7101b2cdc0  mov w2,#0x2198
7101b2cdc4  movk w2,#0x3, LSL #16
7101b2cdc8  adrp x10,0x710523d000
7101b2cdcc  add x10,x10,#0xa28
7101b2cdd0  b 0x7101b2cddc
7101b2cdd4  mov x21,x20
7101b2cdd8  mov x20,x9
7101b2cddc  ldr w9,[x20, #0x20]
7101b2cde0  cmp w8,w9
7101b2cde4  b.cs 0x7101b2cdf4
7101b2cde8  ldr x9,[x20]
7101b2cdec  cbnz x9,0x7101b2cdd4
7101b2cdf0  b 0x7101b2cef4
7101b2cdf4  cmp w9,w8
7101b2cdf8  b.cs 0x7101b2ce2c
7101b2cdfc  mov x21,x20
7101b2ce00  ldr x9,[x21, #0x8]!
7101b2ce04  cbz x9,0x7101b2ce2c
7101b2ce08  mov x20,x9
7101b2ce0c  b 0x7101b2cddc
7101b2ce10  ldr x14,[sp, #0x80]
7101b2ce14  mov x20,x15
7101b2ce18  mov x21,x15
7101b2ce1c  mov w2,#0x2198
7101b2ce20  movk w2,#0x3, LSL #16
7101b2ce24  adrp x10,0x710523d000
7101b2ce28  add x10,x10,#0xa28
7101b2ce2c  ldr x8,[x21]
7101b2ce30  cbnz x8,0x7101b2cf00
7101b2ce34  mov w0,#0x10
7101b2ce38  orr w1,wzr,#0x38
7101b2ce3c  bl 0x710392e290
7101b2ce40  mov x23,x0
7101b2ce44  cbnz x0,0x7101b2ce8c
7101b2ce48  ldr x0,[x28, #0xf00]
7101b2ce4c  cbz x0,0x7101b2ce88
7101b2ce50  orr w8,wzr,#0x38
7101b2ce54  stur wzr,[x29, #-0xb0]
7101b2ce58  sub x1,x29,#0xb0
7101b2ce5c  str x8,[sp, #0x438]
7101b2ce60  ldr x8,[x0]
7101b2ce64  ldr x8,[x8, #0x30]
7101b2ce68  add x2,sp,#0x438
7101b2ce6c  blr x8
7101b2ce70  tbz w0,#0x0,0x7101b2ce88
7101b2ce74  mov w0,#0x10
7101b2ce78  orr w1,wzr,#0x38
7101b2ce7c  bl 0x710392e290
7101b2ce80  mov x23,x0
7101b2ce84  cbnz x0,0x7101b2ce8c
7101b2ce88  mov x23,xzr
7101b2ce8c  ldr w8,[sp, #0x448]
7101b2ce90  ldr x1,[sp, #0x20]
7101b2ce94  add x0,x23,#0x28
7101b2ce98  str w8,[x23, #0x20]
7101b2ce9c  bl 0x710377b720
7101b2cea0  stp xzr,xzr,[x23]
7101b2cea4  str x20,[x23, #0x10]
7101b2cea8  str x23,[x21]
7101b2ceac  ldr x8,[x27, #0x230]
7101b2ceb0  ldr x8,[x8]
7101b2ceb4  cbz x8,0x7101b2cec0
7101b2ceb8  str x8,[x27, #0x230]
7101b2cebc  ldr x23,[x21]
7101b2cec0  ldr x0,[x27, #0x238]
7101b2cec4  mov x1,x23
7101b2cec8  bl 0x71003e59f0
7101b2cecc  ldr x8,[x27, #0x240]
7101b2ced0  ldr x14,[sp, #0x80]
7101b2ced4  mov w2,#0x2198
7101b2ced8  movk w2,#0x3, LSL #16
7101b2cedc  ldr x15,[sp, #0x10]
7101b2cee0  add x8,x8,#0x1
7101b2cee4  adrp x10,0x710523d000
7101b2cee8  add x10,x10,#0xa28
7101b2ceec  str x8,[x27, #0x240]
7101b2cef0  b 0x7101b2cf00
7101b2cef4  mov x21,x20
7101b2cef8  ldr x8,[x21]
7101b2cefc  cbz x8,0x7101b2ce34
7101b2cf00  ldr x23,[sp, #0x458]
7101b2cf04  str x10,[sp, #0x450]
7101b2cf08  str xzr,[sp, #0x458]
7101b2cf0c  cbz x23,0x7101b2cfa4
7101b2cf10  ldr x21,[x23, #0x8]
7101b2cf14  stp xzr,xzr,[x23]
7101b2cf18  cbz x21,0x7101b2cf84
7101b2cf1c  add x8,x21,#0x8
7101b2cf20  ldaxr x9,[x8]
7101b2cf24  sub x10,x9,#0x1
7101b2cf28  stlxr w11,x10,[x8]
7101b2cf2c  cbnz w11,0x7101b2cf20
7101b2cf30  cbnz x9,0x7101b2cf4c
7101b2cf34  ldr x8,[x21]
7101b2cf38  ldr x8,[x8, #0x10]
7101b2cf3c  mov x0,x21
7101b2cf40  blr x8
7101b2cf44  mov x0,x21
7101b2cf48  bl 0x71039c2670
7101b2cf4c  ldr x21,[x23, #0x8]
7101b2cf50  cbz x21,0x7101b2cf84
7101b2cf54  add x8,x21,#0x8
7101b2cf58  ldaxr x9,[x8]
7101b2cf5c  sub x10,x9,#0x1
7101b2cf60  stlxr w11,x10,[x8]
7101b2cf64  cbnz w11,0x7101b2cf58
7101b2cf68  cbnz x9,0x7101b2cf84
7101b2cf6c  ldr x8,[x21]
7101b2cf70  ldr x8,[x8, #0x10]
7101b2cf74  mov x0,x21
7101b2cf78  blr x8
7101b2cf7c  mov x0,x21
7101b2cf80  bl 0x71039c2670
7101b2cf84  mov x0,x23
7101b2cf88  bl 0x710392eb40
7101b2cf8c  ldr x14,[sp, #0x80]
7101b2cf90  ldr x15,[sp, #0x10]
7101b2cf94  mov w2,#0x2198
7101b2cf98  movk w2,#0x3, LSL #16
7101b2cf9c  adrp x10,0x710523d000
7101b2cfa0  add x10,x10,#0xa28
7101b2cfa4  ldr x23,[sp, #0x468]
7101b2cfa8  str x10,[sp, #0x460]
7101b2cfac  str xzr,[sp, #0x468]
7101b2cfb0  cbz x23,0x7101b2d040
7101b2cfb4  ldr x21,[x23, #0x8]
7101b2cfb8  stp xzr,xzr,[x23]
7101b2cfbc  cbz x21,0x7101b2d028
7101b2cfc0  add x8,x21,#0x8
7101b2cfc4  ldaxr x9,[x8]
7101b2cfc8  sub x10,x9,#0x1
7101b2cfcc  stlxr w11,x10,[x8]
7101b2cfd0  cbnz w11,0x7101b2cfc4
7101b2cfd4  cbnz x9,0x7101b2cff0
7101b2cfd8  ldr x8,[x21]
7101b2cfdc  ldr x8,[x8, #0x10]
7101b2cfe0  mov x0,x21
7101b2cfe4  blr x8
7101b2cfe8  mov x0,x21
7101b2cfec  bl 0x71039c2670
7101b2cff0  ldr x21,[x23, #0x8]
7101b2cff4  cbz x21,0x7101b2d028
7101b2cff8  add x8,x21,#0x8
7101b2cffc  ldaxr x9,[x8]
7101b2d000  sub x10,x9,#0x1
7101b2d004  stlxr w11,x10,[x8]
7101b2d008  cbnz w11,0x7101b2cffc
7101b2d00c  cbnz x9,0x7101b2d028
7101b2d010  ldr x8,[x21]
7101b2d014  ldr x8,[x8, #0x10]
7101b2d018  mov x0,x21
7101b2d01c  blr x8
7101b2d020  mov x0,x21
7101b2d024  bl 0x71039c2670
7101b2d028  mov x0,x23
7101b2d02c  bl 0x710392eb40
7101b2d030  ldr x14,[sp, #0x80]
7101b2d034  ldr x15,[sp, #0x10]
7101b2d038  mov w2,#0x2198
7101b2d03c  movk w2,#0x3, LSL #16
7101b2d040  ldr x23,[sp, #0x68]
7101b2d044  adrp x21,0x7105314000
7101b2d048  add x22,x22,#0x1
7101b2d04c  cmp x22,x25
7101b2d050  b.lt 0x7101b2caf8
7101b2d054  ldr x8,[x24]
7101b2d058  ldr x19,[x26]
7101b2d05c  sub x9,x8,x19
7101b2d060  ldr x22,[sp, #0x90]
7101b2d064  cmp x9,#0x340
7101b2d068  b.ne 0x7101b2d188
7101b2d06c  add x9,x19,#0x1a0
7101b2d070  cmp x9,x8
7101b2d074  b.eq 0x7101b2d184
7101b2d078  sub x20,x8,#0x1a0
7101b2d07c  mov x21,x19
7101b2d080  ldr w8,[x21, #0x1a0]
7101b2d084  add x0,x21,#0x8
7101b2d088  add x1,x21,#0x1a8
7101b2d08c  mov w2,#0x100
7101b2d090  add x19,x21,#0x1a0
7101b2d094  str w8,[x21]
7101b2d098  bl 0x71039c00e0
7101b2d09c  add x0,x21,#0x108
7101b2d0a0  add x1,x21,#0x2b0
7101b2d0a4  bl 0x7101748070
7101b2d0a8  add x9,x21,#0x2d4
7101b2d0ac  ldr x9,[x9]
7101b2d0b0  add x8,x21,#0x134
7101b2d0b4  str x9,[x8]
7101b2d0b8  add x9,x21,#0x2f4
7101b2d0bc  ldr x9,[x9]
7101b2d0c0  add x8,x21,#0x154
7101b2d0c4  str x9,[x8]
7101b2d0c8  add x9,x21,#0x2ec
7101b2d0cc  ldr x9,[x9]
7101b2d0d0  add x8,x21,#0x14c
7101b2d0d4  str x9,[x8]
7101b2d0d8  add x9,x21,#0x2e4
7101b2d0dc  ldr x9,[x9]
7101b2d0e0  add x8,x21,#0x144
7101b2d0e4  str x9,[x8]
7101b2d0e8  add x9,x21,#0x2dc
7101b2d0ec  ldr x9,[x9]
7101b2d0f0  add x8,x21,#0x13c
7101b2d0f4  str x9,[x8]
7101b2d0f8  add x9,x21,#0x314
7101b2d0fc  ldr x9,[x9]
7101b2d100  add x8,x21,#0x174
7101b2d104  str x9,[x8]
7101b2d108  add x9,x21,#0x30c
7101b2d10c  ldr x9,[x9]
7101b2d110  add x8,x21,#0x16c
7101b2d114  str x9,[x8]
7101b2d118  add x9,x21,#0x304
7101b2d11c  ldr x9,[x9]
7101b2d120  add x8,x21,#0x164
7101b2d124  str x9,[x8]
7101b2d128  add x9,x21,#0x2fc
7101b2d12c  ldr x9,[x9]
7101b2d130  add x8,x21,#0x15c
7101b2d134  str x9,[x8]
7101b2d138  ldr w8,[x21, #0x334]
7101b2d13c  str w8,[x21, #0x194]
7101b2d140  add x9,x21,#0x32c
7101b2d144  ldr x9,[x9]
7101b2d148  add x8,x21,#0x18c
7101b2d14c  str x9,[x8]
7101b2d150  add x9,x21,#0x324
7101b2d154  ldr x9,[x9]
7101b2d158  add x8,x21,#0x184
7101b2d15c  str x9,[x8]
7101b2d160  add x9,x21,#0x31c
7101b2d164  ldr x9,[x9]
7101b2d168  add x8,x21,#0x17c
7101b2d16c  str x9,[x8]
7101b2d170  ldrb w8,[x21, #0x338]
7101b2d174  strb w8,[x21, #0x198]
7101b2d178  cmp x20,x19
7101b2d17c  mov x21,x19
7101b2d180  b.ne 0x7101b2d080
7101b2d184  str x19,[x24]
7101b2d188  mov x20,x24
7101b2d18c  add x24,x27,#0x208
7101b2d190  cbz x22,0x7101b2d19c
7101b2d194  mov x0,x22
7101b2d198  bl 0x710392eb40
7101b2d19c  ldr x8,[sp, #0x70]
7101b2d1a0  ldr x8,[x8]
7101b2d1a4  ldr x8,[x8]
7101b2d1a8  add x9,x8,#0x8
7101b2d1ac  add x19,x27,#0x218
7101b2d1b0  mov x25,x26
7101b2d1b4  cmp x19,x9
7101b2d1b8  b.eq 0x7101b2d22c
7101b2d1bc  ldr x9,[x8, #0x10]
7101b2d1c0  ldr x9,[x9]
7101b2d1c4  ldr x10,[x27, #0x220]
7101b2d1c8  str x9,[x10]
7101b2d1cc  ldr x9,[x8, #0x10]
7101b2d1d0  ldr x9,[x9, #0x8]
7101b2d1d4  ldr x10,[x27, #0x220]
7101b2d1d8  str x9,[x10, #0x8]
7101b2d1dc  ldr x9,[x8, #0x10]
7101b2d1e0  ldr x8,[x27, #0x220]
7101b2d1e4  cmp x8,x9
7101b2d1e8  b.eq 0x7101b2d22c
7101b2d1ec  ldr x10,[x9, #0x18]
7101b2d1f0  ldr x10,[x10]
7101b2d1f4  ldr x11,[x8, #0x18]
7101b2d1f8  str x10,[x11]
7101b2d1fc  ldr x10,[x9, #0x18]
7101b2d200  ldr x10,[x10, #0x8]
7101b2d204  ldr x11,[x8, #0x18]
7101b2d208  str x10,[x11, #0x8]
7101b2d20c  ldr x10,[x9, #0x18]
7101b2d210  ldr x10,[x10, #0x10]
7101b2d214  ldr x11,[x8, #0x18]
7101b2d218  str x10,[x11, #0x10]
7101b2d21c  ldr x9,[x9, #0x18]
7101b2d220  ldr x9,[x9, #0x18]
7101b2d224  ldr x8,[x8, #0x18]
7101b2d228  str x9,[x8, #0x18]
7101b2d22c  ldr x8,[x20]
7101b2d230  ldr x9,[x27, #0x248]
7101b2d234  strh wzr,[sp, #0x488]
7101b2d238  str xzr,[sp, #0x4c0]
7101b2d23c  str xzr,[sp, #0x4f0]
7101b2d240  sub x8,x8,x9
7101b2d244  mov w21,#0x4ec5
7101b2d248  movk w21,#0xc4ec, LSL #16
7101b2d24c  lsr x8,x8,#0x5
7101b2d250  mov x10,#0x41800000
7101b2d254  movk x10,#0x4248, LSL #48
7101b2d258  add x26,x27,#0x228
7101b2d25c  str x10,[sp, #0x478]
7101b2d260  orr w10,wzr,#0x3f800000
7101b2d264  mov w9,#0x1
7101b2d268  adrp x2,0x710424f000
7101b2d26c  add x2,x2,#0xc05
7101b2d270  add x3,sp,#0x470
7101b2d274  mul w22,w8,w21
7101b2d278  add x8,sp,#0x398
7101b2d27c  mov x0,x26
7101b2d280  mov x1,x19
7101b2d284  mov x4,x24
7101b2d288  str x10,[sp, #0x480]
7101b2d28c  strb w9,[sp, #0x48a]
7101b2d290  str xzr,[sp, #0x520]
7101b2d294  str xzr,[sp, #0x550]
7101b2d298  str xzr,[sp, #0x580]
7101b2d29c  sturh wzr,[x8, #0xf7]
7101b2d2a0  strb wzr,[sp, #0x491]
7101b2d2a4  stur wzr,[x8, #0xf3]
7101b2d2a8  str w9,[sp, #0x470]
7101b2d2ac  str w22,[sp, #0x474]
7101b2d2b0  strb w9,[sp, #0x490]
7101b2d2b4  bl 0x7103781a20
7101b2d2b8  ldr x0,[x27, #0x228]
7101b2d2bc  ldr x8,[x0]
7101b2d2c0  ldr x8,[x8, #0x60]
7101b2d2c4  mov w1,wzr
7101b2d2c8  blr x8
7101b2d2cc  ldr x0,[x27, #0x228]
7101b2d2d0  ldr x8,[x0]
7101b2d2d4  ldr x8,[x8, #0x70]
7101b2d2d8  mov w1,wzr
7101b2d2dc  blr x8
7101b2d2e0  adrp x1,0x7104452000
7101b2d2e4  add x1,x1,#0xf80
7101b2d2e8  add x8,sp,#0x448
7101b2d2ec  mov x0,x19
7101b2d2f0  mov w2,wzr
7101b2d2f4  str wzr,[x27, #0x264]
7101b2d2f8  add x20,sp,#0x448
7101b2d2fc  bl 0x7103776910
7101b2d300  add x8,x27,#0x270
7101b2d304  cmp x8,x20
7101b2d308  b.eq 0x7101b2d324
7101b2d30c  ldr x8,[sp, #0x450]
7101b2d310  str xzr,[sp, #0x450]
7101b2d314  ldr x0,[x27, #0x278]
7101b2d318  str x8,[x27, #0x278]
7101b2d31c  cbz x0,0x7101b2d324
7101b2d320  bl 0x710392eb40
7101b2d324  ldr x0,[sp, #0x450]
7101b2d328  adrp x8,0x710523d000
7101b2d32c  add x8,x8,#0x9a8
7101b2d330  str x8,[sp, #0x448]
7101b2d334  str xzr,[sp, #0x450]
7101b2d338  cbz x0,0x7101b2d340
7101b2d33c  bl 0x710392eb40
7101b2d340  mov w8,#0x1
7101b2d344  str w8,[x27, #0x294]
7101b2d348  adrp x1,0x7104452000
7101b2d34c  add x1,x1,#0xf80
7101b2d350  add x8,sp,#0x448
7101b2d354  mov w2,#0x1
7101b2d358  mov x0,x19
7101b2d35c  add x20,sp,#0x448
7101b2d360  bl 0x7103776910
7101b2d364  add x8,x27,#0x2a0
7101b2d368  cmp x8,x20
7101b2d36c  b.eq 0x7101b2d388
7101b2d370  ldr x8,[sp, #0x450]
7101b2d374  str xzr,[sp, #0x450]
7101b2d378  ldr x0,[x27, #0x2a8]
7101b2d37c  str x8,[x27, #0x2a8]
7101b2d380  cbz x0,0x7101b2d388
7101b2d384  bl 0x710392eb40
7101b2d388  ldr x0,[sp, #0x450]
7101b2d38c  adrp x8,0x710523d000
7101b2d390  add x8,x8,#0x9a8
7101b2d394  str x8,[sp, #0x448]
7101b2d398  str xzr,[sp, #0x450]
7101b2d39c  cbz x0,0x7101b2d3a4
7101b2d3a0  bl 0x710392eb40
7101b2d3a4  mov w8,#0x2
7101b2d3a8  str w8,[x27, #0x2c4]
7101b2d3ac  adrp x1,0x7104452000
7101b2d3b0  add x1,x1,#0xf80
7101b2d3b4  add x8,sp,#0x448
7101b2d3b8  mov w2,#0x2
7101b2d3bc  mov x0,x19
7101b2d3c0  add x20,sp,#0x448
7101b2d3c4  bl 0x7103776910
7101b2d3c8  add x8,x27,#0x2d0
7101b2d3cc  cmp x8,x20
7101b2d3d0  b.eq 0x7101b2d3ec
7101b2d3d4  ldr x8,[sp, #0x450]
7101b2d3d8  str xzr,[sp, #0x450]
7101b2d3dc  ldr x0,[x27, #0x2d8]
7101b2d3e0  str x8,[x27, #0x2d8]
7101b2d3e4  cbz x0,0x7101b2d3ec
7101b2d3e8  bl 0x710392eb40
7101b2d3ec  ldr x0,[sp, #0x450]
7101b2d3f0  adrp x8,0x710523d000
7101b2d3f4  add x8,x8,#0x9a8
7101b2d3f8  str x8,[sp, #0x448]
7101b2d3fc  str xzr,[sp, #0x450]
7101b2d400  cbz x0,0x7101b2d408
7101b2d404  bl 0x710392eb40
7101b2d408  adrp x1,0x7104318000
7101b2d40c  add x1,x1,#0xa80
7101b2d410  add x8,sp,#0x448
7101b2d414  mov x0,x19
7101b2d418  bl 0x7103776640
7101b2d41c  adrp x1,0x7104464000
7101b2d420  add x1,x1,#0x1f6
7101b2d424  add x8,sp,#0x460
7101b2d428  add x0,sp,#0x448
7101b2d42c  bl 0x7103776910
7101b2d430  ldr x0,[sp, #0x468]
7101b2d434  ldr x8,[x0]
7101b2d438  cbz x8,0x7101b2d49c
7101b2d43c  movi v6.2D,#0x0
7101b2d440  ldr s3,[x8, #0x30]
7101b2d444  add x9,x8,#0x34
7101b2d448  ldp s1,s2,[x8, #0x50]
7101b2d44c  mov v0.16B,v6.16B
7101b2d450  ldp s4,s5,[x8, #0x48]
7101b2d454  fmul s2,s2,s5
7101b2d458  fmul s1,s1,s4
7101b2d45c  fmov s4,0x3f000000
7101b2d460  fabs s2,s2
7101b2d464  mov v0.S[0x0],v3.S[0x0]
7101b2d468  fabs s1,s1
7101b2d46c  fmul s4,s1,s4
7101b2d470  ld1 {v0.S}[1],[x9]
7101b2d474  add x9,x8,#0x38
7101b2d478  ldrb w8,[x8, #0x5b]
7101b2d47c  ld1 {v0.S}[2],[x9]
7101b2d480  and w9,w8,#0x3
7101b2d484  cmp w9,#0x2
7101b2d488  b.eq 0x7101b2d4b8
7101b2d48c  cmp w9,#0x1
7101b2d490  b.ne 0x7101b2d4c0
7101b2d494  fadd s3,s3,s4
7101b2d498  b 0x7101b2d4bc
7101b2d49c  adrp x8,0x71052a8000
7101b2d4a0  ldr x8,[x8, #0xa88]
7101b2d4a4  fmov s1,wzr
7101b2d4a8  mov v2.16B,v1.16B
7101b2d4ac  ldr q0,[x8]
7101b2d4b0  movi v6.2D,#0x0
7101b2d4b4  b 0x7101b2d4f4
7101b2d4b8  fsub s3,s3,s4
7101b2d4bc  mov v0.S[0x0],v3.S[0x0]
7101b2d4c0  fmov s3,0x3f000000
7101b2d4c4  fmul s3,s2,s3
7101b2d4c8  ubfx w8,w8,#0x2,#0x2
7101b2d4cc  cmp w8,#0x2
7101b2d4d0  b.eq 0x7101b2d4e8
7101b2d4d4  cmp w8,#0x1
7101b2d4d8  b.ne 0x7101b2d4f4
7101b2d4dc  dup s4,v0.S[0x1]
7101b2d4e0  fsub s3,s4,s3
7101b2d4e4  b 0x7101b2d4f0
7101b2d4e8  dup s4,v0.S[0x1]
7101b2d4ec  fadd s3,s3,s4
7101b2d4f0  mov v0.S[0x1],v3.S[0x0]
7101b2d4f4  mov v3.16B,v6.16B
7101b2d4f8  mov v3.S[0x0],v1.S[0x0]
7101b2d4fc  movi v1.4S,#0x3f, LSL #24
7101b2d500  mov v3.S[0x1],v2.S[0x0]
7101b2d504  dup s2,v0.S[0x1]
7101b2d508  adrp x8,0x710523d000
7101b2d50c  add x8,x8,#0x9a8
7101b2d510  fmul v1.4S,v3.4S,v1.4S
7101b2d514  dup s4,v1.S[0x1]
7101b2d518  fsub s3,s0,s1
7101b2d51c  fadd s0,s0,s1
7101b2d520  str s0,[x27, #0x2f4]
7101b2d524  fsub s0,s2,s4
7101b2d528  str s0,[x27, #0x2f8]
7101b2d52c  fadd s0,s2,s4
7101b2d530  str s3,[x27, #0x2f0]
7101b2d534  str s0,[x27, #0x2fc]
7101b2d538  str x8,[sp, #0x460]
7101b2d53c  str xzr,[sp, #0x468]
7101b2d540  cbz x0,0x7101b2d548
7101b2d544  bl 0x710392eb40
7101b2d548  adrp x1,0x71042b4000
7101b2d54c  add x1,x1,#0xcc
7101b2d550  add x8,sp,#0x460
7101b2d554  mov x0,x19
7101b2d558  bl 0x7103776640
7101b2d55c  adrp x1,0x7104464000
7101b2d560  add x1,x1,#0x1f6
7101b2d564  add x8,sp,#0x438
7101b2d568  add x0,sp,#0x460
7101b2d56c  bl 0x7103776910
7101b2d570  ldr x0,[sp, #0x440]
7101b2d574  ldr x8,[x0]
7101b2d578  cbz x8,0x7101b2d5dc
7101b2d57c  movi v6.2D,#0x0
7101b2d580  ldr s3,[x8, #0x30]
7101b2d584  add x9,x8,#0x34
7101b2d588  ldp s1,s2,[x8, #0x50]
7101b2d58c  mov v0.16B,v6.16B
7101b2d590  ldp s4,s5,[x8, #0x48]
7101b2d594  fmul s2,s2,s5
7101b2d598  fmul s1,s1,s4
7101b2d59c  fmov s4,0x3f000000
7101b2d5a0  fabs s2,s2
7101b2d5a4  mov v0.S[0x0],v3.S[0x0]
7101b2d5a8  fabs s1,s1
7101b2d5ac  fmul s4,s1,s4
7101b2d5b0  ld1 {v0.S}[1],[x9]
7101b2d5b4  add x9,x8,#0x38
7101b2d5b8  ldrb w8,[x8, #0x5b]
7101b2d5bc  ld1 {v0.S}[2],[x9]
7101b2d5c0  and w9,w8,#0x3
7101b2d5c4  cmp w9,#0x2
7101b2d5c8  b.eq 0x7101b2d5f8
7101b2d5cc  cmp w9,#0x1
7101b2d5d0  b.ne 0x7101b2d600
7101b2d5d4  fadd s3,s3,s4
7101b2d5d8  b 0x7101b2d5fc
7101b2d5dc  adrp x8,0x71052a8000
7101b2d5e0  ldr x8,[x8, #0xa88]
7101b2d5e4  fmov s1,wzr
7101b2d5e8  mov v2.16B,v1.16B
7101b2d5ec  ldr q0,[x8]
7101b2d5f0  movi v6.2D,#0x0
7101b2d5f4  b 0x7101b2d634
7101b2d5f8  fsub s3,s3,s4
7101b2d5fc  mov v0.S[0x0],v3.S[0x0]
7101b2d600  fmov s3,0x3f000000
7101b2d604  fmul s3,s2,s3
7101b2d608  ubfx w8,w8,#0x2,#0x2
7101b2d60c  cmp w8,#0x2
7101b2d610  b.eq 0x7101b2d628
7101b2d614  cmp w8,#0x1
7101b2d618  b.ne 0x7101b2d634
7101b2d61c  dup s4,v0.S[0x1]
7101b2d620  fsub s3,s4,s3
7101b2d624  b 0x7101b2d630
7101b2d628  dup s4,v0.S[0x1]
7101b2d62c  fadd s3,s3,s4
7101b2d630  mov v0.S[0x1],v3.S[0x0]
7101b2d634  mov v6.S[0x0],v1.S[0x0]
7101b2d638  movi v1.4S,#0x3f, LSL #24
7101b2d63c  dup s4,v0.S[0x1]
7101b2d640  adrp x8,0x710523d000
7101b2d644  add x8,x8,#0x9a8
7101b2d648  mov v6.S[0x1],v2.S[0x0]
7101b2d64c  fmul v2.4S,v6.4S,v1.4S
7101b2d650  fsub s1,s0,s2
7101b2d654  dup s5,v2.S[0x1]
7101b2d658  fadd s0,s0,s2
7101b2d65c  str s1,[x27, #0x300]
7101b2d660  str s0,[x27, #0x304]
7101b2d664  fsub s3,s4,s5
7101b2d668  fadd s2,s4,s5
7101b2d66c  str s3,[x27, #0x308]
7101b2d670  str s2,[x27, #0x30c]
7101b2d674  str x8,[sp, #0x438]
7101b2d678  str xzr,[sp, #0x440]
7101b2d67c  cbz x0,0x7101b2d694
7101b2d680  bl 0x710392eb40
7101b2d684  ldr s3,[x27, #0x308]
7101b2d688  ldr s2,[x27, #0x30c]
7101b2d68c  ldr s1,[x27, #0x300]
7101b2d690  ldr s0,[x27, #0x304]
7101b2d694  ldr w8,[sp, #0x78]
7101b2d698  fmov s4,0x41400000
7101b2d69c  fmov s5,0x41d00000
7101b2d6a0  fmov s6,0xc1400000
7101b2d6a4  fmov s7,0xc1d00000
7101b2d6a8  fadd s1,s1,s4
7101b2d6ac  cmp w8,#0x1
7101b2d6b0  fcsel s5,s5,s4,gt
7101b2d6b4  fcsel s7,s7,s6,gt
7101b2d6b8  subs w8,w22,#0x9
7101b2d6bc  csel w8,w8,w22,gt
7101b2d6c0  str w8,[x27, #0x368]
7101b2d6c4  adrp x8,0x710523d000
7101b2d6c8  add x8,x8,#0x988
7101b2d6cc  fadd s3,s3,s5
7101b2d6d0  fadd s2,s2,s7
7101b2d6d4  fadd s0,s0,s6
7101b2d6d8  str s0,[x27, #0x304]
7101b2d6dc  str s3,[x27, #0x308]
7101b2d6e0  str s2,[x27, #0x30c]
7101b2d6e4  str s1,[x27, #0x300]
7101b2d6e8  ldr x19,[sp, #0x468]
7101b2d6ec  str x8,[sp, #0x460]
7101b2d6f0  str xzr,[sp, #0x468]
7101b2d6f4  cbz x19,0x7101b2d718
7101b2d6f8  ldr x0,[x19, #0x18]
7101b2d6fc  adrp x8,0x710523d000
7101b2d700  add x8,x8,#0x9a8
7101b2d704  stp x8,xzr,[x19, #0x10]
7101b2d708  cbz x0,0x7101b2d710
7101b2d70c  bl 0x710392eb40
7101b2d710  mov x0,x19
7101b2d714  bl 0x710392eb40
7101b2d718  ldr x19,[sp, #0x450]
7101b2d71c  adrp x8,0x710523d000
7101b2d720  add x8,x8,#0x988
7101b2d724  str x8,[sp, #0x448]
7101b2d728  str xzr,[sp, #0x450]
7101b2d72c  cbz x19,0x7101b2d750
7101b2d730  ldr x0,[x19, #0x18]
7101b2d734  adrp x8,0x710523d000
7101b2d738  add x8,x8,#0x9a8
7101b2d73c  stp x8,xzr,[x19, #0x10]
7101b2d740  cbz x0,0x7101b2d748
7101b2d744  bl 0x710392eb40
7101b2d748  mov x0,x19
7101b2d74c  bl 0x710392eb40
7101b2d750  ldr x0,[sp, #0x580]
7101b2d754  add x8,sp,#0x470
7101b2d758  add x8,x8,#0xf0
7101b2d75c  cmp x8,x0
7101b2d760  b.eq 0x7101b2d774
7101b2d764  cbz x0,0x7101b2d780
7101b2d768  ldr x8,[x0]
7101b2d76c  ldr x8,[x8, #0x28]
7101b2d770  b 0x7101b2d77c
7101b2d774  ldr x8,[x0]
7101b2d778  ldr x8,[x8, #0x20]
7101b2d77c  blr x8
7101b2d780  ldr x0,[sp, #0x550]
7101b2d784  add x8,sp,#0x470
7101b2d788  add x8,x8,#0xc0
7101b2d78c  cmp x8,x0
7101b2d790  b.eq 0x7101b2d7a4
7101b2d794  cbz x0,0x7101b2d7b0
7101b2d798  ldr x8,[x0]
7101b2d79c  ldr x8,[x8, #0x28]
7101b2d7a0  b 0x7101b2d7ac
7101b2d7a4  ldr x8,[x0]
7101b2d7a8  ldr x8,[x8, #0x20]
7101b2d7ac  blr x8
7101b2d7b0  ldr x0,[sp, #0x520]
7101b2d7b4  add x8,sp,#0x470
7101b2d7b8  add x8,x8,#0x90
7101b2d7bc  cmp x8,x0
7101b2d7c0  b.eq 0x7101b2d7d4
7101b2d7c4  cbz x0,0x7101b2d7e0
7101b2d7c8  ldr x8,[x0]
7101b2d7cc  ldr x8,[x8, #0x28]
7101b2d7d0  b 0x7101b2d7dc
7101b2d7d4  ldr x8,[x0]
7101b2d7d8  ldr x8,[x8, #0x20]
7101b2d7dc  blr x8
7101b2d7e0  ldr x0,[sp, #0x4f0]
7101b2d7e4  add x8,sp,#0x470
7101b2d7e8  add x8,x8,#0x60
7101b2d7ec  cmp x8,x0
7101b2d7f0  b.eq 0x7101b2d804
7101b2d7f4  cbz x0,0x7101b2d810
7101b2d7f8  ldr x8,[x0]
7101b2d7fc  ldr x8,[x8, #0x28]
7101b2d800  b 0x7101b2d80c
7101b2d804  ldr x8,[x0]
7101b2d808  ldr x8,[x8, #0x20]
7101b2d80c  blr x8
7101b2d810  ldr x0,[sp, #0x4c0]
7101b2d814  add x8,sp,#0x470
7101b2d818  add x8,x8,#0x30
7101b2d81c  cmp x8,x0
7101b2d820  b.eq 0x7101b2d834
7101b2d824  cbz x0,0x7101b2d840
7101b2d828  ldr x8,[x0]
7101b2d82c  ldr x8,[x8, #0x28]
7101b2d830  b 0x7101b2d83c
7101b2d834  ldr x8,[x0]
7101b2d838  ldr x8,[x8, #0x20]
7101b2d83c  blr x8
7101b2d840  ldr x0,[sp, #0x610]
7101b2d844  cbz x0,0x7101b2d850
7101b2d848  str x0,[sp, #0x618]
7101b2d84c  bl 0x710392eb40
7101b2d850  ldr w8,[x23, #0x30]
7101b2d854  sub w8,w8,#0x3
7101b2d858  cmp w8,#0x2
7101b2d85c  b.cc 0x7101b2d870
7101b2d860  ldrb w8,[x23, #0x1d8]
7101b2d864  ldrb w9,[x23, #0x1d9]
7101b2d868  orr w8,w9,w8
7101b2d86c  cbz w8,0x7101b317c0
7101b2d870  mov w8,wzr
7101b2d874  strb w8,[x27, #0x370]
7101b2d878  ldrb w8,[x23, #0x1d9]
7101b2d87c  cbz w8,0x7101b2d960
7101b2d880  ldp x8,x9,[x27, #0x10]
7101b2d884  sub x9,x9,x8
7101b2d888  asr x9,x9,#0x3
7101b2d88c  cmp x9,#0x1
7101b2d890  b.ls 0x7101b31880
7101b2d894  ldr x8,[x8, #0x8]
7101b2d898  ldr x8,[x8]
7101b2d89c  ldr x8,[x8]
7101b2d8a0  add x19,x8,#0x8
7101b2d8a4  adrp x8,0x710532f000
7101b2d8a8  ldr x8,[x8, #0x8c0]
7101b2d8ac  ldr x0,[x8, #0x8]
7101b2d8b0  adrp x8,0x7104472000
7101b2d8b4  ldr s0,[x8, #0xfbc]
7101b2d8b8  mov x1,#0x28bc
7101b2d8bc  movk x1,#0xb70, LSL #16
7101b2d8c0  movk x1,#0xf, LSL #32
7101b2d8c4  bl 0x71033112b0
7101b2d8c8  fcvtzs w8,s0
7101b2d8cc  add w8,w8,w8, LSL #0x1
7101b2d8d0  str w8,[sp, #0x610]
7101b2d8d4  adrp x1,0x710426f000
7101b2d8d8  add x1,x1,#0xc1e
7101b2d8dc  add x8,sp,#0x470
7101b2d8e0  mov x0,x19
7101b2d8e4  add x20,sp,#0x470
7101b2d8e8  bl 0x7103776640
7101b2d8ec  ldr x0,[x27, #0x380]
7101b2d8f0  add x1,sp,#0x470
7101b2d8f4  add x2,sp,#0x610
7101b2d8f8  bl 0x71032d6ce0
7101b2d8fc  ldr x19,[sp, #0x478]
7101b2d900  adrp x8,0x710523d000
7101b2d904  add x8,x8,#0x988
7101b2d908  str x8,[sp, #0x470]
7101b2d90c  str xzr,[sp, #0x478]
7101b2d910  cbz x19,0x7101b2d934
7101b2d914  ldr x0,[x19, #0x18]
7101b2d918  adrp x8,0x710523d000
7101b2d91c  add x8,x8,#0x9a8
7101b2d920  stp x8,xzr,[x19, #0x10]
7101b2d924  cbz x0,0x7101b2d92c
7101b2d928  bl 0x710392eb40
7101b2d92c  mov x0,x19
7101b2d930  bl 0x710392eb40
7101b2d934  ldr x8,[x27, #0x380]
7101b2d938  strb wzr,[x8, #0x2c]
7101b2d93c  mov w8,#0x9dc5
7101b2d940  movk w8,#0x811c, LSL #16
7101b2d944  strb wzr,[sp, #0x478]
7101b2d948  str wzr,[sp, #0x474]
7101b2d94c  str w8,[sp, #0x470]
7101b2d950  ldr x8,[x27, #0x380]
7101b2d954  add x1,x20,#0x8
7101b2d958  add x0,x8,#0x10
7101b2d95c  bl 0x710377a120
7101b2d960  mov x22,x27
7101b2d964  ldr x1,[x22, #0x40]!
7101b2d968  ldr x0,[x22, #0x140]
7101b2d96c  ldr x8,[x0]
7101b2d970  ldr x8,[x8, #0x8]
7101b2d974  blr x8
7101b2d978  ldr x23,[x22]
7101b2d97c  ldr x8,[x22, #0x210]
7101b2d980  ldr x9,[x22, #0x208]
7101b2d984  sub x8,x8,x9
7101b2d988  ldr x9,[x23]
7101b2d98c  lsr x8,x8,#0x5
7101b2d990  cbz x9,0x7101b2d99c
7101b2d994  ldr x0,[x9]
7101b2d998  b 0x7101b2d9a0
7101b2d99c  mov x0,xzr
7101b2d9a0  adrp x1,0x710436b000
7101b2d9a4  add x1,x1,#0xef2
7101b2d9a8  mov x2,x26
7101b2d9ac  mul w19,w8,w21
7101b2d9b0  bl 0x71033744b0
7101b2d9b4  ldr x0,[x23]
7101b2d9b8  cbz x0,0x7101b2d9f8
7101b2d9bc  adrp x1,0x710435b000
7101b2d9c0  add x1,x1,#0x229
7101b2d9c4  adrp x2,0x71042b2000
7101b2d9c8  add x2,x2,#0xa84
7101b2d9cc  mov w3,w19
7101b2d9d0  bl 0x7103375650
7101b2d9d4  ldr x0,[x23]
7101b2d9d8  cbz x0,0x7101b2d9f8
7101b2d9dc  cmp w19,#0xa
7101b2d9e0  cset w3,lt
7101b2d9e4  adrp x1,0x71043df000
7101b2d9e8  add x1,x1,#0xd15
7101b2d9ec  adrp x2,0x71043cd000
7101b2d9f0  add x2,x2,#0xb7b
7101b2d9f4  bl 0x7103375650
7101b2d9f8  cmp w19,#0x1
7101b2d9fc  b.lt 0x7101b2da20
7101b2da00  b.ne 0x7101b2da30
7101b2da04  ldr x8,[x25]
7101b2da08  ldr w8,[x8]
7101b2da0c  cmp w8,#0x0
7101b2da10  cset w3,eq
7101b2da14  ldr x0,[x23]
7101b2da18  cbnz x0,0x7101b2da3c
7101b2da1c  b 0x7101b2da80
7101b2da20  mov w3,#0x1
7101b2da24  ldr x0,[x23]
7101b2da28  cbnz x0,0x7101b2da3c
7101b2da2c  b 0x7101b2da80
7101b2da30  mov w3,wzr
7101b2da34  ldr x0,[x23]
7101b2da38  cbz x0,0x7101b2da80
7101b2da3c  adrp x1,0x7104401000
7101b2da40  add x1,x1,#0x21
7101b2da44  adrp x2,0x71043cd000
7101b2da48  add x2,x2,#0xb7b
7101b2da4c  bl 0x7103375650
7101b2da50  ldr x0,[x23]
7101b2da54  cbz x0,0x7101b2da80
7101b2da58  ldr x8,[x26]
7101b2da5c  ldr s0,[x8, #0x274]
7101b2da60  fmov s1,0x40400000
7101b2da64  fmul s0,s0,s1
7101b2da68  fcvt d0,s0
7101b2da6c  adrp x1,0x71043df000
7101b2da70  add x1,x1,#0xd32
7101b2da74  adrp x2,0x71042a1000
7101b2da78  add x2,x2,#0xc55
7101b2da7c  bl 0x7103375650
7101b2da80  mov w0,#0x10
7101b2da84  orr w1,wzr,#0x38
7101b2da88  bl 0x710392e290
7101b2da8c  cbnz x0,0x7101b2dad0
7101b2da90  ldr x0,[x28, #0xf00]
7101b2da94  cbz x0,0x7101b2dacc
7101b2da98  orr w8,wzr,#0x38
7101b2da9c  str wzr,[sp, #0x610]
7101b2daa0  add x1,sp,#0x610
7101b2daa4  str x8,[sp, #0x470]
7101b2daa8  ldr x8,[x0]
7101b2daac  ldr x8,[x8, #0x30]
7101b2dab0  add x2,sp,#0x470
7101b2dab4  blr x8
7101b2dab8  tbz w0,#0x0,0x7101b2dacc
7101b2dabc  mov w0,#0x10
7101b2dac0  orr w1,wzr,#0x38
7101b2dac4  bl 0x710392e290
7101b2dac8  cbnz x0,0x7101b2dad0
7101b2dacc  mov x0,xzr
7101b2dad0  adrp x8,0x7101b26000
7101b2dad4  add x8,x8,#0x3c0
7101b2dad8  adrp x19,0x71050aa000
7101b2dadc  add x19,x19,#0x5e8
7101b2dae0  stp xzr,x8,[x0, #0x20]
7101b2dae4  mov w8,#0x1
7101b2dae8  stp x24,xzr,[x0, #0x10]
7101b2daec  str x19,[x0]
7101b2daf0  adrp x1,0x710439d000
7101b2daf4  add x1,x1,#0xd
7101b2daf8  str xzr,[x0, #0x30]
7101b2dafc  add x2,sp,#0x610
7101b2db00  str w8,[x0, #0x8]
7101b2db04  str x0,[sp, #0x610]
7101b2db08  mov x0,x23
7101b2db0c  bl 0x7103376af0
7101b2db10  ldr x0,[sp, #0x610]
7101b2db14  str xzr,[sp, #0x610]
7101b2db18  cbz x0,0x7101b2db28
7101b2db1c  ldr x8,[x0]
7101b2db20  ldr x8,[x8, #0x8]
7101b2db24  blr x8
7101b2db28  mov w0,#0x10
7101b2db2c  orr w1,wzr,#0x38
7101b2db30  bl 0x710392e290
7101b2db34  cbnz x0,0x7101b2db78
7101b2db38  ldr x0,[x28, #0xf00]
7101b2db3c  cbz x0,0x7101b2db74
7101b2db40  orr w8,wzr,#0x38
7101b2db44  str wzr,[sp, #0x448]
7101b2db48  add x1,sp,#0x448
7101b2db4c  str x8,[sp, #0x470]
7101b2db50  ldr x8,[x0]
7101b2db54  ldr x8,[x8, #0x30]
7101b2db58  add x2,sp,#0x470
7101b2db5c  blr x8
7101b2db60  tbz w0,#0x0,0x7101b2db74
7101b2db64  mov w0,#0x10
7101b2db68  orr w1,wzr,#0x38
7101b2db6c  bl 0x710392e290
7101b2db70  cbnz x0,0x7101b2db78
7101b2db74  mov x0,xzr
7101b2db78  adrp x8,0x7101b26000
7101b2db7c  add x8,x8,#0x3e0
7101b2db80  str x19,[x0]
7101b2db84  stp xzr,x8,[x0, #0x20]
7101b2db88  mov w8,#0x1
7101b2db8c  stp x24,xzr,[x0, #0x10]
7101b2db90  adrp x1,0x710424f000
7101b2db94  add x1,x1,#0xbc
7101b2db98  add x2,sp,#0x448
7101b2db9c  str xzr,[x0, #0x30]
7101b2dba0  str w8,[x0, #0x8]
7101b2dba4  str x0,[sp, #0x448]
7101b2dba8  mov x0,x23
7101b2dbac  bl 0x7103376af0
7101b2dbb0  ldr x0,[sp, #0x448]
7101b2dbb4  str xzr,[sp, #0x448]
7101b2dbb8  cbz x0,0x7101b2dbc8
7101b2dbbc  ldr x8,[x0]
7101b2dbc0  ldr x8,[x8, #0x8]
7101b2dbc4  blr x8
7101b2dbc8  mov w0,#0x10
7101b2dbcc  orr w1,wzr,#0x38
7101b2dbd0  bl 0x710392e290
7101b2dbd4  cbnz x0,0x7101b2dc18
7101b2dbd8  ldr x0,[x28, #0xf00]
7101b2dbdc  cbz x0,0x7101b2dc14
7101b2dbe0  orr w8,wzr,#0x38
7101b2dbe4  str wzr,[sp, #0x460]
7101b2dbe8  add x1,sp,#0x460
7101b2dbec  str x8,[sp, #0x470]
7101b2dbf0  ldr x8,[x0]
7101b2dbf4  ldr x8,[x8, #0x30]
7101b2dbf8  add x2,sp,#0x470
7101b2dbfc  blr x8
7101b2dc00  tbz w0,#0x0,0x7101b2dc14
7101b2dc04  mov w0,#0x10
7101b2dc08  orr w1,wzr,#0x38
7101b2dc0c  bl 0x710392e290
7101b2dc10  cbnz x0,0x7101b2dc18
7101b2dc14  mov x0,xzr
7101b2dc18  adrp x8,0x7101b26000
7101b2dc1c  add x8,x8,#0x410
7101b2dc20  adrp x20,0x71050aa000
7101b2dc24  add x20,x20,#0x610
7101b2dc28  stp xzr,x8,[x0, #0x20]
7101b2dc2c  mov w8,#0x1
7101b2dc30  stp x24,xzr,[x0, #0x10]
7101b2dc34  str x20,[x0]
7101b2dc38  adrp x1,0x71042d5000
7101b2dc3c  add x1,x1,#0xe3b
7101b2dc40  str xzr,[x0, #0x30]
7101b2dc44  add x2,sp,#0x460
7101b2dc48  str w8,[x0, #0x8]
7101b2dc4c  str x0,[sp, #0x460]
7101b2dc50  mov x0,x23
7101b2dc54  bl 0x7103376af0
7101b2dc58  ldr x0,[sp, #0x460]
7101b2dc5c  str xzr,[sp, #0x460]
7101b2dc60  cbz x0,0x7101b2dc70
7101b2dc64  ldr x8,[x0]
7101b2dc68  ldr x8,[x8, #0x8]
7101b2dc6c  blr x8
7101b2dc70  mov w0,#0x10
7101b2dc74  orr w1,wzr,#0x38
7101b2dc78  bl 0x710392e290
7101b2dc7c  cbnz x0,0x7101b2dcc0
7101b2dc80  ldr x0,[x28, #0xf00]
7101b2dc84  cbz x0,0x7101b2dcbc
7101b2dc88  orr w8,wzr,#0x38
7101b2dc8c  str wzr,[sp, #0x438]
7101b2dc90  add x1,sp,#0x438
7101b2dc94  str x8,[sp, #0x470]
7101b2dc98  ldr x8,[x0]
7101b2dc9c  ldr x8,[x8, #0x30]
7101b2dca0  add x2,sp,#0x470
7101b2dca4  blr x8
7101b2dca8  tbz w0,#0x0,0x7101b2dcbc
7101b2dcac  mov w0,#0x10
7101b2dcb0  orr w1,wzr,#0x38
7101b2dcb4  bl 0x710392e290
7101b2dcb8  cbnz x0,0x7101b2dcc0
7101b2dcbc  mov x0,xzr
7101b2dcc0  adrp x8,0x71050aa000
7101b2dcc4  add x8,x8,#0x638
7101b2dcc8  adrp x9,0x7101b26000
7101b2dccc  add x9,x9,#0x7f0
7101b2dcd0  str x8,[x0]
7101b2dcd4  mov w8,#0x1
7101b2dcd8  stp x24,xzr,[x0, #0x10]
7101b2dcdc  str xzr,[x0, #0x30]
7101b2dce0  stp xzr,x9,[x0, #0x20]
7101b2dce4  adrp x1,0x71042d5000
7101b2dce8  add x1,x1,#0xe54
7101b2dcec  add x2,sp,#0x438
7101b2dcf0  str w8,[x0, #0x8]
7101b2dcf4  str x0,[sp, #0x438]
7101b2dcf8  mov x0,x23
7101b2dcfc  bl 0x7103376af0
7101b2dd00  ldr x0,[sp, #0x438]
7101b2dd04  str xzr,[sp, #0x438]
7101b2dd08  cbz x0,0x7101b2dd18
7101b2dd0c  ldr x8,[x0]
7101b2dd10  ldr x8,[x8, #0x8]
7101b2dd14  blr x8
7101b2dd18  mov w1,#0x28
7101b2dd1c  mov w0,#0x10
7101b2dd20  bl 0x710392e290
7101b2dd24  cbnz x0,0x7101b2dd68
7101b2dd28  ldr x0,[x28, #0xf00]
7101b2dd2c  cbz x0,0x7101b2dd64
7101b2dd30  mov w8,#0x28
7101b2dd34  stur wzr,[x29, #-0xb0]
7101b2dd38  sub x1,x29,#0xb0
7101b2dd3c  str x8,[sp, #0x470]
7101b2dd40  ldr x8,[x0]
7101b2dd44  ldr x8,[x8, #0x30]
7101b2dd48  add x2,sp,#0x470
7101b2dd4c  blr x8
7101b2dd50  tbz w0,#0x0,0x7101b2dd64
7101b2dd54  mov w1,#0x28
7101b2dd58  mov w0,#0x10
7101b2dd5c  bl 0x710392e290
7101b2dd60  cbnz x0,0x7101b2dd68
7101b2dd64  mov x0,xzr
7101b2dd68  adrp x21,0x71050aa000
7101b2dd6c  add x21,x21,#0x660
7101b2dd70  adrp x8,0x7101b26000
7101b2dd74  add x8,x8,#0x830
7101b2dd78  str x21,[x0]
7101b2dd7c  str xzr,[x0, #0x20]
7101b2dd80  stp x24,x8,[x0, #0x10]
7101b2dd84  adrp x1,0x71042a2000
7101b2dd88  add x1,x1,#0xb23
7101b2dd8c  str wzr,[x0, #0x8]
7101b2dd90  sub x2,x29,#0xb0
7101b2dd94  stur x0,[x29, #-0xb0]
7101b2dd98  mov x0,x23
7101b2dd9c  bl 0x7103376af0
7101b2dda0  ldur x0,[x29, #-0xb0]
7101b2dda4  stur xzr,[x29, #-0xb0]
7101b2dda8  cbz x0,0x7101b2ddb8
7101b2ddac  ldr x8,[x0]
7101b2ddb0  ldr x8,[x8, #0x8]
7101b2ddb4  blr x8
7101b2ddb8  mov w0,#0x10
7101b2ddbc  orr w1,wzr,#0x38
7101b2ddc0  bl 0x710392e290
7101b2ddc4  cbnz x0,0x7101b2de08
7101b2ddc8  ldr x0,[x28, #0xf00]
7101b2ddcc  cbz x0,0x7101b2de04
7101b2ddd0  orr w8,wzr,#0x38
7101b2ddd4  stur wzr,[x29, #-0xb8]
7101b2ddd8  sub x1,x29,#0xb8
7101b2dddc  str x8,[sp, #0x470]
7101b2dde0  ldr x8,[x0]
7101b2dde4  ldr x8,[x8, #0x30]
7101b2dde8  add x2,sp,#0x470
7101b2ddec  blr x8
7101b2ddf0  tbz w0,#0x0,0x7101b2de04
7101b2ddf4  mov w0,#0x10
7101b2ddf8  orr w1,wzr,#0x38
7101b2ddfc  bl 0x710392e290
7101b2de00  cbnz x0,0x7101b2de08
7101b2de04  mov x0,xzr
7101b2de08  adrp x8,0x7101b26000
7101b2de0c  add x8,x8,#0xc60
7101b2de10  str x20,[x0]
7101b2de14  stp xzr,x8,[x0, #0x20]
7101b2de18  mov w8,#0x1
7101b2de1c  stp x24,xzr,[x0, #0x10]
7101b2de20  adrp x1,0x7104329000
7101b2de24  add x1,x1,#0xba7
7101b2de28  sub x2,x29,#0xb8
7101b2de2c  str xzr,[x0, #0x30]
7101b2de30  str w8,[x0, #0x8]
7101b2de34  stur x0,[x29, #-0xb8]
7101b2de38  mov x0,x23
7101b2de3c  bl 0x7103376af0
7101b2de40  ldur x0,[x29, #-0xb8]
7101b2de44  stur xzr,[x29, #-0xb8]
7101b2de48  cbz x0,0x7101b2de58
7101b2de4c  ldr x8,[x0]
7101b2de50  ldr x8,[x8, #0x8]
7101b2de54  blr x8
7101b2de58  mov w1,#0x28
7101b2de5c  mov w0,#0x10
7101b2de60  bl 0x710392e290
7101b2de64  cbnz x0,0x7101b2dea8
7101b2de68  ldr x0,[x28, #0xf00]
7101b2de6c  cbz x0,0x7101b2dea4
7101b2de70  mov w8,#0x28
7101b2de74  stur wzr,[x29, #-0xc0]
7101b2de78  sub x1,x29,#0xc0
7101b2de7c  str x8,[sp, #0x470]
7101b2de80  ldr x8,[x0]
7101b2de84  ldr x8,[x8, #0x30]
7101b2de88  add x2,sp,#0x470
7101b2de8c  blr x8
7101b2de90  tbz w0,#0x0,0x7101b2dea4
7101b2de94  mov w1,#0x28
7101b2de98  mov w0,#0x10
7101b2de9c  bl 0x710392e290
7101b2dea0  cbnz x0,0x7101b2dea8
7101b2dea4  mov x0,xzr
7101b2dea8  adrp x8,0x71050aa000
7101b2deac  add x8,x8,#0x688
7101b2deb0  adrp x9,0x7101b27000
7101b2deb4  add x9,x9,#0x590
7101b2deb8  str x8,[x0]
7101b2debc  str xzr,[x0, #0x20]
7101b2dec0  stp x24,x9,[x0, #0x10]
7101b2dec4  adrp x1,0x7104280000
7101b2dec8  add x1,x1,#0x64a
7101b2decc  str wzr,[x0, #0x8]
7101b2ded0  sub x2,x29,#0xc0
7101b2ded4  stur x0,[x29, #-0xc0]
7101b2ded8  mov x0,x23
7101b2dedc  bl 0x7103376af0
7101b2dee0  ldur x0,[x29, #-0xc0]
7101b2dee4  stur xzr,[x29, #-0xc0]
7101b2dee8  cbz x0,0x7101b2def8
7101b2deec  ldr x8,[x0]
7101b2def0  ldr x8,[x8, #0x8]
7101b2def4  blr x8
7101b2def8  mov w1,#0x28
7101b2defc  mov w0,#0x10
7101b2df00  bl 0x710392e290
7101b2df04  cbnz x0,0x7101b2df48
7101b2df08  ldr x0,[x28, #0xf00]
7101b2df0c  cbz x0,0x7101b2df44
7101b2df10  mov w8,#0x28
7101b2df14  stur wzr,[x29, #-0xc8]
7101b2df18  sub x1,x29,#0xc8
7101b2df1c  str x8,[sp, #0x470]
7101b2df20  ldr x8,[x0]
7101b2df24  ldr x8,[x8, #0x30]
7101b2df28  add x2,sp,#0x470
7101b2df2c  blr x8
7101b2df30  tbz w0,#0x0,0x7101b2df44
7101b2df34  mov w1,#0x28
7101b2df38  mov w0,#0x10
7101b2df3c  bl 0x710392e290
7101b2df40  cbnz x0,0x7101b2df48
7101b2df44  mov x0,xzr
7101b2df48  adrp x8,0x7101b27000
7101b2df4c  add x8,x8,#0xd20
7101b2df50  str x21,[x0]
7101b2df54  stp x24,x8,[x0, #0x10]
7101b2df58  adrp x1,0x71042a2000
7101b2df5c  add x1,x1,#0xb4a
7101b2df60  str xzr,[x0, #0x20]
7101b2df64  sub x2,x29,#0xc8
7101b2df68  str wzr,[x0, #0x8]
7101b2df6c  stur x0,[x29, #-0xc8]
7101b2df70  mov x0,x23
7101b2df74  bl 0x7103376af0
7101b2df78  ldur x0,[x29, #-0xc8]
7101b2df7c  stur xzr,[x29, #-0xc8]
7101b2df80  cbz x0,0x7101b2df90
7101b2df84  ldr x8,[x0]
7101b2df88  ldr x8,[x8, #0x8]
7101b2df8c  blr x8
7101b2df90  mov w0,#0x10
7101b2df94  orr w1,wzr,#0x38
7101b2df98  bl 0x710392e290
7101b2df9c  cbnz x0,0x7101b2dfe0
7101b2dfa0  ldr x0,[x28, #0xf00]
7101b2dfa4  cbz x0,0x7101b2dfdc
7101b2dfa8  orr w8,wzr,#0x38
7101b2dfac  stur wzr,[x29, #-0xd0]
7101b2dfb0  sub x1,x29,#0xd0
7101b2dfb4  str x8,[sp, #0x470]
7101b2dfb8  ldr x8,[x0]
7101b2dfbc  ldr x8,[x8, #0x30]
7101b2dfc0  add x2,sp,#0x470
7101b2dfc4  blr x8
7101b2dfc8  tbz w0,#0x0,0x7101b2dfdc
7101b2dfcc  mov w0,#0x10
7101b2dfd0  orr w1,wzr,#0x38
7101b2dfd4  bl 0x710392e290
7101b2dfd8  cbnz x0,0x7101b2dfe0
7101b2dfdc  mov x0,xzr
7101b2dfe0  adrp x8,0x71050aa000
7101b2dfe4  add x8,x8,#0x6b0
7101b2dfe8  str x24,[x0, #0x10]
7101b2dfec  str x8,[x0]
7101b2dff0  adrp x8,0x7101b28000
7101b2dff4  add x8,x8,#0x140
7101b2dff8  stp x8,xzr,[x0, #0x18]
7101b2dffc  mov w8,#0x1
7101b2e000  stp xzr,xzr,[x0, #0x28]
7101b2e004  adrp x1,0x7104318000
7101b2e008  add x1,x1,#0xa8d
7101b2e00c  sub x2,x29,#0xd0
7101b2e010  str w8,[x0, #0x8]
7101b2e014  stur x0,[x29, #-0xd0]
7101b2e018  mov x0,x23
7101b2e01c  bl 0x7103376af0
7101b2e020  ldur x0,[x29, #-0xd0]
7101b2e024  stur xzr,[x29, #-0xd0]
7101b2e028  cbz x0,0x7101b2e038
7101b2e02c  ldr x8,[x0]
7101b2e030  ldr x8,[x8, #0x8]
7101b2e034  blr x8
7101b2e038  mov w0,#0x10
7101b2e03c  orr w1,wzr,#0x38
7101b2e040  bl 0x710392e290
7101b2e044  cbnz x0,0x7101b2e088
7101b2e048  ldr x0,[x28, #0xf00]
7101b2e04c  cbz x0,0x7101b2e084
7101b2e050  orr w8,wzr,#0x38
7101b2e054  stur wzr,[x29, #-0xd8]
7101b2e058  sub x1,x29,#0xd8
7101b2e05c  str x8,[sp, #0x470]
7101b2e060  ldr x8,[x0]
7101b2e064  ldr x8,[x8, #0x30]
7101b2e068  add x2,sp,#0x470
7101b2e06c  blr x8
7101b2e070  tbz w0,#0x0,0x7101b2e084
7101b2e074  mov w0,#0x10
7101b2e078  orr w1,wzr,#0x38
7101b2e07c  bl 0x710392e290
7101b2e080  cbnz x0,0x7101b2e088
7101b2e084  mov x0,xzr
7101b2e088  adrp x8,0x7101b28000
7101b2e08c  add x8,x8,#0x270
7101b2e090  adrp x20,0x71050aa000
7101b2e094  add x20,x20,#0x6d8
7101b2e098  stp xzr,x8,[x0, #0x20]
7101b2e09c  mov w8,#0x1
7101b2e0a0  stp x24,xzr,[x0, #0x10]
7101b2e0a4  str x20,[x0]
7101b2e0a8  adrp x1,0x7104432000
7101b2e0ac  add x1,x1,#0xc20
7101b2e0b0  str xzr,[x0, #0x30]
7101b2e0b4  sub x2,x29,#0xd8
7101b2e0b8  str w8,[x0, #0x8]
7101b2e0bc  stur x0,[x29, #-0xd8]
7101b2e0c0  mov x0,x23
7101b2e0c4  bl 0x7103376af0
7101b2e0c8  ldur x0,[x29, #-0xd8]
7101b2e0cc  stur xzr,[x29, #-0xd8]
7101b2e0d0  cbz x0,0x7101b2e0e0
7101b2e0d4  ldr x8,[x0]
7101b2e0d8  ldr x8,[x8, #0x8]
7101b2e0dc  blr x8
7101b2e0e0  mov w0,#0x10
7101b2e0e4  orr w1,wzr,#0x38
7101b2e0e8  bl 0x710392e290
7101b2e0ec  cbnz x0,0x7101b2e130
7101b2e0f0  ldr x0,[x28, #0xf00]
7101b2e0f4  cbz x0,0x7101b2e12c
7101b2e0f8  orr w8,wzr,#0x38
7101b2e0fc  stur wzr,[x29, #-0xe0]
7101b2e100  sub x1,x29,#0xe0
7101b2e104  str x8,[sp, #0x470]
7101b2e108  ldr x8,[x0]
7101b2e10c  ldr x8,[x8, #0x30]
7101b2e110  add x2,sp,#0x470
7101b2e114  blr x8
7101b2e118  tbz w0,#0x0,0x7101b2e12c
7101b2e11c  mov w0,#0x10
7101b2e120  orr w1,wzr,#0x38
7101b2e124  bl 0x710392e290
7101b2e128  cbnz x0,0x7101b2e130
7101b2e12c  mov x0,xzr
7101b2e130  adrp x8,0x7101b28000
7101b2e134  add x8,x8,#0x2e0
7101b2e138  str x19,[x0]
7101b2e13c  stp xzr,x8,[x0, #0x20]
7101b2e140  mov w8,#0x1
7101b2e144  stp x24,xzr,[x0, #0x10]
7101b2e148  adrp x1,0x710439d000
7101b2e14c  add x1,x1,#0x1d
7101b2e150  sub x2,x29,#0xe0
7101b2e154  str xzr,[x0, #0x30]
7101b2e158  str w8,[x0, #0x8]
7101b2e15c  stur x0,[x29, #-0xe0]
7101b2e160  mov x0,x23
7101b2e164  bl 0x7103376af0
7101b2e168  ldur x0,[x29, #-0xe0]
7101b2e16c  stur xzr,[x29, #-0xe0]
7101b2e170  cbz x0,0x7101b2e180
7101b2e174  ldr x8,[x0]
7101b2e178  ldr x8,[x8, #0x8]
7101b2e17c  blr x8
7101b2e180  mov w0,#0x10
7101b2e184  orr w1,wzr,#0x38
7101b2e188  bl 0x710392e290
7101b2e18c  cbnz x0,0x7101b2e1d0
7101b2e190  ldr x0,[x28, #0xf00]
7101b2e194  cbz x0,0x7101b2e1cc
7101b2e198  orr w8,wzr,#0x38
7101b2e19c  stur wzr,[x29, #-0xe8]
7101b2e1a0  sub x1,x29,#0xe8
7101b2e1a4  str x8,[sp, #0x470]
7101b2e1a8  ldr x8,[x0]
7101b2e1ac  ldr x8,[x8, #0x30]
7101b2e1b0  add x2,sp,#0x470
7101b2e1b4  blr x8
7101b2e1b8  tbz w0,#0x0,0x7101b2e1cc
7101b2e1bc  mov w0,#0x10
7101b2e1c0  orr w1,wzr,#0x38
7101b2e1c4  bl 0x710392e290
7101b2e1c8  cbnz x0,0x7101b2e1d0
7101b2e1cc  mov x0,xzr
7101b2e1d0  adrp x8,0x7101b28000
7101b2e1d4  add x8,x8,#0x320
7101b2e1d8  str x20,[x0]
7101b2e1dc  stp xzr,x8,[x0, #0x20]
7101b2e1e0  mov w8,#0x1
7101b2e1e4  stp x24,xzr,[x0, #0x10]
7101b2e1e8  adrp x1,0x7104349000
7101b2e1ec  add x1,x1,#0xf31
7101b2e1f0  sub x2,x29,#0xe8
7101b2e1f4  str xzr,[x0, #0x30]
7101b2e1f8  str w8,[x0, #0x8]
7101b2e1fc  stur x0,[x29, #-0xe8]
7101b2e200  mov x0,x23
7101b2e204  bl 0x7103376af0
7101b2e208  ldur x0,[x29, #-0xe8]
7101b2e20c  stur xzr,[x29, #-0xe8]
7101b2e210  cbz x0,0x7101b2e220
7101b2e214  ldr x8,[x0]
7101b2e218  ldr x8,[x8, #0x8]
7101b2e21c  blr x8
7101b2e220  mov w0,#0x10
7101b2e224  orr w1,wzr,#0x38
7101b2e228  bl 0x710392e290
7101b2e22c  cbnz x0,0x7101b2e270
7101b2e230  ldr x0,[x28, #0xf00]
7101b2e234  cbz x0,0x7101b2e26c
7101b2e238  orr w8,wzr,#0x38
7101b2e23c  stur wzr,[x29, #-0xf0]
7101b2e240  sub x1,x29,#0xf0
7101b2e244  str x8,[sp, #0x470]
7101b2e248  ldr x8,[x0]
7101b2e24c  ldr x8,[x8, #0x30]
7101b2e250  add x2,sp,#0x470
7101b2e254  blr x8
7101b2e258  tbz w0,#0x0,0x7101b2e26c
7101b2e25c  mov w0,#0x10
7101b2e260  orr w1,wzr,#0x38
7101b2e264  bl 0x710392e290
7101b2e268  cbnz x0,0x7101b2e270
7101b2e26c  mov x0,xzr
7101b2e270  adrp x8,0x7101b28000
7101b2e274  add x8,x8,#0x410
7101b2e278  str x20,[x0]
7101b2e27c  stp xzr,x8,[x0, #0x20]
7101b2e280  mov w8,#0x1
7101b2e284  stp x24,xzr,[x0, #0x10]
7101b2e288  adrp x1,0x71042d5000
7101b2e28c  add x1,x1,#0xe6e
7101b2e290  sub x2,x29,#0xf0
7101b2e294  str xzr,[x0, #0x30]
7101b2e298  str w8,[x0, #0x8]
7101b2e29c  stur x0,[x29, #-0xf0]
7101b2e2a0  mov x0,x23
7101b2e2a4  bl 0x7103376af0
7101b2e2a8  ldur x0,[x29, #-0xf0]
7101b2e2ac  stur xzr,[x29, #-0xf0]
7101b2e2b0  cbz x0,0x7101b2e2c0
7101b2e2b4  ldr x8,[x0]
7101b2e2b8  ldr x8,[x8, #0x8]
7101b2e2bc  blr x8
7101b2e2c0  mov w0,#0x10
7101b2e2c4  orr w1,wzr,#0x38
7101b2e2c8  bl 0x710392e290
7101b2e2cc  cbnz x0,0x7101b2e310
7101b2e2d0  ldr x0,[x28, #0xf00]
7101b2e2d4  cbz x0,0x7101b2e30c
7101b2e2d8  orr w8,wzr,#0x38
7101b2e2dc  stur wzr,[x29, #-0xf8]
7101b2e2e0  sub x1,x29,#0xf8
7101b2e2e4  str x8,[sp, #0x470]
7101b2e2e8  ldr x8,[x0]
7101b2e2ec  ldr x8,[x8, #0x30]
7101b2e2f0  add x2,sp,#0x470
7101b2e2f4  blr x8
7101b2e2f8  tbz w0,#0x0,0x7101b2e30c
7101b2e2fc  mov w0,#0x10
7101b2e300  orr w1,wzr,#0x38
7101b2e304  bl 0x710392e290
7101b2e308  cbnz x0,0x7101b2e310
7101b2e30c  mov x0,xzr
7101b2e310  adrp x8,0x7101b28000
7101b2e314  add x8,x8,#0x470
7101b2e318  str x19,[x0]
7101b2e31c  stp xzr,x8,[x0, #0x20]
7101b2e320  mov w8,#0x1
7101b2e324  stp x24,xzr,[x0, #0x10]
7101b2e328  adrp x1,0x71042d5000
7101b2e32c  add x1,x1,#0xe81
7101b2e330  sub x2,x29,#0xf8
7101b2e334  str xzr,[x0, #0x30]
7101b2e338  str w8,[x0, #0x8]
7101b2e33c  stur x0,[x29, #-0xf8]
7101b2e340  mov x0,x23
7101b2e344  bl 0x7103376af0
7101b2e348  ldur x0,[x29, #-0xf8]
7101b2e34c  stur xzr,[x29, #-0xf8]
7101b2e350  cbz x0,0x7101b2e360
7101b2e354  ldr x8,[x0]
7101b2e358  ldr x8,[x8, #0x8]
7101b2e35c  blr x8
7101b2e360  mov w0,#0x10
7101b2e364  orr w1,wzr,#0x38
7101b2e368  bl 0x710392e290
7101b2e36c  cbnz x0,0x7101b2e3b0
7101b2e370  ldr x0,[x28, #0xf00]
7101b2e374  cbz x0,0x7101b2e3ac
7101b2e378  orr w8,wzr,#0x38
7101b2e37c  stur wzr,[x29, #-0xa4]
7101b2e380  sub x1,x29,#0xa4
7101b2e384  str x8,[sp, #0x470]
7101b2e388  ldr x8,[x0]
7101b2e38c  ldr x8,[x8, #0x30]
7101b2e390  add x2,sp,#0x470
7101b2e394  blr x8
7101b2e398  tbz w0,#0x0,0x7101b2e3ac
7101b2e39c  mov w0,#0x10
7101b2e3a0  orr w1,wzr,#0x38
7101b2e3a4  bl 0x710392e290
7101b2e3a8  cbnz x0,0x7101b2e3b0
7101b2e3ac  mov x0,xzr
7101b2e3b0  adrp x8,0x71050aa000
7101b2e3b4  add x8,x8,#0x700
7101b2e3b8  str x24,[x0, #0x10]
7101b2e3bc  str x8,[x0]
7101b2e3c0  adrp x8,0x7101b28000
7101b2e3c4  add x8,x8,#0x4e0
7101b2e3c8  stp x8,xzr,[x0, #0x18]
7101b2e3cc  mov w8,#0x1
7101b2e3d0  stp xzr,xzr,[x0, #0x28]
7101b2e3d4  adrp x1,0x71043ce000
7101b2e3d8  add x1,x1,#0xff2
7101b2e3dc  add x2,sp,#0x470
7101b2e3e0  str w8,[x0, #0x8]
7101b2e3e4  str x0,[sp, #0x470]
7101b2e3e8  mov x0,x23
7101b2e3ec  bl 0x7103376af0
7101b2e3f0  ldr x0,[sp, #0x470]
7101b2e3f4  str xzr,[sp, #0x470]
7101b2e3f8  cbz x0,0x7101b2e408
7101b2e3fc  ldr x8,[x0]
7101b2e400  ldr x8,[x8, #0x8]
7101b2e404  blr x8
7101b2e408  ldr x19,[x27, #0x40]
7101b2e40c  mov w0,#0x10
7101b2e410  orr w1,wzr,#0x38
7101b2e414  bl 0x710392e290
7101b2e418  cbnz x0,0x7101b2e44c
7101b2e41c  ldr x0,[x28, #0xf00]
7101b2e420  orr w8,wzr,#0x38
7101b2e424  str wzr,[sp, #0x610]
7101b2e428  str x8,[sp, #0x470]
7101b2e42c  ldr x8,[x0]
7101b2e430  ldr x8,[x8, #0x30]
7101b2e434  add x1,sp,#0x610
7101b2e438  add x2,sp,#0x470
7101b2e43c  blr x8
7101b2e440  mov w0,#0x10
7101b2e444  orr w1,wzr,#0x38
7101b2e448  bl 0x710392e290
7101b2e44c  adrp x8,0x7101b32000
7101b2e450  add x8,x8,#0x7a0
7101b2e454  adrp x23,0x71050aa000
7101b2e458  add x23,x23,#0x890
7101b2e45c  stp xzr,x8,[x0, #0x20]
7101b2e460  mov w8,#0x1
7101b2e464  stp x27,xzr,[x0, #0x10]
7101b2e468  str x23,[x0]
7101b2e46c  adrp x1,0x7104401000
7101b2e470  add x1,x1,#0x39
7101b2e474  str xzr,[x0, #0x30]
7101b2e478  add x2,sp,#0x2e0
7101b2e47c  str w8,[x0, #0x8]
7101b2e480  str x0,[sp, #0x2e0]
7101b2e484  mov x0,x19
7101b2e488  bl 0x7103376af0
7101b2e48c  ldr x0,[sp, #0x2e0]
7101b2e490  str xzr,[sp, #0x2e0]
7101b2e494  cbz x0,0x7101b2e4a4
7101b2e498  ldr x8,[x0]
7101b2e49c  ldr x8,[x8, #0x8]
7101b2e4a0  blr x8
7101b2e4a4  ldr x19,[x22]
7101b2e4a8  mov w0,#0x10
7101b2e4ac  orr w1,wzr,#0x38
7101b2e4b0  bl 0x710392e290
7101b2e4b4  cbnz x0,0x7101b2e4e8
7101b2e4b8  ldr x0,[x28, #0xf00]
7101b2e4bc  orr w8,wzr,#0x38
7101b2e4c0  str wzr,[sp, #0x610]
7101b2e4c4  str x8,[sp, #0x470]
7101b2e4c8  ldr x8,[x0]
7101b2e4cc  ldr x8,[x8, #0x30]
7101b2e4d0  add x1,sp,#0x610
7101b2e4d4  add x2,sp,#0x470
7101b2e4d8  blr x8
7101b2e4dc  mov w0,#0x10
7101b2e4e0  orr w1,wzr,#0x38
7101b2e4e4  bl 0x710392e290
7101b2e4e8  adrp x8,0x7101b32000
7101b2e4ec  add x8,x8,#0x7d0
7101b2e4f0  str x23,[x0]
7101b2e4f4  stp xzr,x8,[x0, #0x20]
7101b2e4f8  mov w8,#0x1
7101b2e4fc  stp x27,xzr,[x0, #0x10]
7101b2e500  adrp x1,0x710438c000
7101b2e504  add x1,x1,#0x571
7101b2e508  add x2,sp,#0x2d8
7101b2e50c  str xzr,[x0, #0x30]
7101b2e510  str w8,[x0, #0x8]
7101b2e514  str x0,[sp, #0x2d8]
7101b2e518  mov x0,x19
7101b2e51c  bl 0x7103376af0
7101b2e520  ldr x0,[sp, #0x2d8]
7101b2e524  str xzr,[sp, #0x2d8]
7101b2e528  cbz x0,0x7101b2e538
7101b2e52c  ldr x8,[x0]
7101b2e530  ldr x8,[x8, #0x8]
7101b2e534  blr x8
7101b2e538  ldr x19,[x22]
7101b2e53c  mov w0,#0x10
7101b2e540  orr w1,wzr,#0x38
7101b2e544  bl 0x710392e290
7101b2e548  cbnz x0,0x7101b2e57c
7101b2e54c  ldr x0,[x28, #0xf00]
7101b2e550  orr w8,wzr,#0x38
7101b2e554  str wzr,[sp, #0x610]
7101b2e558  str x8,[sp, #0x470]
7101b2e55c  ldr x8,[x0]
7101b2e560  ldr x8,[x8, #0x30]
7101b2e564  add x1,sp,#0x610
7101b2e568  add x2,sp,#0x470
7101b2e56c  blr x8
7101b2e570  mov w0,#0x10
7101b2e574  orr w1,wzr,#0x38
7101b2e578  bl 0x710392e290
7101b2e57c  adrp x8,0x7101b32000
7101b2e580  add x8,x8,#0x8a0
7101b2e584  adrp x20,0x71050aa000
7101b2e588  add x20,x20,#0x8b8
7101b2e58c  stp xzr,x8,[x0, #0x20]
7101b2e590  mov w8,#0x1
7101b2e594  stp x27,xzr,[x0, #0x10]
7101b2e598  str x20,[x0]
7101b2e59c  adrp x1,0x7104291000
7101b2e5a0  add x1,x1,#0x7f0
7101b2e5a4  str xzr,[x0, #0x30]
7101b2e5a8  add x2,sp,#0x2d0
7101b2e5ac  str w8,[x0, #0x8]
7101b2e5b0  str x0,[sp, #0x2d0]
7101b2e5b4  mov x0,x19
7101b2e5b8  bl 0x7103376af0
7101b2e5bc  ldr x0,[sp, #0x2d0]
7101b2e5c0  str xzr,[sp, #0x2d0]
7101b2e5c4  cbz x0,0x7101b2e5d4
7101b2e5c8  ldr x8,[x0]
7101b2e5cc  ldr x8,[x8, #0x8]
7101b2e5d0  blr x8
7101b2e5d4  ldr x19,[x22]
7101b2e5d8  mov w0,#0x10
7101b2e5dc  orr w1,wzr,#0x38
7101b2e5e0  bl 0x710392e290
7101b2e5e4  cbnz x0,0x7101b2e618
7101b2e5e8  ldr x0,[x28, #0xf00]
7101b2e5ec  orr w8,wzr,#0x38
7101b2e5f0  str wzr,[sp, #0x610]
7101b2e5f4  str x8,[sp, #0x470]
7101b2e5f8  ldr x8,[x0]
7101b2e5fc  ldr x8,[x8, #0x30]
7101b2e600  add x1,sp,#0x610
7101b2e604  add x2,sp,#0x470
7101b2e608  blr x8
7101b2e60c  mov w0,#0x10
7101b2e610  orr w1,wzr,#0x38
7101b2e614  bl 0x710392e290
7101b2e618  adrp x8,0x7101b32000
7101b2e61c  add x8,x8,#0x950
7101b2e620  str x20,[x0]
7101b2e624  stp xzr,x8,[x0, #0x20]
7101b2e628  mov w8,#0x1
7101b2e62c  stp x27,xzr,[x0, #0x10]
7101b2e630  adrp x1,0x7104308000
7101b2e634  add x1,x1,#0x129
7101b2e638  add x2,sp,#0x2c8
7101b2e63c  str xzr,[x0, #0x30]
7101b2e640  str w8,[x0, #0x8]
7101b2e644  str x0,[sp, #0x2c8]
7101b2e648  mov x0,x19
7101b2e64c  bl 0x7103376af0
7101b2e650  ldr x0,[sp, #0x2c8]
7101b2e654  str xzr,[sp, #0x2c8]
7101b2e658  cbz x0,0x7101b2e668
7101b2e65c  ldr x8,[x0]
7101b2e660  ldr x8,[x8, #0x8]
7101b2e664  blr x8
7101b2e668  ldr x19,[x22]
7101b2e66c  mov w0,#0x10
7101b2e670  orr w1,wzr,#0x38
7101b2e674  bl 0x710392e290
7101b2e678  cbnz x0,0x7101b2e6ac
7101b2e67c  ldr x0,[x28, #0xf00]
7101b2e680  orr w8,wzr,#0x38
7101b2e684  str wzr,[sp, #0x610]
7101b2e688  str x8,[sp, #0x470]
7101b2e68c  ldr x8,[x0]
7101b2e690  ldr x8,[x8, #0x30]
7101b2e694  add x1,sp,#0x610
7101b2e698  add x2,sp,#0x470
7101b2e69c  blr x8
7101b2e6a0  mov w0,#0x10
7101b2e6a4  orr w1,wzr,#0x38
7101b2e6a8  bl 0x710392e290
7101b2e6ac  adrp x24,0x71050aa000
7101b2e6b0  add x24,x24,#0x8e0
7101b2e6b4  adrp x8,0x7101b32000
7101b2e6b8  add x8,x8,#0x980
7101b2e6bc  stp xzr,xzr,[x0, #0x28]
7101b2e6c0  str x24,[x0]
7101b2e6c4  str x27,[x0, #0x10]
7101b2e6c8  adrp x1,0x7104412000
7101b2e6cc  add x1,x1,#0x58c
7101b2e6d0  stp x8,xzr,[x0, #0x18]
7101b2e6d4  add x2,sp,#0x2c0
7101b2e6d8  str wzr,[x0, #0x8]
7101b2e6dc  str x0,[sp, #0x2c0]
7101b2e6e0  mov x0,x19
7101b2e6e4  bl 0x7103376af0
7101b2e6e8  ldr x0,[sp, #0x2c0]
7101b2e6ec  str xzr,[sp, #0x2c0]
7101b2e6f0  cbz x0,0x7101b2e700
7101b2e6f4  ldr x8,[x0]
7101b2e6f8  ldr x8,[x8, #0x8]
7101b2e6fc  blr x8
7101b2e700  ldr x19,[x22]
7101b2e704  mov w1,#0x28
7101b2e708  mov w0,#0x10
7101b2e70c  bl 0x710392e290
7101b2e710  cbnz x0,0x7101b2e744
7101b2e714  ldr x0,[x28, #0xf00]
7101b2e718  mov w21,#0x28
7101b2e71c  str wzr,[sp, #0x610]
7101b2e720  str x21,[sp, #0x470]
7101b2e724  ldr x8,[x0]
7101b2e728  ldr x8,[x8, #0x30]
7101b2e72c  add x1,sp,#0x610
7101b2e730  add x2,sp,#0x470
7101b2e734  blr x8
7101b2e738  mov w0,#0x10
7101b2e73c  mov x1,x21
7101b2e740  bl 0x710392e290
7101b2e744  adrp x9,0x71050aa000
7101b2e748  add x9,x9,#0x908
7101b2e74c  adrp x8,0x7101b32000
7101b2e750  add x8,x8,#0xb00
7101b2e754  str x9,[x0]
7101b2e758  str xzr,[x0, #0x20]
7101b2e75c  stp x27,x8,[x0, #0x10]
7101b2e760  adrp x1,0x71042d5000
7101b2e764  add x1,x1,#0xed5
7101b2e768  str wzr,[x0, #0x8]
7101b2e76c  add x2,sp,#0x2b8
7101b2e770  str x0,[sp, #0x2b8]
7101b2e774  mov x0,x19
7101b2e778  bl 0x7103376af0
7101b2e77c  ldr x0,[sp, #0x2b8]
7101b2e780  str xzr,[sp, #0x2b8]
7101b2e784  cbz x0,0x7101b2e794
7101b2e788  ldr x8,[x0]
7101b2e78c  ldr x8,[x8, #0x8]
7101b2e790  blr x8
7101b2e794  ldr x19,[x22]
7101b2e798  mov w0,#0x10
7101b2e79c  orr w1,wzr,#0x38
7101b2e7a0  bl 0x710392e290
7101b2e7a4  cbnz x0,0x7101b2e7d8
7101b2e7a8  ldr x0,[x28, #0xf00]
7101b2e7ac  orr w8,wzr,#0x38
7101b2e7b0  str wzr,[sp, #0x610]
7101b2e7b4  str x8,[sp, #0x470]
7101b2e7b8  ldr x8,[x0]
7101b2e7bc  ldr x8,[x8, #0x30]
7101b2e7c0  add x1,sp,#0x610
7101b2e7c4  add x2,sp,#0x470
7101b2e7c8  blr x8
7101b2e7cc  mov w0,#0x10
7101b2e7d0  orr w1,wzr,#0x38
7101b2e7d4  bl 0x710392e290
7101b2e7d8  adrp x8,0x7101b32000
7101b2e7dc  add x8,x8,#0xeb0
7101b2e7e0  str x24,[x0]
7101b2e7e4  stp xzr,xzr,[x0, #0x28]
7101b2e7e8  adrp x1,0x7104280000
7101b2e7ec  add x1,x1,#0x67f
7101b2e7f0  str x27,[x0, #0x10]
7101b2e7f4  add x2,sp,#0x2b0
7101b2e7f8  stp x8,xzr,[x0, #0x18]
7101b2e7fc  str wzr,[x0, #0x8]
7101b2e800  str x0,[sp, #0x2b0]
7101b2e804  mov x0,x19
7101b2e808  bl 0x7103376af0
7101b2e80c  ldr x0,[sp, #0x2b0]
7101b2e810  str xzr,[sp, #0x2b0]
7101b2e814  cbz x0,0x7101b2e824
7101b2e818  ldr x8,[x0]
7101b2e81c  ldr x8,[x8, #0x8]
7101b2e820  blr x8
7101b2e824  ldr x19,[x22]
7101b2e828  mov w0,#0x10
7101b2e82c  orr w1,wzr,#0x38
7101b2e830  bl 0x710392e290
7101b2e834  cbnz x0,0x7101b2e868
7101b2e838  ldr x0,[x28, #0xf00]
7101b2e83c  orr w8,wzr,#0x38
7101b2e840  str wzr,[sp, #0x610]
7101b2e844  str x8,[sp, #0x470]
7101b2e848  ldr x8,[x0]
7101b2e84c  ldr x8,[x8, #0x30]
7101b2e850  add x1,sp,#0x610
7101b2e854  add x2,sp,#0x470
7101b2e858  blr x8
7101b2e85c  mov w0,#0x10
7101b2e860  orr w1,wzr,#0x38
7101b2e864  bl 0x710392e290
7101b2e868  adrp x8,0x71050aa000
7101b2e86c  add x8,x8,#0x930
7101b2e870  adrp x9,0x7101b32000
7101b2e874  add x9,x9,#0xf80
7101b2e878  str x8,[x0]
7101b2e87c  mov w8,#0x1
7101b2e880  stp x27,xzr,[x0, #0x10]
7101b2e884  str xzr,[x0, #0x30]
7101b2e888  stp xzr,x9,[x0, #0x20]
7101b2e88c  adrp x1,0x71042b3000
7101b2e890  add x1,x1,#0xf7c
7101b2e894  add x2,sp,#0x2a8
7101b2e898  str w8,[x0, #0x8]
7101b2e89c  str x0,[sp, #0x2a8]
7101b2e8a0  mov x0,x19
7101b2e8a4  bl 0x7103376af0
7101b2e8a8  ldr x0,[sp, #0x2a8]
7101b2e8ac  str xzr,[sp, #0x2a8]
7101b2e8b0  cbz x0,0x7101b2e8c0
7101b2e8b4  ldr x8,[x0]
7101b2e8b8  ldr x8,[x8, #0x8]
7101b2e8bc  blr x8
7101b2e8c0  ldr x19,[x22]
7101b2e8c4  mov w0,#0x10
7101b2e8c8  orr w1,wzr,#0x38
7101b2e8cc  bl 0x710392e290
7101b2e8d0  cbnz x0,0x7101b2e904
7101b2e8d4  ldr x0,[x28, #0xf00]
7101b2e8d8  orr w8,wzr,#0x38
7101b2e8dc  str wzr,[sp, #0x610]
7101b2e8e0  str x8,[sp, #0x470]
7101b2e8e4  ldr x8,[x0]
7101b2e8e8  ldr x8,[x8, #0x30]
7101b2e8ec  add x1,sp,#0x610
7101b2e8f0  add x2,sp,#0x470
7101b2e8f4  blr x8
7101b2e8f8  mov w0,#0x10
7101b2e8fc  orr w1,wzr,#0x38
7101b2e900  bl 0x710392e290
7101b2e904  adrp x8,0x7101b32000
7101b2e908  add x8,x8,#0xfe0
7101b2e90c  adrp x26,0x71050aa000
7101b2e910  add x26,x26,#0x958
7101b2e914  stp xzr,x8,[x0, #0x20]
7101b2e918  mov w8,#0x1
7101b2e91c  stp x27,xzr,[x0, #0x10]
7101b2e920  str x26,[x0]
7101b2e924  adrp x1,0x710435b000
7101b2e928  add x1,x1,#0x24f
7101b2e92c  str xzr,[x0, #0x30]
7101b2e930  add x2,sp,#0x2a0
7101b2e934  str w8,[x0, #0x8]
7101b2e938  str x0,[sp, #0x2a0]
7101b2e93c  mov x0,x19
7101b2e940  bl 0x7103376af0
7101b2e944  ldr x0,[sp, #0x2a0]
7101b2e948  str xzr,[sp, #0x2a0]
7101b2e94c  cbz x0,0x7101b2e95c
7101b2e950  ldr x8,[x0]
7101b2e954  ldr x8,[x8, #0x8]
7101b2e958  blr x8
7101b2e95c  ldr x19,[x22]
7101b2e960  mov w0,#0x10
7101b2e964  orr w1,wzr,#0x38
7101b2e968  bl 0x710392e290
7101b2e96c  cbnz x0,0x7101b2e9a0
7101b2e970  ldr x0,[x28, #0xf00]
7101b2e974  orr w8,wzr,#0x38
7101b2e978  str wzr,[sp, #0x610]
7101b2e97c  str x8,[sp, #0x470]
7101b2e980  ldr x8,[x0]
7101b2e984  ldr x8,[x8, #0x30]
7101b2e988  add x1,sp,#0x610
7101b2e98c  add x2,sp,#0x470
7101b2e990  blr x8
7101b2e994  mov w0,#0x10
7101b2e998  orr w1,wzr,#0x38
7101b2e99c  bl 0x710392e290
7101b2e9a0  adrp x8,0x7101b33000
7101b2e9a4  add x8,x8,#0x60
7101b2e9a8  str x26,[x0]
7101b2e9ac  stp x8,xzr,[x0, #0x18]
7101b2e9b0  mov w8,#0x1
7101b2e9b4  stp xzr,xzr,[x0, #0x28]
7101b2e9b8  adrp x1,0x710425e000
7101b2e9bc  add x1,x1,#0xef5
7101b2e9c0  add x2,sp,#0x298
7101b2e9c4  str x27,[x0, #0x10]
7101b2e9c8  str w8,[x0, #0x8]
7101b2e9cc  str x0,[sp, #0x298]
7101b2e9d0  mov x0,x19
7101b2e9d4  bl 0x7103376af0
7101b2e9d8  ldr x0,[sp, #0x298]
7101b2e9dc  str xzr,[sp, #0x298]
7101b2e9e0  cbz x0,0x7101b2e9f0
7101b2e9e4  ldr x8,[x0]
7101b2e9e8  ldr x8,[x8, #0x8]
7101b2e9ec  blr x8
7101b2e9f0  ldr x19,[x22]
7101b2e9f4  mov w1,#0x28
7101b2e9f8  mov w0,#0x10
7101b2e9fc  bl 0x710392e290
7101b2ea00  cbnz x0,0x7101b2ea34
7101b2ea04  ldr x0,[x28, #0xf00]
7101b2ea08  mov w21,#0x28
7101b2ea0c  str wzr,[sp, #0x610]
7101b2ea10  str x21,[sp, #0x470]
7101b2ea14  ldr x8,[x0]
7101b2ea18  ldr x8,[x8, #0x30]
7101b2ea1c  add x1,sp,#0x610
7101b2ea20  add x2,sp,#0x470
7101b2ea24  blr x8
7101b2ea28  mov w0,#0x10
7101b2ea2c  mov x1,x21
7101b2ea30  bl 0x710392e290
7101b2ea34  adrp x8,0x7101b33000
7101b2ea38  add x8,x8,#0x350
7101b2ea3c  adrp x9,0x71050aa000
7101b2ea40  add x9,x9,#0x908
7101b2ea44  str x9,[x0]
7101b2ea48  str xzr,[x0, #0x20]
7101b2ea4c  stp x27,x8,[x0, #0x10]
7101b2ea50  adrp x1,0x7104329000
7101b2ea54  add x1,x1,#0xbc8
7101b2ea58  str wzr,[x0, #0x8]
7101b2ea5c  add x2,sp,#0x290
7101b2ea60  str x0,[sp, #0x290]
7101b2ea64  mov x0,x19
7101b2ea68  bl 0x7103376af0
7101b2ea6c  ldr x0,[sp, #0x290]
7101b2ea70  str xzr,[sp, #0x290]
7101b2ea74  cbz x0,0x7101b2ea84
7101b2ea78  ldr x8,[x0]
7101b2ea7c  ldr x8,[x8, #0x8]
7101b2ea80  blr x8
7101b2ea84  ldr x19,[x22]
7101b2ea88  mov w1,#0x28
7101b2ea8c  mov w0,#0x10
7101b2ea90  bl 0x710392e290
7101b2ea94  cbnz x0,0x7101b2eac8
7101b2ea98  ldr x0,[x28, #0xf00]
7101b2ea9c  mov w21,#0x28
7101b2eaa0  str wzr,[sp, #0x610]
7101b2eaa4  str x21,[sp, #0x470]
7101b2eaa8  ldr x8,[x0]
7101b2eaac  ldr x8,[x8, #0x30]
7101b2eab0  add x1,sp,#0x610
7101b2eab4  add x2,sp,#0x470
7101b2eab8  blr x8
7101b2eabc  mov w0,#0x10
7101b2eac0  mov x1,x21
7101b2eac4  bl 0x710392e290
7101b2eac8  adrp x25,0x71050aa000
7101b2eacc  add x25,x25,#0x980
7101b2ead0  adrp x8,0x7101b33000
7101b2ead4  add x8,x8,#0x440
7101b2ead8  str x25,[x0]
7101b2eadc  str xzr,[x0, #0x20]
7101b2eae0  stp x27,x8,[x0, #0x10]
7101b2eae4  adrp x1,0x7104432000
7101b2eae8  add x1,x1,#0xc40
7101b2eaec  str wzr,[x0, #0x8]
7101b2eaf0  add x2,sp,#0x288
7101b2eaf4  str x0,[sp, #0x288]
7101b2eaf8  mov x0,x19
7101b2eafc  bl 0x7103376af0
7101b2eb00  ldr x0,[sp, #0x288]
7101b2eb04  str xzr,[sp, #0x288]
7101b2eb08  cbz x0,0x7101b2eb18
7101b2eb0c  ldr x8,[x0]
7101b2eb10  ldr x8,[x8, #0x8]
7101b2eb14  blr x8
7101b2eb18  ldr x19,[x22]
7101b2eb1c  mov w1,#0x28
7101b2eb20  mov w0,#0x10
7101b2eb24  bl 0x710392e290
7101b2eb28  cbnz x0,0x7101b2eb5c
7101b2eb2c  ldr x0,[x28, #0xf00]
7101b2eb30  mov w21,#0x28
7101b2eb34  str wzr,[sp, #0x610]
7101b2eb38  str x21,[sp, #0x470]
7101b2eb3c  ldr x8,[x0]
7101b2eb40  ldr x8,[x8, #0x30]
7101b2eb44  add x1,sp,#0x610
7101b2eb48  add x2,sp,#0x470
7101b2eb4c  blr x8
7101b2eb50  mov w0,#0x10
7101b2eb54  mov x1,x21
7101b2eb58  bl 0x710392e290
7101b2eb5c  adrp x8,0x7101b33000
7101b2eb60  add x8,x8,#0x4a0
7101b2eb64  str x25,[x0]
7101b2eb68  stp x27,x8,[x0, #0x10]
7101b2eb6c  adrp x1,0x710436b000
7101b2eb70  add x1,x1,#0xf31
7101b2eb74  str xzr,[x0, #0x20]
7101b2eb78  add x2,sp,#0x280
7101b2eb7c  str wzr,[x0, #0x8]
7101b2eb80  str x0,[sp, #0x280]
7101b2eb84  mov x0,x19
7101b2eb88  bl 0x7103376af0
7101b2eb8c  ldr x0,[sp, #0x280]
7101b2eb90  str xzr,[sp, #0x280]
7101b2eb94  cbz x0,0x7101b2eba4
7101b2eb98  ldr x8,[x0]
7101b2eb9c  ldr x8,[x8, #0x8]
7101b2eba0  blr x8
7101b2eba4  ldr x19,[x22]
7101b2eba8  mov w0,#0x10
7101b2ebac  orr w1,wzr,#0x38
7101b2ebb0  bl 0x710392e290
7101b2ebb4  cbnz x0,0x7101b2ebe8
7101b2ebb8  ldr x0,[x28, #0xf00]
7101b2ebbc  orr w8,wzr,#0x38
7101b2ebc0  str wzr,[sp, #0x610]
7101b2ebc4  str x8,[sp, #0x470]
7101b2ebc8  ldr x8,[x0]
7101b2ebcc  ldr x8,[x8, #0x30]
7101b2ebd0  add x1,sp,#0x610
7101b2ebd4  add x2,sp,#0x470
7101b2ebd8  blr x8
7101b2ebdc  mov w0,#0x10
7101b2ebe0  orr w1,wzr,#0x38
7101b2ebe4  bl 0x710392e290
7101b2ebe8  ldr x8,[sp, #0x98]
7101b2ebec  stp x8,xzr,[x0, #0x10]
7101b2ebf0  adrp x8,0x7101b33000
7101b2ebf4  add x8,x8,#0x4b0
7101b2ebf8  adrp x27,0x71050aa000
7101b2ebfc  add x27,x27,#0x9a8
7101b2ec00  str x27,[x0]
7101b2ec04  str xzr,[x0, #0x30]
7101b2ec08  stp xzr,x8,[x0, #0x20]
7101b2ec0c  mov w8,#0x1
7101b2ec10  str w8,[x0, #0x8]
7101b2ec14  str x0,[sp, #0x278]
7101b2ec18  adrp x1,0x7104412000
7101b2ec1c  add x1,x1,#0x596
7101b2ec20  add x2,sp,#0x278
7101b2ec24  mov x0,x19
7101b2ec28  bl 0x7103376af0
7101b2ec2c  ldr x0,[sp, #0x278]
7101b2ec30  str xzr,[sp, #0x278]
7101b2ec34  cbz x0,0x7101b2ec44
7101b2ec38  ldr x8,[x0]
7101b2ec3c  ldr x8,[x8, #0x8]
7101b2ec40  blr x8
7101b2ec44  ldr x19,[x22]
7101b2ec48  mov w1,#0x28
7101b2ec4c  mov w0,#0x10
7101b2ec50  bl 0x710392e290
7101b2ec54  cbnz x0,0x7101b2ec88
7101b2ec58  ldr x0,[x28, #0xf00]
7101b2ec5c  mov w21,#0x28
7101b2ec60  str wzr,[sp, #0x610]
7101b2ec64  str x21,[sp, #0x470]
7101b2ec68  ldr x8,[x0]
7101b2ec6c  ldr x8,[x8, #0x30]
7101b2ec70  add x1,sp,#0x610
7101b2ec74  add x2,sp,#0x470
7101b2ec78  blr x8
7101b2ec7c  mov w0,#0x10
7101b2ec80  mov x1,x21
7101b2ec84  bl 0x710392e290
7101b2ec88  ldr x9,[sp, #0x98]
7101b2ec8c  adrp x8,0x7101b33000
7101b2ec90  add x8,x8,#0x4c0
7101b2ec94  str x25,[x0]
7101b2ec98  str xzr,[x0, #0x20]
7101b2ec9c  str wzr,[x0, #0x8]
7101b2eca0  stp x9,x8,[x0, #0x10]
7101b2eca4  str x0,[sp, #0x270]
7101b2eca8  adrp x1,0x710424f000
7101b2ecac  add x1,x1,#0xdf
7101b2ecb0  add x2,sp,#0x270
7101b2ecb4  mov x0,x19
7101b2ecb8  bl 0x7103376af0
7101b2ecbc  ldr x0,[sp, #0x270]
7101b2ecc0  str xzr,[sp, #0x270]
7101b2ecc4  cbz x0,0x7101b2ecd4
7101b2ecc8  ldr x8,[x0]
7101b2eccc  ldr x8,[x8, #0x8]
7101b2ecd0  blr x8
7101b2ecd4  ldr x19,[x22]
7101b2ecd8  mov w0,#0x10
7101b2ecdc  orr w1,wzr,#0x38
7101b2ece0  bl 0x710392e290
7101b2ece4  cbnz x0,0x7101b2ed18
7101b2ece8  ldr x0,[x28, #0xf00]
7101b2ecec  orr w8,wzr,#0x38
7101b2ecf0  str wzr,[sp, #0x610]
7101b2ecf4  str x8,[sp, #0x470]
7101b2ecf8  ldr x8,[x0]
7101b2ecfc  ldr x8,[x8, #0x30]
7101b2ed00  add x1,sp,#0x610
7101b2ed04  add x2,sp,#0x470
7101b2ed08  blr x8
7101b2ed0c  mov w0,#0x10
7101b2ed10  orr w1,wzr,#0x38
7101b2ed14  bl 0x710392e290
7101b2ed18  ldr x8,[sp, #0x98]
7101b2ed1c  stp x8,xzr,[x0, #0x10]
7101b2ed20  adrp x8,0x7101b33000
7101b2ed24  add x8,x8,#0x4d0
7101b2ed28  str x27,[x0]
7101b2ed2c  stp xzr,x8,[x0, #0x20]
7101b2ed30  mov w8,#0x1
7101b2ed34  str xzr,[x0, #0x30]
7101b2ed38  str x0,[sp, #0x268]
7101b2ed3c  adrp x1,0x7104443000
7101b2ed40  add x1,x1,#0x218
7101b2ed44  add x2,sp,#0x268
7101b2ed48  str w8,[x0, #0x8]
7101b2ed4c  mov x0,x19
7101b2ed50  bl 0x7103376af0
7101b2ed54  ldr x0,[sp, #0x268]
7101b2ed58  str xzr,[sp, #0x268]
7101b2ed5c  cbz x0,0x7101b2ed6c
7101b2ed60  ldr x8,[x0]
7101b2ed64  ldr x8,[x8, #0x8]
7101b2ed68  blr x8
7101b2ed6c  ldr x19,[x22]
7101b2ed70  mov w0,#0x10
7101b2ed74  orr w1,wzr,#0x38
7101b2ed78  bl 0x710392e290
7101b2ed7c  cbnz x0,0x7101b2edb0
7101b2ed80  ldr x0,[x28, #0xf00]
7101b2ed84  orr w8,wzr,#0x38
7101b2ed88  str wzr,[sp, #0x610]
7101b2ed8c  str x8,[sp, #0x470]
7101b2ed90  ldr x8,[x0]
7101b2ed94  ldr x8,[x8, #0x30]
7101b2ed98  add x1,sp,#0x610
7101b2ed9c  add x2,sp,#0x470
7101b2eda0  blr x8
7101b2eda4  mov w0,#0x10
7101b2eda8  orr w1,wzr,#0x38
7101b2edac  bl 0x710392e290
7101b2edb0  ldr x8,[sp, #0x98]
7101b2edb4  stp x8,xzr,[x0, #0x10]
7101b2edb8  adrp x8,0x7101b33000
7101b2edbc  add x8,x8,#0x4e0
7101b2edc0  str x27,[x0]
7101b2edc4  stp xzr,x8,[x0, #0x20]
7101b2edc8  mov w8,#0x1
7101b2edcc  str xzr,[x0, #0x30]
7101b2edd0  str x0,[sp, #0x260]
7101b2edd4  adrp x1,0x7104349000
7101b2edd8  add x1,x1,#0xf55
7101b2eddc  add x2,sp,#0x260
7101b2ede0  str w8,[x0, #0x8]
7101b2ede4  mov x0,x19
7101b2ede8  bl 0x7103376af0
7101b2edec  ldr x0,[sp, #0x260]
7101b2edf0  str xzr,[sp, #0x260]
7101b2edf4  cbz x0,0x7101b2ee04
7101b2edf8  ldr x8,[x0]
7101b2edfc  ldr x8,[x8, #0x8]
7101b2ee00  blr x8
7101b2ee04  ldr x19,[x22]
7101b2ee08  mov w1,#0x28
7101b2ee0c  mov w0,#0x10
7101b2ee10  bl 0x710392e290
7101b2ee14  cbnz x0,0x7101b2ee48
7101b2ee18  ldr x0,[x28, #0xf00]
7101b2ee1c  mov w21,#0x28
7101b2ee20  str wzr,[sp, #0x610]
7101b2ee24  str x21,[sp, #0x470]
7101b2ee28  ldr x8,[x0]
7101b2ee2c  ldr x8,[x8, #0x30]
7101b2ee30  add x1,sp,#0x610
7101b2ee34  add x2,sp,#0x470
7101b2ee38  blr x8
7101b2ee3c  mov w0,#0x10
7101b2ee40  mov x1,x21
7101b2ee44  bl 0x710392e290
7101b2ee48  ldr x9,[sp, #0x98]
7101b2ee4c  adrp x8,0x7101b33000
7101b2ee50  add x8,x8,#0x510
7101b2ee54  str x25,[x0]
7101b2ee58  str xzr,[x0, #0x20]
7101b2ee5c  str wzr,[x0, #0x8]
7101b2ee60  stp x9,x8,[x0, #0x10]
7101b2ee64  str x0,[sp, #0x258]
7101b2ee68  adrp x1,0x710425e000
7101b2ee6c  add x1,x1,#0xf12
7101b2ee70  add x2,sp,#0x258
7101b2ee74  mov x0,x19
7101b2ee78  bl 0x7103376af0
7101b2ee7c  ldr x0,[sp, #0x258]
7101b2ee80  str xzr,[sp, #0x258]
7101b2ee84  cbz x0,0x7101b2ee94
7101b2ee88  ldr x8,[x0]
7101b2ee8c  ldr x8,[x8, #0x8]
7101b2ee90  blr x8
7101b2ee94  ldr x19,[x22]
7101b2ee98  mov w0,#0x10
7101b2ee9c  orr w1,wzr,#0x38
7101b2eea0  bl 0x710392e290
7101b2eea4  cbnz x0,0x7101b2eed8
7101b2eea8  ldr x0,[x28, #0xf00]
7101b2eeac  orr w8,wzr,#0x38
7101b2eeb0  str wzr,[sp, #0x610]
7101b2eeb4  str x8,[sp, #0x470]
7101b2eeb8  ldr x8,[x0]
7101b2eebc  ldr x8,[x8, #0x30]
7101b2eec0  add x1,sp,#0x610
7101b2eec4  add x2,sp,#0x470
7101b2eec8  blr x8
7101b2eecc  mov w0,#0x10
7101b2eed0  orr w1,wzr,#0x38
7101b2eed4  bl 0x710392e290
7101b2eed8  ldr x9,[sp, #0x98]
7101b2eedc  adrp x8,0x7101b33000
7101b2eee0  add x8,x8,#0x520
7101b2eee4  str x24,[x0]
7101b2eee8  stp xzr,xzr,[x0, #0x28]
7101b2eeec  str wzr,[x0, #0x8]
7101b2eef0  adrp x1,0x710436b000
7101b2eef4  add x1,x1,#0xf43
7101b2eef8  stp x8,xzr,[x0, #0x18]
7101b2eefc  add x2,sp,#0x250
7101b2ef00  str x9,[x0, #0x10]
7101b2ef04  str x0,[sp, #0x250]
7101b2ef08  mov x0,x19
7101b2ef0c  bl 0x7103376af0
7101b2ef10  ldr x0,[sp, #0x250]
7101b2ef14  str xzr,[sp, #0x250]
7101b2ef18  cbz x0,0x7101b2ef28
7101b2ef1c  ldr x8,[x0]
7101b2ef20  ldr x8,[x8, #0x8]
7101b2ef24  blr x8
7101b2ef28  ldr x19,[x22]
7101b2ef2c  mov w0,#0x10
7101b2ef30  orr w1,wzr,#0x38
7101b2ef34  bl 0x710392e290
7101b2ef38  cbnz x0,0x7101b2ef6c
7101b2ef3c  ldr x0,[x28, #0xf00]
7101b2ef40  orr w8,wzr,#0x38
7101b2ef44  str wzr,[sp, #0x610]
7101b2ef48  str x8,[sp, #0x470]
7101b2ef4c  ldr x8,[x0]
7101b2ef50  ldr x8,[x8, #0x30]
7101b2ef54  add x1,sp,#0x610
7101b2ef58  add x2,sp,#0x470
7101b2ef5c  blr x8
7101b2ef60  mov w0,#0x10
7101b2ef64  orr w1,wzr,#0x38
7101b2ef68  bl 0x710392e290
7101b2ef6c  ldr x9,[sp, #0x98]
7101b2ef70  adrp x8,0x7101b33000
7101b2ef74  add x8,x8,#0x530
7101b2ef78  str x24,[x0]
7101b2ef7c  stp xzr,xzr,[x0, #0x28]
7101b2ef80  str wzr,[x0, #0x8]
7101b2ef84  adrp x1,0x7104349000
7101b2ef88  add x1,x1,#0xf71
7101b2ef8c  stp x8,xzr,[x0, #0x18]
7101b2ef90  add x2,sp,#0x248
7101b2ef94  str x9,[x0, #0x10]
7101b2ef98  str x0,[sp, #0x248]
7101b2ef9c  mov x0,x19
7101b2efa0  bl 0x7103376af0
7101b2efa4  ldr x0,[sp, #0x248]
7101b2efa8  str xzr,[sp, #0x248]
7101b2efac  cbz x0,0x7101b2efbc
7101b2efb0  ldr x8,[x0]
7101b2efb4  ldr x8,[x8, #0x8]
7101b2efb8  blr x8
7101b2efbc  ldr x19,[x22]
7101b2efc0  mov w0,#0x10
7101b2efc4  orr w1,wzr,#0x38
7101b2efc8  bl 0x710392e290
7101b2efcc  cbnz x0,0x7101b2f000
7101b2efd0  ldr x0,[x28, #0xf00]
7101b2efd4  orr w8,wzr,#0x38
7101b2efd8  str wzr,[sp, #0x610]
7101b2efdc  str x8,[sp, #0x470]
7101b2efe0  ldr x8,[x0]
7101b2efe4  ldr x8,[x8, #0x30]
7101b2efe8  add x1,sp,#0x610
7101b2efec  add x2,sp,#0x470
7101b2eff0  blr x8
7101b2eff4  mov w0,#0x10
7101b2eff8  orr w1,wzr,#0x38
7101b2effc  bl 0x710392e290
7101b2f000  ldr x9,[sp, #0x98]
7101b2f004  adrp x8,0x7101b33000
7101b2f008  add x8,x8,#0x540
7101b2f00c  str x24,[x0]
7101b2f010  stp xzr,xzr,[x0, #0x28]
7101b2f014  str wzr,[x0, #0x8]
7101b2f018  adrp x1,0x710425e000
7101b2f01c  add x1,x1,#0xf26
7101b2f020  stp x8,xzr,[x0, #0x18]
7101b2f024  add x2,sp,#0x240
7101b2f028  str x9,[x0, #0x10]
7101b2f02c  str x0,[sp, #0x240]
7101b2f030  mov x0,x19
7101b2f034  bl 0x7103376af0
7101b2f038  ldr x0,[sp, #0x240]
7101b2f03c  str xzr,[sp, #0x240]
7101b2f040  cbz x0,0x7101b2f050
7101b2f044  ldr x8,[x0]
7101b2f048  ldr x8,[x8, #0x8]
7101b2f04c  blr x8
7101b2f050  ldr x19,[x22]
7101b2f054  mov w1,#0x28
7101b2f058  mov w0,#0x10
7101b2f05c  bl 0x710392e290
7101b2f060  cbnz x0,0x7101b2f094
7101b2f064  ldr x0,[x28, #0xf00]
7101b2f068  mov w21,#0x28
7101b2f06c  str wzr,[sp, #0x610]
7101b2f070  str x21,[sp, #0x470]
7101b2f074  ldr x8,[x0]
7101b2f078  ldr x8,[x8, #0x30]
7101b2f07c  add x1,sp,#0x610
7101b2f080  add x2,sp,#0x470
7101b2f084  blr x8
7101b2f088  mov w0,#0x10
7101b2f08c  mov x1,x21
7101b2f090  bl 0x710392e290
7101b2f094  adrp x8,0x71050aa000
7101b2f098  add x8,x8,#0x9d0
7101b2f09c  str x8,[x0]
7101b2f0a0  ldr x8,[sp, #0x98]
7101b2f0a4  adrp x9,0x7101b33000
7101b2f0a8  add x9,x9,#0x550
7101b2f0ac  stp x8,x9,[x0, #0x10]
7101b2f0b0  str xzr,[x0, #0x20]
7101b2f0b4  str wzr,[x0, #0x8]
7101b2f0b8  str x0,[sp, #0x238]
7101b2f0bc  adrp x1,0x710436b000
7101b2f0c0  add x1,x1,#0xf56
7101b2f0c4  add x2,sp,#0x238
7101b2f0c8  mov x0,x19
7101b2f0cc  bl 0x7103376af0
7101b2f0d0  ldr x0,[sp, #0x238]
7101b2f0d4  str xzr,[sp, #0x238]
7101b2f0d8  cbz x0,0x7101b2f0e8
7101b2f0dc  ldr x8,[x0]
7101b2f0e0  ldr x8,[x8, #0x8]
7101b2f0e4  blr x8
7101b2f0e8  ldr x19,[x22]
7101b2f0ec  mov w1,#0x28
7101b2f0f0  mov w0,#0x10
7101b2f0f4  bl 0x710392e290
7101b2f0f8  cbnz x0,0x7101b2f12c
7101b2f0fc  ldr x0,[x28, #0xf00]
7101b2f100  mov w21,#0x28
7101b2f104  str wzr,[sp, #0x610]
7101b2f108  str x21,[sp, #0x470]
7101b2f10c  ldr x8,[x0]
7101b2f110  ldr x8,[x8, #0x30]
7101b2f114  add x1,sp,#0x610
7101b2f118  add x2,sp,#0x470
7101b2f11c  blr x8
7101b2f120  mov w0,#0x10
7101b2f124  mov x1,x21
7101b2f128  bl 0x710392e290
7101b2f12c  adrp x9,0x71050aa000
7101b2f130  add x9,x9,#0x908
7101b2f134  str x9,[x0]
7101b2f138  ldr x9,[sp, #0x98]
7101b2f13c  adrp x8,0x7101b33000
7101b2f140  add x8,x8,#0x5b0
7101b2f144  stp x9,x8,[x0, #0x10]
7101b2f148  str xzr,[x0, #0x20]
7101b2f14c  str wzr,[x0, #0x8]
7101b2f150  str x0,[sp, #0x230]
7101b2f154  adrp x1,0x7104318000
7101b2f158  add x1,x1,#0xaa5
7101b2f15c  add x2,sp,#0x230
7101b2f160  mov x0,x19
7101b2f164  bl 0x7103376af0
7101b2f168  ldr x0,[sp, #0x230]
7101b2f16c  str xzr,[sp, #0x230]
7101b2f170  cbz x0,0x7101b2f180
7101b2f174  ldr x8,[x0]
7101b2f178  ldr x8,[x8, #0x8]
7101b2f17c  blr x8
7101b2f180  ldr x19,[x22]
7101b2f184  mov w0,#0x10
7101b2f188  orr w1,wzr,#0x38
7101b2f18c  mov x21,x20
7101b2f190  bl 0x710392e290
7101b2f194  cbnz x0,0x7101b2f1c8
7101b2f198  ldr x0,[x28, #0xf00]
7101b2f19c  orr w8,wzr,#0x38
7101b2f1a0  str wzr,[sp, #0x610]
7101b2f1a4  str x8,[sp, #0x470]
7101b2f1a8  ldr x8,[x0]
7101b2f1ac  ldr x8,[x8, #0x30]
7101b2f1b0  add x1,sp,#0x610
7101b2f1b4  add x2,sp,#0x470
7101b2f1b8  blr x8
7101b2f1bc  mov w0,#0x10
7101b2f1c0  orr w1,wzr,#0x38
7101b2f1c4  bl 0x710392e290
7101b2f1c8  ldr x8,[sp, #0x98]
7101b2f1cc  stp x8,xzr,[x0, #0x10]
7101b2f1d0  adrp x8,0x7101b33000
7101b2f1d4  add x8,x8,#0x650
7101b2f1d8  adrp x20,0x71050aa000
7101b2f1dc  add x20,x20,#0x9f8
7101b2f1e0  str x20,[x0]
7101b2f1e4  str xzr,[x0, #0x30]
7101b2f1e8  stp xzr,x8,[x0, #0x20]
7101b2f1ec  mov w8,#0x1
7101b2f1f0  str w8,[x0, #0x8]
7101b2f1f4  str x0,[sp, #0x228]
7101b2f1f8  adrp x1,0x71043be000
7101b2f1fc  add x1,x1,#0x2ef
7101b2f200  add x2,sp,#0x228
7101b2f204  mov x0,x19
7101b2f208  bl 0x7103376af0
7101b2f20c  ldr x0,[sp, #0x228]
7101b2f210  str xzr,[sp, #0x228]
7101b2f214  cbz x0,0x7101b2f224
7101b2f218  ldr x8,[x0]
7101b2f21c  ldr x8,[x8, #0x8]
7101b2f220  blr x8
7101b2f224  ldr x19,[x22]
7101b2f228  mov w0,#0x10
7101b2f22c  orr w1,wzr,#0x38
7101b2f230  bl 0x710392e290
7101b2f234  cbnz x0,0x7101b2f268
7101b2f238  ldr x0,[x28, #0xf00]
7101b2f23c  orr w8,wzr,#0x38
7101b2f240  str wzr,[sp, #0x610]
7101b2f244  str x8,[sp, #0x470]
7101b2f248  ldr x8,[x0]
7101b2f24c  ldr x8,[x8, #0x30]
7101b2f250  add x1,sp,#0x610
7101b2f254  add x2,sp,#0x470
7101b2f258  blr x8
7101b2f25c  mov w0,#0x10
7101b2f260  orr w1,wzr,#0x38
7101b2f264  bl 0x710392e290
7101b2f268  ldr x8,[sp, #0x98]
7101b2f26c  stp x8,xzr,[x0, #0x10]
7101b2f270  adrp x8,0x7101b33000
7101b2f274  add x8,x8,#0x660
7101b2f278  str x20,[x0]
7101b2f27c  stp xzr,x8,[x0, #0x20]
7101b2f280  mov w8,#0x1
7101b2f284  str xzr,[x0, #0x30]
7101b2f288  str x0,[sp, #0x220]
7101b2f28c  adrp x1,0x71043cf000
7101b2f290  add x1,x1,#0x3a
7101b2f294  add x2,sp,#0x220
7101b2f298  str w8,[x0, #0x8]
7101b2f29c  mov x0,x19
7101b2f2a0  bl 0x7103376af0
7101b2f2a4  ldr x0,[sp, #0x220]
7101b2f2a8  str xzr,[sp, #0x220]
7101b2f2ac  cbz x0,0x7101b2f2bc
7101b2f2b0  ldr x8,[x0]
7101b2f2b4  ldr x8,[x8, #0x8]
7101b2f2b8  blr x8
7101b2f2bc  ldr x19,[x22]
7101b2f2c0  mov w0,#0x10
7101b2f2c4  orr w1,wzr,#0x38
7101b2f2c8  bl 0x710392e290
7101b2f2cc  mov x20,x21
7101b2f2d0  cbnz x0,0x7101b2f304
7101b2f2d4  ldr x0,[x28, #0xf00]
7101b2f2d8  orr w8,wzr,#0x38
7101b2f2dc  str wzr,[sp, #0x610]
7101b2f2e0  str x8,[sp, #0x470]
7101b2f2e4  ldr x8,[x0]
7101b2f2e8  ldr x8,[x8, #0x30]
7101b2f2ec  add x1,sp,#0x610
7101b2f2f0  add x2,sp,#0x470
7101b2f2f4  blr x8
7101b2f2f8  mov w0,#0x10
7101b2f2fc  orr w1,wzr,#0x38
7101b2f300  bl 0x710392e290
7101b2f304  ldr x8,[sp, #0x98]
7101b2f308  stp x8,xzr,[x0, #0x10]
7101b2f30c  adrp x8,0x7101b33000
7101b2f310  add x8,x8,#0x670
7101b2f314  str x27,[x0]
7101b2f318  stp xzr,x8,[x0, #0x20]
7101b2f31c  mov w8,#0x1
7101b2f320  str xzr,[x0, #0x30]
7101b2f324  str x0,[sp, #0x218]
7101b2f328  adrp x1,0x7104443000
7101b2f32c  add x1,x1,#0x228
7101b2f330  add x2,sp,#0x218
7101b2f334  str w8,[x0, #0x8]
7101b2f338  mov x0,x19
7101b2f33c  bl 0x7103376af0
7101b2f340  ldr x0,[sp, #0x218]
7101b2f344  str xzr,[sp, #0x218]
7101b2f348  cbz x0,0x7101b2f358
7101b2f34c  ldr x8,[x0]
7101b2f350  ldr x8,[x8, #0x8]
7101b2f354  blr x8
7101b2f358  ldr x19,[x22]
7101b2f35c  mov w0,#0x10
7101b2f360  orr w1,wzr,#0x38
7101b2f364  bl 0x710392e290
7101b2f368  cbnz x0,0x7101b2f39c
7101b2f36c  ldr x0,[x28, #0xf00]
7101b2f370  orr w8,wzr,#0x38
7101b2f374  str wzr,[sp, #0x610]
7101b2f378  str x8,[sp, #0x470]
7101b2f37c  ldr x8,[x0]
7101b2f380  ldr x8,[x8, #0x30]
7101b2f384  add x1,sp,#0x610
7101b2f388  add x2,sp,#0x470
7101b2f38c  blr x8
7101b2f390  mov w0,#0x10
7101b2f394  orr w1,wzr,#0x38
7101b2f398  bl 0x710392e290
7101b2f39c  ldr x8,[sp, #0x98]
7101b2f3a0  stp x8,xzr,[x0, #0x10]
7101b2f3a4  adrp x8,0x7101b33000
7101b2f3a8  add x8,x8,#0x6d0
7101b2f3ac  str x26,[x0]
7101b2f3b0  stp xzr,x8,[x0, #0x20]
7101b2f3b4  mov w8,#0x1
7101b2f3b8  str xzr,[x0, #0x30]
7101b2f3bc  str x0,[sp, #0x210]
7101b2f3c0  adrp x1,0x71042a2000
7101b2f3c4  add x1,x1,#0xb7c
7101b2f3c8  add x2,sp,#0x210
7101b2f3cc  str w8,[x0, #0x8]
7101b2f3d0  mov x0,x19
7101b2f3d4  bl 0x7103376af0
7101b2f3d8  ldr x0,[sp, #0x210]
7101b2f3dc  str xzr,[sp, #0x210]
7101b2f3e0  cbz x0,0x7101b2f3f0
7101b2f3e4  ldr x8,[x0]
7101b2f3e8  ldr x8,[x8, #0x8]
7101b2f3ec  blr x8
7101b2f3f0  ldr x19,[x22]
7101b2f3f4  mov w1,#0x28
7101b2f3f8  mov w0,#0x10
7101b2f3fc  bl 0x710392e290
7101b2f400  cbnz x0,0x7101b2f434
7101b2f404  ldr x0,[x28, #0xf00]
7101b2f408  mov w21,#0x28
7101b2f40c  str wzr,[sp, #0x610]
7101b2f410  str x21,[sp, #0x470]
7101b2f414  ldr x8,[x0]
7101b2f418  ldr x8,[x8, #0x30]
7101b2f41c  add x1,sp,#0x610
7101b2f420  add x2,sp,#0x470
7101b2f424  blr x8
7101b2f428  mov w0,#0x10
7101b2f42c  mov x1,x21
7101b2f430  bl 0x710392e290
7101b2f434  ldr x9,[sp, #0x98]
7101b2f438  adrp x28,0x71050aa000
7101b2f43c  add x28,x28,#0xa20
7101b2f440  adrp x8,0x7101b33000
7101b2f444  add x8,x8,#0x7d0
7101b2f448  str x28,[x0]
7101b2f44c  stp x9,x8,[x0, #0x10]
7101b2f450  str xzr,[x0, #0x20]
7101b2f454  str wzr,[x0, #0x8]
7101b2f458  str x0,[sp, #0x208]
7101b2f45c  adrp x1,0x7104339000
7101b2f460  add x1,x1,#0xd8b
7101b2f464  add x2,sp,#0x208
7101b2f468  mov x0,x19
7101b2f46c  bl 0x7103376af0
7101b2f470  ldr x0,[sp, #0x208]
7101b2f474  str xzr,[sp, #0x208]
7101b2f478  cbz x0,0x7101b2f488
7101b2f47c  ldr x8,[x0]
7101b2f480  ldr x8,[x8, #0x8]
7101b2f484  blr x8
7101b2f488  ldr x19,[x22]
7101b2f48c  mov w0,#0x10
7101b2f490  orr w1,wzr,#0x38
7101b2f494  bl 0x710392e290
7101b2f498  cbnz x0,0x7101b2f4d0
7101b2f49c  adrp x8,0x7105332000
7101b2f4a0  ldr x0,[x8, #0xf00]
7101b2f4a4  orr w8,wzr,#0x38
7101b2f4a8  str wzr,[sp, #0x610]
7101b2f4ac  add x1,sp,#0x610
7101b2f4b0  str x8,[sp, #0x470]
7101b2f4b4  ldr x8,[x0]
7101b2f4b8  ldr x8,[x8, #0x30]
7101b2f4bc  add x2,sp,#0x470
7101b2f4c0  blr x8
7101b2f4c4  mov w0,#0x10
7101b2f4c8  orr w1,wzr,#0x38
7101b2f4cc  bl 0x710392e290
7101b2f4d0  ldr x8,[sp, #0x98]
7101b2f4d4  stp x8,xzr,[x0, #0x10]
7101b2f4d8  adrp x8,0x7101b33000
7101b2f4dc  add x8,x8,#0x870
7101b2f4e0  str x23,[x0]
7101b2f4e4  stp xzr,x8,[x0, #0x20]
7101b2f4e8  mov w8,#0x1
7101b2f4ec  str xzr,[x0, #0x30]
7101b2f4f0  str x0,[sp, #0x200]
7101b2f4f4  adrp x1,0x7104454000
7101b2f4f8  add x1,x1,#0x6c4
7101b2f4fc  add x2,sp,#0x200
7101b2f500  str w8,[x0, #0x8]
7101b2f504  mov x0,x19
7101b2f508  bl 0x7103376af0
7101b2f50c  ldr x0,[sp, #0x200]
7101b2f510  str xzr,[sp, #0x200]
7101b2f514  cbz x0,0x7101b2f524
7101b2f518  ldr x8,[x0]
7101b2f51c  ldr x8,[x8, #0x8]
7101b2f520  blr x8
7101b2f524  ldr x19,[x22]
7101b2f528  mov w1,#0x28
7101b2f52c  mov w0,#0x10
7101b2f530  bl 0x710392e290
7101b2f534  cbnz x0,0x7101b2f56c
7101b2f538  adrp x8,0x7105332000
7101b2f53c  ldr x0,[x8, #0xf00]
7101b2f540  mov w21,#0x28
7101b2f544  str wzr,[sp, #0x610]
7101b2f548  str x21,[sp, #0x470]
7101b2f54c  ldr x8,[x0]
7101b2f550  ldr x8,[x8, #0x30]
7101b2f554  add x1,sp,#0x610
7101b2f558  add x2,sp,#0x470
7101b2f55c  blr x8
7101b2f560  mov w0,#0x10
7101b2f564  mov x1,x21
7101b2f568  bl 0x710392e290
7101b2f56c  adrp x8,0x71050aa000
7101b2f570  add x8,x8,#0xa48
7101b2f574  str x8,[x0]
7101b2f578  ldr x8,[sp, #0x98]
7101b2f57c  adrp x9,0x7101b33000
7101b2f580  add x9,x9,#0x8a0
7101b2f584  stp x8,x9,[x0, #0x10]
7101b2f588  str xzr,[x0, #0x20]
7101b2f58c  str wzr,[x0, #0x8]
7101b2f590  str x0,[sp, #0x1f8]
7101b2f594  adrp x1,0x7104339000
7101b2f598  add x1,x1,#0xd9d
7101b2f59c  add x2,sp,#0x1f8
7101b2f5a0  mov x0,x19
7101b2f5a4  bl 0x7103376af0
7101b2f5a8  ldr x0,[sp, #0x1f8]
7101b2f5ac  str xzr,[sp, #0x1f8]
7101b2f5b0  cbz x0,0x7101b2f5c0
7101b2f5b4  ldr x8,[x0]
7101b2f5b8  ldr x8,[x8, #0x8]
7101b2f5bc  blr x8
7101b2f5c0  ldr x19,[x22]
7101b2f5c4  mov w0,#0x10
7101b2f5c8  orr w1,wzr,#0x38
7101b2f5cc  bl 0x710392e290
7101b2f5d0  cbnz x0,0x7101b2f608
7101b2f5d4  adrp x8,0x7105332000
7101b2f5d8  ldr x0,[x8, #0xf00]
7101b2f5dc  orr w8,wzr,#0x38
7101b2f5e0  str wzr,[sp, #0x610]
7101b2f5e4  add x1,sp,#0x610
7101b2f5e8  str x8,[sp, #0x470]
7101b2f5ec  ldr x8,[x0]
7101b2f5f0  ldr x8,[x8, #0x30]
7101b2f5f4  add x2,sp,#0x470
7101b2f5f8  blr x8
7101b2f5fc  mov w0,#0x10
7101b2f600  orr w1,wzr,#0x38
7101b2f604  bl 0x710392e290
7101b2f608  ldr x8,[sp, #0x98]
7101b2f60c  stp x8,xzr,[x0, #0x10]
7101b2f610  adrp x8,0x7101b33000
7101b2f614  add x8,x8,#0x8b0
7101b2f618  str x23,[x0]
7101b2f61c  stp xzr,x8,[x0, #0x20]
7101b2f620  mov w8,#0x1
7101b2f624  str xzr,[x0, #0x30]
7101b2f628  str x0,[sp, #0x1f0]
7101b2f62c  adrp x1,0x7104443000
7101b2f630  add x1,x1,#0x243
7101b2f634  add x2,sp,#0x1f0
7101b2f638  str w8,[x0, #0x8]
7101b2f63c  mov x0,x19
7101b2f640  bl 0x7103376af0
7101b2f644  ldr x0,[sp, #0x1f0]
7101b2f648  str xzr,[sp, #0x1f0]
7101b2f64c  cbz x0,0x7101b2f65c
7101b2f650  ldr x8,[x0]
7101b2f654  ldr x8,[x8, #0x8]
7101b2f658  blr x8
7101b2f65c  ldr x19,[x22]
7101b2f660  mov w1,#0x28
7101b2f664  mov w0,#0x10
7101b2f668  bl 0x710392e290
7101b2f66c  cbnz x0,0x7101b2f6a4
7101b2f670  adrp x8,0x7105332000
7101b2f674  ldr x0,[x8, #0xf00]
7101b2f678  mov w21,#0x28
7101b2f67c  str wzr,[sp, #0x610]
7101b2f680  str x21,[sp, #0x470]
7101b2f684  ldr x8,[x0]
7101b2f688  ldr x8,[x8, #0x30]
7101b2f68c  add x1,sp,#0x610
7101b2f690  add x2,sp,#0x470
7101b2f694  blr x8
7101b2f698  mov w0,#0x10
7101b2f69c  mov x1,x21
7101b2f6a0  bl 0x710392e290
7101b2f6a4  adrp x8,0x71050aa000
7101b2f6a8  add x8,x8,#0xa70
7101b2f6ac  str x8,[x0]
7101b2f6b0  ldr x8,[sp, #0x98]
7101b2f6b4  adrp x9,0x7101b33000
7101b2f6b8  add x9,x9,#0x8e0
7101b2f6bc  stp x8,x9,[x0, #0x10]
7101b2f6c0  str xzr,[x0, #0x20]
7101b2f6c4  str wzr,[x0, #0x8]
7101b2f6c8  str x0,[sp, #0x1e8]
7101b2f6cc  adrp x1,0x7104291000
7101b2f6d0  add x1,x1,#0x80c
7101b2f6d4  add x2,sp,#0x1e8
7101b2f6d8  mov x0,x19
7101b2f6dc  bl 0x7103376af0
7101b2f6e0  ldr x0,[sp, #0x1e8]
7101b2f6e4  str xzr,[sp, #0x1e8]
7101b2f6e8  cbz x0,0x7101b2f6f8
7101b2f6ec  ldr x8,[x0]
7101b2f6f0  ldr x8,[x8, #0x8]
7101b2f6f4  blr x8
7101b2f6f8  ldr x19,[x22]
7101b2f6fc  mov w1,#0x28
7101b2f700  mov w0,#0x10
7101b2f704  bl 0x710392e290
7101b2f708  cbnz x0,0x7101b2f740
7101b2f70c  adrp x8,0x7105332000
7101b2f710  ldr x0,[x8, #0xf00]
7101b2f714  mov w21,#0x28
7101b2f718  str wzr,[sp, #0x610]
7101b2f71c  str x21,[sp, #0x470]
7101b2f720  ldr x8,[x0]
7101b2f724  ldr x8,[x8, #0x30]
7101b2f728  add x1,sp,#0x610
7101b2f72c  add x2,sp,#0x470
7101b2f730  blr x8
7101b2f734  mov w0,#0x10
7101b2f738  mov x1,x21
7101b2f73c  bl 0x710392e290
7101b2f740  adrp x9,0x71050aa000
7101b2f744  add x9,x9,#0x908
7101b2f748  str x9,[x0]
7101b2f74c  ldr x9,[sp, #0x98]
7101b2f750  adrp x8,0x7101b33000
7101b2f754  add x8,x8,#0x910
7101b2f758  stp x9,x8,[x0, #0x10]
7101b2f75c  str xzr,[x0, #0x20]
7101b2f760  str wzr,[x0, #0x8]
7101b2f764  str x0,[sp, #0x1e0]
7101b2f768  adrp x1,0x7104291000
7101b2f76c  add x1,x1,#0x81f
7101b2f770  add x2,sp,#0x1e0
7101b2f774  mov x0,x19
7101b2f778  bl 0x7103376af0
7101b2f77c  ldr x0,[sp, #0x1e0]
7101b2f780  str xzr,[sp, #0x1e0]
7101b2f784  cbz x0,0x7101b2f794
7101b2f788  ldr x8,[x0]
7101b2f78c  ldr x8,[x8, #0x8]
7101b2f790  blr x8
7101b2f794  ldr x19,[x22]
7101b2f798  mov w1,#0x28
7101b2f79c  mov w0,#0x10
7101b2f7a0  bl 0x710392e290
7101b2f7a4  cbnz x0,0x7101b2f7dc
7101b2f7a8  adrp x8,0x7105332000
7101b2f7ac  ldr x0,[x8, #0xf00]
7101b2f7b0  mov w21,#0x28
7101b2f7b4  str wzr,[sp, #0x610]
7101b2f7b8  str x21,[sp, #0x470]
7101b2f7bc  ldr x8,[x0]
7101b2f7c0  ldr x8,[x8, #0x30]
7101b2f7c4  add x1,sp,#0x610
7101b2f7c8  add x2,sp,#0x470
7101b2f7cc  blr x8
7101b2f7d0  mov w0,#0x10
7101b2f7d4  mov x1,x21
7101b2f7d8  bl 0x710392e290
7101b2f7dc  ldr x9,[sp, #0x98]
7101b2f7e0  adrp x26,0x71050aa000
7101b2f7e4  add x26,x26,#0xa98
7101b2f7e8  adrp x8,0x7101b33000
7101b2f7ec  add x8,x8,#0x940
7101b2f7f0  str x26,[x0]
7101b2f7f4  stp x9,x8,[x0, #0x10]
7101b2f7f8  str xzr,[x0, #0x20]
7101b2f7fc  str wzr,[x0, #0x8]
7101b2f800  str x0,[sp, #0x1d8]
7101b2f804  adrp x1,0x71043cf000
7101b2f808  add x1,x1,#0x4e
7101b2f80c  add x2,sp,#0x1d8
7101b2f810  mov x0,x19
7101b2f814  bl 0x7103376af0
7101b2f818  ldr x0,[sp, #0x1d8]
7101b2f81c  str xzr,[sp, #0x1d8]
7101b2f820  cbz x0,0x7101b2f830
7101b2f824  ldr x8,[x0]
7101b2f828  ldr x8,[x8, #0x8]
7101b2f82c  blr x8
7101b2f830  ldr x19,[x22]
7101b2f834  mov w1,#0x28
7101b2f838  mov w0,#0x10
7101b2f83c  bl 0x710392e290
7101b2f840  cbnz x0,0x7101b2f878
7101b2f844  adrp x8,0x7105332000
7101b2f848  ldr x0,[x8, #0xf00]
7101b2f84c  mov w21,#0x28
7101b2f850  str wzr,[sp, #0x610]
7101b2f854  str x21,[sp, #0x470]
7101b2f858  ldr x8,[x0]
7101b2f85c  ldr x8,[x8, #0x30]
7101b2f860  add x1,sp,#0x610
7101b2f864  add x2,sp,#0x470
7101b2f868  blr x8
7101b2f86c  mov w0,#0x10
7101b2f870  mov x1,x21
7101b2f874  bl 0x710392e290
7101b2f878  ldr x9,[sp, #0x98]
7101b2f87c  adrp x8,0x7101b33000
7101b2f880  add x8,x8,#0x9c0
7101b2f884  str x26,[x0]
7101b2f888  str xzr,[x0, #0x20]
7101b2f88c  str wzr,[x0, #0x8]
7101b2f890  stp x9,x8,[x0, #0x10]
7101b2f894  str x0,[sp, #0x1d0]
7101b2f898  adrp x1,0x7104421000
7101b2f89c  add x1,x1,#0xf64
7101b2f8a0  add x2,sp,#0x1d0
7101b2f8a4  mov x0,x19
7101b2f8a8  bl 0x7103376af0
7101b2f8ac  ldr x0,[sp, #0x1d0]
7101b2f8b0  str xzr,[sp, #0x1d0]
7101b2f8b4  cbz x0,0x7101b2f8c4
7101b2f8b8  ldr x8,[x0]
7101b2f8bc  ldr x8,[x8, #0x8]
7101b2f8c0  blr x8
7101b2f8c4  ldr x19,[x22]
7101b2f8c8  mov w1,#0x28
7101b2f8cc  mov w0,#0x10
7101b2f8d0  bl 0x710392e290
7101b2f8d4  cbnz x0,0x7101b2f90c
7101b2f8d8  adrp x8,0x7105332000
7101b2f8dc  ldr x0,[x8, #0xf00]
7101b2f8e0  mov w21,#0x28
7101b2f8e4  str wzr,[sp, #0x610]
7101b2f8e8  str x21,[sp, #0x470]
7101b2f8ec  ldr x8,[x0]
7101b2f8f0  ldr x8,[x8, #0x30]
7101b2f8f4  add x1,sp,#0x610
7101b2f8f8  add x2,sp,#0x470
7101b2f8fc  blr x8
7101b2f900  mov w0,#0x10
7101b2f904  mov x1,x21
7101b2f908  bl 0x710392e290
7101b2f90c  adrp x9,0x71050aa000
7101b2f910  add x9,x9,#0x908
7101b2f914  str x9,[x0]
7101b2f918  ldr x9,[sp, #0x98]
7101b2f91c  adrp x8,0x7101b33000
7101b2f920  add x8,x8,#0xa40
7101b2f924  stp x9,x8,[x0, #0x10]
7101b2f928  str xzr,[x0, #0x20]
7101b2f92c  str wzr,[x0, #0x8]
7101b2f930  str x0,[sp, #0x1c8]
7101b2f934  adrp x1,0x71043be000
7101b2f938  add x1,x1,#0x303
7101b2f93c  add x2,sp,#0x1c8
7101b2f940  mov x0,x19
7101b2f944  bl 0x7103376af0
7101b2f948  ldr x0,[sp, #0x1c8]
7101b2f94c  str xzr,[sp, #0x1c8]
7101b2f950  cbz x0,0x7101b2f960
7101b2f954  ldr x8,[x0]
7101b2f958  ldr x8,[x8, #0x8]
7101b2f95c  blr x8
7101b2f960  ldr x19,[x22]
7101b2f964  mov w1,#0x28
7101b2f968  mov w0,#0x10
7101b2f96c  bl 0x710392e290
7101b2f970  cbnz x0,0x7101b2f9a8
7101b2f974  adrp x8,0x7105332000
7101b2f978  ldr x0,[x8, #0xf00]
7101b2f97c  mov w21,#0x28
7101b2f980  str wzr,[sp, #0x610]
7101b2f984  str x21,[sp, #0x470]
7101b2f988  ldr x8,[x0]
7101b2f98c  ldr x8,[x8, #0x30]
7101b2f990  add x1,sp,#0x610
7101b2f994  add x2,sp,#0x470
7101b2f998  blr x8
7101b2f99c  mov w0,#0x10
7101b2f9a0  mov x1,x21
7101b2f9a4  bl 0x710392e290
7101b2f9a8  ldr x9,[sp, #0x98]
7101b2f9ac  adrp x8,0x7101b33000
7101b2f9b0  add x8,x8,#0xab0
7101b2f9b4  str x28,[x0]
7101b2f9b8  str xzr,[x0, #0x20]
7101b2f9bc  str wzr,[x0, #0x8]
7101b2f9c0  stp x9,x8,[x0, #0x10]
7101b2f9c4  str x0,[sp, #0x1c0]
7101b2f9c8  adrp x1,0x7104329000
7101b2f9cc  add x1,x1,#0xbe5
7101b2f9d0  add x2,sp,#0x1c0
7101b2f9d4  mov x0,x19
7101b2f9d8  bl 0x7103376af0
7101b2f9dc  ldr x0,[sp, #0x1c0]
7101b2f9e0  str xzr,[sp, #0x1c0]
7101b2f9e4  cbz x0,0x7101b2f9f4
7101b2f9e8  ldr x8,[x0]
7101b2f9ec  ldr x8,[x8, #0x8]
7101b2f9f0  blr x8
7101b2f9f4  ldr x19,[x22]
7101b2f9f8  mov w0,#0x10
7101b2f9fc  orr w1,wzr,#0x38
7101b2fa00  bl 0x710392e290
7101b2fa04  cbnz x0,0x7101b2fa3c
7101b2fa08  adrp x8,0x7105332000
7101b2fa0c  ldr x0,[x8, #0xf00]
7101b2fa10  orr w8,wzr,#0x38
7101b2fa14  str wzr,[sp, #0x610]
7101b2fa18  add x1,sp,#0x610
7101b2fa1c  str x8,[sp, #0x470]
7101b2fa20  ldr x8,[x0]
7101b2fa24  ldr x8,[x8, #0x30]
7101b2fa28  add x2,sp,#0x470
7101b2fa2c  blr x8
7101b2fa30  mov w0,#0x10
7101b2fa34  orr w1,wzr,#0x38
7101b2fa38  bl 0x710392e290
7101b2fa3c  ldr x8,[sp, #0x98]
7101b2fa40  stp x8,xzr,[x0, #0x10]
7101b2fa44  adrp x8,0x7101b33000
7101b2fa48  add x8,x8,#0xae0
7101b2fa4c  str x23,[x0]
7101b2fa50  stp xzr,x8,[x0, #0x20]
7101b2fa54  mov w8,#0x1
7101b2fa58  str xzr,[x0, #0x30]
7101b2fa5c  str x0,[sp, #0x1b8]
7101b2fa60  adrp x1,0x71042c4000
7101b2fa64  add x1,x1,#0x9f3
7101b2fa68  add x2,sp,#0x1b8
7101b2fa6c  str w8,[x0, #0x8]
7101b2fa70  mov x0,x19
7101b2fa74  bl 0x7103376af0
7101b2fa78  ldr x0,[sp, #0x1b8]
7101b2fa7c  str xzr,[sp, #0x1b8]
7101b2fa80  cbz x0,0x7101b2fa90
7101b2fa84  ldr x8,[x0]
7101b2fa88  ldr x8,[x8, #0x8]
7101b2fa8c  blr x8
7101b2fa90  ldr x19,[x22]
7101b2fa94  mov w0,#0x10
7101b2fa98  orr w1,wzr,#0x38
7101b2fa9c  bl 0x710392e290
7101b2faa0  cbnz x0,0x7101b2fad8
7101b2faa4  adrp x8,0x7105332000
7101b2faa8  ldr x0,[x8, #0xf00]
7101b2faac  orr w8,wzr,#0x38
7101b2fab0  str wzr,[sp, #0x610]
7101b2fab4  add x1,sp,#0x610
7101b2fab8  str x8,[sp, #0x470]
7101b2fabc  ldr x8,[x0]
7101b2fac0  ldr x8,[x8, #0x30]
7101b2fac4  add x2,sp,#0x470
7101b2fac8  blr x8
7101b2facc  mov w0,#0x10
7101b2fad0  orr w1,wzr,#0x38
7101b2fad4  bl 0x710392e290
7101b2fad8  ldr x8,[sp, #0x98]
7101b2fadc  stp x8,xzr,[x0, #0x10]
7101b2fae0  adrp x8,0x7101b33000
7101b2fae4  add x8,x8,#0xbf0
7101b2fae8  str x23,[x0]
7101b2faec  stp xzr,x8,[x0, #0x20]
7101b2faf0  mov w8,#0x1
7101b2faf4  str xzr,[x0, #0x30]
7101b2faf8  str x0,[sp, #0x1b0]
7101b2fafc  adrp x1,0x71042f7000
7101b2fb00  add x1,x1,#0xee6
7101b2fb04  add x2,sp,#0x1b0
7101b2fb08  str w8,[x0, #0x8]
7101b2fb0c  mov x0,x19
7101b2fb10  bl 0x7103376af0
7101b2fb14  ldr x0,[sp, #0x1b0]
7101b2fb18  str xzr,[sp, #0x1b0]
7101b2fb1c  cbz x0,0x7101b2fb2c
7101b2fb20  ldr x8,[x0]
7101b2fb24  ldr x8,[x8, #0x8]
7101b2fb28  blr x8
7101b2fb2c  ldr x19,[x22]
7101b2fb30  mov w0,#0x10
7101b2fb34  orr w1,wzr,#0x38
7101b2fb38  bl 0x710392e290
7101b2fb3c  cbnz x0,0x7101b2fb74
7101b2fb40  adrp x8,0x7105332000
7101b2fb44  ldr x0,[x8, #0xf00]
7101b2fb48  orr w8,wzr,#0x38
7101b2fb4c  str wzr,[sp, #0x610]
7101b2fb50  add x1,sp,#0x610
7101b2fb54  str x8,[sp, #0x470]
7101b2fb58  ldr x8,[x0]
7101b2fb5c  ldr x8,[x8, #0x30]
7101b2fb60  add x2,sp,#0x470
7101b2fb64  blr x8
7101b2fb68  mov w0,#0x10
7101b2fb6c  orr w1,wzr,#0x38
7101b2fb70  bl 0x710392e290
7101b2fb74  ldr x8,[sp, #0x98]
7101b2fb78  stp x8,xzr,[x0, #0x10]
7101b2fb7c  adrp x8,0x7101b33000
7101b2fb80  add x8,x8,#0xc20
7101b2fb84  str x23,[x0]
7101b2fb88  stp xzr,x8,[x0, #0x20]
7101b2fb8c  mov w8,#0x1
7101b2fb90  str xzr,[x0, #0x30]
7101b2fb94  str x0,[sp, #0x1a8]
7101b2fb98  adrp x1,0x71042a2000
7101b2fb9c  add x1,x1,#0xb94
7101b2fba0  add x2,sp,#0x1a8
7101b2fba4  str w8,[x0, #0x8]
7101b2fba8  mov x0,x19
7101b2fbac  bl 0x7103376af0
7101b2fbb0  ldr x0,[sp, #0x1a8]
7101b2fbb4  str xzr,[sp, #0x1a8]
7101b2fbb8  cbz x0,0x7101b2fbc8
7101b2fbbc  ldr x8,[x0]
7101b2fbc0  ldr x8,[x8, #0x8]
7101b2fbc4  blr x8
7101b2fbc8  ldr x19,[x22]
7101b2fbcc  mov w0,#0x10
7101b2fbd0  orr w1,wzr,#0x38
7101b2fbd4  bl 0x710392e290
7101b2fbd8  cbnz x0,0x7101b2fc10
7101b2fbdc  adrp x8,0x7105332000
7101b2fbe0  ldr x0,[x8, #0xf00]
7101b2fbe4  orr w8,wzr,#0x38
7101b2fbe8  str wzr,[sp, #0x610]
7101b2fbec  add x1,sp,#0x610
7101b2fbf0  str x8,[sp, #0x470]
7101b2fbf4  ldr x8,[x0]
7101b2fbf8  ldr x8,[x8, #0x30]
7101b2fbfc  add x2,sp,#0x470
7101b2fc00  blr x8
7101b2fc04  mov w0,#0x10
7101b2fc08  orr w1,wzr,#0x38
7101b2fc0c  bl 0x710392e290
7101b2fc10  ldr x8,[sp, #0x98]
7101b2fc14  stp x8,xzr,[x0, #0x10]
7101b2fc18  adrp x8,0x7101b33000
7101b2fc1c  add x8,x8,#0xd10
7101b2fc20  str x23,[x0]
7101b2fc24  stp xzr,x8,[x0, #0x20]
7101b2fc28  mov w8,#0x1
7101b2fc2c  str xzr,[x0, #0x30]
7101b2fc30  str x0,[sp, #0x1a0]
7101b2fc34  adrp x1,0x710438c000
7101b2fc38  add x1,x1,#0x587
7101b2fc3c  add x2,sp,#0x1a0
7101b2fc40  str w8,[x0, #0x8]
7101b2fc44  mov x0,x19
7101b2fc48  bl 0x7103376af0
7101b2fc4c  ldr x0,[sp, #0x1a0]
7101b2fc50  str xzr,[sp, #0x1a0]
7101b2fc54  cbz x0,0x7101b2fc64
7101b2fc58  ldr x8,[x0]
7101b2fc5c  ldr x8,[x8, #0x8]
7101b2fc60  blr x8
7101b2fc64  ldr x19,[x22]
7101b2fc68  mov w0,#0x10
7101b2fc6c  orr w1,wzr,#0x38
7101b2fc70  bl 0x710392e290
7101b2fc74  cbnz x0,0x7101b2fcac
7101b2fc78  adrp x8,0x7105332000
7101b2fc7c  ldr x0,[x8, #0xf00]
7101b2fc80  orr w8,wzr,#0x38
7101b2fc84  str wzr,[sp, #0x610]
7101b2fc88  add x1,sp,#0x610
7101b2fc8c  str x8,[sp, #0x470]
7101b2fc90  ldr x8,[x0]
7101b2fc94  ldr x8,[x8, #0x30]
7101b2fc98  add x2,sp,#0x470
7101b2fc9c  blr x8
7101b2fca0  mov w0,#0x10
7101b2fca4  orr w1,wzr,#0x38
7101b2fca8  bl 0x710392e290
7101b2fcac  ldr x8,[sp, #0x98]
7101b2fcb0  stp x8,xzr,[x0, #0x10]
7101b2fcb4  adrp x8,0x7101b33000
7101b2fcb8  add x8,x8,#0xde0
7101b2fcbc  str x23,[x0]
7101b2fcc0  stp xzr,x8,[x0, #0x20]
7101b2fcc4  mov w8,#0x1
7101b2fcc8  str xzr,[x0, #0x30]
7101b2fccc  str x0,[sp, #0x198]
7101b2fcd0  adrp x1,0x7104339000
7101b2fcd4  add x1,x1,#0xdaf
7101b2fcd8  add x2,sp,#0x198
7101b2fcdc  str w8,[x0, #0x8]
7101b2fce0  mov x0,x19
7101b2fce4  bl 0x7103376af0
7101b2fce8  ldr x0,[sp, #0x198]
7101b2fcec  str xzr,[sp, #0x198]
7101b2fcf0  cbz x0,0x7101b2fd00
7101b2fcf4  ldr x8,[x0]
7101b2fcf8  ldr x8,[x8, #0x8]
7101b2fcfc  blr x8
7101b2fd00  ldr x19,[x22]
7101b2fd04  mov w0,#0x10
7101b2fd08  orr w1,wzr,#0x38
7101b2fd0c  bl 0x710392e290
7101b2fd10  cbnz x0,0x7101b2fd48
7101b2fd14  adrp x8,0x7105332000
7101b2fd18  ldr x0,[x8, #0xf00]
7101b2fd1c  orr w8,wzr,#0x38
7101b2fd20  str wzr,[sp, #0x610]
7101b2fd24  add x1,sp,#0x610
7101b2fd28  str x8,[sp, #0x470]
7101b2fd2c  ldr x8,[x0]
7101b2fd30  ldr x8,[x8, #0x30]
7101b2fd34  add x2,sp,#0x470
7101b2fd38  blr x8
7101b2fd3c  mov w0,#0x10
7101b2fd40  orr w1,wzr,#0x38
7101b2fd44  bl 0x710392e290
7101b2fd48  ldr x8,[sp, #0x98]
7101b2fd4c  stp x8,xzr,[x0, #0x10]
7101b2fd50  adrp x8,0x7101b33000
7101b2fd54  add x8,x8,#0xec0
7101b2fd58  str x23,[x0]
7101b2fd5c  stp xzr,x8,[x0, #0x20]
7101b2fd60  mov w8,#0x1
7101b2fd64  str xzr,[x0, #0x30]
7101b2fd68  str x0,[sp, #0x190]
7101b2fd6c  adrp x1,0x71042a2000
7101b2fd70  add x1,x1,#0xbac
7101b2fd74  add x2,sp,#0x190
7101b2fd78  str w8,[x0, #0x8]
7101b2fd7c  mov x0,x19
7101b2fd80  bl 0x7103376af0
7101b2fd84  ldr x0,[sp, #0x190]
7101b2fd88  str xzr,[sp, #0x190]
7101b2fd8c  cbz x0,0x7101b2fd9c
7101b2fd90  ldr x8,[x0]
7101b2fd94  ldr x8,[x8, #0x8]
7101b2fd98  blr x8
7101b2fd9c  ldr x19,[x22]
7101b2fda0  mov w0,#0x10
7101b2fda4  orr w1,wzr,#0x38
7101b2fda8  bl 0x710392e290
7101b2fdac  cbnz x0,0x7101b2fde4
7101b2fdb0  adrp x8,0x7105332000
7101b2fdb4  ldr x0,[x8, #0xf00]
7101b2fdb8  orr w8,wzr,#0x38
7101b2fdbc  str wzr,[sp, #0x610]
7101b2fdc0  add x1,sp,#0x610
7101b2fdc4  str x8,[sp, #0x470]
7101b2fdc8  ldr x8,[x0]
7101b2fdcc  ldr x8,[x8, #0x30]
7101b2fdd0  add x2,sp,#0x470
7101b2fdd4  blr x8
7101b2fdd8  mov w0,#0x10
7101b2fddc  orr w1,wzr,#0x38
7101b2fde0  bl 0x710392e290
7101b2fde4  ldr x8,[sp, #0x98]
7101b2fde8  stp x8,xzr,[x0, #0x10]
7101b2fdec  adrp x8,0x7101b34000
7101b2fdf0  add x8,x8,#0x10
7101b2fdf4  str x23,[x0]
7101b2fdf8  stp xzr,x8,[x0, #0x20]
7101b2fdfc  mov w8,#0x1
7101b2fe00  str xzr,[x0, #0x30]
7101b2fe04  str x0,[sp, #0x188]
7101b2fe08  adrp x1,0x71042e6000
7101b2fe0c  add x1,x1,#0xc80
7101b2fe10  add x2,sp,#0x188
7101b2fe14  str w8,[x0, #0x8]
7101b2fe18  mov x0,x19
7101b2fe1c  bl 0x7103376af0
7101b2fe20  ldr x0,[sp, #0x188]
7101b2fe24  str xzr,[sp, #0x188]
7101b2fe28  cbz x0,0x7101b2fe38
7101b2fe2c  ldr x8,[x0]
7101b2fe30  ldr x8,[x8, #0x8]
7101b2fe34  blr x8
7101b2fe38  ldr x19,[x22]
7101b2fe3c  mov w0,#0x10
7101b2fe40  orr w1,wzr,#0x38
7101b2fe44  bl 0x710392e290
7101b2fe48  cbnz x0,0x7101b2fe80
7101b2fe4c  adrp x8,0x7105332000
7101b2fe50  ldr x0,[x8, #0xf00]
7101b2fe54  orr w8,wzr,#0x38
7101b2fe58  str wzr,[sp, #0x610]
7101b2fe5c  add x1,sp,#0x610
7101b2fe60  str x8,[sp, #0x470]
7101b2fe64  ldr x8,[x0]
7101b2fe68  ldr x8,[x8, #0x30]
7101b2fe6c  add x2,sp,#0x470
7101b2fe70  blr x8
7101b2fe74  mov w0,#0x10
7101b2fe78  orr w1,wzr,#0x38
7101b2fe7c  bl 0x710392e290
7101b2fe80  ldr x8,[sp, #0x98]
7101b2fe84  stp x8,xzr,[x0, #0x10]
7101b2fe88  adrp x8,0x7101b34000
7101b2fe8c  add x8,x8,#0xf0
7101b2fe90  str x23,[x0]
7101b2fe94  stp xzr,x8,[x0, #0x20]
7101b2fe98  mov w8,#0x1
7101b2fe9c  str xzr,[x0, #0x30]
7101b2fea0  str x0,[sp, #0x180]
7101b2fea4  adrp x1,0x710425e000
7101b2fea8  add x1,x1,#0xf39
7101b2feac  add x2,sp,#0x180
7101b2feb0  str w8,[x0, #0x8]
7101b2feb4  mov x0,x19
7101b2feb8  bl 0x7103376af0
7101b2febc  ldr x0,[sp, #0x180]
7101b2fec0  str xzr,[sp, #0x180]
7101b2fec4  cbz x0,0x7101b2fed4
7101b2fec8  ldr x8,[x0]
7101b2fecc  ldr x8,[x8, #0x8]
7101b2fed0  blr x8
7101b2fed4  ldr x19,[x22]
7101b2fed8  mov w0,#0x10
7101b2fedc  orr w1,wzr,#0x38
7101b2fee0  bl 0x710392e290
7101b2fee4  cbnz x0,0x7101b2ff1c
7101b2fee8  adrp x8,0x7105332000
7101b2feec  ldr x0,[x8, #0xf00]
7101b2fef0  orr w8,wzr,#0x38
7101b2fef4  str wzr,[sp, #0x610]
7101b2fef8  add x1,sp,#0x610
7101b2fefc  str x8,[sp, #0x470]
7101b2ff00  ldr x8,[x0]
7101b2ff04  ldr x8,[x8, #0x30]
7101b2ff08  add x2,sp,#0x470
7101b2ff0c  blr x8
7101b2ff10  mov w0,#0x10
7101b2ff14  orr w1,wzr,#0x38
7101b2ff18  bl 0x710392e290
7101b2ff1c  ldr x8,[sp, #0x98]
7101b2ff20  stp x8,xzr,[x0, #0x10]
7101b2ff24  adrp x8,0x7101b34000
7101b2ff28  add x8,x8,#0x1c0
7101b2ff2c  str x23,[x0]
7101b2ff30  stp xzr,x8,[x0, #0x20]
7101b2ff34  mov w8,#0x1
7101b2ff38  str xzr,[x0, #0x30]
7101b2ff3c  str x0,[sp, #0x178]
7101b2ff40  adrp x1,0x7104454000
7101b2ff44  add x1,x1,#0x6d5
7101b2ff48  add x2,sp,#0x178
7101b2ff4c  str w8,[x0, #0x8]
7101b2ff50  mov x0,x19
7101b2ff54  bl 0x7103376af0
7101b2ff58  ldr x0,[sp, #0x178]
7101b2ff5c  str xzr,[sp, #0x178]
7101b2ff60  cbz x0,0x7101b2ff70
7101b2ff64  ldr x8,[x0]
7101b2ff68  ldr x8,[x8, #0x8]
7101b2ff6c  blr x8
7101b2ff70  ldr x19,[x22]
7101b2ff74  mov w0,#0x10
7101b2ff78  orr w1,wzr,#0x38
7101b2ff7c  bl 0x710392e290
7101b2ff80  cbnz x0,0x7101b2ffb8
7101b2ff84  adrp x8,0x7105332000
7101b2ff88  ldr x0,[x8, #0xf00]
7101b2ff8c  orr w8,wzr,#0x38
7101b2ff90  str wzr,[sp, #0x610]
7101b2ff94  add x1,sp,#0x610
7101b2ff98  str x8,[sp, #0x470]
7101b2ff9c  ldr x8,[x0]
7101b2ffa0  ldr x8,[x8, #0x30]
7101b2ffa4  add x2,sp,#0x470
7101b2ffa8  blr x8
7101b2ffac  mov w0,#0x10
7101b2ffb0  orr w1,wzr,#0x38
7101b2ffb4  bl 0x710392e290
7101b2ffb8  ldr x8,[sp, #0x98]
7101b2ffbc  stp x8,xzr,[x0, #0x10]
7101b2ffc0  adrp x8,0x7101b34000
7101b2ffc4  add x8,x8,#0x2b0
7101b2ffc8  str x20,[x0]
7101b2ffcc  stp xzr,x8,[x0, #0x20]
7101b2ffd0  mov w8,#0x1
7101b2ffd4  str xzr,[x0, #0x30]
7101b2ffd8  str x0,[sp, #0x170]
7101b2ffdc  adrp x1,0x710439d000
7101b2ffe0  add x1,x1,#0x60
7101b2ffe4  add x2,sp,#0x170
7101b2ffe8  str w8,[x0, #0x8]
7101b2ffec  mov x0,x19
7101b2fff0  bl 0x7103376af0
7101b2fff4  ldr x0,[sp, #0x170]
7101b2fff8  str xzr,[sp, #0x170]
7101b2fffc  cbz x0,0x7101b3000c
7101b30000  ldr x8,[x0]
7101b30004  ldr x8,[x8, #0x8]
7101b30008  blr x8
7101b3000c  ldr x19,[x22]
7101b30010  mov w1,#0x28
7101b30014  mov w0,#0x10
7101b30018  bl 0x710392e290
7101b3001c  cbnz x0,0x7101b30054
7101b30020  adrp x8,0x7105332000
7101b30024  ldr x0,[x8, #0xf00]
7101b30028  mov w21,#0x28
7101b3002c  str wzr,[sp, #0x610]
7101b30030  str x21,[sp, #0x470]
7101b30034  ldr x8,[x0]
7101b30038  ldr x8,[x8, #0x30]
7101b3003c  add x1,sp,#0x610
7101b30040  add x2,sp,#0x470
7101b30044  blr x8
7101b30048  mov w0,#0x10
7101b3004c  mov x1,x21
7101b30050  bl 0x710392e290
7101b30054  ldr x9,[sp, #0x98]
7101b30058  adrp x8,0x7101b34000
7101b3005c  add x8,x8,#0x4f0
7101b30060  str x26,[x0]
7101b30064  str xzr,[x0, #0x20]
7101b30068  str wzr,[x0, #0x8]
7101b3006c  stp x9,x8,[x0, #0x10]
7101b30070  str x0,[sp, #0x168]
7101b30074  adrp x1,0x710434a000
7101b30078  add x1,x1,#0x283
7101b3007c  add x2,sp,#0x168
7101b30080  mov x0,x19
7101b30084  bl 0x7103376af0
7101b30088  ldr x0,[sp, #0x168]
7101b3008c  str xzr,[sp, #0x168]
7101b30090  cbz x0,0x7101b300a0
7101b30094  ldr x8,[x0]
7101b30098  ldr x8,[x8, #0x8]
7101b3009c  blr x8
7101b300a0  ldr x19,[x22]
7101b300a4  mov w0,#0x10
7101b300a8  orr w1,wzr,#0x38
7101b300ac  bl 0x710392e290
7101b300b0  cbnz x0,0x7101b300e8
7101b300b4  adrp x8,0x7105332000
7101b300b8  ldr x0,[x8, #0xf00]
7101b300bc  orr w8,wzr,#0x38
7101b300c0  str wzr,[sp, #0x610]
7101b300c4  add x1,sp,#0x610
7101b300c8  str x8,[sp, #0x470]
7101b300cc  ldr x8,[x0]
7101b300d0  ldr x8,[x8, #0x30]
7101b300d4  add x2,sp,#0x470
7101b300d8  blr x8
7101b300dc  mov w0,#0x10
7101b300e0  orr w1,wzr,#0x38
7101b300e4  bl 0x710392e290
7101b300e8  ldr x9,[sp, #0x98]
7101b300ec  adrp x8,0x71050aa000
7101b300f0  add x8,x8,#0xac0
7101b300f4  str x8,[x0]
7101b300f8  adrp x8,0x7101b34000
7101b300fc  add x8,x8,#0x970
7101b30100  stp x8,xzr,[x0, #0x18]
7101b30104  mov w8,#0x1
7101b30108  stp xzr,xzr,[x0, #0x28]
7101b3010c  adrp x1,0x71043df000
7101b30110  add x1,x1,#0xd5e
7101b30114  str x9,[x0, #0x10]
7101b30118  add x2,sp,#0x160
7101b3011c  str w8,[x0, #0x8]
7101b30120  str x0,[sp, #0x160]
7101b30124  mov x0,x19
7101b30128  bl 0x7103376af0
7101b3012c  ldr x0,[sp, #0x160]
7101b30130  str xzr,[sp, #0x160]
7101b30134  cbz x0,0x7101b30144
7101b30138  ldr x8,[x0]
7101b3013c  ldr x8,[x8, #0x8]
7101b30140  blr x8
7101b30144  ldr x19,[x22]
7101b30148  mov w1,#0x28
7101b3014c  mov w0,#0x10
7101b30150  bl 0x710392e290
7101b30154  cbnz x0,0x7101b3018c
7101b30158  adrp x8,0x7105332000
7101b3015c  ldr x0,[x8, #0xf00]
7101b30160  mov w21,#0x28
7101b30164  str wzr,[sp, #0x610]
7101b30168  str x21,[sp, #0x470]
7101b3016c  ldr x8,[x0]
7101b30170  ldr x8,[x8, #0x30]
7101b30174  add x1,sp,#0x610
7101b30178  add x2,sp,#0x470
7101b3017c  blr x8
7101b30180  mov w0,#0x10
7101b30184  mov x1,x21
7101b30188  bl 0x710392e290
7101b3018c  ldr x9,[sp, #0x98]
7101b30190  adrp x8,0x7101b32000
7101b30194  add x8,x8,#0x3a0
7101b30198  str x26,[x0]
7101b3019c  str xzr,[x0, #0x20]
7101b301a0  str wzr,[x0, #0x8]
7101b301a4  stp x9,x8,[x0, #0x10]
7101b301a8  str x0,[sp, #0x158]
7101b301ac  adrp x1,0x7104443000
7101b301b0  add x1,x1,#0x254
7101b301b4  add x2,sp,#0x158
7101b301b8  mov x0,x19
7101b301bc  bl 0x7103376af0
7101b301c0  ldr x0,[sp, #0x158]
7101b301c4  str xzr,[sp, #0x158]
7101b301c8  cbz x0,0x7101b301d8
7101b301cc  ldr x8,[x0]
7101b301d0  ldr x8,[x8, #0x8]
7101b301d4  blr x8
7101b301d8  ldr x19,[x22]
7101b301dc  mov w1,#0x28
7101b301e0  mov w0,#0x10
7101b301e4  bl 0x710392e290
7101b301e8  cbnz x0,0x7101b30220
7101b301ec  adrp x8,0x7105332000
7101b301f0  ldr x0,[x8, #0xf00]
7101b301f4  mov w21,#0x28
7101b301f8  str wzr,[sp, #0x610]
7101b301fc  str x21,[sp, #0x470]
7101b30200  ldr x8,[x0]
7101b30204  ldr x8,[x8, #0x30]
7101b30208  add x1,sp,#0x610
7101b3020c  add x2,sp,#0x470
7101b30210  blr x8
7101b30214  mov w0,#0x10
7101b30218  mov x1,x21
7101b3021c  bl 0x710392e290
7101b30220  ldr x9,[sp, #0x98]
7101b30224  adrp x8,0x7101b35000
7101b30228  add x8,x8,#0xf0
7101b3022c  str x28,[x0]
7101b30230  str xzr,[x0, #0x20]
7101b30234  str wzr,[x0, #0x8]
7101b30238  stp x9,x8,[x0, #0x10]
7101b3023c  str x0,[sp, #0x150]
7101b30240  adrp x1,0x71042e6000
7101b30244  add x1,x1,#0xc95
7101b30248  add x2,sp,#0x150
7101b3024c  mov x0,x19
7101b30250  bl 0x7103376af0
7101b30254  ldr x0,[sp, #0x150]
7101b30258  str xzr,[sp, #0x150]
7101b3025c  cbz x0,0x7101b3026c
7101b30260  ldr x8,[x0]
7101b30264  ldr x8,[x8, #0x8]
7101b30268  blr x8
7101b3026c  ldr x19,[x22]
7101b30270  mov w0,#0x10
7101b30274  orr w1,wzr,#0x38
7101b30278  bl 0x710392e290
7101b3027c  adrp x28,0x7105332000
7101b30280  cbnz x0,0x7101b302b4
7101b30284  ldr x0,[x28, #0xf00]
7101b30288  orr w8,wzr,#0x38
7101b3028c  str wzr,[sp, #0x610]
7101b30290  str x8,[sp, #0x470]
7101b30294  ldr x8,[x0]
7101b30298  ldr x8,[x8, #0x30]
7101b3029c  add x1,sp,#0x610
7101b302a0  add x2,sp,#0x470
7101b302a4  blr x8
7101b302a8  mov w0,#0x10
7101b302ac  orr w1,wzr,#0x38
7101b302b0  bl 0x710392e290
7101b302b4  ldr x9,[sp, #0x98]
7101b302b8  adrp x8,0x7101b35000
7101b302bc  add x8,x8,#0xcf0
7101b302c0  stp x8,xzr,[x0, #0x18]
7101b302c4  mov w8,#0x1
7101b302c8  str x23,[x0]
7101b302cc  stp xzr,xzr,[x0, #0x28]
7101b302d0  adrp x1,0x710439d000
7101b302d4  add x1,x1,#0x7a
7101b302d8  add x2,sp,#0x148
7101b302dc  str x9,[x0, #0x10]
7101b302e0  str w8,[x0, #0x8]
7101b302e4  str x0,[sp, #0x148]
7101b302e8  mov x0,x19
7101b302ec  bl 0x7103376af0
7101b302f0  ldr x0,[sp, #0x148]
7101b302f4  str xzr,[sp, #0x148]
7101b302f8  cbz x0,0x7101b30308
7101b302fc  ldr x8,[x0]
7101b30300  ldr x8,[x8, #0x8]
7101b30304  blr x8
7101b30308  ldr x19,[x22]
7101b3030c  mov w0,#0x10
7101b30310  orr w1,wzr,#0x38
7101b30314  bl 0x710392e290
7101b30318  cbnz x0,0x7101b3034c
7101b3031c  ldr x0,[x28, #0xf00]
7101b30320  orr w8,wzr,#0x38
7101b30324  str wzr,[sp, #0x610]
7101b30328  str x8,[sp, #0x470]
7101b3032c  ldr x8,[x0]
7101b30330  ldr x8,[x8, #0x30]
7101b30334  add x1,sp,#0x610
7101b30338  add x2,sp,#0x470
7101b3033c  blr x8
7101b30340  mov w0,#0x10
7101b30344  orr w1,wzr,#0x38
7101b30348  bl 0x710392e290
7101b3034c  ldr x9,[sp, #0x98]
7101b30350  adrp x8,0x7101b35000
7101b30354  add x8,x8,#0xdd0
7101b30358  str x24,[x0]
7101b3035c  stp xzr,xzr,[x0, #0x28]
7101b30360  str wzr,[x0, #0x8]
7101b30364  adrp x1,0x710425e000
7101b30368  add x1,x1,#0xf4f
7101b3036c  stp x8,xzr,[x0, #0x18]
7101b30370  add x2,sp,#0x140
7101b30374  str x9,[x0, #0x10]
7101b30378  str x0,[sp, #0x140]
7101b3037c  mov x0,x19
7101b30380  bl 0x7103376af0
7101b30384  ldr x0,[sp, #0x140]
7101b30388  str xzr,[sp, #0x140]
7101b3038c  cbz x0,0x7101b3039c
7101b30390  ldr x8,[x0]
7101b30394  ldr x8,[x8, #0x8]
7101b30398  blr x8
7101b3039c  ldr x19,[x22]
7101b303a0  mov w1,#0x28
7101b303a4  mov w0,#0x10
7101b303a8  bl 0x710392e290
7101b303ac  cbnz x0,0x7101b303e0
7101b303b0  ldr x0,[x28, #0xf00]
7101b303b4  mov w21,#0x28
7101b303b8  str wzr,[sp, #0x610]
7101b303bc  str x21,[sp, #0x470]
7101b303c0  ldr x8,[x0]
7101b303c4  ldr x8,[x8, #0x30]
7101b303c8  add x1,sp,#0x610
7101b303cc  add x2,sp,#0x470
7101b303d0  blr x8
7101b303d4  mov w0,#0x10
7101b303d8  mov x1,x21
7101b303dc  bl 0x710392e290
7101b303e0  adrp x9,0x71050aa000
7101b303e4  add x9,x9,#0x908
7101b303e8  str x9,[x0]
7101b303ec  ldr x9,[sp, #0x98]
7101b303f0  adrp x8,0x7101b36000
7101b303f4  add x8,x8,#0x30
7101b303f8  stp x9,x8,[x0, #0x10]
7101b303fc  str xzr,[x0, #0x20]
7101b30400  str wzr,[x0, #0x8]
7101b30404  str x0,[sp, #0x138]
7101b30408  adrp x1,0x71042c4000
7101b3040c  add x1,x1,#0xa07
7101b30410  add x2,sp,#0x138
7101b30414  mov x0,x19
7101b30418  bl 0x7103376af0
7101b3041c  ldr x0,[sp, #0x138]
7101b30420  str xzr,[sp, #0x138]
7101b30424  cbz x0,0x7101b30434
7101b30428  ldr x8,[x0]
7101b3042c  ldr x8,[x8, #0x8]
7101b30430  blr x8
7101b30434  ldr x19,[x22]
7101b30438  mov w0,#0x10
7101b3043c  orr w1,wzr,#0x38
7101b30440  bl 0x710392e290
7101b30444  cbnz x0,0x7101b30478
7101b30448  ldr x0,[x28, #0xf00]
7101b3044c  orr w8,wzr,#0x38
7101b30450  str wzr,[sp, #0x610]
7101b30454  str x8,[sp, #0x470]
7101b30458  ldr x8,[x0]
7101b3045c  ldr x8,[x8, #0x30]
7101b30460  add x1,sp,#0x610
7101b30464  add x2,sp,#0x470
7101b30468  blr x8
7101b3046c  mov w0,#0x10
7101b30470  orr w1,wzr,#0x38
7101b30474  bl 0x710392e290
7101b30478  ldr x9,[sp, #0x98]
7101b3047c  adrp x8,0x7101b36000
7101b30480  add x8,x8,#0x280
7101b30484  stp x8,xzr,[x0, #0x18]
7101b30488  mov w8,#0x1
7101b3048c  str x23,[x0]
7101b30490  stp xzr,xzr,[x0, #0x28]
7101b30494  adrp x1,0x7104349000
7101b30498  add x1,x1,#0xf8b
7101b3049c  add x2,sp,#0x130
7101b304a0  str x9,[x0, #0x10]
7101b304a4  str w8,[x0, #0x8]
7101b304a8  str x0,[sp, #0x130]
7101b304ac  mov x0,x19
7101b304b0  bl 0x7103376af0
7101b304b4  ldr x0,[sp, #0x130]
7101b304b8  str xzr,[sp, #0x130]
7101b304bc  cbz x0,0x7101b304cc
7101b304c0  ldr x8,[x0]
7101b304c4  ldr x8,[x8, #0x8]
7101b304c8  blr x8
7101b304cc  ldr x19,[x22]
7101b304d0  mov w0,#0x10
7101b304d4  orr w1,wzr,#0x38
7101b304d8  bl 0x710392e290
7101b304dc  cbnz x0,0x7101b30510
7101b304e0  ldr x0,[x28, #0xf00]
7101b304e4  orr w8,wzr,#0x38
7101b304e8  str wzr,[sp, #0x610]
7101b304ec  str x8,[sp, #0x470]
7101b304f0  ldr x8,[x0]
7101b304f4  ldr x8,[x8, #0x30]
7101b304f8  add x1,sp,#0x610
7101b304fc  add x2,sp,#0x470
7101b30500  blr x8
7101b30504  mov w0,#0x10
7101b30508  orr w1,wzr,#0x38
7101b3050c  bl 0x710392e290
7101b30510  ldr x8,[sp, #0x98]
7101b30514  stp x8,xzr,[x0, #0x10]
7101b30518  adrp x8,0x7101b36000
7101b3051c  add x8,x8,#0x310
7101b30520  str x27,[x0]
7101b30524  stp xzr,x8,[x0, #0x20]
7101b30528  mov w8,#0x1
7101b3052c  str xzr,[x0, #0x30]
7101b30530  str x0,[sp, #0x128]
7101b30534  adrp x1,0x710425e000
7101b30538  add x1,x1,#0xf6d
7101b3053c  add x2,sp,#0x128
7101b30540  str w8,[x0, #0x8]
7101b30544  mov x0,x19
7101b30548  bl 0x7103376af0
7101b3054c  ldr x0,[sp, #0x128]
7101b30550  str xzr,[sp, #0x128]
7101b30554  cbz x0,0x7101b30564
7101b30558  ldr x8,[x0]
7101b3055c  ldr x8,[x8, #0x8]
7101b30560  blr x8
7101b30564  ldr x19,[x22]
7101b30568  mov w0,#0x10
7101b3056c  orr w1,wzr,#0x38
7101b30570  bl 0x710392e290
7101b30574  cbnz x0,0x7101b305a8
7101b30578  ldr x0,[x28, #0xf00]
7101b3057c  orr w8,wzr,#0x38
7101b30580  str wzr,[sp, #0x610]
7101b30584  str x8,[sp, #0x470]
7101b30588  ldr x8,[x0]
7101b3058c  ldr x8,[x8, #0x30]
7101b30590  add x1,sp,#0x610
7101b30594  add x2,sp,#0x470
7101b30598  blr x8
7101b3059c  mov w0,#0x10
7101b305a0  orr w1,wzr,#0x38
7101b305a4  bl 0x710392e290
7101b305a8  ldr x8,[sp, #0x98]
7101b305ac  stp x8,xzr,[x0, #0x10]
7101b305b0  adrp x8,0x7101b36000
7101b305b4  add x8,x8,#0x320
7101b305b8  str x27,[x0]
7101b305bc  stp xzr,x8,[x0, #0x20]
7101b305c0  mov w8,#0x1
7101b305c4  str xzr,[x0, #0x30]
7101b305c8  str x0,[sp, #0x120]
7101b305cc  adrp x1,0x7104291000
7101b305d0  add x1,x1,#0x83c
7101b305d4  add x2,sp,#0x120
7101b305d8  str w8,[x0, #0x8]
7101b305dc  mov x0,x19
7101b305e0  bl 0x7103376af0
7101b305e4  ldr x0,[sp, #0x120]
7101b305e8  str xzr,[sp, #0x120]
7101b305ec  cbz x0,0x7101b305fc
7101b305f0  ldr x8,[x0]
7101b305f4  ldr x8,[x8, #0x8]
7101b305f8  blr x8
7101b305fc  ldr x19,[x22]
7101b30600  mov w0,#0x10
7101b30604  orr w1,wzr,#0x38
7101b30608  bl 0x710392e290
7101b3060c  cbnz x0,0x7101b30640
7101b30610  ldr x0,[x28, #0xf00]
7101b30614  orr w8,wzr,#0x38
7101b30618  str wzr,[sp, #0x610]
7101b3061c  str x8,[sp, #0x470]
7101b30620  ldr x8,[x0]
7101b30624  ldr x8,[x8, #0x30]
7101b30628  add x1,sp,#0x610
7101b3062c  add x2,sp,#0x470
7101b30630  blr x8
7101b30634  mov w0,#0x10
7101b30638  orr w1,wzr,#0x38
7101b3063c  bl 0x710392e290
7101b30640  ldr x8,[sp, #0x98]
7101b30644  stp x8,xzr,[x0, #0x10]
7101b30648  adrp x8,0x7101b36000
7101b3064c  add x8,x8,#0x330
7101b30650  str x20,[x0]
7101b30654  stp xzr,x8,[x0, #0x20]
7101b30658  mov w8,#0x1
7101b3065c  str xzr,[x0, #0x30]
7101b30660  str x0,[sp, #0x118]
7101b30664  adrp x1,0x7104412000
7101b30668  add x1,x1,#0x5a7
7101b3066c  add x2,sp,#0x118
7101b30670  str w8,[x0, #0x8]
7101b30674  mov x0,x19
7101b30678  bl 0x7103376af0
7101b3067c  ldr x0,[sp, #0x118]
7101b30680  str xzr,[sp, #0x118]
7101b30684  cbz x0,0x7101b30694
7101b30688  ldr x8,[x0]
7101b3068c  ldr x8,[x8, #0x8]
7101b30690  blr x8
7101b30694  ldr x19,[x22]
7101b30698  mov w1,#0x28
7101b3069c  mov w0,#0x10
7101b306a0  bl 0x710392e290
7101b306a4  cbnz x0,0x7101b306d8
7101b306a8  ldr x0,[x28, #0xf00]
7101b306ac  mov w21,#0x28
7101b306b0  str wzr,[sp, #0x610]
7101b306b4  str x21,[sp, #0x470]
7101b306b8  ldr x8,[x0]
7101b306bc  ldr x8,[x8, #0x30]
7101b306c0  add x1,sp,#0x610
7101b306c4  add x2,sp,#0x470
7101b306c8  blr x8
7101b306cc  mov w0,#0x10
7101b306d0  mov x1,x21
7101b306d4  bl 0x710392e290
7101b306d8  ldr x9,[sp, #0x98]
7101b306dc  adrp x8,0x7101b36000
7101b306e0  add x8,x8,#0x3a0
7101b306e4  str x26,[x0]
7101b306e8  str xzr,[x0, #0x20]
7101b306ec  str wzr,[x0, #0x8]
7101b306f0  stp x9,x8,[x0, #0x10]
7101b306f4  str x0,[sp, #0x110]
7101b306f8  adrp x1,0x71043ad000
7101b306fc  add x1,x1,#0x3b4
7101b30700  add x2,sp,#0x110
7101b30704  mov x0,x19
7101b30708  bl 0x7103376af0
7101b3070c  ldr x0,[sp, #0x110]
7101b30710  str xzr,[sp, #0x110]
7101b30714  cbz x0,0x7101b30724
7101b30718  ldr x8,[x0]
7101b3071c  ldr x8,[x8, #0x8]
7101b30720  blr x8
7101b30724  ldr x19,[x22]
7101b30728  mov w0,#0x10
7101b3072c  orr w1,wzr,#0x38
7101b30730  bl 0x710392e290
7101b30734  cbnz x0,0x7101b30768
7101b30738  ldr x0,[x28, #0xf00]
7101b3073c  orr w8,wzr,#0x38
7101b30740  str wzr,[sp, #0x610]
7101b30744  str x8,[sp, #0x470]
7101b30748  ldr x8,[x0]
7101b3074c  ldr x8,[x8, #0x30]
7101b30750  add x1,sp,#0x610
7101b30754  add x2,sp,#0x470
7101b30758  blr x8
7101b3075c  mov w0,#0x10
7101b30760  orr w1,wzr,#0x38
7101b30764  bl 0x710392e290
7101b30768  ldr x9,[sp, #0x98]
7101b3076c  adrp x8,0x7101b36000
7101b30770  add x8,x8,#0x4d0
7101b30774  stp x8,xzr,[x0, #0x18]
7101b30778  mov w8,#0x1
7101b3077c  str x23,[x0]
7101b30780  stp xzr,xzr,[x0, #0x28]
7101b30784  adrp x1,0x71043ad000
7101b30788  add x1,x1,#0x3d5
7101b3078c  add x2,sp,#0x108
7101b30790  str x9,[x0, #0x10]
7101b30794  str w8,[x0, #0x8]
7101b30798  str x0,[sp, #0x108]
7101b3079c  mov x0,x19
7101b307a0  bl 0x7103376af0
7101b307a4  ldr x0,[sp, #0x108]
7101b307a8  str xzr,[sp, #0x108]
7101b307ac  cbz x0,0x7101b307bc
7101b307b0  ldr x8,[x0]
7101b307b4  ldr x8,[x8, #0x8]
7101b307b8  blr x8
7101b307bc  ldr x19,[x22]
7101b307c0  mov w0,#0x10
7101b307c4  orr w1,wzr,#0x38
7101b307c8  bl 0x710392e290
7101b307cc  cbnz x0,0x7101b30800
7101b307d0  ldr x0,[x28, #0xf00]
7101b307d4  orr w8,wzr,#0x38
7101b307d8  str wzr,[sp, #0x610]
7101b307dc  str x8,[sp, #0x470]
7101b307e0  ldr x8,[x0]
7101b307e4  ldr x8,[x8, #0x30]
7101b307e8  add x1,sp,#0x610
7101b307ec  add x2,sp,#0x470
7101b307f0  blr x8
7101b307f4  mov w0,#0x10
7101b307f8  orr w1,wzr,#0x38
7101b307fc  bl 0x710392e290
7101b30800  ldr x9,[sp, #0x98]
7101b30804  adrp x8,0x7101b36000
7101b30808  add x8,x8,#0x660
7101b3080c  stp x8,xzr,[x0, #0x18]
7101b30810  mov w8,#0x1
7101b30814  str x20,[x0]
7101b30818  stp xzr,xzr,[x0, #0x28]
7101b3081c  adrp x1,0x710437c000
7101b30820  add x1,x1,#0x16b
7101b30824  add x2,sp,#0x100
7101b30828  str x9,[x0, #0x10]
7101b3082c  str w8,[x0, #0x8]
7101b30830  str x0,[sp, #0x100]
7101b30834  mov x0,x19
7101b30838  bl 0x7103376af0
7101b3083c  ldr x0,[sp, #0x100]
7101b30840  str xzr,[sp, #0x100]
7101b30844  cbz x0,0x7101b30854
7101b30848  ldr x8,[x0]
7101b3084c  ldr x8,[x8, #0x8]
7101b30850  blr x8
7101b30854  ldr x19,[x22]
7101b30858  mov w1,#0x28
7101b3085c  mov w0,#0x10
7101b30860  bl 0x710392e290
7101b30864  cbnz x0,0x7101b30898
7101b30868  ldr x0,[x28, #0xf00]
7101b3086c  mov w21,#0x28
7101b30870  str wzr,[sp, #0x610]
7101b30874  str x21,[sp, #0x470]
7101b30878  ldr x8,[x0]
7101b3087c  ldr x8,[x8, #0x30]
7101b30880  add x1,sp,#0x610
7101b30884  add x2,sp,#0x470
7101b30888  blr x8
7101b3088c  mov w0,#0x10
7101b30890  mov x1,x21
7101b30894  bl 0x710392e290
7101b30898  ldr x9,[sp, #0x98]
7101b3089c  adrp x8,0x7101b36000
7101b308a0  add x8,x8,#0x980
7101b308a4  str x25,[x0]
7101b308a8  str xzr,[x0, #0x20]
7101b308ac  str wzr,[x0, #0x8]
7101b308b0  stp x9,x8,[x0, #0x10]
7101b308b4  str x0,[sp, #0xf8]
7101b308b8  adrp x1,0x71042b3000
7101b308bc  add x1,x1,#0xf91
7101b308c0  add x2,sp,#0xf8
7101b308c4  mov x0,x19
7101b308c8  bl 0x7103376af0
7101b308cc  ldr x0,[sp, #0xf8]
7101b308d0  str xzr,[sp, #0xf8]
7101b308d4  cbz x0,0x7101b308e4
7101b308d8  ldr x8,[x0]
7101b308dc  ldr x8,[x8, #0x8]
7101b308e0  blr x8
7101b308e4  ldr x19,[x22]
7101b308e8  mov w0,#0x10
7101b308ec  orr w1,wzr,#0x38
7101b308f0  bl 0x710392e290
7101b308f4  cbnz x0,0x7101b30928
7101b308f8  ldr x0,[x28, #0xf00]
7101b308fc  orr w8,wzr,#0x38
7101b30900  str wzr,[sp, #0x610]
7101b30904  str x8,[sp, #0x470]
7101b30908  ldr x8,[x0]
7101b3090c  ldr x8,[x8, #0x30]
7101b30910  add x1,sp,#0x610
7101b30914  add x2,sp,#0x470
7101b30918  blr x8
7101b3091c  mov w0,#0x10
7101b30920  orr w1,wzr,#0x38
7101b30924  bl 0x710392e290
7101b30928  ldr x8,[sp, #0x98]
7101b3092c  stp x8,xzr,[x0, #0x10]
7101b30930  adrp x8,0x7101b36000
7101b30934  add x8,x8,#0x9f0
7101b30938  str x27,[x0]
7101b3093c  stp xzr,x8,[x0, #0x20]
7101b30940  mov w8,#0x1
7101b30944  str xzr,[x0, #0x30]
7101b30948  str x0,[sp, #0xf0]
7101b3094c  adrp x1,0x710438c000
7101b30950  add x1,x1,#0x5a1
7101b30954  add x2,sp,#0xf0
7101b30958  str w8,[x0, #0x8]
7101b3095c  mov x0,x19
7101b30960  bl 0x7103376af0
7101b30964  ldr x0,[sp, #0xf0]
7101b30968  str xzr,[sp, #0xf0]
7101b3096c  cbz x0,0x7101b3097c
7101b30970  ldr x8,[x0]
7101b30974  ldr x8,[x8, #0x8]
7101b30978  blr x8
7101b3097c  ldr x19,[x22]
7101b30980  mov w0,#0x10
7101b30984  orr w1,wzr,#0x38
7101b30988  bl 0x710392e290
7101b3098c  cbnz x0,0x7101b309c0
7101b30990  ldr x0,[x28, #0xf00]
7101b30994  orr w8,wzr,#0x38
7101b30998  str wzr,[sp, #0x610]
7101b3099c  str x8,[sp, #0x470]
7101b309a0  ldr x8,[x0]
7101b309a4  ldr x8,[x8, #0x30]
7101b309a8  add x1,sp,#0x610
7101b309ac  add x2,sp,#0x470
7101b309b0  blr x8
7101b309b4  mov w0,#0x10
7101b309b8  orr w1,wzr,#0x38
7101b309bc  bl 0x710392e290
7101b309c0  ldr x26,[sp, #0x98]
7101b309c4  adrp x8,0x7101b36000
7101b309c8  add x8,x8,#0xad0
7101b309cc  stp x8,xzr,[x0, #0x18]
7101b309d0  mov w8,#0x1
7101b309d4  str x27,[x0]
7101b309d8  stp xzr,xzr,[x0, #0x28]
7101b309dc  adrp x1,0x7104464000
7101b309e0  add x1,x1,#0x2ba
7101b309e4  add x2,sp,#0xe8
7101b309e8  str x26,[x0, #0x10]
7101b309ec  str w8,[x0, #0x8]
7101b309f0  str x0,[sp, #0xe8]
7101b309f4  mov x0,x19
7101b309f8  bl 0x7103376af0
7101b309fc  ldr x0,[sp, #0xe8]
7101b30a00  str xzr,[sp, #0xe8]
7101b30a04  cbz x0,0x7101b30a14
7101b30a08  ldr x8,[x0]
7101b30a0c  ldr x8,[x8, #0x8]
7101b30a10  blr x8
7101b30a14  ldr x19,[x22]
7101b30a18  mov w1,#0x28
7101b30a1c  mov w0,#0x10
7101b30a20  bl 0x710392e290
7101b30a24  cbnz x0,0x7101b30a58
7101b30a28  ldr x0,[x28, #0xf00]
7101b30a2c  mov w21,#0x28
7101b30a30  str wzr,[sp, #0x610]
7101b30a34  str x21,[sp, #0x470]
7101b30a38  ldr x8,[x0]
7101b30a3c  ldr x8,[x8, #0x30]
7101b30a40  add x1,sp,#0x610
7101b30a44  add x2,sp,#0x470
7101b30a48  blr x8
7101b30a4c  mov w0,#0x10
7101b30a50  mov x1,x21
7101b30a54  bl 0x710392e290
7101b30a58  adrp x8,0x7101b36000
7101b30a5c  add x8,x8,#0xb20
7101b30a60  str x25,[x0]
7101b30a64  stp x26,x8,[x0, #0x10]
7101b30a68  adrp x1,0x7104338000
7101b30a6c  add x1,x1,#0xa2c
7101b30a70  str xzr,[x0, #0x20]
7101b30a74  add x2,sp,#0xe0
7101b30a78  str wzr,[x0, #0x8]
7101b30a7c  str x0,[sp, #0xe0]
7101b30a80  mov x0,x19
7101b30a84  bl 0x7103376af0
7101b30a88  ldr x0,[sp, #0xe0]
7101b30a8c  str xzr,[sp, #0xe0]
7101b30a90  cbz x0,0x7101b30aa0
7101b30a94  ldr x8,[x0]
7101b30a98  ldr x8,[x8, #0x8]
7101b30a9c  blr x8
7101b30aa0  ldr x19,[x22]
7101b30aa4  mov w0,#0x10
7101b30aa8  orr w1,wzr,#0x38
7101b30aac  bl 0x710392e290
7101b30ab0  cbnz x0,0x7101b30ae4
7101b30ab4  ldr x0,[x28, #0xf00]
7101b30ab8  orr w8,wzr,#0x38
7101b30abc  str wzr,[sp, #0x610]
7101b30ac0  str x8,[sp, #0x470]
7101b30ac4  ldr x8,[x0]
7101b30ac8  ldr x8,[x8, #0x30]
7101b30acc  add x1,sp,#0x610
7101b30ad0  add x2,sp,#0x470
7101b30ad4  blr x8
7101b30ad8  mov w0,#0x10
7101b30adc  orr w1,wzr,#0x38
7101b30ae0  bl 0x710392e290
7101b30ae4  adrp x8,0x7101b36000
7101b30ae8  add x8,x8,#0xc20
7101b30aec  str x24,[x0]
7101b30af0  stp xzr,xzr,[x0, #0x28]
7101b30af4  adrp x1,0x71042e6000
7101b30af8  add x1,x1,#0xcbe
7101b30afc  str x26,[x0, #0x10]
7101b30b00  add x2,sp,#0xd8
7101b30b04  stp x8,xzr,[x0, #0x18]
7101b30b08  str wzr,[x0, #0x8]
7101b30b0c  str x0,[sp, #0xd8]
7101b30b10  mov x0,x19
7101b30b14  bl 0x7103376af0
7101b30b18  ldr x0,[sp, #0xd8]
7101b30b1c  str xzr,[sp, #0xd8]
7101b30b20  cbz x0,0x7101b30b30
7101b30b24  ldr x8,[x0]
7101b30b28  ldr x8,[x8, #0x8]
7101b30b2c  blr x8
7101b30b30  ldr x19,[x22]
7101b30b34  mov w0,#0x10
7101b30b38  orr w1,wzr,#0x38
7101b30b3c  bl 0x710392e290
7101b30b40  cbnz x0,0x7101b30b74
7101b30b44  ldr x0,[x28, #0xf00]
7101b30b48  orr w8,wzr,#0x38
7101b30b4c  str wzr,[sp, #0x610]
7101b30b50  str x8,[sp, #0x470]
7101b30b54  ldr x8,[x0]
7101b30b58  ldr x8,[x8, #0x30]
7101b30b5c  add x1,sp,#0x610
7101b30b60  add x2,sp,#0x470
7101b30b64  blr x8
7101b30b68  mov w0,#0x10
7101b30b6c  orr w1,wzr,#0x38
7101b30b70  bl 0x710392e290
7101b30b74  adrp x8,0x7101b36000
7101b30b78  add x8,x8,#0xc30
7101b30b7c  str x24,[x0]
7101b30b80  stp xzr,xzr,[x0, #0x28]
7101b30b84  adrp x1,0x7104412000
7101b30b88  add x1,x1,#0x5c7
7101b30b8c  str x26,[x0, #0x10]
7101b30b90  add x2,sp,#0xd0
7101b30b94  stp x8,xzr,[x0, #0x18]
7101b30b98  str wzr,[x0, #0x8]
7101b30b9c  str x0,[sp, #0xd0]
7101b30ba0  mov x0,x19
7101b30ba4  bl 0x7103376af0
7101b30ba8  ldr x0,[sp, #0xd0]
7101b30bac  str xzr,[sp, #0xd0]
7101b30bb0  cbz x0,0x7101b30bc0
7101b30bb4  ldr x8,[x0]
7101b30bb8  ldr x8,[x8, #0x8]
7101b30bbc  blr x8
7101b30bc0  ldr x19,[x22]
7101b30bc4  mov w1,#0x28
7101b30bc8  mov w0,#0x10
7101b30bcc  bl 0x710392e290
7101b30bd0  cbnz x0,0x7101b30c04
7101b30bd4  ldr x0,[x28, #0xf00]
7101b30bd8  mov w21,#0x28
7101b30bdc  str wzr,[sp, #0x610]
7101b30be0  str x21,[sp, #0x470]
7101b30be4  ldr x8,[x0]
7101b30be8  ldr x8,[x8, #0x30]
7101b30bec  add x1,sp,#0x610
7101b30bf0  add x2,sp,#0x470
7101b30bf4  blr x8
7101b30bf8  mov w0,#0x10
7101b30bfc  mov x1,x21
7101b30c00  bl 0x710392e290
7101b30c04  adrp x8,0x71050aa000
7101b30c08  add x8,x8,#0xae8
7101b30c0c  adrp x9,0x7101b36000
7101b30c10  add x9,x9,#0xcb0
7101b30c14  str x8,[x0]
7101b30c18  str xzr,[x0, #0x20]
7101b30c1c  stp x26,x9,[x0, #0x10]
7101b30c20  adrp x1,0x710436b000
7101b30c24  add x1,x1,#0xf6d
7101b30c28  str wzr,[x0, #0x8]
7101b30c2c  add x2,sp,#0xc8
7101b30c30  str x0,[sp, #0xc8]
7101b30c34  mov x0,x19
7101b30c38  bl 0x7103376af0
7101b30c3c  ldr x0,[sp, #0xc8]
7101b30c40  str xzr,[sp, #0xc8]
7101b30c44  cbz x0,0x7101b30c54
7101b30c48  ldr x8,[x0]
7101b30c4c  ldr x8,[x8, #0x8]
7101b30c50  blr x8
7101b30c54  ldr x19,[x22]
7101b30c58  mov w0,#0x10
7101b30c5c  orr w1,wzr,#0x38
7101b30c60  bl 0x710392e290
7101b30c64  cbnz x0,0x7101b30c98
7101b30c68  ldr x0,[x28, #0xf00]
7101b30c6c  orr w8,wzr,#0x38
7101b30c70  str wzr,[sp, #0x610]
7101b30c74  str x8,[sp, #0x470]
7101b30c78  ldr x8,[x0]
7101b30c7c  ldr x8,[x8, #0x30]
7101b30c80  add x1,sp,#0x610
7101b30c84  add x2,sp,#0x470
7101b30c88  blr x8
7101b30c8c  mov w0,#0x10
7101b30c90  orr w1,wzr,#0x38
7101b30c94  bl 0x710392e290
7101b30c98  adrp x8,0x7101b36000
7101b30c9c  add x8,x8,#0xd50
7101b30ca0  str x23,[x0]
7101b30ca4  stp xzr,x8,[x0, #0x20]
7101b30ca8  mov w8,#0x1
7101b30cac  stp x26,xzr,[x0, #0x10]
7101b30cb0  adrp x1,0x710425e000
7101b30cb4  add x1,x1,#0xf8c
7101b30cb8  add x2,sp,#0xc0
7101b30cbc  str xzr,[x0, #0x30]
7101b30cc0  str w8,[x0, #0x8]
7101b30cc4  str x0,[sp, #0xc0]
7101b30cc8  mov x0,x19
7101b30ccc  bl 0x7103376af0
7101b30cd0  ldr x0,[sp, #0xc0]
7101b30cd4  str xzr,[sp, #0xc0]
7101b30cd8  cbz x0,0x7101b30ce8
7101b30cdc  ldr x8,[x0]
7101b30ce0  ldr x8,[x8, #0x8]
7101b30ce4  blr x8
7101b30ce8  ldr x19,[x22]
7101b30cec  mov w0,#0x10
7101b30cf0  orr w1,wzr,#0x38
7101b30cf4  bl 0x710392e290
7101b30cf8  ldr x20,[sp, #0x68]
7101b30cfc  cbnz x0,0x7101b30d30
7101b30d00  ldr x0,[x28, #0xf00]
7101b30d04  orr w8,wzr,#0x38
7101b30d08  str wzr,[sp, #0x610]
7101b30d0c  str x8,[sp, #0x470]
7101b30d10  ldr x8,[x0]
7101b30d14  ldr x8,[x8, #0x30]
7101b30d18  add x1,sp,#0x610
7101b30d1c  add x2,sp,#0x470
7101b30d20  blr x8
7101b30d24  mov w0,#0x10
7101b30d28  orr w1,wzr,#0x38
7101b30d2c  bl 0x710392e290
7101b30d30  adrp x8,0x7101b36000
7101b30d34  add x8,x8,#0xdf0
7101b30d38  str x24,[x0]
7101b30d3c  stp xzr,xzr,[x0, #0x28]
7101b30d40  adrp x1,0x710437c000
7101b30d44  add x1,x1,#0x17f
7101b30d48  str x26,[x0, #0x10]
7101b30d4c  add x2,sp,#0xb8
7101b30d50  stp x8,xzr,[x0, #0x18]
7101b30d54  str wzr,[x0, #0x8]
7101b30d58  str x0,[sp, #0xb8]
7101b30d5c  mov x0,x19
7101b30d60  bl 0x7103376af0
7101b30d64  ldr x0,[sp, #0xb8]
7101b30d68  str xzr,[sp, #0xb8]
7101b30d6c  cbz x0,0x7101b30d7c
7101b30d70  ldr x8,[x0]
7101b30d74  ldr x8,[x8, #0x8]
7101b30d78  blr x8
7101b30d7c  ldr x19,[x22]
7101b30d80  mov w0,#0x10
7101b30d84  orr w1,wzr,#0x38
7101b30d88  bl 0x710392e290
7101b30d8c  cbnz x0,0x7101b30dc0
7101b30d90  ldr x0,[x28, #0xf00]
7101b30d94  orr w8,wzr,#0x38
7101b30d98  str wzr,[sp, #0x610]
7101b30d9c  str x8,[sp, #0x470]
7101b30da0  ldr x8,[x0]
7101b30da4  ldr x8,[x8, #0x30]
7101b30da8  add x1,sp,#0x610
7101b30dac  add x2,sp,#0x470
7101b30db0  blr x8
7101b30db4  mov w0,#0x10
7101b30db8  orr w1,wzr,#0x38
7101b30dbc  bl 0x710392e290
7101b30dc0  adrp x8,0x7101b37000
7101b30dc4  add x8,x8,#0x2d0
7101b30dc8  str x24,[x0]
7101b30dcc  stp xzr,xzr,[x0, #0x28]
7101b30dd0  adrp x1,0x710426f000
7101b30dd4  add x1,x1,#0xc2c
7101b30dd8  str x26,[x0, #0x10]
7101b30ddc  add x2,sp,#0xb0
7101b30de0  stp x8,xzr,[x0, #0x18]
7101b30de4  str wzr,[x0, #0x8]
7101b30de8  str x0,[sp, #0xb0]
7101b30dec  mov x0,x19
7101b30df0  bl 0x7103376af0
7101b30df4  ldr x0,[sp, #0xb0]
7101b30df8  str xzr,[sp, #0xb0]
7101b30dfc  cbz x0,0x7101b30e0c
7101b30e00  ldr x8,[x0]
7101b30e04  ldr x8,[x8, #0x8]
7101b30e08  blr x8
7101b30e0c  ldr x19,[x22]
7101b30e10  mov w1,#0x28
7101b30e14  mov w0,#0x10
7101b30e18  bl 0x710392e290
7101b30e1c  cbnz x0,0x7101b30e50
7101b30e20  ldr x0,[x28, #0xf00]
7101b30e24  mov w21,#0x28
7101b30e28  str wzr,[sp, #0x610]
7101b30e2c  str x21,[sp, #0x470]
7101b30e30  ldr x8,[x0]
7101b30e34  ldr x8,[x8, #0x30]
7101b30e38  add x1,sp,#0x610
7101b30e3c  add x2,sp,#0x470
7101b30e40  blr x8
7101b30e44  mov w0,#0x10
7101b30e48  mov x1,x21
7101b30e4c  bl 0x710392e290
7101b30e50  adrp x8,0x7101b37000
7101b30e54  add x8,x8,#0x580
7101b30e58  str x25,[x0]
7101b30e5c  stp x26,x8,[x0, #0x10]
7101b30e60  adrp x1,0x71043ad000
7101b30e64  add x1,x1,#0x3f6
7101b30e68  str xzr,[x0, #0x20]
7101b30e6c  add x2,sp,#0xa8
7101b30e70  str wzr,[x0, #0x8]
7101b30e74  str x0,[sp, #0xa8]
7101b30e78  mov x0,x19
7101b30e7c  bl 0x7103376af0
7101b30e80  ldr x0,[sp, #0xa8]
7101b30e84  str xzr,[sp, #0xa8]
7101b30e88  cbz x0,0x7101b30e98
7101b30e8c  ldr x8,[x0]
7101b30e90  ldr x8,[x8, #0x8]
7101b30e94  blr x8
7101b30e98  ldr x19,[x22]
7101b30e9c  mov w1,#0x28
7101b30ea0  mov w0,#0x10
7101b30ea4  bl 0x710392e290
7101b30ea8  cbnz x0,0x7101b30edc
7101b30eac  ldr x0,[x28, #0xf00]
7101b30eb0  mov w21,#0x28
7101b30eb4  str wzr,[sp, #0x610]
7101b30eb8  str x21,[sp, #0x470]
7101b30ebc  ldr x8,[x0]
7101b30ec0  ldr x8,[x8, #0x30]
7101b30ec4  add x1,sp,#0x610
7101b30ec8  add x2,sp,#0x470
7101b30ecc  blr x8
7101b30ed0  mov w0,#0x10
7101b30ed4  mov x1,x21
7101b30ed8  bl 0x710392e290
7101b30edc  adrp x8,0x7101b37000
7101b30ee0  add x8,x8,#0x6a0
7101b30ee4  str x25,[x0]
7101b30ee8  stp x26,x8,[x0, #0x10]
7101b30eec  adrp x1,0x7104329000
7101b30ef0  add x1,x1,#0xc00
7101b30ef4  str xzr,[x0, #0x20]
7101b30ef8  add x2,sp,#0xa0
7101b30efc  str wzr,[x0, #0x8]
7101b30f00  str x0,[sp, #0xa0]
7101b30f04  mov x0,x19
7101b30f08  bl 0x7103376af0
7101b30f0c  ldr x0,[sp, #0xa0]
7101b30f10  str xzr,[sp, #0xa0]
7101b30f14  cbz x0,0x7101b30f24
7101b30f18  ldr x8,[x0]
7101b30f1c  ldr x8,[x8, #0x8]
7101b30f20  blr x8
7101b30f24  ldr x8,[x22]
7101b30f28  ldr x0,[x8]
7101b30f2c  cbz x0,0x7101b30ff0
7101b30f30  adrp x1,0x710426f000
7101b30f34  add x1,x1,#0xc45
7101b30f38  adrp x2,0x71042b2000
7101b30f3c  add x2,x2,#0xa84
7101b30f40  mov w3,#0xffffffff
7101b30f44  bl 0x7103375650
7101b30f48  ldr x8,[x22]
7101b30f4c  ldr x0,[x8]
7101b30f50  cbz x0,0x7101b30ff0
7101b30f54  adrp x1,0x710426f000
7101b30f58  add x1,x1,#0xc56
7101b30f5c  adrp x2,0x71042b2000
7101b30f60  add x2,x2,#0xa84
7101b30f64  orr w3,wzr,#0x3
7101b30f68  bl 0x7103375650
7101b30f6c  ldr x8,[x22]
7101b30f70  ldr x0,[x8]
7101b30f74  cbz x0,0x7101b30ff0
7101b30f78  ldr w3,[x26, #0x1d8]
7101b30f7c  adrp x1,0x710425e000
7101b30f80  add x1,x1,#0xfa8
7101b30f84  adrp x2,0x71042b2000
7101b30f88  add x2,x2,#0xa84
7101b30f8c  bl 0x7103375650
7101b30f90  ldr x8,[x26, #0x40]
7101b30f94  ldr x0,[x8]
7101b30f98  cbz x0,0x7101b30ff0
7101b30f9c  ldp x8,x9,[x26, #0x168]
7101b30fa0  sub x8,x9,x8
7101b30fa4  mov w9,#0xaaab
7101b30fa8  movk w9,#0xaaaa, LSL #16
7101b30fac  lsr x8,x8,#0x3
7101b30fb0  mul w3,w8,w9
7101b30fb4  adrp x1,0x710425f000
7101b30fb8  add x1,x1,#0x338
7101b30fbc  adrp x2,0x71042b2000
7101b30fc0  add x2,x2,#0xa84
7101b30fc4  bl 0x7103375650
7101b30fc8  ldr x8,[x26, #0x40]
7101b30fcc  ldr x0,[x8]
7101b30fd0  cbz x0,0x7101b30ff0
7101b30fd4  ldr w3,[x20, #0x40]
7101b30fd8  adrp x1,0x71043be000
7101b30fdc  add x1,x1,#0x325
7101b30fe0  adrp x2,0x71042b2000
7101b30fe4  add x2,x2,#0xa84
7101b30fe8  bl 0x7103375650
7101b30fec  ldr x8,[x22]
7101b30ff0  ldr w9,[x20, #0x70]
7101b30ff4  ldr x0,[x8]
7101b30ff8  cbz w9,0x7101b31018
7101b30ffc  cbz x0,0x7101b31034
7101b31000  add x3,x20,#0x74
7101b31004  adrp x1,0x7104329000
7101b31008  add x1,x1,#0xc1a
7101b3100c  adrp x2,0x71042d5000
7101b31010  add x2,x2,#0x20
7101b31014  b 0x7101b31030
7101b31018  cbz x0,0x7101b31034
7101b3101c  adrp x1,0x7104329000
7101b31020  add x1,x1,#0xc1a
7101b31024  adrp x2,0x71042d5000
7101b31028  add x2,x2,#0x20
7101b3102c  mov x3,xzr
7101b31030  bl 0x7103375650
7101b31034  ldr x8,[x22]
7101b31038  ldr x0,[x8]
7101b3103c  cbz x0,0x7101b31704
7101b31040  ldr w3,[sp, #0x44]
7101b31044  adrp x1,0x71043ad000
7101b31048  add x1,x1,#0x410
7101b3104c  adrp x2,0x71043cd000
7101b31050  add x2,x2,#0xb7b
7101b31054  bl 0x7103375650
7101b31058  ldr x8,[x22]
7101b3105c  ldr x0,[x8]
7101b31060  cbz x0,0x7101b31704
7101b31064  ldr w3,[sp, #0x8c]
7101b31068  adrp x1,0x71042b3000
7101b3106c  add x1,x1,#0xfa6
7101b31070  adrp x2,0x71043cd000
7101b31074  add x2,x2,#0xb7b
7101b31078  bl 0x7103375650
7101b3107c  ldr x8,[x22]
7101b31080  ldr x0,[x8]
7101b31084  cbz x0,0x7101b31704
7101b31088  ldrb w3,[x26, #0x1f3]
7101b3108c  adrp x1,0x71043be000
7101b31090  add x1,x1,#0x334
7101b31094  adrp x2,0x71043cd000
7101b31098  add x2,x2,#0xb7b
7101b3109c  bl 0x7103375650
7101b310a0  ldr x8,[x26, #0x40]
7101b310a4  ldr x0,[x8]
7101b310a8  cbz x0,0x7101b31704
7101b310ac  ldrb w3,[x26, #0x1f4]
7101b310b0  adrp x1,0x71042e6000
7101b310b4  add x1,x1,#0xccb
7101b310b8  adrp x2,0x71043cd000
7101b310bc  add x2,x2,#0xb7b
7101b310c0  bl 0x7103375650
7101b310c4  ldr x8,[x26, #0x40]
7101b310c8  ldr x0,[x8]
7101b310cc  cbz x0,0x7101b31704
7101b310d0  ldr w8,[x20, #0x3c]
7101b310d4  cmp w8,#0x1
7101b310d8  cset w3,eq
7101b310dc  adrp x1,0x71042e6000
7101b310e0  add x1,x1,#0xcd7
7101b310e4  adrp x2,0x71043cd000
7101b310e8  add x2,x2,#0xb7b
7101b310ec  bl 0x7103375650
7101b310f0  ldr x8,[x22]
7101b310f4  ldr x0,[x8]
7101b310f8  cbz x0,0x7101b31704
7101b310fc  ldr w8,[x20, #0x3c]
7101b31100  cmp w8,#0x2
7101b31104  cset w3,eq
7101b31108  adrp x1,0x71042d5000
7101b3110c  add x1,x1,#0xeea
7101b31110  adrp x2,0x71043cd000
7101b31114  add x2,x2,#0xb7b
7101b31118  bl 0x7103375650
7101b3111c  ldr x8,[x22]
7101b31120  ldr x0,[x8]
7101b31124  cbz x0,0x7101b31704
7101b31128  ldrb w3,[x20, #0x1d4]
7101b3112c  adrp x1,0x7104308000
7101b31130  add x1,x1,#0x14c
7101b31134  adrp x2,0x71043cd000
7101b31138  add x2,x2,#0xb7b
7101b3113c  bl 0x7103375650
7101b31140  ldr x8,[x22]
7101b31144  ldr x0,[x8]
7101b31148  cbz x0,0x7101b31704
7101b3114c  ldrb w3,[x20, #0x1da]
7101b31150  adrp x1,0x71042a2000
7101b31154  add x1,x1,#0xbcd
7101b31158  adrp x2,0x71043cd000
7101b3115c  add x2,x2,#0xb7b
7101b31160  bl 0x7103375650
7101b31164  ldr x8,[x22]
7101b31168  ldr x0,[x8]
7101b3116c  cbz x0,0x7101b31704
7101b31170  ldrb w3,[x26, #0x1f5]
7101b31174  adrp x1,0x7104318000
7101b31178  add x1,x1,#0xac7
7101b3117c  adrp x2,0x71043cd000
7101b31180  add x2,x2,#0xb7b
7101b31184  bl 0x7103375650
7101b31188  ldr x8,[x26, #0x40]
7101b3118c  ldr x0,[x8]
7101b31190  cbz x0,0x7101b31704
7101b31194  ldrb w3,[x26, #0x1f6]
7101b31198  adrp x1,0x710436b000
7101b3119c  add x1,x1,#0xf83
7101b311a0  adrp x2,0x71043cd000
7101b311a4  add x2,x2,#0xb7b
7101b311a8  bl 0x7103375650
7101b311ac  ldr x8,[x26, #0x40]
7101b311b0  ldr x0,[x8]
7101b311b4  cbz x0,0x7101b31704
7101b311b8  ldrb w3,[x20, #0x1e0]
7101b311bc  adrp x1,0x710439d000
7101b311c0  add x1,x1,#0x93
7101b311c4  adrp x2,0x71043cd000
7101b311c8  add x2,x2,#0xb7b
7101b311cc  bl 0x7103375650
7101b311d0  ldr x8,[x22]
7101b311d4  ldr x0,[x8]
7101b311d8  cbz x0,0x7101b31704
7101b311dc  adrp x1,0x7104339000
7101b311e0  add x1,x1,#0xdcd
7101b311e4  adrp x2,0x71042b2000
7101b311e8  add x2,x2,#0xa84
7101b311ec  mov w3,wzr
7101b311f0  bl 0x7103375650
7101b311f4  ldr x8,[x22]
7101b311f8  ldr x0,[x8]
7101b311fc  cbz x0,0x7101b31704
7101b31200  adrp x1,0x71042f7000
7101b31204  add x1,x1,#0xefd
7101b31208  adrp x2,0x71042b2000
7101b3120c  add x2,x2,#0xa84
7101b31210  mov w3,#0x1
7101b31214  bl 0x7103375650
7101b31218  ldr x8,[x22]
7101b3121c  ldr x0,[x8]
7101b31220  cbz x0,0x7101b31704
7101b31224  adrp x1,0x7104318000
7101b31228  add x1,x1,#0xade
7101b3122c  adrp x2,0x71042b2000
7101b31230  add x2,x2,#0xa84
7101b31234  mov w3,#0x2
7101b31238  bl 0x7103375650
7101b3123c  ldr x8,[x22]
7101b31240  ldr x0,[x8]
7101b31244  cbz x0,0x7101b31704
7101b31248  adrp x1,0x710439d000
7101b3124c  add x1,x1,#0xa4
7101b31250  adrp x2,0x71042b2000
7101b31254  add x2,x2,#0xa84
7101b31258  orr w3,wzr,#0x3
7101b3125c  bl 0x7103375650
7101b31260  ldr x8,[x22]
7101b31264  ldr x0,[x8]
7101b31268  cbz x0,0x7101b31704
7101b3126c  adrp x1,0x71042d5000
7101b31270  add x1,x1,#0xefe
7101b31274  adrp x2,0x71042b2000
7101b31278  add x2,x2,#0xa84
7101b3127c  mov w3,#0x4
7101b31280  bl 0x7103375650
7101b31284  ldr x8,[x22]
7101b31288  ldr x0,[x8]
7101b3128c  cbz x0,0x7101b31704
7101b31290  adrp x1,0x710436b000
7101b31294  add x1,x1,#0xf95
7101b31298  adrp x2,0x71042b2000
7101b3129c  add x2,x2,#0xa84
7101b312a0  mov w3,#0x5
7101b312a4  bl 0x7103375650
7101b312a8  ldr x8,[x22]
7101b312ac  ldr x0,[x8]
7101b312b0  cbz x0,0x7101b31704
7101b312b4  adrp x1,0x71042f7000
7101b312b8  add x1,x1,#0xf0f
7101b312bc  adrp x2,0x71042b2000
7101b312c0  add x2,x2,#0xa84
7101b312c4  orr w3,wzr,#0x6
7101b312c8  bl 0x7103375650
7101b312cc  ldr x8,[x22]
7101b312d0  ldr x0,[x8]
7101b312d4  cbz x0,0x7101b31704
7101b312d8  adrp x1,0x7104339000
7101b312dc  add x1,x1,#0xdd9
7101b312e0  adrp x2,0x71042b2000
7101b312e4  add x2,x2,#0xa84
7101b312e8  orr w3,wzr,#0x7
7101b312ec  bl 0x7103375650
7101b312f0  ldr x8,[x22]
7101b312f4  ldr x0,[x8]
7101b312f8  cbz x0,0x7101b31704
7101b312fc  adrp x1,0x7104291000
7101b31300  add x1,x1,#0x85a
7101b31304  adrp x2,0x71042b2000
7101b31308  add x2,x2,#0xa84
7101b3130c  mov w3,#0x8
7101b31310  bl 0x7103375650
7101b31314  ldr x8,[x22]
7101b31318  ldr x0,[x8]
7101b3131c  cbz x0,0x7101b31704
7101b31320  adrp x1,0x7104432000
7101b31324  add x1,x1,#0xc50
7101b31328  adrp x2,0x71042b2000
7101b3132c  add x2,x2,#0xa84
7101b31330  mov w3,#0x9
7101b31334  bl 0x7103375650
7101b31338  ldr x8,[x22]
7101b3133c  ldr x0,[x8]
7101b31340  cbz x0,0x7101b31704
7101b31344  adrp x1,0x71042b3000
7101b31348  add x1,x1,#0xfb5
7101b3134c  adrp x2,0x71042b2000
7101b31350  add x2,x2,#0xa84
7101b31354  orr w3,wzr,#0x3
7101b31358  bl 0x7103375650
7101b3135c  ldr x8,[x22]
7101b31360  ldr x0,[x8]
7101b31364  cbz x0,0x7101b31704
7101b31368  adrp x1,0x71042d5000
7101b3136c  add x1,x1,#0xf0d
7101b31370  adrp x2,0x71042b2000
7101b31374  add x2,x2,#0xa84
7101b31378  orr w3,wzr,#0x6
7101b3137c  bl 0x7103375650
7101b31380  ldr x8,[x22]
7101b31384  ldr x0,[x8]
7101b31388  cbz x0,0x7101b31704
7101b3138c  adrp x1,0x710435b000
7101b31390  add x1,x1,#0x26a
7101b31394  adrp x2,0x71042b2000
7101b31398  add x2,x2,#0xa84
7101b3139c  mov w3,wzr
7101b313a0  bl 0x7103375650
7101b313a4  ldr x8,[x22]
7101b313a8  ldr x0,[x8]
7101b313ac  cbz x0,0x7101b31704
7101b313b0  adrp x1,0x7104318000
7101b313b4  add x1,x1,#0xaed
7101b313b8  adrp x2,0x71042b2000
7101b313bc  add x2,x2,#0xa84
7101b313c0  mov w3,#0x1
7101b313c4  bl 0x7103375650
7101b313c8  ldr x8,[x22]
7101b313cc  ldr x0,[x8]
7101b313d0  cbz x0,0x7101b31704
7101b313d4  adrp x1,0x7104421000
7101b313d8  add x1,x1,#0xf87
7101b313dc  adrp x2,0x71042b2000
7101b313e0  add x2,x2,#0xa84
7101b313e4  orr w3,wzr,#0x7
7101b313e8  bl 0x7103375650
7101b313ec  ldr x8,[x22]
7101b313f0  ldr x0,[x8]
7101b313f4  cbz x0,0x7101b31704
7101b313f8  adrp x1,0x710438c000
7101b313fc  add x1,x1,#0x5b8
7101b31400  adrp x2,0x71042b2000
7101b31404  add x2,x2,#0xa84
7101b31408  mov w3,#0x8
7101b3140c  bl 0x7103375650
7101b31410  ldr x8,[x22]
7101b31414  ldr x0,[x8]
7101b31418  cbz x0,0x7101b31704
7101b3141c  adrp x1,0x710435b000
7101b31420  add x1,x1,#0x27c
7101b31424  adrp x2,0x71042b2000
7101b31428  add x2,x2,#0xa84
7101b3142c  mov w3,#0x12
7101b31430  bl 0x7103375650
7101b31434  ldr x8,[x22]
7101b31438  ldr x0,[x8]
7101b3143c  cbz x0,0x7101b31704
7101b31440  adrp x1,0x71042b3000
7101b31444  add x1,x1,#0xfca
7101b31448  adrp x2,0x71042b2000
7101b3144c  add x2,x2,#0xa84
7101b31450  orr w3,wzr,#0x18
7101b31454  bl 0x7103375650
7101b31458  ldr x8,[x22]
7101b3145c  ldr x0,[x8]
7101b31460  cbz x0,0x7101b31704
7101b31464  adrp x1,0x710439d000
7101b31468  add x1,x1,#0xb7
7101b3146c  adrp x2,0x71042b2000
7101b31470  add x2,x2,#0xa84
7101b31474  orr w3,wzr,#0x6
7101b31478  bl 0x7103375650
7101b3147c  ldr x8,[x22]
7101b31480  ldr x0,[x8]
7101b31484  cbz x0,0x7101b31704
7101b31488  adrp x1,0x71043f0000
7101b3148c  add x1,x1,#0x621
7101b31490  adrp x2,0x71042b2000
7101b31494  add x2,x2,#0xa84
7101b31498  mov w3,#0x4
7101b3149c  bl 0x7103375650
7101b314a0  ldr x8,[x22]
7101b314a4  ldr x0,[x8]
7101b314a8  cbz x0,0x7101b31704
7101b314ac  adrp x1,0x710424f000
7101b314b0  add x1,x1,#0xf0
7101b314b4  adrp x2,0x71042b2000
7101b314b8  add x2,x2,#0xa84
7101b314bc  mov w3,#0x5
7101b314c0  bl 0x7103375650
7101b314c4  ldr x8,[x22]
7101b314c8  ldr x0,[x8]
7101b314cc  cbz x0,0x7101b31704
7101b314d0  adrp x1,0x7104280000
7101b314d4  add x1,x1,#0x68d
7101b314d8  adrp x2,0x71042b2000
7101b314dc  add x2,x2,#0xa84
7101b314e0  orr w3,wzr,#0x6
7101b314e4  bl 0x7103375650
7101b314e8  ldr x8,[x22]
7101b314ec  ldr x0,[x8]
7101b314f0  cbz x0,0x7101b31704
7101b314f4  adrp x1,0x7104339000
7101b314f8  add x1,x1,#0xdec
7101b314fc  adrp x2,0x71042b2000
7101b31500  add x2,x2,#0xa84
7101b31504  mov w3,#0xa
7101b31508  bl 0x7103375650
7101b3150c  ldr x8,[x22]
7101b31510  ldr x0,[x8]
7101b31514  cbz x0,0x7101b31704
7101b31518  adrp x1,0x7104280000
7101b3151c  add x1,x1,#0x6a5
7101b31520  adrp x2,0x71042b2000
7101b31524  add x2,x2,#0xa84
7101b31528  mov w3,#0xb
7101b3152c  bl 0x7103375650
7101b31530  ldr x8,[x22]
7101b31534  ldr x0,[x8]
7101b31538  cbz x0,0x7101b31704
7101b3153c  adrp x1,0x710439d000
7101b31540  add x1,x1,#0xc8
7101b31544  adrp x2,0x71042b2000
7101b31548  add x2,x2,#0xa84
7101b3154c  orr w3,wzr,#0xc
7101b31550  bl 0x7103375650
7101b31554  ldr x8,[x22]
7101b31558  ldr x0,[x8]
7101b3155c  cbz x0,0x7101b31704
7101b31560  adrp x1,0x710435b000
7101b31564  add x1,x1,#0x28f
7101b31568  adrp x2,0x71042b2000
7101b3156c  add x2,x2,#0xa84
7101b31570  mov w3,#0xd
7101b31574  bl 0x7103375650
7101b31578  ldr x8,[x22]
7101b3157c  ldr x0,[x8]
7101b31580  cbz x0,0x7101b31704
7101b31584  adrp x1,0x71043f0000
7101b31588  add x1,x1,#0x62e
7101b3158c  adrp x2,0x71042b2000
7101b31590  add x2,x2,#0xa84
7101b31594  orr w3,wzr,#0xe
7101b31598  bl 0x7103375650
7101b3159c  ldr x8,[x22]
7101b315a0  ldr x0,[x8]
7101b315a4  cbz x0,0x7101b31704
7101b315a8  adrp x1,0x710437c000
7101b315ac  add x1,x1,#0x198
7101b315b0  adrp x2,0x71042b2000
7101b315b4  add x2,x2,#0xa84
7101b315b8  orr w3,wzr,#0xf
7101b315bc  bl 0x7103375650
7101b315c0  ldr x8,[x22]
7101b315c4  ldr x0,[x8]
7101b315c8  cbz x0,0x7101b31704
7101b315cc  adrp x1,0x7104280000
7101b315d0  add x1,x1,#0x6c3
7101b315d4  adrp x2,0x71042b2000
7101b315d8  add x2,x2,#0xa84
7101b315dc  mov w3,#0x10
7101b315e0  bl 0x7103375650
7101b315e4  ldr x8,[x22]
7101b315e8  ldr x0,[x8]
7101b315ec  cbz x0,0x7101b31704
7101b315f0  adrp x1,0x710439d000
7101b315f4  add x1,x1,#0xea
7101b315f8  adrp x2,0x71042b2000
7101b315fc  add x2,x2,#0xa84
7101b31600  mov w3,#0x11
7101b31604  bl 0x7103375650
7101b31608  ldr x8,[x22]
7101b3160c  ldr x0,[x8]
7101b31610  cbz x0,0x7101b31704
7101b31614  ldr w3,[x26, #0x1e4]
7101b31618  adrp x1,0x71042b3000
7101b3161c  add x1,x1,#0xfdd
7101b31620  adrp x2,0x71042b2000
7101b31624  add x2,x2,#0xa84
7101b31628  bl 0x7103375650
7101b3162c  ldr x8,[x26, #0x40]
7101b31630  ldr x0,[x8]
7101b31634  cbz x0,0x7101b31704
7101b31638  adrp x1,0x71042b3000
7101b3163c  add x1,x1,#0xff5
7101b31640  adrp x2,0x71042b2000
7101b31644  add x2,x2,#0xa84
7101b31648  mov w3,wzr
7101b3164c  bl 0x7103375650
7101b31650  ldr x8,[x22]
7101b31654  ldr x0,[x8]
7101b31658  cbz x0,0x7101b31704
7101b3165c  adrp x1,0x710435b000
7101b31660  add x1,x1,#0x2b3
7101b31664  adrp x2,0x71042b2000
7101b31668  add x2,x2,#0xa84
7101b3166c  mov w3,#0x1
7101b31670  bl 0x7103375650
7101b31674  ldr x8,[x22]
7101b31678  ldr x0,[x8]
7101b3167c  cbz x0,0x7101b31704
7101b31680  adrp x1,0x71042e6000
7101b31684  add x1,x1,#0xce8
7101b31688  adrp x2,0x71042b2000
7101b3168c  add x2,x2,#0xa84
7101b31690  mov w3,#0x2
7101b31694  bl 0x7103375650
7101b31698  ldr x8,[x22]
7101b3169c  ldr x0,[x8]
7101b316a0  cbz x0,0x7101b31704
7101b316a4  adrp x1,0x71042c4000
7101b316a8  add x1,x1,#0xa27
7101b316ac  adrp x2,0x71042b2000
7101b316b0  add x2,x2,#0xa84
7101b316b4  orr w3,wzr,#0x3
7101b316b8  bl 0x7103375650
7101b316bc  ldr x8,[x22]
7101b316c0  ldr x0,[x8]
7101b316c4  cbz x0,0x7101b31704
7101b316c8  ldrb w3,[x20, #0x1dc]
7101b316cc  adrp x1,0x71043be000
7101b316d0  add x1,x1,#0x343
7101b316d4  adrp x2,0x71043cd000
7101b316d8  add x2,x2,#0xb7b
7101b316dc  bl 0x7103375650
7101b316e0  ldr x8,[x22]
7101b316e4  ldr x0,[x8]
7101b316e8  cbz x0,0x7101b31704
7101b316ec  ldrb w3,[x20, #0x1dd]
7101b316f0  adrp x1,0x7104443000
7101b316f4  add x1,x1,#0x276
7101b316f8  adrp x2,0x71043cd000
7101b316fc  add x2,x2,#0xb7b
7101b31700  bl 0x7103375650
7101b31704  ldr x0,[sp, #0x338]
7101b31708  adrp x8,0x710523d000
7101b3170c  add x8,x8,#0x9a8
7101b31710  str x8,[sp, #0x330]
7101b31714  str xzr,[sp, #0x338]
7101b31718  cbz x0,0x7101b31720
7101b3171c  bl 0x710392eb40
7101b31720  ldr x19,[sp, #0x348]
7101b31724  adrp x8,0x710523d000
7101b31728  add x8,x8,#0x988
7101b3172c  str x8,[sp, #0x340]
7101b31730  str xzr,[sp, #0x348]
7101b31734  cbz x19,0x7101b31758
7101b31738  ldr x0,[x19, #0x18]
7101b3173c  adrp x8,0x710523d000
7101b31740  add x8,x8,#0x9a8
7101b31744  stp x8,xzr,[x19, #0x10]
7101b31748  cbz x0,0x7101b31750
7101b3174c  bl 0x710392eb40
7101b31750  mov x0,x19
7101b31754  bl 0x710392eb40
7101b31758  ldr x19,[sp, #0x3b0]
7101b3175c  adrp x8,0x710523d000
7101b31760  add x8,x8,#0x988
7101b31764  str x8,[sp, #0x3a8]
7101b31768  str xzr,[sp, #0x3b0]
7101b3176c  cbz x19,0x7101b31790
7101b31770  ldr x0,[x19, #0x18]
7101b31774  adrp x8,0x710523d000
7101b31778  add x8,x8,#0x9a8
7101b3177c  stp x8,xzr,[x19, #0x10]
7101b31780  cbz x0,0x7101b31788
7101b31784  bl 0x710392eb40
7101b31788  mov x0,x19
7101b3178c  bl 0x710392eb40
7101b31790  add sp,sp,#0x690
7101b31794  ldp d9,d8,[sp, #0x30]
7101b31798  ldp d11,d10,[sp, #0x20]
7101b3179c  ldp d13,d12,[sp, #0x10]
7101b317a0  ldp x29,x30,[sp, #0x90]
7101b317a4  ldp x20,x19,[sp, #0x80]
7101b317a8  ldp x22,x21,[sp, #0x70]
7101b317ac  ldp x24,x23,[sp, #0x60]
7101b317b0  ldp x26,x25,[sp, #0x50]
7101b317b4  ldp x28,x27,[sp, #0x40]
7101b317b8  ldp d15,d14,[sp], #0xa0
7101b317bc  ret
7101b317c0  ldrb w8,[x23, #0x1e0]
7101b317c4  cmp w8,#0x0
7101b317c8  cset w8,ne
7101b317cc  b 0x7101b2d874
7101b317d0  mov w19,#0x2
7101b317d4  b 0x7101b2aaf8
7101b317d8  adrp x0,0x7105314000
7101b317dc  add x0,x0,#0x4d8
7101b317e0  bl 0x71039c06b0
7101b317e4  cbz w0,0x7101b2a238
7101b317e8  bl 0x7101764000
7101b317ec  adrp x0,0x7101763000
7101b317f0  add x0,x0,#0xc40
7101b317f4  adrp x1,0x71052c5000
7101b317f8  add x1,x1,#0x180
7101b317fc  adrp x2,0x7104f17000
7101b31800  add x2,x2,#0x0
7101b31804  bl 0x71000001c0
7101b31808  adrp x0,0x7105314000
7101b3180c  add x0,x0,#0x4d8
7101b31810  bl 0x71039c06c0
7101b31814  b 0x7101b2a238
7101b31818  adrp x0,0x7105314000
7101b3181c  add x0,x0,#0x4d8
7101b31820  bl 0x71039c06b0
7101b31824  cbz w0,0x7101b2c364
7101b31828  bl 0x7101764000
7101b3182c  adrp x0,0x7101763000
7101b31830  add x0,x0,#0xc40
7101b31834  adrp x1,0x71052c5000
7101b31838  add x1,x1,#0x180
7101b3183c  adrp x2,0x7104f17000
7101b31840  add x2,x2,#0x0
7101b31844  bl 0x71000001c0
7101b31848  adrp x0,0x7105314000
7101b3184c  add x0,x0,#0x4d8
7101b31850  bl 0x71039c06c0
7101b31854  b 0x7101b2c364
7101b31858  mov x0,x24
7101b3185c  bl 0x71039c1330
7101b31860  add x0,x10,#0x608
7101b31864  bl 0x71039c1330
7101b31868  add x0,sp,#0x610
7101b3186c  bl 0x71039c1330
7101b31870  mov x0,x23
7101b31874  bl 0x71039c1330
7101b31878  ldr x0,[sp, #0x58]
7101b3187c  bl 0x71039c0c00
7101b31880  ldr x0,[sp, #0x38]
7101b31884  bl 0x71039c1330
7101b31888  bl 0x71039c2650
