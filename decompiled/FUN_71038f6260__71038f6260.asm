// addr:      71038f6260
// offset:    0x38f6260
// name:      FUN_71038f6260
// mangled:   
// size:      592

71038f6260  ldr x8,[x0, #0x10]
71038f6264  ldur w9,[x8, #-0x8]
71038f6268  cmp w9,#0x46
71038f626c  b.ne 0x71038f638c
71038f6270  sub sp,sp,#0x60
71038f6274  stp x22,x21,[sp, #0x30]
71038f6278  stp x20,x19,[sp, #0x40]
71038f627c  stp x29,x30,[sp, #0x50]
71038f6280  add x29,sp,#0x50
71038f6284  ldur x8,[x8, #-0x10]
71038f6288  ldr x19,[x8, #0x18]
71038f628c  mov x21,x2
71038f6290  mov x20,x1
71038f6294  stp x0,x1,[sp, #0x8]
71038f6298  str x2,[sp, #0x18]
71038f629c  str w3,[sp, #0x20]
71038f62a0  adrp x1,0x71042f6000
71038f62a4  add x1,x1,#0x8f9
71038f62a8  mov w2,#0x4
71038f62ac  mov x3,x21
71038f62b0  mov x22,x0
71038f62b4  blr x20
71038f62b8  mov w8,#0x53
71038f62bc  str w0,[sp, #0x24]
71038f62c0  strb w8,[sp, #0x28]
71038f62c4  cbnz w0,0x71038f6304
71038f62c8  add x1,sp,#0x28
71038f62cc  mov w2,#0x1
71038f62d0  mov x0,x22
71038f62d4  mov x3,x21
71038f62d8  blr x20
71038f62dc  str w0,[sp, #0x24]
71038f62e0  strb wzr,[sp, #0x28]
71038f62e4  cbnz w0,0x71038f6304
71038f62e8  ldp x0,x8,[sp, #0x8]
71038f62ec  ldr x3,[sp, #0x18]
71038f62f0  add x1,sp,#0x28
71038f62f4  mov w2,#0x1
71038f62f8  blr x8
71038f62fc  str w0,[sp, #0x24]
71038f6300  cbz w0,0x71038f6394
71038f6304  mov w8,#0x4
71038f6308  strb w8,[sp, #0x28]
71038f630c  mov w8,#0x8
71038f6310  strb w8,[sp, #0x28]
71038f6314  mov w8,#0x4
71038f6318  strb w8,[sp, #0x28]
71038f631c  mov w8,#0x8
71038f6320  strb w8,[sp, #0x28]
71038f6324  mov w8,#0x4
71038f6328  strb w8,[sp, #0x28]
71038f632c  mov w8,#0x5678
71038f6330  str x8,[sp, #0x28]
71038f6334  mov w8,#0x4000
71038f6338  movk w8,#0x43b9, LSL #16
71038f633c  str w8,[sp, #0x28]
71038f6340  ldr w8,[x19, #0x10]
71038f6344  strb w8,[sp, #0x28]
71038f6348  cbnz w0,0x71038f6364
71038f634c  ldp x0,x8,[sp, #0x8]
71038f6350  ldr x3,[sp, #0x18]
71038f6354  add x1,sp,#0x28
71038f6358  mov w2,#0x1
71038f635c  blr x8
71038f6360  str w0,[sp, #0x24]
71038f6364  add x2,sp,#0x8
71038f6368  mov x0,x19
71038f636c  mov x1,xzr
71038f6370  bl 0x71038fd620
71038f6374  ldr w0,[sp, #0x24]
71038f6378  ldp x29,x30,[sp, #0x50]
71038f637c  ldp x20,x19,[sp, #0x40]
71038f6380  ldp x22,x21,[sp, #0x30]
71038f6384  add sp,sp,#0x60
71038f6388  ret
71038f638c  mov w0,#0x1
71038f6390  ret
71038f6394  ldp x0,x8,[sp, #0x8]
71038f6398  ldr x3,[sp, #0x18]
71038f639c  adrp x1,0x7104453000
71038f63a0  add x1,x1,#0x653
71038f63a4  orr w2,wzr,#0x6
71038f63a8  blr x8
71038f63ac  mov w8,#0x4
71038f63b0  str w0,[sp, #0x24]
71038f63b4  strb w8,[sp, #0x28]
71038f63b8  cbnz w0,0x71038f630c
71038f63bc  ldp x0,x8,[sp, #0x8]
71038f63c0  ldr x3,[sp, #0x18]
71038f63c4  add x1,sp,#0x28
71038f63c8  mov w2,#0x1
71038f63cc  blr x8
71038f63d0  mov w8,#0x8
71038f63d4  str w0,[sp, #0x24]
71038f63d8  strb w8,[sp, #0x28]
71038f63dc  cbnz w0,0x71038f6314
71038f63e0  ldp x0,x8,[sp, #0x8]
71038f63e4  ldr x3,[sp, #0x18]
71038f63e8  add x1,sp,#0x28
71038f63ec  mov w2,#0x1
71038f63f0  blr x8
71038f63f4  mov w8,#0x4
71038f63f8  str w0,[sp, #0x24]
71038f63fc  strb w8,[sp, #0x28]
71038f6400  cbnz w0,0x71038f631c
71038f6404  ldp x0,x8,[sp, #0x8]
71038f6408  ldr x3,[sp, #0x18]
71038f640c  add x1,sp,#0x28
71038f6410  mov w2,#0x1
71038f6414  blr x8
71038f6418  mov w8,#0x8
71038f641c  str w0,[sp, #0x24]
71038f6420  strb w8,[sp, #0x28]
71038f6424  cbnz w0,0x71038f6324
71038f6428  ldp x0,x8,[sp, #0x8]
71038f642c  ldr x3,[sp, #0x18]
71038f6430  add x1,sp,#0x28
71038f6434  mov w2,#0x1
71038f6438  blr x8
71038f643c  mov w8,#0x4
71038f6440  str w0,[sp, #0x24]
71038f6444  strb w8,[sp, #0x28]
71038f6448  cbnz w0,0x71038f632c
71038f644c  ldp x0,x8,[sp, #0x8]
71038f6450  ldr x3,[sp, #0x18]
71038f6454  add x1,sp,#0x28
71038f6458  mov w2,#0x1
71038f645c  blr x8
71038f6460  mov w8,#0x5678
71038f6464  str w0,[sp, #0x24]
71038f6468  str x8,[sp, #0x28]
71038f646c  cbnz w0,0x71038f6334
71038f6470  ldp x0,x8,[sp, #0x8]
71038f6474  ldr x3,[sp, #0x18]
71038f6478  add x1,sp,#0x28
71038f647c  mov w2,#0x8
71038f6480  blr x8
71038f6484  mov w8,#0x4000
71038f6488  movk w8,#0x43b9, LSL #16
71038f648c  stp w0,w8,[sp, #0x24]
71038f6490  cbnz w0,0x71038f6340
71038f6494  ldp x0,x8,[sp, #0x8]
71038f6498  ldr x3,[sp, #0x18]
71038f649c  add x1,sp,#0x28
71038f64a0  mov w2,#0x4
71038f64a4  blr x8
71038f64a8  str w0,[sp, #0x24]
71038f64ac  b 0x71038f6340
