// addr:      7101b4a340
// offset:    0x1b4a340
// name:      FUN_7101b4a340
// mangled:   
// size:      1056

7101b4a340  sub sp,sp,#0x80
7101b4a344  str x21,[sp, #0x50]
7101b4a348  stp x20,x19,[sp, #0x60]
7101b4a34c  stp x29,x30,[sp, #0x70]
7101b4a350  add x29,sp,#0x70
7101b4a354  mov w21,w3
7101b4a358  mov w20,w2
7101b4a35c  mov x19,x0
7101b4a360  cmp w1,#0x4
7101b4a364  strb wzr,[sp, #0x10]
7101b4a368  str xzr,[sp, #0x8]
7101b4a36c  b.hi 0x7101b4a6bc
7101b4a370  mov w8,w1
7101b4a374  adrp x9,0x71044f8000
7101b4a378  add x9,x9,#0x70c
7101b4a37c  ldrsw x8,[x9, x8, LSL #0x2]
7101b4a380  add x8,x8,x9
7101b4a384  br x8
7101b4a388  mov x10,#0x735f
7101b4a38c  movk x10,#0x6174, LSL #16
7101b4a390  movk x10,#0x6567, LSL #32
7101b4a394  movk x10,#0x705f, LSL #48
7101b4a398  str x10,[sp, #0x18]
7101b4a39c  mov w10,#0x6b6f
7101b4a3a0  strh w10,[sp, #0x20]
7101b4a3a4  mov x10,#0x5f65
7101b4a3a8  movk x10,#0x7473, LSL #16
7101b4a3ac  movk x10,#0x6461, LSL #32
7101b4a3b0  movk x10,#0x7569, LSL #48
7101b4a3b4  stur x10,[sp, #0x22]
7101b4a3b8  mov w10,#0x5f6d
7101b4a3bc  movk w10,#0x7974, LSL #16
7101b4a3c0  stur w10,[sp, #0x2a]
7101b4a3c4  mov w10,#0x6570
7101b4a3c8  mov x9,#0x656d
7101b4a3cc  movk x9,#0x5f6c, LSL #16
7101b4a3d0  movk x9,#0x6e69, LSL #32
7101b4a3d4  movk x9,#0x6f66, LSL #48
7101b4a3d8  str x9,[sp, #0x10]
7101b4a3dc  strh w10,[sp, #0x2e]
7101b4a3e0  mov x10,#0x6e5f
7101b4a3e4  movk x10,#0x726f, LSL #16
7101b4a3e8  movk x10,#0x616d, LSL #32
7101b4a3ec  movk x10,#0x6c, LSL #48
7101b4a3f0  str x10,[sp, #0x30]
7101b4a3f4  add x9,sp,#0x8
7101b4a3f8  mov w10,#0x27
7101b4a3fc  str w10,[sp, #0xc]
7101b4a400  mov w8,#0x9dc5
7101b4a404  movk w8,#0x811c, LSL #16
7101b4a408  add x9,x9,#0x9
7101b4a40c  mov w11,#0x6d
7101b4a410  mov w10,#0x89
7101b4a414  mul w8,w8,w10
7101b4a418  and w11,w11,#0xff
7101b4a41c  eor w8,w8,w11
7101b4a420  ldrb w11,[x9], #0x1
7101b4a424  cbnz w11,0x7101b4a414
7101b4a428  b 0x7101b4a6b8
7101b4a42c  mov w10,#0x6b6f
7101b4a430  strh w10,[sp, #0x20]
7101b4a434  mov x10,#0x5f65
7101b4a438  movk x10,#0x7473, LSL #16
7101b4a43c  movk x10,#0x6461, LSL #32
7101b4a440  movk x10,#0x7569, LSL #48
7101b4a444  stur x10,[sp, #0x22]
7101b4a448  mov w10,#0x5f6d
7101b4a44c  movk w10,#0x7974, LSL #16
7101b4a450  stur w10,[sp, #0x2a]
7101b4a454  mov w10,#0x6570
7101b4a458  strh w10,[sp, #0x2e]
7101b4a45c  mov x10,#0x655f
7101b4a460  movk x10,#0x656c, LSL #16
7101b4a464  mov x9,#0x735f
7101b4a468  movk x9,#0x6174, LSL #16
7101b4a46c  movk x9,#0x6567, LSL #32
7101b4a470  movk x9,#0x705f, LSL #48
7101b4a474  movk x10,#0x7463, LSL #32
7101b4a478  movk x10,#0x6972, LSL #48
7101b4a47c  str x10,[sp, #0x30]
7101b4a480  mov x8,#0x656d
7101b4a484  movk x8,#0x5f6c, LSL #16
7101b4a488  str x9,[sp, #0x18]
7101b4a48c  mov w10,#0x63
7101b4a490  strh w10,[sp, #0x38]
7101b4a494  movk x8,#0x6e69, LSL #32
7101b4a498  movk x8,#0x6f66, LSL #48
7101b4a49c  str x8,[sp, #0x10]
7101b4a4a0  add x9,sp,#0x8
7101b4a4a4  mov w10,#0x29
7101b4a4a8  str w10,[sp, #0xc]
7101b4a4ac  mov w8,#0x9dc5
7101b4a4b0  movk w8,#0x811c, LSL #16
7101b4a4b4  add x9,x9,#0x9
7101b4a4b8  mov w11,#0x6d
7101b4a4bc  mov w10,#0x89
7101b4a4c0  mul w8,w8,w10
7101b4a4c4  and w11,w11,#0xff
7101b4a4c8  eor w8,w8,w11
7101b4a4cc  ldrb w11,[x9], #0x1
7101b4a4d0  cbnz w11,0x7101b4a4c0
7101b4a4d4  b 0x7101b4a6b8
7101b4a4d8  mov w10,#0x6b6f
7101b4a4dc  strh w10,[sp, #0x20]
7101b4a4e0  mov x10,#0x5f65
7101b4a4e4  movk x10,#0x7473, LSL #16
7101b4a4e8  movk x10,#0x6461, LSL #32
7101b4a4ec  movk x10,#0x7569, LSL #48
7101b4a4f0  stur x10,[sp, #0x22]
7101b4a4f4  mov w10,#0x5f6d
7101b4a4f8  movk w10,#0x7974, LSL #16
7101b4a4fc  mov x9,#0x735f
7101b4a500  movk x9,#0x6174, LSL #16
7101b4a504  strb wzr,[sp, #0x34]
7101b4a508  stur w10,[sp, #0x2a]
7101b4a50c  mov w10,#0x6570
7101b4a510  mov x8,#0x656d
7101b4a514  movk x8,#0x5f6c, LSL #16
7101b4a518  movk x9,#0x6567, LSL #32
7101b4a51c  movk x9,#0x705f, LSL #48
7101b4a520  strh w10,[sp, #0x2e]
7101b4a524  mov w10,#0x665f
7101b4a528  movk w10,#0x796c, LSL #16
7101b4a52c  movk x8,#0x6e69, LSL #32
7101b4a530  movk x8,#0x6f66, LSL #48
7101b4a534  str x9,[sp, #0x18]
7101b4a538  add x9,sp,#0x8
7101b4a53c  str w10,[sp, #0x30]
7101b4a540  str x8,[sp, #0x10]
7101b4a544  mov w10,#0x24
7101b4a548  mov w8,#0x9dc5
7101b4a54c  movk w8,#0x811c, LSL #16
7101b4a550  add x9,x9,#0x9
7101b4a554  str w10,[sp, #0xc]
7101b4a558  mov w11,#0x6d
7101b4a55c  mov w10,#0x89
7101b4a560  mul w8,w8,w10
7101b4a564  and w11,w11,#0xff
7101b4a568  eor w8,w8,w11
7101b4a56c  ldrb w11,[x9], #0x1
7101b4a570  cbnz w11,0x7101b4a560
7101b4a574  b 0x7101b4a6b8
7101b4a578  mov x10,#0x735f
7101b4a57c  movk x10,#0x6174, LSL #16
7101b4a580  movk x10,#0x6567, LSL #32
7101b4a584  movk x10,#0x705f, LSL #48
7101b4a588  str x10,[sp, #0x18]
7101b4a58c  mov w10,#0x6b6f
7101b4a590  strh w10,[sp, #0x20]
7101b4a594  mov x10,#0x5f65
7101b4a598  movk x10,#0x7473, LSL #16
7101b4a59c  movk x10,#0x6461, LSL #32
7101b4a5a0  movk x10,#0x7569, LSL #48
7101b4a5a4  stur x10,[sp, #0x22]
7101b4a5a8  mov w10,#0x5f6d
7101b4a5ac  movk w10,#0x7974, LSL #16
7101b4a5b0  stur w10,[sp, #0x2a]
7101b4a5b4  mov w10,#0x6570
7101b4a5b8  mov x9,#0x656d
7101b4a5bc  movk x9,#0x5f6c, LSL #16
7101b4a5c0  movk x9,#0x6e69, LSL #32
7101b4a5c4  movk x9,#0x6f66, LSL #48
7101b4a5c8  str x9,[sp, #0x10]
7101b4a5cc  strh w10,[sp, #0x2e]
7101b4a5d0  mov x10,#0x675f
7101b4a5d4  movk x10,#0x6f72, LSL #16
7101b4a5d8  movk x10,#0x6e75, LSL #32
7101b4a5dc  movk x10,#0x64, LSL #48
7101b4a5e0  str x10,[sp, #0x30]
7101b4a5e4  add x9,sp,#0x8
7101b4a5e8  mov w10,#0x27
7101b4a5ec  str w10,[sp, #0xc]
7101b4a5f0  mov w8,#0x9dc5
7101b4a5f4  movk w8,#0x811c, LSL #16
7101b4a5f8  add x9,x9,#0x9
7101b4a5fc  mov w11,#0x6d
7101b4a600  mov w10,#0x89
7101b4a604  mul w8,w8,w10
7101b4a608  and w11,w11,#0xff
7101b4a60c  eor w8,w8,w11
7101b4a610  ldrb w11,[x9], #0x1
7101b4a614  cbnz w11,0x7101b4a604
7101b4a618  b 0x7101b4a6b8
7101b4a61c  mov w10,#0x6b6f
7101b4a620  strh w10,[sp, #0x20]
7101b4a624  mov x10,#0x5f65
7101b4a628  movk x10,#0x7473, LSL #16
7101b4a62c  movk x10,#0x6461, LSL #32
7101b4a630  movk x10,#0x7569, LSL #48
7101b4a634  stur x10,[sp, #0x22]
7101b4a638  mov w10,#0x5f6d
7101b4a63c  movk w10,#0x7974, LSL #16
7101b4a640  mov x9,#0x735f
7101b4a644  movk x9,#0x6174, LSL #16
7101b4a648  strb wzr,[sp, #0x34]
7101b4a64c  stur w10,[sp, #0x2a]
7101b4a650  mov w10,#0x6570
7101b4a654  mov x8,#0x656d
7101b4a658  movk x8,#0x5f6c, LSL #16
7101b4a65c  movk x9,#0x6567, LSL #32
7101b4a660  movk x9,#0x705f, LSL #48
7101b4a664  strh w10,[sp, #0x2e]
7101b4a668  mov w10,#0x695f
7101b4a66c  movk w10,#0x6563, LSL #16
7101b4a670  movk x8,#0x6e69, LSL #32
7101b4a674  movk x8,#0x6f66, LSL #48
7101b4a678  str x9,[sp, #0x18]
7101b4a67c  add x9,sp,#0x8
7101b4a680  str w10,[sp, #0x30]
7101b4a684  str x8,[sp, #0x10]
7101b4a688  mov w10,#0x24
7101b4a68c  mov w8,#0x9dc5
7101b4a690  movk w8,#0x811c, LSL #16
7101b4a694  add x9,x9,#0x9
7101b4a698  str w10,[sp, #0xc]
7101b4a69c  mov w11,#0x6d
7101b4a6a0  mov w10,#0x89
7101b4a6a4  mul w8,w8,w10
7101b4a6a8  and w11,w11,#0xff
7101b4a6ac  eor w8,w8,w11
7101b4a6b0  ldrb w11,[x9], #0x1
7101b4a6b4  cbnz w11,0x7101b4a6a4
7101b4a6b8  str w8,[sp, #0x8]
7101b4a6bc  add x8,sp,#0x8
7101b4a6c0  add x0,x19,#0x38
7101b4a6c4  add x1,x8,#0x8
7101b4a6c8  bl 0x710377a120
7101b4a6cc  tbz w21,#0x0,0x7101b4a6e4
7101b4a6d0  add x0,x19,#0x58
7101b4a6d4  adrp x1,0x71043be000
7101b4a6d8  add x1,x1,#0x36b
7101b4a6dc  bl 0x710377a120
7101b4a6e0  b 0x7101b4a704
7101b4a6e4  ldr x8,[x19, #0x60]
7101b4a6e8  ldr x0,[x8, #0x10]
7101b4a6ec  cbz x0,0x7101b4a704
7101b4a6f0  add x1,sp,#0x8
7101b4a6f4  mov w2,wzr
7101b4a6f8  mov w3,wzr
7101b4a6fc  str wzr,[sp, #0x8]
7101b4a700  bl 0x71037a2270
7101b4a704  ldr x8,[x19, #0x70]
7101b4a708  ldr x0,[x8, #0x10]
7101b4a70c  cbz x0,0x7101b4a724
7101b4a710  add x1,sp,#0x8
7101b4a714  mov w2,wzr
7101b4a718  mov w3,wzr
7101b4a71c  str wzr,[sp, #0x8]
7101b4a720  bl 0x71037a2270
7101b4a724  cmp w20,#0x8
7101b4a728  mov w8,#0x8
7101b4a72c  csel w8,w20,w8,lt
7101b4a730  cmp w8,#0x2
7101b4a734  mov w9,#0x2
7101b4a738  csel w8,w8,w9,gt
7101b4a73c  sub w8,w8,#0x2
7101b4a740  scvtf s0,w8
7101b4a744  add x0,x19,#0x168
7101b4a748  bl 0x710377b010
7101b4a74c  ldp x29,x30,[sp, #0x70]
7101b4a750  ldr x21,[sp, #0x50]
7101b4a754  ldp x20,x19,[sp, #0x60]
7101b4a758  add sp,sp,#0x80
7101b4a75c  ret
