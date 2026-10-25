// addr:      7101e53b60
// offset:    0x1e53b60
// name:      FUN_7101e53b60
// mangled:   
// size:      92

7101e53b60  str x19,[sp, #-0x20]!
7101e53b64  stp x29,x30,[sp, #0x10]
7101e53b68  add x29,sp,#0x10
7101e53b6c  mov x19,x0
7101e53b70  add x0,x0,#0x38
7101e53b74  mov w2,#0x1
7101e53b78  mov w1,wzr
7101e53b7c  bl 0x7103771a80
7101e53b80  ldr x0,[x19, #0x20]
7101e53b84  fmov s0,0x3f800000
7101e53b88  adrp x1,0x71042a3000
7101e53b8c  add x1,x1,#0x65e
7101e53b90  bl 0x7103778300
7101e53b94  ldrsw x8,[x19, #0x16c]
7101e53b98  cmp w8,#0x13
7101e53b9c  b.cs 0x7101e53bb8
7101e53ba0  add x8,x19,x8, LSL #0x2
7101e53ba4  mov w9,#0x4
7101e53ba8  str w9,[x8, #0x120]
7101e53bac  ldp x29,x30,[sp, #0x10]
7101e53bb0  ldr x19,[sp], #0x20
7101e53bb4  ret
7101e53bb8  bl 0x71039c2650
