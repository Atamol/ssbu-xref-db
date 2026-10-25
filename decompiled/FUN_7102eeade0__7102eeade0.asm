// addr:      7102eeade0
// offset:    0x2eeade0
// name:      FUN_7102eeade0
// mangled:   
// size:      2028

7102eeade0  sub sp,sp,#0x60
7102eeade4  str d8,[sp, #0x20]
7102eeade8  str x23,[sp, #0x28]
7102eeadec  stp x22,x21,[sp, #0x30]
7102eeadf0  stp x20,x19,[sp, #0x40]
7102eeadf4  stp x29,x30,[sp, #0x50]
7102eeadf8  add x29,sp,#0x50
7102eeadfc  mov v8.16B,v0.16B
7102eeae00  mov x19,x0
7102eeae04  bl 0x71025dd540
7102eeae08  ldr w8,[x19, #0x8bc]
7102eeae0c  str w8,[x19, #0x8c0]
7102eeae10  adrp x9,0x71052b8000
7102eeae14  ldr x9,[x9, #0xf00]
7102eeae18  ldr x9,[x9]
7102eeae1c  ldr s0,[x19, #0x740]
7102eeae20  ldr s1,[x19, #0x744]
7102eeae24  fsub s0,s0,s1
7102eeae28  ldr s2,[x9, #0xd38]
7102eeae2c  fsub s1,s2,s1
7102eeae30  fmov s2,0x3f800000
7102eeae34  fdiv s0,s1,s0
7102eeae38  fmov s1,w8
7102eeae3c  fcmp s0,s2
7102eeae40  str s0,[x19, #0x8bc]
7102eeae44  b.gt 0x7102eeae54
7102eeae48  fcmp s0,#0.0
7102eeae4c  b.pl 0x7102eeae5c
7102eeae50  fmov s2,wzr
7102eeae54  mov v0.16B,v2.16B
7102eeae58  str s2,[x19, #0x8bc]
7102eeae5c  fcmp s0,s1
7102eeae60  b.eq 0x7102eeae88
7102eeae64  ldr x8,[x19, #0x868]
7102eeae68  cbz x8,0x7102eeae88
7102eeae6c  ldr x0,[x8, #0x90]
7102eeae70  ldr s1,[x8, #0x44]
7102eeae74  str s0,[x8, #0x40]
7102eeae78  ldr x8,[x0]
7102eeae7c  fmul s0,s0,s1
7102eeae80  ldr x8,[x8, #0x368]
7102eeae84  blr x8
7102eeae88  ldr x0,[x19, #0x8b0]
7102eeae8c  mov v0.16B,v8.16B
7102eeae90  bl 0x7102eebff0
7102eeae94  ldrb w8,[x19, #0x8c6]
7102eeae98  cmp w8,#0x1
7102eeae9c  b.eq 0x7102eeafa8
7102eeaea0  cmp w8,#0x2
7102eeaea4  b.ne 0x7102eeb2a4
7102eeaea8  ldr x8,[x19, #0x8e8]
7102eeaeac  add x21,x19,#0x8d8
7102eeaeb0  cbz x8,0x7102eeaf1c
7102eeaeb4  ldrb w9,[x8, #0x35]
7102eeaeb8  cbz w9,0x7102eeaf1c
7102eeaebc  ldr w22,[x8, #0x3c]
7102eeaec0  adrp x8,0x7105334000
7102eeaec4  ldr x8,[x8, #0x920]
7102eeaec8  ldr x23,[x8]
7102eeaecc  mov w8,#0x9498
7102eeaed0  movk w8,#0x1, LSL #16
7102eeaed4  add x20,x23,x8
7102eeaed8  mov x0,x20
7102eeaedc  bl 0x71039c19c0
7102eeaee0  cmp w22,#0x1
7102eeaee4  b.lt 0x7102eeaf14
7102eeaee8  lsr x8,x22,#0x18
7102eeaeec  orr w9,wzr,#0x300
7102eeaef0  madd x0,x8,x9,x23
7102eeaef4  cbz x0,0x7102eeaf14
7102eeaef8  ldr w8,[x0, #0x4]
7102eeaefc  cmp w8,w22
7102eeaf00  b.ne 0x7102eeaf14
7102eeaf04  mov w1,wzr
7102eeaf08  mov w2,wzr
7102eeaf0c  mov w3,wzr
7102eeaf10  bl 0x71035707d0
7102eeaf14  mov x0,x20
7102eeaf18  bl 0x71039c19d0
7102eeaf1c  ldr x8,[x19, #0x320]
7102eeaf20  ldr w2,[x19, #0x8cc]
7102eeaf24  mov x0,sp
7102eeaf28  mov x20,sp
7102eeaf2c  add x1,x8,#0x48
7102eeaf30  mov w3,wzr
7102eeaf34  bl 0x71025efd10
7102eeaf38  cmp x21,x20
7102eeaf3c  b.eq 0x7102eeb018
7102eeaf40  ldr x9,[x19, #0x8e8]
7102eeaf44  ldr x8,[sp, #0x10]
7102eeaf48  cmp x9,x8
7102eeaf4c  b.eq 0x7102eeb01c
7102eeaf50  cbz x8,0x7102eeaff0
7102eeaf54  cbz x9,0x7102eeaf7c
7102eeaf58  ldr x10,[x21]
7102eeaf5c  ldr x11,[x19, #0x8e0]
7102eeaf60  str x10,[x11]
7102eeaf64  str x11,[x10, #0x8]
7102eeaf68  ldr x10,[x9, #0x10]
7102eeaf6c  sub x10,x10,#0x1
7102eeaf70  str x10,[x9, #0x10]
7102eeaf74  stp xzr,xzr,[x21, #0x8]
7102eeaf78  str xzr,[x21]
7102eeaf7c  ldr x10,[x8, #0x20]
7102eeaf80  add x9,x8,#0x18
7102eeaf84  str x9,[x19, #0x8d8]
7102eeaf88  str x10,[x19, #0x8e0]
7102eeaf8c  str x21,[x8, #0x20]
7102eeaf90  str x21,[x10]
7102eeaf94  ldr x9,[x8, #0x10]
7102eeaf98  add x9,x9,#0x1
7102eeaf9c  str x9,[x8, #0x10]
7102eeafa0  str x8,[x19, #0x8e8]
7102eeafa4  b 0x7102eeb018
7102eeafa8  ldrb w8,[x19, #0x8c7]
7102eeafac  cbz w8,0x7102eeafc8
7102eeafb0  ldr w9,[x19, #0x7c8]
7102eeafb4  fmov s0,w9
7102eeafb8  add x8,x19,#0x8c8
7102eeafbc  strb wzr,[x19, #0x8c7]
7102eeafc0  str w9,[x19, #0x8c8]
7102eeafc4  b 0x7102eeafd0
7102eeafc8  ldr s0,[x19, #0x8c8]
7102eeafcc  add x8,x19,#0x8c8
7102eeafd0  fsub s0,s0,s8
7102eeafd4  fcmp s0,#0.0
7102eeafd8  str s0,[x8]
7102eeafdc  b.hi 0x7102eeb2a4
7102eeafe0  mov w8,#0x102
7102eeafe4  strh w8,[x19, #0x8c6]
7102eeafe8  str wzr,[x19, #0x8c8]
7102eeafec  b 0x7102eeb2a4
7102eeaff0  cbz x9,0x7102eeb018
7102eeaff4  ldr x8,[x19, #0x8d8]
7102eeaff8  ldr x10,[x19, #0x8e0]
7102eeaffc  str x8,[x10]
7102eeb000  str x10,[x8, #0x8]
7102eeb004  ldr x8,[x9, #0x10]
7102eeb008  sub x8,x8,#0x1
7102eeb00c  str x8,[x9, #0x10]
7102eeb010  stp xzr,xzr,[x21, #0x8]
7102eeb014  str xzr,[x21]
7102eeb018  ldr x8,[sp, #0x10]
7102eeb01c  cbz x8,0x7102eeb040
7102eeb020  ldp x9,x10,[sp]
7102eeb024  str x9,[x10]
7102eeb028  str x10,[x9, #0x8]
7102eeb02c  ldr x9,[x8, #0x10]
7102eeb030  sub x9,x9,#0x1
7102eeb034  str x9,[x8, #0x10]
7102eeb038  stp xzr,xzr,[sp, #0x8]
7102eeb03c  str xzr,[sp]
7102eeb040  ldr x8,[x19, #0x338]
7102eeb044  ldr x21,[x8]
7102eeb048  ldr x0,[x21, #0x8]
7102eeb04c  cbz x0,0x7102eeb0c8
7102eeb050  mov x1,sp
7102eeb054  mov w2,#0x1
7102eeb058  str xzr,[sp]
7102eeb05c  bl 0x7102405040
7102eeb060  cmn w0,#0x1
7102eeb064  b.eq 0x7102eeb0c8
7102eeb068  mov w20,w0
7102eeb06c  cmp w0,#0x18
7102eeb070  b.hi 0x7102eeb0b0
7102eeb074  ldr x8,[x21, #0x8]
7102eeb078  mov w9,#0x50
7102eeb07c  smaddl x8,w20,w9,x8
7102eeb080  ldr x0,[x8, #0x68]
7102eeb084  ldr x8,[x0]
7102eeb088  cbz x8,0x7102eeb0b0
7102eeb08c  ldr w9,[x0, #0x8]
7102eeb090  cmn w9,#0x1
7102eeb094  b.eq 0x7102eeb0b0
7102eeb098  ldr w8,[x8, #0x20]
7102eeb09c  cmp w9,w8
7102eeb0a0  b.ne 0x7102eeb0b0
7102eeb0a4  adrp x1,0x710455a000
7102eeb0a8  add x1,x1,#0xb50
7102eeb0ac  bl 0x7103736cf0
7102eeb0b0  ldr x0,[x21, #0x8]
7102eeb0b4  ldr x8,[x0]
7102eeb0b8  ldr x8,[x8, #0x58]
7102eeb0bc  mov w1,#0x4
7102eeb0c0  mov w2,w20
7102eeb0c4  blr x8
7102eeb0c8  ldr x8,[x19, #0x900]
7102eeb0cc  add x21,x19,#0x8f0
7102eeb0d0  cbz x8,0x7102eeb13c
7102eeb0d4  ldrb w9,[x8, #0x35]
7102eeb0d8  cbz w9,0x7102eeb13c
7102eeb0dc  ldr w22,[x8, #0x3c]
7102eeb0e0  adrp x8,0x7105334000
7102eeb0e4  ldr x8,[x8, #0x920]
7102eeb0e8  ldr x23,[x8]
7102eeb0ec  mov w8,#0x9498
7102eeb0f0  movk w8,#0x1, LSL #16
7102eeb0f4  add x20,x23,x8
7102eeb0f8  mov x0,x20
7102eeb0fc  bl 0x71039c19c0
7102eeb100  cmp w22,#0x1
7102eeb104  b.lt 0x7102eeb134
7102eeb108  lsr x8,x22,#0x18
7102eeb10c  orr w9,wzr,#0x300
7102eeb110  madd x0,x8,x9,x23
7102eeb114  cbz x0,0x7102eeb134
7102eeb118  ldr w8,[x0, #0x4]
7102eeb11c  cmp w8,w22
7102eeb120  b.ne 0x7102eeb134
7102eeb124  mov w1,wzr
7102eeb128  mov w2,wzr
7102eeb12c  mov w3,wzr
7102eeb130  bl 0x71035707d0
7102eeb134  mov x0,x20
7102eeb138  bl 0x71039c19d0
7102eeb13c  ldr x8,[x19, #0x320]
7102eeb140  ldr w2,[x19, #0x8d0]
7102eeb144  mov x0,sp
7102eeb148  mov x20,sp
7102eeb14c  add x1,x8,#0x48
7102eeb150  mov w3,wzr
7102eeb154  bl 0x71025efd10
7102eeb158  cmp x21,x20
7102eeb15c  b.eq 0x7102eeb1f0
7102eeb160  ldr x9,[x19, #0x900]
7102eeb164  ldr x8,[sp, #0x10]
7102eeb168  cmp x9,x8
7102eeb16c  b.eq 0x7102eeb1f4
7102eeb170  cbz x8,0x7102eeb1c8
7102eeb174  cbz x9,0x7102eeb19c
7102eeb178  ldr x10,[x21]
7102eeb17c  ldr x11,[x19, #0x8f8]
7102eeb180  str x10,[x11]
7102eeb184  str x11,[x10, #0x8]
7102eeb188  ldr x10,[x9, #0x10]
7102eeb18c  sub x10,x10,#0x1
7102eeb190  str x10,[x9, #0x10]
7102eeb194  stp xzr,xzr,[x21, #0x8]
7102eeb198  str xzr,[x21]
7102eeb19c  ldr x10,[x8, #0x20]
7102eeb1a0  add x9,x8,#0x18
7102eeb1a4  str x9,[x19, #0x8f0]
7102eeb1a8  str x10,[x19, #0x8f8]
7102eeb1ac  str x21,[x8, #0x20]
7102eeb1b0  str x21,[x10]
7102eeb1b4  ldr x9,[x8, #0x10]
7102eeb1b8  add x9,x9,#0x1
7102eeb1bc  str x9,[x8, #0x10]
7102eeb1c0  str x8,[x19, #0x900]
7102eeb1c4  b 0x7102eeb1f0
7102eeb1c8  cbz x9,0x7102eeb1f0
7102eeb1cc  ldr x8,[x19, #0x8f0]
7102eeb1d0  ldr x10,[x19, #0x8f8]
7102eeb1d4  str x8,[x10]
7102eeb1d8  str x10,[x8, #0x8]
7102eeb1dc  ldr x8,[x9, #0x10]
7102eeb1e0  sub x8,x8,#0x1
7102eeb1e4  str x8,[x9, #0x10]
7102eeb1e8  stp xzr,xzr,[x21, #0x8]
7102eeb1ec  str xzr,[x21]
7102eeb1f0  ldr x8,[sp, #0x10]
7102eeb1f4  cbz x8,0x7102eeb218
7102eeb1f8  ldp x9,x10,[sp]
7102eeb1fc  str x9,[x10]
7102eeb200  str x10,[x9, #0x8]
7102eeb204  ldr x9,[x8, #0x10]
7102eeb208  sub x9,x9,#0x1
7102eeb20c  str x9,[x8, #0x10]
7102eeb210  stp xzr,xzr,[sp, #0x8]
7102eeb214  str xzr,[sp]
7102eeb218  ldr x8,[x19, #0x338]
7102eeb21c  ldr x21,[x8]
7102eeb220  ldr x0,[x21, #0x8]
7102eeb224  cbz x0,0x7102eeb2a0
7102eeb228  mov x1,sp
7102eeb22c  mov w2,#0x1
7102eeb230  str xzr,[sp]
7102eeb234  bl 0x7102405040
7102eeb238  cmn w0,#0x1
7102eeb23c  b.eq 0x7102eeb2a0
7102eeb240  mov w20,w0
7102eeb244  cmp w0,#0x18
7102eeb248  b.hi 0x7102eeb288
7102eeb24c  ldr x8,[x21, #0x8]
7102eeb250  mov w9,#0x50
7102eeb254  smaddl x8,w20,w9,x8
7102eeb258  ldr x0,[x8, #0x68]
7102eeb25c  ldr x8,[x0]
7102eeb260  cbz x8,0x7102eeb288
7102eeb264  ldr w9,[x0, #0x8]
7102eeb268  cmn w9,#0x1
7102eeb26c  b.eq 0x7102eeb288
7102eeb270  ldr w8,[x8, #0x20]
7102eeb274  cmp w9,w8
7102eeb278  b.ne 0x7102eeb288
7102eeb27c  adrp x1,0x710455a000
7102eeb280  add x1,x1,#0xb60
7102eeb284  bl 0x7103736cf0
7102eeb288  ldr x0,[x21, #0x8]
7102eeb28c  ldr x8,[x0]
7102eeb290  ldr x8,[x8, #0x58]
7102eeb294  mov w1,#0x4
7102eeb298  mov w2,w20
7102eeb29c  blr x8
7102eeb2a0  strb wzr,[x19, #0x8c6]
7102eeb2a4  ldr x8,[x19, #0x8a0]
7102eeb2a8  ldr w8,[x8, #0x1b8]
7102eeb2ac  cmp w8,#0x1
7102eeb2b0  b.hi 0x7102eeb32c
7102eeb2b4  ldrb w8,[x19, #0x8c5]
7102eeb2b8  cmp w8,#0x1
7102eeb2bc  b.ne 0x7102eeb4c4
7102eeb2c0  ldr x0,[x19, #0x318]
7102eeb2c4  adrp x1,0x7104410000
7102eeb2c8  add x1,x1,#0xcd4
7102eeb2cc  strb wzr,[x19, #0x8c5]
7102eeb2d0  bl 0x7102633910
7102eeb2d4  ldr x0,[x19, #0x318]
7102eeb2d8  adrp x1,0x7104359000
7102eeb2dc  add x1,x1,#0x732
7102eeb2e0  mov w2,#0x1
7102eeb2e4  bl 0x7102633b90
7102eeb2e8  ldr x0,[x19, #0x318]
7102eeb2ec  adrp x1,0x7104338000
7102eeb2f0  add x1,x1,#0x63f
7102eeb2f4  mov w2,#0x1
7102eeb2f8  bl 0x7102633a10
7102eeb2fc  ldr x0,[x19, #0x318]
7102eeb300  adrp x1,0x71043ee000
7102eeb304  add x1,x1,#0xdde
7102eeb308  bl 0x7102633800
7102eeb30c  ldr x8,[x19, #0x318]
7102eeb310  ldr x0,[x8, #0x10]
7102eeb314  adrp x1,0x710427e000
7102eeb318  add x1,x1,#0xe95
7102eeb31c  bl 0x71025f7350
7102eeb320  ldr x0,[x19, #0x8a8]
7102eeb324  cbnz x0,0x7102eeb4cc
7102eeb328  b 0x7102eeb4d4
7102eeb32c  ldr x8,[x19, #0x878]
7102eeb330  fmov s0,wzr
7102eeb334  cbz x8,0x7102eeb34c
7102eeb338  ldrb w9,[x8, #0xe0]
7102eeb33c  cbz w9,0x7102eeb34c
7102eeb340  ldr x8,[x8, #0xc8]
7102eeb344  cbz x8,0x7102eeb34c
7102eeb348  ldr s0,[x8, #0x3c]
7102eeb34c  ldr x9,[x19, #0x7d8]
7102eeb350  ldr x8,[x19, #0x7d0]
7102eeb354  subs x9,x9,x8
7102eeb358  b.eq 0x7102eeb394
7102eeb35c  mov x10,xzr
7102eeb360  asr x9,x9,#0x3
7102eeb364  lsl x11,x10,#0x3
7102eeb368  ldr s1,[x8,x11]
7102eeb36c  fcmp s1,s0
7102eeb370  b.hi 0x7102eeb384
7102eeb374  add x11,x8,x10, LSL #0x3
7102eeb378  ldr s1,[x11, #0x4]
7102eeb37c  fcmp s0,s1
7102eeb380  b.ls 0x7102eeb434
7102eeb384  add w10,w10,#0x1
7102eeb388  and x10,x10,#0xff
7102eeb38c  cmp x9,x10
7102eeb390  b.hi 0x7102eeb364
7102eeb394  ldrb w8,[x19, #0x8c5]
7102eeb398  cmp w8,#0x1
7102eeb39c  b.ne 0x7102eeb4c4
7102eeb3a0  ldr x0,[x19, #0x318]
7102eeb3a4  adrp x1,0x7104410000
7102eeb3a8  add x1,x1,#0xcd4
7102eeb3ac  strb wzr,[x19, #0x8c5]
7102eeb3b0  bl 0x7102633910
7102eeb3b4  ldr x0,[x19, #0x318]
7102eeb3b8  adrp x1,0x7104359000
7102eeb3bc  add x1,x1,#0x732
7102eeb3c0  mov w2,#0x1
7102eeb3c4  mov w20,#0x1
7102eeb3c8  bl 0x7102633b90
7102eeb3cc  ldr x0,[x19, #0x318]
7102eeb3d0  adrp x1,0x7104338000
7102eeb3d4  add x1,x1,#0x63f
7102eeb3d8  mov w2,#0x1
7102eeb3dc  bl 0x7102633a10
7102eeb3e0  ldr x0,[x19, #0x318]
7102eeb3e4  adrp x1,0x71043ee000
7102eeb3e8  add x1,x1,#0xdde
7102eeb3ec  bl 0x7102633800
7102eeb3f0  ldr x8,[x19, #0x318]
7102eeb3f4  ldr x0,[x8, #0x10]
7102eeb3f8  adrp x1,0x710427e000
7102eeb3fc  add x1,x1,#0xe95
7102eeb400  bl 0x71025f7350
7102eeb404  ldr x8,[x19, #0x920]
7102eeb408  cbz x8,0x7102eeb4c4
7102eeb40c  ldr w9,[x8, #0x54]
7102eeb410  ldp x10,x11,[x8, #0x10]
7102eeb414  fmov v0.4S,#0x3f800000
7102eeb418  strh w20,[x8, #0x78]
7102eeb41c  stp w9,w9,[x8, #0x70]
7102eeb420  stp x10,x11,[x8, #0x20]
7102eeb424  str q0,[x8, #0x30]
7102eeb428  ldr x0,[x19, #0x8a8]
7102eeb42c  cbnz x0,0x7102eeb4cc
7102eeb430  b 0x7102eeb4d4
7102eeb434  ldrb w8,[x19, #0x8c5]
7102eeb438  cbnz w8,0x7102eeb4c4
7102eeb43c  ldr x0,[x19, #0x318]
7102eeb440  mov w20,#0x1
7102eeb444  adrp x1,0x710427e000
7102eeb448  add x1,x1,#0xe9e
7102eeb44c  strb w20,[x19, #0x8c5]
7102eeb450  bl 0x7102633910
7102eeb454  ldr x0,[x19, #0x318]
7102eeb458  adrp x1,0x71042a1000
7102eeb45c  add x1,x1,#0x4db
7102eeb460  mov w2,#0x1
7102eeb464  bl 0x7102633b90
7102eeb468  ldr x0,[x19, #0x318]
7102eeb46c  adrp x1,0x7104359000
7102eeb470  add x1,x1,#0x741
7102eeb474  mov w2,#0x1
7102eeb478  bl 0x7102633a10
7102eeb47c  ldr x0,[x19, #0x318]
7102eeb480  adrp x1,0x7104410000
7102eeb484  add x1,x1,#0xb6f
7102eeb488  bl 0x7102633800
7102eeb48c  ldr x8,[x19, #0x318]
7102eeb490  ldr x0,[x8, #0x10]
7102eeb494  adrp x1,0x71042d4000
7102eeb498  add x1,x1,#0x7d4
7102eeb49c  bl 0x71025f7350
7102eeb4a0  ldr x8,[x19, #0x920]
7102eeb4a4  cbz x8,0x7102eeb4c4
7102eeb4a8  ldr w9,[x8, #0x50]
7102eeb4ac  ldp x10,x11,[x8, #0x10]
7102eeb4b0  fmov v0.4S,#0x3f800000
7102eeb4b4  strh w20,[x8, #0x78]
7102eeb4b8  stp w9,w9,[x8, #0x70]
7102eeb4bc  stp x10,x11,[x8, #0x30]
7102eeb4c0  str q0,[x8, #0x20]
7102eeb4c4  ldr x0,[x19, #0x8a8]
7102eeb4c8  cbz x0,0x7102eeb4d4
7102eeb4cc  mov v0.16B,v8.16B
7102eeb4d0  bl 0x7102eed1e0
7102eeb4d4  ldr x19,[x19, #0x920]
7102eeb4d8  cbz x19,0x7102eeb5b0
7102eeb4dc  ldrb w8,[x19, #0x78]
7102eeb4e0  cbz w8,0x7102eeb508
7102eeb4e4  ldr s0,[x19, #0x74]
7102eeb4e8  fsub s0,s0,s8
7102eeb4ec  fcmp s0,#0.0
7102eeb4f0  str s0,[x19, #0x74]
7102eeb4f4  b.pl 0x7102eeb518
7102eeb4f8  mov w8,#0x100
7102eeb4fc  str wzr,[x19, #0x74]
7102eeb500  strh w8,[x19, #0x78]
7102eeb504  b 0x7102eeb5b0
7102eeb508  ldrb w8,[x19, #0x79]
7102eeb50c  cbz w8,0x7102eeb5b0
7102eeb510  strb wzr,[x19, #0x79]
7102eeb514  b 0x7102eeb5b0
7102eeb518  ldp x20,x21,[x19, #0x58]
7102eeb51c  cmp x20,x21
7102eeb520  b.eq 0x7102eeb5b0
7102eeb524  fmov s8,wzr
7102eeb528  ldr s0,[x19, #0x70]
7102eeb52c  ldr x8,[x20]
7102eeb530  mov v1.16B,v8.16B
7102eeb534  fcmp s0,#0.0
7102eeb538  b.eq 0x7102eeb548
7102eeb53c  ldr s1,[x19, #0x74]
7102eeb540  fsub s1,s0,s1
7102eeb544  fdiv s1,s1,s0
7102eeb548  ldp q0,q2,[x19, #0x20]
7102eeb54c  fsub v2.4S,v2.4S,v0.4S
7102eeb550  fmla v0.4S,v2.4S,v1.S[0x0]
7102eeb554  str q0,[x19, #0x40]
7102eeb558  cbz x8,0x7102eeb5a4
7102eeb55c  ldrb w9,[x8, #0xe0]
7102eeb560  cbz w9,0x7102eeb5a4
7102eeb564  dup v1.4S,v0.S[0x3]
7102eeb568  fmov s2,0x3f800000
7102eeb56c  mov v3.16B,v2.16B
7102eeb570  fcmeq v1.4S,v1.4S,v2.4S
7102eeb574  mov v2.16B,v0.16B
7102eeb578  mov v2.S[0x3],v3.S[0x0]
7102eeb57c  mvn v1.16B,v1.16B
7102eeb580  dup v1.4S,v1.S[0x0]
7102eeb584  bsl v1.16B,v2.16B,v0.16B
7102eeb588  str q1,[sp]
7102eeb58c  ldr x0,[x8, #0x90]
7102eeb590  ldr x8,[x0]
7102eeb594  ldr x8,[x8, #0x260]
7102eeb598  mov w1,#0x8
7102eeb59c  mov x2,sp
7102eeb5a0  blr x8
7102eeb5a4  add x20,x20,#0x8
7102eeb5a8  cmp x21,x20
7102eeb5ac  b.ne 0x7102eeb528
7102eeb5b0  ldr d8,[sp, #0x20]
7102eeb5b4  ldp x29,x30,[sp, #0x50]
7102eeb5b8  ldp x20,x19,[sp, #0x40]
7102eeb5bc  ldr x23,[sp, #0x28]
7102eeb5c0  ldp x22,x21,[sp, #0x30]
7102eeb5c4  add sp,sp,#0x60
7102eeb5c8  ret
