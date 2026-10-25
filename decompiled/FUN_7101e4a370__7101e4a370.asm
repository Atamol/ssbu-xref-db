// addr:      7101e4a370
// offset:    0x1e4a370
// name:      FUN_7101e4a370
// mangled:   
// size:      252

7101e4a370  str x21,[sp, #-0x30]!
7101e4a374  stp x20,x19,[sp, #0x10]
7101e4a378  stp x29,x30,[sp, #0x20]
7101e4a37c  add x29,sp,#0x20
7101e4a380  ldrb w8,[x0, #0x22c]
7101e4a384  mov x19,x0
7101e4a388  cbz w8,0x7101e4a3c0
7101e4a38c  ldr x8,[x19, #0x250]
7101e4a390  ldr x8,[x8]
7101e4a394  ldr x8,[x8, #0x8]
7101e4a398  ldrb w9,[x8, #0x388]
7101e4a39c  cbz w9,0x7101e4a3c0
7101e4a3a0  ldrb w21,[x19, #0x22d]
7101e4a3a4  ldr x8,[x8]
7101e4a3a8  mov w9,#0x1d8
7101e4a3ac  cmp x8,#0x0
7101e4a3b0  madd x8,x21,x9,x8
7101e4a3b4  ccmp w21,#0x3,#0x2,ne
7101e4a3b8  ccmp x8,#0x0,#0x4,ls
7101e4a3bc  b.ne 0x7101e4a410
7101e4a3c0  add x8,x19,#0x184
7101e4a3c4  orr x9,xzr,#-0x100000000
7101e4a3c8  str wzr,[x19, #0x178]
7101e4a3cc  stp xzr,xzr,[x19, #0x10]
7101e4a3d0  stp xzr,xzr,[x19, #0x168]
7101e4a3d4  stp xzr,xzr,[x19, #0x158]
7101e4a3d8  stp xzr,xzr,[x19, #0x148]
7101e4a3dc  stp xzr,xzr,[x19, #0x138]
7101e4a3e0  str x9,[x8]
7101e4a3e4  mov x8,#0xf
7101e4a3e8  movk x8,#0xd, LSL #32
7101e4a3ec  orr x9,xzr,#-0xffffffff
7101e4a3f0  str x8,[x19, #0x130]
7101e4a3f4  add x8,x19,#0x17c
7101e4a3f8  strb wzr,[x19, #0x18c]
7101e4a3fc  str x9,[x8]
7101e4a400  ldp x29,x30,[sp, #0x20]
7101e4a404  ldp x20,x19,[sp, #0x10]
7101e4a408  ldr x21,[sp], #0x30
7101e4a40c  ret
7101e4a410  ldrsh w8,[x8]
7101e4a414  cmn w8,#0x1
7101e4a418  b.eq 0x7101e4a3c0
7101e4a41c  ldr x8,[x19, #0x1a8]
7101e4a420  add x8,x8,x21, LSL #0x3
7101e4a424  ldr x20,[x8, #0x48]
7101e4a428  cbz x20,0x7101e4a43c
7101e4a42c  mov x0,x20
7101e4a430  bl 0x7101e9be90
7101e4a434  mov x0,x20
7101e4a438  bl 0x7101e9c4a0
7101e4a43c  ldrb w8,[x19, #0x1b2]
7101e4a440  cbz w8,0x7101e4a3c0
7101e4a444  ldr x8,[x19, #0x1a8]
7101e4a448  add x8,x8,x21, LSL #0x3
7101e4a44c  ldr x8,[x8, #0x48]
7101e4a450  cbz x8,0x7101e4a3c0
7101e4a454  ldr x0,[x8, #0x8]
7101e4a458  fmov s0,0x3f800000
7101e4a45c  adrp x1,0x71042d6000
7101e4a460  add x1,x1,#0x9e0
7101e4a464  bl 0x7103778300
7101e4a468  b 0x7101e4a3c0
