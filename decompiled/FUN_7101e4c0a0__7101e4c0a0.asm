// addr:      7101e4c0a0
// offset:    0x1e4c0a0
// name:      FUN_7101e4c0a0
// mangled:   
// size:      1112

7101e4c0a0  stp d9,d8,[sp, #-0x70]!
7101e4c0a4  stp x28,x27,[sp, #0x10]
7101e4c0a8  stp x26,x25,[sp, #0x20]
7101e4c0ac  stp x24,x23,[sp, #0x30]
7101e4c0b0  stp x22,x21,[sp, #0x40]
7101e4c0b4  stp x20,x19,[sp, #0x50]
7101e4c0b8  stp x29,x30,[sp, #0x60]
7101e4c0bc  add x29,sp,#0x60
7101e4c0c0  ldr x8,[x0, #0x250]
7101e4c0c4  ldr x8,[x8]
7101e4c0c8  ldr x8,[x8, #0x8]
7101e4c0cc  ldrb w9,[x8, #0x388]
7101e4c0d0  cbz w9,0x7101e4c22c
7101e4c0d4  ldr x8,[x8]
7101e4c0d8  cmp x8,#0x0
7101e4c0dc  and w9,w1,#0xff
7101e4c0e0  mov w19,w1
7101e4c0e4  ccmp w9,#0x3,#0x2,ne
7101e4c0e8  b.hi 0x7101e4c22c
7101e4c0ec  and x23,x19,#0xff
7101e4c0f0  mov w9,#0x1d8
7101e4c0f4  madd x9,x23,x9,x8
7101e4c0f8  cbz x9,0x7101e4c22c
7101e4c0fc  ldrh w3,[x9]
7101e4c100  orr w9,wzr,#0xffff
7101e4c104  mov x20,x0
7101e4c108  add x21,x0,#0x1a8
7101e4c10c  cmp w3,w9
7101e4c110  b.eq 0x7101e4c1ac
7101e4c114  mov w9,#0x1d8
7101e4c118  mul x22,x23,x9
7101e4c11c  add x8,x8,x22
7101e4c120  ldrb w4,[x8, #0x2]
7101e4c124  add x2,x20,#0x1f8
7101e4c128  mov x0,x21
7101e4c12c  mov w1,w19
7101e4c130  bl 0x7101e957e0
7101e4c134  ldr x24,[x20, #0x220]
7101e4c138  adrp x27,0x7105329000
7101e4c13c  ldr x8,[x27, #0xf98]
7101e4c140  ldr x25,[x24, #0x8]
7101e4c144  ldr x9,[x8]
7101e4c148  add x28,x25,x22
7101e4c14c  ldrh w8,[x28]
7101e4c150  ldr x9,[x9, #0x30]
7101e4c154  ubfx x10,x8,#0x4,#0x1c
7101e4c158  cmp w10,#0x177
7101e4c15c  b.cc 0x7101e4c250
7101e4c160  mov w10,#0xffffe890
7101e4c164  add w10,w8,w10
7101e4c168  adrp x8,0x710532a000
7101e4c16c  add x8,x8,#0x878
7101e4c170  and w11,w10,#0xffff
7101e4c174  cmp w11,#0x63
7101e4c178  b.hi 0x7101e4c264
7101e4c17c  and x10,x10,#0xffff
7101e4c180  mov w11,#0x50
7101e4c184  madd x9,x10,x11,x9
7101e4c188  mov w11,#0x8cc8
7101e4c18c  movk w11,#0x8, LSL #16
7101e4c190  mov w10,#0x8cc0
7101e4c194  movk w10,#0x8, LSL #16
7101e4c198  ldrsh w11,[x9, x11, LSL #0x0]
7101e4c19c  add x9,x9,x10
7101e4c1a0  cmn w11,#0x1
7101e4c1a4  csel x8,x8,x9,eq
7101e4c1a8  b 0x7101e4c264
7101e4c1ac  ldrb w8,[x20, #0x1b2]
7101e4c1b0  cbz w8,0x7101e4c1dc
7101e4c1b4  ldr x8,[x21]
7101e4c1b8  add x8,x8,x23, LSL #0x3
7101e4c1bc  ldr x22,[x8, #0x48]
7101e4c1c0  cbz x22,0x7101e4c1dc
7101e4c1c4  ldr x0,[x22, #0x8]
7101e4c1c8  fmov s0,0x3f800000
7101e4c1cc  adrp x1,0x710438d000
7101e4c1d0  add x1,x1,#0x258
7101e4c1d4  bl 0x7103778300
7101e4c1d8  strb wzr,[x22, #0xb1]
7101e4c1dc  mov x0,x21
7101e4c1e0  mov w1,w19
7101e4c1e4  bl 0x7101e9b720
7101e4c1e8  add x19,x20,x23, LSL #0x2
7101e4c1ec  orr w20,wzr,#0xffff
7101e4c1f0  ldrh w2,[x19, #0x1fc]
7101e4c1f4  cmp x2,x20
7101e4c1f8  b.eq 0x7101e4c22c
7101e4c1fc  adrp x8,0x7105329000
7101e4c200  ldr x8,[x8, #0xf98]
7101e4c204  ldr x8,[x8]
7101e4c208  ldr x0,[x8, #0x20]
7101e4c20c  ldrb w1,[x19, #0x1fe]
7101e4c210  mov w3,wzr
7101e4c214  add x21,x19,#0x1fc
7101e4c218  bl 0x710259c720
7101e4c21c  mov w0,wzr
7101e4c220  strh w20,[x21]
7101e4c224  strb wzr,[x19, #0x1fe]
7101e4c228  b 0x7101e4c230
7101e4c22c  mov w0,wzr
7101e4c230  ldp x29,x30,[sp, #0x60]
7101e4c234  ldp x20,x19,[sp, #0x50]
7101e4c238  ldp x22,x21,[sp, #0x40]
7101e4c23c  ldp x24,x23,[sp, #0x30]
7101e4c240  ldp x26,x25,[sp, #0x20]
7101e4c244  ldp x28,x27,[sp, #0x10]
7101e4c248  ldp d9,d8,[sp], #0x70
7101e4c24c  ret
7101e4c250  mov w10,#0x50
7101e4c254  madd x8,x8,x10,x9
7101e4c258  mov w9,#0x1940
7101e4c25c  movk w9,#0x1, LSL #16
7101e4c260  add x8,x8,x9
7101e4c264  ldr s0,[x8, #0xc]
7101e4c268  ucvtf s8,s0
7101e4c26c  ldrsh w9,[x8, #0x8]
7101e4c270  ldr x20,[x24]
7101e4c274  and x21,x9,#0xffff
7101e4c278  adrp x26,0x710532f000
7101e4c27c  mov w22,#0x1
7101e4c280  cmn w9,#0x1
7101e4c284  b.eq 0x7101e4c304
7101e4c288  cmp w9,#0x7cf
7101e4c28c  b.gt 0x7101e4c304
7101e4c290  ldr x8,[x26, #0x730]
7101e4c294  ldr x8,[x8, #0x8]
7101e4c298  ldr x10,[x8, #0x1d8]
7101e4c29c  add x8,x10,w21, SXTH  #0x1
7101e4c2a0  ldp x9,x10,[x10, #0x20]
7101e4c2a4  sub x10,x10,x9
7101e4c2a8  orr x11,xzr,#-0x3333333333333334
7101e4c2ac  movk x11,#0xcccd
7101e4c2b0  ldrh w8,[x8, #0x60]
7101e4c2b4  asr x10,x10,#0x6
7101e4c2b8  mul x10,x10,x11
7101e4c2bc  cmp w10,w8
7101e4c2c0  b.ls 0x7101e4c300
7101e4c2c4  mov w11,#0x140
7101e4c2c8  madd x9,x8,x11,x9
7101e4c2cc  adrp x11,0x7105182000
7101e4c2d0  add x11,x11,#0xb08
7101e4c2d4  fcvtzu w0,s8
7101e4c2d8  cmp x10,x8
7101e4c2dc  csel x8,x9,x11,hi
7101e4c2e0  ldr s0,[x8, #0x74]
7101e4c2e4  ldr w1,[x8, #0x70]
7101e4c2e8  bl 0x71025c9ac0
7101e4c2ec  mov w22,w0
7101e4c2f0  cmp w0,#0x61
7101e4c2f4  b.ls 0x7101e4c304
7101e4c2f8  mov w22,#0x62
7101e4c2fc  b 0x7101e4c304
7101e4c300  mov w22,#0x1
7101e4c304  mov x0,x21
7101e4c308  mov w1,w22
7101e4c30c  bl 0x71025c9e50
7101e4c310  ucvtf s9,w0
7101e4c314  add w1,w22,#0x1
7101e4c318  mov x0,x21
7101e4c31c  bl 0x71025c9e50
7101e4c320  ucvtf s0,w0
7101e4c324  fcmp s9,s0
7101e4c328  b.ge 0x7101e4c4d0
7101e4c32c  ldrb w8,[x20, #0x8]
7101e4c330  cmp w8,w19, UXTB 
7101e4c334  b.ls 0x7101e4c4d0
7101e4c338  fsub s1,s8,s9
7101e4c33c  fsub s0,s0,s9
7101e4c340  fdiv s0,s1,s0
7101e4c344  cmp w22,#0x61
7101e4c348  cset w2,hi
7101e4c34c  mov x0,x20
7101e4c350  mov w1,w19
7101e4c354  bl 0x7101e9c280
7101e4c358  tbz w0,#0x0,0x7101e4c4d0
7101e4c35c  ldrh w9,[x28]
7101e4c360  orr w8,wzr,#0xffff
7101e4c364  cmp x9,x8
7101e4c368  orr w10,wzr,#0xffff
7101e4c36c  b.eq 0x7101e4c3ec
7101e4c370  ldr x10,[x27, #0xf98]
7101e4c374  ldr x10,[x10]
7101e4c378  ldr x10,[x10, #0x30]
7101e4c37c  ubfx x11,x9,#0x4,#0x1c
7101e4c380  cmp w11,#0x177
7101e4c384  b.cc 0x7101e4c3d4
7101e4c388  mov w11,#0xffffe890
7101e4c38c  add w11,w9,w11
7101e4c390  adrp x9,0x710532a000
7101e4c394  add x9,x9,#0x878
7101e4c398  and w12,w11,#0xffff
7101e4c39c  cmp w12,#0x63
7101e4c3a0  b.hi 0x7101e4c3e8
7101e4c3a4  and x11,x11,#0xffff
7101e4c3a8  mov w12,#0x50
7101e4c3ac  madd x10,x11,x12,x10
7101e4c3b0  mov w12,#0x8cc8
7101e4c3b4  movk w12,#0x8, LSL #16
7101e4c3b8  mov w11,#0x8cc0
7101e4c3bc  movk w11,#0x8, LSL #16
7101e4c3c0  ldrsh w12,[x10, x12, LSL #0x0]
7101e4c3c4  add x10,x10,x11
7101e4c3c8  cmn w12,#0x1
7101e4c3cc  csel x9,x9,x10,eq
7101e4c3d0  b 0x7101e4c3e8
7101e4c3d4  mov w11,#0x50
7101e4c3d8  madd x9,x9,x11,x10
7101e4c3dc  mov w10,#0x1940
7101e4c3e0  movk w10,#0x1, LSL #16
7101e4c3e4  add x9,x9,x10
7101e4c3e8  ldrh w10,[x9, #0x8]
7101e4c3ec  cmp w10,w8
7101e4c3f0  b.eq 0x7101e4c4d0
7101e4c3f4  sxth w8,w10
7101e4c3f8  cmp w8,#0x7cf
7101e4c3fc  b.gt 0x7101e4c4d0
7101e4c400  ldr x8,[x26, #0x730]
7101e4c404  ldr x8,[x8, #0x8]
7101e4c408  ldr x9,[x8, #0x1d8]
7101e4c40c  lsl x8,x10,#0x30
7101e4c410  add x8,x9,x8, ASR #0x2f
7101e4c414  ldrh w10,[x8, #0x60]
7101e4c418  ldp x8,x11,[x9, #0x20]
7101e4c41c  sub x11,x11,x8
7101e4c420  lsr x11,x11,#0x6
7101e4c424  mov w12,#0xcccd
7101e4c428  movk w12,#0xcccc, LSL #16
7101e4c42c  mul w11,w11,w12
7101e4c430  cmp w11,w10
7101e4c434  b.ls 0x7101e4c4d0
7101e4c438  add x9,x9,x10, LSL #0x1
7101e4c43c  ldrh w9,[x9, #0x1000]
7101e4c440  cmp w11,w9
7101e4c444  b.ls 0x7101e4c4d0
7101e4c448  mov w10,#0x140
7101e4c44c  mul x9,x9,x10
7101e4c450  ldrsh w8,[x8, x9, LSL #0x0]
7101e4c454  cmn w8,#0x1
7101e4c458  b.eq 0x7101e4c4d0
7101e4c45c  ldr x8,[x24]
7101e4c460  ldr x8,[x8]
7101e4c464  add x8,x8,x23, LSL #0x3
7101e4c468  ldr x20,[x8, #0x48]
7101e4c46c  cbz x20,0x7101e4c4d0
7101e4c470  ldrb w8,[x20, #0xb4]
7101e4c474  cbnz w8,0x7101e4c4c8
7101e4c478  ldr x0,[x20, #0x8]
7101e4c47c  fmov s0,0x3f800000
7101e4c480  mov x19,#0x1eaf
7101e4c484  movk x19,#0xd1b, LSL #16
7101e4c488  adrp x1,0x71042f8000
7101e4c48c  add x1,x1,#0xa52
7101e4c490  movk x19,#0x1d, LSL #32
7101e4c494  bl 0x7103778300
7101e4c498  adrp x21,0x710532f000
7101e4c49c  ldr x8,[x21, #0x8d0]
7101e4c4a0  ldr x0,[x8, #0x8]
7101e4c4a4  mov w2,#0xa
7101e4c4a8  mov x1,x19
7101e4c4ac  bl 0x7103313f20
7101e4c4b0  tbz w0,#0x0,0x7101e4c4c8
7101e4c4b4  ldr x8,[x21, #0x8d0]
7101e4c4b8  ldr x0,[x8, #0x8]
7101e4c4bc  mov w2,#0x50
7101e4c4c0  mov x1,x19
7101e4c4c4  bl 0x7103314c70
7101e4c4c8  mov w8,#0x1
7101e4c4cc  strb w8,[x20, #0xb4]
7101e4c4d0  mov w8,#0x1d8
7101e4c4d4  madd x8,x23,x8,x25
7101e4c4d8  ldr s0,[x8, #0x1d0]
7101e4c4dc  add x8,x24,x23, LSL #0x4
7101e4c4e0  ucvtf s0,s0
7101e4c4e4  mov w9,#0x3b
7101e4c4e8  mov w0,#0x1
7101e4c4ec  stp s0,s0,[x8, #0x68]
7101e4c4f0  str w9,[x8, #0x74]
7101e4c4f4  b 0x7101e4c230
