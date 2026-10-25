// addr:      7101a3c230
// offset:    0x1a3c230
// name:      FUN_7101a3c230
// mangled:   
// size:      16508

7101a3c230  sub sp,sp,#0x1c0
7101a3c234  str d14,[sp, #0x120]
7101a3c238  stp d13,d12,[sp, #0x130]
7101a3c23c  stp d11,d10,[sp, #0x140]
7101a3c240  stp d9,d8,[sp, #0x150]
7101a3c244  stp x28,x27,[sp, #0x160]
7101a3c248  stp x26,x25,[sp, #0x170]
7101a3c24c  stp x24,x23,[sp, #0x180]
7101a3c250  stp x22,x21,[sp, #0x190]
7101a3c254  stp x20,x19,[sp, #0x1a0]
7101a3c258  stp x29,x30,[sp, #0x1b0]
7101a3c25c  add x29,sp,#0x1b0
7101a3c260  mov w8,#0xffffffff
7101a3c264  str w8,[x0, #0x308]
7101a3c268  mov x27,x0
7101a3c26c  ldp x8,x9,[x0, #0x198]
7101a3c270  cmp x8,x9
7101a3c274  b.eq 0x7101a3c29c
7101a3c278  ldr x10,[x8, #0x8]
7101a3c27c  add x8,x8,#0x10
7101a3c280  ldrb w11,[x10, #0x36]
7101a3c284  ldr x10,[x10, #0x20]
7101a3c288  cmp w11,#0x0
7101a3c28c  cset w11,eq
7101a3c290  cmp x9,x8
7101a3c294  strb w11,[x10, #0x165]
7101a3c298  b.ne 0x7101a3c278
7101a3c29c  ldr x8,[x27, #0x170]
7101a3c2a0  strb wzr,[x8, #0x2c]
7101a3c2a4  ldr x8,[x27, #0x180]
7101a3c2a8  strb wzr,[x8, #0x2c]
7101a3c2ac  ldr x8,[x27, #0x190]
7101a3c2b0  strb wzr,[x8, #0x2c]
7101a3c2b4  stp xzr,xzr,[sp, #0xd8]
7101a3c2b8  str xzr,[sp, #0xd0]
7101a3c2bc  ldp x23,x24,[x27, #0x198]
7101a3c2c0  orr x28,xzr,#0x5555555555555555
7101a3c2c4  movk x28,#0x555, LSL #48
7101a3c2c8  subs x8,x24,x23
7101a3c2cc  b.eq 0x7101a3c34c
7101a3c2d0  asr x19,x8,#0x4
7101a3c2d4  cmp x19,x28
7101a3c2d8  b.hi 0x7101a4027c
7101a3c2dc  add x8,x19,x19, LSL #0x1
7101a3c2e0  lsl x8,x8,#0x4
7101a3c2e4  cmp x8,#0x0
7101a3c2e8  csinc x20,x8,xzr,ne
7101a3c2ec  mov w0,#0x10
7101a3c2f0  mov x1,x20
7101a3c2f4  bl 0x710392e290
7101a3c2f8  cbnz x0,0x7101a3c33c
7101a3c2fc  adrp x8,0x7105332000
7101a3c300  ldr x0,[x8, #0xf00]
7101a3c304  cbz x0,0x7101a3c338
7101a3c308  str wzr,[sp, #0x70]
7101a3c30c  str x20,[sp, #0x88]
7101a3c310  ldr x8,[x0]
7101a3c314  ldr x8,[x8, #0x30]
7101a3c318  add x1,sp,#0x70
7101a3c31c  add x2,sp,#0x88
7101a3c320  blr x8
7101a3c324  tbz w0,#0x0,0x7101a3c338
7101a3c328  mov w0,#0x10
7101a3c32c  mov x1,x20
7101a3c330  bl 0x710392e290
7101a3c334  cbnz x0,0x7101a3c33c
7101a3c338  mov x0,xzr
7101a3c33c  orr w8,wzr,#0x30
7101a3c340  madd x8,x19,x8,x0
7101a3c344  str x8,[sp, #0xe0]
7101a3c348  stp x0,x0,[sp, #0xd0]
7101a3c34c  cmp x23,x24
7101a3c350  stur x27,[x29, #-0x88]
7101a3c354  b.eq 0x7101a3c5d8
7101a3c358  adrp x8,0x7104472000
7101a3c35c  ldr s8,[x8, #0x8b8]
7101a3c360  adrp x8,0x7104472000
7101a3c364  ldr s9,[x8, #0x4c4]
7101a3c368  orr x22,xzr,#-0x5555555555555556
7101a3c36c  movk x22,#0xaaab
7101a3c370  b 0x7101a3c37c
7101a3c374  mov x0,xzr
7101a3c378  b 0x7101a3c544
7101a3c37c  ldr x8,[x23, #0x8]
7101a3c380  ldr x9,[x8, #0x20]
7101a3c384  ldr x10,[x9, #0x100]
7101a3c388  ldr q0,[x10, #0x60]
7101a3c38c  ldr x10,[x27, #0x200]
7101a3c390  ldr s2,[x10, #0xbf0]
7101a3c394  dup s1,v0.S[0x1]
7101a3c398  fcmp s2,s0
7101a3c39c  b.lt 0x7101a3c3d0
7101a3c3a0  ldr s2,[x10, #0xbec]
7101a3c3a4  fcmp s2,s0
7101a3c3a8  b.hi 0x7101a3c3d0
7101a3c3ac  ldr s2,[x10, #0xbf8]
7101a3c3b0  fcmp s2,s1
7101a3c3b4  b.lt 0x7101a3c3d0
7101a3c3b8  ldr s2,[x10, #0xbf4]
7101a3c3bc  fcmp s2,s1
7101a3c3c0  b.hi 0x7101a3c3d0
7101a3c3c4  ldr w10,[x8, #0x2c]
7101a3c3c8  cmn w10,#0x1
7101a3c3cc  b.ne 0x7101a3c5cc
7101a3c3d0  ldrb w10,[x8, #0x36]
7101a3c3d4  cbz w10,0x7101a3c5cc
7101a3c3d8  ldrb w9,[x9, #0x165]
7101a3c3dc  cbnz w9,0x7101a3c5cc
7101a3c3e0  ldr x9,[x8, #0x10]
7101a3c3e4  ldr x9,[x9, #0x8]
7101a3c3e8  ldr w10,[x9, #0x484]
7101a3c3ec  cbz w10,0x7101a3c3f8
7101a3c3f0  mov w10,#0x1
7101a3c3f4  b 0x7101a3c404
7101a3c3f8  ldr w10,[x9, #0x488]
7101a3c3fc  cmn w10,#0x1
7101a3c400  cset w10,ne
7101a3c404  ldrb w11,[x9, #0x4aa]
7101a3c408  cmp w11,#0x0
7101a3c40c  ccmp w10,#0x0,#0x4,ne
7101a3c410  b.ne 0x7101a3c41c
7101a3c414  mov w25,wzr
7101a3c418  b 0x7101a3c42c
7101a3c41c  ldrb w9,[x9, #0x1a8]
7101a3c420  tst w9,#0x2
7101a3c424  mov w9,#0x1
7101a3c428  cinc w25,w9,ne
7101a3c42c  fadd s0,s0,s8
7101a3c430  movi v2.2D,#0x0
7101a3c434  fsub s1,s9,s1
7101a3c438  mov v2.S[0x0],v0.S[0x0]
7101a3c43c  ldr w28,[x8, #0x28]
7101a3c440  mov v2.S[0x1],v1.S[0x0]
7101a3c444  ldp x8,x9,[sp, #0xd8]
7101a3c448  cmp x8,x9
7101a3c44c  b.eq 0x7101a3c488
7101a3c450  str w25,[x8]
7101a3c454  ldr x9,[sp, #0x88]
7101a3c458  ldr w10,[sp, #0x90]
7101a3c45c  str q2,[x8, #0x10]
7101a3c460  stur x9,[x8, #0x4]
7101a3c464  mov x9,#-0x1
7101a3c468  str w10,[x8, #0xc]
7101a3c46c  stp wzr,w28,[x8, #0x20]
7101a3c470  orr x28,xzr,#0x5555555555555555
7101a3c474  movk x28,#0x555, LSL #48
7101a3c478  str x9,[x8, #0x28]
7101a3c47c  add x8,x8,#0x30
7101a3c480  str x8,[sp, #0xd8]
7101a3c484  b 0x7101a3c5cc
7101a3c488  ldr x20,[sp, #0xd0]
7101a3c48c  sub x21,x8,x20
7101a3c490  asr x8,x21,#0x4
7101a3c494  mul x27,x8,x22
7101a3c498  orr x19,xzr,#0x5555555555555555
7101a3c49c  movk x19,#0x555, LSL #48
7101a3c4a0  add x8,x27,#0x1
7101a3c4a4  cmp x8,x19
7101a3c4a8  b.hi 0x7101a40274
7101a3c4ac  sub x9,x9,x20
7101a3c4b0  asr x9,x9,#0x4
7101a3c4b4  mul x9,x9,x22
7101a3c4b8  orr x10,xzr,#-0x5555555555555556
7101a3c4bc  movk x10,#0x2aa, LSL #48
7101a3c4c0  mov x26,x22
7101a3c4c4  cmp x9,x10
7101a3c4c8  b.cs 0x7101a3c4dc
7101a3c4cc  lsl x9,x9,#0x1
7101a3c4d0  cmp x9,x8
7101a3c4d4  csel x19,x8,x9,cc
7101a3c4d8  cbz x19,0x7101a3c374
7101a3c4dc  add x8,x19,x19, LSL #0x1
7101a3c4e0  mov w0,#0x10
7101a3c4e4  lsl x8,x8,#0x4
7101a3c4e8  str q2,[sp, #0x50]
7101a3c4ec  cmp x8,#0x0
7101a3c4f0  csinc x22,x8,xzr,ne
7101a3c4f4  mov x1,x22
7101a3c4f8  bl 0x710392e290
7101a3c4fc  cbnz x0,0x7101a3c540
7101a3c500  adrp x8,0x7105332000
7101a3c504  ldr x0,[x8, #0xf00]
7101a3c508  cbz x0,0x7101a3c53c
7101a3c50c  str wzr,[sp, #0x70]
7101a3c510  str x22,[sp, #0x88]
7101a3c514  ldr x8,[x0]
7101a3c518  ldr x8,[x8, #0x30]
7101a3c51c  add x1,sp,#0x70
7101a3c520  add x2,sp,#0x88
7101a3c524  blr x8
7101a3c528  tbz w0,#0x0,0x7101a3c53c
7101a3c52c  mov w0,#0x10
7101a3c530  mov x1,x22
7101a3c534  bl 0x710392e290
7101a3c538  cbnz x0,0x7101a3c540
7101a3c53c  mov x0,xzr
7101a3c540  ldr q2,[sp, #0x50]
7101a3c544  orr w11,wzr,#0x30
7101a3c548  madd x8,x27,x11,x0
7101a3c54c  str w25,[x8]
7101a3c550  ldr x9,[sp, #0x88]
7101a3c554  ldr w10,[sp, #0x90]
7101a3c558  stur x9,[x8, #0x4]
7101a3c55c  mov x9,#-0x1
7101a3c560  str x9,[x8, #0x28]
7101a3c564  orr x9,xzr,#0x5555555555555555
7101a3c568  str q2,[x8, #0x10]
7101a3c56c  movk x9,#0xd555, LSL #48
7101a3c570  smulh x9,x21,x9
7101a3c574  str w10,[x8, #0xc]
7101a3c578  asr x10,x9,#0x3
7101a3c57c  add x9,x10,x9, LSR #0x3f
7101a3c580  madd x19,x19,x11,x0
7101a3c584  add x25,x8,#0x30
7101a3c588  stp wzr,w28,[x8, #0x20]
7101a3c58c  madd x22,x9,x11,x8
7101a3c590  cmp x21,#0x1
7101a3c594  b.lt 0x7101a3c5a8
7101a3c598  mov x0,x22
7101a3c59c  mov x1,x20
7101a3c5a0  mov x2,x21
7101a3c5a4  bl 0x71039c00e0
7101a3c5a8  ldur x27,[x29, #-0x88]
7101a3c5ac  orr x28,xzr,#0x5555555555555555
7101a3c5b0  str x19,[sp, #0xe0]
7101a3c5b4  stp x22,x25,[sp, #0xd0]
7101a3c5b8  movk x28,#0x555, LSL #48
7101a3c5bc  mov x22,x26
7101a3c5c0  cbz x20,0x7101a3c5cc
7101a3c5c4  mov x0,x20
7101a3c5c8  bl 0x710392eb40
7101a3c5cc  add x23,x23,#0x10
7101a3c5d0  cmp x24,x23
7101a3c5d4  b.ne 0x7101a3c37c
7101a3c5d8  ldr x0,[x27, #0x228]
7101a3c5dc  add x1,sp,#0xd0
7101a3c5e0  add x19,x27,#0x198
7101a3c5e4  add x21,x27,#0x228
7101a3c5e8  bl 0x710376e720
7101a3c5ec  ldp x22,x20,[sp, #0xd0]
7101a3c5f0  mov w24,#0x1
7101a3c5f4  mov w25,#0x1
7101a3c5f8  cmp x22,x20
7101a3c5fc  b.eq 0x7101a3c71c
7101a3c600  ldr w8,[x22, #0x28]
7101a3c604  cmn w8,#0x1
7101a3c608  b.eq 0x7101a3c654
7101a3c60c  ldp x9,x10,[x27, #0x198]
7101a3c610  ldrsw x8,[x22, #0x24]
7101a3c614  sub x10,x10,x9
7101a3c618  asr x10,x10,#0x4
7101a3c61c  cmp x10,x8
7101a3c620  b.ls 0x7101a40290
7101a3c624  add x8,x9,x8, LSL #0x4
7101a3c628  ldr x8,[x8, #0x8]
7101a3c62c  ldr x8,[x8, #0x20]
7101a3c630  strb w24,[x8, #0x165]
7101a3c634  ldrb w8,[x27, #0x31c]
7101a3c638  cbnz w8,0x7101a3c654
7101a3c63c  ldrsw x8,[x22, #0x28]
7101a3c640  cmp w8,#0x3
7101a3c644  b.cs 0x7101a4027c
7101a3c648  add x8,x27,x8, LSL #0x4
7101a3c64c  ldr x8,[x8, #0x170]
7101a3c650  strb w24,[x8, #0x2c]
7101a3c654  ldr w8,[x22, #0x2c]
7101a3c658  cmn w8,#0x1
7101a3c65c  b.eq 0x7101a3c70c
7101a3c660  cmp w8,#0x2
7101a3c664  b.ne 0x7101a3c6e0
7101a3c668  ldr x8,[x21]
7101a3c66c  ldr x9,[x8, #0x1b8]
7101a3c670  cbz x9,0x7101a3c6dc
7101a3c674  add x10,x8,#0x1b8
7101a3c678  mov x8,x10
7101a3c67c  ldr w11,[x9, #0x20]
7101a3c680  cmp w11,#0x2
7101a3c684  cset w11,lt
7101a3c688  csel x8,x8,x9,lt
7101a3c68c  ldr x9,[x9, w11, UXTW #0x3]
7101a3c690  cbnz x9,0x7101a3c67c
7101a3c694  cmp x8,x10
7101a3c698  b.eq 0x7101a3c6dc
7101a3c69c  ldr w9,[x8, #0x20]
7101a3c6a0  cmp w9,#0x2
7101a3c6a4  b.gt 0x7101a3c6dc
7101a3c6a8  ldr x23,[x8, #0x28]
7101a3c6ac  cbz x23,0x7101a3c6dc
7101a3c6b0  ldr x8,[x23]
7101a3c6b4  ldr x8,[x8, #0x1f8]
7101a3c6b8  mov x0,x23
7101a3c6bc  mov w1,wzr
7101a3c6c0  blr x8
7101a3c6c4  ldr x8,[x23]
7101a3c6c8  ldr x8,[x8, #0x388]
7101a3c6cc  mov w1,#0x1
7101a3c6d0  mov x0,x23
7101a3c6d4  mov w2,wzr
7101a3c6d8  blr x8
7101a3c6dc  strb w24,[x27, #0x31d]
7101a3c6e0  ldp x9,x10,[x27, #0x198]
7101a3c6e4  ldrsw x8,[x22, #0x24]
7101a3c6e8  sub x10,x10,x9
7101a3c6ec  asr x10,x10,#0x4
7101a3c6f0  cmp x10,x8
7101a3c6f4  b.ls 0x7101a40290
7101a3c6f8  add x8,x9,x8, LSL #0x4
7101a3c6fc  ldr x8,[x8, #0x8]
7101a3c700  ldr x0,[x8, #0x20]
7101a3c704  bl 0x71032d3260
7101a3c708  mov w25,wzr
7101a3c70c  add x22,x22,#0x30
7101a3c710  cmp x22,x20
7101a3c714  b.ne 0x7101a3c600
7101a3c718  ldr x22,[sp, #0xd0]
7101a3c71c  cbz x22,0x7101a3c72c
7101a3c720  mov x0,x22
7101a3c724  str x22,[sp, #0xd8]
7101a3c728  bl 0x710392eb40
7101a3c72c  ldr x0,[x27, #0x170]
7101a3c730  bl 0x71032d6e10
7101a3c734  ldr x0,[x27, #0x180]
7101a3c738  bl 0x71032d6e10
7101a3c73c  ldr x0,[x27, #0x190]
7101a3c740  bl 0x71032d6e10
7101a3c744  ldp x20,x23,[x27, #0x198]
7101a3c748  cmp x20,x23
7101a3c74c  b.eq 0x7101a3c82c
7101a3c750  mov w24,#0x1
7101a3c754  tbz w25,#0x0,0x7101a3c814
7101a3c758  ldr x8,[x20, #0x8]
7101a3c75c  ldrb w9,[x8, #0x36]
7101a3c760  cbz w9,0x7101a3c81c
7101a3c764  ldr x8,[x8, #0x10]
7101a3c768  ldr x8,[x8, #0x8]
7101a3c76c  ldrb w9,[x8, #0x4aa]
7101a3c770  cbz w9,0x7101a3c81c
7101a3c774  ldrb w8,[x8, #0x1b0]
7101a3c778  tbz w8,#0x1,0x7101a3c81c
7101a3c77c  ldrb w8,[x27, #0x31c]
7101a3c780  cbz w8,0x7101a3c81c
7101a3c784  mov w1,#0x2
7101a3c788  mov x0,x21
7101a3c78c  mov w2,wzr
7101a3c790  bl 0x7103771be0
7101a3c794  ldr x8,[x21]
7101a3c798  ldr x9,[x8, #0x1b8]
7101a3c79c  cbz x9,0x7101a3c808
7101a3c7a0  add x10,x8,#0x1b8
7101a3c7a4  mov x8,x10
7101a3c7a8  ldr w11,[x9, #0x20]
7101a3c7ac  cmp w11,#0x2
7101a3c7b0  cset w11,lt
7101a3c7b4  csel x8,x8,x9,lt
7101a3c7b8  ldr x9,[x9, w11, UXTW #0x3]
7101a3c7bc  cbnz x9,0x7101a3c7a8
7101a3c7c0  cmp x8,x10
7101a3c7c4  b.eq 0x7101a3c808
7101a3c7c8  ldr w9,[x8, #0x20]
7101a3c7cc  cmp w9,#0x2
7101a3c7d0  b.gt 0x7101a3c808
7101a3c7d4  ldr x22,[x8, #0x28]
7101a3c7d8  cbz x22,0x7101a3c808
7101a3c7dc  ldr x8,[x22]
7101a3c7e0  ldr x8,[x8, #0x1f8]
7101a3c7e4  mov x0,x22
7101a3c7e8  mov w1,wzr
7101a3c7ec  blr x8
7101a3c7f0  ldr x8,[x22]
7101a3c7f4  ldr x8,[x8, #0x388]
7101a3c7f8  mov w1,#0x1
7101a3c7fc  mov x0,x22
7101a3c800  mov w2,wzr
7101a3c804  blr x8
7101a3c808  mov w25,wzr
7101a3c80c  strb w24,[x27, #0x31d]
7101a3c810  b 0x7101a3c820
7101a3c814  mov w25,wzr
7101a3c818  b 0x7101a3c820
7101a3c81c  mov w25,#0x1
7101a3c820  add x20,x20,#0x10
7101a3c824  cmp x20,x23
7101a3c828  b.ne 0x7101a3c754
7101a3c82c  ldr x8,[x21]
7101a3c830  ldr w8,[x8, #0x25c]
7101a3c834  cmp w8,#0x1
7101a3c838  str x19,[sp, #0x8]
7101a3c83c  b.eq 0x7101a3c8e4
7101a3c840  cmp w8,#0x2
7101a3c844  mov w23,#0xffffffff
7101a3c848  b.ne 0x7101a3ca78
7101a3c84c  ldrb w8,[x27, #0x31c]
7101a3c850  cbz w8,0x7101a3ca78
7101a3c854  adrp x19,0x710532f000
7101a3c858  ldr x8,[x19, #0x8d0]
7101a3c85c  ldr x0,[x8, #0x8]
7101a3c860  ldrb w8,[x0, #0x191]
7101a3c864  cbnz w8,0x7101a3c8f0
7101a3c868  mov x21,#0x9adc
7101a3c86c  movk x21,#0xd3b1, LSL #16
7101a3c870  movk x21,#0x13, LSL #32
7101a3c874  mov w2,#0x4
7101a3c878  mov x1,x21
7101a3c87c  bl 0x7103313f20
7101a3c880  tbz w0,#0x0,0x7101a3c8f0
7101a3c884  add x0,sp,#0xd0
7101a3c888  mov x1,x21
7101a3c88c  bl 0x71024076d0
7101a3c890  ldr x8,[sp, #0xe0]
7101a3c894  adrp x9,0x7104f73000
7101a3c898  add x9,x9,#0xd50
7101a3c89c  str x9,[sp, #0xd8]
7101a3c8a0  cbz x8,0x7101a3c91c
7101a3c8a4  adrp x8,0x7106dd5000
7101a3c8a8  ldrb w8,[x8, #0x3a8]
7101a3c8ac  cmp w8,#0x1
7101a3c8b0  b.ne 0x7101a3c91c
7101a3c8b4  adrp x9,0x7106dd5000
7101a3c8b8  ldr w8,[sp, #0xe8]
7101a3c8bc  ldr w9,[x9, #0x3ac]
7101a3c8c0  cmp w8,w9
7101a3c8c4  b.ne 0x7101a3c91c
7101a3c8c8  ldr x8,[sp, #0xe0]
7101a3c8cc  ldr wzr,[x8, #0x38]!
7101a3c8d0  ldaxr w9,[x8]
7101a3c8d4  sub w9,w9,#0x1
7101a3c8d8  stlxr w10,w9,[x8]
7101a3c8dc  cbnz w10,0x7101a3c8d0
7101a3c8e0  b 0x7101a3c91c
7101a3c8e4  orr w8,wzr,#0x3
7101a3c8e8  str w8,[x27, #0x134]
7101a3c8ec  b 0x7101a3ca74
7101a3c8f0  mov w8,#0x6500
7101a3c8f4  movk w8,#0x87, LSL #16
7101a3c8f8  stp wzr,w8,[sp, #0xe8]
7101a3c8fc  mov x8,#-0x1
7101a3c900  stp x8,xzr,[sp, #0xf8]
7101a3c904  adrp x8,0x7104f73000
7101a3c908  add x8,x8,#0xd50
7101a3c90c  strb wzr,[sp, #0xf0]
7101a3c910  str wzr,[sp, #0xd0]
7101a3c914  str xzr,[sp, #0x108]
7101a3c918  stp x8,xzr,[sp, #0xd8]
7101a3c91c  ldr x8,[x19, #0x8d0]
7101a3c920  str xzr,[sp, #0xe0]
7101a3c924  strb wzr,[sp, #0xf0]
7101a3c928  ldr x0,[x8, #0x8]
7101a3c92c  ldrb w8,[x0, #0x191]
7101a3c930  cbnz w8,0x7101a3c9b0
7101a3c934  mov x21,#0x1361
7101a3c938  movk x21,#0xa306, LSL #16
7101a3c93c  movk x21,#0x17, LSL #32
7101a3c940  mov w2,#0x4
7101a3c944  mov x1,x21
7101a3c948  bl 0x7103313f20
7101a3c94c  tbz w0,#0x0,0x7101a3c9b0
7101a3c950  add x0,sp,#0x88
7101a3c954  mov x1,x21
7101a3c958  bl 0x71024076d0
7101a3c95c  ldr x8,[sp, #0x98]
7101a3c960  adrp x9,0x7104f73000
7101a3c964  add x9,x9,#0xd50
7101a3c968  str x9,[sp, #0x90]
7101a3c96c  cbz x8,0x7101a3c9dc
7101a3c970  adrp x8,0x7106dd5000
7101a3c974  ldrb w8,[x8, #0x3a8]
7101a3c978  cmp w8,#0x1
7101a3c97c  b.ne 0x7101a3c9dc
7101a3c980  adrp x9,0x7106dd5000
7101a3c984  ldr w8,[sp, #0xa0]
7101a3c988  ldr w9,[x9, #0x3ac]
7101a3c98c  cmp w8,w9
7101a3c990  b.ne 0x7101a3c9dc
7101a3c994  ldr x8,[sp, #0x98]
7101a3c998  ldr wzr,[x8, #0x38]!
7101a3c99c  ldaxr w9,[x8]
7101a3c9a0  sub w9,w9,#0x1
7101a3c9a4  stlxr w10,w9,[x8]
7101a3c9a8  cbnz w10,0x7101a3c99c
7101a3c9ac  b 0x7101a3c9dc
7101a3c9b0  mov w8,#0x6500
7101a3c9b4  movk w8,#0x87, LSL #16
7101a3c9b8  stp wzr,w8,[sp, #0xa0]
7101a3c9bc  mov x8,#-0x1
7101a3c9c0  stp x8,xzr,[sp, #0xb0]
7101a3c9c4  adrp x8,0x7104f73000
7101a3c9c8  add x8,x8,#0xd50
7101a3c9cc  strb wzr,[sp, #0xa8]
7101a3c9d0  str wzr,[sp, #0x88]
7101a3c9d4  str xzr,[sp, #0xc0]
7101a3c9d8  stp x8,xzr,[sp, #0x90]
7101a3c9dc  str xzr,[sp, #0x98]
7101a3c9e0  strb wzr,[sp, #0xa8]
7101a3c9e4  ldp x19,x20,[x27, #0x198]
7101a3c9e8  cmp x19,x20
7101a3c9ec  b.eq 0x7101a3ca68
7101a3c9f0  fmov s8,0x3f800000
7101a3c9f4  mov x21,#0x1026
7101a3c9f8  movk x21,#0xf795, LSL #16
7101a3c9fc  mov w22,#0x488
7101a3ca00  mov w23,#0x48c
7101a3ca04  adrp x24,0x71052c5000
7101a3ca08  movk x21,#0x18, LSL #32
7101a3ca0c  ldr x8,[x19, #0x8]
7101a3ca10  ldr x8,[x8, #0x10]
7101a3ca14  ldr x8,[x8, #0x8]
7101a3ca18  ldr w9,[x8, #0x484]
7101a3ca1c  cmp w9,#0x2
7101a3ca20  csel x9,x23,x22,eq
7101a3ca24  ldr w1,[x8, x9, LSL #0x0]
7101a3ca28  cmn w1,#0x1
7101a3ca2c  b.eq 0x7101a3ca5c
7101a3ca30  ldr x8,[x24, #0x120]
7101a3ca34  ldr x0,[x8, #0x8]
7101a3ca38  mov v0.16B,v8.16B
7101a3ca3c  mov v1.16B,v8.16B
7101a3ca40  mov w4,#0x1
7101a3ca44  mov x2,x21
7101a3ca48  mov w3,wzr
7101a3ca4c  mov w5,wzr
7101a3ca50  mov w6,wzr
7101a3ca54  mov w7,wzr
7101a3ca58  bl 0x710175dfc0
7101a3ca5c  add x19,x19,#0x10
7101a3ca60  cmp x20,x19
7101a3ca64  b.ne 0x7101a3ca0c
7101a3ca68  mov w8,#0x1
7101a3ca6c  str w8,[x27, #0x134]
7101a3ca70  strb w8,[x27, #0x31d]
7101a3ca74  mov w23,#0xffffffff
7101a3ca78  ldrb w8,[x27, #0x31d]
7101a3ca7c  cbz w8,0x7101a3cb6c
7101a3ca80  ldr x8,[x27, #0x150]
7101a3ca84  ldr x8,[x8]
7101a3ca88  ldr x19,[x8]
7101a3ca8c  ldr x20,[x19, #0x600]
7101a3ca90  add x0,x20,#0x198
7101a3ca94  mov w2,#0x264
7101a3ca98  mov w1,wzr
7101a3ca9c  bl 0x71039c02a0
7101a3caa0  add x8,x20,#0x40c
7101a3caa4  str xzr,[x8]
7101a3caa8  add x8,x20,#0x424
7101a3caac  str xzr,[x8]
7101a3cab0  str wzr,[x20, #0x480]
7101a3cab4  adrp x8,0x71052a8000
7101a3cab8  ldr x8,[x8, #0xa80]
7101a3cabc  ldr q0,[x8]
7101a3cac0  str xzr,[x20, #0x4a0]
7101a3cac4  str q0,[x20, #0x460]
7101a3cac8  str q0,[x20, #0x430]
7101a3cacc  str q0,[x20, #0x440]
7101a3cad0  str q0,[x20, #0x450]
7101a3cad4  str xzr,[x20, #0x498]
7101a3cad8  ldr x20,[x19, #0x608]
7101a3cadc  ldr x22,[x19, #0x610]
7101a3cae0  cmp x20,x22
7101a3cae4  b.eq 0x7101a3cb40
7101a3cae8  mov w21,#0x264
7101a3caec  str q0,[sp, #0x50]
7101a3caf0  ldr x23,[x20, #0x8]
7101a3caf4  add x0,x23,#0x198
7101a3caf8  mov w1,wzr
7101a3cafc  mov x2,x21
7101a3cb00  bl 0x71039c02a0
7101a3cb04  ldr q0,[sp, #0x50]
7101a3cb08  add x8,x23,#0x40c
7101a3cb0c  add x20,x20,#0x10
7101a3cb10  str xzr,[x8]
7101a3cb14  add x8,x23,#0x424
7101a3cb18  cmp x22,x20
7101a3cb1c  str xzr,[x8]
7101a3cb20  str wzr,[x23, #0x480]
7101a3cb24  str xzr,[x23, #0x4a0]
7101a3cb28  str q0,[x23, #0x460]
7101a3cb2c  str q0,[x23, #0x430]
7101a3cb30  str xzr,[x23, #0x498]
7101a3cb34  str q0,[x23, #0x440]
7101a3cb38  str q0,[x23, #0x450]
7101a3cb3c  b.ne 0x7101a3caf0
7101a3cb40  ldr x20,[x19, #0x460]
7101a3cb44  ldr x19,[x19, #0x468]
7101a3cb48  cmp x20,x19
7101a3cb4c  mov w23,#0xffffffff
7101a3cb50  b.eq 0x7101a3cb6c
7101a3cb54  ldr x0,[x20], #0x8
7101a3cb58  ldr x8,[x0]
7101a3cb5c  ldr x8,[x8, #0x58]
7101a3cb60  blr x8
7101a3cb64  cmp x19,x20
7101a3cb68  b.ne 0x7101a3cb54
7101a3cb6c  ldr x8,[x27, #0x150]
7101a3cb70  ldr x8,[x8]
7101a3cb74  ldr x8,[x8]
7101a3cb78  ldr x8,[x8, #0x600]
7101a3cb7c  ldrb w9,[x8, #0x4aa]
7101a3cb80  cbz w9,0x7101a3cb9c
7101a3cb84  ldrb w8,[x8, #0x278]
7101a3cb88  ubfx w20,w8,#0x4,#0x1
7101a3cb8c  ldrb w8,[x27, #0x31c]
7101a3cb90  cbz w8,0x7101a3cba8
7101a3cb94  mov w8,wzr
7101a3cb98  b 0x7101a3cbac
7101a3cb9c  mov w20,wzr
7101a3cba0  ldrb w8,[x27, #0x31c]
7101a3cba4  cbnz w8,0x7101a3cb94
7101a3cba8  ldr w8,[x27, #0x310]
7101a3cbac  ldp x9,x10,[x27, #0x198]
7101a3cbb0  cmp x9,x10
7101a3cbb4  b.eq 0x7101a3cc14
7101a3cbb8  ldr x11,[x9, #0x8]
7101a3cbbc  ldrb w12,[x11, #0x36]
7101a3cbc0  cbz w12,0x7101a3cc08
7101a3cbc4  ldr x11,[x11, #0x10]
7101a3cbc8  ldr x11,[x11, #0x8]
7101a3cbcc  ldrb w12,[x11, #0x4aa]
7101a3cbd0  cbz w12,0x7101a3cbf0
7101a3cbd4  ldr w13,[x11, #0x344]
7101a3cbd8  cmp w8,w13
7101a3cbdc  b.gt 0x7101a3cc08
7101a3cbe0  cbz w12,0x7101a3cc00
7101a3cbe4  ldrb w11,[x11, #0x278]
7101a3cbe8  ubfx w11,w11,#0x4,#0x1
7101a3cbec  b 0x7101a3cc04
7101a3cbf0  mov w13,wzr
7101a3cbf4  cmp w8,w13
7101a3cbf8  b.le 0x7101a3cbe0
7101a3cbfc  b 0x7101a3cc08
7101a3cc00  mov w11,wzr
7101a3cc04  orr w20,w20,w11
7101a3cc08  add x9,x9,#0x10
7101a3cc0c  cmp x10,x9
7101a3cc10  b.ne 0x7101a3cbb8
7101a3cc14  ldrb w8,[x27, #0x31b]
7101a3cc18  and w9,w20,#0x1
7101a3cc1c  cmp w8,w9
7101a3cc20  b.eq 0x7101a3cdec
7101a3cc24  ldr x8,[x27, #0x248]
7101a3cc28  ldr x0,[x8]
7101a3cc2c  tbz w20,#0x0,0x7101a3cd14
7101a3cc30  cbz x0,0x7101a3cc44
7101a3cc34  ldr x8,[x0]
7101a3cc38  ldr x8,[x8, #0x320]
7101a3cc3c  mov w1,#0x1
7101a3cc40  blr x8
7101a3cc44  ldr w8,[x27, #0x2f0]
7101a3cc48  cmn w8,#0x1
7101a3cc4c  b.ne 0x7101a3cde4
7101a3cc50  ldr w8,[x27, #0x2f4]
7101a3cc54  cmn w8,#0x1
7101a3cc58  b.ne 0x7101a3cde4
7101a3cc5c  adrp x8,0x710532f000
7101a3cc60  ldr x8,[x8, #0x8d0]
7101a3cc64  ldr x0,[x8, #0x8]
7101a3cc68  ldrb w8,[x0, #0x191]
7101a3cc6c  add x22,x27,#0x2f0
7101a3cc70  cbnz w8,0x7101a3f360
7101a3cc74  mov x21,#0x90f3
7101a3cc78  movk x21,#0x29a, LSL #16
7101a3cc7c  movk x21,#0x1a, LSL #32
7101a3cc80  mov w2,#0x4
7101a3cc84  mov x1,x21
7101a3cc88  bl 0x7103313f20
7101a3cc8c  tbz w0,#0x0,0x7101a3f360
7101a3cc90  add x0,sp,#0xd0
7101a3cc94  mov x1,x21
7101a3cc98  bl 0x71024076d0
7101a3cc9c  ldr w9,[sp, #0xd0]
7101a3cca0  ldr x8,[sp, #0xe0]
7101a3cca4  str w9,[x27, #0x2c8]
7101a3cca8  cbz x8,0x7101a3f390
7101a3ccac  ldr w9,[x27, #0x2e4]
7101a3ccb0  mov w10,#0x6500
7101a3ccb4  movk w10,#0x87, LSL #16
7101a3ccb8  cmp w9,w10
7101a3ccbc  b.ne 0x7101a3f440
7101a3ccc0  adrp x9,0x7106dd5000
7101a3ccc4  ldr w9,[x9, #0x3ac]
7101a3ccc8  ldr w10,[x27, #0x2e0]
7101a3cccc  cmp w10,w9
7101a3ccd0  b.ne 0x7101a4023c
7101a3ccd4  ldr x10,[x27, #0x2d8]
7101a3ccd8  add x9,x27,#0x2d8
7101a3ccdc  cbz x10,0x7101a3cd04
7101a3cce0  adrp x11,0x7106dd5000
7101a3cce4  ldrb w11,[x11, #0x3a8]
7101a3cce8  cmp w11,#0x1
7101a3ccec  b.ne 0x7101a3cd04
7101a3ccf0  ldr wzr,[x10, #0x38]!
7101a3ccf4  ldaxr w11,[x10]
7101a3ccf8  sub w11,w11,#0x1
7101a3ccfc  stlxr w12,w11,[x10]
7101a3cd00  cbnz w12,0x7101a3ccf4
7101a3cd04  str xzr,[x27, #0x2d8]
7101a3cd08  add x10,x27,#0x2e8
7101a3cd0c  strb wzr,[x27, #0x2e8]
7101a3cd10  b 0x7101a40248
7101a3cd14  cbz x0,0x7101a3cd28
7101a3cd18  ldr x8,[x0]
7101a3cd1c  ldr x8,[x8, #0x328]
7101a3cd20  mov w1,wzr
7101a3cd24  blr x8
7101a3cd28  ldr w8,[x27, #0x2f0]
7101a3cd2c  cmn w8,#0x1
7101a3cd30  b.ne 0x7101a3cd40
7101a3cd34  ldr w8,[x27, #0x2f4]
7101a3cd38  cmn w8,#0x1
7101a3cd3c  b.eq 0x7101a3cde4
7101a3cd40  add x0,x27,#0x2c8
7101a3cd44  mov w1,wzr
7101a3cd48  bl 0x710373b540
7101a3cd4c  add x21,x27,#0x2d0
7101a3cd50  mov x0,x21
7101a3cd54  str wzr,[x27, #0x2c8]
7101a3cd58  bl 0x71039602c0
7101a3cd5c  adrp x8,0x7104f73000
7101a3cd60  add x8,x8,#0xd50
7101a3cd64  str x8,[x27, #0x2d0]
7101a3cd68  ldr x8,[x27, #0x2d8]
7101a3cd6c  cbz x8,0x7101a3cda8
7101a3cd70  adrp x9,0x7106dd5000
7101a3cd74  ldrb w9,[x9, #0x3a8]
7101a3cd78  cmp w9,#0x1
7101a3cd7c  b.ne 0x7101a3cda8
7101a3cd80  adrp x10,0x7106dd5000
7101a3cd84  ldr w9,[x27, #0x2e0]
7101a3cd88  ldr w10,[x10, #0x3ac]
7101a3cd8c  cmp w9,w10
7101a3cd90  b.ne 0x7101a3cda8
7101a3cd94  ldr wzr,[x8, #0x38]!
7101a3cd98  ldaxr w9,[x8]
7101a3cd9c  sub w9,w9,#0x1
7101a3cda0  stlxr w10,w9,[x8]
7101a3cda4  cbnz w10,0x7101a3cd98
7101a3cda8  mov w8,#0x6500
7101a3cdac  movk w8,#0x87, LSL #16
7101a3cdb0  stp xzr,xzr,[x21, #0x10]
7101a3cdb4  stp xzr,xzr,[x21]
7101a3cdb8  str w8,[x27, #0x2e4]
7101a3cdbc  adrp x8,0x7104f73000
7101a3cdc0  add x8,x8,#0xd30
7101a3cdc4  str x8,[x27, #0x2d0]
7101a3cdc8  mov x8,#-0x1
7101a3cdcc  str xzr,[x27, #0x2d8]
7101a3cdd0  str wzr,[x27, #0x2e0]
7101a3cdd4  strb wzr,[x27, #0x2e8]
7101a3cdd8  str x8,[x27, #0x2f0]
7101a3cddc  str xzr,[x27, #0x2f8]
7101a3cde0  str wzr,[x27, #0x304]
7101a3cde4  and w8,w20,#0x1
7101a3cde8  strb w8,[x27, #0x31b]
7101a3cdec  cbz w8,0x7101a3ce0c
7101a3cdf0  ldr x8,[x27, #0x248]
7101a3cdf4  ldr x0,[x8]
7101a3cdf8  cbz x0,0x7101a3ce18
7101a3cdfc  ldr x8,[x0]
7101a3ce00  ldr x8,[x8, #0x330]
7101a3ce04  blr x8
7101a3ce08  tbnz w0,#0x0,0x7101a3ce18
7101a3ce0c  ldr x8,[x27, #0x228]
7101a3ce10  ldr w8,[x8, #0x25c]
7101a3ce14  cbnz w8,0x7101a3d068
7101a3ce18  ldr w8,[x27, #0x2f0]
7101a3ce1c  cmn w8,#0x1
7101a3ce20  b.ne 0x7101a3ce30
7101a3ce24  ldr w8,[x27, #0x2f4]
7101a3ce28  cmn w8,#0x1
7101a3ce2c  b.eq 0x7101a3ced4
7101a3ce30  add x0,x27,#0x2c8
7101a3ce34  mov w1,wzr
7101a3ce38  bl 0x710373b540
7101a3ce3c  add x21,x27,#0x2d0
7101a3ce40  mov x0,x21
7101a3ce44  str wzr,[x27, #0x2c8]
7101a3ce48  bl 0x71039602c0
7101a3ce4c  adrp x8,0x7104f73000
7101a3ce50  add x8,x8,#0xd50
7101a3ce54  str x8,[x27, #0x2d0]
7101a3ce58  ldr x8,[x27, #0x2d8]
7101a3ce5c  cbz x8,0x7101a3ce98
7101a3ce60  adrp x9,0x7106dd5000
7101a3ce64  ldrb w9,[x9, #0x3a8]
7101a3ce68  cmp w9,#0x1
7101a3ce6c  b.ne 0x7101a3ce98
7101a3ce70  adrp x10,0x7106dd5000
7101a3ce74  ldr w9,[x27, #0x2e0]
7101a3ce78  ldr w10,[x10, #0x3ac]
7101a3ce7c  cmp w9,w10
7101a3ce80  b.ne 0x7101a3ce98
7101a3ce84  ldr wzr,[x8, #0x38]!
7101a3ce88  ldaxr w9,[x8]
7101a3ce8c  sub w9,w9,#0x1
7101a3ce90  stlxr w10,w9,[x8]
7101a3ce94  cbnz w10,0x7101a3ce88
7101a3ce98  mov w8,#0x6500
7101a3ce9c  movk w8,#0x87, LSL #16
7101a3cea0  stp xzr,xzr,[x21, #0x10]
7101a3cea4  stp xzr,xzr,[x21]
7101a3cea8  str w8,[x27, #0x2e4]
7101a3ceac  adrp x8,0x7104f73000
7101a3ceb0  add x8,x8,#0xd30
7101a3ceb4  str x8,[x27, #0x2d0]
7101a3ceb8  mov x8,#-0x1
7101a3cebc  str xzr,[x27, #0x2d8]
7101a3cec0  str wzr,[x27, #0x2e0]
7101a3cec4  strb wzr,[x27, #0x2e8]
7101a3cec8  str x8,[x27, #0x2f0]
7101a3cecc  str xzr,[x27, #0x2f8]
7101a3ced0  str wzr,[x27, #0x304]
7101a3ced4  ldr w8,[x27, #0x130]
7101a3ced8  cmp w8,#0x1
7101a3cedc  b.ne 0x7101a3cf2c
7101a3cee0  adrp x8,0x710532f000
7101a3cee4  ldr x19,[x8, #0x820]
7101a3cee8  adrp x8,0x710532f000
7101a3ceec  ldr x8,[x8, #0x730]
7101a3cef0  ldr x8,[x8, #0x8]
7101a3cef4  ldr x0,[x8, #0x1c8]
7101a3cef8  mov x21,#0x366b
7101a3cefc  movk x21,#0x41ae, LSL #16
7101a3cf00  movk x21,#0xff1b, LSL #32
7101a3cf04  movk x21,#0x58ff, LSL #48
7101a3cf08  mov x1,x21
7101a3cf0c  bl 0x7103291150
7101a3cf10  tbz w0,#0x0,0x7101a3cf70
7101a3cf14  ldr x0,[x19, #0x10]
7101a3cf18  mov x1,x21
7101a3cf1c  bl 0x71032edf70
7101a3cf20  ldp x0,x1,[x19, #0x8]
7101a3cf24  bl 0x71032f1bb0
7101a3cf28  b 0x7101a3cf78
7101a3cf2c  ldr x8,[x27, #0x150]
7101a3cf30  ldr x8,[x8]
7101a3cf34  ldr x0,[x8]
7101a3cf38  mov w1,wzr
7101a3cf3c  bl 0x71037760f0
7101a3cf40  adrp x8,0x710532f000
7101a3cf44  ldr x8,[x8, #0x8d0]
7101a3cf48  ldr x0,[x8, #0x8]
7101a3cf4c  ldp x8,x9,[x0, #0x40]
7101a3cf50  sub x9,x9,x8
7101a3cf54  asr x9,x9,#0x3
7101a3cf58  cmp x9,#0x4
7101a3cf5c  b.cc 0x7101a3cfa0
7101a3cf60  ldr x21,[x8, #0x18]
7101a3cf64  ldrb w8,[x0, #0x191]
7101a3cf68  cbnz w8,0x7101a3d01c
7101a3cf6c  b 0x7101a3cfac
7101a3cf70  ldr x8,[x19, #0x8]
7101a3cf74  str wzr,[x8, #0x118]
7101a3cf78  ldr w8,[x27, #0x104]
7101a3cf7c  cmp w8,#0x11
7101a3cf80  b.gt 0x7101a3d068
7101a3cf84  add w8,w8,#0x1
7101a3cf88  cmp w8,#0x13
7101a3cf8c  str w8,[x27, #0x104]
7101a3cf90  b.cs 0x7101a4027c
7101a3cf94  add x8,x27,w8, SXTW  #0x2
7101a3cf98  mov w9,#0x2
7101a3cf9c  b 0x7101a3d064
7101a3cfa0  mov x21,xzr
7101a3cfa4  ldrb w8,[x0, #0x191]
7101a3cfa8  cbnz w8,0x7101a3d01c
7101a3cfac  mov w2,#0x4
7101a3cfb0  mov x1,x21
7101a3cfb4  bl 0x7103313f20
7101a3cfb8  tbz w0,#0x0,0x7101a3d01c
7101a3cfbc  add x0,sp,#0xd0
7101a3cfc0  mov x1,x21
7101a3cfc4  bl 0x71024076d0
7101a3cfc8  ldr x8,[sp, #0xe0]
7101a3cfcc  adrp x9,0x7104f73000
7101a3cfd0  add x9,x9,#0xd50
7101a3cfd4  str x9,[sp, #0xd8]
7101a3cfd8  cbz x8,0x7101a3d048
7101a3cfdc  adrp x8,0x7106dd5000
7101a3cfe0  ldrb w8,[x8, #0x3a8]
7101a3cfe4  cmp w8,#0x1
7101a3cfe8  b.ne 0x7101a3d048
7101a3cfec  adrp x9,0x7106dd5000
7101a3cff0  ldr w8,[sp, #0xe8]
7101a3cff4  ldr w9,[x9, #0x3ac]
7101a3cff8  cmp w8,w9
7101a3cffc  b.ne 0x7101a3d048
7101a3d000  ldr x8,[sp, #0xe0]
7101a3d004  ldr wzr,[x8, #0x38]!
7101a3d008  ldaxr w9,[x8]
7101a3d00c  sub w9,w9,#0x1
7101a3d010  stlxr w10,w9,[x8]
7101a3d014  cbnz w10,0x7101a3d008
7101a3d018  b 0x7101a3d048
7101a3d01c  mov w8,#0x6500
7101a3d020  movk w8,#0x87, LSL #16
7101a3d024  stp wzr,w8,[sp, #0xe8]
7101a3d028  mov x8,#-0x1
7101a3d02c  stp x8,xzr,[sp, #0xf8]
7101a3d030  adrp x8,0x7104f73000
7101a3d034  add x8,x8,#0xd50
7101a3d038  strb wzr,[sp, #0xf0]
7101a3d03c  str wzr,[sp, #0xd0]
7101a3d040  str xzr,[sp, #0x108]
7101a3d044  stp x8,xzr,[sp, #0xd8]
7101a3d048  str xzr,[sp, #0xe0]
7101a3d04c  strb wzr,[sp, #0xf0]
7101a3d050  ldrsw x8,[x27, #0x104]
7101a3d054  cmp w8,#0x13
7101a3d058  b.cs 0x7101a4027c
7101a3d05c  add x8,x27,x8, LSL #0x2
7101a3d060  mov w9,#0x8
7101a3d064  str w9,[x8, #0xb8]
7101a3d068  ldrb w8,[x27, #0x31d]
7101a3d06c  cbz w8,0x7101a3ef54
7101a3d070  ldp x9,x8,[x27, #0x1b0]
7101a3d074  cmp x9,x8
7101a3d078  str x8,[sp, #0x28]
7101a3d07c  b.eq 0x7101a3ee6c
7101a3d080  add x8,sp,#0xd0
7101a3d084  add x19,x8,#0x10
7101a3d088  add x8,x8,#0x8
7101a3d08c  str x8,[sp, #0x18]
7101a3d090  add x8,sp,#0x88
7101a3d094  add x8,x8,#0x8
7101a3d098  str x8,[sp, #0x10]
7101a3d09c  adrp x8,0x7104472000
7101a3d0a0  ldr s9,[x8, #0x8b8]
7101a3d0a4  adrp x8,0x7104472000
7101a3d0a8  ldr s10,[x8, #0x4c4]
7101a3d0ac  fmov s8,0x3f800000
7101a3d0b0  mov w20,#0x1
7101a3d0b4  str x19,[sp, #0x20]
7101a3d0b8  ldr x25,[x9, #0x8]
7101a3d0bc  ldr x8,[x25, #0x2d0]
7101a3d0c0  ldr x0,[x8, #0x8]
7101a3d0c4  str x9,[sp, #0x30]
7101a3d0c8  cbz x0,0x7101a3d184
7101a3d0cc  ldr x8,[x0]
7101a3d0d0  ldr x8,[x8, #0x130]
7101a3d0d4  blr x8
7101a3d0d8  tbz w0,#0x0,0x7101a3d184
7101a3d0dc  ldr x8,[x25, #0x2d0]
7101a3d0e0  ldr x0,[x8, #0x8]
7101a3d0e4  cbz x0,0x7101a3d0f8
7101a3d0e8  ldr x8,[x0]
7101a3d0ec  ldr x8,[x8, #0x138]
7101a3d0f0  blr x8
7101a3d0f4  tbz w0,#0x0,0x7101a3d184
7101a3d0f8  ldr w8,[x25, #0x2d8]
7101a3d0fc  add w9,w8,#0x1
7101a3d100  add w10,w8,#0x2
7101a3d104  cmp w9,#0x0
7101a3d108  csinc w8,w10,w8,lt
7101a3d10c  and w8,w8,#0xfffffffe
7101a3d110  sub w8,w9,w8
7101a3d114  lsr w9,w8,#0x1e
7101a3d118  and w9,w9,#0x2
7101a3d11c  add w8,w8,w9
7101a3d120  adrp x9,0x71050a8000
7101a3d124  add x9,x9,#0x880
7101a3d128  str w8,[x25, #0x2d8]
7101a3d12c  ldr x1,[x9, w8, SXTW #0x3]
7101a3d130  ldr x0,[x25, #0x2c0]
7101a3d134  mov v0.16B,v8.16B
7101a3d138  add x26,x25,#0x2b8
7101a3d13c  bl 0x7103778300
7101a3d140  add x8,sp,#0xd0
7101a3d144  mov x0,x26
7101a3d148  adrp x1,0x710439d000
7101a3d14c  add x1,x1,#0xc9a
7101a3d150  bl 0x7103776910
7101a3d154  ldrsw x8,[x25, #0x2d8]
7101a3d158  adrp x9,0x71050a8000
7101a3d15c  add x9,x9,#0x890
7101a3d160  ldr x1,[x9, x8, LSL #0x3]
7101a3d164  add x0,sp,#0xd0
7101a3d168  bl 0x710377a120
7101a3d16c  ldr x0,[sp, #0xd8]
7101a3d170  adrp x8,0x710523d000
7101a3d174  add x8,x8,#0x9a8
7101a3d178  stp x8,xzr,[sp, #0xd0]
7101a3d17c  cbz x0,0x7101a3d184
7101a3d180  bl 0x710392eb40
7101a3d184  ldr w8,[x25, #0x3d0]
7101a3d188  ldr x26,[x25, #0x3e8]
7101a3d18c  str w8,[x25, #0x3d4]
7101a3d190  orr w8,wzr,#0x3
7101a3d194  str wzr,[x25, #0x268]
7101a3d198  str w23,[x25, #0x3d0]
7101a3d19c  str w23,[x25, #0x3dc]
7101a3d1a0  str w8,[x25, #0x3e4]
7101a3d1a4  cbz x26,0x7101a3d61c
7101a3d1a8  ldr w8,[x25, #0x414]
7101a3d1ac  subs w8,w8,#0x1
7101a3d1b0  b.lt 0x7101a3d520
7101a3d1b4  str w8,[x25, #0x414]
7101a3d1b8  b.ne 0x7101a3d520
7101a3d1bc  ldr x8,[x26, #0x8]
7101a3d1c0  ldr x8,[x8, #0x10]
7101a3d1c4  ldr x8,[x8, #0x8]
7101a3d1c8  ldrsw x26,[x8, #0x488]
7101a3d1cc  add x27,x25,#0x2e0
7101a3d1d0  add x0,sp,#0x70
7101a3d1d4  mov x1,x27
7101a3d1d8  bl 0x7103776390
7101a3d1dc  cmn w26,#0x1
7101a3d1e0  b.eq 0x7101a3d238
7101a3d1e4  adrp x8,0x7105339000
7101a3d1e8  ldr x8,[x8, #0x8b0]
7101a3d1ec  ldrb w8,[x8, #0x8]
7101a3d1f0  cmp w26,#0x9
7101a3d1f4  ccmp w8,#0x0,#0x4,ls
7101a3d1f8  adrp x8,0x7105339000
7101a3d1fc  add x8,x8,#0x830
7101a3d200  b.eq 0x7101a3d214
7101a3d204  adrp x8,0x7105339000
7101a3d208  add x8,x8,#0x860
7101a3d20c  ldr x8,[x8, x26, LSL #0x3]
7101a3d210  cbz x8,0x7101a3d238
7101a3d214  ldr x8,[x8, #0x10]
7101a3d218  ldr w8,[x8, #0x9c]
7101a3d21c  sub w8,w8,#0x1
7101a3d220  cmp w8,#0x6
7101a3d224  b.hi 0x7101a3d238
7101a3d228  adrp x9,0x7104753000
7101a3d22c  add x9,x9,#0xde0
7101a3d230  ldr w1,[x9, w8, SXTW #0x2]
7101a3d234  b 0x7101a3d23c
7101a3d238  mov w1,wzr
7101a3d23c  add x0,sp,#0xd0
7101a3d240  bl 0x710339d9f0
7101a3d244  ldr x0,[sp, #0x78]
7101a3d248  ldr x1,[sp, #0x18]
7101a3d24c  mov v0.16B,v8.16B
7101a3d250  bl 0x7103778300
7101a3d254  adrp x8,0x7105339000
7101a3d258  ldr x8,[x8, #0x8b0]
7101a3d25c  ldrb w8,[x8, #0x8]
7101a3d260  cmp w26,#0x9
7101a3d264  ccmp w8,#0x0,#0x4,ls
7101a3d268  adrp x8,0x7105339000
7101a3d26c  add x8,x8,#0x830
7101a3d270  b.eq 0x7101a3d284
7101a3d274  adrp x8,0x7105339000
7101a3d278  add x8,x8,#0x860
7101a3d27c  ldr x8,[x8, x26, LSL #0x3]
7101a3d280  cbz x8,0x7101a3d2f8
7101a3d284  ldr x0,[x8, #0x10]
7101a3d288  ldrb w8,[x0, #0xb8]
7101a3d28c  cbz w8,0x7101a3d2f8
7101a3d290  ldr x8,[x0]
7101a3d294  ldr x8,[x8, #0x20]
7101a3d298  blr x8
7101a3d29c  sub w8,w0,#0x1
7101a3d2a0  and w9,w8,#0xff
7101a3d2a4  cmp w9,#0xe
7101a3d2a8  b.hi 0x7101a3d2f8
7101a3d2ac  sxtb x8,w8
7101a3d2b0  mov w9,#0x2e8a
7101a3d2b4  lsr x9,x9,x8
7101a3d2b8  tbnz w9,#0x0,0x7101a3d2f8
7101a3d2bc  adrp x9,0x7104753000
7101a3d2c0  add x9,x9,#0xe00
7101a3d2c4  adrp x0,0x71042b2000
7101a3d2c8  add x0,x0,#0x952
7101a3d2cc  ldr w8,[x9, x8, LSL #0x2]
7101a3d2d0  add w1,w8,#0x1
7101a3d2d4  add x8,sp,#0x88
7101a3d2d8  bl 0x71003a4ca0
7101a3d2dc  ldr w8,[sp, #0x8c]
7101a3d2e0  cbz w8,0x7101a3d308
7101a3d2e4  ldr x0,[sp, #0x78]
7101a3d2e8  ldr x1,[sp, #0x10]
7101a3d2ec  mov v0.16B,v8.16B
7101a3d2f0  bl 0x7103778300
7101a3d2f4  b 0x7101a3d308
7101a3d2f8  mov w8,#0x9dc5
7101a3d2fc  movk w8,#0x811c, LSL #16
7101a3d300  strb wzr,[sp, #0x90]
7101a3d304  stp w8,wzr,[sp, #0x88]
7101a3d308  ldr x28,[sp, #0x78]
7101a3d30c  adrp x8,0x710523d000
7101a3d310  add x8,x8,#0x988
7101a3d314  stp x8,xzr,[sp, #0x70]
7101a3d318  cbz x28,0x7101a3d33c
7101a3d31c  ldr x0,[x28, #0x18]
7101a3d320  adrp x8,0x710523d000
7101a3d324  add x8,x8,#0x9a8
7101a3d328  stp x8,xzr,[x28, #0x10]
7101a3d32c  cbz x0,0x7101a3d334
7101a3d330  bl 0x710392eb40
7101a3d334  mov x0,x28
7101a3d338  bl 0x710392eb40
7101a3d33c  add x1,x25,#0x2f0
7101a3d340  add x0,sp,#0x60
7101a3d344  bl 0x7103776390
7101a3d348  cmn w26,#0x1
7101a3d34c  b.eq 0x7101a3d3b0
7101a3d350  cmp w26,#0x9
7101a3d354  b.hi 0x7101a3d384
7101a3d358  adrp x8,0x7105339000
7101a3d35c  ldr x8,[x8, #0x8b0]
7101a3d360  ldrb w9,[x8, #0x8]
7101a3d364  adrp x8,0x7105339000
7101a3d368  add x8,x8,#0x830
7101a3d36c  cbz w9,0x7101a3d38c
7101a3d370  adrp x8,0x7105339000
7101a3d374  add x8,x8,#0x860
7101a3d378  ldr x8,[x8, x26, LSL #0x3]
7101a3d37c  cbnz x8,0x7101a3d38c
7101a3d380  b 0x7101a3d3b0
7101a3d384  adrp x8,0x7105339000
7101a3d388  add x8,x8,#0x830
7101a3d38c  ldr x8,[x8, #0x10]
7101a3d390  ldr w8,[x8, #0x9c]
7101a3d394  sub w8,w8,#0x1
7101a3d398  cmp w8,#0x6
7101a3d39c  b.hi 0x7101a3d3b0
7101a3d3a0  adrp x9,0x7104753000
7101a3d3a4  add x9,x9,#0xde0
7101a3d3a8  ldr w1,[x9, w8, SXTW #0x2]
7101a3d3ac  b 0x7101a3d3b4
7101a3d3b0  mov w1,wzr
7101a3d3b4  add x0,sp,#0xd0
7101a3d3b8  bl 0x710339d9f0
7101a3d3bc  ldr x0,[sp, #0x68]
7101a3d3c0  ldr x1,[sp, #0x18]
7101a3d3c4  mov v0.16B,v8.16B
7101a3d3c8  bl 0x7103778300
7101a3d3cc  cmp w26,#0x9
7101a3d3d0  b.hi 0x7101a3d400
7101a3d3d4  adrp x8,0x7105339000
7101a3d3d8  ldr x8,[x8, #0x8b0]
7101a3d3dc  ldrb w9,[x8, #0x8]
7101a3d3e0  adrp x8,0x7105339000
7101a3d3e4  add x8,x8,#0x830
7101a3d3e8  cbz w9,0x7101a3d408
7101a3d3ec  adrp x8,0x7105339000
7101a3d3f0  add x8,x8,#0x860
7101a3d3f4  ldr x8,[x8, x26, LSL #0x3]
7101a3d3f8  cbnz x8,0x7101a3d408
7101a3d3fc  b 0x7101a3d47c
7101a3d400  adrp x8,0x7105339000
7101a3d404  add x8,x8,#0x830
7101a3d408  ldr x0,[x8, #0x10]
7101a3d40c  ldrb w8,[x0, #0xb8]
7101a3d410  cbz w8,0x7101a3d47c
7101a3d414  ldr x8,[x0]
7101a3d418  ldr x8,[x8, #0x20]
7101a3d41c  blr x8
7101a3d420  sub w8,w0,#0x1
7101a3d424  and w9,w8,#0xff
7101a3d428  cmp w9,#0xe
7101a3d42c  b.hi 0x7101a3d47c
7101a3d430  sxtb x8,w8
7101a3d434  mov w9,#0x2e8a
7101a3d438  lsr x9,x9,x8
7101a3d43c  tbnz w9,#0x0,0x7101a3d47c
7101a3d440  adrp x9,0x7104753000
7101a3d444  add x9,x9,#0xe00
7101a3d448  adrp x0,0x71042b2000
7101a3d44c  add x0,x0,#0x952
7101a3d450  ldr w8,[x9, x8, LSL #0x2]
7101a3d454  add w1,w8,#0x1
7101a3d458  add x8,sp,#0x88
7101a3d45c  bl 0x71003a4ca0
7101a3d460  ldr w8,[sp, #0x8c]
7101a3d464  cbz w8,0x7101a3d48c
7101a3d468  ldr x0,[sp, #0x68]
7101a3d46c  ldr x1,[sp, #0x10]
7101a3d470  mov v0.16B,v8.16B
7101a3d474  bl 0x7103778300
7101a3d478  b 0x7101a3d48c
7101a3d47c  mov w8,#0x9dc5
7101a3d480  movk w8,#0x811c, LSL #16
7101a3d484  strb wzr,[sp, #0x90]
7101a3d488  stp w8,wzr,[sp, #0x88]
7101a3d48c  ldr x28,[sp, #0x68]
7101a3d490  adrp x8,0x710523d000
7101a3d494  add x8,x8,#0x988
7101a3d498  stp x8,xzr,[sp, #0x60]
7101a3d49c  cbz x28,0x7101a3d4c0
7101a3d4a0  ldr x0,[x28, #0x18]
7101a3d4a4  adrp x8,0x710523d000
7101a3d4a8  add x8,x8,#0x9a8
7101a3d4ac  stp x8,xzr,[x28, #0x10]
7101a3d4b0  cbz x0,0x7101a3d4b8
7101a3d4b4  bl 0x710392eb40
7101a3d4b8  mov x0,x28
7101a3d4bc  bl 0x710392eb40
7101a3d4c0  add x0,sp,#0xd0
7101a3d4c4  mov x1,x27
7101a3d4c8  bl 0x7103776390
7101a3d4cc  add x0,sp,#0xd0
7101a3d4d0  mov w1,w26
7101a3d4d4  bl 0x710337d0d0
7101a3d4d8  ldr x26,[sp, #0xd8]
7101a3d4dc  ldur x27,[x29, #-0x88]
7101a3d4e0  orr x28,xzr,#0x5555555555555555
7101a3d4e4  adrp x8,0x710523d000
7101a3d4e8  add x8,x8,#0x988
7101a3d4ec  movk x28,#0x555, LSL #48
7101a3d4f0  stp x8,xzr,[sp, #0xd0]
7101a3d4f4  cbz x26,0x7101a3d518
7101a3d4f8  ldr x0,[x26, #0x18]
7101a3d4fc  adrp x8,0x710523d000
7101a3d500  add x8,x8,#0x9a8
7101a3d504  stp x8,xzr,[x26, #0x10]
7101a3d508  cbz x0,0x7101a3d510
7101a3d50c  bl 0x710392eb40
7101a3d510  mov x0,x26
7101a3d514  bl 0x710392eb40
7101a3d518  ldr x26,[x25, #0x3e8]
7101a3d51c  str wzr,[x25, #0x414]
7101a3d520  ldr x21,[x25, #0x3b0]
7101a3d524  ldr x22,[x25, #0x3b8]
7101a3d528  cmp x21,x22
7101a3d52c  b.eq 0x7101a3d610
7101a3d530  ldr x8,[x21, #0x8]
7101a3d534  ldrb w9,[x8, #0x104]
7101a3d538  cbz w9,0x7101a3d604
7101a3d53c  mov x9,#-0x1
7101a3d540  str wzr,[sp, #0xd0]
7101a3d544  str xzr,[x19]
7101a3d548  stp xzr,xzr,[x19, #0x8]
7101a3d54c  str x9,[sp, #0xf8]
7101a3d550  ldr x9,[x26, #0x8]
7101a3d554  ldr x10,[x9, #0x10]
7101a3d558  ldr x10,[x10, #0x8]
7101a3d55c  ldr w11,[x10, #0x484]
7101a3d560  cbnz w11,0x7101a3d570
7101a3d564  ldr w11,[x10, #0x488]
7101a3d568  cmn w11,#0x1
7101a3d56c  b.eq 0x7101a3d584
7101a3d570  ldrb w12,[x10, #0x4aa]
7101a3d574  ldrb w11,[x9, #0x36]
7101a3d578  cmp w12,#0x0
7101a3d57c  ccmp w11,#0x0,#0x4,ne
7101a3d580  b.ne 0x7101a3d58c
7101a3d584  mov w10,wzr
7101a3d588  b 0x7101a3d598
7101a3d58c  ldrb w10,[x10, #0x1a8]
7101a3d590  tst w10,#0x2
7101a3d594  cinc w10,w20,ne
7101a3d598  str w10,[sp, #0xd0]
7101a3d59c  ldr x9,[x9, #0x20]
7101a3d5a0  ldr x9,[x9, #0x100]
7101a3d5a4  ldr q0,[x9, #0x60]
7101a3d5a8  fadd s1,s0,s9
7101a3d5ac  movi v2.2D,#0x0
7101a3d5b0  dup s0,v0.S[0x1]
7101a3d5b4  fsub s0,s10,s0
7101a3d5b8  mov v2.S[0x0],v1.S[0x0]
7101a3d5bc  add x1,sp,#0xd0
7101a3d5c0  mov v2.S[0x1],v0.S[0x0]
7101a3d5c4  str q2,[sp, #0xe0]
7101a3d5c8  ldr x0,[x8, #0xc8]
7101a3d5cc  bl 0x710376e330
7101a3d5d0  ldr w8,[sp, #0xf8]
7101a3d5d4  cmn w8,#0x1
7101a3d5d8  b.eq 0x7101a3d5e8
7101a3d5dc  ldr x8,[x26, #0x8]
7101a3d5e0  ldr x8,[x8, #0x20]
7101a3d5e4  strb w20,[x8, #0x165]
7101a3d5e8  ldr w8,[sp, #0xfc]
7101a3d5ec  cmn w8,#0x1
7101a3d5f0  b.eq 0x7101a3d600
7101a3d5f4  ldr x8,[x26, #0x8]
7101a3d5f8  ldr x0,[x8, #0x20]
7101a3d5fc  bl 0x71032d3260
7101a3d600  ldr x26,[x25, #0x3e8]
7101a3d604  add x21,x21,#0x10
7101a3d608  cmp x22,x21
7101a3d60c  b.ne 0x7101a3d530
7101a3d610  mov x0,x25
7101a3d614  mov x1,x26
7101a3d618  bl 0x7101a4a0e0
7101a3d61c  ldrb w8,[x25, #0x419]
7101a3d620  cbz w8,0x7101a3de74
7101a3d624  ldr x8,[x25, #0x3e8]
7101a3d628  cbnz x8,0x7101a3de74
7101a3d62c  ldr w8,[x25, #0x138]
7101a3d630  sub w9,w8,#0x2
7101a3d634  cmp w9,#0x2
7101a3d638  b.cs 0x7101a3db48
7101a3d63c  ldr x24,[x25, #0x3b0]
7101a3d640  ldr x8,[x25, #0x3b8]
7101a3d644  str x8,[sp, #0x38]
7101a3d648  cmp x24,x8
7101a3d64c  b.eq 0x7101a3dad4
7101a3d650  ldr x8,[x24, #0x8]
7101a3d654  stp xzr,xzr,[sp, #0xd8]
7101a3d658  str xzr,[sp, #0xd0]
7101a3d65c  str x8,[sp, #0x40]
7101a3d660  ldp x23,x21,[x27, #0x198]
7101a3d664  subs x8,x21,x23
7101a3d668  b.eq 0x7101a3d6e8
7101a3d66c  asr x19,x8,#0x4
7101a3d670  cmp x19,x28
7101a3d674  b.hi 0x7101a4027c
7101a3d678  add x8,x19,x19, LSL #0x1
7101a3d67c  lsl x8,x8,#0x4
7101a3d680  cmp x8,#0x0
7101a3d684  csinc x26,x8,xzr,ne
7101a3d688  mov w0,#0x10
7101a3d68c  mov x1,x26
7101a3d690  bl 0x710392e290
7101a3d694  cbnz x0,0x7101a3d6d8
7101a3d698  adrp x8,0x7105332000
7101a3d69c  ldr x0,[x8, #0xf00]
7101a3d6a0  cbz x0,0x7101a3d6d4
7101a3d6a4  str wzr,[sp, #0x70]
7101a3d6a8  str x26,[sp, #0x88]
7101a3d6ac  ldr x8,[x0]
7101a3d6b0  ldr x8,[x8, #0x30]
7101a3d6b4  add x1,sp,#0x70
7101a3d6b8  add x2,sp,#0x88
7101a3d6bc  blr x8
7101a3d6c0  tbz w0,#0x0,0x7101a3d6d4
7101a3d6c4  mov w0,#0x10
7101a3d6c8  mov x1,x26
7101a3d6cc  bl 0x710392e290
7101a3d6d0  cbnz x0,0x7101a3d6d8
7101a3d6d4  mov x0,xzr
7101a3d6d8  orr w8,wzr,#0x30
7101a3d6dc  madd x8,x19,x8,x0
7101a3d6e0  str x8,[sp, #0xe0]
7101a3d6e4  stp x0,x0,[sp, #0xd0]
7101a3d6e8  orr x19,xzr,#-0x5555555555555556
7101a3d6ec  cmp x23,x21
7101a3d6f0  movk x19,#0xaaab
7101a3d6f4  b.ne 0x7101a3d704
7101a3d6f8  b 0x7101a3d908
7101a3d6fc  mov x0,xzr
7101a3d700  b 0x7101a3d868
7101a3d704  str xzr,[sp, #0x70]
7101a3d708  ldr x8,[x23, #0x8]
7101a3d70c  ldr x9,[x8, #0x10]
7101a3d710  ldr x9,[x9, #0x8]
7101a3d714  ldr w10,[x9, #0x484]
7101a3d718  cbnz w10,0x7101a3d728
7101a3d71c  ldr w10,[x9, #0x488]
7101a3d720  cmn w10,#0x1
7101a3d724  b.eq 0x7101a3d73c
7101a3d728  ldrb w11,[x9, #0x4aa]
7101a3d72c  ldrb w10,[x8, #0x36]
7101a3d730  cmp w11,#0x0
7101a3d734  ccmp w10,#0x0,#0x4,ne
7101a3d738  b.ne 0x7101a3d744
7101a3d73c  mov w22,wzr
7101a3d740  b 0x7101a3d750
7101a3d744  ldrb w9,[x9, #0x1a8]
7101a3d748  tst w9,#0x2
7101a3d74c  cinc w22,w20,ne
7101a3d750  ldr x8,[x8, #0x20]
7101a3d754  ldr x8,[x8, #0x100]
7101a3d758  ldr q0,[x8, #0x60]
7101a3d75c  ldp x8,x9,[sp, #0xd8]
7101a3d760  cmp x8,x9
7101a3d764  fadd s1,s0,s9
7101a3d768  dup s0,v0.S[0x1]
7101a3d76c  movi v2.2D,#0x0
7101a3d770  mov v2.S[0x0],v1.S[0x0]
7101a3d774  fsub s0,s10,s0
7101a3d778  mov v2.S[0x1],v0.S[0x0]
7101a3d77c  b.eq 0x7101a3d7b4
7101a3d780  str w22,[x8]
7101a3d784  ldr x9,[sp, #0x88]
7101a3d788  ldr w10,[sp, #0x90]
7101a3d78c  str q2,[x8, #0x10]
7101a3d790  str w10,[x8, #0xc]
7101a3d794  stur x9,[x8, #0x4]
7101a3d798  ldr x9,[sp, #0x70]
7101a3d79c  str x9,[x8, #0x20]
7101a3d7a0  mov x9,#-0x1
7101a3d7a4  str x9,[x8, #0x28]
7101a3d7a8  add x8,x8,#0x30
7101a3d7ac  str x8,[sp, #0xd8]
7101a3d7b0  b 0x7101a3d8fc
7101a3d7b4  ldr x26,[sp, #0xd0]
7101a3d7b8  sub x27,x8,x26
7101a3d7bc  asr x8,x27,#0x4
7101a3d7c0  mul x20,x8,x19
7101a3d7c4  add x8,x20,#0x1
7101a3d7c8  cmp x8,x28
7101a3d7cc  b.hi 0x7101a40274
7101a3d7d0  sub x9,x9,x26
7101a3d7d4  asr x9,x9,#0x4
7101a3d7d8  mul x9,x9,x19
7101a3d7dc  orr x10,xzr,#-0x5555555555555556
7101a3d7e0  movk x10,#0x2aa, LSL #48
7101a3d7e4  cmp x9,x10
7101a3d7e8  mov x19,x28
7101a3d7ec  b.cs 0x7101a3d800
7101a3d7f0  lsl x9,x9,#0x1
7101a3d7f4  cmp x9,x8
7101a3d7f8  csel x19,x8,x9,cc
7101a3d7fc  cbz x19,0x7101a3d6fc
7101a3d800  add x8,x19,x19, LSL #0x1
7101a3d804  mov w0,#0x10
7101a3d808  lsl x8,x8,#0x4
7101a3d80c  str q2,[sp, #0x50]
7101a3d810  cmp x8,#0x0
7101a3d814  csinc x28,x8,xzr,ne
7101a3d818  mov x1,x28
7101a3d81c  bl 0x710392e290
7101a3d820  cbnz x0,0x7101a3d864
7101a3d824  adrp x8,0x7105332000
7101a3d828  ldr x0,[x8, #0xf00]
7101a3d82c  cbz x0,0x7101a3d860
7101a3d830  str wzr,[sp, #0x60]
7101a3d834  str x28,[sp, #0x88]
7101a3d838  ldr x8,[x0]
7101a3d83c  ldr x8,[x8, #0x30]
7101a3d840  add x1,sp,#0x60
7101a3d844  add x2,sp,#0x88
7101a3d848  blr x8
7101a3d84c  tbz w0,#0x0,0x7101a3d860
7101a3d850  mov w0,#0x10
7101a3d854  mov x1,x28
7101a3d858  bl 0x710392e290
7101a3d85c  cbnz x0,0x7101a3d864
7101a3d860  mov x0,xzr
7101a3d864  ldr q2,[sp, #0x50]
7101a3d868  orr w12,wzr,#0x30
7101a3d86c  madd x8,x20,x12,x0
7101a3d870  orr x9,xzr,#0x5555555555555555
7101a3d874  movk x9,#0xd555, LSL #48
7101a3d878  smulh x9,x27,x9
7101a3d87c  str w22,[x8]
7101a3d880  ldr w11,[sp, #0x90]
7101a3d884  ldr x10,[sp, #0x88]
7101a3d888  str w11,[x8, #0xc]
7101a3d88c  asr x11,x9,#0x3
7101a3d890  add x9,x11,x9, LSR #0x3f
7101a3d894  stur x10,[x8, #0x4]
7101a3d898  str q2,[x8, #0x10]
7101a3d89c  madd x19,x19,x12,x0
7101a3d8a0  ldr x10,[sp, #0x70]
7101a3d8a4  madd x28,x9,x12,x8
7101a3d8a8  add x20,x8,#0x30
7101a3d8ac  str x10,[x8, #0x20]
7101a3d8b0  mov x10,#-0x1
7101a3d8b4  cmp x27,#0x1
7101a3d8b8  str x10,[x8, #0x28]
7101a3d8bc  b.lt 0x7101a3d8d0
7101a3d8c0  mov x0,x28
7101a3d8c4  mov x1,x26
7101a3d8c8  mov x2,x27
7101a3d8cc  bl 0x71039c00e0
7101a3d8d0  ldur x27,[x29, #-0x88]
7101a3d8d4  stp x28,x20,[sp, #0xd0]
7101a3d8d8  str x19,[sp, #0xe0]
7101a3d8dc  orr x28,xzr,#0x5555555555555555
7101a3d8e0  orr x19,xzr,#-0x5555555555555556
7101a3d8e4  movk x28,#0x555, LSL #48
7101a3d8e8  mov w20,#0x1
7101a3d8ec  movk x19,#0xaaab
7101a3d8f0  cbz x26,0x7101a3d8fc
7101a3d8f4  mov x0,x26
7101a3d8f8  bl 0x710392eb40
7101a3d8fc  add x23,x23,#0x10
7101a3d900  cmp x21,x23
7101a3d904  b.ne 0x7101a3d704
7101a3d908  ldr x8,[sp, #0x40]
7101a3d90c  ldr x0,[x8, #0xc8]
7101a3d910  add x1,sp,#0xd0
7101a3d914  bl 0x710376e720
7101a3d918  mov w26,w0
7101a3d91c  ldp x0,x8,[sp, #0xd0]
7101a3d920  sub x9,x8,x0
7101a3d924  asr x9,x9,#0x4
7101a3d928  mul x9,x9,x19
7101a3d92c  cmp w9,#0x1
7101a3d930  b.lt 0x7101a3d9e8
7101a3d934  mov x21,xzr
7101a3d938  mov x22,xzr
7101a3d93c  mov w23,#0x8
7101a3d940  cmp x9,x22
7101a3d944  b.ls 0x7101a40264
7101a3d948  add x9,x0,x21
7101a3d94c  ldr w9,[x9, #0x28]
7101a3d950  cmn w9,#0x1
7101a3d954  b.eq 0x7101a3d978
7101a3d958  ldp x9,x10,[x27, #0x198]
7101a3d95c  sub x10,x10,x9
7101a3d960  asr x10,x10,#0x4
7101a3d964  cmp x10,x22
7101a3d968  b.ls 0x7101a4026c
7101a3d96c  ldr x9,[x9, x23, LSL #0x0]
7101a3d970  ldr x9,[x9, #0x20]
7101a3d974  strb w20,[x9, #0x165]
7101a3d978  sub x9,x8,x0
7101a3d97c  asr x9,x9,#0x4
7101a3d980  mul x9,x9,x19
7101a3d984  cmp x9,x22
7101a3d988  b.ls 0x7101a40264
7101a3d98c  add x10,x0,x21
7101a3d990  ldr w10,[x10, #0x2c]
7101a3d994  cmn w10,#0x1
7101a3d998  b.eq 0x7101a3d9d4
7101a3d99c  ldp x8,x9,[x27, #0x198]
7101a3d9a0  sub x9,x9,x8
7101a3d9a4  asr x9,x9,#0x4
7101a3d9a8  cmp x9,x22
7101a3d9ac  b.ls 0x7101a4026c
7101a3d9b0  ldr x8,[x8, x23, LSL #0x0]
7101a3d9b4  ldr x0,[x8, #0x20]
7101a3d9b8  bl 0x71032d3260
7101a3d9bc  ldp x0,x8,[sp, #0xd0]
7101a3d9c0  sub x9,x8,x0
7101a3d9c4  asr x9,x9,#0x4
7101a3d9c8  mul x9,x9,x19
7101a3d9cc  cmp x9,x22
7101a3d9d0  b.ls 0x7101a40264
7101a3d9d4  add x22,x22,#0x1
7101a3d9d8  add x23,x23,#0x10
7101a3d9dc  add x21,x21,#0x30
7101a3d9e0  cmp x22,w9, SXTW 
7101a3d9e4  b.lt 0x7101a3d940
7101a3d9e8  cbz x0,0x7101a3d9f4
7101a3d9ec  str x0,[sp, #0xd8]
7101a3d9f0  bl 0x710392eb40
7101a3d9f4  cmn w26,#0x1
7101a3d9f8  mov w23,#0xffffffff
7101a3d9fc  b.eq 0x7101a3dac4
7101a3da00  ldp x9,x10,[x27, #0x198]
7101a3da04  sub x10,x10,x9
7101a3da08  sxtw x8,w26
7101a3da0c  asr x10,x10,#0x4
7101a3da10  cmp x10,x8
7101a3da14  b.ls 0x7101a4026c
7101a3da18  mov x0,x25
7101a3da1c  add x19,x9,x8, LSL #0x4
7101a3da20  bl 0x7101a49c60
7101a3da24  str x19,[x25, #0x3f0]
7101a3da28  cbz x19,0x7101a3dac4
7101a3da2c  ldr x8,[x25, #0x3b0]
7101a3da30  ldr x9,[x25, #0x3b8]
7101a3da34  cmp x8,x9
7101a3da38  str x19,[x25, #0x400]
7101a3da3c  b.eq 0x7101a3dac4
7101a3da40  sub x10,x9,#0x10
7101a3da44  sub x10,x10,x8
7101a3da48  ubfx x11,x10,#0x4,#0x1c
7101a3da4c  add w11,w11,#0x1
7101a3da50  ands x11,x11,#0x7
7101a3da54  b.eq 0x7101a3da70
7101a3da58  neg x11,x11
7101a3da5c  ldr x12,[x8, #0x8]
7101a3da60  add x8,x8,#0x10
7101a3da64  adds x11,x11,#0x1
7101a3da68  strb wzr,[x12, #0x106]
7101a3da6c  b.ne 0x7101a3da5c
7101a3da70  cmp x10,#0x70
7101a3da74  b.cc 0x7101a3dac4
7101a3da78  ldr x10,[x8, #0x8]
7101a3da7c  strb wzr,[x10, #0x106]
7101a3da80  ldr x10,[x8, #0x18]
7101a3da84  strb wzr,[x10, #0x106]
7101a3da88  ldr x10,[x8, #0x28]
7101a3da8c  strb wzr,[x10, #0x106]
7101a3da90  ldr x10,[x8, #0x38]
7101a3da94  strb wzr,[x10, #0x106]
7101a3da98  ldr x10,[x8, #0x48]
7101a3da9c  strb wzr,[x10, #0x106]
7101a3daa0  ldr x10,[x8, #0x58]
7101a3daa4  strb wzr,[x10, #0x106]
7101a3daa8  ldr x10,[x8, #0x68]
7101a3daac  strb wzr,[x10, #0x106]
7101a3dab0  ldr x10,[x8, #0x78]
7101a3dab4  add x8,x8,#0x80
7101a3dab8  cmp x9,x8
7101a3dabc  strb wzr,[x10, #0x106]
7101a3dac0  b.ne 0x7101a3da78
7101a3dac4  ldr x8,[sp, #0x38]
7101a3dac8  add x24,x24,#0x10
7101a3dacc  cmp x24,x8
7101a3dad0  b.ne 0x7101a3d650
7101a3dad4  ldp x26,x8,[x27, #0x198]
7101a3dad8  subs x8,x8,x26
7101a3dadc  b.eq 0x7101a4026c
7101a3dae0  asr x8,x8,#0x4
7101a3dae4  cmp x8,#0x1
7101a3dae8  b.ls 0x7101a4026c
7101a3daec  ldr w8,[x25, #0x150]
7101a3daf0  cmp w8,#0x1
7101a3daf4  b.ne 0x7101a3de48
7101a3daf8  cbz x26,0x7101a3de48
7101a3dafc  ldr w8,[x25, #0x138]
7101a3db00  cmp w8,#0x2
7101a3db04  b.ne 0x7101a3de48
7101a3db08  str xzr,[sp, #0x70]
7101a3db0c  ldr x8,[x26, #0x8]
7101a3db10  ldr x9,[x8, #0x10]
7101a3db14  ldr x9,[x9, #0x8]
7101a3db18  ldr w10,[x9, #0x484]
7101a3db1c  cbnz w10,0x7101a3db2c
7101a3db20  ldr w10,[x9, #0x488]
7101a3db24  cmn w10,#0x1
7101a3db28  b.eq 0x7101a3db40
7101a3db2c  ldrb w11,[x9, #0x4aa]
7101a3db30  ldrb w10,[x8, #0x36]
7101a3db34  cmp w11,#0x0
7101a3db38  ccmp w10,#0x0,#0x4,ne
7101a3db3c  b.ne 0x7101a3db6c
7101a3db40  mov w19,wzr
7101a3db44  b 0x7101a3db78
7101a3db48  cmp w8,#0xb
7101a3db4c  b.ne 0x7101a3de74
7101a3db50  adrp x8,0x710532f000
7101a3db54  ldr x8,[x8, #0x7b0]
7101a3db58  ldr x8,[x8, #0x8]
7101a3db5c  ldr w8,[x8, #0xa28]
7101a3db60  cmp w8,#0x2
7101a3db64  b.ne 0x7101a3d63c
7101a3db68  b 0x7101a3de74
7101a3db6c  ldrb w9,[x9, #0x1a8]
7101a3db70  tst w9,#0x2
7101a3db74  cinc w19,w20,ne
7101a3db78  ldr x8,[x8, #0x20]
7101a3db7c  ldr x8,[x8, #0x100]
7101a3db80  ldr q0,[x8, #0x60]
7101a3db84  fadd s1,s0,s9
7101a3db88  dup s0,v0.S[0x1]
7101a3db8c  movi v2.2D,#0x0
7101a3db90  mov v2.S[0x0],v1.S[0x0]
7101a3db94  mov w0,#0x10
7101a3db98  fsub s0,s10,s0
7101a3db9c  orr w1,wzr,#0x30
7101a3dba0  mov v2.S[0x1],v0.S[0x0]
7101a3dba4  mov w22,#0x1
7101a3dba8  str q2,[sp, #0x50]
7101a3dbac  bl 0x710392e290
7101a3dbb0  mov x27,x0
7101a3dbb4  cbnz x0,0x7101a3dc00
7101a3dbb8  adrp x8,0x7105332000
7101a3dbbc  ldr x0,[x8, #0xf00]
7101a3dbc0  cbz x0,0x7101a3dbfc
7101a3dbc4  orr w8,wzr,#0x30
7101a3dbc8  str wzr,[sp, #0x88]
7101a3dbcc  add x1,sp,#0x88
7101a3dbd0  str x8,[sp, #0xd0]
7101a3dbd4  ldr x8,[x0]
7101a3dbd8  ldr x8,[x8, #0x30]
7101a3dbdc  add x2,sp,#0xd0
7101a3dbe0  blr x8
7101a3dbe4  tbz w0,#0x0,0x7101a3dbfc
7101a3dbe8  mov w0,#0x10
7101a3dbec  orr w1,wzr,#0x30
7101a3dbf0  bl 0x710392e290
7101a3dbf4  mov x27,x0
7101a3dbf8  cbnz x0,0x7101a3dc00
7101a3dbfc  mov x27,xzr
7101a3dc00  str w19,[x27]
7101a3dc04  ldr q0,[sp, #0x50]
7101a3dc08  ldr x8,[sp, #0x88]
7101a3dc0c  ldr w9,[sp, #0x90]
7101a3dc10  str w9,[x27, #0xc]
7101a3dc14  stur x8,[x27, #0x4]
7101a3dc18  str q0,[x27, #0x10]
7101a3dc1c  ldr x8,[sp, #0x70]
7101a3dc20  add x20,x27,#0x30
7101a3dc24  add x1,sp,#0xd0
7101a3dc28  str x8,[x27, #0x20]
7101a3dc2c  mov x8,#-0x1
7101a3dc30  str x8,[x27, #0x28]
7101a3dc34  stp x27,x20,[sp, #0xd0]
7101a3dc38  str x20,[sp, #0xe0]
7101a3dc3c  ldr x0,[x25, #0x328]
7101a3dc40  bl 0x710376e720
7101a3dc44  orr x19,xzr,#-0x5555555555555556
7101a3dc48  mov x21,xzr
7101a3dc4c  mov w8,#0x1
7101a3dc50  movk x19,#0xaaab
7101a3dc54  cmp x8,x21
7101a3dc58  b.ls 0x7101a40264
7101a3dc5c  orr w8,wzr,#0x30
7101a3dc60  madd x8,x21,x8,x27
7101a3dc64  ldr w8,[x8, #0x28]
7101a3dc68  cmn w8,#0x1
7101a3dc6c  b.eq 0x7101a3dc7c
7101a3dc70  ldr x8,[x26, #0x8]
7101a3dc74  ldr x8,[x8, #0x20]
7101a3dc78  strb w22,[x8, #0x165]
7101a3dc7c  sub x8,x20,x27
7101a3dc80  asr x8,x8,#0x4
7101a3dc84  mul x8,x8,x19
7101a3dc88  cmp x8,x21
7101a3dc8c  b.ls 0x7101a40264
7101a3dc90  orr w8,wzr,#0x30
7101a3dc94  madd x8,x21,x8,x27
7101a3dc98  ldr w8,[x8, #0x2c]
7101a3dc9c  cmn w8,#0x1
7101a3dca0  b.eq 0x7101a3dd60
7101a3dca4  ldr x8,[x26, #0x8]
7101a3dca8  ldr x0,[x8, #0x20]
7101a3dcac  bl 0x71032d3260
7101a3dcb0  ldr x8,[x25, #0x3e8]
7101a3dcb4  cmp x8,x26
7101a3dcb8  b.eq 0x7101a3dd60
7101a3dcbc  mov x0,x25
7101a3dcc0  bl 0x7101a49c60
7101a3dcc4  ldr x8,[x25, #0x3b0]
7101a3dcc8  ldr x9,[x25, #0x3b8]
7101a3dccc  cmp x8,x9
7101a3dcd0  str x26,[x25, #0x3f0]
7101a3dcd4  str x26,[x25, #0x400]
7101a3dcd8  b.eq 0x7101a3dd60
7101a3dcdc  sub x10,x9,#0x10
7101a3dce0  sub x10,x10,x8
7101a3dce4  ubfx x11,x10,#0x4,#0x1c
7101a3dce8  add w11,w11,#0x1
7101a3dcec  ands x11,x11,#0x7
7101a3dcf0  b.eq 0x7101a3dd0c
7101a3dcf4  neg x11,x11
7101a3dcf8  ldr x12,[x8, #0x8]
7101a3dcfc  add x8,x8,#0x10
7101a3dd00  adds x11,x11,#0x1
7101a3dd04  strb wzr,[x12, #0x106]
7101a3dd08  b.ne 0x7101a3dcf8
7101a3dd0c  cmp x10,#0x70
7101a3dd10  b.cc 0x7101a3dd60
7101a3dd14  ldr x10,[x8, #0x8]
7101a3dd18  strb wzr,[x10, #0x106]
7101a3dd1c  ldr x10,[x8, #0x18]
7101a3dd20  strb wzr,[x10, #0x106]
7101a3dd24  ldr x10,[x8, #0x28]
7101a3dd28  strb wzr,[x10, #0x106]
7101a3dd2c  ldr x10,[x8, #0x38]
7101a3dd30  strb wzr,[x10, #0x106]
7101a3dd34  ldr x10,[x8, #0x48]
7101a3dd38  strb wzr,[x10, #0x106]
7101a3dd3c  ldr x10,[x8, #0x58]
7101a3dd40  strb wzr,[x10, #0x106]
7101a3dd44  ldr x10,[x8, #0x68]
7101a3dd48  strb wzr,[x10, #0x106]
7101a3dd4c  ldr x10,[x8, #0x78]
7101a3dd50  add x8,x8,#0x80
7101a3dd54  cmp x9,x8
7101a3dd58  strb wzr,[x10, #0x106]
7101a3dd5c  b.ne 0x7101a3dd14
7101a3dd60  ldp x27,x20,[sp, #0xd0]
7101a3dd64  sub x8,x20,x27
7101a3dd68  asr x8,x8,#0x4
7101a3dd6c  mul x8,x8,x19
7101a3dd70  add x21,x21,#0x1
7101a3dd74  cmp x21,w8, SXTW 
7101a3dd78  b.lt 0x7101a3dc54
7101a3dd7c  ldr x8,[x25, #0x328]
7101a3dd80  ldr w8,[x8, #0x25c]
7101a3dd84  cbnz w8,0x7101a3de38
7101a3dd88  mov x0,x25
7101a3dd8c  bl 0x7101a49c60
7101a3dd90  ldr x8,[x25, #0x3b0]
7101a3dd94  ldr x9,[x25, #0x3b8]
7101a3dd98  cmp x8,x9
7101a3dd9c  str x26,[x25, #0x3f0]
7101a3dda0  str x26,[x25, #0x400]
7101a3dda4  b.eq 0x7101a3de2c
7101a3dda8  sub x10,x9,#0x10
7101a3ddac  sub x10,x10,x8
7101a3ddb0  ubfx x11,x10,#0x4,#0x1c
7101a3ddb4  add w11,w11,#0x1
7101a3ddb8  ands x11,x11,#0x7
7101a3ddbc  b.eq 0x7101a3ddd8
7101a3ddc0  neg x11,x11
7101a3ddc4  ldr x12,[x8, #0x8]
7101a3ddc8  add x8,x8,#0x10
7101a3ddcc  adds x11,x11,#0x1
7101a3ddd0  strb wzr,[x12, #0x106]
7101a3ddd4  b.ne 0x7101a3ddc4
7101a3ddd8  cmp x10,#0x70
7101a3dddc  b.cc 0x7101a3de2c
7101a3dde0  ldr x10,[x8, #0x8]
7101a3dde4  strb wzr,[x10, #0x106]
7101a3dde8  ldr x10,[x8, #0x18]
7101a3ddec  strb wzr,[x10, #0x106]
7101a3ddf0  ldr x10,[x8, #0x28]
7101a3ddf4  strb wzr,[x10, #0x106]
7101a3ddf8  ldr x10,[x8, #0x38]
7101a3ddfc  strb wzr,[x10, #0x106]
7101a3de00  ldr x10,[x8, #0x48]
7101a3de04  strb wzr,[x10, #0x106]
7101a3de08  ldr x10,[x8, #0x58]
7101a3de0c  strb wzr,[x10, #0x106]
7101a3de10  ldr x10,[x8, #0x68]
7101a3de14  strb wzr,[x10, #0x106]
7101a3de18  ldr x10,[x8, #0x78]
7101a3de1c  add x8,x8,#0x80
7101a3de20  cmp x9,x8
7101a3de24  strb wzr,[x10, #0x106]
7101a3de28  b.ne 0x7101a3dde0
7101a3de2c  orr w8,wzr,#0x3
7101a3de30  str w8,[x25, #0x268]
7101a3de34  ldr x27,[sp, #0xd0]
7101a3de38  cbz x27,0x7101a3de48
7101a3de3c  mov x0,x27
7101a3de40  str x27,[sp, #0xd8]
7101a3de44  bl 0x710392eb40
7101a3de48  ldr x8,[x26, #0x18]
7101a3de4c  ldr x8,[x8, #0x10]
7101a3de50  ldr x8,[x8, #0x8]
7101a3de54  ldr w9,[x8, #0x484]
7101a3de58  cbnz w9,0x7101a3de68
7101a3de5c  ldr w8,[x8, #0x488]
7101a3de60  cmn w8,#0x1
7101a3de64  b.eq 0x7101a3dfb4
7101a3de68  add x1,x26,#0x10
7101a3de6c  mov x0,x25
7101a3de70  bl 0x7101a4a0e0
7101a3de74  ldr x19,[x25, #0x3b0]
7101a3de78  ldr x20,[x25, #0x3b8]
7101a3de7c  mov w22,#0x1
7101a3de80  adrp x24,0x71044f7000
7101a3de84  add x24,x24,#0x720
7101a3de88  cmp x19,x20
7101a3de8c  b.eq 0x7101a3df30
7101a3de90  ldr x21,[x19, #0x8]
7101a3de94  ldr x0,[x21, #0xc8]
7101a3de98  str wzr,[x21, #0xd4]
7101a3de9c  ldr x8,[x0]
7101a3dea0  ldr x8,[x8, #0x68]
7101a3dea4  blr x8
7101a3dea8  tbz w0,#0x0,0x7101a3df24
7101a3deac  ldr x0,[x21, #0xc8]
7101a3deb0  ldr x8,[x0]
7101a3deb4  ldr x8,[x8, #0x78]
7101a3deb8  blr x8
7101a3debc  tbz w0,#0x0,0x7101a3df24
7101a3dec0  ldr x8,[x21, #0xc8]
7101a3dec4  ldr w8,[x8, #0x25c]
7101a3dec8  cmp w8,#0x5
7101a3decc  b.hi 0x7101a3df24
7101a3ded0  ldrsw x8,[x24, x8, LSL #0x2]
7101a3ded4  add x8,x8,x24
7101a3ded8  br x8
7101a3dedc  str w22,[x21, #0xd4]
7101a3dee0  b 0x7101a3df24
7101a3dee4  orr w8,wzr,#0x3
7101a3dee8  b 0x7101a3df20
7101a3deec  orr w8,wzr,#0x7
7101a3def0  b 0x7101a3df20
7101a3def4  mov w8,#0x2
7101a3def8  b 0x7101a3df20
7101a3defc  ldr w8,[x21, #0xd8]
7101a3df00  cmp w8,#0x1
7101a3df04  b.eq 0x7101a3df1c
7101a3df08  cbnz w8,0x7101a3df24
7101a3df0c  mov w8,#0x5
7101a3df10  b 0x7101a3df20
7101a3df14  mov w8,#0x4
7101a3df18  b 0x7101a3df20
7101a3df1c  orr w8,wzr,#0x6
7101a3df20  str w8,[x21, #0xd4]
7101a3df24  add x19,x19,#0x10
7101a3df28  cmp x20,x19
7101a3df2c  b.ne 0x7101a3de90
7101a3df30  ldr x0,[x25, #0x338]
7101a3df34  bl 0x71019e7c00
7101a3df38  ldr x0,[x25, #0x348]
7101a3df3c  bl 0x71019f9b50
7101a3df40  ldr x0,[x25, #0x358]
7101a3df44  bl 0x71019e8ff0
7101a3df48  ldr x8,[x25, #0x368]
7101a3df4c  ldrb w9,[x8, #0x48]
7101a3df50  mov w20,#0x1
7101a3df54  cbnz w9,0x7101a3e04c
7101a3df58  ldr x9,[x8, #0x30]
7101a3df5c  ldrb w10,[x9, #0x316]
7101a3df60  cbz w10,0x7101a3df6c
7101a3df64  str w20,[x8, #0x44]
7101a3df68  b 0x7101a3e048
7101a3df6c  ldrsw x9,[x9, #0x2b4]
7101a3df70  cmn w9,#0x1
7101a3df74  b.eq 0x7101a3e04c
7101a3df78  cmp w9,#0xd
7101a3df7c  b.cs 0x7101a4027c
7101a3df80  adrp x10,0x7104543000
7101a3df84  add x10,x10,#0xa78
7101a3df88  ldr w9,[x10, x9, LSL #0x2]
7101a3df8c  sub w9,w9,#0x1
7101a3df90  cmp w9,#0xb
7101a3df94  b.hi 0x7101a3e038
7101a3df98  adrp x10,0x71044f7000
7101a3df9c  add x10,x10,#0x738
7101a3dfa0  ldrsw x9,[x10, x9, LSL #0x2]
7101a3dfa4  add x9,x9,x10
7101a3dfa8  br x9
7101a3dfac  mov w9,#0xa
7101a3dfb0  b 0x7101a3e03c
7101a3dfb4  ldr x8,[x26, #0x8]
7101a3dfb8  ldr x8,[x8, #0x10]
7101a3dfbc  ldr x8,[x8, #0x8]
7101a3dfc0  ldr w9,[x8, #0x484]
7101a3dfc4  cbnz w9,0x7101a3dfd4
7101a3dfc8  ldr w8,[x8, #0x488]
7101a3dfcc  cmn w8,#0x1
7101a3dfd0  b.eq 0x7101a3de74
7101a3dfd4  mov x0,x25
7101a3dfd8  mov x1,x26
7101a3dfdc  b 0x7101a3de70
7101a3dfe0  mov w9,#0x12c
7101a3dfe4  b 0x7101a3e03c
7101a3dfe8  mov w9,#0x32
7101a3dfec  b 0x7101a3e03c
7101a3dff0  mov w9,#0x96
7101a3dff4  b 0x7101a3e03c
7101a3dff8  orr w9,wzr,#0x1e
7101a3dffc  b 0x7101a3e03c
7101a3e000  mov w9,#0x14
7101a3e004  b 0x7101a3e03c
7101a3e008  mov w9,#0x28
7101a3e00c  b 0x7101a3e03c
7101a3e010  mov w9,#0x64
7101a3e014  b 0x7101a3e03c
7101a3e018  orr w9,wzr,#0x3c
7101a3e01c  b 0x7101a3e03c
7101a3e020  mov w9,#0x50
7101a3e024  b 0x7101a3e03c
7101a3e028  mov w9,#0x7d
7101a3e02c  b 0x7101a3e03c
7101a3e030  mov w9,#0xc8
7101a3e034  b 0x7101a3e03c
7101a3e038  mov w9,wzr
7101a3e03c  strh w9,[x8, #0x3c]
7101a3e040  mov w9,#0x2
7101a3e044  str w9,[x8, #0x44]
7101a3e048  strb w20,[x8, #0x48]
7101a3e04c  ldr x0,[x25, #0x378]
7101a3e050  bl 0x71019eace0
7101a3e054  ldr x0,[x25, #0x388]
7101a3e058  bl 0x7101a0f290
7101a3e05c  ldr x8,[x25, #0x398]
7101a3e060  ldrb w9,[x8, #0x64]
7101a3e064  cbnz w9,0x7101a3e0d4
7101a3e068  ldr x9,[x8, #0x58]
7101a3e06c  ldrb w10,[x9, #0x316]
7101a3e070  cbz w10,0x7101a3e07c
7101a3e074  str w20,[x8, #0x60]
7101a3e078  b 0x7101a3e0d0
7101a3e07c  ldrsw x9,[x9, #0x2b4]
7101a3e080  cmn w9,#0x1
7101a3e084  b.eq 0x7101a3e0d4
7101a3e088  tbnz w9,#0x1f,0x7101a3e0c4
7101a3e08c  mov x0,x8
7101a3e090  ldr x10,[x0, #0x38]!
7101a3e094  ldr x11,[x0, #0x8]
7101a3e098  sub x11,x11,x10
7101a3e09c  asr x11,x11,#0x2
7101a3e0a0  cmp w9,w11
7101a3e0a4  b.ge 0x7101a3e0c4
7101a3e0a8  cmp x11,x9
7101a3e0ac  b.ls 0x7101a40298
7101a3e0b0  ldr w9,[x10, x9, LSL #0x2]
7101a3e0b4  str w9,[x8, #0x50]
7101a3e0b8  cbz w9,0x7101a3e0c8
7101a3e0bc  mov w9,#0x2
7101a3e0c0  b 0x7101a3e0cc
7101a3e0c4  str wzr,[x8, #0x50]
7101a3e0c8  mov w9,#0x1
7101a3e0cc  str w9,[x8, #0x60]
7101a3e0d0  strb w20,[x8, #0x64]
7101a3e0d4  ldr x0,[x25, #0x3a8]
7101a3e0d8  bl 0x71019e6420
7101a3e0dc  ldr x24,[x25, #0x250]
7101a3e0e0  ldr x26,[x25, #0x258]
7101a3e0e4  cmp x24,x26
7101a3e0e8  b.eq 0x7101a3edf0
7101a3e0ec  add x8,x25,#0x250
7101a3e0f0  mov x21,#0xbf7f
7101a3e0f4  movk x21,#0xefdf, LSL #16
7101a3e0f8  str x8,[sp, #0x50]
7101a3e0fc  add x8,x25,#0x3b0
7101a3e100  add x27,x25,#0x150
7101a3e104  movk x21,#0xfbf7, LSL #32
7101a3e108  movk x21,#0x7efd, LSL #48
7101a3e10c  str x8,[sp, #0x40]
7101a3e110  orr w22,wzr,#0x3f8
7101a3e114  adrp x28,0x71044f7000
7101a3e118  add x28,x28,#0x768
7101a3e11c  b 0x7101a3e13c
7101a3e120  mov w2,wzr
7101a3e124  mov x8,x27
7101a3e128  mov w20,#0x1
7101a3e12c  b 0x7101a3e6ec
7101a3e130  mov w2,wzr
7101a3e134  mov x8,x27
7101a3e138  b 0x7101a3e798
7101a3e13c  ldr w8,[x25, #0x268]
7101a3e140  cbnz w8,0x7101a3e7c0
7101a3e144  ldr w8,[x25, #0x138]
7101a3e148  cmp w8,#0x3
7101a3e14c  b.ne 0x7101a3e7c0
7101a3e150  ldr x8,[x25, #0x258]
7101a3e154  ldr x10,[x25, #0x250]
7101a3e158  sub x8,x8,x10
7101a3e15c  asr x8,x8,#0x3
7101a3e160  mul x8,x8,x21
7101a3e164  ldrsw x9,[x24]
7101a3e168  cmp x8,x9
7101a3e16c  b.ls 0x7101a40280
7101a3e170  ldr x11,[x25, #0x3b8]
7101a3e174  ldr x8,[x25, #0x3b0]
7101a3e178  sub x11,x11,x8
7101a3e17c  asr x11,x11,#0x4
7101a3e180  cmp x11,x9
7101a3e184  b.ls 0x7101a40288
7101a3e188  add x8,x8,x9, LSL #0x4
7101a3e18c  ldr x8,[x8, #0x8]
7101a3e190  ldr w8,[x8, #0xd4]
7101a3e194  sub w11,w8,#0x1
7101a3e198  cmp w11,#0x6
7101a3e19c  b.hi 0x7101a3e7c0
7101a3e1a0  ldrsw x11,[x28, x11, LSL #0x2]
7101a3e1a4  add x11,x11,x28
7101a3e1a8  madd x8,x9,x22,x10
7101a3e1ac  br x11
7101a3e1b0  madd x9,x9,x22,x10
7101a3e1b4  adrp x12,0x7105324000
7101a3e1b8  ldr w11,[x9, #0x10]!
7101a3e1bc  ldrb w12,[x12, #0xae1]
7101a3e1c0  cmp w11,#0x3
7101a3e1c4  csinc w10,wzr,w11,eq
7101a3e1c8  cbz w10,0x7101a3e1f0
7101a3e1cc  cmp w10,#0x3
7101a3e1d0  b.eq 0x7101a3e20c
7101a3e1d4  cmp w10,#0x2
7101a3e1d8  b.ne 0x7101a3e220
7101a3e1dc  cbz w12,0x7101a3e20c
7101a3e1e0  ldr w13,[x25, #0x3e0]
7101a3e1e4  cmn w13,#0x1
7101a3e1e8  b.ne 0x7101a3e20c
7101a3e1ec  b 0x7101a3e644
7101a3e1f0  ldr x13,[x25, #0x3e8]
7101a3e1f4  cbz x13,0x7101a3e20c
7101a3e1f8  ldr x13,[x13, #0x8]
7101a3e1fc  ldr w13,[x13, #0x28]
7101a3e200  ldr w14,[x27]
7101a3e204  cmp w13,w14
7101a3e208  b.eq 0x7101a3e63c
7101a3e20c  cmp w10,#0x3
7101a3e210  csinc w10,wzr,w10,eq
7101a3e214  cmp w10,w11
7101a3e218  b.ne 0x7101a3e1c8
7101a3e21c  mov w10,w11
7101a3e220  str w10,[x25, #0x3e4]
7101a3e224  ldr w9,[x9]
7101a3e228  cmp w10,w9
7101a3e22c  b.eq 0x7101a3e23c
7101a3e230  str w20,[x25, #0x268]
7101a3e234  ldr w8,[x8]
7101a3e238  str w8,[x25, #0x3d0]
7101a3e23c  mov x0,x25
7101a3e240  bl 0x7101a49c60
7101a3e244  b 0x7101a3e7c0
7101a3e248  ldrb w9,[x25, #0x41a]
7101a3e24c  cbz w9,0x7101a3e7c0
7101a3e250  ldr x9,[x25, #0x3e8]
7101a3e254  cbz x9,0x7101a3e4f8
7101a3e258  ldr x10,[x9, #0x8]
7101a3e25c  ldrb w10,[x10, #0x36]
7101a3e260  cbz w10,0x7101a3e7c0
7101a3e264  ldr w8,[x8]
7101a3e268  str w8,[x25, #0x3d8]
7101a3e26c  str x9,[x25, #0x3f8]
7101a3e270  ldr x19,[x9, #0x8]
7101a3e274  ldr x20,[x19, #0x20]
7101a3e278  strb wzr,[x19, #0x36]
7101a3e27c  ldr x0,[x20, #0x100]
7101a3e280  ldr x8,[x0]
7101a3e284  ldr x8,[x8, #0x60]
7101a3e288  mov w1,wzr
7101a3e28c  blr x8
7101a3e290  strb wzr,[x20, #0x162]
7101a3e294  ldrb w8,[x19, #0x35]
7101a3e298  cbz w8,0x7101a3e2b0
7101a3e29c  ldrb w8,[x19, #0x36]
7101a3e2a0  cbz w8,0x7101a3e2b0
7101a3e2a4  ldrb w8,[x19, #0x37]
7101a3e2a8  cmp w8,#0x0
7101a3e2ac  cset w8,eq
7101a3e2b0  ldr x9,[x19, #0x20]
7101a3e2b4  ldr x10,[x9, #0x100]
7101a3e2b8  ldr x10,[x10, #0x38]
7101a3e2bc  mov w20,#0x1
7101a3e2c0  cbz x10,0x7101a3e2d4
7101a3e2c4  ldrb w11,[x10, #0x58]
7101a3e2c8  and w11,w11,#0xfe
7101a3e2cc  orr w11,w11,w8
7101a3e2d0  strb w11,[x10, #0x58]
7101a3e2d4  strb w8,[x9, #0x163]
7101a3e2d8  ldr x8,[x25, #0x3f8]
7101a3e2dc  ldr x9,[x8, #0x8]
7101a3e2e0  ldr w2,[x9, #0x8]
7101a3e2e4  add x8,x9,#0x28
7101a3e2e8  ldr w1,[x8]
7101a3e2ec  mov x0,x25
7101a3e2f0  bl 0x7101a48cd0
7101a3e2f4  ldrsw x8,[x25, #0x134]
7101a3e2f8  cmp w8,#0x13
7101a3e2fc  strb wzr,[x25, #0x41a]
7101a3e300  b.cs 0x7101a4027c
7101a3e304  add x8,x25,x8, LSL #0x2
7101a3e308  mov w9,#0x5
7101a3e30c  b 0x7101a3e7bc
7101a3e310  orr w9,wzr,#0x6
7101a3e314  str w9,[x25, #0x268]
7101a3e318  ldr w1,[x8]
7101a3e31c  mov x0,x25
7101a3e320  str w1,[x25, #0x3d0]
7101a3e324  bl 0x7101a4a6c0
7101a3e328  b 0x7101a3e7c0
7101a3e32c  ldrb w11,[x25, #0x41a]
7101a3e330  cbz w11,0x7101a3e7c0
7101a3e334  ldr x19,[x25, #0x3e8]
7101a3e338  cbz x19,0x7101a3e52c
7101a3e33c  ldr x11,[x19, #0x8]
7101a3e340  ldrb w11,[x11, #0x36]
7101a3e344  cbnz w11,0x7101a3e540
7101a3e348  b 0x7101a3e7c0
7101a3e34c  mov w9,#0x5
7101a3e350  str w9,[x25, #0x268]
7101a3e354  ldr w1,[x8]
7101a3e358  mov x0,x25
7101a3e35c  str w1,[x25, #0x3d0]
7101a3e360  bl 0x7101a4a510
7101a3e364  b 0x7101a3e7c0
7101a3e368  ldrb w9,[x25, #0x41a]
7101a3e36c  cbz w9,0x7101a3e7c0
7101a3e370  ldr x9,[x25, #0x3e8]
7101a3e374  cbz x9,0x7101a3e598
7101a3e378  ldr x10,[x9, #0x8]
7101a3e37c  ldrb w10,[x10, #0x36]
7101a3e380  cbz w10,0x7101a3e7c0
7101a3e384  ldr w8,[x8]
7101a3e388  str w8,[x25, #0x3d8]
7101a3e38c  str x9,[x25, #0x3f8]
7101a3e390  ldr x19,[x9, #0x8]
7101a3e394  ldr x20,[x19, #0x20]
7101a3e398  strb wzr,[x19, #0x36]
7101a3e39c  ldr x0,[x20, #0x100]
7101a3e3a0  ldr x8,[x0]
7101a3e3a4  ldr x8,[x8, #0x60]
7101a3e3a8  mov w1,wzr
7101a3e3ac  blr x8
7101a3e3b0  strb wzr,[x20, #0x162]
7101a3e3b4  ldrb w8,[x19, #0x35]
7101a3e3b8  cbz w8,0x7101a3e3d0
7101a3e3bc  ldrb w8,[x19, #0x36]
7101a3e3c0  cbz w8,0x7101a3e3d0
7101a3e3c4  ldrb w8,[x19, #0x37]
7101a3e3c8  cmp w8,#0x0
7101a3e3cc  cset w8,eq
7101a3e3d0  ldr x9,[x19, #0x20]
7101a3e3d4  ldr x10,[x9, #0x100]
7101a3e3d8  ldr x10,[x10, #0x38]
7101a3e3dc  mov w20,#0x1
7101a3e3e0  cbz x10,0x7101a3e3f4
7101a3e3e4  ldrb w11,[x10, #0x58]
7101a3e3e8  and w11,w11,#0xfe
7101a3e3ec  orr w11,w11,w8
7101a3e3f0  strb w11,[x10, #0x58]
7101a3e3f4  strb w8,[x9, #0x163]
7101a3e3f8  ldr x8,[x25, #0x3f8]
7101a3e3fc  ldr x9,[x8, #0x8]
7101a3e400  ldr w2,[x9, #0x8]
7101a3e404  add x8,x9,#0x28
7101a3e408  ldr w1,[x8]
7101a3e40c  mov x0,x25
7101a3e410  bl 0x7101a48cd0
7101a3e414  ldrsw x8,[x25, #0x134]
7101a3e418  cmp w8,#0x13
7101a3e41c  strb wzr,[x25, #0x41a]
7101a3e420  b.cs 0x7101a4027c
7101a3e424  add x8,x25,x8, LSL #0x2
7101a3e428  orr w9,wzr,#0x6
7101a3e42c  b 0x7101a3e7bc
7101a3e430  ldrb w9,[x25, #0x41a]
7101a3e434  cbz w9,0x7101a3e7c0
7101a3e438  ldr x9,[x25, #0x3e8]
7101a3e43c  cbz x9,0x7101a3e5cc
7101a3e440  ldr x10,[x9, #0x8]
7101a3e444  ldrb w10,[x10, #0x36]
7101a3e448  cbz w10,0x7101a3e7c0
7101a3e44c  ldr w8,[x8]
7101a3e450  str w8,[x25, #0x3d8]
7101a3e454  str x9,[x25, #0x3f8]
7101a3e458  ldr x19,[x9, #0x8]
7101a3e45c  ldr x20,[x19, #0x20]
7101a3e460  strb wzr,[x19, #0x36]
7101a3e464  ldr x0,[x20, #0x100]
7101a3e468  ldr x8,[x0]
7101a3e46c  ldr x8,[x8, #0x60]
7101a3e470  mov w1,wzr
7101a3e474  blr x8
7101a3e478  strb wzr,[x20, #0x162]
7101a3e47c  ldrb w8,[x19, #0x35]
7101a3e480  cbz w8,0x7101a3e498
7101a3e484  ldrb w8,[x19, #0x36]
7101a3e488  cbz w8,0x7101a3e498
7101a3e48c  ldrb w8,[x19, #0x37]
7101a3e490  cmp w8,#0x0
7101a3e494  cset w8,eq
7101a3e498  ldr x9,[x19, #0x20]
7101a3e49c  ldr x10,[x9, #0x100]
7101a3e4a0  ldr x10,[x10, #0x38]
7101a3e4a4  mov w20,#0x1
7101a3e4a8  cbz x10,0x7101a3e4bc
7101a3e4ac  ldrb w11,[x10, #0x58]
7101a3e4b0  and w11,w11,#0xfe
7101a3e4b4  orr w11,w11,w8
7101a3e4b8  strb w11,[x10, #0x58]
7101a3e4bc  strb w8,[x9, #0x163]
7101a3e4c0  ldr x8,[x25, #0x3f8]
7101a3e4c4  ldr x9,[x8, #0x8]
7101a3e4c8  ldr w2,[x9, #0x8]
7101a3e4cc  add x8,x9,#0x28
7101a3e4d0  ldr w1,[x8]
7101a3e4d4  mov x0,x25
7101a3e4d8  bl 0x7101a48cd0
7101a3e4dc  ldrsw x8,[x25, #0x134]
7101a3e4e0  cmp w8,#0x13
7101a3e4e4  strb wzr,[x25, #0x41a]
7101a3e4e8  b.cs 0x7101a4027c
7101a3e4ec  add x8,x25,x8, LSL #0x2
7101a3e4f0  mov w9,#0x9
7101a3e4f4  b 0x7101a3e7bc
7101a3e4f8  ldr x9,[x25, #0x3f0]
7101a3e4fc  cbz x9,0x7101a3e7c0
7101a3e500  ldr x9,[x9, #0x8]
7101a3e504  ldrb w9,[x9, #0x36]
7101a3e508  cbz w9,0x7101a3e7c0
7101a3e50c  ldr w8,[x8]
7101a3e510  ldr x9,[x25, #0x3f0]
7101a3e514  str w8,[x25, #0x3d8]
7101a3e518  str x9,[x25, #0x3f8]
7101a3e51c  cbnz x9,0x7101a3e270
7101a3e520  mov w2,wzr
7101a3e524  mov x8,x27
7101a3e528  b 0x7101a3e2e8
7101a3e52c  ldr x11,[x25, #0x3f0]
7101a3e530  cbz x11,0x7101a3e7c0
7101a3e534  ldr x11,[x11, #0x8]
7101a3e538  ldrb w11,[x11, #0x36]
7101a3e53c  cbz w11,0x7101a3e7c0
7101a3e540  ldr w8,[x8]
7101a3e544  str w8,[x25, #0x3d8]
7101a3e548  adrp x8,0x710532f000
7101a3e54c  ldr x8,[x8, #0x730]
7101a3e550  ldr x20,[x8, #0x8]
7101a3e554  madd x8,x9,x22,x10
7101a3e558  ldr x0,[x20, #0x168]
7101a3e55c  ldr x28,[x8, #0x18]
7101a3e560  mov x1,x28
7101a3e564  bl 0x71032633f0
7101a3e568  cmp w0,#0x2
7101a3e56c  b.lt 0x7101a3e600
7101a3e570  cbz x19,0x7101a3e64c
7101a3e574  mov x21,#0xbf7f
7101a3e578  movk x21,#0xefdf, LSL #16
7101a3e57c  movk x21,#0xfbf7, LSL #32
7101a3e580  movk x21,#0x7efd, LSL #48
7101a3e584  orr w22,wzr,#0x3f8
7101a3e588  str x19,[x25, #0x3f8]
7101a3e58c  adrp x28,0x71044f7000
7101a3e590  add x28,x28,#0x768
7101a3e594  b 0x7101a3e674
7101a3e598  ldr x9,[x25, #0x3f0]
7101a3e59c  cbz x9,0x7101a3e7c0
7101a3e5a0  ldr x9,[x9, #0x8]
7101a3e5a4  ldrb w9,[x9, #0x36]
7101a3e5a8  cbz w9,0x7101a3e7c0
7101a3e5ac  ldr w8,[x8]
7101a3e5b0  ldr x9,[x25, #0x3f0]
7101a3e5b4  str w8,[x25, #0x3d8]
7101a3e5b8  str x9,[x25, #0x3f8]
7101a3e5bc  cbnz x9,0x7101a3e390
7101a3e5c0  mov w2,wzr
7101a3e5c4  mov x8,x27
7101a3e5c8  b 0x7101a3e408
7101a3e5cc  ldr x9,[x25, #0x3f0]
7101a3e5d0  cbz x9,0x7101a3e7c0
7101a3e5d4  ldr x9,[x9, #0x8]
7101a3e5d8  ldrb w9,[x9, #0x36]
7101a3e5dc  cbz w9,0x7101a3e7c0
7101a3e5e0  ldr w8,[x8]
7101a3e5e4  ldr x9,[x25, #0x3f0]
7101a3e5e8  str w8,[x25, #0x3d8]
7101a3e5ec  str x9,[x25, #0x3f8]
7101a3e5f0  cbnz x9,0x7101a3e458
7101a3e5f4  mov w2,wzr
7101a3e5f8  mov x8,x27
7101a3e5fc  b 0x7101a3e4d0
7101a3e600  add x0,x20,#0x160
7101a3e604  mov x1,x28
7101a3e608  bl 0x7103265e70
7101a3e60c  mov x21,#0xbf7f
7101a3e610  movk x21,#0xefdf, LSL #16
7101a3e614  mov w20,#0x1
7101a3e618  movk x21,#0xfbf7, LSL #32
7101a3e61c  movk x21,#0x7efd, LSL #48
7101a3e620  orr w22,wzr,#0x3f8
7101a3e624  adrp x28,0x71044f7000
7101a3e628  add x28,x28,#0x768
7101a3e62c  tbz w0,#0x0,0x7101a3e7c0
7101a3e630  cbz x19,0x7101a3e714
7101a3e634  str x19,[x25, #0x3f8]
7101a3e638  b 0x7101a3e720
7101a3e63c  mov w10,wzr
7101a3e640  b 0x7101a3e220
7101a3e644  mov w10,#0x2
7101a3e648  b 0x7101a3e220
7101a3e64c  ldr x19,[x25, #0x3f0]
7101a3e650  mov x21,#0xbf7f
7101a3e654  movk x21,#0xefdf, LSL #16
7101a3e658  movk x21,#0xfbf7, LSL #32
7101a3e65c  movk x21,#0x7efd, LSL #48
7101a3e660  orr w22,wzr,#0x3f8
7101a3e664  adrp x28,0x71044f7000
7101a3e668  add x28,x28,#0x768
7101a3e66c  str x19,[x25, #0x3f8]
7101a3e670  cbz x19,0x7101a3e120
7101a3e674  ldr x19,[x19, #0x8]
7101a3e678  ldr x20,[x19, #0x20]
7101a3e67c  strb wzr,[x19, #0x36]
7101a3e680  ldr x0,[x20, #0x100]
7101a3e684  ldr x8,[x0]
7101a3e688  ldr x8,[x8, #0x60]
7101a3e68c  mov w1,wzr
7101a3e690  blr x8
7101a3e694  strb wzr,[x20, #0x162]
7101a3e698  ldrb w8,[x19, #0x35]
7101a3e69c  cbz w8,0x7101a3e6b4
7101a3e6a0  ldrb w8,[x19, #0x36]
7101a3e6a4  cbz w8,0x7101a3e6b4
7101a3e6a8  ldrb w8,[x19, #0x37]
7101a3e6ac  cmp w8,#0x0
7101a3e6b0  cset w8,eq
7101a3e6b4  ldr x9,[x19, #0x20]
7101a3e6b8  ldr x10,[x9, #0x100]
7101a3e6bc  ldr x10,[x10, #0x38]
7101a3e6c0  mov w20,#0x1
7101a3e6c4  cbz x10,0x7101a3e6d8
7101a3e6c8  ldrb w11,[x10, #0x58]
7101a3e6cc  and w11,w11,#0xfe
7101a3e6d0  orr w11,w11,w8
7101a3e6d4  strb w11,[x10, #0x58]
7101a3e6d8  strb w8,[x9, #0x163]
7101a3e6dc  ldr x8,[x25, #0x3f8]
7101a3e6e0  ldr x9,[x8, #0x8]
7101a3e6e4  ldr w2,[x9, #0x8]
7101a3e6e8  add x8,x9,#0x28
7101a3e6ec  ldr w1,[x8]
7101a3e6f0  mov x0,x25
7101a3e6f4  bl 0x7101a48cd0
7101a3e6f8  ldrsw x8,[x25, #0x134]
7101a3e6fc  cmp w8,#0x13
7101a3e700  strb wzr,[x25, #0x41a]
7101a3e704  b.cs 0x7101a4027c
7101a3e708  add x8,x25,x8, LSL #0x2
7101a3e70c  mov w9,#0x4
7101a3e710  b 0x7101a3e7bc
7101a3e714  ldr x19,[x25, #0x3f0]
7101a3e718  str x19,[x25, #0x3f8]
7101a3e71c  cbz x19,0x7101a3e130
7101a3e720  ldr x19,[x19, #0x8]
7101a3e724  ldr x20,[x19, #0x20]
7101a3e728  strb wzr,[x19, #0x36]
7101a3e72c  ldr x0,[x20, #0x100]
7101a3e730  ldr x8,[x0]
7101a3e734  ldr x8,[x8, #0x60]
7101a3e738  mov w1,wzr
7101a3e73c  blr x8
7101a3e740  strb wzr,[x20, #0x162]
7101a3e744  ldrb w8,[x19, #0x35]
7101a3e748  cbz w8,0x7101a3e760
7101a3e74c  ldrb w8,[x19, #0x36]
7101a3e750  cbz w8,0x7101a3e760
7101a3e754  ldrb w8,[x19, #0x37]
7101a3e758  cmp w8,#0x0
7101a3e75c  cset w8,eq
7101a3e760  ldr x9,[x19, #0x20]
7101a3e764  ldr x10,[x9, #0x100]
7101a3e768  ldr x10,[x10, #0x38]
7101a3e76c  mov w20,#0x1
7101a3e770  cbz x10,0x7101a3e784
7101a3e774  ldrb w11,[x10, #0x58]
7101a3e778  and w11,w11,#0xfe
7101a3e77c  orr w11,w11,w8
7101a3e780  strb w11,[x10, #0x58]
7101a3e784  strb w8,[x9, #0x163]
7101a3e788  ldr x8,[x25, #0x3f8]
7101a3e78c  ldr x9,[x8, #0x8]
7101a3e790  ldr w2,[x9, #0x8]
7101a3e794  add x8,x9,#0x28
7101a3e798  ldr w1,[x8]
7101a3e79c  mov x0,x25
7101a3e7a0  bl 0x7101a48cd0
7101a3e7a4  ldrsw x8,[x25, #0x134]
7101a3e7a8  cmp w8,#0x13
7101a3e7ac  strb wzr,[x25, #0x41a]
7101a3e7b0  b.cs 0x7101a4027c
7101a3e7b4  add x8,x25,x8, LSL #0x2
7101a3e7b8  mov w9,#0xa
7101a3e7bc  str w9,[x8, #0xe8]
7101a3e7c0  add x24,x24,#0x3f8
7101a3e7c4  cmp x24,x26
7101a3e7c8  b.ne 0x7101a3e13c
7101a3e7cc  ldr x27,[x25, #0x250]
7101a3e7d0  ldr x28,[x25, #0x258]
7101a3e7d4  cmp x27,x28
7101a3e7d8  b.eq 0x7101a3edf0
7101a3e7dc  add x24,x25,#0x3f0
7101a3e7e0  b 0x7101a3e7ec
7101a3e7e4  mov w10,wzr
7101a3e7e8  b 0x7101a3e878
7101a3e7ec  ldr w8,[x25, #0x3e0]
7101a3e7f0  cmn w8,#0x1
7101a3e7f4  b.eq 0x7101a3eac8
7101a3e7f8  ldr w9,[x27, #0x10]
7101a3e7fc  cmp w9,#0x2
7101a3e800  b.ne 0x7101a3eadc
7101a3e804  ldr x9,[x25, #0x3f8]
7101a3e808  cbz x9,0x7101a3e828
7101a3e80c  ldr x10,[x9, #0x8]
7101a3e810  ldr x10,[x10, #0x10]
7101a3e814  ldr x10,[x10, #0x8]
7101a3e818  ldrb w11,[x10, #0x4aa]
7101a3e81c  cbz w11,0x7101a3eac8
7101a3e820  ldrb w10,[x10, #0x1ec]
7101a3e824  tbz w10,#0x1,0x7101a3eac8
7101a3e828  str w20,[x25, #0x268]
7101a3e82c  ldr w11,[x27, #0x10]
7101a3e830  cmp w11,#0x3
7101a3e834  csinc w10,wzr,w11,eq
7101a3e838  sub w12,w10,#0x2
7101a3e83c  cmp w12,#0x2
7101a3e840  b.cc 0x7101a3e864
7101a3e844  cbnz w10,0x7101a3e878
7101a3e848  ldr x12,[x25, #0x3e8]
7101a3e84c  cbz x12,0x7101a3e864
7101a3e850  ldr x12,[x12, #0x8]
7101a3e854  ldr w12,[x12, #0x28]
7101a3e858  ldr w13,[x25, #0x150]
7101a3e85c  cmp w12,w13
7101a3e860  b.eq 0x7101a3e7e4
7101a3e864  cmp w10,#0x3
7101a3e868  csinc w10,wzr,w10,eq
7101a3e86c  cmp w10,w11
7101a3e870  b.ne 0x7101a3e838
7101a3e874  mov w10,w11
7101a3e878  str w10,[x25, #0x3e4]
7101a3e87c  str w8,[x25, #0x3d0]
7101a3e880  cbz x9,0x7101a3e908
7101a3e884  ldr x19,[x9, #0x8]
7101a3e888  ldrb w8,[x19, #0x35]
7101a3e88c  strb w20,[x19, #0x36]
7101a3e890  cbz w8,0x7101a3e8a4
7101a3e894  ldrb w8,[x19, #0x37]
7101a3e898  cmp w8,#0x0
7101a3e89c  cset w26,eq
7101a3e8a0  b 0x7101a3e8a8
7101a3e8a4  mov w26,wzr
7101a3e8a8  ldr x20,[x19, #0x20]
7101a3e8ac  ldr x0,[x20, #0x100]
7101a3e8b0  ldr x8,[x0]
7101a3e8b4  ldr x8,[x8, #0x60]
7101a3e8b8  mov w1,w26
7101a3e8bc  blr x8
7101a3e8c0  strb w26,[x20, #0x162]
7101a3e8c4  ldrb w8,[x19, #0x35]
7101a3e8c8  cbz w8,0x7101a3e8e0
7101a3e8cc  ldrb w8,[x19, #0x36]
7101a3e8d0  cbz w8,0x7101a3e8e0
7101a3e8d4  ldrb w8,[x19, #0x37]
7101a3e8d8  cmp w8,#0x0
7101a3e8dc  cset w8,eq
7101a3e8e0  ldr x9,[x19, #0x20]
7101a3e8e4  ldr x10,[x9, #0x100]
7101a3e8e8  ldr x10,[x10, #0x38]
7101a3e8ec  cbz x10,0x7101a3e900
7101a3e8f0  ldrb w11,[x10, #0x58]
7101a3e8f4  and w11,w11,#0xfe
7101a3e8f8  orr w11,w11,w8
7101a3e8fc  strb w11,[x10, #0x58]
7101a3e900  strb w8,[x9, #0x163]
7101a3e904  stp xzr,xzr,[x24]
7101a3e908  ldr x21,[x25, #0x3b0]
7101a3e90c  ldr x22,[x25, #0x3b8]
7101a3e910  cmp x21,x22
7101a3e914  b.eq 0x7101a3e9a4
7101a3e918  ldr x8,[x21, #0x8]
7101a3e91c  ldr x8,[x8, #0xc8]
7101a3e920  ldr x20,[x8, #0x1b0]
7101a3e924  add x19,x8,#0x1b8
7101a3e928  b 0x7101a3e930
7101a3e92c  mov x20,x9
7101a3e930  cmp x20,x19
7101a3e934  b.eq 0x7101a3e998
7101a3e938  ldr x0,[x20, #0x28]
7101a3e93c  cbz x0,0x7101a3e950
7101a3e940  ldr x8,[x0]
7101a3e944  ldr x8,[x8, #0x2c0]
7101a3e948  orr w1,wzr,#0x6
7101a3e94c  blr x8
7101a3e950  ldr x8,[x20, #0x8]
7101a3e954  cbz x8,0x7101a3e968
7101a3e958  mov x20,x8
7101a3e95c  ldr x8,[x8]
7101a3e960  cbnz x8,0x7101a3e958
7101a3e964  b 0x7101a3e930
7101a3e968  mov x8,x20
7101a3e96c  ldr x9,[x8, #0x10]!
7101a3e970  ldr x10,[x9]
7101a3e974  cmp x10,x20
7101a3e978  b.eq 0x7101a3e92c
7101a3e97c  ldr x9,[x8]
7101a3e980  mov x8,x9
7101a3e984  ldr x20,[x8, #0x10]!
7101a3e988  ldr x10,[x20]
7101a3e98c  cmp x10,x9
7101a3e990  b.ne 0x7101a3e97c
7101a3e994  b 0x7101a3e930
7101a3e998  add x21,x21,#0x10
7101a3e99c  cmp x21,x22
7101a3e9a0  b.ne 0x7101a3e918
7101a3e9a4  ldr x8,[x25, #0x300]
7101a3e9a8  ldr x20,[x8, #0x1b0]
7101a3e9ac  add x19,x8,#0x1b8
7101a3e9b0  b 0x7101a3e9b8
7101a3e9b4  mov x20,x9
7101a3e9b8  cmp x20,x19
7101a3e9bc  b.eq 0x7101a3ea20
7101a3e9c0  ldr x0,[x20, #0x28]
7101a3e9c4  cbz x0,0x7101a3e9d8
7101a3e9c8  ldr x8,[x0]
7101a3e9cc  ldr x8,[x8, #0x2c0]
7101a3e9d0  orr w1,wzr,#0x6
7101a3e9d4  blr x8
7101a3e9d8  ldr x8,[x20, #0x8]
7101a3e9dc  cbz x8,0x7101a3e9f0
7101a3e9e0  mov x20,x8
7101a3e9e4  ldr x8,[x8]
7101a3e9e8  cbnz x8,0x7101a3e9e0
7101a3e9ec  b 0x7101a3e9b8
7101a3e9f0  mov x8,x20
7101a3e9f4  ldr x9,[x8, #0x10]!
7101a3e9f8  ldr x10,[x9]
7101a3e9fc  cmp x10,x20
7101a3ea00  b.eq 0x7101a3e9b4
7101a3ea04  ldr x9,[x8]
7101a3ea08  mov x8,x9
7101a3ea0c  ldr x20,[x8, #0x10]!
7101a3ea10  ldr x10,[x20]
7101a3ea14  cmp x10,x9
7101a3ea18  b.ne 0x7101a3ea04
7101a3ea1c  b 0x7101a3e9b8
7101a3ea20  ldr x8,[x25, #0x328]
7101a3ea24  ldr x20,[x8, #0x1b0]
7101a3ea28  add x19,x8,#0x1b8
7101a3ea2c  b 0x7101a3ea34
7101a3ea30  mov x20,x9
7101a3ea34  cmp x20,x19
7101a3ea38  b.eq 0x7101a3ea9c
7101a3ea3c  ldr x0,[x20, #0x28]
7101a3ea40  cbz x0,0x7101a3ea54
7101a3ea44  ldr x8,[x0]
7101a3ea48  ldr x8,[x8, #0x2c0]
7101a3ea4c  orr w1,wzr,#0x6
7101a3ea50  blr x8
7101a3ea54  ldr x8,[x20, #0x8]
7101a3ea58  cbz x8,0x7101a3ea6c
7101a3ea5c  mov x20,x8
7101a3ea60  ldr x8,[x8]
7101a3ea64  cbnz x8,0x7101a3ea5c
7101a3ea68  b 0x7101a3ea34
7101a3ea6c  mov x8,x20
7101a3ea70  ldr x9,[x8, #0x10]!
7101a3ea74  ldr x10,[x9]
7101a3ea78  cmp x10,x20
7101a3ea7c  b.eq 0x7101a3ea30
7101a3ea80  ldr x9,[x8]
7101a3ea84  mov x8,x9
7101a3ea88  ldr x20,[x8, #0x10]!
7101a3ea8c  ldr x10,[x20]
7101a3ea90  cmp x10,x9
7101a3ea94  b.ne 0x7101a3ea80
7101a3ea98  b 0x7101a3ea34
7101a3ea9c  ldr w1,[x25, #0x154]
7101a3eaa0  mov x0,x25
7101a3eaa4  mov w2,wzr
7101a3eaa8  bl 0x7101a48cd0
7101a3eaac  mov w20,#0x1
7101a3eab0  mov x0,x25
7101a3eab4  str w23,[x25, #0x3d8]
7101a3eab8  strb w20,[x25, #0x41a]
7101a3eabc  bl 0x7101a48570
7101a3eac0  str wzr,[x27, #0x3f0]
7101a3eac4  str w23,[x25, #0x3e0]
7101a3eac8  ldr w8,[x27, #0x10]
7101a3eacc  cmp w8,#0x2
7101a3ead0  b.ne 0x7101a3eadc
7101a3ead4  add x21,x27,#0x3f0
7101a3ead8  b 0x7101a3ed30
7101a3eadc  ldr w8,[x27, #0x3f0]
7101a3eae0  cmp w8,#0x1
7101a3eae4  b.lt 0x7101a3ede4
7101a3eae8  ldr x8,[x25, #0x3f8]
7101a3eaec  cbz x8,0x7101a3eb74
7101a3eaf0  ldr x19,[x8, #0x8]
7101a3eaf4  ldrb w8,[x19, #0x35]
7101a3eaf8  strb w20,[x19, #0x36]
7101a3eafc  cbz w8,0x7101a3eb10
7101a3eb00  ldrb w8,[x19, #0x37]
7101a3eb04  cmp w8,#0x0
7101a3eb08  cset w26,eq
7101a3eb0c  b 0x7101a3eb14
7101a3eb10  mov w26,wzr
7101a3eb14  ldr x20,[x19, #0x20]
7101a3eb18  ldr x0,[x20, #0x100]
7101a3eb1c  ldr x8,[x0]
7101a3eb20  ldr x8,[x8, #0x60]
7101a3eb24  mov w1,w26
7101a3eb28  blr x8
7101a3eb2c  strb w26,[x20, #0x162]
7101a3eb30  ldrb w8,[x19, #0x35]
7101a3eb34  cbz w8,0x7101a3eb4c
7101a3eb38  ldrb w8,[x19, #0x36]
7101a3eb3c  cbz w8,0x7101a3eb4c
7101a3eb40  ldrb w8,[x19, #0x37]
7101a3eb44  cmp w8,#0x0
7101a3eb48  cset w8,eq
7101a3eb4c  ldr x9,[x19, #0x20]
7101a3eb50  ldr x10,[x9, #0x100]
7101a3eb54  ldr x10,[x10, #0x38]
7101a3eb58  cbz x10,0x7101a3eb6c
7101a3eb5c  ldrb w11,[x10, #0x58]
7101a3eb60  and w11,w11,#0xfe
7101a3eb64  orr w11,w11,w8
7101a3eb68  strb w11,[x10, #0x58]
7101a3eb6c  strb w8,[x9, #0x163]
7101a3eb70  stp xzr,xzr,[x24]
7101a3eb74  ldr x21,[x25, #0x3b0]
7101a3eb78  ldr x22,[x25, #0x3b8]
7101a3eb7c  cmp x21,x22
7101a3eb80  b.eq 0x7101a3ec10
7101a3eb84  ldr x8,[x21, #0x8]
7101a3eb88  ldr x8,[x8, #0xc8]
7101a3eb8c  ldr x20,[x8, #0x1b0]
7101a3eb90  add x19,x8,#0x1b8
7101a3eb94  b 0x7101a3eb9c
7101a3eb98  mov x20,x9
7101a3eb9c  cmp x20,x19
7101a3eba0  b.eq 0x7101a3ec04
7101a3eba4  ldr x0,[x20, #0x28]
7101a3eba8  cbz x0,0x7101a3ebbc
7101a3ebac  ldr x8,[x0]
7101a3ebb0  ldr x8,[x8, #0x2c0]
7101a3ebb4  orr w1,wzr,#0x6
7101a3ebb8  blr x8
7101a3ebbc  ldr x8,[x20, #0x8]
7101a3ebc0  cbz x8,0x7101a3ebd4
7101a3ebc4  mov x20,x8
7101a3ebc8  ldr x8,[x8]
7101a3ebcc  cbnz x8,0x7101a3ebc4
7101a3ebd0  b 0x7101a3eb9c
7101a3ebd4  mov x8,x20
7101a3ebd8  ldr x9,[x8, #0x10]!
7101a3ebdc  ldr x10,[x9]
7101a3ebe0  cmp x10,x20
7101a3ebe4  b.eq 0x7101a3eb98
7101a3ebe8  ldr x9,[x8]
7101a3ebec  mov x8,x9
7101a3ebf0  ldr x20,[x8, #0x10]!
7101a3ebf4  ldr x10,[x20]
7101a3ebf8  cmp x10,x9
7101a3ebfc  b.ne 0x7101a3ebe8
7101a3ec00  b 0x7101a3eb9c
7101a3ec04  add x21,x21,#0x10
7101a3ec08  cmp x21,x22
7101a3ec0c  b.ne 0x7101a3eb84
7101a3ec10  ldr x8,[x25, #0x300]
7101a3ec14  ldr x20,[x8, #0x1b0]
7101a3ec18  add x19,x8,#0x1b8
7101a3ec1c  b 0x7101a3ec24
7101a3ec20  mov x20,x9
7101a3ec24  cmp x20,x19
7101a3ec28  b.eq 0x7101a3ec8c
7101a3ec2c  ldr x0,[x20, #0x28]
7101a3ec30  cbz x0,0x7101a3ec44
7101a3ec34  ldr x8,[x0]
7101a3ec38  ldr x8,[x8, #0x2c0]
7101a3ec3c  orr w1,wzr,#0x6
7101a3ec40  blr x8
7101a3ec44  ldr x8,[x20, #0x8]
7101a3ec48  cbz x8,0x7101a3ec5c
7101a3ec4c  mov x20,x8
7101a3ec50  ldr x8,[x8]
7101a3ec54  cbnz x8,0x7101a3ec4c
7101a3ec58  b 0x7101a3ec24
7101a3ec5c  mov x8,x20
7101a3ec60  ldr x9,[x8, #0x10]!
7101a3ec64  ldr x10,[x9]
7101a3ec68  cmp x10,x20
7101a3ec6c  b.eq 0x7101a3ec20
7101a3ec70  ldr x9,[x8]
7101a3ec74  mov x8,x9
7101a3ec78  ldr x20,[x8, #0x10]!
7101a3ec7c  ldr x10,[x20]
7101a3ec80  cmp x10,x9
7101a3ec84  b.ne 0x7101a3ec70
7101a3ec88  b 0x7101a3ec24
7101a3ec8c  ldr x8,[x25, #0x328]
7101a3ec90  ldr x20,[x8, #0x1b0]
7101a3ec94  add x21,x27,#0x3f0
7101a3ec98  add x19,x8,#0x1b8
7101a3ec9c  b 0x7101a3eca4
7101a3eca0  mov x20,x9
7101a3eca4  cmp x20,x19
7101a3eca8  b.eq 0x7101a3ed0c
7101a3ecac  ldr x0,[x20, #0x28]
7101a3ecb0  cbz x0,0x7101a3ecc4
7101a3ecb4  ldr x8,[x0]
7101a3ecb8  ldr x8,[x8, #0x2c0]
7101a3ecbc  orr w1,wzr,#0x6
7101a3ecc0  blr x8
7101a3ecc4  ldr x8,[x20, #0x8]
7101a3ecc8  cbz x8,0x7101a3ecdc
7101a3eccc  mov x20,x8
7101a3ecd0  ldr x8,[x8]
7101a3ecd4  cbnz x8,0x7101a3eccc
7101a3ecd8  b 0x7101a3eca4
7101a3ecdc  mov x8,x20
7101a3ece0  ldr x9,[x8, #0x10]!
7101a3ece4  ldr x10,[x9]
7101a3ece8  cmp x10,x20
7101a3ecec  b.eq 0x7101a3eca0
7101a3ecf0  ldr x9,[x8]
7101a3ecf4  mov x8,x9
7101a3ecf8  ldr x20,[x8, #0x10]!
7101a3ecfc  ldr x10,[x20]
7101a3ed00  cmp x10,x9
7101a3ed04  b.ne 0x7101a3ecf0
7101a3ed08  b 0x7101a3eca4
7101a3ed0c  ldr w1,[x25, #0x154]
7101a3ed10  mov x0,x25
7101a3ed14  mov w2,wzr
7101a3ed18  bl 0x7101a48cd0
7101a3ed1c  mov w20,#0x1
7101a3ed20  str w23,[x25, #0x3d8]
7101a3ed24  strb w20,[x25, #0x41a]
7101a3ed28  str wzr,[x21]
7101a3ed2c  str w23,[x25, #0x3e0]
7101a3ed30  ldr w8,[x21]
7101a3ed34  cmp w8,#0x1
7101a3ed38  b.lt 0x7101a3ede4
7101a3ed3c  adrp x8,0x710532f000
7101a3ed40  ldr x8,[x8, #0x7b0]
7101a3ed44  ldr x26,[x8, #0x8]
7101a3ed48  mov x0,x26
7101a3ed4c  bl 0x71039c1a40
7101a3ed50  mov w8,#0xa51
7101a3ed54  movk w8,#0x1, LSL #16
7101a3ed58  mov x0,x26
7101a3ed5c  ldrb w19,[x26, x8, LSL ]
7101a3ed60  bl 0x71039c1a50
7101a3ed64  adrp x8,0x71050a8000
7101a3ed68  ldr w8,[x8, #0x78]
7101a3ed6c  cmn w8,#0x1
7101a3ed70  b.ne 0x7101a3ede4
7101a3ed74  cbnz w19,0x7101a3ede4
7101a3ed78  adrp x8,0x7105324000
7101a3ed7c  ldrb w8,[x8, #0xae0]
7101a3ed80  cbz w8,0x7101a3ed98
7101a3ed84  ldr w8,[x21]
7101a3ed88  subs w8,w8,#0x1
7101a3ed8c  str w8,[x21]
7101a3ed90  b.le 0x7101a3edb4
7101a3ed94  b 0x7101a3ede4
7101a3ed98  ldrsw x8,[x25, #0x134]
7101a3ed9c  cmp w8,#0x13
7101a3eda0  b.cs 0x7101a4027c
7101a3eda4  add x8,x25,x8, LSL #0x2
7101a3eda8  mov w9,#0xb
7101a3edac  str w9,[x8, #0xe8]
7101a3edb0  str w23,[x21]
7101a3edb4  ldr w8,[x25, #0x150]
7101a3edb8  adrp x9,0x71050a8000
7101a3edbc  str w8,[x9, #0x78]
7101a3edc0  ldrsw x8,[x25, #0x134]
7101a3edc4  cmp w8,#0x13
7101a3edc8  b.cs 0x7101a4027c
7101a3edcc  add x8,x25,x8, LSL #0x2
7101a3edd0  mov w9,#0xb
7101a3edd4  str w9,[x8, #0xe8]
7101a3edd8  mov w8,#0x8
7101a3eddc  str wzr,[x21]
7101a3ede0  str w8,[x25, #0x268]
7101a3ede4  add x27,x27,#0x3f8
7101a3ede8  cmp x27,x28
7101a3edec  b.ne 0x7101a3e7ec
7101a3edf0  ldr w8,[x25, #0x268]
7101a3edf4  cbnz w8,0x7101a3ee0c
7101a3edf8  ldrb w8,[x25, #0x420]
7101a3edfc  cbz w8,0x7101a3ee0c
7101a3ee00  mov w8,#0xa
7101a3ee04  str w8,[x25, #0x268]
7101a3ee08  strb wzr,[x25, #0x420]
7101a3ee0c  mov x0,x25
7101a3ee10  bl 0x7101a484a0
7101a3ee14  ldr x9,[x25]
7101a3ee18  ldur x27,[x29, #-0x88]
7101a3ee1c  orr x28,xzr,#0x5555555555555555
7101a3ee20  ldr x19,[sp, #0x20]
7101a3ee24  movk x28,#0x555, LSL #48
7101a3ee28  cbz x9,0x7101a3ee50
7101a3ee2c  ldp x8,x11,[x25, #0x8]
7101a3ee30  and x10,x11,#0x1
7101a3ee34  orr x12,x10,x8
7101a3ee38  cbz x12,0x7101a3ee50
7101a3ee3c  add x0,x9,x11, ASR #0x1
7101a3ee40  cbz x10,0x7101a3ee4c
7101a3ee44  ldr x9,[x0]
7101a3ee48  ldr x8,[x9, x8, LSL #0x0]
7101a3ee4c  blr x8
7101a3ee50  ldr w8,[x25, #0x13c]
7101a3ee54  add w8,w8,#0x1
7101a3ee58  str w8,[x25, #0x13c]
7101a3ee5c  ldp x8,x9,[sp, #0x28]
7101a3ee60  add x9,x9,#0x10
7101a3ee64  cmp x9,x8
7101a3ee68  b.ne 0x7101a3d0b8
7101a3ee6c  ldr x0,[x27, #0x200]
7101a3ee70  bl 0x71032cf7e0
7101a3ee74  ldr x11,[x27, #0x200]
7101a3ee78  ldr q0,[x11, #0xb0]
7101a3ee7c  ldr w23,[x11, #0xbe0]
7101a3ee80  dup s1,v0.S[0x1]
7101a3ee84  fcmp s0,s1
7101a3ee88  fcsel s0,s1,s0,mi
7101a3ee8c  adrp x8,0x7104472000
7101a3ee90  cmp w23,#0x1
7101a3ee94  b.lt 0x7101a3eef8
7101a3ee98  ldr s1,[x8, #0x398]
7101a3ee9c  fmov s2,0x3f800000
7101a3eea0  mov x9,xzr
7101a3eea4  sub x10,x23,#0x1
7101a3eea8  mov w12,#0x100
7101a3eeac  cmp x9,#0xa
7101a3eeb0  b.cs 0x7101a4027c
7101a3eeb4  add x11,x11,x12
7101a3eeb8  ldrb w13,[x11, #0x1f]
7101a3eebc  ldr s4,[x11]
7101a3eec0  strb wzr,[x11, #0x1e]
7101a3eec4  cmp w13,#0x0
7101a3eec8  fcsel s3,s1,s2,eq
7101a3eecc  cmp x10,x9
7101a3eed0  str s3,[x11, #0x4]
7101a3eed4  fmul s3,s3,s4
7101a3eed8  str s3,[x11, #0xc]
7101a3eedc  b.eq 0x7101a3eef8
7101a3eee0  ldr x11,[x27, #0x200]
7101a3eee4  add x9,x9,#0x1
7101a3eee8  add x12,x12,#0x130
7101a3eeec  cmp x9,#0xa
7101a3eef0  b.cc 0x7101a3eeb4
7101a3eef4  b 0x7101a4027c
7101a3eef8  ldp x24,x25,[x27, #0x198]
7101a3eefc  cmp x24,x25
7101a3ef00  b.eq 0x7101a3f7b8
7101a3ef04  fmov s1,0x3f000000
7101a3ef08  ldr s9,[x8, #0x398]
7101a3ef0c  ldur x8,[x29, #-0x88]
7101a3ef10  add x8,x8,#0x1b0
7101a3ef14  fmul s3,s0,s1
7101a3ef18  fmul s0,s3,s9
7101a3ef1c  fmul s0,s0,s0
7101a3ef20  str x8,[sp, #0x50]
7101a3ef24  adrp x8,0x7104471000
7101a3ef28  adrp x9,0x7104472000
7101a3ef2c  ldr s10,[x8, #0xf68]
7101a3ef30  adrp x8,0x7104472000
7101a3ef34  ldr s11,[x9, #0x970]
7101a3ef38  ldr s13,[x8, #0xb54]
7101a3ef3c  mov w27,#0xffffffff
7101a3ef40  mov w28,#0x130
7101a3ef44  fadd s12,s0,s0
7101a3ef48  fmov s8,0x3f800000
7101a3ef4c  sxtw x26,w23
7101a3ef50  b 0x7101a3f46c
7101a3ef54  ldr x0,[x27, #0x148]
7101a3ef58  bl 0x710337b690
7101a3ef5c  ldr x8,[x27, #0x148]
7101a3ef60  ldp x20,x26,[x8, #0x68]
7101a3ef64  cmp x20,x26
7101a3ef68  b.eq 0x7101a3f2fc
7101a3ef6c  add x8,x27,#0x1b0
7101a3ef70  fmov s8,0x3f800000
7101a3ef74  str x8,[sp, #0x50]
7101a3ef78  add x8,sp,#0xd0
7101a3ef7c  add x27,x8,#0x30
7101a3ef80  mov x28,#-0x1
7101a3ef84  mov w23,#0x488
7101a3ef88  mov w21,#0x48c
7101a3ef8c  mov w22,#0x2
7101a3ef90  b 0x7101a3f040
7101a3ef94  ldr w8,[x25, #0x138]
7101a3ef98  cmp w8,#0xb
7101a3ef9c  b.ne 0x7101a3efe4
7101a3efa0  ldr x0,[x25, #0x3a8]
7101a3efa4  bl 0x71019e69d0
7101a3efa8  ldr x0,[x25, #0x3a8]
7101a3efac  bl 0x71019e66d0
7101a3efb0  mov x0,x25
7101a3efb4  bl 0x7101a48570
7101a3efb8  mov w8,#0xffffffff
7101a3efbc  adrp x9,0x71050a8000
7101a3efc0  str w8,[x25, #0x3e0]
7101a3efc4  str w8,[x9, #0x78]
7101a3efc8  ldrsw x8,[x25, #0x134]
7101a3efcc  cmp w8,#0x13
7101a3efd0  b.cs 0x7101a4027c
7101a3efd4  add x8,x25,x8, LSL #0x2
7101a3efd8  orr w9,wzr,#0x3
7101a3efdc  str w9,[x8, #0xe8]
7101a3efe0  ldr x25,[x19]
7101a3efe4  mov x0,x25
7101a3efe8  bl 0x7101a4d950
7101a3efec  ldr x8,[x19]
7101a3eff0  ldr w1,[x8, #0x150]
7101a3eff4  ldur x0,[x29, #-0x88]
7101a3eff8  mov w2,w24
7101a3effc  bl 0x7101a402b0
7101a3f000  ldr x8,[x19]
7101a3f004  ldrsw x25,[x8, #0x150]
7101a3f008  cmn w25,#0x1
7101a3f00c  b.eq 0x7101a3f038
7101a3f010  cmp w25,#0x8
7101a3f014  b.cs 0x7101a4027c
7101a3f018  adrp x8,0x710593b000
7101a3f01c  ldr x8,[x8, #0x990]
7101a3f020  ldr x8,[x8, #0x8]
7101a3f024  str w24,[x8, x25, LSL #0x2]
7101a3f028  mov w8,#0x1
7101a3f02c  cmn w24,#0x1
7101a3f030  b.ne 0x7101a3f0d8
7101a3f034  b 0x7101a3f174
7101a3f038  mov w8,#0x1
7101a3f03c  b 0x7101a3f0cc
7101a3f040  ldur x9,[x29, #-0x88]
7101a3f044  ldp x8,x9,[x9, #0x198]
7101a3f048  ldr w24,[x20]
7101a3f04c  cmp x8,x9
7101a3f050  b.eq 0x7101a3f0c8
7101a3f054  ldr x10,[x8, #0x8]
7101a3f058  ldrb w11,[x10, #0x34]
7101a3f05c  cbnz w11,0x7101a3f0bc
7101a3f060  ldr x11,[x10, #0x10]
7101a3f064  ldr x11,[x11, #0x8]
7101a3f068  ldr w12,[x11, #0x484]
7101a3f06c  cbnz w12,0x7101a3f0bc
7101a3f070  ldr w11,[x11, #0x488]
7101a3f074  cmn w11,#0x1
7101a3f078  b.ne 0x7101a3f0bc
7101a3f07c  ldur x12,[x29, #-0x88]
7101a3f080  ldp x11,x12,[x12, #0x1b0]
7101a3f084  ldrsw x10,[x10, #0x28]
7101a3f088  sub x12,x12,x11
7101a3f08c  asr x12,x12,#0x4
7101a3f090  cmp x12,x10
7101a3f094  b.ls 0x7101a40280
7101a3f098  add x19,x11,x10, LSL #0x4
7101a3f09c  ldr x25,[x19, #0x8]!
7101a3f0a0  ldr x10,[x25, #0x3e8]
7101a3f0a4  cbz x10,0x7101a3ef94
7101a3f0a8  ldr x10,[x10, #0x8]
7101a3f0ac  ldr w10,[x10, #0x28]
7101a3f0b0  ldr w11,[x25, #0x150]
7101a3f0b4  cmp w10,w11
7101a3f0b8  b.ne 0x7101a3ef94
7101a3f0bc  add x8,x8,#0x10
7101a3f0c0  cmp x9,x8
7101a3f0c4  b.ne 0x7101a3f054
7101a3f0c8  mov w8,wzr
7101a3f0cc  mov x25,x28
7101a3f0d0  cmn w24,#0x1
7101a3f0d4  b.eq 0x7101a3f174
7101a3f0d8  cmp w24,#0xa
7101a3f0dc  b.cs 0x7101a4027c
7101a3f0e0  ldur x10,[x29, #-0x88]
7101a3f0e4  ldr x10,[x10, #0x148]
7101a3f0e8  cmp w8,#0x0
7101a3f0ec  mov w11,wzr
7101a3f0f0  sxtw x9,w24
7101a3f0f4  csel w12,w22,wzr,ne
7101a3f0f8  str w12,[x10, x9, LSL #0x2]
7101a3f0fc  cbz w8,0x7101a3f164
7101a3f100  cmp w24,#0x9
7101a3f104  b.hi 0x7101a3f134
7101a3f108  adrp x11,0x7105339000
7101a3f10c  ldr x11,[x11, #0x8b0]
7101a3f110  ldrb w12,[x11, #0x8]
7101a3f114  adrp x11,0x7105339000
7101a3f118  add x11,x11,#0x830
7101a3f11c  cbz w12,0x7101a3f13c
7101a3f120  adrp x11,0x7105339000
7101a3f124  add x11,x11,#0x860
7101a3f128  ldr x11,[x11, x9, LSL #0x3]
7101a3f12c  cbnz x11,0x7101a3f13c
7101a3f130  b 0x7101a3f164
7101a3f134  adrp x11,0x7105339000
7101a3f138  add x11,x11,#0x830
7101a3f13c  ldr x11,[x11, #0x10]
7101a3f140  ldr w11,[x11, #0x9c]
7101a3f144  sub w11,w11,#0x1
7101a3f148  cmp w11,#0x6
7101a3f14c  b.hi 0x7101a3f160
7101a3f150  adrp x12,0x7104753000
7101a3f154  add x12,x12,#0xde0
7101a3f158  ldr w11,[x12, w11, SXTW #0x2]
7101a3f15c  b 0x7101a3f164
7101a3f160  mov w11,wzr
7101a3f164  add x12,x10,x9, LSL #0x2
7101a3f168  add x9,x10,x9
7101a3f16c  str w11,[x12, #0x28]
7101a3f170  strb w8,[x9, #0x50]
7101a3f174  cbz w8,0x7101a3f2dc
7101a3f178  adrp x8,0x710532f000
7101a3f17c  ldr x8,[x8, #0x8d0]
7101a3f180  ldr x0,[x8, #0x8]
7101a3f184  ldrb w8,[x0, #0x191]
7101a3f188  cbnz w8,0x7101a3f208
7101a3f18c  mov x1,#0xfd32
7101a3f190  movk x1,#0xcb49, LSL #16
7101a3f194  mov w2,#0x4
7101a3f198  movk x1,#0x1a, LSL #32
7101a3f19c  bl 0x7103313f20
7101a3f1a0  tbz w0,#0x0,0x7101a3f208
7101a3f1a4  mov x1,#0xfd32
7101a3f1a8  movk x1,#0xcb49, LSL #16
7101a3f1ac  add x0,sp,#0xd0
7101a3f1b0  movk x1,#0x1a, LSL #32
7101a3f1b4  bl 0x71024076d0
7101a3f1b8  ldr x8,[sp, #0xe0]
7101a3f1bc  adrp x9,0x7104f73000
7101a3f1c0  add x9,x9,#0xd50
7101a3f1c4  str x9,[sp, #0xd8]
7101a3f1c8  cbz x8,0x7101a3f23c
7101a3f1cc  adrp x9,0x7106dd5000
7101a3f1d0  ldrb w9,[x9, #0x3a8]
7101a3f1d4  cmp w9,#0x1
7101a3f1d8  b.ne 0x7101a3f23c
7101a3f1dc  adrp x10,0x7106dd5000
7101a3f1e0  ldr w9,[sp, #0xe8]
7101a3f1e4  ldr w10,[x10, #0x3ac]
7101a3f1e8  cmp w9,w10
7101a3f1ec  b.ne 0x7101a3f23c
7101a3f1f0  ldr wzr,[x8, #0x38]!
7101a3f1f4  ldaxr w9,[x8]
7101a3f1f8  sub w9,w9,#0x1
7101a3f1fc  stlxr w10,w9,[x8]
7101a3f200  cbnz w10,0x7101a3f1f4
7101a3f204  b 0x7101a3f23c
7101a3f208  mov w8,#0x6500
7101a3f20c  movk w8,#0x87, LSL #16
7101a3f210  stp wzr,w8,[sp, #0xe8]
7101a3f214  adrp x8,0x7104f73000
7101a3f218  add x8,x8,#0xd30
7101a3f21c  strb wzr,[sp, #0xf0]
7101a3f220  stp x8,xzr,[sp, #0xd8]
7101a3f224  adrp x8,0x7104f73000
7101a3f228  add x8,x8,#0xd50
7101a3f22c  str wzr,[sp, #0xd0]
7101a3f230  str x28,[sp, #0xf8]
7101a3f234  stp xzr,xzr,[x27]
7101a3f238  str x8,[sp, #0xd8]
7101a3f23c  ldur x10,[x29, #-0x88]
7101a3f240  str xzr,[sp, #0xe0]
7101a3f244  strb wzr,[sp, #0xf0]
7101a3f248  ldp x8,x9,[x10, #0x1b0]
7101a3f24c  sub x9,x9,x8
7101a3f250  asr x9,x9,#0x4
7101a3f254  cmp x9,x25
7101a3f258  b.ls 0x7101a40280
7101a3f25c  add x8,x8,x25, LSL #0x4
7101a3f260  ldr x8,[x8, #0x8]
7101a3f264  ldrsw x8,[x8, #0x150]
7101a3f268  ldp x9,x10,[x10, #0x198]
7101a3f26c  sub x10,x10,x9
7101a3f270  asr x10,x10,#0x4
7101a3f274  cmp x10,x8
7101a3f278  b.ls 0x7101a4026c
7101a3f27c  add x8,x9,x8, LSL #0x4
7101a3f280  ldr x8,[x8, #0x8]
7101a3f284  ldr x8,[x8, #0x10]
7101a3f288  ldr x8,[x8, #0x8]
7101a3f28c  ldr w9,[x8, #0x484]
7101a3f290  cmp w9,#0x2
7101a3f294  csel x9,x21,x23,eq
7101a3f298  ldr w1,[x8, x9, LSL #0x0]
7101a3f29c  cmn w1,#0x1
7101a3f2a0  b.eq 0x7101a3f2dc
7101a3f2a4  adrp x8,0x71052c5000
7101a3f2a8  ldr x8,[x8, #0x120]
7101a3f2ac  ldr x0,[x8, #0x8]
7101a3f2b0  mov v0.16B,v8.16B
7101a3f2b4  mov v1.16B,v8.16B
7101a3f2b8  mov x2,#0x38f0
7101a3f2bc  movk x2,#0x966c, LSL #16
7101a3f2c0  mov w4,#0x1
7101a3f2c4  movk x2,#0x19, LSL #32
7101a3f2c8  mov w3,wzr
7101a3f2cc  mov w5,wzr
7101a3f2d0  mov w6,wzr
7101a3f2d4  mov w7,wzr
7101a3f2d8  bl 0x710175dfc0
7101a3f2dc  add x20,x20,#0x4
7101a3f2e0  cmp x20,x26
7101a3f2e4  b.ne 0x7101a3f040
7101a3f2e8  ldur x27,[x29, #-0x88]
7101a3f2ec  ldr x8,[x27, #0x148]
7101a3f2f0  orr x28,xzr,#0x5555555555555555
7101a3f2f4  mov w23,#0xffffffff
7101a3f2f8  movk x28,#0x555, LSL #48
7101a3f2fc  ldp x19,x20,[x8, #0x80]
7101a3f300  cmp x19,x20
7101a3f304  b.eq 0x7101a3f31c
7101a3f308  ldr w1,[x19], #0x4
7101a3f30c  mov x0,x27
7101a3f310  bl 0x7101a38fd0
7101a3f314  cmp x20,x19
7101a3f318  b.ne 0x7101a3f308
7101a3f31c  ldp x8,x9,[x27, #0x198]
7101a3f320  cmp x8,x9
7101a3f324  b.eq 0x7101a3d070
7101a3f328  ldr x10,[x8, #0x8]
7101a3f32c  ldr x10,[x10, #0x10]
7101a3f330  ldr x11,[x10, #0x8]
7101a3f334  ldr w10,[x11, #0x48c]
7101a3f338  ldr w11,[x11, #0x498]
7101a3f33c  cmn w10,#0x1
7101a3f340  ccmp w11,#0x0,#0x0,ne
7101a3f344  b.eq 0x7101a3f358
7101a3f348  add x8,x8,#0x10
7101a3f34c  cmp x9,x8
7101a3f350  b.ne 0x7101a3f328
7101a3f354  b 0x7101a3d070
7101a3f358  str w10,[x27, #0x138]
7101a3f35c  b 0x7101a3d070
7101a3f360  mov w8,#0x6500
7101a3f364  movk w8,#0x87, LSL #16
7101a3f368  stp wzr,w8,[sp, #0xe8]
7101a3f36c  adrp x8,0x7104f73000
7101a3f370  add x8,x8,#0xd30
7101a3f374  strb wzr,[sp, #0xf0]
7101a3f378  stp x8,xzr,[sp, #0xd8]
7101a3f37c  mov x8,#-0x1
7101a3f380  str wzr,[sp, #0xd0]
7101a3f384  str xzr,[sp, #0x108]
7101a3f388  stp x8,xzr,[sp, #0xf8]
7101a3f38c  str wzr,[x27, #0x2c8]
7101a3f390  ldr x8,[x27, #0x2d8]
7101a3f394  cbz x8,0x7101a3f3d0
7101a3f398  adrp x9,0x7106dd5000
7101a3f39c  ldrb w9,[x9, #0x3a8]
7101a3f3a0  cmp w9,#0x1
7101a3f3a4  b.ne 0x7101a3f3d0
7101a3f3a8  adrp x10,0x7106dd5000
7101a3f3ac  ldr w9,[x27, #0x2e0]
7101a3f3b0  ldr w10,[x10, #0x3ac]
7101a3f3b4  cmp w9,w10
7101a3f3b8  b.ne 0x7101a3f3d0
7101a3f3bc  ldr wzr,[x8, #0x38]!
7101a3f3c0  ldaxr w9,[x8]
7101a3f3c4  sub w9,w9,#0x1
7101a3f3c8  stlxr w10,w9,[x8]
7101a3f3cc  cbnz w10,0x7101a3f3c0
7101a3f3d0  str xzr,[x27, #0x2d8]
7101a3f3d4  add x10,x27,#0x2e8
7101a3f3d8  strb wzr,[x10]
7101a3f3dc  ldp x9,x10,[sp, #0xf8]
7101a3f3e0  ldr x8,[sp, #0xe0]
7101a3f3e4  ldr x11,[sp, #0x108]
7101a3f3e8  str x9,[x22]
7101a3f3ec  adrp x9,0x7104f73000
7101a3f3f0  add x9,x9,#0xd50
7101a3f3f4  stp x10,x11,[x22, #0x8]
7101a3f3f8  str x9,[sp, #0xd8]
7101a3f3fc  cbz x8,0x7101a3f438
7101a3f400  adrp x9,0x7106dd5000
7101a3f404  ldrb w9,[x9, #0x3a8]
7101a3f408  cmp w9,#0x1
7101a3f40c  b.ne 0x7101a3f438
7101a3f410  adrp x10,0x7106dd5000
7101a3f414  ldr w9,[sp, #0xe8]
7101a3f418  ldr w10,[x10, #0x3ac]
7101a3f41c  cmp w9,w10
7101a3f420  b.ne 0x7101a3f438
7101a3f424  ldr wzr,[x8, #0x38]!
7101a3f428  ldaxr w9,[x8]
7101a3f42c  sub w9,w9,#0x1
7101a3f430  stlxr w10,w9,[x8]
7101a3f434  cbnz w10,0x7101a3f428
7101a3f438  str xzr,[sp, #0xe0]
7101a3f43c  b 0x7101a3cde4
7101a3f440  ldp x9,x10,[sp, #0xf8]
7101a3f444  ldr x11,[sp, #0x108]
7101a3f448  str x9,[x22]
7101a3f44c  adrp x9,0x7104f73000
7101a3f450  add x9,x9,#0xd50
7101a3f454  stp x10,x11,[x22, #0x8]
7101a3f458  str x9,[sp, #0xd8]
7101a3f45c  b 0x7101a3f400
7101a3f460  ldr x23,[sp, #0x38]
7101a3f464  mov w20,w22
7101a3f468  b 0x7101a3f734
7101a3f46c  ldr x8,[x24, #0x8]
7101a3f470  ldr w20,[x8, #0x30]
7101a3f474  cmn w20,#0x1
7101a3f478  b.eq 0x7101a3f504
7101a3f47c  cmp w20,#0xa
7101a3f480  b.cs 0x7101a4027c
7101a3f484  ldur x10,[x29, #-0x88]
7101a3f488  ldr x10,[x10, #0x200]
7101a3f48c  sxtw x9,w20
7101a3f490  madd x9,x9,x28,x10
7101a3f494  ldrb w9,[x9, #0x124]
7101a3f498  cbz w9,0x7101a3f790
7101a3f49c  ldr x19,[x8, #0x20]
7101a3f4a0  add x8,sp,#0xd0
7101a3f4a4  add x0,x19,#0x108
7101a3f4a8  adrp x1,0x71043ff000
7101a3f4ac  add x1,x1,#0xac3
7101a3f4b0  bl 0x71037780e0
7101a3f4b4  add x22,x19,#0x128
7101a3f4b8  add x8,sp,#0xd0
7101a3f4bc  cmp x22,x8
7101a3f4c0  b.eq 0x7101a3f4dc
7101a3f4c4  ldr x8,[sp, #0xd8]
7101a3f4c8  str xzr,[sp, #0xd8]
7101a3f4cc  ldr x0,[x19, #0x130]
7101a3f4d0  str x8,[x19, #0x130]
7101a3f4d4  cbz x0,0x7101a3f4dc
7101a3f4d8  bl 0x710392eb40
7101a3f4dc  ldr x0,[sp, #0xd8]
7101a3f4e0  adrp x8,0x710523d000
7101a3f4e4  add x8,x8,#0x9e8
7101a3f4e8  stp x8,xzr,[sp, #0xd0]
7101a3f4ec  cbz x0,0x7101a3f4f4
7101a3f4f0  bl 0x710392eb40
7101a3f4f4  mov v0.16B,v8.16B
7101a3f4f8  mov x0,x22
7101a3f4fc  bl 0x710377aee0
7101a3f500  b 0x7101a3f790
7101a3f504  ldur x10,[x29, #-0x88]
7101a3f508  ldp x9,x10,[x10, #0x1b0]
7101a3f50c  ldrsw x19,[x8, #0x28]
7101a3f510  sub x10,x10,x9
7101a3f514  asr x10,x10,#0x4
7101a3f518  cmp x10,x19
7101a3f51c  b.ls 0x7101a40280
7101a3f520  ldr x0,[x8, #0x20]
7101a3f524  add x9,x9,x19, LSL #0x4
7101a3f528  ldr x9,[x9, #0x8]
7101a3f52c  ldr s1,[x0, #0x14c]
7101a3f530  ldr s0,[x0, #0x148]
7101a3f534  ldr w9,[x9, #0x3cc]
7101a3f538  fsub s2,s1,s0
7101a3f53c  cmn w9,#0x1
7101a3f540  csel w21,wzr,w9,eq
7101a3f544  fcmp s2,s10
7101a3f548  b.le 0x7101a3f558
7101a3f54c  fcmp s2,s11
7101a3f550  mov w20,w27
7101a3f554  b.mi 0x7101a3f790
7101a3f558  ldr s2,[x0, #0x154]
7101a3f55c  ldr s3,[x0, #0x150]
7101a3f560  fsub s4,s2,s3
7101a3f564  fcmp s4,s10
7101a3f568  b.le 0x7101a3f578
7101a3f56c  fcmp s4,s11
7101a3f570  mov w20,w27
7101a3f574  b.mi 0x7101a3f790
7101a3f578  ldr x8,[x0, #0x100]
7101a3f57c  ldr q4,[x8, #0x60]
7101a3f580  fcmp s1,s4
7101a3f584  dup s1,v4.S[0x1]
7101a3f588  fccmp s0,s4,#0x2,ge
7101a3f58c  fccmp s2,s1,#0x8,ls
7101a3f590  fccmp s3,s1,#0x2,ge
7101a3f594  mov w20,w27
7101a3f598  b.hi 0x7101a3f790
7101a3f59c  ldrb w8,[x0, #0x162]
7101a3f5a0  cbz w8,0x7101a3f78c
7101a3f5a4  ldrb w8,[x0, #0x163]
7101a3f5a8  cbz w8,0x7101a3f78c
7101a3f5ac  str q4,[sp, #0x40]
7101a3f5b0  bl 0x71032d2ff0
7101a3f5b4  cmp w23,#0x1
7101a3f5b8  stp s0,s1,[sp, #0xd0]
7101a3f5bc  stp s2,s3,[sp, #0xd8]
7101a3f5c0  b.lt 0x7101a3f78c
7101a3f5c4  add w8,w19,w19, LSL #0x2
7101a3f5c8  mov v14.16B,v12.16B
7101a3f5cc  str x23,[sp, #0x38]
7101a3f5d0  mov x22,xzr
7101a3f5d4  mov w23,#0x11f
7101a3f5d8  mov w20,w27
7101a3f5dc  add w21,w8,w21
7101a3f5e0  mov w19,w27
7101a3f5e4  cmp x22,#0xa
7101a3f5e8  b.cs 0x7101a4027c
7101a3f5ec  ldur x8,[x29, #-0x88]
7101a3f5f0  ldr x0,[x8, #0x200]
7101a3f5f4  ldrb w8,[x0, x23, LSL ]
7101a3f5f8  cbnz w8,0x7101a3f6f4
7101a3f5fc  and x8,x22,#0xffffffff
7101a3f600  mov w9,#0xcccd
7101a3f604  movk w9,#0xcccc, LSL #16
7101a3f608  mul x8,x8,x9
7101a3f60c  ldr x9,[x24, #0x8]
7101a3f610  ldr w9,[x9, #0x28]
7101a3f614  add x10,x0,x23
7101a3f618  ldurb w11,[x10, #-0x2]
7101a3f61c  lsr x8,x8,#0x22
7101a3f620  cmp w9,w8
7101a3f624  ccmp w11,#0x0,#0x4,ne
7101a3f628  b.ne 0x7101a3f6f4
7101a3f62c  ldurb w11,[x10, #-0x7]
7101a3f630  cbz w11,0x7101a3f6f4
7101a3f634  ldurb w11,[x10, #-0x6]
7101a3f638  cbz w11,0x7101a3f6f4
7101a3f63c  ldurb w11,[x10, #-0x4]
7101a3f640  cbz w11,0x7101a3f6f4
7101a3f644  ldurb w11,[x10, #-0x3]
7101a3f648  cbz w11,0x7101a3f6f4
7101a3f64c  ldur q0,[x10, #-0x3f]
7101a3f650  ldur q1,[x10, #-0x2f]
7101a3f654  fcmeq v0.4S,v0.4S,v1.4S
7101a3f658  ext v1.16B,v0.16B,v0.16B,0x8
7101a3f65c  and v0.8B,v0.8B,v1.8B
7101a3f660  mov w11,v0.S[0x1]
7101a3f664  fmov w12,s0
7101a3f668  tst w12,w11
7101a3f66c  b.eq 0x7101a3f6f4
7101a3f670  ldur x10,[x10, #-0xf7]
7101a3f674  ldr x10,[x10, #0x18]
7101a3f678  ldr x10,[x10]
7101a3f67c  cbz x10,0x7101a3f698
7101a3f680  movi v0.2D,#0x0
7101a3f684  add x11,x10,#0x30
7101a3f688  add x10,x10,#0x34
7101a3f68c  ld1 {v0.S}[0],[x11]
7101a3f690  ld1 {v0.S}[1],[x10]
7101a3f694  b 0x7101a3f6a4
7101a3f698  adrp x10,0x71052a8000
7101a3f69c  ldr x10,[x10, #0xa80]
7101a3f6a0  ldr q0,[x10]
7101a3f6a4  ldr q1,[sp, #0x40]
7101a3f6a8  fsub v0.4S,v0.4S,v1.4S
7101a3f6ac  fmul v0.4S,v0.4S,v0.4S
7101a3f6b0  faddp v0.2S,v0.2S,v0.2S
7101a3f6b4  fcmp s0,s12
7101a3f6b8  b.pl 0x7101a3f6d4
7101a3f6bc  cmp w9,w8
7101a3f6c0  b.eq 0x7101a3f460
7101a3f6c4  fcmp s0,s14
7101a3f6c8  b.pl 0x7101a3f6f4
7101a3f6cc  mov w20,w22
7101a3f6d0  b 0x7101a3f6f8
7101a3f6d4  add x2,sp,#0xd0
7101a3f6d8  mov w1,w22
7101a3f6dc  bl 0x71032d12e0
7101a3f6e0  cmp w19,w21
7101a3f6e4  cset w8,eq
7101a3f6e8  orn w8,w8,w0
7101a3f6ec  tst w8,#0x1
7101a3f6f0  csel w19,w19,w22,ne
7101a3f6f4  mov v0.16B,v14.16B
7101a3f6f8  mov v14.16B,v0.16B
7101a3f6fc  add x22,x22,#0x1
7101a3f700  add x23,x23,#0x130
7101a3f704  cmp x22,x26
7101a3f708  b.lt 0x7101a3f5e4
7101a3f70c  cmn w20,#0x1
7101a3f710  b.ne 0x7101a3f720
7101a3f714  cmn w19,#0x1
7101a3f718  mov w20,w19
7101a3f71c  b.eq 0x7101a3f788
7101a3f720  ldr x23,[sp, #0x38]
7101a3f724  cmp w20,#0x9
7101a3f728  b.hi 0x7101a4027c
7101a3f72c  ldur x8,[x29, #-0x88]
7101a3f730  ldr x0,[x8, #0x200]
7101a3f734  smaddl x8,w20,w28,x0
7101a3f738  ldrb w8,[x8, #0x11f]
7101a3f73c  cbnz w8,0x7101a3f790
7101a3f740  sxtw x8,w20
7101a3f744  madd x9,x8,x28,x0
7101a3f748  mov w10,#0x1
7101a3f74c  strb w10,[x9, #0x11e]
7101a3f750  ldr w9,[x9, #0x10]
7101a3f754  cmp w9,#0x1
7101a3f758  b.ne 0x7101a3f76c
7101a3f75c  madd x9,x8,x28,x0
7101a3f760  ldrb w9,[x9, #0x126]
7101a3f764  mov v0.16B,v13.16B
7101a3f768  cbnz w9,0x7101a3f770
7101a3f76c  mov v0.16B,v9.16B
7101a3f770  madd x8,x8,x28,x0
7101a3f774  ldr s1,[x8, #0x100]
7101a3f778  str s0,[x8, #0x104]
7101a3f77c  fmul s0,s0,s1
7101a3f780  str s0,[x8, #0x10c]
7101a3f784  b 0x7101a3f790
7101a3f788  ldr x23,[sp, #0x38]
7101a3f78c  mov w20,w27
7101a3f790  ldr x8,[x24, #0x8]
7101a3f794  ldr x8,[x8, #0x20]
7101a3f798  cmn w20,#0x1
7101a3f79c  cset w9,ne
7101a3f7a0  strb w9,[x8, #0x166]
7101a3f7a4  ldr x8,[x24, #0x8]
7101a3f7a8  add x24,x24,#0x10
7101a3f7ac  cmp x24,x25
7101a3f7b0  str w20,[x8, #0x2c]
7101a3f7b4  b.ne 0x7101a3f46c
7101a3f7b8  ldur x19,[x29, #-0x88]
7101a3f7bc  mov x0,x19
7101a3f7c0  bl 0x7101a35230
7101a3f7c4  ldr x9,[x19]
7101a3f7c8  cbz x9,0x7101a3f7f0
7101a3f7cc  ldp x8,x11,[x19, #0x8]
7101a3f7d0  and x10,x11,#0x1
7101a3f7d4  orr x12,x10,x8
7101a3f7d8  cbz x12,0x7101a3f7f0
7101a3f7dc  add x0,x9,x11, ASR #0x1
7101a3f7e0  cbz x10,0x7101a3f7ec
7101a3f7e4  ldr x9,[x0]
7101a3f7e8  ldr x8,[x9, x8, LSL #0x0]
7101a3f7ec  blr x8
7101a3f7f0  ldr w8,[x19, #0x10c]
7101a3f7f4  add w8,w8,#0x1
7101a3f7f8  str w8,[x19, #0x10c]
7101a3f7fc  ldr w8,[x19, #0x108]
7101a3f800  cmp w8,#0x7
7101a3f804  b.ne 0x7101a3fcd4
7101a3f808  ldur x8,[x29, #-0x88]
7101a3f80c  ldp x20,x26,[x8, #0x198]
7101a3f810  cmp x20,x26
7101a3f814  b.eq 0x7101a3fcd4
7101a3f818  ldur x8,[x29, #-0x88]
7101a3f81c  mov x19,#0xbf7f
7101a3f820  movk x19,#0xefdf, LSL #16
7101a3f824  movk x19,#0xfbf7, LSL #32
7101a3f828  movk x19,#0x7efd, LSL #48
7101a3f82c  add x27,x8,#0x1f8
7101a3f830  add x9,x8,#0x1b0
7101a3f834  orr w22,wzr,#0x3f8
7101a3f838  mov w28,#0x130
7101a3f83c  str x9,[sp, #0x50]
7101a3f840  b 0x7101a3f884
7101a3f844  madd x8,x21,x28,x9
7101a3f848  ldur x9,[x29, #-0x88]
7101a3f84c  add x8,x8,#0x123
7101a3f850  strh wzr,[x8]
7101a3f854  ldr x8,[x20, #0x8]
7101a3f858  ldr x8,[x8, #0x20]
7101a3f85c  ldr x8,[x8, #0x100]
7101a3f860  ldr q0,[x8, #0x60]
7101a3f864  ldr x0,[x9, #0x200]
7101a3f868  mov w1,w24
7101a3f86c  bl 0x71032d0eb0
7101a3f870  mov x19,#0xbf7f
7101a3f874  movk x19,#0xefdf, LSL #16
7101a3f878  movk x19,#0xfbf7, LSL #32
7101a3f87c  movk x19,#0x7efd, LSL #48
7101a3f880  b 0x7101a3fcc8
7101a3f884  ldur x11,[x29, #-0x88]
7101a3f888  ldr x9,[x20, #0x8]
7101a3f88c  ldrsw x8,[x9, #0x28]
7101a3f890  ldp x10,x11,[x11, #0x1b0]
7101a3f894  sub x11,x11,x10
7101a3f898  asr x11,x11,#0x4
7101a3f89c  cmp x11,x8
7101a3f8a0  b.ls 0x7101a40280
7101a3f8a4  add x21,x10,x8, LSL #0x4
7101a3f8a8  mov x24,x21
7101a3f8ac  ldr x8,[x24, #0x8]!
7101a3f8b0  ldr w10,[x8, #0x26c]
7101a3f8b4  cbz w10,0x7101a3fcc8
7101a3f8b8  ldr x10,[x9, #0x10]
7101a3f8bc  ldr x10,[x10, #0x8]
7101a3f8c0  ldrb w12,[x9, #0x36]
7101a3f8c4  ldr w11,[x10, #0x484]
7101a3f8c8  cbz w12,0x7101a3f970
7101a3f8cc  cbnz w11,0x7101a3f8dc
7101a3f8d0  ldr w11,[x10, #0x488]
7101a3f8d4  cmn w11,#0x1
7101a3f8d8  b.eq 0x7101a3f974
7101a3f8dc  ldr w25,[x8, #0x3dc]
7101a3f8e0  cmn w25,#0x1
7101a3f8e4  b.eq 0x7101a3f9d8
7101a3f8e8  ldr w9,[x8, #0x3cc]
7101a3f8ec  cmp w25,w9
7101a3f8f0  b.eq 0x7101a3fcc8
7101a3f8f4  ldr x10,[x8, #0x258]
7101a3f8f8  ldr x9,[x8, #0x250]
7101a3f8fc  sub x10,x10,x9
7101a3f900  asr x10,x10,#0x3
7101a3f904  mul x10,x10,x19
7101a3f908  sxtw x23,w25
7101a3f90c  cmp x10,x23
7101a3f910  b.ls 0x7101a4029c
7101a3f914  madd x9,x23,x22,x9
7101a3f918  ldr w9,[x9, #0x10]
7101a3f91c  cmp w9,#0x3
7101a3f920  b.ne 0x7101a3faa8
7101a3f924  ldur x19,[x29, #-0x88]
7101a3f928  mov x0,x19
7101a3f92c  mov x1,x21
7101a3f930  mov w2,w25
7101a3f934  mov x3,x20
7101a3f938  mov w4,wzr
7101a3f93c  bl 0x7101a386c0
7101a3f940  mov x0,x19
7101a3f944  mov x1,x21
7101a3f948  mov w2,w25
7101a3f94c  bl 0x7101a35900
7101a3f950  ldr x8,[x24]
7101a3f954  ldr w1,[x8, #0x150]
7101a3f958  mov x0,x19
7101a3f95c  mov x19,#0xbf7f
7101a3f960  movk x19,#0xefdf, LSL #16
7101a3f964  movk x19,#0xfbf7, LSL #32
7101a3f968  movk x19,#0x7efd, LSL #48
7101a3f96c  b 0x7101a3fab0
7101a3f970  cbnz w11,0x7101a3fcc8
7101a3f974  ldr w9,[x10, #0x488]
7101a3f978  cmn w9,#0x1
7101a3f97c  b.ne 0x7101a3fcc8
7101a3f980  ldrsw x21,[x8, #0x3dc]
7101a3f984  cmn w21,#0x1
7101a3f988  b.eq 0x7101a3fcc8
7101a3f98c  ldr w9,[x8, #0x3cc]
7101a3f990  cmp w21,w9
7101a3f994  b.eq 0x7101a3fcc8
7101a3f998  ldr w1,[x8, #0x150]
7101a3f99c  ldur x0,[x29, #-0x88]
7101a3f9a0  mov w2,w21
7101a3f9a4  bl 0x7101a385b0
7101a3f9a8  ldr x8,[x24]
7101a3f9ac  ldr x10,[x8, #0x258]
7101a3f9b0  ldr x9,[x8, #0x250]
7101a3f9b4  sub x10,x10,x9
7101a3f9b8  asr x10,x10,#0x3
7101a3f9bc  mul x10,x10,x19
7101a3f9c0  cmp x10,x21
7101a3f9c4  b.ls 0x7101a4029c
7101a3f9c8  madd x8,x21,x22,x9
7101a3f9cc  mov w9,#0x1
7101a3f9d0  str w9,[x8, #0x3e8]
7101a3f9d4  b 0x7101a3fcc8
7101a3f9d8  ldr x8,[x9, #0x20]
7101a3f9dc  ldr x8,[x8, #0x130]
7101a3f9e0  ldr x0,[x8, #0x8]
7101a3f9e4  cbz x0,0x7101a3f9fc
7101a3f9e8  ldr x8,[x0]
7101a3f9ec  ldr x8,[x8, #0x138]
7101a3f9f0  blr x8
7101a3f9f4  tbz w0,#0x0,0x7101a3fcc8
7101a3f9f8  ldr x9,[x20, #0x8]
7101a3f9fc  ldr w8,[x9, #0x30]
7101a3fa00  cmn w8,#0x1
7101a3fa04  b.ne 0x7101a3fcc8
7101a3fa08  ldur x8,[x29, #-0x88]
7101a3fa0c  ldrsw x9,[x8, #0x13c]
7101a3fa10  cmp w9,#0x1
7101a3fa14  b.lt 0x7101a3fcc8
7101a3fa18  ldr x8,[x24]
7101a3fa1c  ldr x10,[x8, #0x258]
7101a3fa20  ldr x13,[x8, #0x250]
7101a3fa24  sub x10,x10,x13
7101a3fa28  asr x10,x10,#0x3
7101a3fa2c  mul x10,x10,x19
7101a3fa30  mov x12,xzr
7101a3fa34  mov w11,wzr
7101a3fa38  add x0,x8,#0x250
7101a3fa3c  mov x14,x13
7101a3fa40  cmp x10,x12
7101a3fa44  b.ls 0x7101a40298
7101a3fa48  ldr w15,[x14, #0x10]
7101a3fa4c  cmp w15,#0x2
7101a3fa50  b.ne 0x7101a3fa64
7101a3fa54  ldrb w15,[x14, #0x3f5]
7101a3fa58  cmp w15,#0x0
7101a3fa5c  cset w15,eq
7101a3fa60  orr w11,w11,w15
7101a3fa64  add x12,x12,#0x1
7101a3fa68  add x14,x14,#0x3f8
7101a3fa6c  cmp x12,x9
7101a3fa70  b.lt 0x7101a3fa40
7101a3fa74  tbnz w11,#0x0,0x7101a3fcc8
7101a3fa78  mov x25,xzr
7101a3fa7c  add x11,x13,#0x3e8
7101a3fa80  cmp x10,x25
7101a3fa84  b.ls 0x7101a40298
7101a3fa88  ldr w12,[x11]
7101a3fa8c  cmp w12,#0x1
7101a3fa90  b.eq 0x7101a3f8e8
7101a3fa94  add x25,x25,#0x1
7101a3fa98  add x11,x11,#0x3f8
7101a3fa9c  cmp x25,x9
7101a3faa0  b.lt 0x7101a3fa80
7101a3faa4  b 0x7101a3fcc8
7101a3faa8  ldr w1,[x8, #0x150]
7101a3faac  ldur x0,[x29, #-0x88]
7101a3fab0  mov w2,w25
7101a3fab4  bl 0x7101a385b0
7101a3fab8  ldr x8,[x24]
7101a3fabc  ldr x10,[x8, #0x258]
7101a3fac0  ldr x9,[x8, #0x250]
7101a3fac4  sub x10,x10,x9
7101a3fac8  asr x10,x10,#0x3
7101a3facc  mul x10,x10,x19
7101a3fad0  cmp x10,x23
7101a3fad4  orr w11,wzr,#0x3f8
7101a3fad8  b.ls 0x7101a4029c
7101a3fadc  madd x8,x23,x11,x9
7101a3fae0  mov w9,#0x1
7101a3fae4  str w9,[x8, #0x3e8]
7101a3fae8  ldr x8,[x24]
7101a3faec  ldr x10,[x8, #0x258]
7101a3faf0  ldr x9,[x8, #0x250]
7101a3faf4  sub x10,x10,x9
7101a3faf8  asr x10,x10,#0x3
7101a3fafc  mul x10,x10,x19
7101a3fb00  cmp x10,x23
7101a3fb04  b.ls 0x7101a4029c
7101a3fb08  madd x8,x23,x11,x9
7101a3fb0c  strb wzr,[x8, #0x3f5]
7101a3fb10  ldr x8,[x24]
7101a3fb14  ldr w8,[x8, #0x150]
7101a3fb18  ldr x9,[x20, #0x8]
7101a3fb1c  ldr x9,[x9, #0x20]
7101a3fb20  add w8,w8,w8, LSL #0x2
7101a3fb24  add w8,w8,w25
7101a3fb28  cmn w8,#0x1
7101a3fb2c  cset w10,ne
7101a3fb30  strb w10,[x9, #0x167]
7101a3fb34  ldr x9,[x20, #0x8]
7101a3fb38  str w8,[x9, #0x30]
7101a3fb3c  ldr x9,[x24]
7101a3fb40  ldr x10,[x9, #0x258]
7101a3fb44  ldr x8,[x9, #0x250]
7101a3fb48  sub x10,x10,x8
7101a3fb4c  asr x10,x10,#0x3
7101a3fb50  mul x10,x10,x19
7101a3fb54  cmp x10,x23
7101a3fb58  b.ls 0x7101a402a4
7101a3fb5c  ldr w2,[x9, #0x150]
7101a3fb60  add w9,w2,w2, LSL #0x2
7101a3fb64  madd x8,x23,x11,x8
7101a3fb68  ldr w3,[x8, #0x10]
7101a3fb6c  add w5,w25,#0x1
7101a3fb70  mov x0,x27
7101a3fb74  add w24,w9,w25
7101a3fb78  ldr x9,[x20, #0x8]
7101a3fb7c  mov w1,w24
7101a3fb80  ldr w19,[x9, #0x28]
7101a3fb84  mov w4,#0xffffffff
7101a3fb88  orr w22,wzr,#0x3f8
7101a3fb8c  bl 0x71032d0830
7101a3fb90  cmp w24,#0xa
7101a3fb94  b.cs 0x7101a4027c
7101a3fb98  add w8,w19,w19, LSL #0x2
7101a3fb9c  ldur x19,[x29, #-0x88]
7101a3fba0  add w25,w8,w25
7101a3fba4  ldr x8,[x19, #0x200]
7101a3fba8  ldr x9,[x20, #0x8]
7101a3fbac  add x9,x9,#0x18
7101a3fbb0  mov w2,#0x1
7101a3fbb4  mov x0,x27
7101a3fbb8  mov w1,w24
7101a3fbbc  sxtw x21,w24
7101a3fbc0  smaddl x8,w24,w28,x8
7101a3fbc4  mov w3,wzr
7101a3fbc8  str x9,[x8, #0x110]
7101a3fbcc  bl 0x71032d0c60
7101a3fbd0  ldr x0,[x19, #0x200]
7101a3fbd4  mov w1,w24
7101a3fbd8  mov w2,w25
7101a3fbdc  bl 0x71032d0e00
7101a3fbe0  ldr x8,[x20, #0x8]
7101a3fbe4  ldr x8,[x8, #0x20]
7101a3fbe8  ldr x8,[x8, #0x100]
7101a3fbec  ldr x9,[x19, #0x200]
7101a3fbf0  ldr s1,[x9, #0xbf0]
7101a3fbf4  ldr q0,[x8, #0x60]
7101a3fbf8  fcmp s1,s0
7101a3fbfc  b.lt 0x7101a3fc28
7101a3fc00  ldr s1,[x9, #0xbec]
7101a3fc04  fcmp s1,s0
7101a3fc08  b.hi 0x7101a3fc28
7101a3fc0c  dup s0,v0.S[0x1]
7101a3fc10  ldr s1,[x9, #0xbf8]
7101a3fc14  fcmp s1,s0
7101a3fc18  b.lt 0x7101a3fc28
7101a3fc1c  ldr s1,[x9, #0xbf4]
7101a3fc20  fcmp s1,s0
7101a3fc24  b.ls 0x7101a3f844
7101a3fc28  madd x9,x21,x28,x9
7101a3fc2c  ldr x9,[x9, #0x28]
7101a3fc30  ldr x9,[x9, #0x18]
7101a3fc34  ldr x9,[x9]
7101a3fc38  cbz x9,0x7101a3fc58
7101a3fc3c  movi v4.2D,#0x0
7101a3fc40  mov v0.16B,v4.16B
7101a3fc44  add x10,x9,#0x30
7101a3fc48  add x9,x9,#0x34
7101a3fc4c  ld1 {v0.S}[0],[x10]
7101a3fc50  ld1 {v0.S}[1],[x9]
7101a3fc54  b 0x7101a3fc68
7101a3fc58  adrp x9,0x71052a8000
7101a3fc5c  ldr x9,[x9, #0xa80]
7101a3fc60  ldr q0,[x9]
7101a3fc64  movi v4.2D,#0x0
7101a3fc68  ldp s1,s2,[x8, #0x90]
7101a3fc6c  fcmp s0,s1
7101a3fc70  fcsel s1,s1,s0,mi
7101a3fc74  fcmp s2,s1
7101a3fc78  fcsel s1,s2,s1,mi
7101a3fc7c  dup s0,v0.S[0x1]
7101a3fc80  mov x19,#0xbf7f
7101a3fc84  movk x19,#0xefdf, LSL #16
7101a3fc88  ldp s2,s3,[x8, #0x98]
7101a3fc8c  fcmp s0,s2
7101a3fc90  fcsel s0,s2,s0,mi
7101a3fc94  mov v2.16B,v4.16B
7101a3fc98  mov v2.S[0x0],v1.S[0x0]
7101a3fc9c  fcmp s3,s0
7101a3fca0  fcsel s0,s3,s0,mi
7101a3fca4  mov v2.S[0x1],v0.S[0x0]
7101a3fca8  str q2,[x8, #0x70]
7101a3fcac  ldur x8,[x29, #-0x88]
7101a3fcb0  ldr x8,[x8, #0x200]
7101a3fcb4  madd x8,x21,x28,x8
7101a3fcb8  add x8,x8,#0x123
7101a3fcbc  movk x19,#0xfbf7, LSL #32
7101a3fcc0  movk x19,#0x7efd, LSL #48
7101a3fcc4  strh wzr,[x8]
7101a3fcc8  add x20,x20,#0x10
7101a3fccc  cmp x20,x26
7101a3fcd0  b.ne 0x7101a3f884
7101a3fcd4  ldur x23,[x29, #-0x88]
7101a3fcd8  add x20,x23,#0x278
7101a3fcdc  mov x0,x20
7101a3fce0  bl 0x7103764cd0
7101a3fce4  ldrb w8,[x23, #0x2c1]
7101a3fce8  cbz w8,0x7101a3fe98
7101a3fcec  ldr x11,[x23, #0x260]
7101a3fcf0  ldr x8,[x23, #0x268]
7101a3fcf4  cmp x11,x8
7101a3fcf8  b.eq 0x7101a3fe98
7101a3fcfc  mov x10,x11
7101a3fd00  ldr w22,[x10], #0x4
7101a3fd04  cmp x10,x8
7101a3fd08  b.eq 0x7101a3fd40
7101a3fd0c  sub x9,x8,#0x8
7101a3fd10  sub x12,x9,x11
7101a3fd14  tbnz w12,#0x2,0x7101a3fd50
7101a3fd18  ldr w13,[x11, #0x4]
7101a3fd1c  cmp w13,w22
7101a3fd20  mov x9,x11
7101a3fd24  b.eq 0x7101a3fd30
7101a3fd28  mov x9,x10
7101a3fd2c  str w13,[x11]
7101a3fd30  add x10,x11,#0x8
7101a3fd34  cmp x12,#0x4
7101a3fd38  b.cs 0x7101a3fd5c
7101a3fd3c  b 0x7101a3fd88
7101a3fd40  mov x9,x11
7101a3fd44  cmp x9,x8
7101a3fd48  b.ne 0x7101a3fd98
7101a3fd4c  b 0x7101a3fdc4
7101a3fd50  mov x9,x11
7101a3fd54  cmp x12,#0x4
7101a3fd58  b.cc 0x7101a3fd88
7101a3fd5c  ldr w11,[x10]
7101a3fd60  cmp w11,w22
7101a3fd64  b.eq 0x7101a3fd6c
7101a3fd68  str w11,[x9], #0x4
7101a3fd6c  ldr w11,[x10, #0x4]
7101a3fd70  cmp w11,w22
7101a3fd74  b.eq 0x7101a3fd7c
7101a3fd78  str w11,[x9], #0x4
7101a3fd7c  add x10,x10,#0x8
7101a3fd80  cmp x10,x8
7101a3fd84  b.ne 0x7101a3fd5c
7101a3fd88  ldr x8,[x23, #0x268]
7101a3fd8c  ldr x11,[x23, #0x260]
7101a3fd90  cmp x9,x8
7101a3fd94  b.eq 0x7101a3fdc4
7101a3fd98  sub x10,x9,x11
7101a3fd9c  sub x9,x8,x9
7101a3fda0  add x21,x11,x10
7101a3fda4  add x1,x21,x9
7101a3fda8  subs x2,x8,x1
7101a3fdac  asr x19,x2,#0x2
7101a3fdb0  b.eq 0x7101a3fdbc
7101a3fdb4  mov x0,x21
7101a3fdb8  bl 0x71039c00a0
7101a3fdbc  add x8,x21,x19, LSL #0x2
7101a3fdc0  str x8,[x23, #0x268]
7101a3fdc4  cmp w22,#0x2
7101a3fdc8  b.ne 0x7101a3fe98
7101a3fdcc  mov x0,x20
7101a3fdd0  bl 0x7103765160
7101a3fdd4  adrp x8,0x710532f000
7101a3fdd8  ldr x8,[x8, #0x8d0]
7101a3fddc  ldr x0,[x8, #0x8]
7101a3fde0  ldrb w8,[x0, #0x191]
7101a3fde4  cbnz w8,0x7101a3fe64
7101a3fde8  mov x20,#0x7024
7101a3fdec  movk x20,#0xab44, LSL #16
7101a3fdf0  movk x20,#0xe, LSL #32
7101a3fdf4  mov w2,#0x4
7101a3fdf8  mov x1,x20
7101a3fdfc  bl 0x7103313f20
7101a3fe00  tbz w0,#0x0,0x7101a3fe64
7101a3fe04  add x0,sp,#0xd0
7101a3fe08  mov x1,x20
7101a3fe0c  bl 0x71024076d0
7101a3fe10  ldr x8,[sp, #0xe0]
7101a3fe14  adrp x9,0x7104f73000
7101a3fe18  add x9,x9,#0xd50
7101a3fe1c  str x9,[sp, #0xd8]
7101a3fe20  cbz x8,0x7101a3fe90
7101a3fe24  adrp x8,0x7106dd5000
7101a3fe28  ldrb w8,[x8, #0x3a8]
7101a3fe2c  cmp w8,#0x1
7101a3fe30  b.ne 0x7101a3fe90
7101a3fe34  adrp x9,0x7106dd5000
7101a3fe38  ldr w8,[sp, #0xe8]
7101a3fe3c  ldr w9,[x9, #0x3ac]
7101a3fe40  cmp w8,w9
7101a3fe44  b.ne 0x7101a3fe90
7101a3fe48  ldr x8,[sp, #0xe0]
7101a3fe4c  ldr wzr,[x8, #0x38]!
7101a3fe50  ldaxr w9,[x8]
7101a3fe54  sub w9,w9,#0x1
7101a3fe58  stlxr w10,w9,[x8]
7101a3fe5c  cbnz w10,0x7101a3fe50
7101a3fe60  b 0x7101a3fe90
7101a3fe64  mov w8,#0x6500
7101a3fe68  movk w8,#0x87, LSL #16
7101a3fe6c  stp wzr,w8,[sp, #0xe8]
7101a3fe70  mov x8,#-0x1
7101a3fe74  stp x8,xzr,[sp, #0xf8]
7101a3fe78  adrp x8,0x7104f73000
7101a3fe7c  add x8,x8,#0xd50
7101a3fe80  strb wzr,[sp, #0xf0]
7101a3fe84  str wzr,[sp, #0xd0]
7101a3fe88  str xzr,[sp, #0x108]
7101a3fe8c  stp x8,xzr,[sp, #0xd8]
7101a3fe90  str xzr,[sp, #0xe0]
7101a3fe94  strb wzr,[sp, #0xf0]
7101a3fe98  ldp x19,x20,[x23, #0x198]
7101a3fe9c  cmp x19,x20
7101a3fea0  b.eq 0x7101a3febc
7101a3fea4  ldr x8,[x19, #0x8]
7101a3fea8  ldr x0,[x8, #0x20]
7101a3feac  bl 0x71032d2ba0
7101a3feb0  add x19,x19,#0x10
7101a3feb4  cmp x20,x19
7101a3feb8  b.ne 0x7101a3fea4
7101a3febc  ldr w8,[x23, #0x108]
7101a3fec0  and w8,w8,#0xfffffffe
7101a3fec4  cmp w8,#0x6
7101a3fec8  b.ne 0x7101a40204
7101a3fecc  ldp x8,x9,[x23, #0x198]
7101a3fed0  cmp x8,x9
7101a3fed4  b.eq 0x7101a3ff38
7101a3fed8  sub x9,x9,#0x10
7101a3fedc  sub x9,x9,x8
7101a3fee0  lsr x10,x9,#0x4
7101a3fee4  add w9,w10,#0x1
7101a3fee8  and x9,x9,#0x1
7101a3feec  cbz x10,0x7101a3ff40
7101a3fef0  sub x11,x9,#0x1
7101a3fef4  sub x10,x11,x10
7101a3fef8  mov w21,#0x1
7101a3fefc  ldr x11,[x8, #0x8]
7101a3ff00  ldr x12,[x8, #0x18]
7101a3ff04  add x8,x8,#0x20
7101a3ff08  ldrb w11,[x11, #0x36]
7101a3ff0c  ldrb w12,[x12, #0x36]
7101a3ff10  cmp w11,#0x0
7101a3ff14  cset w11,ne
7101a3ff18  cmp w12,#0x0
7101a3ff1c  and w11,w21,w11
7101a3ff20  cset w12,ne
7101a3ff24  adds x10,x10,#0x2
7101a3ff28  and w21,w11,w12
7101a3ff2c  b.ne 0x7101a3fefc
7101a3ff30  cbnz x9,0x7101a3ff48
7101a3ff34  b 0x7101a3ff5c
7101a3ff38  mov w21,#0x1
7101a3ff3c  b 0x7101a3ff5c
7101a3ff40  mov w21,#0x1
7101a3ff44  cbz x9,0x7101a3ff5c
7101a3ff48  ldr x8,[x8, #0x8]
7101a3ff4c  ldrb w8,[x8, #0x36]
7101a3ff50  cmp w8,#0x0
7101a3ff54  cset w8,ne
7101a3ff58  and w21,w21,w8
7101a3ff5c  ldp x8,x9,[x23, #0x1b0]
7101a3ff60  cmp x8,x9
7101a3ff64  b.eq 0x7101a40038
7101a3ff68  mov x10,#0xbf7f
7101a3ff6c  movk x10,#0xefdf, LSL #16
7101a3ff70  movk x10,#0xfbf7, LSL #32
7101a3ff74  movk x10,#0x7efd, LSL #48
7101a3ff78  b 0x7101a40008
7101a3ff7c  ldr x11,[x13, #0x3e8]
7101a3ff80  cbz x11,0x7101a3ff90
7101a3ff84  ldr x11,[x11, #0x8]
7101a3ff88  ldrb w11,[x11, #0x36]
7101a3ff8c  cbz w11,0x7101a40028
7101a3ff90  ldrb w11,[x13, #0x41a]
7101a3ff94  cbz w11,0x7101a40028
7101a3ff98  ldr w11,[x13, #0x3c8]
7101a3ff9c  cmp w11,#0x1
7101a3ffa0  b.lt 0x7101a40000
7101a3ffa4  add x0,x13,#0x250
7101a3ffa8  ldr x14,[x13, #0x258]
7101a3ffac  ldr x13,[x13, #0x250]
7101a3ffb0  sub x14,x14,x13
7101a3ffb4  asr x14,x14,#0x3
7101a3ffb8  mul x14,x14,x10
7101a3ffbc  mov x12,xzr
7101a3ffc0  cmp x14,x12
7101a3ffc4  b.ls 0x7101a40298
7101a3ffc8  ldr w15,[x13, #0x10]
7101a3ffcc  cmp w15,#0x3
7101a3ffd0  b.eq 0x7101a40024
7101a3ffd4  ldrb w16,[x13, #0x3f5]
7101a3ffd8  cbz w16,0x7101a40024
7101a3ffdc  cmp w15,#0x2
7101a3ffe0  b.ne 0x7101a3fff0
7101a3ffe4  ldr w15,[x13, #0x1b8]
7101a3ffe8  cmn w15,#0x1
7101a3ffec  b.eq 0x7101a40024
7101a3fff0  add x12,x12,#0x1
7101a3fff4  add x13,x13,#0x3f8
7101a3fff8  cmp w11,w12
7101a3fffc  b.gt 0x7101a3ffc0
7101a40000  mov w11,#0x1
7101a40004  b 0x7101a40028
7101a40008  ldr x13,[x8, #0x8]
7101a4000c  ldrb w11,[x13, #0x419]
7101a40010  cmp w11,#0x0
7101a40014  ldr w11,[x13, #0x26c]
7101a40018  ccmp w11,#0x0,#0x0,ne
7101a4001c  ccmp w11,#0x1,#0x0,ne
7101a40020  b.eq 0x7101a3ff7c
7101a40024  mov w11,wzr
7101a40028  add x8,x8,#0x10
7101a4002c  and w21,w21,w11
7101a40030  cmp x8,x9
7101a40034  b.ne 0x7101a40008
7101a40038  ldrb w9,[x23, #0x31c]
7101a4003c  and w8,w21,#0x1
7101a40040  cmp w9,w8
7101a40044  b.eq 0x7101a40204
7101a40048  ldr x9,[x23, #0x228]
7101a4004c  strb w8,[x23, #0x31c]
7101a40050  ldr x10,[x9, #0x1b8]
7101a40054  cbz x10,0x7101a400c8
7101a40058  add x11,x9,#0x1b8
7101a4005c  mov x9,x11
7101a40060  ldr w12,[x10, #0x20]
7101a40064  cmp w12,#0x2
7101a40068  cset w12,lt
7101a4006c  csel x9,x9,x10,lt
7101a40070  ldr x10,[x10, w12, UXTW #0x3]
7101a40074  cbnz x10,0x7101a40060
7101a40078  cmp x9,x11
7101a4007c  b.eq 0x7101a400c8
7101a40080  ldr w10,[x9, #0x20]
7101a40084  cmp w10,#0x2
7101a40088  b.gt 0x7101a400c8
7101a4008c  ldr x20,[x9, #0x28]
7101a40090  cbz x20,0x7101a400c8
7101a40094  ldr x8,[x20]
7101a40098  ldr x8,[x8, #0x1f8]
7101a4009c  and w1,w21,#0x1
7101a400a0  mov x0,x20
7101a400a4  blr x8
7101a400a8  ldr x9,[x20]
7101a400ac  ldr x9,[x9, #0x388]
7101a400b0  mvn w8,w21
7101a400b4  and w1,w8,#0x1
7101a400b8  mov x0,x20
7101a400bc  mov w2,wzr
7101a400c0  blr x9
7101a400c4  ldrb w8,[x23, #0x31c]
7101a400c8  add x0,x23,#0x218
7101a400cc  cbz w8,0x7101a401d4
7101a400d0  fmov s0,wzr
7101a400d4  bl 0x710377b010
7101a400d8  fmov s8,0x3f800000
7101a400dc  mov v0.16B,v8.16B
7101a400e0  add x0,x23,#0x208
7101a400e4  bl 0x710377aee0
7101a400e8  ldr x0,[x23, #0x200]
7101a400ec  bl 0x71032d0460
7101a400f0  ldr x8,[x23, #0x150]
7101a400f4  ldr x8,[x8]
7101a400f8  ldr x0,[x8, #0x10]
7101a400fc  mov v0.16B,v8.16B
7101a40100  adrp x1,0x71043ef000
7101a40104  add x1,x1,#0x55
7101a40108  bl 0x7103778300
7101a4010c  adrp x8,0x710532f000
7101a40110  ldr x8,[x8, #0x8d0]
7101a40114  ldr x0,[x8, #0x8]
7101a40118  ldrb w8,[x0, #0x191]
7101a4011c  cbnz w8,0x7101a4019c
7101a40120  mov x20,#0x53af
7101a40124  movk x20,#0x9c5a, LSL #16
7101a40128  movk x20,#0xd, LSL #32
7101a4012c  mov w2,#0x4
7101a40130  mov x1,x20
7101a40134  bl 0x7103313f20
7101a40138  tbz w0,#0x0,0x7101a4019c
7101a4013c  add x0,sp,#0xd0
7101a40140  mov x1,x20
7101a40144  bl 0x71024076d0
7101a40148  ldr x8,[sp, #0xe0]
7101a4014c  adrp x9,0x7104f73000
7101a40150  add x9,x9,#0xd50
7101a40154  str x9,[sp, #0xd8]
7101a40158  cbz x8,0x7101a401c8
7101a4015c  adrp x8,0x7106dd5000
7101a40160  ldrb w8,[x8, #0x3a8]
7101a40164  cmp w8,#0x1
7101a40168  b.ne 0x7101a401c8
7101a4016c  adrp x9,0x7106dd5000
7101a40170  ldr w8,[sp, #0xe8]
7101a40174  ldr w9,[x9, #0x3ac]
7101a40178  cmp w8,w9
7101a4017c  b.ne 0x7101a401c8
7101a40180  ldr x8,[sp, #0xe0]
7101a40184  ldr wzr,[x8, #0x38]!
7101a40188  ldaxr w9,[x8]
7101a4018c  sub w9,w9,#0x1
7101a40190  stlxr w10,w9,[x8]
7101a40194  cbnz w10,0x7101a40188
7101a40198  b 0x7101a401c8
7101a4019c  mov w8,#0x6500
7101a401a0  movk w8,#0x87, LSL #16
7101a401a4  stp wzr,w8,[sp, #0xe8]
7101a401a8  mov x8,#-0x1
7101a401ac  stp x8,xzr,[sp, #0xf8]
7101a401b0  adrp x8,0x7104f73000
7101a401b4  add x8,x8,#0xd50
7101a401b8  strb wzr,[sp, #0xf0]
7101a401bc  str wzr,[sp, #0xd0]
7101a401c0  str xzr,[sp, #0x108]
7101a401c4  stp x8,xzr,[sp, #0xd8]
7101a401c8  str xzr,[sp, #0xe0]
7101a401cc  strb wzr,[sp, #0xf0]
7101a401d0  b 0x7101a40204
7101a401d4  fmov s8,0x3f800000
7101a401d8  mov v0.16B,v8.16B
7101a401dc  bl 0x710377aee0
7101a401e0  ldr x0,[x23, #0x200]
7101a401e4  bl 0x71032d0240
7101a401e8  ldr x8,[x23, #0x150]
7101a401ec  ldr x8,[x8]
7101a401f0  ldr x0,[x8, #0x10]
7101a401f4  mov v0.16B,v8.16B
7101a401f8  adrp x1,0x71042d4000
7101a401fc  add x1,x1,#0xaad
7101a40200  bl 0x7103778300
7101a40204  ldr x0,[x23, #0x1f0]
7101a40208  bl 0x71019f1410
7101a4020c  ldp d9,d8,[sp, #0x150]
7101a40210  ldr d14,[sp, #0x120]
7101a40214  ldp d11,d10,[sp, #0x140]
7101a40218  ldp d13,d12,[sp, #0x130]
7101a4021c  ldp x29,x30,[sp, #0x1b0]
7101a40220  ldp x20,x19,[sp, #0x1a0]
7101a40224  ldp x22,x21,[sp, #0x190]
7101a40228  ldp x24,x23,[sp, #0x180]
7101a4022c  ldp x26,x25,[sp, #0x170]
7101a40230  ldp x28,x27,[sp, #0x160]
7101a40234  add sp,sp,#0x1c0
7101a40238  ret
7101a4023c  str w9,[x27, #0x2e0]
7101a40240  add x9,x27,#0x2d8
7101a40244  add x10,x27,#0x2e8
7101a40248  str x8,[x9]
7101a4024c  add x8,x8,#0x38
7101a40250  ldaxr w9,[x8]
7101a40254  add w9,w9,#0x1
7101a40258  stlxr w11,w9,[x8]
7101a4025c  cbnz w11,0x7101a40250
7101a40260  b 0x7101a3f3d8
7101a40264  add x0,sp,#0xd0
7101a40268  bl 0x71039c1330
7101a4026c  ldr x0,[sp, #0x8]
7101a40270  bl 0x71039c1330
7101a40274  add x0,sp,#0xd0
7101a40278  bl 0x71039c0c00
7101a4027c  bl 0x71039c2650
7101a40280  ldr x0,[sp, #0x50]
7101a40284  bl 0x71039c1330
7101a40288  ldr x0,[sp, #0x40]
7101a4028c  bl 0x71039c1330
7101a40290  mov x0,x19
7101a40294  bl 0x71039c1330
7101a40298  bl 0x71039c1330
7101a4029c  add x0,x8,#0x250
7101a402a0  bl 0x71039c1330
7101a402a4  add x0,x9,#0x250
7101a402a8  bl 0x71039c1330
