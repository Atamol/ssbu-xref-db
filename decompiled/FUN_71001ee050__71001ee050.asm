// addr:      71001ee050
// offset:    0x1ee050
// name:      FUN_71001ee050
// mangled:   
// size:      1232

71001ee050  sub sp,sp,#0x110
71001ee054  stp x28,x27,[sp, #0xb0]
71001ee058  stp x26,x25,[sp, #0xc0]
71001ee05c  stp x24,x23,[sp, #0xd0]
71001ee060  stp x22,x21,[sp, #0xe0]
71001ee064  stp x20,x19,[sp, #0xf0]
71001ee068  stp x29,x30,[sp, #0x100]
71001ee06c  add x29,sp,#0x100
71001ee070  adrp x28,0x71052a4000
71001ee074  ldr x28,[x28, #0xda8]
71001ee078  adrp x27,0x71052a4000
71001ee07c  ldrb w8,[x28]
71001ee080  ldr x27,[x27, #0xdb0]
71001ee084  mov x19,x0
71001ee088  add x20,x27,#0x18
71001ee08c  cbz w8,0x71001ee0c8
71001ee090  adrp x8,0x71052a4000
71001ee094  ldr x8,[x8, #0xdb8]
71001ee098  ldr x0,[x8]
71001ee09c  bl 0x7101717960
71001ee0a0  ldr w8,[x0]
71001ee0a4  cbz w8,0x71001ee0c8
71001ee0a8  ldr x10,[x27, #0xa0]
71001ee0ac  ldp x9,x10,[x10]
71001ee0b0  sub x10,x10,x9
71001ee0b4  asr x10,x10,#0x3
71001ee0b8  cmp x10,x8
71001ee0bc  b.ls 0x71001ee244
71001ee0c0  ldr x8,[x9, x8, LSL #0x3]
71001ee0c4  add x20,x8,#0x10
71001ee0c8  ldr x8,[x20]
71001ee0cc  cbz x8,0x71001ee25c
71001ee0d0  ldr x8,[x8, #0x10]
71001ee0d4  cbz x8,0x71001ee25c
71001ee0d8  ldrb w8,[x28]
71001ee0dc  add x20,x27,#0x18
71001ee0e0  cbz w8,0x71001ee11c
71001ee0e4  adrp x8,0x71052a4000
71001ee0e8  ldr x8,[x8, #0xdb8]
71001ee0ec  ldr x0,[x8]
71001ee0f0  bl 0x7101717960
71001ee0f4  ldr w8,[x0]
71001ee0f8  cbz w8,0x71001ee11c
71001ee0fc  ldr x10,[x27, #0xa0]
71001ee100  ldp x9,x10,[x10]
71001ee104  sub x10,x10,x9
71001ee108  asr x10,x10,#0x3
71001ee10c  cmp x10,x8
71001ee110  b.ls 0x71001ee244
71001ee114  ldr x8,[x9, x8, LSL #0x3]
71001ee118  add x20,x8,#0x10
71001ee11c  ldr x8,[x20]
71001ee120  cbz x8,0x71001ee25c
71001ee124  ldr x8,[x8, #0x10]
71001ee128  cbz x8,0x71001ee25c
71001ee12c  ldr x8,[x8, #0xe8]
71001ee130  cbz x8,0x71001ee25c
71001ee134  ldrb w8,[x28]
71001ee138  add x20,x27,#0x28
71001ee13c  cbz w8,0x71001ee178
71001ee140  adrp x8,0x71052a4000
71001ee144  ldr x8,[x8, #0xdb8]
71001ee148  ldr x0,[x8]
71001ee14c  bl 0x7101717960
71001ee150  ldr w8,[x0]
71001ee154  cbz w8,0x71001ee178
71001ee158  ldr x10,[x27, #0xa0]
71001ee15c  ldp x9,x10,[x10]
71001ee160  sub x10,x10,x9
71001ee164  asr x10,x10,#0x3
71001ee168  cmp x10,x8
71001ee16c  b.ls 0x71001ee508
71001ee170  ldr x8,[x9, x8, LSL #0x3]
71001ee174  add x20,x8,#0x20
71001ee178  ldr x8,[x20]
71001ee17c  ldr x8,[x8, #0x10]
71001ee180  ldr x0,[x8, #0x18]
71001ee184  ldr w1,[x19, #0xa0]
71001ee188  bl 0x71001cd7d0
71001ee18c  cbz x0,0x71001ee25c
71001ee190  ldrb w8,[x28]
71001ee194  mov x21,x0
71001ee198  add x20,x27,#0x18
71001ee19c  cbz w8,0x71001ee1d8
71001ee1a0  adrp x8,0x71052a4000
71001ee1a4  ldr x8,[x8, #0xdb8]
71001ee1a8  ldr x0,[x8]
71001ee1ac  bl 0x7101717960
71001ee1b0  ldr w8,[x0]
71001ee1b4  cbz w8,0x71001ee1d8
71001ee1b8  ldr x10,[x27, #0xa0]
71001ee1bc  ldp x9,x10,[x10]
71001ee1c0  sub x10,x10,x9
71001ee1c4  asr x10,x10,#0x3
71001ee1c8  cmp x10,x8
71001ee1cc  b.ls 0x71001ee508
71001ee1d0  ldr x8,[x9, x8, LSL #0x3]
71001ee1d4  add x20,x8,#0x10
71001ee1d8  ldr x8,[x20]
71001ee1dc  ldr x8,[x8, #0x10]
71001ee1e0  ldr x20,[x8, #0x198]
71001ee1e4  ldr x8,[x19, #0x148]
71001ee1e8  add x0,x8,#0x10
71001ee1ec  adrp x1,0x710449c000
71001ee1f0  add x1,x1,#0xe33
71001ee1f4  mov x2,xzr
71001ee1f8  bl 0x71001f2ba0
71001ee1fc  mov x1,x0
71001ee200  mov x0,x20
71001ee204  bl 0x71001e85d0
71001ee208  cmn w0,#0x1
71001ee20c  b.eq 0x71001ee2ac
71001ee210  orr w8,wzr,#0x10001
71001ee214  add x0,sp,#0x30
71001ee218  add x1,sp,#0x10
71001ee21c  str w8,[sp, #0x10]
71001ee220  bl 0x71001b4200
71001ee224  mov w1,#0x2
71001ee228  add x2,sp,#0x30
71001ee22c  mov w3,#0x1
71001ee230  mov x0,x21
71001ee234  bl 0x71001d0f00
71001ee238  mov x0,x19
71001ee23c  bl 0x71001cd870
71001ee240  b 0x71001ee28c
71001ee244  adrp x0,0x71042c4000
71001ee248  add x0,x0,#0x35f
71001ee24c  mov w1,#0x47
71001ee250  orr w2,wzr,#0xe0000003
71001ee254  mov w3,wzr
71001ee258  bl 0x71001b1300
71001ee25c  adrp x8,0x71052a6000
71001ee260  ldr x8,[x8, #0xc28]
71001ee264  adrp x9,0x71052a7000
71001ee268  ldr x9,[x9, #0x30]
71001ee26c  add x1,sp,#0x30
71001ee270  add x8,x8,#0x10
71001ee274  stp x8,x9,[sp, #0x30]
71001ee278  adrp x8,0x7104411000
71001ee27c  add x8,x8,#0x4cc
71001ee280  mov x0,x19
71001ee284  stp xzr,x8,[sp, #0x40]
71001ee288  bl 0x71001d3d60
71001ee28c  ldp x29,x30,[sp, #0x100]
71001ee290  ldp x20,x19,[sp, #0xf0]
71001ee294  ldp x22,x21,[sp, #0xe0]
71001ee298  ldp x24,x23,[sp, #0xd0]
71001ee29c  ldp x26,x25,[sp, #0xc0]
71001ee2a0  ldp x28,x27,[sp, #0xb0]
71001ee2a4  add sp,sp,#0x110
71001ee2a8  ret
71001ee2ac  ldr x22,[x20, #0x10]
71001ee2b0  cbz x22,0x71001ee25c
71001ee2b4  ldrb w8,[x28]
71001ee2b8  add x23,x19,#0x140
71001ee2bc  add x21,x27,#0x18
71001ee2c0  str x23,[sp]
71001ee2c4  cbz w8,0x71001ee300
71001ee2c8  adrp x8,0x71052a4000
71001ee2cc  ldr x8,[x8, #0xdb8]
71001ee2d0  ldr x0,[x8]
71001ee2d4  bl 0x7101717960
71001ee2d8  ldr w8,[x0]
71001ee2dc  cbz w8,0x71001ee300
71001ee2e0  ldr x10,[x27, #0xa0]
71001ee2e4  ldp x9,x10,[x10]
71001ee2e8  sub x10,x10,x9
71001ee2ec  asr x10,x10,#0x3
71001ee2f0  cmp x10,x8
71001ee2f4  b.ls 0x71001ee318
71001ee2f8  ldr x8,[x9, x8, LSL #0x3]
71001ee2fc  add x21,x8,#0x10
71001ee300  ldr x8,[x21]
71001ee304  cbz x8,0x71001ee330
71001ee308  ldr x8,[x8, #0x10]
71001ee30c  cbz x8,0x71001ee330
71001ee310  ldr x26,[x8, #0xe8]
71001ee314  b 0x71001ee334
71001ee318  adrp x0,0x71042c4000
71001ee31c  add x0,x0,#0x35f
71001ee320  mov w1,#0x47
71001ee324  orr w2,wzr,#0xe0000003
71001ee328  mov w3,wzr
71001ee32c  bl 0x71001b1300
71001ee330  mov x26,xzr
71001ee334  adrp x8,0x71052a6000
71001ee338  ldr x8,[x8, #0xfb0]
71001ee33c  add x8,x8,#0x10
71001ee340  str x8,[sp, #0x30]
71001ee344  adrp x8,0x71052a4000
71001ee348  ldr x8,[x8, #0xd80]
71001ee34c  add x23,sp,#0x30
71001ee350  add x0,x23,#0x8
71001ee354  str x0,[sp, #0x8]
71001ee358  add x21,x8,#0x10
71001ee35c  add x8,x23,#0x10
71001ee360  mov w24,#0x10
71001ee364  str x21,[sp, #0x38]
71001ee368  strb wzr,[sp, #0x40]
71001ee36c  mov x25,#-0x1
71001ee370  stp x8,x24,[sp, #0x50]
71001ee374  ldr x1,[x26, #0x168]
71001ee378  mov x2,x25
71001ee37c  bl 0x71001b47e0
71001ee380  ldrh w8,[x26, #0x178]
71001ee384  strh w8,[sp, #0x60]
71001ee388  add x8,x23,#0x38
71001ee38c  str x21,[sp, #0x68]
71001ee390  mov x21,x8
71001ee394  add x8,x23,#0x40
71001ee398  stp x8,x24,[sp, #0x80]
71001ee39c  strb wzr,[sp, #0x70]
71001ee3a0  ldr x1,[x26, #0x198]
71001ee3a4  mov x0,x21
71001ee3a8  mov x2,x25
71001ee3ac  bl 0x71001b47e0
71001ee3b0  ldrb w8,[x26, #0x1b8]
71001ee3b4  ldp x9,x10,[x26, #0x1a8]
71001ee3b8  stp x9,x10,[sp, #0x90]
71001ee3bc  strb w8,[sp, #0xa0]
71001ee3c0  and x8,x9,#0xffff
71001ee3c4  ubfx x9,x10,#0x20,#0x10
71001ee3c8  add w26,w8,w9
71001ee3cc  ldrb w8,[x19, #0x1c0]
71001ee3d0  add x25,x19,#0x158
71001ee3d4  cbnz w8,0x71001ee3e0
71001ee3d8  mov x0,x25
71001ee3dc  bl 0x71001f2180
71001ee3e0  ldr x0,[x19, #0x160]
71001ee3e4  mov w1,w26
71001ee3e8  bl 0x71001bee30
71001ee3ec  strb wzr,[x19, #0x1c1]
71001ee3f0  ldr x8,[x22]
71001ee3f4  ldr x8,[x8, #0x28]
71001ee3f8  ldr x1,[sp]
71001ee3fc  mov x0,x22
71001ee400  mov x2,x25
71001ee404  blr x8
71001ee408  adrp x1,0x710449c000
71001ee40c  add x1,x1,#0xe48
71001ee410  mov x0,x25
71001ee414  mov x2,xzr
71001ee418  bl 0x71001f2ba0
71001ee41c  cbnz x0,0x71001ee430
71001ee420  ldr x8,[x19, #0x148]
71001ee424  add x1,x8,#0x10
71001ee428  mov x0,x20
71001ee42c  bl 0x71001e7a40
71001ee430  adrp x8,0x71052a6000
71001ee434  ldr x8,[x8, #0xc28]
71001ee438  adrp x9,0x71052a7000
71001ee43c  ldr x9,[x9, #0x40]
71001ee440  add x1,sp,#0x10
71001ee444  add x8,x8,#0x10
71001ee448  stp x8,x9,[sp, #0x10]
71001ee44c  adrp x8,0x7104411000
71001ee450  add x8,x8,#0x4cc
71001ee454  mov x0,x19
71001ee458  stp xzr,x8,[sp, #0x20]
71001ee45c  bl 0x71001d3d60
71001ee460  add x8,sp,#0x10
71001ee464  bl 0x71001b12a0
71001ee468  ldrb w8,[x28]
71001ee46c  cbz w8,0x71001ee4b8
71001ee470  adrp x8,0x71052a4000
71001ee474  ldr x8,[x8, #0xdb8]
71001ee478  ldr x0,[x8]
71001ee47c  bl 0x7101717960
71001ee480  ldr w8,[x0]
71001ee484  cbz w8,0x71001ee4b8
71001ee488  ldr x9,[x27, #0xa0]
71001ee48c  ldp x10,x9,[x9]
71001ee490  sub x9,x9,x10
71001ee494  asr x9,x9,#0x3
71001ee498  cmp x9,x8
71001ee49c  b.hi 0x71001ee4b8
71001ee4a0  adrp x0,0x71042c4000
71001ee4a4  add x0,x0,#0x35f
71001ee4a8  mov w1,#0x47
71001ee4ac  orr w2,wzr,#0xe0000003
71001ee4b0  mov w3,wzr
71001ee4b4  bl 0x71001b1300
71001ee4b8  adrp x8,0x71052a6000
71001ee4bc  ldr x8,[x8, #0xf20]
71001ee4c0  ldrsw x8,[x8]
71001ee4c4  ldr x9,[sp, #0x10]
71001ee4c8  add x8,x9,x8
71001ee4cc  str x8,[x19, #0x138]
71001ee4d0  adrp x8,0x71052a6000
71001ee4d4  ldr x8,[x8, #0xfb0]
71001ee4d8  add x8,x8,#0x10
71001ee4dc  str x8,[sp, #0x30]
71001ee4e0  adrp x8,0x71052a4000
71001ee4e4  ldr x8,[x8, #0xd80]
71001ee4e8  add x19,x8,#0x10
71001ee4ec  mov x0,x21
71001ee4f0  str x19,[sp, #0x68]
71001ee4f4  bl 0x71001b4910
71001ee4f8  ldr x0,[sp, #0x8]
71001ee4fc  str x19,[sp, #0x38]
71001ee500  bl 0x71001b4910
71001ee504  b 0x71001ee28c
71001ee508  adrp x0,0x71042c4000
71001ee50c  add x0,x0,#0x35f
71001ee510  mov w1,#0x47
71001ee514  orr w2,wzr,#0xe0000003
71001ee518  mov w3,wzr
71001ee51c  bl 0x71001b1300
