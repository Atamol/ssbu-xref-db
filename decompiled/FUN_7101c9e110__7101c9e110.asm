// addr:      7101c9e110
// offset:    0x1c9e110
// name:      FUN_7101c9e110
// mangled:   
// size:      2688

7101c9e110  sub sp,sp,#0x70
7101c9e114  stp x26,x25,[sp, #0x20]
7101c9e118  stp x24,x23,[sp, #0x30]
7101c9e11c  stp x22,x21,[sp, #0x40]
7101c9e120  stp x20,x19,[sp, #0x50]
7101c9e124  stp x29,x30,[sp, #0x60]
7101c9e128  add x29,sp,#0x60
7101c9e12c  and w8,w1,#0xff
7101c9e130  mov x19,x0
7101c9e134  cmp w8,#0x3
7101c9e138  b.eq 0x7101c9e198
7101c9e13c  cmp w8,#0x2
7101c9e140  b.eq 0x7101c9e1e4
7101c9e144  cmp w8,#0x1
7101c9e148  b.ne 0x7101c9eb44
7101c9e14c  mov w21,#0x100
7101c9e150  movk w21,#0x504, LSL #16
7101c9e154  mov w22,#0x607
7101c9e158  str w21,[sp, #0x8]
7101c9e15c  strh w22,[sp, #0xc]
7101c9e160  ldr x8,[x19, #0x190]
7101c9e164  ldr x20,[x19, #0x180]
7101c9e168  sub x9,x8,x20
7101c9e16c  cmp x9,#0x6
7101c9e170  b.cs 0x7101c9e238
7101c9e174  cbz x20,0x7101c9e44c
7101c9e178  mov x0,x20
7101c9e17c  add x23,x19,#0x180
7101c9e180  str x20,[x19, #0x188]
7101c9e184  bl 0x710392eb40
7101c9e188  mov x8,xzr
7101c9e18c  stp xzr,xzr,[x23, #0x8]
7101c9e190  str xzr,[x23]
7101c9e194  b 0x7101c9e458
7101c9e198  mov x8,#0x100
7101c9e19c  movk x8,#0x302, LSL #16
7101c9e1a0  movk x8,#0x504, LSL #32
7101c9e1a4  movk x8,#0x607, LSL #48
7101c9e1a8  str x8,[sp, #0x8]
7101c9e1ac  ldr x8,[x19, #0x190]
7101c9e1b0  ldr x20,[x19, #0x180]
7101c9e1b4  sub x9,x8,x20
7101c9e1b8  cmp x9,#0x8
7101c9e1bc  b.cs 0x7101c9e2e0
7101c9e1c0  cbz x20,0x7101c9e5d0
7101c9e1c4  mov x0,x20
7101c9e1c8  add x21,x19,#0x180
7101c9e1cc  str x20,[x19, #0x188]
7101c9e1d0  bl 0x710392eb40
7101c9e1d4  mov x8,xzr
7101c9e1d8  stp xzr,xzr,[x21, #0x8]
7101c9e1dc  str xzr,[x21]
7101c9e1e0  b 0x7101c9e5dc
7101c9e1e4  mov w8,#0x705
7101c9e1e8  mov w21,#0x100
7101c9e1ec  movk w21,#0x403, LSL #16
7101c9e1f0  strh w8,[sp, #0xc]
7101c9e1f4  orr w8,wzr,#0x6
7101c9e1f8  str w21,[sp, #0x8]
7101c9e1fc  strb w8,[sp, #0xe]
7101c9e200  ldr x8,[x19, #0x190]
7101c9e204  ldr x20,[x19, #0x180]
7101c9e208  sub x9,x8,x20
7101c9e20c  cmp x9,#0x7
7101c9e210  b.cs 0x7101c9e388
7101c9e214  cbz x20,0x7101c9e77c
7101c9e218  mov x0,x20
7101c9e21c  add x22,x19,#0x180
7101c9e220  str x20,[x19, #0x188]
7101c9e224  bl 0x710392eb40
7101c9e228  mov x8,xzr
7101c9e22c  stp xzr,xzr,[x22, #0x8]
7101c9e230  str xzr,[x22]
7101c9e234  b 0x7101c9e788
7101c9e238  ldr x24,[x19, #0x188]
7101c9e23c  add x8,sp,#0x8
7101c9e240  add x22,x8,#0x6
7101c9e244  sub x26,x24,x20
7101c9e248  add x23,x8,x26
7101c9e24c  cmp x26,#0x6
7101c9e250  csel x25,x23,x22,cc
7101c9e254  subs x21,x25,x8
7101c9e258  b.eq 0x7101c9e26c
7101c9e25c  add x1,sp,#0x8
7101c9e260  mov x0,x20
7101c9e264  mov x2,x21
7101c9e268  bl 0x71039c00a0
7101c9e26c  cmp x26,#0x5
7101c9e270  b.hi 0x7101c9e434
7101c9e274  cmp x25,x22
7101c9e278  b.eq 0x7101c9e4d4
7101c9e27c  ldr x8,[x19, #0x188]
7101c9e280  sub w10,w20,w24
7101c9e284  add x9,x20,#0x5
7101c9e288  tbz w10,#0x0,0x7101c9e2a0
7101c9e28c  ldrb w10,[x23], #0x1
7101c9e290  strb w10,[x8]
7101c9e294  ldr x8,[x19, #0x188]
7101c9e298  add x8,x8,#0x1
7101c9e29c  str x8,[x19, #0x188]
7101c9e2a0  cmp x9,x24
7101c9e2a4  b.eq 0x7101c9e4d4
7101c9e2a8  ldrb w9,[x23]
7101c9e2ac  strb w9,[x8]
7101c9e2b0  ldr x8,[x19, #0x188]
7101c9e2b4  add x9,x8,#0x1
7101c9e2b8  str x9,[x19, #0x188]
7101c9e2bc  ldrb w9,[x23, #0x1]
7101c9e2c0  strb w9,[x8, #0x1]
7101c9e2c4  ldr x8,[x19, #0x188]
7101c9e2c8  add x23,x23,#0x2
7101c9e2cc  cmp x23,x22
7101c9e2d0  add x8,x8,#0x1
7101c9e2d4  str x8,[x19, #0x188]
7101c9e2d8  b.ne 0x7101c9e2a8
7101c9e2dc  b 0x7101c9e4d4
7101c9e2e0  ldr x24,[x19, #0x188]
7101c9e2e4  add x8,sp,#0x8
7101c9e2e8  add x22,x8,#0x8
7101c9e2ec  sub x26,x24,x20
7101c9e2f0  add x23,x8,x26
7101c9e2f4  cmp x26,#0x8
7101c9e2f8  csel x25,x23,x22,cc
7101c9e2fc  subs x21,x25,x8
7101c9e300  b.eq 0x7101c9e314
7101c9e304  add x1,sp,#0x8
7101c9e308  mov x0,x20
7101c9e30c  mov x2,x21
7101c9e310  bl 0x71039c00a0
7101c9e314  cmp x26,#0x7
7101c9e318  b.hi 0x7101c9e43c
7101c9e31c  cmp x25,x22
7101c9e320  b.eq 0x7101c9e67c
7101c9e324  ldr x8,[x19, #0x188]
7101c9e328  sub w10,w20,w24
7101c9e32c  add x9,x20,#0x7
7101c9e330  tbz w10,#0x0,0x7101c9e348
7101c9e334  ldrb w10,[x23], #0x1
7101c9e338  strb w10,[x8]
7101c9e33c  ldr x8,[x19, #0x188]
7101c9e340  add x8,x8,#0x1
7101c9e344  str x8,[x19, #0x188]
7101c9e348  cmp x9,x24
7101c9e34c  b.eq 0x7101c9e67c
7101c9e350  ldrb w9,[x23]
7101c9e354  strb w9,[x8]
7101c9e358  ldr x8,[x19, #0x188]
7101c9e35c  add x9,x8,#0x1
7101c9e360  str x9,[x19, #0x188]
7101c9e364  ldrb w9,[x23, #0x1]
7101c9e368  strb w9,[x8, #0x1]
7101c9e36c  ldr x8,[x19, #0x188]
7101c9e370  add x23,x23,#0x2
7101c9e374  cmp x23,x22
7101c9e378  add x8,x8,#0x1
7101c9e37c  str x8,[x19, #0x188]
7101c9e380  b.ne 0x7101c9e350
7101c9e384  b 0x7101c9e67c
7101c9e388  ldr x24,[x19, #0x188]
7101c9e38c  add x8,sp,#0x8
7101c9e390  add x22,x8,#0x7
7101c9e394  sub x26,x24,x20
7101c9e398  add x23,x8,x26
7101c9e39c  cmp x26,#0x7
7101c9e3a0  csel x25,x23,x22,cc
7101c9e3a4  subs x21,x25,x8
7101c9e3a8  b.eq 0x7101c9e3bc
7101c9e3ac  add x1,sp,#0x8
7101c9e3b0  mov x0,x20
7101c9e3b4  mov x2,x21
7101c9e3b8  bl 0x71039c00a0
7101c9e3bc  cmp x26,#0x6
7101c9e3c0  b.hi 0x7101c9e444
7101c9e3c4  cmp x25,x22
7101c9e3c8  b.eq 0x7101c9e818
7101c9e3cc  ldr x8,[x19, #0x188]
7101c9e3d0  add w9,w20,#0x1
7101c9e3d4  sub w10,w9,w24
7101c9e3d8  add x9,x20,#0x6
7101c9e3dc  tbz w10,#0x0,0x7101c9e3f4
7101c9e3e0  ldrb w10,[x23], #0x1
7101c9e3e4  strb w10,[x8]
7101c9e3e8  ldr x8,[x19, #0x188]
7101c9e3ec  add x8,x8,#0x1
7101c9e3f0  str x8,[x19, #0x188]
7101c9e3f4  cmp x9,x24
7101c9e3f8  b.eq 0x7101c9e818
7101c9e3fc  ldrb w9,[x23]
7101c9e400  strb w9,[x8]
7101c9e404  ldr x8,[x19, #0x188]
7101c9e408  add x9,x8,#0x1
7101c9e40c  str x9,[x19, #0x188]
7101c9e410  ldrb w9,[x23, #0x1]
7101c9e414  strb w9,[x8, #0x1]
7101c9e418  ldr x8,[x19, #0x188]
7101c9e41c  add x23,x23,#0x2
7101c9e420  cmp x23,x22
7101c9e424  add x8,x8,#0x1
7101c9e428  str x8,[x19, #0x188]
7101c9e42c  b.ne 0x7101c9e3fc
7101c9e430  b 0x7101c9e818
7101c9e434  add x8,x20,x21
7101c9e438  b 0x7101c9e4d0
7101c9e43c  add x8,x20,x21
7101c9e440  b 0x7101c9e678
7101c9e444  add x8,x20,x21
7101c9e448  b 0x7101c9e814
7101c9e44c  orr x9,xzr,#0x3ffffffffffffffe
7101c9e450  cmp x8,x9
7101c9e454  b.hi 0x7101c9eb60
7101c9e458  lsl x8,x8,#0x1
7101c9e45c  cmp x8,#0x6
7101c9e460  orr w9,wzr,#0x6
7101c9e464  csel x20,x8,x9,hi
7101c9e468  mov w0,#0x10
7101c9e46c  mov x1,x20
7101c9e470  bl 0x710392e290
7101c9e474  cbnz x0,0x7101c9e4b8
7101c9e478  adrp x8,0x7105332000
7101c9e47c  ldr x0,[x8, #0xf00]
7101c9e480  cbz x0,0x7101c9e4b4
7101c9e484  str wzr,[sp, #0x1c]
7101c9e488  str x20,[sp, #0x10]
7101c9e48c  ldr x8,[x0]
7101c9e490  ldr x8,[x8, #0x30]
7101c9e494  add x1,sp,#0x1c
7101c9e498  add x2,sp,#0x10
7101c9e49c  blr x8
7101c9e4a0  tbz w0,#0x0,0x7101c9e4b4
7101c9e4a4  mov w0,#0x10
7101c9e4a8  mov x1,x20
7101c9e4ac  bl 0x710392e290
7101c9e4b0  cbnz x0,0x7101c9e4b8
7101c9e4b4  mov x0,xzr
7101c9e4b8  add x8,x0,x20
7101c9e4bc  str x8,[x19, #0x190]
7101c9e4c0  add x8,x0,#0x6
7101c9e4c4  str x0,[x19, #0x180]
7101c9e4c8  str w21,[x0]
7101c9e4cc  strh w22,[x0, #0x4]
7101c9e4d0  str x8,[x19, #0x188]
7101c9e4d4  mov w8,#0x201
7101c9e4d8  strh w8,[sp, #0x1c]
7101c9e4dc  orr w8,wzr,#0x3
7101c9e4e0  strb w8,[sp, #0x1e]
7101c9e4e4  ldr x8,[x19, #0x1d8]
7101c9e4e8  ldr x20,[x19, #0x1c8]
7101c9e4ec  sub x9,x8,x20
7101c9e4f0  cmp x9,#0x3
7101c9e4f4  b.cs 0x7101c9e51c
7101c9e4f8  cbz x20,0x7101c9e918
7101c9e4fc  mov x0,x20
7101c9e500  add x21,x19,#0x1c8
7101c9e504  str x20,[x19, #0x1d0]
7101c9e508  bl 0x710392eb40
7101c9e50c  mov x8,xzr
7101c9e510  stp xzr,xzr,[x21, #0x8]
7101c9e514  str xzr,[x21]
7101c9e518  b 0x7101c9e924
7101c9e51c  ldr x24,[x19, #0x1d0]
7101c9e520  add x8,sp,#0x1c
7101c9e524  orr x22,x8,#0x3
7101c9e528  sub x26,x24,x20
7101c9e52c  add x23,x8,x26
7101c9e530  cmp x26,#0x3
7101c9e534  csel x25,x23,x22,cc
7101c9e538  subs x21,x25,x8
7101c9e53c  b.eq 0x7101c9e550
7101c9e540  add x1,sp,#0x1c
7101c9e544  mov x0,x20
7101c9e548  mov x2,x21
7101c9e54c  bl 0x71039c00a0
7101c9e550  cmp x26,#0x2
7101c9e554  b.hi 0x7101c9e5c8
7101c9e558  cmp x25,x22
7101c9e55c  b.eq 0x7101c9e9b0
7101c9e560  ldr x8,[x19, #0x1d0]
7101c9e564  add w9,w20,#0x1
7101c9e568  sub w10,w9,w24
7101c9e56c  add x9,x20,#0x2
7101c9e570  tbz w10,#0x0,0x7101c9e588
7101c9e574  ldrb w10,[x23], #0x1
7101c9e578  strb w10,[x8]
7101c9e57c  ldr x8,[x19, #0x1d0]
7101c9e580  add x8,x8,#0x1
7101c9e584  str x8,[x19, #0x1d0]
7101c9e588  cmp x9,x24
7101c9e58c  b.eq 0x7101c9e9b0
7101c9e590  ldrb w9,[x23]
7101c9e594  strb w9,[x8]
7101c9e598  ldr x8,[x19, #0x1d0]
7101c9e59c  add x9,x8,#0x1
7101c9e5a0  str x9,[x19, #0x1d0]
7101c9e5a4  ldrb w9,[x23, #0x1]
7101c9e5a8  strb w9,[x8, #0x1]
7101c9e5ac  ldr x8,[x19, #0x1d0]
7101c9e5b0  add x23,x23,#0x2
7101c9e5b4  cmp x23,x22
7101c9e5b8  add x8,x8,#0x1
7101c9e5bc  str x8,[x19, #0x1d0]
7101c9e5c0  b.ne 0x7101c9e590
7101c9e5c4  b 0x7101c9e9b0
7101c9e5c8  add x8,x20,x21
7101c9e5cc  b 0x7101c9e9ac
7101c9e5d0  orr x9,xzr,#0x3ffffffffffffffe
7101c9e5d4  cmp x8,x9
7101c9e5d8  b.hi 0x7101c9eb68
7101c9e5dc  lsl x8,x8,#0x1
7101c9e5e0  cmp x8,#0x8
7101c9e5e4  mov w9,#0x8
7101c9e5e8  csel x20,x8,x9,hi
7101c9e5ec  mov w0,#0x10
7101c9e5f0  mov x1,x20
7101c9e5f4  bl 0x710392e290
7101c9e5f8  cbnz x0,0x7101c9e63c
7101c9e5fc  adrp x8,0x7105332000
7101c9e600  ldr x0,[x8, #0xf00]
7101c9e604  cbz x0,0x7101c9e638
7101c9e608  str wzr,[sp, #0x1c]
7101c9e60c  str x20,[sp, #0x10]
7101c9e610  ldr x8,[x0]
7101c9e614  ldr x8,[x8, #0x30]
7101c9e618  add x1,sp,#0x1c
7101c9e61c  add x2,sp,#0x10
7101c9e620  blr x8
7101c9e624  tbz w0,#0x0,0x7101c9e638
7101c9e628  mov w0,#0x10
7101c9e62c  mov x1,x20
7101c9e630  bl 0x710392e290
7101c9e634  cbnz x0,0x7101c9e63c
7101c9e638  mov x0,xzr
7101c9e63c  add x8,x0,x20
7101c9e640  str x8,[x19, #0x190]
7101c9e644  mov w8,#0x100
7101c9e648  movk w8,#0x302, LSL #16
7101c9e64c  str x0,[x19, #0x180]
7101c9e650  str w8,[x0]
7101c9e654  mov w8,#0x4
7101c9e658  strb w8,[x0, #0x4]
7101c9e65c  ldrb w8,[sp, #0xd]
7101c9e660  strb w8,[x0, #0x5]
7101c9e664  ldrb w8,[sp, #0xe]
7101c9e668  strb w8,[x0, #0x6]
7101c9e66c  ldrb w8,[sp, #0xf]
7101c9e670  strb w8,[x0, #0x7]
7101c9e674  add x8,x0,#0x8
7101c9e678  str x8,[x19, #0x188]
7101c9e67c  mov w8,#0x403
7101c9e680  movk w8,#0x605, LSL #16
7101c9e684  str w8,[sp, #0x8]
7101c9e688  orr w8,wzr,#0x7
7101c9e68c  strb w8,[sp, #0xc]
7101c9e690  ldr x8,[x19, #0x1d8]
7101c9e694  ldr x20,[x19, #0x1c8]
7101c9e698  sub x9,x8,x20
7101c9e69c  cmp x9,#0x5
7101c9e6a0  b.cs 0x7101c9e6c8
7101c9e6a4  cbz x20,0x7101c9e9c0
7101c9e6a8  mov x0,x20
7101c9e6ac  add x21,x19,#0x1c8
7101c9e6b0  str x20,[x19, #0x1d0]
7101c9e6b4  bl 0x710392eb40
7101c9e6b8  mov x8,xzr
7101c9e6bc  stp xzr,xzr,[x21, #0x8]
7101c9e6c0  str xzr,[x21]
7101c9e6c4  b 0x7101c9e9cc
7101c9e6c8  ldr x24,[x19, #0x1d0]
7101c9e6cc  add x8,sp,#0x8
7101c9e6d0  add x22,x8,#0x5
7101c9e6d4  sub x26,x24,x20
7101c9e6d8  add x23,x8,x26
7101c9e6dc  cmp x26,#0x5
7101c9e6e0  csel x25,x23,x22,cc
7101c9e6e4  subs x21,x25,x8
7101c9e6e8  b.eq 0x7101c9e6fc
7101c9e6ec  add x1,sp,#0x8
7101c9e6f0  mov x0,x20
7101c9e6f4  mov x2,x21
7101c9e6f8  bl 0x71039c00a0
7101c9e6fc  cmp x26,#0x4
7101c9e700  b.hi 0x7101c9e774
7101c9e704  cmp x25,x22
7101c9e708  b.eq 0x7101c9ea68
7101c9e70c  ldr x8,[x19, #0x1d0]
7101c9e710  add w9,w20,#0x1
7101c9e714  sub w10,w9,w24
7101c9e718  add x9,x20,#0x4
7101c9e71c  tbz w10,#0x0,0x7101c9e734
7101c9e720  ldrb w10,[x23], #0x1
7101c9e724  strb w10,[x8]
7101c9e728  ldr x8,[x19, #0x1d0]
7101c9e72c  add x8,x8,#0x1
7101c9e730  str x8,[x19, #0x1d0]
7101c9e734  cmp x9,x24
7101c9e738  b.eq 0x7101c9ea68
7101c9e73c  ldrb w9,[x23]
7101c9e740  strb w9,[x8]
7101c9e744  ldr x8,[x19, #0x1d0]
7101c9e748  add x9,x8,#0x1
7101c9e74c  str x9,[x19, #0x1d0]
7101c9e750  ldrb w9,[x23, #0x1]
7101c9e754  strb w9,[x8, #0x1]
7101c9e758  ldr x8,[x19, #0x1d0]
7101c9e75c  add x23,x23,#0x2
7101c9e760  cmp x23,x22
7101c9e764  add x8,x8,#0x1
7101c9e768  str x8,[x19, #0x1d0]
7101c9e76c  b.ne 0x7101c9e73c
7101c9e770  b 0x7101c9ea68
7101c9e774  add x8,x20,x21
7101c9e778  b 0x7101c9ea64
7101c9e77c  orr x9,xzr,#0x3ffffffffffffffe
7101c9e780  cmp x8,x9
7101c9e784  b.hi 0x7101c9eb70
7101c9e788  lsl x8,x8,#0x1
7101c9e78c  cmp x8,#0x7
7101c9e790  orr w9,wzr,#0x7
7101c9e794  csel x20,x8,x9,hi
7101c9e798  mov w0,#0x10
7101c9e79c  mov x1,x20
7101c9e7a0  bl 0x710392e290
7101c9e7a4  cbnz x0,0x7101c9e7e8
7101c9e7a8  adrp x8,0x7105332000
7101c9e7ac  ldr x0,[x8, #0xf00]
7101c9e7b0  cbz x0,0x7101c9e7e4
7101c9e7b4  str wzr,[sp, #0x1c]
7101c9e7b8  str x20,[sp, #0x10]
7101c9e7bc  ldr x8,[x0]
7101c9e7c0  ldr x8,[x8, #0x30]
7101c9e7c4  add x1,sp,#0x1c
7101c9e7c8  add x2,sp,#0x10
7101c9e7cc  blr x8
7101c9e7d0  tbz w0,#0x0,0x7101c9e7e4
7101c9e7d4  mov w0,#0x10
7101c9e7d8  mov x1,x20
7101c9e7dc  bl 0x710392e290
7101c9e7e0  cbnz x0,0x7101c9e7e8
7101c9e7e4  mov x0,xzr
7101c9e7e8  add x8,x0,x20
7101c9e7ec  str x8,[x19, #0x190]
7101c9e7f0  mov w8,#0x5
7101c9e7f4  str x0,[x19, #0x180]
7101c9e7f8  str w21,[x0]
7101c9e7fc  strb w8,[x0, #0x4]
7101c9e800  ldrb w8,[sp, #0xd]
7101c9e804  strb w8,[x0, #0x5]
7101c9e808  ldrb w8,[sp, #0xe]
7101c9e80c  strb w8,[x0, #0x6]
7101c9e810  add x8,x0,#0x7
7101c9e814  str x8,[x19, #0x188]
7101c9e818  mov w8,#0x403
7101c9e81c  movk w8,#0x605, LSL #16
7101c9e820  str w8,[sp, #0x8]
7101c9e824  orr w8,wzr,#0x7
7101c9e828  strb w8,[sp, #0xc]
7101c9e82c  ldr x8,[x19, #0x1d8]
7101c9e830  ldr x20,[x19, #0x1c8]
7101c9e834  sub x9,x8,x20
7101c9e838  cmp x9,#0x5
7101c9e83c  b.cs 0x7101c9e864
7101c9e840  cbz x20,0x7101c9ea78
7101c9e844  mov x0,x20
7101c9e848  add x21,x19,#0x1c8
7101c9e84c  str x20,[x19, #0x1d0]
7101c9e850  bl 0x710392eb40
7101c9e854  mov x8,xzr
7101c9e858  stp xzr,xzr,[x21, #0x8]
7101c9e85c  str xzr,[x21]
7101c9e860  b 0x7101c9ea84
7101c9e864  ldr x24,[x19, #0x1d0]
7101c9e868  add x8,sp,#0x8
7101c9e86c  add x22,x8,#0x5
7101c9e870  sub x26,x24,x20
7101c9e874  add x23,x8,x26
7101c9e878  cmp x26,#0x5
7101c9e87c  csel x25,x23,x22,cc
7101c9e880  subs x21,x25,x8
7101c9e884  b.eq 0x7101c9e898
7101c9e888  add x1,sp,#0x8
7101c9e88c  mov x0,x20
7101c9e890  mov x2,x21
7101c9e894  bl 0x71039c00a0
7101c9e898  cmp x26,#0x4
7101c9e89c  b.hi 0x7101c9e910
7101c9e8a0  cmp x25,x22
7101c9e8a4  b.eq 0x7101c9eb20
7101c9e8a8  ldr x8,[x19, #0x1d0]
7101c9e8ac  add w9,w20,#0x1
7101c9e8b0  sub w10,w9,w24
7101c9e8b4  add x9,x20,#0x4
7101c9e8b8  tbz w10,#0x0,0x7101c9e8d0
7101c9e8bc  ldrb w10,[x23], #0x1
7101c9e8c0  strb w10,[x8]
7101c9e8c4  ldr x8,[x19, #0x1d0]
7101c9e8c8  add x8,x8,#0x1
7101c9e8cc  str x8,[x19, #0x1d0]
7101c9e8d0  cmp x9,x24
7101c9e8d4  b.eq 0x7101c9eb20
7101c9e8d8  ldrb w9,[x23]
7101c9e8dc  strb w9,[x8]
7101c9e8e0  ldr x8,[x19, #0x1d0]
7101c9e8e4  add x9,x8,#0x1
7101c9e8e8  str x9,[x19, #0x1d0]
7101c9e8ec  ldrb w9,[x23, #0x1]
7101c9e8f0  strb w9,[x8, #0x1]
7101c9e8f4  ldr x8,[x19, #0x1d0]
7101c9e8f8  add x23,x23,#0x2
7101c9e8fc  cmp x23,x22
7101c9e900  add x8,x8,#0x1
7101c9e904  str x8,[x19, #0x1d0]
7101c9e908  b.ne 0x7101c9e8d8
7101c9e90c  b 0x7101c9eb20
7101c9e910  add x8,x20,x21
7101c9e914  b 0x7101c9eb1c
7101c9e918  orr x9,xzr,#0x3ffffffffffffffe
7101c9e91c  cmp x8,x9
7101c9e920  b.hi 0x7101c9eb78
7101c9e924  lsl x8,x8,#0x1
7101c9e928  cmp x8,#0x3
7101c9e92c  orr w9,wzr,#0x3
7101c9e930  csel x20,x8,x9,hi
7101c9e934  mov w0,#0x10
7101c9e938  mov x1,x20
7101c9e93c  bl 0x710392e290
7101c9e940  cbnz x0,0x7101c9e984
7101c9e944  adrp x8,0x7105332000
7101c9e948  ldr x0,[x8, #0xf00]
7101c9e94c  cbz x0,0x7101c9e980
7101c9e950  str wzr,[sp, #0x8]
7101c9e954  str x20,[sp, #0x10]
7101c9e958  ldr x8,[x0]
7101c9e95c  ldr x8,[x8, #0x30]
7101c9e960  add x1,sp,#0x8
7101c9e964  add x2,sp,#0x10
7101c9e968  blr x8
7101c9e96c  tbz w0,#0x0,0x7101c9e980
7101c9e970  mov w0,#0x10
7101c9e974  mov x1,x20
7101c9e978  bl 0x710392e290
7101c9e97c  cbnz x0,0x7101c9e984
7101c9e980  mov x0,xzr
7101c9e984  add x8,x0,x20
7101c9e988  str x0,[x19, #0x1c8]
7101c9e98c  str x8,[x19, #0x1d8]
7101c9e990  ldrb w8,[sp, #0x1c]
7101c9e994  strb w8,[x0]
7101c9e998  ldrb w8,[sp, #0x1d]
7101c9e99c  strb w8,[x0, #0x1]
7101c9e9a0  ldrb w8,[sp, #0x1e]
7101c9e9a4  strb w8,[x0, #0x2]
7101c9e9a8  add x8,x0,#0x3
7101c9e9ac  str x8,[x19, #0x1d0]
7101c9e9b0  ldr x0,[x19, #0x120]
7101c9e9b4  adrp x1,0x710432a000
7101c9e9b8  add x1,x1,#0xf3
7101c9e9bc  b 0x7101c9eb2c
7101c9e9c0  orr x9,xzr,#0x3ffffffffffffffe
7101c9e9c4  cmp x8,x9
7101c9e9c8  b.hi 0x7101c9eb80
7101c9e9cc  lsl x8,x8,#0x1
7101c9e9d0  cmp x8,#0x5
7101c9e9d4  mov w9,#0x5
7101c9e9d8  csel x20,x8,x9,hi
7101c9e9dc  mov w0,#0x10
7101c9e9e0  mov x1,x20
7101c9e9e4  bl 0x710392e290
7101c9e9e8  cbnz x0,0x7101c9ea2c
7101c9e9ec  adrp x8,0x7105332000
7101c9e9f0  ldr x0,[x8, #0xf00]
7101c9e9f4  cbz x0,0x7101c9ea28
7101c9e9f8  str wzr,[sp, #0x1c]
7101c9e9fc  str x20,[sp, #0x10]
7101c9ea00  ldr x8,[x0]
7101c9ea04  ldr x8,[x8, #0x30]
7101c9ea08  add x1,sp,#0x1c
7101c9ea0c  add x2,sp,#0x10
7101c9ea10  blr x8
7101c9ea14  tbz w0,#0x0,0x7101c9ea28
7101c9ea18  mov w0,#0x10
7101c9ea1c  mov x1,x20
7101c9ea20  bl 0x710392e290
7101c9ea24  cbnz x0,0x7101c9ea2c
7101c9ea28  mov x0,xzr
7101c9ea2c  add x8,x0,x20
7101c9ea30  str x0,[x19, #0x1c8]
7101c9ea34  str x8,[x19, #0x1d8]
7101c9ea38  ldrb w8,[sp, #0x8]
7101c9ea3c  strb w8,[x0]
7101c9ea40  ldrb w8,[sp, #0x9]
7101c9ea44  strb w8,[x0, #0x1]
7101c9ea48  ldrb w8,[sp, #0xa]
7101c9ea4c  strb w8,[x0, #0x2]
7101c9ea50  ldrb w8,[sp, #0xb]
7101c9ea54  strb w8,[x0, #0x3]
7101c9ea58  ldrb w8,[sp, #0xc]
7101c9ea5c  strb w8,[x0, #0x4]
7101c9ea60  add x8,x0,#0x5
7101c9ea64  str x8,[x19, #0x1d0]
7101c9ea68  ldr x0,[x19, #0x120]
7101c9ea6c  adrp x1,0x71043f0000
7101c9ea70  add x1,x1,#0xa76
7101c9ea74  b 0x7101c9eb2c
7101c9ea78  orr x9,xzr,#0x3ffffffffffffffe
7101c9ea7c  cmp x8,x9
7101c9ea80  b.hi 0x7101c9eb88
7101c9ea84  lsl x8,x8,#0x1
7101c9ea88  cmp x8,#0x5
7101c9ea8c  mov w9,#0x5
7101c9ea90  csel x20,x8,x9,hi
7101c9ea94  mov w0,#0x10
7101c9ea98  mov x1,x20
7101c9ea9c  bl 0x710392e290
7101c9eaa0  cbnz x0,0x7101c9eae4
7101c9eaa4  adrp x8,0x7105332000
7101c9eaa8  ldr x0,[x8, #0xf00]
7101c9eaac  cbz x0,0x7101c9eae0
7101c9eab0  str wzr,[sp, #0x1c]
7101c9eab4  str x20,[sp, #0x10]
7101c9eab8  ldr x8,[x0]
7101c9eabc  ldr x8,[x8, #0x30]
7101c9eac0  add x1,sp,#0x1c
7101c9eac4  add x2,sp,#0x10
7101c9eac8  blr x8
7101c9eacc  tbz w0,#0x0,0x7101c9eae0
7101c9ead0  mov w0,#0x10
7101c9ead4  mov x1,x20
7101c9ead8  bl 0x710392e290
7101c9eadc  cbnz x0,0x7101c9eae4
7101c9eae0  mov x0,xzr
7101c9eae4  add x8,x0,x20
7101c9eae8  str x0,[x19, #0x1c8]
7101c9eaec  str x8,[x19, #0x1d8]
7101c9eaf0  ldrb w8,[sp, #0x8]
7101c9eaf4  strb w8,[x0]
7101c9eaf8  ldrb w8,[sp, #0x9]
7101c9eafc  strb w8,[x0, #0x1]
7101c9eb00  ldrb w8,[sp, #0xa]
7101c9eb04  strb w8,[x0, #0x2]
7101c9eb08  ldrb w8,[sp, #0xb]
7101c9eb0c  strb w8,[x0, #0x3]
7101c9eb10  ldrb w8,[sp, #0xc]
7101c9eb14  strb w8,[x0, #0x4]
7101c9eb18  add x8,x0,#0x5
7101c9eb1c  str x8,[x19, #0x1d0]
7101c9eb20  ldr x0,[x19, #0x120]
7101c9eb24  adrp x1,0x7104318000
7101c9eb28  add x1,x1,#0xf78
7101c9eb2c  fmov s0,0x3f800000
7101c9eb30  bl 0x7103778300
7101c9eb34  add x1,x19,#0x158
7101c9eb38  mov w2,#0x4
7101c9eb3c  mov x0,x19
7101c9eb40  bl 0x7101c9f4e0
7101c9eb44  ldp x29,x30,[sp, #0x60]
7101c9eb48  ldp x20,x19,[sp, #0x50]
7101c9eb4c  ldp x22,x21,[sp, #0x40]
7101c9eb50  ldp x24,x23,[sp, #0x30]
7101c9eb54  ldp x26,x25,[sp, #0x20]
7101c9eb58  add sp,sp,#0x70
7101c9eb5c  ret
7101c9eb60  orr x20,xzr,#0x7fffffffffffffff
7101c9eb64  b 0x7101c9e468
7101c9eb68  orr x20,xzr,#0x7fffffffffffffff
7101c9eb6c  b 0x7101c9e5ec
7101c9eb70  orr x20,xzr,#0x7fffffffffffffff
7101c9eb74  b 0x7101c9e798
7101c9eb78  orr x20,xzr,#0x7fffffffffffffff
7101c9eb7c  b 0x7101c9e934
7101c9eb80  orr x20,xzr,#0x7fffffffffffffff
7101c9eb84  b 0x7101c9e9dc
7101c9eb88  orr x20,xzr,#0x7fffffffffffffff
7101c9eb8c  b 0x7101c9ea94
