// addr:      71030ae260
// offset:    0x30ae260
// name:      FUN_71030ae260
// mangled:   
// size:      1740

71030ae260  sub sp,sp,#0x60
71030ae264  str x21,[sp, #0x30]
71030ae268  stp x20,x19,[sp, #0x40]
71030ae26c  stp x29,x30,[sp, #0x50]
71030ae270  add x29,sp,#0x50
71030ae274  mov w19,w1
71030ae278  mov x20,x0
71030ae27c  cmp w1,#0x1
71030ae280  b.eq 0x71030ae3e0
71030ae284  cbnz w19,0x71030ae7bc
71030ae288  ldr x9,[x20, #0x300]
71030ae28c  ldr x8,[x9, #0x48]
71030ae290  ldr x8,[x8]
71030ae294  ldr x0,[x9, #0x60]
71030ae298  add x10,x8,#0x8
71030ae29c  mov w21,w2
71030ae2a0  cmp x0,x10
71030ae2a4  b.eq 0x71030ae2c0
71030ae2a8  ldp x1,x2,[x8, #0x8]
71030ae2ac  bl 0x7102616cf0
71030ae2b0  ldr x9,[x20, #0x300]
71030ae2b4  ldr x8,[x9, #0x48]
71030ae2b8  ldr x8,[x8]
71030ae2bc  ldr x0,[x9, #0x60]
71030ae2c0  add x9,x8,#0x20
71030ae2c4  add x0,x0,#0x18
71030ae2c8  cmp x0,x9
71030ae2cc  b.eq 0x71030ae2d8
71030ae2d0  ldp x1,x2,[x8, #0x20]
71030ae2d4  bl 0x7102616cf0
71030ae2d8  ldr x0,[x20, #0x308]
71030ae2dc  mov w1,wzr
71030ae2e0  bl 0x7102624870
71030ae2e4  ldr x0,[x20, #0x308]
71030ae2e8  mov w1,wzr
71030ae2ec  bl 0x7102624740
71030ae2f0  ldr x8,[x20, #0x300]
71030ae2f4  ldr x9,[x8, #0x48]
71030ae2f8  ldr x8,[x8, #0x60]
71030ae2fc  ldr x9,[x9]
71030ae300  movi d2,#0x0
71030ae304  mov v1.16B,v2.16B
71030ae308  ldr q0,[x9, #0x40]
71030ae30c  mov v1.S[0x0],v0.S[0x2]
71030ae310  mov v0.D[0x1],v1.D[0x0]
71030ae314  mov v1.16B,v2.16B
71030ae318  str q0,[x8, #0x30]
71030ae31c  ldr q0,[x9, #0x50]
71030ae320  mov v1.S[0x0],v0.S[0x2]
71030ae324  mov v0.D[0x1],v1.D[0x0]
71030ae328  mov v1.16B,v2.16B
71030ae32c  str q0,[x8, #0x40]
71030ae330  ldr q0,[x9, #0x60]
71030ae334  mov v1.S[0x0],v0.S[0x2]
71030ae338  mov v0.D[0x1],v1.D[0x0]
71030ae33c  mov v1.16B,v2.16B
71030ae340  str q0,[x8, #0x50]
71030ae344  ldr q0,[x9, #0x70]
71030ae348  mov v1.S[0x0],v0.S[0x2]
71030ae34c  mov v0.D[0x1],v1.D[0x0]
71030ae350  mov v1.16B,v2.16B
71030ae354  str q0,[x8, #0x60]
71030ae358  ldr q0,[x9, #0x80]
71030ae35c  mov v1.S[0x0],v0.S[0x2]
71030ae360  mov v0.D[0x1],v1.D[0x0]
71030ae364  mov v1.16B,v2.16B
71030ae368  str q0,[x8, #0x70]
71030ae36c  ldrb w10,[x9, #0x90]
71030ae370  strb w10,[x8, #0x80]
71030ae374  ldr q0,[x9, #0xa0]
71030ae378  mov v1.S[0x0],v0.S[0x2]
71030ae37c  mov w1,wzr
71030ae380  mov v0.D[0x1],v1.D[0x0]
71030ae384  mov v1.16B,v2.16B
71030ae388  str q0,[x8, #0x90]
71030ae38c  ldr q0,[x9, #0xb0]
71030ae390  mov v1.S[0x0],v0.S[0x2]
71030ae394  mov v0.D[0x1],v1.D[0x0]
71030ae398  str q0,[x8, #0xa0]
71030ae39c  ldr x0,[x20, #0x300]
71030ae3a0  bl 0x710262c200
71030ae3a4  adrp x8,0x7105314000
71030ae3a8  add x8,x8,#0x4d8
71030ae3ac  ldarb w8,[x8]
71030ae3b0  tbz w8,#0x0,0x71030ae7d4
71030ae3b4  adrp x8,0x71052c5000
71030ae3b8  ldrb w9,[x8, #0x1ba]
71030ae3bc  ldr x8,[x20, #0x11e0]
71030ae3c0  cbz w9,0x71030ae554
71030ae3c4  cbz x8,0x71030ae568
71030ae3c8  ldp x0,x1,[x8]
71030ae3cc  adrp x2,0x7104359000
71030ae3d0  add x2,x2,#0x918
71030ae3d4  bl 0x71025f5420
71030ae3d8  tbnz w21,#0x0,0x71030ae56c
71030ae3dc  b 0x71030ae62c
71030ae3e0  ldr x9,[x20, #0x300]
71030ae3e4  mov w8,#0xffffffff
71030ae3e8  str w8,[x20, #0x1218]
71030ae3ec  ldr x8,[x9, #0x48]
71030ae3f0  ldr x8,[x8, #0x8]
71030ae3f4  ldr x0,[x9, #0x60]
71030ae3f8  add x10,x8,#0x8
71030ae3fc  cmp x0,x10
71030ae400  b.eq 0x71030ae41c
71030ae404  ldp x1,x2,[x8, #0x8]
71030ae408  bl 0x7102616cf0
71030ae40c  ldr x9,[x20, #0x300]
71030ae410  ldr x8,[x9, #0x48]
71030ae414  ldr x8,[x8, #0x8]
71030ae418  ldr x0,[x9, #0x60]
71030ae41c  add x9,x8,#0x20
71030ae420  add x0,x0,#0x18
71030ae424  cmp x0,x9
71030ae428  b.eq 0x71030ae434
71030ae42c  ldp x1,x2,[x8, #0x20]
71030ae430  bl 0x7102616cf0
71030ae434  ldr x0,[x20, #0x308]
71030ae438  mov w1,#0x1
71030ae43c  bl 0x7102624870
71030ae440  ldr x0,[x20, #0x308]
71030ae444  mov w1,#0x1
71030ae448  bl 0x7102624740
71030ae44c  ldr x8,[x20, #0x300]
71030ae450  ldr x9,[x8, #0x48]
71030ae454  ldr x8,[x8, #0x60]
71030ae458  ldr x9,[x9, #0x8]
71030ae45c  movi d2,#0x0
71030ae460  mov v1.16B,v2.16B
71030ae464  ldr q0,[x9, #0x40]
71030ae468  mov v1.S[0x0],v0.S[0x2]
71030ae46c  mov v0.D[0x1],v1.D[0x0]
71030ae470  mov v1.16B,v2.16B
71030ae474  str q0,[x8, #0x30]
71030ae478  ldr q0,[x9, #0x50]
71030ae47c  mov v1.S[0x0],v0.S[0x2]
71030ae480  mov v0.D[0x1],v1.D[0x0]
71030ae484  mov v1.16B,v2.16B
71030ae488  str q0,[x8, #0x40]
71030ae48c  ldr q0,[x9, #0x60]
71030ae490  mov v1.S[0x0],v0.S[0x2]
71030ae494  mov v0.D[0x1],v1.D[0x0]
71030ae498  mov v1.16B,v2.16B
71030ae49c  str q0,[x8, #0x50]
71030ae4a0  ldr q0,[x9, #0x70]
71030ae4a4  mov v1.S[0x0],v0.S[0x2]
71030ae4a8  mov v0.D[0x1],v1.D[0x0]
71030ae4ac  mov v1.16B,v2.16B
71030ae4b0  str q0,[x8, #0x60]
71030ae4b4  ldr q0,[x9, #0x80]
71030ae4b8  mov v1.S[0x0],v0.S[0x2]
71030ae4bc  mov v0.D[0x1],v1.D[0x0]
71030ae4c0  mov v1.16B,v2.16B
71030ae4c4  str q0,[x8, #0x70]
71030ae4c8  ldrb w10,[x9, #0x90]
71030ae4cc  strb w10,[x8, #0x80]
71030ae4d0  ldr q0,[x9, #0xa0]
71030ae4d4  mov v1.S[0x0],v0.S[0x2]
71030ae4d8  mov v0.D[0x1],v1.D[0x0]
71030ae4dc  mov v1.16B,v2.16B
71030ae4e0  str q0,[x8, #0x90]
71030ae4e4  ldr q0,[x9, #0xb0]
71030ae4e8  mov v1.S[0x0],v0.S[0x2]
71030ae4ec  mov v0.D[0x1],v1.D[0x0]
71030ae4f0  str q0,[x8, #0xa0]
71030ae4f4  ldr x9,[x20, #0x300]
71030ae4f8  ldr x8,[x9, #0x48]
71030ae4fc  ldr x9,[x9, #0x60]
71030ae500  ldr x8,[x8]
71030ae504  add x10,x8,#0x20
71030ae508  add x0,x9,#0x18
71030ae50c  cmp x0,x10
71030ae510  b.eq 0x71030ae51c
71030ae514  ldp x1,x2,[x8, #0x20]
71030ae518  bl 0x7102616cf0
71030ae51c  adrp x8,0x7105314000
71030ae520  add x8,x8,#0x4d8
71030ae524  ldarb w8,[x8]
71030ae528  tbz w8,#0x0,0x71030ae814
71030ae52c  adrp x8,0x71052c5000
71030ae530  ldrb w9,[x8, #0x1ba]
71030ae534  ldr x8,[x20, #0x11e0]
71030ae538  cbz w9,0x71030ae6f4
71030ae53c  cbz x8,0x71030ae708
71030ae540  ldp x0,x1,[x8]
71030ae544  adrp x2,0x7104359000
71030ae548  add x2,x2,#0x918
71030ae54c  bl 0x71025f5420
71030ae550  b 0x71030ae708
71030ae554  cbz x8,0x71030ae568
71030ae558  ldp x0,x1,[x8]
71030ae55c  adrp x2,0x7104359000
71030ae560  add x2,x2,#0x918
71030ae564  bl 0x71025f55b0
71030ae568  tbz w21,#0x0,0x71030ae62c
71030ae56c  stp xzr,xzr,[sp, #0x20]
71030ae570  adrp x8,0x71052b9000
71030ae574  add x8,x8,#0x230
71030ae578  str wzr,[sp, #0x10]
71030ae57c  stp xzr,xzr,[sp]
71030ae580  ldarb w8,[x8]
71030ae584  tbz w8,#0x0,0x71030ae89c
71030ae588  movi v0.2D,#0x0
71030ae58c  ldr x8,[x20, #0x900]
71030ae590  mov x9,x8
71030ae594  mov v1.16B,v0.16B
71030ae598  mov x2,sp
71030ae59c  ld1 {v1.S}[0],[x9], #0x4
71030ae5a0  ld1 {v1.S}[1],[x9]
71030ae5a4  add x9,x8,#0x8
71030ae5a8  ld1 {v1.S}[2],[x9]
71030ae5ac  adrp x9,0x7104472000
71030ae5b0  ldr s4,[x9, #0x6e0]
71030ae5b4  str q1,[sp]
71030ae5b8  ldp s2,s3,[x8, #0x10]
71030ae5bc  fmul s3,s3,s4
71030ae5c0  fmul s2,s2,s4
71030ae5c4  mov v0.S[0x0],v3.S[0x0]
71030ae5c8  mov v0.S[0x1],v2.S[0x0]
71030ae5cc  str q0,[sp, #0x20]
71030ae5d0  ldr s2,[x8, #0xc]
71030ae5d4  adrp x8,0x710532a000
71030ae5d8  fmul s2,s2,s4
71030ae5dc  str s2,[sp, #0x10]
71030ae5e0  ldr x21,[x20, #0x308]
71030ae5e4  str s2,[x21, #0x3e0]
71030ae5e8  str q1,[x21, #0x3d0]
71030ae5ec  str q0,[x21, #0x3f0]
71030ae5f0  ldr x8,[x8, #0x9d8]
71030ae5f4  ldr x8,[x8]
71030ae5f8  ldr x0,[x8, #0x1c0]
71030ae5fc  ldr x1,[x21, #0x8]
71030ae600  bl 0x7103159960
71030ae604  mov w8,#0x1
71030ae608  strb w8,[x21, #0xe0]
71030ae60c  ldr w8,[x20, #0x121c]
71030ae610  cbz w8,0x71030ae6e8
71030ae614  ldr x0,[x20, #0x308]
71030ae618  orr w8,wzr,#0x1e
71030ae61c  str w8,[x20, #0x1218]
71030ae620  add x1,x0,#0xf8
71030ae624  bl 0x71026249a0
71030ae628  b 0x71030ae7bc
71030ae62c  adrp x8,0x71052b9000
71030ae630  add x8,x8,#0x230
71030ae634  ldarb w8,[x8]
71030ae638  tbz w8,#0x0,0x71030ae8e4
71030ae63c  ldr x8,[x20, #0x900]
71030ae640  adrp x9,0x7104472000
71030ae644  ldr s2,[x9, #0x6e0]
71030ae648  ldp s6,s5,[x8, #0x10]
71030ae64c  movi d7,#0x0
71030ae650  ldr s0,[x8]
71030ae654  add x11,x8,#0x8
71030ae658  fmul s6,s6,s2
71030ae65c  fmul s5,s5,s2
71030ae660  mov v1.16B,v7.16B
71030ae664  movi v4.2D,#0x0
71030ae668  ld1 {v1.S}[0],[x11]
71030ae66c  add x11,x8,#0x4
71030ae670  ld1 {v0.S}[1],[x11]
71030ae674  ldr x10,[x20, #0x308]
71030ae678  mov v4.S[0x0],v5.S[0x0]
71030ae67c  mov x9,#0x41700000
71030ae680  mov w11,#0x1
71030ae684  movk x9,#0x4170, LSL #48
71030ae688  ldr s5,[x8, #0xc]
71030ae68c  add x8,x10,#0x434
71030ae690  strb w11,[x10, #0x430]
71030ae694  str x9,[x8]
71030ae698  mov v0.D[0x1],v1.D[0x0]
71030ae69c  ldr q1,[x10, #0x3d0]
71030ae6a0  mov v4.S[0x1],v6.S[0x0]
71030ae6a4  ldr q6,[x10, #0x3f0]
71030ae6a8  mov v3.16B,v7.16B
71030ae6ac  mov v3.S[0x0],v1.S[0x2]
71030ae6b0  str q0,[x10, #0x470]
71030ae6b4  fmul s0,s5,s2
71030ae6b8  mov v1.D[0x1],v3.D[0x0]
71030ae6bc  mov v7.S[0x0],v6.S[0x2]
71030ae6c0  ldr w8,[x10, #0x3e0]
71030ae6c4  str q4,[x10, #0x490]
71030ae6c8  mov v6.D[0x1],v7.D[0x0]
71030ae6cc  str w8,[x10, #0x450]
71030ae6d0  str q1,[x10, #0x440]
71030ae6d4  str q6,[x10, #0x460]
71030ae6d8  str s0,[x10, #0x480]
71030ae6dc  strb w11,[x10, #0xe0]
71030ae6e0  ldr w8,[x20, #0x121c]
71030ae6e4  cbnz w8,0x71030ae614
71030ae6e8  mov w8,#0xffffffff
71030ae6ec  str w8,[x20, #0x1218]
71030ae6f0  b 0x71030ae7bc
71030ae6f4  cbz x8,0x71030ae708
71030ae6f8  ldp x0,x1,[x8]
71030ae6fc  adrp x2,0x7104359000
71030ae700  add x2,x2,#0x918
71030ae704  bl 0x71025f55b0
71030ae708  adrp x8,0x71052b9000
71030ae70c  add x8,x8,#0x230
71030ae710  ldarb w8,[x8]
71030ae714  tbz w8,#0x0,0x71030ae854
71030ae718  ldr x8,[x20, #0x900]
71030ae71c  adrp x9,0x7104472000
71030ae720  ldr s2,[x9, #0x6e0]
71030ae724  ldp s6,s5,[x8, #0x28]
71030ae728  movi d7,#0x0
71030ae72c  ldr s0,[x8, #0x18]
71030ae730  add x11,x8,#0x20
71030ae734  fmul s6,s6,s2
71030ae738  fmul s5,s5,s2
71030ae73c  mov v1.16B,v7.16B
71030ae740  movi v4.2D,#0x0
71030ae744  ld1 {v1.S}[0],[x11]
71030ae748  add x11,x8,#0x1c
71030ae74c  ld1 {v0.S}[1],[x11]
71030ae750  ldr x10,[x20, #0x308]
71030ae754  mov v4.S[0x0],v5.S[0x0]
71030ae758  mov x9,#0x41700000
71030ae75c  mov w11,#0x1
71030ae760  movk x9,#0x4170, LSL #48
71030ae764  ldr s5,[x8, #0x24]
71030ae768  add x8,x10,#0x434
71030ae76c  strb w11,[x10, #0x430]
71030ae770  str x9,[x8]
71030ae774  mov v0.D[0x1],v1.D[0x0]
71030ae778  ldr q1,[x10, #0x3d0]
71030ae77c  mov v4.S[0x1],v6.S[0x0]
71030ae780  ldr q6,[x10, #0x3f0]
71030ae784  mov v3.16B,v7.16B
71030ae788  mov v3.S[0x0],v1.S[0x2]
71030ae78c  str q0,[x10, #0x470]
71030ae790  fmul s0,s5,s2
71030ae794  mov v1.D[0x1],v3.D[0x0]
71030ae798  mov v7.S[0x0],v6.S[0x2]
71030ae79c  ldr w8,[x10, #0x3e0]
71030ae7a0  str q4,[x10, #0x490]
71030ae7a4  mov v6.D[0x1],v7.D[0x0]
71030ae7a8  str w8,[x10, #0x450]
71030ae7ac  str q1,[x10, #0x440]
71030ae7b0  str q6,[x10, #0x460]
71030ae7b4  str s0,[x10, #0x480]
71030ae7b8  strb w11,[x10, #0xe0]
71030ae7bc  str w19,[x20, #0x121c]
71030ae7c0  ldp x29,x30,[sp, #0x50]
71030ae7c4  ldp x20,x19,[sp, #0x40]
71030ae7c8  ldr x21,[sp, #0x30]
71030ae7cc  add sp,sp,#0x60
71030ae7d0  ret
71030ae7d4  adrp x0,0x7105314000
71030ae7d8  add x0,x0,#0x4d8
71030ae7dc  bl 0x71039c06b0
71030ae7e0  cbz w0,0x71030ae3b4
71030ae7e4  bl 0x7101764000
71030ae7e8  adrp x0,0x7101763000
71030ae7ec  add x0,x0,#0xc40
71030ae7f0  adrp x1,0x71052c5000
71030ae7f4  add x1,x1,#0x180
71030ae7f8  adrp x2,0x7104f17000
71030ae7fc  add x2,x2,#0x0
71030ae800  bl 0x71000001c0
71030ae804  adrp x0,0x7105314000
71030ae808  add x0,x0,#0x4d8
71030ae80c  bl 0x71039c06c0
71030ae810  b 0x71030ae3b4
71030ae814  adrp x0,0x7105314000
71030ae818  add x0,x0,#0x4d8
71030ae81c  bl 0x71039c06b0
71030ae820  cbz w0,0x71030ae52c
71030ae824  bl 0x7101764000
71030ae828  adrp x0,0x7101763000
71030ae82c  add x0,x0,#0xc40
71030ae830  adrp x1,0x71052c5000
71030ae834  add x1,x1,#0x180
71030ae838  adrp x2,0x7104f17000
71030ae83c  add x2,x2,#0x0
71030ae840  bl 0x71000001c0
71030ae844  adrp x0,0x7105314000
71030ae848  add x0,x0,#0x4d8
71030ae84c  bl 0x71039c06c0
71030ae850  b 0x71030ae52c
71030ae854  adrp x0,0x71052b9000
71030ae858  add x0,x0,#0x230
71030ae85c  bl 0x71039c06b0
71030ae860  cbz w0,0x71030ae718
71030ae864  adrp x8,0x710446a000
71030ae868  adrp x10,0x7104467000
71030ae86c  ldr q1,[x10, #0xcf0]
71030ae870  ldr q0,[x8, #0xb0]
71030ae874  mov w9,#0x41c80000
71030ae878  adrp x11,0x71052b9000
71030ae87c  add x11,x11,#0x240
71030ae880  adrp x0,0x71052b9000
71030ae884  add x0,x0,#0x230
71030ae888  str w9,[x11, #0x10]
71030ae88c  str q0,[x11]
71030ae890  str q1,[x11, #0x20]
71030ae894  bl 0x71039c06c0
71030ae898  b 0x71030ae718
71030ae89c  adrp x0,0x71052b9000
71030ae8a0  add x0,x0,#0x230
71030ae8a4  bl 0x71039c06b0
71030ae8a8  cbz w0,0x71030ae588
71030ae8ac  adrp x8,0x710446a000
71030ae8b0  adrp x10,0x7104467000
71030ae8b4  ldr q1,[x10, #0xcf0]
71030ae8b8  ldr q0,[x8, #0xb0]
71030ae8bc  mov w9,#0x41c80000
71030ae8c0  adrp x11,0x71052b9000
71030ae8c4  add x11,x11,#0x240
71030ae8c8  adrp x0,0x71052b9000
71030ae8cc  add x0,x0,#0x230
71030ae8d0  str w9,[x11, #0x10]
71030ae8d4  str q0,[x11]
71030ae8d8  str q1,[x11, #0x20]
71030ae8dc  bl 0x71039c06c0
71030ae8e0  b 0x71030ae588
71030ae8e4  adrp x0,0x71052b9000
71030ae8e8  add x0,x0,#0x230
71030ae8ec  bl 0x71039c06b0
71030ae8f0  cbz w0,0x71030ae63c
71030ae8f4  adrp x8,0x710446a000
71030ae8f8  adrp x10,0x7104467000
71030ae8fc  ldr q1,[x10, #0xcf0]
71030ae900  ldr q0,[x8, #0xb0]
71030ae904  mov w9,#0x41c80000
71030ae908  adrp x11,0x71052b9000
71030ae90c  add x11,x11,#0x240
71030ae910  adrp x0,0x71052b9000
71030ae914  add x0,x0,#0x230
71030ae918  str w9,[x11, #0x10]
71030ae91c  str q0,[x11]
71030ae920  str q1,[x11, #0x20]
71030ae924  bl 0x71039c06c0
71030ae928  b 0x71030ae63c
