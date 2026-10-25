// addr:      71032ed230
// offset:    0x32ed230
// name:      FUN_71032ed230
// mangled:   
// size:      3240

71032ed230  stp x28,x23,[sp, #-0x40]!
71032ed234  stp x22,x21,[sp, #0x10]
71032ed238  stp x20,x19,[sp, #0x20]
71032ed23c  stp x29,x30,[sp, #0x30]
71032ed240  add x29,sp,#0x30
71032ed244  sub sp,sp,#0xa30
71032ed248  ldr x8,[x0, #0x8]
71032ed24c  cbz x8,0x71032ede40
71032ed250  mov x19,x0
71032ed254  ldr x0,[x8, #0x80]
71032ed258  ldr w8,[x0, #0xe8]
71032ed25c  cbnz w8,0x71032ed274
71032ed260  ldr x8,[x0, #0x120]
71032ed264  cbz x8,0x71032ed274
71032ed268  bl 0x7101afed00
71032ed26c  ldr x8,[x19, #0x8]
71032ed270  ldr x0,[x8, #0x80]
71032ed274  ldr w8,[x0, #0x1dc]
71032ed278  cmp w8,#0x8
71032ed27c  b.hi 0x71032ed69c
71032ed280  adrp x9,0x710452a000
71032ed284  add x9,x9,#0x898
71032ed288  ldrsw x10,[x9, x8, LSL #0x2]
71032ed28c  add x9,x10,x9
71032ed290  br x9
71032ed294  str w8,[x19, #0x30]
71032ed298  adrp x21,0x7105314000
71032ed29c  add x21,x21,#0x4d8
71032ed2a0  ldarb w8,[x21]
71032ed2a4  tbz w8,#0x0,0x71032ede58
71032ed2a8  ldr x0,[x19, #0x8]
71032ed2ac  ldr x8,[x0]
71032ed2b0  ldr x8,[x8, #0x20]
71032ed2b4  blr x8
71032ed2b8  cmn w0,#0x1
71032ed2bc  b.eq 0x71032ed360
71032ed2c0  adrp x8,0x7105307000
71032ed2c4  str w0,[x8, #0xb68]
71032ed2c8  adrp x8,0x7105339000
71032ed2cc  add x8,x8,#0x830
71032ed2d0  cmp w0,#0x9
71032ed2d4  b.hi 0x71032ed2f8
71032ed2d8  adrp x9,0x7105339000
71032ed2dc  ldr x9,[x9, #0x8b0]
71032ed2e0  ldrb w9,[x9, #0x8]
71032ed2e4  cbz w9,0x71032ed2f8
71032ed2e8  adrp x8,0x7105339000
71032ed2ec  add x8,x8,#0x860
71032ed2f0  ldr x8,[x8, w0, SXTW #0x3]
71032ed2f4  cbz x8,0x71032ed320
71032ed2f8  ldr x8,[x8, #0x10]
71032ed2fc  ldr w8,[x8, #0x9c]
71032ed300  sub w8,w8,#0x1
71032ed304  cmp w8,#0x6
71032ed308  b.hi 0x71032ed320
71032ed30c  adrp x9,0x7104753000
71032ed310  add x9,x9,#0xde0
71032ed314  ldr w8,[x9, w8, SXTW #0x2]
71032ed318  adrp x9,0x7105307000
71032ed31c  str w8,[x9, #0xb6c]
71032ed320  adrp x8,0x710593b000
71032ed324  ldr x8,[x8, #0xa90]
71032ed328  cbz x8,0x71032ed33c
71032ed32c  adrp x9,0x7105307000
71032ed330  ldr w9,[x9, #0xb6c]
71032ed334  ldr x8,[x8]
71032ed338  str w9,[x8, #0x3ac]
71032ed33c  adrp x8,0x710532f000
71032ed340  ldr x8,[x8, #0x7f0]
71032ed344  cbz x8,0x71032ed360
71032ed348  ldr x8,[x8, #0x8]
71032ed34c  ldr x8,[x8, #0x8]
71032ed350  adrp x9,0x7105307000
71032ed354  ldr w1,[x9, #0xb6c]
71032ed358  ldr x0,[x8, #0x80]
71032ed35c  bl 0x7101afe3e0
71032ed360  adrp x20,0x710523c000
71032ed364  add x20,x20,#0xd78
71032ed368  ldr x22,[x20, #0x8]
71032ed36c  ldr w8,[x19, #0x30]
71032ed370  adrp x9,0x71050a1000
71032ed374  add x9,x9,#0x180
71032ed378  str x9,[sp, #0x910]
71032ed37c  str w8,[sp, #0x918]
71032ed380  cmp x22,x20
71032ed384  b.eq 0x71032ed3d0
71032ed388  adrp x23,0x710523c000
71032ed38c  add x23,x23,#0xd18
71032ed390  sub x8,x22,#0x8
71032ed394  cmp x22,#0x0
71032ed398  csel x8,xzr,x8,eq
71032ed39c  ldr x0,[x8, #0x38]
71032ed3a0  cbz x0,0x71032ed3c4
71032ed3a4  ldrb w9,[x8, #0x8c]
71032ed3a8  cbnz w9,0x71032ed3c4
71032ed3ac  stp x23,x8,[sp]
71032ed3b0  ldr x8,[x0]
71032ed3b4  ldr x8,[x8, #0x40]
71032ed3b8  mov x1,sp
71032ed3bc  add x2,sp,#0x910
71032ed3c0  blr x8
71032ed3c4  ldr x22,[x22, #0x8]
71032ed3c8  cmp x22,x20
71032ed3cc  b.ne 0x71032ed390
71032ed3d0  bl 0x7101765b20
71032ed3d4  adrp x8,0x710532f000
71032ed3d8  ldr x8,[x8, #0x8b8]
71032ed3dc  ldr x8,[x8, #0x8]
71032ed3e0  orr x9,xzr,#0x3f80000000000000
71032ed3e4  stp xzr,x9,[x8, #0x50]
71032ed3e8  str xzr,[x8, #0x60]
71032ed3ec  adrp x8,0x7105339000
71032ed3f0  ldr x8,[x8, #0x168]
71032ed3f4  cbz x8,0x71032ed41c
71032ed3f8  mov w9,#0x72b0
71032ed3fc  add x9,x8,x9
71032ed400  ldr s0,[x9]
71032ed404  fcmp s0,#0.0
71032ed408  b.eq 0x71032ed41c
71032ed40c  mov w10,#0x72b8
71032ed410  mov w11,#0x1
71032ed414  strb w11,[x8, x10, LSL ]
71032ed418  str wzr,[x9]
71032ed41c  ldr w8,[x19, #0x30]
71032ed420  sub w8,w8,#0x2
71032ed424  cmp w8,#0x4
71032ed428  b.hi 0x71032ed838
71032ed42c  adrp x9,0x710452a000
71032ed430  add x9,x9,#0x8bc
71032ed434  ldrsw x8,[x9, x8, LSL #0x2]
71032ed438  add x8,x8,x9
71032ed43c  br x8
71032ed440  orr x10,xzr,#0x2000000000
71032ed444  str x10,[sp, #0x910]
71032ed448  mov x10,#0x7053
71032ed44c  movk x10,#0x7269, LSL #16
71032ed450  mov x11,#0x6772
71032ed454  movk x11,#0x6e61, LSL #16
71032ed458  mov x13,#0x536e
71032ed45c  movk x13,#0x7165, LSL #16
71032ed460  add x9,sp,#0x910
71032ed464  mov w8,#0x9dc5
71032ed468  movk w8,#0x811c, LSL #16
71032ed46c  movk x10,#0x7469, LSL #32
71032ed470  movk x10,#0x4f73, LSL #48
71032ed474  str x10,[sp, #0x918]
71032ed478  movk x11,#0x7a69, LSL #32
71032ed47c  movk x11,#0x7461, LSL #48
71032ed480  str x11,[sp, #0x920]
71032ed484  mov w12,#0x6f69
71032ed488  strh w12,[sp, #0x928]
71032ed48c  movk x13,#0x6575, LSL #32
71032ed490  movk x13,#0x636e, LSL #48
71032ed494  stur x13,[x9, #0x1a]
71032ed498  mov w14,#0x5365
71032ed49c  movk w14,#0x6563, LSL #16
71032ed4a0  stur w14,[x9, #0x22]
71032ed4a4  strb wzr,[sp, #0x938]
71032ed4a8  mov w13,#0x656e
71032ed4ac  mov w15,#0x53
71032ed4b0  strh w13,[sp, #0x936]
71032ed4b4  mov w14,#0x9
71032ed4b8  mov w9,#0x89
71032ed4bc  add x16,sp,#0x910
71032ed4c0  mov w17,w8
71032ed4c4  mul w17,w17,w9
71032ed4c8  and w15,w15,#0xff
71032ed4cc  eor w17,w17,w15
71032ed4d0  ldrb w15,[x16, x14, LSL ]
71032ed4d4  add x14,x14,#0x1
71032ed4d8  cbnz w15,0x71032ed4c4
71032ed4dc  str x10,[sp, #0x810]
71032ed4e0  mov x10,#0x4d6e
71032ed4e4  movk x10,#0x6961, LSL #16
71032ed4e8  orr x14,xzr,#0x1c00000000
71032ed4ec  str x11,[sp, #0x818]
71032ed4f0  movk x10,#0x536e, LSL #32
71032ed4f4  movk x10,#0x6563, LSL #48
71032ed4f8  add x11,sp,#0x723
71032ed4fc  str x14,[sp, #0x808]
71032ed500  strh w12,[sp, #0x820]
71032ed504  stur x10,[x11, #0xff]
71032ed508  mov w11,#0x53
71032ed50c  mov w10,#0x9
71032ed510  add x12,sp,#0x808
71032ed514  str w17,[sp, #0x910]
71032ed518  strh w13,[sp, #0x82a]
71032ed51c  strb wzr,[sp, #0x82c]
71032ed520  mul w8,w8,w9
71032ed524  and w11,w11,#0xff
71032ed528  eor w8,w8,w11
71032ed52c  ldrb w11,[x12, x10, LSL ]
71032ed530  add x10,x10,#0x1
71032ed534  cbnz w11,0x71032ed520
71032ed538  mov x0,sp
71032ed53c  add x1,sp,#0x910
71032ed540  add x2,sp,#0x808
71032ed544  mov w3,#0x1
71032ed548  str w8,[sp, #0x808]
71032ed54c  bl 0x71017f4bb0
71032ed550  ldr x19,[x20, #0x8]
71032ed554  cmp x19,x20
71032ed558  b.eq 0x71032ede40
71032ed55c  adrp x21,0x710523c000
71032ed560  add x21,x21,#0xd18
71032ed564  sub x8,x19,#0x8
71032ed568  cmp x19,#0x0
71032ed56c  csel x8,xzr,x8,eq
71032ed570  ldr x0,[x8, #0x38]
71032ed574  cbz x0,0x71032ed598
71032ed578  ldrb w9,[x8, #0x8c]
71032ed57c  cbnz w9,0x71032ed598
71032ed580  stp x21,x8,[x29, #-0x40]
71032ed584  ldr x8,[x0]
71032ed588  ldr x8,[x8, #0x40]
71032ed58c  sub x1,x29,#0x40
71032ed590  mov x2,sp
71032ed594  blr x8
71032ed598  ldr x19,[x19, #0x8]
71032ed59c  cmp x19,x20
71032ed5a0  b.ne 0x71032ed564
71032ed5a4  b 0x71032ede40
71032ed5a8  mov w9,#0x4
71032ed5ac  mov x8,xzr
71032ed5b0  adrp x10,0x710435a000
71032ed5b4  add x10,x10,#0xc85
71032ed5b8  str w9,[x19, #0x30]
71032ed5bc  mov x9,sp
71032ed5c0  str xzr,[sp]
71032ed5c4  b 0x71032ed5d0
71032ed5c8  add x8,x8,#0x2
71032ed5cc  strb w12,[x11, #0x9]
71032ed5d0  add x12,x10,x8
71032ed5d4  ldrb w13,[x12]
71032ed5d8  cbz w13,0x71032ed5f0
71032ed5dc  ldrb w12,[x12, #0x1]
71032ed5e0  add x11,x9,x8
71032ed5e4  strb w13,[x11, #0x8]
71032ed5e8  cbnz w12,0x71032ed5c8
71032ed5ec  add x8,x8,#0x1
71032ed5f0  mov x9,sp
71032ed5f4  add x10,x9,#0x8
71032ed5f8  mov w20,#0x9dc5
71032ed5fc  movk w20,#0x811c, LSL #16
71032ed600  strb wzr,[x10, w8, UXTW ]
71032ed604  str w8,[sp, #0x4]
71032ed608  ldrb w8,[sp, #0x8]
71032ed60c  mov w10,w20
71032ed610  cbz w8,0x71032ed634
71032ed614  add x9,x9,#0x9
71032ed618  mov w11,#0x89
71032ed61c  mov w10,w20
71032ed620  mul w10,w10,w11
71032ed624  and w8,w8,#0xff
71032ed628  eor w10,w10,w8
71032ed62c  ldrb w8,[x9], #0x1
71032ed630  cbnz w8,0x71032ed620
71032ed634  add x0,sp,#0x910
71032ed638  mov x1,sp
71032ed63c  str w10,[sp]
71032ed640  mov x19,sp
71032ed644  bl 0x7101762560
71032ed648  mov x0,sp
71032ed64c  bl 0x7101762b40
71032ed650  mov x8,xzr
71032ed654  add x9,x19,#0x8
71032ed658  add x10,sp,#0x808
71032ed65c  str xzr,[sp, #0x808]
71032ed660  b 0x71032ed66c
71032ed664  add x8,x8,#0x2
71032ed668  strb w11,[x12, #0x9]
71032ed66c  add x11,x9,x8
71032ed670  ldrb w13,[x11]
71032ed674  cbz w13,0x71032edc3c
71032ed678  add w14,w8,#0x1
71032ed67c  add x12,x10,x8
71032ed680  cmp w14,#0xff
71032ed684  strb w13,[x12, #0x8]
71032ed688  b.cs 0x71032edc38
71032ed68c  ldrb w11,[x11, #0x1]
71032ed690  cbnz w11,0x71032ed664
71032ed694  add x8,x8,#0x1
71032ed698  b 0x71032edc3c
71032ed69c  str wzr,[x19, #0x30]
71032ed6a0  b 0x71032ede40
71032ed6a4  orr w8,wzr,#0x7
71032ed6a8  str w8,[x19, #0x30]
71032ed6ac  adrp x8,0x710532f000
71032ed6b0  ldr x8,[x8, #0x7d0]
71032ed6b4  ldr x8,[x8, #0x8]
71032ed6b8  ldr x19,[x8, #0x18]
71032ed6bc  cbz x19,0x71032ede40
71032ed6c0  ldr x8,[x19]
71032ed6c4  ldr x8,[x8, #0x48]
71032ed6c8  mov x0,x19
71032ed6cc  blr x8
71032ed6d0  tbz w0,#0x0,0x71032ede40
71032ed6d4  ldr x8,[x19]
71032ed6d8  ldr x1,[x8, #0x30]
71032ed6dc  mov x0,x19
71032ed6e0  add sp,sp,#0xa30
71032ed6e4  ldp x29,x30,[sp, #0x30]
71032ed6e8  ldp x20,x19,[sp, #0x20]
71032ed6ec  ldp x22,x21,[sp, #0x10]
71032ed6f0  ldp x28,x23,[sp], #0x40
71032ed6f4  br x1
71032ed6f8  mov x9,#0x1200000000
71032ed6fc  mov x10,#0x6f4c
71032ed700  movk x10,#0x6163, LSL #16
71032ed704  mov x11,#0x6575
71032ed708  movk x11,#0x636e, LSL #16
71032ed70c  str x9,[sp, #0x910]
71032ed710  mov w8,#0x9dc5
71032ed714  movk w8,#0x811c, LSL #16
71032ed718  strb wzr,[sp, #0x92a]
71032ed71c  movk x10,#0x536c, LSL #32
71032ed720  movk x10,#0x7165, LSL #48
71032ed724  str x10,[sp, #0x918]
71032ed728  movk x11,#0x5365, LSL #32
71032ed72c  movk x11,#0x6563, LSL #48
71032ed730  str x11,[sp, #0x920]
71032ed734  mov w9,#0x656e
71032ed738  mov w11,#0x4c
71032ed73c  strh w9,[sp, #0x928]
71032ed740  mov w10,#0x9
71032ed744  mov w9,#0x89
71032ed748  add x12,sp,#0x910
71032ed74c  mov w13,w8
71032ed750  mul w13,w13,w9
71032ed754  and w11,w11,#0xff
71032ed758  eor w13,w13,w11
71032ed75c  ldrb w11,[x12, x10, LSL ]
71032ed760  add x10,x10,#0x1
71032ed764  cbnz w11,0x71032ed750
71032ed768  mov x10,#0xd00000000
71032ed76c  mov x11,#0x6f4c
71032ed770  movk x11,#0x6163, LSL #16
71032ed774  movk x11,#0x546c, LSL #32
71032ed778  movk x11,#0x706f, LSL #48
71032ed77c  str x10,[sp, #0x808]
71032ed780  mov w10,#0x6353
71032ed784  movk w10,#0x6e65, LSL #16
71032ed788  str w13,[sp, #0x910]
71032ed78c  str x11,[sp, #0x810]
71032ed790  mov w13,#0x65
71032ed794  str w10,[sp, #0x818]
71032ed798  mov w11,#0x4c
71032ed79c  mov w10,#0x9
71032ed7a0  add x12,sp,#0x808
71032ed7a4  strh w13,[sp, #0x81c]
71032ed7a8  mul w8,w8,w9
71032ed7ac  and w11,w11,#0xff
71032ed7b0  eor w8,w8,w11
71032ed7b4  ldrb w11,[x12, x10, LSL ]
71032ed7b8  add x10,x10,#0x1
71032ed7bc  cbnz w11,0x71032ed7a8
71032ed7c0  mov x0,sp
71032ed7c4  add x1,sp,#0x910
71032ed7c8  add x2,sp,#0x808
71032ed7cc  mov w3,#0x1
71032ed7d0  str w8,[sp, #0x808]
71032ed7d4  bl 0x71017f4bb0
71032ed7d8  ldr x19,[x20, #0x8]
71032ed7dc  cmp x19,x20
71032ed7e0  b.eq 0x71032ed82c
71032ed7e4  adrp x21,0x710523c000
71032ed7e8  add x21,x21,#0xd18
71032ed7ec  sub x8,x19,#0x8
71032ed7f0  cmp x19,#0x0
71032ed7f4  csel x8,xzr,x8,eq
71032ed7f8  ldr x0,[x8, #0x38]
71032ed7fc  cbz x0,0x71032ed820
71032ed800  ldrb w9,[x8, #0x8c]
71032ed804  cbnz w9,0x71032ed820
71032ed808  stp x21,x8,[x29, #-0x40]
71032ed80c  ldr x8,[x0]
71032ed810  ldr x8,[x8, #0x40]
71032ed814  sub x1,x29,#0x40
71032ed818  mov x2,sp
71032ed81c  blr x8
71032ed820  ldr x19,[x19, #0x8]
71032ed824  cmp x19,x20
71032ed828  b.ne 0x71032ed7ec
71032ed82c  mov w0,#0x1
71032ed830  bl 0x71025d2490
71032ed834  b 0x71032ede40
71032ed838  adrp x8,0x710532f000
71032ed83c  ldr x19,[x8, #0x7d0]
71032ed840  ldr x8,[x19, #0x8]
71032ed844  ldr x0,[x8, #0x18]
71032ed848  cbz x0,0x71032ed860
71032ed84c  ldr x8,[x0]
71032ed850  ldr x8,[x8, #0x48]
71032ed854  blr x8
71032ed858  tbnz w0,#0x0,0x71032ed88c
71032ed85c  ldr x8,[x19, #0x8]
71032ed860  ldr x19,[x8, #0x10]
71032ed864  cbz x19,0x71032ed88c
71032ed868  ldr x8,[x19]
71032ed86c  ldr x8,[x8, #0x48]
71032ed870  mov x0,x19
71032ed874  blr x8
71032ed878  tbz w0,#0x0,0x71032ed88c
71032ed87c  ldr x8,[x19]
71032ed880  ldr x8,[x8, #0x30]
71032ed884  mov x0,x19
71032ed888  blr x8
71032ed88c  ldarb w8,[x21]
71032ed890  tbz w8,#0x0,0x71032ede98
71032ed894  adrp x9,0x7105308000
71032ed898  mov x11,#0x654d
71032ed89c  movk x11,#0x756e, LSL #16
71032ed8a0  str wzr,[x9, #0x3c8]
71032ed8a4  mov x9,#0x6e65
71032ed8a8  movk x9,#0x6563, LSL #16
71032ed8ac  mov w8,#0x9dc5
71032ed8b0  movk w8,#0x811c, LSL #16
71032ed8b4  mov x10,#0x1100000000
71032ed8b8  movk x11,#0x6553, LSL #32
71032ed8bc  movk x11,#0x7571, LSL #48
71032ed8c0  str x10,[sp, #0x910]
71032ed8c4  movk x9,#0x6353, LSL #32
71032ed8c8  movk x9,#0x6e65, LSL #48
71032ed8cc  str x11,[sp, #0x918]
71032ed8d0  mov w10,#0x65
71032ed8d4  str x9,[sp, #0x920]
71032ed8d8  strh w10,[sp, #0x928]
71032ed8dc  mov w12,#0x4d
71032ed8e0  mov w11,#0x9
71032ed8e4  mov w9,#0x89
71032ed8e8  add x13,sp,#0x910
71032ed8ec  mov w14,w8
71032ed8f0  mul w14,w14,w9
71032ed8f4  and w12,w12,#0xff
71032ed8f8  eor w14,w14,w12
71032ed8fc  ldrb w12,[x13, x11, LSL ]
71032ed900  add x11,x11,#0x1
71032ed904  cbnz w12,0x71032ed8f0
71032ed908  mov x11,#0xd00000000
71032ed90c  mov x12,#0x614d
71032ed910  movk x12,#0x6e69, LSL #16
71032ed914  movk x12,#0x654d, LSL #32
71032ed918  movk x12,#0x756e, LSL #48
71032ed91c  str x11,[sp, #0x808]
71032ed920  mov w11,#0x6353
71032ed924  movk w11,#0x6e65, LSL #16
71032ed928  str x12,[sp, #0x810]
71032ed92c  str w11,[sp, #0x818]
71032ed930  mov w12,#0x4d
71032ed934  mov w11,#0x9
71032ed938  add x13,sp,#0x808
71032ed93c  str w14,[sp, #0x910]
71032ed940  strh w10,[sp, #0x81c]
71032ed944  and w10,w12,#0xff
71032ed948  mul w8,w8,w9
71032ed94c  eor w8,w8,w10
71032ed950  ldrb w12,[x13, x11, LSL ]
71032ed954  add x11,x11,#0x1
71032ed958  cbnz w12,0x71032ed944
71032ed95c  mov x0,sp
71032ed960  add x1,sp,#0x910
71032ed964  add x2,sp,#0x808
71032ed968  mov w3,#0x1
71032ed96c  str w8,[sp, #0x808]
71032ed970  bl 0x71017f4bb0
71032ed974  ldr x19,[x20, #0x8]
71032ed978  cmp x19,x20
71032ed97c  b.eq 0x71032ede40
71032ed980  adrp x21,0x710523c000
71032ed984  add x21,x21,#0xd18
71032ed988  sub x8,x19,#0x8
71032ed98c  cmp x19,#0x0
71032ed990  csel x8,xzr,x8,eq
71032ed994  ldr x0,[x8, #0x38]
71032ed998  cbz x0,0x71032ed9bc
71032ed99c  ldrb w9,[x8, #0x8c]
71032ed9a0  cbnz w9,0x71032ed9bc
71032ed9a4  stp x21,x8,[x29, #-0x40]
71032ed9a8  ldr x8,[x0]
71032ed9ac  ldr x8,[x8, #0x40]
71032ed9b0  sub x1,x29,#0x40
71032ed9b4  mov x2,sp
71032ed9b8  blr x8
71032ed9bc  ldr x19,[x19, #0x8]
71032ed9c0  cmp x19,x20
71032ed9c4  b.ne 0x71032ed988
71032ed9c8  b 0x71032ede40
71032ed9cc  mov x9,#0x1300000000
71032ed9d0  mov x10,#0x704f
71032ed9d4  movk x10,#0x6974, LSL #16
71032ed9d8  mov x11,#0x7571
71032ed9dc  movk x11,#0x6e65, LSL #16
71032ed9e0  str x9,[sp, #0x910]
71032ed9e4  mov w8,#0x9dc5
71032ed9e8  movk w8,#0x811c, LSL #16
71032ed9ec  movk x10,#0x6e6f, LSL #32
71032ed9f0  movk x10,#0x6553, LSL #48
71032ed9f4  str x10,[sp, #0x918]
71032ed9f8  movk x11,#0x6563, LSL #32
71032ed9fc  movk x11,#0x6353, LSL #48
71032eda00  str x11,[sp, #0x920]
71032eda04  mov w9,#0x6e65
71032eda08  movk w9,#0x65, LSL #16
71032eda0c  str w9,[sp, #0x928]
71032eda10  mov w11,#0x4f
71032eda14  mov w10,#0x9
71032eda18  mov w9,#0x89
71032eda1c  add x12,sp,#0x910
71032eda20  mov w13,w8
71032eda24  mul w13,w13,w9
71032eda28  and w11,w11,#0xff
71032eda2c  eor w13,w13,w11
71032eda30  ldrb w11,[x12, x10, LSL ]
71032eda34  add x10,x10,#0x1
71032eda38  cbnz w11,0x71032eda24
71032eda3c  orr x10,xzr,#0xe00000000
71032eda40  mov x11,#0x704f
71032eda44  movk x11,#0x6974, LSL #16
71032eda48  str x10,[sp, #0x808]
71032eda4c  mov w10,#0x5370
71032eda50  movk w10,#0x6563, LSL #16
71032eda54  movk x11,#0x6e6f, LSL #32
71032eda58  movk x11,#0x6f54, LSL #48
71032eda5c  str w10,[sp, #0x818]
71032eda60  mov w10,#0x656e
71032eda64  str x11,[sp, #0x810]
71032eda68  strh w10,[sp, #0x81c]
71032eda6c  mov w11,#0x4f
71032eda70  mov w10,#0x9
71032eda74  add x12,sp,#0x808
71032eda78  str w13,[sp, #0x910]
71032eda7c  strb wzr,[sp, #0x81e]
71032eda80  mul w8,w8,w9
71032eda84  and w11,w11,#0xff
71032eda88  eor w8,w8,w11
71032eda8c  ldrb w11,[x12, x10, LSL ]
71032eda90  add x10,x10,#0x1
71032eda94  cbnz w11,0x71032eda80
71032eda98  mov x0,sp
71032eda9c  add x1,sp,#0x910
71032edaa0  add x2,sp,#0x808
71032edaa4  mov w3,#0x1
71032edaa8  str w8,[sp, #0x808]
71032edaac  bl 0x71017f4bb0
71032edab0  ldr x19,[x20, #0x8]
71032edab4  cmp x19,x20
71032edab8  b.eq 0x71032ede40
71032edabc  adrp x21,0x710523c000
71032edac0  add x21,x21,#0xd18
71032edac4  sub x8,x19,#0x8
71032edac8  cmp x19,#0x0
71032edacc  csel x8,xzr,x8,eq
71032edad0  ldr x0,[x8, #0x38]
71032edad4  cbz x0,0x71032edaf8
71032edad8  ldrb w9,[x8, #0x8c]
71032edadc  cbnz w9,0x71032edaf8
71032edae0  stp x21,x8,[x29, #-0x40]
71032edae4  ldr x8,[x0]
71032edae8  ldr x8,[x8, #0x40]
71032edaec  sub x1,x29,#0x40
71032edaf0  mov x2,sp
71032edaf4  blr x8
71032edaf8  ldr x19,[x19, #0x8]
71032edafc  cmp x19,x20
71032edb00  b.ne 0x71032edac4
71032edb04  b 0x71032ede40
71032edb08  mov x9,#0x1100000000
71032edb0c  mov x10,#0x6548
71032edb10  movk x10,#0x706c, LSL #16
71032edb14  mov x11,#0x6e65
71032edb18  movk x11,#0x6563, LSL #16
71032edb1c  str x9,[sp, #0x910]
71032edb20  mov w8,#0x9dc5
71032edb24  movk w8,#0x811c, LSL #16
71032edb28  movk x10,#0x6553, LSL #32
71032edb2c  movk x10,#0x7571, LSL #48
71032edb30  str x10,[sp, #0x918]
71032edb34  movk x11,#0x6353, LSL #32
71032edb38  movk x11,#0x6e65, LSL #48
71032edb3c  str x11,[sp, #0x920]
71032edb40  mov w9,#0x65
71032edb44  mov w11,#0x48
71032edb48  strh w9,[sp, #0x928]
71032edb4c  mov w10,#0x9
71032edb50  mov w9,#0x89
71032edb54  add x12,sp,#0x910
71032edb58  mov w13,w8
71032edb5c  mul w13,w13,w9
71032edb60  and w11,w11,#0xff
71032edb64  eor w13,w13,w11
71032edb68  ldrb w11,[x12, x10, LSL ]
71032edb6c  add x10,x10,#0x1
71032edb70  cbnz w11,0x71032edb5c
71032edb74  orr x10,xzr,#0xc00000000
71032edb78  mov x11,#0x6548
71032edb7c  movk x11,#0x706c, LSL #16
71032edb80  movk x11,#0x6f54, LSL #32
71032edb84  movk x11,#0x5370, LSL #48
71032edb88  str x10,[sp, #0x808]
71032edb8c  mov w10,#0x6563
71032edb90  movk w10,#0x656e, LSL #16
71032edb94  str x11,[sp, #0x810]
71032edb98  str w10,[sp, #0x818]
71032edb9c  mov w11,#0x48
71032edba0  mov w10,#0x9
71032edba4  add x12,sp,#0x808
71032edba8  str w13,[sp, #0x910]
71032edbac  strb wzr,[sp, #0x81c]
71032edbb0  mul w8,w8,w9
71032edbb4  and w11,w11,#0xff
71032edbb8  eor w8,w8,w11
71032edbbc  ldrb w11,[x12, x10, LSL ]
71032edbc0  add x10,x10,#0x1
71032edbc4  cbnz w11,0x71032edbb0
71032edbc8  mov x0,sp
71032edbcc  add x1,sp,#0x910
71032edbd0  add x2,sp,#0x808
71032edbd4  mov w3,#0x1
71032edbd8  str w8,[sp, #0x808]
71032edbdc  bl 0x71017f4bb0
71032edbe0  ldr x19,[x20, #0x8]
71032edbe4  cmp x19,x20
71032edbe8  b.eq 0x71032ede40
71032edbec  adrp x21,0x710523c000
71032edbf0  add x21,x21,#0xd18
71032edbf4  sub x8,x19,#0x8
71032edbf8  cmp x19,#0x0
71032edbfc  csel x8,xzr,x8,eq
71032edc00  ldr x0,[x8, #0x38]
71032edc04  cbz x0,0x71032edc28
71032edc08  ldrb w9,[x8, #0x8c]
71032edc0c  cbnz w9,0x71032edc28
71032edc10  stp x21,x8,[x29, #-0x40]
71032edc14  ldr x8,[x0]
71032edc18  ldr x8,[x8, #0x40]
71032edc1c  sub x1,x29,#0x40
71032edc20  mov x2,sp
71032edc24  blr x8
71032edc28  ldr x19,[x19, #0x8]
71032edc2c  cmp x19,x20
71032edc30  b.ne 0x71032edbf4
71032edc34  b 0x71032ede40
71032edc38  add w8,w8,#0x1
71032edc3c  add x10,sp,#0x808
71032edc40  add x19,x10,#0x8
71032edc44  strb wzr,[x19, w8, UXTW ]
71032edc48  ldrb w9,[sp, #0x810]
71032edc4c  str w8,[sp, #0x80c]
71032edc50  cbz w9,0x71032edc70
71032edc54  add x8,x10,#0x9
71032edc58  mov w10,#0x89
71032edc5c  mul w11,w20,w10
71032edc60  and w9,w9,#0xff
71032edc64  eor w20,w11,w9
71032edc68  ldrb w9,[x8], #0x1
71032edc6c  cbnz w9,0x71032edc5c
71032edc70  mov w8,#0x100
71032edc74  movk w8,#0x101, LSL #16
71032edc78  stur x8,[sp, #0xa]
71032edc7c  mov x8,#0x12
71032edc80  movk x8,#0x6, LSL #32
71032edc84  stur x8,[sp, #0x14]
71032edc88  orr w8,wzr,#0x3f800000
71032edc8c  str w8,[sp, #0x1c]
71032edc90  adrp x8,0x71052c5000
71032edc94  ldr x8,[x8, #0x170]
71032edc98  str w20,[sp, #0x808]
71032edc9c  strh wzr,[sp, #0x8]
71032edca0  str xzr,[sp]
71032edca4  strb wzr,[sp, #0x12]
71032edca8  mov x1,sp
71032edcac  strb wzr,[sp, #0x28]
71032edcb0  str xzr,[sp, #0x20]
71032edcb4  strb wzr,[sp, #0x130]
71032edcb8  str xzr,[sp, #0x128]
71032edcbc  str xzr,[sp, #0x250]
71032edcc0  ldr x0,[x8]
71032edcc4  bl 0x7101762e80
71032edcc8  adrp x20,0x7105314000
71032edccc  ldr x8,[x20, #0x510]
71032edcd0  ldr x8,[x8]
71032edcd4  ldr x8,[x8, #0x258]
71032edcd8  ldr x8,[x8]
71032edcdc  ldr x8,[x8]
71032edce0  ldr w9,[x8, #0x1a8]
71032edce4  add w10,w9,#0x1
71032edce8  orr w11,wzr,#0x7fffffff
71032edcec  cmp w10,w11
71032edcf0  csinc w9,w11,w9,cs
71032edcf4  str w9,[x8, #0x1a8]
71032edcf8  adrp x8,0x710532f000
71032edcfc  ldr x8,[x8, #0x8e8]
71032edd00  ldr x0,[x8, #0x8]
71032edd04  add x9,sp,#0x910
71032edd08  add x1,x9,#0x8
71032edd0c  mov x3,sp
71032edd10  mov w4,#0x1
71032edd14  mov x2,x19
71032edd18  bl 0x7103342a40
71032edd1c  sub x0,x29,#0x40
71032edd20  bl 0x71039c2680
71032edd24  cbnz w0,0x71032edd58
71032edd28  ldr x8,[x20, #0x510]
71032edd2c  ldr x8,[x8]
71032edd30  ldur x0,[x29, #-0x40]
71032edd34  sub x1,x29,#0x40
71032edd38  ldr x19,[x8, #0x228]
71032edd3c  stur xzr,[x29, #-0x40]
71032edd40  bl 0x71037418e0
71032edd44  tbz w0,#0x0,0x71032edd58
71032edd48  ldr x8,[x19]
71032edd4c  ldr x8,[x8]
71032edd50  ldur x9,[x29, #-0x40]
71032edd54  str x9,[x8, #0x20]
71032edd58  adrp x8,0x7105314000
71032edd5c  ldr x8,[x8, #0x508]
71032edd60  ldr x8,[x8]
71032edd64  mov w9,#0x4dd8
71032edd68  movk w9,#0x5b, LSL #16
71032edd6c  add x19,x8,x9
71032edd70  mov w9,#0x4de8
71032edd74  movk w9,#0x5b, LSL #16
71032edd78  add x20,x8,x9
71032edd7c  ldr x8,[x20]
71032edd80  cbz x8,0x71032edd98
71032edd84  ldr x8,[x19]
71032edd88  ldrb w9,[x8, #0x10]
71032edd8c  and w9,w9,#0x1
71032edd90  strb w9,[x8, #0x10]
71032edd94  b 0x71032ede10
71032edd98  mov w0,#0x10
71032edd9c  orr w1,wzr,#0x18
71032edda0  bl 0x710392e290
71032edda4  cbnz x0,0x71032eddec
71032edda8  adrp x8,0x7105332000
71032eddac  ldr x0,[x8, #0xf00]
71032eddb0  cbz x0,0x71032edde8
71032eddb4  orr w8,wzr,#0x18
71032eddb8  stur wzr,[x29, #-0x44]
71032eddbc  sub x1,x29,#0x44
71032eddc0  stur x8,[x29, #-0x40]
71032eddc4  ldr x8,[x0]
71032eddc8  ldr x8,[x8, #0x30]
71032eddcc  sub x2,x29,#0x40
71032eddd0  blr x8
71032eddd4  tbz w0,#0x0,0x71032edde8
71032eddd8  mov w0,#0x10
71032edddc  orr w1,wzr,#0x18
71032edde0  bl 0x710392e290
71032edde4  cbnz x0,0x71032eddec
71032edde8  mov x0,xzr
71032eddec  strb wzr,[x0, #0x10]
71032eddf0  str x19,[x0, #0x8]
71032eddf4  ldr x8,[x19]
71032eddf8  str x8,[x0]
71032eddfc  str x0,[x8, #0x8]
71032ede00  str x0,[x19]
71032ede04  ldr x8,[x20]
71032ede08  add x8,x8,#0x1
71032ede0c  str x8,[x20]
71032ede10  ldr x0,[sp, #0x250]
71032ede14  mov x8,sp
71032ede18  add x8,x8,#0x230
71032ede1c  cmp x8,x0
71032ede20  b.eq 0x71032ede34
71032ede24  cbz x0,0x71032ede40
71032ede28  ldr x8,[x0]
71032ede2c  ldr x8,[x8, #0x28]
71032ede30  b 0x71032ede3c
71032ede34  ldr x8,[x0]
71032ede38  ldr x8,[x8, #0x20]
71032ede3c  blr x8
71032ede40  add sp,sp,#0xa30
71032ede44  ldp x29,x30,[sp, #0x30]
71032ede48  ldp x20,x19,[sp, #0x20]
71032ede4c  ldp x22,x21,[sp, #0x10]
71032ede50  ldp x28,x23,[sp], #0x40
71032ede54  ret
71032ede58  adrp x0,0x7105314000
71032ede5c  add x0,x0,#0x4d8
71032ede60  bl 0x71039c06b0
71032ede64  cbz w0,0x71032ed2a8
71032ede68  bl 0x7101764000
71032ede6c  adrp x0,0x7101763000
71032ede70  add x0,x0,#0xc40
71032ede74  adrp x1,0x71052c5000
71032ede78  add x1,x1,#0x180
71032ede7c  adrp x2,0x7104f17000
71032ede80  add x2,x2,#0x0
71032ede84  bl 0x71000001c0
71032ede88  adrp x0,0x7105314000
71032ede8c  add x0,x0,#0x4d8
71032ede90  bl 0x71039c06c0
71032ede94  b 0x71032ed2a8
71032ede98  adrp x0,0x7105314000
71032ede9c  add x0,x0,#0x4d8
71032edea0  bl 0x71039c06b0
71032edea4  cbz w0,0x71032ed894
71032edea8  bl 0x7101764000
71032edeac  adrp x0,0x7101763000
71032edeb0  add x0,x0,#0xc40
71032edeb4  adrp x1,0x71052c5000
71032edeb8  add x1,x1,#0x180
71032edebc  adrp x2,0x7104f17000
71032edec0  add x2,x2,#0x0
71032edec4  bl 0x71000001c0
71032edec8  adrp x0,0x7105314000
71032edecc  add x0,x0,#0x4d8
71032eded0  bl 0x71039c06c0
71032eded4  b 0x71032ed894
