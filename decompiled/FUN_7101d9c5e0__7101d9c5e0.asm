// addr:      7101d9c5e0
// offset:    0x1d9c5e0
// name:      FUN_7101d9c5e0
// mangled:   
// size:      248

7101d9c5e0  stp x24,x23,[sp, #-0x40]!
7101d9c5e4  stp x22,x21,[sp, #0x10]
7101d9c5e8  stp x20,x19,[sp, #0x20]
7101d9c5ec  stp x29,x30,[sp, #0x30]
7101d9c5f0  add x29,sp,#0x30
7101d9c5f4  ldr x8,[x0, #0x168]
7101d9c5f8  mov x19,x0
7101d9c5fc  ldr x0,[x8, #0x8]
7101d9c600  cbz x0,0x7101d9c624
7101d9c604  adrp x1,0x71042e7000
7101d9c608  add x1,x1,#0x633
7101d9c60c  bl 0x71037964b0
7101d9c610  cbz x0,0x7101d9c624
7101d9c614  ldr x8,[x0]
7101d9c618  ldr x8,[x8, #0x138]
7101d9c61c  blr x8
7101d9c620  tbz w0,#0x0,0x7101d9c6c0
7101d9c624  ldr w8,[x19, #0x11c]
7101d9c628  ldr w9,[x19, #0x3e0]
7101d9c62c  cmp w8,w9
7101d9c630  b.cc 0x7101d9c6c0
7101d9c634  ldr x8,[x19, #0x148]
7101d9c638  str wzr,[x19, #0x3e0]
7101d9c63c  ldr x0,[x8]
7101d9c640  bl 0x7103775fa0
7101d9c644  ldr x8,[x19, #0x150]
7101d9c648  ldr x0,[x8]
7101d9c64c  bl 0x7103775fa0
7101d9c650  ldr x8,[x19, #0x158]
7101d9c654  ldr x0,[x8]
7101d9c658  bl 0x7103775fa0
7101d9c65c  ldp x21,x22,[x19, #0x1e0]
7101d9c660  cmp x22,x21
7101d9c664  b.eq 0x7101d9c6a8
7101d9c668  adrp x23,0x710523d000
7101d9c66c  add x23,x23,#0x988
7101d9c670  adrp x24,0x710523d000
7101d9c674  add x24,x24,#0x9a8
7101d9c678  str x23,[x22, #-0x18]!
7101d9c67c  ldr x20,[x22, #0x8]
7101d9c680  str xzr,[x22, #0x8]
7101d9c684  cbz x20,0x7101d9c6a0
7101d9c688  ldr x0,[x20, #0x18]
7101d9c68c  stp x24,xzr,[x20, #0x10]
7101d9c690  cbz x0,0x7101d9c698
7101d9c694  bl 0x710392eb40
7101d9c698  mov x0,x20
7101d9c69c  bl 0x710392eb40
7101d9c6a0  cmp x21,x22
7101d9c6a4  b.ne 0x7101d9c678
7101d9c6a8  ldrsw x8,[x19, #0x114]
7101d9c6ac  cmp w8,#0x13
7101d9c6b0  str x21,[x19, #0x1e8]
7101d9c6b4  b.cs 0x7101d9c6d4
7101d9c6b8  add x8,x19,x8, LSL #0x2
7101d9c6bc  str wzr,[x8, #0xc8]
7101d9c6c0  ldp x29,x30,[sp, #0x30]
7101d9c6c4  ldp x20,x19,[sp, #0x20]
7101d9c6c8  ldp x22,x21,[sp, #0x10]
7101d9c6cc  ldp x24,x23,[sp], #0x40
7101d9c6d0  ret
7101d9c6d4  bl 0x71039c2650
