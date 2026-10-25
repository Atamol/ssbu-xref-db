// addr:      710216bef0
// offset:    0x216bef0
// name:      FUN_710216bef0
// mangled:   
// size:      308

710216bef0  str x21,[sp, #-0x30]!
710216bef4  stp x20,x19,[sp, #0x10]
710216bef8  stp x29,x30,[sp, #0x20]
710216befc  add x29,sp,#0x20
710216bf00  and w2,w2,#0x1
710216bf04  mov x19,x1
710216bf08  mov x20,x0
710216bf0c  bl 0x7101ff91a0
710216bf10  ldr x8,[x19, #0x10]
710216bf14  adrp x9,0x710216c000
710216bf18  add x9,x9,#0x30
710216bf1c  str x9,[x8]
710216bf20  mov w9,#0x2
710216bf24  str w9,[x8, #0x8]
710216bf28  ldr x8,[x19, #0x10]
710216bf2c  add x9,x8,#0x10
710216bf30  sub x1,x8,#0x10
710216bf34  adrp x2,0x710430c000
710216bf38  add x2,x2,#0x66a
710216bf3c  mov x0,x19
710216bf40  str x9,[x19, #0x10]
710216bf44  bl 0x71038f5390
710216bf48  ldr x8,[x20, #0x30]
710216bf4c  ldr x9,[x19, #0x10]
710216bf50  adrp x2,0x71042fe000
710216bf54  add x2,x2,#0x5c6
710216bf58  and x8,x8,#0xffffffffff
710216bf5c  str x8,[x9]
710216bf60  mov w8,#0x13
710216bf64  str w8,[x9, #0x8]
710216bf68  ldr x8,[x19, #0x10]
710216bf6c  add x9,x8,#0x10
710216bf70  sub x1,x8,#0x10
710216bf74  mov x0,x19
710216bf78  str x9,[x19, #0x10]
710216bf7c  bl 0x71038f5390
710216bf80  ldr w8,[x20, #0x38]
710216bf84  ldr x9,[x19, #0x10]
710216bf88  orr w21,wzr,#0x3
710216bf8c  str w8,[x9]
710216bf90  str w21,[x9, #0x8]
710216bf94  ldr x8,[x19, #0x10]
710216bf98  add x9,x8,#0x10
710216bf9c  sub x1,x8,#0x10
710216bfa0  adrp x2,0x710431e000
710216bfa4  add x2,x2,#0xf46
710216bfa8  mov x0,x19
710216bfac  str x9,[x19, #0x10]
710216bfb0  bl 0x71038f5390
710216bfb4  ldr w8,[x20, #0x3c]
710216bfb8  ldr x9,[x19, #0x10]
710216bfbc  str w8,[x9]
710216bfc0  str w21,[x9, #0x8]
710216bfc4  ldr x8,[x19, #0x10]
710216bfc8  add x9,x8,#0x10
710216bfcc  sub x1,x8,#0x10
710216bfd0  adrp x2,0x71043d5000
710216bfd4  add x2,x2,#0x62b
710216bfd8  mov x0,x19
710216bfdc  str x9,[x19, #0x10]
710216bfe0  bl 0x71038f5390
710216bfe4  ldrb w8,[x20, #0x40]
710216bfe8  ldr x9,[x19, #0x10]
710216bfec  mov w10,#0x1
710216bff0  str w8,[x9]
710216bff4  str w10,[x9, #0x8]
710216bff8  ldr x8,[x19, #0x10]
710216bffc  add x9,x8,#0x10
710216c000  str x9,[x19, #0x10]
710216c004  mov x0,x19
710216c008  ldp x29,x30,[sp, #0x20]
710216c00c  sub x1,x8,#0x10
710216c010  ldp x20,x19,[sp, #0x10]
710216c014  adrp x2,0x7104449000
710216c018  add x2,x2,#0x93f
710216c01c  ldr x21,[sp], #0x30
710216c020  b 0x71038f5390
