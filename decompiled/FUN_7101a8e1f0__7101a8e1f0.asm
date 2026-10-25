// addr:      7101a8e1f0
// offset:    0x1a8e1f0
// name:      FUN_7101a8e1f0
// mangled:   
// size:      5848

7101a8e1f0  str d8,[sp, #-0x70]!
7101a8e1f4  stp x28,x27,[sp, #0x10]
7101a8e1f8  stp x26,x25,[sp, #0x20]
7101a8e1fc  stp x24,x23,[sp, #0x30]
7101a8e200  stp x22,x21,[sp, #0x40]
7101a8e204  stp x20,x19,[sp, #0x50]
7101a8e208  stp x29,x30,[sp, #0x60]
7101a8e20c  add x29,sp,#0x60
7101a8e210  sub sp,sp,#0x190
7101a8e214  ldr x8,[x0, #0x120]
7101a8e218  ldr x8,[x8]
7101a8e21c  mov x19,x0
7101a8e220  add x0,x8,#0x8
7101a8e224  adrp x1,0x7104291000
7101a8e228  add x1,x1,#0x691
7101a8e22c  sub x8,x29,#0xc8
7101a8e230  bl 0x7103776640
7101a8e234  ldr w8,[x19, #0x10c]
7101a8e238  cbz w8,0x7101a8e2b4
7101a8e23c  ldr w8,[x19, #0x3828]
7101a8e240  cmp w8,#0x1
7101a8e244  stur x19,[x29, #-0x58]
7101a8e248  b.eq 0x7101a8e5ec
7101a8e24c  cmp w8,#0x2
7101a8e250  b.eq 0x7101a8e5b8
7101a8e254  cmp w8,#0x3
7101a8e258  b.ne 0x7101a8e7b0
7101a8e25c  ldr x8,[x19, #0x120]
7101a8e260  ldr x8,[x8]
7101a8e264  ldr w3,[x19, #0x3830]
7101a8e268  ldr w2,[x19, #0x377c]
7101a8e26c  adrp x1,0x71043f0000
7101a8e270  add x1,x1,#0x46b
7101a8e274  add x0,x8,#0x8
7101a8e278  sub x8,x29,#0xa8
7101a8e27c  bl 0x7103776640
7101a8e280  adrp x1,0x71043ff000
7101a8e284  add x1,x1,#0xfcb
7101a8e288  sub x8,x29,#0xb8
7101a8e28c  sub x0,x29,#0xa8
7101a8e290  bl 0x71037780e0
7101a8e294  ldur x21,[x29, #-0xb0]
7101a8e298  ldr x0,[x21, #0x8]
7101a8e29c  cbz x0,0x7101a8e908
7101a8e2a0  ldr x8,[x0]
7101a8e2a4  ldr x8,[x8, #0x138]
7101a8e2a8  blr x8
7101a8e2ac  mov w20,w0
7101a8e2b0  b 0x7101a8e90c
7101a8e2b4  ldr x8,[x19, #0x120]
7101a8e2b8  ldr x8,[x8]
7101a8e2bc  ldr x0,[x8]
7101a8e2c0  mov w1,#0x1
7101a8e2c4  bl 0x71037760f0
7101a8e2c8  ldr w25,[x19, #0x377c]
7101a8e2cc  mov w8,#0xffffffff
7101a8e2d0  str w8,[x19, #0x3830]
7101a8e2d4  cmp w25,#0x7
7101a8e2d8  b.hi 0x7101a8e5a4
7101a8e2dc  fmov s8,0x3f800000
7101a8e2e0  mov x20,xzr
7101a8e2e4  adrp x23,0x7104307000
7101a8e2e8  add x23,x23,#0xfe5
7101a8e2ec  add x27,x19,#0x138
7101a8e2f0  adrp x28,0x710523d000
7101a8e2f4  add x28,x28,#0x988
7101a8e2f8  mov w22,#0x6c8
7101a8e2fc  adrp x24,0x7104412000
7101a8e300  add x24,x24,#0x3e5
7101a8e304  adrp x21,0x710523d000
7101a8e308  add x21,x21,#0x9a8
7101a8e30c  cmp x20,#0x1e
7101a8e310  b.cs 0x7101a8e5a8
7101a8e314  smull x8,w25,w22
7101a8e318  ldr w8,[x27, x8, LSL #0x0]
7101a8e31c  cmp w8,#0x2
7101a8e320  b.ne 0x7101a8e32c
7101a8e324  sxtw x8,w25
7101a8e328  b 0x7101a8e3f8
7101a8e32c  ldr x8,[x19, #0x120]
7101a8e330  ldr x8,[x8]
7101a8e334  add x0,x8,#0x8
7101a8e338  sub x8,x29,#0xa8
7101a8e33c  adrp x1,0x71043f0000
7101a8e340  add x1,x1,#0x46b
7101a8e344  mov w2,w25
7101a8e348  mov w3,w20
7101a8e34c  bl 0x7103776640
7101a8e350  ldr x8,[x19, #0x120]
7101a8e354  ldr x8,[x8]
7101a8e358  add x0,x8,#0x8
7101a8e35c  sub x8,x29,#0xb8
7101a8e360  mov x1,x23
7101a8e364  mov w2,w25
7101a8e368  mov w3,w20
7101a8e36c  bl 0x7103776640
7101a8e370  ldur x25,[x29, #-0xa0]
7101a8e374  mov v0.16B,v8.16B
7101a8e378  mov x1,x24
7101a8e37c  mov x0,x25
7101a8e380  bl 0x7103778300
7101a8e384  ldur x26,[x29, #-0xb0]
7101a8e388  mov v0.16B,v8.16B
7101a8e38c  mov x1,x24
7101a8e390  mov x0,x26
7101a8e394  bl 0x7103778300
7101a8e398  stp x28,xzr,[x29, #-0xb8]
7101a8e39c  cbz x26,0x7101a8e3b8
7101a8e3a0  ldr x0,[x26, #0x18]
7101a8e3a4  stp x21,xzr,[x26, #0x10]
7101a8e3a8  cbz x0,0x7101a8e3b0
7101a8e3ac  bl 0x710392eb40
7101a8e3b0  mov x0,x26
7101a8e3b4  bl 0x710392eb40
7101a8e3b8  stp x28,xzr,[x29, #-0xa8]
7101a8e3bc  cbz x25,0x7101a8e3d8
7101a8e3c0  ldr x0,[x25, #0x18]
7101a8e3c4  stp x21,xzr,[x25, #0x10]
7101a8e3c8  cbz x0,0x7101a8e3d0
7101a8e3cc  bl 0x710392eb40
7101a8e3d0  mov x0,x25
7101a8e3d4  bl 0x710392eb40
7101a8e3d8  ldr w25,[x19, #0x377c]
7101a8e3dc  cmp w25,#0x8
7101a8e3e0  b.cs 0x7101a8e5a4
7101a8e3e4  sxtw x8,w25
7101a8e3e8  mul x9,x8,x22
7101a8e3ec  ldr w9,[x27, x9, LSL #0x0]
7101a8e3f0  cmp w9,#0x2
7101a8e3f4  b.ne 0x7101a8e594
7101a8e3f8  madd x8,x8,x22,x27
7101a8e3fc  ldrb w8,[x8, #0x9]
7101a8e400  cbnz w8,0x7101a8e594
7101a8e404  ldr x8,[x19, #0x120]
7101a8e408  ldr x8,[x8]
7101a8e40c  add x0,x8,#0x8
7101a8e410  sub x8,x29,#0xa8
7101a8e414  adrp x1,0x71043f0000
7101a8e418  add x1,x1,#0x46b
7101a8e41c  mov w2,w25
7101a8e420  mov w3,w20
7101a8e424  mov x26,x19
7101a8e428  mov x22,x23
7101a8e42c  mov x23,x24
7101a8e430  bl 0x7103776640
7101a8e434  ldr x8,[x19, #0x120]
7101a8e438  ldr x8,[x8]
7101a8e43c  add x0,x8,#0x8
7101a8e440  sub x8,x29,#0xb8
7101a8e444  mov x1,x22
7101a8e448  mov w2,w25
7101a8e44c  mov w3,w20
7101a8e450  mov x24,x22
7101a8e454  bl 0x7103776640
7101a8e458  ldur x25,[x29, #-0xa0]
7101a8e45c  mov v0.16B,v8.16B
7101a8e460  adrp x22,0x71042a2000
7101a8e464  add x22,x22,#0x9fc
7101a8e468  mov x1,x22
7101a8e46c  mov x0,x25
7101a8e470  bl 0x7103778300
7101a8e474  ldur x26,[x29, #-0xb0]
7101a8e478  mov v0.16B,v8.16B
7101a8e47c  mov x1,x22
7101a8e480  mov x0,x26
7101a8e484  bl 0x7103778300
7101a8e488  mov x22,x28
7101a8e48c  stp x28,xzr,[x29, #-0xb8]
7101a8e490  cbz x26,0x7101a8e4ac
7101a8e494  ldr x0,[x26, #0x18]
7101a8e498  stp x21,xzr,[x26, #0x10]
7101a8e49c  cbz x0,0x7101a8e4a4
7101a8e4a0  bl 0x710392eb40
7101a8e4a4  mov x0,x26
7101a8e4a8  bl 0x710392eb40
7101a8e4ac  mov x26,x24
7101a8e4b0  mov x24,x23
7101a8e4b4  stp x22,xzr,[x29, #-0xa8]
7101a8e4b8  cbz x25,0x7101a8e4d4
7101a8e4bc  ldr x0,[x25, #0x18]
7101a8e4c0  stp x21,xzr,[x25, #0x10]
7101a8e4c4  cbz x0,0x7101a8e4cc
7101a8e4c8  bl 0x710392eb40
7101a8e4cc  mov x0,x25
7101a8e4d0  bl 0x710392eb40
7101a8e4d4  ldr x8,[x19, #0x120]
7101a8e4d8  ldr w25,[x19, #0x377c]
7101a8e4dc  adrp x1,0x71043f0000
7101a8e4e0  add x1,x1,#0x46b
7101a8e4e4  mov w2,w25
7101a8e4e8  ldr x8,[x8]
7101a8e4ec  add x0,x8,#0x8
7101a8e4f0  sub x8,x29,#0xa8
7101a8e4f4  mov w3,w20
7101a8e4f8  bl 0x7103776640
7101a8e4fc  ldr x8,[x19, #0x120]
7101a8e500  ldr x8,[x8]
7101a8e504  add x0,x8,#0x8
7101a8e508  sub x8,x29,#0xb8
7101a8e50c  mov x1,x26
7101a8e510  mov w2,w25
7101a8e514  mov w3,w20
7101a8e518  mov x23,x26
7101a8e51c  bl 0x7103776640
7101a8e520  ldur x25,[x29, #-0xa0]
7101a8e524  mov v0.16B,v8.16B
7101a8e528  mov x1,x24
7101a8e52c  mov x0,x25
7101a8e530  bl 0x7103778300
7101a8e534  ldur x26,[x29, #-0xb0]
7101a8e538  mov v0.16B,v8.16B
7101a8e53c  mov x1,x24
7101a8e540  mov x0,x26
7101a8e544  bl 0x7103778300
7101a8e548  mov x28,x22
7101a8e54c  stp x22,xzr,[x29, #-0xb8]
7101a8e550  mov w22,#0x6c8
7101a8e554  cbz x26,0x7101a8e570
7101a8e558  ldr x0,[x26, #0x18]
7101a8e55c  stp x21,xzr,[x26, #0x10]
7101a8e560  cbz x0,0x7101a8e568
7101a8e564  bl 0x710392eb40
7101a8e568  mov x0,x26
7101a8e56c  bl 0x710392eb40
7101a8e570  stp x28,xzr,[x29, #-0xa8]
7101a8e574  cbz x25,0x7101a8e590
7101a8e578  ldr x0,[x25, #0x18]
7101a8e57c  stp x21,xzr,[x25, #0x10]
7101a8e580  cbz x0,0x7101a8e588
7101a8e584  bl 0x710392eb40
7101a8e588  mov x0,x25
7101a8e58c  bl 0x710392eb40
7101a8e590  ldr w25,[x19, #0x377c]
7101a8e594  add x20,x20,#0x1
7101a8e598  add x27,x27,#0x38
7101a8e59c  cmp w25,#0x7
7101a8e5a0  b.ls 0x7101a8e30c
7101a8e5a4  bl 0x71039c2650
7101a8e5a8  mov x0,x19
7101a8e5ac  mov w1,wzr
7101a8e5b0  bl 0x7101a8fdf0
7101a8e5b4  b 0x7101a8f270
7101a8e5b8  adrp x1,0x71042f7000
7101a8e5bc  add x1,x1,#0xcc8
7101a8e5c0  sub x8,x29,#0xa8
7101a8e5c4  sub x0,x29,#0xc8
7101a8e5c8  bl 0x71037780e0
7101a8e5cc  ldur x20,[x29, #-0xa0]
7101a8e5d0  ldr x0,[x20, #0x8]
7101a8e5d4  cbz x0,0x7101a8e7fc
7101a8e5d8  ldr x8,[x0]
7101a8e5dc  ldr x8,[x8, #0x138]
7101a8e5e0  blr x8
7101a8e5e4  mov w21,w0
7101a8e5e8  b 0x7101a8e800
7101a8e5ec  ldr x8,[x19, #0x120]
7101a8e5f0  ldr x8,[x8]
7101a8e5f4  ldr x8,[x8]
7101a8e5f8  ldr x8,[x8, #0x600]
7101a8e5fc  ldrb w9,[x8, #0x4aa]
7101a8e600  cbz w9,0x7101a8e60c
7101a8e604  ldrb w9,[x8, #0x274]
7101a8e608  tbnz w9,#0x4,0x7101a8ec78
7101a8e60c  ldrsw x8,[x8, #0x48c]
7101a8e610  cmn w8,#0x1
7101a8e614  b.eq 0x7101a8e668
7101a8e618  cmp w8,#0xa
7101a8e61c  b.cs 0x7101a8e5a4
7101a8e620  adrp x9,0x7105339000
7101a8e624  ldr x9,[x9, #0x8d8]
7101a8e628  ldr x9,[x9, #0x8]
7101a8e62c  add x8,x9,x8, LSL #0x3
7101a8e630  ldr x8,[x8, #0x8]
7101a8e634  ldr w9,[x8, #0xa8]
7101a8e638  cmp w9,#0x1
7101a8e63c  b.eq 0x7101a8e648
7101a8e640  ldrb w9,[x8, #0xdd]
7101a8e644  cbz w9,0x7101a8e668
7101a8e648  mov w9,#0x100
7101a8e64c  sturh w9,[x8, #0xdd]
7101a8e650  ldrsw x9,[x8, #0xa4]
7101a8e654  cmp w9,#0x13
7101a8e658  b.cs 0x7101a8e5a4
7101a8e65c  add x8,x8,x9, LSL #0x2
7101a8e660  mov w9,#0x2
7101a8e664  str w9,[x8, #0x58]
7101a8e668  ldr x0,[x19, #0x130]
7101a8e66c  ldr x8,[x0]
7101a8e670  ldr x8,[x8, #0x60]
7101a8e674  mov w1,#0x1
7101a8e678  blr x8
7101a8e67c  ldrsw x8,[x19, #0x377c]
7101a8e680  cmp w8,#0x8
7101a8e684  b.cs 0x7101a8e5a4
7101a8e688  add x8,x19,x8, LSL #0x3
7101a8e68c  ldr x0,[x8, #0x3780]
7101a8e690  ldr x8,[x0]
7101a8e694  ldr x8,[x8, #0x60]
7101a8e698  mov w1,#0x1
7101a8e69c  blr x8
7101a8e6a0  adrp x1,0x7104349000
7101a8e6a4  add x1,x1,#0xde4
7101a8e6a8  sub x8,x29,#0xa8
7101a8e6ac  sub x0,x29,#0xc8
7101a8e6b0  bl 0x71037780e0
7101a8e6b4  ldur x20,[x29, #-0xa0]
7101a8e6b8  ldr x21,[x20, #0x8]
7101a8e6bc  cbz x21,0x7101a8ee60
7101a8e6c0  ldrb w8,[x20, #0x10]
7101a8e6c4  cbz w8,0x7101a8e78c
7101a8e6c8  ldr x8,[x20]
7101a8e6cc  ldr x22,[x8, #0x80]
7101a8e6d0  add x19,x8,#0x88
7101a8e6d4  cmp x22,x19
7101a8e6d8  b.eq 0x7101a8e78c
7101a8e6dc  ldr x0,[x22, #0x68]
7101a8e6e0  ldr x8,[x0]
7101a8e6e4  ldr x8,[x8, #0x148]
7101a8e6e8  blr x8
7101a8e6ec  tbz w0,#0x0,0x7101a8e72c
7101a8e6f0  ldr x8,[x21]
7101a8e6f4  ldr x1,[x22, #0x68]
7101a8e6f8  mov x0,x21
7101a8e6fc  ldr x8,[x8, #0x120]
7101a8e700  blr x8
7101a8e704  tbz w0,#0x0,0x7101a8e72c
7101a8e708  ldr x0,[x22, #0x68]
7101a8e70c  ldr x8,[x0]
7101a8e710  ldr x8,[x8, #0x178]
7101a8e714  blr x8
7101a8e718  ldr x0,[x22, #0x68]
7101a8e71c  ldr x8,[x0]
7101a8e720  ldr x8,[x8, #0x140]
7101a8e724  mov w1,wzr
7101a8e728  blr x8
7101a8e72c  ldr x8,[x22, #0x8]
7101a8e730  cbz x8,0x7101a8e744
7101a8e734  mov x22,x8
7101a8e738  ldr x8,[x8]
7101a8e73c  cbnz x8,0x7101a8e734
7101a8e740  b 0x7101a8e770
7101a8e744  mov x8,x22
7101a8e748  ldr x9,[x8, #0x10]!
7101a8e74c  ldr x10,[x9]
7101a8e750  cmp x10,x22
7101a8e754  b.eq 0x7101a8e77c
7101a8e758  ldr x9,[x8]
7101a8e75c  mov x8,x9
7101a8e760  ldr x22,[x8, #0x10]!
7101a8e764  ldr x10,[x22]
7101a8e768  cmp x10,x9
7101a8e76c  b.ne 0x7101a8e758
7101a8e770  cmp x22,x19
7101a8e774  b.ne 0x7101a8e6dc
7101a8e778  b 0x7101a8e788
7101a8e77c  mov x22,x9
7101a8e780  cmp x22,x19
7101a8e784  b.ne 0x7101a8e6dc
7101a8e788  ldr x21,[x20, #0x8]
7101a8e78c  ldr x8,[x21]
7101a8e790  ldr x8,[x8, #0x168]
7101a8e794  fmov s0,0xbf800000
7101a8e798  mov x0,x21
7101a8e79c  blr x8
7101a8e7a0  adrp x8,0x710523d000
7101a8e7a4  add x8,x8,#0x9e8
7101a8e7a8  stp x8,xzr,[x29, #-0xa8]
7101a8e7ac  b 0x7101a8ee70
7101a8e7b0  ldr x8,[x19, #0x120]
7101a8e7b4  ldr x8,[x8]
7101a8e7b8  mov w9,#0x3779
7101a8e7bc  add x21,x19,x9
7101a8e7c0  ldrb w9,[x21]
7101a8e7c4  ldr x22,[x8]
7101a8e7c8  mov w8,#0x3910
7101a8e7cc  ldrb w8,[x19, x8, LSL ]
7101a8e7d0  cbz w9,0x7101a8e9c8
7101a8e7d4  ldr x0,[x19, #0x130]
7101a8e7d8  ldr x9,[x0, #0x38]
7101a8e7dc  cbz x9,0x7101a8e9ec
7101a8e7e0  ldrb w10,[x9, #0x58]
7101a8e7e4  and w10,w10,#0xfe
7101a8e7e8  orr w10,w8,w10
7101a8e7ec  eor w10,w10,#0x1
7101a8e7f0  strb w10,[x9, #0x58]
7101a8e7f4  ldr x0,[x19, #0x130]
7101a8e7f8  b 0x7101a8e9ec
7101a8e7fc  mov w21,#0x1
7101a8e800  adrp x8,0x710523d000
7101a8e804  add x8,x8,#0x9e8
7101a8e808  stp x8,xzr,[x29, #-0xa8]
7101a8e80c  cbz x20,0x7101a8e818
7101a8e810  mov x0,x20
7101a8e814  bl 0x710392eb40
7101a8e818  tbz w21,#0x0,0x7101a8f270
7101a8e81c  ldur x0,[x29, #-0xc0]
7101a8e820  fmov s0,0x3f800000
7101a8e824  adrp x1,0x71042b3000
7101a8e828  add x1,x1,#0xdeb
7101a8e82c  bl 0x7103778300
7101a8e830  ldr x8,[x19, #0x120]
7101a8e834  ldr x8,[x8]
7101a8e838  ldr w2,[x19, #0x377c]
7101a8e83c  ldr w3,[x19, #0x3830]
7101a8e840  add x0,x8,#0x8
7101a8e844  adrp x1,0x71043f0000
7101a8e848  add x1,x1,#0x46b
7101a8e84c  sub x8,x29,#0xb8
7101a8e850  bl 0x7103776640
7101a8e854  adrp x1,0x71042e6000
7101a8e858  add x1,x1,#0xbc6
7101a8e85c  sub x8,x29,#0xa8
7101a8e860  sub x0,x29,#0xb8
7101a8e864  bl 0x7103776910
7101a8e868  ldur x0,[x29, #-0xa0]
7101a8e86c  ldr x8,[x0]
7101a8e870  cbz x8,0x7101a8e880
7101a8e874  ldrb w9,[x8, #0x58]
7101a8e878  orr w9,w9,#0x1
7101a8e87c  strb w9,[x8, #0x58]
7101a8e880  adrp x24,0x710523d000
7101a8e884  add x24,x24,#0x9a8
7101a8e888  stp x24,xzr,[x29, #-0xa8]
7101a8e88c  cbz x0,0x7101a8e894
7101a8e890  bl 0x710392eb40
7101a8e894  adrp x1,0x71042e6000
7101a8e898  add x1,x1,#0xbc6
7101a8e89c  sub x8,x29,#0xa8
7101a8e8a0  sub x0,x29,#0xb8
7101a8e8a4  bl 0x7103776910
7101a8e8a8  ldur x20,[x29, #-0xa0]
7101a8e8ac  ldr x0,[x20]
7101a8e8b0  bl 0x710377aae0
7101a8e8b4  cbz x0,0x7101a8e8c0
7101a8e8b8  mov w8,#0x1
7101a8e8bc  strb w8,[x0, #0x13a]
7101a8e8c0  stp x24,xzr,[x29, #-0xa8]
7101a8e8c4  cbz x20,0x7101a8e8d0
7101a8e8c8  mov x0,x20
7101a8e8cc  bl 0x710392eb40
7101a8e8d0  mov x11,x19
7101a8e8d4  ldr w19,[x19, #0x377c]
7101a8e8d8  ldr x9,[x11, #0x3850]
7101a8e8dc  ldr x8,[x11, #0x3858]
7101a8e8e0  cmp x9,x8
7101a8e8e4  ldr w25,[x11, #0x3830]
7101a8e8e8  b.cs 0x7101a8eeb8
7101a8e8ec  bfm x19,x25,#0x20,#0x1f
7101a8e8f0  str x19,[x9]
7101a8e8f4  ldr x8,[x11, #0x3850]
7101a8e8f8  add x8,x8,#0x8
7101a8e8fc  str x8,[x11, #0x3850]
7101a8e900  mov x19,x11
7101a8e904  b 0x7101a8efc4
7101a8e908  mov w20,#0x1
7101a8e90c  adrp x8,0x710523d000
7101a8e910  add x8,x8,#0x9e8
7101a8e914  stp x8,xzr,[x29, #-0xb8]
7101a8e918  cbz x21,0x7101a8e924
7101a8e91c  mov x0,x21
7101a8e920  bl 0x710392eb40
7101a8e924  ldur x21,[x29, #-0xa0]
7101a8e928  adrp x8,0x710523d000
7101a8e92c  add x8,x8,#0x988
7101a8e930  stp x8,xzr,[x29, #-0xa8]
7101a8e934  cbz x21,0x7101a8e958
7101a8e938  ldr x0,[x21, #0x18]
7101a8e93c  adrp x8,0x710523d000
7101a8e940  add x8,x8,#0x9a8
7101a8e944  stp x8,xzr,[x21, #0x10]
7101a8e948  cbz x0,0x7101a8e950
7101a8e94c  bl 0x710392eb40
7101a8e950  mov x0,x21
7101a8e954  bl 0x710392eb40
7101a8e958  tbz w20,#0x0,0x7101a8f270
7101a8e95c  mov x0,x19
7101a8e960  bl 0x7101a90280
7101a8e964  ldr x0,[x19, #0x130]
7101a8e968  ldr x8,[x0]
7101a8e96c  ldr x8,[x8, #0x60]
7101a8e970  mov w1,#0x1
7101a8e974  blr x8
7101a8e978  ldrsw x8,[x19, #0x377c]
7101a8e97c  cmp w8,#0x8
7101a8e980  b.cs 0x7101a8e5a4
7101a8e984  add x8,x19,x8, LSL #0x3
7101a8e988  ldr x0,[x8, #0x3780]
7101a8e98c  ldr x8,[x0]
7101a8e990  ldr x8,[x8, #0x60]
7101a8e994  mov w1,#0x1
7101a8e998  blr x8
7101a8e99c  ldrsw x8,[x19, #0x377c]
7101a8e9a0  cmp w8,#0x8
7101a8e9a4  b.cs 0x7101a8e5a4
7101a8e9a8  ldr w1,[x19, #0x3830]
7101a8e9ac  add x8,x19,x8, LSL #0x3
7101a8e9b0  mov w9,#0x3780
7101a8e9b4  add x0,x8,x9
7101a8e9b8  mov w2,wzr
7101a8e9bc  bl 0x7103771a80
7101a8e9c0  str wzr,[x19, #0x3828]
7101a8e9c4  b 0x7101a8f270
7101a8e9c8  ldr x0,[x19, #0x128]
7101a8e9cc  ldr x9,[x0, #0x38]
7101a8e9d0  cbz x9,0x7101a8e9ec
7101a8e9d4  ldrb w10,[x9, #0x58]
7101a8e9d8  and w10,w10,#0xfe
7101a8e9dc  orr w10,w8,w10
7101a8e9e0  eor w10,w10,#0x1
7101a8e9e4  strb w10,[x9, #0x58]
7101a8e9e8  ldr x0,[x19, #0x128]
7101a8e9ec  cmp w8,#0x0
7101a8e9f0  ldr x8,[x0]
7101a8e9f4  cset w1,eq
7101a8e9f8  ldr x8,[x8, #0x60]
7101a8e9fc  blr x8
7101a8ea00  ldrsw x9,[x19, #0x377c]
7101a8ea04  cmp w9,#0x8
7101a8ea08  b.cs 0x7101a8e5a4
7101a8ea0c  add x8,x19,x9, LSL #0x3
7101a8ea10  ldr x10,[x8, #0x3780]
7101a8ea14  ldr w8,[x10, #0x25c]
7101a8ea18  cmn w8,#0x1
7101a8ea1c  b.eq 0x7101a8ec38
7101a8ea20  ldrsw x10,[x10, #0x254]
7101a8ea24  cmp w10,#0x1e
7101a8ea28  b.cs 0x7101a8e5a4
7101a8ea2c  mov w12,#0x6c8
7101a8ea30  madd x12,x9,x12,x19
7101a8ea34  orr w11,wzr,#0x38
7101a8ea38  madd x11,x10,x11,x12
7101a8ea3c  ldr w11,[x11, #0x138]
7101a8ea40  cmp w11,#0x2
7101a8ea44  b.ne 0x7101a8eb70
7101a8ea48  mov w12,#0x6c8
7101a8ea4c  madd x9,x9,x12,x19
7101a8ea50  orr w11,wzr,#0x38
7101a8ea54  madd x9,x10,x11,x9
7101a8ea58  ldrb w9,[x9, #0x141]
7101a8ea5c  cbz w9,0x7101a8eb70
7101a8ea60  ldr w9,[x19, #0x3834]
7101a8ea64  cmp w9,#0x1
7101a8ea68  b.lt 0x7101a8eb70
7101a8ea6c  str w8,[x19, #0x3830]
7101a8ea70  fmov s8,0x3f800000
7101a8ea74  mov v0.16B,v8.16B
7101a8ea78  ldur x20,[x29, #-0xc0]
7101a8ea7c  adrp x1,0x7104349000
7101a8ea80  add x1,x1,#0xde4
7101a8ea84  mov x0,x20
7101a8ea88  bl 0x7103778300
7101a8ea8c  mov v0.16B,v8.16B
7101a8ea90  adrp x1,0x7104291000
7101a8ea94  add x1,x1,#0x6b7
7101a8ea98  mov x0,x20
7101a8ea9c  bl 0x7103778300
7101a8eaa0  mov w8,#0x3911
7101a8eaa4  strb wzr,[x19, x8, LSL ]
7101a8eaa8  ldr x0,[x19, #0x130]
7101a8eaac  ldr x8,[x0]
7101a8eab0  ldr x8,[x8, #0x60]
7101a8eab4  mov w1,wzr
7101a8eab8  blr x8
7101a8eabc  ldrsw x8,[x19, #0x377c]
7101a8eac0  cmp w8,#0x8
7101a8eac4  b.cs 0x7101a8e5a4
7101a8eac8  add x8,x19,x8, LSL #0x3
7101a8eacc  ldr x0,[x8, #0x3780]
7101a8ead0  ldr x8,[x0]
7101a8ead4  ldr x8,[x8, #0x60]
7101a8ead8  mov w1,wzr
7101a8eadc  blr x8
7101a8eae0  adrp x8,0x710532f000
7101a8eae4  ldr x8,[x8, #0x8d0]
7101a8eae8  ldr x0,[x8, #0x8]
7101a8eaec  ldrb w8,[x0, #0x191]
7101a8eaf0  cbnz w8,0x7101a8f180
7101a8eaf4  mov x20,#0x1bb1
7101a8eaf8  movk x20,#0xe784, LSL #16
7101a8eafc  movk x20,#0x1a, LSL #32
7101a8eb00  mov w2,#0x4
7101a8eb04  mov x1,x20
7101a8eb08  bl 0x7103313f20
7101a8eb0c  tbz w0,#0x0,0x7101a8f180
7101a8eb10  add x0,sp,#0xc8
7101a8eb14  mov x1,x20
7101a8eb18  bl 0x71024076d0
7101a8eb1c  ldr x8,[sp, #0xd8]
7101a8eb20  adrp x9,0x7104f73000
7101a8eb24  add x9,x9,#0xd50
7101a8eb28  str x9,[sp, #0xd0]
7101a8eb2c  cbz x8,0x7101a8f1ac
7101a8eb30  adrp x8,0x7106dd5000
7101a8eb34  ldrb w8,[x8, #0x3a8]
7101a8eb38  cmp w8,#0x1
7101a8eb3c  b.ne 0x7101a8f1ac
7101a8eb40  adrp x9,0x7106dd5000
7101a8eb44  ldr w8,[sp, #0xe0]
7101a8eb48  ldr w9,[x9, #0x3ac]
7101a8eb4c  cmp w8,w9
7101a8eb50  b.ne 0x7101a8f1ac
7101a8eb54  ldr x8,[sp, #0xd8]
7101a8eb58  ldr wzr,[x8, #0x38]!
7101a8eb5c  ldaxr w9,[x8]
7101a8eb60  sub w9,w9,#0x1
7101a8eb64  stlxr w10,w9,[x8]
7101a8eb68  cbnz w10,0x7101a8eb5c
7101a8eb6c  b 0x7101a8f1ac
7101a8eb70  adrp x8,0x710532f000
7101a8eb74  ldr x8,[x8, #0x8d0]
7101a8eb78  ldr x0,[x8, #0x8]
7101a8eb7c  ldrb w8,[x0, #0x191]
7101a8eb80  cbnz w8,0x7101a8ec00
7101a8eb84  mov x20,#0x46f2
7101a8eb88  movk x20,#0xd635, LSL #16
7101a8eb8c  movk x20,#0xe, LSL #32
7101a8eb90  mov w2,#0x4
7101a8eb94  mov x1,x20
7101a8eb98  bl 0x7103313f20
7101a8eb9c  tbz w0,#0x0,0x7101a8ec00
7101a8eba0  add x0,sp,#0x88
7101a8eba4  mov x1,x20
7101a8eba8  bl 0x71024076d0
7101a8ebac  ldr x8,[sp, #0x98]
7101a8ebb0  adrp x9,0x7104f73000
7101a8ebb4  add x9,x9,#0xd50
7101a8ebb8  str x9,[sp, #0x90]
7101a8ebbc  cbz x8,0x7101a8ec2c
7101a8ebc0  adrp x8,0x7106dd5000
7101a8ebc4  ldrb w8,[x8, #0x3a8]
7101a8ebc8  cmp w8,#0x1
7101a8ebcc  b.ne 0x7101a8ec2c
7101a8ebd0  adrp x9,0x7106dd5000
7101a8ebd4  ldr w8,[sp, #0xa0]
7101a8ebd8  ldr w9,[x9, #0x3ac]
7101a8ebdc  cmp w8,w9
7101a8ebe0  b.ne 0x7101a8ec2c
7101a8ebe4  ldr x8,[sp, #0x98]
7101a8ebe8  ldr wzr,[x8, #0x38]!
7101a8ebec  ldaxr w9,[x8]
7101a8ebf0  sub w9,w9,#0x1
7101a8ebf4  stlxr w10,w9,[x8]
7101a8ebf8  cbnz w10,0x7101a8ebec
7101a8ebfc  b 0x7101a8ec2c
7101a8ec00  mov x8,#0x650000000000
7101a8ec04  movk x8,#0x87, LSL #48
7101a8ec08  strb wzr,[sp, #0xa8]
7101a8ec0c  stp xzr,x8,[sp, #0x98]
7101a8ec10  mov x8,#-0x1
7101a8ec14  stp x8,xzr,[sp, #0xb0]
7101a8ec18  adrp x8,0x7104f73000
7101a8ec1c  add x8,x8,#0xd50
7101a8ec20  str wzr,[sp, #0x88]
7101a8ec24  str xzr,[sp, #0xc0]
7101a8ec28  str x8,[sp, #0x90]
7101a8ec2c  str xzr,[sp, #0x98]
7101a8ec30  strb wzr,[sp, #0xa8]
7101a8ec34  b 0x7101a8f268
7101a8ec38  ldr x8,[x22, #0x600]
7101a8ec3c  ldrb w9,[x8, #0x4aa]
7101a8ec40  cbz w9,0x7101a8ec4c
7101a8ec44  ldrb w10,[x8, #0x1b4]
7101a8ec48  tbnz w10,#0x1,0x7101a8ef08
7101a8ec4c  ldr x10,[x19, #0x3808]
7101a8ec50  ldr w10,[x10, #0x25c]
7101a8ec54  cbz w10,0x7101a8ef08
7101a8ec58  cbz w9,0x7101a8f23c
7101a8ec5c  ldr w11,[x8, #0x1b0]
7101a8ec60  tbnz w11,#0x1,0x7101a8f244
7101a8ec64  cmp w10,#0x1
7101a8ec68  b.eq 0x7101a8f244
7101a8ec6c  ldrb w10,[x8, #0x1ac]
7101a8ec70  tbz w10,#0x1,0x7101a8f2e4
7101a8ec74  b 0x7101a8f300
7101a8ec78  adrp x1,0x7104280000
7101a8ec7c  add x1,x1,#0x4d8
7101a8ec80  sub x8,x29,#0xa8
7101a8ec84  sub x0,x29,#0xc8
7101a8ec88  bl 0x71037780e0
7101a8ec8c  ldur x20,[x29, #-0xa0]
7101a8ec90  ldr x0,[x20, #0x8]
7101a8ec94  cbz x0,0x7101a8eca8
7101a8ec98  ldr x8,[x0]
7101a8ec9c  ldr x8,[x8, #0x138]
7101a8eca0  blr x8
7101a8eca4  tbz w0,#0x0,0x7101a8f1c0
7101a8eca8  mov w8,#0x3911
7101a8ecac  ldrb w19,[x19, x8, LSL ]
7101a8ecb0  adrp x8,0x710523d000
7101a8ecb4  add x8,x8,#0x9e8
7101a8ecb8  stp x8,xzr,[x29, #-0xa8]
7101a8ecbc  cbz x20,0x7101a8ecc8
7101a8ecc0  mov x0,x20
7101a8ecc4  bl 0x710392eb40
7101a8ecc8  cbz w19,0x7101a8f1d8
7101a8eccc  ldur x19,[x29, #-0x58]
7101a8ecd0  ldr x8,[x19, #0x120]
7101a8ecd4  ldr x8,[x8]
7101a8ecd8  ldr x8,[x8]
7101a8ecdc  ldr x8,[x8, #0x600]
7101a8ece0  ldrsw x8,[x8, #0x48c]
7101a8ece4  cmn w8,#0x1
7101a8ece8  b.eq 0x7101a8ed3c
7101a8ecec  cmp w8,#0xa
7101a8ecf0  b.cs 0x7101a8e5a4
7101a8ecf4  adrp x9,0x7105339000
7101a8ecf8  ldr x9,[x9, #0x8d8]
7101a8ecfc  ldr x9,[x9, #0x8]
7101a8ed00  add x8,x9,x8, LSL #0x3
7101a8ed04  ldr x8,[x8, #0x8]
7101a8ed08  ldr w9,[x8, #0xa8]
7101a8ed0c  cmp w9,#0x1
7101a8ed10  b.eq 0x7101a8ed1c
7101a8ed14  ldrb w9,[x8, #0xdd]
7101a8ed18  cbz w9,0x7101a8ed3c
7101a8ed1c  mov w9,#0x100
7101a8ed20  sturh w9,[x8, #0xdd]
7101a8ed24  ldrsw x9,[x8, #0xa4]
7101a8ed28  cmp w9,#0x13
7101a8ed2c  b.cs 0x7101a8e5a4
7101a8ed30  add x8,x8,x9, LSL #0x2
7101a8ed34  mov w9,#0x2
7101a8ed38  str w9,[x8, #0x58]
7101a8ed3c  ldur x0,[x29, #-0xc0]
7101a8ed40  fmov s0,0x3f800000
7101a8ed44  adrp x1,0x71042f7000
7101a8ed48  add x1,x1,#0xcc8
7101a8ed4c  bl 0x7103778300
7101a8ed50  ldrsw x8,[x19, #0x377c]
7101a8ed54  cmp w8,#0x8
7101a8ed58  b.cs 0x7101a8e5a4
7101a8ed5c  add x8,x19,x8, LSL #0x3
7101a8ed60  ldr x9,[x8, #0x3780]
7101a8ed64  ldr x10,[x9, #0x1b8]
7101a8ed68  cbz x10,0x7101a8ee48
7101a8ed6c  ldr w8,[x19, #0x3830]
7101a8ed70  add x11,x9,#0x1b8
7101a8ed74  mov x9,x11
7101a8ed78  ldr w12,[x10, #0x20]
7101a8ed7c  cmp w12,w8
7101a8ed80  cset w12,lt
7101a8ed84  csel x9,x9,x10,lt
7101a8ed88  ldr x10,[x10, w12, UXTW #0x3]
7101a8ed8c  cbnz x10,0x7101a8ed78
7101a8ed90  cmp x9,x11
7101a8ed94  b.eq 0x7101a8ee48
7101a8ed98  ldr w10,[x9, #0x20]
7101a8ed9c  cmp w10,w8
7101a8eda0  b.gt 0x7101a8ee48
7101a8eda4  ldr x20,[x9, #0x28]
7101a8eda8  cbz x20,0x7101a8ee48
7101a8edac  ldr x8,[x20]
7101a8edb0  ldr x8,[x8, #0x218]
7101a8edb4  mov x0,x20
7101a8edb8  mov w1,wzr
7101a8edbc  blr x8
7101a8edc0  ldr x8,[x20]
7101a8edc4  ldr x8,[x8, #0x410]
7101a8edc8  mov x0,x20
7101a8edcc  blr x8
7101a8edd0  ldr x8,[x20]
7101a8edd4  ldr x8,[x8, #0x3f0]
7101a8edd8  mov x0,x20
7101a8eddc  mov w1,wzr
7101a8ede0  blr x8
7101a8ede4  ldr x8,[x20]
7101a8ede8  ldr x8,[x8, #0x140]
7101a8edec  mov x0,x20
7101a8edf0  blr x8
7101a8edf4  cmp w0,#0x6
7101a8edf8  b.eq 0x7101a8ee24
7101a8edfc  ldr x8,[x20]
7101a8ee00  ldr x8,[x8, #0x140]
7101a8ee04  mov x0,x20
7101a8ee08  blr x8
7101a8ee0c  cmp w0,#0x1
7101a8ee10  b.eq 0x7101a8ee24
7101a8ee14  ldr x8,[x20]
7101a8ee18  ldr x8,[x8, #0x400]
7101a8ee1c  mov x0,x20
7101a8ee20  blr x8
7101a8ee24  ldr x8,[x20]
7101a8ee28  ldr x8,[x8, #0x158]
7101a8ee2c  mov x0,x20
7101a8ee30  blr x8
7101a8ee34  tbnz w0,#0x0,0x7101a8ee48
7101a8ee38  ldr x8,[x20]
7101a8ee3c  ldr x8,[x8, #0x370]
7101a8ee40  mov x0,x20
7101a8ee44  blr x8
7101a8ee48  mov w8,#0x3890
7101a8ee4c  mov w9,#0x1
7101a8ee50  strb w9,[x19, x8, LSL ]
7101a8ee54  mov w8,#0x2
7101a8ee58  str w8,[x19, #0x3828]
7101a8ee5c  b 0x7101a8f270
7101a8ee60  adrp x8,0x710523d000
7101a8ee64  add x8,x8,#0x9e8
7101a8ee68  stp x8,xzr,[x29, #-0xa8]
7101a8ee6c  cbz x20,0x7101a8ee78
7101a8ee70  mov x0,x20
7101a8ee74  bl 0x710392eb40
7101a8ee78  ldur x0,[x29, #-0xc0]
7101a8ee7c  fmov s0,0x3f800000
7101a8ee80  adrp x1,0x71042b3000
7101a8ee84  add x1,x1,#0xdeb
7101a8ee88  bl 0x7103778300
7101a8ee8c  adrp x8,0x710532f000
7101a8ee90  ldr x19,[x8, #0x8d0]
7101a8ee94  bl 0x710240a7a0
7101a8ee98  ldr x19,[x19, #0x8]
7101a8ee9c  ldr x0,[x19, #0x78]!
7101a8eea0  bl 0x7101316520
7101a8eea4  stp xzr,xzr,[x19]
7101a8eea8  ldur x8,[x29, #-0x58]
7101a8eeac  stur x19,[x19, #-0x8]
7101a8eeb0  str wzr,[x8, #0x3828]
7101a8eeb4  b 0x7101a8f270
7101a8eeb8  mov w10,#0x3848
7101a8eebc  add x0,x11,x10
7101a8eec0  ldr x20,[x0]
7101a8eec4  sub x21,x9,x20
7101a8eec8  asr x26,x21,#0x3
7101a8eecc  add x9,x26,#0x1
7101a8eed0  lsr x10,x9,#0x3d
7101a8eed4  cbnz x10,0x7101a8f8c4
7101a8eed8  sub x8,x8,x20
7101a8eedc  asr x10,x8,#0x3
7101a8eee0  orr x11,xzr,#0xffffffffffffffe
7101a8eee4  cmp x10,x11
7101a8eee8  b.hi 0x7101a8ef14
7101a8eeec  asr x8,x8,#0x2
7101a8eef0  cmp x8,x9
7101a8eef4  csel x27,x9,x8,cc
7101a8eef8  cbz x27,0x7101a8ef78
7101a8eefc  lsr x8,x27,#0x3d
7101a8ef00  cbz x8,0x7101a8ef18
7101a8ef04  b 0x7101a8e5a4
7101a8ef08  mov x0,x19
7101a8ef0c  mov w1,wzr
7101a8ef10  b 0x7101a8f24c
7101a8ef14  orr x27,xzr,#0x1fffffffffffffff
7101a8ef18  lsl x8,x27,#0x3
7101a8ef1c  cmp x8,#0x0
7101a8ef20  csinc x23,x8,xzr,ne
7101a8ef24  mov w0,#0x10
7101a8ef28  mov x1,x23
7101a8ef2c  bl 0x710392e290
7101a8ef30  mov x22,x0
7101a8ef34  cbnz x0,0x7101a8ef7c
7101a8ef38  adrp x8,0x7105332000
7101a8ef3c  ldr x0,[x8, #0xf00]
7101a8ef40  cbz x0,0x7101a8ef78
7101a8ef44  stur wzr,[x29, #-0xd8]
7101a8ef48  stur x23,[x29, #-0xa8]
7101a8ef4c  ldr x8,[x0]
7101a8ef50  ldr x8,[x8, #0x30]
7101a8ef54  sub x1,x29,#0xd8
7101a8ef58  sub x2,x29,#0xa8
7101a8ef5c  blr x8
7101a8ef60  tbz w0,#0x0,0x7101a8ef78
7101a8ef64  mov w0,#0x10
7101a8ef68  mov x1,x23
7101a8ef6c  bl 0x710392e290
7101a8ef70  mov x22,x0
7101a8ef74  cbnz x0,0x7101a8ef7c
7101a8ef78  mov x22,xzr
7101a8ef7c  add x23,x22,x26, LSL #0x3
7101a8ef80  bfm x19,x25,#0x20,#0x1f
7101a8ef84  cmp x21,#0x1
7101a8ef88  str x19,[x23], #0x8
7101a8ef8c  add x19,x22,x27, LSL #0x3
7101a8ef90  b.lt 0x7101a8efa4
7101a8ef94  mov x0,x22
7101a8ef98  mov x1,x20
7101a8ef9c  mov x2,x21
7101a8efa0  bl 0x71039c00e0
7101a8efa4  ldur x8,[x29, #-0x58]
7101a8efa8  str x19,[x8, #0x3858]
7101a8efac  mov x19,x8
7101a8efb0  str x22,[x8, #0x3848]
7101a8efb4  str x23,[x8, #0x3850]
7101a8efb8  cbz x20,0x7101a8efc4
7101a8efbc  mov x0,x20
7101a8efc0  bl 0x710392eb40
7101a8efc4  ldrsw x8,[x19, #0x104]
7101a8efc8  cmp w8,#0x13
7101a8efcc  b.cs 0x7101a8e5a4
7101a8efd0  add x8,x19,x8, LSL #0x2
7101a8efd4  orr w9,wzr,#0x3
7101a8efd8  str w9,[x8, #0xb8]
7101a8efdc  ldr w8,[x19, #0x3834]
7101a8efe0  sub w8,w8,#0x1
7101a8efe4  str w8,[x19, #0x3834]
7101a8efe8  adrp x9,0x7105314000
7101a8efec  ldr x9,[x9, #0x510]
7101a8eff0  ldr x9,[x9]
7101a8eff4  mov x10,x19
7101a8eff8  ldr x19,[x9, #0x248]
7101a8effc  ldr x9,[x19]
7101a8f000  ldr x9,[x9]
7101a8f004  strb w8,[x9, #0x2a4]
7101a8f008  adrp x8,0x710532f000
7101a8f00c  ldr x8,[x8, #0x730]
7101a8f010  ldr x8,[x8, #0x8]
7101a8f014  ldr w1,[x10, #0x377c]
7101a8f018  ldr w2,[x10, #0x3830]
7101a8f01c  ldr x0,[x8, #0x348]
7101a8f020  bl 0x7103267660
7101a8f024  bl 0x7103268810
7101a8f028  add w8,w0,w0, LSL #0x1
7101a8f02c  add w8,w8,#0x2
7101a8f030  cmp w8,#0x1df
7101a8f034  b.hi 0x7101a8f05c
7101a8f038  ldr x9,[x19]
7101a8f03c  ldr x9,[x9]
7101a8f040  lsr w10,w8,#0x5
7101a8f044  mov w11,#0x1
7101a8f048  lsl x10,x10,#0x2
7101a8f04c  lsl w8,w11,w8
7101a8f050  ldr w11,[x9, x10, LSL #0x0]
7101a8f054  orr w8,w11,w8
7101a8f058  str w8,[x9, x10, LSL #0x0]
7101a8f05c  ldur x19,[x29, #-0x58]
7101a8f060  ldrsw x8,[x19, #0x377c]
7101a8f064  cmp w8,#0x8
7101a8f068  b.cs 0x7101a8e5a4
7101a8f06c  ldrsw x9,[x19, #0x3830]
7101a8f070  cmp w9,#0x1e
7101a8f074  b.cs 0x7101a8e5a4
7101a8f078  mov w11,#0x6c8
7101a8f07c  madd x8,x8,x11,x19
7101a8f080  orr w10,wzr,#0x38
7101a8f084  madd x8,x9,x10,x8
7101a8f088  mov w9,#0x1
7101a8f08c  strb w9,[x8, #0x168]
7101a8f090  ldr x8,[x19, #0x120]
7101a8f094  ldr x8,[x8]
7101a8f098  add x0,x8,#0x8
7101a8f09c  adrp x1,0x71043ad000
7101a8f0a0  add x1,x1,#0x21c
7101a8f0a4  sub x8,x29,#0xe8
7101a8f0a8  bl 0x7103776640
7101a8f0ac  adrp x1,0x7104291000
7101a8f0b0  add x1,x1,#0x6a6
7101a8f0b4  sub x8,x29,#0xd8
7101a8f0b8  sub x0,x29,#0xe8
7101a8f0bc  bl 0x7103776910
7101a8f0c0  ldur x20,[x29, #-0xd0]
7101a8f0c4  ldr x21,[x20, #0x10]
7101a8f0c8  cbz x21,0x7101a8f10c
7101a8f0cc  ldr w3,[x19, #0x3834]
7101a8f0d0  sub x0,x29,#0xa8
7101a8f0d4  mov w1,#0x20
7101a8f0d8  mov w2,wzr
7101a8f0dc  mov w4,wzr
7101a8f0e0  mov w5,wzr
7101a8f0e4  stp xzr,xzr,[x29, #-0x78]
7101a8f0e8  stp xzr,xzr,[x29, #-0x88]
7101a8f0ec  stp xzr,xzr,[x29, #-0x98]
7101a8f0f0  stp xzr,xzr,[x29, #-0xa8]
7101a8f0f4  bl 0x71037ad940
7101a8f0f8  mov w2,w0
7101a8f0fc  sub x1,x29,#0xa8
7101a8f100  mov x0,x21
7101a8f104  mov w3,wzr
7101a8f108  bl 0x71037a2270
7101a8f10c  stp x24,xzr,[x29, #-0xd8]
7101a8f110  cbz x20,0x7101a8f11c
7101a8f114  mov x0,x20
7101a8f118  bl 0x710392eb40
7101a8f11c  ldur x20,[x29, #-0xe0]
7101a8f120  adrp x19,0x710523d000
7101a8f124  add x19,x19,#0x988
7101a8f128  stp x19,xzr,[x29, #-0xe8]
7101a8f12c  cbz x20,0x7101a8f148
7101a8f130  ldr x0,[x20, #0x18]
7101a8f134  stp x24,xzr,[x20, #0x10]
7101a8f138  cbz x0,0x7101a8f140
7101a8f13c  bl 0x710392eb40
7101a8f140  mov x0,x20
7101a8f144  bl 0x710392eb40
7101a8f148  ldur x9,[x29, #-0x58]
7101a8f14c  orr w8,wzr,#0x3
7101a8f150  str w8,[x9, #0x3828]
7101a8f154  stur x19,[x29, #-0xb8]
7101a8f158  ldur x19,[x29, #-0xb0]
7101a8f15c  stur xzr,[x29, #-0xb0]
7101a8f160  cbz x19,0x7101a8f270
7101a8f164  ldr x0,[x19, #0x18]
7101a8f168  stp x24,xzr,[x19, #0x10]
7101a8f16c  cbz x0,0x7101a8f174
7101a8f170  bl 0x710392eb40
7101a8f174  mov x0,x19
7101a8f178  bl 0x710392eb40
7101a8f17c  b 0x7101a8f270
7101a8f180  mov x8,#0x650000000000
7101a8f184  movk x8,#0x87, LSL #48
7101a8f188  strb wzr,[sp, #0xe8]
7101a8f18c  stp xzr,x8,[sp, #0xd8]
7101a8f190  mov x8,#-0x1
7101a8f194  stp x8,xzr,[sp, #0xf0]
7101a8f198  adrp x8,0x7104f73000
7101a8f19c  add x8,x8,#0xd50
7101a8f1a0  str wzr,[sp, #0xc8]
7101a8f1a4  str xzr,[sp, #0x100]
7101a8f1a8  str x8,[sp, #0xd0]
7101a8f1ac  mov w8,#0x1
7101a8f1b0  str xzr,[sp, #0xd8]
7101a8f1b4  strb wzr,[sp, #0xe8]
7101a8f1b8  str w8,[x19, #0x3828]
7101a8f1bc  b 0x7101a8f268
7101a8f1c0  adrp x8,0x710523d000
7101a8f1c4  add x8,x8,#0x9e8
7101a8f1c8  stp x8,xzr,[x29, #-0xa8]
7101a8f1cc  cbz x20,0x7101a8f1d8
7101a8f1d0  mov x0,x20
7101a8f1d4  bl 0x710392eb40
7101a8f1d8  adrp x1,0x7104349000
7101a8f1dc  add x1,x1,#0xde4
7101a8f1e0  sub x8,x29,#0xa8
7101a8f1e4  sub x0,x29,#0xc8
7101a8f1e8  bl 0x71037780e0
7101a8f1ec  ldur x20,[x29, #-0xa0]
7101a8f1f0  ldr x0,[x20, #0x8]
7101a8f1f4  cbz x0,0x7101a8f208
7101a8f1f8  ldr x8,[x0]
7101a8f1fc  ldr x8,[x8, #0x138]
7101a8f200  blr x8
7101a8f204  tbz w0,#0x0,0x7101a8f2c8
7101a8f208  adrp x1,0x7104280000
7101a8f20c  add x1,x1,#0x4d8
7101a8f210  sub x8,x29,#0xb8
7101a8f214  sub x0,x29,#0xc8
7101a8f218  bl 0x71037780e0
7101a8f21c  ldur x21,[x29, #-0xb0]
7101a8f220  ldr x0,[x21, #0x8]
7101a8f224  cbz x0,0x7101a8f3a0
7101a8f228  ldr x8,[x0]
7101a8f22c  ldr x8,[x8, #0x130]
7101a8f230  blr x8
7101a8f234  mov w22,w0
7101a8f238  b 0x7101a8f3a4
7101a8f23c  cmp w10,#0x1
7101a8f240  b.ne 0x7101a8f2e4
7101a8f244  mov w1,#0x1
7101a8f248  mov x0,x19
7101a8f24c  bl 0x7101a905b0
7101a8f250  ldrsw x8,[x19, #0x104]
7101a8f254  cmp w8,#0x13
7101a8f258  b.cs 0x7101a8e5a4
7101a8f25c  add x8,x19,x8, LSL #0x2
7101a8f260  orr w9,wzr,#0x6
7101a8f264  str w9,[x8, #0xb8]
7101a8f268  mov x0,x19
7101a8f26c  bl 0x7101a90b10
7101a8f270  ldur x19,[x29, #-0xc0]
7101a8f274  adrp x8,0x710523d000
7101a8f278  add x8,x8,#0x988
7101a8f27c  stp x8,xzr,[x29, #-0xc8]
7101a8f280  cbz x19,0x7101a8f2a4
7101a8f284  ldr x0,[x19, #0x18]
7101a8f288  adrp x8,0x710523d000
7101a8f28c  add x8,x8,#0x9a8
7101a8f290  stp x8,xzr,[x19, #0x10]
7101a8f294  cbz x0,0x7101a8f29c
7101a8f298  bl 0x710392eb40
7101a8f29c  mov x0,x19
7101a8f2a0  bl 0x710392eb40
7101a8f2a4  add sp,sp,#0x190
7101a8f2a8  ldp x29,x30,[sp, #0x60]
7101a8f2ac  ldp x20,x19,[sp, #0x50]
7101a8f2b0  ldp x22,x21,[sp, #0x40]
7101a8f2b4  ldp x24,x23,[sp, #0x30]
7101a8f2b8  ldp x26,x25,[sp, #0x20]
7101a8f2bc  ldp x28,x27,[sp, #0x10]
7101a8f2c0  ldr d8,[sp], #0x70
7101a8f2c4  ret
7101a8f2c8  adrp x8,0x710523d000
7101a8f2cc  add x8,x8,#0x9e8
7101a8f2d0  stp x8,xzr,[x29, #-0xa8]
7101a8f2d4  cbz x20,0x7101a8f270
7101a8f2d8  mov x0,x20
7101a8f2dc  bl 0x710392eb40
7101a8f2e0  b 0x7101a8f270
7101a8f2e4  ldr w10,[x19, #0x3834]
7101a8f2e8  cmp w10,#0x1
7101a8f2ec  b.lt 0x7101a8f300
7101a8f2f0  ldr x10,[x19, #0x3800]
7101a8f2f4  ldr w10,[x10, #0x25c]
7101a8f2f8  cmn w10,#0x1
7101a8f2fc  b.eq 0x7101a8f848
7101a8f300  ldr x10,[x19, #0x3800]
7101a8f304  ldr w10,[x10, #0x25c]
7101a8f308  cmn w10,#0x1
7101a8f30c  b.eq 0x7101a8f488
7101a8f310  adrp x8,0x710532f000
7101a8f314  ldr x8,[x8, #0x8d0]
7101a8f318  ldr x0,[x8, #0x8]
7101a8f31c  ldrb w8,[x0, #0x191]
7101a8f320  cbnz w8,0x7101a8f44c
7101a8f324  mov x20,#0x23f5
7101a8f328  movk x20,#0x57a5, LSL #16
7101a8f32c  movk x20,#0xf, LSL #32
7101a8f330  mov w2,#0x4
7101a8f334  mov x1,x20
7101a8f338  bl 0x7103313f20
7101a8f33c  tbz w0,#0x0,0x7101a8f44c
7101a8f340  add x0,sp,#0x48
7101a8f344  mov x1,x20
7101a8f348  bl 0x71024076d0
7101a8f34c  ldr x8,[sp, #0x58]
7101a8f350  adrp x9,0x7104f73000
7101a8f354  add x9,x9,#0xd50
7101a8f358  str x9,[sp, #0x50]
7101a8f35c  cbz x8,0x7101a8f478
7101a8f360  adrp x8,0x7106dd5000
7101a8f364  ldrb w8,[x8, #0x3a8]
7101a8f368  cmp w8,#0x1
7101a8f36c  b.ne 0x7101a8f478
7101a8f370  adrp x9,0x7106dd5000
7101a8f374  ldr w8,[sp, #0x60]
7101a8f378  ldr w9,[x9, #0x3ac]
7101a8f37c  cmp w8,w9
7101a8f380  b.ne 0x7101a8f478
7101a8f384  ldr x8,[sp, #0x58]
7101a8f388  ldr wzr,[x8, #0x38]!
7101a8f38c  ldaxr w9,[x8]
7101a8f390  sub w9,w9,#0x1
7101a8f394  stlxr w10,w9,[x8]
7101a8f398  cbnz w10,0x7101a8f38c
7101a8f39c  b 0x7101a8f478
7101a8f3a0  mov w22,wzr
7101a8f3a4  adrp x19,0x710523d000
7101a8f3a8  add x19,x19,#0x9e8
7101a8f3ac  stp x19,xzr,[x29, #-0xb8]
7101a8f3b0  cbz x21,0x7101a8f3bc
7101a8f3b4  mov x0,x21
7101a8f3b8  bl 0x710392eb40
7101a8f3bc  stp x19,xzr,[x29, #-0xa8]
7101a8f3c0  cbz x20,0x7101a8f3cc
7101a8f3c4  mov x0,x20
7101a8f3c8  bl 0x710392eb40
7101a8f3cc  ldur x19,[x29, #-0x58]
7101a8f3d0  tbnz w22,#0x0,0x7101a8f270
7101a8f3d4  ldr x8,[x19, #0x120]
7101a8f3d8  ldr x8,[x8]
7101a8f3dc  ldr x8,[x8]
7101a8f3e0  ldr x8,[x8, #0x600]
7101a8f3e4  ldr w1,[x8, #0x48c]
7101a8f3e8  cmn w1,#0x1
7101a8f3ec  b.eq 0x7101a8f428
7101a8f3f0  adrp x8,0x71052c5000
7101a8f3f4  ldr x8,[x8, #0x120]
7101a8f3f8  fmov s0,0x3f800000
7101a8f3fc  mov v1.16B,v0.16B
7101a8f400  mov w3,wzr
7101a8f404  mov w4,wzr
7101a8f408  mov w5,wzr
7101a8f40c  mov w6,wzr
7101a8f410  ldr x0,[x8, #0x8]
7101a8f414  mov x2,#0xb73d
7101a8f418  movk x2,#0xe51b, LSL #16
7101a8f41c  movk x2,#0x24, LSL #32
7101a8f420  mov w7,wzr
7101a8f424  bl 0x710175dfc0
7101a8f428  ldur x0,[x29, #-0xc0]
7101a8f42c  fmov s0,0x3f800000
7101a8f430  adrp x1,0x7104280000
7101a8f434  add x1,x1,#0x4d8
7101a8f438  bl 0x7103778300
7101a8f43c  mov w8,#0x3911
7101a8f440  mov w9,#0x1
7101a8f444  strb w9,[x19, x8, LSL ]
7101a8f448  b 0x7101a8f270
7101a8f44c  mov x8,#0x650000000000
7101a8f450  movk x8,#0x87, LSL #48
7101a8f454  strb wzr,[sp, #0x68]
7101a8f458  stp xzr,x8,[sp, #0x58]
7101a8f45c  mov x8,#-0x1
7101a8f460  stp x8,xzr,[sp, #0x70]
7101a8f464  adrp x8,0x7104f73000
7101a8f468  add x8,x8,#0xd50
7101a8f46c  str wzr,[sp, #0x48]
7101a8f470  str xzr,[sp, #0x80]
7101a8f474  str x8,[sp, #0x50]
7101a8f478  str xzr,[sp, #0x58]
7101a8f47c  strb wzr,[sp, #0x68]
7101a8f480  ldr x8,[x22, #0x600]
7101a8f484  ldrb w9,[x8, #0x4aa]
7101a8f488  cbz w9,0x7101a8f558
7101a8f48c  ldrb w8,[x8, #0x1ac]
7101a8f490  tbz w8,#0x1,0x7101a8f558
7101a8f494  adrp x8,0x710532f000
7101a8f498  ldr x8,[x8, #0x8d0]
7101a8f49c  ldr x0,[x8, #0x8]
7101a8f4a0  ldrb w8,[x0, #0x191]
7101a8f4a4  cbnz w8,0x7101a8f524
7101a8f4a8  mov x20,#0xfe8c
7101a8f4ac  movk x20,#0x53df, LSL #16
7101a8f4b0  movk x20,#0x10, LSL #32
7101a8f4b4  mov w2,#0x4
7101a8f4b8  mov x1,x20
7101a8f4bc  bl 0x7103313f20
7101a8f4c0  tbz w0,#0x0,0x7101a8f524
7101a8f4c4  add x0,sp,#0x8
7101a8f4c8  mov x1,x20
7101a8f4cc  bl 0x71024076d0
7101a8f4d0  ldr x8,[sp, #0x18]
7101a8f4d4  adrp x9,0x7104f73000
7101a8f4d8  add x9,x9,#0xd50
7101a8f4dc  str x9,[sp, #0x10]
7101a8f4e0  cbz x8,0x7101a8f550
7101a8f4e4  adrp x8,0x7106dd5000
7101a8f4e8  ldrb w8,[x8, #0x3a8]
7101a8f4ec  cmp w8,#0x1
7101a8f4f0  b.ne 0x7101a8f550
7101a8f4f4  adrp x9,0x7106dd5000
7101a8f4f8  ldr w8,[sp, #0x20]
7101a8f4fc  ldr w9,[x9, #0x3ac]
7101a8f500  cmp w8,w9
7101a8f504  b.ne 0x7101a8f550
7101a8f508  ldr x8,[sp, #0x18]
7101a8f50c  ldr wzr,[x8, #0x38]!
7101a8f510  ldaxr w9,[x8]
7101a8f514  sub w9,w9,#0x1
7101a8f518  stlxr w10,w9,[x8]
7101a8f51c  cbnz w10,0x7101a8f510
7101a8f520  b 0x7101a8f550
7101a8f524  mov x8,#0x650000000000
7101a8f528  movk x8,#0x87, LSL #48
7101a8f52c  strb wzr,[sp, #0x28]
7101a8f530  stp xzr,x8,[sp, #0x18]
7101a8f534  mov x8,#-0x1
7101a8f538  stp x8,xzr,[sp, #0x30]
7101a8f53c  adrp x8,0x7104f73000
7101a8f540  add x8,x8,#0xd50
7101a8f544  str wzr,[sp, #0x8]
7101a8f548  str xzr,[sp, #0x40]
7101a8f54c  str x8,[sp, #0x10]
7101a8f550  str xzr,[sp, #0x18]
7101a8f554  strb wzr,[sp, #0x28]
7101a8f558  ldrb w8,[x21]
7101a8f55c  cbz w8,0x7101a8f65c
7101a8f560  ldp x8,x9,[x19, #0x128]
7101a8f564  ldr q1,[x9, #0x60]
7101a8f568  ldp s3,s4,[x8, #0x90]
7101a8f56c  fcmp s1,s3
7101a8f570  dup s7,v1.S[0x1]
7101a8f574  fcsel s1,s3,s1,mi
7101a8f578  ldp s5,s6,[x8, #0x98]
7101a8f57c  fcmp s4,s1
7101a8f580  movi v2.2D,#0x0
7101a8f584  mov v0.16B,v2.16B
7101a8f588  fcsel s1,s4,s1,mi
7101a8f58c  fcmp s7,s5
7101a8f590  fcsel s7,s5,s7,mi
7101a8f594  fcmp s6,s7
7101a8f598  mov v0.S[0x0],v1.S[0x0]
7101a8f59c  fcsel s1,s6,s7,mi
7101a8f5a0  mov v0.S[0x1],v1.S[0x0]
7101a8f5a4  str q0,[x8, #0x70]
7101a8f5a8  ldp x9,x10,[x8, #0x70]
7101a8f5ac  stp x9,x10,[x8, #0x60]
7101a8f5b0  ldr q0,[x8, #0x60]
7101a8f5b4  fcmp s0,s3
7101a8f5b8  dup s1,v0.S[0x1]
7101a8f5bc  fcsel s0,s3,s0,mi
7101a8f5c0  fcmp s4,s0
7101a8f5c4  fcsel s0,s4,s0,mi
7101a8f5c8  fcmp s1,s5
7101a8f5cc  fcsel s1,s5,s1,mi
7101a8f5d0  fcmp s6,s1
7101a8f5d4  mov v2.S[0x0],v0.S[0x0]
7101a8f5d8  fcsel s1,s6,s1,mi
7101a8f5dc  mov v2.S[0x1],v1.S[0x0]
7101a8f5e0  str q2,[x8, #0x60]
7101a8f5e4  ldr x8,[x8, #0x38]
7101a8f5e8  cbz x8,0x7101a8f600
7101a8f5ec  ldrb w9,[x8, #0x58]
7101a8f5f0  orr w9,w9,#0x10
7101a8f5f4  str s0,[x8, #0x30]
7101a8f5f8  str s1,[x8, #0x34]
7101a8f5fc  strb w9,[x8, #0x58]
7101a8f600  ldr x0,[x19, #0x128]
7101a8f604  ldr x8,[x0]
7101a8f608  ldr x8,[x8, #0x60]
7101a8f60c  mov w1,#0x1
7101a8f610  blr x8
7101a8f614  ldr x8,[x19, #0x128]
7101a8f618  ldr x8,[x8, #0x38]
7101a8f61c  cbz x8,0x7101a8f62c
7101a8f620  ldrb w9,[x8, #0x58]
7101a8f624  orr w9,w9,#0x1
7101a8f628  strb w9,[x8, #0x58]
7101a8f62c  ldr x0,[x19, #0x130]
7101a8f630  ldr x8,[x0]
7101a8f634  ldr x8,[x8, #0x60]
7101a8f638  mov w1,wzr
7101a8f63c  blr x8
7101a8f640  ldr x8,[x19, #0x130]
7101a8f644  ldr x8,[x8, #0x38]
7101a8f648  cbz x8,0x7101a8f658
7101a8f64c  ldrb w9,[x8, #0x58]
7101a8f650  and w9,w9,#0xfe
7101a8f654  strb w9,[x8, #0x58]
7101a8f658  strb wzr,[x21]
7101a8f65c  fmov s8,0x3f800000
7101a8f660  mov w8,#0x3778
7101a8f664  add x26,x19,#0x138
7101a8f668  add x8,x19,x8
7101a8f66c  adrp x22,0x710436b000
7101a8f670  add x22,x22,#0xd69
7101a8f674  adrp x28,0x710523d000
7101a8f678  add x28,x28,#0x988
7101a8f67c  str x8,[sp]
7101a8f680  adrp x23,0x7104400000
7101a8f684  add x23,x23,#0xeb0
7101a8f688  adrp x27,0x710523d000
7101a8f68c  add x27,x27,#0x9a8
7101a8f690  mov w20,#0x144
7101a8f694  ldur x21,[x29, #-0x58]
7101a8f698  ldr x8,[x21, #0x120]
7101a8f69c  ldr w24,[x26, #0x694]
7101a8f6a0  ldr w25,[x19, x20, LSL #0x0]
7101a8f6a4  mov w2,w24
7101a8f6a8  mov w3,w25
7101a8f6ac  ldr x8,[x8]
7101a8f6b0  add x0,x8,#0x8
7101a8f6b4  sub x8,x29,#0xa8
7101a8f6b8  adrp x1,0x71043f0000
7101a8f6bc  add x1,x1,#0x46b
7101a8f6c0  bl 0x7103776640
7101a8f6c4  ldr x8,[x21, #0x120]
7101a8f6c8  ldr x8,[x8]
7101a8f6cc  add x0,x8,#0x8
7101a8f6d0  sub x8,x29,#0xb8
7101a8f6d4  adrp x1,0x7104307000
7101a8f6d8  add x1,x1,#0xfe5
7101a8f6dc  mov w2,w24
7101a8f6e0  mov w3,w25
7101a8f6e4  bl 0x7103776640
7101a8f6e8  ldur x24,[x29, #-0xa0]
7101a8f6ec  mov v0.16B,v8.16B
7101a8f6f0  mov x1,x22
7101a8f6f4  mov x0,x24
7101a8f6f8  bl 0x7103778300
7101a8f6fc  ldur x25,[x29, #-0xb0]
7101a8f700  mov v0.16B,v8.16B
7101a8f704  mov x1,x22
7101a8f708  mov x0,x25
7101a8f70c  bl 0x7103778300
7101a8f710  stp x28,xzr,[x29, #-0xb8]
7101a8f714  cbz x25,0x7101a8f730
7101a8f718  ldr x0,[x25, #0x18]
7101a8f71c  stp x27,xzr,[x25, #0x10]
7101a8f720  cbz x0,0x7101a8f728
7101a8f724  bl 0x710392eb40
7101a8f728  mov x0,x25
7101a8f72c  bl 0x710392eb40
7101a8f730  stp x28,xzr,[x29, #-0xa8]
7101a8f734  cbz x24,0x7101a8f750
7101a8f738  ldr x0,[x24, #0x18]
7101a8f73c  stp x27,xzr,[x24, #0x10]
7101a8f740  cbz x0,0x7101a8f748
7101a8f744  bl 0x710392eb40
7101a8f748  mov x0,x24
7101a8f74c  bl 0x710392eb40
7101a8f750  ldur x21,[x29, #-0x58]
7101a8f754  ldr x8,[x21, #0x120]
7101a8f758  ldr w24,[x26, #0x694]
7101a8f75c  ldr w25,[x19, x20, LSL #0x0]
7101a8f760  mov w2,w24
7101a8f764  mov w3,w25
7101a8f768  ldr x8,[x8]
7101a8f76c  add x0,x8,#0x8
7101a8f770  sub x8,x29,#0xa8
7101a8f774  adrp x1,0x71043f0000
7101a8f778  add x1,x1,#0x46b
7101a8f77c  bl 0x7103776640
7101a8f780  ldr x8,[x21, #0x120]
7101a8f784  ldr x8,[x8]
7101a8f788  add x0,x8,#0x8
7101a8f78c  sub x8,x29,#0xb8
7101a8f790  adrp x1,0x7104307000
7101a8f794  add x1,x1,#0xfe5
7101a8f798  mov w2,w24
7101a8f79c  mov w3,w25
7101a8f7a0  bl 0x7103776640
7101a8f7a4  ldur x24,[x29, #-0xa0]
7101a8f7a8  mov v0.16B,v8.16B
7101a8f7ac  mov x1,x23
7101a8f7b0  mov x0,x24
7101a8f7b4  bl 0x7103778300
7101a8f7b8  ldur x25,[x29, #-0xb0]
7101a8f7bc  mov v0.16B,v8.16B
7101a8f7c0  mov x1,x23
7101a8f7c4  mov x0,x25
7101a8f7c8  bl 0x7103778300
7101a8f7cc  stp x28,xzr,[x29, #-0xb8]
7101a8f7d0  cbz x25,0x7101a8f7ec
7101a8f7d4  ldr x0,[x25, #0x18]
7101a8f7d8  stp x27,xzr,[x25, #0x10]
7101a8f7dc  cbz x0,0x7101a8f7e4
7101a8f7e0  bl 0x710392eb40
7101a8f7e4  mov x0,x25
7101a8f7e8  bl 0x710392eb40
7101a8f7ec  stp x28,xzr,[x29, #-0xa8]
7101a8f7f0  cbz x24,0x7101a8f80c
7101a8f7f4  ldr x0,[x24, #0x18]
7101a8f7f8  stp x27,xzr,[x24, #0x10]
7101a8f7fc  cbz x0,0x7101a8f804
7101a8f800  bl 0x710392eb40
7101a8f804  mov x0,x24
7101a8f808  bl 0x710392eb40
7101a8f80c  add x20,x20,#0x38
7101a8f810  cmp x20,#0x7d4
7101a8f814  b.ne 0x7101a8f694
7101a8f818  ldr x8,[sp]
7101a8f81c  add x26,x26,#0x6c8
7101a8f820  add x19,x19,#0x6c8
7101a8f824  cmp x26,x8
7101a8f828  b.ne 0x7101a8f690
7101a8f82c  ldur x19,[x29, #-0x58]
7101a8f830  ldrsw x8,[x19, #0x104]
7101a8f834  cmp w8,#0x13
7101a8f838  b.cs 0x7101a8e5a4
7101a8f83c  add x8,x19,x8, LSL #0x2
7101a8f840  mov w9,#0x2
7101a8f844  b 0x7101a8f264
7101a8f848  ldr x8,[x19, #0x3810]
7101a8f84c  ldr w8,[x8, #0x25c]
7101a8f850  cmn w8,#0x1
7101a8f854  b.eq 0x7101a8f268
7101a8f858  ldrb w8,[x21]
7101a8f85c  cbz w8,0x7101a8f880
7101a8f860  ldr x0,[x19, #0x130]
7101a8f864  ldr x8,[x0, #0x38]
7101a8f868  cbz x8,0x7101a8f89c
7101a8f86c  ldrb w9,[x8, #0x58]
7101a8f870  and w9,w9,#0xfe
7101a8f874  strb w9,[x8, #0x58]
7101a8f878  ldr x0,[x19, #0x130]
7101a8f87c  b 0x7101a8f89c
7101a8f880  ldr x0,[x19, #0x128]
7101a8f884  ldr x8,[x0, #0x38]
7101a8f888  cbz x8,0x7101a8f89c
7101a8f88c  ldrb w9,[x8, #0x58]
7101a8f890  and w9,w9,#0xfe
7101a8f894  strb w9,[x8, #0x58]
7101a8f898  ldr x0,[x19, #0x128]
7101a8f89c  ldr x8,[x0]
7101a8f8a0  ldr x8,[x8, #0x60]
7101a8f8a4  mov w1,wzr
7101a8f8a8  blr x8
7101a8f8ac  ldrsw x8,[x19, #0x104]
7101a8f8b0  cmp w8,#0x13
7101a8f8b4  b.cs 0x7101a8e5a4
7101a8f8b8  add x8,x19,x8, LSL #0x2
7101a8f8bc  orr w9,wzr,#0x7
7101a8f8c0  b 0x7101a8f264
7101a8f8c4  bl 0x71039c0c00
