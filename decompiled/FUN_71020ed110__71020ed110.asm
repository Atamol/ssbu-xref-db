// addr:      71020ed110
// offset:    0x20ed110
// name:      FUN_71020ed110
// mangled:   
// size:      284

71020ed110  sub sp,sp,#0x50
71020ed114  str x21,[sp, #0x20]
71020ed118  stp x20,x19,[sp, #0x30]
71020ed11c  stp x29,x30,[sp, #0x40]
71020ed120  add x29,sp,#0x40
71020ed124  ldr x8,[x0, #0x18]
71020ed128  ldr x8,[x8, #0x18]
71020ed12c  mov x19,x0
71020ed130  cmp x8,#0x1
71020ed134  b.lt 0x71020ed140
71020ed138  mov x0,x19
71020ed13c  bl 0x71038fec40
71020ed140  mov x0,x19
71020ed144  bl 0x710391e050
71020ed148  ldr x8,[x19, #0x10]
71020ed14c  mov w9,#0x45
71020ed150  str w9,[x8, #0x8]
71020ed154  str x0,[x8]
71020ed158  ldr x8,[x19, #0x10]
71020ed15c  mov x1,x0
71020ed160  mov w3,#0x2
71020ed164  mov x0,x19
71020ed168  mov w2,wzr
71020ed16c  mov w20,#0x2
71020ed170  add x8,x8,#0x10
71020ed174  str x8,[x19, #0x10]
71020ed178  bl 0x710391d4c0
71020ed17c  mov x8,#0x5000000000000000
71020ed180  str x8,[sp, #0x8]
71020ed184  mov x8,#0x42
71020ed188  movk x8,#0x5000, LSL #48
71020ed18c  adrp x9,0x71050b4000
71020ed190  add x9,x9,#0xcd8
71020ed194  mov x0,sp
71020ed198  mov w2,#0x1
71020ed19c  str x9,[sp]
71020ed1a0  mov x1,x19
71020ed1a4  str x8,[sp, #0x10]
71020ed1a8  strb wzr,[sp, #0x18]
71020ed1ac  mov w21,#0x1
71020ed1b0  bl 0x71020d4810
71020ed1b4  ldr x8,[x19, #0x10]
71020ed1b8  adrp x9,0x71020ed000
71020ed1bc  add x9,x9,#0x230
71020ed1c0  str x9,[x8]
71020ed1c4  str w20,[x8, #0x8]
71020ed1c8  ldr x8,[x19, #0x10]
71020ed1cc  add x9,x8,#0x10
71020ed1d0  sub x1,x8,#0x10
71020ed1d4  adrp x2,0x710430c000
71020ed1d8  add x2,x2,#0x66a
71020ed1dc  mov x0,x19
71020ed1e0  str x9,[x19, #0x10]
71020ed1e4  bl 0x71038f5390
71020ed1e8  ldr x8,[x19, #0x10]
71020ed1ec  str wzr,[x8]
71020ed1f0  str w21,[x8, #0x8]
71020ed1f4  ldr x8,[x19, #0x10]
71020ed1f8  add x9,x8,#0x10
71020ed1fc  sub x1,x8,#0x10
71020ed200  adrp x2,0x71042b5000
71020ed204  add x2,x2,#0x505
71020ed208  mov x0,x19
71020ed20c  str x9,[x19, #0x10]
71020ed210  bl 0x71038f5390
71020ed214  ldp x29,x30,[sp, #0x40]
71020ed218  ldr x21,[sp, #0x20]
71020ed21c  ldp x20,x19,[sp, #0x30]
71020ed220  mov w0,#0x1
71020ed224  add sp,sp,#0x50
71020ed228  ret
