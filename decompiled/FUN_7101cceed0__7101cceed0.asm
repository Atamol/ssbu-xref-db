// addr:      7101cceed0
// offset:    0x1cceed0
// name:      FUN_7101cceed0
// mangled:   
// size:      5616

7101cceed0  str d8,[sp, #-0x50]!
7101cceed4  str x28,[sp, #0x8]
7101cceed8  stp x24,x23,[sp, #0x10]
7101cceedc  stp x22,x21,[sp, #0x20]
7101cceee0  stp x20,x19,[sp, #0x30]
7101cceee4  stp x29,x30,[sp, #0x40]
7101cceee8  add x29,sp,#0x40
7101cceeec  sub sp,sp,#0xaf0
7101cceef0  ldr w8,[x0, #0xdc]
7101cceef4  mov x19,x0
7101cceef8  cbz w8,0x7101ccef04
7101cceefc  add x23,x19,#0xf0
7101ccef00  b 0x7101cd046c
7101ccef04  adrp x8,0x710593b000
7101ccef08  ldr x8,[x8, #0x988]
7101ccef0c  ldr x8,[x8, #0x8]
7101ccef10  ldr w9,[x8]
7101ccef14  orr w9,w9,#0x10
7101ccef18  str w9,[x8]
7101ccef1c  mov x23,x19
7101ccef20  ldr x8,[x23, #0xf0]!
7101ccef24  strb wzr,[x8, #0x70]
7101ccef28  ldr x8,[x23]
7101ccef2c  ldr x20,[x8, #0x80]
7101ccef30  ldr w8,[x20, #0xd8]
7101ccef34  cmp w8,#0x1
7101ccef38  b.ne 0x7101cd046c
7101ccef3c  ldr x8,[x20, #0xe8]
7101ccef40  ldr x0,[x8]
7101ccef44  ldr x22,[x19, #0xf8]
7101ccef48  bl 0x710323b9e0
7101ccef4c  ldr x8,[x20, #0x110]
7101ccef50  str x8,[x20, #0x118]
7101ccef54  ldr x8,[x20, #0x128]
7101ccef58  str x8,[x20, #0x130]
7101ccef5c  adrp x8,0x710532f000
7101ccef60  ldr x24,[x8, #0x8f8]
7101ccef64  ldr x21,[x24, #0x8]
7101ccef68  mov x0,x21
7101ccef6c  mov x1,x22
7101ccef70  bl 0x710334fdc0
7101ccef74  stp x0,x1,[x29, #-0x78]
7101ccef78  cbz x1,0x7101ccf068
7101ccef7c  mov x2,x0
7101ccef80  mov x0,x21
7101ccef84  bl 0x710334c7d0
7101ccef88  and w8,w0,#0xffff
7101ccef8c  cmp w8,#0x4
7101ccef90  strh w0,[x20, #0x108]
7101ccef94  b.hi 0x7101cd0454
7101ccef98  and x8,x0,#0xffff
7101ccef9c  adrp x9,0x71044f9000
7101ccefa0  add x9,x9,#0xcfc
7101ccefa4  ldrsw x8,[x9, x8, LSL #0x2]
7101ccefa8  add x8,x8,x9
7101ccefac  br x8
7101ccefb0  mov x8,#0xff0000000000
7101ccefb4  movk x8,#0x13ff, LSL #48
7101ccefb8  stur xzr,[sp, #0x75]
7101ccefbc  stp xzr,xzr,[sp, #0x8]
7101ccefc0  sub x1,x29,#0x78
7101ccefc4  str x8,[sp, #0x1b0]
7101ccefc8  mov x8,#0xff0000000000
7101ccefcc  add x2,sp,#0x8
7101ccefd0  movk x8,#0x5aff, LSL #48
7101ccefd4  str x8,[sp, #0x1b8]
7101ccefd8  mov x8,#0xff0000000000
7101ccefdc  stp xzr,xzr,[sp, #0x68]
7101ccefe0  movk x8,#0xc1ff, LSL #48
7101ccefe4  add x21,sp,#0x8
7101ccefe8  str wzr,[sp, #0x1c]
7101ccefec  strh wzr,[sp, #0x20]
7101cceff0  strh wzr,[sp, #0x18]
7101cceff4  str xzr,[sp, #0x60]
7101cceff8  str xzr,[sp, #0x190]
7101cceffc  strh wzr,[sp, #0x198]
7101ccf000  strh wzr,[sp, #0x1c4]
7101ccf004  str wzr,[sp, #0x1c0]
7101ccf008  str x8,[sp, #0x220]
7101ccf00c  ldr x0,[x24, #0x8]
7101ccf010  bl 0x710334f120
7101ccf014  ldr x8,[x20, #0xf0]
7101ccf018  ldr x8,[x8]
7101ccf01c  add x0,x8,#0x8
7101ccf020  adrp x1,0x7104270000
7101ccf024  add x1,x1,#0xf2
7101ccf028  sub x8,x29,#0x50
7101ccf02c  bl 0x7103776910
7101ccf030  ldrb w9,[sp, #0x7c]
7101ccf034  sturh wzr,[x29, #-0x58]
7101ccf038  stp xzr,xzr,[x29, #-0x68]
7101ccf03c  cbz w9,0x7101ccf3a0
7101ccf040  add x10,x21,#0x75
7101ccf044  mov w8,#0xffffffff
7101ccf048  ldrb w11,[x10], #0x1
7101ccf04c  add w8,w8,#0x1
7101ccf050  cbnz w11,0x7101ccf048
7101ccf054  add x10,sp,#0x8
7101ccf058  tbnz w9,#0x7,0x7101ccf3c8
7101ccf05c  add x11,x10,#0x75
7101ccf060  and w10,w9,#0x7f
7101ccf064  b 0x7101ccf484
7101ccf068  orr w8,wzr,#0xffff
7101ccf06c  strh w8,[x20, #0x108]
7101ccf070  b 0x7101cd0454
7101ccf074  mov x8,#0xff0000000000
7101ccf078  movk x8,#0xd9ff, LSL #48
7101ccf07c  str wzr,[sp, #0x1c]
7101ccf080  strh wzr,[sp, #0x20]
7101ccf084  strh wzr,[sp, #0x18]
7101ccf088  sub x1,x29,#0x78
7101ccf08c  stp xzr,xzr,[sp, #0x8]
7101ccf090  add x2,sp,#0x8
7101ccf094  add x21,sp,#0x8
7101ccf098  stur xzr,[sp, #0x75]
7101ccf09c  str xzr,[sp, #0x60]
7101ccf0a0  str xzr,[sp, #0x188]
7101ccf0a4  strh wzr,[sp, #0x190]
7101ccf0a8  str x8,[sp, #0x1c0]
7101ccf0ac  stp xzr,xzr,[sp, #0x68]
7101ccf0b0  ldr x0,[x24, #0x8]
7101ccf0b4  bl 0x710334f710
7101ccf0b8  ldr x8,[x20, #0xf0]
7101ccf0bc  ldr x8,[x8]
7101ccf0c0  add x0,x8,#0x8
7101ccf0c4  adrp x1,0x7104270000
7101ccf0c8  add x1,x1,#0xf2
7101ccf0cc  sub x8,x29,#0x50
7101ccf0d0  bl 0x7103776910
7101ccf0d4  ldrb w9,[sp, #0x7c]
7101ccf0d8  sturh wzr,[x29, #-0x58]
7101ccf0dc  stp xzr,xzr,[x29, #-0x68]
7101ccf0e0  cbz w9,0x7101ccf3a8
7101ccf0e4  add x10,x21,#0x75
7101ccf0e8  mov w8,#0xffffffff
7101ccf0ec  ldrb w11,[x10], #0x1
7101ccf0f0  add w8,w8,#0x1
7101ccf0f4  cbnz w11,0x7101ccf0ec
7101ccf0f8  add x10,sp,#0x8
7101ccf0fc  tbnz w9,#0x7,0x7101ccf3e8
7101ccf100  add x11,x10,#0x75
7101ccf104  and w10,w9,#0x7f
7101ccf108  b 0x7101ccf4c4
7101ccf10c  add x21,sp,#0x8
7101ccf110  add x0,x21,#0xf8
7101ccf114  str wzr,[sp, #0x1c]
7101ccf118  strh wzr,[sp, #0x20]
7101ccf11c  strh wzr,[sp, #0x18]
7101ccf120  stur xzr,[sp, #0x75]
7101ccf124  str xzr,[sp, #0x60]
7101ccf128  str xzr,[sp, #0x88]
7101ccf12c  stp xzr,xzr,[sp, #0x8]
7101ccf130  stp xzr,xzr,[sp, #0x68]
7101ccf134  bl 0x710143c4d0
7101ccf138  mov x8,#0xff0000000000
7101ccf13c  movk x8,#0xc1ff, LSL #48
7101ccf140  str x8,[sp, #0x398]
7101ccf144  str x8,[sp, #0x3a8]
7101ccf148  str x8,[sp, #0x3b8]
7101ccf14c  str x8,[sp, #0x3c8]
7101ccf150  sub x1,x29,#0x78
7101ccf154  add x2,sp,#0x8
7101ccf158  str x8,[sp, #0x3d8]
7101ccf15c  str x8,[sp, #0x3e8]
7101ccf160  str x8,[sp, #0x3f8]
7101ccf164  str x8,[sp, #0x408]
7101ccf168  str x8,[sp, #0x418]
7101ccf16c  str x8,[sp, #0x428]
7101ccf170  ldr x0,[x24, #0x8]
7101ccf174  bl 0x710334e9e0
7101ccf178  ldr x8,[x20, #0xf0]
7101ccf17c  ldr x8,[x8]
7101ccf180  add x0,x8,#0x8
7101ccf184  adrp x1,0x7104270000
7101ccf188  add x1,x1,#0xf2
7101ccf18c  sub x8,x29,#0x50
7101ccf190  bl 0x7103776910
7101ccf194  ldrb w9,[sp, #0x7c]
7101ccf198  sturh wzr,[x29, #-0x58]
7101ccf19c  stp xzr,xzr,[x29, #-0x68]
7101ccf1a0  cbz w9,0x7101ccf3b0
7101ccf1a4  add x10,x21,#0x75
7101ccf1a8  mov w8,#0xffffffff
7101ccf1ac  ldrb w11,[x10], #0x1
7101ccf1b0  add w8,w8,#0x1
7101ccf1b4  cbnz w11,0x7101ccf1ac
7101ccf1b8  add x10,sp,#0x8
7101ccf1bc  tbnz w9,#0x7,0x7101ccf408
7101ccf1c0  add x11,x10,#0x75
7101ccf1c4  and w10,w9,#0x7f
7101ccf1c8  b 0x7101ccf504
7101ccf1cc  add x21,sp,#0x8
7101ccf1d0  add x0,x21,#0xf8
7101ccf1d4  str wzr,[sp, #0x1c]
7101ccf1d8  strh wzr,[sp, #0x20]
7101ccf1dc  strh wzr,[sp, #0x18]
7101ccf1e0  stur xzr,[sp, #0x75]
7101ccf1e4  str xzr,[sp, #0x60]
7101ccf1e8  str xzr,[sp, #0x88]
7101ccf1ec  stp xzr,xzr,[sp, #0x8]
7101ccf1f0  stp xzr,xzr,[sp, #0x68]
7101ccf1f4  bl 0x710143c4d0
7101ccf1f8  ldr x0,[x24, #0x8]
7101ccf1fc  sub x1,x29,#0x78
7101ccf200  add x2,sp,#0x8
7101ccf204  bl 0x710334ec20
7101ccf208  ldr x8,[x20, #0xf0]
7101ccf20c  ldr x8,[x8]
7101ccf210  add x0,x8,#0x8
7101ccf214  adrp x1,0x7104270000
7101ccf218  add x1,x1,#0xf2
7101ccf21c  sub x8,x29,#0x50
7101ccf220  bl 0x7103776910
7101ccf224  ldrb w9,[sp, #0x7c]
7101ccf228  sturh wzr,[x29, #-0x58]
7101ccf22c  stp xzr,xzr,[x29, #-0x68]
7101ccf230  cbz w9,0x7101ccf3b8
7101ccf234  add x10,x21,#0x75
7101ccf238  mov w8,#0xffffffff
7101ccf23c  ldrb w11,[x10], #0x1
7101ccf240  add w8,w8,#0x1
7101ccf244  cbnz w11,0x7101ccf23c
7101ccf248  add x10,sp,#0x8
7101ccf24c  tbnz w9,#0x7,0x7101ccf428
7101ccf250  add x11,x10,#0x75
7101ccf254  and w10,w9,#0x7f
7101ccf258  b 0x7101ccf544
7101ccf25c  add x21,sp,#0x8
7101ccf260  add x0,x21,#0xe8
7101ccf264  str wzr,[sp, #0x1c]
7101ccf268  strh wzr,[sp, #0x20]
7101ccf26c  strh wzr,[sp, #0x18]
7101ccf270  stur xzr,[sp, #0x75]
7101ccf274  str xzr,[sp, #0x60]
7101ccf278  stur xzr,[sp, #0xde]
7101ccf27c  str xzr,[sp, #0x88]
7101ccf280  str xzr,[sp, #0xe8]
7101ccf284  stp xzr,xzr,[sp, #0x8]
7101ccf288  stp xzr,xzr,[sp, #0x68]
7101ccf28c  stp xzr,xzr,[sp, #0xd0]
7101ccf290  stp xzr,xzr,[sp, #0xc0]
7101ccf294  stp xzr,xzr,[sp, #0xb0]
7101ccf298  stp xzr,xzr,[sp, #0xa0]
7101ccf29c  stp xzr,xzr,[sp, #0x90]
7101ccf2a0  stp xzr,xzr,[sp, #0x1a0]
7101ccf2a4  stp xzr,xzr,[sp, #0x190]
7101ccf2a8  stp xzr,xzr,[sp, #0x180]
7101ccf2ac  stp xzr,xzr,[sp, #0x170]
7101ccf2b0  stp xzr,xzr,[sp, #0x160]
7101ccf2b4  stp xzr,xzr,[sp, #0x150]
7101ccf2b8  stp xzr,xzr,[sp, #0x140]
7101ccf2bc  stp xzr,xzr,[sp, #0x130]
7101ccf2c0  stp xzr,xzr,[sp, #0x120]
7101ccf2c4  stp xzr,xzr,[sp, #0x110]
7101ccf2c8  stp xzr,xzr,[sp, #0x100]
7101ccf2cc  stp xzr,xzr,[sp, #0xf0]
7101ccf2d0  bl 0x71004f5770
7101ccf2d4  add x8,x21,#0x1ce
7101ccf2d8  str wzr,[sp, #0x1e0]
7101ccf2dc  str xzr,[x8]
7101ccf2e0  stp xzr,xzr,[sp, #0x1c8]
7101ccf2e4  sub x1,x29,#0x78
7101ccf2e8  add x2,sp,#0x8
7101ccf2ec  str xzr,[sp, #0x1b0]
7101ccf2f0  str xzr,[sp, #0x280]
7101ccf2f4  str xzr,[sp, #0x278]
7101ccf2f8  str xzr,[sp, #0x270]
7101ccf2fc  str xzr,[sp, #0x268]
7101ccf300  str xzr,[sp, #0x260]
7101ccf304  str xzr,[sp, #0x258]
7101ccf308  str xzr,[sp, #0x250]
7101ccf30c  str xzr,[sp, #0x248]
7101ccf310  str xzr,[sp, #0x240]
7101ccf314  str xzr,[sp, #0x238]
7101ccf318  str xzr,[sp, #0x230]
7101ccf31c  str xzr,[sp, #0x228]
7101ccf320  str xzr,[sp, #0x220]
7101ccf324  str xzr,[sp, #0x218]
7101ccf328  str xzr,[sp, #0x210]
7101ccf32c  str xzr,[sp, #0x208]
7101ccf330  strb wzr,[sp, #0x2b8]
7101ccf334  str xzr,[sp, #0x2b0]
7101ccf338  stp xzr,xzr,[sp, #0x1b8]
7101ccf33c  stp xzr,xzr,[sp, #0x1f8]
7101ccf340  stp xzr,xzr,[sp, #0x1e8]
7101ccf344  ldr x0,[x24, #0x8]
7101ccf348  bl 0x710334e6a0
7101ccf34c  ldr x8,[x20, #0xf0]
7101ccf350  ldr x8,[x8]
7101ccf354  add x0,x8,#0x8
7101ccf358  adrp x1,0x7104270000
7101ccf35c  add x1,x1,#0xf2
7101ccf360  sub x8,x29,#0x50
7101ccf364  bl 0x7103776910
7101ccf368  ldrb w9,[sp, #0x7c]
7101ccf36c  sturh wzr,[x29, #-0x58]
7101ccf370  stp xzr,xzr,[x29, #-0x68]
7101ccf374  cbz w9,0x7101ccf3c0
7101ccf378  add x10,x21,#0x75
7101ccf37c  mov w8,#0xffffffff
7101ccf380  ldrb w11,[x10], #0x1
7101ccf384  add w8,w8,#0x1
7101ccf388  cbnz w11,0x7101ccf380
7101ccf38c  add x10,sp,#0x8
7101ccf390  tbnz w9,#0x7,0x7101ccf448
7101ccf394  add x11,x10,#0x75
7101ccf398  and w10,w9,#0x7f
7101ccf39c  b 0x7101ccf584
7101ccf3a0  mov x9,xzr
7101ccf3a4  b 0x7101cd017c
7101ccf3a8  mov x9,xzr
7101ccf3ac  b 0x7101cd0254
7101ccf3b0  mov x9,xzr
7101ccf3b4  b 0x7101cd02c0
7101ccf3b8  mov x9,xzr
7101ccf3bc  b 0x7101cd0328
7101ccf3c0  mov x9,xzr
7101ccf3c4  b 0x7101cd03ac
7101ccf3c8  ldrb w12,[sp, #0x7d]
7101ccf3cc  and w11,w9,#0xe0
7101ccf3d0  cmp w11,#0xc0
7101ccf3d4  b.ne 0x7101ccf468
7101ccf3d8  add x11,x10,#0x76
7101ccf3dc  and w10,w12,#0x3f
7101ccf3e0  bfm w10,w9,#0x1a,#0x5
7101ccf3e4  b 0x7101ccf484
7101ccf3e8  ldrb w12,[sp, #0x7d]
7101ccf3ec  and w11,w9,#0xe0
7101ccf3f0  cmp w11,#0xc0
7101ccf3f4  b.ne 0x7101ccf4a8
7101ccf3f8  add x11,x10,#0x76
7101ccf3fc  and w10,w12,#0x3f
7101ccf400  bfm w10,w9,#0x1a,#0x5
7101ccf404  b 0x7101ccf4c4
7101ccf408  ldrb w12,[sp, #0x7d]
7101ccf40c  and w11,w9,#0xe0
7101ccf410  cmp w11,#0xc0
7101ccf414  b.ne 0x7101ccf4e8
7101ccf418  add x11,x10,#0x76
7101ccf41c  and w10,w12,#0x3f
7101ccf420  bfm w10,w9,#0x1a,#0x5
7101ccf424  b 0x7101ccf504
7101ccf428  ldrb w12,[sp, #0x7d]
7101ccf42c  and w11,w9,#0xe0
7101ccf430  cmp w11,#0xc0
7101ccf434  b.ne 0x7101ccf528
7101ccf438  add x11,x10,#0x76
7101ccf43c  and w10,w12,#0x3f
7101ccf440  bfm w10,w9,#0x1a,#0x5
7101ccf444  b 0x7101ccf544
7101ccf448  ldrb w12,[sp, #0x7d]
7101ccf44c  and w11,w9,#0xe0
7101ccf450  cmp w11,#0xc0
7101ccf454  b.ne 0x7101ccf568
7101ccf458  add x11,x10,#0x76
7101ccf45c  and w10,w12,#0x3f
7101ccf460  bfm w10,w9,#0x1a,#0x5
7101ccf464  b 0x7101ccf584
7101ccf468  add x10,sp,#0x8
7101ccf46c  ldrb w13,[sp, #0x7e]
7101ccf470  add x11,x10,#0x77
7101ccf474  lsl w10,w9,#0xc
7101ccf478  and w9,w12,#0x3f
7101ccf47c  bfm w10,w9,#0x1a,#0x5
7101ccf480  bfxil w10,w13,#0x0,#0x6
7101ccf484  mov w9,#0x1
7101ccf488  sturh w10,[x29, #-0x68]
7101ccf48c  cbz w8,0x7101cd017c
7101ccf490  ldrb w12,[x11]
7101ccf494  cbz w12,0x7101cd017c
7101ccf498  tbnz w12,#0x7,0x7101ccf5a8
7101ccf49c  add x10,x11,#0x1
7101ccf4a0  and w9,w12,#0x7f
7101ccf4a4  b 0x7101ccf660
7101ccf4a8  add x10,sp,#0x8
7101ccf4ac  ldrb w13,[sp, #0x7e]
7101ccf4b0  add x11,x10,#0x77
7101ccf4b4  lsl w10,w9,#0xc
7101ccf4b8  and w9,w12,#0x3f
7101ccf4bc  bfm w10,w9,#0x1a,#0x5
7101ccf4c0  bfxil w10,w13,#0x0,#0x6
7101ccf4c4  mov w9,#0x1
7101ccf4c8  sturh w10,[x29, #-0x68]
7101ccf4cc  cbz w8,0x7101cd0254
7101ccf4d0  ldrb w12,[x11]
7101ccf4d4  cbz w12,0x7101cd0254
7101ccf4d8  tbnz w12,#0x7,0x7101ccf5c8
7101ccf4dc  add x10,x11,#0x1
7101ccf4e0  and w9,w12,#0x7f
7101ccf4e4  b 0x7101ccf6a0
7101ccf4e8  add x10,sp,#0x8
7101ccf4ec  ldrb w13,[sp, #0x7e]
7101ccf4f0  add x11,x10,#0x77
7101ccf4f4  lsl w10,w9,#0xc
7101ccf4f8  and w9,w12,#0x3f
7101ccf4fc  bfm w10,w9,#0x1a,#0x5
7101ccf500  bfxil w10,w13,#0x0,#0x6
7101ccf504  mov w9,#0x1
7101ccf508  sturh w10,[x29, #-0x68]
7101ccf50c  cbz w8,0x7101cd02c0
7101ccf510  ldrb w12,[x11]
7101ccf514  cbz w12,0x7101cd02c0
7101ccf518  tbnz w12,#0x7,0x7101ccf5e8
7101ccf51c  add x10,x11,#0x1
7101ccf520  and w9,w12,#0x7f
7101ccf524  b 0x7101ccf6e0
7101ccf528  add x10,sp,#0x8
7101ccf52c  ldrb w13,[sp, #0x7e]
7101ccf530  add x11,x10,#0x77
7101ccf534  lsl w10,w9,#0xc
7101ccf538  and w9,w12,#0x3f
7101ccf53c  bfm w10,w9,#0x1a,#0x5
7101ccf540  bfxil w10,w13,#0x0,#0x6
7101ccf544  mov w9,#0x1
7101ccf548  sturh w10,[x29, #-0x68]
7101ccf54c  cbz w8,0x7101cd0328
7101ccf550  ldrb w12,[x11]
7101ccf554  cbz w12,0x7101cd0328
7101ccf558  tbnz w12,#0x7,0x7101ccf608
7101ccf55c  add x10,x11,#0x1
7101ccf560  and w9,w12,#0x7f
7101ccf564  b 0x7101ccf720
7101ccf568  add x10,sp,#0x8
7101ccf56c  ldrb w13,[sp, #0x7e]
7101ccf570  add x11,x10,#0x77
7101ccf574  lsl w10,w9,#0xc
7101ccf578  and w9,w12,#0x3f
7101ccf57c  bfm w10,w9,#0x1a,#0x5
7101ccf580  bfxil w10,w13,#0x0,#0x6
7101ccf584  mov w9,#0x1
7101ccf588  sturh w10,[x29, #-0x68]
7101ccf58c  cbz w8,0x7101cd03ac
7101ccf590  ldrb w12,[x11]
7101ccf594  cbz w12,0x7101cd03ac
7101ccf598  tbnz w12,#0x7,0x7101ccf628
7101ccf59c  add x10,x11,#0x1
7101ccf5a0  and w9,w12,#0x7f
7101ccf5a4  b 0x7101ccf760
7101ccf5a8  ldrb w13,[x11, #0x1]
7101ccf5ac  and w9,w12,#0xe0
7101ccf5b0  cmp w9,#0xc0
7101ccf5b4  b.ne 0x7101ccf648
7101ccf5b8  and w9,w13,#0x3f
7101ccf5bc  add x10,x11,#0x2
7101ccf5c0  bfm w9,w12,#0x1a,#0x5
7101ccf5c4  b 0x7101ccf660
7101ccf5c8  ldrb w13,[x11, #0x1]
7101ccf5cc  and w9,w12,#0xe0
7101ccf5d0  cmp w9,#0xc0
7101ccf5d4  b.ne 0x7101ccf688
7101ccf5d8  and w9,w13,#0x3f
7101ccf5dc  add x10,x11,#0x2
7101ccf5e0  bfm w9,w12,#0x1a,#0x5
7101ccf5e4  b 0x7101ccf6a0
7101ccf5e8  ldrb w13,[x11, #0x1]
7101ccf5ec  and w9,w12,#0xe0
7101ccf5f0  cmp w9,#0xc0
7101ccf5f4  b.ne 0x7101ccf6c8
7101ccf5f8  and w9,w13,#0x3f
7101ccf5fc  add x10,x11,#0x2
7101ccf600  bfm w9,w12,#0x1a,#0x5
7101ccf604  b 0x7101ccf6e0
7101ccf608  ldrb w13,[x11, #0x1]
7101ccf60c  and w9,w12,#0xe0
7101ccf610  cmp w9,#0xc0
7101ccf614  b.ne 0x7101ccf708
7101ccf618  and w9,w13,#0x3f
7101ccf61c  add x10,x11,#0x2
7101ccf620  bfm w9,w12,#0x1a,#0x5
7101ccf624  b 0x7101ccf720
7101ccf628  ldrb w13,[x11, #0x1]
7101ccf62c  and w9,w12,#0xe0
7101ccf630  cmp w9,#0xc0
7101ccf634  b.ne 0x7101ccf748
7101ccf638  and w9,w13,#0x3f
7101ccf63c  add x10,x11,#0x2
7101ccf640  bfm w9,w12,#0x1a,#0x5
7101ccf644  b 0x7101ccf760
7101ccf648  add x10,x11,#0x3
7101ccf64c  ldrb w11,[x11, #0x2]
7101ccf650  lsl w9,w12,#0xc
7101ccf654  and w12,w13,#0x3f
7101ccf658  bfm w9,w12,#0x1a,#0x5
7101ccf65c  bfxil w9,w11,#0x0,#0x6
7101ccf660  sturh w9,[x29, #-0x66]
7101ccf664  mov w9,#0x2
7101ccf668  cmp w8,#0x2
7101ccf66c  b.cc 0x7101cd017c
7101ccf670  ldrb w12,[x10]
7101ccf674  cbz w12,0x7101cd017c
7101ccf678  tbnz w12,#0x7,0x7101ccf788
7101ccf67c  add x11,x10,#0x1
7101ccf680  and w9,w12,#0x7f
7101ccf684  b 0x7101ccf840
7101ccf688  add x10,x11,#0x3
7101ccf68c  ldrb w11,[x11, #0x2]
7101ccf690  lsl w9,w12,#0xc
7101ccf694  and w12,w13,#0x3f
7101ccf698  bfm w9,w12,#0x1a,#0x5
7101ccf69c  bfxil w9,w11,#0x0,#0x6
7101ccf6a0  sturh w9,[x29, #-0x66]
7101ccf6a4  mov w9,#0x2
7101ccf6a8  cmp w8,#0x2
7101ccf6ac  b.cc 0x7101cd0254
7101ccf6b0  ldrb w12,[x10]
7101ccf6b4  cbz w12,0x7101cd0254
7101ccf6b8  tbnz w12,#0x7,0x7101ccf7a8
7101ccf6bc  add x11,x10,#0x1
7101ccf6c0  and w9,w12,#0x7f
7101ccf6c4  b 0x7101ccf880
7101ccf6c8  add x10,x11,#0x3
7101ccf6cc  ldrb w11,[x11, #0x2]
7101ccf6d0  lsl w9,w12,#0xc
7101ccf6d4  and w12,w13,#0x3f
7101ccf6d8  bfm w9,w12,#0x1a,#0x5
7101ccf6dc  bfxil w9,w11,#0x0,#0x6
7101ccf6e0  sturh w9,[x29, #-0x66]
7101ccf6e4  mov w9,#0x2
7101ccf6e8  cmp w8,#0x2
7101ccf6ec  b.cc 0x7101cd02c0
7101ccf6f0  ldrb w12,[x10]
7101ccf6f4  cbz w12,0x7101cd02c0
7101ccf6f8  tbnz w12,#0x7,0x7101ccf7c8
7101ccf6fc  add x11,x10,#0x1
7101ccf700  and w9,w12,#0x7f
7101ccf704  b 0x7101ccf8c0
7101ccf708  add x10,x11,#0x3
7101ccf70c  ldrb w11,[x11, #0x2]
7101ccf710  lsl w9,w12,#0xc
7101ccf714  and w12,w13,#0x3f
7101ccf718  bfm w9,w12,#0x1a,#0x5
7101ccf71c  bfxil w9,w11,#0x0,#0x6
7101ccf720  sturh w9,[x29, #-0x66]
7101ccf724  mov w9,#0x2
7101ccf728  cmp w8,#0x2
7101ccf72c  b.cc 0x7101cd0328
7101ccf730  ldrb w12,[x10]
7101ccf734  cbz w12,0x7101cd0328
7101ccf738  tbnz w12,#0x7,0x7101ccf7e8
7101ccf73c  add x11,x10,#0x1
7101ccf740  and w9,w12,#0x7f
7101ccf744  b 0x7101ccf900
7101ccf748  add x10,x11,#0x3
7101ccf74c  ldrb w11,[x11, #0x2]
7101ccf750  lsl w9,w12,#0xc
7101ccf754  and w12,w13,#0x3f
7101ccf758  bfm w9,w12,#0x1a,#0x5
7101ccf75c  bfxil w9,w11,#0x0,#0x6
7101ccf760  sturh w9,[x29, #-0x66]
7101ccf764  mov w9,#0x2
7101ccf768  cmp w8,#0x2
7101ccf76c  b.cc 0x7101cd03ac
7101ccf770  ldrb w12,[x10]
7101ccf774  cbz w12,0x7101cd03ac
7101ccf778  tbnz w12,#0x7,0x7101ccf808
7101ccf77c  add x11,x10,#0x1
7101ccf780  and w9,w12,#0x7f
7101ccf784  b 0x7101ccf940
7101ccf788  ldrb w13,[x10, #0x1]
7101ccf78c  and w9,w12,#0xe0
7101ccf790  cmp w9,#0xc0
7101ccf794  b.ne 0x7101ccf828
7101ccf798  and w9,w13,#0x3f
7101ccf79c  add x11,x10,#0x2
7101ccf7a0  bfm w9,w12,#0x1a,#0x5
7101ccf7a4  b 0x7101ccf840
7101ccf7a8  ldrb w13,[x10, #0x1]
7101ccf7ac  and w9,w12,#0xe0
7101ccf7b0  cmp w9,#0xc0
7101ccf7b4  b.ne 0x7101ccf868
7101ccf7b8  and w9,w13,#0x3f
7101ccf7bc  add x11,x10,#0x2
7101ccf7c0  bfm w9,w12,#0x1a,#0x5
7101ccf7c4  b 0x7101ccf880
7101ccf7c8  ldrb w13,[x10, #0x1]
7101ccf7cc  and w9,w12,#0xe0
7101ccf7d0  cmp w9,#0xc0
7101ccf7d4  b.ne 0x7101ccf8a8
7101ccf7d8  and w9,w13,#0x3f
7101ccf7dc  add x11,x10,#0x2
7101ccf7e0  bfm w9,w12,#0x1a,#0x5
7101ccf7e4  b 0x7101ccf8c0
7101ccf7e8  ldrb w13,[x10, #0x1]
7101ccf7ec  and w9,w12,#0xe0
7101ccf7f0  cmp w9,#0xc0
7101ccf7f4  b.ne 0x7101ccf8e8
7101ccf7f8  and w9,w13,#0x3f
7101ccf7fc  add x11,x10,#0x2
7101ccf800  bfm w9,w12,#0x1a,#0x5
7101ccf804  b 0x7101ccf900
7101ccf808  ldrb w13,[x10, #0x1]
7101ccf80c  and w9,w12,#0xe0
7101ccf810  cmp w9,#0xc0
7101ccf814  b.ne 0x7101ccf928
7101ccf818  and w9,w13,#0x3f
7101ccf81c  add x11,x10,#0x2
7101ccf820  bfm w9,w12,#0x1a,#0x5
7101ccf824  b 0x7101ccf940
7101ccf828  add x11,x10,#0x3
7101ccf82c  ldrb w10,[x10, #0x2]
7101ccf830  lsl w9,w12,#0xc
7101ccf834  and w12,w13,#0x3f
7101ccf838  bfm w9,w12,#0x1a,#0x5
7101ccf83c  bfxil w9,w10,#0x0,#0x6
7101ccf840  sturh w9,[x29, #-0x64]
7101ccf844  orr w9,wzr,#0x3
7101ccf848  cmp w8,#0x3
7101ccf84c  b.cc 0x7101cd017c
7101ccf850  ldrb w12,[x11]
7101ccf854  cbz w12,0x7101cd017c
7101ccf858  tbnz w12,#0x7,0x7101ccf968
7101ccf85c  add x10,x11,#0x1
7101ccf860  and w9,w12,#0x7f
7101ccf864  b 0x7101ccfa20
7101ccf868  add x11,x10,#0x3
7101ccf86c  ldrb w10,[x10, #0x2]
7101ccf870  lsl w9,w12,#0xc
7101ccf874  and w12,w13,#0x3f
7101ccf878  bfm w9,w12,#0x1a,#0x5
7101ccf87c  bfxil w9,w10,#0x0,#0x6
7101ccf880  sturh w9,[x29, #-0x64]
7101ccf884  orr w9,wzr,#0x3
7101ccf888  cmp w8,#0x3
7101ccf88c  b.cc 0x7101cd0254
7101ccf890  ldrb w12,[x11]
7101ccf894  cbz w12,0x7101cd0254
7101ccf898  tbnz w12,#0x7,0x7101ccf988
7101ccf89c  add x10,x11,#0x1
7101ccf8a0  and w9,w12,#0x7f
7101ccf8a4  b 0x7101ccfa60
7101ccf8a8  add x11,x10,#0x3
7101ccf8ac  ldrb w10,[x10, #0x2]
7101ccf8b0  lsl w9,w12,#0xc
7101ccf8b4  and w12,w13,#0x3f
7101ccf8b8  bfm w9,w12,#0x1a,#0x5
7101ccf8bc  bfxil w9,w10,#0x0,#0x6
7101ccf8c0  sturh w9,[x29, #-0x64]
7101ccf8c4  orr w9,wzr,#0x3
7101ccf8c8  cmp w8,#0x3
7101ccf8cc  b.cc 0x7101cd02c0
7101ccf8d0  ldrb w12,[x11]
7101ccf8d4  cbz w12,0x7101cd02c0
7101ccf8d8  tbnz w12,#0x7,0x7101ccf9a8
7101ccf8dc  add x10,x11,#0x1
7101ccf8e0  and w9,w12,#0x7f
7101ccf8e4  b 0x7101ccfaa0
7101ccf8e8  add x11,x10,#0x3
7101ccf8ec  ldrb w10,[x10, #0x2]
7101ccf8f0  lsl w9,w12,#0xc
7101ccf8f4  and w12,w13,#0x3f
7101ccf8f8  bfm w9,w12,#0x1a,#0x5
7101ccf8fc  bfxil w9,w10,#0x0,#0x6
7101ccf900  sturh w9,[x29, #-0x64]
7101ccf904  orr w9,wzr,#0x3
7101ccf908  cmp w8,#0x3
7101ccf90c  b.cc 0x7101cd0328
7101ccf910  ldrb w12,[x11]
7101ccf914  cbz w12,0x7101cd0328
7101ccf918  tbnz w12,#0x7,0x7101ccf9c8
7101ccf91c  add x10,x11,#0x1
7101ccf920  and w9,w12,#0x7f
7101ccf924  b 0x7101ccfae0
7101ccf928  add x11,x10,#0x3
7101ccf92c  ldrb w10,[x10, #0x2]
7101ccf930  lsl w9,w12,#0xc
7101ccf934  and w12,w13,#0x3f
7101ccf938  bfm w9,w12,#0x1a,#0x5
7101ccf93c  bfxil w9,w10,#0x0,#0x6
7101ccf940  sturh w9,[x29, #-0x64]
7101ccf944  orr w9,wzr,#0x3
7101ccf948  cmp w8,#0x3
7101ccf94c  b.cc 0x7101cd03ac
7101ccf950  ldrb w12,[x11]
7101ccf954  cbz w12,0x7101cd03ac
7101ccf958  tbnz w12,#0x7,0x7101ccf9e8
7101ccf95c  add x10,x11,#0x1
7101ccf960  and w9,w12,#0x7f
7101ccf964  b 0x7101ccfb20
7101ccf968  ldrb w13,[x11, #0x1]
7101ccf96c  and w9,w12,#0xe0
7101ccf970  cmp w9,#0xc0
7101ccf974  b.ne 0x7101ccfa08
7101ccf978  and w9,w13,#0x3f
7101ccf97c  add x10,x11,#0x2
7101ccf980  bfm w9,w12,#0x1a,#0x5
7101ccf984  b 0x7101ccfa20
7101ccf988  ldrb w13,[x11, #0x1]
7101ccf98c  and w9,w12,#0xe0
7101ccf990  cmp w9,#0xc0
7101ccf994  b.ne 0x7101ccfa48
7101ccf998  and w9,w13,#0x3f
7101ccf99c  add x10,x11,#0x2
7101ccf9a0  bfm w9,w12,#0x1a,#0x5
7101ccf9a4  b 0x7101ccfa60
7101ccf9a8  ldrb w13,[x11, #0x1]
7101ccf9ac  and w9,w12,#0xe0
7101ccf9b0  cmp w9,#0xc0
7101ccf9b4  b.ne 0x7101ccfa88
7101ccf9b8  and w9,w13,#0x3f
7101ccf9bc  add x10,x11,#0x2
7101ccf9c0  bfm w9,w12,#0x1a,#0x5
7101ccf9c4  b 0x7101ccfaa0
7101ccf9c8  ldrb w13,[x11, #0x1]
7101ccf9cc  and w9,w12,#0xe0
7101ccf9d0  cmp w9,#0xc0
7101ccf9d4  b.ne 0x7101ccfac8
7101ccf9d8  and w9,w13,#0x3f
7101ccf9dc  add x10,x11,#0x2
7101ccf9e0  bfm w9,w12,#0x1a,#0x5
7101ccf9e4  b 0x7101ccfae0
7101ccf9e8  ldrb w13,[x11, #0x1]
7101ccf9ec  and w9,w12,#0xe0
7101ccf9f0  cmp w9,#0xc0
7101ccf9f4  b.ne 0x7101ccfb08
7101ccf9f8  and w9,w13,#0x3f
7101ccf9fc  add x10,x11,#0x2
7101ccfa00  bfm w9,w12,#0x1a,#0x5
7101ccfa04  b 0x7101ccfb20
7101ccfa08  add x10,x11,#0x3
7101ccfa0c  ldrb w11,[x11, #0x2]
7101ccfa10  lsl w9,w12,#0xc
7101ccfa14  and w12,w13,#0x3f
7101ccfa18  bfm w9,w12,#0x1a,#0x5
7101ccfa1c  bfxil w9,w11,#0x0,#0x6
7101ccfa20  sturh w9,[x29, #-0x62]
7101ccfa24  mov w9,#0x4
7101ccfa28  cmp w8,#0x4
7101ccfa2c  b.cc 0x7101cd017c
7101ccfa30  ldrb w12,[x10]
7101ccfa34  cbz w12,0x7101cd017c
7101ccfa38  tbnz w12,#0x7,0x7101ccfb48
7101ccfa3c  add x11,x10,#0x1
7101ccfa40  and w9,w12,#0x7f
7101ccfa44  b 0x7101ccfc00
7101ccfa48  add x10,x11,#0x3
7101ccfa4c  ldrb w11,[x11, #0x2]
7101ccfa50  lsl w9,w12,#0xc
7101ccfa54  and w12,w13,#0x3f
7101ccfa58  bfm w9,w12,#0x1a,#0x5
7101ccfa5c  bfxil w9,w11,#0x0,#0x6
7101ccfa60  sturh w9,[x29, #-0x62]
7101ccfa64  mov w9,#0x4
7101ccfa68  cmp w8,#0x4
7101ccfa6c  b.cc 0x7101cd0254
7101ccfa70  ldrb w12,[x10]
7101ccfa74  cbz w12,0x7101cd0254
7101ccfa78  tbnz w12,#0x7,0x7101ccfb68
7101ccfa7c  add x11,x10,#0x1
7101ccfa80  and w9,w12,#0x7f
7101ccfa84  b 0x7101ccfc40
7101ccfa88  add x10,x11,#0x3
7101ccfa8c  ldrb w11,[x11, #0x2]
7101ccfa90  lsl w9,w12,#0xc
7101ccfa94  and w12,w13,#0x3f
7101ccfa98  bfm w9,w12,#0x1a,#0x5
7101ccfa9c  bfxil w9,w11,#0x0,#0x6
7101ccfaa0  sturh w9,[x29, #-0x62]
7101ccfaa4  mov w9,#0x4
7101ccfaa8  cmp w8,#0x4
7101ccfaac  b.cc 0x7101cd02c0
7101ccfab0  ldrb w12,[x10]
7101ccfab4  cbz w12,0x7101cd02c0
7101ccfab8  tbnz w12,#0x7,0x7101ccfb88
7101ccfabc  add x11,x10,#0x1
7101ccfac0  and w9,w12,#0x7f
7101ccfac4  b 0x7101ccfc80
7101ccfac8  add x10,x11,#0x3
7101ccfacc  ldrb w11,[x11, #0x2]
7101ccfad0  lsl w9,w12,#0xc
7101ccfad4  and w12,w13,#0x3f
7101ccfad8  bfm w9,w12,#0x1a,#0x5
7101ccfadc  bfxil w9,w11,#0x0,#0x6
7101ccfae0  sturh w9,[x29, #-0x62]
7101ccfae4  mov w9,#0x4
7101ccfae8  cmp w8,#0x4
7101ccfaec  b.cc 0x7101cd0328
7101ccfaf0  ldrb w12,[x10]
7101ccfaf4  cbz w12,0x7101cd0328
7101ccfaf8  tbnz w12,#0x7,0x7101ccfba8
7101ccfafc  add x11,x10,#0x1
7101ccfb00  and w9,w12,#0x7f
7101ccfb04  b 0x7101ccfcc0
7101ccfb08  add x10,x11,#0x3
7101ccfb0c  ldrb w11,[x11, #0x2]
7101ccfb10  lsl w9,w12,#0xc
7101ccfb14  and w12,w13,#0x3f
7101ccfb18  bfm w9,w12,#0x1a,#0x5
7101ccfb1c  bfxil w9,w11,#0x0,#0x6
7101ccfb20  sturh w9,[x29, #-0x62]
7101ccfb24  mov w9,#0x4
7101ccfb28  cmp w8,#0x4
7101ccfb2c  b.cc 0x7101cd03ac
7101ccfb30  ldrb w12,[x10]
7101ccfb34  cbz w12,0x7101cd03ac
7101ccfb38  tbnz w12,#0x7,0x7101ccfbc8
7101ccfb3c  add x11,x10,#0x1
7101ccfb40  and w9,w12,#0x7f
7101ccfb44  b 0x7101ccfd00
7101ccfb48  ldrb w13,[x10, #0x1]
7101ccfb4c  and w9,w12,#0xe0
7101ccfb50  cmp w9,#0xc0
7101ccfb54  b.ne 0x7101ccfbe8
7101ccfb58  and w9,w13,#0x3f
7101ccfb5c  add x11,x10,#0x2
7101ccfb60  bfm w9,w12,#0x1a,#0x5
7101ccfb64  b 0x7101ccfc00
7101ccfb68  ldrb w13,[x10, #0x1]
7101ccfb6c  and w9,w12,#0xe0
7101ccfb70  cmp w9,#0xc0
7101ccfb74  b.ne 0x7101ccfc28
7101ccfb78  and w9,w13,#0x3f
7101ccfb7c  add x11,x10,#0x2
7101ccfb80  bfm w9,w12,#0x1a,#0x5
7101ccfb84  b 0x7101ccfc40
7101ccfb88  ldrb w13,[x10, #0x1]
7101ccfb8c  and w9,w12,#0xe0
7101ccfb90  cmp w9,#0xc0
7101ccfb94  b.ne 0x7101ccfc68
7101ccfb98  and w9,w13,#0x3f
7101ccfb9c  add x11,x10,#0x2
7101ccfba0  bfm w9,w12,#0x1a,#0x5
7101ccfba4  b 0x7101ccfc80
7101ccfba8  ldrb w13,[x10, #0x1]
7101ccfbac  and w9,w12,#0xe0
7101ccfbb0  cmp w9,#0xc0
7101ccfbb4  b.ne 0x7101ccfca8
7101ccfbb8  and w9,w13,#0x3f
7101ccfbbc  add x11,x10,#0x2
7101ccfbc0  bfm w9,w12,#0x1a,#0x5
7101ccfbc4  b 0x7101ccfcc0
7101ccfbc8  ldrb w13,[x10, #0x1]
7101ccfbcc  and w9,w12,#0xe0
7101ccfbd0  cmp w9,#0xc0
7101ccfbd4  b.ne 0x7101ccfce8
7101ccfbd8  and w9,w13,#0x3f
7101ccfbdc  add x11,x10,#0x2
7101ccfbe0  bfm w9,w12,#0x1a,#0x5
7101ccfbe4  b 0x7101ccfd00
7101ccfbe8  add x11,x10,#0x3
7101ccfbec  ldrb w10,[x10, #0x2]
7101ccfbf0  lsl w9,w12,#0xc
7101ccfbf4  and w12,w13,#0x3f
7101ccfbf8  bfm w9,w12,#0x1a,#0x5
7101ccfbfc  bfxil w9,w10,#0x0,#0x6
7101ccfc00  sturh w9,[x29, #-0x60]
7101ccfc04  mov w9,#0x5
7101ccfc08  cmp w8,#0x5
7101ccfc0c  b.cc 0x7101cd017c
7101ccfc10  ldrb w12,[x11]
7101ccfc14  cbz w12,0x7101cd017c
7101ccfc18  tbnz w12,#0x7,0x7101ccfd28
7101ccfc1c  add x10,x11,#0x1
7101ccfc20  and w9,w12,#0x7f
7101ccfc24  b 0x7101ccfde0
7101ccfc28  add x11,x10,#0x3
7101ccfc2c  ldrb w10,[x10, #0x2]
7101ccfc30  lsl w9,w12,#0xc
7101ccfc34  and w12,w13,#0x3f
7101ccfc38  bfm w9,w12,#0x1a,#0x5
7101ccfc3c  bfxil w9,w10,#0x0,#0x6
7101ccfc40  sturh w9,[x29, #-0x60]
7101ccfc44  mov w9,#0x5
7101ccfc48  cmp w8,#0x5
7101ccfc4c  b.cc 0x7101cd0254
7101ccfc50  ldrb w12,[x11]
7101ccfc54  cbz w12,0x7101cd0254
7101ccfc58  tbnz w12,#0x7,0x7101ccfd48
7101ccfc5c  add x10,x11,#0x1
7101ccfc60  and w9,w12,#0x7f
7101ccfc64  b 0x7101ccfe20
7101ccfc68  add x11,x10,#0x3
7101ccfc6c  ldrb w10,[x10, #0x2]
7101ccfc70  lsl w9,w12,#0xc
7101ccfc74  and w12,w13,#0x3f
7101ccfc78  bfm w9,w12,#0x1a,#0x5
7101ccfc7c  bfxil w9,w10,#0x0,#0x6
7101ccfc80  sturh w9,[x29, #-0x60]
7101ccfc84  mov w9,#0x5
7101ccfc88  cmp w8,#0x5
7101ccfc8c  b.cc 0x7101cd02c0
7101ccfc90  ldrb w12,[x11]
7101ccfc94  cbz w12,0x7101cd02c0
7101ccfc98  tbnz w12,#0x7,0x7101ccfd68
7101ccfc9c  add x10,x11,#0x1
7101ccfca0  and w9,w12,#0x7f
7101ccfca4  b 0x7101ccfe60
7101ccfca8  add x11,x10,#0x3
7101ccfcac  ldrb w10,[x10, #0x2]
7101ccfcb0  lsl w9,w12,#0xc
7101ccfcb4  and w12,w13,#0x3f
7101ccfcb8  bfm w9,w12,#0x1a,#0x5
7101ccfcbc  bfxil w9,w10,#0x0,#0x6
7101ccfcc0  sturh w9,[x29, #-0x60]
7101ccfcc4  mov w9,#0x5
7101ccfcc8  cmp w8,#0x5
7101ccfccc  b.cc 0x7101cd0328
7101ccfcd0  ldrb w12,[x11]
7101ccfcd4  cbz w12,0x7101cd0328
7101ccfcd8  tbnz w12,#0x7,0x7101ccfd88
7101ccfcdc  add x10,x11,#0x1
7101ccfce0  and w9,w12,#0x7f
7101ccfce4  b 0x7101ccfea0
7101ccfce8  add x11,x10,#0x3
7101ccfcec  ldrb w10,[x10, #0x2]
7101ccfcf0  lsl w9,w12,#0xc
7101ccfcf4  and w12,w13,#0x3f
7101ccfcf8  bfm w9,w12,#0x1a,#0x5
7101ccfcfc  bfxil w9,w10,#0x0,#0x6
7101ccfd00  sturh w9,[x29, #-0x60]
7101ccfd04  mov w9,#0x5
7101ccfd08  cmp w8,#0x5
7101ccfd0c  b.cc 0x7101cd03ac
7101ccfd10  ldrb w12,[x11]
7101ccfd14  cbz w12,0x7101cd03ac
7101ccfd18  tbnz w12,#0x7,0x7101ccfda8
7101ccfd1c  add x10,x11,#0x1
7101ccfd20  and w9,w12,#0x7f
7101ccfd24  b 0x7101ccfee0
7101ccfd28  ldrb w13,[x11, #0x1]
7101ccfd2c  and w9,w12,#0xe0
7101ccfd30  cmp w9,#0xc0
7101ccfd34  b.ne 0x7101ccfdc8
7101ccfd38  and w9,w13,#0x3f
7101ccfd3c  add x10,x11,#0x2
7101ccfd40  bfm w9,w12,#0x1a,#0x5
7101ccfd44  b 0x7101ccfde0
7101ccfd48  ldrb w13,[x11, #0x1]
7101ccfd4c  and w9,w12,#0xe0
7101ccfd50  cmp w9,#0xc0
7101ccfd54  b.ne 0x7101ccfe08
7101ccfd58  and w9,w13,#0x3f
7101ccfd5c  add x10,x11,#0x2
7101ccfd60  bfm w9,w12,#0x1a,#0x5
7101ccfd64  b 0x7101ccfe20
7101ccfd68  ldrb w13,[x11, #0x1]
7101ccfd6c  and w9,w12,#0xe0
7101ccfd70  cmp w9,#0xc0
7101ccfd74  b.ne 0x7101ccfe48
7101ccfd78  and w9,w13,#0x3f
7101ccfd7c  add x10,x11,#0x2
7101ccfd80  bfm w9,w12,#0x1a,#0x5
7101ccfd84  b 0x7101ccfe60
7101ccfd88  ldrb w13,[x11, #0x1]
7101ccfd8c  and w9,w12,#0xe0
7101ccfd90  cmp w9,#0xc0
7101ccfd94  b.ne 0x7101ccfe88
7101ccfd98  and w9,w13,#0x3f
7101ccfd9c  add x10,x11,#0x2
7101ccfda0  bfm w9,w12,#0x1a,#0x5
7101ccfda4  b 0x7101ccfea0
7101ccfda8  ldrb w13,[x11, #0x1]
7101ccfdac  and w9,w12,#0xe0
7101ccfdb0  cmp w9,#0xc0
7101ccfdb4  b.ne 0x7101ccfec8
7101ccfdb8  and w9,w13,#0x3f
7101ccfdbc  add x10,x11,#0x2
7101ccfdc0  bfm w9,w12,#0x1a,#0x5
7101ccfdc4  b 0x7101ccfee0
7101ccfdc8  add x10,x11,#0x3
7101ccfdcc  ldrb w11,[x11, #0x2]
7101ccfdd0  lsl w9,w12,#0xc
7101ccfdd4  and w12,w13,#0x3f
7101ccfdd8  bfm w9,w12,#0x1a,#0x5
7101ccfddc  bfxil w9,w11,#0x0,#0x6
7101ccfde0  sturh w9,[x29, #-0x5e]
7101ccfde4  orr w9,wzr,#0x6
7101ccfde8  cmp w8,#0x6
7101ccfdec  b.cc 0x7101cd017c
7101ccfdf0  ldrb w12,[x10]
7101ccfdf4  cbz w12,0x7101cd017c
7101ccfdf8  tbnz w12,#0x7,0x7101ccff08
7101ccfdfc  add x11,x10,#0x1
7101ccfe00  and w9,w12,#0x7f
7101ccfe04  b 0x7101ccffc0
7101ccfe08  add x10,x11,#0x3
7101ccfe0c  ldrb w11,[x11, #0x2]
7101ccfe10  lsl w9,w12,#0xc
7101ccfe14  and w12,w13,#0x3f
7101ccfe18  bfm w9,w12,#0x1a,#0x5
7101ccfe1c  bfxil w9,w11,#0x0,#0x6
7101ccfe20  sturh w9,[x29, #-0x5e]
7101ccfe24  orr w9,wzr,#0x6
7101ccfe28  cmp w8,#0x6
7101ccfe2c  b.cc 0x7101cd0254
7101ccfe30  ldrb w12,[x10]
7101ccfe34  cbz w12,0x7101cd0254
7101ccfe38  tbnz w12,#0x7,0x7101ccff28
7101ccfe3c  add x11,x10,#0x1
7101ccfe40  and w9,w12,#0x7f
7101ccfe44  b 0x7101ccfffc
7101ccfe48  add x10,x11,#0x3
7101ccfe4c  ldrb w11,[x11, #0x2]
7101ccfe50  lsl w9,w12,#0xc
7101ccfe54  and w12,w13,#0x3f
7101ccfe58  bfm w9,w12,#0x1a,#0x5
7101ccfe5c  bfxil w9,w11,#0x0,#0x6
7101ccfe60  sturh w9,[x29, #-0x5e]
7101ccfe64  orr w9,wzr,#0x6
7101ccfe68  cmp w8,#0x6
7101ccfe6c  b.cc 0x7101cd02c0
7101ccfe70  ldrb w12,[x10]
7101ccfe74  cbz w12,0x7101cd02c0
7101ccfe78  tbnz w12,#0x7,0x7101ccff48
7101ccfe7c  add x11,x10,#0x1
7101ccfe80  and w9,w12,#0x7f
7101ccfe84  b 0x7101cd0038
7101ccfe88  add x10,x11,#0x3
7101ccfe8c  ldrb w11,[x11, #0x2]
7101ccfe90  lsl w9,w12,#0xc
7101ccfe94  and w12,w13,#0x3f
7101ccfe98  bfm w9,w12,#0x1a,#0x5
7101ccfe9c  bfxil w9,w11,#0x0,#0x6
7101ccfea0  sturh w9,[x29, #-0x5e]
7101ccfea4  orr w9,wzr,#0x6
7101ccfea8  cmp w8,#0x6
7101ccfeac  b.cc 0x7101cd0328
7101ccfeb0  ldrb w12,[x10]
7101ccfeb4  cbz w12,0x7101cd0328
7101ccfeb8  tbnz w12,#0x7,0x7101ccff68
7101ccfebc  add x11,x10,#0x1
7101ccfec0  and w9,w12,#0x7f
7101ccfec4  b 0x7101cd0074
7101ccfec8  add x10,x11,#0x3
7101ccfecc  ldrb w11,[x11, #0x2]
7101ccfed0  lsl w9,w12,#0xc
7101ccfed4  and w12,w13,#0x3f
7101ccfed8  bfm w9,w12,#0x1a,#0x5
7101ccfedc  bfxil w9,w11,#0x0,#0x6
7101ccfee0  sturh w9,[x29, #-0x5e]
7101ccfee4  orr w9,wzr,#0x6
7101ccfee8  cmp w8,#0x6
7101ccfeec  b.cc 0x7101cd03ac
7101ccfef0  ldrb w12,[x10]
7101ccfef4  cbz w12,0x7101cd03ac
7101ccfef8  tbnz w12,#0x7,0x7101ccff88
7101ccfefc  add x11,x10,#0x1
7101ccff00  and w9,w12,#0x7f
7101ccff04  b 0x7101cd00b0
7101ccff08  ldrb w13,[x10, #0x1]
7101ccff0c  and w9,w12,#0xe0
7101ccff10  cmp w9,#0xc0
7101ccff14  b.ne 0x7101ccffa8
7101ccff18  and w9,w13,#0x3f
7101ccff1c  add x11,x10,#0x2
7101ccff20  bfm w9,w12,#0x1a,#0x5
7101ccff24  b 0x7101ccffc0
7101ccff28  ldrb w13,[x10, #0x1]
7101ccff2c  and w9,w12,#0xe0
7101ccff30  cmp w9,#0xc0
7101ccff34  b.ne 0x7101ccffe4
7101ccff38  and w9,w13,#0x3f
7101ccff3c  add x11,x10,#0x2
7101ccff40  bfm w9,w12,#0x1a,#0x5
7101ccff44  b 0x7101ccfffc
7101ccff48  ldrb w13,[x10, #0x1]
7101ccff4c  and w9,w12,#0xe0
7101ccff50  cmp w9,#0xc0
7101ccff54  b.ne 0x7101cd0020
7101ccff58  and w9,w13,#0x3f
7101ccff5c  add x11,x10,#0x2
7101ccff60  bfm w9,w12,#0x1a,#0x5
7101ccff64  b 0x7101cd0038
7101ccff68  ldrb w13,[x10, #0x1]
7101ccff6c  and w9,w12,#0xe0
7101ccff70  cmp w9,#0xc0
7101ccff74  b.ne 0x7101cd005c
7101ccff78  and w9,w13,#0x3f
7101ccff7c  add x11,x10,#0x2
7101ccff80  bfm w9,w12,#0x1a,#0x5
7101ccff84  b 0x7101cd0074
7101ccff88  ldrb w13,[x10, #0x1]
7101ccff8c  and w9,w12,#0xe0
7101ccff90  cmp w9,#0xc0
7101ccff94  b.ne 0x7101cd0098
7101ccff98  and w9,w13,#0x3f
7101ccff9c  add x11,x10,#0x2
7101ccffa0  bfm w9,w12,#0x1a,#0x5
7101ccffa4  b 0x7101cd00b0
7101ccffa8  add x11,x10,#0x3
7101ccffac  ldrb w10,[x10, #0x2]
7101ccffb0  lsl w9,w12,#0xc
7101ccffb4  and w12,w13,#0x3f
7101ccffb8  bfm w9,w12,#0x1a,#0x5
7101ccffbc  bfxil w9,w10,#0x0,#0x6
7101ccffc0  sturh w9,[x29, #-0x5c]
7101ccffc4  orr w9,wzr,#0x7
7101ccffc8  cmp w8,#0x7
7101ccffcc  b.cc 0x7101cd017c
7101ccffd0  ldrb w8,[x11]
7101ccffd4  cbz w8,0x7101cd017c
7101ccffd8  tbnz w8,#0x7,0x7101cd00d4
7101ccffdc  and w9,w8,#0x7f
7101ccffe0  b 0x7101cd0174
7101ccffe4  add x11,x10,#0x3
7101ccffe8  ldrb w10,[x10, #0x2]
7101ccffec  lsl w9,w12,#0xc
7101ccfff0  and w12,w13,#0x3f
7101ccfff4  bfm w9,w12,#0x1a,#0x5
7101ccfff8  bfxil w9,w10,#0x0,#0x6
7101ccfffc  sturh w9,[x29, #-0x5c]
7101cd0000  orr w9,wzr,#0x7
7101cd0004  cmp w8,#0x7
7101cd0008  b.cc 0x7101cd0254
7101cd000c  ldrb w8,[x11]
7101cd0010  cbz w8,0x7101cd0254
7101cd0014  tbnz w8,#0x7,0x7101cd00f0
7101cd0018  and w9,w8,#0x7f
7101cd001c  b 0x7101cd024c
7101cd0020  add x11,x10,#0x3
7101cd0024  ldrb w10,[x10, #0x2]
7101cd0028  lsl w9,w12,#0xc
7101cd002c  and w12,w13,#0x3f
7101cd0030  bfm w9,w12,#0x1a,#0x5
7101cd0034  bfxil w9,w10,#0x0,#0x6
7101cd0038  sturh w9,[x29, #-0x5c]
7101cd003c  orr w9,wzr,#0x7
7101cd0040  cmp w8,#0x7
7101cd0044  b.cc 0x7101cd02c0
7101cd0048  ldrb w8,[x11]
7101cd004c  cbz w8,0x7101cd02c0
7101cd0050  tbnz w8,#0x7,0x7101cd010c
7101cd0054  and w9,w8,#0x7f
7101cd0058  b 0x7101cd02b8
7101cd005c  add x11,x10,#0x3
7101cd0060  ldrb w10,[x10, #0x2]
7101cd0064  lsl w9,w12,#0xc
7101cd0068  and w12,w13,#0x3f
7101cd006c  bfm w9,w12,#0x1a,#0x5
7101cd0070  bfxil w9,w10,#0x0,#0x6
7101cd0074  sturh w9,[x29, #-0x5c]
7101cd0078  orr w9,wzr,#0x7
7101cd007c  cmp w8,#0x7
7101cd0080  b.cc 0x7101cd0328
7101cd0084  ldrb w8,[x11]
7101cd0088  cbz w8,0x7101cd0328
7101cd008c  tbnz w8,#0x7,0x7101cd0128
7101cd0090  and w9,w8,#0x7f
7101cd0094  b 0x7101cd0320
7101cd0098  add x11,x10,#0x3
7101cd009c  ldrb w10,[x10, #0x2]
7101cd00a0  lsl w9,w12,#0xc
7101cd00a4  and w12,w13,#0x3f
7101cd00a8  bfm w9,w12,#0x1a,#0x5
7101cd00ac  bfxil w9,w10,#0x0,#0x6
7101cd00b0  sturh w9,[x29, #-0x5c]
7101cd00b4  orr w9,wzr,#0x7
7101cd00b8  cmp w8,#0x7
7101cd00bc  b.cc 0x7101cd03ac
7101cd00c0  ldrb w8,[x11]
7101cd00c4  cbz w8,0x7101cd03ac
7101cd00c8  tbnz w8,#0x7,0x7101cd0144
7101cd00cc  and w9,w8,#0x7f
7101cd00d0  b 0x7101cd03a4
7101cd00d4  ldrb w10,[x11, #0x1]
7101cd00d8  and w9,w8,#0xe0
7101cd00dc  cmp w9,#0xc0
7101cd00e0  b.ne 0x7101cd0160
7101cd00e4  and w9,w10,#0x3f
7101cd00e8  bfm w9,w8,#0x1a,#0x5
7101cd00ec  b 0x7101cd0174
7101cd00f0  ldrb w10,[x11, #0x1]
7101cd00f4  and w9,w8,#0xe0
7101cd00f8  cmp w9,#0xc0
7101cd00fc  b.ne 0x7101cd0238
7101cd0100  and w9,w10,#0x3f
7101cd0104  bfm w9,w8,#0x1a,#0x5
7101cd0108  b 0x7101cd024c
7101cd010c  ldrb w10,[x11, #0x1]
7101cd0110  and w9,w8,#0xe0
7101cd0114  cmp w9,#0xc0
7101cd0118  b.ne 0x7101cd02a4
7101cd011c  and w9,w10,#0x3f
7101cd0120  bfm w9,w8,#0x1a,#0x5
7101cd0124  b 0x7101cd02b8
7101cd0128  ldrb w10,[x11, #0x1]
7101cd012c  and w9,w8,#0xe0
7101cd0130  cmp w9,#0xc0
7101cd0134  b.ne 0x7101cd030c
7101cd0138  and w9,w10,#0x3f
7101cd013c  bfm w9,w8,#0x1a,#0x5
7101cd0140  b 0x7101cd0320
7101cd0144  ldrb w10,[x11, #0x1]
7101cd0148  and w9,w8,#0xe0
7101cd014c  cmp w9,#0xc0
7101cd0150  b.ne 0x7101cd0390
7101cd0154  and w9,w10,#0x3f
7101cd0158  bfm w9,w8,#0x1a,#0x5
7101cd015c  b 0x7101cd03a4
7101cd0160  ldrb w11,[x11, #0x2]
7101cd0164  lsl w9,w8,#0xc
7101cd0168  and w8,w10,#0x3f
7101cd016c  bfm w9,w8,#0x1a,#0x5
7101cd0170  bfxil w9,w11,#0x0,#0x6
7101cd0174  sturh w9,[x29, #-0x5a]
7101cd0178  mov w9,#0x8
7101cd017c  sub x8,x29,#0x68
7101cd0180  sub x0,x29,#0x50
7101cd0184  mov w1,#0x1
7101cd0188  sub x2,x29,#0x68
7101cd018c  strh wzr,[x8, x9, LSL #0x1]
7101cd0190  sturh wzr,[x29, #-0x58]
7101cd0194  bl 0x710377a310
7101cd0198  ldur x0,[x29, #-0x48]
7101cd019c  adrp x22,0x710523d000
7101cd01a0  add x22,x22,#0x9a8
7101cd01a4  stp x22,xzr,[x29, #-0x50]
7101cd01a8  cbz x0,0x7101cd01b0
7101cd01ac  bl 0x710392eb40
7101cd01b0  ldr x8,[x20, #0xf0]
7101cd01b4  ldr x24,[x8]
7101cd01b8  fmov s8,0x3f800000
7101cd01bc  mov v0.16B,v8.16B
7101cd01c0  ldr x0,[x24, #0x10]
7101cd01c4  adrp x1,0x710435b000
7101cd01c8  add x1,x1,#0x8f6
7101cd01cc  add x21,x24,#0x8
7101cd01d0  bl 0x7103778300
7101cd01d4  ldr x0,[x24, #0x10]
7101cd01d8  mov v0.16B,v8.16B
7101cd01dc  adrp x1,0x710433a000
7101cd01e0  add x1,x1,#0x322
7101cd01e4  bl 0x7103778300
7101cd01e8  adrp x1,0x71042e7000
7101cd01ec  add x1,x1,#0x3e2
7101cd01f0  sub x8,x29,#0x68
7101cd01f4  mov x0,x21
7101cd01f8  bl 0x7103776910
7101cd01fc  adrp x8,0x7105325000
7101cd0200  ldr x8,[x8, #0xcd0]
7101cd0204  ldr x1,[sp, #0x8]
7101cd0208  sub x2,x29,#0x68
7101cd020c  ldr x0,[x8, #0x8]
7101cd0210  bl 0x7101cedc80
7101cd0214  ldrb w8,[sp, #0x1c0]
7101cd0218  cmp w8,#0xc
7101cd021c  orr w9,wzr,#0xc
7101cd0220  csel w2,w8,w9,cc
7101cd0224  adrp x1,0x71043f0000
7101cd0228  add x1,x1,#0xb8f
7101cd022c  mov x0,x21
7101cd0230  bl 0x7103778430
7101cd0234  b 0x7101cd0444
7101cd0238  ldrb w11,[x11, #0x2]
7101cd023c  lsl w9,w8,#0xc
7101cd0240  and w8,w10,#0x3f
7101cd0244  bfm w9,w8,#0x1a,#0x5
7101cd0248  bfxil w9,w11,#0x0,#0x6
7101cd024c  sturh w9,[x29, #-0x5a]
7101cd0250  mov w9,#0x8
7101cd0254  sub x8,x29,#0x68
7101cd0258  sub x0,x29,#0x50
7101cd025c  mov w1,#0x1
7101cd0260  sub x2,x29,#0x68
7101cd0264  strh wzr,[x8, x9, LSL #0x1]
7101cd0268  sturh wzr,[x29, #-0x58]
7101cd026c  bl 0x710377a310
7101cd0270  ldur x0,[x29, #-0x48]
7101cd0274  adrp x22,0x710523d000
7101cd0278  add x22,x22,#0x9a8
7101cd027c  stp x22,xzr,[x29, #-0x50]
7101cd0280  cbz x0,0x7101cd0288
7101cd0284  bl 0x710392eb40
7101cd0288  ldr x8,[x20, #0xf0]
7101cd028c  ldr x24,[x8]
7101cd0290  ldr x0,[x24, #0x10]
7101cd0294  add x21,x24,#0x8
7101cd0298  adrp x1,0x71042c4000
7101cd029c  add x1,x1,#0xf13
7101cd02a0  b 0x7101cd03f8
7101cd02a4  ldrb w11,[x11, #0x2]
7101cd02a8  lsl w9,w8,#0xc
7101cd02ac  and w8,w10,#0x3f
7101cd02b0  bfm w9,w8,#0x1a,#0x5
7101cd02b4  bfxil w9,w11,#0x0,#0x6
7101cd02b8  sturh w9,[x29, #-0x5a]
7101cd02bc  mov w9,#0x8
7101cd02c0  sub x8,x29,#0x68
7101cd02c4  sub x0,x29,#0x50
7101cd02c8  mov w1,#0x1
7101cd02cc  sub x2,x29,#0x68
7101cd02d0  strh wzr,[x8, x9, LSL #0x1]
7101cd02d4  sturh wzr,[x29, #-0x58]
7101cd02d8  bl 0x710377a310
7101cd02dc  ldur x0,[x29, #-0x48]
7101cd02e0  adrp x8,0x710523d000
7101cd02e4  add x8,x8,#0x9a8
7101cd02e8  stp x8,xzr,[x29, #-0x50]
7101cd02ec  cbz x0,0x7101cd02f4
7101cd02f0  bl 0x710392eb40
7101cd02f4  ldr x8,[x20, #0xf0]
7101cd02f8  ldr x8,[x8]
7101cd02fc  ldr x0,[x8, #0x10]
7101cd0300  adrp x1,0x710439d000
7101cd0304  add x1,x1,#0x5d0
7101cd0308  b 0x7101cd0370
7101cd030c  ldrb w11,[x11, #0x2]
7101cd0310  lsl w9,w8,#0xc
7101cd0314  and w8,w10,#0x3f
7101cd0318  bfm w9,w8,#0x1a,#0x5
7101cd031c  bfxil w9,w11,#0x0,#0x6
7101cd0320  sturh w9,[x29, #-0x5a]
7101cd0324  mov w9,#0x8
7101cd0328  sub x8,x29,#0x68
7101cd032c  sub x0,x29,#0x50
7101cd0330  mov w1,#0x1
7101cd0334  sub x2,x29,#0x68
7101cd0338  strh wzr,[x8, x9, LSL #0x1]
7101cd033c  sturh wzr,[x29, #-0x58]
7101cd0340  bl 0x710377a310
7101cd0344  ldur x0,[x29, #-0x48]
7101cd0348  adrp x8,0x710523d000
7101cd034c  add x8,x8,#0x9a8
7101cd0350  stp x8,xzr,[x29, #-0x50]
7101cd0354  cbz x0,0x7101cd035c
7101cd0358  bl 0x710392eb40
7101cd035c  ldr x8,[x20, #0xf0]
7101cd0360  ldr x8,[x8]
7101cd0364  ldr x0,[x8, #0x10]
7101cd0368  adrp x1,0x71042f8000
7101cd036c  add x1,x1,#0x3d7
7101cd0370  fmov s0,0x3f800000
7101cd0374  bl 0x7103778300
7101cd0378  add x8,sp,#0x8
7101cd037c  add x2,x8,#0x80
7101cd0380  add x1,sp,#0x8
7101cd0384  mov x0,x20
7101cd0388  bl 0x7101ccdac0
7101cd038c  b 0x7101cd0454
7101cd0390  ldrb w11,[x11, #0x2]
7101cd0394  lsl w9,w8,#0xc
7101cd0398  and w8,w10,#0x3f
7101cd039c  bfm w9,w8,#0x1a,#0x5
7101cd03a0  bfxil w9,w11,#0x0,#0x6
7101cd03a4  sturh w9,[x29, #-0x5a]
7101cd03a8  mov w9,#0x8
7101cd03ac  sub x8,x29,#0x68
7101cd03b0  sub x0,x29,#0x50
7101cd03b4  mov w1,#0x1
7101cd03b8  sub x2,x29,#0x68
7101cd03bc  strh wzr,[x8, x9, LSL #0x1]
7101cd03c0  sturh wzr,[x29, #-0x58]
7101cd03c4  bl 0x710377a310
7101cd03c8  ldur x0,[x29, #-0x48]
7101cd03cc  adrp x22,0x710523d000
7101cd03d0  add x22,x22,#0x9a8
7101cd03d4  stp x22,xzr,[x29, #-0x50]
7101cd03d8  cbz x0,0x7101cd03e0
7101cd03dc  bl 0x710392eb40
7101cd03e0  ldr x8,[x20, #0xf0]
7101cd03e4  ldr x24,[x8]
7101cd03e8  ldr x0,[x24, #0x10]
7101cd03ec  add x21,x24,#0x8
7101cd03f0  adrp x1,0x71043e0000
7101cd03f4  add x1,x1,#0x2dd
7101cd03f8  fmov s8,0x3f800000
7101cd03fc  mov v0.16B,v8.16B
7101cd0400  bl 0x7103778300
7101cd0404  ldr x0,[x24, #0x10]
7101cd0408  mov v0.16B,v8.16B
7101cd040c  adrp x1,0x71042e7000
7101cd0410  add x1,x1,#0x3fa
7101cd0414  bl 0x7103778300
7101cd0418  adrp x1,0x7104270000
7101cd041c  add x1,x1,#0x100
7101cd0420  sub x8,x29,#0x68
7101cd0424  mov x0,x21
7101cd0428  bl 0x7103776910
7101cd042c  adrp x8,0x7105325000
7101cd0430  ldr x8,[x8, #0xcd0]
7101cd0434  ldr x1,[sp, #0x8]
7101cd0438  sub x2,x29,#0x68
7101cd043c  ldr x0,[x8, #0x8]
7101cd0440  bl 0x7101cedc80
7101cd0444  ldur x0,[x29, #-0x60]
7101cd0448  stp x22,xzr,[x29, #-0x68]
7101cd044c  cbz x0,0x7101cd0454
7101cd0450  bl 0x710392eb40
7101cd0454  ldrsw x8,[x20, #0xd4]
7101cd0458  cmp w8,#0x13
7101cd045c  b.cs 0x7101cd04bc
7101cd0460  add x8,x20,x8, LSL #0x2
7101cd0464  mov w9,#0x2
7101cd0468  str w9,[x8, #0x88]
7101cd046c  ldr x8,[x23]
7101cd0470  ldr x8,[x8, #0x80]
7101cd0474  ldr w8,[x8, #0xd8]
7101cd0478  cmp w8,#0x4
7101cd047c  b.ne 0x7101cd049c
7101cd0480  ldrsw x8,[x19, #0xd4]
7101cd0484  cmp w8,#0x13
7101cd0488  b.cs 0x7101cd04bc
7101cd048c  add x8,x19,x8, LSL #0x2
7101cd0490  ldr w9,[x8, #0x88]
7101cd0494  add w9,w9,#0x1
7101cd0498  str w9,[x8, #0x88]
7101cd049c  add sp,sp,#0xaf0
7101cd04a0  ldp x29,x30,[sp, #0x40]
7101cd04a4  ldr x28,[sp, #0x8]
7101cd04a8  ldp x20,x19,[sp, #0x30]
7101cd04ac  ldp x22,x21,[sp, #0x20]
7101cd04b0  ldp x24,x23,[sp, #0x10]
7101cd04b4  ldr d8,[sp], #0x50
7101cd04b8  ret
7101cd04bc  bl 0x71039c2650
