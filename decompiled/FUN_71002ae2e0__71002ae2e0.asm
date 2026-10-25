// addr:      71002ae2e0
// offset:    0x2ae2e0
// name:      FUN_71002ae2e0
// mangled:   
// size:      72

71002ae2e0  str x19,[sp, #-0x20]!
71002ae2e4  stp x29,x30,[sp, #0x10]
71002ae2e8  add x29,sp,#0x10
71002ae2ec  orr w1,wzr,#0x7c
71002ae2f0  mov x19,x0
71002ae2f4  bl 0x7100234fb0
71002ae2f8  adrp x8,0x71052a8000
71002ae2fc  ldr x8,[x8, #0x930]
71002ae300  add x8,x8,#0x10
71002ae304  str x8,[x19], #0x20
71002ae308  orr w1,wzr,#0x7c
71002ae30c  mov x0,x19
71002ae310  bl 0x71002ae990
71002ae314  ldp x29,x30,[sp, #0x10]
71002ae318  adrp x0,0x7104f16000
71002ae31c  add x0,x0,#0xf1d
71002ae320  ldr x19,[sp], #0x20
71002ae324  b 0x71039c0530
