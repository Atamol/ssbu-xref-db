// addr:      7102eaaea0
// offset:    0x2eaaea0
// name:      FUN_7102eaaea0
// mangled:   
// size:      1960

7102eaaea0  sub sp,sp,#0x50
7102eaaea4  stp x24,x23,[sp, #0x10]
7102eaaea8  stp x22,x21,[sp, #0x20]
7102eaaeac  stp x20,x19,[sp, #0x30]
7102eaaeb0  stp x29,x30,[sp, #0x40]
7102eaaeb4  add x29,sp,#0x40
7102eaaeb8  stp xzr,xzr,[x0, #0xf0]
7102eaaebc  adrp x24,0x71052a8000
7102eaaec0  stp xzr,xzr,[x0, #0xe0]
7102eaaec4  add x8,x0,#0x155
7102eaaec8  mov x22,x1
7102eaaecc  mov x19,x0
7102eaaed0  mov x21,x3
7102eaaed4  stp xzr,xzr,[x0, #0xd0]
7102eaaed8  mov x20,x2
7102eaaedc  str xzr,[x0, #0x118]
7102eaaee0  stp xzr,xzr,[x0, #0xc0]
7102eaaee4  stp xzr,xzr,[x0, #0xb0]
7102eaaee8  stp xzr,xzr,[x0, #0xa0]
7102eaaeec  stp xzr,xzr,[x0, #0x90]
7102eaaef0  stp xzr,xzr,[x0, #0x80]
7102eaaef4  stp xzr,xzr,[x0, #0x70]
7102eaaef8  stp xzr,xzr,[x0, #0x60]
7102eaaefc  stp xzr,xzr,[x0, #0x50]
7102eaaf00  stp xzr,xzr,[x0, #0x40]
7102eaaf04  stp xzr,xzr,[x0, #0x30]
7102eaaf08  stp xzr,xzr,[x0, #0x20]
7102eaaf0c  stp xzr,xzr,[x0, #0x10]
7102eaaf10  stp xzr,xzr,[x0]
7102eaaf14  stp x1,x2,[x0, #0x108]
7102eaaf18  ldr x24,[x24, #0xa88]
7102eaaf1c  ldr q0,[x24]
7102eaaf20  orr w1,wzr,#0xf0
7102eaaf24  str q0,[x0, #0x140]
7102eaaf28  stp q0,q0,[x0, #0x120]
7102eaaf2c  str xzr,[x8]
7102eaaf30  str xzr,[x0, #0x150]
7102eaaf34  str xzr,[x0, #0x170]
7102eaaf38  str wzr,[x0, #0x178]
7102eaaf3c  str wzr,[x0, #0x1a0]
7102eaaf40  str wzr,[x0, #0x1f0]
7102eaaf44  str x4,[x0, #0x240]
7102eaaf48  str wzr,[x0, #0x100]
7102eaaf4c  stp xzr,xzr,[x0, #0x190]
7102eaaf50  str q0,[x0, #0x160]
7102eaaf54  stp xzr,xzr,[x0, #0x180]
7102eaaf58  stp q0,q0,[x0, #0x1b0]
7102eaaf5c  stp q0,q0,[x0, #0x1d0]
7102eaaf60  stp q0,q0,[x0, #0x200]
7102eaaf64  stp q0,q0,[x0, #0x220]
7102eaaf68  mov w0,#0x10
7102eaaf6c  bl 0x710392e290
7102eaaf70  mov x23,x0
7102eaaf74  cbnz x0,0x7102eaafc0
7102eaaf78  adrp x8,0x7105332000
7102eaaf7c  ldr x0,[x8, #0xf00]
7102eaaf80  cbz x0,0x7102eaafbc
7102eaaf84  orr w8,wzr,#0xf0
7102eaaf88  str wzr,[sp, #0xc]
7102eaaf8c  add x1,sp,#0xc
7102eaaf90  str x8,[sp]
7102eaaf94  ldr x8,[x0]
7102eaaf98  ldr x8,[x8, #0x30]
7102eaaf9c  mov x2,sp
7102eaafa0  blr x8
7102eaafa4  tbz w0,#0x0,0x7102eaafbc
7102eaafa8  mov w0,#0x10
7102eaafac  orr w1,wzr,#0xf0
7102eaafb0  bl 0x710392e290
7102eaafb4  mov x23,x0
7102eaafb8  cbnz x0,0x7102eaafc0
7102eaafbc  mov x23,xzr
7102eaafc0  mov x0,x23
7102eaafc4  mov x1,x22
7102eaafc8  mov x2,x21
7102eaafcc  mov w3,wzr
7102eaafd0  mov w4,wzr
7102eaafd4  mov x5,xzr
7102eaafd8  bl 0x71031460f0
7102eaafdc  adrp x8,0x710428f000
7102eaafe0  add x8,x8,#0xbe2
7102eaafe4  adrp x9,0x7104306000
7102eaafe8  add x9,x9,#0x9a6
7102eaafec  str x23,[x19, #0x118]
7102eaaff0  str x8,[x19, #0x28]
7102eaaff4  str x9,[x19, #0xa8]
7102eaaff8  movi d0,#0x0
7102eaaffc  ldr s1,[x20, #0x5c]
7102eab000  mov v2.16B,v0.16B
7102eab004  add x8,x20,#0x64
7102eab008  add x9,x20,#0x60
7102eab00c  ld1 {v2.S}[0],[x8]
7102eab010  add x10,x20,#0x6c
7102eab014  ld1 {v1.S}[1],[x9]
7102eab018  mov v4.16B,v0.16B
7102eab01c  mov v1.D[0x1],v2.D[0x0]
7102eab020  mov v2.16B,v0.16B
7102eab024  str q1,[x19, #0x60]
7102eab028  ldr s1,[x20, #0x5c]
7102eab02c  fneg s1,s1
7102eab030  mov w0,#0x10
7102eab034  ld1 {v2.S}[0],[x8]
7102eab038  adrp x8,0x7104465000
7102eab03c  ld1 {v1.S}[1],[x9]
7102eab040  add x9,x20,#0x70
7102eab044  mov v1.D[0x1],v2.D[0x0]
7102eab048  mov v2.16B,v0.16B
7102eab04c  str q1,[x19, #0xe0]
7102eab050  ldr s1,[x20, #0x68]
7102eab054  ld1 {v2.S}[0],[x9]
7102eab058  ld1 {v1.S}[1],[x10]
7102eab05c  ldr q3,[x8, #0xba0]
7102eab060  mov v1.D[0x1],v2.D[0x0]
7102eab064  adrp x8,0x7104465000
7102eab068  str q1,[x19, #0x70]
7102eab06c  ldr s2,[x20, #0x68]
7102eab070  ldr x20,[x19, #0x108]
7102eab074  fneg s2,s2
7102eab078  ld1 {v4.S}[0],[x9]
7102eab07c  ldr q1,[x8, #0x770]
7102eab080  ld1 {v2.S}[1],[x10]
7102eab084  strb wzr,[x19, #0x248]
7102eab088  stp q3,q1,[x19, #0x30]
7102eab08c  adrp x8,0x7104466000
7102eab090  mov v2.D[0x1],v4.D[0x0]
7102eab094  ldr q1,[x8, #0x4f0]
7102eab098  str q2,[x19, #0xf0]
7102eab09c  ldr q2,[x24]
7102eab0a0  mov v0.S[0x0],v2.S[0x2]
7102eab0a4  adrp x8,0x7104467000
7102eab0a8  adrp x9,0x7104467000
7102eab0ac  ldr q3,[x9, #0x880]
7102eab0b0  str q1,[x19, #0x50]
7102eab0b4  ldr q1,[x8, #0x10]
7102eab0b8  adrp x8,0x710446a000
7102eab0bc  orr w1,wzr,#0xf0
7102eab0c0  mov v2.D[0x1],v0.D[0x0]
7102eab0c4  stp q1,q3,[x19, #0xb0]
7102eab0c8  ldr q1,[x8, #0xca0]
7102eab0cc  str q1,[x19, #0xd0]
7102eab0d0  stp q2,q2,[x19, #0x180]
7102eab0d4  bl 0x710392e290
7102eab0d8  mov x21,x0
7102eab0dc  cbnz x0,0x7102eab128
7102eab0e0  adrp x8,0x7105332000
7102eab0e4  ldr x0,[x8, #0xf00]
7102eab0e8  cbz x0,0x7102eab124
7102eab0ec  orr w8,wzr,#0xf0
7102eab0f0  str wzr,[sp, #0xc]
7102eab0f4  add x1,sp,#0xc
7102eab0f8  str x8,[sp]
7102eab0fc  ldr x8,[x0]
7102eab100  ldr x8,[x8, #0x30]
7102eab104  mov x2,sp
7102eab108  blr x8
7102eab10c  tbz w0,#0x0,0x7102eab124
7102eab110  mov w0,#0x10
7102eab114  orr w1,wzr,#0xf0
7102eab118  bl 0x710392e290
7102eab11c  mov x21,x0
7102eab120  cbnz x0,0x7102eab128
7102eab124  mov x21,xzr
7102eab128  adrp x22,0x71042c3000
7102eab12c  add x22,x22,#0x170
7102eab130  mov x0,x21
7102eab134  mov x1,x20
7102eab138  mov x2,x22
7102eab13c  mov w3,wzr
7102eab140  mov w4,wzr
7102eab144  mov x5,xzr
7102eab148  bl 0x71031460f0
7102eab14c  str x21,[x19]
7102eab150  ldr x8,[x21]
7102eab154  ldr x8,[x8, #0x90]
7102eab158  mov x0,x21
7102eab15c  blr x8
7102eab160  mov x0,sp
7102eab164  mov x1,x19
7102eab168  mov x2,x22
7102eab16c  bl 0x7102eab650
7102eab170  ldr x8,[sp]
7102eab174  str x8,[x19, #0x18]
7102eab178  ldr x8,[x19, #0x108]
7102eab17c  ldr x8,[x8, #0x310]
7102eab180  ldp x9,x10,[x8, #0xd0]
7102eab184  cmp x9,x10
7102eab188  b.eq 0x7102eab1c0
7102eab18c  mov x11,#0xe7b5
7102eab190  movk x11,#0x2814, LSL #16
7102eab194  movk x11,#0x12, LSL #32
7102eab198  ldr w8,[x9, #0x8]
7102eab19c  cmp w8,#0x1
7102eab1a0  b.hi 0x7102eab1b4
7102eab1a4  ldr x8,[x9]
7102eab1a8  ldr x12,[x8, #0x68]
7102eab1ac  cmp x12,x11
7102eab1b0  b.eq 0x7102eab448
7102eab1b4  add x9,x9,#0x10
7102eab1b8  cmp x10,x9
7102eab1bc  b.ne 0x7102eab198
7102eab1c0  str xzr,[x19, #0x8]
7102eab1c4  ldr x8,[x19, #0x108]
7102eab1c8  ldr x8,[x8, #0x310]
7102eab1cc  ldp x9,x10,[x8, #0xd0]
7102eab1d0  cmp x9,x10
7102eab1d4  b.eq 0x7102eab20c
7102eab1d8  mov x11,#0xb4c1
7102eab1dc  movk x11,#0xc84d, LSL #16
7102eab1e0  movk x11,#0x13, LSL #32
7102eab1e4  ldr w8,[x9, #0x8]
7102eab1e8  cmp w8,#0x1
7102eab1ec  b.hi 0x7102eab200
7102eab1f0  ldr x8,[x9]
7102eab1f4  ldr x12,[x8, #0x68]
7102eab1f8  cmp x12,x11
7102eab1fc  b.eq 0x7102eab4c8
7102eab200  add x9,x9,#0x10
7102eab204  cmp x10,x9
7102eab208  b.ne 0x7102eab1e4
7102eab20c  str xzr,[x19, #0x10]
7102eab210  ldr x20,[x19, #0x108]
7102eab214  mov w0,#0x10
7102eab218  orr w1,wzr,#0xf0
7102eab21c  bl 0x710392e290
7102eab220  mov x21,x0
7102eab224  cbnz x0,0x7102eab270
7102eab228  adrp x8,0x7105332000
7102eab22c  ldr x0,[x8, #0xf00]
7102eab230  cbz x0,0x7102eab26c
7102eab234  orr w8,wzr,#0xf0
7102eab238  str wzr,[sp, #0xc]
7102eab23c  add x1,sp,#0xc
7102eab240  str x8,[sp]
7102eab244  ldr x8,[x0]
7102eab248  ldr x8,[x8, #0x30]
7102eab24c  mov x2,sp
7102eab250  blr x8
7102eab254  tbz w0,#0x0,0x7102eab26c
7102eab258  mov w0,#0x10
7102eab25c  orr w1,wzr,#0xf0
7102eab260  bl 0x710392e290
7102eab264  mov x21,x0
7102eab268  cbnz x0,0x7102eab270
7102eab26c  mov x21,xzr
7102eab270  adrp x22,0x710439b000
7102eab274  add x22,x22,#0x5d1
7102eab278  mov x0,x21
7102eab27c  mov x1,x20
7102eab280  mov x2,x22
7102eab284  mov w3,wzr
7102eab288  mov w4,wzr
7102eab28c  mov x5,xzr
7102eab290  bl 0x71031460f0
7102eab294  str x21,[x19, #0x80]
7102eab298  ldr x8,[x21]
7102eab29c  ldr x8,[x8, #0x90]
7102eab2a0  mov x0,x21
7102eab2a4  blr x8
7102eab2a8  mov x0,sp
7102eab2ac  mov x1,x19
7102eab2b0  mov x2,x22
7102eab2b4  bl 0x7102eab650
7102eab2b8  ldr x8,[sp]
7102eab2bc  str x8,[x19, #0x98]
7102eab2c0  ldr x8,[x19, #0x108]
7102eab2c4  ldr x8,[x8, #0x310]
7102eab2c8  ldp x9,x10,[x8, #0xd0]
7102eab2cc  cmp x9,x10
7102eab2d0  b.eq 0x7102eab308
7102eab2d4  mov x11,#0xdad6
7102eab2d8  movk x11,#0xd21b, LSL #16
7102eab2dc  movk x11,#0x12, LSL #32
7102eab2e0  ldr w8,[x9, #0x8]
7102eab2e4  cmp w8,#0x1
7102eab2e8  b.hi 0x7102eab2fc
7102eab2ec  ldr x8,[x9]
7102eab2f0  ldr x12,[x8, #0x68]
7102eab2f4  cmp x12,x11
7102eab2f8  b.eq 0x7102eab548
7102eab2fc  add x9,x9,#0x10
7102eab300  cmp x10,x9
7102eab304  b.ne 0x7102eab2e0
7102eab308  str xzr,[x19, #0x88]
7102eab30c  ldr x8,[x19, #0x108]
7102eab310  ldr x9,[x8, #0x310]
7102eab314  ldp x8,x9,[x9, #0xd0]
7102eab318  cmp x8,x9
7102eab31c  b.eq 0x7102eab354
7102eab320  mov x10,#0x89a2
7102eab324  movk x10,#0x3242, LSL #16
7102eab328  movk x10,#0x13, LSL #32
7102eab32c  ldr w11,[x8, #0x8]
7102eab330  cmp w11,#0x1
7102eab334  b.hi 0x7102eab348
7102eab338  ldr x11,[x8]
7102eab33c  ldr x12,[x11, #0x68]
7102eab340  cmp x12,x10
7102eab344  b.eq 0x7102eab5c8
7102eab348  add x8,x8,#0x10
7102eab34c  cmp x9,x8
7102eab350  b.ne 0x7102eab32c
7102eab354  str xzr,[x19, #0x90]
7102eab358  ldr x8,[x19, #0x108]
7102eab35c  ldr x8,[x8, #0x300]
7102eab360  ldr x9,[x8, #0x18]
7102eab364  ldp x8,x9,[x9]
7102eab368  cmp x8,x9
7102eab36c  b.eq 0x7102eab3f4
7102eab370  mov x10,#0xdf99
7102eab374  movk x10,#0xb569, LSL #16
7102eab378  movk x10,#0x7, LSL #32
7102eab37c  ldr x11,[x8], #0x8
7102eab380  ldr x12,[x11, #0xa0]
7102eab384  and x12,x12,#0xffffffffff
7102eab388  cmp x12,x10
7102eab38c  b.eq 0x7102eab39c
7102eab390  cmp x9,x8
7102eab394  b.ne 0x7102eab37c
7102eab398  b 0x7102eab3f4
7102eab39c  ldr x8,[x11, #0x130]
7102eab3a0  str x8,[x19, #0x240]
7102eab3a4  cbz x8,0x7102eab3f4
7102eab3a8  ldp x0,x1,[x8]
7102eab3ac  adrp x2,0x71043bc000
7102eab3b0  add x2,x2,#0xb6c
7102eab3b4  bl 0x71025f55b0
7102eab3b8  ldr x8,[x19, #0x240]
7102eab3bc  ldp x0,x1,[x8]
7102eab3c0  adrp x2,0x710436a000
7102eab3c4  add x2,x2,#0x9e7
7102eab3c8  bl 0x71025f55b0
7102eab3cc  ldr x8,[x19, #0x240]
7102eab3d0  ldp x0,x1,[x8]
7102eab3d4  adrp x2,0x71042a1000
7102eab3d8  add x2,x2,#0x676
7102eab3dc  bl 0x71025f55b0
7102eab3e0  ldr x8,[x19, #0x240]
7102eab3e4  ldp x0,x1,[x8]
7102eab3e8  adrp x2,0x7104441000
7102eab3ec  add x2,x2,#0xec7
7102eab3f0  bl 0x71025f55b0
7102eab3f4  ldr x8,[x19, #0x110]
7102eab3f8  ldp x20,x19,[sp, #0x30]
7102eab3fc  ldr s0,[x8, #0x1c8]
7102eab400  fcvtzu w8,s0
7102eab404  lsl w8,w8,#0x2
7102eab408  ucvtf s0,w8
7102eab40c  ldp x29,x30,[sp, #0x40]
7102eab410  adrp x9,0x710532e000
7102eab414  ldp x22,x21,[sp, #0x20]
7102eab418  mov w10,#0xbf800000
7102eab41c  ldp x24,x23,[sp, #0x10]
7102eab420  adrp x8,0x7105146000
7102eab424  adrp x11,0x710532e000
7102eab428  str w10,[x9, #0x740]
7102eab42c  mov w9,#0x1
7102eab430  str s0,[x8, #0x8f0]
7102eab434  adrp x8,0x710532e000
7102eab438  str wzr,[x11, #0x744]
7102eab43c  strb w9,[x8, #0x748]
7102eab440  add sp,sp,#0x50
7102eab444  ret
7102eab448  str x8,[x19, #0x8]
7102eab44c  cbz x8,0x7102eab4a0
7102eab450  add x0,x8,#0x108
7102eab454  strb wzr,[x8, #0x110]
7102eab458  bl 0x71025e9d50
7102eab45c  ldr x8,[x19, #0x8]
7102eab460  cbz x8,0x7102eab1c4
7102eab464  ldrb w9,[x8, #0xe0]
7102eab468  cbz w9,0x7102eab47c
7102eab46c  ldr x9,[x8, #0xc8]
7102eab470  cbz x9,0x7102eab47c
7102eab474  mov w10,#0x101
7102eab478  strh w10,[x9, #0x30]
7102eab47c  ldr x9,[x8, #0xd8]
7102eab480  cbz x9,0x7102eab48c
7102eab484  mov w10,#0x1
7102eab488  strb w10,[x9, #0x21]
7102eab48c  ldrb w9,[x8, #0xe0]
7102eab490  cbz w9,0x7102eab49c
7102eab494  ldr x8,[x8, #0xb0]
7102eab498  strb wzr,[x8, #0x10]
7102eab49c  ldr x8,[x19, #0x8]
7102eab4a0  cbz x8,0x7102eab1c4
7102eab4a4  ldrb w9,[x8, #0xe0]
7102eab4a8  cbz w9,0x7102eab4b8
7102eab4ac  ldr x9,[x8, #0xc8]
7102eab4b0  cbz x9,0x7102eab4b8
7102eab4b4  strh wzr,[x9, #0x32]
7102eab4b8  ldr x8,[x8, #0xd8]
7102eab4bc  cbz x8,0x7102eab1c4
7102eab4c0  strb wzr,[x8, #0x22]
7102eab4c4  b 0x7102eab1c4
7102eab4c8  str x8,[x19, #0x10]
7102eab4cc  cbz x8,0x7102eab520
7102eab4d0  add x0,x8,#0x108
7102eab4d4  strb wzr,[x8, #0x110]
7102eab4d8  bl 0x71025e9d50
7102eab4dc  ldr x8,[x19, #0x10]
7102eab4e0  cbz x8,0x7102eab210
7102eab4e4  ldrb w9,[x8, #0xe0]
7102eab4e8  cbz w9,0x7102eab4fc
7102eab4ec  ldr x9,[x8, #0xc8]
7102eab4f0  cbz x9,0x7102eab4fc
7102eab4f4  mov w10,#0x101
7102eab4f8  strh w10,[x9, #0x30]
7102eab4fc  ldr x9,[x8, #0xd8]
7102eab500  cbz x9,0x7102eab50c
7102eab504  mov w10,#0x1
7102eab508  strb w10,[x9, #0x21]
7102eab50c  ldrb w9,[x8, #0xe0]
7102eab510  cbz w9,0x7102eab51c
7102eab514  ldr x8,[x8, #0xb0]
7102eab518  strb wzr,[x8, #0x10]
7102eab51c  ldr x8,[x19, #0x10]
7102eab520  cbz x8,0x7102eab210
7102eab524  ldrb w9,[x8, #0xe0]
7102eab528  cbz w9,0x7102eab538
7102eab52c  ldr x9,[x8, #0xc8]
7102eab530  cbz x9,0x7102eab538
7102eab534  strh wzr,[x9, #0x32]
7102eab538  ldr x8,[x8, #0xd8]
7102eab53c  cbz x8,0x7102eab210
7102eab540  strb wzr,[x8, #0x22]
7102eab544  b 0x7102eab210
7102eab548  str x8,[x19, #0x88]
7102eab54c  cbz x8,0x7102eab5a0
7102eab550  add x0,x8,#0x108
7102eab554  strb wzr,[x8, #0x110]
7102eab558  bl 0x71025e9d50
7102eab55c  ldr x8,[x19, #0x88]
7102eab560  cbz x8,0x7102eab30c
7102eab564  ldrb w9,[x8, #0xe0]
7102eab568  cbz w9,0x7102eab57c
7102eab56c  ldr x9,[x8, #0xc8]
7102eab570  cbz x9,0x7102eab57c
7102eab574  mov w10,#0x101
7102eab578  strh w10,[x9, #0x30]
7102eab57c  ldr x9,[x8, #0xd8]
7102eab580  cbz x9,0x7102eab58c
7102eab584  mov w10,#0x1
7102eab588  strb w10,[x9, #0x21]
7102eab58c  ldrb w9,[x8, #0xe0]
7102eab590  cbz w9,0x7102eab59c
7102eab594  ldr x8,[x8, #0xb0]
7102eab598  strb wzr,[x8, #0x10]
7102eab59c  ldr x8,[x19, #0x88]
7102eab5a0  cbz x8,0x7102eab30c
7102eab5a4  ldrb w9,[x8, #0xe0]
7102eab5a8  cbz w9,0x7102eab5b8
7102eab5ac  ldr x9,[x8, #0xc8]
7102eab5b0  cbz x9,0x7102eab5b8
7102eab5b4  strh wzr,[x9, #0x32]
7102eab5b8  ldr x8,[x8, #0xd8]
7102eab5bc  cbz x8,0x7102eab30c
7102eab5c0  strb wzr,[x8, #0x22]
7102eab5c4  b 0x7102eab30c
7102eab5c8  str x11,[x19, #0x90]
7102eab5cc  cbz x11,0x7102eab358
7102eab5d0  add x0,x11,#0x108
7102eab5d4  strb wzr,[x11, #0x110]
7102eab5d8  bl 0x71025e9d50
7102eab5dc  ldr x8,[x19, #0x90]
7102eab5e0  cbz x8,0x7102eab358
7102eab5e4  ldrb w9,[x8, #0xe0]
7102eab5e8  cbz w9,0x7102eab5fc
7102eab5ec  ldr x9,[x8, #0xc8]
7102eab5f0  cbz x9,0x7102eab5fc
7102eab5f4  mov w10,#0x101
7102eab5f8  strh w10,[x9, #0x30]
7102eab5fc  ldr x9,[x8, #0xd8]
7102eab600  cbz x9,0x7102eab60c
7102eab604  mov w10,#0x1
7102eab608  strb w10,[x9, #0x21]
7102eab60c  ldrb w9,[x8, #0xe0]
7102eab610  cbz w9,0x7102eab61c
7102eab614  ldr x8,[x8, #0xb0]
7102eab618  strb wzr,[x8, #0x10]
7102eab61c  ldr x8,[x19, #0x90]
7102eab620  cbz x8,0x7102eab358
7102eab624  ldrb w9,[x8, #0xe0]
7102eab628  cbz w9,0x7102eab638
7102eab62c  ldr x9,[x8, #0xc8]
7102eab630  cbz x9,0x7102eab638
7102eab634  strh wzr,[x9, #0x32]
7102eab638  ldr x8,[x8, #0xd8]
7102eab63c  cbz x8,0x7102eab358
7102eab640  strb wzr,[x8, #0x22]
7102eab644  b 0x7102eab358
