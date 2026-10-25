// addr:      71001fba90
// offset:    0x1fba90
// name:      FUN_71001fba90
// mangled:   
// size:      268

71001fba90  str x23,[sp, #-0x40]!
71001fba94  stp x22,x21,[sp, #0x10]
71001fba98  stp x20,x19,[sp, #0x20]
71001fba9c  stp x29,x30,[sp, #0x30]
71001fbaa0  add x29,sp,#0x30
71001fbaa4  adrp x8,0x71052a4000
71001fbaa8  ldr x8,[x8, #0xda8]
71001fbaac  adrp x23,0x71052a4000
71001fbab0  ldrb w8,[x8]
71001fbab4  ldr x23,[x23, #0xdb0]
71001fbab8  mov w20,w2
71001fbabc  mov w21,w1
71001fbac0  mov x19,x0
71001fbac4  add x22,x23,#0x28
71001fbac8  cbz w8,0x71001fbb04
71001fbacc  adrp x8,0x71052a4000
71001fbad0  ldr x8,[x8, #0xdb8]
71001fbad4  ldr x0,[x8]
71001fbad8  bl 0x7101717960
71001fbadc  ldr w8,[x0]
71001fbae0  cbz w8,0x71001fbb04
71001fbae4  ldr x10,[x23, #0xa0]
71001fbae8  ldp x9,x10,[x10]
71001fbaec  sub x10,x10,x9
71001fbaf0  asr x10,x10,#0x3
71001fbaf4  cmp x10,x8
71001fbaf8  b.ls 0x71001fbb1c
71001fbafc  ldr x8,[x9, x8, LSL #0x3]
71001fbb00  add x22,x8,#0x20
71001fbb04  ldr x8,[x22]
71001fbb08  cbz x8,0x71001fbb34
71001fbb0c  ldr x8,[x8, #0x10]
71001fbb10  cbz x8,0x71001fbb34
71001fbb14  ldr x22,[x8, #0x10]
71001fbb18  b 0x71001fbb38
71001fbb1c  adrp x0,0x71042c4000
71001fbb20  add x0,x0,#0x35f
71001fbb24  mov w1,#0x47
71001fbb28  orr w2,wzr,#0xe0000003
71001fbb2c  mov w3,wzr
71001fbb30  bl 0x71001b1300
71001fbb34  mov x22,xzr
71001fbb38  ldr x8,[x22, #0x78]!
71001fbb3c  ldr x8,[x8, #0x10]
71001fbb40  mov x0,x22
71001fbb44  blr x8
71001fbb48  add x1,sp,#0x8
71001fbb4c  mov x0,x19
71001fbb50  str w21,[sp, #0x8]
71001fbb54  strh w20,[sp, #0xc]
71001fbb58  bl 0x71001fa660
71001fbb5c  cbz x0,0x71001fbb70
71001fbb60  ldr w8,[x0, #0xc0]
71001fbb64  cmp w8,#0x7
71001fbb68  csinc w19,w8,wzr,cc
71001fbb6c  b 0x71001fbb74
71001fbb70  mov w19,#0x1
71001fbb74  ldr x8,[x22]
71001fbb78  ldr x8,[x8, #0x20]
71001fbb7c  mov x0,x22
71001fbb80  blr x8
71001fbb84  mov w0,w19
71001fbb88  ldp x29,x30,[sp, #0x30]
71001fbb8c  ldp x20,x19,[sp, #0x20]
71001fbb90  ldp x22,x21,[sp, #0x10]
71001fbb94  ldr x23,[sp], #0x40
71001fbb98  ret
