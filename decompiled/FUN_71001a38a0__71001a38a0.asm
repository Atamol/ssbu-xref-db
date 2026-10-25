// addr:      71001a38a0
// offset:    0x1a38a0
// name:      FUN_71001a38a0
// mangled:   
// size:      120

71001a38a0  str x19,[sp, #-0x20]!
71001a38a4  stp x29,x30,[sp, #0x10]
71001a38a8  add x29,sp,#0x10
71001a38ac  adrp x8,0x71052a4000
71001a38b0  ldr x8,[x8, #0xdf0]
71001a38b4  mov x19,x0
71001a38b8  ldr x0,[x8]
71001a38bc  bl 0x7100193580
71001a38c0  mov x1,x19
71001a38c4  bl 0x710019b540
71001a38c8  mov w8,#0xfd
71001a38cc  strb w8,[x19, #0xb8]
71001a38d0  ldr x8,[x19]
71001a38d4  stur xzr,[x19, #0x64]
71001a38d8  stur xzr,[x19, #0x6c]
71001a38dc  mov w1,#0x1
71001a38e0  strb wzr,[x19, #0xbb]
71001a38e4  ldr x8,[x8, #0x10]
71001a38e8  mov x0,x19
71001a38ec  blr x8
71001a38f0  adrp x8,0x71052a6000
71001a38f4  ldr x8,[x8, #0x768]
71001a38f8  adrp x9,0x7104318000
71001a38fc  add x9,x9,#0x425
71001a3900  str x9,[x19, #0x40]
71001a3904  mov w0,#0x1
71001a3908  stp x8,xzr,[x19, #0x30]
71001a390c  ldp x29,x30,[sp, #0x10]
71001a3910  ldr x19,[sp], #0x20
71001a3914  ret
