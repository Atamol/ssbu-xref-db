// addr:      710216cef0
// offset:    0x216cef0
// name:      FUN_710216cef0
// mangled:   
// size:      296

710216cef0  sub sp,sp,#0x60
710216cef4  str x21,[sp, #0x30]
710216cef8  stp x20,x19,[sp, #0x40]
710216cefc  stp x29,x30,[sp, #0x50]
710216cf00  add x29,sp,#0x50
710216cf04  ldr x8,[x0, #0x18]
710216cf08  ldr x8,[x8, #0x18]
710216cf0c  mov x19,x0
710216cf10  cmp x8,#0x1
710216cf14  b.lt 0x710216cf20
710216cf18  mov x0,x19
710216cf1c  bl 0x71038fec40
710216cf20  mov x0,x19
710216cf24  bl 0x710391e050
710216cf28  ldr x8,[x19, #0x10]
710216cf2c  mov w9,#0x45
710216cf30  str w9,[x8, #0x8]
710216cf34  str x0,[x8]
710216cf38  ldr x8,[x19, #0x10]
710216cf3c  mov x1,x0
710216cf40  mov w3,#0x2
710216cf44  mov x0,x19
710216cf48  mov w2,wzr
710216cf4c  mov w20,#0x2
710216cf50  add x8,x8,#0x10
710216cf54  str x8,[x19, #0x10]
710216cf58  bl 0x710391d4c0
710216cf5c  mov w8,#0xa
710216cf60  str w8,[sp, #0x8]
710216cf64  mov x8,#-0x10000
710216cf68  stp xzr,xzr,[sp, #0x10]
710216cf6c  movk x8,#0x5000, LSL #16
710216cf70  str x8,[sp, #0x20]
710216cf74  adrp x8,0x71050b4000
710216cf78  add x8,x8,#0xf58
710216cf7c  orr w21,wzr,#0x3f800000
710216cf80  mov x0,sp
710216cf84  mov w2,#0x1
710216cf88  mov x1,x19
710216cf8c  strb wzr,[sp, #0x28]
710216cf90  str x8,[sp]
710216cf94  str w21,[sp, #0x2c]
710216cf98  bl 0x7101ff91a0
710216cf9c  ldr x8,[x19, #0x10]
710216cfa0  adrp x9,0x710216d000
710216cfa4  add x9,x9,#0x20
710216cfa8  str x9,[x8]
710216cfac  str w20,[x8, #0x8]
710216cfb0  ldr x8,[x19, #0x10]
710216cfb4  add x9,x8,#0x10
710216cfb8  sub x1,x8,#0x10
710216cfbc  adrp x2,0x710430c000
710216cfc0  add x2,x2,#0x66a
710216cfc4  mov x0,x19
710216cfc8  str x9,[x19, #0x10]
710216cfcc  bl 0x71038f5390
710216cfd0  ldr x8,[x19, #0x10]
710216cfd4  orr w9,wzr,#0x3
710216cfd8  str w9,[x8, #0x8]
710216cfdc  str w21,[x8]
710216cfe0  ldr x8,[x19, #0x10]
710216cfe4  add x9,x8,#0x10
710216cfe8  sub x1,x8,#0x10
710216cfec  adrp x2,0x7104350000
710216cff0  add x2,x2,#0x640
710216cff4  mov x0,x19
710216cff8  str x9,[x19, #0x10]
710216cffc  bl 0x71038f5390
710216d000  ldp x29,x30,[sp, #0x50]
710216d004  ldr x21,[sp, #0x30]
710216d008  ldp x20,x19,[sp, #0x40]
710216d00c  mov w0,#0x1
710216d010  add sp,sp,#0x60
710216d014  ret
