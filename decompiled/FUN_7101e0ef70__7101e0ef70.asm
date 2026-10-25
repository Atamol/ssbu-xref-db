// addr:      7101e0ef70
// offset:    0x1e0ef70
// name:      FUN_7101e0ef70
// mangled:   
// size:      5228

7101e0ef70  str d8,[sp, #-0x50]!
7101e0ef74  str x28,[sp, #0x8]
7101e0ef78  stp x24,x23,[sp, #0x10]
7101e0ef7c  stp x22,x21,[sp, #0x20]
7101e0ef80  stp x20,x19,[sp, #0x30]
7101e0ef84  stp x29,x30,[sp, #0x40]
7101e0ef88  add x29,sp,#0x40
7101e0ef8c  sub sp,sp,#0x280
7101e0ef90  ldr w8,[x0, #0x144]
7101e0ef94  mov x19,x0
7101e0ef98  sub x23,x29,#0x98
7101e0ef9c  cbz w8,0x7101e0f25c
7101e0efa0  ldrb w8,[x19, #0x263]
7101e0efa4  cbz w8,0x7101e0f454
7101e0efa8  add x21,x19,#0x160
7101e0efac  adrp x1,0x710438d000
7101e0efb0  add x1,x1,#0x7
7101e0efb4  sub x8,x29,#0xe8
7101e0efb8  mov x0,x21
7101e0efbc  bl 0x7103776640
7101e0efc0  ldur x20,[x29, #-0xe0]
7101e0efc4  ldr x22,[x20, #0x8]
7101e0efc8  cbz x22,0x7101e0f01c
7101e0efcc  adrp x1,0x710436c000
7101e0efd0  add x1,x1,#0x90a
7101e0efd4  mov x0,x22
7101e0efd8  bl 0x71037964b0
7101e0efdc  cbz x0,0x7101e0eff8
7101e0efe0  ldr x8,[x0]
7101e0efe4  ldr x8,[x8, #0x138]
7101e0efe8  blr x8
7101e0efec  tbz w0,#0x0,0x7101e0f228
7101e0eff0  ldr x22,[x20, #0x8]
7101e0eff4  cbz x22,0x7101e0f01c
7101e0eff8  adrp x1,0x710436c000
7101e0effc  add x1,x1,#0x90a
7101e0f000  mov x0,x22
7101e0f004  bl 0x71037964b0
7101e0f008  cbz x0,0x7101e0f01c
7101e0f00c  ldr x8,[x0]
7101e0f010  ldr x8,[x8, #0x1a0]
7101e0f014  fmov s0,wzr
7101e0f018  blr x8
7101e0f01c  adrp x1,0x7104433000
7101e0f020  add x1,x1,#0x603
7101e0f024  sub x8,x29,#0xf8
7101e0f028  mov x0,x21
7101e0f02c  bl 0x7103776640
7101e0f030  adrp x1,0x7104270000
7101e0f034  add x1,x1,#0x51a
7101e0f038  sub x8,x29,#0x98
7101e0f03c  sub x0,x29,#0xf8
7101e0f040  mov w2,wzr
7101e0f044  bl 0x7103776640
7101e0f048  ldur x21,[x29, #-0x90]
7101e0f04c  ldr x0,[x21, #0x8]
7101e0f050  cbz x0,0x7101e0f074
7101e0f054  adrp x1,0x710436c000
7101e0f058  add x1,x1,#0x90a
7101e0f05c  bl 0x71037964b0
7101e0f060  cbz x0,0x7101e0f074
7101e0f064  ldr x8,[x0]
7101e0f068  ldr x8,[x8, #0x1a0]
7101e0f06c  fmov s0,wzr
7101e0f070  blr x8
7101e0f074  adrp x22,0x710523d000
7101e0f078  add x22,x22,#0x988
7101e0f07c  stp x22,xzr,[x29, #-0x98]
7101e0f080  cbz x21,0x7101e0f0a4
7101e0f084  ldr x0,[x21, #0x18]
7101e0f088  adrp x8,0x710523d000
7101e0f08c  add x8,x8,#0x9a8
7101e0f090  stp x8,xzr,[x21, #0x10]
7101e0f094  cbz x0,0x7101e0f09c
7101e0f098  bl 0x710392eb40
7101e0f09c  mov x0,x21
7101e0f0a0  bl 0x710392eb40
7101e0f0a4  adrp x1,0x7104270000
7101e0f0a8  add x1,x1,#0x51a
7101e0f0ac  sub x8,x29,#0x98
7101e0f0b0  sub x0,x29,#0xf8
7101e0f0b4  mov w2,#0x1
7101e0f0b8  bl 0x7103776640
7101e0f0bc  ldur x21,[x29, #-0x90]
7101e0f0c0  ldr x0,[x21, #0x8]
7101e0f0c4  cbz x0,0x7101e0f0e8
7101e0f0c8  adrp x1,0x710436c000
7101e0f0cc  add x1,x1,#0x90a
7101e0f0d0  bl 0x71037964b0
7101e0f0d4  cbz x0,0x7101e0f0e8
7101e0f0d8  ldr x8,[x0]
7101e0f0dc  ldr x8,[x8, #0x1a0]
7101e0f0e0  fmov s0,wzr
7101e0f0e4  blr x8
7101e0f0e8  stp x22,xzr,[x29, #-0x98]
7101e0f0ec  cbz x21,0x7101e0f110
7101e0f0f0  ldr x0,[x21, #0x18]
7101e0f0f4  adrp x8,0x710523d000
7101e0f0f8  add x8,x8,#0x9a8
7101e0f0fc  stp x8,xzr,[x21, #0x10]
7101e0f100  cbz x0,0x7101e0f108
7101e0f104  bl 0x710392eb40
7101e0f108  mov x0,x21
7101e0f10c  bl 0x710392eb40
7101e0f110  adrp x1,0x7104270000
7101e0f114  add x1,x1,#0x51a
7101e0f118  sub x8,x29,#0x98
7101e0f11c  sub x0,x29,#0xf8
7101e0f120  mov w2,#0x2
7101e0f124  bl 0x7103776640
7101e0f128  ldur x21,[x29, #-0x90]
7101e0f12c  ldr x0,[x21, #0x8]
7101e0f130  cbz x0,0x7101e0f154
7101e0f134  adrp x1,0x710436c000
7101e0f138  add x1,x1,#0x90a
7101e0f13c  bl 0x71037964b0
7101e0f140  cbz x0,0x7101e0f154
7101e0f144  ldr x8,[x0]
7101e0f148  ldr x8,[x8, #0x1a0]
7101e0f14c  fmov s0,wzr
7101e0f150  blr x8
7101e0f154  stp x22,xzr,[x29, #-0x98]
7101e0f158  cbz x21,0x7101e0f17c
7101e0f15c  ldr x0,[x21, #0x18]
7101e0f160  adrp x8,0x710523d000
7101e0f164  add x8,x8,#0x9a8
7101e0f168  stp x8,xzr,[x21, #0x10]
7101e0f16c  cbz x0,0x7101e0f174
7101e0f170  bl 0x710392eb40
7101e0f174  mov x0,x21
7101e0f178  bl 0x710392eb40
7101e0f17c  orr w8,wzr,#0xffff
7101e0f180  sturh w8,[x29, #-0x90]
7101e0f184  mov x8,#-0x1
7101e0f188  mov w9,#0xffffffff
7101e0f18c  sub x1,x29,#0x98
7101e0f190  mov x0,x19
7101e0f194  add x21,x19,#0x1a0
7101e0f198  stur x8,[x29, #-0x98]
7101e0f19c  stur xzr,[x23, #0xc]
7101e0f1a0  sturh wzr,[x29, #-0x84]
7101e0f1a4  stur w9,[x29, #-0x54]
7101e0f1a8  sturb wzr,[x29, #-0x50]
7101e0f1ac  stur wzr,[x29, #-0x4c]
7101e0f1b0  sturb wzr,[x29, #-0x48]
7101e0f1b4  stur x8,[x23, #0x2]
7101e0f1b8  bl 0x7101e13860
7101e0f1bc  sub x1,x29,#0x98
7101e0f1c0  mov x0,x21
7101e0f1c4  bl 0x7102529a70
7101e0f1c8  mov x0,x19
7101e0f1cc  bl 0x7101e14030
7101e0f1d0  mov x0,x19
7101e0f1d4  bl 0x7101e153c0
7101e0f1d8  mov x0,x19
7101e0f1dc  bl 0x7101e16090
7101e0f1e0  strb wzr,[x19, #0x263]
7101e0f1e4  adrp x8,0x710593b000
7101e0f1e8  ldr x8,[x8, #0x988]
7101e0f1ec  ldr x8,[x8, #0x8]
7101e0f1f0  ldr w9,[x8]
7101e0f1f4  and w9,w9,#0xfffffffd
7101e0f1f8  str w9,[x8]
7101e0f1fc  ldur x19,[x29, #-0xf0]
7101e0f200  stp x22,xzr,[x29, #-0xf8]
7101e0f204  cbz x19,0x7101e0f228
7101e0f208  ldr x0,[x19, #0x18]
7101e0f20c  adrp x8,0x710523d000
7101e0f210  add x8,x8,#0x9a8
7101e0f214  stp x8,xzr,[x19, #0x10]
7101e0f218  cbz x0,0x7101e0f220
7101e0f21c  bl 0x710392eb40
7101e0f220  mov x0,x19
7101e0f224  bl 0x710392eb40
7101e0f228  adrp x8,0x710523d000
7101e0f22c  add x8,x8,#0x988
7101e0f230  stp x8,xzr,[x29, #-0xe8]
7101e0f234  cbz x20,0x7101e0f6a8
7101e0f238  ldr x0,[x20, #0x18]
7101e0f23c  adrp x8,0x710523d000
7101e0f240  add x8,x8,#0x9a8
7101e0f244  stp x8,xzr,[x20, #0x10]
7101e0f248  cbz x0,0x7101e0f250
7101e0f24c  bl 0x710392eb40
7101e0f250  mov x0,x20
7101e0f254  bl 0x710392eb40
7101e0f258  b 0x7101e0f6a8
7101e0f25c  ldr x8,[x19, #0x150]
7101e0f260  ldr x8,[x8]
7101e0f264  ldr x0,[x8]
7101e0f268  mov w1,#0x1
7101e0f26c  mov w20,#0x9dc5
7101e0f270  movk w20,#0x811c, LSL #16
7101e0f274  bl 0x71037760f0
7101e0f278  ldr x0,[x19, #0x180]
7101e0f27c  str wzr,[x19, #0x198]
7101e0f280  ldr x8,[x0]
7101e0f284  ldr x8,[x8, #0x60]
7101e0f288  mov w1,#0x1
7101e0f28c  blr x8
7101e0f290  ldr x0,[x19, #0x180]
7101e0f294  ldr x8,[x0]
7101e0f298  ldr x8,[x8, #0x70]
7101e0f29c  mov w1,#0x1
7101e0f2a0  blr x8
7101e0f2a4  ldr x0,[x19, #0x188]
7101e0f2a8  ldr x8,[x0]
7101e0f2ac  ldr x8,[x8, #0x70]
7101e0f2b0  mov w1,wzr
7101e0f2b4  blr x8
7101e0f2b8  ldr x0,[x19, #0x188]
7101e0f2bc  ldr x8,[x0]
7101e0f2c0  ldr x8,[x8, #0x60]
7101e0f2c4  mov w1,wzr
7101e0f2c8  blr x8
7101e0f2cc  ldr x0,[x19, #0x190]
7101e0f2d0  ldr x8,[x0]
7101e0f2d4  ldr x8,[x8, #0x70]
7101e0f2d8  mov w1,wzr
7101e0f2dc  blr x8
7101e0f2e0  adrp x8,0x710532f000
7101e0f2e4  ldr x8,[x8, #0x840]
7101e0f2e8  ldr x8,[x8, #0x8]
7101e0f2ec  mov x9,#0x6e6d
7101e0f2f0  movk x9,#0x5f75, LSL #16
7101e0f2f4  movk x9,#0x7073, LSL #32
7101e0f2f8  movk x9,#0x7269, LSL #48
7101e0f2fc  ldr x8,[x8, #0xb8]
7101e0f300  stp xzr,x9,[x29, #-0x98]
7101e0f304  mov x9,#0x7469
7101e0f308  movk x9,#0x5f73, LSL #16
7101e0f30c  movk x9,#0x6863, LSL #32
7101e0f310  movk x9,#0x6c61, LSL #48
7101e0f314  stur x9,[x29, #-0x88]
7101e0f318  mov x9,#0x656c
7101e0f31c  movk x9,#0x676e, LSL #16
7101e0f320  movk x9,#0x6265, LSL #32
7101e0f324  movk x9,#0x616f, LSL #48
7101e0f328  stur x9,[x29, #-0x80]
7101e0f32c  mov w9,#0x6472
7101e0f330  movk w9,#0x6f5f, LSL #16
7101e0f334  stur w9,[x29, #-0x78]
7101e0f338  mov w9,#0x6772
7101e0f33c  sturh w9,[x29, #-0x74]
7101e0f340  mov x9,#0x6e61
7101e0f344  movk x9,#0x7a69, LSL #16
7101e0f348  movk x9,#0x5f65, LSL #32
7101e0f34c  movk x9,#0x6568, LSL #48
7101e0f350  stur x9,[x23, #0x26]
7101e0f354  mov x9,#0x706c
7101e0f358  movk x9,#0x615f, LSL #16
7101e0f35c  movk x9,#0x7474, LSL #32
7101e0f360  movk x9,#0x6361, LSL #48
7101e0f364  stur x9,[x23, #0x2e]
7101e0f368  mov w9,#0x656b
7101e0f36c  movk w9,#0x72, LSL #16
7101e0f370  stur w9,[x23, #0x36]
7101e0f374  ldurb w10,[x29, #-0x90]
7101e0f378  mov w9,#0x31
7101e0f37c  stur w9,[x29, #-0x94]
7101e0f380  cbz w10,0x7101e0f3a4
7101e0f384  sub x9,x29,#0x98
7101e0f388  add x9,x9,#0x9
7101e0f38c  mov w11,#0x89
7101e0f390  mul w12,w20,w11
7101e0f394  and w10,w10,#0xff
7101e0f398  eor w20,w12,w10
7101e0f39c  ldrb w10,[x9], #0x1
7101e0f3a0  cbnz w10,0x7101e0f390
7101e0f3a4  stur w20,[x29, #-0x98]
7101e0f3a8  ldr x0,[x8, #0x80]
7101e0f3ac  sub x1,x29,#0x98
7101e0f3b0  bl 0x7101af53d0
7101e0f3b4  mov x0,x19
7101e0f3b8  bl 0x7101e134d0
7101e0f3bc  ldrb w8,[x19, #0x264]
7101e0f3c0  cbz w8,0x7101e0f6a0
7101e0f3c4  adrp x8,0x710532f000
7101e0f3c8  ldr x8,[x8, #0x8d0]
7101e0f3cc  ldr x0,[x8, #0x8]
7101e0f3d0  ldrb w8,[x0, #0x191]
7101e0f3d4  cbnz w8,0x7101e0f66c
7101e0f3d8  mov x20,#0x29fc
7101e0f3dc  movk x20,#0xf696, LSL #16
7101e0f3e0  movk x20,#0x1b, LSL #32
7101e0f3e4  mov w2,#0x4
7101e0f3e8  mov x1,x20
7101e0f3ec  bl 0x7103313f20
7101e0f3f0  tbz w0,#0x0,0x7101e0f66c
7101e0f3f4  sub x0,x29,#0xd8
7101e0f3f8  mov x1,x20
7101e0f3fc  bl 0x71024076d0
7101e0f400  ldur x8,[x29, #-0xc8]
7101e0f404  adrp x9,0x7104f73000
7101e0f408  add x9,x9,#0xd50
7101e0f40c  stur x9,[x29, #-0xd0]
7101e0f410  cbz x8,0x7101e0f698
7101e0f414  adrp x8,0x7106dd5000
7101e0f418  ldrb w8,[x8, #0x3a8]
7101e0f41c  cmp w8,#0x1
7101e0f420  b.ne 0x7101e0f698
7101e0f424  adrp x9,0x7106dd5000
7101e0f428  ldur w8,[x29, #-0xc0]
7101e0f42c  ldr w9,[x9, #0x3ac]
7101e0f430  cmp w8,w9
7101e0f434  b.ne 0x7101e0f698
7101e0f438  ldur x8,[x29, #-0xc8]
7101e0f43c  ldr wzr,[x8, #0x38]!
7101e0f440  ldaxr w9,[x8]
7101e0f444  sub w9,w9,#0x1
7101e0f448  stlxr w10,w9,[x8]
7101e0f44c  cbnz w10,0x7101e0f440
7101e0f450  b 0x7101e0f698
7101e0f454  mov x0,x19
7101e0f458  bl 0x7101e134d0
7101e0f45c  ldr x8,[x19, #0x150]
7101e0f460  ldr x8,[x8]
7101e0f464  adrp x24,0x710532f000
7101e0f468  ldr x20,[x8]
7101e0f46c  ldr x8,[x24, #0x840]
7101e0f470  ldr x8,[x8, #0x8]
7101e0f474  ldr x21,[x8, #0xb8]
7101e0f478  ldr x8,[x19, #0x180]
7101e0f47c  ldr w8,[x8, #0x254]
7101e0f480  cmp w8,#0x1
7101e0f484  b.ne 0x7101e0f59c
7101e0f488  ldr x8,[x20, #0x600]
7101e0f48c  ldrb w9,[x8, #0x4aa]
7101e0f490  cbz w9,0x7101e0f59c
7101e0f494  ldrb w9,[x8, #0x1bc]
7101e0f498  tbnz w9,#0x1,0x7101e0f4a4
7101e0f49c  ldrb w8,[x8, #0x1b8]
7101e0f4a0  tbz w8,#0x1,0x7101e0f59c
7101e0f4a4  ldr w8,[x19, #0x23c]
7101e0f4a8  cmp w8,#0x1
7101e0f4ac  b.lt 0x7101e0f59c
7101e0f4b0  orr w8,wzr,#0xffff
7101e0f4b4  sturh w8,[x29, #-0x90]
7101e0f4b8  mov x21,#-0x1
7101e0f4bc  mov w8,#0xffffffff
7101e0f4c0  stur x21,[x29, #-0x98]
7101e0f4c4  stur xzr,[x23, #0xc]
7101e0f4c8  sturh wzr,[x29, #-0x84]
7101e0f4cc  sub x1,x29,#0x98
7101e0f4d0  mov x0,x19
7101e0f4d4  stur w8,[x29, #-0x54]
7101e0f4d8  mov w2,wzr
7101e0f4dc  sturb wzr,[x29, #-0x50]
7101e0f4e0  stur wzr,[x29, #-0x4c]
7101e0f4e4  sturb wzr,[x29, #-0x48]
7101e0f4e8  ldrh w8,[x19, #0x1a8]
7101e0f4ec  sturh w8,[x29, #-0x96]
7101e0f4f0  ldrh w8,[x19, #0x1aa]
7101e0f4f4  sturh w8,[x29, #-0x94]
7101e0f4f8  ldrh w8,[x19, #0x1ac]
7101e0f4fc  sturh w8,[x29, #-0x92]
7101e0f500  ldrh w8,[x19, #0x1ae]
7101e0f504  sturh w8,[x29, #-0x90]
7101e0f508  bl 0x7101e16c20
7101e0f50c  adrp x8,0x710532f000
7101e0f510  ldr x8,[x8, #0x8d0]
7101e0f514  ldr x0,[x8, #0x8]
7101e0f518  ldrb w8,[x0, #0x191]
7101e0f51c  cbnz w8,0x7101e0f7a8
7101e0f520  mov x20,#0x5170
7101e0f524  movk x20,#0xc0b6, LSL #16
7101e0f528  movk x20,#0x10, LSL #32
7101e0f52c  mov w2,#0x4
7101e0f530  mov x1,x20
7101e0f534  bl 0x7103313f20
7101e0f538  tbz w0,#0x0,0x7101e0f7a8
7101e0f53c  add x0,sp,#0x188
7101e0f540  mov x1,x20
7101e0f544  bl 0x71024076d0
7101e0f548  ldr x8,[sp, #0x198]
7101e0f54c  adrp x9,0x7104f73000
7101e0f550  add x9,x9,#0xd50
7101e0f554  str x9,[sp, #0x190]
7101e0f558  cbz x8,0x7101e0f7d0
7101e0f55c  adrp x8,0x7106dd5000
7101e0f560  ldrb w8,[x8, #0x3a8]
7101e0f564  cmp w8,#0x1
7101e0f568  b.ne 0x7101e0f7d0
7101e0f56c  adrp x9,0x7106dd5000
7101e0f570  ldr w8,[sp, #0x1a0]
7101e0f574  ldr w9,[x9, #0x3ac]
7101e0f578  cmp w8,w9
7101e0f57c  b.ne 0x7101e0f7d0
7101e0f580  ldr x8,[sp, #0x198]
7101e0f584  ldr wzr,[x8, #0x38]!
7101e0f588  ldaxr w9,[x8]
7101e0f58c  sub w9,w9,#0x1
7101e0f590  stlxr w10,w9,[x8]
7101e0f594  cbnz w10,0x7101e0f588
7101e0f598  b 0x7101e0f7d0
7101e0f59c  ldr x8,[x21, #0x80]
7101e0f5a0  ldr w9,[x8, #0x2270]
7101e0f5a4  cbz w9,0x7101e0fb14
7101e0f5a8  ldr x0,[x8, #0x2268]
7101e0f5ac  ldr w11,[x8, #0x11b0]
7101e0f5b0  sub w13,w11,#0x1
7101e0f5b4  ldr w10,[x0, #0x254]
7101e0f5b8  cmp w13,#0x5
7101e0f5bc  mov w13,#0x1
7101e0f5c0  mov w12,#0x2
7101e0f5c4  cneg w13,w13,cs
7101e0f5c8  cmp w11,#0x5
7101e0f5cc  csel w11,w12,w13,gt
7101e0f5d0  cmp w10,w11
7101e0f5d4  b.ne 0x7101e0f6c8
7101e0f5d8  ldr x8,[x0]
7101e0f5dc  ldr x8,[x8, #0x78]
7101e0f5e0  blr x8
7101e0f5e4  tbz w0,#0x0,0x7101e0f6d4
7101e0f5e8  ldrsw x8,[x19, #0x13c]
7101e0f5ec  cmp w8,#0x13
7101e0f5f0  b.cs 0x7101e103d8
7101e0f5f4  add x8,x19,x8, LSL #0x2
7101e0f5f8  mov w9,#0x5
7101e0f5fc  str w9,[x8, #0xf0]
7101e0f600  ldr x0,[x19, #0x180]
7101e0f604  cbz x0,0x7101e0f6a8
7101e0f608  ldr x8,[x19, #0x188]
7101e0f60c  cbz x8,0x7101e0f6a8
7101e0f610  ldr x8,[x19, #0x190]
7101e0f614  cbz x8,0x7101e0f6a8
7101e0f618  ldr x8,[x0]
7101e0f61c  ldr x8,[x8, #0x70]
7101e0f620  mov w1,wzr
7101e0f624  blr x8
7101e0f628  ldr x0,[x19, #0x188]
7101e0f62c  ldr x8,[x0]
7101e0f630  ldr x8,[x8, #0x70]
7101e0f634  mov w1,wzr
7101e0f638  blr x8
7101e0f63c  ldr x0,[x19, #0x190]
7101e0f640  ldr x8,[x0]
7101e0f644  ldr x2,[x8, #0x70]
7101e0f648  mov w1,wzr
7101e0f64c  add sp,sp,#0x280
7101e0f650  ldp x29,x30,[sp, #0x40]
7101e0f654  ldr x28,[sp, #0x8]
7101e0f658  ldp x20,x19,[sp, #0x30]
7101e0f65c  ldp x22,x21,[sp, #0x20]
7101e0f660  ldp x24,x23,[sp, #0x10]
7101e0f664  ldr d8,[sp], #0x50
7101e0f668  br x2
7101e0f66c  mov x8,#0x650000000000
7101e0f670  movk x8,#0x87, LSL #48
7101e0f674  sturb wzr,[x29, #-0xb8]
7101e0f678  stp xzr,x8,[x29, #-0xc8]
7101e0f67c  mov x8,#-0x1
7101e0f680  stp x8,xzr,[x29, #-0xb0]
7101e0f684  adrp x8,0x7104f73000
7101e0f688  add x8,x8,#0xd50
7101e0f68c  stur wzr,[x29, #-0xd8]
7101e0f690  stur xzr,[x29, #-0xa0]
7101e0f694  stur x8,[x29, #-0xd0]
7101e0f698  stur xzr,[x29, #-0xc8]
7101e0f69c  sturb wzr,[x29, #-0xb8]
7101e0f6a0  add x8,x19,#0x263
7101e0f6a4  strh wzr,[x8]
7101e0f6a8  add sp,sp,#0x280
7101e0f6ac  ldp x29,x30,[sp, #0x40]
7101e0f6b0  ldr x28,[sp, #0x8]
7101e0f6b4  ldp x20,x19,[sp, #0x30]
7101e0f6b8  ldp x22,x21,[sp, #0x20]
7101e0f6bc  ldp x24,x23,[sp, #0x10]
7101e0f6c0  ldr d8,[sp], #0x50
7101e0f6c4  ret
7101e0f6c8  mov w10,#0x2270
7101e0f6cc  add x22,x8,x10
7101e0f6d0  b 0x7101e0f6e4
7101e0f6d4  ldr x8,[x21, #0x80]
7101e0f6d8  mov w9,#0x2270
7101e0f6dc  add x22,x8,x9
7101e0f6e0  ldr w9,[x8, #0x2270]
7101e0f6e4  sub w9,w9,#0x1
7101e0f6e8  cmp w9,#0x1
7101e0f6ec  b.hi 0x7101e0f720
7101e0f6f0  adrp x8,0x710532f000
7101e0f6f4  ldr x8,[x8, #0x8d0]
7101e0f6f8  ldr x0,[x8, #0x8]
7101e0f6fc  ldp x8,x9,[x0, #0x40]
7101e0f700  sub x9,x9,x8
7101e0f704  asr x9,x9,#0x3
7101e0f708  cmp x9,#0x3
7101e0f70c  b.cc 0x7101e0f82c
7101e0f710  ldr x20,[x8, #0x10]
7101e0f714  ldrb w8,[x0, #0x191]
7101e0f718  cbnz w8,0x7101e0f8a8
7101e0f71c  b 0x7101e0f838
7101e0f720  ldr x9,[x20, #0x600]
7101e0f724  ldrb w10,[x9, #0x4aa]
7101e0f728  cbz w10,0x7101e0f968
7101e0f72c  ldrb w10,[x9, #0x1c8]
7101e0f730  tbz w10,#0x1,0x7101e0f948
7101e0f734  ldrsh w10,[x19, #0x1a8]
7101e0f738  cmn w10,#0x1
7101e0f73c  b.eq 0x7101e0f948
7101e0f740  mov w8,#0x1
7101e0f744  strb w8,[x19, #0x262]
7101e0f748  ldrsw x8,[x19, #0x13c]
7101e0f74c  cmp w8,#0x13
7101e0f750  b.cs 0x7101e103d8
7101e0f754  add x8,x19,x8, LSL #0x2
7101e0f758  mov w9,#0x9
7101e0f75c  str w9,[x8, #0xf0]
7101e0f760  ldr x8,[x19, #0x180]
7101e0f764  cbz x8,0x7101e0f6a8
7101e0f768  ldr x8,[x19, #0x188]
7101e0f76c  cbz x8,0x7101e0f6a8
7101e0f770  ldr x8,[x19, #0x190]
7101e0f774  cbz x8,0x7101e0f6a8
7101e0f778  ldr x8,[x19, #0x150]
7101e0f77c  ldr x8,[x8]
7101e0f780  ldr x0,[x8]
7101e0f784  mov w1,wzr
7101e0f788  add sp,sp,#0x280
7101e0f78c  ldp x29,x30,[sp, #0x40]
7101e0f790  ldr x28,[sp, #0x8]
7101e0f794  ldp x20,x19,[sp, #0x30]
7101e0f798  ldp x22,x21,[sp, #0x20]
7101e0f79c  ldp x24,x23,[sp, #0x10]
7101e0f7a0  ldr d8,[sp], #0x50
7101e0f7a4  b 0x71037760f0
7101e0f7a8  mov x8,#0x650000000000
7101e0f7ac  movk x8,#0x87, LSL #48
7101e0f7b0  strb wzr,[sp, #0x1a8]
7101e0f7b4  stp x21,xzr,[sp, #0x1b0]
7101e0f7b8  str wzr,[sp, #0x188]
7101e0f7bc  str xzr,[sp, #0x1c0]
7101e0f7c0  stp xzr,x8,[sp, #0x198]
7101e0f7c4  adrp x8,0x7104f73000
7101e0f7c8  add x8,x8,#0xd50
7101e0f7cc  str x8,[sp, #0x190]
7101e0f7d0  str xzr,[sp, #0x198]
7101e0f7d4  strb wzr,[sp, #0x1a8]
7101e0f7d8  ldrsw x8,[x19, #0x13c]
7101e0f7dc  cmp w8,#0x13
7101e0f7e0  b.cs 0x7101e103d8
7101e0f7e4  add x8,x19,x8, LSL #0x2
7101e0f7e8  orr w9,wzr,#0x3
7101e0f7ec  str w9,[x8, #0xf0]
7101e0f7f0  ldr x0,[x19, #0x180]
7101e0f7f4  cbz x0,0x7101e0f6a8
7101e0f7f8  ldr x8,[x19, #0x188]
7101e0f7fc  cbz x8,0x7101e0f6a8
7101e0f800  ldr x8,[x19, #0x190]
7101e0f804  cbz x8,0x7101e0f6a8
7101e0f808  ldr x8,[x0]
7101e0f80c  ldr x8,[x8, #0x70]
7101e0f810  mov w1,wzr
7101e0f814  blr x8
7101e0f818  ldr x0,[x19, #0x188]
7101e0f81c  ldr x8,[x0]
7101e0f820  ldr x8,[x8, #0x70]
7101e0f824  mov w1,#0x1
7101e0f828  b 0x7101e0f92c
7101e0f82c  mov x20,xzr
7101e0f830  ldrb w8,[x0, #0x191]
7101e0f834  cbnz w8,0x7101e0f8a8
7101e0f838  mov w2,#0x4
7101e0f83c  mov x1,x20
7101e0f840  bl 0x7103313f20
7101e0f844  tbz w0,#0x0,0x7101e0f8a8
7101e0f848  add x0,sp,#0x148
7101e0f84c  mov x1,x20
7101e0f850  bl 0x71024076d0
7101e0f854  ldr x8,[sp, #0x158]
7101e0f858  adrp x9,0x7104f73000
7101e0f85c  add x9,x9,#0xd50
7101e0f860  str x9,[sp, #0x150]
7101e0f864  cbz x8,0x7101e0f8d4
7101e0f868  adrp x8,0x7106dd5000
7101e0f86c  ldrb w8,[x8, #0x3a8]
7101e0f870  cmp w8,#0x1
7101e0f874  b.ne 0x7101e0f8d4
7101e0f878  adrp x9,0x7106dd5000
7101e0f87c  ldr w8,[sp, #0x160]
7101e0f880  ldr w9,[x9, #0x3ac]
7101e0f884  cmp w8,w9
7101e0f888  b.ne 0x7101e0f8d4
7101e0f88c  ldr x8,[sp, #0x158]
7101e0f890  ldr wzr,[x8, #0x38]!
7101e0f894  ldaxr w9,[x8]
7101e0f898  sub w9,w9,#0x1
7101e0f89c  stlxr w10,w9,[x8]
7101e0f8a0  cbnz w10,0x7101e0f894
7101e0f8a4  b 0x7101e0f8d4
7101e0f8a8  mov x8,#0x650000000000
7101e0f8ac  movk x8,#0x87, LSL #48
7101e0f8b0  strb wzr,[sp, #0x168]
7101e0f8b4  stp xzr,x8,[sp, #0x158]
7101e0f8b8  mov x8,#-0x1
7101e0f8bc  stp x8,xzr,[sp, #0x170]
7101e0f8c0  adrp x8,0x7104f73000
7101e0f8c4  add x8,x8,#0xd50
7101e0f8c8  str wzr,[sp, #0x148]
7101e0f8cc  str xzr,[sp, #0x180]
7101e0f8d0  str x8,[sp, #0x150]
7101e0f8d4  str xzr,[sp, #0x158]
7101e0f8d8  strb wzr,[sp, #0x168]
7101e0f8dc  ldrsw x8,[x19, #0x13c]
7101e0f8e0  cmp w8,#0x13
7101e0f8e4  b.cs 0x7101e103d8
7101e0f8e8  add x8,x19,x8, LSL #0x2
7101e0f8ec  orr w9,wzr,#0x7
7101e0f8f0  str w9,[x8, #0xf0]
7101e0f8f4  ldr x0,[x19, #0x180]
7101e0f8f8  cbz x0,0x7101e0f6a8
7101e0f8fc  ldr x8,[x19, #0x188]
7101e0f900  cbz x8,0x7101e0f6a8
7101e0f904  ldr x8,[x19, #0x190]
7101e0f908  cbz x8,0x7101e0f6a8
7101e0f90c  ldr x8,[x0]
7101e0f910  ldr x8,[x8, #0x70]
7101e0f914  mov w1,wzr
7101e0f918  blr x8
7101e0f91c  ldr x0,[x19, #0x188]
7101e0f920  ldr x8,[x0]
7101e0f924  ldr x8,[x8, #0x70]
7101e0f928  mov w1,wzr
7101e0f92c  blr x8
7101e0f930  ldr x0,[x19, #0x190]
7101e0f934  ldr x8,[x0]
7101e0f938  ldr x8,[x8, #0x70]
7101e0f93c  mov w1,wzr
7101e0f940  blr x8
7101e0f944  b 0x7101e0f6a8
7101e0f948  ldrb w10,[x9, #0x1b4]
7101e0f94c  tbnz w10,#0x1,0x7101e0f990
7101e0f950  ldrb w10,[x9, #0x1c4]
7101e0f954  tbnz w10,#0x1,0x7101e0fa68
7101e0f958  ldrb w10,[x9, #0x1c0]
7101e0f95c  tbnz w10,#0x1,0x7101e0ff00
7101e0f960  ldrb w9,[x9, #0x1cc]
7101e0f964  tbnz w9,#0x1,0x7101e102b4
7101e0f968  ldr x9,[x19, #0x180]
7101e0f96c  ldrb w10,[x9, #0x280]
7101e0f970  cbz w10,0x7101e0fa2c
7101e0f974  ldrb w9,[x8, #0xc9]
7101e0f978  mov w10,#0x2260
7101e0f97c  add x20,x8,x10
7101e0f980  cbz w9,0x7101e0faf8
7101e0f984  mov x0,x20
7101e0f988  mov w1,wzr
7101e0f98c  b 0x7101e0fb00
7101e0f990  ldrsh w8,[x19, #0x1a8]
7101e0f994  cmn w8,#0x1
7101e0f998  b.eq 0x7101e0f6a8
7101e0f99c  add x21,x19,#0x160
7101e0f9a0  adrp x1,0x7104422000
7101e0f9a4  add x1,x1,#0x8b8
7101e0f9a8  sub x8,x29,#0x98
7101e0f9ac  mov x0,x21
7101e0f9b0  bl 0x7103776640
7101e0f9b4  ldur x20,[x29, #-0x90]
7101e0f9b8  fmov s0,0x3f800000
7101e0f9bc  adrp x1,0x71042a3000
7101e0f9c0  add x1,x1,#0x57e
7101e0f9c4  mov x0,x20
7101e0f9c8  bl 0x7103778300
7101e0f9cc  adrp x23,0x710523d000
7101e0f9d0  add x23,x23,#0x988
7101e0f9d4  stp x23,xzr,[x29, #-0x98]
7101e0f9d8  cbz x20,0x7101e0f9fc
7101e0f9dc  ldr x0,[x20, #0x18]
7101e0f9e0  adrp x8,0x710523d000
7101e0f9e4  add x8,x8,#0x9a8
7101e0f9e8  stp x8,xzr,[x20, #0x10]
7101e0f9ec  cbz x0,0x7101e0f9f4
7101e0f9f0  bl 0x710392eb40
7101e0f9f4  mov x0,x20
7101e0f9f8  bl 0x710392eb40
7101e0f9fc  adrp x8,0x710532f000
7101e0fa00  ldr x8,[x8, #0x8d0]
7101e0fa04  ldr x0,[x8, #0x8]
7101e0fa08  ldp x8,x9,[x0, #0x40]
7101e0fa0c  sub x9,x9,x8
7101e0fa10  asr x9,x9,#0x3
7101e0fa14  cmp x9,#0x3
7101e0fa18  b.cc 0x7101e0fbd8
7101e0fa1c  ldr x20,[x8, #0x10]
7101e0fa20  ldrb w8,[x0, #0x191]
7101e0fa24  cbnz w8,0x7101e0fc54
7101e0fa28  b 0x7101e0fbe4
7101e0fa2c  ldr w8,[x9, #0x25c]
7101e0fa30  cmp w8,#0x1
7101e0fa34  b.ne 0x7101e0f6a8
7101e0fa38  adrp x8,0x710532f000
7101e0fa3c  ldr x8,[x8, #0x8d0]
7101e0fa40  ldr x0,[x8, #0x8]
7101e0fa44  ldp x8,x9,[x0, #0x40]
7101e0fa48  sub x9,x9,x8
7101e0fa4c  asr x9,x9,#0x3
7101e0fa50  cmp x9,#0x3
7101e0fa54  b.cc 0x7101e100cc
7101e0fa58  ldr x20,[x8, #0x10]
7101e0fa5c  ldrb w8,[x0, #0x191]
7101e0fa60  cbnz w8,0x7101e10148
7101e0fa64  b 0x7101e100d8
7101e0fa68  adrp x8,0x710532f000
7101e0fa6c  ldr x8,[x8, #0x8d0]
7101e0fa70  ldr x0,[x8, #0x8]
7101e0fa74  ldrb w8,[x0, #0x191]
7101e0fa78  cbnz w8,0x7101e0fb24
7101e0fa7c  mov x20,#0x5170
7101e0fa80  movk x20,#0xc0b6, LSL #16
7101e0fa84  movk x20,#0x10, LSL #32
7101e0fa88  mov w2,#0x4
7101e0fa8c  mov x1,x20
7101e0fa90  bl 0x7103313f20
7101e0fa94  tbz w0,#0x0,0x7101e0fb24
7101e0fa98  add x0,sp,#0xc8
7101e0fa9c  mov x1,x20
7101e0faa0  bl 0x71024076d0
7101e0faa4  ldr x8,[sp, #0xd8]
7101e0faa8  adrp x9,0x7104f73000
7101e0faac  add x9,x9,#0xd50
7101e0fab0  str x9,[sp, #0xd0]
7101e0fab4  cbz x8,0x7101e0fb50
7101e0fab8  adrp x8,0x7106dd5000
7101e0fabc  ldrb w8,[x8, #0x3a8]
7101e0fac0  cmp w8,#0x1
7101e0fac4  b.ne 0x7101e0fb50
7101e0fac8  adrp x9,0x7106dd5000
7101e0facc  ldr w8,[sp, #0xe0]
7101e0fad0  ldr w9,[x9, #0x3ac]
7101e0fad4  cmp w8,w9
7101e0fad8  b.ne 0x7101e0fb50
7101e0fadc  ldr x8,[sp, #0xd8]
7101e0fae0  ldr wzr,[x8, #0x38]!
7101e0fae4  ldaxr w9,[x8]
7101e0fae8  sub w9,w9,#0x1
7101e0faec  stlxr w10,w9,[x8]
7101e0faf0  cbnz w10,0x7101e0fae4
7101e0faf4  b 0x7101e0fb50
7101e0faf8  mov w1,#0x4
7101e0fafc  mov x0,x20
7101e0fb00  mov w2,wzr
7101e0fb04  bl 0x7103771be0
7101e0fb08  ldr x8,[x20]
7101e0fb0c  ldr w8,[x8, #0x25c]
7101e0fb10  str w8,[x22]
7101e0fb14  mov x0,x19
7101e0fb18  bl 0x7101e13790
7101e0fb1c  strb wzr,[x19, #0x260]
7101e0fb20  b 0x7101e0f6a8
7101e0fb24  mov x8,#0x650000000000
7101e0fb28  movk x8,#0x87, LSL #48
7101e0fb2c  strb wzr,[sp, #0xe8]
7101e0fb30  stp xzr,x8,[sp, #0xd8]
7101e0fb34  mov x8,#-0x1
7101e0fb38  stp x8,xzr,[sp, #0xf0]
7101e0fb3c  adrp x8,0x7104f73000
7101e0fb40  add x8,x8,#0xd50
7101e0fb44  str wzr,[sp, #0xc8]
7101e0fb48  str xzr,[sp, #0x100]
7101e0fb4c  str x8,[sp, #0xd0]
7101e0fb50  str xzr,[sp, #0xd8]
7101e0fb54  strb wzr,[sp, #0xe8]
7101e0fb58  ldrsw x8,[x19, #0x13c]
7101e0fb5c  cmp w8,#0x13
7101e0fb60  b.cs 0x7101e103d8
7101e0fb64  add x8,x19,x8, LSL #0x2
7101e0fb68  mov w9,#0x4
7101e0fb6c  str w9,[x8, #0xf0]
7101e0fb70  ldr x0,[x19, #0x180]
7101e0fb74  cbz x0,0x7101e0f6a8
7101e0fb78  ldr x8,[x19, #0x188]
7101e0fb7c  cbz x8,0x7101e0f6a8
7101e0fb80  ldr x8,[x19, #0x190]
7101e0fb84  cbz x8,0x7101e0f6a8
7101e0fb88  ldr x8,[x0]
7101e0fb8c  ldr x8,[x8, #0x70]
7101e0fb90  mov w1,wzr
7101e0fb94  add x20,x19,#0x190
7101e0fb98  blr x8
7101e0fb9c  ldr x0,[x19, #0x188]
7101e0fba0  ldr x8,[x0]
7101e0fba4  ldr x8,[x8, #0x70]
7101e0fba8  mov w1,wzr
7101e0fbac  blr x8
7101e0fbb0  orr w1,wzr,#0x3
7101e0fbb4  mov x0,x20
7101e0fbb8  mov w2,wzr
7101e0fbbc  bl 0x7103771a80
7101e0fbc0  ldr x0,[x19, #0x190]
7101e0fbc4  ldr x8,[x0]
7101e0fbc8  ldr x8,[x8, #0x70]
7101e0fbcc  mov w1,#0x1
7101e0fbd0  blr x8
7101e0fbd4  b 0x7101e0f6a8
7101e0fbd8  mov x20,xzr
7101e0fbdc  ldrb w8,[x0, #0x191]
7101e0fbe0  cbnz w8,0x7101e0fc54
7101e0fbe4  mov w2,#0x4
7101e0fbe8  mov x1,x20
7101e0fbec  bl 0x7103313f20
7101e0fbf0  tbz w0,#0x0,0x7101e0fc54
7101e0fbf4  add x0,sp,#0x108
7101e0fbf8  mov x1,x20
7101e0fbfc  bl 0x71024076d0
7101e0fc00  ldr x8,[sp, #0x118]
7101e0fc04  adrp x9,0x7104f73000
7101e0fc08  add x9,x9,#0xd50
7101e0fc0c  str x9,[sp, #0x110]
7101e0fc10  cbz x8,0x7101e0fc80
7101e0fc14  adrp x8,0x7106dd5000
7101e0fc18  ldrb w8,[x8, #0x3a8]
7101e0fc1c  cmp w8,#0x1
7101e0fc20  b.ne 0x7101e0fc80
7101e0fc24  adrp x9,0x7106dd5000
7101e0fc28  ldr w8,[sp, #0x120]
7101e0fc2c  ldr w9,[x9, #0x3ac]
7101e0fc30  cmp w8,w9
7101e0fc34  b.ne 0x7101e0fc80
7101e0fc38  ldr x8,[sp, #0x118]
7101e0fc3c  ldr wzr,[x8, #0x38]!
7101e0fc40  ldaxr w9,[x8]
7101e0fc44  sub w9,w9,#0x1
7101e0fc48  stlxr w10,w9,[x8]
7101e0fc4c  cbnz w10,0x7101e0fc40
7101e0fc50  b 0x7101e0fc80
7101e0fc54  mov x8,#0x650000000000
7101e0fc58  movk x8,#0x87, LSL #48
7101e0fc5c  strb wzr,[sp, #0x128]
7101e0fc60  stp xzr,x8,[sp, #0x118]
7101e0fc64  mov x8,#-0x1
7101e0fc68  stp x8,xzr,[sp, #0x130]
7101e0fc6c  adrp x8,0x7104f73000
7101e0fc70  add x8,x8,#0xd50
7101e0fc74  str wzr,[sp, #0x108]
7101e0fc78  str xzr,[sp, #0x140]
7101e0fc7c  str x8,[sp, #0x110]
7101e0fc80  adrp x1,0x710438d000
7101e0fc84  add x1,x1,#0x7
7101e0fc88  sub x8,x29,#0x98
7101e0fc8c  mov x0,x21
7101e0fc90  str xzr,[sp, #0x118]
7101e0fc94  strb wzr,[sp, #0x128]
7101e0fc98  bl 0x7103776640
7101e0fc9c  fmov s8,0x3f800000
7101e0fca0  ldur x20,[x29, #-0x90]
7101e0fca4  adrp x22,0x710436c000
7101e0fca8  add x22,x22,#0x90a
7101e0fcac  mov x1,x22
7101e0fcb0  mov v0.16B,v8.16B
7101e0fcb4  mov x0,x20
7101e0fcb8  bl 0x7103778300
7101e0fcbc  mov w8,#0x1
7101e0fcc0  strb w8,[x19, #0x263]
7101e0fcc4  adrp x8,0x710593b000
7101e0fcc8  ldr x8,[x8, #0x988]
7101e0fccc  ldr x8,[x8, #0x8]
7101e0fcd0  ldr w9,[x8]
7101e0fcd4  orr w9,w9,#0x2
7101e0fcd8  str w9,[x8]
7101e0fcdc  adrp x1,0x7104433000
7101e0fce0  add x1,x1,#0x603
7101e0fce4  sub x8,x29,#0xe8
7101e0fce8  mov x0,x21
7101e0fcec  bl 0x7103776640
7101e0fcf0  adrp x1,0x7104270000
7101e0fcf4  add x1,x1,#0x51a
7101e0fcf8  sub x8,x29,#0xf8
7101e0fcfc  sub x0,x29,#0xe8
7101e0fd00  mov w2,wzr
7101e0fd04  bl 0x7103776640
7101e0fd08  ldur x21,[x29, #-0xf0]
7101e0fd0c  mov v0.16B,v8.16B
7101e0fd10  mov x1,x22
7101e0fd14  mov x0,x21
7101e0fd18  bl 0x7103778300
7101e0fd1c  stp x23,xzr,[x29, #-0xf8]
7101e0fd20  cbz x21,0x7101e0fd44
7101e0fd24  ldr x0,[x21, #0x18]
7101e0fd28  adrp x8,0x710523d000
7101e0fd2c  add x8,x8,#0x9a8
7101e0fd30  stp x8,xzr,[x21, #0x10]
7101e0fd34  cbz x0,0x7101e0fd3c
7101e0fd38  bl 0x710392eb40
7101e0fd3c  mov x0,x21
7101e0fd40  bl 0x710392eb40
7101e0fd44  adrp x1,0x7104270000
7101e0fd48  add x1,x1,#0x51a
7101e0fd4c  sub x8,x29,#0xf8
7101e0fd50  sub x0,x29,#0xe8
7101e0fd54  mov w2,#0x1
7101e0fd58  bl 0x7103776640
7101e0fd5c  ldur x21,[x29, #-0xf0]
7101e0fd60  fmov s0,0x3f800000
7101e0fd64  adrp x1,0x710436c000
7101e0fd68  add x1,x1,#0x90a
7101e0fd6c  mov x0,x21
7101e0fd70  bl 0x7103778300
7101e0fd74  stp x23,xzr,[x29, #-0xf8]
7101e0fd78  cbz x21,0x7101e0fd9c
7101e0fd7c  ldr x0,[x21, #0x18]
7101e0fd80  adrp x8,0x710523d000
7101e0fd84  add x8,x8,#0x9a8
7101e0fd88  stp x8,xzr,[x21, #0x10]
7101e0fd8c  cbz x0,0x7101e0fd94
7101e0fd90  bl 0x710392eb40
7101e0fd94  mov x0,x21
7101e0fd98  bl 0x710392eb40
7101e0fd9c  adrp x1,0x7104270000
7101e0fda0  add x1,x1,#0x51a
7101e0fda4  sub x8,x29,#0xf8
7101e0fda8  sub x0,x29,#0xe8
7101e0fdac  mov w2,#0x2
7101e0fdb0  bl 0x7103776640
7101e0fdb4  ldur x21,[x29, #-0xf0]
7101e0fdb8  fmov s0,0x3f800000
7101e0fdbc  adrp x1,0x710436c000
7101e0fdc0  add x1,x1,#0x90a
7101e0fdc4  mov x0,x21
7101e0fdc8  bl 0x7103778300
7101e0fdcc  stp x23,xzr,[x29, #-0xf8]
7101e0fdd0  cbz x21,0x7101e0fdf4
7101e0fdd4  ldr x0,[x21, #0x18]
7101e0fdd8  adrp x8,0x710523d000
7101e0fddc  add x8,x8,#0x9a8
7101e0fde0  stp x8,xzr,[x21, #0x10]
7101e0fde4  cbz x0,0x7101e0fdec
7101e0fde8  bl 0x710392eb40
7101e0fdec  mov x0,x21
7101e0fdf0  bl 0x710392eb40
7101e0fdf4  mov x8,#-0x1
7101e0fdf8  str x8,[x19, #0x1a8]
7101e0fdfc  add x8,x19,#0x1b6
7101e0fe00  orr w9,wzr,#0xffff
7101e0fe04  strh wzr,[x19, #0x1b4]
7101e0fe08  str wzr,[x19, #0x1b0]
7101e0fe0c  str w9,[x8]
7101e0fe10  strb wzr,[x19, #0x1ba]
7101e0fe14  ldr x8,[x24, #0x840]
7101e0fe18  ldr x8,[x8, #0x8]
7101e0fe1c  ldr x8,[x8, #0xb8]
7101e0fe20  ldr x21,[x8, #0x80]
7101e0fe24  mov w8,#0x11ac
7101e0fe28  add x8,x21,x8
7101e0fe2c  ldrb w9,[x8]
7101e0fe30  cbz w9,0x7101e10094
7101e0fe34  strb wzr,[x8]
7101e0fe38  ldr w8,[x21, #0x11b0]
7101e0fe3c  cmp w8,#0x6
7101e0fe40  b.lt 0x7101e0ff9c
7101e0fe44  ldr x9,[x21, #0x2268]
7101e0fe48  ldr x8,[x9, #0x1b8]
7101e0fe4c  cbz x8,0x7101e10094
7101e0fe50  add x9,x9,#0x1b8
7101e0fe54  mov x10,x9
7101e0fe58  mov x11,x8
7101e0fe5c  ldr w12,[x11, #0x20]
7101e0fe60  cmp w12,#0x2
7101e0fe64  cset w12,lt
7101e0fe68  csel x10,x10,x11,lt
7101e0fe6c  ldr x11,[x11, w12, UXTW #0x3]
7101e0fe70  cbnz x11,0x7101e0fe5c
7101e0fe74  cmp x10,x9
7101e0fe78  b.eq 0x7101e0fec8
7101e0fe7c  ldr w11,[x10, #0x20]
7101e0fe80  cmp w11,#0x2
7101e0fe84  b.gt 0x7101e0fec8
7101e0fe88  ldr x19,[x10, #0x28]
7101e0fe8c  cbz x19,0x7101e0fec8
7101e0fe90  ldr x8,[x19]
7101e0fe94  ldr x8,[x8, #0x1f8]
7101e0fe98  mov x0,x19
7101e0fe9c  mov w1,wzr
7101e0fea0  blr x8
7101e0fea4  ldr x8,[x19]
7101e0fea8  ldr x8,[x8, #0x388]
7101e0feac  mov w1,#0x1
7101e0feb0  mov x0,x19
7101e0feb4  mov w2,wzr
7101e0feb8  blr x8
7101e0febc  ldr x8,[x21, #0x2268]
7101e0fec0  add x9,x8,#0x1b8
7101e0fec4  ldr x8,[x8, #0x1b8]
7101e0fec8  cbz x8,0x7101e10094
7101e0fecc  mov x10,x9
7101e0fed0  ldr w11,[x8, #0x20]
7101e0fed4  cmp w11,#0x2
7101e0fed8  cset w11,lt
7101e0fedc  csel x10,x10,x8,lt
7101e0fee0  ldr x8,[x8, w11, UXTW #0x3]
7101e0fee4  cbnz x8,0x7101e0fed0
7101e0fee8  cmp x10,x9
7101e0feec  b.eq 0x7101e10094
7101e0fef0  ldr w8,[x10, #0x20]
7101e0fef4  cmp w8,#0x2
7101e0fef8  b.le 0x7101e10060
7101e0fefc  b 0x7101e10094
7101e0ff00  mov w9,#0x11ac
7101e0ff04  ldrb w9,[x8, x9, LSL ]
7101e0ff08  adrp x8,0x710532f000
7101e0ff0c  ldr x8,[x8, #0x8d0]
7101e0ff10  ldr x0,[x8, #0x8]
7101e0ff14  ldrb w8,[x0, #0x191]
7101e0ff18  cbz w9,0x7101e10320
7101e0ff1c  cbnz w8,0x7101e101d0
7101e0ff20  mov x20,#0x5170
7101e0ff24  movk x20,#0xc0b6, LSL #16
7101e0ff28  movk x20,#0x10, LSL #32
7101e0ff2c  mov w2,#0x4
7101e0ff30  mov x1,x20
7101e0ff34  bl 0x7103313f20
7101e0ff38  tbz w0,#0x0,0x7101e101d0
7101e0ff3c  add x0,sp,#0x88
7101e0ff40  mov x1,x20
7101e0ff44  bl 0x71024076d0
7101e0ff48  ldr x8,[sp, #0x98]
7101e0ff4c  adrp x9,0x7104f73000
7101e0ff50  add x9,x9,#0xd50
7101e0ff54  str x9,[sp, #0x90]
7101e0ff58  cbz x8,0x7101e101fc
7101e0ff5c  adrp x8,0x7106dd5000
7101e0ff60  ldrb w8,[x8, #0x3a8]
7101e0ff64  cmp w8,#0x1
7101e0ff68  b.ne 0x7101e101fc
7101e0ff6c  adrp x9,0x7106dd5000
7101e0ff70  ldr w8,[sp, #0xa0]
7101e0ff74  ldr w9,[x9, #0x3ac]
7101e0ff78  cmp w8,w9
7101e0ff7c  b.ne 0x7101e101fc
7101e0ff80  ldr x8,[sp, #0x98]
7101e0ff84  ldr wzr,[x8, #0x38]!
7101e0ff88  ldaxr w9,[x8]
7101e0ff8c  sub w9,w9,#0x1
7101e0ff90  stlxr w10,w9,[x8]
7101e0ff94  cbnz w10,0x7101e0ff88
7101e0ff98  b 0x7101e101fc
7101e0ff9c  sub w8,w8,#0x1
7101e0ffa0  cmp w8,#0x4
7101e0ffa4  b.hi 0x7101e10094
7101e0ffa8  ldr x9,[x21, #0x2268]
7101e0ffac  ldr x8,[x9, #0x1b8]
7101e0ffb0  cbz x8,0x7101e10094
7101e0ffb4  add x9,x9,#0x1b8
7101e0ffb8  mov x10,x9
7101e0ffbc  mov x11,x8
7101e0ffc0  ldr w12,[x11, #0x20]
7101e0ffc4  cmp w12,#0x1
7101e0ffc8  cset w12,lt
7101e0ffcc  csel x10,x10,x11,lt
7101e0ffd0  ldr x11,[x11, w12, UXTW #0x3]
7101e0ffd4  cbnz x11,0x7101e0ffc0
7101e0ffd8  cmp x10,x9
7101e0ffdc  b.eq 0x7101e1002c
7101e0ffe0  ldr w11,[x10, #0x20]
7101e0ffe4  cmp w11,#0x1
7101e0ffe8  b.gt 0x7101e1002c
7101e0ffec  ldr x19,[x10, #0x28]
7101e0fff0  cbz x19,0x7101e1002c
7101e0fff4  ldr x8,[x19]
7101e0fff8  ldr x8,[x8, #0x1f8]
7101e0fffc  mov x0,x19
7101e10000  mov w1,wzr
7101e10004  blr x8
7101e10008  ldr x8,[x19]
7101e1000c  ldr x8,[x8, #0x388]
7101e10010  mov w1,#0x1
7101e10014  mov x0,x19
7101e10018  mov w2,wzr
7101e1001c  blr x8
7101e10020  ldr x8,[x21, #0x2268]
7101e10024  add x9,x8,#0x1b8
7101e10028  ldr x8,[x8, #0x1b8]
7101e1002c  cbz x8,0x7101e10094
7101e10030  mov x10,x9
7101e10034  ldr w11,[x8, #0x20]
7101e10038  cmp w11,#0x1
7101e1003c  cset w11,lt
7101e10040  csel x10,x10,x8,lt
7101e10044  ldr x8,[x8, w11, UXTW #0x3]
7101e10048  cbnz x8,0x7101e10034
7101e1004c  cmp x10,x9
7101e10050  b.eq 0x7101e10094
7101e10054  ldr w8,[x10, #0x20]
7101e10058  cmp w8,#0x1
7101e1005c  b.gt 0x7101e10094
7101e10060  ldr x19,[x10, #0x28]
7101e10064  cbz x19,0x7101e10094
7101e10068  ldr x8,[x19]
7101e1006c  ldr x8,[x8, #0x208]
7101e10070  mov x0,x19
7101e10074  mov w1,wzr
7101e10078  blr x8
7101e1007c  ldr x8,[x19]
7101e10080  ldr x8,[x8, #0x388]
7101e10084  mov w1,#0x1
7101e10088  mov x0,x19
7101e1008c  mov w2,wzr
7101e10090  blr x8
7101e10094  ldur x19,[x29, #-0xe0]
7101e10098  stp x23,xzr,[x29, #-0xe8]
7101e1009c  cbz x19,0x7101e100c0
7101e100a0  ldr x0,[x19, #0x18]
7101e100a4  adrp x8,0x710523d000
7101e100a8  add x8,x8,#0x9a8
7101e100ac  stp x8,xzr,[x19, #0x10]
7101e100b0  cbz x0,0x7101e100b8
7101e100b4  bl 0x710392eb40
7101e100b8  mov x0,x19
7101e100bc  bl 0x710392eb40
7101e100c0  stp x23,xzr,[x29, #-0x98]
7101e100c4  cbnz x20,0x7101e0f238
7101e100c8  b 0x7101e0f6a8
7101e100cc  mov x20,xzr
7101e100d0  ldrb w8,[x0, #0x191]
7101e100d4  cbnz w8,0x7101e10148
7101e100d8  mov w2,#0x4
7101e100dc  mov x1,x20
7101e100e0  bl 0x7103313f20
7101e100e4  tbz w0,#0x0,0x7101e10148
7101e100e8  add x0,sp,#0x8
7101e100ec  mov x1,x20
7101e100f0  bl 0x71024076d0
7101e100f4  ldr x8,[sp, #0x18]
7101e100f8  adrp x9,0x7104f73000
7101e100fc  add x9,x9,#0xd50
7101e10100  str x9,[sp, #0x10]
7101e10104  cbz x8,0x7101e10174
7101e10108  adrp x8,0x7106dd5000
7101e1010c  ldrb w8,[x8, #0x3a8]
7101e10110  cmp w8,#0x1
7101e10114  b.ne 0x7101e10174
7101e10118  adrp x9,0x7106dd5000
7101e1011c  ldr w8,[sp, #0x20]
7101e10120  ldr w9,[x9, #0x3ac]
7101e10124  cmp w8,w9
7101e10128  b.ne 0x7101e10174
7101e1012c  ldr x8,[sp, #0x18]
7101e10130  ldr wzr,[x8, #0x38]!
7101e10134  ldaxr w9,[x8]
7101e10138  sub w9,w9,#0x1
7101e1013c  stlxr w10,w9,[x8]
7101e10140  cbnz w10,0x7101e10134
7101e10144  b 0x7101e10174
7101e10148  mov x8,#0x650000000000
7101e1014c  movk x8,#0x87, LSL #48
7101e10150  strb wzr,[sp, #0x28]
7101e10154  stp xzr,x8,[sp, #0x18]
7101e10158  mov x8,#-0x1
7101e1015c  stp x8,xzr,[sp, #0x30]
7101e10160  adrp x8,0x7104f73000
7101e10164  add x8,x8,#0xd50
7101e10168  str wzr,[sp, #0x8]
7101e1016c  str xzr,[sp, #0x40]
7101e10170  str x8,[sp, #0x10]
7101e10174  str xzr,[sp, #0x18]
7101e10178  strb wzr,[sp, #0x28]
7101e1017c  ldrb w8,[x19, #0x1b6]
7101e10180  cmp w8,#0xff
7101e10184  b.ne 0x7101e0f6a8
7101e10188  ldrb w8,[x19, #0x1b7]
7101e1018c  cmp w8,#0xff
7101e10190  b.ne 0x7101e0f6a8
7101e10194  mov w8,#0x1
7101e10198  str w8,[x19, #0x198]
7101e1019c  ldr w8,[x19, #0x13c]
7101e101a0  cmp w8,#0x11
7101e101a4  strb wzr,[x19, #0x1ba]
7101e101a8  strb wzr,[x19, #0x1b6]
7101e101ac  b.gt 0x7101e0f6a8
7101e101b0  add w8,w8,#0x1
7101e101b4  cmp w8,#0x13
7101e101b8  str w8,[x19, #0x13c]
7101e101bc  b.cs 0x7101e103d8
7101e101c0  add x8,x19,w8, SXTW  #0x2
7101e101c4  orr w9,wzr,#0x6
7101e101c8  str w9,[x8, #0xf0]
7101e101cc  b 0x7101e0f6a8
7101e101d0  mov x8,#0x650000000000
7101e101d4  movk x8,#0x87, LSL #48
7101e101d8  strb wzr,[sp, #0xa8]
7101e101dc  stp xzr,x8,[sp, #0x98]
7101e101e0  mov x8,#-0x1
7101e101e4  stp x8,xzr,[sp, #0xb0]
7101e101e8  adrp x8,0x7104f73000
7101e101ec  add x8,x8,#0xd50
7101e101f0  str wzr,[sp, #0x88]
7101e101f4  str xzr,[sp, #0xc0]
7101e101f8  str x8,[sp, #0x90]
7101e101fc  str xzr,[sp, #0x98]
7101e10200  strb wzr,[sp, #0xa8]
7101e10204  ldr x22,[x21, #0x80]
7101e10208  ldr x0,[x22, #0x2268]
7101e1020c  mov w8,#0x2268
7101e10210  add x20,x22,x8
7101e10214  ldr x8,[x0]
7101e10218  ldr x8,[x8, #0x70]
7101e1021c  mov w1,#0x1
7101e10220  mov w23,#0x1
7101e10224  blr x8
7101e10228  ldr w8,[x22, #0x11b0]
7101e1022c  sub w10,w8,#0x1
7101e10230  cmp w10,#0x5
7101e10234  mov w9,#0x2
7101e10238  mov x0,x20
7101e1023c  cneg w10,w23,cs
7101e10240  cmp w8,#0x5
7101e10244  csel w1,w9,w10,gt
7101e10248  mov w2,wzr
7101e1024c  bl 0x7103771a80
7101e10250  ldr x21,[x21, #0x80]
7101e10254  ldr x0,[x21, #0x2268]
7101e10258  mov w8,#0x2268
7101e1025c  add x20,x21,x8
7101e10260  ldr x8,[x0]
7101e10264  ldr x8,[x8, #0x70]
7101e10268  mov w1,#0x1
7101e1026c  mov w22,#0x1
7101e10270  blr x8
7101e10274  ldr w8,[x21, #0x11b0]
7101e10278  sub w10,w8,#0x1
7101e1027c  cmp w10,#0x5
7101e10280  mov w9,#0x2
7101e10284  mov x0,x20
7101e10288  cneg w10,w22,cs
7101e1028c  cmp w8,#0x5
7101e10290  csel w1,w9,w10,gt
7101e10294  mov w2,wzr
7101e10298  bl 0x7103771a80
7101e1029c  ldrsw x8,[x19, #0x13c]
7101e102a0  cmp w8,#0x13
7101e102a4  b.cs 0x7101e103d8
7101e102a8  add x8,x19,x8, LSL #0x2
7101e102ac  mov w9,#0x5
7101e102b0  b 0x7101e0f8f0
7101e102b4  add x0,x19,#0x160
7101e102b8  adrp x1,0x71042d6000
7101e102bc  add x1,x1,#0x862
7101e102c0  sub x8,x29,#0x98
7101e102c4  bl 0x7103776640
7101e102c8  ldur x20,[x29, #-0x90]
7101e102cc  fmov s0,0x3f800000
7101e102d0  adrp x1,0x71042a3000
7101e102d4  add x1,x1,#0x57e
7101e102d8  mov x0,x20
7101e102dc  bl 0x7103778300
7101e102e0  adrp x8,0x710523d000
7101e102e4  add x8,x8,#0x988
7101e102e8  stp x8,xzr,[x29, #-0x98]
7101e102ec  cbz x20,0x7101e10310
7101e102f0  ldr x0,[x20, #0x18]
7101e102f4  adrp x8,0x710523d000
7101e102f8  add x8,x8,#0x9a8
7101e102fc  stp x8,xzr,[x20, #0x10]
7101e10300  cbz x0,0x7101e10308
7101e10304  bl 0x710392eb40
7101e10308  mov x0,x20
7101e1030c  bl 0x710392eb40
7101e10310  mov w1,#0x1
7101e10314  mov x0,x19
7101e10318  bl 0x7101e16790
7101e1031c  b 0x7101e0f6a8
7101e10320  cbnz w8,0x7101e103a0
7101e10324  mov x20,#0x5170
7101e10328  movk x20,#0xc0b6, LSL #16
7101e1032c  movk x20,#0x10, LSL #32
7101e10330  mov w2,#0x4
7101e10334  mov x1,x20
7101e10338  bl 0x7103313f20
7101e1033c  tbz w0,#0x0,0x7101e103a0
7101e10340  add x0,sp,#0x48
7101e10344  mov x1,x20
7101e10348  bl 0x71024076d0
7101e1034c  ldr x8,[sp, #0x58]
7101e10350  adrp x9,0x7104f73000
7101e10354  add x9,x9,#0xd50
7101e10358  str x9,[sp, #0x50]
7101e1035c  cbz x8,0x7101e103cc
7101e10360  adrp x8,0x7106dd5000
7101e10364  ldrb w8,[x8, #0x3a8]
7101e10368  cmp w8,#0x1
7101e1036c  b.ne 0x7101e103cc
7101e10370  adrp x9,0x7106dd5000
7101e10374  ldr w8,[sp, #0x60]
7101e10378  ldr w9,[x9, #0x3ac]
7101e1037c  cmp w8,w9
7101e10380  b.ne 0x7101e103cc
7101e10384  ldr x8,[sp, #0x58]
7101e10388  ldr wzr,[x8, #0x38]!
7101e1038c  ldaxr w9,[x8]
7101e10390  sub w9,w9,#0x1
7101e10394  stlxr w10,w9,[x8]
7101e10398  cbnz w10,0x7101e1038c
7101e1039c  b 0x7101e103cc
7101e103a0  mov x8,#0x650000000000
7101e103a4  movk x8,#0x87, LSL #48
7101e103a8  strb wzr,[sp, #0x68]
7101e103ac  stp xzr,x8,[sp, #0x58]
7101e103b0  mov x8,#-0x1
7101e103b4  stp x8,xzr,[sp, #0x70]
7101e103b8  adrp x8,0x7104f73000
7101e103bc  add x8,x8,#0xd50
7101e103c0  str wzr,[sp, #0x48]
7101e103c4  str xzr,[sp, #0x80]
7101e103c8  str x8,[sp, #0x50]
7101e103cc  str xzr,[sp, #0x58]
7101e103d0  strb wzr,[sp, #0x68]
7101e103d4  b 0x7101e0fb58
7101e103d8  bl 0x71039c2650
