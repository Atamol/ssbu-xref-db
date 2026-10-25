// addr:      71021aff80
// offset:    0x21aff80
// name:      FUN_71021aff80
// mangled:   
// size:      296

71021aff80  sub sp,sp,#0x60
71021aff84  str x21,[sp, #0x30]
71021aff88  stp x20,x19,[sp, #0x40]
71021aff8c  stp x29,x30,[sp, #0x50]
71021aff90  add x29,sp,#0x50
71021aff94  ldr x8,[x0, #0x18]
71021aff98  ldr x8,[x8, #0x18]
71021aff9c  mov x19,x0
71021affa0  cmp x8,#0x1
71021affa4  b.lt 0x71021affb0
71021affa8  mov x0,x19
71021affac  bl 0x71038fec40
71021affb0  mov x0,x19
71021affb4  bl 0x710391e050
71021affb8  ldr x8,[x19, #0x10]
71021affbc  mov w9,#0x45
71021affc0  str w9,[x8, #0x8]
71021affc4  str x0,[x8]
71021affc8  ldr x8,[x19, #0x10]
71021affcc  mov x1,x0
71021affd0  mov w3,#0x2
71021affd4  mov x0,x19
71021affd8  mov w2,wzr
71021affdc  mov w20,#0x2
71021affe0  add x8,x8,#0x10
71021affe4  str x8,[x19, #0x10]
71021affe8  bl 0x710391d4c0
71021affec  mov w8,#0xa
71021afff0  str w8,[sp, #0x8]
71021afff4  mov x8,#-0x10000
71021afff8  stp xzr,xzr,[sp, #0x10]
71021afffc  movk x8,#0x5000, LSL #16
71021b0000  str x8,[sp, #0x20]
71021b0004  adrp x8,0x71050b5000
71021b0008  add x8,x8,#0x548
71021b000c  mov w21,#0x50000000
71021b0010  mov x0,sp
71021b0014  mov w2,#0x1
71021b0018  mov x1,x19
71021b001c  strb wzr,[sp, #0x28]
71021b0020  str x8,[sp]
71021b0024  str w21,[sp, #0x2c]
71021b0028  bl 0x7101ff91a0
71021b002c  ldr x8,[x19, #0x10]
71021b0030  adrp x9,0x71021b0000
71021b0034  add x9,x9,#0xb0
71021b0038  str x9,[x8]
71021b003c  str w20,[x8, #0x8]
71021b0040  ldr x8,[x19, #0x10]
71021b0044  add x9,x8,#0x10
71021b0048  sub x1,x8,#0x10
71021b004c  adrp x2,0x710430c000
71021b0050  add x2,x2,#0x66a
71021b0054  mov x0,x19
71021b0058  str x9,[x19, #0x10]
71021b005c  bl 0x71038f5390
71021b0060  ldr x8,[x19, #0x10]
71021b0064  mov w9,#0x13
71021b0068  str w9,[x8, #0x8]
71021b006c  str x21,[x8]
71021b0070  ldr x8,[x19, #0x10]
71021b0074  add x9,x8,#0x10
71021b0078  sub x1,x8,#0x10
71021b007c  adrp x2,0x71043c7000
71021b0080  add x2,x2,#0xc26
71021b0084  mov x0,x19
71021b0088  str x9,[x19, #0x10]
71021b008c  bl 0x71038f5390
71021b0090  ldp x29,x30,[sp, #0x50]
71021b0094  ldr x21,[sp, #0x30]
71021b0098  ldp x20,x19,[sp, #0x40]
71021b009c  mov w0,#0x1
71021b00a0  add sp,sp,#0x60
71021b00a4  ret
