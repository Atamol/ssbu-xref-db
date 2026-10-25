// addr:      71000acbc0
// offset:    0xacbc0
// name:      FUN_71000acbc0
// mangled:   
// size:      248

71000acbc0  stp x22,x21,[sp, #-0x30]!
71000acbc4  stp x20,x19,[sp, #0x10]
71000acbc8  stp x29,x30,[sp, #0x20]
71000acbcc  add x29,sp,#0x20
71000acbd0  adrp x22,0x71052a4000
71000acbd4  ldr x22,[x22, #0xb90]
71000acbd8  ldr x8,[x22]
71000acbdc  mov w20,w2
71000acbe0  mov x19,x1
71000acbe4  mov x21,x0
71000acbe8  cbz x8,0x71000acbf8
71000acbec  adrp x0,0x710425e000
71000acbf0  add x0,x0,#0x520
71000acbf4  bl 0x7100093530
71000acbf8  ldr x8,[x21]
71000acbfc  ldr x8,[x8, #0x10]
71000acc00  orr w1,wzr,#0x30
71000acc04  mov w2,#0x80
71000acc08  mov x0,x21
71000acc0c  blr x8
71000acc10  cbz x0,0x71000acc9c
71000acc14  adrp x8,0x71052a4000
71000acc18  ldr x8,[x8, #0xb98]
71000acc1c  str w20,[x0, #0x20]
71000acc20  str xzr,[x0, #0x28]
71000acc24  adrp x10,0x71052a4000
71000acc28  ldr x10,[x10, #0xba0]
71000acc2c  orr x9,xzr,#0x3f8000003f800000
71000acc30  stp x9,x19,[x0, #0x10]
71000acc34  add x8,x8,#0x10
71000acc38  stp x8,x9,[x0]
71000acc3c  str xzr,[x19, #0xeb8]
71000acc40  str x10,[x19, #0xec0]
71000acc44  adrp x8,0x71052a4000
71000acc48  adrp x9,0x71052a4000
71000acc4c  str xzr,[x19, #0xed0]
71000acc50  ldr x8,[x8, #0xba8]
71000acc54  str xzr,[x19, #0xec8]
71000acc58  ldr x9,[x9, #0xbb0]
71000acc5c  str x8,[x19, #0xed8]
71000acc60  adrp x8,0x71052a4000
71000acc64  ldr x8,[x8, #0xbb8]
71000acc68  str x9,[x19, #0xee0]
71000acc6c  str x8,[x19, #0xee8]
71000acc70  str xzr,[x19, #0xf00]
71000acc74  str xzr,[x19, #0xef8]
71000acc78  adrp x8,0x71052a4000
71000acc7c  ldr x8,[x8, #0xb00]
71000acc80  str xzr,[x19, #0xef0]
71000acc84  str x8,[x19, #0xf08]
71000acc88  str x0,[x22]
71000acc8c  ldp x29,x30,[sp, #0x20]
71000acc90  ldp x20,x19,[sp, #0x10]
71000acc94  ldp x22,x21,[sp], #0x30
71000acc98  ret
71000acc9c  ldp x29,x30,[sp, #0x20]
71000acca0  adrp x0,0x710437b000
71000acca4  add x0,x0,#0x8d1
71000acca8  ldp x20,x19,[sp, #0x10]
71000accac  orr w1,wzr,#0x30
71000accb0  ldp x22,x21,[sp], #0x30
71000accb4  b 0x7100093660
