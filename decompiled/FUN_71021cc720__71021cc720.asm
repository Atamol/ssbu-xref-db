// addr:      71021cc720
// offset:    0x21cc720
// name:      FUN_71021cc720
// mangled:   
// size:      340

71021cc720  sub sp,sp,#0x60
71021cc724  stp x20,x19,[sp, #0x40]
71021cc728  stp x29,x30,[sp, #0x50]
71021cc72c  add x29,sp,#0x50
71021cc730  ldr x8,[x0, #0x18]
71021cc734  ldr x8,[x8, #0x18]
71021cc738  mov x19,x0
71021cc73c  cmp x8,#0x1
71021cc740  b.lt 0x71021cc74c
71021cc744  mov x0,x19
71021cc748  bl 0x71038fec40
71021cc74c  mov x0,x19
71021cc750  bl 0x710391e050
71021cc754  ldr x8,[x19, #0x10]
71021cc758  mov w9,#0x45
71021cc75c  str w9,[x8, #0x8]
71021cc760  str x0,[x8]
71021cc764  ldr x8,[x19, #0x10]
71021cc768  mov x1,x0
71021cc76c  orr w3,wzr,#0x3
71021cc770  mov x0,x19
71021cc774  mov w2,wzr
71021cc778  orr w20,wzr,#0x3
71021cc77c  add x8,x8,#0x10
71021cc780  str x8,[x19, #0x10]
71021cc784  bl 0x710391d4c0
71021cc788  mov w8,#0xa
71021cc78c  str w8,[sp, #0x10]
71021cc790  mov x8,#0xc49c
71021cc794  movk x8,#0x351a, LSL #16
71021cc798  movk x8,#0x20, LSL #32
71021cc79c  add x0,sp,#0x8
71021cc7a0  stp x8,xzr,[sp, #0x18]
71021cc7a4  mov x8,#-0x10000
71021cc7a8  movk x8,#0x5000, LSL #16
71021cc7ac  str x8,[sp, #0x28]
71021cc7b0  adrp x8,0x71050b5000
71021cc7b4  add x8,x8,#0x598
71021cc7b8  mov w2,#0x1
71021cc7bc  mov x1,x19
71021cc7c0  strb wzr,[sp, #0x30]
71021cc7c4  stur xzr,[sp, #0x34]
71021cc7c8  str x8,[sp, #0x8]
71021cc7cc  bl 0x7101ff91a0
71021cc7d0  ldr x8,[x19, #0x10]
71021cc7d4  adrp x9,0x71021cc000
71021cc7d8  add x9,x9,#0x880
71021cc7dc  str x9,[x8]
71021cc7e0  mov w9,#0x2
71021cc7e4  str w9,[x8, #0x8]
71021cc7e8  ldr x8,[x19, #0x10]
71021cc7ec  add x9,x8,#0x10
71021cc7f0  sub x1,x8,#0x10
71021cc7f4  adrp x2,0x710430c000
71021cc7f8  add x2,x2,#0x66a
71021cc7fc  mov x0,x19
71021cc800  str x9,[x19, #0x10]
71021cc804  bl 0x71038f5390
71021cc808  ldr x8,[x19, #0x10]
71021cc80c  str wzr,[x8]
71021cc810  str w20,[x8, #0x8]
71021cc814  ldr x8,[x19, #0x10]
71021cc818  add x9,x8,#0x10
71021cc81c  sub x1,x8,#0x10
71021cc820  adrp x2,0x710444d000
71021cc824  add x2,x2,#0xeb5
71021cc828  mov x0,x19
71021cc82c  str x9,[x19, #0x10]
71021cc830  bl 0x71038f5390
71021cc834  ldr x8,[x19, #0x10]
71021cc838  str wzr,[x8]
71021cc83c  str w20,[x8, #0x8]
71021cc840  ldr x8,[x19, #0x10]
71021cc844  add x9,x8,#0x10
71021cc848  sub x1,x8,#0x10
71021cc84c  adrp x2,0x7104354000
71021cc850  add x2,x2,#0x78c
71021cc854  mov x0,x19
71021cc858  str x9,[x19, #0x10]
71021cc85c  bl 0x71038f5390
71021cc860  ldp x29,x30,[sp, #0x50]
71021cc864  mov w0,#0x1
71021cc868  ldp x20,x19,[sp, #0x40]
71021cc86c  add sp,sp,#0x60
71021cc870  ret
