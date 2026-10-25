// addr:      71026aeba0
// offset:    0x26aeba0
// name:      FUN_71026aeba0
// mangled:   
// size:      68

71026aeba0  str x19,[sp, #-0x20]!
71026aeba4  stp x29,x30,[sp, #0x10]
71026aeba8  add x29,sp,#0x10
71026aebac  adrp x8,0x71050cd000
71026aebb0  add x8,x8,#0x9e0
71026aebb4  mov x19,x0
71026aebb8  str x8,[x0]
71026aebbc  ldr x0,[x0, #0xa0]
71026aebc0  str xzr,[x19, #0xa0]
71026aebc4  cbz x0,0x71026aebd4
71026aebc8  ldr x8,[x0]
71026aebcc  ldr x8,[x8, #0x8]
71026aebd0  blr x8
71026aebd4  str xzr,[x19, #0x30]
71026aebd8  ldp x29,x30,[sp, #0x10]
71026aebdc  ldr x19,[sp], #0x20
71026aebe0  ret
