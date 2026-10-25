// addr:      7101a9ca10
// offset:    0x1a9ca10
// name:      FUN_7101a9ca10
// mangled:   
// size:      92

7101a9ca10  str x19,[sp, #-0x20]!
7101a9ca14  stp x29,x30,[sp, #0x10]
7101a9ca18  add x29,sp,#0x10
7101a9ca1c  ldr w8,[x0, #0x1dc]
7101a9ca20  cbnz w8,0x7101a9ca5c
7101a9ca24  ldr x8,[x0, #0x1f0]
7101a9ca28  ldr x8,[x8]
7101a9ca2c  mov x19,x0
7101a9ca30  ldr x0,[x8, #0x10]
7101a9ca34  fmov s0,0x3f800000
7101a9ca38  adrp x1,0x71042b4000
7101a9ca3c  add x1,x1,#0x521
7101a9ca40  bl 0x7103778300
7101a9ca44  ldrsw x8,[x19, #0x1d4]
7101a9ca48  cmp w8,#0x13
7101a9ca4c  b.cs 0x7101a9ca68
7101a9ca50  add x8,x19,x8, LSL #0x2
7101a9ca54  orr w9,wzr,#0x3
7101a9ca58  str w9,[x8, #0x188]
7101a9ca5c  ldp x29,x30,[sp, #0x10]
7101a9ca60  ldr x19,[sp], #0x20
7101a9ca64  ret
7101a9ca68  bl 0x71039c2650
