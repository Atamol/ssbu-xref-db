// addr:      7101e5a240
// offset:    0x1e5a240
// name:      FUN_7101e5a240
// mangled:   
// size:      796

7101e5a240  sub sp,sp,#0x80
7101e5a244  str d8,[sp, #0x20]
7101e5a248  stp x26,x25,[sp, #0x30]
7101e5a24c  stp x24,x23,[sp, #0x40]
7101e5a250  stp x22,x21,[sp, #0x50]
7101e5a254  stp x20,x19,[sp, #0x60]
7101e5a258  stp x29,x30,[sp, #0x70]
7101e5a25c  add x29,sp,#0x70
7101e5a260  ldr w8,[x0, #0x1e4]
7101e5a264  ldr x20,[x0, #0x308]
7101e5a268  mov x19,x0
7101e5a26c  cbz w8,0x7101e5a328
7101e5a270  ldr x8,[x20, #0x20]
7101e5a274  cbz x8,0x7101e5a294
7101e5a278  ldr x8,[x8, #0x8]
7101e5a27c  ldr x0,[x8, #0x8]
7101e5a280  cbz x0,0x7101e5a294
7101e5a284  ldr x8,[x0]
7101e5a288  ldr x8,[x8, #0x138]
7101e5a28c  blr x8
7101e5a290  tbz w0,#0x0,0x7101e5a53c
7101e5a294  ldr x8,[x19, #0x2e8]
7101e5a298  ldr x8,[x8, #0x48]
7101e5a29c  cbz x8,0x7101e5a2bc
7101e5a2a0  ldr x8,[x8, #0x8]
7101e5a2a4  ldr x0,[x8, #0x8]
7101e5a2a8  cbz x0,0x7101e5a2bc
7101e5a2ac  ldr x8,[x0]
7101e5a2b0  ldr x8,[x8, #0x138]
7101e5a2b4  blr x8
7101e5a2b8  tbz w0,#0x0,0x7101e5a53c
7101e5a2bc  add x9,x19,#0x1d4
7101e5a2c0  stp xzr,xzr,[x19, #0x10]
7101e5a2c4  str xzr,[x9]
7101e5a2c8  add x9,x19,#0x1cc
7101e5a2cc  add x8,x19,#0x194
7101e5a2d0  str xzr,[x9]
7101e5a2d4  add x9,x19,#0x1c4
7101e5a2d8  str xzr,[x9]
7101e5a2dc  add x9,x19,#0x1bc
7101e5a2e0  str xzr,[x9]
7101e5a2e4  add x9,x19,#0x1b4
7101e5a2e8  str xzr,[x9]
7101e5a2ec  add x9,x19,#0x1ac
7101e5a2f0  str xzr,[x9]
7101e5a2f4  add x9,x19,#0x1a4
7101e5a2f8  str xzr,[x9]
7101e5a2fc  add x9,x19,#0x19c
7101e5a300  str xzr,[x8]
7101e5a304  mov w8,#0xffffffff
7101e5a308  str xzr,[x9]
7101e5a30c  str x8,[x19, #0x1e0]
7101e5a310  str w8,[x19, #0x1e8]
7101e5a314  mov w8,#0x15
7101e5a318  str wzr,[x19, #0x1dc]
7101e5a31c  strb wzr,[x19, #0x1ec]
7101e5a320  str w8,[x19, #0x190]
7101e5a324  b 0x7101e5a53c
7101e5a328  adrp x1,0x7104421000
7101e5a32c  add x1,x1,#0x55
7101e5a330  add x8,sp,#0x8
7101e5a334  mov x0,x20
7101e5a338  bl 0x71037780e0
7101e5a33c  mov w0,#0x10
7101e5a340  mov w1,#0x10
7101e5a344  bl 0x710392e290
7101e5a348  cbnz x0,0x7101e5a390
7101e5a34c  adrp x8,0x7105332000
7101e5a350  ldr x0,[x8, #0xf00]
7101e5a354  cbz x0,0x7101e5a38c
7101e5a358  mov w8,#0x10
7101e5a35c  str wzr,[sp, #0x2c]
7101e5a360  add x1,sp,#0x2c
7101e5a364  str x8,[sp, #0x18]
7101e5a368  ldr x8,[x0]
7101e5a36c  ldr x8,[x8, #0x30]
7101e5a370  add x2,sp,#0x18
7101e5a374  blr x8
7101e5a378  tbz w0,#0x0,0x7101e5a38c
7101e5a37c  mov w0,#0x10
7101e5a380  mov w1,#0x10
7101e5a384  bl 0x710392e290
7101e5a388  cbnz x0,0x7101e5a390
7101e5a38c  mov x0,xzr
7101e5a390  ldr x8,[sp, #0x10]
7101e5a394  adrp x21,0x710523d000
7101e5a398  add x21,x21,#0x9e8
7101e5a39c  str xzr,[sp, #0x10]
7101e5a3a0  stp x21,x8,[x0]
7101e5a3a4  ldr x8,[x20, #0x20]
7101e5a3a8  str x0,[x20, #0x20]
7101e5a3ac  cbz x8,0x7101e5a3c0
7101e5a3b0  ldr x9,[x8]
7101e5a3b4  ldr x9,[x9, #0x8]
7101e5a3b8  mov x0,x8
7101e5a3bc  blr x9
7101e5a3c0  stp x21,xzr,[sp, #0x8]
7101e5a3c4  ldr x0,[x20, #0x20]
7101e5a3c8  fmov s0,0x3f800000
7101e5a3cc  bl 0x710377aee0
7101e5a3d0  mov w8,#0x1
7101e5a3d4  strb w8,[x19, #0x310]
7101e5a3d8  ldrb w8,[x19, #0x210]
7101e5a3dc  cbz w8,0x7101e5a53c
7101e5a3e0  fmov s8,0x3f800000
7101e5a3e4  mov x20,#0xe86
7101e5a3e8  movk x20,#0x30ff, LSL #16
7101e5a3ec  mov x23,#0x5200000000000000
7101e5a3f0  mov w24,#0x8
7101e5a3f4  mov w25,#0x9
7101e5a3f8  adrp x26,0x710532f000
7101e5a3fc  movk x20,#0x15, LSL #32
7101e5a400  adrp x21,0x71042d6000
7101e5a404  add x21,x21,#0x9e0
7101e5a408  sub x8,x25,#0x9
7101e5a40c  cmp x8,#0x3
7101e5a410  b.hi 0x7101e5a524
7101e5a414  ldr x8,[x19, #0x208]
7101e5a418  ldr x22,[x8, x25, LSL #0x3]
7101e5a41c  cbz x22,0x7101e5a524
7101e5a420  ldrb w8,[x22, #0xb0]
7101e5a424  cbz w8,0x7101e5a524
7101e5a428  ldr x8,[x26, #0x730]
7101e5a42c  ldr x8,[x8, #0x8]
7101e5a430  ldr x8,[x8, #0x208]
7101e5a434  ldr x0,[x8, #0x8]
7101e5a438  mov x1,x20
7101e5a43c  bl 0x71032a3d90
7101e5a440  ldr x12,[x19, #0x3b8]
7101e5a444  and x10,x0,#-0x100000000000000
7101e5a448  and x8,x0,#0xffffffffff
7101e5a44c  cmp x10,x23
7101e5a450  ccmp x8,#0x0,#0x4,eq
7101e5a454  and x9,x12,#0xffffffffff
7101e5a458  b.ne 0x7101e5a464
7101e5a45c  and x11,x12,#-0x100000000000000
7101e5a460  b 0x7101e5a484
7101e5a464  and x11,x12,#-0x100000000000000
7101e5a468  cmp x11,x23
7101e5a46c  b.ne 0x7101e5a484
7101e5a470  cbz x9,0x7101e5a484
7101e5a474  eor x8,x12,x0
7101e5a478  tst x8,#0xffffffffff
7101e5a47c  b.ne 0x7101e5a4b8
7101e5a480  b 0x7101e5a524
7101e5a484  cmp x10,x23
7101e5a488  cset w10,eq
7101e5a48c  cmp x8,#0x0
7101e5a490  cset w8,ne
7101e5a494  cmp x9,#0x0
7101e5a498  cset w9,ne
7101e5a49c  cmp x11,x23
7101e5a4a0  and w8,w10,w8
7101e5a4a4  cset w10,eq
7101e5a4a8  and w9,w9,w10
7101e5a4ac  eor w8,w9,w8
7101e5a4b0  cmp w8,#0x1
7101e5a4b4  b.ne 0x7101e5a524
7101e5a4b8  ldr x9,[x19, #0x3b0]
7101e5a4bc  ldr x8,[x9]
7101e5a4c0  ldr x8,[x8, #0x8]
7101e5a4c4  ldrb w10,[x8, #0x388]
7101e5a4c8  cbz w10,0x7101e5a524
7101e5a4cc  ldrb w9,[x9, #0x8]
7101e5a4d0  cmp x9,#0xd
7101e5a4d4  b.hi 0x7101e5a524
7101e5a4d8  add x8,x8,x9, LSL #0x3
7101e5a4dc  ldr x8,[x8, #0x8]
7101e5a4e0  cbz x8,0x7101e5a524
7101e5a4e4  ldrsh w8,[x8, x24, LSL #0x0]
7101e5a4e8  cmn w8,#0x1
7101e5a4ec  b.eq 0x7101e5a524
7101e5a4f0  mov x0,x22
7101e5a4f4  bl 0x7101e9be90
7101e5a4f8  mov x0,x22
7101e5a4fc  bl 0x7101e9c4a0
7101e5a500  ldrb w8,[x19, #0x212]
7101e5a504  cbz w8,0x7101e5a524
7101e5a508  ldr x8,[x19, #0x208]
7101e5a50c  ldr x8,[x8, x25, LSL #0x3]
7101e5a510  cbz x8,0x7101e5a524
7101e5a514  ldr x0,[x8, #0x8]
7101e5a518  mov v0.16B,v8.16B
7101e5a51c  mov x1,x21
7101e5a520  bl 0x7103778300
7101e5a524  ldrb w8,[x19, #0x210]
7101e5a528  sub x9,x25,#0x8
7101e5a52c  add x24,x24,#0x1c8
7101e5a530  add x25,x25,#0x1
7101e5a534  cmp x9,x8
7101e5a538  b.cc 0x7101e5a408
7101e5a53c  ldr d8,[sp, #0x20]
7101e5a540  ldp x29,x30,[sp, #0x70]
7101e5a544  ldp x20,x19,[sp, #0x60]
7101e5a548  ldp x22,x21,[sp, #0x50]
7101e5a54c  ldp x24,x23,[sp, #0x40]
7101e5a550  ldp x26,x25,[sp, #0x30]
7101e5a554  add sp,sp,#0x80
7101e5a558  ret
