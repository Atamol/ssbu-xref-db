// addr:      7101ff91a0
// offset:    0x1ff91a0
// name:      FUN_7101ff91a0
// mangled:   
// size:      296

7101ff91a0  str x21,[sp, #-0x30]!
7101ff91a4  stp x20,x19,[sp, #0x10]
7101ff91a8  stp x29,x30,[sp, #0x20]
7101ff91ac  add x29,sp,#0x20
7101ff91b0  ldr x8,[x1, #0x10]
7101ff91b4  adrp x9,0x7101ff9000
7101ff91b8  add x9,x9,#0x3a0
7101ff91bc  str x9,[x8]
7101ff91c0  mov w9,#0x2
7101ff91c4  str w9,[x8, #0x8]
7101ff91c8  ldr x8,[x1, #0x10]
7101ff91cc  mov x19,x1
7101ff91d0  mov x20,x0
7101ff91d4  adrp x2,0x710430c000
7101ff91d8  add x2,x2,#0x66a
7101ff91dc  mov x0,x19
7101ff91e0  add x9,x8,#0x10
7101ff91e4  str x9,[x1, #0x10]
7101ff91e8  sub x1,x8,#0x10
7101ff91ec  bl 0x71038f5390
7101ff91f0  ldr x8,[x20, #0x10]
7101ff91f4  ldr x9,[x19, #0x10]
7101ff91f8  mov w21,#0x13
7101ff91fc  str w21,[x9, #0x8]
7101ff9200  and x8,x8,#0xffffffffff
7101ff9204  str x8,[x9]
7101ff9208  ldr x8,[x19, #0x10]
7101ff920c  add x9,x8,#0x10
7101ff9210  sub x1,x8,#0x10
7101ff9214  adrp x2,0x7104444000
7101ff9218  add x2,x2,#0x55c
7101ff921c  mov x0,x19
7101ff9220  str x9,[x19, #0x10]
7101ff9224  bl 0x71038f5390
7101ff9228  ldrsw x8,[x20, #0x20]
7101ff922c  ldr x9,[x19, #0x10]
7101ff9230  str x8,[x9]
7101ff9234  str w21,[x9, #0x8]
7101ff9238  ldr x8,[x19, #0x10]
7101ff923c  add x9,x8,#0x10
7101ff9240  sub x1,x8,#0x10
7101ff9244  adrp x2,0x710432a000
7101ff9248  add x2,x2,#0xe64
7101ff924c  mov x0,x19
7101ff9250  str x9,[x19, #0x10]
7101ff9254  bl 0x71038f5390
7101ff9258  ldrsw x8,[x20, #0x24]
7101ff925c  ldr x9,[x19, #0x10]
7101ff9260  str x8,[x9]
7101ff9264  str w21,[x9, #0x8]
7101ff9268  ldr x8,[x19, #0x10]
7101ff926c  add x9,x8,#0x10
7101ff9270  sub x1,x8,#0x10
7101ff9274  adrp x2,0x710434b000
7101ff9278  add x2,x2,#0x106
7101ff927c  mov x0,x19
7101ff9280  str x9,[x19, #0x10]
7101ff9284  bl 0x71038f5390
7101ff9288  ldrb w8,[x20, #0x28]
7101ff928c  ldr x9,[x19, #0x10]
7101ff9290  mov w10,#0x1
7101ff9294  str w8,[x9]
7101ff9298  str w10,[x9, #0x8]
7101ff929c  ldr x8,[x19, #0x10]
7101ff92a0  add x9,x8,#0x10
7101ff92a4  str x9,[x19, #0x10]
7101ff92a8  mov x0,x19
7101ff92ac  ldp x29,x30,[sp, #0x20]
7101ff92b0  sub x1,x8,#0x10
7101ff92b4  ldp x20,x19,[sp, #0x10]
7101ff92b8  adrp x2,0x71043d9000
7101ff92bc  add x2,x2,#0xbbf
7101ff92c0  ldr x21,[sp], #0x30
7101ff92c4  b 0x71038f5390
