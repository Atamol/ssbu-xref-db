// addr:      7102f85e20
// offset:    0x2f85e20
// name:      FUN_7102f85e20
// mangled:   
// size:      10208

7102f85e20  sub sp,sp,#0x1b0
7102f85e24  stp x28,x27,[sp, #0x150]
7102f85e28  stp x26,x25,[sp, #0x160]
7102f85e2c  stp x24,x23,[sp, #0x170]
7102f85e30  stp x22,x21,[sp, #0x180]
7102f85e34  stp x20,x19,[sp, #0x190]
7102f85e38  stp x29,x30,[sp, #0x1a0]
7102f85e3c  add x29,sp,#0x1a0
7102f85e40  movi v2.2D,#0x0
7102f85e44  mov v0.16B,v2.16B
7102f85e48  add x10,x0,#0x7d0
7102f85e4c  ld1 {v0.S}[0],[x10]
7102f85e50  adrp x13,0x71052a8000
7102f85e54  add x11,x0,#0x7d4
7102f85e58  ldr x13,[x13, #0xa88]
7102f85e5c  ldr q1,[x13]
7102f85e60  ld1 {v0.S}[1],[x11]
7102f85e64  ldr w11,[x0, #0x7d8]
7102f85e68  ldrb w23,[x0, #0x770]
7102f85e6c  add x10,x0,#0x7dc
7102f85e70  stp w11,wzr,[sp, #0xb0]
7102f85e74  stp q0,q1,[sp, #0x90]
7102f85e78  mov v0.16B,v2.16B
7102f85e7c  ld1 {v0.S}[0],[x10]
7102f85e80  add x10,x0,#0x7e0
7102f85e84  ld1 {v0.S}[1],[x10]
7102f85e88  ldr w10,[x0, #0x7e4]
7102f85e8c  stp q0,q1,[sp, #0x60]
7102f85e90  mov v0.16B,v2.16B
7102f85e94  add x12,x0,#0x7e8
7102f85e98  stp w10,wzr,[sp, #0x80]
7102f85e9c  add x10,x0,#0x7ec
7102f85ea0  ldr w11,[x0, #0x7f0]
7102f85ea4  ld1 {v0.S}[0],[x12]
7102f85ea8  ld1 {v0.S}[1],[x10]
7102f85eac  mov x19,x0
7102f85eb0  mov w8,#0xcea8
7102f85eb4  mov w9,#0xcae0
7102f85eb8  add x20,x0,x8
7102f85ebc  add x27,x0,x9
7102f85ec0  add x2,x0,#0x738
7102f85ec4  add x0,x0,#0xf10
7102f85ec8  mov x1,x19
7102f85ecc  stp w11,wzr,[sp, #0x50]
7102f85ed0  stp q0,q1,[sp, #0x30]
7102f85ed4  bl 0x7102f8d1d0
7102f85ed8  ldr x8,[x19, #0x340]
7102f85edc  ldp w9,w10,[x8]
7102f85ee0  str w10,[x8]
7102f85ee4  ldp w10,w11,[x8, #0x8]
7102f85ee8  eor w9,w9,w9, LSL #0xb
7102f85eec  eor w9,w9,w9, LSR #0x8
7102f85ef0  eor w9,w9,w11
7102f85ef4  eor w9,w9,w11, LSR #0x13
7102f85ef8  stp w10,w11,[x8, #0x4]
7102f85efc  mov w10,#0xaaab
7102f85f00  movk w10,#0xaaaa, LSL #16
7102f85f04  umull x10,w9,w10
7102f85f08  lsr x10,x10,#0x21
7102f85f0c  add w10,w10,w10, LSL #0x1
7102f85f10  str w9,[x8, #0xc]
7102f85f14  add x8,sp,#0xc0
7102f85f18  mov x24,xzr
7102f85f1c  mov w11,#0xcc08
7102f85f20  sub w9,w9,w10
7102f85f24  adrp x21,0x710425d000
7102f85f28  add x21,x21,#0x8a3
7102f85f2c  orr x25,x8,#0x1
7102f85f30  adrp x22,0x7104463000
7102f85f34  add x22,x22,#0xfe5
7102f85f38  mov w26,#0x140
7102f85f3c  str w9,[x19, x11, LSL #0x0]
7102f85f40  and w8,w24,#0x7fffffff
7102f85f44  cmp w8,#0x8
7102f85f48  b.eq 0x7102f85fa4
7102f85f4c  cmp w8,#0x7
7102f85f50  b.ne 0x7102f85ff4
7102f85f54  ldr s0,[x19, #0xed0]
7102f85f58  ldr s2,[x19, #0xed8]
7102f85f5c  movi v5.2D,#0x0
7102f85f60  ldr s4,[x19, #0xee0]
7102f85f64  fadd s4,s0,s4
7102f85f68  fadd s0,s0,s2
7102f85f6c  mov v2.16B,v5.16B
7102f85f70  mov v2.S[0x0],v0.S[0x0]
7102f85f74  mov v0.16B,v5.16B
7102f85f78  ldr s1,[x19, #0xed4]
7102f85f7c  ldr s3,[x19, #0xedc]
7102f85f80  mov v0.S[0x0],v4.S[0x0]
7102f85f84  ldr s4,[x19, #0xee4]
7102f85f88  fadd s3,s1,s3
7102f85f8c  fadd s1,s1,s4
7102f85f90  mov v2.S[0x1],v3.S[0x0]
7102f85f94  mov v0.S[0x1],v1.S[0x0]
7102f85f98  str q2,[x19, #0xca70]
7102f85f9c  str q0,[x19, #0xca80]
7102f85fa0  b 0x7102f860f8
7102f85fa4  ldr s0,[x19, #0xee8]
7102f85fa8  ldr s2,[x19, #0xef0]
7102f85fac  movi v5.2D,#0x0
7102f85fb0  ldr s4,[x19, #0xef8]
7102f85fb4  fadd s4,s0,s4
7102f85fb8  fadd s0,s0,s2
7102f85fbc  mov v2.16B,v5.16B
7102f85fc0  mov v2.S[0x0],v0.S[0x0]
7102f85fc4  mov v0.16B,v5.16B
7102f85fc8  ldr s1,[x19, #0xeec]
7102f85fcc  ldr s3,[x19, #0xef4]
7102f85fd0  mov v0.S[0x0],v4.S[0x0]
7102f85fd4  ldr s4,[x19, #0xefc]
7102f85fd8  fadd s3,s1,s3
7102f85fdc  fadd s1,s1,s4
7102f85fe0  mov v2.S[0x1],v3.S[0x0]
7102f85fe4  mov v0.S[0x1],v1.S[0x0]
7102f85fe8  str q2,[x19, #0xca90]
7102f85fec  str q0,[x19, #0xcaa0]
7102f85ff0  b 0x7102f860f8
7102f85ff4  add x0,sp,#0xc0
7102f85ff8  mov x1,x21
7102f85ffc  str xzr,[sp, #0xc0]
7102f86000  stp xzr,xzr,[sp, #0xc8]
7102f86004  bl 0x71039c2720
7102f86008  add w1,w24,#0x41
7102f8600c  add x0,sp,#0xc0
7102f86010  bl 0x71039c6710
7102f86014  add x0,sp,#0xc0
7102f86018  mov x1,x22
7102f8601c  bl 0x71039c2880
7102f86020  ldrb w8,[sp, #0xc0]
7102f86024  ldr x9,[sp, #0xd0]
7102f86028  tst w8,#0x1
7102f8602c  ldr x28,[x19, #0x300]
7102f86030  csel x0,x25,x9,eq
7102f86034  bl 0x7103151710
7102f86038  ldr x1,[x28, #0x8]
7102f8603c  mov w2,w0
7102f86040  sub x0,x29,#0xa0
7102f86044  bl 0x710262cbe0
7102f86048  ldur x8,[x29, #-0xa0]
7102f8604c  cbnz x8,0x7102f86064
7102f86050  b 0x7102f860e4
7102f86054  sub x0,x29,#0xa0
7102f86058  bl 0x7102927ba0
7102f8605c  ldur x8,[x29, #-0xa0]
7102f86060  cbz x8,0x7102f860e4
7102f86064  ldp x10,x11,[x8, #0x1a8]
7102f86068  ldur w9,[x29, #-0x98]
7102f8606c  sub x11,x11,x10
7102f86070  asr x11,x11,#0x3
7102f86074  cmp x11,x9
7102f86078  b.ls 0x7102f885b8
7102f8607c  ldr x9,[x10, x9, LSL #0x3]
7102f86080  ldr x9,[x9, #0x10]
7102f86084  ldur w8,[x29, #-0x90]
7102f86088  ldr w10,[x9, #0xf8]
7102f8608c  cmp w10,w8
7102f86090  b.ls 0x7102f860a0
7102f86094  ldr x9,[x9, #0x100]
7102f86098  madd x8,x8,x26,x9
7102f8609c  b 0x7102f860a4
7102f860a0  mov x8,xzr
7102f860a4  ldr w9,[x8, #0x108]
7102f860a8  cmp w9,#0x3
7102f860ac  b.ne 0x7102f86054
7102f860b0  movi v1.2D,#0x0
7102f860b4  mov v0.16B,v1.16B
7102f860b8  add x9,x8,#0x10c
7102f860bc  add x10,x8,#0x110
7102f860c0  ld1 {v0.S}[0],[x10]
7102f860c4  ld1 {v1.S}[0],[x9]
7102f860c8  add x11,x8,#0x118
7102f860cc  add x8,x8,#0x114
7102f860d0  ld1 {v1.S}[1],[x8]
7102f860d4  ld1 {v0.S}[1],[x11]
7102f860d8  add x9,x19,x24, LSL #0x5
7102f860dc  str q1,[x9, #0xc990]
7102f860e0  str q0,[x9, #0xc9a0]
7102f860e4  ldrb w8,[sp, #0xc0]
7102f860e8  tbz w8,#0x0,0x7102f860f8
7102f860ec  ldr x0,[sp, #0xd0]
7102f860f0  cbz x0,0x7102f860f8
7102f860f4  bl 0x710392eb40
7102f860f8  add x24,x24,#0x1
7102f860fc  cmp x24,#0x9
7102f86100  b.ne 0x7102f85f40
7102f86104  ldr x8,[x19, #0x338]
7102f86108  cmp w23,#0x0
7102f8610c  orr w9,wzr,#0x6
7102f86110  mov w10,#0x2
7102f86114  mov x21,xzr
7102f86118  mov x24,xzr
7102f8611c  adrp x23,0x710455b000
7102f86120  add x23,x23,#0xeb0
7102f86124  str x8,[x27, #0x2d8]
7102f86128  csel w9,w10,w9,eq
7102f8612c  add x22,x27,#0x8
7102f86130  mov w25,#0xffffffff
7102f86134  str w9,[sp, #0x18]
7102f86138  str x8,[x27]
7102f8613c  ldp x8,x9,[x27, #0x8]
7102f86140  sub x9,x9,x8
7102f86144  asr x9,x9,#0x5
7102f86148  cmp x9,x24
7102f8614c  b.ls 0x7102f885b0
7102f86150  add x8,x8,x21
7102f86154  add x9,x8,#0x10
7102f86158  str x9,[x8]
7102f8615c  ldp x8,x9,[x27, #0x8]
7102f86160  sub x9,x9,x8
7102f86164  asr x9,x9,#0x5
7102f86168  cmp x9,x24
7102f8616c  b.ls 0x7102f885b0
7102f86170  ldr q0,[x23,x24, lsl #4]
7102f86174  ext v1.16B,v0.16B,v0.16B,0x8
7102f86178  fmov s2,wzr
7102f8617c  mov v1.S[0x1],v2.S[0x0]
7102f86180  mov v0.D[0x1],v1.D[0x0]
7102f86184  add x8,x8,x21
7102f86188  str q0,[x8, #0x10]
7102f8618c  ldp x8,x9,[x27, #0x8]
7102f86190  sub x9,x9,x8
7102f86194  asr x9,x9,#0x5
7102f86198  cmp x9,x24
7102f8619c  b.ls 0x7102f885b0
7102f861a0  ldr x10,[x27]
7102f861a4  ldr x10,[x10]
7102f861a8  ldr x0,[x10, #0x8]
7102f861ac  cbz x0,0x7102f861d4
7102f861b0  add x1,x8,x21
7102f861b4  mov w2,wzr
7102f861b8  bl 0x7102405040
7102f861bc  ldp x8,x9,[x27, #0x8]
7102f861c0  sub x9,x9,x8
7102f861c4  asr x9,x9,#0x5
7102f861c8  cmp x9,x24
7102f861cc  b.hi 0x7102f861e0
7102f861d0  b 0x7102f885b0
7102f861d4  mov w0,w25
7102f861d8  cmp x9,x24
7102f861dc  b.ls 0x7102f885b0
7102f861e0  add x24,x24,#0x1
7102f861e4  add x8,x8,x21
7102f861e8  add x21,x21,#0x20
7102f861ec  cmp x24,#0xf
7102f861f0  str w0,[x8, #0x8]
7102f861f4  b.cc 0x7102f8613c
7102f861f8  ldr x8,[x27, #0x2d8]
7102f861fc  cbz x8,0x7102f86238
7102f86200  mov w9,#0xcdd0
7102f86204  mov w10,#0xcdc0
7102f86208  add x9,x19,x9
7102f8620c  add x1,x19,x10
7102f86210  str x9,[x1]
7102f86214  ldr x8,[x8]
7102f86218  ldr x0,[x8, #0x8]
7102f8621c  cbz x0,0x7102f8622c
7102f86220  mov w2,wzr
7102f86224  bl 0x7102405040
7102f86228  b 0x7102f86230
7102f8622c  mov w0,#0xffffffff
7102f86230  mov w8,#0xcdc8
7102f86234  str w0,[x19, x8, LSL #0x0]
7102f86238  ldr w8,[x19, #0x7c4]
7102f8623c  mov w9,#0xcf10
7102f86240  str w8,[x19, x9, LSL #0x0]
7102f86244  ldr w8,[x19, #0x7c8]
7102f86248  mov w9,#0xcf14
7102f8624c  str w8,[x19, x9, LSL #0x0]
7102f86250  ldr x8,[x19, #0x300]
7102f86254  ldr x8,[x8, #0x18]
7102f86258  ldp x21,x22,[x8]
7102f8625c  cmp x21,x22
7102f86260  b.eq 0x7102f86290
7102f86264  ldr x8,[x21]
7102f86268  ldr x8,[x8, #0x110]
7102f8626c  cbz x8,0x7102f86284
7102f86270  ldp x0,x1,[x8]
7102f86274  cmp x0,x1
7102f86278  b.eq 0x7102f86284
7102f8627c  mov w2,#0x1
7102f86280  bl 0x71025f4d80
7102f86284  add x21,x21,#0x8
7102f86288  cmp x22,x21
7102f8628c  b.ne 0x7102f86264
7102f86290  ldrb w8,[x19, #0x63]
7102f86294  sub w8,w8,#0x1
7102f86298  cmp w8,#0x3
7102f8629c  b.hi 0x7102f862dc
7102f862a0  and x8,x8,#0xff
7102f862a4  orr w9,wzr,#0xc
7102f862a8  adrp x10,0x710455b000
7102f862ac  add x10,x10,#0x450
7102f862b0  madd x21,x8,x9,x10
7102f862b4  mov w1,wzr
7102f862b8  ldr w2,[x21, w1, UXTW #0x2]
7102f862bc  cbz w2,0x7102f862cc
7102f862c0  mov x0,x19
7102f862c4  bl 0x7102f8c380
7102f862c8  mov w1,w0
7102f862cc  add w1,w1,#0x1
7102f862d0  cmp w1,#0x3
7102f862d4  b.cc 0x7102f862b8
7102f862d8  b 0x7102f86604
7102f862dc  ldr x25,[x19, #0x798]
7102f862e0  ldr x24,[x19, #0x790]
7102f862e4  stur xzr,[x29, #-0xa0]
7102f862e8  stp xzr,xzr,[x29, #-0x98]
7102f862ec  subs x21,x25,x24
7102f862f0  b.eq 0x7102f863a4
7102f862f4  tbnz x21,#0x3f,0x7102f885f0
7102f862f8  asr x26,x21,#0x3
7102f862fc  sub x8,x26,#0x1
7102f86300  lsr x8,x8,#0x6
7102f86304  add x28,x8,#0x1
7102f86308  lsl x22,x28,#0x3
7102f8630c  mov w0,#0x10
7102f86310  mov x1,x22
7102f86314  bl 0x710392e290
7102f86318  mov x23,x0
7102f8631c  cbnz x0,0x7102f86364
7102f86320  adrp x8,0x7105332000
7102f86324  ldr x0,[x8, #0xf00]
7102f86328  cbz x0,0x7102f86360
7102f8632c  str wzr,[sp, #0x20]
7102f86330  str x22,[sp, #0xc0]
7102f86334  ldr x8,[x0]
7102f86338  ldr x8,[x8, #0x30]
7102f8633c  add x1,sp,#0x20
7102f86340  add x2,sp,#0xc0
7102f86344  blr x8
7102f86348  tbz w0,#0x0,0x7102f86360
7102f8634c  mov w0,#0x10
7102f86350  mov x1,x22
7102f86354  bl 0x710392e290
7102f86358  mov x23,x0
7102f8635c  cbnz x0,0x7102f86364
7102f86360  mov x23,xzr
7102f86364  lsr x8,x26,#0x6
7102f86368  lsl x22,x8,#0x3
7102f8636c  orr w1,wzr,#0xff
7102f86370  mov x0,x23
7102f86374  stp x23,x26,[x29, #-0xa0]
7102f86378  mov x2,x22
7102f8637c  stur x28,[x29, #-0x90]
7102f86380  bl 0x71039c02a0
7102f86384  ubfx x8,x21,#0x3,#0x6
7102f86388  cbz x8,0x7102f863a4
7102f8638c  neg x8,x8
7102f86390  mov x9,#-0x1
7102f86394  lsr x8,x9,x8
7102f86398  ldr x9,[x23, x22, LSL #0x0]
7102f8639c  orr x8,x9,x8
7102f863a0  str x8,[x23, x22, LSL #0x0]
7102f863a4  mov w1,wzr
7102f863a8  add x22,x19,#0x790
7102f863ac  mov w21,#0x1
7102f863b0  subs x10,x25,x24
7102f863b4  b.ne 0x7102f863d4
7102f863b8  b 0x7102f863cc
7102f863bc  ldr x25,[x19, #0x798]
7102f863c0  ldr x24,[x19, #0x790]
7102f863c4  subs x10,x25,x24
7102f863c8  b.ne 0x7102f863d4
7102f863cc  mov w8,wzr
7102f863d0  b 0x7102f86438
7102f863d4  ldp x11,x9,[x29, #-0xa0]
7102f863d8  mov x13,xzr
7102f863dc  mov w8,wzr
7102f863e0  asr x10,x10,#0x3
7102f863e4  mov w12,#0x1
7102f863e8  cmp x9,x13
7102f863ec  b.ls 0x7102f885a8
7102f863f0  lsr x14,x13,#0x3
7102f863f4  and x14,x14,#0x1ffffffffffffff8
7102f863f8  lsl x15,x21,x13
7102f863fc  ldr x14,[x11, x14, LSL #0x0]
7102f86400  tst x14,x15
7102f86404  b.eq 0x7102f86428
7102f86408  add x13,x24,x13, LSL #0x3
7102f8640c  cmp w12,#0x1
7102f86410  b.eq 0x7102f86420
7102f86414  ldrsh w14,[x13, #0x6]
7102f86418  cmp w1,w14
7102f8641c  b.ne 0x7102f86428
7102f86420  ldrh w13,[x13]
7102f86424  add w8,w8,w13
7102f86428  mov w13,w12
7102f8642c  add w12,w12,#0x1
7102f86430  cmp x10,x13
7102f86434  b.hi 0x7102f863e8
7102f86438  ldr x9,[x19, #0x340]
7102f8643c  ldp w10,w11,[x9]
7102f86440  str w11,[x9]
7102f86444  ldp w11,w12,[x9, #0x8]
7102f86448  eor w10,w10,w10, LSL #0xb
7102f8644c  eor w10,w10,w10, LSR #0x8
7102f86450  eor w10,w10,w12
7102f86454  stp w11,w12,[x9, #0x4]
7102f86458  eor w11,w10,w12, LSR #0x13
7102f8645c  str w11,[x9, #0xc]
7102f86460  ldr x10,[x19, #0x798]
7102f86464  ldr x9,[x19, #0x790]
7102f86468  subs x13,x10,x9
7102f8646c  b.eq 0x7102f865ec
7102f86470  udiv w12,w11,w8
7102f86474  mov x2,xzr
7102f86478  mov w10,wzr
7102f8647c  asr x13,x13,#0x3
7102f86480  msub w11,w12,w8,w11
7102f86484  ldp x8,x12,[x29, #-0xa0]
7102f86488  cbz w2,0x7102f864a4
7102f8648c  add x14,x9,x2, LSL #0x3
7102f86490  ldrsh w14,[x14, #0x6]
7102f86494  cmp w1,w14
7102f86498  b.ne 0x7102f864d4
7102f8649c  cmp w2,#0xd
7102f864a0  b.hi 0x7102f865ec
7102f864a4  cmp x12,x2
7102f864a8  b.ls 0x7102f885a8
7102f864ac  lsr x14,x2,#0x6
7102f864b0  ldr x16,[x8, x14, LSL #0x3]
7102f864b4  lsl x15,x21,x2
7102f864b8  tst x16,x15
7102f864bc  b.eq 0x7102f864d4
7102f864c0  lsl x17,x2,#0x3
7102f864c4  ldrh w17,[x9, x17, LSL #0x0]
7102f864c8  add w10,w10,w17
7102f864cc  cmp w11,w10
7102f864d0  b.cc 0x7102f864e4
7102f864d4  add w2,w2,#0x1
7102f864d8  cmp x13,x2
7102f864dc  b.hi 0x7102f86488
7102f864e0  b 0x7102f865ec
7102f864e4  bic x9,x16,x15
7102f864e8  str x9,[x8, x14, LSL #0x3]
7102f864ec  ldr x8,[x19, #0x798]
7102f864f0  ldr x9,[x19, #0x790]
7102f864f4  subs x10,x8,x9
7102f864f8  b.eq 0x7102f86574
7102f864fc  mov x11,xzr
7102f86500  asr x12,x10,#0x3
7102f86504  mov w10,#0x1
7102f86508  add x13,x9,x11, LSL #0x3
7102f8650c  ldrh w13,[x13, #0x4]
7102f86510  cbz w13,0x7102f8655c
7102f86514  cmp x12,x2
7102f86518  b.ls 0x7102f885b0
7102f8651c  add x12,x9,x2, LSL #0x3
7102f86520  ldrh w12,[x12, #0x4]
7102f86524  cmp w13,w12
7102f86528  b.ne 0x7102f8655c
7102f8652c  ldur x8,[x29, #-0x98]
7102f86530  cmp x8,x11
7102f86534  b.ls 0x7102f885a8
7102f86538  ldur x8,[x29, #-0xa0]
7102f8653c  lsr x9,x11,#0x3
7102f86540  lsl x11,x21,x11
7102f86544  and x9,x9,#0x1ffffffffffffff8
7102f86548  ldr x12,[x8, x9, LSL #0x0]
7102f8654c  bic x11,x12,x11
7102f86550  str x11,[x8, x9, LSL #0x0]
7102f86554  ldr x8,[x19, #0x798]
7102f86558  ldr x9,[x19, #0x790]
7102f8655c  sub x12,x8,x9
7102f86560  mov w11,w10
7102f86564  add w10,w10,#0x1
7102f86568  asr x12,x12,#0x3
7102f8656c  cmp x12,x11
7102f86570  b.hi 0x7102f86508
7102f86574  cmp w1,#0x1
7102f86578  b.ne 0x7102f865e0
7102f8657c  cmp x8,x9
7102f86580  b.eq 0x7102f865e0
7102f86584  mov x11,xzr
7102f86588  mov w10,#0x1
7102f8658c  add x12,x9,x11, LSL #0x3
7102f86590  ldrh w12,[x12, #0x2]
7102f86594  cbz w12,0x7102f865c8
7102f86598  ldur x8,[x29, #-0x98]
7102f8659c  cmp x8,x11
7102f865a0  b.ls 0x7102f885a8
7102f865a4  ldur x8,[x29, #-0xa0]
7102f865a8  lsr x9,x11,#0x3
7102f865ac  lsl x11,x21,x11
7102f865b0  and x9,x9,#0x1ffffffffffffff8
7102f865b4  ldr x12,[x8, x9, LSL #0x0]
7102f865b8  bic x11,x12,x11
7102f865bc  str x11,[x8, x9, LSL #0x0]
7102f865c0  ldr x8,[x19, #0x798]
7102f865c4  ldr x9,[x19, #0x790]
7102f865c8  sub x12,x8,x9
7102f865cc  mov w11,w10
7102f865d0  add w10,w10,#0x1
7102f865d4  asr x12,x12,#0x3
7102f865d8  cmp x12,x11
7102f865dc  b.hi 0x7102f8658c
7102f865e0  mov x0,x19
7102f865e4  bl 0x7102f8c380
7102f865e8  mov w1,w0
7102f865ec  add w1,w1,#0x1
7102f865f0  cmp w1,#0x2
7102f865f4  b.ls 0x7102f863bc
7102f865f8  ldur x0,[x29, #-0xa0]
7102f865fc  cbz x0,0x7102f86604
7102f86600  bl 0x710392eb40
7102f86604  ldp x8,x9,[x19, #0x1a8]
7102f86608  cmp x9,x8
7102f8660c  b.eq 0x7102f885e8
7102f86610  ldr x21,[x8]
7102f86614  ldp x22,x8,[x21, #0x20]
7102f86618  sub x23,x8,x22
7102f8661c  adrp x0,0x71042a1000
7102f86620  add x0,x0,#0x67e
7102f86624  lsr x24,x23,#0x3
7102f86628  bl 0x7103151710
7102f8662c  cbz w24,0x7102f867d8
7102f86630  mov x8,xzr
7102f86634  add x28,x27,#0x3b0
7102f86638  ubfx x9,x23,#0x3,#0x20
7102f8663c  mov w10,#0x1
7102f86640  adrp x11,0x710532e000
7102f86644  add x11,x11,#0xa10
7102f86648  ldr x12,[x22, x8, LSL #0x3]
7102f8664c  cbnz x12,0x7102f86660
7102f86650  b 0x7102f867b0
7102f86654  ldr x22,[x21, #0x20]
7102f86658  ldr x12,[x22, x8, LSL #0x3]
7102f8665c  cbz x12,0x7102f867b0
7102f86660  ldrb w13,[x12, #0x20]
7102f86664  cbz w13,0x7102f866cc
7102f86668  ldp x15,x13,[x12, #0x8]
7102f8666c  ldr x14,[x12]
7102f86670  strb wzr,[x12, #0x20]
7102f86674  str x14,[x15]
7102f86678  str x15,[x14, #0x8]
7102f8667c  ldr x14,[x13, #0x18]
7102f86680  sub x14,x14,#0x1
7102f86684  str x14,[x13, #0x18]
7102f86688  stp xzr,xzr,[x12]
7102f8668c  ldr x15,[x13, #0x40]
7102f86690  add x14,x13,#0x38
7102f86694  stp x14,x15,[x12]
7102f86698  str x12,[x13, #0x40]
7102f8669c  str x12,[x15]
7102f866a0  ldr x14,[x13, #0x30]
7102f866a4  add x14,x14,#0x1
7102f866a8  str x14,[x13, #0x30]
7102f866ac  mov x14,x12
7102f866b0  ldr x15,[x14, #0x18]!
7102f866b4  cbz x15,0x7102f866bc
7102f866b8  ldr w15,[x15, #0x110]
7102f866bc  ldr w16,[x13, #0x48]
7102f866c0  sub w15,w16,w15
7102f866c4  str w15,[x13, #0x48]
7102f866c8  b 0x7102f866d0
7102f866cc  add x14,x12,#0x18
7102f866d0  ldr x13,[x14]
7102f866d4  ldr w13,[x13, #0x100]
7102f866d8  cmp w0,w13
7102f866dc  b.eq 0x7102f8674c
7102f866e0  ldr x14,[x28]
7102f866e4  cbz x14,0x7102f86704
7102f866e8  ldr w14,[x14, #0xe0]
7102f866ec  cmp w14,#0xe
7102f866f0  b.cs 0x7102f87ed8
7102f866f4  add x14,x11,x14, LSL #0x5
7102f866f8  ldr w14,[x14, #0x1c]
7102f866fc  cmp w14,w13
7102f86700  b.eq 0x7102f8674c
7102f86704  ldr x14,[x27, #0x3b8]
7102f86708  cbz x14,0x7102f86728
7102f8670c  ldr w14,[x14, #0xe0]
7102f86710  cmp w14,#0xd
7102f86714  b.hi 0x7102f87ed8
7102f86718  add x14,x11,x14, LSL #0x5
7102f8671c  ldr w14,[x14, #0x1c]
7102f86720  cmp w14,w13
7102f86724  b.eq 0x7102f8674c
7102f86728  ldr x14,[x27, #0x3c0]
7102f8672c  cbz x14,0x7102f867b0
7102f86730  ldr w14,[x14, #0xe0]
7102f86734  cmp w14,#0xd
7102f86738  b.hi 0x7102f87ed8
7102f8673c  add x14,x11,x14, LSL #0x5
7102f86740  ldr w14,[x14, #0x1c]
7102f86744  cmp w14,w13
7102f86748  b.ne 0x7102f867b0
7102f8674c  ldrb w13,[x12, #0x20]
7102f86750  cbnz w13,0x7102f867b0
7102f86754  ldp x15,x13,[x12, #0x8]
7102f86758  ldr x14,[x12]
7102f8675c  strb w10,[x12, #0x20]
7102f86760  str x14,[x15]
7102f86764  str x15,[x14, #0x8]
7102f86768  ldr x14,[x13, #0x30]
7102f8676c  sub x14,x14,#0x1
7102f86770  str x14,[x13, #0x30]
7102f86774  stp xzr,xzr,[x12]
7102f86778  ldr x15,[x13, #0x28]
7102f8677c  add x14,x13,#0x20
7102f86780  stp x14,x15,[x12]
7102f86784  str x12,[x13, #0x28]
7102f86788  str x12,[x15]
7102f8678c  ldr x14,[x13, #0x18]
7102f86790  add x14,x14,#0x1
7102f86794  str x14,[x13, #0x18]
7102f86798  ldr x12,[x12, #0x18]
7102f8679c  cbz x12,0x7102f867a4
7102f867a0  ldr w12,[x12, #0x110]
7102f867a4  ldr w14,[x13, #0x48]
7102f867a8  add w12,w14,w12
7102f867ac  str w12,[x13, #0x48]
7102f867b0  add x8,x8,#0x1
7102f867b4  cmp x8,x9
7102f867b8  b.cc 0x7102f86654
7102f867bc  ldr x22,[x28]
7102f867c0  cbnz x22,0x7102f867e4
7102f867c4  ldr x22,[x27, #0x3b8]
7102f867c8  cbnz x22,0x7102f86c20
7102f867cc  ldr x22,[x27, #0x3c0]
7102f867d0  cbnz x22,0x7102f8705c
7102f867d4  b 0x7102f87490
7102f867d8  add x28,x27,#0x3b0
7102f867dc  ldr x22,[x28]
7102f867e0  cbz x22,0x7102f867c4
7102f867e4  adrp x8,0x710532e000
7102f867e8  add x8,x8,#0x970
7102f867ec  ldp x9,x8,[x8]
7102f867f0  stp x9,x8,[sp, #0x20]
7102f867f4  ldr x10,[x19, #0x798]
7102f867f8  ldr x9,[x19, #0x790]
7102f867fc  ldr w8,[x22, #0xe0]
7102f86800  sub x10,x10,x9
7102f86804  asr x10,x10,#0x3
7102f86808  cmp x10,x8
7102f8680c  b.ls 0x7102f885e0
7102f86810  add x9,x9,x8, LSL #0x3
7102f86814  ldrh w9,[x9, #0x2]
7102f86818  cbz w9,0x7102f86830
7102f8681c  adrp x9,0x710532e000
7102f86820  ldr q0,[sp, #0x20]
7102f86824  ldr q1,[x9, #0x9a0]
7102f86828  fadd v0.4S,v0.4S,v1.4S
7102f8682c  str q0,[sp, #0x20]
7102f86830  cmp w8,#0x9
7102f86834  b.ne 0x7102f86a18
7102f86838  adrp x8,0x71052a8000
7102f8683c  ldr x8,[x8, #0xa88]
7102f86840  ldr q0,[x8]
7102f86844  mov w8,#0xcd9c
7102f86848  mov w23,#0x1
7102f8684c  fmov s1,0x3f800000
7102f86850  strb w23,[x19, x8, LSL ]
7102f86854  adrp x8,0x7104468000
7102f86858  ldr q2,[x8, #0xca0]
7102f8685c  adrp x8,0x710446a000
7102f86860  mov x21,xzr
7102f86864  str q2,[sp, #0xc0]
7102f86868  mov v2.16B,v0.16B
7102f8686c  mov v2.S[0x3],v1.S[0x0]
7102f86870  ldr q1,[x8, #0x360]
7102f86874  adrp x8,0x7104465000
7102f86878  ext v0.16B,v2.16B,v0.16B,0xc
7102f8687c  str q1,[sp, #0xd0]
7102f86880  ext v1.16B,v0.16B,v2.16B,0x4
7102f86884  ext v0.16B,v0.16B,v0.16B,0x8
7102f86888  ldr q2,[x8, #0x6b0]
7102f8688c  mov w8,#0xa820
7102f86890  add x24,x19,x8
7102f86894  ext v0.16B,v1.16B,v0.16B,0xc
7102f86898  stp q2,q0,[sp, #0xe0]
7102f8689c  mov x25,xzr
7102f868a0  ldr x0,[x24, x25, LSL #0x3]
7102f868a4  cbz x0,0x7102f86948
7102f868a8  ldr x8,[x0]
7102f868ac  ldr x8,[x8, #0x38]
7102f868b0  blr x8
7102f868b4  ldr x26,[x0]
7102f868b8  cbz x26,0x7102f8693c
7102f868bc  ldr x0,[x26, #0x90]
7102f868c0  ldr x8,[x0]
7102f868c4  ldr x8,[x8, #0x148]
7102f868c8  add x1,sp,#0xc0
7102f868cc  blr x8
7102f868d0  ldr x26,[x26, #0xd8]
7102f868d4  cbz x26,0x7102f8693c
7102f868d8  ldr x8,[sp, #0xd8]
7102f868dc  stur x8,[x29, #-0x88]
7102f868e0  ldr x8,[sp, #0xd0]
7102f868e4  stur x8,[x29, #-0x90]
7102f868e8  ldr x8,[sp, #0xc8]
7102f868ec  stur x8,[x29, #-0x98]
7102f868f0  ldr x8,[sp, #0xc0]
7102f868f4  stur x8,[x29, #-0xa0]
7102f868f8  ldr x8,[sp, #0xf8]
7102f868fc  stur x8,[x29, #-0x68]
7102f86900  ldr x8,[sp, #0xf0]
7102f86904  stur x8,[x29, #-0x70]
7102f86908  ldr x8,[sp, #0xe8]
7102f8690c  stur x8,[x29, #-0x78]
7102f86910  ldr x8,[sp, #0xe0]
7102f86914  stur x8,[x29, #-0x80]
7102f86918  ldr x8,[x26, #0x8]
7102f8691c  ldrb w9,[x8, #0xa8]
7102f86920  cbz w9,0x7102f86938
7102f86924  ldr x0,[x8, #0x48]
7102f86928  ldr x8,[x0]
7102f8692c  ldr x8,[x8, #0x20]
7102f86930  sub x1,x29,#0xa0
7102f86934  blr x8
7102f86938  strb w23,[x26, #0x20]
7102f8693c  add x25,x25,#0x1
7102f86940  cmp x25,#0x20
7102f86944  b.cc 0x7102f868a0
7102f86948  add x21,x21,#0x1
7102f8694c  add x24,x24,#0x108
7102f86950  cmp x21,#0x10
7102f86954  b.ne 0x7102f8689c
7102f86958  mov w8,#0xc980
7102f8695c  ldr x21,[x19, x8, LSL #0x0]
7102f86960  cbz x21,0x7102f869e8
7102f86964  ldr x0,[x21, #0x90]
7102f86968  ldr x8,[x0]
7102f8696c  ldr x8,[x8, #0x148]
7102f86970  add x1,sp,#0xc0
7102f86974  blr x8
7102f86978  ldr x21,[x21, #0xd8]
7102f8697c  cbz x21,0x7102f869e8
7102f86980  ldr x8,[sp, #0xd8]
7102f86984  stur x8,[x29, #-0x88]
7102f86988  ldr x8,[sp, #0xd0]
7102f8698c  stur x8,[x29, #-0x90]
7102f86990  ldr x8,[sp, #0xc8]
7102f86994  stur x8,[x29, #-0x98]
7102f86998  ldr x8,[sp, #0xc0]
7102f8699c  stur x8,[x29, #-0xa0]
7102f869a0  ldr x8,[sp, #0xf8]
7102f869a4  stur x8,[x29, #-0x68]
7102f869a8  ldr x8,[sp, #0xf0]
7102f869ac  stur x8,[x29, #-0x70]
7102f869b0  ldr x8,[sp, #0xe8]
7102f869b4  stur x8,[x29, #-0x78]
7102f869b8  ldr x8,[sp, #0xe0]
7102f869bc  stur x8,[x29, #-0x80]
7102f869c0  ldr x8,[x21, #0x8]
7102f869c4  ldrb w9,[x8, #0xa8]
7102f869c8  cbz w9,0x7102f869e0
7102f869cc  ldr x0,[x8, #0x48]
7102f869d0  ldr x8,[x0]
7102f869d4  ldr x8,[x8, #0x20]
7102f869d8  sub x1,x29,#0xa0
7102f869dc  blr x8
7102f869e0  mov w8,#0x1
7102f869e4  strb w8,[x21, #0x20]
7102f869e8  ldr x8,[x22, #0x38]
7102f869ec  cbz x8,0x7102f86a14
7102f869f0  ldr x0,[x8, #0x130]
7102f869f4  ldr x8,[x0]
7102f869f8  ldr x8,[x8, #0x100]
7102f869fc  ldr w4,[sp, #0x18]
7102f86a00  add x2,sp,#0x90
7102f86a04  mov w5,#0x1
7102f86a08  mov w1,wzr
7102f86a0c  mov w3,wzr
7102f86a10  blr x8
7102f86a14  ldr w8,[x22, #0xe0]
7102f86a18  cmp w8,#0xa
7102f86a1c  b.ne 0x7102f86c04
7102f86a20  adrp x8,0x71052a8000
7102f86a24  ldr x8,[x8, #0xa88]
7102f86a28  ldr q0,[x8]
7102f86a2c  mov w8,#0xcd9d
7102f86a30  mov w23,#0x1
7102f86a34  fmov s1,0x3f800000
7102f86a38  strb w23,[x19, x8, LSL ]
7102f86a3c  mov w8,#0xcda0
7102f86a40  str wzr,[x19, x8, LSL #0x0]
7102f86a44  adrp x8,0x7104468000
7102f86a48  ldr q2,[x8, #0xca0]
7102f86a4c  adrp x8,0x710446a000
7102f86a50  mov x21,xzr
7102f86a54  str q2,[sp, #0xc0]
7102f86a58  mov v2.16B,v0.16B
7102f86a5c  mov v2.S[0x3],v1.S[0x0]
7102f86a60  ldr q1,[x8, #0x360]
7102f86a64  adrp x8,0x7104465000
7102f86a68  ext v0.16B,v2.16B,v0.16B,0xc
7102f86a6c  str q1,[sp, #0xd0]
7102f86a70  ext v1.16B,v0.16B,v2.16B,0x4
7102f86a74  ext v0.16B,v0.16B,v0.16B,0x8
7102f86a78  ldr q2,[x8, #0x6b0]
7102f86a7c  mov w8,#0xb8a0
7102f86a80  add x24,x19,x8
7102f86a84  ext v0.16B,v1.16B,v0.16B,0xc
7102f86a88  stp q2,q0,[sp, #0xe0]
7102f86a8c  mov x25,xzr
7102f86a90  ldr x0,[x24, x25, LSL #0x3]
7102f86a94  cbz x0,0x7102f86b38
7102f86a98  ldr x8,[x0]
7102f86a9c  ldr x8,[x8, #0x38]
7102f86aa0  blr x8
7102f86aa4  ldr x26,[x0]
7102f86aa8  cbz x26,0x7102f86b2c
7102f86aac  ldr x0,[x26, #0x90]
7102f86ab0  ldr x8,[x0]
7102f86ab4  ldr x8,[x8, #0x148]
7102f86ab8  add x1,sp,#0xc0
7102f86abc  blr x8
7102f86ac0  ldr x26,[x26, #0xd8]
7102f86ac4  cbz x26,0x7102f86b2c
7102f86ac8  ldr x8,[sp, #0xd8]
7102f86acc  stur x8,[x29, #-0x88]
7102f86ad0  ldr x8,[sp, #0xd0]
7102f86ad4  stur x8,[x29, #-0x90]
7102f86ad8  ldr x8,[sp, #0xc8]
7102f86adc  stur x8,[x29, #-0x98]
7102f86ae0  ldr x8,[sp, #0xc0]
7102f86ae4  stur x8,[x29, #-0xa0]
7102f86ae8  ldr x8,[sp, #0xf8]
7102f86aec  stur x8,[x29, #-0x68]
7102f86af0  ldr x8,[sp, #0xf0]
7102f86af4  stur x8,[x29, #-0x70]
7102f86af8  ldr x8,[sp, #0xe8]
7102f86afc  stur x8,[x29, #-0x78]
7102f86b00  ldr x8,[sp, #0xe0]
7102f86b04  stur x8,[x29, #-0x80]
7102f86b08  ldr x8,[x26, #0x8]
7102f86b0c  ldrb w9,[x8, #0xa8]
7102f86b10  cbz w9,0x7102f86b28
7102f86b14  ldr x0,[x8, #0x48]
7102f86b18  ldr x8,[x0]
7102f86b1c  ldr x8,[x8, #0x20]
7102f86b20  sub x1,x29,#0xa0
7102f86b24  blr x8
7102f86b28  strb w23,[x26, #0x20]
7102f86b2c  add x25,x25,#0x1
7102f86b30  cmp x25,#0x20
7102f86b34  b.cc 0x7102f86a90
7102f86b38  add x21,x21,#0x1
7102f86b3c  add x24,x24,#0x108
7102f86b40  cmp x21,#0x10
7102f86b44  b.ne 0x7102f86a8c
7102f86b48  mov w8,#0xc988
7102f86b4c  ldr x21,[x19, x8, LSL #0x0]
7102f86b50  cbz x21,0x7102f86bd8
7102f86b54  ldr x0,[x21, #0x90]
7102f86b58  ldr x8,[x0]
7102f86b5c  ldr x8,[x8, #0x148]
7102f86b60  add x1,sp,#0xc0
7102f86b64  blr x8
7102f86b68  ldr x21,[x21, #0xd8]
7102f86b6c  cbz x21,0x7102f86bd8
7102f86b70  ldr x8,[sp, #0xd8]
7102f86b74  stur x8,[x29, #-0x88]
7102f86b78  ldr x8,[sp, #0xd0]
7102f86b7c  stur x8,[x29, #-0x90]
7102f86b80  ldr x8,[sp, #0xc8]
7102f86b84  stur x8,[x29, #-0x98]
7102f86b88  ldr x8,[sp, #0xc0]
7102f86b8c  stur x8,[x29, #-0xa0]
7102f86b90  ldr x8,[sp, #0xf8]
7102f86b94  stur x8,[x29, #-0x68]
7102f86b98  ldr x8,[sp, #0xf0]
7102f86b9c  stur x8,[x29, #-0x70]
7102f86ba0  ldr x8,[sp, #0xe8]
7102f86ba4  stur x8,[x29, #-0x78]
7102f86ba8  ldr x8,[sp, #0xe0]
7102f86bac  stur x8,[x29, #-0x80]
7102f86bb0  ldr x8,[x21, #0x8]
7102f86bb4  ldrb w9,[x8, #0xa8]
7102f86bb8  cbz w9,0x7102f86bd0
7102f86bbc  ldr x0,[x8, #0x48]
7102f86bc0  ldr x8,[x0]
7102f86bc4  ldr x8,[x8, #0x20]
7102f86bc8  sub x1,x29,#0xa0
7102f86bcc  blr x8
7102f86bd0  mov w8,#0x1
7102f86bd4  strb w8,[x21, #0x20]
7102f86bd8  ldr x8,[x22, #0x38]
7102f86bdc  cbz x8,0x7102f86c04
7102f86be0  ldr x0,[x8, #0x130]
7102f86be4  ldr x8,[x0]
7102f86be8  ldr x8,[x8, #0x100]
7102f86bec  ldr w4,[sp, #0x18]
7102f86bf0  add x2,sp,#0x60
7102f86bf4  mov w5,#0x1
7102f86bf8  mov w1,wzr
7102f86bfc  mov w3,wzr
7102f86c00  blr x8
7102f86c04  ldr x8,[x22]
7102f86c08  ldr x8,[x8, #0x98]
7102f86c0c  add x1,sp,#0x20
7102f86c10  mov x0,x22
7102f86c14  blr x8
7102f86c18  ldr x22,[x27, #0x3b8]
7102f86c1c  cbz x22,0x7102f867cc
7102f86c20  adrp x8,0x710532e000
7102f86c24  add x8,x8,#0x980
7102f86c28  ldp x9,x8,[x8]
7102f86c2c  stp x9,x8,[sp, #0x20]
7102f86c30  ldr x10,[x19, #0x798]
7102f86c34  ldr x9,[x19, #0x790]
7102f86c38  ldr w8,[x22, #0xe0]
7102f86c3c  sub x10,x10,x9
7102f86c40  asr x10,x10,#0x3
7102f86c44  cmp x10,x8
7102f86c48  b.ls 0x7102f885e0
7102f86c4c  add x9,x9,x8, LSL #0x3
7102f86c50  ldrh w9,[x9, #0x2]
7102f86c54  cbz w9,0x7102f86c6c
7102f86c58  adrp x9,0x710532e000
7102f86c5c  ldr q0,[sp, #0x20]
7102f86c60  ldr q1,[x9, #0x9a0]
7102f86c64  fadd v0.4S,v0.4S,v1.4S
7102f86c68  str q0,[sp, #0x20]
7102f86c6c  cmp w8,#0x9
7102f86c70  b.ne 0x7102f86e54
7102f86c74  adrp x8,0x71052a8000
7102f86c78  ldr x8,[x8, #0xa88]
7102f86c7c  ldr q0,[x8]
7102f86c80  mov w8,#0xcd9c
7102f86c84  mov w23,#0x1
7102f86c88  fmov s1,0x3f800000
7102f86c8c  strb w23,[x19, x8, LSL ]
7102f86c90  adrp x8,0x7104468000
7102f86c94  ldr q2,[x8, #0xca0]
7102f86c98  adrp x8,0x710446a000
7102f86c9c  mov x21,xzr
7102f86ca0  str q2,[sp, #0xc0]
7102f86ca4  mov v2.16B,v0.16B
7102f86ca8  mov v2.S[0x3],v1.S[0x0]
7102f86cac  ldr q1,[x8, #0x360]
7102f86cb0  adrp x8,0x7104465000
7102f86cb4  ext v0.16B,v2.16B,v0.16B,0xc
7102f86cb8  str q1,[sp, #0xd0]
7102f86cbc  ext v1.16B,v0.16B,v2.16B,0x4
7102f86cc0  ext v0.16B,v0.16B,v0.16B,0x8
7102f86cc4  ldr q2,[x8, #0x6b0]
7102f86cc8  mov w8,#0xa820
7102f86ccc  add x24,x19,x8
7102f86cd0  ext v0.16B,v1.16B,v0.16B,0xc
7102f86cd4  stp q2,q0,[sp, #0xe0]
7102f86cd8  mov x25,xzr
7102f86cdc  ldr x0,[x24, x25, LSL #0x3]
7102f86ce0  cbz x0,0x7102f86d84
7102f86ce4  ldr x8,[x0]
7102f86ce8  ldr x8,[x8, #0x38]
7102f86cec  blr x8
7102f86cf0  ldr x26,[x0]
7102f86cf4  cbz x26,0x7102f86d78
7102f86cf8  ldr x0,[x26, #0x90]
7102f86cfc  ldr x8,[x0]
7102f86d00  ldr x8,[x8, #0x148]
7102f86d04  add x1,sp,#0xc0
7102f86d08  blr x8
7102f86d0c  ldr x26,[x26, #0xd8]
7102f86d10  cbz x26,0x7102f86d78
7102f86d14  ldr x8,[sp, #0xd8]
7102f86d18  stur x8,[x29, #-0x88]
7102f86d1c  ldr x8,[sp, #0xd0]
7102f86d20  stur x8,[x29, #-0x90]
7102f86d24  ldr x8,[sp, #0xc8]
7102f86d28  stur x8,[x29, #-0x98]
7102f86d2c  ldr x8,[sp, #0xc0]
7102f86d30  stur x8,[x29, #-0xa0]
7102f86d34  ldr x8,[sp, #0xf8]
7102f86d38  stur x8,[x29, #-0x68]
7102f86d3c  ldr x8,[sp, #0xf0]
7102f86d40  stur x8,[x29, #-0x70]
7102f86d44  ldr x8,[sp, #0xe8]
7102f86d48  stur x8,[x29, #-0x78]
7102f86d4c  ldr x8,[sp, #0xe0]
7102f86d50  stur x8,[x29, #-0x80]
7102f86d54  ldr x8,[x26, #0x8]
7102f86d58  ldrb w9,[x8, #0xa8]
7102f86d5c  cbz w9,0x7102f86d74
7102f86d60  ldr x0,[x8, #0x48]
7102f86d64  ldr x8,[x0]
7102f86d68  ldr x8,[x8, #0x20]
7102f86d6c  sub x1,x29,#0xa0
7102f86d70  blr x8
7102f86d74  strb w23,[x26, #0x20]
7102f86d78  add x25,x25,#0x1
7102f86d7c  cmp x25,#0x20
7102f86d80  b.cc 0x7102f86cdc
7102f86d84  add x21,x21,#0x1
7102f86d88  add x24,x24,#0x108
7102f86d8c  cmp x21,#0x10
7102f86d90  b.ne 0x7102f86cd8
7102f86d94  mov w8,#0xc980
7102f86d98  ldr x21,[x19, x8, LSL #0x0]
7102f86d9c  cbz x21,0x7102f86e24
7102f86da0  ldr x0,[x21, #0x90]
7102f86da4  ldr x8,[x0]
7102f86da8  ldr x8,[x8, #0x148]
7102f86dac  add x1,sp,#0xc0
7102f86db0  blr x8
7102f86db4  ldr x21,[x21, #0xd8]
7102f86db8  cbz x21,0x7102f86e24
7102f86dbc  ldr x8,[sp, #0xd8]
7102f86dc0  stur x8,[x29, #-0x88]
7102f86dc4  ldr x8,[sp, #0xd0]
7102f86dc8  stur x8,[x29, #-0x90]
7102f86dcc  ldr x8,[sp, #0xc8]
7102f86dd0  stur x8,[x29, #-0x98]
7102f86dd4  ldr x8,[sp, #0xc0]
7102f86dd8  stur x8,[x29, #-0xa0]
7102f86ddc  ldr x8,[sp, #0xf8]
7102f86de0  stur x8,[x29, #-0x68]
7102f86de4  ldr x8,[sp, #0xf0]
7102f86de8  stur x8,[x29, #-0x70]
7102f86dec  ldr x8,[sp, #0xe8]
7102f86df0  stur x8,[x29, #-0x78]
7102f86df4  ldr x8,[sp, #0xe0]
7102f86df8  stur x8,[x29, #-0x80]
7102f86dfc  ldr x8,[x21, #0x8]
7102f86e00  ldrb w9,[x8, #0xa8]
7102f86e04  cbz w9,0x7102f86e1c
7102f86e08  ldr x0,[x8, #0x48]
7102f86e0c  ldr x8,[x0]
7102f86e10  ldr x8,[x8, #0x20]
7102f86e14  sub x1,x29,#0xa0
7102f86e18  blr x8
7102f86e1c  mov w8,#0x1
7102f86e20  strb w8,[x21, #0x20]
7102f86e24  ldr x8,[x22, #0x38]
7102f86e28  cbz x8,0x7102f86e50
7102f86e2c  ldr x0,[x8, #0x130]
7102f86e30  ldr x8,[x0]
7102f86e34  ldr x8,[x8, #0x100]
7102f86e38  ldr w4,[sp, #0x18]
7102f86e3c  add x2,sp,#0x90
7102f86e40  mov w5,#0x1
7102f86e44  mov w1,wzr
7102f86e48  mov w3,wzr
7102f86e4c  blr x8
7102f86e50  ldr w8,[x22, #0xe0]
7102f86e54  cmp w8,#0xa
7102f86e58  b.ne 0x7102f87040
7102f86e5c  adrp x8,0x71052a8000
7102f86e60  ldr x8,[x8, #0xa88]
7102f86e64  ldr q0,[x8]
7102f86e68  mov w8,#0xcd9d
7102f86e6c  mov w23,#0x1
7102f86e70  fmov s1,0x3f800000
7102f86e74  strb w23,[x19, x8, LSL ]
7102f86e78  mov w8,#0xcda0
7102f86e7c  str wzr,[x19, x8, LSL #0x0]
7102f86e80  adrp x8,0x7104468000
7102f86e84  ldr q2,[x8, #0xca0]
7102f86e88  adrp x8,0x710446a000
7102f86e8c  mov x21,xzr
7102f86e90  str q2,[sp, #0xc0]
7102f86e94  mov v2.16B,v0.16B
7102f86e98  mov v2.S[0x3],v1.S[0x0]
7102f86e9c  ldr q1,[x8, #0x360]
7102f86ea0  adrp x8,0x7104465000
7102f86ea4  ext v0.16B,v2.16B,v0.16B,0xc
7102f86ea8  str q1,[sp, #0xd0]
7102f86eac  ext v1.16B,v0.16B,v2.16B,0x4
7102f86eb0  ext v0.16B,v0.16B,v0.16B,0x8
7102f86eb4  ldr q2,[x8, #0x6b0]
7102f86eb8  mov w8,#0xb8a0
7102f86ebc  add x24,x19,x8
7102f86ec0  ext v0.16B,v1.16B,v0.16B,0xc
7102f86ec4  stp q2,q0,[sp, #0xe0]
7102f86ec8  mov x25,xzr
7102f86ecc  ldr x0,[x24, x25, LSL #0x3]
7102f86ed0  cbz x0,0x7102f86f74
7102f86ed4  ldr x8,[x0]
7102f86ed8  ldr x8,[x8, #0x38]
7102f86edc  blr x8
7102f86ee0  ldr x26,[x0]
7102f86ee4  cbz x26,0x7102f86f68
7102f86ee8  ldr x0,[x26, #0x90]
7102f86eec  ldr x8,[x0]
7102f86ef0  ldr x8,[x8, #0x148]
7102f86ef4  add x1,sp,#0xc0
7102f86ef8  blr x8
7102f86efc  ldr x26,[x26, #0xd8]
7102f86f00  cbz x26,0x7102f86f68
7102f86f04  ldr x8,[sp, #0xd8]
7102f86f08  stur x8,[x29, #-0x88]
7102f86f0c  ldr x8,[sp, #0xd0]
7102f86f10  stur x8,[x29, #-0x90]
7102f86f14  ldr x8,[sp, #0xc8]
7102f86f18  stur x8,[x29, #-0x98]
7102f86f1c  ldr x8,[sp, #0xc0]
7102f86f20  stur x8,[x29, #-0xa0]
7102f86f24  ldr x8,[sp, #0xf8]
7102f86f28  stur x8,[x29, #-0x68]
7102f86f2c  ldr x8,[sp, #0xf0]
7102f86f30  stur x8,[x29, #-0x70]
7102f86f34  ldr x8,[sp, #0xe8]
7102f86f38  stur x8,[x29, #-0x78]
7102f86f3c  ldr x8,[sp, #0xe0]
7102f86f40  stur x8,[x29, #-0x80]
7102f86f44  ldr x8,[x26, #0x8]
7102f86f48  ldrb w9,[x8, #0xa8]
7102f86f4c  cbz w9,0x7102f86f64
7102f86f50  ldr x0,[x8, #0x48]
7102f86f54  ldr x8,[x0]
7102f86f58  ldr x8,[x8, #0x20]
7102f86f5c  sub x1,x29,#0xa0
7102f86f60  blr x8
7102f86f64  strb w23,[x26, #0x20]
7102f86f68  add x25,x25,#0x1
7102f86f6c  cmp x25,#0x20
7102f86f70  b.cc 0x7102f86ecc
7102f86f74  add x21,x21,#0x1
7102f86f78  add x24,x24,#0x108
7102f86f7c  cmp x21,#0x10
7102f86f80  b.ne 0x7102f86ec8
7102f86f84  mov w8,#0xc988
7102f86f88  ldr x21,[x19, x8, LSL #0x0]
7102f86f8c  cbz x21,0x7102f87014
7102f86f90  ldr x0,[x21, #0x90]
7102f86f94  ldr x8,[x0]
7102f86f98  ldr x8,[x8, #0x148]
7102f86f9c  add x1,sp,#0xc0
7102f86fa0  blr x8
7102f86fa4  ldr x21,[x21, #0xd8]
7102f86fa8  cbz x21,0x7102f87014
7102f86fac  ldr x8,[sp, #0xd8]
7102f86fb0  stur x8,[x29, #-0x88]
7102f86fb4  ldr x8,[sp, #0xd0]
7102f86fb8  stur x8,[x29, #-0x90]
7102f86fbc  ldr x8,[sp, #0xc8]
7102f86fc0  stur x8,[x29, #-0x98]
7102f86fc4  ldr x8,[sp, #0xc0]
7102f86fc8  stur x8,[x29, #-0xa0]
7102f86fcc  ldr x8,[sp, #0xf8]
7102f86fd0  stur x8,[x29, #-0x68]
7102f86fd4  ldr x8,[sp, #0xf0]
7102f86fd8  stur x8,[x29, #-0x70]
7102f86fdc  ldr x8,[sp, #0xe8]
7102f86fe0  stur x8,[x29, #-0x78]
7102f86fe4  ldr x8,[sp, #0xe0]
7102f86fe8  stur x8,[x29, #-0x80]
7102f86fec  ldr x8,[x21, #0x8]
7102f86ff0  ldrb w9,[x8, #0xa8]
7102f86ff4  cbz w9,0x7102f8700c
7102f86ff8  ldr x0,[x8, #0x48]
7102f86ffc  ldr x8,[x0]
7102f87000  ldr x8,[x8, #0x20]
7102f87004  sub x1,x29,#0xa0
7102f87008  blr x8
7102f8700c  mov w8,#0x1
7102f87010  strb w8,[x21, #0x20]
7102f87014  ldr x8,[x22, #0x38]
7102f87018  cbz x8,0x7102f87040
7102f8701c  ldr x0,[x8, #0x130]
7102f87020  ldr x8,[x0]
7102f87024  ldr x8,[x8, #0x100]
7102f87028  ldr w4,[sp, #0x18]
7102f8702c  add x2,sp,#0x60
7102f87030  mov w5,#0x1
7102f87034  mov w1,wzr
7102f87038  mov w3,wzr
7102f8703c  blr x8
7102f87040  ldr x8,[x22]
7102f87044  ldr x8,[x8, #0x98]
7102f87048  add x1,sp,#0x20
7102f8704c  mov x0,x22
7102f87050  blr x8
7102f87054  ldr x22,[x27, #0x3c0]
7102f87058  cbz x22,0x7102f87490
7102f8705c  adrp x8,0x710532e000
7102f87060  add x8,x8,#0x990
7102f87064  ldp x9,x8,[x8]
7102f87068  stp x9,x8,[sp, #0x20]
7102f8706c  ldr x10,[x19, #0x798]
7102f87070  ldr x9,[x19, #0x790]
7102f87074  ldr w8,[x22, #0xe0]
7102f87078  sub x10,x10,x9
7102f8707c  asr x10,x10,#0x3
7102f87080  cmp x10,x8
7102f87084  b.ls 0x7102f885e0
7102f87088  add x9,x9,x8, LSL #0x3
7102f8708c  ldrh w9,[x9, #0x2]
7102f87090  cbz w9,0x7102f870a8
7102f87094  adrp x9,0x710532e000
7102f87098  ldr q0,[sp, #0x20]
7102f8709c  ldr q1,[x9, #0x9a0]
7102f870a0  fadd v0.4S,v0.4S,v1.4S
7102f870a4  str q0,[sp, #0x20]
7102f870a8  cmp w8,#0x9
7102f870ac  b.ne 0x7102f87290
7102f870b0  adrp x8,0x71052a8000
7102f870b4  ldr x8,[x8, #0xa88]
7102f870b8  ldr q0,[x8]
7102f870bc  mov w8,#0xcd9c
7102f870c0  mov w23,#0x1
7102f870c4  fmov s1,0x3f800000
7102f870c8  strb w23,[x19, x8, LSL ]
7102f870cc  adrp x8,0x7104468000
7102f870d0  ldr q2,[x8, #0xca0]
7102f870d4  adrp x8,0x710446a000
7102f870d8  mov x21,xzr
7102f870dc  str q2,[sp, #0xc0]
7102f870e0  mov v2.16B,v0.16B
7102f870e4  mov v2.S[0x3],v1.S[0x0]
7102f870e8  ldr q1,[x8, #0x360]
7102f870ec  adrp x8,0x7104465000
7102f870f0  ext v0.16B,v2.16B,v0.16B,0xc
7102f870f4  str q1,[sp, #0xd0]
7102f870f8  ext v1.16B,v0.16B,v2.16B,0x4
7102f870fc  ext v0.16B,v0.16B,v0.16B,0x8
7102f87100  ldr q2,[x8, #0x6b0]
7102f87104  mov w8,#0xa820
7102f87108  add x24,x19,x8
7102f8710c  ext v0.16B,v1.16B,v0.16B,0xc
7102f87110  stp q2,q0,[sp, #0xe0]
7102f87114  mov x25,xzr
7102f87118  ldr x0,[x24, x25, LSL #0x3]
7102f8711c  cbz x0,0x7102f871c0
7102f87120  ldr x8,[x0]
7102f87124  ldr x8,[x8, #0x38]
7102f87128  blr x8
7102f8712c  ldr x26,[x0]
7102f87130  cbz x26,0x7102f871b4
7102f87134  ldr x0,[x26, #0x90]
7102f87138  ldr x8,[x0]
7102f8713c  ldr x8,[x8, #0x148]
7102f87140  add x1,sp,#0xc0
7102f87144  blr x8
7102f87148  ldr x26,[x26, #0xd8]
7102f8714c  cbz x26,0x7102f871b4
7102f87150  ldr x8,[sp, #0xd8]
7102f87154  stur x8,[x29, #-0x88]
7102f87158  ldr x8,[sp, #0xd0]
7102f8715c  stur x8,[x29, #-0x90]
7102f87160  ldr x8,[sp, #0xc8]
7102f87164  stur x8,[x29, #-0x98]
7102f87168  ldr x8,[sp, #0xc0]
7102f8716c  stur x8,[x29, #-0xa0]
7102f87170  ldr x8,[sp, #0xf8]
7102f87174  stur x8,[x29, #-0x68]
7102f87178  ldr x8,[sp, #0xf0]
7102f8717c  stur x8,[x29, #-0x70]
7102f87180  ldr x8,[sp, #0xe8]
7102f87184  stur x8,[x29, #-0x78]
7102f87188  ldr x8,[sp, #0xe0]
7102f8718c  stur x8,[x29, #-0x80]
7102f87190  ldr x8,[x26, #0x8]
7102f87194  ldrb w9,[x8, #0xa8]
7102f87198  cbz w9,0x7102f871b0
7102f8719c  ldr x0,[x8, #0x48]
7102f871a0  ldr x8,[x0]
7102f871a4  ldr x8,[x8, #0x20]
7102f871a8  sub x1,x29,#0xa0
7102f871ac  blr x8
7102f871b0  strb w23,[x26, #0x20]
7102f871b4  add x25,x25,#0x1
7102f871b8  cmp x25,#0x20
7102f871bc  b.cc 0x7102f87118
7102f871c0  add x21,x21,#0x1
7102f871c4  add x24,x24,#0x108
7102f871c8  cmp x21,#0x10
7102f871cc  b.ne 0x7102f87114
7102f871d0  mov w8,#0xc980
7102f871d4  ldr x21,[x19, x8, LSL #0x0]
7102f871d8  cbz x21,0x7102f87260
7102f871dc  ldr x0,[x21, #0x90]
7102f871e0  ldr x8,[x0]
7102f871e4  ldr x8,[x8, #0x148]
7102f871e8  add x1,sp,#0xc0
7102f871ec  blr x8
7102f871f0  ldr x21,[x21, #0xd8]
7102f871f4  cbz x21,0x7102f87260
7102f871f8  ldr x8,[sp, #0xd8]
7102f871fc  stur x8,[x29, #-0x88]
7102f87200  ldr x8,[sp, #0xd0]
7102f87204  stur x8,[x29, #-0x90]
7102f87208  ldr x8,[sp, #0xc8]
7102f8720c  stur x8,[x29, #-0x98]
7102f87210  ldr x8,[sp, #0xc0]
7102f87214  stur x8,[x29, #-0xa0]
7102f87218  ldr x8,[sp, #0xf8]
7102f8721c  stur x8,[x29, #-0x68]
7102f87220  ldr x8,[sp, #0xf0]
7102f87224  stur x8,[x29, #-0x70]
7102f87228  ldr x8,[sp, #0xe8]
7102f8722c  stur x8,[x29, #-0x78]
7102f87230  ldr x8,[sp, #0xe0]
7102f87234  stur x8,[x29, #-0x80]
7102f87238  ldr x8,[x21, #0x8]
7102f8723c  ldrb w9,[x8, #0xa8]
7102f87240  cbz w9,0x7102f87258
7102f87244  ldr x0,[x8, #0x48]
7102f87248  ldr x8,[x0]
7102f8724c  ldr x8,[x8, #0x20]
7102f87250  sub x1,x29,#0xa0
7102f87254  blr x8
7102f87258  mov w8,#0x1
7102f8725c  strb w8,[x21, #0x20]
7102f87260  ldr x8,[x22, #0x38]
7102f87264  cbz x8,0x7102f8728c
7102f87268  ldr x0,[x8, #0x130]
7102f8726c  ldr x8,[x0]
7102f87270  ldr x8,[x8, #0x100]
7102f87274  ldr w4,[sp, #0x18]
7102f87278  add x2,sp,#0x90
7102f8727c  mov w5,#0x1
7102f87280  mov w1,wzr
7102f87284  mov w3,wzr
7102f87288  blr x8
7102f8728c  ldr w8,[x22, #0xe0]
7102f87290  cmp w8,#0xa
7102f87294  b.ne 0x7102f8747c
7102f87298  adrp x8,0x71052a8000
7102f8729c  ldr x8,[x8, #0xa88]
7102f872a0  ldr q0,[x8]
7102f872a4  mov w8,#0xcd9d
7102f872a8  mov w23,#0x1
7102f872ac  fmov s1,0x3f800000
7102f872b0  strb w23,[x19, x8, LSL ]
7102f872b4  mov w8,#0xcda0
7102f872b8  str wzr,[x19, x8, LSL #0x0]
7102f872bc  adrp x8,0x7104468000
7102f872c0  ldr q2,[x8, #0xca0]
7102f872c4  adrp x8,0x710446a000
7102f872c8  mov x21,xzr
7102f872cc  str q2,[sp, #0xc0]
7102f872d0  mov v2.16B,v0.16B
7102f872d4  mov v2.S[0x3],v1.S[0x0]
7102f872d8  ldr q1,[x8, #0x360]
7102f872dc  adrp x8,0x7104465000
7102f872e0  ext v0.16B,v2.16B,v0.16B,0xc
7102f872e4  str q1,[sp, #0xd0]
7102f872e8  ext v1.16B,v0.16B,v2.16B,0x4
7102f872ec  ext v0.16B,v0.16B,v0.16B,0x8
7102f872f0  ldr q2,[x8, #0x6b0]
7102f872f4  mov w8,#0xb8a0
7102f872f8  add x24,x19,x8
7102f872fc  ext v0.16B,v1.16B,v0.16B,0xc
7102f87300  stp q2,q0,[sp, #0xe0]
7102f87304  mov x25,xzr
7102f87308  ldr x0,[x24, x25, LSL #0x3]
7102f8730c  cbz x0,0x7102f873b0
7102f87310  ldr x8,[x0]
7102f87314  ldr x8,[x8, #0x38]
7102f87318  blr x8
7102f8731c  ldr x26,[x0]
7102f87320  cbz x26,0x7102f873a4
7102f87324  ldr x0,[x26, #0x90]
7102f87328  ldr x8,[x0]
7102f8732c  ldr x8,[x8, #0x148]
7102f87330  add x1,sp,#0xc0
7102f87334  blr x8
7102f87338  ldr x26,[x26, #0xd8]
7102f8733c  cbz x26,0x7102f873a4
7102f87340  ldr x8,[sp, #0xd8]
7102f87344  stur x8,[x29, #-0x88]
7102f87348  ldr x8,[sp, #0xd0]
7102f8734c  stur x8,[x29, #-0x90]
7102f87350  ldr x8,[sp, #0xc8]
7102f87354  stur x8,[x29, #-0x98]
7102f87358  ldr x8,[sp, #0xc0]
7102f8735c  stur x8,[x29, #-0xa0]
7102f87360  ldr x8,[sp, #0xf8]
7102f87364  stur x8,[x29, #-0x68]
7102f87368  ldr x8,[sp, #0xf0]
7102f8736c  stur x8,[x29, #-0x70]
7102f87370  ldr x8,[sp, #0xe8]
7102f87374  stur x8,[x29, #-0x78]
7102f87378  ldr x8,[sp, #0xe0]
7102f8737c  stur x8,[x29, #-0x80]
7102f87380  ldr x8,[x26, #0x8]
7102f87384  ldrb w9,[x8, #0xa8]
7102f87388  cbz w9,0x7102f873a0
7102f8738c  ldr x0,[x8, #0x48]
7102f87390  ldr x8,[x0]
7102f87394  ldr x8,[x8, #0x20]
7102f87398  sub x1,x29,#0xa0
7102f8739c  blr x8
7102f873a0  strb w23,[x26, #0x20]
7102f873a4  add x25,x25,#0x1
7102f873a8  cmp x25,#0x20
7102f873ac  b.cc 0x7102f87308
7102f873b0  add x21,x21,#0x1
7102f873b4  add x24,x24,#0x108
7102f873b8  cmp x21,#0x10
7102f873bc  b.ne 0x7102f87304
7102f873c0  mov w8,#0xc988
7102f873c4  ldr x21,[x19, x8, LSL #0x0]
7102f873c8  cbz x21,0x7102f87450
7102f873cc  ldr x0,[x21, #0x90]
7102f873d0  ldr x8,[x0]
7102f873d4  ldr x8,[x8, #0x148]
7102f873d8  add x1,sp,#0xc0
7102f873dc  blr x8
7102f873e0  ldr x21,[x21, #0xd8]
7102f873e4  cbz x21,0x7102f87450
7102f873e8  ldr x8,[sp, #0xd8]
7102f873ec  stur x8,[x29, #-0x88]
7102f873f0  ldr x8,[sp, #0xd0]
7102f873f4  stur x8,[x29, #-0x90]
7102f873f8  ldr x8,[sp, #0xc8]
7102f873fc  stur x8,[x29, #-0x98]
7102f87400  ldr x8,[sp, #0xc0]
7102f87404  stur x8,[x29, #-0xa0]
7102f87408  ldr x8,[sp, #0xf8]
7102f8740c  stur x8,[x29, #-0x68]
7102f87410  ldr x8,[sp, #0xf0]
7102f87414  stur x8,[x29, #-0x70]
7102f87418  ldr x8,[sp, #0xe8]
7102f8741c  stur x8,[x29, #-0x78]
7102f87420  ldr x8,[sp, #0xe0]
7102f87424  stur x8,[x29, #-0x80]
7102f87428  ldr x8,[x21, #0x8]
7102f8742c  ldrb w9,[x8, #0xa8]
7102f87430  cbz w9,0x7102f87448
7102f87434  ldr x0,[x8, #0x48]
7102f87438  ldr x8,[x0]
7102f8743c  ldr x8,[x8, #0x20]
7102f87440  sub x1,x29,#0xa0
7102f87444  blr x8
7102f87448  mov w8,#0x1
7102f8744c  strb w8,[x21, #0x20]
7102f87450  ldr x8,[x22, #0x38]
7102f87454  cbz x8,0x7102f8747c
7102f87458  ldr x0,[x8, #0x130]
7102f8745c  ldr x8,[x0]
7102f87460  ldr x8,[x8, #0x100]
7102f87464  ldr w4,[sp, #0x18]
7102f87468  add x2,sp,#0x60
7102f8746c  mov w5,#0x1
7102f87470  mov w1,wzr
7102f87474  mov w3,wzr
7102f87478  blr x8
7102f8747c  ldr x8,[x22]
7102f87480  ldr x8,[x8, #0x98]
7102f87484  add x1,sp,#0x20
7102f87488  mov x0,x22
7102f8748c  blr x8
7102f87490  ldr x23,[x20, #0x10]
7102f87494  ldr x21,[x20]
7102f87498  sub x8,x23,x21
7102f8749c  asr x8,x8,#0x3
7102f874a0  cmp x8,#0x8
7102f874a4  str x28,[sp, #0x10]
7102f874a8  b.cs 0x7102f875a8
7102f874ac  mov w8,#0xceb8
7102f874b0  add x9,x19,x8
7102f874b4  mov x8,x20
7102f874b8  ldr x22,[x8, #0x8]!
7102f874bc  mov w0,#0x10
7102f874c0  stp x9,x8,[sp]
7102f874c4  sub x8,x22,x21
7102f874c8  mov w1,#0x40
7102f874cc  stur x9,[x29, #-0x80]
7102f874d0  asr x24,x8,#0x3
7102f874d4  bl 0x710392e290
7102f874d8  cbnz x0,0x7102f87520
7102f874dc  adrp x8,0x7105332000
7102f874e0  ldr x0,[x8, #0xf00]
7102f874e4  cbz x0,0x7102f8751c
7102f874e8  mov w8,#0x40
7102f874ec  str wzr,[sp, #0x20]
7102f874f0  add x1,sp,#0x20
7102f874f4  str x8,[sp, #0xc0]
7102f874f8  ldr x8,[x0]
7102f874fc  ldr x8,[x8, #0x30]
7102f87500  add x2,sp,#0xc0
7102f87504  blr x8
7102f87508  tbz w0,#0x0,0x7102f8751c
7102f8750c  mov w0,#0x10
7102f87510  mov w1,#0x40
7102f87514  bl 0x710392e290
7102f87518  cbnz x0,0x7102f87520
7102f8751c  mov x0,xzr
7102f87520  add x8,x0,x24, LSL #0x3
7102f87524  add x9,x0,#0x40
7102f87528  subs x10,x22,x21
7102f8752c  stp x0,x8,[x29, #-0xa0]
7102f87530  stp x8,x9,[x29, #-0x90]
7102f87534  b.eq 0x7102f875c0
7102f87538  sub x9,x10,#0x8
7102f8753c  tbnz w9,#0x3,0x7102f87558
7102f87540  ldr x10,[x22, #-0x8]!
7102f87544  str xzr,[x22]
7102f87548  stur x10,[x8, #-0x8]
7102f8754c  ldur x8,[x29, #-0x98]
7102f87550  sub x8,x8,#0x8
7102f87554  stur x8,[x29, #-0x98]
7102f87558  cmp x9,#0x8
7102f8755c  b.cc 0x7102f87598
7102f87560  ldur x9,[x22, #-0x8]
7102f87564  stur xzr,[x22, #-0x8]
7102f87568  stur x9,[x8, #-0x8]
7102f8756c  ldur x8,[x29, #-0x98]
7102f87570  sub x9,x8,#0x8
7102f87574  stur x9,[x29, #-0x98]
7102f87578  ldr x9,[x22, #-0x10]!
7102f8757c  str xzr,[x22]
7102f87580  stur x9,[x8, #-0x10]
7102f87584  ldur x8,[x29, #-0x98]
7102f87588  sub x8,x8,#0x8
7102f8758c  cmp x21,x22
7102f87590  stur x8,[x29, #-0x98]
7102f87594  b.ne 0x7102f87560
7102f87598  ldp x21,x22,[x20]
7102f8759c  ldr x23,[x20, #0x10]
7102f875a0  ldp x10,x9,[x29, #-0x90]
7102f875a4  b 0x7102f875c4
7102f875a8  add x8,x20,#0x8
7102f875ac  str x8,[sp, #0x8]
7102f875b0  mov w8,#0xceb8
7102f875b4  add x8,x19,x8
7102f875b8  str x8,[sp]
7102f875bc  b 0x7102f875e0
7102f875c0  mov x10,x8
7102f875c4  sub x0,x29,#0xa0
7102f875c8  stp x8,x10,[x20]
7102f875cc  stp x21,x22,[x29, #-0x98]
7102f875d0  str x9,[x20, #0x10]
7102f875d4  stur x23,[x29, #-0x88]
7102f875d8  stur x21,[x29, #-0xa0]
7102f875dc  bl 0x7102f8c240
7102f875e0  mov w28,wzr
7102f875e4  mov w23,#0x28
7102f875e8  adrp x21,0x710515b000
7102f875ec  add x21,x21,#0x1f0
7102f875f0  b 0x7102f875fc
7102f875f4  mov x0,xzr
7102f875f8  b 0x7102f87a84
7102f875fc  mov w0,#0x10
7102f87600  mov w1,#0x20
7102f87604  bl 0x710392e290
7102f87608  mov x24,x0
7102f8760c  cbnz x0,0x7102f87658
7102f87610  adrp x8,0x7105332000
7102f87614  ldr x0,[x8, #0xf00]
7102f87618  cbz x0,0x7102f87654
7102f8761c  mov w8,#0x20
7102f87620  str wzr,[sp, #0xc0]
7102f87624  add x1,sp,#0xc0
7102f87628  stur x8,[x29, #-0xa0]
7102f8762c  ldr x8,[x0]
7102f87630  ldr x8,[x8, #0x30]
7102f87634  sub x2,x29,#0xa0
7102f87638  blr x8
7102f8763c  tbz w0,#0x0,0x7102f87654
7102f87640  mov w0,#0x10
7102f87644  mov w1,#0x20
7102f87648  bl 0x710392e290
7102f8764c  mov x24,x0
7102f87650  cbnz x0,0x7102f87658
7102f87654  mov x24,xzr
7102f87658  mov w8,#0x4
7102f8765c  strh wzr,[x24, #0x18]
7102f87660  str xzr,[x24]
7102f87664  stp xzr,xzr,[x24, #0x8]
7102f87668  mov w0,#0x10
7102f8766c  mov w1,#0x48
7102f87670  stur x8,[x29, #-0xa0]
7102f87674  mov x8,#0x100000001
7102f87678  stur x8,[x29, #-0x98]
7102f8767c  mov x8,#0x1
7102f87680  movk x8,#0x10, LSL #32
7102f87684  stur x8,[x29, #-0x90]
7102f87688  bl 0x710392e290
7102f8768c  mov x25,x0
7102f87690  cbnz x0,0x7102f876dc
7102f87694  adrp x8,0x7105332000
7102f87698  ldr x0,[x8, #0xf00]
7102f8769c  cbz x0,0x7102f876d8
7102f876a0  mov w8,#0x48
7102f876a4  str wzr,[sp, #0x20]
7102f876a8  add x1,sp,#0x20
7102f876ac  str x8,[sp, #0xc0]
7102f876b0  ldr x8,[x0]
7102f876b4  ldr x8,[x8, #0x30]
7102f876b8  add x2,sp,#0xc0
7102f876bc  blr x8
7102f876c0  tbz w0,#0x0,0x7102f876d8
7102f876c4  mov w0,#0x10
7102f876c8  mov w1,#0x48
7102f876cc  bl 0x710392e290
7102f876d0  mov x25,x0
7102f876d4  cbnz x0,0x7102f876dc
7102f876d8  mov x25,xzr
7102f876dc  sub x2,x29,#0xa0
7102f876e0  mov x0,x25
7102f876e4  mov x1,x19
7102f876e8  bl 0x710313e6a0
7102f876ec  str x25,[x24]
7102f876f0  ldr x8,[x25, #0x38]
7102f876f4  cbz x8,0x7102f87720
7102f876f8  ldr x0,[x8, #0x130]
7102f876fc  ldr x8,[x0]
7102f87700  ldr x8,[x8, #0x100]
7102f87704  ldr w4,[sp, #0x18]
7102f87708  add x2,sp,#0x30
7102f8770c  mov w5,#0x1
7102f87710  mov w1,wzr
7102f87714  mov w3,wzr
7102f87718  blr x8
7102f8771c  ldr x25,[x24]
7102f87720  ldr x8,[x25, #0x38]
7102f87724  cbz x8,0x7102f8773c
7102f87728  ldr x0,[x8, #0x130]
7102f8772c  ldr x8,[x0]
7102f87730  ldr x8,[x8, #0x120]
7102f87734  mov w1,#0x1
7102f87738  blr x8
7102f8773c  adrp x8,0x71052b9000
7102f87740  ldr x8,[x8, #0x4f8]
7102f87744  ldr x22,[x8]
7102f87748  mov w0,#0x10
7102f8774c  mov x1,x23
7102f87750  bl 0x710392e290
7102f87754  mov x25,x0
7102f87758  cbnz x0,0x7102f877a0
7102f8775c  adrp x8,0x7105332000
7102f87760  ldr x0,[x8, #0xf00]
7102f87764  cbz x0,0x7102f8779c
7102f87768  str wzr,[sp, #0xc0]
7102f8776c  stur x23,[x29, #-0xa0]
7102f87770  ldr x8,[x0]
7102f87774  ldr x8,[x8, #0x30]
7102f87778  add x1,sp,#0xc0
7102f8777c  sub x2,x29,#0xa0
7102f87780  blr x8
7102f87784  tbz w0,#0x0,0x7102f8779c
7102f87788  mov w0,#0x10
7102f8778c  mov x1,x23
7102f87790  bl 0x710392e290
7102f87794  mov x25,x0
7102f87798  cbnz x0,0x7102f877a0
7102f8779c  mov x25,xzr
7102f877a0  mov w8,#0x1
7102f877a4  str w8,[x25, #0x8]
7102f877a8  adrp x8,0x7102f8c000
7102f877ac  add x8,x8,#0x2e0
7102f877b0  str x21,[x25]
7102f877b4  str xzr,[x25, #0x20]
7102f877b8  stp x24,x8,[x25, #0x10]
7102f877bc  ldr x22,[x22, #0x8]
7102f877c0  mov w0,#0x10
7102f877c4  orr w1,wzr,#0x18
7102f877c8  add x26,x22,#0x50
7102f877cc  bl 0x710392e290
7102f877d0  cbnz x0,0x7102f87818
7102f877d4  adrp x8,0x7105332000
7102f877d8  ldr x0,[x8, #0xf00]
7102f877dc  cbz x0,0x7102f87814
7102f877e0  orr w8,wzr,#0x18
7102f877e4  str wzr,[sp, #0xc0]
7102f877e8  add x1,sp,#0xc0
7102f877ec  stur x8,[x29, #-0xa0]
7102f877f0  ldr x8,[x0]
7102f877f4  ldr x8,[x8, #0x30]
7102f877f8  sub x2,x29,#0xa0
7102f877fc  blr x8
7102f87800  tbz w0,#0x0,0x7102f87814
7102f87804  mov w0,#0x10
7102f87808  orr w1,wzr,#0x18
7102f8780c  bl 0x710392e290
7102f87810  cbnz x0,0x7102f87818
7102f87814  mov x0,xzr
7102f87818  str x25,[x0, #0x10]
7102f8781c  ldrh w8,[x25, #0x8]
7102f87820  add w8,w8,#0x1
7102f87824  strh w8,[x25, #0x8]
7102f87828  ldr x8,[x22, #0x58]
7102f8782c  stp x26,x8,[x0]
7102f87830  str x0,[x22, #0x58]
7102f87834  str x0,[x8]
7102f87838  ldr x8,[x22, #0x48]
7102f8783c  add x8,x8,#0x1
7102f87840  str x8,[x22, #0x48]
7102f87844  str x0,[x24, #0x8]
7102f87848  ldrh w8,[x25, #0x8]
7102f8784c  sub w8,w8,#0x1
7102f87850  sxth w9,w8
7102f87854  cmp w9,#0x0
7102f87858  strh w8,[x25, #0x8]
7102f8785c  b.gt 0x7102f87870
7102f87860  ldr x8,[x25]
7102f87864  ldr x8,[x8, #0x8]
7102f87868  mov x0,x25
7102f8786c  blr x8
7102f87870  adrp x8,0x71052b9000
7102f87874  ldr x8,[x8, #0x4f8]
7102f87878  ldr x22,[x8]
7102f8787c  mov w0,#0x10
7102f87880  mov x1,x23
7102f87884  bl 0x710392e290
7102f87888  mov x25,x0
7102f8788c  cbnz x0,0x7102f878d4
7102f87890  adrp x8,0x7105332000
7102f87894  ldr x0,[x8, #0xf00]
7102f87898  cbz x0,0x7102f878d0
7102f8789c  str wzr,[sp, #0xc0]
7102f878a0  stur x23,[x29, #-0xa0]
7102f878a4  ldr x8,[x0]
7102f878a8  ldr x8,[x8, #0x30]
7102f878ac  add x1,sp,#0xc0
7102f878b0  sub x2,x29,#0xa0
7102f878b4  blr x8
7102f878b8  tbz w0,#0x0,0x7102f878d0
7102f878bc  mov w0,#0x10
7102f878c0  mov x1,x23
7102f878c4  bl 0x710392e290
7102f878c8  mov x25,x0
7102f878cc  cbnz x0,0x7102f878d4
7102f878d0  mov x25,xzr
7102f878d4  mov w8,#0x1
7102f878d8  str w8,[x25, #0x8]
7102f878dc  adrp x8,0x7102f8c000
7102f878e0  add x8,x8,#0x2f0
7102f878e4  str x21,[x25]
7102f878e8  str xzr,[x25, #0x20]
7102f878ec  stp x24,x8,[x25, #0x10]
7102f878f0  ldr x22,[x22, #0x8]
7102f878f4  mov w0,#0x10
7102f878f8  orr w1,wzr,#0x18
7102f878fc  add x26,x22,#0x68
7102f87900  bl 0x710392e290
7102f87904  cbnz x0,0x7102f8794c
7102f87908  adrp x8,0x7105332000
7102f8790c  ldr x0,[x8, #0xf00]
7102f87910  cbz x0,0x7102f87948
7102f87914  orr w8,wzr,#0x18
7102f87918  str wzr,[sp, #0xc0]
7102f8791c  add x1,sp,#0xc0
7102f87920  stur x8,[x29, #-0xa0]
7102f87924  ldr x8,[x0]
7102f87928  ldr x8,[x8, #0x30]
7102f8792c  sub x2,x29,#0xa0
7102f87930  blr x8
7102f87934  tbz w0,#0x0,0x7102f87948
7102f87938  mov w0,#0x10
7102f8793c  orr w1,wzr,#0x18
7102f87940  bl 0x710392e290
7102f87944  cbnz x0,0x7102f8794c
7102f87948  mov x0,xzr
7102f8794c  str x25,[x0, #0x10]
7102f87950  ldrh w8,[x25, #0x8]
7102f87954  add w8,w8,#0x1
7102f87958  strh w8,[x25, #0x8]
7102f8795c  ldr x8,[x22, #0x70]
7102f87960  stp x26,x8,[x0]
7102f87964  str x0,[x22, #0x70]
7102f87968  str x0,[x8]
7102f8796c  ldr x8,[x22, #0x60]
7102f87970  add x8,x8,#0x1
7102f87974  str x8,[x22, #0x60]
7102f87978  str x0,[x24, #0x10]
7102f8797c  ldrh w8,[x25, #0x8]
7102f87980  sub w8,w8,#0x1
7102f87984  sxth w9,w8
7102f87988  cmp w9,#0x0
7102f8798c  strh w8,[x25, #0x8]
7102f87990  b.gt 0x7102f879a4
7102f87994  ldr x8,[x25]
7102f87998  ldr x8,[x8, #0x8]
7102f8799c  mov x0,x25
7102f879a0  blr x8
7102f879a4  ldp x9,x10,[x20, #0x8]
7102f879a8  cmp x9,x10
7102f879ac  b.cs 0x7102f879c8
7102f879b0  str x24,[x9]
7102f879b4  ldr x9,[sp, #0x8]
7102f879b8  ldr x8,[x9]
7102f879bc  add x8,x8,#0x8
7102f879c0  str x8,[x9]
7102f879c4  b 0x7102f87ba4
7102f879c8  ldr x8,[x20]
7102f879cc  sub x11,x9,x8
7102f879d0  asr x22,x11,#0x3
7102f879d4  add x11,x22,#0x1
7102f879d8  lsr x12,x11,#0x3d
7102f879dc  cbnz x12,0x7102f885c8
7102f879e0  sub x10,x10,x8
7102f879e4  asr x12,x10,#0x3
7102f879e8  orr x13,xzr,#0xfffffffffffffff
7102f879ec  cmp x12,x13
7102f879f0  b.cs 0x7102f87a18
7102f879f4  asr x10,x10,#0x2
7102f879f8  cmp x10,x11
7102f879fc  csel x26,x11,x10,cc
7102f87a00  ldr x10,[sp]
7102f87a04  stp xzr,x10,[x29, #-0x88]
7102f87a08  cbz x26,0x7102f875f4
7102f87a0c  lsr x8,x26,#0x3d
7102f87a10  cbz x8,0x7102f87a24
7102f87a14  b 0x7102f87ed8
7102f87a18  ldr x8,[sp]
7102f87a1c  orr x26,xzr,#0x1fffffffffffffff
7102f87a20  stp xzr,x8,[x29, #-0x88]
7102f87a24  lsl x8,x26,#0x3
7102f87a28  cmp x8,#0x0
7102f87a2c  csinc x25,x8,xzr,ne
7102f87a30  mov w0,#0x10
7102f87a34  mov x1,x25
7102f87a38  bl 0x710392e290
7102f87a3c  cbnz x0,0x7102f87a80
7102f87a40  adrp x8,0x7105332000
7102f87a44  ldr x0,[x8, #0xf00]
7102f87a48  cbz x0,0x7102f87a7c
7102f87a4c  str wzr,[sp, #0x20]
7102f87a50  str x25,[sp, #0xc0]
7102f87a54  ldr x8,[x0]
7102f87a58  ldr x8,[x8, #0x30]
7102f87a5c  add x1,sp,#0x20
7102f87a60  add x2,sp,#0xc0
7102f87a64  blr x8
7102f87a68  tbz w0,#0x0,0x7102f87a7c
7102f87a6c  mov w0,#0x10
7102f87a70  mov x1,x25
7102f87a74  bl 0x710392e290
7102f87a78  cbnz x0,0x7102f87a80
7102f87a7c  mov x0,xzr
7102f87a80  ldp x8,x9,[x20]
7102f87a84  add x10,x0,x22, LSL #0x3
7102f87a88  add x11,x0,x26, LSL #0x3
7102f87a8c  mov x12,x10
7102f87a90  stp x0,x10,[x29, #-0xa0]
7102f87a94  cmp x9,x8
7102f87a98  str x24,[x12], #0x8
7102f87a9c  stp x12,x11,[x29, #-0x90]
7102f87aa0  b.eq 0x7102f87b80
7102f87aa4  sub x13,x9,#0x8
7102f87aa8  sub x13,x13,x8
7102f87aac  tbnz w13,#0x3,0x7102f87ac0
7102f87ab0  ldr x14,[x9, #-0x8]!
7102f87ab4  str xzr,[x9]
7102f87ab8  str x14,[x10, #-0x8]!
7102f87abc  stur x10,[x29, #-0x98]
7102f87ac0  cmp x13,#0x7
7102f87ac4  b.ls 0x7102f87b78
7102f87ac8  sub x11,x9,#0x10
7102f87acc  sub x11,x11,x8
7102f87ad0  tbnz w11,#0x4,0x7102f87b04
7102f87ad4  ldur x12,[x9, #-0x8]
7102f87ad8  stur xzr,[x9, #-0x8]
7102f87adc  stur x12,[x10, #-0x8]
7102f87ae0  ldur x10,[x29, #-0x98]
7102f87ae4  sub x12,x10,#0x8
7102f87ae8  stur x12,[x29, #-0x98]
7102f87aec  ldr x12,[x9, #-0x10]!
7102f87af0  str xzr,[x9]
7102f87af4  stur x12,[x10, #-0x10]
7102f87af8  ldur x10,[x29, #-0x98]
7102f87afc  sub x10,x10,#0x8
7102f87b00  stur x10,[x29, #-0x98]
7102f87b04  cmp x11,#0x10
7102f87b08  b.cc 0x7102f87b74
7102f87b0c  ldur x11,[x9, #-0x8]
7102f87b10  stur xzr,[x9, #-0x8]
7102f87b14  stur x11,[x10, #-0x8]
7102f87b18  ldur x10,[x29, #-0x98]
7102f87b1c  sub x11,x10,#0x8
7102f87b20  stur x11,[x29, #-0x98]
7102f87b24  ldur x11,[x9, #-0x10]
7102f87b28  stur xzr,[x9, #-0x10]
7102f87b2c  stur x11,[x10, #-0x10]
7102f87b30  ldur x10,[x29, #-0x98]
7102f87b34  sub x11,x10,#0x8
7102f87b38  stur x11,[x29, #-0x98]
7102f87b3c  ldur x11,[x9, #-0x18]
7102f87b40  stur xzr,[x9, #-0x18]
7102f87b44  stur x11,[x10, #-0x10]
7102f87b48  ldur x10,[x29, #-0x98]
7102f87b4c  sub x11,x10,#0x8
7102f87b50  stur x11,[x29, #-0x98]
7102f87b54  ldr x11,[x9, #-0x20]!
7102f87b58  str xzr,[x9]
7102f87b5c  stur x11,[x10, #-0x10]
7102f87b60  ldur x10,[x29, #-0x98]
7102f87b64  sub x10,x10,#0x8
7102f87b68  cmp x8,x9
7102f87b6c  stur x10,[x29, #-0x98]
7102f87b70  b.ne 0x7102f87b0c
7102f87b74  ldp x12,x11,[x29, #-0x90]
7102f87b78  ldp x9,x8,[x20]
7102f87b7c  b 0x7102f87b84
7102f87b80  mov x9,x8
7102f87b84  stp x10,x12,[x20]
7102f87b88  sub x0,x29,#0xa0
7102f87b8c  stp x9,x8,[x29, #-0x98]
7102f87b90  ldr x8,[x20, #0x10]
7102f87b94  str x11,[x20, #0x10]
7102f87b98  stur x8,[x29, #-0x88]
7102f87b9c  stur x9,[x29, #-0xa0]
7102f87ba0  bl 0x7102f8c240
7102f87ba4  add w28,w28,#0x1
7102f87ba8  cmp w28,#0x8
7102f87bac  b.ne 0x7102f875fc
7102f87bb0  mov w8,#0xcf18
7102f87bb4  mov w3,#0xbf800000
7102f87bb8  str w3,[x19, x8, LSL #0x0]
7102f87bbc  ldp x9,x8,[x20, #0x18]
7102f87bc0  sub x10,x8,x9
7102f87bc4  asr x24,x10,#0x3
7102f87bc8  cmp x24,#0x7
7102f87bcc  b.hi 0x7102f87c24
7102f87bd0  mov w10,#0x8
7102f87bd4  sub x22,x10,x24
7102f87bd8  ldr x10,[x20, #0x28]
7102f87bdc  sub x11,x10,x8
7102f87be0  asr x11,x11,#0x3
7102f87be4  cmp x11,x22
7102f87be8  mov w25,#0xffffffff
7102f87bec  b.cs 0x7102f87c3c
7102f87bf0  sub x8,x10,x9
7102f87bf4  asr x9,x8,#0x3
7102f87bf8  orr x10,xzr,#0xffffffffffffffe
7102f87bfc  cmp x9,x10
7102f87c00  b.hi 0x7102f87c98
7102f87c04  asr x8,x8,#0x2
7102f87c08  cmp x8,#0x8
7102f87c0c  mov w9,#0x8
7102f87c10  csel x23,x8,x9,hi
7102f87c14  cbz x23,0x7102f87cf4
7102f87c18  lsr x8,x23,#0x3d
7102f87c1c  cbz x8,0x7102f87c9c
7102f87c20  b 0x7102f87ed8
7102f87c24  cmp x10,#0x40
7102f87c28  mov w25,#0xffffffff
7102f87c2c  b.eq 0x7102f87db0
7102f87c30  add x8,x9,#0x40
7102f87c34  str x8,[x20, #0x20]
7102f87c38  b 0x7102f87db0
7102f87c3c  mov x9,x22
7102f87c40  tbz w22,#0x0,0x7102f87c5c
7102f87c44  str w25,[x8]
7102f87c48  strb wzr,[x8, #0x4]
7102f87c4c  ldr x8,[x20, #0x20]
7102f87c50  add x8,x8,#0x8
7102f87c54  sub x9,x22,#0x1
7102f87c58  str x8,[x20, #0x20]
7102f87c5c  cmp x22,#0x1
7102f87c60  b.eq 0x7102f87db0
7102f87c64  str w25,[x8]
7102f87c68  strb wzr,[x8, #0x4]
7102f87c6c  ldr x8,[x20, #0x20]
7102f87c70  add x10,x8,#0x8
7102f87c74  str x10,[x20, #0x20]
7102f87c78  str w25,[x8, #0x8]
7102f87c7c  strb wzr,[x8, #0xc]
7102f87c80  ldr x8,[x20, #0x20]
7102f87c84  add x8,x8,#0x8
7102f87c88  subs x9,x9,#0x2
7102f87c8c  str x8,[x20, #0x20]
7102f87c90  b.ne 0x7102f87c64
7102f87c94  b 0x7102f87db0
7102f87c98  orr x23,xzr,#0x1fffffffffffffff
7102f87c9c  lsl x8,x23,#0x3
7102f87ca0  cmp x8,#0x0
7102f87ca4  csinc x21,x8,xzr,ne
7102f87ca8  mov w0,#0x10
7102f87cac  mov x1,x21
7102f87cb0  bl 0x710392e290
7102f87cb4  cbnz x0,0x7102f87cf8
7102f87cb8  adrp x8,0x7105332000
7102f87cbc  ldr x0,[x8, #0xf00]
7102f87cc0  cbz x0,0x7102f87cf4
7102f87cc4  str wzr,[sp, #0xc0]
7102f87cc8  stur x21,[x29, #-0xa0]
7102f87ccc  ldr x8,[x0]
7102f87cd0  ldr x8,[x8, #0x30]
7102f87cd4  add x1,sp,#0xc0
7102f87cd8  sub x2,x29,#0xa0
7102f87cdc  blr x8
7102f87ce0  tbz w0,#0x0,0x7102f87cf4
7102f87ce4  mov w0,#0x10
7102f87ce8  mov x1,x21
7102f87cec  bl 0x710392e290
7102f87cf0  cbnz x0,0x7102f87cf8
7102f87cf4  mov x0,xzr
7102f87cf8  add x8,x0,x24, LSL #0x3
7102f87cfc  sub x9,x22,#0x1
7102f87d00  ands x11,x22,#0x3
7102f87d04  b.eq 0x7102f88590
7102f87d08  mov w12,#0x8
7102f87d0c  add x10,x24,x11
7102f87d10  neg x13,x11
7102f87d14  sub x12,x12,x24
7102f87d18  mov x14,x8
7102f87d1c  str w25,[x14]
7102f87d20  adds x13,x13,#0x1
7102f87d24  strb wzr,[x14, #0x4]
7102f87d28  add x14,x14,#0x8
7102f87d2c  b.ne 0x7102f87d1c
7102f87d30  add x10,x0,x10, LSL #0x3
7102f87d34  sub x22,x12,x11
7102f87d38  cmp x9,#0x3
7102f87d3c  b.cc 0x7102f87d6c
7102f87d40  str w25,[x10]
7102f87d44  strb wzr,[x10, #0x4]
7102f87d48  subs x22,x22,#0x4
7102f87d4c  str w25,[x10, #0x8]
7102f87d50  strb wzr,[x10, #0xc]
7102f87d54  str w25,[x10, #0x10]
7102f87d58  strb wzr,[x10, #0x14]
7102f87d5c  str w25,[x10, #0x18]
7102f87d60  strb wzr,[x10, #0x1c]
7102f87d64  add x10,x10,#0x20
7102f87d68  b.ne 0x7102f87d40
7102f87d6c  ldp x21,x9,[x20, #0x18]
7102f87d70  add x23,x0,x23, LSL #0x3
7102f87d74  add x24,x0,#0x40
7102f87d78  sub x2,x9,x21
7102f87d7c  sub x22,x8,x2
7102f87d80  cmp x2,#0x1
7102f87d84  b.lt 0x7102f87d94
7102f87d88  mov x0,x22
7102f87d8c  mov x1,x21
7102f87d90  bl 0x71039c00e0
7102f87d94  mov w3,#0xbf800000
7102f87d98  stp x22,x24,[x20, #0x18]
7102f87d9c  str x23,[x20, #0x28]
7102f87da0  cbz x21,0x7102f87db0
7102f87da4  mov x0,x21
7102f87da8  bl 0x710392eb40
7102f87dac  mov w3,#0xbf800000
7102f87db0  mov x0,x20
7102f87db4  ldr x8,[x0, #0x30]!
7102f87db8  ldr x9,[x19, #0x780]
7102f87dbc  ldr x10,[x19, #0x778]
7102f87dc0  sub x10,x9,x10
7102f87dc4  ldr x9,[x0, #0x8]
7102f87dc8  sub x11,x9,x8
7102f87dcc  asr x11,x11,#0x2
7102f87dd0  add x26,x19,#0x778
7102f87dd4  subs x1,x10,x11
7102f87dd8  b.ls 0x7102f87df4
7102f87ddc  bl 0x7102588b90
7102f87de0  ldp x8,x9,[x20, #0x30]
7102f87de4  mov w3,#0xbf800000
7102f87de8  cmp x9,x8
7102f87dec  b.ne 0x7102f87e08
7102f87df0  b 0x7102f87e48
7102f87df4  b.cs 0x7102f87e00
7102f87df8  add x9,x8,x10, LSL #0x2
7102f87dfc  str x9,[x20, #0x38]
7102f87e00  cmp x9,x8
7102f87e04  b.eq 0x7102f87e48
7102f87e08  mov x9,xzr
7102f87e0c  mov w10,#0x1
7102f87e10  ldr x12,[x19, #0x780]
7102f87e14  ldr x11,[x19, #0x778]
7102f87e18  sub x12,x12,x11
7102f87e1c  cmp x12,x9
7102f87e20  b.ls 0x7102f885d0
7102f87e24  ldrb w11,[x11, x9, LSL ]
7102f87e28  str w11,[x8, x9, LSL #0x2]
7102f87e2c  mov w9,w10
7102f87e30  ldp x8,x11,[x20, #0x30]
7102f87e34  sub x11,x11,x8
7102f87e38  asr x11,x11,#0x2
7102f87e3c  add w10,w10,#0x1
7102f87e40  cmp x11,x9
7102f87e44  b.hi 0x7102f87e10
7102f87e48  mov x28,x20
7102f87e4c  ldr x11,[x28, #0x48]!
7102f87e50  ldr x10,[x19, #0x748]
7102f87e54  ldr x8,[x19, #0x740]
7102f87e58  sub x9,x10,x8
7102f87e5c  mov x0,#0x6db7
7102f87e60  movk x0,#0xb6db, LSL #16
7102f87e64  movk x0,#0xdb6d, LSL #32
7102f87e68  movk x0,#0x6db6, LSL #48
7102f87e6c  str x26,[sp, #0x18]
7102f87e70  str x28,[sp, #0x8]
7102f87e74  asr x9,x9,#0x3
7102f87e78  mul x21,x9,x0
7102f87e7c  ldr x9,[x28, #0x8]
7102f87e80  sub x12,x9,x11
7102f87e84  asr x24,x12,#0x8
7102f87e88  subs x12,x21,x24
7102f87e8c  b.ls 0x7102f87edc
7102f87e90  ldr x8,[x20, #0x58]
7102f87e94  sub x10,x8,x9
7102f87e98  asr x10,x10,#0x8
7102f87e9c  cmp x10,x12
7102f87ea0  b.cs 0x7102f87ef4
7102f87ea4  lsr x9,x21,#0x38
7102f87ea8  cbnz x9,0x7102f885f8
7102f87eac  sub x8,x8,x11
7102f87eb0  asr x9,x8,#0x8
7102f87eb4  orr x10,xzr,#0x7ffffffffffffe
7102f87eb8  cmp x9,x10
7102f87ebc  b.hi 0x7102f87fec
7102f87ec0  asr x8,x8,#0x7
7102f87ec4  cmp x8,x21
7102f87ec8  csel x22,x21,x8,cc
7102f87ecc  cbz x22,0x7102f885a0
7102f87ed0  lsr x8,x22,#0x38
7102f87ed4  cbz x8,0x7102f87ff0
7102f87ed8  bl 0x71039c2650
7102f87edc  b.cs 0x7102f87ee8
7102f87ee0  add x9,x11,x21, LSL #0x8
7102f87ee4  str x9,[x20, #0x50]
7102f87ee8  cmp x10,x8
7102f87eec  b.ne 0x7102f881b8
7102f87ef0  b 0x7102f88570
7102f87ef4  adrp x17,0x71052a8000
7102f87ef8  ldr x17,[x17, #0xa80]
7102f87efc  mov x8,#0x2b3
7102f87f00  movk x8,#0xa2c5, LSL #16
7102f87f04  mov x10,#0x7a80
7102f87f08  movk x10,#0xfb99, LSL #16
7102f87f0c  mov x11,#0xfc4f
7102f87f10  movk x11,#0x25cb, LSL #16
7102f87f14  mov x12,#0x1fca
7102f87f18  movk x12,#0x1ed9, LSL #16
7102f87f1c  movk x8,#0x15, LSL #32
7102f87f20  movk x10,#0x7, LSL #32
7102f87f24  movk x11,#0x4, LSL #32
7102f87f28  movk x12,#0x3, LSL #32
7102f87f2c  sub x13,x24,x21
7102f87f30  orr x14,xzr,#0x3f8000003f800000
7102f87f34  orr w15,wzr,#0x3f800000
7102f87f38  orr w16,wzr,#0xe
7102f87f3c  orr w18,wzr,#0x3
7102f87f40  stp xzr,xzr,[x9, #0x10]
7102f87f44  adds x13,x13,#0x1
7102f87f48  stp xzr,xzr,[x9]
7102f87f4c  str w15,[x9, #0x40]
7102f87f50  str x12,[x9, #0x48]
7102f87f54  sturh wzr,[x9, #0x71]
7102f87f58  strb wzr,[x9, #0x54]
7102f87f5c  str wzr,[x9, #0x50]
7102f87f60  strb wzr,[x9, #0x73]
7102f87f64  strh wzr,[x9, #0x74]
7102f87f68  strh wzr,[x9, #0x80]
7102f87f6c  strb wzr,[x9, #0x70]
7102f87f70  str x8,[x9, #0x58]
7102f87f74  strb w16,[x9, #0x76]
7102f87f78  str xzr,[x9, #0x78]
7102f87f7c  str x12,[x9, #0x88]
7102f87f80  stp xzr,x14,[x9, #0x30]
7102f87f84  stp xzr,xzr,[x9, #0x20]
7102f87f88  stp xzr,xzr,[x9, #0x60]
7102f87f8c  ldr q0,[x17]
7102f87f90  strb wzr,[x9, #0xa6]
7102f87f94  strh wzr,[x9, #0xa4]
7102f87f98  str wzr,[x9, #0xa0]
7102f87f9c  str x14,[x9, #0xa8]
7102f87fa0  str wzr,[x9, #0xb0]
7102f87fa4  strh wzr,[x9, #0xc8]
7102f87fa8  strh wzr,[x9, #0xcc]
7102f87fac  str w3,[x9, #0xd0]
7102f87fb0  stur xzr,[x9, #0xe4]
7102f87fb4  stur xzr,[x9, #0xdc]
7102f87fb8  stur xzr,[x9, #0xd4]
7102f87fbc  str w25,[x9, #0xec]
7102f87fc0  strh w18,[x9, #0xf0]
7102f87fc4  str w15,[x9, #0xf4]
7102f87fc8  strh wzr,[x9, #0xf8]
7102f87fcc  strb wzr,[x9, #0xfa]
7102f87fd0  stp x11,x10,[x9, #0xb8]
7102f87fd4  str q0,[x9, #0x90]
7102f87fd8  ldr x9,[x20, #0x50]
7102f87fdc  add x9,x9,#0x100
7102f87fe0  str x9,[x20, #0x50]
7102f87fe4  b.ne 0x7102f87f40
7102f87fe8  b 0x7102f881a8
7102f87fec  orr x22,xzr,#0xffffffffffffff
7102f87ff0  lsl x8,x22,#0x8
7102f87ff4  cmp x8,#0x0
7102f87ff8  csinc x23,x8,xzr,ne
7102f87ffc  mov w0,#0x10
7102f88000  mov x1,x23
7102f88004  bl 0x710392e290
7102f88008  cbnz x0,0x7102f8804c
7102f8800c  adrp x8,0x7105332000
7102f88010  ldr x0,[x8, #0xf00]
7102f88014  cbz x0,0x7102f88048
7102f88018  str wzr,[sp, #0xc0]
7102f8801c  stur x23,[x29, #-0xa0]
7102f88020  ldr x8,[x0]
7102f88024  ldr x8,[x8, #0x30]
7102f88028  add x1,sp,#0xc0
7102f8802c  sub x2,x29,#0xa0
7102f88030  blr x8
7102f88034  tbz w0,#0x0,0x7102f88048
7102f88038  mov w0,#0x10
7102f8803c  mov x1,x23
7102f88040  bl 0x710392e290
7102f88044  cbnz x0,0x7102f8804c
7102f88048  mov x0,xzr
7102f8804c  mov w3,#0xbf800000
7102f88050  adrp x14,0x71052a8000
7102f88054  ldr x14,[x14, #0xa80]
7102f88058  ldr q0,[x14]
7102f8805c  add x9,x0,x24, LSL #0x8
7102f88060  mov x8,#0x2b3
7102f88064  movk x8,#0xa2c5, LSL #16
7102f88068  mov x10,#0x7a80
7102f8806c  movk x10,#0xfb99, LSL #16
7102f88070  mov x11,#0xfc4f
7102f88074  movk x11,#0x25cb, LSL #16
7102f88078  mov x12,#0x1fca
7102f8807c  movk x12,#0x1ed9, LSL #16
7102f88080  movk x8,#0x15, LSL #32
7102f88084  movk x10,#0x7, LSL #32
7102f88088  movk x11,#0x4, LSL #32
7102f8808c  movk x12,#0x3, LSL #32
7102f88090  sub x13,x24,x21
7102f88094  orr x14,xzr,#0x3f8000003f800000
7102f88098  orr w15,wzr,#0x3f800000
7102f8809c  orr w16,wzr,#0xe
7102f880a0  orr w17,wzr,#0x3
7102f880a4  mov x18,x9
7102f880a8  stp xzr,xzr,[x18, #0x10]
7102f880ac  adds x13,x13,#0x1
7102f880b0  stp xzr,xzr,[x18]
7102f880b4  str w15,[x18, #0x40]
7102f880b8  str x12,[x18, #0x48]
7102f880bc  sturh wzr,[x18, #0x71]
7102f880c0  strb wzr,[x18, #0x54]
7102f880c4  str wzr,[x18, #0x50]
7102f880c8  strb wzr,[x18, #0x73]
7102f880cc  strh wzr,[x18, #0x74]
7102f880d0  strh wzr,[x18, #0x80]
7102f880d4  strb wzr,[x18, #0x70]
7102f880d8  str x8,[x18, #0x58]
7102f880dc  strb w16,[x18, #0x76]
7102f880e0  str xzr,[x18, #0x78]
7102f880e4  str x12,[x18, #0x88]
7102f880e8  str wzr,[x18, #0xa0]
7102f880ec  strb wzr,[x18, #0xa6]
7102f880f0  strh wzr,[x18, #0xa4]
7102f880f4  str x14,[x18, #0xa8]
7102f880f8  str wzr,[x18, #0xb0]
7102f880fc  strh wzr,[x18, #0xc8]
7102f88100  strh wzr,[x18, #0xcc]
7102f88104  str w3,[x18, #0xd0]
7102f88108  stur xzr,[x18, #0xe4]
7102f8810c  stur xzr,[x18, #0xdc]
7102f88110  stur xzr,[x18, #0xd4]
7102f88114  str w25,[x18, #0xec]
7102f88118  strh w17,[x18, #0xf0]
7102f8811c  str w15,[x18, #0xf4]
7102f88120  strh wzr,[x18, #0xf8]
7102f88124  strb wzr,[x18, #0xfa]
7102f88128  stp xzr,x14,[x18, #0x30]
7102f8812c  stp xzr,xzr,[x18, #0x20]
7102f88130  stp xzr,xzr,[x18, #0x60]
7102f88134  str q0,[x18, #0x90]
7102f88138  stp x11,x10,[x18, #0xb8]
7102f8813c  add x18,x18,#0x100
7102f88140  b.ne 0x7102f880a8
7102f88144  ldp x23,x8,[x20, #0x48]
7102f88148  add x22,x0,x22, LSL #0x8
7102f8814c  add x21,x0,x21, LSL #0x8
7102f88150  sub x2,x8,x23
7102f88154  sub x24,x9,x2
7102f88158  cmp x2,#0x1
7102f8815c  b.lt 0x7102f88170
7102f88160  mov x0,x24
7102f88164  mov x1,x23
7102f88168  bl 0x71039c00e0
7102f8816c  mov w3,#0xbf800000
7102f88170  mov x0,#0x6db7
7102f88174  movk x0,#0xb6db, LSL #16
7102f88178  str x22,[x20, #0x58]
7102f8817c  movk x0,#0xdb6d, LSL #32
7102f88180  movk x0,#0x6db6, LSL #48
7102f88184  stp x24,x21,[x20, #0x48]
7102f88188  cbz x23,0x7102f881a8
7102f8818c  mov x0,x23
7102f88190  bl 0x710392eb40
7102f88194  mov x0,#0x6db7
7102f88198  movk x0,#0xb6db, LSL #16
7102f8819c  movk x0,#0xdb6d, LSL #32
7102f881a0  movk x0,#0x6db6, LSL #48
7102f881a4  mov w3,#0xbf800000
7102f881a8  ldr x10,[x19, #0x748]
7102f881ac  ldr x8,[x19, #0x740]
7102f881b0  cmp x10,x8
7102f881b4  b.eq 0x7102f88570
7102f881b8  adrp x2,0x71052a8000
7102f881bc  ldr x2,[x2, #0xa80]
7102f881c0  movi d2,#0x0
7102f881c4  mov x12,#0x2b3
7102f881c8  movk x12,#0xa2c5, LSL #16
7102f881cc  mov x13,#0x7a80
7102f881d0  movk x13,#0xfb99, LSL #16
7102f881d4  mov x14,#0xfc4f
7102f881d8  movk x14,#0x25cb, LSL #16
7102f881dc  mov x26,#0x1fca
7102f881e0  movk x26,#0x1ed9, LSL #16
7102f881e4  mov x9,xzr
7102f881e8  movk x12,#0x15, LSL #32
7102f881ec  movk x13,#0x7, LSL #32
7102f881f0  movk x14,#0x4, LSL #32
7102f881f4  mov w22,#0x1
7102f881f8  movk x26,#0x3, LSL #32
7102f881fc  orr x25,xzr,#0x3f8000003f800000
7102f88200  mov w15,#0x169
7102f88204  orr w28,wzr,#0x3f800000
7102f88208  mov w16,#0x3f
7102f8820c  movk w16,#0x3, LSL #16
7102f88210  mov w17,#0x19
7102f88214  mov w18,#0x100
7102f88218  mov w1,#0x10000
7102f8821c  orr w4,wzr,#0xe
7102f88220  orr w5,wzr,#0x3
7102f88224  orr w24,wzr,#0x38
7102f88228  ldp x10,x11,[x20, #0x48]
7102f8822c  sub x11,x11,x10
7102f88230  asr x11,x11,#0x8
7102f88234  cmp x11,x9
7102f88238  b.ls 0x7102f885d8
7102f8823c  adrp x11,0x71052a8000
7102f88240  ldr x11,[x11, #0xa88]
7102f88244  ldr q0,[x11]
7102f88248  mov v1.16B,v2.16B
7102f8824c  mov v1.S[0x0],v0.S[0x2]
7102f88250  mov v0.D[0x1],v1.D[0x0]
7102f88254  add x23,x10,x9, LSL #0x8
7102f88258  mov w10,#0xffffffff
7102f8825c  mov v1.16B,v2.16B
7102f88260  madd x8,x9,x24,x8
7102f88264  str q0,[x23]
7102f88268  ldr q0,[x11]
7102f8826c  stp x25,x15,[x23, #0x20]
7102f88270  stp xzr,x25,[x23, #0x30]
7102f88274  str w28,[x23, #0x40]
7102f88278  mov v1.S[0x0],v0.S[0x2]
7102f8827c  str x26,[x23, #0x48]
7102f88280  mov v0.D[0x1],v1.D[0x0]
7102f88284  str w16,[x23, #0x50]
7102f88288  str q0,[x23, #0x10]
7102f8828c  strb w17,[x23, #0x54]
7102f88290  str x12,[x23, #0x58]
7102f88294  strh w18,[x23, #0x60]
7102f88298  stur w1,[x23, #0x62]
7102f8829c  strb wzr,[x23, #0x66]
7102f882a0  strh wzr,[x23, #0x74]
7102f882a4  strb wzr,[x23, #0x81]
7102f882a8  strb w4,[x23, #0x76]
7102f882ac  stur xzr,[x23, #0x6c]
7102f882b0  stur xzr,[x23, #0x67]
7102f882b4  str xzr,[x23, #0x78]
7102f882b8  str x26,[x23, #0x88]
7102f882bc  ldr q0,[x2]
7102f882c0  str wzr,[x23, #0xa0]
7102f882c4  strb wzr,[x23, #0x80]
7102f882c8  stp x14,x13,[x23, #0xb8]
7102f882cc  strh wzr,[x23, #0xa4]
7102f882d0  str q0,[x23, #0x90]
7102f882d4  stur x28,[x23, #0xac]
7102f882d8  strh wzr,[x23, #0xc8]
7102f882dc  strh wzr,[x23, #0xcc]
7102f882e0  str w3,[x23, #0xd0]
7102f882e4  stur xzr,[x23, #0xe4]
7102f882e8  stur xzr,[x23, #0xdc]
7102f882ec  stur xzr,[x23, #0xd4]
7102f882f0  str w10,[x23, #0xec]
7102f882f4  strh w5,[x23, #0xf0]
7102f882f8  str w28,[x23, #0xf4]
7102f882fc  strb wzr,[x23, #0xf8]
7102f88300  sturh wzr,[x23, #0xf9]
7102f88304  ldr s0,[x8]
7102f88308  scvtf s0,s0
7102f8830c  str s0,[x23, #0x20]
7102f88310  ldr w9,[x8, #0x4]
7102f88314  str w9,[x23, #0x28]
7102f88318  ldr w9,[x8, #0x8]
7102f8831c  str w9,[x23, #0x2c]
7102f88320  ldr w9,[x8, #0xc]
7102f88324  str w9,[x23, #0x30]
7102f88328  ldr w9,[x8, #0x10]
7102f8832c  str w9,[x23, #0x34]
7102f88330  ldr w9,[x8, #0x14]
7102f88334  str w9,[x23, #0x78]
7102f88338  ldr w9,[x8, #0x18]
7102f8833c  str w9,[x23, #0x3c]
7102f88340  ldrb w9,[x8, #0x1c]
7102f88344  strb w9,[x23, #0x6d]
7102f88348  ldr x9,[x8, #0x20]
7102f8834c  str x9,[x23, #0x58]
7102f88350  ldr w9,[x8, #0x2c]
7102f88354  strb w9,[x23, #0x61]
7102f88358  ldr w9,[x8, #0x28]
7102f8835c  strb w9,[x23, #0x60]
7102f88360  ldrb w9,[x19, #0x770]
7102f88364  strb w9,[x23, #0x64]
7102f88368  ldr w9,[x8, #0x34]
7102f8836c  strh w9,[x23, #0x74]
7102f88370  ldr w8,[x8, #0x30]
7102f88374  strb w8,[x23, #0x6a]
7102f88378  ldr x9,[x19, #0x780]
7102f8837c  ldr x8,[x19, #0x778]
7102f88380  sub x9,x9,x8
7102f88384  cmp x9,#0x8
7102f88388  b.ls 0x7102f885c0
7102f8838c  ldrb w10,[x8, #0x8]
7102f88390  sub w21,w22,#0x1
7102f88394  cmp w21,w10
7102f88398  b.ne 0x7102f88470
7102f8839c  ldr x10,[sp, #0x10]
7102f883a0  ldr x10,[x10]
7102f883a4  cbz x10,0x7102f883b4
7102f883a8  ldr w11,[x10, #0xe0]
7102f883ac  cmp w11,#0x9
7102f883b0  b.eq 0x7102f883dc
7102f883b4  ldr x10,[x27, #0x3b8]
7102f883b8  cbz x10,0x7102f883c8
7102f883bc  ldr w11,[x10, #0xe0]
7102f883c0  cmp w11,#0x9
7102f883c4  b.eq 0x7102f883dc
7102f883c8  ldr x10,[x27, #0x3c0]
7102f883cc  cbz x10,0x7102f88470
7102f883d0  ldr w11,[x10, #0xe0]
7102f883d4  cmp w11,#0x9
7102f883d8  b.ne 0x7102f88470
7102f883dc  ldr x10,[x10, #0x38]
7102f883e0  cbz x10,0x7102f88470
7102f883e4  ldr x0,[x10, #0xa0]
7102f883e8  ldr x8,[x0]
7102f883ec  ldr x8,[x8, #0x68]
7102f883f0  mov w1,wzr
7102f883f4  mov w2,wzr
7102f883f8  mov x3,x23
7102f883fc  blr x8
7102f88400  adrp x2,0x71052a8000
7102f88404  ldr x2,[x2, #0xa80]
7102f88408  ldr x9,[x19, #0x780]
7102f8840c  ldr x8,[x19, #0x778]
7102f88410  movi d2,#0x0
7102f88414  mov x14,#0xfc4f
7102f88418  movk x14,#0x25cb, LSL #16
7102f8841c  mov x13,#0x7a80
7102f88420  movk x13,#0xfb99, LSL #16
7102f88424  mov x12,#0x2b3
7102f88428  movk x12,#0xa2c5, LSL #16
7102f8842c  mov x0,#0x6db7
7102f88430  movk x0,#0xb6db, LSL #16
7102f88434  orr w5,wzr,#0x3
7102f88438  orr w4,wzr,#0xe
7102f8843c  mov w1,#0x10000
7102f88440  mov w18,#0x100
7102f88444  mov w17,#0x19
7102f88448  mov w16,#0x3f
7102f8844c  movk w16,#0x3, LSL #16
7102f88450  mov w15,#0x169
7102f88454  movk x14,#0x4, LSL #32
7102f88458  movk x13,#0x7, LSL #32
7102f8845c  movk x12,#0x15, LSL #32
7102f88460  movk x0,#0xdb6d, LSL #32
7102f88464  movk x0,#0x6db6, LSL #48
7102f88468  mov w3,#0xbf800000
7102f8846c  sub x9,x9,x8
7102f88470  cmp x9,#0x9
7102f88474  b.ls 0x7102f885c0
7102f88478  ldrb w8,[x8, #0x9]
7102f8847c  cmp w21,w8
7102f88480  b.ne 0x7102f8854c
7102f88484  ldr x8,[sp, #0x10]
7102f88488  ldr x8,[x8]
7102f8848c  cbz x8,0x7102f8849c
7102f88490  ldr w9,[x8, #0xe0]
7102f88494  cmp w9,#0xa
7102f88498  b.eq 0x7102f884c4
7102f8849c  ldr x8,[x27, #0x3b8]
7102f884a0  cbz x8,0x7102f884b0
7102f884a4  ldr w9,[x8, #0xe0]
7102f884a8  cmp w9,#0xa
7102f884ac  b.eq 0x7102f884c4
7102f884b0  ldr x8,[x27, #0x3c0]
7102f884b4  cbz x8,0x7102f8854c
7102f884b8  ldr w9,[x8, #0xe0]
7102f884bc  cmp w9,#0xa
7102f884c0  b.ne 0x7102f8854c
7102f884c4  ldr x8,[x8, #0x38]
7102f884c8  cbz x8,0x7102f8854c
7102f884cc  ldr x0,[x8, #0xa0]
7102f884d0  ldr x8,[x0]
7102f884d4  ldr x8,[x8, #0x68]
7102f884d8  mov w1,wzr
7102f884dc  mov w2,wzr
7102f884e0  mov x3,x23
7102f884e4  blr x8
7102f884e8  adrp x2,0x71052a8000
7102f884ec  ldr x2,[x2, #0xa80]
7102f884f0  movi d2,#0x0
7102f884f4  mov x14,#0xfc4f
7102f884f8  movk x14,#0x25cb, LSL #16
7102f884fc  mov x13,#0x7a80
7102f88500  movk x13,#0xfb99, LSL #16
7102f88504  mov x12,#0x2b3
7102f88508  movk x12,#0xa2c5, LSL #16
7102f8850c  mov x0,#0x6db7
7102f88510  movk x0,#0xb6db, LSL #16
7102f88514  orr w5,wzr,#0x3
7102f88518  orr w4,wzr,#0xe
7102f8851c  mov w1,#0x10000
7102f88520  mov w18,#0x100
7102f88524  mov w17,#0x19
7102f88528  mov w16,#0x3f
7102f8852c  movk w16,#0x3, LSL #16
7102f88530  mov w15,#0x169
7102f88534  movk x14,#0x4, LSL #32
7102f88538  movk x13,#0x7, LSL #32
7102f8853c  movk x12,#0x15, LSL #32
7102f88540  movk x0,#0xdb6d, LSL #32
7102f88544  movk x0,#0x6db6, LSL #48
7102f88548  mov w3,#0xbf800000
7102f8854c  ldr x10,[x19, #0x748]
7102f88550  ldr x8,[x19, #0x740]
7102f88554  sub x10,x10,x8
7102f88558  asr x10,x10,#0x3
7102f8855c  mul x10,x10,x0
7102f88560  mov w9,w22
7102f88564  add w22,w22,#0x1
7102f88568  cmp x10,x9
7102f8856c  b.hi 0x7102f88228
7102f88570  ldp x29,x30,[sp, #0x1a0]
7102f88574  ldp x20,x19,[sp, #0x190]
7102f88578  ldp x22,x21,[sp, #0x180]
7102f8857c  ldp x24,x23,[sp, #0x170]
7102f88580  ldp x26,x25,[sp, #0x160]
7102f88584  ldp x28,x27,[sp, #0x150]
7102f88588  add sp,sp,#0x1b0
7102f8858c  ret
7102f88590  mov x10,x8
7102f88594  cmp x9,#0x3
7102f88598  b.cs 0x7102f87d40
7102f8859c  b 0x7102f87d6c
7102f885a0  mov x0,xzr
7102f885a4  b 0x7102f88050
7102f885a8  sub x0,x29,#0xa0
7102f885ac  bl 0x71039c1330
7102f885b0  mov x0,x22
7102f885b4  bl 0x71039c1330
7102f885b8  add x0,x8,#0x1a8
7102f885bc  bl 0x71039c1330
7102f885c0  ldr x0,[sp, #0x18]
7102f885c4  bl 0x71039c1330
7102f885c8  mov x0,x20
7102f885cc  bl 0x71039c0c00
7102f885d0  mov x0,x26
7102f885d4  bl 0x71039c1330
7102f885d8  ldr x0,[sp, #0x8]
7102f885dc  bl 0x71039c1330
7102f885e0  add x0,x19,#0x790
7102f885e4  bl 0x71039c1330
7102f885e8  add x0,x19,#0x1a8
7102f885ec  bl 0x71039c1330
7102f885f0  sub x0,x29,#0xa0
7102f885f4  bl 0x71039c0c00
7102f885f8  mov x0,x28
7102f885fc  bl 0x71039c0c00
