// addr:      71038fb3c0
// offset:    0x38fb3c0
// name:      FUN_71038fb3c0
// mangled:   
// size:      236

71038fb3c0  str x21,[sp, #-0x30]!
71038fb3c4  stp x20,x19,[sp, #0x10]
71038fb3c8  stp x29,x30,[sp, #0x20]
71038fb3cc  add x29,sp,#0x20
71038fb3d0  ldr x8,[x0, #0x58]
71038fb3d4  mov x19,x0
71038fb3d8  cbnz x8,0x71038fb41c
71038fb3dc  ldr x20,[x19, #0x18]
71038fb3e0  strb w1,[x19, #0xc]
71038fb3e4  ldr x8,[x20, #0xc8]
71038fb3e8  ldr x9,[x8, #0x58]
71038fb3ec  cbnz x9,0x71038fb430
71038fb3f0  ldr x8,[x20, #0xc0]
71038fb3f4  cbz x8,0x71038fb4a8
71038fb3f8  ldr x21,[x19, #0x10]
71038fb3fc  cmp w1,#0x6
71038fb400  b.eq 0x71038fb450
71038fb404  cmp w1,#0x4
71038fb408  b.ne 0x71038fb478
71038fb40c  ldr x8,[x20, #0xd8]
71038fb410  str x8,[x21]
71038fb414  ldrb w8,[x8, #0x8]
71038fb418  b 0x71038fb46c
71038fb41c  str w1,[x8, #0x140]
71038fb420  ldr x8,[x19, #0x58]
71038fb424  add x0,x8,#0x8
71038fb428  mov w1,#0x1
71038fb42c  bl 0x71039c8230
71038fb430  ldr x9,[x8, #0x10]
71038fb434  add x10,x9,#0x10
71038fb438  str x10,[x8, #0x10]
71038fb43c  ldr x8,[x19, #0x10]
71038fb440  ldp x10,x8,[x8, #-0x10]
71038fb444  stp x10,x8,[x9]
71038fb448  ldr x0,[x20, #0xc8]
71038fb44c  bl 0x71038fb3c0
71038fb450  adrp x1,0x7104338000
71038fb454  add x1,x1,#0xe95
71038fb458  mov w2,#0x17
71038fb45c  mov x0,x19
71038fb460  bl 0x7103917660
71038fb464  str x0,[x21]
71038fb468  ldrb w8,[x0, #0x8]
71038fb46c  orr w8,w8,#0x40
71038fb470  str w8,[x21, #0x8]
71038fb474  b 0x71038fb480
71038fb478  ldp x8,x9,[x21, #-0x10]
71038fb47c  stp x8,x9,[x21]
71038fb480  ldr x9,[x19, #0x20]
71038fb484  add x8,x21,#0x10
71038fb488  str x8,[x19, #0x10]
71038fb48c  ldr x10,[x9, #0x8]
71038fb490  cmp x10,x8
71038fb494  b.cs 0x71038fb49c
71038fb498  str x8,[x9, #0x8]
71038fb49c  ldr x8,[x20, #0xc0]
71038fb4a0  mov x0,x19
71038fb4a4  blr x8
71038fb4a8  bl 0x71039c2650
