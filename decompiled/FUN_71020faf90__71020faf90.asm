// addr:      71020faf90
// offset:    0x20faf90
// name:      FUN_71020faf90
// mangled:   
// size:      216

71020faf90  stp x20,x19,[sp, #-0x20]!
71020faf94  stp x29,x30,[sp, #0x10]
71020faf98  add x29,sp,#0x10
71020faf9c  ldr x8,[x0, #0x18]
71020fafa0  ldr x8,[x8, #0x18]
71020fafa4  mov x19,x0
71020fafa8  cmp x8,#0x1
71020fafac  b.lt 0x71020fafb8
71020fafb0  mov x0,x19
71020fafb4  bl 0x71038fec40
71020fafb8  mov x0,x19
71020fafbc  bl 0x710391e050
71020fafc0  ldr x8,[x19, #0x10]
71020fafc4  mov w9,#0x45
71020fafc8  str w9,[x8, #0x8]
71020fafcc  str x0,[x8]
71020fafd0  ldr x8,[x19, #0x10]
71020fafd4  mov x1,x0
71020fafd8  mov w3,#0x2
71020fafdc  mov x0,x19
71020fafe0  mov w2,wzr
71020fafe4  mov w20,#0x2
71020fafe8  add x8,x8,#0x10
71020fafec  str x8,[x19, #0x10]
71020faff0  bl 0x710391d4c0
71020faff4  ldr x8,[x19, #0x10]
71020faff8  adrp x9,0x71020bc000
71020faffc  add x9,x9,#0x20
71020fb000  str x9,[x8]
71020fb004  str w20,[x8, #0x8]
71020fb008  ldr x8,[x19, #0x10]
71020fb00c  add x9,x8,#0x10
71020fb010  sub x1,x8,#0x10
71020fb014  adrp x2,0x710430c000
71020fb018  add x2,x2,#0x66a
71020fb01c  mov x0,x19
71020fb020  str x9,[x19, #0x10]
71020fb024  bl 0x71038f5390
71020fb028  ldr x8,[x19, #0x10]
71020fb02c  mov w9,#0x13
71020fb030  str w9,[x8, #0x8]
71020fb034  str xzr,[x8]
71020fb038  ldr x8,[x19, #0x10]
71020fb03c  add x9,x8,#0x10
71020fb040  sub x1,x8,#0x10
71020fb044  adrp x2,0x7104292000
71020fb048  add x2,x2,#0xdc3
71020fb04c  mov x0,x19
71020fb050  str x9,[x19, #0x10]
71020fb054  bl 0x71038f5390
71020fb058  ldp x29,x30,[sp, #0x10]
71020fb05c  mov w0,#0x1
71020fb060  ldp x20,x19,[sp], #0x20
71020fb064  ret
