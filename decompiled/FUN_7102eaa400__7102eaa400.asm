// addr:      7102eaa400
// offset:    0x2eaa400
// name:      FUN_7102eaa400
// mangled:   
// size:      580

7102eaa400  str x19,[sp, #-0x20]!
7102eaa404  stp x29,x30,[sp, #0x10]
7102eaa408  add x29,sp,#0x10
7102eaa40c  ldrb w8,[x0, #0x98]
7102eaa410  mov x19,x0
7102eaa414  cbz w8,0x7102eaa470
7102eaa418  ldrsw x8,[x19, #0xb0]
7102eaa41c  add x8,x19,x8, LSL #0x3
7102eaa420  strb wzr,[x19, #0x98]
7102eaa424  strb wzr,[x19, #0xac]
7102eaa428  ldr x8,[x8, #0xc8]
7102eaa42c  cbz x8,0x7102eaa440
7102eaa430  add x0,x8,#0x108
7102eaa434  mov w9,#0x1
7102eaa438  strb w9,[x8, #0x110]
7102eaa43c  bl 0x71025e9d50
7102eaa440  ldr w8,[x19, #0xb4]
7102eaa444  cmp w8,#0x2
7102eaa448  b.eq 0x7102eaa478
7102eaa44c  cmp w8,#0x1
7102eaa450  b.eq 0x7102eaa528
7102eaa454  cbnz w8,0x7102eaa54c
7102eaa458  ldrsw x8,[x19, #0xb0]
7102eaa45c  add x8,x19,x8, LSL #0x3
7102eaa460  ldr x0,[x8, #0xc8]
7102eaa464  adrp x1,0x71043bc000
7102eaa468  add x1,x1,#0x9b9
7102eaa46c  b 0x7102eaa548
7102eaa470  ldrsw x8,[x19, #0xb0]
7102eaa474  b 0x7102eaa5bc
7102eaa478  ldrsw x9,[x19, #0xb0]
7102eaa47c  add x9,x19,x9, LSL #0x3
7102eaa480  ldrb w8,[x19, #0xb8]
7102eaa484  ldr x0,[x9, #0xc8]
7102eaa488  cbz w8,0x7102eaa540
7102eaa48c  adrp x1,0x7104338000
7102eaa490  add x1,x1,#0x62e
7102eaa494  bl 0x7102610070
7102eaa498  ldrsw x8,[x19, #0xb0]
7102eaa49c  add x8,x19,x8, LSL #0x3
7102eaa4a0  ldr x8,[x8, #0xc8]
7102eaa4a4  cbz x8,0x7102eaa508
7102eaa4a8  add x0,x8,#0x108
7102eaa4ac  mov w9,#0x1
7102eaa4b0  strb w9,[x8, #0x110]
7102eaa4b4  bl 0x71025e9d50
7102eaa4b8  ldrsw x8,[x19, #0xb0]
7102eaa4bc  add x8,x19,x8, LSL #0x3
7102eaa4c0  ldr x8,[x8, #0xc8]
7102eaa4c4  cbz x8,0x7102eaa508
7102eaa4c8  ldr x0,[x8, #0xd8]
7102eaa4cc  fmov s0,wzr
7102eaa4d0  mov w1,#0x1
7102eaa4d4  bl 0x71025ee450
7102eaa4d8  ldrsw x8,[x19, #0xb0]
7102eaa4dc  add x8,x19,x8, LSL #0x3
7102eaa4e0  ldr x8,[x8, #0xc8]
7102eaa4e4  cbz x8,0x7102eaa508
7102eaa4e8  ldrb w9,[x8, #0xe0]
7102eaa4ec  cbz w9,0x7102eaa4fc
7102eaa4f0  ldr x9,[x8, #0xc8]
7102eaa4f4  cbz x9,0x7102eaa4fc
7102eaa4f8  strh wzr,[x9, #0x32]
7102eaa4fc  ldr x8,[x8, #0xd8]
7102eaa500  cbz x8,0x7102eaa508
7102eaa504  strb wzr,[x8, #0x22]
7102eaa508  ldrsw x8,[x19, #0xb0]
7102eaa50c  add x8,x19,x8, LSL #0x3
7102eaa510  ldr x8,[x8, #0xc8]
7102eaa514  cbz x8,0x7102eaa54c
7102eaa518  ldr x8,[x8, #0xd8]
7102eaa51c  cbz x8,0x7102eaa54c
7102eaa520  strb wzr,[x8, #0x21]
7102eaa524  b 0x7102eaa54c
7102eaa528  ldrsw x8,[x19, #0xb0]
7102eaa52c  add x8,x19,x8, LSL #0x3
7102eaa530  ldr x0,[x8, #0xc8]
7102eaa534  adrp x1,0x71043ab000
7102eaa538  add x1,x1,#0xd0c
7102eaa53c  b 0x7102eaa548
7102eaa540  adrp x1,0x71043de000
7102eaa544  add x1,x1,#0x407
7102eaa548  bl 0x7102610070
7102eaa54c  ldrsw x8,[x19, #0xb0]
7102eaa550  add x9,x19,x8, LSL #0x3
7102eaa554  ldr x9,[x9, #0xc8]
7102eaa558  cbz x9,0x7102eaa5a8
7102eaa55c  ldr x8,[x9, #0xd8]
7102eaa560  cbz x8,0x7102eaa578
7102eaa564  strb wzr,[x8, #0x22]
7102eaa568  ldrsw x8,[x19, #0xb0]
7102eaa56c  add x9,x19,x8, LSL #0x3
7102eaa570  ldr x9,[x9, #0xc8]
7102eaa574  cbz x9,0x7102eaa5a8
7102eaa578  ldr x0,[x9, #0xd8]
7102eaa57c  fmov s0,wzr
7102eaa580  mov w1,#0x1
7102eaa584  bl 0x71025ee450
7102eaa588  ldrsw x8,[x19, #0xb0]
7102eaa58c  add x9,x19,x8, LSL #0x3
7102eaa590  ldr x9,[x9, #0xc8]
7102eaa594  cbz x9,0x7102eaa5a8
7102eaa598  ldr x9,[x9, #0xd8]
7102eaa59c  cbz x9,0x7102eaa5a8
7102eaa5a0  strb wzr,[x9, #0x21]
7102eaa5a4  ldrsw x8,[x19, #0xb0]
7102eaa5a8  ldr x9,[x19, #0x10]
7102eaa5ac  ldr x9,[x9, #0x90]
7102eaa5b0  ldr s0,[x9,x8, lsl #2]
7102eaa5b4  fcvtzs w9,s0
7102eaa5b8  str w9,[x19, #0xa8]
7102eaa5bc  add x8,x19,x8, LSL #0x3
7102eaa5c0  ldr x0,[x8, #0xc8]
7102eaa5c4  bl 0x710260ffb0
7102eaa5c8  tbz w0,#0x0,0x7102eaa624
7102eaa5cc  ldr w8,[x19, #0xa8]
7102eaa5d0  ldrsw x9,[x19, #0xb0]
7102eaa5d4  sub w8,w8,#0x1
7102eaa5d8  add x9,x19,x9, LSL #0x3
7102eaa5dc  str w8,[x19, #0xa8]
7102eaa5e0  ldr x9,[x9, #0xc8]
7102eaa5e4  cbz x9,0x7102eaa5fc
7102eaa5e8  ldr x0,[x9, #0xd8]
7102eaa5ec  fmov s0,wzr
7102eaa5f0  mov w1,#0x1
7102eaa5f4  bl 0x71025ee450
7102eaa5f8  ldr w8,[x19, #0xa8]
7102eaa5fc  tbz w8,#0x1f,0x7102eaa624
7102eaa600  ldr w8,[x19, #0xb4]
7102eaa604  cmp w8,#0x2
7102eaa608  b.ne 0x7102eaa614
7102eaa60c  ldrb w8,[x19, #0xb8]
7102eaa610  cbz w8,0x7102eaa630
7102eaa614  orr w8,wzr,#0x3
7102eaa618  str w8,[x19, #0x40]
7102eaa61c  mov w8,#0x1
7102eaa620  strb w8,[x19, #0x98]
7102eaa624  ldp x29,x30,[sp, #0x10]
7102eaa628  ldr x19,[sp], #0x20
7102eaa62c  ret
7102eaa630  mov w8,#0x1
7102eaa634  mov w9,#0x4
7102eaa638  strb w8,[x19, #0xb8]
7102eaa63c  str w9,[x19, #0x40]
7102eaa640  b 0x7102eaa620
