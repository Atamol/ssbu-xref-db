// addr:      71000b6c50
// offset:    0xb6c50
// name:      FUN_71000b6c50
// mangled:   
// size:      276

71000b6c50  sub sp,sp,#0x50
71000b6c54  stp x22,x21,[sp, #0x20]
71000b6c58  stp x20,x19,[sp, #0x30]
71000b6c5c  stp x29,x30,[sp, #0x40]
71000b6c60  add x29,sp,#0x40
71000b6c64  adrp x8,0x71052a4000
71000b6c68  ldr x8,[x8, #0xca0]
71000b6c6c  adrp x9,0x71052a4000
71000b6c70  ldr x9,[x9, #0xbe0]
71000b6c74  adrp x10,0x71052a4000
71000b6c78  ldr x10,[x10, #0xca8]
71000b6c7c  add x8,x8,#0x10
71000b6c80  add x9,x9,#0x10
71000b6c84  mov x21,x2
71000b6c88  stp x8,x0,[x0]
71000b6c8c  adrp x8,0x7104349000
71000b6c90  add x8,x8,#0x50a
71000b6c94  mov w22,w1
71000b6c98  mov x19,x0
71000b6c9c  stp x10,xzr,[x0, #0x10]
71000b6ca0  add x20,x0,#0x20
71000b6ca4  stp x9,x8,[sp, #0x10]
71000b6ca8  bl 0x71000b1b90
71000b6cac  mov x3,x0
71000b6cb0  mov w8,#0x20
71000b6cb4  mov w7,#0x5000
71000b6cb8  add x1,sp,#0x10
71000b6cbc  mov w5,#0x1
71000b6cc0  str w8,[sp]
71000b6cc4  orr w6,wzr,#0x7fffffff
71000b6cc8  mov x0,x20
71000b6ccc  mov x2,x19
71000b6cd0  mov w4,w22
71000b6cd4  bl 0x710013b4d0
71000b6cd8  add x0,x19,#0x120
71000b6cdc  mov w1,wzr
71000b6ce0  str x21,[x19, #0x118]
71000b6ce4  bl 0x710013ba50
71000b6ce8  add x0,x19,#0x170
71000b6cec  strb wzr,[x19, #0x168]
71000b6cf0  stp xzr,xzr,[x19, #0x170]
71000b6cf4  bl 0x71000b7080
71000b6cf8  mov w8,#0xffffffff
71000b6cfc  str w8,[x19, #0x184]
71000b6d00  adrp x8,0x71052a4000
71000b6d04  ldr x8,[x8, #0xcb0]
71000b6d08  ldr w0,[x8]
71000b6d0c  bl 0x71039c0ac0
71000b6d10  cbz x0,0x71000b6d1c
71000b6d14  sub w0,w0,#0x1
71000b6d18  b 0x71000b6d20
71000b6d1c  bl 0x71039c0ad0
71000b6d20  str w0,[sp, #0x10]
71000b6d24  ldr w8,[sp, #0x10]
71000b6d28  mov w9,#0x1
71000b6d2c  lsl w8,w9,w8
71000b6d30  add x1,sp,#0x8
71000b6d34  mov x0,x20
71000b6d38  str w8,[sp, #0x8]
71000b6d3c  bl 0x710013c2e0
71000b6d40  mov x0,x20
71000b6d44  bl 0x710013c200
71000b6d48  orr w8,wzr,#0x18
71000b6d4c  str w8,[x19, #0x184]
71000b6d50  ldp x29,x30,[sp, #0x40]
71000b6d54  ldp x20,x19,[sp, #0x30]
71000b6d58  ldp x22,x21,[sp, #0x20]
71000b6d5c  add sp,sp,#0x50
71000b6d60  ret
