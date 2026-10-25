// addr:      71038fa260
// offset:    0x38fa260
// name:      FUN_71038fa260
// mangled:   
// size:      1740

71038fa260  sub sp,sp,#0xb0
71038fa264  stp x28,x27,[sp, #0x50]
71038fa268  stp x26,x25,[sp, #0x60]
71038fa26c  stp x24,x23,[sp, #0x70]
71038fa270  stp x22,x21,[sp, #0x80]
71038fa274  stp x20,x19,[sp, #0x90]
71038fa278  stp x29,x30,[sp, #0xa0]
71038fa27c  add x29,sp,#0xa0
71038fa280  ldrb w8,[x0, #0xc]
71038fa284  mov x22,x2
71038fa288  mov x20,x1
71038fa28c  mov x19,x0
71038fa290  cmp w8,#0x1
71038fa294  b.ne 0x71038fa2bc
71038fa298  ldr x8,[x19, #0x20]
71038fa29c  ldr x10,[x19, #0x38]
71038fa2a0  ldr x11,[x8, #0x38]
71038fa2a4  add x10,x10,x11
71038fa2a8  ldr x9,[x8]
71038fa2ac  str x10,[x8]
71038fa2b0  ldr x10,[x19, #0x38]
71038fa2b4  sub x9,x9,x10
71038fa2b8  str x9,[x8, #0x38]
71038fa2bc  ldrb w8,[x20]
71038fa2c0  cmp w8,#0x3e
71038fa2c4  b.ne 0x71038fa2e0
71038fa2c8  ldr x8,[x19, #0x10]
71038fa2cc  sub x9,x8,#0x10
71038fa2d0  mov x26,xzr
71038fa2d4  add x20,x20,#0x1
71038fa2d8  str x9,[x19, #0x10]
71038fa2dc  b 0x71038fa2e8
71038fa2e0  ldr x26,[x22, #0x78]
71038fa2e4  ldr x9,[x26]
71038fa2e8  ldr w8,[x9, #0x8]
71038fa2ec  and w8,w8,#0x1f
71038fa2f0  cmp w8,#0x6
71038fa2f4  str x9,[sp, #0x10]
71038fa2f8  b.ne 0x71038fa304
71038fa2fc  ldr x24,[x9]
71038fa300  b 0x71038fa308
71038fa304  mov x24,xzr
71038fa308  add x8,x22,#0x38
71038fa30c  str x8,[sp, #0x30]
71038fa310  add x8,x22,#0x8
71038fa314  str x8,[sp, #0x8]
71038fa318  add x8,x22,#0x41
71038fa31c  str x8,[sp, #0x28]
71038fa320  add x8,x22,#0x3b
71038fa324  stp x20,x8,[sp, #0x18]
71038fa328  adrp x25,0x7104535000
71038fa32c  add x25,x25,#0xe20
71038fa330  mov w8,#0x1
71038fa334  adrp x21,0x710427f000
71038fa338  add x21,x21,#0x635
71038fa33c  mov x23,#-0x1
71038fa340  str x8,[sp, #0x38]
71038fa344  b 0x71038fa34c
71038fa348  add x20,x20,#0x1
71038fa34c  ldrb w8,[x20]
71038fa350  sub w9,w8,#0x4c
71038fa354  cmp w9,#0x29
71038fa358  b.hi 0x71038fa458
71038fa35c  ldrsw x8,[x25, x9, LSL #0x2]
71038fa360  add x8,x8,x25
71038fa364  br x8
71038fa368  cbz x24,0x71038fa378
71038fa36c  ldrb w8,[x24, #0x8]
71038fa370  cmp w8,#0x26
71038fa374  b.ne 0x71038fa49c
71038fa378  str x21,[x22, #0x20]
71038fa37c  adrp x8,0x71042b2000
71038fa380  add x8,x8,#0xc92
71038fa384  mov x27,x21
71038fa388  stur x23,[x22, #0x2c]
71038fa38c  b 0x71038fa4e4
71038fa390  cbz x26,0x71038fa468
71038fa394  ldrb w9,[x26, #0x42]
71038fa398  mov w8,#0xffffffff
71038fa39c  tbz w9,#0x1,0x71038fa3d0
71038fa3a0  ldr x8,[x26]
71038fa3a4  ldr x8,[x8]
71038fa3a8  ldr x9,[x8, #0x18]
71038fa3ac  ldr x8,[x9, #0x48]
71038fa3b0  cbz x8,0x71038fa6f8
71038fa3b4  ldr x10,[x26, #0x28]
71038fa3b8  ldr x9,[x9, #0x38]
71038fa3bc  sub x9,x10,x9
71038fa3c0  orr x10,xzr,#-0x100000000
71038fa3c4  add x9,x10,x9, LSL #0x1e
71038fa3c8  asr x9,x9,#0x1e
71038fa3cc  ldr w8,[x8, x9, LSL #0x0]
71038fa3d0  str w8,[x22, #0x28]
71038fa3d4  add x20,x20,#0x1
71038fa3d8  b 0x71038fa34c
71038fa3dc  cbz x26,0x71038fa3f4
71038fa3e0  ldrb w8,[x26, #0x42]
71038fa3e4  tbnz w8,#0x5,0x71038fa3f4
71038fa3e8  ldr x9,[x26, #0x10]
71038fa3ec  ldrb w8,[x9, #0x42]
71038fa3f0  tbnz w8,#0x1,0x71038fa678
71038fa3f4  str xzr,[x22, #0x10]
71038fa3f8  adrp x8,0x7104867000
71038fa3fc  add x8,x8,#0xc2e
71038fa400  stp xzr,x8,[x22, #0x8]
71038fa404  b 0x71038fa348
71038fa408  cbz x26,0x71038fa478
71038fa40c  ldrb w8,[x26, #0x42]
71038fa410  and w8,w8,#0x20
71038fa414  strb w8,[x22, #0x37]
71038fa418  add x20,x20,#0x1
71038fa41c  b 0x71038fa34c
71038fa420  cbz x24,0x71038fa488
71038fa424  ldrb w8,[x24, #0xa]
71038fa428  strb w8,[x22, #0x34]
71038fa42c  ldrb w8,[x24, #0x8]
71038fa430  cmp w8,#0x26
71038fa434  b.eq 0x71038fa48c
71038fa438  ldr x8,[x24, #0x18]
71038fa43c  ldrb w8,[x8, #0xb]
71038fa440  strb w8,[x22, #0x36]
71038fa444  ldr x8,[x24, #0x18]
71038fa448  ldrb w8,[x8, #0xa]
71038fa44c  strb w8,[x22, #0x35]
71038fa450  add x20,x20,#0x1
71038fa454  b 0x71038fa34c
71038fa458  cbz w8,0x71038fa77c
71038fa45c  str xzr,[sp, #0x38]
71038fa460  add x20,x20,#0x1
71038fa464  b 0x71038fa34c
71038fa468  mov w8,#0xffffffff
71038fa46c  str w8,[x22, #0x28]
71038fa470  add x20,x20,#0x1
71038fa474  b 0x71038fa34c
71038fa478  mov w8,wzr
71038fa47c  strb wzr,[x22, #0x37]
71038fa480  add x20,x20,#0x1
71038fa484  b 0x71038fa34c
71038fa488  strb wzr,[x22, #0x34]
71038fa48c  mov w8,#0x100
71038fa490  sturh w8,[x22, #0x35]
71038fa494  add x20,x20,#0x1
71038fa498  b 0x71038fa34c
71038fa49c  ldr x8,[x24, #0x18]
71038fa4a0  ldr x9,[x8, #0x68]
71038fa4a4  add x10,x9,#0x18
71038fa4a8  cmp x9,#0x0
71038fa4ac  adrp x9,0x710439b000
71038fa4b0  add x9,x9,#0xcfe
71038fa4b4  csel x27,x9,x10,eq
71038fa4b8  str x27,[x22, #0x20]
71038fa4bc  ldr w9,[x8, #0x28]
71038fa4c0  str w9,[x22, #0x2c]
71038fa4c4  ldr w8,[x8, #0x2c]
71038fa4c8  str w8,[x22, #0x30]
71038fa4cc  cmp w9,#0x0
71038fa4d0  adrp x8,0x7104464000
71038fa4d4  add x8,x8,#0x729
71038fa4d8  adrp x9,0x71043bd000
71038fa4dc  add x9,x9,#0x1df
71038fa4e0  csel x8,x9,x8,eq
71038fa4e4  mov x0,x27
71038fa4e8  str x8,[x22, #0x18]
71038fa4ec  bl 0x71039c0070
71038fa4f0  ldrb w8,[x27]
71038fa4f4  mov x28,x0
71038fa4f8  cmp w8,#0x40
71038fa4fc  b.eq 0x71038fa554
71038fa500  cmp w8,#0x3d
71038fa504  b.ne 0x71038fa5a8
71038fa508  add x1,x27,#0x1
71038fa50c  cmp x28,#0x3c
71038fa510  b.ls 0x71038fa604
71038fa514  ldr x8,[x1]
71038fa518  ldr x12,[sp, #0x30]
71038fa51c  str x8,[x12]
71038fa520  ldp x8,x9,[x1, #0x8]
71038fa524  add x20,x20,#0x1
71038fa528  ldp x10,x11,[x1, #0x18]
71038fa52c  stp x10,x11,[x12, #0x18]
71038fa530  stp x8,x9,[x12, #0x8]
71038fa534  ldrh w10,[x1, #0x38]
71038fa538  ldp x8,x9,[x1, #0x28]
71038fa53c  ldrb w11,[x1, #0x3a]
71038fa540  strb w11,[x12, #0x3a]
71038fa544  strh w10,[x12, #0x38]
71038fa548  stp x8,x9,[x12, #0x28]
71038fa54c  strb wzr,[x22, #0x73]
71038fa550  b 0x71038fa34c
71038fa554  cmp x28,#0x3c
71038fa558  b.ls 0x71038fa600
71038fa55c  ldr x8,[sp, #0x30]
71038fa560  mov w9,#0x2e
71038fa564  strb w9,[x8, #0x2]
71038fa568  mov w9,#0x2e2e
71038fa56c  strh w9,[x8]
71038fa570  add x8,x27,x28
71038fa574  ldp x9,x10,[x8, #-0x38]
71038fa578  ldr x13,[sp, #0x20]
71038fa57c  ldp x11,x12,[x8, #-0x28]
71038fa580  add x20,x20,#0x1
71038fa584  stp x11,x12,[x13, #0x10]
71038fa588  stp x9,x10,[x13]
71038fa58c  ldur x11,[x8, #-0x8]
71038fa590  ldp x9,x10,[x8, #-0x18]
71038fa594  ldrb w8,[x8]
71038fa598  strb w8,[x13, #0x38]
71038fa59c  stp x10,x11,[x13, #0x28]
71038fa5a0  str x9,[x13, #0x20]
71038fa5a4  b 0x71038fa34c
71038fa5a8  mov x0,x27
71038fa5ac  mov w1,#0xa
71038fa5b0  mov x23,x21
71038fa5b4  mov x21,x19
71038fa5b8  bl 0x71039c0080
71038fa5bc  ldr x9,[sp, #0x30]
71038fa5c0  mov w8,#0x22
71038fa5c4  strb w8,[x9, #0x8]
71038fa5c8  adrp x8,0x7104411000
71038fa5cc  add x8,x8,#0x3cb
71038fa5d0  ldr x8,[x8]
71038fa5d4  cmp x28,#0x2c
71038fa5d8  str x8,[x9]
71038fa5dc  b.hi 0x71038fa618
71038fa5e0  cbnz x0,0x71038fa618
71038fa5e4  ldr x19,[sp, #0x28]
71038fa5e8  mov x0,x19
71038fa5ec  mov x1,x27
71038fa5f0  mov x2,x28
71038fa5f4  bl 0x71039c00e0
71038fa5f8  add x8,x19,x28
71038fa5fc  b 0x71038fa658
71038fa600  add x1,x27,#0x1
71038fa604  ldr x0,[sp, #0x30]
71038fa608  mov x2,x28
71038fa60c  bl 0x71039c00e0
71038fa610  add x20,x20,#0x1
71038fa614  b 0x71038fa34c
71038fa618  sub x8,x0,x27
71038fa61c  cmp x0,#0x0
71038fa620  ldr x19,[sp, #0x28]
71038fa624  csel x8,x28,x8,eq
71038fa628  cmp x8,#0x2d
71038fa62c  mov w9,#0x2d
71038fa630  csel x28,x8,x9,cc
71038fa634  mov x0,x19
71038fa638  mov x1,x27
71038fa63c  mov x2,x28
71038fa640  bl 0x71039c00e0
71038fa644  add x8,x19,x28
71038fa648  mov w9,#0x2e
71038fa64c  strb w9,[x8, #0x2]
71038fa650  mov w9,#0x2e2e
71038fa654  strh w9,[x8], #0x3
71038fa658  mov w9,#0x5d22
71038fa65c  strb wzr,[x8, #0x2]
71038fa660  mov x19,x21
71038fa664  strh w9,[x8]
71038fa668  mov x21,x23
71038fa66c  mov x23,#-0x1
71038fa670  add x20,x20,#0x1
71038fa674  b 0x71038fa34c
71038fa678  tbnz w8,#0x2,0x71038fa708
71038fa67c  ldr x10,[x9]
71038fa680  ldr x9,[x9, #0x28]
71038fa684  mov x8,xzr
71038fa688  ldr x10,[x10]
71038fa68c  ldr x0,[x10, #0x18]
71038fa690  ldr x10,[x0, #0x38]
71038fa694  sub x9,x9,x10
71038fa698  lsr x9,x9,#0x2
71038fa69c  sub w1,w9,#0x1
71038fa6a0  ldr w9,[x10, w1, SXTW #0x2]
71038fa6a4  and w10,w9,#0x3f
71038fa6a8  sub w10,w10,#0x8
71038fa6ac  cmp w10,#0x21
71038fa6b0  b.hi 0x71038fa6dc
71038fa6b4  adrp x11,0x7104535000
71038fa6b8  add x11,x11,#0xec8
71038fa6bc  ldrsw x10,[x11, x10, LSL #0x2]
71038fa6c0  add x12,x10,x11
71038fa6c4  adrp x11,0x71042e5000
71038fa6c8  add x11,x11,#0xd43
71038fa6cc  mov x10,x11
71038fa6d0  br x12
71038fa6d4  and w8,w9,#0x3f
71038fa6d8  sub w8,w8,#0x7
71038fa6dc  ldr x9,[x19, #0x18]
71038fa6e0  add x8,x9,x8, LSL #0x3
71038fa6e4  ldr x8,[x8, #0xe0]
71038fa6e8  add x10,x8,#0x18
71038fa6ec  adrp x11,0x71043bd000
71038fa6f0  add x11,x11,#0x1e4
71038fa6f4  b 0x71038fa718
71038fa6f8  mov w8,#0xffffffff
71038fa6fc  str w8,[x22, #0x28]
71038fa700  add x20,x20,#0x1
71038fa704  b 0x71038fa34c
71038fa708  adrp x10,0x7104307000
71038fa70c  add x10,x10,#0xa71
71038fa710  adrp x11,0x7104328000
71038fa714  add x11,x11,#0xb58
71038fa718  stp x10,x11,[x22, #0x8]
71038fa71c  add x20,x20,#0x1
71038fa720  b 0x71038fa34c
71038fa724  mov w8,#0x1
71038fa728  b 0x71038fa6dc
71038fa72c  ldr x3,[sp, #0x8]
71038fa730  ubfx w2,w9,#0x6,#0x8
71038fa734  bl 0x71038fa930
71038fa738  str x0,[x22, #0x10]
71038fa73c  cbnz x0,0x71038fa348
71038fa740  b 0x71038fa3f8
71038fa744  mov w8,#0x12
71038fa748  b 0x71038fa6dc
71038fa74c  mov w8,#0x13
71038fa750  b 0x71038fa6dc
71038fa754  mov w8,#0x4
71038fa758  b 0x71038fa6dc
71038fa75c  mov w8,#0x16
71038fa760  b 0x71038fa6dc
71038fa764  mov w8,#0x5
71038fa768  b 0x71038fa6dc
71038fa76c  mov w8,#0x14
71038fa770  b 0x71038fa6dc
71038fa774  mov w8,#0x15
71038fa778  b 0x71038fa6dc
71038fa77c  ldr x20,[sp, #0x18]
71038fa780  mov w1,#0x66
71038fa784  mov x0,x20
71038fa788  bl 0x71039c0080
71038fa78c  cbz x0,0x71038fa7ac
71038fa790  ldr x10,[sp, #0x10]
71038fa794  ldr x8,[x19, #0x10]
71038fa798  ldp x9,x10,[x10]
71038fa79c  stp x9,x10,[x8]
71038fa7a0  ldr x8,[x19, #0x10]
71038fa7a4  add x8,x8,#0x10
71038fa7a8  str x8,[x19, #0x10]
71038fa7ac  ldrb w8,[x19, #0xc]
71038fa7b0  cmp w8,#0x1
71038fa7b4  mov w26,#0x13
71038fa7b8  b.ne 0x71038fa7e0
71038fa7bc  ldr x8,[x19, #0x20]
71038fa7c0  ldr x10,[x19, #0x38]
71038fa7c4  ldr x11,[x8, #0x38]
71038fa7c8  add x10,x10,x11
71038fa7cc  ldr x9,[x8]
71038fa7d0  str x10,[x8]
71038fa7d4  ldr x10,[x19, #0x38]
71038fa7d8  sub x9,x9,x10
71038fa7dc  str x9,[x8, #0x38]
71038fa7e0  mov w1,#0x4c
71038fa7e4  mov x0,x20
71038fa7e8  bl 0x71039c0080
71038fa7ec  cbz x0,0x71038fa908
71038fa7f0  cbz x24,0x71038fa800
71038fa7f4  ldrb w8,[x24, #0x8]
71038fa7f8  cmp w8,#0x26
71038fa7fc  b.ne 0x71038fa818
71038fa800  ldr x8,[x19, #0x10]
71038fa804  str wzr,[x8, #0x8]
71038fa808  ldr x8,[x19, #0x10]
71038fa80c  add x8,x8,#0x10
71038fa810  str x8,[x19, #0x10]
71038fa814  b 0x71038fa908
71038fa818  ldr x8,[x24, #0x18]
71038fa81c  ldr x20,[x8, #0x48]
71038fa820  mov x0,x19
71038fa824  bl 0x710391e050
71038fa828  ldr x8,[x19, #0x10]
71038fa82c  mov w9,#0x45
71038fa830  str x0,[x8]
71038fa834  str w9,[x8, #0x8]
71038fa838  ldr x8,[x19, #0x10]
71038fa83c  add x8,x8,#0x10
71038fa840  str x8,[x19, #0x10]
71038fa844  ldr x8,[x24, #0x18]
71038fa848  ldr w8,[x8, #0x1c]
71038fa84c  cmp w8,#0x1
71038fa850  b.lt 0x71038fa908
71038fa854  mov x21,x0
71038fa858  mov x22,xzr
71038fa85c  mov w23,#0x1
71038fa860  adrp x25,0x7104862000
71038fa864  add x25,x25,#0x960
71038fa868  ldrsw x8,[x20, x22, LSL #0x2]
71038fa86c  ldr w10,[x21, #0xc]
71038fa870  sub x9,x8,#0x1
71038fa874  cmp x9,x10
71038fa878  b.cs 0x71038fa888
71038fa87c  ldr x10,[x21, #0x10]
71038fa880  add x0,x10,x9, LSL #0x4
71038fa884  b 0x71038fa8cc
71038fa888  ldrb w10,[x21, #0xb]
71038fa88c  ldr x9,[x21, #0x18]
71038fa890  mov w11,#0xffffffff
71038fa894  lsl w10,w11,w10
71038fa898  bic w10,w8,w10
71038fa89c  sxtw x10,w10
71038fa8a0  add x0,x9,x10, LSL #0x5
71038fa8a4  ldr w9,[x0, #0x18]
71038fa8a8  cmp w9,#0x13
71038fa8ac  b.ne 0x71038fa8bc
71038fa8b0  ldr x9,[x0, #0x10]
71038fa8b4  cmp x9,x8
71038fa8b8  b.eq 0x71038fa8cc
71038fa8bc  ldrsw x9,[x0, #0x1c]
71038fa8c0  add x0,x0,x9, LSL #0x5
71038fa8c4  cbnz w9,0x71038fa8a4
71038fa8c8  b 0x71038fa8d4
71038fa8cc  cmp x0,x25
71038fa8d0  b.ne 0x71038fa8ec
71038fa8d4  add x2,sp,#0x40
71038fa8d8  mov x0,x19
71038fa8dc  mov x1,x21
71038fa8e0  str x8,[sp, #0x40]
71038fa8e4  str w26,[sp, #0x48]
71038fa8e8  bl 0x710391d940
71038fa8ec  str w23,[x0]
71038fa8f0  str w23,[x0, #0x8]
71038fa8f4  ldr x8,[x24, #0x18]
71038fa8f8  ldrsw x8,[x8, #0x1c]
71038fa8fc  add x22,x22,#0x1
71038fa900  cmp x22,x8
71038fa904  b.lt 0x71038fa868
71038fa908  ldr x0,[sp, #0x38]
71038fa90c  ldp x29,x30,[sp, #0xa0]
71038fa910  ldp x20,x19,[sp, #0x90]
71038fa914  ldp x22,x21,[sp, #0x80]
71038fa918  ldp x24,x23,[sp, #0x70]
71038fa91c  ldp x26,x25,[sp, #0x60]
71038fa920  ldp x28,x27,[sp, #0x50]
71038fa924  add sp,sp,#0xb0
71038fa928  ret
