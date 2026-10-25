// addr:      71019fe1e0
// offset:    0x19fe1e0
// name:      FUN_71019fe1e0
// mangled:   
// size:      7444

71019fe1e0  str d8,[sp, #-0x70]!
71019fe1e4  stp x28,x27,[sp, #0x10]
71019fe1e8  stp x26,x25,[sp, #0x20]
71019fe1ec  stp x24,x23,[sp, #0x30]
71019fe1f0  stp x22,x21,[sp, #0x40]
71019fe1f4  stp x20,x19,[sp, #0x50]
71019fe1f8  stp x29,x30,[sp, #0x60]
71019fe1fc  add x29,sp,#0x60
71019fe200  sub sp,sp,#0x1b0
71019fe204  mov x24,x1
71019fe208  mov x21,x0
71019fe20c  mov w1,#0x270
71019fe210  mov w0,#0x10
71019fe214  mov x22,x4
71019fe218  mov x20,x3
71019fe21c  mov x23,x2
71019fe220  bl 0x710392e290
71019fe224  mov x19,x0
71019fe228  cbnz x0,0x71019fe274
71019fe22c  adrp x8,0x7105332000
71019fe230  ldr x0,[x8, #0xf00]
71019fe234  cbz x0,0x71019fe270
71019fe238  mov w8,#0x270
71019fe23c  stur wzr,[x29, #-0xb0]
71019fe240  sub x1,x29,#0xb0
71019fe244  str x8,[sp, #0x10]
71019fe248  ldr x8,[x0]
71019fe24c  ldr x8,[x8, #0x30]
71019fe250  add x2,sp,#0x10
71019fe254  blr x8
71019fe258  tbz w0,#0x0,0x71019fe270
71019fe25c  mov w1,#0x270
71019fe260  mov w0,#0x10
71019fe264  bl 0x710392e290
71019fe268  mov x19,x0
71019fe26c  cbnz x0,0x71019fe274
71019fe270  mov x19,xzr
71019fe274  add x0,x19,#0x8
71019fe278  str x24,[x19]
71019fe27c  bl 0x7103776290
71019fe280  adrp x26,0x710523d000
71019fe284  add x26,x26,#0x9a8
71019fe288  mov w0,#0x10
71019fe28c  mov w1,#0x20
71019fe290  str x26,[x19, #0x18]
71019fe294  bl 0x710392e290
71019fe298  cbnz x0,0x71019fe2e0
71019fe29c  adrp x8,0x7105332000
71019fe2a0  ldr x0,[x8, #0xf00]
71019fe2a4  cbz x0,0x71019fe2dc
71019fe2a8  mov w8,#0x20
71019fe2ac  stur wzr,[x29, #-0xb0]
71019fe2b0  sub x1,x29,#0xb0
71019fe2b4  str x8,[sp, #0x10]
71019fe2b8  ldr x8,[x0]
71019fe2bc  ldr x8,[x8, #0x30]
71019fe2c0  add x2,sp,#0x10
71019fe2c4  blr x8
71019fe2c8  tbz w0,#0x0,0x71019fe2dc
71019fe2cc  mov w0,#0x10
71019fe2d0  mov w1,#0x20
71019fe2d4  bl 0x710392e290
71019fe2d8  cbnz x0,0x71019fe2e0
71019fe2dc  mov x0,xzr
71019fe2e0  stp xzr,xzr,[x0, #0x10]
71019fe2e4  mov w1,#0x20
71019fe2e8  stp xzr,xzr,[x0]
71019fe2ec  stp x0,x26,[x19, #0x20]
71019fe2f0  mov w0,#0x10
71019fe2f4  bl 0x710392e290
71019fe2f8  cbnz x0,0x71019fe340
71019fe2fc  adrp x8,0x7105332000
71019fe300  ldr x0,[x8, #0xf00]
71019fe304  cbz x0,0x71019fe33c
71019fe308  mov w8,#0x20
71019fe30c  stur wzr,[x29, #-0xb0]
71019fe310  sub x1,x29,#0xb0
71019fe314  str x8,[sp, #0x10]
71019fe318  ldr x8,[x0]
71019fe31c  ldr x8,[x8, #0x30]
71019fe320  add x2,sp,#0x10
71019fe324  blr x8
71019fe328  tbz w0,#0x0,0x71019fe33c
71019fe32c  mov w0,#0x10
71019fe330  mov w1,#0x20
71019fe334  bl 0x710392e290
71019fe338  cbnz x0,0x71019fe340
71019fe33c  mov x0,xzr
71019fe340  add x8,x19,#0x38
71019fe344  stp xzr,xzr,[x0, #0x10]
71019fe348  stp xzr,xzr,[x0]
71019fe34c  str x0,[x19, #0x30]
71019fe350  mov x0,x8
71019fe354  bl 0x7103776290
71019fe358  mov w0,#0x10
71019fe35c  mov w1,#0x20
71019fe360  str x26,[x19, #0x48]
71019fe364  bl 0x710392e290
71019fe368  cbnz x0,0x71019fe3b0
71019fe36c  adrp x8,0x7105332000
71019fe370  ldr x0,[x8, #0xf00]
71019fe374  cbz x0,0x71019fe3ac
71019fe378  mov w8,#0x20
71019fe37c  stur wzr,[x29, #-0xb0]
71019fe380  sub x1,x29,#0xb0
71019fe384  str x8,[sp, #0x10]
71019fe388  ldr x8,[x0]
71019fe38c  ldr x8,[x8, #0x30]
71019fe390  add x2,sp,#0x10
71019fe394  blr x8
71019fe398  tbz w0,#0x0,0x71019fe3ac
71019fe39c  mov w0,#0x10
71019fe3a0  mov w1,#0x20
71019fe3a4  bl 0x710392e290
71019fe3a8  cbnz x0,0x71019fe3b0
71019fe3ac  mov x0,xzr
71019fe3b0  add x8,x19,#0x58
71019fe3b4  stp xzr,xzr,[x0, #0x10]
71019fe3b8  stp xzr,xzr,[x0]
71019fe3bc  str x0,[x19, #0x50]
71019fe3c0  mov x0,x8
71019fe3c4  bl 0x7103776290
71019fe3c8  add x0,x19,#0x68
71019fe3cc  bl 0x7103776290
71019fe3d0  mov w0,#0x10
71019fe3d4  mov w1,#0x20
71019fe3d8  str x26,[x19, #0x78]
71019fe3dc  bl 0x710392e290
71019fe3e0  cbnz x0,0x71019fe428
71019fe3e4  adrp x8,0x7105332000
71019fe3e8  ldr x0,[x8, #0xf00]
71019fe3ec  cbz x0,0x71019fe424
71019fe3f0  mov w8,#0x20
71019fe3f4  stur wzr,[x29, #-0xb0]
71019fe3f8  sub x1,x29,#0xb0
71019fe3fc  str x8,[sp, #0x10]
71019fe400  ldr x8,[x0]
71019fe404  ldr x8,[x8, #0x30]
71019fe408  add x2,sp,#0x10
71019fe40c  blr x8
71019fe410  tbz w0,#0x0,0x71019fe424
71019fe414  mov w0,#0x10
71019fe418  mov w1,#0x20
71019fe41c  bl 0x710392e290
71019fe420  cbnz x0,0x71019fe428
71019fe424  mov x0,xzr
71019fe428  stp xzr,xzr,[x0, #0x10]
71019fe42c  mov w1,#0x20
71019fe430  stp xzr,xzr,[x0]
71019fe434  stp x0,x26,[x19, #0x80]
71019fe438  mov w0,#0x10
71019fe43c  bl 0x710392e290
71019fe440  cbnz x0,0x71019fe488
71019fe444  adrp x8,0x7105332000
71019fe448  ldr x0,[x8, #0xf00]
71019fe44c  cbz x0,0x71019fe484
71019fe450  mov w8,#0x20
71019fe454  stur wzr,[x29, #-0xb0]
71019fe458  sub x1,x29,#0xb0
71019fe45c  str x8,[sp, #0x10]
71019fe460  ldr x8,[x0]
71019fe464  ldr x8,[x8, #0x30]
71019fe468  add x2,sp,#0x10
71019fe46c  blr x8
71019fe470  tbz w0,#0x0,0x71019fe484
71019fe474  mov w0,#0x10
71019fe478  mov w1,#0x20
71019fe47c  bl 0x710392e290
71019fe480  cbnz x0,0x71019fe488
71019fe484  mov x0,xzr
71019fe488  stp xzr,xzr,[x0, #0x10]
71019fe48c  mov w1,#0x20
71019fe490  stp xzr,xzr,[x0]
71019fe494  stp x0,x26,[x19, #0x90]
71019fe498  mov w0,#0x10
71019fe49c  bl 0x710392e290
71019fe4a0  cbnz x0,0x71019fe4e8
71019fe4a4  adrp x8,0x7105332000
71019fe4a8  ldr x0,[x8, #0xf00]
71019fe4ac  cbz x0,0x71019fe4e4
71019fe4b0  mov w8,#0x20
71019fe4b4  stur wzr,[x29, #-0xb0]
71019fe4b8  sub x1,x29,#0xb0
71019fe4bc  str x8,[sp, #0x10]
71019fe4c0  ldr x8,[x0]
71019fe4c4  ldr x8,[x8, #0x30]
71019fe4c8  add x2,sp,#0x10
71019fe4cc  blr x8
71019fe4d0  tbz w0,#0x0,0x71019fe4e4
71019fe4d4  mov w0,#0x10
71019fe4d8  mov w1,#0x20
71019fe4dc  bl 0x710392e290
71019fe4e0  cbnz x0,0x71019fe4e8
71019fe4e4  mov x0,xzr
71019fe4e8  add x8,x19,#0xa8
71019fe4ec  stp xzr,xzr,[x0, #0x10]
71019fe4f0  stp xzr,xzr,[x0]
71019fe4f4  str x0,[x19, #0xa0]
71019fe4f8  mov x0,x8
71019fe4fc  bl 0x7103776290
71019fe500  mov w0,#0x10
71019fe504  mov w1,#0x20
71019fe508  str x26,[x19, #0xb8]
71019fe50c  bl 0x710392e290
71019fe510  cbnz x0,0x71019fe558
71019fe514  adrp x8,0x7105332000
71019fe518  ldr x0,[x8, #0xf00]
71019fe51c  cbz x0,0x71019fe554
71019fe520  mov w8,#0x20
71019fe524  stur wzr,[x29, #-0xb0]
71019fe528  sub x1,x29,#0xb0
71019fe52c  str x8,[sp, #0x10]
71019fe530  ldr x8,[x0]
71019fe534  ldr x8,[x8, #0x30]
71019fe538  add x2,sp,#0x10
71019fe53c  blr x8
71019fe540  tbz w0,#0x0,0x71019fe554
71019fe544  mov w0,#0x10
71019fe548  mov w1,#0x20
71019fe54c  bl 0x710392e290
71019fe550  cbnz x0,0x71019fe558
71019fe554  mov x0,xzr
71019fe558  stp xzr,xzr,[x0, #0x10]
71019fe55c  mov w1,#0x20
71019fe560  stp xzr,xzr,[x0]
71019fe564  stp x0,x26,[x19, #0xc0]
71019fe568  mov w0,#0x10
71019fe56c  bl 0x710392e290
71019fe570  cbnz x0,0x71019fe5b8
71019fe574  adrp x8,0x7105332000
71019fe578  ldr x0,[x8, #0xf00]
71019fe57c  cbz x0,0x71019fe5b4
71019fe580  mov w8,#0x20
71019fe584  stur wzr,[x29, #-0xb0]
71019fe588  sub x1,x29,#0xb0
71019fe58c  str x8,[sp, #0x10]
71019fe590  ldr x8,[x0]
71019fe594  ldr x8,[x8, #0x30]
71019fe598  add x2,sp,#0x10
71019fe59c  blr x8
71019fe5a0  tbz w0,#0x0,0x71019fe5b4
71019fe5a4  mov w0,#0x10
71019fe5a8  mov w1,#0x20
71019fe5ac  bl 0x710392e290
71019fe5b0  cbnz x0,0x71019fe5b8
71019fe5b4  mov x0,xzr
71019fe5b8  add x8,x19,#0xd8
71019fe5bc  stp xzr,xzr,[x0, #0x10]
71019fe5c0  stp xzr,xzr,[x0]
71019fe5c4  str x0,[x19, #0xd0]
71019fe5c8  mov x0,x8
71019fe5cc  bl 0x7103776290
71019fe5d0  add x0,x19,#0xe8
71019fe5d4  bl 0x7103776290
71019fe5d8  add x0,x19,#0xf8
71019fe5dc  bl 0x7103776290
71019fe5e0  add x0,x19,#0x108
71019fe5e4  bl 0x7103776290
71019fe5e8  add x0,x19,#0x118
71019fe5ec  bl 0x7103776290
71019fe5f0  adrp x25,0x710523d000
71019fe5f4  add x25,x25,#0x9e8
71019fe5f8  mov w0,#0x10
71019fe5fc  orr w1,wzr,#0x18
71019fe600  str x25,[x19, #0x128]
71019fe604  bl 0x710392e290
71019fe608  cbnz x0,0x71019fe650
71019fe60c  adrp x8,0x7105332000
71019fe610  ldr x0,[x8, #0xf00]
71019fe614  cbz x0,0x71019fe64c
71019fe618  orr w8,wzr,#0x18
71019fe61c  stur wzr,[x29, #-0xb0]
71019fe620  sub x1,x29,#0xb0
71019fe624  str x8,[sp, #0x10]
71019fe628  ldr x8,[x0]
71019fe62c  ldr x8,[x8, #0x30]
71019fe630  add x2,sp,#0x10
71019fe634  blr x8
71019fe638  tbz w0,#0x0,0x71019fe64c
71019fe63c  mov w0,#0x10
71019fe640  orr w1,wzr,#0x18
71019fe644  bl 0x710392e290
71019fe648  cbnz x0,0x71019fe650
71019fe64c  mov x0,xzr
71019fe650  mov w24,#0x1
71019fe654  stp xzr,xzr,[x0]
71019fe658  strb w24,[x0, #0x10]
71019fe65c  str x0,[x19, #0x130]
71019fe660  add x0,x19,#0x140
71019fe664  str wzr,[x19, #0x138]
71019fe668  bl 0x7103776290
71019fe66c  add x0,x19,#0x150
71019fe670  bl 0x7103776290
71019fe674  add x0,x19,#0x160
71019fe678  bl 0x7103776290
71019fe67c  mov w0,#0x10
71019fe680  orr w1,wzr,#0x18
71019fe684  str x25,[x19, #0x170]
71019fe688  bl 0x710392e290
71019fe68c  cbnz x0,0x71019fe6d4
71019fe690  adrp x8,0x7105332000
71019fe694  ldr x0,[x8, #0xf00]
71019fe698  cbz x0,0x71019fe6d0
71019fe69c  orr w8,wzr,#0x18
71019fe6a0  stur wzr,[x29, #-0xb0]
71019fe6a4  sub x1,x29,#0xb0
71019fe6a8  str x8,[sp, #0x10]
71019fe6ac  ldr x8,[x0]
71019fe6b0  ldr x8,[x8, #0x30]
71019fe6b4  add x2,sp,#0x10
71019fe6b8  blr x8
71019fe6bc  tbz w0,#0x0,0x71019fe6d0
71019fe6c0  mov w0,#0x10
71019fe6c4  orr w1,wzr,#0x18
71019fe6c8  bl 0x710392e290
71019fe6cc  cbnz x0,0x71019fe6d4
71019fe6d0  mov x0,xzr
71019fe6d4  stp xzr,xzr,[x0]
71019fe6d8  orr w1,wzr,#0x18
71019fe6dc  strb w24,[x0, #0x10]
71019fe6e0  stp x0,x25,[x19, #0x178]
71019fe6e4  mov w0,#0x10
71019fe6e8  bl 0x710392e290
71019fe6ec  cbnz x0,0x71019fe734
71019fe6f0  adrp x8,0x7105332000
71019fe6f4  ldr x0,[x8, #0xf00]
71019fe6f8  cbz x0,0x71019fe730
71019fe6fc  orr w8,wzr,#0x18
71019fe700  stur wzr,[x29, #-0xb0]
71019fe704  sub x1,x29,#0xb0
71019fe708  str x8,[sp, #0x10]
71019fe70c  ldr x8,[x0]
71019fe710  ldr x8,[x8, #0x30]
71019fe714  add x2,sp,#0x10
71019fe718  blr x8
71019fe71c  tbz w0,#0x0,0x71019fe730
71019fe720  mov w0,#0x10
71019fe724  orr w1,wzr,#0x18
71019fe728  bl 0x710392e290
71019fe72c  cbnz x0,0x71019fe734
71019fe730  mov x0,xzr
71019fe734  mov w24,#0x1
71019fe738  stp xzr,xzr,[x0]
71019fe73c  strb w24,[x0, #0x10]
71019fe740  orr w1,wzr,#0x18
71019fe744  stp x0,x25,[x19, #0x188]
71019fe748  mov w0,#0x10
71019fe74c  bl 0x710392e290
71019fe750  cbnz x0,0x71019fe798
71019fe754  adrp x8,0x7105332000
71019fe758  ldr x0,[x8, #0xf00]
71019fe75c  cbz x0,0x71019fe794
71019fe760  orr w8,wzr,#0x18
71019fe764  stur wzr,[x29, #-0xb0]
71019fe768  sub x1,x29,#0xb0
71019fe76c  str x8,[sp, #0x10]
71019fe770  ldr x8,[x0]
71019fe774  ldr x8,[x8, #0x30]
71019fe778  add x2,sp,#0x10
71019fe77c  blr x8
71019fe780  tbz w0,#0x0,0x71019fe794
71019fe784  mov w0,#0x10
71019fe788  orr w1,wzr,#0x18
71019fe78c  bl 0x710392e290
71019fe790  cbnz x0,0x71019fe798
71019fe794  mov x0,xzr
71019fe798  stp xzr,xzr,[x0]
71019fe79c  orr w1,wzr,#0x18
71019fe7a0  strb w24,[x0, #0x10]
71019fe7a4  stp x0,x25,[x19, #0x198]
71019fe7a8  mov w0,#0x10
71019fe7ac  bl 0x710392e290
71019fe7b0  cbnz x0,0x71019fe7f8
71019fe7b4  adrp x8,0x7105332000
71019fe7b8  ldr x0,[x8, #0xf00]
71019fe7bc  cbz x0,0x71019fe7f4
71019fe7c0  orr w8,wzr,#0x18
71019fe7c4  stur wzr,[x29, #-0xb0]
71019fe7c8  sub x1,x29,#0xb0
71019fe7cc  str x8,[sp, #0x10]
71019fe7d0  ldr x8,[x0]
71019fe7d4  ldr x8,[x8, #0x30]
71019fe7d8  add x2,sp,#0x10
71019fe7dc  blr x8
71019fe7e0  tbz w0,#0x0,0x71019fe7f4
71019fe7e4  mov w0,#0x10
71019fe7e8  orr w1,wzr,#0x18
71019fe7ec  bl 0x710392e290
71019fe7f0  cbnz x0,0x71019fe7f8
71019fe7f4  mov x0,xzr
71019fe7f8  mov w24,#0x1
71019fe7fc  stp xzr,xzr,[x0]
71019fe800  strb w24,[x0, #0x10]
71019fe804  orr w1,wzr,#0x18
71019fe808  stp x0,x25,[x19, #0x1a8]
71019fe80c  mov w0,#0x10
71019fe810  bl 0x710392e290
71019fe814  cbnz x0,0x71019fe85c
71019fe818  adrp x8,0x7105332000
71019fe81c  ldr x0,[x8, #0xf00]
71019fe820  cbz x0,0x71019fe858
71019fe824  orr w8,wzr,#0x18
71019fe828  stur wzr,[x29, #-0xb0]
71019fe82c  sub x1,x29,#0xb0
71019fe830  str x8,[sp, #0x10]
71019fe834  ldr x8,[x0]
71019fe838  ldr x8,[x8, #0x30]
71019fe83c  add x2,sp,#0x10
71019fe840  blr x8
71019fe844  tbz w0,#0x0,0x71019fe858
71019fe848  mov w0,#0x10
71019fe84c  orr w1,wzr,#0x18
71019fe850  bl 0x710392e290
71019fe854  cbnz x0,0x71019fe85c
71019fe858  mov x0,xzr
71019fe85c  mov w8,#0xffffffff
71019fe860  orr x9,xzr,#0x300000000
71019fe864  strb w24,[x0, #0x10]
71019fe868  stp xzr,xzr,[x0]
71019fe86c  str x9,[x19, #0x218]
71019fe870  mov x9,#0xff0000000000
71019fe874  movk x9,#0xc1ff, LSL #48
71019fe878  str w8,[x19, #0x220]
71019fe87c  str x8,[x19, #0x238]
71019fe880  str xzr,[x19, #0x200]
71019fe884  str xzr,[x19, #0x210]
71019fe888  str x9,[x19, #0x228]
71019fe88c  str x9,[x19, #0x230]
71019fe890  str xzr,[x19, #0x240]
71019fe894  strh wzr,[x19, #0x258]
71019fe898  str xzr,[x19, #0x250]
71019fe89c  strb w24,[x19, #0x25a]
71019fe8a0  strb wzr,[x19, #0x25f]
71019fe8a4  stp xzr,x8,[x19, #0x1c8]
71019fe8a8  orr x8,xzr,#-0xffff00000001
71019fe8ac  str x8,[x19, #0x248]
71019fe8b0  add x8,x19,#0x25b
71019fe8b4  stp x0,xzr,[x19, #0x1b8]
71019fe8b8  str wzr,[x8]
71019fe8bc  add x8,x19,#0x261
71019fe8c0  strb w24,[x19, #0x260]
71019fe8c4  strb wzr,[x19, #0x269]
71019fe8c8  str xzr,[x8]
71019fe8cc  strb w24,[x19, #0x26a]
71019fe8d0  ldr x24,[x21, #0x8]
71019fe8d4  str x19,[x21, #0x8]
71019fe8d8  cbz x24,0x71019fe8f0
71019fe8dc  mov x0,x24
71019fe8e0  bl 0x71019fbbd0
71019fe8e4  mov x0,x24
71019fe8e8  bl 0x710392eb40
71019fe8ec  ldr x19,[x21, #0x8]
71019fe8f0  add x21,x19,#0x8
71019fe8f4  cmp x21,x23
71019fe8f8  b.eq 0x71019fe96c
71019fe8fc  ldr x8,[x23, #0x8]
71019fe900  ldr x8,[x8]
71019fe904  ldr x9,[x19, #0x10]
71019fe908  str x8,[x9]
71019fe90c  ldr x8,[x23, #0x8]
71019fe910  ldr x8,[x8, #0x8]
71019fe914  ldr x9,[x19, #0x10]
71019fe918  str x8,[x9, #0x8]
71019fe91c  ldr x9,[x23, #0x8]
71019fe920  ldr x8,[x19, #0x10]
71019fe924  cmp x8,x9
71019fe928  b.eq 0x71019fe96c
71019fe92c  ldr x10,[x9, #0x18]
71019fe930  ldr x10,[x10]
71019fe934  ldr x11,[x8, #0x18]
71019fe938  str x10,[x11]
71019fe93c  ldr x10,[x9, #0x18]
71019fe940  ldr x10,[x10, #0x8]
71019fe944  ldr x11,[x8, #0x18]
71019fe948  str x10,[x11, #0x8]
71019fe94c  ldr x10,[x9, #0x18]
71019fe950  ldr x10,[x10, #0x10]
71019fe954  ldr x11,[x8, #0x18]
71019fe958  str x10,[x11, #0x10]
71019fe95c  ldr x9,[x9, #0x18]
71019fe960  ldr x9,[x9, #0x18]
71019fe964  ldr x8,[x8, #0x18]
71019fe968  str x9,[x8, #0x18]
71019fe96c  ldr w8,[x20]
71019fe970  str w8,[x19, #0x1c8]
71019fe974  ldr w8,[x20, #0x4]
71019fe978  str w8,[x19, #0x1cc]
71019fe97c  ldr w8,[x20, #0x8]
71019fe980  str w8,[x19, #0x1d4]
71019fe984  ldr x0,[x22, #0x20]
71019fe988  add x23,x19,#0x1e0
71019fe98c  cbz x0,0x71019fe9ac
71019fe990  cmp x22,x0
71019fe994  b.eq 0x71019fe9b4
71019fe998  ldr x8,[x0]
71019fe99c  ldr x8,[x8, #0x10]
71019fe9a0  blr x8
71019fe9a4  str x0,[sp, #0x30]
71019fe9a8  b 0x71019fe9cc
71019fe9ac  str xzr,[sp, #0x30]
71019fe9b0  b 0x71019fe9cc
71019fe9b4  add x8,sp,#0x10
71019fe9b8  str x8,[sp, #0x30]
71019fe9bc  ldr x8,[x0]
71019fe9c0  ldr x8,[x8, #0x18]
71019fe9c4  add x1,sp,#0x10
71019fe9c8  blr x8
71019fe9cc  add x0,sp,#0x10
71019fe9d0  mov x1,x23
71019fe9d4  add x22,sp,#0x10
71019fe9d8  bl 0x71019fbf50
71019fe9dc  ldr x0,[sp, #0x30]
71019fe9e0  cmp x22,x0
71019fe9e4  b.eq 0x71019fe9f8
71019fe9e8  cbz x0,0x71019fea04
71019fe9ec  ldr x8,[x0]
71019fe9f0  ldr x8,[x8, #0x28]
71019fe9f4  b 0x71019fea00
71019fe9f8  ldr x8,[x0]
71019fe9fc  ldr x8,[x8, #0x20]
71019fea00  blr x8
71019fea04  ldrb w8,[x20, #0xc]
71019fea08  strb w8,[x19, #0x258]
71019fea0c  ldrb w8,[x20, #0xd]
71019fea10  strb w8,[x19, #0x259]
71019fea14  ldrb w8,[x20, #0xe]
71019fea18  strb w8,[x19, #0x25a]
71019fea1c  ldrb w8,[x20, #0xf]
71019fea20  strb w8,[x19, #0x25b]
71019fea24  ldrb w8,[x20, #0x10]
71019fea28  strb w8,[x19, #0x25c]
71019fea2c  ldrb w8,[x20, #0x11]
71019fea30  strb w8,[x19, #0x25d]
71019fea34  ldrb w8,[x20, #0x12]
71019fea38  strb w8,[x19, #0x25e]
71019fea3c  ldrb w8,[x20, #0x13]
71019fea40  strb w8,[x19, #0x25f]
71019fea44  ldrb w8,[x20, #0x14]
71019fea48  strb w8,[x19, #0x264]
71019fea4c  ldrb w8,[x20, #0x16]
71019fea50  strb w8,[x19, #0x269]
71019fea54  ldrb w8,[x20, #0x17]
71019fea58  mov x11,#0x6c70
71019fea5c  movk x11,#0x7961, LSL #16
71019fea60  mov w28,#0x9dc5
71019fea64  movk w28,#0x811c, LSL #16
71019fea68  orr x9,xzr,#0x1000000000
71019fea6c  add x10,sp,#0x10
71019fea70  movk x11,#0x7265, LSL #32
71019fea74  movk x11,#0x635f, LSL #48
71019fea78  mov x12,#0x6c6f
71019fea7c  movk x12,#0x726f, LSL #16
71019fea80  movk x12,#0x6f5f, LSL #32
71019fea84  movk x12,#0x6666, LSL #48
71019fea88  strb w8,[x19, #0x26a]
71019fea8c  add x1,x10,#0x8
71019fea90  add x8,x10,#0x9
71019fea94  stp x9,x11,[sp, #0x10]
71019fea98  orr w9,wzr,#0x70
71019fea9c  mov w27,#0x89
71019feaa0  mov w10,w28
71019feaa4  str x12,[sp, #0x20]
71019feaa8  strb wzr,[sp, #0x28]
71019feaac  mul w10,w10,w27
71019feab0  and w9,w9,#0xff
71019feab4  eor w10,w10,w9
71019feab8  ldrb w9,[x8], #0x1
71019feabc  cbnz w9,0x71019feaac
71019feac0  fmov s8,0x3f800000
71019feac4  str w10,[sp, #0x10]
71019feac8  ldr x0,[x19, #0x10]
71019feacc  mov v0.16B,v8.16B
71019fead0  bl 0x7103778300
71019fead4  ldr x0,[x19, #0x10]
71019fead8  mov v0.16B,v8.16B
71019feadc  adrp x1,0x710439c000
71019feae0  add x1,x1,#0xdb9
71019feae4  bl 0x7103778300
71019feae8  ldr x0,[x19, #0x10]
71019feaec  mov v0.16B,v8.16B
71019feaf0  adrp x1,0x71043be000
71019feaf4  add x1,x1,#0xff
71019feaf8  bl 0x7103778300
71019feafc  ldr x0,[x19, #0x10]
71019feb00  mov v0.16B,v8.16B
71019feb04  adrp x1,0x71043f0000
71019feb08  add x1,x1,#0x423
71019feb0c  bl 0x7103778300
71019feb10  ldr x0,[x19, #0x10]
71019feb14  mov v0.16B,v8.16B
71019feb18  adrp x1,0x71042f7000
71019feb1c  add x1,x1,#0xc22
71019feb20  bl 0x7103778300
71019feb24  ldr x0,[x19, #0x10]
71019feb28  mov v0.16B,v8.16B
71019feb2c  adrp x1,0x7104421000
71019feb30  add x1,x1,#0xcea
71019feb34  bl 0x7103778300
71019feb38  ldr x0,[x19, #0x10]
71019feb3c  mov v0.16B,v8.16B
71019feb40  adrp x1,0x71043ad000
71019feb44  add x1,x1,#0x13e
71019feb48  bl 0x7103778300
71019feb4c  adrp x1,0x7104411000
71019feb50  add x1,x1,#0x1c4
71019feb54  add x8,sp,#0x10
71019feb58  mov x0,x21
71019feb5c  add x22,sp,#0x10
71019feb60  bl 0x7103776910
71019feb64  add x8,x19,#0x18
71019feb68  cmp x8,x22
71019feb6c  b.eq 0x71019feb88
71019feb70  ldr x8,[sp, #0x18]
71019feb74  str xzr,[sp, #0x18]
71019feb78  ldr x0,[x19, #0x20]
71019feb7c  str x8,[x19, #0x20]
71019feb80  cbz x0,0x71019feb88
71019feb84  bl 0x710392eb40
71019feb88  ldr x0,[sp, #0x18]
71019feb8c  stp x26,xzr,[sp, #0x10]
71019feb90  cbz x0,0x71019feb98
71019feb94  bl 0x710392eb40
71019feb98  adrp x1,0x710437b000
71019feb9c  add x1,x1,#0xfdd
71019feba0  add x8,sp,#0x10
71019feba4  mov x0,x21
71019feba8  add x22,sp,#0x10
71019febac  bl 0x7103776910
71019febb0  add x8,x19,#0x28
71019febb4  cmp x8,x22
71019febb8  b.eq 0x71019febd4
71019febbc  ldr x8,[sp, #0x18]
71019febc0  str xzr,[sp, #0x18]
71019febc4  ldr x0,[x19, #0x30]
71019febc8  str x8,[x19, #0x30]
71019febcc  cbz x0,0x71019febd4
71019febd0  bl 0x710392eb40
71019febd4  ldr x0,[sp, #0x18]
71019febd8  stp x26,xzr,[sp, #0x10]
71019febdc  cbz x0,0x71019febe4
71019febe0  bl 0x710392eb40
71019febe4  adrp x1,0x710437c000
71019febe8  add x1,x1,#0xcf7
71019febec  add x8,sp,#0x10
71019febf0  mov x0,x21
71019febf4  add x23,sp,#0x10
71019febf8  bl 0x7103776640
71019febfc  add x8,x19,#0x38
71019fec00  cmp x8,x23
71019fec04  stur x8,[x29, #-0x58]
71019fec08  b.eq 0x71019fec38
71019fec0c  ldr x8,[sp, #0x18]
71019fec10  str xzr,[sp, #0x18]
71019fec14  ldr x23,[x19, #0x40]
71019fec18  str x8,[x19, #0x40]
71019fec1c  cbz x23,0x71019fec38
71019fec20  ldr x0,[x23, #0x18]
71019fec24  stp x26,xzr,[x23, #0x10]
71019fec28  cbz x0,0x71019fec30
71019fec2c  bl 0x710392eb40
71019fec30  mov x0,x23
71019fec34  bl 0x710392eb40
71019fec38  ldr x23,[sp, #0x18]
71019fec3c  adrp x22,0x710523d000
71019fec40  add x22,x22,#0x988
71019fec44  stp x22,xzr,[sp, #0x10]
71019fec48  cbz x23,0x71019fec64
71019fec4c  ldr x0,[x23, #0x18]
71019fec50  stp x26,xzr,[x23, #0x10]
71019fec54  cbz x0,0x71019fec5c
71019fec58  bl 0x710392eb40
71019fec5c  mov x0,x23
71019fec60  bl 0x710392eb40
71019fec64  adrp x1,0x710437c000
71019fec68  add x1,x1,#0x57d
71019fec6c  add x8,sp,#0x10
71019fec70  mov x0,x21
71019fec74  add x23,sp,#0x10
71019fec78  bl 0x7103776640
71019fec7c  add x8,x19,#0x58
71019fec80  cmp x8,x23
71019fec84  b.eq 0x71019fecb4
71019fec88  ldr x8,[sp, #0x18]
71019fec8c  str xzr,[sp, #0x18]
71019fec90  ldr x23,[x19, #0x60]
71019fec94  str x8,[x19, #0x60]
71019fec98  cbz x23,0x71019fecb4
71019fec9c  ldr x0,[x23, #0x18]
71019feca0  stp x26,xzr,[x23, #0x10]
71019feca4  cbz x0,0x71019fecac
71019feca8  bl 0x710392eb40
71019fecac  mov x0,x23
71019fecb0  bl 0x710392eb40
71019fecb4  ldr x23,[sp, #0x18]
71019fecb8  stp x22,xzr,[sp, #0x10]
71019fecbc  cbz x23,0x71019fecd8
71019fecc0  ldr x0,[x23, #0x18]
71019fecc4  stp x26,xzr,[x23, #0x10]
71019fecc8  cbz x0,0x71019fecd0
71019feccc  bl 0x710392eb40
71019fecd0  mov x0,x23
71019fecd4  bl 0x710392eb40
71019fecd8  adrp x1,0x710435b000
71019fecdc  add x1,x1,#0xfb0
71019fece0  add x8,sp,#0x10
71019fece4  mov x0,x21
71019fece8  add x23,sp,#0x10
71019fecec  bl 0x7103776640
71019fecf0  add x24,x19,#0x68
71019fecf4  cmp x24,x23
71019fecf8  b.eq 0x71019fed28
71019fecfc  ldr x8,[sp, #0x18]
71019fed00  str xzr,[sp, #0x18]
71019fed04  ldr x23,[x19, #0x70]
71019fed08  str x8,[x19, #0x70]
71019fed0c  cbz x23,0x71019fed28
71019fed10  ldr x0,[x23, #0x18]
71019fed14  stp x26,xzr,[x23, #0x10]
71019fed18  cbz x0,0x71019fed20
71019fed1c  bl 0x710392eb40
71019fed20  mov x0,x23
71019fed24  bl 0x710392eb40
71019fed28  ldr x23,[sp, #0x18]
71019fed2c  stp x22,xzr,[sp, #0x10]
71019fed30  cbz x23,0x71019fed4c
71019fed34  ldr x0,[x23, #0x18]
71019fed38  stp x26,xzr,[x23, #0x10]
71019fed3c  cbz x0,0x71019fed44
71019fed40  bl 0x710392eb40
71019fed44  mov x0,x23
71019fed48  bl 0x710392eb40
71019fed4c  adrp x1,0x71042e7000
71019fed50  add x1,x1,#0x1bb
71019fed54  add x8,sp,#0x10
71019fed58  mov x0,x21
71019fed5c  add x25,sp,#0x10
71019fed60  bl 0x7103776640
71019fed64  add x23,x19,#0xa8
71019fed68  cmp x23,x25
71019fed6c  b.eq 0x71019fed9c
71019fed70  ldr x8,[sp, #0x18]
71019fed74  str xzr,[sp, #0x18]
71019fed78  ldr x25,[x19, #0xb0]
71019fed7c  str x8,[x19, #0xb0]
71019fed80  cbz x25,0x71019fed9c
71019fed84  ldr x0,[x25, #0x18]
71019fed88  stp x26,xzr,[x25, #0x10]
71019fed8c  cbz x0,0x71019fed94
71019fed90  bl 0x710392eb40
71019fed94  mov x0,x25
71019fed98  bl 0x710392eb40
71019fed9c  ldr x25,[sp, #0x18]
71019feda0  stp x22,xzr,[sp, #0x10]
71019feda4  cbz x25,0x71019fedc0
71019feda8  ldr x0,[x25, #0x18]
71019fedac  stp x26,xzr,[x25, #0x10]
71019fedb0  cbz x0,0x71019fedb8
71019fedb4  bl 0x710392eb40
71019fedb8  mov x0,x25
71019fedbc  bl 0x710392eb40
71019fedc0  adrp x1,0x71043cf000
71019fedc4  add x1,x1,#0x4e9
71019fedc8  add x8,sp,#0x10
71019fedcc  mov x0,x21
71019fedd0  add x25,sp,#0x10
71019fedd4  bl 0x7103776640
71019fedd8  add x8,x19,#0xd8
71019feddc  cmp x8,x25
71019fede0  b.eq 0x71019fee10
71019fede4  ldr x8,[sp, #0x18]
71019fede8  str xzr,[sp, #0x18]
71019fedec  ldr x25,[x19, #0xe0]
71019fedf0  str x8,[x19, #0xe0]
71019fedf4  cbz x25,0x71019fee10
71019fedf8  ldr x0,[x25, #0x18]
71019fedfc  stp x26,xzr,[x25, #0x10]
71019fee00  cbz x0,0x71019fee08
71019fee04  bl 0x710392eb40
71019fee08  mov x0,x25
71019fee0c  bl 0x710392eb40
71019fee10  ldr x25,[sp, #0x18]
71019fee14  stp x22,xzr,[sp, #0x10]
71019fee18  cbz x25,0x71019fee34
71019fee1c  ldr x0,[x25, #0x18]
71019fee20  stp x26,xzr,[x25, #0x10]
71019fee24  cbz x0,0x71019fee2c
71019fee28  bl 0x710392eb40
71019fee2c  mov x0,x25
71019fee30  bl 0x710392eb40
71019fee34  adrp x1,0x710425f000
71019fee38  add x1,x1,#0x3d0
71019fee3c  add x8,sp,#0x10
71019fee40  mov x0,x21
71019fee44  add x25,sp,#0x10
71019fee48  bl 0x7103776640
71019fee4c  add x8,x19,#0xe8
71019fee50  cmp x8,x25
71019fee54  b.eq 0x71019fee84
71019fee58  ldr x8,[sp, #0x18]
71019fee5c  str xzr,[sp, #0x18]
71019fee60  ldr x25,[x19, #0xf0]
71019fee64  str x8,[x19, #0xf0]
71019fee68  cbz x25,0x71019fee84
71019fee6c  ldr x0,[x25, #0x18]
71019fee70  stp x26,xzr,[x25, #0x10]
71019fee74  cbz x0,0x71019fee7c
71019fee78  bl 0x710392eb40
71019fee7c  mov x0,x25
71019fee80  bl 0x710392eb40
71019fee84  ldr x25,[sp, #0x18]
71019fee88  stp x22,xzr,[sp, #0x10]
71019fee8c  cbz x25,0x71019feea8
71019fee90  ldr x0,[x25, #0x18]
71019fee94  stp x26,xzr,[x25, #0x10]
71019fee98  cbz x0,0x71019feea0
71019fee9c  bl 0x710392eb40
71019feea0  mov x0,x25
71019feea4  bl 0x710392eb40
71019feea8  adrp x1,0x71042c4000
71019feeac  add x1,x1,#0x80a
71019feeb0  add x8,sp,#0x10
71019feeb4  mov x0,x21
71019feeb8  add x25,sp,#0x10
71019feebc  bl 0x7103776640
71019feec0  add x8,x19,#0xf8
71019feec4  cmp x8,x25
71019feec8  b.eq 0x71019feef8
71019feecc  ldr x8,[sp, #0x18]
71019feed0  str xzr,[sp, #0x18]
71019feed4  ldr x25,[x19, #0x100]
71019feed8  str x8,[x19, #0x100]
71019feedc  cbz x25,0x71019feef8
71019feee0  ldr x0,[x25, #0x18]
71019feee4  stp x26,xzr,[x25, #0x10]
71019feee8  cbz x0,0x71019feef0
71019feeec  bl 0x710392eb40
71019feef0  mov x0,x25
71019feef4  bl 0x710392eb40
71019feef8  ldr x25,[sp, #0x18]
71019feefc  stp x22,xzr,[sp, #0x10]
71019fef00  cbz x25,0x71019fef1c
71019fef04  ldr x0,[x25, #0x18]
71019fef08  stp x26,xzr,[x25, #0x10]
71019fef0c  cbz x0,0x71019fef14
71019fef10  bl 0x710392eb40
71019fef14  mov x0,x25
71019fef18  bl 0x710392eb40
71019fef1c  adrp x1,0x7104291000
71019fef20  add x1,x1,#0x5f3
71019fef24  add x8,sp,#0x10
71019fef28  mov x0,x21
71019fef2c  add x25,sp,#0x10
71019fef30  bl 0x7103776640
71019fef34  add x8,x19,#0x108
71019fef38  cmp x8,x25
71019fef3c  b.eq 0x71019fef6c
71019fef40  ldr x8,[sp, #0x18]
71019fef44  str xzr,[sp, #0x18]
71019fef48  ldr x25,[x19, #0x110]
71019fef4c  str x8,[x19, #0x110]
71019fef50  cbz x25,0x71019fef6c
71019fef54  ldr x0,[x25, #0x18]
71019fef58  stp x26,xzr,[x25, #0x10]
71019fef5c  cbz x0,0x71019fef64
71019fef60  bl 0x710392eb40
71019fef64  mov x0,x25
71019fef68  bl 0x710392eb40
71019fef6c  ldr x25,[sp, #0x18]
71019fef70  stp x22,xzr,[sp, #0x10]
71019fef74  cbz x25,0x71019fef90
71019fef78  ldr x0,[x25, #0x18]
71019fef7c  stp x26,xzr,[x25, #0x10]
71019fef80  cbz x0,0x71019fef88
71019fef84  bl 0x710392eb40
71019fef88  mov x0,x25
71019fef8c  bl 0x710392eb40
71019fef90  adrp x1,0x710425f000
71019fef94  add x1,x1,#0xd64
71019fef98  add x8,sp,#0x10
71019fef9c  mov x0,x21
71019fefa0  mov x22,x26
71019fefa4  add x26,sp,#0x10
71019fefa8  bl 0x7103776640
71019fefac  add x25,x19,#0x118
71019fefb0  cmp x25,x26
71019fefb4  b.eq 0x71019fefe4
71019fefb8  ldr x8,[sp, #0x18]
71019fefbc  str xzr,[sp, #0x18]
71019fefc0  ldr x26,[x19, #0x120]
71019fefc4  str x8,[x19, #0x120]
71019fefc8  cbz x26,0x71019fefe4
71019fefcc  ldr x0,[x26, #0x18]
71019fefd0  stp x22,xzr,[x26, #0x10]
71019fefd4  cbz x0,0x71019fefdc
71019fefd8  bl 0x710392eb40
71019fefdc  mov x0,x26
71019fefe0  bl 0x710392eb40
71019fefe4  ldr x26,[sp, #0x18]
71019fefe8  adrp x8,0x710523d000
71019fefec  add x8,x8,#0x988
71019feff0  stp x8,xzr,[sp, #0x10]
71019feff4  cbz x26,0x71019ff010
71019feff8  ldr x0,[x26, #0x18]
71019feffc  stp x22,xzr,[x26, #0x10]
71019ff000  cbz x0,0x71019ff008
71019ff004  bl 0x710392eb40
71019ff008  mov x0,x26
71019ff00c  bl 0x710392eb40
71019ff010  orr x8,xzr,#0x1000000000
71019ff014  str x8,[sp, #0x10]
71019ff018  mov x8,#0x6c70
71019ff01c  movk x8,#0x7961, LSL #16
71019ff020  add x9,sp,#0x10
71019ff024  add x1,x9,#0x8
71019ff028  movk x8,#0x7265, LSL #32
71019ff02c  movk x8,#0x635f, LSL #48
71019ff030  str x8,[sp, #0x18]
71019ff034  add x8,x9,#0x9
71019ff038  mov x9,#0x6c6f
71019ff03c  movk x9,#0x726f, LSL #16
71019ff040  movk x9,#0x6f5f, LSL #32
71019ff044  movk x9,#0x6666, LSL #48
71019ff048  str x9,[sp, #0x20]
71019ff04c  orr w9,wzr,#0x70
71019ff050  strb wzr,[sp, #0x28]
71019ff054  mul w10,w28,w27
71019ff058  and w9,w9,#0xff
71019ff05c  eor w28,w10,w9
71019ff060  ldrb w9,[x8], #0x1
71019ff064  cbnz w9,0x71019ff054
71019ff068  fmov s8,0x3f800000
71019ff06c  str w28,[sp, #0x10]
71019ff070  ldr x0,[x19, #0x40]
71019ff074  mov v0.16B,v8.16B
71019ff078  bl 0x7103778300
71019ff07c  ldr x0,[x19, #0x40]
71019ff080  mov v0.16B,v8.16B
71019ff084  adrp x1,0x7104349000
71019ff088  add x1,x1,#0xd11
71019ff08c  bl 0x7103778300
71019ff090  ldr x8,[x19, #0x60]
71019ff094  ldr x8,[x8, #0x18]
71019ff098  ldr x8,[x8]
71019ff09c  cbz x8,0x71019ff0ac
71019ff0a0  ldrb w9,[x8, #0x58]
71019ff0a4  and w9,w9,#0xfe
71019ff0a8  strb w9,[x8, #0x58]
71019ff0ac  ldur x28,[x29, #-0x58]
71019ff0b0  adrp x1,0x71043cf000
71019ff0b4  add x1,x1,#0xca4
71019ff0b8  add x8,sp,#0x10
71019ff0bc  add x26,sp,#0x10
71019ff0c0  mov x0,x28
71019ff0c4  bl 0x7103776910
71019ff0c8  add x8,x19,#0x48
71019ff0cc  cmp x8,x26
71019ff0d0  adrp x27,0x710523d000
71019ff0d4  add x27,x27,#0x9e8
71019ff0d8  b.eq 0x71019ff0f4
71019ff0dc  ldr x8,[sp, #0x18]
71019ff0e0  str xzr,[sp, #0x18]
71019ff0e4  ldr x0,[x19, #0x50]
71019ff0e8  str x8,[x19, #0x50]
71019ff0ec  cbz x0,0x71019ff0f4
71019ff0f0  bl 0x710392eb40
71019ff0f4  ldr x0,[sp, #0x18]
71019ff0f8  stp x22,xzr,[sp, #0x10]
71019ff0fc  cbz x0,0x71019ff104
71019ff100  bl 0x710392eb40
71019ff104  adrp x1,0x710432a000
71019ff108  add x1,x1,#0x804
71019ff10c  add x8,sp,#0x10
71019ff110  mov x0,x28
71019ff114  add x26,sp,#0x10
71019ff118  bl 0x7103776910
71019ff11c  add x8,x19,#0x98
71019ff120  cmp x8,x26
71019ff124  b.eq 0x71019ff140
71019ff128  ldr x8,[sp, #0x18]
71019ff12c  str xzr,[sp, #0x18]
71019ff130  ldr x0,[x19, #0xa0]
71019ff134  str x8,[x19, #0xa0]
71019ff138  cbz x0,0x71019ff140
71019ff13c  bl 0x710392eb40
71019ff140  ldr x0,[sp, #0x18]
71019ff144  stp x22,xzr,[sp, #0x10]
71019ff148  cbz x0,0x71019ff150
71019ff14c  bl 0x710392eb40
71019ff150  adrp x1,0x71043cf000
71019ff154  add x1,x1,#0xca4
71019ff158  add x8,sp,#0x10
71019ff15c  mov x0,x24
71019ff160  add x26,sp,#0x10
71019ff164  bl 0x7103776910
71019ff168  add x8,x19,#0x78
71019ff16c  cmp x8,x26
71019ff170  b.eq 0x71019ff18c
71019ff174  ldr x8,[sp, #0x18]
71019ff178  str xzr,[sp, #0x18]
71019ff17c  ldr x0,[x19, #0x80]
71019ff180  str x8,[x19, #0x80]
71019ff184  cbz x0,0x71019ff18c
71019ff188  bl 0x710392eb40
71019ff18c  ldr x0,[sp, #0x18]
71019ff190  stp x22,xzr,[sp, #0x10]
71019ff194  cbz x0,0x71019ff19c
71019ff198  bl 0x710392eb40
71019ff19c  adrp x1,0x710438d000
71019ff1a0  add x1,x1,#0x369
71019ff1a4  add x8,sp,#0x10
71019ff1a8  mov x0,x24
71019ff1ac  add x26,sp,#0x10
71019ff1b0  bl 0x7103776910
71019ff1b4  add x8,x19,#0x88
71019ff1b8  cmp x8,x26
71019ff1bc  b.eq 0x71019ff1d8
71019ff1c0  ldr x8,[sp, #0x18]
71019ff1c4  str xzr,[sp, #0x18]
71019ff1c8  ldr x0,[x19, #0x90]
71019ff1cc  str x8,[x19, #0x90]
71019ff1d0  cbz x0,0x71019ff1d8
71019ff1d4  bl 0x710392eb40
71019ff1d8  ldr x0,[sp, #0x18]
71019ff1dc  mov x26,x22
71019ff1e0  stp x22,xzr,[sp, #0x10]
71019ff1e4  cbz x0,0x71019ff1ec
71019ff1e8  bl 0x710392eb40
71019ff1ec  adrp x1,0x71042c4000
71019ff1f0  add x1,x1,#0xdde
71019ff1f4  add x8,sp,#0x10
71019ff1f8  mov x0,x23
71019ff1fc  add x24,sp,#0x10
71019ff200  bl 0x7103776910
71019ff204  add x8,x19,#0xb8
71019ff208  cmp x8,x24
71019ff20c  adrp x22,0x710523d000
71019ff210  add x22,x22,#0x988
71019ff214  b.eq 0x71019ff230
71019ff218  ldr x8,[sp, #0x18]
71019ff21c  str xzr,[sp, #0x18]
71019ff220  ldr x0,[x19, #0xc0]
71019ff224  str x8,[x19, #0xc0]
71019ff228  cbz x0,0x71019ff230
71019ff22c  bl 0x710392eb40
71019ff230  ldr x0,[sp, #0x18]
71019ff234  stp x26,xzr,[sp, #0x10]
71019ff238  cbz x0,0x71019ff240
71019ff23c  bl 0x710392eb40
71019ff240  adrp x1,0x710438d000
71019ff244  add x1,x1,#0x34a
71019ff248  add x8,sp,#0x10
71019ff24c  mov x0,x23
71019ff250  add x24,sp,#0x10
71019ff254  bl 0x7103776910
71019ff258  add x8,x19,#0xc8
71019ff25c  cmp x8,x24
71019ff260  b.eq 0x71019ff27c
71019ff264  ldr x8,[sp, #0x18]
71019ff268  str xzr,[sp, #0x18]
71019ff26c  ldr x0,[x19, #0xd0]
71019ff270  str x8,[x19, #0xd0]
71019ff274  cbz x0,0x71019ff27c
71019ff278  bl 0x710392eb40
71019ff27c  ldr x0,[sp, #0x18]
71019ff280  stp x26,xzr,[sp, #0x10]
71019ff284  cbz x0,0x71019ff28c
71019ff288  bl 0x710392eb40
71019ff28c  adrp x1,0x7104291000
71019ff290  add x1,x1,#0x646
71019ff294  add x8,sp,#0x10
71019ff298  mov x0,x21
71019ff29c  bl 0x7103776640
71019ff2a0  ldr x23,[sp, #0x18]
71019ff2a4  fmov s0,0x3f800000
71019ff2a8  adrp x1,0x71042e6000
71019ff2ac  add x1,x1,#0xb68
71019ff2b0  mov x0,x23
71019ff2b4  bl 0x7103778300
71019ff2b8  stp x22,xzr,[sp, #0x10]
71019ff2bc  cbz x23,0x71019ff2d8
71019ff2c0  ldr x0,[x23, #0x18]
71019ff2c4  stp x26,xzr,[x23, #0x10]
71019ff2c8  cbz x0,0x71019ff2d0
71019ff2cc  bl 0x710392eb40
71019ff2d0  mov x0,x23
71019ff2d4  bl 0x710392eb40
71019ff2d8  ldr x8,[x19, #0xf0]
71019ff2dc  ldr x8,[x8, #0x8]
71019ff2e0  cbz x8,0x71019ff304
71019ff2e4  ldr x8,[x8, #0x18]
71019ff2e8  cbz x8,0x71019ff304
71019ff2ec  ldrb w10,[x8, #0x58]
71019ff2f0  ldrb w9,[x19, #0x25f]
71019ff2f4  and w10,w10,#0xfe
71019ff2f8  orr w9,w9,w10
71019ff2fc  eor w9,w9,#0x1
71019ff300  strb w9,[x8, #0x58]
71019ff304  orr w8,wzr,#0xffff
71019ff308  add x1,sp,#0x10
71019ff30c  mov w2,#0x4
71019ff310  mov x0,x19
71019ff314  strh w8,[sp, #0x10]
71019ff318  bl 0x71019fc090
71019ff31c  ldr w8,[x19, #0x1cc]
71019ff320  add w1,w8,#0x1
71019ff324  adrp x0,0x71042b2000
71019ff328  add x0,x0,#0x93a
71019ff32c  sub x8,x29,#0xb0
71019ff330  sub x23,x29,#0xb0
71019ff334  bl 0x71003a4ca0
71019ff338  adrp x1,0x710435a000
71019ff33c  add x1,x1,#0xf52
71019ff340  add x8,sp,#0x10
71019ff344  mov x0,x28
71019ff348  bl 0x7103776910
71019ff34c  add x1,x23,#0x8
71019ff350  add x0,sp,#0x10
71019ff354  bl 0x710377a120
71019ff358  ldr x0,[sp, #0x18]
71019ff35c  stp x26,xzr,[sp, #0x10]
71019ff360  cbz x0,0x71019ff368
71019ff364  bl 0x710392eb40
71019ff368  ldrb w8,[x19, #0x26a]
71019ff36c  ldr x0,[x19, #0x120]
71019ff370  str wzr,[x19, #0x138]
71019ff374  cbz w8,0x71019ff3c4
71019ff378  fmov s0,0x3f800000
71019ff37c  adrp x1,0x71042c5000
71019ff380  add x1,x1,#0x6a7
71019ff384  bl 0x7103778300
71019ff388  adrp x1,0x710439d000
71019ff38c  add x1,x1,#0xc9a
71019ff390  add x8,sp,#0x10
71019ff394  mov x0,x25
71019ff398  bl 0x7103776910
71019ff39c  ldrsw x9,[x19, #0x138]
71019ff3a0  adrp x8,0x71050a8000
71019ff3a4  add x8,x8,#0x890
71019ff3a8  ldr x1,[x8, x9, LSL #0x3]
71019ff3ac  add x0,sp,#0x10
71019ff3b0  bl 0x710377a120
71019ff3b4  ldr x0,[sp, #0x18]
71019ff3b8  stp x26,xzr,[sp, #0x10]
71019ff3bc  cbnz x0,0x71019ff414
71019ff3c0  b 0x71019ff418
71019ff3c4  fmov s0,0x3f800000
71019ff3c8  adrp x1,0x710436c000
71019ff3cc  add x1,x1,#0xb6c
71019ff3d0  bl 0x7103778300
71019ff3d4  adrp x1,0x710439d000
71019ff3d8  add x1,x1,#0xc9a
71019ff3dc  add x8,sp,#0x10
71019ff3e0  mov x0,x25
71019ff3e4  bl 0x7103776910
71019ff3e8  ldr x23,[sp, #0x18]
71019ff3ec  ldr x0,[x23, #0x10]
71019ff3f0  cbz x0,0x71019ff408
71019ff3f4  sub x1,x29,#0xc0
71019ff3f8  mov w2,wzr
71019ff3fc  mov w3,wzr
71019ff400  stur wzr,[x29, #-0xc0]
71019ff404  bl 0x71037a2270
71019ff408  stp x26,xzr,[sp, #0x10]
71019ff40c  cbz x23,0x71019ff418
71019ff410  mov x0,x23
71019ff414  bl 0x710392eb40
71019ff418  adrp x1,0x71043ae000
71019ff41c  add x1,x1,#0xc3
71019ff420  add x8,sp,#0x10
71019ff424  mov x0,x25
71019ff428  add x24,sp,#0x10
71019ff42c  bl 0x71037780e0
71019ff430  add x23,x19,#0x128
71019ff434  cmp x23,x24
71019ff438  b.eq 0x71019ff454
71019ff43c  ldr x8,[sp, #0x18]
71019ff440  str xzr,[sp, #0x18]
71019ff444  ldr x0,[x19, #0x130]
71019ff448  str x8,[x19, #0x130]
71019ff44c  cbz x0,0x71019ff454
71019ff450  bl 0x710392eb40
71019ff454  ldr x0,[sp, #0x18]
71019ff458  stp x27,xzr,[sp, #0x10]
71019ff45c  cbz x0,0x71019ff464
71019ff460  bl 0x710392eb40
71019ff464  fmov s0,0x3f800000
71019ff468  mov x0,x23
71019ff46c  bl 0x710377aee0
71019ff470  adrp x1,0x71042f8000
71019ff474  add x1,x1,#0xc62
71019ff478  add x8,sp,#0x10
71019ff47c  mov x0,x21
71019ff480  add x23,sp,#0x10
71019ff484  bl 0x7103776640
71019ff488  add x8,x19,#0x140
71019ff48c  cmp x8,x23
71019ff490  b.eq 0x71019ff4c0
71019ff494  ldr x8,[sp, #0x18]
71019ff498  str xzr,[sp, #0x18]
71019ff49c  ldr x23,[x19, #0x148]
71019ff4a0  str x8,[x19, #0x148]
71019ff4a4  cbz x23,0x71019ff4c0
71019ff4a8  ldr x0,[x23, #0x18]
71019ff4ac  stp x26,xzr,[x23, #0x10]
71019ff4b0  cbz x0,0x71019ff4b8
71019ff4b4  bl 0x710392eb40
71019ff4b8  mov x0,x23
71019ff4bc  bl 0x710392eb40
71019ff4c0  ldr x23,[sp, #0x18]
71019ff4c4  stp x22,xzr,[sp, #0x10]
71019ff4c8  cbz x23,0x71019ff4e4
71019ff4cc  ldr x0,[x23, #0x18]
71019ff4d0  stp x26,xzr,[x23, #0x10]
71019ff4d4  cbz x0,0x71019ff4dc
71019ff4d8  bl 0x710392eb40
71019ff4dc  mov x0,x23
71019ff4e0  bl 0x710392eb40
71019ff4e4  fmov s8,0x3f800000
71019ff4e8  ldr x0,[x19, #0x148]
71019ff4ec  adrp x1,0x710436c000
71019ff4f0  add x1,x1,#0xb6c
71019ff4f4  mov v0.16B,v8.16B
71019ff4f8  bl 0x7103778300
71019ff4fc  ldr x0,[x19, #0x148]
71019ff500  mov v0.16B,v8.16B
71019ff504  adrp x1,0x71042d5000
71019ff508  add x1,x1,#0xcab
71019ff50c  bl 0x7103778300
71019ff510  adrp x1,0x71042f8000
71019ff514  add x1,x1,#0xc62
71019ff518  add x8,sp,#0x10
71019ff51c  mov x0,x28
71019ff520  add x23,sp,#0x10
71019ff524  bl 0x7103776640
71019ff528  add x8,x19,#0x150
71019ff52c  cmp x8,x23
71019ff530  b.eq 0x71019ff560
71019ff534  ldr x8,[sp, #0x18]
71019ff538  str xzr,[sp, #0x18]
71019ff53c  ldr x22,[x19, #0x158]
71019ff540  str x8,[x19, #0x158]
71019ff544  cbz x22,0x71019ff560
71019ff548  ldr x0,[x22, #0x18]
71019ff54c  stp x26,xzr,[x22, #0x10]
71019ff550  cbz x0,0x71019ff558
71019ff554  bl 0x710392eb40
71019ff558  mov x0,x22
71019ff55c  bl 0x710392eb40
71019ff560  ldr x22,[sp, #0x18]
71019ff564  adrp x8,0x710523d000
71019ff568  add x8,x8,#0x988
71019ff56c  stp x8,xzr,[sp, #0x10]
71019ff570  cbz x22,0x71019ff58c
71019ff574  ldr x0,[x22, #0x18]
71019ff578  stp x26,xzr,[x22, #0x10]
71019ff57c  cbz x0,0x71019ff584
71019ff580  bl 0x710392eb40
71019ff584  mov x0,x22
71019ff588  bl 0x710392eb40
71019ff58c  fmov s8,0x3f800000
71019ff590  ldr x0,[x19, #0x158]
71019ff594  adrp x1,0x710436c000
71019ff598  add x1,x1,#0xb6c
71019ff59c  mov v0.16B,v8.16B
71019ff5a0  bl 0x7103778300
71019ff5a4  ldr x0,[x19, #0x158]
71019ff5a8  mov v0.16B,v8.16B
71019ff5ac  adrp x1,0x71042d5000
71019ff5b0  add x1,x1,#0xcab
71019ff5b4  bl 0x7103778300
71019ff5b8  adrp x1,0x710426f000
71019ff5bc  add x1,x1,#0x9c9
71019ff5c0  sub x8,x29,#0xc0
71019ff5c4  mov x0,x21
71019ff5c8  bl 0x7103776910
71019ff5cc  ldur x8,[x29, #-0xb8]
71019ff5d0  ldr x0,[x8, #0x10]
71019ff5d4  cbz x0,0x71019ff5ec
71019ff5d8  add x1,sp,#0x10
71019ff5dc  mov w2,wzr
71019ff5e0  mov w3,wzr
71019ff5e4  str wzr,[sp, #0x10]
71019ff5e8  bl 0x71037a2270
71019ff5ec  ldrb w8,[x20, #0x15]
71019ff5f0  adrp x22,0x710523d000
71019ff5f4  add x22,x22,#0x988
71019ff5f8  cbz w8,0x71019ff69c
71019ff5fc  adrp x1,0x710434a000
71019ff600  add x1,x1,#0x50a
71019ff604  add x8,sp,#0x10
71019ff608  mov x0,x21
71019ff60c  add x20,sp,#0x10
71019ff610  bl 0x7103776640
71019ff614  add x8,x19,#0x160
71019ff618  cmp x8,x20
71019ff61c  b.eq 0x71019ff64c
71019ff620  ldr x8,[sp, #0x18]
71019ff624  str xzr,[sp, #0x18]
71019ff628  ldr x20,[x19, #0x168]
71019ff62c  str x8,[x19, #0x168]
71019ff630  cbz x20,0x71019ff64c
71019ff634  ldr x0,[x20, #0x18]
71019ff638  stp x26,xzr,[x20, #0x10]
71019ff63c  cbz x0,0x71019ff644
71019ff640  bl 0x710392eb40
71019ff644  mov x0,x20
71019ff648  bl 0x710392eb40
71019ff64c  ldr x20,[sp, #0x18]
71019ff650  stp x22,xzr,[sp, #0x10]
71019ff654  cbz x20,0x71019ff670
71019ff658  ldr x0,[x20, #0x18]
71019ff65c  stp x26,xzr,[x20, #0x10]
71019ff660  cbz x0,0x71019ff668
71019ff664  bl 0x710392eb40
71019ff668  mov x0,x20
71019ff66c  bl 0x710392eb40
71019ff670  fmov s8,0x3f800000
71019ff674  ldr x0,[x19, #0x168]
71019ff678  adrp x1,0x7104411000
71019ff67c  add x1,x1,#0x39d
71019ff680  mov v0.16B,v8.16B
71019ff684  bl 0x7103778300
71019ff688  ldr x0,[x19, #0x168]
71019ff68c  mov v0.16B,v8.16B
71019ff690  adrp x1,0x71043cd000
71019ff694  add x1,x1,#0x335
71019ff698  bl 0x7103778300
71019ff69c  adrp x1,0x710435a000
71019ff6a0  add x1,x1,#0xf65
71019ff6a4  sub x8,x29,#0xd0
71019ff6a8  mov x0,x21
71019ff6ac  bl 0x7103776640
71019ff6b0  ldur x0,[x29, #-0xc8]
71019ff6b4  fmov s0,0x3f800000
71019ff6b8  adrp x1,0x7104400000
71019ff6bc  add x1,x1,#0xde2
71019ff6c0  bl 0x7103778300
71019ff6c4  adrp x1,0x71042d5000
71019ff6c8  add x1,x1,#0xc04
71019ff6cc  add x8,sp,#0x10
71019ff6d0  sub x0,x29,#0xd0
71019ff6d4  add x20,sp,#0x10
71019ff6d8  bl 0x71037780e0
71019ff6dc  add x8,x19,#0x190
71019ff6e0  cmp x8,x20
71019ff6e4  b.eq 0x71019ff700
71019ff6e8  ldr x8,[sp, #0x18]
71019ff6ec  str xzr,[sp, #0x18]
71019ff6f0  ldr x0,[x19, #0x198]
71019ff6f4  str x8,[x19, #0x198]
71019ff6f8  cbz x0,0x71019ff700
71019ff6fc  bl 0x710392eb40
71019ff700  ldr x0,[sp, #0x18]
71019ff704  stp x27,xzr,[sp, #0x10]
71019ff708  cbz x0,0x71019ff710
71019ff70c  bl 0x710392eb40
71019ff710  ldr x8,[x19, #0x198]
71019ff714  ldr x0,[x8, #0x8]
71019ff718  cbz x0,0x71019ff72c
71019ff71c  ldr x8,[x0]
71019ff720  ldr x8,[x8, #0x140]
71019ff724  mov w1,wzr
71019ff728  blr x8
71019ff72c  mov w0,#0x10
71019ff730  orr w1,wzr,#0x18
71019ff734  bl 0x710392e290
71019ff738  cbnz x0,0x71019ff780
71019ff73c  adrp x8,0x7105332000
71019ff740  ldr x0,[x8, #0xf00]
71019ff744  cbz x0,0x71019ff77c
71019ff748  orr w8,wzr,#0x18
71019ff74c  str wzr,[sp]
71019ff750  mov x1,sp
71019ff754  str x8,[sp, #0x10]
71019ff758  ldr x8,[x0]
71019ff75c  ldr x8,[x8, #0x30]
71019ff760  add x2,sp,#0x10
71019ff764  blr x8
71019ff768  tbz w0,#0x0,0x71019ff77c
71019ff76c  mov w0,#0x10
71019ff770  orr w1,wzr,#0x18
71019ff774  bl 0x710392e290
71019ff778  cbnz x0,0x71019ff780
71019ff77c  mov x0,xzr
71019ff780  mov w8,#0x1
71019ff784  stp xzr,xzr,[x0]
71019ff788  strb w8,[x0, #0x10]
71019ff78c  ldr x8,[x19, #0x1a8]
71019ff790  str x0,[x19, #0x1a8]
71019ff794  cbz x8,0x71019ff7a0
71019ff798  mov x0,x8
71019ff79c  bl 0x710392eb40
71019ff7a0  mov w0,#0x10
71019ff7a4  orr w1,wzr,#0x18
71019ff7a8  bl 0x710392e290
71019ff7ac  cbnz x0,0x71019ff7f4
71019ff7b0  adrp x8,0x7105332000
71019ff7b4  ldr x0,[x8, #0xf00]
71019ff7b8  cbz x0,0x71019ff7f0
71019ff7bc  orr w8,wzr,#0x18
71019ff7c0  str wzr,[sp]
71019ff7c4  mov x1,sp
71019ff7c8  str x8,[sp, #0x10]
71019ff7cc  ldr x8,[x0]
71019ff7d0  ldr x8,[x8, #0x30]
71019ff7d4  add x2,sp,#0x10
71019ff7d8  blr x8
71019ff7dc  tbz w0,#0x0,0x71019ff7f0
71019ff7e0  mov w0,#0x10
71019ff7e4  orr w1,wzr,#0x18
71019ff7e8  bl 0x710392e290
71019ff7ec  cbnz x0,0x71019ff7f4
71019ff7f0  mov x0,xzr
71019ff7f4  mov w22,#0x1
71019ff7f8  stp xzr,xzr,[x0]
71019ff7fc  strb w22,[x0, #0x10]
71019ff800  ldr x8,[x19, #0x1b8]
71019ff804  str x0,[x19, #0x1b8]
71019ff808  cbz x8,0x71019ff814
71019ff80c  mov x0,x8
71019ff810  bl 0x710392eb40
71019ff814  fmov s8,0x3f800000
71019ff818  ldr x0,[x19, #0x10]
71019ff81c  adrp x1,0x7104349000
71019ff820  add x1,x1,#0xd1e
71019ff824  mov v0.16B,v8.16B
71019ff828  bl 0x7103778300
71019ff82c  ldr x0,[x19, #0x10]
71019ff830  mov v0.16B,v8.16B
71019ff834  adrp x1,0x71042d5000
71019ff838  add x1,x1,#0xc0d
71019ff83c  bl 0x7103778300
71019ff840  mov w8,#0x101
71019ff844  strh w8,[sp, #0x18]
71019ff848  mov x8,#0x41f0000000000000
71019ff84c  add x0,sp,#0x10
71019ff850  str xzr,[sp, #0x10]
71019ff854  strh wzr,[sp, #0x1e]
71019ff858  stur wzr,[sp, #0x1a]
71019ff85c  str w22,[sp, #0x20]
71019ff860  strh w22,[sp, #0x24]
71019ff864  strb w22,[sp, #0x26]
71019ff868  str x8,[sp, #0x28]
71019ff86c  str wzr,[sp, #0x30]
71019ff870  str xzr,[sp, #0x60]
71019ff874  str xzr,[sp, #0x90]
71019ff878  str xzr,[sp, #0xc0]
71019ff87c  str xzr,[sp, #0xf0]
71019ff880  str xzr,[sp, #0x120]
71019ff884  str wzr,[sp, #0x130]
71019ff888  bl 0x710337df20
71019ff88c  add x20,x19,#0x1c0
71019ff890  orr w8,wzr,#0x3
71019ff894  adrp x2,0x7104307000
71019ff898  add x2,x2,#0x72
71019ff89c  add x3,sp,#0x10
71019ff8a0  str w8,[sp, #0x14]
71019ff8a4  mov x0,x20
71019ff8a8  mov x1,x21
71019ff8ac  strb wzr,[sp, #0x19]
71019ff8b0  strb w22,[sp, #0x1c]
71019ff8b4  bl 0x7103770b30
71019ff8b8  adrp x2,0x710437c000
71019ff8bc  add x2,x2,#0xcf7
71019ff8c0  mov x0,x20
71019ff8c4  mov w1,wzr
71019ff8c8  bl 0x71037717d0
71019ff8cc  adrp x2,0x710437c000
71019ff8d0  add x2,x2,#0x57d
71019ff8d4  mov w1,#0x1
71019ff8d8  mov x0,x20
71019ff8dc  bl 0x71037717d0
71019ff8e0  adrp x2,0x7104291000
71019ff8e4  add x2,x2,#0x5f3
71019ff8e8  mov w1,#0x2
71019ff8ec  mov x0,x20
71019ff8f0  bl 0x71037717d0
71019ff8f4  adrp x2,0x710435b000
71019ff8f8  add x2,x2,#0xfb0
71019ff8fc  orr w1,wzr,#0x3
71019ff900  mov x0,x20
71019ff904  bl 0x71037717d0
71019ff908  adrp x2,0x71043cf000
71019ff90c  add x2,x2,#0x4e9
71019ff910  mov w1,#0x4
71019ff914  mov x0,x20
71019ff918  bl 0x71037717d0
71019ff91c  adrp x2,0x71042e7000
71019ff920  add x2,x2,#0x1bb
71019ff924  mov w1,#0x5
71019ff928  mov x0,x20
71019ff92c  bl 0x71037717d0
71019ff930  adrp x2,0x710424e000
71019ff934  add x2,x2,#0xea8
71019ff938  orr w1,wzr,#0x6
71019ff93c  mov x0,x20
71019ff940  bl 0x71037717d0
71019ff944  adrp x2,0x710425f000
71019ff948  add x2,x2,#0x3d0
71019ff94c  orr w1,wzr,#0x7
71019ff950  mov x0,x20
71019ff954  bl 0x71037717d0
71019ff958  adrp x2,0x71042c4000
71019ff95c  add x2,x2,#0x80a
71019ff960  mov w1,#0x8
71019ff964  mov x0,x20
71019ff968  bl 0x71037717d0
71019ff96c  adrp x2,0x71042e7000
71019ff970  add x2,x2,#0xa6c
71019ff974  mov w1,#0x9
71019ff978  mov x0,x20
71019ff97c  bl 0x71037717d0
71019ff980  ldr x1,[x19, #0x1c0]
71019ff984  mov x0,sp
71019ff988  mov w2,wzr
71019ff98c  bl 0x7103771d60
71019ff990  ldr x21,[sp, #0x8]
71019ff994  ldr x0,[x21]
71019ff998  cbz x0,0x71019ff9b0
71019ff99c  ldr x8,[x0]
71019ff9a0  ldr x8,[x8, #0x268]
71019ff9a4  mov w1,#0x1
71019ff9a8  mov w2,wzr
71019ff9ac  blr x8
71019ff9b0  adrp x22,0x710523d000
71019ff9b4  add x22,x22,#0x9c8
71019ff9b8  stp x22,xzr,[sp]
71019ff9bc  cbz x21,0x71019ff9c8
71019ff9c0  mov x0,x21
71019ff9c4  bl 0x710392eb40
71019ff9c8  ldr x1,[x20]
71019ff9cc  mov x0,sp
71019ff9d0  mov w2,#0x1
71019ff9d4  bl 0x7103771d60
71019ff9d8  ldr x21,[sp, #0x8]
71019ff9dc  ldr x0,[x21]
71019ff9e0  cbz x0,0x71019ff9f8
71019ff9e4  ldr x8,[x0]
71019ff9e8  ldr x8,[x8, #0x268]
71019ff9ec  mov w1,#0x1
71019ff9f0  mov w2,wzr
71019ff9f4  blr x8
71019ff9f8  stp x22,xzr,[sp]
71019ff9fc  cbz x21,0x71019ffa08
71019ffa00  mov x0,x21
71019ffa04  bl 0x710392eb40
71019ffa08  ldr x0,[x20]
71019ffa0c  ldr x9,[x0, #0x1b8]
71019ffa10  adrp x22,0x710523d000
71019ffa14  add x22,x22,#0x988
71019ffa18  cbz x9,0x71019ffbd8
71019ffa1c  add x8,x0,#0x1b8
71019ffa20  mov x10,x8
71019ffa24  mov x11,x9
71019ffa28  ldr w12,[x11, #0x20]
71019ffa2c  cmp w12,#0x6
71019ffa30  cset w12,lt
71019ffa34  csel x10,x10,x11,lt
71019ffa38  ldr x11,[x11, w12, UXTW #0x3]
71019ffa3c  cbnz x11,0x71019ffa28
71019ffa40  cmp x10,x8
71019ffa44  b.eq 0x71019ffa94
71019ffa48  ldr w11,[x10, #0x20]
71019ffa4c  cmp w11,#0x6
71019ffa50  b.gt 0x71019ffa94
71019ffa54  ldr x21,[x10, #0x28]
71019ffa58  cbz x21,0x71019ffa94
71019ffa5c  ldr x8,[x21]
71019ffa60  ldr x8,[x8, #0x1f8]
71019ffa64  mov x0,x21
71019ffa68  mov w1,wzr
71019ffa6c  blr x8
71019ffa70  ldr x8,[x21]
71019ffa74  ldr x8,[x8, #0x388]
71019ffa78  mov w1,#0x1
71019ffa7c  mov x0,x21
71019ffa80  mov w2,wzr
71019ffa84  blr x8
71019ffa88  ldr x0,[x20]
71019ffa8c  ldr x9,[x0, #0x1b8]
71019ffa90  add x8,x0,#0x1b8
71019ffa94  cbz x9,0x71019ffbd8
71019ffa98  mov x10,x8
71019ffa9c  mov x11,x9
71019ffaa0  ldr w12,[x11, #0x20]
71019ffaa4  cmp w12,#0x7
71019ffaa8  cset w12,lt
71019ffaac  csel x10,x10,x11,lt
71019ffab0  ldr x11,[x11, w12, UXTW #0x3]
71019ffab4  cbnz x11,0x71019ffaa0
71019ffab8  cmp x10,x8
71019ffabc  b.eq 0x71019ffb0c
71019ffac0  ldr w11,[x10, #0x20]
71019ffac4  cmp w11,#0x7
71019ffac8  b.gt 0x71019ffb0c
71019ffacc  ldr x21,[x10, #0x28]
71019ffad0  cbz x21,0x71019ffb0c
71019ffad4  ldr x8,[x21]
71019ffad8  ldr x8,[x8, #0x1f8]
71019ffadc  mov x0,x21
71019ffae0  mov w1,wzr
71019ffae4  blr x8
71019ffae8  ldr x8,[x21]
71019ffaec  ldr x8,[x8, #0x388]
71019ffaf0  mov w1,#0x1
71019ffaf4  mov x0,x21
71019ffaf8  mov w2,wzr
71019ffafc  blr x8
71019ffb00  ldr x0,[x20]
71019ffb04  ldr x9,[x0, #0x1b8]
71019ffb08  add x8,x0,#0x1b8
71019ffb0c  cbz x9,0x71019ffbd8
71019ffb10  mov x10,x8
71019ffb14  mov x11,x9
71019ffb18  ldr w12,[x11, #0x20]
71019ffb1c  cmp w12,#0x8
71019ffb20  cset w12,lt
71019ffb24  csel x10,x10,x11,lt
71019ffb28  ldr x11,[x11, w12, UXTW #0x3]
71019ffb2c  cbnz x11,0x71019ffb18
71019ffb30  cmp x10,x8
71019ffb34  b.eq 0x71019ffb84
71019ffb38  ldr w11,[x10, #0x20]
71019ffb3c  cmp w11,#0x8
71019ffb40  b.gt 0x71019ffb84
71019ffb44  ldr x21,[x10, #0x28]
71019ffb48  cbz x21,0x71019ffb84
71019ffb4c  ldr x8,[x21]
71019ffb50  ldr x8,[x8, #0x1f8]
71019ffb54  mov x0,x21
71019ffb58  mov w1,wzr
71019ffb5c  blr x8
71019ffb60  ldr x8,[x21]
71019ffb64  ldr x8,[x8, #0x388]
71019ffb68  mov w1,#0x1
71019ffb6c  mov x0,x21
71019ffb70  mov w2,wzr
71019ffb74  blr x8
71019ffb78  ldr x0,[x20]
71019ffb7c  ldr x9,[x0, #0x1b8]
71019ffb80  add x8,x0,#0x1b8
71019ffb84  cbz x9,0x71019ffbd8
71019ffb88  mov x10,x8
71019ffb8c  ldr w11,[x9, #0x20]
71019ffb90  cmp w11,#0x1
71019ffb94  cset w11,lt
71019ffb98  csel x10,x10,x9,lt
71019ffb9c  ldr x9,[x9, w11, UXTW #0x3]
71019ffba0  cbnz x9,0x71019ffb8c
71019ffba4  cmp x10,x8
71019ffba8  b.eq 0x71019ffbd8
71019ffbac  ldr w8,[x10, #0x20]
71019ffbb0  cmp w8,#0x1
71019ffbb4  b.gt 0x71019ffbd8
71019ffbb8  ldr x8,[x10, #0x28]
71019ffbbc  cbz x8,0x71019ffbd8
71019ffbc0  ldr x9,[x8]
71019ffbc4  ldr x9,[x9, #0x290]
71019ffbc8  mov w1,#0x1
71019ffbcc  mov x0,x8
71019ffbd0  blr x9
71019ffbd4  ldr x0,[x20]
71019ffbd8  mov x21,#0xc028
71019ffbdc  movk x21,#0x1ca6, LSL #16
71019ffbe0  movk x21,#0x15, LSL #32
71019ffbe4  mov x2,sp
71019ffbe8  mov w1,wzr
71019ffbec  str x21,[sp]
71019ffbf0  bl 0x7103772070
71019ffbf4  str x21,[sp]
71019ffbf8  ldr x0,[x20]
71019ffbfc  mov w1,#0x1
71019ffc00  mov x2,sp
71019ffc04  bl 0x7103772070
71019ffc08  mov x8,#0x208
71019ffc0c  movk x8,#0xb483, LSL #16
71019ffc10  movk x8,#0x1b, LSL #32
71019ffc14  str x8,[sp]
71019ffc18  ldr x0,[x20]
71019ffc1c  mov w1,#0x2
71019ffc20  mov x2,sp
71019ffc24  bl 0x7103772070
71019ffc28  adrp x21,0x710532f000
71019ffc2c  ldr x8,[x21, #0x8d0]
71019ffc30  ldr x9,[x8, #0x8]
71019ffc34  ldp x8,x9,[x9, #0x40]
71019ffc38  sub x9,x9,x8
71019ffc3c  asr x9,x9,#0x3
71019ffc40  cmp x9,#0x2
71019ffc44  b.cc 0x71019ffc50
71019ffc48  ldr x8,[x8, #0x8]
71019ffc4c  b 0x71019ffc54
71019ffc50  mov x8,xzr
71019ffc54  str x8,[sp]
71019ffc58  ldr x0,[x20]
71019ffc5c  orr w1,wzr,#0x6
71019ffc60  mov x2,sp
71019ffc64  bl 0x7103772070
71019ffc68  ldr x8,[x21, #0x8d0]
71019ffc6c  ldr x9,[x8, #0x8]
71019ffc70  ldp x8,x9,[x9, #0x40]
71019ffc74  sub x9,x9,x8
71019ffc78  asr x9,x9,#0x3
71019ffc7c  cmp x9,#0x2
71019ffc80  b.cc 0x71019ffc8c
71019ffc84  ldr x8,[x8, #0x8]
71019ffc88  b 0x71019ffc90
71019ffc8c  mov x8,xzr
71019ffc90  str x8,[sp]
71019ffc94  ldr x0,[x20]
71019ffc98  orr w1,wzr,#0x7
71019ffc9c  mov x2,sp
71019ffca0  bl 0x7103772070
71019ffca4  ldr x8,[x21, #0x8d0]
71019ffca8  ldr x9,[x8, #0x8]
71019ffcac  ldp x8,x9,[x9, #0x40]
71019ffcb0  sub x9,x9,x8
71019ffcb4  asr x9,x9,#0x3
71019ffcb8  cmp x9,#0x2
71019ffcbc  b.cc 0x71019ffcc8
71019ffcc0  ldr x8,[x8, #0x8]
71019ffcc4  b 0x71019ffccc
71019ffcc8  mov x8,xzr
71019ffccc  str x8,[sp]
71019ffcd0  ldr x0,[x20]
71019ffcd4  mov w1,#0x9
71019ffcd8  mov x2,sp
71019ffcdc  bl 0x7103772070
71019ffce0  ldr x8,[x21, #0x8d0]
71019ffce4  ldr x9,[x8, #0x8]
71019ffce8  ldp x8,x9,[x9, #0x40]
71019ffcec  sub x9,x9,x8
71019ffcf0  asr x9,x9,#0x3
71019ffcf4  cmp x9,#0x2
71019ffcf8  b.cc 0x71019ffd04
71019ffcfc  ldr x8,[x8, #0x8]
71019ffd00  b 0x71019ffd08
71019ffd04  mov x8,xzr
71019ffd08  str x8,[sp]
71019ffd0c  ldr x0,[x19, #0x1c0]
71019ffd10  mov w1,#0x8
71019ffd14  mov x2,sp
71019ffd18  bl 0x7103772070
71019ffd1c  fmov s8,wzr
71019ffd20  ldr x0,[x19, #0x10]
71019ffd24  adrp x1,0x710425e000
71019ffd28  add x1,x1,#0xd91
71019ffd2c  mov v0.16B,v8.16B
71019ffd30  bl 0x7103778630
71019ffd34  ldr x0,[x19, #0x10]
71019ffd38  mov v0.16B,v8.16B
71019ffd3c  adrp x20,0x710433a000
71019ffd40  add x20,x20,#0x9c5
71019ffd44  mov x1,x20
71019ffd48  bl 0x7103778630
71019ffd4c  ldr x0,[x19, #0xf0]
71019ffd50  mov v0.16B,v8.16B
71019ffd54  mov x1,x20
71019ffd58  bl 0x7103778630
71019ffd5c  ldr x0,[x19, #0x100]
71019ffd60  mov v0.16B,v8.16B
71019ffd64  mov x1,x20
71019ffd68  bl 0x7103778630
71019ffd6c  ldr x0,[x19, #0x10]
71019ffd70  mov v0.16B,v8.16B
71019ffd74  adrp x20,0x710433a000
71019ffd78  add x20,x20,#0xfe
71019ffd7c  mov x1,x20
71019ffd80  bl 0x7103778630
71019ffd84  ldr x0,[x19, #0xf0]
71019ffd88  mov v0.16B,v8.16B
71019ffd8c  mov x1,x20
71019ffd90  bl 0x7103778630
71019ffd94  ldr x0,[x19, #0x100]
71019ffd98  mov v0.16B,v8.16B
71019ffd9c  mov x1,x20
71019ffda0  bl 0x7103778630
71019ffda4  mov x0,x19
71019ffda8  bl 0x71019fc7a0
71019ffdac  ldr x0,[sp, #0x120]
71019ffdb0  add x8,sp,#0x10
71019ffdb4  add x8,x8,#0xf0
71019ffdb8  cmp x8,x0
71019ffdbc  b.eq 0x71019ffdd0
71019ffdc0  cbz x0,0x71019ffddc
71019ffdc4  ldr x8,[x0]
71019ffdc8  ldr x8,[x8, #0x28]
71019ffdcc  b 0x71019ffdd8
71019ffdd0  ldr x8,[x0]
71019ffdd4  ldr x8,[x8, #0x20]
71019ffdd8  blr x8
71019ffddc  ldr x0,[sp, #0xf0]
71019ffde0  add x8,sp,#0x10
71019ffde4  add x8,x8,#0xc0
71019ffde8  cmp x8,x0
71019ffdec  b.eq 0x71019ffe00
71019ffdf0  cbz x0,0x71019ffe0c
71019ffdf4  ldr x8,[x0]
71019ffdf8  ldr x8,[x8, #0x28]
71019ffdfc  b 0x71019ffe08
71019ffe00  ldr x8,[x0]
71019ffe04  ldr x8,[x8, #0x20]
71019ffe08  blr x8
71019ffe0c  ldr x0,[sp, #0xc0]
71019ffe10  add x8,sp,#0x10
71019ffe14  add x8,x8,#0x90
71019ffe18  cmp x8,x0
71019ffe1c  b.eq 0x71019ffe30
71019ffe20  cbz x0,0x71019ffe3c
71019ffe24  ldr x8,[x0]
71019ffe28  ldr x8,[x8, #0x28]
71019ffe2c  b 0x71019ffe38
71019ffe30  ldr x8,[x0]
71019ffe34  ldr x8,[x8, #0x20]
71019ffe38  blr x8
71019ffe3c  ldr x0,[sp, #0x90]
71019ffe40  add x8,sp,#0x10
71019ffe44  add x8,x8,#0x60
71019ffe48  cmp x8,x0
71019ffe4c  b.eq 0x71019ffe60
71019ffe50  cbz x0,0x71019ffe6c
71019ffe54  ldr x8,[x0]
71019ffe58  ldr x8,[x8, #0x28]
71019ffe5c  b 0x71019ffe68
71019ffe60  ldr x8,[x0]
71019ffe64  ldr x8,[x8, #0x20]
71019ffe68  blr x8
71019ffe6c  ldr x0,[sp, #0x60]
71019ffe70  add x8,sp,#0x10
71019ffe74  add x8,x8,#0x30
71019ffe78  cmp x8,x0
71019ffe7c  b.eq 0x71019ffe90
71019ffe80  cbz x0,0x71019ffe9c
71019ffe84  ldr x8,[x0]
71019ffe88  ldr x8,[x8, #0x28]
71019ffe8c  b 0x71019ffe98
71019ffe90  ldr x8,[x0]
71019ffe94  ldr x8,[x8, #0x20]
71019ffe98  blr x8
71019ffe9c  ldur x19,[x29, #-0xc8]
71019ffea0  stp x22,xzr,[x29, #-0xd0]
71019ffea4  cbz x19,0x71019ffec0
71019ffea8  ldr x0,[x19, #0x18]
71019ffeac  stp x26,xzr,[x19, #0x10]
71019ffeb0  cbz x0,0x71019ffeb8
71019ffeb4  bl 0x710392eb40
71019ffeb8  mov x0,x19
71019ffebc  bl 0x710392eb40
71019ffec0  ldur x0,[x29, #-0xb8]
71019ffec4  stp x26,xzr,[x29, #-0xc0]
71019ffec8  cbz x0,0x71019ffed0
71019ffecc  bl 0x710392eb40
71019ffed0  add sp,sp,#0x1b0
71019ffed4  ldp x29,x30,[sp, #0x60]
71019ffed8  ldp x20,x19,[sp, #0x50]
71019ffedc  ldp x22,x21,[sp, #0x40]
71019ffee0  ldp x24,x23,[sp, #0x30]
71019ffee4  ldp x26,x25,[sp, #0x20]
71019ffee8  ldp x28,x27,[sp, #0x10]
71019ffeec  ldr d8,[sp], #0x70
71019ffef0  ret
