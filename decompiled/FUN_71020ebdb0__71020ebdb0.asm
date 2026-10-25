// addr:      71020ebdb0
// offset:    0x20ebdb0
// name:      FUN_71020ebdb0
// mangled:   
// size:      228

71020ebdb0  sub sp,sp,#0x40
71020ebdb4  str x19,[sp, #0x20]
71020ebdb8  stp x29,x30,[sp, #0x30]
71020ebdbc  add x29,sp,#0x30
71020ebdc0  ldr x8,[x0, #0x18]
71020ebdc4  ldr x8,[x8, #0x18]
71020ebdc8  mov x19,x0
71020ebdcc  cmp x8,#0x1
71020ebdd0  b.lt 0x71020ebddc
71020ebdd4  mov x0,x19
71020ebdd8  bl 0x71038fec40
71020ebddc  mov x0,x19
71020ebde0  bl 0x710391e050
71020ebde4  ldr x8,[x19, #0x10]
71020ebde8  mov w9,#0x45
71020ebdec  str w9,[x8, #0x8]
71020ebdf0  str x0,[x8]
71020ebdf4  ldr x8,[x19, #0x10]
71020ebdf8  mov x1,x0
71020ebdfc  mov w3,#0x1
71020ebe00  mov x0,x19
71020ebe04  mov w2,wzr
71020ebe08  add x8,x8,#0x10
71020ebe0c  str x8,[x19, #0x10]
71020ebe10  bl 0x710391d4c0
71020ebe14  mov x8,#0x1
71020ebe18  movk x8,#0x5000, LSL #48
71020ebe1c  str x8,[sp, #0x10]
71020ebe20  mov x8,#0x40
71020ebe24  movk x8,#0x5000, LSL #48
71020ebe28  str x8,[sp, #0x18]
71020ebe2c  adrp x8,0x71050b4000
71020ebe30  add x8,x8,#0xc38
71020ebe34  add x0,sp,#0x8
71020ebe38  mov w2,#0x1
71020ebe3c  mov x1,x19
71020ebe40  str x8,[sp, #0x8]
71020ebe44  bl 0x71020d4810
71020ebe48  ldr x8,[x19, #0x10]
71020ebe4c  adrp x9,0x71020eb000
71020ebe50  add x9,x9,#0xea0
71020ebe54  str x9,[x8]
71020ebe58  mov w9,#0x2
71020ebe5c  str w9,[x8, #0x8]
71020ebe60  ldr x8,[x19, #0x10]
71020ebe64  add x9,x8,#0x10
71020ebe68  sub x1,x8,#0x10
71020ebe6c  adrp x2,0x710430c000
71020ebe70  add x2,x2,#0x66a
71020ebe74  mov x0,x19
71020ebe78  str x9,[x19, #0x10]
71020ebe7c  bl 0x71038f5390
71020ebe80  ldp x29,x30,[sp, #0x30]
71020ebe84  ldr x19,[sp, #0x20]
71020ebe88  mov w0,#0x1
71020ebe8c  add sp,sp,#0x40
71020ebe90  ret
