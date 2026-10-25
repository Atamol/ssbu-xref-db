// addr:      71026b3cc0
// offset:    0x26b3cc0
// name:      FUN_71026b3cc0
// mangled:   
// size:      164

71026b3cc0  stp x22,x21,[sp, #-0x30]!
71026b3cc4  stp x20,x19,[sp, #0x10]
71026b3cc8  stp x29,x30,[sp, #0x20]
71026b3ccc  add x29,sp,#0x20
71026b3cd0  adrp x8,0x71050cd000
71026b3cd4  add x8,x8,#0xf00
71026b3cd8  str x8,[x0]
71026b3cdc  mov x21,x0
71026b3ce0  ldr x20,[x21, #0x18]!
71026b3ce4  ldr x22,[x0, #0x20]
71026b3ce8  mov x19,x0
71026b3cec  cmp x22,x20
71026b3cf0  b.eq 0x71026b3d38
71026b3cf4  cmp x20,x22
71026b3cf8  b.eq 0x71026b3d20
71026b3cfc  ldr x0,[x20]
71026b3d00  cbz x0,0x71026b3d10
71026b3d04  ldr x8,[x0]
71026b3d08  ldr x8,[x8, #0x8]
71026b3d0c  blr x8
71026b3d10  add x20,x20,#0x8
71026b3d14  cmp x22,x20
71026b3d18  b.ne 0x71026b3cfc
71026b3d1c  ldr x20,[x21]
71026b3d20  stp xzr,xzr,[x21, #0x8]
71026b3d24  str xzr,[x21]
71026b3d28  cbz x20,0x71026b3d54
71026b3d2c  mov x0,x20
71026b3d30  bl 0x710392eb40
71026b3d34  ldr x20,[x19, #0x18]
71026b3d38  cbz x20,0x71026b3d54
71026b3d3c  str x20,[x19, #0x20]
71026b3d40  mov x0,x20
71026b3d44  ldp x29,x30,[sp, #0x20]
71026b3d48  ldp x20,x19,[sp, #0x10]
71026b3d4c  ldp x22,x21,[sp], #0x30
71026b3d50  b 0x710392eb40
71026b3d54  ldp x29,x30,[sp, #0x20]
71026b3d58  ldp x20,x19,[sp, #0x10]
71026b3d5c  ldp x22,x21,[sp], #0x30
71026b3d60  ret
