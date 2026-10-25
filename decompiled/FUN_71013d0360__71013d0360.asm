// addr:      71013d0360
// offset:    0x13d0360
// name:      FUN_71013d0360
// mangled:   
// size:      216

71013d0360  str x19,[sp, #-0x20]!
71013d0364  stp x29,x30,[sp, #0x10]
71013d0368  add x29,sp,#0x10
71013d036c  ldr x8,[x0, #0x50]
71013d0370  ldr x8,[x8]
71013d0374  ldr x8,[x8, #0x8]
71013d0378  ldr x8,[x8]
71013d037c  ldr x19,[x8, #0xcd0]
71013d0380  ldr x0,[x19, #0x28]
71013d0384  ldrsw x2,[x0, #0x70]
71013d0388  ldr w3,[x0, #0x68]
71013d038c  adrp x1,0x7104544000
71013d0390  add x1,x1,#0xe38
71013d0394  mov w4,wzr
71013d0398  bl 0x710323beb0
71013d039c  adrp x0,0x71043ad000
71013d03a0  add x0,x0,#0x508
71013d03a4  mov w1,#0x1
71013d03a8  bl 0x710323af70
71013d03ac  tst x0,#0xffffffffff
71013d03b0  str x0,[sp, #0x8]
71013d03b4  b.eq 0x71013d03cc
71013d03b8  ldr x0,[x19, #0x28]
71013d03bc  ldrsw x2,[x0, #0x70]
71013d03c0  ldr w3,[x0, #0x68]
71013d03c4  add x1,sp,#0x8
71013d03c8  bl 0x710323c4e0
71013d03cc  adrp x0,0x71042d6000
71013d03d0  add x0,x0,#0x46
71013d03d4  mov w1,#0x1
71013d03d8  bl 0x710323af70
71013d03dc  tst x0,#0xffffffffff
71013d03e0  str x0,[sp, #0x8]
71013d03e4  b.eq 0x71013d03fc
71013d03e8  ldr x0,[x19, #0x28]
71013d03ec  ldrsw x2,[x0, #0x70]
71013d03f0  ldr w3,[x0, #0x68]
71013d03f4  add x1,sp,#0x8
71013d03f8  bl 0x710323c4e0
71013d03fc  adrp x0,0x7104329000
71013d0400  add x0,x0,#0xce9
71013d0404  mov w1,#0x1
71013d0408  bl 0x710323af70
71013d040c  tst x0,#0xffffffffff
71013d0410  str x0,[sp, #0x8]
71013d0414  b.eq 0x71013d042c
71013d0418  ldr x0,[x19, #0x28]
71013d041c  ldrsw x2,[x0, #0x70]
71013d0420  ldr w3,[x0, #0x68]
71013d0424  add x1,sp,#0x8
71013d0428  bl 0x710323c4e0
71013d042c  ldp x29,x30,[sp, #0x10]
71013d0430  ldr x19,[sp], #0x20
71013d0434  ret
