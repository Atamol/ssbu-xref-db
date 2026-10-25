// addr:      7102eadc80
// offset:    0x2eadc80
// name:      FUN_7102eadc80
// mangled:   
// size:      236

7102eadc80  str x19,[sp, #-0x20]!
7102eadc84  stp x29,x30,[sp, #0x10]
7102eadc88  add x29,sp,#0x10
7102eadc8c  ldr w8,[x0, #0x100]
7102eadc90  sub w9,w8,#0x4
7102eadc94  mov x19,x0
7102eadc98  cmp w9,#0x2
7102eadc9c  b.cc 0x7102eadce0
7102eadca0  sub w8,w8,#0x1
7102eadca4  mov x0,x19
7102eadca8  cmp w8,#0x1
7102eadcac  b.hi 0x7102eadd00
7102eadcb0  mov w1,wzr
7102eadcb4  bl 0x7102eadd70
7102eadcb8  ldr x8,[x19, #0x240]
7102eadcbc  ldp x0,x1,[x8]
7102eadcc0  adrp x2,0x71043bc000
7102eadcc4  add x2,x2,#0xb6c
7102eadcc8  bl 0x71025f55b0
7102eadccc  ldr x8,[x19, #0x240]
7102eadcd0  ldp x0,x1,[x8]
7102eadcd4  adrp x2,0x71042a1000
7102eadcd8  add x2,x2,#0x676
7102eadcdc  b 0x7102eadd60
7102eadce0  mov w1,#0x1
7102eadce4  mov x0,x19
7102eadce8  bl 0x7102eadd70
7102eadcec  ldr x8,[x19, #0x240]
7102eadcf0  ldp x0,x1,[x8]
7102eadcf4  adrp x2,0x710436a000
7102eadcf8  add x2,x2,#0x9e7
7102eadcfc  b 0x7102eadd4c
7102eadd00  mov w1,wzr
7102eadd04  bl 0x7102eadd70
7102eadd08  mov w1,#0x1
7102eadd0c  mov x0,x19
7102eadd10  bl 0x7102eadd70
7102eadd14  ldr x8,[x19, #0x240]
7102eadd18  ldp x0,x1,[x8]
7102eadd1c  adrp x2,0x71043bc000
7102eadd20  add x2,x2,#0xb6c
7102eadd24  bl 0x71025f55b0
7102eadd28  ldr x8,[x19, #0x240]
7102eadd2c  ldp x0,x1,[x8]
7102eadd30  adrp x2,0x710436a000
7102eadd34  add x2,x2,#0x9e7
7102eadd38  bl 0x71025f55b0
7102eadd3c  ldr x8,[x19, #0x240]
7102eadd40  ldp x0,x1,[x8]
7102eadd44  adrp x2,0x71042a1000
7102eadd48  add x2,x2,#0x676
7102eadd4c  bl 0x71025f55b0
7102eadd50  ldr x8,[x19, #0x240]
7102eadd54  ldp x0,x1,[x8]
7102eadd58  adrp x2,0x7104441000
7102eadd5c  add x2,x2,#0xec7
7102eadd60  ldp x29,x30,[sp, #0x10]
7102eadd64  ldr x19,[sp], #0x20
7102eadd68  b 0x71025f55b0
