// addr:      7101aeb140
// offset:    0x1aeb140
// name:      FUN_7101aeb140
// mangled:   
// size:      13384

7101aeb140  stp x28,x27,[sp, #-0x60]!
7101aeb144  stp x26,x25,[sp, #0x10]
7101aeb148  stp x24,x23,[sp, #0x20]
7101aeb14c  stp x22,x21,[sp, #0x30]
7101aeb150  stp x20,x19,[sp, #0x40]
7101aeb154  stp x29,x30,[sp, #0x50]
7101aeb158  add x29,sp,#0x50
7101aeb15c  sub sp,sp,#0x2b0
7101aeb160  mov x25,x1
7101aeb164  mov x28,x0
7101aeb168  mov w1,#0x19d0
7101aeb16c  mov w0,#0x10
7101aeb170  mov x22,x3
7101aeb174  mov x23,x2
7101aeb178  bl 0x710392e290
7101aeb17c  mov x21,x0
7101aeb180  cbnz x0,0x7101aeb1cc
7101aeb184  adrp x8,0x7105332000
7101aeb188  ldr x0,[x8, #0xf00]
7101aeb18c  cbz x0,0x7101aeb1c8
7101aeb190  mov w8,#0x19d0
7101aeb194  str wzr,[sp, #0x10]
7101aeb198  add x1,sp,#0x10
7101aeb19c  str x8,[sp, #0x140]
7101aeb1a0  ldr x8,[x0]
7101aeb1a4  ldr x8,[x8, #0x30]
7101aeb1a8  add x2,sp,#0x140
7101aeb1ac  blr x8
7101aeb1b0  tbz w0,#0x0,0x7101aeb1c8
7101aeb1b4  mov w1,#0x19d0
7101aeb1b8  mov w0,#0x10
7101aeb1bc  bl 0x710392e290
7101aeb1c0  mov x21,x0
7101aeb1c4  cbnz x0,0x7101aeb1cc
7101aeb1c8  mov x21,xzr
7101aeb1cc  mov w8,#0xffffffff
7101aeb1d0  add x0,x21,#0x120
7101aeb1d4  strb wzr,[x21, #0x104]
7101aeb1d8  stp xzr,xzr,[x21, #0x10]
7101aeb1dc  str w8,[x21, #0x100]
7101aeb1e0  strb wzr,[x21, #0x108]
7101aeb1e4  stp x21,xzr,[x21]
7101aeb1e8  stp xzr,x8,[x21, #0xf0]
7101aeb1ec  stp xzr,xzr,[x21, #0xe0]
7101aeb1f0  stp xzr,xzr,[x21, #0xd0]
7101aeb1f4  stp xzr,xzr,[x21, #0xc0]
7101aeb1f8  stp xzr,xzr,[x21, #0xb0]
7101aeb1fc  stp xzr,xzr,[x21, #0xa0]
7101aeb200  stp xzr,xzr,[x21, #0x90]
7101aeb204  stp xzr,xzr,[x21, #0x80]
7101aeb208  stp xzr,xzr,[x21, #0x70]
7101aeb20c  stp xzr,xzr,[x21, #0x60]
7101aeb210  stp xzr,xzr,[x21, #0x50]
7101aeb214  stp xzr,xzr,[x21, #0x40]
7101aeb218  stp xzr,xzr,[x21, #0x30]
7101aeb21c  stp xzr,xzr,[x21, #0x20]
7101aeb220  stp xzr,xzr,[x21, #0x110]
7101aeb224  bl 0x7103776290
7101aeb228  adrp x27,0x710523d000
7101aeb22c  add x27,x27,#0x9a8
7101aeb230  mov w0,#0x10
7101aeb234  mov w1,#0x20
7101aeb238  stp xzr,xzr,[x21, #0x1c8]
7101aeb23c  stp xzr,xzr,[x21, #0x1b8]
7101aeb240  str xzr,[x21, #0x130]
7101aeb244  stp xzr,xzr,[x21, #0x1a8]
7101aeb248  stp xzr,xzr,[x21, #0x198]
7101aeb24c  stp xzr,xzr,[x21, #0x188]
7101aeb250  stp xzr,xzr,[x21, #0x178]
7101aeb254  str x27,[x21, #0x178]
7101aeb258  stp xzr,xzr,[x21, #0x168]
7101aeb25c  stp xzr,xzr,[x21, #0x158]
7101aeb260  stp xzr,xzr,[x21, #0x148]
7101aeb264  stp xzr,xzr,[x21, #0x138]
7101aeb268  bl 0x710392e290
7101aeb26c  cbnz x0,0x7101aeb2b4
7101aeb270  adrp x8,0x7105332000
7101aeb274  ldr x0,[x8, #0xf00]
7101aeb278  cbz x0,0x7101aeb2b0
7101aeb27c  mov w8,#0x20
7101aeb280  str wzr,[sp, #0x10]
7101aeb284  add x1,sp,#0x10
7101aeb288  str x8,[sp, #0x140]
7101aeb28c  ldr x8,[x0]
7101aeb290  ldr x8,[x8, #0x30]
7101aeb294  add x2,sp,#0x140
7101aeb298  blr x8
7101aeb29c  tbz w0,#0x0,0x7101aeb2b0
7101aeb2a0  mov w0,#0x10
7101aeb2a4  mov w1,#0x20
7101aeb2a8  bl 0x710392e290
7101aeb2ac  cbnz x0,0x7101aeb2b4
7101aeb2b0  mov x0,xzr
7101aeb2b4  stp xzr,xzr,[x0, #0x10]
7101aeb2b8  mov w1,#0x20
7101aeb2bc  stp xzr,xzr,[x0]
7101aeb2c0  stp x0,x27,[x21, #0x180]
7101aeb2c4  mov w0,#0x10
7101aeb2c8  bl 0x710392e290
7101aeb2cc  cbnz x0,0x7101aeb314
7101aeb2d0  adrp x8,0x7105332000
7101aeb2d4  ldr x0,[x8, #0xf00]
7101aeb2d8  cbz x0,0x7101aeb310
7101aeb2dc  mov w8,#0x20
7101aeb2e0  str wzr,[sp, #0x10]
7101aeb2e4  add x1,sp,#0x10
7101aeb2e8  str x8,[sp, #0x140]
7101aeb2ec  ldr x8,[x0]
7101aeb2f0  ldr x8,[x8, #0x30]
7101aeb2f4  add x2,sp,#0x140
7101aeb2f8  blr x8
7101aeb2fc  tbz w0,#0x0,0x7101aeb310
7101aeb300  mov w0,#0x10
7101aeb304  mov w1,#0x20
7101aeb308  bl 0x710392e290
7101aeb30c  cbnz x0,0x7101aeb314
7101aeb310  mov x0,xzr
7101aeb314  stp xzr,xzr,[x0, #0x10]
7101aeb318  mov w1,#0x20
7101aeb31c  stp xzr,xzr,[x0]
7101aeb320  stp x0,x27,[x21, #0x190]
7101aeb324  mov w0,#0x10
7101aeb328  bl 0x710392e290
7101aeb32c  cbnz x0,0x7101aeb374
7101aeb330  adrp x8,0x7105332000
7101aeb334  ldr x0,[x8, #0xf00]
7101aeb338  cbz x0,0x7101aeb370
7101aeb33c  mov w8,#0x20
7101aeb340  str wzr,[sp, #0x10]
7101aeb344  add x1,sp,#0x10
7101aeb348  str x8,[sp, #0x140]
7101aeb34c  ldr x8,[x0]
7101aeb350  ldr x8,[x8, #0x30]
7101aeb354  add x2,sp,#0x140
7101aeb358  blr x8
7101aeb35c  tbz w0,#0x0,0x7101aeb370
7101aeb360  mov w0,#0x10
7101aeb364  mov w1,#0x20
7101aeb368  bl 0x710392e290
7101aeb36c  cbnz x0,0x7101aeb374
7101aeb370  mov x0,xzr
7101aeb374  stp xzr,xzr,[x0, #0x10]
7101aeb378  mov w1,#0x20
7101aeb37c  stp xzr,xzr,[x0]
7101aeb380  stp x0,x27,[x21, #0x1a0]
7101aeb384  mov w0,#0x10
7101aeb388  bl 0x710392e290
7101aeb38c  cbnz x0,0x7101aeb3d4
7101aeb390  adrp x8,0x7105332000
7101aeb394  ldr x0,[x8, #0xf00]
7101aeb398  cbz x0,0x7101aeb3d0
7101aeb39c  mov w8,#0x20
7101aeb3a0  str wzr,[sp, #0x10]
7101aeb3a4  add x1,sp,#0x10
7101aeb3a8  str x8,[sp, #0x140]
7101aeb3ac  ldr x8,[x0]
7101aeb3b0  ldr x8,[x8, #0x30]
7101aeb3b4  add x2,sp,#0x140
7101aeb3b8  blr x8
7101aeb3bc  tbz w0,#0x0,0x7101aeb3d0
7101aeb3c0  mov w0,#0x10
7101aeb3c4  mov w1,#0x20
7101aeb3c8  bl 0x710392e290
7101aeb3cc  cbnz x0,0x7101aeb3d4
7101aeb3d0  mov x0,xzr
7101aeb3d4  stp xzr,xzr,[x0, #0x10]
7101aeb3d8  mov w1,#0x20
7101aeb3dc  stp xzr,xzr,[x0]
7101aeb3e0  stp x0,x27,[x21, #0x1b0]
7101aeb3e4  mov w0,#0x10
7101aeb3e8  bl 0x710392e290
7101aeb3ec  cbnz x0,0x7101aeb434
7101aeb3f0  adrp x8,0x7105332000
7101aeb3f4  ldr x0,[x8, #0xf00]
7101aeb3f8  cbz x0,0x7101aeb430
7101aeb3fc  mov w8,#0x20
7101aeb400  str wzr,[sp, #0x10]
7101aeb404  add x1,sp,#0x10
7101aeb408  str x8,[sp, #0x140]
7101aeb40c  ldr x8,[x0]
7101aeb410  ldr x8,[x8, #0x30]
7101aeb414  add x2,sp,#0x140
7101aeb418  blr x8
7101aeb41c  tbz w0,#0x0,0x7101aeb430
7101aeb420  mov w0,#0x10
7101aeb424  mov w1,#0x20
7101aeb428  bl 0x710392e290
7101aeb42c  cbnz x0,0x7101aeb434
7101aeb430  mov x0,xzr
7101aeb434  stp xzr,xzr,[x0, #0x10]
7101aeb438  mov w1,#0x20
7101aeb43c  stp xzr,xzr,[x0]
7101aeb440  stp x0,x27,[x21, #0x1c0]
7101aeb444  mov w0,#0x10
7101aeb448  bl 0x710392e290
7101aeb44c  cbnz x0,0x7101aeb494
7101aeb450  adrp x8,0x7105332000
7101aeb454  ldr x0,[x8, #0xf00]
7101aeb458  cbz x0,0x7101aeb490
7101aeb45c  mov w8,#0x20
7101aeb460  str wzr,[sp, #0x10]
7101aeb464  add x1,sp,#0x10
7101aeb468  str x8,[sp, #0x140]
7101aeb46c  ldr x8,[x0]
7101aeb470  ldr x8,[x8, #0x30]
7101aeb474  add x2,sp,#0x140
7101aeb478  blr x8
7101aeb47c  tbz w0,#0x0,0x7101aeb490
7101aeb480  mov w0,#0x10
7101aeb484  mov w1,#0x20
7101aeb488  bl 0x710392e290
7101aeb48c  cbnz x0,0x7101aeb494
7101aeb490  mov x0,xzr
7101aeb494  stp xzr,xzr,[x0, #0x10]
7101aeb498  adrp x24,0x710523d000
7101aeb49c  add x24,x24,#0xa28
7101aeb4a0  stp xzr,xzr,[x0]
7101aeb4a4  mov w1,#0x10
7101aeb4a8  str x24,[x21, #0x1e0]
7101aeb4ac  stp x0,xzr,[x21, #0x1d0]
7101aeb4b0  mov w0,#0x10
7101aeb4b4  bl 0x710392e290
7101aeb4b8  cbnz x0,0x7101aeb500
7101aeb4bc  adrp x8,0x7105332000
7101aeb4c0  ldr x0,[x8, #0xf00]
7101aeb4c4  cbz x0,0x7101aeb4fc
7101aeb4c8  mov w8,#0x10
7101aeb4cc  str wzr,[sp, #0x10]
7101aeb4d0  add x1,sp,#0x10
7101aeb4d4  str x8,[sp, #0x140]
7101aeb4d8  ldr x8,[x0]
7101aeb4dc  ldr x8,[x8, #0x30]
7101aeb4e0  add x2,sp,#0x140
7101aeb4e4  blr x8
7101aeb4e8  tbz w0,#0x0,0x7101aeb4fc
7101aeb4ec  mov w0,#0x10
7101aeb4f0  mov w1,#0x10
7101aeb4f4  bl 0x710392e290
7101aeb4f8  cbnz x0,0x7101aeb500
7101aeb4fc  mov x0,xzr
7101aeb500  stp xzr,xzr,[x0]
7101aeb504  mov w1,#0x10
7101aeb508  stp x0,x24,[x21, #0x1e8]
7101aeb50c  mov w0,#0x10
7101aeb510  bl 0x710392e290
7101aeb514  cbnz x0,0x7101aeb55c
7101aeb518  adrp x8,0x7105332000
7101aeb51c  ldr x0,[x8, #0xf00]
7101aeb520  cbz x0,0x7101aeb558
7101aeb524  mov w8,#0x10
7101aeb528  str wzr,[sp, #0x10]
7101aeb52c  add x1,sp,#0x10
7101aeb530  str x8,[sp, #0x140]
7101aeb534  ldr x8,[x0]
7101aeb538  ldr x8,[x8, #0x30]
7101aeb53c  add x2,sp,#0x140
7101aeb540  blr x8
7101aeb544  tbz w0,#0x0,0x7101aeb558
7101aeb548  mov w0,#0x10
7101aeb54c  mov w1,#0x10
7101aeb550  bl 0x710392e290
7101aeb554  cbnz x0,0x7101aeb55c
7101aeb558  mov x0,xzr
7101aeb55c  stp xzr,xzr,[x0]
7101aeb560  mov w1,#0x20
7101aeb564  stp x0,x27,[x21, #0x1f8]
7101aeb568  mov w0,#0x10
7101aeb56c  str xzr,[x21, #0x288]
7101aeb570  str xzr,[x21, #0x280]
7101aeb574  str xzr,[x21, #0x278]
7101aeb578  str xzr,[x21, #0x270]
7101aeb57c  str xzr,[x21, #0x268]
7101aeb580  str xzr,[x21, #0x260]
7101aeb584  str xzr,[x21, #0x258]
7101aeb588  str xzr,[x21, #0x250]
7101aeb58c  str xzr,[x21, #0x248]
7101aeb590  str xzr,[x21, #0x240]
7101aeb594  str xzr,[x21, #0x238]
7101aeb598  str xzr,[x21, #0x230]
7101aeb59c  str xzr,[x21, #0x228]
7101aeb5a0  str xzr,[x21, #0x220]
7101aeb5a4  str xzr,[x21, #0x218]
7101aeb5a8  str xzr,[x21, #0x210]
7101aeb5ac  str xzr,[x21, #0x208]
7101aeb5b0  bl 0x710392e290
7101aeb5b4  cbnz x0,0x7101aeb5fc
7101aeb5b8  adrp x8,0x7105332000
7101aeb5bc  ldr x0,[x8, #0xf00]
7101aeb5c0  cbz x0,0x7101aeb5f8
7101aeb5c4  mov w8,#0x20
7101aeb5c8  str wzr,[sp, #0x10]
7101aeb5cc  add x1,sp,#0x10
7101aeb5d0  str x8,[sp, #0x140]
7101aeb5d4  ldr x8,[x0]
7101aeb5d8  ldr x8,[x8, #0x30]
7101aeb5dc  add x2,sp,#0x140
7101aeb5e0  blr x8
7101aeb5e4  tbz w0,#0x0,0x7101aeb5f8
7101aeb5e8  mov w0,#0x10
7101aeb5ec  mov w1,#0x20
7101aeb5f0  bl 0x710392e290
7101aeb5f4  cbnz x0,0x7101aeb5fc
7101aeb5f8  mov x0,xzr
7101aeb5fc  stp xzr,xzr,[x0, #0x10]
7101aeb600  mov w1,#0x20
7101aeb604  stp xzr,xzr,[x0]
7101aeb608  str x0,[x21, #0x208]
7101aeb60c  mov w0,#0x10
7101aeb610  str x27,[x21, #0x210]
7101aeb614  bl 0x710392e290
7101aeb618  cbnz x0,0x7101aeb660
7101aeb61c  adrp x8,0x7105332000
7101aeb620  ldr x0,[x8, #0xf00]
7101aeb624  cbz x0,0x7101aeb65c
7101aeb628  mov w8,#0x20
7101aeb62c  str wzr,[sp, #0x10]
7101aeb630  add x1,sp,#0x10
7101aeb634  str x8,[sp, #0x140]
7101aeb638  ldr x8,[x0]
7101aeb63c  ldr x8,[x8, #0x30]
7101aeb640  add x2,sp,#0x140
7101aeb644  blr x8
7101aeb648  tbz w0,#0x0,0x7101aeb65c
7101aeb64c  mov w0,#0x10
7101aeb650  mov w1,#0x20
7101aeb654  bl 0x710392e290
7101aeb658  cbnz x0,0x7101aeb660
7101aeb65c  mov x0,xzr
7101aeb660  stp xzr,xzr,[x0, #0x10]
7101aeb664  mov w1,#0x20
7101aeb668  stp xzr,xzr,[x0]
7101aeb66c  str x0,[x21, #0x218]
7101aeb670  mov w0,#0x10
7101aeb674  str x27,[x21, #0x220]
7101aeb678  bl 0x710392e290
7101aeb67c  cbnz x0,0x7101aeb6c4
7101aeb680  adrp x8,0x7105332000
7101aeb684  ldr x0,[x8, #0xf00]
7101aeb688  cbz x0,0x7101aeb6c0
7101aeb68c  mov w8,#0x20
7101aeb690  str wzr,[sp, #0x10]
7101aeb694  add x1,sp,#0x10
7101aeb698  str x8,[sp, #0x140]
7101aeb69c  ldr x8,[x0]
7101aeb6a0  ldr x8,[x8, #0x30]
7101aeb6a4  add x2,sp,#0x140
7101aeb6a8  blr x8
7101aeb6ac  tbz w0,#0x0,0x7101aeb6c0
7101aeb6b0  mov w0,#0x10
7101aeb6b4  mov w1,#0x20
7101aeb6b8  bl 0x710392e290
7101aeb6bc  cbnz x0,0x7101aeb6c4
7101aeb6c0  mov x0,xzr
7101aeb6c4  stp xzr,xzr,[x0, #0x10]
7101aeb6c8  mov w1,#0x20
7101aeb6cc  stp xzr,xzr,[x0]
7101aeb6d0  str x0,[x21, #0x228]
7101aeb6d4  mov w0,#0x10
7101aeb6d8  str x27,[x21, #0x230]
7101aeb6dc  bl 0x710392e290
7101aeb6e0  cbnz x0,0x7101aeb728
7101aeb6e4  adrp x8,0x7105332000
7101aeb6e8  ldr x0,[x8, #0xf00]
7101aeb6ec  cbz x0,0x7101aeb724
7101aeb6f0  mov w8,#0x20
7101aeb6f4  str wzr,[sp, #0x10]
7101aeb6f8  add x1,sp,#0x10
7101aeb6fc  str x8,[sp, #0x140]
7101aeb700  ldr x8,[x0]
7101aeb704  ldr x8,[x8, #0x30]
7101aeb708  add x2,sp,#0x140
7101aeb70c  blr x8
7101aeb710  tbz w0,#0x0,0x7101aeb724
7101aeb714  mov w0,#0x10
7101aeb718  mov w1,#0x20
7101aeb71c  bl 0x710392e290
7101aeb720  cbnz x0,0x7101aeb728
7101aeb724  mov x0,xzr
7101aeb728  stp xzr,xzr,[x0, #0x10]
7101aeb72c  mov w1,#0x20
7101aeb730  stp xzr,xzr,[x0]
7101aeb734  str x0,[x21, #0x238]
7101aeb738  mov w0,#0x10
7101aeb73c  str x27,[x21, #0x240]
7101aeb740  bl 0x710392e290
7101aeb744  cbnz x0,0x7101aeb78c
7101aeb748  adrp x8,0x7105332000
7101aeb74c  ldr x0,[x8, #0xf00]
7101aeb750  cbz x0,0x7101aeb788
7101aeb754  mov w8,#0x20
7101aeb758  str wzr,[sp, #0x10]
7101aeb75c  add x1,sp,#0x10
7101aeb760  str x8,[sp, #0x140]
7101aeb764  ldr x8,[x0]
7101aeb768  ldr x8,[x8, #0x30]
7101aeb76c  add x2,sp,#0x140
7101aeb770  blr x8
7101aeb774  tbz w0,#0x0,0x7101aeb788
7101aeb778  mov w0,#0x10
7101aeb77c  mov w1,#0x20
7101aeb780  bl 0x710392e290
7101aeb784  cbnz x0,0x7101aeb78c
7101aeb788  mov x0,xzr
7101aeb78c  stp xzr,xzr,[x0, #0x10]
7101aeb790  mov w1,#0x20
7101aeb794  stp xzr,xzr,[x0]
7101aeb798  str x0,[x21, #0x248]
7101aeb79c  mov w0,#0x10
7101aeb7a0  str x27,[x21, #0x250]
7101aeb7a4  bl 0x710392e290
7101aeb7a8  cbnz x0,0x7101aeb7f0
7101aeb7ac  adrp x8,0x7105332000
7101aeb7b0  ldr x0,[x8, #0xf00]
7101aeb7b4  cbz x0,0x7101aeb7ec
7101aeb7b8  mov w8,#0x20
7101aeb7bc  str wzr,[sp, #0x10]
7101aeb7c0  add x1,sp,#0x10
7101aeb7c4  str x8,[sp, #0x140]
7101aeb7c8  ldr x8,[x0]
7101aeb7cc  ldr x8,[x8, #0x30]
7101aeb7d0  add x2,sp,#0x140
7101aeb7d4  blr x8
7101aeb7d8  tbz w0,#0x0,0x7101aeb7ec
7101aeb7dc  mov w0,#0x10
7101aeb7e0  mov w1,#0x20
7101aeb7e4  bl 0x710392e290
7101aeb7e8  cbnz x0,0x7101aeb7f0
7101aeb7ec  mov x0,xzr
7101aeb7f0  stp xzr,xzr,[x0, #0x10]
7101aeb7f4  mov w1,#0x20
7101aeb7f8  stp xzr,xzr,[x0]
7101aeb7fc  str x0,[x21, #0x258]
7101aeb800  mov w0,#0x10
7101aeb804  str x27,[x21, #0x260]
7101aeb808  bl 0x710392e290
7101aeb80c  cbnz x0,0x7101aeb854
7101aeb810  adrp x8,0x7105332000
7101aeb814  ldr x0,[x8, #0xf00]
7101aeb818  cbz x0,0x7101aeb850
7101aeb81c  mov w8,#0x20
7101aeb820  str wzr,[sp, #0x10]
7101aeb824  add x1,sp,#0x10
7101aeb828  str x8,[sp, #0x140]
7101aeb82c  ldr x8,[x0]
7101aeb830  ldr x8,[x8, #0x30]
7101aeb834  add x2,sp,#0x140
7101aeb838  blr x8
7101aeb83c  tbz w0,#0x0,0x7101aeb850
7101aeb840  mov w0,#0x10
7101aeb844  mov w1,#0x20
7101aeb848  bl 0x710392e290
7101aeb84c  cbnz x0,0x7101aeb854
7101aeb850  mov x0,xzr
7101aeb854  stp xzr,xzr,[x0, #0x10]
7101aeb858  mov w1,#0x20
7101aeb85c  stp xzr,xzr,[x0]
7101aeb860  str x0,[x21, #0x268]
7101aeb864  mov w0,#0x10
7101aeb868  str x27,[x21, #0x270]
7101aeb86c  bl 0x710392e290
7101aeb870  cbnz x0,0x7101aeb8b8
7101aeb874  adrp x8,0x7105332000
7101aeb878  ldr x0,[x8, #0xf00]
7101aeb87c  cbz x0,0x7101aeb8b4
7101aeb880  mov w8,#0x20
7101aeb884  str wzr,[sp, #0x10]
7101aeb888  add x1,sp,#0x10
7101aeb88c  str x8,[sp, #0x140]
7101aeb890  ldr x8,[x0]
7101aeb894  ldr x8,[x8, #0x30]
7101aeb898  add x2,sp,#0x140
7101aeb89c  blr x8
7101aeb8a0  tbz w0,#0x0,0x7101aeb8b4
7101aeb8a4  mov w0,#0x10
7101aeb8a8  mov w1,#0x20
7101aeb8ac  bl 0x710392e290
7101aeb8b0  cbnz x0,0x7101aeb8b8
7101aeb8b4  mov x0,xzr
7101aeb8b8  add x8,x21,#0x280
7101aeb8bc  stp xzr,xzr,[x0, #0x10]
7101aeb8c0  stp xzr,xzr,[x0]
7101aeb8c4  str x0,[x21, #0x278]
7101aeb8c8  mov x0,x8
7101aeb8cc  bl 0x7103776290
7101aeb8d0  mov w0,#0x10
7101aeb8d4  mov w1,#0x20
7101aeb8d8  str xzr,[x21, #0x318]
7101aeb8dc  str xzr,[x21, #0x310]
7101aeb8e0  str xzr,[x21, #0x308]
7101aeb8e4  str xzr,[x21, #0x300]
7101aeb8e8  str xzr,[x21, #0x2f8]
7101aeb8ec  str xzr,[x21, #0x2f0]
7101aeb8f0  str xzr,[x21, #0x2e8]
7101aeb8f4  str xzr,[x21, #0x2e0]
7101aeb8f8  str xzr,[x21, #0x2d8]
7101aeb8fc  str xzr,[x21, #0x2d0]
7101aeb900  str xzr,[x21, #0x2c8]
7101aeb904  str xzr,[x21, #0x2c0]
7101aeb908  str xzr,[x21, #0x2b8]
7101aeb90c  str xzr,[x21, #0x2b0]
7101aeb910  str xzr,[x21, #0x2a8]
7101aeb914  str xzr,[x21, #0x2a0]
7101aeb918  str xzr,[x21, #0x298]
7101aeb91c  str x27,[x21, #0x290]
7101aeb920  bl 0x710392e290
7101aeb924  cbnz x0,0x7101aeb96c
7101aeb928  adrp x8,0x7105332000
7101aeb92c  ldr x0,[x8, #0xf00]
7101aeb930  cbz x0,0x7101aeb968
7101aeb934  mov w8,#0x20
7101aeb938  str wzr,[sp, #0x10]
7101aeb93c  add x1,sp,#0x10
7101aeb940  str x8,[sp, #0x140]
7101aeb944  ldr x8,[x0]
7101aeb948  ldr x8,[x8, #0x30]
7101aeb94c  add x2,sp,#0x140
7101aeb950  blr x8
7101aeb954  tbz w0,#0x0,0x7101aeb968
7101aeb958  mov w0,#0x10
7101aeb95c  mov w1,#0x20
7101aeb960  bl 0x710392e290
7101aeb964  cbnz x0,0x7101aeb96c
7101aeb968  mov x0,xzr
7101aeb96c  stp xzr,xzr,[x0, #0x10]
7101aeb970  mov w1,#0x20
7101aeb974  stp xzr,xzr,[x0]
7101aeb978  str x0,[x21, #0x298]
7101aeb97c  mov w0,#0x10
7101aeb980  str x27,[x21, #0x2a0]
7101aeb984  bl 0x710392e290
7101aeb988  cbnz x0,0x7101aeb9d0
7101aeb98c  adrp x8,0x7105332000
7101aeb990  ldr x0,[x8, #0xf00]
7101aeb994  cbz x0,0x7101aeb9cc
7101aeb998  mov w8,#0x20
7101aeb99c  str wzr,[sp, #0x10]
7101aeb9a0  add x1,sp,#0x10
7101aeb9a4  str x8,[sp, #0x140]
7101aeb9a8  ldr x8,[x0]
7101aeb9ac  ldr x8,[x8, #0x30]
7101aeb9b0  add x2,sp,#0x140
7101aeb9b4  blr x8
7101aeb9b8  tbz w0,#0x0,0x7101aeb9cc
7101aeb9bc  mov w0,#0x10
7101aeb9c0  mov w1,#0x20
7101aeb9c4  bl 0x710392e290
7101aeb9c8  cbnz x0,0x7101aeb9d0
7101aeb9cc  mov x0,xzr
7101aeb9d0  stp xzr,xzr,[x0, #0x10]
7101aeb9d4  mov w1,#0x20
7101aeb9d8  stp xzr,xzr,[x0]
7101aeb9dc  str x0,[x21, #0x2a8]
7101aeb9e0  mov w0,#0x10
7101aeb9e4  str x27,[x21, #0x2b0]
7101aeb9e8  bl 0x710392e290
7101aeb9ec  cbnz x0,0x7101aeba34
7101aeb9f0  adrp x8,0x7105332000
7101aeb9f4  ldr x0,[x8, #0xf00]
7101aeb9f8  cbz x0,0x7101aeba30
7101aeb9fc  mov w8,#0x20
7101aeba00  str wzr,[sp, #0x10]
7101aeba04  add x1,sp,#0x10
7101aeba08  str x8,[sp, #0x140]
7101aeba0c  ldr x8,[x0]
7101aeba10  ldr x8,[x8, #0x30]
7101aeba14  add x2,sp,#0x140
7101aeba18  blr x8
7101aeba1c  tbz w0,#0x0,0x7101aeba30
7101aeba20  mov w0,#0x10
7101aeba24  mov w1,#0x20
7101aeba28  bl 0x710392e290
7101aeba2c  cbnz x0,0x7101aeba34
7101aeba30  mov x0,xzr
7101aeba34  stp xzr,xzr,[x0, #0x10]
7101aeba38  mov w1,#0x20
7101aeba3c  stp xzr,xzr,[x0]
7101aeba40  str x0,[x21, #0x2b8]
7101aeba44  mov w0,#0x10
7101aeba48  str x27,[x21, #0x2c0]
7101aeba4c  bl 0x710392e290
7101aeba50  cbnz x0,0x7101aeba98
7101aeba54  adrp x8,0x7105332000
7101aeba58  ldr x0,[x8, #0xf00]
7101aeba5c  cbz x0,0x7101aeba94
7101aeba60  mov w8,#0x20
7101aeba64  str wzr,[sp, #0x10]
7101aeba68  add x1,sp,#0x10
7101aeba6c  str x8,[sp, #0x140]
7101aeba70  ldr x8,[x0]
7101aeba74  ldr x8,[x8, #0x30]
7101aeba78  add x2,sp,#0x140
7101aeba7c  blr x8
7101aeba80  tbz w0,#0x0,0x7101aeba94
7101aeba84  mov w0,#0x10
7101aeba88  mov w1,#0x20
7101aeba8c  bl 0x710392e290
7101aeba90  cbnz x0,0x7101aeba98
7101aeba94  mov x0,xzr
7101aeba98  stp xzr,xzr,[x0, #0x10]
7101aeba9c  mov w1,#0x20
7101aebaa0  stp xzr,xzr,[x0]
7101aebaa4  str x0,[x21, #0x2c8]
7101aebaa8  mov w0,#0x10
7101aebaac  str x27,[x21, #0x2d0]
7101aebab0  bl 0x710392e290
7101aebab4  cbnz x0,0x7101aebafc
7101aebab8  adrp x8,0x7105332000
7101aebabc  ldr x0,[x8, #0xf00]
7101aebac0  cbz x0,0x7101aebaf8
7101aebac4  mov w8,#0x20
7101aebac8  str wzr,[sp, #0x10]
7101aebacc  add x1,sp,#0x10
7101aebad0  str x8,[sp, #0x140]
7101aebad4  ldr x8,[x0]
7101aebad8  ldr x8,[x8, #0x30]
7101aebadc  add x2,sp,#0x140
7101aebae0  blr x8
7101aebae4  tbz w0,#0x0,0x7101aebaf8
7101aebae8  mov w0,#0x10
7101aebaec  mov w1,#0x20
7101aebaf0  bl 0x710392e290
7101aebaf4  cbnz x0,0x7101aebafc
7101aebaf8  mov x0,xzr
7101aebafc  stp xzr,xzr,[x0, #0x10]
7101aebb00  mov w1,#0x20
7101aebb04  stp xzr,xzr,[x0]
7101aebb08  str x0,[x21, #0x2d8]
7101aebb0c  mov w0,#0x10
7101aebb10  str x27,[x21, #0x2e0]
7101aebb14  bl 0x710392e290
7101aebb18  cbnz x0,0x7101aebb60
7101aebb1c  adrp x8,0x7105332000
7101aebb20  ldr x0,[x8, #0xf00]
7101aebb24  cbz x0,0x7101aebb5c
7101aebb28  mov w8,#0x20
7101aebb2c  str wzr,[sp, #0x10]
7101aebb30  add x1,sp,#0x10
7101aebb34  str x8,[sp, #0x140]
7101aebb38  ldr x8,[x0]
7101aebb3c  ldr x8,[x8, #0x30]
7101aebb40  add x2,sp,#0x140
7101aebb44  blr x8
7101aebb48  tbz w0,#0x0,0x7101aebb5c
7101aebb4c  mov w0,#0x10
7101aebb50  mov w1,#0x20
7101aebb54  bl 0x710392e290
7101aebb58  cbnz x0,0x7101aebb60
7101aebb5c  mov x0,xzr
7101aebb60  stp xzr,xzr,[x0, #0x10]
7101aebb64  mov w1,#0x20
7101aebb68  stp xzr,xzr,[x0]
7101aebb6c  str x0,[x21, #0x2e8]
7101aebb70  mov w0,#0x10
7101aebb74  str x27,[x21, #0x2f0]
7101aebb78  bl 0x710392e290
7101aebb7c  cbnz x0,0x7101aebbc4
7101aebb80  adrp x8,0x7105332000
7101aebb84  ldr x0,[x8, #0xf00]
7101aebb88  cbz x0,0x7101aebbc0
7101aebb8c  mov w8,#0x20
7101aebb90  str wzr,[sp, #0x10]
7101aebb94  add x1,sp,#0x10
7101aebb98  str x8,[sp, #0x140]
7101aebb9c  ldr x8,[x0]
7101aebba0  ldr x8,[x8, #0x30]
7101aebba4  add x2,sp,#0x140
7101aebba8  blr x8
7101aebbac  tbz w0,#0x0,0x7101aebbc0
7101aebbb0  mov w0,#0x10
7101aebbb4  mov w1,#0x20
7101aebbb8  bl 0x710392e290
7101aebbbc  cbnz x0,0x7101aebbc4
7101aebbc0  mov x0,xzr
7101aebbc4  stp xzr,xzr,[x0, #0x10]
7101aebbc8  mov w1,#0x20
7101aebbcc  stp xzr,xzr,[x0]
7101aebbd0  str x0,[x21, #0x2f8]
7101aebbd4  mov w0,#0x10
7101aebbd8  str x27,[x21, #0x300]
7101aebbdc  bl 0x710392e290
7101aebbe0  cbnz x0,0x7101aebc28
7101aebbe4  adrp x8,0x7105332000
7101aebbe8  ldr x0,[x8, #0xf00]
7101aebbec  cbz x0,0x7101aebc24
7101aebbf0  mov w8,#0x20
7101aebbf4  str wzr,[sp, #0x10]
7101aebbf8  add x1,sp,#0x10
7101aebbfc  str x8,[sp, #0x140]
7101aebc00  ldr x8,[x0]
7101aebc04  ldr x8,[x8, #0x30]
7101aebc08  add x2,sp,#0x140
7101aebc0c  blr x8
7101aebc10  tbz w0,#0x0,0x7101aebc24
7101aebc14  mov w0,#0x10
7101aebc18  mov w1,#0x20
7101aebc1c  bl 0x710392e290
7101aebc20  cbnz x0,0x7101aebc28
7101aebc24  mov x0,xzr
7101aebc28  add x8,x21,#0x310
7101aebc2c  stp xzr,xzr,[x0, #0x10]
7101aebc30  stp xzr,xzr,[x0]
7101aebc34  str x0,[x21, #0x308]
7101aebc38  mov x0,x8
7101aebc3c  bl 0x7103776290
7101aebc40  add x0,x21,#0x358
7101aebc44  add x8,x21,#0x345
7101aebc48  mov w2,#0x1638
7101aebc4c  mov w1,wzr
7101aebc50  str x25,[x21, #0x320]
7101aebc54  str x23,[x21, #0x328]
7101aebc58  str wzr,[x21, #0x350]
7101aebc5c  strb wzr,[x21, #0x354]
7101aebc60  add x23,x21,#0x410
7101aebc64  str xzr,[x8]
7101aebc68  str xzr,[x21, #0x340]
7101aebc6c  str xzr,[x21, #0x338]
7101aebc70  str xzr,[x21, #0x330]
7101aebc74  bl 0x71039c02a0
7101aebc78  mov x0,x23
7101aebc7c  bl 0x71004f5770
7101aebc80  add x8,x21,#0x4f6
7101aebc84  mov w0,#0x10
7101aebc88  mov w1,#0x10
7101aebc8c  str wzr,[x21, #0x500]
7101aebc90  str xzr,[x8]
7101aebc94  str xzr,[x21, #0x4f0]
7101aebc98  str xzr,[x21, #0x4e8]
7101aebc9c  str xzr,[x21, #0x4e0]
7101aebca0  str xzr,[x21, #0x4d8]
7101aebca4  str xzr,[x21, #0x4d0]
7101aebca8  str xzr,[x21, #0x5a0]
7101aebcac  str xzr,[x21, #0x598]
7101aebcb0  str xzr,[x21, #0x590]
7101aebcb4  str xzr,[x21, #0x588]
7101aebcb8  str xzr,[x21, #0x580]
7101aebcbc  str xzr,[x21, #0x578]
7101aebcc0  str xzr,[x21, #0x570]
7101aebcc4  str xzr,[x21, #0x568]
7101aebcc8  str xzr,[x21, #0x560]
7101aebccc  str xzr,[x21, #0x558]
7101aebcd0  str xzr,[x21, #0x550]
7101aebcd4  str xzr,[x21, #0x548]
7101aebcd8  str xzr,[x21, #0x540]
7101aebcdc  str xzr,[x21, #0x538]
7101aebce0  str xzr,[x21, #0x530]
7101aebce4  str xzr,[x21, #0x528]
7101aebce8  str xzr,[x21, #0x520]
7101aebcec  str xzr,[x21, #0x518]
7101aebcf0  str xzr,[x21, #0x510]
7101aebcf4  str xzr,[x21, #0x508]
7101aebcf8  str x24,[x21, #0x5a8]
7101aebcfc  bl 0x710392e290
7101aebd00  cbnz x0,0x7101aebd48
7101aebd04  adrp x8,0x7105332000
7101aebd08  ldr x0,[x8, #0xf00]
7101aebd0c  cbz x0,0x7101aebd44
7101aebd10  mov w8,#0x10
7101aebd14  str wzr,[sp, #0x10]
7101aebd18  add x1,sp,#0x10
7101aebd1c  str x8,[sp, #0x140]
7101aebd20  ldr x8,[x0]
7101aebd24  ldr x8,[x8, #0x30]
7101aebd28  add x2,sp,#0x140
7101aebd2c  blr x8
7101aebd30  tbz w0,#0x0,0x7101aebd44
7101aebd34  mov w0,#0x10
7101aebd38  mov w1,#0x10
7101aebd3c  bl 0x710392e290
7101aebd40  cbnz x0,0x7101aebd48
7101aebd44  mov x0,xzr
7101aebd48  stp xzr,xzr,[x0]
7101aebd4c  mov w1,#0x10
7101aebd50  str x0,[x21, #0x5b0]
7101aebd54  mov w0,#0x10
7101aebd58  str x24,[x21, #0x5b8]
7101aebd5c  bl 0x710392e290
7101aebd60  cbnz x0,0x7101aebda8
7101aebd64  adrp x8,0x7105332000
7101aebd68  ldr x0,[x8, #0xf00]
7101aebd6c  cbz x0,0x7101aebda4
7101aebd70  mov w8,#0x10
7101aebd74  str wzr,[sp, #0x10]
7101aebd78  add x1,sp,#0x10
7101aebd7c  str x8,[sp, #0x140]
7101aebd80  ldr x8,[x0]
7101aebd84  ldr x8,[x8, #0x30]
7101aebd88  add x2,sp,#0x140
7101aebd8c  blr x8
7101aebd90  tbz w0,#0x0,0x7101aebda4
7101aebd94  mov w0,#0x10
7101aebd98  mov w1,#0x10
7101aebd9c  bl 0x710392e290
7101aebda0  cbnz x0,0x7101aebda8
7101aebda4  mov x0,xzr
7101aebda8  stp xzr,xzr,[x0]
7101aebdac  add x8,x21,#0x676
7101aebdb0  str x0,[x21, #0x5c0]
7101aebdb4  add x0,x21,#0x688
7101aebdb8  str xzr,[x21, #0x5f8]
7101aebdbc  str xzr,[x8]
7101aebdc0  str xzr,[x21, #0x670]
7101aebdc4  str xzr,[x21, #0x668]
7101aebdc8  str xzr,[x21, #0x660]
7101aebdcc  str xzr,[x21, #0x658]
7101aebdd0  str xzr,[x21, #0x650]
7101aebdd4  str xzr,[x21, #0x648]
7101aebdd8  str xzr,[x21, #0x640]
7101aebddc  str xzr,[x21, #0x638]
7101aebde0  str xzr,[x21, #0x630]
7101aebde4  str xzr,[x21, #0x628]
7101aebde8  str xzr,[x21, #0x620]
7101aebdec  str xzr,[x21, #0x740]
7101aebdf0  str xzr,[x21, #0x738]
7101aebdf4  str xzr,[x21, #0x730]
7101aebdf8  str xzr,[x21, #0x728]
7101aebdfc  str xzr,[x21, #0x720]
7101aebe00  str xzr,[x21, #0x718]
7101aebe04  str xzr,[x21, #0x710]
7101aebe08  str xzr,[x21, #0x708]
7101aebe0c  str xzr,[x21, #0x700]
7101aebe10  str xzr,[x21, #0x6f8]
7101aebe14  str xzr,[x21, #0x6f0]
7101aebe18  str xzr,[x21, #0x6e8]
7101aebe1c  str xzr,[x21, #0x6e0]
7101aebe20  str xzr,[x21, #0x6d8]
7101aebe24  str xzr,[x21, #0x6d0]
7101aebe28  str xzr,[x21, #0x6c8]
7101aebe2c  str xzr,[x21, #0x6c0]
7101aebe30  str xzr,[x21, #0x6b8]
7101aebe34  str xzr,[x21, #0x6b0]
7101aebe38  str xzr,[x21, #0x6a8]
7101aebe3c  str xzr,[x21, #0x6a0]
7101aebe40  str xzr,[x21, #0x698]
7101aebe44  str xzr,[x21, #0x690]
7101aebe48  str xzr,[x21, #0x688]
7101aebe4c  str xzr,[x21, #0x680]
7101aebe50  bl 0x71004f5770
7101aebe54  add x8,x21,#0x76e
7101aebe58  mov w0,#0x10
7101aebe5c  mov w1,#0x10
7101aebe60  str wzr,[x21, #0x778]
7101aebe64  str xzr,[x8]
7101aebe68  str xzr,[x21, #0x768]
7101aebe6c  str xzr,[x21, #0x760]
7101aebe70  str xzr,[x21, #0x758]
7101aebe74  str xzr,[x21, #0x750]
7101aebe78  str xzr,[x21, #0x748]
7101aebe7c  str xzr,[x21, #0x818]
7101aebe80  str xzr,[x21, #0x810]
7101aebe84  str xzr,[x21, #0x808]
7101aebe88  str xzr,[x21, #0x800]
7101aebe8c  str xzr,[x21, #0x7f8]
7101aebe90  str xzr,[x21, #0x7f0]
7101aebe94  str xzr,[x21, #0x7e8]
7101aebe98  str xzr,[x21, #0x7e0]
7101aebe9c  str xzr,[x21, #0x7d8]
7101aebea0  str xzr,[x21, #0x7d0]
7101aebea4  str xzr,[x21, #0x7c8]
7101aebea8  str xzr,[x21, #0x7c0]
7101aebeac  str xzr,[x21, #0x7b8]
7101aebeb0  str xzr,[x21, #0x7b0]
7101aebeb4  str xzr,[x21, #0x7a8]
7101aebeb8  str xzr,[x21, #0x7a0]
7101aebebc  str xzr,[x21, #0x798]
7101aebec0  str xzr,[x21, #0x790]
7101aebec4  str xzr,[x21, #0x788]
7101aebec8  str xzr,[x21, #0x780]
7101aebecc  str x24,[x21, #0x820]
7101aebed0  bl 0x710392e290
7101aebed4  cbnz x0,0x7101aebf1c
7101aebed8  adrp x8,0x7105332000
7101aebedc  ldr x0,[x8, #0xf00]
7101aebee0  cbz x0,0x7101aebf18
7101aebee4  mov w8,#0x10
7101aebee8  str wzr,[sp, #0x10]
7101aebeec  add x1,sp,#0x10
7101aebef0  str x8,[sp, #0x140]
7101aebef4  ldr x8,[x0]
7101aebef8  ldr x8,[x8, #0x30]
7101aebefc  add x2,sp,#0x140
7101aebf00  blr x8
7101aebf04  tbz w0,#0x0,0x7101aebf18
7101aebf08  mov w0,#0x10
7101aebf0c  mov w1,#0x10
7101aebf10  bl 0x710392e290
7101aebf14  cbnz x0,0x7101aebf1c
7101aebf18  mov x0,xzr
7101aebf1c  stp xzr,xzr,[x0]
7101aebf20  mov w1,#0x10
7101aebf24  str x0,[x21, #0x828]
7101aebf28  mov w0,#0x10
7101aebf2c  str x24,[x21, #0x830]
7101aebf30  bl 0x710392e290
7101aebf34  cbnz x0,0x7101aebf7c
7101aebf38  adrp x8,0x7105332000
7101aebf3c  ldr x0,[x8, #0xf00]
7101aebf40  cbz x0,0x7101aebf78
7101aebf44  mov w8,#0x10
7101aebf48  str wzr,[sp, #0x10]
7101aebf4c  add x1,sp,#0x10
7101aebf50  str x8,[sp, #0x140]
7101aebf54  ldr x8,[x0]
7101aebf58  ldr x8,[x8, #0x30]
7101aebf5c  add x2,sp,#0x140
7101aebf60  blr x8
7101aebf64  tbz w0,#0x0,0x7101aebf78
7101aebf68  mov w0,#0x10
7101aebf6c  mov w1,#0x10
7101aebf70  bl 0x710392e290
7101aebf74  cbnz x0,0x7101aebf7c
7101aebf78  mov x0,xzr
7101aebf7c  stp xzr,xzr,[x0]
7101aebf80  add x8,x21,#0x8ee
7101aebf84  str x0,[x21, #0x838]
7101aebf88  add x0,x21,#0x900
7101aebf8c  str xzr,[x21, #0x870]
7101aebf90  str xzr,[x8]
7101aebf94  str xzr,[x21, #0x8e8]
7101aebf98  str xzr,[x21, #0x8e0]
7101aebf9c  str xzr,[x21, #0x8d8]
7101aebfa0  str xzr,[x21, #0x8d0]
7101aebfa4  str xzr,[x21, #0x8c8]
7101aebfa8  str xzr,[x21, #0x8c0]
7101aebfac  str xzr,[x21, #0x8b8]
7101aebfb0  str xzr,[x21, #0x8b0]
7101aebfb4  str xzr,[x21, #0x8a8]
7101aebfb8  str xzr,[x21, #0x8a0]
7101aebfbc  str xzr,[x21, #0x898]
7101aebfc0  str xzr,[x21, #0x9b8]
7101aebfc4  str xzr,[x21, #0x9b0]
7101aebfc8  str xzr,[x21, #0x9a8]
7101aebfcc  str xzr,[x21, #0x9a0]
7101aebfd0  str xzr,[x21, #0x998]
7101aebfd4  str xzr,[x21, #0x990]
7101aebfd8  str xzr,[x21, #0x988]
7101aebfdc  str xzr,[x21, #0x980]
7101aebfe0  str xzr,[x21, #0x978]
7101aebfe4  str xzr,[x21, #0x970]
7101aebfe8  str xzr,[x21, #0x968]
7101aebfec  str xzr,[x21, #0x960]
7101aebff0  str xzr,[x21, #0x958]
7101aebff4  str xzr,[x21, #0x950]
7101aebff8  str xzr,[x21, #0x948]
7101aebffc  str xzr,[x21, #0x940]
7101aec000  str xzr,[x21, #0x938]
7101aec004  str xzr,[x21, #0x930]
7101aec008  str xzr,[x21, #0x928]
7101aec00c  str xzr,[x21, #0x920]
7101aec010  str xzr,[x21, #0x918]
7101aec014  str xzr,[x21, #0x910]
7101aec018  str xzr,[x21, #0x908]
7101aec01c  str xzr,[x21, #0x900]
7101aec020  str xzr,[x21, #0x8f8]
7101aec024  bl 0x71004f5770
7101aec028  add x8,x21,#0x9e6
7101aec02c  mov w0,#0x10
7101aec030  mov w1,#0x10
7101aec034  str wzr,[x21, #0x9f0]
7101aec038  str xzr,[x8]
7101aec03c  str xzr,[x21, #0x9e0]
7101aec040  str xzr,[x21, #0x9d8]
7101aec044  str xzr,[x21, #0x9d0]
7101aec048  str xzr,[x21, #0x9c8]
7101aec04c  str xzr,[x21, #0x9c0]
7101aec050  str xzr,[x21, #0xa90]
7101aec054  str xzr,[x21, #0xa88]
7101aec058  str xzr,[x21, #0xa80]
7101aec05c  str xzr,[x21, #0xa78]
7101aec060  str xzr,[x21, #0xa70]
7101aec064  str xzr,[x21, #0xa68]
7101aec068  str xzr,[x21, #0xa60]
7101aec06c  str xzr,[x21, #0xa58]
7101aec070  str xzr,[x21, #0xa50]
7101aec074  str xzr,[x21, #0xa48]
7101aec078  str xzr,[x21, #0xa40]
7101aec07c  str xzr,[x21, #0xa38]
7101aec080  str xzr,[x21, #0xa30]
7101aec084  str xzr,[x21, #0xa28]
7101aec088  str xzr,[x21, #0xa20]
7101aec08c  str xzr,[x21, #0xa18]
7101aec090  str xzr,[x21, #0xa10]
7101aec094  str xzr,[x21, #0xa08]
7101aec098  str xzr,[x21, #0xa00]
7101aec09c  str xzr,[x21, #0x9f8]
7101aec0a0  str x24,[x21, #0xa98]
7101aec0a4  bl 0x710392e290
7101aec0a8  cbnz x0,0x7101aec0f0
7101aec0ac  adrp x8,0x7105332000
7101aec0b0  ldr x0,[x8, #0xf00]
7101aec0b4  cbz x0,0x7101aec0ec
7101aec0b8  mov w8,#0x10
7101aec0bc  str wzr,[sp, #0x10]
7101aec0c0  add x1,sp,#0x10
7101aec0c4  str x8,[sp, #0x140]
7101aec0c8  ldr x8,[x0]
7101aec0cc  ldr x8,[x8, #0x30]
7101aec0d0  add x2,sp,#0x140
7101aec0d4  blr x8
7101aec0d8  tbz w0,#0x0,0x7101aec0ec
7101aec0dc  mov w0,#0x10
7101aec0e0  mov w1,#0x10
7101aec0e4  bl 0x710392e290
7101aec0e8  cbnz x0,0x7101aec0f0
7101aec0ec  mov x0,xzr
7101aec0f0  stp xzr,xzr,[x0]
7101aec0f4  mov w1,#0x10
7101aec0f8  str x0,[x21, #0xaa0]
7101aec0fc  mov w0,#0x10
7101aec100  str x24,[x21, #0xaa8]
7101aec104  bl 0x710392e290
7101aec108  cbnz x0,0x7101aec150
7101aec10c  adrp x8,0x7105332000
7101aec110  ldr x0,[x8, #0xf00]
7101aec114  cbz x0,0x7101aec14c
7101aec118  mov w8,#0x10
7101aec11c  str wzr,[sp, #0x10]
7101aec120  add x1,sp,#0x10
7101aec124  str x8,[sp, #0x140]
7101aec128  ldr x8,[x0]
7101aec12c  ldr x8,[x8, #0x30]
7101aec130  add x2,sp,#0x140
7101aec134  blr x8
7101aec138  tbz w0,#0x0,0x7101aec14c
7101aec13c  mov w0,#0x10
7101aec140  mov w1,#0x10
7101aec144  bl 0x710392e290
7101aec148  cbnz x0,0x7101aec150
7101aec14c  mov x0,xzr
7101aec150  stp xzr,xzr,[x0]
7101aec154  add x8,x21,#0xb66
7101aec158  str x0,[x21, #0xab0]
7101aec15c  add x0,x21,#0xb78
7101aec160  str xzr,[x21, #0xae8]
7101aec164  str xzr,[x8]
7101aec168  str xzr,[x21, #0xb60]
7101aec16c  str xzr,[x21, #0xb58]
7101aec170  str xzr,[x21, #0xb50]
7101aec174  str xzr,[x21, #0xb48]
7101aec178  str xzr,[x21, #0xb40]
7101aec17c  str xzr,[x21, #0xb38]
7101aec180  str xzr,[x21, #0xb30]
7101aec184  str xzr,[x21, #0xb28]
7101aec188  str xzr,[x21, #0xb20]
7101aec18c  str xzr,[x21, #0xb18]
7101aec190  str xzr,[x21, #0xb10]
7101aec194  str xzr,[x21, #0xc30]
7101aec198  str xzr,[x21, #0xc28]
7101aec19c  str xzr,[x21, #0xc20]
7101aec1a0  str xzr,[x21, #0xc18]
7101aec1a4  str xzr,[x21, #0xc10]
7101aec1a8  str xzr,[x21, #0xc08]
7101aec1ac  str xzr,[x21, #0xc00]
7101aec1b0  str xzr,[x21, #0xbf8]
7101aec1b4  str xzr,[x21, #0xbf0]
7101aec1b8  str xzr,[x21, #0xbe8]
7101aec1bc  str xzr,[x21, #0xbe0]
7101aec1c0  str xzr,[x21, #0xbd8]
7101aec1c4  str xzr,[x21, #0xbd0]
7101aec1c8  str xzr,[x21, #0xbc8]
7101aec1cc  str xzr,[x21, #0xbc0]
7101aec1d0  str xzr,[x21, #0xbb8]
7101aec1d4  str xzr,[x21, #0xbb0]
7101aec1d8  str xzr,[x21, #0xba8]
7101aec1dc  str xzr,[x21, #0xba0]
7101aec1e0  str xzr,[x21, #0xb98]
7101aec1e4  str xzr,[x21, #0xb90]
7101aec1e8  str xzr,[x21, #0xb88]
7101aec1ec  str xzr,[x21, #0xb80]
7101aec1f0  str xzr,[x21, #0xb78]
7101aec1f4  str xzr,[x21, #0xb70]
7101aec1f8  bl 0x71004f5770
7101aec1fc  add x8,x21,#0xc5e
7101aec200  mov w0,#0x10
7101aec204  mov w1,#0x10
7101aec208  str wzr,[x21, #0xc68]
7101aec20c  str xzr,[x8]
7101aec210  str xzr,[x21, #0xc58]
7101aec214  str xzr,[x21, #0xc50]
7101aec218  str xzr,[x21, #0xc48]
7101aec21c  str xzr,[x21, #0xc40]
7101aec220  str xzr,[x21, #0xc38]
7101aec224  str xzr,[x21, #0xd08]
7101aec228  str xzr,[x21, #0xd00]
7101aec22c  str xzr,[x21, #0xcf8]
7101aec230  str xzr,[x21, #0xcf0]
7101aec234  str xzr,[x21, #0xce8]
7101aec238  str xzr,[x21, #0xce0]
7101aec23c  str xzr,[x21, #0xcd8]
7101aec240  str xzr,[x21, #0xcd0]
7101aec244  str xzr,[x21, #0xcc8]
7101aec248  str xzr,[x21, #0xcc0]
7101aec24c  str xzr,[x21, #0xcb8]
7101aec250  str xzr,[x21, #0xcb0]
7101aec254  str xzr,[x21, #0xca8]
7101aec258  str xzr,[x21, #0xca0]
7101aec25c  str xzr,[x21, #0xc98]
7101aec260  str xzr,[x21, #0xc90]
7101aec264  str xzr,[x21, #0xc88]
7101aec268  str xzr,[x21, #0xc80]
7101aec26c  str xzr,[x21, #0xc78]
7101aec270  str xzr,[x21, #0xc70]
7101aec274  str x24,[x21, #0xd10]
7101aec278  bl 0x710392e290
7101aec27c  cbnz x0,0x7101aec2c4
7101aec280  adrp x8,0x7105332000
7101aec284  ldr x0,[x8, #0xf00]
7101aec288  cbz x0,0x7101aec2c0
7101aec28c  mov w8,#0x10
7101aec290  str wzr,[sp, #0x10]
7101aec294  add x1,sp,#0x10
7101aec298  str x8,[sp, #0x140]
7101aec29c  ldr x8,[x0]
7101aec2a0  ldr x8,[x8, #0x30]
7101aec2a4  add x2,sp,#0x140
7101aec2a8  blr x8
7101aec2ac  tbz w0,#0x0,0x7101aec2c0
7101aec2b0  mov w0,#0x10
7101aec2b4  mov w1,#0x10
7101aec2b8  bl 0x710392e290
7101aec2bc  cbnz x0,0x7101aec2c4
7101aec2c0  mov x0,xzr
7101aec2c4  stp xzr,xzr,[x0]
7101aec2c8  mov w1,#0x10
7101aec2cc  str x0,[x21, #0xd18]
7101aec2d0  mov w0,#0x10
7101aec2d4  str x24,[x21, #0xd20]
7101aec2d8  bl 0x710392e290
7101aec2dc  cbnz x0,0x7101aec324
7101aec2e0  adrp x8,0x7105332000
7101aec2e4  ldr x0,[x8, #0xf00]
7101aec2e8  cbz x0,0x7101aec320
7101aec2ec  mov w8,#0x10
7101aec2f0  str wzr,[sp, #0x10]
7101aec2f4  add x1,sp,#0x10
7101aec2f8  str x8,[sp, #0x140]
7101aec2fc  ldr x8,[x0]
7101aec300  ldr x8,[x8, #0x30]
7101aec304  add x2,sp,#0x140
7101aec308  blr x8
7101aec30c  tbz w0,#0x0,0x7101aec320
7101aec310  mov w0,#0x10
7101aec314  mov w1,#0x10
7101aec318  bl 0x710392e290
7101aec31c  cbnz x0,0x7101aec324
7101aec320  mov x0,xzr
7101aec324  stp xzr,xzr,[x0]
7101aec328  add x8,x21,#0xdde
7101aec32c  str x0,[x21, #0xd28]
7101aec330  add x0,x21,#0xdf0
7101aec334  str xzr,[x21, #0xd60]
7101aec338  str xzr,[x8]
7101aec33c  str xzr,[x21, #0xdd8]
7101aec340  str xzr,[x21, #0xdd0]
7101aec344  str xzr,[x21, #0xdc8]
7101aec348  str xzr,[x21, #0xdc0]
7101aec34c  str xzr,[x21, #0xdb8]
7101aec350  str xzr,[x21, #0xdb0]
7101aec354  str xzr,[x21, #0xda8]
7101aec358  str xzr,[x21, #0xda0]
7101aec35c  str xzr,[x21, #0xd98]
7101aec360  str xzr,[x21, #0xd90]
7101aec364  str xzr,[x21, #0xd88]
7101aec368  str xzr,[x21, #0xea8]
7101aec36c  str xzr,[x21, #0xea0]
7101aec370  str xzr,[x21, #0xe98]
7101aec374  str xzr,[x21, #0xe90]
7101aec378  str xzr,[x21, #0xe88]
7101aec37c  str xzr,[x21, #0xe80]
7101aec380  str xzr,[x21, #0xe78]
7101aec384  str xzr,[x21, #0xe70]
7101aec388  str xzr,[x21, #0xe68]
7101aec38c  str xzr,[x21, #0xe60]
7101aec390  str xzr,[x21, #0xe58]
7101aec394  str xzr,[x21, #0xe50]
7101aec398  str xzr,[x21, #0xe48]
7101aec39c  str xzr,[x21, #0xe40]
7101aec3a0  str xzr,[x21, #0xe38]
7101aec3a4  str xzr,[x21, #0xe30]
7101aec3a8  str xzr,[x21, #0xe28]
7101aec3ac  str xzr,[x21, #0xe20]
7101aec3b0  str xzr,[x21, #0xe18]
7101aec3b4  str xzr,[x21, #0xe10]
7101aec3b8  str xzr,[x21, #0xe08]
7101aec3bc  str xzr,[x21, #0xe00]
7101aec3c0  str xzr,[x21, #0xdf8]
7101aec3c4  str xzr,[x21, #0xdf0]
7101aec3c8  str xzr,[x21, #0xde8]
7101aec3cc  bl 0x71004f5770
7101aec3d0  add x8,x21,#0xed6
7101aec3d4  mov w0,#0x10
7101aec3d8  mov w1,#0x10
7101aec3dc  str wzr,[x21, #0xee0]
7101aec3e0  str xzr,[x8]
7101aec3e4  str xzr,[x21, #0xed0]
7101aec3e8  str xzr,[x21, #0xec8]
7101aec3ec  str xzr,[x21, #0xec0]
7101aec3f0  str xzr,[x21, #0xeb8]
7101aec3f4  str xzr,[x21, #0xeb0]
7101aec3f8  str xzr,[x21, #0xf80]
7101aec3fc  str xzr,[x21, #0xf78]
7101aec400  str xzr,[x21, #0xf70]
7101aec404  str xzr,[x21, #0xf68]
7101aec408  str xzr,[x21, #0xf60]
7101aec40c  str xzr,[x21, #0xf58]
7101aec410  str xzr,[x21, #0xf50]
7101aec414  str xzr,[x21, #0xf48]
7101aec418  str xzr,[x21, #0xf40]
7101aec41c  str xzr,[x21, #0xf38]
7101aec420  str xzr,[x21, #0xf30]
7101aec424  str xzr,[x21, #0xf28]
7101aec428  str xzr,[x21, #0xf20]
7101aec42c  str xzr,[x21, #0xf18]
7101aec430  str xzr,[x21, #0xf10]
7101aec434  str xzr,[x21, #0xf08]
7101aec438  str xzr,[x21, #0xf00]
7101aec43c  str xzr,[x21, #0xef8]
7101aec440  str xzr,[x21, #0xef0]
7101aec444  str xzr,[x21, #0xee8]
7101aec448  str x24,[x21, #0xf88]
7101aec44c  bl 0x710392e290
7101aec450  cbnz x0,0x7101aec498
7101aec454  adrp x8,0x7105332000
7101aec458  ldr x0,[x8, #0xf00]
7101aec45c  cbz x0,0x7101aec494
7101aec460  mov w8,#0x10
7101aec464  str wzr,[sp, #0x10]
7101aec468  add x1,sp,#0x10
7101aec46c  str x8,[sp, #0x140]
7101aec470  ldr x8,[x0]
7101aec474  ldr x8,[x8, #0x30]
7101aec478  add x2,sp,#0x140
7101aec47c  blr x8
7101aec480  tbz w0,#0x0,0x7101aec494
7101aec484  mov w0,#0x10
7101aec488  mov w1,#0x10
7101aec48c  bl 0x710392e290
7101aec490  cbnz x0,0x7101aec498
7101aec494  mov x0,xzr
7101aec498  stp xzr,xzr,[x0]
7101aec49c  mov w1,#0x10
7101aec4a0  str x0,[x21, #0xf90]
7101aec4a4  mov w0,#0x10
7101aec4a8  str x24,[x21, #0xf98]
7101aec4ac  bl 0x710392e290
7101aec4b0  cbnz x0,0x7101aec4f8
7101aec4b4  adrp x8,0x7105332000
7101aec4b8  ldr x0,[x8, #0xf00]
7101aec4bc  cbz x0,0x7101aec4f4
7101aec4c0  mov w8,#0x10
7101aec4c4  str wzr,[sp, #0x10]
7101aec4c8  add x1,sp,#0x10
7101aec4cc  str x8,[sp, #0x140]
7101aec4d0  ldr x8,[x0]
7101aec4d4  ldr x8,[x8, #0x30]
7101aec4d8  add x2,sp,#0x140
7101aec4dc  blr x8
7101aec4e0  tbz w0,#0x0,0x7101aec4f4
7101aec4e4  mov w0,#0x10
7101aec4e8  mov w1,#0x10
7101aec4ec  bl 0x710392e290
7101aec4f0  cbnz x0,0x7101aec4f8
7101aec4f4  mov x0,xzr
7101aec4f8  mov w8,#0x1068
7101aec4fc  stp xzr,xzr,[x0]
7101aec500  str x0,[x21, #0xfa0]
7101aec504  add x0,x21,x8
7101aec508  mov w8,#0x1056
7101aec50c  str xzr,[x21, #0xfd8]
7101aec510  str xzr,[x21, x8, LSL #0x0]
7101aec514  str xzr,[x21, #0x1050]
7101aec518  str xzr,[x21, #0x1048]
7101aec51c  str xzr,[x21, #0x1040]
7101aec520  str xzr,[x21, #0x1038]
7101aec524  str xzr,[x21, #0x1030]
7101aec528  str xzr,[x21, #0x1028]
7101aec52c  str xzr,[x21, #0x1020]
7101aec530  str xzr,[x21, #0x1018]
7101aec534  str xzr,[x21, #0x1010]
7101aec538  str xzr,[x21, #0x1008]
7101aec53c  str xzr,[x21, #0x1000]
7101aec540  str xzr,[x21, #0x1120]
7101aec544  str xzr,[x21, #0x1118]
7101aec548  str xzr,[x21, #0x1110]
7101aec54c  str xzr,[x21, #0x1108]
7101aec550  str xzr,[x21, #0x1100]
7101aec554  str xzr,[x21, #0x10f8]
7101aec558  str xzr,[x21, #0x10f0]
7101aec55c  str xzr,[x21, #0x10e8]
7101aec560  str xzr,[x21, #0x10e0]
7101aec564  str xzr,[x21, #0x10d8]
7101aec568  str xzr,[x21, #0x10d0]
7101aec56c  str xzr,[x21, #0x10c8]
7101aec570  str xzr,[x21, #0x10c0]
7101aec574  str xzr,[x21, #0x10b8]
7101aec578  str xzr,[x21, #0x10b0]
7101aec57c  str xzr,[x21, #0x10a8]
7101aec580  str xzr,[x21, #0x10a0]
7101aec584  str xzr,[x21, #0x1098]
7101aec588  str xzr,[x21, #0x1090]
7101aec58c  str xzr,[x21, #0x1088]
7101aec590  str xzr,[x21, #0x1080]
7101aec594  str xzr,[x21, #0x1078]
7101aec598  str xzr,[x21, #0x1070]
7101aec59c  str xzr,[x21, #0x1068]
7101aec5a0  str xzr,[x21, #0x1060]
7101aec5a4  bl 0x71004f5770
7101aec5a8  mov w8,#0x114e
7101aec5ac  mov w0,#0x10
7101aec5b0  mov w1,#0x10
7101aec5b4  str wzr,[x21, #0x1158]
7101aec5b8  str xzr,[x21, x8, LSL #0x0]
7101aec5bc  str xzr,[x21, #0x1148]
7101aec5c0  str xzr,[x21, #0x1140]
7101aec5c4  str xzr,[x21, #0x1138]
7101aec5c8  str xzr,[x21, #0x1130]
7101aec5cc  str xzr,[x21, #0x1128]
7101aec5d0  str xzr,[x21, #0x11f8]
7101aec5d4  str xzr,[x21, #0x11f0]
7101aec5d8  str xzr,[x21, #0x11e8]
7101aec5dc  str xzr,[x21, #0x11e0]
7101aec5e0  str xzr,[x21, #0x11d8]
7101aec5e4  str xzr,[x21, #0x11d0]
7101aec5e8  str xzr,[x21, #0x11c8]
7101aec5ec  str xzr,[x21, #0x11c0]
7101aec5f0  str xzr,[x21, #0x11b8]
7101aec5f4  str xzr,[x21, #0x11b0]
7101aec5f8  str xzr,[x21, #0x11a8]
7101aec5fc  str xzr,[x21, #0x11a0]
7101aec600  str xzr,[x21, #0x1198]
7101aec604  str xzr,[x21, #0x1190]
7101aec608  str xzr,[x21, #0x1188]
7101aec60c  str xzr,[x21, #0x1180]
7101aec610  str xzr,[x21, #0x1178]
7101aec614  str xzr,[x21, #0x1170]
7101aec618  str xzr,[x21, #0x1168]
7101aec61c  str xzr,[x21, #0x1160]
7101aec620  str x24,[x21, #0x1200]
7101aec624  bl 0x710392e290
7101aec628  cbnz x0,0x7101aec670
7101aec62c  adrp x8,0x7105332000
7101aec630  ldr x0,[x8, #0xf00]
7101aec634  cbz x0,0x7101aec66c
7101aec638  mov w8,#0x10
7101aec63c  str wzr,[sp, #0x10]
7101aec640  add x1,sp,#0x10
7101aec644  str x8,[sp, #0x140]
7101aec648  ldr x8,[x0]
7101aec64c  ldr x8,[x8, #0x30]
7101aec650  add x2,sp,#0x140
7101aec654  blr x8
7101aec658  tbz w0,#0x0,0x7101aec66c
7101aec65c  mov w0,#0x10
7101aec660  mov w1,#0x10
7101aec664  bl 0x710392e290
7101aec668  cbnz x0,0x7101aec670
7101aec66c  mov x0,xzr
7101aec670  stp xzr,xzr,[x0]
7101aec674  mov w1,#0x10
7101aec678  str x0,[x21, #0x1208]
7101aec67c  mov w0,#0x10
7101aec680  str x24,[x21, #0x1210]
7101aec684  bl 0x710392e290
7101aec688  cbnz x0,0x7101aec6d0
7101aec68c  adrp x8,0x7105332000
7101aec690  ldr x0,[x8, #0xf00]
7101aec694  cbz x0,0x7101aec6cc
7101aec698  mov w8,#0x10
7101aec69c  str wzr,[sp, #0x10]
7101aec6a0  add x1,sp,#0x10
7101aec6a4  str x8,[sp, #0x140]
7101aec6a8  ldr x8,[x0]
7101aec6ac  ldr x8,[x8, #0x30]
7101aec6b0  add x2,sp,#0x140
7101aec6b4  blr x8
7101aec6b8  tbz w0,#0x0,0x7101aec6cc
7101aec6bc  mov w0,#0x10
7101aec6c0  mov w1,#0x10
7101aec6c4  bl 0x710392e290
7101aec6c8  cbnz x0,0x7101aec6d0
7101aec6cc  mov x0,xzr
7101aec6d0  mov w8,#0x12e0
7101aec6d4  stp xzr,xzr,[x0]
7101aec6d8  str x0,[x21, #0x1218]
7101aec6dc  add x0,x21,x8
7101aec6e0  mov w8,#0x12ce
7101aec6e4  str xzr,[x21, #0x1250]
7101aec6e8  str xzr,[x21, x8, LSL #0x0]
7101aec6ec  str xzr,[x21, #0x12c8]
7101aec6f0  str xzr,[x21, #0x12c0]
7101aec6f4  str xzr,[x21, #0x12b8]
7101aec6f8  str xzr,[x21, #0x12b0]
7101aec6fc  str xzr,[x21, #0x12a8]
7101aec700  str xzr,[x21, #0x12a0]
7101aec704  str xzr,[x21, #0x1298]
7101aec708  str xzr,[x21, #0x1290]
7101aec70c  str xzr,[x21, #0x1288]
7101aec710  str xzr,[x21, #0x1280]
7101aec714  str xzr,[x21, #0x1278]
7101aec718  str xzr,[x21, #0x1398]
7101aec71c  str xzr,[x21, #0x1390]
7101aec720  str xzr,[x21, #0x1388]
7101aec724  str xzr,[x21, #0x1380]
7101aec728  str xzr,[x21, #0x1378]
7101aec72c  str xzr,[x21, #0x1370]
7101aec730  str xzr,[x21, #0x1368]
7101aec734  str xzr,[x21, #0x1360]
7101aec738  str xzr,[x21, #0x1358]
7101aec73c  str xzr,[x21, #0x1350]
7101aec740  str xzr,[x21, #0x1348]
7101aec744  str xzr,[x21, #0x1340]
7101aec748  str xzr,[x21, #0x1338]
7101aec74c  str xzr,[x21, #0x1330]
7101aec750  str xzr,[x21, #0x1328]
7101aec754  str xzr,[x21, #0x1320]
7101aec758  str xzr,[x21, #0x1318]
7101aec75c  str xzr,[x21, #0x1310]
7101aec760  str xzr,[x21, #0x1308]
7101aec764  str xzr,[x21, #0x1300]
7101aec768  str xzr,[x21, #0x12f8]
7101aec76c  str xzr,[x21, #0x12f0]
7101aec770  str xzr,[x21, #0x12e8]
7101aec774  str xzr,[x21, #0x12e0]
7101aec778  str xzr,[x21, #0x12d8]
7101aec77c  bl 0x71004f5770
7101aec780  mov w8,#0x13c6
7101aec784  mov w0,#0x10
7101aec788  mov w1,#0x10
7101aec78c  str wzr,[x21, #0x13d0]
7101aec790  str xzr,[x21, x8, LSL #0x0]
7101aec794  str xzr,[x21, #0x13c0]
7101aec798  str xzr,[x21, #0x13b8]
7101aec79c  str xzr,[x21, #0x13b0]
7101aec7a0  str xzr,[x21, #0x13a8]
7101aec7a4  str xzr,[x21, #0x13a0]
7101aec7a8  str xzr,[x21, #0x1470]
7101aec7ac  str xzr,[x21, #0x1468]
7101aec7b0  str xzr,[x21, #0x1460]
7101aec7b4  str xzr,[x21, #0x1458]
7101aec7b8  str xzr,[x21, #0x1450]
7101aec7bc  str xzr,[x21, #0x1448]
7101aec7c0  str xzr,[x21, #0x1440]
7101aec7c4  str xzr,[x21, #0x1438]
7101aec7c8  str xzr,[x21, #0x1430]
7101aec7cc  str xzr,[x21, #0x1428]
7101aec7d0  str xzr,[x21, #0x1420]
7101aec7d4  str xzr,[x21, #0x1418]
7101aec7d8  str xzr,[x21, #0x1410]
7101aec7dc  str xzr,[x21, #0x1408]
7101aec7e0  str xzr,[x21, #0x1400]
7101aec7e4  str xzr,[x21, #0x13f8]
7101aec7e8  str xzr,[x21, #0x13f0]
7101aec7ec  str xzr,[x21, #0x13e8]
7101aec7f0  str xzr,[x21, #0x13e0]
7101aec7f4  str xzr,[x21, #0x13d8]
7101aec7f8  str x24,[x21, #0x1478]
7101aec7fc  bl 0x710392e290
7101aec800  cbnz x0,0x7101aec848
7101aec804  adrp x8,0x7105332000
7101aec808  ldr x0,[x8, #0xf00]
7101aec80c  cbz x0,0x7101aec844
7101aec810  mov w8,#0x10
7101aec814  str wzr,[sp, #0x10]
7101aec818  add x1,sp,#0x10
7101aec81c  str x8,[sp, #0x140]
7101aec820  ldr x8,[x0]
7101aec824  ldr x8,[x8, #0x30]
7101aec828  add x2,sp,#0x140
7101aec82c  blr x8
7101aec830  tbz w0,#0x0,0x7101aec844
7101aec834  mov w0,#0x10
7101aec838  mov w1,#0x10
7101aec83c  bl 0x710392e290
7101aec840  cbnz x0,0x7101aec848
7101aec844  mov x0,xzr
7101aec848  stp xzr,xzr,[x0]
7101aec84c  mov w1,#0x10
7101aec850  str x0,[x21, #0x1480]
7101aec854  mov w0,#0x10
7101aec858  str x24,[x21, #0x1488]
7101aec85c  bl 0x710392e290
7101aec860  cbnz x0,0x7101aec8a8
7101aec864  adrp x8,0x7105332000
7101aec868  ldr x0,[x8, #0xf00]
7101aec86c  cbz x0,0x7101aec8a4
7101aec870  mov w8,#0x10
7101aec874  str wzr,[sp, #0x10]
7101aec878  add x1,sp,#0x10
7101aec87c  str x8,[sp, #0x140]
7101aec880  ldr x8,[x0]
7101aec884  ldr x8,[x8, #0x30]
7101aec888  add x2,sp,#0x140
7101aec88c  blr x8
7101aec890  tbz w0,#0x0,0x7101aec8a4
7101aec894  mov w0,#0x10
7101aec898  mov w1,#0x10
7101aec89c  bl 0x710392e290
7101aec8a0  cbnz x0,0x7101aec8a8
7101aec8a4  mov x0,xzr
7101aec8a8  mov w8,#0x1558
7101aec8ac  stp xzr,xzr,[x0]
7101aec8b0  str x0,[x21, #0x1490]
7101aec8b4  add x0,x21,x8
7101aec8b8  mov w8,#0x1546
7101aec8bc  str xzr,[x21, #0x14c8]
7101aec8c0  str xzr,[x21, x8, LSL #0x0]
7101aec8c4  str xzr,[x21, #0x1540]
7101aec8c8  str xzr,[x21, #0x1538]
7101aec8cc  str xzr,[x21, #0x1530]
7101aec8d0  str xzr,[x21, #0x1528]
7101aec8d4  str xzr,[x21, #0x1520]
7101aec8d8  str xzr,[x21, #0x1518]
7101aec8dc  str xzr,[x21, #0x1510]
7101aec8e0  str xzr,[x21, #0x1508]
7101aec8e4  str xzr,[x21, #0x1500]
7101aec8e8  str xzr,[x21, #0x14f8]
7101aec8ec  str xzr,[x21, #0x14f0]
7101aec8f0  str xzr,[x21, #0x1610]
7101aec8f4  str xzr,[x21, #0x1608]
7101aec8f8  str xzr,[x21, #0x1600]
7101aec8fc  str xzr,[x21, #0x15f8]
7101aec900  str xzr,[x21, #0x15f0]
7101aec904  str xzr,[x21, #0x15e8]
7101aec908  str xzr,[x21, #0x15e0]
7101aec90c  str xzr,[x21, #0x15d8]
7101aec910  str xzr,[x21, #0x15d0]
7101aec914  str xzr,[x21, #0x15c8]
7101aec918  str xzr,[x21, #0x15c0]
7101aec91c  str xzr,[x21, #0x15b8]
7101aec920  str xzr,[x21, #0x15b0]
7101aec924  str xzr,[x21, #0x15a8]
7101aec928  str xzr,[x21, #0x15a0]
7101aec92c  str xzr,[x21, #0x1598]
7101aec930  str xzr,[x21, #0x1590]
7101aec934  str xzr,[x21, #0x1588]
7101aec938  str xzr,[x21, #0x1580]
7101aec93c  str xzr,[x21, #0x1578]
7101aec940  str xzr,[x21, #0x1570]
7101aec944  str xzr,[x21, #0x1568]
7101aec948  str xzr,[x21, #0x1560]
7101aec94c  str xzr,[x21, #0x1558]
7101aec950  str xzr,[x21, #0x1550]
7101aec954  bl 0x71004f5770
7101aec958  mov w8,#0x163e
7101aec95c  mov w0,#0x10
7101aec960  mov w1,#0x10
7101aec964  str wzr,[x21, #0x1648]
7101aec968  str xzr,[x21, x8, LSL #0x0]
7101aec96c  str xzr,[x21, #0x1638]
7101aec970  str xzr,[x21, #0x1630]
7101aec974  str xzr,[x21, #0x1628]
7101aec978  str xzr,[x21, #0x1620]
7101aec97c  str xzr,[x21, #0x1618]
7101aec980  str xzr,[x21, #0x16e8]
7101aec984  str xzr,[x21, #0x16e0]
7101aec988  str xzr,[x21, #0x16d8]
7101aec98c  str xzr,[x21, #0x16d0]
7101aec990  str xzr,[x21, #0x16c8]
7101aec994  str xzr,[x21, #0x16c0]
7101aec998  str xzr,[x21, #0x16b8]
7101aec99c  str xzr,[x21, #0x16b0]
7101aec9a0  str xzr,[x21, #0x16a8]
7101aec9a4  str xzr,[x21, #0x16a0]
7101aec9a8  str xzr,[x21, #0x1698]
7101aec9ac  str xzr,[x21, #0x1690]
7101aec9b0  str xzr,[x21, #0x1688]
7101aec9b4  str xzr,[x21, #0x1680]
7101aec9b8  str xzr,[x21, #0x1678]
7101aec9bc  str xzr,[x21, #0x1670]
7101aec9c0  str xzr,[x21, #0x1668]
7101aec9c4  str xzr,[x21, #0x1660]
7101aec9c8  str xzr,[x21, #0x1658]
7101aec9cc  str xzr,[x21, #0x1650]
7101aec9d0  str x24,[x21, #0x16f0]
7101aec9d4  bl 0x710392e290
7101aec9d8  cbnz x0,0x7101aeca20
7101aec9dc  adrp x8,0x7105332000
7101aec9e0  ldr x0,[x8, #0xf00]
7101aec9e4  cbz x0,0x7101aeca1c
7101aec9e8  mov w8,#0x10
7101aec9ec  str wzr,[sp, #0x10]
7101aec9f0  add x1,sp,#0x10
7101aec9f4  str x8,[sp, #0x140]
7101aec9f8  ldr x8,[x0]
7101aec9fc  ldr x8,[x8, #0x30]
7101aeca00  add x2,sp,#0x140
7101aeca04  blr x8
7101aeca08  tbz w0,#0x0,0x7101aeca1c
7101aeca0c  mov w0,#0x10
7101aeca10  mov w1,#0x10
7101aeca14  bl 0x710392e290
7101aeca18  cbnz x0,0x7101aeca20
7101aeca1c  mov x0,xzr
7101aeca20  stp xzr,xzr,[x0]
7101aeca24  mov w1,#0x10
7101aeca28  str x0,[x21, #0x16f8]
7101aeca2c  mov w0,#0x10
7101aeca30  str x24,[x21, #0x1700]
7101aeca34  bl 0x710392e290
7101aeca38  cbnz x0,0x7101aeca80
7101aeca3c  adrp x8,0x7105332000
7101aeca40  ldr x0,[x8, #0xf00]
7101aeca44  cbz x0,0x7101aeca7c
7101aeca48  mov w8,#0x10
7101aeca4c  str wzr,[sp, #0x10]
7101aeca50  add x1,sp,#0x10
7101aeca54  str x8,[sp, #0x140]
7101aeca58  ldr x8,[x0]
7101aeca5c  ldr x8,[x8, #0x30]
7101aeca60  add x2,sp,#0x140
7101aeca64  blr x8
7101aeca68  tbz w0,#0x0,0x7101aeca7c
7101aeca6c  mov w0,#0x10
7101aeca70  mov w1,#0x10
7101aeca74  bl 0x710392e290
7101aeca78  cbnz x0,0x7101aeca80
7101aeca7c  mov x0,xzr
7101aeca80  mov w8,#0x17d0
7101aeca84  stp xzr,xzr,[x0]
7101aeca88  str x0,[x21, #0x1708]
7101aeca8c  add x0,x21,x8
7101aeca90  mov w8,#0x17be
7101aeca94  str xzr,[x21, #0x1740]
7101aeca98  str xzr,[x21, x8, LSL #0x0]
7101aeca9c  str xzr,[x21, #0x17b8]
7101aecaa0  str xzr,[x21, #0x17b0]
7101aecaa4  str xzr,[x21, #0x17a8]
7101aecaa8  str xzr,[x21, #0x17a0]
7101aecaac  str xzr,[x21, #0x1798]
7101aecab0  str xzr,[x21, #0x1790]
7101aecab4  str xzr,[x21, #0x1788]
7101aecab8  str xzr,[x21, #0x1780]
7101aecabc  str xzr,[x21, #0x1778]
7101aecac0  str xzr,[x21, #0x1770]
7101aecac4  str xzr,[x21, #0x1768]
7101aecac8  str xzr,[x21, #0x1888]
7101aecacc  str xzr,[x21, #0x1880]
7101aecad0  str xzr,[x21, #0x1878]
7101aecad4  str xzr,[x21, #0x1870]
7101aecad8  str xzr,[x21, #0x1868]
7101aecadc  str xzr,[x21, #0x1860]
7101aecae0  str xzr,[x21, #0x1858]
7101aecae4  str xzr,[x21, #0x1850]
7101aecae8  str xzr,[x21, #0x1848]
7101aecaec  str xzr,[x21, #0x1840]
7101aecaf0  str xzr,[x21, #0x1838]
7101aecaf4  str xzr,[x21, #0x1830]
7101aecaf8  str xzr,[x21, #0x1828]
7101aecafc  str xzr,[x21, #0x1820]
7101aecb00  str xzr,[x21, #0x1818]
7101aecb04  str xzr,[x21, #0x1810]
7101aecb08  str xzr,[x21, #0x1808]
7101aecb0c  str xzr,[x21, #0x1800]
7101aecb10  str xzr,[x21, #0x17f8]
7101aecb14  str xzr,[x21, #0x17f0]
7101aecb18  str xzr,[x21, #0x17e8]
7101aecb1c  str xzr,[x21, #0x17e0]
7101aecb20  str xzr,[x21, #0x17d8]
7101aecb24  str xzr,[x21, #0x17d0]
7101aecb28  str xzr,[x21, #0x17c8]
7101aecb2c  bl 0x71004f5770
7101aecb30  mov w8,#0x18b6
7101aecb34  mov w0,#0x10
7101aecb38  mov w1,#0x10
7101aecb3c  str wzr,[x21, #0x18c0]
7101aecb40  str xzr,[x21, x8, LSL #0x0]
7101aecb44  str xzr,[x21, #0x18b0]
7101aecb48  str xzr,[x21, #0x18a8]
7101aecb4c  str xzr,[x21, #0x18a0]
7101aecb50  str xzr,[x21, #0x1898]
7101aecb54  str xzr,[x21, #0x1890]
7101aecb58  str xzr,[x21, #0x1960]
7101aecb5c  str xzr,[x21, #0x1958]
7101aecb60  str xzr,[x21, #0x1950]
7101aecb64  str xzr,[x21, #0x1948]
7101aecb68  str xzr,[x21, #0x1940]
7101aecb6c  str xzr,[x21, #0x1938]
7101aecb70  str xzr,[x21, #0x1930]
7101aecb74  str xzr,[x21, #0x1928]
7101aecb78  str xzr,[x21, #0x1920]
7101aecb7c  str xzr,[x21, #0x1918]
7101aecb80  str xzr,[x21, #0x1910]
7101aecb84  str xzr,[x21, #0x1908]
7101aecb88  str xzr,[x21, #0x1900]
7101aecb8c  str xzr,[x21, #0x18f8]
7101aecb90  str xzr,[x21, #0x18f0]
7101aecb94  str xzr,[x21, #0x18e8]
7101aecb98  str xzr,[x21, #0x18e0]
7101aecb9c  str xzr,[x21, #0x18d8]
7101aecba0  str xzr,[x21, #0x18d0]
7101aecba4  str xzr,[x21, #0x18c8]
7101aecba8  str x24,[x21, #0x1968]
7101aecbac  bl 0x710392e290
7101aecbb0  cbnz x0,0x7101aecbf8
7101aecbb4  adrp x8,0x7105332000
7101aecbb8  ldr x0,[x8, #0xf00]
7101aecbbc  cbz x0,0x7101aecbf4
7101aecbc0  mov w8,#0x10
7101aecbc4  str wzr,[sp, #0x10]
7101aecbc8  add x1,sp,#0x10
7101aecbcc  str x8,[sp, #0x140]
7101aecbd0  ldr x8,[x0]
7101aecbd4  ldr x8,[x8, #0x30]
7101aecbd8  add x2,sp,#0x140
7101aecbdc  blr x8
7101aecbe0  tbz w0,#0x0,0x7101aecbf4
7101aecbe4  mov w0,#0x10
7101aecbe8  mov w1,#0x10
7101aecbec  bl 0x710392e290
7101aecbf0  cbnz x0,0x7101aecbf8
7101aecbf4  mov x0,xzr
7101aecbf8  stp xzr,xzr,[x0]
7101aecbfc  mov w1,#0x10
7101aecc00  str x0,[x21, #0x1970]
7101aecc04  mov w0,#0x10
7101aecc08  str x24,[x21, #0x1978]
7101aecc0c  bl 0x710392e290
7101aecc10  cbnz x0,0x7101aecc58
7101aecc14  adrp x8,0x7105332000
7101aecc18  ldr x0,[x8, #0xf00]
7101aecc1c  cbz x0,0x7101aecc54
7101aecc20  mov w8,#0x10
7101aecc24  str wzr,[sp, #0x10]
7101aecc28  add x1,sp,#0x10
7101aecc2c  str x8,[sp, #0x140]
7101aecc30  ldr x8,[x0]
7101aecc34  ldr x8,[x8, #0x30]
7101aecc38  add x2,sp,#0x140
7101aecc3c  blr x8
7101aecc40  tbz w0,#0x0,0x7101aecc54
7101aecc44  mov w0,#0x10
7101aecc48  mov w1,#0x10
7101aecc4c  bl 0x710392e290
7101aecc50  cbnz x0,0x7101aecc58
7101aecc54  mov x0,xzr
7101aecc58  mov w8,#0x1990
7101aecc5c  add x23,x21,x8
7101aecc60  stp xzr,xzr,[x0]
7101aecc64  str x0,[x21, #0x1980]
7101aecc68  mov x0,x23
7101aecc6c  str xzr,[x21, #0x19b8]
7101aecc70  str xzr,[x21, #0x19b0]
7101aecc74  str xzr,[x21, #0x19a8]
7101aecc78  str xzr,[x21, #0x19a0]
7101aecc7c  str xzr,[x21, #0x1998]
7101aecc80  str xzr,[x21, #0x1990]
7101aecc84  str x22,[x21, #0x19c0]
7101aecc88  str wzr,[x21, #0x19c8]
7101aecc8c  str wzr,[x21, #0x358]
7101aecc90  str xzr,[x21, #0x378]
7101aecc94  str xzr,[x21, #0x370]
7101aecc98  str xzr,[x21, #0x368]
7101aecc9c  str xzr,[x21, #0x360]
7101aecca0  bl 0x7101432380
7101aecca4  ldr x8,[x21, #0x19b8]
7101aecca8  ldr x9,[x21, #0x19b0]
7101aeccac  add x8,x9,x8
7101aeccb0  ldr x10,[x21, #0x1998]
7101aeccb4  lsr x9,x8,#0x7
7101aeccb8  and x8,x8,#0x3ff
7101aeccbc  and x9,x9,#0x1fffffffffffff8
7101aeccc0  ldr x9,[x10, x9, LSL #0x0]
7101aeccc4  str wzr,[x9, x8, LSL #0x2]
7101aeccc8  ldr x8,[x21, #0x19b8]
7101aecccc  add x9,x8,#0x1
7101aeccd0  ldr x10,[x21, #0x19a0]
7101aeccd4  ldr x8,[x21, #0x1998]
7101aeccd8  ldr x11,[x21, #0x19b0]
7101aeccdc  str x9,[x21, #0x19b8]
7101aecce0  add x9,x9,x11
7101aecce4  subs x10,x10,x8
7101aecce8  lsl x10,x10,#0x7
7101aeccec  sub x10,x10,#0x1
7101aeccf0  csel x10,xzr,x10,eq
7101aeccf4  cmp x10,x9
7101aeccf8  str wzr,[x21, #0x5d0]
7101aeccfc  str xzr,[x21, #0x5f0]
7101aecd00  str xzr,[x21, #0x5e8]
7101aecd04  str xzr,[x21, #0x5e0]
7101aecd08  str xzr,[x21, #0x5d8]
7101aecd0c  b.ne 0x7101aecd28
7101aecd10  mov x0,x23
7101aecd14  bl 0x7101432380
7101aecd18  ldr x9,[x21, #0x19b8]
7101aecd1c  ldr x10,[x21, #0x19b0]
7101aecd20  add x9,x10,x9
7101aecd24  ldr x8,[x21, #0x1998]
7101aecd28  lsr x10,x9,#0x7
7101aecd2c  and x9,x9,#0x3ff
7101aecd30  and x10,x10,#0x1fffffffffffff8
7101aecd34  ldr x8,[x8, x10, LSL #0x0]
7101aecd38  mov w10,#0x1
7101aecd3c  str w10,[x8, x9, LSL #0x2]
7101aecd40  ldr x8,[x21, #0x19b8]
7101aecd44  add x9,x8,#0x1
7101aecd48  ldr x10,[x21, #0x19a0]
7101aecd4c  ldr x8,[x21, #0x1998]
7101aecd50  ldr x11,[x21, #0x19b0]
7101aecd54  str x9,[x21, #0x19b8]
7101aecd58  add x9,x9,x11
7101aecd5c  subs x10,x10,x8
7101aecd60  lsl x10,x10,#0x7
7101aecd64  sub x10,x10,#0x1
7101aecd68  csel x10,xzr,x10,eq
7101aecd6c  cmp x10,x9
7101aecd70  str wzr,[x21, #0x848]
7101aecd74  str xzr,[x21, #0x868]
7101aecd78  str xzr,[x21, #0x860]
7101aecd7c  str xzr,[x21, #0x858]
7101aecd80  str xzr,[x21, #0x850]
7101aecd84  b.ne 0x7101aecda0
7101aecd88  mov x0,x23
7101aecd8c  bl 0x7101432380
7101aecd90  ldr x9,[x21, #0x19b8]
7101aecd94  ldr x10,[x21, #0x19b0]
7101aecd98  add x9,x10,x9
7101aecd9c  ldr x8,[x21, #0x1998]
7101aecda0  lsr x10,x9,#0x7
7101aecda4  and x9,x9,#0x3ff
7101aecda8  and x10,x10,#0x1fffffffffffff8
7101aecdac  ldr x8,[x8, x10, LSL #0x0]
7101aecdb0  mov w10,#0x2
7101aecdb4  str w10,[x8, x9, LSL #0x2]
7101aecdb8  ldr x8,[x21, #0x19b8]
7101aecdbc  add x9,x8,#0x1
7101aecdc0  ldr x10,[x21, #0x19a0]
7101aecdc4  ldr x8,[x21, #0x1998]
7101aecdc8  ldr x11,[x21, #0x19b0]
7101aecdcc  str x9,[x21, #0x19b8]
7101aecdd0  add x9,x9,x11
7101aecdd4  subs x10,x10,x8
7101aecdd8  lsl x10,x10,#0x7
7101aecddc  sub x10,x10,#0x1
7101aecde0  csel x10,xzr,x10,eq
7101aecde4  cmp x10,x9
7101aecde8  str wzr,[x21, #0xac0]
7101aecdec  str xzr,[x21, #0xae0]
7101aecdf0  str xzr,[x21, #0xad8]
7101aecdf4  str xzr,[x21, #0xad0]
7101aecdf8  str xzr,[x21, #0xac8]
7101aecdfc  b.ne 0x7101aece18
7101aece00  mov x0,x23
7101aece04  bl 0x7101432380
7101aece08  ldr x9,[x21, #0x19b8]
7101aece0c  ldr x10,[x21, #0x19b0]
7101aece10  add x9,x10,x9
7101aece14  ldr x8,[x21, #0x1998]
7101aece18  lsr x10,x9,#0x7
7101aece1c  and x9,x9,#0x3ff
7101aece20  and x10,x10,#0x1fffffffffffff8
7101aece24  ldr x8,[x8, x10, LSL #0x0]
7101aece28  orr w10,wzr,#0x3
7101aece2c  str w10,[x8, x9, LSL #0x2]
7101aece30  ldr x8,[x21, #0x19b8]
7101aece34  add x9,x8,#0x1
7101aece38  ldr x10,[x21, #0x19a0]
7101aece3c  ldr x8,[x21, #0x1998]
7101aece40  ldr x11,[x21, #0x19b0]
7101aece44  str x9,[x21, #0x19b8]
7101aece48  add x9,x9,x11
7101aece4c  subs x10,x10,x8
7101aece50  lsl x10,x10,#0x7
7101aece54  sub x10,x10,#0x1
7101aece58  csel x10,xzr,x10,eq
7101aece5c  cmp x10,x9
7101aece60  str wzr,[x21, #0xd38]
7101aece64  str xzr,[x21, #0xd58]
7101aece68  str xzr,[x21, #0xd50]
7101aece6c  str xzr,[x21, #0xd48]
7101aece70  str xzr,[x21, #0xd40]
7101aece74  b.ne 0x7101aece90
7101aece78  mov x0,x23
7101aece7c  bl 0x7101432380
7101aece80  ldr x9,[x21, #0x19b8]
7101aece84  ldr x10,[x21, #0x19b0]
7101aece88  add x9,x10,x9
7101aece8c  ldr x8,[x21, #0x1998]
7101aece90  lsr x10,x9,#0x7
7101aece94  and x9,x9,#0x3ff
7101aece98  and x10,x10,#0x1fffffffffffff8
7101aece9c  ldr x8,[x8, x10, LSL #0x0]
7101aecea0  mov w10,#0x4
7101aecea4  str w10,[x8, x9, LSL #0x2]
7101aecea8  ldr x8,[x21, #0x19b8]
7101aeceac  add x9,x8,#0x1
7101aeceb0  ldr x10,[x21, #0x19a0]
7101aeceb4  ldr x8,[x21, #0x1998]
7101aeceb8  ldr x11,[x21, #0x19b0]
7101aecebc  str x9,[x21, #0x19b8]
7101aecec0  add x9,x9,x11
7101aecec4  subs x10,x10,x8
7101aecec8  lsl x10,x10,#0x7
7101aececc  sub x10,x10,#0x1
7101aeced0  csel x10,xzr,x10,eq
7101aeced4  cmp x10,x9
7101aeced8  str wzr,[x21, #0xfb0]
7101aecedc  str xzr,[x21, #0xfd0]
7101aecee0  str xzr,[x21, #0xfc8]
7101aecee4  str xzr,[x21, #0xfc0]
7101aecee8  str xzr,[x21, #0xfb8]
7101aeceec  b.ne 0x7101aecf08
7101aecef0  mov x0,x23
7101aecef4  bl 0x7101432380
7101aecef8  ldr x9,[x21, #0x19b8]
7101aecefc  ldr x10,[x21, #0x19b0]
7101aecf00  add x9,x10,x9
7101aecf04  ldr x8,[x21, #0x1998]
7101aecf08  lsr x10,x9,#0x7
7101aecf0c  and x9,x9,#0x3ff
7101aecf10  and x10,x10,#0x1fffffffffffff8
7101aecf14  ldr x8,[x8, x10, LSL #0x0]
7101aecf18  mov w10,#0x5
7101aecf1c  str w10,[x8, x9, LSL #0x2]
7101aecf20  ldr x8,[x21, #0x19b8]
7101aecf24  add x9,x8,#0x1
7101aecf28  ldr x10,[x21, #0x19a0]
7101aecf2c  ldr x8,[x21, #0x1998]
7101aecf30  ldr x11,[x21, #0x19b0]
7101aecf34  str x9,[x21, #0x19b8]
7101aecf38  add x9,x9,x11
7101aecf3c  subs x10,x10,x8
7101aecf40  lsl x10,x10,#0x7
7101aecf44  sub x10,x10,#0x1
7101aecf48  csel x10,xzr,x10,eq
7101aecf4c  cmp x10,x9
7101aecf50  str wzr,[x21, #0x1228]
7101aecf54  str xzr,[x21, #0x1248]
7101aecf58  str xzr,[x21, #0x1240]
7101aecf5c  str xzr,[x21, #0x1238]
7101aecf60  str xzr,[x21, #0x1230]
7101aecf64  b.ne 0x7101aecf80
7101aecf68  mov x0,x23
7101aecf6c  bl 0x7101432380
7101aecf70  ldr x9,[x21, #0x19b8]
7101aecf74  ldr x10,[x21, #0x19b0]
7101aecf78  add x9,x10,x9
7101aecf7c  ldr x8,[x21, #0x1998]
7101aecf80  lsr x10,x9,#0x7
7101aecf84  and x9,x9,#0x3ff
7101aecf88  and x10,x10,#0x1fffffffffffff8
7101aecf8c  ldr x8,[x8, x10, LSL #0x0]
7101aecf90  orr w10,wzr,#0x6
7101aecf94  str w10,[x8, x9, LSL #0x2]
7101aecf98  ldr x8,[x21, #0x19b8]
7101aecf9c  add x9,x8,#0x1
7101aecfa0  ldr x10,[x21, #0x19a0]
7101aecfa4  ldr x8,[x21, #0x1998]
7101aecfa8  ldr x11,[x21, #0x19b0]
7101aecfac  str x9,[x21, #0x19b8]
7101aecfb0  add x9,x9,x11
7101aecfb4  subs x10,x10,x8
7101aecfb8  lsl x10,x10,#0x7
7101aecfbc  sub x10,x10,#0x1
7101aecfc0  csel x10,xzr,x10,eq
7101aecfc4  cmp x10,x9
7101aecfc8  str wzr,[x21, #0x14a0]
7101aecfcc  str xzr,[x21, #0x14c0]
7101aecfd0  str xzr,[x21, #0x14b8]
7101aecfd4  str xzr,[x21, #0x14b0]
7101aecfd8  str xzr,[x21, #0x14a8]
7101aecfdc  b.ne 0x7101aecff8
7101aecfe0  mov x0,x23
7101aecfe4  bl 0x7101432380
7101aecfe8  ldr x9,[x21, #0x19b8]
7101aecfec  ldr x10,[x21, #0x19b0]
7101aecff0  add x9,x10,x9
7101aecff4  ldr x8,[x21, #0x1998]
7101aecff8  lsr x10,x9,#0x7
7101aecffc  and x9,x9,#0x3ff
7101aed000  and x10,x10,#0x1fffffffffffff8
7101aed004  ldr x8,[x8, x10, LSL #0x0]
7101aed008  orr w10,wzr,#0x7
7101aed00c  str w10,[x8, x9, LSL #0x2]
7101aed010  ldr x8,[x21, #0x19b8]
7101aed014  add x9,x8,#0x1
7101aed018  ldr x10,[x21, #0x19a0]
7101aed01c  ldr x8,[x21, #0x1998]
7101aed020  ldr x11,[x21, #0x19b0]
7101aed024  str x9,[x21, #0x19b8]
7101aed028  add x9,x9,x11
7101aed02c  subs x10,x10,x8
7101aed030  lsl x10,x10,#0x7
7101aed034  sub x10,x10,#0x1
7101aed038  csel x10,xzr,x10,eq
7101aed03c  cmp x10,x9
7101aed040  str wzr,[x21, #0x1718]
7101aed044  str xzr,[x21, #0x1738]
7101aed048  str xzr,[x21, #0x1730]
7101aed04c  str xzr,[x21, #0x1728]
7101aed050  str xzr,[x21, #0x1720]
7101aed054  b.ne 0x7101aed070
7101aed058  mov x0,x23
7101aed05c  bl 0x7101432380
7101aed060  ldr x9,[x21, #0x19b8]
7101aed064  ldr x10,[x21, #0x19b0]
7101aed068  add x9,x10,x9
7101aed06c  ldr x8,[x21, #0x1998]
7101aed070  lsr x10,x9,#0x7
7101aed074  and x9,x9,#0x3ff
7101aed078  and x10,x10,#0x1fffffffffffff8
7101aed07c  ldr x8,[x8, x10, LSL #0x0]
7101aed080  mov w10,#0x8
7101aed084  str w10,[x8, x9, LSL #0x2]
7101aed088  adrp x9,0x7101ae7000
7101aed08c  add x9,x9,#0x550
7101aed090  adrp x8,0x7101ae7000
7101aed094  add x8,x8,#0x4b0
7101aed098  stp x9,xzr,[x21, #0x48]
7101aed09c  ldr x9,[x21, #0x19b8]
7101aed0a0  stp x8,xzr,[x21, #0x28]
7101aed0a4  adrp x8,0x7101ae7000
7101aed0a8  add x8,x8,#0x4c0
7101aed0ac  stp x8,xzr,[x21, #0x38]
7101aed0b0  adrp x8,0x7101ae7000
7101aed0b4  add x8,x8,#0x940
7101aed0b8  add x9,x9,#0x1
7101aed0bc  stp x8,xzr,[x21, #0x58]
7101aed0c0  adrp x8,0x7101ae7000
7101aed0c4  add x8,x8,#0xc60
7101aed0c8  stp x8,xzr,[x21, #0x78]
7101aed0cc  adrp x8,0x7101ae7000
7101aed0d0  add x8,x8,#0xef0
7101aed0d4  str x9,[x21, #0x19b8]
7101aed0d8  stp x8,xzr,[x21, #0x88]
7101aed0dc  ldr x9,[x21, #0x338]
7101aed0e0  ldr x8,[x21, #0x340]
7101aed0e4  adrp x10,0x7101ae7000
7101aed0e8  add x10,x10,#0xc50
7101aed0ec  add x22,x21,#0x330
7101aed0f0  stp x10,xzr,[x21, #0x68]
7101aed0f4  adrp x10,0x7101ae8000
7101aed0f8  add x10,x10,#0xc0
7101aed0fc  cmp x9,x8
7101aed100  stp x10,xzr,[x21, #0x98]
7101aed104  b.cs 0x7101aed120
7101aed108  mov w8,#0x2
7101aed10c  str w8,[x9]
7101aed110  ldr x8,[x21, #0x338]
7101aed114  add x26,x8,#0x4
7101aed118  str x26,[x21, #0x338]
7101aed11c  b 0x7101aed238
7101aed120  ldr x23,[x22]
7101aed124  sub x24,x9,x23
7101aed128  mov x27,x28
7101aed12c  asr x28,x24,#0x2
7101aed130  add x9,x28,#0x1
7101aed134  lsr x10,x9,#0x3e
7101aed138  cbnz x10,0x7101aee580
7101aed13c  sub x8,x8,x23
7101aed140  asr x10,x8,#0x2
7101aed144  orr x11,xzr,#0x1ffffffffffffffe
7101aed148  cmp x10,x11
7101aed14c  b.hi 0x7101aed170
7101aed150  asr x8,x8,#0x1
7101aed154  cmp x8,x9
7101aed158  csel x19,x9,x8,cc
7101aed15c  cbz x19,0x7101aed1dc
7101aed160  mov x20,x25
7101aed164  lsr x8,x19,#0x3e
7101aed168  cbz x8,0x7101aed178
7101aed16c  b 0x7101aee57c
7101aed170  mov x20,x25
7101aed174  orr x19,xzr,#0x3fffffffffffffff
7101aed178  lsl x8,x19,#0x2
7101aed17c  cmp x8,#0x0
7101aed180  csinc x26,x8,xzr,ne
7101aed184  mov w0,#0x10
7101aed188  mov x1,x26
7101aed18c  bl 0x710392e290
7101aed190  mov x25,x0
7101aed194  cbnz x0,0x7101aed1e4
7101aed198  adrp x8,0x7105332000
7101aed19c  ldr x0,[x8, #0xf00]
7101aed1a0  cbz x0,0x7101aed1e0
7101aed1a4  str wzr,[sp, #0x10]
7101aed1a8  str x26,[sp, #0x140]
7101aed1ac  ldr x8,[x0]
7101aed1b0  ldr x8,[x8, #0x30]
7101aed1b4  add x1,sp,#0x10
7101aed1b8  add x2,sp,#0x140
7101aed1bc  blr x8
7101aed1c0  tbz w0,#0x0,0x7101aed1e0
7101aed1c4  mov w0,#0x10
7101aed1c8  mov x1,x26
7101aed1cc  bl 0x710392e290
7101aed1d0  mov x25,x0
7101aed1d4  cbnz x0,0x7101aed1e4
7101aed1d8  b 0x7101aed1e0
7101aed1dc  mov x20,x25
7101aed1e0  mov x25,xzr
7101aed1e4  add x26,x25,x28, LSL #0x2
7101aed1e8  mov w8,#0x2
7101aed1ec  add x19,x25,x19, LSL #0x2
7101aed1f0  str w8,[x26], #0x4
7101aed1f4  cmp x24,#0x1
7101aed1f8  b.lt 0x7101aed20c
7101aed1fc  mov x0,x25
7101aed200  mov x1,x23
7101aed204  mov x2,x24
7101aed208  bl 0x71039c00e0
7101aed20c  str x25,[x21, #0x330]
7101aed210  mov x25,x20
7101aed214  mov x28,x27
7101aed218  adrp x27,0x710523d000
7101aed21c  add x27,x27,#0x9a8
7101aed220  str x26,[x21, #0x338]
7101aed224  str x19,[x21, #0x340]
7101aed228  cbz x23,0x7101aed238
7101aed22c  mov x0,x23
7101aed230  bl 0x710392eb40
7101aed234  ldr x26,[x21, #0x338]
7101aed238  ldr x8,[x21, #0x340]
7101aed23c  cmp x26,x8
7101aed240  b.cs 0x7101aed25c
7101aed244  orr w8,wzr,#0x3
7101aed248  str w8,[x26]
7101aed24c  ldr x8,[x21, #0x338]
7101aed250  add x8,x8,#0x4
7101aed254  str x8,[x21, #0x338]
7101aed258  b 0x7101aed360
7101aed25c  ldr x23,[x22]
7101aed260  sub x24,x26,x23
7101aed264  asr x26,x24,#0x2
7101aed268  add x9,x26,#0x1
7101aed26c  lsr x10,x9,#0x3e
7101aed270  cbnz x10,0x7101aee580
7101aed274  sub x8,x8,x23
7101aed278  asr x10,x8,#0x2
7101aed27c  orr x11,xzr,#0x1ffffffffffffffe
7101aed280  cmp x10,x11
7101aed284  b.hi 0x7101aed2a8
7101aed288  asr x8,x8,#0x1
7101aed28c  cmp x8,x9
7101aed290  csel x19,x9,x8,cc
7101aed294  cbz x19,0x7101aed314
7101aed298  mov x20,x25
7101aed29c  lsr x8,x19,#0x3e
7101aed2a0  cbz x8,0x7101aed2b0
7101aed2a4  b 0x7101aee57c
7101aed2a8  mov x20,x25
7101aed2ac  orr x19,xzr,#0x3fffffffffffffff
7101aed2b0  lsl x8,x19,#0x2
7101aed2b4  cmp x8,#0x0
7101aed2b8  csinc x25,x8,xzr,ne
7101aed2bc  mov w0,#0x10
7101aed2c0  mov x1,x25
7101aed2c4  bl 0x710392e290
7101aed2c8  mov x22,x0
7101aed2cc  cbnz x0,0x7101aed31c
7101aed2d0  adrp x8,0x7105332000
7101aed2d4  ldr x0,[x8, #0xf00]
7101aed2d8  cbz x0,0x7101aed318
7101aed2dc  str wzr,[sp, #0x10]
7101aed2e0  str x25,[sp, #0x140]
7101aed2e4  ldr x8,[x0]
7101aed2e8  ldr x8,[x8, #0x30]
7101aed2ec  add x1,sp,#0x10
7101aed2f0  add x2,sp,#0x140
7101aed2f4  blr x8
7101aed2f8  tbz w0,#0x0,0x7101aed318
7101aed2fc  mov w0,#0x10
7101aed300  mov x1,x25
7101aed304  bl 0x710392e290
7101aed308  mov x22,x0
7101aed30c  cbnz x0,0x7101aed31c
7101aed310  b 0x7101aed318
7101aed314  mov x20,x25
7101aed318  mov x22,xzr
7101aed31c  add x25,x22,x26, LSL #0x2
7101aed320  orr w8,wzr,#0x3
7101aed324  add x19,x22,x19, LSL #0x2
7101aed328  str w8,[x25], #0x4
7101aed32c  cmp x24,#0x1
7101aed330  b.lt 0x7101aed344
7101aed334  mov x0,x22
7101aed338  mov x1,x23
7101aed33c  mov x2,x24
7101aed340  bl 0x71039c00e0
7101aed344  str x25,[x21, #0x338]
7101aed348  mov x25,x20
7101aed34c  str x22,[x21, #0x330]
7101aed350  str x19,[x21, #0x340]
7101aed354  cbz x23,0x7101aed360
7101aed358  mov x0,x23
7101aed35c  bl 0x710392eb40
7101aed360  ldrsw x8,[x21, #0xf4]
7101aed364  cmp w8,#0x13
7101aed368  b.cs 0x7101aee57c
7101aed36c  add x8,x21,x8, LSL #0x2
7101aed370  str wzr,[x8, #0xa8]
7101aed374  adrp x23,0x7105325000
7101aed378  ldr x8,[x23, #0xca8]
7101aed37c  cbnz x8,0x7101aed3e8
7101aed380  mov w0,#0x10
7101aed384  mov w1,#0x10
7101aed388  bl 0x710392e290
7101aed38c  mov x22,x0
7101aed390  cbnz x0,0x7101aed3dc
7101aed394  adrp x8,0x7105332000
7101aed398  ldr x0,[x8, #0xf00]
7101aed39c  cbz x0,0x7101aed3d8
7101aed3a0  mov w8,#0x10
7101aed3a4  str wzr,[sp, #0x10]
7101aed3a8  add x1,sp,#0x10
7101aed3ac  str x8,[sp, #0x140]
7101aed3b0  ldr x8,[x0]
7101aed3b4  ldr x8,[x8, #0x30]
7101aed3b8  add x2,sp,#0x140
7101aed3bc  blr x8
7101aed3c0  tbz w0,#0x0,0x7101aed3d8
7101aed3c4  mov w0,#0x10
7101aed3c8  mov w1,#0x10
7101aed3cc  bl 0x710392e290
7101aed3d0  mov x22,x0
7101aed3d4  cbnz x0,0x7101aed3dc
7101aed3d8  mov x22,xzr
7101aed3dc  mov x0,x22
7101aed3e0  bl 0x7101ccc7b0
7101aed3e4  str x22,[x23, #0xca8]
7101aed3e8  ldr x22,[x28, #0x20]
7101aed3ec  str x21,[x28, #0x20]
7101aed3f0  cbz x22,0x7101aed404
7101aed3f4  mov x0,x22
7101aed3f8  bl 0x7101ae82f0
7101aed3fc  mov x0,x22
7101aed400  bl 0x710392eb40
7101aed404  mov w26,#0x101
7101aed408  str x25,[x28, #0x28]
7101aed40c  strh w26,[x28, #0x8]
7101aed410  ldrh w8,[sp, #0xc]
7101aed414  strh w8,[x28, #0xa]
7101aed418  mov w8,#0x4001
7101aed41c  str w8,[x28, #0xc]
7101aed420  mov w8,#0x1
7101aed424  strb w8,[x28, #0x10]
7101aed428  ldrh w9,[sp, #0x8]
7101aed42c  ldrb w10,[sp, #0xa]
7101aed430  sturh w9,[x28, #0x11]
7101aed434  mov w9,#0x1000
7101aed438  movk w9,#0x1, LSL #16
7101aed43c  strb w10,[x28, #0x13]
7101aed440  str w8,[x28, #0x14]
7101aed444  strb wzr,[x28, #0x18]
7101aed448  str w9,[x28, #0xc]
7101aed44c  ldr x9,[x25]
7101aed450  ldr x9,[x9]
7101aed454  ldr x9,[x9]
7101aed458  ldr x10,[x9, #0x600]
7101aed45c  str w8,[x10, #0x494]
7101aed460  ldr x8,[x9, #0x608]
7101aed464  ldr x9,[x9, #0x610]
7101aed468  cmp x8,x9
7101aed46c  b.eq 0x7101aed4dc
7101aed470  sub x10,x9,#0x10
7101aed474  sub x10,x10,x8
7101aed478  ubfx x11,x10,#0x4,#0x1c
7101aed47c  add w11,w11,#0x1
7101aed480  ands x11,x11,#0x3
7101aed484  b.eq 0x7101aed4a4
7101aed488  neg x11,x11
7101aed48c  mov w12,#0x1
7101aed490  ldr x13,[x8, #0x8]
7101aed494  add x8,x8,#0x10
7101aed498  adds x11,x11,#0x1
7101aed49c  str w12,[x13, #0x494]
7101aed4a0  b.ne 0x7101aed490
7101aed4a4  cmp x10,#0x30
7101aed4a8  b.cc 0x7101aed4dc
7101aed4ac  mov w10,#0x1
7101aed4b0  ldr x11,[x8, #0x8]
7101aed4b4  str w10,[x11, #0x494]
7101aed4b8  ldr x11,[x8, #0x18]
7101aed4bc  str w10,[x11, #0x494]
7101aed4c0  ldr x11,[x8, #0x28]
7101aed4c4  str w10,[x11, #0x494]
7101aed4c8  ldr x11,[x8, #0x38]
7101aed4cc  add x8,x8,#0x40
7101aed4d0  cmp x9,x8
7101aed4d4  str w10,[x11, #0x494]
7101aed4d8  b.ne 0x7101aed4b0
7101aed4dc  ldr x24,[x28, #0x20]
7101aed4e0  ldr x8,[x25]
7101aed4e4  adrp x1,0x7104544000
7101aed4e8  add x1,x1,#0x5e8
7101aed4ec  ldr x28,[x8]
7101aed4f0  ldr x8,[x24, #0x328]
7101aed4f4  ldr x0,[x8]
7101aed4f8  ldrsw x2,[x0, #0x70]
7101aed4fc  ldr w3,[x0, #0x68]
7101aed500  mov w4,wzr
7101aed504  add x20,x28,#0x8
7101aed508  bl 0x710323beb0
7101aed50c  ldr x8,[x24, #0x328]
7101aed510  ldr x21,[x8]
7101aed514  mov x0,x21
7101aed518  bl 0x710323cb80
7101aed51c  tbnz w0,#0x0,0x7101aed53c
7101aed520  mov w22,#0x4240
7101aed524  movk w22,#0xf, LSL #16
7101aed528  mov x0,x22
7101aed52c  bl 0x71039c0d80
7101aed530  mov x0,x21
7101aed534  bl 0x710323cb80
7101aed538  tbz w0,#0x0,0x7101aed528
7101aed53c  ldr x25,[x25]
7101aed540  add x19,x24,#0x120
7101aed544  cmp x19,x20
7101aed548  b.eq 0x7101aed5bc
7101aed54c  ldr x8,[x28, #0x10]
7101aed550  ldr x8,[x8]
7101aed554  ldr x9,[x24, #0x128]
7101aed558  str x8,[x9]
7101aed55c  ldr x8,[x28, #0x10]
7101aed560  ldr x8,[x8, #0x8]
7101aed564  ldr x9,[x24, #0x128]
7101aed568  str x8,[x9, #0x8]
7101aed56c  ldr x9,[x28, #0x10]
7101aed570  ldr x8,[x24, #0x128]
7101aed574  cmp x8,x9
7101aed578  b.eq 0x7101aed5bc
7101aed57c  ldr x10,[x9, #0x18]
7101aed580  ldr x10,[x10]
7101aed584  ldr x11,[x8, #0x18]
7101aed588  str x10,[x11]
7101aed58c  ldr x10,[x9, #0x18]
7101aed590  ldr x10,[x10, #0x8]
7101aed594  ldr x11,[x8, #0x18]
7101aed598  str x10,[x11, #0x8]
7101aed59c  ldr x10,[x9, #0x18]
7101aed5a0  ldr x10,[x10, #0x10]
7101aed5a4  ldr x11,[x8, #0x18]
7101aed5a8  str x10,[x11, #0x10]
7101aed5ac  ldr x9,[x9, #0x18]
7101aed5b0  ldr x9,[x9, #0x18]
7101aed5b4  ldr x8,[x8, #0x18]
7101aed5b8  str x9,[x8, #0x18]
7101aed5bc  add x8,sp,#0x4b
7101aed5c0  str xzr,[sp, #0x140]
7101aed5c4  strh w26,[sp, #0x148]
7101aed5c8  stur wzr,[x8, #0xff]
7101aed5cc  mov w8,#0x1
7101aed5d0  add x0,sp,#0x140
7101aed5d4  str w8,[sp, #0x150]
7101aed5d8  strh w8,[sp, #0x154]
7101aed5dc  strb w8,[sp, #0x156]
7101aed5e0  mov x8,#0x41f0000000000000
7101aed5e4  strh wzr,[sp, #0x14e]
7101aed5e8  str x8,[sp, #0x158]
7101aed5ec  str wzr,[sp, #0x160]
7101aed5f0  str xzr,[sp, #0x190]
7101aed5f4  str xzr,[sp, #0x1c0]
7101aed5f8  str xzr,[sp, #0x1f0]
7101aed5fc  str xzr,[sp, #0x220]
7101aed600  str xzr,[sp, #0x250]
7101aed604  str wzr,[sp, #0x260]
7101aed608  bl 0x710337df20
7101aed60c  mov w8,#0x42f00000
7101aed610  add x0,sp,#0x10
7101aed614  add x1,sp,#0x140
7101aed618  strb wzr,[sp, #0x148]
7101aed61c  str w8,[sp, #0x15c]
7101aed620  add x21,sp,#0x10
7101aed624  bl 0x7101989b70
7101aed628  add x1,x21,#0x30
7101aed62c  adrp x8,0x71050a9000
7101aed630  add x8,x8,#0xfa0
7101aed634  sub x21,x29,#0x90
7101aed638  sub x0,x29,#0x90
7101aed63c  stur x21,[x29, #-0x70]
7101aed640  stp x8,x24,[x29, #-0x90]
7101aed644  bl 0x7101a7ed70
7101aed648  ldur x0,[x29, #-0x70]
7101aed64c  cmp x21,x0
7101aed650  b.eq 0x7101aed664
7101aed654  cbz x0,0x7101aed670
7101aed658  ldr x8,[x0]
7101aed65c  ldr x8,[x8, #0x28]
7101aed660  b 0x7101aed66c
7101aed664  ldr x8,[x0]
7101aed668  ldr x8,[x8, #0x20]
7101aed66c  blr x8
7101aed670  add x21,x24,#0x130
7101aed674  adrp x2,0x7104401000
7101aed678  add x2,x2,#0xbc0
7101aed67c  add x3,sp,#0x10
7101aed680  mov x0,x21
7101aed684  mov x1,x19
7101aed688  add x22,sp,#0x10
7101aed68c  bl 0x7103770b30
7101aed690  adrp x2,0x710425f000
7101aed694  add x2,x2,#0x585
7101aed698  mov x0,x21
7101aed69c  mov w1,wzr
7101aed6a0  bl 0x71037717d0
7101aed6a4  ldr x8,[x24, #0x130]
7101aed6a8  ldr x9,[x8, #0x1b8]
7101aed6ac  cbz x9,0x7101aed718
7101aed6b0  add x10,x8,#0x1b8
7101aed6b4  mov x8,x10
7101aed6b8  ldr w11,[x9, #0x20]
7101aed6bc  cmp w11,#0x0
7101aed6c0  cset w11,lt
7101aed6c4  csel x8,x8,x9,lt
7101aed6c8  ldr x9,[x9, w11, UXTW #0x3]
7101aed6cc  cbnz x9,0x7101aed6b8
7101aed6d0  cmp x8,x10
7101aed6d4  b.eq 0x7101aed718
7101aed6d8  ldr w9,[x8, #0x20]
7101aed6dc  cmp w9,#0x0
7101aed6e0  b.gt 0x7101aed718
7101aed6e4  ldr x21,[x8, #0x28]
7101aed6e8  cbz x21,0x7101aed718
7101aed6ec  ldr x8,[x21]
7101aed6f0  ldr x8,[x8, #0x1f8]
7101aed6f4  mov w1,#0x1
7101aed6f8  mov x0,x21
7101aed6fc  blr x8
7101aed700  ldr x8,[x21]
7101aed704  ldr x8,[x8, #0x388]
7101aed708  mov x0,x21
7101aed70c  mov w1,wzr
7101aed710  mov w2,wzr
7101aed714  blr x8
7101aed718  ldr x0,[sp, #0x120]
7101aed71c  add x8,x22,#0xf0
7101aed720  cmp x8,x0
7101aed724  b.eq 0x7101aed738
7101aed728  cbz x0,0x7101aed744
7101aed72c  ldr x8,[x0]
7101aed730  ldr x8,[x8, #0x28]
7101aed734  b 0x7101aed740
7101aed738  ldr x8,[x0]
7101aed73c  ldr x8,[x8, #0x20]
7101aed740  blr x8
7101aed744  ldr x0,[sp, #0xf0]
7101aed748  add x8,sp,#0x10
7101aed74c  add x8,x8,#0xc0
7101aed750  cmp x8,x0
7101aed754  b.eq 0x7101aed768
7101aed758  cbz x0,0x7101aed774
7101aed75c  ldr x8,[x0]
7101aed760  ldr x8,[x8, #0x28]
7101aed764  b 0x7101aed770
7101aed768  ldr x8,[x0]
7101aed76c  ldr x8,[x8, #0x20]
7101aed770  blr x8
7101aed774  ldr x0,[sp, #0xc0]
7101aed778  add x8,sp,#0x10
7101aed77c  add x8,x8,#0x90
7101aed780  cmp x8,x0
7101aed784  b.eq 0x7101aed798
7101aed788  cbz x0,0x7101aed7a4
7101aed78c  ldr x8,[x0]
7101aed790  ldr x8,[x8, #0x28]
7101aed794  b 0x7101aed7a0
7101aed798  ldr x8,[x0]
7101aed79c  ldr x8,[x8, #0x20]
7101aed7a0  blr x8
7101aed7a4  ldr x0,[sp, #0x90]
7101aed7a8  add x8,sp,#0x10
7101aed7ac  add x8,x8,#0x60
7101aed7b0  cmp x8,x0
7101aed7b4  b.eq 0x7101aed7c8
7101aed7b8  cbz x0,0x7101aed7d4
7101aed7bc  ldr x8,[x0]
7101aed7c0  ldr x8,[x8, #0x28]
7101aed7c4  b 0x7101aed7d0
7101aed7c8  ldr x8,[x0]
7101aed7cc  ldr x8,[x8, #0x20]
7101aed7d0  blr x8
7101aed7d4  ldr x0,[sp, #0x60]
7101aed7d8  add x8,sp,#0x10
7101aed7dc  add x8,x8,#0x30
7101aed7e0  cmp x8,x0
7101aed7e4  b.eq 0x7101aed7f8
7101aed7e8  cbz x0,0x7101aed804
7101aed7ec  ldr x8,[x0]
7101aed7f0  ldr x8,[x8, #0x28]
7101aed7f4  b 0x7101aed800
7101aed7f8  ldr x8,[x0]
7101aed7fc  ldr x8,[x8, #0x20]
7101aed800  blr x8
7101aed804  add x0,sp,#0x10
7101aed808  add x1,sp,#0x140
7101aed80c  add x21,sp,#0x10
7101aed810  bl 0x7101989b70
7101aed814  add x1,x21,#0x30
7101aed818  adrp x8,0x71050a9000
7101aed81c  add x8,x8,#0xfe8
7101aed820  sub x21,x29,#0x90
7101aed824  sub x0,x29,#0x90
7101aed828  stur x21,[x29, #-0x70]
7101aed82c  stp x8,x24,[x29, #-0x90]
7101aed830  bl 0x7101a7ed70
7101aed834  ldur x0,[x29, #-0x70]
7101aed838  cmp x21,x0
7101aed83c  b.eq 0x7101aed850
7101aed840  cbz x0,0x7101aed85c
7101aed844  ldr x8,[x0]
7101aed848  ldr x8,[x8, #0x28]
7101aed84c  b 0x7101aed858
7101aed850  ldr x8,[x0]
7101aed854  ldr x8,[x8, #0x20]
7101aed858  blr x8
7101aed85c  add x9,sp,#0x10
7101aed860  adrp x8,0x71050aa000
7101aed864  add x8,x8,#0x30
7101aed868  add x1,x9,#0x60
7101aed86c  sub x21,x29,#0x90
7101aed870  stur x21,[x29, #-0x70]
7101aed874  sub x0,x29,#0x90
7101aed878  stp x8,x24,[x29, #-0x90]
7101aed87c  bl 0x7101989a30
7101aed880  ldur x0,[x29, #-0x70]
7101aed884  cmp x21,x0
7101aed888  b.eq 0x7101aed89c
7101aed88c  cbz x0,0x7101aed8a8
7101aed890  ldr x8,[x0]
7101aed894  ldr x8,[x8, #0x28]
7101aed898  b 0x7101aed8a4
7101aed89c  ldr x8,[x0]
7101aed8a0  ldr x8,[x8, #0x20]
7101aed8a4  blr x8
7101aed8a8  add x21,x24,#0x138
7101aed8ac  adrp x2,0x7104433000
7101aed8b0  add x2,x2,#0x952
7101aed8b4  add x3,sp,#0x10
7101aed8b8  mov x0,x21
7101aed8bc  mov x1,x19
7101aed8c0  add x26,sp,#0x10
7101aed8c4  bl 0x7103770b30
7101aed8c8  adrp x2,0x710424f000
7101aed8cc  add x2,x2,#0xd25
7101aed8d0  orr w1,wzr,#0x3
7101aed8d4  mov x0,x21
7101aed8d8  bl 0x71037717d0
7101aed8dc  adrp x2,0x710432a000
7101aed8e0  add x2,x2,#0x6e1
7101aed8e4  mov w1,#0x4
7101aed8e8  mov x0,x21
7101aed8ec  bl 0x71037717d0
7101aed8f0  mov w1,#0x4
7101aed8f4  mov w2,#0x1
7101aed8f8  mov x0,x21
7101aed8fc  bl 0x7103771a80
7101aed900  ldr x0,[x24, #0x138]
7101aed904  ldr x9,[x0, #0x1b8]
7101aed908  cbz x9,0x7101aed978
7101aed90c  add x10,x0,#0x1b8
7101aed910  mov x8,x10
7101aed914  ldr w11,[x9, #0x20]
7101aed918  cmp w11,#0x4
7101aed91c  cset w11,lt
7101aed920  csel x8,x8,x9,lt
7101aed924  ldr x9,[x9, w11, UXTW #0x3]
7101aed928  cbnz x9,0x7101aed914
7101aed92c  cmp x8,x10
7101aed930  b.eq 0x7101aed978
7101aed934  ldr w9,[x8, #0x20]
7101aed938  cmp w9,#0x4
7101aed93c  b.gt 0x7101aed978
7101aed940  ldr x22,[x8, #0x28]
7101aed944  cbz x22,0x7101aed978
7101aed948  ldr x8,[x22]
7101aed94c  ldr x8,[x8, #0x1f8]
7101aed950  mov w1,#0x1
7101aed954  mov x0,x22
7101aed958  blr x8
7101aed95c  ldr x8,[x22]
7101aed960  ldr x8,[x8, #0x388]
7101aed964  mov x0,x22
7101aed968  mov w1,wzr
7101aed96c  mov w2,wzr
7101aed970  blr x8
7101aed974  ldr x0,[x21]
7101aed978  ldr x8,[x0]
7101aed97c  ldr x8,[x8, #0x60]
7101aed980  mov w1,#0x1
7101aed984  blr x8
7101aed988  ldr x0,[sp, #0x120]
7101aed98c  add x8,x26,#0xf0
7101aed990  cmp x8,x0
7101aed994  b.eq 0x7101aed9a8
7101aed998  cbz x0,0x7101aed9b4
7101aed99c  ldr x8,[x0]
7101aed9a0  ldr x8,[x8, #0x28]
7101aed9a4  b 0x7101aed9b0
7101aed9a8  ldr x8,[x0]
7101aed9ac  ldr x8,[x8, #0x20]
7101aed9b0  blr x8
7101aed9b4  ldr x0,[sp, #0xf0]
7101aed9b8  add x8,sp,#0x10
7101aed9bc  add x8,x8,#0xc0
7101aed9c0  cmp x8,x0
7101aed9c4  b.eq 0x7101aed9d8
7101aed9c8  cbz x0,0x7101aed9e4
7101aed9cc  ldr x8,[x0]
7101aed9d0  ldr x8,[x8, #0x28]
7101aed9d4  b 0x7101aed9e0
7101aed9d8  ldr x8,[x0]
7101aed9dc  ldr x8,[x8, #0x20]
7101aed9e0  blr x8
7101aed9e4  ldr x0,[sp, #0xc0]
7101aed9e8  add x8,sp,#0x10
7101aed9ec  add x8,x8,#0x90
7101aed9f0  cmp x8,x0
7101aed9f4  b.eq 0x7101aeda08
7101aed9f8  cbz x0,0x7101aeda14
7101aed9fc  ldr x8,[x0]
7101aeda00  ldr x8,[x8, #0x28]
7101aeda04  b 0x7101aeda10
7101aeda08  ldr x8,[x0]
7101aeda0c  ldr x8,[x8, #0x20]
7101aeda10  blr x8
7101aeda14  ldr x0,[sp, #0x90]
7101aeda18  add x8,sp,#0x10
7101aeda1c  add x8,x8,#0x60
7101aeda20  cmp x8,x0
7101aeda24  b.eq 0x7101aeda38
7101aeda28  cbz x0,0x7101aeda44
7101aeda2c  ldr x8,[x0]
7101aeda30  ldr x8,[x8, #0x28]
7101aeda34  b 0x7101aeda40
7101aeda38  ldr x8,[x0]
7101aeda3c  ldr x8,[x8, #0x20]
7101aeda40  blr x8
7101aeda44  ldr x0,[sp, #0x60]
7101aeda48  add x8,sp,#0x10
7101aeda4c  add x8,x8,#0x30
7101aeda50  cmp x8,x0
7101aeda54  b.eq 0x7101aeda68
7101aeda58  cbz x0,0x7101aeda74
7101aeda5c  ldr x8,[x0]
7101aeda60  ldr x8,[x8, #0x28]
7101aeda64  b 0x7101aeda70
7101aeda68  ldr x8,[x0]
7101aeda6c  ldr x8,[x8, #0x20]
7101aeda70  blr x8
7101aeda74  add x0,sp,#0x10
7101aeda78  add x1,sp,#0x140
7101aeda7c  bl 0x7101989b70
7101aeda80  add x21,x24,#0x140
7101aeda84  mov w8,#0x1
7101aeda88  adrp x2,0x710437c000
7101aeda8c  add x2,x2,#0xb65
7101aeda90  add x3,sp,#0x10
7101aeda94  strb w8,[sp, #0x1a]
7101aeda98  mov x0,x21
7101aeda9c  mov x1,x19
7101aedaa0  bl 0x7103770b30
7101aedaa4  mov w19,#0x5
7101aedaa8  adrp x2,0x710424f000
7101aedaac  add x2,x2,#0x6ab
7101aedab0  mov x0,x21
7101aedab4  mov w1,w19
7101aedab8  bl 0x71037717d0
7101aedabc  adrp x2,0x7104412000
7101aedac0  add x2,x2,#0xb00
7101aedac4  orr w1,wzr,#0x6
7101aedac8  mov x0,x21
7101aedacc  bl 0x71037717d0
7101aedad0  ldr x0,[x24, #0x140]
7101aedad4  orr w1,wzr,#0x6
7101aedad8  orr w2,wzr,#0x6
7101aedadc  mov w3,#0x1
7101aedae0  bl 0x7103771930
7101aedae4  ldr x0,[x24, #0x140]
7101aedae8  orr w2,wzr,#0x7
7101aedaec  mov w3,#0x1
7101aedaf0  mov w1,w19
7101aedaf4  bl 0x7103771930
7101aedaf8  ldr x1,[x24, #0x140]
7101aedafc  sub x0,x29,#0x90
7101aedb00  orr w2,wzr,#0x6
7101aedb04  bl 0x7103771d60
7101aedb08  ldur x19,[x29, #-0x88]
7101aedb0c  ldr x0,[x19]
7101aedb10  cbz x0,0x7101aedb28
7101aedb14  ldr x8,[x0]
7101aedb18  ldr x8,[x8, #0x268]
7101aedb1c  mov w1,#0x1
7101aedb20  mov w2,#0x1
7101aedb24  blr x8
7101aedb28  adrp x22,0x710523d000
7101aedb2c  add x22,x22,#0x9c8
7101aedb30  stp x22,xzr,[x29, #-0x90]
7101aedb34  cbz x19,0x7101aedb40
7101aedb38  mov x0,x19
7101aedb3c  bl 0x710392eb40
7101aedb40  ldr x1,[x21]
7101aedb44  mov w2,#0x5
7101aedb48  sub x0,x29,#0x90
7101aedb4c  bl 0x7103771d60
7101aedb50  ldur x19,[x29, #-0x88]
7101aedb54  ldr x0,[x19]
7101aedb58  cbz x0,0x7101aedb70
7101aedb5c  ldr x8,[x0]
7101aedb60  ldr x8,[x8, #0x268]
7101aedb64  mov w1,#0x1
7101aedb68  mov w2,#0x1
7101aedb6c  blr x8
7101aedb70  stp x22,xzr,[x29, #-0x90]
7101aedb74  cbz x19,0x7101aedb80
7101aedb78  mov x0,x19
7101aedb7c  bl 0x710392eb40
7101aedb80  ldr x0,[sp, #0x120]
7101aedb84  add x8,sp,#0x10
7101aedb88  add x8,x8,#0xf0
7101aedb8c  cmp x8,x0
7101aedb90  b.eq 0x7101aedba4
7101aedb94  cbz x0,0x7101aedbb0
7101aedb98  ldr x8,[x0]
7101aedb9c  ldr x8,[x8, #0x28]
7101aedba0  b 0x7101aedbac
7101aedba4  ldr x8,[x0]
7101aedba8  ldr x8,[x8, #0x20]
7101aedbac  blr x8
7101aedbb0  ldr x0,[sp, #0xf0]
7101aedbb4  add x8,sp,#0x10
7101aedbb8  add x8,x8,#0xc0
7101aedbbc  cmp x8,x0
7101aedbc0  b.eq 0x7101aedbd4
7101aedbc4  cbz x0,0x7101aedbe0
7101aedbc8  ldr x8,[x0]
7101aedbcc  ldr x8,[x8, #0x28]
7101aedbd0  b 0x7101aedbdc
7101aedbd4  ldr x8,[x0]
7101aedbd8  ldr x8,[x8, #0x20]
7101aedbdc  blr x8
7101aedbe0  ldr x0,[sp, #0xc0]
7101aedbe4  add x8,sp,#0x10
7101aedbe8  add x8,x8,#0x90
7101aedbec  cmp x8,x0
7101aedbf0  b.eq 0x7101aedc04
7101aedbf4  cbz x0,0x7101aedc10
7101aedbf8  ldr x8,[x0]
7101aedbfc  ldr x8,[x8, #0x28]
7101aedc00  b 0x7101aedc0c
7101aedc04  ldr x8,[x0]
7101aedc08  ldr x8,[x8, #0x20]
7101aedc0c  blr x8
7101aedc10  ldr x0,[sp, #0x90]
7101aedc14  add x8,sp,#0x10
7101aedc18  add x8,x8,#0x60
7101aedc1c  cmp x8,x0
7101aedc20  b.eq 0x7101aedc34
7101aedc24  cbz x0,0x7101aedc40
7101aedc28  ldr x8,[x0]
7101aedc2c  ldr x8,[x8, #0x28]
7101aedc30  b 0x7101aedc3c
7101aedc34  ldr x8,[x0]
7101aedc38  ldr x8,[x8, #0x20]
7101aedc3c  blr x8
7101aedc40  ldr x0,[sp, #0x60]
7101aedc44  add x8,sp,#0x10
7101aedc48  add x8,x8,#0x30
7101aedc4c  cmp x8,x0
7101aedc50  b.eq 0x7101aedc64
7101aedc54  cbz x0,0x7101aedc70
7101aedc58  ldr x8,[x0]
7101aedc5c  ldr x8,[x8, #0x28]
7101aedc60  b 0x7101aedc6c
7101aedc64  ldr x8,[x0]
7101aedc68  ldr x8,[x8, #0x20]
7101aedc6c  blr x8
7101aedc70  adrp x1,0x7104411000
7101aedc74  add x1,x1,#0x1db
7101aedc78  add x8,sp,#0x10
7101aedc7c  mov x0,x20
7101aedc80  add x19,sp,#0x10
7101aedc84  bl 0x7103776640
7101aedc88  add x8,x24,#0x280
7101aedc8c  cmp x8,x19
7101aedc90  b.eq 0x7101aedcc0
7101aedc94  ldr x8,[sp, #0x18]
7101aedc98  str xzr,[sp, #0x18]
7101aedc9c  ldr x19,[x24, #0x288]
7101aedca0  str x8,[x24, #0x288]
7101aedca4  cbz x19,0x7101aedcc0
7101aedca8  ldr x0,[x19, #0x18]
7101aedcac  stp x27,xzr,[x19, #0x10]
7101aedcb0  cbz x0,0x7101aedcb8
7101aedcb4  bl 0x710392eb40
7101aedcb8  mov x0,x19
7101aedcbc  bl 0x710392eb40
7101aedcc0  ldr x19,[sp, #0x18]
7101aedcc4  adrp x21,0x710523d000
7101aedcc8  add x21,x21,#0x988
7101aedccc  stp x21,xzr,[sp, #0x10]
7101aedcd0  cbz x19,0x7101aedcec
7101aedcd4  ldr x0,[x19, #0x18]
7101aedcd8  stp x27,xzr,[x19, #0x10]
7101aedcdc  cbz x0,0x7101aedce4
7101aedce0  bl 0x710392eb40
7101aedce4  mov x0,x19
7101aedce8  bl 0x710392eb40
7101aedcec  adrp x1,0x71042f7000
7101aedcf0  add x1,x1,#0xe0e
7101aedcf4  add x8,sp,#0x10
7101aedcf8  mov x0,x20
7101aedcfc  add x19,sp,#0x10
7101aedd00  bl 0x7103776910
7101aedd04  add x8,x24,#0x270
7101aedd08  cmp x8,x19
7101aedd0c  b.eq 0x7101aedd28
7101aedd10  ldr x8,[sp, #0x18]
7101aedd14  str xzr,[sp, #0x18]
7101aedd18  ldr x0,[x24, #0x278]
7101aedd1c  str x8,[x24, #0x278]
7101aedd20  cbz x0,0x7101aedd28
7101aedd24  bl 0x710392eb40
7101aedd28  ldr x0,[sp, #0x18]
7101aedd2c  stp x27,xzr,[sp, #0x10]
7101aedd30  cbz x0,0x7101aedd38
7101aedd34  bl 0x710392eb40
7101aedd38  adrp x1,0x71043ae000
7101aedd3c  add x1,x1,#0x1be
7101aedd40  add x8,sp,#0x10
7101aedd44  mov x0,x20
7101aedd48  add x19,sp,#0x10
7101aedd4c  bl 0x7103776910
7101aedd50  add x8,x24,#0x200
7101aedd54  cmp x8,x19
7101aedd58  b.eq 0x7101aedd74
7101aedd5c  ldr x8,[sp, #0x18]
7101aedd60  str xzr,[sp, #0x18]
7101aedd64  ldr x0,[x24, #0x208]
7101aedd68  str x8,[x24, #0x208]
7101aedd6c  cbz x0,0x7101aedd74
7101aedd70  bl 0x710392eb40
7101aedd74  ldr x0,[sp, #0x18]
7101aedd78  stp x27,xzr,[sp, #0x10]
7101aedd7c  cbz x0,0x7101aedd84
7101aedd80  bl 0x710392eb40
7101aedd84  adrp x1,0x71042d6000
7101aedd88  add x1,x1,#0xb88
7101aedd8c  add x8,sp,#0x10
7101aedd90  mov x0,x20
7101aedd94  add x19,sp,#0x10
7101aedd98  bl 0x7103776910
7101aedd9c  add x8,x24,#0x210
7101aedda0  cmp x8,x19
7101aedda4  b.eq 0x7101aeddc0
7101aedda8  ldr x8,[sp, #0x18]
7101aeddac  str xzr,[sp, #0x18]
7101aeddb0  ldr x0,[x24, #0x218]
7101aeddb4  str x8,[x24, #0x218]
7101aeddb8  cbz x0,0x7101aeddc0
7101aeddbc  bl 0x710392eb40
7101aeddc0  ldr x0,[sp, #0x18]
7101aeddc4  stp x27,xzr,[sp, #0x10]
7101aeddc8  cbz x0,0x7101aeddd0
7101aeddcc  bl 0x710392eb40
7101aeddd0  adrp x1,0x710439d000
7101aeddd4  add x1,x1,#0xab9
7101aeddd8  add x8,sp,#0x10
7101aedddc  mov x0,x20
7101aedde0  add x19,sp,#0x10
7101aedde4  bl 0x7103776910
7101aedde8  add x8,x24,#0x260
7101aeddec  cmp x8,x19
7101aeddf0  b.eq 0x7101aede0c
7101aeddf4  ldr x8,[sp, #0x18]
7101aeddf8  str xzr,[sp, #0x18]
7101aeddfc  ldr x0,[x24, #0x268]
7101aede00  str x8,[x24, #0x268]
7101aede04  cbz x0,0x7101aede0c
7101aede08  bl 0x710392eb40
7101aede0c  ldr x0,[sp, #0x18]
7101aede10  stp x27,xzr,[sp, #0x10]
7101aede14  cbz x0,0x7101aede1c
7101aede18  bl 0x710392eb40
7101aede1c  adrp x1,0x710435b000
7101aede20  add x1,x1,#0xd3c
7101aede24  add x8,sp,#0x10
7101aede28  mov x0,x20
7101aede2c  add x19,sp,#0x10
7101aede30  bl 0x7103776910
7101aede34  add x8,x24,#0x240
7101aede38  cmp x8,x19
7101aede3c  b.eq 0x7101aede58
7101aede40  ldr x8,[sp, #0x18]
7101aede44  str xzr,[sp, #0x18]
7101aede48  ldr x0,[x24, #0x248]
7101aede4c  str x8,[x24, #0x248]
7101aede50  cbz x0,0x7101aede58
7101aede54  bl 0x710392eb40
7101aede58  ldr x0,[sp, #0x18]
7101aede5c  stp x27,xzr,[sp, #0x10]
7101aede60  cbz x0,0x7101aede68
7101aede64  bl 0x710392eb40
7101aede68  adrp x1,0x7104281000
7101aede6c  add x1,x1,#0x191
7101aede70  add x8,sp,#0x10
7101aede74  mov x0,x20
7101aede78  add x19,sp,#0x10
7101aede7c  bl 0x7103776910
7101aede80  add x8,x24,#0x250
7101aede84  cmp x8,x19
7101aede88  b.eq 0x7101aedea4
7101aede8c  ldr x8,[sp, #0x18]
7101aede90  str xzr,[sp, #0x18]
7101aede94  ldr x0,[x24, #0x258]
7101aede98  str x8,[x24, #0x258]
7101aede9c  cbz x0,0x7101aedea4
7101aedea0  bl 0x710392eb40
7101aedea4  ldr x0,[sp, #0x18]
7101aedea8  stp x27,xzr,[sp, #0x10]
7101aedeac  cbz x0,0x7101aedeb4
7101aedeb0  bl 0x710392eb40
7101aedeb4  adrp x1,0x71043cf000
7101aedeb8  add x1,x1,#0x609
7101aedebc  add x8,sp,#0x10
7101aedec0  mov x0,x20
7101aedec4  add x19,sp,#0x10
7101aedec8  bl 0x7103776640
7101aedecc  add x8,x24,#0x310
7101aeded0  cmp x8,x19
7101aeded4  b.eq 0x7101aedf04
7101aeded8  ldr x8,[sp, #0x18]
7101aededc  str xzr,[sp, #0x18]
7101aedee0  ldr x19,[x24, #0x318]
7101aedee4  str x8,[x24, #0x318]
7101aedee8  cbz x19,0x7101aedf04
7101aedeec  ldr x0,[x19, #0x18]
7101aedef0  stp x27,xzr,[x19, #0x10]
7101aedef4  cbz x0,0x7101aedefc
7101aedef8  bl 0x710392eb40
7101aedefc  mov x0,x19
7101aedf00  bl 0x710392eb40
7101aedf04  ldr x19,[sp, #0x18]
7101aedf08  stp x21,xzr,[sp, #0x10]
7101aedf0c  cbz x19,0x7101aedf28
7101aedf10  ldr x0,[x19, #0x18]
7101aedf14  stp x27,xzr,[x19, #0x10]
7101aedf18  cbz x0,0x7101aedf20
7101aedf1c  bl 0x710392eb40
7101aedf20  mov x0,x19
7101aedf24  bl 0x710392eb40
7101aedf28  adrp x1,0x71042d5000
7101aedf2c  add x1,x1,#0xdc5
7101aedf30  add x8,sp,#0x10
7101aedf34  mov x0,x20
7101aedf38  add x19,sp,#0x10
7101aedf3c  bl 0x7103776910
7101aedf40  add x8,x24,#0x300
7101aedf44  cmp x8,x19
7101aedf48  b.eq 0x7101aedf64
7101aedf4c  ldr x8,[sp, #0x18]
7101aedf50  str xzr,[sp, #0x18]
7101aedf54  ldr x0,[x24, #0x308]
7101aedf58  str x8,[x24, #0x308]
7101aedf5c  cbz x0,0x7101aedf64
7101aedf60  bl 0x710392eb40
7101aedf64  ldr x0,[sp, #0x18]
7101aedf68  stp x27,xzr,[sp, #0x10]
7101aedf6c  cbz x0,0x7101aedf74
7101aedf70  bl 0x710392eb40
7101aedf74  adrp x1,0x7104280000
7101aedf78  add x1,x1,#0x5c4
7101aedf7c  add x8,sp,#0x10
7101aedf80  mov x0,x20
7101aedf84  add x19,sp,#0x10
7101aedf88  bl 0x7103776910
7101aedf8c  add x8,x24,#0x290
7101aedf90  cmp x8,x19
7101aedf94  b.eq 0x7101aedfb0
7101aedf98  ldr x8,[sp, #0x18]
7101aedf9c  str xzr,[sp, #0x18]
7101aedfa0  ldr x0,[x24, #0x298]
7101aedfa4  str x8,[x24, #0x298]
7101aedfa8  cbz x0,0x7101aedfb0
7101aedfac  bl 0x710392eb40
7101aedfb0  ldr x0,[sp, #0x18]
7101aedfb4  stp x27,xzr,[sp, #0x10]
7101aedfb8  cbz x0,0x7101aedfc0
7101aedfbc  bl 0x710392eb40
7101aedfc0  adrp x1,0x71043f0000
7101aedfc4  add x1,x1,#0x592
7101aedfc8  add x8,sp,#0x10
7101aedfcc  mov x0,x20
7101aedfd0  add x19,sp,#0x10
7101aedfd4  bl 0x7103776910
7101aedfd8  add x8,x24,#0x2a0
7101aedfdc  cmp x8,x19
7101aedfe0  b.eq 0x7101aedffc
7101aedfe4  ldr x8,[sp, #0x18]
7101aedfe8  str xzr,[sp, #0x18]
7101aedfec  ldr x0,[x24, #0x2a8]
7101aedff0  str x8,[x24, #0x2a8]
7101aedff4  cbz x0,0x7101aedffc
7101aedff8  bl 0x710392eb40
7101aedffc  ldr x0,[sp, #0x18]
7101aee000  stp x27,xzr,[sp, #0x10]
7101aee004  cbz x0,0x7101aee00c
7101aee008  bl 0x710392eb40
7101aee00c  adrp x1,0x7104401000
7101aee010  add x1,x1,#0xdad
7101aee014  add x8,sp,#0x10
7101aee018  mov x0,x20
7101aee01c  add x19,sp,#0x10
7101aee020  bl 0x7103776910
7101aee024  add x8,x24,#0x2f0
7101aee028  cmp x8,x19
7101aee02c  b.eq 0x7101aee048
7101aee030  ldr x8,[sp, #0x18]
7101aee034  str xzr,[sp, #0x18]
7101aee038  ldr x0,[x24, #0x2f8]
7101aee03c  str x8,[x24, #0x2f8]
7101aee040  cbz x0,0x7101aee048
7101aee044  bl 0x710392eb40
7101aee048  ldr x0,[sp, #0x18]
7101aee04c  stp x27,xzr,[sp, #0x10]
7101aee050  cbz x0,0x7101aee058
7101aee054  bl 0x710392eb40
7101aee058  adrp x1,0x7104308000
7101aee05c  add x1,x1,#0xc5c
7101aee060  add x8,sp,#0x10
7101aee064  mov x0,x20
7101aee068  add x19,sp,#0x10
7101aee06c  bl 0x7103776910
7101aee070  add x8,x24,#0x2d0
7101aee074  cmp x8,x19
7101aee078  b.eq 0x7101aee094
7101aee07c  ldr x8,[sp, #0x18]
7101aee080  str xzr,[sp, #0x18]
7101aee084  ldr x0,[x24, #0x2d8]
7101aee088  str x8,[x24, #0x2d8]
7101aee08c  cbz x0,0x7101aee094
7101aee090  bl 0x710392eb40
7101aee094  ldr x0,[sp, #0x18]
7101aee098  stp x27,xzr,[sp, #0x10]
7101aee09c  cbz x0,0x7101aee0a4
7101aee0a0  bl 0x710392eb40
7101aee0a4  adrp x1,0x710424f000
7101aee0a8  add x1,x1,#0xd25
7101aee0ac  add x8,sp,#0x10
7101aee0b0  mov x0,x20
7101aee0b4  add x19,sp,#0x10
7101aee0b8  bl 0x7103776910
7101aee0bc  add x8,x24,#0x2e0
7101aee0c0  cmp x8,x19
7101aee0c4  b.eq 0x7101aee0e0
7101aee0c8  ldr x8,[sp, #0x18]
7101aee0cc  str xzr,[sp, #0x18]
7101aee0d0  ldr x0,[x24, #0x2e8]
7101aee0d4  str x8,[x24, #0x2e8]
7101aee0d8  cbz x0,0x7101aee0e0
7101aee0dc  bl 0x710392eb40
7101aee0e0  ldr x0,[sp, #0x18]
7101aee0e4  stp x27,xzr,[sp, #0x10]
7101aee0e8  cbz x0,0x7101aee0f0
7101aee0ec  bl 0x710392eb40
7101aee0f0  ldr x8,[x24, #0x248]
7101aee0f4  ldr x8,[x8]
7101aee0f8  cbz x8,0x7101aee108
7101aee0fc  ldrb w9,[x8, #0x58]
7101aee100  and w9,w9,#0xfe
7101aee104  strb w9,[x8, #0x58]
7101aee108  ldr x8,[x24, #0x268]
7101aee10c  ldr x8,[x8]
7101aee110  cbz x8,0x7101aee120
7101aee114  ldrb w9,[x8, #0x58]
7101aee118  and w9,w9,#0xfe
7101aee11c  strb w9,[x8, #0x58]
7101aee120  ldr x8,[x24, #0x2d8]
7101aee124  ldr x8,[x8]
7101aee128  cbz x8,0x7101aee138
7101aee12c  ldrb w9,[x8, #0x58]
7101aee130  and w9,w9,#0xfe
7101aee134  strb w9,[x8, #0x58]
7101aee138  ldr x8,[x24, #0x2f8]
7101aee13c  ldr x8,[x8]
7101aee140  cbz x8,0x7101aee150
7101aee144  ldrb w9,[x8, #0x58]
7101aee148  and w9,w9,#0xfe
7101aee14c  strb w9,[x8, #0x58]
7101aee150  adrp x1,0x710424f000
7101aee154  add x1,x1,#0x6ab
7101aee158  add x8,sp,#0x10
7101aee15c  mov x0,x20
7101aee160  add x19,sp,#0x10
7101aee164  bl 0x7103776910
7101aee168  add x8,x24,#0x198
7101aee16c  cmp x8,x19
7101aee170  b.eq 0x7101aee18c
7101aee174  ldr x8,[sp, #0x18]
7101aee178  str xzr,[sp, #0x18]
7101aee17c  ldr x0,[x24, #0x1a0]
7101aee180  str x8,[x24, #0x1a0]
7101aee184  cbz x0,0x7101aee18c
7101aee188  bl 0x710392eb40
7101aee18c  ldr x0,[sp, #0x18]
7101aee190  stp x27,xzr,[sp, #0x10]
7101aee194  cbz x0,0x7101aee19c
7101aee198  bl 0x710392eb40
7101aee19c  adrp x1,0x7104412000
7101aee1a0  add x1,x1,#0xb00
7101aee1a4  add x8,sp,#0x10
7101aee1a8  mov x0,x20
7101aee1ac  add x19,sp,#0x10
7101aee1b0  bl 0x7103776910
7101aee1b4  add x8,x24,#0x1a8
7101aee1b8  cmp x8,x19
7101aee1bc  b.eq 0x7101aee1d8
7101aee1c0  ldr x8,[sp, #0x18]
7101aee1c4  str xzr,[sp, #0x18]
7101aee1c8  ldr x0,[x24, #0x1b0]
7101aee1cc  str x8,[x24, #0x1b0]
7101aee1d0  cbz x0,0x7101aee1d8
7101aee1d4  bl 0x710392eb40
7101aee1d8  ldr x0,[sp, #0x18]
7101aee1dc  stp x27,xzr,[sp, #0x10]
7101aee1e0  cbz x0,0x7101aee1e8
7101aee1e4  bl 0x710392eb40
7101aee1e8  ldr x8,[x25]
7101aee1ec  ldr x8,[x8]
7101aee1f0  ldr x9,[x8, #0x600]
7101aee1f4  mov w10,#0x100
7101aee1f8  str w10,[x9, #0x1c]
7101aee1fc  ldr x9,[x8, #0x600]
7101aee200  mov w10,#0x200
7101aee204  str w10,[x9, #0x18]
7101aee208  ldr x11,[x8, #0x600]
7101aee20c  mov w9,#0x20
7101aee210  str w9,[x11, #0x10]
7101aee214  ldr x8,[x8, #0x600]
7101aee218  mov w10,#0x40
7101aee21c  adrp x9,0x710425f000
7101aee220  add x9,x9,#0x767
7101aee224  adrp x11,0x7104401000
7101aee228  add x11,x11,#0x836
7101aee22c  str w10,[x8, #0x14]
7101aee230  adrp x8,0x71042f7000
7101aee234  add x8,x8,#0xe1e
7101aee238  adrp x10,0x71043df000
7101aee23c  add x10,x10,#0xc54
7101aee240  stp x9,x11,[x24, #0x148]
7101aee244  adrp x9,0x710433a000
7101aee248  add x9,x9,#0x236
7101aee24c  adrp x11,0x71043e0000
7101aee250  add x11,x11,#0x2c9
7101aee254  stp x8,x10,[x24, #0x158]
7101aee258  adrp x1,0x710424f000
7101aee25c  add x1,x1,#0xd25
7101aee260  add x8,sp,#0x10
7101aee264  mov x0,x20
7101aee268  stp x9,x11,[x24, #0x168]
7101aee26c  bl 0x7103776640
7101aee270  ldr x19,[sp, #0x18]
7101aee274  fmov s0,0x3f800000
7101aee278  adrp x1,0x71043f0000
7101aee27c  add x1,x1,#0x5a6
7101aee280  mov x0,x19
7101aee284  bl 0x7103778300
7101aee288  stp x21,xzr,[sp, #0x10]
7101aee28c  cbz x19,0x7101aee2a8
7101aee290  ldr x0,[x19, #0x18]
7101aee294  stp x27,xzr,[x19, #0x10]
7101aee298  cbz x0,0x7101aee2a0
7101aee29c  bl 0x710392eb40
7101aee2a0  mov x0,x19
7101aee2a4  bl 0x710392eb40
7101aee2a8  adrp x1,0x7104281000
7101aee2ac  add x1,x1,#0x191
7101aee2b0  add x8,sp,#0x10
7101aee2b4  mov x0,x20
7101aee2b8  bl 0x7103776640
7101aee2bc  ldr x19,[sp, #0x18]
7101aee2c0  fmov s0,0x3f800000
7101aee2c4  adrp x1,0x71043f0000
7101aee2c8  add x1,x1,#0x5a6
7101aee2cc  mov x0,x19
7101aee2d0  bl 0x7103778300
7101aee2d4  stp x21,xzr,[sp, #0x10]
7101aee2d8  cbz x19,0x7101aee2f4
7101aee2dc  ldr x0,[x19, #0x18]
7101aee2e0  stp x27,xzr,[x19, #0x10]
7101aee2e4  cbz x0,0x7101aee2ec
7101aee2e8  bl 0x710392eb40
7101aee2ec  mov x0,x19
7101aee2f0  bl 0x710392eb40
7101aee2f4  adrp x1,0x710432a000
7101aee2f8  add x1,x1,#0x6e1
7101aee2fc  add x8,sp,#0x10
7101aee300  mov x0,x20
7101aee304  bl 0x7103776640
7101aee308  ldr x19,[sp, #0x18]
7101aee30c  fmov s0,0x3f800000
7101aee310  adrp x1,0x71042e6000
7101aee314  add x1,x1,#0xc31
7101aee318  mov x0,x19
7101aee31c  bl 0x7103778300
7101aee320  stp x21,xzr,[sp, #0x10]
7101aee324  cbz x19,0x7101aee340
7101aee328  ldr x0,[x19, #0x18]
7101aee32c  stp x27,xzr,[x19, #0x10]
7101aee330  cbz x0,0x7101aee338
7101aee334  bl 0x710392eb40
7101aee338  mov x0,x19
7101aee33c  bl 0x710392eb40
7101aee340  adrp x1,0x71042b4000
7101aee344  add x1,x1,#0x950
7101aee348  add x8,sp,#0x10
7101aee34c  mov x0,x20
7101aee350  bl 0x7103776640
7101aee354  ldr x19,[sp, #0x18]
7101aee358  fmov s0,0x3f800000
7101aee35c  adrp x1,0x71042e6000
7101aee360  add x1,x1,#0xc31
7101aee364  mov x0,x19
7101aee368  bl 0x7103778300
7101aee36c  stp x21,xzr,[sp, #0x10]
7101aee370  cbz x19,0x7101aee38c
7101aee374  ldr x0,[x19, #0x18]
7101aee378  stp x27,xzr,[x19, #0x10]
7101aee37c  cbz x0,0x7101aee384
7101aee380  bl 0x710392eb40
7101aee384  mov x0,x19
7101aee388  bl 0x710392eb40
7101aee38c  ldr x19,[x24, #0x328]
7101aee390  mov w1,#0x88
7101aee394  mov w0,#0x10
7101aee398  bl 0x710392e290
7101aee39c  mov x20,x0
7101aee3a0  cbnz x0,0x7101aee3ec
7101aee3a4  adrp x8,0x7105332000
7101aee3a8  ldr x0,[x8, #0xf00]
7101aee3ac  cbz x0,0x7101aee3e8
7101aee3b0  mov w8,#0x88
7101aee3b4  stur wzr,[x29, #-0x90]
7101aee3b8  sub x1,x29,#0x90
7101aee3bc  str x8,[sp, #0x10]
7101aee3c0  ldr x8,[x0]
7101aee3c4  ldr x8,[x8, #0x30]
7101aee3c8  add x2,sp,#0x10
7101aee3cc  blr x8
7101aee3d0  tbz w0,#0x0,0x7101aee3e8
7101aee3d4  mov w1,#0x88
7101aee3d8  mov w0,#0x10
7101aee3dc  bl 0x710392e290
7101aee3e0  mov x20,x0
7101aee3e4  cbnz x0,0x7101aee3ec
7101aee3e8  mov x20,xzr
7101aee3ec  mov w2,#0x1
7101aee3f0  mov x0,x20
7101aee3f4  mov x1,x19
7101aee3f8  mov w21,#0x1
7101aee3fc  bl 0x7101ad0e40
7101aee400  adrp x8,0x7105333000
7101aee404  add x8,x8,#0x600
7101aee408  str x8,[x20, #0x10]
7101aee40c  ldp w9,w8,[x8, #0x60]
7101aee410  stp w9,w8,[x20, #0x68]
7101aee414  adrp x8,0x7105333000
7101aee418  add x8,x8,#0x650
7101aee41c  ldaxrb w9,[x8]
7101aee420  stxrb w10,w21,[x8]
7101aee424  and w9,w9,#0x1
7101aee428  cmp w10,#0x0
7101aee42c  ccmp w9,#0x0,#0x0,eq
7101aee430  b.ne 0x7101aee41c
7101aee434  adrp x8,0x7105333000
7101aee438  add x8,x8,#0x648
7101aee43c  ldr x9,[x8]
7101aee440  str x9,[x20, #0x48]
7101aee444  mov x0,x20
7101aee448  str x20,[x8], #0x8
7101aee44c  stlrb wzr,[x8]
7101aee450  bl 0x71032caea0
7101aee454  ldr x0,[x24, #0x110]
7101aee458  str x20,[x24, #0x110]
7101aee45c  cbz x0,0x7101aee464
7101aee460  bl 0x71032cad20
7101aee464  ldr x0,[x23, #0xca8]
7101aee468  bl 0x7101ccce30
7101aee46c  ldr x0,[sp, #0x250]
7101aee470  add x8,sp,#0x140
7101aee474  add x8,x8,#0xf0
7101aee478  cmp x8,x0
7101aee47c  b.eq 0x7101aee490
7101aee480  cbz x0,0x7101aee49c
7101aee484  ldr x8,[x0]
7101aee488  ldr x8,[x8, #0x28]
7101aee48c  b 0x7101aee498
7101aee490  ldr x8,[x0]
7101aee494  ldr x8,[x8, #0x20]
7101aee498  blr x8
7101aee49c  ldr x0,[sp, #0x220]
7101aee4a0  add x8,sp,#0x140
7101aee4a4  add x8,x8,#0xc0
7101aee4a8  cmp x8,x0
7101aee4ac  b.eq 0x7101aee4c0
7101aee4b0  cbz x0,0x7101aee4cc
7101aee4b4  ldr x8,[x0]
7101aee4b8  ldr x8,[x8, #0x28]
7101aee4bc  b 0x7101aee4c8
7101aee4c0  ldr x8,[x0]
7101aee4c4  ldr x8,[x8, #0x20]
7101aee4c8  blr x8
7101aee4cc  ldr x0,[sp, #0x1f0]
7101aee4d0  add x8,sp,#0x140
7101aee4d4  add x8,x8,#0x90
7101aee4d8  cmp x8,x0
7101aee4dc  b.eq 0x7101aee4f0
7101aee4e0  cbz x0,0x7101aee4fc
7101aee4e4  ldr x8,[x0]
7101aee4e8  ldr x8,[x8, #0x28]
7101aee4ec  b 0x7101aee4f8
7101aee4f0  ldr x8,[x0]
7101aee4f4  ldr x8,[x8, #0x20]
7101aee4f8  blr x8
7101aee4fc  ldr x0,[sp, #0x1c0]
7101aee500  add x8,sp,#0x140
7101aee504  add x8,x8,#0x60
7101aee508  cmp x8,x0
7101aee50c  b.eq 0x7101aee520
7101aee510  cbz x0,0x7101aee52c
7101aee514  ldr x8,[x0]
7101aee518  ldr x8,[x8, #0x28]
7101aee51c  b 0x7101aee528
7101aee520  ldr x8,[x0]
7101aee524  ldr x8,[x8, #0x20]
7101aee528  blr x8
7101aee52c  ldr x0,[sp, #0x190]
7101aee530  add x8,sp,#0x140
7101aee534  add x8,x8,#0x30
7101aee538  cmp x8,x0
7101aee53c  b.eq 0x7101aee550
7101aee540  cbz x0,0x7101aee55c
7101aee544  ldr x8,[x0]
7101aee548  ldr x8,[x8, #0x28]
7101aee54c  b 0x7101aee558
7101aee550  ldr x8,[x0]
7101aee554  ldr x8,[x8, #0x20]
7101aee558  blr x8
7101aee55c  add sp,sp,#0x2b0
7101aee560  ldp x29,x30,[sp, #0x50]
7101aee564  ldp x20,x19,[sp, #0x40]
7101aee568  ldp x22,x21,[sp, #0x30]
7101aee56c  ldp x24,x23,[sp, #0x20]
7101aee570  ldp x26,x25,[sp, #0x10]
7101aee574  ldp x28,x27,[sp], #0x60
7101aee578  ret
7101aee57c  bl 0x71039c2650
7101aee580  mov x0,x22
7101aee584  bl 0x71039c0c00
