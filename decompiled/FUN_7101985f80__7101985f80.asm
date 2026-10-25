// addr:      7101985f80
// offset:    0x1985f80
// name:      FUN_7101985f80
// mangled:   
// size:      112

7101985f80  str x19,[sp, #-0x20]!
7101985f84  stp x29,x30,[sp, #0x10]
7101985f88  add x29,sp,#0x10
7101985f8c  mov x19,x0
7101985f90  add x0,x0,#0x1d8
7101985f94  mov w1,wzr
7101985f98  mov w2,wzr
7101985f9c  bl 0x7103771a80
7101985fa0  ldr x0,[x19, #0x18]
7101985fa4  fmov s0,0x3f800000
7101985fa8  adrp x1,0x710435a000
7101985fac  add x1,x1,#0xd98
7101985fb0  bl 0x7103778300
7101985fb4  adrp x8,0x7105328000
7101985fb8  ldr x8,[x8, #0x170]
7101985fbc  ldr x0,[x8]
7101985fc0  mov w1,#0x2
7101985fc4  bl 0x71022e6a40
7101985fc8  ldrsw x8,[x19, #0x43c]
7101985fcc  cmp w8,#0x13
7101985fd0  b.cs 0x7101985fec
7101985fd4  add x8,x19,x8, LSL #0x2
7101985fd8  orr w9,wzr,#0x6
7101985fdc  str w9,[x8, #0x3f0]
7101985fe0  ldp x29,x30,[sp, #0x10]
7101985fe4  ldr x19,[sp], #0x20
7101985fe8  ret
7101985fec  bl 0x71039c2650
