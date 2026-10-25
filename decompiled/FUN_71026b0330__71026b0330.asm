// addr:      71026b0330
// offset:    0x26b0330
// name:      FUN_71026b0330
// mangled:   
// size:      60

71026b0330  str x19,[sp, #-0x20]!
71026b0334  stp x29,x30,[sp, #0x10]
71026b0338  add x29,sp,#0x10
71026b033c  adrp x8,0x71050cd000
71026b0340  add x8,x8,#0xb80
71026b0344  mov x19,x0
71026b0348  str x8,[x0]
71026b034c  ldr x0,[x0, #0x8]
71026b0350  str xzr,[x19, #0x8]
71026b0354  cbz x0,0x71026b035c
71026b0358  bl 0x710392eb40
71026b035c  ldp x29,x30,[sp, #0x10]
71026b0360  mov x0,x19
71026b0364  ldr x19,[sp], #0x20
71026b0368  b 0x710392eb40
