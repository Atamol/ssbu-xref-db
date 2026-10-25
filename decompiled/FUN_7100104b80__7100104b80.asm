// addr:      7100104b80
// offset:    0x104b80
// name:      FUN_7100104b80
// mangled:   
// size:      68

7100104b80  sub sp,sp,#0x30
7100104b84  stp x29,x30,[sp, #0x20]
7100104b88  add x29,sp,#0x20
7100104b8c  adrp x8,0x71052a4000
7100104b90  ldr x8,[x8, #0xcc8]
7100104b94  adrp x9,0x71052a5000
7100104b98  ldr x9,[x9, #0x448]
7100104b9c  add x8,x8,#0x10
7100104ba0  mov x1,sp
7100104ba4  stp x8,x9,[sp]
7100104ba8  adrp x8,0x71043ce000
7100104bac  add x8,x8,#0x67e
7100104bb0  stp xzr,x8,[sp, #0x10]
7100104bb4  bl 0x71001049c0
7100104bb8  ldp x29,x30,[sp, #0x20]
7100104bbc  add sp,sp,#0x30
7100104bc0  ret
