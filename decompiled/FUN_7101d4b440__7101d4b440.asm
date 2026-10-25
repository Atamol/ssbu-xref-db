// addr:      7101d4b440
// offset:    0x1d4b440
// name:      FUN_7101d4b440
// mangled:   
// size:      620

7101d4b440  sub sp,sp,#0xd0
7101d4b444  str x23,[sp, #0x90]
7101d4b448  stp x22,x21,[sp, #0xa0]
7101d4b44c  stp x20,x19,[sp, #0xb0]
7101d4b450  stp x29,x30,[sp, #0xc0]
7101d4b454  add x29,sp,#0xc0
7101d4b458  ldr x8,[x0, #0x1f8]
7101d4b45c  cbz x8,0x7101d4b694
7101d4b460  ldr x8,[x0, #0x200]
7101d4b464  mov x20,x0
7101d4b468  cbz x8,0x7101d4b694
7101d4b46c  adrp x8,0x710532f000
7101d4b470  ldr x8,[x8, #0x730]
7101d4b474  strb wzr,[sp, #0x50]
7101d4b478  str xzr,[sp, #0x48]
7101d4b47c  ldr x21,[x8, #0x8]
7101d4b480  ldr w9,[x20, #0x2e4]
7101d4b484  mov x19,x2
7101d4b488  add x8,x21,#0x300
7101d4b48c  cbz w9,0x7101d4b4f4
7101d4b490  ldr x9,[x20, #0x280]
7101d4b494  ldr x2,[x9, w1, SXTW #0x3]
7101d4b498  sxtw x22,w1
7101d4b49c  mov x0,sp
7101d4b4a0  mov x1,x8
7101d4b4a4  mov x23,sp
7101d4b4a8  bl 0x71032a00e0
7101d4b4ac  mov x8,xzr
7101d4b4b0  add x9,x23,#0x8
7101d4b4b4  add x10,sp,#0x48
7101d4b4b8  b 0x7101d4b4c4
7101d4b4bc  add x8,x8,#0x2
7101d4b4c0  strb w11,[x12, #0x9]
7101d4b4c4  add x11,x9,x8
7101d4b4c8  ldrb w13,[x11]
7101d4b4cc  cbz w13,0x7101d4b55c
7101d4b4d0  add w14,w8,#0x1
7101d4b4d4  add x12,x10,x8
7101d4b4d8  cmp w14,#0x3f
7101d4b4dc  strb w13,[x12, #0x8]
7101d4b4e0  b.cs 0x7101d4b558
7101d4b4e4  ldrb w11,[x11, #0x1]
7101d4b4e8  cbnz w11,0x7101d4b4bc
7101d4b4ec  add x8,x8,#0x1
7101d4b4f0  b 0x7101d4b55c
7101d4b4f4  ldr x9,[x20, #0x268]
7101d4b4f8  ldr x2,[x9, w1, SXTW #0x3]
7101d4b4fc  sxtw x22,w1
7101d4b500  mov x0,sp
7101d4b504  mov x1,x8
7101d4b508  mov x23,sp
7101d4b50c  bl 0x71032a00e0
7101d4b510  mov x8,xzr
7101d4b514  add x9,x23,#0x8
7101d4b518  add x10,sp,#0x48
7101d4b51c  b 0x7101d4b528
7101d4b520  add x8,x8,#0x2
7101d4b524  strb w11,[x12, #0x9]
7101d4b528  add x11,x9,x8
7101d4b52c  ldrb w13,[x11]
7101d4b530  cbz w13,0x7101d4b5a0
7101d4b534  add w14,w8,#0x1
7101d4b538  add x12,x10,x8
7101d4b53c  cmp w14,#0x3f
7101d4b540  strb w13,[x12, #0x8]
7101d4b544  b.cs 0x7101d4b59c
7101d4b548  ldrb w11,[x11, #0x1]
7101d4b54c  cbnz w11,0x7101d4b520
7101d4b550  add x8,x8,#0x1
7101d4b554  b 0x7101d4b5a0
7101d4b558  add w8,w8,#0x1
7101d4b55c  add x11,sp,#0x48
7101d4b560  add x9,x11,#0x8
7101d4b564  strb wzr,[x9, w8, UXTW ]
7101d4b568  ldrb w10,[sp, #0x50]
7101d4b56c  mov w9,#0x9dc5
7101d4b570  movk w9,#0x811c, LSL #16
7101d4b574  str w8,[sp, #0x4c]
7101d4b578  cbz w10,0x7101d4b5dc
7101d4b57c  add x8,x11,#0x9
7101d4b580  mov w11,#0x89
7101d4b584  mul w9,w9,w11
7101d4b588  and w10,w10,#0xff
7101d4b58c  eor w9,w9,w10
7101d4b590  ldrb w10,[x8], #0x1
7101d4b594  cbnz w10,0x7101d4b584
7101d4b598  b 0x7101d4b5dc
7101d4b59c  add w8,w8,#0x1
7101d4b5a0  add x11,sp,#0x48
7101d4b5a4  add x9,x11,#0x8
7101d4b5a8  strb wzr,[x9, w8, UXTW ]
7101d4b5ac  ldrb w10,[sp, #0x50]
7101d4b5b0  mov w9,#0x9dc5
7101d4b5b4  movk w9,#0x811c, LSL #16
7101d4b5b8  str w8,[sp, #0x4c]
7101d4b5bc  cbz w10,0x7101d4b5dc
7101d4b5c0  add x8,x11,#0x9
7101d4b5c4  mov w11,#0x89
7101d4b5c8  mul w9,w9,w11
7101d4b5cc  and w10,w10,#0xff
7101d4b5d0  eor w9,w9,w10
7101d4b5d4  ldrb w10,[x8], #0x1
7101d4b5d8  cbnz w10,0x7101d4b5c8
7101d4b5dc  str w9,[sp, #0x48]
7101d4b5e0  ldr w8,[x20, #0x2e4]
7101d4b5e4  cbz w8,0x7101d4b60c
7101d4b5e8  ldr x8,[x20, #0x280]
7101d4b5ec  ldr x1,[x8, x22, LSL #0x3]
7101d4b5f0  ldr x0,[x21, #0x308]
7101d4b5f4  bl 0x710329f140
7101d4b5f8  ldr x9,[x20, #0x200]
7101d4b5fc  ldrsw x9,[x9, #0x254]
7101d4b600  add x9,x20,x9
7101d4b604  ldrb w9,[x9, #0x2d5]
7101d4b608  b 0x7101d4b62c
7101d4b60c  ldr x8,[x20, #0x268]
7101d4b610  ldr x1,[x8, x22, LSL #0x3]
7101d4b614  ldr x0,[x21, #0x308]
7101d4b618  bl 0x710329f140
7101d4b61c  ldr x9,[x20, #0x1f8]
7101d4b620  ldrsw x9,[x9, #0x254]
7101d4b624  add x9,x20,x9
7101d4b628  ldrb w9,[x9, #0x2d1]
7101d4b62c  mov w8,w0
7101d4b630  ldr x0,[x19, #0x8]
7101d4b634  cmp w8,w9
7101d4b638  b.ne 0x7101d4b648
7101d4b63c  adrp x1,0x710439d000
7101d4b640  add x1,x1,#0x6eb
7101d4b644  b 0x7101d4b650
7101d4b648  adrp x1,0x71042d6000
7101d4b64c  add x1,x1,#0x57c
7101d4b650  fmov s0,0x3f800000
7101d4b654  bl 0x7103778300
7101d4b658  adrp x1,0x71043cd000
7101d4b65c  add x1,x1,#0xab4
7101d4b660  mov x8,sp
7101d4b664  mov x0,x19
7101d4b668  bl 0x7103776910
7101d4b66c  add x8,sp,#0x48
7101d4b670  add x1,x8,#0x8
7101d4b674  mov x0,sp
7101d4b678  bl 0x710377a120
7101d4b67c  ldr x0,[sp, #0x8]
7101d4b680  adrp x8,0x710523d000
7101d4b684  add x8,x8,#0x9a8
7101d4b688  stp x8,xzr,[sp]
7101d4b68c  cbz x0,0x7101d4b694
7101d4b690  bl 0x710392eb40
7101d4b694  ldp x29,x30,[sp, #0xc0]
7101d4b698  ldr x23,[sp, #0x90]
7101d4b69c  ldp x20,x19,[sp, #0xb0]
7101d4b6a0  ldp x22,x21,[sp, #0xa0]
7101d4b6a4  add sp,sp,#0xd0
7101d4b6a8  ret
