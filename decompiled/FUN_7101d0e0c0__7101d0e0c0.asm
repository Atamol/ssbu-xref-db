// addr:      7101d0e0c0
// offset:    0x1d0e0c0
// name:      FUN_7101d0e0c0
// mangled:   
// size:      988

7101d0e0c0  sub sp,sp,#0xc0
7101d0e0c4  stp x28,x27,[sp, #0x60]
7101d0e0c8  stp x26,x25,[sp, #0x70]
7101d0e0cc  stp x24,x23,[sp, #0x80]
7101d0e0d0  stp x22,x21,[sp, #0x90]
7101d0e0d4  stp x20,x19,[sp, #0xa0]
7101d0e0d8  stp x29,x30,[sp, #0xb0]
7101d0e0dc  add x29,sp,#0xb0
7101d0e0e0  ldrb w9,[x0, #0x10c]
7101d0e0e4  ldr w8,[x0, #0x108]
7101d0e0e8  mov w19,w1
7101d0e0ec  mov x20,x0
7101d0e0f0  cbz w9,0x7101d0e124
7101d0e0f4  cmp w8,#0x1
7101d0e0f8  b.lt 0x7101d0e470
7101d0e0fc  mov w21,wzr
7101d0e100  ldr x0,[x20, #0x100]
7101d0e104  mov w1,wzr
7101d0e108  mov w2,w21
7101d0e10c  mov w3,wzr
7101d0e110  bl 0x7101d0f730
7101d0e114  ldr w8,[x20, #0x108]
7101d0e118  add w21,w21,#0x1
7101d0e11c  cmp w21,w8
7101d0e120  b.lt 0x7101d0e100
7101d0e124  cmp w8,#0x1
7101d0e128  b.lt 0x7101d0e470
7101d0e12c  add x8,x20,#0x180
7101d0e130  str x8,[sp, #0x8]
7101d0e134  add x8,sp,#0x18
7101d0e138  mov x22,xzr
7101d0e13c  mov w21,w19
7101d0e140  adrp x23,0x7104280000
7101d0e144  add x23,x23,#0xbda
7101d0e148  add x24,x8,#0x8
7101d0e14c  sxtw x9,w19
7101d0e150  add x28,x8,#0x9
7101d0e154  str x9,[sp, #0x10]
7101d0e158  mov w26,#0x89
7101d0e15c  cmp w22,#0x4
7101d0e160  b.cs 0x7101d0e490
7101d0e164  ldr x25,[x20, #0x100]
7101d0e168  lsl x8,x22,#0x20
7101d0e16c  add x8,x25,x8, ASR #0x1e
7101d0e170  ldr w2,[x25, #0x18]
7101d0e174  adrp x0,0x710424f000
7101d0e178  add x0,x0,#0x756
7101d0e17c  ldr w3,[x8, #0x28]
7101d0e180  add x8,sp,#0x18
7101d0e184  mov w1,w22
7101d0e188  bl 0x71003a4ca0
7101d0e18c  ldr x0,[x25, #0x10]
7101d0e190  mov x1,x24
7101d0e194  bl 0x7103778760
7101d0e198  ldr x27,[x20, #0x100]
7101d0e19c  cmp x22,x21
7101d0e1a0  b.ne 0x7101d0e2f0
7101d0e1a4  ldr w2,[x27, #0x1c]
7101d0e1a8  add x8,sp,#0x18
7101d0e1ac  mov x0,x23
7101d0e1b0  mov w1,w19
7101d0e1b4  bl 0x71003a4ca0
7101d0e1b8  ldr x0,[x27, #0x10]
7101d0e1bc  mov x1,x24
7101d0e1c0  bl 0x7103778760
7101d0e1c4  ldr x25,[x20, #0x100]
7101d0e1c8  ldr w2,[x25, #0x24]
7101d0e1cc  add x8,sp,#0x18
7101d0e1d0  adrp x0,0x7104270000
7101d0e1d4  add x0,x0,#0x11c
7101d0e1d8  mov w1,w19
7101d0e1dc  bl 0x71003a4ca0
7101d0e1e0  ldr x0,[x25, #0x10]
7101d0e1e4  mov x1,x24
7101d0e1e8  bl 0x7103778760
7101d0e1ec  cmp w19,#0x4
7101d0e1f0  b.cs 0x7101d0e490
7101d0e1f4  ldr x25,[x20, #0xf8]
7101d0e1f8  ldr x8,[sp, #0x10]
7101d0e1fc  add x8,x25,x8, LSL #0x2
7101d0e200  ldr w2,[x25, #0x18]
7101d0e204  adrp x0,0x710424f000
7101d0e208  add x0,x0,#0x756
7101d0e20c  ldr w3,[x8, #0x28]
7101d0e210  add x8,sp,#0x18
7101d0e214  mov w1,w19
7101d0e218  bl 0x71003a4ca0
7101d0e21c  ldr x0,[x25, #0x10]
7101d0e220  mov x1,x24
7101d0e224  bl 0x7103778760
7101d0e228  ldr x25,[x20, #0xf8]
7101d0e22c  ldr w2,[x25, #0x1c]
7101d0e230  add x8,sp,#0x18
7101d0e234  mov x0,x23
7101d0e238  mov w1,w19
7101d0e23c  bl 0x71003a4ca0
7101d0e240  ldr x0,[x25, #0x10]
7101d0e244  mov x1,x24
7101d0e248  bl 0x7103778760
7101d0e24c  ldp x8,x9,[x20, #0x180]
7101d0e250  sub x9,x9,x8
7101d0e254  asr x9,x9,#0x3
7101d0e258  cmp x9,x21
7101d0e25c  b.ls 0x7101d0e494
7101d0e260  ldr x25,[x8, x21, LSL #0x3]
7101d0e264  orr x8,xzr,#0x1800000000
7101d0e268  str x8,[sp, #0x18]
7101d0e26c  mov x8,#0x6661
7101d0e270  movk x8,#0x5f74, LSL #16
7101d0e274  movk x8,#0x6e61, LSL #32
7101d0e278  movk x8,#0x6d69, LSL #48
7101d0e27c  str x8,[sp, #0x20]
7101d0e280  mov x8,#0x5f65
7101d0e284  movk x8,#0x7270, LSL #16
7101d0e288  movk x8,#0x676f, LSL #32
7101d0e28c  movk x8,#0x6572, LSL #48
7101d0e290  str x8,[sp, #0x28]
7101d0e294  mov w8,#0x7373
7101d0e298  strh w8,[sp, #0x30]
7101d0e29c  mov w8,#0x615f
7101d0e2a0  movk w8,#0x696c, LSL #16
7101d0e2a4  stur w8,[sp, #0x32]
7101d0e2a8  mov w8,#0x6576
7101d0e2ac  strh w8,[sp, #0x36]
7101d0e2b0  mov x8,x28
7101d0e2b4  mov w10,#0x61
7101d0e2b8  mov w9,#0x9dc5
7101d0e2bc  movk w9,#0x811c, LSL #16
7101d0e2c0  strb wzr,[sp, #0x38]
7101d0e2c4  mul w9,w9,w26
7101d0e2c8  and w10,w10,#0xff
7101d0e2cc  eor w9,w9,w10
7101d0e2d0  ldrb w10,[x8], #0x1
7101d0e2d4  cbnz w10,0x7101d0e2c4
7101d0e2d8  str w9,[sp, #0x18]
7101d0e2dc  ldr x0,[x25, #0x8]
7101d0e2e0  mov x1,x24
7101d0e2e4  bl 0x7103778760
7101d0e2e8  strb wzr,[x25, #0x28]
7101d0e2ec  b 0x7101d0e460
7101d0e2f0  sxtw x25,w22
7101d0e2f4  add x8,x27,x25, LSL #0x2
7101d0e2f8  ldr w2,[x27, #0x18]
7101d0e2fc  adrp x0,0x71042b4000
7101d0e300  add x0,x0,#0x5a2
7101d0e304  ldr w3,[x8, #0x28]
7101d0e308  add x8,sp,#0x18
7101d0e30c  mov w1,w22
7101d0e310  bl 0x71003a4ca0
7101d0e314  ldr x0,[x27, #0x10]
7101d0e318  mov x1,x24
7101d0e31c  bl 0x7103778760
7101d0e320  ldr x8,[x20, #0x100]
7101d0e324  add x9,x8,x25
7101d0e328  mov w10,#0x1
7101d0e32c  strb w10,[x9, #0x48]
7101d0e330  ldrb w9,[x9, #0x4c]
7101d0e334  add x0,x8,#0x8
7101d0e338  cbz w9,0x7101d0e348
7101d0e33c  adrp x1,0x7104291000
7101d0e340  add x1,x1,#0xe70
7101d0e344  b 0x7101d0e350
7101d0e348  adrp x1,0x710424f000
7101d0e34c  add x1,x1,#0x76a
7101d0e350  mov w2,w22
7101d0e354  bl 0x7103778430
7101d0e358  ldr x27,[x20, #0xf8]
7101d0e35c  lsl x25,x25,#0x2
7101d0e360  add x8,x27,x25
7101d0e364  ldr w2,[x27, #0x18]
7101d0e368  adrp x0,0x710424f000
7101d0e36c  add x0,x0,#0x756
7101d0e370  ldr w3,[x8, #0x28]
7101d0e374  add x8,sp,#0x18
7101d0e378  mov w1,w22
7101d0e37c  bl 0x71003a4ca0
7101d0e380  ldr x0,[x27, #0x10]
7101d0e384  mov x1,x24
7101d0e388  bl 0x7103778760
7101d0e38c  ldr x27,[x20, #0xf8]
7101d0e390  add x8,x27,x25
7101d0e394  ldr w2,[x27, #0x18]
7101d0e398  ldr w3,[x8, #0x28]
7101d0e39c  add x8,sp,#0x18
7101d0e3a0  adrp x0,0x71042b4000
7101d0e3a4  add x0,x0,#0x5a2
7101d0e3a8  mov w1,w22
7101d0e3ac  bl 0x71003a4ca0
7101d0e3b0  ldr x0,[x27, #0x10]
7101d0e3b4  mov x1,x24
7101d0e3b8  bl 0x7103778760
7101d0e3bc  ldp x8,x9,[x20, #0x180]
7101d0e3c0  sub x9,x9,x8
7101d0e3c4  asr x9,x9,#0x3
7101d0e3c8  cmp x9,x22
7101d0e3cc  b.ls 0x7101d0e494
7101d0e3d0  ldr x25,[x8, x22, LSL #0x3]
7101d0e3d4  orr x8,xzr,#0x1800000000
7101d0e3d8  str x8,[sp, #0x18]
7101d0e3dc  mov x8,#0x6661
7101d0e3e0  movk x8,#0x5f74, LSL #16
7101d0e3e4  movk x8,#0x6e61, LSL #32
7101d0e3e8  movk x8,#0x6d69, LSL #48
7101d0e3ec  str x8,[sp, #0x20]
7101d0e3f0  mov x8,#0x5f65
7101d0e3f4  movk x8,#0x7270, LSL #16
7101d0e3f8  movk x8,#0x676f, LSL #32
7101d0e3fc  movk x8,#0x6572, LSL #48
7101d0e400  str x8,[sp, #0x28]
7101d0e404  mov w8,#0x7373
7101d0e408  strh w8,[sp, #0x30]
7101d0e40c  mov w8,#0x6c5f
7101d0e410  movk w8,#0x736f, LSL #16
7101d0e414  stur w8,[sp, #0x32]
7101d0e418  mov w8,#0x7265
7101d0e41c  strh w8,[sp, #0x36]
7101d0e420  mov x8,x28
7101d0e424  mov w10,#0x61
7101d0e428  mov w9,#0x9dc5
7101d0e42c  movk w9,#0x811c, LSL #16
7101d0e430  strb wzr,[sp, #0x38]
7101d0e434  mul w9,w9,w26
7101d0e438  and w10,w10,#0xff
7101d0e43c  eor w9,w9,w10
7101d0e440  ldrb w10,[x8], #0x1
7101d0e444  cbnz w10,0x7101d0e434
7101d0e448  str w9,[sp, #0x18]
7101d0e44c  ldr x0,[x25, #0x8]
7101d0e450  mov x1,x24
7101d0e454  bl 0x7103778760
7101d0e458  mov w8,#0x1
7101d0e45c  strb w8,[x25, #0x28]
7101d0e460  ldrsw x8,[x20, #0x108]
7101d0e464  add x22,x22,#0x1
7101d0e468  cmp x22,x8
7101d0e46c  b.lt 0x7101d0e15c
7101d0e470  ldp x29,x30,[sp, #0xb0]
7101d0e474  ldp x20,x19,[sp, #0xa0]
7101d0e478  ldp x22,x21,[sp, #0x90]
7101d0e47c  ldp x24,x23,[sp, #0x80]
7101d0e480  ldp x26,x25,[sp, #0x70]
7101d0e484  ldp x28,x27,[sp, #0x60]
7101d0e488  add sp,sp,#0xc0
7101d0e48c  ret
7101d0e490  bl 0x71039c2650
7101d0e494  ldr x0,[sp, #0x8]
7101d0e498  bl 0x71039c1330
