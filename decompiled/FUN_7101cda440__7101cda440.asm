// addr:      7101cda440
// offset:    0x1cda440
// name:      FUN_7101cda440
// mangled:   
// size:      568

7101cda440  sub sp,sp,#0x40
7101cda444  stp x22,x21,[sp, #0x10]
7101cda448  stp x20,x19,[sp, #0x20]
7101cda44c  stp x29,x30,[sp, #0x30]
7101cda450  add x29,sp,#0x30
7101cda454  adrp x8,0x7105324000
7101cda458  ldr x21,[x8, #0xfd8]
7101cda45c  adrp x9,0x7105324000
7101cda460  add x9,x9,#0xfd0
7101cda464  ldr x8,[x21, #0x8]
7101cda468  ldarb w9,[x9]
7101cda46c  mov x19,x2
7101cda470  mov w20,w1
7101cda474  tbz w9,#0x0,0x7101cda63c
7101cda478  ldr w9,[x8, #0xc8]
7101cda47c  cmp w9,#0x3
7101cda480  b.ne 0x7101cda4a4
7101cda484  ldr x10,[x8, #0x16c8]
7101cda488  mov w9,w20
7101cda48c  cmp x10,x9
7101cda490  b.ls 0x7101cda4a4
7101cda494  add x8,x8,x9, LSL #0x3
7101cda498  ldr x8,[x8, #0x13a8]
7101cda49c  add x22,x8,#0x8
7101cda4a0  b 0x7101cda4ac
7101cda4a4  adrp x22,0x7105324000
7101cda4a8  add x22,x22,#0xfb0
7101cda4ac  adrp x1,0x710433a000
7101cda4b0  add x1,x1,#0x953
7101cda4b4  mov x8,sp
7101cda4b8  mov x0,x19
7101cda4bc  bl 0x7103776910
7101cda4c0  add x3,x22,#0x8
7101cda4c4  adrp x1,0x71043be000
7101cda4c8  add x1,x1,#0x760
7101cda4cc  mov x0,sp
7101cda4d0  mov w2,#0x1
7101cda4d4  bl 0x710377a280
7101cda4d8  ldr x0,[sp, #0x8]
7101cda4dc  adrp x8,0x710523d000
7101cda4e0  add x8,x8,#0x9a8
7101cda4e4  stp x8,xzr,[sp]
7101cda4e8  cbz x0,0x7101cda4f0
7101cda4ec  bl 0x710392eb40
7101cda4f0  ldr x8,[x21, #0x8]
7101cda4f4  ldr w9,[x8, #0xc8]
7101cda4f8  cmp w9,#0x3
7101cda4fc  b.ne 0x7101cda564
7101cda500  ldr x9,[x8, #0x16c8]
7101cda504  mov w10,w20
7101cda508  adrp x1,0x7104433000
7101cda50c  add x1,x1,#0x2da
7101cda510  cmp x9,x10
7101cda514  b.ls 0x7101cda61c
7101cda518  adrp x9,0x710593b000
7101cda51c  ldr x9,[x9, #0x5f0]
7101cda520  ldr x9,[x9]
7101cda524  mov w11,#0x5998
7101cda528  movk w11,#0x2, LSL #16
7101cda52c  ldr x11,[x9, x11, LSL #0x0]
7101cda530  cbz x11,0x7101cda608
7101cda534  add x8,x8,x10, LSL #0x3
7101cda538  ldr x8,[x8, #0x13a8]
7101cda53c  ldr x8,[x8]
7101cda540  sub x12,x11,#0x1
7101cda544  ands x13,x12,x11
7101cda548  b.eq 0x7101cda570
7101cda54c  cmp x8,x11
7101cda550  mov x10,x8
7101cda554  b.cc 0x7101cda574
7101cda558  udiv x10,x8,x11
7101cda55c  msub x10,x10,x11,x8
7101cda560  b 0x7101cda574
7101cda564  adrp x1,0x7104433000
7101cda568  add x1,x1,#0x2da
7101cda56c  b 0x7101cda61c
7101cda570  and x10,x12,x8
7101cda574  mov w14,#0x5990
7101cda578  movk w14,#0x2, LSL #16
7101cda57c  ldr x9,[x9, x14, LSL #0x0]
7101cda580  ldr x9,[x9, x10, LSL #0x3]
7101cda584  cbz x9,0x7101cda60c
7101cda588  ldr x9,[x9]
7101cda58c  cbz x9,0x7101cda60c
7101cda590  cbz x13,0x7101cda5d4
7101cda594  ldr x12,[x9, #0x8]
7101cda598  cmp x12,x8
7101cda59c  b.ne 0x7101cda5b0
7101cda5a0  ldr x12,[x9, #0x10]
7101cda5a4  cmp x12,x8
7101cda5a8  b.ne 0x7101cda5c8
7101cda5ac  b 0x7101cda60c
7101cda5b0  cmp x12,x11
7101cda5b4  b.cc 0x7101cda5c0
7101cda5b8  udiv x13,x12,x11
7101cda5bc  msub x12,x13,x11,x12
7101cda5c0  cmp x12,x10
7101cda5c4  b.ne 0x7101cda608
7101cda5c8  ldr x9,[x9]
7101cda5cc  cbnz x9,0x7101cda594
7101cda5d0  b 0x7101cda60c
7101cda5d4  ldr x11,[x9, #0x8]
7101cda5d8  and x13,x11,x12
7101cda5dc  cmp x11,x8
7101cda5e0  ccmp x13,x10,#0x4,ne
7101cda5e4  b.ne 0x7101cda608
7101cda5e8  cmp x11,x8
7101cda5ec  b.ne 0x7101cda5fc
7101cda5f0  ldr x11,[x9, #0x10]
7101cda5f4  cmp x11,x8
7101cda5f8  b.eq 0x7101cda60c
7101cda5fc  ldr x9,[x9]
7101cda600  cbnz x9,0x7101cda5d4
7101cda604  b 0x7101cda60c
7101cda608  mov x9,xzr
7101cda60c  adrp x8,0x7104422000
7101cda610  add x8,x8,#0x574
7101cda614  cmp x9,#0x0
7101cda618  csel x1,x1,x8,eq
7101cda61c  ldr x0,[x19, #0x8]
7101cda620  fmov s0,0x3f800000
7101cda624  bl 0x7103778300
7101cda628  ldp x29,x30,[sp, #0x30]
7101cda62c  ldp x20,x19,[sp, #0x20]
7101cda630  ldp x22,x21,[sp, #0x10]
7101cda634  add sp,sp,#0x40
7101cda638  ret
7101cda63c  adrp x0,0x7105324000
7101cda640  add x0,x0,#0xfd0
7101cda644  mov x22,x8
7101cda648  bl 0x71039c06b0
7101cda64c  mov x8,x22
7101cda650  cbz w0,0x7101cda478
7101cda654  adrp x8,0x7105324000
7101cda658  add x8,x8,#0xfb0
7101cda65c  adrp x0,0x7105324000
7101cda660  add x0,x0,#0xfd0
7101cda664  str xzr,[x8]
7101cda668  strh wzr,[x8, #0x8]
7101cda66c  bl 0x71039c06c0
7101cda670  mov x8,x22
7101cda674  b 0x7101cda478
