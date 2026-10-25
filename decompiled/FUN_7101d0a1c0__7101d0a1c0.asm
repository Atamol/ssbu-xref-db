// addr:      7101d0a1c0
// offset:    0x1d0a1c0
// name:      FUN_7101d0a1c0
// mangled:   
// size:      3188

7101d0a1c0  sub sp,sp,#0x120
7101d0a1c4  str d8,[sp, #0xb0]
7101d0a1c8  stp x28,x27,[sp, #0xc0]
7101d0a1cc  stp x26,x25,[sp, #0xd0]
7101d0a1d0  stp x24,x23,[sp, #0xe0]
7101d0a1d4  stp x22,x21,[sp, #0xf0]
7101d0a1d8  stp x20,x19,[sp, #0x100]
7101d0a1dc  stp x29,x30,[sp, #0x110]
7101d0a1e0  add x29,sp,#0x110
7101d0a1e4  mov w19,w2
7101d0a1e8  mov w20,w1
7101d0a1ec  stur x0,[x29, #-0x58]
7101d0a1f0  bl 0x7101d0ae40
7101d0a1f4  adrp x8,0x7105329000
7101d0a1f8  ldr x8,[x8, #0x740]
7101d0a1fc  ldr x8,[x8, #0x8]
7101d0a200  orr w9,wzr,#0x18
7101d0a204  umaddl x0,w20,w9,x8
7101d0a208  mov w10,w19
7101d0a20c  ldr x8,[x0, #0x8]!
7101d0a210  str x19,[sp, #0x38]
7101d0a214  ldr x9,[x0, #0x8]
7101d0a218  sub x9,x9,x8
7101d0a21c  asr x9,x9,#0x4
7101d0a220  cmp x9,x10
7101d0a224  b.ls 0x7101d0ae04
7101d0a228  add x8,x8,x10, LSL #0x4
7101d0a22c  str x20,[sp, #0x30]
7101d0a230  str x10,[sp, #0x20]
7101d0a234  ldp x19,x11,[x8]
7101d0a238  cbz x11,0x7101d0a250
7101d0a23c  add x8,x11,#0x8
7101d0a240  ldxr x9,[x8]
7101d0a244  add x9,x9,#0x1
7101d0a248  stxr w10,x9,[x8]
7101d0a24c  cbnz w10,0x7101d0a240
7101d0a250  ldr w8,[x19, #0x4]
7101d0a254  cmp w8,#0x0
7101d0a258  mov w8,#0x10
7101d0a25c  orr w9,wzr,#0x38
7101d0a260  csel x8,x9,x8,eq
7101d0a264  orr w9,wzr,#0x18
7101d0a268  mov w10,#0x40
7101d0a26c  csel x9,x10,x9,eq
7101d0a270  str x11,[sp, #0x28]
7101d0a274  ldr x8,[x19, x8, LSL #0x0]
7101d0a278  mov w10,#0x4
7101d0a27c  ldr x9,[x19, x9, LSL #0x0]
7101d0a280  mov w11,#0x2
7101d0a284  csel x10,x11,x10,eq
7101d0a288  sub x8,x9,x8
7101d0a28c  asr x8,x8,x10
7101d0a290  cbz w8,0x7101d0a4c4
7101d0a294  ldur x8,[x29, #-0x58]
7101d0a298  add x27,x8,#0xc0
7101d0a29c  add x21,x8,#0xd8
7101d0a2a0  add x20,x8,#0xf0
7101d0a2a4  add x28,x8,#0x108
7101d0a2a8  add x25,x8,#0x120
7101d0a2ac  ldr x8,[sp, #0x38]
7101d0a2b0  sxtw x26,w8
7101d0a2b4  ldr x8,[sp, #0x30]
7101d0a2b8  cmp w8,#0x5
7101d0a2bc  b.cs 0x7101d0a39c
7101d0a2c0  mov x24,xzr
7101d0a2c4  sxtw x22,w8
7101d0a2c8  stp x27,x21,[sp, #0x80]
7101d0a2cc  add x8,sp,#0x80
7101d0a2d0  stp x20,x28,[sp, #0x90]
7101d0a2d4  mov x10,#0x4ec5
7101d0a2d8  movk x10,#0xc4ec, LSL #16
7101d0a2dc  movk x10,#0xec4e, LSL #32
7101d0a2e0  movk x10,#0x4ec4, LSL #48
7101d0a2e4  str x25,[sp, #0xa0]
7101d0a2e8  ldr x23,[x8, x22, LSL #0x3]
7101d0a2ec  ldp x8,x9,[x23]
7101d0a2f0  sub x9,x9,x8
7101d0a2f4  asr x9,x9,#0x5
7101d0a2f8  mul x9,x9,x10
7101d0a2fc  cmp x9,x26
7101d0a300  b.ls 0x7101d0adfc
7101d0a304  mov w9,#0x1a0
7101d0a308  madd x23,x26,x9,x8
7101d0a30c  ldr x8,[x23, #0x100]
7101d0a310  add x0,x8,#0x8
7101d0a314  adrp x1,0x71042f8000
7101d0a318  add x1,x1,#0x52b
7101d0a31c  mov w2,w24
7101d0a320  bl 0x7103778430
7101d0a324  cmp x24,#0x4
7101d0a328  b.cs 0x7101d0ae08
7101d0a32c  ldr x8,[x23, #0x100]
7101d0a330  add x9,x8,x24
7101d0a334  mov w10,#0x1
7101d0a338  add x0,x8,#0x8
7101d0a33c  adrp x1,0x7104291000
7101d0a340  add x1,x1,#0xe70
7101d0a344  mov w2,w24
7101d0a348  strb w10,[x9, #0x4c]
7101d0a34c  bl 0x7103778430
7101d0a350  ldr w8,[x19, #0x4]
7101d0a354  cmp w8,#0x0
7101d0a358  mov w8,#0x10
7101d0a35c  orr w9,wzr,#0x38
7101d0a360  csel x8,x9,x8,eq
7101d0a364  orr w9,wzr,#0x18
7101d0a368  mov w10,#0x40
7101d0a36c  csel x9,x10,x9,eq
7101d0a370  mov w10,#0x4
7101d0a374  ldr x8,[x19, x8, LSL #0x0]
7101d0a378  mov w11,#0x2
7101d0a37c  ldr x9,[x19, x9, LSL #0x0]
7101d0a380  csel x10,x11,x10,eq
7101d0a384  sub x8,x9,x8
7101d0a388  add x24,x24,#0x1
7101d0a38c  asr x8,x8,x10
7101d0a390  cmp x24,w8, UXTW 
7101d0a394  b.cc 0x7101d0a2c8
7101d0a398  b 0x7101d0a4c4
7101d0a39c  mov x24,xzr
7101d0a3a0  adrp x23,0x7105325000
7101d0a3a4  add x23,x23,#0xd28
7101d0a3a8  b 0x7101d0a3ec
7101d0a3ac  adrp x0,0x7105325000
7101d0a3b0  add x0,x0,#0xd40
7101d0a3b4  bl 0x71039c06b0
7101d0a3b8  cbz w0,0x7101d0a408
7101d0a3bc  adrp x0,0x7101d03000
7101d0a3c0  add x0,x0,#0x90
7101d0a3c4  mov x1,x23
7101d0a3c8  adrp x2,0x7104f17000
7101d0a3cc  add x2,x2,#0x0
7101d0a3d0  str xzr,[x23]
7101d0a3d4  stp xzr,xzr,[x23, #0x8]
7101d0a3d8  bl 0x71000001c0
7101d0a3dc  adrp x0,0x7105325000
7101d0a3e0  add x0,x0,#0xd40
7101d0a3e4  bl 0x71039c06c0
7101d0a3e8  b 0x7101d0a408
7101d0a3ec  stp x27,x21,[sp, #0x80]
7101d0a3f0  adrp x8,0x7105325000
7101d0a3f4  add x8,x8,#0xd40
7101d0a3f8  stp x20,x28,[sp, #0x90]
7101d0a3fc  str x25,[sp, #0xa0]
7101d0a400  ldarb w8,[x8]
7101d0a404  tbz w8,#0x0,0x7101d0a3ac
7101d0a408  ldp x8,x9,[x23]
7101d0a40c  sub x9,x9,x8
7101d0a410  mov x10,#0x4ec5
7101d0a414  movk x10,#0xc4ec, LSL #16
7101d0a418  movk x10,#0xec4e, LSL #32
7101d0a41c  movk x10,#0x4ec4, LSL #48
7101d0a420  asr x9,x9,#0x5
7101d0a424  mul x9,x9,x10
7101d0a428  cmp x9,x26
7101d0a42c  b.ls 0x7101d0adfc
7101d0a430  mov w9,#0x1a0
7101d0a434  madd x22,x26,x9,x8
7101d0a438  ldr x8,[x22, #0x100]
7101d0a43c  add x0,x8,#0x8
7101d0a440  adrp x1,0x71042f8000
7101d0a444  add x1,x1,#0x52b
7101d0a448  mov w2,w24
7101d0a44c  bl 0x7103778430
7101d0a450  cmp x24,#0x4
7101d0a454  b.cs 0x7101d0ae08
7101d0a458  ldr x8,[x22, #0x100]
7101d0a45c  add x9,x8,x24
7101d0a460  mov w10,#0x1
7101d0a464  add x0,x8,#0x8
7101d0a468  adrp x1,0x7104291000
7101d0a46c  add x1,x1,#0xe70
7101d0a470  mov w2,w24
7101d0a474  strb w10,[x9, #0x4c]
7101d0a478  bl 0x7103778430
7101d0a47c  ldr w8,[x19, #0x4]
7101d0a480  cmp w8,#0x0
7101d0a484  mov w8,#0x10
7101d0a488  orr w9,wzr,#0x38
7101d0a48c  csel x8,x9,x8,eq
7101d0a490  orr w9,wzr,#0x18
7101d0a494  mov w10,#0x40
7101d0a498  csel x9,x10,x9,eq
7101d0a49c  mov w10,#0x4
7101d0a4a0  ldr x8,[x19, x8, LSL #0x0]
7101d0a4a4  mov w11,#0x2
7101d0a4a8  ldr x9,[x19, x9, LSL #0x0]
7101d0a4ac  csel x10,x11,x10,eq
7101d0a4b0  sub x8,x9,x8
7101d0a4b4  add x24,x24,#0x1
7101d0a4b8  asr x8,x8,x10
7101d0a4bc  cmp x24,w8, UXTW 
7101d0a4c0  b.cc 0x7101d0a3ec
7101d0a4c4  adrp x8,0x7105329000
7101d0a4c8  mov x20,x8
7101d0a4cc  ldr x8,[x8, #0x740]
7101d0a4d0  ldr w23,[x19, #0x50]
7101d0a4d4  mov w1,w23
7101d0a4d8  ldr x0,[x8, #0x8]
7101d0a4dc  bl 0x710239d150
7101d0a4e0  ldr x8,[x20, #0x740]
7101d0a4e4  ldr x8,[x8, #0x8]
7101d0a4e8  ldr w9,[x8, #0x4]
7101d0a4ec  sub w9,w9,#0x1
7101d0a4f0  cmp w0,w9
7101d0a4f4  csel w9,w9,w0,gt
7101d0a4f8  cmp w0,#0x0
7101d0a4fc  csel w26,wzr,w9,lt
7101d0a500  cmp w26,#0x5
7101d0a504  b.cs 0x7101d0ae08
7101d0a508  orr w20,wzr,#0x18
7101d0a50c  smaddl x9,w26,w20,x8
7101d0a510  ldp x22,x27,[x9, #0x8]
7101d0a514  cmp x22,x27
7101d0a518  b.eq 0x7101d0a5bc
7101d0a51c  mov w28,#0xffffffff
7101d0a520  ldp x25,x24,[x22]
7101d0a524  cbz x24,0x7101d0a53c
7101d0a528  add x8,x24,#0x8
7101d0a52c  ldxr x9,[x8]
7101d0a530  add x9,x9,#0x1
7101d0a534  stxr w10,x9,[x8]
7101d0a538  cbnz w10,0x7101d0a52c
7101d0a53c  mov x0,x25
7101d0a540  mov w1,w23
7101d0a544  bl 0x71023976c0
7101d0a548  cmn w0,#0x1
7101d0a54c  b.eq 0x7101d0a560
7101d0a550  ldr w21,[x25, #0x8]
7101d0a554  mov w25,#0x1
7101d0a558  cbnz x24,0x7101d0a568
7101d0a55c  b 0x7101d0a598
7101d0a560  mov w25,wzr
7101d0a564  cbz x24,0x7101d0a598
7101d0a568  add x8,x24,#0x8
7101d0a56c  ldaxr x9,[x8]
7101d0a570  sub x10,x9,#0x1
7101d0a574  stlxr w11,x10,[x8]
7101d0a578  cbnz w11,0x7101d0a56c
7101d0a57c  cbnz x9,0x7101d0a598
7101d0a580  ldr x8,[x24]
7101d0a584  ldr x8,[x8, #0x10]
7101d0a588  mov x0,x24
7101d0a58c  blr x8
7101d0a590  mov x0,x24
7101d0a594  bl 0x71039c2670
7101d0a598  cbnz w25,0x7101d0a5ac
7101d0a59c  add x22,x22,#0x10
7101d0a5a0  cmp x22,x27
7101d0a5a4  b.ne 0x7101d0a520
7101d0a5a8  mov w21,w28
7101d0a5ac  adrp x8,0x7105329000
7101d0a5b0  ldr x8,[x8, #0x740]
7101d0a5b4  ldr x8,[x8, #0x8]
7101d0a5b8  b 0x7101d0a5c0
7101d0a5bc  mov w21,#0xffffffff
7101d0a5c0  umaddl x0,w26,w20,x8
7101d0a5c4  ldr x8,[x0, #0x8]!
7101d0a5c8  ldr x9,[x0, #0x8]
7101d0a5cc  sub x9,x9,x8
7101d0a5d0  mov w20,w21
7101d0a5d4  asr x9,x9,#0x4
7101d0a5d8  cmp x9,x20
7101d0a5dc  b.ls 0x7101d0ae04
7101d0a5e0  add x8,x8,x20, LSL #0x4
7101d0a5e4  ldp x0,x24,[x8]
7101d0a5e8  cbz x24,0x7101d0a640
7101d0a5ec  add x8,x24,#0x8
7101d0a5f0  ldxr x9,[x8]
7101d0a5f4  add x9,x9,#0x1
7101d0a5f8  stxr w10,x9,[x8]
7101d0a5fc  cbnz w10,0x7101d0a5f0
7101d0a600  mov w1,w23
7101d0a604  bl 0x71023976c0
7101d0a608  mov w23,w0
7101d0a60c  add x8,x24,#0x8
7101d0a610  ldaxr x9,[x8]
7101d0a614  sub x10,x9,#0x1
7101d0a618  stlxr w11,x10,[x8]
7101d0a61c  cbnz w11,0x7101d0a610
7101d0a620  cbnz x9,0x7101d0a64c
7101d0a624  ldr x8,[x24]
7101d0a628  ldr x8,[x8, #0x10]
7101d0a62c  mov x0,x24
7101d0a630  blr x8
7101d0a634  mov x0,x24
7101d0a638  bl 0x71039c2670
7101d0a63c  b 0x7101d0a64c
7101d0a640  mov w1,w23
7101d0a644  bl 0x71023976c0
7101d0a648  mov w23,w0
7101d0a64c  ldur x8,[x29, #-0x58]
7101d0a650  add x9,x8,#0xc0
7101d0a654  str x9,[sp, #0x60]
7101d0a658  str x9,[sp, #0x80]
7101d0a65c  add x9,x8,#0xd8
7101d0a660  add x10,x8,#0xf0
7101d0a664  stp x10,x9,[sp, #0x50]
7101d0a668  cmp w26,#0x4
7101d0a66c  stp x9,x10,[sp, #0x88]
7101d0a670  add x9,x8,#0x108
7101d0a674  add x8,x8,#0x120
7101d0a678  stp x8,x9,[sp, #0x40]
7101d0a67c  stp x9,x8,[sp, #0x98]
7101d0a680  b.hi 0x7101d0a694
7101d0a684  sxtw x8,w26
7101d0a688  add x9,sp,#0x80
7101d0a68c  ldr x24,[x9, x8, LSL #0x3]
7101d0a690  b 0x7101d0a6ac
7101d0a694  adrp x8,0x7105325000
7101d0a698  add x8,x8,#0xd40
7101d0a69c  ldarb w8,[x8]
7101d0a6a0  tbz w8,#0x0,0x7101d0ad6c
7101d0a6a4  adrp x24,0x7105325000
7101d0a6a8  add x24,x24,#0xd28
7101d0a6ac  ldp x9,x10,[x24]
7101d0a6b0  sub x10,x10,x9
7101d0a6b4  mov x11,#0x4ec5
7101d0a6b8  movk x11,#0xc4ec, LSL #16
7101d0a6bc  movk x11,#0xec4e, LSL #32
7101d0a6c0  movk x11,#0x4ec4, LSL #48
7101d0a6c4  asr x10,x10,#0x5
7101d0a6c8  mul x10,x10,x11
7101d0a6cc  sxtw x8,w20
7101d0a6d0  cmp x10,x8
7101d0a6d4  b.ls 0x7101d0ae24
7101d0a6d8  mov w10,#0x1a0
7101d0a6dc  madd x20,x8,x10,x9
7101d0a6e0  ldr x8,[x20, #0x100]
7101d0a6e4  add x0,x8,#0x8
7101d0a6e8  adrp x1,0x71042f8000
7101d0a6ec  add x1,x1,#0x52b
7101d0a6f0  mov w2,w23
7101d0a6f4  bl 0x7103778430
7101d0a6f8  cmp w23,#0x4
7101d0a6fc  b.cs 0x7101d0ae08
7101d0a700  ldr x8,[x20, #0x100]
7101d0a704  add x9,x8,w23, SXTW 
7101d0a708  mov w10,#0x1
7101d0a70c  add x0,x8,#0x8
7101d0a710  adrp x1,0x7104291000
7101d0a714  add x1,x1,#0xe70
7101d0a718  mov w2,w23
7101d0a71c  strb w10,[x9, #0x4c]
7101d0a720  bl 0x7103778430
7101d0a724  ldr w8,[x19, #0x4]
7101d0a728  cmp w8,#0x0
7101d0a72c  mov w9,#0x10
7101d0a730  orr w10,wzr,#0x38
7101d0a734  csel x9,x10,x9,eq
7101d0a738  orr w10,wzr,#0x18
7101d0a73c  mov w11,#0x40
7101d0a740  csel x10,x11,x10,eq
7101d0a744  mov w11,#0x4
7101d0a748  ldr x9,[x19, x9, LSL #0x0]
7101d0a74c  mov w12,#0x2
7101d0a750  ldr x10,[x19, x10, LSL #0x0]
7101d0a754  csel x11,x12,x11,eq
7101d0a758  sub x9,x10,x9
7101d0a75c  asr x9,x9,x11
7101d0a760  cbz w9,0x7101d0a8a4
7101d0a764  add x9,x19,#0x10
7101d0a768  str x9,[sp, #0x18]
7101d0a76c  add x9,x19,#0x38
7101d0a770  str x9,[sp, #0x10]
7101d0a774  ldur x9,[x29, #-0x58]
7101d0a778  fmov s8,0x3f800000
7101d0a77c  mov x20,xzr
7101d0a780  orr w24,wzr,#0x38
7101d0a784  orr w25,wzr,#0x18
7101d0a788  mov w21,#0x40
7101d0a78c  mov w28,#0x4
7101d0a790  add x9,x9,#0xa8
7101d0a794  mov w22,#0x2
7101d0a798  adrp x26,0x710439d000
7101d0a79c  add x26,x26,#0x642
7101d0a7a0  str x9,[sp, #0x8]
7101d0a7a4  cbz w8,0x7101d0a810
7101d0a7a8  ldp x8,x9,[x19, #0x10]
7101d0a7ac  sub x9,x9,x8
7101d0a7b0  asr x9,x9,#0x4
7101d0a7b4  cmp x9,x20
7101d0a7b8  b.ls 0x7101d0ae14
7101d0a7bc  add x9,x8,x20, LSL #0x4
7101d0a7c0  ldp x8,x27,[x9]
7101d0a7c4  cbz x27,0x7101d0a82c
7101d0a7c8  add x9,x27,#0x8
7101d0a7cc  ldxr x10,[x9]
7101d0a7d0  add x10,x10,#0x1
7101d0a7d4  stxr w11,x10,[x9]
7101d0a7d8  cbnz w11,0x7101d0a7cc
7101d0a7dc  ldr w23,[x8, #0x50]
7101d0a7e0  ldaxr x8,[x9]
7101d0a7e4  sub x10,x8,#0x1
7101d0a7e8  stlxr w11,x10,[x9]
7101d0a7ec  cbnz w11,0x7101d0a7e0
7101d0a7f0  cbnz x8,0x7101d0a830
7101d0a7f4  ldr x8,[x27]
7101d0a7f8  ldr x8,[x8, #0x10]
7101d0a7fc  mov x0,x27
7101d0a800  blr x8
7101d0a804  mov x0,x27
7101d0a808  bl 0x71039c2670
7101d0a80c  b 0x7101d0a830
7101d0a810  ldp x8,x9,[x19, #0x38]
7101d0a814  sub x9,x9,x8
7101d0a818  asr x9,x9,#0x2
7101d0a81c  cmp x9,x20
7101d0a820  b.ls 0x7101d0ae1c
7101d0a824  ldr w23,[x8, x20, LSL #0x2]
7101d0a828  b 0x7101d0a830
7101d0a82c  ldr w23,[x8, #0x50]
7101d0a830  ldur x10,[x29, #-0x58]
7101d0a834  ldp x9,x10,[x10, #0xa8]
7101d0a838  sub x10,x10,x9
7101d0a83c  orr x11,xzr,#-0x5555555555555556
7101d0a840  movk x11,#0xaaab
7101d0a844  asr x10,x10,#0x4
7101d0a848  mul x10,x10,x11
7101d0a84c  sxtw x8,w23
7101d0a850  cmp x10,x8
7101d0a854  b.ls 0x7101d0ae0c
7101d0a858  orr w10,wzr,#0x30
7101d0a85c  madd x8,x8,x10,x9
7101d0a860  ldr x0,[x8, #0x8]
7101d0a864  mov v0.16B,v8.16B
7101d0a868  mov x1,x26
7101d0a86c  bl 0x7103778300
7101d0a870  ldr w8,[x19, #0x4]
7101d0a874  cmp w8,#0x0
7101d0a878  mov w9,#0x10
7101d0a87c  csel x9,x24,x9,eq
7101d0a880  csel x10,x21,x25,eq
7101d0a884  csel x11,x22,x28,eq
7101d0a888  ldr x10,[x19, x10, LSL #0x0]
7101d0a88c  add x20,x20,#0x1
7101d0a890  ldr x9,[x19, x9, LSL #0x0]
7101d0a894  sub x9,x10,x9
7101d0a898  asr x9,x9,x11
7101d0a89c  cmp x20,w9, UXTW 
7101d0a8a0  b.cc 0x7101d0a7a4
7101d0a8a4  add x9,sp,#0x68
7101d0a8a8  stp x9,x9,[sp, #0x68]
7101d0a8ac  adrp x9,0x7105329000
7101d0a8b0  ldr x9,[x9, #0x740]
7101d0a8b4  ldr x25,[sp, #0x30]
7101d0a8b8  str xzr,[sp, #0x78]
7101d0a8bc  ldr x9,[x9, #0x8]
7101d0a8c0  mov w8,w25
7101d0a8c4  orr w10,wzr,#0x18
7101d0a8c8  madd x0,x8,x10,x9
7101d0a8cc  ldr x8,[x0, #0x8]!
7101d0a8d0  ldr x10,[sp, #0x20]
7101d0a8d4  ldr x9,[x0, #0x8]
7101d0a8d8  sub x9,x9,x8
7101d0a8dc  asr x9,x9,#0x4
7101d0a8e0  cmp x9,x10
7101d0a8e4  b.ls 0x7101d0ae04
7101d0a8e8  add x8,x8,x10, LSL #0x4
7101d0a8ec  ldp x19,x11,[x8]
7101d0a8f0  cbz x11,0x7101d0a908
7101d0a8f4  add x8,x11,#0x8
7101d0a8f8  ldxr x9,[x8]
7101d0a8fc  add x9,x9,#0x1
7101d0a900  stxr w10,x9,[x8]
7101d0a904  cbnz w10,0x7101d0a8f8
7101d0a908  stur x11,[x29, #-0x58]
7101d0a90c  mov x23,x19
7101d0a910  ldr x8,[x23, #0x10]!
7101d0a914  ldr x9,[x23, #0x8]
7101d0a918  sub x10,x9,x8
7101d0a91c  lsr x10,x10,#0x4
7101d0a920  cbz w10,0x7101d0aa04
7101d0a924  mov x20,xzr
7101d0a928  add x21,sp,#0x80
7101d0a92c  sub x9,x9,x8
7101d0a930  asr x9,x9,#0x4
7101d0a934  cmp x9,x20
7101d0a938  b.ls 0x7101d0adfc
7101d0a93c  add x8,x8,x20, LSL #0x4
7101d0a940  ldp x1,x24,[x8]
7101d0a944  cbz x24,0x7101d0a95c
7101d0a948  add x8,x24,#0x8
7101d0a94c  ldxr x9,[x8]
7101d0a950  add x9,x9,#0x1
7101d0a954  stxr w10,x9,[x8]
7101d0a958  cbnz w10,0x7101d0a94c
7101d0a95c  add x0,sp,#0x80
7101d0a960  bl 0x7102397840
7101d0a964  add x0,sp,#0x68
7101d0a968  add x1,sp,#0x80
7101d0a96c  bl 0x7101d09580
7101d0a970  ldr x8,[sp, #0x90]
7101d0a974  cbz x8,0x7101d0a9b8
7101d0a978  ldp x8,x0,[sp, #0x80]
7101d0a97c  ldr x9,[x8, #0x8]
7101d0a980  ldr x10,[x0]
7101d0a984  str x9,[x10, #0x8]
7101d0a988  ldr x9,[x0]
7101d0a98c  ldr x8,[x8, #0x8]
7101d0a990  cmp x0,x21
7101d0a994  str x9,[x8]
7101d0a998  str xzr,[sp, #0x90]
7101d0a99c  b.eq 0x7101d0a9b8
7101d0a9a0  ldr x22,[x0, #0x8]
7101d0a9a4  cbz x0,0x7101d0a9ac
7101d0a9a8  bl 0x710392eb40
7101d0a9ac  cmp x22,x21
7101d0a9b0  mov x0,x22
7101d0a9b4  b.ne 0x7101d0a9a0
7101d0a9b8  cbz x24,0x7101d0a9ec
7101d0a9bc  add x8,x24,#0x8
7101d0a9c0  ldaxr x9,[x8]
7101d0a9c4  sub x10,x9,#0x1
7101d0a9c8  stlxr w11,x10,[x8]
7101d0a9cc  cbnz w11,0x7101d0a9c0
7101d0a9d0  cbnz x9,0x7101d0a9ec
7101d0a9d4  ldr x8,[x24]
7101d0a9d8  ldr x8,[x8, #0x10]
7101d0a9dc  mov x0,x24
7101d0a9e0  blr x8
7101d0a9e4  mov x0,x24
7101d0a9e8  bl 0x71039c2670
7101d0a9ec  ldp x8,x9,[x19, #0x10]
7101d0a9f0  sub x10,x9,x8
7101d0a9f4  add x20,x20,#0x1
7101d0a9f8  lsr x10,x10,#0x4
7101d0a9fc  cmp x20,w10, UXTW 
7101d0aa00  b.cc 0x7101d0a92c
7101d0aa04  ldr x8,[sp, #0x60]
7101d0aa08  str x8,[sp, #0x80]
7101d0aa0c  ldr x8,[sp, #0x58]
7101d0aa10  str x8,[sp, #0x88]
7101d0aa14  ldr x8,[sp, #0x50]
7101d0aa18  str x8,[sp, #0x90]
7101d0aa1c  ldr x8,[sp, #0x48]
7101d0aa20  str x8,[sp, #0x98]
7101d0aa24  ldr x8,[sp, #0x40]
7101d0aa28  cmp w25,#0x4
7101d0aa2c  str x8,[sp, #0xa0]
7101d0aa30  b.hi 0x7101d0aa40
7101d0aa34  add x8,sp,#0x80
7101d0aa38  ldr x21,[x8, w25, SXTW #0x3]
7101d0aa3c  b 0x7101d0aa58
7101d0aa40  adrp x8,0x7105325000
7101d0aa44  add x8,x8,#0xd40
7101d0aa48  ldarb w8,[x8]
7101d0aa4c  tbz w8,#0x0,0x7101d0adb4
7101d0aa50  adrp x21,0x7105325000
7101d0aa54  add x21,x21,#0xd28
7101d0aa58  ldp x9,x10,[x21]
7101d0aa5c  sub x10,x10,x9
7101d0aa60  mov x11,#0x4ec5
7101d0aa64  movk x11,#0xc4ec, LSL #16
7101d0aa68  movk x11,#0xec4e, LSL #32
7101d0aa6c  movk x11,#0x4ec4, LSL #48
7101d0aa70  asr x10,x10,#0x5
7101d0aa74  ldr x8,[sp, #0x38]
7101d0aa78  sxtw x8,w8
7101d0aa7c  mul x10,x10,x11
7101d0aa80  cmp x10,x8
7101d0aa84  b.ls 0x7101d0ae2c
7101d0aa88  mov w10,#0x1a0
7101d0aa8c  madd x19,x8,x10,x9
7101d0aa90  ldr x8,[x19, #0xf8]
7101d0aa94  fmov s8,0x3f800000
7101d0aa98  mov v0.16B,v8.16B
7101d0aa9c  adrp x20,0x710437c000
7101d0aaa0  add x20,x20,#0x785
7101d0aaa4  mov x1,x20
7101d0aaa8  ldr x0,[x8, #0x10]
7101d0aaac  bl 0x7103778300
7101d0aab0  ldr x8,[x19, #0x100]
7101d0aab4  ldr x0,[x8, #0x10]
7101d0aab8  mov v0.16B,v8.16B
7101d0aabc  mov x1,x20
7101d0aac0  bl 0x7103778300
7101d0aac4  ldr x8,[x19, #0xf8]
7101d0aac8  ldr x0,[x8, #0x10]
7101d0aacc  mov v0.16B,v8.16B
7101d0aad0  adrp x20,0x7104433000
7101d0aad4  add x20,x20,#0x394
7101d0aad8  mov x1,x20
7101d0aadc  bl 0x7103778300
7101d0aae0  ldr x8,[x19, #0x100]
7101d0aae4  ldr x0,[x8, #0x10]
7101d0aae8  mov v0.16B,v8.16B
7101d0aaec  mov x1,x20
7101d0aaf0  bl 0x7103778300
7101d0aaf4  ldr x19,[sp, #0x70]
7101d0aaf8  add x26,sp,#0x68
7101d0aafc  cmp x26,x19
7101d0ab00  b.eq 0x7101d0ac8c
7101d0ab04  fmov s8,0x3f800000
7101d0ab08  adrp x20,0x710437c000
7101d0ab0c  add x20,x20,#0x785
7101d0ab10  adrp x21,0x7104433000
7101d0ab14  add x21,x21,#0x394
7101d0ab18  adrp x23,0x7104280000
7101d0ab1c  add x23,x23,#0xbf8
7101d0ab20  adrp x25,0x7105325000
7101d0ab24  add x25,x25,#0xd28
7101d0ab28  mov w22,#0x1a0
7101d0ab2c  b 0x7101d0ab70
7101d0ab30  adrp x0,0x7105325000
7101d0ab34  add x0,x0,#0xd40
7101d0ab38  bl 0x71039c06b0
7101d0ab3c  cbz w0,0x7101d0abd0
7101d0ab40  adrp x0,0x7101d03000
7101d0ab44  add x0,x0,#0x90
7101d0ab48  mov x1,x25
7101d0ab4c  adrp x2,0x7104f17000
7101d0ab50  add x2,x2,#0x0
7101d0ab54  str xzr,[x25]
7101d0ab58  stp xzr,xzr,[x25, #0x8]
7101d0ab5c  bl 0x71000001c0
7101d0ab60  adrp x0,0x7105325000
7101d0ab64  add x0,x0,#0xd40
7101d0ab68  bl 0x71039c06c0
7101d0ab6c  b 0x7101d0abd0
7101d0ab70  ldr x0,[x19, #0x10]
7101d0ab74  ldr w1,[x0, #0x50]
7101d0ab78  ldpsw x24,x27,[x0, #0x4]
7101d0ab7c  bl 0x71023976c0
7101d0ab80  ldr x8,[sp, #0x60]
7101d0ab84  str x8,[sp, #0x80]
7101d0ab88  ldr x8,[sp, #0x58]
7101d0ab8c  str x8,[sp, #0x88]
7101d0ab90  ldr x8,[sp, #0x50]
7101d0ab94  str x8,[sp, #0x90]
7101d0ab98  ldr x8,[sp, #0x48]
7101d0ab9c  str x8,[sp, #0x98]
7101d0aba0  ldr x8,[sp, #0x40]
7101d0aba4  mov w28,w0
7101d0aba8  cmp w24,#0x4
7101d0abac  str x8,[sp, #0xa0]
7101d0abb0  b.hi 0x7101d0abc0
7101d0abb4  add x8,sp,#0x80
7101d0abb8  ldr x0,[x8, x24, LSL #0x3]
7101d0abbc  b 0x7101d0abd4
7101d0abc0  adrp x8,0x7105325000
7101d0abc4  add x8,x8,#0xd40
7101d0abc8  ldarb w8,[x8]
7101d0abcc  tbz w8,#0x0,0x7101d0ab30
7101d0abd0  mov x0,x25
7101d0abd4  ldp x8,x9,[x0]
7101d0abd8  sub x9,x9,x8
7101d0abdc  mov x10,#0x4ec5
7101d0abe0  movk x10,#0xc4ec, LSL #16
7101d0abe4  movk x10,#0xec4e, LSL #32
7101d0abe8  movk x10,#0x4ec4, LSL #48
7101d0abec  asr x9,x9,#0x5
7101d0abf0  mul x9,x9,x10
7101d0abf4  cmp x9,x27
7101d0abf8  b.ls 0x7101d0ae04
7101d0abfc  madd x24,x27,x22,x8
7101d0ac00  ldr x8,[x24, #0xf8]
7101d0ac04  ldr x0,[x8, #0x10]
7101d0ac08  mov v0.16B,v8.16B
7101d0ac0c  mov x1,x20
7101d0ac10  bl 0x7103778300
7101d0ac14  ldr x8,[x24, #0x100]
7101d0ac18  ldr x0,[x8, #0x10]
7101d0ac1c  mov v0.16B,v8.16B
7101d0ac20  mov x1,x20
7101d0ac24  add x27,x24,#0x100
7101d0ac28  bl 0x7103778300
7101d0ac2c  ldr x8,[x24, #0xf8]
7101d0ac30  tbnz w28,#0x1f,0x7101d0ac5c
7101d0ac34  add x0,x8,#0x8
7101d0ac38  mov x1,x23
7101d0ac3c  mov w2,w28
7101d0ac40  bl 0x7103778430
7101d0ac44  ldr x8,[x27]
7101d0ac48  add x0,x8,#0x8
7101d0ac4c  mov x1,x23
7101d0ac50  mov w2,w28
7101d0ac54  bl 0x7103778430
7101d0ac58  b 0x7101d0ac80
7101d0ac5c  ldr x0,[x8, #0x10]
7101d0ac60  mov v0.16B,v8.16B
7101d0ac64  mov x1,x21
7101d0ac68  bl 0x7103778300
7101d0ac6c  ldr x8,[x27]
7101d0ac70  ldr x0,[x8, #0x10]
7101d0ac74  mov v0.16B,v8.16B
7101d0ac78  mov x1,x21
7101d0ac7c  bl 0x7103778300
7101d0ac80  ldr x19,[x19, #0x8]
7101d0ac84  cmp x26,x19
7101d0ac88  b.ne 0x7101d0ab70
7101d0ac8c  ldur x19,[x29, #-0x58]
7101d0ac90  cbz x19,0x7101d0acc4
7101d0ac94  add x8,x19,#0x8
7101d0ac98  ldaxr x9,[x8]
7101d0ac9c  sub x10,x9,#0x1
7101d0aca0  stlxr w11,x10,[x8]
7101d0aca4  cbnz w11,0x7101d0ac98
7101d0aca8  cbnz x9,0x7101d0acc4
7101d0acac  ldr x8,[x19]
7101d0acb0  ldr x8,[x8, #0x10]
7101d0acb4  mov x0,x19
7101d0acb8  blr x8
7101d0acbc  mov x0,x19
7101d0acc0  bl 0x71039c2670
7101d0acc4  ldr x8,[sp, #0x78]
7101d0acc8  cbz x8,0x7101d0ad10
7101d0accc  ldp x8,x0,[sp, #0x68]
7101d0acd0  ldr x9,[x8, #0x8]
7101d0acd4  ldr x10,[x0]
7101d0acd8  str x9,[x10, #0x8]
7101d0acdc  ldr x9,[x0]
7101d0ace0  ldr x8,[x8, #0x8]
7101d0ace4  add x19,sp,#0x68
7101d0ace8  cmp x0,x19
7101d0acec  str x9,[x8]
7101d0acf0  str xzr,[sp, #0x78]
7101d0acf4  b.eq 0x7101d0ad10
7101d0acf8  ldr x20,[x0, #0x8]
7101d0acfc  cbz x0,0x7101d0ad04
7101d0ad00  bl 0x710392eb40
7101d0ad04  cmp x20,x19
7101d0ad08  mov x0,x20
7101d0ad0c  b.ne 0x7101d0acf8
7101d0ad10  ldr x19,[sp, #0x28]
7101d0ad14  cbz x19,0x7101d0ad48
7101d0ad18  add x8,x19,#0x8
7101d0ad1c  ldaxr x9,[x8]
7101d0ad20  sub x10,x9,#0x1
7101d0ad24  stlxr w11,x10,[x8]
7101d0ad28  cbnz w11,0x7101d0ad1c
7101d0ad2c  cbnz x9,0x7101d0ad48
7101d0ad30  ldr x8,[x19]
7101d0ad34  ldr x8,[x8, #0x10]
7101d0ad38  mov x0,x19
7101d0ad3c  blr x8
7101d0ad40  mov x0,x19
7101d0ad44  bl 0x71039c2670
7101d0ad48  ldr d8,[sp, #0xb0]
7101d0ad4c  ldp x29,x30,[sp, #0x110]
7101d0ad50  ldp x20,x19,[sp, #0x100]
7101d0ad54  ldp x22,x21,[sp, #0xf0]
7101d0ad58  ldp x24,x23,[sp, #0xe0]
7101d0ad5c  ldp x26,x25,[sp, #0xd0]
7101d0ad60  ldp x28,x27,[sp, #0xc0]
7101d0ad64  add sp,sp,#0x120
7101d0ad68  ret
7101d0ad6c  adrp x0,0x7105325000
7101d0ad70  add x0,x0,#0xd40
7101d0ad74  bl 0x71039c06b0
7101d0ad78  adrp x24,0x7105325000
7101d0ad7c  add x24,x24,#0xd28
7101d0ad80  cbz w0,0x7101d0a6ac
7101d0ad84  adrp x0,0x7101d03000
7101d0ad88  add x0,x0,#0x90
7101d0ad8c  adrp x2,0x7104f17000
7101d0ad90  add x2,x2,#0x0
7101d0ad94  mov x1,x24
7101d0ad98  str xzr,[x24]
7101d0ad9c  stp xzr,xzr,[x24, #0x8]
7101d0ada0  bl 0x71000001c0
7101d0ada4  adrp x0,0x7105325000
7101d0ada8  add x0,x0,#0xd40
7101d0adac  bl 0x71039c06c0
7101d0adb0  b 0x7101d0a6ac
7101d0adb4  adrp x0,0x7105325000
7101d0adb8  add x0,x0,#0xd40
7101d0adbc  bl 0x71039c06b0
7101d0adc0  adrp x21,0x7105325000
7101d0adc4  add x21,x21,#0xd28
7101d0adc8  cbz w0,0x7101d0aa58
7101d0adcc  adrp x0,0x7101d03000
7101d0add0  add x0,x0,#0x90
7101d0add4  adrp x2,0x7104f17000
7101d0add8  add x2,x2,#0x0
7101d0addc  mov x1,x21
7101d0ade0  str xzr,[x21]
7101d0ade4  stp xzr,xzr,[x21, #0x8]
7101d0ade8  bl 0x71000001c0
7101d0adec  adrp x0,0x7105325000
7101d0adf0  add x0,x0,#0xd40
7101d0adf4  bl 0x71039c06c0
7101d0adf8  b 0x7101d0aa58
7101d0adfc  mov x0,x23
7101d0ae00  bl 0x71039c1330
7101d0ae04  bl 0x71039c1330
7101d0ae08  bl 0x71039c2650
7101d0ae0c  ldr x0,[sp, #0x8]
7101d0ae10  bl 0x71039c1330
7101d0ae14  ldr x0,[sp, #0x18]
7101d0ae18  bl 0x71039c1330
7101d0ae1c  ldr x0,[sp, #0x10]
7101d0ae20  bl 0x71039c1330
7101d0ae24  mov x0,x24
7101d0ae28  bl 0x71039c1330
7101d0ae2c  mov x0,x21
7101d0ae30  bl 0x71039c1330
