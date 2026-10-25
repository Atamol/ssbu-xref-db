// addr:      7101cbefe0
// offset:    0x1cbefe0
// name:      FUN_7101cbefe0
// mangled:   
// size:      3020

7101cbefe0  stp x28,x27,[sp, #-0x60]!
7101cbefe4  stp x26,x25,[sp, #0x10]
7101cbefe8  stp x24,x23,[sp, #0x20]
7101cbefec  stp x22,x21,[sp, #0x30]
7101cbeff0  stp x20,x19,[sp, #0x40]
7101cbeff4  stp x29,x30,[sp, #0x50]
7101cbeff8  add x29,sp,#0x50
7101cbeffc  sub sp,sp,#0xce0
7101cbf000  cmp w1,#0x63
7101cbf004  b.hi 0x7101cbfb7c
7101cbf008  orr w8,wzr,#0x18
7101cbf00c  smaddl x8,w1,w8,x0
7101cbf010  adrp x25,0x710532f000
7101cbf014  ldr x22,[x25, #0x8f8]
7101cbf018  ldr w9,[x8, #0x1b0]
7101cbf01c  mov x19,x2
7101cbf020  mov x20,x0
7101cbf024  sxtw x24,w1
7101cbf028  cmp w9,#0x3
7101cbf02c  b.ne 0x7101cbf050
7101cbf030  orr w8,wzr,#0x18
7101cbf034  madd x28,x24,x8,x20
7101cbf038  ldr x23,[x28, #0x1a8]
7101cbf03c  add x26,x28,#0x1a8
7101cbf040  cbz x23,0x7101cbf0cc
7101cbf044  cmp x23,#0x0
7101cbf048  cset w27,eq
7101cbf04c  b 0x7101cbf150
7101cbf050  ldr x11,[x22, #0x8]
7101cbf054  ldr x9,[x11, #0x108]
7101cbf058  add x8,x8,#0x1b0
7101cbf05c  cbz x9,0x7101cbf0a8
7101cbf060  ldr x10,[x11, #0x100]
7101cbf064  cbz x10,0x7101cbf0a4
7101cbf068  ldr w9,[x20, #0x178]
7101cbf06c  add x12,x11,#0x100
7101cbf070  mov x13,x12
7101cbf074  mov x14,x10
7101cbf078  ldr w15,[x14, #0x20]
7101cbf07c  cmp w15,w9
7101cbf080  cset w15,lt
7101cbf084  csel x13,x13,x14,lt
7101cbf088  ldr x14,[x14, w15, UXTW #0x3]
7101cbf08c  cbnz x14,0x7101cbf078
7101cbf090  cmp x13,x12
7101cbf094  b.eq 0x7101cbf0a4
7101cbf098  ldr w12,[x13, #0x20]
7101cbf09c  cmp w12,w9
7101cbf0a0  b.le 0x7101cbf4f0
7101cbf0a4  mov w9,wzr
7101cbf0a8  str w9,[x8]
7101cbf0ac  orr w8,wzr,#0x18
7101cbf0b0  madd x8,x24,x8,x20
7101cbf0b4  ldr w23,[x8, #0x1b4]
7101cbf0b8  cmp w23,#0x1
7101cbf0bc  b.eq 0x7101cbfa9c
7101cbf0c0  mov x0,x19
7101cbf0c4  bl 0x7101cf2220
7101cbf0c8  b 0x7101cbfb18
7101cbf0cc  ldr x21,[x22, #0x8]
7101cbf0d0  ldp x8,x9,[x21, #0x110]
7101cbf0d4  cmp x8,x9
7101cbf0d8  b.ne 0x7101cbf124
7101cbf0dc  ldr w2,[x21, #0xd8]
7101cbf0e0  add x0,sp,#0x8
7101cbf0e4  mov x1,x21
7101cbf0e8  bl 0x710334c400
7101cbf0ec  ldr x0,[x21, #0x110]
7101cbf0f0  cbz x0,0x7101cbf108
7101cbf0f4  add x23,x21,#0x110
7101cbf0f8  str x0,[x21, #0x118]
7101cbf0fc  bl 0x710392eb40
7101cbf100  stp xzr,xzr,[x23, #0x8]
7101cbf104  str xzr,[x23]
7101cbf108  ldr x8,[sp, #0x8]
7101cbf10c  str x8,[x21, #0x110]
7101cbf110  ldr x8,[sp, #0x10]
7101cbf114  str x8,[x21, #0x118]
7101cbf118  ldr x8,[sp, #0x18]
7101cbf11c  str x8,[x21, #0x120]
7101cbf120  ldp x8,x9,[x21, #0x110]
7101cbf124  sub x9,x9,x8
7101cbf128  asr x9,x9,#0x3
7101cbf12c  cmp x9,x24
7101cbf130  b.ls 0x7101cbf140
7101cbf134  ldr x23,[x8, x24, LSL #0x3]
7101cbf138  str x23,[x26]
7101cbf13c  b 0x7101cbf144
7101cbf140  ldr x23,[x26]
7101cbf144  cmp x23,#0x0
7101cbf148  cset w27,eq
7101cbf14c  cbz x23,0x7101cbfa88
7101cbf150  add x21,x28,#0x1a0
7101cbf154  ldr x0,[x22, #0x8]
7101cbf158  ldr w2,[x21]
7101cbf15c  mov x1,x23
7101cbf160  bl 0x710334c7d0
7101cbf164  mov w22,w0
7101cbf168  tbnz w27,#0x0,0x7101cbf290
7101cbf16c  ldr x28,[x25, #0x8f8]
7101cbf170  ldr x0,[x28, #0x8]
7101cbf174  ldr w2,[x21]
7101cbf178  mov x1,x23
7101cbf17c  bl 0x710334c7d0
7101cbf180  and w8,w0,#0xffff
7101cbf184  cmp w8,#0x4
7101cbf188  b.ne 0x7101cbf290
7101cbf18c  add x23,sp,#0x8
7101cbf190  add x0,x23,#0xe8
7101cbf194  add x8,sp,#0x8
7101cbf198  str wzr,[sp, #0x1c]
7101cbf19c  strh wzr,[sp, #0x20]
7101cbf1a0  strh wzr,[sp, #0x18]
7101cbf1a4  stp xzr,xzr,[sp, #0x8]
7101cbf1a8  stur xzr,[sp, #0x75]
7101cbf1ac  str xzr,[sp, #0x60]
7101cbf1b0  str xzr,[sp, #0x88]
7101cbf1b4  stp xzr,xzr,[sp, #0x68]
7101cbf1b8  stur xzr,[x8, #0xd6]
7101cbf1bc  str xzr,[sp, #0xe8]
7101cbf1c0  stp xzr,xzr,[sp, #0xd0]
7101cbf1c4  stp xzr,xzr,[sp, #0xc0]
7101cbf1c8  stp xzr,xzr,[sp, #0xb0]
7101cbf1cc  stp xzr,xzr,[sp, #0xa0]
7101cbf1d0  stp xzr,xzr,[sp, #0x90]
7101cbf1d4  stp xzr,xzr,[sp, #0x1a0]
7101cbf1d8  stp xzr,xzr,[sp, #0x190]
7101cbf1dc  stp xzr,xzr,[sp, #0x180]
7101cbf1e0  stp xzr,xzr,[sp, #0x170]
7101cbf1e4  stp xzr,xzr,[sp, #0x160]
7101cbf1e8  stp xzr,xzr,[sp, #0x150]
7101cbf1ec  stp xzr,xzr,[sp, #0x140]
7101cbf1f0  stp xzr,xzr,[sp, #0x130]
7101cbf1f4  stp xzr,xzr,[sp, #0x120]
7101cbf1f8  stp xzr,xzr,[sp, #0x110]
7101cbf1fc  stp xzr,xzr,[sp, #0x100]
7101cbf200  stp xzr,xzr,[sp, #0xf0]
7101cbf204  bl 0x71004f5770
7101cbf208  add x8,x23,#0x1ce
7101cbf20c  str wzr,[sp, #0x1e0]
7101cbf210  str xzr,[x8]
7101cbf214  stp xzr,xzr,[sp, #0x1c8]
7101cbf218  add x2,sp,#0x8
7101cbf21c  mov x1,x21
7101cbf220  str xzr,[sp, #0x1b0]
7101cbf224  str xzr,[sp, #0x280]
7101cbf228  str xzr,[sp, #0x278]
7101cbf22c  str xzr,[sp, #0x270]
7101cbf230  str xzr,[sp, #0x268]
7101cbf234  str xzr,[sp, #0x260]
7101cbf238  str xzr,[sp, #0x258]
7101cbf23c  str xzr,[sp, #0x250]
7101cbf240  str xzr,[sp, #0x248]
7101cbf244  str xzr,[sp, #0x240]
7101cbf248  str xzr,[sp, #0x238]
7101cbf24c  str xzr,[sp, #0x230]
7101cbf250  str xzr,[sp, #0x228]
7101cbf254  str xzr,[sp, #0x220]
7101cbf258  str xzr,[sp, #0x218]
7101cbf25c  str xzr,[sp, #0x210]
7101cbf260  str xzr,[sp, #0x208]
7101cbf264  strb wzr,[sp, #0x2b8]
7101cbf268  str xzr,[sp, #0x2b0]
7101cbf26c  stp xzr,xzr,[sp, #0x1b8]
7101cbf270  stp xzr,xzr,[sp, #0x1f8]
7101cbf274  stp xzr,xzr,[sp, #0x1e8]
7101cbf278  ldr x0,[x28, #0x8]
7101cbf27c  bl 0x710334e6a0
7101cbf280  cmp w0,#0x3
7101cbf284  b.ne 0x7101cbf290
7101cbf288  ldr w23,[sp, #0x2a8]
7101cbf28c  b 0x7101cbf294
7101cbf290  mov w23,#0x2
7101cbf294  mvn w8,w22
7101cbf298  tst w8,#0xffff
7101cbf29c  b.eq 0x7101cbf4e8
7101cbf2a0  and w8,w22,#0xffff
7101cbf2a4  mov w2,wzr
7101cbf2a8  strb wzr,[sp, #0x10]
7101cbf2ac  cmp w8,#0x3
7101cbf2b0  str xzr,[sp, #0x8]
7101cbf2b4  b.hi 0x7101cbf2c8
7101cbf2b8  adrp x8,0x710446a000
7101cbf2bc  add x8,x8,#0x5c0
7101cbf2c0  sxth x9,w22
7101cbf2c4  ldr w2,[x8, x9, LSL #0x2]
7101cbf2c8  adrp x1,0x710432a000
7101cbf2cc  add x1,x1,#0x1d6
7101cbf2d0  add x0,sp,#0x8
7101cbf2d4  add x27,sp,#0x8
7101cbf2d8  bl 0x710062dc20
7101cbf2dc  ldr x0,[x19, #0x8]
7101cbf2e0  fmov s0,0x3f800000
7101cbf2e4  add x1,x27,#0x8
7101cbf2e8  bl 0x7103778300
7101cbf2ec  ldr x0,[x19, #0x8]
7101cbf2f0  cmp w23,#0x3
7101cbf2f4  b.ne 0x7101cbf304
7101cbf2f8  adrp x1,0x71042f8000
7101cbf2fc  add x1,x1,#0x478
7101cbf300  b 0x7101cbf30c
7101cbf304  adrp x1,0x71042e7000
7101cbf308  add x1,x1,#0x3f1
7101cbf30c  fmov s0,0x3f800000
7101cbf310  bl 0x7103778300
7101cbf314  and w8,w22,#0xffff
7101cbf318  cmp w8,#0x4
7101cbf31c  b.hi 0x7101cbf4e8
7101cbf320  and x8,x22,#0xffff
7101cbf324  adrp x9,0x71044f9000
7101cbf328  add x9,x9,#0xcac
7101cbf32c  ldrsw x8,[x9, x8, LSL #0x2]
7101cbf330  add x8,x8,x9
7101cbf334  br x8
7101cbf338  mov x8,#0xff0000000000
7101cbf33c  movk x8,#0x13ff, LSL #48
7101cbf340  ldr x22,[x20, #0xf0]
7101cbf344  str wzr,[sp, #0x1c]
7101cbf348  strh wzr,[sp, #0x20]
7101cbf34c  strh wzr,[sp, #0x18]
7101cbf350  str x8,[sp, #0x1b0]
7101cbf354  mov x8,#0xff0000000000
7101cbf358  movk x8,#0x5aff, LSL #48
7101cbf35c  stp xzr,xzr,[sp, #0x8]
7101cbf360  add x2,sp,#0x8
7101cbf364  mov x1,x21
7101cbf368  add x27,sp,#0x8
7101cbf36c  str x8,[sp, #0x1b8]
7101cbf370  mov x8,#0xff0000000000
7101cbf374  movk x8,#0xc1ff, LSL #48
7101cbf378  str x8,[sp, #0x220]
7101cbf37c  ldr x8,[x25, #0x8f8]
7101cbf380  stur xzr,[sp, #0x75]
7101cbf384  str xzr,[sp, #0x60]
7101cbf388  str xzr,[sp, #0x190]
7101cbf38c  strh wzr,[sp, #0x198]
7101cbf390  strh wzr,[sp, #0x1c4]
7101cbf394  str wzr,[sp, #0x1c0]
7101cbf398  stp xzr,xzr,[sp, #0x68]
7101cbf39c  ldr x0,[x8, #0x8]
7101cbf3a0  bl 0x710334f120
7101cbf3a4  mov w23,wzr
7101cbf3a8  cmp w0,#0x3
7101cbf3ac  b.ne 0x7101cbfa88
7101cbf3b0  add x0,sp,#0x8
7101cbf3b4  mov x1,x19
7101cbf3b8  add x21,x27,#0x18
7101cbf3bc  bl 0x7101cf2c70
7101cbf3c0  ldrb w8,[sp, #0x1c0]
7101cbf3c4  cmp w8,#0xb
7101cbf3c8  csel w2,wzr,w8,hi
7101cbf3cc  adrp x1,0x71043f0000
7101cbf3d0  add x1,x1,#0xb8f
7101cbf3d4  mov x0,x19
7101cbf3d8  bl 0x7103778430
7101cbf3dc  ldr x0,[x19, #0x8]
7101cbf3e0  fmov s0,0x3f800000
7101cbf3e4  adrp x1,0x710433a000
7101cbf3e8  add x1,x1,#0x322
7101cbf3ec  bl 0x7103778300
7101cbf3f0  adrp x1,0x71042e7000
7101cbf3f4  add x1,x1,#0x3e2
7101cbf3f8  add x8,sp,#0xab8
7101cbf3fc  mov x0,x19
7101cbf400  add x27,sp,#0xab8
7101cbf404  bl 0x7103776910
7101cbf408  ldr x8,[x25, #0x8f8]
7101cbf40c  ldr x2,[x26]
7101cbf410  add x3,sp,#0xab8
7101cbf414  ldr x0,[x8, #0x8]
7101cbf418  mov x1,x22
7101cbf41c  bl 0x710334fb10
7101cbf420  mov w22,w0
7101cbf424  ldr x0,[sp, #0xac0]
7101cbf428  adrp x8,0x710523d000
7101cbf42c  add x8,x8,#0x9a8
7101cbf430  str x8,[sp, #0xab8]
7101cbf434  str xzr,[sp, #0xac0]
7101cbf438  cbz x0,0x7101cbf440
7101cbf43c  bl 0x710392eb40
7101cbf440  ldrh w8,[sp, #0x18]
7101cbf444  ldr x9,[sp, #0x10]
7101cbf448  add x0,x27,#0x14
7101cbf44c  strh w8,[sp, #0xac8]
7101cbf450  ldr x8,[sp, #0x8]
7101cbf454  cmp w22,#0x3
7101cbf458  mov x1,x21
7101cbf45c  cset w23,eq
7101cbf460  str x9,[sp, #0xac0]
7101cbf464  str x8,[sp, #0xab8]
7101cbf468  bl 0x71016bc6e0
7101cbf46c  ldp x9,x8,[sp, #0x68]
7101cbf470  str x8,[sp, #0xb20]
7101cbf474  ldr x8,[sp, #0x60]
7101cbf478  str x8,[sp, #0xb10]
7101cbf47c  ldrb w8,[sp, #0x7c]
7101cbf480  str x9,[sp, #0xb18]
7101cbf484  cbz w8,0x7101cbf8a8
7101cbf488  strb w8,[sp, #0xb2c]
7101cbf48c  ldrb w8,[sp, #0x7d]
7101cbf490  cbz w8,0x7101cbf874
7101cbf494  strb w8,[sp, #0xb2d]
7101cbf498  ldrb w8,[sp, #0x7e]
7101cbf49c  cbz w8,0x7101cbf87c
7101cbf4a0  strb w8,[sp, #0xb2e]
7101cbf4a4  ldrb w8,[sp, #0x7f]
7101cbf4a8  cbz w8,0x7101cbf884
7101cbf4ac  strb w8,[sp, #0xb2f]
7101cbf4b0  ldrb w8,[sp, #0x80]
7101cbf4b4  cbz w8,0x7101cbf88c
7101cbf4b8  strb w8,[sp, #0xb30]
7101cbf4bc  ldrb w8,[sp, #0x81]
7101cbf4c0  cbz w8,0x7101cbf894
7101cbf4c4  strb w8,[sp, #0xb31]
7101cbf4c8  ldrb w8,[sp, #0x82]
7101cbf4cc  cbz w8,0x7101cbf89c
7101cbf4d0  strb w8,[sp, #0xb32]
7101cbf4d4  ldrb w8,[sp, #0x83]
7101cbf4d8  cbz w8,0x7101cbf8a4
7101cbf4dc  strb w8,[sp, #0xb33]
7101cbf4e0  mov w8,#0x8
7101cbf4e4  b 0x7101cbf8a8
7101cbf4e8  mov w23,wzr
7101cbf4ec  b 0x7101cbfa88
7101cbf4f0  add x11,x11,#0x100
7101cbf4f4  b 0x7101cbf500
7101cbf4f8  mov x11,x10
7101cbf4fc  mov x10,x12
7101cbf500  ldr w12,[x10, #0x20]
7101cbf504  cmp w12,w9
7101cbf508  b.le 0x7101cbf51c
7101cbf50c  ldr x12,[x10]
7101cbf510  mov x11,x10
7101cbf514  cbnz x12,0x7101cbf4f8
7101cbf518  b 0x7101cbf52c
7101cbf51c  b.ge 0x7101cbf52c
7101cbf520  ldr x12,[x10, #0x8]!
7101cbf524  mov x11,x10
7101cbf528  cbnz x12,0x7101cbf4f8
7101cbf52c  ldr x9,[x11]
7101cbf530  ldr w10,[x9, #0x28]
7101cbf534  cmp w10,#0x1
7101cbf538  cset w9,eq
7101cbf53c  cmp w10,#0x2
7101cbf540  b.ne 0x7101cbf86c
7101cbf544  orr w9,wzr,#0x3
7101cbf548  str w9,[x8]
7101cbf54c  b 0x7101cbf030
7101cbf550  ldr x8,[x25, #0x8f8]
7101cbf554  ldr x22,[x20, #0xf0]
7101cbf558  str wzr,[sp, #0x1c]
7101cbf55c  strh wzr,[sp, #0x20]
7101cbf560  strh wzr,[sp, #0x18]
7101cbf564  add x2,sp,#0x8
7101cbf568  stp xzr,xzr,[sp, #0x8]
7101cbf56c  mov x1,x21
7101cbf570  stur xzr,[sp, #0x75]
7101cbf574  str xzr,[sp, #0x60]
7101cbf578  stp xzr,xzr,[sp, #0x68]
7101cbf57c  ldr x0,[x8, #0x8]
7101cbf580  bl 0x710334e560
7101cbf584  mov w23,wzr
7101cbf588  cmp w0,#0x3
7101cbf58c  b.ne 0x7101cbfa88
7101cbf590  add x0,sp,#0x8
7101cbf594  mov x1,x19
7101cbf598  bl 0x7101cf2c70
7101cbf59c  mov x0,x22
7101cbf5a0  mov x1,x21
7101cbf5a4  mov x2,x19
7101cbf5a8  mov w3,wzr
7101cbf5ac  bl 0x7101cf23e0
7101cbf5b0  b 0x7101cbf864
7101cbf5b4  ldr x22,[x20, #0xf0]
7101cbf5b8  add x26,sp,#0x8
7101cbf5bc  strh wzr,[sp, #0x20]
7101cbf5c0  add x0,x26,#0xf8
7101cbf5c4  str wzr,[sp, #0x1c]
7101cbf5c8  strh wzr,[sp, #0x18]
7101cbf5cc  stp xzr,xzr,[sp, #0x8]
7101cbf5d0  stur xzr,[sp, #0x75]
7101cbf5d4  str xzr,[sp, #0x60]
7101cbf5d8  str xzr,[sp, #0x88]
7101cbf5dc  stp xzr,xzr,[sp, #0x68]
7101cbf5e0  bl 0x710143c4d0
7101cbf5e4  ldr x9,[x25, #0x8f8]
7101cbf5e8  mov x8,#0xff0000000000
7101cbf5ec  movk x8,#0xc1ff, LSL #48
7101cbf5f0  str x8,[sp, #0x398]
7101cbf5f4  str x8,[sp, #0x3a8]
7101cbf5f8  str x8,[sp, #0x3b8]
7101cbf5fc  str x8,[sp, #0x3c8]
7101cbf600  add x2,sp,#0x8
7101cbf604  mov x1,x21
7101cbf608  str x8,[sp, #0x3d8]
7101cbf60c  str x8,[sp, #0x3e8]
7101cbf610  str x8,[sp, #0x3f8]
7101cbf614  str x8,[sp, #0x408]
7101cbf618  str x8,[sp, #0x418]
7101cbf61c  str x8,[sp, #0x428]
7101cbf620  ldr x0,[x9, #0x8]
7101cbf624  bl 0x710334e9e0
7101cbf628  mov w23,wzr
7101cbf62c  cmp w0,#0x3
7101cbf630  b.ne 0x7101cbfa88
7101cbf634  add x0,sp,#0x8
7101cbf638  mov x1,x19
7101cbf63c  bl 0x7101cf2c70
7101cbf640  b 0x7101cbf694
7101cbf644  ldr x22,[x20, #0xf0]
7101cbf648  add x26,sp,#0x8
7101cbf64c  strh wzr,[sp, #0x20]
7101cbf650  add x0,x26,#0xf8
7101cbf654  str wzr,[sp, #0x1c]
7101cbf658  strh wzr,[sp, #0x18]
7101cbf65c  stp xzr,xzr,[sp, #0x8]
7101cbf660  stur xzr,[sp, #0x75]
7101cbf664  str xzr,[sp, #0x60]
7101cbf668  str xzr,[sp, #0x88]
7101cbf66c  stp xzr,xzr,[sp, #0x68]
7101cbf670  bl 0x710143c4d0
7101cbf674  ldr x8,[x25, #0x8f8]
7101cbf678  ldr x0,[x8, #0x8]
7101cbf67c  add x2,sp,#0x8
7101cbf680  mov x1,x21
7101cbf684  bl 0x710334ec20
7101cbf688  mov w23,wzr
7101cbf68c  cmp w0,#0x3
7101cbf690  b.ne 0x7101cbfa88
7101cbf694  add x2,x26,#0x80
7101cbf698  mov x0,x22
7101cbf69c  mov x1,x19
7101cbf6a0  bl 0x7101cf2f80
7101cbf6a4  mov x0,x22
7101cbf6a8  mov x1,x21
7101cbf6ac  mov x2,x19
7101cbf6b0  mov w3,wzr
7101cbf6b4  bl 0x7101cf2530
7101cbf6b8  b 0x7101cbf864
7101cbf6bc  ldr x22,[x20, #0xf0]
7101cbf6c0  add x23,sp,#0x8
7101cbf6c4  strh wzr,[sp, #0x20]
7101cbf6c8  add x0,x23,#0xe8
7101cbf6cc  add x8,sp,#0x8
7101cbf6d0  str wzr,[sp, #0x1c]
7101cbf6d4  strh wzr,[sp, #0x18]
7101cbf6d8  stp xzr,xzr,[sp, #0x8]
7101cbf6dc  stur xzr,[sp, #0x75]
7101cbf6e0  str xzr,[sp, #0x60]
7101cbf6e4  str xzr,[sp, #0x88]
7101cbf6e8  stp xzr,xzr,[sp, #0x68]
7101cbf6ec  stur xzr,[x8, #0xd6]
7101cbf6f0  str xzr,[sp, #0xe8]
7101cbf6f4  stp xzr,xzr,[sp, #0xd0]
7101cbf6f8  stp xzr,xzr,[sp, #0xc0]
7101cbf6fc  stp xzr,xzr,[sp, #0xb0]
7101cbf700  stp xzr,xzr,[sp, #0xa0]
7101cbf704  stp xzr,xzr,[sp, #0x90]
7101cbf708  stp xzr,xzr,[sp, #0x1a0]
7101cbf70c  stp xzr,xzr,[sp, #0x190]
7101cbf710  stp xzr,xzr,[sp, #0x180]
7101cbf714  stp xzr,xzr,[sp, #0x170]
7101cbf718  stp xzr,xzr,[sp, #0x160]
7101cbf71c  stp xzr,xzr,[sp, #0x150]
7101cbf720  stp xzr,xzr,[sp, #0x140]
7101cbf724  stp xzr,xzr,[sp, #0x130]
7101cbf728  stp xzr,xzr,[sp, #0x120]
7101cbf72c  stp xzr,xzr,[sp, #0x110]
7101cbf730  stp xzr,xzr,[sp, #0x100]
7101cbf734  stp xzr,xzr,[sp, #0xf0]
7101cbf738  bl 0x71004f5770
7101cbf73c  add x8,x23,#0x1ce
7101cbf740  str wzr,[sp, #0x1e0]
7101cbf744  str xzr,[x8]
7101cbf748  ldr x8,[x25, #0x8f8]
7101cbf74c  stp xzr,xzr,[sp, #0x1c8]
7101cbf750  add x2,sp,#0x8
7101cbf754  mov x1,x21
7101cbf758  str xzr,[sp, #0x1b0]
7101cbf75c  str xzr,[sp, #0x280]
7101cbf760  str xzr,[sp, #0x278]
7101cbf764  str xzr,[sp, #0x270]
7101cbf768  str xzr,[sp, #0x268]
7101cbf76c  str xzr,[sp, #0x260]
7101cbf770  str xzr,[sp, #0x258]
7101cbf774  str xzr,[sp, #0x250]
7101cbf778  str xzr,[sp, #0x248]
7101cbf77c  str xzr,[sp, #0x240]
7101cbf780  str xzr,[sp, #0x238]
7101cbf784  str xzr,[sp, #0x230]
7101cbf788  str xzr,[sp, #0x228]
7101cbf78c  str xzr,[sp, #0x220]
7101cbf790  str xzr,[sp, #0x218]
7101cbf794  str xzr,[sp, #0x210]
7101cbf798  str xzr,[sp, #0x208]
7101cbf79c  strb wzr,[sp, #0x2b8]
7101cbf7a0  str xzr,[sp, #0x2b0]
7101cbf7a4  stp xzr,xzr,[sp, #0x1b8]
7101cbf7a8  stp xzr,xzr,[sp, #0x1f8]
7101cbf7ac  stp xzr,xzr,[sp, #0x1e8]
7101cbf7b0  ldr x0,[x8, #0x8]
7101cbf7b4  bl 0x710334e6a0
7101cbf7b8  mov w23,wzr
7101cbf7bc  cmp w0,#0x3
7101cbf7c0  b.ne 0x7101cbfa88
7101cbf7c4  add x0,sp,#0x8
7101cbf7c8  mov x1,x19
7101cbf7cc  bl 0x7101cf2c70
7101cbf7d0  adrp x1,0x71043ae000
7101cbf7d4  add x1,x1,#0x1be
7101cbf7d8  add x8,sp,#0xab8
7101cbf7dc  mov x0,x19
7101cbf7e0  bl 0x7103776910
7101cbf7e4  ldrsw x8,[sp, #0xe8]
7101cbf7e8  mov x9,#-0x7777
7101cbf7ec  movk x9,#0x8888, LSL #16
7101cbf7f0  mul x9,x8,x9
7101cbf7f4  lsr x9,x9,#0x20
7101cbf7f8  add w9,w9,w8
7101cbf7fc  asr w10,w9,#0x5
7101cbf800  add w9,w10,w9, LSR #0x1f
7101cbf804  mov w10,#0xffffffc4
7101cbf808  madd w8,w9,w10,w8
7101cbf80c  cmp w9,#0x3e7
7101cbf810  mov w10,#0x3e7
7101cbf814  csel w9,w9,w10,lt
7101cbf818  cmp w8,#0x3e7
7101cbf81c  mov w11,#0x3e8
7101cbf820  csel w8,w8,w10,lt
7101cbf824  madd w2,w9,w11,w8
7101cbf828  add x0,sp,#0xab8
7101cbf82c  mov w1,#0x1
7101cbf830  bl 0x710377a310
7101cbf834  ldr x0,[sp, #0xac0]
7101cbf838  adrp x8,0x710523d000
7101cbf83c  add x8,x8,#0x9a8
7101cbf840  str x8,[sp, #0xab8]
7101cbf844  str xzr,[sp, #0xac0]
7101cbf848  cbz x0,0x7101cbf850
7101cbf84c  bl 0x710392eb40
7101cbf850  mov x0,x22
7101cbf854  mov x1,x21
7101cbf858  mov x2,x19
7101cbf85c  mov w3,wzr
7101cbf860  bl 0x7101cf2800
7101cbf864  and w23,w0,#0x1
7101cbf868  b 0x7101cbfa88
7101cbf86c  lsl w9,w9,#0x1
7101cbf870  b 0x7101cbf0a8
7101cbf874  mov w8,#0x1
7101cbf878  b 0x7101cbf8a8
7101cbf87c  mov w8,#0x2
7101cbf880  b 0x7101cbf8a8
7101cbf884  orr w8,wzr,#0x3
7101cbf888  b 0x7101cbf8a8
7101cbf88c  mov w8,#0x4
7101cbf890  b 0x7101cbf8a8
7101cbf894  mov w8,#0x5
7101cbf898  b 0x7101cbf8a8
7101cbf89c  orr w8,wzr,#0x6
7101cbf8a0  b 0x7101cbf8a8
7101cbf8a4  orr w8,wzr,#0x7
7101cbf8a8  add x21,sp,#0xab8
7101cbf8ac  add x9,x21,#0x70
7101cbf8b0  add x9,x9,x8
7101cbf8b4  strb wzr,[x9, #0x4]
7101cbf8b8  str w8,[sp, #0xb28]
7101cbf8bc  add x8,sp,#0x8
7101cbf8c0  add x0,x21,#0x80
7101cbf8c4  add x1,x8,#0x80
7101cbf8c8  mov w2,#0x108
7101cbf8cc  bl 0x71039c00e0
7101cbf8d0  ldrh w9,[sp, #0x198]
7101cbf8d4  str wzr,[sp, #0xc40]
7101cbf8d8  cbz w9,0x7101cbf958
7101cbf8dc  strh w9,[sp, #0xc48]
7101cbf8e0  ldrh w9,[sp, #0x19a]
7101cbf8e4  add x8,x21,#0x190
7101cbf8e8  cbz w9,0x7101cbf960
7101cbf8ec  strh w9,[sp, #0xc4a]
7101cbf8f0  ldrh w9,[sp, #0x19c]
7101cbf8f4  cbz w9,0x7101cbf968
7101cbf8f8  strh w9,[sp, #0xc4c]
7101cbf8fc  ldrh w9,[sp, #0x19e]
7101cbf900  cbz w9,0x7101cbf970
7101cbf904  strh w9,[sp, #0xc4e]
7101cbf908  ldrh w9,[sp, #0x1a0]
7101cbf90c  cbz w9,0x7101cbf978
7101cbf910  strh w9,[sp, #0xc50]
7101cbf914  ldrh w9,[sp, #0x1a2]
7101cbf918  cbz w9,0x7101cbf980
7101cbf91c  strh w9,[sp, #0xc52]
7101cbf920  ldrh w9,[sp, #0x1a4]
7101cbf924  cbz w9,0x7101cbf988
7101cbf928  strh w9,[sp, #0xc54]
7101cbf92c  ldrh w9,[sp, #0x1a6]
7101cbf930  cbz w9,0x7101cbf990
7101cbf934  strh w9,[sp, #0xc56]
7101cbf938  ldrh w9,[sp, #0x1a8]
7101cbf93c  cbz w9,0x7101cbf998
7101cbf940  strh w9,[sp, #0xc58]
7101cbf944  ldrh w9,[sp, #0x1aa]
7101cbf948  cbz w9,0x7101cbf9a0
7101cbf94c  strh w9,[sp, #0xc5a]
7101cbf950  mov w9,#0xa
7101cbf954  b 0x7101cbf9a4
7101cbf958  add x8,x21,#0x190
7101cbf95c  b 0x7101cbf9a4
7101cbf960  mov w9,#0x1
7101cbf964  b 0x7101cbf9a4
7101cbf968  mov w9,#0x2
7101cbf96c  b 0x7101cbf9a4
7101cbf970  orr w9,wzr,#0x3
7101cbf974  b 0x7101cbf9a4
7101cbf978  mov w9,#0x4
7101cbf97c  b 0x7101cbf9a4
7101cbf980  mov w9,#0x5
7101cbf984  b 0x7101cbf9a4
7101cbf988  orr w9,wzr,#0x6
7101cbf98c  b 0x7101cbf9a4
7101cbf990  orr w9,wzr,#0x7
7101cbf994  b 0x7101cbf9a4
7101cbf998  mov w9,#0x8
7101cbf99c  b 0x7101cbf9a4
7101cbf9a0  mov w9,#0x9
7101cbf9a4  add x11,sp,#0xab8
7101cbf9a8  add x11,x11,w9, UXTW  #0x1
7101cbf9ac  strh wzr,[x11, #0x190]
7101cbf9b0  str w9,[sp, #0xc44]
7101cbf9b4  ldrh w9,[sp, #0xc48]
7101cbf9b8  mov w10,#0x9dc5
7101cbf9bc  movk w10,#0x811c, LSL #16
7101cbf9c0  cbz w9,0x7101cbf9e0
7101cbf9c4  add x8,x8,#0x2
7101cbf9c8  mov w11,#0x89
7101cbf9cc  mul w10,w10,w11
7101cbf9d0  and w9,w9,#0xffff
7101cbf9d4  eor w10,w10,w9
7101cbf9d8  ldrh w9,[x8], #0x2
7101cbf9dc  cbnz w9,0x7101cbf9cc
7101cbf9e0  ldr x8,[sp, #0x1b8]
7101cbf9e4  str x8,[sp, #0xc68]
7101cbf9e8  ldr x8,[sp, #0x1b0]
7101cbf9ec  ldr x9,[sp, #0x1d8]
7101cbf9f0  str x9,[sp, #0xc88]
7101cbf9f4  str x8,[sp, #0xc60]
7101cbf9f8  ldp x9,x8,[sp, #0x1c8]
7101cbf9fc  str x8,[sp, #0xc80]
7101cbfa00  ldr x8,[sp, #0x1c0]
7101cbfa04  str x8,[sp, #0xc70]
7101cbfa08  ldr x8,[sp, #0x1f8]
7101cbfa0c  str x8,[sp, #0xca8]
7101cbfa10  ldr x8,[sp, #0x1f0]
7101cbfa14  str x8,[sp, #0xca0]
7101cbfa18  ldr x8,[sp, #0x1e8]
7101cbfa1c  str x8,[sp, #0xc98]
7101cbfa20  ldr x8,[sp, #0x1e0]
7101cbfa24  str x8,[sp, #0xc90]
7101cbfa28  ldr x8,[sp, #0x218]
7101cbfa2c  str x8,[sp, #0xcc8]
7101cbfa30  ldr x8,[sp, #0x210]
7101cbfa34  str x8,[sp, #0xcc0]
7101cbfa38  ldr x8,[sp, #0x208]
7101cbfa3c  str x8,[sp, #0xcb8]
7101cbfa40  ldr x8,[sp, #0x200]
7101cbfa44  str x8,[sp, #0xcb0]
7101cbfa48  ldr x8,[sp, #0x220]
7101cbfa4c  str x9,[sp, #0xc78]
7101cbfa50  mov w9,#0x1
7101cbfa54  strb w9,[sp, #0xb44]
7101cbfa58  adrp x9,0x71042a3000
7101cbfa5c  add x9,x9,#0x221
7101cbfa60  str x8,[sp, #0xcd0]
7101cbfa64  ldrh w8,[sp, #0xb54]
7101cbfa68  str w10,[sp, #0xc40]
7101cbfa6c  ldr x0,[x19, #0x8]
7101cbfa70  fmov s0,0x3f800000
7101cbfa74  adrp x10,0x710438c000
7101cbfa78  add x10,x10,#0xc91
7101cbfa7c  cmp w8,#0x0
7101cbfa80  csel x1,x9,x10,eq
7101cbfa84  bl 0x7103778300
7101cbfa88  orr w8,wzr,#0x18
7101cbfa8c  madd x8,x24,x8,x20
7101cbfa90  str w23,[x8, #0x1b4]
7101cbfa94  cmp w23,#0x1
7101cbfa98  b.ne 0x7101cbf0c0
7101cbfa9c  ldr w23,[x20, #0xb20]
7101cbfaa0  adrp x1,0x71043be000
7101cbfaa4  add x1,x1,#0xebf
7101cbfaa8  add x8,sp,#0x8
7101cbfaac  mov x0,x19
7101cbfab0  bl 0x71037780e0
7101cbfab4  ldr x21,[sp, #0x10]
7101cbfab8  ldr x0,[x21, #0x8]
7101cbfabc  cbz x0,0x7101cbfad4
7101cbfac0  ldr x8,[x0]
7101cbfac4  ldr x8,[x8, #0x148]
7101cbfac8  blr x8
7101cbfacc  mov w22,w0
7101cbfad0  b 0x7101cbfad8
7101cbfad4  mov w22,wzr
7101cbfad8  adrp x8,0x710523d000
7101cbfadc  add x8,x8,#0x9e8
7101cbfae0  stp x8,xzr,[sp, #0x8]
7101cbfae4  cbz x21,0x7101cbfaf0
7101cbfae8  mov x0,x21
7101cbfaec  bl 0x710392eb40
7101cbfaf0  tbz w22,#0x0,0x7101cbfb18
7101cbfaf4  ldr x0,[x19, #0x8]
7101cbfaf8  adrp x1,0x7104433000
7101cbfafc  add x1,x1,#0x949
7101cbfb00  cmp w23,#0xc
7101cbfb04  b.lt 0x7101cbfb14
7101cbfb08  fmov s0,0x3f800000
7101cbfb0c  bl 0x7103778300
7101cbfb10  b 0x7101cbfb18
7101cbfb14  bl 0x7103778760
7101cbfb18  adrp x8,0x7105325000
7101cbfb1c  ldr x9,[x8, #0xcc0]
7101cbfb20  orr w8,wzr,#0x18
7101cbfb24  madd x8,x24,x8,x20
7101cbfb28  ldr x9,[x9, #0x8]
7101cbfb2c  ldr x8,[x8, #0x1a8]
7101cbfb30  ldr x10,[x9, #0x8]!
7101cbfb34  cbz x10,0x7101cbfb68
7101cbfb38  mov x11,x9
7101cbfb3c  ldr x12,[x10, #0x20]
7101cbfb40  cmp x12,x8
7101cbfb44  cset w12,cc
7101cbfb48  csel x11,x11,x10,cc
7101cbfb4c  ldr x10,[x10, w12, UXTW #0x3]
7101cbfb50  cbnz x10,0x7101cbfb3c
7101cbfb54  cmp x11,x9
7101cbfb58  b.eq 0x7101cbfb68
7101cbfb5c  ldr x9,[x11, #0x20]
7101cbfb60  cmp x9,x8
7101cbfb64  b.ls 0x7101cbfb9c
7101cbfb68  ldr x0,[x19, #0x8]
7101cbfb6c  adrp x1,0x71043e0000
7101cbfb70  add x1,x1,#0x2fd
7101cbfb74  fmov s0,0x3f800000
7101cbfb78  bl 0x7103778300
7101cbfb7c  add sp,sp,#0xce0
7101cbfb80  ldp x29,x30,[sp, #0x50]
7101cbfb84  ldp x20,x19,[sp, #0x40]
7101cbfb88  ldp x22,x21,[sp, #0x30]
7101cbfb8c  ldp x24,x23,[sp, #0x20]
7101cbfb90  ldp x26,x25,[sp, #0x10]
7101cbfb94  ldp x28,x27,[sp], #0x60
7101cbfb98  ret
7101cbfb9c  ldr x0,[x19, #0x8]
7101cbfba0  adrp x1,0x710425f000
7101cbfba4  add x1,x1,#0xca0
7101cbfba8  b 0x7101cbfb74
