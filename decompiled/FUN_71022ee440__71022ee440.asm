// addr:      71022ee440
// offset:    0x22ee440
// name:      FUN_71022ee440
// mangled:   
// size:      760

71022ee440  sub sp,sp,#0xc0
71022ee444  str x19,[sp, #0xa0]
71022ee448  stp x29,x30,[sp, #0xb0]
71022ee44c  add x29,sp,#0xb0
71022ee450  ldr w8,[x0, #0x284]
71022ee454  mov x19,x0
71022ee458  cbz w8,0x71022ee4f4
71022ee45c  ldr x8,[x19]
71022ee460  ldr x9,[x8, #0x28]
71022ee464  ldr x10,[x9, #0x60]
71022ee468  cbnz x10,0x71022ee654
71022ee46c  ldp x10,x9,[x9, #0x30]
71022ee470  cmp x10,x9
71022ee474  b.ne 0x71022ee654
71022ee478  ldr x8,[x8, #0x20]
71022ee47c  ldr x8,[x8, #0x10]
71022ee480  cbnz x8,0x71022ee654
71022ee484  ldr x0,[x19, #0x298]
71022ee488  bl 0x710323b9e0
71022ee48c  ldr x8,[x19]
71022ee490  ldr w8,[x8, #0x40]
71022ee494  sub w8,w8,#0x1
71022ee498  cmp w8,#0x6
71022ee49c  b.hi 0x71022ee654
71022ee4a0  adrp x9,0x71044fd000
71022ee4a4  add x9,x9,#0x59c
71022ee4a8  ldrsw x8,[x9, x8, LSL #0x2]
71022ee4ac  add x8,x8,x9
71022ee4b0  br x8
71022ee4b4  ldrsw x8,[x19, #0x27c]
71022ee4b8  cmp w8,#0x13
71022ee4bc  b.cs 0x71022ee734
71022ee4c0  add x8,x19,x8, LSL #0x2
71022ee4c4  orr w9,wzr,#0x7
71022ee4c8  str w9,[x8, #0x230]
71022ee4cc  ldr w8,[x19, #0x27c]
71022ee4d0  cmp w8,#0x11
71022ee4d4  b.gt 0x71022ee654
71022ee4d8  add w8,w8,#0x1
71022ee4dc  cmp w8,#0x13
71022ee4e0  str w8,[x19, #0x27c]
71022ee4e4  b.cs 0x71022ee734
71022ee4e8  add x8,x19,w8, SXTW  #0x2
71022ee4ec  orr w9,wzr,#0xe
71022ee4f0  b 0x71022ee72c
71022ee4f4  ldr x19,[x19]
71022ee4f8  ldr w8,[x19, #0x44]
71022ee4fc  mov w9,#0xc34a
71022ee500  movk w9,#0xe7a5, LSL #16
71022ee504  cmp w8,w9
71022ee508  b.ne 0x71022ee528
71022ee50c  add x0,x19,#0x4c
71022ee510  adrp x1,0x7104430000
71022ee514  add x1,x1,#0xdc4
71022ee518  bl 0x71039c0060
71022ee51c  cmp w0,#0x0
71022ee520  cset w9,ne
71022ee524  b 0x71022ee52c
71022ee528  mov w9,#0x1
71022ee52c  mov x12,#0x6d41
71022ee530  movk x12,#0x6969, LSL #16
71022ee534  orr x10,xzr,#0xf00000000
71022ee538  movk x12,#0x6f62, LSL #32
71022ee53c  movk x12,#0x6445, LSL #48
71022ee540  strb w9,[sp, #0x50]
71022ee544  mov x13,#0x7469
71022ee548  movk x13,#0x6353, LSL #16
71022ee54c  mov w8,#0x9dc5
71022ee550  movk w8,#0x811c, LSL #16
71022ee554  stp x10,x12,[sp]
71022ee558  movk x13,#0x6e65, LSL #32
71022ee55c  movk x13,#0x65, LSL #48
71022ee560  str x13,[sp, #0x10]
71022ee564  adrp x10,0x71050b6000
71022ee568  add x10,x10,#0x7e8
71022ee56c  str x10,[sp, #0x48]
71022ee570  mov w11,#0x41
71022ee574  mov w10,#0x9
71022ee578  mov w9,#0x89
71022ee57c  mov x12,sp
71022ee580  mov w13,w8
71022ee584  mul w13,w13,w9
71022ee588  and w11,w11,#0xff
71022ee58c  eor w13,w13,w11
71022ee590  ldrb w11,[x12, x10, LSL ]
71022ee594  add x10,x10,#0x1
71022ee598  cbnz w11,0x71022ee584
71022ee59c  str w13,[sp]
71022ee5a0  ldr x11,[x19, #0x38]
71022ee5a4  cbz x11,0x71022ee5f4
71022ee5a8  mov x10,xzr
71022ee5ac  add x11,x11,#0x10
71022ee5b0  add x12,sp,#0x58
71022ee5b4  str wzr,[sp, #0x58]
71022ee5b8  b 0x71022ee5c4
71022ee5bc  add x10,x10,#0x2
71022ee5c0  strb w13,[x14, #0x9]
71022ee5c4  add x13,x11,x10
71022ee5c8  ldrb w15,[x13]
71022ee5cc  cbz w15,0x71022ee604
71022ee5d0  add w16,w10,#0x1
71022ee5d4  add x14,x12,x10
71022ee5d8  cmp w16,#0x3f
71022ee5dc  strb w15,[x14, #0x8]
71022ee5e0  b.cs 0x71022ee600
71022ee5e4  ldrb w13,[x13, #0x1]
71022ee5e8  cbnz w13,0x71022ee5bc
71022ee5ec  add x10,x10,#0x1
71022ee5f0  b 0x71022ee604
71022ee5f4  strb wzr,[sp, #0x60]
71022ee5f8  str xzr,[sp, #0x58]
71022ee5fc  b 0x71022ee638
71022ee600  add w10,w10,#0x1
71022ee604  add x12,sp,#0x58
71022ee608  add x11,x12,#0x8
71022ee60c  strb wzr,[x11, w10, UXTW ]
71022ee610  ldrb w11,[sp, #0x60]
71022ee614  str w10,[sp, #0x5c]
71022ee618  cbz w11,0x71022ee634
71022ee61c  add x10,x12,#0x9
71022ee620  mul w8,w8,w9
71022ee624  and w11,w11,#0xff
71022ee628  eor w8,w8,w11
71022ee62c  ldrb w11,[x10], #0x1
71022ee630  cbnz w11,0x71022ee620
71022ee634  str w8,[sp, #0x58]
71022ee638  ldr x0,[x19, #0x20]
71022ee63c  mov x1,sp
71022ee640  add x2,sp,#0x58
71022ee644  add x3,sp,#0x48
71022ee648  bl 0x71037266d0
71022ee64c  mov w8,#0x1
71022ee650  str w8,[x19, #0x30]
71022ee654  ldp x29,x30,[sp, #0xb0]
71022ee658  ldr x19,[sp, #0xa0]
71022ee65c  add sp,sp,#0xc0
71022ee660  ret
71022ee664  ldrsw x9,[x19, #0x27c]
71022ee668  mov w8,#0x1
71022ee66c  str w8,[x19, #0x2a0]
71022ee670  cmp w9,#0x13
71022ee674  b.cs 0x71022ee734
71022ee678  add x9,x19,x9, LSL #0x2
71022ee67c  str w8,[x9, #0x230]
71022ee680  ldr w8,[x19, #0x27c]
71022ee684  cmp w8,#0x11
71022ee688  b.gt 0x71022ee654
71022ee68c  add w8,w8,#0x1
71022ee690  cmp w8,#0x13
71022ee694  str w8,[x19, #0x27c]
71022ee698  b.cs 0x71022ee734
71022ee69c  add x8,x19,w8, SXTW  #0x2
71022ee6a0  mov w9,#0x5
71022ee6a4  b 0x71022ee72c
71022ee6a8  ldrsw x8,[x19, #0x27c]
71022ee6ac  cmp w8,#0x13
71022ee6b0  b.cs 0x71022ee734
71022ee6b4  add x8,x19,x8, LSL #0x2
71022ee6b8  mov w9,#0x10
71022ee6bc  b 0x71022ee72c
71022ee6c0  ldrsw x8,[x19, #0x27c]
71022ee6c4  cmp w8,#0x13
71022ee6c8  b.cs 0x71022ee734
71022ee6cc  add x8,x19,x8, LSL #0x2
71022ee6d0  orr w9,wzr,#0x7
71022ee6d4  b 0x71022ee72c
71022ee6d8  ldrsw x8,[x19, #0x27c]
71022ee6dc  cmp w8,#0x13
71022ee6e0  b.cs 0x71022ee734
71022ee6e4  add x8,x19,x8, LSL #0x2
71022ee6e8  mov w9,#0xd
71022ee6ec  str w9,[x8, #0x230]
71022ee6f0  ldr w8,[x19, #0x27c]
71022ee6f4  cmp w8,#0x11
71022ee6f8  b.gt 0x71022ee654
71022ee6fc  add w8,w8,#0x1
71022ee700  cmp w8,#0x13
71022ee704  str w8,[x19, #0x27c]
71022ee708  b.cs 0x71022ee734
71022ee70c  add x8,x19,w8, SXTW  #0x2
71022ee710  orr w9,wzr,#0xc
71022ee714  b 0x71022ee72c
71022ee718  ldrsw x8,[x19, #0x27c]
71022ee71c  cmp w8,#0x13
71022ee720  b.cs 0x71022ee734
71022ee724  add x8,x19,x8, LSL #0x2
71022ee728  mov w9,#0x8
71022ee72c  str w9,[x8, #0x230]
71022ee730  b 0x71022ee654
71022ee734  bl 0x71039c2650
