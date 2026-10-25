// addr:      7101acd260
// offset:    0x1acd260
// name:      FUN_7101acd260
// mangled:   
// size:      1584

7101acd260  sub sp,sp,#0x90
7101acd264  str d8,[sp, #0x50]
7101acd268  stp x22,x21,[sp, #0x60]
7101acd26c  stp x20,x19,[sp, #0x70]
7101acd270  stp x29,x30,[sp, #0x80]
7101acd274  add x29,sp,#0x80
7101acd278  mov x19,x0
7101acd27c  ldr w8,[x0, #0xfc]
7101acd280  ldr x0,[x0, #0x128]
7101acd284  cbz w8,0x7101acd2fc
7101acd288  ldr x0,[x0, #0x8]
7101acd28c  mov x20,x1
7101acd290  cbz x0,0x7101acd2b4
7101acd294  adrp x1,0x710426f000
7101acd298  add x1,x1,#0xafb
7101acd29c  bl 0x71037964b0
7101acd2a0  cbz x0,0x7101acd2b4
7101acd2a4  ldr x8,[x0]
7101acd2a8  ldr x8,[x8, #0x138]
7101acd2ac  blr x8
7101acd2b0  tbz w0,#0x0,0x7101acd874
7101acd2b4  ldr x0,[x19, #0x140]
7101acd2b8  ldr x8,[x0]
7101acd2bc  ldr x8,[x8, #0x68]
7101acd2c0  blr x8
7101acd2c4  tbnz w0,#0x0,0x7101acd2dc
7101acd2c8  ldr x0,[x19, #0x140]
7101acd2cc  ldr x8,[x0]
7101acd2d0  ldr x8,[x8, #0x60]
7101acd2d4  mov w1,#0x1
7101acd2d8  blr x8
7101acd2dc  ldr x0,[x19, #0x140]
7101acd2e0  ldr w8,[x0, #0x25c]
7101acd2e4  cmp w8,#0x2
7101acd2e8  b.hi 0x7101acd4c8
7101acd2ec  ldr x9,[x19, #0x110]
7101acd2f0  str w8,[x9, #0x18]
7101acd2f4  ldr x0,[x19, #0x140]
7101acd2f8  b 0x7101acd4dc
7101acd2fc  fmov s8,0x3f800000
7101acd300  mov v0.16B,v8.16B
7101acd304  adrp x1,0x710426f000
7101acd308  add x1,x1,#0xafb
7101acd30c  add x21,x19,#0x120
7101acd310  bl 0x7103778300
7101acd314  ldr x0,[x19, #0x128]
7101acd318  mov v0.16B,v8.16B
7101acd31c  adrp x1,0x710425e000
7101acd320  add x1,x1,#0xe3e
7101acd324  bl 0x7103778300
7101acd328  add x0,x19,#0x258
7101acd32c  adrp x1,0x710426f000
7101acd330  add x1,x1,#0xb03
7101acd334  bl 0x710377a120
7101acd338  ldr x0,[x19, #0x140]
7101acd33c  ldr x8,[x0]
7101acd340  ldr x8,[x8, #0x70]
7101acd344  mov w1,#0x1
7101acd348  blr x8
7101acd34c  adrp x1,0x710434a000
7101acd350  add x1,x1,#0x97a
7101acd354  add x8,sp,#0x28
7101acd358  mov x0,x21
7101acd35c  bl 0x7103776640
7101acd360  adrp x1,0x710433a000
7101acd364  add x1,x1,#0x974
7101acd368  add x8,sp,#0x38
7101acd36c  add x0,sp,#0x28
7101acd370  bl 0x7103776910
7101acd374  ldr x20,[sp, #0x30]
7101acd378  adrp x22,0x710523d000
7101acd37c  add x22,x22,#0x988
7101acd380  stp x22,xzr,[sp, #0x28]
7101acd384  cbz x20,0x7101acd3a8
7101acd388  ldr x0,[x20, #0x18]
7101acd38c  adrp x8,0x710523d000
7101acd390  add x8,x8,#0x9a8
7101acd394  stp x8,xzr,[x20, #0x10]
7101acd398  cbz x0,0x7101acd3a0
7101acd39c  bl 0x710392eb40
7101acd3a0  mov x0,x20
7101acd3a4  bl 0x710392eb40
7101acd3a8  adrp x1,0x71043be000
7101acd3ac  add x1,x1,#0xc66
7101acd3b0  add x8,sp,#0x18
7101acd3b4  mov x0,x21
7101acd3b8  bl 0x7103776640
7101acd3bc  adrp x1,0x710433a000
7101acd3c0  add x1,x1,#0x974
7101acd3c4  add x8,sp,#0x28
7101acd3c8  add x0,sp,#0x18
7101acd3cc  bl 0x7103776910
7101acd3d0  ldr x20,[sp, #0x20]
7101acd3d4  stp x22,xzr,[sp, #0x18]
7101acd3d8  cbz x20,0x7101acd3fc
7101acd3dc  ldr x0,[x20, #0x18]
7101acd3e0  adrp x8,0x710523d000
7101acd3e4  add x8,x8,#0x9a8
7101acd3e8  stp x8,xzr,[x20, #0x10]
7101acd3ec  cbz x0,0x7101acd3f4
7101acd3f0  bl 0x710392eb40
7101acd3f4  mov x0,x20
7101acd3f8  bl 0x710392eb40
7101acd3fc  adrp x1,0x710426f000
7101acd400  add x1,x1,#0xb21
7101acd404  add x8,sp,#0x8
7101acd408  mov x0,x21
7101acd40c  add x20,x19,#0x140
7101acd410  bl 0x7103776640
7101acd414  adrp x1,0x710433a000
7101acd418  add x1,x1,#0x974
7101acd41c  add x8,sp,#0x18
7101acd420  add x0,sp,#0x8
7101acd424  bl 0x7103776910
7101acd428  ldr x21,[sp, #0x10]
7101acd42c  stp x22,xzr,[sp, #0x8]
7101acd430  cbz x21,0x7101acd454
7101acd434  ldr x0,[x21, #0x18]
7101acd438  adrp x8,0x710523d000
7101acd43c  add x8,x8,#0x9a8
7101acd440  stp x8,xzr,[x21, #0x10]
7101acd444  cbz x0,0x7101acd44c
7101acd448  bl 0x710392eb40
7101acd44c  mov x0,x21
7101acd450  bl 0x710392eb40
7101acd454  ldr x8,[x19, #0x110]
7101acd458  ldr w8,[x8, #0x18]
7101acd45c  cmp w8,#0x2
7101acd460  b.eq 0x7101acd608
7101acd464  cmp w8,#0x1
7101acd468  b.eq 0x7101acd5b8
7101acd46c  cbnz w8,0x7101acd660
7101acd470  ldr x8,[sp, #0x40]
7101acd474  ldr x8,[x8]
7101acd478  cbz x8,0x7101acd488
7101acd47c  ldrb w9,[x8, #0x58]
7101acd480  orr w9,w9,#0x1
7101acd484  strb w9,[x8, #0x58]
7101acd488  ldr x8,[sp, #0x30]
7101acd48c  ldr x8,[x8]
7101acd490  cbz x8,0x7101acd4a0
7101acd494  ldrb w9,[x8, #0x58]
7101acd498  and w9,w9,#0xfe
7101acd49c  strb w9,[x8, #0x58]
7101acd4a0  ldr x8,[sp, #0x20]
7101acd4a4  ldr x8,[x8]
7101acd4a8  cbz x8,0x7101acd4b8
7101acd4ac  ldrb w9,[x8, #0x58]
7101acd4b0  and w9,w9,#0xfe
7101acd4b4  strb w9,[x8, #0x58]
7101acd4b8  mov w2,#0x1
7101acd4bc  mov x0,x20
7101acd4c0  mov w1,wzr
7101acd4c4  b 0x7101acd65c
7101acd4c8  ldr x8,[x20, #0x8]
7101acd4cc  ldrb w9,[x8, #0x4aa]
7101acd4d0  cbz w9,0x7101acd55c
7101acd4d4  ldrb w8,[x8, #0x1ac]
7101acd4d8  tbz w8,#0x1,0x7101acd55c
7101acd4dc  ldr x8,[x0]
7101acd4e0  ldr x8,[x8, #0x70]
7101acd4e4  mov w1,wzr
7101acd4e8  blr x8
7101acd4ec  ldr x0,[x19, #0x140]
7101acd4f0  ldr x8,[x0]
7101acd4f4  ldr x8,[x8, #0x60]
7101acd4f8  mov w1,wzr
7101acd4fc  blr x8
7101acd500  fmov s8,0x3f800000
7101acd504  ldr x0,[x19, #0x128]
7101acd508  adrp x1,0x710439c000
7101acd50c  add x1,x1,#0xf4a
7101acd510  mov v0.16B,v8.16B
7101acd514  bl 0x7103778300
7101acd518  ldr x0,[x19, #0x128]
7101acd51c  mov v0.16B,v8.16B
7101acd520  adrp x1,0x71042d5000
7101acd524  add x1,x1,#0xdac
7101acd528  bl 0x7103778300
7101acd52c  ldr x0,[x19, #0x128]
7101acd530  mov v0.16B,v8.16B
7101acd534  adrp x1,0x7104318000
7101acd538  add x1,x1,#0xa09
7101acd53c  bl 0x7103778300
7101acd540  ldrsw x8,[x19, #0xf4]
7101acd544  cmp w8,#0x13
7101acd548  b.cs 0x7101acd88c
7101acd54c  add x8,x19,x8, LSL #0x2
7101acd550  mov w9,#0x2
7101acd554  str w9,[x8, #0xa8]
7101acd558  ldr x0,[x19, #0x140]
7101acd55c  ldr w9,[x19, #0x290]
7101acd560  ldr w8,[x0, #0x254]
7101acd564  cmp w9,w8
7101acd568  b.eq 0x7101acd874
7101acd56c  str w8,[x19, #0x290]
7101acd570  ldr w9,[x0, #0x254]
7101acd574  ldr d8,[sp, #0x50]
7101acd578  add x0,x19,#0x248
7101acd57c  ldp x29,x30,[sp, #0x80]
7101acd580  ldp x20,x19,[sp, #0x70]
7101acd584  adrp x8,0x71043ce000
7101acd588  add x8,x8,#0xf76
7101acd58c  ldp x22,x21,[sp, #0x60]
7101acd590  adrp x10,0x71043ad000
7101acd594  add x10,x10,#0x29f
7101acd598  adrp x11,0x71043df000
7101acd59c  add x11,x11,#0xbac
7101acd5a0  cmp w9,#0x1
7101acd5a4  csel x8,x10,x8,eq
7101acd5a8  cmp w9,#0x2
7101acd5ac  csel x1,x11,x8,eq
7101acd5b0  add sp,sp,#0x90
7101acd5b4  b 0x710377a120
7101acd5b8  ldr x8,[sp, #0x40]
7101acd5bc  ldr x8,[x8]
7101acd5c0  cbz x8,0x7101acd5d0
7101acd5c4  ldrb w9,[x8, #0x58]
7101acd5c8  and w9,w9,#0xfe
7101acd5cc  strb w9,[x8, #0x58]
7101acd5d0  ldr x8,[sp, #0x30]
7101acd5d4  ldr x8,[x8]
7101acd5d8  cbz x8,0x7101acd5e8
7101acd5dc  ldrb w9,[x8, #0x58]
7101acd5e0  orr w9,w9,#0x1
7101acd5e4  strb w9,[x8, #0x58]
7101acd5e8  ldr x8,[sp, #0x20]
7101acd5ec  ldr x8,[x8]
7101acd5f0  cbz x8,0x7101acd600
7101acd5f4  ldrb w9,[x8, #0x58]
7101acd5f8  and w9,w9,#0xfe
7101acd5fc  strb w9,[x8, #0x58]
7101acd600  mov w1,#0x1
7101acd604  b 0x7101acd654
7101acd608  ldr x8,[sp, #0x40]
7101acd60c  ldr x8,[x8]
7101acd610  cbz x8,0x7101acd620
7101acd614  ldrb w9,[x8, #0x58]
7101acd618  and w9,w9,#0xfe
7101acd61c  strb w9,[x8, #0x58]
7101acd620  ldr x8,[sp, #0x30]
7101acd624  ldr x8,[x8]
7101acd628  cbz x8,0x7101acd638
7101acd62c  ldrb w9,[x8, #0x58]
7101acd630  and w9,w9,#0xfe
7101acd634  strb w9,[x8, #0x58]
7101acd638  ldr x8,[sp, #0x20]
7101acd63c  ldr x8,[x8]
7101acd640  cbz x8,0x7101acd650
7101acd644  ldrb w9,[x8, #0x58]
7101acd648  orr w9,w9,#0x1
7101acd64c  strb w9,[x8, #0x58]
7101acd650  mov w1,#0x2
7101acd654  mov w2,#0x1
7101acd658  mov x0,x20
7101acd65c  bl 0x7103771a80
7101acd660  adrp x8,0x710532f000
7101acd664  ldr x8,[x8, #0x730]
7101acd668  ldr x8,[x8, #0x8]
7101acd66c  ldr x0,[x8, #0x198]
7101acd670  mov x1,#0x84fb
7101acd674  movk x1,#0x9739, LSL #16
7101acd678  movk x1,#0x13, LSL #32
7101acd67c  bl 0x71032821b0
7101acd680  mov x1,x0
7101acd684  ldr x0,[x19, #0x108]
7101acd688  bl 0x710323f760
7101acd68c  mov x20,x0
7101acd690  adrp x21,0x710523d000
7101acd694  add x21,x21,#0xa08
7101acd698  mov w0,#0x10
7101acd69c  mov w1,#0x10
7101acd6a0  str x21,[sp, #0x8]
7101acd6a4  bl 0x710392e290
7101acd6a8  cbnz x0,0x7101acd6f0
7101acd6ac  adrp x8,0x7105332000
7101acd6b0  ldr x0,[x8, #0xf00]
7101acd6b4  cbz x0,0x7101acd6ec
7101acd6b8  mov w8,#0x10
7101acd6bc  stur wzr,[x29, #-0x24]
7101acd6c0  sub x1,x29,#0x24
7101acd6c4  stur x8,[x29, #-0x38]
7101acd6c8  ldr x8,[x0]
7101acd6cc  ldr x8,[x8, #0x30]
7101acd6d0  sub x2,x29,#0x38
7101acd6d4  blr x8
7101acd6d8  tbz w0,#0x0,0x7101acd6ec
7101acd6dc  mov w0,#0x10
7101acd6e0  mov w1,#0x10
7101acd6e4  bl 0x710392e290
7101acd6e8  cbnz x0,0x7101acd6f0
7101acd6ec  mov x0,xzr
7101acd6f0  add x8,sp,#0x8
7101acd6f4  cmp x8,x20
7101acd6f8  stp xzr,xzr,[x0]
7101acd6fc  str x0,[sp, #0x10]
7101acd700  b.eq 0x7101acd768
7101acd704  ldr x8,[x20, #0x8]
7101acd708  ldp x9,x8,[x8]
7101acd70c  cbz x8,0x7101acd764
7101acd710  add x10,x8,#0x8
7101acd714  ldxr x11,[x10]
7101acd718  add x11,x11,#0x1
7101acd71c  stxr w12,x11,[x10]
7101acd720  cbnz w12,0x7101acd714
7101acd724  ldr x20,[x0, #0x8]
7101acd728  stp x9,x8,[x0]
7101acd72c  cbz x20,0x7101acd768
7101acd730  add x8,x20,#0x8
7101acd734  ldaxr x9,[x8]
7101acd738  sub x10,x9,#0x1
7101acd73c  stlxr w11,x10,[x8]
7101acd740  cbnz w11,0x7101acd734
7101acd744  cbnz x9,0x7101acd768
7101acd748  ldr x8,[x20]
7101acd74c  ldr x8,[x8, #0x10]
7101acd750  mov x0,x20
7101acd754  blr x8
7101acd758  mov x0,x20
7101acd75c  bl 0x71039c2670
7101acd760  b 0x7101acd768
7101acd764  stp x9,x8,[x0]
7101acd768  ldr x0,[x19, #0x270]
7101acd76c  add x1,sp,#0x8
7101acd770  bl 0x7103778b80
7101acd774  ldr x8,[x19, #0x140]
7101acd778  ldr w10,[x8, #0x254]
7101acd77c  str w10,[x19, #0x290]
7101acd780  ldr w8,[x8, #0x254]
7101acd784  adrp x9,0x71043ce000
7101acd788  add x9,x9,#0xf76
7101acd78c  adrp x11,0x71043ad000
7101acd790  add x11,x11,#0x29f
7101acd794  adrp x10,0x71043df000
7101acd798  add x10,x10,#0xbac
7101acd79c  cmp w8,#0x1
7101acd7a0  csel x9,x11,x9,eq
7101acd7a4  cmp w8,#0x2
7101acd7a8  csel x1,x10,x9,eq
7101acd7ac  add x0,x19,#0x248
7101acd7b0  bl 0x710377a120
7101acd7b4  ldr x19,[sp, #0x10]
7101acd7b8  stp x21,xzr,[sp, #0x8]
7101acd7bc  cbz x19,0x7101acd83c
7101acd7c0  ldr x20,[x19, #0x8]
7101acd7c4  stp xzr,xzr,[x19]
7101acd7c8  cbz x20,0x7101acd834
7101acd7cc  add x8,x20,#0x8
7101acd7d0  ldaxr x9,[x8]
7101acd7d4  sub x10,x9,#0x1
7101acd7d8  stlxr w11,x10,[x8]
7101acd7dc  cbnz w11,0x7101acd7d0
7101acd7e0  cbnz x9,0x7101acd7fc
7101acd7e4  ldr x8,[x20]
7101acd7e8  ldr x8,[x8, #0x10]
7101acd7ec  mov x0,x20
7101acd7f0  blr x8
7101acd7f4  mov x0,x20
7101acd7f8  bl 0x71039c2670
7101acd7fc  ldr x20,[x19, #0x8]
7101acd800  cbz x20,0x7101acd834
7101acd804  add x8,x20,#0x8
7101acd808  ldaxr x9,[x8]
7101acd80c  sub x10,x9,#0x1
7101acd810  stlxr w11,x10,[x8]
7101acd814  cbnz w11,0x7101acd808
7101acd818  cbnz x9,0x7101acd834
7101acd81c  ldr x8,[x20]
7101acd820  ldr x8,[x8, #0x10]
7101acd824  mov x0,x20
7101acd828  blr x8
7101acd82c  mov x0,x20
7101acd830  bl 0x71039c2670
7101acd834  mov x0,x19
7101acd838  bl 0x710392eb40
7101acd83c  ldr x0,[sp, #0x20]
7101acd840  adrp x19,0x710523d000
7101acd844  add x19,x19,#0x9a8
7101acd848  stp x19,xzr,[sp, #0x18]
7101acd84c  cbz x0,0x7101acd854
7101acd850  bl 0x710392eb40
7101acd854  ldr x0,[sp, #0x30]
7101acd858  stp x19,xzr,[sp, #0x28]
7101acd85c  cbz x0,0x7101acd864
7101acd860  bl 0x710392eb40
7101acd864  ldr x0,[sp, #0x40]
7101acd868  stp x19,xzr,[sp, #0x38]
7101acd86c  cbz x0,0x7101acd874
7101acd870  bl 0x710392eb40
7101acd874  ldr d8,[sp, #0x50]
7101acd878  ldp x29,x30,[sp, #0x80]
7101acd87c  ldp x20,x19,[sp, #0x70]
7101acd880  ldp x22,x21,[sp, #0x60]
7101acd884  add sp,sp,#0x90
7101acd888  ret
7101acd88c  bl 0x71039c2650
