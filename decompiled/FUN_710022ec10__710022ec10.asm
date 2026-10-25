// addr:      710022ec10
// offset:    0x22ec10
// name:      FUN_710022ec10
// mangled:   
// size:      220

710022ec10  sub sp,sp,#0x60
710022ec14  str x21,[sp, #0x30]
710022ec18  stp x20,x19,[sp, #0x40]
710022ec1c  stp x29,x30,[sp, #0x50]
710022ec20  add x29,sp,#0x50
710022ec24  adrp x8,0x71052a7000
710022ec28  ldr x8,[x8, #0x5e0]
710022ec2c  adrp x9,0x71052a4000
710022ec30  ldr x9,[x9, #0xd80]
710022ec34  mov x19,x0
710022ec38  add x20,x0,#0x8
710022ec3c  adrp x1,0x7104318000
710022ec40  add x1,x1,#0x491
710022ec44  add x0,sp,#0x8
710022ec48  add x8,x8,#0x10
710022ec4c  add x21,x9,#0x10
710022ec50  mov x2,#-0x1
710022ec54  str x8,[x19], #0x50
710022ec58  add x8,sp,#0x8
710022ec5c  add x8,x8,#0x8
710022ec60  str x8,[sp, #0x20]
710022ec64  mov w8,#0x10
710022ec68  str x21,[sp, #0x8]
710022ec6c  strb wzr,[sp, #0x10]
710022ec70  str x8,[sp, #0x28]
710022ec74  bl 0x71001b47e0
710022ec78  add x1,sp,#0x8
710022ec7c  mov x0,x20
710022ec80  bl 0x71001afb30
710022ec84  add x0,sp,#0x8
710022ec88  str x21,[sp, #0x8]
710022ec8c  bl 0x71001b4910
710022ec90  mov x0,x19
710022ec94  bl 0x71001d69d0
710022ec98  adrp x8,0x71052a7000
710022ec9c  ldr x8,[x8, #0x5e8]
710022eca0  ldrb w9,[x8]
710022eca4  cbnz w9,0x710022ecd8
710022eca8  adrp x9,0x71052a7000
710022ecac  adrp x10,0x71052a7000
710022ecb0  adrp x11,0x71052a7000
710022ecb4  ldr x9,[x9, #0x5f0]
710022ecb8  ldr x10,[x10, #0x5f8]
710022ecbc  adrp x12,0x71052a7000
710022ecc0  ldr x11,[x11, #0x600]
710022ecc4  ldr x12,[x12, #0x608]
710022ecc8  str x10,[x9]
710022eccc  mov w9,#0x1
710022ecd0  str x12,[x11]
710022ecd4  strb w9,[x8]
710022ecd8  ldp x29,x30,[sp, #0x50]
710022ecdc  ldr x21,[sp, #0x30]
710022ece0  ldp x20,x19,[sp, #0x40]
710022ece4  add sp,sp,#0x60
710022ece8  ret
