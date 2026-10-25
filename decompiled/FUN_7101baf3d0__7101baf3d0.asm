// addr:      7101baf3d0
// offset:    0x1baf3d0
// name:      FUN_7101baf3d0
// mangled:   
// size:      288

7101baf3d0  sub sp,sp,#0x30
7101baf3d4  stp x20,x19,[sp, #0x10]
7101baf3d8  stp x29,x30,[sp, #0x20]
7101baf3dc  add x29,sp,#0x20
7101baf3e0  ldr x8,[x0, #0xd8]
7101baf3e4  ldr x20,[x8]
7101baf3e8  ldr w8,[x0, #0xcc]
7101baf3ec  mov x19,x0
7101baf3f0  cbz w8,0x7101baf43c
7101baf3f4  ldr x8,[x20, #0x10]
7101baf3f8  ldr x0,[x8, #0x8]
7101baf3fc  cbz x0,0x7101baf420
7101baf400  adrp x1,0x7104421000
7101baf404  add x1,x1,#0x55
7101baf408  bl 0x71037964b0
7101baf40c  cbz x0,0x7101baf420
7101baf410  ldr x8,[x0]
7101baf414  ldr x8,[x8, #0x138]
7101baf418  blr x8
7101baf41c  tbz w0,#0x0,0x7101baf4dc
7101baf420  ldrsw x8,[x19, #0xc4]
7101baf424  cmp w8,#0x13
7101baf428  b.cs 0x7101baf4ec
7101baf42c  add x8,x19,x8, LSL #0x2
7101baf430  mov w9,#0x2
7101baf434  str w9,[x8, #0x78]
7101baf438  b 0x7101baf4dc
7101baf43c  mov w2,#0x1000
7101baf440  mov x0,x20
7101baf444  mov w1,wzr
7101baf448  bl 0x7103775dc0
7101baf44c  ldr x0,[x19, #0xf0]
7101baf450  bl 0x710376b960
7101baf454  ldr x8,[x19, #0x130]
7101baf458  str x8,[x19, #0x138]
7101baf45c  ldr x8,[x19, #0xd8]
7101baf460  ldr x8,[x8]
7101baf464  add x0,x8,#0x8
7101baf468  adrp x1,0x71042f8000
7101baf46c  add x1,x1,#0xe2
7101baf470  mov x8,sp
7101baf474  bl 0x7103776640
7101baf478  mov x1,sp
7101baf47c  mov x0,x19
7101baf480  bl 0x7101bb0300
7101baf484  ldr x19,[sp, #0x8]
7101baf488  adrp x8,0x710523d000
7101baf48c  add x8,x8,#0x988
7101baf490  stp x8,xzr,[sp]
7101baf494  cbz x19,0x7101baf4b8
7101baf498  ldr x0,[x19, #0x18]
7101baf49c  adrp x8,0x710523d000
7101baf4a0  add x8,x8,#0x9a8
7101baf4a4  stp x8,xzr,[x19, #0x10]
7101baf4a8  cbz x0,0x7101baf4b0
7101baf4ac  bl 0x710392eb40
7101baf4b0  mov x0,x19
7101baf4b4  bl 0x710392eb40
7101baf4b8  ldr x0,[x20, #0x10]
7101baf4bc  fmov s0,0x3f800000
7101baf4c0  adrp x1,0x7104421000
7101baf4c4  add x1,x1,#0x55
7101baf4c8  bl 0x7103778300
7101baf4cc  adrp x8,0x7105329000
7101baf4d0  ldr x8,[x8, #0xf50]
7101baf4d4  ldr x8,[x8]
7101baf4d8  strb wzr,[x8, #0x1]
7101baf4dc  ldp x29,x30,[sp, #0x20]
7101baf4e0  ldp x20,x19,[sp, #0x10]
7101baf4e4  add sp,sp,#0x30
7101baf4e8  ret
7101baf4ec  bl 0x71039c2650
