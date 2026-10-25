// addr:      7101d8ede0
// offset:    0x1d8ede0
// name:      FUN_7101d8ede0
// mangled:   
// size:      2220

7101d8ede0  sub sp,sp,#0x130
7101d8ede4  stp x28,x27,[sp, #0xd0]
7101d8ede8  stp x26,x25,[sp, #0xe0]
7101d8edec  stp x24,x23,[sp, #0xf0]
7101d8edf0  stp x22,x21,[sp, #0x100]
7101d8edf4  stp x20,x19,[sp, #0x110]
7101d8edf8  stp x29,x30,[sp, #0x120]
7101d8edfc  add x29,sp,#0x120
7101d8ee00  mov x19,x0
7101d8ee04  ldrh w0,[x0, #0x15c]
7101d8ee08  ldrb w8,[x19, #0x338]
7101d8ee0c  mov w22,w2
7101d8ee10  mov x23,x1
7101d8ee14  cbz w8,0x7101d8ee40
7101d8ee18  adrp x8,0x710532f000
7101d8ee1c  ldr x8,[x8, #0x730]
7101d8ee20  ldr x8,[x8, #0x8]
7101d8ee24  ldr x8,[x8, #0x1d8]
7101d8ee28  orr w9,wzr,#0xffff
7101d8ee2c  cmp w0,w9
7101d8ee30  b.eq 0x7101d8ee58
7101d8ee34  add x9,x8,w0, SXTH  #0x1
7101d8ee38  ldrh w9,[x9, #0x60]
7101d8ee3c  b 0x7101d8ee5c
7101d8ee40  mov w20,wzr
7101d8ee44  bl 0x71025c9890
7101d8ee48  tbnz w20,#0x0,0x7101d8eea0
7101d8ee4c  tbnz w0,#0x0,0x7101d8eea0
7101d8ee50  add x21,x19,#0x120
7101d8ee54  b 0x7101d8ef2c
7101d8ee58  mov w9,#0xffffffff
7101d8ee5c  ldp x10,x8,[x8, #0x20]
7101d8ee60  sub x8,x8,x10
7101d8ee64  orr x11,xzr,#-0x3333333333333334
7101d8ee68  movk x11,#0xcccd
7101d8ee6c  asr x8,x8,#0x6
7101d8ee70  mul x8,x8,x11
7101d8ee74  mov w11,#0x140
7101d8ee78  madd x10,x9,x11,x10
7101d8ee7c  adrp x12,0x7105182000
7101d8ee80  add x12,x12,#0xb08
7101d8ee84  cmp x8,x9
7101d8ee88  csel x8,x10,x12,hi
7101d8ee8c  ldrb w8,[x8, #0x5e]
7101d8ee90  cmp w8,#0x3
7101d8ee94  cset w20,eq
7101d8ee98  bl 0x71025c9890
7101d8ee9c  tbz w20,#0x0,0x7101d8ee4c
7101d8eea0  add x21,x19,#0x120
7101d8eea4  adrp x1,0x710439d000
7101d8eea8  add x1,x1,#0x945
7101d8eeac  add x8,sp,#0x70
7101d8eeb0  mov x0,x21
7101d8eeb4  add x20,x19,#0x198
7101d8eeb8  add x24,x19,#0x10
7101d8eebc  bl 0x7103776640
7101d8eec0  ldr w8,[x19, #0x158]
7101d8eec4  ldrh w3,[x19, #0x15c]
7101d8eec8  add x2,sp,#0x70
7101d8eecc  mov w6,#0x1
7101d8eed0  mov w7,#0x1
7101d8eed4  mov x0,x20
7101d8eed8  mov x1,x24
7101d8eedc  mov w4,wzr
7101d8eee0  cmp w8,#0x1
7101d8eee4  ldr w8,[x19, #0x160]
7101d8eee8  str w8,[sp, #0x8]
7101d8eeec  cset w5,eq
7101d8eef0  strb wzr,[sp]
7101d8eef4  bl 0x7101d8e0c0
7101d8eef8  ldr x20,[sp, #0x78]
7101d8eefc  adrp x8,0x710523d000
7101d8ef00  add x8,x8,#0x988
7101d8ef04  stp x8,xzr,[sp, #0x70]
7101d8ef08  cbz x20,0x7101d8ef2c
7101d8ef0c  ldr x0,[x20, #0x18]
7101d8ef10  adrp x8,0x710523d000
7101d8ef14  add x8,x8,#0x9a8
7101d8ef18  stp x8,xzr,[x20, #0x10]
7101d8ef1c  cbz x0,0x7101d8ef24
7101d8ef20  bl 0x710392eb40
7101d8ef24  mov x0,x20
7101d8ef28  bl 0x710392eb40
7101d8ef2c  adrp x1,0x7104433000
7101d8ef30  add x1,x1,#0x4f8
7101d8ef34  add x8,sp,#0x60
7101d8ef38  mov x0,x21
7101d8ef3c  bl 0x7103776910
7101d8ef40  ldrb w8,[x19, #0x338]
7101d8ef44  and x24,x23,#0xffff
7101d8ef48  cbz w8,0x7101d8ef78
7101d8ef4c  adrp x8,0x710532f000
7101d8ef50  ldr x8,[x8, #0x730]
7101d8ef54  ldr x8,[x8, #0x8]
7101d8ef58  ldr x8,[x8, #0x1d8]
7101d8ef5c  mvn w9,w23
7101d8ef60  tst w9,#0xffff
7101d8ef64  b.eq 0x7101d8ef80
7101d8ef68  lsl x9,x23,#0x30
7101d8ef6c  add x9,x8,x9, ASR #0x2f
7101d8ef70  ldrh w9,[x9, #0x60]
7101d8ef74  b 0x7101d8ef84
7101d8ef78  mov w20,wzr
7101d8ef7c  b 0x7101d8efc0
7101d8ef80  mov w9,#0xffffffff
7101d8ef84  ldp x10,x8,[x8, #0x20]
7101d8ef88  sub x8,x8,x10
7101d8ef8c  orr x11,xzr,#-0x3333333333333334
7101d8ef90  movk x11,#0xcccd
7101d8ef94  asr x8,x8,#0x6
7101d8ef98  mul x8,x8,x11
7101d8ef9c  mov w11,#0x140
7101d8efa0  madd x10,x9,x11,x10
7101d8efa4  adrp x12,0x7105182000
7101d8efa8  add x12,x12,#0xb08
7101d8efac  cmp x8,x9
7101d8efb0  csel x8,x10,x12,hi
7101d8efb4  ldrb w8,[x8, #0x5e]
7101d8efb8  cmp w8,#0x3
7101d8efbc  cset w20,eq
7101d8efc0  mov x0,x24
7101d8efc4  bl 0x71025c9890
7101d8efc8  orr w8,w20,w0
7101d8efcc  adrp x28,0x710523d000
7101d8efd0  add x28,x28,#0x9a8
7101d8efd4  mov w9,#0x2
7101d8efd8  tst w8,#0x1
7101d8efdc  str x28,[sp, #0x50]
7101d8efe0  mov w0,#0x10
7101d8efe4  mov w1,#0x20
7101d8efe8  csel w26,w9,wzr,ne
7101d8efec  add x27,x19,#0x1b8
7101d8eff0  add x25,x19,#0x10
7101d8eff4  bl 0x710392e290
7101d8eff8  cbnz x0,0x7101d8f040
7101d8effc  adrp x8,0x7105332000
7101d8f000  ldr x0,[x8, #0xf00]
7101d8f004  cbz x0,0x7101d8f03c
7101d8f008  mov w8,#0x20
7101d8f00c  str wzr,[sp, #0x20]
7101d8f010  add x1,sp,#0x20
7101d8f014  str x8,[sp, #0x80]
7101d8f018  ldr x8,[x0]
7101d8f01c  ldr x8,[x8, #0x30]
7101d8f020  add x2,sp,#0x80
7101d8f024  blr x8
7101d8f028  tbz w0,#0x0,0x7101d8f03c
7101d8f02c  mov w0,#0x10
7101d8f030  mov w1,#0x20
7101d8f034  bl 0x710392e290
7101d8f038  cbnz x0,0x7101d8f040
7101d8f03c  mov x0,xzr
7101d8f040  stp xzr,xzr,[x0, #0x10]
7101d8f044  add x2,sp,#0x50
7101d8f048  stp xzr,xzr,[x0]
7101d8f04c  ldr x8,[sp, #0x68]
7101d8f050  mov x1,x25
7101d8f054  mov x3,x24
7101d8f058  mov w4,w26
7101d8f05c  str x0,[sp, #0x58]
7101d8f060  ldr x9,[x8]
7101d8f064  str x9,[x0]
7101d8f068  ldr x8,[x8, #0x8]
7101d8f06c  str x8,[x0, #0x8]
7101d8f070  ldr x20,[sp, #0x68]
7101d8f074  ldr x8,[x20, #0x10]
7101d8f078  mov x9,x0
7101d8f07c  mov x0,x27
7101d8f080  str x8,[x9, #0x10]
7101d8f084  ldr x8,[x20, #0x18]
7101d8f088  str x8,[x9, #0x18]
7101d8f08c  bl 0x7101d8e310
7101d8f090  ldr x0,[sp, #0x58]
7101d8f094  stp x28,xzr,[sp, #0x50]
7101d8f098  cbz x0,0x7101d8f0a0
7101d8f09c  bl 0x710392eb40
7101d8f0a0  adrp x8,0x710532f000
7101d8f0a4  ldr x8,[x8, #0x730]
7101d8f0a8  ldr x8,[x8, #0x8]
7101d8f0ac  ldr x8,[x8, #0x1d8]
7101d8f0b0  mvn w9,w23
7101d8f0b4  tst w9,#0xffff
7101d8f0b8  b.eq 0x7101d8f0cc
7101d8f0bc  lsl x9,x23,#0x30
7101d8f0c0  add x9,x8,x9, ASR #0x2f
7101d8f0c4  ldrh w12,[x9, #0x60]
7101d8f0c8  b 0x7101d8f0d0
7101d8f0cc  mov w12,#0xffffffff
7101d8f0d0  ldp x9,x10,[x8, #0x20]
7101d8f0d4  sub x10,x10,x9
7101d8f0d8  orr x11,xzr,#-0x3333333333333334
7101d8f0dc  movk x11,#0xcccd
7101d8f0e0  asr x10,x10,#0x6
7101d8f0e4  mul x10,x10,x11
7101d8f0e8  mov w11,#0x140
7101d8f0ec  madd x13,x12,x11,x9
7101d8f0f0  adrp x11,0x7105182000
7101d8f0f4  add x11,x11,#0xb08
7101d8f0f8  cmp x10,x12
7101d8f0fc  csel x12,x13,x11,hi
7101d8f100  ldrb w12,[x12, #0x5e]
7101d8f104  cmp w12,#0x3
7101d8f108  b.ne 0x7101d8f1f0
7101d8f10c  ldrb w12,[x19, #0x338]
7101d8f110  cbz w12,0x7101d8f130
7101d8f114  mvn w12,w23
7101d8f118  tst w12,#0xffff
7101d8f11c  b.eq 0x7101d8f138
7101d8f120  lsl x12,x23,#0x30
7101d8f124  add x8,x8,x12, ASR #0x2f
7101d8f128  ldrh w8,[x8, #0x60]
7101d8f12c  b 0x7101d8f13c
7101d8f130  mov w26,wzr
7101d8f134  b 0x7101d8f158
7101d8f138  mov w8,#0xffffffff
7101d8f13c  mov w12,#0x140
7101d8f140  madd x9,x8,x12,x9
7101d8f144  cmp x10,x8
7101d8f148  csel x8,x9,x11,hi
7101d8f14c  ldrb w8,[x8, #0x5e]
7101d8f150  cmp w8,#0x3
7101d8f154  cset w26,eq
7101d8f158  mov x0,x24
7101d8f15c  bl 0x71025c9890
7101d8f160  orr w8,w26,w0
7101d8f164  mov x0,x21
7101d8f168  tst w8,#0x1
7101d8f16c  mov w8,#0x2
7101d8f170  csel w26,wzr,w8,ne
7101d8f174  adrp x1,0x7104280000
7101d8f178  add x1,x1,#0xe29
7101d8f17c  add x8,sp,#0x40
7101d8f180  add x27,x19,#0x1d0
7101d8f184  bl 0x7103776910
7101d8f188  add x2,sp,#0x40
7101d8f18c  mov x0,x27
7101d8f190  mov x1,x25
7101d8f194  mov x3,x24
7101d8f198  mov w4,w26
7101d8f19c  bl 0x7101d8e310
7101d8f1a0  ldr x0,[sp, #0x48]
7101d8f1a4  stp x28,xzr,[sp, #0x40]
7101d8f1a8  cbz x0,0x7101d8f1b0
7101d8f1ac  bl 0x710392eb40
7101d8f1b0  adrp x1,0x710434a000
7101d8f1b4  add x1,x1,#0x71f
7101d8f1b8  add x8,sp,#0x30
7101d8f1bc  mov x0,x21
7101d8f1c0  add x27,x19,#0x1e8
7101d8f1c4  bl 0x7103776910
7101d8f1c8  add x2,sp,#0x30
7101d8f1cc  mov x0,x27
7101d8f1d0  mov x1,x25
7101d8f1d4  mov x3,x24
7101d8f1d8  mov w4,w26
7101d8f1dc  bl 0x7101d8e310
7101d8f1e0  ldr x0,[sp, #0x38]
7101d8f1e4  stp x28,xzr,[sp, #0x30]
7101d8f1e8  cbz x0,0x7101d8f1f0
7101d8f1ec  bl 0x710392eb40
7101d8f1f0  mov w0,#0x10
7101d8f1f4  orr w1,wzr,#0x18
7101d8f1f8  strh w23,[x19, #0x15c]
7101d8f1fc  bl 0x710392e290
7101d8f200  mov x23,x0
7101d8f204  cbnz x0,0x7101d8f250
7101d8f208  adrp x8,0x7105332000
7101d8f20c  ldr x0,[x8, #0xf00]
7101d8f210  cbz x0,0x7101d8f24c
7101d8f214  orr w8,wzr,#0x18
7101d8f218  str wzr,[sp, #0x20]
7101d8f21c  add x1,sp,#0x20
7101d8f220  str x8,[sp, #0x80]
7101d8f224  ldr x8,[x0]
7101d8f228  ldr x8,[x8, #0x30]
7101d8f22c  add x2,sp,#0x80
7101d8f230  blr x8
7101d8f234  tbz w0,#0x0,0x7101d8f24c
7101d8f238  mov w0,#0x10
7101d8f23c  orr w1,wzr,#0x18
7101d8f240  bl 0x710392e290
7101d8f244  mov x23,x0
7101d8f248  cbnz x0,0x7101d8f250
7101d8f24c  mov x23,xzr
7101d8f250  mov w8,#0x1
7101d8f254  cmp w22,#0x2
7101d8f258  strb w8,[x23, #0x10]
7101d8f25c  stp xzr,xzr,[x23]
7101d8f260  b.eq 0x7101d8f278
7101d8f264  cmp w22,#0x1
7101d8f268  b.ne 0x7101d8f4d4
7101d8f26c  adrp x1,0x710438c000
7101d8f270  add x1,x1,#0xebb
7101d8f274  b 0x7101d8f280
7101d8f278  adrp x1,0x71042f8000
7101d8f27c  add x1,x1,#0x6f6
7101d8f280  add x8,sp,#0x20
7101d8f284  mov x0,x21
7101d8f288  bl 0x71037780e0
7101d8f28c  cbz x23,0x7101d8f298
7101d8f290  mov x0,x23
7101d8f294  bl 0x710392eb40
7101d8f298  fmov s0,0x3f800000
7101d8f29c  add x0,sp,#0x20
7101d8f2a0  bl 0x710377aee0
7101d8f2a4  ldr x9,[x19, #0x140]
7101d8f2a8  str w22,[x19, #0x33c]
7101d8f2ac  ldr x8,[x9, #0x1b8]
7101d8f2b0  cbz x8,0x7101d8f394
7101d8f2b4  add x9,x9,#0x1b8
7101d8f2b8  mov x10,x9
7101d8f2bc  mov x11,x8
7101d8f2c0  ldr w12,[x11, #0x20]
7101d8f2c4  cmp w12,#0x0
7101d8f2c8  cset w12,lt
7101d8f2cc  csel x10,x10,x11,lt
7101d8f2d0  ldr x11,[x11, w12, UXTW #0x3]
7101d8f2d4  cbnz x11,0x7101d8f2c0
7101d8f2d8  cmp x10,x9
7101d8f2dc  b.eq 0x7101d8f32c
7101d8f2e0  ldr w11,[x10, #0x20]
7101d8f2e4  cmp w11,#0x0
7101d8f2e8  b.gt 0x7101d8f32c
7101d8f2ec  ldr x22,[x10, #0x28]
7101d8f2f0  cbz x22,0x7101d8f32c
7101d8f2f4  ldr x8,[x22]
7101d8f2f8  ldr x8,[x8, #0x1f8]
7101d8f2fc  mov x0,x22
7101d8f300  mov w1,wzr
7101d8f304  blr x8
7101d8f308  ldr x8,[x22]
7101d8f30c  ldr x8,[x8, #0x388]
7101d8f310  mov w1,#0x1
7101d8f314  mov x0,x22
7101d8f318  mov w2,wzr
7101d8f31c  blr x8
7101d8f320  ldr x8,[x19, #0x140]
7101d8f324  add x9,x8,#0x1b8
7101d8f328  ldr x8,[x8, #0x1b8]
7101d8f32c  cbz x8,0x7101d8f394
7101d8f330  mov x10,x9
7101d8f334  ldr w11,[x8, #0x20]
7101d8f338  cmp w11,#0x1
7101d8f33c  cset w11,lt
7101d8f340  csel x10,x10,x8,lt
7101d8f344  ldr x8,[x8, w11, UXTW #0x3]
7101d8f348  cbnz x8,0x7101d8f334
7101d8f34c  cmp x10,x9
7101d8f350  b.eq 0x7101d8f394
7101d8f354  ldr w8,[x10, #0x20]
7101d8f358  cmp w8,#0x1
7101d8f35c  b.gt 0x7101d8f394
7101d8f360  ldr x22,[x10, #0x28]
7101d8f364  cbz x22,0x7101d8f394
7101d8f368  ldr x8,[x22]
7101d8f36c  ldr x8,[x8, #0x1f8]
7101d8f370  mov x0,x22
7101d8f374  mov w1,wzr
7101d8f378  blr x8
7101d8f37c  ldr x8,[x22]
7101d8f380  ldr x8,[x8, #0x388]
7101d8f384  mov w1,#0x1
7101d8f388  mov x0,x22
7101d8f38c  mov w2,wzr
7101d8f390  blr x8
7101d8f394  adrp x1,0x710439d000
7101d8f398  add x1,x1,#0x945
7101d8f39c  add x8,sp,#0x10
7101d8f3a0  mov x0,x21
7101d8f3a4  bl 0x7103776640
7101d8f3a8  add x0,sp,#0x10
7101d8f3ac  bl 0x71025ae390
7101d8f3b0  ldr x0,[x19, #0x128]
7101d8f3b4  fmov s0,0x3f800000
7101d8f3b8  adrp x1,0x7104270000
7101d8f3bc  add x1,x1,#0x277
7101d8f3c0  bl 0x7103778300
7101d8f3c4  mov x0,x19
7101d8f3c8  bl 0x7101d8e430
7101d8f3cc  ldr x8,[x19, #0x148]
7101d8f3d0  ldr x9,[x8, #0x1b8]
7101d8f3d4  cbz x9,0x7101d8f440
7101d8f3d8  add x10,x8,#0x1b8
7101d8f3dc  mov x8,x10
7101d8f3e0  ldr w11,[x9, #0x20]
7101d8f3e4  cmp w11,#0x0
7101d8f3e8  cset w11,lt
7101d8f3ec  csel x8,x8,x9,lt
7101d8f3f0  ldr x9,[x9, w11, UXTW #0x3]
7101d8f3f4  cbnz x9,0x7101d8f3e0
7101d8f3f8  cmp x8,x10
7101d8f3fc  b.eq 0x7101d8f440
7101d8f400  ldr w9,[x8, #0x20]
7101d8f404  cmp w9,#0x0
7101d8f408  b.gt 0x7101d8f440
7101d8f40c  ldr x21,[x8, #0x28]
7101d8f410  cbz x21,0x7101d8f440
7101d8f414  ldr x8,[x21]
7101d8f418  ldr x8,[x8, #0x208]
7101d8f41c  mov x0,x21
7101d8f420  mov w1,wzr
7101d8f424  blr x8
7101d8f428  ldr x8,[x21]
7101d8f42c  ldr x8,[x8, #0x388]
7101d8f430  mov w1,#0x1
7101d8f434  mov x0,x21
7101d8f438  mov w2,wzr
7101d8f43c  blr x8
7101d8f440  ldrh w1,[x19, #0x15c]
7101d8f444  mov x0,x19
7101d8f448  mov w22,#0x9dc5
7101d8f44c  movk w22,#0x811c, LSL #16
7101d8f450  bl 0x7101d8eab0
7101d8f454  strb wzr,[sp, #0x88]
7101d8f458  str x22,[sp, #0x80]
7101d8f45c  ldr w9,[x19, #0x358]
7101d8f460  add x8,sp,#0x80
7101d8f464  mov w21,w0
7101d8f468  add x1,x8,#0x8
7101d8f46c  cmp w9,#0x2
7101d8f470  b.eq 0x7101d8f54c
7101d8f474  cmp w9,#0x1
7101d8f478  b.eq 0x7101d8f5ac
7101d8f47c  cbnz w9,0x7101d8f608
7101d8f480  mov x8,#0x656b
7101d8f484  movk x8,#0x6879, LSL #16
7101d8f488  mov x10,#0x666f
7101d8f48c  movk x10,#0x5f66, LSL #16
7101d8f490  movk x8,#0x6c65, LSL #32
7101d8f494  movk x8,#0x5f70, LSL #48
7101d8f498  add x9,sp,#0x80
7101d8f49c  movk x10,#0x756f, LSL #32
7101d8f4a0  movk x10,#0x74, LSL #48
7101d8f4a4  stp x8,x10,[sp, #0x88]
7101d8f4a8  add x8,x9,#0x9
7101d8f4ac  orr w9,wzr,#0xf
7101d8f4b0  str w9,[sp, #0x84]
7101d8f4b4  mov w10,#0x6b
7101d8f4b8  mov w9,#0x89
7101d8f4bc  mul w11,w22,w9
7101d8f4c0  and w10,w10,#0xff
7101d8f4c4  eor w22,w11,w10
7101d8f4c8  ldrb w10,[x8], #0x1
7101d8f4cc  cbnz w10,0x7101d8f4bc
7101d8f4d0  b 0x7101d8f604
7101d8f4d4  adrp x8,0x710523d000
7101d8f4d8  add x8,x8,#0x9e8
7101d8f4dc  mov w0,#0x10
7101d8f4e0  orr w1,wzr,#0x18
7101d8f4e4  str x8,[sp, #0x20]
7101d8f4e8  bl 0x710392e290
7101d8f4ec  cbnz x0,0x7101d8f534
7101d8f4f0  adrp x8,0x7105332000
7101d8f4f4  ldr x0,[x8, #0xf00]
7101d8f4f8  cbz x0,0x7101d8f530
7101d8f4fc  orr w8,wzr,#0x18
7101d8f500  str wzr,[sp, #0x10]
7101d8f504  add x1,sp,#0x10
7101d8f508  str x8,[sp, #0x80]
7101d8f50c  ldr x8,[x0]
7101d8f510  ldr x8,[x8, #0x30]
7101d8f514  add x2,sp,#0x80
7101d8f518  blr x8
7101d8f51c  tbz w0,#0x0,0x7101d8f530
7101d8f520  mov w0,#0x10
7101d8f524  orr w1,wzr,#0x18
7101d8f528  bl 0x710392e290
7101d8f52c  cbnz x0,0x7101d8f534
7101d8f530  mov x0,xzr
7101d8f534  mov w8,#0x1
7101d8f538  stp xzr,xzr,[x0]
7101d8f53c  strb w8,[x0, #0x10]
7101d8f540  str x0,[sp, #0x28]
7101d8f544  cbnz x23,0x7101d8f290
7101d8f548  b 0x7101d8f298
7101d8f54c  mov x9,#0x656b
7101d8f550  movk x9,#0x6879, LSL #16
7101d8f554  movk x9,#0x6c65, LSL #32
7101d8f558  movk x9,#0x5f70, LSL #48
7101d8f55c  str x9,[sp, #0x88]
7101d8f560  mov x9,#0x756f
7101d8f564  movk x9,#0x5f74, LSL #16
7101d8f568  movk x9,#0x6162, LSL #32
7101d8f56c  movk x9,#0x7474, LSL #48
7101d8f570  mov w10,#0x656c
7101d8f574  strh w10,[sp, #0x98]
7101d8f578  strb wzr,[sp, #0x9a]
7101d8f57c  add x8,x8,#0x9
7101d8f580  str x9,[sp, #0x90]
7101d8f584  mov w11,#0x12
7101d8f588  mov w10,#0x6b
7101d8f58c  mov w9,#0x89
7101d8f590  str w11,[sp, #0x84]
7101d8f594  mul w11,w22,w9
7101d8f598  and w10,w10,#0xff
7101d8f59c  eor w22,w11,w10
7101d8f5a0  ldrb w10,[x8], #0x1
7101d8f5a4  cbnz w10,0x7101d8f594
7101d8f5a8  b 0x7101d8f604
7101d8f5ac  mov x8,#0x656b
7101d8f5b0  movk x8,#0x6879, LSL #16
7101d8f5b4  movk x8,#0x6c65, LSL #32
7101d8f5b8  movk x8,#0x5f70, LSL #48
7101d8f5bc  add x9,sp,#0x80
7101d8f5c0  strb wzr,[sp, #0x96]
7101d8f5c4  mov w10,#0x756f
7101d8f5c8  movk w10,#0x5f74, LSL #16
7101d8f5cc  str x8,[sp, #0x88]
7101d8f5d0  add x8,x9,#0x9
7101d8f5d4  mov w9,#0x7761
7101d8f5d8  str w10,[sp, #0x90]
7101d8f5dc  strh w9,[sp, #0x94]
7101d8f5e0  orr w11,wzr,#0xe
7101d8f5e4  mov w10,#0x6b
7101d8f5e8  mov w9,#0x89
7101d8f5ec  str w11,[sp, #0x84]
7101d8f5f0  mul w11,w22,w9
7101d8f5f4  and w10,w10,#0xff
7101d8f5f8  eor w22,w11,w10
7101d8f5fc  ldrb w10,[x8], #0x1
7101d8f600  cbnz w10,0x7101d8f5f0
7101d8f604  str w22,[sp, #0x80]
7101d8f608  ldr x0,[x19, #0x138]
7101d8f60c  fmov s0,0x3f800000
7101d8f610  bl 0x7103778300
7101d8f614  str w21,[x19, #0x35c]
7101d8f618  ldr x19,[sp, #0x18]
7101d8f61c  adrp x8,0x710523d000
7101d8f620  add x8,x8,#0x988
7101d8f624  stp x8,xzr,[sp, #0x10]
7101d8f628  cbz x19,0x7101d8f644
7101d8f62c  ldr x0,[x19, #0x18]
7101d8f630  stp x28,xzr,[x19, #0x10]
7101d8f634  cbz x0,0x7101d8f63c
7101d8f638  bl 0x710392eb40
7101d8f63c  mov x0,x19
7101d8f640  bl 0x710392eb40
7101d8f644  ldr x0,[sp, #0x28]
7101d8f648  adrp x8,0x710523d000
7101d8f64c  add x8,x8,#0x9e8
7101d8f650  stp x8,xzr,[sp, #0x20]
7101d8f654  cbz x0,0x7101d8f65c
7101d8f658  bl 0x710392eb40
7101d8f65c  stp x28,xzr,[sp, #0x60]
7101d8f660  cbz x20,0x7101d8f66c
7101d8f664  mov x0,x20
7101d8f668  bl 0x710392eb40
7101d8f66c  ldp x29,x30,[sp, #0x120]
7101d8f670  ldp x20,x19,[sp, #0x110]
7101d8f674  ldp x22,x21,[sp, #0x100]
7101d8f678  ldp x24,x23,[sp, #0xf0]
7101d8f67c  ldp x26,x25,[sp, #0xe0]
7101d8f680  ldp x28,x27,[sp, #0xd0]
7101d8f684  add sp,sp,#0x130
7101d8f688  ret
