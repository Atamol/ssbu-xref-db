// addr:      71026b3d70
// offset:    0x26b3d70
// name:      FUN_71026b3d70
// mangled:   
// size:      156

71026b3d70  stp x22,x21,[sp, #-0x30]!
71026b3d74  stp x20,x19,[sp, #0x10]
71026b3d78  stp x29,x30,[sp, #0x20]
71026b3d7c  add x29,sp,#0x20
71026b3d80  adrp x8,0x71050cd000
71026b3d84  add x8,x8,#0xf00
71026b3d88  str x8,[x0]
71026b3d8c  mov x21,x0
71026b3d90  ldr x20,[x21, #0x18]!
71026b3d94  ldr x22,[x0, #0x20]
71026b3d98  mov x19,x0
71026b3d9c  cmp x22,x20
71026b3da0  b.eq 0x71026b3de8
71026b3da4  cmp x20,x22
71026b3da8  b.eq 0x71026b3dd0
71026b3dac  ldr x0,[x20]
71026b3db0  cbz x0,0x71026b3dc0
71026b3db4  ldr x8,[x0]
71026b3db8  ldr x8,[x8, #0x8]
71026b3dbc  blr x8
71026b3dc0  add x20,x20,#0x8
71026b3dc4  cmp x22,x20
71026b3dc8  b.ne 0x71026b3dac
71026b3dcc  ldr x20,[x21]
71026b3dd0  stp xzr,xzr,[x21, #0x8]
71026b3dd4  str xzr,[x21]
71026b3dd8  cbz x20,0x71026b3df8
71026b3ddc  mov x0,x20
71026b3de0  bl 0x710392eb40
71026b3de4  ldr x20,[x19, #0x18]
71026b3de8  cbz x20,0x71026b3df8
71026b3dec  mov x0,x20
71026b3df0  str x20,[x19, #0x20]
71026b3df4  bl 0x710392eb40
71026b3df8  mov x0,x19
71026b3dfc  ldp x29,x30,[sp, #0x20]
71026b3e00  ldp x20,x19,[sp, #0x10]
71026b3e04  ldp x22,x21,[sp], #0x30
71026b3e08  b 0x710392eb40
