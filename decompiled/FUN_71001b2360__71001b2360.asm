// addr:      71001b2360
// offset:    0x1b2360
// name:      FUN_71001b2360
// mangled:   
// size:      160

71001b2360  stp x20,x19,[sp, #-0x20]!
71001b2364  stp x29,x30,[sp, #0x10]
71001b2368  add x29,sp,#0x10
71001b236c  adrp x8,0x71052a6000
71001b2370  ldr x8,[x8, #0x8b0]
71001b2374  add x9,x8,#0x10
71001b2378  mov x8,x0
71001b237c  mov x19,x0
71001b2380  adrp x0,0x7104329000
71001b2384  add x0,x0,#0x4f9
71001b2388  mov w20,w2
71001b238c  str x9,[x8], #0x8
71001b2390  bl 0x71001b2400
71001b2394  adrp x8,0x71052a6000
71001b2398  ldr x8,[x8, #0x818]
71001b239c  ldr x8,[x8]
71001b23a0  cbz x8,0x71001b23b0
71001b23a4  mov w0,#0x28
71001b23a8  blr x8
71001b23ac  b 0x71001b23b8
71001b23b0  mov w0,#0x28
71001b23b4  bl 0x710353c430
71001b23b8  adrp x8,0x71052a6000
71001b23bc  ldr x8,[x8, #0x820]
71001b23c0  ldr x8,[x8]
71001b23c4  str x8,[x0]
71001b23c8  mov x8,x0
71001b23cc  str xzr,[x8, #0x10]!
71001b23d0  str xzr,[x0, #0x18]
71001b23d4  strb wzr,[x0, #0x20]
71001b23d8  str w20,[x19, #0x40]
71001b23dc  stp x8,xzr,[x19, #0x30]
71001b23e0  mov w8,#0x80000000
71001b23e4  str xzr,[x19, #0x48]
71001b23e8  strb wzr,[x19, #0x50]
71001b23ec  strb wzr,[x19, #0x52]
71001b23f0  str w8,[x19, #0x54]
71001b23f4  ldp x29,x30,[sp, #0x10]
71001b23f8  ldp x20,x19,[sp], #0x20
71001b23fc  ret
