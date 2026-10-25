// addr:      71020bbf00
// offset:    0x20bbf00
// name:      FUN_71020bbf00
// mangled:   
// size:      280

71020bbf00  str x21,[sp, #-0x30]!
71020bbf04  stp x20,x19,[sp, #0x10]
71020bbf08  stp x29,x30,[sp, #0x20]
71020bbf0c  add x29,sp,#0x20
71020bbf10  ldr x8,[x0, #0x18]
71020bbf14  ldr x8,[x8, #0x18]
71020bbf18  mov x19,x0
71020bbf1c  cmp x8,#0x1
71020bbf20  b.lt 0x71020bbf2c
71020bbf24  mov x0,x19
71020bbf28  bl 0x71038fec40
71020bbf2c  mov x0,x19
71020bbf30  bl 0x710391e050
71020bbf34  ldr x8,[x19, #0x10]
71020bbf38  mov w9,#0x45
71020bbf3c  str w9,[x8, #0x8]
71020bbf40  str x0,[x8]
71020bbf44  ldr x8,[x19, #0x10]
71020bbf48  mov x1,x0
71020bbf4c  mov w3,#0x1
71020bbf50  mov x0,x19
71020bbf54  mov w2,wzr
71020bbf58  add x8,x8,#0x10
71020bbf5c  str x8,[x19, #0x10]
71020bbf60  bl 0x710391d4c0
71020bbf64  ldr x8,[x19, #0x10]
71020bbf68  adrp x9,0x71020bc000
71020bbf6c  add x9,x9,#0x20
71020bbf70  mov w21,#0x2
71020bbf74  str x9,[x8]
71020bbf78  str w21,[x8, #0x8]
71020bbf7c  ldr x8,[x19, #0x10]
71020bbf80  adrp x20,0x710430c000
71020bbf84  add x20,x20,#0x66a
71020bbf88  mov x2,x20
71020bbf8c  add x9,x8,#0x10
71020bbf90  sub x1,x8,#0x10
71020bbf94  mov x0,x19
71020bbf98  str x9,[x19, #0x10]
71020bbf9c  bl 0x71038f5390
71020bbfa0  ldr x8,[x19, #0x10]
71020bbfa4  mov w9,#0x31
71020bbfa8  str x9,[x8]
71020bbfac  mov w9,#0x13
71020bbfb0  str w9,[x8, #0x8]
71020bbfb4  ldr x8,[x19, #0x10]
71020bbfb8  add x9,x8,#0x10
71020bbfbc  sub x1,x8,#0x10
71020bbfc0  adrp x2,0x7104292000
71020bbfc4  add x2,x2,#0xdc3
71020bbfc8  mov x0,x19
71020bbfcc  str x9,[x19, #0x10]
71020bbfd0  bl 0x71038f5390
71020bbfd4  ldr x8,[x19, #0x10]
71020bbfd8  adrp x9,0x71020bc000
71020bbfdc  add x9,x9,#0xa0
71020bbfe0  str x9,[x8]
71020bbfe4  str w21,[x8, #0x8]
71020bbfe8  ldr x8,[x19, #0x10]
71020bbfec  add x9,x8,#0x10
71020bbff0  sub x1,x8,#0x10
71020bbff4  mov x0,x19
71020bbff8  mov x2,x20
71020bbffc  str x9,[x19, #0x10]
71020bc000  bl 0x71038f5390
71020bc004  ldp x29,x30,[sp, #0x20]
71020bc008  mov w0,#0x1
71020bc00c  ldp x20,x19,[sp, #0x10]
71020bc010  ldr x21,[sp], #0x30
71020bc014  ret
