// addr:      71000afcf0
// offset:    0xafcf0
// name:      FUN_71000afcf0
// mangled:   
// size:      156

71000afcf0  stp x22,x21,[sp, #-0x30]!
71000afcf4  stp x20,x19,[sp, #0x10]
71000afcf8  stp x29,x30,[sp, #0x20]
71000afcfc  add x29,sp,#0x20
71000afd00  mov x20,x0
71000afd04  adrp x0,0x7104f16000
71000afd08  add x0,x0,#0xd6a
71000afd0c  mov x19,x1
71000afd10  bl 0x71039c0530
71000afd14  ldr x21,[x20, #0xa8]
71000afd18  cbz x21,0x71000afd4c
71000afd1c  ldr x22,[x20, #0xb0]
71000afd20  cbz x22,0x71000afd4c
71000afd24  mov x0,x21
71000afd28  bl 0x71000338f0
71000afd2c  mov x0,x21
71000afd30  mov x1,x19
71000afd34  mov x2,x22
71000afd38  bl 0x7100033920
71000afd3c  adrp x1,0x71043df000
71000afd40  add x1,x1,#0x172
71000afd44  mov x0,x21
71000afd48  bl 0x710003b000
71000afd4c  ldrh w8,[x20, #0xdc]
71000afd50  cbz x8,0x71000afd7c
71000afd54  orr w9,wzr,#0x78
71000afd58  mul x22,x8,x9
71000afd5c  mov x21,xzr
71000afd60  ldr x8,[x20, #0x28]
71000afd64  add x0,x8,x21
71000afd68  mov x1,x19
71000afd6c  bl 0x71000afeb0
71000afd70  add x21,x21,#0x78
71000afd74  cmp x22,x21
71000afd78  b.ne 0x71000afd60
71000afd7c  ldp x29,x30,[sp, #0x20]
71000afd80  ldp x20,x19,[sp, #0x10]
71000afd84  ldp x22,x21,[sp], #0x30
71000afd88  ret
