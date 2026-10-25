// addr:      71001ece50
// offset:    0x1ece50
// name:      FUN_71001ece50
// mangled:   
// size:      356

71001ece50  sub sp,sp,#0x40
71001ece54  stp x22,x21,[sp, #0x10]
71001ece58  stp x20,x19,[sp, #0x20]
71001ece5c  stp x29,x30,[sp, #0x30]
71001ece60  add x29,sp,#0x30
71001ece64  adrp x8,0x71052a4000
71001ece68  ldr x8,[x8, #0xda8]
71001ece6c  adrp x22,0x71052a4000
71001ece70  ldrb w8,[x8]
71001ece74  ldr x22,[x22, #0xdb0]
71001ece78  mov x20,x1
71001ece7c  mov x19,x0
71001ece80  add x21,x22,#0x28
71001ece84  cbz w8,0x71001ecec0
71001ece88  adrp x8,0x71052a4000
71001ece8c  ldr x8,[x8, #0xdb8]
71001ece90  ldr x0,[x8]
71001ece94  bl 0x7101717960
71001ece98  ldr w8,[x0]
71001ece9c  cbz w8,0x71001ecec0
71001ecea0  ldr x10,[x22, #0xa0]
71001ecea4  ldp x9,x10,[x10]
71001ecea8  sub x10,x10,x9
71001eceac  asr x10,x10,#0x3
71001eceb0  cmp x10,x8
71001eceb4  b.ls 0x71001eced8
71001eceb8  ldr x8,[x9, x8, LSL #0x3]
71001ecebc  add x21,x8,#0x20
71001ecec0  ldr x8,[x21]
71001ecec4  cbz x8,0x71001ecef0
71001ecec8  ldr x8,[x8, #0x10]
71001ececc  cbz x8,0x71001ecef0
71001eced0  ldr x21,[x8, #0x10]
71001eced4  b 0x71001ecef4
71001eced8  adrp x0,0x71042c4000
71001ecedc  add x0,x0,#0x35f
71001ecee0  mov w1,#0x47
71001ecee4  orr w2,wzr,#0xe0000003
71001ecee8  mov w3,wzr
71001eceec  bl 0x71001b1300
71001ecef0  mov x21,xzr
71001ecef4  ldr x8,[x21, #0x78]!
71001ecef8  ldr x8,[x8, #0x10]
71001ecefc  mov x0,x21
71001ecf00  blr x8
71001ecf04  ldr x8,[x19, #0x10]
71001ecf08  cbz x8,0x71001ecf14
71001ecf0c  mov w19,wzr
71001ecf10  b 0x71001ecf8c
71001ecf14  add x8,sp,#0x8
71001ecf18  str x20,[x19, #0x10]
71001ecf1c  bl 0x71001b12a0
71001ecf20  adrp x8,0x71052a7000
71001ecf24  ldr x8,[x8]
71001ecf28  ldrsw x8,[x8]
71001ecf2c  ldr x9,[sp, #0x8]
71001ecf30  add x9,x9,x8
71001ecf34  tst w8,#0x80000000
71001ecf38  csel x8,x9,x9,eq
71001ecf3c  mov w0,#0x58
71001ecf40  str x8,[x19, #0x90]
71001ecf44  bl 0x71001af850
71001ecf48  mov x20,x0
71001ecf4c  cbz x0,0x71001ecf84
71001ecf50  mov w1,#0x5
71001ecf54  mov x0,x20
71001ecf58  mov x2,xzr
71001ecf5c  bl 0x71001e1880
71001ecf60  adrp x8,0x71052a7000
71001ecf64  ldr x8,[x8, #0x10]
71001ecf68  str wzr,[x20, #0x48]
71001ecf6c  str x19,[x20, #0x50]
71001ecf70  add x8,x8,#0x10
71001ecf74  mov w1,#0x1
71001ecf78  mov x0,x20
71001ecf7c  str x8,[x20]
71001ecf80  bl 0x71001e1ba0
71001ecf84  str x20,[x19, #0x20]
71001ecf88  mov w19,#0x1
71001ecf8c  ldr x8,[x21]
71001ecf90  ldr x8,[x8, #0x20]
71001ecf94  mov x0,x21
71001ecf98  blr x8
71001ecf9c  mov w0,w19
71001ecfa0  ldp x29,x30,[sp, #0x30]
71001ecfa4  ldp x20,x19,[sp, #0x20]
71001ecfa8  ldp x22,x21,[sp, #0x10]
71001ecfac  add sp,sp,#0x40
71001ecfb0  ret
