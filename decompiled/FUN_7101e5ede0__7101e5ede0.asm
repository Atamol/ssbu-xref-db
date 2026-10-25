// addr:      7101e5ede0
// offset:    0x1e5ede0
// name:      FUN_7101e5ede0
// mangled:   
// size:      1432

7101e5ede0  sub sp,sp,#0xc0
7101e5ede4  str d10,[sp, #0x40]
7101e5ede8  stp d9,d8,[sp, #0x50]
7101e5edec  stp x28,x27,[sp, #0x60]
7101e5edf0  stp x26,x25,[sp, #0x70]
7101e5edf4  stp x24,x23,[sp, #0x80]
7101e5edf8  stp x22,x21,[sp, #0x90]
7101e5edfc  stp x20,x19,[sp, #0xa0]
7101e5ee00  stp x29,x30,[sp, #0xb0]
7101e5ee04  add x29,sp,#0xb0
7101e5ee08  ldr x21,[x0, #0x80]
7101e5ee0c  ldr x22,[x21, #0x378]
7101e5ee10  ldr x0,[x22, #0x40]
7101e5ee14  cbnz x0,0x7101e5f14c
7101e5ee18  ldrb w8,[x22, #0x80]
7101e5ee1c  cbz w8,0x7101e5f144
7101e5ee20  ldr x8,[x22, #0x10]
7101e5ee24  cbz x8,0x7101e5f144
7101e5ee28  ldr x0,[x22]
7101e5ee2c  ldrb w8,[x0, #0x8]
7101e5ee30  cbz w8,0x7101e5f144
7101e5ee34  mov x8,sp
7101e5ee38  add x25,x8,#0x30
7101e5ee3c  adrp x8,0x7104471000
7101e5ee40  ldr s9,[x8, #0xd90]
7101e5ee44  fmov s8,0x3f800000
7101e5ee48  fmov s10,wzr
7101e5ee4c  mov x20,#0x1114
7101e5ee50  movk x20,#0x2280, LSL #16
7101e5ee54  mov x19,xzr
7101e5ee58  movk x20,#0x1c, LSL #32
7101e5ee5c  mov w23,#0xf7cf
7101e5ee60  movk w23,#0xe353, LSL #16
7101e5ee64  mov w24,#0x9ba5
7101e5ee68  movk w24,#0x20c4, LSL #16
7101e5ee6c  mov w26,#0x1c8
7101e5ee70  ldrb w8,[x22, #0x18]
7101e5ee74  ldrb w9,[x22, #0x19]
7101e5ee78  cmp w8,#0x0
7101e5ee7c  ccmp x19,x9,#0x0,ne
7101e5ee80  b.eq 0x7101e5f130
7101e5ee84  cmp x19,#0x4
7101e5ee88  b.cs 0x7101e5f374
7101e5ee8c  mul x8,x19,x26
7101e5ee90  ldr x10,[x22, #0x10]
7101e5ee94  ldrsh w8,[x10, x8, LSL #0x0]
7101e5ee98  cmn w8,#0x1
7101e5ee9c  b.eq 0x7101e5f130
7101e5eea0  madd x11,x19,x26,x10
7101e5eea4  ldr x10,[x11, #0x18]
7101e5eea8  ldr x11,[x11, #0x8]
7101e5eeac  add x9,x22,x19, LSL #0x4
7101e5eeb0  mov v0.16B,v8.16B
7101e5eeb4  add x8,x9,#0xa4
7101e5eeb8  cmp x10,x11
7101e5eebc  b.eq 0x7101e5ef44
7101e5eec0  and x12,x11,#0xffffffff
7101e5eec4  asr x13,x11,#0x20
7101e5eec8  mul x14,x13,x23
7101e5eecc  mul x15,x12,x23
7101e5eed0  mul x13,x13,x24
7101e5eed4  mov v0.16B,v10.16B
7101e5eed8  mul x12,x12,x24
7101e5eedc  add x14,x14,x15, LSR #0x20
7101e5eee0  add x12,x12,w14, UXTW 
7101e5eee4  add x13,x13,x14, ASR #0x20
7101e5eee8  add x12,x13,x12, LSR #0x20
7101e5eeec  asr x12,x12,#0x7
7101e5eef0  add x11,x12,x11, LSR #0x3f
7101e5eef4  cmp x11,#0x1
7101e5eef8  b.lt 0x7101e5ef44
7101e5eefc  and x12,x10,#0xffffffff
7101e5ef00  asr x13,x10,#0x20
7101e5ef04  mul x14,x13,x23
7101e5ef08  mul x15,x12,x23
7101e5ef0c  mul x13,x13,x24
7101e5ef10  mul x12,x12,x24
7101e5ef14  scvtf s0,x11
7101e5ef18  add x14,x14,x15, LSR #0x20
7101e5ef1c  add x12,x12,w14, UXTW 
7101e5ef20  add x13,x13,x14, ASR #0x20
7101e5ef24  add x12,x13,x12, LSR #0x20
7101e5ef28  asr x12,x12,#0x7
7101e5ef2c  add x10,x12,x10, LSR #0x3f
7101e5ef30  scvtf s1,x10
7101e5ef34  fdiv s0,s1,s0
7101e5ef38  fmin s1,s0,s8
7101e5ef3c  fcmp s0,#0.0
7101e5ef40  fcsel s0,s10,s1,mi
7101e5ef44  ldr s1,[x8]
7101e5ef48  fcmp s1,s0
7101e5ef4c  b.pl 0x7101e5ef6c
7101e5ef50  mov x10,x9
7101e5ef54  ldr s2,[x10, #0xa8]!
7101e5ef58  fcmp s2,s0
7101e5ef5c  b.eq 0x7101e5ef6c
7101e5ef60  str wzr,[x9, #0xb0]
7101e5ef64  str s1,[x9, #0xac]
7101e5ef68  str s0,[x10]
7101e5ef6c  mov x11,x9
7101e5ef70  ldr w10,[x11, #0xb0]!
7101e5ef74  cmp w10,#0x3a
7101e5ef78  b.hi 0x7101e5ef84
7101e5ef7c  add w10,w10,#0x1
7101e5ef80  str w10,[x11]
7101e5ef84  ucvtf s0,w10
7101e5ef88  fdiv s0,s0,s9
7101e5ef8c  fcmp s0,s8
7101e5ef90  b.ge 0x7101e5efbc
7101e5ef94  ldp s1,s2,[x9, #0xa8]
7101e5ef98  fsub s3,s1,s2
7101e5ef9c  fmul s0,s0,s3
7101e5efa0  fadd s0,s2,s0
7101e5efa4  fcmp s0,s1
7101e5efa8  fcsel s1,s1,s0,gt
7101e5efac  fcmp s0,s2
7101e5efb0  fcsel s0,s2,s1,mi
7101e5efb4  str s0,[x8]
7101e5efb8  b 0x7101e5efc8
7101e5efbc  ldr w9,[x9, #0xa8]
7101e5efc0  str w9,[x8]
7101e5efc4  fmov s0,w9
7101e5efc8  ldrb w8,[x0, #0x8]
7101e5efcc  cmp w8,w19, UXTB 
7101e5efd0  b.ls 0x7101e5f130
7101e5efd4  mov w2,#0x1
7101e5efd8  mov w1,w19
7101e5efdc  bl 0x7101e9c280
7101e5efe0  tbz w0,#0x0,0x7101e5f130
7101e5efe4  ldr x28,[x22, #0x8]
7101e5efe8  orr w8,wzr,#0x30
7101e5efec  madd x27,x19,x8,x28
7101e5eff0  ldr x8,[x27, #0x28]!
7101e5eff4  ldr x0,[x8]
7101e5eff8  bl 0x710377aae0
7101e5effc  cbz x0,0x7101e5f008
7101e5f000  mov w8,#0x1
7101e5f004  strb w8,[x0, #0x13a]
7101e5f008  orr w8,wzr,#0x30
7101e5f00c  madd x8,x19,x8,x28
7101e5f010  mov v0.16B,v8.16B
7101e5f014  add x0,x8,#0x10
7101e5f018  bl 0x710377aee0
7101e5f01c  ldr x8,[x27]
7101e5f020  ldr x0,[x8]
7101e5f024  mov w1,#0x1
7101e5f028  bl 0x710377abf0
7101e5f02c  adrp x8,0x710532f000
7101e5f030  ldr x8,[x8, #0x8d0]
7101e5f034  ldr x0,[x8, #0x8]
7101e5f038  mov x8,x0
7101e5f03c  ldr x9,[x8, #0x60]!
7101e5f040  cbz x9,0x7101e5f07c
7101e5f044  mov x10,x8
7101e5f048  ldr x11,[x9, #0x20]
7101e5f04c  and x11,x11,#0xfffffffffc
7101e5f050  cmp x11,x20
7101e5f054  cset w11,cc
7101e5f058  csel x10,x10,x9,cc
7101e5f05c  ldr x9,[x9, w11, UXTW #0x3]
7101e5f060  cbnz x9,0x7101e5f048
7101e5f064  cmp x10,x8
7101e5f068  b.eq 0x7101e5f07c
7101e5f06c  ldr x8,[x10, #0x20]
7101e5f070  and x8,x8,#0xffffffffff
7101e5f074  cmp x8,x20
7101e5f078  b.ls 0x7101e5f130
7101e5f07c  ldrb w8,[x0, #0x191]
7101e5f080  cbnz w8,0x7101e5f0f0
7101e5f084  mov w2,#0x4
7101e5f088  mov x1,x20
7101e5f08c  bl 0x7103313f20
7101e5f090  tbz w0,#0x0,0x7101e5f0f0
7101e5f094  mov x0,sp
7101e5f098  mov x1,x20
7101e5f09c  bl 0x71024076d0
7101e5f0a0  ldr x8,[sp, #0x10]
7101e5f0a4  adrp x9,0x7104f73000
7101e5f0a8  add x9,x9,#0xd50
7101e5f0ac  str x9,[sp, #0x8]
7101e5f0b0  cbz x8,0x7101e5f128
7101e5f0b4  adrp x9,0x7106dd5000
7101e5f0b8  ldrb w9,[x9, #0x3a8]
7101e5f0bc  cmp w9,#0x1
7101e5f0c0  b.ne 0x7101e5f128
7101e5f0c4  adrp x10,0x7106dd5000
7101e5f0c8  ldr w9,[sp, #0x18]
7101e5f0cc  ldr w10,[x10, #0x3ac]
7101e5f0d0  cmp w9,w10
7101e5f0d4  b.ne 0x7101e5f128
7101e5f0d8  ldr wzr,[x8, #0x38]!
7101e5f0dc  ldaxr w9,[x8]
7101e5f0e0  sub w9,w9,#0x1
7101e5f0e4  stlxr w10,w9,[x8]
7101e5f0e8  cbnz w10,0x7101e5f0dc
7101e5f0ec  b 0x7101e5f128
7101e5f0f0  mov x8,#0x650000000000
7101e5f0f4  movk x8,#0x87, LSL #48
7101e5f0f8  strb wzr,[sp, #0x20]
7101e5f0fc  stp xzr,x8,[sp, #0x10]
7101e5f100  adrp x8,0x7104f73000
7101e5f104  add x8,x8,#0xd30
7101e5f108  str x8,[sp, #0x8]
7101e5f10c  mov x8,#-0x1
7101e5f110  str x8,[sp, #0x28]
7101e5f114  adrp x8,0x7104f73000
7101e5f118  add x8,x8,#0xd50
7101e5f11c  str wzr,[sp]
7101e5f120  stp xzr,xzr,[x25]
7101e5f124  str x8,[sp, #0x8]
7101e5f128  str xzr,[sp, #0x10]
7101e5f12c  strb wzr,[sp, #0x20]
7101e5f130  ldr x0,[x22]
7101e5f134  ldrb w8,[x0, #0x8]
7101e5f138  add x19,x19,#0x1
7101e5f13c  cmp x19,x8
7101e5f140  b.cc 0x7101e5ee70
7101e5f144  ldr x0,[x22, #0x70]
7101e5f148  cbz x0,0x7101e5f158
7101e5f14c  ldr x8,[x0]
7101e5f150  ldr x8,[x8, #0x30]
7101e5f154  blr x8
7101e5f158  ldr x8,[x21, #0x308]
7101e5f15c  ldr x0,[x8, #0x10]
7101e5f160  bl 0x7103399c10
7101e5f164  ldr x8,[x21, #0x308]
7101e5f168  ldr x8,[x8, #0x10]
7101e5f16c  ldrb w8,[x8, #0x90]
7101e5f170  cbnz w8,0x7101e5f18c
7101e5f174  ldrb w8,[x21, #0x311]
7101e5f178  cbz w8,0x7101e5f18c
7101e5f17c  ldrb w1,[x21, #0x312]
7101e5f180  add x0,x21,#0x308
7101e5f184  strb wzr,[x21, #0x311]
7101e5f188  bl 0x7101e943a0
7101e5f18c  add x19,x21,#0x208
7101e5f190  mov x0,x19
7101e5f194  bl 0x7101e9bb40
7101e5f198  ldr x8,[x21, #0x2e8]
7101e5f19c  ldr x8,[x8, #0x40]
7101e5f1a0  cbz x8,0x7101e5f1c0
7101e5f1a4  ldr x8,[x8, #0x8]
7101e5f1a8  ldr x0,[x8, #0x8]
7101e5f1ac  cbz x0,0x7101e5f1c0
7101e5f1b0  ldr x8,[x0]
7101e5f1b4  ldr x8,[x8, #0x138]
7101e5f1b8  blr x8
7101e5f1bc  tbz w0,#0x0,0x7101e5f1f4
7101e5f1c0  ldrb w8,[x21, #0x2f1]
7101e5f1c4  cbz w8,0x7101e5f1e4
7101e5f1c8  ldr x8,[x21, #0x2e8]
7101e5f1cc  ldr x0,[x8, #0x8]
7101e5f1d0  fmov s0,0x3f800000
7101e5f1d4  adrp x1,0x71042f8000
7101e5f1d8  add x1,x1,#0xa23
7101e5f1dc  bl 0x7103778300
7101e5f1e0  strb wzr,[x21, #0x2f1]
7101e5f1e4  ldr w8,[x21, #0x2f4]
7101e5f1e8  cbz w8,0x7101e5f1f4
7101e5f1ec  sub w8,w8,#0x1
7101e5f1f0  str w8,[x21, #0x2f4]
7101e5f1f4  ldr x8,[x21, #0x398]
7101e5f1f8  cbz x8,0x7101e5f270
7101e5f1fc  ldr x8,[x21, #0x390]
7101e5f200  ldrb w20,[x8, #0x10]
7101e5f204  add x2,x21,#0x350
7101e5f208  mov x0,x19
7101e5f20c  mov w1,w20
7101e5f210  bl 0x7101e95cc0
7101e5f214  tbz w0,#0x0,0x7101e5f270
7101e5f218  and x8,x20,#0xff
7101e5f21c  cmp w8,#0x3
7101e5f220  b.hi 0x7101e5f248
7101e5f224  ldr x9,[x19]
7101e5f228  add x8,x9,x8, LSL #0x3
7101e5f22c  ldr x8,[x8, #0x48]
7101e5f230  cbz x8,0x7101e5f248
7101e5f234  ldr x0,[x8, #0x8]
7101e5f238  fmov s0,0x3f800000
7101e5f23c  adrp x1,0x7104455000
7101e5f240  add x1,x1,#0x1e3
7101e5f244  bl 0x7103778300
7101e5f248  ldr x0,[x21, #0x390]
7101e5f24c  ldp x8,x9,[x0]
7101e5f250  str x9,[x8, #0x8]
7101e5f254  ldp x8,x9,[x0]
7101e5f258  str x8,[x9]
7101e5f25c  ldr x8,[x21, #0x398]
7101e5f260  sub x8,x8,#0x1
7101e5f264  str x8,[x21, #0x398]
7101e5f268  cbz x0,0x7101e5f270
7101e5f26c  bl 0x710392eb40
7101e5f270  ldrsw x8,[x21, #0x1dc]
7101e5f274  cmp w8,#0x13
7101e5f278  b.cs 0x7101e5f374
7101e5f27c  add x8,x21,x8, LSL #0x2
7101e5f280  ldr w8,[x8, #0x190]
7101e5f284  ldr w9,[x21, #0x1e0]
7101e5f288  cmp w9,w8
7101e5f28c  b.eq 0x7101e5f2dc
7101e5f290  cmp w8,#0x16
7101e5f294  str w9,[x21, #0x1e8]
7101e5f298  str w8,[x21, #0x1e0]
7101e5f29c  b.cs 0x7101e5f374
7101e5f2a0  sxtw x8,w8
7101e5f2a4  add x8,x21,x8, LSL #0x4
7101e5f2a8  ldp x9,x8,[x8, #0x30]
7101e5f2ac  stp x9,x8,[x21, #0x10]
7101e5f2b0  ldp x8,x10,[x21, #0x20]
7101e5f2b4  and x9,x10,#0x1
7101e5f2b8  orr x11,x9,x8
7101e5f2bc  cbz x11,0x7101e5f2d8
7101e5f2c0  ldr x11,[x21, #0x8]
7101e5f2c4  add x0,x11,x10, ASR #0x1
7101e5f2c8  cbz x9,0x7101e5f2d4
7101e5f2cc  ldr x9,[x0]
7101e5f2d0  ldr x8,[x9, x8, LSL #0x0]
7101e5f2d4  blr x8
7101e5f2d8  str wzr,[x21, #0x1e4]
7101e5f2dc  ldrb w8,[x21, #0x1ec]
7101e5f2e0  cbz w8,0x7101e5f314
7101e5f2e4  ldp x8,x10,[x21, #0x20]
7101e5f2e8  and x9,x10,#0x1
7101e5f2ec  orr x11,x9,x8
7101e5f2f0  cbz x11,0x7101e5f30c
7101e5f2f4  ldr x11,[x21, #0x8]
7101e5f2f8  add x0,x11,x10, ASR #0x1
7101e5f2fc  cbz x9,0x7101e5f308
7101e5f300  ldr x9,[x0]
7101e5f304  ldr x8,[x9, x8, LSL #0x0]
7101e5f308  blr x8
7101e5f30c  str wzr,[x21, #0x1e4]
7101e5f310  strb wzr,[x21, #0x1ec]
7101e5f314  ldr x9,[x21, #0x8]
7101e5f318  cbz x9,0x7101e5f340
7101e5f31c  ldp x8,x11,[x21, #0x10]
7101e5f320  and x10,x11,#0x1
7101e5f324  orr x12,x10,x8
7101e5f328  cbz x12,0x7101e5f340
7101e5f32c  add x0,x9,x11, ASR #0x1
7101e5f330  cbz x10,0x7101e5f33c
7101e5f334  ldr x9,[x0]
7101e5f338  ldr x8,[x9, x8, LSL #0x0]
7101e5f33c  blr x8
7101e5f340  ldr w8,[x21, #0x1e4]
7101e5f344  add w8,w8,#0x1
7101e5f348  str w8,[x21, #0x1e4]
7101e5f34c  ldp d9,d8,[sp, #0x50]
7101e5f350  ldr d10,[sp, #0x40]
7101e5f354  ldp x29,x30,[sp, #0xb0]
7101e5f358  ldp x20,x19,[sp, #0xa0]
7101e5f35c  ldp x22,x21,[sp, #0x90]
7101e5f360  ldp x24,x23,[sp, #0x80]
7101e5f364  ldp x26,x25,[sp, #0x70]
7101e5f368  ldp x28,x27,[sp, #0x60]
7101e5f36c  add sp,sp,#0xc0
7101e5f370  ret
7101e5f374  bl 0x71039c2650
