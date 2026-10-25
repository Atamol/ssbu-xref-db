// addr:      71020df880
// offset:    0x20df880
// name:      FUN_71020df880
// mangled:   
// size:      1180

71020df880  stp x22,x21,[sp, #-0x30]!
71020df884  stp x20,x19,[sp, #0x10]
71020df888  stp x29,x30,[sp, #0x20]
71020df88c  add x29,sp,#0x20
71020df890  mov w21,w2
71020df894  and w2,w2,#0x1
71020df898  mov x19,x1
71020df89c  mov x20,x0
71020df8a0  bl 0x71020d4810
71020df8a4  ldr x8,[x19, #0x10]
71020df8a8  adrp x9,0x71020df000
71020df8ac  add x9,x9,#0xd20
71020df8b0  str x9,[x8]
71020df8b4  mov w9,#0x2
71020df8b8  str w9,[x8, #0x8]
71020df8bc  ldr x8,[x19, #0x10]
71020df8c0  add x9,x8,#0x10
71020df8c4  sub x1,x8,#0x10
71020df8c8  adrp x2,0x710430c000
71020df8cc  add x2,x2,#0x66a
71020df8d0  mov x0,x19
71020df8d4  str x9,[x19, #0x10]
71020df8d8  bl 0x71038f5390
71020df8dc  tbz w21,#0x0,0x71020df934
71020df8e0  ldr x8,[x19, #0x18]
71020df8e4  ldr x8,[x8, #0x18]
71020df8e8  cmp x8,#0x1
71020df8ec  b.lt 0x71020df8f8
71020df8f0  mov x0,x19
71020df8f4  bl 0x71038fec40
71020df8f8  mov x0,x19
71020df8fc  bl 0x710391e050
71020df900  ldr x8,[x19, #0x10]
71020df904  mov w9,#0x45
71020df908  str w9,[x8, #0x8]
71020df90c  str x0,[x8]
71020df910  ldr x8,[x19, #0x10]
71020df914  mov x1,x0
71020df918  orr w3,wzr,#0x3
71020df91c  mov x0,x19
71020df920  mov w2,wzr
71020df924  add x8,x8,#0x10
71020df928  str x8,[x19, #0x10]
71020df92c  bl 0x710391d4c0
71020df930  b 0x71020df94c
71020df934  ldr x8,[x19, #0x10]
71020df938  sub x1,x8,#0x10
71020df93c  adrp x2,0x7104423000
71020df940  add x2,x2,#0x45f
71020df944  mov x0,x19
71020df948  bl 0x71038f4d40
71020df94c  ldr s0,[x20, #0x20]
71020df950  ldr x8,[x19, #0x10]
71020df954  orr w22,wzr,#0x3
71020df958  str w22,[x8, #0x8]
71020df95c  str s0,[x8]
71020df960  ldr x8,[x19, #0x10]
71020df964  add x9,x8,#0x10
71020df968  sub x1,x8,#0x10
71020df96c  adrp x2,0x71043d7000
71020df970  add x2,x2,#0xeae
71020df974  mov x0,x19
71020df978  str x9,[x19, #0x10]
71020df97c  bl 0x71038f5390
71020df980  ldr s0,[x20, #0x24]
71020df984  ldr x8,[x19, #0x10]
71020df988  str w22,[x8, #0x8]
71020df98c  str s0,[x8]
71020df990  ldr x8,[x19, #0x10]
71020df994  add x9,x8,#0x10
71020df998  sub x1,x8,#0x10
71020df99c  adrp x2,0x71042ab000
71020df9a0  add x2,x2,#0xc20
71020df9a4  mov x0,x19
71020df9a8  str x9,[x19, #0x10]
71020df9ac  bl 0x71038f5390
71020df9b0  ldr x8,[x19, #0x10]
71020df9b4  tbz w21,#0x0,0x71020dfa20
71020df9b8  sub x1,x8,#0x20
71020df9bc  adrp x2,0x7104423000
71020df9c0  add x2,x2,#0x45f
71020df9c4  mov x0,x19
71020df9c8  bl 0x71038f5390
71020df9cc  ldr x8,[x19, #0x18]
71020df9d0  ldr x8,[x8, #0x18]
71020df9d4  cmp x8,#0x1
71020df9d8  b.lt 0x71020df9e4
71020df9dc  mov x0,x19
71020df9e0  bl 0x71038fec40
71020df9e4  mov x0,x19
71020df9e8  bl 0x710391e050
71020df9ec  ldr x8,[x19, #0x10]
71020df9f0  mov w9,#0x45
71020df9f4  str w9,[x8, #0x8]
71020df9f8  str x0,[x8]
71020df9fc  ldr x8,[x19, #0x10]
71020dfa00  mov x1,x0
71020dfa04  orr w3,wzr,#0x3
71020dfa08  mov x0,x19
71020dfa0c  mov w2,wzr
71020dfa10  add x8,x8,#0x10
71020dfa14  str x8,[x19, #0x10]
71020dfa18  bl 0x710391d4c0
71020dfa1c  b 0x71020dfa3c
71020dfa20  sub x9,x8,#0x10
71020dfa24  sub x1,x8,#0x20
71020dfa28  adrp x2,0x71043bf000
71020dfa2c  add x2,x2,#0x75d
71020dfa30  mov x0,x19
71020dfa34  str x9,[x19, #0x10]
71020dfa38  bl 0x71038f4d40
71020dfa3c  ldr s0,[x20, #0x30]
71020dfa40  ldr x8,[x19, #0x10]
71020dfa44  orr w22,wzr,#0x3
71020dfa48  str w22,[x8, #0x8]
71020dfa4c  str s0,[x8]
71020dfa50  ldr x8,[x19, #0x10]
71020dfa54  add x9,x8,#0x10
71020dfa58  sub x1,x8,#0x10
71020dfa5c  adrp x2,0x71043d7000
71020dfa60  add x2,x2,#0xeae
71020dfa64  mov x0,x19
71020dfa68  str x9,[x19, #0x10]
71020dfa6c  bl 0x71038f5390
71020dfa70  ldr s0,[x20, #0x34]
71020dfa74  ldr x8,[x19, #0x10]
71020dfa78  str w22,[x8, #0x8]
71020dfa7c  str s0,[x8]
71020dfa80  ldr x8,[x19, #0x10]
71020dfa84  add x9,x8,#0x10
71020dfa88  sub x1,x8,#0x10
71020dfa8c  adrp x2,0x71042ab000
71020dfa90  add x2,x2,#0xc20
71020dfa94  mov x0,x19
71020dfa98  str x9,[x19, #0x10]
71020dfa9c  bl 0x71038f5390
71020dfaa0  ldr x8,[x19, #0x10]
71020dfaa4  tbz w21,#0x0,0x71020dfb10
71020dfaa8  sub x1,x8,#0x20
71020dfaac  adrp x2,0x71043bf000
71020dfab0  add x2,x2,#0x75d
71020dfab4  mov x0,x19
71020dfab8  bl 0x71038f5390
71020dfabc  ldr x8,[x19, #0x18]
71020dfac0  ldr x8,[x8, #0x18]
71020dfac4  cmp x8,#0x1
71020dfac8  b.lt 0x71020dfad4
71020dfacc  mov x0,x19
71020dfad0  bl 0x71038fec40
71020dfad4  mov x0,x19
71020dfad8  bl 0x710391e050
71020dfadc  ldr x8,[x19, #0x10]
71020dfae0  mov w9,#0x45
71020dfae4  str w9,[x8, #0x8]
71020dfae8  str x0,[x8]
71020dfaec  ldr x8,[x19, #0x10]
71020dfaf0  mov x1,x0
71020dfaf4  orr w3,wzr,#0x3
71020dfaf8  mov x0,x19
71020dfafc  mov w2,wzr
71020dfb00  add x8,x8,#0x10
71020dfb04  str x8,[x19, #0x10]
71020dfb08  bl 0x710391d4c0
71020dfb0c  b 0x71020dfb2c
71020dfb10  sub x9,x8,#0x10
71020dfb14  sub x1,x8,#0x20
71020dfb18  adrp x2,0x7104402000
71020dfb1c  add x2,x2,#0x88d
71020dfb20  mov x0,x19
71020dfb24  str x9,[x19, #0x10]
71020dfb28  bl 0x71038f4d40
71020dfb2c  ldr s0,[x20, #0x40]
71020dfb30  ldr x8,[x19, #0x10]
71020dfb34  orr w22,wzr,#0x3
71020dfb38  str w22,[x8, #0x8]
71020dfb3c  str s0,[x8]
71020dfb40  ldr x8,[x19, #0x10]
71020dfb44  add x9,x8,#0x10
71020dfb48  sub x1,x8,#0x10
71020dfb4c  adrp x2,0x71043d7000
71020dfb50  add x2,x2,#0xeae
71020dfb54  mov x0,x19
71020dfb58  str x9,[x19, #0x10]
71020dfb5c  bl 0x71038f5390
71020dfb60  ldr s0,[x20, #0x44]
71020dfb64  ldr x8,[x19, #0x10]
71020dfb68  str w22,[x8, #0x8]
71020dfb6c  str s0,[x8]
71020dfb70  ldr x8,[x19, #0x10]
71020dfb74  add x9,x8,#0x10
71020dfb78  sub x1,x8,#0x10
71020dfb7c  adrp x2,0x71042ab000
71020dfb80  add x2,x2,#0xc20
71020dfb84  mov x0,x19
71020dfb88  str x9,[x19, #0x10]
71020dfb8c  bl 0x71038f5390
71020dfb90  ldr x8,[x19, #0x10]
71020dfb94  tbz w21,#0x0,0x71020dfc00
71020dfb98  sub x1,x8,#0x20
71020dfb9c  adrp x2,0x7104402000
71020dfba0  add x2,x2,#0x88d
71020dfba4  mov x0,x19
71020dfba8  bl 0x71038f5390
71020dfbac  ldr x8,[x19, #0x18]
71020dfbb0  ldr x8,[x8, #0x18]
71020dfbb4  cmp x8,#0x1
71020dfbb8  b.lt 0x71020dfbc4
71020dfbbc  mov x0,x19
71020dfbc0  bl 0x71038fec40
71020dfbc4  mov x0,x19
71020dfbc8  bl 0x710391e050
71020dfbcc  ldr x8,[x19, #0x10]
71020dfbd0  mov w9,#0x45
71020dfbd4  str w9,[x8, #0x8]
71020dfbd8  str x0,[x8]
71020dfbdc  ldr x8,[x19, #0x10]
71020dfbe0  mov x1,x0
71020dfbe4  orr w3,wzr,#0x3
71020dfbe8  mov x0,x19
71020dfbec  mov w2,wzr
71020dfbf0  add x8,x8,#0x10
71020dfbf4  str x8,[x19, #0x10]
71020dfbf8  bl 0x710391d4c0
71020dfbfc  b 0x71020dfc1c
71020dfc00  sub x9,x8,#0x10
71020dfc04  sub x1,x8,#0x20
71020dfc08  adrp x2,0x71042a4000
71020dfc0c  add x2,x2,#0x257
71020dfc10  mov x0,x19
71020dfc14  str x9,[x19, #0x10]
71020dfc18  bl 0x71038f4d40
71020dfc1c  ldr s0,[x20, #0x50]
71020dfc20  ldr x8,[x19, #0x10]
71020dfc24  orr w22,wzr,#0x3
71020dfc28  str w22,[x8, #0x8]
71020dfc2c  str s0,[x8]
71020dfc30  ldr x8,[x19, #0x10]
71020dfc34  add x9,x8,#0x10
71020dfc38  sub x1,x8,#0x10
71020dfc3c  adrp x2,0x71043d7000
71020dfc40  add x2,x2,#0xeae
71020dfc44  mov x0,x19
71020dfc48  str x9,[x19, #0x10]
71020dfc4c  bl 0x71038f5390
71020dfc50  ldr s0,[x20, #0x54]
71020dfc54  ldr x8,[x19, #0x10]
71020dfc58  str w22,[x8, #0x8]
71020dfc5c  str s0,[x8]
71020dfc60  ldr x8,[x19, #0x10]
71020dfc64  add x9,x8,#0x10
71020dfc68  sub x1,x8,#0x10
71020dfc6c  adrp x2,0x71042ab000
71020dfc70  add x2,x2,#0xc20
71020dfc74  mov x0,x19
71020dfc78  str x9,[x19, #0x10]
71020dfc7c  bl 0x71038f5390
71020dfc80  ldr x8,[x19, #0x10]
71020dfc84  tbz w21,#0x0,0x71020dfca4
71020dfc88  sub x1,x8,#0x20
71020dfc8c  adrp x2,0x71042a4000
71020dfc90  add x2,x2,#0x257
71020dfc94  mov x0,x19
71020dfc98  bl 0x71038f5390
71020dfc9c  ldr x8,[x19, #0x10]
71020dfca0  b 0x71020dfcac
71020dfca4  sub x8,x8,#0x10
71020dfca8  str x8,[x19, #0x10]
71020dfcac  ldrb w9,[x20, #0x60]
71020dfcb0  str w9,[x8]
71020dfcb4  mov w9,#0x1
71020dfcb8  str w9,[x8, #0x8]
71020dfcbc  ldr x8,[x19, #0x10]
71020dfcc0  add x9,x8,#0x10
71020dfcc4  sub x1,x8,#0x10
71020dfcc8  adrp x2,0x71043f1000
71020dfccc  add x2,x2,#0x9cf
71020dfcd0  mov x0,x19
71020dfcd4  str x9,[x19, #0x10]
71020dfcd8  bl 0x71038f5390
71020dfcdc  ldrsw x8,[x20, #0x64]
71020dfce0  ldr x9,[x19, #0x10]
71020dfce4  mov w10,#0x13
71020dfce8  str x8,[x9]
71020dfcec  str w10,[x9, #0x8]
71020dfcf0  ldr x8,[x19, #0x10]
71020dfcf4  add x9,x8,#0x10
71020dfcf8  str x9,[x19, #0x10]
71020dfcfc  mov x0,x19
71020dfd00  ldp x29,x30,[sp, #0x20]
71020dfd04  sub x1,x8,#0x10
71020dfd08  ldp x20,x19,[sp, #0x10]
71020dfd0c  adrp x2,0x710437d000
71020dfd10  add x2,x2,#0x6a4
71020dfd14  ldp x22,x21,[sp], #0x30
71020dfd18  b 0x71038f5390
