// addr:      7101caa0b0
// offset:    0x1caa0b0
// name:      FUN_7101caa0b0
// mangled:   
// size:      3212

7101caa0b0  sub sp,sp,#0xf0
7101caa0b4  str x23,[sp, #0xb0]
7101caa0b8  stp x22,x21,[sp, #0xc0]
7101caa0bc  stp x20,x19,[sp, #0xd0]
7101caa0c0  stp x29,x30,[sp, #0xe0]
7101caa0c4  add x29,sp,#0xe0
7101caa0c8  ldr w8,[x0, #0x16c]
7101caa0cc  mov x19,x0
7101caa0d0  cbz w8,0x7101caa100
7101caa0d4  ldr x8,[x19, #0x2358]
7101caa0d8  ldrb w8,[x8, #0x280]
7101caa0dc  cbz w8,0x7101caa364
7101caa0e0  ldr x8,[x19, #0x180]
7101caa0e4  ldr x20,[x8, #0x80]
7101caa0e8  ldrb w8,[x20, #0xc9]
7101caa0ec  mov w9,#0x2260
7101caa0f0  add x0,x20,x9
7101caa0f4  cbz w8,0x7101caa34c
7101caa0f8  mov w1,wzr
7101caa0fc  b 0x7101caa350
7101caa100  mov w8,#0x2370
7101caa104  mov w9,#0x1
7101caa108  strb w9,[x19, x8, LSL ]
7101caa10c  mov w8,#0x2358
7101caa110  add x21,x19,x8
7101caa114  ldr x8,[x19, #0x2358]
7101caa118  cbz x8,0x7101caa1c0
7101caa11c  ldr w22,[x19, #0x2374]
7101caa120  cmn w22,#0x1
7101caa124  b.ne 0x7101caa148
7101caa128  ldr w9,[x8, #0x254]
7101caa12c  cmp w9,#0x1
7101caa130  b.ne 0x7101caa148
7101caa134  mov w2,#0x1
7101caa138  mov x0,x21
7101caa13c  mov w1,wzr
7101caa140  bl 0x7103771a80
7101caa144  ldr x8,[x21]
7101caa148  ldr x9,[x8, #0x1b8]
7101caa14c  cbz x9,0x7101caa1c0
7101caa150  add x10,x8,#0x1b8
7101caa154  mov x8,x10
7101caa158  ldr w11,[x9, #0x20]
7101caa15c  cmp w11,#0x1
7101caa160  cset w11,lt
7101caa164  csel x8,x8,x9,lt
7101caa168  ldr x9,[x9, w11, UXTW #0x3]
7101caa16c  cbnz x9,0x7101caa158
7101caa170  cmp x8,x10
7101caa174  b.eq 0x7101caa1c0
7101caa178  ldr w9,[x8, #0x20]
7101caa17c  cmp w9,#0x1
7101caa180  b.gt 0x7101caa1c0
7101caa184  ldr x20,[x8, #0x28]
7101caa188  cbz x20,0x7101caa1c0
7101caa18c  ldr x8,[x20]
7101caa190  ldr x8,[x8, #0x1f8]
7101caa194  cmn w22,#0x1
7101caa198  cset w1,ne
7101caa19c  mov x0,x20
7101caa1a0  cset w22,eq
7101caa1a4  blr x8
7101caa1a8  ldr x8,[x20]
7101caa1ac  ldr x8,[x8, #0x388]
7101caa1b0  mov x0,x20
7101caa1b4  mov w1,w22
7101caa1b8  mov w2,wzr
7101caa1bc  blr x8
7101caa1c0  ldr w8,[x19, #0x2374]
7101caa1c4  cmn w8,#0x1
7101caa1c8  b.eq 0x7101caa4cc
7101caa1cc  ldr w8,[x19, #0x237c]
7101caa1d0  cmp w8,#0x0
7101caa1d4  cset w20,ne
7101caa1d8  ldr x8,[x21]
7101caa1dc  cbz x8,0x7101caa5d4
7101caa1e0  tbnz w20,#0x0,0x7101caa204
7101caa1e4  ldr w9,[x8, #0x254]
7101caa1e8  cmp w9,#0x2
7101caa1ec  b.ne 0x7101caa204
7101caa1f0  mov w2,#0x1
7101caa1f4  mov x0,x21
7101caa1f8  mov w1,wzr
7101caa1fc  bl 0x7103771a80
7101caa200  ldr x8,[x21]
7101caa204  ldr x9,[x8, #0x1b8]
7101caa208  cbz x9,0x7101caa274
7101caa20c  add x10,x8,#0x1b8
7101caa210  mov x8,x10
7101caa214  ldr w11,[x9, #0x20]
7101caa218  cmp w11,#0x2
7101caa21c  cset w11,lt
7101caa220  csel x8,x8,x9,lt
7101caa224  ldr x9,[x9, w11, UXTW #0x3]
7101caa228  cbnz x9,0x7101caa214
7101caa22c  cmp x8,x10
7101caa230  b.eq 0x7101caa274
7101caa234  ldr w9,[x8, #0x20]
7101caa238  cmp w9,#0x2
7101caa23c  b.gt 0x7101caa274
7101caa240  ldr x21,[x8, #0x28]
7101caa244  cbz x21,0x7101caa274
7101caa248  ldr x8,[x21]
7101caa24c  ldr x8,[x8, #0x1f8]
7101caa250  mov x0,x21
7101caa254  mov w1,w20
7101caa258  blr x8
7101caa25c  ldr x8,[x21]
7101caa260  ldr x8,[x8, #0x388]
7101caa264  eor w1,w20,#0x1
7101caa268  mov x0,x21
7101caa26c  mov w2,wzr
7101caa270  blr x8
7101caa274  ldr x8,[x19, #0x180]
7101caa278  ldr x22,[x8, #0x80]
7101caa27c  mov w8,#0x11ac
7101caa280  strb w20,[x22, x8, LSL ]
7101caa284  ldr w8,[x22, #0x11b0]
7101caa288  cmp w8,#0x6
7101caa28c  b.lt 0x7101caa4dc
7101caa290  ldr x9,[x22, #0x2268]
7101caa294  ldr x8,[x9, #0x1b8]
7101caa298  cbz x8,0x7101caa5d4
7101caa29c  add x9,x9,#0x1b8
7101caa2a0  mov x10,x9
7101caa2a4  mov x11,x8
7101caa2a8  ldr w12,[x11, #0x20]
7101caa2ac  cmp w12,#0x2
7101caa2b0  cset w12,lt
7101caa2b4  csel x10,x10,x11,lt
7101caa2b8  ldr x11,[x11, w12, UXTW #0x3]
7101caa2bc  cbnz x11,0x7101caa2a8
7101caa2c0  cmp x10,x9
7101caa2c4  b.eq 0x7101caa314
7101caa2c8  ldr w11,[x10, #0x20]
7101caa2cc  cmp w11,#0x2
7101caa2d0  b.gt 0x7101caa314
7101caa2d4  ldr x21,[x10, #0x28]
7101caa2d8  cbz x21,0x7101caa314
7101caa2dc  ldr x8,[x21]
7101caa2e0  ldr x8,[x8, #0x1f8]
7101caa2e4  mov x0,x21
7101caa2e8  mov w1,w20
7101caa2ec  blr x8
7101caa2f0  ldr x8,[x21]
7101caa2f4  ldr x8,[x8, #0x388]
7101caa2f8  eor w1,w20,#0x1
7101caa2fc  mov x0,x21
7101caa300  mov w2,wzr
7101caa304  blr x8
7101caa308  ldr x8,[x22, #0x2268]
7101caa30c  add x9,x8,#0x1b8
7101caa310  ldr x8,[x8, #0x1b8]
7101caa314  cbz x8,0x7101caa5d4
7101caa318  mov x10,x9
7101caa31c  ldr w11,[x8, #0x20]
7101caa320  cmp w11,#0x2
7101caa324  cset w11,lt
7101caa328  csel x10,x10,x8,lt
7101caa32c  ldr x8,[x8, w11, UXTW #0x3]
7101caa330  cbnz x8,0x7101caa31c
7101caa334  cmp x10,x9
7101caa338  b.eq 0x7101caa5d4
7101caa33c  ldr w8,[x10, #0x20]
7101caa340  cmp w8,#0x2
7101caa344  b.le 0x7101caa5a0
7101caa348  b 0x7101caa5d4
7101caa34c  mov w1,#0x4
7101caa350  mov w2,wzr
7101caa354  bl 0x7103771be0
7101caa358  ldr x8,[x20, #0x2260]
7101caa35c  ldr w8,[x8, #0x25c]
7101caa360  str w8,[x20, #0x2270]
7101caa364  ldr x8,[x19, #0x180]
7101caa368  ldr x22,[x8, #0x80]
7101caa36c  ldr w8,[x22, #0x2270]
7101caa370  cbz w8,0x7101caa3f8
7101caa374  mov w9,#0x2358
7101caa378  sub w8,w8,#0x1
7101caa37c  add x0,x19,x9
7101caa380  cmp w8,#0x1
7101caa384  b.hi 0x7101caa488
7101caa388  mov w1,#0x2
7101caa38c  mov w2,wzr
7101caa390  bl 0x7103771a80
7101caa394  ldr x0,[x19, #0x2358]
7101caa398  ldr x8,[x0]
7101caa39c  ldr x8,[x8, #0x70]
7101caa3a0  mov w1,wzr
7101caa3a4  blr x8
7101caa3a8  ldr x0,[x19, #0x2368]
7101caa3ac  ldr x8,[x0]
7101caa3b0  ldr x8,[x8, #0x70]
7101caa3b4  mov w1,wzr
7101caa3b8  blr x8
7101caa3bc  ldr x0,[x19, #0x2360]
7101caa3c0  ldr x8,[x0]
7101caa3c4  ldr x8,[x8, #0x70]
7101caa3c8  mov w1,wzr
7101caa3cc  blr x8
7101caa3d0  ldr w8,[x19, #0x164]
7101caa3d4  cmp w8,#0x11
7101caa3d8  b.gt 0x7101caad20
7101caa3dc  add w8,w8,#0x1
7101caa3e0  cmp w8,#0x13
7101caa3e4  str w8,[x19, #0x164]
7101caa3e8  b.cs 0x7101caad38
7101caa3ec  add x8,x19,w8, SXTW  #0x2
7101caa3f0  mov w9,#0xb
7101caa3f4  b 0x7101caad1c
7101caa3f8  ldr x8,[x19, #0x2320]
7101caa3fc  ldr x8,[x8]
7101caa400  ldr x8,[x8]
7101caa404  ldr x8,[x8, #0x600]
7101caa408  strb wzr,[x8, #0x4aa]
7101caa40c  ldr x8,[x19, #0x2328]
7101caa410  ldr x8,[x8]
7101caa414  ldr x8,[x8]
7101caa418  ldr x8,[x8, #0x600]
7101caa41c  strb wzr,[x8, #0x4aa]
7101caa420  ldrsw x8,[x19, #0x164]
7101caa424  cmp w8,#0x13
7101caa428  b.cs 0x7101caad38
7101caa42c  add x8,x19,x8, LSL #0x2
7101caa430  mov w9,#0x2
7101caa434  str w9,[x8, #0x118]
7101caa438  ldr w8,[x19, #0x164]
7101caa43c  cmp w8,#0x11
7101caa440  b.gt 0x7101caad20
7101caa444  add w8,w8,#0x1
7101caa448  cmp w8,#0x13
7101caa44c  str w8,[x19, #0x164]
7101caa450  b.cs 0x7101caad38
7101caa454  add x8,x19,w8, SXTW  #0x2
7101caa458  orr w9,wzr,#0x6
7101caa45c  str w9,[x8, #0x118]
7101caa460  ldr w8,[x19, #0x164]
7101caa464  cmp w8,#0x11
7101caa468  b.gt 0x7101caad20
7101caa46c  add w8,w8,#0x1
7101caa470  cmp w8,#0x13
7101caa474  str w8,[x19, #0x164]
7101caa478  b.cs 0x7101caad38
7101caa47c  add x8,x19,w8, SXTW  #0x2
7101caa480  mov w9,#0x4
7101caa484  b 0x7101caad1c
7101caa488  ldr x8,[x0]
7101caa48c  ldr w9,[x8, #0x25c]
7101caa490  cbz w9,0x7101caa6b4
7101caa494  cmp w9,#0x1
7101caa498  b.ne 0x7101caa744
7101caa49c  adrp x8,0x710532f000
7101caa4a0  ldr x8,[x8, #0x8d0]
7101caa4a4  ldr x0,[x8, #0x8]
7101caa4a8  ldp x8,x9,[x0, #0x40]
7101caa4ac  sub x9,x9,x8
7101caa4b0  asr x9,x9,#0x3
7101caa4b4  cmp x9,#0x3
7101caa4b8  b.cc 0x7101caa800
7101caa4bc  ldr x20,[x8, #0x10]
7101caa4c0  ldrb w8,[x0, #0x191]
7101caa4c4  cbnz w8,0x7101caa87c
7101caa4c8  b 0x7101caa80c
7101caa4cc  mov w20,wzr
7101caa4d0  ldr x8,[x21]
7101caa4d4  cbnz x8,0x7101caa1e0
7101caa4d8  b 0x7101caa5d4
7101caa4dc  sub w8,w8,#0x1
7101caa4e0  cmp w8,#0x4
7101caa4e4  b.hi 0x7101caa5d4
7101caa4e8  ldr x9,[x22, #0x2268]
7101caa4ec  ldr x8,[x9, #0x1b8]
7101caa4f0  cbz x8,0x7101caa5d4
7101caa4f4  add x9,x9,#0x1b8
7101caa4f8  mov x10,x9
7101caa4fc  mov x11,x8
7101caa500  ldr w12,[x11, #0x20]
7101caa504  cmp w12,#0x1
7101caa508  cset w12,lt
7101caa50c  csel x10,x10,x11,lt
7101caa510  ldr x11,[x11, w12, UXTW #0x3]
7101caa514  cbnz x11,0x7101caa500
7101caa518  cmp x10,x9
7101caa51c  b.eq 0x7101caa56c
7101caa520  ldr w11,[x10, #0x20]
7101caa524  cmp w11,#0x1
7101caa528  b.gt 0x7101caa56c
7101caa52c  ldr x21,[x10, #0x28]
7101caa530  cbz x21,0x7101caa56c
7101caa534  ldr x8,[x21]
7101caa538  ldr x8,[x8, #0x1f8]
7101caa53c  mov x0,x21
7101caa540  mov w1,w20
7101caa544  blr x8
7101caa548  ldr x8,[x21]
7101caa54c  ldr x8,[x8, #0x388]
7101caa550  eor w1,w20,#0x1
7101caa554  mov x0,x21
7101caa558  mov w2,wzr
7101caa55c  blr x8
7101caa560  ldr x8,[x22, #0x2268]
7101caa564  add x9,x8,#0x1b8
7101caa568  ldr x8,[x8, #0x1b8]
7101caa56c  cbz x8,0x7101caa5d4
7101caa570  mov x10,x9
7101caa574  ldr w11,[x8, #0x20]
7101caa578  cmp w11,#0x1
7101caa57c  cset w11,lt
7101caa580  csel x10,x10,x8,lt
7101caa584  ldr x8,[x8, w11, UXTW #0x3]
7101caa588  cbnz x8,0x7101caa574
7101caa58c  cmp x10,x9
7101caa590  b.eq 0x7101caa5d4
7101caa594  ldr w8,[x10, #0x20]
7101caa598  cmp w8,#0x1
7101caa59c  b.gt 0x7101caa5d4
7101caa5a0  ldr x21,[x10, #0x28]
7101caa5a4  cbz x21,0x7101caa5d4
7101caa5a8  ldr x8,[x21]
7101caa5ac  ldr x8,[x8, #0x208]
7101caa5b0  mov x0,x21
7101caa5b4  mov w1,w20
7101caa5b8  blr x8
7101caa5bc  ldr x8,[x21]
7101caa5c0  ldr x8,[x8, #0x388]
7101caa5c4  eor w1,w20,#0x1
7101caa5c8  mov x0,x21
7101caa5cc  mov w2,wzr
7101caa5d0  blr x8
7101caa5d4  ldr x8,[x19, #0x2320]
7101caa5d8  ldr x8,[x8]
7101caa5dc  add x1,x8,#0x8
7101caa5e0  sub x0,x29,#0x40
7101caa5e4  bl 0x7103776390
7101caa5e8  ldr x1,[x19, #0x2358]
7101caa5ec  sub x0,x29,#0x60
7101caa5f0  mov w2,wzr
7101caa5f4  bl 0x7103771d60
7101caa5f8  ldur x20,[x29, #-0x58]
7101caa5fc  ldr x8,[x20]
7101caa600  cbz x8,0x7101caa60c
7101caa604  ldr x1,[x8, #0x88]
7101caa608  b 0x7101caa614
7101caa60c  adrp x1,0x7104867000
7101caa610  add x1,x1,#0xc2e
7101caa614  sub x8,x29,#0x50
7101caa618  sub x0,x29,#0x40
7101caa61c  bl 0x7103776640
7101caa620  adrp x22,0x710523d000
7101caa624  add x22,x22,#0x9c8
7101caa628  stp x22,xzr,[x29, #-0x60]
7101caa62c  cbz x20,0x7101caa638
7101caa630  mov x0,x20
7101caa634  bl 0x710392eb40
7101caa638  ldr w8,[x19, #0x2374]
7101caa63c  ldur x20,[x29, #-0x48]
7101caa640  cmn w8,#0x1
7101caa644  b.eq 0x7101caa69c
7101caa648  fmov s0,0x3f800000
7101caa64c  adrp x1,0x71043cf000
7101caa650  add x1,x1,#0x594
7101caa654  mov x0,x20
7101caa658  bl 0x7103778300
7101caa65c  adrp x1,0x71043cf000
7101caa660  add x1,x1,#0xca4
7101caa664  sub x8,x29,#0x60
7101caa668  sub x0,x29,#0x50
7101caa66c  bl 0x7103776910
7101caa670  ldr w8,[x19, #0x2374]
7101caa674  cmp w8,#0x6
7101caa678  b.hi 0x7101caa938
7101caa67c  adrp x9,0x71044f9000
7101caa680  add x9,x9,#0xc10
7101caa684  ldrsw x8,[x9, x8, LSL #0x2]
7101caa688  add x8,x8,x9
7101caa68c  br x8
7101caa690  adrp x1,0x71042e7000
7101caa694  add x1,x1,#0x2e6
7101caa698  b 0x7101caa930
7101caa69c  fmov s0,0x3f800000
7101caa6a0  adrp x1,0x7104433000
7101caa6a4  add x1,x1,#0x286
7101caa6a8  mov x0,x20
7101caa6ac  bl 0x7103778300
7101caa6b0  b 0x7101caa950
7101caa6b4  adrp x8,0x710532f000
7101caa6b8  ldr x8,[x8, #0x8d0]
7101caa6bc  ldr x0,[x8, #0x8]
7101caa6c0  ldrb w8,[x0, #0x191]
7101caa6c4  cbnz w8,0x7101caa790
7101caa6c8  mov x20,#0xf89a
7101caa6cc  movk x20,#0xb197, LSL #16
7101caa6d0  movk x20,#0x19, LSL #32
7101caa6d4  mov w2,#0x4
7101caa6d8  mov x1,x20
7101caa6dc  bl 0x7103313f20
7101caa6e0  tbz w0,#0x0,0x7101caa790
7101caa6e4  add x0,sp,#0x40
7101caa6e8  mov x1,x20
7101caa6ec  bl 0x71024076d0
7101caa6f0  ldr x8,[sp, #0x50]
7101caa6f4  adrp x9,0x7104f73000
7101caa6f8  add x9,x9,#0xd50
7101caa6fc  str x9,[sp, #0x48]
7101caa700  cbz x8,0x7101caa7bc
7101caa704  adrp x8,0x7106dd5000
7101caa708  ldrb w8,[x8, #0x3a8]
7101caa70c  cmp w8,#0x1
7101caa710  b.ne 0x7101caa7bc
7101caa714  adrp x9,0x7106dd5000
7101caa718  ldr w8,[sp, #0x58]
7101caa71c  ldr w9,[x9, #0x3ac]
7101caa720  cmp w8,w9
7101caa724  b.ne 0x7101caa7bc
7101caa728  ldr x8,[sp, #0x50]
7101caa72c  ldr wzr,[x8, #0x38]!
7101caa730  ldaxr w9,[x8]
7101caa734  sub w9,w9,#0x1
7101caa738  stlxr w10,w9,[x8]
7101caa73c  cbnz w10,0x7101caa730
7101caa740  b 0x7101caa7bc
7101caa744  ldr w21,[x8, #0x254]
7101caa748  ldr w8,[x19, #0x26a4]
7101caa74c  cmp w8,w21
7101caa750  b.eq 0x7101caac6c
7101caa754  cmp w21,#0x2
7101caa758  b.ne 0x7101caac00
7101caa75c  ldr x0,[x22, #0x2268]
7101caa760  mov w8,#0x2268
7101caa764  add x20,x22,x8
7101caa768  ldr x8,[x0]
7101caa76c  ldr x8,[x8, #0x70]
7101caa770  mov w1,#0x1
7101caa774  mov w23,#0x1
7101caa778  blr x8
7101caa77c  ldr w8,[x22, #0x11b0]
7101caa780  cmp w8,#0x5
7101caa784  b.le 0x7101caac48
7101caa788  mov w1,#0x2
7101caa78c  b 0x7101caac5c
7101caa790  mov x8,#0x650000000000
7101caa794  movk x8,#0x87, LSL #48
7101caa798  strb wzr,[sp, #0x60]
7101caa79c  stp xzr,x8,[sp, #0x50]
7101caa7a0  mov x8,#-0x1
7101caa7a4  stp x8,xzr,[sp, #0x68]
7101caa7a8  adrp x8,0x7104f73000
7101caa7ac  add x8,x8,#0xd50
7101caa7b0  str wzr,[sp, #0x40]
7101caa7b4  str xzr,[sp, #0x78]
7101caa7b8  str x8,[sp, #0x48]
7101caa7bc  str xzr,[sp, #0x50]
7101caa7c0  strb wzr,[sp, #0x60]
7101caa7c4  ldr x8,[x19, #0x2320]
7101caa7c8  ldr x8,[x8]
7101caa7cc  ldr x8,[x8]
7101caa7d0  ldr x8,[x8, #0x600]
7101caa7d4  strb wzr,[x8, #0x4aa]
7101caa7d8  ldr w8,[x19, #0x164]
7101caa7dc  cmp w8,#0x11
7101caa7e0  b.gt 0x7101caad20
7101caa7e4  add w8,w8,#0x1
7101caa7e8  cmp w8,#0x13
7101caa7ec  str w8,[x19, #0x164]
7101caa7f0  b.cs 0x7101caad38
7101caa7f4  add x8,x19,w8, SXTW  #0x2
7101caa7f8  mov w9,#0x8
7101caa7fc  b 0x7101caad1c
7101caa800  mov x20,xzr
7101caa804  ldrb w8,[x0, #0x191]
7101caa808  cbnz w8,0x7101caa87c
7101caa80c  mov w2,#0x4
7101caa810  mov x1,x20
7101caa814  bl 0x7103313f20
7101caa818  tbz w0,#0x0,0x7101caa87c
7101caa81c  mov x0,sp
7101caa820  mov x1,x20
7101caa824  bl 0x71024076d0
7101caa828  ldr x8,[sp, #0x10]
7101caa82c  adrp x9,0x7104f73000
7101caa830  add x9,x9,#0xd50
7101caa834  str x9,[sp, #0x8]
7101caa838  cbz x8,0x7101caa8a8
7101caa83c  adrp x8,0x7106dd5000
7101caa840  ldrb w8,[x8, #0x3a8]
7101caa844  cmp w8,#0x1
7101caa848  b.ne 0x7101caa8a8
7101caa84c  adrp x9,0x7106dd5000
7101caa850  ldr w8,[sp, #0x18]
7101caa854  ldr w9,[x9, #0x3ac]
7101caa858  cmp w8,w9
7101caa85c  b.ne 0x7101caa8a8
7101caa860  ldr x8,[sp, #0x10]
7101caa864  ldr wzr,[x8, #0x38]!
7101caa868  ldaxr w9,[x8]
7101caa86c  sub w9,w9,#0x1
7101caa870  stlxr w10,w9,[x8]
7101caa874  cbnz w10,0x7101caa868
7101caa878  b 0x7101caa8a8
7101caa87c  mov x8,#0x650000000000
7101caa880  movk x8,#0x87, LSL #48
7101caa884  strb wzr,[sp, #0x20]
7101caa888  stp xzr,x8,[sp, #0x10]
7101caa88c  mov x8,#-0x1
7101caa890  stp x8,xzr,[sp, #0x28]
7101caa894  adrp x8,0x7104f73000
7101caa898  add x8,x8,#0xd50
7101caa89c  str wzr,[sp]
7101caa8a0  str xzr,[sp, #0x38]
7101caa8a4  str x8,[sp, #0x8]
7101caa8a8  str xzr,[sp, #0x10]
7101caa8ac  strb wzr,[sp, #0x20]
7101caa8b0  ldr x8,[x19, #0x2320]
7101caa8b4  ldr x8,[x8]
7101caa8b8  ldr x8,[x8]
7101caa8bc  ldr x8,[x8, #0x600]
7101caa8c0  strb wzr,[x8, #0x4aa]
7101caa8c4  ldr w8,[x19, #0x164]
7101caa8c8  cmp w8,#0x11
7101caa8cc  b.gt 0x7101caad20
7101caa8d0  add w8,w8,#0x1
7101caa8d4  cmp w8,#0x13
7101caa8d8  str w8,[x19, #0x164]
7101caa8dc  b.cs 0x7101caad38
7101caa8e0  add x8,x19,w8, SXTW  #0x2
7101caa8e4  mov w9,#0x9
7101caa8e8  b 0x7101caad1c
7101caa8ec  adrp x1,0x710438c000
7101caa8f0  add x1,x1,#0xbb6
7101caa8f4  b 0x7101caa930
7101caa8f8  adrp x1,0x710437c000
7101caa8fc  add x1,x1,#0x6c5
7101caa900  b 0x7101caa930
7101caa904  adrp x1,0x7104318000
7101caa908  add x1,x1,#0xfad
7101caa90c  b 0x7101caa930
7101caa910  adrp x1,0x710437c000
7101caa914  add x1,x1,#0x6a5
7101caa918  b 0x7101caa930
7101caa91c  adrp x1,0x7104308000
7101caa920  add x1,x1,#0x66f
7101caa924  b 0x7101caa930
7101caa928  adrp x1,0x7104422000
7101caa92c  add x1,x1,#0x505
7101caa930  sub x0,x29,#0x60
7101caa934  bl 0x710377a120
7101caa938  ldur x0,[x29, #-0x58]
7101caa93c  adrp x8,0x710523d000
7101caa940  add x8,x8,#0x9a8
7101caa944  stp x8,xzr,[x29, #-0x60]
7101caa948  cbz x0,0x7101caa950
7101caa94c  bl 0x710392eb40
7101caa950  mov x0,x19
7101caa954  bl 0x7101cabeb0
7101caa958  ldr x1,[x19, #0x2360]
7101caa95c  sub x0,x29,#0x60
7101caa960  mov w2,wzr
7101caa964  bl 0x7103771d60
7101caa968  ldur x21,[x29, #-0x58]
7101caa96c  ldr x0,[x21]
7101caa970  cbz x0,0x7101caa990
7101caa974  ldr w8,[x19, #0x2374]
7101caa978  cmp w8,#0x0
7101caa97c  ldr x8,[x0]
7101caa980  cset w1,eq
7101caa984  ldr x8,[x8, #0x2f0]
7101caa988  mov w2,wzr
7101caa98c  blr x8
7101caa990  stp x22,xzr,[x29, #-0x60]
7101caa994  cbz x21,0x7101caa9a0
7101caa998  mov x0,x21
7101caa99c  bl 0x710392eb40
7101caa9a0  ldr x1,[x19, #0x2360]
7101caa9a4  sub x0,x29,#0x60
7101caa9a8  mov w2,#0x1
7101caa9ac  bl 0x7103771d60
7101caa9b0  ldur x21,[x29, #-0x58]
7101caa9b4  ldr x0,[x21]
7101caa9b8  cbz x0,0x7101caa9d8
7101caa9bc  ldr w8,[x19, #0x2374]
7101caa9c0  cmp w8,#0x1
7101caa9c4  ldr x8,[x0]
7101caa9c8  cset w1,eq
7101caa9cc  ldr x8,[x8, #0x2f0]
7101caa9d0  mov w2,wzr
7101caa9d4  blr x8
7101caa9d8  stp x22,xzr,[x29, #-0x60]
7101caa9dc  cbz x21,0x7101caa9e8
7101caa9e0  mov x0,x21
7101caa9e4  bl 0x710392eb40
7101caa9e8  ldr x1,[x19, #0x2360]
7101caa9ec  sub x0,x29,#0x60
7101caa9f0  mov w2,#0x2
7101caa9f4  bl 0x7103771d60
7101caa9f8  ldur x21,[x29, #-0x58]
7101caa9fc  ldr x0,[x21]
7101caaa00  cbz x0,0x7101caaa20
7101caaa04  ldr w8,[x19, #0x2374]
7101caaa08  cmp w8,#0x2
7101caaa0c  ldr x8,[x0]
7101caaa10  cset w1,eq
7101caaa14  ldr x8,[x8, #0x2f0]
7101caaa18  mov w2,wzr
7101caaa1c  blr x8
7101caaa20  stp x22,xzr,[x29, #-0x60]
7101caaa24  cbz x21,0x7101caaa30
7101caaa28  mov x0,x21
7101caaa2c  bl 0x710392eb40
7101caaa30  ldr x1,[x19, #0x2360]
7101caaa34  sub x0,x29,#0x60
7101caaa38  orr w2,wzr,#0x3
7101caaa3c  bl 0x7103771d60
7101caaa40  ldur x21,[x29, #-0x58]
7101caaa44  ldr x0,[x21]
7101caaa48  cbz x0,0x7101caaa68
7101caaa4c  ldr w8,[x19, #0x2374]
7101caaa50  cmp w8,#0x3
7101caaa54  ldr x8,[x0]
7101caaa58  cset w1,eq
7101caaa5c  ldr x8,[x8, #0x2f0]
7101caaa60  mov w2,wzr
7101caaa64  blr x8
7101caaa68  stp x22,xzr,[x29, #-0x60]
7101caaa6c  cbz x21,0x7101caaa78
7101caaa70  mov x0,x21
7101caaa74  bl 0x710392eb40
7101caaa78  ldr x1,[x19, #0x2360]
7101caaa7c  sub x0,x29,#0x60
7101caaa80  mov w2,#0x4
7101caaa84  bl 0x7103771d60
7101caaa88  ldur x21,[x29, #-0x58]
7101caaa8c  ldr x0,[x21]
7101caaa90  cbz x0,0x7101caaab0
7101caaa94  ldr w8,[x19, #0x2374]
7101caaa98  cmp w8,#0x4
7101caaa9c  ldr x8,[x0]
7101caaaa0  cset w1,eq
7101caaaa4  ldr x8,[x8, #0x2f0]
7101caaaa8  mov w2,wzr
7101caaaac  blr x8
7101caaab0  stp x22,xzr,[x29, #-0x60]
7101caaab4  cbz x21,0x7101caaac0
7101caaab8  mov x0,x21
7101caaabc  bl 0x710392eb40
7101caaac0  ldr x1,[x19, #0x2360]
7101caaac4  mov w2,#0x5
7101caaac8  sub x0,x29,#0x60
7101caaacc  bl 0x7103771d60
7101caaad0  ldur x21,[x29, #-0x58]
7101caaad4  ldr x0,[x21]
7101caaad8  cbz x0,0x7101caaaf8
7101caaadc  ldr w8,[x19, #0x2374]
7101caaae0  cmp w8,#0x5
7101caaae4  ldr x8,[x0]
7101caaae8  cset w1,eq
7101caaaec  ldr x8,[x8, #0x2f0]
7101caaaf0  mov w2,wzr
7101caaaf4  blr x8
7101caaaf8  stp x22,xzr,[x29, #-0x60]
7101caaafc  cbz x21,0x7101caab08
7101caab00  mov x0,x21
7101caab04  bl 0x710392eb40
7101caab08  ldr x1,[x19, #0x2360]
7101caab0c  sub x0,x29,#0x60
7101caab10  orr w2,wzr,#0x6
7101caab14  bl 0x7103771d60
7101caab18  ldur x21,[x29, #-0x58]
7101caab1c  ldr x0,[x21]
7101caab20  cbz x0,0x7101caab40
7101caab24  ldr w8,[x19, #0x2374]
7101caab28  cmp w8,#0x6
7101caab2c  ldr x8,[x0]
7101caab30  cset w1,eq
7101caab34  ldr x8,[x8, #0x2f0]
7101caab38  mov w2,wzr
7101caab3c  blr x8
7101caab40  stp x22,xzr,[x29, #-0x60]
7101caab44  cbz x21,0x7101caab50
7101caab48  mov x0,x21
7101caab4c  bl 0x710392eb40
7101caab50  adrp x21,0x710523d000
7101caab54  add x21,x21,#0x988
7101caab58  stp x21,xzr,[x29, #-0x50]
7101caab5c  cbz x20,0x7101caab80
7101caab60  ldr x0,[x20, #0x18]
7101caab64  adrp x8,0x710523d000
7101caab68  add x8,x8,#0x9a8
7101caab6c  stp x8,xzr,[x20, #0x10]
7101caab70  cbz x0,0x7101caab78
7101caab74  bl 0x710392eb40
7101caab78  mov x0,x20
7101caab7c  bl 0x710392eb40
7101caab80  ldur x20,[x29, #-0x38]
7101caab84  stp x21,xzr,[x29, #-0x40]
7101caab88  cbz x20,0x7101caabac
7101caab8c  ldr x0,[x20, #0x18]
7101caab90  adrp x8,0x710523d000
7101caab94  add x8,x8,#0x9a8
7101caab98  stp x8,xzr,[x20, #0x10]
7101caab9c  cbz x0,0x7101caaba4
7101caaba0  bl 0x710392eb40
7101caaba4  mov x0,x20
7101caaba8  bl 0x710392eb40
7101caabac  ldr x8,[x19, #0x2320]
7101caabb0  ldr x8,[x8]
7101caabb4  ldr x8,[x8]
7101caabb8  ldr x8,[x8, #0x600]
7101caabbc  mov w9,#0x1
7101caabc0  strb w9,[x8, #0x4aa]
7101caabc4  ldr x0,[x19, #0x2358]
7101caabc8  ldr x8,[x0]
7101caabcc  ldr x8,[x8, #0x70]
7101caabd0  mov w1,#0x1
7101caabd4  blr x8
7101caabd8  ldr x0,[x19, #0x2368]
7101caabdc  ldp x20,x19,[sp, #0xd0]
7101caabe0  ldr x8,[x0]
7101caabe4  ldr x2,[x8, #0x70]
7101caabe8  ldr x23,[sp, #0xb0]
7101caabec  ldp x29,x30,[sp, #0xe0]
7101caabf0  mov w1,#0x1
7101caabf4  ldp x22,x21,[sp, #0xc0]
7101caabf8  add sp,sp,#0xf0
7101caabfc  br x2
7101caac00  cmp w8,#0x2
7101caac04  b.ne 0x7101caac68
7101caac08  ldr x0,[x22, #0x2268]
7101caac0c  mov w8,#0x2268
7101caac10  add x20,x22,x8
7101caac14  ldr x8,[x0]
7101caac18  ldr x8,[x8, #0x70]
7101caac1c  mov w1,wzr
7101caac20  blr x8
7101caac24  mov w8,#0x11b4
7101caac28  ldrb w8,[x22, x8, LSL ]
7101caac2c  cbz w8,0x7101caac58
7101caac30  ldr x0,[x20]
7101caac34  ldr w8,[x0, #0x254]
7101caac38  cmp w8,#0x3
7101caac3c  b.ne 0x7101caac68
7101caac40  bl 0x710376b960
7101caac44  b 0x7101caac68
7101caac48  sub w8,w8,#0x1
7101caac4c  cmp w8,#0x5
7101caac50  cneg w1,w23,cs
7101caac54  b 0x7101caac5c
7101caac58  orr w1,wzr,#0x3
7101caac5c  mov x0,x20
7101caac60  mov w2,wzr
7101caac64  bl 0x7103771a80
7101caac68  str w21,[x19, #0x26a4]
7101caac6c  ldr x8,[x19, #0x2368]
7101caac70  ldr w9,[x8, #0x25c]
7101caac74  cmp w9,#0x3
7101caac78  b.ne 0x7101caad20
7101caac7c  ldr x10,[x8, #0x1c8]
7101caac80  add x9,x8,#0x1d0
7101caac84  b 0x7101caac8c
7101caac88  mov x10,x12
7101caac8c  cmp x10,x9
7101caac90  b.eq 0x7101caace0
7101caac94  ldr x11,[x10, #0x8]
7101caac98  str wzr,[x10, #0x28]
7101caac9c  cbz x11,0x7101caacb0
7101caaca0  mov x10,x11
7101caaca4  ldr x11,[x11]
7101caaca8  cbnz x11,0x7101caaca0
7101caacac  b 0x7101caac8c
7101caacb0  mov x11,x10
7101caacb4  ldr x12,[x11, #0x10]!
7101caacb8  ldr x13,[x12]
7101caacbc  cmp x13,x10
7101caacc0  b.eq 0x7101caac88
7101caacc4  ldr x12,[x11]
7101caacc8  mov x11,x12
7101caaccc  ldr x10,[x11, #0x10]!
7101caacd0  ldr x13,[x10]
7101caacd4  cmp x13,x12
7101caacd8  b.ne 0x7101caacc4
7101caacdc  b 0x7101caac8c
7101caace0  mov x9,#-0x1
7101caace4  str x9,[x8, #0x258]
7101caace8  str x9,[x8, #0x250]
7101caacec  strb wzr,[x8, #0x280]
7101caacf0  add x8,x8,#0x282
7101caacf4  str wzr,[x8]
7101caacf8  ldr w8,[x19, #0x164]
7101caacfc  cmp w8,#0x11
7101caad00  b.gt 0x7101caad20
7101caad04  add w8,w8,#0x1
7101caad08  cmp w8,#0x13
7101caad0c  str w8,[x19, #0x164]
7101caad10  b.cs 0x7101caad38
7101caad14  add x8,x19,w8, SXTW  #0x2
7101caad18  mov w9,#0xa
7101caad1c  str w9,[x8, #0x118]
7101caad20  ldp x29,x30,[sp, #0xe0]
7101caad24  ldr x23,[sp, #0xb0]
7101caad28  ldp x20,x19,[sp, #0xd0]
7101caad2c  ldp x22,x21,[sp, #0xc0]
7101caad30  add sp,sp,#0xf0
7101caad34  ret
7101caad38  bl 0x71039c2650
