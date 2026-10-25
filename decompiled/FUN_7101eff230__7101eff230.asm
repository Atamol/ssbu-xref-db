// addr:      7101eff230
// offset:    0x1eff230
// name:      FUN_7101eff230
// mangled:   
// size:      3408

7101eff230  sub sp,sp,#0x110
7101eff234  stp d11,d10,[sp, #0x90]
7101eff238  stp d9,d8,[sp, #0xa0]
7101eff23c  stp x28,x27,[sp, #0xb0]
7101eff240  stp x26,x25,[sp, #0xc0]
7101eff244  stp x24,x23,[sp, #0xd0]
7101eff248  stp x22,x21,[sp, #0xe0]
7101eff24c  stp x20,x19,[sp, #0xf0]
7101eff250  stp x29,x30,[sp, #0x100]
7101eff254  add x29,sp,#0x100
7101eff258  str x0,[sp, #0x20]
7101eff25c  adrp x9,0x7105314000
7101eff260  add x9,x9,#0x4d8
7101eff264  ldarb w8,[x9]
7101eff268  tbz w8,#0x0,0x7101effee8
7101eff26c  adrp x8,0x710530a000
7101eff270  ldrb w8,[x8, #0x976]
7101eff274  cbz w8,0x7101eff2b4
7101eff278  ldr x19,[sp, #0x20]
7101eff27c  ldr w8,[x19]
7101eff280  cbnz w8,0x7101effe74
7101eff284  ldr w21,[x19, #0x27c]
7101eff288  ldrb w8,[x19, #0x2ba]
7101eff28c  cbz w8,0x7101eff3f8
7101eff290  add x8,x19,#0x238
7101eff294  str x8,[sp, #0x18]
7101eff298  ldr x8,[x19, #0x238]
7101eff29c  ldr x9,[x19, #0x230]
7101eff2a0  add x25,x19,#0x230
7101eff2a4  cmp x8,x9
7101eff2a8  b.ne 0x7101eff8a4
7101eff2ac  add x20,x19,#0x208
7101eff2b0  b 0x7101eff960
7101eff2b4  ldr x13,[sp, #0x20]
7101eff2b8  mov x23,x9
7101eff2bc  ldrsw x10,[x13, #0x27c]
7101eff2c0  ldr x9,[x13, #0x288]
7101eff2c4  ldr x11,[x13, #0x290]
7101eff2c8  sub x11,x11,x9
7101eff2cc  ldr w8,[x9, x10, LSL #0x2]
7101eff2d0  add x10,x10,#0x1
7101eff2d4  asr x11,x11,#0x2
7101eff2d8  cmp x11,x10
7101eff2dc  sxtw x21,w8
7101eff2e0  b.ls 0x7101eff304
7101eff2e4  ldr w8,[x9, x10, LSL #0x2]
7101eff2e8  mov x9,x23
7101eff2ec  cmp w21,w8
7101eff2f0  cset w8,eq
7101eff2f4  tbnz w21,#0x1f,0x7101eff278
7101eff2f8  ldr x13,[sp, #0x20]
7101eff2fc  mov w9,wzr
7101eff300  b 0x7101eff348
7101eff304  ldr w9,[x13]
7101eff308  cmp w9,#0x2
7101eff30c  b.cs 0x7101efff74
7101eff310  cmp w8,#0x5
7101eff314  b.cs 0x7101efff74
7101eff318  adrp x10,0x7105328000
7101eff31c  ldr x10,[x10, #0xe18]
7101eff320  ldr x10,[x10]
7101eff324  mov w12,#0x1b8
7101eff328  madd x9,x9,x12,x10
7101eff32c  mov w11,#0x50
7101eff330  madd x8,x8,x11,x9
7101eff334  ldr w9,[x8, #0x68]
7101eff338  cmp w9,#0x1
7101eff33c  cset w8,eq
7101eff340  cmp w9,#0x3
7101eff344  cset w9,eq
7101eff348  ldr x11,[x13, #0x238]
7101eff34c  ldr x10,[x13, #0x230]
7101eff350  sub x11,x11,x10
7101eff354  asr x11,x11,#0x4
7101eff358  add x20,x13,#0x230
7101eff35c  cmp x11,x21
7101eff360  b.ls 0x7101efff78
7101eff364  lsl x19,x21,#0x4
7101eff368  ldr x10,[x10, x19, LSL #0x0]
7101eff36c  ldr x22,[x10]
7101eff370  orr x10,xzr,#0x100000000
7101eff374  mov w11,#0xffffffff
7101eff378  add x0,x22,#0x18
7101eff37c  stp xzr,xzr,[x22, #0x20]
7101eff380  stp xzr,xzr,[x22, #0x1e8]
7101eff384  str w11,[x22, #0x208]
7101eff388  stp xzr,xzr,[x22, #0x1d8]
7101eff38c  strb wzr,[x22, #0x20c]
7101eff390  stp xzr,xzr,[x22, #0x1c8]
7101eff394  str wzr,[x22, #0x1b0]
7101eff398  stp xzr,xzr,[x22, #0x1b8]
7101eff39c  stp x10,x11,[x22, #0x1f8]
7101eff3a0  cbz w8,0x7101eff3ac
7101eff3a4  mov w8,#0x12
7101eff3a8  b 0x7101eff3b4
7101eff3ac  cbz w9,0x7101eff434
7101eff3b0  mov w8,#0x13
7101eff3b4  str w8,[x22, #0x1b4]
7101eff3b8  bl 0x7101efac00
7101eff3bc  ldr x9,[x22, #0x18]
7101eff3c0  cbz x9,0x7101eff3e8
7101eff3c4  ldp x8,x11,[x22, #0x20]
7101eff3c8  and x10,x11,#0x1
7101eff3cc  orr x12,x10,x8
7101eff3d0  cbz x12,0x7101eff3e8
7101eff3d4  add x0,x9,x11, ASR #0x1
7101eff3d8  cbz x10,0x7101eff3e4
7101eff3dc  ldr x9,[x0]
7101eff3e0  ldr x8,[x9, x8, LSL #0x0]
7101eff3e4  blr x8
7101eff3e8  ldr w8,[x22, #0x204]
7101eff3ec  add w8,w8,#0x1
7101eff3f0  str w8,[x22, #0x204]
7101eff3f4  b 0x7101eff4ac
7101eff3f8  ldr x0,[x19, #0x210]
7101eff3fc  fmov s0,0x3f800000
7101eff400  adrp x1,0x71043be000
7101eff404  add x1,x1,#0xea5
7101eff408  str w21,[sp, #0xc]
7101eff40c  bl 0x7103778300
7101eff410  add x8,x19,#0x238
7101eff414  str x8,[sp, #0x18]
7101eff418  ldr x8,[x19, #0x238]
7101eff41c  ldr x9,[x19, #0x230]
7101eff420  add x25,x19,#0x230
7101eff424  cmp x8,x9
7101eff428  b.ne 0x7101eff508
7101eff42c  mov x9,x8
7101eff430  b 0x7101eff890
7101eff434  mov w8,#0x14
7101eff438  str w8,[x22, #0x1b4]
7101eff43c  bl 0x7101efac00
7101eff440  ldr x9,[x22, #0x18]
7101eff444  cbz x9,0x7101eff46c
7101eff448  ldp x8,x11,[x22, #0x20]
7101eff44c  and x10,x11,#0x1
7101eff450  orr x12,x10,x8
7101eff454  cbz x12,0x7101eff46c
7101eff458  add x0,x9,x11, ASR #0x1
7101eff45c  cbz x10,0x7101eff468
7101eff460  ldr x9,[x0]
7101eff464  ldr x8,[x9, x8, LSL #0x0]
7101eff468  blr x8
7101eff46c  ldr w8,[x22, #0x204]
7101eff470  ldr x10,[sp, #0x20]
7101eff474  add w8,w8,#0x1
7101eff478  str w8,[x22, #0x204]
7101eff47c  ldr x9,[x10, #0x238]
7101eff480  ldr x8,[x10, #0x230]
7101eff484  sub x9,x9,x8
7101eff488  asr x9,x9,#0x4
7101eff48c  cmp x9,x21
7101eff490  b.ls 0x7101efff78
7101eff494  ldr x8,[x8, x19, LSL #0x0]
7101eff498  ldr x8,[x8]
7101eff49c  strb wzr,[x8, #0x274]
7101eff4a0  ldr w8,[x10, #0x278]
7101eff4a4  sub w8,w8,#0x1
7101eff4a8  str w8,[x10, #0x278]
7101eff4ac  ldr x8,[sp, #0x20]
7101eff4b0  ldr x9,[x8, #0x238]
7101eff4b4  ldr x8,[x8, #0x230]
7101eff4b8  sub x9,x9,x8
7101eff4bc  asr x9,x9,#0x4
7101eff4c0  cmp x9,x21
7101eff4c4  b.ls 0x7101efff78
7101eff4c8  ldr x8,[x8, x19, LSL #0x0]
7101eff4cc  ldr x19,[x8]
7101eff4d0  ldr x8,[x19, #0x238]
7101eff4d4  ldr x1,[x8]
7101eff4d8  mov x9,x23
7101eff4dc  cbz x1,0x7101eff278
7101eff4e0  ldr x20,[x1, #0x18]
7101eff4e4  cbz x20,0x7101eff278
7101eff4e8  mov x0,x20
7101eff4ec  bl 0x7100058290
7101eff4f0  ldr x8,[x19, #0x238]
7101eff4f4  ldr x1,[x8]
7101eff4f8  mov x0,x20
7101eff4fc  bl 0x7100058250
7101eff500  mov x9,x23
7101eff504  b 0x7101eff278
7101eff508  adrp x10,0x7104472000
7101eff50c  ldr s8,[x10, #0xfbc]
7101eff510  adrp x10,0x7104471000
7101eff514  ldr s9,[x10, #0xd10]
7101eff518  adrp x10,0x7104472000
7101eff51c  ldr s11,[x10, #0x8b8]
7101eff520  fmov s10,0x3f000000
7101eff524  mov x20,xzr
7101eff528  mov w26,wzr
7101eff52c  add x21,x19,#0x208
7101eff530  adrp x23,0x710523d000
7101eff534  add x23,x23,#0x9a8
7101eff538  str x25,[sp]
7101eff53c  ldr w10,[x19]
7101eff540  cmp w10,#0x2
7101eff544  b.cs 0x7101efff74
7101eff548  cmp x20,#0x5
7101eff54c  b.cs 0x7101efff74
7101eff550  adrp x11,0x7105328000
7101eff554  ldr x11,[x11, #0xe18]
7101eff558  ldr x11,[x11]
7101eff55c  mov w12,#0x1b8
7101eff560  madd x10,x10,x12,x11
7101eff564  mov w11,#0x50
7101eff568  madd x10,x20,x11,x10
7101eff56c  ldr w22,[x10, #0x50]
7101eff570  cbz w22,0x7101eff87c
7101eff574  add x8,sp,#0x28
7101eff578  mov x0,x21
7101eff57c  adrp x1,0x7104292000
7101eff580  add x1,x1,#0x4f2
7101eff584  mov w2,w20
7101eff588  bl 0x7103776910
7101eff58c  ldr x25,[sp, #0x30]
7101eff590  mov x24,xzr
7101eff594  str w26,[sp, #0x10]
7101eff598  b 0x7101eff5b4
7101eff59c  adrp x8,0x71052a8000
7101eff5a0  ldr x8,[x8, #0xa80]
7101eff5a4  ldr q0,[x8]
7101eff5a8  ldr x8,[x28]
7101eff5ac  cbnz x8,0x7101eff7ec
7101eff5b0  b 0x7101eff7fc
7101eff5b4  ldr w8,[x19]
7101eff5b8  cmp w8,#0x2
7101eff5bc  b.cs 0x7101efff74
7101eff5c0  cmp x24,#0x5
7101eff5c4  b.cs 0x7101efff74
7101eff5c8  adrp x9,0x7105328000
7101eff5cc  ldr x9,[x9, #0xe18]
7101eff5d0  ldr x9,[x9]
7101eff5d4  mov w10,#0x1b8
7101eff5d8  madd x8,x8,x10,x9
7101eff5dc  mov w9,#0x50
7101eff5e0  madd x8,x20,x9,x8
7101eff5e4  add x8,x8,x24, LSL #0x2
7101eff5e8  ldr w2,[x8, #0x54]
7101eff5ec  add x8,sp,#0x78
7101eff5f0  mov x0,x21
7101eff5f4  adrp x1,0x7104319000
7101eff5f8  add x1,x1,#0x73b
7101eff5fc  bl 0x7103776910
7101eff600  add x8,sp,#0x68
7101eff604  mov x0,x21
7101eff608  adrp x1,0x7104433000
7101eff60c  add x1,x1,#0x90c
7101eff610  mov w2,w26
7101eff614  bl 0x7103776910
7101eff618  ldr x27,[sp, #0x80]
7101eff61c  ldr x8,[x27]
7101eff620  cbz x8,0x7101eff65c
7101eff624  movi v7.2D,#0x0
7101eff628  mov v0.16B,v7.16B
7101eff62c  add x9,x8,#0x30
7101eff630  add x8,x8,#0x34
7101eff634  ld1 {v0.S}[0],[x9]
7101eff638  ld1 {v0.S}[1],[x8]
7101eff63c  ldr x9,[x25]
7101eff640  cbz x9,0x7101eff674
7101eff644  mov v1.16B,v7.16B
7101eff648  add x8,x9,#0x30
7101eff64c  ld1 {v1.S}[0],[x8]
7101eff650  add x8,x9,#0x34
7101eff654  ld1 {v1.S}[1],[x8]
7101eff658  b 0x7101eff680
7101eff65c  adrp x8,0x71052a8000
7101eff660  ldr x8,[x8, #0xa80]
7101eff664  ldr q0,[x8]
7101eff668  movi v7.2D,#0x0
7101eff66c  ldr x9,[x25]
7101eff670  cbnz x9,0x7101eff644
7101eff674  adrp x8,0x71052a8000
7101eff678  ldr x8,[x8, #0xa80]
7101eff67c  ldr q1,[x8]
7101eff680  ldr x28,[sp, #0x70]
7101eff684  fsub v1.4S,v0.4S,v1.4S
7101eff688  ldr x8,[x28]
7101eff68c  cbz x8,0x7101eff7cc
7101eff690  ldp s0,s4,[x8, #0x50]
7101eff694  ldr s3,[x8, #0x30]
7101eff698  ldp s2,s5,[x8, #0x48]
7101eff69c  fmul s4,s4,s5
7101eff6a0  fmul s0,s0,s2
7101eff6a4  mov v2.16B,v7.16B
7101eff6a8  add x10,x8,#0x34
7101eff6ac  mov v2.S[0x0],v3.S[0x0]
7101eff6b0  add x11,x8,#0x38
7101eff6b4  fabs s4,s4
7101eff6b8  fabs s0,s0
7101eff6bc  fmul s0,s0,s10
7101eff6c0  ld1 {v2.S}[1],[x10]
7101eff6c4  ldrb w10,[x8, #0x5b]
7101eff6c8  ld1 {v2.S}[2],[x11]
7101eff6cc  and w11,w10,#0x3
7101eff6d0  cmp w11,#0x2
7101eff6d4  b.eq 0x7101eff6e8
7101eff6d8  cmp w11,#0x1
7101eff6dc  b.ne 0x7101eff6f0
7101eff6e0  fadd s3,s3,s0
7101eff6e4  b 0x7101eff6ec
7101eff6e8  fsub s3,s3,s0
7101eff6ec  mov v2.S[0x0],v3.S[0x0]
7101eff6f0  fmul s3,s4,s10
7101eff6f4  ubfx w10,w10,#0x2,#0x2
7101eff6f8  cmp w10,#0x2
7101eff6fc  b.eq 0x7101eff714
7101eff700  cmp w10,#0x1
7101eff704  b.ne 0x7101eff720
7101eff708  dup s4,v2.S[0x1]
7101eff70c  fsub s3,s4,s3
7101eff710  b 0x7101eff71c
7101eff714  dup s4,v2.S[0x1]
7101eff718  fadd s3,s3,s4
7101eff71c  mov v2.S[0x1],v3.S[0x0]
7101eff720  ldr x10,[x8, #0x18]
7101eff724  cbz x10,0x7101eff768
7101eff728  ldp s3,s4,[x10, #0x30]
7101eff72c  fadd s3,s2,s3
7101eff730  dup s5,v2.S[0x1]
7101eff734  fadd s4,s5,s4
7101eff738  dup s6,v2.S[0x2]
7101eff73c  mov v2.16B,v7.16B
7101eff740  mov v2.S[0x0],v3.S[0x0]
7101eff744  ldr s5,[x10, #0x38]
7101eff748  mov v2.S[0x1],v4.S[0x0]
7101eff74c  fadd s5,s6,s5
7101eff750  mov v2.S[0x2],v5.S[0x0]
7101eff754  ldr x10,[x10, #0x18]
7101eff758  cbnz x10,0x7101eff728
7101eff75c  cbz x8,0x7101eff7cc
7101eff760  fadd s2,s3,s11
7101eff764  b 0x7101eff76c
7101eff768  fadd s2,s2,s11
7101eff76c  fmul v3.4S,v1.4S,v1.4S
7101eff770  faddp v3.2S,v3.2S,v3.2S
7101eff774  frsqrte v4.2S,v3.2S
7101eff778  fmul v5.2S,v3.2S,v4.2S
7101eff77c  frsqrts v5.2S,v5.2S,v4.2S
7101eff780  fmul v4.2S,v4.2S,v5.2S
7101eff784  fmul v5.2S,v3.2S,v4.2S
7101eff788  frsqrts v5.2S,v5.2S,v4.2S
7101eff78c  fmul v4.2S,v4.2S,v5.2S
7101eff790  fcmeq v6.2S,v3.2S,#0.0
7101eff794  fmul v3.2S,v3.2S,v4.2S
7101eff798  fadd s4,s2,s0
7101eff79c  fsub s0,s2,s0
7101eff7a0  mvn v5.8B,v6.8B
7101eff7a4  fsub s0,s4,s0
7101eff7a8  and v3.8B,v3.8B,v5.8B
7101eff7ac  fdiv s0,s3,s0
7101eff7b0  orr w9,wzr,#0x3f800000
7101eff7b4  str w9,[x8, #0x4c]
7101eff7b8  ldrb w9,[x8, #0x58]
7101eff7bc  orr w9,w9,#0x10
7101eff7c0  strb w9,[x8, #0x58]
7101eff7c4  str s0,[x8, #0x48]
7101eff7c8  ldr x9,[x25]
7101eff7cc  cbz x9,0x7101eff59c
7101eff7d0  mov v0.16B,v7.16B
7101eff7d4  add x8,x9,#0x30
7101eff7d8  ld1 {v0.S}[0],[x8]
7101eff7dc  add x8,x9,#0x34
7101eff7e0  ld1 {v0.S}[1],[x8]
7101eff7e4  ldr x8,[x28]
7101eff7e8  cbz x8,0x7101eff7fc
7101eff7ec  ldrb w9,[x8, #0x58]
7101eff7f0  orr w9,w9,#0x10
7101eff7f4  str d0,[x8, #0x30]
7101eff7f8  strb w9,[x8, #0x58]
7101eff7fc  dup s0,v1.S[0x1]
7101eff800  bl 0x71039c2660
7101eff804  ldr x8,[x28]
7101eff808  cbz x8,0x7101eff828
7101eff80c  fmul s0,s0,s8
7101eff810  fdiv s0,s0,s9
7101eff814  ldrb w9,[x8, #0x58]
7101eff818  orr w9,w9,#0x10
7101eff81c  stur xzr,[x8, #0x3c]
7101eff820  strb w9,[x8, #0x58]
7101eff824  str s0,[x8, #0x44]
7101eff828  mov x0,x28
7101eff82c  add w26,w26,#0x1
7101eff830  stp x23,xzr,[sp, #0x68]
7101eff834  bl 0x710392eb40
7101eff838  stp x23,xzr,[sp, #0x78]
7101eff83c  cbz x27,0x7101eff848
7101eff840  mov x0,x27
7101eff844  bl 0x710392eb40
7101eff848  add x24,x24,#0x1
7101eff84c  cmp x24,x22
7101eff850  b.ne 0x7101eff5b4
7101eff854  ldr w26,[sp, #0x10]
7101eff858  add w26,w22,w26
7101eff85c  stp x23,xzr,[sp, #0x28]
7101eff860  cbz x25,0x7101eff86c
7101eff864  mov x0,x25
7101eff868  bl 0x710392eb40
7101eff86c  ldr x8,[sp, #0x18]
7101eff870  ldr x25,[sp]
7101eff874  ldr x8,[x8]
7101eff878  ldr x9,[x25]
7101eff87c  sub x10,x8,x9
7101eff880  add x20,x20,#0x1
7101eff884  asr x10,x10,#0x4
7101eff888  cmp x10,x20
7101eff88c  b.hi 0x7101eff53c
7101eff890  ldr w21,[sp, #0xc]
7101eff894  mov w10,#0x1
7101eff898  strb w10,[x19, #0x2ba]
7101eff89c  cmp x8,x9
7101eff8a0  b.eq 0x7101eff2ac
7101eff8a4  mov w26,w21
7101eff8a8  adrp x21,0x7104292000
7101eff8ac  add x21,x21,#0x4f2
7101eff8b0  add x20,x19,#0x208
7101eff8b4  adrp x19,0x710523d000
7101eff8b8  add x19,x19,#0x9a8
7101eff8bc  mov w24,#0x1
7101eff8c0  adrp x22,0x7104319000
7101eff8c4  add x22,x22,#0x73b
7101eff8c8  sub w23,w24,#0x1
7101eff8cc  add x8,sp,#0x28
7101eff8d0  mov x0,x20
7101eff8d4  mov x1,x21
7101eff8d8  mov w2,w23
7101eff8dc  bl 0x7103776910
7101eff8e0  ldr x0,[sp, #0x30]
7101eff8e4  ldr x8,[x0]
7101eff8e8  cbz x8,0x7101eff8f8
7101eff8ec  ldrb w9,[x8, #0x58]
7101eff8f0  and w9,w9,#0xfe
7101eff8f4  strb w9,[x8, #0x58]
7101eff8f8  stp x19,xzr,[sp, #0x28]
7101eff8fc  cbz x0,0x7101eff904
7101eff900  bl 0x710392eb40
7101eff904  add x8,sp,#0x28
7101eff908  mov x0,x20
7101eff90c  mov x1,x22
7101eff910  mov w2,w23
7101eff914  bl 0x7103776910
7101eff918  ldr x0,[sp, #0x30]
7101eff91c  ldr x8,[x0]
7101eff920  cbz x8,0x7101eff930
7101eff924  ldrb w9,[x8, #0x58]
7101eff928  and w9,w9,#0xfe
7101eff92c  strb w9,[x8, #0x58]
7101eff930  stp x19,xzr,[sp, #0x28]
7101eff934  cbz x0,0x7101eff93c
7101eff938  bl 0x710392eb40
7101eff93c  ldr x8,[sp, #0x18]
7101eff940  ldr x8,[x8]
7101eff944  ldr x9,[x25]
7101eff948  sub x8,x8,x9
7101eff94c  asr x8,x8,#0x4
7101eff950  cmp x8,w24, UXTW 
7101eff954  add w24,w24,#0x1
7101eff958  b.hi 0x7101eff8c8
7101eff95c  mov w21,w26
7101eff960  adrp x1,0x7104433000
7101eff964  add x1,x1,#0x90c
7101eff968  add x8,sp,#0x28
7101eff96c  mov x0,x20
7101eff970  mov w2,wzr
7101eff974  bl 0x7103776910
7101eff978  ldr x0,[sp, #0x30]
7101eff97c  ldr x8,[x0]
7101eff980  cbz x8,0x7101eff990
7101eff984  ldrb w9,[x8, #0x58]
7101eff988  and w9,w9,#0xfe
7101eff98c  strb w9,[x8, #0x58]
7101eff990  adrp x8,0x710523d000
7101eff994  add x8,x8,#0x9a8
7101eff998  stp x8,xzr,[sp, #0x28]
7101eff99c  cbz x0,0x7101eff9a4
7101eff9a0  bl 0x710392eb40
7101eff9a4  adrp x1,0x7104433000
7101eff9a8  add x1,x1,#0x90c
7101eff9ac  add x8,sp,#0x28
7101eff9b0  mov w2,#0x1
7101eff9b4  mov x0,x20
7101eff9b8  bl 0x7103776910
7101eff9bc  ldr x0,[sp, #0x30]
7101eff9c0  ldr x8,[x0]
7101eff9c4  cbz x8,0x7101eff9d4
7101eff9c8  ldrb w9,[x8, #0x58]
7101eff9cc  and w9,w9,#0xfe
7101eff9d0  strb w9,[x8, #0x58]
7101eff9d4  adrp x8,0x710523d000
7101eff9d8  add x8,x8,#0x9a8
7101eff9dc  stp x8,xzr,[sp, #0x28]
7101eff9e0  cbz x0,0x7101eff9e8
7101eff9e4  bl 0x710392eb40
7101eff9e8  adrp x1,0x7104433000
7101eff9ec  add x1,x1,#0x90c
7101eff9f0  add x8,sp,#0x28
7101eff9f4  mov w2,#0x2
7101eff9f8  mov x0,x20
7101eff9fc  bl 0x7103776910
7101effa00  ldr x0,[sp, #0x30]
7101effa04  ldr x8,[x0]
7101effa08  cbz x8,0x7101effa18
7101effa0c  ldrb w9,[x8, #0x58]
7101effa10  and w9,w9,#0xfe
7101effa14  strb w9,[x8, #0x58]
7101effa18  adrp x8,0x710523d000
7101effa1c  add x8,x8,#0x9a8
7101effa20  stp x8,xzr,[sp, #0x28]
7101effa24  cbz x0,0x7101effa2c
7101effa28  bl 0x710392eb40
7101effa2c  adrp x1,0x7104433000
7101effa30  add x1,x1,#0x90c
7101effa34  add x8,sp,#0x28
7101effa38  orr w2,wzr,#0x3
7101effa3c  mov x0,x20
7101effa40  bl 0x7103776910
7101effa44  ldr x0,[sp, #0x30]
7101effa48  ldr x8,[x0]
7101effa4c  cbz x8,0x7101effa5c
7101effa50  ldrb w9,[x8, #0x58]
7101effa54  and w9,w9,#0xfe
7101effa58  strb w9,[x8, #0x58]
7101effa5c  adrp x8,0x710523d000
7101effa60  add x8,x8,#0x9a8
7101effa64  stp x8,xzr,[sp, #0x28]
7101effa68  cbz x0,0x7101effa70
7101effa6c  bl 0x710392eb40
7101effa70  adrp x1,0x7104433000
7101effa74  add x1,x1,#0x90c
7101effa78  add x8,sp,#0x28
7101effa7c  mov w2,#0x4
7101effa80  mov x0,x20
7101effa84  bl 0x7103776910
7101effa88  ldr x0,[sp, #0x30]
7101effa8c  ldr x8,[x0]
7101effa90  cbz x8,0x7101effaa0
7101effa94  ldrb w9,[x8, #0x58]
7101effa98  and w9,w9,#0xfe
7101effa9c  strb w9,[x8, #0x58]
7101effaa0  adrp x8,0x710523d000
7101effaa4  add x8,x8,#0x9a8
7101effaa8  stp x8,xzr,[sp, #0x28]
7101effaac  cbz x0,0x7101effab4
7101effab0  bl 0x710392eb40
7101effab4  adrp x1,0x7104433000
7101effab8  add x1,x1,#0x90c
7101effabc  mov w2,#0x5
7101effac0  add x8,sp,#0x28
7101effac4  mov x0,x20
7101effac8  bl 0x7103776910
7101effacc  ldr x0,[sp, #0x30]
7101effad0  ldr x8,[x0]
7101effad4  cbz x8,0x7101effae4
7101effad8  ldrb w9,[x8, #0x58]
7101effadc  and w9,w9,#0xfe
7101effae0  strb w9,[x8, #0x58]
7101effae4  adrp x8,0x710523d000
7101effae8  add x8,x8,#0x9a8
7101effaec  stp x8,xzr,[sp, #0x28]
7101effaf0  cbz x0,0x7101effaf8
7101effaf4  bl 0x710392eb40
7101effaf8  adrp x1,0x7104433000
7101effafc  add x1,x1,#0x90c
7101effb00  add x8,sp,#0x28
7101effb04  orr w2,wzr,#0x6
7101effb08  mov x0,x20
7101effb0c  bl 0x7103776910
7101effb10  ldr x0,[sp, #0x30]
7101effb14  ldr x8,[x0]
7101effb18  cbz x8,0x7101effb28
7101effb1c  ldrb w9,[x8, #0x58]
7101effb20  and w9,w9,#0xfe
7101effb24  strb w9,[x8, #0x58]
7101effb28  adrp x8,0x710523d000
7101effb2c  add x8,x8,#0x9a8
7101effb30  stp x8,xzr,[sp, #0x28]
7101effb34  cbz x0,0x7101effb3c
7101effb38  bl 0x710392eb40
7101effb3c  adrp x1,0x7104433000
7101effb40  add x1,x1,#0x90c
7101effb44  add x8,sp,#0x28
7101effb48  orr w2,wzr,#0x7
7101effb4c  mov x0,x20
7101effb50  bl 0x7103776910
7101effb54  ldr x0,[sp, #0x30]
7101effb58  ldr x8,[x0]
7101effb5c  cbz x8,0x7101effb6c
7101effb60  ldrb w9,[x8, #0x58]
7101effb64  and w9,w9,#0xfe
7101effb68  strb w9,[x8, #0x58]
7101effb6c  adrp x8,0x710523d000
7101effb70  add x8,x8,#0x9a8
7101effb74  stp x8,xzr,[sp, #0x28]
7101effb78  cbz x0,0x7101effb80
7101effb7c  bl 0x710392eb40
7101effb80  adrp x1,0x7104433000
7101effb84  add x1,x1,#0x90c
7101effb88  add x8,sp,#0x28
7101effb8c  mov w2,#0x8
7101effb90  mov x0,x20
7101effb94  add w22,w21,#0x1
7101effb98  bl 0x7103776910
7101effb9c  ldr x0,[sp, #0x30]
7101effba0  ldr x8,[x0]
7101effba4  cbz x8,0x7101effbb4
7101effba8  ldrb w9,[x8, #0x58]
7101effbac  and w9,w9,#0xfe
7101effbb0  strb w9,[x8, #0x58]
7101effbb4  adrp x8,0x710523d000
7101effbb8  add x8,x8,#0x9a8
7101effbbc  stp x8,xzr,[sp, #0x28]
7101effbc0  cbz x0,0x7101effbc8
7101effbc4  bl 0x710392eb40
7101effbc8  cbz w22,0x7101effda0
7101effbcc  ldr x8,[sp, #0x18]
7101effbd0  ldr x8,[x8]
7101effbd4  ldr x9,[x25]
7101effbd8  cmp x8,x9
7101effbdc  b.eq 0x7101effda0
7101effbe0  mov x21,xzr
7101effbe4  mov w24,wzr
7101effbe8  mov w19,#0x54
7101effbec  mov w28,#0x1b8
7101effbf0  str x25,[sp]
7101effbf4  ldr x10,[sp, #0x20]
7101effbf8  ldr w10,[x10]
7101effbfc  cmp w10,#0x2
7101effc00  b.cs 0x7101efff74
7101effc04  cmp x21,#0x5
7101effc08  b.cs 0x7101efff74
7101effc0c  adrp x11,0x7105328000
7101effc10  ldr x11,[x11, #0xe18]
7101effc14  ldr x11,[x11]
7101effc18  madd x10,x10,x28,x11
7101effc1c  mov w11,#0x50
7101effc20  madd x10,x21,x11,x10
7101effc24  ldr w23,[x10, #0x50]
7101effc28  cbz w23,0x7101effd80
7101effc2c  add x8,sp,#0x28
7101effc30  mov x0,x20
7101effc34  adrp x1,0x7104292000
7101effc38  add x1,x1,#0x4f2
7101effc3c  mov w2,w21
7101effc40  bl 0x7103776910
7101effc44  ldr x8,[sp, #0x30]
7101effc48  str x8,[sp, #0x10]
7101effc4c  ldr x8,[x8]
7101effc50  cbz x8,0x7101effc60
7101effc54  ldrb w9,[x8, #0x58]
7101effc58  orr w9,w9,#0x1
7101effc5c  strb w9,[x8, #0x58]
7101effc60  cmp w24,w22
7101effc64  b.cs 0x7101effd5c
7101effc68  mov w8,w24
7101effc6c  mov x24,xzr
7101effc70  mov w25,w8
7101effc74  str w8,[sp, #0xc]
7101effc78  ldr x8,[sp, #0x20]
7101effc7c  ldr w8,[x8]
7101effc80  cmp w8,#0x2
7101effc84  b.cs 0x7101efff74
7101effc88  cmp x24,#0x5
7101effc8c  b.cs 0x7101efff74
7101effc90  adrp x9,0x7105328000
7101effc94  ldr x9,[x9, #0xe18]
7101effc98  ldr x9,[x9]
7101effc9c  madd x8,x8,x28,x9
7101effca0  add x8,x8,x19
7101effca4  mov x0,x20
7101effca8  ldr w2,[x8, x24, LSL #0x2]
7101effcac  add x8,sp,#0x78
7101effcb0  adrp x1,0x7104319000
7101effcb4  add x1,x1,#0x73b
7101effcb8  add x27,x25,x24
7101effcbc  bl 0x7103776910
7101effcc0  ldr x26,[sp, #0x80]
7101effcc4  ldr x8,[x26]
7101effcc8  cbz x8,0x7101effcd8
7101effccc  ldrb w9,[x8, #0x58]
7101effcd0  orr w9,w9,#0x1
7101effcd4  strb w9,[x8, #0x58]
7101effcd8  add x8,sp,#0x68
7101effcdc  mov x0,x20
7101effce0  adrp x1,0x7104433000
7101effce4  add x1,x1,#0x90c
7101effce8  mov w2,w27
7101effcec  bl 0x7103776910
7101effcf0  ldr x0,[sp, #0x70]
7101effcf4  ldr x8,[x0]
7101effcf8  cbz x8,0x7101effd08
7101effcfc  ldrb w9,[x8, #0x58]
7101effd00  orr w9,w9,#0x1
7101effd04  strb w9,[x8, #0x58]
7101effd08  add x27,x27,#0x1
7101effd0c  adrp x8,0x710523d000
7101effd10  add x8,x8,#0x9a8
7101effd14  stp x8,xzr,[sp, #0x68]
7101effd18  cbz x0,0x7101effd20
7101effd1c  bl 0x710392eb40
7101effd20  adrp x8,0x710523d000
7101effd24  add x8,x8,#0x9a8
7101effd28  stp x8,xzr,[sp, #0x78]
7101effd2c  cbz x26,0x7101effd38
7101effd30  mov x0,x26
7101effd34  bl 0x710392eb40
7101effd38  add x24,x24,#0x1
7101effd3c  cmp w27,w22
7101effd40  b.cs 0x7101effd4c
7101effd44  cmp x24,x23
7101effd48  b.cc 0x7101effc78
7101effd4c  ldr w8,[sp, #0xc]
7101effd50  ldr x25,[sp]
7101effd54  add w8,w8,w24
7101effd58  mov w24,w8
7101effd5c  ldr x0,[sp, #0x10]
7101effd60  adrp x8,0x710523d000
7101effd64  add x8,x8,#0x9a8
7101effd68  stp x8,xzr,[sp, #0x28]
7101effd6c  cbz x0,0x7101effd74
7101effd70  bl 0x710392eb40
7101effd74  ldr x8,[sp, #0x18]
7101effd78  ldr x8,[x8]
7101effd7c  ldr x9,[x25]
7101effd80  cmp w24,w22
7101effd84  b.cs 0x7101effda0
7101effd88  sub x10,x8,x9
7101effd8c  add x21,x21,#0x1
7101effd90  add x19,x19,#0x50
7101effd94  asr x10,x10,#0x4
7101effd98  cmp x10,x21
7101effd9c  b.hi 0x7101effbf4
7101effda0  adrp x8,0x710532f000
7101effda4  ldr x8,[x8, #0x8d0]
7101effda8  ldr x0,[x8, #0x8]
7101effdac  ldrb w8,[x0, #0x191]
7101effdb0  cbnz w8,0x7101effe34
7101effdb4  mov x20,#0x4d0a
7101effdb8  movk x20,#0xafc6, LSL #16
7101effdbc  movk x20,#0x11, LSL #32
7101effdc0  mov w2,#0x4
7101effdc4  mov x1,x20
7101effdc8  bl 0x7103313f20
7101effdcc  tbz w0,#0x0,0x7101effe34
7101effdd0  add x0,sp,#0x28
7101effdd4  mov x1,x20
7101effdd8  bl 0x71024076d0
7101effddc  ldr x8,[sp, #0x38]
7101effde0  ldr x19,[sp, #0x20]
7101effde4  adrp x9,0x7104f73000
7101effde8  add x9,x9,#0xd50
7101effdec  str x9,[sp, #0x30]
7101effdf0  cbz x8,0x7101effe64
7101effdf4  adrp x8,0x7106dd5000
7101effdf8  ldrb w8,[x8, #0x3a8]
7101effdfc  cmp w8,#0x1
7101effe00  b.ne 0x7101effe64
7101effe04  adrp x9,0x7106dd5000
7101effe08  ldr w8,[sp, #0x40]
7101effe0c  ldr w9,[x9, #0x3ac]
7101effe10  cmp w8,w9
7101effe14  b.ne 0x7101effe64
7101effe18  ldr x8,[sp, #0x38]
7101effe1c  ldr wzr,[x8, #0x38]!
7101effe20  ldaxr w9,[x8]
7101effe24  sub w9,w9,#0x1
7101effe28  stlxr w10,w9,[x8]
7101effe2c  cbnz w10,0x7101effe20
7101effe30  b 0x7101effe64
7101effe34  mov x8,#0x650000000000
7101effe38  movk x8,#0x87, LSL #48
7101effe3c  ldr x19,[sp, #0x20]
7101effe40  stp xzr,x8,[sp, #0x38]
7101effe44  mov x8,#-0x1
7101effe48  stp x8,xzr,[sp, #0x50]
7101effe4c  adrp x8,0x7104f73000
7101effe50  add x8,x8,#0xd50
7101effe54  strb wzr,[sp, #0x48]
7101effe58  str wzr,[sp, #0x28]
7101effe5c  str xzr,[sp, #0x60]
7101effe60  str x8,[sp, #0x30]
7101effe64  adrp x9,0x7105314000
7101effe68  add x9,x9,#0x4d8
7101effe6c  str xzr,[sp, #0x38]
7101effe70  strb wzr,[sp, #0x48]
7101effe74  ldarb w8,[x9]
7101effe78  tbz w8,#0x0,0x7101efff34
7101effe7c  adrp x8,0x710530a000
7101effe80  ldrb w8,[x8, #0x976]
7101effe84  cmp w8,#0x2
7101effe88  b.hi 0x7101effeb8
7101effe8c  adrp x9,0x7104ada000
7101effe90  add x9,x9,#0xaa0
7101effe94  sxtb x8,w8
7101effe98  ldr x1,[x9, x8, LSL #0x3]
7101effe9c  adrp x8,0x710532f000
7101effea0  ldr x8,[x8, #0x8c0]
7101effea4  ldr x0,[x8, #0x8]
7101effea8  fmov s0,wzr
7101effeac  bl 0x71033112b0
7101effeb0  fcvtzs w8,s0
7101effeb4  b 0x7101effebc
7101effeb8  mov w8,wzr
7101effebc  str w8,[x19, #0x280]
7101effec0  ldp d9,d8,[sp, #0xa0]
7101effec4  ldp d11,d10,[sp, #0x90]
7101effec8  ldp x29,x30,[sp, #0x100]
7101effecc  ldp x20,x19,[sp, #0xf0]
7101effed0  ldp x22,x21,[sp, #0xe0]
7101effed4  ldp x24,x23,[sp, #0xd0]
7101effed8  ldp x26,x25,[sp, #0xc0]
7101effedc  ldp x28,x27,[sp, #0xb0]
7101effee0  add sp,sp,#0x110
7101effee4  ret
7101effee8  adrp x0,0x7105314000
7101effeec  add x0,x0,#0x4d8
7101effef0  mov x19,x9
7101effef4  bl 0x71039c06b0
7101effef8  mov x9,x19
7101effefc  cbz w0,0x7101eff26c
7101efff00  bl 0x7101764000
7101efff04  adrp x0,0x7101763000
7101efff08  add x0,x0,#0xc40
7101efff0c  adrp x1,0x71052c5000
7101efff10  add x1,x1,#0x180
7101efff14  adrp x2,0x7104f17000
7101efff18  add x2,x2,#0x0
7101efff1c  bl 0x71000001c0
7101efff20  adrp x0,0x7105314000
7101efff24  add x0,x0,#0x4d8
7101efff28  bl 0x71039c06c0
7101efff2c  mov x9,x19
7101efff30  b 0x7101eff26c
7101efff34  adrp x0,0x7105314000
7101efff38  add x0,x0,#0x4d8
7101efff3c  bl 0x71039c06b0
7101efff40  cbz w0,0x7101effe7c
7101efff44  bl 0x7101764000
7101efff48  adrp x0,0x7101763000
7101efff4c  add x0,x0,#0xc40
7101efff50  adrp x1,0x71052c5000
7101efff54  add x1,x1,#0x180
7101efff58  adrp x2,0x7104f17000
7101efff5c  add x2,x2,#0x0
7101efff60  bl 0x71000001c0
7101efff64  adrp x0,0x7105314000
7101efff68  add x0,x0,#0x4d8
7101efff6c  bl 0x71039c06c0
7101efff70  b 0x7101effe7c
7101efff74  bl 0x71039c2650
7101efff78  mov x0,x20
7101efff7c  bl 0x71039c1330
