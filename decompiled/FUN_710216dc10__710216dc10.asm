// addr:      710216dc10
// offset:    0x216dc10
// name:      FUN_710216dc10
// mangled:   
// size:      200

710216dc10  str x21,[sp, #-0x30]!
710216dc14  stp x20,x19,[sp, #0x10]
710216dc18  stp x29,x30,[sp, #0x20]
710216dc1c  add x29,sp,#0x20
710216dc20  and w2,w2,#0x1
710216dc24  mov x19,x1
710216dc28  mov x20,x0
710216dc2c  bl 0x7101ff91a0
710216dc30  ldr x8,[x19, #0x10]
710216dc34  adrp x9,0x710216d000
710216dc38  add x9,x9,#0xb60
710216dc3c  str x9,[x8]
710216dc40  mov w9,#0x2
710216dc44  str w9,[x8, #0x8]
710216dc48  ldr x8,[x19, #0x10]
710216dc4c  add x9,x8,#0x10
710216dc50  sub x1,x8,#0x10
710216dc54  adrp x2,0x710430c000
710216dc58  add x2,x2,#0x66a
710216dc5c  mov x0,x19
710216dc60  str x9,[x19, #0x10]
710216dc64  bl 0x71038f5390
710216dc68  ldr w8,[x20, #0x2c]
710216dc6c  ldr x9,[x19, #0x10]
710216dc70  orr w21,wzr,#0x3
710216dc74  str w8,[x9]
710216dc78  str w21,[x9, #0x8]
710216dc7c  ldr x8,[x19, #0x10]
710216dc80  add x9,x8,#0x10
710216dc84  sub x1,x8,#0x10
710216dc88  adrp x2,0x710445a000
710216dc8c  add x2,x2,#0x6e9
710216dc90  mov x0,x19
710216dc94  str x9,[x19, #0x10]
710216dc98  bl 0x71038f5390
710216dc9c  ldr w8,[x20, #0x30]
710216dca0  ldr x9,[x19, #0x10]
710216dca4  str w8,[x9]
710216dca8  str w21,[x9, #0x8]
710216dcac  ldr x8,[x19, #0x10]
710216dcb0  add x9,x8,#0x10
710216dcb4  str x9,[x19, #0x10]
710216dcb8  mov x0,x19
710216dcbc  sub x1,x8,#0x10
710216dcc0  ldp x29,x30,[sp, #0x20]
710216dcc4  adrp x2,0x71043d5000
710216dcc8  add x2,x2,#0x631
710216dccc  ldp x20,x19,[sp, #0x10]
710216dcd0  ldr x21,[sp], #0x30
710216dcd4  b 0x71038f5390
