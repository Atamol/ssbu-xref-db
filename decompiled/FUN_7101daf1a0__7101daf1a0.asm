// addr:      7101daf1a0
// offset:    0x1daf1a0
// name:      FUN_7101daf1a0
// mangled:   
// size:      2728

7101daf1a0  str x28,[sp, #-0x50]!
7101daf1a4  stp x24,x23,[sp, #0x10]
7101daf1a8  stp x22,x21,[sp, #0x20]
7101daf1ac  stp x20,x19,[sp, #0x30]
7101daf1b0  stp x29,x30,[sp, #0x40]
7101daf1b4  add x29,sp,#0x40
7101daf1b8  sub sp,sp,#0x1d0
7101daf1bc  mov w19,w1
7101daf1c0  mov x20,x0
7101daf1c4  tbnz w1,#0x0,0x7101daf1d0
7101daf1c8  ldrb w8,[x20, #0x42c]
7101daf1cc  cbz w8,0x7101daf338
7101daf1d0  mov w22,#0x1
7101daf1d4  add x21,x20,#0x50
7101daf1d8  adrp x1,0x710439d000
7101daf1dc  add x1,x1,#0x881
7101daf1e0  add x8,sp,#0x68
7101daf1e4  mov x0,x21
7101daf1e8  bl 0x7103776640
7101daf1ec  tbz w22,#0x0,0x7101daf330
7101daf1f0  mov w8,#0x9dc5
7101daf1f4  movk w8,#0x811c, LSL #16
7101daf1f8  add x9,sp,#0x78
7101daf1fc  add x23,x9,#0x8
7101daf200  strb wzr,[sp, #0x80]
7101daf204  str x8,[sp, #0x78]
7101daf208  sub x9,x29,#0x88
7101daf20c  sturb wzr,[x29, #-0x80]
7101daf210  stur x8,[x29, #-0x88]
7101daf214  add x22,x9,#0x8
7101daf218  ldrb w9,[x20, #0x42c]
7101daf21c  sub w11,w9,#0x6
7101daf220  cmp w11,#0x5
7101daf224  b.hi 0x7101daf820
7101daf228  adrp x12,0x71044fb000
7101daf22c  add x12,x12,#0x4b8
7101daf230  sub x9,x29,#0x88
7101daf234  ldrsw x11,[x12, x11, LSL #0x2]
7101daf238  add x11,x11,x12
7101daf23c  add x10,sp,#0x78
7101daf240  br x11
7101daf244  mov x11,#0x616e
7101daf248  movk x11,#0x5f6d, LSL #16
7101daf24c  mov x13,#0x5f73
7101daf250  movk x13,#0x7073, LSL #16
7101daf254  movk x11,#0x6f67, LSL #32
7101daf258  movk x11,#0x646f, LSL #48
7101daf25c  movk x13,#0x7269, LSL #32
7101daf260  movk x13,#0x7469, LSL #48
7101daf264  add x12,sp,#0x78
7101daf268  stp x11,x13,[sp, #0x80]
7101daf26c  mov w13,#0x645f
7101daf270  strh w13,[sp, #0x90]
7101daf274  mov x13,#0x6d61
7101daf278  movk x13,#0x6761, LSL #16
7101daf27c  movk x13,#0x5f65, LSL #32
7101daf280  movk x13,#0x3033, LSL #48
7101daf284  stur x13,[x10, #0x1a]
7101daf288  mov w14,#0x1a
7101daf28c  str w14,[sp, #0x7c]
7101daf290  strb wzr,[sp, #0x9a]
7101daf294  add x12,x12,#0x9
7101daf298  mov w13,#0x6e
7101daf29c  mov w10,#0x89
7101daf2a0  mov w14,w8
7101daf2a4  mul w14,w14,w10
7101daf2a8  and w13,w13,#0xff
7101daf2ac  eor w14,w14,w13
7101daf2b0  ldrb w13,[x12], #0x1
7101daf2b4  cbnz w13,0x7101daf2a4
7101daf2b8  mov x12,#0x5f73
7101daf2bc  movk x12,#0x6568, LSL #16
7101daf2c0  movk x12,#0x706c, LSL #32
7101daf2c4  movk x12,#0x735f, LSL #48
7101daf2c8  stur x12,[x29, #-0x78]
7101daf2cc  mov w12,#0x6970
7101daf2d0  sturh w12,[x29, #-0x70]
7101daf2d4  mov x12,#0x6972
7101daf2d8  movk x12,#0x5f74, LSL #16
7101daf2dc  movk x12,#0x6164, LSL #32
7101daf2e0  movk x12,#0x616d, LSL #48
7101daf2e4  stur x11,[x29, #-0x80]
7101daf2e8  stur x12,[x9, #0x1a]
7101daf2ec  mov w12,#0x6567
7101daf2f0  movk w12,#0x335f, LSL #16
7101daf2f4  sub x11,x29,#0x88
7101daf2f8  add x11,x11,#0x9
7101daf2fc  stur w12,[x9, #0x22]
7101daf300  orr w9,wzr,#0x30
7101daf304  sturh w9,[x29, #-0x62]
7101daf308  orr w12,wzr,#0x1f
7101daf30c  mov w9,#0x6e
7101daf310  str w14,[sp, #0x78]
7101daf314  stur w12,[x29, #-0x84]
7101daf318  mul w8,w8,w10
7101daf31c  and w9,w9,#0xff
7101daf320  eor w8,w8,w9
7101daf324  ldrb w9,[x11], #0x1
7101daf328  cbnz w9,0x7101daf318
7101daf32c  b 0x7101daf81c
7101daf330  add x23,x20,#0x42c
7101daf334  b 0x7101daf88c
7101daf338  mov w22,wzr
7101daf33c  b 0x7101daf1d4
7101daf340  mov x11,#0x616e
7101daf344  movk x11,#0x5f6d, LSL #16
7101daf348  mov x13,#0x5f73
7101daf34c  movk x13,#0x7073, LSL #16
7101daf350  movk x11,#0x6f67, LSL #32
7101daf354  movk x11,#0x646f, LSL #48
7101daf358  movk x13,#0x7269, LSL #32
7101daf35c  movk x13,#0x7469, LSL #48
7101daf360  add x12,sp,#0x78
7101daf364  stp x11,x13,[sp, #0x80]
7101daf368  mov w13,#0x645f
7101daf36c  strh w13,[sp, #0x90]
7101daf370  mov x13,#0x6d61
7101daf374  movk x13,#0x6761, LSL #16
7101daf378  movk x13,#0x5f65, LSL #32
7101daf37c  movk x13,#0x3035, LSL #48
7101daf380  stur x13,[x10, #0x1a]
7101daf384  mov w14,#0x1a
7101daf388  str w14,[sp, #0x7c]
7101daf38c  strb wzr,[sp, #0x9a]
7101daf390  add x12,x12,#0x9
7101daf394  mov w13,#0x6e
7101daf398  mov w10,#0x89
7101daf39c  mov w14,w8
7101daf3a0  mul w14,w14,w10
7101daf3a4  and w13,w13,#0xff
7101daf3a8  eor w14,w14,w13
7101daf3ac  ldrb w13,[x12], #0x1
7101daf3b0  cbnz w13,0x7101daf3a0
7101daf3b4  mov x12,#0x5f73
7101daf3b8  movk x12,#0x6568, LSL #16
7101daf3bc  movk x12,#0x706c, LSL #32
7101daf3c0  movk x12,#0x735f, LSL #48
7101daf3c4  stur x12,[x29, #-0x78]
7101daf3c8  mov w12,#0x6970
7101daf3cc  sturh w12,[x29, #-0x70]
7101daf3d0  mov x12,#0x6972
7101daf3d4  movk x12,#0x5f74, LSL #16
7101daf3d8  movk x12,#0x6164, LSL #32
7101daf3dc  movk x12,#0x616d, LSL #48
7101daf3e0  stur x11,[x29, #-0x80]
7101daf3e4  stur x12,[x9, #0x1a]
7101daf3e8  mov w12,#0x6567
7101daf3ec  movk w12,#0x355f, LSL #16
7101daf3f0  sub x11,x29,#0x88
7101daf3f4  add x11,x11,#0x9
7101daf3f8  stur w12,[x9, #0x22]
7101daf3fc  orr w9,wzr,#0x30
7101daf400  sturh w9,[x29, #-0x62]
7101daf404  orr w12,wzr,#0x1f
7101daf408  mov w9,#0x6e
7101daf40c  str w14,[sp, #0x78]
7101daf410  stur w12,[x29, #-0x84]
7101daf414  mul w8,w8,w10
7101daf418  and w9,w9,#0xff
7101daf41c  eor w8,w8,w9
7101daf420  ldrb w9,[x11], #0x1
7101daf424  cbnz w9,0x7101daf414
7101daf428  b 0x7101daf81c
7101daf42c  mov x11,#0x616e
7101daf430  movk x11,#0x5f6d, LSL #16
7101daf434  mov x13,#0x5f73
7101daf438  movk x13,#0x7073, LSL #16
7101daf43c  movk x11,#0x6f67, LSL #32
7101daf440  movk x11,#0x646f, LSL #48
7101daf444  movk x13,#0x7269, LSL #32
7101daf448  movk x13,#0x7469, LSL #48
7101daf44c  add x12,sp,#0x78
7101daf450  stp x11,x13,[sp, #0x80]
7101daf454  mov w13,#0x635f
7101daf458  strh w13,[sp, #0x90]
7101daf45c  mov x13,#0x6168
7101daf460  movk x13,#0x6772, LSL #16
7101daf464  movk x13,#0x5f65, LSL #32
7101daf468  movk x13,#0x616a, LSL #48
7101daf46c  stur x13,[x10, #0x1a]
7101daf470  mov w13,#0x6d6d
7101daf474  movk w13,#0x6e69, LSL #16
7101daf478  stur w13,[x10, #0x22]
7101daf47c  mov w10,#0x67
7101daf480  strh w10,[sp, #0x9e]
7101daf484  orr w14,wzr,#0x1f
7101daf488  add x12,x12,#0x9
7101daf48c  str w14,[sp, #0x7c]
7101daf490  mov w13,#0x6e
7101daf494  mov w10,#0x89
7101daf498  mov w14,w8
7101daf49c  mul w14,w14,w10
7101daf4a0  and w13,w13,#0xff
7101daf4a4  eor w14,w14,w13
7101daf4a8  ldrb w13,[x12], #0x1
7101daf4ac  cbnz w13,0x7101daf49c
7101daf4b0  mov x12,#0x5f73
7101daf4b4  movk x12,#0x6568, LSL #16
7101daf4b8  movk x12,#0x706c, LSL #32
7101daf4bc  movk x12,#0x735f, LSL #48
7101daf4c0  stur x12,[x29, #-0x78]
7101daf4c4  mov w12,#0x6970
7101daf4c8  sturh w12,[x29, #-0x70]
7101daf4cc  mov x12,#0x6972
7101daf4d0  movk x12,#0x5f74, LSL #16
7101daf4d4  movk x12,#0x6863, LSL #32
7101daf4d8  movk x12,#0x7261, LSL #48
7101daf4dc  stur x11,[x29, #-0x80]
7101daf4e0  stur x12,[x9, #0x1a]
7101daf4e4  mov w12,#0x6567
7101daf4e8  movk w12,#0x6a5f, LSL #16
7101daf4ec  stur w12,[x9, #0x22]
7101daf4f0  mov w9,#0x6d61
7101daf4f4  sub x11,x29,#0x88
7101daf4f8  add x11,x11,#0x9
7101daf4fc  mov w12,#0x24
7101daf500  sturb wzr,[x29, #-0x5c]
7101daf504  sturh w9,[x29, #-0x62]
7101daf508  mov w9,#0x696d
7101daf50c  movk w9,#0x676e, LSL #16
7101daf510  stur w9,[x29, #-0x60]
7101daf514  mov w9,#0x6e
7101daf518  str w14,[sp, #0x78]
7101daf51c  stur w12,[x29, #-0x84]
7101daf520  mul w8,w8,w10
7101daf524  and w9,w9,#0xff
7101daf528  eor w8,w8,w9
7101daf52c  ldrb w9,[x11], #0x1
7101daf530  cbnz w9,0x7101daf520
7101daf534  b 0x7101daf81c
7101daf538  mov x11,#0x616e
7101daf53c  movk x11,#0x5f6d, LSL #16
7101daf540  mov x13,#0x5f73
7101daf544  movk x13,#0x7073, LSL #16
7101daf548  movk x11,#0x6f67, LSL #32
7101daf54c  movk x11,#0x646f, LSL #48
7101daf550  movk x13,#0x7269, LSL #32
7101daf554  movk x13,#0x7469, LSL #48
7101daf558  add x12,sp,#0x78
7101daf55c  stp x11,x13,[sp, #0x80]
7101daf560  mov w13,#0x655f
7101daf564  strh w13,[sp, #0x90]
7101daf568  mov x13,#0x6373
7101daf56c  movk x13,#0x726f, LSL #16
7101daf570  movk x13,#0x5f74, LSL #32
7101daf574  movk x13,#0x6577, LSL #48
7101daf578  stur x13,[x10, #0x1a]
7101daf57c  mov w13,#0x6b61
7101daf580  movk w13,#0x6e65, LSL #16
7101daf584  stur w13,[x10, #0x22]
7101daf588  orr w14,wzr,#0x1e
7101daf58c  str w14,[sp, #0x7c]
7101daf590  strb wzr,[sp, #0x9e]
7101daf594  add x12,x12,#0x9
7101daf598  mov w13,#0x6e
7101daf59c  mov w10,#0x89
7101daf5a0  mov w14,w8
7101daf5a4  mul w14,w14,w10
7101daf5a8  and w13,w13,#0xff
7101daf5ac  eor w14,w14,w13
7101daf5b0  ldrb w13,[x12], #0x1
7101daf5b4  cbnz w13,0x7101daf5a4
7101daf5b8  mov x12,#0x5f73
7101daf5bc  movk x12,#0x6568, LSL #16
7101daf5c0  movk x12,#0x706c, LSL #32
7101daf5c4  movk x12,#0x735f, LSL #48
7101daf5c8  stur x12,[x29, #-0x78]
7101daf5cc  mov w12,#0x6970
7101daf5d0  sturh w12,[x29, #-0x70]
7101daf5d4  mov x12,#0x6972
7101daf5d8  movk x12,#0x5f74, LSL #16
7101daf5dc  movk x12,#0x7365, LSL #32
7101daf5e0  movk x12,#0x6f63, LSL #48
7101daf5e4  stur x11,[x29, #-0x80]
7101daf5e8  stur x12,[x9, #0x1a]
7101daf5ec  mov w12,#0x7472
7101daf5f0  movk w12,#0x775f, LSL #16
7101daf5f4  stur w12,[x9, #0x22]
7101daf5f8  mov w9,#0x6165
7101daf5fc  sub x11,x29,#0x88
7101daf600  add x11,x11,#0x9
7101daf604  mov w12,#0x23
7101daf608  sturh w9,[x29, #-0x62]
7101daf60c  mov w9,#0x656b
7101daf610  movk w9,#0x6e, LSL #16
7101daf614  stur w9,[x29, #-0x60]
7101daf618  mov w9,#0x6e
7101daf61c  str w14,[sp, #0x78]
7101daf620  stur w12,[x29, #-0x84]
7101daf624  mul w8,w8,w10
7101daf628  and w9,w9,#0xff
7101daf62c  eor w8,w8,w9
7101daf630  ldrb w9,[x11], #0x1
7101daf634  cbnz w9,0x7101daf624
7101daf638  b 0x7101daf81c
7101daf63c  mov x11,#0x616e
7101daf640  movk x11,#0x5f6d, LSL #16
7101daf644  mov x13,#0x5f73
7101daf648  movk x13,#0x7073, LSL #16
7101daf64c  movk x11,#0x6f67, LSL #32
7101daf650  movk x11,#0x646f, LSL #48
7101daf654  movk x13,#0x7269, LSL #32
7101daf658  movk x13,#0x7469, LSL #48
7101daf65c  add x12,sp,#0x78
7101daf660  stp x11,x13,[sp, #0x80]
7101daf664  mov w13,#0x615f
7101daf668  strh w13,[sp, #0x90]
7101daf66c  mov x13,#0x7070
7101daf670  movk x13,#0x796c, LSL #16
7101daf674  movk x13,#0x665f, LSL #32
7101daf678  movk x13,#0x6f6c, LSL #48
7101daf67c  stur x13,[x10, #0x1a]
7101daf680  mov w13,#0x6577
7101daf684  movk w13,#0x72, LSL #16
7101daf688  stur w13,[x10, #0x22]
7101daf68c  mov w14,#0x1d
7101daf690  str w14,[sp, #0x7c]
7101daf694  add x12,x12,#0x9
7101daf698  mov w13,#0x6e
7101daf69c  mov w10,#0x89
7101daf6a0  mov w14,w8
7101daf6a4  mul w14,w14,w10
7101daf6a8  and w13,w13,#0xff
7101daf6ac  eor w14,w14,w13
7101daf6b0  ldrb w13,[x12], #0x1
7101daf6b4  cbnz w13,0x7101daf6a4
7101daf6b8  mov x12,#0x5f73
7101daf6bc  movk x12,#0x6568, LSL #16
7101daf6c0  movk x12,#0x706c, LSL #32
7101daf6c4  movk x12,#0x735f, LSL #48
7101daf6c8  stur x12,[x29, #-0x78]
7101daf6cc  mov w12,#0x6970
7101daf6d0  sturh w12,[x29, #-0x70]
7101daf6d4  mov x12,#0x6972
7101daf6d8  movk x12,#0x5f74, LSL #16
7101daf6dc  movk x12,#0x7061, LSL #32
7101daf6e0  movk x12,#0x6c70, LSL #48
7101daf6e4  stur x11,[x29, #-0x80]
7101daf6e8  stur x12,[x9, #0x1a]
7101daf6ec  mov x12,#0x5f79
7101daf6f0  movk x12,#0x6c66, LSL #16
7101daf6f4  sub x11,x29,#0x88
7101daf6f8  add x11,x11,#0x9
7101daf6fc  str w14,[sp, #0x78]
7101daf700  movk x12,#0x776f, LSL #32
7101daf704  movk x12,#0x7265, LSL #48
7101daf708  stur x12,[x9, #0x22]
7101daf70c  mov w12,#0x22
7101daf710  mov w9,#0x6e
7101daf714  sturb wzr,[x29, #-0x5e]
7101daf718  stur w12,[x29, #-0x84]
7101daf71c  mul w8,w8,w10
7101daf720  and w9,w9,#0xff
7101daf724  eor w8,w8,w9
7101daf728  ldrb w9,[x11], #0x1
7101daf72c  cbnz w9,0x7101daf71c
7101daf730  b 0x7101daf81c
7101daf734  mov x11,#0x616e
7101daf738  movk x11,#0x5f6d, LSL #16
7101daf73c  mov x13,#0x5f73
7101daf740  movk x13,#0x7073, LSL #16
7101daf744  movk x11,#0x6f67, LSL #32
7101daf748  movk x11,#0x646f, LSL #48
7101daf74c  movk x13,#0x7269, LSL #32
7101daf750  movk x13,#0x7469, LSL #48
7101daf754  add x12,sp,#0x78
7101daf758  stp x11,x13,[sp, #0x80]
7101daf75c  mov w13,#0x695f
7101daf760  strh w13,[sp, #0x90]
7101daf764  mov x13,#0x6574
7101daf768  movk x13,#0x5f6d, LSL #16
7101daf76c  movk x13,#0x6f6c, LSL #32
7101daf770  movk x13,#0x6b63, LSL #48
7101daf774  stur x13,[x10, #0x1a]
7101daf778  mov w14,#0x1a
7101daf77c  str w14,[sp, #0x7c]
7101daf780  strb wzr,[sp, #0x9a]
7101daf784  add x12,x12,#0x9
7101daf788  mov w13,#0x6e
7101daf78c  mov w10,#0x89
7101daf790  mov w14,w8
7101daf794  mul w14,w14,w10
7101daf798  and w13,w13,#0xff
7101daf79c  eor w14,w14,w13
7101daf7a0  ldrb w13,[x12], #0x1
7101daf7a4  cbnz w13,0x7101daf794
7101daf7a8  mov x12,#0x5f73
7101daf7ac  movk x12,#0x6568, LSL #16
7101daf7b0  movk x12,#0x706c, LSL #32
7101daf7b4  movk x12,#0x735f, LSL #48
7101daf7b8  stur x12,[x29, #-0x78]
7101daf7bc  mov w12,#0x6970
7101daf7c0  sturh w12,[x29, #-0x70]
7101daf7c4  mov x12,#0x6972
7101daf7c8  movk x12,#0x5f74, LSL #16
7101daf7cc  movk x12,#0x7469, LSL #32
7101daf7d0  movk x12,#0x6d65, LSL #48
7101daf7d4  stur x11,[x29, #-0x80]
7101daf7d8  stur x12,[x9, #0x1a]
7101daf7dc  mov w12,#0x6c5f
7101daf7e0  movk w12,#0x636f, LSL #16
7101daf7e4  sub x11,x29,#0x88
7101daf7e8  add x11,x11,#0x9
7101daf7ec  stur w12,[x9, #0x22]
7101daf7f0  mov w9,#0x6b
7101daf7f4  sturh w9,[x29, #-0x62]
7101daf7f8  orr w12,wzr,#0x1f
7101daf7fc  mov w9,#0x6e
7101daf800  str w14,[sp, #0x78]
7101daf804  stur w12,[x29, #-0x84]
7101daf808  mul w8,w8,w10
7101daf80c  and w9,w9,#0xff
7101daf810  eor w8,w8,w9
7101daf814  ldrb w9,[x11], #0x1
7101daf818  cbnz w9,0x7101daf808
7101daf81c  stur w8,[x29, #-0x88]
7101daf820  adrp x1,0x710424f000
7101daf824  add x1,x1,#0x9b3
7101daf828  add x8,sp,#0x58
7101daf82c  add x0,sp,#0x68
7101daf830  bl 0x7103776910
7101daf834  add x0,sp,#0x58
7101daf838  mov x1,x23
7101daf83c  bl 0x710377a120
7101daf840  ldr x0,[sp, #0x60]
7101daf844  adrp x24,0x710523d000
7101daf848  add x24,x24,#0x9a8
7101daf84c  stp x24,xzr,[sp, #0x58]
7101daf850  cbz x0,0x7101daf858
7101daf854  bl 0x710392eb40
7101daf858  adrp x1,0x710437c000
7101daf85c  add x1,x1,#0x9d8
7101daf860  add x8,sp,#0x58
7101daf864  add x0,sp,#0x68
7101daf868  add x23,x20,#0x42c
7101daf86c  bl 0x7103776910
7101daf870  add x0,sp,#0x58
7101daf874  mov x1,x22
7101daf878  bl 0x710377a120
7101daf87c  ldr x0,[sp, #0x60]
7101daf880  stp x24,xzr,[sp, #0x58]
7101daf884  cbz x0,0x7101daf88c
7101daf888  bl 0x710392eb40
7101daf88c  adrp x1,0x7104308000
7101daf890  add x1,x1,#0x8c5
7101daf894  add x8,sp,#0x58
7101daf898  mov x0,x21
7101daf89c  bl 0x7103776640
7101daf8a0  ldrb w8,[x23]
7101daf8a4  ldr x21,[sp, #0x60]
7101daf8a8  cbz w8,0x7101daf914
7101daf8ac  fmov s0,0x3f800000
7101daf8b0  adrp x1,0x7104454000
7101daf8b4  add x1,x1,#0xed5
7101daf8b8  mov x0,x21
7101daf8bc  bl 0x7103778300
7101daf8c0  adrp x1,0x710432a000
7101daf8c4  add x1,x1,#0x50a
7101daf8c8  add x8,sp,#0x48
7101daf8cc  add x0,sp,#0x58
7101daf8d0  bl 0x7103776910
7101daf8d4  adrp x8,0x710532f000
7101daf8d8  ldr x8,[x8, #0x730]
7101daf8dc  ldr x22,[x8, #0x8]
7101daf8e0  ldrb w8,[x23]
7101daf8e4  sub w8,w8,#0x1
7101daf8e8  cmp w8,#0xf
7101daf8ec  b.hi 0x7101daf94c
7101daf8f0  adrp x9,0x7104ada000
7101daf8f4  add x9,x9,#0x9f0
7101daf8f8  sxtb x8,w8
7101daf8fc  ldr x1,[x9, x8, LSL #0x3]
7101daf900  ldr x8,[x22, #0x318]
7101daf904  ldr x0,[x8, #0x8]
7101daf908  bl 0x710327d930
7101daf90c  mov x21,x0
7101daf910  b 0x7101daf954
7101daf914  fmov s0,0x3f800000
7101daf918  adrp x1,0x7104308000
7101daf91c  add x1,x1,#0x8e7
7101daf920  mov x0,x21
7101daf924  bl 0x7103778300
7101daf928  adrp x1,0x710438c000
7101daf92c  add x1,x1,#0xf0f
7101daf930  add x8,sp,#0x78
7101daf934  add x0,sp,#0x68
7101daf938  bl 0x71037780e0
7101daf93c  tbz w19,#0x0,0x7101dafa08
7101daf940  add x0,sp,#0x78
7101daf944  bl 0x710377b140
7101daf948  b 0x7101dafa14
7101daf94c  mov x21,#0xff0000000000
7101daf950  movk x21,#0x2dff, LSL #48
7101daf954  add x20,x20,#0x28
7101daf958  tst x21,#0xffffffffff
7101daf95c  b.eq 0x7101dafa00
7101daf960  and x8,x21,#-0x100000000000000
7101daf964  mov x9,#0x2d00000000000000
7101daf968  cmp x8,x9
7101daf96c  b.ne 0x7101dafa00
7101daf970  ldr x1,[x22, #0x318]
7101daf974  sub x0,x29,#0x88
7101daf978  mov x2,x21
7101daf97c  sub x23,x29,#0x88
7101daf980  bl 0x710327cd40
7101daf984  mov w1,#0x23
7101daf988  add x0,sp,#0x78
7101daf98c  mov w2,wzr
7101daf990  add x22,sp,#0x78
7101daf994  bl 0x7103239920
7101daf998  add x2,x23,#0x8
7101daf99c  adrp x1,0x7104420000
7101daf9a0  add x1,x1,#0xa16
7101daf9a4  add x0,sp,#0x78
7101daf9a8  bl 0x7103239d20
7101daf9ac  ldrsw x8,[sp, #0x7c]
7101daf9b0  cbz w8,0x7101dafa30
7101daf9b4  add x9,x22,w8, UXTW 
7101daf9b8  add x10,x22,#0x8
7101daf9bc  add x11,x9,#0x8
7101daf9c0  mov w9,#0xffffffff
7101daf9c4  adrp x12,0x7104754000
7101daf9c8  add x12,x12,#0x84
7101daf9cc  ldrb w13,[x10], #0x1
7101daf9d0  sub w14,w13,#0x41
7101daf9d4  add w15,w13,#0x20
7101daf9d8  cmp w14,#0x1a
7101daf9dc  csel w13,w15,w13,cc
7101daf9e0  eor w13,w13,w9
7101daf9e4  and w13,w13,#0xff
7101daf9e8  cmp x10,x11
7101daf9ec  ldr w13,[x12, w13, UXTW #0x2]
7101daf9f0  eor w9,w13,w9, LSR #0x8
7101daf9f4  b.cc 0x7101daf9cc
7101daf9f8  mvn w9,w9
7101daf9fc  b 0x7101dafa34
7101dafa00  str xzr,[sp, #0x78]
7101dafa04  b 0x7101dafa54
7101dafa08  fmov s0,0x3f800000
7101dafa0c  add x0,sp,#0x78
7101dafa10  bl 0x710377aee0
7101dafa14  ldr x0,[sp, #0x80]
7101dafa18  adrp x8,0x710523d000
7101dafa1c  add x8,x8,#0x9e8
7101dafa20  stp x8,xzr,[sp, #0x78]
7101dafa24  cbz x0,0x7101dafbcc
7101dafa28  bl 0x710392eb40
7101dafa2c  b 0x7101dafbcc
7101dafa30  mov x9,xzr
7101dafa34  bfm x9,x8,#0x20,#0x7
7101dafa38  str x9,[sp, #0x78]
7101dafa3c  cbz x9,0x7101dafa54
7101dafa40  ldr x0,[x20]
7101dafa44  ldrsw x2,[x0, #0x70]
7101dafa48  ldr w3,[x0, #0x68]
7101dafa4c  add x1,sp,#0x78
7101dafa50  bl 0x710323c4e0
7101dafa54  mov x0,x20
7101dafa58  mov x1,x21
7101dafa5c  bl 0x7103240590
7101dafa60  mov x21,x0
7101dafa64  ldr x0,[sp, #0x50]
7101dafa68  mov x1,x21
7101dafa6c  bl 0x7103778b80
7101dafa70  adrp x1,0x710432a000
7101dafa74  add x1,x1,#0x50a
7101dafa78  add x8,sp,#0x78
7101dafa7c  add x0,sp,#0x68
7101dafa80  bl 0x7103776910
7101dafa84  ldr x20,[sp, #0x80]
7101dafa88  mov x0,x20
7101dafa8c  mov x1,x21
7101dafa90  bl 0x7103778b80
7101dafa94  adrp x21,0x710523d000
7101dafa98  add x21,x21,#0x9a8
7101dafa9c  stp x21,xzr,[sp, #0x78]
7101dafaa0  cbz x20,0x7101dafaac
7101dafaa4  mov x0,x20
7101dafaa8  bl 0x710392eb40
7101dafaac  adrp x1,0x71043f0000
7101dafab0  add x1,x1,#0xd7c
7101dafab4  add x8,sp,#0x78
7101dafab8  add x0,sp,#0x68
7101dafabc  bl 0x71037780e0
7101dafac0  tbz w19,#0x0,0x7101dafad0
7101dafac4  add x0,sp,#0x78
7101dafac8  bl 0x710377b140
7101dafacc  b 0x7101dafba0
7101dafad0  fmov s0,0x3f800000
7101dafad4  add x0,sp,#0x78
7101dafad8  bl 0x710377aee0
7101dafadc  adrp x8,0x710532f000
7101dafae0  ldr x8,[x8, #0x8d0]
7101dafae4  ldr x0,[x8, #0x8]
7101dafae8  ldrb w8,[x0, #0x191]
7101dafaec  cbnz w8,0x7101dafb6c
7101dafaf0  mov x19,#0x29fc
7101dafaf4  movk x19,#0xf696, LSL #16
7101dafaf8  movk x19,#0x1b, LSL #32
7101dafafc  mov w2,#0x4
7101dafb00  mov x1,x19
7101dafb04  bl 0x7103313f20
7101dafb08  tbz w0,#0x0,0x7101dafb6c
7101dafb0c  add x0,sp,#0x8
7101dafb10  mov x1,x19
7101dafb14  bl 0x71024076d0
7101dafb18  ldr x8,[sp, #0x18]
7101dafb1c  adrp x9,0x7104f73000
7101dafb20  add x9,x9,#0xd50
7101dafb24  str x9,[sp, #0x10]
7101dafb28  cbz x8,0x7101dafb98
7101dafb2c  adrp x8,0x7106dd5000
7101dafb30  ldrb w8,[x8, #0x3a8]
7101dafb34  cmp w8,#0x1
7101dafb38  b.ne 0x7101dafb98
7101dafb3c  adrp x9,0x7106dd5000
7101dafb40  ldr w8,[sp, #0x20]
7101dafb44  ldr w9,[x9, #0x3ac]
7101dafb48  cmp w8,w9
7101dafb4c  b.ne 0x7101dafb98
7101dafb50  ldr x8,[sp, #0x18]
7101dafb54  ldr wzr,[x8, #0x38]!
7101dafb58  ldaxr w9,[x8]
7101dafb5c  sub w9,w9,#0x1
7101dafb60  stlxr w10,w9,[x8]
7101dafb64  cbnz w10,0x7101dafb58
7101dafb68  b 0x7101dafb98
7101dafb6c  mov x8,#0x650000000000
7101dafb70  movk x8,#0x87, LSL #48
7101dafb74  strb wzr,[sp, #0x28]
7101dafb78  stp xzr,x8,[sp, #0x18]
7101dafb7c  mov x8,#-0x1
7101dafb80  stp x8,xzr,[sp, #0x30]
7101dafb84  adrp x8,0x7104f73000
7101dafb88  add x8,x8,#0xd50
7101dafb8c  str wzr,[sp, #0x8]
7101dafb90  str xzr,[sp, #0x40]
7101dafb94  str x8,[sp, #0x10]
7101dafb98  str xzr,[sp, #0x18]
7101dafb9c  strb wzr,[sp, #0x28]
7101dafba0  ldr x0,[sp, #0x80]
7101dafba4  adrp x8,0x710523d000
7101dafba8  add x8,x8,#0x9e8
7101dafbac  stp x8,xzr,[sp, #0x78]
7101dafbb0  cbz x0,0x7101dafbb8
7101dafbb4  bl 0x710392eb40
7101dafbb8  ldr x0,[sp, #0x50]
7101dafbbc  stp x21,xzr,[sp, #0x48]
7101dafbc0  cbz x0,0x7101dafbc8
7101dafbc4  bl 0x710392eb40
7101dafbc8  ldr x21,[sp, #0x60]
7101dafbcc  adrp x19,0x710523d000
7101dafbd0  add x19,x19,#0x988
7101dafbd4  stp x19,xzr,[sp, #0x58]
7101dafbd8  cbz x21,0x7101dafbfc
7101dafbdc  ldr x0,[x21, #0x18]
7101dafbe0  adrp x8,0x710523d000
7101dafbe4  add x8,x8,#0x9a8
7101dafbe8  stp x8,xzr,[x21, #0x10]
7101dafbec  cbz x0,0x7101dafbf4
7101dafbf0  bl 0x710392eb40
7101dafbf4  mov x0,x21
7101dafbf8  bl 0x710392eb40
7101dafbfc  str x19,[sp, #0x68]
7101dafc00  ldr x19,[sp, #0x70]
7101dafc04  str xzr,[sp, #0x70]
7101dafc08  cbz x19,0x7101dafc2c
7101dafc0c  ldr x0,[x19, #0x18]
7101dafc10  adrp x8,0x710523d000
7101dafc14  add x8,x8,#0x9a8
7101dafc18  stp x8,xzr,[x19, #0x10]
7101dafc1c  cbz x0,0x7101dafc24
7101dafc20  bl 0x710392eb40
7101dafc24  mov x0,x19
7101dafc28  bl 0x710392eb40
7101dafc2c  add sp,sp,#0x1d0
7101dafc30  ldp x29,x30,[sp, #0x40]
7101dafc34  ldp x20,x19,[sp, #0x30]
7101dafc38  ldp x22,x21,[sp, #0x20]
7101dafc3c  ldp x24,x23,[sp, #0x10]
7101dafc40  ldr x28,[sp], #0x50
7101dafc44  ret
