// addr:      7102f6e320
// offset:    0x2f6e320
// name:      FUN_7102f6e320
// mangled:   
// size:      760

7102f6e320  sub sp,sp,#0x50
7102f6e324  stp x24,x23,[sp, #0x10]
7102f6e328  stp x22,x21,[sp, #0x20]
7102f6e32c  stp x20,x19,[sp, #0x30]
7102f6e330  stp x29,x30,[sp, #0x40]
7102f6e334  add x29,sp,#0x40
7102f6e338  ldr x23,[x0, #0x8]
7102f6e33c  mov x21,x1
7102f6e340  mov x19,x0
7102f6e344  and x22,x1,#0xffffffffff
7102f6e348  cbz x23,0x7102f6e370
7102f6e34c  sub x8,x23,#0x1
7102f6e350  ands x9,x8,x23
7102f6e354  b.eq 0x7102f6e374
7102f6e358  cmp x22,x23
7102f6e35c  mov x24,x22
7102f6e360  b.cc 0x7102f6e378
7102f6e364  udiv x10,x22,x23
7102f6e368  msub x24,x10,x23,x22
7102f6e36c  b 0x7102f6e378
7102f6e370  b 0x7102f6e3f8
7102f6e374  and x24,x8,x22
7102f6e378  ldr x10,[x19]
7102f6e37c  ldr x20,[x10, x24, LSL #0x3]
7102f6e380  cbz x20,0x7102f6e3f8
7102f6e384  cbz x9,0x7102f6e3c8
7102f6e388  ldr x20,[x20]
7102f6e38c  cbz x20,0x7102f6e3f8
7102f6e390  ldr x8,[x20, #0x8]
7102f6e394  cmp x8,x22
7102f6e398  b.eq 0x7102f6e3b4
7102f6e39c  cmp x8,x23
7102f6e3a0  b.cc 0x7102f6e3ac
7102f6e3a4  udiv x9,x8,x23
7102f6e3a8  msub x8,x9,x23,x8
7102f6e3ac  cmp x8,x24
7102f6e3b0  b.ne 0x7102f6e3f8
7102f6e3b4  ldr x8,[x20, #0x10]
7102f6e3b8  eor x8,x8,x21
7102f6e3bc  tst x8,#0xffffffffff
7102f6e3c0  b.ne 0x7102f6e388
7102f6e3c4  b 0x7102f6e5fc
7102f6e3c8  ldr x20,[x20]
7102f6e3cc  cbz x20,0x7102f6e3f8
7102f6e3d0  ldr x9,[x20, #0x8]
7102f6e3d4  and x10,x9,x8
7102f6e3d8  cmp x9,x22
7102f6e3dc  ccmp x10,x24,#0x4,ne
7102f6e3e0  b.ne 0x7102f6e3f8
7102f6e3e4  ldr x9,[x20, #0x10]
7102f6e3e8  eor x9,x9,x21
7102f6e3ec  tst x9,#0xffffffffff
7102f6e3f0  b.ne 0x7102f6e3c8
7102f6e3f4  b 0x7102f6e5fc
7102f6e3f8  mov w0,#0x10
7102f6e3fc  mov w1,#0x20
7102f6e400  bl 0x710392e290
7102f6e404  mov x20,x0
7102f6e408  cbnz x0,0x7102f6e444
7102f6e40c  adrp x8,0x7105332000
7102f6e410  ldr x0,[x8, #0xf00]
7102f6e414  mov w8,#0x20
7102f6e418  str wzr,[sp, #0xc]
7102f6e41c  add x1,sp,#0xc
7102f6e420  str x8,[sp]
7102f6e424  ldr x8,[x0]
7102f6e428  ldr x8,[x8, #0x30]
7102f6e42c  mov x2,sp
7102f6e430  blr x8
7102f6e434  mov w0,#0x10
7102f6e438  mov w1,#0x20
7102f6e43c  bl 0x710392e290
7102f6e440  mov x20,x0
7102f6e444  stp x22,x21,[x20, #0x8]
7102f6e448  strh wzr,[x20, #0x18]
7102f6e44c  str xzr,[x20]
7102f6e450  ldr x8,[x19, #0x18]
7102f6e454  add x8,x8,#0x1
7102f6e458  ucvtf s0,x8
7102f6e45c  ldr s1,[x19, #0x20]
7102f6e460  cbz x23,0x7102f6e474
7102f6e464  ucvtf s2,x23
7102f6e468  fmul s2,s1,s2
7102f6e46c  fcmp s2,s0
7102f6e470  b.pl 0x7102f6e588
7102f6e474  lsl x8,x23,#0x1
7102f6e478  cmp x23,#0x3
7102f6e47c  b.cc 0x7102f6e490
7102f6e480  sub x9,x23,#0x1
7102f6e484  tst x9,x23
7102f6e488  cset w9,ne
7102f6e48c  b 0x7102f6e494
7102f6e490  mov w9,#0x1
7102f6e494  fdiv s0,s0,s1
7102f6e498  orr x8,x9,x8
7102f6e49c  fcvtpu x9,s0
7102f6e4a0  cmp x8,x9
7102f6e4a4  csel x21,x9,x8,cc
7102f6e4a8  subs x8,x21,#0x1
7102f6e4ac  b.ne 0x7102f6e4b8
7102f6e4b0  mov w21,#0x2
7102f6e4b4  b 0x7102f6e4cc
7102f6e4b8  tst x8,x21
7102f6e4bc  b.eq 0x7102f6e4cc
7102f6e4c0  mov x0,x21
7102f6e4c4  bl 0x71039c26e0
7102f6e4c8  mov x21,x0
7102f6e4cc  ldr x23,[x19, #0x8]
7102f6e4d0  cmp x21,x23
7102f6e4d4  b.ls 0x7102f6e4e4
7102f6e4d8  mov x0,x19
7102f6e4dc  mov x1,x21
7102f6e4e0  b 0x7102f6e554
7102f6e4e4  b.cs 0x7102f6e558
7102f6e4e8  cmp x23,#0x3
7102f6e4ec  b.cc 0x7102f6e500
7102f6e4f0  sub x8,x23,#0x1
7102f6e4f4  tst x8,x23
7102f6e4f8  cset w8,eq
7102f6e4fc  b 0x7102f6e504
7102f6e500  mov w8,wzr
7102f6e504  ldr x9,[x19, #0x18]
7102f6e508  ucvtf s0,x9
7102f6e50c  ldr s1,[x19, #0x20]
7102f6e510  fdiv s0,s0,s1
7102f6e514  fcvtpu x0,s0
7102f6e518  cbz w8,0x7102f6e53c
7102f6e51c  sub x8,x0,#0x1
7102f6e520  clz x8,x8
7102f6e524  neg x8,x8
7102f6e528  mov w9,#0x1
7102f6e52c  lsl x8,x9,x8
7102f6e530  cmp x0,#0x2
7102f6e534  csel x0,x0,x8,cc
7102f6e538  b 0x7102f6e540
7102f6e53c  bl 0x71039c26e0
7102f6e540  cmp x21,x0
7102f6e544  csel x1,x0,x21,cc
7102f6e548  cmp x1,x23
7102f6e54c  b.cs 0x7102f6e558
7102f6e550  mov x0,x19
7102f6e554  bl 0x7102f6e620
7102f6e558  ldr x23,[x19, #0x8]
7102f6e55c  sub x8,x23,#0x1
7102f6e560  tst x8,x23
7102f6e564  b.eq 0x7102f6e578
7102f6e568  cmp x22,x23
7102f6e56c  b.cs 0x7102f6e580
7102f6e570  mov x24,x22
7102f6e574  b 0x7102f6e588
7102f6e578  and x24,x8,x22
7102f6e57c  b 0x7102f6e588
7102f6e580  udiv x8,x22,x23
7102f6e584  msub x24,x8,x23,x22
7102f6e588  ldr x9,[x19]
7102f6e58c  ldr x8,[x9, x24, LSL #0x3]
7102f6e590  cbz x8,0x7102f6e5a0
7102f6e594  ldr x9,[x8]
7102f6e598  str x9,[x20]
7102f6e59c  b 0x7102f6e5ec
7102f6e5a0  mov x8,x19
7102f6e5a4  ldr x10,[x8, #0x10]!
7102f6e5a8  str x10,[x20]
7102f6e5ac  str x20,[x8]
7102f6e5b0  str x8,[x9, x24, LSL #0x3]
7102f6e5b4  ldr x8,[x20]
7102f6e5b8  cbz x8,0x7102f6e5f0
7102f6e5bc  ldr x8,[x8, #0x8]
7102f6e5c0  sub x9,x23,#0x1
7102f6e5c4  tst x9,x23
7102f6e5c8  b.eq 0x7102f6e5e0
7102f6e5cc  cmp x8,x23
7102f6e5d0  b.cc 0x7102f6e5e4
7102f6e5d4  udiv x9,x8,x23
7102f6e5d8  msub x8,x9,x23,x8
7102f6e5dc  b 0x7102f6e5e4
7102f6e5e0  and x8,x8,x9
7102f6e5e4  ldr x9,[x19]
7102f6e5e8  add x8,x9,x8, LSL #0x3
7102f6e5ec  str x20,[x8]
7102f6e5f0  ldr x8,[x19, #0x18]
7102f6e5f4  add x8,x8,#0x1
7102f6e5f8  str x8,[x19, #0x18]
7102f6e5fc  add x0,x20,#0x18
7102f6e600  ldp x29,x30,[sp, #0x40]
7102f6e604  ldp x20,x19,[sp, #0x30]
7102f6e608  ldp x22,x21,[sp, #0x20]
7102f6e60c  ldp x24,x23,[sp, #0x10]
7102f6e610  add sp,sp,#0x50
7102f6e614  ret
