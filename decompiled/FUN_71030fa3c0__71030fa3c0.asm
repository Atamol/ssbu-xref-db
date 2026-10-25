// addr:      71030fa3c0
// offset:    0x30fa3c0
// name:      FUN_71030fa3c0
// mangled:   
// size:      2464

71030fa3c0  sub sp,sp,#0x120
71030fa3c4  str d10,[sp, #0xa0]
71030fa3c8  stp d9,d8,[sp, #0xb0]
71030fa3cc  stp x28,x27,[sp, #0xc0]
71030fa3d0  stp x26,x25,[sp, #0xd0]
71030fa3d4  stp x24,x23,[sp, #0xe0]
71030fa3d8  stp x22,x21,[sp, #0xf0]
71030fa3dc  stp x20,x19,[sp, #0x100]
71030fa3e0  stp x29,x30,[sp, #0x110]
71030fa3e4  add x29,sp,#0x110
71030fa3e8  ldr x20,[x0, #0x4960]
71030fa3ec  mov v9.16B,v0.16B
71030fa3f0  mov x19,x0
71030fa3f4  cbz x20,0x71030fa4f4
71030fa3f8  ldrb w8,[x20, #0x18]
71030fa3fc  cbz w8,0x71030fa42c
71030fa400  ldr s0,[x20, #0x14]
71030fa404  fsub s0,s0,s9
71030fa408  fcmp s0,#0.0
71030fa40c  str s0,[x20, #0x14]
71030fa410  b.pl 0x71030fa438
71030fa414  mov w8,#0x100
71030fa418  str wzr,[x20, #0x14]
71030fa41c  strh w8,[x20, #0x18]
71030fa420  ldrb w8,[x20, #0x24]
71030fa424  cbnz w8,0x71030fa440
71030fa428  b 0x71030fa46c
71030fa42c  ldrb w8,[x20, #0x19]
71030fa430  cbz w8,0x71030fa438
71030fa434  strb wzr,[x20, #0x19]
71030fa438  ldrb w8,[x20, #0x24]
71030fa43c  cbz w8,0x71030fa46c
71030fa440  ldr s0,[x20, #0x20]
71030fa444  fsub s0,s0,s9
71030fa448  fcmp s0,#0.0
71030fa44c  str s0,[x20, #0x20]
71030fa450  b.pl 0x71030fa478
71030fa454  mov w8,#0x100
71030fa458  str wzr,[x20, #0x20]
71030fa45c  strh w8,[x20, #0x24]
71030fa460  ldrb w8,[x20, #0x8]
71030fa464  cbnz w8,0x71030fa480
71030fa468  b 0x71030fa4f4
71030fa46c  ldrb w8,[x20, #0x25]
71030fa470  cbz w8,0x71030fa478
71030fa474  strb wzr,[x20, #0x25]
71030fa478  ldrb w8,[x20, #0x8]
71030fa47c  cbz w8,0x71030fa4f4
71030fa480  ldr s0,[x20, #0xc]
71030fa484  fadd s0,s0,s9
71030fa488  str s0,[x20, #0xc]
71030fa48c  ldr s0,[x20, #0x14]
71030fa490  fcmp s0,#0.0
71030fa494  b.ne 0x71030fa4c0
71030fa498  ldrb w8,[x20, #0x19]
71030fa49c  cbz w8,0x71030fa4c0
71030fa4a0  ldr x8,[x20]
71030fa4a4  ldp x9,x8,[x8, #0x8]
71030fa4a8  ldr x9,[x9, #0x318]
71030fa4ac  ldr s0,[x8, #0x148]
71030fa4b0  ldr x0,[x9, #0x10]
71030fa4b4  adrp x1,0x7104348000
71030fa4b8  add x1,x1,#0x815
71030fa4bc  bl 0x71025f74f0
71030fa4c0  ldr s0,[x20, #0x20]
71030fa4c4  fcmp s0,#0.0
71030fa4c8  b.ne 0x71030fa4f4
71030fa4cc  ldrb w8,[x20, #0x25]
71030fa4d0  cbz w8,0x71030fa4f4
71030fa4d4  ldr x8,[x20]
71030fa4d8  ldp x9,x8,[x8, #0x8]
71030fa4dc  ldr x9,[x9, #0x318]
71030fa4e0  ldr s0,[x8, #0x150]
71030fa4e4  ldr x0,[x9, #0x10]
71030fa4e8  adrp x1,0x710426e000
71030fa4ec  add x1,x1,#0x3ca
71030fa4f0  bl 0x71025f74f0
71030fa4f4  mov v0.16B,v9.16B
71030fa4f8  add x0,x19,#0x2f0
71030fa4fc  bl 0x71030eff80
71030fa500  ldr x8,[x19, #0x8]
71030fa504  ldr x0,[x8, #0x308]
71030fa508  add x1,x19,#0x1c
71030fa50c  bl 0x71026249a0
71030fa510  ldr x8,[x19, #0x8]
71030fa514  fmov s8,wzr
71030fa518  mov v0.16B,v8.16B
71030fa51c  ldr x0,[x8, #0x308]
71030fa520  bl 0x7102625190
71030fa524  ldr x9,[x19, #0x43c8]
71030fa528  ldr x8,[x19, #0x43c0]
71030fa52c  cmp x9,x8
71030fa530  b.eq 0x71030fa56c
71030fa534  mov x9,xzr
71030fa538  mov w20,#0x1
71030fa53c  ldr x0,[x8, x9, LSL #0x3]
71030fa540  ldr x8,[x0]
71030fa544  ldr x8,[x8, #0x10]
71030fa548  blr x8
71030fa54c  ldr x10,[x19, #0x43c8]
71030fa550  ldr x8,[x19, #0x43c0]
71030fa554  sub x10,x10,x8
71030fa558  mov w9,w20
71030fa55c  add w20,w20,#0x1
71030fa560  asr x10,x10,#0x3
71030fa564  cmp x10,x9
71030fa568  b.hi 0x71030fa53c
71030fa56c  ldr x8,[x19]
71030fa570  ldr x8,[x8, #0xa8]
71030fa574  mov v0.16B,v9.16B
71030fa578  mov x0,x19
71030fa57c  blr x8
71030fa580  ldr x9,[x19, #0x43c8]
71030fa584  ldr x8,[x19, #0x43c0]
71030fa588  cmp x9,x8
71030fa58c  b.eq 0x71030fa5cc
71030fa590  mov x9,xzr
71030fa594  mov w20,#0x1
71030fa598  ldr x0,[x8, x9, LSL #0x3]
71030fa59c  ldr x8,[x0]
71030fa5a0  ldr x8,[x8, #0x18]
71030fa5a4  mov v0.16B,v9.16B
71030fa5a8  blr x8
71030fa5ac  ldr x10,[x19, #0x43c8]
71030fa5b0  ldr x8,[x19, #0x43c0]
71030fa5b4  sub x10,x10,x8
71030fa5b8  mov w9,w20
71030fa5bc  add w20,w20,#0x1
71030fa5c0  asr x10,x10,#0x3
71030fa5c4  cmp x10,x9
71030fa5c8  b.hi 0x71030fa598
71030fa5cc  ldr x8,[x19, #0x4960]
71030fa5d0  cbz x8,0x71030fa608
71030fa5d4  ldrb w9,[x8, #0x8]
71030fa5d8  cbz w9,0x71030fa608
71030fa5dc  ldrb w9,[x8, #0x18]
71030fa5e0  cbnz w9,0x71030fa608
71030fa5e4  ldrb w9,[x8, #0x24]
71030fa5e8  cbz w9,0x71030fa608
71030fa5ec  ldr x9,[x8]
71030fa5f0  ldr x9,[x9, #0x8]
71030fa5f4  ldr x9,[x9, #0x318]
71030fa5f8  ldp s0,s1,[x8, #0xc]
71030fa5fc  fsub s0,s0,s1
71030fa600  ldr x9,[x9, #0x10]
71030fa604  str s0,[x9, #0x48]
71030fa608  ldr x8,[x19, #0x8]
71030fa60c  ldr x8,[x8, #0x300]
71030fa610  ldr x8,[x8, #0x18]
71030fa614  ldp x9,x10,[x8]
71030fa618  cmp x9,x10
71030fa61c  b.eq 0x71030fa9a0
71030fa620  mov x11,#0x5511
71030fa624  movk x11,#0xb5ac, LSL #16
71030fa628  movk x11,#0x15, LSL #32
71030fa62c  ldr x8,[x9], #0x8
71030fa630  ldr x12,[x8, #0xa0]
71030fa634  and x12,x12,#0xffffffffff
71030fa638  cmp x12,x11
71030fa63c  b.eq 0x71030fa64c
71030fa640  cmp x10,x9
71030fa644  b.ne 0x71030fa62c
71030fa648  b 0x71030fa9a0
71030fa64c  ldr x20,[x8, #0x130]
71030fa650  cbz x20,0x71030fa9a0
71030fa654  ldr x9,[x19, #0x1278]
71030fa658  cbz x9,0x71030fa834
71030fa65c  ldrb w9,[x9, #0x110]
71030fa660  cbz w9,0x71030fa834
71030fa664  adrp x10,0x7104468000
71030fa668  adrp x11,0x710446a000
71030fa66c  ldr q1,[x11, #0x360]
71030fa670  ldr q0,[x10, #0xca0]
71030fa674  adrp x12,0x7104465000
71030fa678  adrp x13,0x710446a000
71030fa67c  stp q0,q1,[sp, #0x50]
71030fa680  ldr q0,[x12, #0x6b0]
71030fa684  ldr q1,[x13, #0x350]
71030fa688  mov w9,#0x1268
71030fa68c  add x2,x8,#0xcc
71030fa690  add x0,x19,x9
71030fa694  add x1,sp,#0x50
71030fa698  stp q0,q1,[sp, #0x70]
71030fa69c  bl 0x71030ef790
71030fa6a0  tbz w0,#0x0,0x71030fa848
71030fa6a4  movi d17,#0x0
71030fa6a8  ldr q0,[sp, #0x70]
71030fa6ac  mov v3.16B,v17.16B
71030fa6b0  ldp q1,q2,[sp, #0x50]
71030fa6b4  mov v3.S[0x0],v0.S[0x0]
71030fa6b8  zip1 v4.2S,v1.2S,v2.2S
71030fa6bc  mov v4.D[0x1],v3.D[0x0]
71030fa6c0  fmul v3.4S,v4.4S,v4.4S
71030fa6c4  ext v5.16B,v3.16B,v3.16B,0x8
71030fa6c8  fadd v3.2S,v5.2S,v3.2S
71030fa6cc  faddp v3.2S,v3.2S,v3.2S
71030fa6d0  mov v3.D[0x1],v3.D[0x0]
71030fa6d4  frsqrte v5.4S,v3.4S
71030fa6d8  fmul v6.4S,v5.4S,v3.4S
71030fa6dc  frsqrts v6.4S,v5.4S,v6.4S
71030fa6e0  fmul v5.4S,v5.4S,v6.4S
71030fa6e4  fmul v6.4S,v3.4S,v5.4S
71030fa6e8  fcmeq v3.4S,v3.4S,#0.0
71030fa6ec  mvn v3.16B,v3.16B
71030fa6f0  frsqrts v6.4S,v5.4S,v6.4S
71030fa6f4  fmul v5.4S,v5.4S,v6.4S
71030fa6f8  zip2 v6.2S,v1.2S,v2.2S
71030fa6fc  fmul v4.4S,v4.4S,v5.4S
71030fa700  mov v5.16B,v17.16B
71030fa704  mov v5.S[0x0],v0.S[0x1]
71030fa708  ext v2.16B,v2.16B,v2.16B,0x8
71030fa70c  mov v6.D[0x1],v5.D[0x0]
71030fa710  ext v1.16B,v1.16B,v1.16B,0x8
71030fa714  fmul v5.4S,v6.4S,v6.4S
71030fa718  ext v7.16B,v5.16B,v5.16B,0x8
71030fa71c  fadd v5.2S,v7.2S,v5.2S
71030fa720  faddp v5.2S,v5.2S,v5.2S
71030fa724  and v4.16B,v4.16B,v3.16B
71030fa728  mov v5.D[0x1],v5.D[0x0]
71030fa72c  str q4,[sp, #0x10]
71030fa730  frsqrte v7.4S,v5.4S
71030fa734  fmul v16.4S,v7.4S,v5.4S
71030fa738  frsqrts v16.4S,v7.4S,v16.4S
71030fa73c  fmul v7.4S,v7.4S,v16.4S
71030fa740  fmul v16.4S,v5.4S,v7.4S
71030fa744  fcmeq v5.4S,v5.4S,#0.0
71030fa748  mvn v3.16B,v5.16B
71030fa74c  frsqrts v16.4S,v7.4S,v16.4S
71030fa750  fmul v7.4S,v7.4S,v16.4S
71030fa754  fmul v6.4S,v6.4S,v7.4S
71030fa758  mov v7.16B,v17.16B
71030fa75c  mov v7.S[0x0],v0.S[0x2]
71030fa760  zip1 v0.2S,v1.2S,v2.2S
71030fa764  mov v0.D[0x1],v7.D[0x0]
71030fa768  fmul v1.4S,v0.4S,v0.4S
71030fa76c  ext v2.16B,v1.16B,v1.16B,0x8
71030fa770  fadd v1.2S,v2.2S,v1.2S
71030fa774  faddp v1.2S,v1.2S,v1.2S
71030fa778  mov v1.D[0x1],v1.D[0x0]
71030fa77c  frsqrte v2.4S,v1.4S
71030fa780  fmul v7.4S,v2.4S,v1.4S
71030fa784  frsqrts v7.4S,v2.4S,v7.4S
71030fa788  fmul v2.4S,v2.4S,v7.4S
71030fa78c  ldr q7,[sp, #0x80]
71030fa790  str q7,[sp, #0x30]
71030fa794  fmul v7.4S,v1.4S,v2.4S
71030fa798  frsqrts v7.4S,v2.4S,v7.4S
71030fa79c  fmul v2.4S,v2.4S,v7.4S
71030fa7a0  fmul v5.4S,v0.4S,v2.4S
71030fa7a4  and v2.16B,v6.16B,v3.16B
71030fa7a8  fcmeq v0.4S,v1.4S,#0.0
71030fa7ac  fmul s1,s2,v2.S[0x0]
71030fa7b0  mvn v3.16B,v0.16B
71030fa7b4  fmul s0,s4,v4.S[0x0]
71030fa7b8  fadd s0,s0,s1
71030fa7bc  fsqrt s9,s0
71030fa7c0  fcmp s9,s9
71030fa7c4  b.vc 0x71030fa7e8
71030fa7c8  str q2,[sp, #0x20]
71030fa7cc  str q5,[sp, #0x40]
71030fa7d0  str q3,[sp]
71030fa7d4  bl 0x71039c0840
71030fa7d8  ldr q3,[sp]
71030fa7dc  ldr q5,[sp, #0x40]
71030fa7e0  mov v9.16B,v0.16B
71030fa7e4  ldr q2,[sp, #0x20]
71030fa7e8  adrp x8,0x7104471000
71030fa7ec  ldr s0,[x8, #0xb98]
71030fa7f0  and v1.16B,v5.16B,v3.16B
71030fa7f4  str q1,[sp, #0x40]
71030fa7f8  fcmp s9,s0
71030fa7fc  b.le 0x71030fa850
71030fa800  dup s0,v1.S[0x1]
71030fa804  dup s1,v1.S[0x2]
71030fa808  str q2,[sp, #0x20]
71030fa80c  bl 0x71039c2660
71030fa810  ldr q0,[sp, #0x40]
71030fa814  fneg s0,s0
71030fa818  mov v1.16B,v9.16B
71030fa81c  bl 0x71039c2660
71030fa820  ldp q1,q0,[sp, #0x10]
71030fa824  bl 0x71039c2660
71030fa828  movi d1,#0x0
71030fa82c  mov v1.S[0x0],v0.S[0x0]
71030fa830  b 0x71030fa874
71030fa834  ldp x0,x1,[x20]
71030fa838  adrp x2,0x71042a1000
71030fa83c  add x2,x2,#0x67e
71030fa840  bl 0x71025f55b0
71030fa844  b 0x71030fa9a0
71030fa848  add x21,x20,#0x8
71030fa84c  b 0x71030fa98c
71030fa850  dup s0,v2.S[0x2]
71030fa854  fneg s0,s0
71030fa858  dup s1,v2.S[0x1]
71030fa85c  bl 0x71039c2660
71030fa860  ldr q0,[sp, #0x40]
71030fa864  fneg s0,s0
71030fa868  mov v1.16B,v9.16B
71030fa86c  bl 0x71039c2660
71030fa870  movi d1,#0x0
71030fa874  ldr q0,[sp, #0x30]
71030fa878  ldr x22,[x20]
71030fa87c  mov x21,x20
71030fa880  ldr x23,[x21, #0x8]!
71030fa884  cmp x22,x23
71030fa888  b.eq 0x71030fa98c
71030fa88c  dup s10,v0.S[0x1]
71030fa890  adrp x8,0x7104742000
71030fa894  add x8,x8,#0xd24
71030fa898  ldr w24,[x8, #0x10]
71030fa89c  ldp x25,x26,[x8]
71030fa8a0  str q1,[sp, #0x40]
71030fa8a4  ldr x27,[x22], #0x8
71030fa8a8  ldr q0,[x27, #0x30]
71030fa8ac  stp x25,x26,[x27, #0x40]
71030fa8b0  fneg s1,s0
71030fa8b4  dup s0,v0.S[0x1]
71030fa8b8  fneg s0,s0
71030fa8bc  str s0,[x27, #0x54]
71030fa8c0  ldr q0,[sp, #0x40]
71030fa8c4  str w24,[x27, #0x50]
71030fa8c8  str s1,[x27, #0x48]
71030fa8cc  bl 0x71039c07d0
71030fa8d0  mov v9.16B,v0.16B
71030fa8d4  ldr q0,[sp, #0x40]
71030fa8d8  bl 0x71039c07e0
71030fa8dc  ldp s5,s6,[x27, #0x48]
71030fa8e0  cmp x23,x22
71030fa8e4  ldp s3,s4,[x27, #0x50]
71030fa8e8  fmul s16,s4,s0
71030fa8ec  ldp s1,s2,[x27, #0x40]
71030fa8f0  fmul s4,s9,s4
71030fa8f4  fmul s17,s9,s2
71030fa8f8  fmul s7,s9,s5
71030fa8fc  fmul s5,s0,s5
71030fa900  fsub s7,s7,s16
71030fa904  fadd s4,s5,s4
71030fa908  fmul s5,s9,s1
71030fa90c  fmul s16,s6,s0
71030fa910  fmul s18,s3,s0
71030fa914  fmul s1,s0,s1
71030fa918  fmul s6,s9,s6
71030fa91c  fmul s0,s0,s2
71030fa920  fmul s19,s9,s3
71030fa924  fadd s0,s0,s19
71030fa928  fadd s3,s4,s8
71030fa92c  fsub s4,s5,s16
71030fa930  fsub s5,s17,s18
71030fa934  fadd s1,s1,s6
71030fa938  fadd s2,s7,s8
71030fa93c  fmul s6,s1,s8
71030fa940  fmul s7,s0,s8
71030fa944  fmul s16,s4,s8
71030fa948  fmul s17,s5,s8
71030fa94c  fadd s5,s5,s7
71030fa950  fadd s4,s4,s6
71030fa954  fadd s1,s16,s1
71030fa958  fadd s0,s17,s0
71030fa95c  fmul s7,s2,s8
71030fa960  fmul s18,s3,s8
71030fa964  fadd s2,s2,s18
71030fa968  stp s4,s5,[x27, #0x40]
71030fa96c  stp s1,s0,[x27, #0x4c]
71030fa970  fadd s3,s7,s3
71030fa974  ldr q1,[sp, #0x30]
71030fa978  fadd s1,s1,s2
71030fa97c  fadd s2,s10,s3
71030fa980  str s1,[x27, #0x48]
71030fa984  str s2,[x27, #0x54]
71030fa988  b.ne 0x71030fa8a4
71030fa98c  ldr x0,[x20]
71030fa990  ldr x1,[x21]
71030fa994  adrp x2,0x71042a1000
71030fa998  add x2,x2,#0x67e
71030fa99c  bl 0x71025f5420
71030fa9a0  ldr x8,[x19, #0x8]
71030fa9a4  ldr x8,[x8, #0x300]
71030fa9a8  ldr x8,[x8, #0x18]
71030fa9ac  ldp x9,x10,[x8]
71030fa9b0  cmp x9,x10
71030fa9b4  b.eq 0x71030fad38
71030fa9b8  mov x11,#0x963
71030fa9bc  movk x11,#0x53d5, LSL #16
71030fa9c0  movk x11,#0x1a, LSL #32
71030fa9c4  ldr x8,[x9], #0x8
71030fa9c8  ldr x12,[x8, #0x98]
71030fa9cc  and x12,x12,#0xffffffffff
71030fa9d0  cmp x12,x11
71030fa9d4  b.eq 0x71030fa9e4
71030fa9d8  cmp x10,x9
71030fa9dc  b.ne 0x71030fa9c4
71030fa9e0  b 0x71030fad38
71030fa9e4  ldr x20,[x8, #0x130]
71030fa9e8  cbz x20,0x71030fad38
71030fa9ec  ldr x9,[x19, #0x1018]
71030fa9f0  cbz x9,0x71030fabcc
71030fa9f4  ldrb w9,[x9, #0x110]
71030fa9f8  cbz w9,0x71030fabcc
71030fa9fc  adrp x10,0x7104468000
71030faa00  adrp x11,0x710446a000
71030faa04  ldr q1,[x11, #0x360]
71030faa08  ldr q0,[x10, #0xca0]
71030faa0c  adrp x12,0x7104465000
71030faa10  adrp x13,0x710446a000
71030faa14  stp q0,q1,[sp, #0x50]
71030faa18  ldr q0,[x12, #0x6b0]
71030faa1c  ldr q1,[x13, #0x350]
71030faa20  mov w9,#0x1008
71030faa24  add x2,x8,#0xcc
71030faa28  add x0,x19,x9
71030faa2c  add x1,sp,#0x50
71030faa30  stp q0,q1,[sp, #0x70]
71030faa34  bl 0x71030ef790
71030faa38  tbz w0,#0x0,0x71030fabe0
71030faa3c  movi d17,#0x0
71030faa40  ldr q0,[sp, #0x70]
71030faa44  mov v3.16B,v17.16B
71030faa48  ldp q1,q2,[sp, #0x50]
71030faa4c  mov v3.S[0x0],v0.S[0x0]
71030faa50  zip1 v4.2S,v1.2S,v2.2S
71030faa54  mov v4.D[0x1],v3.D[0x0]
71030faa58  fmul v3.4S,v4.4S,v4.4S
71030faa5c  ext v5.16B,v3.16B,v3.16B,0x8
71030faa60  fadd v3.2S,v5.2S,v3.2S
71030faa64  faddp v3.2S,v3.2S,v3.2S
71030faa68  mov v3.D[0x1],v3.D[0x0]
71030faa6c  frsqrte v5.4S,v3.4S
71030faa70  fmul v6.4S,v5.4S,v3.4S
71030faa74  frsqrts v6.4S,v5.4S,v6.4S
71030faa78  fmul v5.4S,v5.4S,v6.4S
71030faa7c  fmul v6.4S,v3.4S,v5.4S
71030faa80  fcmeq v3.4S,v3.4S,#0.0
71030faa84  mvn v3.16B,v3.16B
71030faa88  frsqrts v6.4S,v5.4S,v6.4S
71030faa8c  fmul v5.4S,v5.4S,v6.4S
71030faa90  zip2 v6.2S,v1.2S,v2.2S
71030faa94  fmul v4.4S,v4.4S,v5.4S
71030faa98  mov v5.16B,v17.16B
71030faa9c  mov v5.S[0x0],v0.S[0x1]
71030faaa0  ext v2.16B,v2.16B,v2.16B,0x8
71030faaa4  mov v6.D[0x1],v5.D[0x0]
71030faaa8  ext v1.16B,v1.16B,v1.16B,0x8
71030faaac  fmul v5.4S,v6.4S,v6.4S
71030faab0  ext v7.16B,v5.16B,v5.16B,0x8
71030faab4  fadd v5.2S,v7.2S,v5.2S
71030faab8  faddp v5.2S,v5.2S,v5.2S
71030faabc  and v4.16B,v4.16B,v3.16B
71030faac0  mov v5.D[0x1],v5.D[0x0]
71030faac4  str q4,[sp, #0x10]
71030faac8  frsqrte v7.4S,v5.4S
71030faacc  fmul v16.4S,v7.4S,v5.4S
71030faad0  frsqrts v16.4S,v7.4S,v16.4S
71030faad4  fmul v7.4S,v7.4S,v16.4S
71030faad8  fmul v16.4S,v5.4S,v7.4S
71030faadc  fcmeq v5.4S,v5.4S,#0.0
71030faae0  mvn v3.16B,v5.16B
71030faae4  frsqrts v16.4S,v7.4S,v16.4S
71030faae8  fmul v7.4S,v7.4S,v16.4S
71030faaec  fmul v6.4S,v6.4S,v7.4S
71030faaf0  mov v7.16B,v17.16B
71030faaf4  mov v7.S[0x0],v0.S[0x2]
71030faaf8  zip1 v0.2S,v1.2S,v2.2S
71030faafc  mov v0.D[0x1],v7.D[0x0]
71030fab00  fmul v1.4S,v0.4S,v0.4S
71030fab04  ext v2.16B,v1.16B,v1.16B,0x8
71030fab08  fadd v1.2S,v2.2S,v1.2S
71030fab0c  faddp v1.2S,v1.2S,v1.2S
71030fab10  mov v1.D[0x1],v1.D[0x0]
71030fab14  frsqrte v2.4S,v1.4S
71030fab18  fmul v7.4S,v2.4S,v1.4S
71030fab1c  frsqrts v7.4S,v2.4S,v7.4S
71030fab20  fmul v2.4S,v2.4S,v7.4S
71030fab24  ldr q7,[sp, #0x80]
71030fab28  str q7,[sp, #0x30]
71030fab2c  fmul v7.4S,v1.4S,v2.4S
71030fab30  frsqrts v7.4S,v2.4S,v7.4S
71030fab34  fmul v2.4S,v2.4S,v7.4S
71030fab38  fmul v5.4S,v0.4S,v2.4S
71030fab3c  and v2.16B,v6.16B,v3.16B
71030fab40  fcmeq v0.4S,v1.4S,#0.0
71030fab44  fmul s1,s2,v2.S[0x0]
71030fab48  mvn v3.16B,v0.16B
71030fab4c  fmul s0,s4,v4.S[0x0]
71030fab50  fadd s0,s0,s1
71030fab54  fsqrt s9,s0
71030fab58  fcmp s9,s9
71030fab5c  b.vc 0x71030fab80
71030fab60  str q2,[sp, #0x20]
71030fab64  str q5,[sp, #0x40]
71030fab68  str q3,[sp]
71030fab6c  bl 0x71039c0840
71030fab70  ldr q3,[sp]
71030fab74  ldr q5,[sp, #0x40]
71030fab78  mov v9.16B,v0.16B
71030fab7c  ldr q2,[sp, #0x20]
71030fab80  adrp x8,0x7104471000
71030fab84  ldr s0,[x8, #0xb98]
71030fab88  and v1.16B,v5.16B,v3.16B
71030fab8c  str q1,[sp, #0x40]
71030fab90  fcmp s9,s0
71030fab94  b.le 0x71030fabe8
71030fab98  dup s0,v1.S[0x1]
71030fab9c  dup s1,v1.S[0x2]
71030faba0  str q2,[sp, #0x20]
71030faba4  bl 0x71039c2660
71030faba8  ldr q0,[sp, #0x40]
71030fabac  fneg s0,s0
71030fabb0  mov v1.16B,v9.16B
71030fabb4  bl 0x71039c2660
71030fabb8  ldp q1,q0,[sp, #0x10]
71030fabbc  bl 0x71039c2660
71030fabc0  movi d1,#0x0
71030fabc4  mov v1.S[0x0],v0.S[0x0]
71030fabc8  b 0x71030fac0c
71030fabcc  ldp x0,x1,[x20]
71030fabd0  adrp x2,0x71042a1000
71030fabd4  add x2,x2,#0x67e
71030fabd8  bl 0x71025f55b0
71030fabdc  b 0x71030fad38
71030fabe0  add x19,x20,#0x8
71030fabe4  b 0x71030fad24
71030fabe8  dup s0,v2.S[0x2]
71030fabec  fneg s0,s0
71030fabf0  dup s1,v2.S[0x1]
71030fabf4  bl 0x71039c2660
71030fabf8  ldr q0,[sp, #0x40]
71030fabfc  fneg s0,s0
71030fac00  mov v1.16B,v9.16B
71030fac04  bl 0x71039c2660
71030fac08  movi d1,#0x0
71030fac0c  ldr q0,[sp, #0x30]
71030fac10  ldr x21,[x20]
71030fac14  mov x19,x20
71030fac18  ldr x22,[x19, #0x8]!
71030fac1c  cmp x21,x22
71030fac20  b.eq 0x71030fad24
71030fac24  dup s10,v0.S[0x1]
71030fac28  adrp x8,0x7104742000
71030fac2c  add x8,x8,#0xd24
71030fac30  ldr w23,[x8, #0x10]
71030fac34  ldp x24,x25,[x8]
71030fac38  str q1,[sp, #0x40]
71030fac3c  ldr x26,[x21], #0x8
71030fac40  ldr q0,[x26, #0x30]
71030fac44  stp x24,x25,[x26, #0x40]
71030fac48  fneg s1,s0
71030fac4c  dup s0,v0.S[0x1]
71030fac50  fneg s0,s0
71030fac54  str s0,[x26, #0x54]
71030fac58  ldr q0,[sp, #0x40]
71030fac5c  str w23,[x26, #0x50]
71030fac60  str s1,[x26, #0x48]
71030fac64  bl 0x71039c07d0
71030fac68  mov v9.16B,v0.16B
71030fac6c  ldr q0,[sp, #0x40]
71030fac70  bl 0x71039c07e0
71030fac74  ldp s5,s6,[x26, #0x48]
71030fac78  cmp x22,x21
71030fac7c  ldp s3,s4,[x26, #0x50]
71030fac80  fmul s16,s4,s0
71030fac84  ldp s1,s2,[x26, #0x40]
71030fac88  fmul s4,s9,s4
71030fac8c  fmul s17,s9,s2
71030fac90  fmul s7,s9,s5
71030fac94  fmul s5,s0,s5
71030fac98  fsub s7,s7,s16
71030fac9c  fadd s4,s5,s4
71030faca0  fmul s5,s9,s1
71030faca4  fmul s16,s6,s0
71030faca8  fmul s18,s3,s0
71030facac  fmul s1,s0,s1
71030facb0  fmul s6,s9,s6
71030facb4  fmul s0,s0,s2
71030facb8  fmul s19,s9,s3
71030facbc  fadd s0,s0,s19
71030facc0  fadd s3,s4,s8
71030facc4  fsub s4,s5,s16
71030facc8  fsub s5,s17,s18
71030faccc  fadd s1,s1,s6
71030facd0  fadd s2,s7,s8
71030facd4  fmul s6,s1,s8
71030facd8  fmul s7,s0,s8
71030facdc  fmul s16,s4,s8
71030face0  fmul s17,s5,s8
71030face4  fadd s5,s5,s7
71030face8  fadd s4,s4,s6
71030facec  fadd s1,s16,s1
71030facf0  fadd s0,s17,s0
71030facf4  fmul s7,s2,s8
71030facf8  fmul s18,s3,s8
71030facfc  fadd s2,s2,s18
71030fad00  stp s4,s5,[x26, #0x40]
71030fad04  stp s1,s0,[x26, #0x4c]
71030fad08  fadd s3,s7,s3
71030fad0c  ldr q1,[sp, #0x30]
71030fad10  fadd s1,s1,s2
71030fad14  fadd s2,s10,s3
71030fad18  str s1,[x26, #0x48]
71030fad1c  str s2,[x26, #0x54]
71030fad20  b.ne 0x71030fac3c
71030fad24  ldr x0,[x20]
71030fad28  ldr x1,[x19]
71030fad2c  adrp x2,0x71042a1000
71030fad30  add x2,x2,#0x67e
71030fad34  bl 0x71025f5420
71030fad38  ldp d9,d8,[sp, #0xb0]
71030fad3c  ldr d10,[sp, #0xa0]
71030fad40  ldp x29,x30,[sp, #0x110]
71030fad44  ldp x20,x19,[sp, #0x100]
71030fad48  ldp x22,x21,[sp, #0xf0]
71030fad4c  ldp x24,x23,[sp, #0xe0]
71030fad50  ldp x26,x25,[sp, #0xd0]
71030fad54  ldp x28,x27,[sp, #0xc0]
71030fad58  add sp,sp,#0x120
71030fad5c  ret
