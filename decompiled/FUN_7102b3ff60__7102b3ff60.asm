// addr:      7102b3ff60
// offset:    0x2b3ff60
// name:      FUN_7102b3ff60
// mangled:   
// size:      976

7102b3ff60  sub sp,sp,#0x1c0
7102b3ff64  stp x28,x21,[sp, #0x190]
7102b3ff68  stp x20,x19,[sp, #0x1a0]
7102b3ff6c  stp x29,x30,[sp, #0x1b0]
7102b3ff70  add x29,sp,#0x1b0
7102b3ff74  mov x19,x0
7102b3ff78  bl 0x71025e5bd0
7102b3ff7c  mov x8,sp
7102b3ff80  add x8,x8,#0x155
7102b3ff84  strb wzr,[sp, #0x170]
7102b3ff88  stp xzr,xzr,[sp, #0x160]
7102b3ff8c  movi v0.2D,#0x0
7102b3ff90  str xzr,[x8]
7102b3ff94  adrp x8,0x7105115000
7102b3ff98  add x8,x8,#0xf48
7102b3ff9c  ldr x9,[x8, #0x10]
7102b3ffa0  str x9,[sp, #0x10]
7102b3ffa4  strb wzr,[sp, #0x15c]
7102b3ffa8  ldp x9,x8,[x8]
7102b3ffac  mov v2.16B,v0.16B
7102b3ffb0  stp xzr,xzr,[sp, #0x148]
7102b3ffb4  mov w1,#0x310
7102b3ffb8  stp xzr,xzr,[sp, #0x138]
7102b3ffbc  mov w0,#0x10
7102b3ffc0  add x20,x19,#0x770
7102b3ffc4  stp xzr,xzr,[sp, #0x118]
7102b3ffc8  stp xzr,xzr,[sp, #0x108]
7102b3ffcc  stp xzr,xzr,[sp, #0xf8]
7102b3ffd0  stp xzr,xzr,[sp, #0xe8]
7102b3ffd4  stp x9,x8,[sp]
7102b3ffd8  adrp x8,0x7105115000
7102b3ffdc  add x8,x8,#0xf60
7102b3ffe0  ldp x9,x10,[x8, #0x10]
7102b3ffe4  stp x9,x10,[sp, #0x28]
7102b3ffe8  ldp x9,x8,[x8]
7102b3ffec  stp xzr,xzr,[sp, #0x128]
7102b3fff0  stp xzr,xzr,[sp, #0xd8]
7102b3fff4  stp xzr,xzr,[sp, #0xc8]
7102b3fff8  stp xzr,xzr,[sp, #0xb8]
7102b3fffc  stp xzr,xzr,[sp, #0xa8]
7102b40000  stp x9,x8,[sp, #0x18]
7102b40004  adrp x8,0x7105115000
7102b40008  add x8,x8,#0xf80
7102b4000c  ldp x9,x10,[x8]
7102b40010  ldp x11,x12,[x8, #0x10]
7102b40014  stp x11,x12,[sp, #0x58]
7102b40018  stp x9,x10,[sp, #0x48]
7102b4001c  ldp x9,x10,[x8, #0x20]
7102b40020  ldp x11,x8,[x8, #0x30]
7102b40024  stp x11,x8,[sp, #0x78]
7102b40028  adrp x8,0x71042e5000
7102b4002c  add x8,x8,#0x319
7102b40030  str x8,[sp, #0x38]
7102b40034  adrp x8,0x71042c2000
7102b40038  add x8,x8,#0xec5
7102b4003c  str x8,[sp, #0x40]
7102b40040  orr w8,wzr,#0x6
7102b40044  str w8,[sp, #0x88]
7102b40048  orr w8,wzr,#0x7
7102b4004c  str w8,[sp, #0x8c]
7102b40050  mov w8,#0x4
7102b40054  str w8,[sp, #0x90]
7102b40058  mov w8,#0x5
7102b4005c  str w8,[sp, #0x94]
7102b40060  mov w8,#0x8
7102b40064  stp x9,x10,[sp, #0x68]
7102b40068  mov w9,#0xffffffff
7102b4006c  orr w10,wzr,#0x3
7102b40070  stp w8,w9,[sp, #0x98]
7102b40074  stp w8,w9,[sp, #0xa0]
7102b40078  ldr x8,[x19, #0x7f0]
7102b4007c  mov x9,x8
7102b40080  ldr s1,[x8, #0x8]
7102b40084  ld1 {v2.S}[0],[x9], #0x4
7102b40088  fcmp s1,#0.0
7102b4008c  csinc w12,w10,wzr,ls
7102b40090  ld1 {v2.S}[1],[x9]
7102b40094  mov w9,#0x2
7102b40098  csel w11,wzr,w9,hi
7102b4009c  stp w11,w12,[sp, #0xa8]
7102b400a0  mov v2.S[0x2],v1.S[0x0]
7102b400a4  mov v1.16B,v0.16B
7102b400a8  str q2,[sp, #0xd0]
7102b400ac  ldr w11,[x8, #0xc]
7102b400b0  str w11,[sp, #0x120]
7102b400b4  ldr w11,[x8, #0x10]
7102b400b8  str w11,[sp, #0x134]
7102b400bc  ldr w11,[x8, #0x14]
7102b400c0  str w11,[sp, #0x148]
7102b400c4  add x11,x8,#0x18
7102b400c8  ld1 {v1.S}[0],[x11]
7102b400cc  add x11,x8,#0x1c
7102b400d0  ld1 {v1.S}[1],[x11]
7102b400d4  ldr s2,[x8, #0x20]
7102b400d8  mov v1.S[0x2],v2.S[0x0]
7102b400dc  fcmp s2,#0.0
7102b400e0  csel w11,wzr,w9,hi
7102b400e4  csinc w12,w10,wzr,ls
7102b400e8  str q1,[sp, #0xe0]
7102b400ec  stp w11,w12,[sp, #0xb0]
7102b400f0  ldr w11,[x8, #0x24]
7102b400f4  str w11,[sp, #0x124]
7102b400f8  ldr w11,[x8, #0x28]
7102b400fc  str w11,[sp, #0x138]
7102b40100  ldr w11,[x8, #0x2c]
7102b40104  mov v1.16B,v0.16B
7102b40108  str w11,[sp, #0x14c]
7102b4010c  add x11,x8,#0x30
7102b40110  ld1 {v1.S}[0],[x11]
7102b40114  add x11,x8,#0x34
7102b40118  ld1 {v1.S}[1],[x11]
7102b4011c  ldr s2,[x8, #0x38]
7102b40120  mov v1.S[0x2],v2.S[0x0]
7102b40124  fcmp s2,#0.0
7102b40128  csel w11,wzr,w9,hi
7102b4012c  csinc w12,w10,wzr,ls
7102b40130  stp w11,w12,[sp, #0xb8]
7102b40134  str q1,[sp, #0xf0]
7102b40138  ldr w11,[x8, #0x3c]
7102b4013c  str w11,[sp, #0x128]
7102b40140  ldr w11,[x8, #0x40]
7102b40144  str w11,[sp, #0x13c]
7102b40148  ldr w11,[x8, #0x44]
7102b4014c  mov v1.16B,v0.16B
7102b40150  str w11,[sp, #0x150]
7102b40154  add x11,x8,#0x48
7102b40158  ldr s2,[x8, #0x50]
7102b4015c  ld1 {v1.S}[0],[x11]
7102b40160  add x11,x8,#0x4c
7102b40164  fcmp s2,#0.0
7102b40168  ld1 {v1.S}[1],[x11]
7102b4016c  csel w11,wzr,w9,hi
7102b40170  mov v1.S[0x2],v2.S[0x0]
7102b40174  csinc w12,w10,wzr,ls
7102b40178  stp w11,w12,[sp, #0xc0]
7102b4017c  str q1,[sp, #0x100]
7102b40180  ldr w11,[x8, #0x54]
7102b40184  str w11,[sp, #0x12c]
7102b40188  ldr w11,[x8, #0x58]
7102b4018c  str w11,[sp, #0x140]
7102b40190  ldr w11,[x8, #0x5c]
7102b40194  mov v1.16B,v0.16B
7102b40198  str w11,[sp, #0x154]
7102b4019c  add x11,x8,#0x60
7102b401a0  ldr s2,[x8, #0x68]
7102b401a4  ld1 {v1.S}[0],[x11]
7102b401a8  add x11,x8,#0x64
7102b401ac  fcmp s2,#0.0
7102b401b0  ld1 {v1.S}[1],[x11]
7102b401b4  mov v1.S[0x2],v2.S[0x0]
7102b401b8  csel w9,wzr,w9,hi
7102b401bc  csinc w10,w10,wzr,ls
7102b401c0  stp w9,w10,[sp, #0xc8]
7102b401c4  str q1,[sp, #0x110]
7102b401c8  ldr w9,[x8, #0x6c]
7102b401cc  str w9,[sp, #0x130]
7102b401d0  ldr w9,[x8, #0x70]
7102b401d4  str w9,[sp, #0x144]
7102b401d8  ldr w8,[x8, #0x74]
7102b401dc  str w8,[sp, #0x158]
7102b401e0  add x8,x19,#0x7c8
7102b401e4  ld1 {v0.S}[0],[x8]
7102b401e8  add x8,x19,#0x7cc
7102b401ec  ld1 {v0.S}[1],[x8]
7102b401f0  add x8,x19,#0x7d0
7102b401f4  ld1 {v0.S}[2],[x8]
7102b401f8  str q0,[sp, #0x160]
7102b401fc  bl 0x710392e290
7102b40200  mov x21,x0
7102b40204  cbnz x0,0x7102b40250
7102b40208  adrp x8,0x7105332000
7102b4020c  ldr x0,[x8, #0xf00]
7102b40210  cbz x0,0x7102b4024c
7102b40214  mov w8,#0x310
7102b40218  stur wzr,[x29, #-0x24]
7102b4021c  sub x1,x29,#0x24
7102b40220  stur x8,[x29, #-0x30]
7102b40224  ldr x8,[x0]
7102b40228  ldr x8,[x8, #0x30]
7102b4022c  sub x2,x29,#0x30
7102b40230  blr x8
7102b40234  tbz w0,#0x0,0x7102b4024c
7102b40238  mov w1,#0x310
7102b4023c  mov w0,#0x10
7102b40240  bl 0x710392e290
7102b40244  mov x21,x0
7102b40248  cbnz x0,0x7102b40250
7102b4024c  mov x21,xzr
7102b40250  ldr x4,[x19, #0x338]
7102b40254  mov x3,sp
7102b40258  mov x0,x21
7102b4025c  mov x1,x19
7102b40260  mov x2,x20
7102b40264  bl 0x7102b40c50
7102b40268  ldr x0,[x19, #0x808]
7102b4026c  str x21,[x19, #0x808]
7102b40270  cbz x0,0x7102b40280
7102b40274  ldr x8,[x0]
7102b40278  ldr x8,[x8, #0x8]
7102b4027c  blr x8
7102b40280  ldr w8,[x19, #0x734]
7102b40284  cmp w8,#0x1
7102b40288  b.ne 0x7102b402d0
7102b4028c  ldr x9,[x19, #0x310]
7102b40290  ldp x8,x9,[x9, #0xd0]
7102b40294  cmp x8,x9
7102b40298  b.eq 0x7102b402d0
7102b4029c  mov x10,#0xd015
7102b402a0  movk x10,#0x178, LSL #16
7102b402a4  movk x10,#0x1f, LSL #32
7102b402a8  ldr w11,[x8, #0x8]
7102b402ac  cmp w11,#0x1
7102b402b0  b.hi 0x7102b402c4
7102b402b4  ldr x19,[x8]
7102b402b8  ldr x11,[x19, #0x68]
7102b402bc  cmp x11,x10
7102b402c0  b.eq 0x7102b402e4
7102b402c4  add x8,x8,#0x10
7102b402c8  cmp x9,x8
7102b402cc  b.ne 0x7102b402a8
7102b402d0  ldp x29,x30,[sp, #0x1b0]
7102b402d4  ldp x20,x19,[sp, #0x1a0]
7102b402d8  ldp x28,x21,[sp, #0x190]
7102b402dc  add sp,sp,#0x1c0
7102b402e0  ret
7102b402e4  cbz x19,0x7102b402d0
7102b402e8  add x0,x19,#0x108
7102b402ec  strb wzr,[x19, #0x110]
7102b402f0  bl 0x71025e9d50
7102b402f4  ldrb w8,[x19, #0xe0]
7102b402f8  cbz w8,0x7102b4030c
7102b402fc  ldr x8,[x19, #0xc8]
7102b40300  cbz x8,0x7102b4030c
7102b40304  mov w9,#0x101
7102b40308  strh w9,[x8, #0x30]
7102b4030c  ldr x8,[x19, #0xd8]
7102b40310  cbz x8,0x7102b4031c
7102b40314  mov w9,#0x1
7102b40318  strb w9,[x8, #0x21]
7102b4031c  ldrb w8,[x19, #0xe0]
7102b40320  cbz w8,0x7102b402d0
7102b40324  ldr x8,[x19, #0xb0]
7102b40328  strb wzr,[x8, #0x10]
7102b4032c  b 0x7102b402d0
