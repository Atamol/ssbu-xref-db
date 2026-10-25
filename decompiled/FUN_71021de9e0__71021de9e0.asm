// addr:      71021de9e0
// offset:    0x21de9e0
// name:      FUN_71021de9e0
// mangled:   
// size:      296

71021de9e0  sub sp,sp,#0x60
71021de9e4  str x21,[sp, #0x30]
71021de9e8  stp x20,x19,[sp, #0x40]
71021de9ec  stp x29,x30,[sp, #0x50]
71021de9f0  add x29,sp,#0x50
71021de9f4  ldr x8,[x0, #0x18]
71021de9f8  ldr x8,[x8, #0x18]
71021de9fc  mov x19,x0
71021dea00  cmp x8,#0x1
71021dea04  b.lt 0x71021dea10
71021dea08  mov x0,x19
71021dea0c  bl 0x71038fec40
71021dea10  mov x0,x19
71021dea14  bl 0x710391e050
71021dea18  ldr x8,[x19, #0x10]
71021dea1c  mov w9,#0x45
71021dea20  str w9,[x8, #0x8]
71021dea24  str x0,[x8]
71021dea28  ldr x8,[x19, #0x10]
71021dea2c  mov x1,x0
71021dea30  mov w3,#0x2
71021dea34  mov x0,x19
71021dea38  mov w2,wzr
71021dea3c  mov w20,#0x2
71021dea40  add x8,x8,#0x10
71021dea44  str x8,[x19, #0x10]
71021dea48  bl 0x710391d4c0
71021dea4c  mov w8,#0xa
71021dea50  str w8,[sp, #0x8]
71021dea54  mov x8,#-0x10000
71021dea58  stp xzr,xzr,[sp, #0x10]
71021dea5c  movk x8,#0x5000, LSL #16
71021dea60  str x8,[sp, #0x20]
71021dea64  adrp x8,0x71050b5000
71021dea68  add x8,x8,#0x7c8
71021dea6c  mov w21,#0x50000000
71021dea70  mov x0,sp
71021dea74  mov w2,#0x1
71021dea78  mov x1,x19
71021dea7c  strb wzr,[sp, #0x28]
71021dea80  str x8,[sp]
71021dea84  str w21,[sp, #0x2c]
71021dea88  bl 0x7101ff91a0
71021dea8c  ldr x8,[x19, #0x10]
71021dea90  adrp x9,0x71021de000
71021dea94  add x9,x9,#0xb10
71021dea98  str x9,[x8]
71021dea9c  str w20,[x8, #0x8]
71021deaa0  ldr x8,[x19, #0x10]
71021deaa4  add x9,x8,#0x10
71021deaa8  sub x1,x8,#0x10
71021deaac  adrp x2,0x710430c000
71021deab0  add x2,x2,#0x66a
71021deab4  mov x0,x19
71021deab8  str x9,[x19, #0x10]
71021deabc  bl 0x71038f5390
71021deac0  ldr x8,[x19, #0x10]
71021deac4  mov w9,#0x13
71021deac8  str w9,[x8, #0x8]
71021deacc  str x21,[x8]
71021dead0  ldr x8,[x19, #0x10]
71021dead4  add x9,x8,#0x10
71021dead8  sub x1,x8,#0x10
71021deadc  adrp x2,0x71043c7000
71021deae0  add x2,x2,#0xc26
71021deae4  mov x0,x19
71021deae8  str x9,[x19, #0x10]
71021deaec  bl 0x71038f5390
71021deaf0  ldp x29,x30,[sp, #0x50]
71021deaf4  ldr x21,[sp, #0x30]
71021deaf8  ldp x20,x19,[sp, #0x40]
71021deafc  mov w0,#0x1
71021deb00  add sp,sp,#0x60
71021deb04  ret
