// addr:      71004d71b0
// offset:    0x4d71b0
// name:      FUN_71004d71b0
// mangled:   
// size:      36

71004d71b0  cmp w1,#0xa
71004d71b4  b.hi 0x71004d71d0
71004d71b8  adrp x8,0x710523c000
71004d71bc  add x8,x8,#0xf40
71004d71c0  adrp x0,0x71043ff000
71004d71c4  add x0,x0,#0xe5c
71004d71c8  ldr x1,[x8, w1, UXTW #0x3]
71004d71cc  b 0x7103737290
71004d71d0  ret
