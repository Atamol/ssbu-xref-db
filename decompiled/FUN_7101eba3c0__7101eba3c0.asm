// addr:      7101eba3c0
// offset:    0x1eba3c0
// name:      FUN_7101eba3c0
// mangled:   
// size:      252

7101eba3c0  sub sp,sp,#0x90
7101eba3c4  str x21,[sp, #0x60]
7101eba3c8  stp x20,x19,[sp, #0x70]
7101eba3cc  stp x29,x30,[sp, #0x80]
7101eba3d0  add x29,sp,#0x80
7101eba3d4  str w1,[x0, #0xfc]
7101eba3d8  mov x19,x0
7101eba3dc  ldr x8,[x0, #0x10]!
7101eba3e0  ldr x9,[x0, #0x8]
7101eba3e4  cmp x9,x8
7101eba3e8  b.eq 0x7101eba4b8
7101eba3ec  ldr x8,[x8]
7101eba3f0  ldr x8,[x8]
7101eba3f4  ldr x8,[x8]
7101eba3f8  add x0,x8,#0x8
7101eba3fc  adrp x1,0x710436c000
7101eba400  add x1,x1,#0xae0
7101eba404  add x8,sp,#0x8
7101eba408  add x21,sp,#0x8
7101eba40c  bl 0x7103776640
7101eba410  adrp x1,0x7104413000
7101eba414  add x1,x1,#0x9a
7101eba418  sub x8,x29,#0x30
7101eba41c  add x0,sp,#0x8
7101eba420  bl 0x7103776910
7101eba424  ldr x20,[sp, #0x10]
7101eba428  adrp x8,0x710523d000
7101eba42c  add x8,x8,#0x988
7101eba430  stp x8,xzr,[sp, #0x8]
7101eba434  cbz x20,0x7101eba458
7101eba438  ldr x0,[x20, #0x18]
7101eba43c  adrp x8,0x710523d000
7101eba440  add x8,x8,#0x9a8
7101eba444  stp x8,xzr,[x20, #0x10]
7101eba448  cbz x0,0x7101eba450
7101eba44c  bl 0x710392eb40
7101eba450  mov x0,x20
7101eba454  bl 0x710392eb40
7101eba458  ldr w1,[x19, #0xfc]
7101eba45c  adrp x0,0x710434a000
7101eba460  add x0,x0,#0xb37
7101eba464  add x8,sp,#0x8
7101eba468  bl 0x71003a4ca0
7101eba46c  ldr x0,[x19, #0xf0]
7101eba470  add x1,x21,#0x8
7101eba474  mov w2,#0x2e
7101eba478  bl 0x71032410c0
7101eba47c  ldur x19,[x29, #-0x28]
7101eba480  mov x1,x0
7101eba484  mov x0,x19
7101eba488  bl 0x7103778b80
7101eba48c  adrp x8,0x710523d000
7101eba490  add x8,x8,#0x9a8
7101eba494  stp x8,xzr,[x29, #-0x30]
7101eba498  cbz x19,0x7101eba4a4
7101eba49c  mov x0,x19
7101eba4a0  bl 0x710392eb40
7101eba4a4  ldp x29,x30,[sp, #0x80]
7101eba4a8  ldr x21,[sp, #0x60]
7101eba4ac  ldp x20,x19,[sp, #0x70]
7101eba4b0  add sp,sp,#0x90
7101eba4b4  ret
7101eba4b8  bl 0x71039c1330
