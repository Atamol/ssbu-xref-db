// addr:      7102c2e110
// offset:    0x2c2e110
// name:      FUN_7102c2e110
// mangled:   
// size:      3312

7102c2e110  sub sp,sp,#0x1c0
7102c2e114  str d8,[sp, #0x150]
7102c2e118  stp x28,x27,[sp, #0x160]
7102c2e11c  stp x26,x25,[sp, #0x170]
7102c2e120  stp x24,x23,[sp, #0x180]
7102c2e124  stp x22,x21,[sp, #0x190]
7102c2e128  stp x20,x19,[sp, #0x1a0]
7102c2e12c  stp x29,x30,[sp, #0x1b0]
7102c2e130  add x29,sp,#0x1b0
7102c2e134  ldr x25,[x0, #0x8]
7102c2e138  ldr x8,[x25, #0x300]
7102c2e13c  ldr x8,[x8, #0x18]
7102c2e140  ldp x26,x8,[x8]
7102c2e144  mov x22,x0
7102c2e148  cmp x26,x8
7102c2e14c  str x8,[sp, #0x20]
7102c2e150  b.eq 0x7102c2e610
7102c2e154  add x8,sp,#0x40
7102c2e158  add x9,x8,#0xa0
7102c2e15c  adrp x21,0x7105123000
7102c2e160  add x21,x21,#0x218
7102c2e164  adrp x28,0x7105123000
7102c2e168  add x28,x28,#0x500
7102c2e16c  str x9,[sp, #0x18]
7102c2e170  add x9,x8,#0xd4
7102c2e174  str x22,[sp, #0x30]
7102c2e178  adrp x20,0x7105123000
7102c2e17c  add x20,x20,#0x7e8
7102c2e180  add x8,x8,#0x67
7102c2e184  orr x27,xzr,#0x100000000
7102c2e188  stp x8,x9,[sp, #0x8]
7102c2e18c  adrp x19,0x7104754000
7102c2e190  add x19,x19,#0x84
7102c2e194  b 0x7102c2e19c
7102c2e198  ldr x25,[x22, #0x8]
7102c2e19c  ldr x22,[x26]
7102c2e1a0  mov x23,x22
7102c2e1a4  ldrb w10,[x23, #0x58]!
7102c2e1a8  cbz w10,0x7102c2e230
7102c2e1ac  ldr x9,[x25, #0x310]
7102c2e1b0  ldp x8,x9,[x9, #0xd0]
7102c2e1b4  cmp x8,x9
7102c2e1b8  b.eq 0x7102c2e230
7102c2e1bc  mov x11,xzr
7102c2e1c0  mov w12,#0x59
7102c2e1c4  mov w13,#0xffffffff
7102c2e1c8  and w10,w10,#0xff
7102c2e1cc  sub w14,w10,#0x41
7102c2e1d0  add w15,w10,#0x20
7102c2e1d4  cmp w14,#0x1a
7102c2e1d8  csel w10,w15,w10,cc
7102c2e1dc  eor w10,w10,w13
7102c2e1e0  and w10,w10,#0xff
7102c2e1e4  ldr w14,[x19, w10, UXTW #0x2]
7102c2e1e8  ldrb w10,[x22, x12, LSL ]
7102c2e1ec  add x12,x12,#0x1
7102c2e1f0  eor w13,w14,w13, LSR #0x8
7102c2e1f4  add x11,x11,x27
7102c2e1f8  cbnz w10,0x7102c2e1c8
7102c2e1fc  mvn w10,w13
7102c2e200  and x11,x11,#0xff00000000
7102c2e204  orr x10,x11,x10
7102c2e208  ldr w11,[x8, #0x8]
7102c2e20c  cmp w11,#0x1
7102c2e210  b.hi 0x7102c2e224
7102c2e214  ldr x11,[x8]
7102c2e218  ldr x12,[x11, #0x68]
7102c2e21c  cmp x10,x12
7102c2e220  b.eq 0x7102c2e538
7102c2e224  add x8,x8,#0x10
7102c2e228  cmp x9,x8
7102c2e22c  b.ne 0x7102c2e208
7102c2e230  ldr x8,[x22, #0x128]
7102c2e234  cbz x8,0x7102c2e5fc
7102c2e238  mov w0,#0x10
7102c2e23c  mov w1,#0x68
7102c2e240  bl 0x710392e290
7102c2e244  mov x24,x0
7102c2e248  cbnz x0,0x7102c2e294
7102c2e24c  adrp x8,0x7105332000
7102c2e250  ldr x0,[x8, #0xf00]
7102c2e254  cbz x0,0x7102c2e290
7102c2e258  mov w8,#0x68
7102c2e25c  stur wzr,[x29, #-0x54]
7102c2e260  sub x1,x29,#0x54
7102c2e264  str x8,[sp, #0x40]
7102c2e268  ldr x8,[x0]
7102c2e26c  ldr x8,[x8, #0x30]
7102c2e270  add x2,sp,#0x40
7102c2e274  blr x8
7102c2e278  tbz w0,#0x0,0x7102c2e290
7102c2e27c  mov w0,#0x10
7102c2e280  mov w1,#0x68
7102c2e284  bl 0x710392e290
7102c2e288  mov x24,x0
7102c2e28c  cbnz x0,0x7102c2e294
7102c2e290  mov x24,xzr
7102c2e294  mov x0,x24
7102c2e298  mov x1,x25
7102c2e29c  mov x2,x23
7102c2e2a0  bl 0x7103142910
7102c2e2a4  cbz x24,0x7102c2e5fc
7102c2e2a8  cbz x22,0x7102c2e5fc
7102c2e2ac  ldr x8,[x22, #0x128]
7102c2e2b0  cbz x8,0x7102c2e434
7102c2e2b4  ldr x8,[sp, #0x18]
7102c2e2b8  strb wzr,[x8, #0x6]
7102c2e2bc  adrp x9,0x71052a8000
7102c2e2c0  ldr x9,[x9, #0xa80]
7102c2e2c4  strh wzr,[x8, #0x4]
7102c2e2c8  str wzr,[x8]
7102c2e2cc  adrp x8,0x71052a8000
7102c2e2d0  ldr q0,[x9]
7102c2e2d4  ldr x8,[x8, #0xa88]
7102c2e2d8  ldr q1,[x8]
7102c2e2dc  orr x8,xzr,#0x3f8000003f800000
7102c2e2e0  ext v2.16B,v1.16B,v1.16B,0x8
7102c2e2e4  fmov s3,wzr
7102c2e2e8  mov v2.S[0x1],v3.S[0x0]
7102c2e2ec  mov w9,#0x169
7102c2e2f0  stp x8,x9,[sp, #0x60]
7102c2e2f4  orr w9,wzr,#0x3f
7102c2e2f8  strh w9,[sp, #0x90]
7102c2e2fc  mov w9,#0x19
7102c2e300  mov v1.D[0x1],v2.D[0x0]
7102c2e304  strb w9,[sp, #0x94]
7102c2e308  mov x9,#0x2b3
7102c2e30c  movk x9,#0xa2c5, LSL #16
7102c2e310  movk x9,#0x15, LSL #32
7102c2e314  str x9,[sp, #0x98]
7102c2e318  mov w9,#0x1
7102c2e31c  strb w9,[sp, #0xa1]
7102c2e320  strb w9,[sp, #0xa4]
7102c2e324  orr w9,wzr,#0xe
7102c2e328  strb w9,[sp, #0xb6]
7102c2e32c  ldr x9,[sp, #0x8]
7102c2e330  stp xzr,x8,[sp, #0x70]
7102c2e334  mov x8,#0x1fca
7102c2e338  movk x8,#0x1ed9, LSL #16
7102c2e33c  orr w11,wzr,#0x3f800000
7102c2e340  movk x8,#0x3, LSL #32
7102c2e344  orr w10,wzr,#0x3
7102c2e348  str w11,[sp, #0xe8]
7102c2e34c  stp q1,q1,[sp, #0x40]
7102c2e350  str w11,[sp, #0x80]
7102c2e354  str x8,[sp, #0x88]
7102c2e358  strh w10,[sp, #0x92]
7102c2e35c  strb wzr,[sp, #0xa0]
7102c2e360  strh wzr,[sp, #0xa2]
7102c2e364  strb wzr,[sp, #0xa5]
7102c2e368  strb wzr,[sp, #0xa6]
7102c2e36c  strh wzr,[sp, #0xb4]
7102c2e370  strh wzr,[sp, #0xc0]
7102c2e374  stur xzr,[x9, #0x5]
7102c2e378  str xzr,[x9]
7102c2e37c  str x8,[sp, #0xc8]
7102c2e380  mov x8,#0xfc4f
7102c2e384  movk x8,#0x25cb, LSL #16
7102c2e388  movk x8,#0x4, LSL #32
7102c2e38c  str x8,[sp, #0xf8]
7102c2e390  mov x8,#0x7a80
7102c2e394  movk x8,#0xfb99, LSL #16
7102c2e398  movk x8,#0x7, LSL #32
7102c2e39c  str q0,[sp, #0xd0]
7102c2e3a0  str x8,[sp, #0x100]
7102c2e3a4  mov w8,#0xbf800000
7102c2e3a8  str w8,[sp, #0x110]
7102c2e3ac  ldr x8,[sp, #0x10]
7102c2e3b0  str xzr,[sp, #0xb8]
7102c2e3b4  str wzr,[sp, #0xe0]
7102c2e3b8  strh wzr,[sp, #0xe4]
7102c2e3bc  stur x11,[sp, #0xec]
7102c2e3c0  strh wzr,[sp, #0x108]
7102c2e3c4  strh wzr,[sp, #0x10c]
7102c2e3c8  stp xzr,xzr,[x8, #0x8]
7102c2e3cc  str xzr,[x8]
7102c2e3d0  mov w8,#0xffffffff
7102c2e3d4  str w8,[sp, #0x12c]
7102c2e3d8  strh w10,[sp, #0x130]
7102c2e3dc  str w11,[sp, #0x134]
7102c2e3e0  strh wzr,[sp, #0x138]
7102c2e3e4  strb wzr,[sp, #0x13a]
7102c2e3e8  ldr x8,[x24, #0x38]
7102c2e3ec  cbz x8,0x7102c2e434
7102c2e3f0  ldr x0,[x8, #0xa0]
7102c2e3f4  ldr x8,[x0]
7102c2e3f8  ldr x8,[x8, #0x68]
7102c2e3fc  add x3,sp,#0x40
7102c2e400  mov w1,wzr
7102c2e404  mov w2,wzr
7102c2e408  blr x8
7102c2e40c  ldr x8,[x24, #0x38]
7102c2e410  cbz x8,0x7102c2e434
7102c2e414  ldr x0,[x8, #0x130]
7102c2e418  ldr x8,[x0]
7102c2e41c  ldr x2,[x22, #0x128]
7102c2e420  mov w1,wzr
7102c2e424  mov w3,wzr
7102c2e428  mov w4,wzr
7102c2e42c  ldr x8,[x8, #0x108]
7102c2e430  blr x8
7102c2e434  mov x0,x24
7102c2e438  bl 0x710313ef20
7102c2e43c  orr w25,wzr,#0x18
7102c2e440  adrp x1,0x71042d4000
7102c2e444  add x1,x1,#0x664
7102c2e448  mov x0,x23
7102c2e44c  bl 0x71039c02b0
7102c2e450  cbz x0,0x7102c2e468
7102c2e454  ldr x8,[x22, #0x110]
7102c2e458  cbz x8,0x7102c2e468
7102c2e45c  ldp x9,x8,[x8]
7102c2e460  cmp x9,x8
7102c2e464  b.ne 0x7102c2e5b0
7102c2e468  ldr x1,[x21, x25, LSL #0x0]
7102c2e46c  add x25,x25,#0x18
7102c2e470  cmp x25,#0x2e8
7102c2e474  b.ne 0x7102c2e448
7102c2e478  orr w25,wzr,#0x18
7102c2e47c  adrp x1,0x71043ee000
7102c2e480  add x1,x1,#0xc98
7102c2e484  mov x0,x23
7102c2e488  bl 0x71039c02b0
7102c2e48c  cbz x0,0x7102c2e4a4
7102c2e490  ldr x8,[x22, #0x110]
7102c2e494  cbz x8,0x7102c2e4a4
7102c2e498  ldp x9,x8,[x8]
7102c2e49c  cmp x9,x8
7102c2e4a0  b.ne 0x7102c2e5b8
7102c2e4a4  ldr x1,[x28, x25, LSL #0x0]
7102c2e4a8  add x25,x25,#0x18
7102c2e4ac  cmp x25,#0x2e8
7102c2e4b0  b.ne 0x7102c2e484
7102c2e4b4  orr w25,wzr,#0x18
7102c2e4b8  adrp x1,0x710436a000
7102c2e4bc  add x1,x1,#0x6e2
7102c2e4c0  mov x0,x23
7102c2e4c4  bl 0x71039c02b0
7102c2e4c8  cbz x0,0x7102c2e4e0
7102c2e4cc  ldr x8,[x22, #0x110]
7102c2e4d0  cbz x8,0x7102c2e4e0
7102c2e4d4  ldp x9,x8,[x8]
7102c2e4d8  cmp x9,x8
7102c2e4dc  b.ne 0x7102c2e5c0
7102c2e4e0  ldr x1,[x20, x25, LSL #0x0]
7102c2e4e4  add x25,x25,#0x18
7102c2e4e8  cmp x25,#0x2b8
7102c2e4ec  b.ne 0x7102c2e4c0
7102c2e4f0  orr w25,wzr,#0x18
7102c2e4f4  adrp x1,0x710438a000
7102c2e4f8  add x1,x1,#0xe42
7102c2e4fc  mov x0,x23
7102c2e500  bl 0x71039c02b0
7102c2e504  cbz x0,0x7102c2e51c
7102c2e508  ldr x8,[x22, #0x110]
7102c2e50c  cbz x8,0x7102c2e51c
7102c2e510  ldp x9,x8,[x8]
7102c2e514  cmp x9,x8
7102c2e518  b.ne 0x7102c2e5c8
7102c2e51c  adrp x8,0x7105123000
7102c2e520  add x8,x8,#0xaa0
7102c2e524  ldr x1,[x8, x25, LSL #0x0]
7102c2e528  add x25,x25,#0x18
7102c2e52c  cmp x25,#0x3a8
7102c2e530  b.ne 0x7102c2e4fc
7102c2e534  b 0x7102c2e5fc
7102c2e538  cbz x11,0x7102c2e230
7102c2e53c  mov w0,#0x10
7102c2e540  mov w1,#0x1d0
7102c2e544  bl 0x710392e290
7102c2e548  mov x24,x0
7102c2e54c  cbnz x0,0x7102c2e598
7102c2e550  adrp x8,0x7105332000
7102c2e554  ldr x0,[x8, #0xf00]
7102c2e558  cbz x0,0x7102c2e594
7102c2e55c  mov w8,#0x1d0
7102c2e560  stur wzr,[x29, #-0x54]
7102c2e564  sub x1,x29,#0x54
7102c2e568  str x8,[sp, #0x40]
7102c2e56c  ldr x8,[x0]
7102c2e570  ldr x8,[x8, #0x30]
7102c2e574  add x2,sp,#0x40
7102c2e578  blr x8
7102c2e57c  tbz w0,#0x0,0x7102c2e594
7102c2e580  mov w0,#0x10
7102c2e584  mov w1,#0x1d0
7102c2e588  bl 0x710392e290
7102c2e58c  mov x24,x0
7102c2e590  cbnz x0,0x7102c2e598
7102c2e594  mov x24,xzr
7102c2e598  mov x0,x24
7102c2e59c  mov x1,x25
7102c2e5a0  mov x2,x22
7102c2e5a4  bl 0x71031455c0
7102c2e5a8  cbnz x24,0x7102c2e2a8
7102c2e5ac  b 0x7102c2e5fc
7102c2e5b0  mov x8,xzr
7102c2e5b4  b 0x7102c2e5cc
7102c2e5b8  mov w8,#0x1
7102c2e5bc  b 0x7102c2e5cc
7102c2e5c0  mov w8,#0x2
7102c2e5c4  b 0x7102c2e5cc
7102c2e5c8  orr w8,wzr,#0x3
7102c2e5cc  ldr x9,[sp, #0x30]
7102c2e5d0  add x23,x9,x8, LSL #0x3
7102c2e5d4  ldr x0,[x23, #0x48]
7102c2e5d8  ldr x8,[x0]
7102c2e5dc  ldr x8,[x8, #0x48]
7102c2e5e0  mov x1,x24
7102c2e5e4  blr x8
7102c2e5e8  ldr x0,[x23, #0x48]
7102c2e5ec  ldr x8,[x0]
7102c2e5f0  ldr x8,[x8, #0x40]
7102c2e5f4  mov x1,x22
7102c2e5f8  blr x8
7102c2e5fc  ldr x8,[sp, #0x20]
7102c2e600  ldr x22,[sp, #0x30]
7102c2e604  add x26,x26,#0x8
7102c2e608  cmp x26,x8
7102c2e60c  b.ne 0x7102c2e198
7102c2e610  ldr x0,[x22, #0x48]
7102c2e614  ldr x8,[x22, #0x8]
7102c2e618  ldr x1,[x8, #0x338]
7102c2e61c  ldr x8,[x0]
7102c2e620  ldr x8,[x8, #0x50]
7102c2e624  blr x8
7102c2e628  ldr x8,[x22, #0x10]
7102c2e62c  ldr x0,[x22, #0x48]
7102c2e630  ldr s0,[x8, #0x10]
7102c2e634  ldr w9,[x22, #0x20]
7102c2e638  ldr x8,[x0]
7102c2e63c  fneg s1,s0
7102c2e640  cbz w9,0x7102c2e65c
7102c2e644  fmov s2,0x3f800000
7102c2e648  ldr x8,[x8, #0x38]
7102c2e64c  fmov s0,wzr
7102c2e650  mov w1,wzr
7102c2e654  mov v3.16B,v2.16B
7102c2e658  b 0x7102c2e678
7102c2e65c  ldr x8,[x8, #0x30]
7102c2e660  fmov s2,wzr
7102c2e664  fmov s3,0x3f800000
7102c2e668  mov w1,wzr
7102c2e66c  mov v0.16B,v1.16B
7102c2e670  mov v1.16B,v2.16B
7102c2e674  mov v2.16B,v3.16B
7102c2e678  blr x8
7102c2e67c  ldr x0,[x22, #0x50]
7102c2e680  ldr x8,[x22, #0x8]
7102c2e684  ldr x1,[x8, #0x338]
7102c2e688  ldr x8,[x0]
7102c2e68c  ldr x8,[x8, #0x50]
7102c2e690  blr x8
7102c2e694  ldr x8,[x22, #0x10]
7102c2e698  ldr x0,[x22, #0x50]
7102c2e69c  ldr s0,[x8, #0x10]
7102c2e6a0  ldr w9,[x22, #0x20]
7102c2e6a4  ldr x8,[x0]
7102c2e6a8  fneg s3,s0
7102c2e6ac  cmp w9,#0x1
7102c2e6b0  b.ne 0x7102c2e6cc
7102c2e6b4  ldr x8,[x8, #0x30]
7102c2e6b8  fmov s1,wzr
7102c2e6bc  fmov s2,0x3f800000
7102c2e6c0  mov v0.16B,v3.16B
7102c2e6c4  mov w1,wzr
7102c2e6c8  b 0x7102c2e6e0
7102c2e6cc  ldr x8,[x8, #0x38]
7102c2e6d0  fmov s0,wzr
7102c2e6d4  fmov s2,0x3f800000
7102c2e6d8  mov w1,wzr
7102c2e6dc  mov v1.16B,v3.16B
7102c2e6e0  mov v3.16B,v2.16B
7102c2e6e4  blr x8
7102c2e6e8  ldr x0,[x22, #0x58]
7102c2e6ec  ldr x8,[x22, #0x8]
7102c2e6f0  ldr x1,[x8, #0x338]
7102c2e6f4  ldr x8,[x0]
7102c2e6f8  ldr x8,[x8, #0x50]
7102c2e6fc  blr x8
7102c2e700  ldr x8,[x22, #0x10]
7102c2e704  ldr x0,[x22, #0x58]
7102c2e708  ldr s0,[x8, #0x10]
7102c2e70c  ldr w9,[x22, #0x20]
7102c2e710  ldr x8,[x0]
7102c2e714  fneg s3,s0
7102c2e718  cmp w9,#0x2
7102c2e71c  b.ne 0x7102c2e738
7102c2e720  ldr x8,[x8, #0x30]
7102c2e724  fmov s1,wzr
7102c2e728  fmov s2,0x3f800000
7102c2e72c  mov v0.16B,v3.16B
7102c2e730  mov w1,wzr
7102c2e734  b 0x7102c2e74c
7102c2e738  ldr x8,[x8, #0x38]
7102c2e73c  fmov s0,wzr
7102c2e740  fmov s2,0x3f800000
7102c2e744  mov w1,wzr
7102c2e748  mov v1.16B,v3.16B
7102c2e74c  mov v3.16B,v2.16B
7102c2e750  blr x8
7102c2e754  ldr x0,[x22, #0x60]
7102c2e758  ldr x8,[x22, #0x8]
7102c2e75c  ldr x1,[x8, #0x338]
7102c2e760  ldr x8,[x0]
7102c2e764  ldr x8,[x8, #0x50]
7102c2e768  blr x8
7102c2e76c  ldr x8,[x22, #0x10]
7102c2e770  ldr x0,[x22, #0x60]
7102c2e774  ldr s0,[x8, #0x10]
7102c2e778  ldr w9,[x22, #0x20]
7102c2e77c  ldr x8,[x0]
7102c2e780  fneg s3,s0
7102c2e784  cmp w9,#0x3
7102c2e788  b.ne 0x7102c2e7a4
7102c2e78c  ldr x8,[x8, #0x30]
7102c2e790  fmov s1,wzr
7102c2e794  fmov s2,0x3f800000
7102c2e798  mov v0.16B,v3.16B
7102c2e79c  mov w1,wzr
7102c2e7a0  b 0x7102c2e7b8
7102c2e7a4  ldr x8,[x8, #0x38]
7102c2e7a8  fmov s0,wzr
7102c2e7ac  fmov s2,0x3f800000
7102c2e7b0  mov w1,wzr
7102c2e7b4  mov v1.16B,v3.16B
7102c2e7b8  mov v3.16B,v2.16B
7102c2e7bc  blr x8
7102c2e7c0  ldr x0,[x22, #0x78]
7102c2e7c4  cbz x0,0x7102c2e7f0
7102c2e7c8  ldr x8,[x0]
7102c2e7cc  ldr x1,[x22, #0x10]
7102c2e7d0  ldr x8,[x8, #0x10]
7102c2e7d4  blr x8
7102c2e7d8  ldr x0,[x22, #0x78]
7102c2e7dc  ldr x8,[x22, #0x8]
7102c2e7e0  ldr x1,[x8, #0x338]
7102c2e7e4  ldr x8,[x0]
7102c2e7e8  ldr x8,[x8, #0x48]
7102c2e7ec  blr x8
7102c2e7f0  ldr x0,[x22, #0x80]
7102c2e7f4  cbz x0,0x7102c2e820
7102c2e7f8  ldr x8,[x0]
7102c2e7fc  ldr x1,[x22, #0x10]
7102c2e800  ldr x8,[x8, #0x10]
7102c2e804  blr x8
7102c2e808  ldr x0,[x22, #0x80]
7102c2e80c  ldr x8,[x22, #0x8]
7102c2e810  ldr x1,[x8, #0x338]
7102c2e814  ldr x8,[x0]
7102c2e818  ldr x8,[x8, #0x48]
7102c2e81c  blr x8
7102c2e820  ldr x0,[x22, #0x88]
7102c2e824  cbz x0,0x7102c2e850
7102c2e828  ldr x8,[x0]
7102c2e82c  ldr x1,[x22, #0x10]
7102c2e830  ldr x8,[x8, #0x10]
7102c2e834  blr x8
7102c2e838  ldr x0,[x22, #0x88]
7102c2e83c  ldr x8,[x22, #0x8]
7102c2e840  ldr x1,[x8, #0x338]
7102c2e844  ldr x8,[x0]
7102c2e848  ldr x8,[x8, #0x48]
7102c2e84c  blr x8
7102c2e850  ldr x0,[x22, #0x90]
7102c2e854  cbz x0,0x7102c2e880
7102c2e858  ldr x8,[x0]
7102c2e85c  ldr x1,[x22, #0x10]
7102c2e860  ldr x8,[x8, #0x10]
7102c2e864  blr x8
7102c2e868  ldr x0,[x22, #0x90]
7102c2e86c  ldr x8,[x22, #0x8]
7102c2e870  ldr x1,[x8, #0x338]
7102c2e874  ldr x8,[x0]
7102c2e878  ldr x8,[x8, #0x48]
7102c2e87c  blr x8
7102c2e880  ldr x0,[x22, #0x98]
7102c2e884  cbz x0,0x7102c2e8b0
7102c2e888  ldr x8,[x0]
7102c2e88c  ldr x1,[x22, #0x10]
7102c2e890  ldr x8,[x8, #0x10]
7102c2e894  blr x8
7102c2e898  ldr x0,[x22, #0x98]
7102c2e89c  ldr x8,[x22, #0x8]
7102c2e8a0  ldr x1,[x8, #0x338]
7102c2e8a4  ldr x8,[x0]
7102c2e8a8  ldr x8,[x8, #0x48]
7102c2e8ac  blr x8
7102c2e8b0  ldr x0,[x22, #0xa0]
7102c2e8b4  cbz x0,0x7102c2e8e0
7102c2e8b8  ldr x8,[x0]
7102c2e8bc  ldr x1,[x22, #0x10]
7102c2e8c0  ldr x8,[x8, #0x10]
7102c2e8c4  blr x8
7102c2e8c8  ldr x0,[x22, #0xa0]
7102c2e8cc  ldr x8,[x22, #0x8]
7102c2e8d0  ldr x1,[x8, #0x338]
7102c2e8d4  ldr x8,[x0]
7102c2e8d8  ldr x8,[x8, #0x48]
7102c2e8dc  blr x8
7102c2e8e0  mov w1,#0x210
7102c2e8e4  mov w0,#0x10
7102c2e8e8  bl 0x710392e290
7102c2e8ec  cbnz x0,0x7102c2e934
7102c2e8f0  adrp x8,0x7105332000
7102c2e8f4  ldr x0,[x8, #0xf00]
7102c2e8f8  cbz x0,0x7102c2e930
7102c2e8fc  mov w8,#0x210
7102c2e900  stur wzr,[x29, #-0x54]
7102c2e904  sub x1,x29,#0x54
7102c2e908  str x8,[sp, #0x40]
7102c2e90c  ldr x8,[x0]
7102c2e910  ldr x8,[x8, #0x30]
7102c2e914  add x2,sp,#0x40
7102c2e918  blr x8
7102c2e91c  tbz w0,#0x0,0x7102c2e930
7102c2e920  mov w1,#0x210
7102c2e924  mov w0,#0x10
7102c2e928  bl 0x710392e290
7102c2e92c  cbnz x0,0x7102c2e934
7102c2e930  mov x0,xzr
7102c2e934  ldr x9,[x22, #0x8]
7102c2e938  orr x10,xzr,#0x4000000000000000
7102c2e93c  stur xzr,[x0, #0x34]
7102c2e940  str x10,[x0, #0x28]
7102c2e944  adrp x10,0x7105124000
7102c2e948  add x10,x10,#0x18
7102c2e94c  stp xzr,xzr,[x0, #0x90]
7102c2e950  orr x8,xzr,#0x3f80000000000000
7102c2e954  stp xzr,xzr,[x0, #0x80]
7102c2e958  mov w13,#0xbf800000
7102c2e95c  add x11,x0,#0x19c
7102c2e960  add x12,x0,#0x1ac
7102c2e964  stur x8,[x0, #0x14]
7102c2e968  orr w8,wzr,#0x3f800000
7102c2e96c  stur x8,[x0, #0x1c]
7102c2e970  str w8,[x0, #0x30]
7102c2e974  strh wzr,[x0, #0x3c]
7102c2e978  str xzr,[x0, #0xb0]
7102c2e97c  str wzr,[x0, #0x178]
7102c2e980  strh wzr,[x0, #0x188]
7102c2e984  str xzr,[x0, #0x180]
7102c2e988  str w13,[x0, #0x18c]
7102c2e98c  str w8,[x0, #0x190]
7102c2e990  str w8,[x0, #0x194]
7102c2e994  str w13,[x0, #0x198]
7102c2e998  stp x10,x9,[x0]
7102c2e99c  mov w9,#0x1
7102c2e9a0  mov x10,#0x3f800000
7102c2e9a4  movk x10,#0x42b4, LSL #48
7102c2e9a8  strb w9,[x0, #0x3e]
7102c2e9ac  mov x9,#0x3f800000
7102c2e9b0  movk x9,#0x4387, LSL #48
7102c2e9b4  stp x9,x10,[x0, #0xa0]
7102c2e9b8  mov w9,#0x420c0000
7102c2e9bc  add x10,x0,#0x194
7102c2e9c0  str w9,[x0, #0x150]
7102c2e9c4  str w9,[x0, #0x170]
7102c2e9c8  orr w9,wzr,#0x3f000000
7102c2e9cc  str w9,[x0, #0x174]
7102c2e9d0  mov w9,#0xffffffff
7102c2e9d4  str w9,[x0, #0x17c]
7102c2e9d8  add x9,x0,#0x18c
7102c2e9dc  stp xzr,xzr,[x0, #0x70]
7102c2e9e0  stp xzr,xzr,[x0, #0x60]
7102c2e9e4  stp xzr,xzr,[x0, #0x50]
7102c2e9e8  stp xzr,xzr,[x0, #0x40]
7102c2e9ec  stp xzr,xzr,[x0, #0x140]
7102c2e9f0  stp xzr,xzr,[x0, #0x130]
7102c2e9f4  stp xzr,xzr,[x0, #0x120]
7102c2e9f8  stp xzr,xzr,[x0, #0x108]
7102c2e9fc  stp xzr,xzr,[x0, #0xf8]
7102c2ea00  stp xzr,xzr,[x0, #0xe8]
7102c2ea04  stp xzr,xzr,[x0, #0xd8]
7102c2ea08  stp xzr,xzr,[x0, #0xc8]
7102c2ea0c  stp xzr,xzr,[x0, #0xb8]
7102c2ea10  stp xzr,xzr,[x0, #0x160]
7102c2ea14  ldr x8,[x9]
7102c2ea18  ldr x9,[x10]
7102c2ea1c  add x10,x0,#0x1a4
7102c2ea20  str x8,[x11]
7102c2ea24  add x8,x0,#0x1b4
7102c2ea28  str x9,[x10]
7102c2ea2c  str xzr,[x8]
7102c2ea30  mov w8,#0xc1a00000
7102c2ea34  str xzr,[x12]
7102c2ea38  str w8,[x0, #0x1bc]
7102c2ea3c  mov w8,#0x41a00000
7102c2ea40  str w8,[x0, #0x1c0]
7102c2ea44  mov w8,#0x41200000
7102c2ea48  str w8,[x0, #0x1c4]
7102c2ea4c  mov w8,#0xc1200000
7102c2ea50  str w8,[x0, #0x1c8]
7102c2ea54  strb wzr,[x0, #0x1d0]
7102c2ea58  str xzr,[x0, #0x200]
7102c2ea5c  str wzr,[x0, #0x1f8]
7102c2ea60  stp xzr,xzr,[x0, #0x1e8]
7102c2ea64  stp xzr,xzr,[x0, #0x1d8]
7102c2ea68  ldr x8,[x22, #0xa8]
7102c2ea6c  str x0,[x22, #0xa8]
7102c2ea70  cbz x8,0x7102c2ea88
7102c2ea74  ldr x9,[x8]
7102c2ea78  ldr x9,[x9, #0x8]
7102c2ea7c  mov x0,x8
7102c2ea80  blr x9
7102c2ea84  ldr x0,[x22, #0xa8]
7102c2ea88  bl 0x7102c30f40
7102c2ea8c  ldr x9,[x22, #0x8]
7102c2ea90  ldr x8,[x22, #0xa8]
7102c2ea94  ldr x9,[x9, #0x338]
7102c2ea98  str x9,[x8, #0x200]
7102c2ea9c  ldr x8,[x22, #0xa8]
7102c2eaa0  cbz x8,0x7102c2ed90
7102c2eaa4  stp xzr,xzr,[sp, #0xb0]
7102c2eaa8  movi v1.2D,#0x0
7102c2eaac  stp xzr,xzr,[sp, #0xa0]
7102c2eab0  ldr x8,[x22, #0x10]
7102c2eab4  mov v0.16B,v1.16B
7102c2eab8  add x9,x8,#0xc8
7102c2eabc  add x19,sp,#0x40
7102c2eac0  ld1 {v0.S}[0],[x9]
7102c2eac4  add x9,x8,#0xcc
7102c2eac8  ld1 {v0.S}[1],[x9]
7102c2eacc  add x9,x8,#0xd0
7102c2ead0  ld1 {v0.S}[2],[x9]
7102c2ead4  add x9,x8,#0xd4
7102c2ead8  str q0,[sp, #0x40]
7102c2eadc  mov v0.16B,v1.16B
7102c2eae0  ld1 {v0.S}[0],[x9]
7102c2eae4  add x9,x8,#0xd8
7102c2eae8  ld1 {v0.S}[1],[x9]
7102c2eaec  add x9,x8,#0xdc
7102c2eaf0  ld1 {v0.S}[2],[x9]
7102c2eaf4  str q0,[sp, #0x50]
7102c2eaf8  mov v0.16B,v1.16B
7102c2eafc  add x9,x8,#0xe0
7102c2eb00  ld1 {v0.S}[0],[x9]
7102c2eb04  add x9,x8,#0xe4
7102c2eb08  ld1 {v0.S}[1],[x9]
7102c2eb0c  add x9,x8,#0xe8
7102c2eb10  ld1 {v0.S}[2],[x9]
7102c2eb14  add x9,x8,#0xec
7102c2eb18  str q0,[sp, #0x60]
7102c2eb1c  mov v0.16B,v1.16B
7102c2eb20  ld1 {v0.S}[0],[x9]
7102c2eb24  add x9,x8,#0xf0
7102c2eb28  ld1 {v0.S}[1],[x9]
7102c2eb2c  add x9,x8,#0xf4
7102c2eb30  ld1 {v0.S}[2],[x9]
7102c2eb34  str q0,[sp, #0x70]
7102c2eb38  mov v0.16B,v1.16B
7102c2eb3c  add x9,x8,#0xf8
7102c2eb40  ld1 {v0.S}[0],[x9]
7102c2eb44  add x9,x8,#0xfc
7102c2eb48  ld1 {v0.S}[1],[x9]
7102c2eb4c  add x9,x8,#0x100
7102c2eb50  ld1 {v0.S}[2],[x9]
7102c2eb54  str q0,[sp, #0x80]
7102c2eb58  ldr w9,[x8, #0x104]
7102c2eb5c  str w9,[sp, #0x90]
7102c2eb60  ldr w9,[x8, #0x114]
7102c2eb64  str w9,[sp, #0x94]
7102c2eb68  ldr w9,[x8, #0x108]
7102c2eb6c  str w9,[sp, #0x98]
7102c2eb70  ldr w9,[x8, #0x118]
7102c2eb74  str w9,[sp, #0x9c]
7102c2eb78  ldr w9,[x8, #0x10c]
7102c2eb7c  str w9,[sp, #0xa0]
7102c2eb80  ldr w9,[x8, #0x110]
7102c2eb84  str w9,[sp, #0xa4]
7102c2eb88  ldp x9,x8,[x8, #0x128]
7102c2eb8c  sub x8,x8,x9
7102c2eb90  ldp x9,x10,[sp, #0xa8]
7102c2eb94  asr x8,x8,#0x2
7102c2eb98  sub x11,x10,x9
7102c2eb9c  asr x11,x11,#0x2
7102c2eba0  subs x1,x8,x11
7102c2eba4  b.ls 0x7102c2ebb8
7102c2eba8  add x0,x19,#0x68
7102c2ebac  bl 0x71003ca470
7102c2ebb0  ldp x9,x10,[sp, #0xa8]
7102c2ebb4  b 0x7102c2ebc4
7102c2ebb8  b.cs 0x7102c2ebc4
7102c2ebbc  add x10,x9,x8, LSL #0x2
7102c2ebc0  str x10,[sp, #0xb0]
7102c2ebc4  add x8,x19,#0x50
7102c2ebc8  cmp x10,x9
7102c2ebcc  b.eq 0x7102c2ec08
7102c2ebd0  mov x11,xzr
7102c2ebd4  mov w10,#0x1
7102c2ebd8  ldr x12,[x22, #0x10]
7102c2ebdc  ldr x12,[x12, #0x128]
7102c2ebe0  lsl x11,x11,#0x2
7102c2ebe4  ldr w12,[x12, x11, LSL #0x0]
7102c2ebe8  str w12,[x9, x11, LSL #0x0]
7102c2ebec  mov w11,w10
7102c2ebf0  ldp x9,x12,[sp, #0xa8]
7102c2ebf4  sub x12,x12,x9
7102c2ebf8  asr x12,x12,#0x2
7102c2ebfc  add w10,w10,#0x1
7102c2ec00  cmp x12,x11
7102c2ec04  b.hi 0x7102c2ebd8
7102c2ec08  ldp q1,q2,[sp, #0x40]
7102c2ec0c  movi d16,#0x0
7102c2ec10  mov v0.16B,v16.16B
7102c2ec14  ldr x20,[x22, #0xa8]
7102c2ec18  mov x19,x20
7102c2ec1c  mov v0.S[0x0],v1.S[0x2]
7102c2ec20  mov v1.D[0x1],v0.D[0x0]
7102c2ec24  mov v0.16B,v16.16B
7102c2ec28  mov v0.S[0x0],v2.S[0x2]
7102c2ec2c  mov v3.16B,v16.16B
7102c2ec30  str q1,[x19, #0x50]!
7102c2ec34  mov v2.D[0x1],v0.D[0x0]
7102c2ec38  ldr q0,[sp, #0x60]
7102c2ec3c  mov v3.S[0x0],v0.S[0x2]
7102c2ec40  mov v0.D[0x1],v3.D[0x0]
7102c2ec44  mov v3.16B,v16.16B
7102c2ec48  stp q2,q0,[x20, #0x60]
7102c2ec4c  ldr q0,[sp, #0x70]
7102c2ec50  mov v3.S[0x0],v0.S[0x2]
7102c2ec54  add x21,x20,#0xa0
7102c2ec58  mov v0.D[0x1],v3.D[0x0]
7102c2ec5c  mov v3.16B,v16.16B
7102c2ec60  str q0,[x20, #0x80]
7102c2ec64  ldr q0,[sp, #0x80]
7102c2ec68  mov v3.S[0x0],v0.S[0x2]
7102c2ec6c  mov v0.D[0x1],v3.D[0x0]
7102c2ec70  str q0,[x20, #0x90]
7102c2ec74  ldr x9,[x8, #0x8]
7102c2ec78  str x9,[x20, #0xa8]
7102c2ec7c  ldr x9,[x8]
7102c2ec80  ldr x8,[x8, #0x10]
7102c2ec84  str x8,[x20, #0xb0]
7102c2ec88  add x8,sp,#0x40
7102c2ec8c  cmp x19,x8
7102c2ec90  str x9,[x20, #0xa0]
7102c2ec94  b.eq 0x7102c2ecac
7102c2ec98  ldp x1,x2,[sp, #0xa8]
7102c2ec9c  add x0,x20,#0xb8
7102c2eca0  bl 0x71003ca640
7102c2eca4  ldp q1,q2,[x20, #0x50]
7102c2eca8  movi d16,#0x0
7102c2ecac  movi v7.2D,#0x0
7102c2ecb0  dup s0,v1.S[0x1]
7102c2ecb4  fsub s17,s1,s2
7102c2ecb8  dup s4,v2.S[0x1]
7102c2ecbc  mov v3.16B,v7.16B
7102c2ecc0  mov v3.S[0x0],v17.S[0x0]
7102c2ecc4  fsub s18,s0,s4
7102c2ecc8  mov v3.S[0x1],v18.S[0x0]
7102c2eccc  fmul v0.4S,v3.4S,v3.4S
7102c2ecd0  faddp v0.2S,v0.2S,v0.2S
7102c2ecd4  frsqrte v5.2S,v0.2S
7102c2ecd8  fmul v6.2S,v0.2S,v5.2S
7102c2ecdc  frsqrts v6.2S,v6.2S,v5.2S
7102c2ece0  fmul v5.2S,v5.2S,v6.2S
7102c2ece4  fmul v6.2S,v0.2S,v5.2S
7102c2ece8  frsqrts v6.2S,v6.2S,v5.2S
7102c2ecec  fmul v5.2S,v5.2S,v6.2S
7102c2ecf0  fcmeq v4.2S,v0.2S,#0.0
7102c2ecf4  mvn v4.8B,v4.8B
7102c2ecf8  fmul v5.2S,v0.2S,v5.2S
7102c2ecfc  and v5.8B,v5.8B,v4.8B
7102c2ed00  ldr s4,[x21]
7102c2ed04  fdiv s5,s5,s4
7102c2ed08  fcvtzu w8,s5
7102c2ed0c  ucvtf s8,w8
7102c2ed10  fcmp s0,#0.0
7102c2ed14  b.eq 0x7102c2ed60
7102c2ed18  fsqrt s1,s0
7102c2ed1c  fcmp s1,s1
7102c2ed20  b.vc 0x7102c2ed3c
7102c2ed24  stp q18,q17,[sp, #0x20]
7102c2ed28  bl 0x71039c0840
7102c2ed2c  ldp q18,q17,[sp, #0x20]
7102c2ed30  movi d16,#0x0
7102c2ed34  movi v7.2D,#0x0
7102c2ed38  mov v1.16B,v0.16B
7102c2ed3c  fmov s0,0x3f800000
7102c2ed40  fdiv s0,s0,s1
7102c2ed44  fmul s1,s17,s0
7102c2ed48  fmul s0,s18,s0
7102c2ed4c  mov v7.S[0x0],v1.S[0x0]
7102c2ed50  ldp q1,q2,[x20, #0x50]
7102c2ed54  mov v7.S[0x1],v0.S[0x0]
7102c2ed58  ldr s4,[x20, #0xa0]
7102c2ed5c  mov v3.16B,v7.16B
7102c2ed60  fmul s0,s4,s8
7102c2ed64  mov v2.D[0x1],v16.D[0x0]
7102c2ed68  fmul v0.4S,v3.4S,v0.S[0x0]
7102c2ed6c  fadd v0.4S,v2.4S,v0.4S
7102c2ed70  mov v0.S[0x2],v1.S[0x2]
7102c2ed74  fmov s1,wzr
7102c2ed78  mov v0.S[0x3],v1.S[0x0]
7102c2ed7c  str q0,[x19]
7102c2ed80  ldr x0,[sp, #0xa8]
7102c2ed84  cbz x0,0x7102c2ed90
7102c2ed88  str x0,[sp, #0xb0]
7102c2ed8c  bl 0x710392eb40
7102c2ed90  adrp x8,0x71052b9000
7102c2ed94  ldr x0,[x8, #0x390]
7102c2ed98  cbz x0,0x7102c2edd0
7102c2ed9c  orr w8,wzr,#0x3f800000
7102c2eda0  str w8,[sp, #0x48]
7102c2eda4  mov x8,#0xbf800000
7102c2eda8  stp xzr,xzr,[sp, #0x50]
7102c2edac  movk x8,#0x2, LSL #32
7102c2edb0  stp x8,xzr,[sp, #0x60]
7102c2edb4  mov w8,#0x4
7102c2edb8  add x1,sp,#0x40
7102c2edbc  stur xzr,[sp, #0x77]
7102c2edc0  str xzr,[sp, #0x70]
7102c2edc4  str x8,[sp, #0x40]
7102c2edc8  bl 0x710056c360
7102c2edcc  str w0,[x22, #0xb0]
7102c2edd0  ldr w1,[x22, #0x20]
7102c2edd4  mov x0,x22
7102c2edd8  bl 0x7102c2f5f0
7102c2eddc  ldr d8,[sp, #0x150]
7102c2ede0  ldp x29,x30,[sp, #0x1b0]
7102c2ede4  ldp x20,x19,[sp, #0x1a0]
7102c2ede8  ldp x22,x21,[sp, #0x190]
7102c2edec  ldp x24,x23,[sp, #0x180]
7102c2edf0  ldp x26,x25,[sp, #0x170]
7102c2edf4  ldp x28,x27,[sp, #0x160]
7102c2edf8  add sp,sp,#0x1c0
7102c2edfc  ret
