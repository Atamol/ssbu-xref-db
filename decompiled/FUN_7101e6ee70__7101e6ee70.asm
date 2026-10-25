// addr:      7101e6ee70
// offset:    0x1e6ee70
// name:      FUN_7101e6ee70
// mangled:   
// size:      3840

7101e6ee70  stp x28,x27,[sp, #-0x60]!
7101e6ee74  stp x26,x25,[sp, #0x10]
7101e6ee78  stp x24,x23,[sp, #0x20]
7101e6ee7c  stp x22,x21,[sp, #0x30]
7101e6ee80  stp x20,x19,[sp, #0x40]
7101e6ee84  stp x29,x30,[sp, #0x50]
7101e6ee88  add x29,sp,#0x50
7101e6ee8c  sub sp,sp,#0x1d0
7101e6ee90  ldrb w8,[x0, #0x2db]
7101e6ee94  mov x19,x1
7101e6ee98  mov x20,x0
7101e6ee9c  ubfx w24,w19,#0x8,#0x8
7101e6eea0  add x25,x0,#0x2db
7101e6eea4  tst w19,#0xff
7101e6eea8  str q0,[sp]
7101e6eeac  cbz w8,0x7101e6eed8
7101e6eeb0  ldrb w1,[x20, #0x2dc]
7101e6eeb4  b.eq 0x7101e6eec0
7101e6eeb8  cmp w1,w24
7101e6eebc  b.eq 0x7101e6f390
7101e6eec0  add x0,x20,#0x208
7101e6eec4  mov w2,wzr
7101e6eec8  bl 0x7101e6fd70
7101e6eecc  tst w19,#0xff
7101e6eed0  b.ne 0x7101e6eedc
7101e6eed4  b 0x7101e6f38c
7101e6eed8  b.eq 0x7101e6f390
7101e6eedc  add x22,x20,#0x208
7101e6eee0  mov w2,#0x1
7101e6eee4  mov x0,x22
7101e6eee8  mov w1,w24
7101e6eeec  mov w21,#0x1
7101e6eef0  bl 0x7101e6fd70
7101e6eef4  ldrb w8,[x20, #0x298]
7101e6eef8  cbnz w8,0x7101e6ef0c
7101e6eefc  fmov s0,0x3f800000
7101e6ef00  add x0,x20,#0x258
7101e6ef04  bl 0x710377aee0
7101e6ef08  strb w21,[x20, #0x298]
7101e6ef0c  mov x21,#0xff0000000000
7101e6ef10  movk x21,#0x2dff, LSL #48
7101e6ef14  cmp w24,#0x3
7101e6ef18  mov x23,x21
7101e6ef1c  b.hi 0x7101e6f2ac
7101e6ef20  add x8,x20,w24, UXTW  #0x3
7101e6ef24  ldr x26,[x8, #0x210]
7101e6ef28  mov x23,x21
7101e6ef2c  cbz x26,0x7101e6f2ac
7101e6ef30  ldrb w8,[x26, #0xf9]
7101e6ef34  cbz w8,0x7101e6efc0
7101e6ef38  mov x0,x22
7101e6ef3c  mov w1,w24
7101e6ef40  bl 0x7101e70990
7101e6ef44  mov x23,x0
7101e6ef48  mvn w8,w23
7101e6ef4c  tst w8,#0xffff
7101e6ef50  b.eq 0x7101e6fc74
7101e6ef54  ldrb w8,[x26, #0xfa]
7101e6ef58  cbz w8,0x7101e6f0cc
7101e6ef5c  ldrb w1,[x20, #0x2a8]
7101e6ef60  adrp x0,0x710425f000
7101e6ef64  add x0,x0,#0xafc
7101e6ef68  add x8,sp,#0xf0
7101e6ef6c  add x24,sp,#0xf0
7101e6ef70  bl 0x71003a4ca0
7101e6ef74  mov x8,xzr
7101e6ef78  add x9,x24,#0x8
7101e6ef7c  sub x10,x29,#0xe8
7101e6ef80  stur wzr,[x29, #-0xe8]
7101e6ef84  b 0x7101e6ef90
7101e6ef88  add x8,x8,#0x2
7101e6ef8c  strb w11,[x12, #0x9]
7101e6ef90  add x11,x9,x8
7101e6ef94  ldrb w13,[x11]
7101e6ef98  cbz w13,0x7101e6f1a0
7101e6ef9c  add w14,w8,#0x1
7101e6efa0  add x12,x10,x8
7101e6efa4  cmp w14,#0x3f
7101e6efa8  strb w13,[x12, #0x8]
7101e6efac  b.cs 0x7101e6f19c
7101e6efb0  ldrb w11,[x11, #0x1]
7101e6efb4  cbnz w11,0x7101e6ef88
7101e6efb8  add x8,x8,#0x1
7101e6efbc  b 0x7101e6f1a0
7101e6efc0  ldr x8,[x26, #0xf0]
7101e6efc4  mov x9,#-0x2e00000000000000
7101e6efc8  and x9,x8,x9
7101e6efcc  and x8,x8,#0xffffffffff
7101e6efd0  orr x10,x9,x21
7101e6efd4  orr x23,x8,x10
7101e6efd8  mov x10,#0x2d00000000000000
7101e6efdc  orr x9,x9,x10
7101e6efe0  cmp x9,x10
7101e6efe4  b.ne 0x7101e6f2ac
7101e6efe8  cbz x8,0x7101e6f2ac
7101e6efec  adrp x8,0x710532f000
7101e6eff0  ldr x8,[x8, #0x730]
7101e6eff4  ldr x8,[x8, #0x8]
7101e6eff8  ldr x1,[x8, #0x318]
7101e6effc  ldr x24,[x20, #0x2b0]
7101e6f000  sub x0,x29,#0xe8
7101e6f004  mov x2,x23
7101e6f008  sub x26,x29,#0xe8
7101e6f00c  bl 0x710327cd40
7101e6f010  ldrb w1,[x20, #0x2a8]
7101e6f014  add x2,x26,#0x8
7101e6f018  adrp x0,0x710433a000
7101e6f01c  add x0,x0,#0x815
7101e6f020  add x8,sp,#0x18
7101e6f024  add x26,sp,#0x18
7101e6f028  bl 0x71003a4ca0
7101e6f02c  ldr x8,[x24]
7101e6f030  add x1,x26,#0x8
7101e6f034  add x0,x8,#0x10
7101e6f038  bl 0x710377a120
7101e6f03c  ldr x8,[x24]
7101e6f040  ldr x8,[x8, #0x18]
7101e6f044  ldr x8,[x8, #0x10]
7101e6f048  cbz x8,0x7101e6f29c
7101e6f04c  ldr x9,[x8, #0xd8]
7101e6f050  cbz x9,0x7101e6f298
7101e6f054  ldrh w12,[x9]
7101e6f058  cbz w12,0x7101e6f298
7101e6f05c  mov w10,wzr
7101e6f060  mov w8,wzr
7101e6f064  orr w11,wzr,#0x3
7101e6f068  mov x13,x9
7101e6f06c  orr w14,w12,#0x1
7101e6f070  and w14,w14,#0xffff
7101e6f074  cmp w14,#0xf
7101e6f078  b.ne 0x7101e6f09c
7101e6f07c  and w14,w12,#0xffff
7101e6f080  cmp w14,#0xe
7101e6f084  b.ne 0x7101e6f0a8
7101e6f088  ldrh w13,[x13, #0x6]
7101e6f08c  lsr w13,w13,#0x1
7101e6f090  mov w12,wzr
7101e6f094  add w13,w13,#0x4
7101e6f098  b 0x7101e6f0b4
7101e6f09c  mov w12,#0x1
7101e6f0a0  mov w13,#0x1
7101e6f0a4  b 0x7101e6f0b4
7101e6f0a8  cmp w14,#0xf
7101e6f0ac  mov w12,wzr
7101e6f0b0  csel w13,w11,wzr,eq
7101e6f0b4  add w10,w13,w10
7101e6f0b8  add x13,x9,w10, UXTW  #0x1
7101e6f0bc  add w8,w12,w8
7101e6f0c0  ldrh w12,[x13]
7101e6f0c4  cbnz w12,0x7101e6f06c
7101e6f0c8  b 0x7101e6f29c
7101e6f0cc  adrp x8,0x710532f000
7101e6f0d0  mov x26,x8
7101e6f0d4  ldr x8,[x8, #0x730]
7101e6f0d8  ldr x8,[x8, #0x8]
7101e6f0dc  ldr x8,[x8, #0x1d8]
7101e6f0e0  lsl x27,x23,#0x30
7101e6f0e4  add x9,x8,x27, ASR #0x2f
7101e6f0e8  ldp x10,x8,[x8, #0x20]
7101e6f0ec  ldrh w9,[x9, #0x60]
7101e6f0f0  strb wzr,[sp, #0xf8]
7101e6f0f4  str xzr,[sp, #0xf0]
7101e6f0f8  sub x8,x8,x10
7101e6f0fc  orr x11,xzr,#-0x3333333333333334
7101e6f100  movk x11,#0xcccd
7101e6f104  asr x8,x8,#0x6
7101e6f108  mul x8,x8,x11
7101e6f10c  mov w11,#0x140
7101e6f110  madd x10,x9,x11,x10
7101e6f114  adrp x11,0x7105182000
7101e6f118  add x11,x11,#0xb08
7101e6f11c  cmp x8,x9
7101e6f120  csel x28,x10,x11,hi
7101e6f124  ldrsb x8,[x28, #0x68]
7101e6f128  adrp x0,0x7104867000
7101e6f12c  add x0,x0,#0xc2e
7101e6f130  cmp x8,#0x3
7101e6f134  b.hi 0x7101e6f144
7101e6f138  adrp x9,0x71050b1000
7101e6f13c  add x9,x9,#0xe90
7101e6f140  ldr x0,[x9, x8, LSL #0x3]
7101e6f144  ldrb w1,[x20, #0x2a8]
7101e6f148  sub x8,x29,#0xe8
7101e6f14c  sub x24,x29,#0xe8
7101e6f150  bl 0x71003a4ca0
7101e6f154  mov x8,xzr
7101e6f158  add x9,x24,#0x8
7101e6f15c  add x10,sp,#0xf0
7101e6f160  b 0x7101e6f16c
7101e6f164  add x8,x8,#0x2
7101e6f168  strb w11,[x12, #0x9]
7101e6f16c  add x11,x9,x8
7101e6f170  ldrb w13,[x11]
7101e6f174  cbz w13,0x7101e6f3b4
7101e6f178  add w14,w8,#0x1
7101e6f17c  add x12,x10,x8
7101e6f180  cmp w14,#0x3f
7101e6f184  strb w13,[x12, #0x8]
7101e6f188  b.cs 0x7101e6f3b0
7101e6f18c  ldrb w11,[x11, #0x1]
7101e6f190  cbnz w11,0x7101e6f164
7101e6f194  add x8,x8,#0x1
7101e6f198  b 0x7101e6f3b4
7101e6f19c  add w8,w8,#0x1
7101e6f1a0  sub x12,x29,#0xe8
7101e6f1a4  add x10,x12,#0x8
7101e6f1a8  mov w9,#0x9dc5
7101e6f1ac  movk w9,#0x811c, LSL #16
7101e6f1b0  mov w11,w9
7101e6f1b4  strb wzr,[x10, w8, UXTW ]
7101e6f1b8  ldurb w10,[x29, #-0xe0]
7101e6f1bc  stur w8,[x29, #-0xe4]
7101e6f1c0  cbz w10,0x7101e6f1e8
7101e6f1c4  add x8,x12,#0x9
7101e6f1c8  mov w12,#0x89
7101e6f1cc  mov w13,w10
7101e6f1d0  mov w11,w9
7101e6f1d4  mul w11,w11,w12
7101e6f1d8  and w13,w13,#0xff
7101e6f1dc  eor w11,w11,w13
7101e6f1e0  ldrb w13,[x8], #0x1
7101e6f1e4  cbnz w13,0x7101e6f1d4
7101e6f1e8  stur w11,[x29, #-0xe8]
7101e6f1ec  sturb wzr,[x29, #-0x98]
7101e6f1f0  stp w9,wzr,[x29, #-0xa0]
7101e6f1f4  str wzr,[sp, #0x18]
7101e6f1f8  cbz w10,0x7101e6f234
7101e6f1fc  sub x8,x29,#0xe8
7101e6f200  add x11,x8,#0x9
7101e6f204  add x8,sp,#0x18
7101e6f208  mov x12,xzr
7101e6f20c  add x13,x8,#0x8
7101e6f210  add w8,w12,#0x1
7101e6f214  cmp w8,#0x3e
7101e6f218  strb w10,[x13, x12, LSL ]
7101e6f21c  b.hi 0x7101e6f23c
7101e6f220  ldrb w10,[x11, x12, LSL ]
7101e6f224  add x8,x12,#0x1
7101e6f228  mov x12,x8
7101e6f22c  cbnz w10,0x7101e6f210
7101e6f230  b 0x7101e6f240
7101e6f234  mov w8,wzr
7101e6f238  b 0x7101e6f240
7101e6f23c  orr w8,wzr,#0x3f
7101e6f240  add x11,sp,#0x18
7101e6f244  add x3,x11,#0x8
7101e6f248  mov w12,w9
7101e6f24c  strb wzr,[x3, w8, UXTW ]
7101e6f250  ldrb w10,[sp, #0x20]
7101e6f254  str w8,[sp, #0x1c]
7101e6f258  cbz w10,0x7101e6f27c
7101e6f25c  add x11,x11,#0x9
7101e6f260  mov w13,#0x89
7101e6f264  mov w12,w9
7101e6f268  mul w12,w12,w13
7101e6f26c  and w10,w10,#0xff
7101e6f270  eor w12,w12,w10
7101e6f274  ldrb w10,[x11], #0x1
7101e6f278  cbnz w10,0x7101e6f268
7101e6f27c  mov w11,wzr
7101e6f280  str w12,[sp, #0x18]
7101e6f284  strb wzr,[sp, #0x68]
7101e6f288  stp w9,wzr,[sp, #0x60]
7101e6f28c  ldr x24,[x20, #0x2b0]
7101e6f290  cbz w11,0x7101e6fb98
7101e6f294  b 0x7101e6fc40
7101e6f298  mov w8,wzr
7101e6f29c  str w8,[x24, #0x10]
7101e6f2a0  ldr x0,[x20, #0x2b0]
7101e6f2a4  mov w1,wzr
7101e6f2a8  bl 0x7101e94ba0
7101e6f2ac  ldrb w8,[x25]
7101e6f2b0  cbz w8,0x7101e6f2f0
7101e6f2b4  ldrb w1,[x20, #0x2dc]
7101e6f2b8  cmp x1,#0x3
7101e6f2bc  b.hi 0x7101e6f33c
7101e6f2c0  add x8,x20,x1, LSL #0x3
7101e6f2c4  ldr x8,[x8, #0x210]
7101e6f2c8  cbz x8,0x7101e6f33c
7101e6f2cc  ldrb w9,[x8, #0xf9]
7101e6f2d0  cbz w9,0x7101e6f324
7101e6f2d4  mov x0,x22
7101e6f2d8  bl 0x7101e70990
7101e6f2dc  ldr x2,[x20, #0x230]
7101e6f2e0  and x1,x0,#0xffff
7101e6f2e4  add x0,x20,#0x248
7101e6f2e8  bl 0x7101e70a60
7101e6f2ec  b 0x7101e6f354
7101e6f2f0  ldr x8,[x20, #0x2a0]
7101e6f2f4  add x0,x20,#0x238
7101e6f2f8  sub x2,x29,#0xe8
7101e6f2fc  mov x1,x23
7101e6f300  stur x8,[x29, #-0xe8]
7101e6f304  bl 0x7101e70e20
7101e6f308  ldr x8,[x20, #0x2a0]
7101e6f30c  add x0,x20,#0x248
7101e6f310  sub x2,x29,#0xe8
7101e6f314  mov x1,x23
7101e6f318  stur x8,[x29, #-0xe8]
7101e6f31c  bl 0x7101e70e20
7101e6f320  b 0x7101e6f38c
7101e6f324  ldr x8,[x8, #0xf0]
7101e6f328  mov x9,#-0x2e00000000000000
7101e6f32c  and x9,x8,x9
7101e6f330  and x8,x8,#0xffffffffff
7101e6f334  orr x9,x9,x21
7101e6f338  orr x21,x8,x9
7101e6f33c  ldr x8,[x20, #0x2a0]
7101e6f340  add x0,x20,#0x248
7101e6f344  sub x2,x29,#0xe8
7101e6f348  mov x1,x21
7101e6f34c  stur x8,[x29, #-0xe8]
7101e6f350  bl 0x7101e70e20
7101e6f354  ldr x8,[x20, #0x2a0]
7101e6f358  add x0,x20,#0x238
7101e6f35c  sub x2,x29,#0xe8
7101e6f360  mov x1,x23
7101e6f364  stur x8,[x29, #-0xe8]
7101e6f368  bl 0x7101e70e20
7101e6f36c  ldr q0,[sp]
7101e6f370  fcmp s0,#0.0
7101e6f374  b.le 0x7101e6f380
7101e6f378  add x0,x20,#0x278
7101e6f37c  b 0x7101e6f384
7101e6f380  add x0,x20,#0x288
7101e6f384  fmov s0,0x3f800000
7101e6f388  bl 0x710377aee0
7101e6f38c  strh w19,[x25]
7101e6f390  add sp,sp,#0x1d0
7101e6f394  ldp x29,x30,[sp, #0x50]
7101e6f398  ldp x20,x19,[sp, #0x40]
7101e6f39c  ldp x22,x21,[sp, #0x30]
7101e6f3a0  ldp x24,x23,[sp, #0x20]
7101e6f3a4  ldp x26,x25,[sp, #0x10]
7101e6f3a8  ldp x28,x27,[sp], #0x60
7101e6f3ac  ret
7101e6f3b0  add w8,w8,#0x1
7101e6f3b4  add x10,sp,#0xf0
7101e6f3b8  add x9,x10,#0x8
7101e6f3bc  mov x12,x26
7101e6f3c0  strb wzr,[x9, w8, UXTW ]
7101e6f3c4  ldrb w26,[sp, #0xf8]
7101e6f3c8  mov w24,#0x9dc5
7101e6f3cc  movk w24,#0x811c, LSL #16
7101e6f3d0  mov w9,w24
7101e6f3d4  str w8,[sp, #0xf4]
7101e6f3d8  cbz w26,0x7101e6f400
7101e6f3dc  add x8,x10,#0x9
7101e6f3e0  mov w10,#0x89
7101e6f3e4  mov w11,w26
7101e6f3e8  mov w9,w24
7101e6f3ec  mul w9,w9,w10
7101e6f3f0  and w11,w11,#0xff
7101e6f3f4  eor w9,w9,w11
7101e6f3f8  ldrb w11,[x8], #0x1
7101e6f3fc  cbnz w11,0x7101e6f3ec
7101e6f400  ldr x8,[x12, #0x730]
7101e6f404  str w9,[sp, #0xf0]
7101e6f408  strb wzr,[sp, #0xb0]
7101e6f40c  str xzr,[sp, #0xa8]
7101e6f410  ldr x8,[x8, #0x8]
7101e6f414  ldr x11,[x8, #0x1d8]
7101e6f418  add x9,x11,x27, ASR #0x2f
7101e6f41c  ldp x10,x11,[x11, #0x20]
7101e6f420  ldrh w9,[x9, #0x60]
7101e6f424  sub x11,x11,x10
7101e6f428  lsr x11,x11,#0x6
7101e6f42c  mov w12,#0xcccd
7101e6f430  movk w12,#0xcccc, LSL #16
7101e6f434  mul w11,w11,w12
7101e6f438  cmp w9,w11
7101e6f43c  b.cs 0x7101e6f450
7101e6f440  mov w11,#0x140
7101e6f444  madd x9,x9,x11,x10
7101e6f448  ldrb w9,[x9, #0x5e]
7101e6f44c  cbz w9,0x7101e6f538
7101e6f450  ldr x0,[x8, #0x218]
7101e6f454  ldrh w1,[x28, #0x6a]
7101e6f458  bl 0x71032a1630
7101e6f45c  mov x9,#0x9ac0
7101e6f460  movk x9,#0x9f92, LSL #16
7101e6f464  and x8,x0,#0xffffffffff
7101e6f468  movk x9,#0x14, LSL #32
7101e6f46c  cmp x8,x9
7101e6f470  b.le 0x7101e6f4bc
7101e6f474  mov x9,#0x8008
7101e6f478  movk x9,#0x6cbc, LSL #16
7101e6f47c  movk x9,#0x16, LSL #32
7101e6f480  cmp x8,x9
7101e6f484  b.gt 0x7101e6f504
7101e6f488  mov x9,#0x9ac1
7101e6f48c  movk x9,#0x9f92, LSL #16
7101e6f490  movk x9,#0x14, LSL #32
7101e6f494  cmp x8,x9
7101e6f498  b.eq 0x7101e6f598
7101e6f49c  mov x9,#0xda7f
7101e6f4a0  movk x9,#0x1abe, LSL #16
7101e6f4a4  movk x9,#0x16, LSL #32
7101e6f4a8  cmp x8,x9
7101e6f4ac  b.ne 0x7101e6f5c8
7101e6f4b0  adrp x0,0x71042b4000
7101e6f4b4  add x0,x0,#0x9c9
7101e6f4b8  b 0x7101e6f8c0
7101e6f4bc  mov x9,#0x485c
7101e6f4c0  movk x9,#0xc26d, LSL #16
7101e6f4c4  movk x9,#0x13, LSL #32
7101e6f4c8  cmp x8,x9
7101e6f4cc  b.eq 0x7101e6f5a4
7101e6f4d0  mov x9,#0xc171
7101e6f4d4  movk x9,#0x29a1, LSL #16
7101e6f4d8  movk x9,#0x14, LSL #32
7101e6f4dc  cmp x8,x9
7101e6f4e0  b.eq 0x7101e6f5b0
7101e6f4e4  mov x9,#0x88a7
7101e6f4e8  movk x9,#0x6fb7, LSL #16
7101e6f4ec  movk x9,#0x14, LSL #32
7101e6f4f0  cmp x8,x9
7101e6f4f4  b.ne 0x7101e6f5c8
7101e6f4f8  adrp x0,0x71043e0000
7101e6f4fc  add x0,x0,#0x7ff
7101e6f500  b 0x7101e6f8c0
7101e6f504  mov x9,#0x8009
7101e6f508  movk x9,#0x6cbc, LSL #16
7101e6f50c  movk x9,#0x16, LSL #32
7101e6f510  cmp x8,x9
7101e6f514  b.eq 0x7101e6f5bc
7101e6f518  mov x9,#0xe0b
7101e6f51c  movk x9,#0xaa49, LSL #16
7101e6f520  movk x9,#0x17, LSL #32
7101e6f524  cmp x8,x9
7101e6f528  b.ne 0x7101e6f5c8
7101e6f52c  adrp x0,0x7104433000
7101e6f530  add x0,x0,#0x6b2
7101e6f534  b 0x7101e6f8c0
7101e6f538  ldrb w1,[x20, #0x2a8]
7101e6f53c  adrp x0,0x710439d000
7101e6f540  add x0,x0,#0xa30
7101e6f544  sub x8,x29,#0xe8
7101e6f548  sub x27,x29,#0xe8
7101e6f54c  bl 0x71003a4ca0
7101e6f550  mov x8,xzr
7101e6f554  add x9,x27,#0x8
7101e6f558  add x10,sp,#0xa8
7101e6f55c  b 0x7101e6f568
7101e6f560  add x8,x8,#0x2
7101e6f564  strb w11,[x12, #0x9]
7101e6f568  add x11,x9,x8
7101e6f56c  ldrb w13,[x11]
7101e6f570  cbz w13,0x7101e6f664
7101e6f574  add w14,w8,#0x1
7101e6f578  add x12,x10,x8
7101e6f57c  cmp w14,#0x3f
7101e6f580  strb w13,[x12, #0x8]
7101e6f584  b.cs 0x7101e6f660
7101e6f588  ldrb w11,[x11, #0x1]
7101e6f58c  cbnz w11,0x7101e6f560
7101e6f590  add x8,x8,#0x1
7101e6f594  b 0x7101e6f664
7101e6f598  adrp x0,0x710435b000
7101e6f59c  add x0,x0,#0xdd4
7101e6f5a0  b 0x7101e6f8c0
7101e6f5a4  adrp x0,0x7104412000
7101e6f5a8  add x0,x0,#0xf4c
7101e6f5ac  b 0x7101e6f8c0
7101e6f5b0  adrp x0,0x710434a000
7101e6f5b4  add x0,x0,#0x9e1
7101e6f5b8  b 0x7101e6f8c0
7101e6f5bc  adrp x0,0x71043e0000
7101e6f5c0  add x0,x0,#0x7da
7101e6f5c4  b 0x7101e6f8c0
7101e6f5c8  tst x0,#0xffffffffff
7101e6f5cc  and x9,x0,#-0x100000000000000
7101e6f5d0  mov x10,#0x7100000000000000
7101e6f5d4  cset w8,ne
7101e6f5d8  cmp x9,x10
7101e6f5dc  cset w9,eq
7101e6f5e0  and w8,w9,w8
7101e6f5e4  b.ne 0x7101e6f6a8
7101e6f5e8  and x9,x0,#0xffffffffff
7101e6f5ec  cbz x9,0x7101e6f6a8
7101e6f5f0  cbz w8,0x7101e6f858
7101e6f5f4  mov x9,#0x5e8d
7101e6f5f8  movk x9,#0x1394, LSL #16
7101e6f5fc  and x8,x0,#0xffffffffff
7101e6f600  movk x9,#0x17, LSL #32
7101e6f604  cmp x8,x9
7101e6f608  b.gt 0x7101e6f720
7101e6f60c  mov x9,#0xeb20
7101e6f610  movk x9,#0xa182, LSL #16
7101e6f614  movk x9,#0x14, LSL #32
7101e6f618  cmp x8,x9
7101e6f61c  b.le 0x7101e6f7d0
7101e6f620  mov x9,#0xeb21
7101e6f624  movk x9,#0xa182, LSL #16
7101e6f628  movk x9,#0x14, LSL #32
7101e6f62c  cmp x8,x9
7101e6f630  b.eq 0x7101e6fd28
7101e6f634  mov x9,#0xa328
7101e6f638  movk x9,#0x4cb6, LSL #16
7101e6f63c  movk x9,#0x16, LSL #32
7101e6f640  cmp x8,x9
7101e6f644  b.eq 0x7101e6fd34
7101e6f648  mov x9,#0xee0d
7101e6f64c  movk x9,#0xa40a, LSL #16
7101e6f650  movk x9,#0x16, LSL #32
7101e6f654  cmp x8,x9
7101e6f658  b.eq 0x7101e6f714
7101e6f65c  b 0x7101e6f858
7101e6f660  add w8,w8,#0x1
7101e6f664  add x9,sp,#0xa8
7101e6f668  add x10,x9,#0x8
7101e6f66c  strb wzr,[x10, w8, UXTW ]
7101e6f670  str w8,[sp, #0xac]
7101e6f674  ldrb w8,[sp, #0xb0]
7101e6f678  mov w10,w24
7101e6f67c  cbz w8,0x7101e6f95c
7101e6f680  add x9,x9,#0x9
7101e6f684  mov w11,#0x89
7101e6f688  mov w12,w8
7101e6f68c  mov w10,w24
7101e6f690  mul w10,w10,w11
7101e6f694  and w12,w12,#0xff
7101e6f698  eor w10,w10,w12
7101e6f69c  ldrb w12,[x9], #0x1
7101e6f6a0  cbnz w12,0x7101e6f690
7101e6f6a4  b 0x7101e6f95c
7101e6f6a8  cbz w8,0x7101e6f898
7101e6f6ac  mov x9,#0x5e8d
7101e6f6b0  movk x9,#0x1394, LSL #16
7101e6f6b4  and x8,x0,#0xffffffffff
7101e6f6b8  movk x9,#0x17, LSL #32
7101e6f6bc  cmp x8,x9
7101e6f6c0  b.gt 0x7101e6f774
7101e6f6c4  mov x9,#0xeb20
7101e6f6c8  movk x9,#0xa182, LSL #16
7101e6f6cc  movk x9,#0x14, LSL #32
7101e6f6d0  cmp x8,x9
7101e6f6d4  b.le 0x7101e6f7fc
7101e6f6d8  mov x9,#0xeb21
7101e6f6dc  movk x9,#0xa182, LSL #16
7101e6f6e0  movk x9,#0x14, LSL #32
7101e6f6e4  cmp x8,x9
7101e6f6e8  b.eq 0x7101e6fd28
7101e6f6ec  mov x9,#0xa328
7101e6f6f0  movk x9,#0x4cb6, LSL #16
7101e6f6f4  movk x9,#0x16, LSL #32
7101e6f6f8  cmp x8,x9
7101e6f6fc  b.eq 0x7101e6fd34
7101e6f700  mov x9,#0xee0d
7101e6f704  movk x9,#0xa40a, LSL #16
7101e6f708  movk x9,#0x16, LSL #32
7101e6f70c  cmp x8,x9
7101e6f710  b.ne 0x7101e6f898
7101e6f714  adrp x8,0x7104545000
7101e6f718  add x8,x8,#0xb90
7101e6f71c  b 0x7101e6f8a0
7101e6f720  mov x9,#0x1699
7101e6f724  movk x9,#0x72c0, LSL #16
7101e6f728  movk x9,#0x18, LSL #32
7101e6f72c  cmp x8,x9
7101e6f730  b.le 0x7101e6f830
7101e6f734  mov x9,#0x169a
7101e6f738  movk x9,#0x72c0, LSL #16
7101e6f73c  movk x9,#0x18, LSL #32
7101e6f740  cmp x8,x9
7101e6f744  b.eq 0x7101e6fd40
7101e6f748  mov x9,#0xf9cd
7101e6f74c  movk x9,#0x7837, LSL #16
7101e6f750  movk x9,#0x1d, LSL #32
7101e6f754  cmp x8,x9
7101e6f758  b.eq 0x7101e6fd4c
7101e6f75c  mov x9,#0xe952
7101e6f760  movk x9,#0xf8a9, LSL #16
7101e6f764  movk x9,#0x1e, LSL #32
7101e6f768  cmp x8,x9
7101e6f76c  b.eq 0x7101e6f7c4
7101e6f770  b 0x7101e6f858
7101e6f774  mov x9,#0x1699
7101e6f778  movk x9,#0x72c0, LSL #16
7101e6f77c  movk x9,#0x18, LSL #32
7101e6f780  cmp x8,x9
7101e6f784  b.le 0x7101e6f864
7101e6f788  mov x9,#0x169a
7101e6f78c  movk x9,#0x72c0, LSL #16
7101e6f790  movk x9,#0x18, LSL #32
7101e6f794  cmp x8,x9
7101e6f798  b.eq 0x7101e6fd40
7101e6f79c  mov x9,#0xf9cd
7101e6f7a0  movk x9,#0x7837, LSL #16
7101e6f7a4  movk x9,#0x1d, LSL #32
7101e6f7a8  cmp x8,x9
7101e6f7ac  b.eq 0x7101e6fd4c
7101e6f7b0  mov x9,#0xe952
7101e6f7b4  movk x9,#0xf8a9, LSL #16
7101e6f7b8  movk x9,#0x1e, LSL #32
7101e6f7bc  cmp x8,x9
7101e6f7c0  b.ne 0x7101e6f898
7101e6f7c4  adrp x8,0x7104545000
7101e6f7c8  add x8,x8,#0xbc8
7101e6f7cc  b 0x7101e6f8a0
7101e6f7d0  mov x9,#0x909b
7101e6f7d4  movk x9,#0x2797, LSL #16
7101e6f7d8  movk x9,#0x13, LSL #32
7101e6f7dc  cmp x8,x9
7101e6f7e0  b.eq 0x7101e6fd58
7101e6f7e4  mov x9,#0xf986
7101e6f7e8  movk x9,#0x6e70, LSL #16
7101e6f7ec  movk x9,#0x13, LSL #32
7101e6f7f0  cmp x8,x9
7101e6f7f4  b.eq 0x7101e6f824
7101e6f7f8  b 0x7101e6f858
7101e6f7fc  mov x9,#0x909b
7101e6f800  movk x9,#0x2797, LSL #16
7101e6f804  movk x9,#0x13, LSL #32
7101e6f808  cmp x8,x9
7101e6f80c  b.eq 0x7101e6fd58
7101e6f810  mov x9,#0xf986
7101e6f814  movk x9,#0x6e70, LSL #16
7101e6f818  movk x9,#0x13, LSL #32
7101e6f81c  cmp x8,x9
7101e6f820  b.ne 0x7101e6f898
7101e6f824  adrp x8,0x7104545000
7101e6f828  add x8,x8,#0xbc0
7101e6f82c  b 0x7101e6f8a0
7101e6f830  mov x9,#0x5e8e
7101e6f834  movk x9,#0x1394, LSL #16
7101e6f838  movk x9,#0x17, LSL #32
7101e6f83c  cmp x8,x9
7101e6f840  b.eq 0x7101e6fd64
7101e6f844  mov x9,#0xded9
7101e6f848  movk x9,#0x2bf1, LSL #16
7101e6f84c  movk x9,#0x17, LSL #32
7101e6f850  cmp x8,x9
7101e6f854  b.eq 0x7101e6f88c
7101e6f858  adrp x8,0x7104545000
7101e6f85c  add x8,x8,#0xbe8
7101e6f860  b 0x7101e6f8a0
7101e6f864  mov x9,#0x5e8e
7101e6f868  movk x9,#0x1394, LSL #16
7101e6f86c  movk x9,#0x17, LSL #32
7101e6f870  cmp x8,x9
7101e6f874  b.eq 0x7101e6fd64
7101e6f878  mov x9,#0xded9
7101e6f87c  movk x9,#0x2bf1, LSL #16
7101e6f880  movk x9,#0x17, LSL #32
7101e6f884  cmp x8,x9
7101e6f888  b.ne 0x7101e6f898
7101e6f88c  adrp x8,0x7104545000
7101e6f890  add x8,x8,#0xbd8
7101e6f894  b 0x7101e6f8a0
7101e6f898  adrp x8,0x7104545000
7101e6f89c  add x8,x8,#0xbe0
7101e6f8a0  adrp x9,0x7104545000
7101e6f8a4  add x9,x9,#0xbe8
7101e6f8a8  adrp x10,0x71043cf000
7101e6f8ac  add x10,x10,#0xacd
7101e6f8b0  cmp x8,x9
7101e6f8b4  adrp x8,0x7104867000
7101e6f8b8  add x8,x8,#0xc2e
7101e6f8bc  csel x0,x8,x10,eq
7101e6f8c0  ldrb w1,[x20, #0x2a8]
7101e6f8c4  sub x8,x29,#0xe8
7101e6f8c8  sub x27,x29,#0xe8
7101e6f8cc  bl 0x71003a4ca0
7101e6f8d0  mov x8,xzr
7101e6f8d4  add x9,x27,#0x8
7101e6f8d8  add x10,sp,#0xa8
7101e6f8dc  b 0x7101e6f8e8
7101e6f8e0  add x8,x8,#0x2
7101e6f8e4  strb w11,[x12, #0x9]
7101e6f8e8  add x11,x9,x8
7101e6f8ec  ldrb w13,[x11]
7101e6f8f0  cbz w13,0x7101e6f91c
7101e6f8f4  add w14,w8,#0x1
7101e6f8f8  add x12,x10,x8
7101e6f8fc  cmp w14,#0x3f
7101e6f900  strb w13,[x12, #0x8]
7101e6f904  b.cs 0x7101e6f918
7101e6f908  ldrb w11,[x11, #0x1]
7101e6f90c  cbnz w11,0x7101e6f8e0
7101e6f910  add x8,x8,#0x1
7101e6f914  b 0x7101e6f91c
7101e6f918  add w8,w8,#0x1
7101e6f91c  add x9,sp,#0xa8
7101e6f920  add x10,x9,#0x8
7101e6f924  strb wzr,[x10, w8, UXTW ]
7101e6f928  str w8,[sp, #0xac]
7101e6f92c  ldrb w8,[sp, #0xb0]
7101e6f930  mov w10,w24
7101e6f934  cbz w8,0x7101e6f95c
7101e6f938  add x9,x9,#0x9
7101e6f93c  mov w11,#0x89
7101e6f940  mov w12,w8
7101e6f944  mov w10,w24
7101e6f948  mul w10,w10,w11
7101e6f94c  and w12,w12,#0xff
7101e6f950  eor w10,w10,w12
7101e6f954  ldrb w12,[x9], #0x1
7101e6f958  cbnz w12,0x7101e6f948
7101e6f95c  str w10,[sp, #0xa8]
7101e6f960  stur wzr,[x29, #-0xe8]
7101e6f964  cbz w26,0x7101e6f9a0
7101e6f968  add x9,sp,#0xf0
7101e6f96c  sub x11,x29,#0xe8
7101e6f970  mov x10,xzr
7101e6f974  add x9,x9,#0x9
7101e6f978  add x12,x11,#0x8
7101e6f97c  add w11,w10,#0x1
7101e6f980  cmp w11,#0x3e
7101e6f984  strb w26,[x12, x10, LSL ]
7101e6f988  b.hi 0x7101e6f9a8
7101e6f98c  ldrb w26,[x9, x10, LSL ]
7101e6f990  add x11,x10,#0x1
7101e6f994  mov x10,x11
7101e6f998  cbnz w26,0x7101e6f97c
7101e6f99c  b 0x7101e6f9ac
7101e6f9a0  mov x11,xzr
7101e6f9a4  b 0x7101e6f9ac
7101e6f9a8  orr w11,wzr,#0x3f
7101e6f9ac  sub x10,x29,#0xe8
7101e6f9b0  add x9,x10,#0x8
7101e6f9b4  strb wzr,[x9, w11, UXTW ]
7101e6f9b8  ldurb w9,[x29, #-0xe0]
7101e6f9bc  stur w11,[x29, #-0xe4]
7101e6f9c0  mov w11,w24
7101e6f9c4  cbz w9,0x7101e6f9ec
7101e6f9c8  add x10,x10,#0x9
7101e6f9cc  mov w12,#0x89
7101e6f9d0  mov w13,w9
7101e6f9d4  mov w11,w24
7101e6f9d8  mul w11,w11,w12
7101e6f9dc  and w13,w13,#0xff
7101e6f9e0  eor w11,w11,w13
7101e6f9e4  ldrb w13,[x10], #0x1
7101e6f9e8  cbnz w13,0x7101e6f9d8
7101e6f9ec  stur w11,[x29, #-0xe8]
7101e6f9f0  stur wzr,[x29, #-0xa0]
7101e6f9f4  cbz w8,0x7101e6fa30
7101e6f9f8  add x10,sp,#0xa8
7101e6f9fc  sub x12,x29,#0xe8
7101e6fa00  mov x11,xzr
7101e6fa04  add x10,x10,#0x9
7101e6fa08  add x12,x12,#0x50
7101e6fa0c  add w13,w11,#0x1
7101e6fa10  cmp w13,#0x3e
7101e6fa14  strb w8,[x12, x11, LSL ]
7101e6fa18  b.hi 0x7101e6fa38
7101e6fa1c  ldrb w8,[x10, x11, LSL ]
7101e6fa20  add x13,x11,#0x1
7101e6fa24  mov x11,x13
7101e6fa28  cbnz w8,0x7101e6fa0c
7101e6fa2c  b 0x7101e6fa3c
7101e6fa30  mov w13,wzr
7101e6fa34  b 0x7101e6fa3c
7101e6fa38  orr w13,wzr,#0x3f
7101e6fa3c  sub x8,x29,#0xe8
7101e6fa40  add x10,x8,#0x50
7101e6fa44  mov w11,w24
7101e6fa48  strb wzr,[x10, w13, UXTW ]
7101e6fa4c  ldurb w10,[x29, #-0x98]
7101e6fa50  stur w13,[x29, #-0x9c]
7101e6fa54  cbz w10,0x7101e6fa7c
7101e6fa58  add x8,x8,#0x51
7101e6fa5c  mov w12,#0x89
7101e6fa60  mov w13,w10
7101e6fa64  mov w11,w24
7101e6fa68  mul w11,w11,w12
7101e6fa6c  and w13,w13,#0xff
7101e6fa70  eor w11,w11,w13
7101e6fa74  ldrb w13,[x8], #0x1
7101e6fa78  cbnz w13,0x7101e6fa68
7101e6fa7c  stur w11,[x29, #-0xa0]
7101e6fa80  str wzr,[sp, #0x18]
7101e6fa84  cbz w9,0x7101e6fac0
7101e6fa88  sub x8,x29,#0xe8
7101e6fa8c  add x11,x8,#0x9
7101e6fa90  add x8,sp,#0x18
7101e6fa94  mov x12,xzr
7101e6fa98  add x13,x8,#0x8
7101e6fa9c  add w8,w12,#0x1
7101e6faa0  cmp w8,#0x3e
7101e6faa4  strb w9,[x13, x12, LSL ]
7101e6faa8  b.hi 0x7101e6fac8
7101e6faac  ldrb w9,[x11, x12, LSL ]
7101e6fab0  add x8,x12,#0x1
7101e6fab4  mov x12,x8
7101e6fab8  cbnz w9,0x7101e6fa9c
7101e6fabc  b 0x7101e6facc
7101e6fac0  mov w8,wzr
7101e6fac4  b 0x7101e6facc
7101e6fac8  orr w8,wzr,#0x3f
7101e6facc  add x11,sp,#0x18
7101e6fad0  add x3,x11,#0x8
7101e6fad4  mov w12,w24
7101e6fad8  strb wzr,[x3, w8, UXTW ]
7101e6fadc  ldrb w9,[sp, #0x20]
7101e6fae0  str w8,[sp, #0x1c]
7101e6fae4  cbz w9,0x7101e6fb08
7101e6fae8  add x11,x11,#0x9
7101e6faec  mov w13,#0x89
7101e6faf0  mov w12,w24
7101e6faf4  mul w12,w12,w13
7101e6faf8  and w9,w9,#0xff
7101e6fafc  eor w12,w12,w9
7101e6fb00  ldrb w9,[x11], #0x1
7101e6fb04  cbnz w9,0x7101e6faf4
7101e6fb08  str w12,[sp, #0x18]
7101e6fb0c  str wzr,[sp, #0x60]
7101e6fb10  cbz w10,0x7101e6fb4c
7101e6fb14  sub x9,x29,#0xe8
7101e6fb18  add x11,sp,#0x18
7101e6fb1c  mov x12,xzr
7101e6fb20  add x9,x9,#0x51
7101e6fb24  add x13,x11,#0x50
7101e6fb28  add w11,w12,#0x1
7101e6fb2c  cmp w11,#0x3e
7101e6fb30  strb w10,[x13, x12, LSL ]
7101e6fb34  b.hi 0x7101e6fb54
7101e6fb38  ldrb w10,[x9, x12, LSL ]
7101e6fb3c  add x11,x12,#0x1
7101e6fb40  mov x12,x11
7101e6fb44  cbnz w10,0x7101e6fb28
7101e6fb48  b 0x7101e6fb58
7101e6fb4c  mov w11,wzr
7101e6fb50  b 0x7101e6fb58
7101e6fb54  orr w11,wzr,#0x3f
7101e6fb58  add x9,sp,#0x18
7101e6fb5c  add x10,x9,#0x50
7101e6fb60  strb wzr,[x10, w11, UXTW ]
7101e6fb64  ldrb w10,[sp, #0x68]
7101e6fb68  str w11,[sp, #0x64]
7101e6fb6c  cbz w10,0x7101e6fb8c
7101e6fb70  add x9,x9,#0x51
7101e6fb74  mov w12,#0x89
7101e6fb78  mul w13,w24,w12
7101e6fb7c  and w10,w10,#0xff
7101e6fb80  eor w24,w13,w10
7101e6fb84  ldrb w10,[x9], #0x1
7101e6fb88  cbnz w10,0x7101e6fb78
7101e6fb8c  str w24,[sp, #0x60]
7101e6fb90  ldr x24,[x20, #0x2b0]
7101e6fb94  cbnz w11,0x7101e6fc40
7101e6fb98  cbz w8,0x7101e6fc40
7101e6fb9c  ldr x8,[x24]
7101e6fba0  add x0,x8,#0x10
7101e6fba4  mov x1,x3
7101e6fba8  bl 0x710377a120
7101e6fbac  ldr x8,[x24]
7101e6fbb0  ldr x8,[x8, #0x18]
7101e6fbb4  ldr x8,[x8, #0x10]
7101e6fbb8  cbz x8,0x7101e6fc38
7101e6fbbc  ldr x9,[x8, #0xd8]
7101e6fbc0  cbz x9,0x7101e6fc60
7101e6fbc4  ldrh w12,[x9]
7101e6fbc8  cbz w12,0x7101e6fc60
7101e6fbcc  mov w10,wzr
7101e6fbd0  mov w8,wzr
7101e6fbd4  orr w11,wzr,#0x3
7101e6fbd8  mov x13,x9
7101e6fbdc  orr w14,w12,#0x1
7101e6fbe0  and w14,w14,#0xffff
7101e6fbe4  cmp w14,#0xf
7101e6fbe8  b.ne 0x7101e6fc0c
7101e6fbec  and w14,w12,#0xffff
7101e6fbf0  cmp w14,#0xe
7101e6fbf4  b.ne 0x7101e6fc18
7101e6fbf8  ldrh w13,[x13, #0x6]
7101e6fbfc  lsr w13,w13,#0x1
7101e6fc00  mov w12,wzr
7101e6fc04  add w13,w13,#0x4
7101e6fc08  b 0x7101e6fc24
7101e6fc0c  mov w12,#0x1
7101e6fc10  mov w13,#0x1
7101e6fc14  b 0x7101e6fc24
7101e6fc18  cmp w14,#0xf
7101e6fc1c  mov w12,wzr
7101e6fc20  csel w13,w11,wzr,eq
7101e6fc24  add w10,w13,w10
7101e6fc28  add x13,x9,w10, UXTW  #0x1
7101e6fc2c  add w8,w12,w8
7101e6fc30  ldrh w12,[x13]
7101e6fc34  cbnz w12,0x7101e6fbdc
7101e6fc38  str w8,[x24, #0x10]
7101e6fc3c  b 0x7101e6fc68
7101e6fc40  add x8,sp,#0x18
7101e6fc44  add x4,x8,#0x50
7101e6fc48  adrp x1,0x71043cf000
7101e6fc4c  add x1,x1,#0xaf1
7101e6fc50  mov w2,#0x2
7101e6fc54  mov x0,x24
7101e6fc58  bl 0x7101e94890
7101e6fc5c  b 0x7101e6fc68
7101e6fc60  mov w8,wzr
7101e6fc64  str wzr,[x24, #0x10]
7101e6fc68  ldr x0,[x20, #0x2b0]
7101e6fc6c  mov w1,wzr
7101e6fc70  bl 0x7101e94ba0
7101e6fc74  ldrb w8,[x25]
7101e6fc78  cbz w8,0x7101e6fcbc
7101e6fc7c  ldrb w1,[x20, #0x2dc]
7101e6fc80  and x23,x23,#0xffff
7101e6fc84  cmp x1,#0x3
7101e6fc88  b.hi 0x7101e6fcfc
7101e6fc8c  add x8,x20,x1, LSL #0x3
7101e6fc90  ldr x8,[x8, #0x210]
7101e6fc94  cbz x8,0x7101e6fcfc
7101e6fc98  ldrb w9,[x8, #0xf9]
7101e6fc9c  cbz w9,0x7101e6fce4
7101e6fca0  mov x0,x22
7101e6fca4  bl 0x7101e70990
7101e6fca8  ldr x2,[x20, #0x230]
7101e6fcac  and x1,x0,#0xffff
7101e6fcb0  add x0,x20,#0x248
7101e6fcb4  bl 0x7101e70a60
7101e6fcb8  b 0x7101e6fd14
7101e6fcbc  ldr x2,[x20, #0x230]
7101e6fcc0  and x21,x23,#0xffff
7101e6fcc4  add x0,x20,#0x238
7101e6fcc8  mov x1,x21
7101e6fccc  bl 0x7101e70a60
7101e6fcd0  ldr x2,[x20, #0x230]
7101e6fcd4  add x0,x20,#0x248
7101e6fcd8  mov x1,x21
7101e6fcdc  bl 0x7101e70a60
7101e6fce0  b 0x7101e6f38c
7101e6fce4  ldr x8,[x8, #0xf0]
7101e6fce8  mov x9,#-0x2e00000000000000
7101e6fcec  and x9,x8,x9
7101e6fcf0  and x8,x8,#0xffffffffff
7101e6fcf4  orr x9,x9,x21
7101e6fcf8  orr x21,x8,x9
7101e6fcfc  ldr x8,[x20, #0x2a0]
7101e6fd00  add x0,x20,#0x248
7101e6fd04  sub x2,x29,#0xe8
7101e6fd08  mov x1,x21
7101e6fd0c  stur x8,[x29, #-0xe8]
7101e6fd10  bl 0x7101e70e20
7101e6fd14  ldr x2,[x20, #0x230]
7101e6fd18  add x0,x20,#0x238
7101e6fd1c  mov x1,x23
7101e6fd20  bl 0x7101e70a60
7101e6fd24  b 0x7101e6f36c
7101e6fd28  adrp x8,0x7104545000
7101e6fd2c  add x8,x8,#0xbb8
7101e6fd30  b 0x7101e6f8a0
7101e6fd34  adrp x8,0x7104545000
7101e6fd38  add x8,x8,#0xb98
7101e6fd3c  b 0x7101e6f8a0
7101e6fd40  adrp x8,0x7104545000
7101e6fd44  add x8,x8,#0xbb0
7101e6fd48  b 0x7101e6f8a0
7101e6fd4c  adrp x8,0x7104545000
7101e6fd50  add x8,x8,#0xbd0
7101e6fd54  b 0x7101e6f8a0
7101e6fd58  adrp x8,0x7104545000
7101e6fd5c  add x8,x8,#0xba8
7101e6fd60  b 0x7101e6f8a0
7101e6fd64  adrp x8,0x7104545000
7101e6fd68  add x8,x8,#0xba0
7101e6fd6c  b 0x7101e6f8a0
