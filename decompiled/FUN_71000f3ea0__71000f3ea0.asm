// addr:      71000f3ea0
// offset:    0xf3ea0
// name:      FUN_71000f3ea0
// mangled:   
// size:      152

71000f3ea0  stp x22,x21,[sp, #-0x30]!
71000f3ea4  stp x20,x19,[sp, #0x10]
71000f3ea8  stp x29,x30,[sp, #0x20]
71000f3eac  add x29,sp,#0x20
71000f3eb0  adrp x8,0x71052a5000
71000f3eb4  ldr x8,[x8, #0x80]
71000f3eb8  ldr x20,[x8]
71000f3ebc  ldrb w8,[x20, #0x162]
71000f3ec0  add x22,x20,#0x168
71000f3ec4  mov x19,x0
71000f3ec8  ldr x0,[x22, x8, LSL #0x3]
71000f3ecc  ldr x8,[x0]
71000f3ed0  ldr x8,[x8, #0x120]
71000f3ed4  blr x8
71000f3ed8  ldrb w8,[x20, #0x162]
71000f3edc  mov x21,x0
71000f3ee0  ldr x0,[x22, x8, LSL #0x3]
71000f3ee4  ldr x8,[x0]
71000f3ee8  ldr x8,[x8, #0xf0]
71000f3eec  blr x8
71000f3ef0  mov x1,x0
71000f3ef4  mov x0,x21
71000f3ef8  bl 0x7100112c10
71000f3efc  mov x0,x20
71000f3f00  bl 0x7100146c10
71000f3f04  mov w1,w0
71000f3f08  mov x0,x21
71000f3f0c  bl 0x71001129d0
71000f3f10  adrp x8,0x71052a5000
71000f3f14  ldr x8,[x8, #0x208]
71000f3f18  stp x8,xzr,[x19, #0x30]
71000f3f1c  adrp x8,0x7104329000
71000f3f20  add x8,x8,#0x25e
71000f3f24  str x8,[x19, #0x40]
71000f3f28  ldp x29,x30,[sp, #0x20]
71000f3f2c  ldp x20,x19,[sp, #0x10]
71000f3f30  ldp x22,x21,[sp], #0x30
71000f3f34  ret
