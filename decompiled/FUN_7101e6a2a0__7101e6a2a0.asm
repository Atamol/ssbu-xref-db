// addr:      7101e6a2a0
// offset:    0x1e6a2a0
// name:      FUN_7101e6a2a0
// mangled:   
// size:      2816

7101e6a2a0  sub sp,sp,#0x70
7101e6a2a4  stp x26,x25,[sp, #0x20]
7101e6a2a8  stp x24,x23,[sp, #0x30]
7101e6a2ac  stp x22,x21,[sp, #0x40]
7101e6a2b0  stp x20,x19,[sp, #0x50]
7101e6a2b4  stp x29,x30,[sp, #0x60]
7101e6a2b8  add x29,sp,#0x60
7101e6a2bc  ldr x8,[x0, #0x1e0]
7101e6a2c0  mov x19,x0
7101e6a2c4  ldr x0,[x8]
7101e6a2c8  mov w2,#0x1000
7101e6a2cc  mov w1,wzr
7101e6a2d0  bl 0x7103775dc0
7101e6a2d4  ldr x21,[x19, #0x330]
7101e6a2d8  ldr x8,[x21, #0x18]
7101e6a2dc  ldr x20,[x8, #0x8]
7101e6a2e0  cbz x20,0x7101e6a3c8
7101e6a2e4  ldrb w9,[x8, #0x10]
7101e6a2e8  cbz w9,0x7101e6a3b4
7101e6a2ec  ldr x8,[x8]
7101e6a2f0  ldr x23,[x8, #0x80]
7101e6a2f4  add x22,x8,#0x88
7101e6a2f8  cmp x23,x22
7101e6a2fc  b.eq 0x7101e6a3b4
7101e6a300  ldr x0,[x23, #0x68]
7101e6a304  ldr x8,[x0]
7101e6a308  ldr x8,[x8, #0x148]
7101e6a30c  blr x8
7101e6a310  tbz w0,#0x0,0x7101e6a350
7101e6a314  ldr x8,[x20]
7101e6a318  ldr x1,[x23, #0x68]
7101e6a31c  mov x0,x20
7101e6a320  ldr x8,[x8, #0x120]
7101e6a324  blr x8
7101e6a328  tbz w0,#0x0,0x7101e6a350
7101e6a32c  ldr x0,[x23, #0x68]
7101e6a330  ldr x8,[x0]
7101e6a334  ldr x8,[x8, #0x178]
7101e6a338  blr x8
7101e6a33c  ldr x0,[x23, #0x68]
7101e6a340  ldr x8,[x0]
7101e6a344  ldr x8,[x8, #0x140]
7101e6a348  mov w1,wzr
7101e6a34c  blr x8
7101e6a350  ldr x8,[x23, #0x8]
7101e6a354  cbz x8,0x7101e6a368
7101e6a358  mov x23,x8
7101e6a35c  ldr x8,[x8]
7101e6a360  cbnz x8,0x7101e6a358
7101e6a364  b 0x7101e6a394
7101e6a368  mov x8,x23
7101e6a36c  ldr x9,[x8, #0x10]!
7101e6a370  ldr x10,[x9]
7101e6a374  cmp x10,x23
7101e6a378  b.eq 0x7101e6a3a0
7101e6a37c  ldr x9,[x8]
7101e6a380  mov x8,x9
7101e6a384  ldr x23,[x8, #0x10]!
7101e6a388  ldr x10,[x23]
7101e6a38c  cmp x10,x9
7101e6a390  b.ne 0x7101e6a37c
7101e6a394  cmp x23,x22
7101e6a398  b.ne 0x7101e6a300
7101e6a39c  b 0x7101e6a3ac
7101e6a3a0  mov x23,x9
7101e6a3a4  cmp x23,x22
7101e6a3a8  b.ne 0x7101e6a300
7101e6a3ac  ldr x8,[x21, #0x18]
7101e6a3b0  ldr x20,[x8, #0x8]
7101e6a3b4  ldr x8,[x20]
7101e6a3b8  ldr x8,[x8, #0x178]
7101e6a3bc  mov x0,x20
7101e6a3c0  blr x8
7101e6a3c4  ldr x21,[x19, #0x330]
7101e6a3c8  strb wzr,[x19, #0x338]
7101e6a3cc  ldr x0,[x21, #0x8]
7101e6a3d0  fmov s0,0x3f800000
7101e6a3d4  adrp x1,0x710434a000
7101e6a3d8  add x1,x1,#0xa85
7101e6a3dc  bl 0x7103778300
7101e6a3e0  ldr x9,[x19, #0x4d0]
7101e6a3e4  ldr x8,[x9]
7101e6a3e8  ldr x8,[x8, #0x8]
7101e6a3ec  ldrb w10,[x8, #0x388]
7101e6a3f0  cbz w10,0x7101e6a420
7101e6a3f4  ldrb w10,[x9, #0x8]
7101e6a3f8  cmp x10,#0x2
7101e6a3fc  b.hi 0x7101e6a420
7101e6a400  add x10,x8,x10, LSL #0x3
7101e6a404  ldr x1,[x10, #0x78]
7101e6a408  cbz x1,0x7101e6a420
7101e6a40c  add x0,x19,#0x340
7101e6a410  bl 0x7101e97fb0
7101e6a414  ldr x9,[x19, #0x4d0]
7101e6a418  ldr x8,[x9]
7101e6a41c  ldr x8,[x8, #0x8]
7101e6a420  ldrb w9,[x9, #0x8]
7101e6a424  cmp x9,#0x2
7101e6a428  b.hi 0x7101e6a444
7101e6a42c  add x9,x8,x9, LSL #0x3
7101e6a430  ldrb w8,[x8, #0x388]
7101e6a434  ldr x9,[x9, #0x78]
7101e6a438  cmp x9,#0x0
7101e6a43c  ccmp w8,#0x0,#0x4,ne
7101e6a440  b.ne 0x7101e6a44c
7101e6a444  mov w20,wzr
7101e6a448  b 0x7101e6a484
7101e6a44c  ldrsh w10,[x9, #0x38]
7101e6a450  ldrsh w8,[x9, #0x20]
7101e6a454  mov w11,#0x2
7101e6a458  cmn w10,#0x1
7101e6a45c  cset w10,ne
7101e6a460  csinc w11,w11,wzr,ne
7101e6a464  cmn w8,#0x1
7101e6a468  csel w8,w10,w11,eq
7101e6a46c  ldrsh w10,[x9, #0x50]
7101e6a470  ldrsh w9,[x9, #0x68]
7101e6a474  cmn w10,#0x1
7101e6a478  cinc w8,w8,ne
7101e6a47c  cmn w9,#0x1
7101e6a480  cinc w20,w8,ne
7101e6a484  add x21,x19,#0x310
7101e6a488  mov x0,x21
7101e6a48c  strb wzr,[x19, #0x329]
7101e6a490  bl 0x7101e980b0
7101e6a494  ldrb w8,[x19, #0x318]
7101e6a498  cbz w8,0x7101e6a4d8
7101e6a49c  mov x22,xzr
7101e6a4a0  cmp x22,#0x4
7101e6a4a4  b.cs 0x7101e6ad94
7101e6a4a8  ldr x9,[x21]
7101e6a4ac  add x9,x9,x22, LSL #0x3
7101e6a4b0  ldr x9,[x9, #0x18]
7101e6a4b4  cbz x9,0x7101e6a4cc
7101e6a4b8  ldr x0,[x9, #0x38]
7101e6a4bc  mov w1,#0x1
7101e6a4c0  strb wzr,[x9, #0x50]
7101e6a4c4  bl 0x71037790a0
7101e6a4c8  ldrb w8,[x19, #0x318]
7101e6a4cc  add x22,x22,#0x1
7101e6a4d0  cmp x22,w8, UXTB 
7101e6a4d4  b.cc 0x7101e6a4a0
7101e6a4d8  ldr x0,[x19, #0x310]
7101e6a4dc  adrp x1,0x710439d000
7101e6a4e0  add x1,x1,#0xb3e
7101e6a4e4  mov w2,w20
7101e6a4e8  strb w20,[x19, #0x318]
7101e6a4ec  strb wzr,[x19, #0x319]
7101e6a4f0  bl 0x7103778430
7101e6a4f4  adrp x9,0x7105329000
7101e6a4f8  ldr x9,[x9, #0xfa0]
7101e6a4fc  ldr x23,[x9]
7101e6a500  ldr x9,[x23, #0x860]
7101e6a504  ldr x24,[x23, #0x858]
7101e6a508  ldr x8,[x19, #0x4d0]
7101e6a50c  orr x10,xzr,#-0x5555555555555556
7101e6a510  movk x10,#0xaaab
7101e6a514  ldrb w22,[x8, #0x8]
7101e6a518  sub x9,x9,x24
7101e6a51c  asr x9,x9,#0x4
7101e6a520  mul x9,x9,x10
7101e6a524  cmp x9,x22
7101e6a528  b.ls 0x7101e6ad98
7101e6a52c  ldr x8,[x8]
7101e6a530  ldr x0,[x8, #0x8]
7101e6a534  mov w1,w22
7101e6a538  add x21,x19,#0x2e8
7101e6a53c  bl 0x710251b000
7101e6a540  orr w8,wzr,#0x30
7101e6a544  madd x8,x22,x8,x24
7101e6a548  ldr w8,[x8, #0x8]
7101e6a54c  scvtf s0,w0
7101e6a550  mov x0,x21
7101e6a554  cmp w8,#0x1
7101e6a558  csinc w8,w8,wzr,gt
7101e6a55c  scvtf s1,w8
7101e6a560  ldr w8,[x23, #0x840]
7101e6a564  cmp w8,#0x1
7101e6a568  csinc w8,w8,wzr,gt
7101e6a56c  and w9,w8,#0xff
7101e6a570  sub w8,w8,#0x1
7101e6a574  and w10,w8,#0xff
7101e6a578  fdiv s0,s0,s1
7101e6a57c  scvtf s1,w9
7101e6a580  fmul s0,s0,s1
7101e6a584  fcvtzs w9,s0
7101e6a588  cmp w10,w9
7101e6a58c  csel w1,w8,w9,cc
7101e6a590  bl 0x7101e977a0
7101e6a594  ldr x23,[x21]
7101e6a598  mov x22,x23
7101e6a59c  mov x25,x23
7101e6a5a0  ldr x26,[x22, #0x28]!
7101e6a5a4  ldr x24,[x25, #0x30]!
7101e6a5a8  cmp x24,x26
7101e6a5ac  b.eq 0x7101e6a5c8
7101e6a5b0  ldr x8,[x24, #-0x10]!
7101e6a5b4  ldr x8,[x8]
7101e6a5b8  mov x0,x24
7101e6a5bc  blr x8
7101e6a5c0  cmp x26,x24
7101e6a5c4  b.ne 0x7101e6a5b0
7101e6a5c8  cmp w20,#0x3
7101e6a5cc  str x26,[x25]
7101e6a5d0  b.eq 0x7101e6a6a4
7101e6a5d4  cmp w20,#0x2
7101e6a5d8  b.eq 0x7101e6a644
7101e6a5dc  cmp w20,#0x1
7101e6a5e0  b.ne 0x7101e6a704
7101e6a5e4  adrp x1,0x7104422000
7101e6a5e8  add x1,x1,#0xa74
7101e6a5ec  mov x8,sp
7101e6a5f0  mov x0,x23
7101e6a5f4  mov x24,sp
7101e6a5f8  bl 0x71037780e0
7101e6a5fc  ldp x8,x9,[x23, #0x30]
7101e6a600  cmp x8,x9
7101e6a604  b.cs 0x7101e6a7c4
7101e6a608  adrp x9,0x710523d000
7101e6a60c  add x9,x9,#0x9e8
7101e6a610  cmp x8,x24
7101e6a614  stp x9,xzr,[x8]
7101e6a618  b.eq 0x7101e6a634
7101e6a61c  ldr x9,[sp, #0x8]
7101e6a620  str xzr,[sp, #0x8]
7101e6a624  ldr x0,[x8, #0x8]
7101e6a628  str x9,[x8, #0x8]
7101e6a62c  cbz x0,0x7101e6a634
7101e6a630  bl 0x710392eb40
7101e6a634  ldr x8,[x25]
7101e6a638  add x8,x8,#0x10
7101e6a63c  str x8,[x25]
7101e6a640  b 0x7101e6a7d0
7101e6a644  adrp x1,0x710433a000
7101e6a648  add x1,x1,#0x88d
7101e6a64c  mov x8,sp
7101e6a650  mov x0,x23
7101e6a654  mov x24,sp
7101e6a658  bl 0x71037780e0
7101e6a65c  ldp x8,x9,[x23, #0x30]
7101e6a660  cmp x8,x9
7101e6a664  b.cs 0x7101e6a764
7101e6a668  adrp x9,0x710523d000
7101e6a66c  add x9,x9,#0x9e8
7101e6a670  cmp x8,x24
7101e6a674  stp x9,xzr,[x8]
7101e6a678  b.eq 0x7101e6a694
7101e6a67c  ldr x9,[sp, #0x8]
7101e6a680  str xzr,[sp, #0x8]
7101e6a684  ldr x0,[x8, #0x8]
7101e6a688  str x9,[x8, #0x8]
7101e6a68c  cbz x0,0x7101e6a694
7101e6a690  bl 0x710392eb40
7101e6a694  ldr x8,[x25]
7101e6a698  add x8,x8,#0x10
7101e6a69c  str x8,[x25]
7101e6a6a0  b 0x7101e6a770
7101e6a6a4  adrp x1,0x710433a000
7101e6a6a8  add x1,x1,#0x89b
7101e6a6ac  mov x8,sp
7101e6a6b0  mov x0,x23
7101e6a6b4  mov x24,sp
7101e6a6b8  bl 0x71037780e0
7101e6a6bc  ldp x8,x9,[x23, #0x30]
7101e6a6c0  cmp x8,x9
7101e6a6c4  b.cs 0x7101e6a794
7101e6a6c8  adrp x9,0x710523d000
7101e6a6cc  add x9,x9,#0x9e8
7101e6a6d0  cmp x8,x24
7101e6a6d4  stp x9,xzr,[x8]
7101e6a6d8  b.eq 0x7101e6a6f4
7101e6a6dc  ldr x9,[sp, #0x8]
7101e6a6e0  str xzr,[sp, #0x8]
7101e6a6e4  ldr x0,[x8, #0x8]
7101e6a6e8  str x9,[x8, #0x8]
7101e6a6ec  cbz x0,0x7101e6a6f4
7101e6a6f0  bl 0x710392eb40
7101e6a6f4  ldr x8,[x25]
7101e6a6f8  add x8,x8,#0x10
7101e6a6fc  str x8,[x25]
7101e6a700  b 0x7101e6a7a0
7101e6a704  adrp x1,0x7104412000
7101e6a708  add x1,x1,#0xfe8
7101e6a70c  mov x8,sp
7101e6a710  mov x0,x23
7101e6a714  mov x24,sp
7101e6a718  bl 0x71037780e0
7101e6a71c  ldp x8,x9,[x23, #0x30]
7101e6a720  cmp x8,x9
7101e6a724  b.cs 0x7101e6a7e0
7101e6a728  adrp x9,0x710523d000
7101e6a72c  add x9,x9,#0x9e8
7101e6a730  cmp x8,x24
7101e6a734  stp x9,xzr,[x8]
7101e6a738  b.eq 0x7101e6a754
7101e6a73c  ldr x9,[sp, #0x8]
7101e6a740  str xzr,[sp, #0x8]
7101e6a744  ldr x0,[x8, #0x8]
7101e6a748  str x9,[x8, #0x8]
7101e6a74c  cbz x0,0x7101e6a754
7101e6a750  bl 0x710392eb40
7101e6a754  ldr x8,[x25]
7101e6a758  add x8,x8,#0x10
7101e6a75c  str x8,[x25]
7101e6a760  b 0x7101e6a7ec
7101e6a764  mov x1,sp
7101e6a768  mov x0,x22
7101e6a76c  bl 0x7101b09e60
7101e6a770  ldr x0,[sp, #0x8]
7101e6a774  adrp x24,0x710523d000
7101e6a778  add x24,x24,#0x9e8
7101e6a77c  stp x24,xzr,[sp]
7101e6a780  cbz x0,0x7101e6a788
7101e6a784  bl 0x710392eb40
7101e6a788  adrp x1,0x710439d000
7101e6a78c  add x1,x1,#0xb30
7101e6a790  b 0x7101e6a8f4
7101e6a794  mov x1,sp
7101e6a798  mov x0,x22
7101e6a79c  bl 0x7101b09e60
7101e6a7a0  ldr x0,[sp, #0x8]
7101e6a7a4  adrp x24,0x710523d000
7101e6a7a8  add x24,x24,#0x9e8
7101e6a7ac  stp x24,xzr,[sp]
7101e6a7b0  cbz x0,0x7101e6a7b8
7101e6a7b4  bl 0x710392eb40
7101e6a7b8  adrp x1,0x7104422000
7101e6a7bc  add x1,x1,#0xa74
7101e6a7c0  b 0x7101e6a880
7101e6a7c4  mov x1,sp
7101e6a7c8  mov x0,x22
7101e6a7cc  bl 0x7101b09e60
7101e6a7d0  adrp x8,0x710523d000
7101e6a7d4  add x8,x8,#0x9e8
7101e6a7d8  str x8,[sp]
7101e6a7dc  b 0x7101e6a954
7101e6a7e0  mov x1,sp
7101e6a7e4  mov x0,x22
7101e6a7e8  bl 0x7101b09e60
7101e6a7ec  ldr x0,[sp, #0x8]
7101e6a7f0  adrp x24,0x710523d000
7101e6a7f4  add x24,x24,#0x9e8
7101e6a7f8  stp x24,xzr,[sp]
7101e6a7fc  cbz x0,0x7101e6a804
7101e6a800  bl 0x710392eb40
7101e6a804  adrp x1,0x710433a000
7101e6a808  add x1,x1,#0x88d
7101e6a80c  mov x8,sp
7101e6a810  mov x0,x23
7101e6a814  mov x26,sp
7101e6a818  bl 0x71037780e0
7101e6a81c  ldp x8,x9,[x23, #0x30]
7101e6a820  cmp x8,x9
7101e6a824  b.cs 0x7101e6a85c
7101e6a828  cmp x8,x26
7101e6a82c  stp x24,xzr,[x8]
7101e6a830  b.eq 0x7101e6a84c
7101e6a834  ldr x9,[sp, #0x8]
7101e6a838  str xzr,[sp, #0x8]
7101e6a83c  ldr x0,[x8, #0x8]
7101e6a840  str x9,[x8, #0x8]
7101e6a844  cbz x0,0x7101e6a84c
7101e6a848  bl 0x710392eb40
7101e6a84c  ldr x8,[x25]
7101e6a850  add x8,x8,#0x10
7101e6a854  str x8,[x25]
7101e6a858  b 0x7101e6a868
7101e6a85c  mov x1,sp
7101e6a860  mov x0,x22
7101e6a864  bl 0x7101b09e60
7101e6a868  ldr x0,[sp, #0x8]
7101e6a86c  stp x24,xzr,[sp]
7101e6a870  cbz x0,0x7101e6a878
7101e6a874  bl 0x710392eb40
7101e6a878  adrp x1,0x710439d000
7101e6a87c  add x1,x1,#0xb30
7101e6a880  mov x8,sp
7101e6a884  mov x0,x23
7101e6a888  mov x26,sp
7101e6a88c  bl 0x71037780e0
7101e6a890  ldp x8,x9,[x23, #0x30]
7101e6a894  cmp x8,x9
7101e6a898  b.cs 0x7101e6a8d0
7101e6a89c  cmp x8,x26
7101e6a8a0  stp x24,xzr,[x8]
7101e6a8a4  b.eq 0x7101e6a8c0
7101e6a8a8  ldr x9,[sp, #0x8]
7101e6a8ac  str xzr,[sp, #0x8]
7101e6a8b0  ldr x0,[x8, #0x8]
7101e6a8b4  str x9,[x8, #0x8]
7101e6a8b8  cbz x0,0x7101e6a8c0
7101e6a8bc  bl 0x710392eb40
7101e6a8c0  ldr x8,[x25]
7101e6a8c4  add x8,x8,#0x10
7101e6a8c8  str x8,[x25]
7101e6a8cc  b 0x7101e6a8dc
7101e6a8d0  mov x1,sp
7101e6a8d4  mov x0,x22
7101e6a8d8  bl 0x7101b09e60
7101e6a8dc  ldr x0,[sp, #0x8]
7101e6a8e0  stp x24,xzr,[sp]
7101e6a8e4  cbz x0,0x7101e6a8ec
7101e6a8e8  bl 0x710392eb40
7101e6a8ec  adrp x1,0x710435b000
7101e6a8f0  add x1,x1,#0xe6f
7101e6a8f4  mov x8,sp
7101e6a8f8  mov x0,x23
7101e6a8fc  mov x26,sp
7101e6a900  bl 0x71037780e0
7101e6a904  ldp x8,x9,[x23, #0x30]
7101e6a908  cmp x8,x9
7101e6a90c  b.cs 0x7101e6a944
7101e6a910  cmp x8,x26
7101e6a914  stp x24,xzr,[x8]
7101e6a918  b.eq 0x7101e6a934
7101e6a91c  ldr x9,[sp, #0x8]
7101e6a920  str xzr,[sp, #0x8]
7101e6a924  ldr x0,[x8, #0x8]
7101e6a928  str x9,[x8, #0x8]
7101e6a92c  cbz x0,0x7101e6a934
7101e6a930  bl 0x710392eb40
7101e6a934  ldr x8,[x25]
7101e6a938  add x8,x8,#0x10
7101e6a93c  str x8,[x25]
7101e6a940  b 0x7101e6a950
7101e6a944  mov x1,sp
7101e6a948  mov x0,x22
7101e6a94c  bl 0x7101b09e60
7101e6a950  str x24,[sp]
7101e6a954  ldr x0,[sp, #0x8]
7101e6a958  str xzr,[sp, #0x8]
7101e6a95c  cbz x0,0x7101e6a964
7101e6a960  bl 0x710392eb40
7101e6a964  ldr x9,[x19, #0x300]
7101e6a968  ldr x8,[x19, #0x2f8]
7101e6a96c  sub x9,x9,x8
7101e6a970  asr x9,x9,#0x2
7101e6a974  cmp x9,x20
7101e6a978  b.cs 0x7101e6a98c
7101e6a97c  add x0,x19,#0x2f8
7101e6a980  sub x1,x20,x9
7101e6a984  bl 0x71003ca470
7101e6a988  b 0x7101e6a998
7101e6a98c  b.ls 0x7101e6a998
7101e6a990  add x8,x8,x20, LSL #0x2
7101e6a994  str x8,[x19, #0x300]
7101e6a998  ldr x0,[x21]
7101e6a99c  adrp x1,0x71042b4000
7101e6a9a0  add x1,x1,#0xaa8
7101e6a9a4  mov x8,sp
7101e6a9a8  mov x22,sp
7101e6a9ac  bl 0x71037780e0
7101e6a9b0  mov w0,#0x10
7101e6a9b4  mov w1,#0x10
7101e6a9b8  bl 0x710392e290
7101e6a9bc  cbnz x0,0x7101e6aa04
7101e6a9c0  adrp x8,0x7105332000
7101e6a9c4  ldr x0,[x8, #0xf00]
7101e6a9c8  cbz x0,0x7101e6aa00
7101e6a9cc  mov w8,#0x10
7101e6a9d0  str wzr,[sp, #0x1c]
7101e6a9d4  add x1,sp,#0x1c
7101e6a9d8  str x8,[sp, #0x10]
7101e6a9dc  ldr x8,[x0]
7101e6a9e0  ldr x8,[x8, #0x30]
7101e6a9e4  add x2,sp,#0x10
7101e6a9e8  blr x8
7101e6a9ec  tbz w0,#0x0,0x7101e6aa00
7101e6a9f0  mov w0,#0x10
7101e6a9f4  mov w1,#0x10
7101e6a9f8  bl 0x710392e290
7101e6a9fc  cbnz x0,0x7101e6aa04
7101e6aa00  mov x0,xzr
7101e6aa04  adrp x23,0x710523d000
7101e6aa08  add x23,x23,#0x9e8
7101e6aa0c  cmp x22,x0
7101e6aa10  stp x23,xzr,[x0]
7101e6aa14  b.eq 0x7101e6aa24
7101e6aa18  ldr x8,[sp, #0x8]
7101e6aa1c  str xzr,[sp, #0x8]
7101e6aa20  str x8,[x0, #0x8]
7101e6aa24  ldr x9,[x21]
7101e6aa28  ldr x8,[x9, #0x20]
7101e6aa2c  str x0,[x9, #0x20]
7101e6aa30  cbz x8,0x7101e6aa44
7101e6aa34  ldr x9,[x8]
7101e6aa38  ldr x9,[x9, #0x8]
7101e6aa3c  mov x0,x8
7101e6aa40  blr x9
7101e6aa44  ldr x0,[sp, #0x8]
7101e6aa48  stp x23,xzr,[sp]
7101e6aa4c  cbz x0,0x7101e6aa54
7101e6aa50  bl 0x710392eb40
7101e6aa54  ldr x8,[x19, #0x2e8]
7101e6aa58  ldr x0,[x8, #0x20]
7101e6aa5c  bl 0x710377b140
7101e6aa60  orr w8,wzr,#0x3
7101e6aa64  strb w8,[x19, #0x2f0]
7101e6aa68  cbz w20,0x7101e6abbc
7101e6aa6c  ldr x9,[x19, #0x4d0]
7101e6aa70  ldr x8,[x9]
7101e6aa74  ldr x8,[x8, #0x8]
7101e6aa78  ldrb w10,[x8, #0x388]
7101e6aa7c  fmov s0,wzr
7101e6aa80  cbz w10,0x7101e6aaa0
7101e6aa84  ldrb w9,[x9, #0x8]
7101e6aa88  cmp x9,#0x2
7101e6aa8c  b.hi 0x7101e6aaa0
7101e6aa90  add x8,x8,x9, LSL #0x3
7101e6aa94  ldr x8,[x8, #0x78]
7101e6aa98  cbz x8,0x7101e6aaa0
7101e6aa9c  ldr s0,[x8, #0x28]
7101e6aaa0  ldr x9,[x19, #0x300]
7101e6aaa4  ldr x8,[x19, #0x2f8]
7101e6aaa8  cmp x9,x8
7101e6aaac  b.eq 0x7101e6aab4
7101e6aab0  str s0,[x8]
7101e6aab4  cmp w20,#0x1
7101e6aab8  b.eq 0x7101e6abbc
7101e6aabc  ldr x9,[x19, #0x4d0]
7101e6aac0  ldr x8,[x9]
7101e6aac4  ldr x8,[x8, #0x8]
7101e6aac8  ldrb w10,[x8, #0x388]
7101e6aacc  fmov s0,wzr
7101e6aad0  cbz w10,0x7101e6aaf0
7101e6aad4  ldrb w9,[x9, #0x8]
7101e6aad8  cmp x9,#0x2
7101e6aadc  b.hi 0x7101e6aaf0
7101e6aae0  add x8,x8,x9, LSL #0x3
7101e6aae4  ldr x8,[x8, #0x78]
7101e6aae8  cbz x8,0x7101e6aaf0
7101e6aaec  ldr s0,[x8, #0x40]
7101e6aaf0  ldr x9,[x19, #0x300]
7101e6aaf4  ldr x8,[x19, #0x2f8]
7101e6aaf8  sub x9,x9,x8
7101e6aafc  asr x9,x9,#0x2
7101e6ab00  cmp x9,#0x2
7101e6ab04  b.cc 0x7101e6ab0c
7101e6ab08  str s0,[x8, #0x4]
7101e6ab0c  cmp w20,#0x2
7101e6ab10  b.eq 0x7101e6abbc
7101e6ab14  ldr x9,[x19, #0x4d0]
7101e6ab18  ldr x8,[x9]
7101e6ab1c  ldr x8,[x8, #0x8]
7101e6ab20  ldrb w10,[x8, #0x388]
7101e6ab24  fmov s0,wzr
7101e6ab28  cbz w10,0x7101e6ab48
7101e6ab2c  ldrb w9,[x9, #0x8]
7101e6ab30  cmp x9,#0x2
7101e6ab34  b.hi 0x7101e6ab48
7101e6ab38  add x8,x8,x9, LSL #0x3
7101e6ab3c  ldr x8,[x8, #0x78]
7101e6ab40  cbz x8,0x7101e6ab48
7101e6ab44  ldr s0,[x8, #0x58]
7101e6ab48  ldr x9,[x19, #0x300]
7101e6ab4c  ldr x8,[x19, #0x2f8]
7101e6ab50  sub x9,x9,x8
7101e6ab54  asr x9,x9,#0x2
7101e6ab58  cmp x9,#0x3
7101e6ab5c  b.cc 0x7101e6ab64
7101e6ab60  str s0,[x8, #0x8]
7101e6ab64  cmp w20,#0x3
7101e6ab68  b.eq 0x7101e6abbc
7101e6ab6c  ldr x9,[x19, #0x4d0]
7101e6ab70  ldr x8,[x9]
7101e6ab74  ldr x8,[x8, #0x8]
7101e6ab78  ldrb w10,[x8, #0x388]
7101e6ab7c  fmov s0,wzr
7101e6ab80  cbz w10,0x7101e6aba0
7101e6ab84  ldrb w9,[x9, #0x8]
7101e6ab88  cmp x9,#0x2
7101e6ab8c  b.hi 0x7101e6aba0
7101e6ab90  add x8,x8,x9, LSL #0x3
7101e6ab94  ldr x8,[x8, #0x78]
7101e6ab98  cbz x8,0x7101e6aba0
7101e6ab9c  ldr s0,[x8, #0x70]
7101e6aba0  ldr x9,[x19, #0x300]
7101e6aba4  ldr x8,[x19, #0x2f8]
7101e6aba8  sub x9,x9,x8
7101e6abac  asr x9,x9,#0x2
7101e6abb0  cmp x9,#0x4
7101e6abb4  b.cc 0x7101e6abbc
7101e6abb8  str s0,[x8, #0xc]
7101e6abbc  ldr x8,[x19, #0x248]
7101e6abc0  ldr x9,[x8, #0x18]
7101e6abc4  ldr x0,[x9, #0x10]
7101e6abc8  add x20,x19,#0x248
7101e6abcc  cbz x0,0x7101e6abe8
7101e6abd0  mov x1,sp
7101e6abd4  mov w2,wzr
7101e6abd8  mov w3,wzr
7101e6abdc  str wzr,[sp]
7101e6abe0  bl 0x71037a2270
7101e6abe4  ldr x8,[x20]
7101e6abe8  ldr x21,[x8, #0x40]
7101e6abec  cbz x21,0x7101e6ad04
7101e6abf0  ldr x9,[x21, #0x8]
7101e6abf4  ldr x22,[x9, #0x8]
7101e6abf8  cbz x22,0x7101e6acf0
7101e6abfc  ldrb w8,[x9, #0x10]
7101e6ac00  cbz w8,0x7101e6accc
7101e6ac04  ldr x8,[x9]
7101e6ac08  ldr x24,[x8, #0x80]
7101e6ac0c  add x23,x8,#0x88
7101e6ac10  cmp x24,x23
7101e6ac14  b.eq 0x7101e6accc
7101e6ac18  ldr x0,[x24, #0x68]
7101e6ac1c  ldr x8,[x0]
7101e6ac20  ldr x8,[x8, #0x148]
7101e6ac24  blr x8
7101e6ac28  tbz w0,#0x0,0x7101e6ac68
7101e6ac2c  ldr x8,[x22]
7101e6ac30  ldr x1,[x24, #0x68]
7101e6ac34  mov x0,x22
7101e6ac38  ldr x8,[x8, #0x120]
7101e6ac3c  blr x8
7101e6ac40  tbz w0,#0x0,0x7101e6ac68
7101e6ac44  ldr x0,[x24, #0x68]
7101e6ac48  ldr x8,[x0]
7101e6ac4c  ldr x8,[x8, #0x178]
7101e6ac50  blr x8
7101e6ac54  ldr x0,[x24, #0x68]
7101e6ac58  ldr x8,[x0]
7101e6ac5c  ldr x8,[x8, #0x140]
7101e6ac60  mov w1,wzr
7101e6ac64  blr x8
7101e6ac68  ldr x8,[x24, #0x8]
7101e6ac6c  cbz x8,0x7101e6ac80
7101e6ac70  mov x24,x8
7101e6ac74  ldr x8,[x8]
7101e6ac78  cbnz x8,0x7101e6ac70
7101e6ac7c  b 0x7101e6acac
7101e6ac80  mov x8,x24
7101e6ac84  ldr x9,[x8, #0x10]!
7101e6ac88  ldr x10,[x9]
7101e6ac8c  cmp x10,x24
7101e6ac90  b.eq 0x7101e6acb8
7101e6ac94  ldr x9,[x8]
7101e6ac98  mov x8,x9
7101e6ac9c  ldr x24,[x8, #0x10]!
7101e6aca0  ldr x10,[x24]
7101e6aca4  cmp x10,x9
7101e6aca8  b.ne 0x7101e6ac94
7101e6acac  cmp x24,x23
7101e6acb0  b.ne 0x7101e6ac18
7101e6acb4  b 0x7101e6acc4
7101e6acb8  mov x24,x9
7101e6acbc  cmp x24,x23
7101e6acc0  b.ne 0x7101e6ac18
7101e6acc4  ldr x8,[x21, #0x8]
7101e6acc8  ldr x22,[x8, #0x8]
7101e6accc  ldr x8,[x22]
7101e6acd0  ldr x8,[x8, #0x178]
7101e6acd4  mov x0,x22
7101e6acd8  blr x8
7101e6acdc  ldr x8,[x20]
7101e6ace0  ldr x21,[x8, #0x40]
7101e6ace4  str xzr,[x8, #0x40]
7101e6ace8  cbnz x21,0x7101e6acf4
7101e6acec  b 0x7101e6ad04
7101e6acf0  str xzr,[x8, #0x40]
7101e6acf4  ldr x8,[x21]
7101e6acf8  ldr x8,[x8, #0x8]
7101e6acfc  mov x0,x21
7101e6ad00  blr x8
7101e6ad04  ldr x8,[x19, #0x248]
7101e6ad08  ldr x0,[x8, #0x8]
7101e6ad0c  fmov s0,0x3f800000
7101e6ad10  adrp x1,0x7104443000
7101e6ad14  add x1,x1,#0xdfb
7101e6ad18  bl 0x7103778300
7101e6ad1c  mov w21,#0x1
7101e6ad20  mov w1,#0x1
7101e6ad24  mov x0,x20
7101e6ad28  strb wzr,[x19, #0x251]
7101e6ad2c  strb w21,[x19, #0x2c0]
7101e6ad30  bl 0x7101e94e90
7101e6ad34  mov w8,#0x4
7101e6ad38  strb w8,[x19, #0x2c1]
7101e6ad3c  ldrsw x8,[x19, #0x1cc]
7101e6ad40  cmp w8,#0x13
7101e6ad44  b.cs 0x7101e6ad94
7101e6ad48  add x8,x19,x8, LSL #0x2
7101e6ad4c  str w21,[x8, #0x180]
7101e6ad50  ldr w8,[x19, #0x1cc]
7101e6ad54  cmp w8,#0x11
7101e6ad58  b.gt 0x7101e6ad78
7101e6ad5c  add w8,w8,#0x1
7101e6ad60  cmp w8,#0x13
7101e6ad64  str w8,[x19, #0x1cc]
7101e6ad68  b.cs 0x7101e6ad94
7101e6ad6c  add x8,x19,w8, SXTW  #0x2
7101e6ad70  mov w9,#0x11
7101e6ad74  str w9,[x8, #0x180]
7101e6ad78  ldp x29,x30,[sp, #0x60]
7101e6ad7c  ldp x20,x19,[sp, #0x50]
7101e6ad80  ldp x22,x21,[sp, #0x40]
7101e6ad84  ldp x24,x23,[sp, #0x30]
7101e6ad88  ldp x26,x25,[sp, #0x20]
7101e6ad8c  add sp,sp,#0x70
7101e6ad90  ret
7101e6ad94  bl 0x71039c2650
7101e6ad98  add x0,x23,#0x858
7101e6ad9c  bl 0x71039c1330
