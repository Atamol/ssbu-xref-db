// addr:      7100104b30
// offset:    0x104b30
// name:      FUN_7100104b30
// mangled:   
// size:      68

7100104b30  sub sp,sp,#0x30
7100104b34  stp x29,x30,[sp, #0x20]
7100104b38  add x29,sp,#0x20
7100104b3c  adrp x8,0x71052a4000
7100104b40  ldr x8,[x8, #0xcc8]
7100104b44  adrp x9,0x71052a5000
7100104b48  ldr x9,[x9, #0x468]
7100104b4c  add x8,x8,#0x10
7100104b50  mov x1,sp
7100104b54  stp x8,x9,[sp]
7100104b58  adrp x8,0x7104339000
7100104b5c  add x8,x8,#0x463
7100104b60  stp xzr,x8,[sp, #0x10]
7100104b64  bl 0x71001049c0
7100104b68  ldp x29,x30,[sp, #0x20]
7100104b6c  add sp,sp,#0x30
7100104b70  ret
