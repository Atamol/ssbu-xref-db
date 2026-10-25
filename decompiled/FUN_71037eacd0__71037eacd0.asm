// addr:      71037eacd0
// offset:    0x37eacd0
// name:      FUN_71037eacd0
// mangled:   
// size:      10916

71037eacd0  sub sp,sp,#0x1b0
71037eacd4  stp x28,x27,[sp, #0x150]
71037eacd8  stp x26,x25,[sp, #0x160]
71037eacdc  stp x24,x23,[sp, #0x170]
71037eace0  stp x22,x21,[sp, #0x180]
71037eace4  stp x20,x19,[sp, #0x190]
71037eace8  stp x29,x30,[sp, #0x1a0]
71037eacec  add x29,sp,#0x1a0
71037eacf0  stp x4,x3,[sp, #0x80]
71037eacf4  ldr w8,[x3, #0x34]
71037eacf8  str x2,[sp, #0x20]
71037eacfc  str x1,[sp, #0x90]
71037ead00  str x0,[sp, #0x8]
71037ead04  cbz w8,0x71037ec20c
71037ead08  ldr x8,[sp, #0x88]
71037ead0c  ldr w8,[x8, #0x38]
71037ead10  ldr x9,[sp, #0x20]
71037ead14  add x20,x8,x9
71037ead18  add x8,sp,#0x98
71037ead1c  add x9,x8,#0x8
71037ead20  add x8,x8,#0x9
71037ead24  str x8,[sp, #0x28]
71037ead28  add x8,sp,#0xc0
71037ead2c  str x9,[sp, #0x48]
71037ead30  add x9,x8,#0x30
71037ead34  str x9,[sp, #0x60]
71037ead38  orr x9,x8,#0x1
71037ead3c  add x22,x8,#0x18
71037ead40  add x26,x8,#0x20
71037ead44  str x9,[sp, #0x78]
71037ead48  add x9,x8,#0x19
71037ead4c  add x8,x8,#0x21
71037ead50  stp x8,x9,[sp, #0x10]
71037ead54  sub x8,x29,#0x98
71037ead58  orr x9,x8,#0x1
71037ead5c  add x8,x8,#0x18
71037ead60  str x8,[sp, #0x40]
71037ead64  ldr x8,[sp, #0x90]
71037ead68  stp x9,x22,[sp, #0x50]
71037ead6c  add x9,x8,#0x58
71037ead70  mov w19,wzr
71037ead74  add x28,x8,#0x48
71037ead78  str x9,[sp, #0x38]
71037ead7c  add x9,x8,#0x70
71037ead80  add x8,x8,#0x80
71037ead84  stp x9,x28,[sp, #0x68]
71037ead88  str x8,[sp, #0x30]
71037ead8c  ldrb w8,[x20, #0x64]
71037ead90  cbnz w8,0x71037ec1f4
71037ead94  stur wzr,[x29, #-0x70]
71037ead98  stp xzr,xzr,[x29, #-0x80]
71037ead9c  ldr x9,[sp, #0x80]
71037eada0  stur xzr,[x29, #-0x98]
71037eada4  stp xzr,xzr,[x29, #-0x90]
71037eada8  ldr w8,[x20]
71037eadac  add x24,x9,x8
71037eadb0  mov x0,x24
71037eadb4  bl 0x71039c0070
71037eadb8  mov x23,x0
71037eadbc  subs x2,x0,#0x16
71037eadc0  b.ls 0x71037eade8
71037eadc4  sub x0,x29,#0x98
71037eadc8  mov w1,#0x16
71037eadcc  mov x3,xzr
71037eadd0  mov x4,xzr
71037eadd4  mov x5,xzr
71037eadd8  mov x6,x23
71037eaddc  mov x7,x24
71037eade0  bl 0x71037cfe00
71037eade4  b 0x71037eae20
71037eade8  cbz x23,0x71037eadfc
71037eadec  ldr x0,[sp, #0x50]
71037eadf0  mov x1,x24
71037eadf4  mov x2,x23
71037eadf8  bl 0x71039c00e0
71037eadfc  sub x8,x29,#0x98
71037eae00  add x8,x8,x23
71037eae04  strb wzr,[x8, #0x1]
71037eae08  ldurb w8,[x29, #-0x98]
71037eae0c  tbnz w8,#0x0,0x71037eae1c
71037eae10  lsl w8,w23,#0x1
71037eae14  sturb w8,[x29, #-0x98]
71037eae18  b 0x71037eae20
71037eae1c  stur x23,[x29, #-0x90]
71037eae20  mov w8,#0x1
71037eae24  stur w8,[x29, #-0x74]
71037eae28  mov w8,#0xffffffff
71037eae2c  stur x8,[x29, #-0x7c]
71037eae30  ldr w8,[x20, #0x48]
71037eae34  cmn w8,#0x1
71037eae38  b.ne 0x71037eae78
71037eae3c  ldr w8,[x20, #0x4c]
71037eae40  cmn w8,#0x1
71037eae44  b.ne 0x71037eae78
71037eae48  ldr w8,[x20, #0x50]
71037eae4c  cmn w8,#0x1
71037eae50  b.ne 0x71037eae78
71037eae54  ldr w8,[x20, #0x54]
71037eae58  cmn w8,#0x1
71037eae5c  b.ne 0x71037eae78
71037eae60  ldr w8,[x20, #0x58]
71037eae64  cmn w8,#0x1
71037eae68  b.ne 0x71037eae78
71037eae6c  ldr w8,[x20, #0x5c]
71037eae70  cmn w8,#0x1
71037eae74  b.eq 0x71037eb8c4
71037eae78  stur w8,[x29, #-0x7c]
71037eae7c  ldr w8,[x20, #0x60]
71037eae80  cmp w8,#0x2
71037eae84  b.eq 0x71037eae98
71037eae88  cmp w8,#0x1
71037eae8c  b.ne 0x71037eaea0
71037eae90  mov w8,#0x2
71037eae94  b 0x71037eae9c
71037eae98  orr w8,wzr,#0x3
71037eae9c  stur w8,[x29, #-0x80]
71037eaea0  ldr w8,[x20, #0x28]
71037eaea4  sub w9,w8,#0x42
71037eaea8  cmp w9,#0x41
71037eaeac  b.hi 0x71037eaee0
71037eaeb0  adrp x10,0x7104532000
71037eaeb4  add x10,x10,#0xe54
71037eaeb8  mov w8,#0x1
71037eaebc  ldrsw x9,[x10, x9, LSL #0x2]
71037eaec0  add x9,x9,x10
71037eaec4  br x9
71037eaec8  mov w8,#0x2
71037eaecc  b 0x71037eaedc
71037eaed0  orr w8,wzr,#0x3
71037eaed4  b 0x71037eaedc
71037eaed8  mov w8,#0x4
71037eaedc  stur w8,[x29, #-0x70]
71037eaee0  ldurb w8,[x29, #-0x98]
71037eaee4  stp xzr,xzr,[sp, #0xc8]
71037eaee8  str xzr,[sp, #0xc0]
71037eaeec  tbnz w8,#0x0,0x71037eaf04
71037eaef0  ldp x10,x9,[x29, #-0x90]
71037eaef4  stp x10,x9,[sp, #0xc8]
71037eaef8  ldur x9,[x29, #-0x98]
71037eaefc  str x9,[sp, #0xc0]
71037eaf00  b 0x71037eafc8
71037eaf04  ldur x23,[x29, #-0x90]
71037eaf08  cmn x23,#0x10
71037eaf0c  b.cs 0x71037ed1c8
71037eaf10  ldur x24,[x29, #-0x88]
71037eaf14  cmp x23,#0x17
71037eaf18  b.cs 0x71037eaf30
71037eaf1c  ldr x25,[sp, #0x78]
71037eaf20  lsl w8,w23,#0x1
71037eaf24  strb w8,[sp, #0xc0]
71037eaf28  cbnz x23,0x71037eafb0
71037eaf2c  b 0x71037eafc0
71037eaf30  add x8,x23,#0x10
71037eaf34  and x27,x8,#-0x10
71037eaf38  sub x0,x29,#0x60
71037eaf3c  mov w1,#0x10
71037eaf40  mov x2,x27
71037eaf44  bl 0x710392e1f0
71037eaf48  cmp w0,#0xc
71037eaf4c  b.ne 0x71037eaf84
71037eaf50  adrp x8,0x710593d000
71037eaf54  ldr x0,[x8, #0x2b0]
71037eaf58  cbz x0,0x71037eaf84
71037eaf5c  str x27,[sp, #0x98]
71037eaf60  ldr x8,[x0]
71037eaf64  ldr x8,[x8, #0x30]
71037eaf68  add x1,sp,#0x98
71037eaf6c  blr x8
71037eaf70  tbz w0,#0x0,0x71037eaf84
71037eaf74  sub x0,x29,#0x60
71037eaf78  mov w1,#0x10
71037eaf7c  mov x2,x27
71037eaf80  bl 0x710392e1f0
71037eaf84  adrp x8,0x71052a8000
71037eaf88  ldr x8,[x8, #0xa78]
71037eaf8c  cbz x8,0x71037eafa0
71037eaf90  ldur x2,[x29, #-0x60]
71037eaf94  mov w1,#0x10
71037eaf98  mov x0,x27
71037eaf9c  bl 0x71039c19e0
71037eafa0  ldur x25,[x29, #-0x60]
71037eafa4  orr x8,x27,#0x1
71037eafa8  str x8,[sp, #0xc0]
71037eafac  stp x23,x25,[sp, #0xc8]
71037eafb0  mov x0,x25
71037eafb4  mov x1,x24
71037eafb8  mov x2,x23
71037eafbc  bl 0x71039c00e0
71037eafc0  strb wzr,[x25, x23, LSL ]
71037eafc4  ldurb w8,[x29, #-0x98]
71037eafc8  stp xzr,xzr,[x22, #0x8]
71037eafcc  str xzr,[x22]
71037eafd0  tbnz w8,#0x0,0x71037eafe8
71037eafd4  ldur x9,[x29, #-0x88]
71037eafd8  str x9,[x22, #0x10]
71037eafdc  ldp x8,x9,[x29, #-0x98]
71037eafe0  stp x8,x9,[x22]
71037eafe4  b 0x71037eb0a8
71037eafe8  ldur x23,[x29, #-0x90]
71037eafec  cmn x23,#0x10
71037eaff0  b.cs 0x71037ed1d0
71037eaff4  ldur x24,[x29, #-0x88]
71037eaff8  cmp x23,#0x17
71037eaffc  b.cs 0x71037eb014
71037eb000  ldr x25,[sp, #0x18]
71037eb004  lsl w8,w23,#0x1
71037eb008  strb w8,[sp, #0xd8]
71037eb00c  cbnz x23,0x71037eb094
71037eb010  b 0x71037eb0a4
71037eb014  add x8,x23,#0x10
71037eb018  and x27,x8,#-0x10
71037eb01c  sub x0,x29,#0x60
71037eb020  mov w1,#0x10
71037eb024  mov x2,x27
71037eb028  bl 0x710392e1f0
71037eb02c  cmp w0,#0xc
71037eb030  b.ne 0x71037eb068
71037eb034  adrp x8,0x710593d000
71037eb038  ldr x0,[x8, #0x2b0]
71037eb03c  cbz x0,0x71037eb068
71037eb040  str x27,[sp, #0x98]
71037eb044  ldr x8,[x0]
71037eb048  ldr x8,[x8, #0x30]
71037eb04c  add x1,sp,#0x98
71037eb050  blr x8
71037eb054  tbz w0,#0x0,0x71037eb068
71037eb058  sub x0,x29,#0x60
71037eb05c  mov w1,#0x10
71037eb060  mov x2,x27
71037eb064  bl 0x710392e1f0
71037eb068  adrp x8,0x71052a8000
71037eb06c  ldr x8,[x8, #0xa78]
71037eb070  cbz x8,0x71037eb084
71037eb074  ldur x2,[x29, #-0x60]
71037eb078  mov w1,#0x10
71037eb07c  mov x0,x27
71037eb080  bl 0x71039c19e0
71037eb084  ldur x25,[x29, #-0x60]
71037eb088  orr x8,x27,#0x1
71037eb08c  str x8,[sp, #0xd8]
71037eb090  stp x23,x25,[sp, #0xe0]
71037eb094  mov x0,x25
71037eb098  mov x1,x24
71037eb09c  mov x2,x23
71037eb0a0  bl 0x71039c00e0
71037eb0a4  strb wzr,[x25, x23, LSL ]
71037eb0a8  ldr x10,[sp, #0x40]
71037eb0ac  ldp x8,x9,[x10]
71037eb0b0  ldr w10,[x10, #0x10]
71037eb0b4  ldr x11,[sp, #0x60]
71037eb0b8  str w10,[x11, #0x10]
71037eb0bc  stp x8,x9,[x11]
71037eb0c0  ldrb w8,[sp, #0xc0]
71037eb0c4  ldp x10,x9,[sp, #0xc8]
71037eb0c8  lsr x11,x8,#0x1
71037eb0cc  tst w8,#0x1
71037eb0d0  ldr x8,[sp, #0x78]
71037eb0d4  csel x27,x11,x10,eq
71037eb0d8  mov x1,x27
71037eb0dc  csel x23,x8,x9,eq
71037eb0e0  mov x0,x23
71037eb0e4  bl 0x7102677830
71037eb0e8  ldr x8,[sp, #0x90]
71037eb0ec  ldr x25,[x8, #0x50]
71037eb0f0  mov x24,x0
71037eb0f4  cbz x25,0x71037eb2e8
71037eb0f8  sub x28,x25,#0x1
71037eb0fc  ands x8,x28,x25
71037eb100  b.eq 0x71037eb11c
71037eb104  cmp x24,x25
71037eb108  mov x21,x24
71037eb10c  b.cc 0x71037eb120
71037eb110  udiv x9,x24,x25
71037eb114  msub x21,x9,x25,x24
71037eb118  b 0x71037eb120
71037eb11c  and x21,x28,x24
71037eb120  ldr x9,[sp, #0x70]
71037eb124  ldr x9,[x9]
71037eb128  ldr x9,[x9, x21, LSL #0x3]
71037eb12c  cbz x9,0x71037eb2e0
71037eb130  ldr x22,[x9]
71037eb134  cbz x22,0x71037eb2e0
71037eb138  cbz x8,0x71037eb220
71037eb13c  cbz x27,0x71037eb1d8
71037eb140  ldr x8,[x22, #0x8]
71037eb144  cmp x8,x24
71037eb148  b.eq 0x71037eb164
71037eb14c  cmp x8,x25
71037eb150  b.cc 0x71037eb15c
71037eb154  udiv x9,x8,x25
71037eb158  msub x8,x9,x25,x8
71037eb15c  cmp x8,x21
71037eb160  b.ne 0x71037eb2e0
71037eb164  mov x8,x22
71037eb168  ldrb w10,[x8, #0x10]!
71037eb16c  tst w10,#0x1
71037eb170  ldr x11,[x8, #0x8]
71037eb174  lsr x9,x10,#0x1
71037eb178  csel x11,x9,x11,eq
71037eb17c  cmp x11,x27
71037eb180  b.ne 0x71037eb1cc
71037eb184  tbnz w10,#0x0,0x71037eb1b8
71037eb188  add x8,x8,#0x1
71037eb18c  neg x9,x9
71037eb190  mov x10,x23
71037eb194  ldrb w11,[x8]
71037eb198  ldrb w12,[x10]
71037eb19c  cmp w11,w12
71037eb1a0  b.ne 0x71037eb1cc
71037eb1a4  add x8,x8,#0x1
71037eb1a8  add x10,x10,#0x1
71037eb1ac  adds x9,x9,#0x1
71037eb1b0  b.ne 0x71037eb194
71037eb1b4  b 0x71037eb4bc
71037eb1b8  ldr x0,[x22, #0x20]
71037eb1bc  mov x1,x23
71037eb1c0  mov x2,x27
71037eb1c4  bl 0x71039c0250
71037eb1c8  cbz w0,0x71037eb4bc
71037eb1cc  ldr x22,[x22]
71037eb1d0  cbnz x22,0x71037eb140
71037eb1d4  b 0x71037eb2e0
71037eb1d8  ldr x8,[x22, #0x8]
71037eb1dc  cmp x8,x24
71037eb1e0  b.eq 0x71037eb1fc
71037eb1e4  cmp x8,x25
71037eb1e8  b.cc 0x71037eb1f4
71037eb1ec  udiv x9,x8,x25
71037eb1f0  msub x8,x9,x25,x8
71037eb1f4  cmp x8,x21
71037eb1f8  b.ne 0x71037eb2e0
71037eb1fc  ldrb w8,[x22, #0x10]
71037eb200  ldr x9,[x22, #0x18]
71037eb204  lsr x10,x8,#0x1
71037eb208  tst w8,#0x1
71037eb20c  csel x8,x10,x9,eq
71037eb210  cbz x8,0x71037eb4bc
71037eb214  ldr x22,[x22]
71037eb218  cbnz x22,0x71037eb1d8
71037eb21c  b 0x71037eb2e0
71037eb220  cbz x27,0x71037eb2ac
71037eb224  ldr x8,[x22, #0x8]
71037eb228  and x9,x8,x28
71037eb22c  cmp x8,x24
71037eb230  ccmp x9,x21,#0x4,ne
71037eb234  b.ne 0x71037eb2e0
71037eb238  mov x8,x22
71037eb23c  ldrb w10,[x8, #0x10]!
71037eb240  tst w10,#0x1
71037eb244  ldr x11,[x8, #0x8]
71037eb248  lsr x9,x10,#0x1
71037eb24c  csel x11,x9,x11,eq
71037eb250  cmp x11,x27
71037eb254  b.ne 0x71037eb2a0
71037eb258  tbnz w10,#0x0,0x71037eb28c
71037eb25c  add x8,x8,#0x1
71037eb260  neg x9,x9
71037eb264  mov x10,x23
71037eb268  ldrb w11,[x8]
71037eb26c  ldrb w12,[x10]
71037eb270  cmp w11,w12
71037eb274  b.ne 0x71037eb2a0
71037eb278  add x8,x8,#0x1
71037eb27c  add x10,x10,#0x1
71037eb280  adds x9,x9,#0x1
71037eb284  b.ne 0x71037eb268
71037eb288  b 0x71037eb4bc
71037eb28c  ldr x0,[x22, #0x20]
71037eb290  mov x1,x23
71037eb294  mov x2,x27
71037eb298  bl 0x71039c0250
71037eb29c  cbz w0,0x71037eb4bc
71037eb2a0  ldr x22,[x22]
71037eb2a4  cbnz x22,0x71037eb224
71037eb2a8  b 0x71037eb2e0
71037eb2ac  ldr x8,[x22, #0x8]
71037eb2b0  and x9,x8,x28
71037eb2b4  cmp x8,x24
71037eb2b8  ccmp x9,x21,#0x4,ne
71037eb2bc  b.ne 0x71037eb2e0
71037eb2c0  ldrb w8,[x22, #0x10]
71037eb2c4  ldr x9,[x22, #0x18]
71037eb2c8  lsr x10,x8,#0x1
71037eb2cc  tst w8,#0x1
71037eb2d0  csel x8,x10,x9,eq
71037eb2d4  cbz x8,0x71037eb4bc
71037eb2d8  ldr x22,[x22]
71037eb2dc  cbnz x22,0x71037eb2ac
71037eb2e0  ldr x22,[sp, #0x58]
71037eb2e4  ldr x28,[sp, #0x70]
71037eb2e8  sub x0,x29,#0x60
71037eb2ec  mov w1,#0x10
71037eb2f0  mov w2,#0x58
71037eb2f4  bl 0x710392e1f0
71037eb2f8  cmp w0,#0xc
71037eb2fc  b.ne 0x71037eb338
71037eb300  adrp x8,0x710593d000
71037eb304  ldr x0,[x8, #0x2b0]
71037eb308  cbz x0,0x71037eb338
71037eb30c  mov w8,#0x58
71037eb310  str x8,[sp, #0x98]
71037eb314  ldr x8,[x0]
71037eb318  ldr x8,[x8, #0x30]
71037eb31c  add x1,sp,#0x98
71037eb320  blr x8
71037eb324  tbz w0,#0x0,0x71037eb338
71037eb328  sub x0,x29,#0x60
71037eb32c  mov w1,#0x10
71037eb330  mov w2,#0x58
71037eb334  bl 0x710392e1f0
71037eb338  adrp x8,0x71052a8000
71037eb33c  ldr x8,[x8, #0xa78]
71037eb340  cbz x8,0x71037eb354
71037eb344  ldur x2,[x29, #-0x60]
71037eb348  mov w1,#0x10
71037eb34c  mov w0,#0x58
71037eb350  bl 0x71039c19e0
71037eb354  ldur x23,[x29, #-0x60]
71037eb358  ldp x8,x9,[sp, #0xc0]
71037eb35c  ldr x10,[sp, #0xd0]
71037eb360  stp x9,x10,[x23, #0x18]
71037eb364  str x8,[x23, #0x10]
71037eb368  stp xzr,xzr,[sp, #0xc8]
71037eb36c  str xzr,[sp, #0xc0]
71037eb370  ldp x8,x9,[x22]
71037eb374  ldr x10,[x22, #0x10]
71037eb378  stp x9,x10,[x23, #0x30]
71037eb37c  ldr x10,[sp, #0x60]
71037eb380  str x8,[x23, #0x28]
71037eb384  str xzr,[x22]
71037eb388  stp xzr,xzr,[x22, #0x8]
71037eb38c  ldp x8,x9,[x10]
71037eb390  ldr w10,[x10, #0x10]
71037eb394  stp x8,x9,[x23, #0x40]
71037eb398  str w10,[x23, #0x50]
71037eb39c  stp xzr,x24,[x23]
71037eb3a0  ldr x9,[sp, #0x90]
71037eb3a4  ldr x8,[x9, #0x60]
71037eb3a8  add x8,x8,#0x1
71037eb3ac  ldr s1,[x9, #0x68]
71037eb3b0  ucvtf s0,x8
71037eb3b4  cbz x25,0x71037eb3c8
71037eb3b8  ucvtf s2,x25
71037eb3bc  fmul s2,s1,s2
71037eb3c0  fcmp s2,s0
71037eb3c4  b.pl 0x71037eb440
71037eb3c8  lsl x8,x25,#0x1
71037eb3cc  cmp x25,#0x3
71037eb3d0  b.cc 0x71037eb3e4
71037eb3d4  sub x9,x25,#0x1
71037eb3d8  tst x9,x25
71037eb3dc  cset w9,ne
71037eb3e0  b 0x71037eb3e8
71037eb3e4  mov w9,#0x1
71037eb3e8  fdiv s0,s0,s1
71037eb3ec  fcvtpu x10,s0
71037eb3f0  orr x8,x9,x8
71037eb3f4  cmp x8,x10
71037eb3f8  add x22,x23,#0x10
71037eb3fc  add x25,x23,#0x28
71037eb400  csel x1,x10,x8,cc
71037eb404  mov x0,x28
71037eb408  bl 0x71037ee200
71037eb40c  ldr x8,[sp, #0x90]
71037eb410  ldr x25,[x8, #0x50]
71037eb414  sub x8,x25,#0x1
71037eb418  tst x8,x25
71037eb41c  b.eq 0x71037eb430
71037eb420  cmp x24,x25
71037eb424  b.cs 0x71037eb438
71037eb428  mov x21,x24
71037eb42c  b 0x71037eb440
71037eb430  and x21,x8,x24
71037eb434  b 0x71037eb440
71037eb438  udiv x8,x24,x25
71037eb43c  msub x21,x8,x25,x24
71037eb440  ldr x8,[x28]
71037eb444  ldr x8,[x8, x21, LSL #0x3]
71037eb448  cbz x8,0x71037eb458
71037eb44c  ldr x9,[x8]
71037eb450  str x9,[x23]
71037eb454  b 0x71037eb4a8
71037eb458  ldr x9,[sp, #0x38]
71037eb45c  ldr x8,[x9]
71037eb460  str x8,[x23]
71037eb464  str x23,[x9]
71037eb468  ldr x8,[x28]
71037eb46c  str x9,[x8, x21, LSL #0x3]
71037eb470  ldr x8,[x23]
71037eb474  cbz x8,0x71037eb4ac
71037eb478  ldr x8,[x8, #0x8]
71037eb47c  sub x9,x25,#0x1
71037eb480  tst x9,x25
71037eb484  b.eq 0x71037eb49c
71037eb488  cmp x8,x25
71037eb48c  b.cc 0x71037eb4a0
71037eb490  udiv x9,x8,x25
71037eb494  msub x8,x9,x25,x8
71037eb498  b 0x71037eb4a0
71037eb49c  and x8,x8,x9
71037eb4a0  ldr x9,[x28]
71037eb4a4  add x8,x9,x8, LSL #0x3
71037eb4a8  str x23,[x8]
71037eb4ac  ldr x9,[sp, #0x90]
71037eb4b0  ldr x8,[x9, #0x60]
71037eb4b4  add x8,x8,#0x1
71037eb4b8  str x8,[x9, #0x60]
71037eb4bc  ldrb w8,[sp, #0xd8]
71037eb4c0  ldr x21,[sp, #0x48]
71037eb4c4  ldr x22,[sp, #0x68]
71037eb4c8  tbz w8,#0x0,0x71037eb4ec
71037eb4cc  adrp x8,0x71052a8000
71037eb4d0  ldr x23,[sp, #0xe8]
71037eb4d4  ldr x8,[x8, #0xa70]
71037eb4d8  cbz x8,0x71037eb4e4
71037eb4dc  mov x0,x23
71037eb4e0  bl 0x71039c19b0
71037eb4e4  mov x0,x23
71037eb4e8  bl 0x710392eb40
71037eb4ec  ldrb w8,[sp, #0xc0]
71037eb4f0  tbz w8,#0x0,0x71037eb514
71037eb4f4  adrp x8,0x71052a8000
71037eb4f8  ldr x23,[sp, #0xd0]
71037eb4fc  ldr x8,[x8, #0xa70]
71037eb500  cbz x8,0x71037eb50c
71037eb504  mov x0,x23
71037eb508  bl 0x71039c19b0
71037eb50c  mov x0,x23
71037eb510  bl 0x710392eb40
71037eb514  ldurb w8,[x29, #-0x98]
71037eb518  ldur x9,[x29, #-0x88]
71037eb51c  tst w8,#0x1
71037eb520  ldr x8,[sp, #0x50]
71037eb524  csel x23,x8,x9,eq
71037eb528  mov x0,x23
71037eb52c  adrp x1,0x7104411000
71037eb530  add x1,x1,#0x344
71037eb534  bl 0x71039c0060
71037eb538  cbz w0,0x71037eb840
71037eb53c  mov x0,x23
71037eb540  adrp x1,0x7104464000
71037eb544  add x1,x1,#0x633
71037eb548  bl 0x71039c0060
71037eb54c  cbz w0,0x71037eb84c
71037eb550  mov x0,x23
71037eb554  adrp x1,0x7104328000
71037eb558  add x1,x1,#0xa8a
71037eb55c  bl 0x71039c0060
71037eb560  cbz w0,0x71037eb858
71037eb564  mov x0,x23
71037eb568  adrp x1,0x71042b2000
71037eb56c  add x1,x1,#0xb92
71037eb570  bl 0x71039c0060
71037eb574  cbz w0,0x71037eb864
71037eb578  mov x0,x23
71037eb57c  adrp x1,0x71042c3000
71037eb580  add x1,x1,#0x91c
71037eb584  bl 0x71039c0060
71037eb588  cbz w0,0x71037eb870
71037eb58c  mov x0,x23
71037eb590  adrp x1,0x7104307000
71037eb594  add x1,x1,#0x10e
71037eb598  bl 0x71039c0060
71037eb59c  cbz w0,0x71037eb87c
71037eb5a0  mov x0,x23
71037eb5a4  adrp x1,0x71043ff000
71037eb5a8  add x1,x1,#0xf3e
71037eb5ac  bl 0x71039c0060
71037eb5b0  cbz w0,0x71037eb888
71037eb5b4  mov x0,x23
71037eb5b8  adrp x1,0x71043ff000
71037eb5bc  add x1,x1,#0xf48
71037eb5c0  bl 0x71039c0060
71037eb5c4  cbz w0,0x71037eb894
71037eb5c8  mov x0,x23
71037eb5cc  adrp x1,0x71043de000
71037eb5d0  add x1,x1,#0xc35
71037eb5d4  bl 0x71039c0060
71037eb5d8  cbz w0,0x71037eb8a0
71037eb5dc  mov x0,x23
71037eb5e0  adrp x1,0x71042b2000
71037eb5e4  add x1,x1,#0xbae
71037eb5e8  bl 0x71039c0060
71037eb5ec  cbz w0,0x71037eb8ac
71037eb5f0  mov x0,x23
71037eb5f4  adrp x1,0x7104464000
71037eb5f8  add x1,x1,#0x65c
71037eb5fc  bl 0x71039c0060
71037eb600  cbz w0,0x71037eb8b8
71037eb604  mov x0,x23
71037eb608  adrp x1,0x71043ac000
71037eb60c  add x1,x1,#0x3cc
71037eb610  bl 0x71039c0060
71037eb614  cbz w0,0x71037eb8d8
71037eb618  mov x0,x23
71037eb61c  adrp x1,0x7104338000
71037eb620  add x1,x1,#0xde7
71037eb624  bl 0x71039c0060
71037eb628  cbz w0,0x71037eb8e4
71037eb62c  mov x0,x23
71037eb630  adrp x1,0x71043ac000
71037eb634  add x1,x1,#0x3d7
71037eb638  bl 0x71039c0060
71037eb63c  cbz w0,0x71037eb8f0
71037eb640  mov x0,x23
71037eb644  adrp x1,0x7104442000
71037eb648  add x1,x1,#0x3b4
71037eb64c  bl 0x71039c0060
71037eb650  cbz w0,0x71037eb8fc
71037eb654  mov x0,x23
71037eb658  adrp x1,0x7104420000
71037eb65c  add x1,x1,#0xf49
71037eb660  bl 0x71039c0060
71037eb664  cbz w0,0x71037eb908
71037eb668  mov x0,x23
71037eb66c  adrp x1,0x7104348000
71037eb670  add x1,x1,#0xdee
71037eb674  bl 0x71039c0060
71037eb678  cbz w0,0x71037eb914
71037eb67c  mov x0,x23
71037eb680  adrp x1,0x710438b000
71037eb684  add x1,x1,#0x51f
71037eb688  bl 0x71039c0060
71037eb68c  cbz w0,0x71037eb920
71037eb690  mov x0,x23
71037eb694  adrp x1,0x710426e000
71037eb698  add x1,x1,#0xc5c
71037eb69c  bl 0x71039c0060
71037eb6a0  cbz w0,0x71037eb92c
71037eb6a4  mov x0,x23
71037eb6a8  adrp x1,0x710439b000
71037eb6ac  add x1,x1,#0xcba
71037eb6b0  bl 0x71039c0060
71037eb6b4  cbz w0,0x71037eb938
71037eb6b8  mov x0,x23
71037eb6bc  adrp x1,0x7104464000
71037eb6c0  add x1,x1,#0x68e
71037eb6c4  bl 0x71039c0060
71037eb6c8  cbz w0,0x71037eb944
71037eb6cc  mov x0,x23
71037eb6d0  adrp x1,0x710426e000
71037eb6d4  add x1,x1,#0xc67
71037eb6d8  bl 0x71039c0060
71037eb6dc  cbz w0,0x71037eb950
71037eb6e0  mov x0,x23
71037eb6e4  adrp x1,0x7104431000
71037eb6e8  add x1,x1,#0xc20
71037eb6ec  bl 0x71039c0060
71037eb6f0  cbz w0,0x71037eb95c
71037eb6f4  mov x0,x23
71037eb6f8  adrp x1,0x7104328000
71037eb6fc  add x1,x1,#0xacb
71037eb700  bl 0x71039c0060
71037eb704  cbz w0,0x71037eb968
71037eb708  mov x0,x23
71037eb70c  adrp x1,0x7104359000
71037eb710  add x1,x1,#0xed6
71037eb714  bl 0x71039c0060
71037eb718  cbz w0,0x71037eb974
71037eb71c  mov x0,x23
71037eb720  adrp x1,0x71042d4000
71037eb724  add x1,x1,#0xee8
71037eb728  bl 0x71039c0060
71037eb72c  cbz w0,0x71037eb980
71037eb730  mov x0,x23
71037eb734  adrp x1,0x7104453000
71037eb738  add x1,x1,#0x4f4
71037eb73c  bl 0x71039c0060
71037eb740  cbz w0,0x71037eb98c
71037eb744  mov x0,x23
71037eb748  adrp x1,0x71042b2000
71037eb74c  add x1,x1,#0xbeb
71037eb750  bl 0x71039c0060
71037eb754  cbz w0,0x71037eb998
71037eb758  mov x0,x23
71037eb75c  adrp x1,0x71042d4000
71037eb760  add x1,x1,#0xef1
71037eb764  bl 0x71039c0060
71037eb768  cbz w0,0x71037eb9a4
71037eb76c  mov x0,x23
71037eb770  adrp x1,0x7104317000
71037eb774  add x1,x1,#0x9e4
71037eb778  bl 0x71039c0060
71037eb77c  cbz w0,0x71037eb9b0
71037eb780  mov x0,x23
71037eb784  adrp x1,0x71043bd000
71037eb788  add x1,x1,#0x106
71037eb78c  bl 0x71039c0060
71037eb790  cbz w0,0x71037eb9bc
71037eb794  mov x0,x23
71037eb798  adrp x1,0x7104453000
71037eb79c  add x1,x1,#0x4fd
71037eb7a0  bl 0x71039c0060
71037eb7a4  cbz w0,0x71037eb9c8
71037eb7a8  mov x0,x23
71037eb7ac  adrp x1,0x71043ac000
71037eb7b0  add x1,x1,#0x3e2
71037eb7b4  bl 0x71039c0060
71037eb7b8  cbz w0,0x71037eb9d4
71037eb7bc  mov x0,x23
71037eb7c0  adrp x1,0x710439b000
71037eb7c4  add x1,x1,#0xcc3
71037eb7c8  bl 0x71039c0060
71037eb7cc  cbz w0,0x71037eb9e0
71037eb7d0  mov x0,x23
71037eb7d4  adrp x1,0x710438b000
71037eb7d8  add x1,x1,#0x52a
71037eb7dc  bl 0x71039c0060
71037eb7e0  cbz w0,0x71037eb9ec
71037eb7e4  mov x0,x23
71037eb7e8  adrp x1,0x7104411000
71037eb7ec  add x1,x1,#0x33a
71037eb7f0  bl 0x71039c0060
71037eb7f4  cbz w0,0x71037eb9f8
71037eb7f8  mov x0,x23
71037eb7fc  adrp x1,0x710425d000
71037eb800  add x1,x1,#0xf00
71037eb804  bl 0x71039c0060
71037eb808  cbz w0,0x71037eba04
71037eb80c  mov x0,x23
71037eb810  adrp x1,0x710425d000
71037eb814  add x1,x1,#0xf0a
71037eb818  bl 0x71039c0060
71037eb81c  cbz w0,0x71037eba10
71037eb820  mov x0,x23
71037eb824  adrp x1,0x710437b000
71037eb828  add x1,x1,#0x24f
71037eb82c  bl 0x71039c0060
71037eb830  cbz w0,0x71037eba1c
71037eb834  ldr x22,[sp, #0x58]
71037eb838  ldr x28,[sp, #0x70]
71037eb83c  b 0x71037ec1c4
71037eb840  adrp x8,0x7105265000
71037eb844  add x8,x8,#0x428
71037eb848  b 0x71037eba2c
71037eb84c  adrp x8,0x7105265000
71037eb850  add x8,x8,#0x438
71037eb854  b 0x71037eba2c
71037eb858  adrp x8,0x7105265000
71037eb85c  add x8,x8,#0x448
71037eb860  b 0x71037eba2c
71037eb864  adrp x8,0x7105265000
71037eb868  add x8,x8,#0x458
71037eb86c  b 0x71037eba2c
71037eb870  adrp x8,0x7105265000
71037eb874  add x8,x8,#0x468
71037eb878  b 0x71037eba2c
71037eb87c  adrp x8,0x7105265000
71037eb880  add x8,x8,#0x478
71037eb884  b 0x71037eba2c
71037eb888  adrp x8,0x7105265000
71037eb88c  add x8,x8,#0x488
71037eb890  b 0x71037eba2c
71037eb894  adrp x8,0x7105265000
71037eb898  add x8,x8,#0x498
71037eb89c  b 0x71037eba2c
71037eb8a0  adrp x8,0x7105265000
71037eb8a4  add x8,x8,#0x4a8
71037eb8a8  b 0x71037eba2c
71037eb8ac  adrp x8,0x7105265000
71037eb8b0  add x8,x8,#0x4b8
71037eb8b4  b 0x71037eba2c
71037eb8b8  adrp x8,0x7105265000
71037eb8bc  add x8,x8,#0x4c8
71037eb8c0  b 0x71037eba2c
71037eb8c4  mov w21,wzr
71037eb8c8  add x20,x20,#0xa4
71037eb8cc  ldurb w8,[x29, #-0x98]
71037eb8d0  tbnz w8,#0x0,0x71037ec1d0
71037eb8d4  b 0x71037ec1f0
71037eb8d8  adrp x8,0x7105265000
71037eb8dc  add x8,x8,#0x4d8
71037eb8e0  b 0x71037eba2c
71037eb8e4  adrp x8,0x7105265000
71037eb8e8  add x8,x8,#0x4e8
71037eb8ec  b 0x71037eba2c
71037eb8f0  adrp x8,0x7105265000
71037eb8f4  add x8,x8,#0x4f8
71037eb8f8  b 0x71037eba2c
71037eb8fc  adrp x8,0x7105265000
71037eb900  add x8,x8,#0x508
71037eb904  b 0x71037eba2c
71037eb908  adrp x8,0x7105265000
71037eb90c  add x8,x8,#0x518
71037eb910  b 0x71037eba2c
71037eb914  adrp x8,0x7105265000
71037eb918  add x8,x8,#0x528
71037eb91c  b 0x71037eba2c
71037eb920  adrp x8,0x7105265000
71037eb924  add x8,x8,#0x538
71037eb928  b 0x71037eba2c
71037eb92c  adrp x8,0x7105265000
71037eb930  add x8,x8,#0x548
71037eb934  b 0x71037eba2c
71037eb938  adrp x8,0x7105265000
71037eb93c  add x8,x8,#0x558
71037eb940  b 0x71037eba2c
71037eb944  adrp x8,0x7105265000
71037eb948  add x8,x8,#0x568
71037eb94c  b 0x71037eba2c
71037eb950  adrp x8,0x7105265000
71037eb954  add x8,x8,#0x578
71037eb958  b 0x71037eba2c
71037eb95c  adrp x8,0x7105265000
71037eb960  add x8,x8,#0x588
71037eb964  b 0x71037eba2c
71037eb968  adrp x8,0x7105265000
71037eb96c  add x8,x8,#0x598
71037eb970  b 0x71037eba2c
71037eb974  adrp x8,0x7105265000
71037eb978  add x8,x8,#0x5a8
71037eb97c  b 0x71037eba2c
71037eb980  adrp x8,0x7105265000
71037eb984  add x8,x8,#0x5b8
71037eb988  b 0x71037eba24
71037eb98c  adrp x8,0x7105265000
71037eb990  add x8,x8,#0x5c8
71037eb994  b 0x71037eba24
71037eb998  adrp x8,0x7105265000
71037eb99c  add x8,x8,#0x5d8
71037eb9a0  b 0x71037eba24
71037eb9a4  adrp x8,0x7105265000
71037eb9a8  add x8,x8,#0x5e8
71037eb9ac  b 0x71037eba24
71037eb9b0  adrp x8,0x7105265000
71037eb9b4  add x8,x8,#0x5f8
71037eb9b8  b 0x71037eba24
71037eb9bc  adrp x8,0x7105265000
71037eb9c0  add x8,x8,#0x608
71037eb9c4  b 0x71037eba24
71037eb9c8  adrp x8,0x7105265000
71037eb9cc  add x8,x8,#0x618
71037eb9d0  b 0x71037eba24
71037eb9d4  adrp x8,0x7105265000
71037eb9d8  add x8,x8,#0x628
71037eb9dc  b 0x71037eba24
71037eb9e0  adrp x8,0x7105265000
71037eb9e4  add x8,x8,#0x638
71037eb9e8  b 0x71037eba24
71037eb9ec  adrp x8,0x7105265000
71037eb9f0  add x8,x8,#0x648
71037eb9f4  b 0x71037eba24
71037eb9f8  adrp x8,0x7105265000
71037eb9fc  add x8,x8,#0x658
71037eba00  b 0x71037eba24
71037eba04  adrp x8,0x7105265000
71037eba08  add x8,x8,#0x668
71037eba0c  b 0x71037eba24
71037eba10  adrp x8,0x7105265000
71037eba14  add x8,x8,#0x678
71037eba18  b 0x71037eba24
71037eba1c  adrp x8,0x7105265000
71037eba20  add x8,x8,#0x688
71037eba24  ldr x21,[sp, #0x48]
71037eba28  ldr x22,[sp, #0x68]
71037eba2c  ldr x24,[x8, #0x8]
71037eba30  mov x0,x24
71037eba34  str wzr,[sp, #0x98]
71037eba38  str wzr,[x21, #0x18]
71037eba3c  stp xzr,xzr,[x21, #0x8]
71037eba40  str xzr,[x21]
71037eba44  bl 0x71039c0070
71037eba48  mov x23,x0
71037eba4c  subs x2,x0,#0x16
71037eba50  b.ls 0x71037eba7c
71037eba54  mov x0,x21
71037eba58  mov w1,#0x16
71037eba5c  mov x3,xzr
71037eba60  mov x4,xzr
71037eba64  mov x5,xzr
71037eba68  mov x6,x23
71037eba6c  mov x7,x24
71037eba70  bl 0x71037cfe00
71037eba74  ldrb w8,[sp, #0xa0]
71037eba78  b 0x71037ebab0
71037eba7c  cbz x23,0x71037eba90
71037eba80  ldr x0,[sp, #0x28]
71037eba84  mov x1,x24
71037eba88  mov x2,x23
71037eba8c  bl 0x71039c00a0
71037eba90  add x8,x21,x23
71037eba94  strb wzr,[x8, #0x1]
71037eba98  ldrb w8,[sp, #0xa0]
71037eba9c  tbnz w8,#0x0,0x71037ebaac
71037ebaa0  lsl w8,w23,#0x1
71037ebaa4  strb w8,[sp, #0xa0]
71037ebaa8  b 0x71037ebab0
71037ebaac  str x23,[sp, #0xa8]
71037ebab0  ldur w9,[x29, #-0x7c]
71037ebab4  str w9,[sp, #0xb8]
71037ebab8  mov w9,#0x1
71037ebabc  stp xzr,xzr,[sp, #0xc8]
71037ebac0  str w9,[sp, #0x98]
71037ebac4  str xzr,[sp, #0xc0]
71037ebac8  tbnz w8,#0x0,0x71037ebae4
71037ebacc  ldp x9,x10,[x21]
71037ebad0  ldr x11,[x21, #0x10]
71037ebad4  stp x10,x11,[sp, #0xc8]
71037ebad8  str x9,[sp, #0xc0]
71037ebadc  mov w9,#0x1
71037ebae0  b 0x71037ebbac
71037ebae4  ldr x23,[sp, #0xa8]
71037ebae8  cmn x23,#0x10
71037ebaec  b.cs 0x71037ed1d8
71037ebaf0  ldr x24,[sp, #0xb0]
71037ebaf4  cmp x23,#0x17
71037ebaf8  b.cs 0x71037ebb10
71037ebafc  ldr x25,[sp, #0x78]
71037ebb00  lsl w8,w23,#0x1
71037ebb04  strb w8,[sp, #0xc0]
71037ebb08  cbnz x23,0x71037ebb90
71037ebb0c  b 0x71037ebba0
71037ebb10  add x8,x23,#0x10
71037ebb14  and x27,x8,#-0x10
71037ebb18  sub x0,x29,#0x68
71037ebb1c  mov w1,#0x10
71037ebb20  mov x2,x27
71037ebb24  bl 0x710392e1f0
71037ebb28  cmp w0,#0xc
71037ebb2c  b.ne 0x71037ebb64
71037ebb30  adrp x8,0x710593d000
71037ebb34  ldr x0,[x8, #0x2b0]
71037ebb38  cbz x0,0x71037ebb64
71037ebb3c  stur x27,[x29, #-0x60]
71037ebb40  ldr x8,[x0]
71037ebb44  ldr x8,[x8, #0x30]
71037ebb48  sub x1,x29,#0x60
71037ebb4c  blr x8
71037ebb50  tbz w0,#0x0,0x71037ebb64
71037ebb54  sub x0,x29,#0x68
71037ebb58  mov w1,#0x10
71037ebb5c  mov x2,x27
71037ebb60  bl 0x710392e1f0
71037ebb64  adrp x8,0x71052a8000
71037ebb68  ldr x8,[x8, #0xa78]
71037ebb6c  cbz x8,0x71037ebb80
71037ebb70  ldur x2,[x29, #-0x68]
71037ebb74  mov w1,#0x10
71037ebb78  mov x0,x27
71037ebb7c  bl 0x71039c19e0
71037ebb80  ldur x25,[x29, #-0x68]
71037ebb84  orr x8,x27,#0x1
71037ebb88  str x8,[sp, #0xc0]
71037ebb8c  stp x23,x25,[sp, #0xc8]
71037ebb90  mov x0,x25
71037ebb94  mov x1,x24
71037ebb98  mov x2,x23
71037ebb9c  bl 0x71039c00e0
71037ebba0  strb wzr,[x25, x23, LSL ]
71037ebba4  ldr w9,[sp, #0x98]
71037ebba8  ldrb w8,[sp, #0xa0]
71037ebbac  str w9,[sp, #0xd8]
71037ebbb0  stp xzr,xzr,[x26, #0x8]
71037ebbb4  str xzr,[x26]
71037ebbb8  tbnz w8,#0x0,0x71037ebbd0
71037ebbbc  ldp x8,x9,[x21]
71037ebbc0  ldr x10,[x21, #0x10]
71037ebbc4  stp x9,x10,[x26, #0x8]
71037ebbc8  str x8,[x26]
71037ebbcc  b 0x71037ebc90
71037ebbd0  ldr x23,[sp, #0xa8]
71037ebbd4  cmn x23,#0x10
71037ebbd8  b.cs 0x71037ed1e0
71037ebbdc  ldr x24,[sp, #0xb0]
71037ebbe0  cmp x23,#0x17
71037ebbe4  b.cs 0x71037ebbfc
71037ebbe8  ldr x25,[sp, #0x10]
71037ebbec  lsl w8,w23,#0x1
71037ebbf0  strb w8,[sp, #0xe0]
71037ebbf4  cbnz x23,0x71037ebc7c
71037ebbf8  b 0x71037ebc8c
71037ebbfc  add x8,x23,#0x10
71037ebc00  and x27,x8,#-0x10
71037ebc04  sub x0,x29,#0x68
71037ebc08  mov w1,#0x10
71037ebc0c  mov x2,x27
71037ebc10  bl 0x710392e1f0
71037ebc14  cmp w0,#0xc
71037ebc18  b.ne 0x71037ebc50
71037ebc1c  adrp x8,0x710593d000
71037ebc20  ldr x0,[x8, #0x2b0]
71037ebc24  cbz x0,0x71037ebc50
71037ebc28  stur x27,[x29, #-0x60]
71037ebc2c  ldr x8,[x0]
71037ebc30  ldr x8,[x8, #0x30]
71037ebc34  sub x1,x29,#0x60
71037ebc38  blr x8
71037ebc3c  tbz w0,#0x0,0x71037ebc50
71037ebc40  sub x0,x29,#0x68
71037ebc44  mov w1,#0x10
71037ebc48  mov x2,x27
71037ebc4c  bl 0x710392e1f0
71037ebc50  adrp x8,0x71052a8000
71037ebc54  ldr x8,[x8, #0xa78]
71037ebc58  cbz x8,0x71037ebc6c
71037ebc5c  ldur x2,[x29, #-0x68]
71037ebc60  mov w1,#0x10
71037ebc64  mov x0,x27
71037ebc68  bl 0x71039c19e0
71037ebc6c  ldur x25,[x29, #-0x68]
71037ebc70  orr x8,x27,#0x1
71037ebc74  str x8,[sp, #0xe0]
71037ebc78  stp x23,x25,[sp, #0xe8]
71037ebc7c  mov x0,x25
71037ebc80  mov x1,x24
71037ebc84  mov x2,x23
71037ebc88  bl 0x71039c00e0
71037ebc8c  strb wzr,[x25, x23, LSL ]
71037ebc90  ldr w8,[sp, #0xb8]
71037ebc94  str w8,[sp, #0xf8]
71037ebc98  ldrb w8,[sp, #0xc0]
71037ebc9c  ldp x10,x9,[sp, #0xc8]
71037ebca0  lsr x11,x8,#0x1
71037ebca4  tst w8,#0x1
71037ebca8  ldr x8,[sp, #0x78]
71037ebcac  csel x27,x11,x10,eq
71037ebcb0  mov x1,x27
71037ebcb4  csel x23,x8,x9,eq
71037ebcb8  mov x0,x23
71037ebcbc  bl 0x7102677830
71037ebcc0  ldr x8,[sp, #0x90]
71037ebcc4  ldr x25,[x8, #0x78]
71037ebcc8  mov x24,x0
71037ebccc  cbz x25,0x71037ebeb8
71037ebcd0  sub x28,x25,#0x1
71037ebcd4  ands x8,x28,x25
71037ebcd8  b.eq 0x71037ebcf4
71037ebcdc  cmp x24,x25
71037ebce0  mov x21,x24
71037ebce4  b.cc 0x71037ebcf8
71037ebce8  udiv x9,x24,x25
71037ebcec  msub x21,x9,x25,x24
71037ebcf0  b 0x71037ebcf8
71037ebcf4  and x21,x28,x24
71037ebcf8  ldr x9,[x22]
71037ebcfc  ldr x9,[x9, x21, LSL #0x3]
71037ebd00  cbz x9,0x71037ebeb8
71037ebd04  ldr x22,[x9]
71037ebd08  cbz x22,0x71037ebeb4
71037ebd0c  cbz x8,0x71037ebdf4
71037ebd10  cbz x27,0x71037ebdac
71037ebd14  ldr x8,[x22, #0x8]
71037ebd18  cmp x8,x24
71037ebd1c  b.eq 0x71037ebd38
71037ebd20  cmp x8,x25
71037ebd24  b.cc 0x71037ebd30
71037ebd28  udiv x9,x8,x25
71037ebd2c  msub x8,x9,x25,x8
71037ebd30  cmp x8,x21
71037ebd34  b.ne 0x71037ebeb4
71037ebd38  mov x8,x22
71037ebd3c  ldrb w10,[x8, #0x10]!
71037ebd40  tst w10,#0x1
71037ebd44  ldr x11,[x8, #0x8]
71037ebd48  lsr x9,x10,#0x1
71037ebd4c  csel x11,x9,x11,eq
71037ebd50  cmp x11,x27
71037ebd54  b.ne 0x71037ebda0
71037ebd58  tbnz w10,#0x0,0x71037ebd8c
71037ebd5c  add x8,x8,#0x1
71037ebd60  neg x9,x9
71037ebd64  mov x10,x23
71037ebd68  ldrb w11,[x8]
71037ebd6c  ldrb w12,[x10]
71037ebd70  cmp w11,w12
71037ebd74  b.ne 0x71037ebda0
71037ebd78  add x8,x8,#0x1
71037ebd7c  add x10,x10,#0x1
71037ebd80  adds x9,x9,#0x1
71037ebd84  b.ne 0x71037ebd68
71037ebd88  b 0x71037ec144
71037ebd8c  ldr x0,[x22, #0x20]
71037ebd90  mov x1,x23
71037ebd94  mov x2,x27
71037ebd98  bl 0x71039c0250
71037ebd9c  cbz w0,0x71037ec144
71037ebda0  ldr x22,[x22]
71037ebda4  cbnz x22,0x71037ebd14
71037ebda8  b 0x71037ebeb4
71037ebdac  ldr x8,[x22, #0x8]
71037ebdb0  cmp x8,x24
71037ebdb4  b.eq 0x71037ebdd0
71037ebdb8  cmp x8,x25
71037ebdbc  b.cc 0x71037ebdc8
71037ebdc0  udiv x9,x8,x25
71037ebdc4  msub x8,x9,x25,x8
71037ebdc8  cmp x8,x21
71037ebdcc  b.ne 0x71037ebeb4
71037ebdd0  ldrb w8,[x22, #0x10]
71037ebdd4  ldr x9,[x22, #0x18]
71037ebdd8  lsr x10,x8,#0x1
71037ebddc  tst w8,#0x1
71037ebde0  csel x8,x10,x9,eq
71037ebde4  cbz x8,0x71037ec144
71037ebde8  ldr x22,[x22]
71037ebdec  cbnz x22,0x71037ebdac
71037ebdf0  b 0x71037ebeb4
71037ebdf4  cbz x27,0x71037ebe80
71037ebdf8  ldr x8,[x22, #0x8]
71037ebdfc  and x9,x8,x28
71037ebe00  cmp x8,x24
71037ebe04  ccmp x9,x21,#0x4,ne
71037ebe08  b.ne 0x71037ebeb4
71037ebe0c  mov x8,x22
71037ebe10  ldrb w10,[x8, #0x10]!
71037ebe14  tst w10,#0x1
71037ebe18  ldr x11,[x8, #0x8]
71037ebe1c  lsr x9,x10,#0x1
71037ebe20  csel x11,x9,x11,eq
71037ebe24  cmp x11,x27
71037ebe28  b.ne 0x71037ebe74
71037ebe2c  tbnz w10,#0x0,0x71037ebe60
71037ebe30  add x8,x8,#0x1
71037ebe34  neg x9,x9
71037ebe38  mov x10,x23
71037ebe3c  ldrb w11,[x8]
71037ebe40  ldrb w12,[x10]
71037ebe44  cmp w11,w12
71037ebe48  b.ne 0x71037ebe74
71037ebe4c  add x8,x8,#0x1
71037ebe50  add x10,x10,#0x1
71037ebe54  adds x9,x9,#0x1
71037ebe58  b.ne 0x71037ebe3c
71037ebe5c  b 0x71037ec144
71037ebe60  ldr x0,[x22, #0x20]
71037ebe64  mov x1,x23
71037ebe68  mov x2,x27
71037ebe6c  bl 0x71039c0250
71037ebe70  cbz w0,0x71037ec144
71037ebe74  ldr x22,[x22]
71037ebe78  cbnz x22,0x71037ebdf8
71037ebe7c  b 0x71037ebeb4
71037ebe80  ldr x8,[x22, #0x8]
71037ebe84  and x9,x8,x28
71037ebe88  cmp x8,x24
71037ebe8c  ccmp x9,x21,#0x4,ne
71037ebe90  b.ne 0x71037ebeb4
71037ebe94  ldrb w8,[x22, #0x10]
71037ebe98  ldr x9,[x22, #0x18]
71037ebe9c  lsr x10,x8,#0x1
71037ebea0  tst w8,#0x1
71037ebea4  csel x8,x10,x9,eq
71037ebea8  cbz x8,0x71037ec144
71037ebeac  ldr x22,[x22]
71037ebeb0  cbnz x22,0x71037ebe80
71037ebeb4  ldr x22,[sp, #0x68]
71037ebeb8  sub x0,x29,#0x68
71037ebebc  mov w1,#0x10
71037ebec0  mov w2,#0x50
71037ebec4  bl 0x710392e1f0
71037ebec8  cmp w0,#0xc
71037ebecc  b.ne 0x71037ebf08
71037ebed0  adrp x8,0x710593d000
71037ebed4  ldr x0,[x8, #0x2b0]
71037ebed8  cbz x0,0x71037ebf08
71037ebedc  mov w8,#0x50
71037ebee0  stur x8,[x29, #-0x60]
71037ebee4  ldr x8,[x0]
71037ebee8  ldr x8,[x8, #0x30]
71037ebeec  sub x1,x29,#0x60
71037ebef0  blr x8
71037ebef4  tbz w0,#0x0,0x71037ebf08
71037ebef8  sub x0,x29,#0x68
71037ebefc  mov w1,#0x10
71037ebf00  mov w2,#0x50
71037ebf04  bl 0x710392e1f0
71037ebf08  adrp x8,0x71052a8000
71037ebf0c  ldr x8,[x8, #0xa78]
71037ebf10  cbz x8,0x71037ebf24
71037ebf14  ldur x2,[x29, #-0x68]
71037ebf18  mov w1,#0x10
71037ebf1c  mov w0,#0x50
71037ebf20  bl 0x71039c19e0
71037ebf24  ldur x23,[x29, #-0x68]
71037ebf28  ldp x8,x9,[sp, #0xc0]
71037ebf2c  ldr x10,[sp, #0xd0]
71037ebf30  stp x9,x10,[x23, #0x18]
71037ebf34  str x8,[x23, #0x10]
71037ebf38  ldr w8,[sp, #0xd8]
71037ebf3c  str xzr,[sp, #0xc0]
71037ebf40  stp xzr,xzr,[sp, #0xc8]
71037ebf44  str w8,[x23, #0x28]
71037ebf48  ldp x8,x9,[x26]
71037ebf4c  ldr x10,[x26, #0x10]
71037ebf50  stp x9,x10,[x23, #0x38]
71037ebf54  str x8,[x23, #0x30]
71037ebf58  stp xzr,xzr,[x26, #0x8]
71037ebf5c  str xzr,[x26]
71037ebf60  ldr w8,[sp, #0xf8]
71037ebf64  stp xzr,x24,[x23]
71037ebf68  ldr x9,[sp, #0x90]
71037ebf6c  str w8,[x23, #0x48]
71037ebf70  ldr x8,[x9, #0x88]
71037ebf74  add x8,x8,#0x1
71037ebf78  ucvtf s0,x8
71037ebf7c  ldr s1,[x9, #0x90]
71037ebf80  cbz x25,0x71037ebf94
71037ebf84  ucvtf s2,x25
71037ebf88  fmul s2,s1,s2
71037ebf8c  fcmp s2,s0
71037ebf90  b.pl 0x71037ec0c8
71037ebf94  lsl x8,x25,#0x1
71037ebf98  cmp x25,#0x3
71037ebf9c  b.cc 0x71037ebfb0
71037ebfa0  sub x9,x25,#0x1
71037ebfa4  tst x9,x25
71037ebfa8  cset w9,ne
71037ebfac  b 0x71037ebfb4
71037ebfb0  mov w9,#0x1
71037ebfb4  fdiv s0,s0,s1
71037ebfb8  orr x8,x9,x8
71037ebfbc  add x22,x23,#0x10
71037ebfc0  fcvtpu x9,s0
71037ebfc4  cmp x8,x9
71037ebfc8  csel x27,x9,x8,cc
71037ebfcc  add x25,x23,#0x30
71037ebfd0  subs x8,x27,#0x1
71037ebfd4  b.ne 0x71037ebfe0
71037ebfd8  mov w27,#0x2
71037ebfdc  b 0x71037ebff4
71037ebfe0  tst x8,x27
71037ebfe4  b.eq 0x71037ebff4
71037ebfe8  mov x0,x27
71037ebfec  bl 0x71039c26e0
71037ebff0  mov x27,x0
71037ebff4  ldr x8,[sp, #0x90]
71037ebff8  ldr x21,[x8, #0x78]
71037ebffc  cmp x27,x21
71037ec000  b.ls 0x71037ec014
71037ec004  ldr x0,[sp, #0x68]
71037ec008  mov x1,x27
71037ec00c  bl 0x71037ee2f0
71037ec010  b 0x71037ec08c
71037ec014  b.cs 0x71037ec08c
71037ec018  cmp x21,#0x3
71037ec01c  b.cc 0x71037ec030
71037ec020  sub x8,x21,#0x1
71037ec024  tst x8,x21
71037ec028  cset w8,eq
71037ec02c  b 0x71037ec034
71037ec030  mov w8,wzr
71037ec034  ldr x10,[sp, #0x90]
71037ec038  ldr x9,[x10, #0x88]
71037ec03c  ldr s1,[x10, #0x90]
71037ec040  ucvtf s0,x9
71037ec044  fdiv s0,s0,s1
71037ec048  fcvtpu x0,s0
71037ec04c  cbz w8,0x71037ec070
71037ec050  sub x8,x0,#0x1
71037ec054  clz x8,x8
71037ec058  neg x8,x8
71037ec05c  mov w9,#0x1
71037ec060  lsl x8,x9,x8
71037ec064  cmp x0,#0x2
71037ec068  csel x0,x0,x8,cc
71037ec06c  b 0x71037ec074
71037ec070  bl 0x71039c26e0
71037ec074  cmp x27,x0
71037ec078  csel x1,x0,x27,cc
71037ec07c  cmp x1,x21
71037ec080  b.cs 0x71037ec08c
71037ec084  ldr x0,[sp, #0x68]
71037ec088  bl 0x71037ee2f0
71037ec08c  ldr x8,[sp, #0x90]
71037ec090  ldr x25,[x8, #0x78]
71037ec094  sub x8,x25,#0x1
71037ec098  tst x8,x25
71037ec09c  b.eq 0x71037ec0b4
71037ec0a0  ldr x22,[sp, #0x68]
71037ec0a4  cmp x24,x25
71037ec0a8  b.cs 0x71037ec0c0
71037ec0ac  mov x21,x24
71037ec0b0  b 0x71037ec0c8
71037ec0b4  ldr x22,[sp, #0x68]
71037ec0b8  and x21,x8,x24
71037ec0bc  b 0x71037ec0c8
71037ec0c0  udiv x8,x24,x25
71037ec0c4  msub x21,x8,x25,x24
71037ec0c8  ldr x8,[x22]
71037ec0cc  ldr x8,[x8, x21, LSL #0x3]
71037ec0d0  cbz x8,0x71037ec0e0
71037ec0d4  ldr x9,[x8]
71037ec0d8  str x9,[x23]
71037ec0dc  b 0x71037ec130
71037ec0e0  ldr x9,[sp, #0x30]
71037ec0e4  ldr x8,[x9]
71037ec0e8  str x8,[x23]
71037ec0ec  str x23,[x9]
71037ec0f0  ldr x8,[x22]
71037ec0f4  str x9,[x8, x21, LSL #0x3]
71037ec0f8  ldr x8,[x23]
71037ec0fc  cbz x8,0x71037ec134
71037ec100  ldr x8,[x8, #0x8]
71037ec104  sub x9,x25,#0x1
71037ec108  tst x9,x25
71037ec10c  b.eq 0x71037ec124
71037ec110  cmp x8,x25
71037ec114  b.cc 0x71037ec128
71037ec118  udiv x9,x8,x25
71037ec11c  msub x8,x9,x25,x8
71037ec120  b 0x71037ec128
71037ec124  and x8,x8,x9
71037ec128  ldr x9,[x22]
71037ec12c  add x8,x9,x8, LSL #0x3
71037ec130  str x23,[x8]
71037ec134  ldr x9,[sp, #0x90]
71037ec138  ldr x8,[x9, #0x88]
71037ec13c  add x8,x8,#0x1
71037ec140  str x8,[x9, #0x88]
71037ec144  ldrb w8,[sp, #0xe0]
71037ec148  ldr x22,[sp, #0x58]
71037ec14c  ldr x28,[sp, #0x70]
71037ec150  tbz w8,#0x0,0x71037ec174
71037ec154  adrp x8,0x71052a8000
71037ec158  ldr x23,[sp, #0xf0]
71037ec15c  ldr x8,[x8, #0xa70]
71037ec160  cbz x8,0x71037ec16c
71037ec164  mov x0,x23
71037ec168  bl 0x71039c19b0
71037ec16c  mov x0,x23
71037ec170  bl 0x710392eb40
71037ec174  ldrb w8,[sp, #0xc0]
71037ec178  tbz w8,#0x0,0x71037ec19c
71037ec17c  adrp x8,0x71052a8000
71037ec180  ldr x23,[sp, #0xd0]
71037ec184  ldr x8,[x8, #0xa70]
71037ec188  cbz x8,0x71037ec194
71037ec18c  mov x0,x23
71037ec190  bl 0x71039c19b0
71037ec194  mov x0,x23
71037ec198  bl 0x710392eb40
71037ec19c  ldrb w8,[sp, #0xa0]
71037ec1a0  tbz w8,#0x0,0x71037ec1c4
71037ec1a4  adrp x8,0x71052a8000
71037ec1a8  ldr x23,[sp, #0xb0]
71037ec1ac  ldr x8,[x8, #0xa70]
71037ec1b0  cbz x8,0x71037ec1bc
71037ec1b4  mov x0,x23
71037ec1b8  bl 0x71039c19b0
71037ec1bc  mov x0,x23
71037ec1c0  bl 0x710392eb40
71037ec1c4  mov w21,#0x1
71037ec1c8  ldurb w8,[x29, #-0x98]
71037ec1cc  tbz w8,#0x0,0x71037ec1f0
71037ec1d0  adrp x8,0x71052a8000
71037ec1d4  ldur x23,[x29, #-0x88]
71037ec1d8  ldr x8,[x8, #0xa70]
71037ec1dc  cbz x8,0x71037ec1e8
71037ec1e0  mov x0,x23
71037ec1e4  bl 0x71039c19b0
71037ec1e8  mov x0,x23
71037ec1ec  bl 0x710392eb40
71037ec1f0  tbz w21,#0x0,0x71037ec1f8
71037ec1f4  add x20,x20,#0xa4
71037ec1f8  ldr x8,[sp, #0x88]
71037ec1fc  ldr w8,[x8, #0x34]
71037ec200  add w19,w19,#0x1
71037ec204  cmp w19,w8
71037ec208  b.cc 0x71037ead8c
71037ec20c  ldr x8,[sp, #0x88]
71037ec210  ldr w8,[x8, #0x2c]
71037ec214  cbz w8,0x71037ec9c4
71037ec218  ldp x8,x10,[sp, #0x88]
71037ec21c  sub x11,x29,#0x98
71037ec220  add x9,sp,#0xc0
71037ec224  add x21,x9,#0x18
71037ec228  add x12,x10,#0x48
71037ec22c  str x12,[sp, #0x78]
71037ec230  add x12,x11,#0x18
71037ec234  orr x11,x11,#0x1
71037ec238  str x11,[sp, #0x50]
71037ec23c  add x11,x9,#0x30
71037ec240  str x11,[sp, #0x70]
71037ec244  orr x11,x9,#0x1
71037ec248  ldr w8,[x8, #0x30]
71037ec24c  mov w20,wzr
71037ec250  stp x12,x11,[sp, #0x60]
71037ec254  ldr x11,[sp, #0x20]
71037ec258  add x23,x8,x11
71037ec25c  add x8,x9,#0x19
71037ec260  str x8,[sp, #0x48]
71037ec264  add x8,x10,#0x58
71037ec268  str x8,[sp, #0x58]
71037ec26c  stur wzr,[x29, #-0x70]
71037ec270  stp xzr,xzr,[x29, #-0x80]
71037ec274  ldr x9,[sp, #0x80]
71037ec278  stur xzr,[x29, #-0x98]
71037ec27c  stp xzr,xzr,[x29, #-0x90]
71037ec280  ldr w8,[x23]
71037ec284  add x27,x9,x8
71037ec288  mov x0,x27
71037ec28c  bl 0x71039c0070
71037ec290  mov x25,x0
71037ec294  subs x2,x0,#0x16
71037ec298  b.ls 0x71037ec2c0
71037ec29c  sub x0,x29,#0x98
71037ec2a0  mov w1,#0x16
71037ec2a4  mov x3,xzr
71037ec2a8  mov x4,xzr
71037ec2ac  mov x5,xzr
71037ec2b0  mov x6,x25
71037ec2b4  mov x7,x27
71037ec2b8  bl 0x71037cfe00
71037ec2bc  b 0x71037ec2f8
71037ec2c0  cbz x25,0x71037ec2d4
71037ec2c4  ldr x0,[sp, #0x50]
71037ec2c8  mov x1,x27
71037ec2cc  mov x2,x25
71037ec2d0  bl 0x71039c00e0
71037ec2d4  sub x8,x29,#0x98
71037ec2d8  add x8,x8,x25
71037ec2dc  strb wzr,[x8, #0x1]
71037ec2e0  ldurb w8,[x29, #-0x98]
71037ec2e4  tbnz w8,#0x0,0x71037ec2f4
71037ec2e8  lsl w8,w25,#0x1
71037ec2ec  sturb w8,[x29, #-0x98]
71037ec2f0  b 0x71037ec2f8
71037ec2f4  stur x25,[x29, #-0x90]
71037ec2f8  ldr w8,[x23, #0x28]
71037ec2fc  stur w8,[x29, #-0x78]
71037ec300  ldr w8,[x23, #0x2c]
71037ec304  stp w8,wzr,[x29, #-0x74]
71037ec308  orr x8,xzr,#-0xffffffff
71037ec30c  stur x8,[x29, #-0x80]
71037ec310  ldr w8,[x23, #0x34]
71037ec314  cmn w8,#0x1
71037ec318  b.ne 0x71037ec358
71037ec31c  ldr w8,[x23, #0x38]
71037ec320  cmn w8,#0x1
71037ec324  b.ne 0x71037ec358
71037ec328  ldr w8,[x23, #0x3c]
71037ec32c  cmn w8,#0x1
71037ec330  b.ne 0x71037ec358
71037ec334  ldr w8,[x23, #0x40]
71037ec338  cmn w8,#0x1
71037ec33c  b.ne 0x71037ec358
71037ec340  ldr w8,[x23, #0x44]
71037ec344  cmn w8,#0x1
71037ec348  b.ne 0x71037ec358
71037ec34c  ldr w8,[x23, #0x48]
71037ec350  cmn w8,#0x1
71037ec354  b.eq 0x71037ec984
71037ec358  stur w8,[x29, #-0x7c]
71037ec35c  ldurb w8,[x29, #-0x98]
71037ec360  str xzr,[sp, #0xc0]
71037ec364  stp xzr,xzr,[sp, #0xc8]
71037ec368  tbnz w8,#0x0,0x71037ec380
71037ec36c  ldp x10,x9,[x29, #-0x90]
71037ec370  stp x10,x9,[sp, #0xc8]
71037ec374  ldur x9,[x29, #-0x98]
71037ec378  str x9,[sp, #0xc0]
71037ec37c  b 0x71037ec444
71037ec380  ldur x25,[x29, #-0x90]
71037ec384  cmn x25,#0x10
71037ec388  b.cs 0x71037ed1a8
71037ec38c  ldur x27,[x29, #-0x88]
71037ec390  cmp x25,#0x17
71037ec394  b.cs 0x71037ec3ac
71037ec398  ldr x24,[sp, #0x68]
71037ec39c  lsl w8,w25,#0x1
71037ec3a0  strb w8,[sp, #0xc0]
71037ec3a4  cbnz x25,0x71037ec42c
71037ec3a8  b 0x71037ec43c
71037ec3ac  add x8,x25,#0x10
71037ec3b0  and x28,x8,#-0x10
71037ec3b4  sub x0,x29,#0x60
71037ec3b8  mov w1,#0x10
71037ec3bc  mov x2,x28
71037ec3c0  bl 0x710392e1f0
71037ec3c4  cmp w0,#0xc
71037ec3c8  b.ne 0x71037ec400
71037ec3cc  adrp x8,0x710593d000
71037ec3d0  ldr x0,[x8, #0x2b0]
71037ec3d4  cbz x0,0x71037ec400
71037ec3d8  str x28,[sp, #0x98]
71037ec3dc  ldr x8,[x0]
71037ec3e0  ldr x8,[x8, #0x30]
71037ec3e4  add x1,sp,#0x98
71037ec3e8  blr x8
71037ec3ec  tbz w0,#0x0,0x71037ec400
71037ec3f0  sub x0,x29,#0x60
71037ec3f4  mov w1,#0x10
71037ec3f8  mov x2,x28
71037ec3fc  bl 0x710392e1f0
71037ec400  adrp x8,0x71052a8000
71037ec404  ldr x8,[x8, #0xa78]
71037ec408  cbz x8,0x71037ec41c
71037ec40c  ldur x2,[x29, #-0x60]
71037ec410  mov w1,#0x10
71037ec414  mov x0,x28
71037ec418  bl 0x71039c19e0
71037ec41c  ldur x24,[x29, #-0x60]
71037ec420  orr x8,x28,#0x1
71037ec424  str x8,[sp, #0xc0]
71037ec428  stp x25,x24,[sp, #0xc8]
71037ec42c  mov x0,x24
71037ec430  mov x1,x27
71037ec434  mov x2,x25
71037ec438  bl 0x71039c00e0
71037ec43c  strb wzr,[x24, x25, LSL ]
71037ec440  ldurb w8,[x29, #-0x98]
71037ec444  stp xzr,xzr,[x21, #0x8]
71037ec448  str xzr,[x21]
71037ec44c  tbnz w8,#0x0,0x71037ec464
71037ec450  ldur x9,[x29, #-0x88]
71037ec454  str x9,[x21, #0x10]
71037ec458  ldp x8,x9,[x29, #-0x98]
71037ec45c  stp x8,x9,[x21]
71037ec460  b 0x71037ec524
71037ec464  ldur x25,[x29, #-0x90]
71037ec468  cmn x25,#0x10
71037ec46c  b.cs 0x71037ed1b0
71037ec470  ldur x27,[x29, #-0x88]
71037ec474  cmp x25,#0x17
71037ec478  b.cs 0x71037ec490
71037ec47c  ldr x24,[sp, #0x48]
71037ec480  lsl w8,w25,#0x1
71037ec484  strb w8,[sp, #0xd8]
71037ec488  cbnz x25,0x71037ec510
71037ec48c  b 0x71037ec520
71037ec490  add x8,x25,#0x10
71037ec494  and x28,x8,#-0x10
71037ec498  sub x0,x29,#0x60
71037ec49c  mov w1,#0x10
71037ec4a0  mov x2,x28
71037ec4a4  bl 0x710392e1f0
71037ec4a8  cmp w0,#0xc
71037ec4ac  b.ne 0x71037ec4e4
71037ec4b0  adrp x8,0x710593d000
71037ec4b4  ldr x0,[x8, #0x2b0]
71037ec4b8  cbz x0,0x71037ec4e4
71037ec4bc  str x28,[sp, #0x98]
71037ec4c0  ldr x8,[x0]
71037ec4c4  ldr x8,[x8, #0x30]
71037ec4c8  add x1,sp,#0x98
71037ec4cc  blr x8
71037ec4d0  tbz w0,#0x0,0x71037ec4e4
71037ec4d4  sub x0,x29,#0x60
71037ec4d8  mov w1,#0x10
71037ec4dc  mov x2,x28
71037ec4e0  bl 0x710392e1f0
71037ec4e4  adrp x8,0x71052a8000
71037ec4e8  ldr x8,[x8, #0xa78]
71037ec4ec  cbz x8,0x71037ec500
71037ec4f0  ldur x2,[x29, #-0x60]
71037ec4f4  mov w1,#0x10
71037ec4f8  mov x0,x28
71037ec4fc  bl 0x71039c19e0
71037ec500  ldur x24,[x29, #-0x60]
71037ec504  orr x8,x28,#0x1
71037ec508  str x8,[sp, #0xd8]
71037ec50c  stp x25,x24,[sp, #0xe0]
71037ec510  mov x0,x24
71037ec514  mov x1,x27
71037ec518  mov x2,x25
71037ec51c  bl 0x71039c00e0
71037ec520  strb wzr,[x24, x25, LSL ]
71037ec524  ldr x10,[sp, #0x60]
71037ec528  ldp x8,x9,[x10]
71037ec52c  ldr w10,[x10, #0x10]
71037ec530  ldr x11,[sp, #0x70]
71037ec534  str w10,[x11, #0x10]
71037ec538  stp x8,x9,[x11]
71037ec53c  ldrb w8,[sp, #0xc0]
71037ec540  ldp x10,x9,[sp, #0xc8]
71037ec544  lsr x11,x8,#0x1
71037ec548  tst w8,#0x1
71037ec54c  ldr x8,[sp, #0x68]
71037ec550  csel x25,x11,x10,eq
71037ec554  mov x1,x25
71037ec558  csel x28,x8,x9,eq
71037ec55c  mov x0,x28
71037ec560  bl 0x7102677830
71037ec564  ldr x8,[sp, #0x90]
71037ec568  ldr x24,[x8, #0x50]
71037ec56c  mov x27,x0
71037ec570  cbz x24,0x71037ec760
71037ec574  sub x26,x24,#0x1
71037ec578  ands x8,x26,x24
71037ec57c  b.eq 0x71037ec59c
71037ec580  ldr x10,[sp, #0x78]
71037ec584  cmp x27,x24
71037ec588  mov x22,x27
71037ec58c  b.cc 0x71037ec5a4
71037ec590  udiv x9,x27,x24
71037ec594  msub x22,x9,x24,x27
71037ec598  b 0x71037ec5a4
71037ec59c  ldr x10,[sp, #0x78]
71037ec5a0  and x22,x26,x27
71037ec5a4  ldr x9,[x10]
71037ec5a8  ldr x9,[x9, x22, LSL #0x3]
71037ec5ac  cbz x9,0x71037ec760
71037ec5b0  ldr x19,[x9]
71037ec5b4  cbz x19,0x71037ec760
71037ec5b8  cbz x8,0x71037ec6a0
71037ec5bc  cbz x25,0x71037ec658
71037ec5c0  ldr x8,[x19, #0x8]
71037ec5c4  cmp x8,x27
71037ec5c8  b.eq 0x71037ec5e4
71037ec5cc  cmp x8,x24
71037ec5d0  b.cc 0x71037ec5dc
71037ec5d4  udiv x9,x8,x24
71037ec5d8  msub x8,x9,x24,x8
71037ec5dc  cmp x8,x22
71037ec5e0  b.ne 0x71037ec760
71037ec5e4  mov x8,x19
71037ec5e8  ldrb w10,[x8, #0x10]!
71037ec5ec  tst w10,#0x1
71037ec5f0  ldr x11,[x8, #0x8]
71037ec5f4  lsr x9,x10,#0x1
71037ec5f8  csel x11,x9,x11,eq
71037ec5fc  cmp x11,x25
71037ec600  b.ne 0x71037ec64c
71037ec604  tbnz w10,#0x0,0x71037ec638
71037ec608  add x8,x8,#0x1
71037ec60c  neg x9,x9
71037ec610  mov x10,x28
71037ec614  ldrb w11,[x8]
71037ec618  ldrb w12,[x10]
71037ec61c  cmp w11,w12
71037ec620  b.ne 0x71037ec64c
71037ec624  add x8,x8,#0x1
71037ec628  add x10,x10,#0x1
71037ec62c  adds x9,x9,#0x1
71037ec630  b.ne 0x71037ec614
71037ec634  b 0x71037ec934
71037ec638  ldr x0,[x19, #0x20]
71037ec63c  mov x1,x28
71037ec640  mov x2,x25
71037ec644  bl 0x71039c0250
71037ec648  cbz w0,0x71037ec934
71037ec64c  ldr x19,[x19]
71037ec650  cbnz x19,0x71037ec5c0
71037ec654  b 0x71037ec760
71037ec658  ldr x8,[x19, #0x8]
71037ec65c  cmp x8,x27
71037ec660  b.eq 0x71037ec67c
71037ec664  cmp x8,x24
71037ec668  b.cc 0x71037ec674
71037ec66c  udiv x9,x8,x24
71037ec670  msub x8,x9,x24,x8
71037ec674  cmp x8,x22
71037ec678  b.ne 0x71037ec760
71037ec67c  ldrb w8,[x19, #0x10]
71037ec680  ldr x9,[x19, #0x18]
71037ec684  lsr x10,x8,#0x1
71037ec688  tst w8,#0x1
71037ec68c  csel x8,x10,x9,eq
71037ec690  cbz x8,0x71037ec934
71037ec694  ldr x19,[x19]
71037ec698  cbnz x19,0x71037ec658
71037ec69c  b 0x71037ec760
71037ec6a0  cbz x25,0x71037ec72c
71037ec6a4  ldr x8,[x19, #0x8]
71037ec6a8  and x9,x8,x26
71037ec6ac  cmp x8,x27
71037ec6b0  ccmp x9,x22,#0x4,ne
71037ec6b4  b.ne 0x71037ec760
71037ec6b8  mov x8,x19
71037ec6bc  ldrb w10,[x8, #0x10]!
71037ec6c0  tst w10,#0x1
71037ec6c4  ldr x11,[x8, #0x8]
71037ec6c8  lsr x9,x10,#0x1
71037ec6cc  csel x11,x9,x11,eq
71037ec6d0  cmp x11,x25
71037ec6d4  b.ne 0x71037ec720
71037ec6d8  tbnz w10,#0x0,0x71037ec70c
71037ec6dc  add x8,x8,#0x1
71037ec6e0  neg x9,x9
71037ec6e4  mov x10,x28
71037ec6e8  ldrb w11,[x8]
71037ec6ec  ldrb w12,[x10]
71037ec6f0  cmp w11,w12
71037ec6f4  b.ne 0x71037ec720
71037ec6f8  add x8,x8,#0x1
71037ec6fc  add x10,x10,#0x1
71037ec700  adds x9,x9,#0x1
71037ec704  b.ne 0x71037ec6e8
71037ec708  b 0x71037ec934
71037ec70c  ldr x0,[x19, #0x20]
71037ec710  mov x1,x28
71037ec714  mov x2,x25
71037ec718  bl 0x71039c0250
71037ec71c  cbz w0,0x71037ec934
71037ec720  ldr x19,[x19]
71037ec724  cbnz x19,0x71037ec6a4
71037ec728  b 0x71037ec760
71037ec72c  ldr x8,[x19, #0x8]
71037ec730  and x9,x8,x26
71037ec734  cmp x8,x27
71037ec738  ccmp x9,x22,#0x4,ne
71037ec73c  b.ne 0x71037ec760
71037ec740  ldrb w8,[x19, #0x10]
71037ec744  ldr x9,[x19, #0x18]
71037ec748  lsr x10,x8,#0x1
71037ec74c  tst w8,#0x1
71037ec750  csel x8,x10,x9,eq
71037ec754  cbz x8,0x71037ec934
71037ec758  ldr x19,[x19]
71037ec75c  cbnz x19,0x71037ec72c
71037ec760  sub x0,x29,#0x60
71037ec764  mov w1,#0x10
71037ec768  mov w2,#0x58
71037ec76c  bl 0x710392e1f0
71037ec770  cmp w0,#0xc
71037ec774  b.ne 0x71037ec7b0
71037ec778  adrp x8,0x710593d000
71037ec77c  ldr x0,[x8, #0x2b0]
71037ec780  cbz x0,0x71037ec7b0
71037ec784  mov w8,#0x58
71037ec788  str x8,[sp, #0x98]
71037ec78c  ldr x8,[x0]
71037ec790  ldr x8,[x8, #0x30]
71037ec794  add x1,sp,#0x98
71037ec798  blr x8
71037ec79c  tbz w0,#0x0,0x71037ec7b0
71037ec7a0  sub x0,x29,#0x60
71037ec7a4  mov w1,#0x10
71037ec7a8  mov w2,#0x58
71037ec7ac  bl 0x710392e1f0
71037ec7b0  adrp x8,0x71052a8000
71037ec7b4  ldr x8,[x8, #0xa78]
71037ec7b8  cbz x8,0x71037ec7cc
71037ec7bc  ldur x2,[x29, #-0x60]
71037ec7c0  mov w1,#0x10
71037ec7c4  mov w0,#0x58
71037ec7c8  bl 0x71039c19e0
71037ec7cc  ldur x28,[x29, #-0x60]
71037ec7d0  ldp x8,x9,[sp, #0xc0]
71037ec7d4  ldr x10,[sp, #0xd0]
71037ec7d8  stp x9,x10,[x28, #0x18]
71037ec7dc  str x8,[x28, #0x10]
71037ec7e0  stp xzr,xzr,[sp, #0xc8]
71037ec7e4  str xzr,[sp, #0xc0]
71037ec7e8  ldp x8,x9,[x21]
71037ec7ec  ldr x10,[x21, #0x10]
71037ec7f0  stp x9,x10,[x28, #0x30]
71037ec7f4  str x8,[x28, #0x28]
71037ec7f8  ldp x10,x0,[sp, #0x70]
71037ec7fc  stp xzr,xzr,[x21, #0x8]
71037ec800  str xzr,[x21]
71037ec804  ldp x8,x9,[x10]
71037ec808  ldr w10,[x10, #0x10]
71037ec80c  stp x8,x9,[x28, #0x40]
71037ec810  str w10,[x28, #0x50]
71037ec814  stp xzr,x27,[x28]
71037ec818  ldr x9,[sp, #0x90]
71037ec81c  ldr x8,[x9, #0x60]
71037ec820  add x8,x8,#0x1
71037ec824  ldr s1,[x9, #0x68]
71037ec828  ucvtf s0,x8
71037ec82c  cbz x24,0x71037ec840
71037ec830  ucvtf s2,x24
71037ec834  fmul s2,s1,s2
71037ec838  fcmp s2,s0
71037ec83c  b.pl 0x71037ec8b8
71037ec840  lsl x8,x24,#0x1
71037ec844  cmp x24,#0x3
71037ec848  b.cc 0x71037ec85c
71037ec84c  sub x9,x24,#0x1
71037ec850  tst x9,x24
71037ec854  cset w9,ne
71037ec858  b 0x71037ec860
71037ec85c  mov w9,#0x1
71037ec860  fdiv s0,s0,s1
71037ec864  fcvtpu x10,s0
71037ec868  orr x8,x9,x8
71037ec86c  cmp x8,x10
71037ec870  add x19,x28,#0x10
71037ec874  add x22,x28,#0x28
71037ec878  csel x1,x10,x8,cc
71037ec87c  bl 0x71037ee200
71037ec880  ldr x8,[sp, #0x90]
71037ec884  ldr x24,[x8, #0x50]
71037ec888  ldr x0,[sp, #0x78]
71037ec88c  sub x8,x24,#0x1
71037ec890  tst x8,x24
71037ec894  b.eq 0x71037ec8a8
71037ec898  cmp x27,x24
71037ec89c  b.cs 0x71037ec8b0
71037ec8a0  mov x22,x27
71037ec8a4  b 0x71037ec8b8
71037ec8a8  and x22,x8,x27
71037ec8ac  b 0x71037ec8b8
71037ec8b0  udiv x8,x27,x24
71037ec8b4  msub x22,x8,x24,x27
71037ec8b8  ldr x8,[x0]
71037ec8bc  ldr x8,[x8, x22, LSL #0x3]
71037ec8c0  cbz x8,0x71037ec8d0
71037ec8c4  ldr x9,[x8]
71037ec8c8  str x9,[x28]
71037ec8cc  b 0x71037ec920
71037ec8d0  ldr x9,[sp, #0x58]
71037ec8d4  ldr x8,[x9]
71037ec8d8  str x8,[x28]
71037ec8dc  str x28,[x9]
71037ec8e0  ldr x8,[x0]
71037ec8e4  str x9,[x8, x22, LSL #0x3]
71037ec8e8  ldr x8,[x28]
71037ec8ec  cbz x8,0x71037ec924
71037ec8f0  ldr x8,[x8, #0x8]
71037ec8f4  sub x9,x24,#0x1
71037ec8f8  tst x9,x24
71037ec8fc  b.eq 0x71037ec914
71037ec900  cmp x8,x24
71037ec904  b.cc 0x71037ec918
71037ec908  udiv x9,x8,x24
71037ec90c  msub x8,x9,x24,x8
71037ec910  b 0x71037ec918
71037ec914  and x8,x8,x9
71037ec918  ldr x9,[x0]
71037ec91c  add x8,x9,x8, LSL #0x3
71037ec920  str x28,[x8]
71037ec924  ldr x9,[sp, #0x90]
71037ec928  ldr x8,[x9, #0x60]
71037ec92c  add x8,x8,#0x1
71037ec930  str x8,[x9, #0x60]
71037ec934  ldrb w8,[sp, #0xd8]
71037ec938  tbz w8,#0x0,0x71037ec95c
71037ec93c  adrp x8,0x71052a8000
71037ec940  ldr x24,[sp, #0xe8]
71037ec944  ldr x8,[x8, #0xa70]
71037ec948  cbz x8,0x71037ec954
71037ec94c  mov x0,x24
71037ec950  bl 0x71039c19b0
71037ec954  mov x0,x24
71037ec958  bl 0x710392eb40
71037ec95c  ldrb w8,[sp, #0xc0]
71037ec960  tbz w8,#0x0,0x71037ec984
71037ec964  adrp x8,0x71052a8000
71037ec968  ldr x24,[sp, #0xd0]
71037ec96c  ldr x8,[x8, #0xa70]
71037ec970  cbz x8,0x71037ec97c
71037ec974  mov x0,x24
71037ec978  bl 0x71039c19b0
71037ec97c  mov x0,x24
71037ec980  bl 0x710392eb40
71037ec984  ldurb w8,[x29, #-0x98]
71037ec988  tbz w8,#0x0,0x71037ec9ac
71037ec98c  adrp x8,0x71052a8000
71037ec990  ldur x24,[x29, #-0x88]
71037ec994  ldr x8,[x8, #0xa70]
71037ec998  cbz x8,0x71037ec9a4
71037ec99c  mov x0,x24
71037ec9a0  bl 0x71039c19b0
71037ec9a4  mov x0,x24
71037ec9a8  bl 0x710392eb40
71037ec9ac  ldr x8,[sp, #0x88]
71037ec9b0  ldr w8,[x8, #0x2c]
71037ec9b4  add w20,w20,#0x1
71037ec9b8  add x23,x23,#0x6c
71037ec9bc  cmp w20,w8
71037ec9c0  b.cc 0x71037ec26c
71037ec9c4  ldr x8,[sp, #0x88]
71037ec9c8  ldr w8,[x8, #0x4c]
71037ec9cc  cbz w8,0x71037ed180
71037ec9d0  ldp x8,x10,[sp, #0x88]
71037ec9d4  sub x11,x29,#0x98
71037ec9d8  add x9,sp,#0xc0
71037ec9dc  add x21,x9,#0x18
71037ec9e0  add x12,x10,#0x48
71037ec9e4  str x12,[sp, #0x78]
71037ec9e8  add x12,x11,#0x18
71037ec9ec  orr x11,x11,#0x1
71037ec9f0  str x11,[sp, #0x50]
71037ec9f4  add x11,x9,#0x30
71037ec9f8  str x11,[sp, #0x70]
71037ec9fc  orr x11,x9,#0x1
71037eca00  ldr w8,[x8, #0x50]
71037eca04  mov w20,wzr
71037eca08  stp x12,x11,[sp, #0x60]
71037eca0c  ldr x11,[sp, #0x20]
71037eca10  add x23,x8,x11
71037eca14  add x8,x9,#0x19
71037eca18  str x8,[sp, #0x48]
71037eca1c  add x8,x10,#0x58
71037eca20  str x8,[sp, #0x58]
71037eca24  stur wzr,[x29, #-0x70]
71037eca28  stp xzr,xzr,[x29, #-0x80]
71037eca2c  ldr x9,[sp, #0x80]
71037eca30  stur xzr,[x29, #-0x98]
71037eca34  stp xzr,xzr,[x29, #-0x90]
71037eca38  ldr w8,[x23]
71037eca3c  add x27,x9,x8
71037eca40  mov x0,x27
71037eca44  bl 0x71039c0070
71037eca48  mov x25,x0
71037eca4c  subs x2,x0,#0x16
71037eca50  b.ls 0x71037eca78
71037eca54  sub x0,x29,#0x98
71037eca58  mov w1,#0x16
71037eca5c  mov x3,xzr
71037eca60  mov x4,xzr
71037eca64  mov x5,xzr
71037eca68  mov x6,x25
71037eca6c  mov x7,x27
71037eca70  bl 0x71037cfe00
71037eca74  b 0x71037ecab0
71037eca78  cbz x25,0x71037eca8c
71037eca7c  ldr x0,[sp, #0x50]
71037eca80  mov x1,x27
71037eca84  mov x2,x25
71037eca88  bl 0x71039c00e0
71037eca8c  sub x8,x29,#0x98
71037eca90  add x8,x8,x25
71037eca94  strb wzr,[x8, #0x1]
71037eca98  ldurb w8,[x29, #-0x98]
71037eca9c  tbnz w8,#0x0,0x71037ecaac
71037ecaa0  lsl w8,w25,#0x1
71037ecaa4  sturb w8,[x29, #-0x98]
71037ecaa8  b 0x71037ecab0
71037ecaac  stur x25,[x29, #-0x90]
71037ecab0  ldr w8,[x23, #0x28]
71037ecab4  stur w8,[x29, #-0x78]
71037ecab8  ldr w8,[x23, #0x2c]
71037ecabc  stp w8,wzr,[x29, #-0x74]
71037ecac0  mov x8,#-0xfffa
71037ecac4  movk x8,#0x0, LSL #16
71037ecac8  stur x8,[x29, #-0x80]
71037ecacc  ldr w8,[x23, #0x30]
71037ecad0  cmn w8,#0x1
71037ecad4  b.ne 0x71037ecb14
71037ecad8  ldr w8,[x23, #0x34]
71037ecadc  cmn w8,#0x1
71037ecae0  b.ne 0x71037ecb14
71037ecae4  ldr w8,[x23, #0x38]
71037ecae8  cmn w8,#0x1
71037ecaec  b.ne 0x71037ecb14
71037ecaf0  ldr w8,[x23, #0x3c]
71037ecaf4  cmn w8,#0x1
71037ecaf8  b.ne 0x71037ecb14
71037ecafc  ldr w8,[x23, #0x40]
71037ecb00  cmn w8,#0x1
71037ecb04  b.ne 0x71037ecb14
71037ecb08  ldr w8,[x23, #0x44]
71037ecb0c  cmn w8,#0x1
71037ecb10  b.eq 0x71037ed140
71037ecb14  stur w8,[x29, #-0x7c]
71037ecb18  ldurb w8,[x29, #-0x98]
71037ecb1c  str xzr,[sp, #0xc0]
71037ecb20  stp xzr,xzr,[sp, #0xc8]
71037ecb24  tbnz w8,#0x0,0x71037ecb3c
71037ecb28  ldp x10,x9,[x29, #-0x90]
71037ecb2c  stp x10,x9,[sp, #0xc8]
71037ecb30  ldur x9,[x29, #-0x98]
71037ecb34  str x9,[sp, #0xc0]
71037ecb38  b 0x71037ecc00
71037ecb3c  ldur x25,[x29, #-0x90]
71037ecb40  cmn x25,#0x10
71037ecb44  b.cs 0x71037ed1b8
71037ecb48  ldur x27,[x29, #-0x88]
71037ecb4c  cmp x25,#0x17
71037ecb50  b.cs 0x71037ecb68
71037ecb54  ldr x24,[sp, #0x68]
71037ecb58  lsl w8,w25,#0x1
71037ecb5c  strb w8,[sp, #0xc0]
71037ecb60  cbnz x25,0x71037ecbe8
71037ecb64  b 0x71037ecbf8
71037ecb68  add x8,x25,#0x10
71037ecb6c  and x28,x8,#-0x10
71037ecb70  sub x0,x29,#0x60
71037ecb74  mov w1,#0x10
71037ecb78  mov x2,x28
71037ecb7c  bl 0x710392e1f0
71037ecb80  cmp w0,#0xc
71037ecb84  b.ne 0x71037ecbbc
71037ecb88  adrp x8,0x710593d000
71037ecb8c  ldr x0,[x8, #0x2b0]
71037ecb90  cbz x0,0x71037ecbbc
71037ecb94  str x28,[sp, #0x98]
71037ecb98  ldr x8,[x0]
71037ecb9c  ldr x8,[x8, #0x30]
71037ecba0  add x1,sp,#0x98
71037ecba4  blr x8
71037ecba8  tbz w0,#0x0,0x71037ecbbc
71037ecbac  sub x0,x29,#0x60
71037ecbb0  mov w1,#0x10
71037ecbb4  mov x2,x28
71037ecbb8  bl 0x710392e1f0
71037ecbbc  adrp x8,0x71052a8000
71037ecbc0  ldr x8,[x8, #0xa78]
71037ecbc4  cbz x8,0x71037ecbd8
71037ecbc8  ldur x2,[x29, #-0x60]
71037ecbcc  mov w1,#0x10
71037ecbd0  mov x0,x28
71037ecbd4  bl 0x71039c19e0
71037ecbd8  ldur x24,[x29, #-0x60]
71037ecbdc  orr x8,x28,#0x1
71037ecbe0  str x8,[sp, #0xc0]
71037ecbe4  stp x25,x24,[sp, #0xc8]
71037ecbe8  mov x0,x24
71037ecbec  mov x1,x27
71037ecbf0  mov x2,x25
71037ecbf4  bl 0x71039c00e0
71037ecbf8  strb wzr,[x24, x25, LSL ]
71037ecbfc  ldurb w8,[x29, #-0x98]
71037ecc00  stp xzr,xzr,[x21, #0x8]
71037ecc04  str xzr,[x21]
71037ecc08  tbnz w8,#0x0,0x71037ecc20
71037ecc0c  ldur x9,[x29, #-0x88]
71037ecc10  str x9,[x21, #0x10]
71037ecc14  ldp x8,x9,[x29, #-0x98]
71037ecc18  stp x8,x9,[x21]
71037ecc1c  b 0x71037ecce0
71037ecc20  ldur x25,[x29, #-0x90]
71037ecc24  cmn x25,#0x10
71037ecc28  b.cs 0x71037ed1c0
71037ecc2c  ldur x27,[x29, #-0x88]
71037ecc30  cmp x25,#0x17
71037ecc34  b.cs 0x71037ecc4c
71037ecc38  ldr x24,[sp, #0x48]
71037ecc3c  lsl w8,w25,#0x1
71037ecc40  strb w8,[sp, #0xd8]
71037ecc44  cbnz x25,0x71037ecccc
71037ecc48  b 0x71037eccdc
71037ecc4c  add x8,x25,#0x10
71037ecc50  and x28,x8,#-0x10
71037ecc54  sub x0,x29,#0x60
71037ecc58  mov w1,#0x10
71037ecc5c  mov x2,x28
71037ecc60  bl 0x710392e1f0
71037ecc64  cmp w0,#0xc
71037ecc68  b.ne 0x71037ecca0
71037ecc6c  adrp x8,0x710593d000
71037ecc70  ldr x0,[x8, #0x2b0]
71037ecc74  cbz x0,0x71037ecca0
71037ecc78  str x28,[sp, #0x98]
71037ecc7c  ldr x8,[x0]
71037ecc80  ldr x8,[x8, #0x30]
71037ecc84  add x1,sp,#0x98
71037ecc88  blr x8
71037ecc8c  tbz w0,#0x0,0x71037ecca0
71037ecc90  sub x0,x29,#0x60
71037ecc94  mov w1,#0x10
71037ecc98  mov x2,x28
71037ecc9c  bl 0x710392e1f0
71037ecca0  adrp x8,0x71052a8000
71037ecca4  ldr x8,[x8, #0xa78]
71037ecca8  cbz x8,0x71037eccbc
71037eccac  ldur x2,[x29, #-0x60]
71037eccb0  mov w1,#0x10
71037eccb4  mov x0,x28
71037eccb8  bl 0x71039c19e0
71037eccbc  ldur x24,[x29, #-0x60]
71037eccc0  orr x8,x28,#0x1
71037eccc4  str x8,[sp, #0xd8]
71037eccc8  stp x25,x24,[sp, #0xe0]
71037ecccc  mov x0,x24
71037eccd0  mov x1,x27
71037eccd4  mov x2,x25
71037eccd8  bl 0x71039c00e0
71037eccdc  strb wzr,[x24, x25, LSL ]
71037ecce0  ldr x10,[sp, #0x60]
71037ecce4  ldp x8,x9,[x10]
71037ecce8  ldr w10,[x10, #0x10]
71037eccec  ldr x11,[sp, #0x70]
71037eccf0  str w10,[x11, #0x10]
71037eccf4  stp x8,x9,[x11]
71037eccf8  ldrb w8,[sp, #0xc0]
71037eccfc  ldp x10,x9,[sp, #0xc8]
71037ecd00  lsr x11,x8,#0x1
71037ecd04  tst w8,#0x1
71037ecd08  ldr x8,[sp, #0x68]
71037ecd0c  csel x25,x11,x10,eq
71037ecd10  mov x1,x25
71037ecd14  csel x28,x8,x9,eq
71037ecd18  mov x0,x28
71037ecd1c  bl 0x7102677830
71037ecd20  ldr x8,[sp, #0x90]
71037ecd24  ldr x24,[x8, #0x50]
71037ecd28  mov x27,x0
71037ecd2c  cbz x24,0x71037ecf1c
71037ecd30  sub x26,x24,#0x1
71037ecd34  ands x8,x26,x24
71037ecd38  b.eq 0x71037ecd58
71037ecd3c  ldr x10,[sp, #0x78]
71037ecd40  cmp x27,x24
71037ecd44  mov x22,x27
71037ecd48  b.cc 0x71037ecd60
71037ecd4c  udiv x9,x27,x24
71037ecd50  msub x22,x9,x24,x27
71037ecd54  b 0x71037ecd60
71037ecd58  ldr x10,[sp, #0x78]
71037ecd5c  and x22,x26,x27
71037ecd60  ldr x9,[x10]
71037ecd64  ldr x9,[x9, x22, LSL #0x3]
71037ecd68  cbz x9,0x71037ecf1c
71037ecd6c  ldr x19,[x9]
71037ecd70  cbz x19,0x71037ecf1c
71037ecd74  cbz x8,0x71037ece5c
71037ecd78  cbz x25,0x71037ece14
71037ecd7c  ldr x8,[x19, #0x8]
71037ecd80  cmp x8,x27
71037ecd84  b.eq 0x71037ecda0
71037ecd88  cmp x8,x24
71037ecd8c  b.cc 0x71037ecd98
71037ecd90  udiv x9,x8,x24
71037ecd94  msub x8,x9,x24,x8
71037ecd98  cmp x8,x22
71037ecd9c  b.ne 0x71037ecf1c
71037ecda0  mov x8,x19
71037ecda4  ldrb w10,[x8, #0x10]!
71037ecda8  tst w10,#0x1
71037ecdac  ldr x11,[x8, #0x8]
71037ecdb0  lsr x9,x10,#0x1
71037ecdb4  csel x11,x9,x11,eq
71037ecdb8  cmp x11,x25
71037ecdbc  b.ne 0x71037ece08
71037ecdc0  tbnz w10,#0x0,0x71037ecdf4
71037ecdc4  add x8,x8,#0x1
71037ecdc8  neg x9,x9
71037ecdcc  mov x10,x28
71037ecdd0  ldrb w11,[x8]
71037ecdd4  ldrb w12,[x10]
71037ecdd8  cmp w11,w12
71037ecddc  b.ne 0x71037ece08
71037ecde0  add x8,x8,#0x1
71037ecde4  add x10,x10,#0x1
71037ecde8  adds x9,x9,#0x1
71037ecdec  b.ne 0x71037ecdd0
71037ecdf0  b 0x71037ed0f0
71037ecdf4  ldr x0,[x19, #0x20]
71037ecdf8  mov x1,x28
71037ecdfc  mov x2,x25
71037ece00  bl 0x71039c0250
71037ece04  cbz w0,0x71037ed0f0
71037ece08  ldr x19,[x19]
71037ece0c  cbnz x19,0x71037ecd7c
71037ece10  b 0x71037ecf1c
71037ece14  ldr x8,[x19, #0x8]
71037ece18  cmp x8,x27
71037ece1c  b.eq 0x71037ece38
71037ece20  cmp x8,x24
71037ece24  b.cc 0x71037ece30
71037ece28  udiv x9,x8,x24
71037ece2c  msub x8,x9,x24,x8
71037ece30  cmp x8,x22
71037ece34  b.ne 0x71037ecf1c
71037ece38  ldrb w8,[x19, #0x10]
71037ece3c  ldr x9,[x19, #0x18]
71037ece40  lsr x10,x8,#0x1
71037ece44  tst w8,#0x1
71037ece48  csel x8,x10,x9,eq
71037ece4c  cbz x8,0x71037ed0f0
71037ece50  ldr x19,[x19]
71037ece54  cbnz x19,0x71037ece14
71037ece58  b 0x71037ecf1c
71037ece5c  cbz x25,0x71037ecee8
71037ece60  ldr x8,[x19, #0x8]
71037ece64  and x9,x8,x26
71037ece68  cmp x8,x27
71037ece6c  ccmp x9,x22,#0x4,ne
71037ece70  b.ne 0x71037ecf1c
71037ece74  mov x8,x19
71037ece78  ldrb w10,[x8, #0x10]!
71037ece7c  tst w10,#0x1
71037ece80  ldr x11,[x8, #0x8]
71037ece84  lsr x9,x10,#0x1
71037ece88  csel x11,x9,x11,eq
71037ece8c  cmp x11,x25
71037ece90  b.ne 0x71037ecedc
71037ece94  tbnz w10,#0x0,0x71037ecec8
71037ece98  add x8,x8,#0x1
71037ece9c  neg x9,x9
71037ecea0  mov x10,x28
71037ecea4  ldrb w11,[x8]
71037ecea8  ldrb w12,[x10]
71037eceac  cmp w11,w12
71037eceb0  b.ne 0x71037ecedc
71037eceb4  add x8,x8,#0x1
71037eceb8  add x10,x10,#0x1
71037ecebc  adds x9,x9,#0x1
71037ecec0  b.ne 0x71037ecea4
71037ecec4  b 0x71037ed0f0
71037ecec8  ldr x0,[x19, #0x20]
71037ececc  mov x1,x28
71037eced0  mov x2,x25
71037eced4  bl 0x71039c0250
71037eced8  cbz w0,0x71037ed0f0
71037ecedc  ldr x19,[x19]
71037ecee0  cbnz x19,0x71037ece60
71037ecee4  b 0x71037ecf1c
71037ecee8  ldr x8,[x19, #0x8]
71037eceec  and x9,x8,x26
71037ecef0  cmp x8,x27
71037ecef4  ccmp x9,x22,#0x4,ne
71037ecef8  b.ne 0x71037ecf1c
71037ecefc  ldrb w8,[x19, #0x10]
71037ecf00  ldr x9,[x19, #0x18]
71037ecf04  lsr x10,x8,#0x1
71037ecf08  tst w8,#0x1
71037ecf0c  csel x8,x10,x9,eq
71037ecf10  cbz x8,0x71037ed0f0
71037ecf14  ldr x19,[x19]
71037ecf18  cbnz x19,0x71037ecee8
71037ecf1c  sub x0,x29,#0x60
71037ecf20  mov w1,#0x10
71037ecf24  mov w2,#0x58
71037ecf28  bl 0x710392e1f0
71037ecf2c  cmp w0,#0xc
71037ecf30  b.ne 0x71037ecf6c
71037ecf34  adrp x8,0x710593d000
71037ecf38  ldr x0,[x8, #0x2b0]
71037ecf3c  cbz x0,0x71037ecf6c
71037ecf40  mov w8,#0x58
71037ecf44  str x8,[sp, #0x98]
71037ecf48  ldr x8,[x0]
71037ecf4c  ldr x8,[x8, #0x30]
71037ecf50  add x1,sp,#0x98
71037ecf54  blr x8
71037ecf58  tbz w0,#0x0,0x71037ecf6c
71037ecf5c  sub x0,x29,#0x60
71037ecf60  mov w1,#0x10
71037ecf64  mov w2,#0x58
71037ecf68  bl 0x710392e1f0
71037ecf6c  adrp x8,0x71052a8000
71037ecf70  ldr x8,[x8, #0xa78]
71037ecf74  cbz x8,0x71037ecf88
71037ecf78  ldur x2,[x29, #-0x60]
71037ecf7c  mov w1,#0x10
71037ecf80  mov w0,#0x58
71037ecf84  bl 0x71039c19e0
71037ecf88  ldur x28,[x29, #-0x60]
71037ecf8c  ldp x8,x9,[sp, #0xc0]
71037ecf90  ldr x10,[sp, #0xd0]
71037ecf94  stp x9,x10,[x28, #0x18]
71037ecf98  str x8,[x28, #0x10]
71037ecf9c  stp xzr,xzr,[sp, #0xc8]
71037ecfa0  str xzr,[sp, #0xc0]
71037ecfa4  ldp x8,x9,[x21]
71037ecfa8  ldr x10,[x21, #0x10]
71037ecfac  stp x9,x10,[x28, #0x30]
71037ecfb0  str x8,[x28, #0x28]
71037ecfb4  ldp x10,x0,[sp, #0x70]
71037ecfb8  stp xzr,xzr,[x21, #0x8]
71037ecfbc  str xzr,[x21]
71037ecfc0  ldp x8,x9,[x10]
71037ecfc4  ldr w10,[x10, #0x10]
71037ecfc8  stp x8,x9,[x28, #0x40]
71037ecfcc  str w10,[x28, #0x50]
71037ecfd0  stp xzr,x27,[x28]
71037ecfd4  ldr x9,[sp, #0x90]
71037ecfd8  ldr x8,[x9, #0x60]
71037ecfdc  add x8,x8,#0x1
71037ecfe0  ldr s1,[x9, #0x68]
71037ecfe4  ucvtf s0,x8
71037ecfe8  cbz x24,0x71037ecffc
71037ecfec  ucvtf s2,x24
71037ecff0  fmul s2,s1,s2
71037ecff4  fcmp s2,s0
71037ecff8  b.pl 0x71037ed074
71037ecffc  lsl x8,x24,#0x1
71037ed000  cmp x24,#0x3
71037ed004  b.cc 0x71037ed018
71037ed008  sub x9,x24,#0x1
71037ed00c  tst x9,x24
71037ed010  cset w9,ne
71037ed014  b 0x71037ed01c
71037ed018  mov w9,#0x1
71037ed01c  fdiv s0,s0,s1
71037ed020  fcvtpu x10,s0
71037ed024  orr x8,x9,x8
71037ed028  cmp x8,x10
71037ed02c  add x19,x28,#0x10
71037ed030  add x22,x28,#0x28
71037ed034  csel x1,x10,x8,cc
71037ed038  bl 0x71037ee200
71037ed03c  ldr x8,[sp, #0x90]
71037ed040  ldr x24,[x8, #0x50]
71037ed044  ldr x0,[sp, #0x78]
71037ed048  sub x8,x24,#0x1
71037ed04c  tst x8,x24
71037ed050  b.eq 0x71037ed064
71037ed054  cmp x27,x24
71037ed058  b.cs 0x71037ed06c
71037ed05c  mov x22,x27
71037ed060  b 0x71037ed074
71037ed064  and x22,x8,x27
71037ed068  b 0x71037ed074
71037ed06c  udiv x8,x27,x24
71037ed070  msub x22,x8,x24,x27
71037ed074  ldr x8,[x0]
71037ed078  ldr x8,[x8, x22, LSL #0x3]
71037ed07c  cbz x8,0x71037ed08c
71037ed080  ldr x9,[x8]
71037ed084  str x9,[x28]
71037ed088  b 0x71037ed0dc
71037ed08c  ldr x9,[sp, #0x58]
71037ed090  ldr x8,[x9]
71037ed094  str x8,[x28]
71037ed098  str x28,[x9]
71037ed09c  ldr x8,[x0]
71037ed0a0  str x9,[x8, x22, LSL #0x3]
71037ed0a4  ldr x8,[x28]
71037ed0a8  cbz x8,0x71037ed0e0
71037ed0ac  ldr x8,[x8, #0x8]
71037ed0b0  sub x9,x24,#0x1
71037ed0b4  tst x9,x24
71037ed0b8  b.eq 0x71037ed0d0
71037ed0bc  cmp x8,x24
71037ed0c0  b.cc 0x71037ed0d4
71037ed0c4  udiv x9,x8,x24
71037ed0c8  msub x8,x9,x24,x8
71037ed0cc  b 0x71037ed0d4
71037ed0d0  and x8,x8,x9
71037ed0d4  ldr x9,[x0]
71037ed0d8  add x8,x9,x8, LSL #0x3
71037ed0dc  str x28,[x8]
71037ed0e0  ldr x9,[sp, #0x90]
71037ed0e4  ldr x8,[x9, #0x60]
71037ed0e8  add x8,x8,#0x1
71037ed0ec  str x8,[x9, #0x60]
71037ed0f0  ldrb w8,[sp, #0xd8]
71037ed0f4  tbz w8,#0x0,0x71037ed118
71037ed0f8  adrp x8,0x71052a8000
71037ed0fc  ldr x24,[sp, #0xe8]
71037ed100  ldr x8,[x8, #0xa70]
71037ed104  cbz x8,0x71037ed110
71037ed108  mov x0,x24
71037ed10c  bl 0x71039c19b0
71037ed110  mov x0,x24
71037ed114  bl 0x710392eb40
71037ed118  ldrb w8,[sp, #0xc0]
71037ed11c  tbz w8,#0x0,0x71037ed140
71037ed120  adrp x8,0x71052a8000
71037ed124  ldr x24,[sp, #0xd0]
71037ed128  ldr x8,[x8, #0xa70]
71037ed12c  cbz x8,0x71037ed138
71037ed130  mov x0,x24
71037ed134  bl 0x71039c19b0
71037ed138  mov x0,x24
71037ed13c  bl 0x710392eb40
71037ed140  ldurb w8,[x29, #-0x98]
71037ed144  tbz w8,#0x0,0x71037ed168
71037ed148  adrp x8,0x71052a8000
71037ed14c  ldur x24,[x29, #-0x88]
71037ed150  ldr x8,[x8, #0xa70]
71037ed154  cbz x8,0x71037ed160
71037ed158  mov x0,x24
71037ed15c  bl 0x71039c19b0
71037ed160  mov x0,x24
71037ed164  bl 0x710392eb40
71037ed168  ldr x8,[sp, #0x88]
71037ed16c  ldr w8,[x8, #0x4c]
71037ed170  add w20,w20,#0x1
71037ed174  add x23,x23,#0x6c
71037ed178  cmp w20,w8
71037ed17c  b.cc 0x71037eca24
71037ed180  ldr x8,[sp, #0x8]
71037ed184  ldp x29,x30,[sp, #0x1a0]
71037ed188  ldp x20,x19,[sp, #0x190]
71037ed18c  str wzr,[x8]
71037ed190  ldp x22,x21,[sp, #0x180]
71037ed194  ldp x24,x23,[sp, #0x170]
71037ed198  ldp x26,x25,[sp, #0x160]
71037ed19c  ldp x28,x27,[sp, #0x150]
71037ed1a0  add sp,sp,#0x1b0
71037ed1a4  ret
71037ed1a8  add x0,sp,#0xc0
71037ed1ac  bl 0x71039c1a00
71037ed1b0  mov x0,x21
71037ed1b4  bl 0x71039c1a00
71037ed1b8  add x0,sp,#0xc0
71037ed1bc  bl 0x71039c1a00
71037ed1c0  mov x0,x21
71037ed1c4  bl 0x71039c1a00
71037ed1c8  add x0,sp,#0xc0
71037ed1cc  bl 0x71039c1a00
71037ed1d0  mov x0,x22
71037ed1d4  bl 0x71039c1a00
71037ed1d8  add x0,sp,#0xc0
71037ed1dc  bl 0x71039c1a00
71037ed1e0  mov x0,x26
71037ed1e4  bl 0x71039c1a00
71037ed1e8  b 0x71037ed208
71037ed1ec  b 0x71037ed390
71037ed1f0  b 0x71037ed238
71037ed1f4  b 0x71037ed3a0
71037ed1f8  b 0x71037ed3b0
71037ed1fc  b 0x71037ed640
71037ed200  b 0x71037ed3e0
71037ed204  b 0x71037ed650
71037ed208  ldrb w8,[sp, #0xc0]
71037ed20c  mov x21,x0
71037ed210  tbz w8,#0x0,0x71037ed4d4
71037ed214  adrp x8,0x71052a8000
71037ed218  ldr x20,[sp, #0xd0]
71037ed21c  ldr x8,[x8, #0xa70]
71037ed220  cbz x8,0x71037ed4cc
71037ed224  mov x0,x20
71037ed228  bl 0x71039c19b0
71037ed22c  b 0x71037ed4cc
71037ed230  bl 0x71037b2bc0
71037ed234  b 0x71037ed390
71037ed238  ldrb w8,[sp, #0xc0]
71037ed23c  mov x21,x0
71037ed240  tbz w8,#0x0,0x71037ed4fc
71037ed244  adrp x8,0x71052a8000
71037ed248  ldr x20,[sp, #0xd0]
71037ed24c  ldr x8,[x8, #0xa70]
71037ed250  cbz x8,0x71037ed4f4
71037ed254  mov x0,x20
71037ed258  bl 0x71039c19b0
71037ed25c  b 0x71037ed4f4
71037ed260  bl 0x71037b2bc0
71037ed264  b 0x71037ed3a0
71037ed268  bl 0x71037b2bc0
71037ed26c  bl 0x71037b2bc0
71037ed270  bl 0x71037b2bc0
71037ed274  bl 0x71037b2bc0
71037ed278  bl 0x71037b2bc0
71037ed27c  bl 0x71037b2bc0
71037ed280  ldrb w8,[x25]
71037ed284  mov x21,x0
71037ed288  tbz w8,#0x0,0x71037ed2ac
71037ed28c  adrp x8,0x71052a8000
71037ed290  ldr x20,[x23, #0x38]
71037ed294  ldr x8,[x8, #0xa70]
71037ed298  cbz x8,0x71037ed2a4
71037ed29c  mov x0,x20
71037ed2a0  bl 0x71039c19b0
71037ed2a4  mov x0,x20
71037ed2a8  bl 0x710392eb40
71037ed2ac  ldrb w8,[x22]
71037ed2b0  tbz w8,#0x0,0x71037ed2d4
71037ed2b4  adrp x8,0x71052a8000
71037ed2b8  ldr x20,[x23, #0x20]
71037ed2bc  ldr x8,[x8, #0xa70]
71037ed2c0  cbz x8,0x71037ed2cc
71037ed2c4  mov x0,x20
71037ed2c8  bl 0x71039c19b0
71037ed2cc  mov x0,x20
71037ed2d0  bl 0x710392eb40
71037ed2d4  adrp x8,0x71052a8000
71037ed2d8  ldr x8,[x8, #0xa70]
71037ed2dc  cbz x8,0x71037ed2e8
71037ed2e0  mov x0,x23
71037ed2e4  bl 0x71039c19b0
71037ed2e8  mov x0,x23
71037ed2ec  bl 0x710392eb40
71037ed2f0  ldrb w8,[sp, #0xd8]
71037ed2f4  tbnz w8,#0x0,0x71037ed434
71037ed2f8  b 0x71037ed454
71037ed2fc  bl 0x71037b2bc0
71037ed300  bl 0x71037b2bc0
71037ed304  bl 0x71037b2bc0
71037ed308  ldrb w8,[x25]
71037ed30c  mov x21,x0
71037ed310  tbz w8,#0x0,0x71037ed334
71037ed314  adrp x8,0x71052a8000
71037ed318  ldr x20,[x23, #0x40]
71037ed31c  ldr x8,[x8, #0xa70]
71037ed320  cbz x8,0x71037ed32c
71037ed324  mov x0,x20
71037ed328  bl 0x71039c19b0
71037ed32c  mov x0,x20
71037ed330  bl 0x710392eb40
71037ed334  ldrb w8,[x22]
71037ed338  tbz w8,#0x0,0x71037ed35c
71037ed33c  adrp x8,0x71052a8000
71037ed340  ldr x20,[x23, #0x20]
71037ed344  ldr x8,[x8, #0xa70]
71037ed348  cbz x8,0x71037ed354
71037ed34c  mov x0,x20
71037ed350  bl 0x71039c19b0
71037ed354  mov x0,x20
71037ed358  bl 0x710392eb40
71037ed35c  adrp x8,0x71052a8000
71037ed360  ldr x8,[x8, #0xa70]
71037ed364  cbz x8,0x71037ed370
71037ed368  mov x0,x23
71037ed36c  bl 0x71039c19b0
71037ed370  mov x0,x23
71037ed374  bl 0x710392eb40
71037ed378  ldrb w8,[sp, #0xe0]
71037ed37c  tbnz w8,#0x0,0x71037ed48c
71037ed380  b 0x71037ed4ac
71037ed384  bl 0x71037b2bc0
71037ed388  bl 0x71037b2bc0
71037ed38c  bl 0x71037b2bc0
71037ed390  mov x21,x0
71037ed394  ldrb w8,[sp, #0xa0]
71037ed398  tbnz w8,#0x0,0x71037ed4dc
71037ed39c  b 0x71037ed4fc
71037ed3a0  mov x21,x0
71037ed3a4  ldurb w8,[x29, #-0x98]
71037ed3a8  tbnz w8,#0x0,0x71037ed504
71037ed3ac  b 0x71037ed760
71037ed3b0  ldrb w8,[sp, #0xc0]
71037ed3b4  mov x21,x0
71037ed3b8  tbz w8,#0x0,0x71037ed6b4
71037ed3bc  adrp x8,0x71052a8000
71037ed3c0  ldr x20,[sp, #0xd0]
71037ed3c4  ldr x8,[x8, #0xa70]
71037ed3c8  cbz x8,0x71037ed6ac
71037ed3cc  mov x0,x20
71037ed3d0  bl 0x71039c19b0
71037ed3d4  b 0x71037ed6ac
71037ed3d8  bl 0x71037b2bc0
71037ed3dc  b 0x71037ed640
71037ed3e0  ldrb w8,[sp, #0xc0]
71037ed3e4  mov x21,x0
71037ed3e8  tbz w8,#0x0,0x71037ed738
71037ed3ec  adrp x8,0x71052a8000
71037ed3f0  ldr x20,[sp, #0xd0]
71037ed3f4  ldr x8,[x8, #0xa70]
71037ed3f8  cbz x8,0x71037ed730
71037ed3fc  mov x0,x20
71037ed400  bl 0x71039c19b0
71037ed404  b 0x71037ed730
71037ed408  bl 0x71037b2bc0
71037ed40c  b 0x71037ed650
71037ed410  bl 0x71037b2bc0
71037ed414  bl 0x71037b2bc0
71037ed418  bl 0x71037b2bc0
71037ed41c  bl 0x71037b2bc0
71037ed420  bl 0x71037b2bc0
71037ed424  bl 0x71037b2bc0
71037ed428  mov x21,x0
71037ed42c  ldrb w8,[sp, #0xd8]
71037ed430  tbz w8,#0x0,0x71037ed454
71037ed434  adrp x8,0x71052a8000
71037ed438  ldr x20,[sp, #0xe8]
71037ed43c  ldr x8,[x8, #0xa70]
71037ed440  cbz x8,0x71037ed44c
71037ed444  mov x0,x20
71037ed448  bl 0x71039c19b0
71037ed44c  mov x0,x20
71037ed450  bl 0x710392eb40
71037ed454  ldrb w8,[sp, #0xc0]
71037ed458  tbz w8,#0x0,0x71037ed4fc
71037ed45c  adrp x8,0x71052a8000
71037ed460  ldr x20,[sp, #0xd0]
71037ed464  ldr x8,[x8, #0xa70]
71037ed468  cbz x8,0x71037ed4f4
71037ed46c  mov x0,x20
71037ed470  bl 0x71039c19b0
71037ed474  b 0x71037ed4f4
71037ed478  bl 0x71037b2bc0
71037ed47c  bl 0x71037b2bc0
71037ed480  mov x21,x0
71037ed484  ldrb w8,[sp, #0xe0]
71037ed488  tbz w8,#0x0,0x71037ed4ac
71037ed48c  adrp x8,0x71052a8000
71037ed490  ldr x20,[sp, #0xf0]
71037ed494  ldr x8,[x8, #0xa70]
71037ed498  cbz x8,0x71037ed4a4
71037ed49c  mov x0,x20
71037ed4a0  bl 0x71039c19b0
71037ed4a4  mov x0,x20
71037ed4a8  bl 0x710392eb40
71037ed4ac  ldrb w8,[sp, #0xc0]
71037ed4b0  tbz w8,#0x0,0x71037ed4d4
71037ed4b4  adrp x8,0x71052a8000
71037ed4b8  ldr x20,[sp, #0xd0]
71037ed4bc  ldr x8,[x8, #0xa70]
71037ed4c0  cbz x8,0x71037ed4cc
71037ed4c4  mov x0,x20
71037ed4c8  bl 0x71039c19b0
71037ed4cc  mov x0,x20
71037ed4d0  bl 0x710392eb40
71037ed4d4  ldrb w8,[sp, #0xa0]
71037ed4d8  tbz w8,#0x0,0x71037ed4fc
71037ed4dc  adrp x8,0x71052a8000
71037ed4e0  ldr x20,[sp, #0xb0]
71037ed4e4  ldr x8,[x8, #0xa70]
71037ed4e8  cbz x8,0x71037ed4f4
71037ed4ec  mov x0,x20
71037ed4f0  bl 0x71039c19b0
71037ed4f4  mov x0,x20
71037ed4f8  bl 0x710392eb40
71037ed4fc  ldurb w8,[x29, #-0x98]
71037ed500  tbz w8,#0x0,0x71037ed760
71037ed504  adrp x8,0x71052a8000
71037ed508  ldur x20,[x29, #-0x88]
71037ed50c  ldr x8,[x8, #0xa70]
71037ed510  cbz x8,0x71037ed758
71037ed514  mov x0,x20
71037ed518  bl 0x71039c19b0
71037ed51c  b 0x71037ed758
71037ed520  bl 0x71037b2bc0
71037ed524  bl 0x71037b2bc0
71037ed528  bl 0x71037b2bc0
71037ed52c  bl 0x71037b2bc0
71037ed530  ldrb w8,[x22]
71037ed534  mov x21,x0
71037ed538  tbz w8,#0x0,0x71037ed55c
71037ed53c  adrp x8,0x71052a8000
71037ed540  ldr x20,[x28, #0x38]
71037ed544  ldr x8,[x8, #0xa70]
71037ed548  cbz x8,0x71037ed554
71037ed54c  mov x0,x20
71037ed550  bl 0x71039c19b0
71037ed554  mov x0,x20
71037ed558  bl 0x710392eb40
71037ed55c  ldrb w8,[x19]
71037ed560  tbz w8,#0x0,0x71037ed584
71037ed564  adrp x8,0x71052a8000
71037ed568  ldr x20,[x28, #0x20]
71037ed56c  ldr x8,[x8, #0xa70]
71037ed570  cbz x8,0x71037ed57c
71037ed574  mov x0,x20
71037ed578  bl 0x71039c19b0
71037ed57c  mov x0,x20
71037ed580  bl 0x710392eb40
71037ed584  adrp x8,0x71052a8000
71037ed588  ldr x8,[x8, #0xa70]
71037ed58c  cbz x8,0x71037ed598
71037ed590  mov x0,x28
71037ed594  bl 0x71039c19b0
71037ed598  mov x0,x28
71037ed59c  bl 0x710392eb40
71037ed5a0  ldrb w8,[sp, #0xd8]
71037ed5a4  tbnz w8,#0x0,0x71037ed66c
71037ed5a8  b 0x71037ed68c
71037ed5ac  bl 0x71037b2bc0
71037ed5b0  bl 0x71037b2bc0
71037ed5b4  bl 0x71037b2bc0
71037ed5b8  ldrb w8,[x22]
71037ed5bc  mov x21,x0
71037ed5c0  tbz w8,#0x0,0x71037ed5e4
71037ed5c4  adrp x8,0x71052a8000
71037ed5c8  ldr x20,[x28, #0x38]
71037ed5cc  ldr x8,[x8, #0xa70]
71037ed5d0  cbz x8,0x71037ed5dc
71037ed5d4  mov x0,x20
71037ed5d8  bl 0x71039c19b0
71037ed5dc  mov x0,x20
71037ed5e0  bl 0x710392eb40
71037ed5e4  ldrb w8,[x19]
71037ed5e8  tbz w8,#0x0,0x71037ed60c
71037ed5ec  adrp x8,0x71052a8000
71037ed5f0  ldr x20,[x28, #0x20]
71037ed5f4  ldr x8,[x8, #0xa70]
71037ed5f8  cbz x8,0x71037ed604
71037ed5fc  mov x0,x20
71037ed600  bl 0x71039c19b0
71037ed604  mov x0,x20
71037ed608  bl 0x710392eb40
71037ed60c  adrp x8,0x71052a8000
71037ed610  ldr x8,[x8, #0xa70]
71037ed614  cbz x8,0x71037ed620
71037ed618  mov x0,x28
71037ed61c  bl 0x71039c19b0
71037ed620  mov x0,x28
71037ed624  bl 0x710392eb40
71037ed628  ldrb w8,[sp, #0xd8]
71037ed62c  tbnz w8,#0x0,0x71037ed6f0
71037ed630  b 0x71037ed710
71037ed634  bl 0x71037b2bc0
71037ed638  bl 0x71037b2bc0
71037ed63c  bl 0x71037b2bc0
71037ed640  mov x21,x0
71037ed644  ldurb w8,[x29, #-0x98]
71037ed648  tbnz w8,#0x0,0x71037ed6bc
71037ed64c  b 0x71037ed760
71037ed650  mov x21,x0
71037ed654  ldurb w8,[x29, #-0x98]
71037ed658  tbnz w8,#0x0,0x71037ed740
71037ed65c  b 0x71037ed760
71037ed660  mov x21,x0
71037ed664  ldrb w8,[sp, #0xd8]
71037ed668  tbz w8,#0x0,0x71037ed68c
71037ed66c  adrp x8,0x71052a8000
71037ed670  ldr x20,[sp, #0xe8]
71037ed674  ldr x8,[x8, #0xa70]
71037ed678  cbz x8,0x71037ed684
71037ed67c  mov x0,x20
71037ed680  bl 0x71039c19b0
71037ed684  mov x0,x20
71037ed688  bl 0x710392eb40
71037ed68c  ldrb w8,[sp, #0xc0]
71037ed690  tbz w8,#0x0,0x71037ed6b4
71037ed694  adrp x8,0x71052a8000
71037ed698  ldr x20,[sp, #0xd0]
71037ed69c  ldr x8,[x8, #0xa70]
71037ed6a0  cbz x8,0x71037ed6ac
71037ed6a4  mov x0,x20
71037ed6a8  bl 0x71039c19b0
71037ed6ac  mov x0,x20
71037ed6b0  bl 0x710392eb40
71037ed6b4  ldurb w8,[x29, #-0x98]
71037ed6b8  tbz w8,#0x0,0x71037ed760
71037ed6bc  adrp x8,0x71052a8000
71037ed6c0  ldur x20,[x29, #-0x88]
71037ed6c4  ldr x8,[x8, #0xa70]
71037ed6c8  cbz x8,0x71037ed758
71037ed6cc  mov x0,x20
71037ed6d0  bl 0x71039c19b0
71037ed6d4  b 0x71037ed758
71037ed6d8  bl 0x71037b2bc0
71037ed6dc  bl 0x71037b2bc0
71037ed6e0  bl 0x71037b2bc0
71037ed6e4  mov x21,x0
71037ed6e8  ldrb w8,[sp, #0xd8]
71037ed6ec  tbz w8,#0x0,0x71037ed710
71037ed6f0  adrp x8,0x71052a8000
71037ed6f4  ldr x20,[sp, #0xe8]
71037ed6f8  ldr x8,[x8, #0xa70]
71037ed6fc  cbz x8,0x71037ed708
71037ed700  mov x0,x20
71037ed704  bl 0x71039c19b0
71037ed708  mov x0,x20
71037ed70c  bl 0x710392eb40
71037ed710  ldrb w8,[sp, #0xc0]
71037ed714  tbz w8,#0x0,0x71037ed738
71037ed718  adrp x8,0x71052a8000
71037ed71c  ldr x20,[sp, #0xd0]
71037ed720  ldr x8,[x8, #0xa70]
71037ed724  cbz x8,0x71037ed730
71037ed728  mov x0,x20
71037ed72c  bl 0x71039c19b0
71037ed730  mov x0,x20
71037ed734  bl 0x710392eb40
71037ed738  ldurb w8,[x29, #-0x98]
71037ed73c  tbz w8,#0x0,0x71037ed760
71037ed740  adrp x8,0x71052a8000
71037ed744  ldur x20,[x29, #-0x88]
71037ed748  ldr x8,[x8, #0xa70]
71037ed74c  cbz x8,0x71037ed758
71037ed750  mov x0,x20
71037ed754  bl 0x71039c19b0
71037ed758  mov x0,x20
71037ed75c  bl 0x710392eb40
71037ed760  mov x0,x21
71037ed764  bl 0x71039c19f0
71037ed768  bl 0x71037b2bc0
71037ed76c  bl 0x71037b2bc0
71037ed770  bl 0x71037b2bc0
