// addr:      7101b5e230
// offset:    0x1b5e230
// name:      FUN_7101b5e230
// mangled:   
// size:      608

7101b5e230  sub sp,sp,#0x80
7101b5e234  str x21,[sp, #0x50]
7101b5e238  stp x20,x19,[sp, #0x60]
7101b5e23c  stp x29,x30,[sp, #0x70]
7101b5e240  add x29,sp,#0x70
7101b5e244  adrp x21,0x71052c3000
7101b5e248  ldr w8,[x0, #0x2e4]
7101b5e24c  ldr x20,[x21, #0x5b8]
7101b5e250  cbz w8,0x7101b5e2ec
7101b5e254  mov x19,x0
7101b5e258  ldr x0,[x20]
7101b5e25c  bl 0x710143ea40
7101b5e260  cmp w0,#0x2
7101b5e264  b.eq 0x7101b5e39c
7101b5e268  cmp w0,#0x1
7101b5e26c  b.ne 0x7101b5e478
7101b5e270  mov x1,#0x7bad
7101b5e274  movk x1,#0x35ab, LSL #16
7101b5e278  movk x1,#0xe, LSL #32
7101b5e27c  mov x0,sp
7101b5e280  bl 0x71024076d0
7101b5e284  adrp x8,0x7104f73000
7101b5e288  add x8,x8,#0xd50
7101b5e28c  str x8,[sp, #0x8]
7101b5e290  ldr x8,[sp, #0x10]
7101b5e294  cbz x8,0x7101b5e2d0
7101b5e298  adrp x9,0x7106dd5000
7101b5e29c  ldrb w9,[x9, #0x3a8]
7101b5e2a0  cmp w9,#0x1
7101b5e2a4  b.ne 0x7101b5e2d0
7101b5e2a8  adrp x10,0x7106dd5000
7101b5e2ac  ldr w9,[sp, #0x18]
7101b5e2b0  ldr w10,[x10, #0x3ac]
7101b5e2b4  cmp w9,w10
7101b5e2b8  b.ne 0x7101b5e2d0
7101b5e2bc  ldr wzr,[x8, #0x38]!
7101b5e2c0  ldaxr w9,[x8]
7101b5e2c4  sub w9,w9,#0x1
7101b5e2c8  stlxr w10,w9,[x8]
7101b5e2cc  cbnz w10,0x7101b5e2c0
7101b5e2d0  mov x20,#0x5764
7101b5e2d4  movk x20,#0x1eed, LSL #16
7101b5e2d8  movk x20,#0xff1e, LSL #32
7101b5e2dc  movk x20,#0x58ff, LSL #48
7101b5e2e0  str xzr,[sp, #0x10]
7101b5e2e4  strb wzr,[sp, #0x20]
7101b5e2e8  b 0x7101b5e3ac
7101b5e2ec  cbnz x20,0x7101b5e358
7101b5e2f0  mov w0,#0x10
7101b5e2f4  mov w1,#0x8
7101b5e2f8  bl 0x710392e290
7101b5e2fc  mov x20,x0
7101b5e300  cbnz x0,0x7101b5e34c
7101b5e304  adrp x8,0x7105332000
7101b5e308  ldr x0,[x8, #0xf00]
7101b5e30c  cbz x0,0x7101b5e348
7101b5e310  mov w8,#0x8
7101b5e314  stur wzr,[x29, #-0x14]
7101b5e318  sub x1,x29,#0x14
7101b5e31c  stur x8,[x29, #-0x30]
7101b5e320  ldr x8,[x0]
7101b5e324  ldr x8,[x8, #0x30]
7101b5e328  sub x2,x29,#0x30
7101b5e32c  blr x8
7101b5e330  tbz w0,#0x0,0x7101b5e348
7101b5e334  mov w0,#0x10
7101b5e338  mov w1,#0x8
7101b5e33c  bl 0x710392e290
7101b5e340  mov x20,x0
7101b5e344  cbnz x0,0x7101b5e34c
7101b5e348  mov x20,xzr
7101b5e34c  mov x0,x20
7101b5e350  bl 0x710143e850
7101b5e354  str x20,[x21, #0x5b8]
7101b5e358  ldr x19,[x20]
7101b5e35c  str xzr,[x19, #0x190]
7101b5e360  adrp x8,0x71052c5000
7101b5e364  ldr x8,[x8, #0xf0]
7101b5e368  add x0,x8,#0x588
7101b5e36c  ldr x8,[x8, #0x588]
7101b5e370  ldr x8,[x8, #0x18]
7101b5e374  blr x8
7101b5e378  ldrsw x8,[x19, #0xf4]
7101b5e37c  cmp w8,#0x13
7101b5e380  str x0,[x19, #0x198]
7101b5e384  b.cs 0x7101b5e48c
7101b5e388  add x8,x19,x8, LSL #0x2
7101b5e38c  mov w9,#0x1
7101b5e390  str w9,[x8, #0xa8]
7101b5e394  str wzr,[x19, #0x108]
7101b5e398  b 0x7101b5e478
7101b5e39c  mov x20,#0x4c97
7101b5e3a0  movk x20,#0x4130, LSL #16
7101b5e3a4  movk x20,#0xff1e, LSL #32
7101b5e3a8  movk x20,#0x58ff, LSL #48
7101b5e3ac  adrp x8,0x710532f000
7101b5e3b0  ldr x21,[x8, #0x820]
7101b5e3b4  adrp x8,0x710532f000
7101b5e3b8  ldr x8,[x8, #0x730]
7101b5e3bc  ldr x8,[x8, #0x8]
7101b5e3c0  ldr x0,[x8, #0x1c8]
7101b5e3c4  mov x1,x20
7101b5e3c8  bl 0x7103291150
7101b5e3cc  tbz w0,#0x0,0x7101b5e3e8
7101b5e3d0  ldr x0,[x21, #0x10]
7101b5e3d4  mov x1,x20
7101b5e3d8  bl 0x71032edf70
7101b5e3dc  ldp x0,x1,[x21, #0x8]
7101b5e3e0  bl 0x71032f1bb0
7101b5e3e4  b 0x7101b5e3f0
7101b5e3e8  ldr x8,[x21, #0x8]
7101b5e3ec  str wzr,[x8, #0x118]
7101b5e3f0  ldr x8,[x19, #0x8]
7101b5e3f4  strb wzr,[x19, #0x2fc]
7101b5e3f8  ldr x8,[x8]
7101b5e3fc  add x0,x8,#0x8
7101b5e400  adrp x1,0x710437c000
7101b5e404  add x1,x1,#0x205
7101b5e408  sub x8,x29,#0x30
7101b5e40c  bl 0x7103776640
7101b5e410  ldur x20,[x29, #-0x28]
7101b5e414  ldr x8,[x20, #0x8]
7101b5e418  cbz x8,0x7101b5e430
7101b5e41c  ldr x8,[x8, #0x18]
7101b5e420  cbz x8,0x7101b5e430
7101b5e424  ldrb w9,[x8, #0x58]
7101b5e428  and w9,w9,#0xfe
7101b5e42c  strb w9,[x8, #0x58]
7101b5e430  adrp x8,0x710523d000
7101b5e434  add x8,x8,#0x988
7101b5e438  stp x8,xzr,[x29, #-0x30]
7101b5e43c  cbz x20,0x7101b5e460
7101b5e440  ldr x0,[x20, #0x18]
7101b5e444  adrp x8,0x710523d000
7101b5e448  add x8,x8,#0x9a8
7101b5e44c  stp x8,xzr,[x20, #0x10]
7101b5e450  cbz x0,0x7101b5e458
7101b5e454  bl 0x710392eb40
7101b5e458  mov x0,x20
7101b5e45c  bl 0x710392eb40
7101b5e460  ldrsw x8,[x19, #0x2dc]
7101b5e464  cmp w8,#0x13
7101b5e468  b.cs 0x7101b5e48c
7101b5e46c  add x8,x19,x8, LSL #0x2
7101b5e470  mov w9,#0x8
7101b5e474  str w9,[x8, #0x290]
7101b5e478  ldp x29,x30,[sp, #0x70]
7101b5e47c  ldr x21,[sp, #0x50]
7101b5e480  ldp x20,x19,[sp, #0x60]
7101b5e484  add sp,sp,#0x80
7101b5e488  ret
7101b5e48c  bl 0x71039c2650
