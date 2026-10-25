// addr:      7100111a50
// offset:    0x111a50
// name:      FUN_7100111a50
// mangled:   
// size:      80

7100111a50  str x19,[sp, #-0x20]!
7100111a54  stp x29,x30,[sp, #0x10]
7100111a58  add x29,sp,#0x10
7100111a5c  mov x19,x0
7100111a60  bl 0x71000bb680
7100111a64  ldr x8,[x19, #0x58]
7100111a68  ldr x9,[x0]
7100111a6c  mov w11,#0x7d0
7100111a70  madd x8,x9,x11,x8
7100111a74  adrp x10,0x71052a5000
7100111a78  ldr x10,[x10, #0x7b8]
7100111a7c  stp x10,xzr,[x19, #0x30]
7100111a80  str x8,[x19, #0x58]
7100111a84  adrp x8,0x7104442000
7100111a88  add x8,x8,#0x9ba
7100111a8c  str x8,[x19, #0x40]
7100111a90  ldp x29,x30,[sp, #0x10]
7100111a94  mov w0,#0x1
7100111a98  ldr x19,[sp], #0x20
7100111a9c  ret
