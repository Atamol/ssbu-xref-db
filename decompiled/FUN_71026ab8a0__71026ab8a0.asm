// addr:      71026ab8a0
// offset:    0x26ab8a0
// name:      FUN_71026ab8a0
// mangled:   
// size:      60

71026ab8a0  str x19,[sp, #-0x20]!
71026ab8a4  stp x29,x30,[sp, #0x10]
71026ab8a8  add x29,sp,#0x10
71026ab8ac  adrp x8,0x71050cd000
71026ab8b0  add x8,x8,#0x48
71026ab8b4  mov x19,x0
71026ab8b8  str x8,[x0]
71026ab8bc  ldr x0,[x0, #0x8]
71026ab8c0  str xzr,[x19, #0x8]
71026ab8c4  cbz x0,0x71026ab8cc
71026ab8c8  bl 0x710392eb40
71026ab8cc  ldp x29,x30,[sp, #0x10]
71026ab8d0  mov x0,x19
71026ab8d4  ldr x19,[sp], #0x20
71026ab8d8  b 0x710392eb40
