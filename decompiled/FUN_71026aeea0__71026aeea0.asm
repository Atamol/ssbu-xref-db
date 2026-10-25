// addr:      71026aeea0
// offset:    0x26aeea0
// name:      FUN_71026aeea0
// mangled:   
// size:      76

71026aeea0  str x19,[sp, #-0x20]!
71026aeea4  stp x29,x30,[sp, #0x10]
71026aeea8  add x29,sp,#0x10
71026aeeac  ldr x19,[x0, #0x8]
71026aeeb0  adrp x8,0x71050cd000
71026aeeb4  add x8,x8,#0xa00
71026aeeb8  stp x8,xzr,[x0]
71026aeebc  cbz x19,0x71026aeee0
71026aeec0  ldr x0,[x19, #0x18]
71026aeec4  cbz x0,0x71026aeed0
71026aeec8  str x0,[x19, #0x20]
71026aeecc  bl 0x710392eb40
71026aeed0  ldp x29,x30,[sp, #0x10]
71026aeed4  mov x0,x19
71026aeed8  ldr x19,[sp], #0x20
71026aeedc  b 0x710392eb40
71026aeee0  ldp x29,x30,[sp, #0x10]
71026aeee4  ldr x19,[sp], #0x20
71026aeee8  ret
