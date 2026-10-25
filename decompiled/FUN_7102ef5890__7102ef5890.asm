// addr:      7102ef5890
// offset:    0x2ef5890
// name:      FUN_7102ef5890
// mangled:   
// size:      96

7102ef5890  stp x29,x30,[sp, #-0x10]!
7102ef5894  mov x29,sp
7102ef5898  adrp x8,0x71052c3000
7102ef589c  ldr x8,[x8, #0x5c8]
7102ef58a0  cbz x8,0x7102ef58cc
7102ef58a4  ldr x8,[x8, #0x8]
7102ef58a8  ldr w8,[x8]
7102ef58ac  orr w8,w8,#0x2
7102ef58b0  mov x0,x2
7102ef58b4  mov w2,w1
7102ef58b8  cmp w8,#0x2
7102ef58bc  b.ne 0x7102ef58d8
7102ef58c0  adrp x1,0x7104328000
7102ef58c4  add x1,x1,#0x3a3
7102ef58c8  b 0x7102ef58e0
7102ef58cc  mov w0,wzr
7102ef58d0  ldp x29,x30,[sp], #0x10
7102ef58d4  ret
7102ef58d8  adrp x1,0x71042c3000
7102ef58dc  add x1,x1,#0x1ae
7102ef58e0  bl 0x710062dc20
7102ef58e4  mov w0,#0x1
7102ef58e8  ldp x29,x30,[sp], #0x10
7102ef58ec  ret
