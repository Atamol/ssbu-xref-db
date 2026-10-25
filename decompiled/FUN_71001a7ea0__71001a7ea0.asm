// addr:      71001a7ea0
// offset:    0x1a7ea0
// name:      FUN_71001a7ea0
// mangled:   
// size:      56

71001a7ea0  ldr w9,[x0, #0x100]
71001a7ea4  cmp w9,#0x1
71001a7ea8  b.ne 0x71001a7eb4
71001a7eac  mov w0,#0x5
71001a7eb0  ret
71001a7eb4  adrp x9,0x71052a6000
71001a7eb8  ldr x9,[x9, #0x7c8]
71001a7ebc  mov x8,x0
71001a7ec0  mov x0,xzr
71001a7ec4  stp x9,xzr,[x8, #0x30]
71001a7ec8  adrp x9,0x7104307000
71001a7ecc  add x9,x9,#0x9b5
71001a7ed0  str x9,[x8, #0x40]
71001a7ed4  ret
