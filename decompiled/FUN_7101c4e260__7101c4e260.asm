// addr:      7101c4e260
// offset:    0x1c4e260
// name:      FUN_7101c4e260
// mangled:   
// size:      1508

7101c4e260  sub sp,sp,#0x90
7101c4e264  str d8,[sp, #0x60]
7101c4e268  str x21,[sp, #0x68]
7101c4e26c  stp x20,x19,[sp, #0x70]
7101c4e270  stp x29,x30,[sp, #0x80]
7101c4e274  add x29,sp,#0x80
7101c4e278  ldr w8,[x0, #0x17c]
7101c4e27c  mov x19,x0
7101c4e280  cbz w8,0x7101c4e304
7101c4e284  ldr x0,[x19, #0x478]
7101c4e288  ldr x8,[x0, #0xa8]
7101c4e28c  cbz x8,0x7101c4e2b4
7101c4e290  ldr x8,[x8, #0x8]
7101c4e294  ldr x8,[x8, #0x8]
7101c4e298  cbz x8,0x7101c4e2b4
7101c4e29c  ldr x9,[x8]
7101c4e2a0  ldr x9,[x9, #0x138]
7101c4e2a4  mov x0,x8
7101c4e2a8  blr x9
7101c4e2ac  tbz w0,#0x0,0x7101c4e828
7101c4e2b0  ldr x0,[x19, #0x478]
7101c4e2b4  ldrb w8,[x0, #0xb3]
7101c4e2b8  cbz w8,0x7101c4e34c
7101c4e2bc  ldrb w8,[x0, #0xb2]
7101c4e2c0  sub w9,w8,#0x1
7101c4e2c4  cmp w9,#0x2
7101c4e2c8  b.cc 0x7101c4e454
7101c4e2cc  cmp w8,#0x3
7101c4e2d0  b.eq 0x7101c4e470
7101c4e2d4  cmp w8,#0x4
7101c4e2d8  b.ne 0x7101c4e828
7101c4e2dc  mov w1,wzr
7101c4e2e0  bl 0x7101c5d7b0
7101c4e2e4  ldr x0,[x19, #0x1ad0]
7101c4e2e8  cbz x0,0x7101c4e840
7101c4e2ec  ldr x8,[x0]
7101c4e2f0  ldr x8,[x8, #0x30]
7101c4e2f4  blr x8
7101c4e2f8  tbz w0,#0x0,0x7101c4e828
7101c4e2fc  mov w1,#0x8
7101c4e300  b 0x7101c4e47c
7101c4e304  ldr x0,[x19, #0x300]
7101c4e308  ldr x8,[x0]
7101c4e30c  ldr x8,[x8, #0x68]
7101c4e310  blr x8
7101c4e314  tbz w0,#0x0,0x7101c4e440
7101c4e318  ldr x8,[x19, #0x428]
7101c4e31c  tbz w8,#0x0,0x7101c4e4bc
7101c4e320  ldr x20,[x19, #0x2f8]
7101c4e324  ldr x8,[x20]
7101c4e328  ldr x8,[x8, #0x18]
7101c4e32c  ldr x0,[x8]
7101c4e330  cbz x0,0x7101c4e4c8
7101c4e334  ldr x8,[x0]
7101c4e338  ldr x8,[x8, #0x2f8]
7101c4e33c  blr x8
7101c4e340  tbz w0,#0x0,0x7101c4e498
7101c4e344  ldr x8,[x19, #0x428]
7101c4e348  b 0x7101c4e4bc
7101c4e34c  mov w8,#0x1
7101c4e350  strh w8,[x19, #0x430]
7101c4e354  ldr x8,[x19, #0x310]
7101c4e358  ldr x0,[x8]
7101c4e35c  cbz x0,0x7101c4e370
7101c4e360  ldr x8,[x0]
7101c4e364  ldr x8,[x8, #0x328]
7101c4e368  mov w1,wzr
7101c4e36c  blr x8
7101c4e370  ldr w8,[x19, #0x400]
7101c4e374  cmn w8,#0x1
7101c4e378  b.ne 0x7101c4e388
7101c4e37c  ldr w8,[x19, #0x404]
7101c4e380  cmn w8,#0x1
7101c4e384  b.eq 0x7101c4e428
7101c4e388  add x0,x19,#0x3d8
7101c4e38c  mov w1,wzr
7101c4e390  bl 0x710373b540
7101c4e394  add x20,x19,#0x3e0
7101c4e398  mov x0,x20
7101c4e39c  str wzr,[x19, #0x3d8]
7101c4e3a0  bl 0x71039602c0
7101c4e3a4  adrp x8,0x7104f73000
7101c4e3a8  add x8,x8,#0xd50
7101c4e3ac  str x8,[x19, #0x3e0]
7101c4e3b0  ldr x8,[x19, #0x3e8]
7101c4e3b4  cbz x8,0x7101c4e3f0
7101c4e3b8  adrp x9,0x7106dd5000
7101c4e3bc  ldrb w9,[x9, #0x3a8]
7101c4e3c0  cmp w9,#0x1
7101c4e3c4  b.ne 0x7101c4e3f0
7101c4e3c8  adrp x10,0x7106dd5000
7101c4e3cc  ldr w9,[x19, #0x3f0]
7101c4e3d0  ldr w10,[x10, #0x3ac]
7101c4e3d4  cmp w9,w10
7101c4e3d8  b.ne 0x7101c4e3f0
7101c4e3dc  ldr wzr,[x8, #0x38]!
7101c4e3e0  ldaxr w9,[x8]
7101c4e3e4  sub w9,w9,#0x1
7101c4e3e8  stlxr w10,w9,[x8]
7101c4e3ec  cbnz w10,0x7101c4e3e0
7101c4e3f0  mov x8,#0x650000000000
7101c4e3f4  movk x8,#0x87, LSL #48
7101c4e3f8  stp xzr,xzr,[x20, #0x10]
7101c4e3fc  stp xzr,xzr,[x20]
7101c4e400  str x8,[x19, #0x3f0]
7101c4e404  adrp x8,0x7104f73000
7101c4e408  add x8,x8,#0xd30
7101c4e40c  str x8,[x19, #0x3e0]
7101c4e410  mov x8,#-0x1
7101c4e414  str xzr,[x19, #0x3e8]
7101c4e418  strb wzr,[x19, #0x3f8]
7101c4e41c  str x8,[x19, #0x400]
7101c4e420  str xzr,[x19, #0x408]
7101c4e424  str wzr,[x19, #0x414]
7101c4e428  ldr x20,[x19, #0x478]
7101c4e42c  ldr x8,[x20, #0x80]
7101c4e430  ldr x0,[x8]
7101c4e434  bl 0x7103775fa0
7101c4e438  mov w8,#0x1
7101c4e43c  strb w8,[x20, #0x70]
7101c4e440  ldr w8,[x19, #0x174]
7101c4e444  subs w8,w8,#0x1
7101c4e448  b.lt 0x7101c4e828
7101c4e44c  str w8,[x19, #0x174]
7101c4e450  b 0x7101c4e828
7101c4e454  ldr d8,[sp, #0x60]
7101c4e458  ldp x29,x30,[sp, #0x80]
7101c4e45c  ldp x20,x19,[sp, #0x70]
7101c4e460  mov w1,wzr
7101c4e464  ldr x21,[sp, #0x68]
7101c4e468  add sp,sp,#0x90
7101c4e46c  b 0x7101c5d7b0
7101c4e470  mov w1,wzr
7101c4e474  bl 0x7101c5d7b0
7101c4e478  orr w1,wzr,#0x3
7101c4e47c  ldr d8,[sp, #0x60]
7101c4e480  mov x0,x19
7101c4e484  ldr x21,[sp, #0x68]
7101c4e488  ldp x29,x30,[sp, #0x80]
7101c4e48c  ldp x20,x19,[sp, #0x70]
7101c4e490  add sp,sp,#0x90
7101c4e494  b 0x7101c5d920
7101c4e498  ldr x8,[x20]
7101c4e49c  ldr x8,[x8, #0x18]
7101c4e4a0  ldr x0,[x8]
7101c4e4a4  cbz x0,0x7101c4e4c8
7101c4e4a8  ldr x8,[x0]
7101c4e4ac  ldr x8,[x8, #0x3c0]
7101c4e4b0  blr x8
7101c4e4b4  ldr x8,[x19, #0x428]
7101c4e4b8  tbnz w0,#0x0,0x7101c4e4cc
7101c4e4bc  and x8,x8,#-0x2
7101c4e4c0  str x8,[x19, #0x428]
7101c4e4c4  b 0x7101c4e4ec
7101c4e4c8  ldr x8,[x19, #0x428]
7101c4e4cc  tbnz w8,#0x1,0x7101c4e4e0
7101c4e4d0  and x9,x8,#-0x2
7101c4e4d4  str x9,[x19, #0x428]
7101c4e4d8  tbnz w8,#0x2,0x7101c4e4e8
7101c4e4dc  b 0x7101c4e4ec
7101c4e4e0  and x8,x8,#-0x2
7101c4e4e4  str x8,[x19, #0x428]
7101c4e4e8  strb wzr,[x19, #0x431]
7101c4e4ec  ldr x8,[x19, #0x10]
7101c4e4f0  ldr x8,[x8]
7101c4e4f4  ldr x0,[x8]
7101c4e4f8  mov w1,wzr
7101c4e4fc  bl 0x71037760f0
7101c4e500  ldrb w8,[x19, #0xafc]
7101c4e504  ldrb w9,[x19, #0xce4]
7101c4e508  mov w11,#0x10b4
7101c4e50c  ldrb w10,[x19, #0xecc]
7101c4e510  add w8,w9,w8
7101c4e514  mov w9,#0x129c
7101c4e518  ldrb w11,[x19, x11, LSL ]
7101c4e51c  add w8,w8,w10
7101c4e520  mov w10,#0x1484
7101c4e524  ldrb w9,[x19, x9, LSL ]
7101c4e528  ldrb w10,[x19, x10, LSL ]
7101c4e52c  add w8,w8,w11
7101c4e530  mov w11,#0x166c
7101c4e534  ldrb w11,[x19, x11, LSL ]
7101c4e538  add w8,w8,w9
7101c4e53c  mov w9,#0x1854
7101c4e540  add w8,w8,w10
7101c4e544  ldrb w9,[x19, x9, LSL ]
7101c4e548  ldr x10,[x19, #0x478]
7101c4e54c  add w8,w8,w11
7101c4e550  add w20,w8,w9
7101c4e554  add x0,x10,#0x88
7101c4e558  adrp x1,0x710433a000
7101c4e55c  add x1,x1,#0x1f7
7101c4e560  add x8,sp,#0x10
7101c4e564  bl 0x7103776640
7101c4e568  adrp x1,0x710435b000
7101c4e56c  add x1,x1,#0x89c
7101c4e570  mov x8,sp
7101c4e574  add x0,sp,#0x10
7101c4e578  bl 0x7103776910
7101c4e57c  and w3,w20,#0xff
7101c4e580  adrp x1,0x710434a000
7101c4e584  add x1,x1,#0x3f5
7101c4e588  mov x0,sp
7101c4e58c  mov w2,#0x1
7101c4e590  bl 0x710377a280
7101c4e594  ldr x0,[sp, #0x8]
7101c4e598  adrp x21,0x710523d000
7101c4e59c  add x21,x21,#0x9a8
7101c4e5a0  stp x21,xzr,[sp]
7101c4e5a4  cbz x0,0x7101c4e5ac
7101c4e5a8  bl 0x710392eb40
7101c4e5ac  ldr x20,[sp, #0x18]
7101c4e5b0  adrp x8,0x710523d000
7101c4e5b4  add x8,x8,#0x988
7101c4e5b8  stp x8,xzr,[sp, #0x10]
7101c4e5bc  cbz x20,0x7101c4e5d8
7101c4e5c0  ldr x0,[x20, #0x18]
7101c4e5c4  stp x21,xzr,[x20, #0x10]
7101c4e5c8  cbz x0,0x7101c4e5d0
7101c4e5cc  bl 0x710392eb40
7101c4e5d0  mov x0,x20
7101c4e5d4  bl 0x710392eb40
7101c4e5d8  ldr x20,[x19, #0x478]
7101c4e5dc  ldr x8,[x20, #0x80]
7101c4e5e0  ldr x0,[x8]
7101c4e5e4  mov w2,#0x1000
7101c4e5e8  movk w2,#0x1, LSL #16
7101c4e5ec  mov w1,#0x1
7101c4e5f0  bl 0x7103775dc0
7101c4e5f4  strb wzr,[x20, #0x70]
7101c4e5f8  ldr x20,[x19, #0x478]
7101c4e5fc  mov w8,#0x100
7101c4e600  strh w8,[x20, #0xb2]
7101c4e604  ldr x8,[x20, #0x80]
7101c4e608  ldr x8,[x8]
7101c4e60c  ldr x0,[x8]
7101c4e610  mov w1,wzr
7101c4e614  bl 0x71037760f0
7101c4e618  adrp x8,0x710532f000
7101c4e61c  ldr x8,[x8, #0x8d0]
7101c4e620  ldr x0,[x8, #0x8]
7101c4e624  ldrb w8,[x0, #0x191]
7101c4e628  cbnz w8,0x7101c4e6a8
7101c4e62c  mov x19,#0xf89a
7101c4e630  movk x19,#0xb197, LSL #16
7101c4e634  movk x19,#0x19, LSL #32
7101c4e638  mov w2,#0x4
7101c4e63c  mov x1,x19
7101c4e640  bl 0x7103313f20
7101c4e644  tbz w0,#0x0,0x7101c4e6a8
7101c4e648  add x0,sp,#0x10
7101c4e64c  mov x1,x19
7101c4e650  bl 0x71024076d0
7101c4e654  ldr x8,[sp, #0x20]
7101c4e658  adrp x9,0x7104f73000
7101c4e65c  add x9,x9,#0xd50
7101c4e660  str x9,[sp, #0x18]
7101c4e664  cbz x8,0x7101c4e6d4
7101c4e668  adrp x8,0x7106dd5000
7101c4e66c  ldrb w8,[x8, #0x3a8]
7101c4e670  cmp w8,#0x1
7101c4e674  b.ne 0x7101c4e6d4
7101c4e678  adrp x9,0x7106dd5000
7101c4e67c  ldr w8,[sp, #0x28]
7101c4e680  ldr w9,[x9, #0x3ac]
7101c4e684  cmp w8,w9
7101c4e688  b.ne 0x7101c4e6d4
7101c4e68c  ldr x8,[sp, #0x20]
7101c4e690  ldr wzr,[x8, #0x38]!
7101c4e694  ldaxr w9,[x8]
7101c4e698  sub w9,w9,#0x1
7101c4e69c  stlxr w10,w9,[x8]
7101c4e6a0  cbnz w10,0x7101c4e694
7101c4e6a4  b 0x7101c4e6d4
7101c4e6a8  mov x8,#0x650000000000
7101c4e6ac  movk x8,#0x87, LSL #48
7101c4e6b0  strb wzr,[sp, #0x30]
7101c4e6b4  stp xzr,x8,[sp, #0x20]
7101c4e6b8  mov x8,#-0x1
7101c4e6bc  stp x8,xzr,[sp, #0x38]
7101c4e6c0  adrp x8,0x7104f73000
7101c4e6c4  add x8,x8,#0xd50
7101c4e6c8  str wzr,[sp, #0x10]
7101c4e6cc  str xzr,[sp, #0x48]
7101c4e6d0  str x8,[sp, #0x18]
7101c4e6d4  adrp x8,0x710532f000
7101c4e6d8  ldr x21,[x8, #0x8b8]
7101c4e6dc  adrp x8,0x710532f000
7101c4e6e0  ldr x8,[x8, #0x8c0]
7101c4e6e4  str xzr,[sp, #0x20]
7101c4e6e8  strb wzr,[sp, #0x30]
7101c4e6ec  ldr x19,[x8, #0x8]
7101c4e6f0  fmov s0,0x41900000
7101c4e6f4  mov x1,#0xfd4c
7101c4e6f8  movk x1,#0x26ed, LSL #16
7101c4e6fc  movk x1,#0xf, LSL #32
7101c4e700  mov x0,x19
7101c4e704  bl 0x71033112b0
7101c4e708  ldr x21,[x21, #0x8]
7101c4e70c  ldr w8,[x21, #0x64]
7101c4e710  cmp w8,#0x0
7101c4e714  b.le 0x7101c4e720
7101c4e718  add w8,w8,#0x1
7101c4e71c  b 0x7101c4e760
7101c4e720  mov v8.16B,v0.16B
7101c4e724  fmov s0,0x41200000
7101c4e728  mov x1,#0x3c2f
7101c4e72c  movk x1,#0xd389, LSL #16
7101c4e730  movk x1,#0xe, LSL #32
7101c4e734  mov x0,x19
7101c4e738  bl 0x71033112b0
7101c4e73c  str s0,[x21, #0x50]
7101c4e740  fmov s0,0x3f800000
7101c4e744  fmax s1,s8,s0
7101c4e748  fdiv s0,s0,s1
7101c4e74c  ldr w8,[x21, #0x58]
7101c4e750  str w8,[x21, #0x54]
7101c4e754  str wzr,[x21, #0x5c]
7101c4e758  str s0,[x21, #0x60]
7101c4e75c  mov w8,#0x1
7101c4e760  str w8,[x21, #0x64]
7101c4e764  add x0,x20,#0x88
7101c4e768  adrp x1,0x710433a000
7101c4e76c  add x1,x1,#0x236
7101c4e770  mov x8,sp
7101c4e774  mov x19,sp
7101c4e778  bl 0x71037780e0
7101c4e77c  mov w0,#0x10
7101c4e780  mov w1,#0x10
7101c4e784  bl 0x710392e290
7101c4e788  cbnz x0,0x7101c4e7d0
7101c4e78c  adrp x8,0x7105332000
7101c4e790  ldr x0,[x8, #0xf00]
7101c4e794  cbz x0,0x7101c4e7cc
7101c4e798  mov w8,#0x10
7101c4e79c  stur wzr,[x29, #-0x24]
7101c4e7a0  sub x1,x29,#0x24
7101c4e7a4  stur x8,[x29, #-0x30]
7101c4e7a8  ldr x8,[x0]
7101c4e7ac  ldr x8,[x8, #0x30]
7101c4e7b0  sub x2,x29,#0x30
7101c4e7b4  blr x8
7101c4e7b8  tbz w0,#0x0,0x7101c4e7cc
7101c4e7bc  mov w0,#0x10
7101c4e7c0  mov w1,#0x10
7101c4e7c4  bl 0x710392e290
7101c4e7c8  cbnz x0,0x7101c4e7d0
7101c4e7cc  mov x0,xzr
7101c4e7d0  adrp x21,0x710523d000
7101c4e7d4  add x21,x21,#0x9e8
7101c4e7d8  cmp x19,x0
7101c4e7dc  stp x21,xzr,[x0]
7101c4e7e0  b.eq 0x7101c4e7f0
7101c4e7e4  ldr x8,[sp, #0x8]
7101c4e7e8  str xzr,[sp, #0x8]
7101c4e7ec  str x8,[x0, #0x8]
7101c4e7f0  ldr x8,[x20, #0xa8]
7101c4e7f4  str x0,[x20, #0xa8]
7101c4e7f8  cbz x8,0x7101c4e80c
7101c4e7fc  ldr x9,[x8]
7101c4e800  ldr x9,[x9, #0x8]
7101c4e804  mov x0,x8
7101c4e808  blr x9
7101c4e80c  ldr x0,[sp, #0x8]
7101c4e810  stp x21,xzr,[sp]
7101c4e814  cbz x0,0x7101c4e81c
7101c4e818  bl 0x710392eb40
7101c4e81c  ldr x0,[x20, #0xa8]
7101c4e820  fmov s0,0x3f800000
7101c4e824  bl 0x710377aee0
7101c4e828  ldr d8,[sp, #0x60]
7101c4e82c  ldp x29,x30,[sp, #0x80]
7101c4e830  ldp x20,x19,[sp, #0x70]
7101c4e834  ldr x21,[sp, #0x68]
7101c4e838  add sp,sp,#0x90
7101c4e83c  ret
7101c4e840  bl 0x71039c2650
