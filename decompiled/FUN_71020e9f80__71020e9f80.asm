// addr:      71020e9f80
// offset:    0x20e9f80
// name:      FUN_71020e9f80
// mangled:   
// size:      288

71020e9f80  sub sp,sp,#0x50
71020e9f84  str x21,[sp, #0x20]
71020e9f88  stp x20,x19,[sp, #0x30]
71020e9f8c  stp x29,x30,[sp, #0x40]
71020e9f90  add x29,sp,#0x40
71020e9f94  ldr x8,[x0, #0x18]
71020e9f98  ldr x8,[x8, #0x18]
71020e9f9c  mov x19,x0
71020e9fa0  cmp x8,#0x1
71020e9fa4  b.lt 0x71020e9fb0
71020e9fa8  mov x0,x19
71020e9fac  bl 0x71038fec40
71020e9fb0  mov x0,x19
71020e9fb4  bl 0x710391e050
71020e9fb8  ldr x8,[x19, #0x10]
71020e9fbc  mov w9,#0x45
71020e9fc0  str w9,[x8, #0x8]
71020e9fc4  str x0,[x8]
71020e9fc8  ldr x8,[x19, #0x10]
71020e9fcc  mov x1,x0
71020e9fd0  mov w3,#0x2
71020e9fd4  mov x0,x19
71020e9fd8  mov w2,wzr
71020e9fdc  mov w20,#0x2
71020e9fe0  add x8,x8,#0x10
71020e9fe4  str x8,[x19, #0x10]
71020e9fe8  bl 0x710391d4c0
71020e9fec  mov x8,#0x1
71020e9ff0  movk x8,#0x5000, LSL #48
71020e9ff4  str x8,[sp, #0x8]
71020e9ff8  mov x8,#0x3e
71020e9ffc  movk x8,#0x5000, LSL #48
71020ea000  adrp x9,0x71050b4000
71020ea004  add x9,x9,#0xb98
71020ea008  mov x0,sp
71020ea00c  mov w2,#0x1
71020ea010  mov x1,x19
71020ea014  strb wzr,[sp, #0x18]
71020ea018  str x8,[sp, #0x10]
71020ea01c  str x9,[sp]
71020ea020  mov w21,#0x1
71020ea024  bl 0x71020d4810
71020ea028  ldr x8,[x19, #0x10]
71020ea02c  adrp x9,0x71020ea000
71020ea030  add x9,x9,#0xa0
71020ea034  str x9,[x8]
71020ea038  str w20,[x8, #0x8]
71020ea03c  ldr x8,[x19, #0x10]
71020ea040  add x9,x8,#0x10
71020ea044  sub x1,x8,#0x10
71020ea048  adrp x2,0x710430c000
71020ea04c  add x2,x2,#0x66a
71020ea050  mov x0,x19
71020ea054  str x9,[x19, #0x10]
71020ea058  bl 0x71038f5390
71020ea05c  ldr x8,[x19, #0x10]
71020ea060  str wzr,[x8]
71020ea064  str w21,[x8, #0x8]
71020ea068  ldr x8,[x19, #0x10]
71020ea06c  add x9,x8,#0x10
71020ea070  sub x1,x8,#0x10
71020ea074  adrp x2,0x71042f9000
71020ea078  add x2,x2,#0x565
71020ea07c  mov x0,x19
71020ea080  str x9,[x19, #0x10]
71020ea084  bl 0x71038f5390
71020ea088  ldp x29,x30,[sp, #0x40]
71020ea08c  ldr x21,[sp, #0x20]
71020ea090  ldp x20,x19,[sp, #0x30]
71020ea094  mov w0,#0x1
71020ea098  add sp,sp,#0x50
71020ea09c  ret
