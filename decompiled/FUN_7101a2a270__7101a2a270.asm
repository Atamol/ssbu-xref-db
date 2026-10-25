// addr:      7101a2a270
// offset:    0x1a2a270
// name:      FUN_7101a2a270
// mangled:   
// size:      3032

7101a2a270  sub sp,sp,#0x100
7101a2a274  str d8,[sp, #0x90]
7101a2a278  stp x28,x27,[sp, #0xa0]
7101a2a27c  stp x26,x25,[sp, #0xb0]
7101a2a280  stp x24,x23,[sp, #0xc0]
7101a2a284  stp x22,x21,[sp, #0xd0]
7101a2a288  stp x20,x19,[sp, #0xe0]
7101a2a28c  stp x29,x30,[sp, #0xf0]
7101a2a290  add x29,sp,#0xf0
7101a2a294  ldrb w8,[x0, #0x169]
7101a2a298  mov w20,w1
7101a2a29c  mov x19,x0
7101a2a2a0  cbnz w8,0x7101a2a714
7101a2a2a4  tbz w20,#0x0,0x7101a2a714
7101a2a2a8  ldr x23,[x19, #0x250]
7101a2a2ac  ldr x24,[x19, #0x258]
7101a2a2b0  cmp x23,x24
7101a2a2b4  b.eq 0x7101a2a3d4
7101a2a2b8  sub x8,x24,#0x10
7101a2a2bc  sub x8,x8,x23
7101a2a2c0  lsr x10,x8,#0x4
7101a2a2c4  add w8,w10,#0x1
7101a2a2c8  and x9,x8,#0x1
7101a2a2cc  mov w8,wzr
7101a2a2d0  cbz x10,0x7101a2add4
7101a2a2d4  sub x11,x9,#0x1
7101a2a2d8  sub x11,x11,x10
7101a2a2dc  mov x10,x23
7101a2a2e0  ldr x12,[x10, #0x8]
7101a2a2e4  ldr w12,[x12, #0x1f8]
7101a2a2e8  cmp w12,#0x3
7101a2a2ec  ldr x12,[x10, #0x18]
7101a2a2f0  add x10,x10,#0x20
7101a2a2f4  cinc w8,w8,ne
7101a2a2f8  ldr w12,[x12, #0x1f8]
7101a2a2fc  cmp w12,#0x3
7101a2a300  cinc w8,w8,ne
7101a2a304  adds x11,x11,#0x2
7101a2a308  b.ne 0x7101a2a2e0
7101a2a30c  cbnz x9,0x7101a2addc
7101a2a310  tbz w2,#0x0,0x7101a2a3dc
7101a2a314  ldr w8,[x19, #0x160]
7101a2a318  sub w9,w8,#0x3
7101a2a31c  cmp w9,#0x1
7101a2a320  b.hi 0x7101a2a470
7101a2a324  cmp x23,x24
7101a2a328  b.eq 0x7101a2a714
7101a2a32c  mov w21,#0xffffffff
7101a2a330  adrp x22,0x7104471000
7101a2a334  add x22,x22,#0x3e0
7101a2a338  ldr x25,[x23, #0x8]
7101a2a33c  ldrsw x8,[x25, #0x150]
7101a2a340  cmp w8,#0x8
7101a2a344  b.cs 0x7101a2ae30
7101a2a348  ldr w2,[x22, x8, LSL #0x2]
7101a2a34c  ldr w1,[x25, #0x1f8]
7101a2a350  ldrb w3,[x25, #0x6bb]
7101a2a354  str w2,[x25, #0x1fc]
7101a2a358  ldr x0,[x25, #0x5e8]
7101a2a35c  bl 0x7101a000c0
7101a2a360  ldr w8,[x25, #0x1f8]
7101a2a364  cmp w8,#0x2
7101a2a368  b.ne 0x7101a2a38c
7101a2a36c  ldrb w8,[x25, #0x6bd]
7101a2a370  cbz w8,0x7101a2a3c4
7101a2a374  ldr x8,[x25, #0x5e8]
7101a2a378  ldr x8,[x8, #0x80]
7101a2a37c  ldr x0,[x8, #0x10]
7101a2a380  cbz x0,0x7101a2a3c4
7101a2a384  add x1,x25,#0x2c0
7101a2a388  b 0x7101a2a3b8
7101a2a38c  cbnz w8,0x7101a2a3c4
7101a2a390  ldrb w8,[x25, #0x1c4]
7101a2a394  cmp w8,#0xff
7101a2a398  b.eq 0x7101a2a3c4
7101a2a39c  ldr w8,[x25, #0x394]
7101a2a3a0  cbnz w8,0x7101a2a3c4
7101a2a3a4  ldr x8,[x25, #0x5e8]
7101a2a3a8  ldr x8,[x8, #0x80]
7101a2a3ac  ldr x0,[x8, #0x10]
7101a2a3b0  cbz x0,0x7101a2a3c4
7101a2a3b4  add x1,x25,#0x1d0
7101a2a3b8  mov w3,#0x1
7101a2a3bc  mov w2,w21
7101a2a3c0  bl 0x71037a2270
7101a2a3c4  add x23,x23,#0x10
7101a2a3c8  cmp x24,x23
7101a2a3cc  b.ne 0x7101a2a338
7101a2a3d0  b 0x7101a2a714
7101a2a3d4  mov w8,wzr
7101a2a3d8  tbnz w2,#0x0,0x7101a2a314
7101a2a3dc  cmp w8,#0x2
7101a2a3e0  b.ne 0x7101a2a714
7101a2a3e4  add x0,x19,#0x250
7101a2a3e8  subs x8,x24,x23
7101a2a3ec  b.eq 0x7101a2ae44
7101a2a3f0  asr x8,x8,#0x4
7101a2a3f4  cmp x8,#0x1
7101a2a3f8  b.ls 0x7101a2ae44
7101a2a3fc  ldr x8,[x23, #0x8]
7101a2a400  ldr w9,[x8, #0x1f8]
7101a2a404  cmp w9,#0x3
7101a2a408  b.eq 0x7101a2a714
7101a2a40c  ldr x21,[x23, #0x18]
7101a2a410  ldr w1,[x21, #0x1f8]
7101a2a414  cmp w1,#0x3
7101a2a418  b.eq 0x7101a2a714
7101a2a41c  ldr w8,[x8, #0x1fc]
7101a2a420  ldr w9,[x21, #0x1fc]
7101a2a424  cmp w8,w9
7101a2a428  b.ne 0x7101a2a714
7101a2a42c  ldrb w3,[x21, #0x6bb]
7101a2a430  ldr x0,[x21, #0x5e8]
7101a2a434  cmp w8,#0x3
7101a2a438  csinc w2,wzr,w8,eq
7101a2a43c  str w2,[x21, #0x1fc]
7101a2a440  bl 0x7101a000c0
7101a2a444  ldr w8,[x21, #0x1f8]
7101a2a448  cmp w8,#0x2
7101a2a44c  b.ne 0x7101a2adf4
7101a2a450  ldrb w8,[x21, #0x6bd]
7101a2a454  cbz w8,0x7101a2a714
7101a2a458  ldr x8,[x21, #0x5e8]
7101a2a45c  ldr x8,[x8, #0x80]
7101a2a460  ldr x0,[x8, #0x10]
7101a2a464  cbz x0,0x7101a2a714
7101a2a468  add x1,x21,#0x2c0
7101a2a46c  b 0x7101a2ae20
7101a2a470  add w9,w8,#0x1
7101a2a474  add w10,w8,#0x2
7101a2a478  cmp w9,#0x0
7101a2a47c  csinc w9,w10,w8,lt
7101a2a480  cmp w8,#0x1
7101a2a484  asr w25,w9,#0x1
7101a2a488  add x21,x19,#0x250
7101a2a48c  b.lt 0x7101a2a554
7101a2a490  sxtw x26,w25
7101a2a494  mov w27,#0x8
7101a2a498  mov w28,#0x1
7101a2a49c  mov w22,#0xffffffff
7101a2a4a0  b 0x7101a2a4b4
7101a2a4a4  ldr x24,[x19, #0x258]
7101a2a4a8  ldr x23,[x19, #0x250]
7101a2a4ac  add x27,x27,#0x10
7101a2a4b0  add x28,x28,#0x1
7101a2a4b4  sub x9,x24,x23
7101a2a4b8  sub x8,x28,#0x1
7101a2a4bc  asr x9,x9,#0x4
7101a2a4c0  cmp x9,x8
7101a2a4c4  b.ls 0x7101a2ae3c
7101a2a4c8  ldr x23,[x23, x27, LSL #0x0]
7101a2a4cc  ldr w1,[x23, #0x1f8]
7101a2a4d0  ldrb w3,[x23, #0x6bb]
7101a2a4d4  ldr x0,[x23, #0x5e8]
7101a2a4d8  mov w2,wzr
7101a2a4dc  str wzr,[x23, #0x1fc]
7101a2a4e0  bl 0x7101a000c0
7101a2a4e4  ldr w8,[x23, #0x1f8]
7101a2a4e8  cmp w8,#0x2
7101a2a4ec  b.ne 0x7101a2a510
7101a2a4f0  ldrb w8,[x23, #0x6bd]
7101a2a4f4  cbz w8,0x7101a2a548
7101a2a4f8  ldr x8,[x23, #0x5e8]
7101a2a4fc  ldr x8,[x8, #0x80]
7101a2a500  ldr x0,[x8, #0x10]
7101a2a504  cbz x0,0x7101a2a548
7101a2a508  add x1,x23,#0x2c0
7101a2a50c  b 0x7101a2a53c
7101a2a510  cbnz w8,0x7101a2a548
7101a2a514  ldrb w8,[x23, #0x1c4]
7101a2a518  cmp w8,#0xff
7101a2a51c  b.eq 0x7101a2a548
7101a2a520  ldr w8,[x23, #0x394]
7101a2a524  cbnz w8,0x7101a2a548
7101a2a528  ldr x8,[x23, #0x5e8]
7101a2a52c  ldr x8,[x8, #0x80]
7101a2a530  ldr x0,[x8, #0x10]
7101a2a534  cbz x0,0x7101a2a548
7101a2a538  add x1,x23,#0x1d0
7101a2a53c  mov w3,#0x1
7101a2a540  mov w2,w22
7101a2a544  bl 0x71037a2270
7101a2a548  cmp x28,x26
7101a2a54c  b.lt 0x7101a2a4a4
7101a2a550  ldr w8,[x19, #0x160]
7101a2a554  cmp w25,w8
7101a2a558  b.ge 0x7101a2a61c
7101a2a55c  sxtw x23,w25
7101a2a560  mov w24,#0x8
7101a2a564  bfm x24,x23,#0x3c,#0x3b
7101a2a568  mov w25,#0x1
7101a2a56c  mov w22,#0xffffffff
7101a2a570  ldr x9,[x19, #0x258]
7101a2a574  ldr x8,[x19, #0x250]
7101a2a578  sub x9,x9,x8
7101a2a57c  asr x9,x9,#0x4
7101a2a580  cmp x9,x23
7101a2a584  b.ls 0x7101a2ae3c
7101a2a588  ldr x26,[x8, x24, LSL #0x0]
7101a2a58c  ldr w1,[x26, #0x1f8]
7101a2a590  ldrb w3,[x26, #0x6bb]
7101a2a594  ldr x0,[x26, #0x5e8]
7101a2a598  mov w2,#0x1
7101a2a59c  str w25,[x26, #0x1fc]
7101a2a5a0  bl 0x7101a000c0
7101a2a5a4  ldr w8,[x26, #0x1f8]
7101a2a5a8  cmp w8,#0x2
7101a2a5ac  b.ne 0x7101a2a5d0
7101a2a5b0  ldrb w8,[x26, #0x6bd]
7101a2a5b4  cbz w8,0x7101a2a608
7101a2a5b8  ldr x8,[x26, #0x5e8]
7101a2a5bc  ldr x8,[x8, #0x80]
7101a2a5c0  ldr x0,[x8, #0x10]
7101a2a5c4  cbz x0,0x7101a2a608
7101a2a5c8  add x1,x26,#0x2c0
7101a2a5cc  b 0x7101a2a5fc
7101a2a5d0  cbnz w8,0x7101a2a608
7101a2a5d4  ldrb w8,[x26, #0x1c4]
7101a2a5d8  cmp w8,#0xff
7101a2a5dc  b.eq 0x7101a2a608
7101a2a5e0  ldr w8,[x26, #0x394]
7101a2a5e4  cbnz w8,0x7101a2a608
7101a2a5e8  ldr x8,[x26, #0x5e8]
7101a2a5ec  ldr x8,[x8, #0x80]
7101a2a5f0  ldr x0,[x8, #0x10]
7101a2a5f4  cbz x0,0x7101a2a608
7101a2a5f8  add x1,x26,#0x1d0
7101a2a5fc  mov w3,#0x1
7101a2a600  mov w2,w22
7101a2a604  bl 0x71037a2270
7101a2a608  ldrsw x8,[x19, #0x160]
7101a2a60c  add x23,x23,#0x1
7101a2a610  add x24,x24,#0x10
7101a2a614  cmp x23,x8
7101a2a618  b.lt 0x7101a2a570
7101a2a61c  ldr x10,[x19, #0x258]
7101a2a620  ldr x9,[x19, #0x250]
7101a2a624  sub x10,x10,x9
7101a2a628  asr x10,x10,#0x4
7101a2a62c  cmp w8,w10
7101a2a630  b.ge 0x7101a2a714
7101a2a634  sxtw x23,w8
7101a2a638  mov w24,#0x8
7101a2a63c  bfm x24,x23,#0x3c,#0x3b
7101a2a640  mov w22,#0xffffffff
7101a2a644  mov w25,#0x1
7101a2a648  cmp x10,x23
7101a2a64c  b.ls 0x7101a2ae3c
7101a2a650  ldr x26,[x9, x24, LSL #0x0]
7101a2a654  ldrb w8,[x26, #0x150]
7101a2a658  tbnz w8,#0x0,0x7101a2a674
7101a2a65c  ldr w1,[x26, #0x1f8]
7101a2a660  ldrb w3,[x26, #0x6bb]
7101a2a664  mov w2,wzr
7101a2a668  ldr x0,[x26, #0x5e8]
7101a2a66c  str wzr,[x26, #0x1fc]
7101a2a670  b 0x7101a2a688
7101a2a674  ldr w1,[x26, #0x1f8]
7101a2a678  ldrb w3,[x26, #0x6bb]
7101a2a67c  mov w2,#0x1
7101a2a680  ldr x0,[x26, #0x5e8]
7101a2a684  str w25,[x26, #0x1fc]
7101a2a688  bl 0x7101a000c0
7101a2a68c  ldr w8,[x26, #0x1f8]
7101a2a690  cmp w8,#0x2
7101a2a694  b.ne 0x7101a2a6b8
7101a2a698  ldrb w8,[x26, #0x6bd]
7101a2a69c  cbz w8,0x7101a2a6f0
7101a2a6a0  ldr x8,[x26, #0x5e8]
7101a2a6a4  ldr x8,[x8, #0x80]
7101a2a6a8  ldr x0,[x8, #0x10]
7101a2a6ac  cbz x0,0x7101a2a6f0
7101a2a6b0  add x1,x26,#0x2c0
7101a2a6b4  b 0x7101a2a6e4
7101a2a6b8  cbnz w8,0x7101a2a6f0
7101a2a6bc  ldrb w8,[x26, #0x1c4]
7101a2a6c0  cmp w8,#0xff
7101a2a6c4  b.eq 0x7101a2a6f0
7101a2a6c8  ldr w8,[x26, #0x394]
7101a2a6cc  cbnz w8,0x7101a2a6f0
7101a2a6d0  ldr x8,[x26, #0x5e8]
7101a2a6d4  ldr x8,[x8, #0x80]
7101a2a6d8  ldr x0,[x8, #0x10]
7101a2a6dc  cbz x0,0x7101a2a6f0
7101a2a6e0  add x1,x26,#0x1d0
7101a2a6e4  mov w3,#0x1
7101a2a6e8  mov w2,w22
7101a2a6ec  bl 0x71037a2270
7101a2a6f0  ldr x8,[x19, #0x258]
7101a2a6f4  ldr x9,[x19, #0x250]
7101a2a6f8  sub x8,x8,x9
7101a2a6fc  add x23,x23,#0x1
7101a2a700  add x24,x24,#0x10
7101a2a704  asr x10,x8,#0x4
7101a2a708  lsr x8,x8,#0x4
7101a2a70c  cmp x23,w8, SXTW 
7101a2a710  b.lt 0x7101a2a648
7101a2a714  and w9,w20,#0x1
7101a2a718  ldr w10,[x19, #0x16c]
7101a2a71c  adrp x11,0x7104307000
7101a2a720  add x11,x11,#0xf27
7101a2a724  strb w9,[x19, #0x169]
7101a2a728  adrp x9,0x71043ce000
7101a2a72c  add x9,x9,#0xf13
7101a2a730  tst w20,#0x1
7101a2a734  csel x9,x9,x11,ne
7101a2a738  adrp x11,0x7104339000
7101a2a73c  add x11,x11,#0xbb1
7101a2a740  str xzr,[sp]
7101a2a744  adrp x12,0x71043ce000
7101a2a748  add x12,x12,#0xef7
7101a2a74c  csel x11,x12,x11,ne
7101a2a750  adrp x12,0x71042d5000
7101a2a754  add x12,x12,#0xc81
7101a2a758  tst w20,#0x1
7101a2a75c  adrp x13,0x7104432000
7101a2a760  add x13,x13,#0xb7b
7101a2a764  csel x12,x13,x12,ne
7101a2a768  cmp w10,#0x3
7101a2a76c  csel x11,x11,x12,ne
7101a2a770  cmp w10,#0x4
7101a2a774  mov x8,xzr
7101a2a778  csel x9,x9,x11,eq
7101a2a77c  mov x10,sp
7101a2a780  b 0x7101a2a78c
7101a2a784  add x8,x8,#0x2
7101a2a788  strb w11,[x12, #0x9]
7101a2a78c  add x11,x9,x8
7101a2a790  ldrb w13,[x11]
7101a2a794  cbz w13,0x7101a2a7c0
7101a2a798  add w14,w8,#0x1
7101a2a79c  add x12,x10,x8
7101a2a7a0  cmp w14,#0x3f
7101a2a7a4  strb w13,[x12, #0x8]
7101a2a7a8  b.cs 0x7101a2a7bc
7101a2a7ac  ldrb w11,[x11, #0x1]
7101a2a7b0  cbnz w11,0x7101a2a784
7101a2a7b4  add x8,x8,#0x1
7101a2a7b8  b 0x7101a2a7c0
7101a2a7bc  add w8,w8,#0x1
7101a2a7c0  mov x11,sp
7101a2a7c4  add x20,x11,#0x8
7101a2a7c8  mov w9,#0x9dc5
7101a2a7cc  movk w9,#0x811c, LSL #16
7101a2a7d0  strb wzr,[x20, w8, UXTW ]
7101a2a7d4  ldrb w10,[sp, #0x8]
7101a2a7d8  str w8,[sp, #0x4]
7101a2a7dc  cbz w10,0x7101a2a7fc
7101a2a7e0  add x8,x11,#0x9
7101a2a7e4  mov w11,#0x89
7101a2a7e8  mul w9,w9,w11
7101a2a7ec  and w10,w10,#0xff
7101a2a7f0  eor w9,w9,w10
7101a2a7f4  ldrb w10,[x8], #0x1
7101a2a7f8  cbnz w10,0x7101a2a7e8
7101a2a7fc  str w9,[sp]
7101a2a800  ldrb w8,[x19, #0xf82]
7101a2a804  cbz w8,0x7101a2a8b0
7101a2a808  add x0,x19,#0xe50
7101a2a80c  mov x1,x20
7101a2a810  bl 0x710377a120
7101a2a814  ldr w8,[x19, #0x16c]
7101a2a818  cmp w8,#0x15
7101a2a81c  b.eq 0x7101a2a834
7101a2a820  ldrb w9,[x19, #0x169]
7101a2a824  cmp w9,#0x0
7101a2a828  cset w20,ne
7101a2a82c  cmp w8,#0x16
7101a2a830  b.ne 0x7101a2a838
7101a2a834  mov w20,wzr
7101a2a838  ldr x8,[x19, #0xe18]
7101a2a83c  ldr x9,[x8, #0x1b8]
7101a2a840  cbz x9,0x7101a2a8f0
7101a2a844  add x10,x8,#0x1b8
7101a2a848  mov x8,x10
7101a2a84c  ldr w11,[x9, #0x20]
7101a2a850  cmp w11,#0x5
7101a2a854  cset w11,lt
7101a2a858  csel x8,x8,x9,lt
7101a2a85c  ldr x9,[x9, w11, UXTW #0x3]
7101a2a860  cbnz x9,0x7101a2a84c
7101a2a864  cmp x8,x10
7101a2a868  b.eq 0x7101a2a8f0
7101a2a86c  ldr w9,[x8, #0x20]
7101a2a870  cmp w9,#0x5
7101a2a874  b.gt 0x7101a2a8f0
7101a2a878  ldr x21,[x8, #0x28]
7101a2a87c  cbz x21,0x7101a2a8f0
7101a2a880  ldr x8,[x21]
7101a2a884  ldr x8,[x8, #0x1f8]
7101a2a888  mov x0,x21
7101a2a88c  mov w1,w20
7101a2a890  blr x8
7101a2a894  ldr x8,[x21]
7101a2a898  ldr x8,[x8, #0x388]
7101a2a89c  eor w1,w20,#0x1
7101a2a8a0  mov x0,x21
7101a2a8a4  mov w2,wzr
7101a2a8a8  blr x8
7101a2a8ac  b 0x7101a2a8f0
7101a2a8b0  ldr x8,[x19, #0x198]
7101a2a8b4  ldr x8,[x8]
7101a2a8b8  add x0,x8,#0x8
7101a2a8bc  adrp x1,0x71042e7000
7101a2a8c0  add x1,x1,#0x718
7101a2a8c4  add x8,sp,#0x48
7101a2a8c8  bl 0x7103776910
7101a2a8cc  add x0,sp,#0x48
7101a2a8d0  mov x1,x20
7101a2a8d4  bl 0x710377a120
7101a2a8d8  ldr x0,[sp, #0x50]
7101a2a8dc  adrp x8,0x710523d000
7101a2a8e0  add x8,x8,#0x9a8
7101a2a8e4  stp x8,xzr,[sp, #0x48]
7101a2a8e8  cbz x0,0x7101a2a8f0
7101a2a8ec  bl 0x710392eb40
7101a2a8f0  ldr x21,[x19, #0xdd0]
7101a2a8f4  ldrb w8,[x19, #0x169]
7101a2a8f8  strb w8,[x21, #0x255]
7101a2a8fc  ldr w2,[x21, #0xe0]
7101a2a900  add x8,sp,#0x48
7101a2a904  add x20,x8,#0x8
7101a2a908  cmn w2,#0x1
7101a2a90c  b.eq 0x7101a2a960
7101a2a910  add x0,sp,#0x48
7101a2a914  mov x1,x21
7101a2a918  bl 0x71019f08a0
7101a2a91c  ldp x9,x10,[x21]
7101a2a920  sub x10,x10,x9
7101a2a924  mov x11,#0x8ba3
7101a2a928  movk x11,#0xba2e, LSL #16
7101a2a92c  movk x11,#0xa2e8, LSL #32
7101a2a930  movk x11,#0x2e8b, LSL #48
7101a2a934  asr x10,x10,#0x4
7101a2a938  mul x10,x10,x11
7101a2a93c  ldrsw x8,[x21, #0xe0]
7101a2a940  cmp x10,x8
7101a2a944  b.ls 0x7101a2ae3c
7101a2a948  mov w10,#0xb0
7101a2a94c  madd x8,x8,x10,x9
7101a2a950  ldr x0,[x8, #0x20]
7101a2a954  fmov s0,0x3f800000
7101a2a958  mov x1,x20
7101a2a95c  bl 0x7103778300
7101a2a960  ldr w2,[x21, #0xf8]
7101a2a964  cmn w2,#0x1
7101a2a968  b.eq 0x7101a2a9bc
7101a2a96c  add x0,sp,#0x48
7101a2a970  mov x1,x21
7101a2a974  bl 0x71019f08a0
7101a2a978  ldp x9,x10,[x21]
7101a2a97c  sub x10,x10,x9
7101a2a980  mov x11,#0x8ba3
7101a2a984  movk x11,#0xba2e, LSL #16
7101a2a988  movk x11,#0xa2e8, LSL #32
7101a2a98c  movk x11,#0x2e8b, LSL #48
7101a2a990  asr x10,x10,#0x4
7101a2a994  mul x10,x10,x11
7101a2a998  ldrsw x8,[x21, #0xf8]
7101a2a99c  cmp x10,x8
7101a2a9a0  b.ls 0x7101a2ae3c
7101a2a9a4  mov w10,#0xb0
7101a2a9a8  madd x8,x8,x10,x9
7101a2a9ac  ldr x0,[x8, #0x20]
7101a2a9b0  fmov s0,0x3f800000
7101a2a9b4  mov x1,x20
7101a2a9b8  bl 0x7103778300
7101a2a9bc  ldr w2,[x21, #0x110]
7101a2a9c0  cmn w2,#0x1
7101a2a9c4  b.eq 0x7101a2aa18
7101a2a9c8  add x0,sp,#0x48
7101a2a9cc  mov x1,x21
7101a2a9d0  bl 0x71019f08a0
7101a2a9d4  ldp x9,x10,[x21]
7101a2a9d8  sub x10,x10,x9
7101a2a9dc  mov x11,#0x8ba3
7101a2a9e0  movk x11,#0xba2e, LSL #16
7101a2a9e4  movk x11,#0xa2e8, LSL #32
7101a2a9e8  movk x11,#0x2e8b, LSL #48
7101a2a9ec  asr x10,x10,#0x4
7101a2a9f0  mul x10,x10,x11
7101a2a9f4  ldrsw x8,[x21, #0x110]
7101a2a9f8  cmp x10,x8
7101a2a9fc  b.ls 0x7101a2ae3c
7101a2aa00  mov w10,#0xb0
7101a2aa04  madd x8,x8,x10,x9
7101a2aa08  ldr x0,[x8, #0x20]
7101a2aa0c  fmov s0,0x3f800000
7101a2aa10  mov x1,x20
7101a2aa14  bl 0x7103778300
7101a2aa18  ldr w2,[x21, #0x128]
7101a2aa1c  cmn w2,#0x1
7101a2aa20  b.eq 0x7101a2aa74
7101a2aa24  add x0,sp,#0x48
7101a2aa28  mov x1,x21
7101a2aa2c  bl 0x71019f08a0
7101a2aa30  ldp x9,x10,[x21]
7101a2aa34  sub x10,x10,x9
7101a2aa38  mov x11,#0x8ba3
7101a2aa3c  movk x11,#0xba2e, LSL #16
7101a2aa40  movk x11,#0xa2e8, LSL #32
7101a2aa44  movk x11,#0x2e8b, LSL #48
7101a2aa48  asr x10,x10,#0x4
7101a2aa4c  mul x10,x10,x11
7101a2aa50  ldrsw x8,[x21, #0x128]
7101a2aa54  cmp x10,x8
7101a2aa58  b.ls 0x7101a2ae3c
7101a2aa5c  mov w10,#0xb0
7101a2aa60  madd x8,x8,x10,x9
7101a2aa64  ldr x0,[x8, #0x20]
7101a2aa68  fmov s0,0x3f800000
7101a2aa6c  mov x1,x20
7101a2aa70  bl 0x7103778300
7101a2aa74  ldr w2,[x21, #0x140]
7101a2aa78  cmn w2,#0x1
7101a2aa7c  b.eq 0x7101a2aad0
7101a2aa80  add x0,sp,#0x48
7101a2aa84  mov x1,x21
7101a2aa88  bl 0x71019f08a0
7101a2aa8c  ldp x9,x10,[x21]
7101a2aa90  sub x10,x10,x9
7101a2aa94  mov x11,#0x8ba3
7101a2aa98  movk x11,#0xba2e, LSL #16
7101a2aa9c  movk x11,#0xa2e8, LSL #32
7101a2aaa0  movk x11,#0x2e8b, LSL #48
7101a2aaa4  asr x10,x10,#0x4
7101a2aaa8  mul x10,x10,x11
7101a2aaac  ldrsw x8,[x21, #0x140]
7101a2aab0  cmp x10,x8
7101a2aab4  b.ls 0x7101a2ae3c
7101a2aab8  mov w10,#0xb0
7101a2aabc  madd x8,x8,x10,x9
7101a2aac0  ldr x0,[x8, #0x20]
7101a2aac4  fmov s0,0x3f800000
7101a2aac8  mov x1,x20
7101a2aacc  bl 0x7103778300
7101a2aad0  ldr w2,[x21, #0x158]
7101a2aad4  cmn w2,#0x1
7101a2aad8  b.eq 0x7101a2ab2c
7101a2aadc  add x0,sp,#0x48
7101a2aae0  mov x1,x21
7101a2aae4  bl 0x71019f08a0
7101a2aae8  ldp x9,x10,[x21]
7101a2aaec  sub x10,x10,x9
7101a2aaf0  mov x11,#0x8ba3
7101a2aaf4  movk x11,#0xba2e, LSL #16
7101a2aaf8  movk x11,#0xa2e8, LSL #32
7101a2aafc  movk x11,#0x2e8b, LSL #48
7101a2ab00  asr x10,x10,#0x4
7101a2ab04  mul x10,x10,x11
7101a2ab08  ldrsw x8,[x21, #0x158]
7101a2ab0c  cmp x10,x8
7101a2ab10  b.ls 0x7101a2ae3c
7101a2ab14  mov w10,#0xb0
7101a2ab18  madd x8,x8,x10,x9
7101a2ab1c  ldr x0,[x8, #0x20]
7101a2ab20  fmov s0,0x3f800000
7101a2ab24  mov x1,x20
7101a2ab28  bl 0x7103778300
7101a2ab2c  ldr w2,[x21, #0x170]
7101a2ab30  cmn w2,#0x1
7101a2ab34  b.eq 0x7101a2ab88
7101a2ab38  add x0,sp,#0x48
7101a2ab3c  mov x1,x21
7101a2ab40  bl 0x71019f08a0
7101a2ab44  ldp x9,x10,[x21]
7101a2ab48  sub x10,x10,x9
7101a2ab4c  mov x11,#0x8ba3
7101a2ab50  movk x11,#0xba2e, LSL #16
7101a2ab54  movk x11,#0xa2e8, LSL #32
7101a2ab58  movk x11,#0x2e8b, LSL #48
7101a2ab5c  asr x10,x10,#0x4
7101a2ab60  mul x10,x10,x11
7101a2ab64  ldrsw x8,[x21, #0x170]
7101a2ab68  cmp x10,x8
7101a2ab6c  b.ls 0x7101a2ae3c
7101a2ab70  mov w10,#0xb0
7101a2ab74  madd x8,x8,x10,x9
7101a2ab78  ldr x0,[x8, #0x20]
7101a2ab7c  fmov s0,0x3f800000
7101a2ab80  mov x1,x20
7101a2ab84  bl 0x7103778300
7101a2ab88  ldr w2,[x21, #0x188]
7101a2ab8c  cmn w2,#0x1
7101a2ab90  b.eq 0x7101a2abe4
7101a2ab94  add x0,sp,#0x48
7101a2ab98  mov x1,x21
7101a2ab9c  bl 0x71019f08a0
7101a2aba0  ldp x9,x10,[x21]
7101a2aba4  sub x10,x10,x9
7101a2aba8  mov x11,#0x8ba3
7101a2abac  movk x11,#0xba2e, LSL #16
7101a2abb0  movk x11,#0xa2e8, LSL #32
7101a2abb4  movk x11,#0x2e8b, LSL #48
7101a2abb8  asr x10,x10,#0x4
7101a2abbc  mul x10,x10,x11
7101a2abc0  ldrsw x8,[x21, #0x188]
7101a2abc4  cmp x10,x8
7101a2abc8  b.ls 0x7101a2ae3c
7101a2abcc  mov w10,#0xb0
7101a2abd0  madd x8,x8,x10,x9
7101a2abd4  ldr x0,[x8, #0x20]
7101a2abd8  fmov s0,0x3f800000
7101a2abdc  mov x1,x20
7101a2abe0  bl 0x7103778300
7101a2abe4  ldr x26,[x19, #0x250]
7101a2abe8  ldr x27,[x19, #0x258]
7101a2abec  cmp x26,x27
7101a2abf0  b.eq 0x7101a2adb0
7101a2abf4  fmov s8,0x3f800000
7101a2abf8  add x8,sp,#0x48
7101a2abfc  add x20,x19,#0xde8
7101a2ac00  add x21,x8,#0x8
7101a2ac04  orr w22,wzr,#0x18
7101a2ac08  b 0x7101a2ac24
7101a2ac0c  ldr x8,[x23, #0x5e8]
7101a2ac10  ldr x8,[x8, #0x80]
7101a2ac14  ldr x0,[x8, #0x10]
7101a2ac18  cbz x0,0x7101a2aca0
7101a2ac1c  add x1,x23,#0x1d0
7101a2ac20  b 0x7101a2ac68
7101a2ac24  ldr x23,[x26, #0x8]
7101a2ac28  ldrb w3,[x19, #0x169]
7101a2ac2c  strb w3,[x23, #0x6bb]
7101a2ac30  ldr w1,[x23, #0x1f8]
7101a2ac34  ldr w2,[x23, #0x1fc]
7101a2ac38  ldr x0,[x23, #0x5e8]
7101a2ac3c  bl 0x7101a000c0
7101a2ac40  ldr w8,[x23, #0x1f8]
7101a2ac44  cmp w8,#0x2
7101a2ac48  b.ne 0x7101a2ac78
7101a2ac4c  ldrb w9,[x23, #0x6bd]
7101a2ac50  cbz w9,0x7101a2ac78
7101a2ac54  ldr x8,[x23, #0x5e8]
7101a2ac58  ldr x8,[x8, #0x80]
7101a2ac5c  ldr x0,[x8, #0x10]
7101a2ac60  cbz x0,0x7101a2aca0
7101a2ac64  add x1,x23,#0x2c0
7101a2ac68  mov w3,#0x1
7101a2ac6c  mov w2,#0xffffffff
7101a2ac70  bl 0x71037a2270
7101a2ac74  b 0x7101a2aca0
7101a2ac78  ldrb w9,[x23, #0x1c4]
7101a2ac7c  cmp w9,#0xff
7101a2ac80  b.eq 0x7101a2aca0
7101a2ac84  cbnz w8,0x7101a2ac90
7101a2ac88  ldr w9,[x23, #0x394]
7101a2ac8c  cbz w9,0x7101a2ac0c
7101a2ac90  cmp w8,#0x2
7101a2ac94  b.ne 0x7101a2aca0
7101a2ac98  ldrb w8,[x23, #0x6b9]
7101a2ac9c  cbz w8,0x7101a2ac54
7101a2aca0  ldr x8,[x26, #0x8]
7101a2aca4  mov w9,#0x1
7101a2aca8  strb w9,[x8, #0x6ba]
7101a2acac  ldr w8,[x19, #0x170]
7101a2acb0  cbz w8,0x7101a2acbc
7101a2acb4  ldr x0,[x26, #0x8]
7101a2acb8  bl 0x7101a07580
7101a2acbc  ldr x8,[x26, #0x8]
7101a2acc0  ldr w23,[x8, #0x1f8]
7101a2acc4  ldrb w9,[x8, #0x6bb]
7101a2acc8  cbz w9,0x7101a2acd4
7101a2accc  ldr w24,[x8, #0x1fc]
7101a2acd0  b 0x7101a2acd8
7101a2acd4  mov w24,#0xffffffff
7101a2acd8  ldrsw x9,[x8, #0x150]
7101a2acdc  cmp w9,#0x8
7101a2ace0  b.cs 0x7101a2ae30
7101a2ace4  ldr x25,[x19, #0xdd0]
7101a2ace8  madd x28,x9,x22,x25
7101a2acec  ldr w8,[x8, #0x154]
7101a2acf0  ldr w2,[x28, #0xe0]!
7101a2acf4  cmn w2,#0x1
7101a2acf8  stp w8,w23,[x28, #0x8]
7101a2acfc  str w24,[x28, #0x10]
7101a2ad00  b.eq 0x7101a2ad54
7101a2ad04  add x0,sp,#0x48
7101a2ad08  mov x1,x25
7101a2ad0c  bl 0x71019f08a0
7101a2ad10  ldp x9,x10,[x25]
7101a2ad14  sub x10,x10,x9
7101a2ad18  mov x11,#0x8ba3
7101a2ad1c  movk x11,#0xba2e, LSL #16
7101a2ad20  movk x11,#0xa2e8, LSL #32
7101a2ad24  movk x11,#0x2e8b, LSL #48
7101a2ad28  asr x10,x10,#0x4
7101a2ad2c  mul x10,x10,x11
7101a2ad30  ldrsw x8,[x28]
7101a2ad34  cmp x10,x8
7101a2ad38  b.ls 0x7101a2ae34
7101a2ad3c  mov w10,#0xb0
7101a2ad40  madd x8,x8,x10,x9
7101a2ad44  ldr x0,[x8, #0x20]
7101a2ad48  mov v0.16B,v8.16B
7101a2ad4c  mov x1,x21
7101a2ad50  bl 0x7103778300
7101a2ad54  ldr x8,[x26, #0x8]
7101a2ad58  ldr w1,[x8, #0x150]
7101a2ad5c  ldr w2,[x8, #0x154]
7101a2ad60  ldr w5,[x8, #0x158]
7101a2ad64  mov x0,x20
7101a2ad68  mov w3,w23
7101a2ad6c  mov w4,w24
7101a2ad70  bl 0x71032d0830
7101a2ad74  ldr x8,[x26, #0x8]
7101a2ad78  ldr x9,[x8, #0x678]
7101a2ad7c  cbz x9,0x7101a2ada4
7101a2ad80  ldr x9,[x9, #0x8]
7101a2ad84  ldr w1,[x9, #0x28]
7101a2ad88  ldr w8,[x8, #0x150]
7101a2ad8c  cmp w1,w8
7101a2ad90  b.ne 0x7101a2ada4
7101a2ad94  ldr x0,[x9, #0x20]
7101a2ad98  mov w2,w23
7101a2ad9c  mov w3,w24
7101a2ada0  bl 0x71032d2e70
7101a2ada4  add x26,x26,#0x10
7101a2ada8  cmp x27,x26
7101a2adac  b.ne 0x7101a2ac24
7101a2adb0  ldr d8,[sp, #0x90]
7101a2adb4  ldp x29,x30,[sp, #0xf0]
7101a2adb8  ldp x20,x19,[sp, #0xe0]
7101a2adbc  ldp x22,x21,[sp, #0xd0]
7101a2adc0  ldp x24,x23,[sp, #0xc0]
7101a2adc4  ldp x26,x25,[sp, #0xb0]
7101a2adc8  ldp x28,x27,[sp, #0xa0]
7101a2adcc  add sp,sp,#0x100
7101a2add0  ret
7101a2add4  mov x10,x23
7101a2add8  cbz x9,0x7101a2a310
7101a2addc  ldr x9,[x10, #0x8]
7101a2ade0  ldr w9,[x9, #0x1f8]
7101a2ade4  cmp w9,#0x3
7101a2ade8  cinc w8,w8,ne
7101a2adec  tbnz w2,#0x0,0x7101a2a314
7101a2adf0  b 0x7101a2a3dc
7101a2adf4  cbnz w8,0x7101a2a714
7101a2adf8  ldrb w8,[x21, #0x1c4]
7101a2adfc  cmp w8,#0xff
7101a2ae00  b.eq 0x7101a2a714
7101a2ae04  ldr w8,[x21, #0x394]
7101a2ae08  cbnz w8,0x7101a2a714
7101a2ae0c  ldr x8,[x21, #0x5e8]
7101a2ae10  ldr x8,[x8, #0x80]
7101a2ae14  ldr x0,[x8, #0x10]
7101a2ae18  cbz x0,0x7101a2a714
7101a2ae1c  add x1,x21,#0x1d0
7101a2ae20  mov w2,#0xffffffff
7101a2ae24  mov w3,#0x1
7101a2ae28  bl 0x71037a2270
7101a2ae2c  b 0x7101a2a714
7101a2ae30  bl 0x71039c2650
7101a2ae34  mov x0,x25
7101a2ae38  bl 0x71039c1330
7101a2ae3c  mov x0,x21
7101a2ae40  bl 0x71039c1330
7101a2ae44  bl 0x71039c1330
