// addr:      71026bcd60
// offset:    0x26bcd60
// name:      FUN_71026bcd60
// mangled:   
// size:      11052

71026bcd60  sub sp,sp,#0xe0
71026bcd64  str x27,[sp, #0x80]
71026bcd68  stp x26,x25,[sp, #0x90]
71026bcd6c  stp x24,x23,[sp, #0xa0]
71026bcd70  stp x22,x21,[sp, #0xb0]
71026bcd74  stp x20,x19,[sp, #0xc0]
71026bcd78  stp x29,x30,[sp, #0xd0]
71026bcd7c  add x29,sp,#0xd0
71026bcd80  ldrb w8,[x0, #0x94]
71026bcd84  mov x19,x0
71026bcd88  str w8,[x0, #0x950]
71026bcd8c  bl 0x71025d9250
71026bcd90  ldrb w8,[x19, #0x18]
71026bcd94  ldr x9,[x19, #0x308]
71026bcd98  adrp x10,0x7104472000
71026bcd9c  ldr s1,[x10, #0x398]
71026bcda0  eor w8,w8,#0x1
71026bcda4  strb w8,[x19, #0xc20]
71026bcda8  ldp x8,x10,[x9, #0xf8]
71026bcdac  ldr s2,[x9, #0x118]
71026bcdb0  ldr s3,[x9, #0x11c]
71026bcdb4  str x10,[x19, #0x908]
71026bcdb8  str x8,[x19, #0x900]
71026bcdbc  ldr q4,[x9, #0x160]
71026bcdc0  ldr s5,[x19, #0x900]
71026bcdc4  ldr s6,[x19, #0x904]
71026bcdc8  fadd s2,s2,s4
71026bcdcc  fadd s3,s3,s4
71026bcdd0  fadd s5,s5,s4
71026bcdd4  fadd s6,s4,s6
71026bcdd8  ldr s0,[x19, #0x740]
71026bcddc  fsub s2,s2,s5
71026bcde0  fsub s3,s3,s6
71026bcde4  dup s4,v4.S[0x1]
71026bcde8  ldr w8,[x19, #0xb8]
71026bcdec  cmp w8,#0x3
71026bcdf0  str s5,[x19, #0x900]
71026bcdf4  str s6,[x19, #0x904]
71026bcdf8  fmul s2,s2,s0
71026bcdfc  fmul s0,s3,s0
71026bce00  ldr s3,[x19, #0x908]
71026bce04  fadd s3,s4,s3
71026bce08  str s3,[x19, #0x908]
71026bce0c  fmul s3,s2,s1
71026bce10  ldr q7,[x19, #0x910]
71026bce14  fadd s2,s5,s2
71026bce18  fmul s1,s0,s1
71026bce1c  fadd s0,s6,s0
71026bce20  fadd s1,s6,s1
71026bce24  mov v7.S[0x0],v2.S[0x0]
71026bce28  ldr q2,[x19, #0x920]
71026bce2c  mov v2.S[0x0],v0.S[0x0]
71026bce30  fadd s0,s5,s3
71026bce34  ldr q3,[x19, #0x930]
71026bce38  mov v3.S[0x0],v0.S[0x0]
71026bce3c  ldr s0,[x19, #0x90c]
71026bce40  fadd s0,s4,s0
71026bce44  ldr q4,[x19, #0x940]
71026bce48  str q7,[x19, #0x910]
71026bce4c  str q2,[x19, #0x920]
71026bce50  str q3,[x19, #0x930]
71026bce54  mov v4.S[0x0],v1.S[0x0]
71026bce58  str s0,[x19, #0x90c]
71026bce5c  str q4,[x19, #0x940]
71026bce60  b.cs 0x71026bf888
71026bce64  adrp x9,0x710532a000
71026bce68  ldr x9,[x9, #0x9d0]
71026bce6c  add x20,x19,#0x738
71026bce70  ldr x9,[x9, x8, LSL #0x3]
71026bce74  ldr x8,[x9, #0x228]
71026bce78  ldr x9,[x9, #0x230]
71026bce7c  cmp x8,x9
71026bce80  b.eq 0x71026bcee0
71026bce84  adrp x22,0x7105332000
71026bce88  ldr x0,[x22, #0xf20]
71026bce8c  mov x11,#0x5c0e
71026bce90  movk x11,#0x6f27, LSL #16
71026bce94  orr w10,wzr,#0xffffff
71026bce98  movk x11,#0x12, LSL #32
71026bce9c  ldr w21,[x8]
71026bcea0  cmp w21,w10
71026bcea4  b.eq 0x71026bced4
71026bcea8  ldr x12,[x0, #0x78]
71026bceac  ldr x12,[x12]
71026bceb0  ldr x13,[x12, #0x40]
71026bceb4  ldr w13,[x13, #0x4]
71026bceb8  cmp w13,w21
71026bcebc  b.ls 0x71026bced4
71026bcec0  ldr x12,[x12, #0x60]
71026bcec4  add x12,x12,x21, LSL #0x5
71026bcec8  ldr x12,[x12, #0x18]
71026bcecc  cmp x12,x11
71026bced0  b.eq 0x71026be078
71026bced4  add x8,x8,#0x4
71026bced8  cmp x9,x8
71026bcedc  b.ne 0x71026bce9c
71026bcee0  orr w1,wzr,#0xffffff
71026bcee4  mov x0,x20
71026bcee8  bl 0x7103720ec0
71026bceec  ldr x8,[x19, #0x7a0]
71026bcef0  ldr w9,[x8]
71026bcef4  cmp w9,#0x65
71026bcef8  b.cc 0x71026bcf08
71026bcefc  mov w9,#0x64
71026bcf00  str w9,[x8]
71026bcf04  ldr x8,[x19, #0x7a0]
71026bcf08  ldr w9,[x8, #0x4]
71026bcf0c  cmp w9,#0x64
71026bcf10  b.ls 0x71026bcf1c
71026bcf14  mov w9,#0x64
71026bcf18  str w9,[x8, #0x4]
71026bcf1c  ldr x9,[x19, #0x310]
71026bcf20  mov x8,xzr
71026bcf24  adrp x10,0x71050cf000
71026bcf28  add x10,x10,#0xc0
71026bcf2c  mov w24,#0xffffffff
71026bcf30  orr x11,xzr,#0x100000000
71026bcf34  adrp x12,0x7104754000
71026bcf38  add x12,x12,#0x84
71026bcf3c  ldp x14,x13,[x9, #0xd0]
71026bcf40  sub x15,x13,x14
71026bcf44  lsr x13,x15,#0x4
71026bcf48  cbz w13,0x71026bd060
71026bcf4c  add x13,x10,x8, LSL #0x4
71026bcf50  ldr x13,[x13, #0x8]
71026bcf54  ldr x14,[x14]
71026bcf58  cbz x14,0x71026bcfcc
71026bcf5c  ldrb w0,[x13]
71026bcf60  cbz w0,0x71026bcfac
71026bcf64  mov x16,xzr
71026bcf68  add x17,x13,#0x1
71026bcf6c  mov w18,w24
71026bcf70  and w0,w0,#0xff
71026bcf74  sub w1,w0,#0x41
71026bcf78  add w2,w0,#0x20
71026bcf7c  cmp w1,#0x1a
71026bcf80  csel w0,w2,w0,cc
71026bcf84  eor w0,w0,w18
71026bcf88  and w0,w0,#0xff
71026bcf8c  ldr w0,[x12, w0, UXTW #0x2]
71026bcf90  eor w18,w0,w18, LSR #0x8
71026bcf94  ldrb w0,[x17], #0x1
71026bcf98  add x16,x16,x11
71026bcf9c  cbnz w0,0x71026bcf70
71026bcfa0  mvn w17,w18
71026bcfa4  and x16,x16,#0xff00000000
71026bcfa8  b 0x71026bcfb4
71026bcfac  mov x17,xzr
71026bcfb0  mov x16,xzr
71026bcfb4  ldr x14,[x14, #0x68]
71026bcfb8  orr x16,x16,x17
71026bcfbc  cmp x14,x16
71026bcfc0  b.ne 0x71026bcfcc
71026bcfc4  mov w14,wzr
71026bcfc8  b 0x71026bd064
71026bcfcc  mov x14,xzr
71026bcfd0  ubfx x15,x15,#0x4,#0x20
71026bcfd4  add x16,x13,#0x1
71026bcfd8  add x14,x14,#0x1
71026bcfdc  cmp x14,x15
71026bcfe0  b.cs 0x71026bd060
71026bcfe4  ldr x17,[x9, #0xd0]
71026bcfe8  lsl x18,x14,#0x4
71026bcfec  ldr x17,[x17, x18, LSL #0x0]
71026bcff0  cbz x17,0x71026bcfd8
71026bcff4  ldrb w2,[x13]
71026bcff8  cbz w2,0x71026bd044
71026bcffc  mov x18,xzr
71026bd000  mov x0,x16
71026bd004  mov w1,w24
71026bd008  and w2,w2,#0xff
71026bd00c  sub w3,w2,#0x41
71026bd010  add w4,w2,#0x20
71026bd014  cmp w3,#0x1a
71026bd018  csel w2,w4,w2,cc
71026bd01c  eor w2,w2,w1
71026bd020  and w2,w2,#0xff
71026bd024  ldr w2,[x12, w2, UXTW #0x2]
71026bd028  eor w1,w2,w1, LSR #0x8
71026bd02c  ldrb w2,[x0], #0x1
71026bd030  add x18,x18,x11
71026bd034  cbnz w2,0x71026bd008
71026bd038  mvn w0,w1
71026bd03c  and x18,x18,#0xff00000000
71026bd040  b 0x71026bd04c
71026bd044  mov x0,xzr
71026bd048  mov x18,xzr
71026bd04c  ldr x17,[x17, #0x68]
71026bd050  orr x18,x18,x0
71026bd054  cmp x17,x18
71026bd058  b.ne 0x71026bcfd8
71026bd05c  b 0x71026bd064
71026bd060  mov w14,w24
71026bd064  lsl x13,x8,#0x4
71026bd068  add x8,x8,#0x1
71026bd06c  cmp x8,#0xd
71026bd070  ldr w13,[x10, x13, LSL #0x0]
71026bd074  add x13,x19,x13, LSL #0x2
71026bd078  str w14,[x13, #0xc60]
71026bd07c  b.ne 0x71026bcf3c
71026bd080  mov x21,xzr
71026bd084  mov w22,#0x1
71026bd088  mov w25,#0x297f
71026bd08c  movk w25,#0xe000, LSL #16
71026bd090  mov w23,#0x101
71026bd094  b 0x71026bd0ac
71026bd098  cbz x26,0x71026bd158
71026bd09c  add x0,x26,#0x108
71026bd0a0  strb w22,[x26, #0x110]
71026bd0a4  bl 0x71025e9d50
71026bd0a8  b 0x71026bd158
71026bd0ac  add x8,x19,x21, LSL #0x2
71026bd0b0  ldr w8,[x8, #0xc60]
71026bd0b4  tbnz w8,#0x1f,0x71026bd158
71026bd0b8  ldr x9,[x19, #0x310]
71026bd0bc  ldr x9,[x9, #0xd0]
71026bd0c0  lsl x8,x8,#0x4
71026bd0c4  ldr x26,[x9, x8, LSL #0x0]
71026bd0c8  cbz x26,0x71026bd104
71026bd0cc  ldr x8,[x26, #0xd8]
71026bd0d0  cbnz x8,0x71026bd104
71026bd0d4  ldr x8,[x26, #0xd8]
71026bd0d8  cbnz x8,0x71026bd104
71026bd0dc  add x0,x26,#0x90
71026bd0e0  mov x1,xzr
71026bd0e4  bl 0x71026533a0
71026bd0e8  mov x8,x0
71026bd0ec  ldr x0,[x26, #0xd8]
71026bd0f0  str x8,[x26, #0xd8]
71026bd0f4  cbz x0,0x71026bd104
71026bd0f8  ldr x8,[x0]
71026bd0fc  ldr x8,[x8, #0x8]
71026bd100  blr x8
71026bd104  cmp w21,#0x1f
71026bd108  b.hi 0x71026bd098
71026bd10c  lsl w8,w22,w21
71026bd110  tst w8,w25
71026bd114  b.eq 0x71026bd098
71026bd118  cbz x26,0x71026bd158
71026bd11c  add x0,x26,#0x108
71026bd120  strb wzr,[x26, #0x110]
71026bd124  bl 0x71025e9d50
71026bd128  ldrb w8,[x26, #0xe0]
71026bd12c  cbz w8,0x71026bd13c
71026bd130  ldr x8,[x26, #0xc8]
71026bd134  cbz x8,0x71026bd13c
71026bd138  strh w23,[x8, #0x30]
71026bd13c  ldr x8,[x26, #0xd8]
71026bd140  cbz x8,0x71026bd148
71026bd144  strb w22,[x8, #0x21]
71026bd148  ldrb w8,[x26, #0xe0]
71026bd14c  cbz w8,0x71026bd158
71026bd150  ldr x8,[x26, #0xb0]
71026bd154  strb wzr,[x8, #0x10]
71026bd158  add x21,x21,#0x1
71026bd15c  cmp x21,#0x20
71026bd160  b.ne 0x71026bd0ac
71026bd164  ldr x0,[x19, #0x310]
71026bd168  ldp x1,x8,[x0, #0xd0]
71026bd16c  mov x21,#0x78cc
71026bd170  movk x21,#0x3c2a, LSL #16
71026bd174  movk x21,#0xc, LSL #32
71026bd178  sub x26,x8,x1
71026bd17c  lsr x25,x26,#0x4
71026bd180  cmp x1,x8
71026bd184  b.eq 0x71026bd1b0
71026bd188  ldr w9,[x1, #0x8]
71026bd18c  cmp w9,#0x1
71026bd190  b.hi 0x71026bd1a4
71026bd194  ldr x9,[x1]
71026bd198  ldr x9,[x9, #0x68]
71026bd19c  cmp x9,x21
71026bd1a0  b.eq 0x71026bdec8
71026bd1a4  add x1,x1,#0x10
71026bd1a8  cmp x8,x1
71026bd1ac  b.ne 0x71026bd188
71026bd1b0  mov w22,w25
71026bd1b4  ldr x0,[x19, #0x310]
71026bd1b8  ldp x1,x8,[x0, #0xd0]
71026bd1bc  cmp x1,x8
71026bd1c0  b.eq 0x71026bd1ec
71026bd1c4  ldr w9,[x1, #0x8]
71026bd1c8  cmp w9,#0x1
71026bd1cc  b.hi 0x71026bd1e0
71026bd1d0  ldr x9,[x1]
71026bd1d4  ldr x9,[x9, #0x68]
71026bd1d8  cmp x9,x21
71026bd1dc  b.eq 0x71026bdf34
71026bd1e0  add x1,x1,#0x10
71026bd1e4  cmp x8,x1
71026bd1e8  b.ne 0x71026bd1c4
71026bd1ec  mov w21,w22
71026bd1f0  ldr x0,[x19, #0x310]
71026bd1f4  ldp x1,x8,[x0, #0xd0]
71026bd1f8  cmp x1,x8
71026bd1fc  b.eq 0x71026bd234
71026bd200  mov x9,#0x786a
71026bd204  movk x9,#0x222, LSL #16
71026bd208  movk x9,#0x9, LSL #32
71026bd20c  ldr w10,[x1, #0x8]
71026bd210  cmp w10,#0x1
71026bd214  b.hi 0x71026bd228
71026bd218  ldr x10,[x1]
71026bd21c  ldr x10,[x10, #0x68]
71026bd220  cmp x10,x9
71026bd224  b.eq 0x71026bdfa0
71026bd228  add x1,x1,#0x10
71026bd22c  cmp x8,x1
71026bd230  b.ne 0x71026bd20c
71026bd234  mov w22,w21
71026bd238  ldr x0,[x19, #0x310]
71026bd23c  ldp x1,x8,[x0, #0xd0]
71026bd240  cmp x1,x8
71026bd244  b.eq 0x71026bd27c
71026bd248  mov x9,#0x5ae7
71026bd24c  movk x9,#0xb234, LSL #16
71026bd250  movk x9,#0xb, LSL #32
71026bd254  ldr w10,[x1, #0x8]
71026bd258  cmp w10,#0x1
71026bd25c  b.hi 0x71026bd270
71026bd260  ldr x10,[x1]
71026bd264  ldr x10,[x10, #0x68]
71026bd268  cmp x10,x9
71026bd26c  b.eq 0x71026be00c
71026bd270  add x1,x1,#0x10
71026bd274  cmp x8,x1
71026bd278  b.ne 0x71026bd254
71026bd27c  mov w21,w22
71026bd280  mov x25,#0xf415
71026bd284  movk x25,#0x96d1, LSL #16
71026bd288  mov w22,#0x1
71026bd28c  movk x25,#0xa, LSL #32
71026bd290  mov w26,#0x1
71026bd294  b 0x71026bd304
71026bd298  bl 0x710262fb80
71026bd29c  cbz x0,0x71026bd33c
71026bd2a0  add x8,x19,x26, LSL #0x2
71026bd2a4  str w21,[x8, #0xc94]
71026bd2a8  ldr x8,[x19, #0x310]
71026bd2ac  ldr x8,[x8, #0xd0]
71026bd2b0  mov w9,w21
71026bd2b4  lsl x9,x9,#0x4
71026bd2b8  add w27,w21,#0x1
71026bd2bc  ldr x21,[x8, x9, LSL #0x0]
71026bd2c0  cbz x21,0x71026bd340
71026bd2c4  add x0,x21,#0x108
71026bd2c8  strb wzr,[x21, #0x110]
71026bd2cc  bl 0x71025e9d50
71026bd2d0  ldrb w8,[x21, #0xe0]
71026bd2d4  cbz w8,0x71026bd2e4
71026bd2d8  ldr x8,[x21, #0xc8]
71026bd2dc  cbz x8,0x71026bd2e4
71026bd2e0  strh w23,[x8, #0x30]
71026bd2e4  ldr x8,[x21, #0xd8]
71026bd2e8  cbz x8,0x71026bd2f0
71026bd2ec  strb w22,[x8, #0x21]
71026bd2f0  ldrb w8,[x21, #0xe0]
71026bd2f4  cbz w8,0x71026bd340
71026bd2f8  ldr x8,[x21, #0xb0]
71026bd2fc  strb wzr,[x8, #0x10]
71026bd300  b 0x71026bd340
71026bd304  ldr x0,[x19, #0x310]
71026bd308  ldp x1,x8,[x0, #0xd0]
71026bd30c  cmp x1,x8
71026bd310  b.eq 0x71026bd33c
71026bd314  ldr w9,[x1, #0x8]
71026bd318  cmp w9,#0x1
71026bd31c  b.hi 0x71026bd330
71026bd320  ldr x9,[x1]
71026bd324  ldr x9,[x9, #0x68]
71026bd328  cmp x9,x25
71026bd32c  b.eq 0x71026bd298
71026bd330  add x1,x1,#0x10
71026bd334  cmp x8,x1
71026bd338  b.ne 0x71026bd314
71026bd33c  mov w27,w21
71026bd340  add x26,x26,#0x1
71026bd344  cmp x26,#0x10
71026bd348  mov w21,w27
71026bd34c  b.ne 0x71026bd304
71026bd350  ldr w8,[x19, #0x950]
71026bd354  cmp w8,#0x20
71026bd358  b.cs 0x71026bf888
71026bd35c  add x9,x19,x8, LSL #0x2
71026bd360  ldr w9,[x9, #0xc60]
71026bd364  cbz w8,0x71026bd420
71026bd368  tbnz w9,#0x1f,0x71026bd4dc
71026bd36c  ldr x8,[x19, #0x310]
71026bd370  ldr w9,[x19, #0xc60]
71026bd374  lsl x9,x9,#0x4
71026bd378  ldr x8,[x8, #0xd0]
71026bd37c  ldr x21,[x8, x9, LSL #0x0]
71026bd380  cbz x21,0x71026bd3c4
71026bd384  add x0,x21,#0x108
71026bd388  strb wzr,[x21, #0x110]
71026bd38c  bl 0x71025e9d50
71026bd390  ldrb w8,[x21, #0xe0]
71026bd394  cbz w8,0x71026bd3a4
71026bd398  ldr x8,[x21, #0xc8]
71026bd39c  cbz x8,0x71026bd3a4
71026bd3a0  strh w23,[x8, #0x30]
71026bd3a4  ldr x8,[x21, #0xd8]
71026bd3a8  cbz x8,0x71026bd3b4
71026bd3ac  mov w9,#0x1
71026bd3b0  strb w9,[x8, #0x21]
71026bd3b4  ldrb w8,[x21, #0xe0]
71026bd3b8  cbz w8,0x71026bd3c4
71026bd3bc  ldr x8,[x21, #0xb0]
71026bd3c0  strb wzr,[x8, #0x10]
71026bd3c4  ldr x8,[x19, #0x310]
71026bd3c8  ldr w9,[x19, #0xcd4]
71026bd3cc  lsl x9,x9,#0x4
71026bd3d0  ldr x8,[x8, #0xd0]
71026bd3d4  ldr x21,[x8, x9, LSL #0x0]
71026bd3d8  cbz x21,0x71026bd4dc
71026bd3dc  add x0,x21,#0x108
71026bd3e0  strb wzr,[x21, #0x110]
71026bd3e4  bl 0x71025e9d50
71026bd3e8  ldrb w8,[x21, #0xe0]
71026bd3ec  cbz w8,0x71026bd3fc
71026bd3f0  ldr x8,[x21, #0xc8]
71026bd3f4  cbz x8,0x71026bd3fc
71026bd3f8  strh w23,[x8, #0x30]
71026bd3fc  ldr x8,[x21, #0xd8]
71026bd400  cbz x8,0x71026bd40c
71026bd404  mov w9,#0x1
71026bd408  strb w9,[x8, #0x21]
71026bd40c  ldrb w8,[x21, #0xe0]
71026bd410  cbz w8,0x71026bd4dc
71026bd414  ldr x8,[x21, #0xb0]
71026bd418  strb wzr,[x8, #0x10]
71026bd41c  b 0x71026bd4dc
71026bd420  tbnz w9,#0x1f,0x71026bd4dc
71026bd424  ldr x8,[x19, #0x310]
71026bd428  ldr w9,[x19, #0xc60]
71026bd42c  lsl x9,x9,#0x4
71026bd430  ldr x8,[x8, #0xd0]
71026bd434  ldr x21,[x8, x9, LSL #0x0]
71026bd438  cbz x21,0x71026bd480
71026bd43c  add x0,x21,#0x108
71026bd440  mov w8,#0x1
71026bd444  strb w8,[x21, #0x110]
71026bd448  bl 0x71025e9d50
71026bd44c  ldrb w8,[x21, #0xe0]
71026bd450  cbz w8,0x71026bd460
71026bd454  ldr x8,[x21, #0xc8]
71026bd458  cbz x8,0x71026bd460
71026bd45c  strh wzr,[x8, #0x30]
71026bd460  ldr x8,[x21, #0xd8]
71026bd464  cbz x8,0x71026bd46c
71026bd468  strb wzr,[x8, #0x21]
71026bd46c  ldrb w8,[x21, #0xe0]
71026bd470  cbz w8,0x71026bd480
71026bd474  ldr x8,[x21, #0xb0]
71026bd478  mov w9,#0x1
71026bd47c  strb w9,[x8, #0x10]
71026bd480  ldr x8,[x19, #0x310]
71026bd484  ldr w9,[x19, #0xcd4]
71026bd488  lsl x9,x9,#0x4
71026bd48c  ldr x8,[x8, #0xd0]
71026bd490  ldr x21,[x8, x9, LSL #0x0]
71026bd494  cbz x21,0x71026bd4dc
71026bd498  add x0,x21,#0x108
71026bd49c  mov w8,#0x1
71026bd4a0  strb w8,[x21, #0x110]
71026bd4a4  bl 0x71025e9d50
71026bd4a8  ldrb w8,[x21, #0xe0]
71026bd4ac  cbz w8,0x71026bd4bc
71026bd4b0  ldr x8,[x21, #0xc8]
71026bd4b4  cbz x8,0x71026bd4bc
71026bd4b8  strh wzr,[x8, #0x30]
71026bd4bc  ldr x8,[x21, #0xd8]
71026bd4c0  cbz x8,0x71026bd4c8
71026bd4c4  strb wzr,[x8, #0x21]
71026bd4c8  ldrb w8,[x21, #0xe0]
71026bd4cc  cbz w8,0x71026bd4dc
71026bd4d0  ldr x8,[x21, #0xb0]
71026bd4d4  mov w9,#0x1
71026bd4d8  strb w9,[x8, #0x10]
71026bd4dc  ldr w8,[x19, #0x950]
71026bd4e0  cmp w8,#0x1f
71026bd4e4  b.hi 0x71026bf888
71026bd4e8  add x9,x19,x8, LSL #0x2
71026bd4ec  ldr w9,[x9, #0xc60]
71026bd4f0  cmp w8,#0x1
71026bd4f4  b.ne 0x71026bd5b8
71026bd4f8  tbnz w9,#0x1f,0x71026bd66c
71026bd4fc  ldr x8,[x19, #0x310]
71026bd500  ldr w9,[x19, #0xc64]
71026bd504  lsl x9,x9,#0x4
71026bd508  ldr x8,[x8, #0xd0]
71026bd50c  ldr x21,[x8, x9, LSL #0x0]
71026bd510  cbz x21,0x71026bd558
71026bd514  add x0,x21,#0x108
71026bd518  mov w8,#0x1
71026bd51c  strb w8,[x21, #0x110]
71026bd520  bl 0x71025e9d50
71026bd524  ldrb w8,[x21, #0xe0]
71026bd528  cbz w8,0x71026bd538
71026bd52c  ldr x8,[x21, #0xc8]
71026bd530  cbz x8,0x71026bd538
71026bd534  strh wzr,[x8, #0x30]
71026bd538  ldr x8,[x21, #0xd8]
71026bd53c  cbz x8,0x71026bd544
71026bd540  strb wzr,[x8, #0x21]
71026bd544  ldrb w8,[x21, #0xe0]
71026bd548  cbz w8,0x71026bd558
71026bd54c  ldr x8,[x21, #0xb0]
71026bd550  mov w9,#0x1
71026bd554  strb w9,[x8, #0x10]
71026bd558  ldr x8,[x19, #0x310]
71026bd55c  ldr w9,[x19, #0xcd8]
71026bd560  lsl x9,x9,#0x4
71026bd564  ldr x8,[x8, #0xd0]
71026bd568  ldr x21,[x8, x9, LSL #0x0]
71026bd56c  cbz x21,0x71026bd66c
71026bd570  add x0,x21,#0x108
71026bd574  mov w8,#0x1
71026bd578  strb w8,[x21, #0x110]
71026bd57c  bl 0x71025e9d50
71026bd580  ldrb w8,[x21, #0xe0]
71026bd584  cbz w8,0x71026bd594
71026bd588  ldr x8,[x21, #0xc8]
71026bd58c  cbz x8,0x71026bd594
71026bd590  strh wzr,[x8, #0x30]
71026bd594  ldr x8,[x21, #0xd8]
71026bd598  cbz x8,0x71026bd5a0
71026bd59c  strb wzr,[x8, #0x21]
71026bd5a0  ldrb w8,[x21, #0xe0]
71026bd5a4  cbz w8,0x71026bd66c
71026bd5a8  ldr x8,[x21, #0xb0]
71026bd5ac  mov w9,#0x1
71026bd5b0  strb w9,[x8, #0x10]
71026bd5b4  b 0x71026bd66c
71026bd5b8  tbnz w9,#0x1f,0x71026bd66c
71026bd5bc  ldr x8,[x19, #0x310]
71026bd5c0  ldr w9,[x19, #0xc64]
71026bd5c4  lsl x9,x9,#0x4
71026bd5c8  ldr x8,[x8, #0xd0]
71026bd5cc  ldr x21,[x8, x9, LSL #0x0]
71026bd5d0  cbz x21,0x71026bd614
71026bd5d4  add x0,x21,#0x108
71026bd5d8  strb wzr,[x21, #0x110]
71026bd5dc  bl 0x71025e9d50
71026bd5e0  ldrb w8,[x21, #0xe0]
71026bd5e4  cbz w8,0x71026bd5f4
71026bd5e8  ldr x8,[x21, #0xc8]
71026bd5ec  cbz x8,0x71026bd5f4
71026bd5f0  strh w23,[x8, #0x30]
71026bd5f4  ldr x8,[x21, #0xd8]
71026bd5f8  cbz x8,0x71026bd604
71026bd5fc  mov w9,#0x1
71026bd600  strb w9,[x8, #0x21]
71026bd604  ldrb w8,[x21, #0xe0]
71026bd608  cbz w8,0x71026bd614
71026bd60c  ldr x8,[x21, #0xb0]
71026bd610  strb wzr,[x8, #0x10]
71026bd614  ldr x8,[x19, #0x310]
71026bd618  ldr w9,[x19, #0xcd8]
71026bd61c  lsl x9,x9,#0x4
71026bd620  ldr x8,[x8, #0xd0]
71026bd624  ldr x21,[x8, x9, LSL #0x0]
71026bd628  cbz x21,0x71026bd66c
71026bd62c  add x0,x21,#0x108
71026bd630  strb wzr,[x21, #0x110]
71026bd634  bl 0x71025e9d50
71026bd638  ldrb w8,[x21, #0xe0]
71026bd63c  cbz w8,0x71026bd64c
71026bd640  ldr x8,[x21, #0xc8]
71026bd644  cbz x8,0x71026bd64c
71026bd648  strh w23,[x8, #0x30]
71026bd64c  ldr x8,[x21, #0xd8]
71026bd650  cbz x8,0x71026bd65c
71026bd654  mov w9,#0x1
71026bd658  strb w9,[x8, #0x21]
71026bd65c  ldrb w8,[x21, #0xe0]
71026bd660  cbz w8,0x71026bd66c
71026bd664  ldr x8,[x21, #0xb0]
71026bd668  strb wzr,[x8, #0x10]
71026bd66c  ldr w8,[x19, #0x950]
71026bd670  cmp w8,#0x1f
71026bd674  b.hi 0x71026bf888
71026bd678  add x9,x19,x8, LSL #0x2
71026bd67c  ldr w9,[x9, #0xc60]
71026bd680  cmp w8,#0x2
71026bd684  b.ne 0x71026bd748
71026bd688  tbnz w9,#0x1f,0x71026bd7fc
71026bd68c  ldr x8,[x19, #0x310]
71026bd690  ldr w9,[x19, #0xc68]
71026bd694  lsl x9,x9,#0x4
71026bd698  ldr x8,[x8, #0xd0]
71026bd69c  ldr x21,[x8, x9, LSL #0x0]
71026bd6a0  cbz x21,0x71026bd6e8
71026bd6a4  add x0,x21,#0x108
71026bd6a8  mov w8,#0x1
71026bd6ac  strb w8,[x21, #0x110]
71026bd6b0  bl 0x71025e9d50
71026bd6b4  ldrb w8,[x21, #0xe0]
71026bd6b8  cbz w8,0x71026bd6c8
71026bd6bc  ldr x8,[x21, #0xc8]
71026bd6c0  cbz x8,0x71026bd6c8
71026bd6c4  strh wzr,[x8, #0x30]
71026bd6c8  ldr x8,[x21, #0xd8]
71026bd6cc  cbz x8,0x71026bd6d4
71026bd6d0  strb wzr,[x8, #0x21]
71026bd6d4  ldrb w8,[x21, #0xe0]
71026bd6d8  cbz w8,0x71026bd6e8
71026bd6dc  ldr x8,[x21, #0xb0]
71026bd6e0  mov w9,#0x1
71026bd6e4  strb w9,[x8, #0x10]
71026bd6e8  ldr x8,[x19, #0x310]
71026bd6ec  ldr w9,[x19, #0xcdc]
71026bd6f0  lsl x9,x9,#0x4
71026bd6f4  ldr x8,[x8, #0xd0]
71026bd6f8  ldr x21,[x8, x9, LSL #0x0]
71026bd6fc  cbz x21,0x71026bd7fc
71026bd700  add x0,x21,#0x108
71026bd704  mov w8,#0x1
71026bd708  strb w8,[x21, #0x110]
71026bd70c  bl 0x71025e9d50
71026bd710  ldrb w8,[x21, #0xe0]
71026bd714  cbz w8,0x71026bd724
71026bd718  ldr x8,[x21, #0xc8]
71026bd71c  cbz x8,0x71026bd724
71026bd720  strh wzr,[x8, #0x30]
71026bd724  ldr x8,[x21, #0xd8]
71026bd728  cbz x8,0x71026bd730
71026bd72c  strb wzr,[x8, #0x21]
71026bd730  ldrb w8,[x21, #0xe0]
71026bd734  cbz w8,0x71026bd7fc
71026bd738  ldr x8,[x21, #0xb0]
71026bd73c  mov w9,#0x1
71026bd740  strb w9,[x8, #0x10]
71026bd744  b 0x71026bd7fc
71026bd748  tbnz w9,#0x1f,0x71026bd7fc
71026bd74c  ldr x8,[x19, #0x310]
71026bd750  ldr w9,[x19, #0xc68]
71026bd754  lsl x9,x9,#0x4
71026bd758  ldr x8,[x8, #0xd0]
71026bd75c  ldr x21,[x8, x9, LSL #0x0]
71026bd760  cbz x21,0x71026bd7a4
71026bd764  add x0,x21,#0x108
71026bd768  strb wzr,[x21, #0x110]
71026bd76c  bl 0x71025e9d50
71026bd770  ldrb w8,[x21, #0xe0]
71026bd774  cbz w8,0x71026bd784
71026bd778  ldr x8,[x21, #0xc8]
71026bd77c  cbz x8,0x71026bd784
71026bd780  strh w23,[x8, #0x30]
71026bd784  ldr x8,[x21, #0xd8]
71026bd788  cbz x8,0x71026bd794
71026bd78c  mov w9,#0x1
71026bd790  strb w9,[x8, #0x21]
71026bd794  ldrb w8,[x21, #0xe0]
71026bd798  cbz w8,0x71026bd7a4
71026bd79c  ldr x8,[x21, #0xb0]
71026bd7a0  strb wzr,[x8, #0x10]
71026bd7a4  ldr x8,[x19, #0x310]
71026bd7a8  ldr w9,[x19, #0xcdc]
71026bd7ac  lsl x9,x9,#0x4
71026bd7b0  ldr x8,[x8, #0xd0]
71026bd7b4  ldr x21,[x8, x9, LSL #0x0]
71026bd7b8  cbz x21,0x71026bd7fc
71026bd7bc  add x0,x21,#0x108
71026bd7c0  strb wzr,[x21, #0x110]
71026bd7c4  bl 0x71025e9d50
71026bd7c8  ldrb w8,[x21, #0xe0]
71026bd7cc  cbz w8,0x71026bd7dc
71026bd7d0  ldr x8,[x21, #0xc8]
71026bd7d4  cbz x8,0x71026bd7dc
71026bd7d8  strh w23,[x8, #0x30]
71026bd7dc  ldr x8,[x21, #0xd8]
71026bd7e0  cbz x8,0x71026bd7ec
71026bd7e4  mov w9,#0x1
71026bd7e8  strb w9,[x8, #0x21]
71026bd7ec  ldrb w8,[x21, #0xe0]
71026bd7f0  cbz w8,0x71026bd7fc
71026bd7f4  ldr x8,[x21, #0xb0]
71026bd7f8  strb wzr,[x8, #0x10]
71026bd7fc  ldr x9,[x19, #0x300]
71026bd800  ldr w1,[x19, #0x950]
71026bd804  ldr x8,[x9, #0x48]
71026bd808  ldr x8,[x8, x1, LSL #0x3]
71026bd80c  ldr x0,[x9, #0x60]
71026bd810  add x10,x8,#0x8
71026bd814  cmp x0,x10
71026bd818  b.eq 0x71026bd838
71026bd81c  ldp x1,x2,[x8, #0x8]
71026bd820  bl 0x7102616cf0
71026bd824  ldr x9,[x19, #0x300]
71026bd828  ldr w1,[x19, #0x950]
71026bd82c  ldr x8,[x9, #0x48]
71026bd830  ldr x8,[x8, x1, LSL #0x3]
71026bd834  ldr x0,[x9, #0x60]
71026bd838  add x9,x8,#0x20
71026bd83c  add x0,x0,#0x18
71026bd840  cmp x0,x9
71026bd844  b.eq 0x71026bd854
71026bd848  ldp x1,x2,[x8, #0x20]
71026bd84c  bl 0x7102616cf0
71026bd850  ldr w1,[x19, #0x950]
71026bd854  ldr x0,[x19, #0x308]
71026bd858  bl 0x7102624870
71026bd85c  ldr x0,[x19, #0x308]
71026bd860  ldr w1,[x19, #0x950]
71026bd864  bl 0x7102624740
71026bd868  ldr w8,[x19, #0x950]
71026bd86c  ldr x21,[x19, #0x300]
71026bd870  mov w9,#0x1
71026bd874  lsl w22,w9,w8
71026bd878  mov x0,x21
71026bd87c  mov w1,w22
71026bd880  bl 0x710262bb40
71026bd884  mvn w1,w22
71026bd888  mov x0,x21
71026bd88c  bl 0x710262beb0
71026bd890  ldr x0,[x19, #0x300]
71026bd894  ldr w1,[x19, #0x950]
71026bd898  bl 0x710262c200
71026bd89c  ldr x8,[x19, #0x300]
71026bd8a0  ldr w9,[x19, #0x950]
71026bd8a4  movi d2,#0x0
71026bd8a8  mov v1.16B,v2.16B
71026bd8ac  ldr x10,[x8, #0x48]
71026bd8b0  ldr x8,[x8, #0x60]
71026bd8b4  ldr x9,[x10, x9, LSL #0x3]
71026bd8b8  ldr q0,[x9, #0x40]
71026bd8bc  mov v1.S[0x0],v0.S[0x2]
71026bd8c0  mov v0.D[0x1],v1.D[0x0]
71026bd8c4  mov v1.16B,v2.16B
71026bd8c8  str q0,[x8, #0x30]
71026bd8cc  ldr q0,[x9, #0x50]
71026bd8d0  mov v1.S[0x0],v0.S[0x2]
71026bd8d4  mov v0.D[0x1],v1.D[0x0]
71026bd8d8  mov v1.16B,v2.16B
71026bd8dc  str q0,[x8, #0x40]
71026bd8e0  ldr q0,[x9, #0x60]
71026bd8e4  mov v1.S[0x0],v0.S[0x2]
71026bd8e8  mov v0.D[0x1],v1.D[0x0]
71026bd8ec  mov v1.16B,v2.16B
71026bd8f0  str q0,[x8, #0x50]
71026bd8f4  ldr q0,[x9, #0x70]
71026bd8f8  mov v1.S[0x0],v0.S[0x2]
71026bd8fc  mov v0.D[0x1],v1.D[0x0]
71026bd900  mov v1.16B,v2.16B
71026bd904  str q0,[x8, #0x60]
71026bd908  ldr q0,[x9, #0x80]
71026bd90c  mov v1.S[0x0],v0.S[0x2]
71026bd910  mov v0.D[0x1],v1.D[0x0]
71026bd914  mov v1.16B,v2.16B
71026bd918  str q0,[x8, #0x70]
71026bd91c  ldrb w10,[x9, #0x90]
71026bd920  strb w10,[x8, #0x80]
71026bd924  ldr q0,[x9, #0xa0]
71026bd928  mov v1.S[0x0],v0.S[0x2]
71026bd92c  mov v0.D[0x1],v1.D[0x0]
71026bd930  mov v1.16B,v2.16B
71026bd934  str q0,[x8, #0x90]
71026bd938  ldr q0,[x9, #0xb0]
71026bd93c  mov v1.S[0x0],v0.S[0x2]
71026bd940  mov v0.D[0x1],v1.D[0x0]
71026bd944  str q0,[x8, #0xa0]
71026bd948  ldr w8,[x19, #0x950]
71026bd94c  cmp w8,#0x1
71026bd950  b.eq 0x71026bd99c
71026bd954  cmp w8,#0x2
71026bd958  b.ne 0x71026bd9dc
71026bd95c  ldr x8,[x19, #0x300]
71026bd960  ldr x9,[x8, #0x18]
71026bd964  ldp x8,x9,[x9]
71026bd968  cmp x8,x9
71026bd96c  b.eq 0x71026bda18
71026bd970  mov x10,#0x7e92
71026bd974  movk x10,#0xf8a1, LSL #16
71026bd978  movk x10,#0x7, LSL #32
71026bd97c  ldr x11,[x8], #0x8
71026bd980  ldr x12,[x11, #0xa0]
71026bd984  and x12,x12,#0xffffffffff
71026bd988  cmp x12,x10
71026bd98c  b.eq 0x71026beb6c
71026bd990  cmp x9,x8
71026bd994  b.ne 0x71026bd97c
71026bd998  b 0x71026bda18
71026bd99c  ldr x8,[x19, #0x300]
71026bd9a0  ldr x9,[x8, #0x18]
71026bd9a4  ldp x8,x9,[x9]
71026bd9a8  cmp x8,x9
71026bd9ac  b.eq 0x71026bda18
71026bd9b0  mov x10,#0xc3c
71026bd9b4  movk x10,#0x7e35, LSL #16
71026bd9b8  movk x10,#0x7, LSL #32
71026bd9bc  ldr x11,[x8], #0x8
71026bd9c0  ldr x12,[x11, #0xa0]
71026bd9c4  and x12,x12,#0xffffffffff
71026bd9c8  cmp x12,x10
71026bd9cc  b.eq 0x71026bebf4
71026bd9d0  cmp x9,x8
71026bd9d4  b.ne 0x71026bd9bc
71026bd9d8  b 0x71026bda18
71026bd9dc  ldr x8,[x19, #0x300]
71026bd9e0  ldr x9,[x8, #0x18]
71026bd9e4  ldp x8,x9,[x9]
71026bd9e8  cmp x8,x9
71026bd9ec  b.eq 0x71026bda18
71026bd9f0  mov x10,#0xdf99
71026bd9f4  movk x10,#0xb569, LSL #16
71026bd9f8  movk x10,#0x7, LSL #32
71026bd9fc  ldr x11,[x8], #0x8
71026bda00  ldr x12,[x11, #0xa0]
71026bda04  and x12,x12,#0xffffffffff
71026bda08  cmp x12,x10
71026bda0c  b.eq 0x71026bec7c
71026bda10  cmp x9,x8
71026bda14  b.ne 0x71026bd9fc
71026bda18  mov x22,xzr
71026bda1c  mov x21,xzr
71026bda20  adrp x8,0x7105314000
71026bda24  add x8,x8,#0x4d8
71026bda28  ldarb w8,[x8]
71026bda2c  tbz w8,#0x0,0x71026bf704
71026bda30  adrp x8,0x71052c5000
71026bda34  ldrb w8,[x8, #0x1ba]
71026bda38  cbz w8,0x71026bdaa8
71026bda3c  cbz x22,0x71026bdb7c
71026bda40  ldrb w8,[x22, #0x20]
71026bda44  cbnz w8,0x71026bdb7c
71026bda48  mov w8,#0x1
71026bda4c  strb w8,[x22, #0x20]
71026bda50  ldr x9,[x22]
71026bda54  ldp x10,x8,[x22, #0x8]
71026bda58  str x9,[x10]
71026bda5c  str x10,[x9, #0x8]
71026bda60  ldr x9,[x8, #0x30]
71026bda64  sub x9,x9,#0x1
71026bda68  str x9,[x8, #0x30]
71026bda6c  stp xzr,xzr,[x22]
71026bda70  ldr x10,[x8, #0x28]
71026bda74  add x9,x8,#0x20
71026bda78  stp x9,x10,[x22]
71026bda7c  str x22,[x8, #0x28]
71026bda80  str x22,[x10]
71026bda84  ldr x9,[x8, #0x18]
71026bda88  add x9,x9,#0x1
71026bda8c  str x9,[x8, #0x18]
71026bda90  ldr x9,[x22, #0x18]
71026bda94  cbz x9,0x71026bda9c
71026bda98  ldr w9,[x9, #0x110]
71026bda9c  ldr w10,[x8, #0x48]
71026bdaa0  add w9,w10,w9
71026bdaa4  b 0x71026bdb78
71026bdaa8  cbz x21,0x71026bdb14
71026bdaac  ldrb w8,[x21, #0x20]
71026bdab0  cbnz w8,0x71026bdb14
71026bdab4  mov w8,#0x1
71026bdab8  strb w8,[x21, #0x20]
71026bdabc  ldr x9,[x21]
71026bdac0  ldp x10,x8,[x21, #0x8]
71026bdac4  str x9,[x10]
71026bdac8  str x10,[x9, #0x8]
71026bdacc  ldr x9,[x8, #0x30]
71026bdad0  sub x9,x9,#0x1
71026bdad4  str x9,[x8, #0x30]
71026bdad8  stp xzr,xzr,[x21]
71026bdadc  ldr x10,[x8, #0x28]
71026bdae0  add x9,x8,#0x20
71026bdae4  stp x9,x10,[x21]
71026bdae8  str x21,[x8, #0x28]
71026bdaec  str x21,[x10]
71026bdaf0  ldr x9,[x8, #0x18]
71026bdaf4  add x9,x9,#0x1
71026bdaf8  str x9,[x8, #0x18]
71026bdafc  ldr x9,[x21, #0x18]
71026bdb00  cbz x9,0x71026bdb08
71026bdb04  ldr w9,[x9, #0x110]
71026bdb08  ldr w10,[x8, #0x48]
71026bdb0c  add w9,w10,w9
71026bdb10  str w9,[x8, #0x48]
71026bdb14  cbz x22,0x71026bdb7c
71026bdb18  ldrb w8,[x22, #0x20]
71026bdb1c  cbz w8,0x71026bdb7c
71026bdb20  ldp x10,x8,[x22, #0x8]
71026bdb24  ldr x9,[x22]
71026bdb28  strb wzr,[x22, #0x20]
71026bdb2c  str x9,[x10]
71026bdb30  str x10,[x9, #0x8]
71026bdb34  ldr x9,[x8, #0x18]
71026bdb38  sub x9,x9,#0x1
71026bdb3c  str x9,[x8, #0x18]
71026bdb40  stp xzr,xzr,[x22]
71026bdb44  ldr x10,[x8, #0x40]
71026bdb48  add x9,x8,#0x38
71026bdb4c  stp x9,x10,[x22]
71026bdb50  str x22,[x8, #0x40]
71026bdb54  str x22,[x10]
71026bdb58  ldr x9,[x8, #0x30]
71026bdb5c  add x9,x9,#0x1
71026bdb60  str x9,[x8, #0x30]
71026bdb64  ldr x9,[x22, #0x18]
71026bdb68  cbz x9,0x71026bdb70
71026bdb6c  ldr w9,[x9, #0x110]
71026bdb70  ldr w10,[x8, #0x48]
71026bdb74  sub w9,w10,w9
71026bdb78  str w9,[x8, #0x48]
71026bdb7c  ldr w8,[x19, #0x950]
71026bdb80  adrp x9,0x7104551000
71026bdb84  add x9,x9,#0x864
71026bdb88  ldr w8,[x9, x8, LSL #0x2]
71026bdb8c  str w8,[x19, #0x9a4]
71026bdb90  mov w8,#0x1
71026bdb94  str w8,[x19, #0x9b0]
71026bdb98  strb w8,[x19, #0x9b4]
71026bdb9c  adrp x21,0x710532a000
71026bdba0  add x21,x21,#0xe90
71026bdba4  ldarb w8,[x21]
71026bdba8  tbz w8,#0x0,0x71026bf74c
71026bdbac  ldr w8,[x19, #0x950]
71026bdbb0  adrp x22,0x710532a000
71026bdbb4  add x22,x22,#0xea0
71026bdbb8  lsl x8,x8,#0x5
71026bdbbc  ldr q0,[x22,x8]
71026bdbc0  ldr w8,[x19, #0xc78]
71026bdbc4  mov v0.D[0x1],v2.D[0x0]
71026bdbc8  str q0,[x19, #0x9d0]
71026bdbcc  tbnz w8,#0x1f,0x71026bdd18
71026bdbd0  ldr x9,[x19, #0x310]
71026bdbd4  ldr x9,[x9, #0xd0]
71026bdbd8  lsl x8,x8,#0x4
71026bdbdc  ldr x25,[x9, x8, LSL #0x0]
71026bdbe0  cbz x25,0x71026bdce8
71026bdbe4  add x0,x25,#0x108
71026bdbe8  mov w8,#0x1
71026bdbec  strb w8,[x25, #0x110]
71026bdbf0  bl 0x71025e9d50
71026bdbf4  ldrb w8,[x25, #0xe0]
71026bdbf8  cbz w8,0x71026bdc08
71026bdbfc  ldr x8,[x25, #0xc8]
71026bdc00  cbz x8,0x71026bdc08
71026bdc04  strh wzr,[x8, #0x30]
71026bdc08  ldr x8,[x25, #0xd8]
71026bdc0c  cbz x8,0x71026bdc14
71026bdc10  strb wzr,[x8, #0x21]
71026bdc14  ldrb w8,[x25, #0xe0]
71026bdc18  cbz w8,0x71026bdc28
71026bdc1c  ldr x8,[x25, #0xb0]
71026bdc20  mov w9,#0x1
71026bdc24  strb w9,[x8, #0x10]
71026bdc28  ldr q0,[x19, #0x9d0]
71026bdc2c  fmov s1,0x3f800000
71026bdc30  adrp x8,0x7104468000
71026bdc34  mov v0.S[0x3],v1.S[0x0]
71026bdc38  ldr q1,[x8, #0xca0]
71026bdc3c  adrp x8,0x710446a000
71026bdc40  mov x1,sp
71026bdc44  str q1,[sp]
71026bdc48  ldr q1,[x8, #0x360]
71026bdc4c  adrp x8,0x7104465000
71026bdc50  str q1,[sp, #0x10]
71026bdc54  ldr q1,[x8, #0x6b0]
71026bdc58  stp q1,q0,[sp, #0x20]
71026bdc5c  ldr x0,[x25, #0x90]
71026bdc60  ldr x8,[x0]
71026bdc64  ldr x8,[x8, #0x148]
71026bdc68  blr x8
71026bdc6c  ldr x25,[x25, #0xd8]
71026bdc70  movi d2,#0x0
71026bdc74  cbz x25,0x71026bdd18
71026bdc78  ldr x8,[sp, #0x18]
71026bdc7c  str x8,[sp, #0x58]
71026bdc80  ldr x8,[sp, #0x10]
71026bdc84  str x8,[sp, #0x50]
71026bdc88  ldr x8,[sp, #0x8]
71026bdc8c  str x8,[sp, #0x48]
71026bdc90  ldr x8,[sp]
71026bdc94  str x8,[sp, #0x40]
71026bdc98  ldr x8,[sp, #0x38]
71026bdc9c  str x8,[sp, #0x78]
71026bdca0  ldr x8,[sp, #0x30]
71026bdca4  str x8,[sp, #0x70]
71026bdca8  ldr x8,[sp, #0x28]
71026bdcac  str x8,[sp, #0x68]
71026bdcb0  ldr x8,[sp, #0x20]
71026bdcb4  str x8,[sp, #0x60]
71026bdcb8  ldr x8,[x25, #0x8]
71026bdcbc  ldrb w9,[x8, #0xa8]
71026bdcc0  cbz w9,0x71026bdcdc
71026bdcc4  ldr x0,[x8, #0x48]
71026bdcc8  ldr x8,[x0]
71026bdccc  ldr x8,[x8, #0x20]
71026bdcd0  add x1,sp,#0x40
71026bdcd4  blr x8
71026bdcd8  movi d2,#0x0
71026bdcdc  mov w8,#0x1
71026bdce0  strb w8,[x25, #0x20]
71026bdce4  b 0x71026bdd18
71026bdce8  ldr q0,[x19, #0x9d0]
71026bdcec  fmov s1,0x3f800000
71026bdcf0  adrp x8,0x7104468000
71026bdcf4  mov v0.S[0x3],v1.S[0x0]
71026bdcf8  ldr q1,[x8, #0xca0]
71026bdcfc  adrp x8,0x710446a000
71026bdd00  str q1,[sp]
71026bdd04  ldr q1,[x8, #0x360]
71026bdd08  adrp x8,0x7104465000
71026bdd0c  str q1,[sp, #0x10]
71026bdd10  ldr q1,[x8, #0x6b0]
71026bdd14  stp q1,q0,[sp, #0x20]
71026bdd18  ldr w8,[x19, #0x9a4]
71026bdd1c  cmp w8,#0x1
71026bdd20  b.ls 0x71026bde64
71026bdd24  mov w8,#0x1
71026bdd28  str w8,[x19, #0x9e0]
71026bdd2c  strb w8,[x19, #0x9e4]
71026bdd30  ldarb w8,[x21]
71026bdd34  tbz w8,#0x0,0x71026bf824
71026bdd38  ldr w8,[x19, #0x950]
71026bdd3c  add x8,x22,x8, LSL #0x5
71026bdd40  ldr q0,[x8, #0x10]
71026bdd44  ldr w8,[x19, #0xc7c]
71026bdd48  mov v0.D[0x1],v2.D[0x0]
71026bdd4c  str q0,[x19, #0xa00]
71026bdd50  tbnz w8,#0x1f,0x71026be0cc
71026bdd54  ldr x9,[x19, #0x310]
71026bdd58  ldr x9,[x9, #0xd0]
71026bdd5c  lsl x8,x8,#0x4
71026bdd60  ldr x21,[x9, x8, LSL #0x0]
71026bdd64  cbz x21,0x71026be09c
71026bdd68  add x0,x21,#0x108
71026bdd6c  mov w8,#0x1
71026bdd70  strb w8,[x21, #0x110]
71026bdd74  bl 0x71025e9d50
71026bdd78  ldrb w8,[x21, #0xe0]
71026bdd7c  cbz w8,0x71026bdd8c
71026bdd80  ldr x8,[x21, #0xc8]
71026bdd84  cbz x8,0x71026bdd8c
71026bdd88  strh wzr,[x8, #0x30]
71026bdd8c  ldr x8,[x21, #0xd8]
71026bdd90  cbz x8,0x71026bdd98
71026bdd94  strb wzr,[x8, #0x21]
71026bdd98  ldrb w8,[x21, #0xe0]
71026bdd9c  cbz w8,0x71026bddac
71026bdda0  ldr x8,[x21, #0xb0]
71026bdda4  mov w9,#0x1
71026bdda8  strb w9,[x8, #0x10]
71026bddac  ldr q0,[x19, #0xa00]
71026bddb0  fmov s1,0x3f800000
71026bddb4  adrp x8,0x7104468000
71026bddb8  mov v0.S[0x3],v1.S[0x0]
71026bddbc  ldr q1,[x8, #0xca0]
71026bddc0  adrp x8,0x710446a000
71026bddc4  mov x1,sp
71026bddc8  str q1,[sp]
71026bddcc  ldr q1,[x8, #0x360]
71026bddd0  adrp x8,0x7104465000
71026bddd4  str q1,[sp, #0x10]
71026bddd8  ldr q1,[x8, #0x6b0]
71026bdddc  stp q1,q0,[sp, #0x20]
71026bdde0  ldr x0,[x21, #0x90]
71026bdde4  ldr x8,[x0]
71026bdde8  ldr x8,[x8, #0x148]
71026bddec  blr x8
71026bddf0  ldr x21,[x21, #0xd8]
71026bddf4  cbz x21,0x71026be0cc
71026bddf8  ldr x8,[sp, #0x18]
71026bddfc  str x8,[sp, #0x58]
71026bde00  ldr x8,[sp, #0x10]
71026bde04  str x8,[sp, #0x50]
71026bde08  ldr x8,[sp, #0x8]
71026bde0c  str x8,[sp, #0x48]
71026bde10  ldr x8,[sp]
71026bde14  str x8,[sp, #0x40]
71026bde18  ldr x8,[sp, #0x38]
71026bde1c  str x8,[sp, #0x78]
71026bde20  ldr x8,[sp, #0x30]
71026bde24  str x8,[sp, #0x70]
71026bde28  ldr x8,[sp, #0x28]
71026bde2c  str x8,[sp, #0x68]
71026bde30  ldr x8,[sp, #0x20]
71026bde34  str x8,[sp, #0x60]
71026bde38  ldr x8,[x21, #0x8]
71026bde3c  ldrb w9,[x8, #0xa8]
71026bde40  cbz w9,0x71026bde58
71026bde44  ldr x0,[x8, #0x48]
71026bde48  ldr x8,[x0]
71026bde4c  ldr x8,[x8, #0x20]
71026bde50  add x1,sp,#0x40
71026bde54  blr x8
71026bde58  mov w8,#0x1
71026bde5c  strb w8,[x21, #0x20]
71026bde60  b 0x71026be0cc
71026bde64  ldr w8,[x19, #0xc7c]
71026bde68  str wzr,[x19, #0x9e0]
71026bde6c  tbnz w8,#0x1f,0x71026be0cc
71026bde70  ldr x9,[x19, #0x310]
71026bde74  ldr x9,[x9, #0xd0]
71026bde78  lsl x8,x8,#0x4
71026bde7c  ldr x21,[x9, x8, LSL #0x0]
71026bde80  cbz x21,0x71026be0cc
71026bde84  add x0,x21,#0x108
71026bde88  strb wzr,[x21, #0x110]
71026bde8c  bl 0x71025e9d50
71026bde90  ldrb w8,[x21, #0xe0]
71026bde94  cbz w8,0x71026bdea4
71026bde98  ldr x8,[x21, #0xc8]
71026bde9c  cbz x8,0x71026bdea4
71026bdea0  strh wzr,[x8, #0x30]
71026bdea4  ldr x8,[x21, #0xd8]
71026bdea8  cbz x8,0x71026bdeb0
71026bdeac  strb wzr,[x8, #0x21]
71026bdeb0  ldrb w8,[x21, #0xe0]
71026bdeb4  cbz w8,0x71026be0cc
71026bdeb8  ldr x8,[x21, #0xb0]
71026bdebc  mov w9,#0x1
71026bdec0  strb w9,[x8, #0x10]
71026bdec4  b 0x71026be0cc
71026bdec8  bl 0x710262fb80
71026bdecc  cbz x0,0x71026bd1b0
71026bded0  ldr x8,[x19, #0x310]
71026bded4  str w25,[x19, #0xc84]
71026bded8  ldr x8,[x8, #0xd0]
71026bdedc  ubfx x9,x26,#0x4,#0x20
71026bdee0  lsl x9,x9,#0x4
71026bdee4  add w22,w25,#0x1
71026bdee8  ldr x25,[x8, x9, LSL #0x0]
71026bdeec  cbz x25,0x71026bd1b4
71026bdef0  add x0,x25,#0x108
71026bdef4  strb wzr,[x25, #0x110]
71026bdef8  bl 0x71025e9d50
71026bdefc  ldrb w8,[x25, #0xe0]
71026bdf00  cbz w8,0x71026bdf10
71026bdf04  ldr x8,[x25, #0xc8]
71026bdf08  cbz x8,0x71026bdf10
71026bdf0c  strh w23,[x8, #0x30]
71026bdf10  ldr x8,[x25, #0xd8]
71026bdf14  cbz x8,0x71026bdf20
71026bdf18  mov w9,#0x1
71026bdf1c  strb w9,[x8, #0x21]
71026bdf20  ldrb w8,[x25, #0xe0]
71026bdf24  cbz w8,0x71026bd1b4
71026bdf28  ldr x8,[x25, #0xb0]
71026bdf2c  strb wzr,[x8, #0x10]
71026bdf30  b 0x71026bd1b4
71026bdf34  bl 0x710262fb80
71026bdf38  cbz x0,0x71026bd1ec
71026bdf3c  ldr x8,[x19, #0x310]
71026bdf40  str w22,[x19, #0xc88]
71026bdf44  ldr x8,[x8, #0xd0]
71026bdf48  mov w9,w22
71026bdf4c  lsl x9,x9,#0x4
71026bdf50  add w21,w22,#0x1
71026bdf54  ldr x22,[x8, x9, LSL #0x0]
71026bdf58  cbz x22,0x71026bd1f0
71026bdf5c  add x0,x22,#0x108
71026bdf60  strb wzr,[x22, #0x110]
71026bdf64  bl 0x71025e9d50
71026bdf68  ldrb w8,[x22, #0xe0]
71026bdf6c  cbz w8,0x71026bdf7c
71026bdf70  ldr x8,[x22, #0xc8]
71026bdf74  cbz x8,0x71026bdf7c
71026bdf78  strh w23,[x8, #0x30]
71026bdf7c  ldr x8,[x22, #0xd8]
71026bdf80  cbz x8,0x71026bdf8c
71026bdf84  mov w9,#0x1
71026bdf88  strb w9,[x8, #0x21]
71026bdf8c  ldrb w8,[x22, #0xe0]
71026bdf90  cbz w8,0x71026bd1f0
71026bdf94  ldr x8,[x22, #0xb0]
71026bdf98  strb wzr,[x8, #0x10]
71026bdf9c  b 0x71026bd1f0
71026bdfa0  bl 0x710262fb80
71026bdfa4  cbz x0,0x71026bd234
71026bdfa8  ldr x8,[x19, #0x310]
71026bdfac  str w21,[x19, #0xc7c]
71026bdfb0  ldr x8,[x8, #0xd0]
71026bdfb4  mov w9,w21
71026bdfb8  lsl x9,x9,#0x4
71026bdfbc  add w22,w21,#0x1
71026bdfc0  ldr x21,[x8, x9, LSL #0x0]
71026bdfc4  cbz x21,0x71026bd238
71026bdfc8  add x0,x21,#0x108
71026bdfcc  strb wzr,[x21, #0x110]
71026bdfd0  bl 0x71025e9d50
71026bdfd4  ldrb w8,[x21, #0xe0]
71026bdfd8  cbz w8,0x71026bdfe8
71026bdfdc  ldr x8,[x21, #0xc8]
71026bdfe0  cbz x8,0x71026bdfe8
71026bdfe4  strh w23,[x8, #0x30]
71026bdfe8  ldr x8,[x21, #0xd8]
71026bdfec  cbz x8,0x71026bdff8
71026bdff0  mov w9,#0x1
71026bdff4  strb w9,[x8, #0x21]
71026bdff8  ldrb w8,[x21, #0xe0]
71026bdffc  cbz w8,0x71026bd238
71026be000  ldr x8,[x21, #0xb0]
71026be004  strb wzr,[x8, #0x10]
71026be008  b 0x71026bd238
71026be00c  bl 0x710262fb80
71026be010  cbz x0,0x71026bd27c
71026be014  ldr x8,[x19, #0x310]
71026be018  str w22,[x19, #0xc90]
71026be01c  ldr x8,[x8, #0xd0]
71026be020  mov w9,w22
71026be024  lsl x9,x9,#0x4
71026be028  add w21,w22,#0x1
71026be02c  ldr x22,[x8, x9, LSL #0x0]
71026be030  cbz x22,0x71026bd280
71026be034  add x0,x22,#0x108
71026be038  strb wzr,[x22, #0x110]
71026be03c  bl 0x71025e9d50
71026be040  ldrb w8,[x22, #0xe0]
71026be044  cbz w8,0x71026be054
71026be048  ldr x8,[x22, #0xc8]
71026be04c  cbz x8,0x71026be054
71026be050  strh w23,[x8, #0x30]
71026be054  ldr x8,[x22, #0xd8]
71026be058  cbz x8,0x71026be064
71026be05c  mov w9,#0x1
71026be060  strb w9,[x8, #0x21]
71026be064  ldrb w8,[x22, #0xe0]
71026be068  cbz w8,0x71026bd280
71026be06c  ldr x8,[x22, #0xb0]
71026be070  strb wzr,[x8, #0x10]
71026be074  b 0x71026bd280
71026be078  mov w1,w21
71026be07c  bl 0x7103540a00
71026be080  mov x0,x20
71026be084  mov w1,w21
71026be088  bl 0x7103720ec0
71026be08c  ldr x0,[x22, #0xf20]
71026be090  mov w1,w21
71026be094  bl 0x7103540b10
71026be098  b 0x71026bceec
71026be09c  ldr q0,[x19, #0xa00]
71026be0a0  fmov s1,0x3f800000
71026be0a4  adrp x8,0x7104468000
71026be0a8  mov v0.S[0x3],v1.S[0x0]
71026be0ac  ldr q1,[x8, #0xca0]
71026be0b0  adrp x8,0x710446a000
71026be0b4  str q1,[sp]
71026be0b8  ldr q1,[x8, #0x360]
71026be0bc  adrp x8,0x7104465000
71026be0c0  str q1,[sp, #0x10]
71026be0c4  ldr q1,[x8, #0x6b0]
71026be0c8  stp q1,q0,[sp, #0x20]
71026be0cc  mov w1,#0x50
71026be0d0  mov w0,#0x10
71026be0d4  str wzr,[x19, #0xa10]
71026be0d8  str w24,[x19, #0xa60]
71026be0dc  str wzr,[x19, #0xa70]
71026be0e0  str w24,[x19, #0xac0]
71026be0e4  bl 0x710392e290
71026be0e8  mov x21,x0
71026be0ec  cbnz x0,0x71026be138
71026be0f0  adrp x8,0x7105332000
71026be0f4  ldr x0,[x8, #0xf00]
71026be0f8  cbz x0,0x71026be134
71026be0fc  mov w8,#0x50
71026be100  str wzr,[sp]
71026be104  mov x1,sp
71026be108  str x8,[sp, #0x40]
71026be10c  ldr x8,[x0]
71026be110  ldr x8,[x8, #0x30]
71026be114  add x2,sp,#0x40
71026be118  blr x8
71026be11c  tbz w0,#0x0,0x71026be134
71026be120  mov w1,#0x50
71026be124  mov w0,#0x10
71026be128  bl 0x710392e290
71026be12c  mov x21,x0
71026be130  cbnz x0,0x71026be138
71026be134  mov x21,xzr
71026be138  adrp x26,0x71052a8000
71026be13c  ldr x26,[x26, #0xa80]
71026be140  ldr q0,[x26]
71026be144  mov w8,#0x1
71026be148  str x19,[x21]
71026be14c  strh w8,[x21, #0x8]
71026be150  stp xzr,xzr,[x21, #0x30]
71026be154  strb wzr,[x21, #0xa]
71026be158  stp q0,q0,[x21, #0x10]
71026be15c  str w24,[x21, #0xc]
71026be160  str wzr,[x21, #0x40]
71026be164  adrp x25,0x710532a000
71026be168  ldr x8,[x25, #0x9d8]
71026be16c  ldr x8,[x8]
71026be170  ldr x0,[x8, #0x1c8]
71026be174  mov x1,x19
71026be178  mov x2,x21
71026be17c  bl 0x71031675b0
71026be180  and w8,w0,#0x1
71026be184  strb w8,[x21, #0x8]
71026be188  ldr x22,[x19, #0xc10]
71026be18c  str x21,[x19, #0xc10]
71026be190  cbz x22,0x71026be218
71026be194  adrp x8,0x71052b6000
71026be198  ldr x8,[x8, #0xfd8]
71026be19c  ldrb w9,[x8, #0x9]
71026be1a0  cbz w9,0x71026be1f4
71026be1a4  ldrb w9,[x22, #0xa]
71026be1a8  cbz w9,0x71026be1f4
71026be1ac  ldrb w9,[x22, #0x9]
71026be1b0  cbz w9,0x71026be1f0
71026be1b4  ldrsw x9,[x22, #0xc]
71026be1b8  cmp w9,#0x37
71026be1bc  b.hi 0x71026be1e8
71026be1c0  ldr x8,[x8]
71026be1c4  ldr x8,[x8, #0xc0]
71026be1c8  add x9,x8,x9
71026be1cc  ldrb w10,[x9, #0x464]
71026be1d0  cbz w10,0x71026be1e8
71026be1d4  add x9,x9,#0x464
71026be1d8  strb wzr,[x9]
71026be1dc  ldr w9,[x8]
71026be1e0  sub w9,w9,#0x1
71026be1e4  str w9,[x8]
71026be1e8  str w24,[x22, #0xc]
71026be1ec  strb wzr,[x22, #0x9]
71026be1f0  strb wzr,[x22, #0xa]
71026be1f4  ldr x8,[x25, #0x9d8]
71026be1f8  ldr x8,[x8]
71026be1fc  ldr x0,[x8, #0x1c8]
71026be200  ldr x1,[x22]
71026be204  mov x2,x22
71026be208  bl 0x71031676c0
71026be20c  mov x0,x22
71026be210  bl 0x710392eb40
71026be214  ldr x21,[x19, #0xc10]
71026be218  movi v1.2D,#0x0
71026be21c  mov v0.16B,v1.16B
71026be220  add x8,x19,#0x8d0
71026be224  add x9,x19,#0x8d8
71026be228  ld1 {v1.S}[0],[x9]
71026be22c  add x1,sp,#0x40
71026be230  mov x0,x21
71026be234  mov x2,sp
71026be238  ld1 {v0.S}[0],[x8]
71026be23c  add x8,x19,#0x8d4
71026be240  ld1 {v0.S}[1],[x8]
71026be244  add x8,x19,#0x8dc
71026be248  ld1 {v1.S}[1],[x8]
71026be24c  str q0,[sp, #0x40]
71026be250  str q1,[sp]
71026be254  bl 0x710317e570
71026be258  ldr x8,[x19, #0xc10]
71026be25c  ldrb w9,[x8, #0x9]
71026be260  cbz w9,0x71026be2a8
71026be264  ldrsw x10,[x8, #0xc]
71026be268  cmp w10,#0x37
71026be26c  b.hi 0x71026be2a0
71026be270  adrp x9,0x71052b6000
71026be274  ldr x9,[x9, #0xfd8]
71026be278  ldr x9,[x9]
71026be27c  ldr x9,[x9, #0xc0]
71026be280  add x10,x9,x10
71026be284  ldrb w11,[x10, #0x464]
71026be288  cbz w11,0x71026be2a0
71026be28c  add x10,x10,#0x464
71026be290  strb wzr,[x10]
71026be294  ldr w10,[x9]
71026be298  sub w10,w10,#0x1
71026be29c  str w10,[x9]
71026be2a0  str w24,[x8, #0xc]
71026be2a4  strb wzr,[x8, #0x9]
71026be2a8  mov w1,#0x50
71026be2ac  mov w0,#0x10
71026be2b0  strb wzr,[x8, #0xa]
71026be2b4  bl 0x710392e290
71026be2b8  mov x21,x0
71026be2bc  cbnz x0,0x71026be308
71026be2c0  adrp x8,0x7105332000
71026be2c4  ldr x0,[x8, #0xf00]
71026be2c8  cbz x0,0x71026be304
71026be2cc  mov w8,#0x50
71026be2d0  str wzr,[sp]
71026be2d4  mov x1,sp
71026be2d8  str x8,[sp, #0x40]
71026be2dc  ldr x8,[x0]
71026be2e0  ldr x8,[x8, #0x30]
71026be2e4  add x2,sp,#0x40
71026be2e8  blr x8
71026be2ec  tbz w0,#0x0,0x71026be304
71026be2f0  mov w1,#0x50
71026be2f4  mov w0,#0x10
71026be2f8  bl 0x710392e290
71026be2fc  mov x21,x0
71026be300  cbnz x0,0x71026be308
71026be304  mov x21,xzr
71026be308  ldr q0,[x26]
71026be30c  mov w8,#0x1
71026be310  str x19,[x21]
71026be314  strh w8,[x21, #0x8]
71026be318  strb wzr,[x21, #0xa]
71026be31c  mov x1,x19
71026be320  str w24,[x21, #0xc]
71026be324  mov x2,x21
71026be328  str wzr,[x21, #0x40]
71026be32c  stp xzr,xzr,[x21, #0x30]
71026be330  stp q0,q0,[x21, #0x10]
71026be334  ldr x8,[x25, #0x9d8]
71026be338  ldr x8,[x8]
71026be33c  ldr x0,[x8, #0x1c8]
71026be340  bl 0x71031675b0
71026be344  and w8,w0,#0x1
71026be348  strb w8,[x21, #0x8]
71026be34c  ldr x22,[x19, #0xc18]
71026be350  str x21,[x19, #0xc18]
71026be354  cbz x22,0x71026be3dc
71026be358  adrp x8,0x71052b6000
71026be35c  ldr x8,[x8, #0xfd8]
71026be360  ldrb w9,[x8, #0x9]
71026be364  cbz w9,0x71026be3b8
71026be368  ldrb w9,[x22, #0xa]
71026be36c  cbz w9,0x71026be3b8
71026be370  ldrb w9,[x22, #0x9]
71026be374  cbz w9,0x71026be3b4
71026be378  ldrsw x9,[x22, #0xc]
71026be37c  cmp w9,#0x37
71026be380  b.hi 0x71026be3ac
71026be384  ldr x8,[x8]
71026be388  ldr x8,[x8, #0xc0]
71026be38c  add x9,x8,x9
71026be390  ldrb w10,[x9, #0x464]
71026be394  cbz w10,0x71026be3ac
71026be398  add x9,x9,#0x464
71026be39c  strb wzr,[x9]
71026be3a0  ldr w9,[x8]
71026be3a4  sub w9,w9,#0x1
71026be3a8  str w9,[x8]
71026be3ac  str w24,[x22, #0xc]
71026be3b0  strb wzr,[x22, #0x9]
71026be3b4  strb wzr,[x22, #0xa]
71026be3b8  ldr x8,[x25, #0x9d8]
71026be3bc  ldr x8,[x8]
71026be3c0  ldr x0,[x8, #0x1c8]
71026be3c4  ldr x1,[x22]
71026be3c8  mov x2,x22
71026be3cc  bl 0x71031676c0
71026be3d0  mov x0,x22
71026be3d4  bl 0x710392eb40
71026be3d8  ldr x21,[x19, #0xc18]
71026be3dc  movi v1.2D,#0x0
71026be3e0  mov v0.16B,v1.16B
71026be3e4  add x8,x19,#0x8d0
71026be3e8  add x9,x19,#0x8d8
71026be3ec  ld1 {v1.S}[0],[x9]
71026be3f0  add x1,sp,#0x40
71026be3f4  mov x0,x21
71026be3f8  mov x2,sp
71026be3fc  ld1 {v0.S}[0],[x8]
71026be400  add x8,x19,#0x8d4
71026be404  ld1 {v0.S}[1],[x8]
71026be408  add x8,x19,#0x8dc
71026be40c  ld1 {v1.S}[1],[x8]
71026be410  str q0,[sp, #0x40]
71026be414  str q1,[sp]
71026be418  bl 0x710317e570
71026be41c  ldr x8,[x19, #0xc18]
71026be420  ldrb w9,[x8, #0x9]
71026be424  cbz w9,0x71026be46c
71026be428  ldrsw x10,[x8, #0xc]
71026be42c  cmp w10,#0x37
71026be430  b.hi 0x71026be464
71026be434  adrp x9,0x71052b6000
71026be438  ldr x9,[x9, #0xfd8]
71026be43c  ldr x9,[x9]
71026be440  ldr x9,[x9, #0xc0]
71026be444  add x10,x9,x10
71026be448  ldrb w11,[x10, #0x464]
71026be44c  cbz w11,0x71026be464
71026be450  add x10,x10,#0x464
71026be454  strb wzr,[x10]
71026be458  ldr w10,[x9]
71026be45c  sub w10,w10,#0x1
71026be460  str w10,[x9]
71026be464  str w24,[x8, #0xc]
71026be468  strb wzr,[x8, #0x9]
71026be46c  strb wzr,[x8, #0xa]
71026be470  ldrb w8,[x19, #0x18]
71026be474  cbz w8,0x71026be604
71026be478  adrp x8,0x710532a000
71026be47c  add x8,x8,#0xf00
71026be480  ldarb w8,[x8]
71026be484  tbz w8,#0x0,0x71026bf7b8
71026be488  ldr w9,[x19, #0x950]
71026be48c  adrp x8,0x7104551000
71026be490  add x8,x8,#0x858
71026be494  orr w10,wzr,#0x30
71026be498  ldr w8,[x8, x9, LSL #0x2]
71026be49c  mul x9,x9,x10
71026be4a0  mov w10,#0x1
71026be4a4  str wzr,[x19, #0xae8]
71026be4a8  str w10,[x19, #0xae0]
71026be4ac  adrp x21,0x710532a000
71026be4b0  add x21,x21,#0xf10
71026be4b4  str w8,[x19, #0xad0]
71026be4b8  ldr q0,[x21,x9]
71026be4bc  fmov s1,wzr
71026be4c0  mov v0.S[0x3],v1.S[0x0]
71026be4c4  ldr w9,[x19, #0xc80]
71026be4c8  str wzr,[x19, #0xae4]
71026be4cc  str q0,[x19, #0xaf0]
71026be4d0  tbnz w9,#0x1f,0x71026be99c
71026be4d4  ldr x8,[x19, #0x310]
71026be4d8  ldr x8,[x8, #0xd0]
71026be4dc  lsl x9,x9,#0x4
71026be4e0  ldr x22,[x8, x9, LSL #0x0]
71026be4e4  cbz x22,0x71026be968
71026be4e8  add x0,x22,#0x108
71026be4ec  strb wzr,[x22, #0x110]
71026be4f0  bl 0x71025e9d50
71026be4f4  ldrb w8,[x22, #0xe0]
71026be4f8  cbz w8,0x71026be508
71026be4fc  ldr x8,[x22, #0xc8]
71026be500  cbz x8,0x71026be508
71026be504  strh w23,[x8, #0x32]
71026be508  ldr x8,[x22, #0xd8]
71026be50c  cbz x8,0x71026be518
71026be510  mov w9,#0x1
71026be514  strb w9,[x8, #0x22]
71026be518  ldrb w8,[x22, #0xe0]
71026be51c  cbz w8,0x71026be52c
71026be520  ldr x8,[x22, #0xc8]
71026be524  cbz x8,0x71026be52c
71026be528  strh w23,[x8, #0x30]
71026be52c  ldr x8,[x22, #0xd8]
71026be530  cbz x8,0x71026be53c
71026be534  mov w9,#0x1
71026be538  strb w9,[x8, #0x21]
71026be53c  ldrb w8,[x22, #0xe0]
71026be540  cbz w8,0x71026be54c
71026be544  ldr x8,[x22, #0xb0]
71026be548  strb wzr,[x8, #0x10]
71026be54c  ldr q0,[x19, #0xaf0]
71026be550  fmov s1,0x3f800000
71026be554  adrp x8,0x7104468000
71026be558  mov v0.S[0x3],v1.S[0x0]
71026be55c  ldr q1,[x8, #0xca0]
71026be560  adrp x8,0x710446a000
71026be564  mov x1,sp
71026be568  str q1,[sp]
71026be56c  ldr q1,[x8, #0x360]
71026be570  adrp x8,0x7104465000
71026be574  str q1,[sp, #0x10]
71026be578  ldr q1,[x8, #0x6b0]
71026be57c  stp q1,q0,[sp, #0x20]
71026be580  ldr x0,[x22, #0x90]
71026be584  ldr x8,[x0]
71026be588  ldr x8,[x8, #0x148]
71026be58c  blr x8
71026be590  ldr x22,[x22, #0xd8]
71026be594  cbz x22,0x71026be998
71026be598  ldr x8,[sp, #0x18]
71026be59c  str x8,[sp, #0x58]
71026be5a0  ldr x8,[sp, #0x10]
71026be5a4  str x8,[sp, #0x50]
71026be5a8  ldr x8,[sp, #0x8]
71026be5ac  str x8,[sp, #0x48]
71026be5b0  ldr x8,[sp]
71026be5b4  str x8,[sp, #0x40]
71026be5b8  ldr x8,[sp, #0x38]
71026be5bc  str x8,[sp, #0x78]
71026be5c0  ldr x8,[sp, #0x30]
71026be5c4  str x8,[sp, #0x70]
71026be5c8  ldr x8,[sp, #0x28]
71026be5cc  str x8,[sp, #0x68]
71026be5d0  ldr x8,[sp, #0x20]
71026be5d4  str x8,[sp, #0x60]
71026be5d8  ldr x8,[x22, #0x8]
71026be5dc  ldrb w9,[x8, #0xa8]
71026be5e0  cbz w9,0x71026be5f8
71026be5e4  ldr x0,[x8, #0x48]
71026be5e8  ldr x8,[x0]
71026be5ec  ldr x8,[x8, #0x20]
71026be5f0  add x1,sp,#0x40
71026be5f4  blr x8
71026be5f8  mov w8,#0x1
71026be5fc  strb w8,[x22, #0x20]
71026be600  b 0x71026be998
71026be604  ldr w8,[x19, #0xc80]
71026be608  str wzr,[x19, #0xae0]
71026be60c  tbnz w8,#0x1f,0x71026be664
71026be610  ldr x9,[x19, #0x310]
71026be614  ldr x9,[x9, #0xd0]
71026be618  lsl x8,x8,#0x4
71026be61c  ldr x21,[x9, x8, LSL #0x0]
71026be620  cbz x21,0x71026be664
71026be624  add x0,x21,#0x108
71026be628  strb wzr,[x21, #0x110]
71026be62c  bl 0x71025e9d50
71026be630  ldrb w8,[x21, #0xe0]
71026be634  cbz w8,0x71026be644
71026be638  ldr x8,[x21, #0xc8]
71026be63c  cbz x8,0x71026be644
71026be640  strh w23,[x8, #0x30]
71026be644  ldr x8,[x21, #0xd8]
71026be648  cbz x8,0x71026be654
71026be64c  mov w9,#0x1
71026be650  strb w9,[x8, #0x21]
71026be654  ldrb w8,[x21, #0xe0]
71026be658  cbz w8,0x71026be664
71026be65c  ldr x8,[x21, #0xb0]
71026be660  strb wzr,[x8, #0x10]
71026be664  ldr x21,[x19, #0xb70]
71026be668  cbz x21,0x71026be6c4
71026be66c  ldrb w8,[x21, #0x40]
71026be670  cbz w8,0x71026be6c0
71026be674  ldr x22,[x21, #0x30]
71026be678  cbz x22,0x71026be6b0
71026be67c  ldrb w8,[x22, #0x10]
71026be680  cbz w8,0x71026be6b0
71026be684  ldrb w8,[x22, #0x50]
71026be688  strb wzr,[x22, #0x10]
71026be68c  cbz w8,0x71026be6b0
71026be690  ldr x8,[x22]
71026be694  ldr w0,[x8, #0x8]
71026be698  bl 0x71003ac560
71026be69c  ldr x8,[x0]
71026be6a0  ldr x8,[x8, #0x48]
71026be6a4  mov w1,wzr
71026be6a8  blr x8
71026be6ac  strb wzr,[x22, #0x50]
71026be6b0  ldr x8,[x21]
71026be6b4  ldr x8,[x8, #0x30]
71026be6b8  mov x0,x21
71026be6bc  blr x8
71026be6c0  strb wzr,[x21, #0x40]
71026be6c4  ldr x21,[x19, #0xb58]
71026be6c8  cbz x21,0x71026be724
71026be6cc  ldrb w8,[x21, #0x40]
71026be6d0  cbz w8,0x71026be720
71026be6d4  ldr x22,[x21, #0x30]
71026be6d8  cbz x22,0x71026be710
71026be6dc  ldrb w8,[x22, #0x10]
71026be6e0  cbz w8,0x71026be710
71026be6e4  ldrb w8,[x22, #0x50]
71026be6e8  strb wzr,[x22, #0x10]
71026be6ec  cbz w8,0x71026be710
71026be6f0  ldr x8,[x22]
71026be6f4  ldr w0,[x8, #0x8]
71026be6f8  bl 0x71003ac560
71026be6fc  ldr x8,[x0]
71026be700  ldr x8,[x8, #0x48]
71026be704  mov w1,wzr
71026be708  blr x8
71026be70c  strb wzr,[x22, #0x50]
71026be710  ldr x8,[x21]
71026be714  ldr x8,[x8, #0x30]
71026be718  mov x0,x21
71026be71c  blr x8
71026be720  strb wzr,[x21, #0x40]
71026be724  ldr w8,[x19, #0xc84]
71026be728  str wzr,[x19, #0xb00]
71026be72c  tbnz w8,#0x1f,0x71026be784
71026be730  ldr x9,[x19, #0x310]
71026be734  ldr x9,[x9, #0xd0]
71026be738  lsl x8,x8,#0x4
71026be73c  ldr x21,[x9, x8, LSL #0x0]
71026be740  cbz x21,0x71026be784
71026be744  add x0,x21,#0x108
71026be748  strb wzr,[x21, #0x110]
71026be74c  bl 0x71025e9d50
71026be750  ldrb w8,[x21, #0xe0]
71026be754  cbz w8,0x71026be764
71026be758  ldr x8,[x21, #0xc8]
71026be75c  cbz x8,0x71026be764
71026be760  strh w23,[x8, #0x30]
71026be764  ldr x8,[x21, #0xd8]
71026be768  cbz x8,0x71026be774
71026be76c  mov w9,#0x1
71026be770  strb w9,[x8, #0x21]
71026be774  ldrb w8,[x21, #0xe0]
71026be778  cbz w8,0x71026be784
71026be77c  ldr x8,[x21, #0xb0]
71026be780  strb wzr,[x8, #0x10]
71026be784  ldr x21,[x19, #0xb78]
71026be788  cbz x21,0x71026be7e4
71026be78c  ldrb w8,[x21, #0x40]
71026be790  cbz w8,0x71026be7e0
71026be794  ldr x22,[x21, #0x30]
71026be798  cbz x22,0x71026be7d0
71026be79c  ldrb w8,[x22, #0x10]
71026be7a0  cbz w8,0x71026be7d0
71026be7a4  ldrb w8,[x22, #0x50]
71026be7a8  strb wzr,[x22, #0x10]
71026be7ac  cbz w8,0x71026be7d0
71026be7b0  ldr x8,[x22]
71026be7b4  ldr w0,[x8, #0x8]
71026be7b8  bl 0x71003ac560
71026be7bc  ldr x8,[x0]
71026be7c0  ldr x8,[x8, #0x48]
71026be7c4  mov w1,wzr
71026be7c8  blr x8
71026be7cc  strb wzr,[x22, #0x50]
71026be7d0  ldr x8,[x21]
71026be7d4  ldr x8,[x8, #0x30]
71026be7d8  mov x0,x21
71026be7dc  blr x8
71026be7e0  strb wzr,[x21, #0x40]
71026be7e4  ldr x21,[x19, #0xb60]
71026be7e8  cbz x21,0x71026be844
71026be7ec  ldrb w8,[x21, #0x40]
71026be7f0  cbz w8,0x71026be840
71026be7f4  ldr x22,[x21, #0x30]
71026be7f8  cbz x22,0x71026be830
71026be7fc  ldrb w8,[x22, #0x10]
71026be800  cbz w8,0x71026be830
71026be804  ldrb w8,[x22, #0x50]
71026be808  strb wzr,[x22, #0x10]
71026be80c  cbz w8,0x71026be830
71026be810  ldr x8,[x22]
71026be814  ldr w0,[x8, #0x8]
71026be818  bl 0x71003ac560
71026be81c  ldr x8,[x0]
71026be820  ldr x8,[x8, #0x48]
71026be824  mov w1,wzr
71026be828  blr x8
71026be82c  strb wzr,[x22, #0x50]
71026be830  ldr x8,[x21]
71026be834  ldr x8,[x8, #0x30]
71026be838  mov x0,x21
71026be83c  blr x8
71026be840  strb wzr,[x21, #0x40]
71026be844  ldr w8,[x19, #0xc88]
71026be848  str wzr,[x19, #0xb20]
71026be84c  tbnz w8,#0x1f,0x71026be8a4
71026be850  ldr x9,[x19, #0x310]
71026be854  ldr x9,[x9, #0xd0]
71026be858  lsl x8,x8,#0x4
71026be85c  ldr x21,[x9, x8, LSL #0x0]
71026be860  cbz x21,0x71026be8a4
71026be864  add x0,x21,#0x108
71026be868  strb wzr,[x21, #0x110]
71026be86c  bl 0x71025e9d50
71026be870  ldrb w8,[x21, #0xe0]
71026be874  cbz w8,0x71026be884
71026be878  ldr x8,[x21, #0xc8]
71026be87c  cbz x8,0x71026be884
71026be880  strh w23,[x8, #0x30]
71026be884  ldr x8,[x21, #0xd8]
71026be888  cbz x8,0x71026be894
71026be88c  mov w9,#0x1
71026be890  strb w9,[x8, #0x21]
71026be894  ldrb w8,[x21, #0xe0]
71026be898  cbz w8,0x71026be8a4
71026be89c  ldr x8,[x21, #0xb0]
71026be8a0  strb wzr,[x8, #0x10]
71026be8a4  ldr x21,[x19, #0xb80]
71026be8a8  cbz x21,0x71026be904
71026be8ac  ldrb w8,[x21, #0x40]
71026be8b0  cbz w8,0x71026be900
71026be8b4  ldr x22,[x21, #0x30]
71026be8b8  cbz x22,0x71026be8f0
71026be8bc  ldrb w8,[x22, #0x10]
71026be8c0  cbz w8,0x71026be8f0
71026be8c4  ldrb w8,[x22, #0x50]
71026be8c8  strb wzr,[x22, #0x10]
71026be8cc  cbz w8,0x71026be8f0
71026be8d0  ldr x8,[x22]
71026be8d4  ldr w0,[x8, #0x8]
71026be8d8  bl 0x71003ac560
71026be8dc  ldr x8,[x0]
71026be8e0  ldr x8,[x8, #0x48]
71026be8e4  mov w1,wzr
71026be8e8  blr x8
71026be8ec  strb wzr,[x22, #0x50]
71026be8f0  ldr x8,[x21]
71026be8f4  ldr x8,[x8, #0x30]
71026be8f8  mov x0,x21
71026be8fc  blr x8
71026be900  strb wzr,[x21, #0x40]
71026be904  ldr x21,[x19, #0xb68]
71026be908  cbz x21,0x71026bef58
71026be90c  ldrb w8,[x21, #0x40]
71026be910  cbz w8,0x71026be960
71026be914  ldr x22,[x21, #0x30]
71026be918  cbz x22,0x71026be950
71026be91c  ldrb w8,[x22, #0x10]
71026be920  cbz w8,0x71026be950
71026be924  ldrb w8,[x22, #0x50]
71026be928  strb wzr,[x22, #0x10]
71026be92c  cbz w8,0x71026be950
71026be930  ldr x8,[x22]
71026be934  ldr w0,[x8, #0x8]
71026be938  bl 0x71003ac560
71026be93c  ldr x8,[x0]
71026be940  ldr x8,[x8, #0x48]
71026be944  mov w1,wzr
71026be948  blr x8
71026be94c  strb wzr,[x22, #0x50]
71026be950  ldr x8,[x21]
71026be954  ldr x8,[x8, #0x30]
71026be958  mov x0,x21
71026be95c  blr x8
71026be960  strb wzr,[x21, #0x40]
71026be964  b 0x71026bef58
71026be968  ldr q0,[x19, #0xaf0]
71026be96c  fmov s1,0x3f800000
71026be970  adrp x8,0x7104468000
71026be974  mov v0.S[0x3],v1.S[0x0]
71026be978  ldr q1,[x8, #0xca0]
71026be97c  adrp x8,0x710446a000
71026be980  str q1,[sp]
71026be984  ldr q1,[x8, #0x360]
71026be988  adrp x8,0x7104465000
71026be98c  str q1,[sp, #0x10]
71026be990  ldr q1,[x8, #0x6b0]
71026be994  stp q1,q0,[sp, #0x20]
71026be998  ldr w8,[x19, #0xad0]
71026be99c  cmp w8,#0x1
71026be9a0  b.ls 0x71026beb08
71026be9a4  ldr w8,[x19, #0x950]
71026be9a8  orr w9,wzr,#0x30
71026be9ac  madd x8,x8,x9,x21
71026be9b0  mov w9,#0x1
71026be9b4  str wzr,[x19, #0xb08]
71026be9b8  str w9,[x19, #0xb00]
71026be9bc  ldr q0,[x8, #0x10]
71026be9c0  fmov s1,wzr
71026be9c4  ldr w8,[x19, #0xc84]
71026be9c8  mov v0.S[0x3],v1.S[0x0]
71026be9cc  str wzr,[x19, #0xb04]
71026be9d0  str q0,[x19, #0xb10]
71026be9d4  tbnz w8,#0x1f,0x71026bed54
71026be9d8  ldr x9,[x19, #0x310]
71026be9dc  ldr x9,[x9, #0xd0]
71026be9e0  lsl x8,x8,#0x4
71026be9e4  ldr x22,[x9, x8, LSL #0x0]
71026be9e8  cbz x22,0x71026bed24
71026be9ec  add x0,x22,#0x108
71026be9f0  strb wzr,[x22, #0x110]
71026be9f4  bl 0x71025e9d50
71026be9f8  ldrb w8,[x22, #0xe0]
71026be9fc  cbz w8,0x71026bea0c
71026bea00  ldr x8,[x22, #0xc8]
71026bea04  cbz x8,0x71026bea0c
71026bea08  strh w23,[x8, #0x32]
71026bea0c  ldr x8,[x22, #0xd8]
71026bea10  cbz x8,0x71026bea1c
71026bea14  mov w9,#0x1
71026bea18  strb w9,[x8, #0x22]
71026bea1c  ldrb w8,[x22, #0xe0]
71026bea20  cbz w8,0x71026bea30
71026bea24  ldr x8,[x22, #0xc8]
71026bea28  cbz x8,0x71026bea30
71026bea2c  strh w23,[x8, #0x30]
71026bea30  ldr x8,[x22, #0xd8]
71026bea34  cbz x8,0x71026bea40
71026bea38  mov w9,#0x1
71026bea3c  strb w9,[x8, #0x21]
71026bea40  ldrb w8,[x22, #0xe0]
71026bea44  cbz w8,0x71026bea50
71026bea48  ldr x8,[x22, #0xb0]
71026bea4c  strb wzr,[x8, #0x10]
71026bea50  ldr q0,[x19, #0xb10]
71026bea54  fmov s1,0x3f800000
71026bea58  adrp x8,0x7104468000
71026bea5c  mov v0.S[0x3],v1.S[0x0]
71026bea60  ldr q1,[x8, #0xca0]
71026bea64  adrp x8,0x710446a000
71026bea68  mov x1,sp
71026bea6c  str q1,[sp]
71026bea70  ldr q1,[x8, #0x360]
71026bea74  adrp x8,0x7104465000
71026bea78  str q1,[sp, #0x10]
71026bea7c  ldr q1,[x8, #0x6b0]
71026bea80  stp q1,q0,[sp, #0x20]
71026bea84  ldr x0,[x22, #0x90]
71026bea88  ldr x8,[x0]
71026bea8c  ldr x8,[x8, #0x148]
71026bea90  blr x8
71026bea94  ldr x22,[x22, #0xd8]
71026bea98  cbz x22,0x71026bed54
71026bea9c  ldr x8,[sp, #0x18]
71026beaa0  str x8,[sp, #0x58]
71026beaa4  ldr x8,[sp, #0x10]
71026beaa8  str x8,[sp, #0x50]
71026beaac  ldr x8,[sp, #0x8]
71026beab0  str x8,[sp, #0x48]
71026beab4  ldr x8,[sp]
71026beab8  str x8,[sp, #0x40]
71026beabc  ldr x8,[sp, #0x38]
71026beac0  str x8,[sp, #0x78]
71026beac4  ldr x8,[sp, #0x30]
71026beac8  str x8,[sp, #0x70]
71026beacc  ldr x8,[sp, #0x28]
71026bead0  str x8,[sp, #0x68]
71026bead4  ldr x8,[sp, #0x20]
71026bead8  str x8,[sp, #0x60]
71026beadc  ldr x8,[x22, #0x8]
71026beae0  ldrb w9,[x8, #0xa8]
71026beae4  cbz w9,0x71026beafc
71026beae8  ldr x0,[x8, #0x48]
71026beaec  ldr x8,[x0]
71026beaf0  ldr x8,[x8, #0x20]
71026beaf4  add x1,sp,#0x40
71026beaf8  blr x8
71026beafc  mov w8,#0x1
71026beb00  strb w8,[x22, #0x20]
71026beb04  b 0x71026bed54
71026beb08  ldr w8,[x19, #0xc84]
71026beb0c  str wzr,[x19, #0xb00]
71026beb10  tbnz w8,#0x1f,0x71026bed54
71026beb14  ldr x9,[x19, #0x310]
71026beb18  ldr x9,[x9, #0xd0]
71026beb1c  lsl x8,x8,#0x4
71026beb20  ldr x22,[x9, x8, LSL #0x0]
71026beb24  cbz x22,0x71026bed54
71026beb28  add x0,x22,#0x108
71026beb2c  strb wzr,[x22, #0x110]
71026beb30  bl 0x71025e9d50
71026beb34  ldrb w8,[x22, #0xe0]
71026beb38  cbz w8,0x71026beb48
71026beb3c  ldr x8,[x22, #0xc8]
71026beb40  cbz x8,0x71026beb48
71026beb44  strh w23,[x8, #0x30]
71026beb48  ldr x8,[x22, #0xd8]
71026beb4c  cbz x8,0x71026beb58
71026beb50  mov w9,#0x1
71026beb54  strb w9,[x8, #0x21]
71026beb58  ldrb w8,[x22, #0xe0]
71026beb5c  cbz w8,0x71026bed54
71026beb60  ldr x8,[x22, #0xb0]
71026beb64  strb wzr,[x8, #0x10]
71026beb68  b 0x71026bed54
71026beb6c  ldr x21,[x11, #0x130]
71026beb70  adrp x0,0x7104420000
71026beb74  add x0,x0,#0x6ff
71026beb78  bl 0x7103151710
71026beb7c  ldp x25,x26,[x21]
71026beb80  cmp x25,x26
71026beb84  b.eq 0x71026bed08
71026beb88  mov x8,x25
71026beb8c  ldr x21,[x8]
71026beb90  ldr x9,[x21, #0x18]
71026beb94  cbz x9,0x71026beba4
71026beb98  ldr w9,[x9, #0x100]
71026beb9c  cmp w9,w0
71026beba0  b.eq 0x71026bebb4
71026beba4  add x8,x8,#0x8
71026beba8  cmp x26,x8
71026bebac  b.ne 0x71026beb8c
71026bebb0  mov x21,xzr
71026bebb4  adrp x0,0x710439b000
71026bebb8  add x0,x0,#0x555
71026bebbc  bl 0x7103151710
71026bebc0  cmp x25,x26
71026bebc4  b.eq 0x71026bed18
71026bebc8  movi d2,#0x0
71026bebcc  ldr x22,[x25]
71026bebd0  ldr x8,[x22, #0x18]
71026bebd4  cbz x8,0x71026bebe4
71026bebd8  ldr w8,[x8, #0x100]
71026bebdc  cmp w8,w0
71026bebe0  b.eq 0x71026bda20
71026bebe4  add x25,x25,#0x8
71026bebe8  cmp x26,x25
71026bebec  b.ne 0x71026bebcc
71026bebf0  b 0x71026bed00
71026bebf4  ldr x21,[x11, #0x130]
71026bebf8  adrp x0,0x710425d000
71026bebfc  add x0,x0,#0x427
71026bec00  bl 0x7103151710
71026bec04  ldp x25,x26,[x21]
71026bec08  cmp x25,x26
71026bec0c  b.eq 0x71026bed08
71026bec10  mov x8,x25
71026bec14  ldr x21,[x8]
71026bec18  ldr x9,[x21, #0x18]
71026bec1c  cbz x9,0x71026bec2c
71026bec20  ldr w9,[x9, #0x100]
71026bec24  cmp w9,w0
71026bec28  b.eq 0x71026bec3c
71026bec2c  add x8,x8,#0x8
71026bec30  cmp x26,x8
71026bec34  b.ne 0x71026bec14
71026bec38  mov x21,xzr
71026bec3c  adrp x0,0x7104328000
71026bec40  add x0,x0,#0x27c
71026bec44  bl 0x7103151710
71026bec48  cmp x25,x26
71026bec4c  b.eq 0x71026bed18
71026bec50  movi d2,#0x0
71026bec54  ldr x22,[x25]
71026bec58  ldr x8,[x22, #0x18]
71026bec5c  cbz x8,0x71026bec6c
71026bec60  ldr w8,[x8, #0x100]
71026bec64  cmp w8,w0
71026bec68  b.eq 0x71026bda20
71026bec6c  add x25,x25,#0x8
71026bec70  cmp x26,x25
71026bec74  b.ne 0x71026bec54
71026bec78  b 0x71026bed00
71026bec7c  ldr x21,[x11, #0x130]
71026bec80  adrp x0,0x71042a1000
71026bec84  add x0,x0,#0x67e
71026bec88  bl 0x7103151710
71026bec8c  ldp x25,x26,[x21]
71026bec90  cmp x25,x26
71026bec94  b.eq 0x71026bed08
71026bec98  mov x8,x25
71026bec9c  ldr x21,[x8]
71026beca0  ldr x9,[x21, #0x18]
71026beca4  cbz x9,0x71026becb4
71026beca8  ldr w9,[x9, #0x100]
71026becac  cmp w9,w0
71026becb0  b.eq 0x71026becc4
71026becb4  add x8,x8,#0x8
71026becb8  cmp x26,x8
71026becbc  b.ne 0x71026bec9c
71026becc0  mov x21,xzr
71026becc4  adrp x0,0x71043bc000
71026becc8  add x0,x0,#0xb6c
71026beccc  bl 0x7103151710
71026becd0  cmp x25,x26
71026becd4  b.eq 0x71026bed18
71026becd8  movi d2,#0x0
71026becdc  ldr x22,[x25]
71026bece0  ldr x8,[x22, #0x18]
71026bece4  cbz x8,0x71026becf4
71026bece8  ldr w8,[x8, #0x100]
71026becec  cmp w8,w0
71026becf0  b.eq 0x71026bda20
71026becf4  add x25,x25,#0x8
71026becf8  cmp x26,x25
71026becfc  b.ne 0x71026becdc
71026bed00  mov x22,xzr
71026bed04  b 0x71026bda20
71026bed08  mov x22,xzr
71026bed0c  mov x21,xzr
71026bed10  movi d2,#0x0
71026bed14  b 0x71026bda20
71026bed18  mov x22,xzr
71026bed1c  movi d2,#0x0
71026bed20  b 0x71026bda20
71026bed24  ldr q0,[x19, #0xb10]
71026bed28  fmov s1,0x3f800000
71026bed2c  adrp x8,0x7104468000
71026bed30  mov v0.S[0x3],v1.S[0x0]
71026bed34  ldr q1,[x8, #0xca0]
71026bed38  adrp x8,0x710446a000
71026bed3c  str q1,[sp]
71026bed40  ldr q1,[x8, #0x360]
71026bed44  adrp x8,0x7104465000
71026bed48  str q1,[sp, #0x10]
71026bed4c  ldr q1,[x8, #0x6b0]
71026bed50  stp q1,q0,[sp, #0x20]
71026bed54  ldr w8,[x19, #0xad0]
71026bed58  cmp w8,#0x2
71026bed5c  b.ls 0x71026beec4
71026bed60  ldr w8,[x19, #0x950]
71026bed64  orr w9,wzr,#0x30
71026bed68  madd x8,x8,x9,x21
71026bed6c  mov w9,#0x1
71026bed70  str wzr,[x19, #0xb28]
71026bed74  str w9,[x19, #0xb20]
71026bed78  ldr q0,[x8, #0x20]
71026bed7c  fmov s1,wzr
71026bed80  ldr w8,[x19, #0xc88]
71026bed84  mov v0.S[0x3],v1.S[0x0]
71026bed88  str wzr,[x19, #0xb24]
71026bed8c  str q0,[x19, #0xb30]
71026bed90  tbnz w8,#0x1f,0x71026bef58
71026bed94  ldr x9,[x19, #0x310]
71026bed98  ldr x9,[x9, #0xd0]
71026bed9c  lsl x8,x8,#0x4
71026beda0  ldr x21,[x9, x8, LSL #0x0]
71026beda4  cbz x21,0x71026bef28
71026beda8  add x0,x21,#0x108
71026bedac  strb wzr,[x21, #0x110]
71026bedb0  bl 0x71025e9d50
71026bedb4  ldrb w8,[x21, #0xe0]
71026bedb8  cbz w8,0x71026bedc8
71026bedbc  ldr x8,[x21, #0xc8]
71026bedc0  cbz x8,0x71026bedc8
71026bedc4  strh w23,[x8, #0x32]
71026bedc8  ldr x8,[x21, #0xd8]
71026bedcc  cbz x8,0x71026bedd8
71026bedd0  mov w9,#0x1
71026bedd4  strb w9,[x8, #0x22]
71026bedd8  ldrb w8,[x21, #0xe0]
71026beddc  cbz w8,0x71026bedec
71026bede0  ldr x8,[x21, #0xc8]
71026bede4  cbz x8,0x71026bedec
71026bede8  strh w23,[x8, #0x30]
71026bedec  ldr x8,[x21, #0xd8]
71026bedf0  cbz x8,0x71026bedfc
71026bedf4  mov w9,#0x1
71026bedf8  strb w9,[x8, #0x21]
71026bedfc  ldrb w8,[x21, #0xe0]
71026bee00  cbz w8,0x71026bee0c
71026bee04  ldr x8,[x21, #0xb0]
71026bee08  strb wzr,[x8, #0x10]
71026bee0c  ldr q0,[x19, #0xb30]
71026bee10  fmov s1,0x3f800000
71026bee14  adrp x8,0x7104468000
71026bee18  mov v0.S[0x3],v1.S[0x0]
71026bee1c  ldr q1,[x8, #0xca0]
71026bee20  adrp x8,0x710446a000
71026bee24  mov x1,sp
71026bee28  str q1,[sp]
71026bee2c  ldr q1,[x8, #0x360]
71026bee30  adrp x8,0x7104465000
71026bee34  str q1,[sp, #0x10]
71026bee38  ldr q1,[x8, #0x6b0]
71026bee3c  stp q1,q0,[sp, #0x20]
71026bee40  ldr x0,[x21, #0x90]
71026bee44  ldr x8,[x0]
71026bee48  ldr x8,[x8, #0x148]
71026bee4c  blr x8
71026bee50  ldr x21,[x21, #0xd8]
71026bee54  cbz x21,0x71026bef58
71026bee58  ldr x8,[sp, #0x18]
71026bee5c  str x8,[sp, #0x58]
71026bee60  ldr x8,[sp, #0x10]
71026bee64  str x8,[sp, #0x50]
71026bee68  ldr x8,[sp, #0x8]
71026bee6c  str x8,[sp, #0x48]
71026bee70  ldr x8,[sp]
71026bee74  str x8,[sp, #0x40]
71026bee78  ldr x8,[sp, #0x38]
71026bee7c  str x8,[sp, #0x78]
71026bee80  ldr x8,[sp, #0x30]
71026bee84  str x8,[sp, #0x70]
71026bee88  ldr x8,[sp, #0x28]
71026bee8c  str x8,[sp, #0x68]
71026bee90  ldr x8,[sp, #0x20]
71026bee94  str x8,[sp, #0x60]
71026bee98  ldr x8,[x21, #0x8]
71026bee9c  ldrb w9,[x8, #0xa8]
71026beea0  cbz w9,0x71026beeb8
71026beea4  ldr x0,[x8, #0x48]
71026beea8  ldr x8,[x0]
71026beeac  ldr x8,[x8, #0x20]
71026beeb0  add x1,sp,#0x40
71026beeb4  blr x8
71026beeb8  mov w8,#0x1
71026beebc  strb w8,[x21, #0x20]
71026beec0  b 0x71026bef58
71026beec4  ldr w8,[x19, #0xc88]
71026beec8  str wzr,[x19, #0xb20]
71026beecc  tbnz w8,#0x1f,0x71026bef58
71026beed0  ldr x9,[x19, #0x310]
71026beed4  ldr x9,[x9, #0xd0]
71026beed8  lsl x8,x8,#0x4
71026beedc  ldr x21,[x9, x8, LSL #0x0]
71026beee0  cbz x21,0x71026bef58
71026beee4  add x0,x21,#0x108
71026beee8  strb wzr,[x21, #0x110]
71026beeec  bl 0x71025e9d50
71026beef0  ldrb w8,[x21, #0xe0]
71026beef4  cbz w8,0x71026bef04
71026beef8  ldr x8,[x21, #0xc8]
71026beefc  cbz x8,0x71026bef04
71026bef00  strh w23,[x8, #0x30]
71026bef04  ldr x8,[x21, #0xd8]
71026bef08  cbz x8,0x71026bef14
71026bef0c  mov w9,#0x1
71026bef10  strb w9,[x8, #0x21]
71026bef14  ldrb w8,[x21, #0xe0]
71026bef18  cbz w8,0x71026bef58
71026bef1c  ldr x8,[x21, #0xb0]
71026bef20  strb wzr,[x8, #0x10]
71026bef24  b 0x71026bef58
71026bef28  ldr q0,[x19, #0xb30]
71026bef2c  fmov s1,0x3f800000
71026bef30  adrp x8,0x7104468000
71026bef34  mov v0.S[0x3],v1.S[0x0]
71026bef38  ldr q1,[x8, #0xca0]
71026bef3c  adrp x8,0x710446a000
71026bef40  str q1,[sp]
71026bef44  ldr q1,[x8, #0x360]
71026bef48  adrp x8,0x7104465000
71026bef4c  str q1,[sp, #0x10]
71026bef50  ldr q1,[x8, #0x6b0]
71026bef54  stp q1,q0,[sp, #0x20]
71026bef58  mov w1,#0x28
71026bef5c  mov w0,#0x10
71026bef60  str xzr,[x19, #0xc08]
71026bef64  str xzr,[x19, #0xc00]
71026bef68  str xzr,[x19, #0xbf8]
71026bef6c  str xzr,[x19, #0xbf0]
71026bef70  str xzr,[x19, #0xbe8]
71026bef74  str xzr,[x19, #0xbe0]
71026bef78  str xzr,[x19, #0xbd8]
71026bef7c  str xzr,[x19, #0xbd0]
71026bef80  str xzr,[x19, #0xbc8]
71026bef84  str xzr,[x19, #0xbc0]
71026bef88  str xzr,[x19, #0xbb8]
71026bef8c  str xzr,[x19, #0xbb0]
71026bef90  str xzr,[x19, #0xba8]
71026bef94  str xzr,[x19, #0xba0]
71026bef98  str xzr,[x19, #0xb98]
71026bef9c  str xzr,[x19, #0xb90]
71026befa0  bl 0x710392e290
71026befa4  mov x21,x0
71026befa8  cbnz x0,0x71026befe4
71026befac  adrp x8,0x7105332000
71026befb0  ldr x0,[x8, #0xf00]
71026befb4  mov w21,#0x28
71026befb8  str wzr,[sp]
71026befbc  str x21,[sp, #0x40]
71026befc0  ldr x8,[x0]
71026befc4  ldr x8,[x8, #0x30]
71026befc8  mov x1,sp
71026befcc  add x2,sp,#0x40
71026befd0  blr x8
71026befd4  mov w0,#0x10
71026befd8  mov x1,x21
71026befdc  bl 0x710392e290
71026befe0  mov x21,x0
71026befe4  ldr x23,[x19, #0x300]
71026befe8  orr x8,xzr,#0x101010101010101
71026befec  mov w9,#0x1
71026beff0  stp x8,x8,[x21, #0x10]
71026beff4  strb w9,[x21, #0x20]
71026beff8  stp x23,x8,[x21]
71026beffc  ldr x8,[x25, #0x9d8]
71026bf000  strb wzr,[x21, #0x17]
71026bf004  ldr x9,[x8]
71026bf008  ldr x12,[x9, #0x1c8]
71026bf00c  ldr x9,[x23, #0x10]
71026bf010  mov x11,x12
71026bf014  ldr x10,[x11, #0x50]!
71026bf018  cbz x10,0x71026bf058
71026bf01c  add x11,x12,#0x50
71026bf020  b 0x71026bf02c
71026bf024  mov x11,x10
71026bf028  mov x10,x12
71026bf02c  ldr x12,[x10, #0x20]
71026bf030  cmp x12,x9
71026bf034  b.ls 0x71026bf048
71026bf038  ldr x12,[x10]
71026bf03c  mov x11,x10
71026bf040  cbnz x12,0x71026bf024
71026bf044  b 0x71026bf058
71026bf048  b.cs 0x71026bf058
71026bf04c  ldr x12,[x10, #0x8]!
71026bf050  mov x11,x10
71026bf054  cbnz x12,0x71026bf024
71026bf058  ldr x9,[x11]
71026bf05c  ldr x10,[x9, #0x28]
71026bf060  ldp x9,x10,[x10, #0xc0]
71026bf064  sub x10,x10,x9
71026bf068  lsr x10,x10,#0x3
71026bf06c  cmp w10,#0x2
71026bf070  b.cc 0x71026bf0f0
71026bf074  adrp x10,0x71052b9000
71026bf078  ldr x10,[x10, #0x298]
71026bf07c  ldr w9,[x9, #0x8]
71026bf080  mov w11,#0x1
71026bf084  lsl w11,w11,w9
71026bf088  ldr w12,[x10, #0x134]
71026bf08c  tst w12,w11
71026bf090  b.eq 0x71026bf0a0
71026bf094  add x9,x10,x9, LSL #0x3
71026bf098  ldr x9,[x9, #0x30]
71026bf09c  b 0x71026bf0a4
71026bf0a0  mov x9,xzr
71026bf0a4  ldr w10,[x9]
71026bf0a8  cmp w10,#0xb
71026bf0ac  b.cc 0x71026bf0f0
71026bf0b0  ldr x9,[x9, #0x8]
71026bf0b4  orr x10,xzr,#-0x2
71026bf0b8  ldr x9,[x9]
71026bf0bc  adds x10,x10,#0x1
71026bf0c0  b.ne 0x71026bf0b8
71026bf0c4  ldr x9,[x9]
71026bf0c8  ldr x9,[x9]
71026bf0cc  ldr x9,[x9]
71026bf0d0  ldr x9,[x9]
71026bf0d4  ldr x9,[x9]
71026bf0d8  ldr x9,[x9]
71026bf0dc  ldr x9,[x9]
71026bf0e0  ldr x22,[x9]
71026bf0e4  ldrb w9,[x22, #0xe0]
71026bf0e8  cbnz w9,0x71026bf0fc
71026bf0ec  b 0x71026bf194
71026bf0f0  mov x22,xzr
71026bf0f4  ldrb w9,[x22, #0xe0]
71026bf0f8  cbz w9,0x71026bf194
71026bf0fc  mov x24,x22
71026bf100  ldr x26,[x24, #0x80]!
71026bf104  cmp x24,x26
71026bf108  strh wzr,[x24, #0x60]
71026bf10c  sturh wzr,[x24, #0x67]
71026bf110  b.eq 0x71026bf160
71026bf114  orr w27,wzr,#0x18
71026bf118  ldr w1,[x26, #0xfc]
71026bf11c  strb wzr,[x26, #0x100]
71026bf120  cbz w1,0x71026bf148
71026bf124  ldr x8,[x26, #0xf0]
71026bf128  ldr x9,[x8]
71026bf12c  madd x9,x1,x27,x9
71026bf130  strb wzr,[x9, #0x10]
71026bf134  ldr x0,[x8, #0x18]
71026bf138  ldr x8,[x0]
71026bf13c  ldr x8,[x8, #0x18]
71026bf140  mov w2,wzr
71026bf144  blr x8
71026bf148  str wzr,[x26, #0x80]
71026bf14c  stp xzr,xzr,[x26, #0x70]
71026bf150  stp xzr,xzr,[x26, #0x60]
71026bf154  ldr x26,[x26]
71026bf158  cmp x24,x26
71026bf15c  b.ne 0x71026bf118
71026bf160  mov x8,x22
71026bf164  ldr x9,[x8, #0x68]!
71026bf168  cmp x8,x9
71026bf16c  b.eq 0x71026bf180
71026bf170  strb wzr,[x9, #0x50]
71026bf174  ldr x9,[x9]
71026bf178  cmp x8,x9
71026bf17c  b.ne 0x71026bf170
71026bf180  adrp x8,0x71052b9000
71026bf184  ldr x0,[x8, #0x298]
71026bf188  mov x1,x22
71026bf18c  bl 0x7100525010
71026bf190  ldr x8,[x25, #0x9d8]
71026bf194  strb wzr,[x21, #0x18]
71026bf198  ldr x8,[x8]
71026bf19c  ldr x11,[x8, #0x1c8]
71026bf1a0  ldr x8,[x23, #0x10]
71026bf1a4  mov x10,x11
71026bf1a8  ldr x9,[x10, #0x50]!
71026bf1ac  cbz x9,0x71026bf1ec
71026bf1b0  add x10,x11,#0x50
71026bf1b4  b 0x71026bf1c0
71026bf1b8  mov x10,x9
71026bf1bc  mov x9,x11
71026bf1c0  ldr x11,[x9, #0x20]
71026bf1c4  cmp x11,x8
71026bf1c8  b.ls 0x71026bf1dc
71026bf1cc  ldr x11,[x9]
71026bf1d0  mov x10,x9
71026bf1d4  cbnz x11,0x71026bf1b8
71026bf1d8  b 0x71026bf1ec
71026bf1dc  b.cs 0x71026bf1ec
71026bf1e0  ldr x11,[x9, #0x8]!
71026bf1e4  mov x10,x9
71026bf1e8  cbnz x11,0x71026bf1b8
71026bf1ec  ldr x8,[x10]
71026bf1f0  ldr x9,[x8, #0x28]
71026bf1f4  ldp x8,x9,[x9, #0xc0]
71026bf1f8  sub x9,x9,x8
71026bf1fc  lsr x9,x9,#0x3
71026bf200  cmp w9,#0x2
71026bf204  b.cc 0x71026bf284
71026bf208  adrp x9,0x71052b9000
71026bf20c  ldr x9,[x9, #0x298]
71026bf210  ldr w8,[x8, #0x8]
71026bf214  mov w10,#0x1
71026bf218  lsl w10,w10,w8
71026bf21c  ldr w11,[x9, #0x134]
71026bf220  tst w11,w10
71026bf224  b.eq 0x71026bf234
71026bf228  add x8,x9,x8, LSL #0x3
71026bf22c  ldr x8,[x8, #0x30]
71026bf230  b 0x71026bf238
71026bf234  mov x8,xzr
71026bf238  ldr w9,[x8]
71026bf23c  cmp w9,#0xc
71026bf240  b.cc 0x71026bf284
71026bf244  ldr x8,[x8, #0x8]
71026bf248  orr x9,xzr,#-0x3
71026bf24c  ldr x8,[x8]
71026bf250  adds x9,x9,#0x1
71026bf254  b.ne 0x71026bf24c
71026bf258  ldr x8,[x8]
71026bf25c  ldr x8,[x8]
71026bf260  ldr x8,[x8]
71026bf264  ldr x8,[x8]
71026bf268  ldr x8,[x8]
71026bf26c  ldr x8,[x8]
71026bf270  ldr x8,[x8]
71026bf274  ldr x22,[x8]
71026bf278  ldrb w8,[x22, #0xe0]
71026bf27c  cbnz w8,0x71026bf290
71026bf280  b 0x71026bf324
71026bf284  mov x22,xzr
71026bf288  ldrb w8,[x22, #0xe0]
71026bf28c  cbz w8,0x71026bf324
71026bf290  mov x23,x22
71026bf294  ldr x24,[x23, #0x80]!
71026bf298  cmp x23,x24
71026bf29c  strh wzr,[x23, #0x60]
71026bf2a0  sturh wzr,[x23, #0x67]
71026bf2a4  b.eq 0x71026bf2f4
71026bf2a8  orr w25,wzr,#0x18
71026bf2ac  ldr w1,[x24, #0xfc]
71026bf2b0  strb wzr,[x24, #0x100]
71026bf2b4  cbz w1,0x71026bf2dc
71026bf2b8  ldr x8,[x24, #0xf0]
71026bf2bc  ldr x9,[x8]
71026bf2c0  madd x9,x1,x25,x9
71026bf2c4  strb wzr,[x9, #0x10]
71026bf2c8  ldr x0,[x8, #0x18]
71026bf2cc  ldr x8,[x0]
71026bf2d0  ldr x8,[x8, #0x18]
71026bf2d4  mov w2,wzr
71026bf2d8  blr x8
71026bf2dc  str wzr,[x24, #0x80]
71026bf2e0  stp xzr,xzr,[x24, #0x70]
71026bf2e4  stp xzr,xzr,[x24, #0x60]
71026bf2e8  ldr x24,[x24]
71026bf2ec  cmp x23,x24
71026bf2f0  b.ne 0x71026bf2ac
71026bf2f4  mov x8,x22
71026bf2f8  ldr x9,[x8, #0x68]!
71026bf2fc  cmp x8,x9
71026bf300  b.eq 0x71026bf314
71026bf304  strb wzr,[x9, #0x50]
71026bf308  ldr x9,[x9]
71026bf30c  cmp x8,x9
71026bf310  b.ne 0x71026bf304
71026bf314  adrp x8,0x71052b9000
71026bf318  ldr x0,[x8, #0x298]
71026bf31c  mov x1,x22
71026bf320  bl 0x7100525010
71026bf324  ldr x0,[x19, #0xce0]
71026bf328  str x21,[x19, #0xce0]
71026bf32c  cbz x0,0x71026bf334
71026bf330  bl 0x710392eb40
71026bf334  mov w1,#0xa8
71026bf338  mov w0,#0x10
71026bf33c  bl 0x710392e290
71026bf340  mov x21,x0
71026bf344  cbnz x0,0x71026bf390
71026bf348  adrp x8,0x7105332000
71026bf34c  ldr x0,[x8, #0xf00]
71026bf350  cbz x0,0x71026bf38c
71026bf354  mov w8,#0xa8
71026bf358  str wzr,[sp]
71026bf35c  mov x1,sp
71026bf360  str x8,[sp, #0x40]
71026bf364  ldr x8,[x0]
71026bf368  ldr x8,[x8, #0x30]
71026bf36c  add x2,sp,#0x40
71026bf370  blr x8
71026bf374  tbz w0,#0x0,0x71026bf38c
71026bf378  mov w1,#0xa8
71026bf37c  mov w0,#0x10
71026bf380  bl 0x710392e290
71026bf384  mov x21,x0
71026bf388  cbnz x0,0x71026bf390
71026bf38c  mov x21,xzr
71026bf390  adrp x3,0x7104430000
71026bf394  add x3,x3,#0xfdd
71026bf398  mov x0,x21
71026bf39c  mov x1,x19
71026bf3a0  mov x2,x20
71026bf3a4  bl 0x71026ca0d0
71026bf3a8  ldr x22,[x19, #0xc48]
71026bf3ac  str x21,[x19, #0xc48]
71026bf3b0  cbz x22,0x71026bf3c4
71026bf3b4  mov x0,x22
71026bf3b8  bl 0x71026ca710
71026bf3bc  mov x0,x22
71026bf3c0  bl 0x710392eb40
71026bf3c4  mov w1,#0xa8
71026bf3c8  mov w0,#0x10
71026bf3cc  bl 0x710392e290
71026bf3d0  mov x21,x0
71026bf3d4  cbnz x0,0x71026bf420
71026bf3d8  adrp x8,0x7105332000
71026bf3dc  ldr x0,[x8, #0xf00]
71026bf3e0  cbz x0,0x71026bf41c
71026bf3e4  mov w8,#0xa8
71026bf3e8  str wzr,[sp]
71026bf3ec  mov x1,sp
71026bf3f0  str x8,[sp, #0x40]
71026bf3f4  ldr x8,[x0]
71026bf3f8  ldr x8,[x8, #0x30]
71026bf3fc  add x2,sp,#0x40
71026bf400  blr x8
71026bf404  tbz w0,#0x0,0x71026bf41c
71026bf408  mov w1,#0xa8
71026bf40c  mov w0,#0x10
71026bf410  bl 0x710392e290
71026bf414  mov x21,x0
71026bf418  cbnz x0,0x71026bf420
71026bf41c  mov x21,xzr
71026bf420  adrp x3,0x710425d000
71026bf424  add x3,x3,#0x229
71026bf428  mov x0,x21
71026bf42c  mov x1,x19
71026bf430  mov x2,x20
71026bf434  bl 0x71026ca0d0
71026bf438  ldr x22,[x19, #0xc50]
71026bf43c  str x21,[x19, #0xc50]
71026bf440  cbz x22,0x71026bf454
71026bf444  mov x0,x22
71026bf448  bl 0x71026ca710
71026bf44c  mov x0,x22
71026bf450  bl 0x710392eb40
71026bf454  mov w1,#0xa8
71026bf458  mov w0,#0x10
71026bf45c  bl 0x710392e290
71026bf460  mov x21,x0
71026bf464  cbnz x0,0x71026bf4b0
71026bf468  adrp x8,0x7105332000
71026bf46c  ldr x0,[x8, #0xf00]
71026bf470  cbz x0,0x71026bf4ac
71026bf474  mov w8,#0xa8
71026bf478  str wzr,[sp]
71026bf47c  mov x1,sp
71026bf480  str x8,[sp, #0x40]
71026bf484  ldr x8,[x0]
71026bf488  ldr x8,[x8, #0x30]
71026bf48c  add x2,sp,#0x40
71026bf490  blr x8
71026bf494  tbz w0,#0x0,0x71026bf4ac
71026bf498  mov w1,#0xa8
71026bf49c  mov w0,#0x10
71026bf4a0  bl 0x710392e290
71026bf4a4  mov x21,x0
71026bf4a8  cbnz x0,0x71026bf4b0
71026bf4ac  mov x21,xzr
71026bf4b0  adrp x3,0x710425d000
71026bf4b4  add x3,x3,#0x239
71026bf4b8  mov x0,x21
71026bf4bc  mov x1,x19
71026bf4c0  mov x2,x20
71026bf4c4  bl 0x71026ca0d0
71026bf4c8  ldr x20,[x19, #0xc58]
71026bf4cc  str x21,[x19, #0xc58]
71026bf4d0  cbz x20,0x71026bf4e4
71026bf4d4  mov x0,x20
71026bf4d8  bl 0x71026ca710
71026bf4dc  mov x0,x20
71026bf4e0  bl 0x710392eb40
71026bf4e4  ldr x8,[x19, #0x340]
71026bf4e8  ldp w9,w10,[x8]
71026bf4ec  eor w9,w9,w9, LSL #0xb
71026bf4f0  str w10,[x8]
71026bf4f4  eor w9,w9,w9, LSR #0x8
71026bf4f8  ldp w10,w11,[x8, #0x8]
71026bf4fc  eor w9,w9,w11
71026bf500  eor w9,w9,w11, LSR #0x13
71026bf504  stp w10,w11,[x8, #0x4]
71026bf508  str w9,[x8, #0xc]
71026bf50c  and w8,w9,#0x3
71026bf510  str w8,[x19, #0x9c4]
71026bf514  ldr x8,[x19, #0x340]
71026bf518  ldp w9,w10,[x8]
71026bf51c  eor w9,w9,w9, LSL #0xb
71026bf520  str w10,[x8]
71026bf524  ldp w10,w11,[x8, #0x8]
71026bf528  eor w9,w9,w9, LSR #0x8
71026bf52c  eor w9,w9,w11
71026bf530  eor w9,w9,w11, LSR #0x13
71026bf534  stp w10,w11,[x8, #0x4]
71026bf538  str w9,[x8, #0xc]
71026bf53c  mov w8,#0xaaab
71026bf540  movk w8,#0xaaaa, LSL #16
71026bf544  umull x10,w9,w8
71026bf548  lsr x10,x10,#0x21
71026bf54c  add w10,w10,w10, LSL #0x1
71026bf550  sub w9,w9,w10
71026bf554  str w9,[x19, #0x9c8]
71026bf558  ldr x9,[x19, #0x340]
71026bf55c  ldp w10,w11,[x9]
71026bf560  eor w10,w10,w10, LSL #0xb
71026bf564  str w11,[x9]
71026bf568  eor w10,w10,w10, LSR #0x8
71026bf56c  ldp w11,w12,[x9, #0x8]
71026bf570  eor w10,w10,w12
71026bf574  eor w10,w10,w12, LSR #0x13
71026bf578  stp w11,w12,[x9, #0x4]
71026bf57c  str w10,[x9, #0xc]
71026bf580  and w9,w10,#0x3
71026bf584  str w9,[x19, #0x9f4]
71026bf588  ldr x9,[x19, #0x340]
71026bf58c  ldp w10,w11,[x9]
71026bf590  str w11,[x9]
71026bf594  ldp w11,w12,[x9, #0x8]
71026bf598  eor w10,w10,w10, LSL #0xb
71026bf59c  eor w10,w10,w10, LSR #0x8
71026bf5a0  eor w10,w10,w12
71026bf5a4  eor w10,w10,w12, LSR #0x13
71026bf5a8  umull x8,w10,w8
71026bf5ac  stp w11,w12,[x9, #0x4]
71026bf5b0  str w10,[x9, #0xc]
71026bf5b4  ldr x0,[x19, #0x318]
71026bf5b8  lsr x8,x8,#0x21
71026bf5bc  add w8,w8,w8, LSL #0x1
71026bf5c0  sub w8,w10,w8
71026bf5c4  adrp x1,0x7104410000
71026bf5c8  add x1,x1,#0xcd4
71026bf5cc  str w8,[x19, #0x9f8]
71026bf5d0  bl 0x7102633910
71026bf5d4  ldr w8,[x19, #0x950]
71026bf5d8  cmp w8,#0x3
71026bf5dc  b.cs 0x71026bf888
71026bf5e0  adrp x9,0x71050cf000
71026bf5e4  add x9,x9,#0x190
71026bf5e8  ldr x0,[x19, #0x318]
71026bf5ec  ldr x1,[x9, x8, LSL #0x3]
71026bf5f0  bl 0x7102633800
71026bf5f4  ldr w8,[x19, #0x950]
71026bf5f8  cmp w8,#0x3
71026bf5fc  b.cs 0x71026bf888
71026bf600  adrp x9,0x71050cf000
71026bf604  add x9,x9,#0x1a8
71026bf608  ldr x0,[x19, #0x318]
71026bf60c  ldr x1,[x9, x8, LSL #0x3]
71026bf610  mov w2,wzr
71026bf614  bl 0x7102633a10
71026bf618  ldr w8,[x19, #0x950]
71026bf61c  cmp w8,#0x3
71026bf620  b.cs 0x71026bf888
71026bf624  adrp x9,0x71050cf000
71026bf628  add x9,x9,#0x1c0
71026bf62c  ldr x0,[x19, #0x318]
71026bf630  ldr x1,[x9, x8, LSL #0x3]
71026bf634  mov w2,wzr
71026bf638  bl 0x7102633b90
71026bf63c  ldr x8,[x19, #0x310]
71026bf640  ldr x20,[x8, #0x118]
71026bf644  cbz x20,0x71026bf6e4
71026bf648  ldr x8,[x20]
71026bf64c  ldrb w9,[x8, #0x80]
71026bf650  cbz w9,0x71026bf6e4
71026bf654  ldr x0,[x8, #0x30]
71026bf658  ldr x8,[x0]
71026bf65c  ldr w9,[x19, #0x950]
71026bf660  cmp w9,#0x0
71026bf664  mov x1,#0x6e03
71026bf668  movk x1,#0x85e0, LSL #16
71026bf66c  movk x1,#0x13, LSL #32
71026bf670  cset w2,eq
71026bf674  ldr x8,[x8, #0x180]
71026bf678  blr x8
71026bf67c  ldr x8,[x20]
71026bf680  ldrb w9,[x8, #0x80]
71026bf684  cbz w9,0x71026bf6e4
71026bf688  ldr x0,[x8, #0x30]
71026bf68c  ldr x8,[x0]
71026bf690  ldr w9,[x19, #0x950]
71026bf694  cmp w9,#0x1
71026bf698  mov x1,#0x5e95
71026bf69c  movk x1,#0xf2e7, LSL #16
71026bf6a0  movk x1,#0x13, LSL #32
71026bf6a4  cset w2,eq
71026bf6a8  ldr x8,[x8, #0x180]
71026bf6ac  blr x8
71026bf6b0  ldr x8,[x20]
71026bf6b4  ldrb w9,[x8, #0x80]
71026bf6b8  cbz w9,0x71026bf6e4
71026bf6bc  ldr x0,[x8, #0x30]
71026bf6c0  ldr x8,[x0]
71026bf6c4  ldr w9,[x19, #0x950]
71026bf6c8  cmp w9,#0x2
71026bf6cc  mov x1,#0xf2f
71026bf6d0  movk x1,#0x6bee, LSL #16
71026bf6d4  movk x1,#0x13, LSL #32
71026bf6d8  cset w2,eq
71026bf6dc  ldr x8,[x8, #0x180]
71026bf6e0  blr x8
71026bf6e4  ldp x29,x30,[sp, #0xd0]
71026bf6e8  ldr x27,[sp, #0x80]
71026bf6ec  ldp x20,x19,[sp, #0xc0]
71026bf6f0  ldp x22,x21,[sp, #0xb0]
71026bf6f4  ldp x24,x23,[sp, #0xa0]
71026bf6f8  ldp x26,x25,[sp, #0x90]
71026bf6fc  add sp,sp,#0xe0
71026bf700  ret
71026bf704  adrp x0,0x7105314000
71026bf708  add x0,x0,#0x4d8
71026bf70c  bl 0x71039c06b0
71026bf710  movi d2,#0x0
71026bf714  cbz w0,0x71026bda30
71026bf718  bl 0x7101764000
71026bf71c  adrp x0,0x7101763000
71026bf720  add x0,x0,#0xc40
71026bf724  adrp x1,0x71052c5000
71026bf728  add x1,x1,#0x180
71026bf72c  adrp x2,0x7104f17000
71026bf730  add x2,x2,#0x0
71026bf734  bl 0x71000001c0
71026bf738  adrp x0,0x7105314000
71026bf73c  add x0,x0,#0x4d8
71026bf740  bl 0x71039c06c0
71026bf744  movi d2,#0x0
71026bf748  b 0x71026bda30
71026bf74c  adrp x0,0x710532a000
71026bf750  add x0,x0,#0xe90
71026bf754  bl 0x71039c06b0
71026bf758  movi d2,#0x0
71026bf75c  cbz w0,0x71026bdbac
71026bf760  adrp x8,0x710446a000
71026bf764  ldr q0,[x8, #0x3f0]
71026bf768  adrp x8,0x7104466000
71026bf76c  ldr q1,[x8, #0x40]
71026bf770  adrp x9,0x710532a000
71026bf774  add x9,x9,#0xea0
71026bf778  adrp x8,0x7104469000
71026bf77c  adrp x0,0x710532a000
71026bf780  add x0,x0,#0xe90
71026bf784  stp q0,q1,[x9]
71026bf788  ldr q0,[x8, #0xe80]
71026bf78c  adrp x8,0x7104467000
71026bf790  ldr q1,[x8, #0x760]
71026bf794  adrp x8,0x7104467000
71026bf798  stp q0,q1,[x9, #0x20]
71026bf79c  ldr q0,[x8, #0xd40]
71026bf7a0  adrp x8,0x710446a000
71026bf7a4  ldr q1,[x8, #0x6b0]
71026bf7a8  stp q0,q1,[x9, #0x40]
71026bf7ac  bl 0x71039c06c0
71026bf7b0  movi d2,#0x0
71026bf7b4  b 0x71026bdbac
71026bf7b8  adrp x0,0x710532a000
71026bf7bc  add x0,x0,#0xf00
71026bf7c0  bl 0x71039c06b0
71026bf7c4  cbz w0,0x71026be488
71026bf7c8  adrp x8,0x7104467000
71026bf7cc  ldr q0,[x8, #0xd50]
71026bf7d0  adrp x9,0x710532a000
71026bf7d4  add x9,x9,#0xf10
71026bf7d8  adrp x8,0x7104469000
71026bf7dc  adrp x0,0x710532a000
71026bf7e0  add x0,x0,#0xf00
71026bf7e4  stp xzr,xzr,[x9, #0x20]
71026bf7e8  str q0,[x9]
71026bf7ec  ldr q0,[x8, #0x5f0]
71026bf7f0  adrp x8,0x710446a000
71026bf7f4  ldr q1,[x8, #0x6c0]
71026bf7f8  adrp x8,0x710446a000
71026bf7fc  stp xzr,xzr,[x9, #0x10]
71026bf800  stp q0,q1,[x9, #0x30]
71026bf804  ldr q0,[x8, #0xf30]
71026bf808  movi v1.2D,#0x0
71026bf80c  adrp x8,0x710446a000
71026bf810  stp q1,q0,[x9, #0x50]
71026bf814  ldr q0,[x8, #0xbf0]
71026bf818  stp q0,q1,[x9, #0x70]
71026bf81c  bl 0x71039c06c0
71026bf820  b 0x71026be488
71026bf824  adrp x0,0x710532a000
71026bf828  add x0,x0,#0xe90
71026bf82c  bl 0x71039c06b0
71026bf830  movi d2,#0x0
71026bf834  cbz w0,0x71026bdd38
71026bf838  adrp x8,0x710446a000
71026bf83c  ldr q0,[x8, #0x3f0]
71026bf840  adrp x8,0x7104466000
71026bf844  ldr q1,[x8, #0x40]
71026bf848  adrp x8,0x7104469000
71026bf84c  adrp x0,0x710532a000
71026bf850  add x0,x0,#0xe90
71026bf854  stp q0,q1,[x22]
71026bf858  ldr q0,[x8, #0xe80]
71026bf85c  adrp x8,0x7104467000
71026bf860  ldr q1,[x8, #0x760]
71026bf864  adrp x8,0x7104467000
71026bf868  stp q0,q1,[x22, #0x20]
71026bf86c  ldr q0,[x8, #0xd40]
71026bf870  adrp x8,0x710446a000
71026bf874  ldr q1,[x8, #0x6b0]
71026bf878  stp q0,q1,[x22, #0x40]
71026bf87c  bl 0x71039c06c0
71026bf880  movi d2,#0x0
71026bf884  b 0x71026bdd38
71026bf888  bl 0x71039c2650
