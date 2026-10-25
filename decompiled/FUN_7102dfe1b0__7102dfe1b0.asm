// addr:      7102dfe1b0
// offset:    0x2dfe1b0
// name:      FUN_7102dfe1b0
// mangled:   
// size:      336

7102dfe1b0  stp x20,x19,[sp, #-0x20]!
7102dfe1b4  stp x29,x30,[sp, #0x10]
7102dfe1b8  add x29,sp,#0x10
7102dfe1bc  ldr x8,[x0, #0x1370]
7102dfe1c0  cbz x8,0x7102dfe29c
7102dfe1c4  mov w20,w1
7102dfe1c8  ldp x1,x8,[x8]
7102dfe1cc  mov x19,x0
7102dfe1d0  cmp x1,x8
7102dfe1d4  b.eq 0x7102dfe258
7102dfe1d8  ldr x10,[x1]
7102dfe1dc  ldrb w9,[x10, #0x20]
7102dfe1e0  cbz w9,0x7102dfe240
7102dfe1e4  ldp x12,x9,[x10, #0x8]
7102dfe1e8  ldr x11,[x10]
7102dfe1ec  strb wzr,[x10, #0x20]
7102dfe1f0  str x11,[x12]
7102dfe1f4  str x12,[x11, #0x8]
7102dfe1f8  ldr x11,[x9, #0x18]
7102dfe1fc  sub x11,x11,#0x1
7102dfe200  str x11,[x9, #0x18]
7102dfe204  stp xzr,xzr,[x10]
7102dfe208  ldr x12,[x9, #0x40]
7102dfe20c  add x11,x9,#0x38
7102dfe210  stp x11,x12,[x10]
7102dfe214  str x10,[x9, #0x40]
7102dfe218  str x10,[x12]
7102dfe21c  ldr x11,[x9, #0x30]
7102dfe220  add x11,x11,#0x1
7102dfe224  str x11,[x9, #0x30]
7102dfe228  ldr x10,[x10, #0x18]
7102dfe22c  cbz x10,0x7102dfe234
7102dfe230  ldr w10,[x10, #0x110]
7102dfe234  ldr w11,[x9, #0x48]
7102dfe238  sub w10,w11,w10
7102dfe23c  str w10,[x9, #0x48]
7102dfe240  add x1,x1,#0x8
7102dfe244  cmp x8,x1
7102dfe248  b.ne 0x7102dfe1d8
7102dfe24c  ldr x8,[x19, #0x1370]
7102dfe250  ldp x0,x1,[x8]
7102dfe254  b 0x7102dfe25c
7102dfe258  mov x0,x1
7102dfe25c  adrp x2,0x71042a1000
7102dfe260  add x2,x2,#0x67e
7102dfe264  bl 0x71025f5420
7102dfe268  cmp w20,#0x4
7102dfe26c  b.hi 0x7102dfe29c
7102dfe270  mov w8,w20
7102dfe274  adrp x9,0x710451c000
7102dfe278  add x9,x9,#0x808
7102dfe27c  ldrsw x8,[x9, x8, LSL #0x2]
7102dfe280  add x8,x8,x9
7102dfe284  br x8
7102dfe288  ldr x8,[x19, #0x1370]
7102dfe28c  ldp x0,x1,[x8]
7102dfe290  adrp x2,0x71043bc000
7102dfe294  add x2,x2,#0xb6c
7102dfe298  b 0x7102dfe2f4
7102dfe29c  ldp x29,x30,[sp, #0x10]
7102dfe2a0  ldp x20,x19,[sp], #0x20
7102dfe2a4  ret
7102dfe2a8  ldr x8,[x19, #0x1370]
7102dfe2ac  ldp x0,x1,[x8]
7102dfe2b0  adrp x2,0x710436a000
7102dfe2b4  add x2,x2,#0x9e7
7102dfe2b8  b 0x7102dfe2f4
7102dfe2bc  ldr x8,[x19, #0x1370]
7102dfe2c0  ldp x0,x1,[x8]
7102dfe2c4  adrp x2,0x71042a1000
7102dfe2c8  add x2,x2,#0x676
7102dfe2cc  bl 0x71025f5420
7102dfe2d0  ldr x8,[x19, #0x1370]
7102dfe2d4  ldp x0,x1,[x8]
7102dfe2d8  adrp x2,0x7104441000
7102dfe2dc  add x2,x2,#0xec7
7102dfe2e0  b 0x7102dfe2f4
7102dfe2e4  ldr x8,[x19, #0x1370]
7102dfe2e8  ldp x0,x1,[x8]
7102dfe2ec  adrp x2,0x7104359000
7102dfe2f0  add x2,x2,#0x918
7102dfe2f4  ldp x29,x30,[sp, #0x10]
7102dfe2f8  ldp x20,x19,[sp], #0x20
7102dfe2fc  b 0x71025f5420
