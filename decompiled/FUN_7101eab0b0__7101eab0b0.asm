// addr:      7101eab0b0
// offset:    0x1eab0b0
// name:      FUN_7101eab0b0
// mangled:   
// size:      1372

7101eab0b0  sub sp,sp,#0x110
7101eab0b4  str d8,[sp, #0xb0]
7101eab0b8  stp x28,x25,[sp, #0xc0]
7101eab0bc  stp x24,x23,[sp, #0xd0]
7101eab0c0  stp x22,x21,[sp, #0xe0]
7101eab0c4  stp x20,x19,[sp, #0xf0]
7101eab0c8  stp x29,x30,[sp, #0x100]
7101eab0cc  add x29,sp,#0x100
7101eab0d0  mov x19,x0
7101eab0d4  ldr x8,[x0, #0x10]!
7101eab0d8  ldr x9,[x0, #0x8]
7101eab0dc  cmp x9,x8
7101eab0e0  b.eq 0x7101eab608
7101eab0e4  ldr x8,[x8]
7101eab0e8  ldr x8,[x8]
7101eab0ec  ldr x23,[x8]
7101eab0f0  tbnz w1,#0x1f,0x7101eab24c
7101eab0f4  ldp x9,x10,[x19, #0x138]
7101eab0f8  sub x10,x10,x9
7101eab0fc  sxtw x8,w1
7101eab100  asr x10,x10,#0x2
7101eab104  cmp x10,x8
7101eab108  b.ls 0x7101eab24c
7101eab10c  ldr w22,[x9, x8, LSL #0x2]
7101eab110  cbz w22,0x7101eab24c
7101eab114  adrp x8,0x7105314000
7101eab118  ldr x8,[x8, #0x510]
7101eab11c  ldr x8,[x8]
7101eab120  ldrb w9,[x8]
7101eab124  cbnz w9,0x7101eab24c
7101eab128  ldr x8,[x8, #0x298]
7101eab12c  ldr x0,[x8]
7101eab130  ldp x9,x10,[x0]
7101eab134  cmp x9,x10
7101eab138  b.eq 0x7101eab24c
7101eab13c  ldr x8,[x0, #0x58]
7101eab140  cbz x8,0x7101eab24c
7101eab144  mov x11,x0
7101eab148  ldr x8,[x19, #0x170]
7101eab14c  ldr x13,[x11, #0x50]!
7101eab150  cbz x13,0x7101eab24c
7101eab154  add x20,x23,#0x8
7101eab158  mov x12,x11
7101eab15c  ldr w14,[x13, #0x1c]
7101eab160  cmp w14,w22
7101eab164  cset w14,cc
7101eab168  csel x12,x12,x13,cc
7101eab16c  ldr x13,[x13, w14, UXTW #0x3]
7101eab170  cbnz x13,0x7101eab15c
7101eab174  cmp x12,x11
7101eab178  b.eq 0x7101eab24c
7101eab17c  ldr w11,[x12, #0x1c]
7101eab180  cmp w11,w22
7101eab184  b.hi 0x7101eab24c
7101eab188  ldrsw x11,[x12, #0x20]
7101eab18c  cmn w11,#0x1
7101eab190  b.eq 0x7101eab24c
7101eab194  sub x10,x10,x9
7101eab198  mov x12,#0x36fb
7101eab19c  movk x12,#0xd899, LSL #16
7101eab1a0  asr x10,x10,#0x3
7101eab1a4  movk x12,#0xe6e3, LSL #32
7101eab1a8  movk x12,#0x5adb, LSL #48
7101eab1ac  mul x10,x10,x12
7101eab1b0  cmp x10,x11
7101eab1b4  b.ls 0x7101eab608
7101eab1b8  mov w10,#0x2198
7101eab1bc  movk w10,#0x3, LSL #16
7101eab1c0  madd x10,x11,x10,x9
7101eab1c4  ldrh w10,[x10, #0x4]
7101eab1c8  cmp w10,#0x2
7101eab1cc  b.ne 0x7101eab24c
7101eab1d0  mov w2,#0x2198
7101eab1d4  movk w2,#0x3, LSL #16
7101eab1d8  madd x1,x11,x2,x9
7101eab1dc  mov x0,x8
7101eab1e0  bl 0x71039c00e0
7101eab1e4  ldr x0,[x23, #0x10]
7101eab1e8  fmov s0,0x3f800000
7101eab1ec  adrp x1,0x71043cf000
7101eab1f0  add x1,x1,#0xbe8
7101eab1f4  bl 0x7103778300
7101eab1f8  adrp x1,0x710424f000
7101eab1fc  add x1,x1,#0xd4d
7101eab200  add x8,sp,#0x58
7101eab204  mov x0,x20
7101eab208  bl 0x7103776640
7101eab20c  ldr x8,[x19, #0x170]
7101eab210  ldr w8,[x8, #0x134]
7101eab214  cmp w8,#0x1
7101eab218  b.eq 0x7101eab27c
7101eab21c  cmp w8,#0x2
7101eab220  b.ne 0x7101eab2a4
7101eab224  fmov s8,0x3f800000
7101eab228  ldr x0,[x23, #0x10]
7101eab22c  adrp x1,0x71042b4000
7101eab230  add x1,x1,#0xb0c
7101eab234  mov v0.16B,v8.16B
7101eab238  bl 0x7103778300
7101eab23c  ldr x21,[sp, #0x60]
7101eab240  adrp x1,0x71042c5000
7101eab244  add x1,x1,#0x58a
7101eab248  b 0x7101eab2c8
7101eab24c  ldr d8,[sp, #0xb0]
7101eab250  ldr x0,[x23, #0x10]
7101eab254  adrp x1,0x710437c000
7101eab258  add x1,x1,#0xc43
7101eab25c  ldp x29,x30,[sp, #0x100]
7101eab260  ldp x20,x19,[sp, #0xf0]
7101eab264  fmov s0,0x3f800000
7101eab268  ldp x22,x21,[sp, #0xe0]
7101eab26c  ldp x24,x23,[sp, #0xd0]
7101eab270  ldp x28,x25,[sp, #0xc0]
7101eab274  add sp,sp,#0x110
7101eab278  b 0x7103778300
7101eab27c  fmov s8,0x3f800000
7101eab280  ldr x0,[x23, #0x10]
7101eab284  adrp x1,0x7104433000
7101eab288  add x1,x1,#0x804
7101eab28c  mov v0.16B,v8.16B
7101eab290  bl 0x7103778300
7101eab294  ldr x21,[sp, #0x60]
7101eab298  adrp x1,0x710433a000
7101eab29c  add x1,x1,#0x960
7101eab2a0  b 0x7101eab2c8
7101eab2a4  fmov s8,0x3f800000
7101eab2a8  ldr x0,[x23, #0x10]
7101eab2ac  adrp x1,0x71042a3000
7101eab2b0  add x1,x1,#0x733
7101eab2b4  mov v0.16B,v8.16B
7101eab2b8  bl 0x7103778300
7101eab2bc  ldr x21,[sp, #0x60]
7101eab2c0  adrp x1,0x710433a000
7101eab2c4  add x1,x1,#0x96a
7101eab2c8  mov v0.16B,v8.16B
7101eab2cc  mov x0,x21
7101eab2d0  bl 0x7103778300
7101eab2d4  ldr x8,[x19, #0x170]
7101eab2d8  ldrb w8,[x8, #0x156]
7101eab2dc  ldr x0,[x23, #0x10]
7101eab2e0  cbz w8,0x7101eab2f0
7101eab2e4  adrp x1,0x71042b4000
7101eab2e8  add x1,x1,#0xb19
7101eab2ec  b 0x7101eab2f8
7101eab2f0  adrp x1,0x71043e0000
7101eab2f4  add x1,x1,#0x911
7101eab2f8  fmov s0,0x3f800000
7101eab2fc  bl 0x7103778300
7101eab300  ldr x8,[x19, #0x170]
7101eab304  ldrb w8,[x8, #0xc]
7101eab308  ldr x0,[x23, #0x10]
7101eab30c  cmp w8,#0x1
7101eab310  b.ne 0x7101eab338
7101eab314  fmov s8,0x3f800000
7101eab318  mov v0.16B,v8.16B
7101eab31c  adrp x1,0x7104443000
7101eab320  add x1,x1,#0xe4b
7101eab324  bl 0x7103778300
7101eab328  ldr x0,[x23, #0x10]
7101eab32c  adrp x1,0x7104401000
7101eab330  add x1,x1,#0xc5f
7101eab334  b 0x7101eab358
7101eab338  fmov s8,0x3f800000
7101eab33c  mov v0.16B,v8.16B
7101eab340  adrp x1,0x71042d6000
7101eab344  add x1,x1,#0xa14
7101eab348  bl 0x7103778300
7101eab34c  ldr x0,[x23, #0x10]
7101eab350  adrp x1,0x71042e7000
7101eab354  add x1,x1,#0x97a
7101eab358  mov v0.16B,v8.16B
7101eab35c  bl 0x7103778300
7101eab360  ldr x8,[x19, #0x160]
7101eab364  cbz x8,0x7101eab424
7101eab368  add x9,x19,#0x160
7101eab36c  mov x23,x9
7101eab370  ldr w10,[x8, #0x1c]
7101eab374  cmp w10,w22
7101eab378  cset w10,cc
7101eab37c  csel x23,x23,x8,cc
7101eab380  ldr x8,[x8, w10, UXTW #0x3]
7101eab384  cbnz x8,0x7101eab370
7101eab388  cmp x23,x9
7101eab38c  b.eq 0x7101eab424
7101eab390  ldr w8,[x23, #0x1c]
7101eab394  cmp w22,w8
7101eab398  b.cc 0x7101eab424
7101eab39c  adrp x1,0x710433a000
7101eab3a0  add x1,x1,#0x8f0
7101eab3a4  add x8,sp,#0x68
7101eab3a8  add x0,sp,#0x58
7101eab3ac  bl 0x7103776910
7101eab3b0  adrp x8,0x710532f000
7101eab3b4  ldr x8,[x8, #0x860]
7101eab3b8  ldr x9,[x8]
7101eab3bc  ldr x8,[x9, #0x10]
7101eab3c0  cbz x8,0x7101eab40c
7101eab3c4  ldr w8,[x23, #0x20]
7101eab3c8  ldr x11,[x9, #0x8]!
7101eab3cc  cbz x11,0x7101eab40c
7101eab3d0  mov x10,x9
7101eab3d4  ldr w12,[x11, #0x20]
7101eab3d8  cmp w12,w8
7101eab3dc  cset w12,cc
7101eab3e0  csel x10,x10,x11,cc
7101eab3e4  ldr x11,[x11, w12, UXTW #0x3]
7101eab3e8  cbnz x11,0x7101eab3d4
7101eab3ec  cmp x10,x9
7101eab3f0  b.eq 0x7101eab40c
7101eab3f4  ldr w9,[x10, #0x20]
7101eab3f8  cmp w9,w8
7101eab3fc  b.hi 0x7101eab40c
7101eab400  add x1,x10,#0x28
7101eab404  add x0,sp,#0x68
7101eab408  bl 0x7103779480
7101eab40c  ldr x0,[sp, #0x70]
7101eab410  adrp x8,0x710523d000
7101eab414  add x8,x8,#0x9a8
7101eab418  stp x8,xzr,[sp, #0x68]
7101eab41c  cbz x0,0x7101eab424
7101eab420  bl 0x710392eb40
7101eab424  adrp x1,0x7104422000
7101eab428  add x1,x1,#0xadc
7101eab42c  add x8,sp,#0x68
7101eab430  add x0,sp,#0x58
7101eab434  bl 0x7103776910
7101eab438  ldr x8,[x19, #0x170]
7101eab43c  add x2,x8,#0x110
7101eab440  add x0,sp,#0x68
7101eab444  mov w1,#0x1
7101eab448  bl 0x710377a310
7101eab44c  ldr x0,[sp, #0x70]
7101eab450  adrp x25,0x710523d000
7101eab454  add x25,x25,#0x9a8
7101eab458  stp x25,xzr,[sp, #0x68]
7101eab45c  cbz x0,0x7101eab464
7101eab460  bl 0x710392eb40
7101eab464  adrp x1,0x7104270000
7101eab468  add x1,x1,#0x686
7101eab46c  add x8,sp,#0x48
7101eab470  add x0,sp,#0x58
7101eab474  bl 0x7103776910
7101eab478  ldr x8,[x19, #0x170]
7101eab47c  ldr x2,[x8, #0x140]
7101eab480  and x8,x2,#-0x100000000000000
7101eab484  mov x9,#-0x2700000000000000
7101eab488  cmp x8,x9
7101eab48c  b.ne 0x7101eab4f0
7101eab490  and x8,x2,#0xffffffffff
7101eab494  cbz x8,0x7101eab4f0
7101eab498  adrp x8,0x710532f000
7101eab49c  ldr x8,[x8, #0x730]
7101eab4a0  ldr x8,[x8, #0x8]
7101eab4a4  ldr x1,[x8, #0x278]
7101eab4a8  add x0,sp,#0x68
7101eab4ac  add x22,sp,#0x68
7101eab4b0  bl 0x71032570e0
7101eab4b4  add x1,x22,#0x8
7101eab4b8  adrp x0,0x710428f000
7101eab4bc  add x0,x0,#0xf21
7101eab4c0  mov x8,sp
7101eab4c4  mov x22,sp
7101eab4c8  bl 0x71003a4ca0
7101eab4cc  add x1,x22,#0x8
7101eab4d0  add x0,sp,#0x48
7101eab4d4  bl 0x710377a120
7101eab4d8  ldr x22,[sp, #0x50]
7101eab4dc  ldr x8,[x22]
7101eab4e0  cbz x8,0x7101eab508
7101eab4e4  ldrb w9,[x8, #0x58]
7101eab4e8  orr w9,w9,#0x1
7101eab4ec  b 0x7101eab504
7101eab4f0  ldr x22,[sp, #0x50]
7101eab4f4  ldr x8,[x22]
7101eab4f8  cbz x8,0x7101eab508
7101eab4fc  ldrb w9,[x8, #0x58]
7101eab500  and w9,w9,#0xfe
7101eab504  strb w9,[x8, #0x58]
7101eab508  ldr x8,[x19, #0x170]
7101eab50c  ldrh w13,[x8, #0x1e]
7101eab510  mov w9,#0x4240
7101eab514  movk w9,#0xf, LSL #16
7101eab518  ldrb w11,[x8, #0x20]
7101eab51c  ldrb w12,[x8, #0x22]
7101eab520  mov w10,#0x3e8
7101eab524  ldrb w14,[x8, #0x21]
7101eab528  ldrb w8,[x8, #0x23]
7101eab52c  adrp x1,0x71042b4000
7101eab530  add x1,x1,#0xadb
7101eab534  mul x13,x13,x9
7101eab538  mul x9,x12,x9
7101eab53c  madd x11,x11,x10,x13
7101eab540  madd x24,x8,x10,x9
7101eab544  add x8,sp,#0x68
7101eab548  add x0,sp,#0x58
7101eab54c  add x23,x11,x14
7101eab550  bl 0x7103776910
7101eab554  add x0,sp,#0x68
7101eab558  mov w1,#0x2
7101eab55c  mov x2,x23
7101eab560  mov x3,x24
7101eab564  bl 0x710377a310
7101eab568  ldr x0,[sp, #0x70]
7101eab56c  stp x25,xzr,[sp, #0x68]
7101eab570  cbz x0,0x7101eab578
7101eab574  bl 0x710392eb40
7101eab578  adrp x1,0x710433a000
7101eab57c  add x1,x1,#0x8fe
7101eab580  add x8,sp,#0x68
7101eab584  mov x0,x20
7101eab588  bl 0x7103776910
7101eab58c  ldr x8,[x19, #0x170]
7101eab590  add x2,x8,#0x26
7101eab594  add x0,sp,#0x68
7101eab598  mov w1,#0x1
7101eab59c  bl 0x710377a310
7101eab5a0  ldr x0,[sp, #0x70]
7101eab5a4  stp x25,xzr,[sp, #0x68]
7101eab5a8  cbz x0,0x7101eab5b0
7101eab5ac  bl 0x710392eb40
7101eab5b0  stp x25,xzr,[sp, #0x48]
7101eab5b4  cbz x22,0x7101eab5c0
7101eab5b8  mov x0,x22
7101eab5bc  bl 0x710392eb40
7101eab5c0  adrp x8,0x710523d000
7101eab5c4  add x8,x8,#0x988
7101eab5c8  stp x8,xzr,[sp, #0x58]
7101eab5cc  cbz x21,0x7101eab5e8
7101eab5d0  ldr x0,[x21, #0x18]
7101eab5d4  stp x25,xzr,[x21, #0x10]
7101eab5d8  cbz x0,0x7101eab5e0
7101eab5dc  bl 0x710392eb40
7101eab5e0  mov x0,x21
7101eab5e4  bl 0x710392eb40
7101eab5e8  ldr d8,[sp, #0xb0]
7101eab5ec  ldp x29,x30,[sp, #0x100]
7101eab5f0  ldp x20,x19,[sp, #0xf0]
7101eab5f4  ldp x22,x21,[sp, #0xe0]
7101eab5f8  ldp x24,x23,[sp, #0xd0]
7101eab5fc  ldp x28,x25,[sp, #0xc0]
7101eab600  add sp,sp,#0x110
7101eab604  ret
7101eab608  bl 0x71039c1330
