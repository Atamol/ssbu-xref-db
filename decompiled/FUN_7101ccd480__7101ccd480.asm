// addr:      7101ccd480
// offset:    0x1ccd480
// name:      FUN_7101ccd480
// mangled:   
// size:      608

7101ccd480  sub sp,sp,#0x70
7101ccd484  stp x28,x27,[sp, #0x10]
7101ccd488  stp x26,x25,[sp, #0x20]
7101ccd48c  stp x24,x23,[sp, #0x30]
7101ccd490  stp x22,x21,[sp, #0x40]
7101ccd494  stp x20,x19,[sp, #0x50]
7101ccd498  stp x29,x30,[sp, #0x60]
7101ccd49c  add x29,sp,#0x60
7101ccd4a0  ldr w8,[x0, #0xdc]
7101ccd4a4  mov x19,x0
7101ccd4a8  cbnz w8,0x7101ccd630
7101ccd4ac  ldr x8,[x19, #0xf0]
7101ccd4b0  ldr x0,[x8]
7101ccd4b4  mov w2,#0x3000
7101ccd4b8  movk w2,#0x3, LSL #16
7101ccd4bc  mov w1,#0x1
7101ccd4c0  bl 0x7103775dc0
7101ccd4c4  ldr x8,[x19, #0xf0]
7101ccd4c8  ldr x8,[x8]
7101ccd4cc  add x20,x8,#0x8
7101ccd4d0  ldp x25,x8,[x19, #0x110]
7101ccd4d4  cmp x8,x25
7101ccd4d8  b.eq 0x7101ccd5a0
7101ccd4dc  orr x28,xzr,#-0x5555555555555556
7101ccd4e0  mov x26,xzr
7101ccd4e4  mov x21,xzr
7101ccd4e8  movk x28,#0xaaab
7101ccd4ec  adrp x23,0x710523d000
7101ccd4f0  add x23,x23,#0x9a8
7101ccd4f4  mov x8,sp
7101ccd4f8  mov x0,x20
7101ccd4fc  adrp x1,0x710424f000
7101ccd500  add x1,x1,#0x6d5
7101ccd504  mov w2,w21
7101ccd508  bl 0x7103776910
7101ccd50c  adrp x8,0x710532f000
7101ccd510  ldr x8,[x8, #0x730]
7101ccd514  add x27,x25,x26
7101ccd518  ldr x25,[x27, #0x8]
7101ccd51c  ldr x22,[x8, #0x8]
7101ccd520  ldr x24,[x19, #0xe8]
7101ccd524  mov x1,x25
7101ccd528  add x0,x22,#0x160
7101ccd52c  bl 0x71032648e0
7101ccd530  tbz w0,#0x0,0x7101ccd54c
7101ccd534  ldr x0,[x22, #0x168]
7101ccd538  mov x1,#0xf67e
7101ccd53c  movk x1,#0x3829, LSL #16
7101ccd540  movk x1,#0x14, LSL #32
7101ccd544  bl 0x71032631a0
7101ccd548  mov x25,x0
7101ccd54c  ldr w2,[x27, #0x10]
7101ccd550  mov w3,#0x2
7101ccd554  mov x0,x24
7101ccd558  mov x1,x25
7101ccd55c  bl 0x710323f330
7101ccd560  ldr x24,[sp, #0x8]
7101ccd564  mov x1,x0
7101ccd568  mov x0,x24
7101ccd56c  bl 0x7103778b80
7101ccd570  stp x23,xzr,[sp]
7101ccd574  cbz x24,0x7101ccd580
7101ccd578  mov x0,x24
7101ccd57c  bl 0x710392eb40
7101ccd580  ldp x25,x8,[x19, #0x110]
7101ccd584  sub x8,x8,x25
7101ccd588  asr x8,x8,#0x3
7101ccd58c  mul x8,x8,x28
7101ccd590  add x21,x21,#0x1
7101ccd594  add x26,x26,#0x18
7101ccd598  cmp x8,x21
7101ccd59c  b.hi 0x7101ccd4f4
7101ccd5a0  ldp x21,x8,[x19, #0x128]
7101ccd5a4  cmp x21,x8
7101ccd5a8  b.eq 0x7101ccd614
7101ccd5ac  adrp x1,0x710433a000
7101ccd5b0  add x1,x1,#0x2c1
7101ccd5b4  mov x8,sp
7101ccd5b8  mov x0,x20
7101ccd5bc  bl 0x7103776910
7101ccd5c0  ldr w8,[x21, #0x8]
7101ccd5c4  ldr x0,[x19, #0xe8]
7101ccd5c8  cmp w8,#0x1
7101ccd5cc  ldr x1,[x21]
7101ccd5d0  orr w9,wzr,#0xe
7101ccd5d4  mov w10,#0x10
7101ccd5d8  csel w9,w10,w9,eq
7101ccd5dc  cmp w8,#0x2
7101ccd5e0  orr w8,wzr,#0xf
7101ccd5e4  csel w2,w8,w9,eq
7101ccd5e8  bl 0x710323f4a0
7101ccd5ec  ldr x20,[sp, #0x8]
7101ccd5f0  mov x1,x0
7101ccd5f4  mov x0,x20
7101ccd5f8  bl 0x7103778b80
7101ccd5fc  adrp x8,0x710523d000
7101ccd600  add x8,x8,#0x9a8
7101ccd604  stp x8,xzr,[sp]
7101ccd608  cbz x20,0x7101ccd614
7101ccd60c  mov x0,x20
7101ccd610  bl 0x710392eb40
7101ccd614  ldr x8,[x19, #0xe8]
7101ccd618  ldr x0,[x8]
7101ccd61c  bl 0x710323b9e0
7101ccd620  ldr x8,[x19, #0x110]
7101ccd624  str x8,[x19, #0x118]
7101ccd628  ldr x8,[x19, #0x128]
7101ccd62c  str x8,[x19, #0x130]
7101ccd630  ldr x8,[x19, #0x100]
7101ccd634  ldr x8,[x8]
7101ccd638  ldr x8,[x8, #0x10]
7101ccd63c  ldr x0,[x8, #0x8]
7101ccd640  cbz x0,0x7101ccd664
7101ccd644  adrp x1,0x710428f000
7101ccd648  add x1,x1,#0xf7d
7101ccd64c  bl 0x71037964b0
7101ccd650  cbz x0,0x7101ccd664
7101ccd654  ldr x8,[x0]
7101ccd658  ldr x8,[x8, #0x138]
7101ccd65c  blr x8
7101ccd660  tbz w0,#0x0,0x7101ccd6bc
7101ccd664  ldr w8,[x19, #0xdc]
7101ccd668  cmp w8,#0x5
7101ccd66c  b.lt 0x7101ccd6bc
7101ccd670  adrp x8,0x710593b000
7101ccd674  ldr x8,[x8, #0x8d8]
7101ccd678  ldr x9,[x8]
7101ccd67c  ldp x8,x9,[x9]
7101ccd680  cmp x8,x9
7101ccd684  b.eq 0x7101ccd6a0
7101ccd688  ldr x10,[x8], #0x8
7101ccd68c  ldr x10,[x10, #0x8]
7101ccd690  ldrb w10,[x10, #0x518]
7101ccd694  cbnz w10,0x7101ccd6bc
7101ccd698  cmp x9,x8
7101ccd69c  b.ne 0x7101ccd688
7101ccd6a0  ldrsw x8,[x19, #0xd4]
7101ccd6a4  cmp w8,#0x13
7101ccd6a8  b.cs 0x7101ccd6dc
7101ccd6ac  add x8,x19,x8, LSL #0x2
7101ccd6b0  ldr w9,[x8, #0x88]
7101ccd6b4  add w9,w9,#0x1
7101ccd6b8  str w9,[x8, #0x88]
7101ccd6bc  ldp x29,x30,[sp, #0x60]
7101ccd6c0  ldp x20,x19,[sp, #0x50]
7101ccd6c4  ldp x22,x21,[sp, #0x40]
7101ccd6c8  ldp x24,x23,[sp, #0x30]
7101ccd6cc  ldp x26,x25,[sp, #0x20]
7101ccd6d0  ldp x28,x27,[sp, #0x10]
7101ccd6d4  add sp,sp,#0x70
7101ccd6d8  ret
7101ccd6dc  bl 0x71039c2650
