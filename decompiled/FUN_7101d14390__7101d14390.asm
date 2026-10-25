// addr:      7101d14390
// offset:    0x1d14390
// name:      FUN_7101d14390
// mangled:   
// size:      256

7101d14390  str x19,[sp, #-0x20]!
7101d14394  stp x29,x30,[sp, #0x10]
7101d14398  add x29,sp,#0x10
7101d1439c  ldrb w8,[x0, #0x4c0]
7101d143a0  mov x19,x0
7101d143a4  cbz w8,0x7101d143f4
7101d143a8  ldr x8,[x19, #0x110]
7101d143ac  ldr x8,[x8, #0x8]
7101d143b0  ldr x0,[x8, #0x8]
7101d143b4  cbz x0,0x7101d143d8
7101d143b8  adrp x1,0x7104453000
7101d143bc  add x1,x1,#0x107
7101d143c0  bl 0x71037964b0
7101d143c4  cbz x0,0x7101d143d8
7101d143c8  ldr x8,[x0]
7101d143cc  ldr x8,[x8, #0x138]
7101d143d0  blr x8
7101d143d4  tbz w0,#0x0,0x7101d143f4
7101d143d8  ldrsw x8,[x19, #0xf4]
7101d143dc  cmp w8,#0x13
7101d143e0  b.cs 0x7101d1448c
7101d143e4  add x8,x19,x8, LSL #0x2
7101d143e8  ldr w9,[x8, #0xa8]
7101d143ec  add w9,w9,#0x1
7101d143f0  str w9,[x8, #0xa8]
7101d143f4  ldrb w8,[x19, #0x4c4]
7101d143f8  cbz w8,0x7101d14420
7101d143fc  ldrsw x8,[x19, #0xf4]
7101d14400  cmp w8,#0x13
7101d14404  b.cs 0x7101d1448c
7101d14408  add x8,x19,x8, LSL #0x2
7101d1440c  orr w9,wzr,#0x7
7101d14410  str w9,[x8, #0xa8]
7101d14414  ldp x29,x30,[sp, #0x10]
7101d14418  ldr x19,[sp], #0x20
7101d1441c  ret
7101d14420  ldr x8,[x19, #0x108]
7101d14424  ldr x8,[x8]
7101d14428  ldr x8,[x8]
7101d1442c  ldr x8,[x8]
7101d14430  ldr x8,[x8, #0x600]
7101d14434  ldrb w9,[x8, #0x4aa]
7101d14438  cbz w9,0x7101d14414
7101d1443c  ldrb w8,[x8, #0x1b0]
7101d14440  tbz w8,#0x1,0x7101d14414
7101d14444  mov w8,#0xffffffff
7101d14448  str x8,[x19, #0xf8]
7101d1444c  str w8,[x19, #0x100]
7101d14450  mov w8,#0x1
7101d14454  stp xzr,xzr,[x19, #0x8]
7101d14458  str wzr,[x19, #0xf4]
7101d1445c  stur xzr,[x19, #0xec]
7101d14460  stur xzr,[x19, #0xe4]
7101d14464  stur xzr,[x19, #0xdc]
7101d14468  stur xzr,[x19, #0xd4]
7101d1446c  stur xzr,[x19, #0xcc]
7101d14470  stur xzr,[x19, #0xc4]
7101d14474  stur xzr,[x19, #0xbc]
7101d14478  stur xzr,[x19, #0xb4]
7101d1447c  stur xzr,[x19, #0xac]
7101d14480  strb wzr,[x19, #0x104]
7101d14484  str w8,[x19, #0xa8]
7101d14488  b 0x7101d14414
7101d1448c  bl 0x71039c2650
