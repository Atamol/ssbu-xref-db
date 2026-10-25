// addr:      71000f09f0
// offset:    0xf09f0
// name:      FUN_71000f09f0
// mangled:   
// size:      240

71000f09f0  sub sp,sp,#0x70
71000f09f4  str x23,[sp, #0x30]
71000f09f8  stp x22,x21,[sp, #0x40]
71000f09fc  stp x20,x19,[sp, #0x50]
71000f0a00  stp x29,x30,[sp, #0x60]
71000f0a04  add x29,sp,#0x60
71000f0a08  adrp x8,0x71052a4000
71000f0a0c  ldr x8,[x8, #0xd88]
71000f0a10  mov x19,x0
71000f0a14  ldr x0,[x8]
71000f0a18  add x20,x19,#0x80
71000f0a1c  mov x1,x20
71000f0a20  bl 0x71000c5ac0
71000f0a24  tbz w0,#0x0,0x71000f0aac
71000f0a28  ldr x8,[x19, #0x70]
71000f0a2c  ldrb w8,[x8, #0x38]
71000f0a30  cmp w8,#0xfe
71000f0a34  b.ne 0x71000f0aac
71000f0a38  adrp x22,0x71052a4000
71000f0a3c  ldr x22,[x22, #0xdc8]
71000f0a40  ldr x0,[x22]
71000f0a44  bl 0x7100161fb0
71000f0a48  mov x21,x0
71000f0a4c  add x8,sp,#0x8
71000f0a50  mov x0,x20
71000f0a54  add x23,sp,#0x8
71000f0a58  bl 0x7100160230
71000f0a5c  add x0,x21,#0x108
71000f0a60  add x1,sp,#0x8
71000f0a64  bl 0x71000beb40
71000f0a68  adrp x8,0x71052a4000
71000f0a6c  ldr x8,[x8, #0xd20]
71000f0a70  add x8,x8,#0x10
71000f0a74  add x0,x23,#0x8
71000f0a78  str x8,[sp, #0x8]
71000f0a7c  bl 0x71000b1cf0
71000f0a80  ldr x0,[x22]
71000f0a84  bl 0x7100161fb0
71000f0a88  mov w9,#0x20000
71000f0a8c  str wzr,[sp, #0x10]
71000f0a90  add x1,sp,#0x8
71000f0a94  str x9,[sp, #0x8]
71000f0a98  ldr x9,[x0, #0x108]
71000f0a9c  ldr x9,[x9, #0x28]
71000f0aa0  add x8,x0,#0x108
71000f0aa4  mov x0,x8
71000f0aa8  blr x9
71000f0aac  adrp x8,0x71052a5000
71000f0ab0  ldr x8,[x8, #0x158]
71000f0ab4  adrp x9,0x71042d5000
71000f0ab8  add x9,x9,#0x49e
71000f0abc  str x9,[x19, #0x40]
71000f0ac0  mov x0,xzr
71000f0ac4  stp x8,xzr,[x19, #0x30]
71000f0ac8  ldr x23,[sp, #0x30]
71000f0acc  ldp x29,x30,[sp, #0x60]
71000f0ad0  ldp x20,x19,[sp, #0x50]
71000f0ad4  ldp x22,x21,[sp, #0x40]
71000f0ad8  add sp,sp,#0x70
71000f0adc  ret
