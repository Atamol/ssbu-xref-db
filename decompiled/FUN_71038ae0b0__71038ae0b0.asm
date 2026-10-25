// addr:      71038ae0b0
// offset:    0x38ae0b0
// name:      FUN_71038ae0b0
// mangled:   
// size:      3748

71038ae0b0  stp x28,x27,[sp, #-0x60]!
71038ae0b4  stp x26,x25,[sp, #0x10]
71038ae0b8  stp x24,x23,[sp, #0x20]
71038ae0bc  stp x22,x21,[sp, #0x30]
71038ae0c0  stp x20,x19,[sp, #0x40]
71038ae0c4  stp x29,x30,[sp, #0x50]
71038ae0c8  add x29,sp,#0x50
71038ae0cc  sub sp,sp,#0x270
71038ae0d0  mov x20,x1
71038ae0d4  mov x28,x0
71038ae0d8  bl 0x71037c3a70
71038ae0dc  adrp x8,0x7105291000
71038ae0e0  add x8,x8,#0xae8
71038ae0e4  str x8,[x28]
71038ae0e8  mov x8,x28
71038ae0ec  mov x21,x28
71038ae0f0  mov x19,x28
71038ae0f4  str xzr,[x8, #0x18]!
71038ae0f8  str x8,[sp, #0x28]
71038ae0fc  adrp x8,0x7105233000
71038ae100  add x8,x8,#0xb78
71038ae104  str x8,[x28, #0x10]
71038ae108  adrp x8,0x7105231000
71038ae10c  add x8,x8,#0x730
71038ae110  stp xzr,xzr,[x28, #0x20]
71038ae114  str xzr,[x21, #0x38]!
71038ae118  str x8,[x28, #0x30]
71038ae11c  adrp x8,0x7104f62000
71038ae120  add x8,x8,#0x38
71038ae124  stp xzr,xzr,[x28, #0x40]
71038ae128  str xzr,[x19, #0x58]!
71038ae12c  str x8,[x28, #0x50]
71038ae130  add x8,x28,#0x88
71038ae134  str xzr,[x28, #0x3a0]
71038ae138  str xzr,[x28, #0x398]
71038ae13c  str xzr,[x28, #0x390]
71038ae140  str xzr,[x28, #0x388]
71038ae144  stp x8,xzr,[x28, #0x70]
71038ae148  mov w8,#0x10
71038ae14c  str x8,[x28, #0x80]
71038ae150  orr w8,wzr,#0x3f800000
71038ae154  str w8,[x28, #0x3a8]
71038ae158  stp xzr,xzr,[x28, #0x60]
71038ae15c  ldr x8,[x20, #0x10]
71038ae160  cbz x8,0x71038ae194
71038ae164  ldr x8,[x8]
71038ae168  ldr x9,[x20, #0x18]
71038ae16c  cmp x8,x9
71038ae170  b.ne 0x71038ae194
71038ae174  ldr x8,[x20, #0x8]
71038ae178  ldr x9,[sp, #0x28]
71038ae17c  str x8,[x9]
71038ae180  cbz x8,0x71038ae19c
71038ae184  ldr x8,[x8, #0x8]
71038ae188  str x8,[x28, #0x20]
71038ae18c  ldr x9,[x8]
71038ae190  b 0x71038ae1a8
71038ae194  ldr x8,[sp, #0x28]
71038ae198  str xzr,[x8]
71038ae19c  mov x8,xzr
71038ae1a0  mov x9,xzr
71038ae1a4  str xzr,[x28, #0x20]
71038ae1a8  str x9,[x28, #0x28]
71038ae1ac  str xzr,[x28, #0x78]
71038ae1b0  cbz x8,0x71038aeb64
71038ae1b4  ldr x8,[x8]
71038ae1b8  ldr x9,[x28, #0x28]
71038ae1bc  cmp x8,x9
71038ae1c0  b.ne 0x71038aeb64
71038ae1c4  stp x21,x19,[sp, #0x18]
71038ae1c8  add x8,x28,#0x70
71038ae1cc  str x8,[sp, #0x8]
71038ae1d0  ldr x8,[x28, #0x18]
71038ae1d4  mov x27,xzr
71038ae1d8  add x25,x28,#0x388
71038ae1dc  str x8,[sp, #0x30]
71038ae1e0  add x8,sp,#0x60
71038ae1e4  add x8,x8,#0x18
71038ae1e8  str x8,[sp, #0x10]
71038ae1ec  str x28,[sp, #0x58]
71038ae1f0  stp x8,xzr,[sp, #0x60]
71038ae1f4  mov w8,#0x40
71038ae1f8  str x8,[sp, #0x70]
71038ae1fc  add x8,x28,#0x398
71038ae200  str x8,[sp, #0x38]
71038ae204  ldr x8,[sp, #0x30]
71038ae208  add x8,x8,x27, LSL #0x5
71038ae20c  str xzr,[sp, #0x68]
71038ae210  ldr x9,[x8, #0x50]
71038ae214  cbz x9,0x71038aeb30
71038ae218  ldr x9,[x9]
71038ae21c  ldr x10,[x8, #0x58]
71038ae220  cmp x9,x10
71038ae224  b.ne 0x71038aeb30
71038ae228  ldr x21,[x8, #0x48]
71038ae22c  ldr x8,[sp, #0x28]
71038ae230  str x27,[sp, #0x40]
71038ae234  ldr x8,[x8]
71038ae238  ldr x8,[x8, #0x110]
71038ae23c  ldur x26,[x8, #-0x8]
71038ae240  ldr x8,[x26, #0x90]
71038ae244  sub x9,x8,#0x88
71038ae248  cmp x8,#0x0
71038ae24c  csel x20,xzr,x9,eq
71038ae250  cmp x26,x20
71038ae254  b.eq 0x71038ae4b8
71038ae258  mov x19,xzr
71038ae25c  add x22,x21,#0xa8
71038ae260  b 0x71038ae3b0
71038ae264  orr x9,xzr,#0x3fffffffffffffff
71038ae268  subs x9,x9,x8
71038ae26c  str x25,[sp, #0x50]
71038ae270  b.eq 0x71038aec48
71038ae274  cmp x8,#0x0
71038ae278  csinc x10,x8,xzr,ne
71038ae27c  add x8,x10,x8
71038ae280  cmp x9,x10
71038ae284  orr x9,xzr,#0x3fffffffffffffff
71038ae288  csel x25,x9,x8,cc
71038ae28c  lsr x8,x25,#0x3e
71038ae290  cbnz x8,0x71038aec88
71038ae294  lsl x8,x25,#0x2
71038ae298  cmp x8,#0x0
71038ae29c  csinc x27,x8,xzr,ne
71038ae2a0  mov w0,#0x10
71038ae2a4  mov x1,x27
71038ae2a8  bl 0x710392e290
71038ae2ac  mov x19,x0
71038ae2b0  cbnz x0,0x71038ae2f8
71038ae2b4  adrp x8,0x7105332000
71038ae2b8  ldr x0,[x8, #0xf00]
71038ae2bc  cbz x0,0x71038ae2f4
71038ae2c0  stur wzr,[x29, #-0x80]
71038ae2c4  stur x27,[x29, #-0xd8]
71038ae2c8  ldr x8,[x0]
71038ae2cc  ldr x8,[x8, #0x30]
71038ae2d0  sub x1,x29,#0x80
71038ae2d4  sub x2,x29,#0xd8
71038ae2d8  blr x8
71038ae2dc  tbz w0,#0x0,0x71038ae2f4
71038ae2e0  mov w0,#0x10
71038ae2e4  mov x1,x27
71038ae2e8  bl 0x710392e290
71038ae2ec  mov x19,x0
71038ae2f0  cbnz x0,0x71038ae2f8
71038ae2f4  mov x19,xzr
71038ae2f8  ldr x9,[sp, #0x60]
71038ae2fc  cbz x9,0x71038ae32c
71038ae300  str x25,[sp, #0x48]
71038ae304  subs x25,x23,x9
71038ae308  b.eq 0x71038ae33c
71038ae30c  mov x0,x19
71038ae310  mov x1,x9
71038ae314  mov x2,x25
71038ae318  mov x27,x9
71038ae31c  bl 0x71039c00a0
71038ae320  mov x9,x27
71038ae324  add x27,x19,x25
71038ae328  b 0x71038ae340
71038ae32c  ldr w8,[x24, #0x44]
71038ae330  mov x27,x19
71038ae334  str w8,[x27], #0x4
71038ae338  b 0x71038ae38c
71038ae33c  mov x27,x19
71038ae340  ldr w8,[x24, #0x44]
71038ae344  ldr x25,[sp, #0x48]
71038ae348  str w8,[x27], #0x4
71038ae34c  ldr x8,[sp, #0x68]
71038ae350  add x8,x9,x8, LSL #0x2
71038ae354  subs x24,x8,x23
71038ae358  b.eq 0x71038ae374
71038ae35c  mov x0,x27
71038ae360  mov x1,x23
71038ae364  mov x2,x24
71038ae368  bl 0x71039c00a0
71038ae36c  ldr x9,[sp, #0x60]
71038ae370  add x27,x27,x24
71038ae374  ldr x8,[sp, #0x10]
71038ae378  cmp x9,x8
71038ae37c  b.eq 0x71038ae38c
71038ae380  cbz x9,0x71038ae38c
71038ae384  mov x0,x9
71038ae388  bl 0x710392eb40
71038ae38c  sub x8,x27,x19
71038ae390  str x19,[sp, #0x60]
71038ae394  asr x19,x8,#0x2
71038ae398  stp x19,x25,[sp, #0x68]
71038ae39c  ldr x25,[sp, #0x50]
71038ae3a0  ldr x27,[sp, #0x40]
71038ae3a4  ldr x8,[x20, #0x98]!
71038ae3a8  cbnz x8,0x71038ae418
71038ae3ac  b 0x71038ae460
71038ae3b0  add x1,x20,#0x20
71038ae3b4  mov x0,x22
71038ae3b8  bl 0x71038af000
71038ae3bc  cbz x0,0x71038ae410
71038ae3c0  ldr x8,[sp, #0x60]
71038ae3c4  add x23,x8,x19, LSL #0x2
71038ae3c8  mov x24,x0
71038ae3cc  cbz x19,0x71038ae408
71038ae3d0  ldr w10,[x8]
71038ae3d4  ldr w9,[x24, #0x44]
71038ae3d8  cmp w10,w9
71038ae3dc  b.eq 0x71038ae408
71038ae3e0  lsl x10,x19,#0x2
71038ae3e4  sub x10,x10,#0x4
71038ae3e8  cbz x10,0x71038ae42c
71038ae3ec  add x11,x8,#0x4
71038ae3f0  ldr w8,[x8, #0x4]
71038ae3f4  sub x10,x10,#0x4
71038ae3f8  cmp w8,w9
71038ae3fc  mov x8,x11
71038ae400  b.ne 0x71038ae3e8
71038ae404  mov x8,x11
71038ae408  cmp x23,x8
71038ae40c  b.eq 0x71038ae438
71038ae410  ldr x8,[x20, #0x98]!
71038ae414  cbz x8,0x71038ae460
71038ae418  ldr x8,[x20]
71038ae41c  mov x20,x8
71038ae420  ldr x9,[x20, #0x8]!
71038ae424  cbnz x9,0x71038ae418
71038ae428  b 0x71038ae4a4
71038ae42c  mov x8,x23
71038ae430  cmp x23,x8
71038ae434  b.ne 0x71038ae410
71038ae438  ldr x8,[sp, #0x70]
71038ae43c  cmp x19,x8
71038ae440  b.cs 0x71038ae264
71038ae444  ldr w8,[x24, #0x44]
71038ae448  str w8,[x23]
71038ae44c  ldr x8,[sp, #0x68]
71038ae450  add x19,x8,#0x1
71038ae454  str x19,[sp, #0x68]
71038ae458  ldr x8,[x20, #0x98]!
71038ae45c  cbnz x8,0x71038ae418
71038ae460  sub x9,x20,#0x10
71038ae464  ldr x8,[x9]
71038ae468  and x8,x8,#-0x2
71038ae46c  ldr x10,[x8, #0x10]
71038ae470  cmp x10,x9
71038ae474  b.eq 0x71038ae480
71038ae478  mov x10,xzr
71038ae47c  b 0x71038ae49c
71038ae480  mov x9,x8
71038ae484  ldr x8,[x8]
71038ae488  and x8,x8,#-0x2
71038ae48c  ldr x10,[x8, #0x10]
71038ae490  cmp x9,x10
71038ae494  b.eq 0x71038ae480
71038ae498  ldr x10,[x9, #0x10]
71038ae49c  cmp x10,x8
71038ae4a0  csel x8,x9,x8,eq
71038ae4a4  sub x9,x8,#0x88
71038ae4a8  cmp x8,#0x0
71038ae4ac  csel x20,xzr,x9,eq
71038ae4b0  cmp x26,x20
71038ae4b4  b.ne 0x71038ae3b0
71038ae4b8  mov x8,#0xe995
71038ae4bc  movk x8,#0x5bd1, LSL #16
71038ae4c0  movk x8,#0xa793, LSL #32
71038ae4c4  movk x8,#0xc6a4, LSL #48
71038ae4c8  mul x8,x27,x8
71038ae4cc  eor x8,x8,x8, LSR #0x2f
71038ae4d0  mov x10,#0x90b9
71038ae4d4  movk x10,#0x286a, LSL #16
71038ae4d8  mov w9,#0x6b64
71038ae4dc  movk w9,#0xe654, LSL #16
71038ae4e0  movk x10,#0x8f4d, LSL #32
71038ae4e4  movk x10,#0x35a9, LSL #48
71038ae4e8  madd x8,x8,x10,x9
71038ae4ec  add x21,x21,#0xe0
71038ae4f0  str x8,[sp, #0x48]
71038ae4f4  b 0x71038ae508
71038ae4f8  ldr x8,[x22]
71038ae4fc  ldr x8,[x8, #0x8]
71038ae500  mov x0,x22
71038ae504  blr x8
71038ae508  ldr x21,[x21]
71038ae50c  cbz x21,0x71038aeb30
71038ae510  ldp x9,x10,[sp, #0x60]
71038ae514  ldr w24,[x21, #0x10]
71038ae518  add x8,x9,x10, LSL #0x2
71038ae51c  cbz x10,0x71038ae554
71038ae520  ldr w11,[x9]
71038ae524  cmp w11,w24
71038ae528  b.eq 0x71038ae554
71038ae52c  lsl x10,x10,#0x2
71038ae530  sub x10,x10,#0x4
71038ae534  cbz x10,0x71038ae7c0
71038ae538  add x11,x9,#0x4
71038ae53c  ldr w9,[x9, #0x4]
71038ae540  sub x10,x10,#0x4
71038ae544  cmp w9,w24
71038ae548  mov x9,x11
71038ae54c  b.ne 0x71038ae534
71038ae550  mov x9,x11
71038ae554  cmp x8,x9
71038ae558  b.eq 0x71038ae508
71038ae55c  sub x0,x29,#0x80
71038ae560  mov w1,#0x10
71038ae564  mov w2,#0xf28
71038ae568  bl 0x710392e1f0
71038ae56c  cmp w0,#0xc
71038ae570  b.ne 0x71038ae5ac
71038ae574  adrp x8,0x710593d000
71038ae578  ldr x0,[x8, #0x2b0]
71038ae57c  cbz x0,0x71038ae5ac
71038ae580  mov w8,#0xf28
71038ae584  stur x8,[x29, #-0xd8]
71038ae588  ldr x8,[x0]
71038ae58c  ldr x8,[x8, #0x30]
71038ae590  sub x1,x29,#0xd8
71038ae594  blr x8
71038ae598  tbz w0,#0x0,0x71038ae5ac
71038ae59c  sub x0,x29,#0x80
71038ae5a0  mov w1,#0x10
71038ae5a4  mov w2,#0xf28
71038ae5a8  bl 0x710392e1f0
71038ae5ac  adrp x8,0x71052a8000
71038ae5b0  ldr x8,[x8, #0xa78]
71038ae5b4  cbz x8,0x71038ae5c8
71038ae5b8  ldur x2,[x29, #-0x80]
71038ae5bc  mov w1,#0x10
71038ae5c0  mov w0,#0xf28
71038ae5c4  bl 0x71039c19e0
71038ae5c8  ldur x23,[x29, #-0x80]
71038ae5cc  mov x0,x23
71038ae5d0  bl 0x71037c3a70
71038ae5d4  orr w8,wzr,#0x3
71038ae5d8  str w8,[x23, #0x10]
71038ae5dc  adrp x8,0x7105243000
71038ae5e0  add x8,x8,#0x108
71038ae5e4  strb wzr,[x23, #0x14]
71038ae5e8  str xzr,[x23, #0xf18]
71038ae5ec  str x8,[x23]
71038ae5f0  str xzr,[x23, #0xf20]
71038ae5f4  cbz x23,0x71038ae604
71038ae5f8  ldr x19,[x23, #0x8]
71038ae5fc  ldr x20,[x19]
71038ae600  b 0x71038ae60c
71038ae604  mov x19,xzr
71038ae608  mov x20,xzr
71038ae60c  ldr x8,[x21, #0x38]
71038ae610  ldr w8,[x8, #0x20]
71038ae614  sturb wzr,[x29, #-0x83]
71038ae618  stp xzr,x8,[x29, #-0xd8]
71038ae61c  mov w8,#0x2
71038ae620  stur w8,[x29, #-0xc8]
71038ae624  sturb wzr,[x29, #-0xc4]
71038ae628  ldr x8,[x23]
71038ae62c  ldr x9,[x8, #0x10]
71038ae630  sub x8,x29,#0xe0
71038ae634  sub x1,x29,#0xd8
71038ae638  mov x0,x23
71038ae63c  blr x9
71038ae640  sub x0,x29,#0x60
71038ae644  mov w1,#0x10
71038ae648  orr w2,wzr,#0x70
71038ae64c  bl 0x710392e1f0
71038ae650  cmp w0,#0xc
71038ae654  b.ne 0x71038ae690
71038ae658  adrp x8,0x710593d000
71038ae65c  ldr x0,[x8, #0x2b0]
71038ae660  cbz x0,0x71038ae690
71038ae664  orr w8,wzr,#0x70
71038ae668  stur x8,[x29, #-0x80]
71038ae66c  ldr x8,[x0]
71038ae670  ldr x8,[x8, #0x30]
71038ae674  sub x1,x29,#0x80
71038ae678  blr x8
71038ae67c  tbz w0,#0x0,0x71038ae690
71038ae680  sub x0,x29,#0x60
71038ae684  mov w1,#0x10
71038ae688  orr w2,wzr,#0x70
71038ae68c  bl 0x710392e1f0
71038ae690  adrp x8,0x71052a8000
71038ae694  ldr x8,[x8, #0xa78]
71038ae698  cbz x8,0x71038ae6ac
71038ae69c  ldur x2,[x29, #-0x60]
71038ae6a0  orr w0,wzr,#0x70
71038ae6a4  mov w1,#0x10
71038ae6a8  bl 0x71039c19e0
71038ae6ac  ldur x22,[x29, #-0x60]
71038ae6b0  mov x0,x22
71038ae6b4  bl 0x71037c3a70
71038ae6b8  adrp x8,0x7105291000
71038ae6bc  add x8,x8,#0xa78
71038ae6c0  str x8,[x22]
71038ae6c4  adrp x8,0x710526e000
71038ae6c8  add x8,x8,#0xc58
71038ae6cc  stp x8,xzr,[x22, #0x10]
71038ae6d0  adrp x8,0x7105230000
71038ae6d4  add x8,x8,#0x2a0
71038ae6d8  stp xzr,xzr,[x22, #0x20]
71038ae6dc  stp xzr,xzr,[x22, #0x40]
71038ae6e0  stp x8,xzr,[x22, #0x30]
71038ae6e4  stp xzr,xzr,[x22, #0x60]
71038ae6e8  stp xzr,xzr,[x22, #0x50]
71038ae6ec  cbz x22,0x71038ae700
71038ae6f0  ldr x26,[x22, #0x8]
71038ae6f4  ldr x8,[x26]
71038ae6f8  str x8,[sp, #0x50]
71038ae6fc  b 0x71038ae708
71038ae700  mov x26,xzr
71038ae704  str xzr,[sp, #0x50]
71038ae708  ldr x8,[x23, #0x8]
71038ae70c  ldr x9,[x8]
71038ae710  str x9,[x22, #0x28]
71038ae714  stp x23,x8,[x22, #0x18]
71038ae718  ldr x8,[x23]
71038ae71c  ldr x9,[x8, #0x20]
71038ae720  sub x8,x29,#0x80
71038ae724  mov x0,x23
71038ae728  blr x9
71038ae72c  mov x0,x22
71038ae730  ldur x9,[x29, #-0x78]
71038ae734  ldr x8,[x0, #0x58]!
71038ae738  ldr x9,[x9, #0x1c8]
71038ae73c  ldr x10,[x0, #0x8]
71038ae740  sub x10,x10,x8
71038ae744  subs x1,x9,x10
71038ae748  b.ls 0x71038ae754
71038ae74c  bl 0x7103839640
71038ae750  b 0x71038ae760
71038ae754  b.cs 0x71038ae760
71038ae758  add x8,x8,x9
71038ae75c  str x8,[x22, #0x60]
71038ae760  mov x8,#0xe995
71038ae764  movk x8,#0x5bd1, LSL #16
71038ae768  movk x8,#0xa793, LSL #32
71038ae76c  movk x8,#0xc6a4, LSL #48
71038ae770  mov x9,x8
71038ae774  mul x8,x24,x8
71038ae778  eor x8,x8,x8, LSR #0x2f
71038ae77c  mul x8,x8,x9
71038ae780  ldr x10,[sp, #0x48]
71038ae784  eor x8,x8,x10
71038ae788  mov w10,#0x6b64
71038ae78c  movk w10,#0xe654, LSL #16
71038ae790  madd x19,x8,x9,x10
71038ae794  ldr x20,[x28, #0x390]
71038ae798  cbz x20,0x71038ae868
71038ae79c  sub x9,x20,#0x1
71038ae7a0  ands x10,x9,x20
71038ae7a4  b.eq 0x71038ae7d0
71038ae7a8  cmp x19,x20
71038ae7ac  mov x28,x19
71038ae7b0  b.cc 0x71038ae7d4
71038ae7b4  udiv x8,x19,x20
71038ae7b8  msub x28,x8,x20,x19
71038ae7bc  b 0x71038ae7d4
71038ae7c0  mov x9,x8
71038ae7c4  cmp x8,x9
71038ae7c8  b.ne 0x71038ae55c
71038ae7cc  b 0x71038ae508
71038ae7d0  and x28,x9,x19
71038ae7d4  ldr x8,[x25]
71038ae7d8  ldr x8,[x8, x28, LSL #0x3]
71038ae7dc  cbz x8,0x71038ae868
71038ae7e0  ldr x8,[x8]
71038ae7e4  cbz x8,0x71038ae868
71038ae7e8  cbz x10,0x71038ae834
71038ae7ec  ldr x9,[x8, #0x8]
71038ae7f0  cmp x9,x19
71038ae7f4  b.eq 0x71038ae810
71038ae7f8  cmp x9,x20
71038ae7fc  b.cc 0x71038ae808
71038ae800  udiv x10,x9,x20
71038ae804  msub x9,x10,x20,x9
71038ae808  cmp x9,x28
71038ae80c  b.ne 0x71038ae868
71038ae810  ldr w9,[x8, #0x10]
71038ae814  cmp x27,x9
71038ae818  b.ne 0x71038ae828
71038ae81c  ldr w9,[x8, #0x14]
71038ae820  cmp w9,w24
71038ae824  b.eq 0x71038aeb24
71038ae828  ldr x8,[x8]
71038ae82c  cbnz x8,0x71038ae7ec
71038ae830  b 0x71038ae868
71038ae834  ldr x10,[x8, #0x8]
71038ae838  and x11,x10,x9
71038ae83c  cmp x10,x19
71038ae840  ccmp x11,x28,#0x4,ne
71038ae844  b.ne 0x71038ae868
71038ae848  ldr w10,[x8, #0x10]
71038ae84c  cmp x27,x10
71038ae850  b.ne 0x71038ae860
71038ae854  ldr w10,[x8, #0x14]
71038ae858  cmp w10,w24
71038ae85c  b.eq 0x71038aeb24
71038ae860  ldr x8,[x8]
71038ae864  cbnz x8,0x71038ae834
71038ae868  sub x0,x29,#0x60
71038ae86c  mov w1,#0x10
71038ae870  orr w2,wzr,#0x38
71038ae874  bl 0x710392e1f0
71038ae878  cmp w0,#0xc
71038ae87c  b.ne 0x71038ae8b8
71038ae880  adrp x8,0x710593d000
71038ae884  ldr x0,[x8, #0x2b0]
71038ae888  cbz x0,0x71038ae8b8
71038ae88c  orr w8,wzr,#0x38
71038ae890  stur x8,[x29, #-0x80]
71038ae894  ldr x8,[x0]
71038ae898  ldr x8,[x8, #0x30]
71038ae89c  sub x1,x29,#0x80
71038ae8a0  blr x8
71038ae8a4  tbz w0,#0x0,0x71038ae8b8
71038ae8a8  sub x0,x29,#0x60
71038ae8ac  mov w1,#0x10
71038ae8b0  orr w2,wzr,#0x38
71038ae8b4  bl 0x710392e1f0
71038ae8b8  adrp x8,0x71052a8000
71038ae8bc  ldr x8,[x8, #0xa78]
71038ae8c0  cbz x8,0x71038ae8d4
71038ae8c4  ldur x2,[x29, #-0x60]
71038ae8c8  orr w0,wzr,#0x38
71038ae8cc  mov w1,#0x10
71038ae8d0  bl 0x71039c19e0
71038ae8d4  ldur x23,[x29, #-0x60]
71038ae8d8  orr x8,x27,x24, LSL #0x20
71038ae8dc  mov x27,x23
71038ae8e0  str x8,[x23, #0x10]
71038ae8e4  adrp x8,0x7105291000
71038ae8e8  add x8,x8,#0xb08
71038ae8ec  str xzr,[x27, #0x20]!
71038ae8f0  stp xzr,xzr,[x23, #0x28]
71038ae8f4  str x8,[x23, #0x18]
71038ae8f8  cbz x26,0x71038ae93c
71038ae8fc  ldr x8,[x26]
71038ae900  ldr x9,[sp, #0x50]
71038ae904  cmp x8,x9
71038ae908  b.ne 0x71038ae93c
71038ae90c  str x22,[x27]
71038ae910  cbz x22,0x71038ae924
71038ae914  ldr x8,[x22, #0x8]
71038ae918  str x8,[x23, #0x28]
71038ae91c  ldr x8,[x8]
71038ae920  b 0x71038ae92c
71038ae924  mov x8,xzr
71038ae928  str xzr,[x23, #0x28]
71038ae92c  mov x26,xzr
71038ae930  mov x22,xzr
71038ae934  str xzr,[sp, #0x50]
71038ae938  str x8,[x23, #0x30]
71038ae93c  stp xzr,x19,[x23]
71038ae940  ldr x9,[sp, #0x58]
71038ae944  ldr x8,[x9, #0x3a0]
71038ae948  add x8,x8,#0x1
71038ae94c  ldr s1,[x9, #0x3a8]
71038ae950  ucvtf s0,x8
71038ae954  cbz x20,0x71038ae968
71038ae958  ucvtf s2,x20
71038ae95c  fmul s2,s1,s2
71038ae960  fcmp s2,s0
71038ae964  b.pl 0x71038aea84
71038ae968  lsl x8,x20,#0x1
71038ae96c  cmp x20,#0x3
71038ae970  b.cc 0x71038ae984
71038ae974  sub x9,x20,#0x1
71038ae978  tst x9,x20
71038ae97c  cset w9,ne
71038ae980  b 0x71038ae988
71038ae984  mov w9,#0x1
71038ae988  fdiv s0,s0,s1
71038ae98c  orr x8,x9,x8
71038ae990  ldr x28,[sp, #0x58]
71038ae994  fcvtpu x9,s0
71038ae998  cmp x8,x9
71038ae99c  csel x24,x9,x8,cc
71038ae9a0  subs x8,x24,#0x1
71038ae9a4  b.ne 0x71038ae9b0
71038ae9a8  mov w24,#0x2
71038ae9ac  b 0x71038ae9c4
71038ae9b0  tst x8,x24
71038ae9b4  b.eq 0x71038ae9c4
71038ae9b8  mov x0,x24
71038ae9bc  bl 0x71039c26e0
71038ae9c0  mov x24,x0
71038ae9c4  ldr x20,[x28, #0x390]
71038ae9c8  cmp x24,x20
71038ae9cc  b.ls 0x71038ae9e0
71038ae9d0  mov x0,x25
71038ae9d4  mov x1,x24
71038ae9d8  bl 0x71038af1f0
71038ae9dc  b 0x71038aea54
71038ae9e0  b.cs 0x71038aea54
71038ae9e4  cmp x20,#0x3
71038ae9e8  b.cc 0x71038ae9fc
71038ae9ec  sub x8,x20,#0x1
71038ae9f0  tst x8,x20
71038ae9f4  cset w8,eq
71038ae9f8  b 0x71038aea00
71038ae9fc  mov w8,wzr
71038aea00  ldr x9,[x28, #0x3a0]
71038aea04  ucvtf s0,x9
71038aea08  ldr s1,[x28, #0x3a8]
71038aea0c  fdiv s0,s0,s1
71038aea10  fcvtpu x0,s0
71038aea14  cbz w8,0x71038aea38
71038aea18  sub x8,x0,#0x1
71038aea1c  clz x8,x8
71038aea20  neg x8,x8
71038aea24  mov w9,#0x1
71038aea28  lsl x8,x9,x8
71038aea2c  cmp x0,#0x2
71038aea30  csel x0,x0,x8,cc
71038aea34  b 0x71038aea3c
71038aea38  bl 0x71039c26e0
71038aea3c  cmp x24,x0
71038aea40  csel x1,x0,x24,cc
71038aea44  cmp x1,x20
71038aea48  b.cs 0x71038aea54
71038aea4c  mov x0,x25
71038aea50  bl 0x71038af1f0
71038aea54  ldr x20,[x28, #0x390]
71038aea58  sub x8,x20,#0x1
71038aea5c  tst x8,x20
71038aea60  b.eq 0x71038aea74
71038aea64  cmp x19,x20
71038aea68  b.cs 0x71038aea7c
71038aea6c  mov x28,x19
71038aea70  b 0x71038aea84
71038aea74  and x28,x8,x19
71038aea78  b 0x71038aea84
71038aea7c  udiv x8,x19,x20
71038aea80  msub x28,x8,x20,x19
71038aea84  ldr x8,[x25]
71038aea88  ldr x8,[x8, x28, LSL #0x3]
71038aea8c  cbz x8,0x71038aeaa4
71038aea90  ldr x9,[x8]
71038aea94  ldr x28,[sp, #0x58]
71038aea98  str x9,[x23]
71038aea9c  ldr x27,[sp, #0x40]
71038aeaa0  b 0x71038aeaf8
71038aeaa4  ldp x9,x27,[sp, #0x38]
71038aeaa8  ldr x8,[x9]
71038aeaac  str x8,[x23]
71038aeab0  str x23,[x9]
71038aeab4  ldr x8,[x25]
71038aeab8  str x9,[x8, x28, LSL #0x3]
71038aeabc  ldr x8,[x23]
71038aeac0  ldr x28,[sp, #0x58]
71038aeac4  cbz x8,0x71038aeafc
71038aeac8  ldr x8,[x8, #0x8]
71038aeacc  sub x9,x20,#0x1
71038aead0  tst x9,x20
71038aead4  b.eq 0x71038aeaec
71038aead8  cmp x8,x20
71038aeadc  b.cc 0x71038aeaf0
71038aeae0  udiv x9,x8,x20
71038aeae4  msub x8,x9,x20,x8
71038aeae8  b 0x71038aeaf0
71038aeaec  and x8,x8,x9
71038aeaf0  ldr x9,[x25]
71038aeaf4  add x8,x9,x8, LSL #0x3
71038aeaf8  str x23,[x8]
71038aeafc  ldr x8,[x28, #0x3a0]
71038aeb00  add x8,x8,#0x1
71038aeb04  str x8,[x28, #0x3a0]
71038aeb08  cbz x26,0x71038ae508
71038aeb0c  cbz x22,0x71038ae508
71038aeb10  ldr x8,[x26]
71038aeb14  ldr x9,[sp, #0x50]
71038aeb18  cmp x8,x9
71038aeb1c  b.eq 0x71038ae4f8
71038aeb20  b 0x71038ae508
71038aeb24  ldr x28,[sp, #0x58]
71038aeb28  cbnz x26,0x71038aeb0c
71038aeb2c  b 0x71038ae508
71038aeb30  add x27,x27,#0x1
71038aeb34  cmp x27,#0x6
71038aeb38  b.cc 0x71038ae204
71038aeb3c  ldr x8,[sp, #0x70]
71038aeb40  cbz x8,0x71038aeb60
71038aeb44  ldr x0,[sp, #0x60]
71038aeb48  add x8,sp,#0x60
71038aeb4c  add x8,x8,#0x18
71038aeb50  cmp x0,x8
71038aeb54  b.eq 0x71038aeb60
71038aeb58  cbz x0,0x71038aeb60
71038aeb5c  bl 0x710392eb40
71038aeb60  ldp x21,x19,[sp, #0x18]
71038aeb64  add x0,sp,#0x60
71038aeb68  mov w1,wzr
71038aeb6c  bl 0x71037ef770
71038aeb70  sub x0,x29,#0xd8
71038aeb74  add x1,sp,#0x60
71038aeb78  bl 0x710359b630
71038aeb7c  ldur x8,[x29, #-0xc8]
71038aeb80  cbz x8,0x71038aebb0
71038aeb84  ldr x8,[x8]
71038aeb88  ldur x9,[x29, #-0xc0]
71038aeb8c  cmp x8,x9
71038aeb90  b.ne 0x71038aebb0
71038aeb94  ldur x8,[x29, #-0xd0]
71038aeb98  str x8,[x21]
71038aeb9c  cbz x8,0x71038aebb4
71038aeba0  ldr x8,[x8, #0x8]
71038aeba4  str x8,[x28, #0x40]
71038aeba8  ldr x8,[x8]
71038aebac  b 0x71038aebbc
71038aebb0  str xzr,[x21]
71038aebb4  mov x8,xzr
71038aebb8  str xzr,[x28, #0x40]
71038aebbc  str x8,[x28, #0x48]
71038aebc0  mov w8,#0x1
71038aebc4  sub x0,x29,#0xd8
71038aebc8  stp x8,xzr,[x29, #-0x80]
71038aebcc  mov x8,#0x100000000
71038aebd0  movk x8,#0x100, LSL #48
71038aebd4  sub x1,x29,#0x80
71038aebd8  sturb wzr,[x29, #-0x68]
71038aebdc  stur x8,[x29, #-0x70]
71038aebe0  bl 0x7103590cf0
71038aebe4  ldur x8,[x29, #-0xc8]
71038aebe8  cbz x8,0x71038aec18
71038aebec  ldr x8,[x8]
71038aebf0  ldur x9,[x29, #-0xc0]
71038aebf4  cmp x8,x9
71038aebf8  b.ne 0x71038aec18
71038aebfc  ldur x8,[x29, #-0xd0]
71038aec00  str x8,[x19]
71038aec04  cbz x8,0x71038aec1c
71038aec08  ldr x8,[x8, #0x8]
71038aec0c  str x8,[x28, #0x60]
71038aec10  ldr x8,[x8]
71038aec14  b 0x71038aec24
71038aec18  str xzr,[x19]
71038aec1c  mov x8,xzr
71038aec20  str xzr,[x28, #0x60]
71038aec24  str x8,[x28, #0x68]
71038aec28  add sp,sp,#0x270
71038aec2c  ldp x29,x30,[sp, #0x50]
71038aec30  ldp x20,x19,[sp, #0x40]
71038aec34  ldp x22,x21,[sp, #0x30]
71038aec38  ldp x24,x23,[sp, #0x20]
71038aec3c  ldp x26,x25,[sp, #0x10]
71038aec40  ldp x28,x27,[sp], #0x60
71038aec44  ret
71038aec48  mov w0,#0x10
71038aec4c  bl 0x71039c6c40
71038aec50  mov x22,x0
71038aec54  adrp x1,0x7104359000
71038aec58  add x1,x1,#0xf68
71038aec5c  bl 0x71039c5f10
71038aec60  adrp x8,0x71052a8000
71038aec64  ldr x8,[x8, #0xbc0]
71038aec68  add x8,x8,#0x10
71038aec6c  str x8,[x22]
71038aec70  adrp x1,0x71052a8000
71038aec74  adrp x2,0x71052a8000
71038aec78  ldr x1,[x1, #0xbc8]
71038aec7c  ldr x2,[x2, #0xbd0]
71038aec80  mov x0,x22
71038aec84  bl 0x71039c6c50
71038aec88  mov w0,#0x8
71038aec8c  bl 0x71039c6c40
71038aec90  mov x21,x0
71038aec94  bl 0x71039c8050
71038aec98  adrp x1,0x71052a8000
71038aec9c  adrp x2,0x71052a8000
71038aeca0  ldr x1,[x1, #0xb68]
71038aeca4  ldr x2,[x2, #0xb70]
71038aeca8  mov x0,x21
71038aecac  bl 0x71039c6c50
71038aecb0  mov x21,x0
71038aecb4  b 0x71038aecc4
71038aecb8  mov x21,x0
71038aecbc  mov x0,x22
71038aecc0  bl 0x71039c6c60
71038aecc4  ldp x25,x28,[sp, #0x50]
71038aecc8  ldr x23,[sp, #0x8]
71038aeccc  ldr x8,[sp, #0x70]
71038aecd0  cbnz x8,0x71038aedf0
71038aecd4  b 0x71038aee0c
71038aecd8  b 0x71038aef18
71038aecdc  adrp x8,0x7105291000
71038aece0  add x8,x8,#0xb08
71038aece4  str x8,[x23, #0x18]
71038aece8  ldr x8,[x23, #0x28]
71038aecec  mov x21,x0
71038aecf0  cbz x8,0x71038aed18
71038aecf4  ldr x8,[x8]
71038aecf8  ldr x9,[x23, #0x30]
71038aecfc  cmp x8,x9
71038aed00  b.ne 0x71038aed18
71038aed04  ldr x0,[x27]
71038aed08  cbz x0,0x71038aed18
71038aed0c  ldr x8,[x0]
71038aed10  ldr x8,[x8, #0x8]
71038aed14  blr x8
71038aed18  adrp x8,0x71052a8000
71038aed1c  ldr x8,[x8, #0xa70]
71038aed20  cbz x8,0x71038aed2c
71038aed24  mov x0,x23
71038aed28  bl 0x71039c19b0
71038aed2c  mov x0,x23
71038aed30  bl 0x710392eb40
71038aed34  b 0x71038aed40
71038aed38  bl 0x71037b2bc0
71038aed3c  mov x21,x0
71038aed40  ldr x28,[sp, #0x58]
71038aed44  ldr x23,[sp, #0x8]
71038aed48  cbnz x26,0x71038aef24
71038aed4c  b 0x71038aede8
71038aed50  mov x21,x0
71038aed54  cbnz x19,0x71038aedc0
71038aed58  b 0x71038aede0
71038aed5c  mov x21,x0
71038aed60  b 0x71038aede4
71038aed64  adrp x8,0x71052a8000
71038aed68  ldr x8,[x8, #0xa70]
71038aed6c  mov x21,x0
71038aed70  cbz x8,0x71038aed7c
71038aed74  mov x0,x23
71038aed78  bl 0x71039c19b0
71038aed7c  mov x0,x23
71038aed80  bl 0x710392eb40
71038aed84  b 0x71038aede0
71038aed88  bl 0x71037b2bc0
71038aed8c  adrp x8,0x71052a8000
71038aed90  ldr x8,[x8, #0xa70]
71038aed94  mov x21,x0
71038aed98  cbz x8,0x71038aeda4
71038aed9c  mov x0,x22
71038aeda0  bl 0x71039c19b0
71038aeda4  mov x0,x22
71038aeda8  bl 0x710392eb40
71038aedac  cbnz x19,0x71038aedc0
71038aedb0  b 0x71038aede0
71038aedb4  bl 0x71037b2bc0
71038aedb8  mov x21,x0
71038aedbc  cbz x19,0x71038aede0
71038aedc0  cbz x23,0x71038aede0
71038aedc4  ldr x8,[x19]
71038aedc8  cmp x8,x20
71038aedcc  b.ne 0x71038aede0
71038aedd0  ldr x8,[x23]
71038aedd4  ldr x8,[x8, #0x8]
71038aedd8  mov x0,x23
71038aeddc  blr x8
71038aede0  ldr x28,[sp, #0x58]
71038aede4  ldr x23,[sp, #0x8]
71038aede8  ldr x8,[sp, #0x70]
71038aedec  cbz x8,0x71038aee0c
71038aedf0  ldr x0,[sp, #0x60]
71038aedf4  add x8,sp,#0x60
71038aedf8  add x8,x8,#0x18
71038aedfc  cmp x0,x8
71038aee00  b.eq 0x71038aee0c
71038aee04  cbz x0,0x71038aee0c
71038aee08  bl 0x710392eb40
71038aee0c  adrp x19,0x71052a8000
71038aee10  ldr x22,[x28, #0x398]
71038aee14  ldr x19,[x19, #0xa70]
71038aee18  cbz x22,0x71038aee74
71038aee1c  adrp x8,0x7105291000
71038aee20  add x8,x8,#0xb08
71038aee24  ldr x20,[x22]
71038aee28  str x8,[x22, #0x18]
71038aee2c  ldr x8,[x22, #0x28]
71038aee30  cbz x8,0x71038aee58
71038aee34  ldr x8,[x8]
71038aee38  ldr x9,[x22, #0x30]
71038aee3c  cmp x8,x9
71038aee40  b.ne 0x71038aee58
71038aee44  ldr x0,[x22, #0x20]
71038aee48  cbz x0,0x71038aee58
71038aee4c  ldr x8,[x0]
71038aee50  ldr x8,[x8, #0x8]
71038aee54  blr x8
71038aee58  cbz x19,0x71038aee64
71038aee5c  mov x0,x22
71038aee60  bl 0x71039c19b0
71038aee64  mov x0,x22
71038aee68  bl 0x710392eb40
71038aee6c  mov x22,x20
71038aee70  cbnz x22,0x71038aee1c
71038aee74  ldr x22,[x25]
71038aee78  str xzr,[x25]
71038aee7c  cbz x22,0x71038aee94
71038aee80  cbz x19,0x71038aee8c
71038aee84  mov x0,x22
71038aee88  bl 0x71039c19b0
71038aee8c  mov x0,x22
71038aee90  bl 0x710392eb40
71038aee94  ldr x22,[x28, #0x78]
71038aee98  cbz x22,0x71038aeec0
71038aee9c  ldr x8,[x23]
71038aeea0  add x20,x8,#0x10
71038aeea4  ldur w8,[x20, #-0x8]
71038aeea8  eor w0,w8,w8, ASR #0x1f
71038aeeac  mov x1,x20
71038aeeb0  bl 0x7103599010
71038aeeb4  subs x22,x22,#0x1
71038aeeb8  add x20,x20,#0x30
71038aeebc  b.ne 0x71038aeea4
71038aeec0  ldr x8,[x28, #0x80]
71038aeec4  cbz x8,0x71038aeee8
71038aeec8  ldr x20,[x23], #0x18
71038aeecc  cmp x20,x23
71038aeed0  b.eq 0x71038aeee8
71038aeed4  cbz x19,0x71038aeee0
71038aeed8  mov x0,x20
71038aeedc  bl 0x71039c19b0
71038aeee0  mov x0,x20
71038aeee4  bl 0x710392eb40
71038aeee8  adrp x8,0x7105241000
71038aeeec  add x8,x8,#0xa68
71038aeef0  str x8,[x28]
71038aeef4  bl 0x71037c3c30
71038aeef8  ldr x1,[x28, #0x8]
71038aeefc  bl 0x71037c4080
71038aef00  mov x0,x21
71038aef04  bl 0x71039c19f0
71038aef08  bl 0x71037b2bc0
71038aef0c  bl 0x71037b2bc0
71038aef10  bl 0x71037b2bc0
71038aef14  bl 0x71037b2bc0
71038aef18  mov x21,x0
71038aef1c  ldr x23,[sp, #0x8]
71038aef20  cbz x26,0x71038aede8
71038aef24  cbz x22,0x71038aede8
71038aef28  ldr x8,[x26]
71038aef2c  ldr x9,[sp, #0x50]
71038aef30  cmp x8,x9
71038aef34  b.ne 0x71038aede8
71038aef38  ldr x8,[x22]
71038aef3c  ldr x8,[x8, #0x8]
71038aef40  mov x0,x22
71038aef44  blr x8
71038aef48  ldr x8,[sp, #0x70]
71038aef4c  cbnz x8,0x71038aedf0
71038aef50  b 0x71038aee0c
