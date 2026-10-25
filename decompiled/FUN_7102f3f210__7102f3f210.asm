// addr:      7102f3f210
// offset:    0x2f3f210
// name:      FUN_7102f3f210
// mangled:   
// size:      828

7102f3f210  sub sp,sp,#0x40
7102f3f214  str x21,[sp, #0x10]
7102f3f218  stp x20,x19,[sp, #0x20]
7102f3f21c  stp x29,x30,[sp, #0x30]
7102f3f220  add x29,sp,#0x30
7102f3f224  ldr w8,[x0, #0x1c]
7102f3f228  sub w8,w8,#0x1
7102f3f22c  mov x19,x0
7102f3f230  cmp w8,#0x3
7102f3f234  b.hi 0x7102f3f36c
7102f3f238  adrp x9,0x7104521000
7102f3f23c  add x9,x9,#0x950
7102f3f240  ldrsw x8,[x9, x8, LSL #0x2]
7102f3f244  add x8,x8,x9
7102f3f248  br x8
7102f3f24c  ldr x0,[x19, #0x8]
7102f3f250  adrp x1,0x710428f000
7102f3f254  add x1,x1,#0xc90
7102f3f258  bl 0x7102610070
7102f3f25c  ldr x0,[x19, #0x8]
7102f3f260  fmov s0,wzr
7102f3f264  mov w1,#0x1
7102f3f268  bl 0x710260fdd0
7102f3f26c  ldr x8,[x19, #0x8]
7102f3f270  cbz x8,0x7102f3f2e8
7102f3f274  ldrb w9,[x8, #0xe0]
7102f3f278  cbz w9,0x7102f3f288
7102f3f27c  ldr x9,[x8, #0xc8]
7102f3f280  cbz x9,0x7102f3f288
7102f3f284  strh wzr,[x9, #0x32]
7102f3f288  ldr x8,[x8, #0xd8]
7102f3f28c  cbz x8,0x7102f3f294
7102f3f290  strb wzr,[x8, #0x22]
7102f3f294  ldr x8,[x19, #0x8]
7102f3f298  cbz x8,0x7102f3f2e8
7102f3f29c  ldrb w9,[x8, #0xe0]
7102f3f2a0  cbz w9,0x7102f3f2b0
7102f3f2a4  ldr x9,[x8, #0xc8]
7102f3f2a8  cbz x9,0x7102f3f2b0
7102f3f2ac  strh wzr,[x9, #0x30]
7102f3f2b0  ldr x9,[x8, #0xd8]
7102f3f2b4  cbz x9,0x7102f3f2bc
7102f3f2b8  strb wzr,[x9, #0x21]
7102f3f2bc  ldrb w9,[x8, #0xe0]
7102f3f2c0  cbz w9,0x7102f3f2d0
7102f3f2c4  ldr x8,[x8, #0xb0]
7102f3f2c8  mov w9,#0x1
7102f3f2cc  strb w9,[x8, #0x10]
7102f3f2d0  ldr x8,[x19, #0x8]
7102f3f2d4  cbz x8,0x7102f3f2e8
7102f3f2d8  add x0,x8,#0x108
7102f3f2dc  mov w9,#0x1
7102f3f2e0  strb w9,[x8, #0x110]
7102f3f2e4  bl 0x71025e9d50
7102f3f2e8  mov w8,#0x2
7102f3f2ec  str w8,[x19, #0x1c]
7102f3f2f0  b 0x7102f3f36c
7102f3f2f4  orr w8,wzr,#0x3
7102f3f2f8  str w8,[x19, #0x1c]
7102f3f2fc  ldr x8,[x19]
7102f3f300  ldr x8,[x8, #0x30]
7102f3f304  mov x0,x19
7102f3f308  blr x8
7102f3f30c  b 0x7102f3f36c
7102f3f310  ldr x0,[x19, #0x8]
7102f3f314  bl 0x710260ffb0
7102f3f318  tbz w0,#0x0,0x7102f3f36c
7102f3f31c  ldr x8,[x19, #0x8]
7102f3f320  cbz x8,0x7102f3f35c
7102f3f324  ldrb w9,[x8, #0xe0]
7102f3f328  cbz w9,0x7102f3f33c
7102f3f32c  ldr x9,[x8, #0xc8]
7102f3f330  cbz x9,0x7102f3f33c
7102f3f334  mov w10,#0x101
7102f3f338  strh w10,[x9, #0x30]
7102f3f33c  ldr x9,[x8, #0xd8]
7102f3f340  cbz x9,0x7102f3f34c
7102f3f344  mov w10,#0x1
7102f3f348  strb w10,[x9, #0x21]
7102f3f34c  ldrb w9,[x8, #0xe0]
7102f3f350  cbz w9,0x7102f3f35c
7102f3f354  ldr x8,[x8, #0xb0]
7102f3f358  strb wzr,[x8, #0x10]
7102f3f35c  mov w8,#0x4
7102f3f360  str w8,[x19, #0x1c]
7102f3f364  b 0x7102f3f36c
7102f3f368  str xzr,[x19, #0x18]
7102f3f36c  adrp x8,0x710446a000
7102f3f370  ldr q7,[x8, #0x350]
7102f3f374  ldr x21,[x19, #0x8]
7102f3f378  cbz x21,0x7102f3f42c
7102f3f37c  ldr x8,[x21, #0xd8]
7102f3f380  cbz x8,0x7102f3f3c0
7102f3f384  ldr x8,[x8, #0x8]
7102f3f388  adrp x1,0x710428f000
7102f3f38c  add x1,x1,#0xca2
7102f3f390  str q7,[sp]
7102f3f394  ldr x0,[x8, #0x8]
7102f3f398  ldr x8,[x0]
7102f3f39c  ldr x8,[x8, #0x18]
7102f3f3a0  blr x8
7102f3f3a4  ldr q7,[sp]
7102f3f3a8  ldr x21,[x19, #0x8]
7102f3f3ac  cbz x21,0x7102f3f42c
7102f3f3b0  mov w20,w0
7102f3f3b4  ldr x8,[x21, #0xd8]
7102f3f3b8  cbnz x8,0x7102f3f3cc
7102f3f3bc  b 0x7102f3f414
7102f3f3c0  mov w20,#0xffffffff
7102f3f3c4  ldr x8,[x21, #0xd8]
7102f3f3c8  cbz x8,0x7102f3f414
7102f3f3cc  ldr x8,[x8, #0x8]
7102f3f3d0  ldr x0,[x8, #0x8]
7102f3f3d4  ldr x8,[x0]
7102f3f3d8  ldr x8,[x8, #0x10]
7102f3f3dc  blr x8
7102f3f3e0  cmp w0,w20
7102f3f3e4  b.ls 0x7102f3f414
7102f3f3e8  ldr x8,[x21, #0xd8]
7102f3f3ec  ldr x8,[x8, #0x8]
7102f3f3f0  ldr x0,[x8, #0x48]
7102f3f3f4  ldr x8,[x0]
7102f3f3f8  ldr x8,[x8, #0x38]
7102f3f3fc  mov w1,wzr
7102f3f400  blr x8
7102f3f404  mov w8,w20
7102f3f408  add x8,x1,x8, LSL #0x6
7102f3f40c  add x8,x8,#0x30
7102f3f410  b 0x7102f3f428
7102f3f414  ldr x0,[x21, #0x90]
7102f3f418  ldr x8,[x0]
7102f3f41c  ldr x8,[x8, #0x158]
7102f3f420  blr x8
7102f3f424  add x8,x0,#0x30
7102f3f428  ldr q7,[x8]
7102f3f42c  fmov s0,wzr
7102f3f430  ext v1.16B,v7.16B,v7.16B,0x8
7102f3f434  ldr x9,[x19, #0x10]
7102f3f438  mov v1.S[0x1],v0.S[0x0]
7102f3f43c  mov v0.16B,v7.16B
7102f3f440  mov v0.D[0x1],v1.D[0x0]
7102f3f444  str q0,[x19, #0x30]
7102f3f448  cbz x9,0x7102f3f538
7102f3f44c  ldp x8,x9,[x9]
7102f3f450  cmp x8,x9
7102f3f454  b.eq 0x7102f3f538
7102f3f458  movi d1,#0x0
7102f3f45c  mov v0.16B,v7.16B
7102f3f460  adrp x11,0x7104472000
7102f3f464  mov v0.D[0x1],v1.D[0x0]
7102f3f468  ldr s2,[x11, #0x970]
7102f3f46c  dup s1,v7.S[0x1]
7102f3f470  fmov s3,0xbf800000
7102f3f474  fmov s4,0x3f800000
7102f3f478  mov w10,#0x1
7102f3f47c  ldr x11,[x8]
7102f3f480  ldr x13,[x11, #0x8]
7102f3f484  ldrb w14,[x13, #0xe7]
7102f3f488  ldrb w13,[x13, #0xe8]
7102f3f48c  ldrb w12,[x11, #0x128]
7102f3f490  cmp w12,#0x0
7102f3f494  orr w13,w13,w14
7102f3f498  and w12,w13,#0xff
7102f3f49c  ccmp w12,#0x0,#0x0,ne
7102f3f4a0  b.eq 0x7102f3f4ac
7102f3f4a4  strb w10,[x11, #0x129]
7102f3f4a8  b 0x7102f3f4d0
7102f3f4ac  ldr q5,[x11, #0x10]
7102f3f4b0  fabd s6,s5,s7
7102f3f4b4  fcmp s6,s2
7102f3f4b8  b.gt 0x7102f3f4cc
7102f3f4bc  dup s5,v5.S[0x1]
7102f3f4c0  fabd s5,s5,s1
7102f3f4c4  fcmp s5,s2
7102f3f4c8  b.le 0x7102f3f4d4
7102f3f4cc  strb w10,[x11, #0x12a]
7102f3f4d0  str q0,[x11, #0x10]
7102f3f4d4  ldr s5,[x11, #0x30]
7102f3f4d8  fabs s5,s5
7102f3f4dc  fcmp s5,s2
7102f3f4e0  b.mi 0x7102f3f4ec
7102f3f4e4  str wzr,[x11, #0x30]
7102f3f4e8  strb w10,[x11, #0x129]
7102f3f4ec  ldr q5,[x11, #0x50]
7102f3f4f0  fadd s6,s5,s3
7102f3f4f4  fabs s6,s6
7102f3f4f8  fcmp s6,s2
7102f3f4fc  b.mi 0x7102f3f50c
7102f3f500  mov v5.S[0x0],v4.S[0x0]
7102f3f504  strb w10,[x11, #0x129]
7102f3f508  str q5,[x11, #0x50]
7102f3f50c  dup s6,v5.S[0x1]
7102f3f510  fadd s6,s6,s3
7102f3f514  fabs s6,s6
7102f3f518  fcmp s6,s2
7102f3f51c  b.mi 0x7102f3f52c
7102f3f520  mov v5.S[0x1],v4.S[0x0]
7102f3f524  strb w10,[x11, #0x129]
7102f3f528  str q5,[x11, #0x50]
7102f3f52c  add x8,x8,#0x8
7102f3f530  cmp x9,x8
7102f3f534  b.ne 0x7102f3f47c
7102f3f538  ldp x29,x30,[sp, #0x30]
7102f3f53c  ldr x21,[sp, #0x10]
7102f3f540  ldp x20,x19,[sp, #0x20]
7102f3f544  add sp,sp,#0x40
7102f3f548  ret
