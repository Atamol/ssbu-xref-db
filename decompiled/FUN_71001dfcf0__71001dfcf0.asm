// addr:      71001dfcf0
// offset:    0x1dfcf0
// name:      FUN_71001dfcf0
// mangled:   
// size:      492

71001dfcf0  sub sp,sp,#0xa0
71001dfcf4  str x25,[sp, #0x50]
71001dfcf8  stp x24,x23,[sp, #0x60]
71001dfcfc  stp x22,x21,[sp, #0x70]
71001dfd00  stp x20,x19,[sp, #0x80]
71001dfd04  stp x29,x30,[sp, #0x90]
71001dfd08  add x29,sp,#0x90
71001dfd0c  adrp x24,0x71052a4000
71001dfd10  ldr x24,[x24, #0xda8]
71001dfd14  adrp x23,0x71052a4000
71001dfd18  ldrb w8,[x24]
71001dfd1c  ldr x23,[x23, #0xdb0]
71001dfd20  mov x22,x2
71001dfd24  mov x20,x1
71001dfd28  mov x19,x0
71001dfd2c  add x21,x23,#0x28
71001dfd30  cbz w8,0x71001dfd6c
71001dfd34  adrp x8,0x71052a4000
71001dfd38  ldr x8,[x8, #0xdb8]
71001dfd3c  ldr x0,[x8]
71001dfd40  bl 0x7101717960
71001dfd44  ldr w8,[x0]
71001dfd48  cbz w8,0x71001dfd6c
71001dfd4c  ldr x10,[x23, #0xa0]
71001dfd50  ldp x9,x10,[x10]
71001dfd54  sub x10,x10,x9
71001dfd58  asr x10,x10,#0x3
71001dfd5c  cmp x10,x8
71001dfd60  b.ls 0x71001dfd84
71001dfd64  ldr x8,[x9, x8, LSL #0x3]
71001dfd68  add x21,x8,#0x20
71001dfd6c  ldr x8,[x21]
71001dfd70  cbz x8,0x71001dfd9c
71001dfd74  ldr x8,[x8, #0x10]
71001dfd78  cbz x8,0x71001dfd9c
71001dfd7c  ldr x21,[x8, #0x10]
71001dfd80  b 0x71001dfda0
71001dfd84  adrp x0,0x71042c4000
71001dfd88  add x0,x0,#0x35f
71001dfd8c  mov w1,#0x47
71001dfd90  orr w2,wzr,#0xe0000003
71001dfd94  mov w3,wzr
71001dfd98  bl 0x71001b1300
71001dfd9c  mov x21,xzr
71001dfda0  ldr x8,[x21, #0x78]!
71001dfda4  ldr x8,[x8, #0x10]
71001dfda8  mov x0,x21
71001dfdac  blr x8
71001dfdb0  ldr w22,[x22]
71001dfdb4  ldrb w8,[x24]
71001dfdb8  add x25,x23,#0x28
71001dfdbc  cbz w8,0x71001dfdf8
71001dfdc0  adrp x8,0x71052a4000
71001dfdc4  ldr x8,[x8, #0xdb8]
71001dfdc8  ldr x0,[x8]
71001dfdcc  bl 0x7101717960
71001dfdd0  ldr w8,[x0]
71001dfdd4  cbz w8,0x71001dfdf8
71001dfdd8  ldr x10,[x23, #0xa0]
71001dfddc  ldp x9,x10,[x10]
71001dfde0  sub x10,x10,x9
71001dfde4  asr x10,x10,#0x3
71001dfde8  cmp x10,x8
71001dfdec  b.ls 0x71001dfec4
71001dfdf0  ldr x8,[x9, x8, LSL #0x3]
71001dfdf4  add x25,x8,#0x20
71001dfdf8  ldr x8,[x25]
71001dfdfc  ldr x8,[x8, #0x10]
71001dfe00  ldr x0,[x8, #0x18]
71001dfe04  mov w1,w22
71001dfe08  bl 0x71001cd7d0
71001dfe0c  cbz x0,0x71001dfe84
71001dfe10  mov x22,x0
71001dfe14  mov w8,#0x1
71001dfe18  add x1,sp,#0x38
71001dfe1c  mov x0,x20
71001dfe20  strb w8,[sp, #0x38]
71001dfe24  bl 0x71001b4280
71001dfe28  tbz w0,#0x0,0x71001dfe50
71001dfe2c  ldp x8,x9,[x20]
71001dfe30  ldr x10,[x20, #0x10]
71001dfe34  str x8,[sp, #0x20]
71001dfe38  mov x8,x10
71001dfe3c  mov w1,#0x2
71001dfe40  stp x9,x10,[sp, #0x28]
71001dfe44  stp x9,x8,[sp, #0x40]
71001dfe48  ldr x8,[sp, #0x20]
71001dfe4c  b 0x71001dfe70
71001dfe50  ldp x8,x9,[x20]
71001dfe54  ldr x10,[x20, #0x10]
71001dfe58  str x8,[sp, #0x8]
71001dfe5c  mov x8,x10
71001dfe60  orr w1,wzr,#0x3
71001dfe64  stp x9,x10,[sp, #0x10]
71001dfe68  stp x9,x8,[sp, #0x40]
71001dfe6c  ldr x8,[sp, #0x8]
71001dfe70  str x8,[sp, #0x38]
71001dfe74  add x2,sp,#0x38
71001dfe78  mov w3,#0x1
71001dfe7c  mov x0,x22
71001dfe80  bl 0x71001d0f00
71001dfe84  ldr x0,[x19, #0x8]
71001dfe88  ldr x8,[x0]
71001dfe8c  ldr x8,[x8, #0x80]
71001dfe90  mov x1,x19
71001dfe94  blr x8
71001dfe98  ldr x8,[x21]
71001dfe9c  ldr x8,[x8, #0x20]
71001dfea0  mov x0,x21
71001dfea4  blr x8
71001dfea8  ldp x29,x30,[sp, #0x90]
71001dfeac  ldr x25,[sp, #0x50]
71001dfeb0  ldp x20,x19,[sp, #0x80]
71001dfeb4  ldp x22,x21,[sp, #0x70]
71001dfeb8  ldp x24,x23,[sp, #0x60]
71001dfebc  add sp,sp,#0xa0
71001dfec0  ret
71001dfec4  adrp x0,0x71042c4000
71001dfec8  add x0,x0,#0x35f
71001dfecc  mov w1,#0x47
71001dfed0  orr w2,wzr,#0xe0000003
71001dfed4  mov w3,wzr
71001dfed8  bl 0x71001b1300
