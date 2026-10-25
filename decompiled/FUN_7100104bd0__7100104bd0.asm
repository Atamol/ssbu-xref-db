// addr:      7100104bd0
// offset:    0x104bd0
// name:      FUN_7100104bd0
// mangled:   
// size:      68

7100104bd0  sub sp,sp,#0x30
7100104bd4  stp x29,x30,[sp, #0x20]
7100104bd8  add x29,sp,#0x20
7100104bdc  adrp x8,0x71052a4000
7100104be0  ldr x8,[x8, #0xcc8]
7100104be4  adrp x9,0x71052a5000
7100104be8  ldr x9,[x9, #0x448]
7100104bec  add x8,x8,#0x10
7100104bf0  mov x1,sp
7100104bf4  stp x8,x9,[sp]
7100104bf8  adrp x8,0x71043ce000
7100104bfc  add x8,x8,#0x67e
7100104c00  stp xzr,x8,[sp, #0x10]
7100104c04  bl 0x71001049c0
7100104c08  ldp x29,x30,[sp, #0x20]
7100104c0c  add sp,sp,#0x30
7100104c10  ret
