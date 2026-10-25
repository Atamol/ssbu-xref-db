// addr:      71001226a0
// offset:    0x1226a0
// name:      FUN_71001226a0
// mangled:   
// size:      72

71001226a0  str x19,[sp, #-0x20]!
71001226a4  stp x29,x30,[sp, #0x10]
71001226a8  add x29,sp,#0x10
71001226ac  ldr x8,[x0]
71001226b0  ldr x8,[x8, #0x10]
71001226b4  mov w1,#0x1
71001226b8  mov x19,x0
71001226bc  blr x8
71001226c0  adrp x8,0x71052a4000
71001226c4  ldr x8,[x8, #0xfb0]
71001226c8  adrp x9,0x7104329000
71001226cc  add x9,x9,#0x36b
71001226d0  str x9,[x19, #0x40]
71001226d4  mov w0,#0x1
71001226d8  stp x8,xzr,[x19, #0x30]
71001226dc  ldp x29,x30,[sp, #0x10]
71001226e0  ldr x19,[sp], #0x20
71001226e4  ret
