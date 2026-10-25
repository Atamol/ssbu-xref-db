// addr:      71038db3d0
// offset:    0x38db3d0
// name:      FUN_71038db3d0
// mangled:   
// size:      696

71038db3d0  sub sp,sp,#0x70
71038db3d4  str x27,[sp, #0x10]
71038db3d8  stp x26,x25,[sp, #0x20]
71038db3dc  stp x24,x23,[sp, #0x30]
71038db3e0  stp x22,x21,[sp, #0x40]
71038db3e4  stp x20,x19,[sp, #0x50]
71038db3e8  stp x29,x30,[sp, #0x60]
71038db3ec  add x29,sp,#0x60
71038db3f0  ldr x9,[x1, #0x10]
71038db3f4  orr x8,xzr,#0x7ffffffffffffff
71038db3f8  subs x10,x8,x9
71038db3fc  b.eq 0x71038db630
71038db400  cmp x9,#0x0
71038db404  csinc x11,x9,xzr,ne
71038db408  add x9,x11,x9
71038db40c  cmp x10,x11
71038db410  ldr x25,[x1]
71038db414  csel x24,x8,x9,cc
71038db418  lsl x23,x24,#0x5
71038db41c  mov x21,x2
71038db420  mov x20,x1
71038db424  mov x19,x0
71038db428  add x0,sp,#0x8
71038db42c  mov w1,#0x10
71038db430  mov x2,x23
71038db434  mov x22,x3
71038db438  bl 0x710392e1f0
71038db43c  cmp w0,#0xc
71038db440  b.ne 0x71038db478
71038db444  adrp x8,0x710593d000
71038db448  ldr x0,[x8, #0x2b0]
71038db44c  cbz x0,0x71038db478
71038db450  str x23,[sp, #0x18]
71038db454  ldr x8,[x0]
71038db458  ldr x8,[x8, #0x30]
71038db45c  add x1,sp,#0x18
71038db460  blr x8
71038db464  tbz w0,#0x0,0x71038db478
71038db468  add x0,sp,#0x8
71038db46c  mov w1,#0x10
71038db470  mov x2,x23
71038db474  bl 0x710392e1f0
71038db478  adrp x8,0x71052a8000
71038db47c  ldr x8,[x8, #0xa78]
71038db480  cbz x8,0x71038db494
71038db484  ldr x2,[sp, #0x8]
71038db488  mov w1,#0x10
71038db48c  mov x0,x23
71038db490  bl 0x71039c19e0
71038db494  ldr x23,[sp, #0x8]
71038db498  ldr x0,[x20]
71038db49c  cmp x0,x21
71038db4a0  mov x10,x23
71038db4a4  b.eq 0x71038db50c
71038db4a8  mov x10,x23
71038db4ac  cbz x0,0x71038db50c
71038db4b0  sub x8,x21,#0x20
71038db4b4  adrp x9,0x7105239000
71038db4b8  add x9,x9,#0x5f0
71038db4bc  sub x8,x8,x0
71038db4c0  mov x10,x0
71038db4c4  mov x11,x23
71038db4c8  adrp x12,0x7105239000
71038db4cc  add x12,x12,#0x610
71038db4d0  str x9,[x11]
71038db4d4  ldr x13,[x10, #0x8]
71038db4d8  str x13,[x11, #0x8]
71038db4dc  ldr x13,[x10, #0x10]
71038db4e0  str x13,[x11, #0x10]
71038db4e4  ldr x13,[x10, #0x18]
71038db4e8  add x10,x10,#0x20
71038db4ec  str x12,[x11]
71038db4f0  cmp x21,x10
71038db4f4  str x13,[x11, #0x18]
71038db4f8  add x11,x11,#0x20
71038db4fc  b.ne 0x71038db4d0
71038db500  and x8,x8,#-0x20
71038db504  add x8,x23,x8
71038db508  add x10,x8,#0x20
71038db50c  adrp x8,0x7105239000
71038db510  add x8,x8,#0x5f0
71038db514  str x8,[x10]
71038db518  ldr x9,[x22, #0x8]
71038db51c  str x9,[x10, #0x8]
71038db520  ldr x9,[x22, #0x10]
71038db524  str x9,[x10, #0x10]
71038db528  ldr x11,[x22, #0x18]
71038db52c  adrp x9,0x7105239000
71038db530  add x9,x9,#0x610
71038db534  add x26,x10,#0x20
71038db538  str x11,[x10, #0x18]
71038db53c  str x9,[x10]
71038db540  cbz x0,0x71038db5f0
71038db544  ldr x22,[x20, #0x8]
71038db548  add x10,x0,x22, LSL #0x5
71038db54c  cmp x10,x21
71038db550  b.eq 0x71038db5a4
71038db554  sub x11,x10,#0x20
71038db558  sub x11,x11,x21
71038db55c  mov x12,x21
71038db560  mov x13,x26
71038db564  str x8,[x13]
71038db568  ldr x14,[x12, #0x8]
71038db56c  str x14,[x13, #0x8]
71038db570  ldr x14,[x12, #0x10]
71038db574  str x14,[x13, #0x10]
71038db578  ldr x14,[x12, #0x18]
71038db57c  add x12,x12,#0x20
71038db580  str x9,[x13]
71038db584  cmp x10,x12
71038db588  str x14,[x13, #0x18]
71038db58c  add x13,x13,#0x20
71038db590  b.ne 0x71038db564
71038db594  ldr x22,[x20, #0x8]
71038db598  and x8,x11,#-0x20
71038db59c  add x8,x26,x8
71038db5a0  add x26,x8,#0x20
71038db5a4  cbz x22,0x71038db5c4
71038db5a8  mov x27,x0
71038db5ac  ldr x8,[x27], #0x20
71038db5b0  ldr x8,[x8]
71038db5b4  sub x22,x22,#0x1
71038db5b8  blr x8
71038db5bc  mov x0,x27
71038db5c0  cbnz x22,0x71038db5ac
71038db5c4  mov x8,x20
71038db5c8  ldr x22,[x8], #0x18
71038db5cc  cmp x22,x8
71038db5d0  b.eq 0x71038db5f0
71038db5d4  adrp x8,0x71052a8000
71038db5d8  ldr x8,[x8, #0xa70]
71038db5dc  cbz x8,0x71038db5e8
71038db5e0  mov x0,x22
71038db5e4  bl 0x71039c19b0
71038db5e8  mov x0,x22
71038db5ec  bl 0x710392eb40
71038db5f0  sub x8,x21,x25
71038db5f4  asr x8,x8,#0x5
71038db5f8  sub x9,x26,x23
71038db5fc  asr x9,x9,#0x5
71038db600  add x8,x23,x8, LSL #0x5
71038db604  str x24,[x20, #0x10]
71038db608  stp x23,x9,[x20]
71038db60c  ldr x27,[sp, #0x10]
71038db610  ldp x29,x30,[sp, #0x60]
71038db614  str x8,[x19]
71038db618  ldp x20,x19,[sp, #0x50]
71038db61c  ldp x22,x21,[sp, #0x40]
71038db620  ldp x24,x23,[sp, #0x30]
71038db624  ldp x26,x25,[sp, #0x20]
71038db628  add sp,sp,#0x70
71038db62c  ret
71038db630  mov w0,#0x10
71038db634  bl 0x71039c6c40
71038db638  mov x19,x0
71038db63c  adrp x1,0x7104359000
71038db640  add x1,x1,#0xf68
71038db644  bl 0x71039c5f10
71038db648  adrp x8,0x71052a8000
71038db64c  ldr x8,[x8, #0xbc0]
71038db650  add x8,x8,#0x10
71038db654  str x8,[x19]
71038db658  adrp x1,0x71052a8000
71038db65c  adrp x2,0x71052a8000
71038db660  ldr x1,[x1, #0xbc8]
71038db664  ldr x2,[x2, #0xbd0]
71038db668  mov x0,x19
71038db66c  bl 0x71039c6c50
71038db670  mov x20,x0
71038db674  mov x0,x19
71038db678  bl 0x71039c6c60
71038db67c  mov x0,x20
71038db680  bl 0x71039c19f0
71038db684  bl 0x71037b2bc0
