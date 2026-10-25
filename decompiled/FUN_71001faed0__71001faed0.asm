// addr:      71001faed0
// offset:    0x1faed0
// name:      FUN_71001faed0
// mangled:   
// size:      280

71001faed0  sub sp,sp,#0x50
71001faed4  stp x24,x23,[sp, #0x10]
71001faed8  stp x22,x21,[sp, #0x20]
71001faedc  stp x20,x19,[sp, #0x30]
71001faee0  stp x29,x30,[sp, #0x40]
71001faee4  add x29,sp,#0x40
71001faee8  adrp x8,0x71052a4000
71001faeec  ldr x8,[x8, #0xda8]
71001faef0  adrp x24,0x71052a4000
71001faef4  ldrb w8,[x8]
71001faef8  ldr x24,[x24, #0xdb0]
71001faefc  mov x19,x3
71001faf00  mov w21,w2
71001faf04  mov w22,w1
71001faf08  mov x20,x0
71001faf0c  add x23,x24,#0x28
71001faf10  cbz w8,0x71001faf4c
71001faf14  adrp x8,0x71052a4000
71001faf18  ldr x8,[x8, #0xdb8]
71001faf1c  ldr x0,[x8]
71001faf20  bl 0x7101717960
71001faf24  ldr w8,[x0]
71001faf28  cbz w8,0x71001faf4c
71001faf2c  ldr x10,[x24, #0xa0]
71001faf30  ldp x9,x10,[x10]
71001faf34  sub x10,x10,x9
71001faf38  asr x10,x10,#0x3
71001faf3c  cmp x10,x8
71001faf40  b.ls 0x71001faf64
71001faf44  ldr x8,[x9, x8, LSL #0x3]
71001faf48  add x23,x8,#0x20
71001faf4c  ldr x8,[x23]
71001faf50  cbz x8,0x71001faf7c
71001faf54  ldr x8,[x8, #0x10]
71001faf58  cbz x8,0x71001faf7c
71001faf5c  ldr x23,[x8, #0x10]
71001faf60  b 0x71001faf80
71001faf64  adrp x0,0x71042c4000
71001faf68  add x0,x0,#0x35f
71001faf6c  mov w1,#0x47
71001faf70  orr w2,wzr,#0xe0000003
71001faf74  mov w3,wzr
71001faf78  bl 0x71001b1300
71001faf7c  mov x23,xzr
71001faf80  ldr x8,[x23, #0x78]!
71001faf84  ldr x8,[x8, #0x10]
71001faf88  mov x0,x23
71001faf8c  blr x8
71001faf90  add x1,sp,#0x8
71001faf94  mov x0,x20
71001faf98  str w22,[sp, #0x8]
71001faf9c  strh w21,[sp, #0xc]
71001fafa0  bl 0x71001fa660
71001fafa4  cbz x0,0x71001fafb8
71001fafa8  mov x1,x19
71001fafac  bl 0x71001c3f10
71001fafb0  mov w19,#0x1
71001fafb4  b 0x71001fafbc
71001fafb8  mov w19,wzr
71001fafbc  ldr x8,[x23]
71001fafc0  ldr x8,[x8, #0x20]
71001fafc4  mov x0,x23
71001fafc8  blr x8
71001fafcc  mov w0,w19
71001fafd0  ldp x29,x30,[sp, #0x40]
71001fafd4  ldp x20,x19,[sp, #0x30]
71001fafd8  ldp x22,x21,[sp, #0x20]
71001fafdc  ldp x24,x23,[sp, #0x10]
71001fafe0  add sp,sp,#0x50
71001fafe4  ret
