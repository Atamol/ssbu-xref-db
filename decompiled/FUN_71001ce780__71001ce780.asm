// addr:      71001ce780
// offset:    0x1ce780
// name:      FUN_71001ce780
// mangled:   
// size:      88

71001ce780  stp x20,x19,[sp, #-0x20]!
71001ce784  stp x29,x30,[sp, #0x10]
71001ce788  add x29,sp,#0x10
71001ce78c  adrp x0,0x710424e000
71001ce790  add x0,x0,#0xa4a
71001ce794  mov x20,x3
71001ce798  mov x19,x2
71001ce79c  bl 0x71039c0070
71001ce7a0  cmp x0,x20
71001ce7a4  b.cs 0x71001ce7c8
71001ce7a8  adrp x1,0x710424e000
71001ce7ac  add x1,x1,#0xa4a
71001ce7b0  mov x0,x19
71001ce7b4  bl 0x71039c0270
71001ce7b8  mov w0,#0x1
71001ce7bc  ldp x29,x30,[sp, #0x10]
71001ce7c0  ldp x20,x19,[sp], #0x20
71001ce7c4  ret
71001ce7c8  mov w0,wzr
71001ce7cc  ldp x29,x30,[sp, #0x10]
71001ce7d0  ldp x20,x19,[sp], #0x20
71001ce7d4  ret
