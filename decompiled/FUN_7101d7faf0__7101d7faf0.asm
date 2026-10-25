// addr:      7101d7faf0
// offset:    0x1d7faf0
// name:      FUN_7101d7faf0
// mangled:   
// size:      164

7101d7faf0  str d8,[sp, #-0x30]!
7101d7faf4  stp x20,x19,[sp, #0x10]
7101d7faf8  stp x29,x30,[sp, #0x20]
7101d7fafc  add x29,sp,#0x20
7101d7fb00  ldr x8,[x0, #0x1e8]
7101d7fb04  ldr x20,[x8]
7101d7fb08  mov x19,x0
7101d7fb0c  ldr x0,[x20]
7101d7fb10  mov w1,#0x1
7101d7fb14  bl 0x71037760f0
7101d7fb18  ldr x0,[x19, #0x210]
7101d7fb1c  ldr x8,[x0]
7101d7fb20  ldr x8,[x8, #0x60]
7101d7fb24  mov w1,#0x1
7101d7fb28  blr x8
7101d7fb2c  mov x0,x19
7101d7fb30  bl 0x7101d81f50
7101d7fb34  mov x0,x19
7101d7fb38  bl 0x7101d818b0
7101d7fb3c  fmov s8,0x3f800000
7101d7fb40  ldr x0,[x20, #0x10]
7101d7fb44  adrp x1,0x71042d6000
7101d7fb48  add x1,x1,#0x632
7101d7fb4c  mov v0.16B,v8.16B
7101d7fb50  bl 0x7103778300
7101d7fb54  ldr x0,[x20, #0x10]
7101d7fb58  mov v0.16B,v8.16B
7101d7fb5c  adrp x1,0x7104421000
7101d7fb60  add x1,x1,#0x55
7101d7fb64  bl 0x7103778300
7101d7fb68  ldrsw x8,[x19, #0x1d4]
7101d7fb6c  cmp w8,#0x13
7101d7fb70  b.cs 0x7101d7fb90
7101d7fb74  add x8,x19,x8, LSL #0x2
7101d7fb78  orr w9,wzr,#0x3
7101d7fb7c  str w9,[x8, #0x188]
7101d7fb80  ldp x29,x30,[sp, #0x20]
7101d7fb84  ldp x20,x19,[sp, #0x10]
7101d7fb88  ldr d8,[sp], #0x30
7101d7fb8c  ret
7101d7fb90  bl 0x71039c2650
