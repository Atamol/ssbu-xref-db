// addr:      7101bf4410
// offset:    0x1bf4410
// name:      FUN_7101bf4410
// mangled:   
// size:      256

7101bf4410  str x19,[sp, #-0x20]!
7101bf4414  stp x29,x30,[sp, #0x10]
7101bf4418  add x29,sp,#0x10
7101bf441c  ldr w8,[x0, #0xcc]
7101bf4420  mov x19,x0
7101bf4424  cbnz w8,0x7101bf4440
7101bf4428  ldr x8,[x19, #0xe0]
7101bf442c  ldr x8,[x8]
7101bf4430  ldr x0,[x8]
7101bf4434  mov w1,#0x1
7101bf4438  bl 0x71037760f0
7101bf443c  strb wzr,[x19, #0x12c]
7101bf4440  ldr x8,[x19, #0xe0]
7101bf4444  ldr x8,[x8]
7101bf4448  ldr x8,[x8, #0x10]
7101bf444c  ldr x0,[x8, #0x8]
7101bf4450  cbz x0,0x7101bf4474
7101bf4454  adrp x1,0x71043cf000
7101bf4458  add x1,x1,#0xb52
7101bf445c  bl 0x71037964b0
7101bf4460  cbz x0,0x7101bf4474
7101bf4464  ldr x8,[x0]
7101bf4468  ldr x8,[x8, #0x138]
7101bf446c  blr x8
7101bf4470  tbz w0,#0x0,0x7101bf449c
7101bf4474  ldrb w8,[x19, #0x12e]
7101bf4478  cbnz w8,0x7101bf449c
7101bf447c  ldr x8,[x19, #0xe0]
7101bf4480  ldr x8,[x8]
7101bf4484  ldr x0,[x8, #0x10]
7101bf4488  adrp x1,0x71042d6000
7101bf448c  add x1,x1,#0x998
7101bf4490  bl 0x7103778760
7101bf4494  mov w8,#0x1
7101bf4498  strb w8,[x19, #0x12e]
7101bf449c  ldr x9,[x19, #0xe0]
7101bf44a0  ldrb w8,[x19, #0x12c]
7101bf44a4  fmov s0,wzr
7101bf44a8  fmov s1,0x3f800000
7101bf44ac  ldr x9,[x9]
7101bf44b0  ldr x9,[x9]
7101bf44b4  cmp w8,#0x0
7101bf44b8  fcsel s0,s1,s0,eq
7101bf44bc  str s0,[x9, #0x640]
7101bf44c0  ldrb w8,[x19, #0x12d]
7101bf44c4  cbz w8,0x7101bf4500
7101bf44c8  ldr x8,[x19, #0xe0]
7101bf44cc  ldr x8,[x8]
7101bf44d0  ldr x8,[x8]
7101bf44d4  ldr x8,[x8, #0x600]
7101bf44d8  ldrb w9,[x8, #0x4aa]
7101bf44dc  cbz w9,0x7101bf4500
7101bf44e0  ldrb w8,[x8, #0x1a8]
7101bf44e4  tbz w8,#0x1,0x7101bf4500
7101bf44e8  ldrsw x8,[x19, #0xc4]
7101bf44ec  cmp w8,#0x13
7101bf44f0  b.cs 0x7101bf450c
7101bf44f4  add x8,x19,x8, LSL #0x2
7101bf44f8  orr w9,wzr,#0x3
7101bf44fc  str w9,[x8, #0x78]
7101bf4500  ldp x29,x30,[sp, #0x10]
7101bf4504  ldr x19,[sp], #0x20
7101bf4508  ret
7101bf450c  bl 0x71039c2650
