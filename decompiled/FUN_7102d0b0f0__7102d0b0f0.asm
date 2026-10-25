// addr:      7102d0b0f0
// offset:    0x2d0b0f0
// name:      FUN_7102d0b0f0
// mangled:   
// size:      2096

7102d0b0f0  sub sp,sp,#0x80
7102d0b0f4  str d8,[sp, #0x30]
7102d0b0f8  str x25,[sp, #0x38]
7102d0b0fc  stp x24,x23,[sp, #0x40]
7102d0b100  stp x22,x21,[sp, #0x50]
7102d0b104  stp x20,x19,[sp, #0x60]
7102d0b108  stp x29,x30,[sp, #0x70]
7102d0b10c  add x29,sp,#0x70
7102d0b110  ldrb w8,[x0, #0x18]
7102d0b114  cbz w8,0x7102d0b1d0
7102d0b118  mov w19,w2
7102d0b11c  cmp w2,#0x8
7102d0b120  b.cs 0x7102d0b91c
7102d0b124  adrp x23,0x71052b9000
7102d0b128  ldr x8,[x23, #0x4f8]
7102d0b12c  ldr x8,[x8]
7102d0b130  add x8,x8,w19, SXTW  #0x3
7102d0b134  ldr x20,[x8, #0x20]
7102d0b138  cbz x20,0x7102d0b1d0
7102d0b13c  mov w8,#0x5918
7102d0b140  add x24,x20,x8
7102d0b144  ldrb w8,[x24, #0x8]
7102d0b148  cmp w8,#0x6
7102d0b14c  b.ne 0x7102d0b1d0
7102d0b150  ldrb w8,[x24]
7102d0b154  ldr x9,[x20, #0x4150]
7102d0b158  mov w22,w1
7102d0b15c  mov x21,x0
7102d0b160  cmp x9,x8
7102d0b164  b.ls 0x7102d0b198
7102d0b168  add x25,x20,x8, LSL #0x3
7102d0b16c  ldr x0,[x25, #0x4160]
7102d0b170  cbz x0,0x7102d0b198
7102d0b174  ldr x8,[x0]
7102d0b178  ldr x8,[x8, #0x518]
7102d0b17c  blr x8
7102d0b180  tbz w0,#0x0,0x7102d0b198
7102d0b184  mov w8,#0x4160
7102d0b188  add x8,x25,x8
7102d0b18c  ldr x1,[x8]
7102d0b190  add x0,sp,#0x8
7102d0b194  b 0x7102d0b1a0
7102d0b198  add x0,sp,#0x8
7102d0b19c  mov x1,xzr
7102d0b1a0  bl 0x71003a9ab0
7102d0b1a4  ldr x8,[sp, #0x10]
7102d0b1a8  ldrb w9,[x8, #0x3a]
7102d0b1ac  cmp w9,#0x4
7102d0b1b0  b.cc 0x7102d0b1d0
7102d0b1b4  ldr x8,[x8, #0x20]
7102d0b1b8  ldr x0,[x8, #0x40]
7102d0b1bc  ldr x8,[x0]
7102d0b1c0  ldr x8,[x8, #0x168]
7102d0b1c4  blr x8
7102d0b1c8  cmp w0,#0x5
7102d0b1cc  b.ne 0x7102d0b1f0
7102d0b1d0  ldr d8,[sp, #0x30]
7102d0b1d4  ldp x29,x30,[sp, #0x70]
7102d0b1d8  ldp x20,x19,[sp, #0x60]
7102d0b1dc  ldr x25,[sp, #0x38]
7102d0b1e0  ldp x22,x21,[sp, #0x50]
7102d0b1e4  ldp x24,x23,[sp, #0x40]
7102d0b1e8  add sp,sp,#0x80
7102d0b1ec  ret
7102d0b1f0  sub w8,w22,#0x1
7102d0b1f4  cmp w8,#0x5
7102d0b1f8  b.hi 0x7102d0b1d0
7102d0b1fc  adrp x9,0x710451a000
7102d0b200  add x9,x9,#0xc04
7102d0b204  ldrsw x8,[x9, x8, LSL #0x2]
7102d0b208  add x8,x8,x9
7102d0b20c  br x8
7102d0b210  ldr x23,[x20, #0x4150]
7102d0b214  cbz x23,0x7102d0b1d0
7102d0b218  ldr x9,[x21, #0x7b0]
7102d0b21c  sub w10,w22,#0x5
7102d0b220  mov w22,#0x4160
7102d0b224  ldr s0,[x9,w10, sxtw #2]
7102d0b228  fneg s8,s0
7102d0b22c  mov x19,#0x7a80
7102d0b230  movk x19,#0xfb99, LSL #16
7102d0b234  mov x8,xzr
7102d0b238  mov w21,#0x1
7102d0b23c  movk x19,#0x7, LSL #32
7102d0b240  add x24,x20,x8, LSL #0x3
7102d0b244  ldr x0,[x24, #0x4160]
7102d0b248  cbz x0,0x7102d0b278
7102d0b24c  ldr x8,[x0]
7102d0b250  ldr x8,[x8, #0x518]
7102d0b254  blr x8
7102d0b258  tbz w0,#0x0,0x7102d0b278
7102d0b25c  add x8,x24,x22
7102d0b260  ldr x0,[x8]
7102d0b264  mov v0.16B,v8.16B
7102d0b268  mov w1,#0x1
7102d0b26c  mov w2,wzr
7102d0b270  mov x3,x19
7102d0b274  bl 0x71006645d0
7102d0b278  mov w8,w21
7102d0b27c  add w21,w21,#0x1
7102d0b280  cmp x23,x8
7102d0b284  b.hi 0x7102d0b240
7102d0b288  b 0x7102d0b1d0
7102d0b28c  ldrb w8,[x24, #0x8]
7102d0b290  cmp w8,#0x6
7102d0b294  b.ne 0x7102d0b1d0
7102d0b298  mov w8,#0x591f
7102d0b29c  ldrb w8,[x20, x8, LSL ]
7102d0b2a0  tbnz w8,#0x1,0x7102d0b7c4
7102d0b2a4  ldrb w8,[x24]
7102d0b2a8  add x8,x20,x8, LSL #0x3
7102d0b2ac  ldr x0,[x8, #0x4160]
7102d0b2b0  mov w2,#0xffffffff
7102d0b2b4  mov w1,#0x1
7102d0b2b8  mov w3,#0x1
7102d0b2bc  b 0x7102d0b7f0
7102d0b2c0  ldr x8,[x23, #0x4f8]
7102d0b2c4  ldr x22,[x8]
7102d0b2c8  ldrsh w20,[x21, #0x7a0]
7102d0b2cc  ldrsh w21,[x21, #0x7a2]
7102d0b2d0  ldr x23,[x22, #0x20]
7102d0b2d4  cbz x23,0x7102d0b33c
7102d0b2d8  ldr w8,[x23, #0xe0]
7102d0b2dc  cmp w8,w19
7102d0b2e0  b.eq 0x7102d0b33c
7102d0b2e4  mov w8,#0x5920
7102d0b2e8  ldrb w8,[x23, x8, LSL ]
7102d0b2ec  cmp w8,#0x6
7102d0b2f0  b.ne 0x7102d0b33c
7102d0b2f4  mov w8,#0x5918
7102d0b2f8  ldrb w8,[x23, x8, LSL ]
7102d0b2fc  add x8,x23,x8, LSL #0x3
7102d0b300  ldr x0,[x8, #0x4160]
7102d0b304  mov w1,#0x1
7102d0b308  mov w2,w20
7102d0b30c  mov w3,w21
7102d0b310  mov w4,wzr
7102d0b314  bl 0x7100649540
7102d0b318  mov w8,#0x591f
7102d0b31c  ldrb w8,[x23, x8, LSL ]
7102d0b320  tbz w8,#0x1,0x7102d0b33c
7102d0b324  ldr x0,[x23, #0x4168]
7102d0b328  mov w1,#0x1
7102d0b32c  mov w2,w20
7102d0b330  mov w3,w21
7102d0b334  mov w4,wzr
7102d0b338  bl 0x7100649540
7102d0b33c  ldr x23,[x22, #0x28]
7102d0b340  cbz x23,0x7102d0b3a8
7102d0b344  ldr w8,[x23, #0xe0]
7102d0b348  cmp w8,w19
7102d0b34c  b.eq 0x7102d0b3a8
7102d0b350  mov w8,#0x5920
7102d0b354  ldrb w8,[x23, x8, LSL ]
7102d0b358  cmp w8,#0x6
7102d0b35c  b.ne 0x7102d0b3a8
7102d0b360  mov w8,#0x5918
7102d0b364  ldrb w8,[x23, x8, LSL ]
7102d0b368  add x8,x23,x8, LSL #0x3
7102d0b36c  ldr x0,[x8, #0x4160]
7102d0b370  mov w1,#0x1
7102d0b374  mov w2,w20
7102d0b378  mov w3,w21
7102d0b37c  mov w4,wzr
7102d0b380  bl 0x7100649540
7102d0b384  mov w8,#0x591f
7102d0b388  ldrb w8,[x23, x8, LSL ]
7102d0b38c  tbz w8,#0x1,0x7102d0b3a8
7102d0b390  ldr x0,[x23, #0x4168]
7102d0b394  mov w1,#0x1
7102d0b398  mov w2,w20
7102d0b39c  mov w3,w21
7102d0b3a0  mov w4,wzr
7102d0b3a4  bl 0x7100649540
7102d0b3a8  ldr x23,[x22, #0x30]
7102d0b3ac  cbz x23,0x7102d0b414
7102d0b3b0  ldr w8,[x23, #0xe0]
7102d0b3b4  cmp w8,w19
7102d0b3b8  b.eq 0x7102d0b414
7102d0b3bc  mov w8,#0x5920
7102d0b3c0  ldrb w8,[x23, x8, LSL ]
7102d0b3c4  cmp w8,#0x6
7102d0b3c8  b.ne 0x7102d0b414
7102d0b3cc  mov w8,#0x5918
7102d0b3d0  ldrb w8,[x23, x8, LSL ]
7102d0b3d4  add x8,x23,x8, LSL #0x3
7102d0b3d8  ldr x0,[x8, #0x4160]
7102d0b3dc  mov w1,#0x1
7102d0b3e0  mov w2,w20
7102d0b3e4  mov w3,w21
7102d0b3e8  mov w4,wzr
7102d0b3ec  bl 0x7100649540
7102d0b3f0  mov w8,#0x591f
7102d0b3f4  ldrb w8,[x23, x8, LSL ]
7102d0b3f8  tbz w8,#0x1,0x7102d0b414
7102d0b3fc  ldr x0,[x23, #0x4168]
7102d0b400  mov w1,#0x1
7102d0b404  mov w2,w20
7102d0b408  mov w3,w21
7102d0b40c  mov w4,wzr
7102d0b410  bl 0x7100649540
7102d0b414  ldr x23,[x22, #0x38]
7102d0b418  cbz x23,0x7102d0b480
7102d0b41c  ldr w8,[x23, #0xe0]
7102d0b420  cmp w8,w19
7102d0b424  b.eq 0x7102d0b480
7102d0b428  mov w8,#0x5920
7102d0b42c  ldrb w8,[x23, x8, LSL ]
7102d0b430  cmp w8,#0x6
7102d0b434  b.ne 0x7102d0b480
7102d0b438  mov w8,#0x5918
7102d0b43c  ldrb w8,[x23, x8, LSL ]
7102d0b440  add x8,x23,x8, LSL #0x3
7102d0b444  ldr x0,[x8, #0x4160]
7102d0b448  mov w1,#0x1
7102d0b44c  mov w2,w20
7102d0b450  mov w3,w21
7102d0b454  mov w4,wzr
7102d0b458  bl 0x7100649540
7102d0b45c  mov w8,#0x591f
7102d0b460  ldrb w8,[x23, x8, LSL ]
7102d0b464  tbz w8,#0x1,0x7102d0b480
7102d0b468  ldr x0,[x23, #0x4168]
7102d0b46c  mov w1,#0x1
7102d0b470  mov w2,w20
7102d0b474  mov w3,w21
7102d0b478  mov w4,wzr
7102d0b47c  bl 0x7100649540
7102d0b480  ldr x23,[x22, #0x40]
7102d0b484  cbz x23,0x7102d0b4ec
7102d0b488  ldr w8,[x23, #0xe0]
7102d0b48c  cmp w8,w19
7102d0b490  b.eq 0x7102d0b4ec
7102d0b494  mov w8,#0x5920
7102d0b498  ldrb w8,[x23, x8, LSL ]
7102d0b49c  cmp w8,#0x6
7102d0b4a0  b.ne 0x7102d0b4ec
7102d0b4a4  mov w8,#0x5918
7102d0b4a8  ldrb w8,[x23, x8, LSL ]
7102d0b4ac  add x8,x23,x8, LSL #0x3
7102d0b4b0  ldr x0,[x8, #0x4160]
7102d0b4b4  mov w1,#0x1
7102d0b4b8  mov w2,w20
7102d0b4bc  mov w3,w21
7102d0b4c0  mov w4,wzr
7102d0b4c4  bl 0x7100649540
7102d0b4c8  mov w8,#0x591f
7102d0b4cc  ldrb w8,[x23, x8, LSL ]
7102d0b4d0  tbz w8,#0x1,0x7102d0b4ec
7102d0b4d4  ldr x0,[x23, #0x4168]
7102d0b4d8  mov w1,#0x1
7102d0b4dc  mov w2,w20
7102d0b4e0  mov w3,w21
7102d0b4e4  mov w4,wzr
7102d0b4e8  bl 0x7100649540
7102d0b4ec  ldr x23,[x22, #0x48]
7102d0b4f0  cbz x23,0x7102d0b558
7102d0b4f4  ldr w8,[x23, #0xe0]
7102d0b4f8  cmp w8,w19
7102d0b4fc  b.eq 0x7102d0b558
7102d0b500  mov w8,#0x5920
7102d0b504  ldrb w8,[x23, x8, LSL ]
7102d0b508  cmp w8,#0x6
7102d0b50c  b.ne 0x7102d0b558
7102d0b510  mov w8,#0x5918
7102d0b514  ldrb w8,[x23, x8, LSL ]
7102d0b518  add x8,x23,x8, LSL #0x3
7102d0b51c  ldr x0,[x8, #0x4160]
7102d0b520  mov w1,#0x1
7102d0b524  mov w2,w20
7102d0b528  mov w3,w21
7102d0b52c  mov w4,wzr
7102d0b530  bl 0x7100649540
7102d0b534  mov w8,#0x591f
7102d0b538  ldrb w8,[x23, x8, LSL ]
7102d0b53c  tbz w8,#0x1,0x7102d0b558
7102d0b540  ldr x0,[x23, #0x4168]
7102d0b544  mov w1,#0x1
7102d0b548  mov w2,w20
7102d0b54c  mov w3,w21
7102d0b550  mov w4,wzr
7102d0b554  bl 0x7100649540
7102d0b558  ldr x23,[x22, #0x50]
7102d0b55c  cbz x23,0x7102d0b5c4
7102d0b560  ldr w8,[x23, #0xe0]
7102d0b564  cmp w8,w19
7102d0b568  b.eq 0x7102d0b5c4
7102d0b56c  mov w8,#0x5920
7102d0b570  ldrb w8,[x23, x8, LSL ]
7102d0b574  cmp w8,#0x6
7102d0b578  b.ne 0x7102d0b5c4
7102d0b57c  mov w8,#0x5918
7102d0b580  ldrb w8,[x23, x8, LSL ]
7102d0b584  add x8,x23,x8, LSL #0x3
7102d0b588  ldr x0,[x8, #0x4160]
7102d0b58c  mov w1,#0x1
7102d0b590  mov w2,w20
7102d0b594  mov w3,w21
7102d0b598  mov w4,wzr
7102d0b59c  bl 0x7100649540
7102d0b5a0  mov w8,#0x591f
7102d0b5a4  ldrb w8,[x23, x8, LSL ]
7102d0b5a8  tbz w8,#0x1,0x7102d0b5c4
7102d0b5ac  ldr x0,[x23, #0x4168]
7102d0b5b0  mov w1,#0x1
7102d0b5b4  mov w2,w20
7102d0b5b8  mov w3,w21
7102d0b5bc  mov w4,wzr
7102d0b5c0  bl 0x7100649540
7102d0b5c4  ldr x22,[x22, #0x58]
7102d0b5c8  cbz x22,0x7102d0b1d0
7102d0b5cc  ldr w8,[x22, #0xe0]
7102d0b5d0  cmp w8,w19
7102d0b5d4  b.eq 0x7102d0b1d0
7102d0b5d8  mov w8,#0x5920
7102d0b5dc  ldrb w8,[x22, x8, LSL ]
7102d0b5e0  cmp w8,#0x6
7102d0b5e4  b.ne 0x7102d0b1d0
7102d0b5e8  mov w8,#0x5918
7102d0b5ec  ldrb w8,[x22, x8, LSL ]
7102d0b5f0  add x8,x22,x8, LSL #0x3
7102d0b5f4  ldr x0,[x8, #0x4160]
7102d0b5f8  mov w1,#0x1
7102d0b5fc  mov w2,w20
7102d0b600  mov w3,w21
7102d0b604  mov w4,wzr
7102d0b608  bl 0x7100649540
7102d0b60c  mov w8,#0x591f
7102d0b610  ldrb w8,[x22, x8, LSL ]
7102d0b614  tbz w8,#0x1,0x7102d0b1d0
7102d0b618  ldr x0,[x22, #0x4168]
7102d0b61c  mov w1,#0x1
7102d0b620  mov w2,w20
7102d0b624  mov w3,w21
7102d0b628  mov w4,wzr
7102d0b62c  bl 0x7100649540
7102d0b630  b 0x7102d0b1d0
7102d0b634  ldrb w8,[x24, #0x8]
7102d0b638  cmp w8,#0x6
7102d0b63c  b.ne 0x7102d0b1d0
7102d0b640  mov w8,#0x4
7102d0b644  str x8,[x20, #0x5928]
7102d0b648  mov w8,#0x5930
7102d0b64c  mov w9,#0x1
7102d0b650  strb w9,[x20, x8, LSL ]
7102d0b654  adrp x8,0x71052c3000
7102d0b658  ldr x8,[x8, #0x3d8]
7102d0b65c  ldr x8,[x8]
7102d0b660  ldr w8,[x8]
7102d0b664  cmp w8,#0x2
7102d0b668  b.eq 0x7102d0b1d0
7102d0b66c  mov x0,x20
7102d0b670  bl 0x7100658600
7102d0b674  b 0x7102d0b1d0
7102d0b678  ldr s0,[x21, #0x7ac]
7102d0b67c  fcvtzs w1,s0
7102d0b680  fmov s2,wzr
7102d0b684  ldr s0,[x21, #0x7a4]
7102d0b688  ldr s1,[x21, #0x7a8]
7102d0b68c  fmov s5,0x3f800000
7102d0b690  mov v3.16B,v2.16B
7102d0b694  mov v4.16B,v2.16B
7102d0b698  mov x0,x20
7102d0b69c  mov w2,wzr
7102d0b6a0  sxtw x22,w19
7102d0b6a4  bl 0x7100653e30
7102d0b6a8  ldr x8,[x23, #0x4f8]
7102d0b6ac  ldr x8,[x8]
7102d0b6b0  add x8,x8,x22, LSL #0x3
7102d0b6b4  ldr x8,[x8, #0x20]
7102d0b6b8  cbz x8,0x7102d0b710
7102d0b6bc  mov w9,#0x5920
7102d0b6c0  ldrb w9,[x8, x9, LSL ]
7102d0b6c4  cmp w9,#0x6
7102d0b6c8  b.ne 0x7102d0b710
7102d0b6cc  mov w9,#0x5918
7102d0b6d0  ldrb w9,[x8, x9, LSL ]
7102d0b6d4  ldr x10,[x8, #0x4150]
7102d0b6d8  cmp x10,x9
7102d0b6dc  b.ls 0x7102d0b720
7102d0b6e0  add x20,x8,x9, LSL #0x3
7102d0b6e4  ldr x0,[x20, #0x4160]
7102d0b6e8  cbz x0,0x7102d0b720
7102d0b6ec  ldr x8,[x0]
7102d0b6f0  ldr x8,[x8, #0x518]
7102d0b6f4  blr x8
7102d0b6f8  tbz w0,#0x0,0x7102d0b720
7102d0b6fc  mov w8,#0x4160
7102d0b700  add x8,x20,x8
7102d0b704  ldr x1,[x8]
7102d0b708  add x0,sp,#0x8
7102d0b70c  b 0x7102d0b728
7102d0b710  adrp x8,0x71052a8000
7102d0b714  ldr x8,[x8, #0xa88]
7102d0b718  ldr q0,[x8]
7102d0b71c  b 0x7102d0b748
7102d0b720  add x0,sp,#0x8
7102d0b724  mov x1,xzr
7102d0b728  bl 0x71003a9ab0
7102d0b72c  ldr x8,[sp, #0x10]
7102d0b730  ldr x8,[x8, #0x20]
7102d0b734  ldr x0,[x8, #0x38]
7102d0b738  ldr x8,[x0]
7102d0b73c  ldr x8,[x8, #0x60]
7102d0b740  blr x8
7102d0b744  ldr q0,[x0]
7102d0b748  str q0,[sp, #0x20]
7102d0b74c  ldr x0,[x21, #0x320]
7102d0b750  ldr x8,[x0, #0x48]!
7102d0b754  ldr x20,[x8, #0x320]
7102d0b758  ldr x9,[x20, #0x40]
7102d0b75c  ldp x8,x11,[x9]
7102d0b760  subs x9,x11,x8
7102d0b764  b.eq 0x7102d0b814
7102d0b768  mov x10,#0x6db7
7102d0b76c  movk x10,#0xb6db, LSL #16
7102d0b770  asr x9,x9,#0x4
7102d0b774  movk x10,#0xdb6d, LSL #32
7102d0b778  movk x10,#0x6db6, LSL #48
7102d0b77c  mul x9,x9,x10
7102d0b780  cmp x8,x11
7102d0b784  b.eq 0x7102d0b7fc
7102d0b788  mov x13,#0x36d0
7102d0b78c  movk x13,#0x6239, LSL #16
7102d0b790  movk x13,#0x10, LSL #32
7102d0b794  mov x12,x8
7102d0b798  ldr w14,[x12]
7102d0b79c  cbnz w14,0x7102d0b7b0
7102d0b7a0  ldr x14,[x12, #0x8]
7102d0b7a4  and x14,x14,#0xffffffffff
7102d0b7a8  cmp x14,x13
7102d0b7ac  b.eq 0x7102d0b800
7102d0b7b0  add x12,x12,#0x70
7102d0b7b4  cmp x11,x12
7102d0b7b8  b.ne 0x7102d0b798
7102d0b7bc  mov x12,x11
7102d0b7c0  b 0x7102d0b800
7102d0b7c4  ldr x0,[x20, #0x4160]
7102d0b7c8  mov w19,#0xffffffff
7102d0b7cc  mov w1,#0x1
7102d0b7d0  mov w3,#0x1
7102d0b7d4  mov w2,w19
7102d0b7d8  mov w4,wzr
7102d0b7dc  bl 0x7100663910
7102d0b7e0  ldr x0,[x20, #0x4168]
7102d0b7e4  mov w1,#0x1
7102d0b7e8  mov w3,#0x1
7102d0b7ec  mov w2,w19
7102d0b7f0  mov w4,wzr
7102d0b7f4  bl 0x7100663910
7102d0b7f8  b 0x7102d0b1d0
7102d0b7fc  mov x12,x8
7102d0b800  sub x8,x12,x8
7102d0b804  asr x8,x8,#0x4
7102d0b808  mul x22,x8,x10
7102d0b80c  cmp x22,x9
7102d0b810  b.cc 0x7102d0b818
7102d0b814  mov w22,#0xffffffff
7102d0b818  adrp x1,0x7104441000
7102d0b81c  add x1,x1,#0xc7d
7102d0b820  adrp x2,0x7104348000
7102d0b824  add x2,x2,#0x5ca
7102d0b828  bl 0x71025f0510
7102d0b82c  mov w3,w0
7102d0b830  add x0,sp,#0x8
7102d0b834  add x4,sp,#0x20
7102d0b838  mov w5,#0x1
7102d0b83c  mov w6,#0x1
7102d0b840  mov x1,x20
7102d0b844  mov w2,w22
7102d0b848  add x23,sp,#0x8
7102d0b84c  bl 0x71025f0150
7102d0b850  add x9,x21,#0xbd8
7102d0b854  cmp x9,x23
7102d0b858  b.eq 0x7102d0b8ec
7102d0b85c  ldr x10,[x21, #0xbe8]
7102d0b860  ldr x8,[sp, #0x18]
7102d0b864  cmp x10,x8
7102d0b868  b.eq 0x7102d0b8f0
7102d0b86c  cbz x8,0x7102d0b8c4
7102d0b870  cbz x10,0x7102d0b898
7102d0b874  ldr x11,[x9]
7102d0b878  ldr x12,[x21, #0xbe0]
7102d0b87c  str x11,[x12]
7102d0b880  str x12,[x11, #0x8]
7102d0b884  ldr x11,[x10, #0x10]
7102d0b888  sub x11,x11,#0x1
7102d0b88c  str x11,[x10, #0x10]
7102d0b890  stp xzr,xzr,[x9, #0x8]
7102d0b894  str xzr,[x9]
7102d0b898  ldr x11,[x8, #0x20]
7102d0b89c  add x10,x8,#0x18
7102d0b8a0  str x10,[x21, #0xbd8]
7102d0b8a4  str x11,[x21, #0xbe0]
7102d0b8a8  str x9,[x8, #0x20]
7102d0b8ac  str x9,[x11]
7102d0b8b0  ldr x9,[x8, #0x10]
7102d0b8b4  add x9,x9,#0x1
7102d0b8b8  str x9,[x8, #0x10]
7102d0b8bc  str x8,[x21, #0xbe8]
7102d0b8c0  b 0x7102d0b8ec
7102d0b8c4  cbz x10,0x7102d0b8ec
7102d0b8c8  ldr x8,[x21, #0xbd8]
7102d0b8cc  ldr x11,[x21, #0xbe0]
7102d0b8d0  str x8,[x11]
7102d0b8d4  str x11,[x8, #0x8]
7102d0b8d8  ldr x8,[x10, #0x10]
7102d0b8dc  sub x8,x8,#0x1
7102d0b8e0  str x8,[x10, #0x10]
7102d0b8e4  stp xzr,xzr,[x9, #0x8]
7102d0b8e8  str xzr,[x9]
7102d0b8ec  ldr x8,[sp, #0x18]
7102d0b8f0  cbz x8,0x7102d0b914
7102d0b8f4  ldp x9,x10,[sp, #0x8]
7102d0b8f8  str x9,[x10]
7102d0b8fc  str x10,[x9, #0x8]
7102d0b900  ldr x9,[x8, #0x10]
7102d0b904  sub x9,x9,#0x1
7102d0b908  str x9,[x8, #0x10]
7102d0b90c  stp xzr,xzr,[sp, #0x10]
7102d0b910  str xzr,[sp, #0x8]
7102d0b914  str w19,[x21, #0xbd0]
7102d0b918  b 0x7102d0b1d0
7102d0b91c  bl 0x71039c2650
