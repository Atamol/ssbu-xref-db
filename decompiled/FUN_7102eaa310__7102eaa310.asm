// addr:      7102eaa310
// offset:    0x2eaa310
// name:      FUN_7102eaa310
// mangled:   
// size:      240

7102eaa310  stp x20,x19,[sp, #-0x20]!
7102eaa314  stp x29,x30,[sp, #0x10]
7102eaa318  add x29,sp,#0x10
7102eaa31c  ldrb w8,[x0, #0x98]
7102eaa320  mov x19,x0
7102eaa324  cbz w8,0x7102eaa3d0
7102eaa328  ldrsw x8,[x19, #0xb0]
7102eaa32c  strb wzr,[x19, #0x98]
7102eaa330  add x20,x19,#0xc8
7102eaa334  ldr x0,[x20, x8, LSL #0x3]
7102eaa338  adrp x1,0x71043ab000
7102eaa33c  add x1,x1,#0xd19
7102eaa340  bl 0x7102610070
7102eaa344  ldrsw x8,[x19, #0xb0]
7102eaa348  str wzr,[x19, #0xa4]
7102eaa34c  ldr x8,[x20, x8, LSL #0x3]
7102eaa350  cbz x8,0x7102eaa3b4
7102eaa354  add x0,x8,#0x108
7102eaa358  mov w9,#0x1
7102eaa35c  strb w9,[x8, #0x110]
7102eaa360  bl 0x71025e9d50
7102eaa364  ldrsw x8,[x19, #0xb0]
7102eaa368  add x8,x19,x8, LSL #0x3
7102eaa36c  ldr x8,[x8, #0xc8]
7102eaa370  cbz x8,0x7102eaa3b4
7102eaa374  ldr x0,[x8, #0xd8]
7102eaa378  fmov s0,wzr
7102eaa37c  mov w1,#0x1
7102eaa380  bl 0x71025ee450
7102eaa384  ldrsw x8,[x19, #0xb0]
7102eaa388  add x8,x19,x8, LSL #0x3
7102eaa38c  ldr x8,[x8, #0xc8]
7102eaa390  cbz x8,0x7102eaa3b4
7102eaa394  ldrb w9,[x8, #0xe0]
7102eaa398  cbz w9,0x7102eaa3a8
7102eaa39c  ldr x9,[x8, #0xc8]
7102eaa3a0  cbz x9,0x7102eaa3a8
7102eaa3a4  strh wzr,[x9, #0x32]
7102eaa3a8  ldr x8,[x8, #0xd8]
7102eaa3ac  cbz x8,0x7102eaa3b4
7102eaa3b0  strb wzr,[x8, #0x22]
7102eaa3b4  ldrsw x8,[x19, #0xb0]
7102eaa3b8  add x8,x19,x8, LSL #0x3
7102eaa3bc  ldr x8,[x8, #0xc8]
7102eaa3c0  cbz x8,0x7102eaa3d0
7102eaa3c4  ldr x8,[x8, #0xd8]
7102eaa3c8  cbz x8,0x7102eaa3d0
7102eaa3cc  strb wzr,[x8, #0x21]
7102eaa3d0  ldrsw x8,[x19, #0xb0]
7102eaa3d4  add x8,x19,x8, LSL #0x3
7102eaa3d8  ldr x0,[x8, #0xc8]
7102eaa3dc  bl 0x710260ffb0
7102eaa3e0  tbz w0,#0x0,0x7102eaa3f4
7102eaa3e4  mov w8,#0x2
7102eaa3e8  str w8,[x19, #0x40]
7102eaa3ec  mov w8,#0x1
7102eaa3f0  strb w8,[x19, #0x98]
7102eaa3f4  ldp x29,x30,[sp, #0x10]
7102eaa3f8  ldp x20,x19,[sp], #0x20
7102eaa3fc  ret
