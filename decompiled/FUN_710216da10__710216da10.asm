// addr:      710216da10
// offset:    0x216da10
// name:      FUN_710216da10
// mangled:   
// size:      328

710216da10  sub sp,sp,#0x60
710216da14  stp x20,x19,[sp, #0x40]
710216da18  stp x29,x30,[sp, #0x50]
710216da1c  add x29,sp,#0x50
710216da20  ldr x8,[x0, #0x18]
710216da24  ldr x8,[x8, #0x18]
710216da28  mov x19,x0
710216da2c  cmp x8,#0x1
710216da30  b.lt 0x710216da3c
710216da34  mov x0,x19
710216da38  bl 0x71038fec40
710216da3c  mov x0,x19
710216da40  bl 0x710391e050
710216da44  ldr x8,[x19, #0x10]
710216da48  mov w9,#0x45
710216da4c  str w9,[x8, #0x8]
710216da50  str x0,[x8]
710216da54  ldr x8,[x19, #0x10]
710216da58  mov x1,x0
710216da5c  orr w3,wzr,#0x3
710216da60  mov x0,x19
710216da64  mov w2,wzr
710216da68  orr w20,wzr,#0x3
710216da6c  add x8,x8,#0x10
710216da70  str x8,[x19, #0x10]
710216da74  bl 0x710391d4c0
710216da78  mov w8,#0xa
710216da7c  str w8,[sp, #0x10]
710216da80  mov x8,#-0x10000
710216da84  stp xzr,xzr,[sp, #0x18]
710216da88  movk x8,#0x5000, LSL #16
710216da8c  str x8,[sp, #0x28]
710216da90  adrp x8,0x71050b4000
710216da94  add x8,x8,#0xfa8
710216da98  add x0,sp,#0x8
710216da9c  mov w2,#0x1
710216daa0  mov x1,x19
710216daa4  strb wzr,[sp, #0x30]
710216daa8  str x8,[sp, #0x8]
710216daac  stur xzr,[sp, #0x34]
710216dab0  bl 0x7101ff91a0
710216dab4  ldr x8,[x19, #0x10]
710216dab8  adrp x9,0x710216d000
710216dabc  add x9,x9,#0xb60
710216dac0  str x9,[x8]
710216dac4  mov w9,#0x2
710216dac8  str w9,[x8, #0x8]
710216dacc  ldr x8,[x19, #0x10]
710216dad0  add x9,x8,#0x10
710216dad4  sub x1,x8,#0x10
710216dad8  adrp x2,0x710430c000
710216dadc  add x2,x2,#0x66a
710216dae0  mov x0,x19
710216dae4  str x9,[x19, #0x10]
710216dae8  bl 0x71038f5390
710216daec  ldr x8,[x19, #0x10]
710216daf0  str wzr,[x8]
710216daf4  str w20,[x8, #0x8]
710216daf8  ldr x8,[x19, #0x10]
710216dafc  add x9,x8,#0x10
710216db00  sub x1,x8,#0x10
710216db04  adrp x2,0x710445a000
710216db08  add x2,x2,#0x6e9
710216db0c  mov x0,x19
710216db10  str x9,[x19, #0x10]
710216db14  bl 0x71038f5390
710216db18  ldr x8,[x19, #0x10]
710216db1c  str wzr,[x8]
710216db20  str w20,[x8, #0x8]
710216db24  ldr x8,[x19, #0x10]
710216db28  add x9,x8,#0x10
710216db2c  sub x1,x8,#0x10
710216db30  adrp x2,0x71043d5000
710216db34  add x2,x2,#0x631
710216db38  mov x0,x19
710216db3c  str x9,[x19, #0x10]
710216db40  bl 0x71038f5390
710216db44  ldp x29,x30,[sp, #0x50]
710216db48  mov w0,#0x1
710216db4c  ldp x20,x19,[sp, #0x40]
710216db50  add sp,sp,#0x60
710216db54  ret
