// addr:      71038cf2c0
// offset:    0x38cf2c0
// name:      FUN_71038cf2c0
// mangled:   
// size:      532

71038cf2c0  sub sp,sp,#0x70
71038cf2c4  str x27,[sp, #0x10]
71038cf2c8  stp x26,x25,[sp, #0x20]
71038cf2cc  stp x24,x23,[sp, #0x30]
71038cf2d0  stp x22,x21,[sp, #0x40]
71038cf2d4  stp x20,x19,[sp, #0x50]
71038cf2d8  stp x29,x30,[sp, #0x60]
71038cf2dc  add x29,sp,#0x60
71038cf2e0  ldr x9,[x1, #0x10]
71038cf2e4  orr x8,xzr,#0x3fffffffffffffff
71038cf2e8  sub x10,x8,x9
71038cf2ec  cmp x10,x3
71038cf2f0  b.cc 0x71038cf47c
71038cf2f4  cmp x9,x3
71038cf2f8  csel x11,x3,x9,cc
71038cf2fc  add x9,x11,x9
71038cf300  cmp x10,x11
71038cf304  ldr x21,[x2]
71038cf308  ldr x27,[x1]
71038cf30c  csel x26,x8,x9,cc
71038cf310  lsl x22,x26,#0x2
71038cf314  mov x20,x1
71038cf318  mov x19,x0
71038cf31c  add x0,sp,#0x8
71038cf320  mov w1,#0x10
71038cf324  mov x2,x22
71038cf328  mov x23,x3
71038cf32c  bl 0x710392e1f0
71038cf330  cmp w0,#0xc
71038cf334  b.ne 0x71038cf36c
71038cf338  adrp x8,0x710593d000
71038cf33c  ldr x0,[x8, #0x2b0]
71038cf340  cbz x0,0x71038cf36c
71038cf344  str x22,[sp, #0x18]
71038cf348  ldr x8,[x0]
71038cf34c  ldr x8,[x8, #0x30]
71038cf350  add x1,sp,#0x18
71038cf354  blr x8
71038cf358  tbz w0,#0x0,0x71038cf36c
71038cf35c  add x0,sp,#0x8
71038cf360  mov w1,#0x10
71038cf364  mov x2,x22
71038cf368  bl 0x710392e1f0
71038cf36c  adrp x8,0x71052a8000
71038cf370  ldr x8,[x8, #0xa78]
71038cf374  cbz x8,0x71038cf388
71038cf378  ldr x2,[sp, #0x8]
71038cf37c  mov w1,#0x10
71038cf380  mov x0,x22
71038cf384  bl 0x71039c19e0
71038cf388  ldr x22,[sp, #0x8]
71038cf38c  ldr x24,[x20]
71038cf390  cbz x24,0x71038cf3b4
71038cf394  subs x25,x21,x24
71038cf398  b.eq 0x71038cf3d0
71038cf39c  mov x0,x22
71038cf3a0  mov x1,x24
71038cf3a4  mov x2,x25
71038cf3a8  bl 0x71039c00a0
71038cf3ac  add x25,x22,x25
71038cf3b0  b 0x71038cf3d4
71038cf3b4  lsl x23,x23,#0x2
71038cf3b8  mov x0,x22
71038cf3bc  mov w1,wzr
71038cf3c0  mov x2,x23
71038cf3c4  bl 0x71039c02a0
71038cf3c8  add x23,x22,x23
71038cf3cc  b 0x71038cf43c
71038cf3d0  mov x25,x22
71038cf3d4  lsl x23,x23,#0x2
71038cf3d8  mov x0,x25
71038cf3dc  mov w1,wzr
71038cf3e0  mov x2,x23
71038cf3e4  bl 0x71039c02a0
71038cf3e8  ldr x8,[x20, #0x8]
71038cf3ec  add x8,x24,x8, LSL #0x2
71038cf3f0  add x23,x25,x23
71038cf3f4  subs x24,x8,x21
71038cf3f8  b.eq 0x71038cf410
71038cf3fc  mov x0,x23
71038cf400  mov x1,x21
71038cf404  mov x2,x24
71038cf408  bl 0x71039c00a0
71038cf40c  add x23,x23,x24
71038cf410  mov x8,x20
71038cf414  ldr x24,[x8], #0x18
71038cf418  cmp x24,x8
71038cf41c  b.eq 0x71038cf43c
71038cf420  adrp x8,0x71052a8000
71038cf424  ldr x8,[x8, #0xa70]
71038cf428  cbz x8,0x71038cf434
71038cf42c  mov x0,x24
71038cf430  bl 0x71039c19b0
71038cf434  mov x0,x24
71038cf438  bl 0x710392eb40
71038cf43c  sub x8,x21,x27
71038cf440  asr x8,x8,#0x2
71038cf444  sub x9,x23,x22
71038cf448  asr x9,x9,#0x2
71038cf44c  add x8,x22,x8, LSL #0x2
71038cf450  str x26,[x20, #0x10]
71038cf454  stp x22,x9,[x20]
71038cf458  ldr x27,[sp, #0x10]
71038cf45c  ldp x29,x30,[sp, #0x60]
71038cf460  str x8,[x19]
71038cf464  ldp x20,x19,[sp, #0x50]
71038cf468  ldp x22,x21,[sp, #0x40]
71038cf46c  ldp x24,x23,[sp, #0x30]
71038cf470  ldp x26,x25,[sp, #0x20]
71038cf474  add sp,sp,#0x70
71038cf478  ret
71038cf47c  mov w0,#0x10
71038cf480  bl 0x71039c6c40
71038cf484  mov x19,x0
71038cf488  adrp x1,0x7104359000
71038cf48c  add x1,x1,#0xf68
71038cf490  bl 0x71039c5f10
71038cf494  adrp x8,0x71052a8000
71038cf498  ldr x8,[x8, #0xbc0]
71038cf49c  add x8,x8,#0x10
71038cf4a0  str x8,[x19]
71038cf4a4  adrp x1,0x71052a8000
71038cf4a8  adrp x2,0x71052a8000
71038cf4ac  ldr x1,[x1, #0xbc8]
71038cf4b0  ldr x2,[x2, #0xbd0]
71038cf4b4  mov x0,x19
71038cf4b8  bl 0x71039c6c50
71038cf4bc  mov x20,x0
71038cf4c0  mov x0,x19
71038cf4c4  bl 0x71039c6c60
71038cf4c8  mov x0,x20
71038cf4cc  bl 0x71039c19f0
71038cf4d0  bl 0x71037b2bc0
