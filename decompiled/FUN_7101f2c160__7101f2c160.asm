// addr:      7101f2c160
// offset:    0x1f2c160
// name:      FUN_7101f2c160
// mangled:   
// size:      3384

7101f2c160  str d8,[sp, #-0x70]!
7101f2c164  stp x28,x27,[sp, #0x10]
7101f2c168  stp x26,x25,[sp, #0x20]
7101f2c16c  stp x24,x23,[sp, #0x30]
7101f2c170  stp x22,x21,[sp, #0x40]
7101f2c174  stp x20,x19,[sp, #0x50]
7101f2c178  stp x29,x30,[sp, #0x60]
7101f2c17c  add x29,sp,#0x60
7101f2c180  sub sp,sp,#0x290
7101f2c184  ldr x22,[x2, #0x8]
7101f2c188  mov x20,x0
7101f2c18c  ldr x0,[x22, #0x8]
7101f2c190  mov x19,x2
7101f2c194  mov w21,w1
7101f2c198  cbz x0,0x7101f2c1c0
7101f2c19c  adrp x1,0x710432a000
7101f2c1a0  add x1,x1,#0x87b
7101f2c1a4  bl 0x71037964b0
7101f2c1a8  cbz x0,0x7101f2c1c0
7101f2c1ac  ldr x8,[x0]
7101f2c1b0  ldr x8,[x8, #0x130]
7101f2c1b4  blr x8
7101f2c1b8  tbnz w0,#0x0,0x7101f2c1ec
7101f2c1bc  ldr x22,[x19, #0x8]
7101f2c1c0  fmov s8,0x3f800000
7101f2c1c4  mov v0.16B,v8.16B
7101f2c1c8  adrp x1,0x710432a000
7101f2c1cc  add x1,x1,#0x87b
7101f2c1d0  mov x0,x22
7101f2c1d4  bl 0x7103778300
7101f2c1d8  ldr x0,[x19, #0x8]
7101f2c1dc  mov v0.16B,v8.16B
7101f2c1e0  adrp x1,0x71043be000
7101f2c1e4  add x1,x1,#0xebf
7101f2c1e8  bl 0x7103778300
7101f2c1ec  cmn w21,#0x1
7101f2c1f0  b.eq 0x7101f2c248
7101f2c1f4  mov x12,x20
7101f2c1f8  ldr w8,[x12, #0xd8]!
7101f2c1fc  mov w11,#0x7068
7101f2c200  movk w11,#0x1, LSL #16
7101f2c204  cmp w8,#0x1
7101f2c208  add x10,x12,#0x20
7101f2c20c  add x11,x12,x11
7101f2c210  str x12,[sp, #0x20]
7101f2c214  csel x11,x10,x11,eq
7101f2c218  ldp x10,x11,[x11]
7101f2c21c  sub x11,x11,x10
7101f2c220  sxtw x9,w21
7101f2c224  asr x11,x11,#0x7
7101f2c228  cmp x11,x9
7101f2c22c  b.ls 0x7101f2c254
7101f2c230  add x9,x10,x9, LSL #0x7
7101f2c234  ldp x10,x11,[x9]
7101f2c238  ldp x12,x9,[x9, #0x10]
7101f2c23c  stp x12,x9,[sp, #0x78]
7101f2c240  stp x10,x11,[sp, #0x68]
7101f2c244  b 0x7101f2c25c
7101f2c248  mov x9,x20
7101f2c24c  ldr w8,[x9, #0xd8]!
7101f2c250  str x9,[sp, #0x20]
7101f2c254  stp xzr,xzr,[sp, #0x78]
7101f2c258  stp xzr,xzr,[sp, #0x68]
7101f2c25c  mov w9,#0x7110
7101f2c260  movk w9,#0x1, LSL #16
7101f2c264  add x10,x20,x9
7101f2c268  mov w9,#0xe160
7101f2c26c  movk w9,#0x2, LSL #16
7101f2c270  add x9,x20,x9
7101f2c274  cmp w8,#0x1
7101f2c278  stp x9,x10,[sp, #0x10]
7101f2c27c  csel x22,x10,x9,eq
7101f2c280  ldr x28,[x22, #0x20]
7101f2c284  lsr x9,x28,#0x7
7101f2c288  and x10,x9,#0x1fffffffffffff8
7101f2c28c  ldp x27,x9,[x22, #0x8]
7101f2c290  str x19,[sp, #0x38]
7101f2c294  add x12,x27,x10
7101f2c298  cmp x9,x27
7101f2c29c  b.eq 0x7101f2c2b0
7101f2c2a0  ldr x10,[x12]
7101f2c2a4  and x11,x28,#0x3ff
7101f2c2a8  add x23,x10,x11, LSL #0x2
7101f2c2ac  b 0x7101f2c2b4
7101f2c2b0  mov x23,xzr
7101f2c2b4  stur x12,[x29, #-0x58]
7101f2c2b8  ldr x12,[x22, #0x28]
7101f2c2bc  mov w10,#0x7160
7101f2c2c0  movk w10,#0x1, LSL #16
7101f2c2c4  add x11,x20,#0x110
7101f2c2c8  add x10,x20,x10
7101f2c2cc  cmp w8,#0x1
7101f2c2d0  csel x26,x11,x10,eq
7101f2c2d4  cmp x9,x27
7101f2c2d8  str x20,[sp, #0x40]
7101f2c2dc  stp x10,x11,[sp, #0x28]
7101f2c2e0  stp x21,x12,[sp]
7101f2c2e4  b.eq 0x7101f2c35c
7101f2c2e8  add x8,x28,x12
7101f2c2ec  lsr x9,x8,#0x7
7101f2c2f0  and x8,x8,#0x3ff
7101f2c2f4  and x9,x9,#0x1fffffffffffff8
7101f2c2f8  ldr x9,[x27, x9, LSL #0x0]
7101f2c2fc  add x20,x9,x8, LSL #0x2
7101f2c300  cmp x20,x23
7101f2c304  b.eq 0x7101f2c3ac
7101f2c308  ldur x24,[x29, #-0x58]
7101f2c30c  mov w21,#0x2e0
7101f2c310  ldr w19,[x23]
7101f2c314  cmp w19,#0x80
7101f2c318  b.cs 0x7101f2ce68
7101f2c31c  sxtw x25,w19
7101f2c320  madd x8,x25,x21,x26
7101f2c324  add x0,x8,#0x8
7101f2c328  add x1,sp,#0x68
7101f2c32c  mov w2,#0x20
7101f2c330  bl 0x71039c0250
7101f2c334  cbz w0,0x7101f2c5e0
7101f2c338  ldr x8,[x24]
7101f2c33c  add x23,x23,#0x4
7101f2c340  sub x8,x23,x8
7101f2c344  cmp x8,#0x1, LSL #12
7101f2c348  b.ne 0x7101f2c350
7101f2c34c  ldr x23,[x24, #0x8]!
7101f2c350  cmp x20,x23
7101f2c354  b.ne 0x7101f2c310
7101f2c358  b 0x7101f2c3ac
7101f2c35c  cbz x23,0x7101f2c3ac
7101f2c360  ldur x24,[x29, #-0x58]
7101f2c364  mov w20,#0x2e0
7101f2c368  ldr w19,[x23]
7101f2c36c  cmp w19,#0x7f
7101f2c370  b.hi 0x7101f2ce68
7101f2c374  sxtw x25,w19
7101f2c378  madd x8,x25,x20,x26
7101f2c37c  add x0,x8,#0x8
7101f2c380  add x1,sp,#0x68
7101f2c384  mov w2,#0x20
7101f2c388  bl 0x71039c0250
7101f2c38c  cbz w0,0x7101f2c5e0
7101f2c390  ldr x8,[x24]
7101f2c394  add x23,x23,#0x4
7101f2c398  sub x8,x23,x8
7101f2c39c  cmp x8,#0x1, LSL #12
7101f2c3a0  b.ne 0x7101f2c3a8
7101f2c3a4  ldr x23,[x24, #0x8]!
7101f2c3a8  cbnz x23,0x7101f2c368
7101f2c3ac  ldur x8,[x29, #-0x58]
7101f2c3b0  ldr x8,[x8]
7101f2c3b4  and x9,x28,#0x3ff
7101f2c3b8  ldr w19,[x8, x9, LSL #0x2]
7101f2c3bc  ldr x8,[sp, #0x8]
7101f2c3c0  sub x9,x8,#0x1
7101f2c3c4  add x8,x28,#0x1
7101f2c3c8  cmp x8,#0x800
7101f2c3cc  stp x8,x9,[x22, #0x20]
7101f2c3d0  ldr x20,[sp, #0x20]
7101f2c3d4  ldp x23,x26,[sp, #0x30]
7101f2c3d8  b.cc 0x7101f2c400
7101f2c3dc  ldr x0,[x27]
7101f2c3e0  cbz x0,0x7101f2c3f0
7101f2c3e4  bl 0x710392eb40
7101f2c3e8  ldr x27,[x22, #0x8]
7101f2c3ec  ldr x8,[x22, #0x20]
7101f2c3f0  add x9,x27,#0x8
7101f2c3f4  sub x8,x8,#0x400
7101f2c3f8  str x9,[x22, #0x8]
7101f2c3fc  str x8,[x22, #0x20]
7101f2c400  ldr w8,[x20]
7101f2c404  cmp w8,#0x1
7101f2c408  ldp x9,x8,[sp, #0x10]
7101f2c40c  csel x22,x8,x9,eq
7101f2c410  ldp x8,x9,[x22, #0x8]
7101f2c414  subs x9,x9,x8
7101f2c418  lsl x9,x9,#0x7
7101f2c41c  sub x9,x9,#0x1
7101f2c420  csel x10,xzr,x9,eq
7101f2c424  ldp x9,x11,[x22, #0x20]
7101f2c428  add x9,x11,x9
7101f2c42c  cmp x10,x9
7101f2c430  b.ne 0x7101f2c448
7101f2c434  mov x0,x22
7101f2c438  bl 0x7101432380
7101f2c43c  ldp x9,x10,[x22, #0x20]
7101f2c440  ldr x8,[x22, #0x8]
7101f2c444  add x9,x9,x10
7101f2c448  lsr x10,x9,#0x7
7101f2c44c  and x9,x9,#0x3ff
7101f2c450  and x10,x10,#0x1fffffffffffff8
7101f2c454  ldr x8,[x8, x10, LSL #0x0]
7101f2c458  ldr x24,[sp, #0x28]
7101f2c45c  str w19,[x8, x9, LSL #0x2]
7101f2c460  ldr x8,[x22, #0x28]
7101f2c464  ldr x21,[sp, #0x40]
7101f2c468  add x8,x8,#0x1
7101f2c46c  cmp w19,#0x80
7101f2c470  str x8,[x22, #0x28]
7101f2c474  b.cs 0x7101f2ce68
7101f2c478  ldr w8,[x20]
7101f2c47c  cmp w8,#0x1
7101f2c480  sxtw x25,w19
7101f2c484  csel x19,x23,x24,eq
7101f2c488  mov w8,#0x2e0
7101f2c48c  madd x8,x25,x8,x19
7101f2c490  mov w9,#0x1
7101f2c494  str w9,[x8]
7101f2c498  ldp x10,x11,[sp, #0x68]
7101f2c49c  ldp x12,x13,[sp, #0x78]
7101f2c4a0  stp x12,x13,[x8, #0x18]
7101f2c4a4  stp x10,x11,[x8, #0x8]
7101f2c4a8  stp xzr,xzr,[x8, #0x28]
7101f2c4ac  ldr w10,[x20]
7101f2c4b0  str w10,[x8, #0x38]
7101f2c4b4  strb w9,[x8, #0xb4]
7101f2c4b8  ldr x8,[x8, #0xc8]
7101f2c4bc  ldr x22,[x8, #0x8]
7101f2c4c0  stp xzr,xzr,[x8]
7101f2c4c4  cbz x22,0x7101f2c4f8
7101f2c4c8  add x8,x22,#0x8
7101f2c4cc  ldaxr x9,[x8]
7101f2c4d0  sub x10,x9,#0x1
7101f2c4d4  stlxr w11,x10,[x8]
7101f2c4d8  cbnz w11,0x7101f2c4cc
7101f2c4dc  cbnz x9,0x7101f2c4f8
7101f2c4e0  ldr x8,[x22]
7101f2c4e4  ldr x8,[x8, #0x10]
7101f2c4e8  mov x0,x22
7101f2c4ec  blr x8
7101f2c4f0  mov x0,x22
7101f2c4f4  bl 0x71039c2670
7101f2c4f8  mov w8,#0x2e0
7101f2c4fc  mul x8,x25,x8
7101f2c500  add x19,x19,x8
7101f2c504  add x8,sp,#0x88
7101f2c508  add x20,sp,#0x88
7101f2c50c  str xzr,[x19, #0xd0]
7101f2c510  stur xzr,[x8, #0x56]
7101f2c514  add x0,x20,#0x68
7101f2c518  stp xzr,xzr,[sp, #0xd0]
7101f2c51c  stp xzr,xzr,[sp, #0xc0]
7101f2c520  str xzr,[sp, #0x88]
7101f2c524  str xzr,[sp, #0xe8]
7101f2c528  stp xzr,xzr,[sp, #0xb0]
7101f2c52c  stp xzr,xzr,[sp, #0xa0]
7101f2c530  stp xzr,xzr,[sp, #0x90]
7101f2c534  stp xzr,xzr,[sp, #0x1a0]
7101f2c538  stp xzr,xzr,[sp, #0x190]
7101f2c53c  stp xzr,xzr,[sp, #0x180]
7101f2c540  stp xzr,xzr,[sp, #0x170]
7101f2c544  stp xzr,xzr,[sp, #0x160]
7101f2c548  stp xzr,xzr,[sp, #0x150]
7101f2c54c  stp xzr,xzr,[sp, #0x140]
7101f2c550  stp xzr,xzr,[sp, #0x130]
7101f2c554  stp xzr,xzr,[sp, #0x120]
7101f2c558  stp xzr,xzr,[sp, #0x110]
7101f2c55c  stp xzr,xzr,[sp, #0x100]
7101f2c560  stp xzr,xzr,[sp, #0xf0]
7101f2c564  bl 0x71004f5770
7101f2c568  add x8,x20,#0x14e
7101f2c56c  add x0,x19,#0xd8
7101f2c570  add x1,sp,#0x88
7101f2c574  mov w2,#0x200
7101f2c578  str wzr,[sp, #0x1e0]
7101f2c57c  str xzr,[x8]
7101f2c580  stp xzr,xzr,[sp, #0x1c8]
7101f2c584  str xzr,[sp, #0x1b0]
7101f2c588  str xzr,[sp, #0x280]
7101f2c58c  str xzr,[sp, #0x278]
7101f2c590  str xzr,[sp, #0x270]
7101f2c594  str xzr,[sp, #0x268]
7101f2c598  str xzr,[sp, #0x260]
7101f2c59c  str xzr,[sp, #0x258]
7101f2c5a0  str xzr,[sp, #0x250]
7101f2c5a4  str xzr,[sp, #0x248]
7101f2c5a8  str xzr,[sp, #0x240]
7101f2c5ac  str xzr,[sp, #0x238]
7101f2c5b0  str xzr,[sp, #0x230]
7101f2c5b4  str xzr,[sp, #0x228]
7101f2c5b8  str xzr,[sp, #0x220]
7101f2c5bc  str xzr,[sp, #0x218]
7101f2c5c0  str xzr,[sp, #0x210]
7101f2c5c4  str xzr,[sp, #0x208]
7101f2c5c8  stp xzr,xzr,[sp, #0x1b8]
7101f2c5cc  stp xzr,xzr,[sp, #0x1f8]
7101f2c5d0  stp xzr,xzr,[sp, #0x1e8]
7101f2c5d4  bl 0x71039c00e0
7101f2c5d8  str wzr,[x19, #0x2d8]
7101f2c5dc  b 0x7101f2c6a0
7101f2c5e0  mov x0,x22
7101f2c5e4  mov x1,x24
7101f2c5e8  mov x2,x23
7101f2c5ec  bl 0x7101ae45a0
7101f2c5f0  ldr x20,[sp, #0x20]
7101f2c5f4  ldr w8,[x20]
7101f2c5f8  cmp w8,#0x1
7101f2c5fc  ldp x9,x8,[sp, #0x10]
7101f2c600  csel x22,x8,x9,eq
7101f2c604  ldp x8,x9,[x22, #0x8]
7101f2c608  subs x9,x9,x8
7101f2c60c  lsl x9,x9,#0x7
7101f2c610  sub x9,x9,#0x1
7101f2c614  csel x10,xzr,x9,eq
7101f2c618  ldp x9,x11,[x22, #0x20]
7101f2c61c  ldr x21,[sp, #0x40]
7101f2c620  add x9,x11,x9
7101f2c624  cmp x10,x9
7101f2c628  b.ne 0x7101f2c640
7101f2c62c  mov x0,x22
7101f2c630  bl 0x7101432380
7101f2c634  ldp x9,x10,[x22, #0x20]
7101f2c638  ldr x8,[x22, #0x8]
7101f2c63c  add x9,x9,x10
7101f2c640  lsr x10,x9,#0x7
7101f2c644  and x9,x9,#0x3ff
7101f2c648  and x10,x10,#0x1fffffffffffff8
7101f2c64c  ldp x24,x23,[sp, #0x28]
7101f2c650  ldr x8,[x8, x10, LSL #0x0]
7101f2c654  str w19,[x8, x9, LSL #0x2]
7101f2c658  ldr x8,[x22, #0x28]
7101f2c65c  add x8,x8,#0x1
7101f2c660  str x8,[x22, #0x28]
7101f2c664  mov w8,#0x2e0
7101f2c668  mul x8,x25,x8
7101f2c66c  ldr w8,[x26, x8, LSL #0x0]
7101f2c670  cbnz w8,0x7101f2c69c
7101f2c674  mov w8,#0x2e0
7101f2c678  madd x8,x25,x8,x26
7101f2c67c  ldr x8,[x8, #0xc8]
7101f2c680  ldr x8,[x8]
7101f2c684  cbnz x8,0x7101f2c69c
7101f2c688  mov w8,#0x2e0
7101f2c68c  madd x8,x25,x8,x26
7101f2c690  ldr w8,[x8, #0x2d8]
7101f2c694  cmp w8,#0x1
7101f2c698  b.ne 0x7101f2cb88
7101f2c69c  ldr x26,[sp, #0x38]
7101f2c6a0  ldr w8,[x21, #0xd8]
7101f2c6a4  cmp w8,#0x1
7101f2c6a8  mov w8,#0x2e0
7101f2c6ac  mul x8,x25,x8
7101f2c6b0  csel x24,x23,x24,eq
7101f2c6b4  ldr w8,[x24, x8, LSL #0x0]
7101f2c6b8  cbz w8,0x7101f2c6f0
7101f2c6bc  adrp x1,0x71043be000
7101f2c6c0  add x1,x1,#0xebf
7101f2c6c4  add x8,sp,#0x88
7101f2c6c8  mov x0,x26
7101f2c6cc  bl 0x71037780e0
7101f2c6d0  ldr x20,[sp, #0x90]
7101f2c6d4  ldr x0,[x20, #0x8]
7101f2c6d8  cbz x0,0x7101f2c74c
7101f2c6dc  ldr x8,[x0]
7101f2c6e0  ldr x8,[x8, #0x148]
7101f2c6e4  blr x8
7101f2c6e8  mov w21,w0
7101f2c6ec  b 0x7101f2c750
7101f2c6f0  mov w8,#0x2e0
7101f2c6f4  madd x19,x25,x8,x24
7101f2c6f8  ldr x8,[x19, #0xc8]!
7101f2c6fc  ldr x8,[x8]
7101f2c700  cbnz x8,0x7101f2c718
7101f2c704  mov w8,#0x2e0
7101f2c708  madd x8,x25,x8,x24
7101f2c70c  ldr w8,[x8, #0x2d8]
7101f2c710  cmp w8,#0x1
7101f2c714  b.ne 0x7101f2c6bc
7101f2c718  adrp x1,0x7104433000
7101f2c71c  add x1,x1,#0x949
7101f2c720  add x8,sp,#0x88
7101f2c724  mov x0,x26
7101f2c728  bl 0x71037780e0
7101f2c72c  ldr x22,[sp, #0x90]
7101f2c730  ldr x0,[x22, #0x8]
7101f2c734  cbz x0,0x7101f2c8c0
7101f2c738  ldr x8,[x0]
7101f2c73c  ldr x8,[x8, #0x148]
7101f2c740  blr x8
7101f2c744  mov w23,w0
7101f2c748  b 0x7101f2c8c4
7101f2c74c  mov w21,wzr
7101f2c750  adrp x19,0x710523d000
7101f2c754  add x19,x19,#0x9e8
7101f2c758  stp x19,xzr,[sp, #0x88]
7101f2c75c  cbz x20,0x7101f2c768
7101f2c760  mov x0,x20
7101f2c764  bl 0x710392eb40
7101f2c768  tbnz w21,#0x0,0x7101f2c7c0
7101f2c76c  ldr x0,[x26, #0x8]
7101f2c770  fmov s0,0x3f800000
7101f2c774  adrp x1,0x71043be000
7101f2c778  add x1,x1,#0xebf
7101f2c77c  bl 0x7103778300
7101f2c780  adrp x1,0x7104433000
7101f2c784  add x1,x1,#0x949
7101f2c788  add x8,sp,#0x88
7101f2c78c  mov x0,x26
7101f2c790  bl 0x71037780e0
7101f2c794  ldr x20,[sp, #0x90]
7101f2c798  ldr x0,[x20, #0x8]
7101f2c79c  cbz x0,0x7101f2c7b0
7101f2c7a0  ldr x8,[x0]
7101f2c7a4  ldr x8,[x8, #0x140]
7101f2c7a8  mov w1,wzr
7101f2c7ac  blr x8
7101f2c7b0  stp x19,xzr,[sp, #0x88]
7101f2c7b4  cbz x20,0x7101f2c7c0
7101f2c7b8  mov x0,x20
7101f2c7bc  bl 0x710392eb40
7101f2c7c0  adrp x1,0x7104443000
7101f2c7c4  add x1,x1,#0xfb7
7101f2c7c8  add x8,sp,#0x88
7101f2c7cc  mov x0,x26
7101f2c7d0  bl 0x7103776910
7101f2c7d4  ldr x20,[sp, #0x90]
7101f2c7d8  mov x0,x20
7101f2c7dc  bl 0x7103779650
7101f2c7e0  adrp x8,0x710523d000
7101f2c7e4  add x8,x8,#0x9a8
7101f2c7e8  stp x8,xzr,[sp, #0x88]
7101f2c7ec  cbz x20,0x7101f2c7f8
7101f2c7f0  mov x0,x20
7101f2c7f4  bl 0x710392eb40
7101f2c7f8  mov w0,#0x10
7101f2c7fc  mov w1,#0x8
7101f2c800  bl 0x710392e290
7101f2c804  mov x20,x0
7101f2c808  cbnz x0,0x7101f2c854
7101f2c80c  adrp x8,0x7105332000
7101f2c810  ldr x0,[x8, #0xf00]
7101f2c814  cbz x0,0x7101f2c850
7101f2c818  mov w8,#0x8
7101f2c81c  str wzr,[sp, #0x68]
7101f2c820  add x1,sp,#0x68
7101f2c824  str x8,[sp, #0x88]
7101f2c828  ldr x8,[x0]
7101f2c82c  ldr x8,[x8, #0x30]
7101f2c830  add x2,sp,#0x88
7101f2c834  blr x8
7101f2c838  tbz w0,#0x0,0x7101f2c850
7101f2c83c  mov w0,#0x10
7101f2c840  mov w1,#0x8
7101f2c844  bl 0x710392e290
7101f2c848  mov x20,x0
7101f2c84c  cbnz x0,0x7101f2c854
7101f2c850  mov x20,xzr
7101f2c854  str xzr,[x20]
7101f2c858  ldr x8,[x26, #0x8]
7101f2c85c  ldr x8,[x8, #0x8]
7101f2c860  cbz x8,0x7101f2cdf0
7101f2c864  ldr x0,[x8, #0x60]
7101f2c868  cbz x0,0x7101f2cdf0
7101f2c86c  ldr x8,[x8, #0x18]
7101f2c870  add x1,x8,#0xb0
7101f2c874  bl 0x7103796f20
7101f2c878  str x0,[x20]
7101f2c87c  cbz x0,0x7101f2cdf4
7101f2c880  ldr x8,[x0]
7101f2c884  ldr x8,[x8, #0x208]
7101f2c888  mov w1,wzr
7101f2c88c  mov x19,x0
7101f2c890  blr x8
7101f2c894  ldr x8,[x19]
7101f2c898  ldr x8,[x8, #0x200]
7101f2c89c  mov x0,x19
7101f2c8a0  blr x8
7101f2c8a4  tbz w0,#0x0,0x7101f2cb68
7101f2c8a8  ldr x8,[x19]
7101f2c8ac  ldr x8,[x8, #0x210]
7101f2c8b0  mov x0,x19
7101f2c8b4  blr x8
7101f2c8b8  eor w8,w0,#0x1
7101f2c8bc  b 0x7101f2cb6c
7101f2c8c0  mov w23,wzr
7101f2c8c4  adrp x20,0x710523d000
7101f2c8c8  add x20,x20,#0x9e8
7101f2c8cc  stp x20,xzr,[sp, #0x88]
7101f2c8d0  cbz x22,0x7101f2c8dc
7101f2c8d4  mov x0,x22
7101f2c8d8  bl 0x710392eb40
7101f2c8dc  tbnz w23,#0x0,0x7101f2c934
7101f2c8e0  ldr x0,[x26, #0x8]
7101f2c8e4  fmov s0,0x3f800000
7101f2c8e8  adrp x1,0x7104433000
7101f2c8ec  add x1,x1,#0x949
7101f2c8f0  bl 0x7103778300
7101f2c8f4  adrp x1,0x71043be000
7101f2c8f8  add x1,x1,#0xebf
7101f2c8fc  add x8,sp,#0x88
7101f2c900  mov x0,x26
7101f2c904  bl 0x71037780e0
7101f2c908  ldr x22,[sp, #0x90]
7101f2c90c  ldr x0,[x22, #0x8]
7101f2c910  cbz x0,0x7101f2c924
7101f2c914  ldr x8,[x0]
7101f2c918  ldr x8,[x8, #0x140]
7101f2c91c  mov w1,wzr
7101f2c920  blr x8
7101f2c924  stp x20,xzr,[sp, #0x88]
7101f2c928  cbz x22,0x7101f2c934
7101f2c92c  mov x0,x22
7101f2c930  bl 0x710392eb40
7101f2c934  ldr x8,[x19]
7101f2c938  ldr x8,[x8]
7101f2c93c  cbz x8,0x7101f2c97c
7101f2c940  adrp x1,0x7104443000
7101f2c944  add x1,x1,#0xfb7
7101f2c948  add x8,sp,#0x88
7101f2c94c  mov x0,x26
7101f2c950  sub x22,x19,#0x8
7101f2c954  bl 0x7103776910
7101f2c958  add x0,sp,#0x88
7101f2c95c  mov x1,x22
7101f2c960  bl 0x7103779480
7101f2c964  ldr x0,[sp, #0x90]
7101f2c968  adrp x8,0x710523d000
7101f2c96c  add x8,x8,#0x9a8
7101f2c970  stp x8,xzr,[sp, #0x88]
7101f2c974  cbnz x0,0x7101f2c9b0
7101f2c978  b 0x7101f2c9b4
7101f2c97c  adrp x1,0x7104443000
7101f2c980  add x1,x1,#0xfb7
7101f2c984  add x8,sp,#0x88
7101f2c988  mov x0,x26
7101f2c98c  bl 0x7103776910
7101f2c990  ldr x22,[sp, #0x90]
7101f2c994  mov x0,x22
7101f2c998  bl 0x7103779650
7101f2c99c  adrp x8,0x710523d000
7101f2c9a0  add x8,x8,#0x9a8
7101f2c9a4  stp x8,xzr,[sp, #0x88]
7101f2c9a8  cbz x22,0x7101f2c9b4
7101f2c9ac  mov x0,x22
7101f2c9b0  bl 0x710392eb40
7101f2c9b4  ldr x0,[x26, #0x8]
7101f2c9b8  fmov s0,0x3f800000
7101f2c9bc  adrp x1,0x71043f1000
7101f2c9c0  add x1,x1,#0x12c
7101f2c9c4  bl 0x7103778300
7101f2c9c8  ldr w8,[x21, #0xd8]
7101f2c9cc  mov w10,#0x7140
7101f2c9d0  movk w10,#0x1, LSL #16
7101f2c9d4  add x9,x21,#0xf8
7101f2c9d8  add x10,x21,x10
7101f2c9dc  cmp w8,#0x1
7101f2c9e0  ldr x8,[sp]
7101f2c9e4  csel x0,x9,x10,eq
7101f2c9e8  sxtw x8,w8
7101f2c9ec  ldp x9,x10,[x0]
7101f2c9f0  sub x10,x10,x9
7101f2c9f4  asr x10,x10,#0x7
7101f2c9f8  cmp x10,x8
7101f2c9fc  b.ls 0x7101f2ce6c
7101f2ca00  add x8,x9,x8, LSL #0x7
7101f2ca04  ldrsh x9,[x8, #0x20]
7101f2ca08  ldrsb x10,[x8, #0x22]
7101f2ca0c  mov w11,#0x4240
7101f2ca10  movk w11,#0xf, LSL #16
7101f2ca14  mul x9,x9,x11
7101f2ca18  mov w11,#0x3e8
7101f2ca1c  madd x9,x10,x11,x9
7101f2ca20  ldrsb x8,[x8, #0x23]
7101f2ca24  add x21,x9,x8
7101f2ca28  adrp x1,0x7104413000
7101f2ca2c  add x1,x1,#0x18a
7101f2ca30  add x8,sp,#0x88
7101f2ca34  mov x0,x26
7101f2ca38  bl 0x7103776910
7101f2ca3c  add x0,sp,#0x88
7101f2ca40  mov w1,#0x1
7101f2ca44  mov x2,x21
7101f2ca48  bl 0x710377a310
7101f2ca4c  ldr x0,[sp, #0x90]
7101f2ca50  adrp x22,0x710523d000
7101f2ca54  add x22,x22,#0x9a8
7101f2ca58  stp x22,xzr,[sp, #0x88]
7101f2ca5c  cbz x0,0x7101f2ca64
7101f2ca60  bl 0x710392eb40
7101f2ca64  adrp x1,0x710425f000
7101f2ca68  add x1,x1,#0xd7d
7101f2ca6c  add x8,sp,#0x88
7101f2ca70  mov x0,x26
7101f2ca74  bl 0x7103776910
7101f2ca78  add x0,sp,#0x88
7101f2ca7c  mov w1,#0x1
7101f2ca80  mov x2,x21
7101f2ca84  bl 0x710377a310
7101f2ca88  ldr x0,[sp, #0x90]
7101f2ca8c  stp x22,xzr,[sp, #0x88]
7101f2ca90  cbz x0,0x7101f2ca98
7101f2ca94  bl 0x710392eb40
7101f2ca98  mov w8,#0x2e0
7101f2ca9c  madd x8,x25,x8,x24
7101f2caa0  ldr w8,[x8, #0x2d8]
7101f2caa4  ldr x0,[x26, #0x8]
7101f2caa8  fmov s0,0x3f800000
7101f2caac  adrp x9,0x71043e0000
7101f2cab0  add x9,x9,#0x9f5
7101f2cab4  adrp x10,0x710435c000
7101f2cab8  add x10,x10,#0x5a
7101f2cabc  cmp w8,#0x0
7101f2cac0  csel x1,x10,x9,eq
7101f2cac4  bl 0x7103778300
7101f2cac8  ldr x8,[sp, #0x40]
7101f2cacc  ldr w8,[x8, #0xd8]
7101f2cad0  cmp w8,#0x1
7101f2cad4  b.ne 0x7101f2cd0c
7101f2cad8  adrp x1,0x7104411000
7101f2cadc  add x1,x1,#0x1db
7101f2cae0  add x8,sp,#0x88
7101f2cae4  mov x0,x26
7101f2cae8  bl 0x7103776640
7101f2caec  adrp x1,0x71042c3000
7101f2caf0  add x1,x1,#0x645
7101f2caf4  add x8,sp,#0x68
7101f2caf8  add x0,sp,#0x88
7101f2cafc  bl 0x7103776910
7101f2cb00  adrp x1,0x710437a000
7101f2cb04  add x1,x1,#0xe67
7101f2cb08  add x8,sp,#0x58
7101f2cb0c  add x0,sp,#0x88
7101f2cb10  bl 0x7103776910
7101f2cb14  ldr x8,[sp, #0x90]
7101f2cb18  ldr x8,[x8, #0x8]
7101f2cb1c  cbz x8,0x7101f2cc28
7101f2cb20  ldr x20,[x8, #0x78]
7101f2cb24  adrp x8,0x710593b000
7101f2cb28  add x8,x8,#0xa40
7101f2cb2c  ldarb w8,[x8]
7101f2cb30  tbz w8,#0x0,0x7101f2ce20
7101f2cb34  cbz x20,0x7101f2cc28
7101f2cb38  ldr x8,[x20]
7101f2cb3c  ldr x8,[x8]
7101f2cb40  mov x0,x20
7101f2cb44  blr x8
7101f2cb48  cbz x0,0x7101f2cc28
7101f2cb4c  adrp x8,0x710593b000
7101f2cb50  add x8,x8,#0xa58
7101f2cb54  cmp x0,x8
7101f2cb58  b.eq 0x7101f2cc20
7101f2cb5c  ldr x0,[x0]
7101f2cb60  cbnz x0,0x7101f2cb54
7101f2cb64  b 0x7101f2cc28
7101f2cb68  mov w8,#0x1
7101f2cb6c  ldr x9,[x19]
7101f2cb70  ldr x9,[x9, #0x388]
7101f2cb74  and w1,w8,#0x1
7101f2cb78  mov x0,x19
7101f2cb7c  mov w2,wzr
7101f2cb80  blr x9
7101f2cb84  b 0x7101f2cdf4
7101f2cb88  ldr w8,[x20]
7101f2cb8c  cmp w8,#0x1
7101f2cb90  mov w8,#0x2e0
7101f2cb94  csel x19,x23,x24,eq
7101f2cb98  madd x8,x25,x8,x19
7101f2cb9c  mov w9,#0x1
7101f2cba0  str w9,[x8]
7101f2cba4  ldp x10,x11,[sp, #0x68]
7101f2cba8  ldp x12,x13,[sp, #0x78]
7101f2cbac  stp x12,x13,[x8, #0x18]
7101f2cbb0  stp x10,x11,[x8, #0x8]
7101f2cbb4  stp xzr,xzr,[x8, #0x28]
7101f2cbb8  ldr w10,[x20]
7101f2cbbc  str w10,[x8, #0x38]
7101f2cbc0  strb w9,[x8, #0xb4]
7101f2cbc4  ldr x8,[x8, #0xc8]
7101f2cbc8  ldr x22,[x8, #0x8]
7101f2cbcc  stp xzr,xzr,[x8]
7101f2cbd0  ldr x26,[sp, #0x38]
7101f2cbd4  cbz x22,0x7101f2cc08
7101f2cbd8  add x8,x22,#0x8
7101f2cbdc  ldaxr x9,[x8]
7101f2cbe0  sub x10,x9,#0x1
7101f2cbe4  stlxr w11,x10,[x8]
7101f2cbe8  cbnz w11,0x7101f2cbdc
7101f2cbec  cbnz x9,0x7101f2cc08
7101f2cbf0  ldr x8,[x22]
7101f2cbf4  ldr x8,[x8, #0x10]
7101f2cbf8  mov x0,x22
7101f2cbfc  blr x8
7101f2cc00  mov x0,x22
7101f2cc04  bl 0x71039c2670
7101f2cc08  mov w8,#0x2e0
7101f2cc0c  madd x19,x25,x8,x19
7101f2cc10  add x8,sp,#0x88
7101f2cc14  str xzr,[x19, #0xd0]
7101f2cc18  add x20,sp,#0x88
7101f2cc1c  b 0x7101f2c510
7101f2cc20  mov w8,#0x1
7101f2cc24  strb w8,[x20, #0x60]
7101f2cc28  mov w8,#0x2e0
7101f2cc2c  madd x19,x25,x8,x24
7101f2cc30  add x20,x19,#0xe4
7101f2cc34  add x0,sp,#0x68
7101f2cc38  mov w1,#0x1
7101f2cc3c  mov x2,x20
7101f2cc40  bl 0x710377a310
7101f2cc44  add x0,sp,#0x58
7101f2cc48  mov w1,#0x1
7101f2cc4c  mov x2,x20
7101f2cc50  bl 0x710377a310
7101f2cc54  adrp x1,0x71043ae000
7101f2cc58  add x1,x1,#0x1be
7101f2cc5c  add x8,sp,#0x48
7101f2cc60  mov x0,x26
7101f2cc64  bl 0x7103776910
7101f2cc68  ldr w8,[x19, #0x138]
7101f2cc6c  mov w9,#0x8889
7101f2cc70  movk w9,#0x8888, LSL #16
7101f2cc74  mul x9,x8,x9
7101f2cc78  lsr x9,x9,#0x25
7101f2cc7c  mov w10,#0xffffffc4
7101f2cc80  madd w8,w9,w10,w8
7101f2cc84  cmp w9,#0x3e7
7101f2cc88  mov w10,#0x3e7
7101f2cc8c  csel x9,x9,x10,cc
7101f2cc90  mov w11,#0x3e8
7101f2cc94  sxtw x8,w8
7101f2cc98  cmp x8,#0x3e7
7101f2cc9c  csel x8,x8,x10,lt
7101f2cca0  madd x2,x9,x11,x8
7101f2cca4  add x0,sp,#0x48
7101f2cca8  mov w1,#0x1
7101f2ccac  bl 0x710377a310
7101f2ccb0  ldr x0,[sp, #0x50]
7101f2ccb4  stp x22,xzr,[sp, #0x48]
7101f2ccb8  cbz x0,0x7101f2ccc0
7101f2ccbc  bl 0x710392eb40
7101f2ccc0  ldr x0,[sp, #0x60]
7101f2ccc4  stp x22,xzr,[sp, #0x58]
7101f2ccc8  cbz x0,0x7101f2ccd0
7101f2cccc  bl 0x710392eb40
7101f2ccd0  ldr x0,[sp, #0x70]
7101f2ccd4  stp x22,xzr,[sp, #0x68]
7101f2ccd8  cbz x0,0x7101f2cce0
7101f2ccdc  bl 0x710392eb40
7101f2cce0  ldr x20,[sp, #0x90]
7101f2cce4  adrp x8,0x710523d000
7101f2cce8  add x8,x8,#0x988
7101f2ccec  stp x8,xzr,[sp, #0x88]
7101f2ccf0  cbz x20,0x7101f2cd0c
7101f2ccf4  ldr x0,[x20, #0x18]
7101f2ccf8  stp x22,xzr,[x20, #0x10]
7101f2ccfc  cbz x0,0x7101f2cd04
7101f2cd00  bl 0x710392eb40
7101f2cd04  mov x0,x20
7101f2cd08  bl 0x710392eb40
7101f2cd0c  mov w0,#0x10
7101f2cd10  mov w1,#0x8
7101f2cd14  bl 0x710392e290
7101f2cd18  mov x20,x0
7101f2cd1c  cbnz x0,0x7101f2cd68
7101f2cd20  adrp x8,0x7105332000
7101f2cd24  ldr x0,[x8, #0xf00]
7101f2cd28  cbz x0,0x7101f2cd64
7101f2cd2c  mov w8,#0x8
7101f2cd30  str wzr,[sp, #0x68]
7101f2cd34  add x1,sp,#0x68
7101f2cd38  str x8,[sp, #0x88]
7101f2cd3c  ldr x8,[x0]
7101f2cd40  ldr x8,[x8, #0x30]
7101f2cd44  add x2,sp,#0x88
7101f2cd48  blr x8
7101f2cd4c  tbz w0,#0x0,0x7101f2cd64
7101f2cd50  mov w0,#0x10
7101f2cd54  mov w1,#0x8
7101f2cd58  bl 0x710392e290
7101f2cd5c  mov x20,x0
7101f2cd60  cbnz x0,0x7101f2cd68
7101f2cd64  mov x20,xzr
7101f2cd68  str xzr,[x20]
7101f2cd6c  ldr x8,[x26, #0x8]
7101f2cd70  ldr x8,[x8, #0x8]
7101f2cd74  cbz x8,0x7101f2cdf0
7101f2cd78  ldr x0,[x8, #0x60]
7101f2cd7c  cbz x0,0x7101f2cdf0
7101f2cd80  ldr x8,[x8, #0x18]
7101f2cd84  add x1,x8,#0xb0
7101f2cd88  bl 0x7103796f20
7101f2cd8c  str x0,[x20]
7101f2cd90  cbz x0,0x7101f2cdf4
7101f2cd94  ldr x8,[x0]
7101f2cd98  ldr x8,[x8, #0x208]
7101f2cd9c  mov w1,#0x1
7101f2cda0  mov x19,x0
7101f2cda4  mov w21,#0x1
7101f2cda8  blr x8
7101f2cdac  ldr x8,[x19]
7101f2cdb0  ldr x8,[x8, #0x200]
7101f2cdb4  mov x0,x19
7101f2cdb8  blr x8
7101f2cdbc  tbz w0,#0x0,0x7101f2cdd4
7101f2cdc0  ldr x8,[x19]
7101f2cdc4  ldr x8,[x8, #0x210]
7101f2cdc8  mov x0,x19
7101f2cdcc  blr x8
7101f2cdd0  eor w21,w0,#0x1
7101f2cdd4  ldr x8,[x19]
7101f2cdd8  ldr x8,[x8, #0x388]
7101f2cddc  and w1,w21,#0x1
7101f2cde0  mov x0,x19
7101f2cde4  mov w2,wzr
7101f2cde8  blr x8
7101f2cdec  b 0x7101f2cdf4
7101f2cdf0  str xzr,[x20]
7101f2cdf4  mov x0,x20
7101f2cdf8  bl 0x710392eb40
7101f2cdfc  add sp,sp,#0x290
7101f2ce00  ldp x29,x30,[sp, #0x60]
7101f2ce04  ldp x20,x19,[sp, #0x50]
7101f2ce08  ldp x22,x21,[sp, #0x40]
7101f2ce0c  ldp x24,x23,[sp, #0x30]
7101f2ce10  ldp x26,x25,[sp, #0x20]
7101f2ce14  ldp x28,x27,[sp, #0x10]
7101f2ce18  ldr d8,[sp], #0x70
7101f2ce1c  ret
7101f2ce20  adrp x0,0x710593b000
7101f2ce24  add x0,x0,#0xa40
7101f2ce28  bl 0x71039c06b0
7101f2ce2c  cbz w0,0x7101f2cb34
7101f2ce30  adrp x8,0x710593b000
7101f2ce34  add x8,x8,#0xa48
7101f2ce38  ldarb w8,[x8]
7101f2ce3c  tbz w8,#0x0,0x7101f2ce70
7101f2ce40  adrp x8,0x710593b000
7101f2ce44  adrp x9,0x710593b000
7101f2ce48  add x9,x9,#0xa50
7101f2ce4c  adrp x0,0x710593b000
7101f2ce50  add x0,x0,#0xa40
7101f2ce54  str x9,[x8, #0xa58]
7101f2ce58  bl 0x71039c06c0
7101f2ce5c  ldr x26,[sp, #0x38]
7101f2ce60  cbnz x20,0x7101f2cb38
7101f2ce64  b 0x7101f2cc28
7101f2ce68  bl 0x71039c2650
7101f2ce6c  bl 0x71039c1330
7101f2ce70  adrp x0,0x710593b000
7101f2ce74  add x0,x0,#0xa48
7101f2ce78  bl 0x71039c06b0
7101f2ce7c  cbz w0,0x7101f2ce40
7101f2ce80  adrp x8,0x710593b000
7101f2ce84  adrp x0,0x710593b000
7101f2ce88  add x0,x0,#0xa48
7101f2ce8c  str xzr,[x8, #0xa50]
7101f2ce90  bl 0x71039c06c0
7101f2ce94  b 0x7101f2ce40
