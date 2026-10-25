// addr:      7101bbacc0
// offset:    0x1bbacc0
// name:      FUN_7101bbacc0
// mangled:   
// size:      4196

7101bbacc0  stp x28,x25,[sp, #-0x50]!
7101bbacc4  stp x24,x23,[sp, #0x10]
7101bbacc8  stp x22,x21,[sp, #0x20]
7101bbaccc  stp x20,x19,[sp, #0x30]
7101bbacd0  stp x29,x30,[sp, #0x40]
7101bbacd4  add x29,sp,#0x40
7101bbacd8  sub sp,sp,#0x1, LSL #12
7101bbacdc  sub sp,sp,#0x50
7101bbace0  ldr w8,[x1]
7101bbace4  cmp w8,#0xc
7101bbace8  b.hi 0x7101bbbc68
7101bbacec  adrp x9,0x71044f8000
7101bbacf0  add x9,x9,#0x9dc
7101bbacf4  ldr x19,[x0, #0x8]
7101bbacf8  ldrsw x8,[x9, x8, LSL #0x2]
7101bbacfc  ldr w20,[x2]
7101bbad00  add x8,x8,x9
7101bbad04  br x8
7101bbad08  cmp w20,#0x3
7101bbad0c  orr w8,wzr,#0x3
7101bbad10  csel w8,w20,w8,lt
7101bbad14  cmp w8,#0x1
7101bbad18  csinc w20,w8,wzr,gt
7101bbad1c  ldr w8,[x19, #0xb40]
7101bbad20  cmp w8,w20
7101bbad24  b.eq 0x7101bbb284
7101bbad28  adrp x8,0x710532f000
7101bbad2c  ldr x8,[x8, #0x8d0]
7101bbad30  ldr x0,[x8, #0x8]
7101bbad34  ldrb w8,[x0, #0x191]
7101bbad38  cbnz w8,0x7101bbb250
7101bbad3c  mov x21,#0x3153
7101bbad40  movk x21,#0x5c74, LSL #16
7101bbad44  movk x21,#0x17, LSL #32
7101bbad48  mov w2,#0x4
7101bbad4c  mov x1,x21
7101bbad50  bl 0x7103313f20
7101bbad54  tbz w0,#0x0,0x7101bbb250
7101bbad58  add x0,sp,#0x8
7101bbad5c  mov x1,x21
7101bbad60  bl 0x71024076d0
7101bbad64  ldr x8,[sp, #0x18]
7101bbad68  adrp x9,0x7104f73000
7101bbad6c  add x9,x9,#0xd50
7101bbad70  str x9,[sp, #0x10]
7101bbad74  cbz x8,0x7101bbb27c
7101bbad78  adrp x8,0x7106dd5000
7101bbad7c  ldrb w8,[x8, #0x3a8]
7101bbad80  cmp w8,#0x1
7101bbad84  b.ne 0x7101bbb27c
7101bbad88  adrp x9,0x7106dd5000
7101bbad8c  ldr w8,[sp, #0x20]
7101bbad90  ldr w9,[x9, #0x3ac]
7101bbad94  cmp w8,w9
7101bbad98  b.ne 0x7101bbb27c
7101bbad9c  ldr x8,[sp, #0x18]
7101bbada0  ldr wzr,[x8, #0x38]!
7101bbada4  ldaxr w9,[x8]
7101bbada8  sub w9,w9,#0x1
7101bbadac  stlxr w10,w9,[x8]
7101bbadb0  cbnz w10,0x7101bbada4
7101bbadb4  b 0x7101bbb27c
7101bbadb8  cmp w20,#0x3e7
7101bbadbc  mov w8,#0x3e7
7101bbadc0  csel w8,w20,w8,lt
7101bbadc4  bic w20,w8,w8, ASR #0x1f
7101bbadc8  ldr w8,[x19, #0xb44]
7101bbadcc  cmp w8,w20
7101bbadd0  b.eq 0x7101bbb2cc
7101bbadd4  adrp x8,0x710532f000
7101bbadd8  ldr x8,[x8, #0x8d0]
7101bbaddc  ldr x0,[x8, #0x8]
7101bbade0  ldrb w8,[x0, #0x191]
7101bbade4  cbnz w8,0x7101bbb298
7101bbade8  mov x21,#0x3153
7101bbadec  movk x21,#0x5c74, LSL #16
7101bbadf0  movk x21,#0x17, LSL #32
7101bbadf4  mov w2,#0x4
7101bbadf8  mov x1,x21
7101bbadfc  bl 0x7103313f20
7101bbae00  tbz w0,#0x0,0x7101bbb298
7101bbae04  add x0,sp,#0x8
7101bbae08  mov x1,x21
7101bbae0c  bl 0x71024076d0
7101bbae10  ldr x8,[sp, #0x18]
7101bbae14  adrp x9,0x7104f73000
7101bbae18  add x9,x9,#0xd50
7101bbae1c  str x9,[sp, #0x10]
7101bbae20  cbz x8,0x7101bbb2c4
7101bbae24  adrp x8,0x7106dd5000
7101bbae28  ldrb w8,[x8, #0x3a8]
7101bbae2c  cmp w8,#0x1
7101bbae30  b.ne 0x7101bbb2c4
7101bbae34  adrp x9,0x7106dd5000
7101bbae38  ldr w8,[sp, #0x20]
7101bbae3c  ldr w9,[x9, #0x3ac]
7101bbae40  cmp w8,w9
7101bbae44  b.ne 0x7101bbb2c4
7101bbae48  ldr x8,[sp, #0x18]
7101bbae4c  ldr wzr,[x8, #0x38]!
7101bbae50  ldaxr w9,[x8]
7101bbae54  sub w9,w9,#0x1
7101bbae58  stlxr w10,w9,[x8]
7101bbae5c  cbnz w10,0x7101bbae50
7101bbae60  b 0x7101bbb2c4
7101bbae64  ldrb w8,[x19, #0xb48]
7101bbae68  cmp w20,#0x0
7101bbae6c  cset w22,ne
7101bbae70  add x21,x19,#0x448
7101bbae74  cmp w22,w8
7101bbae78  b.ne 0x7101bbb0a8
7101bbae7c  adrp x8,0x710425f000
7101bbae80  add x8,x8,#0x1af
7101bbae84  adrp x9,0x71042b4000
7101bbae88  add x9,x9,#0x15e
7101bbae8c  cmp w20,#0x0
7101bbae90  strb w22,[x19, #0xb48]
7101bbae94  csel x1,x9,x8,ne
7101bbae98  mov x0,x21
7101bbae9c  bl 0x710377a120
7101bbaea0  b 0x7101bbb504
7101bbaea4  ldrb w8,[x19, #0xb49]
7101bbaea8  cmp w20,#0x0
7101bbaeac  cset w22,ne
7101bbaeb0  add x21,x19,#0x498
7101bbaeb4  cmp w22,w8
7101bbaeb8  b.ne 0x7101bbb0e4
7101bbaebc  adrp x8,0x710425f000
7101bbaec0  add x8,x8,#0x1af
7101bbaec4  adrp x9,0x71042b4000
7101bbaec8  add x9,x9,#0x15e
7101bbaecc  cmp w20,#0x0
7101bbaed0  strb w22,[x19, #0xb49]
7101bbaed4  csel x1,x9,x8,ne
7101bbaed8  mov x0,x21
7101bbaedc  bl 0x710377a120
7101bbaee0  b 0x7101bbb618
7101bbaee4  ldr w1,[x19, #0xb4c]
7101bbaee8  add x21,x19,#0x4e8
7101bbaeec  cmp w1,w20
7101bbaef0  b.ne 0x7101bbb120
7101bbaef4  mov x0,x19
7101bbaef8  mov w1,w20
7101bbaefc  mov x2,x21
7101bbaf00  str w20,[x19, #0xb4c]
7101bbaf04  bl 0x7101bbbf80
7101bbaf08  b 0x7101bbbc68
7101bbaf0c  ldr w8,[x19, #0xb54]
7101bbaf10  add x21,x19,#0x538
7101bbaf14  cmp w8,w20
7101bbaf18  b.ne 0x7101bbb150
7101bbaf1c  mov x0,x19
7101bbaf20  mov w1,w20
7101bbaf24  mov x2,x21
7101bbaf28  str w20,[x19, #0xb54]
7101bbaf2c  bl 0x7101bbbd30
7101bbaf30  b 0x7101bbbc68
7101bbaf34  ldrb w8,[x19, #0xb6c]
7101bbaf38  cmp w20,#0x0
7101bbaf3c  cset w22,ne
7101bbaf40  add x21,x19,#0x588
7101bbaf44  cmp w8,w22
7101bbaf48  b.ne 0x7101bbb194
7101bbaf4c  strb w22,[x19, #0xb6c]
7101bbaf50  cbz w20,0x7101bbb408
7101bbaf54  adrp x1,0x71043f0000
7101bbaf58  add x1,x1,#0x7b1
7101bbaf5c  b 0x7101bbb410
7101bbaf60  ldrb w8,[x19, #0xb58]
7101bbaf64  cmp w20,#0x0
7101bbaf68  cset w22,ne
7101bbaf6c  add x21,x19,#0x5d8
7101bbaf70  cmp w8,w22
7101bbaf74  b.ne 0x7101bbb1c4
7101bbaf78  strb w22,[x19, #0xb58]
7101bbaf7c  cbz w20,0x7101bbb41c
7101bbaf80  adrp x1,0x7104339000
7101bbaf84  add x1,x1,#0xfd8
7101bbaf88  b 0x7101bbb424
7101bbaf8c  ldr w8,[x19, #0xb5c]
7101bbaf90  add x21,x19,#0x628
7101bbaf94  cmp w8,w20
7101bbaf98  b.ne 0x7101bbb1f4
7101bbaf9c  cmp w20,#0x2
7101bbafa0  str w20,[x19, #0xb5c]
7101bbafa4  b.eq 0x7101bbb9d4
7101bbafa8  cmp w20,#0x3
7101bbafac  b.ne 0x7101bbb9e0
7101bbafb0  adrp x1,0x710426f000
7101bbafb4  add x1,x1,#0xe4f
7101bbafb8  b 0x7101bbb9e8
7101bbafbc  ldrb w8,[x19, #0xb60]
7101bbafc0  cmp w20,#0x0
7101bbafc4  cset w22,ne
7101bbafc8  add x21,x19,#0x678
7101bbafcc  cmp w8,w22
7101bbafd0  b.ne 0x7101bbb214
7101bbafd4  adrp x8,0x710425f000
7101bbafd8  add x8,x8,#0x1af
7101bbafdc  adrp x9,0x71042b4000
7101bbafe0  add x9,x9,#0x15e
7101bbafe4  cmp w20,#0x0
7101bbafe8  strb w22,[x19, #0xb60]
7101bbafec  csel x1,x9,x8,ne
7101bbaff0  mov x0,x21
7101bbaff4  bl 0x710377a120
7101bbaff8  b 0x7101bbb994
7101bbaffc  cmp w20,#0x3e7
7101bbb000  mov w8,#0x3e7
7101bbb004  csel w8,w20,w8,lt
7101bbb008  bic w20,w8,w8, ASR #0x1f
7101bbb00c  ldr w8,[x19, #0xb64]
7101bbb010  cmp w8,w20
7101bbb014  b.eq 0x7101bbb314
7101bbb018  adrp x8,0x710532f000
7101bbb01c  ldr x8,[x8, #0x8d0]
7101bbb020  ldr x0,[x8, #0x8]
7101bbb024  ldrb w8,[x0, #0x191]
7101bbb028  cbnz w8,0x7101bbb2e0
7101bbb02c  mov x21,#0x3153
7101bbb030  movk x21,#0x5c74, LSL #16
7101bbb034  movk x21,#0x17, LSL #32
7101bbb038  mov w2,#0x4
7101bbb03c  mov x1,x21
7101bbb040  bl 0x7103313f20
7101bbb044  tbz w0,#0x0,0x7101bbb2e0
7101bbb048  add x0,sp,#0x8
7101bbb04c  mov x1,x21
7101bbb050  bl 0x71024076d0
7101bbb054  ldr x8,[sp, #0x18]
7101bbb058  adrp x9,0x7104f73000
7101bbb05c  add x9,x9,#0xd50
7101bbb060  str x9,[sp, #0x10]
7101bbb064  cbz x8,0x7101bbb30c
7101bbb068  adrp x8,0x7106dd5000
7101bbb06c  ldrb w8,[x8, #0x3a8]
7101bbb070  cmp w8,#0x1
7101bbb074  b.ne 0x7101bbb30c
7101bbb078  adrp x9,0x7106dd5000
7101bbb07c  ldr w8,[sp, #0x20]
7101bbb080  ldr w9,[x9, #0x3ac]
7101bbb084  cmp w8,w9
7101bbb088  b.ne 0x7101bbb30c
7101bbb08c  ldr x8,[sp, #0x18]
7101bbb090  ldr wzr,[x8, #0x38]!
7101bbb094  ldaxr w9,[x8]
7101bbb098  sub w9,w9,#0x1
7101bbb09c  stlxr w10,w9,[x8]
7101bbb0a0  cbnz w10,0x7101bbb094
7101bbb0a4  b 0x7101bbb30c
7101bbb0a8  adrp x23,0x71042b4000
7101bbb0ac  add x23,x23,#0x15e
7101bbb0b0  adrp x24,0x710425f000
7101bbb0b4  add x24,x24,#0x1af
7101bbb0b8  cmp w8,#0x0
7101bbb0bc  add x0,x19,#0x458
7101bbb0c0  csel x1,x24,x23,eq
7101bbb0c4  bl 0x710377a120
7101bbb0c8  cmp w20,#0x0
7101bbb0cc  csel x1,x23,x24,ne
7101bbb0d0  mov x0,x21
7101bbb0d4  bl 0x710377a120
7101bbb0d8  cbz w20,0x7101bbb430
7101bbb0dc  add x0,x19,#0x468
7101bbb0e0  b 0x7101bbb434
7101bbb0e4  adrp x23,0x71042b4000
7101bbb0e8  add x23,x23,#0x15e
7101bbb0ec  adrp x24,0x710425f000
7101bbb0f0  add x24,x24,#0x1af
7101bbb0f4  cmp w8,#0x0
7101bbb0f8  add x0,x19,#0x4a8
7101bbb0fc  csel x1,x24,x23,eq
7101bbb100  bl 0x710377a120
7101bbb104  cmp w20,#0x0
7101bbb108  csel x1,x23,x24,ne
7101bbb10c  mov x0,x21
7101bbb110  bl 0x710377a120
7101bbb114  cbz w20,0x7101bbb544
7101bbb118  add x0,x19,#0x4b8
7101bbb11c  b 0x7101bbb548
7101bbb120  add x2,x19,#0x4f8
7101bbb124  mov x0,x19
7101bbb128  bl 0x7101bbbf80
7101bbb12c  mov x0,x19
7101bbb130  mov w1,w20
7101bbb134  mov x2,x21
7101bbb138  bl 0x7101bbbf80
7101bbb13c  ldr w8,[x19, #0xb4c]
7101bbb140  cmp w8,w20
7101bbb144  b.ge 0x7101bbb368
7101bbb148  add x0,x19,#0x508
7101bbb14c  b 0x7101bbb36c
7101bbb150  sub w8,w8,#0x2
7101bbb154  add x22,x19,#0x548
7101bbb158  cmp w8,#0x4
7101bbb15c  b.hi 0x7101bbbb30
7101bbb160  adrp x9,0x71044f8000
7101bbb164  add x9,x9,#0xa10
7101bbb168  ldrsw x8,[x9, x8, LSL #0x2]
7101bbb16c  add x8,x8,x9
7101bbb170  br x8
7101bbb174  ldr w8,[x19, #0x30]
7101bbb178  sub w9,w8,#0x3
7101bbb17c  cmp w9,#0x3
7101bbb180  b.hi 0x7101bbbc88
7101bbb184  adrp x10,0x7104468000
7101bbb188  add x10,x10,#0x1a0
7101bbb18c  ldr w23,[x10, w9, SXTW #0x2]
7101bbb190  b 0x7101bbbc8c
7101bbb194  add x0,x19,#0x598
7101bbb198  cbz w8,0x7101bbb658
7101bbb19c  adrp x1,0x71043f0000
7101bbb1a0  add x1,x1,#0x7b1
7101bbb1a4  bl 0x710377a120
7101bbb1a8  cbz w20,0x7101bbb668
7101bbb1ac  adrp x1,0x71043f0000
7101bbb1b0  add x1,x1,#0x7b1
7101bbb1b4  mov x0,x21
7101bbb1b8  bl 0x710377a120
7101bbb1bc  add x0,x19,#0x5a8
7101bbb1c0  b 0x7101bbb67c
7101bbb1c4  add x0,x19,#0x5e8
7101bbb1c8  cbz w8,0x7101bbb78c
7101bbb1cc  adrp x1,0x7104339000
7101bbb1d0  add x1,x1,#0xfd8
7101bbb1d4  bl 0x710377a120
7101bbb1d8  cbz w20,0x7101bbb79c
7101bbb1dc  adrp x1,0x7104339000
7101bbb1e0  add x1,x1,#0xfd8
7101bbb1e4  mov x0,x21
7101bbb1e8  bl 0x710377a120
7101bbb1ec  add x0,x19,#0x5f8
7101bbb1f0  b 0x7101bbb7b0
7101bbb1f4  add x0,x19,#0x638
7101bbb1f8  cmp w8,#0x2
7101bbb1fc  b.eq 0x7101bbb9f4
7101bbb200  cmp w8,#0x3
7101bbb204  b.ne 0x7101bbba00
7101bbb208  adrp x1,0x710426f000
7101bbb20c  add x1,x1,#0xe4f
7101bbb210  b 0x7101bbba08
7101bbb214  adrp x23,0x71042b4000
7101bbb218  add x23,x23,#0x15e
7101bbb21c  adrp x24,0x710425f000
7101bbb220  add x24,x24,#0x1af
7101bbb224  cmp w8,#0x0
7101bbb228  add x0,x19,#0x688
7101bbb22c  csel x1,x24,x23,eq
7101bbb230  bl 0x710377a120
7101bbb234  cmp w20,#0x0
7101bbb238  csel x1,x23,x24,ne
7101bbb23c  mov x0,x21
7101bbb240  bl 0x710377a120
7101bbb244  cbz w20,0x7101bbb8c0
7101bbb248  add x0,x19,#0x698
7101bbb24c  b 0x7101bbb8c4
7101bbb250  mov x8,#0x650000000000
7101bbb254  movk x8,#0x87, LSL #48
7101bbb258  strb wzr,[sp, #0x28]
7101bbb25c  stp xzr,x8,[sp, #0x18]
7101bbb260  mov x8,#-0x1
7101bbb264  stp x8,xzr,[sp, #0x30]
7101bbb268  adrp x8,0x7104f73000
7101bbb26c  add x8,x8,#0xd50
7101bbb270  str wzr,[sp, #0x8]
7101bbb274  str xzr,[sp, #0x40]
7101bbb278  str x8,[sp, #0x10]
7101bbb27c  str xzr,[sp, #0x18]
7101bbb280  strb wzr,[sp, #0x28]
7101bbb284  ldr x8,[x19, #0x3b0]
7101bbb288  str w20,[x19, #0xb40]
7101bbb28c  ldr x19,[x8, #0x10]
7101bbb290  cbnz x19,0x7101bbb324
7101bbb294  b 0x7101bbbc68
7101bbb298  mov x8,#0x650000000000
7101bbb29c  movk x8,#0x87, LSL #48
7101bbb2a0  strb wzr,[sp, #0x28]
7101bbb2a4  stp xzr,x8,[sp, #0x18]
7101bbb2a8  mov x8,#-0x1
7101bbb2ac  stp x8,xzr,[sp, #0x30]
7101bbb2b0  adrp x8,0x7104f73000
7101bbb2b4  add x8,x8,#0xd50
7101bbb2b8  str wzr,[sp, #0x8]
7101bbb2bc  str xzr,[sp, #0x40]
7101bbb2c0  str x8,[sp, #0x10]
7101bbb2c4  str xzr,[sp, #0x18]
7101bbb2c8  strb wzr,[sp, #0x28]
7101bbb2cc  ldr x8,[x19, #0x400]
7101bbb2d0  str w20,[x19, #0xb44]
7101bbb2d4  ldr x19,[x8, #0x10]
7101bbb2d8  cbnz x19,0x7101bbb324
7101bbb2dc  b 0x7101bbbc68
7101bbb2e0  mov x8,#0x650000000000
7101bbb2e4  movk x8,#0x87, LSL #48
7101bbb2e8  strb wzr,[sp, #0x28]
7101bbb2ec  stp xzr,x8,[sp, #0x18]
7101bbb2f0  mov x8,#-0x1
7101bbb2f4  stp x8,xzr,[sp, #0x30]
7101bbb2f8  adrp x8,0x7104f73000
7101bbb2fc  add x8,x8,#0xd50
7101bbb300  str wzr,[sp, #0x8]
7101bbb304  str xzr,[sp, #0x40]
7101bbb308  str x8,[sp, #0x10]
7101bbb30c  str xzr,[sp, #0x18]
7101bbb310  strb wzr,[sp, #0x28]
7101bbb314  ldr x8,[x19, #0x6d0]
7101bbb318  str w20,[x19, #0xb64]
7101bbb31c  ldr x19,[x8, #0x10]
7101bbb320  cbz x19,0x7101bbbc68
7101bbb324  add x0,sp,#0x48
7101bbb328  mov w1,#0x20
7101bbb32c  mov w2,wzr
7101bbb330  mov w3,w20
7101bbb334  mov w4,wzr
7101bbb338  mov w5,wzr
7101bbb33c  stp xzr,xzr,[sp, #0x78]
7101bbb340  stp xzr,xzr,[sp, #0x68]
7101bbb344  stp xzr,xzr,[sp, #0x58]
7101bbb348  stp xzr,xzr,[sp, #0x48]
7101bbb34c  bl 0x71037ad940
7101bbb350  mov w2,w0
7101bbb354  add x1,sp,#0x48
7101bbb358  mov x0,x19
7101bbb35c  mov w3,wzr
7101bbb360  bl 0x71037a2270
7101bbb364  b 0x7101bbbc68
7101bbb368  add x0,x19,#0x518
7101bbb36c  fmov s0,0x3f800000
7101bbb370  bl 0x710377aee0
7101bbb374  str w20,[x19, #0xb4c]
7101bbb378  adrp x8,0x710532f000
7101bbb37c  ldr x8,[x8, #0x8d0]
7101bbb380  ldr x0,[x8, #0x8]
7101bbb384  ldrb w8,[x0, #0x191]
7101bbb388  cbnz w8,0x7101bbbaf8
7101bbb38c  mov x19,#0xc028
7101bbb390  movk x19,#0x1ca6, LSL #16
7101bbb394  movk x19,#0x15, LSL #32
7101bbb398  mov w2,#0x4
7101bbb39c  mov x1,x19
7101bbb3a0  bl 0x7103313f20
7101bbb3a4  tbz w0,#0x0,0x7101bbbaf8
7101bbb3a8  add x0,sp,#0x48
7101bbb3ac  mov x1,x19
7101bbb3b0  bl 0x71024076d0
7101bbb3b4  ldr x8,[sp, #0x58]
7101bbb3b8  adrp x9,0x7104f73000
7101bbb3bc  add x9,x9,#0xd50
7101bbb3c0  str x9,[sp, #0x50]
7101bbb3c4  cbz x8,0x7101bbbb24
7101bbb3c8  adrp x8,0x7106dd5000
7101bbb3cc  ldrb w8,[x8, #0x3a8]
7101bbb3d0  cmp w8,#0x1
7101bbb3d4  b.ne 0x7101bbbb24
7101bbb3d8  adrp x9,0x7106dd5000
7101bbb3dc  ldr w8,[sp, #0x60]
7101bbb3e0  ldr w9,[x9, #0x3ac]
7101bbb3e4  cmp w8,w9
7101bbb3e8  b.ne 0x7101bbbb24
7101bbb3ec  ldr x8,[sp, #0x58]
7101bbb3f0  ldr wzr,[x8, #0x38]!
7101bbb3f4  ldaxr w9,[x8]
7101bbb3f8  sub w9,w9,#0x1
7101bbb3fc  stlxr w10,w9,[x8]
7101bbb400  cbnz w10,0x7101bbb3f4
7101bbb404  b 0x7101bbbb24
7101bbb408  adrp x1,0x71043df000
7101bbb40c  add x1,x1,#0xf3f
7101bbb410  mov x0,x21
7101bbb414  bl 0x710377a120
7101bbb418  b 0x7101bbb74c
7101bbb41c  adrp x1,0x710434a000
7101bbb420  add x1,x1,#0x171
7101bbb424  mov x0,x21
7101bbb428  bl 0x710377a120
7101bbb42c  b 0x7101bbb880
7101bbb430  add x0,x19,#0x478
7101bbb434  fmov s0,0x3f800000
7101bbb438  bl 0x710377aee0
7101bbb43c  strb w22,[x19, #0xb48]
7101bbb440  adrp x8,0x710532f000
7101bbb444  ldr x8,[x8, #0x8d0]
7101bbb448  ldr x0,[x8, #0x8]
7101bbb44c  ldrb w8,[x0, #0x191]
7101bbb450  cbnz w8,0x7101bbb4d0
7101bbb454  mov x20,#0xc028
7101bbb458  movk x20,#0x1ca6, LSL #16
7101bbb45c  movk x20,#0x15, LSL #32
7101bbb460  mov w2,#0x4
7101bbb464  mov x1,x20
7101bbb468  bl 0x7103313f20
7101bbb46c  tbz w0,#0x0,0x7101bbb4d0
7101bbb470  add x0,sp,#0x48
7101bbb474  mov x1,x20
7101bbb478  bl 0x71024076d0
7101bbb47c  ldr x8,[sp, #0x58]
7101bbb480  adrp x9,0x7104f73000
7101bbb484  add x9,x9,#0xd50
7101bbb488  str x9,[sp, #0x50]
7101bbb48c  cbz x8,0x7101bbb4fc
7101bbb490  adrp x8,0x7106dd5000
7101bbb494  ldrb w8,[x8, #0x3a8]
7101bbb498  cmp w8,#0x1
7101bbb49c  b.ne 0x7101bbb4fc
7101bbb4a0  adrp x9,0x7106dd5000
7101bbb4a4  ldr w8,[sp, #0x60]
7101bbb4a8  ldr w9,[x9, #0x3ac]
7101bbb4ac  cmp w8,w9
7101bbb4b0  b.ne 0x7101bbb4fc
7101bbb4b4  ldr x8,[sp, #0x58]
7101bbb4b8  ldr wzr,[x8, #0x38]!
7101bbb4bc  ldaxr w9,[x8]
7101bbb4c0  sub w9,w9,#0x1
7101bbb4c4  stlxr w10,w9,[x8]
7101bbb4c8  cbnz w10,0x7101bbb4bc
7101bbb4cc  b 0x7101bbb4fc
7101bbb4d0  mov x8,#0x650000000000
7101bbb4d4  movk x8,#0x87, LSL #48
7101bbb4d8  strb wzr,[sp, #0x68]
7101bbb4dc  stp xzr,x8,[sp, #0x58]
7101bbb4e0  mov x8,#-0x1
7101bbb4e4  stp x8,xzr,[sp, #0x70]
7101bbb4e8  adrp x8,0x7104f73000
7101bbb4ec  add x8,x8,#0xd50
7101bbb4f0  str wzr,[sp, #0x48]
7101bbb4f4  str xzr,[sp, #0x80]
7101bbb4f8  str x8,[sp, #0x50]
7101bbb4fc  str xzr,[sp, #0x58]
7101bbb500  strb wzr,[sp, #0x68]
7101bbb504  fmov s0,0x3f800000
7101bbb508  add x0,x19,#0x1a8
7101bbb50c  strb wzr,[x19, #0xbc8]
7101bbb510  bl 0x710377aee0
7101bbb514  ldrb w10,[x19, #0xb48]
7101bbb518  adrp x8,0x71042c4000
7101bbb51c  add x8,x8,#0xc0b
7101bbb520  adrp x9,0x710439d000
7101bbb524  add x9,x9,#0x2c9
7101bbb528  add x0,x19,#0x348
7101bbb52c  cmp w10,#0x0
7101bbb530  csel x1,x9,x8,eq
7101bbb534  bl 0x710377a120
7101bbb538  mov w8,#0x2
7101bbb53c  str w8,[x19, #0xbb0]
7101bbb540  b 0x7101bbbc68
7101bbb544  add x0,x19,#0x4c8
7101bbb548  fmov s0,0x3f800000
7101bbb54c  bl 0x710377aee0
7101bbb550  strb w22,[x19, #0xb49]
7101bbb554  adrp x8,0x710532f000
7101bbb558  ldr x8,[x8, #0x8d0]
7101bbb55c  ldr x0,[x8, #0x8]
7101bbb560  ldrb w8,[x0, #0x191]
7101bbb564  cbnz w8,0x7101bbb5e4
7101bbb568  mov x20,#0xc028
7101bbb56c  movk x20,#0x1ca6, LSL #16
7101bbb570  movk x20,#0x15, LSL #32
7101bbb574  mov w2,#0x4
7101bbb578  mov x1,x20
7101bbb57c  bl 0x7103313f20
7101bbb580  tbz w0,#0x0,0x7101bbb5e4
7101bbb584  add x0,sp,#0x48
7101bbb588  mov x1,x20
7101bbb58c  bl 0x71024076d0
7101bbb590  ldr x8,[sp, #0x58]
7101bbb594  adrp x9,0x7104f73000
7101bbb598  add x9,x9,#0xd50
7101bbb59c  str x9,[sp, #0x50]
7101bbb5a0  cbz x8,0x7101bbb610
7101bbb5a4  adrp x8,0x7106dd5000
7101bbb5a8  ldrb w8,[x8, #0x3a8]
7101bbb5ac  cmp w8,#0x1
7101bbb5b0  b.ne 0x7101bbb610
7101bbb5b4  adrp x9,0x7106dd5000
7101bbb5b8  ldr w8,[sp, #0x60]
7101bbb5bc  ldr w9,[x9, #0x3ac]
7101bbb5c0  cmp w8,w9
7101bbb5c4  b.ne 0x7101bbb610
7101bbb5c8  ldr x8,[sp, #0x58]
7101bbb5cc  ldr wzr,[x8, #0x38]!
7101bbb5d0  ldaxr w9,[x8]
7101bbb5d4  sub w9,w9,#0x1
7101bbb5d8  stlxr w10,w9,[x8]
7101bbb5dc  cbnz w10,0x7101bbb5d0
7101bbb5e0  b 0x7101bbb610
7101bbb5e4  mov x8,#0x650000000000
7101bbb5e8  movk x8,#0x87, LSL #48
7101bbb5ec  strb wzr,[sp, #0x68]
7101bbb5f0  stp xzr,x8,[sp, #0x58]
7101bbb5f4  mov x8,#-0x1
7101bbb5f8  stp x8,xzr,[sp, #0x70]
7101bbb5fc  adrp x8,0x7104f73000
7101bbb600  add x8,x8,#0xd50
7101bbb604  str wzr,[sp, #0x48]
7101bbb608  str xzr,[sp, #0x80]
7101bbb60c  str x8,[sp, #0x50]
7101bbb610  str xzr,[sp, #0x58]
7101bbb614  strb wzr,[sp, #0x68]
7101bbb618  fmov s0,0x3f800000
7101bbb61c  add x0,x19,#0x1a8
7101bbb620  strb wzr,[x19, #0xbc8]
7101bbb624  bl 0x710377aee0
7101bbb628  ldrb w10,[x19, #0xb49]
7101bbb62c  adrp x8,0x7104443000
7101bbb630  add x8,x8,#0x495
7101bbb634  adrp x9,0x7104422000
7101bbb638  add x9,x9,#0x1e5
7101bbb63c  add x0,x19,#0x348
7101bbb640  cmp w10,#0x0
7101bbb644  csel x1,x9,x8,eq
7101bbb648  bl 0x710377a120
7101bbb64c  orr w8,wzr,#0x3
7101bbb650  str w8,[x19, #0xbb0]
7101bbb654  b 0x7101bbbc68
7101bbb658  adrp x1,0x71043df000
7101bbb65c  add x1,x1,#0xf3f
7101bbb660  bl 0x710377a120
7101bbb664  cbnz w20,0x7101bbb1ac
7101bbb668  adrp x1,0x71043df000
7101bbb66c  add x1,x1,#0xf3f
7101bbb670  mov x0,x21
7101bbb674  bl 0x710377a120
7101bbb678  add x0,x19,#0x5b8
7101bbb67c  fmov s0,0x3f800000
7101bbb680  bl 0x710377aee0
7101bbb684  strb w22,[x19, #0xb6c]
7101bbb688  adrp x8,0x710532f000
7101bbb68c  ldr x8,[x8, #0x8d0]
7101bbb690  ldr x0,[x8, #0x8]
7101bbb694  ldrb w8,[x0, #0x191]
7101bbb698  cbnz w8,0x7101bbb718
7101bbb69c  mov x20,#0xc028
7101bbb6a0  movk x20,#0x1ca6, LSL #16
7101bbb6a4  movk x20,#0x15, LSL #32
7101bbb6a8  mov w2,#0x4
7101bbb6ac  mov x1,x20
7101bbb6b0  bl 0x7103313f20
7101bbb6b4  tbz w0,#0x0,0x7101bbb718
7101bbb6b8  add x0,sp,#0x48
7101bbb6bc  mov x1,x20
7101bbb6c0  bl 0x71024076d0
7101bbb6c4  ldr x8,[sp, #0x58]
7101bbb6c8  adrp x9,0x7104f73000
7101bbb6cc  add x9,x9,#0xd50
7101bbb6d0  str x9,[sp, #0x50]
7101bbb6d4  cbz x8,0x7101bbb744
7101bbb6d8  adrp x8,0x7106dd5000
7101bbb6dc  ldrb w8,[x8, #0x3a8]
7101bbb6e0  cmp w8,#0x1
7101bbb6e4  b.ne 0x7101bbb744
7101bbb6e8  adrp x9,0x7106dd5000
7101bbb6ec  ldr w8,[sp, #0x60]
7101bbb6f0  ldr w9,[x9, #0x3ac]
7101bbb6f4  cmp w8,w9
7101bbb6f8  b.ne 0x7101bbb744
7101bbb6fc  ldr x8,[sp, #0x58]
7101bbb700  ldr wzr,[x8, #0x38]!
7101bbb704  ldaxr w9,[x8]
7101bbb708  sub w9,w9,#0x1
7101bbb70c  stlxr w10,w9,[x8]
7101bbb710  cbnz w10,0x7101bbb704
7101bbb714  b 0x7101bbb744
7101bbb718  mov x8,#0x650000000000
7101bbb71c  movk x8,#0x87, LSL #48
7101bbb720  strb wzr,[sp, #0x68]
7101bbb724  stp xzr,x8,[sp, #0x58]
7101bbb728  mov x8,#-0x1
7101bbb72c  stp x8,xzr,[sp, #0x70]
7101bbb730  adrp x8,0x7104f73000
7101bbb734  add x8,x8,#0xd50
7101bbb738  str wzr,[sp, #0x48]
7101bbb73c  str xzr,[sp, #0x80]
7101bbb740  str x8,[sp, #0x50]
7101bbb744  str xzr,[sp, #0x58]
7101bbb748  strb wzr,[sp, #0x68]
7101bbb74c  fmov s0,0x3f800000
7101bbb750  add x0,x19,#0x1a8
7101bbb754  strb wzr,[x19, #0xbc8]
7101bbb758  bl 0x710377aee0
7101bbb75c  ldrb w10,[x19, #0xb6c]
7101bbb760  adrp x8,0x71043cf000
7101bbb764  add x8,x8,#0x283
7101bbb768  adrp x9,0x710424f000
7101bbb76c  add x9,x9,#0x2ee
7101bbb770  add x0,x19,#0x348
7101bbb774  cmp w10,#0x0
7101bbb778  csel x1,x9,x8,eq
7101bbb77c  bl 0x710377a120
7101bbb780  mov w8,#0x8
7101bbb784  str w8,[x19, #0xbb4]
7101bbb788  b 0x7101bbbc68
7101bbb78c  adrp x1,0x710434a000
7101bbb790  add x1,x1,#0x171
7101bbb794  bl 0x710377a120
7101bbb798  cbnz w20,0x7101bbb1dc
7101bbb79c  adrp x1,0x710434a000
7101bbb7a0  add x1,x1,#0x171
7101bbb7a4  mov x0,x21
7101bbb7a8  bl 0x710377a120
7101bbb7ac  add x0,x19,#0x608
7101bbb7b0  fmov s0,0x3f800000
7101bbb7b4  bl 0x710377aee0
7101bbb7b8  strb w22,[x19, #0xb58]
7101bbb7bc  adrp x8,0x710532f000
7101bbb7c0  ldr x8,[x8, #0x8d0]
7101bbb7c4  ldr x0,[x8, #0x8]
7101bbb7c8  ldrb w8,[x0, #0x191]
7101bbb7cc  cbnz w8,0x7101bbb84c
7101bbb7d0  mov x20,#0xc028
7101bbb7d4  movk x20,#0x1ca6, LSL #16
7101bbb7d8  movk x20,#0x15, LSL #32
7101bbb7dc  mov w2,#0x4
7101bbb7e0  mov x1,x20
7101bbb7e4  bl 0x7103313f20
7101bbb7e8  tbz w0,#0x0,0x7101bbb84c
7101bbb7ec  add x0,sp,#0x48
7101bbb7f0  mov x1,x20
7101bbb7f4  bl 0x71024076d0
7101bbb7f8  ldr x8,[sp, #0x58]
7101bbb7fc  adrp x9,0x7104f73000
7101bbb800  add x9,x9,#0xd50
7101bbb804  str x9,[sp, #0x50]
7101bbb808  cbz x8,0x7101bbb878
7101bbb80c  adrp x8,0x7106dd5000
7101bbb810  ldrb w8,[x8, #0x3a8]
7101bbb814  cmp w8,#0x1
7101bbb818  b.ne 0x7101bbb878
7101bbb81c  adrp x9,0x7106dd5000
7101bbb820  ldr w8,[sp, #0x60]
7101bbb824  ldr w9,[x9, #0x3ac]
7101bbb828  cmp w8,w9
7101bbb82c  b.ne 0x7101bbb878
7101bbb830  ldr x8,[sp, #0x58]
7101bbb834  ldr wzr,[x8, #0x38]!
7101bbb838  ldaxr w9,[x8]
7101bbb83c  sub w9,w9,#0x1
7101bbb840  stlxr w10,w9,[x8]
7101bbb844  cbnz w10,0x7101bbb838
7101bbb848  b 0x7101bbb878
7101bbb84c  mov x8,#0x650000000000
7101bbb850  movk x8,#0x87, LSL #48
7101bbb854  strb wzr,[sp, #0x68]
7101bbb858  stp xzr,x8,[sp, #0x58]
7101bbb85c  mov x8,#-0x1
7101bbb860  stp x8,xzr,[sp, #0x70]
7101bbb864  adrp x8,0x7104f73000
7101bbb868  add x8,x8,#0xd50
7101bbb86c  str wzr,[sp, #0x48]
7101bbb870  str xzr,[sp, #0x80]
7101bbb874  str x8,[sp, #0x50]
7101bbb878  str xzr,[sp, #0x58]
7101bbb87c  strb wzr,[sp, #0x68]
7101bbb880  fmov s0,0x3f800000
7101bbb884  add x0,x19,#0x1a8
7101bbb888  strb wzr,[x19, #0xbc8]
7101bbb88c  bl 0x710377aee0
7101bbb890  ldrb w10,[x19, #0xb58]
7101bbb894  adrp x8,0x71043df000
7101bbb898  add x8,x8,#0xf22
7101bbb89c  adrp x9,0x71042e6000
7101bbb8a0  add x9,x9,#0xf39
7101bbb8a4  add x0,x19,#0x348
7101bbb8a8  cmp w10,#0x0
7101bbb8ac  csel x1,x9,x8,eq
7101bbb8b0  bl 0x710377a120
7101bbb8b4  mov w8,#0x9
7101bbb8b8  str w8,[x19, #0xbb4]
7101bbb8bc  b 0x7101bbbc68
7101bbb8c0  add x0,x19,#0x6a8
7101bbb8c4  fmov s0,0x3f800000
7101bbb8c8  bl 0x710377aee0
7101bbb8cc  strb w22,[x19, #0xb60]
7101bbb8d0  adrp x8,0x710532f000
7101bbb8d4  ldr x8,[x8, #0x8d0]
7101bbb8d8  ldr x0,[x8, #0x8]
7101bbb8dc  ldrb w8,[x0, #0x191]
7101bbb8e0  cbnz w8,0x7101bbb960
7101bbb8e4  mov x20,#0xc028
7101bbb8e8  movk x20,#0x1ca6, LSL #16
7101bbb8ec  movk x20,#0x15, LSL #32
7101bbb8f0  mov w2,#0x4
7101bbb8f4  mov x1,x20
7101bbb8f8  bl 0x7103313f20
7101bbb8fc  tbz w0,#0x0,0x7101bbb960
7101bbb900  add x0,sp,#0x48
7101bbb904  mov x1,x20
7101bbb908  bl 0x71024076d0
7101bbb90c  ldr x8,[sp, #0x58]
7101bbb910  adrp x9,0x7104f73000
7101bbb914  add x9,x9,#0xd50
7101bbb918  str x9,[sp, #0x50]
7101bbb91c  cbz x8,0x7101bbb98c
7101bbb920  adrp x8,0x7106dd5000
7101bbb924  ldrb w8,[x8, #0x3a8]
7101bbb928  cmp w8,#0x1
7101bbb92c  b.ne 0x7101bbb98c
7101bbb930  adrp x9,0x7106dd5000
7101bbb934  ldr w8,[sp, #0x60]
7101bbb938  ldr w9,[x9, #0x3ac]
7101bbb93c  cmp w8,w9
7101bbb940  b.ne 0x7101bbb98c
7101bbb944  ldr x8,[sp, #0x58]
7101bbb948  ldr wzr,[x8, #0x38]!
7101bbb94c  ldaxr w9,[x8]
7101bbb950  sub w9,w9,#0x1
7101bbb954  stlxr w10,w9,[x8]
7101bbb958  cbnz w10,0x7101bbb94c
7101bbb95c  b 0x7101bbb98c
7101bbb960  mov x8,#0x650000000000
7101bbb964  movk x8,#0x87, LSL #48
7101bbb968  strb wzr,[sp, #0x68]
7101bbb96c  stp xzr,x8,[sp, #0x58]
7101bbb970  mov x8,#-0x1
7101bbb974  stp x8,xzr,[sp, #0x70]
7101bbb978  adrp x8,0x7104f73000
7101bbb97c  add x8,x8,#0xd50
7101bbb980  str wzr,[sp, #0x48]
7101bbb984  str xzr,[sp, #0x80]
7101bbb988  str x8,[sp, #0x50]
7101bbb98c  str xzr,[sp, #0x58]
7101bbb990  strb wzr,[sp, #0x68]
7101bbb994  fmov s0,0x3f800000
7101bbb998  add x0,x19,#0x1a8
7101bbb99c  strb wzr,[x19, #0xbc8]
7101bbb9a0  bl 0x710377aee0
7101bbb9a4  ldrb w10,[x19, #0xb60]
7101bbb9a8  adrp x8,0x71042e6000
7101bbb9ac  add x8,x8,#0xf1b
7101bbb9b0  adrp x9,0x710435b000
7101bbb9b4  add x9,x9,#0x529
7101bbb9b8  add x0,x19,#0x348
7101bbb9bc  cmp w10,#0x0
7101bbb9c0  csel x1,x9,x8,eq
7101bbb9c4  bl 0x710377a120
7101bbb9c8  mov w8,#0xb
7101bbb9cc  str w8,[x19, #0xbb4]
7101bbb9d0  b 0x7101bbbc68
7101bbb9d4  adrp x1,0x7104308000
7101bbb9d8  add x1,x1,#0x301
7101bbb9dc  b 0x7101bbb9e8
7101bbb9e0  adrp x1,0x7104291000
7101bbb9e4  add x1,x1,#0xa3d
7101bbb9e8  mov x0,x21
7101bbb9ec  bl 0x710377a120
7101bbb9f0  b 0x7101bbbc68
7101bbb9f4  adrp x1,0x7104308000
7101bbb9f8  add x1,x1,#0x301
7101bbb9fc  b 0x7101bbba08
7101bbba00  adrp x1,0x7104291000
7101bbba04  add x1,x1,#0xa3d
7101bbba08  bl 0x710377a120
7101bbba0c  cmp w20,#0x2
7101bbba10  b.eq 0x7101bbba28
7101bbba14  cmp w20,#0x3
7101bbba18  b.ne 0x7101bbba34
7101bbba1c  adrp x1,0x710426f000
7101bbba20  add x1,x1,#0xe4f
7101bbba24  b 0x7101bbba3c
7101bbba28  adrp x1,0x7104308000
7101bbba2c  add x1,x1,#0x301
7101bbba30  b 0x7101bbba3c
7101bbba34  adrp x1,0x7104291000
7101bbba38  add x1,x1,#0xa3d
7101bbba3c  mov x0,x21
7101bbba40  bl 0x710377a120
7101bbba44  ldr w8,[x19, #0xb5c]
7101bbba48  cmp w8,w20
7101bbba4c  b.ge 0x7101bbba58
7101bbba50  add x0,x19,#0x648
7101bbba54  b 0x7101bbba5c
7101bbba58  add x0,x19,#0x658
7101bbba5c  fmov s0,0x3f800000
7101bbba60  bl 0x710377aee0
7101bbba64  str w20,[x19, #0xb5c]
7101bbba68  adrp x8,0x710532f000
7101bbba6c  ldr x8,[x8, #0x8d0]
7101bbba70  ldr x0,[x8, #0x8]
7101bbba74  ldrb w8,[x0, #0x191]
7101bbba78  cbnz w8,0x7101bbbaf8
7101bbba7c  mov x19,#0xc028
7101bbba80  movk x19,#0x1ca6, LSL #16
7101bbba84  movk x19,#0x15, LSL #32
7101bbba88  mov w2,#0x4
7101bbba8c  mov x1,x19
7101bbba90  bl 0x7103313f20
7101bbba94  tbz w0,#0x0,0x7101bbbaf8
7101bbba98  add x0,sp,#0x48
7101bbba9c  mov x1,x19
7101bbbaa0  bl 0x71024076d0
7101bbbaa4  ldr x8,[sp, #0x58]
7101bbbaa8  adrp x9,0x7104f73000
7101bbbaac  add x9,x9,#0xd50
7101bbbab0  str x9,[sp, #0x50]
7101bbbab4  cbz x8,0x7101bbbb24
7101bbbab8  adrp x8,0x7106dd5000
7101bbbabc  ldrb w8,[x8, #0x3a8]
7101bbbac0  cmp w8,#0x1
7101bbbac4  b.ne 0x7101bbbb24
7101bbbac8  adrp x9,0x7106dd5000
7101bbbacc  ldr w8,[sp, #0x60]
7101bbbad0  ldr w9,[x9, #0x3ac]
7101bbbad4  cmp w8,w9
7101bbbad8  b.ne 0x7101bbbb24
7101bbbadc  ldr x8,[sp, #0x58]
7101bbbae0  ldr wzr,[x8, #0x38]!
7101bbbae4  ldaxr w9,[x8]
7101bbbae8  sub w9,w9,#0x1
7101bbbaec  stlxr w10,w9,[x8]
7101bbbaf0  cbnz w10,0x7101bbbae4
7101bbbaf4  b 0x7101bbbb24
7101bbbaf8  mov x8,#0x650000000000
7101bbbafc  movk x8,#0x87, LSL #48
7101bbbb00  strb wzr,[sp, #0x68]
7101bbbb04  stp xzr,x8,[sp, #0x58]
7101bbbb08  mov x8,#-0x1
7101bbbb0c  stp x8,xzr,[sp, #0x70]
7101bbbb10  adrp x8,0x7104f73000
7101bbbb14  add x8,x8,#0xd50
7101bbbb18  str wzr,[sp, #0x48]
7101bbbb1c  str xzr,[sp, #0x80]
7101bbbb20  str x8,[sp, #0x50]
7101bbbb24  str xzr,[sp, #0x58]
7101bbbb28  strb wzr,[sp, #0x68]
7101bbbb2c  b 0x7101bbbc68
7101bbbb30  adrp x1,0x7104308000
7101bbbb34  add x1,x1,#0x315
7101bbbb38  b 0x7101bbbb68
7101bbbb3c  adrp x1,0x7104280000
7101bbbb40  add x1,x1,#0x81a
7101bbbb44  b 0x7101bbbb68
7101bbbb48  adrp x1,0x71042f8000
7101bbbb4c  add x1,x1,#0x105
7101bbbb50  b 0x7101bbbb68
7101bbbb54  adrp x1,0x71043cf000
7101bbbb58  add x1,x1,#0x299
7101bbbb5c  b 0x7101bbbb68
7101bbbb60  adrp x1,0x7104308000
7101bbbb64  add x1,x1,#0x329
7101bbbb68  mov x0,x22
7101bbbb6c  bl 0x710377a120
7101bbbb70  mov x0,x19
7101bbbb74  mov w1,w20
7101bbbb78  mov x2,x21
7101bbbb7c  bl 0x7101bbbd30
7101bbbb80  ldr w8,[x19, #0xb54]
7101bbbb84  cmp w8,w20
7101bbbb88  b.ge 0x7101bbbb94
7101bbbb8c  add x0,x19,#0x558
7101bbbb90  b 0x7101bbbb98
7101bbbb94  add x0,x19,#0x568
7101bbbb98  fmov s0,0x3f800000
7101bbbb9c  bl 0x710377aee0
7101bbbba0  str w20,[x19, #0xb54]
7101bbbba4  adrp x8,0x710532f000
7101bbbba8  ldr x8,[x8, #0x8d0]
7101bbbbac  ldr x0,[x8, #0x8]
7101bbbbb0  ldrb w8,[x0, #0x191]
7101bbbbb4  cbnz w8,0x7101bbbc34
7101bbbbb8  mov x19,#0xc028
7101bbbbbc  movk x19,#0x1ca6, LSL #16
7101bbbbc0  movk x19,#0x15, LSL #32
7101bbbbc4  mov w2,#0x4
7101bbbbc8  mov x1,x19
7101bbbbcc  bl 0x7103313f20
7101bbbbd0  tbz w0,#0x0,0x7101bbbc34
7101bbbbd4  add x0,sp,#0x8
7101bbbbd8  mov x1,x19
7101bbbbdc  bl 0x71024076d0
7101bbbbe0  ldr x8,[sp, #0x18]
7101bbbbe4  adrp x9,0x7104f73000
7101bbbbe8  add x9,x9,#0xd50
7101bbbbec  str x9,[sp, #0x10]
7101bbbbf0  cbz x8,0x7101bbbc60
7101bbbbf4  adrp x8,0x7106dd5000
7101bbbbf8  ldrb w8,[x8, #0x3a8]
7101bbbbfc  cmp w8,#0x1
7101bbbc00  b.ne 0x7101bbbc60
7101bbbc04  adrp x9,0x7106dd5000
7101bbbc08  ldr w8,[sp, #0x20]
7101bbbc0c  ldr w9,[x9, #0x3ac]
7101bbbc10  cmp w8,w9
7101bbbc14  b.ne 0x7101bbbc60
7101bbbc18  ldr x8,[sp, #0x18]
7101bbbc1c  ldr wzr,[x8, #0x38]!
7101bbbc20  ldaxr w9,[x8]
7101bbbc24  sub w9,w9,#0x1
7101bbbc28  stlxr w10,w9,[x8]
7101bbbc2c  cbnz w10,0x7101bbbc20
7101bbbc30  b 0x7101bbbc60
7101bbbc34  mov x8,#0x650000000000
7101bbbc38  movk x8,#0x87, LSL #48
7101bbbc3c  strb wzr,[sp, #0x28]
7101bbbc40  stp xzr,x8,[sp, #0x18]
7101bbbc44  mov x8,#-0x1
7101bbbc48  stp x8,xzr,[sp, #0x30]
7101bbbc4c  adrp x8,0x7104f73000
7101bbbc50  add x8,x8,#0xd50
7101bbbc54  str wzr,[sp, #0x8]
7101bbbc58  str xzr,[sp, #0x40]
7101bbbc5c  str x8,[sp, #0x10]
7101bbbc60  str xzr,[sp, #0x18]
7101bbbc64  strb wzr,[sp, #0x28]
7101bbbc68  add sp,sp,#0x1, LSL #12
7101bbbc6c  add sp,sp,#0x50
7101bbbc70  ldp x29,x30,[sp, #0x40]
7101bbbc74  ldp x20,x19,[sp, #0x30]
7101bbbc78  ldp x22,x21,[sp, #0x20]
7101bbbc7c  ldp x24,x23,[sp, #0x10]
7101bbbc80  ldp x28,x25,[sp], #0x50
7101bbbc84  ret
7101bbbc88  orr w23,wzr,#0xc
7101bbbc8c  ldr x9,[x19, #0x550]
7101bbbc90  ldr x24,[x9, #0x10]
7101bbbc94  cbz x24,0x7101bbbd08
7101bbbc98  ldr x1,[x24, #0xe0]
7101bbbc9c  str w8,[x24, #0x25c]
7101bbbca0  cbz x1,0x7101bbbd08
7101bbbca4  ldrb w8,[x1]
7101bbbca8  cmp w8,#0x23
7101bbbcac  b.eq 0x7101bbbd08
7101bbbcb0  cmp w8,#0x40
7101bbbcb4  b.eq 0x7101bbbd08
7101bbbcb8  adrp x8,0x710593b000
7101bbbcbc  ldr x8,[x8, #0xc60]
7101bbbcc0  ldr x0,[x8]
7101bbbcc4  bl 0x71037a4450
7101bbbcc8  ldr w8,[x24, #0x25c]
7101bbbccc  mov x25,x0
7101bbbcd0  add x0,sp,#0x48
7101bbbcd4  mov w2,#0x1000
7101bbbcd8  mov w1,wzr
7101bbbcdc  stur w8,[x29, #-0x48]
7101bbbce0  bl 0x71039c02a0
7101bbbce4  add x0,sp,#0x48
7101bbbce8  sub x2,x29,#0x48
7101bbbcec  mov x1,x25
7101bbbcf0  bl 0x71037ae170
7101bbbcf4  mov w2,w0
7101bbbcf8  add x1,sp,#0x48
7101bbbcfc  mov x0,x24
7101bbbd00  mov w3,wzr
7101bbbd04  bl 0x71037a2270
7101bbbd08  adrp x1,0x71042b4000
7101bbbd0c  add x1,x1,#0x16e
7101bbbd10  mov w2,#0x1
7101bbbd14  mov x0,x22
7101bbbd18  mov w3,w23
7101bbbd1c  bl 0x710377a280
7101bbbd20  b 0x7101bbbb70
