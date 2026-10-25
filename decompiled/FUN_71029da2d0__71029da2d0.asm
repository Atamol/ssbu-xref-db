// addr:      71029da2d0
// offset:    0x29da2d0
// name:      FUN_71029da2d0
// mangled:   
// size:      544

71029da2d0  sub sp,sp,#0x80
71029da2d4  str x23,[sp, #0x40]
71029da2d8  stp x22,x21,[sp, #0x50]
71029da2dc  stp x20,x19,[sp, #0x60]
71029da2e0  stp x29,x30,[sp, #0x70]
71029da2e4  add x29,sp,#0x70
71029da2e8  mov x23,x1
71029da2ec  mov x19,x0
71029da2f0  mov w0,#0x10
71029da2f4  mov w1,#0x20
71029da2f8  mov w21,w3
71029da2fc  mov x22,x2
71029da300  bl 0x710392e290
71029da304  mov x20,x0
71029da308  cbnz x0,0x71029da354
71029da30c  adrp x8,0x7105332000
71029da310  ldr x0,[x8, #0xf00]
71029da314  cbz x0,0x71029da350
71029da318  mov w8,#0x20
71029da31c  str wzr,[sp]
71029da320  mov x1,sp
71029da324  str x8,[sp, #0x20]
71029da328  ldr x8,[x0]
71029da32c  ldr x8,[x8, #0x30]
71029da330  add x2,sp,#0x20
71029da334  blr x8
71029da338  tbz w0,#0x0,0x71029da350
71029da33c  mov w0,#0x10
71029da340  mov w1,#0x20
71029da344  bl 0x710392e290
71029da348  mov x20,x0
71029da34c  cbnz x0,0x71029da354
71029da350  mov x20,xzr
71029da354  stp x23,x22,[x20]
71029da358  mov w22,#0xffffffff
71029da35c  adrp x2,0x71042a1000
71029da360  add x2,x2,#0x195
71029da364  add x0,sp,#0x20
71029da368  mov w1,#0x20
71029da36c  mov w3,w21
71029da370  str xzr,[x20, #0x10]
71029da374  str w22,[x20, #0x18]
71029da378  stp xzr,xzr,[sp, #0x30]
71029da37c  stp xzr,xzr,[sp, #0x20]
71029da380  bl 0x71039c04d0
71029da384  ldr x8,[x20, #0x8]
71029da388  cbz x8,0x71029da3e4
71029da38c  ldr x8,[x8, #0xd8]
71029da390  cbz x8,0x71029da3e0
71029da394  ldr x8,[x8, #0x8]
71029da398  mov w9,wzr
71029da39c  add x10,sp,#0x20
71029da3a0  ldrb w11,[x10, w9, UXTW ]
71029da3a4  add w9,w9,#0x1
71029da3a8  cbnz w11,0x71029da3a0
71029da3ac  ldrb w9,[sp, #0x20]
71029da3b0  cbz w9,0x71029da3c4
71029da3b4  add x9,sp,#0x20
71029da3b8  orr x9,x9,#0x1
71029da3bc  ldrb w10,[x9], #0x1
71029da3c0  cbnz w10,0x71029da3bc
71029da3c4  ldr x0,[x8, #0x8]
71029da3c8  ldr x8,[x0]
71029da3cc  ldr x8,[x8, #0x18]
71029da3d0  add x1,sp,#0x20
71029da3d4  blr x8
71029da3d8  mov w22,w0
71029da3dc  b 0x71029da3e4
71029da3e0  mov w22,#0xffffffff
71029da3e4  adrp x2,0x7104348000
71029da3e8  add x2,x2,#0x380
71029da3ec  mov x0,sp
71029da3f0  mov w1,#0x20
71029da3f4  mov w3,w21
71029da3f8  str w22,[x20, #0x18]
71029da3fc  stp xzr,xzr,[sp, #0x10]
71029da400  mov x22,sp
71029da404  stp xzr,xzr,[sp]
71029da408  bl 0x71039c04d0
71029da40c  ldr x8,[x20]
71029da410  ldr x8,[x8, #0x300]
71029da414  ldr x9,[x8, #0x18]
71029da418  ldp x8,x9,[x9]
71029da41c  cmp x8,x9
71029da420  b.eq 0x71029da4d4
71029da424  ldrb w10,[sp]
71029da428  orr x11,x22,#0x1
71029da42c  mov w12,#0xffffffff
71029da430  orr x13,xzr,#0x100000000
71029da434  adrp x14,0x7104754000
71029da438  add x14,x14,#0x84
71029da43c  ldr x15,[x8]
71029da440  cbz w10,0x71029da490
71029da444  mov x16,xzr
71029da448  mov x17,x11
71029da44c  mov w0,w10
71029da450  mov w18,w12
71029da454  and w0,w0,#0xff
71029da458  sub w1,w0,#0x41
71029da45c  add w2,w0,#0x20
71029da460  cmp w1,#0x1a
71029da464  csel w0,w2,w0,cc
71029da468  eor w0,w0,w18
71029da46c  and w0,w0,#0xff
71029da470  ldr w0,[x14, w0, UXTW #0x2]
71029da474  eor w18,w0,w18, LSR #0x8
71029da478  ldrb w0,[x17], #0x1
71029da47c  add x16,x16,x13
71029da480  cbnz w0,0x71029da454
71029da484  mvn w17,w18
71029da488  and x16,x16,#0xff00000000
71029da48c  b 0x71029da498
71029da490  mov x17,xzr
71029da494  mov x16,xzr
71029da498  orr x16,x16,x17
71029da49c  ldr x17,[x15, #0x98]
71029da4a0  and x17,x17,#0xffffffffff
71029da4a4  cmp x17,x16
71029da4a8  b.eq 0x71029da4bc
71029da4ac  add x8,x8,#0x8
71029da4b0  cmp x8,x9
71029da4b4  b.ne 0x71029da43c
71029da4b8  b 0x71029da4d4
71029da4bc  ldr x8,[x15, #0x110]
71029da4c0  cbz x8,0x71029da4d4
71029da4c4  ldp x9,x10,[x8]
71029da4c8  cmp x9,x10
71029da4cc  b.eq 0x71029da4d4
71029da4d0  str x8,[x20, #0x10]
71029da4d4  str x20,[x19]
71029da4d8  ldp x29,x30,[sp, #0x70]
71029da4dc  ldp x20,x19,[sp, #0x60]
71029da4e0  ldr x23,[sp, #0x40]
71029da4e4  ldp x22,x21,[sp, #0x50]
71029da4e8  add sp,sp,#0x80
71029da4ec  ret
