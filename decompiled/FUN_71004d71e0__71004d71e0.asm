// addr:      71004d71e0
// offset:    0x4d71e0
// name:      FUN_71004d71e0
// mangled:   
// size:      56

71004d71e0  adrp x8,0x7105329000
71004d71e4  ldr x8,[x8, #0xf40]
71004d71e8  ldr x8,[x8]
71004d71ec  ldr w8,[x8, #0x490]
71004d71f0  cmp w8,#0xa
71004d71f4  b.hi 0x71004d7214
71004d71f8  adrp x9,0x710523c000
71004d71fc  add x9,x9,#0xf40
71004d7200  mov w2,w1
71004d7204  ldr x1,[x9, x8, LSL #0x3]
71004d7208  adrp x0,0x71043ff000
71004d720c  add x0,x0,#0xe5c
71004d7210  b 0x7103737290
71004d7214  ret
