// addr:      7101e7ec90
// offset:    0x1e7ec90
// name:      FUN_7101e7ec90
// mangled:   
// size:      11976

7101e7ec90  str d8,[sp, #-0x70]!
7101e7ec94  stp x28,x27,[sp, #0x10]
7101e7ec98  stp x26,x25,[sp, #0x20]
7101e7ec9c  stp x24,x23,[sp, #0x30]
7101e7eca0  stp x22,x21,[sp, #0x40]
7101e7eca4  stp x20,x19,[sp, #0x50]
7101e7eca8  stp x29,x30,[sp, #0x60]
7101e7ecac  add x29,sp,#0x60
7101e7ecb0  sub sp,sp,#0x1, LSL #12
7101e7ecb4  sub sp,sp,#0x5b0
7101e7ecb8  mov x22,x0
7101e7ecbc  add x0,x0,#0x150
7101e7ecc0  ldr x8,[x22]
7101e7ecc4  ldr x1,[x8]
7101e7ecc8  adrp x2,0x7104545000
7101e7eccc  add x2,x2,#0xc08
7101e7ecd0  mov w3,#0x1
7101e7ecd4  bl 0x71032cbf30
7101e7ecd8  ldr x8,[x22, #0x150]
7101e7ecdc  ldr x8,[x8]
7101e7ece0  ldr x8,[x8]
7101e7ece4  ldr x9,[x8, #0x600]
7101e7ece8  strb wzr,[x8, #0x656]
7101e7ecec  strb wzr,[x9, #0x4ab]
7101e7ecf0  ldr x9,[x8, #0x608]
7101e7ecf4  ldr x10,[x8, #0x610]
7101e7ecf8  cmp x9,x10
7101e7ecfc  b.eq 0x7101e7ed78
7101e7ed00  sub x11,x10,#0x10
7101e7ed04  sub x11,x11,x9
7101e7ed08  ubfx x12,x11,#0x4,#0x1c
7101e7ed0c  add w12,w12,#0x1
7101e7ed10  ands x12,x12,#0x3
7101e7ed14  b.eq 0x7101e7ed34
7101e7ed18  neg x12,x12
7101e7ed1c  ldrb w13,[x8, #0x656]
7101e7ed20  ldr x14,[x9, #0x8]
7101e7ed24  add x9,x9,#0x10
7101e7ed28  adds x12,x12,#0x1
7101e7ed2c  strb w13,[x14, #0x4ab]
7101e7ed30  b.ne 0x7101e7ed1c
7101e7ed34  cmp x11,#0x30
7101e7ed38  b.cc 0x7101e7ed78
7101e7ed3c  ldrb w11,[x8, #0x656]
7101e7ed40  ldr x12,[x9, #0x8]
7101e7ed44  strb w11,[x12, #0x4ab]
7101e7ed48  ldrb w11,[x8, #0x656]
7101e7ed4c  ldr x12,[x9, #0x18]
7101e7ed50  strb w11,[x12, #0x4ab]
7101e7ed54  ldrb w11,[x8, #0x656]
7101e7ed58  ldr x12,[x9, #0x28]
7101e7ed5c  strb w11,[x12, #0x4ab]
7101e7ed60  ldrb w11,[x8, #0x656]
7101e7ed64  ldr x12,[x9, #0x38]
7101e7ed68  add x9,x9,#0x40
7101e7ed6c  cmp x10,x9
7101e7ed70  strb w11,[x12, #0x4ab]
7101e7ed74  b.ne 0x7101e7ed3c
7101e7ed78  ldr x8,[x22, #0x150]
7101e7ed7c  ldr x8,[x8]
7101e7ed80  ldr x0,[x8]
7101e7ed84  add x19,sp,#0x1, LSL #12
7101e7ed88  mov w1,wzr
7101e7ed8c  add x19,x19,#0x430
7101e7ed90  bl 0x71037760f0
7101e7ed94  ldr x8,[x22, #0x150]
7101e7ed98  ldr x8,[x8]
7101e7ed9c  add x9,x8,#0x8
7101e7eda0  add x10,x22,#0x158
7101e7eda4  str x10,[sp, #0x38]
7101e7eda8  cmp x10,x9
7101e7edac  b.eq 0x7101e7ee20
7101e7edb0  ldr x9,[x8, #0x10]
7101e7edb4  ldr x9,[x9]
7101e7edb8  ldr x10,[x22, #0x160]
7101e7edbc  str x9,[x10]
7101e7edc0  ldr x9,[x8, #0x10]
7101e7edc4  ldr x9,[x9, #0x8]
7101e7edc8  ldr x10,[x22, #0x160]
7101e7edcc  str x9,[x10, #0x8]
7101e7edd0  ldr x9,[x8, #0x10]
7101e7edd4  ldr x8,[x22, #0x160]
7101e7edd8  cmp x8,x9
7101e7eddc  b.eq 0x7101e7ee20
7101e7ede0  ldr x10,[x9, #0x18]
7101e7ede4  ldr x10,[x10]
7101e7ede8  ldr x11,[x8, #0x18]
7101e7edec  str x10,[x11]
7101e7edf0  ldr x10,[x9, #0x18]
7101e7edf4  ldr x10,[x10, #0x8]
7101e7edf8  ldr x11,[x8, #0x18]
7101e7edfc  str x10,[x11, #0x8]
7101e7ee00  ldr x10,[x9, #0x18]
7101e7ee04  ldr x10,[x10, #0x10]
7101e7ee08  ldr x11,[x8, #0x18]
7101e7ee0c  str x10,[x11, #0x10]
7101e7ee10  ldr x9,[x9, #0x18]
7101e7ee14  ldr x9,[x9, #0x18]
7101e7ee18  ldr x8,[x8, #0x18]
7101e7ee1c  str x9,[x8, #0x18]
7101e7ee20  ldr x8,[x22, #0x150]
7101e7ee24  ldr x8,[x8]
7101e7ee28  ldr x8,[x8]
7101e7ee2c  ldr x9,[x8, #0x600]
7101e7ee30  mov w10,#0x20
7101e7ee34  str w10,[x9, #0x10]
7101e7ee38  ldr x9,[x8, #0x600]
7101e7ee3c  mov w10,#0x40
7101e7ee40  str w10,[x9, #0x14]
7101e7ee44  ldr x8,[x8, #0x600]
7101e7ee48  ldr x1,[sp, #0x38]
7101e7ee4c  mov w9,#0x200
7101e7ee50  add x0,x22,#0x1a8
7101e7ee54  str w9,[x8, #0x18]
7101e7ee58  bl 0x7101e831e0
7101e7ee5c  orr x8,xzr,#0x300000000
7101e7ee60  str x8,[sp, #0x1430]
7101e7ee64  mov w8,#0x1
7101e7ee68  strh w8,[sp, #0x1438]
7101e7ee6c  stur wzr,[x19, #0xa]
7101e7ee70  strh wzr,[sp, #0x143e]
7101e7ee74  add x0,sp,#0xa50
7101e7ee78  add x20,x22,#0x168
7101e7ee7c  str w8,[sp, #0x1440]
7101e7ee80  strh w8,[sp, #0x1444]
7101e7ee84  strb w8,[x19, #0x16]
7101e7ee88  mov x8,#0x41f0000000000000
7101e7ee8c  add x19,sp,#0xa50
7101e7ee90  str x8,[sp, #0x1448]
7101e7ee94  add x8,sp,#0x1, LSL #12
7101e7ee98  add x8,x8,#0x430
7101e7ee9c  add x1,x8,#0xc0
7101e7eea0  adrp x8,0x7105186000
7101e7eea4  add x8,x8,#0xd0
7101e7eea8  str wzr,[sp, #0x1450]
7101e7eeac  str xzr,[sp, #0x1480]
7101e7eeb0  str xzr,[sp, #0x14b0]
7101e7eeb4  str xzr,[sp, #0x14e0]
7101e7eeb8  str xzr,[sp, #0x1510]
7101e7eebc  str xzr,[sp, #0x1540]
7101e7eec0  str wzr,[sp, #0x1550]
7101e7eec4  str x8,[sp, #0xa50]
7101e7eec8  str x19,[sp, #0xa70]
7101e7eecc  bl 0x7101989a30
7101e7eed0  ldr x0,[sp, #0xa70]
7101e7eed4  cmp x19,x0
7101e7eed8  b.eq 0x7101e7eeec
7101e7eedc  cbz x0,0x7101e7eef8
7101e7eee0  ldr x8,[x0]
7101e7eee4  ldr x8,[x8, #0x28]
7101e7eee8  b 0x7101e7eef4
7101e7eeec  ldr x8,[x0]
7101e7eef0  ldr x8,[x8, #0x20]
7101e7eef4  blr x8
7101e7eef8  adrp x8,0x71050b2000
7101e7eefc  add x8,x8,#0xa0
7101e7ef00  str x8,[sp, #0xa50]
7101e7ef04  adrp x8,0x7101e84000
7101e7ef08  add x8,x8,#0x900
7101e7ef0c  str x8,[sp, #0xa58]
7101e7ef10  add x8,sp,#0x1, LSL #12
7101e7ef14  add x8,x8,#0x430
7101e7ef18  add x1,x8,#0xf0
7101e7ef1c  add x19,sp,#0xa50
7101e7ef20  add x0,sp,#0xa50
7101e7ef24  str xzr,[sp, #0xa60]
7101e7ef28  str x20,[sp, #0xa68]
7101e7ef2c  str x19,[sp, #0xa70]
7101e7ef30  bl 0x7101989a30
7101e7ef34  ldr x0,[sp, #0xa70]
7101e7ef38  cmp x19,x0
7101e7ef3c  b.eq 0x7101e7ef50
7101e7ef40  cbz x0,0x7101e7ef5c
7101e7ef44  ldr x8,[x0]
7101e7ef48  ldr x8,[x8, #0x28]
7101e7ef4c  b 0x7101e7ef58
7101e7ef50  ldr x8,[x0]
7101e7ef54  ldr x8,[x8, #0x20]
7101e7ef58  blr x8
7101e7ef5c  ldr x0,[x22, #0x168]
7101e7ef60  ldr x1,[sp, #0x38]
7101e7ef64  add x3,sp,#0x1, LSL #12
7101e7ef68  adrp x2,0x7104433000
7101e7ef6c  add x2,x2,#0x952
7101e7ef70  add x3,x3,#0x430
7101e7ef74  str x0,[sp, #0x8]
7101e7ef78  bl 0x7103770b30
7101e7ef7c  ldp x10,x9,[x22, #0x168]
7101e7ef80  mov x0,x10
7101e7ef84  ldr x8,[x0, #0x58]!
7101e7ef88  ldr x9,[x9]
7101e7ef8c  ldrb w9,[x9, #0x18]
7101e7ef90  stp x20,x10,[sp, #0x18]
7101e7ef94  ldr x10,[x10, #0x60]
7101e7ef98  sub x11,x9,#0x1
7101e7ef9c  sub x12,x10,x8
7101e7efa0  asr x12,x12,#0x4
7101e7efa4  subs x1,x11,x12
7101e7efa8  b.ls 0x7101e7efb4
7101e7efac  bl 0x7101bb9cd0
7101e7efb0  b 0x7101e7eff0
7101e7efb4  b.cs 0x7101e7eff0
7101e7efb8  add x20,x8,x11, LSL #0x4
7101e7efbc  cmp x20,x10
7101e7efc0  b.eq 0x7101e7efe8
7101e7efc4  add x21,x8,x9, LSL #0x4
7101e7efc8  add x19,x10,#0x10
7101e7efcc  ldr x8,[x19, #-0x20]!
7101e7efd0  ldr x8,[x8]
7101e7efd4  mov x0,x19
7101e7efd8  blr x8
7101e7efdc  add x19,x19,#0x10
7101e7efe0  cmp x21,x19
7101e7efe4  b.ne 0x7101e7efcc
7101e7efe8  ldr x8,[sp, #0x20]
7101e7efec  str x20,[x8, #0x60]
7101e7eff0  ldp x20,x9,[x22, #0x168]
7101e7eff4  mov x0,x20
7101e7eff8  ldr x8,[x0, #0x70]!
7101e7effc  ldr x9,[x9]
7101e7f000  ldr x21,[x20, #0x78]
7101e7f004  str x22,[sp, #0x40]
7101e7f008  ldrb w25,[x9, #0x18]
7101e7f00c  sub x9,x21,x8
7101e7f010  asr x24,x9,#0x4
7101e7f014  sub x19,x25,#0x1
7101e7f018  subs x10,x19,x24
7101e7f01c  b.ls 0x7101e7f06c
7101e7f020  ldr x9,[x20, #0x80]
7101e7f024  sub x11,x9,x21
7101e7f028  asr x11,x11,#0x4
7101e7f02c  cmp x11,x10
7101e7f030  b.cs 0x7101e7f0a8
7101e7f034  lsr x10,x19,#0x3c
7101e7f038  cbnz x10,0x7101e81b2c
7101e7f03c  sub x8,x9,x8
7101e7f040  asr x9,x8,#0x4
7101e7f044  orr x10,xzr,#0x7fffffffffffffe
7101e7f048  cmp x9,x10
7101e7f04c  b.hi 0x7101e7f138
7101e7f050  asr x8,x8,#0x3
7101e7f054  cmp x8,x19
7101e7f058  csel x9,x19,x8,cc
7101e7f05c  cbz x9,0x7101e7f1a4
7101e7f060  lsr x8,x9,#0x3c
7101e7f064  cbz x8,0x7101e7f13c
7101e7f068  b 0x7101e81b08
7101e7f06c  b.cs 0x7101e7f2cc
7101e7f070  add x22,x8,x19, LSL #0x4
7101e7f074  cmp x22,x21
7101e7f078  b.eq 0x7101e7f0a0
7101e7f07c  add x23,x8,x25, LSL #0x4
7101e7f080  add x19,x21,#0x10
7101e7f084  ldr x8,[x19, #-0x20]!
7101e7f088  ldr x8,[x8]
7101e7f08c  mov x0,x19
7101e7f090  blr x8
7101e7f094  add x19,x19,#0x10
7101e7f098  cmp x23,x19
7101e7f09c  b.ne 0x7101e7f084
7101e7f0a0  str x22,[x20, #0x78]
7101e7f0a4  b 0x7101e7f2cc
7101e7f0a8  add x8,x24,#0x1
7101e7f0ac  orr w19,wzr,#0x18
7101e7f0b0  adrp x22,0x7105332000
7101e7f0b4  sub x23,x8,x25
7101e7f0b8  mov w24,#0x1
7101e7f0bc  adrp x25,0x710523d000
7101e7f0c0  add x25,x25,#0x9e8
7101e7f0c4  mov w0,#0x10
7101e7f0c8  orr w1,wzr,#0x18
7101e7f0cc  str x25,[x21]
7101e7f0d0  bl 0x710392e290
7101e7f0d4  cbnz x0,0x7101e7f114
7101e7f0d8  ldr x0,[x22, #0xf00]
7101e7f0dc  cbz x0,0x7101e7f110
7101e7f0e0  str wzr,[sp, #0x80]
7101e7f0e4  str x19,[sp, #0xa50]
7101e7f0e8  ldr x8,[x0]
7101e7f0ec  ldr x8,[x8, #0x30]
7101e7f0f0  add x1,sp,#0x80
7101e7f0f4  add x2,sp,#0xa50
7101e7f0f8  blr x8
7101e7f0fc  tbz w0,#0x0,0x7101e7f110
7101e7f100  mov w0,#0x10
7101e7f104  orr w1,wzr,#0x18
7101e7f108  bl 0x710392e290
7101e7f10c  cbnz x0,0x7101e7f114
7101e7f110  mov x0,xzr
7101e7f114  stp xzr,xzr,[x0]
7101e7f118  adds x23,x23,#0x1
7101e7f11c  strb w24,[x0, #0x10]
7101e7f120  str x0,[x21, #0x8]
7101e7f124  ldr x8,[x20, #0x78]
7101e7f128  add x21,x8,#0x10
7101e7f12c  str x21,[x20, #0x78]
7101e7f130  b.ne 0x7101e7f0c4
7101e7f134  b 0x7101e7f2cc
7101e7f138  orr x9,xzr,#0xfffffffffffffff
7101e7f13c  lsl x8,x9,#0x4
7101e7f140  cmp x8,#0x0
7101e7f144  csinc x22,x8,xzr,ne
7101e7f148  mov w0,#0x10
7101e7f14c  mov x1,x22
7101e7f150  stur x9,[x29, #-0x58]
7101e7f154  bl 0x710392e290
7101e7f158  mov x21,x0
7101e7f15c  cbnz x0,0x7101e7f1ac
7101e7f160  adrp x8,0x7105332000
7101e7f164  ldr x0,[x8, #0xf00]
7101e7f168  cbz x0,0x7101e7f1a8
7101e7f16c  str wzr,[sp, #0x80]
7101e7f170  str x22,[sp, #0xa50]
7101e7f174  ldr x8,[x0]
7101e7f178  ldr x8,[x8, #0x30]
7101e7f17c  add x1,sp,#0x80
7101e7f180  add x2,sp,#0xa50
7101e7f184  blr x8
7101e7f188  tbz w0,#0x0,0x7101e7f1a8
7101e7f18c  mov w0,#0x10
7101e7f190  mov x1,x22
7101e7f194  bl 0x710392e290
7101e7f198  mov x21,x0
7101e7f19c  cbnz x0,0x7101e7f1ac
7101e7f1a0  b 0x7101e7f1a8
7101e7f1a4  stur xzr,[x29, #-0x58]
7101e7f1a8  mov x21,xzr
7101e7f1ac  add x23,x21,x24, LSL #0x4
7101e7f1b0  add x8,x24,#0x1
7101e7f1b4  sub x25,x8,x25
7101e7f1b8  orr w26,wzr,#0x18
7101e7f1bc  adrp x27,0x7105332000
7101e7f1c0  mov w28,#0x1
7101e7f1c4  mov x24,x23
7101e7f1c8  adrp x22,0x710523d000
7101e7f1cc  add x22,x22,#0x9e8
7101e7f1d0  mov w0,#0x10
7101e7f1d4  orr w1,wzr,#0x18
7101e7f1d8  str x22,[x24]
7101e7f1dc  bl 0x710392e290
7101e7f1e0  cbnz x0,0x7101e7f220
7101e7f1e4  ldr x0,[x27, #0xf00]
7101e7f1e8  cbz x0,0x7101e7f21c
7101e7f1ec  str wzr,[sp, #0x80]
7101e7f1f0  str x26,[sp, #0xa50]
7101e7f1f4  ldr x8,[x0]
7101e7f1f8  ldr x8,[x8, #0x30]
7101e7f1fc  add x1,sp,#0x80
7101e7f200  add x2,sp,#0xa50
7101e7f204  blr x8
7101e7f208  tbz w0,#0x0,0x7101e7f21c
7101e7f20c  mov w0,#0x10
7101e7f210  orr w1,wzr,#0x18
7101e7f214  bl 0x710392e290
7101e7f218  cbnz x0,0x7101e7f220
7101e7f21c  mov x0,xzr
7101e7f220  stp xzr,xzr,[x0]
7101e7f224  adds x25,x25,#0x1
7101e7f228  strb w28,[x0, #0x10]
7101e7f22c  str x0,[x24, #0x8]
7101e7f230  add x24,x24,#0x10
7101e7f234  b.ne 0x7101e7f1d0
7101e7f238  ldur x8,[x29, #-0x58]
7101e7f23c  add x24,x21,x8, LSL #0x4
7101e7f240  add x19,x21,x19, LSL #0x4
7101e7f244  ldp x21,x8,[x20, #0x70]
7101e7f248  cmp x8,x21
7101e7f24c  b.eq 0x7101e7f294
7101e7f250  mov x9,x23
7101e7f254  sub x25,x8,#0x10
7101e7f258  cmp x8,x9
7101e7f25c  str x22,[x23, #-0x10]!
7101e7f260  stur xzr,[x9, #-0x8]
7101e7f264  b.eq 0x7101e7f280
7101e7f268  ldur x10,[x8, #-0x8]
7101e7f26c  stur xzr,[x8, #-0x8]
7101e7f270  ldur x0,[x9, #-0x8]
7101e7f274  stur x10,[x9, #-0x8]
7101e7f278  cbz x0,0x7101e7f280
7101e7f27c  bl 0x710392eb40
7101e7f280  cmp x21,x25
7101e7f284  mov x8,x25
7101e7f288  b.ne 0x7101e7f250
7101e7f28c  ldp x22,x21,[x20, #0x70]
7101e7f290  b 0x7101e7f298
7101e7f294  mov x22,x21
7101e7f298  cmp x21,x22
7101e7f29c  stp x23,x19,[x20, #0x70]
7101e7f2a0  str x24,[x20, #0x80]
7101e7f2a4  b.eq 0x7101e7f2c0
7101e7f2a8  ldr x8,[x21, #-0x10]!
7101e7f2ac  ldr x8,[x8]
7101e7f2b0  mov x0,x21
7101e7f2b4  blr x8
7101e7f2b8  cmp x22,x21
7101e7f2bc  b.ne 0x7101e7f2a8
7101e7f2c0  cbz x22,0x7101e7f2cc
7101e7f2c4  mov x0,x22
7101e7f2c8  bl 0x710392eb40
7101e7f2cc  ldr x24,[sp, #0x18]
7101e7f2d0  str xzr,[sp, #0x1428]
7101e7f2d4  str xzr,[sp, #0x1420]
7101e7f2d8  str xzr,[sp, #0x1418]
7101e7f2dc  ldr x8,[x24]
7101e7f2e0  ldr x9,[x8, #0x40]
7101e7f2e4  str x9,[x8, #0x48]
7101e7f2e8  ldr x9,[sp, #0x20]
7101e7f2ec  ldp x22,x23,[sp, #0x38]
7101e7f2f0  ldp x8,x9,[x9, #0x58]
7101e7f2f4  cmp x9,x8
7101e7f2f8  b.eq 0x7101e809b8
7101e7f2fc  add x8,sp,#0xa50
7101e7f300  add x9,x8,#0x8
7101e7f304  fmov s8,0x3f800000
7101e7f308  mov x21,#0x94fc
7101e7f30c  movk x21,#0x1826, LSL #16
7101e7f310  movk x21,#0x4, LSL #32
7101e7f314  str x9,[sp, #0x70]
7101e7f318  add x9,sp,#0x80
7101e7f31c  mov w28,wzr
7101e7f320  add x26,x9,#0x8
7101e7f324  add x9,x23,#0x188
7101e7f328  str x9,[sp, #0x10]
7101e7f32c  add x8,x8,#0x9
7101e7f330  str x8,[sp, #0x50]
7101e7f334  b 0x7101e7f358
7101e7f338  mov x25,xzr
7101e7f33c  b 0x7101e7fe58
7101e7f340  ldursh w3,[x9, #0x1]
7101e7f344  b 0x7101e7f788
7101e7f348  ldrsb w3,[x9, #0x1]
7101e7f34c  b 0x7101e7f788
7101e7f350  ldurh w3,[x9, #0x1]
7101e7f354  b 0x7101e7f788
7101e7f358  and w20,w28,#0xff
7101e7f35c  add x8,sp,#0xa50
7101e7f360  adrp x0,0x710432a000
7101e7f364  add x0,x0,#0x6bb
7101e7f368  mov w1,w20
7101e7f36c  bl 0x71003a4ca0
7101e7f370  ldr x0,[x24]
7101e7f374  ldr x2,[sp, #0x70]
7101e7f378  mov w1,w20
7101e7f37c  bl 0x71037717d0
7101e7f380  ldr x8,[x24]
7101e7f384  ldr x1,[x8]
7101e7f388  ldr x9,[x1, #0x1b8]
7101e7f38c  cbz x9,0x7101e7f400
7101e7f390  add x10,x1,#0x1b8
7101e7f394  mov x8,x10
7101e7f398  ldr w11,[x9, #0x20]
7101e7f39c  cmp w11,w20
7101e7f3a0  cset w11,lt
7101e7f3a4  csel x8,x8,x9,lt
7101e7f3a8  ldr x9,[x9, w11, UXTW #0x3]
7101e7f3ac  cbnz x9,0x7101e7f398
7101e7f3b0  cmp x8,x10
7101e7f3b4  b.eq 0x7101e7f400
7101e7f3b8  ldr w9,[x8, #0x20]
7101e7f3bc  cmp w9,w20
7101e7f3c0  b.gt 0x7101e7f400
7101e7f3c4  ldr x19,[x8, #0x28]
7101e7f3c8  cbz x19,0x7101e7f400
7101e7f3cc  ldr x8,[x19]
7101e7f3d0  ldr x8,[x8, #0x1f8]
7101e7f3d4  mov w1,#0x1
7101e7f3d8  mov x0,x19
7101e7f3dc  blr x8
7101e7f3e0  ldr x8,[x19]
7101e7f3e4  ldr x8,[x8, #0x388]
7101e7f3e8  mov x0,x19
7101e7f3ec  mov w1,wzr
7101e7f3f0  mov w2,wzr
7101e7f3f4  blr x8
7101e7f3f8  ldr x8,[x24]
7101e7f3fc  ldr x1,[x8]
7101e7f400  sub x0,x29,#0x88
7101e7f404  mov w2,w20
7101e7f408  str w20,[sp, #0x64]
7101e7f40c  bl 0x7103771d60
7101e7f410  ldur x19,[x29, #-0x80]
7101e7f414  ldr x0,[x19]
7101e7f418  cbz x0,0x7101e7f444
7101e7f41c  ldr x8,[x0]
7101e7f420  ldr x8,[x8, #0x280]
7101e7f424  mov w1,wzr
7101e7f428  blr x8
7101e7f42c  ldr x0,[x19]
7101e7f430  cbz x0,0x7101e7f444
7101e7f434  ldr x8,[x0]
7101e7f438  ldr x8,[x8, #0x1e8]
7101e7f43c  mov w1,#0x1
7101e7f440  blr x8
7101e7f444  ldr x1,[sp, #0x70]
7101e7f448  sub x8,x29,#0x98
7101e7f44c  mov x0,x22
7101e7f450  bl 0x7103776640
7101e7f454  ldr x0,[x24]
7101e7f458  ldr x8,[x0, #0x58]!
7101e7f45c  ldr x9,[x0, #0x8]
7101e7f460  sub x9,x9,x8
7101e7f464  and x20,x28,#0xff
7101e7f468  asr x9,x9,#0x4
7101e7f46c  cmp x9,x20
7101e7f470  b.ls 0x7101e81b20
7101e7f474  add x8,x8,x20, LSL #0x4
7101e7f478  sub x9,x29,#0x98
7101e7f47c  cmp x8,x9
7101e7f480  b.eq 0x7101e7f4f4
7101e7f484  ldur x9,[x29, #-0x90]
7101e7f488  ldr x9,[x9]
7101e7f48c  ldr x10,[x8, #0x8]
7101e7f490  str x9,[x10]
7101e7f494  ldur x9,[x29, #-0x90]
7101e7f498  ldr x9,[x9, #0x8]
7101e7f49c  ldr x10,[x8, #0x8]
7101e7f4a0  str x9,[x10, #0x8]
7101e7f4a4  ldur x9,[x29, #-0x90]
7101e7f4a8  ldr x8,[x8, #0x8]
7101e7f4ac  cmp x8,x9
7101e7f4b0  b.eq 0x7101e7f4f4
7101e7f4b4  ldr x10,[x9, #0x18]
7101e7f4b8  ldr x10,[x10]
7101e7f4bc  ldr x11,[x8, #0x18]
7101e7f4c0  str x10,[x11]
7101e7f4c4  ldr x10,[x9, #0x18]
7101e7f4c8  ldr x10,[x10, #0x8]
7101e7f4cc  ldr x11,[x8, #0x18]
7101e7f4d0  str x10,[x11, #0x8]
7101e7f4d4  ldr x10,[x9, #0x18]
7101e7f4d8  ldr x10,[x10, #0x10]
7101e7f4dc  ldr x11,[x8, #0x18]
7101e7f4e0  str x10,[x11, #0x10]
7101e7f4e4  ldr x9,[x9, #0x18]
7101e7f4e8  ldr x9,[x9, #0x18]
7101e7f4ec  ldr x8,[x8, #0x18]
7101e7f4f0  str x9,[x8, #0x18]
7101e7f4f4  add x8,sp,#0x80
7101e7f4f8  sub x0,x29,#0x98
7101e7f4fc  adrp x1,0x710435b000
7101e7f500  add x1,x1,#0xe47
7101e7f504  bl 0x71037780e0
7101e7f508  ldr x0,[x24]
7101e7f50c  ldr x8,[x0, #0x70]!
7101e7f510  ldr x9,[x0, #0x8]
7101e7f514  sub x9,x9,x8
7101e7f518  asr x9,x9,#0x4
7101e7f51c  cmp x9,x20
7101e7f520  b.ls 0x7101e81b20
7101e7f524  add x8,x8,x20, LSL #0x4
7101e7f528  add x9,sp,#0x80
7101e7f52c  cmp x8,x9
7101e7f530  b.eq 0x7101e7f54c
7101e7f534  ldr x9,[sp, #0x88]
7101e7f538  str xzr,[sp, #0x88]
7101e7f53c  ldr x0,[x8, #0x8]
7101e7f540  str x9,[x8, #0x8]
7101e7f544  cbz x0,0x7101e7f54c
7101e7f548  bl 0x710392eb40
7101e7f54c  ldr x0,[sp, #0x88]
7101e7f550  adrp x8,0x710523d000
7101e7f554  add x8,x8,#0x9e8
7101e7f558  stp x8,xzr,[sp, #0x80]
7101e7f55c  cbz x0,0x7101e7f564
7101e7f560  bl 0x710392eb40
7101e7f564  sub x8,x29,#0xa8
7101e7f568  sub x0,x29,#0x98
7101e7f56c  adrp x1,0x71042a3000
7101e7f570  add x1,x1,#0x698
7101e7f574  bl 0x7103776910
7101e7f578  ldr x8,[x23, #0x170]
7101e7f57c  ldr x8,[x8]
7101e7f580  ldr x9,[x8, #0x8]
7101e7f584  sub x10,x9,#0x1
7101e7f588  tst x10,x9
7101e7f58c  b.eq 0x7101e7f5cc
7101e7f590  cmp x9,x20
7101e7f594  mov x10,x20
7101e7f598  b.hi 0x7101e7f5a4
7101e7f59c  udiv x10,x20,x9
7101e7f5a0  msub x10,x10,x9,x20
7101e7f5a4  ldr x8,[x8]
7101e7f5a8  ldr x8,[x8, x10, LSL #0x3]
7101e7f5ac  ldr x8,[x8]
7101e7f5b0  ldr x9,[x8, #0x8]
7101e7f5b4  cmp x9,x20
7101e7f5b8  b.ne 0x7101e7f5ac
7101e7f5bc  ldrb w9,[x8, #0x10]
7101e7f5c0  cmp w9,w28, UXTB 
7101e7f5c4  b.ne 0x7101e7f5ac
7101e7f5c8  b 0x7101e7f5f4
7101e7f5cc  ldr x8,[x8]
7101e7f5d0  and x9,x10,x20
7101e7f5d4  ldr x8,[x8, x9, LSL #0x3]
7101e7f5d8  ldr x8,[x8]
7101e7f5dc  ldr x9,[x8, #0x8]
7101e7f5e0  cmp x9,x20
7101e7f5e4  b.ne 0x7101e7f5d8
7101e7f5e8  ldrb w9,[x8, #0x10]
7101e7f5ec  cmp w9,w28, UXTB 
7101e7f5f0  b.ne 0x7101e7f5d8
7101e7f5f4  ldr w2,[x8, #0x18]
7101e7f5f8  adrp x8,0x710532f000
7101e7f5fc  ldr x8,[x8, #0x730]
7101e7f600  ldr x8,[x8, #0x8]
7101e7f604  ldr x8,[x8, #0x228]
7101e7f608  ldr x1,[x8, #0x8]
7101e7f60c  ldr x8,[x1, #0x20]
7101e7f610  ldrb w9,[x8]
7101e7f614  cmp w9,#0xc
7101e7f618  adrp x9,0x7104742000
7101e7f61c  add x9,x9,#0xdbb
7101e7f620  b.ne 0x7101e7f6a4
7101e7f624  ldur w9,[x8, #0x1]
7101e7f628  subs w9,w9,#0x1
7101e7f62c  b.lt 0x7101e7f69c
7101e7f630  ldr x14,[x1, #0x18]
7101e7f634  ldr x11,[x1, #0x48]
7101e7f638  mov w10,wzr
7101e7f63c  ldursw x13,[x8, #0x5]
7101e7f640  and x11,x11,#0xffffffffff
7101e7f644  ldp x12,x14,[x14, #0x20]
7101e7f648  add x13,x14,x13
7101e7f64c  add w14,w9,w10
7101e7f650  cmp w14,#0x0
7101e7f654  cinc w14,w14,lt
7101e7f658  asr w14,w14,#0x1
7101e7f65c  add x15,x13,w14, SXTW  #0x3
7101e7f660  ldr w16,[x15]
7101e7f664  ldr x16,[x12, x16, LSL #0x3]
7101e7f668  cmp x16,x11
7101e7f66c  b.eq 0x7101e7f68c
7101e7f670  sub w15,w14,#0x1
7101e7f674  cmp x16,x11
7101e7f678  csel w9,w15,w9,hi
7101e7f67c  csinc w10,w10,w14,hi
7101e7f680  cmp w10,w9
7101e7f684  b.le 0x7101e7f64c
7101e7f688  b 0x7101e7f69c
7101e7f68c  ldrsw x9,[x15, #0x4]
7101e7f690  tbnz w9,#0x1f,0x7101e7f69c
7101e7f694  add x9,x8,x9
7101e7f698  b 0x7101e7f6a4
7101e7f69c  adrp x9,0x7104742000
7101e7f6a0  add x9,x9,#0xdbb
7101e7f6a4  ldrb w8,[x9]
7101e7f6a8  sub w8,w8,#0xb
7101e7f6ac  cmp w8,#0x1
7101e7f6b0  b.hi 0x7101e7f784
7101e7f6b4  ldur w8,[x9, #0x1]
7101e7f6b8  cmp w8,w2
7101e7f6bc  b.ls 0x7101e7f784
7101e7f6c0  add x0,sp,#0x80
7101e7f6c4  bl 0x710326a3e0
7101e7f6c8  ldr x8,[sp, #0x88]
7101e7f6cc  ldrb w9,[x8]
7101e7f6d0  cmp w9,#0xc
7101e7f6d4  adrp x9,0x7104742000
7101e7f6d8  add x9,x9,#0xdbb
7101e7f6dc  b.ne 0x7101e7f758
7101e7f6e0  ldur w9,[x8, #0x1]
7101e7f6e4  subs w9,w9,#0x1
7101e7f6e8  b.lt 0x7101e7f750
7101e7f6ec  ldr x13,[sp, #0x80]
7101e7f6f0  ldursw x12,[x8, #0x5]
7101e7f6f4  mov w10,wzr
7101e7f6f8  ldp x11,x13,[x13, #0x20]
7101e7f6fc  add x12,x13,x12
7101e7f700  add w13,w9,w10
7101e7f704  cmp w13,#0x0
7101e7f708  cinc w13,w13,lt
7101e7f70c  asr w13,w13,#0x1
7101e7f710  add x14,x12,w13, SXTW  #0x3
7101e7f714  ldr w15,[x14]
7101e7f718  ldr x15,[x11, x15, LSL #0x3]
7101e7f71c  cmp x15,x21
7101e7f720  b.eq 0x7101e7f740
7101e7f724  sub w14,w13,#0x1
7101e7f728  cmp x15,x21
7101e7f72c  csel w9,w14,w9,hi
7101e7f730  csinc w10,w10,w13,hi
7101e7f734  cmp w10,w9
7101e7f738  b.le 0x7101e7f700
7101e7f73c  b 0x7101e7f750
7101e7f740  ldrsw x9,[x14, #0x4]
7101e7f744  tbnz w9,#0x1f,0x7101e7f750
7101e7f748  add x9,x8,x9
7101e7f74c  b 0x7101e7f758
7101e7f750  adrp x9,0x7104742000
7101e7f754  add x9,x9,#0xdbb
7101e7f758  ldrb w8,[x9]
7101e7f75c  sub w8,w8,#0x1
7101e7f760  cmp w8,#0x6
7101e7f764  b.hi 0x7101e7f784
7101e7f768  adrp x10,0x71044fc000
7101e7f76c  add x10,x10,#0x14
7101e7f770  ldrsw x8,[x10, x8, LSL #0x2]
7101e7f774  add x8,x8,x10
7101e7f778  br x8
7101e7f77c  ldrb w3,[x9, #0x1]
7101e7f780  b 0x7101e7f788
7101e7f784  mov w3,wzr
7101e7f788  sub x0,x29,#0xa8
7101e7f78c  mov w2,#0x1
7101e7f790  adrp x1,0x71043f0000
7101e7f794  add x1,x1,#0xf5b
7101e7f798  bl 0x710377a280
7101e7f79c  ldr x8,[x23, #0x170]
7101e7f7a0  ldr x1,[x8]
7101e7f7a4  add x0,sp,#0x80
7101e7f7a8  mov w2,w28
7101e7f7ac  bl 0x71024dae20
7101e7f7b0  ldur x0,[x29, #-0x90]
7101e7f7b4  mov v0.16B,v8.16B
7101e7f7b8  mov x1,x26
7101e7f7bc  bl 0x7103778300
7101e7f7c0  ldur x0,[x29, #-0x90]
7101e7f7c4  mov v0.16B,v8.16B
7101e7f7c8  adrp x1,0x710435b000
7101e7f7cc  add x1,x1,#0xe2b
7101e7f7d0  bl 0x7103778300
7101e7f7d4  sub x1,x29,#0x98
7101e7f7d8  mov x0,x24
7101e7f7dc  mov w2,w28
7101e7f7e0  bl 0x7101e85360
7101e7f7e4  ldr x8,[x23, #0x170]
7101e7f7e8  ldr x8,[x8]
7101e7f7ec  ldr x9,[x8, #0x8]
7101e7f7f0  sub x10,x9,#0x1
7101e7f7f4  tst x10,x9
7101e7f7f8  b.eq 0x7101e7f83c
7101e7f7fc  cmp x9,x20
7101e7f800  mov x10,x20
7101e7f804  b.hi 0x7101e7f810
7101e7f808  udiv x10,x20,x9
7101e7f80c  msub x10,x10,x9,x20
7101e7f810  ldr x9,[x8]
7101e7f814  ldr x9,[x9, x10, LSL #0x3]
7101e7f818  ldr x9,[x9]
7101e7f81c  ldr x10,[x9, #0x8]
7101e7f820  cmp x10,x20
7101e7f824  b.ne 0x7101e7f818
7101e7f828  mov x10,x9
7101e7f82c  ldrb w11,[x10, #0x10]!
7101e7f830  cmp w11,w28, UXTB 
7101e7f834  b.ne 0x7101e7f818
7101e7f838  b 0x7101e7f868
7101e7f83c  and x9,x10,x20
7101e7f840  ldr x10,[x8]
7101e7f844  ldr x9,[x10, x9, LSL #0x3]
7101e7f848  ldr x9,[x9]
7101e7f84c  ldr x10,[x9, #0x8]
7101e7f850  cmp x10,x20
7101e7f854  b.ne 0x7101e7f848
7101e7f858  mov x10,x9
7101e7f85c  ldrb w11,[x10, #0x10]!
7101e7f860  cmp w11,w28, UXTB 
7101e7f864  b.ne 0x7101e7f848
7101e7f868  ldrsb x9,[x10, #0x4]
7101e7f86c  str x28,[sp, #0x68]
7101e7f870  tbnz x9,#0x3f,0x7101e7f994
7101e7f874  lsr x10,x9,#0x3
7101e7f878  and x10,x10,#0x1ffffffffffffff8
7101e7f87c  add x8,x8,x10
7101e7f880  mov w10,#0x1
7101e7f884  ldr x8,[x8, #0x90]
7101e7f888  lsl x9,x10,x9
7101e7f88c  tst x8,x9
7101e7f890  b.eq 0x7101e7f994
7101e7f894  ldp x9,x8,[x23, #0x190]
7101e7f898  cmp x9,x8
7101e7f89c  b.eq 0x7101e7f8b4
7101e7f8a0  strb w28,[x9]
7101e7f8a4  ldr x8,[x23, #0x190]
7101e7f8a8  add x8,x8,#0x1
7101e7f8ac  str x8,[x23, #0x190]
7101e7f8b0  b 0x7101e7f994
7101e7f8b4  ldr x10,[sp, #0x10]
7101e7f8b8  ldr x21,[x10]
7101e7f8bc  sub x25,x9,x21
7101e7f8c0  adds x9,x25,#0x1
7101e7f8c4  b.mi 0x7101e81b24
7101e7f8c8  sub x8,x8,x21
7101e7f8cc  orr x10,xzr,#0x3ffffffffffffffe
7101e7f8d0  cmp x8,x10
7101e7f8d4  b.hi 0x7101e7f8ec
7101e7f8d8  lsl x8,x8,#0x1
7101e7f8dc  cmp x8,x9
7101e7f8e0  csel x27,x9,x8,cc
7101e7f8e4  cbnz x27,0x7101e7f8f0
7101e7f8e8  b 0x7101e7f94c
7101e7f8ec  orr x27,xzr,#0x7fffffffffffffff
7101e7f8f0  mov w0,#0x10
7101e7f8f4  mov x1,x27
7101e7f8f8  bl 0x710392e290
7101e7f8fc  cbz x0,0x7101e7f910
7101e7f900  mov x28,x0
7101e7f904  b 0x7101e7f950
7101e7f908  ldur w3,[x9, #0x1]
7101e7f90c  b 0x7101e7f788
7101e7f910  adrp x8,0x7105332000
7101e7f914  ldr x0,[x8, #0xf00]
7101e7f918  cbz x0,0x7101e7f94c
7101e7f91c  stur wzr,[x29, #-0x74]
7101e7f920  str x27,[sp, #0x80]
7101e7f924  ldr x8,[x0]
7101e7f928  ldr x8,[x8, #0x30]
7101e7f92c  sub x1,x29,#0x74
7101e7f930  add x2,sp,#0x80
7101e7f934  blr x8
7101e7f938  tbz w0,#0x0,0x7101e7f94c
7101e7f93c  mov w0,#0x10
7101e7f940  mov x1,x27
7101e7f944  bl 0x710392e290
7101e7f948  cbnz x0,0x7101e7f900
7101e7f94c  mov x28,xzr
7101e7f950  ldr x8,[sp, #0x68]
7101e7f954  add x22,x28,x25
7101e7f958  add x19,x28,x27
7101e7f95c  cmp x25,#0x1
7101e7f960  strb w8,[x22], #0x1
7101e7f964  b.lt 0x7101e7f978
7101e7f968  mov x0,x28
7101e7f96c  mov x1,x21
7101e7f970  mov x2,x25
7101e7f974  bl 0x71039c00e0
7101e7f978  stp x28,x22,[x23, #0x188]
7101e7f97c  ldr x22,[sp, #0x38]
7101e7f980  ldr x28,[sp, #0x68]
7101e7f984  str x19,[x23, #0x198]
7101e7f988  cbz x21,0x7101e7f994
7101e7f98c  mov x0,x21
7101e7f990  bl 0x710392eb40
7101e7f994  ldur x0,[x29, #-0xa0]
7101e7f998  adrp x8,0x710523d000
7101e7f99c  add x8,x8,#0x9a8
7101e7f9a0  stp x8,xzr,[x29, #-0xa8]
7101e7f9a4  cbz x0,0x7101e7f9ac
7101e7f9a8  bl 0x710392eb40
7101e7f9ac  ldur x19,[x29, #-0x90]
7101e7f9b0  adrp x8,0x710523d000
7101e7f9b4  add x8,x8,#0x988
7101e7f9b8  stp x8,xzr,[x29, #-0x98]
7101e7f9bc  cbz x19,0x7101e7f9e0
7101e7f9c0  ldr x0,[x19, #0x18]
7101e7f9c4  adrp x8,0x710523d000
7101e7f9c8  add x8,x8,#0x9a8
7101e7f9cc  stp x8,xzr,[x19, #0x10]
7101e7f9d0  cbz x0,0x7101e7f9d8
7101e7f9d4  bl 0x710392eb40
7101e7f9d8  mov x0,x19
7101e7f9dc  bl 0x710392eb40
7101e7f9e0  ldur x0,[x29, #-0x80]
7101e7f9e4  adrp x8,0x710523d000
7101e7f9e8  add x8,x8,#0x9c8
7101e7f9ec  stp x8,xzr,[x29, #-0x88]
7101e7f9f0  cbz x0,0x7101e7f9f8
7101e7f9f4  bl 0x710392eb40
7101e7f9f8  ldr x8,[x24]
7101e7f9fc  ldr x19,[x8, #0x20]
7101e7fa00  add x21,x8,#0x18
7101e7fa04  str x8,[sp, #0x58]
7101e7fa08  cbz x19,0x7101e7fa30
7101e7fa0c  sub x8,x19,#0x1
7101e7fa10  ands x9,x8,x19
7101e7fa14  b.eq 0x7101e7fa34
7101e7fa18  cmp x19,x20
7101e7fa1c  mov x11,x20
7101e7fa20  b.hi 0x7101e7fa38
7101e7fa24  udiv x10,x20,x19
7101e7fa28  msub x11,x10,x19,x20
7101e7fa2c  b 0x7101e7fa38
7101e7fa30  b 0x7101e7fb58
7101e7fa34  and x11,x8,x20
7101e7fa38  ldr x10,[x21]
7101e7fa3c  ldr x12,[x10, x11, LSL #0x3]
7101e7fa40  cbz x12,0x7101e7fac0
7101e7fa44  ldr x12,[x12]
7101e7fa48  cbz x12,0x7101e7fac0
7101e7fa4c  cbz x9,0x7101e7fa90
7101e7fa50  ldr x13,[x12, #0x8]
7101e7fa54  cmp x13,x20
7101e7fa58  b.ne 0x7101e7fa6c
7101e7fa5c  ldrb w13,[x12, #0x10]
7101e7fa60  cmp w13,w28, UXTB 
7101e7fa64  b.ne 0x7101e7fa84
7101e7fa68  b 0x7101e7fd94
7101e7fa6c  cmp x13,x19
7101e7fa70  b.cc 0x7101e7fa7c
7101e7fa74  udiv x14,x13,x19
7101e7fa78  msub x13,x14,x19,x13
7101e7fa7c  cmp x13,x11
7101e7fa80  b.ne 0x7101e7fac0
7101e7fa84  ldr x12,[x12]
7101e7fa88  cbnz x12,0x7101e7fa50
7101e7fa8c  b 0x7101e7fac0
7101e7fa90  ldr x13,[x12, #0x8]
7101e7fa94  and x14,x13,x8
7101e7fa98  cmp x13,x20
7101e7fa9c  ccmp x14,x11,#0x4,ne
7101e7faa0  b.ne 0x7101e7fac0
7101e7faa4  cmp x13,x20
7101e7faa8  b.ne 0x7101e7fab8
7101e7faac  ldrb w13,[x12, #0x10]
7101e7fab0  cmp w13,w28, UXTB 
7101e7fab4  b.eq 0x7101e7fd94
7101e7fab8  ldr x12,[x12]
7101e7fabc  cbnz x12,0x7101e7fa90
7101e7fac0  cbz x9,0x7101e7fb4c
7101e7fac4  cmp x19,x20
7101e7fac8  mov x24,x20
7101e7facc  b.hi 0x7101e7fad8
7101e7fad0  udiv x11,x20,x19
7101e7fad4  msub x24,x11,x19,x20
7101e7fad8  ldr x10,[x10, x24, LSL #0x3]
7101e7fadc  cbz x10,0x7101e7fb58
7101e7fae0  cbz x9,0x7101e7fb20
7101e7fae4  ldr x10,[x10]
7101e7fae8  cbz x10,0x7101e7fb58
7101e7faec  ldr x8,[x10, #0x8]
7101e7faf0  cmp x8,x20
7101e7faf4  b.eq 0x7101e7fb10
7101e7faf8  cmp x8,x19
7101e7fafc  b.cc 0x7101e7fb08
7101e7fb00  udiv x9,x8,x19
7101e7fb04  msub x8,x9,x19,x8
7101e7fb08  cmp x8,x24
7101e7fb0c  b.ne 0x7101e7fb58
7101e7fb10  ldrb w8,[x10, #0x10]
7101e7fb14  cmp w8,w28, UXTB 
7101e7fb18  b.ne 0x7101e7fae4
7101e7fb1c  b 0x7101e7fd94
7101e7fb20  ldr x10,[x10]
7101e7fb24  cbz x10,0x7101e7fb58
7101e7fb28  ldr x9,[x10, #0x8]
7101e7fb2c  and x11,x9,x8
7101e7fb30  cmp x9,x20
7101e7fb34  ccmp x11,x24,#0x4,ne
7101e7fb38  b.ne 0x7101e7fb58
7101e7fb3c  ldrb w9,[x10, #0x10]
7101e7fb40  cmp w9,w28, UXTB 
7101e7fb44  b.ne 0x7101e7fb20
7101e7fb48  b 0x7101e7fd94
7101e7fb4c  and x24,x8,x20
7101e7fb50  ldr x10,[x10, x24, LSL #0x3]
7101e7fb54  cbnz x10,0x7101e7fae0
7101e7fb58  mov w0,#0x10
7101e7fb5c  mov w1,#0x40
7101e7fb60  bl 0x710392e290
7101e7fb64  mov x25,x0
7101e7fb68  cbnz x0,0x7101e7fbb4
7101e7fb6c  adrp x8,0x7105332000
7101e7fb70  ldr x0,[x8, #0xf00]
7101e7fb74  cbz x0,0x7101e7fbb0
7101e7fb78  mov w8,#0x40
7101e7fb7c  str wzr,[sp, #0x80]
7101e7fb80  add x1,sp,#0x80
7101e7fb84  str x8,[sp, #0xa50]
7101e7fb88  ldr x8,[x0]
7101e7fb8c  ldr x8,[x8, #0x30]
7101e7fb90  add x2,sp,#0xa50
7101e7fb94  blr x8
7101e7fb98  tbz w0,#0x0,0x7101e7fbb0
7101e7fb9c  mov w0,#0x10
7101e7fba0  mov w1,#0x40
7101e7fba4  bl 0x710392e290
7101e7fba8  mov x25,x0
7101e7fbac  cbnz x0,0x7101e7fbb4
7101e7fbb0  mov x25,xzr
7101e7fbb4  stp xzr,xzr,[x25, #0x28]
7101e7fbb8  orr w8,wzr,#0x3f800000
7101e7fbbc  stp xzr,xzr,[x25, #0x18]
7101e7fbc0  strb w28,[x25, #0x10]
7101e7fbc4  str w8,[x25, #0x38]
7101e7fbc8  stp xzr,x20,[x25]
7101e7fbcc  ldr x9,[sp, #0x58]
7101e7fbd0  ldr x8,[x9, #0x30]
7101e7fbd4  add x8,x8,#0x1
7101e7fbd8  ucvtf s0,x8
7101e7fbdc  ldr s1,[x9, #0x38]
7101e7fbe0  cbz x19,0x7101e7fbf4
7101e7fbe4  ucvtf s2,x19
7101e7fbe8  fmul s2,s1,s2
7101e7fbec  fcmp s2,s0
7101e7fbf0  b.pl 0x7101e7fd18
7101e7fbf4  lsl x8,x19,#0x1
7101e7fbf8  cmp x19,#0x3
7101e7fbfc  b.cc 0x7101e7fc10
7101e7fc00  sub x9,x19,#0x1
7101e7fc04  tst x9,x19
7101e7fc08  cset w9,ne
7101e7fc0c  b 0x7101e7fc14
7101e7fc10  mov w9,#0x1
7101e7fc14  fdiv s0,s0,s1
7101e7fc18  orr x8,x9,x8
7101e7fc1c  fcvtpu x9,s0
7101e7fc20  cmp x8,x9
7101e7fc24  csel x27,x9,x8,cc
7101e7fc28  subs x8,x27,#0x1
7101e7fc2c  b.ne 0x7101e7fc38
7101e7fc30  mov w27,#0x2
7101e7fc34  b 0x7101e7fc4c
7101e7fc38  tst x8,x27
7101e7fc3c  b.eq 0x7101e7fc4c
7101e7fc40  mov x0,x27
7101e7fc44  bl 0x71039c26e0
7101e7fc48  mov x27,x0
7101e7fc4c  ldr x8,[sp, #0x58]
7101e7fc50  ldr x19,[x8, #0x20]
7101e7fc54  cmp x27,x19
7101e7fc58  b.ls 0x7101e7fc6c
7101e7fc5c  mov x0,x21
7101e7fc60  mov x1,x27
7101e7fc64  bl 0x7101e850c0
7101e7fc68  b 0x7101e7fce4
7101e7fc6c  b.cs 0x7101e7fce4
7101e7fc70  cmp x19,#0x3
7101e7fc74  b.cc 0x7101e7fc88
7101e7fc78  sub x8,x19,#0x1
7101e7fc7c  tst x8,x19
7101e7fc80  cset w8,eq
7101e7fc84  b 0x7101e7fc8c
7101e7fc88  mov w8,wzr
7101e7fc8c  ldr x10,[sp, #0x58]
7101e7fc90  ldr x9,[x10, #0x30]
7101e7fc94  ldr s1,[x10, #0x38]
7101e7fc98  ucvtf s0,x9
7101e7fc9c  fdiv s0,s0,s1
7101e7fca0  fcvtpu x0,s0
7101e7fca4  cbz w8,0x7101e7fcc8
7101e7fca8  sub x8,x0,#0x1
7101e7fcac  clz x8,x8
7101e7fcb0  neg x8,x8
7101e7fcb4  mov w9,#0x1
7101e7fcb8  lsl x8,x9,x8
7101e7fcbc  cmp x0,#0x2
7101e7fcc0  csel x0,x0,x8,cc
7101e7fcc4  b 0x7101e7fccc
7101e7fcc8  bl 0x71039c26e0
7101e7fccc  cmp x27,x0
7101e7fcd0  csel x1,x0,x27,cc
7101e7fcd4  cmp x1,x19
7101e7fcd8  b.cs 0x7101e7fce4
7101e7fcdc  mov x0,x21
7101e7fce0  b 0x7101e7fc64
7101e7fce4  ldr x8,[sp, #0x58]
7101e7fce8  ldr x19,[x8, #0x20]
7101e7fcec  sub x8,x19,#0x1
7101e7fcf0  tst x8,x19
7101e7fcf4  b.eq 0x7101e7fd08
7101e7fcf8  cmp x19,x20
7101e7fcfc  b.ls 0x7101e7fd10
7101e7fd00  mov x24,x20
7101e7fd04  b 0x7101e7fd18
7101e7fd08  and x24,x8,x20
7101e7fd0c  b 0x7101e7fd18
7101e7fd10  udiv x8,x20,x19
7101e7fd14  msub x24,x8,x19,x20
7101e7fd18  ldr x9,[x21]
7101e7fd1c  ldr x8,[x9, x24, LSL #0x3]
7101e7fd20  cbz x8,0x7101e7fd30
7101e7fd24  ldr x9,[x8]
7101e7fd28  str x9,[x25]
7101e7fd2c  b 0x7101e7fd7c
7101e7fd30  ldr x8,[sp, #0x58]
7101e7fd34  ldr x10,[x8, #0x28]!
7101e7fd38  str x10,[x25]
7101e7fd3c  str x25,[x8]
7101e7fd40  str x8,[x9, x24, LSL #0x3]
7101e7fd44  ldr x8,[x25]
7101e7fd48  cbz x8,0x7101e7fd80
7101e7fd4c  ldr x8,[x8, #0x8]
7101e7fd50  sub x9,x19,#0x1
7101e7fd54  tst x9,x19
7101e7fd58  b.eq 0x7101e7fd70
7101e7fd5c  cmp x8,x19
7101e7fd60  b.cc 0x7101e7fd74
7101e7fd64  udiv x9,x8,x19
7101e7fd68  msub x8,x9,x19,x8
7101e7fd6c  b 0x7101e7fd74
7101e7fd70  and x8,x8,x9
7101e7fd74  ldr x9,[x21]
7101e7fd78  add x8,x9,x8, LSL #0x3
7101e7fd7c  str x25,[x8]
7101e7fd80  ldr x9,[sp, #0x58]
7101e7fd84  ldr x8,[x9, #0x30]
7101e7fd88  ldr x19,[x9, #0x20]
7101e7fd8c  add x8,x8,#0x1
7101e7fd90  str x8,[x9, #0x30]
7101e7fd94  cbz x19,0x7101e7fe50
7101e7fd98  sub x9,x19,#0x1
7101e7fd9c  ands x10,x9,x19
7101e7fda0  b.eq 0x7101e7fdbc
7101e7fda4  cmp x19,x20
7101e7fda8  mov x8,x20
7101e7fdac  b.hi 0x7101e7fdc0
7101e7fdb0  udiv x8,x20,x19
7101e7fdb4  msub x8,x8,x19,x20
7101e7fdb8  b 0x7101e7fdc0
7101e7fdbc  and x8,x9,x20
7101e7fdc0  ldr x11,[x21]
7101e7fdc4  ldr x11,[x11, x8, LSL #0x3]
7101e7fdc8  cbz x11,0x7101e7fe50
7101e7fdcc  ldr x25,[x11]
7101e7fdd0  add x21,sp,#0xa50
7101e7fdd4  cbz x25,0x7101e7fe58
7101e7fdd8  cbz x10,0x7101e7fe1c
7101e7fddc  ldr x9,[x25, #0x8]
7101e7fde0  cmp x9,x20
7101e7fde4  b.ne 0x7101e7fdf8
7101e7fde8  ldrb w9,[x25, #0x10]
7101e7fdec  cmp w9,w28, UXTB 
7101e7fdf0  b.ne 0x7101e7fe10
7101e7fdf4  b 0x7101e7fe58
7101e7fdf8  cmp x9,x19
7101e7fdfc  b.cc 0x7101e7fe08
7101e7fe00  udiv x10,x9,x19
7101e7fe04  msub x9,x10,x19,x9
7101e7fe08  cmp x9,x8
7101e7fe0c  b.ne 0x7101e7f338
7101e7fe10  ldr x25,[x25]
7101e7fe14  cbnz x25,0x7101e7fddc
7101e7fe18  b 0x7101e7fe58
7101e7fe1c  ldr x10,[x25, #0x8]
7101e7fe20  and x11,x10,x9
7101e7fe24  cmp x10,x20
7101e7fe28  ccmp x11,x8,#0x4,ne
7101e7fe2c  b.ne 0x7101e7f338
7101e7fe30  cmp x10,x20
7101e7fe34  b.ne 0x7101e7fe44
7101e7fe38  ldrb w10,[x25, #0x10]
7101e7fe3c  cmp w10,w28, UXTB 
7101e7fe40  b.eq 0x7101e7fe58
7101e7fe44  ldr x25,[x25]
7101e7fe48  cbnz x25,0x7101e7fe1c
7101e7fe4c  b 0x7101e7fe58
7101e7fe50  mov x25,xzr
7101e7fe54  add x21,sp,#0xa50
7101e7fe58  ldr x8,[x23, #0x170]
7101e7fe5c  ldr x8,[x8]
7101e7fe60  ldr x11,[x8, #0x30]
7101e7fe64  sub x10,x11,#0x1
7101e7fe68  ands x9,x10,x11
7101e7fe6c  b.eq 0x7101e7fe88
7101e7fe70  cmp x11,x20
7101e7fe74  mov x10,x20
7101e7fe78  b.hi 0x7101e7fe8c
7101e7fe7c  udiv x10,x20,x11
7101e7fe80  msub x10,x10,x11,x20
7101e7fe84  b 0x7101e7fe8c
7101e7fe88  and x10,x10,x20
7101e7fe8c  ldr x8,[x8, #0x28]
7101e7fe90  ldr x8,[x8, x10, LSL #0x3]
7101e7fe94  ldr x8,[x8]
7101e7fe98  cbnz x9,0x7101e7fea4
7101e7fe9c  b 0x7101e7fec4
7101e7fea0  ldr x8,[x8]
7101e7fea4  ldr x9,[x8, #0x8]
7101e7fea8  cmp x9,x20
7101e7feac  b.ne 0x7101e7fea0
7101e7feb0  ldrb w9,[x8, #0x10]
7101e7feb4  cmp w9,w28, UXTB 
7101e7feb8  b.ne 0x7101e7fea0
7101e7febc  b 0x7101e7fedc
7101e7fec0  ldr x8,[x8]
7101e7fec4  ldr x9,[x8, #0x8]
7101e7fec8  cmp x9,x20
7101e7fecc  b.ne 0x7101e7fec0
7101e7fed0  ldrb w9,[x8, #0x10]
7101e7fed4  cmp w9,w28, UXTB 
7101e7fed8  b.ne 0x7101e7fec0
7101e7fedc  ldp x24,x8,[x8, #0x20]
7101e7fee0  cmp x24,x8
7101e7fee4  str x8,[sp, #0x78]
7101e7fee8  b.eq 0x7101e80990
7101e7feec  ldr x8,[sp, #0x58]
7101e7fef0  add x8,x8,#0x40
7101e7fef4  str x8,[sp, #0x28]
7101e7fef8  add x8,x25,#0x18
7101e7fefc  stur x8,[x29, #-0x58]
7101e7ff00  lsl x8,x20,#0x8
7101e7ff04  str x8,[sp, #0x48]
7101e7ff08  add x8,x25,#0x28
7101e7ff0c  str x8,[sp, #0x30]
7101e7ff10  strb wzr,[sp, #0xa58]
7101e7ff14  str xzr,[sp, #0xa50]
7101e7ff18  ldrb w2,[x24]
7101e7ff1c  cmp w2,w28, UXTB 
7101e7ff20  b.cs 0x7101e7ff88
7101e7ff24  mov w1,w2
7101e7ff28  ldr w2,[sp, #0x64]
7101e7ff2c  add x8,sp,#0x80
7101e7ff30  adrp x0,0x7104433000
7101e7ff34  add x0,x0,#0x6fd
7101e7ff38  bl 0x71003a4ca0
7101e7ff3c  mov x8,xzr
7101e7ff40  adrp x28,0x710523d000
7101e7ff44  add x28,x28,#0x988
7101e7ff48  mov w12,#0x89
7101e7ff4c  add x9,x26,x8
7101e7ff50  ldrb w11,[x9]
7101e7ff54  cbz w11,0x7101e7fff8
7101e7ff58  add x10,x21,x8
7101e7ff5c  strb w11,[x10, #0x8]
7101e7ff60  ldrb w11,[x9, #0x1]
7101e7ff64  cbz w11,0x7101e7ffec
7101e7ff68  ldrb w9,[x9, #0x2]
7101e7ff6c  strb w11,[x10, #0x9]
7101e7ff70  cbz w9,0x7101e7fff4
7101e7ff74  add x8,x8,#0x3
7101e7ff78  cmp w8,#0x3f
7101e7ff7c  strb w9,[x10, #0xa]
7101e7ff80  b.cc 0x7101e7ff4c
7101e7ff84  b 0x7101e7fff8
7101e7ff88  b.ls 0x7101e80980
7101e7ff8c  ldr w1,[sp, #0x64]
7101e7ff90  add x8,sp,#0x80
7101e7ff94  adrp x0,0x7104433000
7101e7ff98  add x0,x0,#0x6fd
7101e7ff9c  bl 0x71003a4ca0
7101e7ffa0  mov x8,xzr
7101e7ffa4  adrp x28,0x710523d000
7101e7ffa8  add x28,x28,#0x988
7101e7ffac  mov w12,#0x89
7101e7ffb0  add x9,x26,x8
7101e7ffb4  ldrb w11,[x9]
7101e7ffb8  cbz w11,0x7101e80044
7101e7ffbc  add x10,x21,x8
7101e7ffc0  strb w11,[x10, #0x8]
7101e7ffc4  ldrb w11,[x9, #0x1]
7101e7ffc8  cbz w11,0x7101e80038
7101e7ffcc  ldrb w9,[x9, #0x2]
7101e7ffd0  strb w11,[x10, #0x9]
7101e7ffd4  cbz w9,0x7101e80040
7101e7ffd8  add x8,x8,#0x3
7101e7ffdc  cmp w8,#0x3f
7101e7ffe0  strb w9,[x10, #0xa]
7101e7ffe4  b.cc 0x7101e7ffb0
7101e7ffe8  b 0x7101e80044
7101e7ffec  add x8,x8,#0x1
7101e7fff0  b 0x7101e7fff8
7101e7fff4  add x8,x8,#0x2
7101e7fff8  add x9,x21,#0x8
7101e7fffc  strb wzr,[x9, w8, UXTW ]
7101e80000  str w8,[sp, #0xa54]
7101e80004  ldrb w8,[sp, #0xa58]
7101e80008  mov w9,#0x9dc5
7101e8000c  movk w9,#0x811c, LSL #16
7101e80010  cbz w8,0x7101e80080
7101e80014  ldr x10,[sp, #0x50]
7101e80018  mov w9,#0x9dc5
7101e8001c  movk w9,#0x811c, LSL #16
7101e80020  mul w9,w9,w12
7101e80024  and w8,w8,#0xff
7101e80028  eor w9,w9,w8
7101e8002c  ldrb w8,[x10], #0x1
7101e80030  cbnz w8,0x7101e80020
7101e80034  b 0x7101e80080
7101e80038  add x8,x8,#0x1
7101e8003c  b 0x7101e80044
7101e80040  add x8,x8,#0x2
7101e80044  add x9,x21,#0x8
7101e80048  strb wzr,[x9, w8, UXTW ]
7101e8004c  str w8,[sp, #0xa54]
7101e80050  ldrb w8,[sp, #0xa58]
7101e80054  mov w9,#0x9dc5
7101e80058  movk w9,#0x811c, LSL #16
7101e8005c  cbz w8,0x7101e80080
7101e80060  ldr x10,[sp, #0x50]
7101e80064  mov w9,#0x9dc5
7101e80068  movk w9,#0x811c, LSL #16
7101e8006c  mul w9,w9,w12
7101e80070  and w8,w8,#0xff
7101e80074  eor w9,w9,w8
7101e80078  ldrb w8,[x10], #0x1
7101e8007c  cbnz w8,0x7101e8006c
7101e80080  ldr x1,[sp, #0x70]
7101e80084  sub x8,x29,#0x88
7101e80088  mov x0,x22
7101e8008c  str w9,[sp, #0xa50]
7101e80090  bl 0x7103776640
7101e80094  ldr x9,[sp, #0x1418]
7101e80098  ldr x8,[sp, #0x1420]
7101e8009c  cmp x9,x8
7101e800a0  b.eq 0x7101e8012c
7101e800a4  ldr x10,[x9, #0x8]
7101e800a8  ldr x11,[x10, #0x8]
7101e800ac  ldur x10,[x29, #-0x80]
7101e800b0  ldr x10,[x10, #0x8]
7101e800b4  cmp x11,x10
7101e800b8  mov x1,x9
7101e800bc  b.eq 0x7101e800e4
7101e800c0  add x11,x9,#0x10
7101e800c4  cmp x8,x11
7101e800c8  b.eq 0x7101e80138
7101e800cc  ldr x12,[x11, #0x8]
7101e800d0  add x11,x11,#0x10
7101e800d4  ldr x12,[x12, #0x8]
7101e800d8  cmp x12,x10
7101e800dc  b.ne 0x7101e800c4
7101e800e0  sub x1,x11,#0x10
7101e800e4  cmp x8,x1
7101e800e8  b.eq 0x7101e80138
7101e800ec  ldrb w8,[x24]
7101e800f0  mov x0,x26
7101e800f4  strb w8,[sp, #0x80]
7101e800f8  bl 0x7103776390
7101e800fc  ldrb w20,[sp, #0x80]
7101e80100  ldr x19,[x25, #0x20]
7101e80104  cbz x19,0x7101e80364
7101e80108  sub x9,x19,#0x1
7101e8010c  ands x10,x9,x19
7101e80110  b.eq 0x7101e802e4
7101e80114  cmp x19,x20
7101e80118  mov x28,x20
7101e8011c  b.hi 0x7101e802e8
7101e80120  udiv x8,x20,x19
7101e80124  msub x28,x8,x19,x20
7101e80128  b 0x7101e802e8
7101e8012c  mov x1,x9
7101e80130  cmp x8,x1
7101e80134  b.ne 0x7101e800ec
7101e80138  ldr x10,[sp, #0x1428]
7101e8013c  cmp x8,x10
7101e80140  b.cs 0x7101e80198
7101e80144  sub x9,x29,#0x88
7101e80148  cmp x8,x9
7101e8014c  stp x28,xzr,[x8]
7101e80150  b.eq 0x7101e80188
7101e80154  ldur x9,[x29, #-0x80]
7101e80158  stur xzr,[x29, #-0x80]
7101e8015c  ldr x19,[x8, #0x8]
7101e80160  str x9,[x8, #0x8]
7101e80164  cbz x19,0x7101e80188
7101e80168  ldr x0,[x19, #0x18]
7101e8016c  adrp x8,0x710523d000
7101e80170  add x8,x8,#0x9a8
7101e80174  stp x8,xzr,[x19, #0x10]
7101e80178  cbz x0,0x7101e80180
7101e8017c  bl 0x710392eb40
7101e80180  mov x0,x19
7101e80184  bl 0x710392eb40
7101e80188  ldr x8,[sp, #0x1420]
7101e8018c  add x8,x8,#0x10
7101e80190  str x8,[sp, #0x1420]
7101e80194  b 0x7101e804b4
7101e80198  sub x8,x8,x9
7101e8019c  asr x19,x8,#0x4
7101e801a0  add x8,x19,#0x1
7101e801a4  lsr x11,x8,#0x3c
7101e801a8  cbnz x11,0x7101e81b0c
7101e801ac  sub x9,x10,x9
7101e801b0  asr x10,x9,#0x4
7101e801b4  orr x11,xzr,#0x7fffffffffffffe
7101e801b8  cmp x10,x11
7101e801bc  b.hi 0x7101e801dc
7101e801c0  asr x9,x9,#0x3
7101e801c4  cmp x9,x8
7101e801c8  csel x21,x8,x9,cc
7101e801cc  cbz x21,0x7101e80238
7101e801d0  lsr x8,x21,#0x3c
7101e801d4  cbz x8,0x7101e801e0
7101e801d8  b 0x7101e81b08
7101e801dc  orr x21,xzr,#0xfffffffffffffff
7101e801e0  lsl x8,x21,#0x4
7101e801e4  cmp x8,#0x0
7101e801e8  csinc x27,x8,xzr,ne
7101e801ec  mov w0,#0x10
7101e801f0  mov x1,x27
7101e801f4  bl 0x710392e290
7101e801f8  cbnz x0,0x7101e8023c
7101e801fc  adrp x8,0x7105332000
7101e80200  ldr x0,[x8, #0xf00]
7101e80204  cbz x0,0x7101e80238
7101e80208  stur wzr,[x29, #-0x98]
7101e8020c  str x27,[sp, #0x80]
7101e80210  ldr x8,[x0]
7101e80214  ldr x8,[x8, #0x30]
7101e80218  sub x1,x29,#0x98
7101e8021c  add x2,sp,#0x80
7101e80220  blr x8
7101e80224  tbz w0,#0x0,0x7101e80238
7101e80228  mov w0,#0x10
7101e8022c  mov x1,x27
7101e80230  bl 0x710392e290
7101e80234  cbnz x0,0x7101e8023c
7101e80238  mov x0,xzr
7101e8023c  add x20,x0,x19, LSL #0x4
7101e80240  mov x8,x20
7101e80244  sub x9,x29,#0x88
7101e80248  str x28,[x20]
7101e8024c  cmp x20,x9
7101e80250  str xzr,[x8, #0x8]!
7101e80254  b.eq 0x7101e80264
7101e80258  ldur x9,[x29, #-0x80]
7101e8025c  stur xzr,[x29, #-0x80]
7101e80260  str x9,[x8]
7101e80264  ldr x27,[sp, #0x1418]
7101e80268  ldr x8,[sp, #0x1420]
7101e8026c  add x21,x0,x21, LSL #0x4
7101e80270  add x23,x20,#0x10
7101e80274  cmp x8,x27
7101e80278  b.eq 0x7101e80470
7101e8027c  mov x9,x20
7101e80280  sub x22,x8,#0x10
7101e80284  cmp x8,x9
7101e80288  str x28,[x20, #-0x10]!
7101e8028c  stur xzr,[x9, #-0x8]
7101e80290  b.eq 0x7101e802c8
7101e80294  ldur x10,[x8, #-0x8]
7101e80298  stur xzr,[x8, #-0x8]
7101e8029c  ldur x19,[x9, #-0x8]
7101e802a0  stur x10,[x9, #-0x8]
7101e802a4  cbz x19,0x7101e802c8
7101e802a8  ldr x0,[x19, #0x18]
7101e802ac  adrp x8,0x710523d000
7101e802b0  add x8,x8,#0x9a8
7101e802b4  stp x8,xzr,[x19, #0x10]
7101e802b8  cbz x0,0x7101e802c0
7101e802bc  bl 0x710392eb40
7101e802c0  mov x0,x19
7101e802c4  bl 0x710392eb40
7101e802c8  cmp x27,x22
7101e802cc  mov x8,x22
7101e802d0  b.ne 0x7101e8027c
7101e802d4  ldr x28,[sp, #0x1418]
7101e802d8  ldr x27,[sp, #0x1420]
7101e802dc  ldr x22,[sp, #0x38]
7101e802e0  b 0x7101e80474
7101e802e4  and x28,x9,x20
7101e802e8  ldur x8,[x29, #-0x58]
7101e802ec  ldr x8,[x8]
7101e802f0  ldr x8,[x8, x28, LSL #0x3]
7101e802f4  cbz x8,0x7101e80364
7101e802f8  cbz x10,0x7101e80338
7101e802fc  ldr x8,[x8]
7101e80300  cbz x8,0x7101e80364
7101e80304  ldr x9,[x8, #0x8]
7101e80308  cmp x9,x20
7101e8030c  b.eq 0x7101e80328
7101e80310  cmp x9,x19
7101e80314  b.cc 0x7101e80320
7101e80318  udiv x10,x9,x19
7101e8031c  msub x9,x10,x19,x9
7101e80320  cmp x9,x28
7101e80324  b.ne 0x7101e80364
7101e80328  ldrb w9,[x8, #0x10]
7101e8032c  cmp w9,w20
7101e80330  b.ne 0x7101e802fc
7101e80334  b 0x7101e8077c
7101e80338  ldr x8,[x8]
7101e8033c  cbz x8,0x7101e80364
7101e80340  ldr x10,[x8, #0x8]
7101e80344  and x11,x10,x9
7101e80348  cmp x10,x20
7101e8034c  ccmp x11,x28,#0x4,ne
7101e80350  b.ne 0x7101e80364
7101e80354  ldrb w10,[x8, #0x10]
7101e80358  cmp w10,w20
7101e8035c  b.ne 0x7101e80338
7101e80360  b 0x7101e8077c
7101e80364  mov w0,#0x10
7101e80368  mov w1,#0x28
7101e8036c  bl 0x710392e290
7101e80370  mov x27,x0
7101e80374  cbnz x0,0x7101e803c0
7101e80378  adrp x8,0x7105332000
7101e8037c  ldr x0,[x8, #0xf00]
7101e80380  cbz x0,0x7101e803bc
7101e80384  mov w8,#0x28
7101e80388  stur wzr,[x29, #-0xa8]
7101e8038c  sub x1,x29,#0xa8
7101e80390  stur x8,[x29, #-0x98]
7101e80394  ldr x8,[x0]
7101e80398  ldr x8,[x8, #0x30]
7101e8039c  sub x2,x29,#0x98
7101e803a0  blr x8
7101e803a4  tbz w0,#0x0,0x7101e803bc
7101e803a8  mov w0,#0x10
7101e803ac  mov w1,#0x28
7101e803b0  bl 0x710392e290
7101e803b4  mov x27,x0
7101e803b8  cbnz x0,0x7101e803c0
7101e803bc  mov x27,xzr
7101e803c0  mov x8,x27
7101e803c4  adrp x9,0x710523d000
7101e803c8  add x9,x9,#0x988
7101e803cc  str x9,[x8, #0x18]!
7101e803d0  cmp x26,x8
7101e803d4  sturb w20,[x8, #-0x8]
7101e803d8  str xzr,[x8, #0x8]
7101e803dc  b.eq 0x7101e803ec
7101e803e0  ldr x8,[sp, #0x90]
7101e803e4  str xzr,[sp, #0x90]
7101e803e8  str x8,[x27, #0x20]
7101e803ec  stp xzr,x20,[x27]
7101e803f0  ldr x8,[x25, #0x30]
7101e803f4  add x8,x8,#0x1
7101e803f8  ucvtf s0,x8
7101e803fc  ldr s1,[x25, #0x38]
7101e80400  cbz x19,0x7101e80414
7101e80404  ucvtf s2,x19
7101e80408  fmul s2,s1,s2
7101e8040c  fcmp s2,s0
7101e80410  b.pl 0x7101e8069c
7101e80414  lsl x8,x19,#0x1
7101e80418  cmp x19,#0x3
7101e8041c  b.cc 0x7101e80430
7101e80420  sub x9,x19,#0x1
7101e80424  tst x9,x19
7101e80428  cset w9,ne
7101e8042c  b 0x7101e80434
7101e80430  mov w9,#0x1
7101e80434  fdiv s0,s0,s1
7101e80438  fcvtpu x10,s0
7101e8043c  ldur x0,[x29, #-0x58]
7101e80440  orr x8,x9,x8
7101e80444  cmp x8,x10
7101e80448  csel x1,x10,x8,cc
7101e8044c  bl 0x7101e84a10
7101e80450  ldr x19,[x25, #0x20]
7101e80454  sub x8,x19,#0x1
7101e80458  tst x8,x19
7101e8045c  b.eq 0x7101e80684
7101e80460  cmp x19,x20
7101e80464  b.ls 0x7101e80694
7101e80468  mov x28,x20
7101e8046c  b 0x7101e8069c
7101e80470  mov x28,x27
7101e80474  cmp x27,x28
7101e80478  str x20,[sp, #0x1418]
7101e8047c  str x23,[sp, #0x1420]
7101e80480  str x21,[sp, #0x1428]
7101e80484  b.eq 0x7101e804a0
7101e80488  ldr x8,[x27, #-0x10]!
7101e8048c  ldr x8,[x8]
7101e80490  mov x0,x27
7101e80494  blr x8
7101e80498  cmp x28,x27
7101e8049c  b.ne 0x7101e80488
7101e804a0  ldr x23,[sp, #0x40]
7101e804a4  cbz x28,0x7101e804b0
7101e804a8  mov x0,x28
7101e804ac  bl 0x710392eb40
7101e804b0  ldr x8,[sp, #0x1420]
7101e804b4  sub x1,x8,#0x10
7101e804b8  ldrb w8,[x24]
7101e804bc  mov x0,x26
7101e804c0  strb w8,[sp, #0x80]
7101e804c4  bl 0x7103776390
7101e804c8  ldrb w20,[sp, #0x80]
7101e804cc  ldr x19,[x25, #0x20]
7101e804d0  cbz x19,0x7101e80578
7101e804d4  sub x9,x19,#0x1
7101e804d8  ands x10,x9,x19
7101e804dc  b.eq 0x7101e804f8
7101e804e0  cmp x19,x20
7101e804e4  mov x28,x20
7101e804e8  b.hi 0x7101e804fc
7101e804ec  udiv x8,x20,x19
7101e804f0  msub x28,x8,x19,x20
7101e804f4  b 0x7101e804fc
7101e804f8  and x28,x9,x20
7101e804fc  ldur x8,[x29, #-0x58]
7101e80500  ldr x8,[x8]
7101e80504  ldr x8,[x8, x28, LSL #0x3]
7101e80508  cbz x8,0x7101e80578
7101e8050c  cbz x10,0x7101e8054c
7101e80510  ldr x8,[x8]
7101e80514  cbz x8,0x7101e80578
7101e80518  ldr x9,[x8, #0x8]
7101e8051c  cmp x9,x20
7101e80520  b.eq 0x7101e8053c
7101e80524  cmp x9,x19
7101e80528  b.cc 0x7101e80534
7101e8052c  udiv x10,x9,x19
7101e80530  msub x9,x10,x19,x9
7101e80534  cmp x9,x28
7101e80538  b.ne 0x7101e80578
7101e8053c  ldrb w9,[x8, #0x10]
7101e80540  cmp w9,w20
7101e80544  b.ne 0x7101e80510
7101e80548  b 0x7101e807d8
7101e8054c  ldr x8,[x8]
7101e80550  cbz x8,0x7101e80578
7101e80554  ldr x10,[x8, #0x8]
7101e80558  and x11,x10,x9
7101e8055c  cmp x10,x20
7101e80560  ccmp x11,x28,#0x4,ne
7101e80564  b.ne 0x7101e80578
7101e80568  ldrb w10,[x8, #0x10]
7101e8056c  cmp w10,w20
7101e80570  b.ne 0x7101e8054c
7101e80574  b 0x7101e807d8
7101e80578  mov w0,#0x10
7101e8057c  mov w1,#0x28
7101e80580  bl 0x710392e290
7101e80584  mov x27,x0
7101e80588  cbnz x0,0x7101e805d4
7101e8058c  adrp x8,0x7105332000
7101e80590  ldr x0,[x8, #0xf00]
7101e80594  cbz x0,0x7101e805d0
7101e80598  mov w8,#0x28
7101e8059c  stur wzr,[x29, #-0xa8]
7101e805a0  sub x1,x29,#0xa8
7101e805a4  stur x8,[x29, #-0x98]
7101e805a8  ldr x8,[x0]
7101e805ac  ldr x8,[x8, #0x30]
7101e805b0  sub x2,x29,#0x98
7101e805b4  blr x8
7101e805b8  tbz w0,#0x0,0x7101e805d0
7101e805bc  mov w0,#0x10
7101e805c0  mov w1,#0x28
7101e805c4  bl 0x710392e290
7101e805c8  mov x27,x0
7101e805cc  cbnz x0,0x7101e805d4
7101e805d0  mov x27,xzr
7101e805d4  mov x8,x27
7101e805d8  adrp x9,0x710523d000
7101e805dc  add x9,x9,#0x988
7101e805e0  str x9,[x8, #0x18]!
7101e805e4  cmp x26,x8
7101e805e8  sturb w20,[x8, #-0x8]
7101e805ec  str xzr,[x8, #0x8]
7101e805f0  b.eq 0x7101e80600
7101e805f4  ldr x8,[sp, #0x90]
7101e805f8  str xzr,[sp, #0x90]
7101e805fc  str x8,[x27, #0x20]
7101e80600  stp xzr,x20,[x27]
7101e80604  ldr x8,[x25, #0x30]
7101e80608  add x8,x8,#0x1
7101e8060c  ucvtf s0,x8
7101e80610  ldr s1,[x25, #0x38]
7101e80614  cbz x19,0x7101e80628
7101e80618  ucvtf s2,x19
7101e8061c  fmul s2,s1,s2
7101e80620  fcmp s2,s0
7101e80624  b.pl 0x7101e80700
7101e80628  lsl x8,x19,#0x1
7101e8062c  cmp x19,#0x3
7101e80630  b.cc 0x7101e80644
7101e80634  sub x9,x19,#0x1
7101e80638  tst x9,x19
7101e8063c  cset w9,ne
7101e80640  b 0x7101e80648
7101e80644  mov w9,#0x1
7101e80648  fdiv s0,s0,s1
7101e8064c  fcvtpu x10,s0
7101e80650  ldur x0,[x29, #-0x58]
7101e80654  orr x8,x9,x8
7101e80658  cmp x8,x10
7101e8065c  csel x1,x10,x8,cc
7101e80660  bl 0x7101e84a10
7101e80664  ldr x19,[x25, #0x20]
7101e80668  sub x8,x19,#0x1
7101e8066c  tst x8,x19
7101e80670  b.eq 0x7101e8068c
7101e80674  cmp x19,x20
7101e80678  b.ls 0x7101e806f8
7101e8067c  mov x28,x20
7101e80680  b 0x7101e80700
7101e80684  and x28,x8,x20
7101e80688  b 0x7101e8069c
7101e8068c  and x28,x8,x20
7101e80690  b 0x7101e80700
7101e80694  udiv x8,x20,x19
7101e80698  msub x28,x8,x19,x20
7101e8069c  ldur x8,[x29, #-0x58]
7101e806a0  ldr x9,[x8]
7101e806a4  ldr x8,[x9, x28, LSL #0x3]
7101e806a8  cbz x8,0x7101e806b8
7101e806ac  ldr x9,[x8]
7101e806b0  str x9,[x27]
7101e806b4  b 0x7101e8076c
7101e806b8  ldr x10,[sp, #0x30]
7101e806bc  ldr x8,[x10]
7101e806c0  str x8,[x27]
7101e806c4  str x27,[x10]
7101e806c8  str x10,[x9, x28, LSL #0x3]
7101e806cc  ldr x8,[x27]
7101e806d0  cbz x8,0x7101e80770
7101e806d4  ldr x8,[x8, #0x8]
7101e806d8  sub x9,x19,#0x1
7101e806dc  tst x9,x19
7101e806e0  b.eq 0x7101e8075c
7101e806e4  cmp x8,x19
7101e806e8  b.cc 0x7101e80760
7101e806ec  udiv x9,x8,x19
7101e806f0  msub x8,x9,x19,x8
7101e806f4  b 0x7101e80760
7101e806f8  udiv x8,x20,x19
7101e806fc  msub x28,x8,x19,x20
7101e80700  ldur x8,[x29, #-0x58]
7101e80704  ldr x9,[x8]
7101e80708  ldr x8,[x9, x28, LSL #0x3]
7101e8070c  cbz x8,0x7101e8071c
7101e80710  ldr x9,[x8]
7101e80714  str x9,[x27]
7101e80718  b 0x7101e807c8
7101e8071c  ldr x10,[sp, #0x30]
7101e80720  ldr x8,[x10]
7101e80724  str x8,[x27]
7101e80728  str x27,[x10]
7101e8072c  str x10,[x9, x28, LSL #0x3]
7101e80730  ldr x8,[x27]
7101e80734  cbz x8,0x7101e807cc
7101e80738  ldr x8,[x8, #0x8]
7101e8073c  sub x9,x19,#0x1
7101e80740  tst x9,x19
7101e80744  b.eq 0x7101e807b8
7101e80748  cmp x8,x19
7101e8074c  b.cc 0x7101e807bc
7101e80750  udiv x9,x8,x19
7101e80754  msub x8,x9,x19,x8
7101e80758  b 0x7101e807bc
7101e8075c  and x8,x8,x9
7101e80760  ldur x9,[x29, #-0x58]
7101e80764  ldr x9,[x9]
7101e80768  add x8,x9,x8, LSL #0x3
7101e8076c  str x27,[x8]
7101e80770  ldr x8,[x25, #0x30]
7101e80774  add x8,x8,#0x1
7101e80778  str x8,[x25, #0x30]
7101e8077c  ldr x19,[sp, #0x90]
7101e80780  ldr x28,[sp, #0x68]
7101e80784  adrp x8,0x710523d000
7101e80788  add x8,x8,#0x988
7101e8078c  stp x8,xzr,[sp, #0x88]
7101e80790  cbz x19,0x7101e8094c
7101e80794  ldr x0,[x19, #0x18]
7101e80798  adrp x8,0x710523d000
7101e8079c  add x8,x8,#0x9a8
7101e807a0  stp x8,xzr,[x19, #0x10]
7101e807a4  cbz x0,0x7101e807ac
7101e807a8  bl 0x710392eb40
7101e807ac  mov x0,x19
7101e807b0  bl 0x710392eb40
7101e807b4  b 0x7101e8094c
7101e807b8  and x8,x8,x9
7101e807bc  ldur x9,[x29, #-0x58]
7101e807c0  ldr x9,[x9]
7101e807c4  add x8,x9,x8, LSL #0x3
7101e807c8  str x27,[x8]
7101e807cc  ldr x8,[x25, #0x30]
7101e807d0  add x8,x8,#0x1
7101e807d4  str x8,[x25, #0x30]
7101e807d8  ldr x19,[sp, #0x90]
7101e807dc  ldr x20,[sp, #0x58]
7101e807e0  adrp x8,0x710523d000
7101e807e4  add x8,x8,#0x988
7101e807e8  stp x8,xzr,[sp, #0x88]
7101e807ec  cbz x19,0x7101e80810
7101e807f0  ldr x0,[x19, #0x18]
7101e807f4  adrp x8,0x710523d000
7101e807f8  add x8,x8,#0x9a8
7101e807fc  stp x8,xzr,[x19, #0x10]
7101e80800  cbz x0,0x7101e80808
7101e80804  bl 0x710392eb40
7101e80808  mov x0,x19
7101e8080c  bl 0x710392eb40
7101e80810  ldrb w8,[x24]
7101e80814  ldr x9,[sp, #0x48]
7101e80818  orr w21,w9,w8
7101e8081c  ldp x9,x8,[x20, #0x48]
7101e80820  cmp x9,x8
7101e80824  b.cs 0x7101e80840
7101e80828  strh w21,[x9]
7101e8082c  ldr x8,[x20, #0x48]
7101e80830  ldr x28,[sp, #0x68]
7101e80834  add x8,x8,#0x2
7101e80838  str x8,[x20, #0x48]
7101e8083c  b 0x7101e8092c
7101e80840  ldr x10,[sp, #0x28]
7101e80844  ldr x27,[x10]
7101e80848  sub x28,x9,x27
7101e8084c  cmn x28,#0x3
7101e80850  b.le 0x7101e81b18
7101e80854  asr x23,x28,#0x1
7101e80858  add x9,x23,#0x1
7101e8085c  sub x8,x8,x27
7101e80860  asr x10,x8,#0x1
7101e80864  cmp x8,x9
7101e80868  csel x8,x9,x8,cc
7101e8086c  orr x9,xzr,#0x3fffffffffffffff
7101e80870  cmp x10,x9
7101e80874  orr x9,xzr,#0x7fffffffffffffff
7101e80878  csel x22,x8,x9,cc
7101e8087c  cbz x22,0x7101e808e4
7101e80880  tbnz x22,#0x3f,0x7101e81b08
7101e80884  lsl x8,x22,#0x1
7101e80888  cmp x8,#0x0
7101e8088c  csinc x20,x8,xzr,ne
7101e80890  mov w0,#0x10
7101e80894  mov x1,x20
7101e80898  bl 0x710392e290
7101e8089c  mov x19,x0
7101e808a0  cbnz x0,0x7101e808e8
7101e808a4  adrp x8,0x7105332000
7101e808a8  ldr x0,[x8, #0xf00]
7101e808ac  cbz x0,0x7101e808e4
7101e808b0  stur wzr,[x29, #-0x98]
7101e808b4  str x20,[sp, #0x80]
7101e808b8  ldr x8,[x0]
7101e808bc  ldr x8,[x8, #0x30]
7101e808c0  sub x1,x29,#0x98
7101e808c4  add x2,sp,#0x80
7101e808c8  blr x8
7101e808cc  tbz w0,#0x0,0x7101e808e4
7101e808d0  mov w0,#0x10
7101e808d4  mov x1,x20
7101e808d8  bl 0x710392e290
7101e808dc  mov x19,x0
7101e808e0  cbnz x0,0x7101e808e8
7101e808e4  mov x19,xzr
7101e808e8  add x20,x19,x23, LSL #0x1
7101e808ec  cmp x28,#0x1
7101e808f0  strh w21,[x20], #0x2
7101e808f4  add x21,x19,x22, LSL #0x1
7101e808f8  b.lt 0x7101e8090c
7101e808fc  mov x0,x19
7101e80900  mov x1,x27
7101e80904  mov x2,x28
7101e80908  bl 0x71039c00e0
7101e8090c  ldr x8,[sp, #0x58]
7101e80910  stp x19,x20,[x8, #0x40]
7101e80914  str x21,[x8, #0x50]
7101e80918  ldp x22,x23,[sp, #0x38]
7101e8091c  ldr x28,[sp, #0x68]
7101e80920  cbz x27,0x7101e8092c
7101e80924  mov x0,x27
7101e80928  bl 0x710392eb40
7101e8092c  ldr x8,[sp, #0x1420]
7101e80930  sub x1,x8,#0x10
7101e80934  ldr x8,[x23, #0x170]
7101e80938  ldr x0,[x8]
7101e8093c  ldrb w2,[x24]
7101e80940  mov w3,w28
7101e80944  bl 0x7101e84b00
7101e80948  add x21,sp,#0xa50
7101e8094c  ldur x19,[x29, #-0x80]
7101e80950  adrp x8,0x710523d000
7101e80954  add x8,x8,#0x988
7101e80958  stp x8,xzr,[x29, #-0x88]
7101e8095c  cbz x19,0x7101e80980
7101e80960  ldr x0,[x19, #0x18]
7101e80964  adrp x8,0x710523d000
7101e80968  add x8,x8,#0x9a8
7101e8096c  stp x8,xzr,[x19, #0x10]
7101e80970  cbz x0,0x7101e80978
7101e80974  bl 0x710392eb40
7101e80978  mov x0,x19
7101e8097c  bl 0x710392eb40
7101e80980  ldr x8,[sp, #0x78]
7101e80984  add x24,x24,#0x1
7101e80988  cmp x24,x8
7101e8098c  b.ne 0x7101e7ff10
7101e80990  ldp x24,x9,[sp, #0x18]
7101e80994  add w28,w28,#0x1
7101e80998  ldp x8,x9,[x9, #0x58]
7101e8099c  sub x8,x9,x8
7101e809a0  asr x8,x8,#0x4
7101e809a4  mov x21,#0x94fc
7101e809a8  movk x21,#0x1826, LSL #16
7101e809ac  movk x21,#0x4, LSL #32
7101e809b0  cmp x8,w28, UXTB 
7101e809b4  b.hi 0x7101e7f358
7101e809b8  adrp x8,0x71042f8000
7101e809bc  add x8,x8,#0xa2b
7101e809c0  orr w9,wzr,#0x18
7101e809c4  ldr x8,[x8]
7101e809c8  stp xzr,xzr,[sp, #0x80]
7101e809cc  strb w9,[sp, #0x80]
7101e809d0  stur x8,[sp, #0x81]
7101e809d4  mov w8,#0x646e
7101e809d8  movk w8,#0x6d6f, LSL #16
7101e809dc  add x0,sp,#0xa50
7101e809e0  add x1,sp,#0x80
7101e809e4  str xzr,[sp, #0x90]
7101e809e8  stur w8,[sp, #0x89]
7101e809ec  strb wzr,[sp, #0x8d]
7101e809f0  add x20,sp,#0x80
7101e809f4  bl 0x71039c6440
7101e809f8  ldrb w8,[sp, #0x80]
7101e809fc  tbz w8,#0x0,0x7101e80a0c
7101e80a00  ldr x0,[sp, #0x90]
7101e80a04  cbz x0,0x7101e80a0c
7101e80a08  bl 0x710392eb40
7101e80a0c  add x0,sp,#0xa50
7101e80a10  mov w19,#0x8965
7101e80a14  movk w19,#0x6c07, LSL #16
7101e80a18  bl 0x71039c6450
7101e80a1c  add x8,x20,#0x8
7101e80a20  mov x9,#-0x26e
7101e80a24  mov w10,#0x1
7101e80a28  str w0,[sp, #0x80]
7101e80a2c  b 0x7101e80a54
7101e80a30  eor w11,w11,w11, LSR #0x1e
7101e80a34  mul w11,w11,w19
7101e80a38  add w13,w9,w11
7101e80a3c  add x12,x10,#0x1
7101e80a40  add w0,w11,w12
7101e80a44  add x10,x10,#0x2
7101e80a48  add w13,w13,#0x270
7101e80a4c  add x9,x9,#0x2
7101e80a50  str w13,[x8], #0x8
7101e80a54  eor w11,w0,w0, LSR #0x1e
7101e80a58  mul w11,w11,w19
7101e80a5c  add x11,x9,x11
7101e80a60  add x11,x11,#0x26f
7101e80a64  stur w11,[x8, #-0x4]
7101e80a68  cbnz x9,0x7101e80a30
7101e80a6c  str xzr,[sp, #0xa40]
7101e80a70  ldp x19,x8,[x23, #0x188]
7101e80a74  sub x9,x8,x19
7101e80a78  cmp x9,#0x2
7101e80a7c  b.lt 0x7101e80ac0
7101e80a80  sub x20,x8,#0x1
7101e80a84  subs x21,x20,x19
7101e80a88  b.ls 0x7101e80ac0
7101e80a8c  add x0,sp,#0x80
7101e80a90  sub x1,x29,#0x88
7101e80a94  stp xzr,x21,[x29, #-0x88]
7101e80a98  bl 0x7101d71a30
7101e80a9c  cbz x0,0x7101e80ab0
7101e80aa0  ldrb w8,[x19]
7101e80aa4  ldrb w9,[x19, x0, LSL ]
7101e80aa8  strb w9,[x19]
7101e80aac  strb w8,[x19, x0, LSL ]
7101e80ab0  add x19,x19,#0x1
7101e80ab4  sub x21,x21,#0x1
7101e80ab8  cmp x20,x19
7101e80abc  b.ne 0x7101e80a8c
7101e80ac0  add x0,sp,#0xa50
7101e80ac4  bl 0x71039c6460
7101e80ac8  ldr x21,[sp, #0x8]
7101e80acc  adrp x2,0x71043e0000
7101e80ad0  add x2,x2,#0x85e
7101e80ad4  mov w1,#0xc8
7101e80ad8  mov x0,x21
7101e80adc  bl 0x71037717d0
7101e80ae0  ldr x9,[x21]
7101e80ae4  ldr x8,[x9, #0x1b8]
7101e80ae8  cbz x8,0x7101e80bcc
7101e80aec  add x9,x9,#0x1b8
7101e80af0  mov x10,x9
7101e80af4  mov x11,x8
7101e80af8  ldr w12,[x11, #0x20]
7101e80afc  cmp w12,#0xc8
7101e80b00  cset w12,lt
7101e80b04  csel x10,x10,x11,lt
7101e80b08  ldr x11,[x11, w12, UXTW #0x3]
7101e80b0c  cbnz x11,0x7101e80af8
7101e80b10  cmp x10,x9
7101e80b14  b.eq 0x7101e80b64
7101e80b18  ldr w11,[x10, #0x20]
7101e80b1c  cmp w11,#0xc8
7101e80b20  b.gt 0x7101e80b64
7101e80b24  ldr x19,[x10, #0x28]
7101e80b28  cbz x19,0x7101e80b64
7101e80b2c  ldr x8,[x19]
7101e80b30  ldr x8,[x8, #0x1f8]
7101e80b34  mov w1,#0x1
7101e80b38  mov x0,x19
7101e80b3c  blr x8
7101e80b40  ldr x8,[x19]
7101e80b44  ldr x8,[x8, #0x388]
7101e80b48  mov x0,x19
7101e80b4c  mov w1,wzr
7101e80b50  mov w2,wzr
7101e80b54  blr x8
7101e80b58  ldr x8,[x21]
7101e80b5c  add x9,x8,#0x1b8
7101e80b60  ldr x8,[x8, #0x1b8]
7101e80b64  cbz x8,0x7101e80bcc
7101e80b68  mov x10,x9
7101e80b6c  ldr w11,[x8, #0x20]
7101e80b70  cmp w11,#0xc8
7101e80b74  cset w11,lt
7101e80b78  csel x10,x10,x8,lt
7101e80b7c  ldr x8,[x8, w11, UXTW #0x3]
7101e80b80  cbnz x8,0x7101e80b6c
7101e80b84  cmp x10,x9
7101e80b88  b.eq 0x7101e80bcc
7101e80b8c  ldr w8,[x10, #0x20]
7101e80b90  cmp w8,#0xc8
7101e80b94  b.gt 0x7101e80bcc
7101e80b98  ldr x19,[x10, #0x28]
7101e80b9c  cbz x19,0x7101e80bcc
7101e80ba0  ldr x8,[x19]
7101e80ba4  ldr x8,[x8, #0x208]
7101e80ba8  mov w1,#0x1
7101e80bac  mov x0,x19
7101e80bb0  blr x8
7101e80bb4  ldr x8,[x19]
7101e80bb8  ldr x8,[x8, #0x388]
7101e80bbc  mov x0,x19
7101e80bc0  mov w1,wzr
7101e80bc4  mov w2,wzr
7101e80bc8  blr x8
7101e80bcc  mov x8,#0xfe8c
7101e80bd0  movk x8,#0x53df, LSL #16
7101e80bd4  movk x8,#0x10, LSL #32
7101e80bd8  str x8,[sp, #0xa50]
7101e80bdc  ldr x0,[x21]
7101e80be0  mov w19,#0xc8
7101e80be4  add x2,sp,#0xa50
7101e80be8  mov w1,w19
7101e80bec  add x20,sp,#0xa50
7101e80bf0  bl 0x7103772070
7101e80bf4  ldr x1,[x21]
7101e80bf8  add x0,sp,#0x80
7101e80bfc  mov w2,w19
7101e80c00  bl 0x7103771d60
7101e80c04  ldr x21,[sp, #0x88]
7101e80c08  ldr x1,[x21]
7101e80c0c  add x0,sp,#0xa50
7101e80c10  bl 0x710377ad90
7101e80c14  ldr x8,[x24]
7101e80c18  add x9,x8,#0x8
7101e80c1c  cmp x9,x20
7101e80c20  b.eq 0x7101e80c3c
7101e80c24  ldr x9,[sp, #0xa58]
7101e80c28  str xzr,[sp, #0xa58]
7101e80c2c  ldr x0,[x8, #0x10]
7101e80c30  str x9,[x8, #0x10]
7101e80c34  cbz x0,0x7101e80c3c
7101e80c38  bl 0x710392eb40
7101e80c3c  ldr x0,[sp, #0xa58]
7101e80c40  adrp x20,0x710523d000
7101e80c44  add x20,x20,#0x9a8
7101e80c48  str x20,[sp, #0xa50]
7101e80c4c  str xzr,[sp, #0xa58]
7101e80c50  cbz x0,0x7101e80c58
7101e80c54  bl 0x710392eb40
7101e80c58  adrp x8,0x710523d000
7101e80c5c  add x8,x8,#0x9c8
7101e80c60  stp x8,xzr,[sp, #0x80]
7101e80c64  cbz x21,0x7101e80c70
7101e80c68  mov x0,x21
7101e80c6c  bl 0x710392eb40
7101e80c70  adrp x1,0x71043e0000
7101e80c74  add x1,x1,#0x85e
7101e80c78  add x8,sp,#0xa50
7101e80c7c  mov x0,x22
7101e80c80  bl 0x7103776640
7101e80c84  ldr x19,[sp, #0xa58]
7101e80c88  fmov s0,0x3f800000
7101e80c8c  adrp x1,0x71043f0000
7101e80c90  add x1,x1,#0xf4e
7101e80c94  mov x0,x19
7101e80c98  bl 0x7103778300
7101e80c9c  adrp x22,0x710523d000
7101e80ca0  add x22,x22,#0x988
7101e80ca4  str x22,[sp, #0xa50]
7101e80ca8  str xzr,[sp, #0xa58]
7101e80cac  cbz x19,0x7101e80cc8
7101e80cb0  ldr x0,[x19, #0x18]
7101e80cb4  stp x20,xzr,[x19, #0x10]
7101e80cb8  cbz x0,0x7101e80cc0
7101e80cbc  bl 0x710392eb40
7101e80cc0  mov x0,x19
7101e80cc4  bl 0x710392eb40
7101e80cc8  ldrb w8,[x23, #0x17e]
7101e80ccc  strb wzr,[x23, #0x178]
7101e80cd0  strb wzr,[x23, #0x180]
7101e80cd4  cbz w8,0x7101e80d90
7101e80cd8  ldr x19,[x23, #0x168]
7101e80cdc  ldrb w8,[x23, #0x17f]
7101e80ce0  ldr x9,[x19, #0x58]
7101e80ce4  cmn x9,x8, LSL #0x4
7101e80ce8  b.eq 0x7101e80d1c
7101e80cec  ldr x10,[x19, #0x60]
7101e80cf0  sub x10,x10,x9
7101e80cf4  asr x10,x10,#0x4
7101e80cf8  cmp x10,x8
7101e80cfc  b.ls 0x7101e80d1c
7101e80d00  add x8,x9,x8, LSL #0x4
7101e80d04  ldr x0,[x8, #0x8]
7101e80d08  fmov s0,0x3f800000
7101e80d0c  adrp x1,0x71042b4000
7101e80d10  add x1,x1,#0xa6a
7101e80d14  bl 0x7103778300
7101e80d18  ldr x19,[x24]
7101e80d1c  ldr x0,[x19, #0xa0]
7101e80d20  cbz x0,0x7101e80d8c
7101e80d24  bl 0x710373b7f0
7101e80d28  ldr x0,[x19, #0xa0]
7101e80d2c  str xzr,[x19, #0xa0]
7101e80d30  cbz x0,0x7101e80d8c
7101e80d34  adrp x8,0x7104f73000
7101e80d38  add x8,x8,#0xd50
7101e80d3c  str x8,[x0, #0x8]
7101e80d40  ldr x8,[x0, #0x10]
7101e80d44  cbz x8,0x7101e80d80
7101e80d48  adrp x9,0x7106dd5000
7101e80d4c  ldrb w9,[x9, #0x3a8]
7101e80d50  cmp w9,#0x1
7101e80d54  b.ne 0x7101e80d80
7101e80d58  adrp x10,0x7106dd5000
7101e80d5c  ldr w9,[x0, #0x18]
7101e80d60  ldr w10,[x10, #0x3ac]
7101e80d64  cmp w9,w10
7101e80d68  b.ne 0x7101e80d80
7101e80d6c  ldr wzr,[x8, #0x38]!
7101e80d70  ldaxr w9,[x8]
7101e80d74  sub w9,w9,#0x1
7101e80d78  stlxr w10,w9,[x8]
7101e80d7c  cbnz w10,0x7101e80d70
7101e80d80  str xzr,[x0, #0x10]
7101e80d84  strb wzr,[x0, #0x20]
7101e80d88  bl 0x710392eb40
7101e80d8c  strb wzr,[x23, #0x17e]
7101e80d90  ldr x21,[sp, #0x1418]
7101e80d94  cbz x21,0x7101e80dcc
7101e80d98  ldr x19,[sp, #0x1420]
7101e80d9c  cmp x19,x21
7101e80da0  b.eq 0x7101e8110c
7101e80da4  ldr x8,[x19, #-0x10]!
7101e80da8  ldr x8,[x8]
7101e80dac  mov x0,x19
7101e80db0  blr x8
7101e80db4  cmp x21,x19
7101e80db8  b.ne 0x7101e80da4
7101e80dbc  ldr x0,[sp, #0x1418]
7101e80dc0  str x21,[sp, #0x1420]
7101e80dc4  cbz x0,0x7101e80dcc
7101e80dc8  bl 0x710392eb40
7101e80dcc  ldr x0,[sp, #0x1540]
7101e80dd0  add x8,sp,#0x1, LSL #12
7101e80dd4  add x8,x8,#0x430
7101e80dd8  add x8,x8,#0xf0
7101e80ddc  cmp x8,x0
7101e80de0  b.eq 0x7101e80df4
7101e80de4  cbz x0,0x7101e80e00
7101e80de8  ldr x8,[x0]
7101e80dec  ldr x8,[x8, #0x28]
7101e80df0  b 0x7101e80dfc
7101e80df4  ldr x8,[x0]
7101e80df8  ldr x8,[x8, #0x20]
7101e80dfc  blr x8
7101e80e00  ldr x0,[sp, #0x1510]
7101e80e04  add x8,sp,#0x1, LSL #12
7101e80e08  add x8,x8,#0x430
7101e80e0c  add x8,x8,#0xc0
7101e80e10  cmp x8,x0
7101e80e14  b.eq 0x7101e80e28
7101e80e18  cbz x0,0x7101e80e34
7101e80e1c  ldr x8,[x0]
7101e80e20  ldr x8,[x8, #0x28]
7101e80e24  b 0x7101e80e30
7101e80e28  ldr x8,[x0]
7101e80e2c  ldr x8,[x8, #0x20]
7101e80e30  blr x8
7101e80e34  ldr x0,[sp, #0x14e0]
7101e80e38  add x8,sp,#0x1, LSL #12
7101e80e3c  add x8,x8,#0x430
7101e80e40  add x8,x8,#0x90
7101e80e44  cmp x8,x0
7101e80e48  b.eq 0x7101e80e5c
7101e80e4c  cbz x0,0x7101e80e68
7101e80e50  ldr x8,[x0]
7101e80e54  ldr x8,[x8, #0x28]
7101e80e58  b 0x7101e80e64
7101e80e5c  ldr x8,[x0]
7101e80e60  ldr x8,[x8, #0x20]
7101e80e64  blr x8
7101e80e68  ldr x0,[sp, #0x14b0]
7101e80e6c  add x8,sp,#0x1, LSL #12
7101e80e70  add x8,x8,#0x430
7101e80e74  add x8,x8,#0x60
7101e80e78  cmp x8,x0
7101e80e7c  b.eq 0x7101e80e90
7101e80e80  cbz x0,0x7101e80e9c
7101e80e84  ldr x8,[x0]
7101e80e88  ldr x8,[x8, #0x28]
7101e80e8c  b 0x7101e80e98
7101e80e90  ldr x8,[x0]
7101e80e94  ldr x8,[x8, #0x20]
7101e80e98  blr x8
7101e80e9c  ldr x0,[sp, #0x1480]
7101e80ea0  add x8,sp,#0x1, LSL #12
7101e80ea4  add x8,x8,#0x430
7101e80ea8  add x8,x8,#0x30
7101e80eac  cmp x8,x0
7101e80eb0  b.eq 0x7101e80ec4
7101e80eb4  cbz x0,0x7101e80ed0
7101e80eb8  ldr x8,[x0]
7101e80ebc  ldr x8,[x8, #0x28]
7101e80ec0  b 0x7101e80ecc
7101e80ec4  ldr x8,[x0]
7101e80ec8  ldr x8,[x8, #0x20]
7101e80ecc  blr x8
7101e80ed0  ldr x0,[sp, #0x38]
7101e80ed4  adrp x1,0x7104308000
7101e80ed8  add x1,x1,#0xae0
7101e80edc  add x8,sp,#0xa50
7101e80ee0  add x19,sp,#0xa50
7101e80ee4  bl 0x7103776640
7101e80ee8  add x21,x23,#0x1d0
7101e80eec  cmp x21,x19
7101e80ef0  b.eq 0x7101e80f20
7101e80ef4  ldr x8,[sp, #0xa58]
7101e80ef8  str xzr,[sp, #0xa58]
7101e80efc  ldr x19,[x23, #0x1d8]
7101e80f00  str x8,[x23, #0x1d8]
7101e80f04  cbz x19,0x7101e80f20
7101e80f08  ldr x0,[x19, #0x18]
7101e80f0c  stp x20,xzr,[x19, #0x10]
7101e80f10  cbz x0,0x7101e80f18
7101e80f14  bl 0x710392eb40
7101e80f18  mov x0,x19
7101e80f1c  bl 0x710392eb40
7101e80f20  ldr x19,[sp, #0xa58]
7101e80f24  str x22,[sp, #0xa50]
7101e80f28  str xzr,[sp, #0xa58]
7101e80f2c  cbz x19,0x7101e80f48
7101e80f30  ldr x0,[x19, #0x18]
7101e80f34  stp x20,xzr,[x19, #0x10]
7101e80f38  cbz x0,0x7101e80f40
7101e80f3c  bl 0x710392eb40
7101e80f40  mov x0,x19
7101e80f44  bl 0x710392eb40
7101e80f48  adrp x1,0x7104411000
7101e80f4c  add x1,x1,#0x1db
7101e80f50  add x8,sp,#0xa50
7101e80f54  mov x0,x21
7101e80f58  add x19,sp,#0xa50
7101e80f5c  bl 0x7103776640
7101e80f60  add x8,x23,#0x1e0
7101e80f64  cmp x8,x19
7101e80f68  b.eq 0x7101e80f98
7101e80f6c  ldr x8,[sp, #0xa58]
7101e80f70  str xzr,[sp, #0xa58]
7101e80f74  ldr x19,[x23, #0x1e8]
7101e80f78  str x8,[x23, #0x1e8]
7101e80f7c  cbz x19,0x7101e80f98
7101e80f80  ldr x0,[x19, #0x18]
7101e80f84  stp x20,xzr,[x19, #0x10]
7101e80f88  cbz x0,0x7101e80f90
7101e80f8c  bl 0x710392eb40
7101e80f90  mov x0,x19
7101e80f94  bl 0x710392eb40
7101e80f98  ldr x19,[sp, #0xa58]
7101e80f9c  str x22,[sp, #0xa50]
7101e80fa0  str xzr,[sp, #0xa58]
7101e80fa4  cbz x19,0x7101e80fc0
7101e80fa8  ldr x0,[x19, #0x18]
7101e80fac  stp x20,xzr,[x19, #0x10]
7101e80fb0  cbz x0,0x7101e80fb8
7101e80fb4  bl 0x710392eb40
7101e80fb8  mov x0,x19
7101e80fbc  bl 0x710392eb40
7101e80fc0  adrp x1,0x710438d000
7101e80fc4  add x1,x1,#0x1b5
7101e80fc8  add x8,sp,#0xa50
7101e80fcc  mov x0,x21
7101e80fd0  add x19,sp,#0xa50
7101e80fd4  bl 0x7103776910
7101e80fd8  add x8,x23,#0x1f0
7101e80fdc  cmp x8,x19
7101e80fe0  b.eq 0x7101e80ffc
7101e80fe4  ldr x8,[sp, #0xa58]
7101e80fe8  str xzr,[sp, #0xa58]
7101e80fec  ldr x0,[x23, #0x1f8]
7101e80ff0  str x8,[x23, #0x1f8]
7101e80ff4  cbz x0,0x7101e80ffc
7101e80ff8  bl 0x710392eb40
7101e80ffc  ldr x0,[sp, #0xa58]
7101e81000  str x20,[sp, #0xa50]
7101e81004  str xzr,[sp, #0xa58]
7101e81008  cbz x0,0x7101e81010
7101e8100c  bl 0x710392eb40
7101e81010  adrp x1,0x71042a3000
7101e81014  add x1,x1,#0x698
7101e81018  add x8,sp,#0xa50
7101e8101c  mov x0,x21
7101e81020  add x19,sp,#0xa50
7101e81024  bl 0x7103776910
7101e81028  add x8,x23,#0x200
7101e8102c  cmp x8,x19
7101e81030  b.eq 0x7101e8104c
7101e81034  ldr x8,[sp, #0xa58]
7101e81038  str xzr,[sp, #0xa58]
7101e8103c  ldr x0,[x23, #0x208]
7101e81040  str x8,[x23, #0x208]
7101e81044  cbz x0,0x7101e8104c
7101e81048  bl 0x710392eb40
7101e8104c  ldr x0,[sp, #0xa58]
7101e81050  str x20,[sp, #0xa50]
7101e81054  str xzr,[sp, #0xa58]
7101e81058  cbz x0,0x7101e81060
7101e8105c  bl 0x710392eb40
7101e81060  ldr x8,[x23, #0x1f8]
7101e81064  str wzr,[x23, #0x214]
7101e81068  ldr x0,[x8, #0x10]
7101e8106c  cbz x0,0x7101e81084
7101e81070  add x1,sp,#0xa50
7101e81074  mov w2,wzr
7101e81078  mov w3,wzr
7101e8107c  str wzr,[sp, #0xa50]
7101e81080  bl 0x71037a2270
7101e81084  ldr x8,[x23, #0x208]
7101e81088  ldr x0,[x8, #0x10]
7101e8108c  cbz x0,0x7101e810a4
7101e81090  add x1,sp,#0xa50
7101e81094  mov w2,wzr
7101e81098  mov w3,wzr
7101e8109c  str wzr,[sp, #0xa50]
7101e810a0  bl 0x71037a2270
7101e810a4  ldr x0,[x23, #0x1d8]
7101e810a8  fmov s0,0x3f800000
7101e810ac  adrp x1,0x71043e0000
7101e810b0  add x1,x1,#0x854
7101e810b4  bl 0x7103778300
7101e810b8  ldr x8,[x23, #0x1e8]
7101e810bc  ldr x8,[x8, #0x8]
7101e810c0  cbz x8,0x7101e811a4
7101e810c4  ldr x21,[x8, #0x78]
7101e810c8  adrp x8,0x710593b000
7101e810cc  add x8,x8,#0xa40
7101e810d0  ldarb w8,[x8]
7101e810d4  tbz w8,#0x0,0x7101e81ac0
7101e810d8  cbz x21,0x7101e811a4
7101e810dc  ldr x8,[x21]
7101e810e0  ldr x8,[x8]
7101e810e4  mov x0,x21
7101e810e8  blr x8
7101e810ec  cbz x0,0x7101e811a4
7101e810f0  adrp x8,0x710593b000
7101e810f4  add x8,x8,#0xa58
7101e810f8  cmp x0,x8
7101e810fc  b.eq 0x7101e8111c
7101e81100  ldr x0,[x0]
7101e81104  cbnz x0,0x7101e810f8
7101e81108  b 0x7101e811a4
7101e8110c  mov x0,x21
7101e81110  str x21,[sp, #0x1420]
7101e81114  cbnz x0,0x7101e80dc8
7101e81118  b 0x7101e80dcc
7101e8111c  ldr w9,[x21, #0x54]
7101e81120  ldr x8,[x21, #0x18]
7101e81124  str w9,[x21, #0x58]
7101e81128  cbz x8,0x7101e8113c
7101e8112c  str w9,[x8, #0x30]
7101e81130  ldrb w9,[x8, #0x58]
7101e81134  orr w9,w9,#0x10
7101e81138  strb w9,[x8, #0x58]
7101e8113c  ldr x8,[x21, #0x20]
7101e81140  cbz x8,0x7101e81158
7101e81144  ldr w9,[x21, #0x58]
7101e81148  str w9,[x8, #0x30]
7101e8114c  ldrb w9,[x8, #0x58]
7101e81150  orr w9,w9,#0x10
7101e81154  strb w9,[x8, #0x58]
7101e81158  ldr x0,[x21, #0x28]
7101e8115c  cbz x0,0x7101e81170
7101e81160  ldr x8,[x0]
7101e81164  ldr x8,[x8, #0x180]
7101e81168  fmov s0,wzr
7101e8116c  blr x8
7101e81170  ldr x0,[x21, #0x30]
7101e81174  cbz x0,0x7101e811a0
7101e81178  ldrb w8,[x21, #0x63]
7101e8117c  cbz w8,0x7101e81190
7101e81180  ldr x8,[x0]
7101e81184  ldr x8,[x8, #0x190]
7101e81188  blr x8
7101e8118c  b 0x7101e811a0
7101e81190  ldr x8,[x0]
7101e81194  ldr x8,[x8, #0x180]
7101e81198  fmov s0,wzr
7101e8119c  blr x8
7101e811a0  strh wzr,[x21, #0x64]
7101e811a4  ldr x8,[x23, #0x1e8]
7101e811a8  ldr x0,[x8, #0x8]
7101e811ac  bl 0x7103778950
7101e811b0  mov w8,#0x101
7101e811b4  strb wzr,[x23, #0x212]
7101e811b8  str xzr,[sp, #0xa50]
7101e811bc  strh w8,[sp, #0xa58]
7101e811c0  add x8,sp,#0x95b
7101e811c4  mov x9,#0x41f0000000000000
7101e811c8  stur wzr,[x8, #0xff]
7101e811cc  mov w8,#0x1
7101e811d0  add x21,x23,#0x220
7101e811d4  str w8,[sp, #0xa60]
7101e811d8  add x19,sp,#0x80
7101e811dc  add x0,sp,#0x80
7101e811e0  strh w8,[sp, #0xa64]
7101e811e4  strb w8,[sp, #0xa66]
7101e811e8  str x9,[sp, #0xa68]
7101e811ec  add x9,sp,#0xa50
7101e811f0  add x1,x9,#0x90
7101e811f4  strb w8,[sp, #0xa5a]
7101e811f8  adrp x8,0x71050b2000
7101e811fc  add x8,x8,#0x20
7101e81200  str x8,[sp, #0x80]
7101e81204  adrp x8,0x7101e81000
7101e81208  add x8,x8,#0xd30
7101e8120c  strh wzr,[sp, #0xa5e]
7101e81210  str wzr,[sp, #0xa70]
7101e81214  str xzr,[sp, #0xaa0]
7101e81218  str xzr,[sp, #0xad0]
7101e8121c  str xzr,[sp, #0xb00]
7101e81220  str xzr,[sp, #0xb30]
7101e81224  str xzr,[sp, #0xb60]
7101e81228  str wzr,[sp, #0xb70]
7101e8122c  stp x8,xzr,[sp, #0x88]
7101e81230  stp x21,x19,[sp, #0x98]
7101e81234  bl 0x7101989a30
7101e81238  ldr x0,[sp, #0xa0]
7101e8123c  cmp x19,x0
7101e81240  b.eq 0x7101e81254
7101e81244  cbz x0,0x7101e81260
7101e81248  ldr x8,[x0]
7101e8124c  ldr x8,[x8, #0x28]
7101e81250  b 0x7101e8125c
7101e81254  ldr x8,[x0]
7101e81258  ldr x8,[x8, #0x20]
7101e8125c  blr x8
7101e81260  ldr x1,[sp, #0x38]
7101e81264  adrp x2,0x7104401000
7101e81268  add x2,x2,#0xbc0
7101e8126c  add x3,sp,#0xa50
7101e81270  mov x0,x21
7101e81274  add x23,sp,#0xa50
7101e81278  bl 0x7103770b30
7101e8127c  adrp x2,0x71042b4000
7101e81280  add x2,x2,#0xa2f
7101e81284  mov w1,#0xc8
7101e81288  mov x0,x21
7101e8128c  bl 0x71037717d0
7101e81290  ldr x0,[x21]
7101e81294  ldr x9,[x0, #0x1b8]
7101e81298  cbz x9,0x7101e81380
7101e8129c  add x8,x0,#0x1b8
7101e812a0  mov x10,x8
7101e812a4  mov x11,x9
7101e812a8  ldr w12,[x11, #0x20]
7101e812ac  cmp w12,#0xc8
7101e812b0  cset w12,lt
7101e812b4  csel x10,x10,x11,lt
7101e812b8  ldr x11,[x11, w12, UXTW #0x3]
7101e812bc  cbnz x11,0x7101e812a8
7101e812c0  cmp x10,x8
7101e812c4  b.eq 0x7101e81314
7101e812c8  ldr w11,[x10, #0x20]
7101e812cc  cmp w11,#0xc8
7101e812d0  b.gt 0x7101e81314
7101e812d4  ldr x19,[x10, #0x28]
7101e812d8  cbz x19,0x7101e81314
7101e812dc  ldr x8,[x19]
7101e812e0  ldr x8,[x8, #0x208]
7101e812e4  mov w1,#0x1
7101e812e8  mov x0,x19
7101e812ec  blr x8
7101e812f0  ldr x8,[x19]
7101e812f4  ldr x8,[x8, #0x388]
7101e812f8  mov x0,x19
7101e812fc  mov w1,wzr
7101e81300  mov w2,wzr
7101e81304  blr x8
7101e81308  ldr x0,[x21]
7101e8130c  ldr x9,[x0, #0x1b8]
7101e81310  add x8,x0,#0x1b8
7101e81314  cbz x9,0x7101e81380
7101e81318  mov x10,x8
7101e8131c  ldr w11,[x9, #0x20]
7101e81320  cmp w11,#0xc8
7101e81324  cset w11,lt
7101e81328  csel x10,x10,x9,lt
7101e8132c  ldr x9,[x9, w11, UXTW #0x3]
7101e81330  cbnz x9,0x7101e8131c
7101e81334  cmp x10,x8
7101e81338  b.eq 0x7101e81380
7101e8133c  ldr w8,[x10, #0x20]
7101e81340  cmp w8,#0xc8
7101e81344  b.gt 0x7101e81380
7101e81348  ldr x19,[x10, #0x28]
7101e8134c  cbz x19,0x7101e81380
7101e81350  ldr x8,[x19]
7101e81354  ldr x8,[x8, #0x1f8]
7101e81358  mov w1,#0x1
7101e8135c  mov x0,x19
7101e81360  blr x8
7101e81364  ldr x8,[x19]
7101e81368  ldr x8,[x8, #0x388]
7101e8136c  mov x0,x19
7101e81370  mov w1,wzr
7101e81374  mov w2,wzr
7101e81378  blr x8
7101e8137c  ldr x0,[x21]
7101e81380  mov w1,#0xc8
7101e81384  orr w2,wzr,#0x6
7101e81388  mov w3,wzr
7101e8138c  bl 0x7103771930
7101e81390  ldr x0,[sp, #0xb60]
7101e81394  add x8,x23,#0xf0
7101e81398  cmp x8,x0
7101e8139c  b.eq 0x7101e813b8
7101e813a0  ldr x23,[sp, #0x40]
7101e813a4  cbz x0,0x7101e813c8
7101e813a8  ldr x8,[x0]
7101e813ac  ldr x8,[x8, #0x28]
7101e813b0  blr x8
7101e813b4  b 0x7101e813c8
7101e813b8  ldr x8,[x0]
7101e813bc  ldr x8,[x8, #0x20]
7101e813c0  blr x8
7101e813c4  ldr x23,[sp, #0x40]
7101e813c8  ldr x0,[sp, #0xb30]
7101e813cc  add x8,sp,#0xa50
7101e813d0  add x8,x8,#0xc0
7101e813d4  cmp x8,x0
7101e813d8  b.eq 0x7101e813ec
7101e813dc  cbz x0,0x7101e813f8
7101e813e0  ldr x8,[x0]
7101e813e4  ldr x8,[x8, #0x28]
7101e813e8  b 0x7101e813f4
7101e813ec  ldr x8,[x0]
7101e813f0  ldr x8,[x8, #0x20]
7101e813f4  blr x8
7101e813f8  ldr x0,[sp, #0xb00]
7101e813fc  add x8,sp,#0xa50
7101e81400  add x8,x8,#0x90
7101e81404  cmp x8,x0
7101e81408  b.eq 0x7101e8141c
7101e8140c  cbz x0,0x7101e81428
7101e81410  ldr x8,[x0]
7101e81414  ldr x8,[x8, #0x28]
7101e81418  b 0x7101e81424
7101e8141c  ldr x8,[x0]
7101e81420  ldr x8,[x8, #0x20]
7101e81424  blr x8
7101e81428  ldr x0,[sp, #0xad0]
7101e8142c  add x8,sp,#0xa50
7101e81430  add x8,x8,#0x60
7101e81434  cmp x8,x0
7101e81438  b.eq 0x7101e8144c
7101e8143c  cbz x0,0x7101e81458
7101e81440  ldr x8,[x0]
7101e81444  ldr x8,[x8, #0x28]
7101e81448  b 0x7101e81454
7101e8144c  ldr x8,[x0]
7101e81450  ldr x8,[x8, #0x20]
7101e81454  blr x8
7101e81458  ldr x0,[sp, #0xaa0]
7101e8145c  add x8,sp,#0xa50
7101e81460  add x8,x8,#0x30
7101e81464  cmp x8,x0
7101e81468  b.eq 0x7101e8147c
7101e8146c  cbz x0,0x7101e81488
7101e81470  ldr x8,[x0]
7101e81474  ldr x8,[x8, #0x28]
7101e81478  b 0x7101e81484
7101e8147c  ldr x8,[x0]
7101e81480  ldr x8,[x8, #0x20]
7101e81484  blr x8
7101e81488  ldr x0,[sp, #0x38]
7101e8148c  adrp x1,0x71043ad000
7101e81490  add x1,x1,#0xe77
7101e81494  add x8,sp,#0xa50
7101e81498  add x19,sp,#0xa50
7101e8149c  bl 0x7103776910
7101e814a0  add x8,x23,#0x228
7101e814a4  cmp x8,x19
7101e814a8  b.eq 0x7101e814c4
7101e814ac  ldr x8,[sp, #0xa58]
7101e814b0  str xzr,[sp, #0xa58]
7101e814b4  ldr x0,[x23, #0x230]
7101e814b8  str x8,[x23, #0x230]
7101e814bc  cbz x0,0x7101e814c4
7101e814c0  bl 0x710392eb40
7101e814c4  ldr x0,[sp, #0xa58]
7101e814c8  str x20,[sp, #0xa50]
7101e814cc  str xzr,[sp, #0xa58]
7101e814d0  cbz x0,0x7101e814d8
7101e814d4  bl 0x710392eb40
7101e814d8  ldr x1,[sp, #0x38]
7101e814dc  add x0,x23,#0x238
7101e814e0  adrp x2,0x71042b4000
7101e814e4  add x2,x2,#0xa41
7101e814e8  bl 0x7101e81b60
7101e814ec  ldr x0,[x23, #0x2c0]
7101e814f0  ldr w8,[x0, #0x94]
7101e814f4  cbz w8,0x7101e81510
7101e814f8  add x1,x0,#0x18
7101e814fc  mov w2,#0x1
7101e81500  mov w3,wzr
7101e81504  str wzr,[x0, #0x94]
7101e81508  bl 0x710377a280
7101e8150c  ldr x0,[x23, #0x2c0]
7101e81510  mov x8,#0xfc80
7101e81514  movk x8,#0x5bf6, LSL #16
7101e81518  mov x9,#0xf4dd
7101e8151c  movk x9,#0x7123, LSL #16
7101e81520  movk x8,#0x20, LSL #32
7101e81524  movk x9,#0x25, LSL #32
7101e81528  stp x8,x9,[x0, #0x58]
7101e8152c  ldr x8,[x23, #0x2c0]
7101e81530  mov x9,#0x1a56
7101e81534  movk x9,#0xfc22, LSL #16
7101e81538  mov x10,#0xd702
7101e8153c  movk x10,#0xef44, LSL #16
7101e81540  movk x9,#0x21, LSL #32
7101e81544  movk x10,#0x26, LSL #32
7101e81548  add x0,x23,#0x260
7101e8154c  stp x9,x10,[x8, #0x68]
7101e81550  adrp x1,0x7104292000
7101e81554  add x1,x1,#0x3d4
7101e81558  mov w2,#0x1
7101e8155c  mov w3,wzr
7101e81560  bl 0x710377a280
7101e81564  str wzr,[x23, #0x2b8]
7101e81568  adrp x8,0x7105314000
7101e8156c  ldr x8,[x8, #0x510]
7101e81570  ldr x8,[x8]
7101e81574  ldr x8,[x8, #0xd8]
7101e81578  ldr x8,[x8]
7101e8157c  ldr x8,[x8]
7101e81580  ldr x0,[x23, #0x2c0]
7101e81584  ldr w3,[x8, #0x24]
7101e81588  ldr w8,[x0, #0x94]
7101e8158c  cmp w8,w3
7101e81590  b.eq 0x7101e815a4
7101e81594  add x1,x0,#0x18
7101e81598  mov w2,#0x1
7101e8159c  str w3,[x0, #0x94]
7101e815a0  bl 0x710377a280
7101e815a4  ldr x1,[sp, #0x38]
7101e815a8  add x0,x23,#0x2d0
7101e815ac  adrp x2,0x7104433000
7101e815b0  add x2,x2,#0x6e7
7101e815b4  bl 0x7101e81b60
7101e815b8  ldr x0,[x23, #0x358]
7101e815bc  ldr w8,[x0, #0x94]
7101e815c0  cbz w8,0x7101e815dc
7101e815c4  add x1,x0,#0x18
7101e815c8  mov w2,#0x1
7101e815cc  mov w3,wzr
7101e815d0  str wzr,[x0, #0x94]
7101e815d4  bl 0x710377a280
7101e815d8  ldr x0,[x23, #0x358]
7101e815dc  mov x8,#0x3314
7101e815e0  movk x8,#0xd8a5, LSL #16
7101e815e4  mov x9,#0xab8e
7101e815e8  movk x9,#0x8ebd, LSL #16
7101e815ec  movk x8,#0x1d, LSL #32
7101e815f0  movk x9,#0x27, LSL #32
7101e815f4  stp x8,x9,[x0, #0x58]
7101e815f8  ldr x9,[x23, #0x358]
7101e815fc  mov x10,#0xa793
7101e81600  movk x10,#0x66ee, LSL #16
7101e81604  movk x10,#0x28, LSL #32
7101e81608  add x0,x23,#0x2f8
7101e8160c  adrp x1,0x71042c5000
7101e81610  add x1,x1,#0x4c7
7101e81614  mov w2,#0x1
7101e81618  stp x8,x10,[x9, #0x68]
7101e8161c  mov w3,wzr
7101e81620  mov w19,#0x1
7101e81624  bl 0x710377a280
7101e81628  ldr x8,[x23, #0x428]
7101e8162c  str wzr,[x23, #0x350]
7101e81630  strb w19,[x23, #0x360]
7101e81634  ldr x8,[x8]
7101e81638  ldp w9,w8,[x8, #0xa0]
7101e8163c  ldr x0,[x23, #0x358]
7101e81640  cmp w9,w8
7101e81644  csel w9,w8,w9,cc
7101e81648  sub w3,w9,w8
7101e8164c  ldr w8,[x0, #0x94]
7101e81650  cmp w8,w3
7101e81654  b.eq 0x7101e81668
7101e81658  add x1,x0,#0x18
7101e8165c  mov w2,#0x1
7101e81660  str w3,[x0, #0x94]
7101e81664  bl 0x710377a280
7101e81668  ldr x0,[sp, #0x38]
7101e8166c  adrp x1,0x71042a3000
7101e81670  add x1,x1,#0x67a
7101e81674  add x8,sp,#0xa50
7101e81678  add x19,sp,#0xa50
7101e8167c  bl 0x7103776910
7101e81680  add x8,x23,#0x368
7101e81684  cmp x8,x19
7101e81688  b.eq 0x7101e816a4
7101e8168c  ldr x8,[sp, #0xa58]
7101e81690  str xzr,[sp, #0xa58]
7101e81694  ldr x0,[x23, #0x370]
7101e81698  str x8,[x23, #0x370]
7101e8169c  cbz x0,0x7101e816a4
7101e816a0  bl 0x710392eb40
7101e816a4  ldr x0,[sp, #0xa58]
7101e816a8  str x20,[sp, #0xa50]
7101e816ac  str xzr,[sp, #0xa58]
7101e816b0  cbz x0,0x7101e816b8
7101e816b4  bl 0x710392eb40
7101e816b8  ldr x0,[sp, #0x38]
7101e816bc  adrp x1,0x71042a3000
7101e816c0  add x1,x1,#0x67a
7101e816c4  add x8,sp,#0xa50
7101e816c8  bl 0x7103776640
7101e816cc  adrp x1,0x7104443000
7101e816d0  add x1,x1,#0xdd5
7101e816d4  add x8,sp,#0x80
7101e816d8  add x0,sp,#0xa50
7101e816dc  add x19,sp,#0x80
7101e816e0  bl 0x71037780e0
7101e816e4  add x8,x23,#0x378
7101e816e8  cmp x8,x19
7101e816ec  b.eq 0x7101e81708
7101e816f0  ldr x8,[sp, #0x88]
7101e816f4  str xzr,[sp, #0x88]
7101e816f8  ldr x0,[x23, #0x380]
7101e816fc  str x8,[x23, #0x380]
7101e81700  cbz x0,0x7101e81708
7101e81704  bl 0x710392eb40
7101e81708  ldr x0,[sp, #0x88]
7101e8170c  adrp x21,0x710523d000
7101e81710  add x21,x21,#0x9e8
7101e81714  stp x21,xzr,[sp, #0x80]
7101e81718  cbz x0,0x7101e81720
7101e8171c  bl 0x710392eb40
7101e81720  adrp x1,0x710425f000
7101e81724  add x1,x1,#0xb56
7101e81728  add x8,sp,#0x80
7101e8172c  add x0,sp,#0xa50
7101e81730  add x19,sp,#0x80
7101e81734  bl 0x71037780e0
7101e81738  add x8,x23,#0x388
7101e8173c  cmp x8,x19
7101e81740  b.eq 0x7101e8175c
7101e81744  ldr x8,[sp, #0x88]
7101e81748  str xzr,[sp, #0x88]
7101e8174c  ldr x0,[x23, #0x390]
7101e81750  str x8,[x23, #0x390]
7101e81754  cbz x0,0x7101e8175c
7101e81758  bl 0x710392eb40
7101e8175c  ldr x0,[sp, #0x88]
7101e81760  stp x21,xzr,[sp, #0x80]
7101e81764  cbz x0,0x7101e8176c
7101e81768  bl 0x710392eb40
7101e8176c  adrp x1,0x710439d000
7101e81770  add x1,x1,#0xa77
7101e81774  add x8,sp,#0x80
7101e81778  add x0,sp,#0xa50
7101e8177c  add x19,sp,#0x80
7101e81780  bl 0x71037780e0
7101e81784  add x8,x23,#0x398
7101e81788  cmp x8,x19
7101e8178c  b.eq 0x7101e817a8
7101e81790  ldr x8,[sp, #0x88]
7101e81794  str xzr,[sp, #0x88]
7101e81798  ldr x0,[x23, #0x3a0]
7101e8179c  str x8,[x23, #0x3a0]
7101e817a0  cbz x0,0x7101e817a8
7101e817a4  bl 0x710392eb40
7101e817a8  ldr x0,[sp, #0x88]
7101e817ac  stp x21,xzr,[sp, #0x80]
7101e817b0  cbz x0,0x7101e817b8
7101e817b4  bl 0x710392eb40
7101e817b8  ldr x19,[sp, #0xa58]
7101e817bc  str x22,[sp, #0xa50]
7101e817c0  str xzr,[sp, #0xa58]
7101e817c4  cbz x19,0x7101e817e0
7101e817c8  ldr x0,[x19, #0x18]
7101e817cc  stp x20,xzr,[x19, #0x10]
7101e817d0  cbz x0,0x7101e817d8
7101e817d4  bl 0x710392eb40
7101e817d8  mov x0,x19
7101e817dc  bl 0x710392eb40
7101e817e0  ldr x0,[sp, #0x38]
7101e817e4  adrp x1,0x7104319000
7101e817e8  add x1,x1,#0x4c3
7101e817ec  add x8,sp,#0xa50
7101e817f0  mov w2,wzr
7101e817f4  add x19,sp,#0xa50
7101e817f8  bl 0x7103776910
7101e817fc  add x8,x23,#0x3a8
7101e81800  cmp x8,x19
7101e81804  b.eq 0x7101e81820
7101e81808  ldr x8,[sp, #0xa58]
7101e8180c  str xzr,[sp, #0xa58]
7101e81810  ldr x0,[x23, #0x3b0]
7101e81814  str x8,[x23, #0x3b0]
7101e81818  cbz x0,0x7101e81820
7101e8181c  bl 0x710392eb40
7101e81820  ldr x0,[sp, #0xa58]
7101e81824  str x20,[sp, #0xa50]
7101e81828  str xzr,[sp, #0xa58]
7101e8182c  cbz x0,0x7101e81834
7101e81830  bl 0x710392eb40
7101e81834  ldr x0,[sp, #0x38]
7101e81838  adrp x1,0x7104319000
7101e8183c  add x1,x1,#0x4c3
7101e81840  add x8,sp,#0xa50
7101e81844  mov w2,wzr
7101e81848  bl 0x7103776640
7101e8184c  adrp x1,0x71043ad000
7101e81850  add x1,x1,#0xe9d
7101e81854  add x8,sp,#0x80
7101e81858  add x0,sp,#0xa50
7101e8185c  add x19,sp,#0x80
7101e81860  bl 0x71037780e0
7101e81864  add x8,x23,#0x3d8
7101e81868  cmp x8,x19
7101e8186c  b.eq 0x7101e81888
7101e81870  ldr x8,[sp, #0x88]
7101e81874  str xzr,[sp, #0x88]
7101e81878  ldr x0,[x23, #0x3e0]
7101e8187c  str x8,[x23, #0x3e0]
7101e81880  cbz x0,0x7101e81888
7101e81884  bl 0x710392eb40
7101e81888  ldr x0,[sp, #0x88]
7101e8188c  stp x21,xzr,[sp, #0x80]
7101e81890  cbz x0,0x7101e81898
7101e81894  bl 0x710392eb40
7101e81898  ldr x19,[sp, #0xa58]
7101e8189c  str x22,[sp, #0xa50]
7101e818a0  str xzr,[sp, #0xa58]
7101e818a4  cbz x19,0x7101e818c0
7101e818a8  ldr x0,[x19, #0x18]
7101e818ac  stp x20,xzr,[x19, #0x10]
7101e818b0  cbz x0,0x7101e818b8
7101e818b4  bl 0x710392eb40
7101e818b8  mov x0,x19
7101e818bc  bl 0x710392eb40
7101e818c0  ldr x0,[sp, #0x38]
7101e818c4  adrp x1,0x7104319000
7101e818c8  add x1,x1,#0x4c3
7101e818cc  add x8,sp,#0xa50
7101e818d0  mov w2,#0x1
7101e818d4  add x19,sp,#0xa50
7101e818d8  bl 0x7103776910
7101e818dc  add x8,x23,#0x3b8
7101e818e0  cmp x8,x19
7101e818e4  b.eq 0x7101e81900
7101e818e8  ldr x8,[sp, #0xa58]
7101e818ec  str xzr,[sp, #0xa58]
7101e818f0  ldr x0,[x23, #0x3c0]
7101e818f4  str x8,[x23, #0x3c0]
7101e818f8  cbz x0,0x7101e81900
7101e818fc  bl 0x710392eb40
7101e81900  ldr x0,[sp, #0xa58]
7101e81904  str x20,[sp, #0xa50]
7101e81908  str xzr,[sp, #0xa58]
7101e8190c  cbz x0,0x7101e81914
7101e81910  bl 0x710392eb40
7101e81914  ldr x0,[sp, #0x38]
7101e81918  adrp x1,0x7104319000
7101e8191c  add x1,x1,#0x4c3
7101e81920  add x8,sp,#0xa50
7101e81924  mov w2,#0x1
7101e81928  bl 0x7103776640
7101e8192c  adrp x1,0x71043ad000
7101e81930  add x1,x1,#0xe9d
7101e81934  add x8,sp,#0x80
7101e81938  add x0,sp,#0xa50
7101e8193c  add x19,sp,#0x80
7101e81940  bl 0x71037780e0
7101e81944  add x8,x23,#0x3e8
7101e81948  cmp x8,x19
7101e8194c  b.eq 0x7101e81968
7101e81950  ldr x8,[sp, #0x88]
7101e81954  str xzr,[sp, #0x88]
7101e81958  ldr x0,[x23, #0x3f0]
7101e8195c  str x8,[x23, #0x3f0]
7101e81960  cbz x0,0x7101e81968
7101e81964  bl 0x710392eb40
7101e81968  ldr x0,[sp, #0x88]
7101e8196c  stp x21,xzr,[sp, #0x80]
7101e81970  cbz x0,0x7101e81978
7101e81974  bl 0x710392eb40
7101e81978  ldr x19,[sp, #0xa58]
7101e8197c  str x22,[sp, #0xa50]
7101e81980  str xzr,[sp, #0xa58]
7101e81984  cbz x19,0x7101e819a0
7101e81988  ldr x0,[x19, #0x18]
7101e8198c  stp x20,xzr,[x19, #0x10]
7101e81990  cbz x0,0x7101e81998
7101e81994  bl 0x710392eb40
7101e81998  mov x0,x19
7101e8199c  bl 0x710392eb40
7101e819a0  ldr x0,[sp, #0x38]
7101e819a4  adrp x1,0x7104319000
7101e819a8  add x1,x1,#0x4c3
7101e819ac  add x8,sp,#0xa50
7101e819b0  mov w2,#0x2
7101e819b4  add x19,sp,#0xa50
7101e819b8  bl 0x7103776910
7101e819bc  add x8,x23,#0x3c8
7101e819c0  cmp x8,x19
7101e819c4  b.eq 0x7101e819e0
7101e819c8  ldr x8,[sp, #0xa58]
7101e819cc  str xzr,[sp, #0xa58]
7101e819d0  ldr x0,[x23, #0x3d0]
7101e819d4  str x8,[x23, #0x3d0]
7101e819d8  cbz x0,0x7101e819e0
7101e819dc  bl 0x710392eb40
7101e819e0  ldr x0,[sp, #0xa58]
7101e819e4  str x20,[sp, #0xa50]
7101e819e8  str xzr,[sp, #0xa58]
7101e819ec  cbz x0,0x7101e819f4
7101e819f0  bl 0x710392eb40
7101e819f4  ldr x0,[sp, #0x38]
7101e819f8  adrp x1,0x7104319000
7101e819fc  add x1,x1,#0x4c3
7101e81a00  add x8,sp,#0xa50
7101e81a04  mov w2,#0x2
7101e81a08  bl 0x7103776640
7101e81a0c  adrp x1,0x71043ad000
7101e81a10  add x1,x1,#0xe9d
7101e81a14  add x8,sp,#0x80
7101e81a18  add x0,sp,#0xa50
7101e81a1c  add x19,sp,#0x80
7101e81a20  bl 0x71037780e0
7101e81a24  add x8,x23,#0x3f8
7101e81a28  cmp x8,x19
7101e81a2c  b.eq 0x7101e81a48
7101e81a30  ldr x8,[sp, #0x88]
7101e81a34  str xzr,[sp, #0x88]
7101e81a38  ldr x0,[x23, #0x400]
7101e81a3c  str x8,[x23, #0x400]
7101e81a40  cbz x0,0x7101e81a48
7101e81a44  bl 0x710392eb40
7101e81a48  ldr x0,[sp, #0x88]
7101e81a4c  stp x21,xzr,[sp, #0x80]
7101e81a50  cbz x0,0x7101e81a58
7101e81a54  bl 0x710392eb40
7101e81a58  ldr x19,[sp, #0xa58]
7101e81a5c  str x22,[sp, #0xa50]
7101e81a60  str xzr,[sp, #0xa58]
7101e81a64  cbz x19,0x7101e81a80
7101e81a68  ldr x0,[x19, #0x18]
7101e81a6c  stp x20,xzr,[x19, #0x10]
7101e81a70  cbz x0,0x7101e81a78
7101e81a74  bl 0x710392eb40
7101e81a78  mov x0,x19
7101e81a7c  bl 0x710392eb40
7101e81a80  ldrsw x8,[x23, #0x13c]
7101e81a84  cmp w8,#0x13
7101e81a88  b.cs 0x7101e81b08
7101e81a8c  add x8,x23,x8, LSL #0x2
7101e81a90  mov w9,#0x1
7101e81a94  str w9,[x8, #0xf0]
7101e81a98  add sp,sp,#0x1, LSL #12
7101e81a9c  add sp,sp,#0x5b0
7101e81aa0  ldp x29,x30,[sp, #0x60]
7101e81aa4  ldp x20,x19,[sp, #0x50]
7101e81aa8  ldp x22,x21,[sp, #0x40]
7101e81aac  ldp x24,x23,[sp, #0x30]
7101e81ab0  ldp x26,x25,[sp, #0x20]
7101e81ab4  ldp x28,x27,[sp, #0x10]
7101e81ab8  ldr d8,[sp], #0x70
7101e81abc  ret
7101e81ac0  adrp x0,0x710593b000
7101e81ac4  add x0,x0,#0xa40
7101e81ac8  bl 0x71039c06b0
7101e81acc  cbz w0,0x7101e810d8
7101e81ad0  adrp x8,0x710593b000
7101e81ad4  add x8,x8,#0xa48
7101e81ad8  ldarb w8,[x8]
7101e81adc  tbz w8,#0x0,0x7101e81b30
7101e81ae0  adrp x8,0x710593b000
7101e81ae4  adrp x9,0x710593b000
7101e81ae8  add x9,x9,#0xa50
7101e81aec  adrp x0,0x710593b000
7101e81af0  add x0,x0,#0xa40
7101e81af4  str x9,[x8, #0xa58]
7101e81af8  bl 0x71039c06c0
7101e81afc  ldr x23,[sp, #0x40]
7101e81b00  cbnz x21,0x7101e810dc
7101e81b04  b 0x7101e811a4
7101e81b08  bl 0x71039c2650
7101e81b0c  add x0,sp,#0x1, LSL #12
7101e81b10  add x0,x0,#0x418
7101e81b14  bl 0x71039c0c00
7101e81b18  ldr x0,[sp, #0x28]
7101e81b1c  bl 0x71039c0c00
7101e81b20  bl 0x71039c1330
7101e81b24  ldr x0,[sp, #0x10]
7101e81b28  bl 0x71039c0c00
7101e81b2c  bl 0x71039c0c00
7101e81b30  adrp x0,0x710593b000
7101e81b34  add x0,x0,#0xa48
7101e81b38  bl 0x71039c06b0
7101e81b3c  cbz w0,0x7101e81ae0
7101e81b40  adrp x8,0x710593b000
7101e81b44  adrp x0,0x710593b000
7101e81b48  add x0,x0,#0xa48
7101e81b4c  str xzr,[x8, #0xa50]
7101e81b50  bl 0x71039c06c0
7101e81b54  b 0x7101e81ae0
