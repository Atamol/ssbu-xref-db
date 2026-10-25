// addr:      7101e53a90
// offset:    0x1e53a90
// name:      FUN_7101e53a90
// mangled:   
// size:      92

7101e53a90  str x19,[sp, #-0x20]!
7101e53a94  stp x29,x30,[sp, #0x10]
7101e53a98  add x29,sp,#0x10
7101e53a9c  mov x19,x0
7101e53aa0  add x0,x0,#0x30
7101e53aa4  mov w1,#0x1
7101e53aa8  mov w2,#0x1
7101e53aac  bl 0x7103771a80
7101e53ab0  ldr x0,[x19, #0x20]
7101e53ab4  fmov s0,0x3f800000
7101e53ab8  adrp x1,0x7104412000
7101e53abc  add x1,x1,#0xf1d
7101e53ac0  bl 0x7103778300
7101e53ac4  ldrsw x8,[x19, #0x16c]
7101e53ac8  cmp w8,#0x13
7101e53acc  b.cs 0x7101e53ae8
7101e53ad0  add x8,x19,x8, LSL #0x2
7101e53ad4  mov w9,#0x5
7101e53ad8  str w9,[x8, #0x120]
7101e53adc  ldp x29,x30,[sp, #0x10]
7101e53ae0  ldr x19,[sp], #0x20
7101e53ae4  ret
7101e53ae8  bl 0x71039c2650
