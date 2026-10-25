// addr:      71020cc550
// offset:    0x20cc550
// name:      FUN_71020cc550
// mangled:   
// size:      612

71020cc550  stp x24,x23,[sp, #-0x40]!
71020cc554  stp x22,x21,[sp, #0x10]
71020cc558  stp x20,x19,[sp, #0x20]
71020cc55c  stp x29,x30,[sp, #0x30]
71020cc560  add x29,sp,#0x30
71020cc564  ldr x9,[x0, #0x20]
71020cc568  ldr x9,[x9]
71020cc56c  ldr x8,[x0, #0x10]
71020cc570  adrp x24,0x7104862000
71020cc574  add x24,x24,#0x960
71020cc578  add x10,x9,#0x10
71020cc57c  cmp x10,x8
71020cc580  sub x22,x8,x10
71020cc584  csel x10,x10,x24,cc
71020cc588  ldr w11,[x10, #0x8]
71020cc58c  and w11,w11,#0xf
71020cc590  mov x19,x0
71020cc594  cmp w11,#0x2
71020cc598  b.eq 0x71020cc5b0
71020cc59c  cmp w11,#0x7
71020cc5a0  b.ne 0x71020cc5b8
71020cc5a4  ldr x10,[x10]
71020cc5a8  add x20,x10,#0x28
71020cc5ac  b 0x71020cc5bc
71020cc5b0  ldr x20,[x10]
71020cc5b4  b 0x71020cc5bc
71020cc5b8  mov x20,xzr
71020cc5bc  add x9,x9,#0x20
71020cc5c0  cmp x9,x8
71020cc5c4  csel x1,x9,x24,cc
71020cc5c8  adrp x2,0x710430c000
71020cc5cc  add x2,x2,#0x66a
71020cc5d0  mov x0,x19
71020cc5d4  lsr x23,x22,#0x4
71020cc5d8  bl 0x71038f4d40
71020cc5dc  ldr x9,[x19, #0x10]
71020cc5e0  sub x8,x9,#0x10
71020cc5e4  ldur w9,[x9, #-0x8]
71020cc5e8  and w9,w9,#0xf
71020cc5ec  cmp w9,#0x2
71020cc5f0  b.eq 0x71020cc608
71020cc5f4  cmp w9,#0x7
71020cc5f8  b.ne 0x71020cc610
71020cc5fc  ldr x9,[x8]
71020cc600  add x9,x9,#0x28
71020cc604  b 0x71020cc614
71020cc608  ldr x9,[x8]
71020cc60c  b 0x71020cc614
71020cc610  mov x9,xzr
71020cc614  str x8,[x19, #0x10]
71020cc618  blr x9
71020cc61c  ldr x8,[x0]
71020cc620  ldr x8,[x8, #0x20]
71020cc624  mov w2,#0x2
71020cc628  mov x1,x19
71020cc62c  mov x21,x0
71020cc630  blr x8
71020cc634  ldr x8,[x19, #0x20]
71020cc638  ldr x9,[x8]
71020cc63c  ldr x8,[x19, #0x10]
71020cc640  add x10,x9,#0x30
71020cc644  cmp x10,x8
71020cc648  csel x10,x10,x24,cc
71020cc64c  ldr w11,[x10, #0x8]
71020cc650  cbz w11,0x71020cc6bc
71020cc654  cmp w11,#0x13
71020cc658  b.eq 0x71020cc6a8
71020cc65c  cmp w11,#0x1
71020cc660  b.ne 0x71020cc774
71020cc664  ldr w10,[x10]
71020cc668  cmp w10,#0x0
71020cc66c  cset w2,ne
71020cc670  tbz w23,#0x1f,0x71020cc6c4
71020cc674  lsl x10,x22,#0x1c
71020cc678  eor x10,x10,#-0x100000000
71020cc67c  add x9,x9,x10, ASR #0x1c
71020cc680  add x9,x9,#0x10
71020cc684  cmp x8,x9
71020cc688  b.cs 0x71020cc6cc
71020cc68c  add x10,x8,#0x10
71020cc690  str x10,[x19, #0x10]
71020cc694  str wzr,[x8, #0x8]
71020cc698  ldr x8,[x19, #0x10]
71020cc69c  cmp x8,x9
71020cc6a0  b.cc 0x71020cc68c
71020cc6a4  b 0x71020cc6cc
71020cc6a8  ldr x12,[x10]
71020cc6ac  cbz x12,0x71020cc6bc
71020cc6b0  scvtf s0,x12
71020cc6b4  fcmp s0,#0.0
71020cc6b8  b.ne 0x71020cc78c
71020cc6bc  mov w2,wzr
71020cc6c0  tbnz w23,#0x1f,0x71020cc674
71020cc6c4  neg x9,x22, LSL #0x1c
71020cc6c8  add x9,x8,x9, ASR #0x1c
71020cc6cc  mov x0,x20
71020cc6d0  mov x1,x21
71020cc6d4  str x9,[x19, #0x10]
71020cc6d8  bl 0x710065d530
71020cc6dc  ldr x8,[x19, #0x10]
71020cc6e0  and w9,w0,#0x1
71020cc6e4  str w9,[x8]
71020cc6e8  mov w9,#0x1
71020cc6ec  str w9,[x8, #0x8]
71020cc6f0  ldp x8,x9,[x19, #0x10]
71020cc6f4  add x8,x8,#0x10
71020cc6f8  str x8,[x19, #0x10]
71020cc6fc  ldr x8,[x9, #0x18]
71020cc700  cmp x8,#0x1
71020cc704  b.lt 0x71020cc710
71020cc708  mov x0,x19
71020cc70c  bl 0x71038fec40
71020cc710  mov x0,x19
71020cc714  bl 0x710391e050
71020cc718  ldr x8,[x19, #0x10]
71020cc71c  mov w9,#0x45
71020cc720  str w9,[x8, #0x8]
71020cc724  str x0,[x8]
71020cc728  ldr x8,[x19, #0x10]
71020cc72c  add x8,x8,#0x10
71020cc730  str x8,[x19, #0x10]
71020cc734  ldr x8,[x21]
71020cc738  ldr x8,[x8, #0x18]
71020cc73c  mov w2,#0x1
71020cc740  mov x0,x21
71020cc744  mov x1,x19
71020cc748  blr x8
71020cc74c  ldr x8,[x21]
71020cc750  ldr x8,[x8, #0x8]
71020cc754  mov x0,x21
71020cc758  blr x8
71020cc75c  ldp x29,x30,[sp, #0x30]
71020cc760  mov w0,#0x2
71020cc764  ldp x20,x19,[sp, #0x20]
71020cc768  ldp x22,x21,[sp, #0x10]
71020cc76c  ldp x24,x23,[sp], #0x40
71020cc770  ret
71020cc774  and w12,w11,#0xf
71020cc778  cmp w12,#0x3
71020cc77c  b.ne 0x71020cc78c
71020cc780  ldr s0,[x10]
71020cc784  fcmp s0,#0.0
71020cc788  b.eq 0x71020cc6bc
71020cc78c  cmp w11,#0x3
71020cc790  b.ne 0x71020cc7a8
71020cc794  ldr s0,[x10]
71020cc798  fcmp s0,#0.0
71020cc79c  cset w2,ne
71020cc7a0  tbz w23,#0x1f,0x71020cc6c4
71020cc7a4  b 0x71020cc674
71020cc7a8  mov w2,#0x1
71020cc7ac  tbz w23,#0x1f,0x71020cc6c4
71020cc7b0  b 0x71020cc674
