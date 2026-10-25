// addr:      71021ceb00
// offset:    0x21ceb00
// name:      FUN_71021ceb00
// mangled:   
// size:      248

71021ceb00  str x21,[sp, #-0x30]!
71021ceb04  stp x20,x19,[sp, #0x10]
71021ceb08  stp x29,x30,[sp, #0x20]
71021ceb0c  add x29,sp,#0x20
71021ceb10  and w2,w2,#0x1
71021ceb14  mov x19,x1
71021ceb18  mov x20,x0
71021ceb1c  bl 0x7101ff91a0
71021ceb20  ldr x8,[x19, #0x10]
71021ceb24  adrp x9,0x71021ce000
71021ceb28  add x9,x9,#0xa40
71021ceb2c  str x9,[x8]
71021ceb30  mov w9,#0x2
71021ceb34  str w9,[x8, #0x8]
71021ceb38  ldr x8,[x19, #0x10]
71021ceb3c  add x9,x8,#0x10
71021ceb40  sub x1,x8,#0x10
71021ceb44  adrp x2,0x710430c000
71021ceb48  add x2,x2,#0x66a
71021ceb4c  mov x0,x19
71021ceb50  str x9,[x19, #0x10]
71021ceb54  bl 0x71038f5390
71021ceb58  ldr w8,[x20, #0x2c]
71021ceb5c  ldr x9,[x19, #0x10]
71021ceb60  orr w21,wzr,#0x3
71021ceb64  str w8,[x9]
71021ceb68  str w21,[x9, #0x8]
71021ceb6c  ldr x8,[x19, #0x10]
71021ceb70  add x9,x8,#0x10
71021ceb74  sub x1,x8,#0x10
71021ceb78  adrp x2,0x710445a000
71021ceb7c  add x2,x2,#0x6e9
71021ceb80  mov x0,x19
71021ceb84  str x9,[x19, #0x10]
71021ceb88  bl 0x71038f5390
71021ceb8c  ldr w8,[x20, #0x30]
71021ceb90  ldr x9,[x19, #0x10]
71021ceb94  str w8,[x9]
71021ceb98  str w21,[x9, #0x8]
71021ceb9c  ldr x8,[x19, #0x10]
71021ceba0  add x9,x8,#0x10
71021ceba4  sub x1,x8,#0x10
71021ceba8  adrp x2,0x71043d5000
71021cebac  add x2,x2,#0x631
71021cebb0  mov x0,x19
71021cebb4  str x9,[x19, #0x10]
71021cebb8  bl 0x71038f5390
71021cebbc  ldr w8,[x20, #0x34]
71021cebc0  ldr x9,[x19, #0x10]
71021cebc4  str w8,[x9]
71021cebc8  str w21,[x9, #0x8]
71021cebcc  ldr x8,[x19, #0x10]
71021cebd0  add x9,x8,#0x10
71021cebd4  str x9,[x19, #0x10]
71021cebd8  mov x0,x19
71021cebdc  sub x1,x8,#0x10
71021cebe0  ldp x29,x30,[sp, #0x20]
71021cebe4  adrp x2,0x710442c000
71021cebe8  add x2,x2,#0xa38
71021cebec  ldp x20,x19,[sp, #0x10]
71021cebf0  ldr x21,[sp], #0x30
71021cebf4  b 0x71038f5390
