// addr:      7102f1c2c0
// offset:    0x2f1c2c0
// name:      FUN_7102f1c2c0
// mangled:   
// size:      876

7102f1c2c0  sub sp,sp,#0x90
7102f1c2c4  str d8,[sp, #0x40]
7102f1c2c8  stp x24,x23,[sp, #0x50]
7102f1c2cc  stp x22,x21,[sp, #0x60]
7102f1c2d0  stp x20,x19,[sp, #0x70]
7102f1c2d4  stp x29,x30,[sp, #0x80]
7102f1c2d8  add x29,sp,#0x80
7102f1c2dc  ldr x9,[x0, #0x310]
7102f1c2e0  ldp x8,x9,[x9, #0xd0]
7102f1c2e4  mov w20,w1
7102f1c2e8  mov x19,x0
7102f1c2ec  cmp x8,x9
7102f1c2f0  b.eq 0x7102f1c328
7102f1c2f4  mov x10,#0xfbee
7102f1c2f8  movk x10,#0x535f, LSL #16
7102f1c2fc  movk x10,#0x16, LSL #32
7102f1c300  ldr w11,[x8, #0x8]
7102f1c304  cmp w11,#0x1
7102f1c308  b.hi 0x7102f1c31c
7102f1c30c  ldr x22,[x8]
7102f1c310  ldr x11,[x22, #0x68]
7102f1c314  cmp x11,x10
7102f1c318  b.eq 0x7102f1c388
7102f1c31c  add x8,x8,#0x10
7102f1c320  cmp x9,x8
7102f1c324  b.ne 0x7102f1c300
7102f1c328  ldr x9,[x19, #0x310]
7102f1c32c  ldp x8,x9,[x9, #0xd0]
7102f1c330  cmp x8,x9
7102f1c334  b.eq 0x7102f1c36c
7102f1c338  mov x10,#0x9584
7102f1c33c  movk x10,#0x2bf, LSL #16
7102f1c340  movk x10,#0x17, LSL #32
7102f1c344  ldr w11,[x8, #0x8]
7102f1c348  cmp w11,#0x1
7102f1c34c  b.hi 0x7102f1c360
7102f1c350  ldr x21,[x8]
7102f1c354  ldr x11,[x21, #0x68]
7102f1c358  cmp x11,x10
7102f1c35c  b.eq 0x7102f1c48c
7102f1c360  add x8,x8,#0x10
7102f1c364  cmp x9,x8
7102f1c368  b.ne 0x7102f1c344
7102f1c36c  ldr d8,[sp, #0x40]
7102f1c370  ldp x29,x30,[sp, #0x80]
7102f1c374  ldp x20,x19,[sp, #0x70]
7102f1c378  ldp x22,x21,[sp, #0x60]
7102f1c37c  ldp x24,x23,[sp, #0x50]
7102f1c380  add sp,sp,#0x90
7102f1c384  ret
7102f1c388  cbz x22,0x7102f1c328
7102f1c38c  add x0,x22,#0x108
7102f1c390  and w8,w20,#0x1
7102f1c394  strb w8,[x22, #0x110]
7102f1c398  bl 0x71025e9d50
7102f1c39c  tbz w20,#0x0,0x7102f1c328
7102f1c3a0  ldr x21,[x19, #0x318]
7102f1c3a4  adrp x1,0x710439b000
7102f1c3a8  add x1,x1,#0x66e
7102f1c3ac  mov w2,#0x1
7102f1c3b0  mov x0,x21
7102f1c3b4  bl 0x7102633a10
7102f1c3b8  adrp x1,0x71042a1000
7102f1c3bc  add x1,x1,#0x516
7102f1c3c0  mov w2,#0x1
7102f1c3c4  mov x0,x21
7102f1c3c8  bl 0x7102633b90
7102f1c3cc  adrp x1,0x7104338000
7102f1c3d0  add x1,x1,#0x69a
7102f1c3d4  mov x0,x21
7102f1c3d8  bl 0x7102633800
7102f1c3dc  ldr x0,[x21, #0x10]
7102f1c3e0  adrp x1,0x71043de000
7102f1c3e4  add x1,x1,#0x429
7102f1c3e8  bl 0x71025f7350
7102f1c3ec  ldrb w8,[x22, #0xe0]
7102f1c3f0  cbz w8,0x7102f1c598
7102f1c3f4  ldr x21,[x22, #0xc8]
7102f1c3f8  cbz x21,0x7102f1c598
7102f1c3fc  ldp x23,x24,[x21, #0x18]
7102f1c400  cmp x23,x24
7102f1c404  str wzr,[x21, #0x3c]
7102f1c408  b.eq 0x7102f1c594
7102f1c40c  fmov s8,wzr
7102f1c410  ldr x0,[x23], #0x8
7102f1c414  ldr x8,[x0]
7102f1c418  ldr x8,[x8, #0x18]
7102f1c41c  mov v0.16B,v8.16B
7102f1c420  mov w1,wzr
7102f1c424  blr x8
7102f1c428  cmp x24,x23
7102f1c42c  b.ne 0x7102f1c410
7102f1c430  ldp x23,x24,[x21, #0x18]
7102f1c434  cmp x23,x24
7102f1c438  str wzr,[x21, #0x40]
7102f1c43c  b.eq 0x7102f1c598
7102f1c440  fmov s8,wzr
7102f1c444  ldr x0,[x23], #0x8
7102f1c448  ldr x8,[x0]
7102f1c44c  ldr x8,[x8, #0x18]
7102f1c450  mov v0.16B,v8.16B
7102f1c454  mov w1,#0x1
7102f1c458  blr x8
7102f1c45c  cmp x24,x23
7102f1c460  b.ne 0x7102f1c444
7102f1c464  ldp x23,x21,[x21, #0x18]
7102f1c468  cmp x23,x21
7102f1c46c  b.eq 0x7102f1c598
7102f1c470  ldr x0,[x23], #0x8
7102f1c474  ldr x8,[x0]
7102f1c478  ldr x8,[x8, #0x38]
7102f1c47c  blr x8
7102f1c480  cmp x21,x23
7102f1c484  b.ne 0x7102f1c470
7102f1c488  b 0x7102f1c598
7102f1c48c  cbz x21,0x7102f1c36c
7102f1c490  mvn w8,w20
7102f1c494  add x0,x21,#0x108
7102f1c498  and w8,w8,#0x1
7102f1c49c  strb w8,[x21, #0x110]
7102f1c4a0  bl 0x71025e9d50
7102f1c4a4  tbnz w20,#0x0,0x7102f1c36c
7102f1c4a8  ldr x19,[x19, #0x318]
7102f1c4ac  adrp x1,0x71042b2000
7102f1c4b0  add x1,x1,#0x5fa
7102f1c4b4  mov w2,#0x1
7102f1c4b8  mov x0,x19
7102f1c4bc  bl 0x7102633a10
7102f1c4c0  adrp x1,0x710438a000
7102f1c4c4  add x1,x1,#0xff2
7102f1c4c8  mov w2,#0x1
7102f1c4cc  mov x0,x19
7102f1c4d0  bl 0x7102633b90
7102f1c4d4  adrp x1,0x71043de000
7102f1c4d8  add x1,x1,#0x433
7102f1c4dc  mov x0,x19
7102f1c4e0  bl 0x7102633800
7102f1c4e4  ldr x0,[x19, #0x10]
7102f1c4e8  adrp x1,0x710426e000
7102f1c4ec  add x1,x1,#0x286
7102f1c4f0  bl 0x71025f7350
7102f1c4f4  ldrb w8,[x21, #0xe0]
7102f1c4f8  cbz w8,0x7102f1c5b0
7102f1c4fc  ldr x19,[x21, #0xc8]
7102f1c500  cbz x19,0x7102f1c5b0
7102f1c504  ldp x20,x22,[x19, #0x18]
7102f1c508  cmp x20,x22
7102f1c50c  str wzr,[x19, #0x3c]
7102f1c510  b.eq 0x7102f1c5ac
7102f1c514  fmov s8,wzr
7102f1c518  ldr x0,[x20], #0x8
7102f1c51c  ldr x8,[x0]
7102f1c520  ldr x8,[x8, #0x18]
7102f1c524  mov v0.16B,v8.16B
7102f1c528  mov w1,wzr
7102f1c52c  blr x8
7102f1c530  cmp x22,x20
7102f1c534  b.ne 0x7102f1c518
7102f1c538  ldp x20,x22,[x19, #0x18]
7102f1c53c  cmp x20,x22
7102f1c540  str wzr,[x19, #0x40]
7102f1c544  b.eq 0x7102f1c5b0
7102f1c548  fmov s8,wzr
7102f1c54c  ldr x0,[x20], #0x8
7102f1c550  ldr x8,[x0]
7102f1c554  ldr x8,[x8, #0x18]
7102f1c558  mov v0.16B,v8.16B
7102f1c55c  mov w1,#0x1
7102f1c560  blr x8
7102f1c564  cmp x22,x20
7102f1c568  b.ne 0x7102f1c54c
7102f1c56c  ldp x20,x19,[x19, #0x18]
7102f1c570  cmp x20,x19
7102f1c574  b.eq 0x7102f1c5b0
7102f1c578  ldr x0,[x20], #0x8
7102f1c57c  ldr x8,[x0]
7102f1c580  ldr x8,[x8, #0x38]
7102f1c584  blr x8
7102f1c588  cmp x19,x20
7102f1c58c  b.ne 0x7102f1c578
7102f1c590  b 0x7102f1c5b0
7102f1c594  str wzr,[x21, #0x40]
7102f1c598  ldr x0,[x22, #0xd8]
7102f1c59c  fmov s0,wzr
7102f1c5a0  mov w1,#0x1
7102f1c5a4  bl 0x71025ee450
7102f1c5a8  b 0x7102f1c328
7102f1c5ac  str wzr,[x19, #0x40]
7102f1c5b0  ldr x0,[x21, #0xd8]
7102f1c5b4  fmov s0,wzr
7102f1c5b8  mov w1,#0x1
7102f1c5bc  bl 0x71025ee450
7102f1c5c0  mov x1,#0x1901
7102f1c5c4  movk x1,#0xbd86, LSL #16
7102f1c5c8  movk x1,#0x1a, LSL #32
7102f1c5cc  mov x0,sp
7102f1c5d0  bl 0x71024076d0
7102f1c5d4  adrp x8,0x7104f73000
7102f1c5d8  add x8,x8,#0xd50
7102f1c5dc  str x8,[sp, #0x8]
7102f1c5e0  ldr x8,[sp, #0x10]
7102f1c5e4  cbz x8,0x7102f1c620
7102f1c5e8  adrp x9,0x7106dd5000
7102f1c5ec  ldrb w9,[x9, #0x3a8]
7102f1c5f0  cmp w9,#0x1
7102f1c5f4  b.ne 0x7102f1c620
7102f1c5f8  adrp x10,0x7106dd5000
7102f1c5fc  ldr w9,[sp, #0x18]
7102f1c600  ldr w10,[x10, #0x3ac]
7102f1c604  cmp w9,w10
7102f1c608  b.ne 0x7102f1c620
7102f1c60c  ldr wzr,[x8, #0x38]!
7102f1c610  ldaxr w9,[x8]
7102f1c614  sub w9,w9,#0x1
7102f1c618  stlxr w10,w9,[x8]
7102f1c61c  cbnz w10,0x7102f1c610
7102f1c620  str xzr,[sp, #0x10]
7102f1c624  strb wzr,[sp, #0x20]
7102f1c628  b 0x7102f1c36c
