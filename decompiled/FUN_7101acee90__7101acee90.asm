// addr:      7101acee90
// offset:    0x1acee90
// name:      FUN_7101acee90
// mangled:   
// size:      6684

7101acee90  str x28,[sp, #-0x60]!
7101acee94  stp x26,x25,[sp, #0x10]
7101acee98  stp x24,x23,[sp, #0x20]
7101acee9c  stp x22,x21,[sp, #0x30]
7101aceea0  stp x20,x19,[sp, #0x40]
7101aceea4  stp x29,x30,[sp, #0x50]
7101aceea8  add x29,sp,#0x50
7101aceeac  sub sp,sp,#0x4d0
7101aceeb0  mov w24,#0x101
7101aceeb4  mov w8,#0x1
7101aceeb8  mov w9,#0x1000
7101aceebc  movk w9,#0x1, LSL #16
7101aceec0  strh w24,[x0, #0x8]
7101aceec4  strb w8,[x0, #0x10]
7101aceec8  str w8,[x0, #0x14]
7101aceecc  strb wzr,[x0, #0x18]
7101aceed0  str w9,[x0, #0xc]
7101aceed4  ldr x9,[x1]
7101aceed8  ldr x9,[x9]
7101aceedc  ldr x9,[x9]
7101aceee0  ldr x10,[x9, #0x600]
7101aceee4  str w8,[x10, #0x494]
7101aceee8  ldr x8,[x9, #0x608]
7101aceeec  ldr x9,[x9, #0x610]
7101aceef0  cmp x8,x9
7101aceef4  b.eq 0x7101acef64
7101aceef8  sub x10,x9,#0x10
7101aceefc  sub x10,x10,x8
7101acef00  ubfx x11,x10,#0x4,#0x1c
7101acef04  add w11,w11,#0x1
7101acef08  ands x11,x11,#0x3
7101acef0c  b.eq 0x7101acef2c
7101acef10  neg x11,x11
7101acef14  mov w12,#0x1
7101acef18  ldr x13,[x8, #0x8]
7101acef1c  add x8,x8,#0x10
7101acef20  adds x11,x11,#0x1
7101acef24  str w12,[x13, #0x494]
7101acef28  b.ne 0x7101acef18
7101acef2c  cmp x10,#0x30
7101acef30  b.cc 0x7101acef64
7101acef34  mov w10,#0x1
7101acef38  ldr x11,[x8, #0x8]
7101acef3c  str w10,[x11, #0x494]
7101acef40  ldr x11,[x8, #0x18]
7101acef44  str w10,[x11, #0x494]
7101acef48  ldr x11,[x8, #0x28]
7101acef4c  str w10,[x11, #0x494]
7101acef50  ldr x11,[x8, #0x38]
7101acef54  add x8,x8,#0x40
7101acef58  cmp x9,x8
7101acef5c  str w10,[x11, #0x494]
7101acef60  b.ne 0x7101acef38
7101acef64  ldr x21,[x1]
7101acef68  mov w1,wzr
7101acef6c  ldr x20,[x21]
7101acef70  mov x19,x20
7101acef74  ldr x23,[x0, #0x20]
7101acef78  ldr x0,[x19], #0x8
7101acef7c  bl 0x71037760f0
7101acef80  add x0,x23,#0x120
7101acef84  cmp x0,x19
7101acef88  b.eq 0x7101aceffc
7101acef8c  ldr x8,[x20, #0x10]
7101acef90  ldr x8,[x8]
7101acef94  ldr x9,[x23, #0x128]
7101acef98  str x8,[x9]
7101acef9c  ldr x8,[x20, #0x10]
7101acefa0  ldr x8,[x8, #0x8]
7101acefa4  ldr x9,[x23, #0x128]
7101acefa8  str x8,[x9, #0x8]
7101acefac  ldr x9,[x20, #0x10]
7101acefb0  ldr x8,[x23, #0x128]
7101acefb4  cmp x8,x9
7101acefb8  b.eq 0x7101aceffc
7101acefbc  ldr x10,[x9, #0x18]
7101acefc0  ldr x10,[x10]
7101acefc4  ldr x11,[x8, #0x18]
7101acefc8  str x10,[x11]
7101acefcc  ldr x10,[x9, #0x18]
7101acefd0  ldr x10,[x10, #0x8]
7101acefd4  ldr x11,[x8, #0x18]
7101acefd8  str x10,[x11, #0x8]
7101acefdc  ldr x10,[x9, #0x18]
7101acefe0  ldr x10,[x10, #0x10]
7101acefe4  ldr x11,[x8, #0x18]
7101acefe8  str x10,[x11, #0x10]
7101acefec  ldr x9,[x9, #0x18]
7101aceff0  ldr x9,[x9, #0x18]
7101aceff4  ldr x8,[x8, #0x18]
7101aceff8  str x9,[x8, #0x18]
7101aceffc  adrp x1,0x710424f000
7101acf000  add x1,x1,#0xc67
7101acf004  sub x8,x29,#0x60
7101acf008  bl 0x7103776640
7101acf00c  sub x0,x29,#0x60
7101acf010  bl 0x710337d360
7101acf014  ldur x20,[x29, #-0x58]
7101acf018  adrp x22,0x710523d000
7101acf01c  add x22,x22,#0x988
7101acf020  stp x22,xzr,[x29, #-0x60]
7101acf024  cbz x20,0x7101acf048
7101acf028  ldr x0,[x20, #0x18]
7101acf02c  adrp x8,0x710523d000
7101acf030  add x8,x8,#0x9a8
7101acf034  stp x8,xzr,[x20, #0x10]
7101acf038  cbz x0,0x7101acf040
7101acf03c  bl 0x710392eb40
7101acf040  mov x0,x20
7101acf044  bl 0x710392eb40
7101acf048  ldr x8,[x21]
7101acf04c  ldr x8,[x8]
7101acf050  ldr x9,[x8, #0x600]
7101acf054  mov w10,#0x20
7101acf058  str w10,[x9, #0x10]
7101acf05c  ldr x9,[x8, #0x600]
7101acf060  mov w10,#0x40
7101acf064  str w10,[x9, #0x14]
7101acf068  ldr x9,[x8, #0x600]
7101acf06c  mov w10,#0x40000
7101acf070  str w10,[x9, #0x18]
7101acf074  ldr x9,[x8, #0x600]
7101acf078  mov w10,#0x10
7101acf07c  str w10,[x9, #0x1c]
7101acf080  ldr x10,[x8, #0x600]
7101acf084  mov w9,#0x8
7101acf088  movk w9,#0x80, LSL #16
7101acf08c  str w9,[x10, #0x20]
7101acf090  ldr x8,[x8, #0x600]
7101acf094  mov w9,#0x2
7101acf098  movk w9,#0x20, LSL #16
7101acf09c  str w9,[x8, #0x24]
7101acf0a0  mov w8,#0x1
7101acf0a4  mov x25,#0x41f0000000000000
7101acf0a8  add x9,sp,#0x29b
7101acf0ac  add x0,sp,#0x390
7101acf0b0  str xzr,[sp, #0x390]
7101acf0b4  strh w24,[sp, #0x398]
7101acf0b8  strh wzr,[sp, #0x39e]
7101acf0bc  stur wzr,[x9, #0xff]
7101acf0c0  str w8,[sp, #0x3a0]
7101acf0c4  strh w8,[sp, #0x3a4]
7101acf0c8  strb w8,[sp, #0x3a6]
7101acf0cc  str x25,[sp, #0x3a8]
7101acf0d0  str wzr,[sp, #0x3b0]
7101acf0d4  str xzr,[sp, #0x3e0]
7101acf0d8  str xzr,[sp, #0x410]
7101acf0dc  str xzr,[sp, #0x440]
7101acf0e0  str xzr,[sp, #0x470]
7101acf0e4  str xzr,[sp, #0x4a0]
7101acf0e8  str wzr,[sp, #0x4b0]
7101acf0ec  bl 0x710337df20
7101acf0f0  add x0,sp,#0x260
7101acf0f4  add x1,sp,#0x390
7101acf0f8  bl 0x7101989b70
7101acf0fc  add x20,x23,#0x138
7101acf100  mov w8,#0x43160000
7101acf104  adrp x2,0x710437c000
7101acf108  add x2,x2,#0xb65
7101acf10c  add x3,sp,#0x260
7101acf110  str w8,[sp, #0x27c]
7101acf114  mov x0,x20
7101acf118  mov x1,x19
7101acf11c  bl 0x7103770b30
7101acf120  adrp x21,0x710439d000
7101acf124  add x21,x21,#0xab9
7101acf128  mov x0,x20
7101acf12c  mov w1,wzr
7101acf130  mov x2,x21
7101acf134  bl 0x71037717d0
7101acf138  add x8,sp,#0x130
7101acf13c  mov x0,x19
7101acf140  mov x1,x21
7101acf144  bl 0x7103776640
7101acf148  ldr x21,[sp, #0x138]
7101acf14c  fmov s0,0x3f800000
7101acf150  adrp x1,0x71043f0000
7101acf154  add x1,x1,#0x569
7101acf158  mov x0,x21
7101acf15c  bl 0x7103778300
7101acf160  stp x22,xzr,[sp, #0x130]
7101acf164  cbz x21,0x7101acf188
7101acf168  ldr x0,[x21, #0x18]
7101acf16c  adrp x8,0x710523d000
7101acf170  add x8,x8,#0x9a8
7101acf174  stp x8,xzr,[x21, #0x10]
7101acf178  cbz x0,0x7101acf180
7101acf17c  bl 0x710392eb40
7101acf180  mov x0,x21
7101acf184  bl 0x710392eb40
7101acf188  adrp x2,0x710435b000
7101acf18c  add x2,x2,#0xd3c
7101acf190  mov w1,#0x1
7101acf194  mov x0,x20
7101acf198  bl 0x71037717d0
7101acf19c  adrp x2,0x71042b4000
7101acf1a0  add x2,x2,#0x950
7101acf1a4  mov w1,#0x2
7101acf1a8  mov x0,x20
7101acf1ac  bl 0x71037717d0
7101acf1b0  adrp x2,0x7104281000
7101acf1b4  add x2,x2,#0x191
7101acf1b8  orr w1,wzr,#0x3
7101acf1bc  mov x0,x20
7101acf1c0  bl 0x71037717d0
7101acf1c4  ldr x8,[x20]
7101acf1c8  ldr x9,[x8, #0x1b8]
7101acf1cc  cbz x9,0x7101acf3a0
7101acf1d0  add x8,x8,#0x1b8
7101acf1d4  mov x10,x8
7101acf1d8  mov x11,x9
7101acf1dc  ldr w12,[x11, #0x20]
7101acf1e0  cmp w12,#0x0
7101acf1e4  cset w12,lt
7101acf1e8  csel x10,x10,x11,lt
7101acf1ec  ldr x11,[x11, w12, UXTW #0x3]
7101acf1f0  cbnz x11,0x7101acf1dc
7101acf1f4  cmp x10,x8
7101acf1f8  b.eq 0x7101acf248
7101acf1fc  ldr w11,[x10, #0x20]
7101acf200  cmp w11,#0x0
7101acf204  b.gt 0x7101acf248
7101acf208  ldr x21,[x10, #0x28]
7101acf20c  cbz x21,0x7101acf248
7101acf210  ldr x8,[x21]
7101acf214  ldr x8,[x8, #0x1f8]
7101acf218  mov w1,#0x1
7101acf21c  mov x0,x21
7101acf220  blr x8
7101acf224  ldr x8,[x21]
7101acf228  ldr x8,[x8, #0x388]
7101acf22c  mov x0,x21
7101acf230  mov w1,wzr
7101acf234  mov w2,wzr
7101acf238  blr x8
7101acf23c  ldr x9,[x20]
7101acf240  add x8,x9,#0x1b8
7101acf244  ldr x9,[x9, #0x1b8]
7101acf248  cbz x9,0x7101acf3a0
7101acf24c  mov x10,x8
7101acf250  mov x11,x9
7101acf254  ldr w12,[x11, #0x20]
7101acf258  cmp w12,#0x1
7101acf25c  cset w12,lt
7101acf260  csel x10,x10,x11,lt
7101acf264  ldr x11,[x11, w12, UXTW #0x3]
7101acf268  cbnz x11,0x7101acf254
7101acf26c  cmp x10,x8
7101acf270  b.eq 0x7101acf2c0
7101acf274  ldr w11,[x10, #0x20]
7101acf278  cmp w11,#0x1
7101acf27c  b.gt 0x7101acf2c0
7101acf280  ldr x21,[x10, #0x28]
7101acf284  cbz x21,0x7101acf2c0
7101acf288  ldr x8,[x21]
7101acf28c  ldr x8,[x8, #0x1f8]
7101acf290  mov w1,#0x1
7101acf294  mov x0,x21
7101acf298  blr x8
7101acf29c  ldr x8,[x21]
7101acf2a0  ldr x8,[x8, #0x388]
7101acf2a4  mov x0,x21
7101acf2a8  mov w1,wzr
7101acf2ac  mov w2,wzr
7101acf2b0  blr x8
7101acf2b4  ldr x9,[x20]
7101acf2b8  add x8,x9,#0x1b8
7101acf2bc  ldr x9,[x9, #0x1b8]
7101acf2c0  cbz x9,0x7101acf3a0
7101acf2c4  mov x10,x8
7101acf2c8  mov x11,x9
7101acf2cc  ldr w12,[x11, #0x20]
7101acf2d0  cmp w12,#0x2
7101acf2d4  cset w12,lt
7101acf2d8  csel x10,x10,x11,lt
7101acf2dc  ldr x11,[x11, w12, UXTW #0x3]
7101acf2e0  cbnz x11,0x7101acf2cc
7101acf2e4  cmp x10,x8
7101acf2e8  b.eq 0x7101acf338
7101acf2ec  ldr w11,[x10, #0x20]
7101acf2f0  cmp w11,#0x2
7101acf2f4  b.gt 0x7101acf338
7101acf2f8  ldr x21,[x10, #0x28]
7101acf2fc  cbz x21,0x7101acf338
7101acf300  ldr x8,[x21]
7101acf304  ldr x8,[x8, #0x1f8]
7101acf308  mov w1,#0x1
7101acf30c  mov x0,x21
7101acf310  blr x8
7101acf314  ldr x8,[x21]
7101acf318  ldr x8,[x8, #0x388]
7101acf31c  mov x0,x21
7101acf320  mov w1,wzr
7101acf324  mov w2,wzr
7101acf328  blr x8
7101acf32c  ldr x9,[x20]
7101acf330  add x8,x9,#0x1b8
7101acf334  ldr x9,[x9, #0x1b8]
7101acf338  cbz x9,0x7101acf3a0
7101acf33c  mov x10,x8
7101acf340  ldr w11,[x9, #0x20]
7101acf344  cmp w11,#0x3
7101acf348  cset w11,lt
7101acf34c  csel x10,x10,x9,lt
7101acf350  ldr x9,[x9, w11, UXTW #0x3]
7101acf354  cbnz x9,0x7101acf340
7101acf358  cmp x10,x8
7101acf35c  b.eq 0x7101acf3a0
7101acf360  ldr w8,[x10, #0x20]
7101acf364  cmp w8,#0x3
7101acf368  b.gt 0x7101acf3a0
7101acf36c  ldr x20,[x10, #0x28]
7101acf370  cbz x20,0x7101acf3a0
7101acf374  ldr x8,[x20]
7101acf378  ldr x8,[x8, #0x1f8]
7101acf37c  mov w1,#0x1
7101acf380  mov x0,x20
7101acf384  blr x8
7101acf388  ldr x8,[x20]
7101acf38c  ldr x8,[x8, #0x388]
7101acf390  mov x0,x20
7101acf394  mov w1,wzr
7101acf398  mov w2,wzr
7101acf39c  blr x8
7101acf3a0  add x20,x23,#0x140
7101acf3a4  adrp x2,0x7104270000
7101acf3a8  add x2,x2,#0x5bf
7101acf3ac  add x3,sp,#0x390
7101acf3b0  mov x0,x20
7101acf3b4  mov x1,x19
7101acf3b8  bl 0x7103770b30
7101acf3bc  adrp x2,0x710434a000
7101acf3c0  add x2,x2,#0x97a
7101acf3c4  mov x0,x20
7101acf3c8  mov w1,wzr
7101acf3cc  bl 0x71037717d0
7101acf3d0  adrp x2,0x71043be000
7101acf3d4  add x2,x2,#0xc66
7101acf3d8  mov w1,#0x1
7101acf3dc  mov x0,x20
7101acf3e0  bl 0x71037717d0
7101acf3e4  adrp x2,0x710426f000
7101acf3e8  add x2,x2,#0xb21
7101acf3ec  mov w1,#0x2
7101acf3f0  mov x0,x20
7101acf3f4  bl 0x71037717d0
7101acf3f8  ldr x8,[x23, #0x140]
7101acf3fc  ldr x9,[x8, #0x1b8]
7101acf400  cbz x9,0x7101acf55c
7101acf404  add x8,x8,#0x1b8
7101acf408  mov x10,x8
7101acf40c  mov x11,x9
7101acf410  ldr w12,[x11, #0x20]
7101acf414  cmp w12,#0x0
7101acf418  cset w12,lt
7101acf41c  csel x10,x10,x11,lt
7101acf420  ldr x11,[x11, w12, UXTW #0x3]
7101acf424  cbnz x11,0x7101acf410
7101acf428  cmp x10,x8
7101acf42c  b.eq 0x7101acf47c
7101acf430  ldr w11,[x10, #0x20]
7101acf434  cmp w11,#0x0
7101acf438  b.gt 0x7101acf47c
7101acf43c  ldr x21,[x10, #0x28]
7101acf440  cbz x21,0x7101acf47c
7101acf444  ldr x8,[x21]
7101acf448  ldr x8,[x8, #0x1f8]
7101acf44c  mov w1,#0x1
7101acf450  mov x0,x21
7101acf454  blr x8
7101acf458  ldr x8,[x21]
7101acf45c  ldr x8,[x8, #0x388]
7101acf460  mov x0,x21
7101acf464  mov w1,wzr
7101acf468  mov w2,wzr
7101acf46c  blr x8
7101acf470  ldr x9,[x20]
7101acf474  add x8,x9,#0x1b8
7101acf478  ldr x9,[x9, #0x1b8]
7101acf47c  cbz x9,0x7101acf55c
7101acf480  mov x10,x8
7101acf484  mov x11,x9
7101acf488  ldr w12,[x11, #0x20]
7101acf48c  cmp w12,#0x1
7101acf490  cset w12,lt
7101acf494  csel x10,x10,x11,lt
7101acf498  ldr x11,[x11, w12, UXTW #0x3]
7101acf49c  cbnz x11,0x7101acf488
7101acf4a0  cmp x10,x8
7101acf4a4  b.eq 0x7101acf4f4
7101acf4a8  ldr w11,[x10, #0x20]
7101acf4ac  cmp w11,#0x1
7101acf4b0  b.gt 0x7101acf4f4
7101acf4b4  ldr x21,[x10, #0x28]
7101acf4b8  cbz x21,0x7101acf4f4
7101acf4bc  ldr x8,[x21]
7101acf4c0  ldr x8,[x8, #0x1f8]
7101acf4c4  mov w1,#0x1
7101acf4c8  mov x0,x21
7101acf4cc  blr x8
7101acf4d0  ldr x8,[x21]
7101acf4d4  ldr x8,[x8, #0x388]
7101acf4d8  mov x0,x21
7101acf4dc  mov w1,wzr
7101acf4e0  mov w2,wzr
7101acf4e4  blr x8
7101acf4e8  ldr x9,[x20]
7101acf4ec  add x8,x9,#0x1b8
7101acf4f0  ldr x9,[x9, #0x1b8]
7101acf4f4  cbz x9,0x7101acf55c
7101acf4f8  mov x10,x8
7101acf4fc  ldr w11,[x9, #0x20]
7101acf500  cmp w11,#0x2
7101acf504  cset w11,lt
7101acf508  csel x10,x10,x9,lt
7101acf50c  ldr x9,[x9, w11, UXTW #0x3]
7101acf510  cbnz x9,0x7101acf4fc
7101acf514  cmp x10,x8
7101acf518  b.eq 0x7101acf55c
7101acf51c  ldr w8,[x10, #0x20]
7101acf520  cmp w8,#0x2
7101acf524  b.gt 0x7101acf55c
7101acf528  ldr x20,[x10, #0x28]
7101acf52c  cbz x20,0x7101acf55c
7101acf530  ldr x8,[x20]
7101acf534  ldr x8,[x8, #0x1f8]
7101acf538  mov w1,#0x1
7101acf53c  mov x0,x20
7101acf540  blr x8
7101acf544  ldr x8,[x20]
7101acf548  ldr x8,[x8, #0x388]
7101acf54c  mov x0,x20
7101acf550  mov w1,wzr
7101acf554  mov w2,wzr
7101acf558  blr x8
7101acf55c  add x20,x23,#0x130
7101acf560  adrp x2,0x71043e0000
7101acf564  add x2,x2,#0xa21
7101acf568  add x3,sp,#0x390
7101acf56c  mov x0,x20
7101acf570  mov x1,x19
7101acf574  bl 0x7103770b30
7101acf578  adrp x2,0x7104401000
7101acf57c  add x2,x2,#0xdad
7101acf580  mov x0,x20
7101acf584  mov w1,wzr
7101acf588  bl 0x71037717d0
7101acf58c  adrp x2,0x7104308000
7101acf590  add x2,x2,#0xc5c
7101acf594  mov w1,#0x1
7101acf598  mov x0,x20
7101acf59c  mov w26,#0x1
7101acf5a0  bl 0x71037717d0
7101acf5a4  adrp x2,0x710424f000
7101acf5a8  add x2,x2,#0xd25
7101acf5ac  mov w1,#0x2
7101acf5b0  mov x0,x20
7101acf5b4  bl 0x71037717d0
7101acf5b8  adrp x2,0x710432a000
7101acf5bc  add x2,x2,#0x6e1
7101acf5c0  orr w1,wzr,#0x3
7101acf5c4  mov x0,x20
7101acf5c8  bl 0x71037717d0
7101acf5cc  adrp x2,0x710424f000
7101acf5d0  add x2,x2,#0xc67
7101acf5d4  mov w1,#0x4
7101acf5d8  mov x0,x20
7101acf5dc  bl 0x71037717d0
7101acf5e0  ldr x8,[x23, #0x130]
7101acf5e4  ldr x9,[x8, #0x1b8]
7101acf5e8  cbz x9,0x7101acf834
7101acf5ec  add x8,x8,#0x1b8
7101acf5f0  mov x10,x8
7101acf5f4  mov x11,x9
7101acf5f8  ldr w12,[x11, #0x20]
7101acf5fc  cmp w12,#0x0
7101acf600  cset w12,lt
7101acf604  csel x10,x10,x11,lt
7101acf608  ldr x11,[x11, w12, UXTW #0x3]
7101acf60c  cbnz x11,0x7101acf5f8
7101acf610  cmp x10,x8
7101acf614  b.eq 0x7101acf664
7101acf618  ldr w11,[x10, #0x20]
7101acf61c  cmp w11,#0x0
7101acf620  b.gt 0x7101acf664
7101acf624  ldr x21,[x10, #0x28]
7101acf628  cbz x21,0x7101acf664
7101acf62c  ldr x8,[x21]
7101acf630  ldr x8,[x8, #0x1f8]
7101acf634  mov w1,#0x1
7101acf638  mov x0,x21
7101acf63c  blr x8
7101acf640  ldr x8,[x21]
7101acf644  ldr x8,[x8, #0x388]
7101acf648  mov x0,x21
7101acf64c  mov w1,wzr
7101acf650  mov w2,wzr
7101acf654  blr x8
7101acf658  ldr x9,[x20]
7101acf65c  add x8,x9,#0x1b8
7101acf660  ldr x9,[x9, #0x1b8]
7101acf664  cbz x9,0x7101acf834
7101acf668  mov x10,x8
7101acf66c  mov x11,x9
7101acf670  ldr w12,[x11, #0x20]
7101acf674  cmp w12,#0x3
7101acf678  cset w12,lt
7101acf67c  csel x10,x10,x11,lt
7101acf680  ldr x11,[x11, w12, UXTW #0x3]
7101acf684  cbnz x11,0x7101acf670
7101acf688  cmp x10,x8
7101acf68c  b.eq 0x7101acf6dc
7101acf690  ldr w11,[x10, #0x20]
7101acf694  cmp w11,#0x3
7101acf698  b.gt 0x7101acf6dc
7101acf69c  ldr x21,[x10, #0x28]
7101acf6a0  cbz x21,0x7101acf6dc
7101acf6a4  ldr x8,[x21]
7101acf6a8  ldr x8,[x8, #0x1f8]
7101acf6ac  mov w1,#0x1
7101acf6b0  mov x0,x21
7101acf6b4  blr x8
7101acf6b8  ldr x8,[x21]
7101acf6bc  ldr x8,[x8, #0x388]
7101acf6c0  mov x0,x21
7101acf6c4  mov w1,wzr
7101acf6c8  mov w2,wzr
7101acf6cc  blr x8
7101acf6d0  ldr x9,[x20]
7101acf6d4  add x8,x9,#0x1b8
7101acf6d8  ldr x9,[x9, #0x1b8]
7101acf6dc  cbz x9,0x7101acf834
7101acf6e0  mov x10,x8
7101acf6e4  mov x11,x9
7101acf6e8  ldr w12,[x11, #0x20]
7101acf6ec  cmp w12,#0x2
7101acf6f0  cset w12,lt
7101acf6f4  csel x10,x10,x11,lt
7101acf6f8  ldr x11,[x11, w12, UXTW #0x3]
7101acf6fc  cbnz x11,0x7101acf6e8
7101acf700  cmp x10,x8
7101acf704  b.eq 0x7101acf754
7101acf708  ldr w11,[x10, #0x20]
7101acf70c  cmp w11,#0x2
7101acf710  b.gt 0x7101acf754
7101acf714  ldr x21,[x10, #0x28]
7101acf718  cbz x21,0x7101acf754
7101acf71c  ldr x8,[x21]
7101acf720  ldr x8,[x8, #0x1f8]
7101acf724  mov w1,#0x1
7101acf728  mov x0,x21
7101acf72c  blr x8
7101acf730  ldr x8,[x21]
7101acf734  ldr x8,[x8, #0x388]
7101acf738  mov x0,x21
7101acf73c  mov w1,wzr
7101acf740  mov w2,wzr
7101acf744  blr x8
7101acf748  ldr x9,[x20]
7101acf74c  add x8,x9,#0x1b8
7101acf750  ldr x9,[x9, #0x1b8]
7101acf754  cbz x9,0x7101acf834
7101acf758  mov x10,x8
7101acf75c  mov x11,x9
7101acf760  ldr w12,[x11, #0x20]
7101acf764  cmp w12,#0x1
7101acf768  cset w12,lt
7101acf76c  csel x10,x10,x11,lt
7101acf770  ldr x11,[x11, w12, UXTW #0x3]
7101acf774  cbnz x11,0x7101acf760
7101acf778  cmp x10,x8
7101acf77c  b.eq 0x7101acf7cc
7101acf780  ldr w11,[x10, #0x20]
7101acf784  cmp w11,#0x1
7101acf788  b.gt 0x7101acf7cc
7101acf78c  ldr x21,[x10, #0x28]
7101acf790  cbz x21,0x7101acf7cc
7101acf794  ldr x8,[x21]
7101acf798  ldr x8,[x8, #0x1f8]
7101acf79c  mov w1,#0x1
7101acf7a0  mov x0,x21
7101acf7a4  blr x8
7101acf7a8  ldr x8,[x21]
7101acf7ac  ldr x8,[x8, #0x388]
7101acf7b0  mov x0,x21
7101acf7b4  mov w1,wzr
7101acf7b8  mov w2,wzr
7101acf7bc  blr x8
7101acf7c0  ldr x9,[x20]
7101acf7c4  add x8,x9,#0x1b8
7101acf7c8  ldr x9,[x9, #0x1b8]
7101acf7cc  cbz x9,0x7101acf834
7101acf7d0  mov x10,x8
7101acf7d4  ldr w11,[x9, #0x20]
7101acf7d8  cmp w11,#0x4
7101acf7dc  cset w11,lt
7101acf7e0  csel x10,x10,x9,lt
7101acf7e4  ldr x9,[x9, w11, UXTW #0x3]
7101acf7e8  cbnz x9,0x7101acf7d4
7101acf7ec  cmp x10,x8
7101acf7f0  b.eq 0x7101acf834
7101acf7f4  ldr w8,[x10, #0x20]
7101acf7f8  cmp w8,#0x4
7101acf7fc  b.gt 0x7101acf834
7101acf800  ldr x20,[x10, #0x28]
7101acf804  cbz x20,0x7101acf834
7101acf808  ldr x8,[x20]
7101acf80c  ldr x8,[x8, #0x1f8]
7101acf810  mov w1,#0x1
7101acf814  mov x0,x20
7101acf818  blr x8
7101acf81c  ldr x8,[x20]
7101acf820  ldr x8,[x8, #0x388]
7101acf824  mov x0,x20
7101acf828  mov w1,wzr
7101acf82c  mov w2,wzr
7101acf830  blr x8
7101acf834  add x8,sp,#0x3b
7101acf838  add x0,sp,#0x130
7101acf83c  str xzr,[sp, #0x130]
7101acf840  strh w24,[sp, #0x138]
7101acf844  strh wzr,[sp, #0x13e]
7101acf848  stur wzr,[x8, #0xff]
7101acf84c  str w26,[sp, #0x140]
7101acf850  strh w26,[sp, #0x144]
7101acf854  strb w26,[sp, #0x146]
7101acf858  str x25,[sp, #0x148]
7101acf85c  str wzr,[sp, #0x150]
7101acf860  str xzr,[sp, #0x180]
7101acf864  str xzr,[sp, #0x1b0]
7101acf868  str xzr,[sp, #0x1e0]
7101acf86c  str xzr,[sp, #0x210]
7101acf870  str xzr,[sp, #0x240]
7101acf874  str wzr,[sp, #0x250]
7101acf878  bl 0x710337df20
7101acf87c  add x20,x23,#0x148
7101acf880  adrp x2,0x7104454000
7101acf884  add x2,x2,#0xd70
7101acf888  add x3,sp,#0x130
7101acf88c  mov x0,x20
7101acf890  strb w26,[sp, #0x13a]
7101acf894  mov x1,x19
7101acf898  bl 0x7103770b30
7101acf89c  adrp x2,0x71042a3000
7101acf8a0  add x2,x2,#0x84e
7101acf8a4  mov x0,x20
7101acf8a8  mov w1,wzr
7101acf8ac  bl 0x71037717d0
7101acf8b0  ldr x0,[x23, #0x148]
7101acf8b4  mov w2,#0x8
7101acf8b8  mov w3,#0x1
7101acf8bc  mov w1,wzr
7101acf8c0  bl 0x7103771930
7101acf8c4  adrp x2,0x710425f000
7101acf8c8  add x2,x2,#0xde2
7101acf8cc  mov w1,#0x1
7101acf8d0  mov x0,x20
7101acf8d4  bl 0x71037717d0
7101acf8d8  ldr x0,[x23, #0x148]
7101acf8dc  mov w2,#0x9
7101acf8e0  mov w1,#0x1
7101acf8e4  mov w3,#0x1
7101acf8e8  bl 0x7103771930
7101acf8ec  ldr x1,[x23, #0x148]
7101acf8f0  mov x0,sp
7101acf8f4  mov w2,wzr
7101acf8f8  bl 0x7103771d60
7101acf8fc  ldr x21,[sp, #0x8]
7101acf900  ldr x0,[x21]
7101acf904  cbz x0,0x7101acf91c
7101acf908  ldr x8,[x0]
7101acf90c  ldr x8,[x8, #0x268]
7101acf910  mov w1,#0x1
7101acf914  mov w2,#0x1
7101acf918  blr x8
7101acf91c  adrp x26,0x710523d000
7101acf920  add x26,x26,#0x9c8
7101acf924  stp x26,xzr,[sp]
7101acf928  cbz x21,0x7101acf934
7101acf92c  mov x0,x21
7101acf930  bl 0x710392eb40
7101acf934  ldr x1,[x20]
7101acf938  mov x0,sp
7101acf93c  mov w2,#0x1
7101acf940  bl 0x7103771d60
7101acf944  ldr x20,[sp, #0x8]
7101acf948  ldr x0,[x20]
7101acf94c  cbz x0,0x7101acf964
7101acf950  ldr x8,[x0]
7101acf954  ldr x8,[x8, #0x268]
7101acf958  mov w1,#0x1
7101acf95c  mov w2,#0x1
7101acf960  blr x8
7101acf964  stp x26,xzr,[sp]
7101acf968  cbz x20,0x7101acf974
7101acf96c  mov x0,x20
7101acf970  bl 0x710392eb40
7101acf974  ldr x0,[x23, #0x128]
7101acf978  fmov s0,0x3f800000
7101acf97c  adrp x1,0x710436c000
7101acf980  add x1,x1,#0xc36
7101acf984  bl 0x7103778300
7101acf988  ldr x0,[x23, #0x130]
7101acf98c  ldr x8,[x0]
7101acf990  ldr x8,[x8, #0x70]
7101acf994  mov w1,wzr
7101acf998  blr x8
7101acf99c  ldr x0,[x23, #0x130]
7101acf9a0  ldr x8,[x0]
7101acf9a4  ldr x8,[x8, #0x60]
7101acf9a8  mov w1,wzr
7101acf9ac  blr x8
7101acf9b0  ldr x0,[x23, #0x138]
7101acf9b4  ldr x8,[x0]
7101acf9b8  ldr x8,[x8, #0x70]
7101acf9bc  mov w1,wzr
7101acf9c0  blr x8
7101acf9c4  ldr x0,[x23, #0x138]
7101acf9c8  ldr x8,[x0]
7101acf9cc  ldr x8,[x8, #0x60]
7101acf9d0  mov w1,wzr
7101acf9d4  blr x8
7101acf9d8  ldr x0,[x23, #0x140]
7101acf9dc  ldr x8,[x0]
7101acf9e0  ldr x8,[x8, #0x70]
7101acf9e4  mov w1,wzr
7101acf9e8  blr x8
7101acf9ec  ldr x0,[x23, #0x140]
7101acf9f0  ldr x8,[x0]
7101acf9f4  ldr x8,[x8, #0x60]
7101acf9f8  mov w1,wzr
7101acf9fc  blr x8
7101acfa00  ldr x0,[x23, #0x148]
7101acfa04  ldr x8,[x0]
7101acfa08  ldr x8,[x8, #0x70]
7101acfa0c  mov w1,wzr
7101acfa10  blr x8
7101acfa14  ldr x0,[x23, #0x148]
7101acfa18  ldr x8,[x0]
7101acfa1c  ldr x8,[x8, #0x60]
7101acfa20  mov w1,wzr
7101acfa24  blr x8
7101acfa28  add x20,x23,#0x150
7101acfa2c  mov w8,#0x1
7101acfa30  mov x9,sp
7101acfa34  adrp x2,0x7104401000
7101acfa38  add x2,x2,#0xbc0
7101acfa3c  str xzr,[sp]
7101acfa40  mov x3,sp
7101acfa44  mov x0,x20
7101acfa48  strh w24,[sp, #0x8]
7101acfa4c  mov x1,x19
7101acfa50  stur wzr,[sp, #0xa]
7101acfa54  strh wzr,[sp, #0xe]
7101acfa58  str w8,[sp, #0x10]
7101acfa5c  strh w8,[sp, #0x14]
7101acfa60  add x21,x9,#0xf0
7101acfa64  strb w8,[sp, #0x16]
7101acfa68  str x25,[sp, #0x18]
7101acfa6c  str wzr,[sp, #0x20]
7101acfa70  str xzr,[sp, #0x50]
7101acfa74  str xzr,[sp, #0x80]
7101acfa78  str xzr,[sp, #0xb0]
7101acfa7c  str xzr,[sp, #0xe0]
7101acfa80  str xzr,[sp, #0x110]
7101acfa84  str wzr,[sp, #0x120]
7101acfa88  strb w8,[sp, #0xb]
7101acfa8c  bl 0x7103770b30
7101acfa90  adrp x2,0x710435b000
7101acfa94  add x2,x2,#0x46b
7101acfa98  mov x0,x20
7101acfa9c  mov w1,wzr
7101acfaa0  bl 0x71037717d0
7101acfaa4  ldr x0,[x23, #0x150]
7101acfaa8  ldr x8,[x0]
7101acfaac  ldr x8,[x8, #0x60]
7101acfab0  mov w1,#0x1
7101acfab4  blr x8
7101acfab8  ldr x0,[sp, #0x110]
7101acfabc  cmp x21,x0
7101acfac0  b.eq 0x7101acfad4
7101acfac4  cbz x0,0x7101acfae0
7101acfac8  ldr x8,[x0]
7101acfacc  ldr x8,[x8, #0x28]
7101acfad0  b 0x7101acfadc
7101acfad4  ldr x8,[x0]
7101acfad8  ldr x8,[x8, #0x20]
7101acfadc  blr x8
7101acfae0  ldr x0,[sp, #0xe0]
7101acfae4  mov x8,sp
7101acfae8  add x8,x8,#0xc0
7101acfaec  cmp x8,x0
7101acfaf0  b.eq 0x7101acfb04
7101acfaf4  cbz x0,0x7101acfb10
7101acfaf8  ldr x8,[x0]
7101acfafc  ldr x8,[x8, #0x28]
7101acfb00  b 0x7101acfb0c
7101acfb04  ldr x8,[x0]
7101acfb08  ldr x8,[x8, #0x20]
7101acfb0c  blr x8
7101acfb10  ldr x0,[sp, #0xb0]
7101acfb14  mov x8,sp
7101acfb18  add x8,x8,#0x90
7101acfb1c  cmp x8,x0
7101acfb20  b.eq 0x7101acfb34
7101acfb24  cbz x0,0x7101acfb40
7101acfb28  ldr x8,[x0]
7101acfb2c  ldr x8,[x8, #0x28]
7101acfb30  b 0x7101acfb3c
7101acfb34  ldr x8,[x0]
7101acfb38  ldr x8,[x8, #0x20]
7101acfb3c  blr x8
7101acfb40  ldr x0,[sp, #0x80]
7101acfb44  mov x8,sp
7101acfb48  add x8,x8,#0x60
7101acfb4c  cmp x8,x0
7101acfb50  b.eq 0x7101acfb64
7101acfb54  cbz x0,0x7101acfb70
7101acfb58  ldr x8,[x0]
7101acfb5c  ldr x8,[x8, #0x28]
7101acfb60  b 0x7101acfb6c
7101acfb64  ldr x8,[x0]
7101acfb68  ldr x8,[x8, #0x20]
7101acfb6c  blr x8
7101acfb70  ldr x0,[sp, #0x50]
7101acfb74  mov x8,sp
7101acfb78  add x8,x8,#0x30
7101acfb7c  cmp x8,x0
7101acfb80  b.eq 0x7101acfb94
7101acfb84  cbz x0,0x7101acfba0
7101acfb88  ldr x8,[x0]
7101acfb8c  ldr x8,[x8, #0x28]
7101acfb90  b 0x7101acfb9c
7101acfb94  ldr x8,[x0]
7101acfb98  ldr x8,[x8, #0x20]
7101acfb9c  blr x8
7101acfba0  ldr x0,[sp, #0x240]
7101acfba4  add x8,sp,#0x130
7101acfba8  add x8,x8,#0xf0
7101acfbac  cmp x8,x0
7101acfbb0  b.eq 0x7101acfbc4
7101acfbb4  cbz x0,0x7101acfbd0
7101acfbb8  ldr x8,[x0]
7101acfbbc  ldr x8,[x8, #0x28]
7101acfbc0  b 0x7101acfbcc
7101acfbc4  ldr x8,[x0]
7101acfbc8  ldr x8,[x8, #0x20]
7101acfbcc  blr x8
7101acfbd0  ldr x0,[sp, #0x210]
7101acfbd4  add x8,sp,#0x130
7101acfbd8  add x8,x8,#0xc0
7101acfbdc  cmp x8,x0
7101acfbe0  b.eq 0x7101acfbf4
7101acfbe4  cbz x0,0x7101acfc00
7101acfbe8  ldr x8,[x0]
7101acfbec  ldr x8,[x8, #0x28]
7101acfbf0  b 0x7101acfbfc
7101acfbf4  ldr x8,[x0]
7101acfbf8  ldr x8,[x8, #0x20]
7101acfbfc  blr x8
7101acfc00  ldr x0,[sp, #0x1e0]
7101acfc04  add x8,sp,#0x130
7101acfc08  add x8,x8,#0x90
7101acfc0c  cmp x8,x0
7101acfc10  b.eq 0x7101acfc24
7101acfc14  cbz x0,0x7101acfc30
7101acfc18  ldr x8,[x0]
7101acfc1c  ldr x8,[x8, #0x28]
7101acfc20  b 0x7101acfc2c
7101acfc24  ldr x8,[x0]
7101acfc28  ldr x8,[x8, #0x20]
7101acfc2c  blr x8
7101acfc30  ldr x0,[sp, #0x1b0]
7101acfc34  add x8,sp,#0x130
7101acfc38  add x8,x8,#0x60
7101acfc3c  cmp x8,x0
7101acfc40  b.eq 0x7101acfc54
7101acfc44  cbz x0,0x7101acfc60
7101acfc48  ldr x8,[x0]
7101acfc4c  ldr x8,[x8, #0x28]
7101acfc50  b 0x7101acfc5c
7101acfc54  ldr x8,[x0]
7101acfc58  ldr x8,[x8, #0x20]
7101acfc5c  blr x8
7101acfc60  ldr x0,[sp, #0x180]
7101acfc64  add x8,sp,#0x130
7101acfc68  add x8,x8,#0x30
7101acfc6c  cmp x8,x0
7101acfc70  b.eq 0x7101acfc84
7101acfc74  cbz x0,0x7101acfc90
7101acfc78  ldr x8,[x0]
7101acfc7c  ldr x8,[x8, #0x28]
7101acfc80  b 0x7101acfc8c
7101acfc84  ldr x8,[x0]
7101acfc88  ldr x8,[x8, #0x20]
7101acfc8c  blr x8
7101acfc90  ldr x0,[sp, #0x370]
7101acfc94  add x8,sp,#0x260
7101acfc98  add x8,x8,#0xf0
7101acfc9c  cmp x8,x0
7101acfca0  b.eq 0x7101acfcb4
7101acfca4  cbz x0,0x7101acfcc0
7101acfca8  ldr x8,[x0]
7101acfcac  ldr x8,[x8, #0x28]
7101acfcb0  b 0x7101acfcbc
7101acfcb4  ldr x8,[x0]
7101acfcb8  ldr x8,[x8, #0x20]
7101acfcbc  blr x8
7101acfcc0  ldr x0,[sp, #0x340]
7101acfcc4  add x8,sp,#0x260
7101acfcc8  add x8,x8,#0xc0
7101acfccc  cmp x8,x0
7101acfcd0  b.eq 0x7101acfce4
7101acfcd4  cbz x0,0x7101acfcf0
7101acfcd8  ldr x8,[x0]
7101acfcdc  ldr x8,[x8, #0x28]
7101acfce0  b 0x7101acfcec
7101acfce4  ldr x8,[x0]
7101acfce8  ldr x8,[x8, #0x20]
7101acfcec  blr x8
7101acfcf0  ldr x0,[sp, #0x310]
7101acfcf4  add x8,sp,#0x260
7101acfcf8  add x8,x8,#0x90
7101acfcfc  cmp x8,x0
7101acfd00  b.eq 0x7101acfd14
7101acfd04  cbz x0,0x7101acfd20
7101acfd08  ldr x8,[x0]
7101acfd0c  ldr x8,[x8, #0x28]
7101acfd10  b 0x7101acfd1c
7101acfd14  ldr x8,[x0]
7101acfd18  ldr x8,[x8, #0x20]
7101acfd1c  blr x8
7101acfd20  ldr x0,[sp, #0x2e0]
7101acfd24  add x8,sp,#0x260
7101acfd28  add x8,x8,#0x60
7101acfd2c  cmp x8,x0
7101acfd30  b.eq 0x7101acfd44
7101acfd34  cbz x0,0x7101acfd50
7101acfd38  ldr x8,[x0]
7101acfd3c  ldr x8,[x8, #0x28]
7101acfd40  b 0x7101acfd4c
7101acfd44  ldr x8,[x0]
7101acfd48  ldr x8,[x8, #0x20]
7101acfd4c  blr x8
7101acfd50  ldr x0,[sp, #0x2b0]
7101acfd54  add x8,sp,#0x260
7101acfd58  add x8,x8,#0x30
7101acfd5c  cmp x8,x0
7101acfd60  b.eq 0x7101acfd74
7101acfd64  cbz x0,0x7101acfd80
7101acfd68  ldr x8,[x0]
7101acfd6c  ldr x8,[x8, #0x28]
7101acfd70  b 0x7101acfd7c
7101acfd74  ldr x8,[x0]
7101acfd78  ldr x8,[x8, #0x20]
7101acfd7c  blr x8
7101acfd80  ldr x0,[sp, #0x4a0]
7101acfd84  add x8,sp,#0x390
7101acfd88  add x8,x8,#0xf0
7101acfd8c  cmp x8,x0
7101acfd90  b.eq 0x7101acfda4
7101acfd94  cbz x0,0x7101acfdb0
7101acfd98  ldr x8,[x0]
7101acfd9c  ldr x8,[x8, #0x28]
7101acfda0  b 0x7101acfdac
7101acfda4  ldr x8,[x0]
7101acfda8  ldr x8,[x8, #0x20]
7101acfdac  blr x8
7101acfdb0  ldr x0,[sp, #0x470]
7101acfdb4  add x8,sp,#0x390
7101acfdb8  add x8,x8,#0xc0
7101acfdbc  cmp x8,x0
7101acfdc0  b.eq 0x7101acfdd4
7101acfdc4  cbz x0,0x7101acfde0
7101acfdc8  ldr x8,[x0]
7101acfdcc  ldr x8,[x8, #0x28]
7101acfdd0  b 0x7101acfddc
7101acfdd4  ldr x8,[x0]
7101acfdd8  ldr x8,[x8, #0x20]
7101acfddc  blr x8
7101acfde0  ldr x0,[sp, #0x440]
7101acfde4  add x8,sp,#0x390
7101acfde8  add x8,x8,#0x90
7101acfdec  cmp x8,x0
7101acfdf0  b.eq 0x7101acfe04
7101acfdf4  cbz x0,0x7101acfe10
7101acfdf8  ldr x8,[x0]
7101acfdfc  ldr x8,[x8, #0x28]
7101acfe00  b 0x7101acfe0c
7101acfe04  ldr x8,[x0]
7101acfe08  ldr x8,[x8, #0x20]
7101acfe0c  blr x8
7101acfe10  ldr x0,[sp, #0x410]
7101acfe14  add x8,sp,#0x390
7101acfe18  add x8,x8,#0x60
7101acfe1c  cmp x8,x0
7101acfe20  b.eq 0x7101acfe34
7101acfe24  cbz x0,0x7101acfe40
7101acfe28  ldr x8,[x0]
7101acfe2c  ldr x8,[x8, #0x28]
7101acfe30  b 0x7101acfe3c
7101acfe34  ldr x8,[x0]
7101acfe38  ldr x8,[x8, #0x20]
7101acfe3c  blr x8
7101acfe40  ldr x0,[sp, #0x3e0]
7101acfe44  add x8,sp,#0x390
7101acfe48  add x8,x8,#0x30
7101acfe4c  cmp x8,x0
7101acfe50  b.eq 0x7101acfe64
7101acfe54  cbz x0,0x7101acfe70
7101acfe58  ldr x8,[x0]
7101acfe5c  ldr x8,[x8, #0x28]
7101acfe60  b 0x7101acfe6c
7101acfe64  ldr x8,[x0]
7101acfe68  ldr x8,[x8, #0x20]
7101acfe6c  blr x8
7101acfe70  adrp x1,0x7104433000
7101acfe74  add x1,x1,#0x309
7101acfe78  add x8,sp,#0x390
7101acfe7c  mov x0,x19
7101acfe80  add x20,sp,#0x390
7101acfe84  bl 0x7103776910
7101acfe88  add x8,x23,#0x238
7101acfe8c  cmp x8,x20
7101acfe90  b.eq 0x7101acfeac
7101acfe94  ldr x8,[sp, #0x398]
7101acfe98  str xzr,[sp, #0x398]
7101acfe9c  ldr x0,[x23, #0x240]
7101acfea0  str x8,[x23, #0x240]
7101acfea4  cbz x0,0x7101acfeac
7101acfea8  bl 0x710392eb40
7101acfeac  ldr x0,[sp, #0x398]
7101acfeb0  adrp x21,0x710523d000
7101acfeb4  add x21,x21,#0x9a8
7101acfeb8  str x21,[sp, #0x390]
7101acfebc  str xzr,[sp, #0x398]
7101acfec0  cbz x0,0x7101acfec8
7101acfec4  bl 0x710392eb40
7101acfec8  adrp x1,0x7104401000
7101acfecc  add x1,x1,#0x27b
7101acfed0  add x8,sp,#0x390
7101acfed4  mov x0,x19
7101acfed8  add x20,sp,#0x390
7101acfedc  bl 0x7103776910
7101acfee0  add x8,x23,#0x248
7101acfee4  cmp x8,x20
7101acfee8  b.eq 0x7101acff04
7101acfeec  ldr x8,[sp, #0x398]
7101acfef0  str xzr,[sp, #0x398]
7101acfef4  ldr x0,[x23, #0x250]
7101acfef8  str x8,[x23, #0x250]
7101acfefc  cbz x0,0x7101acff04
7101acff00  bl 0x710392eb40
7101acff04  ldr x0,[sp, #0x398]
7101acff08  str x21,[sp, #0x390]
7101acff0c  str xzr,[sp, #0x398]
7101acff10  cbz x0,0x7101acff18
7101acff14  bl 0x710392eb40
7101acff18  adrp x1,0x7104443000
7101acff1c  add x1,x1,#0x103
7101acff20  add x8,sp,#0x260
7101acff24  mov x0,x19
7101acff28  bl 0x7103776640
7101acff2c  adrp x1,0x7104338000
7101acff30  add x1,x1,#0xd31
7101acff34  add x8,sp,#0x390
7101acff38  add x0,sp,#0x260
7101acff3c  add x20,sp,#0x390
7101acff40  bl 0x7103776910
7101acff44  add x8,x23,#0x258
7101acff48  cmp x8,x20
7101acff4c  b.eq 0x7101acff68
7101acff50  ldr x8,[sp, #0x398]
7101acff54  str xzr,[sp, #0x398]
7101acff58  ldr x0,[x23, #0x260]
7101acff5c  str x8,[x23, #0x260]
7101acff60  cbz x0,0x7101acff68
7101acff64  bl 0x710392eb40
7101acff68  ldr x0,[sp, #0x398]
7101acff6c  str x21,[sp, #0x390]
7101acff70  str xzr,[sp, #0x398]
7101acff74  cbz x0,0x7101acff7c
7101acff78  bl 0x710392eb40
7101acff7c  ldr x20,[sp, #0x268]
7101acff80  str x22,[sp, #0x260]
7101acff84  str xzr,[sp, #0x268]
7101acff88  cbz x20,0x7101acffa4
7101acff8c  ldr x0,[x20, #0x18]
7101acff90  stp x21,xzr,[x20, #0x10]
7101acff94  cbz x0,0x7101acff9c
7101acff98  bl 0x710392eb40
7101acff9c  mov x0,x20
7101acffa0  bl 0x710392eb40
7101acffa4  adrp x1,0x7104443000
7101acffa8  add x1,x1,#0x103
7101acffac  add x8,sp,#0x260
7101acffb0  mov x0,x19
7101acffb4  bl 0x7103776640
7101acffb8  adrp x1,0x71043ef000
7101acffbc  add x1,x1,#0x356
7101acffc0  add x8,sp,#0x390
7101acffc4  add x0,sp,#0x260
7101acffc8  add x20,sp,#0x390
7101acffcc  bl 0x7103776910
7101acffd0  add x8,x23,#0x268
7101acffd4  cmp x8,x20
7101acffd8  b.eq 0x7101acfff4
7101acffdc  ldr x8,[sp, #0x398]
7101acffe0  str xzr,[sp, #0x398]
7101acffe4  ldr x0,[x23, #0x270]
7101acffe8  str x8,[x23, #0x270]
7101acffec  cbz x0,0x7101acfff4
7101acfff0  bl 0x710392eb40
7101acfff4  ldr x0,[sp, #0x398]
7101acfff8  str x21,[sp, #0x390]
7101acfffc  str xzr,[sp, #0x398]
7101ad0000  cbz x0,0x7101ad0008
7101ad0004  bl 0x710392eb40
7101ad0008  ldr x20,[sp, #0x268]
7101ad000c  str x22,[sp, #0x260]
7101ad0010  str xzr,[sp, #0x268]
7101ad0014  cbz x20,0x7101ad0030
7101ad0018  ldr x0,[x20, #0x18]
7101ad001c  stp x21,xzr,[x20, #0x10]
7101ad0020  cbz x0,0x7101ad0028
7101ad0024  bl 0x710392eb40
7101ad0028  mov x0,x20
7101ad002c  bl 0x710392eb40
7101ad0030  adrp x1,0x710438c000
7101ad0034  add x1,x1,#0x43e
7101ad0038  add x8,sp,#0x390
7101ad003c  mov x0,x19
7101ad0040  add x20,sp,#0x390
7101ad0044  bl 0x7103776640
7101ad0048  add x8,x23,#0x278
7101ad004c  cmp x8,x20
7101ad0050  b.eq 0x7101ad0080
7101ad0054  ldr x8,[sp, #0x398]
7101ad0058  str xzr,[sp, #0x398]
7101ad005c  ldr x20,[x23, #0x280]
7101ad0060  str x8,[x23, #0x280]
7101ad0064  cbz x20,0x7101ad0080
7101ad0068  ldr x0,[x20, #0x18]
7101ad006c  stp x21,xzr,[x20, #0x10]
7101ad0070  cbz x0,0x7101ad0078
7101ad0074  bl 0x710392eb40
7101ad0078  mov x0,x20
7101ad007c  bl 0x710392eb40
7101ad0080  ldr x20,[sp, #0x398]
7101ad0084  str x22,[sp, #0x390]
7101ad0088  str xzr,[sp, #0x398]
7101ad008c  cbz x20,0x7101ad00a8
7101ad0090  ldr x0,[x20, #0x18]
7101ad0094  stp x21,xzr,[x20, #0x10]
7101ad0098  cbz x0,0x7101ad00a0
7101ad009c  bl 0x710392eb40
7101ad00a0  mov x0,x20
7101ad00a4  bl 0x710392eb40
7101ad00a8  adrp x1,0x7104401000
7101ad00ac  add x1,x1,#0xdad
7101ad00b0  add x8,sp,#0x260
7101ad00b4  mov x0,x19
7101ad00b8  bl 0x7103776640
7101ad00bc  adrp x1,0x71042a3000
7101ad00c0  add x1,x1,#0x1a8
7101ad00c4  add x8,sp,#0x390
7101ad00c8  add x0,sp,#0x260
7101ad00cc  add x20,sp,#0x390
7101ad00d0  bl 0x7103776910
7101ad00d4  add x8,x23,#0x158
7101ad00d8  cmp x8,x20
7101ad00dc  b.eq 0x7101ad00f8
7101ad00e0  ldr x8,[sp, #0x398]
7101ad00e4  str xzr,[sp, #0x398]
7101ad00e8  ldr x0,[x23, #0x160]
7101ad00ec  str x8,[x23, #0x160]
7101ad00f0  cbz x0,0x7101ad00f8
7101ad00f4  bl 0x710392eb40
7101ad00f8  ldr x0,[sp, #0x398]
7101ad00fc  str x21,[sp, #0x390]
7101ad0100  str xzr,[sp, #0x398]
7101ad0104  cbz x0,0x7101ad010c
7101ad0108  bl 0x710392eb40
7101ad010c  ldr x20,[sp, #0x268]
7101ad0110  str x22,[sp, #0x260]
7101ad0114  str xzr,[sp, #0x268]
7101ad0118  cbz x20,0x7101ad0134
7101ad011c  ldr x0,[x20, #0x18]
7101ad0120  stp x21,xzr,[x20, #0x10]
7101ad0124  cbz x0,0x7101ad012c
7101ad0128  bl 0x710392eb40
7101ad012c  mov x0,x20
7101ad0130  bl 0x710392eb40
7101ad0134  adrp x1,0x7104401000
7101ad0138  add x1,x1,#0xdad
7101ad013c  add x8,sp,#0x260
7101ad0140  mov x0,x19
7101ad0144  bl 0x7103776640
7101ad0148  adrp x1,0x71042b4000
7101ad014c  add x1,x1,#0x52d
7101ad0150  add x8,sp,#0x390
7101ad0154  add x0,sp,#0x260
7101ad0158  add x20,sp,#0x390
7101ad015c  bl 0x7103776910
7101ad0160  add x8,x23,#0x168
7101ad0164  cmp x8,x20
7101ad0168  b.eq 0x7101ad0184
7101ad016c  ldr x8,[sp, #0x398]
7101ad0170  str xzr,[sp, #0x398]
7101ad0174  ldr x0,[x23, #0x170]
7101ad0178  str x8,[x23, #0x170]
7101ad017c  cbz x0,0x7101ad0184
7101ad0180  bl 0x710392eb40
7101ad0184  ldr x0,[sp, #0x398]
7101ad0188  str x21,[sp, #0x390]
7101ad018c  str xzr,[sp, #0x398]
7101ad0190  cbz x0,0x7101ad0198
7101ad0194  bl 0x710392eb40
7101ad0198  ldr x20,[sp, #0x268]
7101ad019c  str x22,[sp, #0x260]
7101ad01a0  str xzr,[sp, #0x268]
7101ad01a4  cbz x20,0x7101ad01c0
7101ad01a8  ldr x0,[x20, #0x18]
7101ad01ac  stp x21,xzr,[x20, #0x10]
7101ad01b0  cbz x0,0x7101ad01b8
7101ad01b4  bl 0x710392eb40
7101ad01b8  mov x0,x20
7101ad01bc  bl 0x710392eb40
7101ad01c0  adrp x1,0x7104401000
7101ad01c4  add x1,x1,#0xdad
7101ad01c8  add x8,sp,#0x390
7101ad01cc  mov x0,x19
7101ad01d0  add x20,sp,#0x390
7101ad01d4  bl 0x7103776640
7101ad01d8  add x8,x23,#0x178
7101ad01dc  cmp x8,x20
7101ad01e0  b.eq 0x7101ad0210
7101ad01e4  ldr x8,[sp, #0x398]
7101ad01e8  str xzr,[sp, #0x398]
7101ad01ec  ldr x20,[x23, #0x180]
7101ad01f0  str x8,[x23, #0x180]
7101ad01f4  cbz x20,0x7101ad0210
7101ad01f8  ldr x0,[x20, #0x18]
7101ad01fc  stp x21,xzr,[x20, #0x10]
7101ad0200  cbz x0,0x7101ad0208
7101ad0204  bl 0x710392eb40
7101ad0208  mov x0,x20
7101ad020c  bl 0x710392eb40
7101ad0210  ldr x20,[sp, #0x398]
7101ad0214  str x22,[sp, #0x390]
7101ad0218  str xzr,[sp, #0x398]
7101ad021c  cbz x20,0x7101ad0238
7101ad0220  ldr x0,[x20, #0x18]
7101ad0224  stp x21,xzr,[x20, #0x10]
7101ad0228  cbz x0,0x7101ad0230
7101ad022c  bl 0x710392eb40
7101ad0230  mov x0,x20
7101ad0234  bl 0x710392eb40
7101ad0238  adrp x1,0x7104308000
7101ad023c  add x1,x1,#0xc5c
7101ad0240  add x8,sp,#0x260
7101ad0244  mov x0,x19
7101ad0248  str wzr,[x23, #0x188]
7101ad024c  bl 0x7103776640
7101ad0250  adrp x1,0x71042a3000
7101ad0254  add x1,x1,#0x1a8
7101ad0258  add x8,sp,#0x390
7101ad025c  add x0,sp,#0x260
7101ad0260  add x20,sp,#0x390
7101ad0264  bl 0x7103776910
7101ad0268  add x8,x23,#0x190
7101ad026c  cmp x8,x20
7101ad0270  b.eq 0x7101ad028c
7101ad0274  ldr x8,[sp, #0x398]
7101ad0278  str xzr,[sp, #0x398]
7101ad027c  ldr x0,[x23, #0x198]
7101ad0280  str x8,[x23, #0x198]
7101ad0284  cbz x0,0x7101ad028c
7101ad0288  bl 0x710392eb40
7101ad028c  ldr x0,[sp, #0x398]
7101ad0290  str x21,[sp, #0x390]
7101ad0294  str xzr,[sp, #0x398]
7101ad0298  cbz x0,0x7101ad02a0
7101ad029c  bl 0x710392eb40
7101ad02a0  ldr x20,[sp, #0x268]
7101ad02a4  str x22,[sp, #0x260]
7101ad02a8  str xzr,[sp, #0x268]
7101ad02ac  cbz x20,0x7101ad02c8
7101ad02b0  ldr x0,[x20, #0x18]
7101ad02b4  stp x21,xzr,[x20, #0x10]
7101ad02b8  cbz x0,0x7101ad02c0
7101ad02bc  bl 0x710392eb40
7101ad02c0  mov x0,x20
7101ad02c4  bl 0x710392eb40
7101ad02c8  adrp x1,0x7104308000
7101ad02cc  add x1,x1,#0xc5c
7101ad02d0  add x8,sp,#0x260
7101ad02d4  mov x0,x19
7101ad02d8  bl 0x7103776640
7101ad02dc  adrp x1,0x71042b4000
7101ad02e0  add x1,x1,#0x52d
7101ad02e4  add x8,sp,#0x390
7101ad02e8  add x0,sp,#0x260
7101ad02ec  add x20,sp,#0x390
7101ad02f0  bl 0x7103776910
7101ad02f4  add x8,x23,#0x1a0
7101ad02f8  cmp x8,x20
7101ad02fc  b.eq 0x7101ad0318
7101ad0300  ldr x8,[sp, #0x398]
7101ad0304  str xzr,[sp, #0x398]
7101ad0308  ldr x0,[x23, #0x1a8]
7101ad030c  str x8,[x23, #0x1a8]
7101ad0310  cbz x0,0x7101ad0318
7101ad0314  bl 0x710392eb40
7101ad0318  ldr x0,[sp, #0x398]
7101ad031c  str x21,[sp, #0x390]
7101ad0320  str xzr,[sp, #0x398]
7101ad0324  cbz x0,0x7101ad032c
7101ad0328  bl 0x710392eb40
7101ad032c  ldr x20,[sp, #0x268]
7101ad0330  str x22,[sp, #0x260]
7101ad0334  str xzr,[sp, #0x268]
7101ad0338  cbz x20,0x7101ad0354
7101ad033c  ldr x0,[x20, #0x18]
7101ad0340  stp x21,xzr,[x20, #0x10]
7101ad0344  cbz x0,0x7101ad034c
7101ad0348  bl 0x710392eb40
7101ad034c  mov x0,x20
7101ad0350  bl 0x710392eb40
7101ad0354  adrp x1,0x7104308000
7101ad0358  add x1,x1,#0xc5c
7101ad035c  add x8,sp,#0x390
7101ad0360  mov x0,x19
7101ad0364  add x20,sp,#0x390
7101ad0368  bl 0x7103776640
7101ad036c  add x8,x23,#0x1b0
7101ad0370  cmp x8,x20
7101ad0374  b.eq 0x7101ad03a4
7101ad0378  ldr x8,[sp, #0x398]
7101ad037c  str xzr,[sp, #0x398]
7101ad0380  ldr x20,[x23, #0x1b8]
7101ad0384  str x8,[x23, #0x1b8]
7101ad0388  cbz x20,0x7101ad03a4
7101ad038c  ldr x0,[x20, #0x18]
7101ad0390  stp x21,xzr,[x20, #0x10]
7101ad0394  cbz x0,0x7101ad039c
7101ad0398  bl 0x710392eb40
7101ad039c  mov x0,x20
7101ad03a0  bl 0x710392eb40
7101ad03a4  ldr x20,[sp, #0x398]
7101ad03a8  str x22,[sp, #0x390]
7101ad03ac  str xzr,[sp, #0x398]
7101ad03b0  cbz x20,0x7101ad03cc
7101ad03b4  ldr x0,[x20, #0x18]
7101ad03b8  stp x21,xzr,[x20, #0x10]
7101ad03bc  cbz x0,0x7101ad03c4
7101ad03c0  bl 0x710392eb40
7101ad03c4  mov x0,x20
7101ad03c8  bl 0x710392eb40
7101ad03cc  mov w8,#0x1
7101ad03d0  str w8,[x23, #0x1c0]
7101ad03d4  adrp x1,0x710424f000
7101ad03d8  add x1,x1,#0xd25
7101ad03dc  add x8,sp,#0x260
7101ad03e0  mov x0,x19
7101ad03e4  bl 0x7103776640
7101ad03e8  adrp x1,0x71042a3000
7101ad03ec  add x1,x1,#0x1a8
7101ad03f0  add x8,sp,#0x390
7101ad03f4  add x0,sp,#0x260
7101ad03f8  add x20,sp,#0x390
7101ad03fc  bl 0x7103776910
7101ad0400  add x8,x23,#0x1c8
7101ad0404  cmp x8,x20
7101ad0408  b.eq 0x7101ad0424
7101ad040c  ldr x8,[sp, #0x398]
7101ad0410  str xzr,[sp, #0x398]
7101ad0414  ldr x0,[x23, #0x1d0]
7101ad0418  str x8,[x23, #0x1d0]
7101ad041c  cbz x0,0x7101ad0424
7101ad0420  bl 0x710392eb40
7101ad0424  ldr x0,[sp, #0x398]
7101ad0428  str x21,[sp, #0x390]
7101ad042c  str xzr,[sp, #0x398]
7101ad0430  cbz x0,0x7101ad0438
7101ad0434  bl 0x710392eb40
7101ad0438  ldr x20,[sp, #0x268]
7101ad043c  str x22,[sp, #0x260]
7101ad0440  str xzr,[sp, #0x268]
7101ad0444  cbz x20,0x7101ad0460
7101ad0448  ldr x0,[x20, #0x18]
7101ad044c  stp x21,xzr,[x20, #0x10]
7101ad0450  cbz x0,0x7101ad0458
7101ad0454  bl 0x710392eb40
7101ad0458  mov x0,x20
7101ad045c  bl 0x710392eb40
7101ad0460  adrp x1,0x710424f000
7101ad0464  add x1,x1,#0xd25
7101ad0468  add x8,sp,#0x260
7101ad046c  mov x0,x19
7101ad0470  bl 0x7103776640
7101ad0474  adrp x1,0x71042b4000
7101ad0478  add x1,x1,#0x52d
7101ad047c  add x8,sp,#0x390
7101ad0480  add x0,sp,#0x260
7101ad0484  add x20,sp,#0x390
7101ad0488  bl 0x7103776910
7101ad048c  add x8,x23,#0x1d8
7101ad0490  cmp x8,x20
7101ad0494  b.eq 0x7101ad04b0
7101ad0498  ldr x8,[sp, #0x398]
7101ad049c  str xzr,[sp, #0x398]
7101ad04a0  ldr x0,[x23, #0x1e0]
7101ad04a4  str x8,[x23, #0x1e0]
7101ad04a8  cbz x0,0x7101ad04b0
7101ad04ac  bl 0x710392eb40
7101ad04b0  ldr x0,[sp, #0x398]
7101ad04b4  str x21,[sp, #0x390]
7101ad04b8  str xzr,[sp, #0x398]
7101ad04bc  cbz x0,0x7101ad04c4
7101ad04c0  bl 0x710392eb40
7101ad04c4  ldr x20,[sp, #0x268]
7101ad04c8  str x22,[sp, #0x260]
7101ad04cc  str xzr,[sp, #0x268]
7101ad04d0  cbz x20,0x7101ad04ec
7101ad04d4  ldr x0,[x20, #0x18]
7101ad04d8  stp x21,xzr,[x20, #0x10]
7101ad04dc  cbz x0,0x7101ad04e4
7101ad04e0  bl 0x710392eb40
7101ad04e4  mov x0,x20
7101ad04e8  bl 0x710392eb40
7101ad04ec  adrp x1,0x710424f000
7101ad04f0  add x1,x1,#0xd25
7101ad04f4  add x8,sp,#0x390
7101ad04f8  mov x0,x19
7101ad04fc  add x20,sp,#0x390
7101ad0500  bl 0x7103776640
7101ad0504  add x8,x23,#0x1e8
7101ad0508  cmp x8,x20
7101ad050c  b.eq 0x7101ad053c
7101ad0510  ldr x8,[sp, #0x398]
7101ad0514  str xzr,[sp, #0x398]
7101ad0518  ldr x20,[x23, #0x1f0]
7101ad051c  str x8,[x23, #0x1f0]
7101ad0520  cbz x20,0x7101ad053c
7101ad0524  ldr x0,[x20, #0x18]
7101ad0528  stp x21,xzr,[x20, #0x10]
7101ad052c  cbz x0,0x7101ad0534
7101ad0530  bl 0x710392eb40
7101ad0534  mov x0,x20
7101ad0538  bl 0x710392eb40
7101ad053c  ldr x20,[sp, #0x398]
7101ad0540  str x22,[sp, #0x390]
7101ad0544  str xzr,[sp, #0x398]
7101ad0548  cbz x20,0x7101ad0564
7101ad054c  ldr x0,[x20, #0x18]
7101ad0550  stp x21,xzr,[x20, #0x10]
7101ad0554  cbz x0,0x7101ad055c
7101ad0558  bl 0x710392eb40
7101ad055c  mov x0,x20
7101ad0560  bl 0x710392eb40
7101ad0564  mov w8,#0x2
7101ad0568  str w8,[x23, #0x1f8]
7101ad056c  adrp x1,0x710432a000
7101ad0570  add x1,x1,#0x6e1
7101ad0574  add x8,sp,#0x260
7101ad0578  mov x0,x19
7101ad057c  bl 0x7103776640
7101ad0580  adrp x1,0x71042a3000
7101ad0584  add x1,x1,#0x1a8
7101ad0588  add x8,sp,#0x390
7101ad058c  add x0,sp,#0x260
7101ad0590  add x20,sp,#0x390
7101ad0594  bl 0x7103776910
7101ad0598  add x8,x23,#0x200
7101ad059c  cmp x8,x20
7101ad05a0  b.eq 0x7101ad05bc
7101ad05a4  ldr x8,[sp, #0x398]
7101ad05a8  str xzr,[sp, #0x398]
7101ad05ac  ldr x0,[x23, #0x208]
7101ad05b0  str x8,[x23, #0x208]
7101ad05b4  cbz x0,0x7101ad05bc
7101ad05b8  bl 0x710392eb40
7101ad05bc  ldr x0,[sp, #0x398]
7101ad05c0  str x21,[sp, #0x390]
7101ad05c4  str xzr,[sp, #0x398]
7101ad05c8  cbz x0,0x7101ad05d0
7101ad05cc  bl 0x710392eb40
7101ad05d0  ldr x20,[sp, #0x268]
7101ad05d4  str x22,[sp, #0x260]
7101ad05d8  str xzr,[sp, #0x268]
7101ad05dc  cbz x20,0x7101ad05f8
7101ad05e0  ldr x0,[x20, #0x18]
7101ad05e4  stp x21,xzr,[x20, #0x10]
7101ad05e8  cbz x0,0x7101ad05f0
7101ad05ec  bl 0x710392eb40
7101ad05f0  mov x0,x20
7101ad05f4  bl 0x710392eb40
7101ad05f8  adrp x1,0x710432a000
7101ad05fc  add x1,x1,#0x6e1
7101ad0600  add x8,sp,#0x260
7101ad0604  mov x0,x19
7101ad0608  bl 0x7103776640
7101ad060c  adrp x1,0x71042b4000
7101ad0610  add x1,x1,#0x52d
7101ad0614  add x8,sp,#0x390
7101ad0618  add x0,sp,#0x260
7101ad061c  add x20,sp,#0x390
7101ad0620  bl 0x7103776910
7101ad0624  add x8,x23,#0x210
7101ad0628  cmp x8,x20
7101ad062c  b.eq 0x7101ad0648
7101ad0630  ldr x8,[sp, #0x398]
7101ad0634  str xzr,[sp, #0x398]
7101ad0638  ldr x0,[x23, #0x218]
7101ad063c  str x8,[x23, #0x218]
7101ad0640  cbz x0,0x7101ad0648
7101ad0644  bl 0x710392eb40
7101ad0648  ldr x0,[sp, #0x398]
7101ad064c  str x21,[sp, #0x390]
7101ad0650  str xzr,[sp, #0x398]
7101ad0654  cbz x0,0x7101ad065c
7101ad0658  bl 0x710392eb40
7101ad065c  ldr x20,[sp, #0x268]
7101ad0660  str x22,[sp, #0x260]
7101ad0664  str xzr,[sp, #0x268]
7101ad0668  cbz x20,0x7101ad0684
7101ad066c  ldr x0,[x20, #0x18]
7101ad0670  stp x21,xzr,[x20, #0x10]
7101ad0674  cbz x0,0x7101ad067c
7101ad0678  bl 0x710392eb40
7101ad067c  mov x0,x20
7101ad0680  bl 0x710392eb40
7101ad0684  adrp x1,0x710432a000
7101ad0688  add x1,x1,#0x6e1
7101ad068c  add x8,sp,#0x390
7101ad0690  mov x0,x19
7101ad0694  add x20,sp,#0x390
7101ad0698  bl 0x7103776640
7101ad069c  add x8,x23,#0x220
7101ad06a0  cmp x8,x20
7101ad06a4  b.eq 0x7101ad06d4
7101ad06a8  ldr x8,[sp, #0x398]
7101ad06ac  str xzr,[sp, #0x398]
7101ad06b0  ldr x20,[x23, #0x228]
7101ad06b4  str x8,[x23, #0x228]
7101ad06b8  cbz x20,0x7101ad06d4
7101ad06bc  ldr x0,[x20, #0x18]
7101ad06c0  stp x21,xzr,[x20, #0x10]
7101ad06c4  cbz x0,0x7101ad06cc
7101ad06c8  bl 0x710392eb40
7101ad06cc  mov x0,x20
7101ad06d0  bl 0x710392eb40
7101ad06d4  ldr x20,[sp, #0x398]
7101ad06d8  str x22,[sp, #0x390]
7101ad06dc  str xzr,[sp, #0x398]
7101ad06e0  cbz x20,0x7101ad06fc
7101ad06e4  ldr x0,[x20, #0x18]
7101ad06e8  stp x21,xzr,[x20, #0x10]
7101ad06ec  cbz x0,0x7101ad06f4
7101ad06f0  bl 0x710392eb40
7101ad06f4  mov x0,x20
7101ad06f8  bl 0x710392eb40
7101ad06fc  orr w8,wzr,#0x3
7101ad0700  str w8,[x23, #0x230]
7101ad0704  adrp x1,0x710434a000
7101ad0708  add x1,x1,#0x97a
7101ad070c  add x8,sp,#0x390
7101ad0710  mov x0,x19
7101ad0714  bl 0x7103776640
7101ad0718  ldr x20,[sp, #0x398]
7101ad071c  fmov s0,0x3f800000
7101ad0720  adrp x1,0x7104329000
7101ad0724  add x1,x1,#0xb34
7101ad0728  mov x0,x20
7101ad072c  bl 0x7103778300
7101ad0730  str x22,[sp, #0x390]
7101ad0734  str xzr,[sp, #0x398]
7101ad0738  cbz x20,0x7101ad0754
7101ad073c  ldr x0,[x20, #0x18]
7101ad0740  stp x21,xzr,[x20, #0x10]
7101ad0744  cbz x0,0x7101ad074c
7101ad0748  bl 0x710392eb40
7101ad074c  mov x0,x20
7101ad0750  bl 0x710392eb40
7101ad0754  adrp x1,0x71043be000
7101ad0758  add x1,x1,#0xc66
7101ad075c  add x8,sp,#0x390
7101ad0760  mov x0,x19
7101ad0764  bl 0x7103776640
7101ad0768  ldr x20,[sp, #0x398]
7101ad076c  fmov s0,0x3f800000
7101ad0770  adrp x1,0x71043df000
7101ad0774  add x1,x1,#0xbde
7101ad0778  mov x0,x20
7101ad077c  bl 0x7103778300
7101ad0780  str x22,[sp, #0x390]
7101ad0784  str xzr,[sp, #0x398]
7101ad0788  cbz x20,0x7101ad07a4
7101ad078c  ldr x0,[x20, #0x18]
7101ad0790  stp x21,xzr,[x20, #0x10]
7101ad0794  cbz x0,0x7101ad079c
7101ad0798  bl 0x710392eb40
7101ad079c  mov x0,x20
7101ad07a0  bl 0x710392eb40
7101ad07a4  adrp x1,0x710426f000
7101ad07a8  add x1,x1,#0xb21
7101ad07ac  add x8,sp,#0x390
7101ad07b0  mov x0,x19
7101ad07b4  bl 0x7103776640
7101ad07b8  ldr x20,[sp, #0x398]
7101ad07bc  fmov s0,0x3f800000
7101ad07c0  adrp x1,0x71042c4000
7101ad07c4  add x1,x1,#0x937
7101ad07c8  mov x0,x20
7101ad07cc  bl 0x7103778300
7101ad07d0  str x22,[sp, #0x390]
7101ad07d4  str xzr,[sp, #0x398]
7101ad07d8  cbz x20,0x7101ad07f4
7101ad07dc  ldr x0,[x20, #0x18]
7101ad07e0  stp x21,xzr,[x20, #0x10]
7101ad07e4  cbz x0,0x7101ad07ec
7101ad07e8  bl 0x710392eb40
7101ad07ec  mov x0,x20
7101ad07f0  bl 0x710392eb40
7101ad07f4  adrp x1,0x71042d5000
7101ad07f8  add x1,x1,#0xdac
7101ad07fc  add x8,sp,#0x390
7101ad0800  mov x0,x19
7101ad0804  bl 0x71037780e0
7101ad0808  add x0,sp,#0x390
7101ad080c  bl 0x710377b140
7101ad0810  ldr x0,[sp, #0x398]
7101ad0814  adrp x20,0x710523d000
7101ad0818  add x20,x20,#0x9e8
7101ad081c  str x20,[sp, #0x390]
7101ad0820  str xzr,[sp, #0x398]
7101ad0824  cbz x0,0x7101ad082c
7101ad0828  bl 0x710392eb40
7101ad082c  adrp x1,0x710438c000
7101ad0830  add x1,x1,#0x435
7101ad0834  add x8,sp,#0x390
7101ad0838  mov x0,x19
7101ad083c  bl 0x71037780e0
7101ad0840  add x0,sp,#0x390
7101ad0844  bl 0x710377b140
7101ad0848  ldr x0,[sp, #0x398]
7101ad084c  str x20,[sp, #0x390]
7101ad0850  str xzr,[sp, #0x398]
7101ad0854  cbz x0,0x7101ad085c
7101ad0858  bl 0x710392eb40
7101ad085c  adrp x1,0x710439c000
7101ad0860  add x1,x1,#0xf4a
7101ad0864  add x8,sp,#0x390
7101ad0868  mov x0,x19
7101ad086c  bl 0x71037780e0
7101ad0870  add x0,sp,#0x390
7101ad0874  bl 0x710377b140
7101ad0878  ldr x0,[sp, #0x398]
7101ad087c  str x20,[sp, #0x390]
7101ad0880  str xzr,[sp, #0x398]
7101ad0884  cbz x0,0x7101ad088c
7101ad0888  bl 0x710392eb40
7101ad088c  add sp,sp,#0x4d0
7101ad0890  ldp x29,x30,[sp, #0x50]
7101ad0894  ldp x20,x19,[sp, #0x40]
7101ad0898  ldp x22,x21,[sp, #0x30]
7101ad089c  ldp x24,x23,[sp, #0x20]
7101ad08a0  ldp x26,x25,[sp, #0x10]
7101ad08a4  ldr x28,[sp], #0x60
7101ad08a8  ret
