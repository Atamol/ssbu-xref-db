// addr:      71038fc360
// offset:    0x38fc360
// name:      FUN_71038fc360
// mangled:   
// size:      860

71038fc360  sub sp,sp,#0x70
71038fc364  stp x28,x27,[sp, #0x10]
71038fc368  stp x26,x25,[sp, #0x20]
71038fc36c  stp x24,x23,[sp, #0x30]
71038fc370  stp x22,x21,[sp, #0x40]
71038fc374  stp x20,x19,[sp, #0x50]
71038fc378  stp x29,x30,[sp, #0x60]
71038fc37c  add x29,sp,#0x60
71038fc380  str w2,[sp, #0xc]
71038fc384  ldrh w26,[x0, #0xc4]
71038fc388  mov x19,x0
71038fc38c  cbz x1,0x71038fc39c
71038fc390  ldrh w8,[x1, #0xc6]
71038fc394  add w8,w8,#0x1
71038fc398  b 0x71038fc3a0
71038fc39c  mov w8,#0x1
71038fc3a0  adrp x1,0x71038fc000
71038fc3a4  add x1,x1,#0x6c0
71038fc3a8  add x2,sp,#0xc
71038fc3ac  mov x0,x19
71038fc3b0  strh w8,[x19, #0xc6]
71038fc3b4  strh wzr,[x19, #0xc4]
71038fc3b8  bl 0x71038fb4b0
71038fc3bc  cmn w0,#0x1
71038fc3c0  str w0,[sp, #0x8]
71038fc3c4  b.eq 0x71038fc5fc
71038fc3c8  mov w24,w0
71038fc3cc  cmp w0,#0x2
71038fc3d0  b.lt 0x71038fc688
71038fc3d4  mov w27,#0x4240
71038fc3d8  movk w27,#0xf, LSL #16
71038fc3dc  mov w22,#0x48
71038fc3e0  mov x28,#-0x48
71038fc3e4  ldr x20,[x19, #0x20]
71038fc3e8  cbz x20,0x71038fc610
71038fc3ec  ldrb w8,[x20, #0x42]
71038fc3f0  tbnz w8,#0x4,0x71038fc400
71038fc3f4  ldr x20,[x20, #0x10]
71038fc3f8  cbnz x20,0x71038fc3ec
71038fc3fc  b 0x71038fc608
71038fc400  ldr x8,[x19, #0x38]
71038fc404  ldr x9,[x20, #0x38]
71038fc408  add x25,x8,x9
71038fc40c  mov x0,x19
71038fc410  mov x1,x25
71038fc414  bl 0x71038fdfe0
71038fc418  cmp w24,#0x6
71038fc41c  b.eq 0x71038fc43c
71038fc420  cmp w24,#0x4
71038fc424  b.ne 0x71038fc464
71038fc428  ldr x8,[x19, #0x18]
71038fc42c  ldr x8,[x8, #0xd8]
71038fc430  str x8,[x25]
71038fc434  ldrb w8,[x8, #0x8]
71038fc438  b 0x71038fc458
71038fc43c  mov x0,x19
71038fc440  adrp x1,0x7104338000
71038fc444  add x1,x1,#0xe95
71038fc448  mov w2,#0x17
71038fc44c  bl 0x7103917660
71038fc450  str x0,[x25]
71038fc454  ldrb w8,[x0, #0x8]
71038fc458  orr w8,w8,#0x40
71038fc45c  str w8,[x25, #0x8]
71038fc460  b 0x71038fc470
71038fc464  ldr x8,[x19, #0x10]
71038fc468  ldp x9,x8,[x8, #-0x10]
71038fc46c  stp x9,x8,[x25]
71038fc470  add x8,x25,#0x10
71038fc474  str x8,[x19, #0x10]
71038fc478  str x20,[x19, #0x20]
71038fc47c  ldrb w9,[x20, #0x42]
71038fc480  strh wzr,[x19, #0xc4]
71038fc484  and w9,w9,#0x1
71038fc488  strb w9,[x19, #0xc9]
71038fc48c  mov x9,x20
71038fc490  ldr x10,[x9, #0x8]
71038fc494  ldr x9,[x9, #0x10]
71038fc498  cmp x8,x10
71038fc49c  csel x8,x10,x8,cc
71038fc4a0  cbnz x9,0x71038fc490
71038fc4a4  ldr x9,[x19, #0x38]
71038fc4a8  sub x8,x8,x9
71038fc4ac  lsr x21,x8,#0x4
71038fc4b0  add w8,w21,#0x1
71038fc4b4  add w9,w21,#0x8
71038fc4b8  cmp w8,#0x0
71038fc4bc  csinc w8,w9,w21,lt
71038fc4c0  add w8,w21,w8, ASR #0x3
71038fc4c4  add w8,w8,#0xb
71038fc4c8  cmp w8,w27
71038fc4cc  csel w8,w8,w27,lt
71038fc4d0  str w8,[sp]
71038fc4d4  ldr w8,[x19, #0xb8]
71038fc4d8  mov x23,x20
71038fc4dc  cmp w8,w27
71038fc4e0  ldr x25,[x23, #0x18]!
71038fc4e4  str w26,[sp, #0x4]
71038fc4e8  b.le 0x71038fc53c
71038fc4ec  str xzr,[x23]
71038fc4f0  cbz x25,0x71038fc59c
71038fc4f4  ldr x24,[x19, #0x18]
71038fc4f8  ldp x8,x0,[x24]
71038fc4fc  ldr x23,[x25, #0x18]
71038fc500  mov x1,x25
71038fc504  mov x2,x22
71038fc508  mov x3,xzr
71038fc50c  blr x8
71038fc510  ldr x8,[x24, #0x18]
71038fc514  cmp x25,#0x0
71038fc518  mov x25,x23
71038fc51c  csel x9,xzr,x28,eq
71038fc520  add x8,x9,x8
71038fc524  str x8,[x24, #0x18]
71038fc528  ldrh w8,[x19, #0xa]
71038fc52c  sub w8,w8,#0x1
71038fc530  strh w8,[x19, #0xa]
71038fc534  cbnz x23,0x71038fc4f4
71038fc538  b 0x71038fc59c
71038fc53c  cbz x25,0x71038fc59c
71038fc540  mov x24,x20
71038fc544  ldr x27,[x25, #0x18]
71038fc548  cbz x27,0x71038fc59c
71038fc54c  ldr x26,[x19, #0x18]
71038fc550  ldp x8,x0,[x26]
71038fc554  mov x1,x25
71038fc558  mov x2,x22
71038fc55c  mov x3,xzr
71038fc560  blr x8
71038fc564  ldr x8,[x26, #0x18]
71038fc568  cmp x25,#0x0
71038fc56c  csel x9,xzr,x28,eq
71038fc570  add x8,x9,x8
71038fc574  str x8,[x26, #0x18]
71038fc578  ldrh w8,[x19, #0xa]
71038fc57c  sub w8,w8,#0x1
71038fc580  strh w8,[x19, #0xa]
71038fc584  str x27,[x23]
71038fc588  mov x23,x27
71038fc58c  ldr x25,[x23, #0x18]!
71038fc590  stur x24,[x23, #-0x8]
71038fc594  mov x24,x27
71038fc598  cbnz x25,0x71038fc544
71038fc59c  mov w27,#0x4240
71038fc5a0  movk w27,#0xf, LSL #16
71038fc5a4  cmp w21,w27
71038fc5a8  b.ge 0x71038fc5c8
71038fc5ac  ldr w8,[x19, #0xb8]
71038fc5b0  ldr w9,[sp]
71038fc5b4  cmp w9,w8
71038fc5b8  b.ge 0x71038fc5c8
71038fc5bc  ldr w1,[sp]
71038fc5c0  mov x0,x19
71038fc5c4  bl 0x71038fb530
71038fc5c8  ldr x8,[x20, #0x28]
71038fc5cc  add x2,sp,#0x8
71038fc5d0  mov x0,x19
71038fc5d4  adrp x1,0x71038fc000
71038fc5d8  add x1,x1,#0x7e0
71038fc5dc  str x8,[x19, #0xb0]
71038fc5e0  bl 0x71038fb4b0
71038fc5e4  ldr w26,[sp, #0x4]
71038fc5e8  mov w24,w0
71038fc5ec  cmp w0,#0x1
71038fc5f0  str w0,[sp, #0x8]
71038fc5f4  b.gt 0x71038fc3e4
71038fc5f8  b 0x71038fc688
71038fc5fc  mov w24,#0x2
71038fc600  str w24,[sp, #0x8]
71038fc604  b 0x71038fc688
71038fc608  cmp w24,#0x2
71038fc60c  b.lt 0x71038fc688
71038fc610  ldr x20,[x19, #0x10]
71038fc614  cmp w24,#0x6
71038fc618  strb w24,[x19, #0xc]
71038fc61c  b.eq 0x71038fc644
71038fc620  cmp w24,#0x4
71038fc624  b.ne 0x71038fc670
71038fc628  ldr x8,[x19, #0x18]
71038fc62c  ldr x8,[x8, #0xd8]
71038fc630  str x8,[x20]
71038fc634  ldrb w8,[x8, #0x8]
71038fc638  orr w8,w8,#0x40
71038fc63c  str w8,[x20, #0x8]
71038fc640  b 0x71038fc678
71038fc644  adrp x1,0x7104338000
71038fc648  add x1,x1,#0xe95
71038fc64c  mov w2,#0x17
71038fc650  mov x0,x19
71038fc654  bl 0x7103917660
71038fc658  str x0,[x20]
71038fc65c  ldrb w8,[x0, #0x8]
71038fc660  orr w8,w8,#0x40
71038fc664  str w8,[x20, #0x8]
71038fc668  ldr w24,[sp, #0x8]
71038fc66c  b 0x71038fc678
71038fc670  ldp x8,x9,[x20, #-0x10]
71038fc674  stp x8,x9,[x20]
71038fc678  ldr x9,[x19, #0x20]
71038fc67c  add x8,x20,#0x10
71038fc680  str x8,[x19, #0x10]
71038fc684  str x8,[x9, #0x8]
71038fc688  ldrh w8,[x19, #0xc6]
71038fc68c  sub w8,w8,#0x1
71038fc690  strh w26,[x19, #0xc4]
71038fc694  mov w0,w24
71038fc698  strh w8,[x19, #0xc6]
71038fc69c  ldp x29,x30,[sp, #0x60]
71038fc6a0  ldp x20,x19,[sp, #0x50]
71038fc6a4  ldp x22,x21,[sp, #0x40]
71038fc6a8  ldp x24,x23,[sp, #0x30]
71038fc6ac  ldp x26,x25,[sp, #0x20]
71038fc6b0  ldp x28,x27,[sp, #0x10]
71038fc6b4  add sp,sp,#0x70
71038fc6b8  ret
