// addr:      7101da9e30
// offset:    0x1da9e30
// name:      FUN_7101da9e30
// mangled:   
// size:      5952

7101da9e30  sub sp,sp,#0x1c0
7101da9e34  str d12,[sp, #0x130]
7101da9e38  stp d11,d10,[sp, #0x140]
7101da9e3c  stp d9,d8,[sp, #0x150]
7101da9e40  stp x28,x27,[sp, #0x160]
7101da9e44  stp x26,x25,[sp, #0x170]
7101da9e48  stp x24,x23,[sp, #0x180]
7101da9e4c  stp x22,x21,[sp, #0x190]
7101da9e50  stp x20,x19,[sp, #0x1a0]
7101da9e54  stp x29,x30,[sp, #0x1b0]
7101da9e58  add x29,sp,#0x1b0
7101da9e5c  ldr w8,[x0, #0xe0]
7101da9e60  cmp w8,w1
7101da9e64  b.ne 0x7101dab530
7101da9e68  ldr x22,[x0, #0x430]
7101da9e6c  ldr x23,[x0, #0x438]
7101da9e70  mov w24,w3
7101da9e74  mov x20,x2
7101da9e78  mov x19,x0
7101da9e7c  cmp x23,x22
7101da9e80  b.eq 0x7101da9ed0
7101da9e84  mov w26,w24
7101da9e88  adrp x24,0x710523d000
7101da9e8c  add x24,x24,#0x988
7101da9e90  adrp x25,0x710523d000
7101da9e94  add x25,x25,#0x9a8
7101da9e98  str x24,[x23, #-0x18]!
7101da9e9c  ldr x21,[x23, #0x8]
7101da9ea0  str xzr,[x23, #0x8]
7101da9ea4  cbz x21,0x7101da9ec0
7101da9ea8  ldr x0,[x21, #0x18]
7101da9eac  stp x25,xzr,[x21, #0x10]
7101da9eb0  cbz x0,0x7101da9eb8
7101da9eb4  bl 0x710392eb40
7101da9eb8  mov x0,x21
7101da9ebc  bl 0x710392eb40
7101da9ec0  cmp x22,x23
7101da9ec4  b.ne 0x7101da9e98
7101da9ec8  ldr w1,[x19, #0xe0]
7101da9ecc  mov w24,w26
7101da9ed0  cmp w1,#0x4
7101da9ed4  str x22,[x19, #0x438]
7101da9ed8  str wzr,[x19, #0x448]
7101da9edc  b.cs 0x7101dab56c
7101da9ee0  mov w9,#0x54
7101da9ee4  umaddl x9,w1,w9,x19
7101da9ee8  ldr x10,[x20]
7101da9eec  ldrh w11,[x20, #0x8]
7101da9ef0  mov w8,w1
7101da9ef4  add x1,x9,#0x268
7101da9ef8  strh w11,[x9, #0x270]
7101da9efc  str x10,[x9, #0x268]
7101da9f00  mov w9,#0x54
7101da9f04  cmp x1,x20
7101da9f08  b.eq 0x7101da9f50
7101da9f0c  madd x21,x8,x9,x19
7101da9f10  add x0,x21,#0x274
7101da9f14  add x1,x20,#0x14
7101da9f18  bl 0x7101696040
7101da9f1c  ldr w8,[x19, #0xe0]
7101da9f20  ldur x11,[x20, #0x44]
7101da9f24  add x9,x21,#0x2ac
7101da9f28  ldur x12,[x20, #0x49]
7101da9f2c  add x10,x21,#0x2b1
7101da9f30  cmp w8,#0x3
7101da9f34  str x12,[x10]
7101da9f38  str x11,[x9]
7101da9f3c  b.hi 0x7101dab56c
7101da9f40  mov w9,#0x54
7101da9f44  madd x8,x8,x9,x19
7101da9f48  add x1,x8,#0x268
7101da9f4c  b 0x7101da9f6c
7101da9f50  madd x8,x8,x9,x19
7101da9f54  ldur x10,[x20, #0x44]
7101da9f58  ldur x11,[x20, #0x49]
7101da9f5c  add x9,x8,#0x2ac
7101da9f60  add x8,x8,#0x2b1
7101da9f64  str x11,[x8]
7101da9f68  str x10,[x9]
7101da9f6c  add x0,x19,#0x98
7101da9f70  stur x0,[x29, #-0x78]
7101da9f74  bl 0x71025cae70
7101da9f78  mov w1,#0x1
7101da9f7c  mov x0,x19
7101da9f80  bl 0x7101da6780
7101da9f84  mov w1,#0x1
7101da9f88  mov x0,x19
7101da9f8c  bl 0x7101da73b0
7101da9f90  adrp x27,0x710532f000
7101da9f94  ldr x8,[x27, #0x730]
7101da9f98  ldr x22,[x8, #0x8]
7101da9f9c  mov x8,#0xff0000000000
7101da9fa0  movk x8,#0x52ff, LSL #48
7101da9fa4  strb wzr,[sp, #0x98]
7101da9fa8  stur xzr,[sp, #0x9c]
7101da9fac  strh wzr,[sp, #0xb8]
7101da9fb0  add x0,sp,#0x98
7101da9fb4  stp x8,xzr,[sp, #0xa8]
7101da9fb8  ldrh w1,[x19, #0x98]
7101da9fbc  ldr w2,[x19, #0x9c]
7101da9fc0  bl 0x71025caab0
7101da9fc4  ldrsh w8,[x19, #0x98]
7101da9fc8  cmn w8,#0x1
7101da9fcc  b.eq 0x7101daa040
7101da9fd0  cmp w8,#0x7cf
7101da9fd4  b.gt 0x7101daa040
7101da9fd8  ldr x9,[x27, #0x730]
7101da9fdc  ldr x9,[x9, #0x8]
7101da9fe0  ldr x10,[x9, #0x1d8]
7101da9fe4  sxtw x8,w8
7101da9fe8  add x8,x10,x8, LSL #0x1
7101da9fec  orr x11,xzr,#-0x3333333333333334
7101da9ff0  ldp x9,x10,[x10, #0x20]
7101da9ff4  sub x10,x10,x9
7101da9ff8  asr x10,x10,#0x6
7101da9ffc  movk x11,#0xcccd
7101daa000  mul x10,x10,x11
7101daa004  ldrh w8,[x8, #0x60]
7101daa008  cmp w10,w8
7101daa00c  b.ls 0x7101daa040
7101daa010  mov w11,#0x140
7101daa014  madd x9,x8,x11,x9
7101daa018  adrp x12,0x7105182000
7101daa01c  add x12,x12,#0xb08
7101daa020  cmp x10,x8
7101daa024  csel x8,x9,x12,hi
7101daa028  ldrb w9,[x8, #0x6c]
7101daa02c  strb w9,[sp, #0x98]
7101daa030  ldrh w9,[x8, #0x90]
7101daa034  strh w9,[sp, #0xb2]
7101daa038  ldrh w8,[x8, #0x6a]
7101daa03c  strh w8,[sp, #0xb0]
7101daa040  ldr x8,[x19, #0xa0]
7101daa044  str x8,[sp, #0xa8]
7101daa048  ldrh w1,[x19, #0xa8]
7101daa04c  ldrh w2,[x19, #0xaa]
7101daa050  ldrh w3,[x19, #0xac]
7101daa054  add x0,sp,#0x98
7101daa058  bl 0x71025cad00
7101daa05c  ldr w8,[x19, #0xe0]
7101daa060  cmp w8,#0x4
7101daa064  b.cs 0x7101dab56c
7101daa068  add x8,x19,x8, LSL #0x4
7101daa06c  ldr x0,[x8, #0x3b8]
7101daa070  ldrh w1,[x19, #0x98]
7101daa074  bl 0x71025cb340
7101daa078  tbz w0,#0x0,0x7101daa0a4
7101daa07c  adrp x8,0x7105329000
7101daa080  ldr x8,[x8, #0xfa0]
7101daa084  ldr x8,[x8]
7101daa088  ldr s0,[x8, #0x2b4]
7101daa08c  ldr s1,[sp, #0x9c]
7101daa090  fmul s1,s0,s1
7101daa094  str s1,[sp, #0x9c]
7101daa098  ldr s1,[sp, #0xa0]
7101daa09c  fmul s0,s0,s1
7101daa0a0  str s0,[sp, #0xa0]
7101daa0a4  add x0,sp,#0x98
7101daa0a8  bl 0x71025cb980
7101daa0ac  add x28,x19,#0x50
7101daa0b0  mov w21,w0
7101daa0b4  adrp x1,0x710425f000
7101daa0b8  add x1,x1,#0x9e3
7101daa0bc  add x8,sp,#0xd0
7101daa0c0  mov x0,x28
7101daa0c4  bl 0x7103776640
7101daa0c8  adrp x1,0x7104308000
7101daa0cc  add x1,x1,#0x9cf
7101daa0d0  sub x8,x29,#0xd0
7101daa0d4  add x0,sp,#0xd0
7101daa0d8  bl 0x7103776910
7101daa0dc  adrp x1,0x7104422000
7101daa0e0  add x1,x1,#0x768
7101daa0e4  sub x0,x29,#0xd0
7101daa0e8  mov w2,#0x1
7101daa0ec  mov w3,w21
7101daa0f0  bl 0x710377a280
7101daa0f4  ldur x0,[x29, #-0xc8]
7101daa0f8  adrp x26,0x710523d000
7101daa0fc  add x26,x26,#0x9a8
7101daa100  stp x26,xzr,[x29, #-0xd0]
7101daa104  cbz x0,0x7101daa10c
7101daa108  bl 0x710392eb40
7101daa10c  adrp x1,0x71043ee000
7101daa110  add x1,x1,#0x91f
7101daa114  sub x8,x29,#0xd0
7101daa118  add x0,sp,#0xd0
7101daa11c  bl 0x7103776910
7101daa120  adrp x1,0x7104422000
7101daa124  add x1,x1,#0x768
7101daa128  sub x0,x29,#0xd0
7101daa12c  mov w2,#0x1
7101daa130  mov w3,w21
7101daa134  bl 0x710377a280
7101daa138  ldur x0,[x29, #-0xc8]
7101daa13c  stp x26,xzr,[x29, #-0xd0]
7101daa140  cbz x0,0x7101daa148
7101daa144  bl 0x710392eb40
7101daa148  ldrsh w8,[x19, #0x98]
7101daa14c  cmn w8,#0x1
7101daa150  b.eq 0x7101daa224
7101daa154  cmp w8,#0x7cf
7101daa158  b.gt 0x7101daa224
7101daa15c  ldr x10,[x22, #0x1d8]
7101daa160  sxtw x8,w8
7101daa164  add x8,x10,x8, LSL #0x1
7101daa168  ldp x9,x10,[x10, #0x20]
7101daa16c  sub x10,x10,x9
7101daa170  orr x11,xzr,#-0x3333333333333334
7101daa174  movk x11,#0xcccd
7101daa178  ldrh w8,[x8, #0x60]
7101daa17c  asr x10,x10,#0x6
7101daa180  mul x10,x10,x11
7101daa184  cmp w10,w8
7101daa188  b.ls 0x7101daa224
7101daa18c  mov w11,#0x140
7101daa190  madd x9,x8,x11,x9
7101daa194  adrp x11,0x7105182000
7101daa198  add x11,x11,#0xb08
7101daa19c  cmp x10,x8
7101daa1a0  csel x8,x9,x11,hi
7101daa1a4  ldrb w21,[x8, #0x6c]
7101daa1a8  sub w8,w21,#0x1
7101daa1ac  and x9,x8,#0xff
7101daa1b0  lsl x9,x9,#0x3
7101daa1b4  mov w10,#0x301
7101daa1b8  movk w10,#0x2, LSL #16
7101daa1bc  lsr w9,w10,w9
7101daa1c0  cmp w8,#0x3
7101daa1c4  str w24,[sp, #0x2c]
7101daa1c8  csel w24,w9,wzr,cc
7101daa1cc  sub x0,x29,#0xd0
7101daa1d0  mov w1,w24
7101daa1d4  mov w2,wzr
7101daa1d8  sub x20,x29,#0xd0
7101daa1dc  bl 0x710339dde0
7101daa1e0  fmov s8,0x3f800000
7101daa1e4  ldr x23,[sp, #0xd8]
7101daa1e8  mov v0.16B,v8.16B
7101daa1ec  add x1,x20,#0x8
7101daa1f0  mov x0,x23
7101daa1f4  bl 0x7103778300
7101daa1f8  adrp x1,0x7104319000
7101daa1fc  add x1,x1,#0x3b1
7101daa200  add x8,sp,#0xc0
7101daa204  add x0,sp,#0xd0
7101daa208  bl 0x7103776640
7101daa20c  ldrb w8,[x19, #0xf0]
7101daa210  cbz w8,0x7101daabe0
7101daa214  ldrb w8,[x19, #0x1d4]
7101daa218  cbz w8,0x7101daab5c
7101daa21c  ldp x8,x9,[x19, #0x158]
7101daa220  b 0x7101daab68
7101daa224  strb wzr,[x19, #0x44c]
7101daa228  ldr x23,[sp, #0xd8]
7101daa22c  fmov s0,0x3f800000
7101daa230  adrp x1,0x71043be000
7101daa234  add x1,x1,#0xbaa
7101daa238  mov x0,x23
7101daa23c  bl 0x7103778300
7101daa240  adrp x20,0x710523d000
7101daa244  add x20,x20,#0x988
7101daa248  stp x20,xzr,[sp, #0xd0]
7101daa24c  cbz x23,0x7101daa268
7101daa250  ldr x0,[x23, #0x18]
7101daa254  stp x26,xzr,[x23, #0x10]
7101daa258  cbz x0,0x7101daa260
7101daa25c  bl 0x710392eb40
7101daa260  mov x0,x23
7101daa264  bl 0x710392eb40
7101daa268  sub w8,w24,#0x2
7101daa26c  sxtb w8,w8
7101daa270  tbnz w8,#0x1f,0x7101daa284
7101daa274  add x0,x19,#0x80
7101daa278  add w1,w8,#0x14
7101daa27c  mov w2,wzr
7101daa280  bl 0x7103771a80
7101daa284  adrp x1,0x71043f0000
7101daa288  add x1,x1,#0xd67
7101daa28c  sub x8,x29,#0xd0
7101daa290  mov x0,x28
7101daa294  bl 0x7103776640
7101daa298  ldrsh w8,[x19, #0x98]
7101daa29c  ldur x0,[x29, #-0xc8]
7101daa2a0  cmn w8,#0x1
7101daa2a4  b.eq 0x7101daa33c
7101daa2a8  fmov s8,0x3f800000
7101daa2ac  mov v0.16B,v8.16B
7101daa2b0  adrp x1,0x710424f000
7101daa2b4  add x1,x1,#0x98c
7101daa2b8  bl 0x7103778300
7101daa2bc  ldur x0,[x29, #-0xc8]
7101daa2c0  mov v0.16B,v8.16B
7101daa2c4  adrp x1,0x7104412000
7101daa2c8  add x1,x1,#0xd83
7101daa2cc  bl 0x7103778300
7101daa2d0  adrp x1,0x710436a000
7101daa2d4  add x1,x1,#0xc4b
7101daa2d8  add x8,sp,#0x98
7101daa2dc  sub x0,x29,#0xd0
7101daa2e0  bl 0x7103776910
7101daa2e4  ldr x21,[sp, #0xa0]
7101daa2e8  mov w1,#0x1
7101daa2ec  mov x0,x21
7101daa2f0  bl 0x71037790a0
7101daa2f4  ldrh w1,[x19, #0x98]
7101daa2f8  mov w2,#0x1
7101daa2fc  sub x3,x29,#0xd0
7101daa300  orr w5,wzr,#0x3
7101daa304  mov x0,x19
7101daa308  mov w4,wzr
7101daa30c  bl 0x7101da7f90
7101daa310  ldr x8,[x19, #0x68]
7101daa314  ldr x8,[x8]
7101daa318  cbz x8,0x7101daa328
7101daa31c  ldrb w9,[x8, #0x58]
7101daa320  orr w9,w9,#0x1
7101daa324  strb w9,[x8, #0x58]
7101daa328  stp x26,xzr,[sp, #0x98]
7101daa32c  cbz x21,0x7101daa37c
7101daa330  mov x0,x21
7101daa334  bl 0x710392eb40
7101daa338  b 0x7101daa37c
7101daa33c  fmov s8,0x3f800000
7101daa340  mov v0.16B,v8.16B
7101daa344  adrp x1,0x7104443000
7101daa348  add x1,x1,#0xc1f
7101daa34c  bl 0x7103778300
7101daa350  ldur x0,[x29, #-0xc8]
7101daa354  mov v0.16B,v8.16B
7101daa358  adrp x1,0x7104412000
7101daa35c  add x1,x1,#0xd83
7101daa360  bl 0x7103778300
7101daa364  ldr x8,[x19, #0x68]
7101daa368  ldr x8,[x8]
7101daa36c  cbz x8,0x7101daa37c
7101daa370  ldrb w9,[x8, #0x58]
7101daa374  and w9,w9,#0xfe
7101daa378  strb w9,[x8, #0x58]
7101daa37c  ldur x21,[x29, #-0xc8]
7101daa380  stp x20,xzr,[x29, #-0xd0]
7101daa384  cbz x21,0x7101daa3a0
7101daa388  ldr x0,[x21, #0x18]
7101daa38c  stp x26,xzr,[x21, #0x10]
7101daa390  cbz x0,0x7101daa398
7101daa394  bl 0x710392eb40
7101daa398  mov x0,x21
7101daa39c  bl 0x710392eb40
7101daa3a0  ldrb w8,[x19, #0xf0]
7101daa3a4  cbz w8,0x7101dab39c
7101daa3a8  ldrb w8,[x19, #0x1d4]
7101daa3ac  cbnz w8,0x7101daa3bc
7101daa3b0  ldp x8,x9,[x19, #0x158]
7101daa3b4  cmp x9,x8
7101daa3b8  b.eq 0x7101dab39c
7101daa3bc  mov x23,#0xff0000000000
7101daa3c0  adrp x1,0x710433a000
7101daa3c4  add x1,x1,#0x587
7101daa3c8  add x8,sp,#0x98
7101daa3cc  mov x0,x28
7101daa3d0  movk x23,#0xc1ff, LSL #48
7101daa3d4  bl 0x7103776640
7101daa3d8  adrp x1,0x7104319000
7101daa3dc  add x1,x1,#0x3b1
7101daa3e0  add x8,sp,#0x80
7101daa3e4  add x0,sp,#0x98
7101daa3e8  bl 0x7103776640
7101daa3ec  ldr w25,[x19, #0x238]
7101daa3f0  ldrb w9,[x19, #0xf0]
7101daa3f4  str w24,[sp, #0x2c]
7101daa3f8  ldrb w8,[x19, #0x1d4]
7101daa3fc  cbz w9,0x7101daa4ec
7101daa400  cbz w8,0x7101daa40c
7101daa404  ldp x9,x10,[x19, #0x158]
7101daa408  b 0x7101daa424
7101daa40c  ldp x9,x10,[x19, #0x158]
7101daa410  cmp x10,x9
7101daa414  b.ne 0x7101daa424
7101daa418  mov w21,wzr
7101daa41c  mov w24,wzr
7101daa420  b 0x7101daa480
7101daa424  sub x10,x10,x9
7101daa428  lsr x11,x10,#0x3
7101daa42c  cmp w11,#0x1
7101daa430  b.lt 0x7101daa4ec
7101daa434  mov x11,xzr
7101daa438  sbfx x12,x10,#0x3,#0x20
7101daa43c  ldr x13,[x9, x11, LSL #0x3]
7101daa440  ldrb w13,[x13, #0x10]
7101daa444  cmp w13,#0x1
7101daa448  b.eq 0x7101daa45c
7101daa44c  add x11,x11,#0x1
7101daa450  cmp x11,x12
7101daa454  b.lt 0x7101daa43c
7101daa458  b 0x7101daa4ec
7101daa45c  tbnz w11,#0x1f,0x7101daa4ec
7101daa460  asr x10,x10,#0x3
7101daa464  cmp x10,x11
7101daa468  b.ls 0x7101daa4ec
7101daa46c  ldr x9,[x9, x11, LSL #0x3]
7101daa470  ldr x23,[x9, #0x18]
7101daa474  ldrb w24,[x9, #0x20]
7101daa478  ldrb w21,[x9, #0x48]
7101daa47c  cbnz w8,0x7101daa4f8
7101daa480  adrp x1,0x7104308000
7101daa484  add x1,x1,#0x9cf
7101daa488  sub x8,x29,#0xd0
7101daa48c  add x0,sp,#0x80
7101daa490  bl 0x7103776910
7101daa494  ldur x0,[x29, #-0xc8]
7101daa498  ldr x8,[x0]
7101daa49c  cbz x8,0x7101daa4ac
7101daa4a0  ldrb w9,[x8, #0x58]
7101daa4a4  orr w9,w9,#0x1
7101daa4a8  strb w9,[x8, #0x58]
7101daa4ac  stp x26,xzr,[x29, #-0xd0]
7101daa4b0  cbz x0,0x7101daa4b8
7101daa4b4  bl 0x710392eb40
7101daa4b8  adrp x1,0x7104308000
7101daa4bc  add x1,x1,#0x9cf
7101daa4c0  sub x8,x29,#0xd0
7101daa4c4  add x0,sp,#0x80
7101daa4c8  bl 0x7103776910
7101daa4cc  adrp x1,0x7104308000
7101daa4d0  add x1,x1,#0x98e
7101daa4d4  sub x0,x29,#0xd0
7101daa4d8  mov w2,#0x1
7101daa4dc  mov w3,w25
7101daa4e0  bl 0x710377a280
7101daa4e4  ldur x0,[x29, #-0xc8]
7101daa4e8  b 0x7101daa524
7101daa4ec  mov w24,wzr
7101daa4f0  mov w21,wzr
7101daa4f4  cbz w8,0x7101daa480
7101daa4f8  adrp x1,0x7104308000
7101daa4fc  add x1,x1,#0x9cf
7101daa500  sub x8,x29,#0xd0
7101daa504  add x0,sp,#0x80
7101daa508  bl 0x7103776910
7101daa50c  ldur x0,[x29, #-0xc8]
7101daa510  ldr x8,[x0]
7101daa514  cbz x8,0x7101daa524
7101daa518  ldrb w9,[x8, #0x58]
7101daa51c  and w9,w9,#0xfe
7101daa520  strb w9,[x8, #0x58]
7101daa524  stur x26,[x29, #-0xd0]
7101daa528  stur xzr,[x29, #-0xc8]
7101daa52c  cbz x0,0x7101daa534
7101daa530  bl 0x710392eb40
7101daa534  sub w9,w21,#0x1
7101daa538  and x10,x9,#0xff
7101daa53c  cmp w9,#0x3
7101daa540  ldrsh w9,[x19, #0x98]
7101daa544  lsl x10,x10,#0x3
7101daa548  mov w11,#0x301
7101daa54c  movk w11,#0x2, LSL #16
7101daa550  lsr w10,w11,w10
7101daa554  mov w8,wzr
7101daa558  csel w1,w10,wzr,cc
7101daa55c  cmn w9,#0x1
7101daa560  b.eq 0x7101daa5c0
7101daa564  cmp w9,#0x7cf
7101daa568  b.gt 0x7101daa5c0
7101daa56c  ldr x8,[x27, #0x730]
7101daa570  ldr x8,[x8, #0x8]
7101daa574  ldr x10,[x8, #0x1d8]
7101daa578  sxtw x9,w9
7101daa57c  add x8,x10,x9, LSL #0x1
7101daa580  orr x11,xzr,#-0x3333333333333334
7101daa584  ldp x9,x10,[x10, #0x20]
7101daa588  sub x10,x10,x9
7101daa58c  asr x10,x10,#0x6
7101daa590  movk x11,#0xcccd
7101daa594  mul x10,x10,x11
7101daa598  ldrh w8,[x8, #0x60]
7101daa59c  cmp w10,w8
7101daa5a0  b.ls 0x7101daa618
7101daa5a4  mov w11,#0x140
7101daa5a8  madd x9,x8,x11,x9
7101daa5ac  adrp x11,0x7105182000
7101daa5b0  add x11,x11,#0xb08
7101daa5b4  cmp x10,x8
7101daa5b8  csel x8,x9,x11,hi
7101daa5bc  ldrb w8,[x8, #0x6c]
7101daa5c0  cmp w21,#0x1
7101daa5c4  b.eq 0x7101daa624
7101daa5c8  cmp w21,#0x2
7101daa5cc  b.eq 0x7101daa5ec
7101daa5d0  cmp w21,#0x3
7101daa5d4  b.ne 0x7101daa728
7101daa5d8  cmp w8,#0x1
7101daa5dc  cset w21,eq
7101daa5e0  cmp w8,#0x2
7101daa5e4  b.eq 0x7101daa5fc
7101daa5e8  b 0x7101daa634
7101daa5ec  cmp w8,#0x3
7101daa5f0  cset w21,eq
7101daa5f4  cmp w8,#0x1
7101daa5f8  b.ne 0x7101daa634
7101daa5fc  mov w21,#0xffffffff
7101daa600  add x0,sp,#0x80
7101daa604  mov w2,w21
7101daa608  mov w3,w21
7101daa60c  mov w4,wzr
7101daa610  bl 0x71025b12c0
7101daa614  b 0x7101daa64c
7101daa618  mov w8,wzr
7101daa61c  cmp w21,#0x1
7101daa620  b.ne 0x7101daa5c8
7101daa624  cmp w8,#0x2
7101daa628  cset w21,eq
7101daa62c  cmp w8,#0x3
7101daa630  b.eq 0x7101daa5fc
7101daa634  mov w2,#0xffffffff
7101daa638  add x0,sp,#0x80
7101daa63c  mov w3,w21
7101daa640  mov w4,wzr
7101daa644  bl 0x71025b12c0
7101daa648  cbz w21,0x7101daa820
7101daa64c  sub x0,x29,#0xd0
7101daa650  sub x22,x29,#0xd0
7101daa654  bl 0x7103776290
7101daa658  ldr x8,[sp, #0x88]
7101daa65c  stur wzr,[x29, #-0xc0]
7101daa660  sturh wzr,[x29, #-0xbc]
7101daa664  ldr x9,[x8]
7101daa668  ldur x10,[x29, #-0xc8]
7101daa66c  str x9,[x10]
7101daa670  ldr x9,[x8, #0x8]
7101daa674  ldur x10,[x29, #-0xc8]
7101daa678  str x9,[x10, #0x8]
7101daa67c  ldur x9,[x29, #-0xc8]
7101daa680  cmp x9,x8
7101daa684  b.eq 0x7101daa6c8
7101daa688  ldr x10,[x8, #0x18]
7101daa68c  ldr x10,[x10]
7101daa690  ldr x11,[x9, #0x18]
7101daa694  str x10,[x11]
7101daa698  ldr x10,[x8, #0x18]
7101daa69c  ldr x10,[x10, #0x8]
7101daa6a0  ldr x11,[x9, #0x18]
7101daa6a4  str x10,[x11, #0x8]
7101daa6a8  ldr x10,[x8, #0x18]
7101daa6ac  ldr x10,[x10, #0x10]
7101daa6b0  ldr x11,[x9, #0x18]
7101daa6b4  str x10,[x11, #0x10]
7101daa6b8  ldr x8,[x8, #0x18]
7101daa6bc  ldr x8,[x8, #0x18]
7101daa6c0  ldr x9,[x9, #0x18]
7101daa6c4  str x8,[x9, #0x18]
7101daa6c8  cmp w21,#0x0
7101daa6cc  cset w8,gt
7101daa6d0  sturb w8,[x29, #-0xbc]
7101daa6d4  mov w8,#0x1
7101daa6d8  sturb wzr,[x29, #-0xbb]
7101daa6dc  stur w8,[x29, #-0xc0]
7101daa6e0  ldr x21,[x19, #0x438]
7101daa6e4  ldr x8,[x19, #0x440]
7101daa6e8  cmp x21,x8
7101daa6ec  b.eq 0x7101daa7f0
7101daa6f0  sub x1,x29,#0xd0
7101daa6f4  mov x0,x21
7101daa6f8  add x20,x22,#0x10
7101daa6fc  bl 0x7103776390
7101daa700  ldr w8,[x20]
7101daa704  ldrh w9,[x20, #0x4]
7101daa708  strh w9,[x21, #0x14]
7101daa70c  str w8,[x21, #0x10]
7101daa710  ldr x8,[x19, #0x438]
7101daa714  add x8,x8,#0x18
7101daa718  adrp x20,0x710523d000
7101daa71c  add x20,x20,#0x988
7101daa720  str x8,[x19, #0x438]
7101daa724  b 0x7101daa7fc
7101daa728  mov w2,#0xffffffff
7101daa72c  add x0,sp,#0x80
7101daa730  mov w3,wzr
7101daa734  mov w4,wzr
7101daa738  bl 0x71025b12c0
7101daa73c  ldrb w8,[x19, #0x1d4]
7101daa740  cbnz w8,0x7101daa828
7101daa744  mov w2,#0x2
7101daa748  mov x0,x23
7101daa74c  mov w1,w24
7101daa750  add x21,x19,#0x28
7101daa754  bl 0x7103238a70
7101daa758  tst x0,#0xffffffffff
7101daa75c  stur x0,[x29, #-0xd0]
7101daa760  b.eq 0x7101daa778
7101daa764  ldr x0,[x21]
7101daa768  ldrsw x2,[x0, #0x70]
7101daa76c  ldr w3,[x0, #0x68]
7101daa770  sub x1,x29,#0xd0
7101daa774  bl 0x710323c4e0
7101daa778  mov w3,#0x2
7101daa77c  mov x0,x21
7101daa780  mov x1,x23
7101daa784  mov w2,w24
7101daa788  bl 0x710323f330
7101daa78c  mov x23,x0
7101daa790  adrp x1,0x7104401000
7101daa794  add x1,x1,#0xd32
7101daa798  sub x8,x29,#0xd0
7101daa79c  add x0,sp,#0x80
7101daa7a0  bl 0x7103776910
7101daa7a4  ldur x21,[x29, #-0xc8]
7101daa7a8  mov x0,x21
7101daa7ac  mov x1,x23
7101daa7b0  bl 0x7103778b80
7101daa7b4  stp x26,xzr,[x29, #-0xd0]
7101daa7b8  cbz x21,0x7101daa7c4
7101daa7bc  mov x0,x21
7101daa7c0  bl 0x710392eb40
7101daa7c4  adrp x1,0x7104401000
7101daa7c8  add x1,x1,#0xd32
7101daa7cc  sub x8,x29,#0xd0
7101daa7d0  add x0,sp,#0x80
7101daa7d4  bl 0x7103776910
7101daa7d8  ldur x0,[x29, #-0xc8]
7101daa7dc  ldr x8,[x0]
7101daa7e0  cbz x8,0x7101daa854
7101daa7e4  ldrb w9,[x8, #0x58]
7101daa7e8  orr w9,w9,#0x1
7101daa7ec  b 0x7101daa850
7101daa7f0  add x0,x19,#0x430
7101daa7f4  sub x1,x29,#0xd0
7101daa7f8  bl 0x7101dac340
7101daa7fc  ldur x21,[x29, #-0xc8]
7101daa800  stp x20,xzr,[x29, #-0xd0]
7101daa804  cbz x21,0x7101daa820
7101daa808  ldr x0,[x21, #0x18]
7101daa80c  stp x26,xzr,[x21, #0x10]
7101daa810  cbz x0,0x7101daa818
7101daa814  bl 0x710392eb40
7101daa818  mov x0,x21
7101daa81c  bl 0x710392eb40
7101daa820  ldrb w8,[x19, #0x1d4]
7101daa824  cbz w8,0x7101daa744
7101daa828  adrp x1,0x7104401000
7101daa82c  add x1,x1,#0xd32
7101daa830  sub x8,x29,#0xd0
7101daa834  add x0,sp,#0x80
7101daa838  bl 0x7103776910
7101daa83c  ldur x0,[x29, #-0xc8]
7101daa840  ldr x8,[x0]
7101daa844  cbz x8,0x7101daa854
7101daa848  ldrb w9,[x8, #0x58]
7101daa84c  and w9,w9,#0xfe
7101daa850  strb w9,[x8, #0x58]
7101daa854  stp x26,xzr,[x29, #-0xd0]
7101daa858  cbz x0,0x7101daa860
7101daa85c  bl 0x710392eb40
7101daa860  ldp x22,x21,[x19, #0x138]
7101daa864  sub x8,x21,x22
7101daa868  add x23,x19,#0x138
7101daa86c  asr x8,x8,#0x5
7101daa870  cbz w8,0x7101daa8a0
7101daa874  mov w9,wzr
7101daa878  mov w9,w9
7101daa87c  cmp x8,x9
7101daa880  b.ls 0x7101dab55c
7101daa884  lsl x10,x9,#0x5
7101daa888  ldrb w10,[x22, x10, LSL ]
7101daa88c  cmp w10,#0xc
7101daa890  b.eq 0x7101daa8c4
7101daa894  add w9,w9,#0x1
7101daa898  cmp w9,w8
7101daa89c  b.cc 0x7101daa878
7101daa8a0  ldrb w8,[x19, #0x11a]
7101daa8a4  sub w8,w8,#0x1
7101daa8a8  cmp w8,#0x8
7101daa8ac  b.hi 0x7101daa8bc
7101daa8b0  and w8,w8,#0xff
7101daa8b4  add w0,w8,#0x1
7101daa8b8  b 0x7101daa8c8
7101daa8bc  mov w0,wzr
7101daa8c0  b 0x7101daa8c8
7101daa8c4  mov w0,#0x8
7101daa8c8  mov x27,#0xff0000000000
7101daa8cc  str x28,[sp, #0x10]
7101daa8d0  mov x25,#0x7100000000000000
7101daa8d4  movk x27,#0x71ff, LSL #48
7101daa8d8  bl 0x71025b2eb0
7101daa8dc  mov x24,x0
7101daa8e0  cmp x22,x21
7101daa8e4  b.eq 0x7101daa928
7101daa8e8  mov x20,x22
7101daa8ec  ldrb w28,[x20], #0x20
7101daa8f0  mov w0,w28
7101daa8f4  bl 0x71025b3940
7101daa8f8  and x8,x0,#-0x100000000000000
7101daa8fc  mov x26,x0
7101daa900  cmp x8,x25
7101daa904  b.ne 0x7101daa910
7101daa908  and x8,x26,#0xffffffffff
7101daa90c  cbnz x8,0x7101daa938
7101daa910  cmp x21,x20
7101daa914  mov x22,x20
7101daa918  b.ne 0x7101daa8ec
7101daa91c  mov x21,xzr
7101daa920  mov w28,wzr
7101daa924  b 0x7101daa93c
7101daa928  mov x21,xzr
7101daa92c  mov w28,wzr
7101daa930  mov x26,x27
7101daa934  b 0x7101daa93c
7101daa938  ldr x21,[x22, #0x8]
7101daa93c  tst x24,#0xffffffffff
7101daa940  and x9,x24,#-0x100000000000000
7101daa944  cset w8,ne
7101daa948  cmp x9,x25
7101daa94c  cset w9,eq
7101daa950  and w20,w9,w8
7101daa954  tbnz w20,#0x0,0x7101daa96c
7101daa958  and x8,x26,#-0x100000000000000
7101daa95c  cmp x8,x25
7101daa960  b.ne 0x7101daaa54
7101daa964  and x8,x26,#0xffffffffff
7101daa968  cbz x8,0x7101daaa54
7101daa96c  mov w8,#0x1
7101daa970  strb w8,[x19, #0xdd]
7101daa974  str x23,[sp]
7101daa978  ldr x23,[sp, #0xa0]
7101daa97c  fmov s0,0x3f800000
7101daa980  adrp x1,0x71042a3000
7101daa984  add x1,x1,#0x4a8
7101daa988  mov w22,#0x9dc5
7101daa98c  movk w22,#0x811c, LSL #16
7101daa990  mov x0,x23
7101daa994  bl 0x7103778300
7101daa998  sturb wzr,[x29, #-0xc8]
7101daa99c  stur x22,[x29, #-0xd0]
7101daa9a0  cbz w20,0x7101daaa04
7101daa9a4  ldp x8,x9,[x19, #0x138]
7101daa9a8  sub x9,x9,x8
7101daa9ac  asr x9,x9,#0x5
7101daa9b0  adrp x20,0x710523d000
7101daa9b4  add x20,x20,#0x988
7101daa9b8  cbz w9,0x7101daa9e8
7101daa9bc  mov w10,wzr
7101daa9c0  mov w10,w10
7101daa9c4  cmp x9,x10
7101daa9c8  b.ls 0x7101dab564
7101daa9cc  lsl x11,x10,#0x5
7101daa9d0  ldrb w11,[x8, x11, LSL ]
7101daa9d4  cmp w11,#0xc
7101daa9d8  b.eq 0x7101daaa94
7101daa9dc  add w10,w10,#0x1
7101daa9e0  cmp w10,w9
7101daa9e4  b.cc 0x7101daa9c0
7101daa9e8  ldrb w8,[x19, #0x11a]
7101daa9ec  sub w8,w8,#0x1
7101daa9f0  cmp w8,#0x8
7101daa9f4  b.hi 0x7101daaa8c
7101daa9f8  and w8,w8,#0xff
7101daa9fc  add w0,w8,#0x1
7101daaa00  b 0x7101daaa98
7101daaa04  and x8,x26,#-0x100000000000000
7101daaa08  cmp x8,x25
7101daaa0c  b.ne 0x7101daabd0
7101daaa10  and x8,x26,#0xffffffffff
7101daaa14  adrp x20,0x710523d000
7101daaa18  add x20,x20,#0x988
7101daaa1c  cbz x8,0x7101dab1d4
7101daaa20  ldp x8,x20,[x19, #0x138]
7101daaa24  cmp x8,x20
7101daaa28  b.eq 0x7101dab120
7101daaa2c  add x27,x8,#0x20
7101daaa30  ldurb w0,[x27, #-0x20]
7101daaa34  ldur x1,[x29, #-0x78]
7101daaa38  bl 0x71025d0920
7101daaa3c  mov w24,w0
7101daaa40  tbnz w0,#0x0,0x7101dab124
7101daaa44  cmp x20,x27
7101daaa48  add x27,x27,#0x20
7101daaa4c  b.ne 0x7101daaa30
7101daaa50  b 0x7101dab124
7101daaa54  ldr x23,[sp, #0xa0]
7101daaa58  fmov s0,0x3f800000
7101daaa5c  adrp x1,0x71042a3000
7101daaa60  add x1,x1,#0x4b8
7101daaa64  mov x0,x23
7101daaa68  bl 0x7103778300
7101daaa6c  ldr x28,[sp, #0x10]
7101daaa70  ldr w24,[sp, #0x2c]
7101daaa74  adrp x26,0x710523d000
7101daaa78  add x26,x26,#0x9a8
7101daaa7c  adrp x20,0x710523d000
7101daaa80  add x20,x20,#0x988
7101daaa84  strb wzr,[x19, #0xdd]
7101daaa88  b 0x7101dab358
7101daaa8c  mov w0,wzr
7101daaa90  b 0x7101daaa98
7101daaa94  mov w0,#0x8
7101daaa98  ldur x1,[x29, #-0x78]
7101daaa9c  bl 0x71025cfbc0
7101daaaa0  ldp x8,x9,[x19, #0x138]
7101daaaa4  sub x9,x9,x8
7101daaaa8  asr x10,x9,#0x5
7101daaaac  cbz w10,0x7101daaae0
7101daaab0  mov w11,wzr
7101daaab4  orr w9,wzr,#0x7
7101daaab8  mov w11,w11
7101daaabc  cmp x10,x11
7101daaac0  b.ls 0x7101dab564
7101daaac4  lsl x12,x11,#0x5
7101daaac8  ldrb w12,[x8, x12, LSL ]
7101daaacc  cmp w12,#0xc
7101daaad0  b.eq 0x7101daaaf4
7101daaad4  add w11,w11,#0x1
7101daaad8  cmp w11,w10
7101daaadc  b.cc 0x7101daaab8
7101daaae0  ldrb w8,[x19, #0x11a]
7101daaae4  sub w8,w8,#0x1
7101daaae8  cmp w8,#0x8
7101daaaec  b.hi 0x7101daab48
7101daaaf0  and x9,x8,#0xff
7101daaaf4  adrp x8,0x71050c5000
7101daaaf8  add x8,x8,#0x470
7101daaafc  ldr x9,[x8, x9, LSL #0x3]
7101daab00  cbz x9,0x7101daab54
7101daab04  mov x8,xzr
7101daab08  sub x10,x29,#0xd0
7101daab0c  b 0x7101daab18
7101daab10  add x8,x8,#0x2
7101daab14  strb w11,[x12, #0x9]
7101daab18  add x11,x9,x8
7101daab1c  ldrb w13,[x11]
7101daab20  cbz w13,0x7101dab0c0
7101daab24  add w14,w8,#0x1
7101daab28  add x12,x10,x8
7101daab2c  cmp w14,#0x3f
7101daab30  strb w13,[x12, #0x8]
7101daab34  b.cs 0x7101dab0bc
7101daab38  ldrb w11,[x11, #0x1]
7101daab3c  cbnz w11,0x7101daab10
7101daab40  add x8,x8,#0x1
7101daab44  b 0x7101dab0c0
7101daab48  adrp x9,0x7104867000
7101daab4c  add x9,x9,#0xc2e
7101daab50  cbnz x9,0x7101daab04
7101daab54  mov w8,wzr
7101daab58  b 0x7101dab0c0
7101daab5c  ldp x8,x9,[x19, #0x158]
7101daab60  cmp x9,x8
7101daab64  b.eq 0x7101daab94
7101daab68  sub x9,x9,x8
7101daab6c  lsr x9,x9,#0x3
7101daab70  cbz w9,0x7101daab94
7101daab74  mov w10,wzr
7101daab78  ldr x11,[x8, w10, UXTW #0x3]
7101daab7c  ldrb w12,[x11, #0x10]
7101daab80  cmp w12,#0x1
7101daab84  b.eq 0x7101daabdc
7101daab88  add w10,w10,#0x1
7101daab8c  cmp w10,w9
7101daab90  b.cc 0x7101daab78
7101daab94  mov w8,wzr
7101daab98  cmp w21,#0x1
7101daab9c  b.ne 0x7101daabe8
7101daaba0  cmp w8,#0x2
7101daaba4  cset w25,eq
7101daaba8  cmp w8,#0x3
7101daabac  b.eq 0x7101daac1c
7101daabb0  mov w2,#0xffffffff
7101daabb4  add x0,sp,#0xc0
7101daabb8  mov w4,#0x1
7101daabbc  mov w1,w24
7101daabc0  mov w3,w25
7101daabc4  bl 0x71025b12c0
7101daabc8  cbnz w25,0x7101daac38
7101daabcc  b 0x7101daad64
7101daabd0  adrp x20,0x710523d000
7101daabd4  add x20,x20,#0x988
7101daabd8  b 0x7101dab1d4
7101daabdc  ldrb w8,[x11, #0x48]
7101daabe0  cmp w21,#0x1
7101daabe4  b.eq 0x7101daaba0
7101daabe8  cmp w21,#0x2
7101daabec  b.eq 0x7101daac0c
7101daabf0  cmp w21,#0x3
7101daabf4  b.ne 0x7101daad0c
7101daabf8  cmp w8,#0x1
7101daabfc  cset w25,eq
7101daac00  cmp w8,#0x2
7101daac04  b.ne 0x7101daabb0
7101daac08  b 0x7101daac1c
7101daac0c  cmp w8,#0x3
7101daac10  cset w25,eq
7101daac14  cmp w8,#0x1
7101daac18  b.ne 0x7101daabb0
7101daac1c  mov w25,#0xffffffff
7101daac20  add x0,sp,#0xc0
7101daac24  mov w4,#0x1
7101daac28  mov w1,w24
7101daac2c  mov w2,w25
7101daac30  mov w3,w25
7101daac34  bl 0x71025b12c0
7101daac38  add x0,sp,#0x80
7101daac3c  add x22,sp,#0x80
7101daac40  bl 0x7103776290
7101daac44  ldr x8,[sp, #0xc8]
7101daac48  str wzr,[sp, #0x90]
7101daac4c  strh wzr,[sp, #0x94]
7101daac50  ldr x9,[x8]
7101daac54  ldr x10,[sp, #0x88]
7101daac58  str x9,[x10]
7101daac5c  ldr x9,[x8, #0x8]
7101daac60  ldr x10,[sp, #0x88]
7101daac64  str x9,[x10, #0x8]
7101daac68  ldr x9,[sp, #0x88]
7101daac6c  cmp x9,x8
7101daac70  b.eq 0x7101daacb4
7101daac74  ldr x10,[x8, #0x18]
7101daac78  ldr x10,[x10]
7101daac7c  ldr x11,[x9, #0x18]
7101daac80  str x10,[x11]
7101daac84  ldr x10,[x8, #0x18]
7101daac88  ldr x10,[x10, #0x8]
7101daac8c  ldr x11,[x9, #0x18]
7101daac90  str x10,[x11, #0x8]
7101daac94  ldr x10,[x8, #0x18]
7101daac98  ldr x10,[x10, #0x10]
7101daac9c  ldr x11,[x9, #0x18]
7101daaca0  str x10,[x11, #0x10]
7101daaca4  ldr x8,[x8, #0x18]
7101daaca8  ldr x8,[x8, #0x18]
7101daacac  ldr x9,[x9, #0x18]
7101daacb0  str x8,[x9, #0x18]
7101daacb4  cmp w25,#0x0
7101daacb8  mov w8,#0x1
7101daacbc  cset w9,gt
7101daacc0  strb w8,[sp, #0x95]
7101daacc4  str w8,[sp, #0x90]
7101daacc8  strb w9,[sp, #0x94]
7101daaccc  ldr x21,[x19, #0x438]
7101daacd0  ldr x8,[x19, #0x440]
7101daacd4  cmp x21,x8
7101daacd8  b.eq 0x7101daad2c
7101daacdc  add x1,sp,#0x80
7101daace0  mov x0,x21
7101daace4  add x20,x22,#0x10
7101daace8  bl 0x7103776390
7101daacec  ldr w8,[x20]
7101daacf0  ldrh w9,[x20, #0x4]
7101daacf4  strh w9,[x21, #0x14]
7101daacf8  str w8,[x21, #0x10]
7101daacfc  ldr x8,[x19, #0x438]
7101daad00  add x8,x8,#0x18
7101daad04  str x8,[x19, #0x438]
7101daad08  b 0x7101daad38
7101daad0c  mov w2,#0xffffffff
7101daad10  add x0,sp,#0xc0
7101daad14  mov w4,#0x1
7101daad18  mov w1,w24
7101daad1c  mov w3,wzr
7101daad20  bl 0x71025b12c0
7101daad24  mov w25,wzr
7101daad28  b 0x7101daad64
7101daad2c  add x0,x19,#0x430
7101daad30  add x1,sp,#0x80
7101daad34  bl 0x7101dac340
7101daad38  ldr x21,[sp, #0x88]
7101daad3c  adrp x8,0x710523d000
7101daad40  add x8,x8,#0x988
7101daad44  stp x8,xzr,[sp, #0x80]
7101daad48  cbz x21,0x7101daad64
7101daad4c  ldr x0,[x21, #0x18]
7101daad50  stp x26,xzr,[x21, #0x10]
7101daad54  cbz x0,0x7101daad5c
7101daad58  bl 0x710392eb40
7101daad5c  mov x0,x21
7101daad60  bl 0x710392eb40
7101daad64  adrp x1,0x71042a0000
7101daad68  add x1,x1,#0xe41
7101daad6c  add x8,sp,#0x80
7101daad70  add x0,sp,#0xd0
7101daad74  strb w25,[x19, #0x44c]
7101daad78  bl 0x7103776910
7101daad7c  ldr s9,[sp, #0x9c]
7101daad80  fcvtzs w3,s9
7101daad84  adrp x1,0x710439d000
7101daad88  add x1,x1,#0x82a
7101daad8c  add x0,sp,#0x80
7101daad90  mov w2,#0x1
7101daad94  bl 0x710377a280
7101daad98  ldr x0,[sp, #0x88]
7101daad9c  stp x26,xzr,[sp, #0x80]
7101daada0  cbz x0,0x7101daada8
7101daada4  bl 0x710392eb40
7101daada8  adrp x1,0x71043ab000
7101daadac  add x1,x1,#0x865
7101daadb0  add x8,sp,#0x80
7101daadb4  add x0,sp,#0xd0
7101daadb8  bl 0x7103776910
7101daadbc  ldr s10,[sp, #0xa0]
7101daadc0  fcvtzs w3,s10
7101daadc4  adrp x1,0x7104270000
7101daadc8  add x1,x1,#0x353
7101daadcc  add x0,sp,#0x80
7101daadd0  mov w2,#0x1
7101daadd4  bl 0x710377a280
7101daadd8  ldr x0,[sp, #0x88]
7101daaddc  stp x26,xzr,[sp, #0x80]
7101daade0  cbz x0,0x7101daade8
7101daade4  bl 0x710392eb40
7101daade8  adrp x8,0x7104472000
7101daadec  ldr s1,[x8, #0x978]
7101daadf0  fdiv s2,s9,s1
7101daadf4  fcmp s9,s10
7101daadf8  fcsel s0,s10,s9,mi
7101daadfc  fmin s3,s2,s8
7101daae00  fdiv s4,s10,s1
7101daae04  fcmp s2,#0.0
7101daae08  fmov s2,wzr
7101daae0c  fcsel s3,s2,s3,mi
7101daae10  fmin s5,s4,s8
7101daae14  fcmp s4,#0.0
7101daae18  movi v4.2D,#0x0
7101daae1c  mov v4.S[0x0],v3.S[0x0]
7101daae20  fcsel s2,s2,s5,mi
7101daae24  fcmp s0,s8
7101daae28  mov v4.S[0x1],v2.S[0x0]
7101daae2c  str q4,[sp, #0x10]
7101daae30  b.pl 0x7101daae40
7101daae34  adrp x8,0x7104471000
7101daae38  ldr s9,[x8, #0xb98]
7101daae3c  b 0x7101daae48
7101daae40  fmin s0,s0,s1
7101daae44  fdiv s9,s0,s1
7101daae48  adrp x8,0x7105329000
7101daae4c  ldr x8,[x8, #0xfa0]
7101daae50  ldr x8,[x8]
7101daae54  ldr s0,[x8, #0x2d0]
7101daae58  adrp x8,0x7104473000
7101daae5c  ldr s1,[x8, #0x918]
7101daae60  fmaxnm s10,s0,s1
7101daae64  fabd s0,s8,s9
7101daae68  mov v1.16B,v10.16B
7101daae6c  bl 0x71039c0850
7101daae70  fdiv s1,s8,s10
7101daae74  fsub s11,s8,s0
7101daae78  mov v0.16B,v9.16B
7101daae7c  bl 0x71039c0850
7101daae80  fadd s0,s11,s0
7101daae84  fmov s1,0x3f000000
7101daae88  fmul s0,s0,s1
7101daae8c  ldr q1,[sp, #0x10]
7101daae90  fdiv s0,s0,s9
7101daae94  adrp x8,0x7104472000
7101daae98  fmul v1.4S,v1.4S,v0.S[0x0]
7101daae9c  fmin s0,s1,s8
7101daaea0  dup s9,v1.S[0x1]
7101daaea4  ldr s10,[x8, #0xabc]
7101daaea8  str q1,[sp, #0x10]
7101daaeac  fmin s1,s9,s8
7101daaeb0  adrp x8,0x7104473000
7101daaeb4  fmul s3,s0,s10
7101daaeb8  ldr s2,[x8, #0x1cc]
7101daaebc  add x8,sp,#0x80
7101daaec0  fadd s12,s3,s2
7101daaec4  fmul s0,s1,s10
7101daaec8  adrp x1,0x710436a000
7101daaecc  add x1,x1,#0x263
7101daaed0  add x0,sp,#0xd0
7101daaed4  fadd s11,s0,s2
7101daaed8  bl 0x7103776910
7101daaedc  adrp x1,0x7104430000
7101daaee0  add x1,x1,#0xf3f
7101daaee4  add x8,sp,#0x70
7101daaee8  add x0,sp,#0xd0
7101daaeec  bl 0x7103776910
7101daaef0  adrp x1,0x71043ee000
7101daaef4  add x1,x1,#0x8fc
7101daaef8  add x8,sp,#0x60
7101daaefc  add x0,sp,#0xd0
7101daaf00  bl 0x7103776910
7101daaf04  adrp x1,0x710426d000
7101daaf08  add x1,x1,#0xc45
7101daaf0c  add x8,sp,#0x50
7101daaf10  add x0,sp,#0xd0
7101daaf14  bl 0x7103776910
7101daaf18  ldr x24,[sp, #0x88]
7101daaf1c  ldr x0,[x24, #0x8]
7101daaf20  cbz x0,0x7101daaf40
7101daaf24  bl 0x71000597e0
7101daaf28  cbz x0,0x7101daaf9c
7101daaf2c  ldrb w8,[x0, #0x14]
7101daaf30  tst w8,#0x3
7101daaf34  b.eq 0x7101daaf9c
7101daaf38  ldr x8,[x0, #0x18]
7101daaf3c  b 0x7101daaf60
7101daaf40  ldr x8,[x24, #0x18]
7101daaf44  cbz x8,0x7101daaf9c
7101daaf48  ldr x8,[x8, #0x118]
7101daaf4c  cbz x8,0x7101daaf9c
7101daaf50  ldrb w9,[x8, #0x14]
7101daaf54  tst w9,#0x3
7101daaf58  b.eq 0x7101daaf9c
7101daaf5c  ldr x8,[x8, #0x18]
7101daaf60  mov x22,x26
7101daaf64  ldr x0,[x8, #0x8]
7101daaf68  cbz x0,0x7101daafa0
7101daaf6c  ldr x8,[x0]
7101daaf70  ldr x9,[x8, #0x20]
7101daaf74  add x8,sp,#0x40
7101daaf78  blr x9
7101daaf7c  ldr h0,[sp, #0x40]
7101daaf80  ucvtf s0,s0
7101daaf84  ldr h1,[sp, #0x42]
7101daaf88  movi v2.2D,#0x0
7101daaf8c  ucvtf s1,s1
7101daaf90  mov v2.S[0x0],v0.S[0x0]
7101daaf94  mov v2.S[0x1],v1.S[0x0]
7101daaf98  b 0x7101daafac
7101daaf9c  mov x22,x26
7101daafa0  adrp x8,0x71052a8000
7101daafa4  ldr x8,[x8, #0xa80]
7101daafa8  ldr q2,[x8]
7101daafac  str q2,[sp]
7101daafb0  adrp x20,0x71052a8000
7101daafb4  ldr x20,[x20, #0xa80]
7101daafb8  ldr q3,[sp, #0x10]
7101daafbc  fsub s1,s8,s12
7101daafc0  ldr q0,[x20]
7101daafc4  fcmp s3,#0.0
7101daafc8  fcsel s1,s10,s1,mi
7101daafcc  fnmul s1,s1,s2
7101daafd0  add x1,sp,#0x40
7101daafd4  mov v0.S[0x0],v1.S[0x0]
7101daafd8  mov x0,x24
7101daafdc  str q0,[sp, #0x40]
7101daafe0  mov v0.16B,v8.16B
7101daafe4  bl 0x7103779770
7101daafe8  ldr x21,[sp, #0x78]
7101daafec  mov v0.16B,v8.16B
7101daaff0  add x1,sp,#0x40
7101daaff4  mov x0,x21
7101daaff8  bl 0x7103779770
7101daaffc  fsub s1,s8,s11
7101dab000  fcmp s9,#0.0
7101dab004  ldr q2,[sp]
7101dab008  fcsel s1,s10,s1,mi
7101dab00c  ldr q0,[x20]
7101dab010  ldr x25,[sp, #0x68]
7101dab014  add x1,sp,#0x30
7101dab018  mov x0,x25
7101dab01c  fnmul s1,s1,s2
7101dab020  mov v0.S[0x0],v1.S[0x0]
7101dab024  str q0,[sp, #0x30]
7101dab028  mov v0.16B,v8.16B
7101dab02c  bl 0x7103779770
7101dab030  ldr x26,[sp, #0x58]
7101dab034  mov v0.16B,v8.16B
7101dab038  add x1,sp,#0x30
7101dab03c  mov x0,x26
7101dab040  bl 0x7103779770
7101dab044  stp x22,xzr,[sp, #0x50]
7101dab048  cbz x26,0x7101dab054
7101dab04c  mov x0,x26
7101dab050  bl 0x710392eb40
7101dab054  mov x26,x22
7101dab058  stp x22,xzr,[sp, #0x60]
7101dab05c  cbz x25,0x7101dab068
7101dab060  mov x0,x25
7101dab064  bl 0x710392eb40
7101dab068  stp x26,xzr,[sp, #0x70]
7101dab06c  cbz x21,0x7101dab078
7101dab070  mov x0,x21
7101dab074  bl 0x710392eb40
7101dab078  stp x26,xzr,[sp, #0x80]
7101dab07c  cbz x24,0x7101dab088
7101dab080  mov x0,x24
7101dab084  bl 0x710392eb40
7101dab088  ldr x21,[sp, #0xc8]
7101dab08c  ldr w24,[sp, #0x2c]
7101dab090  adrp x8,0x710523d000
7101dab094  add x8,x8,#0x988
7101dab098  stp x8,xzr,[sp, #0xc0]
7101dab09c  cbz x21,0x7101daa240
7101dab0a0  ldr x0,[x21, #0x18]
7101dab0a4  stp x26,xzr,[x21, #0x10]
7101dab0a8  cbz x0,0x7101dab0b0
7101dab0ac  bl 0x710392eb40
7101dab0b0  mov x0,x21
7101dab0b4  bl 0x710392eb40
7101dab0b8  b 0x7101daa240
7101dab0bc  add w8,w8,#0x1
7101dab0c0  sub x10,x29,#0xd0
7101dab0c4  add x9,x10,#0x8
7101dab0c8  strb wzr,[x9, w8, UXTW ]
7101dab0cc  ldurb w9,[x29, #-0xc8]
7101dab0d0  stur w8,[x29, #-0xcc]
7101dab0d4  cbz w9,0x7101dab0f4
7101dab0d8  add x8,x10,#0x9
7101dab0dc  mov w10,#0x89
7101dab0e0  mul w11,w22,w10
7101dab0e4  and w9,w9,#0xff
7101dab0e8  eor w22,w11,w9
7101dab0ec  ldrb w9,[x8], #0x1
7101dab0f0  cbnz w9,0x7101dab0e0
7101dab0f4  mov x26,x24
7101dab0f8  mov x27,x24
7101dab0fc  stur w22,[x29, #-0xd0]
7101dab100  tbz w0,#0x0,0x7101dab1d4
7101dab104  fmov s0,0x3f800000
7101dab108  adrp x1,0x710438c000
7101dab10c  add x1,x1,#0xeff
7101dab110  mov x0,x23
7101dab114  bl 0x7103778300
7101dab118  mov x27,x26
7101dab11c  b 0x7101dab1e8
7101dab120  mov w24,wzr
7101dab124  mov w0,w28
7101dab128  mov x1,x21
7101dab12c  bl 0x71025b32d0
7101dab130  cbz x0,0x7101dab180
7101dab134  mov x8,xzr
7101dab138  sub x9,x29,#0xd0
7101dab13c  adrp x20,0x710523d000
7101dab140  add x20,x20,#0x988
7101dab144  b 0x7101dab150
7101dab148  add x8,x8,#0x2
7101dab14c  strb w10,[x11, #0x9]
7101dab150  add x10,x0,x8
7101dab154  ldrb w12,[x10]
7101dab158  cbz w12,0x7101dab194
7101dab15c  add w13,w8,#0x1
7101dab160  add x11,x9,x8
7101dab164  cmp w13,#0x3f
7101dab168  strb w12,[x11, #0x8]
7101dab16c  b.cs 0x7101dab190
7101dab170  ldrb w10,[x10, #0x1]
7101dab174  cbnz w10,0x7101dab148
7101dab178  add x8,x8,#0x1
7101dab17c  b 0x7101dab194
7101dab180  mov w8,wzr
7101dab184  adrp x20,0x710523d000
7101dab188  add x20,x20,#0x988
7101dab18c  b 0x7101dab194
7101dab190  add w8,w8,#0x1
7101dab194  sub x10,x29,#0xd0
7101dab198  add x9,x10,#0x8
7101dab19c  strb wzr,[x9, w8, UXTW ]
7101dab1a0  ldurb w9,[x29, #-0xc8]
7101dab1a4  stur w8,[x29, #-0xcc]
7101dab1a8  cbz w9,0x7101dab1c8
7101dab1ac  add x8,x10,#0x9
7101dab1b0  mov w10,#0x89
7101dab1b4  mul w11,w22,w10
7101dab1b8  and w9,w9,#0xff
7101dab1bc  eor w22,w11,w9
7101dab1c0  ldrb w9,[x8], #0x1
7101dab1c4  cbnz w9,0x7101dab1b4
7101dab1c8  mov x27,x26
7101dab1cc  stur w22,[x29, #-0xd0]
7101dab1d0  tbnz w24,#0x0,0x7101dab104
7101dab1d4  fmov s0,0x3f800000
7101dab1d8  adrp x1,0x71043f0000
7101dab1dc  add x1,x1,#0xd57
7101dab1e0  mov x0,x23
7101dab1e4  bl 0x7103778300
7101dab1e8  sub x8,x29,#0xd0
7101dab1ec  add x21,x8,#0x8
7101dab1f0  adrp x1,0x7104412000
7101dab1f4  add x1,x1,#0xd6e
7101dab1f8  add x8,sp,#0xd0
7101dab1fc  add x0,sp,#0x98
7101dab200  bl 0x7103776640
7101dab204  adrp x1,0x7104338000
7101dab208  add x1,x1,#0xd31
7101dab20c  add x8,sp,#0xc0
7101dab210  add x0,sp,#0xd0
7101dab214  bl 0x7103776910
7101dab218  add x0,sp,#0xc0
7101dab21c  mov x1,x21
7101dab220  bl 0x710377a120
7101dab224  ldr x0,[sp, #0xc8]
7101dab228  ldr x28,[sp, #0x10]
7101dab22c  adrp x26,0x710523d000
7101dab230  add x26,x26,#0x9a8
7101dab234  ldr w24,[sp, #0x2c]
7101dab238  stp x26,xzr,[sp, #0xc0]
7101dab23c  cbz x0,0x7101dab244
7101dab240  bl 0x710392eb40
7101dab244  and x8,x27,#-0x100000000000000
7101dab248  cmp x8,x25
7101dab24c  b.ne 0x7101dab300
7101dab250  and x8,x27,#0xffffffffff
7101dab254  cbz x8,0x7101dab300
7101dab258  mov w1,#0x13
7101dab25c  mov x0,x27
7101dab260  add x21,x19,#0x28
7101dab264  bl 0x7103238e70
7101dab268  tst x0,#0xffffffffff
7101dab26c  str x0,[sp, #0xc0]
7101dab270  b.eq 0x7101dab288
7101dab274  ldr x0,[x21]
7101dab278  ldrsw x2,[x0, #0x70]
7101dab27c  ldr w3,[x0, #0x68]
7101dab280  add x1,sp,#0xc0
7101dab284  bl 0x710323c4e0
7101dab288  mov x0,x21
7101dab28c  mov x1,x27
7101dab290  bl 0x710323f760
7101dab294  mov x21,x0
7101dab298  adrp x1,0x7104270000
7101dab29c  add x1,x1,#0x343
7101dab2a0  add x8,sp,#0xc0
7101dab2a4  add x0,sp,#0x98
7101dab2a8  bl 0x7103776910
7101dab2ac  ldr x22,[sp, #0xc8]
7101dab2b0  mov x0,x22
7101dab2b4  mov x1,x21
7101dab2b8  bl 0x7103778b80
7101dab2bc  stp x26,xzr,[sp, #0xc0]
7101dab2c0  cbz x22,0x7101dab2cc
7101dab2c4  mov x0,x22
7101dab2c8  bl 0x710392eb40
7101dab2cc  adrp x1,0x71043ef000
7101dab2d0  add x1,x1,#0x356
7101dab2d4  add x8,sp,#0xc0
7101dab2d8  add x0,sp,#0xd0
7101dab2dc  bl 0x7103776910
7101dab2e0  ldr x22,[sp, #0xc8]
7101dab2e4  mov x0,x22
7101dab2e8  mov x1,x21
7101dab2ec  bl 0x7103778b80
7101dab2f0  stp x26,xzr,[sp, #0xc0]
7101dab2f4  cbz x22,0x7101dab334
7101dab2f8  mov x0,x22
7101dab2fc  b 0x7101dab330
7101dab300  adrp x1,0x7104270000
7101dab304  add x1,x1,#0x343
7101dab308  add x8,sp,#0xc0
7101dab30c  add x0,sp,#0x98
7101dab310  bl 0x7103776910
7101dab314  ldr x21,[sp, #0xc8]
7101dab318  mov w1,#0x1
7101dab31c  mov x0,x21
7101dab320  bl 0x71037790a0
7101dab324  stp x26,xzr,[sp, #0xc0]
7101dab328  cbz x21,0x7101dab334
7101dab32c  mov x0,x21
7101dab330  bl 0x710392eb40
7101dab334  ldr x21,[sp, #0xd8]
7101dab338  stp x20,xzr,[sp, #0xd0]
7101dab33c  cbz x21,0x7101dab358
7101dab340  ldr x0,[x21, #0x18]
7101dab344  stp x26,xzr,[x21, #0x10]
7101dab348  cbz x0,0x7101dab350
7101dab34c  bl 0x710392eb40
7101dab350  mov x0,x21
7101dab354  bl 0x710392eb40
7101dab358  ldr x21,[sp, #0x88]
7101dab35c  stp x20,xzr,[sp, #0x80]
7101dab360  cbz x21,0x7101dab37c
7101dab364  ldr x0,[x21, #0x18]
7101dab368  stp x26,xzr,[x21, #0x10]
7101dab36c  cbz x0,0x7101dab374
7101dab370  bl 0x710392eb40
7101dab374  mov x0,x21
7101dab378  bl 0x710392eb40
7101dab37c  stp x20,xzr,[sp, #0x98]
7101dab380  cbz x23,0x7101dab39c
7101dab384  ldr x0,[x23, #0x18]
7101dab388  stp x26,xzr,[x23, #0x10]
7101dab38c  cbz x0,0x7101dab394
7101dab390  bl 0x710392eb40
7101dab394  mov x0,x23
7101dab398  bl 0x710392eb40
7101dab39c  ldr w8,[x19, #0x90]
7101dab3a0  mov x0,x19
7101dab3a4  cmp w8,#0x2
7101dab3a8  b.ne 0x7101dab3b4
7101dab3ac  bl 0x7101da5a40
7101dab3b0  b 0x7101dab3b8
7101dab3b4  bl 0x7101dac110
7101dab3b8  and w8,w24,#0xff
7101dab3bc  sub w8,w8,#0x1
7101dab3c0  cmp w8,#0x3
7101dab3c4  b.hi 0x7101dab4d4
7101dab3c8  adrp x9,0x71044fb000
7101dab3cc  add x9,x9,#0x4a8
7101dab3d0  ldrsw x8,[x9, x8, LSL #0x2]
7101dab3d4  add x8,x8,x9
7101dab3d8  br x8
7101dab3dc  adrp x1,0x710438d000
7101dab3e0  add x1,x1,#0x7
7101dab3e4  sub x8,x29,#0xd0
7101dab3e8  mov x0,x28
7101dab3ec  bl 0x7103776640
7101dab3f0  ldur x21,[x29, #-0xc8]
7101dab3f4  fmov s0,0x3f800000
7101dab3f8  adrp x1,0x710434a000
7101dab3fc  add x1,x1,#0x8a5
7101dab400  mov x0,x21
7101dab404  bl 0x7103778300
7101dab408  b 0x7101dab4b0
7101dab40c  adrp x1,0x7104433000
7101dab410  add x1,x1,#0x603
7101dab414  sub x8,x29,#0xd0
7101dab418  mov x0,x28
7101dab41c  bl 0x7103776640
7101dab420  adrp x1,0x710432a000
7101dab424  add x1,x1,#0x5d7
7101dab428  b 0x7101dab468
7101dab42c  adrp x1,0x7104433000
7101dab430  add x1,x1,#0x603
7101dab434  sub x8,x29,#0xd0
7101dab438  mov x0,x28
7101dab43c  bl 0x7103776640
7101dab440  adrp x1,0x7104292000
7101dab444  add x1,x1,#0x1bb
7101dab448  b 0x7101dab468
7101dab44c  adrp x1,0x7104433000
7101dab450  add x1,x1,#0x603
7101dab454  sub x8,x29,#0xd0
7101dab458  mov x0,x28
7101dab45c  bl 0x7103776640
7101dab460  adrp x1,0x7104270000
7101dab464  add x1,x1,#0x503
7101dab468  add x8,sp,#0x98
7101dab46c  sub x0,x29,#0xd0
7101dab470  bl 0x7103776640
7101dab474  ldr x21,[sp, #0xa0]
7101dab478  fmov s0,0x3f800000
7101dab47c  adrp x1,0x710434a000
7101dab480  add x1,x1,#0x8a5
7101dab484  mov x0,x21
7101dab488  bl 0x7103778300
7101dab48c  stp x20,xzr,[sp, #0x98]
7101dab490  cbz x21,0x7101dab4ac
7101dab494  ldr x0,[x21, #0x18]
7101dab498  stp x26,xzr,[x21, #0x10]
7101dab49c  cbz x0,0x7101dab4a4
7101dab4a0  bl 0x710392eb40
7101dab4a4  mov x0,x21
7101dab4a8  bl 0x710392eb40
7101dab4ac  ldur x21,[x29, #-0xc8]
7101dab4b0  stur x20,[x29, #-0xd0]
7101dab4b4  stur xzr,[x29, #-0xc8]
7101dab4b8  cbz x21,0x7101dab4d4
7101dab4bc  ldr x0,[x21, #0x18]
7101dab4c0  stp x26,xzr,[x21, #0x10]
7101dab4c4  cbz x0,0x7101dab4cc
7101dab4c8  bl 0x710392eb40
7101dab4cc  mov x0,x21
7101dab4d0  bl 0x710392eb40
7101dab4d4  ldrsh w9,[x19, #0x98]
7101dab4d8  ldrb w8,[x19, #0x450]
7101dab4dc  cmn w9,#0x1
7101dab4e0  b.eq 0x7101dab4f4
7101dab4e4  cbnz w8,0x7101dab530
7101dab4e8  mov w8,#0x1
7101dab4ec  strb w8,[x19, #0x450]
7101dab4f0  b 0x7101dab4fc
7101dab4f4  cbz w8,0x7101dab530
7101dab4f8  strb wzr,[x19, #0x450]
7101dab4fc  adrp x1,0x7104280000
7101dab500  add x1,x1,#0xed1
7101dab504  sub x8,x29,#0xd0
7101dab508  mov x0,x28
7101dab50c  bl 0x7103776910
7101dab510  ldrb w1,[x19, #0x450]
7101dab514  ldur x19,[x29, #-0xc8]
7101dab518  ldr x0,[x19]
7101dab51c  bl 0x710377aa20
7101dab520  stp x26,xzr,[x29, #-0xd0]
7101dab524  cbz x19,0x7101dab530
7101dab528  mov x0,x19
7101dab52c  bl 0x710392eb40
7101dab530  ldp d9,d8,[sp, #0x150]
7101dab534  ldr d12,[sp, #0x130]
7101dab538  ldp d11,d10,[sp, #0x140]
7101dab53c  ldp x29,x30,[sp, #0x1b0]
7101dab540  ldp x20,x19,[sp, #0x1a0]
7101dab544  ldp x22,x21,[sp, #0x190]
7101dab548  ldp x24,x23,[sp, #0x180]
7101dab54c  ldp x26,x25,[sp, #0x170]
7101dab550  ldp x28,x27,[sp, #0x160]
7101dab554  add sp,sp,#0x1c0
7101dab558  ret
7101dab55c  mov x0,x23
7101dab560  bl 0x71039c1330
7101dab564  ldr x0,[sp]
7101dab568  bl 0x71039c1330
7101dab56c  bl 0x71039c2650
