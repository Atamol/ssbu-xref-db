// addr:      7101bdc040
// offset:    0x1bdc040
// name:      FUN_7101bdc040
// mangled:   
// size:      3700

7101bdc040  sub sp,sp,#0x1a0
7101bdc044  str d8,[sp, #0x130]
7101bdc048  stp x28,x27,[sp, #0x140]
7101bdc04c  stp x26,x25,[sp, #0x150]
7101bdc050  stp x24,x23,[sp, #0x160]
7101bdc054  stp x22,x21,[sp, #0x170]
7101bdc058  stp x20,x19,[sp, #0x180]
7101bdc05c  stp x29,x30,[sp, #0x190]
7101bdc060  add x29,sp,#0x190
7101bdc064  ldr w8,[x0, #0x12c]
7101bdc068  mov x19,x0
7101bdc06c  cbz w8,0x7101bdc0d0
7101bdc070  ldr x0,[x19, #0x180]
7101bdc074  ldr x8,[x0]
7101bdc078  ldr x8,[x8, #0x78]
7101bdc07c  blr x8
7101bdc080  tbz w0,#0x0,0x7101bdc090
7101bdc084  ldr x8,[x19, #0x180]
7101bdc088  ldrb w8,[x8, #0x280]
7101bdc08c  cbnz w8,0x7101bdc0b0
7101bdc090  ldr x0,[x19, #0x178]
7101bdc094  ldr x8,[x0]
7101bdc098  ldr x8,[x8, #0x78]
7101bdc09c  blr x8
7101bdc0a0  tbz w0,#0x0,0x7101bdc180
7101bdc0a4  ldr x8,[x19, #0x178]
7101bdc0a8  ldrb w8,[x8, #0x316]
7101bdc0ac  cbz w8,0x7101bdc180
7101bdc0b0  ldr x8,[x19, #0x168]
7101bdc0b4  ldr x20,[x8, #0x80]
7101bdc0b8  ldrb w8,[x20, #0xc9]
7101bdc0bc  mov w9,#0x2260
7101bdc0c0  add x0,x20,x9
7101bdc0c4  cbz w8,0x7101bdc168
7101bdc0c8  mov w1,wzr
7101bdc0cc  b 0x7101bdc16c
7101bdc0d0  mov x0,x19
7101bdc0d4  ldr x8,[x0, #0x10]!
7101bdc0d8  ldr x9,[x0, #0x8]
7101bdc0dc  cmp x9,x8
7101bdc0e0  b.eq 0x7101bdce8c
7101bdc0e4  ldr x8,[x8]
7101bdc0e8  ldr x8,[x8]
7101bdc0ec  ldr x8,[x8]
7101bdc0f0  ldr x0,[x8]
7101bdc0f4  mov w1,#0x1
7101bdc0f8  bl 0x71037760f0
7101bdc0fc  ldp x8,x9,[x19, #0x198]
7101bdc100  ldr x0,[x19, #0x180]
7101bdc104  sub x8,x9,x8
7101bdc108  mov x9,#0x5c29
7101bdc10c  movk x9,#0xc28f, LSL #16
7101bdc110  asr x8,x8,#0x5
7101bdc114  movk x9,#0x28f5, LSL #32
7101bdc118  movk x9,#0x8f5c, LSL #48
7101bdc11c  mul x8,x8,x9
7101bdc120  ldp x9,x10,[x0, #0x180]
7101bdc124  sub x9,x10,x9
7101bdc128  lsr x9,x9,#0x3
7101bdc12c  cmp x8,w9, SXTW 
7101bdc130  b.cc 0x7101bdc138
7101bdc134  ldr x0,[x19, #0x178]
7101bdc138  ldr x8,[x0]
7101bdc13c  ldr d8,[sp, #0x130]
7101bdc140  mov w1,#0x1
7101bdc144  ldp x29,x30,[sp, #0x190]
7101bdc148  ldr x2,[x8, #0x60]
7101bdc14c  ldp x20,x19,[sp, #0x180]
7101bdc150  ldp x22,x21,[sp, #0x170]
7101bdc154  ldp x24,x23,[sp, #0x160]
7101bdc158  ldp x26,x25,[sp, #0x150]
7101bdc15c  ldp x28,x27,[sp, #0x140]
7101bdc160  add sp,sp,#0x1a0
7101bdc164  br x2
7101bdc168  mov w1,#0x4
7101bdc16c  mov w2,wzr
7101bdc170  bl 0x7103771be0
7101bdc174  ldr x8,[x20, #0x2260]
7101bdc178  ldr w8,[x8, #0x25c]
7101bdc17c  str w8,[x20, #0x2270]
7101bdc180  ldr x8,[x19, #0x168]
7101bdc184  ldr x8,[x8, #0x80]
7101bdc188  ldr w8,[x8, #0x2270]
7101bdc18c  cbz w8,0x7101bdc1dc
7101bdc190  ldr x8,[x19, #0x190]
7101bdc194  ldr w8,[x8, #0x25c]
7101bdc198  cmn w8,#0x1
7101bdc19c  b.eq 0x7101bdc20c
7101bdc1a0  mov x0,x19
7101bdc1a4  bl 0x7101bdcec0
7101bdc1a8  tbz w0,#0x0,0x7101bdc4dc
7101bdc1ac  adrp x8,0x710532f000
7101bdc1b0  ldr x8,[x8, #0x8d0]
7101bdc1b4  ldr x0,[x8, #0x8]
7101bdc1b8  ldp x8,x9,[x0, #0x40]
7101bdc1bc  sub x9,x9,x8
7101bdc1c0  asr x9,x9,#0x3
7101bdc1c4  cmp x9,#0x6
7101bdc1c8  b.cc 0x7101bdc424
7101bdc1cc  ldr x20,[x8, #0x28]
7101bdc1d0  ldrb w8,[x0, #0x191]
7101bdc1d4  cbnz w8,0x7101bdc4a0
7101bdc1d8  b 0x7101bdc430
7101bdc1dc  adrp x8,0x710532f000
7101bdc1e0  ldr x8,[x8, #0x8d0]
7101bdc1e4  ldr x0,[x8, #0x8]
7101bdc1e8  ldp x8,x9,[x0, #0x40]
7101bdc1ec  sub x9,x9,x8
7101bdc1f0  asr x9,x9,#0x3
7101bdc1f4  cmp x9,#0x4
7101bdc1f8  b.cc 0x7101bdc2dc
7101bdc1fc  ldr x20,[x8, #0x18]
7101bdc200  ldrb w8,[x0, #0x191]
7101bdc204  cbnz w8,0x7101bdc358
7101bdc208  b 0x7101bdc2e8
7101bdc20c  ldr x0,[x19, #0x180]
7101bdc210  cbz x0,0x7101bdc3bc
7101bdc214  ldr x8,[x0]
7101bdc218  ldr x8,[x8, #0x68]
7101bdc21c  blr x8
7101bdc220  tbz w0,#0x0,0x7101bdc3bc
7101bdc224  ldr x8,[x19, #0x180]
7101bdc228  add x8,x8,#0x25c
7101bdc22c  ldr w8,[x8]
7101bdc230  tbnz w8,#0x1f,0x7101bdc3e4
7101bdc234  ldrsw x8,[x19, #0x1b8]
7101bdc238  cbz w8,0x7101bdc51c
7101bdc23c  ldp x9,x10,[x19, #0x198]
7101bdc240  sub x10,x10,x9
7101bdc244  mov x11,#0x5c29
7101bdc248  movk x11,#0xc28f, LSL #16
7101bdc24c  movk x11,#0x28f5, LSL #32
7101bdc250  movk x11,#0x8f5c, LSL #48
7101bdc254  asr x10,x10,#0x5
7101bdc258  mul x10,x10,x11
7101bdc25c  sub x8,x8,#0x1
7101bdc260  cmp x10,x8
7101bdc264  b.ls 0x7101bdce9c
7101bdc268  mov w10,#0x320
7101bdc26c  madd x10,x8,x10,x9
7101bdc270  ldrh w10,[x10, #0x10]
7101bdc274  ldrh w11,[x19, #0x1b0]
7101bdc278  cmp w10,w11
7101bdc27c  b.ne 0x7101bdc2c0
7101bdc280  mov w10,#0x320
7101bdc284  madd x10,x8,x10,x9
7101bdc288  ldrb w10,[x10, #0xa8]
7101bdc28c  cmp w10,#0x2
7101bdc290  b.ne 0x7101bdc2a4
7101bdc294  mov w10,#0x320
7101bdc298  madd x10,x8,x10,x9
7101bdc29c  ldrb w10,[x10, #0x8]
7101bdc2a0  cbz w10,0x7101bdc4dc
7101bdc2a4  mov w10,#0x320
7101bdc2a8  madd x8,x8,x10,x9
7101bdc2ac  ldrb w9,[x8, #0x4]
7101bdc2b0  ldrb w8,[x8, #0x5]
7101bdc2b4  eor w8,w8,w9
7101bdc2b8  tst w8,#0x3f
7101bdc2bc  b.eq 0x7101bdc4dc
7101bdc2c0  ldrsw x8,[x19, #0x124]
7101bdc2c4  cmp w8,#0x13
7101bdc2c8  b.cs 0x7101bdce90
7101bdc2cc  add x8,x19,x8, LSL #0x2
7101bdc2d0  mov w9,#0x4
7101bdc2d4  str w9,[x8, #0xd8]
7101bdc2d8  b 0x7101bdc4dc
7101bdc2dc  mov x20,xzr
7101bdc2e0  ldrb w8,[x0, #0x191]
7101bdc2e4  cbnz w8,0x7101bdc358
7101bdc2e8  mov w2,#0x4
7101bdc2ec  mov x1,x20
7101bdc2f0  bl 0x7103313f20
7101bdc2f4  tbz w0,#0x0,0x7101bdc358
7101bdc2f8  add x0,sp,#0x48
7101bdc2fc  mov x1,x20
7101bdc300  bl 0x71024076d0
7101bdc304  ldr x8,[sp, #0x58]
7101bdc308  adrp x9,0x7104f73000
7101bdc30c  add x9,x9,#0xd50
7101bdc310  str x9,[sp, #0x50]
7101bdc314  cbz x8,0x7101bdc384
7101bdc318  adrp x8,0x7106dd5000
7101bdc31c  ldrb w8,[x8, #0x3a8]
7101bdc320  cmp w8,#0x1
7101bdc324  b.ne 0x7101bdc384
7101bdc328  adrp x9,0x7106dd5000
7101bdc32c  ldr w8,[sp, #0x60]
7101bdc330  ldr w9,[x9, #0x3ac]
7101bdc334  cmp w8,w9
7101bdc338  b.ne 0x7101bdc384
7101bdc33c  ldr x8,[sp, #0x58]
7101bdc340  ldr wzr,[x8, #0x38]!
7101bdc344  ldaxr w9,[x8]
7101bdc348  sub w9,w9,#0x1
7101bdc34c  stlxr w10,w9,[x8]
7101bdc350  cbnz w10,0x7101bdc344
7101bdc354  b 0x7101bdc384
7101bdc358  mov x8,#0x650000000000
7101bdc35c  movk x8,#0x87, LSL #48
7101bdc360  strb wzr,[sp, #0x68]
7101bdc364  stp xzr,x8,[sp, #0x58]
7101bdc368  mov x8,#-0x1
7101bdc36c  stp x8,xzr,[sp, #0x70]
7101bdc370  adrp x8,0x7104f73000
7101bdc374  add x8,x8,#0xd50
7101bdc378  str wzr,[sp, #0x48]
7101bdc37c  str xzr,[sp, #0x80]
7101bdc380  str x8,[sp, #0x50]
7101bdc384  str xzr,[sp, #0x58]
7101bdc388  strb wzr,[sp, #0x68]
7101bdc38c  mov w8,#0x1
7101bdc390  str w8,[x19, #0x1c4]
7101bdc394  ldr w8,[x19, #0x128]
7101bdc398  cmp w8,#0x2
7101bdc39c  b.cc 0x7101bdc4dc
7101bdc3a0  ldrsw x8,[x19, #0x124]
7101bdc3a4  cmp w8,#0x13
7101bdc3a8  b.cs 0x7101bdce90
7101bdc3ac  add x8,x19,x8, LSL #0x2
7101bdc3b0  mov w9,#0x1
7101bdc3b4  str w9,[x8, #0xd8]
7101bdc3b8  b 0x7101bdc4dc
7101bdc3bc  ldr x0,[x19, #0x178]
7101bdc3c0  cbz x0,0x7101bdc3e4
7101bdc3c4  ldr x8,[x0]
7101bdc3c8  ldr x8,[x8, #0x68]
7101bdc3cc  blr x8
7101bdc3d0  tbz w0,#0x0,0x7101bdc3e4
7101bdc3d4  ldr x8,[x19, #0x178]
7101bdc3d8  add x8,x8,#0x2b4
7101bdc3dc  ldr w8,[x8]
7101bdc3e0  tbz w8,#0x1f,0x7101bdc234
7101bdc3e4  ldr w8,[x19, #0x1b4]
7101bdc3e8  cmp w8,#0x2
7101bdc3ec  b.eq 0x7101bdc500
7101bdc3f0  cmp w8,#0x1
7101bdc3f4  b.ne 0x7101bdc4dc
7101bdc3f8  ldr d8,[sp, #0x130]
7101bdc3fc  mov x0,x19
7101bdc400  mov w1,wzr
7101bdc404  ldp x29,x30,[sp, #0x190]
7101bdc408  ldp x20,x19,[sp, #0x180]
7101bdc40c  ldp x22,x21,[sp, #0x170]
7101bdc410  ldp x24,x23,[sp, #0x160]
7101bdc414  ldp x26,x25,[sp, #0x150]
7101bdc418  ldp x28,x27,[sp, #0x140]
7101bdc41c  add sp,sp,#0x1a0
7101bdc420  b 0x7101bd7a40
7101bdc424  mov x20,xzr
7101bdc428  ldrb w8,[x0, #0x191]
7101bdc42c  cbnz w8,0x7101bdc4a0
7101bdc430  mov w2,#0x4
7101bdc434  mov x1,x20
7101bdc438  bl 0x7103313f20
7101bdc43c  tbz w0,#0x0,0x7101bdc4a0
7101bdc440  add x0,sp,#0x8
7101bdc444  mov x1,x20
7101bdc448  bl 0x71024076d0
7101bdc44c  ldr x8,[sp, #0x18]
7101bdc450  adrp x9,0x7104f73000
7101bdc454  add x9,x9,#0xd50
7101bdc458  str x9,[sp, #0x10]
7101bdc45c  cbz x8,0x7101bdc4cc
7101bdc460  adrp x8,0x7106dd5000
7101bdc464  ldrb w8,[x8, #0x3a8]
7101bdc468  cmp w8,#0x1
7101bdc46c  b.ne 0x7101bdc4cc
7101bdc470  adrp x9,0x7106dd5000
7101bdc474  ldr w8,[sp, #0x20]
7101bdc478  ldr w9,[x9, #0x3ac]
7101bdc47c  cmp w8,w9
7101bdc480  b.ne 0x7101bdc4cc
7101bdc484  ldr x8,[sp, #0x18]
7101bdc488  ldr wzr,[x8, #0x38]!
7101bdc48c  ldaxr w9,[x8]
7101bdc490  sub w9,w9,#0x1
7101bdc494  stlxr w10,w9,[x8]
7101bdc498  cbnz w10,0x7101bdc48c
7101bdc49c  b 0x7101bdc4cc
7101bdc4a0  mov x8,#0x650000000000
7101bdc4a4  movk x8,#0x87, LSL #48
7101bdc4a8  strb wzr,[sp, #0x28]
7101bdc4ac  stp xzr,x8,[sp, #0x18]
7101bdc4b0  mov x8,#-0x1
7101bdc4b4  stp x8,xzr,[sp, #0x30]
7101bdc4b8  adrp x8,0x7104f73000
7101bdc4bc  add x8,x8,#0xd50
7101bdc4c0  str wzr,[sp, #0x8]
7101bdc4c4  str xzr,[sp, #0x40]
7101bdc4c8  str x8,[sp, #0x10]
7101bdc4cc  orr w8,wzr,#0x3
7101bdc4d0  str xzr,[sp, #0x18]
7101bdc4d4  strb wzr,[sp, #0x28]
7101bdc4d8  str w8,[x19, #0x1c4]
7101bdc4dc  ldr d8,[sp, #0x130]
7101bdc4e0  ldp x29,x30,[sp, #0x190]
7101bdc4e4  ldp x20,x19,[sp, #0x180]
7101bdc4e8  ldp x22,x21,[sp, #0x170]
7101bdc4ec  ldp x24,x23,[sp, #0x160]
7101bdc4f0  ldp x26,x25,[sp, #0x150]
7101bdc4f4  ldp x28,x27,[sp, #0x140]
7101bdc4f8  add sp,sp,#0x1a0
7101bdc4fc  ret
7101bdc500  ldr x8,[x19, #0x188]
7101bdc504  ldr w22,[x19, #0x1bc]
7101bdc508  ldr w23,[x8, #0x254]
7101bdc50c  cmp w22,w23
7101bdc510  b.ne 0x7101bdc538
7101bdc514  mov w20,#0x2
7101bdc518  b 0x7101bdc7ac
7101bdc51c  ldrsw x8,[x19, #0x124]
7101bdc520  cmp w8,#0x13
7101bdc524  b.cs 0x7101bdce90
7101bdc528  add x8,x19,x8, LSL #0x2
7101bdc52c  orr w9,wzr,#0x3
7101bdc530  str w9,[x8, #0xd8]
7101bdc534  b 0x7101bdc4dc
7101bdc538  tbnz w23,#0x1f,0x7101bdc6c8
7101bdc53c  ldr w8,[x19, #0x1b8]
7101bdc540  cmp w8,#0x1
7101bdc544  b.lt 0x7101bdc6c8
7101bdc548  mov x21,x19
7101bdc54c  ldr x9,[x21, #0x10]!
7101bdc550  ldr x10,[x21, #0x8]
7101bdc554  cmp x10,x9
7101bdc558  b.eq 0x7101bdceac
7101bdc55c  ldr x9,[x9]
7101bdc560  ldr x9,[x9]
7101bdc564  ldr x9,[x9]
7101bdc568  ldr x10,[x9, #0x10]
7101bdc56c  ldr x10,[x10, #0x8]
7101bdc570  cbz x10,0x7101bdc4dc
7101bdc574  sxtw x8,w8
7101bdc578  sub x24,x8,#0x1
7101bdc57c  mov x10,#0x5c29
7101bdc580  movk x10,#0xc28f, LSL #16
7101bdc584  ldp x25,x8,[x19, #0x198]
7101bdc588  sub x8,x8,x25
7101bdc58c  asr x8,x8,#0x5
7101bdc590  movk x10,#0x28f5, LSL #32
7101bdc594  movk x10,#0x8f5c, LSL #48
7101bdc598  mul x8,x8,x10
7101bdc59c  cmp x8,x24
7101bdc5a0  b.ls 0x7101bdce9c
7101bdc5a4  add x0,x9,#0x8
7101bdc5a8  adrp x1,0x710433a000
7101bdc5ac  add x1,x1,#0x54
7101bdc5b0  add x8,sp,#0x88
7101bdc5b4  bl 0x7103776910
7101bdc5b8  ldr x20,[sp, #0x90]
7101bdc5bc  ldr x8,[x20]
7101bdc5c0  cbz x8,0x7101bdc6b0
7101bdc5c4  mov w8,#0x320
7101bdc5c8  madd x8,x24,x8,x25
7101bdc5cc  ldrb w8,[x8, #0x318]
7101bdc5d0  cbz w8,0x7101bdc630
7101bdc5d4  mov w8,#0x320
7101bdc5d8  madd x8,x24,x8,x25
7101bdc5dc  ldrh w8,[x8, #0x10]
7101bdc5e0  ldrh w9,[x19, #0x1b0]
7101bdc5e4  cmp w8,w9
7101bdc5e8  b.ne 0x7101bdc630
7101bdc5ec  mov w8,#0x320
7101bdc5f0  madd x8,x24,x8,x25
7101bdc5f4  ldrb w8,[x8, #0xaa]
7101bdc5f8  cmp w23,w8
7101bdc5fc  b.ge 0x7101bdc630
7101bdc600  cbz w23,0x7101bdcdd4
7101bdc604  sub w8,w23,#0x1
7101bdc608  cmp w8,#0x7
7101bdc60c  b.cs 0x7101bdce90
7101bdc610  mov w9,#0x320
7101bdc614  madd x9,x24,x9,x25
7101bdc618  mov w10,#0x48
7101bdc61c  umaddl x8,w8,w10,x9
7101bdc620  add x8,x8,#0x120
7101bdc624  ldr x0,[x20, #0x10]
7101bdc628  cbnz x0,0x7101bdcde8
7101bdc62c  b 0x7101bdcdf8
7101bdc630  ldp x8,x9,[x19, #0x10]
7101bdc634  cmp x9,x8
7101bdc638  b.eq 0x7101bdceac
7101bdc63c  ldr x8,[x8]
7101bdc640  ldr x8,[x8]
7101bdc644  ldr x8,[x8]
7101bdc648  ldr x9,[x8, #0x10]
7101bdc64c  ldr x9,[x9, #0x8]
7101bdc650  cbz x9,0x7101bdc6b0
7101bdc654  add x0,x8,#0x8
7101bdc658  adrp x1,0x7104291000
7101bdc65c  add x1,x1,#0xab4
7101bdc660  sub x8,x29,#0xb8
7101bdc664  bl 0x71037780e0
7101bdc668  ldur x21,[x29, #-0xb0]
7101bdc66c  ldr x8,[x21]
7101bdc670  cbz x8,0x7101bdc698
7101bdc674  ldr x8,[x21, #0x8]
7101bdc678  cbz x8,0x7101bdc688
7101bdc67c  fmov s0,0x3f800000
7101bdc680  sub x0,x29,#0xb8
7101bdc684  bl 0x710377aee0
7101bdc688  adrp x8,0x710523d000
7101bdc68c  add x8,x8,#0x9e8
7101bdc690  stp x8,xzr,[x29, #-0xb8]
7101bdc694  b 0x7101bdc6a8
7101bdc698  adrp x8,0x710523d000
7101bdc69c  add x8,x8,#0x9e8
7101bdc6a0  stp x8,xzr,[x29, #-0xb8]
7101bdc6a4  cbz x21,0x7101bdc6b0
7101bdc6a8  mov x0,x21
7101bdc6ac  bl 0x710392eb40
7101bdc6b0  adrp x8,0x710523d000
7101bdc6b4  add x8,x8,#0x9a8
7101bdc6b8  stp x8,xzr,[sp, #0x88]
7101bdc6bc  cbz x20,0x7101bdc6c8
7101bdc6c0  mov x0,x20
7101bdc6c4  bl 0x710392eb40
7101bdc6c8  adrp x8,0x710532f000
7101bdc6cc  ldr x8,[x8, #0x8d0]
7101bdc6d0  ldr x0,[x8, #0x8]
7101bdc6d4  ldp x8,x9,[x0, #0x40]
7101bdc6d8  sub x9,x9,x8
7101bdc6dc  asr x9,x9,#0x3
7101bdc6e0  cmp x9,#0x2
7101bdc6e4  b.cc 0x7101bdc6f8
7101bdc6e8  ldr x20,[x8, #0x8]
7101bdc6ec  ldrb w8,[x0, #0x191]
7101bdc6f0  cbnz w8,0x7101bdc774
7101bdc6f4  b 0x7101bdc704
7101bdc6f8  mov x20,xzr
7101bdc6fc  ldrb w8,[x0, #0x191]
7101bdc700  cbnz w8,0x7101bdc774
7101bdc704  mov w2,#0x4
7101bdc708  mov x1,x20
7101bdc70c  bl 0x7103313f20
7101bdc710  tbz w0,#0x0,0x7101bdc774
7101bdc714  sub x0,x29,#0xb8
7101bdc718  mov x1,x20
7101bdc71c  bl 0x71024076d0
7101bdc720  ldur x8,[x29, #-0xa8]
7101bdc724  adrp x9,0x7104f73000
7101bdc728  add x9,x9,#0xd50
7101bdc72c  stur x9,[x29, #-0xb0]
7101bdc730  cbz x8,0x7101bdc7a0
7101bdc734  adrp x8,0x7106dd5000
7101bdc738  ldrb w8,[x8, #0x3a8]
7101bdc73c  cmp w8,#0x1
7101bdc740  b.ne 0x7101bdc7a0
7101bdc744  adrp x9,0x7106dd5000
7101bdc748  ldur w8,[x29, #-0xa0]
7101bdc74c  ldr w9,[x9, #0x3ac]
7101bdc750  cmp w8,w9
7101bdc754  b.ne 0x7101bdc7a0
7101bdc758  ldur x8,[x29, #-0xa8]
7101bdc75c  ldr wzr,[x8, #0x38]!
7101bdc760  ldaxr w9,[x8]
7101bdc764  sub w9,w9,#0x1
7101bdc768  stlxr w10,w9,[x8]
7101bdc76c  cbnz w10,0x7101bdc760
7101bdc770  b 0x7101bdc7a0
7101bdc774  mov x8,#0x650000000000
7101bdc778  movk x8,#0x87, LSL #48
7101bdc77c  sturb wzr,[x29, #-0x98]
7101bdc780  stp xzr,x8,[x29, #-0xa8]
7101bdc784  mov x8,#-0x1
7101bdc788  stp x8,xzr,[x29, #-0x90]
7101bdc78c  adrp x8,0x7104f73000
7101bdc790  add x8,x8,#0xd50
7101bdc794  stur wzr,[x29, #-0xb8]
7101bdc798  stur xzr,[x29, #-0x80]
7101bdc79c  stur x8,[x29, #-0xb0]
7101bdc7a0  stur xzr,[x29, #-0xa8]
7101bdc7a4  sturb wzr,[x29, #-0x98]
7101bdc7a8  ldr w20,[x19, #0x1b4]
7101bdc7ac  mov x23,x19
7101bdc7b0  ldr x8,[x23, #0x10]!
7101bdc7b4  ldr x9,[x23, #0x8]
7101bdc7b8  cmp x9,x8
7101bdc7bc  b.eq 0x7101bdce94
7101bdc7c0  ldr x8,[x8]
7101bdc7c4  ldr x8,[x8]
7101bdc7c8  ldr x8,[x8]
7101bdc7cc  adrp x9,0x710593b000
7101bdc7d0  ldr x9,[x9, #0x988]
7101bdc7d4  ldr x9,[x9, #0x8]
7101bdc7d8  ldr w9,[x9]
7101bdc7dc  ldr x21,[x8]
7101bdc7e0  ldr x8,[x21, #0x600]
7101bdc7e4  ldr w8,[x8, #0x494]
7101bdc7e8  lsr w8,w9,w8
7101bdc7ec  cmp w8,#0x1
7101bdc7f0  b.hi 0x7101bdc848
7101bdc7f4  ldr x0,[x19, #0x178]
7101bdc7f8  ldr x8,[x0]
7101bdc7fc  ldr x8,[x8, #0x78]
7101bdc800  blr x8
7101bdc804  tbnz w0,#0x0,0x7101bdc840
7101bdc808  ldr x0,[x19, #0x180]
7101bdc80c  ldr x8,[x0]
7101bdc810  ldr x8,[x8, #0x78]
7101bdc814  blr x8
7101bdc818  tbnz w0,#0x0,0x7101bdc840
7101bdc81c  ldr w8,[x19, #0x1b8]
7101bdc820  cmp w8,#0x1
7101bdc824  b.lt 0x7101bdc848
7101bdc828  ldr x8,[x19, #0x188]
7101bdc82c  ldrb w9,[x8, #0x280]
7101bdc830  cbnz w9,0x7101bdc840
7101bdc834  ldr w8,[x8, #0x25c]
7101bdc838  cmn w8,#0x1
7101bdc83c  b.eq 0x7101bdcdb8
7101bdc840  mov w8,#0x1
7101bdc844  str w8,[x19, #0x1b4]
7101bdc848  ldr w8,[x19, #0x1b4]
7101bdc84c  cmp w20,w8
7101bdc850  b.eq 0x7101bdc4dc
7101bdc854  ldr x0,[x19, #0x178]
7101bdc858  ldr x8,[x0]
7101bdc85c  ldr x8,[x8, #0x68]
7101bdc860  blr x8
7101bdc864  tbz w0,#0x0,0x7101bdca4c
7101bdc868  ldr x21,[x19, #0x178]
7101bdc86c  stp xzr,xzr,[sp, #0x90]
7101bdc870  str xzr,[sp, #0x88]
7101bdc874  ldp x8,x9,[x21, #0x168]
7101bdc878  sub x8,x9,x8
7101bdc87c  asr x1,x8,#0x3
7101bdc880  add x0,sp,#0x88
7101bdc884  bl 0x71019bb740
7101bdc888  ldp x20,x21,[x21, #0x168]
7101bdc88c  cmp x20,x21
7101bdc890  b.eq 0x7101bdc8d0
7101bdc894  ldr x8,[x20]
7101bdc898  add x1,x8,#0x8
7101bdc89c  ldp x0,x8,[sp, #0x90]
7101bdc8a0  cmp x0,x8
7101bdc8a4  b.eq 0x7101bdc8bc
7101bdc8a8  bl 0x7103776390
7101bdc8ac  ldr x8,[sp, #0x90]
7101bdc8b0  add x8,x8,#0x10
7101bdc8b4  str x8,[sp, #0x90]
7101bdc8b8  b 0x7101bdc8c4
7101bdc8bc  add x0,sp,#0x88
7101bdc8c0  bl 0x71019bb8f0
7101bdc8c4  add x20,x20,#0x8
7101bdc8c8  cmp x21,x20
7101bdc8cc  b.ne 0x7101bdc894
7101bdc8d0  stur x23,[x29, #-0x58]
7101bdc8d4  ldp x21,x27,[sp, #0x88]
7101bdc8d8  cmp x21,x27
7101bdc8dc  b.eq 0x7101bdc9f8
7101bdc8e0  fmov s8,0x3f800000
7101bdc8e4  adrp x22,0x710432a000
7101bdc8e8  add x22,x22,#0x8bc
7101bdc8ec  adrp x28,0x710523d000
7101bdc8f0  add x28,x28,#0x9e8
7101bdc8f4  adrp x23,0x710424f000
7101bdc8f8  add x23,x23,#0x3b6
7101bdc8fc  adrp x20,0x710523d000
7101bdc900  add x20,x20,#0x988
7101bdc904  adrp x24,0x710435b000
7101bdc908  add x24,x24,#0xe3c
7101bdc90c  ldr x8,[x21, #0x8]
7101bdc910  ldr x8,[x8, #0x8]
7101bdc914  cbz x8,0x7101bdc9ec
7101bdc918  sub x8,x29,#0x78
7101bdc91c  mov x0,x21
7101bdc920  mov x1,x22
7101bdc924  bl 0x71037780e0
7101bdc928  ldur x25,[x29, #-0x70]
7101bdc92c  ldr x8,[x25]
7101bdc930  cbz x8,0x7101bdc950
7101bdc934  ldr x8,[x25, #0x8]
7101bdc938  cbz x8,0x7101bdc948
7101bdc93c  mov v0.16B,v8.16B
7101bdc940  sub x0,x29,#0x78
7101bdc944  bl 0x710377aee0
7101bdc948  stp x28,xzr,[x29, #-0x78]
7101bdc94c  b 0x7101bdc958
7101bdc950  stp x28,xzr,[x29, #-0x78]
7101bdc954  cbz x25,0x7101bdc960
7101bdc958  mov x0,x25
7101bdc95c  bl 0x710392eb40
7101bdc960  add x8,sp,#0xc8
7101bdc964  mov x0,x21
7101bdc968  mov x1,x23
7101bdc96c  bl 0x7103776640
7101bdc970  ldr x25,[sp, #0xd0]
7101bdc974  ldr x8,[x25, #0x8]
7101bdc978  cbz x8,0x7101bdc9c4
7101bdc97c  sub x8,x29,#0x78
7101bdc980  add x0,sp,#0xc8
7101bdc984  mov x1,x24
7101bdc988  bl 0x71037780e0
7101bdc98c  ldur x26,[x29, #-0x70]
7101bdc990  ldr x8,[x26]
7101bdc994  cbz x8,0x7101bdc9b4
7101bdc998  ldr x8,[x26, #0x8]
7101bdc99c  cbz x8,0x7101bdc9ac
7101bdc9a0  mov v0.16B,v8.16B
7101bdc9a4  sub x0,x29,#0x78
7101bdc9a8  bl 0x710377aee0
7101bdc9ac  stp x28,xzr,[x29, #-0x78]
7101bdc9b0  b 0x7101bdc9bc
7101bdc9b4  stp x28,xzr,[x29, #-0x78]
7101bdc9b8  cbz x26,0x7101bdc9c4
7101bdc9bc  mov x0,x26
7101bdc9c0  bl 0x710392eb40
7101bdc9c4  stp x20,xzr,[sp, #0xc8]
7101bdc9c8  cbz x25,0x7101bdc9ec
7101bdc9cc  ldr x0,[x25, #0x18]
7101bdc9d0  adrp x8,0x710523d000
7101bdc9d4  add x8,x8,#0x9a8
7101bdc9d8  stp x8,xzr,[x25, #0x10]
7101bdc9dc  cbz x0,0x7101bdc9e4
7101bdc9e0  bl 0x710392eb40
7101bdc9e4  mov x0,x25
7101bdc9e8  bl 0x710392eb40
7101bdc9ec  add x21,x21,#0x10
7101bdc9f0  cmp x27,x21
7101bdc9f4  b.ne 0x7101bdc90c
7101bdc9f8  ldr x0,[x19, #0x178]
7101bdc9fc  ldr x8,[x0]
7101bdca00  ldr x8,[x8, #0x70]
7101bdca04  mov w1,#0x1
7101bdca08  blr x8
7101bdca0c  ldr x20,[sp, #0x88]
7101bdca10  ldur x23,[x29, #-0x58]
7101bdca14  cbz x20,0x7101bdcc40
7101bdca18  ldr x21,[sp, #0x90]
7101bdca1c  cmp x21,x20
7101bdca20  b.eq 0x7101bdcc30
7101bdca24  ldr x8,[x21, #-0x10]!
7101bdca28  ldr x8,[x8]
7101bdca2c  mov x0,x21
7101bdca30  blr x8
7101bdca34  cmp x20,x21
7101bdca38  b.ne 0x7101bdca24
7101bdca3c  ldr x0,[sp, #0x88]
7101bdca40  str x20,[sp, #0x90]
7101bdca44  cbnz x0,0x7101bdcc3c
7101bdca48  b 0x7101bdcc40
7101bdca4c  ldr x0,[x19, #0x180]
7101bdca50  ldr x8,[x0]
7101bdca54  ldr x8,[x8, #0x68]
7101bdca58  blr x8
7101bdca5c  tbz w0,#0x0,0x7101bdcc40
7101bdca60  ldp x8,x9,[x19, #0x10]
7101bdca64  cmp x9,x8
7101bdca68  b.eq 0x7101bdce94
7101bdca6c  ldr x8,[x8]
7101bdca70  ldr x8,[x8]
7101bdca74  ldr x10,[x8]
7101bdca78  ldr x8,[x10, #0x10]
7101bdca7c  ldr x8,[x8, #0x8]
7101bdca80  ldr x0,[x19, #0x180]
7101bdca84  mov x20,x23
7101bdca88  cbz x8,0x7101bdcc18
7101bdca8c  ldp x8,x9,[x0, #0x180]
7101bdca90  sub x11,x9,x8
7101bdca94  lsr x11,x11,#0x3
7101bdca98  cmp w11,#0x1
7101bdca9c  b.lt 0x7101bdcc18
7101bdcaa0  fmov s8,0x3f800000
7101bdcaa4  mov x28,xzr
7101bdcaa8  adrp x24,0x710523d000
7101bdcaac  add x24,x24,#0x988
7101bdcab0  adrp x21,0x710523d000
7101bdcab4  add x21,x21,#0x9a8
7101bdcab8  adrp x23,0x710523d000
7101bdcabc  add x23,x23,#0x9e8
7101bdcac0  add x22,x10,#0x8
7101bdcac4  sub x9,x9,x8
7101bdcac8  lsr x10,x9,#0x3
7101bdcacc  cmp x28,w10, SXTW 
7101bdcad0  b.ge 0x7101bdcc00
7101bdcad4  asr x9,x9,#0x3
7101bdcad8  cmp x9,x28
7101bdcadc  b.ls 0x7101bdcea4
7101bdcae0  ldr x8,[x8, x28, LSL #0x3]
7101bdcae4  ldr x1,[x8, #0x88]
7101bdcae8  cbz x1,0x7101bdcc00
7101bdcaec  sub x8,x29,#0x78
7101bdcaf0  mov x0,x22
7101bdcaf4  bl 0x7103776640
7101bdcaf8  ldur x25,[x29, #-0x70]
7101bdcafc  ldr x8,[x25, #0x8]
7101bdcb00  cbz x8,0x7101bdcbdc
7101bdcb04  add x8,sp,#0x88
7101bdcb08  sub x0,x29,#0x78
7101bdcb0c  adrp x1,0x710432a000
7101bdcb10  add x1,x1,#0x8bc
7101bdcb14  bl 0x71037780e0
7101bdcb18  ldr x26,[sp, #0x90]
7101bdcb1c  ldr x8,[x26]
7101bdcb20  cbz x8,0x7101bdcb40
7101bdcb24  ldr x8,[x26, #0x8]
7101bdcb28  cbz x8,0x7101bdcb38
7101bdcb2c  mov v0.16B,v8.16B
7101bdcb30  add x0,sp,#0x88
7101bdcb34  bl 0x710377aee0
7101bdcb38  stp x23,xzr,[sp, #0x88]
7101bdcb3c  b 0x7101bdcb48
7101bdcb40  stp x23,xzr,[sp, #0x88]
7101bdcb44  cbz x26,0x7101bdcb50
7101bdcb48  mov x0,x26
7101bdcb4c  bl 0x710392eb40
7101bdcb50  add x8,sp,#0xc8
7101bdcb54  sub x0,x29,#0x78
7101bdcb58  adrp x1,0x710424f000
7101bdcb5c  add x1,x1,#0x3b6
7101bdcb60  bl 0x7103776640
7101bdcb64  ldr x26,[sp, #0xd0]
7101bdcb68  ldr x8,[x26, #0x8]
7101bdcb6c  cbz x8,0x7101bdcbbc
7101bdcb70  add x8,sp,#0x88
7101bdcb74  add x0,sp,#0xc8
7101bdcb78  adrp x1,0x710435b000
7101bdcb7c  add x1,x1,#0xe3c
7101bdcb80  bl 0x71037780e0
7101bdcb84  ldr x27,[sp, #0x90]
7101bdcb88  ldr x8,[x27]
7101bdcb8c  cbz x8,0x7101bdcbac
7101bdcb90  ldr x8,[x27, #0x8]
7101bdcb94  cbz x8,0x7101bdcba4
7101bdcb98  mov v0.16B,v8.16B
7101bdcb9c  add x0,sp,#0x88
7101bdcba0  bl 0x710377aee0
7101bdcba4  stp x23,xzr,[sp, #0x88]
7101bdcba8  b 0x7101bdcbb4
7101bdcbac  stp x23,xzr,[sp, #0x88]
7101bdcbb0  cbz x27,0x7101bdcbbc
7101bdcbb4  mov x0,x27
7101bdcbb8  bl 0x710392eb40
7101bdcbbc  stp x24,xzr,[sp, #0xc8]
7101bdcbc0  cbz x26,0x7101bdcbdc
7101bdcbc4  ldr x0,[x26, #0x18]
7101bdcbc8  stp x21,xzr,[x26, #0x10]
7101bdcbcc  cbz x0,0x7101bdcbd4
7101bdcbd0  bl 0x710392eb40
7101bdcbd4  mov x0,x26
7101bdcbd8  bl 0x710392eb40
7101bdcbdc  stp x24,xzr,[x29, #-0x78]
7101bdcbe0  cbz x25,0x7101bdcbfc
7101bdcbe4  ldr x0,[x25, #0x18]
7101bdcbe8  stp x21,xzr,[x25, #0x10]
7101bdcbec  cbz x0,0x7101bdcbf4
7101bdcbf0  bl 0x710392eb40
7101bdcbf4  mov x0,x25
7101bdcbf8  bl 0x710392eb40
7101bdcbfc  ldr x0,[x19, #0x180]
7101bdcc00  ldp x8,x9,[x0, #0x180]
7101bdcc04  sub x10,x9,x8
7101bdcc08  add x28,x28,#0x1
7101bdcc0c  lsr x10,x10,#0x3
7101bdcc10  cmp x28,w10, SXTW 
7101bdcc14  b.lt 0x7101bdcac4
7101bdcc18  ldr x8,[x0]
7101bdcc1c  ldr x8,[x8, #0x70]
7101bdcc20  mov w1,#0x1
7101bdcc24  blr x8
7101bdcc28  mov x23,x20
7101bdcc2c  b 0x7101bdcc40
7101bdcc30  mov x0,x20
7101bdcc34  str x20,[sp, #0x90]
7101bdcc38  cbz x0,0x7101bdcc40
7101bdcc3c  bl 0x710392eb40
7101bdcc40  adrp x8,0x710532f000
7101bdcc44  ldr x8,[x8, #0x8d0]
7101bdcc48  ldr x0,[x8, #0x8]
7101bdcc4c  ldp x8,x9,[x0, #0x40]
7101bdcc50  sub x9,x9,x8
7101bdcc54  asr x9,x9,#0x3
7101bdcc58  cmp x9,#0x2
7101bdcc5c  b.cc 0x7101bdcc70
7101bdcc60  ldr x21,[x8, #0x8]
7101bdcc64  ldrb w8,[x0, #0x191]
7101bdcc68  cbnz w8,0x7101bdccec
7101bdcc6c  b 0x7101bdcc7c
7101bdcc70  mov x21,xzr
7101bdcc74  ldrb w8,[x0, #0x191]
7101bdcc78  cbnz w8,0x7101bdccec
7101bdcc7c  mov w2,#0x4
7101bdcc80  mov x1,x21
7101bdcc84  bl 0x7103313f20
7101bdcc88  tbz w0,#0x0,0x7101bdccec
7101bdcc8c  add x0,sp,#0x88
7101bdcc90  mov x1,x21
7101bdcc94  bl 0x71024076d0
7101bdcc98  ldr x8,[sp, #0x98]
7101bdcc9c  adrp x9,0x7104f73000
7101bdcca0  add x9,x9,#0xd50
7101bdcca4  str x9,[sp, #0x90]
7101bdcca8  cbz x8,0x7101bdcd18
7101bdccac  adrp x8,0x7106dd5000
7101bdccb0  ldrb w8,[x8, #0x3a8]
7101bdccb4  cmp w8,#0x1
7101bdccb8  b.ne 0x7101bdcd18
7101bdccbc  adrp x9,0x7106dd5000
7101bdccc0  ldr w8,[sp, #0xa0]
7101bdccc4  ldr w9,[x9, #0x3ac]
7101bdccc8  cmp w8,w9
7101bdcccc  b.ne 0x7101bdcd18
7101bdccd0  ldr x8,[sp, #0x98]
7101bdccd4  ldr wzr,[x8, #0x38]!
7101bdccd8  ldaxr w9,[x8]
7101bdccdc  sub w9,w9,#0x1
7101bdcce0  stlxr w10,w9,[x8]
7101bdcce4  cbnz w10,0x7101bdccd8
7101bdcce8  b 0x7101bdcd18
7101bdccec  mov x8,#0x650000000000
7101bdccf0  movk x8,#0x87, LSL #48
7101bdccf4  strb wzr,[sp, #0xa8]
7101bdccf8  stp xzr,x8,[sp, #0x98]
7101bdccfc  mov x8,#-0x1
7101bdcd00  stp x8,xzr,[sp, #0xb0]
7101bdcd04  adrp x8,0x7104f73000
7101bdcd08  add x8,x8,#0xd50
7101bdcd0c  str wzr,[sp, #0x88]
7101bdcd10  str xzr,[sp, #0xc0]
7101bdcd14  str x8,[sp, #0x90]
7101bdcd18  str xzr,[sp, #0x98]
7101bdcd1c  strb wzr,[sp, #0xa8]
7101bdcd20  ldr x0,[x19, #0x188]
7101bdcd24  ldr x8,[x0]
7101bdcd28  ldr x8,[x8, #0x70]
7101bdcd2c  mov w1,wzr
7101bdcd30  blr x8
7101bdcd34  ldp x8,x9,[x19, #0x10]
7101bdcd38  cmp x9,x8
7101bdcd3c  b.eq 0x7101bdce94
7101bdcd40  ldr x8,[x8]
7101bdcd44  ldr x8,[x8]
7101bdcd48  ldr x8,[x8]
7101bdcd4c  ldr x9,[x8, #0x10]
7101bdcd50  ldr x9,[x9, #0x8]
7101bdcd54  cbz x9,0x7101bdc4dc
7101bdcd58  add x0,x8,#0x8
7101bdcd5c  adrp x1,0x7104291000
7101bdcd60  add x1,x1,#0xab4
7101bdcd64  sub x8,x29,#0x78
7101bdcd68  bl 0x71037780e0
7101bdcd6c  ldur x19,[x29, #-0x70]
7101bdcd70  ldr x8,[x19]
7101bdcd74  cbz x8,0x7101bdcd9c
7101bdcd78  ldr x8,[x19, #0x8]
7101bdcd7c  cbz x8,0x7101bdcd8c
7101bdcd80  fmov s0,0x3f800000
7101bdcd84  sub x0,x29,#0x78
7101bdcd88  bl 0x710377aee0
7101bdcd8c  adrp x8,0x710523d000
7101bdcd90  add x8,x8,#0x9e8
7101bdcd94  stp x8,xzr,[x29, #-0x78]
7101bdcd98  b 0x7101bdcdac
7101bdcd9c  adrp x8,0x710523d000
7101bdcda0  add x8,x8,#0x9e8
7101bdcda4  stp x8,xzr,[x29, #-0x78]
7101bdcda8  cbz x19,0x7101bdc4dc
7101bdcdac  mov x0,x19
7101bdcdb0  bl 0x710392eb40
7101bdcdb4  b 0x7101bdc4dc
7101bdcdb8  ldr x8,[x21, #0x600]
7101bdcdbc  ldrb w9,[x8, #0x4aa]
7101bdcdc0  cbz w9,0x7101bdc848
7101bdcdc4  cbnz w22,0x7101bdc848
7101bdcdc8  ldr w8,[x8, #0x1a0]
7101bdcdcc  tbnz w8,#0x1,0x7101bdc840
7101bdcdd0  b 0x7101bdc848
7101bdcdd4  mov w8,#0x320
7101bdcdd8  madd x8,x24,x8,x25
7101bdcddc  add x8,x8,#0x60
7101bdcde0  ldr x0,[x20, #0x10]
7101bdcde4  cbz x0,0x7101bdcdf8
7101bdcde8  add x1,x8,#0x20
7101bdcdec  mov w2,#0xffffffff
7101bdcdf0  mov w3,#0x1
7101bdcdf4  bl 0x71037a2270
7101bdcdf8  ldp x8,x9,[x19, #0x10]
7101bdcdfc  cmp x9,x8
7101bdce00  str w23,[x19, #0x1bc]
7101bdce04  b.eq 0x7101bdceac
7101bdce08  ldr x8,[x8]
7101bdce0c  ldr x8,[x8]
7101bdce10  ldr x8,[x8]
7101bdce14  ldr x9,[x8, #0x10]
7101bdce18  ldr x9,[x9, #0x8]
7101bdce1c  cbz x9,0x7101bdce7c
7101bdce20  add x0,x8,#0x8
7101bdce24  adrp x1,0x71043df000
7101bdce28  add x1,x1,#0xfb6
7101bdce2c  sub x8,x29,#0xb8
7101bdce30  bl 0x71037780e0
7101bdce34  ldur x21,[x29, #-0xb0]
7101bdce38  ldr x8,[x21]
7101bdce3c  cbz x8,0x7101bdce64
7101bdce40  ldr x8,[x21, #0x8]
7101bdce44  cbz x8,0x7101bdce54
7101bdce48  fmov s0,0x3f800000
7101bdce4c  sub x0,x29,#0xb8
7101bdce50  bl 0x710377aee0
7101bdce54  adrp x8,0x710523d000
7101bdce58  add x8,x8,#0x9e8
7101bdce5c  stp x8,xzr,[x29, #-0xb8]
7101bdce60  b 0x7101bdce74
7101bdce64  adrp x8,0x710523d000
7101bdce68  add x8,x8,#0x9e8
7101bdce6c  stp x8,xzr,[x29, #-0xb8]
7101bdce70  cbz x21,0x7101bdce7c
7101bdce74  mov x0,x21
7101bdce78  bl 0x710392eb40
7101bdce7c  adrp x8,0x710523d000
7101bdce80  add x8,x8,#0x9a8
7101bdce84  stp x8,xzr,[sp, #0x88]
7101bdce88  b 0x7101bdc6c0
7101bdce8c  bl 0x71039c1330
7101bdce90  bl 0x71039c2650
7101bdce94  mov x0,x23
7101bdce98  bl 0x71039c1330
7101bdce9c  add x0,x19,#0x198
7101bdcea0  bl 0x71039c1330
7101bdcea4  add x0,x0,#0x180
7101bdcea8  bl 0x71039c1330
7101bdceac  mov x0,x21
7101bdceb0  bl 0x71039c1330
