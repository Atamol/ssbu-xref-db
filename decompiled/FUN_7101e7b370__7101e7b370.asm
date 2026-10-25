// addr:      7101e7b370
// offset:    0x1e7b370
// name:      FUN_7101e7b370
// mangled:   
// size:      1068

7101e7b370  sub sp,sp,#0xa0
7101e7b374  str d8,[sp, #0x30]
7101e7b378  stp x28,x27,[sp, #0x40]
7101e7b37c  stp x26,x25,[sp, #0x50]
7101e7b380  stp x24,x23,[sp, #0x60]
7101e7b384  stp x22,x21,[sp, #0x70]
7101e7b388  stp x20,x19,[sp, #0x80]
7101e7b38c  stp x29,x30,[sp, #0x90]
7101e7b390  add x29,sp,#0x90
7101e7b394  ldr x21,[x0, #0x168]
7101e7b398  mov x10,x21
7101e7b39c  ldr x23,[x0, #0x420]
7101e7b3a0  ldr x8,[x10, #0x58]!
7101e7b3a4  ldr x9,[x21, #0x60]
7101e7b3a8  mov x19,x0
7101e7b3ac  cmp x9,x8
7101e7b3b0  b.eq 0x7101e7b588
7101e7b3b4  fmov s8,0x3f800000
7101e7b3b8  mov x20,xzr
7101e7b3bc  add x9,x21,#0x88
7101e7b3c0  adrp x22,0x7104319000
7101e7b3c4  add x22,x22,#0x507
7101e7b3c8  adrp x24,0x71043ad000
7101e7b3cc  add x24,x24,#0xe8a
7101e7b3d0  adrp x26,0x71043f0000
7101e7b3d4  add x26,x26,#0xf7f
7101e7b3d8  stp x10,x9,[sp, #0x8]
7101e7b3dc  ldp x10,x9,[x23, #0x40]
7101e7b3e0  cmp x10,x9
7101e7b3e4  b.eq 0x7101e7b410
7101e7b3e8  ldrb w11,[x10]
7101e7b3ec  cmp w11,w20, UXTB 
7101e7b3f0  b.eq 0x7101e7b410
7101e7b3f4  add x10,x10,#0x1
7101e7b3f8  cmp x9,x10
7101e7b3fc  b.eq 0x7101e7b430
7101e7b400  ldrb w11,[x10], #0x1
7101e7b404  cmp w11,w20, UXTB 
7101e7b408  b.ne 0x7101e7b3f8
7101e7b40c  sub x10,x10,#0x1
7101e7b410  cmp x10,x9
7101e7b414  b.eq 0x7101e7b430
7101e7b418  add x8,x8,x20, LSL #0x4
7101e7b41c  ldr x0,[x8, #0x8]
7101e7b420  mov v0.16B,v8.16B
7101e7b424  mov x1,x22
7101e7b428  bl 0x7103778300
7101e7b42c  b 0x7101e7b568
7101e7b430  add x8,x8,x20, LSL #0x4
7101e7b434  ldr x0,[x8, #0x8]
7101e7b438  mov v0.16B,v8.16B
7101e7b43c  mov x1,x24
7101e7b440  bl 0x7103778300
7101e7b444  ldp x8,x9,[x21, #0x58]
7101e7b448  sub x9,x9,x8
7101e7b44c  asr x9,x9,#0x4
7101e7b450  cmp x9,x20
7101e7b454  b.ls 0x7101e7b78c
7101e7b458  add x8,x8,x20, LSL #0x4
7101e7b45c  ldr x0,[x8, #0x8]
7101e7b460  mov v0.16B,v8.16B
7101e7b464  mov x1,x26
7101e7b468  bl 0x7103778300
7101e7b46c  ldp x9,x8,[x21, #0x90]
7101e7b470  cmp x9,x8
7101e7b474  b.eq 0x7101e7b48c
7101e7b478  strb w20,[x9]
7101e7b47c  ldr x8,[x21, #0x90]
7101e7b480  add x8,x8,#0x1
7101e7b484  str x8,[x21, #0x90]
7101e7b488  b 0x7101e7b568
7101e7b48c  ldr x10,[sp, #0x10]
7101e7b490  ldr x25,[x10]
7101e7b494  sub x26,x9,x25
7101e7b498  adds x9,x26,#0x1
7101e7b49c  b.mi 0x7101e7b794
7101e7b4a0  sub x8,x8,x25
7101e7b4a4  orr x10,xzr,#0x3ffffffffffffffe
7101e7b4a8  cmp x8,x10
7101e7b4ac  b.hi 0x7101e7b4c4
7101e7b4b0  lsl x8,x8,#0x1
7101e7b4b4  cmp x8,x9
7101e7b4b8  csel x27,x9,x8,cc
7101e7b4bc  cbnz x27,0x7101e7b4c8
7101e7b4c0  b 0x7101e7b51c
7101e7b4c4  orr x27,xzr,#0x7fffffffffffffff
7101e7b4c8  mov w0,#0x10
7101e7b4cc  mov x1,x27
7101e7b4d0  bl 0x710392e290
7101e7b4d4  cbz x0,0x7101e7b4e0
7101e7b4d8  mov x28,x0
7101e7b4dc  b 0x7101e7b520
7101e7b4e0  adrp x8,0x7105332000
7101e7b4e4  ldr x0,[x8, #0xf00]
7101e7b4e8  cbz x0,0x7101e7b51c
7101e7b4ec  str wzr,[sp, #0x28]
7101e7b4f0  str x27,[sp, #0x18]
7101e7b4f4  ldr x8,[x0]
7101e7b4f8  ldr x8,[x8, #0x30]
7101e7b4fc  add x1,sp,#0x28
7101e7b500  add x2,sp,#0x18
7101e7b504  blr x8
7101e7b508  tbz w0,#0x0,0x7101e7b51c
7101e7b50c  mov w0,#0x10
7101e7b510  mov x1,x27
7101e7b514  bl 0x710392e290
7101e7b518  cbnz x0,0x7101e7b4d8
7101e7b51c  mov x28,xzr
7101e7b520  add x24,x28,x26
7101e7b524  add x27,x28,x27
7101e7b528  cmp x26,#0x1
7101e7b52c  strb w20,[x24], #0x1
7101e7b530  b.lt 0x7101e7b544
7101e7b534  mov x0,x28
7101e7b538  mov x1,x25
7101e7b53c  mov x2,x26
7101e7b540  bl 0x71039c00e0
7101e7b544  stp x28,x24,[x21, #0x88]
7101e7b548  adrp x24,0x71043ad000
7101e7b54c  add x24,x24,#0xe8a
7101e7b550  adrp x26,0x71043f0000
7101e7b554  add x26,x26,#0xf7f
7101e7b558  str x27,[x21, #0x98]
7101e7b55c  cbz x25,0x7101e7b568
7101e7b560  mov x0,x25
7101e7b564  bl 0x710392eb40
7101e7b568  add w8,w20,#0x1
7101e7b56c  and x20,x8,#0xff
7101e7b570  ldp x8,x9,[x21, #0x58]
7101e7b574  sub x9,x9,x8
7101e7b578  asr x9,x9,#0x4
7101e7b57c  cmp x9,x20
7101e7b580  b.hi 0x7101e7b3dc
7101e7b584  ldr x21,[x19, #0x168]
7101e7b588  ldp x22,x24,[x21, #0x40]
7101e7b58c  cmp x22,x24
7101e7b590  b.eq 0x7101e7b664
7101e7b594  fmov s8,0x3f800000
7101e7b598  adrp x20,0x71043f0000
7101e7b59c  add x20,x20,#0xf7f
7101e7b5a0  adrp x21,0x71042b4000
7101e7b5a4  add x21,x21,#0xa4e
7101e7b5a8  ldp x25,x8,[x23, #0x58]
7101e7b5ac  ldrb w2,[x22]
7101e7b5b0  ldrb w3,[x22, #0x1]
7101e7b5b4  cmp x25,x8
7101e7b5b8  b.eq 0x7101e7b620
7101e7b5bc  ldrb w9,[x25]
7101e7b5c0  ldrb w10,[x25, #0x1]
7101e7b5c4  cmp w2,w9
7101e7b5c8  ccmp w3,w10,#0x0,eq
7101e7b5cc  b.eq 0x7101e7b620
7101e7b5d0  cmp w3,w9
7101e7b5d4  ccmp w2,w10,#0x0,eq
7101e7b5d8  b.eq 0x7101e7b620
7101e7b5dc  add x25,x25,#0x2
7101e7b5e0  cmp x8,x25
7101e7b5e4  b.eq 0x7101e7b61c
7101e7b5e8  ldrb w10,[x25]
7101e7b5ec  ldrb w9,[x25, #0x1]
7101e7b5f0  cmp w2,w10
7101e7b5f4  b.ne 0x7101e7b600
7101e7b5f8  cmp w3,w9
7101e7b5fc  b.eq 0x7101e7b620
7101e7b600  add x25,x25,#0x2
7101e7b604  cmp w3,w10
7101e7b608  b.ne 0x7101e7b5e0
7101e7b60c  cmp w2,w9
7101e7b610  b.ne 0x7101e7b5e0
7101e7b614  sub x25,x25,#0x2
7101e7b618  b 0x7101e7b620
7101e7b61c  mov x25,x8
7101e7b620  ldr x1,[x19, #0x168]
7101e7b624  add x0,sp,#0x18
7101e7b628  bl 0x7101e85c50
7101e7b62c  ldr x8,[sp, #0x18]
7101e7b630  cbz x8,0x7101e7b658
7101e7b634  ldr x9,[x23, #0x60]
7101e7b638  ldr x0,[x8, #0x8]
7101e7b63c  cmp x9,x25
7101e7b640  b.eq 0x7101e7b64c
7101e7b644  mov x1,x21
7101e7b648  b 0x7101e7b650
7101e7b64c  mov x1,x20
7101e7b650  mov v0.16B,v8.16B
7101e7b654  bl 0x7103778300
7101e7b658  add x22,x22,#0x2
7101e7b65c  cmp x22,x24
7101e7b660  b.ne 0x7101e7b5a8
7101e7b664  add x0,x19,#0x158
7101e7b668  adrp x1,0x710432a000
7101e7b66c  add x1,x1,#0x6af
7101e7b670  add x8,sp,#0x18
7101e7b674  add x20,sp,#0x18
7101e7b678  bl 0x71037780e0
7101e7b67c  mov w0,#0x10
7101e7b680  mov w1,#0x10
7101e7b684  bl 0x710392e290
7101e7b688  cbnz x0,0x7101e7b6d0
7101e7b68c  adrp x8,0x7105332000
7101e7b690  ldr x0,[x8, #0xf00]
7101e7b694  cbz x0,0x7101e7b6cc
7101e7b698  mov w8,#0x10
7101e7b69c  str wzr,[sp, #0x3c]
7101e7b6a0  add x1,sp,#0x3c
7101e7b6a4  str x8,[sp, #0x28]
7101e7b6a8  ldr x8,[x0]
7101e7b6ac  ldr x8,[x8, #0x30]
7101e7b6b0  add x2,sp,#0x28
7101e7b6b4  blr x8
7101e7b6b8  tbz w0,#0x0,0x7101e7b6cc
7101e7b6bc  mov w0,#0x10
7101e7b6c0  mov w1,#0x10
7101e7b6c4  bl 0x710392e290
7101e7b6c8  cbnz x0,0x7101e7b6d0
7101e7b6cc  mov x0,xzr
7101e7b6d0  adrp x21,0x710523d000
7101e7b6d4  add x21,x21,#0x9e8
7101e7b6d8  cmp x20,x0
7101e7b6dc  stp x21,xzr,[x0]
7101e7b6e0  b.eq 0x7101e7b6f0
7101e7b6e4  ldr x8,[sp, #0x20]
7101e7b6e8  str xzr,[sp, #0x20]
7101e7b6ec  str x8,[x0, #0x8]
7101e7b6f0  ldr x8,[x19, #0x408]
7101e7b6f4  str x0,[x19, #0x408]
7101e7b6f8  cbz x8,0x7101e7b70c
7101e7b6fc  ldr x9,[x8]
7101e7b700  ldr x9,[x9, #0x8]
7101e7b704  mov x0,x8
7101e7b708  blr x9
7101e7b70c  ldr x0,[sp, #0x20]
7101e7b710  stp x21,xzr,[sp, #0x18]
7101e7b714  cbz x0,0x7101e7b71c
7101e7b718  bl 0x710392eb40
7101e7b71c  ldr x0,[x19, #0x408]
7101e7b720  fmov s0,0x3f800000
7101e7b724  bl 0x710377aee0
7101e7b728  add x8,x19,#0x144
7101e7b72c  orr x9,xzr,#-0x100000000
7101e7b730  str wzr,[x19, #0x138]
7101e7b734  stp xzr,xzr,[x19, #0x10]
7101e7b738  stp xzr,xzr,[x19, #0x128]
7101e7b73c  stp xzr,xzr,[x19, #0x118]
7101e7b740  stp xzr,xzr,[x19, #0x108]
7101e7b744  stp xzr,xzr,[x19, #0xf8]
7101e7b748  ldr d8,[sp, #0x30]
7101e7b74c  str x9,[x8]
7101e7b750  mov x8,#0xb
7101e7b754  movk x8,#0xa, LSL #32
7101e7b758  orr x9,xzr,#-0xffffffff
7101e7b75c  str x8,[x19, #0xf0]
7101e7b760  add x8,x19,#0x13c
7101e7b764  strb wzr,[x19, #0x14c]
7101e7b768  str x9,[x8]
7101e7b76c  ldp x29,x30,[sp, #0x90]
7101e7b770  ldp x20,x19,[sp, #0x80]
7101e7b774  ldp x22,x21,[sp, #0x70]
7101e7b778  ldp x24,x23,[sp, #0x60]
7101e7b77c  ldp x26,x25,[sp, #0x50]
7101e7b780  ldp x28,x27,[sp, #0x40]
7101e7b784  add sp,sp,#0xa0
7101e7b788  ret
7101e7b78c  ldr x0,[sp, #0x8]
7101e7b790  bl 0x71039c1330
7101e7b794  ldr x0,[sp, #0x10]
7101e7b798  bl 0x71039c0c00
