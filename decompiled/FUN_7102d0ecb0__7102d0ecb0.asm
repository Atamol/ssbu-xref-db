// addr:      7102d0ecb0
// offset:    0x2d0ecb0
// name:      FUN_7102d0ecb0
// mangled:   
// size:      2468

7102d0ecb0  sub sp,sp,#0xf0
7102d0ecb4  stp x28,x27,[sp, #0x90]
7102d0ecb8  stp x26,x25,[sp, #0xa0]
7102d0ecbc  stp x24,x23,[sp, #0xb0]
7102d0ecc0  stp x22,x21,[sp, #0xc0]
7102d0ecc4  stp x20,x19,[sp, #0xd0]
7102d0ecc8  stp x29,x30,[sp, #0xe0]
7102d0eccc  add x29,sp,#0xe0
7102d0ecd0  mov x21,x1
7102d0ecd4  mov x19,x0
7102d0ecd8  str wzr,[x0, #0x18]
7102d0ecdc  mov w0,#0x10
7102d0ece0  orr w1,wzr,#0x18
7102d0ece4  mov x20,x2
7102d0ece8  bl 0x710392e290
7102d0ecec  cbnz x0,0x7102d0ed34
7102d0ecf0  adrp x8,0x7105332000
7102d0ecf4  ldr x0,[x8, #0xf00]
7102d0ecf8  cbz x0,0x7102d0ed30
7102d0ecfc  orr w8,wzr,#0x18
7102d0ed00  str wzr,[sp, #0x10]
7102d0ed04  add x1,sp,#0x10
7102d0ed08  str x8,[sp, #0x50]
7102d0ed0c  ldr x8,[x0]
7102d0ed10  ldr x8,[x8, #0x30]
7102d0ed14  add x2,sp,#0x50
7102d0ed18  blr x8
7102d0ed1c  tbz w0,#0x0,0x7102d0ed30
7102d0ed20  mov w0,#0x10
7102d0ed24  orr w1,wzr,#0x18
7102d0ed28  bl 0x710392e290
7102d0ed2c  cbnz x0,0x7102d0ed34
7102d0ed30  mov x0,xzr
7102d0ed34  add x8,x0,#0x18
7102d0ed38  mov x9,x0
7102d0ed3c  str x8,[x19, #0x10]
7102d0ed40  str x20,[x9], #0x8
7102d0ed44  stp x0,x9,[x19]
7102d0ed48  cbz x20,0x7102d0ed5c
7102d0ed4c  add x0,x20,#0x108
7102d0ed50  strb wzr,[x20, #0x110]
7102d0ed54  bl 0x71025e9d50
7102d0ed58  ldr x0,[x19]
7102d0ed5c  ldr x8,[x0]
7102d0ed60  cbz x8,0x7102d0ed9c
7102d0ed64  ldrb w9,[x8, #0xe0]
7102d0ed68  cbz w9,0x7102d0ed7c
7102d0ed6c  ldr x9,[x8, #0xc8]
7102d0ed70  cbz x9,0x7102d0ed7c
7102d0ed74  mov w10,#0x101
7102d0ed78  strh w10,[x9, #0x30]
7102d0ed7c  ldr x9,[x8, #0xd8]
7102d0ed80  cbz x9,0x7102d0ed8c
7102d0ed84  mov w10,#0x1
7102d0ed88  strb w10,[x9, #0x21]
7102d0ed8c  ldrb w9,[x8, #0xe0]
7102d0ed90  cbz w9,0x7102d0ed9c
7102d0ed94  ldr x8,[x8, #0xb0]
7102d0ed98  strb wzr,[x8, #0x10]
7102d0ed9c  adrp x28,0x710446a000
7102d0eda0  adrp x24,0x7104465000
7102d0eda4  adrp x25,0x7104468000
7102d0eda8  adrp x26,0x710446a000
7102d0edac  cbz x20,0x7102d0eddc
7102d0edb0  ldr x8,[x20, #0xd8]
7102d0edb4  cbz x8,0x7102d0edf4
7102d0edb8  ldr x8,[x8, #0x8]
7102d0edbc  ldr x0,[x8, #0x8]
7102d0edc0  ldr x8,[x0]
7102d0edc4  ldr x8,[x8, #0x18]
7102d0edc8  adrp x1,0x7104410000
7102d0edcc  add x1,x1,#0xa6a
7102d0edd0  blr x8
7102d0edd4  mov w22,w0
7102d0edd8  b 0x7102d0edf8
7102d0eddc  ldr q1,[x28, #0x350]
7102d0ede0  ldr q0,[x24, #0x6b0]
7102d0ede4  mov w27,#0x1
7102d0ede8  ldr q2,[x25, #0xca0]
7102d0edec  ldr q3,[x26, #0x360]
7102d0edf0  b 0x7102d0ee78
7102d0edf4  mov w22,#0xffffffff
7102d0edf8  ldr x8,[x20, #0xd8]
7102d0edfc  cmp x20,#0x0
7102d0ee00  cset w27,eq
7102d0ee04  cbz x8,0x7102d0ee4c
7102d0ee08  ldr x8,[x8, #0x8]
7102d0ee0c  ldr x0,[x8, #0x8]
7102d0ee10  ldr x8,[x0]
7102d0ee14  ldr x8,[x8, #0x10]
7102d0ee18  blr x8
7102d0ee1c  cmp w0,w22
7102d0ee20  b.ls 0x7102d0ee4c
7102d0ee24  ldr x8,[x20, #0xd8]
7102d0ee28  ldr x8,[x8, #0x8]
7102d0ee2c  ldr x0,[x8, #0x48]
7102d0ee30  ldr x8,[x0]
7102d0ee34  ldr x8,[x8, #0x38]
7102d0ee38  mov w1,wzr
7102d0ee3c  blr x8
7102d0ee40  mov w8,w22
7102d0ee44  add x0,x1,x8, LSL #0x6
7102d0ee48  b 0x7102d0ee5c
7102d0ee4c  ldr x0,[x20, #0x90]
7102d0ee50  ldr x8,[x0]
7102d0ee54  ldr x8,[x8, #0x158]
7102d0ee58  blr x8
7102d0ee5c  add x8,x0,#0x10
7102d0ee60  add x9,x0,#0x20
7102d0ee64  add x10,x0,#0x30
7102d0ee68  ldr q0,[x9]
7102d0ee6c  ldr q2,[x0]
7102d0ee70  ldr q3,[x8]
7102d0ee74  ldr q1,[x10]
7102d0ee78  stp q2,q3,[sp, #0x10]
7102d0ee7c  stp q0,q1,[sp, #0x30]
7102d0ee80  ldr x8,[x19]
7102d0ee84  ldr x22,[x8]
7102d0ee88  cbz x22,0x7102d0ef10
7102d0ee8c  ldr x0,[x22, #0x90]
7102d0ee90  ldr x8,[x0]
7102d0ee94  ldr x8,[x8, #0x148]
7102d0ee98  add x1,sp,#0x10
7102d0ee9c  blr x8
7102d0eea0  ldr x22,[x22, #0xd8]
7102d0eea4  cbz x22,0x7102d0ef10
7102d0eea8  ldr x8,[sp, #0x28]
7102d0eeac  str x8,[sp, #0x68]
7102d0eeb0  ldr x8,[sp, #0x20]
7102d0eeb4  str x8,[sp, #0x60]
7102d0eeb8  ldr x8,[sp, #0x18]
7102d0eebc  str x8,[sp, #0x58]
7102d0eec0  ldr x8,[sp, #0x10]
7102d0eec4  str x8,[sp, #0x50]
7102d0eec8  ldr x8,[sp, #0x48]
7102d0eecc  str x8,[sp, #0x88]
7102d0eed0  ldr x8,[sp, #0x40]
7102d0eed4  str x8,[sp, #0x80]
7102d0eed8  ldr x8,[sp, #0x38]
7102d0eedc  str x8,[sp, #0x78]
7102d0eee0  ldr x8,[sp, #0x30]
7102d0eee4  str x8,[sp, #0x70]
7102d0eee8  ldr x8,[x22, #0x8]
7102d0eeec  ldrb w9,[x8, #0xa8]
7102d0eef0  cbz w9,0x7102d0ef08
7102d0eef4  ldr x0,[x8, #0x48]
7102d0eef8  ldr x8,[x0]
7102d0eefc  ldr x8,[x8, #0x20]
7102d0ef00  add x1,sp,#0x50
7102d0ef04  blr x8
7102d0ef08  mov w8,#0x1
7102d0ef0c  strb w8,[x22, #0x20]
7102d0ef10  ldr x22,[x21, #0x310]
7102d0ef14  str w27,[sp, #0xc]
7102d0ef18  cbz x20,0x7102d0ef24
7102d0ef1c  add x23,x20,#0x60
7102d0ef20  b 0x7102d0ef3c
7102d0ef24  adrp x8,0x710532a000
7102d0ef28  add x8,x8,#0xa30
7102d0ef2c  ldarb w8,[x8]
7102d0ef30  tbz w8,#0x0,0x7102d0f5cc
7102d0ef34  adrp x23,0x710532a000
7102d0ef38  add x23,x23,#0xa38
7102d0ef3c  ldp x1,x8,[x22, #0xd0]
7102d0ef40  cmp x1,x8
7102d0ef44  b.eq 0x7102d0ef74
7102d0ef48  ldr w9,[x23]
7102d0ef4c  ldr w10,[x1, #0x8]
7102d0ef50  cmp w10,#0x1
7102d0ef54  b.hi 0x7102d0ef68
7102d0ef58  ldr x10,[x1]
7102d0ef5c  ldr w10,[x10, #0x60]
7102d0ef60  cmp w10,w9
7102d0ef64  b.eq 0x7102d0ef7c
7102d0ef68  add x1,x1,#0x10
7102d0ef6c  cmp x8,x1
7102d0ef70  b.ne 0x7102d0ef4c
7102d0ef74  mov x23,xzr
7102d0ef78  b 0x7102d0ef88
7102d0ef7c  mov x0,x22
7102d0ef80  bl 0x710262fb80
7102d0ef84  mov x23,x0
7102d0ef88  ldp x9,x8,[x19, #0x8]
7102d0ef8c  cmp x9,x8
7102d0ef90  b.cs 0x7102d0efa8
7102d0ef94  str x23,[x9]
7102d0ef98  ldr x8,[x19, #0x8]
7102d0ef9c  add x8,x8,#0x8
7102d0efa0  str x8,[x19, #0x8]
7102d0efa4  b 0x7102d0f0b0
7102d0efa8  ldr x22,[x19]
7102d0efac  sub x24,x9,x22
7102d0efb0  str x21,[sp]
7102d0efb4  mov x21,x28
7102d0efb8  asr x28,x24,#0x3
7102d0efbc  add x9,x28,#0x1
7102d0efc0  lsr x10,x9,#0x3d
7102d0efc4  cbnz x10,0x7102d0f64c
7102d0efc8  sub x8,x8,x22
7102d0efcc  asr x10,x8,#0x3
7102d0efd0  orr x11,xzr,#0xffffffffffffffe
7102d0efd4  cmp x10,x11
7102d0efd8  b.hi 0x7102d0eff8
7102d0efdc  asr x8,x8,#0x2
7102d0efe0  cmp x8,x9
7102d0efe4  csel x27,x9,x8,cc
7102d0efe8  cbz x27,0x7102d0f05c
7102d0efec  lsr x8,x27,#0x3d
7102d0eff0  cbz x8,0x7102d0effc
7102d0eff4  b 0x7102d0f340
7102d0eff8  orr x27,xzr,#0x1fffffffffffffff
7102d0effc  lsl x8,x27,#0x3
7102d0f000  cmp x8,#0x0
7102d0f004  csinc x25,x8,xzr,ne
7102d0f008  mov w0,#0x10
7102d0f00c  mov x1,x25
7102d0f010  bl 0x710392e290
7102d0f014  mov x26,x0
7102d0f018  cbnz x0,0x7102d0f060
7102d0f01c  adrp x8,0x7105332000
7102d0f020  ldr x0,[x8, #0xf00]
7102d0f024  cbz x0,0x7102d0f05c
7102d0f028  str wzr,[sp, #0x10]
7102d0f02c  str x25,[sp, #0x50]
7102d0f030  ldr x8,[x0]
7102d0f034  ldr x8,[x8, #0x30]
7102d0f038  add x1,sp,#0x10
7102d0f03c  add x2,sp,#0x50
7102d0f040  blr x8
7102d0f044  tbz w0,#0x0,0x7102d0f05c
7102d0f048  mov w0,#0x10
7102d0f04c  mov x1,x25
7102d0f050  bl 0x710392e290
7102d0f054  mov x26,x0
7102d0f058  cbnz x0,0x7102d0f060
7102d0f05c  mov x26,xzr
7102d0f060  add x25,x26,x28, LSL #0x3
7102d0f064  cmp x24,#0x1
7102d0f068  str x23,[x25], #0x8
7102d0f06c  add x23,x26,x27, LSL #0x3
7102d0f070  b.lt 0x7102d0f084
7102d0f074  mov x0,x26
7102d0f078  mov x1,x22
7102d0f07c  mov x2,x24
7102d0f080  bl 0x71039c00e0
7102d0f084  stp x26,x25,[x19]
7102d0f088  mov x28,x21
7102d0f08c  ldr w27,[sp, #0xc]
7102d0f090  ldr x21,[sp]
7102d0f094  adrp x24,0x7104465000
7102d0f098  adrp x25,0x7104468000
7102d0f09c  adrp x26,0x710446a000
7102d0f0a0  str x23,[x19, #0x10]
7102d0f0a4  cbz x22,0x7102d0f0b0
7102d0f0a8  mov x0,x22
7102d0f0ac  bl 0x710392eb40
7102d0f0b0  ldr x8,[x19]
7102d0f0b4  ldr x8,[x8, #0x8]
7102d0f0b8  cbz x8,0x7102d0f10c
7102d0f0bc  add x0,x8,#0x108
7102d0f0c0  strb wzr,[x8, #0x110]
7102d0f0c4  bl 0x71025e9d50
7102d0f0c8  ldr x8,[x19]
7102d0f0cc  ldr x8,[x8, #0x8]
7102d0f0d0  cbz x8,0x7102d0f10c
7102d0f0d4  ldrb w9,[x8, #0xe0]
7102d0f0d8  cbz w9,0x7102d0f0ec
7102d0f0dc  ldr x9,[x8, #0xc8]
7102d0f0e0  cbz x9,0x7102d0f0ec
7102d0f0e4  mov w10,#0x101
7102d0f0e8  strh w10,[x9, #0x30]
7102d0f0ec  ldr x9,[x8, #0xd8]
7102d0f0f0  cbz x9,0x7102d0f0fc
7102d0f0f4  mov w10,#0x1
7102d0f0f8  strb w10,[x9, #0x21]
7102d0f0fc  ldrb w9,[x8, #0xe0]
7102d0f100  cbz w9,0x7102d0f10c
7102d0f104  ldr x8,[x8, #0xb0]
7102d0f108  strb wzr,[x8, #0x10]
7102d0f10c  cbz x20,0x7102d0f188
7102d0f110  ldr x8,[x20, #0xd8]
7102d0f114  cbz x8,0x7102d0f188
7102d0f118  ldr x8,[x8, #0x8]
7102d0f11c  ldr x0,[x8, #0x8]
7102d0f120  ldr x8,[x0]
7102d0f124  ldr x8,[x8, #0x18]
7102d0f128  adrp x1,0x7104306000
7102d0f12c  add x1,x1,#0x8e2
7102d0f130  blr x8
7102d0f134  mov w22,w0
7102d0f138  tbnz w27,#0x0,0x7102d0f190
7102d0f13c  ldr x8,[x20, #0xd8]
7102d0f140  cbz x8,0x7102d0f1a4
7102d0f144  ldr x8,[x8, #0x8]
7102d0f148  ldr x0,[x8, #0x8]
7102d0f14c  ldr x8,[x0]
7102d0f150  ldr x8,[x8, #0x10]
7102d0f154  blr x8
7102d0f158  cmp w0,w22
7102d0f15c  b.ls 0x7102d0f1a4
7102d0f160  ldr x8,[x20, #0xd8]
7102d0f164  ldr x8,[x8, #0x8]
7102d0f168  ldr x0,[x8, #0x48]
7102d0f16c  ldr x8,[x0]
7102d0f170  ldr x8,[x8, #0x38]
7102d0f174  mov w1,wzr
7102d0f178  blr x8
7102d0f17c  mov w8,w22
7102d0f180  add x0,x1,x8, LSL #0x6
7102d0f184  b 0x7102d0f1b4
7102d0f188  mov w22,#0xffffffff
7102d0f18c  tbz w27,#0x0,0x7102d0f13c
7102d0f190  ldr q1,[x28, #0x350]
7102d0f194  ldr q0,[x24, #0x6b0]
7102d0f198  ldr q2,[x25, #0xca0]
7102d0f19c  ldr q3,[x26, #0x360]
7102d0f1a0  b 0x7102d0f1d0
7102d0f1a4  ldr x0,[x20, #0x90]
7102d0f1a8  ldr x8,[x0]
7102d0f1ac  ldr x8,[x8, #0x158]
7102d0f1b0  blr x8
7102d0f1b4  add x8,x0,#0x10
7102d0f1b8  add x9,x0,#0x20
7102d0f1bc  add x10,x0,#0x30
7102d0f1c0  ldr q0,[x9]
7102d0f1c4  ldr q2,[x0]
7102d0f1c8  ldr q3,[x8]
7102d0f1cc  ldr q1,[x10]
7102d0f1d0  stp q2,q3,[sp, #0x10]
7102d0f1d4  stp q0,q1,[sp, #0x30]
7102d0f1d8  ldr x8,[x19]
7102d0f1dc  ldr x22,[x8, #0x8]
7102d0f1e0  cbz x22,0x7102d0f268
7102d0f1e4  ldr x0,[x22, #0x90]
7102d0f1e8  ldr x8,[x0]
7102d0f1ec  ldr x8,[x8, #0x148]
7102d0f1f0  add x1,sp,#0x10
7102d0f1f4  blr x8
7102d0f1f8  ldr x22,[x22, #0xd8]
7102d0f1fc  cbz x22,0x7102d0f268
7102d0f200  ldr x8,[sp, #0x28]
7102d0f204  str x8,[sp, #0x68]
7102d0f208  ldr x8,[sp, #0x20]
7102d0f20c  str x8,[sp, #0x60]
7102d0f210  ldr x8,[sp, #0x18]
7102d0f214  str x8,[sp, #0x58]
7102d0f218  ldr x8,[sp, #0x10]
7102d0f21c  str x8,[sp, #0x50]
7102d0f220  ldr x8,[sp, #0x48]
7102d0f224  str x8,[sp, #0x88]
7102d0f228  ldr x8,[sp, #0x40]
7102d0f22c  str x8,[sp, #0x80]
7102d0f230  ldr x8,[sp, #0x38]
7102d0f234  str x8,[sp, #0x78]
7102d0f238  ldr x8,[sp, #0x30]
7102d0f23c  str x8,[sp, #0x70]
7102d0f240  ldr x8,[x22, #0x8]
7102d0f244  ldrb w9,[x8, #0xa8]
7102d0f248  cbz w9,0x7102d0f260
7102d0f24c  ldr x0,[x8, #0x48]
7102d0f250  ldr x8,[x0]
7102d0f254  ldr x8,[x8, #0x20]
7102d0f258  add x1,sp,#0x50
7102d0f25c  blr x8
7102d0f260  mov w8,#0x1
7102d0f264  strb w8,[x22, #0x20]
7102d0f268  ldr x21,[x21, #0x310]
7102d0f26c  cbz x20,0x7102d0f278
7102d0f270  add x22,x20,#0x60
7102d0f274  b 0x7102d0f290
7102d0f278  adrp x8,0x710532a000
7102d0f27c  add x8,x8,#0xa30
7102d0f280  ldarb w8,[x8]
7102d0f284  tbz w8,#0x0,0x7102d0f60c
7102d0f288  adrp x22,0x710532a000
7102d0f28c  add x22,x22,#0xa38
7102d0f290  ldp x1,x8,[x21, #0xd0]
7102d0f294  cmp x1,x8
7102d0f298  b.eq 0x7102d0f2c8
7102d0f29c  ldr w9,[x22]
7102d0f2a0  ldr w10,[x1, #0x8]
7102d0f2a4  cmp w10,#0x1
7102d0f2a8  b.hi 0x7102d0f2bc
7102d0f2ac  ldr x10,[x1]
7102d0f2b0  ldr w10,[x10, #0x60]
7102d0f2b4  cmp w10,w9
7102d0f2b8  b.eq 0x7102d0f2d0
7102d0f2bc  add x1,x1,#0x10
7102d0f2c0  cmp x8,x1
7102d0f2c4  b.ne 0x7102d0f2a0
7102d0f2c8  mov x22,xzr
7102d0f2cc  b 0x7102d0f2dc
7102d0f2d0  mov x0,x21
7102d0f2d4  bl 0x710262fb80
7102d0f2d8  mov x22,x0
7102d0f2dc  ldp x9,x8,[x19, #0x8]
7102d0f2e0  cmp x9,x8
7102d0f2e4  b.cs 0x7102d0f2fc
7102d0f2e8  str x22,[x9]
7102d0f2ec  ldr x8,[x19, #0x8]
7102d0f2f0  add x8,x8,#0x8
7102d0f2f4  str x8,[x19, #0x8]
7102d0f2f8  b 0x7102d0f3f4
7102d0f2fc  ldr x21,[x19]
7102d0f300  sub x23,x9,x21
7102d0f304  asr x26,x23,#0x3
7102d0f308  add x9,x26,#0x1
7102d0f30c  lsr x10,x9,#0x3d
7102d0f310  cbnz x10,0x7102d0f64c
7102d0f314  sub x8,x8,x21
7102d0f318  asr x10,x8,#0x3
7102d0f31c  orr x11,xzr,#0xffffffffffffffe
7102d0f320  cmp x10,x11
7102d0f324  b.hi 0x7102d0f344
7102d0f328  asr x8,x8,#0x2
7102d0f32c  cmp x8,x9
7102d0f330  csel x27,x9,x8,cc
7102d0f334  cbz x27,0x7102d0f3a8
7102d0f338  lsr x8,x27,#0x3d
7102d0f33c  cbz x8,0x7102d0f348
7102d0f340  bl 0x71039c2650
7102d0f344  orr x27,xzr,#0x1fffffffffffffff
7102d0f348  lsl x8,x27,#0x3
7102d0f34c  cmp x8,#0x0
7102d0f350  csinc x24,x8,xzr,ne
7102d0f354  mov w0,#0x10
7102d0f358  mov x1,x24
7102d0f35c  bl 0x710392e290
7102d0f360  mov x25,x0
7102d0f364  cbnz x0,0x7102d0f3ac
7102d0f368  adrp x8,0x7105332000
7102d0f36c  ldr x0,[x8, #0xf00]
7102d0f370  cbz x0,0x7102d0f3a8
7102d0f374  str wzr,[sp, #0x10]
7102d0f378  str x24,[sp, #0x50]
7102d0f37c  ldr x8,[x0]
7102d0f380  ldr x8,[x8, #0x30]
7102d0f384  add x1,sp,#0x10
7102d0f388  add x2,sp,#0x50
7102d0f38c  blr x8
7102d0f390  tbz w0,#0x0,0x7102d0f3a8
7102d0f394  mov w0,#0x10
7102d0f398  mov x1,x24
7102d0f39c  bl 0x710392e290
7102d0f3a0  mov x25,x0
7102d0f3a4  cbnz x0,0x7102d0f3ac
7102d0f3a8  mov x25,xzr
7102d0f3ac  add x24,x25,x26, LSL #0x3
7102d0f3b0  cmp x23,#0x1
7102d0f3b4  str x22,[x24], #0x8
7102d0f3b8  add x22,x25,x27, LSL #0x3
7102d0f3bc  b.lt 0x7102d0f3d0
7102d0f3c0  mov x0,x25
7102d0f3c4  mov x1,x21
7102d0f3c8  mov x2,x23
7102d0f3cc  bl 0x71039c00e0
7102d0f3d0  stp x25,x24,[x19]
7102d0f3d4  ldr w27,[sp, #0xc]
7102d0f3d8  adrp x24,0x7104465000
7102d0f3dc  adrp x25,0x7104468000
7102d0f3e0  adrp x26,0x710446a000
7102d0f3e4  str x22,[x19, #0x10]
7102d0f3e8  cbz x21,0x7102d0f3f4
7102d0f3ec  mov x0,x21
7102d0f3f0  bl 0x710392eb40
7102d0f3f4  ldr x8,[x19]
7102d0f3f8  ldr x8,[x8, #0x10]
7102d0f3fc  cbz x8,0x7102d0f450
7102d0f400  add x0,x8,#0x108
7102d0f404  strb wzr,[x8, #0x110]
7102d0f408  bl 0x71025e9d50
7102d0f40c  ldr x8,[x19]
7102d0f410  ldr x8,[x8, #0x10]
7102d0f414  cbz x8,0x7102d0f450
7102d0f418  ldrb w9,[x8, #0xe0]
7102d0f41c  cbz w9,0x7102d0f430
7102d0f420  ldr x9,[x8, #0xc8]
7102d0f424  cbz x9,0x7102d0f430
7102d0f428  mov w10,#0x101
7102d0f42c  strh w10,[x9, #0x30]
7102d0f430  ldr x9,[x8, #0xd8]
7102d0f434  cbz x9,0x7102d0f440
7102d0f438  mov w10,#0x1
7102d0f43c  strb w10,[x9, #0x21]
7102d0f440  ldrb w9,[x8, #0xe0]
7102d0f444  cbz w9,0x7102d0f450
7102d0f448  ldr x8,[x8, #0xb0]
7102d0f44c  strb wzr,[x8, #0x10]
7102d0f450  cbz x20,0x7102d0f4cc
7102d0f454  ldr x8,[x20, #0xd8]
7102d0f458  cbz x8,0x7102d0f4cc
7102d0f45c  ldr x8,[x8, #0x8]
7102d0f460  ldr x0,[x8, #0x8]
7102d0f464  ldr x8,[x0]
7102d0f468  ldr x8,[x8, #0x18]
7102d0f46c  adrp x1,0x7104306000
7102d0f470  add x1,x1,#0x8fd
7102d0f474  blr x8
7102d0f478  mov w21,w0
7102d0f47c  tbnz w27,#0x0,0x7102d0f4d4
7102d0f480  ldr x8,[x20, #0xd8]
7102d0f484  cbz x8,0x7102d0f4e8
7102d0f488  ldr x8,[x8, #0x8]
7102d0f48c  ldr x0,[x8, #0x8]
7102d0f490  ldr x8,[x0]
7102d0f494  ldr x8,[x8, #0x10]
7102d0f498  blr x8
7102d0f49c  cmp w0,w21
7102d0f4a0  b.ls 0x7102d0f4e8
7102d0f4a4  ldr x8,[x20, #0xd8]
7102d0f4a8  ldr x8,[x8, #0x8]
7102d0f4ac  ldr x0,[x8, #0x48]
7102d0f4b0  ldr x8,[x0]
7102d0f4b4  ldr x8,[x8, #0x38]
7102d0f4b8  mov w1,wzr
7102d0f4bc  blr x8
7102d0f4c0  mov w8,w21
7102d0f4c4  add x0,x1,x8, LSL #0x6
7102d0f4c8  b 0x7102d0f4f8
7102d0f4cc  mov w21,#0xffffffff
7102d0f4d0  tbz w27,#0x0,0x7102d0f480
7102d0f4d4  ldr q1,[x28, #0x350]
7102d0f4d8  ldr q0,[x24, #0x6b0]
7102d0f4dc  ldr q2,[x25, #0xca0]
7102d0f4e0  ldr q3,[x26, #0x360]
7102d0f4e4  b 0x7102d0f514
7102d0f4e8  ldr x0,[x20, #0x90]
7102d0f4ec  ldr x8,[x0]
7102d0f4f0  ldr x8,[x8, #0x158]
7102d0f4f4  blr x8
7102d0f4f8  add x8,x0,#0x10
7102d0f4fc  add x9,x0,#0x20
7102d0f500  add x10,x0,#0x30
7102d0f504  ldr q0,[x9]
7102d0f508  ldr q2,[x0]
7102d0f50c  ldr q3,[x8]
7102d0f510  ldr q1,[x10]
7102d0f514  stp q2,q3,[sp, #0x10]
7102d0f518  stp q0,q1,[sp, #0x30]
7102d0f51c  ldr x8,[x19]
7102d0f520  ldr x19,[x8, #0x10]
7102d0f524  cbz x19,0x7102d0f5ac
7102d0f528  ldr x0,[x19, #0x90]
7102d0f52c  ldr x8,[x0]
7102d0f530  ldr x8,[x8, #0x148]
7102d0f534  add x1,sp,#0x10
7102d0f538  blr x8
7102d0f53c  ldr x19,[x19, #0xd8]
7102d0f540  cbz x19,0x7102d0f5ac
7102d0f544  ldr x8,[sp, #0x28]
7102d0f548  str x8,[sp, #0x68]
7102d0f54c  ldr x8,[sp, #0x20]
7102d0f550  str x8,[sp, #0x60]
7102d0f554  ldr x8,[sp, #0x18]
7102d0f558  str x8,[sp, #0x58]
7102d0f55c  ldr x8,[sp, #0x10]
7102d0f560  str x8,[sp, #0x50]
7102d0f564  ldr x8,[sp, #0x48]
7102d0f568  str x8,[sp, #0x88]
7102d0f56c  ldr x8,[sp, #0x40]
7102d0f570  str x8,[sp, #0x80]
7102d0f574  ldr x8,[sp, #0x38]
7102d0f578  str x8,[sp, #0x78]
7102d0f57c  ldr x8,[sp, #0x30]
7102d0f580  str x8,[sp, #0x70]
7102d0f584  ldr x8,[x19, #0x8]
7102d0f588  ldrb w9,[x8, #0xa8]
7102d0f58c  cbz w9,0x7102d0f5a4
7102d0f590  ldr x0,[x8, #0x48]
7102d0f594  ldr x8,[x0]
7102d0f598  ldr x8,[x8, #0x20]
7102d0f59c  add x1,sp,#0x50
7102d0f5a0  blr x8
7102d0f5a4  mov w8,#0x1
7102d0f5a8  strb w8,[x19, #0x20]
7102d0f5ac  ldp x29,x30,[sp, #0xe0]
7102d0f5b0  ldp x20,x19,[sp, #0xd0]
7102d0f5b4  ldp x22,x21,[sp, #0xc0]
7102d0f5b8  ldp x24,x23,[sp, #0xb0]
7102d0f5bc  ldp x26,x25,[sp, #0xa0]
7102d0f5c0  ldp x28,x27,[sp, #0x90]
7102d0f5c4  add sp,sp,#0xf0
7102d0f5c8  ret
7102d0f5cc  adrp x0,0x710532a000
7102d0f5d0  add x0,x0,#0xa30
7102d0f5d4  bl 0x71039c06b0
7102d0f5d8  adrp x23,0x710532a000
7102d0f5dc  add x23,x23,#0xa38
7102d0f5e0  cbz w0,0x7102d0f5f8
7102d0f5e4  orr w8,wzr,#0xffffff
7102d0f5e8  adrp x0,0x710532a000
7102d0f5ec  add x0,x0,#0xa30
7102d0f5f0  str w8,[x23]
7102d0f5f4  bl 0x71039c06c0
7102d0f5f8  ldr w27,[sp, #0xc]
7102d0f5fc  adrp x24,0x7104465000
7102d0f600  adrp x25,0x7104468000
7102d0f604  adrp x26,0x710446a000
7102d0f608  b 0x7102d0ef3c
7102d0f60c  adrp x0,0x710532a000
7102d0f610  add x0,x0,#0xa30
7102d0f614  bl 0x71039c06b0
7102d0f618  adrp x22,0x710532a000
7102d0f61c  add x22,x22,#0xa38
7102d0f620  cbz w0,0x7102d0f638
7102d0f624  orr w8,wzr,#0xffffff
7102d0f628  adrp x0,0x710532a000
7102d0f62c  add x0,x0,#0xa30
7102d0f630  str w8,[x22]
7102d0f634  bl 0x71039c06c0
7102d0f638  ldr w27,[sp, #0xc]
7102d0f63c  adrp x24,0x7104465000
7102d0f640  adrp x25,0x7104468000
7102d0f644  adrp x26,0x710446a000
7102d0f648  b 0x7102d0f290
7102d0f64c  mov x0,x19
7102d0f650  bl 0x71039c0c00
