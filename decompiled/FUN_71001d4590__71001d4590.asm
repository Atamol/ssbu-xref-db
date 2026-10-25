// addr:      71001d4590
// offset:    0x1d4590
// name:      FUN_71001d4590
// mangled:   
// size:      168

71001d4590  str x19,[sp, #-0x20]!
71001d4594  stp x29,x30,[sp, #0x10]
71001d4598  add x29,sp,#0x10
71001d459c  ldr w8,[x0, #0x28]
71001d45a0  cmp w8,#0x2
71001d45a4  b.ne 0x71001d45d4
71001d45a8  str w8,[x0, #0x28]
71001d45ac  str xzr,[x0, #0x20]
71001d45b0  adrp x8,0x71052a6000
71001d45b4  ldr x8,[x8, #0x868]
71001d45b8  ldrb w8,[x8]
71001d45bc  mov x19,x0
71001d45c0  cbz w8,0x71001d4600
71001d45c4  add x8,sp,#0x8
71001d45c8  mov w0,wzr
71001d45cc  bl 0x71001b68a0
71001d45d0  b 0x71001d4608
71001d45d4  adrp x0,0x71043bd000
71001d45d8  add x0,x0,#0xad9
71001d45dc  mov w1,#0x2f
71001d45e0  mov w2,#0xe
71001d45e4  movk w2,#0xe000, LSL #16
71001d45e8  mov w3,wzr
71001d45ec  bl 0x71001b1300
71001d45f0  mov w0,wzr
71001d45f4  ldp x29,x30,[sp, #0x10]
71001d45f8  ldr x19,[sp], #0x20
71001d45fc  ret
71001d4600  add x8,sp,#0x8
71001d4604  bl 0x71001b6a50
71001d4608  adrp x9,0x71052a6000
71001d460c  ldr x8,[sp, #0x8]
71001d4610  ldr x9,[x9, #0x870]
71001d4614  str x8,[x9]
71001d4618  str wzr,[x19, #0x28]
71001d461c  ldr x9,[x19, #0x10]
71001d4620  sub x8,x8,x9
71001d4624  mov w0,#0x1
71001d4628  str x8,[x19, #0x18]
71001d462c  ldp x29,x30,[sp, #0x10]
71001d4630  ldr x19,[sp], #0x20
71001d4634  ret
