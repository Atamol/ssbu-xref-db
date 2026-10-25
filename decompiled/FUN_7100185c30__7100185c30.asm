// addr:      7100185c30
// offset:    0x185c30
// name:      FUN_7100185c30
// mangled:   
// size:      112

7100185c30  sub sp,sp,#0x40
7100185c34  stp x20,x19,[sp, #0x20]
7100185c38  stp x29,x30,[sp, #0x30]
7100185c3c  add x29,sp,#0x30
7100185c40  mov x19,x8
7100185c44  str xzr,[x0, #0x38]
7100185c48  adrp x8,0x71052a6000
7100185c4c  ldr x8,[x8, #0x510]
7100185c50  str x8,[x0, #0x30]
7100185c54  adrp x8,0x7104432000
7100185c58  add x8,x8,#0x49b
7100185c5c  str x8,[x0, #0x40]
7100185c60  add x8,sp,#0x8
7100185c64  orr x20,x8,#0x4
7100185c68  mov x0,x20
7100185c6c  str wzr,[sp, #0x8]
7100185c70  bl 0x71039c0a80
7100185c74  add x1,sp,#0x18
7100185c78  mov x0,x20
7100185c7c  str wzr,[sp, #0x18]
7100185c80  bl 0x71039c0a90
7100185c84  add x1,sp,#0x8
7100185c88  mov x0,x19
7100185c8c  bl 0x71000bce50
7100185c90  ldp x29,x30,[sp, #0x30]
7100185c94  ldp x20,x19,[sp, #0x20]
7100185c98  add sp,sp,#0x40
7100185c9c  ret
