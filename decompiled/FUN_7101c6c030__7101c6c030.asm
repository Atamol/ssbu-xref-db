// addr:      7101c6c030
// offset:    0x1c6c030
// name:      FUN_7101c6c030
// mangled:   
// size:      1868

7101c6c030  sub sp,sp,#0xe0
7101c6c034  str d8,[sp, #0x90]
7101c6c038  stp x24,x23,[sp, #0xa0]
7101c6c03c  stp x22,x21,[sp, #0xb0]
7101c6c040  stp x20,x19,[sp, #0xc0]
7101c6c044  stp x29,x30,[sp, #0xd0]
7101c6c048  add x29,sp,#0xd0
7101c6c04c  mov x19,x1
7101c6c050  mov x20,x0
7101c6c054  add x0,x0,#0x88
7101c6c058  adrp x1,0x710433a000
7101c6c05c  add x1,x1,#0x1f7
7101c6c060  add x8,sp,#0x58
7101c6c064  mov x21,x2
7101c6c068  bl 0x7103776640
7101c6c06c  mov w0,#0x10
7101c6c070  mov w1,#0x8
7101c6c074  bl 0x710392e290
7101c6c078  mov x22,x0
7101c6c07c  cbnz x0,0x7101c6c0c8
7101c6c080  adrp x8,0x7105332000
7101c6c084  ldr x0,[x8, #0xf00]
7101c6c088  cbz x0,0x7101c6c0c4
7101c6c08c  mov w8,#0x8
7101c6c090  stur wzr,[x29, #-0x58]
7101c6c094  sub x1,x29,#0x58
7101c6c098  str x8,[sp]
7101c6c09c  ldr x8,[x0]
7101c6c0a0  ldr x8,[x8, #0x30]
7101c6c0a4  mov x2,sp
7101c6c0a8  blr x8
7101c6c0ac  tbz w0,#0x0,0x7101c6c0c4
7101c6c0b0  mov w0,#0x10
7101c6c0b4  mov w1,#0x8
7101c6c0b8  bl 0x710392e290
7101c6c0bc  mov x22,x0
7101c6c0c0  cbnz x0,0x7101c6c0c8
7101c6c0c4  mov x22,xzr
7101c6c0c8  str xzr,[x22]
7101c6c0cc  ldr x23,[sp, #0x60]
7101c6c0d0  ldr x8,[x23, #0x8]
7101c6c0d4  cbz x8,0x7101c6c194
7101c6c0d8  ldr x0,[x8, #0x60]
7101c6c0dc  cbz x0,0x7101c6c194
7101c6c0e0  ldr x8,[x8, #0x18]
7101c6c0e4  add x1,x8,#0xb0
7101c6c0e8  bl 0x7103796f20
7101c6c0ec  str x0,[x22]
7101c6c0f0  cbz x0,0x7101c6c198
7101c6c0f4  ldr x8,[x0]
7101c6c0f8  ldr x8,[x8, #0x218]
7101c6c0fc  mov w1,#0x1
7101c6c100  mov x24,x0
7101c6c104  blr x8
7101c6c108  ldr x8,[x24]
7101c6c10c  ldr x8,[x8, #0x408]
7101c6c110  mov x0,x24
7101c6c114  blr x8
7101c6c118  ldr x8,[x24]
7101c6c11c  ldr x8,[x8, #0x3e8]
7101c6c120  mov w1,#0x1
7101c6c124  mov x0,x24
7101c6c128  blr x8
7101c6c12c  ldr x8,[x24]
7101c6c130  ldr x8,[x8, #0x140]
7101c6c134  mov x0,x24
7101c6c138  blr x8
7101c6c13c  cmp w0,#0x6
7101c6c140  b.eq 0x7101c6c16c
7101c6c144  ldr x8,[x24]
7101c6c148  ldr x8,[x8, #0x140]
7101c6c14c  mov x0,x24
7101c6c150  blr x8
7101c6c154  cmp w0,#0x1
7101c6c158  b.eq 0x7101c6c16c
7101c6c15c  ldr x8,[x24]
7101c6c160  ldr x8,[x8, #0x3f8]
7101c6c164  mov x0,x24
7101c6c168  blr x8
7101c6c16c  ldr x8,[x24]
7101c6c170  ldr x8,[x8, #0x158]
7101c6c174  mov x0,x24
7101c6c178  blr x8
7101c6c17c  tbnz w0,#0x0,0x7101c6c198
7101c6c180  ldr x8,[x24]
7101c6c184  ldr x8,[x8, #0x360]
7101c6c188  mov x0,x24
7101c6c18c  blr x8
7101c6c190  b 0x7101c6c198
7101c6c194  str xzr,[x22]
7101c6c198  mov x0,x22
7101c6c19c  bl 0x710392eb40
7101c6c1a0  fmov s8,0x3f800000
7101c6c1a4  mov v0.16B,v8.16B
7101c6c1a8  adrp x1,0x7104319000
7101c6c1ac  add x1,x1,#0x6af
7101c6c1b0  mov x0,x23
7101c6c1b4  bl 0x7103778300
7101c6c1b8  mov v0.16B,v8.16B
7101c6c1bc  adrp x1,0x71042d6000
7101c6c1c0  add x1,x1,#0x312
7101c6c1c4  mov x0,x23
7101c6c1c8  bl 0x7103778300
7101c6c1cc  adrp x1,0x710433a000
7101c6c1d0  add x1,x1,#0x953
7101c6c1d4  mov x8,sp
7101c6c1d8  add x0,sp,#0x58
7101c6c1dc  bl 0x7103776910
7101c6c1e0  add x3,x21,#0xc
7101c6c1e4  adrp x1,0x710424f000
7101c6c1e8  add x1,x1,#0x521
7101c6c1ec  mov x0,sp
7101c6c1f0  mov w2,#0x1
7101c6c1f4  bl 0x710377a280
7101c6c1f8  ldr x0,[sp, #0x8]
7101c6c1fc  adrp x23,0x710523d000
7101c6c200  add x23,x23,#0x9a8
7101c6c204  stp x23,xzr,[sp]
7101c6c208  cbz x0,0x7101c6c210
7101c6c20c  bl 0x710392eb40
7101c6c210  adrp x1,0x7104318000
7101c6c214  add x1,x1,#0xf0b
7101c6c218  add x8,sp,#0x48
7101c6c21c  add x0,sp,#0x58
7101c6c220  bl 0x7103776640
7101c6c224  ldr x21,[x21, #0x28]
7101c6c228  ldr x20,[x20, #0x78]
7101c6c22c  adrp x1,0x71043ad000
7101c6c230  add x1,x1,#0xa80
7101c6c234  mov x8,sp
7101c6c238  add x0,sp,#0x48
7101c6c23c  bl 0x7103776910
7101c6c240  adrp x1,0x710434a000
7101c6c244  add x1,x1,#0x68e
7101c6c248  sub x8,x29,#0x58
7101c6c24c  add x0,sp,#0x48
7101c6c250  bl 0x7103776910
7101c6c254  mov x0,x20
7101c6c258  mov x1,x21
7101c6c25c  bl 0x7103240430
7101c6c260  mov x1,x0
7101c6c264  ldr x0,[sp, #0x8]
7101c6c268  bl 0x7103778b80
7101c6c26c  mov w0,#0x10
7101c6c270  mov w1,#0x20
7101c6c274  str x23,[sp, #0x68]
7101c6c278  bl 0x710392e290
7101c6c27c  cbnz x0,0x7101c6c2c4
7101c6c280  adrp x8,0x7105332000
7101c6c284  ldr x0,[x8, #0xf00]
7101c6c288  cbz x0,0x7101c6c2c0
7101c6c28c  mov w8,#0x20
7101c6c290  stur wzr,[x29, #-0x34]
7101c6c294  sub x1,x29,#0x34
7101c6c298  stur x8,[x29, #-0x48]
7101c6c29c  ldr x8,[x0]
7101c6c2a0  ldr x8,[x8, #0x30]
7101c6c2a4  sub x2,x29,#0x48
7101c6c2a8  blr x8
7101c6c2ac  tbz w0,#0x0,0x7101c6c2c0
7101c6c2b0  mov w0,#0x10
7101c6c2b4  mov w1,#0x20
7101c6c2b8  bl 0x710392e290
7101c6c2bc  cbnz x0,0x7101c6c2c4
7101c6c2c0  mov x0,xzr
7101c6c2c4  stp xzr,xzr,[x0, #0x10]
7101c6c2c8  mov x22,x0
7101c6c2cc  stp xzr,xzr,[x0]
7101c6c2d0  ldur x8,[x29, #-0x50]
7101c6c2d4  mov x1,x21
7101c6c2d8  str x0,[sp, #0x70]
7101c6c2dc  ldr x9,[x8]
7101c6c2e0  str x9,[x0]
7101c6c2e4  ldr x8,[x8, #0x8]
7101c6c2e8  str x8,[x0, #0x8]
7101c6c2ec  ldur x20,[x29, #-0x50]
7101c6c2f0  ldr x8,[x20, #0x10]
7101c6c2f4  str x8,[x22, #0x10]
7101c6c2f8  ldr x8,[x20, #0x18]
7101c6c2fc  add x0,sp,#0x68
7101c6c300  str x8,[x22, #0x18]
7101c6c304  bl 0x710337d450
7101c6c308  stp x23,xzr,[sp, #0x68]
7101c6c30c  cbz x22,0x7101c6c318
7101c6c310  mov x0,x22
7101c6c314  bl 0x710392eb40
7101c6c318  stp x23,xzr,[x29, #-0x58]
7101c6c31c  cbz x20,0x7101c6c328
7101c6c320  mov x0,x20
7101c6c324  bl 0x710392eb40
7101c6c328  ldr x0,[sp, #0x8]
7101c6c32c  stp x23,xzr,[sp]
7101c6c330  cbz x0,0x7101c6c338
7101c6c334  bl 0x710392eb40
7101c6c338  ldr x20,[sp, #0x50]
7101c6c33c  adrp x22,0x710523d000
7101c6c340  add x22,x22,#0x988
7101c6c344  stp x22,xzr,[sp, #0x48]
7101c6c348  cbz x20,0x7101c6c364
7101c6c34c  ldr x0,[x20, #0x18]
7101c6c350  stp x23,xzr,[x20, #0x10]
7101c6c354  cbz x0,0x7101c6c35c
7101c6c358  bl 0x710392eb40
7101c6c35c  mov x0,x20
7101c6c360  bl 0x710392eb40
7101c6c364  ldrb w1,[x19, #0x85]
7101c6c368  mov x0,sp
7101c6c36c  mov x20,sp
7101c6c370  bl 0x7101c6ee80
7101c6c374  adrp x1,0x710425f000
7101c6c378  add x1,x1,#0x4f9
7101c6c37c  sub x8,x29,#0x58
7101c6c380  add x0,sp,#0x58
7101c6c384  bl 0x7103776910
7101c6c388  add x21,x20,#0x8
7101c6c38c  sub x0,x29,#0x58
7101c6c390  mov x1,x21
7101c6c394  bl 0x710377a120
7101c6c398  ldur x0,[x29, #-0x50]
7101c6c39c  stp x23,xzr,[x29, #-0x58]
7101c6c3a0  cbz x0,0x7101c6c3a8
7101c6c3a4  bl 0x710392eb40
7101c6c3a8  ldrb w1,[x19, #0x85]
7101c6c3ac  mov x0,sp
7101c6c3b0  bl 0x7101c6ec50
7101c6c3b4  fmov s8,0x3f800000
7101c6c3b8  ldr x20,[sp, #0x60]
7101c6c3bc  mov x0,x20
7101c6c3c0  mov v0.16B,v8.16B
7101c6c3c4  mov x1,x21
7101c6c3c8  bl 0x7103778300
7101c6c3cc  mov v0.16B,v8.16B
7101c6c3d0  adrp x1,0x710424f000
7101c6c3d4  add x1,x1,#0x5db
7101c6c3d8  mov x0,x20
7101c6c3dc  bl 0x7103778300
7101c6c3e0  adrp x1,0x710433a000
7101c6c3e4  add x1,x1,#0x373
7101c6c3e8  sub x8,x29,#0x58
7101c6c3ec  add x0,sp,#0x58
7101c6c3f0  bl 0x7103776910
7101c6c3f4  ldrb w8,[x19, #0x86]
7101c6c3f8  cmp w8,#0x4
7101c6c3fc  b.hi 0x7101c6c498
7101c6c400  adrp x9,0x71044f9000
7101c6c404  add x9,x9,#0x4b0
7101c6c408  ldrsw x8,[x9, x8, LSL #0x2]
7101c6c40c  add x8,x8,x9
7101c6c410  br x8
7101c6c414  orr x9,xzr,#0x1800000000
7101c6c418  str x9,[sp]
7101c6c41c  mov x9,#0x6e6d
7101c6c420  movk x9,#0x5f75, LSL #16
7101c6c424  movk x9,#0x6e6f, LSL #32
7101c6c428  movk x9,#0x696c, LSL #48
7101c6c42c  str x9,[sp, #0x8]
7101c6c430  mov x9,#0x656e
7101c6c434  movk x9,#0x725f, LSL #16
7101c6c438  mov x10,sp
7101c6c43c  add x1,x10,#0x8
7101c6c440  strb wzr,[sp, #0x20]
7101c6c444  movk x9,#0x6f6f, LSL #32
7101c6c448  movk x9,#0x5f6d, LSL #48
7101c6c44c  str x9,[sp, #0x10]
7101c6c450  add x9,x10,#0x9
7101c6c454  mov w10,#0x6f66
7101c6c458  strh w10,[sp, #0x18]
7101c6c45c  mov w10,#0x6d72
7101c6c460  movk w10,#0x615f, LSL #16
7101c6c464  stur w10,[sp, #0x1a]
7101c6c468  mov w10,#0x6c6c
7101c6c46c  mov w8,#0x9dc5
7101c6c470  movk w8,#0x811c, LSL #16
7101c6c474  strh w10,[sp, #0x1e]
7101c6c478  mov w11,#0x6d
7101c6c47c  mov w10,#0x89
7101c6c480  mul w8,w8,w10
7101c6c484  and w11,w11,#0xff
7101c6c488  eor w8,w8,w11
7101c6c48c  ldrb w11,[x9], #0x1
7101c6c490  cbnz w11,0x7101c6c480
7101c6c494  b 0x7101c6c698
7101c6c498  mov x11,#0x6e6d
7101c6c49c  movk x11,#0x5f75, LSL #16
7101c6c4a0  mov x9,#0x1900000000
7101c6c4a4  movk x11,#0x6e6f, LSL #32
7101c6c4a8  movk x11,#0x696c, LSL #48
7101c6c4ac  mov x10,sp
7101c6c4b0  stp x9,x11,[sp]
7101c6c4b4  mov x9,#0x656e
7101c6c4b8  movk x9,#0x725f, LSL #16
7101c6c4bc  movk x9,#0x6f6f, LSL #32
7101c6c4c0  movk x9,#0x5f6d, LSL #48
7101c6c4c4  add x1,x10,#0x8
7101c6c4c8  str x9,[sp, #0x10]
7101c6c4cc  add x9,x10,#0x9
7101c6c4d0  mov w10,#0x6f66
7101c6c4d4  strh w10,[sp, #0x18]
7101c6c4d8  mov x10,#0x6d72
7101c6c4dc  movk x10,#0x665f, LSL #16
7101c6c4e0  movk x10,#0x756f, LSL #32
7101c6c4e4  movk x10,#0x72, LSL #48
7101c6c4e8  stur x10,[sp, #0x1a]
7101c6c4ec  mov w8,#0x9dc5
7101c6c4f0  movk w8,#0x811c, LSL #16
7101c6c4f4  mov w11,#0x6d
7101c6c4f8  mov w10,#0x89
7101c6c4fc  mul w8,w8,w10
7101c6c500  and w11,w11,#0xff
7101c6c504  eor w8,w8,w11
7101c6c508  ldrb w11,[x9], #0x1
7101c6c50c  cbnz w11,0x7101c6c4fc
7101c6c510  b 0x7101c6c698
7101c6c514  mov x11,#0x6e6d
7101c6c518  movk x11,#0x5f75, LSL #16
7101c6c51c  mov x9,#0x1a00000000
7101c6c520  movk x11,#0x6e6f, LSL #32
7101c6c524  movk x11,#0x696c, LSL #48
7101c6c528  strb wzr,[sp, #0x22]
7101c6c52c  stp x9,x11,[sp]
7101c6c530  mov x9,#0x656e
7101c6c534  movk x9,#0x725f, LSL #16
7101c6c538  mov x10,sp
7101c6c53c  movk x9,#0x6f6f, LSL #32
7101c6c540  movk x9,#0x5f6d, LSL #48
7101c6c544  add x1,x10,#0x8
7101c6c548  str x9,[sp, #0x10]
7101c6c54c  add x9,x10,#0x9
7101c6c550  mov w10,#0x6f66
7101c6c554  strh w10,[sp, #0x18]
7101c6c558  mov x10,#0x6d72
7101c6c55c  movk x10,#0x745f, LSL #16
7101c6c560  movk x10,#0x7268, LSL #32
7101c6c564  movk x10,#0x6565, LSL #48
7101c6c568  stur x10,[sp, #0x1a]
7101c6c56c  mov w8,#0x9dc5
7101c6c570  movk w8,#0x811c, LSL #16
7101c6c574  mov w11,#0x6d
7101c6c578  mov w10,#0x89
7101c6c57c  mul w8,w8,w10
7101c6c580  and w11,w11,#0xff
7101c6c584  eor w8,w8,w11
7101c6c588  ldrb w11,[x9], #0x1
7101c6c58c  cbnz w11,0x7101c6c57c
7101c6c590  b 0x7101c6c698
7101c6c594  orr x9,xzr,#0x1c00000000
7101c6c598  str x9,[sp]
7101c6c59c  mov x9,#0x6e6d
7101c6c5a0  movk x9,#0x5f75, LSL #16
7101c6c5a4  movk x9,#0x6e6f, LSL #32
7101c6c5a8  movk x9,#0x696c, LSL #48
7101c6c5ac  str x9,[sp, #0x8]
7101c6c5b0  mov x9,#0x656e
7101c6c5b4  movk x9,#0x725f, LSL #16
7101c6c5b8  mov x10,sp
7101c6c5bc  add x1,x10,#0x8
7101c6c5c0  strb wzr,[sp, #0x24]
7101c6c5c4  movk x9,#0x6f6f, LSL #32
7101c6c5c8  movk x9,#0x5f6d, LSL #48
7101c6c5cc  str x9,[sp, #0x10]
7101c6c5d0  add x9,x10,#0x9
7101c6c5d4  mov w10,#0x6f66
7101c6c5d8  strh w10,[sp, #0x18]
7101c6c5dc  mov x10,#0x6d72
7101c6c5e0  movk x10,#0x6f5f, LSL #16
7101c6c5e4  movk x10,#0x656e, LSL #32
7101c6c5e8  movk x10,#0x6f5f, LSL #48
7101c6c5ec  stur x10,[sp, #0x1a]
7101c6c5f0  mov w10,#0x656e
7101c6c5f4  mov w8,#0x9dc5
7101c6c5f8  movk w8,#0x811c, LSL #16
7101c6c5fc  strh w10,[sp, #0x22]
7101c6c600  mov w11,#0x6d
7101c6c604  mov w10,#0x89
7101c6c608  mul w8,w8,w10
7101c6c60c  and w11,w11,#0xff
7101c6c610  eor w8,w8,w11
7101c6c614  ldrb w11,[x9], #0x1
7101c6c618  cbnz w11,0x7101c6c608
7101c6c61c  b 0x7101c6c698
7101c6c620  mov x11,#0x6e6d
7101c6c624  movk x11,#0x5f75, LSL #16
7101c6c628  mov x9,#0x1900000000
7101c6c62c  movk x11,#0x6e6f, LSL #32
7101c6c630  movk x11,#0x696c, LSL #48
7101c6c634  mov x10,sp
7101c6c638  stp x9,x11,[sp]
7101c6c63c  mov x9,#0x656e
7101c6c640  movk x9,#0x725f, LSL #16
7101c6c644  movk x9,#0x6f6f, LSL #32
7101c6c648  movk x9,#0x5f6d, LSL #48
7101c6c64c  add x1,x10,#0x8
7101c6c650  str x9,[sp, #0x10]
7101c6c654  add x9,x10,#0x9
7101c6c658  mov w10,#0x6f66
7101c6c65c  strh w10,[sp, #0x18]
7101c6c660  mov x10,#0x6d72
7101c6c664  movk x10,#0x745f, LSL #16
7101c6c668  movk x10,#0x6165, LSL #32
7101c6c66c  movk x10,#0x6d, LSL #48
7101c6c670  stur x10,[sp, #0x1a]
7101c6c674  mov w8,#0x9dc5
7101c6c678  movk w8,#0x811c, LSL #16
7101c6c67c  mov w11,#0x6d
7101c6c680  mov w10,#0x89
7101c6c684  mul w8,w8,w10
7101c6c688  and w11,w11,#0xff
7101c6c68c  eor w8,w8,w11
7101c6c690  ldrb w11,[x9], #0x1
7101c6c694  cbnz w11,0x7101c6c684
7101c6c698  sub x0,x29,#0x58
7101c6c69c  str w8,[sp]
7101c6c6a0  bl 0x710377a120
7101c6c6a4  ldur x0,[x29, #-0x50]
7101c6c6a8  stp x23,xzr,[x29, #-0x58]
7101c6c6ac  cbz x0,0x7101c6c6b4
7101c6c6b0  bl 0x710392eb40
7101c6c6b4  fmov s0,0x3f800000
7101c6c6b8  adrp x1,0x710438c000
7101c6c6bc  add x1,x1,#0xb54
7101c6c6c0  mov x0,x20
7101c6c6c4  bl 0x7103778300
7101c6c6c8  adrp x1,0x71043cf000
7101c6c6cc  add x1,x1,#0x511
7101c6c6d0  mov x8,sp
7101c6c6d4  add x0,sp,#0x58
7101c6c6d8  bl 0x7103776910
7101c6c6dc  ldrb w3,[x19]
7101c6c6e0  adrp x1,0x7104401000
7101c6c6e4  add x1,x1,#0x6bd
7101c6c6e8  mov x0,sp
7101c6c6ec  mov w2,#0x1
7101c6c6f0  bl 0x710377a280
7101c6c6f4  ldr x0,[sp, #0x8]
7101c6c6f8  stp x23,xzr,[sp]
7101c6c6fc  cbz x0,0x7101c6c704
7101c6c700  bl 0x710392eb40
7101c6c704  adrp x1,0x710432a000
7101c6c708  add x1,x1,#0x61
7101c6c70c  mov x8,sp
7101c6c710  add x0,sp,#0x58
7101c6c714  bl 0x7103776910
7101c6c718  ldr x0,[sp, #0x8]
7101c6c71c  ldr x8,[x0, #0x10]
7101c6c720  cbz x8,0x7101c6c734
7101c6c724  mov w9,#0x101
7101c6c728  strh w9,[x8, #0x27e]
7101c6c72c  mov w9,#0x1
7101c6c730  strb w9,[x8, #0x280]
7101c6c734  stp x23,xzr,[sp]
7101c6c738  cbz x0,0x7101c6c740
7101c6c73c  bl 0x710392eb40
7101c6c740  stp x22,xzr,[sp, #0x58]
7101c6c744  cbz x20,0x7101c6c760
7101c6c748  ldr x0,[x20, #0x18]
7101c6c74c  stp x23,xzr,[x20, #0x10]
7101c6c750  cbz x0,0x7101c6c758
7101c6c754  bl 0x710392eb40
7101c6c758  mov x0,x20
7101c6c75c  bl 0x710392eb40
7101c6c760  ldr d8,[sp, #0x90]
7101c6c764  ldp x29,x30,[sp, #0xd0]
7101c6c768  ldp x20,x19,[sp, #0xc0]
7101c6c76c  ldp x22,x21,[sp, #0xb0]
7101c6c770  ldp x24,x23,[sp, #0xa0]
7101c6c774  add sp,sp,#0xe0
7101c6c778  ret
