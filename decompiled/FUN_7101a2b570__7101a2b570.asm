// addr:      7101a2b570
// offset:    0x1a2b570
// name:      FUN_7101a2b570
// mangled:   
// size:      22080

7101a2b570  stp d15,d14,[sp, #-0xa0]!
7101a2b574  stp d13,d12,[sp, #0x10]
7101a2b578  stp d11,d10,[sp, #0x20]
7101a2b57c  stp d9,d8,[sp, #0x30]
7101a2b580  stp x28,x27,[sp, #0x40]
7101a2b584  stp x26,x25,[sp, #0x50]
7101a2b588  stp x24,x23,[sp, #0x60]
7101a2b58c  stp x22,x21,[sp, #0x70]
7101a2b590  stp x20,x19,[sp, #0x80]
7101a2b594  stp x29,x30,[sp, #0x90]
7101a2b598  add x29,sp,#0x90
7101a2b59c  sub sp,sp,#0x1d0
7101a2b5a0  ldr w8,[x0, #0x174]
7101a2b5a4  mov x28,x0
7101a2b5a8  cbz w8,0x7101a2b5b4
7101a2b5ac  mov w9,#0x1
7101a2b5b0  b 0x7101a2b5c0
7101a2b5b4  ldrb w9,[x28, #0xf89]
7101a2b5b8  cmp w9,#0x0
7101a2b5bc  cset w9,ne
7101a2b5c0  str w9,[sp, #0x34]
7101a2b5c4  mov w9,#0xffffffff
7101a2b5c8  str w9,[x28, #0xf68]
7101a2b5cc  ldr x9,[x28, #0x238]
7101a2b5d0  ldr x10,[x28, #0x240]
7101a2b5d4  cmp x9,x10
7101a2b5d8  b.eq 0x7101a2b604
7101a2b5dc  ldr x8,[x9, #0x8]
7101a2b5e0  add x9,x9,#0x10
7101a2b5e4  ldrb w11,[x8, #0x36]
7101a2b5e8  ldr x8,[x8, #0x20]
7101a2b5ec  cmp w11,#0x0
7101a2b5f0  cset w11,eq
7101a2b5f4  cmp x10,x9
7101a2b5f8  strb w11,[x8, #0x165]
7101a2b5fc  b.ne 0x7101a2b5dc
7101a2b600  ldr w8,[x28, #0x174]
7101a2b604  cbz w8,0x7101a2b610
7101a2b608  mov w23,#0x1
7101a2b60c  b 0x7101a2b61c
7101a2b610  ldrb w8,[x28, #0xf89]
7101a2b614  cmp w8,#0x0
7101a2b618  cset w23,ne
7101a2b61c  ldr x8,[x28, #0x1b8]
7101a2b620  strb wzr,[x8, #0x2c]
7101a2b624  ldr x8,[x28, #0x1c8]
7101a2b628  strb wzr,[x8, #0x2c]
7101a2b62c  ldr x8,[x28, #0x1d8]
7101a2b630  strb wzr,[x8, #0x2c]
7101a2b634  ldr x8,[x28, #0x1e8]
7101a2b638  strb wzr,[x8, #0x2c]
7101a2b63c  ldr x8,[x28, #0x1f8]
7101a2b640  strb wzr,[x8, #0x2c]
7101a2b644  ldr x8,[x28, #0x208]
7101a2b648  strb wzr,[x8, #0x2c]
7101a2b64c  ldr x8,[x28, #0x218]
7101a2b650  strb wzr,[x8, #0x2c]
7101a2b654  stur xzr,[x29, #-0xe0]
7101a2b658  stp xzr,xzr,[x29, #-0xd8]
7101a2b65c  ldr x24,[x28, #0x240]
7101a2b660  ldr x25,[x28, #0x238]
7101a2b664  subs x8,x24,x25
7101a2b668  b.eq 0x7101a2b6f0
7101a2b66c  asr x19,x8,#0x4
7101a2b670  orr x8,xzr,#0x5555555555555555
7101a2b674  movk x8,#0x555, LSL #48
7101a2b678  cmp x19,x8
7101a2b67c  b.hi 0x7101a30afc
7101a2b680  add x8,x19,x19, LSL #0x1
7101a2b684  lsl x8,x8,#0x4
7101a2b688  cmp x8,#0x0
7101a2b68c  csinc x20,x8,xzr,ne
7101a2b690  mov w0,#0x10
7101a2b694  mov x1,x20
7101a2b698  bl 0x710392e290
7101a2b69c  cbnz x0,0x7101a2b6e0
7101a2b6a0  adrp x8,0x7105332000
7101a2b6a4  ldr x0,[x8, #0xf00]
7101a2b6a8  cbz x0,0x7101a2b6dc
7101a2b6ac  str wzr,[sp, #0xd8]
7101a2b6b0  str x20,[sp, #0x138]
7101a2b6b4  ldr x8,[x0]
7101a2b6b8  ldr x8,[x8, #0x30]
7101a2b6bc  add x1,sp,#0xd8
7101a2b6c0  add x2,sp,#0x138
7101a2b6c4  blr x8
7101a2b6c8  tbz w0,#0x0,0x7101a2b6dc
7101a2b6cc  mov w0,#0x10
7101a2b6d0  mov x1,x20
7101a2b6d4  bl 0x710392e290
7101a2b6d8  cbnz x0,0x7101a2b6e0
7101a2b6dc  mov x0,xzr
7101a2b6e0  orr w8,wzr,#0x30
7101a2b6e4  madd x8,x19,x8,x0
7101a2b6e8  stur x8,[x29, #-0xd0]
7101a2b6ec  stp x0,x0,[x29, #-0xe0]
7101a2b6f0  cmp x25,x24
7101a2b6f4  str x28,[sp, #0x90]
7101a2b6f8  b.eq 0x7101a2b970
7101a2b6fc  tbnz w23,#0x0,0x7101a2b970
7101a2b700  adrp x8,0x7104472000
7101a2b704  ldr s8,[x8, #0x8b8]
7101a2b708  adrp x8,0x7104472000
7101a2b70c  ldr s9,[x8, #0x4c4]
7101a2b710  orr x22,xzr,#-0x5555555555555556
7101a2b714  movk x22,#0xaaab
7101a2b718  b 0x7101a2b724
7101a2b71c  mov x0,xzr
7101a2b720  b 0x7101a2b8e0
7101a2b724  ldr x8,[x25, #0x8]
7101a2b728  ldr x9,[x8, #0x20]
7101a2b72c  ldr x10,[x9, #0x100]
7101a2b730  ldr q0,[x10, #0x60]
7101a2b734  ldr x10,[x28, #0xdf0]
7101a2b738  ldr s2,[x10, #0xbf0]
7101a2b73c  dup s1,v0.S[0x1]
7101a2b740  fcmp s2,s0
7101a2b744  b.lt 0x7101a2b778
7101a2b748  ldr s2,[x10, #0xbec]
7101a2b74c  fcmp s2,s0
7101a2b750  b.hi 0x7101a2b778
7101a2b754  ldr s2,[x10, #0xbf8]
7101a2b758  fcmp s2,s1
7101a2b75c  b.lt 0x7101a2b778
7101a2b760  ldr s2,[x10, #0xbf4]
7101a2b764  fcmp s2,s1
7101a2b768  b.hi 0x7101a2b778
7101a2b76c  ldr w10,[x8, #0x2c]
7101a2b770  cmn w10,#0x1
7101a2b774  b.ne 0x7101a2b964
7101a2b778  ldrb w10,[x8, #0x36]
7101a2b77c  cbz w10,0x7101a2b964
7101a2b780  ldrb w9,[x9, #0x165]
7101a2b784  cbnz w9,0x7101a2b964
7101a2b788  ldr x9,[x8, #0x10]
7101a2b78c  ldr x9,[x9, #0x8]
7101a2b790  ldr w10,[x9, #0x484]
7101a2b794  cbz w10,0x7101a2b7a0
7101a2b798  mov w10,#0x1
7101a2b79c  b 0x7101a2b7ac
7101a2b7a0  ldr w10,[x9, #0x488]
7101a2b7a4  cmn w10,#0x1
7101a2b7a8  cset w10,ne
7101a2b7ac  ldrb w11,[x9, #0x4aa]
7101a2b7b0  cmp w11,#0x0
7101a2b7b4  ccmp w10,#0x0,#0x4,ne
7101a2b7b8  b.ne 0x7101a2b7c4
7101a2b7bc  mov w19,wzr
7101a2b7c0  b 0x7101a2b7d4
7101a2b7c4  ldrb w9,[x9, #0x1a8]
7101a2b7c8  tst w9,#0x2
7101a2b7cc  mov w9,#0x1
7101a2b7d0  cinc w19,w9,ne
7101a2b7d4  fadd s0,s0,s8
7101a2b7d8  movi v2.2D,#0x0
7101a2b7dc  fsub s1,s9,s1
7101a2b7e0  mov v2.S[0x0],v0.S[0x0]
7101a2b7e4  ldr w27,[x8, #0x28]
7101a2b7e8  mov v2.S[0x1],v1.S[0x0]
7101a2b7ec  ldp x8,x9,[x29, #-0xd8]
7101a2b7f0  cmp x8,x9
7101a2b7f4  b.eq 0x7101a2b828
7101a2b7f8  str w19,[x8]
7101a2b7fc  ldr x9,[sp, #0x138]
7101a2b800  ldr w10,[sp, #0x140]
7101a2b804  str q2,[x8, #0x10]
7101a2b808  stur x9,[x8, #0x4]
7101a2b80c  mov x9,#-0x1
7101a2b810  str w10,[x8, #0xc]
7101a2b814  stp wzr,w27,[x8, #0x20]
7101a2b818  str x9,[x8, #0x28]
7101a2b81c  add x8,x8,#0x30
7101a2b820  stur x8,[x29, #-0xd8]
7101a2b824  b 0x7101a2b964
7101a2b828  ldur x20,[x29, #-0xe0]
7101a2b82c  sub x21,x8,x20
7101a2b830  asr x8,x21,#0x4
7101a2b834  mul x26,x8,x22
7101a2b838  orr x28,xzr,#0x5555555555555555
7101a2b83c  movk x28,#0x555, LSL #48
7101a2b840  add x8,x26,#0x1
7101a2b844  cmp x8,x28
7101a2b848  b.hi 0x7101a30b94
7101a2b84c  sub x9,x9,x20
7101a2b850  asr x9,x9,#0x4
7101a2b854  mul x9,x9,x22
7101a2b858  orr x10,xzr,#-0x5555555555555556
7101a2b85c  movk x10,#0x2aa, LSL #48
7101a2b860  cmp x9,x10
7101a2b864  b.cs 0x7101a2b878
7101a2b868  lsl x9,x9,#0x1
7101a2b86c  cmp x9,x8
7101a2b870  csel x28,x8,x9,cc
7101a2b874  cbz x28,0x7101a2b71c
7101a2b878  add x8,x28,x28, LSL #0x1
7101a2b87c  mov w0,#0x10
7101a2b880  lsl x8,x8,#0x4
7101a2b884  str q2,[sp, #0x80]
7101a2b888  cmp x8,#0x0
7101a2b88c  csinc x22,x8,xzr,ne
7101a2b890  mov x1,x22
7101a2b894  bl 0x710392e290
7101a2b898  cbnz x0,0x7101a2b8dc
7101a2b89c  adrp x8,0x7105332000
7101a2b8a0  ldr x0,[x8, #0xf00]
7101a2b8a4  cbz x0,0x7101a2b8d8
7101a2b8a8  str wzr,[sp, #0xd8]
7101a2b8ac  str x22,[sp, #0x138]
7101a2b8b0  ldr x8,[x0]
7101a2b8b4  ldr x8,[x8, #0x30]
7101a2b8b8  add x1,sp,#0xd8
7101a2b8bc  add x2,sp,#0x138
7101a2b8c0  blr x8
7101a2b8c4  tbz w0,#0x0,0x7101a2b8d8
7101a2b8c8  mov w0,#0x10
7101a2b8cc  mov x1,x22
7101a2b8d0  bl 0x710392e290
7101a2b8d4  cbnz x0,0x7101a2b8dc
7101a2b8d8  mov x0,xzr
7101a2b8dc  ldr q2,[sp, #0x80]
7101a2b8e0  orr w11,wzr,#0x30
7101a2b8e4  madd x8,x26,x11,x0
7101a2b8e8  madd x26,x28,x11,x0
7101a2b8ec  str w19,[x8]
7101a2b8f0  ldr x9,[sp, #0x138]
7101a2b8f4  ldr w10,[sp, #0x140]
7101a2b8f8  stur x9,[x8, #0x4]
7101a2b8fc  mov x9,#-0x1
7101a2b900  str x9,[x8, #0x28]
7101a2b904  orr x9,xzr,#0x5555555555555555
7101a2b908  movk x9,#0xd555, LSL #48
7101a2b90c  smulh x9,x21,x9
7101a2b910  str w10,[x8, #0xc]
7101a2b914  asr x10,x9,#0x3
7101a2b918  add x9,x10,x9, LSR #0x3f
7101a2b91c  str q2,[x8, #0x10]
7101a2b920  madd x22,x9,x11,x8
7101a2b924  add x19,x8,#0x30
7101a2b928  cmp x21,#0x1
7101a2b92c  stp wzr,w27,[x8, #0x20]
7101a2b930  b.lt 0x7101a2b944
7101a2b934  mov x0,x22
7101a2b938  mov x1,x20
7101a2b93c  mov x2,x21
7101a2b940  bl 0x71039c00e0
7101a2b944  ldr x28,[sp, #0x90]
7101a2b948  stp x22,x19,[x29, #-0xe0]
7101a2b94c  orr x22,xzr,#-0x5555555555555556
7101a2b950  movk x22,#0xaaab
7101a2b954  stur x26,[x29, #-0xd0]
7101a2b958  cbz x20,0x7101a2b964
7101a2b95c  mov x0,x20
7101a2b960  bl 0x710392eb40
7101a2b964  add x25,x25,#0x10
7101a2b968  cmp x24,x25
7101a2b96c  b.ne 0x7101a2b724
7101a2b970  ldr x0,[x28, #0xe18]
7101a2b974  add x8,x28,#0x238
7101a2b978  str x8,[sp, #0x38]
7101a2b97c  add x8,x28,#0xe18
7101a2b980  sub x1,x29,#0xe0
7101a2b984  eor w20,w23,#0x1
7101a2b988  str x8,[sp, #0x80]
7101a2b98c  bl 0x710376e720
7101a2b990  ldp x22,x21,[x29, #-0xe0]
7101a2b994  mov w8,#0xffffffff
7101a2b998  cmp x22,x21
7101a2b99c  b.eq 0x7101a2bc84
7101a2b9a0  mov w26,#0xffffffff
7101a2b9a4  mov w24,#0x1
7101a2b9a8  ldr x8,[x28, #0x240]
7101a2b9ac  ldr x25,[x28, #0x238]
7101a2b9b0  sub x8,x8,x25
7101a2b9b4  ldrsw x19,[x22, #0x24]
7101a2b9b8  asr x8,x8,#0x4
7101a2b9bc  cmp x8,x19
7101a2b9c0  b.ls 0x7101a30af4
7101a2b9c4  ldr w8,[x22, #0x28]
7101a2b9c8  cmn w8,#0x1
7101a2b9cc  b.eq 0x7101a2ba00
7101a2b9d0  add x8,x25,x19, LSL #0x4
7101a2b9d4  ldr x8,[x8, #0x8]
7101a2b9d8  ldr x8,[x8, #0x20]
7101a2b9dc  strb w24,[x8, #0x165]
7101a2b9e0  ldrb w8,[x28, #0xf87]
7101a2b9e4  cbnz w8,0x7101a2ba00
7101a2b9e8  ldrsw x8,[x22, #0x28]
7101a2b9ec  cmp w8,#0x7
7101a2b9f0  b.cs 0x7101a30afc
7101a2b9f4  add x8,x28,x8, LSL #0x4
7101a2b9f8  ldr x8,[x8, #0x1b8]
7101a2b9fc  strb w24,[x8, #0x2c]
7101a2ba00  ldr w8,[x22, #0x2c]
7101a2ba04  cmn w8,#0x1
7101a2ba08  b.eq 0x7101a2baa8
7101a2ba0c  cmp w8,#0x6
7101a2ba10  b.ne 0x7101a2ba94
7101a2ba14  ldr x8,[sp, #0x80]
7101a2ba18  ldr x8,[x8]
7101a2ba1c  ldr x9,[x8, #0x1b8]
7101a2ba20  cbz x9,0x7101a2ba8c
7101a2ba24  add x10,x8,#0x1b8
7101a2ba28  mov x8,x10
7101a2ba2c  ldr w11,[x9, #0x20]
7101a2ba30  cmp w11,#0x6
7101a2ba34  cset w11,lt
7101a2ba38  csel x8,x8,x9,lt
7101a2ba3c  ldr x9,[x9, w11, UXTW #0x3]
7101a2ba40  cbnz x9,0x7101a2ba2c
7101a2ba44  cmp x8,x10
7101a2ba48  b.eq 0x7101a2ba8c
7101a2ba4c  ldr w9,[x8, #0x20]
7101a2ba50  cmp w9,#0x6
7101a2ba54  b.gt 0x7101a2ba8c
7101a2ba58  ldr x23,[x8, #0x28]
7101a2ba5c  cbz x23,0x7101a2ba8c
7101a2ba60  ldr x8,[x23]
7101a2ba64  ldr x8,[x8, #0x1f8]
7101a2ba68  mov x0,x23
7101a2ba6c  mov w1,wzr
7101a2ba70  blr x8
7101a2ba74  ldr x8,[x23]
7101a2ba78  ldr x8,[x8, #0x388]
7101a2ba7c  mov w1,#0x1
7101a2ba80  mov x0,x23
7101a2ba84  mov w2,wzr
7101a2ba88  blr x8
7101a2ba8c  orr w26,wzr,#0x6
7101a2ba90  strb w24,[x28, #0xf89]
7101a2ba94  add x8,x25,x19, LSL #0x4
7101a2ba98  ldr x8,[x8, #0x8]
7101a2ba9c  ldr x0,[x8, #0x20]
7101a2baa0  bl 0x71032d3260
7101a2baa4  mov w20,wzr
7101a2baa8  add x22,x22,#0x30
7101a2baac  cmp x22,x21
7101a2bab0  b.ne 0x7101a2b9a8
7101a2bab4  ldur x22,[x29, #-0xe0]
7101a2bab8  cbz x22,0x7101a2bac8
7101a2babc  mov x0,x22
7101a2bac0  stur x22,[x29, #-0xd8]
7101a2bac4  bl 0x710392eb40
7101a2bac8  ldr x0,[x28, #0x1b8]
7101a2bacc  bl 0x71032d6e10
7101a2bad0  ldr x0,[x28, #0x1c8]
7101a2bad4  bl 0x71032d6e10
7101a2bad8  ldr x0,[x28, #0x1d8]
7101a2badc  bl 0x71032d6e10
7101a2bae0  ldr x0,[x28, #0x1e8]
7101a2bae4  bl 0x71032d6e10
7101a2bae8  ldr x0,[x28, #0x1f8]
7101a2baec  bl 0x71032d6e10
7101a2baf0  ldr x0,[x28, #0x208]
7101a2baf4  bl 0x71032d6e10
7101a2baf8  ldr x0,[x28, #0x218]
7101a2bafc  bl 0x71032d6e10
7101a2bb00  ldr x21,[x28, #0x238]
7101a2bb04  ldr x23,[x28, #0x240]
7101a2bb08  cmp x21,x23
7101a2bb0c  b.eq 0x7101a2bbf4
7101a2bb10  ldr x19,[sp, #0x80]
7101a2bb14  mov w24,#0x1
7101a2bb18  tbz w20,#0x0,0x7101a2bbdc
7101a2bb1c  ldr x8,[x21, #0x8]
7101a2bb20  ldrb w9,[x8, #0x36]
7101a2bb24  cbz w9,0x7101a2bbe4
7101a2bb28  ldr x8,[x8, #0x10]
7101a2bb2c  ldr x8,[x8, #0x8]
7101a2bb30  ldrb w9,[x8, #0x4aa]
7101a2bb34  cbz w9,0x7101a2bbe4
7101a2bb38  ldrb w8,[x8, #0x1b0]
7101a2bb3c  tbz w8,#0x1,0x7101a2bbe4
7101a2bb40  ldrb w8,[x28, #0xf87]
7101a2bb44  cbz w8,0x7101a2bbe4
7101a2bb48  orr w1,wzr,#0x6
7101a2bb4c  mov x0,x19
7101a2bb50  mov w2,wzr
7101a2bb54  bl 0x7103771be0
7101a2bb58  ldr x8,[x19]
7101a2bb5c  ldr x9,[x8, #0x1b8]
7101a2bb60  cbz x9,0x7101a2bbcc
7101a2bb64  add x10,x8,#0x1b8
7101a2bb68  mov x8,x10
7101a2bb6c  ldr w11,[x9, #0x20]
7101a2bb70  cmp w11,#0x6
7101a2bb74  cset w11,lt
7101a2bb78  csel x8,x8,x9,lt
7101a2bb7c  ldr x9,[x9, w11, UXTW #0x3]
7101a2bb80  cbnz x9,0x7101a2bb6c
7101a2bb84  cmp x8,x10
7101a2bb88  b.eq 0x7101a2bbcc
7101a2bb8c  ldr w9,[x8, #0x20]
7101a2bb90  cmp w9,#0x6
7101a2bb94  b.gt 0x7101a2bbcc
7101a2bb98  ldr x22,[x8, #0x28]
7101a2bb9c  cbz x22,0x7101a2bbcc
7101a2bba0  ldr x8,[x22]
7101a2bba4  ldr x8,[x8, #0x1f8]
7101a2bba8  mov x0,x22
7101a2bbac  mov w1,wzr
7101a2bbb0  blr x8
7101a2bbb4  ldr x8,[x22]
7101a2bbb8  ldr x8,[x8, #0x388]
7101a2bbbc  mov w1,#0x1
7101a2bbc0  mov x0,x22
7101a2bbc4  mov w2,wzr
7101a2bbc8  blr x8
7101a2bbcc  mov w20,wzr
7101a2bbd0  orr w26,wzr,#0x6
7101a2bbd4  strb w24,[x28, #0xf89]
7101a2bbd8  b 0x7101a2bbe8
7101a2bbdc  mov w20,wzr
7101a2bbe0  b 0x7101a2bbe8
7101a2bbe4  mov w20,#0x1
7101a2bbe8  add x21,x21,#0x10
7101a2bbec  cmp x21,x23
7101a2bbf0  b.ne 0x7101a2bb18
7101a2bbf4  ldr w8,[x28, #0x170]
7101a2bbf8  ldr x22,[x28, #0x268]
7101a2bbfc  cmp w8,#0x0
7101a2bc00  ldr x25,[x28, #0x270]
7101a2bc04  cset w8,eq
7101a2bc08  cmp x22,x25
7101a2bc0c  b.eq 0x7101a2cf60
7101a2bc10  and w27,w20,w8
7101a2bc14  add x8,x28,#0x250
7101a2bc18  str x8,[sp]
7101a2bc1c  add x8,sp,#0xd8
7101a2bc20  add x8,x8,#0x30
7101a2bc24  str x8,[sp, #0x20]
7101a2bc28  sub x8,x29,#0xe0
7101a2bc2c  add x8,x8,#0x8
7101a2bc30  str x8,[sp, #0x18]
7101a2bc34  add x8,sp,#0x138
7101a2bc38  add x8,x8,#0x8
7101a2bc3c  str x8,[sp, #0x8]
7101a2bc40  add x8,sp,#0x98
7101a2bc44  add x8,x8,#0x30
7101a2bc48  str x8,[sp, #0x10]
7101a2bc4c  adrp x8,0x7104472000
7101a2bc50  ldr s9,[x8, #0x8b8]
7101a2bc54  adrp x8,0x7104472000
7101a2bc58  ldr s10,[x8, #0x4c4]
7101a2bc5c  movi v19.2D,#0x0
7101a2bc60  orr x13,xzr,#-0x5555555555555556
7101a2bc64  mov x24,xzr
7101a2bc68  adrp x20,0x7104280000
7101a2bc6c  add x20,x20,#0x412
7101a2bc70  movk x13,#0xaaab
7101a2bc74  str w26,[sp, #0x68]
7101a2bc78  str w27,[sp, #0x70]
7101a2bc7c  str x25,[sp, #0x60]
7101a2bc80  b 0x7101a2bdb4
7101a2bc84  mov w26,w8
7101a2bc88  cbnz x22,0x7101a2babc
7101a2bc8c  b 0x7101a2bac8
7101a2bc90  adrp x8,0x710532f000
7101a2bc94  ldr x8,[x8, #0x8d0]
7101a2bc98  ldr x0,[x8, #0x8]
7101a2bc9c  ldp x8,x9,[x0, #0x40]
7101a2bca0  sub x9,x9,x8
7101a2bca4  asr x9,x9,#0x3
7101a2bca8  cmp x9,#0x4
7101a2bcac  b.cc 0x7101a2bcc0
7101a2bcb0  ldr x26,[x8, #0x18]
7101a2bcb4  ldrb w8,[x0, #0x191]
7101a2bcb8  cbnz w8,0x7101a2bd3c
7101a2bcbc  b 0x7101a2bccc
7101a2bcc0  mov x26,xzr
7101a2bcc4  ldrb w8,[x0, #0x191]
7101a2bcc8  cbnz w8,0x7101a2bd3c
7101a2bccc  mov w2,#0x4
7101a2bcd0  mov x1,x26
7101a2bcd4  bl 0x7103313f20
7101a2bcd8  tbz w0,#0x0,0x7101a2bd3c
7101a2bcdc  add x0,sp,#0x98
7101a2bce0  mov x1,x26
7101a2bce4  bl 0x71024076d0
7101a2bce8  ldr x8,[sp, #0xa8]
7101a2bcec  ldr w26,[sp, #0x68]
7101a2bcf0  adrp x9,0x7104f73000
7101a2bcf4  add x9,x9,#0xd50
7101a2bcf8  str x9,[sp, #0xa0]
7101a2bcfc  cbz x8,0x7101a2bd7c
7101a2bd00  adrp x9,0x7106dd5000
7101a2bd04  ldrb w9,[x9, #0x3a8]
7101a2bd08  cmp w9,#0x1
7101a2bd0c  b.ne 0x7101a2bd7c
7101a2bd10  adrp x10,0x7106dd5000
7101a2bd14  ldr w9,[sp, #0xb0]
7101a2bd18  ldr w10,[x10, #0x3ac]
7101a2bd1c  cmp w9,w10
7101a2bd20  b.ne 0x7101a2bd7c
7101a2bd24  ldr wzr,[x8, #0x38]!
7101a2bd28  ldaxr w9,[x8]
7101a2bd2c  sub w9,w9,#0x1
7101a2bd30  stlxr w10,w9,[x8]
7101a2bd34  cbnz w10,0x7101a2bd28
7101a2bd38  b 0x7101a2bd7c
7101a2bd3c  mov w8,#0x6500
7101a2bd40  movk w8,#0x87, LSL #16
7101a2bd44  stp wzr,w8,[sp, #0xb0]
7101a2bd48  adrp x8,0x7104f73000
7101a2bd4c  add x8,x8,#0xd30
7101a2bd50  ldr w26,[sp, #0x68]
7101a2bd54  stp x8,xzr,[sp, #0xa0]
7101a2bd58  mov x8,#-0x1
7101a2bd5c  str x8,[sp, #0xc0]
7101a2bd60  ldr x8,[sp, #0x10]
7101a2bd64  strb wzr,[sp, #0xb8]
7101a2bd68  str wzr,[sp, #0x98]
7101a2bd6c  stp xzr,xzr,[x8]
7101a2bd70  adrp x8,0x7104f73000
7101a2bd74  add x8,x8,#0xd50
7101a2bd78  str x8,[sp, #0xa0]
7101a2bd7c  str xzr,[sp, #0xa8]
7101a2bd80  strb wzr,[sp, #0xb8]
7101a2bd84  ldr x0,[x23, #0x50]
7101a2bd88  orr w8,wzr,#0x3c
7101a2bd8c  str w8,[x23, #0x58]
7101a2bd90  str xzr,[x23, #0x48]
7101a2bd94  bl 0x710376b960
7101a2bd98  ldr x0,[x23, #0x8]
7101a2bd9c  fmov s0,0x3f800000
7101a2bda0  mov x1,x20
7101a2bda4  bl 0x7103778300
7101a2bda8  mov w8,#0x1
7101a2bdac  strb w8,[x23, #0x61]
7101a2bdb0  b 0x7101a2c344
7101a2bdb4  ldr x9,[x28, #0x258]
7101a2bdb8  ldr x8,[x28, #0x250]
7101a2bdbc  sub x9,x9,x8
7101a2bdc0  asr x9,x9,#0x4
7101a2bdc4  cmp x9,x24
7101a2bdc8  b.ls 0x7101a30b80
7101a2bdcc  add x8,x8,x24, LSL #0x4
7101a2bdd0  ldr x8,[x8, #0x8]
7101a2bdd4  ldr x8,[x8, #0x678]
7101a2bdd8  ldr x19,[x22, #0x8]
7101a2bddc  str x8,[x19, #0x40]
7101a2bde0  cbnz x8,0x7101a2be24
7101a2bde4  ldrb w8,[x19, #0x61]
7101a2bde8  cbnz w8,0x7101a2be1c
7101a2bdec  ldr x0,[x19, #0x50]
7101a2bdf0  str xzr,[x19, #0x48]
7101a2bdf4  bl 0x710376b960
7101a2bdf8  ldr x0,[x19, #0x8]
7101a2bdfc  fmov s0,0x3f800000
7101a2be00  mov x1,x20
7101a2be04  bl 0x7103778300
7101a2be08  movi v19.2D,#0x0
7101a2be0c  orr x13,xzr,#-0x5555555555555556
7101a2be10  movk x13,#0xaaab
7101a2be14  mov w8,#0x1
7101a2be18  strb w8,[x19, #0x61]
7101a2be1c  str xzr,[x19, #0x48]
7101a2be20  str wzr,[x19, #0x5c]
7101a2be24  ldr x23,[x22, #0x8]
7101a2be28  ldr w8,[x23, #0x58]
7101a2be2c  subs w8,w8,#0x1
7101a2be30  strb wzr,[x23, #0x60]
7101a2be34  b.lt 0x7101a2be40
7101a2be38  csel w8,wzr,w8,eq
7101a2be3c  str w8,[x23, #0x58]
7101a2be40  ldr x8,[x23, #0x40]
7101a2be44  cbz x8,0x7101a2cf4c
7101a2be48  ldr x8,[x8, #0x8]
7101a2be4c  ldr x8,[x8, #0x10]
7101a2be50  ldr x8,[x8, #0x8]
7101a2be54  ldr w8,[x8, #0x498]
7101a2be58  cmp w8,#0x0
7101a2be5c  ccmp w27,#0x0,#0x4,ne
7101a2be60  b.ne 0x7101a2beac
7101a2be64  ldrb w8,[x23, #0x61]
7101a2be68  cbnz w8,0x7101a2bea4
7101a2be6c  ldr x0,[x23, #0x50]
7101a2be70  orr w8,wzr,#0x3c
7101a2be74  str w8,[x23, #0x58]
7101a2be78  str xzr,[x23, #0x48]
7101a2be7c  bl 0x710376b960
7101a2be80  ldr x0,[x23, #0x8]
7101a2be84  fmov s0,0x3f800000
7101a2be88  mov x1,x20
7101a2be8c  bl 0x7103778300
7101a2be90  movi v19.2D,#0x0
7101a2be94  orr x13,xzr,#-0x5555555555555556
7101a2be98  movk x13,#0xaaab
7101a2be9c  mov w8,#0x1
7101a2bea0  strb w8,[x23, #0x61]
7101a2bea4  str wzr,[x23, #0x5c]
7101a2bea8  b 0x7101a2cf4c
7101a2beac  ldr w8,[x23, #0x5c]
7101a2beb0  subs w8,w8,#0x1
7101a2beb4  b.lt 0x7101a2bed4
7101a2beb8  str w8,[x23, #0x5c]
7101a2bebc  b.ne 0x7101a2cf4c
7101a2bec0  mov w8,#0xb4
7101a2bec4  str x8,[x23, #0x58]
7101a2bec8  mov w8,#0x1
7101a2becc  strb w8,[x23, #0x60]
7101a2bed0  b 0x7101a2cf4c
7101a2bed4  ldrb w8,[x23, #0x61]
7101a2bed8  ldr x25,[sp, #0x90]
7101a2bedc  cbz w8,0x7101a2bf78
7101a2bee0  ldr x9,[x23, #0x48]
7101a2bee4  cbz x9,0x7101a2c378
7101a2bee8  ldr x25,[sp, #0x60]
7101a2beec  cbnz w8,0x7101a2cf4c
7101a2bef0  ldr x8,[x9, #0x8]
7101a2bef4  ldr x10,[x8, #0x20]
7101a2bef8  ldr x10,[x10, #0x100]
7101a2befc  ldr q0,[x10, #0x60]
7101a2bf00  ldr x10,[x23, #0x28]
7101a2bf04  ldr x10,[x10]
7101a2bf08  fadd s1,s0,s9
7101a2bf0c  dup s0,v0.S[0x1]
7101a2bf10  fsub s0,s10,s0
7101a2bf14  ldr x9,[x8, #0x10]
7101a2bf18  cbz x10,0x7101a2c414
7101a2bf1c  ldr s5,[x10, #0x30]
7101a2bf20  mov v4.16B,v19.16B
7101a2bf24  add x11,x10,#0x34
7101a2bf28  ldp s2,s3,[x10, #0x50]
7101a2bf2c  ldp s6,s7,[x10, #0x48]
7101a2bf30  fmul s3,s3,s7
7101a2bf34  mov v4.S[0x0],v5.S[0x0]
7101a2bf38  fmul s2,s2,s6
7101a2bf3c  ld1 {v4.S}[1],[x11]
7101a2bf40  add x11,x10,#0x38
7101a2bf44  ld1 {v4.S}[2],[x11]
7101a2bf48  fabs s2,s2
7101a2bf4c  fmov s6,0x3f000000
7101a2bf50  ldrb w11,[x10, #0x5b]
7101a2bf54  fmul s6,s2,s6
7101a2bf58  fabs s3,s3
7101a2bf5c  and w12,w11,#0x3
7101a2bf60  cmp w12,#0x2
7101a2bf64  b.eq 0x7101a2cca4
7101a2bf68  cmp w12,#0x1
7101a2bf6c  b.ne 0x7101a2ccac
7101a2bf70  fadd s5,s5,s6
7101a2bf74  b 0x7101a2cca8
7101a2bf78  stp xzr,xzr,[x29, #-0xd8]
7101a2bf7c  stur xzr,[x29, #-0xe0]
7101a2bf80  ldr x21,[x25, #0x240]
7101a2bf84  ldr x20,[x25, #0x238]
7101a2bf88  subs x8,x21,x20
7101a2bf8c  b.eq 0x7101a2c02c
7101a2bf90  asr x19,x8,#0x4
7101a2bf94  orr x8,xzr,#0x5555555555555555
7101a2bf98  movk x8,#0x555, LSL #48
7101a2bf9c  cmp x19,x8
7101a2bfa0  b.hi 0x7101a30afc
7101a2bfa4  add x8,x19,x19, LSL #0x1
7101a2bfa8  lsl x8,x8,#0x4
7101a2bfac  cmp x8,#0x0
7101a2bfb0  csinc x27,x8,xzr,ne
7101a2bfb4  mov w0,#0x10
7101a2bfb8  mov x1,x27
7101a2bfbc  bl 0x710392e290
7101a2bfc0  cbnz x0,0x7101a2c004
7101a2bfc4  adrp x8,0x7105332000
7101a2bfc8  ldr x0,[x8, #0xf00]
7101a2bfcc  cbz x0,0x7101a2c000
7101a2bfd0  str wzr,[sp, #0x128]
7101a2bfd4  str x27,[sp, #0x138]
7101a2bfd8  ldr x8,[x0]
7101a2bfdc  ldr x8,[x8, #0x30]
7101a2bfe0  add x1,sp,#0x128
7101a2bfe4  add x2,sp,#0x138
7101a2bfe8  blr x8
7101a2bfec  tbz w0,#0x0,0x7101a2c000
7101a2bff0  mov w0,#0x10
7101a2bff4  mov x1,x27
7101a2bff8  bl 0x710392e290
7101a2bffc  cbnz x0,0x7101a2c004
7101a2c000  mov x0,xzr
7101a2c004  orr w8,wzr,#0x30
7101a2c008  madd x8,x19,x8,x0
7101a2c00c  ldr w27,[sp, #0x70]
7101a2c010  stp x0,x0,[x29, #-0xe0]
7101a2c014  movi v19.2D,#0x0
7101a2c018  stur x8,[x29, #-0xd0]
7101a2c01c  ldr x21,[x25, #0x240]
7101a2c020  ldr x20,[x25, #0x238]
7101a2c024  orr x13,xzr,#-0x5555555555555556
7101a2c028  movk x13,#0xaaab
7101a2c02c  cmp x20,x21
7101a2c030  b.eq 0x7101a2c284
7101a2c034  mov w8,#0x1
7101a2c038  b 0x7101a2c044
7101a2c03c  mov x0,xzr
7101a2c040  b 0x7101a2c1d8
7101a2c044  tst w8,#0xff
7101a2c048  b.eq 0x7101a2c274
7101a2c04c  ldr x8,[x23, #0x48]
7101a2c050  cmp x20,x8
7101a2c054  b.ne 0x7101a2c274
7101a2c058  ldr x8,[x20, #0x8]
7101a2c05c  ldr x9,[x8, #0x10]
7101a2c060  ldr x9,[x9, #0x8]
7101a2c064  ldr w10,[x9, #0x484]
7101a2c068  cbz w10,0x7101a2c074
7101a2c06c  mov w10,#0x1
7101a2c070  b 0x7101a2c080
7101a2c074  ldr w10,[x9, #0x488]
7101a2c078  cmn w10,#0x1
7101a2c07c  cset w10,ne
7101a2c080  ldrb w11,[x9, #0x4aa]
7101a2c084  cmp w11,#0x0
7101a2c088  ccmp w10,#0x0,#0x4,ne
7101a2c08c  b.ne 0x7101a2c098
7101a2c090  mov w12,wzr
7101a2c094  b 0x7101a2c0a8
7101a2c098  ldrb w9,[x9, #0x1a8]
7101a2c09c  tst w9,#0x2
7101a2c0a0  mov w9,#0x1
7101a2c0a4  cinc w12,w9,ne
7101a2c0a8  ldr x9,[x8, #0x20]
7101a2c0ac  ldr x9,[x9, #0x100]
7101a2c0b0  ldr q0,[x9, #0x60]
7101a2c0b4  fadd s1,s0,s9
7101a2c0b8  dup s0,v0.S[0x1]
7101a2c0bc  mov v2.16B,v19.16B
7101a2c0c0  mov v2.S[0x0],v1.S[0x0]
7101a2c0c4  fsub s0,s10,s0
7101a2c0c8  mov v2.S[0x1],v0.S[0x0]
7101a2c0cc  ldr w19,[x8, #0x28]
7101a2c0d0  ldp x8,x9,[x29, #-0xd8]
7101a2c0d4  cmp x8,x9
7101a2c0d8  b.eq 0x7101a2c10c
7101a2c0dc  str w12,[x8]
7101a2c0e0  ldr x9,[sp, #0x138]
7101a2c0e4  ldr w10,[sp, #0x140]
7101a2c0e8  str q2,[x8, #0x10]
7101a2c0ec  stur x9,[x8, #0x4]
7101a2c0f0  mov x9,#-0x1
7101a2c0f4  str w10,[x8, #0xc]
7101a2c0f8  stp wzr,w19,[x8, #0x20]
7101a2c0fc  str x9,[x8, #0x28]
7101a2c100  add x8,x8,#0x30
7101a2c104  stur x8,[x29, #-0xd8]
7101a2c108  b 0x7101a2c270
7101a2c10c  ldur x27,[x29, #-0xe0]
7101a2c110  sub x28,x8,x27
7101a2c114  asr x8,x28,#0x4
7101a2c118  mul x26,x8,x13
7101a2c11c  orr x25,xzr,#0x5555555555555555
7101a2c120  movk x25,#0x555, LSL #48
7101a2c124  add x8,x26,#0x1
7101a2c128  cmp x8,x25
7101a2c12c  b.hi 0x7101a30b94
7101a2c130  sub x9,x9,x27
7101a2c134  asr x9,x9,#0x4
7101a2c138  mul x9,x9,x13
7101a2c13c  orr x10,xzr,#-0x5555555555555556
7101a2c140  movk x10,#0x2aa, LSL #48
7101a2c144  cmp x9,x10
7101a2c148  b.cs 0x7101a2c15c
7101a2c14c  lsl x9,x9,#0x1
7101a2c150  cmp x9,x8
7101a2c154  csel x25,x8,x9,cc
7101a2c158  cbz x25,0x7101a2c03c
7101a2c15c  add x8,x25,x25, LSL #0x1
7101a2c160  mov w0,#0x10
7101a2c164  str w12,[sp, #0x5c]
7101a2c168  str q2,[sp, #0x40]
7101a2c16c  lsl x8,x8,#0x4
7101a2c170  cmp x8,#0x0
7101a2c174  csinc x1,x8,xzr,ne
7101a2c178  str x1,[sp, #0x28]
7101a2c17c  bl 0x710392e290
7101a2c180  cbnz x0,0x7101a2c1c8
7101a2c184  adrp x8,0x7105332000
7101a2c188  ldr x0,[x8, #0xf00]
7101a2c18c  cbz x0,0x7101a2c1c4
7101a2c190  ldr x8,[sp, #0x28]
7101a2c194  str wzr,[sp, #0x128]
7101a2c198  add x1,sp,#0x128
7101a2c19c  add x2,sp,#0x138
7101a2c1a0  str x8,[sp, #0x138]
7101a2c1a4  ldr x8,[x0]
7101a2c1a8  ldr x8,[x8, #0x30]
7101a2c1ac  blr x8
7101a2c1b0  tbz w0,#0x0,0x7101a2c1c4
7101a2c1b4  ldr x1,[sp, #0x28]
7101a2c1b8  mov w0,#0x10
7101a2c1bc  bl 0x710392e290
7101a2c1c0  cbnz x0,0x7101a2c1c8
7101a2c1c4  mov x0,xzr
7101a2c1c8  ldr q2,[sp, #0x40]
7101a2c1cc  ldr w12,[sp, #0x5c]
7101a2c1d0  orr x13,xzr,#-0x5555555555555556
7101a2c1d4  movk x13,#0xaaab
7101a2c1d8  orr w11,wzr,#0x30
7101a2c1dc  madd x8,x26,x11,x0
7101a2c1e0  str w12,[x8]
7101a2c1e4  ldr x9,[sp, #0x138]
7101a2c1e8  ldr w10,[sp, #0x140]
7101a2c1ec  stur x9,[x8, #0x4]
7101a2c1f0  mov x9,#-0x1
7101a2c1f4  str x9,[x8, #0x28]
7101a2c1f8  orr x9,xzr,#0x5555555555555555
7101a2c1fc  str q2,[x8, #0x10]
7101a2c200  movk x9,#0xd555, LSL #48
7101a2c204  smulh x9,x28,x9
7101a2c208  str w10,[x8, #0xc]
7101a2c20c  asr x10,x9,#0x3
7101a2c210  add x9,x10,x9, LSR #0x3f
7101a2c214  madd x25,x25,x11,x0
7101a2c218  stp wzr,w19,[x8, #0x20]
7101a2c21c  add x19,x8,#0x30
7101a2c220  madd x26,x9,x11,x8
7101a2c224  cmp x28,#0x1
7101a2c228  b.lt 0x7101a2c244
7101a2c22c  mov x0,x26
7101a2c230  mov x1,x27
7101a2c234  mov x2,x28
7101a2c238  bl 0x71039c00e0
7101a2c23c  orr x13,xzr,#-0x5555555555555556
7101a2c240  movk x13,#0xaaab
7101a2c244  stp x26,x19,[x29, #-0xe0]
7101a2c248  ldr w26,[sp, #0x68]
7101a2c24c  stur x25,[x29, #-0xd0]
7101a2c250  ldr x25,[sp, #0x90]
7101a2c254  movi v19.2D,#0x0
7101a2c258  cbz x27,0x7101a2c270
7101a2c25c  mov x0,x27
7101a2c260  bl 0x710392eb40
7101a2c264  movi v19.2D,#0x0
7101a2c268  orr x13,xzr,#-0x5555555555555556
7101a2c26c  movk x13,#0xaaab
7101a2c270  ldr w27,[sp, #0x70]
7101a2c274  add x20,x20,#0x10
7101a2c278  cmp x21,x20
7101a2c27c  mov w8,w27
7101a2c280  b.ne 0x7101a2c044
7101a2c284  ldr x0,[x23, #0x50]
7101a2c288  sub x1,x29,#0xe0
7101a2c28c  bl 0x710376e720
7101a2c290  ldp x0,x8,[x29, #-0xe0]
7101a2c294  cmp x0,x8
7101a2c298  mov x9,x0
7101a2c29c  adrp x20,0x7104280000
7101a2c2a0  add x20,x20,#0x412
7101a2c2a4  b.eq 0x7101a2c2f0
7101a2c2a8  ldr x12,[x25, #0x240]
7101a2c2ac  ldr x11,[x25, #0x238]
7101a2c2b0  sub x12,x12,x11
7101a2c2b4  ldrsw x10,[x9, #0x24]
7101a2c2b8  asr x12,x12,#0x4
7101a2c2bc  cmp x12,x10
7101a2c2c0  b.ls 0x7101a30af4
7101a2c2c4  ldr w12,[x9, #0x28]
7101a2c2c8  cmn w12,#0x1
7101a2c2cc  b.eq 0x7101a2c2e4
7101a2c2d0  add x10,x11,x10, LSL #0x4
7101a2c2d4  mov w11,#0x1
7101a2c2d8  ldr x10,[x10, #0x8]
7101a2c2dc  ldr x10,[x10, #0x20]
7101a2c2e0  strb w11,[x10, #0x165]
7101a2c2e4  add x9,x9,#0x30
7101a2c2e8  cmp x8,x9
7101a2c2ec  b.ne 0x7101a2c2a8
7101a2c2f0  ldr x8,[x23, #0x50]
7101a2c2f4  ldr w9,[x8, #0x25c]
7101a2c2f8  cmn w9,#0x1
7101a2c2fc  b.eq 0x7101a2c354
7101a2c300  mov x9,#0x3c
7101a2c304  movk x9,#0x1e, LSL #32
7101a2c308  mov x0,x8
7101a2c30c  str xzr,[x23, #0x48]
7101a2c310  str x9,[x23, #0x58]
7101a2c314  bl 0x710376b960
7101a2c318  ldr x0,[x23, #0x8]
7101a2c31c  fmov s0,0x3f800000
7101a2c320  mov x1,x20
7101a2c324  bl 0x7103778300
7101a2c328  mov w8,#0x1
7101a2c32c  strb w8,[x23, #0x61]
7101a2c330  ldur x0,[x29, #-0xe0]
7101a2c334  cbz x0,0x7101a2c340
7101a2c338  stur x0,[x29, #-0xd8]
7101a2c33c  bl 0x710392eb40
7101a2c340  ldr x25,[sp, #0x60]
7101a2c344  movi v19.2D,#0x0
7101a2c348  orr x13,xzr,#-0x5555555555555556
7101a2c34c  movk x13,#0xaaab
7101a2c350  b 0x7101a2cf4c
7101a2c354  cbz x0,0x7101a2c360
7101a2c358  stur x0,[x29, #-0xd8]
7101a2c35c  bl 0x710392eb40
7101a2c360  ldrb w8,[x23, #0x61]
7101a2c364  movi v19.2D,#0x0
7101a2c368  orr x13,xzr,#-0x5555555555555556
7101a2c36c  movk x13,#0xaaab
7101a2c370  ldr x9,[x23, #0x48]
7101a2c374  cbnz x9,0x7101a2bee8
7101a2c378  cbz w8,0x7101a2c38c
7101a2c37c  ldr w8,[x23, #0x58]
7101a2c380  cmp w8,#0x0
7101a2c384  cset w8,ne
7101a2c388  b 0x7101a2c390
7101a2c38c  mov w8,#0x1
7101a2c390  ldr x9,[x23, #0x28]
7101a2c394  ldr x9,[x9]
7101a2c398  cbz x9,0x7101a2c3f8
7101a2c39c  ldr s2,[x9, #0x30]
7101a2c3a0  mov v4.16B,v19.16B
7101a2c3a4  add x10,x9,#0x34
7101a2c3a8  ldp s0,s1,[x9, #0x50]
7101a2c3ac  ldp s3,s5,[x9, #0x48]
7101a2c3b0  fmul s1,s1,s5
7101a2c3b4  mov v4.S[0x0],v2.S[0x0]
7101a2c3b8  fmul s0,s0,s3
7101a2c3bc  ld1 {v4.S}[1],[x10]
7101a2c3c0  add x10,x9,#0x38
7101a2c3c4  ld1 {v4.S}[2],[x10]
7101a2c3c8  fabs s0,s0
7101a2c3cc  fmov s3,0x3f000000
7101a2c3d0  ldrb w10,[x9, #0x5b]
7101a2c3d4  fmul s3,s0,s3
7101a2c3d8  fabs s1,s1
7101a2c3dc  and w11,w10,#0x3
7101a2c3e0  cmp w11,#0x2
7101a2c3e4  b.eq 0x7101a2c430
7101a2c3e8  cmp w11,#0x1
7101a2c3ec  b.ne 0x7101a2c438
7101a2c3f0  fadd s2,s2,s3
7101a2c3f4  b 0x7101a2c434
7101a2c3f8  adrp x9,0x71052a8000
7101a2c3fc  ldr x9,[x9, #0xa88]
7101a2c400  fmov s0,wzr
7101a2c404  mov v1.16B,v0.16B
7101a2c408  ldr q2,[x9]
7101a2c40c  dup s3,v2.S[0x1]
7101a2c410  b 0x7101a2c4b4
7101a2c414  adrp x10,0x71052a8000
7101a2c418  ldr x10,[x10, #0xa88]
7101a2c41c  fmov s2,wzr
7101a2c420  mov v3.16B,v2.16B
7101a2c424  ldr q6,[x10]
7101a2c428  dup s5,v6.S[0x1]
7101a2c42c  b 0x7101a2cd28
7101a2c430  fsub s2,s2,s3
7101a2c434  mov v4.S[0x0],v2.S[0x0]
7101a2c438  fmov s2,0x3f000000
7101a2c43c  fmul s2,s1,s2
7101a2c440  ubfx w10,w10,#0x2,#0x2
7101a2c444  cmp w10,#0x2
7101a2c448  b.eq 0x7101a2c460
7101a2c44c  cmp w10,#0x1
7101a2c450  b.ne 0x7101a2c46c
7101a2c454  dup s3,v4.S[0x1]
7101a2c458  fsub s2,s3,s2
7101a2c45c  b 0x7101a2c468
7101a2c460  dup s3,v4.S[0x1]
7101a2c464  fadd s2,s2,s3
7101a2c468  mov v4.S[0x1],v2.S[0x0]
7101a2c46c  ldr x9,[x9, #0x18]
7101a2c470  cbz x9,0x7101a2c4ac
7101a2c474  ldp s2,s3,[x9, #0x30]
7101a2c478  fadd s2,s4,s2
7101a2c47c  dup s5,v4.S[0x1]
7101a2c480  fadd s3,s5,s3
7101a2c484  dup s6,v4.S[0x2]
7101a2c488  mov v4.16B,v19.16B
7101a2c48c  mov v4.S[0x0],v2.S[0x0]
7101a2c490  ldr s5,[x9, #0x38]
7101a2c494  mov v4.S[0x1],v3.S[0x0]
7101a2c498  fadd s5,s6,s5
7101a2c49c  mov v4.S[0x2],v5.S[0x0]
7101a2c4a0  ldr x9,[x9, #0x18]
7101a2c4a4  cbnz x9,0x7101a2c474
7101a2c4a8  b 0x7101a2c4b4
7101a2c4ac  dup s3,v4.S[0x1]
7101a2c4b0  mov v2.16B,v4.16B
7101a2c4b4  ldr x9,[x23, #0x38]
7101a2c4b8  ldr x9,[x9]
7101a2c4bc  cbz x9,0x7101a2c51c
7101a2c4c0  ldr s7,[x9, #0x30]
7101a2c4c4  mov v6.16B,v19.16B
7101a2c4c8  add x10,x9,#0x34
7101a2c4cc  ldp s4,s5,[x9, #0x50]
7101a2c4d0  ldp s16,s17,[x9, #0x48]
7101a2c4d4  fmul s5,s5,s17
7101a2c4d8  mov v6.S[0x0],v7.S[0x0]
7101a2c4dc  fmul s4,s4,s16
7101a2c4e0  ld1 {v6.S}[1],[x10]
7101a2c4e4  add x10,x9,#0x38
7101a2c4e8  ld1 {v6.S}[2],[x10]
7101a2c4ec  fabs s4,s4
7101a2c4f0  fmov s16,0x3f000000
7101a2c4f4  ldrb w10,[x9, #0x5b]
7101a2c4f8  fmul s16,s4,s16
7101a2c4fc  fabs s5,s5
7101a2c500  and w11,w10,#0x3
7101a2c504  cmp w11,#0x2
7101a2c508  b.eq 0x7101a2c538
7101a2c50c  cmp w11,#0x1
7101a2c510  b.ne 0x7101a2c540
7101a2c514  fadd s7,s7,s16
7101a2c518  b 0x7101a2c53c
7101a2c51c  adrp x9,0x71052a8000
7101a2c520  ldr x9,[x9, #0xa88]
7101a2c524  fmov s4,wzr
7101a2c528  mov v5.16B,v4.16B
7101a2c52c  ldr q16,[x9]
7101a2c530  dup s7,v16.S[0x1]
7101a2c534  b 0x7101a2c5bc
7101a2c538  fsub s7,s7,s16
7101a2c53c  mov v6.S[0x0],v7.S[0x0]
7101a2c540  fmov s7,0x3f000000
7101a2c544  fmul s7,s5,s7
7101a2c548  ubfx w10,w10,#0x2,#0x2
7101a2c54c  cmp w10,#0x2
7101a2c550  b.eq 0x7101a2c568
7101a2c554  cmp w10,#0x1
7101a2c558  b.ne 0x7101a2c574
7101a2c55c  dup s16,v6.S[0x1]
7101a2c560  fsub s7,s16,s7
7101a2c564  b 0x7101a2c570
7101a2c568  dup s16,v6.S[0x1]
7101a2c56c  fadd s7,s7,s16
7101a2c570  mov v6.S[0x1],v7.S[0x0]
7101a2c574  ldr x9,[x9, #0x18]
7101a2c578  cbz x9,0x7101a2c5b4
7101a2c57c  ldp s7,s17,[x9, #0x30]
7101a2c580  fadd s16,s6,s7
7101a2c584  dup s7,v6.S[0x1]
7101a2c588  fadd s7,s7,s17
7101a2c58c  dup s18,v6.S[0x2]
7101a2c590  mov v6.16B,v19.16B
7101a2c594  mov v6.S[0x0],v16.S[0x0]
7101a2c598  ldr s17,[x9, #0x38]
7101a2c59c  mov v6.S[0x1],v7.S[0x0]
7101a2c5a0  fadd s17,s18,s17
7101a2c5a4  mov v6.S[0x2],v17.S[0x0]
7101a2c5a8  ldr x9,[x9, #0x18]
7101a2c5ac  cbnz x9,0x7101a2c57c
7101a2c5b0  b 0x7101a2c5bc
7101a2c5b4  dup s7,v6.S[0x1]
7101a2c5b8  mov v16.16B,v6.16B
7101a2c5bc  ldr x28,[x25, #0x238]
7101a2c5c0  ldr x21,[x25, #0x240]
7101a2c5c4  cmp x28,x21
7101a2c5c8  ldr x25,[sp, #0x60]
7101a2c5cc  cset w9,eq
7101a2c5d0  orr w8,w9,w8
7101a2c5d4  tbnz w8,#0x0,0x7101a2cf4c
7101a2c5d8  mov v6.16B,v19.16B
7101a2c5dc  mov v6.S[0x0],v0.S[0x0]
7101a2c5e0  fsub s0,s10,s3
7101a2c5e4  movi v3.4S,#0x3f, LSL #24
7101a2c5e8  fadd s2,s2,s9
7101a2c5ec  mov v6.S[0x1],v1.S[0x0]
7101a2c5f0  fadd s1,s16,s9
7101a2c5f4  mov v16.16B,v3.16B
7101a2c5f8  fmul v3.4S,v6.4S,v3.4S
7101a2c5fc  dup s6,v3.S[0x1]
7101a2c600  fsub s15,s0,s6
7101a2c604  fadd s11,s0,s6
7101a2c608  mov v0.16B,v19.16B
7101a2c60c  fsub s13,s2,s3
7101a2c610  mov v0.S[0x0],v4.S[0x0]
7101a2c614  fadd s14,s2,s3
7101a2c618  mov v0.S[0x1],v5.S[0x0]
7101a2c61c  fsub s2,s10,s7
7101a2c620  fmul v0.4S,v0.4S,v16.4S
7101a2c624  fsub s3,s1,s0
7101a2c628  fadd s4,s1,s0
7101a2c62c  dup s0,v0.S[0x1]
7101a2c630  fsub s12,s2,s0
7101a2c634  fadd s8,s2,s0
7101a2c638  add x19,x23,#0x10
7101a2c63c  str s3,[sp, #0x5c]
7101a2c640  str s4,[sp, #0x40]
7101a2c644  ldr x9,[x28, #0x8]
7101a2c648  ldr x8,[x9, #0x10]
7101a2c64c  ldr x8,[x8, #0x8]
7101a2c650  ldr w10,[x8, #0x484]
7101a2c654  cbnz w10,0x7101a2c664
7101a2c658  ldr w10,[x8, #0x488]
7101a2c65c  cmn w10,#0x1
7101a2c660  b.eq 0x7101a2cc94
7101a2c664  ldrb w10,[x9, #0x36]
7101a2c668  cbz w10,0x7101a2cc94
7101a2c66c  ldr x10,[x23, #0x40]
7101a2c670  cmp x10,x28
7101a2c674  b.eq 0x7101a2cc94
7101a2c678  ldr x9,[x9, #0x20]
7101a2c67c  ldr x9,[x9, #0x100]
7101a2c680  ldr q0,[x9, #0x60]
7101a2c684  dup s1,v0.S[0x1]
7101a2c688  fadd s0,s0,s9
7101a2c68c  fsub s1,s10,s1
7101a2c690  fcmp s15,s1
7101a2c694  fccmp s11,s1,#0x8,ls
7101a2c698  fccmp s14,s0,#0x8,ge
7101a2c69c  fccmp s13,s0,#0x2,ge
7101a2c6a0  b.ls 0x7101a2c6b8
7101a2c6a4  fcmp s12,s1
7101a2c6a8  fccmp s8,s1,#0x8,ls
7101a2c6ac  fccmp s4,s0,#0x8,ge
7101a2c6b0  fccmp s3,s0,#0x2,ge
7101a2c6b4  b.hi 0x7101a2cc94
7101a2c6b8  ldrb w9,[x8, #0x4aa]
7101a2c6bc  cbz w9,0x7101a2cc94
7101a2c6c0  ldrb w8,[x8, #0x1a8]
7101a2c6c4  tbz w8,#0x1,0x7101a2cc94
7101a2c6c8  str x28,[x23, #0x48]
7101a2c6cc  adrp x8,0x710532f000
7101a2c6d0  ldr x8,[x8, #0x8d0]
7101a2c6d4  ldr x0,[x8, #0x8]
7101a2c6d8  ldp x8,x9,[x0, #0x40]
7101a2c6dc  sub x9,x9,x8
7101a2c6e0  asr x9,x9,#0x3
7101a2c6e4  cmp x9,#0x3
7101a2c6e8  b.cc 0x7101a2c6fc
7101a2c6ec  ldr x26,[x8, #0x10]
7101a2c6f0  ldrb w8,[x0, #0x191]
7101a2c6f4  cbnz w8,0x7101a2c7a0
7101a2c6f8  b 0x7101a2c708
7101a2c6fc  mov x26,xzr
7101a2c700  ldrb w8,[x0, #0x191]
7101a2c704  cbnz w8,0x7101a2c7a0
7101a2c708  mov w2,#0x4
7101a2c70c  mov x1,x26
7101a2c710  bl 0x7103313f20
7101a2c714  ldr s4,[sp, #0x40]
7101a2c718  ldr s3,[sp, #0x5c]
7101a2c71c  movi v19.2D,#0x0
7101a2c720  orr x13,xzr,#-0x5555555555555556
7101a2c724  movk x13,#0xaaab
7101a2c728  tbz w0,#0x0,0x7101a2c7a0
7101a2c72c  add x0,sp,#0xd8
7101a2c730  mov x1,x26
7101a2c734  bl 0x71024076d0
7101a2c738  ldr s4,[sp, #0x40]
7101a2c73c  ldr s3,[sp, #0x5c]
7101a2c740  movi v19.2D,#0x0
7101a2c744  ldr x8,[sp, #0xe8]
7101a2c748  orr x13,xzr,#-0x5555555555555556
7101a2c74c  movk x13,#0xaaab
7101a2c750  ldr w26,[sp, #0x68]
7101a2c754  adrp x9,0x7104f73000
7101a2c758  add x9,x9,#0xd50
7101a2c75c  str x9,[sp, #0xe0]
7101a2c760  cbz x8,0x7101a2c7e0
7101a2c764  adrp x9,0x7106dd5000
7101a2c768  ldrb w9,[x9, #0x3a8]
7101a2c76c  cmp w9,#0x1
7101a2c770  b.ne 0x7101a2c7e0
7101a2c774  adrp x10,0x7106dd5000
7101a2c778  ldr w9,[sp, #0xf0]
7101a2c77c  ldr w10,[x10, #0x3ac]
7101a2c780  cmp w9,w10
7101a2c784  b.ne 0x7101a2c7e0
7101a2c788  ldr wzr,[x8, #0x38]!
7101a2c78c  ldaxr w9,[x8]
7101a2c790  sub w9,w9,#0x1
7101a2c794  stlxr w10,w9,[x8]
7101a2c798  cbnz w10,0x7101a2c78c
7101a2c79c  b 0x7101a2c7e0
7101a2c7a0  mov w8,#0x6500
7101a2c7a4  movk w8,#0x87, LSL #16
7101a2c7a8  stp wzr,w8,[sp, #0xf0]
7101a2c7ac  adrp x8,0x7104f73000
7101a2c7b0  add x8,x8,#0xd30
7101a2c7b4  ldr w26,[sp, #0x68]
7101a2c7b8  stp x8,xzr,[sp, #0xe0]
7101a2c7bc  mov x8,#-0x1
7101a2c7c0  str x8,[sp, #0x100]
7101a2c7c4  ldr x8,[sp, #0x20]
7101a2c7c8  strb wzr,[sp, #0xf8]
7101a2c7cc  str wzr,[sp, #0xd8]
7101a2c7d0  stp xzr,xzr,[x8]
7101a2c7d4  adrp x8,0x7104f73000
7101a2c7d8  add x8,x8,#0xd50
7101a2c7dc  str x8,[sp, #0xe0]
7101a2c7e0  str xzr,[sp, #0xe8]
7101a2c7e4  strb wzr,[sp, #0xf8]
7101a2c7e8  ldr x0,[x23, #0x50]
7101a2c7ec  cbz x0,0x7101a2cc94
7101a2c7f0  ldr x8,[x0]
7101a2c7f4  ldr x8,[x8, #0x60]
7101a2c7f8  mov w1,#0x1
7101a2c7fc  blr x8
7101a2c800  ldr x0,[x23, #0x50]
7101a2c804  ldr x8,[x0]
7101a2c808  ldr x8,[x8, #0x70]
7101a2c80c  mov w1,#0x1
7101a2c810  blr x8
7101a2c814  ldr x8,[x23, #0x50]
7101a2c818  ldr x9,[x8, #0x1b8]
7101a2c81c  cbz x9,0x7101a2c854
7101a2c820  add x10,x8,#0x1b8
7101a2c824  mov x8,x10
7101a2c828  ldr w11,[x9, #0x20]
7101a2c82c  cmp w11,#0x0
7101a2c830  cset w11,lt
7101a2c834  csel x8,x8,x9,lt
7101a2c838  ldr x9,[x9, w11, UXTW #0x3]
7101a2c83c  cbnz x9,0x7101a2c828
7101a2c840  cmp x8,x10
7101a2c844  b.eq 0x7101a2c854
7101a2c848  ldr w9,[x8, #0x20]
7101a2c84c  cmp w9,#0x0
7101a2c850  b.le 0x7101a2ca24
7101a2c854  ldr x8,[x23, #0x40]
7101a2c858  cbz x8,0x7101a2cc64
7101a2c85c  ldr x8,[x8, #0x8]
7101a2c860  ldr x8,[x8, #0x10]
7101a2c864  ldr x8,[x8, #0x8]
7101a2c868  ldrsw x27,[x8, #0x488]
7101a2c86c  add x0,sp,#0x128
7101a2c870  mov x1,x19
7101a2c874  bl 0x7103776390
7101a2c878  cmn w27,#0x1
7101a2c87c  b.eq 0x7101a2c8d4
7101a2c880  adrp x8,0x7105339000
7101a2c884  ldr x8,[x8, #0x8b0]
7101a2c888  ldrb w8,[x8, #0x8]
7101a2c88c  cmp w27,#0x9
7101a2c890  ccmp w8,#0x0,#0x4,ls
7101a2c894  adrp x8,0x7105339000
7101a2c898  add x8,x8,#0x830
7101a2c89c  b.eq 0x7101a2c8b0
7101a2c8a0  adrp x8,0x7105339000
7101a2c8a4  add x8,x8,#0x860
7101a2c8a8  ldr x8,[x8, x27, LSL #0x3]
7101a2c8ac  cbz x8,0x7101a2c8d4
7101a2c8b0  ldr x8,[x8, #0x10]
7101a2c8b4  ldr w8,[x8, #0x9c]
7101a2c8b8  sub w8,w8,#0x1
7101a2c8bc  cmp w8,#0x6
7101a2c8c0  b.hi 0x7101a2c8d4
7101a2c8c4  adrp x9,0x7104753000
7101a2c8c8  add x9,x9,#0xde0
7101a2c8cc  ldr w1,[x9, w8, SXTW #0x2]
7101a2c8d0  b 0x7101a2c8d8
7101a2c8d4  mov w1,wzr
7101a2c8d8  sub x0,x29,#0xe0
7101a2c8dc  bl 0x710339d9f0
7101a2c8e0  ldr x0,[sp, #0x130]
7101a2c8e4  ldr x1,[sp, #0x18]
7101a2c8e8  fmov s0,0x3f800000
7101a2c8ec  bl 0x7103778300
7101a2c8f0  adrp x8,0x7105339000
7101a2c8f4  ldr x8,[x8, #0x8b0]
7101a2c8f8  ldrb w8,[x8, #0x8]
7101a2c8fc  cmp w27,#0x9
7101a2c900  ccmp w8,#0x0,#0x4,ls
7101a2c904  adrp x8,0x7105339000
7101a2c908  add x8,x8,#0x830
7101a2c90c  b.eq 0x7101a2c920
7101a2c910  adrp x8,0x7105339000
7101a2c914  add x8,x8,#0x860
7101a2c918  ldr x8,[x8, x27, LSL #0x3]
7101a2c91c  cbz x8,0x7101a2c994
7101a2c920  ldr x0,[x8, #0x10]
7101a2c924  ldrb w8,[x0, #0xb8]
7101a2c928  cbz w8,0x7101a2c994
7101a2c92c  ldr x8,[x0]
7101a2c930  ldr x8,[x8, #0x20]
7101a2c934  blr x8
7101a2c938  sub w8,w0,#0x1
7101a2c93c  and w9,w8,#0xff
7101a2c940  cmp w9,#0xe
7101a2c944  b.hi 0x7101a2c994
7101a2c948  sxtb x8,w8
7101a2c94c  mov w9,#0x2e8a
7101a2c950  lsr x9,x9,x8
7101a2c954  tbnz w9,#0x0,0x7101a2c994
7101a2c958  adrp x9,0x7104753000
7101a2c95c  add x9,x9,#0xe00
7101a2c960  adrp x0,0x71042b2000
7101a2c964  add x0,x0,#0x952
7101a2c968  ldr w8,[x9, x8, LSL #0x2]
7101a2c96c  add w1,w8,#0x1
7101a2c970  add x8,sp,#0x138
7101a2c974  bl 0x71003a4ca0
7101a2c978  ldr w8,[sp, #0x13c]
7101a2c97c  cbz w8,0x7101a2c9a8
7101a2c980  ldr x0,[sp, #0x130]
7101a2c984  ldr x1,[sp, #0x8]
7101a2c988  fmov s0,0x3f800000
7101a2c98c  bl 0x7103778300
7101a2c990  b 0x7101a2c9a8
7101a2c994  mov w8,#0x9dc5
7101a2c998  movk w8,#0x811c, LSL #16
7101a2c99c  strb wzr,[sp, #0x140]
7101a2c9a0  str wzr,[sp, #0x13c]
7101a2c9a4  str w8,[sp, #0x138]
7101a2c9a8  ldr x26,[sp, #0x130]
7101a2c9ac  adrp x8,0x710523d000
7101a2c9b0  add x8,x8,#0x988
7101a2c9b4  stp x8,xzr,[sp, #0x128]
7101a2c9b8  cbz x26,0x7101a2c9dc
7101a2c9bc  ldr x0,[x26, #0x18]
7101a2c9c0  adrp x8,0x710523d000
7101a2c9c4  add x8,x8,#0x9a8
7101a2c9c8  stp x8,xzr,[x26, #0x10]
7101a2c9cc  cbz x0,0x7101a2c9d4
7101a2c9d0  bl 0x710392eb40
7101a2c9d4  mov x0,x26
7101a2c9d8  bl 0x710392eb40
7101a2c9dc  add x0,sp,#0x118
7101a2c9e0  mov x1,x19
7101a2c9e4  bl 0x7103776390
7101a2c9e8  cmn w27,#0x1
7101a2c9ec  b.eq 0x7101a2cb00
7101a2c9f0  cmp w27,#0x9
7101a2c9f4  b.hi 0x7101a2cad4
7101a2c9f8  adrp x8,0x7105339000
7101a2c9fc  ldr x8,[x8, #0x8b0]
7101a2ca00  ldrb w9,[x8, #0x8]
7101a2ca04  adrp x8,0x7105339000
7101a2ca08  add x8,x8,#0x830
7101a2ca0c  cbz w9,0x7101a2cadc
7101a2ca10  adrp x8,0x7105339000
7101a2ca14  add x8,x8,#0x860
7101a2ca18  ldr x8,[x8, x27, LSL #0x3]
7101a2ca1c  cbnz x8,0x7101a2cadc
7101a2ca20  b 0x7101a2cb00
7101a2ca24  ldr x27,[x8, #0x28]
7101a2ca28  cbz x27,0x7101a2c854
7101a2ca2c  ldr x8,[x27]
7101a2ca30  ldr x8,[x8, #0x218]
7101a2ca34  mov x0,x27
7101a2ca38  mov w1,wzr
7101a2ca3c  blr x8
7101a2ca40  ldr x8,[x27]
7101a2ca44  ldr x8,[x8, #0x410]
7101a2ca48  mov x0,x27
7101a2ca4c  blr x8
7101a2ca50  ldr x8,[x27]
7101a2ca54  ldr x8,[x8, #0x3f0]
7101a2ca58  mov x0,x27
7101a2ca5c  mov w1,wzr
7101a2ca60  blr x8
7101a2ca64  ldr x8,[x27]
7101a2ca68  ldr x8,[x8, #0x140]
7101a2ca6c  mov x0,x27
7101a2ca70  blr x8
7101a2ca74  cmp w0,#0x6
7101a2ca78  b.eq 0x7101a2caa4
7101a2ca7c  ldr x8,[x27]
7101a2ca80  ldr x8,[x8, #0x140]
7101a2ca84  mov x0,x27
7101a2ca88  blr x8
7101a2ca8c  cmp w0,#0x1
7101a2ca90  b.eq 0x7101a2caa4
7101a2ca94  ldr x8,[x27]
7101a2ca98  ldr x8,[x8, #0x400]
7101a2ca9c  mov x0,x27
7101a2caa0  blr x8
7101a2caa4  ldr x8,[x27]
7101a2caa8  ldr x8,[x8, #0x158]
7101a2caac  mov x0,x27
7101a2cab0  blr x8
7101a2cab4  tbnz w0,#0x0,0x7101a2c854
7101a2cab8  ldr x8,[x27]
7101a2cabc  ldr x8,[x8, #0x370]
7101a2cac0  mov x0,x27
7101a2cac4  blr x8
7101a2cac8  ldr x8,[x23, #0x40]
7101a2cacc  cbnz x8,0x7101a2c85c
7101a2cad0  b 0x7101a2cc64
7101a2cad4  adrp x8,0x7105339000
7101a2cad8  add x8,x8,#0x830
7101a2cadc  ldr x8,[x8, #0x10]
7101a2cae0  ldr w8,[x8, #0x9c]
7101a2cae4  sub w8,w8,#0x1
7101a2cae8  cmp w8,#0x6
7101a2caec  b.hi 0x7101a2cb00
7101a2caf0  adrp x9,0x7104753000
7101a2caf4  add x9,x9,#0xde0
7101a2caf8  ldr w1,[x9, w8, SXTW #0x2]
7101a2cafc  b 0x7101a2cb04
7101a2cb00  mov w1,wzr
7101a2cb04  sub x0,x29,#0xe0
7101a2cb08  bl 0x710339d9f0
7101a2cb0c  ldr x0,[sp, #0x120]
7101a2cb10  ldr x1,[sp, #0x18]
7101a2cb14  fmov s0,0x3f800000
7101a2cb18  bl 0x7103778300
7101a2cb1c  cmp w27,#0x9
7101a2cb20  b.hi 0x7101a2cb50
7101a2cb24  adrp x8,0x7105339000
7101a2cb28  ldr x8,[x8, #0x8b0]
7101a2cb2c  ldrb w9,[x8, #0x8]
7101a2cb30  adrp x8,0x7105339000
7101a2cb34  add x8,x8,#0x830
7101a2cb38  cbz w9,0x7101a2cb58
7101a2cb3c  adrp x8,0x7105339000
7101a2cb40  add x8,x8,#0x860
7101a2cb44  ldr x8,[x8, x27, LSL #0x3]
7101a2cb48  cbnz x8,0x7101a2cb58
7101a2cb4c  b 0x7101a2cbcc
7101a2cb50  adrp x8,0x7105339000
7101a2cb54  add x8,x8,#0x830
7101a2cb58  ldr x0,[x8, #0x10]
7101a2cb5c  ldrb w8,[x0, #0xb8]
7101a2cb60  cbz w8,0x7101a2cbcc
7101a2cb64  ldr x8,[x0]
7101a2cb68  ldr x8,[x8, #0x20]
7101a2cb6c  blr x8
7101a2cb70  sub w8,w0,#0x1
7101a2cb74  and w9,w8,#0xff
7101a2cb78  cmp w9,#0xe
7101a2cb7c  b.hi 0x7101a2cbcc
7101a2cb80  sxtb x8,w8
7101a2cb84  mov w9,#0x2e8a
7101a2cb88  lsr x9,x9,x8
7101a2cb8c  tbnz w9,#0x0,0x7101a2cbcc
7101a2cb90  adrp x9,0x7104753000
7101a2cb94  add x9,x9,#0xe00
7101a2cb98  adrp x0,0x71042b2000
7101a2cb9c  add x0,x0,#0x952
7101a2cba0  ldr w8,[x9, x8, LSL #0x2]
7101a2cba4  add w1,w8,#0x1
7101a2cba8  add x8,sp,#0x138
7101a2cbac  bl 0x71003a4ca0
7101a2cbb0  ldr w8,[sp, #0x13c]
7101a2cbb4  cbz w8,0x7101a2cbe0
7101a2cbb8  ldr x0,[sp, #0x120]
7101a2cbbc  ldr x1,[sp, #0x8]
7101a2cbc0  fmov s0,0x3f800000
7101a2cbc4  bl 0x7103778300
7101a2cbc8  b 0x7101a2cbe0
7101a2cbcc  mov w8,#0x9dc5
7101a2cbd0  movk w8,#0x811c, LSL #16
7101a2cbd4  strb wzr,[sp, #0x140]
7101a2cbd8  str wzr,[sp, #0x13c]
7101a2cbdc  str w8,[sp, #0x138]
7101a2cbe0  ldr x26,[sp, #0x120]
7101a2cbe4  adrp x8,0x710523d000
7101a2cbe8  add x8,x8,#0x988
7101a2cbec  stp x8,xzr,[sp, #0x118]
7101a2cbf0  cbz x26,0x7101a2cc14
7101a2cbf4  ldr x0,[x26, #0x18]
7101a2cbf8  adrp x8,0x710523d000
7101a2cbfc  add x8,x8,#0x9a8
7101a2cc00  stp x8,xzr,[x26, #0x10]
7101a2cc04  cbz x0,0x7101a2cc0c
7101a2cc08  bl 0x710392eb40
7101a2cc0c  mov x0,x26
7101a2cc10  bl 0x710392eb40
7101a2cc14  sub x0,x29,#0xe0
7101a2cc18  mov x1,x19
7101a2cc1c  bl 0x7103776390
7101a2cc20  sub x0,x29,#0xe0
7101a2cc24  mov w1,w27
7101a2cc28  bl 0x710337d0d0
7101a2cc2c  ldur x26,[x29, #-0xd8]
7101a2cc30  adrp x8,0x710523d000
7101a2cc34  add x8,x8,#0x988
7101a2cc38  stp x8,xzr,[x29, #-0xe0]
7101a2cc3c  cbz x26,0x7101a2cc60
7101a2cc40  ldr x0,[x26, #0x18]
7101a2cc44  adrp x8,0x710523d000
7101a2cc48  add x8,x8,#0x9a8
7101a2cc4c  stp x8,xzr,[x26, #0x10]
7101a2cc50  cbz x0,0x7101a2cc58
7101a2cc54  bl 0x710392eb40
7101a2cc58  mov x0,x26
7101a2cc5c  bl 0x710392eb40
7101a2cc60  ldr w26,[sp, #0x68]
7101a2cc64  ldr x0,[x23, #0x8]
7101a2cc68  fmov s0,0x3f800000
7101a2cc6c  adrp x1,0x71043df000
7101a2cc70  add x1,x1,#0xa37
7101a2cc74  bl 0x7103778300
7101a2cc78  ldr s3,[sp, #0x5c]
7101a2cc7c  ldr s4,[sp, #0x40]
7101a2cc80  movi v19.2D,#0x0
7101a2cc84  ldr w27,[sp, #0x70]
7101a2cc88  orr x13,xzr,#-0x5555555555555556
7101a2cc8c  movk x13,#0xaaab
7101a2cc90  strb wzr,[x23, #0x61]
7101a2cc94  add x28,x28,#0x10
7101a2cc98  cmp x28,x21
7101a2cc9c  b.ne 0x7101a2c644
7101a2cca0  b 0x7101a2cf4c
7101a2cca4  fsub s5,s5,s6
7101a2cca8  mov v4.S[0x0],v5.S[0x0]
7101a2ccac  fmov s5,0x3f000000
7101a2ccb0  fmul s5,s3,s5
7101a2ccb4  ubfx w11,w11,#0x2,#0x2
7101a2ccb8  cmp w11,#0x2
7101a2ccbc  b.eq 0x7101a2ccd4
7101a2ccc0  cmp w11,#0x1
7101a2ccc4  b.ne 0x7101a2cce0
7101a2ccc8  dup s6,v4.S[0x1]
7101a2cccc  fsub s5,s6,s5
7101a2ccd0  b 0x7101a2ccdc
7101a2ccd4  dup s6,v4.S[0x1]
7101a2ccd8  fadd s5,s5,s6
7101a2ccdc  mov v4.S[0x1],v5.S[0x0]
7101a2cce0  ldr x10,[x10, #0x18]
7101a2cce4  cbz x10,0x7101a2cd20
7101a2cce8  ldp s5,s7,[x10, #0x30]
7101a2ccec  fadd s6,s4,s5
7101a2ccf0  dup s5,v4.S[0x1]
7101a2ccf4  fadd s5,s5,s7
7101a2ccf8  dup s16,v4.S[0x2]
7101a2ccfc  mov v4.16B,v19.16B
7101a2cd00  mov v4.S[0x0],v6.S[0x0]
7101a2cd04  ldr s7,[x10, #0x38]
7101a2cd08  mov v4.S[0x1],v5.S[0x0]
7101a2cd0c  fadd s7,s16,s7
7101a2cd10  mov v4.S[0x2],v7.S[0x0]
7101a2cd14  ldr x10,[x10, #0x18]
7101a2cd18  cbnz x10,0x7101a2cce8
7101a2cd1c  b 0x7101a2cd28
7101a2cd20  dup s5,v4.S[0x1]
7101a2cd24  mov v6.16B,v4.16B
7101a2cd28  fadd s4,s6,s9
7101a2cd2c  mov v6.16B,v19.16B
7101a2cd30  mov v6.S[0x0],v2.S[0x0]
7101a2cd34  fsub s2,s10,s5
7101a2cd38  mov v6.S[0x1],v3.S[0x0]
7101a2cd3c  movi v3.4S,#0x3f, LSL #24
7101a2cd40  fmul v3.4S,v6.4S,v3.4S
7101a2cd44  fsub s5,s4,s3
7101a2cd48  fadd s4,s4,s3
7101a2cd4c  dup s3,v3.S[0x1]
7101a2cd50  fsub s6,s2,s3
7101a2cd54  fadd s2,s2,s3
7101a2cd58  fcmp s6,s0
7101a2cd5c  fccmp s2,s0,#0x8,ls
7101a2cd60  fccmp s4,s1,#0x8,ge
7101a2cd64  fccmp s5,s1,#0x2,ge
7101a2cd68  b.hi 0x7101a2cd74
7101a2cd6c  mov w10,wzr
7101a2cd70  b 0x7101a2cecc
7101a2cd74  ldr x10,[x23, #0x38]
7101a2cd78  ldr x10,[x10]
7101a2cd7c  cbz x10,0x7101a2cddc
7101a2cd80  ldr s5,[x10, #0x30]
7101a2cd84  mov v4.16B,v19.16B
7101a2cd88  add x11,x10,#0x34
7101a2cd8c  ldp s2,s3,[x10, #0x50]
7101a2cd90  ldp s6,s7,[x10, #0x48]
7101a2cd94  fmul s3,s3,s7
7101a2cd98  mov v4.S[0x0],v5.S[0x0]
7101a2cd9c  fmul s2,s2,s6
7101a2cda0  ld1 {v4.S}[1],[x11]
7101a2cda4  add x11,x10,#0x38
7101a2cda8  ld1 {v4.S}[2],[x11]
7101a2cdac  fabs s2,s2
7101a2cdb0  fmov s6,0x3f000000
7101a2cdb4  ldrb w11,[x10, #0x5b]
7101a2cdb8  fmul s6,s2,s6
7101a2cdbc  fabs s3,s3
7101a2cdc0  and w12,w11,#0x3
7101a2cdc4  cmp w12,#0x2
7101a2cdc8  b.eq 0x7101a2cdf8
7101a2cdcc  cmp w12,#0x1
7101a2cdd0  b.ne 0x7101a2ce00
7101a2cdd4  fadd s5,s5,s6
7101a2cdd8  b 0x7101a2cdfc
7101a2cddc  adrp x10,0x71052a8000
7101a2cde0  ldr x10,[x10, #0xa88]
7101a2cde4  fmov s2,wzr
7101a2cde8  mov v3.16B,v2.16B
7101a2cdec  ldr q5,[x10]
7101a2cdf0  dup s6,v5.S[0x1]
7101a2cdf4  b 0x7101a2ce7c
7101a2cdf8  fsub s5,s5,s6
7101a2cdfc  mov v4.S[0x0],v5.S[0x0]
7101a2ce00  fmov s5,0x3f000000
7101a2ce04  fmul s5,s3,s5
7101a2ce08  ubfx w11,w11,#0x2,#0x2
7101a2ce0c  cmp w11,#0x2
7101a2ce10  b.eq 0x7101a2ce28
7101a2ce14  cmp w11,#0x1
7101a2ce18  b.ne 0x7101a2ce34
7101a2ce1c  dup s6,v4.S[0x1]
7101a2ce20  fsub s5,s6,s5
7101a2ce24  b 0x7101a2ce30
7101a2ce28  dup s6,v4.S[0x1]
7101a2ce2c  fadd s5,s5,s6
7101a2ce30  mov v4.S[0x1],v5.S[0x0]
7101a2ce34  ldr x10,[x10, #0x18]
7101a2ce38  cbz x10,0x7101a2ce74
7101a2ce3c  ldp s5,s6,[x10, #0x30]
7101a2ce40  fadd s5,s4,s5
7101a2ce44  dup s7,v4.S[0x1]
7101a2ce48  fadd s6,s7,s6
7101a2ce4c  dup s16,v4.S[0x2]
7101a2ce50  mov v4.16B,v19.16B
7101a2ce54  mov v4.S[0x0],v5.S[0x0]
7101a2ce58  ldr s7,[x10, #0x38]
7101a2ce5c  mov v4.S[0x1],v6.S[0x0]
7101a2ce60  fadd s7,s16,s7
7101a2ce64  mov v4.S[0x2],v7.S[0x0]
7101a2ce68  ldr x10,[x10, #0x18]
7101a2ce6c  cbnz x10,0x7101a2ce3c
7101a2ce70  b 0x7101a2ce7c
7101a2ce74  dup s6,v4.S[0x1]
7101a2ce78  mov v5.16B,v4.16B
7101a2ce7c  mov v4.16B,v19.16B
7101a2ce80  mov v4.S[0x0],v2.S[0x0]
7101a2ce84  movi v2.4S,#0x3f, LSL #24
7101a2ce88  mov v4.S[0x1],v3.S[0x0]
7101a2ce8c  fadd s3,s5,s9
7101a2ce90  fmul v4.4S,v4.4S,v2.4S
7101a2ce94  fsub s2,s10,s6
7101a2ce98  fsub s5,s3,s4
7101a2ce9c  fadd s6,s3,s4
7101a2cea0  dup s3,v4.S[0x1]
7101a2cea4  fadd s4,s2,s3
7101a2cea8  fcmp s4,s0
7101a2ceac  fccmp s6,s1,#0x8,ge
7101a2ceb0  fccmp s5,s1,#0x2,ge
7101a2ceb4  b.ls 0x7101a2cec0
7101a2ceb8  mov w10,#0x1
7101a2cebc  b 0x7101a2cecc
7101a2cec0  fsub s1,s2,s3
7101a2cec4  fcmp s1,s0
7101a2cec8  cset w10,hi
7101a2cecc  ldr x9,[x9, #0x8]
7101a2ced0  ldr w11,[x9, #0x484]
7101a2ced4  cbnz w11,0x7101a2cee4
7101a2ced8  ldr w11,[x9, #0x488]
7101a2cedc  cmn w11,#0x1
7101a2cee0  b.eq 0x7101a2cef8
7101a2cee4  ldrb w8,[x8, #0x36]
7101a2cee8  cmp w8,#0x0
7101a2ceec  cset w8,ne
7101a2cef0  bic w8,w8,w10
7101a2cef4  tbnz w8,#0x0,0x7101a2cf34
7101a2cef8  ldr x0,[x23, #0x50]
7101a2cefc  orr w8,wzr,#0x3c
7101a2cf00  str w8,[x23, #0x58]
7101a2cf04  str xzr,[x23, #0x48]
7101a2cf08  bl 0x710376b960
7101a2cf0c  ldr x0,[x23, #0x8]
7101a2cf10  fmov s0,0x3f800000
7101a2cf14  mov x1,x20
7101a2cf18  bl 0x7103778300
7101a2cf1c  orr x13,xzr,#-0x5555555555555556
7101a2cf20  mov w8,#0x1
7101a2cf24  movi v19.2D,#0x0
7101a2cf28  movk x13,#0xaaab
7101a2cf2c  strb w8,[x23, #0x61]
7101a2cf30  b 0x7101a2cf4c
7101a2cf34  ldrb w8,[x9, #0x4aa]
7101a2cf38  cbz w8,0x7101a2cf4c
7101a2cf3c  ldrb w8,[x9, #0x1a8]
7101a2cf40  tbnz w8,#0x1,0x7101a2bc90
7101a2cf44  ldrb w8,[x9, #0x1ac]
7101a2cf48  tbnz w8,#0x1,0x7101a2bc90
7101a2cf4c  ldr x28,[sp, #0x90]
7101a2cf50  add x22,x22,#0x10
7101a2cf54  add x24,x24,#0x1
7101a2cf58  cmp x22,x25
7101a2cf5c  b.ne 0x7101a2bdb4
7101a2cf60  ldr w8,[x28, #0x174]
7101a2cf64  cbnz w8,0x7101a2cf7c
7101a2cf68  ldrb w8,[x28, #0xf89]
7101a2cf6c  cbnz w8,0x7101a2cf7c
7101a2cf70  ldr x8,[sp, #0x80]
7101a2cf74  ldr x8,[x8]
7101a2cf78  ldr w26,[x8, #0x25c]
7101a2cf7c  sub w8,w26,#0x1
7101a2cf80  cmp w8,#0x5
7101a2cf84  b.hi 0x7101a2e0ac
7101a2cf88  adrp x9,0x71044f7000
7101a2cf8c  add x9,x9,#0x618
7101a2cf90  ldrsw x8,[x9, x8, LSL #0x2]
7101a2cf94  add x8,x8,x9
7101a2cf98  br x8
7101a2cf9c  ldr w8,[x28, #0x16c]
7101a2cfa0  cmp w8,#0x1c
7101a2cfa4  b.hi 0x7101a2e0ac
7101a2cfa8  adrp x9,0x71044f7000
7101a2cfac  add x9,x9,#0x630
7101a2cfb0  ldrsw x8,[x9, x8, LSL #0x2]
7101a2cfb4  add x8,x8,x9
7101a2cfb8  br x8
7101a2cfbc  ldrb w8,[x28, #0x169]
7101a2cfc0  cmp w8,#0x0
7101a2cfc4  cset w1,eq
7101a2cfc8  mov w2,#0x1
7101a2cfcc  mov x0,x28
7101a2cfd0  bl 0x7101a2a270
7101a2cfd4  ldr w8,[x28, #0xf40]
7101a2cfd8  cmn w8,#0x1
7101a2cfdc  b.ne 0x7101a2cfec
7101a2cfe0  ldr w8,[x28, #0xf44]
7101a2cfe4  cmn w8,#0x1
7101a2cfe8  b.eq 0x7101a2d090
7101a2cfec  add x0,x28,#0xf18
7101a2cff0  mov w1,wzr
7101a2cff4  bl 0x710373b540
7101a2cff8  add x22,x28,#0xf20
7101a2cffc  mov x0,x22
7101a2d000  str wzr,[x28, #0xf18]
7101a2d004  bl 0x71039602c0
7101a2d008  adrp x8,0x7104f73000
7101a2d00c  add x8,x8,#0xd50
7101a2d010  str x8,[x28, #0xf20]
7101a2d014  ldr x8,[x28, #0xf28]
7101a2d018  cbz x8,0x7101a2d054
7101a2d01c  adrp x9,0x7106dd5000
7101a2d020  ldrb w9,[x9, #0x3a8]
7101a2d024  cmp w9,#0x1
7101a2d028  b.ne 0x7101a2d054
7101a2d02c  adrp x10,0x7106dd5000
7101a2d030  ldr w9,[x28, #0xf30]
7101a2d034  ldr w10,[x10, #0x3ac]
7101a2d038  cmp w9,w10
7101a2d03c  b.ne 0x7101a2d054
7101a2d040  ldr wzr,[x8, #0x38]!
7101a2d044  ldaxr w9,[x8]
7101a2d048  sub w9,w9,#0x1
7101a2d04c  stlxr w10,w9,[x8]
7101a2d050  cbnz w10,0x7101a2d044
7101a2d054  mov w8,#0x6500
7101a2d058  movk w8,#0x87, LSL #16
7101a2d05c  stp xzr,xzr,[x22, #0x10]
7101a2d060  stp xzr,xzr,[x22]
7101a2d064  str w8,[x28, #0xf34]
7101a2d068  adrp x8,0x7104f73000
7101a2d06c  add x8,x8,#0xd30
7101a2d070  str x8,[x28, #0xf20]
7101a2d074  mov x8,#-0x1
7101a2d078  str xzr,[x28, #0xf28]
7101a2d07c  str wzr,[x28, #0xf30]
7101a2d080  strb wzr,[x28, #0xf38]
7101a2d084  str x8,[x28, #0xf40]
7101a2d088  str xzr,[x28, #0xf48]
7101a2d08c  str wzr,[x28, #0xf54]
7101a2d090  ldr w1,[x28, #0x16c]
7101a2d094  ldrb w3,[x28, #0x169]
7101a2d098  sub x0,x29,#0xe0
7101a2d09c  ldrb w4,[x28, #0x16a]
7101a2d0a0  add x20,x28,#0xf40
7101a2d0a4  ldrb w2,[x28, #0x158]
7101a2d0a8  bl 0x7101a11b40
7101a2d0ac  ldur w8,[x29, #-0xe0]
7101a2d0b0  str w8,[x28, #0xf18]
7101a2d0b4  ldur x8,[x29, #-0xd0]
7101a2d0b8  cbz x8,0x7101a2d4d4
7101a2d0bc  ldr w9,[x28, #0xf34]
7101a2d0c0  mov w10,#0x6500
7101a2d0c4  movk w10,#0x87, LSL #16
7101a2d0c8  cmp w9,w10
7101a2d0cc  b.ne 0x7101a2d6b0
7101a2d0d0  adrp x9,0x7106dd5000
7101a2d0d4  ldr w9,[x9, #0x3ac]
7101a2d0d8  ldr w10,[x28, #0xf30]
7101a2d0dc  cmp w10,w9
7101a2d0e0  b.ne 0x7101a2dcd8
7101a2d0e4  ldr x10,[x28, #0xf28]
7101a2d0e8  add x9,x28,#0xf28
7101a2d0ec  cbz x10,0x7101a2d114
7101a2d0f0  adrp x11,0x7106dd5000
7101a2d0f4  ldrb w11,[x11, #0x3a8]
7101a2d0f8  cmp w11,#0x1
7101a2d0fc  b.ne 0x7101a2d114
7101a2d100  ldr wzr,[x10, #0x38]!
7101a2d104  ldaxr w11,[x10]
7101a2d108  sub w11,w11,#0x1
7101a2d10c  stlxr w12,w11,[x10]
7101a2d110  cbnz w12,0x7101a2d104
7101a2d114  str xzr,[x28, #0xf28]
7101a2d118  add x10,x28,#0xf38
7101a2d11c  strb wzr,[x28, #0xf38]
7101a2d120  b 0x7101a2dce4
7101a2d124  ldrb w8,[x28, #0x169]
7101a2d128  cbz w8,0x7101a2e0ac
7101a2d12c  stp xzr,xzr,[sp, #0x148]
7101a2d130  stp xzr,xzr,[sp, #0x138]
7101a2d134  ldr x21,[x28, #0x250]
7101a2d138  ldr x23,[x28, #0x258]
7101a2d13c  cmp x21,x23
7101a2d140  b.eq 0x7101a2d4c4
7101a2d144  sub x9,x23,#0x10
7101a2d148  ldr w8,[x28, #0xf74]
7101a2d14c  mov w20,wzr
7101a2d150  sub x9,x9,x21
7101a2d154  lsr x10,x9,#0x4
7101a2d158  add w9,w10,#0x1
7101a2d15c  and x9,x9,#0x1
7101a2d160  cbz x10,0x7101a2d6d0
7101a2d164  sub x11,x9,#0x1
7101a2d168  sub x11,x11,x10
7101a2d16c  mov x10,x21
7101a2d170  ldr x12,[x10, #0x8]
7101a2d174  ldr x13,[x10, #0x18]
7101a2d178  add x10,x10,#0x20
7101a2d17c  ldr w12,[x12, #0x1f8]
7101a2d180  ldr w13,[x13, #0x1f8]
7101a2d184  cmp w12,#0x3
7101a2d188  cinc w12,w20,ne
7101a2d18c  cmp w13,#0x3
7101a2d190  cinc w20,w12,ne
7101a2d194  adds x11,x11,#0x2
7101a2d198  b.ne 0x7101a2d170
7101a2d19c  cbz x9,0x7101a2d1b0
7101a2d1a0  ldr x9,[x10, #0x8]
7101a2d1a4  ldr w9,[x9, #0x1f8]
7101a2d1a8  cmp w9,#0x3
7101a2d1ac  cinc w20,w20,ne
7101a2d1b0  sub w10,w20,#0x2
7101a2d1b4  cmp w10,#0x6
7101a2d1b8  b.hi 0x7101a2d520
7101a2d1bc  adrp x9,0x7104543000
7101a2d1c0  add x9,x9,#0xf70
7101a2d1c4  mov x12,xzr
7101a2d1c8  ldr w14,[x9, w10, SXTW #0x2]
7101a2d1cc  adrp x9,0x71050a8000
7101a2d1d0  add x9,x9,#0x8a0
7101a2d1d4  ldr x21,[x9, w10, SXTW #0x3]
7101a2d1d8  and x13,x14,#0x1
7101a2d1dc  mov w11,wzr
7101a2d1e0  cbz w10,0x7101a2dd60
7101a2d1e4  add x9,x21,#0x44
7101a2d1e8  sub x14,x14,x13
7101a2d1ec  ldur w15,[x9, #-0x24]
7101a2d1f0  ldr w16,[x9], #0x48
7101a2d1f4  add w11,w15,w11
7101a2d1f8  add x12,x12,#0x2
7101a2d1fc  cmp x14,x12
7101a2d200  add w11,w16,w11
7101a2d204  b.ne 0x7101a2d1ec
7101a2d208  sub x9,x12,#0x1
7101a2d20c  cbz x13,0x7101a2d224
7101a2d210  mov w9,#0x24
7101a2d214  madd x9,x12,x9,x21
7101a2d218  ldr w9,[x9, #0x20]
7101a2d21c  add w11,w9,w11
7101a2d220  mov x9,x12
7101a2d224  cbz w10,0x7101a2dd68
7101a2d228  adrp x10,0x7105239000
7101a2d22c  add x10,x10,#0x1c0
7101a2d230  mov w13,wzr
7101a2d234  ldp w14,w12,[x10]
7101a2d238  add w11,w11,#0x1
7101a2d23c  ldp w16,w17,[x10, #0x8]
7101a2d240  add x15,x21,#0x20
7101a2d244  eor w0,w14,w14, LSL #0xb
7101a2d248  mov w14,w12
7101a2d24c  mov w12,w16
7101a2d250  mov w16,w17
7101a2d254  eor w17,w0,w0, LSR #0x8
7101a2d258  eor w17,w17,w16
7101a2d25c  eor w17,w17,w16, LSR #0x13
7101a2d260  udiv w0,w17,w11
7101a2d264  mov x18,xzr
7101a2d268  mov x1,x15
7101a2d26c  stp w14,w12,[x10]
7101a2d270  stp w16,w17,[x10, #0x8]
7101a2d274  msub w0,w0,w11,w17
7101a2d278  ldr w2,[x1]
7101a2d27c  sub w0,w0,w2
7101a2d280  cmp w0,#0x1
7101a2d284  b.lt 0x7101a2d29c
7101a2d288  cmp x18,x9
7101a2d28c  add x18,x18,#0x1
7101a2d290  add x1,x1,#0x24
7101a2d294  b.cc 0x7101a2d278
7101a2d298  b 0x7101a2d2a0
7101a2d29c  mov w13,w18
7101a2d2a0  mov w22,w13
7101a2d2a4  cmp w13,w8
7101a2d2a8  mov w13,w8
7101a2d2ac  b.eq 0x7101a2d244
7101a2d2b0  b 0x7101a2dd6c
7101a2d2b4  ldr w1,[x28, #0x160]
7101a2d2b8  ldr w8,[x28, #0x180]
7101a2d2bc  cmp w1,w8
7101a2d2c0  b.ge 0x7101a2e0ac
7101a2d2c4  cmp w1,#0x4
7101a2d2c8  b.lt 0x7101a2d4a4
7101a2d2cc  ldrb w9,[x28, #0x16b]
7101a2d2d0  cbz w9,0x7101a2d4a4
7101a2d2d4  ldrb w8,[x28, #0xf8f]
7101a2d2d8  cbnz w8,0x7101a2e0ac
7101a2d2dc  adrp x9,0x710532f000
7101a2d2e0  ldr x19,[x9, #0x820]
7101a2d2e4  adrp x9,0x710532f000
7101a2d2e8  ldr x9,[x9, #0x730]
7101a2d2ec  ldr x9,[x9, #0x8]
7101a2d2f0  ldrb w8,[x28, #0x15c]
7101a2d2f4  cmp w8,#0x2
7101a2d2f8  ldr x0,[x9, #0x1c8]
7101a2d2fc  b.ls 0x7101a2e040
7101a2d300  mov x22,#0x582f
7101a2d304  movk x22,#0xccae, LSL #16
7101a2d308  movk x22,#0xff2d, LSL #32
7101a2d30c  b 0x7101a2e04c
7101a2d310  ldr w1,[x28, #0x160]
7101a2d314  cmp w1,#0x2
7101a2d318  b.lt 0x7101a2e0ac
7101a2d31c  ldr w9,[x28, #0x180]
7101a2d320  sub w8,w1,#0x1
7101a2d324  cmp w9,w8
7101a2d328  csel w8,w9,w8,lt
7101a2d32c  cmp w1,w8
7101a2d330  b.eq 0x7101a2d34c
7101a2d334  mov w2,#0x1
7101a2d338  mov x0,x28
7101a2d33c  str w8,[x28, #0x160]
7101a2d340  bl 0x7101a26200
7101a2d344  mov x0,x28
7101a2d348  bl 0x7101a1f7d0
7101a2d34c  ldr w8,[x28, #0x16c]
7101a2d350  cmp w8,#0xa
7101a2d354  b.ne 0x7101a2e0ac
7101a2d358  ldr w1,[x28, #0x164]
7101a2d35c  mov x0,x28
7101a2d360  bl 0x7101a26ec0
7101a2d364  ldrb w8,[x28, #0xf80]
7101a2d368  cbz w8,0x7101a2e0b4
7101a2d36c  ldrb w9,[x28, #0xf87]
7101a2d370  cbz w9,0x7101a2e0b4
7101a2d374  mov w9,#0x1
7101a2d378  str w9,[x28, #0x174]
7101a2d37c  cbnz w9,0x7101a2e0bc
7101a2d380  ldrb w9,[x28, #0xf89]
7101a2d384  cbnz w9,0x7101a2e0bc
7101a2d388  ldr x9,[x28, #0x198]
7101a2d38c  ldr x9,[x9]
7101a2d390  ldr x9,[x9]
7101a2d394  ldr x9,[x9, #0x600]
7101a2d398  ldrb w10,[x9, #0x4aa]
7101a2d39c  cbz w8,0x7101a2d494
7101a2d3a0  cbz w10,0x7101a2d3d8
7101a2d3a4  ldrb w8,[x9, #0x1ac]
7101a2d3a8  tbz w8,#0x1,0x7101a2d3d8
7101a2d3ac  ldr x9,[x28, #0x240]
7101a2d3b0  ldr x8,[x28, #0x238]
7101a2d3b4  cmp x9,x8
7101a2d3b8  b.eq 0x7101a30af4
7101a2d3bc  ldr x8,[x8, #0x8]
7101a2d3c0  ldrb w8,[x8, #0x36]
7101a2d3c4  cbz w8,0x7101a2d3d8
7101a2d3c8  ldr x0,[sp, #0x80]
7101a2d3cc  mov w1,wzr
7101a2d3d0  mov w2,wzr
7101a2d3d4  bl 0x7103771be0
7101a2d3d8  mov w20,wzr
7101a2d3dc  b 0x7101a2d760
7101a2d3e0  orr w8,wzr,#0x3
7101a2d3e4  str w8,[x28, #0x174]
7101a2d3e8  ldrb w8,[x28, #0xf80]
7101a2d3ec  cbnz w8,0x7101a2d36c
7101a2d3f0  b 0x7101a2e0b4
7101a2d3f4  ldrb w8,[x28, #0xf80]
7101a2d3f8  cbnz w8,0x7101a2e0ac
7101a2d3fc  ldrb w8,[x28, #0xf87]
7101a2d400  cbz w8,0x7101a2e0ac
7101a2d404  adrp x19,0x710532f000
7101a2d408  ldr x8,[x19, #0x8d0]
7101a2d40c  ldr x0,[x8, #0x8]
7101a2d410  ldrb w8,[x0, #0x191]
7101a2d414  cbnz w8,0x7101a2d528
7101a2d418  mov x22,#0x9adc
7101a2d41c  movk x22,#0xd3b1, LSL #16
7101a2d420  movk x22,#0x13, LSL #32
7101a2d424  mov w2,#0x4
7101a2d428  mov x1,x22
7101a2d42c  bl 0x7103313f20
7101a2d430  tbz w0,#0x0,0x7101a2d528
7101a2d434  sub x0,x29,#0xe0
7101a2d438  mov x1,x22
7101a2d43c  bl 0x71024076d0
7101a2d440  ldur x8,[x29, #-0xd0]
7101a2d444  adrp x9,0x7104f73000
7101a2d448  add x9,x9,#0xd50
7101a2d44c  stur x9,[x29, #-0xd8]
7101a2d450  cbz x8,0x7101a2d554
7101a2d454  adrp x8,0x7106dd5000
7101a2d458  ldrb w8,[x8, #0x3a8]
7101a2d45c  cmp w8,#0x1
7101a2d460  b.ne 0x7101a2d554
7101a2d464  adrp x9,0x7106dd5000
7101a2d468  ldur w8,[x29, #-0xc8]
7101a2d46c  ldr w9,[x9, #0x3ac]
7101a2d470  cmp w8,w9
7101a2d474  b.ne 0x7101a2d554
7101a2d478  ldur x8,[x29, #-0xd0]
7101a2d47c  ldr wzr,[x8, #0x38]!
7101a2d480  ldaxr w9,[x8]
7101a2d484  sub w9,w9,#0x1
7101a2d488  stlxr w10,w9,[x8]
7101a2d48c  cbnz w10,0x7101a2d480
7101a2d490  b 0x7101a2d554
7101a2d494  cbz w10,0x7101a2d6dc
7101a2d498  ldrb w8,[x9, #0x278]
7101a2d49c  ubfx w20,w8,#0x4,#0x1
7101a2d4a0  b 0x7101a2d6e0
7101a2d4a4  add w9,w1,#0x1
7101a2d4a8  cmp w8,w9
7101a2d4ac  csinc w8,w8,w1,lt
7101a2d4b0  cmp w1,#0x0
7101a2d4b4  csinc w8,w8,wzr,ge
7101a2d4b8  cmp w1,w8
7101a2d4bc  b.ne 0x7101a2d334
7101a2d4c0  b 0x7101a2d34c
7101a2d4c4  str wzr,[x28, #0xf74]
7101a2d4c8  ldrb w8,[x28, #0xf80]
7101a2d4cc  cbnz w8,0x7101a2d36c
7101a2d4d0  b 0x7101a2e0b4
7101a2d4d4  ldr x8,[x28, #0xf28]
7101a2d4d8  cbz x8,0x7101a2d514
7101a2d4dc  adrp x9,0x7106dd5000
7101a2d4e0  ldrb w9,[x9, #0x3a8]
7101a2d4e4  cmp w9,#0x1
7101a2d4e8  b.ne 0x7101a2d514
7101a2d4ec  adrp x10,0x7106dd5000
7101a2d4f0  ldr w9,[x28, #0xf30]
7101a2d4f4  ldr w10,[x10, #0x3ac]
7101a2d4f8  cmp w9,w10
7101a2d4fc  b.ne 0x7101a2d514
7101a2d500  ldr wzr,[x8, #0x38]!
7101a2d504  ldaxr w9,[x8]
7101a2d508  sub w9,w9,#0x1
7101a2d50c  stlxr w10,w9,[x8]
7101a2d510  cbnz w10,0x7101a2d504
7101a2d514  add x10,x28,#0xf38
7101a2d518  str xzr,[x28, #0xf28]
7101a2d51c  b 0x7101a2dcfc
7101a2d520  mov w22,wzr
7101a2d524  b 0x7101a2de60
7101a2d528  mov w8,#0x6500
7101a2d52c  movk w8,#0x87, LSL #16
7101a2d530  stp wzr,w8,[x29, #-0xc8]
7101a2d534  mov x8,#-0x1
7101a2d538  stp x8,xzr,[x29, #-0xb8]
7101a2d53c  adrp x8,0x7104f73000
7101a2d540  add x8,x8,#0xd50
7101a2d544  sturb wzr,[x29, #-0xc0]
7101a2d548  stur wzr,[x29, #-0xe0]
7101a2d54c  stur xzr,[x29, #-0xa8]
7101a2d550  stp x8,xzr,[x29, #-0xd8]
7101a2d554  ldr x8,[x19, #0x8d0]
7101a2d558  stur xzr,[x29, #-0xd0]
7101a2d55c  sturb wzr,[x29, #-0xc0]
7101a2d560  ldr x0,[x8, #0x8]
7101a2d564  ldrb w8,[x0, #0x191]
7101a2d568  cbnz w8,0x7101a2d5e8
7101a2d56c  mov x22,#0x1361
7101a2d570  movk x22,#0xa306, LSL #16
7101a2d574  movk x22,#0x17, LSL #32
7101a2d578  mov w2,#0x4
7101a2d57c  mov x1,x22
7101a2d580  bl 0x7103313f20
7101a2d584  tbz w0,#0x0,0x7101a2d5e8
7101a2d588  add x0,sp,#0x138
7101a2d58c  mov x1,x22
7101a2d590  bl 0x71024076d0
7101a2d594  ldr x8,[sp, #0x148]
7101a2d598  adrp x9,0x7104f73000
7101a2d59c  add x9,x9,#0xd50
7101a2d5a0  str x9,[sp, #0x140]
7101a2d5a4  cbz x8,0x7101a2d618
7101a2d5a8  adrp x8,0x7106dd5000
7101a2d5ac  ldrb w8,[x8, #0x3a8]
7101a2d5b0  cmp w8,#0x1
7101a2d5b4  b.ne 0x7101a2d618
7101a2d5b8  adrp x9,0x7106dd5000
7101a2d5bc  ldr w8,[sp, #0x150]
7101a2d5c0  ldr w9,[x9, #0x3ac]
7101a2d5c4  cmp w8,w9
7101a2d5c8  b.ne 0x7101a2d618
7101a2d5cc  ldr x8,[sp, #0x148]
7101a2d5d0  ldr wzr,[x8, #0x38]!
7101a2d5d4  ldaxr w9,[x8]
7101a2d5d8  sub w9,w9,#0x1
7101a2d5dc  stlxr w10,w9,[x8]
7101a2d5e0  cbnz w10,0x7101a2d5d4
7101a2d5e4  b 0x7101a2d618
7101a2d5e8  mov w8,#0x6500
7101a2d5ec  movk w8,#0x87, LSL #16
7101a2d5f0  str w8,[sp, #0x154]
7101a2d5f4  mov x8,#-0x1
7101a2d5f8  stp x8,xzr,[sp, #0x160]
7101a2d5fc  adrp x8,0x7104f73000
7101a2d600  add x8,x8,#0xd50
7101a2d604  str wzr,[sp, #0x150]
7101a2d608  strb wzr,[sp, #0x158]
7101a2d60c  str wzr,[sp, #0x138]
7101a2d610  str xzr,[sp, #0x170]
7101a2d614  stp x8,xzr,[sp, #0x140]
7101a2d618  str xzr,[sp, #0x148]
7101a2d61c  strb wzr,[sp, #0x158]
7101a2d620  ldr x19,[x28, #0x238]
7101a2d624  ldr x20,[x28, #0x240]
7101a2d628  cmp x19,x20
7101a2d62c  b.eq 0x7101a2d6a8
7101a2d630  fmov s8,0x3f800000
7101a2d634  mov x22,#0x1026
7101a2d638  movk x22,#0xf795, LSL #16
7101a2d63c  mov w21,#0x488
7101a2d640  mov w23,#0x48c
7101a2d644  adrp x24,0x71052c5000
7101a2d648  movk x22,#0x18, LSL #32
7101a2d64c  ldr x8,[x19, #0x8]
7101a2d650  ldr x8,[x8, #0x10]
7101a2d654  ldr x8,[x8, #0x8]
7101a2d658  ldr w9,[x8, #0x484]
7101a2d65c  cmp w9,#0x2
7101a2d660  csel x9,x23,x21,eq
7101a2d664  ldr w1,[x8, x9, LSL #0x0]
7101a2d668  cmn w1,#0x1
7101a2d66c  b.eq 0x7101a2d69c
7101a2d670  ldr x8,[x24, #0x120]
7101a2d674  ldr x0,[x8, #0x8]
7101a2d678  mov v0.16B,v8.16B
7101a2d67c  mov v1.16B,v8.16B
7101a2d680  mov w4,#0x1
7101a2d684  mov x2,x22
7101a2d688  mov w3,wzr
7101a2d68c  mov w5,wzr
7101a2d690  mov w6,wzr
7101a2d694  mov w7,wzr
7101a2d698  bl 0x710175dfc0
7101a2d69c  add x19,x19,#0x10
7101a2d6a0  cmp x20,x19
7101a2d6a4  b.ne 0x7101a2d64c
7101a2d6a8  mov w8,#0x1
7101a2d6ac  b 0x7101a2d3e4
7101a2d6b0  ldp x9,x10,[x29, #-0xb8]
7101a2d6b4  ldur x11,[x29, #-0xa8]
7101a2d6b8  str x9,[x20]
7101a2d6bc  adrp x9,0x7104f73000
7101a2d6c0  add x9,x9,#0xd50
7101a2d6c4  stp x10,x11,[x20, #0x8]
7101a2d6c8  stur x9,[x29, #-0xd8]
7101a2d6cc  b 0x7101a2dd24
7101a2d6d0  mov x10,x21
7101a2d6d4  cbnz x9,0x7101a2d1a0
7101a2d6d8  b 0x7101a2d1b0
7101a2d6dc  mov w20,wzr
7101a2d6e0  ldr x8,[x28, #0x238]
7101a2d6e4  ldr x9,[x28, #0x240]
7101a2d6e8  cmp x8,x9
7101a2d6ec  b.eq 0x7101a2d760
7101a2d6f0  ldr x11,[x8, #0x8]
7101a2d6f4  ldr x10,[x11, #0x10]
7101a2d6f8  ldrb w11,[x11, #0x36]
7101a2d6fc  cbz w11,0x7101a2d730
7101a2d700  ldr x10,[x10, #0x8]
7101a2d704  ldr w12,[x28, #0xf78]
7101a2d708  ldrb w11,[x10, #0x4aa]
7101a2d70c  cbz w11,0x7101a2d73c
7101a2d710  ldr w13,[x10, #0x344]
7101a2d714  cmp w12,w13
7101a2d718  b.gt 0x7101a2d754
7101a2d71c  cbz w11,0x7101a2d74c
7101a2d720  ldrb w10,[x10, #0x278]
7101a2d724  ubfx w10,w10,#0x4,#0x1
7101a2d728  orr w20,w20,w10
7101a2d72c  b 0x7101a2d754
7101a2d730  ldr x10,[x10, #0x8]
7101a2d734  str wzr,[x10, #0x344]
7101a2d738  b 0x7101a2d754
7101a2d73c  mov w13,wzr
7101a2d740  cmp w12,w13
7101a2d744  b.le 0x7101a2d71c
7101a2d748  b 0x7101a2d754
7101a2d74c  mov w10,wzr
7101a2d750  orr w20,w20,wzr
7101a2d754  add x8,x8,#0x10
7101a2d758  cmp x9,x8
7101a2d75c  b.ne 0x7101a2d6f0
7101a2d760  ldrb w8,[x28, #0xf86]
7101a2d764  and w9,w20,#0x1
7101a2d768  cmp w8,w9
7101a2d76c  b.eq 0x7101a2d938
7101a2d770  ldr x8,[x28, #0xe28]
7101a2d774  ldr x0,[x8]
7101a2d778  tbz w20,#0x0,0x7101a2d860
7101a2d77c  cbz x0,0x7101a2d790
7101a2d780  ldr x8,[x0]
7101a2d784  ldr x8,[x8, #0x320]
7101a2d788  mov w1,#0x1
7101a2d78c  blr x8
7101a2d790  ldr w8,[x28, #0xf00]
7101a2d794  cmn w8,#0x1
7101a2d798  b.ne 0x7101a2d930
7101a2d79c  ldr w8,[x28, #0xf04]
7101a2d7a0  cmn w8,#0x1
7101a2d7a4  b.ne 0x7101a2d930
7101a2d7a8  adrp x8,0x710532f000
7101a2d7ac  ldr x8,[x8, #0x8d0]
7101a2d7b0  ldr x0,[x8, #0x8]
7101a2d7b4  ldrb w8,[x0, #0x191]
7101a2d7b8  add x21,x28,#0xf00
7101a2d7bc  cbnz w8,0x7101a2e394
7101a2d7c0  mov x22,#0x90f3
7101a2d7c4  movk x22,#0x29a, LSL #16
7101a2d7c8  movk x22,#0x1a, LSL #32
7101a2d7cc  mov w2,#0x4
7101a2d7d0  mov x1,x22
7101a2d7d4  bl 0x7103313f20
7101a2d7d8  tbz w0,#0x0,0x7101a2e394
7101a2d7dc  sub x0,x29,#0xe0
7101a2d7e0  mov x1,x22
7101a2d7e4  bl 0x71024076d0
7101a2d7e8  ldur w9,[x29, #-0xe0]
7101a2d7ec  ldur x8,[x29, #-0xd0]
7101a2d7f0  str w9,[x28, #0xed8]
7101a2d7f4  cbz x8,0x7101a2e3c4
7101a2d7f8  ldr w9,[x28, #0xef4]
7101a2d7fc  mov w10,#0x6500
7101a2d800  movk w10,#0x87, LSL #16
7101a2d804  cmp w9,w10
7101a2d808  b.ne 0x7101a309ec
7101a2d80c  adrp x9,0x7106dd5000
7101a2d810  ldr w9,[x9, #0x3ac]
7101a2d814  ldr w10,[x28, #0xef0]
7101a2d818  cmp w10,w9
7101a2d81c  b.ne 0x7101a30a0c
7101a2d820  ldr x10,[x28, #0xee8]
7101a2d824  add x9,x28,#0xee8
7101a2d828  cbz x10,0x7101a2d850
7101a2d82c  adrp x11,0x7106dd5000
7101a2d830  ldrb w11,[x11, #0x3a8]
7101a2d834  cmp w11,#0x1
7101a2d838  b.ne 0x7101a2d850
7101a2d83c  ldr wzr,[x10, #0x38]!
7101a2d840  ldaxr w11,[x10]
7101a2d844  sub w11,w11,#0x1
7101a2d848  stlxr w12,w11,[x10]
7101a2d84c  cbnz w12,0x7101a2d840
7101a2d850  str xzr,[x28, #0xee8]
7101a2d854  add x10,x28,#0xef8
7101a2d858  strb wzr,[x28, #0xef8]
7101a2d85c  b 0x7101a30a18
7101a2d860  cbz x0,0x7101a2d874
7101a2d864  ldr x8,[x0]
7101a2d868  ldr x8,[x8, #0x328]
7101a2d86c  mov w1,wzr
7101a2d870  blr x8
7101a2d874  ldr w8,[x28, #0xf00]
7101a2d878  cmn w8,#0x1
7101a2d87c  b.ne 0x7101a2d88c
7101a2d880  ldr w8,[x28, #0xf04]
7101a2d884  cmn w8,#0x1
7101a2d888  b.eq 0x7101a2d930
7101a2d88c  add x0,x28,#0xed8
7101a2d890  mov w1,wzr
7101a2d894  bl 0x710373b540
7101a2d898  add x22,x28,#0xee0
7101a2d89c  mov x0,x22
7101a2d8a0  str wzr,[x28, #0xed8]
7101a2d8a4  bl 0x71039602c0
7101a2d8a8  adrp x8,0x7104f73000
7101a2d8ac  add x8,x8,#0xd50
7101a2d8b0  str x8,[x28, #0xee0]
7101a2d8b4  ldr x8,[x28, #0xee8]
7101a2d8b8  cbz x8,0x7101a2d8f4
7101a2d8bc  adrp x9,0x7106dd5000
7101a2d8c0  ldrb w9,[x9, #0x3a8]
7101a2d8c4  cmp w9,#0x1
7101a2d8c8  b.ne 0x7101a2d8f4
7101a2d8cc  adrp x10,0x7106dd5000
7101a2d8d0  ldr w9,[x28, #0xef0]
7101a2d8d4  ldr w10,[x10, #0x3ac]
7101a2d8d8  cmp w9,w10
7101a2d8dc  b.ne 0x7101a2d8f4
7101a2d8e0  ldr wzr,[x8, #0x38]!
7101a2d8e4  ldaxr w9,[x8]
7101a2d8e8  sub w9,w9,#0x1
7101a2d8ec  stlxr w10,w9,[x8]
7101a2d8f0  cbnz w10,0x7101a2d8e4
7101a2d8f4  mov w8,#0x6500
7101a2d8f8  movk w8,#0x87, LSL #16
7101a2d8fc  stp xzr,xzr,[x22, #0x10]
7101a2d900  stp xzr,xzr,[x22]
7101a2d904  str w8,[x28, #0xef4]
7101a2d908  adrp x8,0x7104f73000
7101a2d90c  add x8,x8,#0xd30
7101a2d910  str x8,[x28, #0xee0]
7101a2d914  mov x8,#-0x1
7101a2d918  str xzr,[x28, #0xee8]
7101a2d91c  str wzr,[x28, #0xef0]
7101a2d920  strb wzr,[x28, #0xef8]
7101a2d924  str x8,[x28, #0xf00]
7101a2d928  str xzr,[x28, #0xf08]
7101a2d92c  str wzr,[x28, #0xf14]
7101a2d930  and w8,w20,#0x1
7101a2d934  strb w8,[x28, #0xf86]
7101a2d938  cbz w8,0x7101a2d958
7101a2d93c  ldr x8,[x28, #0xe28]
7101a2d940  ldr x0,[x8]
7101a2d944  cbz x0,0x7101a2d964
7101a2d948  ldr x8,[x0]
7101a2d94c  ldr x8,[x8, #0x330]
7101a2d950  blr x8
7101a2d954  tbnz w0,#0x0,0x7101a2d964
7101a2d958  ldr x8,[x28, #0xe18]
7101a2d95c  ldr w8,[x8, #0x25c]
7101a2d960  cbnz w8,0x7101a2e0bc
7101a2d964  ldr w8,[x28, #0xf00]
7101a2d968  cmn w8,#0x1
7101a2d96c  b.ne 0x7101a2d97c
7101a2d970  ldr w8,[x28, #0xf04]
7101a2d974  cmn w8,#0x1
7101a2d978  b.eq 0x7101a2da20
7101a2d97c  add x0,x28,#0xed8
7101a2d980  mov w1,wzr
7101a2d984  bl 0x710373b540
7101a2d988  add x22,x28,#0xee0
7101a2d98c  mov x0,x22
7101a2d990  str wzr,[x28, #0xed8]
7101a2d994  bl 0x71039602c0
7101a2d998  adrp x8,0x7104f73000
7101a2d99c  add x8,x8,#0xd50
7101a2d9a0  str x8,[x28, #0xee0]
7101a2d9a4  ldr x8,[x28, #0xee8]
7101a2d9a8  cbz x8,0x7101a2d9e4
7101a2d9ac  adrp x9,0x7106dd5000
7101a2d9b0  ldrb w9,[x9, #0x3a8]
7101a2d9b4  cmp w9,#0x1
7101a2d9b8  b.ne 0x7101a2d9e4
7101a2d9bc  adrp x10,0x7106dd5000
7101a2d9c0  ldr w9,[x28, #0xef0]
7101a2d9c4  ldr w10,[x10, #0x3ac]
7101a2d9c8  cmp w9,w10
7101a2d9cc  b.ne 0x7101a2d9e4
7101a2d9d0  ldr wzr,[x8, #0x38]!
7101a2d9d4  ldaxr w9,[x8]
7101a2d9d8  sub w9,w9,#0x1
7101a2d9dc  stlxr w10,w9,[x8]
7101a2d9e0  cbnz w10,0x7101a2d9d4
7101a2d9e4  mov w8,#0x6500
7101a2d9e8  movk w8,#0x87, LSL #16
7101a2d9ec  stp xzr,xzr,[x22, #0x10]
7101a2d9f0  stp xzr,xzr,[x22]
7101a2d9f4  str w8,[x28, #0xef4]
7101a2d9f8  adrp x8,0x7104f73000
7101a2d9fc  add x8,x8,#0xd30
7101a2da00  str x8,[x28, #0xee0]
7101a2da04  mov x8,#-0x1
7101a2da08  str xzr,[x28, #0xee8]
7101a2da0c  str wzr,[x28, #0xef0]
7101a2da10  strb wzr,[x28, #0xef8]
7101a2da14  str x8,[x28, #0xf00]
7101a2da18  str xzr,[x28, #0xf08]
7101a2da1c  str wzr,[x28, #0xf14]
7101a2da20  ldr w8,[x28, #0x170]
7101a2da24  cmp w8,#0x1
7101a2da28  b.ne 0x7101a2da5c
7101a2da2c  adrp x9,0x710532f000
7101a2da30  ldr x19,[x9, #0x820]
7101a2da34  adrp x9,0x710532f000
7101a2da38  ldr x9,[x9, #0x730]
7101a2da3c  ldr x9,[x9, #0x8]
7101a2da40  ldrb w8,[x28, #0xf82]
7101a2da44  ldr x0,[x9, #0x1c8]
7101a2da48  cbz w8,0x7101a2dc68
7101a2da4c  mov x22,#0x366b
7101a2da50  movk x22,#0x41ae, LSL #16
7101a2da54  movk x22,#0xff1b, LSL #32
7101a2da58  b 0x7101a2dc74
7101a2da5c  ldr w8,[x28, #0x16c]
7101a2da60  cmp w8,#0x5
7101a2da64  b.ne 0x7101a2daac
7101a2da68  ldrb w8,[x28, #0xcbc]
7101a2da6c  cbnz w8,0x7101a2da78
7101a2da70  ldr w8,[x28, #0xcb8]
7101a2da74  cbz w8,0x7101a2daac
7101a2da78  ldrb w8,[x28, #0x15c]
7101a2da7c  cmp w8,#0x3
7101a2da80  b.cc 0x7101a2daac
7101a2da84  adrp x8,0x710532f000
7101a2da88  ldr x19,[x8, #0x820]
7101a2da8c  adrp x8,0x710532f000
7101a2da90  ldr x8,[x8, #0x730]
7101a2da94  ldr x8,[x8, #0x8]
7101a2da98  ldr x0,[x8, #0x1c8]
7101a2da9c  mov x22,#0x3c9e
7101a2daa0  movk x22,#0x2961, LSL #16
7101a2daa4  movk x22,#0xff24, LSL #32
7101a2daa8  b 0x7101a2dc74
7101a2daac  mov w8,#0x2
7101a2dab0  str w8,[x28, #0x174]
7101a2dab4  ldr x8,[x28, #0x198]
7101a2dab8  ldr x8,[x8]
7101a2dabc  ldr x0,[x8]
7101a2dac0  mov w1,wzr
7101a2dac4  bl 0x71037760f0
7101a2dac8  adrp x8,0x710532f000
7101a2dacc  ldr x8,[x8, #0x8d0]
7101a2dad0  ldr x0,[x8, #0x8]
7101a2dad4  ldp x8,x9,[x0, #0x40]
7101a2dad8  sub x9,x9,x8
7101a2dadc  asr x9,x9,#0x3
7101a2dae0  cmp x9,#0x4
7101a2dae4  b.cc 0x7101a2dba0
7101a2dae8  ldr x22,[x8, #0x18]
7101a2daec  ldrb w8,[x0, #0x191]
7101a2daf0  cbnz w8,0x7101a2dc1c
7101a2daf4  b 0x7101a2dbac
7101a2daf8  adrp x8,0x7105314000
7101a2dafc  add x8,x8,#0x4d8
7101a2db00  ldarb w8,[x8]
7101a2db04  tbz w8,#0x0,0x7101a30b00
7101a2db08  adrp x8,0x710530a000
7101a2db0c  ldrb w8,[x8, #0x9c0]
7101a2db10  cbnz w8,0x7101a2cfbc
7101a2db14  b 0x7101a2e0ac
7101a2db18  ldrb w8,[x28, #0xf84]
7101a2db1c  eor w19,w8,#0x1
7101a2db20  adrp x8,0x7105314000
7101a2db24  add x8,x8,#0x4d8
7101a2db28  strb w19,[x28, #0xf84]
7101a2db2c  ldarb w8,[x8]
7101a2db30  tbz w8,#0x0,0x7101a30b40
7101a2db34  adrp x8,0x7105308000
7101a2db38  mov x0,x28
7101a2db3c  strb w19,[x8, #0x134]
7101a2db40  bl 0x7101a19000
7101a2db44  ldrb w8,[x28, #0xf80]
7101a2db48  cbnz w8,0x7101a2d36c
7101a2db4c  b 0x7101a2e0b4
7101a2db50  ldr w8,[x28, #0x164]
7101a2db54  add w8,w8,#0x1
7101a2db58  mov w9,#0x5556
7101a2db5c  movk w9,#0x5555, LSL #16
7101a2db60  smull x9,w8,w9
7101a2db64  lsr x10,x9,#0x3f
7101a2db68  lsr x9,x9,#0x20
7101a2db6c  add w9,w9,w10
7101a2db70  add w9,w9,w9, LSL #0x1
7101a2db74  sub w8,w8,w9
7101a2db78  asr w9,w8,#0x1f
7101a2db7c  and w9,w9,#0x3
7101a2db80  add w1,w8,w9
7101a2db84  mov x0,x28
7101a2db88  bl 0x7101a26ec0
7101a2db8c  mov x0,x28
7101a2db90  bl 0x7101a27570
7101a2db94  ldrb w8,[x28, #0xf80]
7101a2db98  cbnz w8,0x7101a2d36c
7101a2db9c  b 0x7101a2e0b4
7101a2dba0  mov x22,xzr
7101a2dba4  ldrb w8,[x0, #0x191]
7101a2dba8  cbnz w8,0x7101a2dc1c
7101a2dbac  mov w2,#0x4
7101a2dbb0  mov x1,x22
7101a2dbb4  bl 0x7103313f20
7101a2dbb8  tbz w0,#0x0,0x7101a2dc1c
7101a2dbbc  sub x0,x29,#0xe0
7101a2dbc0  mov x1,x22
7101a2dbc4  bl 0x71024076d0
7101a2dbc8  ldur x8,[x29, #-0xd0]
7101a2dbcc  adrp x9,0x7104f73000
7101a2dbd0  add x9,x9,#0xd50
7101a2dbd4  stur x9,[x29, #-0xd8]
7101a2dbd8  cbz x8,0x7101a2dc48
7101a2dbdc  adrp x8,0x7106dd5000
7101a2dbe0  ldrb w8,[x8, #0x3a8]
7101a2dbe4  cmp w8,#0x1
7101a2dbe8  b.ne 0x7101a2dc48
7101a2dbec  adrp x9,0x7106dd5000
7101a2dbf0  ldur w8,[x29, #-0xc8]
7101a2dbf4  ldr w9,[x9, #0x3ac]
7101a2dbf8  cmp w8,w9
7101a2dbfc  b.ne 0x7101a2dc48
7101a2dc00  ldur x8,[x29, #-0xd0]
7101a2dc04  ldr wzr,[x8, #0x38]!
7101a2dc08  ldaxr w9,[x8]
7101a2dc0c  sub w9,w9,#0x1
7101a2dc10  stlxr w10,w9,[x8]
7101a2dc14  cbnz w10,0x7101a2dc08
7101a2dc18  b 0x7101a2dc48
7101a2dc1c  mov w8,#0x6500
7101a2dc20  movk w8,#0x87, LSL #16
7101a2dc24  stp wzr,w8,[x29, #-0xc8]
7101a2dc28  mov x8,#-0x1
7101a2dc2c  stp x8,xzr,[x29, #-0xb8]
7101a2dc30  adrp x8,0x7104f73000
7101a2dc34  add x8,x8,#0xd50
7101a2dc38  sturb wzr,[x29, #-0xc0]
7101a2dc3c  stur wzr,[x29, #-0xe0]
7101a2dc40  stur xzr,[x29, #-0xa8]
7101a2dc44  stp x8,xzr,[x29, #-0xd8]
7101a2dc48  stur xzr,[x29, #-0xd0]
7101a2dc4c  sturb wzr,[x29, #-0xc0]
7101a2dc50  ldrsw x8,[x28, #0x134]
7101a2dc54  cmp w8,#0x13
7101a2dc58  b.cs 0x7101a30afc
7101a2dc5c  add x8,x28,x8, LSL #0x2
7101a2dc60  mov w9,#0x5
7101a2dc64  b 0x7101a2dcc8
7101a2dc68  mov x22,#0x89d5
7101a2dc6c  movk x22,#0x7da4, LSL #16
7101a2dc70  movk x22,#0xff17, LSL #32
7101a2dc74  movk x22,#0x58ff, LSL #48
7101a2dc78  mov x1,x22
7101a2dc7c  bl 0x7103291150
7101a2dc80  tbz w0,#0x0,0x7101a2dc9c
7101a2dc84  ldr x0,[x19, #0x10]
7101a2dc88  mov x1,x22
7101a2dc8c  bl 0x71032edf70
7101a2dc90  ldp x0,x1,[x19, #0x8]
7101a2dc94  bl 0x71032f1bb0
7101a2dc98  b 0x7101a2dca4
7101a2dc9c  ldr x8,[x19, #0x8]
7101a2dca0  str wzr,[x8, #0x118]
7101a2dca4  ldr w8,[x28, #0x134]
7101a2dca8  cmp w8,#0x11
7101a2dcac  b.gt 0x7101a2e0bc
7101a2dcb0  add w8,w8,#0x1
7101a2dcb4  cmp w8,#0x13
7101a2dcb8  str w8,[x28, #0x134]
7101a2dcbc  b.cs 0x7101a30afc
7101a2dcc0  add x8,x28,w8, SXTW  #0x2
7101a2dcc4  mov w9,#0x2
7101a2dcc8  str w9,[x8, #0xe8]
7101a2dccc  ldrb w8,[x28, #0xf81]
7101a2dcd0  cbz w8,0x7101a2e0c4
7101a2dcd4  b 0x7101a2e0d0
7101a2dcd8  str w9,[x28, #0xf30]
7101a2dcdc  add x9,x28,#0xf28
7101a2dce0  add x10,x28,#0xf38
7101a2dce4  str x8,[x9]
7101a2dce8  add x8,x8,#0x38
7101a2dcec  ldaxr w9,[x8]
7101a2dcf0  add w9,w9,#0x1
7101a2dcf4  stlxr w11,w9,[x8]
7101a2dcf8  cbnz w11,0x7101a2dcec
7101a2dcfc  strb wzr,[x10]
7101a2dd00  ldp x9,x10,[x29, #-0xb8]
7101a2dd04  ldur x8,[x29, #-0xd0]
7101a2dd08  ldur x11,[x29, #-0xa8]
7101a2dd0c  str x9,[x20]
7101a2dd10  adrp x9,0x7104f73000
7101a2dd14  add x9,x9,#0xd50
7101a2dd18  stp x10,x11,[x20, #0x8]
7101a2dd1c  stur x9,[x29, #-0xd8]
7101a2dd20  cbz x8,0x7101a2e0ac
7101a2dd24  adrp x9,0x7106dd5000
7101a2dd28  ldrb w9,[x9, #0x3a8]
7101a2dd2c  cmp w9,#0x1
7101a2dd30  b.ne 0x7101a2e0ac
7101a2dd34  adrp x10,0x7106dd5000
7101a2dd38  ldur w9,[x29, #-0xc8]
7101a2dd3c  ldr w10,[x10, #0x3ac]
7101a2dd40  cmp w9,w10
7101a2dd44  b.ne 0x7101a2e0ac
7101a2dd48  ldr wzr,[x8, #0x38]!
7101a2dd4c  ldaxr w9,[x8]
7101a2dd50  sub w9,w9,#0x1
7101a2dd54  stlxr w10,w9,[x8]
7101a2dd58  cbnz w10,0x7101a2dd4c
7101a2dd5c  b 0x7101a2e0ac
7101a2dd60  cbz x13,0x7101a2d224
7101a2dd64  b 0x7101a2d210
7101a2dd68  mov w22,wzr
7101a2dd6c  adrp x8,0x7104469000
7101a2dd70  add x8,x8,#0xb20
7101a2dd74  adrp x0,0x7105239000
7101a2dd78  add x0,x0,#0x1c0
7101a2dd7c  ldp x9,x8,[x8]
7101a2dd80  stp x9,x8,[sp, #0xd8]
7101a2dd84  orr w8,wzr,#0x3
7101a2dd88  sub x1,x29,#0xe0
7101a2dd8c  stp xzr,x8,[x29, #-0xe0]
7101a2dd90  bl 0x710137bc30
7101a2dd94  cbz x0,0x7101a2ddac
7101a2dd98  lsl x8,x0,#0x2
7101a2dd9c  add x9,sp,#0xd8
7101a2dda0  ldr w10,[x9, x8, LSL #0x0]
7101a2dda4  str w10,[sp, #0xd8]
7101a2dda8  str wzr,[x9, x8, LSL #0x0]
7101a2ddac  mov w8,#0x2
7101a2ddb0  adrp x0,0x7105239000
7101a2ddb4  add x0,x0,#0x1c0
7101a2ddb8  sub x1,x29,#0xe0
7101a2ddbc  add x19,sp,#0xd8
7101a2ddc0  stp xzr,x8,[x29, #-0xe0]
7101a2ddc4  bl 0x710137bc30
7101a2ddc8  cbz x0,0x7101a2dde4
7101a2ddcc  orr x8,x19,#0x4
7101a2ddd0  lsl x9,x0,#0x2
7101a2ddd4  ldr w10,[sp, #0xdc]
7101a2ddd8  ldr w11,[x8, x9, LSL #0x0]
7101a2dddc  str w11,[sp, #0xdc]
7101a2dde0  str w10,[x8, x9, LSL #0x0]
7101a2dde4  mov w8,#0x1
7101a2dde8  adrp x0,0x7105239000
7101a2ddec  add x0,x0,#0x1c0
7101a2ddf0  sub x1,x29,#0xe0
7101a2ddf4  stp xzr,x8,[x29, #-0xe0]
7101a2ddf8  bl 0x710137bc30
7101a2ddfc  cbz x0,0x7101a2de18
7101a2de00  add x8,x19,#0x8
7101a2de04  lsl x9,x0,#0x2
7101a2de08  ldr w10,[sp, #0xe0]
7101a2de0c  ldr w11,[x8, x9, LSL #0x0]
7101a2de10  str w11,[sp, #0xe0]
7101a2de14  str w10,[x8, x9, LSL #0x0]
7101a2de18  cmp w20,#0x1
7101a2de1c  b.lt 0x7101a2de58
7101a2de20  mov w10,#0x24
7101a2de24  smaddl x10,w22,w10,x21
7101a2de28  mov x8,xzr
7101a2de2c  sxtw x9,w20
7101a2de30  add x11,sp,#0xd8
7101a2de34  add x12,sp,#0x138
7101a2de38  ldrsw x13,[x10, x8, LSL #0x2]
7101a2de3c  cmp w13,#0x4
7101a2de40  b.cs 0x7101a30afc
7101a2de44  ldr w13,[x11, x13, LSL #0x2]
7101a2de48  str w13,[x12, x8, LSL #0x2]
7101a2de4c  add x8,x8,#0x1
7101a2de50  cmp x8,x9
7101a2de54  b.lt 0x7101a2de38
7101a2de58  ldr x21,[x28, #0x250]
7101a2de5c  ldr x23,[x28, #0x258]
7101a2de60  cmp x21,x23
7101a2de64  str w22,[x28, #0xf74]
7101a2de68  b.eq 0x7101a2e0ac
7101a2de6c  mov w8,wzr
7101a2de70  add x19,sp,#0x138
7101a2de74  mov w22,#0xffffffff
7101a2de78  mov w20,#0x1
7101a2de7c  ldr x25,[x21, #0x8]
7101a2de80  ldr w1,[x25, #0x1f8]
7101a2de84  cmp w1,#0x3
7101a2de88  b.eq 0x7101a2df14
7101a2de8c  ldr w2,[x19, w8, SXTW #0x2]
7101a2de90  ldrb w3,[x25, #0x6bb]
7101a2de94  ldr x0,[x25, #0x5e8]
7101a2de98  add w24,w8,#0x1
7101a2de9c  str w2,[x25, #0x1fc]
7101a2dea0  bl 0x7101a000c0
7101a2dea4  ldr w8,[x25, #0x1f8]
7101a2dea8  cmp w8,#0x2
7101a2deac  b.ne 0x7101a2ded0
7101a2deb0  ldrb w8,[x25, #0x6bd]
7101a2deb4  cbz w8,0x7101a2df08
7101a2deb8  ldr x8,[x25, #0x5e8]
7101a2debc  ldr x8,[x8, #0x80]
7101a2dec0  ldr x0,[x8, #0x10]
7101a2dec4  cbz x0,0x7101a2df08
7101a2dec8  add x1,x25,#0x2c0
7101a2decc  b 0x7101a2defc
7101a2ded0  cbnz w8,0x7101a2df08
7101a2ded4  ldrb w8,[x25, #0x1c4]
7101a2ded8  cmp w8,#0xff
7101a2dedc  b.eq 0x7101a2df08
7101a2dee0  ldr w8,[x25, #0x394]
7101a2dee4  cbnz w8,0x7101a2df08
7101a2dee8  ldr x8,[x25, #0x5e8]
7101a2deec  ldr x8,[x8, #0x80]
7101a2def0  ldr x0,[x8, #0x10]
7101a2def4  cbz x0,0x7101a2df08
7101a2def8  add x1,x25,#0x1d0
7101a2defc  mov w3,#0x1
7101a2df00  mov w2,w22
7101a2df04  bl 0x71037a2270
7101a2df08  ldr x8,[x21, #0x8]
7101a2df0c  strb w20,[x8, #0x6ba]
7101a2df10  mov w8,w24
7101a2df14  add x21,x21,#0x10
7101a2df18  cmp x23,x21
7101a2df1c  b.ne 0x7101a2de7c
7101a2df20  ldr x20,[x28, #0x250]
7101a2df24  ldr x21,[x28, #0x258]
7101a2df28  cmp x20,x21
7101a2df2c  b.eq 0x7101a2e0ac
7101a2df30  fmov s8,0x3f800000
7101a2df34  sub x8,x29,#0xe0
7101a2df38  add x22,x28,#0xde8
7101a2df3c  add x23,x8,#0x8
7101a2df40  orr w27,wzr,#0x18
7101a2df44  mov w19,#0xb0
7101a2df48  ldr x8,[x20, #0x8]
7101a2df4c  ldr w24,[x8, #0x1f8]
7101a2df50  ldrb w9,[x8, #0x6bb]
7101a2df54  cbz w9,0x7101a2df60
7101a2df58  ldr w25,[x8, #0x1fc]
7101a2df5c  b 0x7101a2df64
7101a2df60  mov w25,#0xffffffff
7101a2df64  ldrsw x9,[x8, #0x150]
7101a2df68  cmp w9,#0x8
7101a2df6c  b.cs 0x7101a30afc
7101a2df70  ldr x26,[x28, #0xdd0]
7101a2df74  madd x28,x9,x27,x26
7101a2df78  ldr w8,[x8, #0x154]
7101a2df7c  ldr w2,[x28, #0xe0]!
7101a2df80  cmn w2,#0x1
7101a2df84  stp w8,w24,[x28, #0x8]
7101a2df88  str w25,[x28, #0x10]
7101a2df8c  b.eq 0x7101a2dfdc
7101a2df90  sub x0,x29,#0xe0
7101a2df94  mov x1,x26
7101a2df98  bl 0x71019f08a0
7101a2df9c  ldp x9,x10,[x26]
7101a2dfa0  sub x10,x10,x9
7101a2dfa4  mov x11,#0x8ba3
7101a2dfa8  movk x11,#0xba2e, LSL #16
7101a2dfac  movk x11,#0xa2e8, LSL #32
7101a2dfb0  movk x11,#0x2e8b, LSL #48
7101a2dfb4  asr x10,x10,#0x4
7101a2dfb8  mul x10,x10,x11
7101a2dfbc  ldrsw x8,[x28]
7101a2dfc0  cmp x10,x8
7101a2dfc4  b.ls 0x7101a30b9c
7101a2dfc8  madd x8,x8,x19,x9
7101a2dfcc  ldr x0,[x8, #0x20]
7101a2dfd0  mov v0.16B,v8.16B
7101a2dfd4  mov x1,x23
7101a2dfd8  bl 0x7103778300
7101a2dfdc  ldr x8,[x20, #0x8]
7101a2dfe0  ldr w1,[x8, #0x150]
7101a2dfe4  ldr w2,[x8, #0x154]
7101a2dfe8  ldr w5,[x8, #0x158]
7101a2dfec  mov x0,x22
7101a2dff0  mov w3,w24
7101a2dff4  mov w4,w25
7101a2dff8  bl 0x71032d0830
7101a2dffc  ldr x8,[x20, #0x8]
7101a2e000  ldr x9,[x8, #0x678]
7101a2e004  cbz x9,0x7101a2e02c
7101a2e008  ldr x9,[x9, #0x8]
7101a2e00c  ldr w1,[x9, #0x28]
7101a2e010  ldr w8,[x8, #0x150]
7101a2e014  cmp w1,w8
7101a2e018  b.ne 0x7101a2e02c
7101a2e01c  ldr x0,[x9, #0x20]
7101a2e020  mov w2,w24
7101a2e024  mov w3,w25
7101a2e028  bl 0x71032d2e70
7101a2e02c  ldr x28,[sp, #0x90]
7101a2e030  add x20,x20,#0x10
7101a2e034  cmp x21,x20
7101a2e038  b.ne 0x7101a2df48
7101a2e03c  b 0x7101a2e0ac
7101a2e040  mov x22,#0xed44
7101a2e044  movk x22,#0x39a1, LSL #16
7101a2e048  movk x22,#0xff25, LSL #32
7101a2e04c  movk x22,#0x58ff, LSL #48
7101a2e050  mov x1,x22
7101a2e054  bl 0x7103291150
7101a2e058  tbz w0,#0x0,0x7101a2e074
7101a2e05c  ldr x0,[x19, #0x10]
7101a2e060  mov x1,x22
7101a2e064  bl 0x71032edf70
7101a2e068  ldp x0,x1,[x19, #0x8]
7101a2e06c  bl 0x71032f1bb0
7101a2e070  b 0x7101a2e07c
7101a2e074  ldr x8,[x19, #0x8]
7101a2e078  str wzr,[x8, #0x118]
7101a2e07c  ldr w8,[x28, #0x134]
7101a2e080  cmp w8,#0x11
7101a2e084  b.gt 0x7101a2e0a4
7101a2e088  add w8,w8,#0x1
7101a2e08c  cmp w8,#0x13
7101a2e090  str w8,[x28, #0x134]
7101a2e094  b.cs 0x7101a30afc
7101a2e098  add x8,x28,w8, SXTW  #0x2
7101a2e09c  mov w9,#0x2
7101a2e0a0  str w9,[x8, #0xe8]
7101a2e0a4  mov w8,#0x1
7101a2e0a8  strb w8,[x28, #0xf8f]
7101a2e0ac  ldrb w8,[x28, #0xf80]
7101a2e0b0  cbnz w8,0x7101a2d36c
7101a2e0b4  ldr w9,[x28, #0x174]
7101a2e0b8  cbz w9,0x7101a2d380
7101a2e0bc  ldrb w8,[x28, #0xf81]
7101a2e0c0  cbnz w8,0x7101a2e0d0
7101a2e0c4  ldr w9,[sp, #0x34]
7101a2e0c8  eor w9,w9,#0x1
7101a2e0cc  cbz w9,0x7101a2e110
7101a2e0d0  ldr x9,[x28, #0x238]
7101a2e0d4  ldr x10,[x28, #0x240]
7101a2e0d8  cmp x9,x10
7101a2e0dc  b.eq 0x7101a2e10c
7101a2e0e0  ldr x11,[x9, #0x8]
7101a2e0e4  ldr x11,[x11, #0x10]
7101a2e0e8  ldr x12,[x11, #0x8]
7101a2e0ec  ldr w11,[x12, #0x48c]
7101a2e0f0  ldr w12,[x12, #0x498]
7101a2e0f4  cmn w11,#0x1
7101a2e0f8  ccmp w12,#0x0,#0x0,ne
7101a2e0fc  b.eq 0x7101a2e33c
7101a2e100  add x9,x9,#0x10
7101a2e104  cmp x10,x9
7101a2e108  b.ne 0x7101a2e0e0
7101a2e10c  cbnz w8,0x7101a2f108
7101a2e110  ldr w8,[x28, #0x174]
7101a2e114  cbnz w8,0x7101a2f108
7101a2e118  ldrb w8,[x28, #0xf89]
7101a2e11c  cbnz w8,0x7101a2f108
7101a2e120  ldr x0,[x28, #0x190]
7101a2e124  bl 0x710337b690
7101a2e128  ldr w8,[x28, #0x170]
7101a2e12c  cbnz w8,0x7101a2e2f0
7101a2e130  ldr x20,[x28, #0x268]
7101a2e134  ldr x21,[x28, #0x270]
7101a2e138  cmp x20,x21
7101a2e13c  b.eq 0x7101a2e2f0
7101a2e140  ldr x8,[x20, #0x8]
7101a2e144  ldrb w9,[x8, #0x60]
7101a2e148  cbz w9,0x7101a2e2e4
7101a2e14c  ldr x8,[x8, #0x40]
7101a2e150  cbz x8,0x7101a2e168
7101a2e154  ldr x8,[x8, #0x8]
7101a2e158  ldr x8,[x8, #0x10]
7101a2e15c  ldr x8,[x8, #0x8]
7101a2e160  ldr w26,[x8, #0x488]
7101a2e164  b 0x7101a2e16c
7101a2e168  mov w26,#0xffffffff
7101a2e16c  ldr x27,[x28, #0x190]
7101a2e170  ldp x9,x8,[x27, #0x88]
7101a2e174  cmp x9,x8
7101a2e178  b.eq 0x7101a2e190
7101a2e17c  str w26,[x9]
7101a2e180  ldr x8,[x27, #0x88]
7101a2e184  add x8,x8,#0x4
7101a2e188  str x8,[x27, #0x88]
7101a2e18c  b 0x7101a2e280
7101a2e190  add x0,x27,#0x80
7101a2e194  ldr x22,[x0]
7101a2e198  sub x23,x9,x22
7101a2e19c  asr x19,x23,#0x2
7101a2e1a0  add x9,x19,#0x1
7101a2e1a4  lsr x10,x9,#0x3e
7101a2e1a8  cbnz x10,0x7101a30bac
7101a2e1ac  sub x8,x8,x22
7101a2e1b0  asr x10,x8,#0x2
7101a2e1b4  orr x11,xzr,#0x1ffffffffffffffe
7101a2e1b8  cmp x10,x11
7101a2e1bc  b.hi 0x7101a2e1dc
7101a2e1c0  asr x8,x8,#0x1
7101a2e1c4  cmp x8,x9
7101a2e1c8  csel x28,x9,x8,cc
7101a2e1cc  cbz x28,0x7101a2e240
7101a2e1d0  lsr x8,x28,#0x3e
7101a2e1d4  cbz x8,0x7101a2e1e0
7101a2e1d8  b 0x7101a30afc
7101a2e1dc  orr x28,xzr,#0x3fffffffffffffff
7101a2e1e0  lsl x8,x28,#0x2
7101a2e1e4  cmp x8,#0x0
7101a2e1e8  csinc x25,x8,xzr,ne
7101a2e1ec  mov w0,#0x10
7101a2e1f0  mov x1,x25
7101a2e1f4  bl 0x710392e290
7101a2e1f8  mov x24,x0
7101a2e1fc  cbnz x0,0x7101a2e244
7101a2e200  adrp x8,0x7105332000
7101a2e204  ldr x0,[x8, #0xf00]
7101a2e208  cbz x0,0x7101a2e240
7101a2e20c  str wzr,[sp, #0x138]
7101a2e210  stur x25,[x29, #-0xe0]
7101a2e214  ldr x8,[x0]
7101a2e218  ldr x8,[x8, #0x30]
7101a2e21c  add x1,sp,#0x138
7101a2e220  sub x2,x29,#0xe0
7101a2e224  blr x8
7101a2e228  tbz w0,#0x0,0x7101a2e240
7101a2e22c  mov w0,#0x10
7101a2e230  mov x1,x25
7101a2e234  bl 0x710392e290
7101a2e238  mov x24,x0
7101a2e23c  cbnz x0,0x7101a2e244
7101a2e240  mov x24,xzr
7101a2e244  add x19,x24,x19, LSL #0x2
7101a2e248  add x25,x24,x28, LSL #0x2
7101a2e24c  cmp x23,#0x1
7101a2e250  str w26,[x19], #0x4
7101a2e254  b.lt 0x7101a2e268
7101a2e258  mov x0,x24
7101a2e25c  mov x1,x22
7101a2e260  mov x2,x23
7101a2e264  bl 0x71039c00e0
7101a2e268  stp x24,x19,[x27, #0x80]
7101a2e26c  ldr x28,[sp, #0x90]
7101a2e270  str x25,[x27, #0x90]
7101a2e274  cbz x22,0x7101a2e280
7101a2e278  mov x0,x22
7101a2e27c  bl 0x710392eb40
7101a2e280  ldr x8,[x20, #0x8]
7101a2e284  ldr x8,[x8, #0x40]
7101a2e288  cbz x8,0x7101a2e2e4
7101a2e28c  ldr x8,[x8, #0x8]
7101a2e290  ldr x8,[x8, #0x10]
7101a2e294  ldr x8,[x8, #0x8]
7101a2e298  ldrsw x8,[x8, #0x488]
7101a2e29c  cmn w8,#0x1
7101a2e2a0  b.eq 0x7101a2e2e4
7101a2e2a4  adrp x9,0x7105339000
7101a2e2a8  ldr x9,[x9, #0x8b0]
7101a2e2ac  ldrb w9,[x9, #0x8]
7101a2e2b0  cmp w8,#0x9
7101a2e2b4  ccmp w9,#0x0,#0x4,ls
7101a2e2b8  b.ne 0x7101a2e2c8
7101a2e2bc  adrp x0,0x7105339000
7101a2e2c0  add x0,x0,#0x830
7101a2e2c4  b 0x7101a2e2d8
7101a2e2c8  adrp x9,0x7105339000
7101a2e2cc  add x9,x9,#0x860
7101a2e2d0  ldr x0,[x9, x8, LSL #0x3]
7101a2e2d4  cbz x0,0x7101a2e2e4
7101a2e2d8  ldr x8,[x0]
7101a2e2dc  ldr x8,[x8, #0x10]
7101a2e2e0  blr x8
7101a2e2e4  add x20,x20,#0x10
7101a2e2e8  cmp x21,x20
7101a2e2ec  b.ne 0x7101a2e140
7101a2e2f0  ldr x8,[x28, #0x190]
7101a2e2f4  ldrb w9,[x28, #0xf8b]
7101a2e2f8  ldrb w8,[x8, #0x1b0]
7101a2e2fc  cmp w9,w8
7101a2e300  b.eq 0x7101a2e51c
7101a2e304  strb w8,[x28, #0xf8b]
7101a2e308  cbz w8,0x7101a2e51c
7101a2e30c  ldrb w8,[x28, #0xf81]
7101a2e310  cbnz w8,0x7101a2e51c
7101a2e314  ldr x9,[x28, #0xe78]
7101a2e318  ldr x8,[x28, #0xe80]
7101a2e31c  cmp x9,x8
7101a2e320  b.cs 0x7101a2e348
7101a2e324  mov w8,#0x1
7101a2e328  str w8,[x9]
7101a2e32c  ldr x8,[x28, #0xe78]
7101a2e330  add x8,x8,#0x4
7101a2e334  str x8,[x28, #0xe78]
7101a2e338  b 0x7101a2e51c
7101a2e33c  str w11,[x28, #0x178]
7101a2e340  cbnz w8,0x7101a2f108
7101a2e344  b 0x7101a2e110
7101a2e348  add x0,x28,#0xe70
7101a2e34c  ldr x22,[x0]
7101a2e350  sub x23,x9,x22
7101a2e354  asr x19,x23,#0x2
7101a2e358  add x9,x19,#0x1
7101a2e35c  lsr x10,x9,#0x3e
7101a2e360  cbnz x10,0x7101a30bac
7101a2e364  sub x8,x8,x22
7101a2e368  asr x10,x8,#0x2
7101a2e36c  orr x11,xzr,#0x1ffffffffffffffe
7101a2e370  cmp x10,x11
7101a2e374  b.hi 0x7101a2e474
7101a2e378  asr x8,x8,#0x1
7101a2e37c  cmp x8,x9
7101a2e380  csel x20,x9,x8,cc
7101a2e384  cbz x20,0x7101a2e4d8
7101a2e388  lsr x8,x20,#0x3e
7101a2e38c  cbz x8,0x7101a2e478
7101a2e390  b 0x7101a30afc
7101a2e394  mov w8,#0x6500
7101a2e398  movk w8,#0x87, LSL #16
7101a2e39c  stp wzr,w8,[x29, #-0xc8]
7101a2e3a0  adrp x8,0x7104f73000
7101a2e3a4  add x8,x8,#0xd30
7101a2e3a8  sturb wzr,[x29, #-0xc0]
7101a2e3ac  stp x8,xzr,[x29, #-0xd8]
7101a2e3b0  mov x8,#-0x1
7101a2e3b4  stur wzr,[x29, #-0xe0]
7101a2e3b8  stur xzr,[x29, #-0xa8]
7101a2e3bc  stp x8,xzr,[x29, #-0xb8]
7101a2e3c0  str wzr,[x28, #0xed8]
7101a2e3c4  ldr x8,[x28, #0xee8]
7101a2e3c8  cbz x8,0x7101a2e404
7101a2e3cc  adrp x9,0x7106dd5000
7101a2e3d0  ldrb w9,[x9, #0x3a8]
7101a2e3d4  cmp w9,#0x1
7101a2e3d8  b.ne 0x7101a2e404
7101a2e3dc  adrp x10,0x7106dd5000
7101a2e3e0  ldr w9,[x28, #0xef0]
7101a2e3e4  ldr w10,[x10, #0x3ac]
7101a2e3e8  cmp w9,w10
7101a2e3ec  b.ne 0x7101a2e404
7101a2e3f0  ldr wzr,[x8, #0x38]!
7101a2e3f4  ldaxr w9,[x8]
7101a2e3f8  sub w9,w9,#0x1
7101a2e3fc  stlxr w10,w9,[x8]
7101a2e400  cbnz w10,0x7101a2e3f4
7101a2e404  str xzr,[x28, #0xee8]
7101a2e408  add x10,x28,#0xef8
7101a2e40c  strb wzr,[x10]
7101a2e410  ldp x9,x10,[x29, #-0xb8]
7101a2e414  ldur x8,[x29, #-0xd0]
7101a2e418  ldur x11,[x29, #-0xa8]
7101a2e41c  str x9,[x21]
7101a2e420  adrp x9,0x7104f73000
7101a2e424  add x9,x9,#0xd50
7101a2e428  stp x10,x11,[x21, #0x8]
7101a2e42c  stur x9,[x29, #-0xd8]
7101a2e430  cbz x8,0x7101a2e46c
7101a2e434  adrp x9,0x7106dd5000
7101a2e438  ldrb w9,[x9, #0x3a8]
7101a2e43c  cmp w9,#0x1
7101a2e440  b.ne 0x7101a2e46c
7101a2e444  adrp x10,0x7106dd5000
7101a2e448  ldur w9,[x29, #-0xc8]
7101a2e44c  ldr w10,[x10, #0x3ac]
7101a2e450  cmp w9,w10
7101a2e454  b.ne 0x7101a2e46c
7101a2e458  ldr wzr,[x8, #0x38]!
7101a2e45c  ldaxr w9,[x8]
7101a2e460  sub w9,w9,#0x1
7101a2e464  stlxr w10,w9,[x8]
7101a2e468  cbnz w10,0x7101a2e45c
7101a2e46c  stur xzr,[x29, #-0xd0]
7101a2e470  b 0x7101a2d930
7101a2e474  orr x20,xzr,#0x3fffffffffffffff
7101a2e478  lsl x8,x20,#0x2
7101a2e47c  cmp x8,#0x0
7101a2e480  csinc x25,x8,xzr,ne
7101a2e484  mov w0,#0x10
7101a2e488  mov x1,x25
7101a2e48c  bl 0x710392e290
7101a2e490  mov x24,x0
7101a2e494  cbnz x0,0x7101a2e4dc
7101a2e498  adrp x8,0x7105332000
7101a2e49c  ldr x0,[x8, #0xf00]
7101a2e4a0  cbz x0,0x7101a2e4d8
7101a2e4a4  str wzr,[sp, #0x138]
7101a2e4a8  stur x25,[x29, #-0xe0]
7101a2e4ac  ldr x8,[x0]
7101a2e4b0  ldr x8,[x8, #0x30]
7101a2e4b4  add x1,sp,#0x138
7101a2e4b8  sub x2,x29,#0xe0
7101a2e4bc  blr x8
7101a2e4c0  tbz w0,#0x0,0x7101a2e4d8
7101a2e4c4  mov w0,#0x10
7101a2e4c8  mov x1,x25
7101a2e4cc  bl 0x710392e290
7101a2e4d0  mov x24,x0
7101a2e4d4  cbnz x0,0x7101a2e4dc
7101a2e4d8  mov x24,xzr
7101a2e4dc  add x19,x24,x19, LSL #0x2
7101a2e4e0  mov w8,#0x1
7101a2e4e4  add x20,x24,x20, LSL #0x2
7101a2e4e8  str w8,[x19], #0x4
7101a2e4ec  cmp x23,#0x1
7101a2e4f0  b.lt 0x7101a2e504
7101a2e4f4  mov x0,x24
7101a2e4f8  mov x1,x22
7101a2e4fc  mov x2,x23
7101a2e500  bl 0x71039c00e0
7101a2e504  str x24,[x28, #0xe70]
7101a2e508  str x19,[x28, #0xe78]
7101a2e50c  str x20,[x28, #0xe80]
7101a2e510  cbz x22,0x7101a2e51c
7101a2e514  mov x0,x22
7101a2e518  bl 0x710392eb40
7101a2e51c  ldr x8,[x28, #0x190]
7101a2e520  ldp x20,x21,[x8, #0x68]
7101a2e524  cmp x20,x21
7101a2e528  b.eq 0x7101a2ede4
7101a2e52c  add x8,x28,#0x250
7101a2e530  fmov s8,0x3f800000
7101a2e534  mov w22,#0x9ff8
7101a2e538  str x8,[sp, #0x70]
7101a2e53c  sub x8,x29,#0xe0
7101a2e540  add x24,x8,#0x30
7101a2e544  mov w23,#0xa010
7101a2e548  b 0x7101a2e780
7101a2e54c  ldr w8,[x9, #0x150]
7101a2e550  add w1,w8,#0x1
7101a2e554  add x0,sp,#0x138
7101a2e558  bl 0x7101a31020
7101a2e55c  ldrb w9,[sp, #0x118]
7101a2e560  cbnz w9,0x7101a2eb8c
7101a2e564  b 0x7101a2eaf4
7101a2e568  bl 0x7101a06ef0
7101a2e56c  ldr x8,[x28, #0x8]
7101a2e570  ldr x8,[x8, #0x10]
7101a2e574  ldr x19,[x8, #0x8]
7101a2e578  add x0,x19,#0x198
7101a2e57c  mov w1,wzr
7101a2e580  mov w2,#0x264
7101a2e584  bl 0x71039c02a0
7101a2e588  add x8,x19,#0x40c
7101a2e58c  str xzr,[x8]
7101a2e590  add x8,x19,#0x424
7101a2e594  str xzr,[x8]
7101a2e598  str wzr,[x19, #0x480]
7101a2e59c  adrp x8,0x71052a8000
7101a2e5a0  ldr x8,[x8, #0xa80]
7101a2e5a4  ldr q0,[x8]
7101a2e5a8  str xzr,[x19, #0x4a0]
7101a2e5ac  str q0,[x19, #0x460]
7101a2e5b0  str q0,[x19, #0x430]
7101a2e5b4  str q0,[x19, #0x440]
7101a2e5b8  str xzr,[x19, #0x498]
7101a2e5bc  mov w9,#0x1
7101a2e5c0  str q0,[x19, #0x450]
7101a2e5c4  ldr x19,[x28, #0x8]
7101a2e5c8  ldrb w8,[x19, #0x35]
7101a2e5cc  strb w9,[x19, #0x36]
7101a2e5d0  cbz w8,0x7101a2e63c
7101a2e5d4  ldrb w8,[x19, #0x37]
7101a2e5d8  cmp w8,#0x0
7101a2e5dc  cset w25,eq
7101a2e5e0  b 0x7101a2e640
7101a2e5e4  mov x1,x10
7101a2e5e8  mov x25,x10
7101a2e5ec  bl 0x7103291150
7101a2e5f0  tbnz w0,#0x0,0x7101a2ea30
7101a2e5f4  ldr x8,[x19, #0x8]
7101a2e5f8  str wzr,[x8, #0x118]
7101a2e5fc  ldr w8,[x28, #0x134]
7101a2e600  cmp w8,#0x11
7101a2e604  b.gt 0x7101a2e624
7101a2e608  add w8,w8,#0x1
7101a2e60c  cmp w8,#0x13
7101a2e610  str w8,[x28, #0x134]
7101a2e614  b.cs 0x7101a30afc
7101a2e618  add x8,x28,w8, SXTW  #0x2
7101a2e61c  mov w9,#0x2
7101a2e620  str w9,[x8, #0xe8]
7101a2e624  mov w8,#0x1
7101a2e628  strb w8,[x28, #0xf8f]
7101a2e62c  ldr w8,[sp, #0xd8]
7101a2e630  cmp w8,#0xa
7101a2e634  b.cc 0x7101a2e868
7101a2e638  b 0x7101a30afc
7101a2e63c  mov w25,wzr
7101a2e640  ldr x8,[x19, #0x20]
7101a2e644  ldr x0,[x8, #0x100]
7101a2e648  str x8,[sp, #0x68]
7101a2e64c  ldr x8,[x0]
7101a2e650  ldr x8,[x8, #0x60]
7101a2e654  mov w1,w25
7101a2e658  blr x8
7101a2e65c  ldr x8,[sp, #0x68]
7101a2e660  strb w25,[x8, #0x162]
7101a2e664  ldrb w8,[x19, #0x35]
7101a2e668  cbz w8,0x7101a2e680
7101a2e66c  ldrb w8,[x19, #0x36]
7101a2e670  cbz w8,0x7101a2e680
7101a2e674  ldrb w8,[x19, #0x37]
7101a2e678  cmp w8,#0x0
7101a2e67c  cset w8,eq
7101a2e680  ldr x9,[x19, #0x20]
7101a2e684  ldr x10,[x9, #0x100]
7101a2e688  ldr x10,[x10, #0x38]
7101a2e68c  cbz x10,0x7101a2e6a0
7101a2e690  ldrb w11,[x10, #0x58]
7101a2e694  and w11,w11,#0xfe
7101a2e698  orr w11,w11,w8
7101a2e69c  strb w11,[x10, #0x58]
7101a2e6a0  strb w8,[x9, #0x163]
7101a2e6a4  ldr x8,[x28, #0x8]
7101a2e6a8  ldr x8,[x8, #0x20]
7101a2e6ac  strb wzr,[x8, #0x166]
7101a2e6b0  ldr x8,[x28, #0x8]
7101a2e6b4  mov w9,#0xffffffff
7101a2e6b8  str w9,[x8, #0x2c]
7101a2e6bc  ldr x8,[x28, #0x8]
7101a2e6c0  ldr x8,[x8, #0x20]
7101a2e6c4  strb wzr,[x8, #0x167]
7101a2e6c8  ldr x19,[sp, #0x90]
7101a2e6cc  mov x0,x19
7101a2e6d0  ldr x8,[x28, #0x8]
7101a2e6d4  mov x1,x27
7101a2e6d8  str w9,[x8, #0x30]
7101a2e6dc  bl 0x7101a1f0b0
7101a2e6e0  ldr w2,[sp, #0xd8]
7101a2e6e4  mov x0,x19
7101a2e6e8  mov x1,x28
7101a2e6ec  bl 0x7101a31430
7101a2e6f0  ldr x0,[x26]
7101a2e6f4  mov x1,x28
7101a2e6f8  bl 0x7101a06920
7101a2e6fc  mov w8,#0x1
7101a2e700  strb w8,[sp, #0x118]
7101a2e704  ldr x8,[x26]
7101a2e708  ldr w8,[x8, #0x150]
7101a2e70c  str w8,[sp, #0x98]
7101a2e710  ldr w0,[x19, #0x170]
7101a2e714  mov x1,x27
7101a2e718  mov w2,wzr
7101a2e71c  bl 0x7101a1fa30
7101a2e720  tbz w0,#0x0,0x7101a2eb84
7101a2e724  ldr x8,[x26]
7101a2e728  ldr x2,[x8, #0x678]
7101a2e72c  cbz x2,0x7101a2eb84
7101a2e730  ldr x8,[x2, #0x8]
7101a2e734  ldr x8,[x8, #0x10]
7101a2e738  ldr x8,[x8, #0x8]
7101a2e73c  ldr w8,[x8, #0x488]
7101a2e740  cmn w8,#0x1
7101a2e744  b.eq 0x7101a2eb84
7101a2e748  ldr x19,[sp, #0x90]
7101a2e74c  mov w3,#0x1
7101a2e750  mov x1,x27
7101a2e754  mov w4,wzr
7101a2e758  mov x0,x19
7101a2e75c  bl 0x7101a1cf90
7101a2e760  mov x0,x19
7101a2e764  mov x1,x27
7101a2e768  bl 0x7101a1d4d0
7101a2e76c  ldr x8,[x26]
7101a2e770  ldr w1,[x8, #0x150]
7101a2e774  mov x0,x19
7101a2e778  bl 0x7101a19420
7101a2e77c  b 0x7101a2eb84
7101a2e780  ldr w8,[x20]
7101a2e784  mov w9,#0xffffffff
7101a2e788  str w9,[sp, #0x98]
7101a2e78c  strb wzr,[sp, #0x118]
7101a2e790  str w8,[sp, #0xd8]
7101a2e794  ldr x13,[x28, #0x258]
7101a2e798  ldr x10,[x28, #0x250]
7101a2e79c  ldr w25,[x28, #0x180]
7101a2e7a0  sub x11,x13,x10
7101a2e7a4  lsr x12,x11,#0x4
7101a2e7a8  cmp w25,w12
7101a2e7ac  csel w9,w12,w25,gt
7101a2e7b0  str w9,[sp, #0x128]
7101a2e7b4  ldrb w14,[x28, #0x16b]
7101a2e7b8  cbz w14,0x7101a2e88c
7101a2e7bc  ldr w14,[x28, #0x160]
7101a2e7c0  cmp w14,#0x4
7101a2e7c4  b.lt 0x7101a2e88c
7101a2e7c8  cmp w9,#0x4
7101a2e7cc  mov w25,#0x4
7101a2e7d0  csel w9,w9,w25,lt
7101a2e7d4  cmp w12,#0x1
7101a2e7d8  str w9,[sp, #0x128]
7101a2e7dc  b.lt 0x7101a2e88c
7101a2e7e0  sbfx x14,x11,#0x4,#0x20
7101a2e7e4  cmp w12,#0x4
7101a2e7e8  mov w12,#0x4
7101a2e7ec  csel x12,x14,x12,lt
7101a2e7f0  cmp x13,x10
7101a2e7f4  b.eq 0x7101a30b88
7101a2e7f8  mov w13,wzr
7101a2e7fc  mov x14,xzr
7101a2e800  mov w15,#0x8
7101a2e804  ldr x16,[x10, x15, LSL #0x0]
7101a2e808  ldr x17,[x16, #0x678]
7101a2e80c  cbz x17,0x7101a2e828
7101a2e810  ldr x17,[x17, #0x8]
7101a2e814  ldr w17,[x17, #0x28]
7101a2e818  ldr w16,[x16, #0x150]
7101a2e81c  cmp w17,w16
7101a2e820  cset w16,eq
7101a2e824  b 0x7101a2e82c
7101a2e828  mov w16,wzr
7101a2e82c  add x14,x14,#0x1
7101a2e830  add w13,w13,w16
7101a2e834  cmp x14,x12
7101a2e838  b.ge 0x7101a2e850
7101a2e83c  asr x16,x11,#0x4
7101a2e840  add x15,x15,#0x10
7101a2e844  cmp x16,x14
7101a2e848  b.hi 0x7101a2e804
7101a2e84c  b 0x7101a30b88
7101a2e850  cmp w13,#0x3
7101a2e854  b.ls 0x7101a2e888
7101a2e858  ldrb w9,[x28, #0xf8f]
7101a2e85c  cbz w9,0x7101a2e9bc
7101a2e860  cmp w8,#0xa
7101a2e864  b.cs 0x7101a30afc
7101a2e868  ldr x9,[x28, #0x190]
7101a2e86c  sxtw x8,w8
7101a2e870  add x10,x9,x8, LSL #0x2
7101a2e874  add x8,x9,x8
7101a2e878  str wzr,[x10]
7101a2e87c  str wzr,[x10, #0x28]
7101a2e880  strb wzr,[x8, #0x50]
7101a2e884  b 0x7101a2edd4
7101a2e888  mov w25,#0x4
7101a2e88c  add x8,sp,#0x128
7101a2e890  stp x8,x28,[sp, #0x138]
7101a2e894  add x8,sp,#0xd8
7101a2e898  str x8,[sp, #0x148]
7101a2e89c  add x8,sp,#0x118
7101a2e8a0  str x8,[sp, #0x150]
7101a2e8a4  add x8,sp,#0x98
7101a2e8a8  str x8,[sp, #0x158]
7101a2e8ac  ldr w8,[x28, #0x170]
7101a2e8b0  cbz w8,0x7101a2e9ac
7101a2e8b4  cmp w9,#0x1
7101a2e8b8  b.lt 0x7101a2e9ac
7101a2e8bc  adrp x8,0x71052c4000
7101a2e8c0  ldr x8,[x8, #0xc58]
7101a2e8c4  ldr x19,[x8, #0x8]
7101a2e8c8  mov w27,wzr
7101a2e8cc  ldr x8,[x19, #0x88]
7101a2e8d0  ldr x1,[x8, x22, LSL #0x0]
7101a2e8d4  add x26,x8,x23
7101a2e8d8  cbz x1,0x7101a2e8ec
7101a2e8dc  mov x0,x26
7101a2e8e0  bl 0x71016f6340
7101a2e8e4  and x1,x0,#0xff
7101a2e8e8  b 0x7101a2e8f0
7101a2e8ec  orr w1,wzr,#0xff
7101a2e8f0  mvn w8,w27
7101a2e8f4  tst w8,#0xff
7101a2e8f8  b.eq 0x7101a2e90c
7101a2e8fc  and w2,w27,#0xff
7101a2e900  mov x0,x26
7101a2e904  bl 0x71016ea960
7101a2e908  b 0x7101a2e914
7101a2e90c  mov x0,x26
7101a2e910  bl 0x71016ea290
7101a2e914  mvn w8,w0
7101a2e918  tst w8,#0xff
7101a2e91c  b.eq 0x7101a2e99c
7101a2e920  ldr x10,[x28, #0x240]
7101a2e924  ldr x9,[x28, #0x238]
7101a2e928  sub x10,x10,x9
7101a2e92c  and x8,x0,#0xff
7101a2e930  asr x10,x10,#0x4
7101a2e934  cmp x10,x8
7101a2e938  b.ls 0x7101a30af4
7101a2e93c  add x10,x9,x8, LSL #0x4
7101a2e940  ldr x10,[x10, #0x8]
7101a2e944  ldrb w11,[x10, #0x34]
7101a2e948  cbnz w11,0x7101a2e99c
7101a2e94c  ldr x10,[x10, #0x10]
7101a2e950  ldr x10,[x10, #0x8]
7101a2e954  ldr w11,[x10, #0x484]
7101a2e958  cbnz w11,0x7101a2e99c
7101a2e95c  ldr w10,[x10, #0x488]
7101a2e960  cmn w10,#0x1
7101a2e964  b.ne 0x7101a2e99c
7101a2e968  ldr x11,[x28, #0x258]
7101a2e96c  ldr x10,[x28, #0x250]
7101a2e970  sub x11,x11,x10
7101a2e974  asr x11,x11,#0x4
7101a2e978  cmp x11,x8
7101a2e97c  b.ls 0x7101a30b88
7101a2e980  add x11,x10,x8, LSL #0x4
7101a2e984  ldr x11,[x11, #0x8]
7101a2e988  ldrb w12,[x11, #0x1c0]
7101a2e98c  cbz w12,0x7101a2e99c
7101a2e990  ldr w11,[x11, #0x1f8]
7101a2e994  cmp w11,#0x3
7101a2e998  b.eq 0x7101a2ea48
7101a2e99c  ldr w8,[sp, #0x128]
7101a2e9a0  add w27,w27,#0x1
7101a2e9a4  cmp w27,w8
7101a2e9a8  b.lt 0x7101a2e8cc
7101a2e9ac  ldrb w8,[sp, #0x118]
7101a2e9b0  cbz w8,0x7101a2ea6c
7101a2e9b4  mov w9,#0x1
7101a2e9b8  b 0x7101a2eb8c
7101a2e9bc  adrp x9,0x710532f000
7101a2e9c0  ldr x9,[x9, #0x7c8]
7101a2e9c4  ldr x9,[x9, #0x8]
7101a2e9c8  ldrb w10,[x9, #0x6a]
7101a2e9cc  cbz w10,0x7101a2e860
7101a2e9d0  ldrb w10,[x9, #0x6b]
7101a2e9d4  cbnz w10,0x7101a2e860
7101a2e9d8  ldrb w9,[x9, #0x69]
7101a2e9dc  mov x1,#0x582f
7101a2e9e0  movk x1,#0xccae, LSL #16
7101a2e9e4  mov x10,#0xed44
7101a2e9e8  movk x10,#0x39a1, LSL #16
7101a2e9ec  movk x1,#0xff2d, LSL #32
7101a2e9f0  movk x1,#0x58ff, LSL #48
7101a2e9f4  movk x10,#0xff25, LSL #32
7101a2e9f8  movk x10,#0x58ff, LSL #48
7101a2e9fc  cbnz w9,0x7101a2e860
7101a2ea00  adrp x9,0x710532f000
7101a2ea04  ldr x19,[x9, #0x820]
7101a2ea08  adrp x9,0x710532f000
7101a2ea0c  ldr x9,[x9, #0x730]
7101a2ea10  ldr x9,[x9, #0x8]
7101a2ea14  ldrb w8,[x28, #0x15c]
7101a2ea18  cmp w8,#0x2
7101a2ea1c  ldr x0,[x9, #0x1c8]
7101a2ea20  b.ls 0x7101a2e5e4
7101a2ea24  mov x25,x1
7101a2ea28  bl 0x7103291150
7101a2ea2c  tbz w0,#0x0,0x7101a2e5f4
7101a2ea30  ldr x0,[x19, #0x10]
7101a2ea34  mov x1,x25
7101a2ea38  bl 0x71032edf70
7101a2ea3c  ldp x0,x1,[x19, #0x8]
7101a2ea40  bl 0x71032f1bb0
7101a2ea44  b 0x7101a2e5fc
7101a2ea48  lsl x8,x8,#0x4
7101a2ea4c  add x2,x9,x8
7101a2ea50  add x3,x10,x8
7101a2ea54  and w8,w0,#0xff
7101a2ea58  add x0,sp,#0x138
7101a2ea5c  add w1,w8,#0x1
7101a2ea60  bl 0x7101a31020
7101a2ea64  ldrb w8,[sp, #0x118]
7101a2ea68  cbnz w8,0x7101a2e9b4
7101a2ea6c  ldr x2,[x28, #0x238]
7101a2ea70  ldr x8,[x28, #0x240]
7101a2ea74  cmp x2,x8
7101a2ea78  b.eq 0x7101a2eaf4
7101a2ea7c  ldr x9,[x2, #0x8]
7101a2ea80  ldrb w10,[x9, #0x34]
7101a2ea84  cbnz w10,0x7101a2eae8
7101a2ea88  ldr x10,[x9, #0x10]
7101a2ea8c  ldr x10,[x10, #0x8]
7101a2ea90  ldr w11,[x10, #0x484]
7101a2ea94  cbnz w11,0x7101a2eae8
7101a2ea98  ldr w10,[x10, #0x488]
7101a2ea9c  cmn w10,#0x1
7101a2eaa0  b.ne 0x7101a2eae8
7101a2eaa4  ldrsw x9,[x9, #0x28]
7101a2eaa8  cmp w9,w25
7101a2eaac  b.ge 0x7101a2eae8
7101a2eab0  ldr x11,[x28, #0x258]
7101a2eab4  ldr x10,[x28, #0x250]
7101a2eab8  sub x11,x11,x10
7101a2eabc  asr x11,x11,#0x4
7101a2eac0  cmp x11,x9
7101a2eac4  b.ls 0x7101a30b88
7101a2eac8  add x3,x10,x9, LSL #0x4
7101a2eacc  ldr x9,[x3, #0x8]
7101a2ead0  ldrb w10,[x9, #0x1c0]
7101a2ead4  cbz w10,0x7101a2eae8
7101a2ead8  ldr w10,[x9, #0x1f8]
7101a2eadc  orr w10,w10,#0x2
7101a2eae0  cmp w10,#0x3
7101a2eae4  b.eq 0x7101a2e54c
7101a2eae8  add x2,x2,#0x10
7101a2eaec  cmp x8,x2
7101a2eaf0  b.ne 0x7101a2ea7c
7101a2eaf4  mov x8,x28
7101a2eaf8  ldr x28,[x28, #0x238]
7101a2eafc  ldr x8,[x8, #0x240]
7101a2eb00  cmp x28,x8
7101a2eb04  b.eq 0x7101a2eb84
7101a2eb08  ldr x9,[x28, #0x8]
7101a2eb0c  ldrb w10,[x9, #0x34]
7101a2eb10  cbnz w10,0x7101a2eb78
7101a2eb14  ldr x10,[x9, #0x10]
7101a2eb18  ldr x10,[x10, #0x8]
7101a2eb1c  ldr w11,[x10, #0x484]
7101a2eb20  cbnz w11,0x7101a2eb78
7101a2eb24  ldr w10,[x10, #0x488]
7101a2eb28  cmn w10,#0x1
7101a2eb2c  b.ne 0x7101a2eb78
7101a2eb30  ldrsw x9,[x9, #0x28]
7101a2eb34  cmp w9,w25
7101a2eb38  b.ge 0x7101a2eb78
7101a2eb3c  ldr x10,[sp, #0x90]
7101a2eb40  ldr x11,[x10, #0x258]
7101a2eb44  ldr x10,[x10, #0x250]
7101a2eb48  sub x11,x11,x10
7101a2eb4c  asr x11,x11,#0x4
7101a2eb50  cmp x11,x9
7101a2eb54  b.ls 0x7101a30b88
7101a2eb58  add x27,x10,x9, LSL #0x4
7101a2eb5c  mov x26,x27
7101a2eb60  ldr x0,[x26, #0x8]!
7101a2eb64  ldrb w9,[x0, #0x1c0]
7101a2eb68  cbz w9,0x7101a2eb78
7101a2eb6c  ldr w9,[x0, #0x1f8]
7101a2eb70  cmp w9,#0x2
7101a2eb74  b.eq 0x7101a2e568
7101a2eb78  add x28,x28,#0x10
7101a2eb7c  cmp x8,x28
7101a2eb80  b.ne 0x7101a2eb08
7101a2eb84  ldrb w9,[sp, #0x118]
7101a2eb88  ldr x28,[sp, #0x90]
7101a2eb8c  ldrsw x8,[sp, #0x98]
7101a2eb90  ldr w12,[sp, #0xd8]
7101a2eb94  cmn w8,#0x1
7101a2eb98  b.eq 0x7101a2ebc8
7101a2eb9c  adrp x10,0x710593b000
7101a2eba0  ldr x10,[x10, #0x990]
7101a2eba4  cmp w8,#0x8
7101a2eba8  cbz w9,0x7101a2ebb8
7101a2ebac  mov w11,w12
7101a2ebb0  b.cc 0x7101a2ebc0
7101a2ebb4  b 0x7101a30afc
7101a2ebb8  mov w11,#0xffffffff
7101a2ebbc  b.cs 0x7101a30afc
7101a2ebc0  ldr x10,[x10, #0x8]
7101a2ebc4  str w11,[x10, x8, LSL #0x2]
7101a2ebc8  cmn w12,#0x1
7101a2ebcc  b.eq 0x7101a2ec70
7101a2ebd0  cmp w9,#0x0
7101a2ebd4  cset w8,ne
7101a2ebd8  cmp w12,#0xa
7101a2ebdc  b.cs 0x7101a30afc
7101a2ebe0  ldr x11,[x28, #0x190]
7101a2ebe4  cmp w9,#0x0
7101a2ebe8  cset w13,ne
7101a2ebec  sxtw x10,w12
7101a2ebf0  lsl w13,w13,#0x1
7101a2ebf4  str w13,[x11, x10, LSL #0x2]
7101a2ebf8  cbz w9,0x7101a2ec60
7101a2ebfc  cmp w12,#0x9
7101a2ec00  b.hi 0x7101a2ec30
7101a2ec04  adrp x9,0x7105339000
7101a2ec08  ldr x9,[x9, #0x8b0]
7101a2ec0c  ldrb w12,[x9, #0x8]
7101a2ec10  adrp x9,0x7105339000
7101a2ec14  add x9,x9,#0x830
7101a2ec18  cbz w12,0x7101a2ec38
7101a2ec1c  adrp x9,0x7105339000
7101a2ec20  add x9,x9,#0x860
7101a2ec24  ldr x9,[x9, x10, LSL #0x3]
7101a2ec28  cbnz x9,0x7101a2ec38
7101a2ec2c  b 0x7101a2ec60
7101a2ec30  adrp x9,0x7105339000
7101a2ec34  add x9,x9,#0x830
7101a2ec38  ldr x9,[x9, #0x10]
7101a2ec3c  ldr w9,[x9, #0x9c]
7101a2ec40  sub w9,w9,#0x1
7101a2ec44  cmp w9,#0x6
7101a2ec48  b.hi 0x7101a2ec5c
7101a2ec4c  adrp x12,0x7104753000
7101a2ec50  add x12,x12,#0xde0
7101a2ec54  ldr w9,[x12, w9, SXTW #0x2]
7101a2ec58  b 0x7101a2ec60
7101a2ec5c  mov w9,wzr
7101a2ec60  add x12,x11,x10, LSL #0x2
7101a2ec64  str w9,[x12, #0x28]
7101a2ec68  add x9,x11,x10
7101a2ec6c  strb w8,[x9, #0x50]
7101a2ec70  mov x0,x28
7101a2ec74  bl 0x7101a1f7d0
7101a2ec78  ldrb w8,[sp, #0x118]
7101a2ec7c  cbz w8,0x7101a2edd4
7101a2ec80  adrp x8,0x710532f000
7101a2ec84  ldr x8,[x8, #0x8d0]
7101a2ec88  ldr x0,[x8, #0x8]
7101a2ec8c  ldrb w8,[x0, #0x191]
7101a2ec90  cbnz w8,0x7101a2ed10
7101a2ec94  mov x1,#0xfd32
7101a2ec98  movk x1,#0xcb49, LSL #16
7101a2ec9c  mov w2,#0x4
7101a2eca0  movk x1,#0x1a, LSL #32
7101a2eca4  bl 0x7103313f20
7101a2eca8  tbz w0,#0x0,0x7101a2ed10
7101a2ecac  mov x1,#0xfd32
7101a2ecb0  movk x1,#0xcb49, LSL #16
7101a2ecb4  sub x0,x29,#0xe0
7101a2ecb8  movk x1,#0x1a, LSL #32
7101a2ecbc  bl 0x71024076d0
7101a2ecc0  ldur x8,[x29, #-0xd0]
7101a2ecc4  adrp x9,0x7104f73000
7101a2ecc8  add x9,x9,#0xd50
7101a2eccc  stur x9,[x29, #-0xd8]
7101a2ecd0  cbz x8,0x7101a2ed48
7101a2ecd4  adrp x9,0x7106dd5000
7101a2ecd8  ldrb w9,[x9, #0x3a8]
7101a2ecdc  cmp w9,#0x1
7101a2ece0  b.ne 0x7101a2ed48
7101a2ece4  adrp x10,0x7106dd5000
7101a2ece8  ldur w9,[x29, #-0xc8]
7101a2ecec  ldr w10,[x10, #0x3ac]
7101a2ecf0  cmp w9,w10
7101a2ecf4  b.ne 0x7101a2ed48
7101a2ecf8  ldr wzr,[x8, #0x38]!
7101a2ecfc  ldaxr w9,[x8]
7101a2ed00  sub w9,w9,#0x1
7101a2ed04  stlxr w10,w9,[x8]
7101a2ed08  cbnz w10,0x7101a2ecfc
7101a2ed0c  b 0x7101a2ed48
7101a2ed10  mov w8,#0x6500
7101a2ed14  movk w8,#0x87, LSL #16
7101a2ed18  stp wzr,w8,[x29, #-0xc8]
7101a2ed1c  adrp x8,0x7104f73000
7101a2ed20  add x8,x8,#0xd30
7101a2ed24  sturb wzr,[x29, #-0xc0]
7101a2ed28  stp x8,xzr,[x29, #-0xd8]
7101a2ed2c  mov x8,#-0x1
7101a2ed30  stur x8,[x29, #-0xb8]
7101a2ed34  adrp x8,0x7104f73000
7101a2ed38  add x8,x8,#0xd50
7101a2ed3c  stur wzr,[x29, #-0xe0]
7101a2ed40  stp xzr,xzr,[x24]
7101a2ed44  stur x8,[x29, #-0xd8]
7101a2ed48  stur xzr,[x29, #-0xd0]
7101a2ed4c  sturb wzr,[x29, #-0xc0]
7101a2ed50  ldr x10,[x28, #0x240]
7101a2ed54  ldr x9,[x28, #0x238]
7101a2ed58  ldrsw x8,[sp, #0x98]
7101a2ed5c  sub x10,x10,x9
7101a2ed60  asr x10,x10,#0x4
7101a2ed64  cmp x10,x8
7101a2ed68  b.ls 0x7101a30af4
7101a2ed6c  add x8,x9,x8, LSL #0x4
7101a2ed70  ldr x8,[x8, #0x8]
7101a2ed74  ldr x8,[x8, #0x10]
7101a2ed78  ldr x8,[x8, #0x8]
7101a2ed7c  ldr w9,[x8, #0x484]
7101a2ed80  cmp w9,#0x2
7101a2ed84  mov w9,#0x488
7101a2ed88  mov w10,#0x48c
7101a2ed8c  csel x9,x10,x9,eq
7101a2ed90  ldr w1,[x8, x9, LSL #0x0]
7101a2ed94  cmn w1,#0x1
7101a2ed98  b.eq 0x7101a2edd4
7101a2ed9c  adrp x8,0x71052c5000
7101a2eda0  ldr x8,[x8, #0x120]
7101a2eda4  ldr x0,[x8, #0x8]
7101a2eda8  mov v0.16B,v8.16B
7101a2edac  mov v1.16B,v8.16B
7101a2edb0  mov x2,#0x38f0
7101a2edb4  movk x2,#0x966c, LSL #16
7101a2edb8  mov w4,#0x1
7101a2edbc  movk x2,#0x19, LSL #32
7101a2edc0  mov w3,wzr
7101a2edc4  mov w5,wzr
7101a2edc8  mov w6,wzr
7101a2edcc  mov w7,wzr
7101a2edd0  bl 0x710175dfc0
7101a2edd4  add x20,x20,#0x4
7101a2edd8  cmp x20,x21
7101a2eddc  b.ne 0x7101a2e780
7101a2ede0  ldr x8,[x28, #0x190]
7101a2ede4  ldp x20,x21,[x8, #0x80]
7101a2ede8  cmp x20,x21
7101a2edec  b.eq 0x7101a2f108
7101a2edf0  mov x22,#-0x3f00000000000000
7101a2edf4  add x8,x28,#0x250
7101a2edf8  mov w23,#0xffffffff
7101a2edfc  adrp x24,0x7105239000
7101a2ee00  add x24,x24,#0x1c0
7101a2ee04  str x8,[sp, #0x70]
7101a2ee08  b 0x7101a2f054
7101a2ee0c  mov w19,w23
7101a2ee10  cbz x9,0x7101a2ee30
7101a2ee14  ldr x8,[x8, #0x8]
7101a2ee18  ldr x9,[x8, #0x10]
7101a2ee1c  ldr x9,[x9, #0x8]
7101a2ee20  ldr w9,[x9, #0x488]
7101a2ee24  cmp w9,w1
7101a2ee28  b.ne 0x7101a2ee30
7101a2ee2c  ldr w19,[x8, #0x28]
7101a2ee30  mov x0,x28
7101a2ee34  bl 0x7101a30bb0
7101a2ee38  cmn w19,#0x1
7101a2ee3c  b.eq 0x7101a2f0fc
7101a2ee40  ldr x10,[x28, #0x258]
7101a2ee44  ldr x9,[x28, #0x250]
7101a2ee48  sub x10,x10,x9
7101a2ee4c  sxtw x8,w19
7101a2ee50  asr x10,x10,#0x4
7101a2ee54  cmp x10,x8
7101a2ee58  b.ls 0x7101a30b88
7101a2ee5c  add x25,x9,x8, LSL #0x4
7101a2ee60  mov x26,x25
7101a2ee64  mov x1,#0xb807
7101a2ee68  movk x1,#0xb1cc, LSL #16
7101a2ee6c  movk x1,#0x11, LSL #32
7101a2ee70  ldr x8,[x26, #0x8]!
7101a2ee74  strb wzr,[x8, #0x1c3]
7101a2ee78  adrp x8,0x710532f000
7101a2ee7c  ldr x8,[x8, #0x730]
7101a2ee80  ldr x8,[x8, #0x8]
7101a2ee84  ldr x27,[x28, #0xd90]
7101a2ee88  ldr x28,[x8, #0x168]
7101a2ee8c  mov x0,x28
7101a2ee90  bl 0x71032631a0
7101a2ee94  and x10,x27,#-0x100000000000000
7101a2ee98  and x9,x27,#0xffffffffff
7101a2ee9c  and x8,x0,#0xffffffffff
7101a2eea0  cmp x10,x22
7101a2eea4  b.ne 0x7101a2eed0
7101a2eea8  cbz x9,0x7101a2eed0
7101a2eeac  and x11,x0,#-0x100000000000000
7101a2eeb0  cmp x11,x22
7101a2eeb4  b.ne 0x7101a2eed4
7101a2eeb8  cbz x8,0x7101a2eed4
7101a2eebc  eor x8,x0,x27
7101a2eec0  tst x8,#0xffffffffff
7101a2eec4  mov x2,x27
7101a2eec8  b.ne 0x7101a2ef1c
7101a2eecc  b 0x7101a2ef0c
7101a2eed0  and x11,x0,#-0x100000000000000
7101a2eed4  cmp x10,x22
7101a2eed8  cset w10,eq
7101a2eedc  cmp x9,#0x0
7101a2eee0  cset w9,ne
7101a2eee4  cmp x8,#0x0
7101a2eee8  cset w8,ne
7101a2eeec  cmp x11,x22
7101a2eef0  and w9,w10,w9
7101a2eef4  cset w10,eq
7101a2eef8  and w8,w8,w10
7101a2eefc  eor w8,w8,w9
7101a2ef00  cmp w8,#0x1
7101a2ef04  mov x2,x27
7101a2ef08  b.eq 0x7101a2ef1c
7101a2ef0c  mov x0,x28
7101a2ef10  mov x1,x27
7101a2ef14  bl 0x7103263030
7101a2ef18  mov x2,x0
7101a2ef1c  ldr x0,[x26]
7101a2ef20  mov x1,x27
7101a2ef24  mov w3,wzr
7101a2ef28  bl 0x7101a029b0
7101a2ef2c  ldr x28,[sp, #0x90]
7101a2ef30  mov x0,x28
7101a2ef34  mov x1,x25
7101a2ef38  mov w2,wzr
7101a2ef3c  bl 0x7101a1eb70
7101a2ef40  ldr x8,[x26]
7101a2ef44  ldrb w8,[x8, #0x211]
7101a2ef48  cbnz w8,0x7101a2f044
7101a2ef4c  ldrb w8,[x28, #0x15a]
7101a2ef50  cmp w8,#0x9
7101a2ef54  mov w9,#0x2
7101a2ef58  csel w8,w8,w9,ne
7101a2ef5c  b.ne 0x7101a2ef9c
7101a2ef60  ldp w8,w9,[x24]
7101a2ef64  str w9,[x24]
7101a2ef68  ldp w9,w10,[x24, #0x8]
7101a2ef6c  eor w8,w8,w8, LSL #0xb
7101a2ef70  eor w8,w8,w8, LSR #0x8
7101a2ef74  eor w8,w8,w10
7101a2ef78  eor w8,w8,w10, LSR #0x13
7101a2ef7c  stp w9,w10,[x24, #0x4]
7101a2ef80  mov w9,#0x8e39
7101a2ef84  movk w9,#0x38e3, LSL #16
7101a2ef88  umull x9,w8,w9
7101a2ef8c  lsr x9,x9,#0x21
7101a2ef90  add w9,w9,w9, LSL #0x3
7101a2ef94  str w8,[x24, #0xc]
7101a2ef98  sub w8,w8,w9
7101a2ef9c  and w9,w8,#0xff
7101a2efa0  cmp w9,#0x8
7101a2efa4  b.hi 0x7101a2efcc
7101a2efa8  and x8,x8,#0xff
7101a2efac  adrp x9,0x71044f7000
7101a2efb0  add x9,x9,#0x6a4
7101a2efb4  ldrsw x8,[x9, x8, LSL #0x2]
7101a2efb8  add x8,x8,x9
7101a2efbc  mov w3,#0x1
7101a2efc0  br x8
7101a2efc4  mov w3,#0x2
7101a2efc8  b 0x7101a2f000
7101a2efcc  orr w3,wzr,#0x3
7101a2efd0  b 0x7101a2f000
7101a2efd4  mov w3,#0x5
7101a2efd8  b 0x7101a2f000
7101a2efdc  mov w3,#0x4
7101a2efe0  b 0x7101a2f000
7101a2efe4  mov w3,#0x8
7101a2efe8  b 0x7101a2f000
7101a2efec  orr w3,wzr,#0x6
7101a2eff0  b 0x7101a2f000
7101a2eff4  orr w3,wzr,#0x7
7101a2eff8  b 0x7101a2f000
7101a2effc  mov w3,#0x9
7101a2f000  ldr x8,[x26]
7101a2f004  ldr x19,[x8, #0x5e8]
7101a2f008  strb w3,[x8, #0x211]
7101a2f00c  ldr w8,[x19, #0x21c]
7101a2f010  cmp w8,#0x1
7101a2f014  str w3,[x19, #0x250]
7101a2f018  b.ne 0x7101a2f044
7101a2f01c  add x0,x19,#0x88
7101a2f020  mov w2,#0x1
7101a2f024  adrp x1,0x71042b3000
7101a2f028  add x1,x1,#0xd87
7101a2f02c  bl 0x710377a280
7101a2f030  ldr w2,[x19, #0x250]
7101a2f034  add x0,x19,#0x68
7101a2f038  adrp x1,0x710439d000
7101a2f03c  add x1,x1,#0xc8e
7101a2f040  bl 0x7103778430
7101a2f044  mov x0,x28
7101a2f048  mov x1,x25
7101a2f04c  bl 0x7101a1d4d0
7101a2f050  b 0x7101a2f0fc
7101a2f054  ldr w8,[x28, #0x16c]
7101a2f058  ldr w1,[x20]
7101a2f05c  cmp w8,#0x5
7101a2f060  b.ne 0x7101a2f0f4
7101a2f064  ldrb w8,[x28, #0xcbc]
7101a2f068  cbnz w8,0x7101a2f074
7101a2f06c  ldr w8,[x28, #0xcb8]
7101a2f070  cbz w8,0x7101a2f0f4
7101a2f074  ldr x8,[x28, #0x238]
7101a2f078  ldr x9,[x28, #0x240]
7101a2f07c  cmp x8,x9
7101a2f080  b.eq 0x7101a2f0f4
7101a2f084  sub x9,x9,#0x10
7101a2f088  sub x9,x9,x8
7101a2f08c  lsr x10,x9,#0x4
7101a2f090  add w9,w10,#0x1
7101a2f094  and x9,x9,#0x1
7101a2f098  cbz x10,0x7101a2ee0c
7101a2f09c  sub x11,x9,#0x1
7101a2f0a0  sub x10,x11,x10
7101a2f0a4  mov w19,w23
7101a2f0a8  ldr x11,[x8, #0x8]
7101a2f0ac  ldr x12,[x11, #0x10]
7101a2f0b0  ldr x12,[x12, #0x8]
7101a2f0b4  ldr w12,[x12, #0x488]
7101a2f0b8  cmp w12,w1
7101a2f0bc  b.ne 0x7101a2f0c4
7101a2f0c0  ldr w19,[x11, #0x28]
7101a2f0c4  ldr x11,[x8, #0x18]
7101a2f0c8  ldr x12,[x11, #0x10]
7101a2f0cc  ldr x12,[x12, #0x8]
7101a2f0d0  ldr w12,[x12, #0x488]
7101a2f0d4  cmp w12,w1
7101a2f0d8  b.ne 0x7101a2f0e0
7101a2f0dc  ldr w19,[x11, #0x28]
7101a2f0e0  add x8,x8,#0x20
7101a2f0e4  adds x10,x10,#0x2
7101a2f0e8  b.ne 0x7101a2f0a8
7101a2f0ec  cbnz x9,0x7101a2ee14
7101a2f0f0  b 0x7101a2ee30
7101a2f0f4  mov x0,x28
7101a2f0f8  bl 0x7101a30bb0
7101a2f0fc  add x20,x20,#0x4
7101a2f100  cmp x20,x21
7101a2f104  b.ne 0x7101a2f054
7101a2f108  ldr x19,[x28, #0x250]
7101a2f10c  ldr x20,[x28, #0x258]
7101a2f110  cmp x19,x20
7101a2f114  ldr x21,[sp, #0x38]
7101a2f118  b.eq 0x7101a2f138
7101a2f11c  stur x21,[x29, #-0xe0]
7101a2f120  ldr x0,[x19, #0x8]
7101a2f124  sub x1,x29,#0xe0
7101a2f128  bl 0x7101a04c80
7101a2f12c  add x19,x19,#0x10
7101a2f130  cmp x20,x19
7101a2f134  b.ne 0x7101a2f11c
7101a2f138  ldr x0,[x28, #0xdf0]
7101a2f13c  bl 0x71032cf7e0
7101a2f140  ldr x11,[x28, #0xdf0]
7101a2f144  ldr q0,[x11, #0xb0]
7101a2f148  ldr w22,[x11, #0xbe0]
7101a2f14c  dup s1,v0.S[0x1]
7101a2f150  fcmp s0,s1
7101a2f154  fcsel s0,s1,s0,mi
7101a2f158  adrp x8,0x7104472000
7101a2f15c  cmp w22,#0x1
7101a2f160  b.lt 0x7101a2f1c4
7101a2f164  ldr s1,[x8, #0x398]
7101a2f168  fmov s2,0x3f800000
7101a2f16c  mov x9,xzr
7101a2f170  sub x10,x22,#0x1
7101a2f174  mov w12,#0x100
7101a2f178  cmp x9,#0xa
7101a2f17c  b.cs 0x7101a30afc
7101a2f180  add x11,x11,x12
7101a2f184  ldrb w13,[x11, #0x1f]
7101a2f188  ldr s4,[x11]
7101a2f18c  strb wzr,[x11, #0x1e]
7101a2f190  cmp w13,#0x0
7101a2f194  fcsel s3,s1,s2,eq
7101a2f198  cmp x10,x9
7101a2f19c  str s3,[x11, #0x4]
7101a2f1a0  fmul s3,s3,s4
7101a2f1a4  str s3,[x11, #0xc]
7101a2f1a8  b.eq 0x7101a2f1c4
7101a2f1ac  ldr x11,[x28, #0xdf0]
7101a2f1b0  add x9,x9,#0x1
7101a2f1b4  add x12,x12,#0x130
7101a2f1b8  cmp x9,#0xa
7101a2f1bc  b.cc 0x7101a2f180
7101a2f1c0  b 0x7101a30afc
7101a2f1c4  ldr x21,[x28, #0x238]
7101a2f1c8  ldr x24,[x28, #0x240]
7101a2f1cc  fmov s9,0x3f000000
7101a2f1d0  cmp x21,x24
7101a2f1d4  b.eq 0x7101a2f52c
7101a2f1d8  fmul s1,s0,s9
7101a2f1dc  ldr s10,[x8, #0x398]
7101a2f1e0  adrp x8,0x7104471000
7101a2f1e4  ldr s11,[x8, #0xf68]
7101a2f1e8  adrp x8,0x7104472000
7101a2f1ec  ldr s13,[x8, #0x970]
7101a2f1f0  adrp x8,0x7104472000
7101a2f1f4  ldr s14,[x8, #0xb54]
7101a2f1f8  fmul s0,s1,s10
7101a2f1fc  fmul s0,s0,s0
7101a2f200  fadd s12,s0,s0
7101a2f204  fmov s8,0x3f800000
7101a2f208  sxtw x25,w22
7101a2f20c  mov w26,#0xffffffff
7101a2f210  mov w27,#0x130
7101a2f214  b 0x7101a2f228
7101a2f218  mov w28,w20
7101a2f21c  cmn w28,#0x1
7101a2f220  b.ne 0x7101a2f494
7101a2f224  b 0x7101a2f488
7101a2f228  ldr x8,[x21, #0x8]
7101a2f22c  ldr w28,[x8, #0x30]
7101a2f230  ldr w20,[x8, #0x28]
7101a2f234  cmn w28,#0x1
7101a2f238  b.eq 0x7101a2f2c4
7101a2f23c  cmp w20,#0xa
7101a2f240  b.cs 0x7101a30afc
7101a2f244  ldr x10,[sp, #0x90]
7101a2f248  ldr x10,[x10, #0xdf0]
7101a2f24c  sxtw x9,w20
7101a2f250  madd x9,x9,x27,x10
7101a2f254  ldrb w9,[x9, #0x124]
7101a2f258  cbz w9,0x7101a2f504
7101a2f25c  ldr x19,[x8, #0x20]
7101a2f260  sub x8,x29,#0xe0
7101a2f264  add x0,x19,#0x108
7101a2f268  adrp x1,0x71043ff000
7101a2f26c  add x1,x1,#0xac3
7101a2f270  bl 0x71037780e0
7101a2f274  add x23,x19,#0x128
7101a2f278  sub x8,x29,#0xe0
7101a2f27c  cmp x23,x8
7101a2f280  b.eq 0x7101a2f29c
7101a2f284  ldur x8,[x29, #-0xd8]
7101a2f288  stur xzr,[x29, #-0xd8]
7101a2f28c  ldr x0,[x19, #0x130]
7101a2f290  str x8,[x19, #0x130]
7101a2f294  cbz x0,0x7101a2f29c
7101a2f298  bl 0x710392eb40
7101a2f29c  ldur x0,[x29, #-0xd8]
7101a2f2a0  adrp x8,0x710523d000
7101a2f2a4  add x8,x8,#0x9e8
7101a2f2a8  stp x8,xzr,[x29, #-0xe0]
7101a2f2ac  cbz x0,0x7101a2f2b4
7101a2f2b0  bl 0x710392eb40
7101a2f2b4  mov v0.16B,v8.16B
7101a2f2b8  mov x0,x23
7101a2f2bc  bl 0x710377aee0
7101a2f2c0  b 0x7101a2f504
7101a2f2c4  ldr x0,[x8, #0x20]
7101a2f2c8  ldr s1,[x0, #0x14c]
7101a2f2cc  ldr s0,[x0, #0x148]
7101a2f2d0  fsub s2,s1,s0
7101a2f2d4  fcmp s2,s11
7101a2f2d8  b.le 0x7101a2f2e8
7101a2f2dc  fcmp s2,s13
7101a2f2e0  mov w28,w26
7101a2f2e4  b.mi 0x7101a2f504
7101a2f2e8  ldr s2,[x0, #0x154]
7101a2f2ec  ldr s3,[x0, #0x150]
7101a2f2f0  fsub s4,s2,s3
7101a2f2f4  fcmp s4,s11
7101a2f2f8  b.le 0x7101a2f308
7101a2f2fc  fcmp s4,s13
7101a2f300  mov w28,w26
7101a2f304  b.mi 0x7101a2f504
7101a2f308  ldr x8,[x0, #0x100]
7101a2f30c  ldr q4,[x8, #0x60]
7101a2f310  fcmp s1,s4
7101a2f314  dup s1,v4.S[0x1]
7101a2f318  fccmp s0,s4,#0x2,ge
7101a2f31c  fccmp s2,s1,#0x8,ls
7101a2f320  fccmp s3,s1,#0x2,ge
7101a2f324  mov w28,w26
7101a2f328  b.hi 0x7101a2f504
7101a2f32c  ldrb w8,[x0, #0x162]
7101a2f330  cbz w8,0x7101a2f500
7101a2f334  ldrb w8,[x0, #0x163]
7101a2f338  cbz w8,0x7101a2f500
7101a2f33c  str q4,[sp, #0x70]
7101a2f340  bl 0x71032d2ff0
7101a2f344  cmp w22,#0x1
7101a2f348  stp s0,s1,[x29, #-0xe0]
7101a2f34c  stp s2,s3,[x29, #-0xd8]
7101a2f350  b.lt 0x7101a2f500
7101a2f354  mul x12,x20,x27
7101a2f358  mov v15.16B,v12.16B
7101a2f35c  str x22,[sp, #0x68]
7101a2f360  mov x22,xzr
7101a2f364  mov x23,xzr
7101a2f368  mov w19,w26
7101a2f36c  mov w28,w26
7101a2f370  cmp x23,#0xa
7101a2f374  b.cs 0x7101a30afc
7101a2f378  ldr x8,[sp, #0x90]
7101a2f37c  ldr x0,[x8, #0xdf0]
7101a2f380  add x8,x0,x22
7101a2f384  ldrb w9,[x8, #0x118]
7101a2f388  cbz w9,0x7101a2f468
7101a2f38c  ldrb w9,[x8, #0x119]
7101a2f390  cbz w9,0x7101a2f468
7101a2f394  ldrb w9,[x8, #0x11b]
7101a2f398  cbz w9,0x7101a2f468
7101a2f39c  ldrb w9,[x8, #0x11c]
7101a2f3a0  cbz w9,0x7101a2f468
7101a2f3a4  ldp q0,q1,[x8, #0xe0]
7101a2f3a8  fcmeq v0.4S,v0.4S,v1.4S
7101a2f3ac  ext v1.16B,v0.16B,v0.16B,0x8
7101a2f3b0  and v0.8B,v0.8B,v1.8B
7101a2f3b4  mov w9,v0.S[0x1]
7101a2f3b8  fmov w10,s0
7101a2f3bc  tst w10,w9
7101a2f3c0  b.eq 0x7101a2f468
7101a2f3c4  ldrb w9,[x8, #0x11f]
7101a2f3c8  cbnz w9,0x7101a2f468
7101a2f3cc  cmp x12,x22
7101a2f3d0  b.eq 0x7101a2f3dc
7101a2f3d4  ldrb w9,[x8, #0x11d]
7101a2f3d8  cbnz w9,0x7101a2f468
7101a2f3dc  ldr x8,[x8, #0x28]
7101a2f3e0  ldr x8,[x8, #0x18]
7101a2f3e4  ldr x8,[x8]
7101a2f3e8  cbz x8,0x7101a2f404
7101a2f3ec  movi v0.2D,#0x0
7101a2f3f0  add x9,x8,#0x30
7101a2f3f4  add x8,x8,#0x34
7101a2f3f8  ld1 {v0.S}[0],[x9]
7101a2f3fc  ld1 {v0.S}[1],[x8]
7101a2f400  b 0x7101a2f410
7101a2f404  adrp x8,0x71052a8000
7101a2f408  ldr x8,[x8, #0xa80]
7101a2f40c  ldr q0,[x8]
7101a2f410  ldr q1,[sp, #0x70]
7101a2f414  fsub v0.4S,v0.4S,v1.4S
7101a2f418  fmul v0.4S,v0.4S,v0.4S
7101a2f41c  faddp v0.2S,v0.2S,v0.2S
7101a2f420  fcmp s0,s12
7101a2f424  b.pl 0x7101a2f440
7101a2f428  cmp x12,x22
7101a2f42c  b.eq 0x7101a2f218
7101a2f430  fcmp s0,s15
7101a2f434  b.pl 0x7101a2f468
7101a2f438  mov w28,w23
7101a2f43c  b 0x7101a2f46c
7101a2f440  sub x2,x29,#0xe0
7101a2f444  mov w1,w23
7101a2f448  str x12,[sp, #0x60]
7101a2f44c  bl 0x71032d12e0
7101a2f450  cmp w19,w20
7101a2f454  ldr x12,[sp, #0x60]
7101a2f458  cset w8,eq
7101a2f45c  orn w8,w8,w0
7101a2f460  tst w8,#0x1
7101a2f464  csel w19,w19,w23,ne
7101a2f468  mov v0.16B,v15.16B
7101a2f46c  mov v15.16B,v0.16B
7101a2f470  add x23,x23,#0x1
7101a2f474  add x22,x22,#0x130
7101a2f478  cmp x23,x25
7101a2f47c  b.lt 0x7101a2f370
7101a2f480  cmn w28,#0x1
7101a2f484  b.ne 0x7101a2f494
7101a2f488  cmn w19,#0x1
7101a2f48c  mov w28,w19
7101a2f490  b.eq 0x7101a2f4fc
7101a2f494  cmp w28,#0xa
7101a2f498  b.cs 0x7101a30afc
7101a2f49c  ldr x8,[sp, #0x90]
7101a2f4a0  ldr x8,[x8, #0xdf0]
7101a2f4a4  smaddl x9,w28,w27,x8
7101a2f4a8  ldrb w9,[x9, #0x11f]
7101a2f4ac  ldr x22,[sp, #0x68]
7101a2f4b0  cbnz w9,0x7101a2f504
7101a2f4b4  sxtw x9,w28
7101a2f4b8  madd x10,x9,x27,x8
7101a2f4bc  mov w11,#0x1
7101a2f4c0  strb w11,[x10, #0x11e]
7101a2f4c4  ldr w10,[x10, #0x10]
7101a2f4c8  cmp w10,#0x1
7101a2f4cc  b.ne 0x7101a2f4e0
7101a2f4d0  madd x10,x9,x27,x8
7101a2f4d4  ldrb w10,[x10, #0x126]
7101a2f4d8  mov v0.16B,v14.16B
7101a2f4dc  cbnz w10,0x7101a2f4e4
7101a2f4e0  mov v0.16B,v10.16B
7101a2f4e4  madd x8,x9,x27,x8
7101a2f4e8  ldr s1,[x8, #0x100]
7101a2f4ec  str s0,[x8, #0x104]
7101a2f4f0  fmul s0,s0,s1
7101a2f4f4  str s0,[x8, #0x10c]
7101a2f4f8  b 0x7101a2f504
7101a2f4fc  ldr x22,[sp, #0x68]
7101a2f500  mov w28,w26
7101a2f504  ldr x8,[x21, #0x8]
7101a2f508  ldr x8,[x8, #0x20]
7101a2f50c  cmn w28,#0x1
7101a2f510  cset w9,ne
7101a2f514  strb w9,[x8, #0x166]
7101a2f518  ldr x8,[x21, #0x8]
7101a2f51c  add x21,x21,#0x10
7101a2f520  cmp x21,x24
7101a2f524  str w28,[x8, #0x2c]
7101a2f528  b.ne 0x7101a2f228
7101a2f52c  ldr x24,[sp, #0x90]
7101a2f530  mov x0,x24
7101a2f534  bl 0x7101a18f30
7101a2f538  ldr x9,[x24]
7101a2f53c  cbz x9,0x7101a2f564
7101a2f540  ldp x8,x11,[x24, #0x8]
7101a2f544  and x10,x11,#0x1
7101a2f548  orr x12,x10,x8
7101a2f54c  cbz x12,0x7101a2f564
7101a2f550  add x0,x9,x11, ASR #0x1
7101a2f554  cbz x10,0x7101a2f560
7101a2f558  ldr x9,[x0]
7101a2f55c  ldr x8,[x9, x8, LSL #0x0]
7101a2f560  blr x8
7101a2f564  ldr w8,[x24, #0x13c]
7101a2f568  add w8,w8,#0x1
7101a2f56c  str w8,[x24, #0x13c]
7101a2f570  ldr w8,[x24, #0x16c]
7101a2f574  cmp w8,#0x6
7101a2f578  b.ne 0x7101a2f6c8
7101a2f57c  ldr x8,[x24, #0x198]
7101a2f580  ldr x8,[x8]
7101a2f584  add x0,x8,#0x8
7101a2f588  adrp x1,0x710425f000
7101a2f58c  add x1,x1,#0xd64
7101a2f590  sub x8,x29,#0xe0
7101a2f594  bl 0x7103776640
7101a2f598  adrp x1,0x71043ae000
7101a2f59c  add x1,x1,#0xc3
7101a2f5a0  add x8,sp,#0x138
7101a2f5a4  sub x0,x29,#0xe0
7101a2f5a8  bl 0x71037780e0
7101a2f5ac  ldr x22,[sp, #0x140]
7101a2f5b0  ldr x0,[x22, #0x8]
7101a2f5b4  cbz x0,0x7101a2f678
7101a2f5b8  ldr x8,[x0]
7101a2f5bc  ldr x8,[x8, #0x130]
7101a2f5c0  blr x8
7101a2f5c4  tbz w0,#0x0,0x7101a2f678
7101a2f5c8  ldr x0,[x22, #0x8]
7101a2f5cc  cbz x0,0x7101a2f5e0
7101a2f5d0  ldr x8,[x0]
7101a2f5d4  ldr x8,[x8, #0x138]
7101a2f5d8  blr x8
7101a2f5dc  tbz w0,#0x0,0x7101a2f668
7101a2f5e0  ldr w8,[x24, #0xd88]
7101a2f5e4  add w9,w8,#0x1
7101a2f5e8  add w10,w8,#0x2
7101a2f5ec  cmp w9,#0x0
7101a2f5f0  csinc w8,w10,w8,lt
7101a2f5f4  and w8,w8,#0xfffffffe
7101a2f5f8  sub w8,w9,w8
7101a2f5fc  lsr w9,w8,#0x1e
7101a2f600  and w9,w9,#0x2
7101a2f604  add w8,w8,w9
7101a2f608  adrp x9,0x71050a8000
7101a2f60c  add x9,x9,#0x880
7101a2f610  str w8,[x24, #0xd88]
7101a2f614  ldr x1,[x9, w8, SXTW #0x3]
7101a2f618  ldur x0,[x29, #-0xd8]
7101a2f61c  fmov s0,0x3f800000
7101a2f620  bl 0x7103778300
7101a2f624  adrp x1,0x710439d000
7101a2f628  add x1,x1,#0xc9a
7101a2f62c  add x8,sp,#0xd8
7101a2f630  sub x0,x29,#0xe0
7101a2f634  bl 0x7103776910
7101a2f638  ldrsw x9,[x24, #0xd88]
7101a2f63c  adrp x8,0x71050a8000
7101a2f640  add x8,x8,#0x890
7101a2f644  ldr x1,[x8, x9, LSL #0x3]
7101a2f648  add x0,sp,#0xd8
7101a2f64c  bl 0x710377a120
7101a2f650  ldr x0,[sp, #0xe0]
7101a2f654  adrp x8,0x710523d000
7101a2f658  add x8,x8,#0x9a8
7101a2f65c  stp x8,xzr,[sp, #0xd8]
7101a2f660  cbz x0,0x7101a2f668
7101a2f664  bl 0x710392eb40
7101a2f668  adrp x8,0x710523d000
7101a2f66c  add x8,x8,#0x9e8
7101a2f670  stp x8,xzr,[sp, #0x138]
7101a2f674  b 0x7101a2f688
7101a2f678  adrp x8,0x710523d000
7101a2f67c  add x8,x8,#0x9e8
7101a2f680  stp x8,xzr,[sp, #0x138]
7101a2f684  cbz x22,0x7101a2f690
7101a2f688  mov x0,x22
7101a2f68c  bl 0x710392eb40
7101a2f690  ldur x22,[x29, #-0xd8]
7101a2f694  adrp x8,0x710523d000
7101a2f698  add x8,x8,#0x988
7101a2f69c  stp x8,xzr,[x29, #-0xe0]
7101a2f6a0  cbz x22,0x7101a2f6c4
7101a2f6a4  ldr x0,[x22, #0x18]
7101a2f6a8  adrp x8,0x710523d000
7101a2f6ac  add x8,x8,#0x9a8
7101a2f6b0  stp x8,xzr,[x22, #0x10]
7101a2f6b4  cbz x0,0x7101a2f6bc
7101a2f6b8  bl 0x710392eb40
7101a2f6bc  mov x0,x22
7101a2f6c0  bl 0x710392eb40
7101a2f6c4  ldr w8,[x24, #0x16c]
7101a2f6c8  cmp w8,#0x18
7101a2f6cc  b.ne 0x7101a2fa30
7101a2f6d0  ldr w8,[x24, #0x138]
7101a2f6d4  sub w8,w8,#0x3
7101a2f6d8  cmp w8,#0x1
7101a2f6dc  b.hi 0x7101a2fa30
7101a2f6e0  ldrsw x8,[x24, #0x13c]
7101a2f6e4  mov w9,#0xaaab
7101a2f6e8  movk w9,#0x2aaa, LSL #16
7101a2f6ec  mul x9,x8,x9
7101a2f6f0  lsr x10,x9,#0x3f
7101a2f6f4  asr x9,x9,#0x21
7101a2f6f8  add w9,w9,w10
7101a2f6fc  orr w10,wzr,#0xc
7101a2f700  msub w8,w9,w10,w8
7101a2f704  cbnz w8,0x7101a2fa30
7101a2f708  ldr x8,[x24, #0x1a8]
7101a2f70c  ldr x8,[x8]
7101a2f710  add x0,x8,#0x8
7101a2f714  adrp x1,0x71043cf000
7101a2f718  add x1,x1,#0x42b
7101a2f71c  sub x8,x29,#0xe0
7101a2f720  bl 0x7103776640
7101a2f724  adrp x1,0x7104348000
7101a2f728  add x1,x1,#0x8ca
7101a2f72c  add x8,sp,#0x138
7101a2f730  sub x0,x29,#0xe0
7101a2f734  bl 0x7103776910
7101a2f738  adrp x21,0x7105314000
7101a2f73c  add x21,x21,#0x4d8
7101a2f740  ldarb w8,[x21]
7101a2f744  tbz w8,#0x0,0x7101a30a74
7101a2f748  add x0,sp,#0xd8
7101a2f74c  bl 0x71039c2680
7101a2f750  cbz w0,0x7101a2f898
7101a2f754  mov x19,xzr
7101a2f758  adrp x20,0x710523d000
7101a2f75c  add x20,x20,#0x9a8
7101a2f760  mov w0,#0x10
7101a2f764  mov w1,#0x20
7101a2f768  str x20,[sp, #0xd8]
7101a2f76c  bl 0x710392e290
7101a2f770  cbnz x0,0x7101a2f7b8
7101a2f774  adrp x8,0x7105332000
7101a2f778  ldr x0,[x8, #0xf00]
7101a2f77c  cbz x0,0x7101a2f7b4
7101a2f780  mov w8,#0x20
7101a2f784  str wzr,[sp, #0x128]
7101a2f788  add x1,sp,#0x128
7101a2f78c  str x8,[sp, #0x98]
7101a2f790  ldr x8,[x0]
7101a2f794  ldr x8,[x8, #0x30]
7101a2f798  add x2,sp,#0x98
7101a2f79c  blr x8
7101a2f7a0  tbz w0,#0x0,0x7101a2f7b4
7101a2f7a4  mov w0,#0x10
7101a2f7a8  mov w1,#0x20
7101a2f7ac  bl 0x710392e290
7101a2f7b0  cbnz x0,0x7101a2f7b8
7101a2f7b4  mov x0,xzr
7101a2f7b8  stp xzr,xzr,[x0, #0x10]
7101a2f7bc  stp xzr,xzr,[x0]
7101a2f7c0  ldr x8,[sp, #0x140]
7101a2f7c4  str x0,[sp, #0xe0]
7101a2f7c8  ldr x9,[x8]
7101a2f7cc  str x9,[x0]
7101a2f7d0  ldr x8,[x8, #0x8]
7101a2f7d4  str x8,[x0, #0x8]
7101a2f7d8  ldr x8,[sp, #0x140]
7101a2f7dc  ldr x0,[x8, #0x10]
7101a2f7e0  ldr x22,[sp, #0xe0]
7101a2f7e4  str x0,[x22, #0x10]
7101a2f7e8  ldr x8,[x8, #0x18]
7101a2f7ec  str x8,[x22, #0x18]
7101a2f7f0  mov x8,#0x8e00
7101a2f7f4  movk x8,#0xbcac, LSL #16
7101a2f7f8  movk x8,#0xd, LSL #32
7101a2f7fc  add x19,x19,x8
7101a2f800  cbz x0,0x7101a2f818
7101a2f804  add x1,sp,#0x98
7101a2f808  mov w2,wzr
7101a2f80c  mov w3,wzr
7101a2f810  str wzr,[sp, #0x98]
7101a2f814  bl 0x71037a2270
7101a2f818  and x8,x19,#0xfffffe00
7101a2f81c  asr x9,x19,#0x20
7101a2f820  mov w10,#0x3d1d
7101a2f824  movk w10,#0x68fd, LSL #16
7101a2f828  mul x11,x9,x10
7101a2f82c  mul x10,x8,x10
7101a2f830  add x10,x11,x10, LSR #0x20
7101a2f834  mov w11,#0x33fe
7101a2f838  movk w11,#0x125, LSL #16
7101a2f83c  mul x9,x9,x11
7101a2f840  mul x8,x8,x11
7101a2f844  add x8,x8,w10, UXTW 
7101a2f848  add x9,x9,x10, ASR #0x20
7101a2f84c  add x8,x9,x8, LSR #0x20
7101a2f850  asr x8,x8,#0x1c
7101a2f854  add x8,x8,x19, LSR #0x3f
7101a2f858  bic x4,x8,x8, ASR #0x3f
7101a2f85c  orr x8,xzr,#-0x7777777777777778
7101a2f860  movk x8,#0x8889
7101a2f864  umulh x8,x4,x8
7101a2f868  lsr x3,x8,#0x5
7101a2f86c  cmp w3,#0x1
7101a2f870  b.lt 0x7101a2f90c
7101a2f874  orr x8,xzr,#0x3c00000000
7101a2f878  mul x8,x3,x8
7101a2f87c  lsr x8,x8,#0x20
7101a2f880  sub w4,w4,w8
7101a2f884  adrp x1,0x710427f000
7101a2f888  add x1,x1,#0x297
7101a2f88c  add x0,sp,#0xd8
7101a2f890  mov w2,#0x2
7101a2f894  b 0x7101a2f920
7101a2f898  adrp x8,0x7105307000
7101a2f89c  ldr w8,[x8, #0x790]
7101a2f8a0  cbz w8,0x7101a2f754
7101a2f8a4  ldr x20,[sp, #0xd8]
7101a2f8a8  add x0,sp,#0xd8
7101a2f8ac  bl 0x71039c2680
7101a2f8b0  mov x19,xzr
7101a2f8b4  cbnz w0,0x7101a2f758
7101a2f8b8  adrp x9,0x7105307000
7101a2f8bc  add x9,x9,#0x8b0
7101a2f8c0  ldr x8,[sp, #0xd8]
7101a2f8c4  ldr x10,[x9, #0x18]
7101a2f8c8  cmp x10,x8
7101a2f8cc  b.lt 0x7101a2f758
7101a2f8d0  ldr x9,[x9]
7101a2f8d4  cmp x8,x9
7101a2f8d8  b.lt 0x7101a2f758
7101a2f8dc  adrp x9,0x7105307000
7101a2f8e0  ldr x9,[x9, #0x8c0]
7101a2f8e4  cmp x9,x8
7101a2f8e8  b.lt 0x7101a2f754
7101a2f8ec  adrp x11,0x7105307000
7101a2f8f0  ldr x11,[x11, #0x8b8]
7101a2f8f4  mov w10,#0xca00
7101a2f8f8  movk w10,#0x3b9a, LSL #16
7101a2f8fc  cmp x8,x11
7101a2f900  b.ge 0x7101a309e0
7101a2f904  sub x8,x11,x20
7101a2f908  b 0x7101a309e4
7101a2f90c  adrp x1,0x710427f000
7101a2f910  add x1,x1,#0x297
7101a2f914  add x0,sp,#0xd8
7101a2f918  mov w2,#0x2
7101a2f91c  mov w3,wzr
7101a2f920  bl 0x710377a280
7101a2f924  stp x20,xzr,[sp, #0xd8]
7101a2f928  cbz x22,0x7101a2f934
7101a2f92c  mov x0,x22
7101a2f930  bl 0x710392eb40
7101a2f934  ldarb w8,[x21]
7101a2f938  tbz w8,#0x0,0x7101a30ab4
7101a2f93c  adrp x8,0x7105307000
7101a2f940  ldr w8,[x8, #0x790]
7101a2f944  cbz w8,0x7101a2f9f4
7101a2f948  add x0,sp,#0x98
7101a2f94c  bl 0x71039c2680
7101a2f950  cbnz w0,0x7101a2f9f4
7101a2f954  adrp x9,0x7105307000
7101a2f958  add x9,x9,#0x8b0
7101a2f95c  ldr x8,[sp, #0x98]
7101a2f960  ldr x10,[x9]
7101a2f964  cmp x8,x10
7101a2f968  b.lt 0x7101a2f9f4
7101a2f96c  ldr x10,[x9, #0x18]
7101a2f970  cmp x10,x8
7101a2f974  b.lt 0x7101a2f9f4
7101a2f978  ldr x9,[x9, #0x10]
7101a2f97c  cmp x9,x8
7101a2f980  b.ge 0x7101a2f9f4
7101a2f984  adrp x8,0x710532f000
7101a2f988  ldr x19,[x8, #0x820]
7101a2f98c  adrp x8,0x710532f000
7101a2f990  ldr x8,[x8, #0x730]
7101a2f994  ldr x8,[x8, #0x8]
7101a2f998  ldr x0,[x8, #0x1c8]
7101a2f99c  mov x22,#0xae33
7101a2f9a0  movk x22,#0x4bcc, LSL #16
7101a2f9a4  movk x22,#0xff1b, LSL #32
7101a2f9a8  movk x22,#0x58ff, LSL #48
7101a2f9ac  mov x1,x22
7101a2f9b0  bl 0x7103291150
7101a2f9b4  tbz w0,#0x0,0x7101a2f9d0
7101a2f9b8  ldr x0,[x19, #0x10]
7101a2f9bc  mov x1,x22
7101a2f9c0  bl 0x71032edf70
7101a2f9c4  ldp x0,x1,[x19, #0x8]
7101a2f9c8  bl 0x71032f1bb0
7101a2f9cc  b 0x7101a2f9d8
7101a2f9d0  ldr x8,[x19, #0x8]
7101a2f9d4  str wzr,[x8, #0x118]
7101a2f9d8  ldr x8,[x24, #0x198]
7101a2f9dc  ldr x8,[x8]
7101a2f9e0  ldr x0,[x8]
7101a2f9e4  mov w1,wzr
7101a2f9e8  bl 0x71037760f0
7101a2f9ec  mov w8,#0x5
7101a2f9f0  str w8,[x24, #0x174]
7101a2f9f4  ldr x0,[sp, #0x140]
7101a2f9f8  stp x20,xzr,[sp, #0x138]
7101a2f9fc  cbz x0,0x7101a2fa04
7101a2fa00  bl 0x710392eb40
7101a2fa04  ldur x22,[x29, #-0xd8]
7101a2fa08  adrp x8,0x710523d000
7101a2fa0c  add x8,x8,#0x988
7101a2fa10  stp x8,xzr,[x29, #-0xe0]
7101a2fa14  cbz x22,0x7101a2fa30
7101a2fa18  ldr x0,[x22, #0x18]
7101a2fa1c  stp x20,xzr,[x22, #0x10]
7101a2fa20  cbz x0,0x7101a2fa28
7101a2fa24  bl 0x710392eb40
7101a2fa28  mov x0,x22
7101a2fa2c  bl 0x710392eb40
7101a2fa30  add x22,x24,#0xe88
7101a2fa34  mov x0,x22
7101a2fa38  bl 0x7103764cd0
7101a2fa3c  ldrb w8,[x24, #0xed1]
7101a2fa40  cbz w8,0x7101a2fcc8
7101a2fa44  ldr x11,[x24, #0xe70]
7101a2fa48  ldr x8,[x24, #0xe78]
7101a2fa4c  cmp x11,x8
7101a2fa50  b.eq 0x7101a2fcc8
7101a2fa54  mov x10,x11
7101a2fa58  ldr w20,[x10], #0x4
7101a2fa5c  cmp x10,x8
7101a2fa60  b.eq 0x7101a2fa98
7101a2fa64  sub x9,x8,#0x8
7101a2fa68  sub x12,x9,x11
7101a2fa6c  tbnz w12,#0x2,0x7101a2faa8
7101a2fa70  ldr w13,[x11, #0x4]
7101a2fa74  cmp w13,w20
7101a2fa78  mov x9,x11
7101a2fa7c  b.eq 0x7101a2fa88
7101a2fa80  mov x9,x10
7101a2fa84  str w13,[x11]
7101a2fa88  add x10,x11,#0x8
7101a2fa8c  cmp x12,#0x4
7101a2fa90  b.cs 0x7101a2fab4
7101a2fa94  b 0x7101a2fae0
7101a2fa98  mov x9,x11
7101a2fa9c  cmp x9,x8
7101a2faa0  b.ne 0x7101a2faf0
7101a2faa4  b 0x7101a2fb1c
7101a2faa8  mov x9,x11
7101a2faac  cmp x12,#0x4
7101a2fab0  b.cc 0x7101a2fae0
7101a2fab4  ldr w11,[x10]
7101a2fab8  cmp w11,w20
7101a2fabc  b.eq 0x7101a2fac4
7101a2fac0  str w11,[x9], #0x4
7101a2fac4  ldr w11,[x10, #0x4]
7101a2fac8  cmp w11,w20
7101a2facc  b.eq 0x7101a2fad4
7101a2fad0  str w11,[x9], #0x4
7101a2fad4  add x10,x10,#0x8
7101a2fad8  cmp x10,x8
7101a2fadc  b.ne 0x7101a2fab4
7101a2fae0  ldr x8,[x24, #0xe78]
7101a2fae4  ldr x11,[x24, #0xe70]
7101a2fae8  cmp x9,x8
7101a2faec  b.eq 0x7101a2fb1c
7101a2faf0  sub x10,x9,x11
7101a2faf4  sub x9,x8,x9
7101a2faf8  add x23,x11,x10
7101a2fafc  add x1,x23,x9
7101a2fb00  subs x2,x8,x1
7101a2fb04  asr x19,x2,#0x2
7101a2fb08  b.eq 0x7101a2fb14
7101a2fb0c  mov x0,x23
7101a2fb10  bl 0x71039c00a0
7101a2fb14  add x8,x23,x19, LSL #0x2
7101a2fb18  str x8,[x24, #0xe78]
7101a2fb1c  cmp w20,#0x2
7101a2fb20  b.eq 0x7101a2fbe0
7101a2fb24  cmp w20,#0x1
7101a2fb28  b.ne 0x7101a2fcc8
7101a2fb2c  ldr x8,[x24, #0x198]
7101a2fb30  ldr x8,[x8]
7101a2fb34  ldr x0,[x8, #0x10]
7101a2fb38  fmov s0,0x3f800000
7101a2fb3c  adrp x1,0x710425e000
7101a2fb40  add x1,x1,#0xd82
7101a2fb44  bl 0x7103778300
7101a2fb48  mov x0,x22
7101a2fb4c  bl 0x7103765160
7101a2fb50  adrp x8,0x710532f000
7101a2fb54  ldr x8,[x8, #0x8d0]
7101a2fb58  ldr x0,[x8, #0x8]
7101a2fb5c  ldrb w8,[x0, #0x191]
7101a2fb60  cbnz w8,0x7101a2fc94
7101a2fb64  mov x22,#0x7024
7101a2fb68  movk x22,#0xab44, LSL #16
7101a2fb6c  movk x22,#0xe, LSL #32
7101a2fb70  mov w2,#0x4
7101a2fb74  mov x1,x22
7101a2fb78  bl 0x7103313f20
7101a2fb7c  tbz w0,#0x0,0x7101a2fc94
7101a2fb80  sub x0,x29,#0xe0
7101a2fb84  mov x1,x22
7101a2fb88  bl 0x71024076d0
7101a2fb8c  ldur x8,[x29, #-0xd0]
7101a2fb90  adrp x9,0x7104f73000
7101a2fb94  add x9,x9,#0xd50
7101a2fb98  stur x9,[x29, #-0xd8]
7101a2fb9c  cbz x8,0x7101a2fcc0
7101a2fba0  adrp x8,0x7106dd5000
7101a2fba4  ldrb w8,[x8, #0x3a8]
7101a2fba8  cmp w8,#0x1
7101a2fbac  b.ne 0x7101a2fcc0
7101a2fbb0  adrp x9,0x7106dd5000
7101a2fbb4  ldur w8,[x29, #-0xc8]
7101a2fbb8  ldr w9,[x9, #0x3ac]
7101a2fbbc  cmp w8,w9
7101a2fbc0  b.ne 0x7101a2fcc0
7101a2fbc4  ldur x8,[x29, #-0xd0]
7101a2fbc8  ldr wzr,[x8, #0x38]!
7101a2fbcc  ldaxr w9,[x8]
7101a2fbd0  sub w9,w9,#0x1
7101a2fbd4  stlxr w10,w9,[x8]
7101a2fbd8  cbnz w10,0x7101a2fbcc
7101a2fbdc  b 0x7101a2fcc0
7101a2fbe0  ldr x8,[x24, #0x198]
7101a2fbe4  ldr x8,[x8]
7101a2fbe8  ldr x0,[x8, #0x10]
7101a2fbec  fmov s0,0x3f800000
7101a2fbf0  adrp x1,0x7104421000
7101a2fbf4  add x1,x1,#0xcf8
7101a2fbf8  bl 0x7103778300
7101a2fbfc  mov x0,x22
7101a2fc00  bl 0x7103765160
7101a2fc04  adrp x8,0x710532f000
7101a2fc08  ldr x8,[x8, #0x8d0]
7101a2fc0c  ldr x0,[x8, #0x8]
7101a2fc10  ldrb w8,[x0, #0x191]
7101a2fc14  cbnz w8,0x7101a2fc94
7101a2fc18  mov x22,#0x7024
7101a2fc1c  movk x22,#0xab44, LSL #16
7101a2fc20  movk x22,#0xe, LSL #32
7101a2fc24  mov w2,#0x4
7101a2fc28  mov x1,x22
7101a2fc2c  bl 0x7103313f20
7101a2fc30  tbz w0,#0x0,0x7101a2fc94
7101a2fc34  sub x0,x29,#0xe0
7101a2fc38  mov x1,x22
7101a2fc3c  bl 0x71024076d0
7101a2fc40  ldur x8,[x29, #-0xd0]
7101a2fc44  adrp x9,0x7104f73000
7101a2fc48  add x9,x9,#0xd50
7101a2fc4c  stur x9,[x29, #-0xd8]
7101a2fc50  cbz x8,0x7101a2fcc0
7101a2fc54  adrp x8,0x7106dd5000
7101a2fc58  ldrb w8,[x8, #0x3a8]
7101a2fc5c  cmp w8,#0x1
7101a2fc60  b.ne 0x7101a2fcc0
7101a2fc64  adrp x9,0x7106dd5000
7101a2fc68  ldur w8,[x29, #-0xc8]
7101a2fc6c  ldr w9,[x9, #0x3ac]
7101a2fc70  cmp w8,w9
7101a2fc74  b.ne 0x7101a2fcc0
7101a2fc78  ldur x8,[x29, #-0xd0]
7101a2fc7c  ldr wzr,[x8, #0x38]!
7101a2fc80  ldaxr w9,[x8]
7101a2fc84  sub w9,w9,#0x1
7101a2fc88  stlxr w10,w9,[x8]
7101a2fc8c  cbnz w10,0x7101a2fc80
7101a2fc90  b 0x7101a2fcc0
7101a2fc94  mov w8,#0x6500
7101a2fc98  movk w8,#0x87, LSL #16
7101a2fc9c  stp wzr,w8,[x29, #-0xc8]
7101a2fca0  mov x8,#-0x1
7101a2fca4  stp x8,xzr,[x29, #-0xb8]
7101a2fca8  adrp x8,0x7104f73000
7101a2fcac  add x8,x8,#0xd50
7101a2fcb0  sturb wzr,[x29, #-0xc0]
7101a2fcb4  stur wzr,[x29, #-0xe0]
7101a2fcb8  stur xzr,[x29, #-0xa8]
7101a2fcbc  stp x8,xzr,[x29, #-0xd8]
7101a2fcc0  stur xzr,[x29, #-0xd0]
7101a2fcc4  sturb wzr,[x29, #-0xc0]
7101a2fcc8  ldr x19,[x24, #0x238]
7101a2fccc  ldr x20,[x24, #0x240]
7101a2fcd0  cmp x19,x20
7101a2fcd4  b.eq 0x7101a2fcf0
7101a2fcd8  ldr x8,[x19, #0x8]
7101a2fcdc  ldr x0,[x8, #0x20]
7101a2fce0  bl 0x71032d2ba0
7101a2fce4  add x19,x19,#0x10
7101a2fce8  cmp x20,x19
7101a2fcec  b.ne 0x7101a2fcd8
7101a2fcf0  ldrb w8,[x24, #0xf88]
7101a2fcf4  cbz w8,0x7101a30010
7101a2fcf8  ldr w8,[x24, #0x16c]
7101a2fcfc  cmp w8,#0x1c
7101a2fd00  b.ne 0x7101a2fd0c
7101a2fd04  mov w22,wzr
7101a2fd08  b 0x7101a30044
7101a2fd0c  stp xzr,xzr,[x29, #-0xe0]
7101a2fd10  ldrsw x11,[x24, #0x160]
7101a2fd14  cmp w11,#0x1
7101a2fd18  b.lt 0x7101a2fdf0
7101a2fd1c  ldr x15,[x24, #0x258]
7101a2fd20  ldr x13,[x24, #0x250]
7101a2fd24  sub x15,x15,x13
7101a2fd28  mov x12,xzr
7101a2fd2c  mov w10,wzr
7101a2fd30  mov w9,wzr
7101a2fd34  add x0,x24,#0x250
7101a2fd38  mov w14,#0x8
7101a2fd3c  sub x16,x29,#0xe0
7101a2fd40  asr x15,x15,#0x4
7101a2fd44  cmp x15,x12
7101a2fd48  b.ls 0x7101a30b90
7101a2fd4c  ldr x17,[x13, x14, LSL #0x0]
7101a2fd50  ldrb w18,[x17, #0x6b9]
7101a2fd54  cbz w18,0x7101a2fddc
7101a2fd58  ldr w1,[x17, #0x5d0]
7101a2fd5c  cbz w1,0x7101a2fddc
7101a2fd60  ldr w1,[x17, #0x1f8]
7101a2fd64  cmp w1,#0x3
7101a2fd68  b.eq 0x7101a2fddc
7101a2fd6c  cbz w18,0x7101a2fddc
7101a2fd70  ldr w18,[x17, #0x5d0]
7101a2fd74  cmp w18,#0x1
7101a2fd78  b.ne 0x7101a2fda8
7101a2fd7c  ldr x18,[x17, #0x678]
7101a2fd80  cbz x18,0x7101a2fd90
7101a2fd84  ldr x18,[x18, #0x8]
7101a2fd88  ldrb w18,[x18, #0x36]
7101a2fd8c  cbz w18,0x7101a2fdac
7101a2fd90  ldrb w18,[x17, #0x6bc]
7101a2fd94  cbz w18,0x7101a2fdac
7101a2fd98  ldrb w18,[x17, #0x6bd]
7101a2fd9c  cmp w18,#0x0
7101a2fda0  cset w18,ne
7101a2fda4  b 0x7101a2fdac
7101a2fda8  mov w18,wzr
7101a2fdac  ldrsw x17,[x17, #0x1fc]
7101a2fdb0  eor w1,w18,#0x1
7101a2fdb4  add w9,w9,w1
7101a2fdb8  add w10,w10,w18
7101a2fdbc  cmn w17,#0x1
7101a2fdc0  b.eq 0x7101a2fddc
7101a2fdc4  cmp w17,#0x4
7101a2fdc8  b.cs 0x7101a30afc
7101a2fdcc  lsl x17,x17,#0x2
7101a2fdd0  ldr w18,[x16, x17, LSL #0x0]
7101a2fdd4  add w18,w18,#0x1
7101a2fdd8  str w18,[x16, x17, LSL #0x0]
7101a2fddc  add x12,x12,#0x1
7101a2fde0  add x14,x14,#0x10
7101a2fde4  cmp x12,x11
7101a2fde8  b.lt 0x7101a2fd44
7101a2fdec  b 0x7101a2fdf8
7101a2fdf0  mov w9,wzr
7101a2fdf4  mov w10,wzr
7101a2fdf8  add x12,x24,#0x17c
7101a2fdfc  cmp w8,#0x9
7101a2fe00  mov x13,x12
7101a2fe04  b.ne 0x7101a2fe18
7101a2fe08  ldr w14,[x12]
7101a2fe0c  add x13,x24,#0x160
7101a2fe10  cmp w14,w11
7101a2fe14  csel x13,x13,x12,lt
7101a2fe18  ldr w14,[x24, #0x170]
7101a2fe1c  cbz w14,0x7101a2fec8
7101a2fe20  cmp w11,#0x1
7101a2fe24  b.lt 0x7101a2fe90
7101a2fe28  ldr x14,[x24, #0x258]
7101a2fe2c  ldr x15,[x24, #0x250]
7101a2fe30  sub x14,x14,x15
7101a2fe34  mov x13,xzr
7101a2fe38  add x0,x24,#0x250
7101a2fe3c  asr x14,x14,#0x4
7101a2fe40  add x15,x15,#0x8
7101a2fe44  cmp x14,x13
7101a2fe48  b.ls 0x7101a30b90
7101a2fe4c  ldr x16,[x15]
7101a2fe50  ldr w17,[x16, #0x5d0]
7101a2fe54  cbz w17,0x7101a2fe70
7101a2fe58  ldrb w17,[x16, #0x6b9]
7101a2fe5c  cbz w17,0x7101a2fe6c
7101a2fe60  ldr w17,[x16, #0x1f8]
7101a2fe64  cmp w17,#0x3
7101a2fe68  cset w17,eq
7101a2fe6c  add w9,w9,w17
7101a2fe70  ldr w16,[x16, #0x5d4]
7101a2fe74  sub w16,w16,#0x3
7101a2fe78  cmp w16,#0x2
7101a2fe7c  add x13,x13,#0x1
7101a2fe80  cinc w9,w9,cc
7101a2fe84  add x15,x15,#0x10
7101a2fe88  cmp x13,x11
7101a2fe8c  b.lt 0x7101a2fe44
7101a2fe90  cmp w8,#0x16
7101a2fe94  b.eq 0x7101a2fed4
7101a2fe98  cmp w8,#0x15
7101a2fe9c  b.ne 0x7101a2fef4
7101a2fea0  cmp w10,#0x1
7101a2fea4  cset w8,gt
7101a2fea8  cmp w9,#0x0
7101a2feac  cset w9,eq
7101a2feb0  and w8,w8,w9
7101a2feb4  mov w20,#0x1
7101a2feb8  mov w19,w8
7101a2febc  ldrb w9,[x24, #0x169]
7101a2fec0  cbnz w9,0x7101a2ff3c
7101a2fec4  b 0x7101a3000c
7101a2fec8  ldr w11,[x13]
7101a2fecc  mov w20,#0x2
7101a2fed0  b 0x7101a2fefc
7101a2fed4  ldr w8,[x12]
7101a2fed8  cmp w8,w10
7101a2fedc  cset w21,le
7101a2fee0  cmp w9,#0x0
7101a2fee4  cset w22,eq
7101a2fee8  and w19,w21,w22
7101a2feec  mov w20,#0x1
7101a2fef0  b 0x7101a2ffe4
7101a2fef4  mov w20,#0x1
7101a2fef8  mov w11,#0x1
7101a2fefc  cmp w11,w10
7101a2ff00  cset w21,le
7101a2ff04  cmp w9,#0x0
7101a2ff08  cset w22,eq
7101a2ff0c  cmp w8,#0x16
7101a2ff10  and w19,w21,w22
7101a2ff14  b.hi 0x7101a30210
7101a2ff18  mov w9,#0x1
7101a2ff1c  lsl w9,w9,w8
7101a2ff20  mov w10,#0x19
7101a2ff24  movk w10,#0x20, LSL #16
7101a2ff28  tst w9,w10
7101a2ff2c  b.eq 0x7101a2ffdc
7101a2ff30  mov w8,w19
7101a2ff34  ldrb w9,[x24, #0x169]
7101a2ff38  cbz w9,0x7101a3000c
7101a2ff3c  cbz w8,0x7101a3000c
7101a2ff40  ldp w8,w9,[x29, #-0xe0]
7101a2ff44  cmp w9,#0x0
7101a2ff48  mov w10,#0x2
7101a2ff4c  cset w9,gt
7101a2ff50  csinc w10,w10,wzr,gt
7101a2ff54  cmp w8,#0x0
7101a2ff58  csel w8,w9,w10,le
7101a2ff5c  ldur w9,[x29, #-0xd8]
7101a2ff60  cmp w9,#0x0
7101a2ff64  ldur w9,[x29, #-0xd4]
7101a2ff68  cinc w8,w8,gt
7101a2ff6c  cmp w9,#0x0
7101a2ff70  cinc w8,w8,gt
7101a2ff74  cmp w20,w8
7101a2ff78  b.hi 0x7101a30010
7101a2ff7c  ldr w8,[x24, #0x16c]
7101a2ff80  cmp w8,#0xb
7101a2ff84  b.ne 0x7101a2ffcc
7101a2ff88  ldr x9,[x24, #0x258]
7101a2ff8c  ldr x8,[x24, #0x250]
7101a2ff90  add x0,x24,#0x250
7101a2ff94  subs x9,x9,x8
7101a2ff98  b.eq 0x7101a30b90
7101a2ff9c  ldr x10,[x8, #0x8]
7101a2ffa0  ldr w10,[x10, #0x1f8]
7101a2ffa4  cmp w10,#0x2
7101a2ffa8  b.ne 0x7101a30208
7101a2ffac  asr x9,x9,#0x4
7101a2ffb0  cmp x9,#0x1
7101a2ffb4  b.ls 0x7101a30b90
7101a2ffb8  ldr x8,[x8, #0x18]
7101a2ffbc  ldr w8,[x8, #0x1f8]
7101a2ffc0  cmp w8,#0x2
7101a2ffc4  cset w22,ne
7101a2ffc8  b 0x7101a30014
7101a2ffcc  mov w22,#0x1
7101a2ffd0  cmp w8,#0x6
7101a2ffd4  b.eq 0x7101a30020
7101a2ffd8  b 0x7101a30044
7101a2ffdc  cmp w8,#0x16
7101a2ffe0  b.ne 0x7101a30210
7101a2ffe4  adrp x8,0x7105314000
7101a2ffe8  add x8,x8,#0x4d8
7101a2ffec  ldarb w8,[x8]
7101a2fff0  tbz w8,#0x0,0x7101a30a34
7101a2fff4  adrp x8,0x710530a000
7101a2fff8  ldrb w8,[x8, #0x9c0]
7101a2fffc  cbz w8,0x7101a3000c
7101a30000  and w8,w21,w22
7101a30004  ldrb w9,[x24, #0x169]
7101a30008  cbnz w9,0x7101a2ff3c
7101a3000c  cbnz w19,0x7101a2ff7c
7101a30010  mov w22,wzr
7101a30014  ldr w8,[x24, #0x16c]
7101a30018  cmp w8,#0x6
7101a3001c  b.ne 0x7101a30044
7101a30020  ldr x9,[x24, #0x258]
7101a30024  ldr x8,[x24, #0x250]
7101a30028  cmp x9,x8
7101a3002c  b.eq 0x7101a30ba4
7101a30030  ldr x8,[x8, #0x8]
7101a30034  ldr w8,[x8, #0x1f8]
7101a30038  cmp w8,#0x3
7101a3003c  cset w8,ne
7101a30040  and w22,w22,w8
7101a30044  ldrb w8,[x24, #0xf87]
7101a30048  cmp w8,w22
7101a3004c  b.eq 0x7101a308c8
7101a30050  ldrb w8,[x24, #0xf80]
7101a30054  strb w22,[x24, #0xf87]
7101a30058  cbnz w8,0x7101a308c8
7101a3005c  ldr x8,[sp, #0x80]
7101a30060  ldr x8,[x8]
7101a30064  ldr x9,[x8, #0x1b8]
7101a30068  cbz x9,0x7101a300d8
7101a3006c  add x10,x8,#0x1b8
7101a30070  mov x8,x10
7101a30074  ldr w11,[x9, #0x20]
7101a30078  cmp w11,#0x6
7101a3007c  cset w11,lt
7101a30080  csel x8,x8,x9,lt
7101a30084  ldr x9,[x9, w11, UXTW #0x3]
7101a30088  cbnz x9,0x7101a30074
7101a3008c  cmp x8,x10
7101a30090  b.eq 0x7101a300d8
7101a30094  ldr w9,[x8, #0x20]
7101a30098  cmp w9,#0x6
7101a3009c  b.gt 0x7101a300d8
7101a300a0  ldr x23,[x8, #0x28]
7101a300a4  cbz x23,0x7101a300d8
7101a300a8  ldr x8,[x23]
7101a300ac  ldr x8,[x8, #0x1f8]
7101a300b0  mov x0,x23
7101a300b4  mov w1,w22
7101a300b8  blr x8
7101a300bc  ldr x8,[x23]
7101a300c0  ldr x8,[x8, #0x388]
7101a300c4  eor w1,w22,#0x1
7101a300c8  mov x0,x23
7101a300cc  mov w2,wzr
7101a300d0  blr x8
7101a300d4  ldrb w22,[x24, #0xf87]
7101a300d8  ldr w20,[x24, #0xf68]
7101a300dc  sxtw x8,w20
7101a300e0  cmn w20,#0x1
7101a300e4  cbz w22,0x7101a30174
7101a300e8  b.eq 0x7101a30634
7101a300ec  ldrb w10,[x24, #0xf8c]
7101a300f0  mov w9,w20
7101a300f4  cbz w10,0x7101a30220
7101a300f8  cmp w20,#0x1
7101a300fc  b.gt 0x7101a30218
7101a30100  ldr x10,[x24, #0x240]
7101a30104  ldr x9,[x24, #0x238]
7101a30108  cmp x10,x9
7101a3010c  b.eq 0x7101a30af4
7101a30110  ldr x11,[x24, #0x258]
7101a30114  ldr x10,[x24, #0x250]
7101a30118  sub x11,x11,x10
7101a3011c  add x8,x8,#0x1
7101a30120  asr x11,x11,#0x4
7101a30124  cmp x11,x8
7101a30128  b.ls 0x7101a30ba4
7101a3012c  add x8,x10,x8, LSL #0x4
7101a30130  ldr x8,[x8, #0x8]
7101a30134  ldrsw x8,[x8, #0x150]
7101a30138  cmp w8,#0xa
7101a3013c  b.cs 0x7101a30afc
7101a30140  ldr x10,[x24, #0xdf0]
7101a30144  mov w11,#0x130
7101a30148  madd x8,x8,x11,x10
7101a3014c  ldr x8,[x8, #0x28]
7101a30150  ldr x8,[x8, #0x18]
7101a30154  ldr x8,[x8]
7101a30158  cbz x8,0x7101a30510
7101a3015c  movi v0.2D,#0x0
7101a30160  add x10,x8,#0x30
7101a30164  add x8,x8,#0x34
7101a30168  ld1 {v0.S}[0],[x10]
7101a3016c  ld1 {v0.S}[1],[x8]
7101a30170  b 0x7101a3051c
7101a30174  b.eq 0x7101a30634
7101a30178  ldr w9,[x24, #0xf6c]
7101a3017c  cmp w20,w9
7101a30180  b.ne 0x7101a3062c
7101a30184  ldrb w9,[x24, #0xf8c]
7101a30188  cmp w9,#0x0
7101a3018c  ldr x9,[x24, #0x240]
7101a30190  ldr x20,[x24, #0x238]
7101a30194  csel x19,x8,xzr,eq
7101a30198  sub x9,x9,x20
7101a3019c  asr x9,x9,#0x4
7101a301a0  cmp x9,x19
7101a301a4  b.ls 0x7101a30af4
7101a301a8  ldr x10,[x24, #0x258]
7101a301ac  ldr x9,[x24, #0x250]
7101a301b0  sub x10,x10,x9
7101a301b4  asr x10,x10,#0x4
7101a301b8  cmp x10,x8
7101a301bc  b.ls 0x7101a30ba4
7101a301c0  add x8,x9,x8, LSL #0x4
7101a301c4  ldr x8,[x8, #0x8]
7101a301c8  ldrsw x8,[x8, #0x150]
7101a301cc  cmp w8,#0xa
7101a301d0  b.cs 0x7101a30afc
7101a301d4  ldr x9,[x24, #0xdf0]
7101a301d8  mov w10,#0x130
7101a301dc  madd x8,x8,x10,x9
7101a301e0  ldr x8,[x8, #0x28]
7101a301e4  ldr x8,[x8, #0x18]
7101a301e8  ldr x8,[x8]
7101a301ec  cbz x8,0x7101a30570
7101a301f0  movi v2.2D,#0x0
7101a301f4  add x9,x8,#0x30
7101a301f8  add x8,x8,#0x34
7101a301fc  ld1 {v2.S}[0],[x9]
7101a30200  ld1 {v2.S}[1],[x8]
7101a30204  b 0x7101a3057c
7101a30208  mov w22,#0x1
7101a3020c  b 0x7101a30014
7101a30210  tbz w19,#0x0,0x7101a30010
7101a30214  b 0x7101a2ff7c
7101a30218  mov w9,wzr
7101a3021c  str wzr,[x24, #0xf68]
7101a30220  sxtw x8,w9
7101a30224  ldr x10,[x24, #0x240]
7101a30228  ldr x9,[x24, #0x238]
7101a3022c  sub x10,x10,x9
7101a30230  asr x10,x10,#0x4
7101a30234  cmp x10,x8
7101a30238  b.ls 0x7101a30af4
7101a3023c  add x22,x9,x8, LSL #0x4
7101a30240  ldr x8,[x22, #0x8]!
7101a30244  ldr x8,[x8, #0x20]
7101a30248  ldr x8,[x8, #0x100]
7101a3024c  ldr q0,[x8, #0x60]
7101a30250  ldr x8,[sp, #0x80]
7101a30254  ldr x1,[x8]
7101a30258  add x0,sp,#0x138
7101a3025c  orr w2,wzr,#0x6
7101a30260  str q0,[sp, #0x70]
7101a30264  bl 0x7103771d60
7101a30268  ldr x21,[sp, #0x140]
7101a3026c  ldr x1,[x21]
7101a30270  sub x0,x29,#0xe0
7101a30274  bl 0x710377ad90
7101a30278  adrp x8,0x710523d000
7101a3027c  add x8,x8,#0x9c8
7101a30280  stp x8,xzr,[sp, #0x138]
7101a30284  cbz x21,0x7101a30290
7101a30288  mov x0,x21
7101a3028c  bl 0x710392eb40
7101a30290  ldur x21,[x29, #-0xd8]
7101a30294  ldr x8,[x21]
7101a30298  cbz x8,0x7101a302fc
7101a3029c  movi v2.2D,#0x0
7101a302a0  ldr s4,[x8, #0x30]
7101a302a4  add x9,x8,#0x34
7101a302a8  ldp s0,s1,[x8, #0x50]
7101a302ac  ldr q16,[sp, #0x70]
7101a302b0  ldp s5,s6,[x8, #0x48]
7101a302b4  mov v3.16B,v2.16B
7101a302b8  fmul s1,s1,s6
7101a302bc  fmul s0,s0,s5
7101a302c0  fabs s1,s1
7101a302c4  mov v3.S[0x0],v4.S[0x0]
7101a302c8  fabs s0,s0
7101a302cc  fmul s5,s0,s9
7101a302d0  ld1 {v3.S}[1],[x9]
7101a302d4  add x9,x8,#0x38
7101a302d8  ld1 {v3.S}[2],[x9]
7101a302dc  ldrb w9,[x8, #0x5b]
7101a302e0  and w10,w9,#0x3
7101a302e4  cmp w10,#0x2
7101a302e8  b.eq 0x7101a3031c
7101a302ec  cmp w10,#0x1
7101a302f0  b.ne 0x7101a30324
7101a302f4  fadd s4,s4,s5
7101a302f8  b 0x7101a30320
7101a302fc  adrp x8,0x71052a8000
7101a30300  ldr x8,[x8, #0xa88]
7101a30304  ldr q16,[sp, #0x70]
7101a30308  ldr q5,[x8]
7101a3030c  fmov s0,wzr
7101a30310  mov v1.16B,v0.16B
7101a30314  dup s4,v5.S[0x1]
7101a30318  b 0x7101a3039c
7101a3031c  fsub s4,s4,s5
7101a30320  mov v3.S[0x0],v4.S[0x0]
7101a30324  fmul s4,s1,s9
7101a30328  ubfx w9,w9,#0x2,#0x2
7101a3032c  cmp w9,#0x2
7101a30330  b.eq 0x7101a30348
7101a30334  cmp w9,#0x1
7101a30338  b.ne 0x7101a30354
7101a3033c  dup s5,v3.S[0x1]
7101a30340  fsub s4,s5,s4
7101a30344  b 0x7101a30350
7101a30348  dup s5,v3.S[0x1]
7101a3034c  fadd s4,s4,s5
7101a30350  mov v3.S[0x1],v4.S[0x0]
7101a30354  ldr x8,[x8, #0x18]
7101a30358  cbz x8,0x7101a30394
7101a3035c  ldp s4,s6,[x8, #0x30]
7101a30360  fadd s5,s3,s4
7101a30364  dup s4,v3.S[0x1]
7101a30368  fadd s4,s4,s6
7101a3036c  dup s7,v3.S[0x2]
7101a30370  mov v3.16B,v2.16B
7101a30374  mov v3.S[0x0],v5.S[0x0]
7101a30378  ldr s6,[x8, #0x38]
7101a3037c  mov v3.S[0x1],v4.S[0x0]
7101a30380  fadd s6,s7,s6
7101a30384  mov v3.S[0x2],v6.S[0x0]
7101a30388  ldr x8,[x8, #0x18]
7101a3038c  cbnz x8,0x7101a3035c
7101a30390  b 0x7101a3039c
7101a30394  dup s4,v3.S[0x1]
7101a30398  mov v5.16B,v3.16B
7101a3039c  adrp x8,0x7104472000
7101a303a0  ldr s2,[x8, #0x8b8]
7101a303a4  movi v6.2D,#0x0
7101a303a8  fadd s2,s5,s2
7101a303ac  mov v5.16B,v6.16B
7101a303b0  adrp x8,0x7104472000
7101a303b4  mov v5.S[0x0],v0.S[0x0]
7101a303b8  ldr s3,[x8, #0x4c4]
7101a303bc  mov v5.S[0x1],v1.S[0x0]
7101a303c0  movi v1.4S,#0x3f, LSL #24
7101a303c4  fmul v1.4S,v5.4S,v1.4S
7101a303c8  fsub s0,s3,s4
7101a303cc  dup s5,v1.S[0x1]
7101a303d0  fsub s4,s2,s1
7101a303d4  fadd s1,s2,s1
7101a303d8  fsub s1,s1,s4
7101a303dc  fsub s2,s0,s5
7101a303e0  fadd s0,s0,s5
7101a303e4  fmul s1,s1,s9
7101a303e8  fsub s0,s0,s2
7101a303ec  fmul s0,s0,s9
7101a303f0  adrp x8,0x7104473000
7101a303f4  fadd s1,s4,s1
7101a303f8  fadd s0,s2,s0
7101a303fc  ldr s2,[x8, #0x208]
7101a30400  adrp x8,0x7104473000
7101a30404  fadd s1,s1,s2
7101a30408  mov v2.16B,v6.16B
7101a3040c  fsub s0,s3,s0
7101a30410  mov v2.S[0x0],v1.S[0x0]
7101a30414  mov v2.S[0x1],v0.S[0x0]
7101a30418  fsub v0.4S,v16.4S,v2.4S
7101a3041c  ldr s2,[x8, #0x134]
7101a30420  fmul v1.4S,v0.4S,v0.4S
7101a30424  faddp v1.2S,v1.2S,v1.2S
7101a30428  adrp x8,0x7104468000
7101a3042c  fcmgt v1.4S,v2.4S,v1.4S
7101a30430  ldr q2,[x8, #0x4b0]
7101a30434  ldr x8,[sp, #0x80]
7101a30438  ldr x8,[x8]
7101a3043c  fadd v2.4S,v0.4S,v2.4S
7101a30440  dup v1.4S,v1.S[0x0]
7101a30444  ldr x9,[x8, #0x1b8]
7101a30448  bsl v1.16B,v2.16B,v0.16B
7101a3044c  cbz x9,0x7101a304a8
7101a30450  add x10,x8,#0x1b8
7101a30454  mov x8,x10
7101a30458  ldr w11,[x9, #0x20]
7101a3045c  cmp w11,#0x6
7101a30460  cset w11,lt
7101a30464  csel x8,x8,x9,lt
7101a30468  ldr x9,[x9, w11, UXTW #0x3]
7101a3046c  cbnz x9,0x7101a30458
7101a30470  cmp x8,x10
7101a30474  b.eq 0x7101a304a8
7101a30478  ldr w9,[x8, #0x20]
7101a3047c  cmp w9,#0x6
7101a30480  b.gt 0x7101a304a8
7101a30484  ldr x0,[x8, #0x28]
7101a30488  cbz x0,0x7101a304a8
7101a3048c  ldr x8,[x0]
7101a30490  orr w1,wzr,#0x6
7101a30494  ldr x8,[x8, #0x2c0]
7101a30498  str q1,[sp, #0x80]
7101a3049c  blr x8
7101a304a0  ldp q16,q1,[sp, #0x70]
7101a304a4  movi v6.2D,#0x0
7101a304a8  ldr x8,[x22]
7101a304ac  ldr x8,[x8, #0x20]
7101a304b0  ldr x8,[x8, #0x100]
7101a304b4  fsub v0.4S,v16.4S,v1.4S
7101a304b8  ldp s1,s2,[x8, #0x90]
7101a304bc  fcmp s0,s1
7101a304c0  dup s3,v0.S[0x1]
7101a304c4  fcsel s0,s1,s0,mi
7101a304c8  fcmp s2,s0
7101a304cc  fcsel s0,s2,s0,mi
7101a304d0  ldp s1,s2,[x8, #0x98]
7101a304d4  fcmp s3,s1
7101a304d8  mov v6.S[0x0],v0.S[0x0]
7101a304dc  fcsel s1,s1,s3,mi
7101a304e0  fcmp s2,s1
7101a304e4  fcsel s0,s2,s1,mi
7101a304e8  mov v6.S[0x1],v0.S[0x0]
7101a304ec  str q6,[x8, #0x70]
7101a304f0  adrp x8,0x710523d000
7101a304f4  add x8,x8,#0x9a8
7101a304f8  str w20,[x24, #0xf6c]
7101a304fc  stp x8,xzr,[x29, #-0xe0]
7101a30500  cbz x21,0x7101a30634
7101a30504  mov x0,x21
7101a30508  bl 0x710392eb40
7101a3050c  b 0x7101a30634
7101a30510  adrp x8,0x71052a8000
7101a30514  ldr x8,[x8, #0xa80]
7101a30518  ldr q0,[x8]
7101a3051c  ldr x8,[x9, #0x8]
7101a30520  ldr x8,[x8, #0x20]
7101a30524  ldr x8,[x8, #0x100]
7101a30528  dup s1,v0.S[0x1]
7101a3052c  ldp s2,s3,[x8, #0x90]
7101a30530  fcmp s0,s2
7101a30534  fcsel s0,s2,s0,mi
7101a30538  fcmp s3,s0
7101a3053c  fcsel s0,s3,s0,mi
7101a30540  ldp s2,s3,[x8, #0x98]
7101a30544  fcmp s1,s2
7101a30548  fcsel s1,s2,s1,mi
7101a3054c  movi v2.2D,#0x0
7101a30550  fcmp s3,s1
7101a30554  mov v2.S[0x0],v0.S[0x0]
7101a30558  fcsel s0,s3,s1,mi
7101a3055c  mov v2.S[0x1],v0.S[0x0]
7101a30560  str q2,[x8, #0x70]
7101a30564  mov w8,#0xffffffff
7101a30568  str w8,[x24, #0xf68]
7101a3056c  b 0x7101a30634
7101a30570  adrp x8,0x71052a8000
7101a30574  ldr x8,[x8, #0xa80]
7101a30578  ldr q2,[x8]
7101a3057c  ldr x8,[sp, #0x80]
7101a30580  ldr x8,[x8]
7101a30584  ldr x9,[x8, #0x1b8]
7101a30588  cbz x9,0x7101a305e0
7101a3058c  add x10,x8,#0x1b8
7101a30590  mov x8,x10
7101a30594  ldr w11,[x9, #0x20]
7101a30598  cmp w11,#0x6
7101a3059c  cset w11,lt
7101a305a0  csel x8,x8,x9,lt
7101a305a4  ldr x9,[x9, w11, UXTW #0x3]
7101a305a8  cbnz x9,0x7101a30594
7101a305ac  cmp x8,x10
7101a305b0  b.eq 0x7101a305e0
7101a305b4  ldr w9,[x8, #0x20]
7101a305b8  cmp w9,#0x6
7101a305bc  b.gt 0x7101a305e0
7101a305c0  ldr x0,[x8, #0x28]
7101a305c4  cbz x0,0x7101a305e0
7101a305c8  ldr x8,[x0]
7101a305cc  orr w1,wzr,#0x6
7101a305d0  ldr x8,[x8, #0x2c0]
7101a305d4  str q2,[sp, #0x80]
7101a305d8  blr x8
7101a305dc  ldr q2,[sp, #0x80]
7101a305e0  add x8,x20,x19, LSL #0x4
7101a305e4  ldr x8,[x8, #0x8]
7101a305e8  ldr x8,[x8, #0x20]
7101a305ec  ldr x8,[x8, #0x100]
7101a305f0  ldp s0,s1,[x8, #0x90]
7101a305f4  fcmp s2,s0
7101a305f8  fcsel s0,s0,s2,mi
7101a305fc  fcmp s1,s0
7101a30600  dup s2,v2.S[0x1]
7101a30604  fcsel s0,s1,s0,mi
7101a30608  ldp s1,s3,[x8, #0x98]
7101a3060c  fcmp s2,s1
7101a30610  fcsel s1,s1,s2,mi
7101a30614  movi v2.2D,#0x0
7101a30618  fcmp s3,s1
7101a3061c  mov v2.S[0x0],v0.S[0x0]
7101a30620  fcsel s0,s3,s1,mi
7101a30624  mov v2.S[0x1],v0.S[0x0]
7101a30628  str q2,[x8, #0x70]
7101a3062c  mov w8,#0xffffffff
7101a30630  str w8,[x24, #0xf6c]
7101a30634  ldr x9,[x24, #0x1a0]
7101a30638  ldr x9,[x9]
7101a3063c  ldrb w8,[x24, #0xf87]
7101a30640  ldr x0,[x9, #0x10]
7101a30644  cbz w8,0x7101a307f0
7101a30648  fmov s8,0x3f800000
7101a3064c  mov v0.16B,v8.16B
7101a30650  adrp x20,0x71043ef000
7101a30654  add x20,x20,#0x55
7101a30658  mov x1,x20
7101a3065c  bl 0x7103778300
7101a30660  ldr x8,[x24, #0x198]
7101a30664  ldr x8,[x8]
7101a30668  ldr x0,[x8, #0x10]
7101a3066c  mov v0.16B,v8.16B
7101a30670  mov x1,x20
7101a30674  bl 0x7103778300
7101a30678  ldr x0,[x24, #0xdf0]
7101a3067c  bl 0x71032d0460
7101a30680  ldr x8,[x24, #0x238]
7101a30684  ldr x9,[x24, #0x240]
7101a30688  cmp x8,x9
7101a3068c  b.eq 0x7101a30710
7101a30690  sub x10,x9,#0x10
7101a30694  sub x10,x10,x8
7101a30698  ubfx x11,x10,#0x4,#0x1c
7101a3069c  add w11,w11,#0x1
7101a306a0  ands x11,x11,#0x3
7101a306a4  b.eq 0x7101a306c8
7101a306a8  neg x11,x11
7101a306ac  mov w12,#0x1
7101a306b0  ldr x13,[x8, #0x8]
7101a306b4  add x8,x8,#0x10
7101a306b8  ldr x13,[x13, #0x20]
7101a306bc  adds x11,x11,#0x1
7101a306c0  strb w12,[x13, #0x161]
7101a306c4  b.ne 0x7101a306b0
7101a306c8  cmp x10,#0x30
7101a306cc  b.cc 0x7101a30710
7101a306d0  mov w10,#0x1
7101a306d4  ldr x11,[x8, #0x8]
7101a306d8  ldr x11,[x11, #0x20]
7101a306dc  strb w10,[x11, #0x161]
7101a306e0  ldr x11,[x8, #0x18]
7101a306e4  ldr x11,[x11, #0x20]
7101a306e8  strb w10,[x11, #0x161]
7101a306ec  ldr x11,[x8, #0x28]
7101a306f0  ldr x11,[x11, #0x20]
7101a306f4  strb w10,[x11, #0x161]
7101a306f8  ldr x11,[x8, #0x38]
7101a306fc  add x8,x8,#0x40
7101a30700  cmp x9,x8
7101a30704  ldr x11,[x11, #0x20]
7101a30708  strb w10,[x11, #0x161]
7101a3070c  b.ne 0x7101a306d4
7101a30710  fmov s0,wzr
7101a30714  add x0,x24,#0xe08
7101a30718  bl 0x710377b010
7101a3071c  fmov s0,0x3f800000
7101a30720  add x0,x24,#0xdf8
7101a30724  bl 0x710377aee0
7101a30728  adrp x8,0x710532f000
7101a3072c  ldr x8,[x8, #0x8d0]
7101a30730  ldr x0,[x8, #0x8]
7101a30734  ldrb w8,[x0, #0x191]
7101a30738  cbnz w8,0x7101a307b8
7101a3073c  mov x20,#0x53af
7101a30740  movk x20,#0x9c5a, LSL #16
7101a30744  movk x20,#0xd, LSL #32
7101a30748  mov w2,#0x4
7101a3074c  mov x1,x20
7101a30750  bl 0x7103313f20
7101a30754  tbz w0,#0x0,0x7101a307b8
7101a30758  sub x0,x29,#0xe0
7101a3075c  mov x1,x20
7101a30760  bl 0x71024076d0
7101a30764  ldur x8,[x29, #-0xd0]
7101a30768  adrp x9,0x7104f73000
7101a3076c  add x9,x9,#0xd50
7101a30770  stur x9,[x29, #-0xd8]
7101a30774  cbz x8,0x7101a307e4
7101a30778  adrp x8,0x7106dd5000
7101a3077c  ldrb w8,[x8, #0x3a8]
7101a30780  cmp w8,#0x1
7101a30784  b.ne 0x7101a307e4
7101a30788  adrp x9,0x7106dd5000
7101a3078c  ldur w8,[x29, #-0xc8]
7101a30790  ldr w9,[x9, #0x3ac]
7101a30794  cmp w8,w9
7101a30798  b.ne 0x7101a307e4
7101a3079c  ldur x8,[x29, #-0xd0]
7101a307a0  ldr wzr,[x8, #0x38]!
7101a307a4  ldaxr w9,[x8]
7101a307a8  sub w9,w9,#0x1
7101a307ac  stlxr w10,w9,[x8]
7101a307b0  cbnz w10,0x7101a307a4
7101a307b4  b 0x7101a307e4
7101a307b8  mov w8,#0x6500
7101a307bc  movk w8,#0x87, LSL #16
7101a307c0  stp wzr,w8,[x29, #-0xc8]
7101a307c4  mov x8,#-0x1
7101a307c8  stp x8,xzr,[x29, #-0xb8]
7101a307cc  adrp x8,0x7104f73000
7101a307d0  add x8,x8,#0xd50
7101a307d4  sturb wzr,[x29, #-0xc0]
7101a307d8  stur wzr,[x29, #-0xe0]
7101a307dc  stur xzr,[x29, #-0xa8]
7101a307e0  stp x8,xzr,[x29, #-0xd8]
7101a307e4  stur xzr,[x29, #-0xd0]
7101a307e8  sturb wzr,[x29, #-0xc0]
7101a307ec  b 0x7101a308c8
7101a307f0  fmov s8,0x3f800000
7101a307f4  mov v0.16B,v8.16B
7101a307f8  adrp x20,0x71042d4000
7101a307fc  add x20,x20,#0xaad
7101a30800  mov x1,x20
7101a30804  bl 0x7103778300
7101a30808  ldr x8,[x24, #0x198]
7101a3080c  ldr x8,[x8]
7101a30810  ldr x0,[x8, #0x10]
7101a30814  mov v0.16B,v8.16B
7101a30818  mov x1,x20
7101a3081c  bl 0x7103778300
7101a30820  ldr x0,[x24, #0xdf0]
7101a30824  bl 0x71032d0240
7101a30828  ldr x8,[x24, #0x238]
7101a3082c  ldr x9,[x24, #0x240]
7101a30830  cmp x8,x9
7101a30834  b.eq 0x7101a308b0
7101a30838  sub x10,x9,#0x10
7101a3083c  sub x10,x10,x8
7101a30840  ubfx x11,x10,#0x4,#0x1c
7101a30844  add w11,w11,#0x1
7101a30848  ands x11,x11,#0x3
7101a3084c  b.eq 0x7101a3086c
7101a30850  neg x11,x11
7101a30854  ldr x12,[x8, #0x8]
7101a30858  add x8,x8,#0x10
7101a3085c  ldr x12,[x12, #0x20]
7101a30860  adds x11,x11,#0x1
7101a30864  strb wzr,[x12, #0x161]
7101a30868  b.ne 0x7101a30854
7101a3086c  cmp x10,#0x30
7101a30870  b.cc 0x7101a308b0
7101a30874  ldr x10,[x8, #0x8]
7101a30878  ldr x10,[x10, #0x20]
7101a3087c  strb wzr,[x10, #0x161]
7101a30880  ldr x10,[x8, #0x18]
7101a30884  ldr x10,[x10, #0x20]
7101a30888  strb wzr,[x10, #0x161]
7101a3088c  ldr x10,[x8, #0x28]
7101a30890  ldr x10,[x10, #0x20]
7101a30894  strb wzr,[x10, #0x161]
7101a30898  ldr x10,[x8, #0x38]
7101a3089c  add x8,x8,#0x40
7101a308a0  cmp x9,x8
7101a308a4  ldr x10,[x10, #0x20]
7101a308a8  strb wzr,[x10, #0x161]
7101a308ac  b.ne 0x7101a30874
7101a308b0  fmov s0,wzr
7101a308b4  add x0,x24,#0xdf8
7101a308b8  bl 0x710377b010
7101a308bc  fmov s0,0x3f800000
7101a308c0  add x0,x24,#0xe08
7101a308c4  bl 0x710377aee0
7101a308c8  ldr x0,[x24, #0xdd0]
7101a308cc  bl 0x71019f1410
7101a308d0  ldr x19,[x24, #0xde0]
7101a308d4  ldr x8,[x19, #0x18]
7101a308d8  ldr x0,[x8, #0x8]
7101a308dc  cbz x0,0x7101a308f0
7101a308e0  ldr x8,[x0]
7101a308e4  ldr x8,[x8, #0x138]
7101a308e8  blr x8
7101a308ec  tbz w0,#0x0,0x7101a30900
7101a308f0  adrp x1,0x7104543000
7101a308f4  add x1,x1,#0xac4
7101a308f8  mov x0,x19
7101a308fc  bl 0x71019eb330
7101a30900  ldr x8,[x19, #0x28]
7101a30904  ldr x0,[x8, #0x8]
7101a30908  cbz x0,0x7101a3091c
7101a3090c  ldr x8,[x0]
7101a30910  ldr x8,[x8, #0x138]
7101a30914  blr x8
7101a30918  tbz w0,#0x0,0x7101a3092c
7101a3091c  adrp x1,0x7104543000
7101a30920  add x1,x1,#0xad8
7101a30924  mov x0,x19
7101a30928  bl 0x71019eb330
7101a3092c  ldr x8,[x19, #0x38]
7101a30930  ldr x0,[x8, #0x8]
7101a30934  cbz x0,0x7101a30948
7101a30938  ldr x8,[x0]
7101a3093c  ldr x8,[x8, #0x138]
7101a30940  blr x8
7101a30944  tbz w0,#0x0,0x7101a30958
7101a30948  adrp x1,0x7104543000
7101a3094c  add x1,x1,#0xaec
7101a30950  mov x0,x19
7101a30954  bl 0x71019eb330
7101a30958  ldr x8,[x19, #0x48]
7101a3095c  ldr x0,[x8, #0x8]
7101a30960  cbz x0,0x7101a30974
7101a30964  ldr x8,[x0]
7101a30968  ldr x8,[x8, #0x138]
7101a3096c  blr x8
7101a30970  tbz w0,#0x0,0x7101a30984
7101a30974  adrp x1,0x7104543000
7101a30978  add x1,x1,#0xb00
7101a3097c  mov x0,x19
7101a30980  bl 0x71019eb330
7101a30984  ldr x8,[x19, #0x58]
7101a30988  ldr x0,[x8, #0x8]
7101a3098c  cbz x0,0x7101a309a0
7101a30990  ldr x8,[x0]
7101a30994  ldr x8,[x8, #0x138]
7101a30998  blr x8
7101a3099c  tbz w0,#0x0,0x7101a309b0
7101a309a0  adrp x1,0x7104543000
7101a309a4  add x1,x1,#0xb14
7101a309a8  mov x0,x19
7101a309ac  bl 0x71019eb330
7101a309b0  add sp,sp,#0x1d0
7101a309b4  ldp d9,d8,[sp, #0x30]
7101a309b8  ldp d11,d10,[sp, #0x20]
7101a309bc  ldp d13,d12,[sp, #0x10]
7101a309c0  ldp x29,x30,[sp, #0x90]
7101a309c4  ldp x20,x19,[sp, #0x80]
7101a309c8  ldp x22,x21,[sp, #0x70]
7101a309cc  ldp x24,x23,[sp, #0x60]
7101a309d0  ldp x26,x25,[sp, #0x50]
7101a309d4  ldp x28,x27,[sp, #0x40]
7101a309d8  ldp d15,d14,[sp], #0xa0
7101a309dc  ret
7101a309e0  sub x8,x9,x20
7101a309e4  mul x19,x8,x10
7101a309e8  b 0x7101a2f758
7101a309ec  ldp x9,x10,[x29, #-0xb8]
7101a309f0  ldur x11,[x29, #-0xa8]
7101a309f4  str x9,[x21]
7101a309f8  adrp x9,0x7104f73000
7101a309fc  add x9,x9,#0xd50
7101a30a00  stp x10,x11,[x21, #0x8]
7101a30a04  stur x9,[x29, #-0xd8]
7101a30a08  b 0x7101a2e434
7101a30a0c  str w9,[x28, #0xef0]
7101a30a10  add x9,x28,#0xee8
7101a30a14  add x10,x28,#0xef8
7101a30a18  str x8,[x9]
7101a30a1c  add x8,x8,#0x38
7101a30a20  ldaxr w9,[x8]
7101a30a24  add w9,w9,#0x1
7101a30a28  stlxr w11,w9,[x8]
7101a30a2c  cbnz w11,0x7101a30a20
7101a30a30  b 0x7101a2e40c
7101a30a34  adrp x0,0x7105314000
7101a30a38  add x0,x0,#0x4d8
7101a30a3c  bl 0x71039c06b0
7101a30a40  cbz w0,0x7101a2fff4
7101a30a44  bl 0x7101764000
7101a30a48  adrp x0,0x7101763000
7101a30a4c  add x0,x0,#0xc40
7101a30a50  adrp x1,0x71052c5000
7101a30a54  add x1,x1,#0x180
7101a30a58  adrp x2,0x7104f17000
7101a30a5c  add x2,x2,#0x0
7101a30a60  bl 0x71000001c0
7101a30a64  adrp x0,0x7105314000
7101a30a68  add x0,x0,#0x4d8
7101a30a6c  bl 0x71039c06c0
7101a30a70  b 0x7101a2fff4
7101a30a74  adrp x0,0x7105314000
7101a30a78  add x0,x0,#0x4d8
7101a30a7c  bl 0x71039c06b0
7101a30a80  cbz w0,0x7101a2f748
7101a30a84  bl 0x7101764000
7101a30a88  adrp x0,0x7101763000
7101a30a8c  add x0,x0,#0xc40
7101a30a90  adrp x1,0x71052c5000
7101a30a94  add x1,x1,#0x180
7101a30a98  adrp x2,0x7104f17000
7101a30a9c  add x2,x2,#0x0
7101a30aa0  bl 0x71000001c0
7101a30aa4  adrp x0,0x7105314000
7101a30aa8  add x0,x0,#0x4d8
7101a30aac  bl 0x71039c06c0
7101a30ab0  b 0x7101a2f748
7101a30ab4  adrp x0,0x7105314000
7101a30ab8  add x0,x0,#0x4d8
7101a30abc  bl 0x71039c06b0
7101a30ac0  cbz w0,0x7101a2f93c
7101a30ac4  bl 0x7101764000
7101a30ac8  adrp x0,0x7101763000
7101a30acc  add x0,x0,#0xc40
7101a30ad0  adrp x1,0x71052c5000
7101a30ad4  add x1,x1,#0x180
7101a30ad8  adrp x2,0x7104f17000
7101a30adc  add x2,x2,#0x0
7101a30ae0  bl 0x71000001c0
7101a30ae4  adrp x0,0x7105314000
7101a30ae8  add x0,x0,#0x4d8
7101a30aec  bl 0x71039c06c0
7101a30af0  b 0x7101a2f93c
7101a30af4  ldr x0,[sp, #0x38]
7101a30af8  bl 0x71039c1330
7101a30afc  bl 0x71039c2650
7101a30b00  adrp x0,0x7105314000
7101a30b04  add x0,x0,#0x4d8
7101a30b08  bl 0x71039c06b0
7101a30b0c  cbz w0,0x7101a2db08
7101a30b10  bl 0x7101764000
7101a30b14  adrp x0,0x7101763000
7101a30b18  add x0,x0,#0xc40
7101a30b1c  adrp x1,0x71052c5000
7101a30b20  add x1,x1,#0x180
7101a30b24  adrp x2,0x7104f17000
7101a30b28  add x2,x2,#0x0
7101a30b2c  bl 0x71000001c0
7101a30b30  adrp x0,0x7105314000
7101a30b34  add x0,x0,#0x4d8
7101a30b38  bl 0x71039c06c0
7101a30b3c  b 0x7101a2db08
7101a30b40  adrp x0,0x7105314000
7101a30b44  add x0,x0,#0x4d8
7101a30b48  bl 0x71039c06b0
7101a30b4c  cbz w0,0x7101a2db34
7101a30b50  bl 0x7101764000
7101a30b54  adrp x0,0x7101763000
7101a30b58  add x0,x0,#0xc40
7101a30b5c  adrp x1,0x71052c5000
7101a30b60  add x1,x1,#0x180
7101a30b64  adrp x2,0x7104f17000
7101a30b68  add x2,x2,#0x0
7101a30b6c  bl 0x71000001c0
7101a30b70  adrp x0,0x7105314000
7101a30b74  add x0,x0,#0x4d8
7101a30b78  bl 0x71039c06c0
7101a30b7c  b 0x7101a2db34
7101a30b80  ldr x0,[sp]
7101a30b84  bl 0x71039c1330
7101a30b88  ldr x0,[sp, #0x70]
7101a30b8c  bl 0x71039c1330
7101a30b90  bl 0x71039c1330
7101a30b94  sub x0,x29,#0xe0
7101a30b98  bl 0x71039c0c00
7101a30b9c  mov x0,x26
7101a30ba0  bl 0x71039c1330
7101a30ba4  add x0,x24,#0x250
7101a30ba8  bl 0x71039c1330
7101a30bac  bl 0x71039c0c00
