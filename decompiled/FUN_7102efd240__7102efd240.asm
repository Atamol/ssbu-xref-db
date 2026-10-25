// addr:      7102efd240
// offset:    0x2efd240
// name:      FUN_7102efd240
// mangled:   
// size:      3272

7102efd240  str d8,[sp, #-0x30]!
7102efd244  stp x20,x19,[sp, #0x10]
7102efd248  stp x29,x30,[sp, #0x20]
7102efd24c  add x29,sp,#0x20
7102efd250  ldr w8,[x0, #0x24]
7102efd254  mov v8.16B,v0.16B
7102efd258  mov x19,x0
7102efd25c  cbz w8,0x7102efd960
7102efd260  ldr s0,[x19, #0x28]
7102efd264  fsub s0,s0,s8
7102efd268  sub w8,w8,#0x2
7102efd26c  cmp w8,#0x3
7102efd270  str s0,[x19, #0x28]
7102efd274  b.hi 0x7102efd67c
7102efd278  adrp x9,0x7104520000
7102efd27c  add x9,x9,#0xa28
7102efd280  ldrsw x8,[x9, x8, LSL #0x2]
7102efd284  add x8,x8,x9
7102efd288  br x8
7102efd28c  ldr w8,[x19, #0x8]
7102efd290  cmn w8,#0x1
7102efd294  b.ne 0x7102efd2a4
7102efd298  mov x0,x19
7102efd29c  bl 0x7102666c30
7102efd2a0  ldr w8,[x19, #0x8]
7102efd2a4  ldp w9,w10,[x19, #0xc]
7102efd2a8  ldr x11,[x19, #0x2b0]
7102efd2ac  mov w12,#0xffffffff
7102efd2b0  mov w20,#0x1
7102efd2b4  str w8,[x19, #0x18]
7102efd2b8  str w8,[x19, #0x2c]
7102efd2bc  strb w20,[x19, #0x14]
7102efd2c0  stp w10,w12,[x19, #0xc]
7102efd2c4  str w9,[x19, #0x8]
7102efd2c8  ldr x8,[x11, #0x340]
7102efd2cc  ldr x9,[x19, #0x2b8]
7102efd2d0  ldr s0,[x9, #0x1c0]
7102efd2d4  ldr s1,[x9, #0x1c4]
7102efd2d8  fsub s1,s1,s0
7102efd2dc  ldp w9,w10,[x8]
7102efd2e0  eor w9,w9,w9, LSL #0xb
7102efd2e4  ldp w11,w12,[x8, #0x8]
7102efd2e8  stp w10,w11,[x8]
7102efd2ec  eor w9,w9,w9, LSR #0x8
7102efd2f0  eor w9,w9,w12
7102efd2f4  eor w9,w9,w12, LSR #0x13
7102efd2f8  ucvtf s2,w9
7102efd2fc  adrp x13,0x7104473000
7102efd300  stp w12,w9,[x8, #0x8]
7102efd304  ldr w8,[x19, #0x2c]
7102efd308  str w8,[x19, #0x68]
7102efd30c  ldr x8,[x19, #0x50]
7102efd310  str wzr,[x19, #0x70]
7102efd314  str wzr,[x19, #0x78]
7102efd318  fmul s1,s1,s2
7102efd31c  ldr s2,[x13, #0x710]
7102efd320  fmul s4,s1,s2
7102efd324  fadd s0,s0,s4
7102efd328  str s0,[x19, #0x28]
7102efd32c  cbz x8,0x7102efd378
7102efd330  add x0,x8,#0x108
7102efd334  strb w20,[x8, #0x110]
7102efd338  bl 0x71025e9d50
7102efd33c  ldr x8,[x19, #0x50]
7102efd340  cbz x8,0x7102efd378
7102efd344  ldrb w9,[x8, #0xe0]
7102efd348  cbz w9,0x7102efd358
7102efd34c  ldr x9,[x8, #0xc8]
7102efd350  cbz x9,0x7102efd358
7102efd354  strh wzr,[x9, #0x30]
7102efd358  ldr x9,[x8, #0xd8]
7102efd35c  cbz x9,0x7102efd364
7102efd360  strb wzr,[x9, #0x21]
7102efd364  ldrb w9,[x8, #0xe0]
7102efd368  cbz w9,0x7102efd378
7102efd36c  ldr x8,[x8, #0xb0]
7102efd370  mov w9,#0x1
7102efd374  strb w9,[x8, #0x10]
7102efd378  ldr x8,[x19, #0x58]
7102efd37c  strb w20,[x19, #0xbc]
7102efd380  ldr x8,[x8, #0x338]
7102efd384  ldr x8,[x8]
7102efd388  ldr x0,[x8, #0x8]
7102efd38c  cbz x0,0x7102efd3a4
7102efd390  ldr x8,[x0]
7102efd394  ldr w2,[x19, #0x98]
7102efd398  mov w1,#0x9
7102efd39c  ldr x8,[x8, #0x58]
7102efd3a0  blr x8
7102efd3a4  ldr x0,[x19, #0xd8]
7102efd3a8  mov w8,#0x1
7102efd3ac  str w8,[x19, #0x48]
7102efd3b0  cbz x0,0x7102efd3b8
7102efd3b4  bl 0x710313ef20
7102efd3b8  ldr w8,[x19, #0x2c]
7102efd3bc  str w8,[x19, #0x108]
7102efd3c0  ldr x8,[x19, #0xf0]
7102efd3c4  str wzr,[x19, #0x110]
7102efd3c8  str wzr,[x19, #0x118]
7102efd3cc  cbz x8,0x7102efd41c
7102efd3d0  add x0,x8,#0x108
7102efd3d4  mov w9,#0x1
7102efd3d8  strb w9,[x8, #0x110]
7102efd3dc  bl 0x71025e9d50
7102efd3e0  ldr x8,[x19, #0xf0]
7102efd3e4  cbz x8,0x7102efd41c
7102efd3e8  ldrb w9,[x8, #0xe0]
7102efd3ec  cbz w9,0x7102efd3fc
7102efd3f0  ldr x9,[x8, #0xc8]
7102efd3f4  cbz x9,0x7102efd3fc
7102efd3f8  strh wzr,[x9, #0x30]
7102efd3fc  ldr x9,[x8, #0xd8]
7102efd400  cbz x9,0x7102efd408
7102efd404  strb wzr,[x9, #0x21]
7102efd408  ldrb w9,[x8, #0xe0]
7102efd40c  cbz w9,0x7102efd41c
7102efd410  ldr x8,[x8, #0xb0]
7102efd414  mov w9,#0x1
7102efd418  strb w9,[x8, #0x10]
7102efd41c  ldr x8,[x19, #0xf8]
7102efd420  mov w20,#0x1
7102efd424  strb w20,[x19, #0x15c]
7102efd428  ldr x8,[x8, #0x338]
7102efd42c  ldr x8,[x8]
7102efd430  ldr x0,[x8, #0x8]
7102efd434  cbz x0,0x7102efd44c
7102efd438  ldr x8,[x0]
7102efd43c  ldr w2,[x19, #0x138]
7102efd440  mov w1,#0x9
7102efd444  ldr x8,[x8, #0x58]
7102efd448  blr x8
7102efd44c  ldr x0,[x19, #0x178]
7102efd450  str w20,[x19, #0xe8]
7102efd454  cbz x0,0x7102efd45c
7102efd458  bl 0x710313ef20
7102efd45c  orr w8,wzr,#0x3
7102efd460  b 0x7102efd678
7102efd464  fcmp s0,#0.0
7102efd468  b.hi 0x7102efd67c
7102efd46c  ldr x8,[x19, #0x2b0]
7102efd470  ldr x8,[x8, #0x340]
7102efd474  ldr x9,[x19, #0x2b8]
7102efd478  ldr s0,[x9, #0x1c8]
7102efd47c  ldr s1,[x9, #0x1cc]
7102efd480  fsub s1,s1,s0
7102efd484  ldp w9,w10,[x8]
7102efd488  str w10,[x8]
7102efd48c  ldp w10,w11,[x8, #0x8]
7102efd490  eor w9,w9,w9, LSL #0xb
7102efd494  eor w9,w9,w9, LSR #0x8
7102efd498  eor w9,w9,w11
7102efd49c  eor w9,w9,w11, LSR #0x13
7102efd4a0  ucvtf s2,w9
7102efd4a4  stp w10,w11,[x8, #0x4]
7102efd4a8  str w9,[x8, #0xc]
7102efd4ac  adrp x8,0x7104473000
7102efd4b0  fmul s1,s1,s2
7102efd4b4  ldr s2,[x8, #0x710]
7102efd4b8  ldr w8,[x19, #0x48]
7102efd4bc  fmul s4,s1,s2
7102efd4c0  fadd s0,s0,s4
7102efd4c4  str s0,[x19, #0x28]
7102efd4c8  cbz w8,0x7102efd60c
7102efd4cc  cmp w8,#0x1
7102efd4d0  b.eq 0x7102efd5c8
7102efd4d4  cmp w8,#0x3
7102efd4d8  b.eq 0x7102efd60c
7102efd4dc  fmov s0,wzr
7102efd4e0  b 0x7102efd5d0
7102efd4e4  fcmp s0,#0.0
7102efd4e8  b.hi 0x7102efd67c
7102efd4ec  mov w8,#0x1
7102efd4f0  b 0x7102efd678
7102efd4f4  ldr w8,[x19, #0x48]
7102efd4f8  cbz w8,0x7102efd558
7102efd4fc  cmp w8,#0x1
7102efd500  b.eq 0x7102efd514
7102efd504  cmp w8,#0x3
7102efd508  b.eq 0x7102efd558
7102efd50c  fmov s0,wzr
7102efd510  b 0x7102efd51c
7102efd514  ldp s0,s1,[x19, #0x6c]
7102efd518  fsub s0,s0,s1
7102efd51c  mov w8,#0x42f00000
7102efd520  str w8,[x19, #0x78]
7102efd524  ldr x8,[x19, #0x58]
7102efd528  str s0,[x19, #0x70]
7102efd52c  ldr x8,[x8, #0x338]
7102efd530  ldr x8,[x8]
7102efd534  ldr x0,[x8, #0x8]
7102efd538  cbz x0,0x7102efd550
7102efd53c  ldr x8,[x0]
7102efd540  ldr w2,[x19, #0x98]
7102efd544  mov w1,#0xa
7102efd548  ldr x8,[x8, #0x58]
7102efd54c  blr x8
7102efd550  orr w8,wzr,#0x3
7102efd554  str w8,[x19, #0x48]
7102efd558  ldr w8,[x19, #0xe8]
7102efd55c  cbz w8,0x7102efd5c0
7102efd560  cmp w8,#0x1
7102efd564  b.eq 0x7102efd578
7102efd568  cmp w8,#0x3
7102efd56c  b.eq 0x7102efd5c0
7102efd570  fmov s0,wzr
7102efd574  b 0x7102efd584
7102efd578  ldr s0,[x19, #0x10c]
7102efd57c  ldr s1,[x19, #0x110]
7102efd580  fsub s0,s0,s1
7102efd584  mov w8,#0x42f00000
7102efd588  str w8,[x19, #0x118]
7102efd58c  ldr x8,[x19, #0xf8]
7102efd590  str s0,[x19, #0x110]
7102efd594  ldr x8,[x8, #0x338]
7102efd598  ldr x8,[x8]
7102efd59c  ldr x0,[x8, #0x8]
7102efd5a0  cbz x0,0x7102efd5b8
7102efd5a4  ldr x8,[x0]
7102efd5a8  ldr w2,[x19, #0x138]
7102efd5ac  mov w1,#0xa
7102efd5b0  ldr x8,[x8, #0x58]
7102efd5b4  blr x8
7102efd5b8  orr w8,wzr,#0x3
7102efd5bc  str w8,[x19, #0xe8]
7102efd5c0  orr w8,wzr,#0x6
7102efd5c4  b 0x7102efd678
7102efd5c8  ldp s0,s1,[x19, #0x6c]
7102efd5cc  fsub s0,s0,s1
7102efd5d0  mov w8,#0x42f00000
7102efd5d4  str w8,[x19, #0x78]
7102efd5d8  ldr x8,[x19, #0x58]
7102efd5dc  str s0,[x19, #0x70]
7102efd5e0  ldr x8,[x8, #0x338]
7102efd5e4  ldr x8,[x8]
7102efd5e8  ldr x0,[x8, #0x8]
7102efd5ec  cbz x0,0x7102efd604
7102efd5f0  ldr x8,[x0]
7102efd5f4  ldr w2,[x19, #0x98]
7102efd5f8  mov w1,#0xa
7102efd5fc  ldr x8,[x8, #0x58]
7102efd600  blr x8
7102efd604  orr w8,wzr,#0x3
7102efd608  str w8,[x19, #0x48]
7102efd60c  ldr w8,[x19, #0xe8]
7102efd610  cbz w8,0x7102efd674
7102efd614  cmp w8,#0x1
7102efd618  b.eq 0x7102efd62c
7102efd61c  cmp w8,#0x3
7102efd620  b.eq 0x7102efd674
7102efd624  fmov s0,wzr
7102efd628  b 0x7102efd638
7102efd62c  ldr s0,[x19, #0x10c]
7102efd630  ldr s1,[x19, #0x110]
7102efd634  fsub s0,s0,s1
7102efd638  mov w8,#0x42f00000
7102efd63c  str w8,[x19, #0x118]
7102efd640  ldr x8,[x19, #0xf8]
7102efd644  str s0,[x19, #0x110]
7102efd648  ldr x8,[x8, #0x338]
7102efd64c  ldr x8,[x8]
7102efd650  ldr x0,[x8, #0x8]
7102efd654  cbz x0,0x7102efd66c
7102efd658  ldr x8,[x0]
7102efd65c  ldr w2,[x19, #0x138]
7102efd660  mov w1,#0xa
7102efd664  ldr x8,[x8, #0x58]
7102efd668  blr x8
7102efd66c  orr w8,wzr,#0x3
7102efd670  str w8,[x19, #0xe8]
7102efd674  mov w8,#0x4
7102efd678  str w8,[x19, #0x24]
7102efd67c  mov v0.16B,v8.16B
7102efd680  add x20,x19,#0x40
7102efd684  mov x0,x20
7102efd688  bl 0x7102efbb50
7102efd68c  mov v0.16B,v8.16B
7102efd690  mov x0,x20
7102efd694  bl 0x7102efbdc0
7102efd698  ldr w8,[x19, #0x48]
7102efd69c  cbz w8,0x7102efd728
7102efd6a0  ldr s0,[x19, #0x78]
7102efd6a4  fadd s0,s0,s8
7102efd6a8  cmp w8,#0x3
7102efd6ac  str s0,[x19, #0x78]
7102efd6b0  b.eq 0x7102efd6e0
7102efd6b4  cmp w8,#0x2
7102efd6b8  b.eq 0x7102efd6fc
7102efd6bc  cmp w8,#0x1
7102efd6c0  b.ne 0x7102efd71c
7102efd6c4  adrp x8,0x7104473000
7102efd6c8  ldr s1,[x8, #0x5fc]
7102efd6cc  fcmp s0,s1
7102efd6d0  b.lt 0x7102efd71c
7102efd6d4  adrp x8,0x7104471000
7102efd6d8  ldr s1,[x8, #0xba4]
7102efd6dc  b 0x7102efd714
7102efd6e0  adrp x8,0x7104472000
7102efd6e4  ldr s1,[x8, #0x108]
7102efd6e8  fcmp s0,s1
7102efd6ec  b.lt 0x7102efd71c
7102efd6f0  adrp x8,0x7104473000
7102efd6f4  ldr s1,[x8, #0xb6c]
7102efd6f8  b 0x7102efd714
7102efd6fc  adrp x8,0x7104473000
7102efd700  ldr s1,[x8, #0x814]
7102efd704  fcmp s0,s1
7102efd708  b.lt 0x7102efd71c
7102efd70c  adrp x8,0x7104473000
7102efd710  ldr s1,[x8, #0x928]
7102efd714  fadd s0,s0,s1
7102efd718  str s0,[x19, #0x78]
7102efd71c  ldr x0,[x19, #0x50]
7102efd720  mov w1,#0x1
7102efd724  bl 0x710260fdd0
7102efd728  mov v0.16B,v8.16B
7102efd72c  add x20,x19,#0xe0
7102efd730  mov x0,x20
7102efd734  bl 0x7102efbb50
7102efd738  mov v0.16B,v8.16B
7102efd73c  mov x0,x20
7102efd740  bl 0x7102efbdc0
7102efd744  ldr w8,[x19, #0xe8]
7102efd748  cbz w8,0x7102efd7d4
7102efd74c  ldr s0,[x19, #0x118]
7102efd750  fadd s0,s0,s8
7102efd754  cmp w8,#0x3
7102efd758  str s0,[x19, #0x118]
7102efd75c  b.eq 0x7102efd78c
7102efd760  cmp w8,#0x2
7102efd764  b.eq 0x7102efd7a8
7102efd768  cmp w8,#0x1
7102efd76c  b.ne 0x7102efd7c8
7102efd770  adrp x8,0x7104473000
7102efd774  ldr s1,[x8, #0x5fc]
7102efd778  fcmp s0,s1
7102efd77c  b.lt 0x7102efd7c8
7102efd780  adrp x8,0x7104471000
7102efd784  ldr s1,[x8, #0xba4]
7102efd788  b 0x7102efd7c0
7102efd78c  adrp x8,0x7104472000
7102efd790  ldr s1,[x8, #0x108]
7102efd794  fcmp s0,s1
7102efd798  b.lt 0x7102efd7c8
7102efd79c  adrp x8,0x7104473000
7102efd7a0  ldr s1,[x8, #0xb6c]
7102efd7a4  b 0x7102efd7c0
7102efd7a8  adrp x8,0x7104473000
7102efd7ac  ldr s1,[x8, #0x814]
7102efd7b0  fcmp s0,s1
7102efd7b4  b.lt 0x7102efd7c8
7102efd7b8  adrp x8,0x7104473000
7102efd7bc  ldr s1,[x8, #0x928]
7102efd7c0  fadd s0,s0,s1
7102efd7c4  str s0,[x19, #0x118]
7102efd7c8  ldr x0,[x19, #0xf0]
7102efd7cc  mov w1,#0x1
7102efd7d0  bl 0x710260fdd0
7102efd7d4  ldrb w9,[x19, #0x20]
7102efd7d8  ldrb w8,[x19, #0x9c]
7102efd7dc  cbz w9,0x7102efd824
7102efd7e0  cbnz w8,0x7102efd868
7102efd7e4  ldrb w8,[x19, #0x13c]
7102efd7e8  cbnz w8,0x7102efd868
7102efd7ec  ldr x20,[x19, #0x2b0]
7102efd7f0  ldr x8,[x20, #0x9a8]
7102efd7f4  cbz x8,0x7102efd81c
7102efd7f8  ldp x0,x1,[x8]
7102efd7fc  adrp x2,0x71042a1000
7102efd800  add x2,x2,#0x676
7102efd804  bl 0x71025f5420
7102efd808  ldr x8,[x20, #0x9a8]
7102efd80c  ldp x0,x1,[x8]
7102efd810  adrp x2,0x7104441000
7102efd814  add x2,x2,#0xec7
7102efd818  bl 0x71025f55b0
7102efd81c  strb wzr,[x19, #0x20]
7102efd820  b 0x7102efd868
7102efd824  cbnz w8,0x7102efd830
7102efd828  ldrb w8,[x19, #0x13c]
7102efd82c  cbz w8,0x7102efd868
7102efd830  ldr x20,[x19, #0x2b0]
7102efd834  ldr x8,[x20, #0x9a8]
7102efd838  cbz x8,0x7102efd860
7102efd83c  ldp x0,x1,[x8]
7102efd840  adrp x2,0x71042a1000
7102efd844  add x2,x2,#0x676
7102efd848  bl 0x71025f55b0
7102efd84c  ldr x8,[x20, #0x9a8]
7102efd850  ldp x0,x1,[x8]
7102efd854  adrp x2,0x7104441000
7102efd858  add x2,x2,#0xec7
7102efd85c  bl 0x71025f5420
7102efd860  mov w8,#0x1
7102efd864  strb w8,[x19, #0x20]
7102efd868  ldr w8,[x19, #0x48]
7102efd86c  ldrb w9,[x19, #0x21]
7102efd870  cmp w8,#0x2
7102efd874  cbz w9,0x7102efd8dc
7102efd878  b.ne 0x7102efd888
7102efd87c  ldr w8,[x19, #0xe8]
7102efd880  cmp w8,#0x2
7102efd884  b.eq 0x7102efd960
7102efd888  ldr x20,[x19, #0x2b0]
7102efd88c  ldr x8,[x20, #0x9a8]
7102efd890  cbz x8,0x7102efd8cc
7102efd894  ldp x0,x1,[x8]
7102efd898  adrp x2,0x71042a1000
7102efd89c  add x2,x2,#0x67e
7102efd8a0  bl 0x71025f55b0
7102efd8a4  ldr x8,[x20, #0x9a8]
7102efd8a8  ldp x0,x1,[x8]
7102efd8ac  adrp x2,0x71043bc000
7102efd8b0  add x2,x2,#0xb6c
7102efd8b4  bl 0x71025f55b0
7102efd8b8  ldr x8,[x20, #0x9a8]
7102efd8bc  ldp x0,x1,[x8]
7102efd8c0  adrp x2,0x710436a000
7102efd8c4  add x2,x2,#0x9e7
7102efd8c8  bl 0x71025f55b0
7102efd8cc  strb wzr,[x19, #0x21]
7102efd8d0  ldr w8,[x19, #0x30]
7102efd8d4  cbnz w8,0x7102efd968
7102efd8d8  b 0x7102efda50
7102efd8dc  b.ne 0x7102efd960
7102efd8e0  ldr w8,[x19, #0xe8]
7102efd8e4  cmp w8,#0x2
7102efd8e8  b.ne 0x7102efd960
7102efd8ec  ldr w8,[x19, #0x2c]
7102efd8f0  cmp w8,#0x2
7102efd8f4  b.eq 0x7102efd920
7102efd8f8  cmp w8,#0x1
7102efd8fc  b.eq 0x7102efd93c
7102efd900  cbnz w8,0x7102efd958
7102efd904  ldr x8,[x19, #0x2b0]
7102efd908  ldr x8,[x8, #0x9a8]
7102efd90c  cbz x8,0x7102efd958
7102efd910  ldp x0,x1,[x8]
7102efd914  adrp x2,0x71042a1000
7102efd918  add x2,x2,#0x67e
7102efd91c  b 0x7102efd954
7102efd920  ldr x8,[x19, #0x2b0]
7102efd924  ldr x8,[x8, #0x9a8]
7102efd928  cbz x8,0x7102efd958
7102efd92c  ldp x0,x1,[x8]
7102efd930  adrp x2,0x710436a000
7102efd934  add x2,x2,#0x9e7
7102efd938  b 0x7102efd954
7102efd93c  ldr x8,[x19, #0x2b0]
7102efd940  ldr x8,[x8, #0x9a8]
7102efd944  cbz x8,0x7102efd958
7102efd948  ldp x0,x1,[x8]
7102efd94c  adrp x2,0x71043bc000
7102efd950  add x2,x2,#0xb6c
7102efd954  bl 0x71025f5420
7102efd958  mov w8,#0x1
7102efd95c  strb w8,[x19, #0x21]
7102efd960  ldr w8,[x19, #0x30]
7102efd964  cbz w8,0x7102efda50
7102efd968  ldr s0,[x19, #0x34]
7102efd96c  fsub s0,s0,s8
7102efd970  sub w8,w8,#0x2
7102efd974  cmp w8,#0x4
7102efd978  str s0,[x19, #0x34]
7102efd97c  b.hi 0x7102efded8
7102efd980  adrp x9,0x7104520000
7102efd984  add x9,x9,#0xa38
7102efd988  ldrsw x8,[x9, x8, LSL #0x2]
7102efd98c  add x8,x8,x9
7102efd990  br x8
7102efd994  ldr x8,[x19, #0x2b0]
7102efd998  ldr x8,[x8, #0x340]
7102efd99c  ldp w9,w10,[x8]
7102efd9a0  eor w9,w9,w9, LSL #0xb
7102efd9a4  str w10,[x8]
7102efd9a8  ldp w10,w11,[x8, #0x8]
7102efd9ac  eor w9,w9,w9, LSR #0x8
7102efd9b0  eor w9,w9,w11
7102efd9b4  eor w9,w9,w11, LSR #0x13
7102efd9b8  stp w10,w11,[x8, #0x4]
7102efd9bc  str w9,[x8, #0xc]
7102efd9c0  tbnz w9,#0x0,0x7102efdae0
7102efd9c4  ldr x8,[x19, #0x250]
7102efd9c8  str wzr,[x19, #0x26c]
7102efd9cc  cbz x8,0x7102efda1c
7102efd9d0  add x0,x8,#0x108
7102efd9d4  mov w9,#0x1
7102efd9d8  strb w9,[x8, #0x110]
7102efd9dc  bl 0x71025e9d50
7102efd9e0  ldr x8,[x19, #0x250]
7102efd9e4  cbz x8,0x7102efda1c
7102efd9e8  ldrb w9,[x8, #0xe0]
7102efd9ec  cbz w9,0x7102efd9fc
7102efd9f0  ldr x9,[x8, #0xc8]
7102efd9f4  cbz x9,0x7102efd9fc
7102efd9f8  strh wzr,[x9, #0x30]
7102efd9fc  ldr x9,[x8, #0xd8]
7102efda00  cbz x9,0x7102efda08
7102efda04  strb wzr,[x9, #0x21]
7102efda08  ldrb w9,[x8, #0xe0]
7102efda0c  cbz w9,0x7102efda1c
7102efda10  ldr x8,[x8, #0xb0]
7102efda14  mov w9,#0x1
7102efda18  strb w9,[x8, #0x10]
7102efda1c  ldr x8,[x19, #0x258]
7102efda20  ldr x8,[x8, #0x338]
7102efda24  ldr x8,[x8]
7102efda28  ldr x0,[x8, #0x8]
7102efda2c  cbz x0,0x7102efda44
7102efda30  ldr x8,[x0]
7102efda34  ldr w2,[x19, #0x2a0]
7102efda38  mov w1,#0x2
7102efda3c  ldr x8,[x8, #0x58]
7102efda40  blr x8
7102efda44  add x8,x19,#0x248
7102efda48  orr w9,wzr,#0x3
7102efda4c  b 0x7102efdd2c
7102efda50  ldp x29,x30,[sp, #0x20]
7102efda54  ldp x20,x19,[sp, #0x10]
7102efda58  ldr d8,[sp], #0x30
7102efda5c  ret
7102efda60  fcmp s0,#0.0
7102efda64  b.hi 0x7102efded8
7102efda68  ldr w8,[x19, #0x248]
7102efda6c  cbz w8,0x7102efde78
7102efda70  cmp w8,#0x1
7102efda74  b.eq 0x7102efdd94
7102efda78  cmp w8,#0x3
7102efda7c  b.eq 0x7102efde78
7102efda80  fmov s0,wzr
7102efda84  b 0x7102efdda0
7102efda88  fcmp s0,#0.0
7102efda8c  b.hi 0x7102efded8
7102efda90  ldr w8,[x19, #0x188]
7102efda94  cbz w8,0x7102efde18
7102efda98  cmp w8,#0x1
7102efda9c  b.eq 0x7102efddd8
7102efdaa0  cmp w8,#0x3
7102efdaa4  b.eq 0x7102efde18
7102efdaa8  fmov s0,wzr
7102efdaac  b 0x7102efdde4
7102efdab0  fcmp s0,#0.0
7102efdab4  b.hi 0x7102efded8
7102efdab8  mov w8,#0x1
7102efdabc  b 0x7102efded4
7102efdac0  ldr w8,[x19, #0x188]
7102efdac4  cbz w8,0x7102efdb44
7102efdac8  cmp w8,#0x1
7102efdacc  b.eq 0x7102efdb04
7102efdad0  cmp w8,#0x3
7102efdad4  b.eq 0x7102efdb44
7102efdad8  fmov s0,wzr
7102efdadc  b 0x7102efdb10
7102efdae0  ldr x8,[x19, #0x190]
7102efdae4  str wzr,[x19, #0x1b4]
7102efdae8  cbz x8,0x7102efdc0c
7102efdaec  add x0,x8,#0x108
7102efdaf0  mov w9,#0x1
7102efdaf4  strb w9,[x8, #0x110]
7102efdaf8  bl 0x71025e9d50
7102efdafc  ldr x0,[x19, #0x190]
7102efdb00  b 0x7102efdc10
7102efdb04  ldr s0,[x19, #0x1ac]
7102efdb08  ldr s1,[x19, #0x1b4]
7102efdb0c  fsub s0,s0,s1
7102efdb10  ldr x8,[x19, #0x198]
7102efdb14  str s0,[x19, #0x1b4]
7102efdb18  ldr x8,[x8, #0x338]
7102efdb1c  ldr x8,[x8]
7102efdb20  ldr x0,[x8, #0x8]
7102efdb24  cbz x0,0x7102efdb3c
7102efdb28  ldr x8,[x0]
7102efdb2c  ldr w2,[x19, #0x1d8]
7102efdb30  mov w1,#0x5
7102efdb34  ldr x8,[x8, #0x58]
7102efdb38  blr x8
7102efdb3c  orr w8,wzr,#0x3
7102efdb40  str w8,[x19, #0x188]
7102efdb44  ldr w8,[x19, #0x1e8]
7102efdb48  cbz w8,0x7102efdba4
7102efdb4c  cmp w8,#0x1
7102efdb50  b.eq 0x7102efdb64
7102efdb54  cmp w8,#0x3
7102efdb58  b.eq 0x7102efdba4
7102efdb5c  fmov s0,wzr
7102efdb60  b 0x7102efdb70
7102efdb64  ldr s0,[x19, #0x20c]
7102efdb68  ldr s1,[x19, #0x214]
7102efdb6c  fsub s0,s0,s1
7102efdb70  ldr x8,[x19, #0x1f8]
7102efdb74  str s0,[x19, #0x214]
7102efdb78  ldr x8,[x8, #0x338]
7102efdb7c  ldr x8,[x8]
7102efdb80  ldr x0,[x8, #0x8]
7102efdb84  cbz x0,0x7102efdb9c
7102efdb88  ldr x8,[x0]
7102efdb8c  ldr w2,[x19, #0x238]
7102efdb90  mov w1,#0x5
7102efdb94  ldr x8,[x8, #0x58]
7102efdb98  blr x8
7102efdb9c  orr w8,wzr,#0x3
7102efdba0  str w8,[x19, #0x1e8]
7102efdba4  ldr w8,[x19, #0x248]
7102efdba8  cbz w8,0x7102efdc04
7102efdbac  cmp w8,#0x1
7102efdbb0  b.eq 0x7102efdbc4
7102efdbb4  cmp w8,#0x3
7102efdbb8  b.eq 0x7102efdc04
7102efdbbc  fmov s0,wzr
7102efdbc0  b 0x7102efdbd0
7102efdbc4  ldr s0,[x19, #0x268]
7102efdbc8  ldr s1,[x19, #0x26c]
7102efdbcc  fsub s0,s0,s1
7102efdbd0  ldr x8,[x19, #0x258]
7102efdbd4  str s0,[x19, #0x26c]
7102efdbd8  ldr x8,[x8, #0x338]
7102efdbdc  ldr x8,[x8]
7102efdbe0  ldr x0,[x8, #0x8]
7102efdbe4  cbz x0,0x7102efdbfc
7102efdbe8  ldr x8,[x0]
7102efdbec  ldr w2,[x19, #0x2a0]
7102efdbf0  orr w1,wzr,#0x3
7102efdbf4  ldr x8,[x8, #0x58]
7102efdbf8  blr x8
7102efdbfc  orr w8,wzr,#0x3
7102efdc00  str w8,[x19, #0x248]
7102efdc04  orr w8,wzr,#0x7
7102efdc08  b 0x7102efded4
7102efdc0c  mov x0,xzr
7102efdc10  fmov s0,wzr
7102efdc14  mov w1,#0x1
7102efdc18  bl 0x710260fdd0
7102efdc1c  ldr x8,[x19, #0x190]
7102efdc20  cbz x8,0x7102efdc5c
7102efdc24  ldrb w9,[x8, #0xe0]
7102efdc28  cbz w9,0x7102efdc3c
7102efdc2c  ldr x9,[x8, #0xc8]
7102efdc30  cbz x9,0x7102efdc3c
7102efdc34  mov w10,#0x101
7102efdc38  strh w10,[x9, #0x30]
7102efdc3c  ldr x9,[x8, #0xd8]
7102efdc40  cbz x9,0x7102efdc4c
7102efdc44  mov w10,#0x1
7102efdc48  strb w10,[x9, #0x21]
7102efdc4c  ldrb w9,[x8, #0xe0]
7102efdc50  cbz w9,0x7102efdc5c
7102efdc54  ldr x8,[x8, #0xb0]
7102efdc58  strb wzr,[x8, #0x10]
7102efdc5c  ldr x8,[x19, #0x198]
7102efdc60  ldr x8,[x8, #0x338]
7102efdc64  ldr x8,[x8]
7102efdc68  ldr x0,[x8, #0x8]
7102efdc6c  cbz x0,0x7102efdc84
7102efdc70  ldr x8,[x0]
7102efdc74  ldr w2,[x19, #0x1d8]
7102efdc78  mov w1,#0x4
7102efdc7c  ldr x8,[x8, #0x58]
7102efdc80  blr x8
7102efdc84  ldr x9,[x19, #0x1f0]
7102efdc88  mov w8,#0x1
7102efdc8c  str w8,[x19, #0x188]
7102efdc90  str wzr,[x19, #0x214]
7102efdc94  cbz x9,0x7102efdcac
7102efdc98  add x0,x9,#0x108
7102efdc9c  strb w8,[x9, #0x110]
7102efdca0  bl 0x71025e9d50
7102efdca4  ldr x0,[x19, #0x1f0]
7102efdca8  b 0x7102efdcb0
7102efdcac  mov x0,xzr
7102efdcb0  fmov s0,wzr
7102efdcb4  mov w1,#0x1
7102efdcb8  bl 0x710260fdd0
7102efdcbc  ldr x8,[x19, #0x1f0]
7102efdcc0  cbz x8,0x7102efdcfc
7102efdcc4  ldrb w9,[x8, #0xe0]
7102efdcc8  cbz w9,0x7102efdcdc
7102efdccc  ldr x9,[x8, #0xc8]
7102efdcd0  cbz x9,0x7102efdcdc
7102efdcd4  mov w10,#0x101
7102efdcd8  strh w10,[x9, #0x30]
7102efdcdc  ldr x9,[x8, #0xd8]
7102efdce0  cbz x9,0x7102efdcec
7102efdce4  mov w10,#0x1
7102efdce8  strb w10,[x9, #0x21]
7102efdcec  ldrb w9,[x8, #0xe0]
7102efdcf0  cbz w9,0x7102efdcfc
7102efdcf4  ldr x8,[x8, #0xb0]
7102efdcf8  strb wzr,[x8, #0x10]
7102efdcfc  ldr x8,[x19, #0x1f8]
7102efdd00  ldr x8,[x8, #0x338]
7102efdd04  ldr x8,[x8]
7102efdd08  ldr x0,[x8, #0x8]
7102efdd0c  cbz x0,0x7102efdd24
7102efdd10  ldr x8,[x0]
7102efdd14  ldr w2,[x19, #0x238]
7102efdd18  mov w1,#0x4
7102efdd1c  ldr x8,[x8, #0x58]
7102efdd20  blr x8
7102efdd24  add x8,x19,#0x1e8
7102efdd28  mov w9,#0x4
7102efdd2c  mov w10,#0x1
7102efdd30  str w10,[x8]
7102efdd34  ldr x8,[x19, #0x2b0]
7102efdd38  str w9,[x19, #0x30]
7102efdd3c  ldr x8,[x8, #0x340]
7102efdd40  ldr x9,[x19, #0x2b8]
7102efdd44  ldr s0,[x9, #0x1c0]
7102efdd48  ldr s1,[x9, #0x1c4]
7102efdd4c  fsub s1,s1,s0
7102efdd50  ldp w9,w10,[x8]
7102efdd54  str w10,[x8]
7102efdd58  ldp w10,w11,[x8, #0x8]
7102efdd5c  eor w9,w9,w9, LSL #0xb
7102efdd60  eor w9,w9,w9, LSR #0x8
7102efdd64  eor w9,w9,w11
7102efdd68  eor w9,w9,w11, LSR #0x13
7102efdd6c  ucvtf s2,w9
7102efdd70  stp w10,w11,[x8, #0x4]
7102efdd74  str w9,[x8, #0xc]
7102efdd78  adrp x8,0x7104473000
7102efdd7c  fmul s1,s1,s2
7102efdd80  ldr s2,[x8, #0x710]
7102efdd84  fmul s4,s1,s2
7102efdd88  fadd s0,s0,s4
7102efdd8c  str s0,[x19, #0x34]
7102efdd90  b 0x7102efded8
7102efdd94  ldr s0,[x19, #0x268]
7102efdd98  ldr s1,[x19, #0x26c]
7102efdd9c  fsub s0,s0,s1
7102efdda0  ldr x8,[x19, #0x258]
7102efdda4  str s0,[x19, #0x26c]
7102efdda8  ldr x8,[x8, #0x338]
7102efddac  ldr x8,[x8]
7102efddb0  ldr x0,[x8, #0x8]
7102efddb4  cbz x0,0x7102efddcc
7102efddb8  ldr x8,[x0]
7102efddbc  ldr w2,[x19, #0x2a0]
7102efddc0  orr w1,wzr,#0x3
7102efddc4  ldr x8,[x8, #0x58]
7102efddc8  blr x8
7102efddcc  orr w8,wzr,#0x3
7102efddd0  str w8,[x19, #0x248]
7102efddd4  b 0x7102efde78
7102efddd8  ldr s0,[x19, #0x1ac]
7102efdddc  ldr s1,[x19, #0x1b4]
7102efdde0  fsub s0,s0,s1
7102efdde4  ldr x8,[x19, #0x198]
7102efdde8  str s0,[x19, #0x1b4]
7102efddec  ldr x8,[x8, #0x338]
7102efddf0  ldr x8,[x8]
7102efddf4  ldr x0,[x8, #0x8]
7102efddf8  cbz x0,0x7102efde10
7102efddfc  ldr x8,[x0]
7102efde00  ldr w2,[x19, #0x1d8]
7102efde04  mov w1,#0x5
7102efde08  ldr x8,[x8, #0x58]
7102efde0c  blr x8
7102efde10  orr w8,wzr,#0x3
7102efde14  str w8,[x19, #0x188]
7102efde18  ldr w8,[x19, #0x1e8]
7102efde1c  cbz w8,0x7102efde78
7102efde20  cmp w8,#0x1
7102efde24  b.eq 0x7102efde38
7102efde28  cmp w8,#0x3
7102efde2c  b.eq 0x7102efde78
7102efde30  fmov s0,wzr
7102efde34  b 0x7102efde44
7102efde38  ldr s0,[x19, #0x20c]
7102efde3c  ldr s1,[x19, #0x214]
7102efde40  fsub s0,s0,s1
7102efde44  ldr x8,[x19, #0x1f8]
7102efde48  str s0,[x19, #0x214]
7102efde4c  ldr x8,[x8, #0x338]
7102efde50  ldr x8,[x8]
7102efde54  ldr x0,[x8, #0x8]
7102efde58  cbz x0,0x7102efde70
7102efde5c  ldr x8,[x0]
7102efde60  ldr w2,[x19, #0x238]
7102efde64  mov w1,#0x5
7102efde68  ldr x8,[x8, #0x58]
7102efde6c  blr x8
7102efde70  orr w8,wzr,#0x3
7102efde74  str w8,[x19, #0x1e8]
7102efde78  ldr x8,[x19, #0x2b0]
7102efde7c  ldr x8,[x8, #0x340]
7102efde80  ldr x9,[x19, #0x2b8]
7102efde84  ldr s0,[x9, #0x1c8]
7102efde88  ldr s1,[x9, #0x1cc]
7102efde8c  fsub s1,s1,s0
7102efde90  ldp w9,w10,[x8]
7102efde94  str w10,[x8]
7102efde98  ldp w10,w11,[x8, #0x8]
7102efde9c  eor w9,w9,w9, LSL #0xb
7102efdea0  eor w9,w9,w9, LSR #0x8
7102efdea4  eor w9,w9,w11
7102efdea8  eor w9,w9,w11, LSR #0x13
7102efdeac  ucvtf s2,w9
7102efdeb0  stp w10,w11,[x8, #0x4]
7102efdeb4  str w9,[x8, #0xc]
7102efdeb8  adrp x8,0x7104473000
7102efdebc  fmul s1,s1,s2
7102efdec0  ldr s2,[x8, #0x710]
7102efdec4  mov w8,#0x5
7102efdec8  fmul s4,s1,s2
7102efdecc  fadd s0,s0,s4
7102efded0  str s0,[x19, #0x34]
7102efded4  str w8,[x19, #0x30]
7102efded8  mov v0.16B,v8.16B
7102efdedc  add x0,x19,#0x180
7102efdee0  bl 0x7102efa8b0
7102efdee4  mov v0.16B,v8.16B
7102efdee8  add x0,x19,#0x1e0
7102efdeec  bl 0x7102efa8b0
7102efdef0  add x0,x19,#0x240
7102efdef4  ldp x29,x30,[sp, #0x20]
7102efdef8  ldp x20,x19,[sp, #0x10]
7102efdefc  mov v0.16B,v8.16B
7102efdf00  ldr d8,[sp], #0x30
7102efdf04  b 0x7102efa0d0
