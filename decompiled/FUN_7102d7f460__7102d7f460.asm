// addr:      7102d7f460
// offset:    0x2d7f460
// name:      FUN_7102d7f460
// mangled:   
// size:      460

7102d7f460  stp d9,d8,[sp, #-0x40]!
7102d7f464  stp x22,x21,[sp, #0x10]
7102d7f468  stp x20,x19,[sp, #0x20]
7102d7f46c  stp x29,x30,[sp, #0x30]
7102d7f470  add x29,sp,#0x30
7102d7f474  ldr x8,[x0, #0x38]
7102d7f478  mov w9,#0x1
7102d7f47c  strb w9,[x8, #0xa5]
7102d7f480  mov x19,x0
7102d7f484  ldr x0,[x0, #0x38]
7102d7f488  ldr x8,[x0]
7102d7f48c  ldr x8,[x8, #0x38]
7102d7f490  blr x8
7102d7f494  ldr x8,[x19, #0x38]
7102d7f498  mov x0,x19
7102d7f49c  ldr s0,[x8, #0x98]
7102d7f4a0  ldr x20,[x0, #0x40]!
7102d7f4a4  ldr x21,[x0, #0x8]
7102d7f4a8  subs x8,x21,x20
7102d7f4ac  b.eq 0x7102d7f628
7102d7f4b0  cmp x20,x21
7102d7f4b4  b.eq 0x7102d7f518
7102d7f4b8  asr x8,x8,#0x3
7102d7f4bc  ucvtf s1,x8
7102d7f4c0  ldr x9,[x20]
7102d7f4c4  ldr s8,[x9, #0x98]
7102d7f4c8  fmul s1,s8,s1
7102d7f4cc  fadd s9,s0,s1
7102d7f4d0  mov w22,#0x1
7102d7f4d4  ldr x8,[x20]
7102d7f4d8  fcmp s9,#0.0
7102d7f4dc  b.lt 0x7102d7f4e4
7102d7f4e0  str s9,[x8, #0xa8]
7102d7f4e4  strb wzr,[x8, #0xa6]
7102d7f4e8  ldr x8,[x20]
7102d7f4ec  strb w22,[x8, #0xa5]
7102d7f4f0  ldr x8,[x20]
7102d7f4f4  ldr w9,[x19, #0x2c]
7102d7f4f8  str w9,[x8, #0xe0]
7102d7f4fc  ldr x0,[x20], #0x8
7102d7f500  ldr x8,[x0]
7102d7f504  ldr x8,[x8, #0x38]
7102d7f508  blr x8
7102d7f50c  fsub s9,s9,s8
7102d7f510  cmp x21,x20
7102d7f514  b.ne 0x7102d7f4d4
7102d7f518  mov w8,#0x1
7102d7f51c  strb w8,[x19, #0x34]
7102d7f520  ldr x8,[x19, #0x8]
7102d7f524  ldr x9,[x8, #0x338]
7102d7f528  ldr x9,[x9]
7102d7f52c  ldr x0,[x9, #0x8]
7102d7f530  cbz x0,0x7102d7f54c
7102d7f534  ldr x8,[x0]
7102d7f538  ldr x8,[x8, #0x58]
7102d7f53c  mov w1,#0xb
7102d7f540  mov w2,#0xffffffff
7102d7f544  blr x8
7102d7f548  ldr x8,[x19, #0x8]
7102d7f54c  ldr x8,[x8, #0x300]
7102d7f550  ldr x9,[x8, #0x18]
7102d7f554  ldp x8,x9,[x9]
7102d7f558  cmp x8,x9
7102d7f55c  b.eq 0x7102d7f614
7102d7f560  mov x10,#0xdf99
7102d7f564  movk x10,#0xb569, LSL #16
7102d7f568  movk x10,#0x7, LSL #32
7102d7f56c  mov x11,x8
7102d7f570  ldr x12,[x11], #0x8
7102d7f574  ldr x13,[x12, #0xa0]
7102d7f578  and x13,x13,#0xffffffffff
7102d7f57c  cmp x13,x10
7102d7f580  b.eq 0x7102d7f590
7102d7f584  cmp x9,x11
7102d7f588  b.ne 0x7102d7f570
7102d7f58c  b 0x7102d7f5b8
7102d7f590  ldr x10,[x12, #0x130]
7102d7f594  cbz x10,0x7102d7f5b8
7102d7f598  ldp x0,x1,[x10]
7102d7f59c  adrp x2,0x71042a1000
7102d7f5a0  add x2,x2,#0x67e
7102d7f5a4  bl 0x71025f55b0
7102d7f5a8  ldr x8,[x19, #0x8]
7102d7f5ac  ldr x8,[x8, #0x300]
7102d7f5b0  ldr x9,[x8, #0x18]
7102d7f5b4  ldp x8,x9,[x9]
7102d7f5b8  cmp x8,x9
7102d7f5bc  b.eq 0x7102d7f614
7102d7f5c0  mov x10,#0x788
7102d7f5c4  movk x10,#0xd842, LSL #16
7102d7f5c8  movk x10,#0x7, LSL #32
7102d7f5cc  ldr x11,[x8], #0x8
7102d7f5d0  ldr x12,[x11, #0xa0]
7102d7f5d4  and x12,x12,#0xffffffffff
7102d7f5d8  cmp x12,x10
7102d7f5dc  b.eq 0x7102d7f5ec
7102d7f5e0  cmp x9,x8
7102d7f5e4  b.ne 0x7102d7f5cc
7102d7f5e8  b 0x7102d7f614
7102d7f5ec  ldr x8,[x11, #0x130]
7102d7f5f0  cbz x8,0x7102d7f614
7102d7f5f4  ldp x0,x1,[x8]
7102d7f5f8  adrp x2,0x7104452000
7102d7f5fc  add x2,x2,#0xb76
7102d7f600  ldp x29,x30,[sp, #0x30]
7102d7f604  ldp x20,x19,[sp, #0x20]
7102d7f608  ldp x22,x21,[sp, #0x10]
7102d7f60c  ldp d9,d8,[sp], #0x40
7102d7f610  b 0x71025f5420
7102d7f614  ldp x29,x30,[sp, #0x30]
7102d7f618  ldp x20,x19,[sp, #0x20]
7102d7f61c  ldp x22,x21,[sp, #0x10]
7102d7f620  ldp d9,d8,[sp], #0x40
7102d7f624  ret
7102d7f628  bl 0x71039c1330
