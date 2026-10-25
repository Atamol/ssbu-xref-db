// addr:      7101c3de80
// offset:    0x1c3de80
// name:      FUN_7101c3de80
// mangled:   
// size:      3264

7101c3de80  sub sp,sp,#0x190
7101c3de84  str d12,[sp, #0x100]
7101c3de88  stp d11,d10,[sp, #0x110]
7101c3de8c  stp d9,d8,[sp, #0x120]
7101c3de90  stp x28,x27,[sp, #0x130]
7101c3de94  stp x26,x25,[sp, #0x140]
7101c3de98  stp x24,x23,[sp, #0x150]
7101c3de9c  stp x22,x21,[sp, #0x160]
7101c3dea0  stp x20,x19,[sp, #0x170]
7101c3dea4  stp x29,x30,[sp, #0x180]
7101c3dea8  add x29,sp,#0x180
7101c3deac  ldr w8,[x0, #0x164]
7101c3deb0  mov x28,x0
7101c3deb4  cbnz w8,0x7101c3e098
7101c3deb8  ldr x0,[x28, #0x40]
7101c3debc  ldr x8,[x0]
7101c3dec0  ldr x8,[x8, #0x60]
7101c3dec4  mov w1,wzr
7101c3dec8  mov w19,#0x9dc5
7101c3decc  movk w19,#0x811c, LSL #16
7101c3ded0  blr x8
7101c3ded4  ldr x0,[x28, #0x40]
7101c3ded8  ldr x8,[x0]
7101c3dedc  ldr x8,[x8, #0x70]
7101c3dee0  mov w1,wzr
7101c3dee4  blr x8
7101c3dee8  ldr x0,[x28, #0x50]
7101c3deec  ldr x8,[x0]
7101c3def0  ldr x8,[x8, #0x60]
7101c3def4  mov w1,wzr
7101c3def8  blr x8
7101c3defc  mov x20,x28
7101c3df00  ldr x0,[x20, #0x48]!
7101c3df04  ldr x8,[x0]
7101c3df08  ldr x8,[x8, #0x60]
7101c3df0c  mov w1,#0x1
7101c3df10  blr x8
7101c3df14  ldr x0,[x20]
7101c3df18  ldr x8,[x0]
7101c3df1c  ldr x8,[x8, #0x70]
7101c3df20  mov w1,#0x1
7101c3df24  blr x8
7101c3df28  ldr w1,[x20, #0x150]
7101c3df2c  mov x0,x20
7101c3df30  mov w2,wzr
7101c3df34  bl 0x7103771a80
7101c3df38  mov x22,#0x656d
7101c3df3c  movk x22,#0x5f6c, LSL #16
7101c3df40  ldr x8,[x20, #0x158]
7101c3df44  orr x9,xzr,#0x1f00000000
7101c3df48  movk x22,#0x6f74, LSL #32
7101c3df4c  movk x22,#0x7275, LSL #48
7101c3df50  stp x9,x22,[sp, #0x90]
7101c3df54  mov x9,#0x5f65
7101c3df58  movk x9,#0x6568, LSL #16
7101c3df5c  mov x23,#0x616e
7101c3df60  movk x23,#0x656d, LSL #16
7101c3df64  movk x9,#0x706c, LSL #32
7101c3df68  movk x9,#0x735f, LSL #48
7101c3df6c  stur x9,[sp, #0xaa]
7101c3df70  mov w11,#0x6c65
7101c3df74  movk w11,#0x6365, LSL #16
7101c3df78  stur w11,[sp, #0xb2]
7101c3df7c  mov w12,#0x74
7101c3df80  movk x23,#0x746e, LSL #32
7101c3df84  movk x23,#0x745f, LSL #48
7101c3df88  mov w24,#0x7079
7101c3df8c  strh w12,[sp, #0xb6]
7101c3df90  str x23,[sp, #0xa0]
7101c3df94  mov w10,#0x6d
7101c3df98  mov w9,#0x9
7101c3df9c  strh w24,[sp, #0xa8]
7101c3dfa0  mov w21,#0x89
7101c3dfa4  add x11,sp,#0x90
7101c3dfa8  mov w12,w19
7101c3dfac  mul w12,w12,w21
7101c3dfb0  and w10,w10,#0xff
7101c3dfb4  eor w12,w12,w10
7101c3dfb8  ldrb w10,[x11, x9, LSL ]
7101c3dfbc  add x9,x9,#0x1
7101c3dfc0  cbnz w10,0x7101c3dfac
7101c3dfc4  str w12,[sp, #0x90]
7101c3dfc8  ldr x0,[x8, #0x80]
7101c3dfcc  add x1,sp,#0x90
7101c3dfd0  add x25,sp,#0x90
7101c3dfd4  bl 0x7101af53d0
7101c3dfd8  adrp x8,0x7105314000
7101c3dfdc  add x8,x8,#0x4d8
7101c3dfe0  ldarb w8,[x8]
7101c3dfe4  tbz w8,#0x0,0x7101c3eaf0
7101c3dfe8  adrp x8,0x7105305000
7101c3dfec  ldr w20,[x8, #0xf0]
7101c3dff0  ldr x0,[x28, #0x1a0]
7101c3dff4  mov w1,w20
7101c3dff8  bl 0x7101af8900
7101c3dffc  ldr x26,[x28, #0x1a0]
7101c3e000  add x0,sp,#0x90
7101c3e004  mov w1,w20
7101c3e008  bl 0x7103394f60
7101c3e00c  ldr x0,[x26, #0x80]
7101c3e010  add x1,sp,#0x90
7101c3e014  bl 0x7101af8c80
7101c3e018  ldr x26,[x28, #0x1a0]
7101c3e01c  add x0,sp,#0x90
7101c3e020  mov w1,w20
7101c3e024  bl 0x7103395260
7101c3e028  ldr x0,[x26, #0x80]
7101c3e02c  add x1,sp,#0x90
7101c3e030  bl 0x7101af8e90
7101c3e034  ldr x8,[x28, #0x1a0]
7101c3e038  mov x9,#0x1900000000
7101c3e03c  mov x11,#0x5f65
7101c3e040  movk x11,#0x6974, LSL #16
7101c3e044  stp x9,x22,[sp, #0x90]
7101c3e048  movk x11,#0x6c74, LSL #32
7101c3e04c  movk x11,#0x65, LSL #48
7101c3e050  mov w10,#0x6d
7101c3e054  mov w9,#0x9
7101c3e058  str x23,[sp, #0xa0]
7101c3e05c  strh w24,[sp, #0xa8]
7101c3e060  stur x11,[sp, #0xaa]
7101c3e064  mul w11,w19,w21
7101c3e068  and w10,w10,#0xff
7101c3e06c  eor w19,w11,w10
7101c3e070  ldrb w10,[x25, x9, LSL ]
7101c3e074  add x9,x9,#0x1
7101c3e078  cbnz w10,0x7101c3e064
7101c3e07c  str w19,[sp, #0x90]
7101c3e080  ldr x0,[x8, #0x80]
7101c3e084  add x1,sp,#0x90
7101c3e088  bl 0x7101af90b0
7101c3e08c  ldr x0,[x28, #0x1a0]
7101c3e090  mov w1,w20
7101c3e094  bl 0x7101af8900
7101c3e098  add x19,x28,#0x30
7101c3e09c  adrp x1,0x710425f000
7101c3e0a0  add x1,x1,#0x38e
7101c3e0a4  add x8,sp,#0x90
7101c3e0a8  mov x0,x19
7101c3e0ac  bl 0x71037780e0
7101c3e0b0  ldr x20,[sp, #0x98]
7101c3e0b4  ldr x0,[x20, #0x8]
7101c3e0b8  cbz x0,0x7101c3e0d0
7101c3e0bc  ldr x8,[x0]
7101c3e0c0  ldr x8,[x8, #0x138]
7101c3e0c4  blr x8
7101c3e0c8  mov w21,w0
7101c3e0cc  b 0x7101c3e0d4
7101c3e0d0  mov w21,#0x1
7101c3e0d4  adrp x8,0x710523d000
7101c3e0d8  add x8,x8,#0x9e8
7101c3e0dc  stp x8,xzr,[sp, #0x90]
7101c3e0e0  cbz x20,0x7101c3e0ec
7101c3e0e4  mov x0,x20
7101c3e0e8  bl 0x710392eb40
7101c3e0ec  tbz w21,#0x0,0x7101c3eac4
7101c3e0f0  mov w8,#0x1
7101c3e0f4  strb w8,[x28, #0x408]
7101c3e0f8  ldrsw x8,[x28, #0x15c]
7101c3e0fc  cmp w8,#0x13
7101c3e100  b.cs 0x7101c3eb3c
7101c3e104  add x8,x28,x8, LSL #0x2
7101c3e108  mov w9,#0x5
7101c3e10c  str w9,[x8, #0x110]
7101c3e110  adrp x8,0x7105329000
7101c3e114  ldr x8,[x8, #0x70]
7101c3e118  cbz x8,0x7101c3e1a0
7101c3e11c  ldr w10,[x28, #0x170]
7101c3e120  adrp x11,0x7105329000
7101c3e124  add x11,x11,#0x70
7101c3e128  mov x9,x11
7101c3e12c  mov x12,x8
7101c3e130  ldr w13,[x12, #0x20]
7101c3e134  cmp w13,w10
7101c3e138  cset w13,lt
7101c3e13c  csel x9,x9,x12,lt
7101c3e140  ldr x12,[x12, w13, UXTW #0x3]
7101c3e144  cbnz x12,0x7101c3e130
7101c3e148  cmp x9,x11
7101c3e14c  b.eq 0x7101c3e15c
7101c3e150  ldr w11,[x9, #0x20]
7101c3e154  cmp w11,w10
7101c3e158  b.le 0x7101c3e2a4
7101c3e15c  adrp x9,0x7105329000
7101c3e160  add x9,x9,#0x70
7101c3e164  b 0x7101c3e170
7101c3e168  mov x9,x8
7101c3e16c  mov x8,x10
7101c3e170  ldr w10,[x8, #0x20]
7101c3e174  cmp w10,#0x1
7101c3e178  b.lt 0x7101c3e18c
7101c3e17c  ldr x10,[x8]
7101c3e180  mov x9,x8
7101c3e184  cbnz x10,0x7101c3e168
7101c3e188  b 0x7101c3e19c
7101c3e18c  tbz w10,#0x1f,0x7101c3e19c
7101c3e190  ldr x10,[x8, #0x8]!
7101c3e194  mov x9,x8
7101c3e198  cbnz x10,0x7101c3e168
7101c3e19c  ldr x8,[x9]
7101c3e1a0  add x8,x8,#0x28
7101c3e1a4  add x9,x28,#0x180
7101c3e1a8  cmp x9,x8
7101c3e1ac  str x9,[sp, #0x18]
7101c3e1b0  b.eq 0x7101c3e230
7101c3e1b4  ldp x22,x24,[x8]
7101c3e1b8  ldr x8,[x28, #0x190]
7101c3e1bc  ldr x20,[x28, #0x180]
7101c3e1c0  sub x23,x24,x22
7101c3e1c4  mov x26,x19
7101c3e1c8  asr x19,x23,#0x3
7101c3e1cc  sub x9,x8,x20
7101c3e1d0  cmp x19,x9, ASR #0x3
7101c3e1d4  b.ls 0x7101c3e238
7101c3e1d8  cbz x20,0x7101c3e1f8
7101c3e1dc  mov x0,x20
7101c3e1e0  str x20,[x28, #0x188]
7101c3e1e4  bl 0x710392eb40
7101c3e1e8  ldr x9,[sp, #0x18]
7101c3e1ec  mov x8,xzr
7101c3e1f0  str xzr,[x9]
7101c3e1f4  stp xzr,xzr,[x9, #0x8]
7101c3e1f8  lsr x9,x19,#0x3d
7101c3e1fc  cbnz x9,0x7101c3e228
7101c3e200  asr x9,x8,#0x3
7101c3e204  orr x10,xzr,#0xffffffffffffffe
7101c3e208  cmp x9,x10
7101c3e20c  b.hi 0x7101c3e2c0
7101c3e210  asr x8,x8,#0x2
7101c3e214  cmp x8,x19
7101c3e218  b.cc 0x7101c3e2c4
7101c3e21c  lsr x9,x8,#0x3d
7101c3e220  mov x19,x8
7101c3e224  cbz x9,0x7101c3e2c4
7101c3e228  ldr x0,[sp, #0x18]
7101c3e22c  bl 0x71039c0c00
7101c3e230  add x22,x28,#0x188
7101c3e234  b 0x7101c3e360
7101c3e238  ldr x8,[x28, #0x188]
7101c3e23c  sub x8,x8,x20
7101c3e240  asr x25,x8,#0x3
7101c3e244  add x8,x22,x8
7101c3e248  cmp x19,x25
7101c3e24c  csel x21,x8,x24,hi
7101c3e250  subs x23,x21,x22
7101c3e254  b.eq 0x7101c3e268
7101c3e258  mov x0,x20
7101c3e25c  mov x1,x22
7101c3e260  mov x2,x23
7101c3e264  bl 0x71039c00a0
7101c3e268  add x22,x28,#0x188
7101c3e26c  cmp x19,x25
7101c3e270  b.ls 0x7101c3e2ac
7101c3e274  sub x20,x24,x21
7101c3e278  cmp x20,#0x1
7101c3e27c  mov x19,x26
7101c3e280  b.lt 0x7101c3e360
7101c3e284  ldr x0,[x22]
7101c3e288  mov x1,x21
7101c3e28c  mov x2,x20
7101c3e290  bl 0x71039c00e0
7101c3e294  ldr x8,[x22]
7101c3e298  add x8,x8,x20
7101c3e29c  str x8,[x22]
7101c3e2a0  b 0x7101c3e360
7101c3e2a4  add x8,x9,#0x28
7101c3e2a8  b 0x7101c3e1a4
7101c3e2ac  asr x8,x23,#0x3
7101c3e2b0  add x8,x20,x8, LSL #0x3
7101c3e2b4  str x8,[x22]
7101c3e2b8  mov x19,x26
7101c3e2bc  b 0x7101c3e360
7101c3e2c0  orr x19,xzr,#0x1fffffffffffffff
7101c3e2c4  lsl x8,x19,#0x3
7101c3e2c8  cmp x8,#0x0
7101c3e2cc  csinc x20,x8,xzr,ne
7101c3e2d0  mov w0,#0x10
7101c3e2d4  mov x1,x20
7101c3e2d8  bl 0x710392e290
7101c3e2dc  mov x21,x0
7101c3e2e0  cbnz x0,0x7101c3e328
7101c3e2e4  adrp x8,0x7105332000
7101c3e2e8  ldr x0,[x8, #0xf00]
7101c3e2ec  cbz x0,0x7101c3e324
7101c3e2f0  stur wzr,[x29, #-0xa8]
7101c3e2f4  str x20,[sp, #0x90]
7101c3e2f8  ldr x8,[x0]
7101c3e2fc  ldr x8,[x8, #0x30]
7101c3e300  sub x1,x29,#0xa8
7101c3e304  add x2,sp,#0x90
7101c3e308  blr x8
7101c3e30c  tbz w0,#0x0,0x7101c3e324
7101c3e310  mov w0,#0x10
7101c3e314  mov x1,x20
7101c3e318  bl 0x710392e290
7101c3e31c  mov x21,x0
7101c3e320  cbnz x0,0x7101c3e328
7101c3e324  mov x21,xzr
7101c3e328  add x8,x21,x19, LSL #0x3
7101c3e32c  add x20,x28,#0x188
7101c3e330  cmp x23,#0x1
7101c3e334  stp x21,x21,[x28, #0x180]
7101c3e338  str x8,[x28, #0x190]
7101c3e33c  b.lt 0x7101c3e358
7101c3e340  mov x0,x21
7101c3e344  mov x1,x22
7101c3e348  mov x2,x23
7101c3e34c  bl 0x71039c00e0
7101c3e350  add x8,x21,x23
7101c3e354  str x8,[x20]
7101c3e358  mov x19,x26
7101c3e35c  mov x22,x20
7101c3e360  adrp x10,0x7104466000
7101c3e364  ldr q0,[x10, #0x960]
7101c3e368  ldr x8,[sp, #0x18]
7101c3e36c  adrp x10,0x7104469000
7101c3e370  ldr x9,[x22]
7101c3e374  ldr x8,[x8]
7101c3e378  str q0,[sp, #0x90]
7101c3e37c  ldr q0,[x10, #0x20]
7101c3e380  adrp x10,0x7104468000
7101c3e384  sub x9,x9,x8
7101c3e388  asr x2,x9,#0x3
7101c3e38c  adrp x9,0x7104466000
7101c3e390  cmp x2,#0x4
7101c3e394  str q0,[sp, #0xa0]
7101c3e398  ldr q0,[x10, #0xaf0]
7101c3e39c  str q0,[sp, #0xb0]
7101c3e3a0  ldr q0,[x9, #0x670]
7101c3e3a4  mov w9,#0x4
7101c3e3a8  csel x24,x2,x9,cc
7101c3e3ac  str q0,[sp, #0xc0]
7101c3e3b0  cbz x24,0x7101c3eab4
7101c3e3b4  adrp x9,0x7104466000
7101c3e3b8  ldr q0,[x9, #0x940]
7101c3e3bc  adrp x9,0x7104472000
7101c3e3c0  stp x22,x19,[sp, #0x8]
7101c3e3c4  mov x22,xzr
7101c3e3c8  ldr s8,[x9, #0x410]
7101c3e3cc  adrp x9,0x7104471000
7101c3e3d0  ldr s9,[x9, #0xff4]
7101c3e3d4  fmov s10,0x3f800000
7101c3e3d8  fmov s11,0xc1000000
7101c3e3dc  fmov s12,0x41000000
7101c3e3e0  adrp x26,0x7105329000
7101c3e3e4  add x25,sp,#0x90
7101c3e3e8  mov w21,#0xbf800000
7101c3e3ec  orr x27,xzr,#0x3f8000003f800000
7101c3e3f0  adrp x23,0x7104412000
7101c3e3f4  add x23,x23,#0x9fa
7101c3e3f8  str q0,[sp, #0x60]
7101c3e3fc  stp x24,x28,[sp, #0x20]
7101c3e400  b 0x7101c3e408
7101c3e404  ldr x8,[x28, #0x180]
7101c3e408  add x19,x8,x22, LSL #0x3
7101c3e40c  stp xzr,xzr,[x29, #-0x98]
7101c3e410  stp xzr,xzr,[x29, #-0xa8]
7101c3e414  ldrb w8,[x19]
7101c3e418  sub x1,x29,#0xa8
7101c3e41c  stur w8,[x29, #-0xa8]
7101c3e420  ldr w8,[x28, #0x170]
7101c3e424  stur w8,[x29, #-0xa4]
7101c3e428  ldrb w8,[x19, #0x2]!
7101c3e42c  stur w8,[x29, #-0xa0]
7101c3e430  ldrb w8,[x19, #0x1]
7101c3e434  stur w8,[x29, #-0x9c]
7101c3e438  ldrb w8,[x19, #0x2]
7101c3e43c  stur w8,[x29, #-0x98]
7101c3e440  ldrb w8,[x19, #0x3]
7101c3e444  stur w8,[x29, #-0x94]
7101c3e448  ldrb w8,[x19, #0x4]
7101c3e44c  stur w8,[x29, #-0x90]
7101c3e450  ldurb w8,[x19, #-0x1]
7101c3e454  add x8,x19,x8
7101c3e458  ldurb w8,[x8, #-0x1]
7101c3e45c  stur w8,[x29, #-0x8c]
7101c3e460  ldr x8,[x26, #0x60]
7101c3e464  ldr x0,[x8, #0x8]
7101c3e468  bl 0x7102350980
7101c3e46c  ldr x8,[x26, #0x60]
7101c3e470  ldrb w9,[x19, #0x5]
7101c3e474  mov x1,x23
7101c3e478  ldr q1,[sp, #0x60]
7101c3e47c  mov w2,w22
7101c3e480  ldr x10,[x8, #0x8]
7101c3e484  strb w9,[x10, #0xb0]
7101c3e488  ldr q0,[x25,x22, lsl #4]
7101c3e48c  fadd v0.4S,v0.4S,v1.4S
7101c3e490  ldr x9,[x8, #0x8]
7101c3e494  stp q0,q0,[x9, #0x100]
7101c3e498  str w21,[x9, #0x130]
7101c3e49c  str q0,[x9, #0x120]
7101c3e4a0  ldr x8,[x8, #0x8]
7101c3e4a4  mov x9,#0x3f800000
7101c3e4a8  movk x9,#0xbf80, LSL #48
7101c3e4ac  stur x27,[x8, #0xe4]
7101c3e4b0  stur x9,[x8, #0xec]
7101c3e4b4  ldr x8,[x28, #0x10]
7101c3e4b8  ldr x8,[x8]
7101c3e4bc  add x0,x8,#0x8
7101c3e4c0  add x8,sp,#0x80
7101c3e4c4  bl 0x7103776640
7101c3e4c8  sub x8,x29,#0xa8
7101c3e4cc  add x0,sp,#0x80
7101c3e4d0  adrp x1,0x71042a3000
7101c3e4d4  add x1,x1,#0x5d
7101c3e4d8  bl 0x7103776910
7101c3e4dc  ldur x20,[x29, #-0xa0]
7101c3e4e0  ldr x2,[x20]
7101c3e4e4  mov v0.16B,v8.16B
7101c3e4e8  mov v1.16B,v9.16B
7101c3e4ec  mov x0,x28
7101c3e4f0  mov w1,w22
7101c3e4f4  bl 0x7101c3f510
7101c3e4f8  adrp x8,0x710523d000
7101c3e4fc  add x8,x8,#0x9a8
7101c3e500  stp x8,xzr,[x29, #-0xa8]
7101c3e504  cbz x20,0x7101c3e510
7101c3e508  mov x0,x20
7101c3e50c  bl 0x710392eb40
7101c3e510  orr w8,wzr,#0x18
7101c3e514  madd x20,x22,x8,x28
7101c3e518  ldr x8,[x20, #0x1a8]
7101c3e51c  str x8,[x20, #0x1b0]
7101c3e520  ldr x8,[x26, #0x60]
7101c3e524  ldr x9,[x8, #0x8]
7101c3e528  ldr w10,[x9, #0x4]
7101c3e52c  cbz w10,0x7101c3ea5c
7101c3e530  sub w10,w10,#0x1
7101c3e534  orr w11,wzr,#0x18
7101c3e538  umaddl x10,w10,w11,x9
7101c3e53c  ldp x9,x10,[x10, #0x8]
7101c3e540  cmp x10,x9
7101c3e544  b.eq 0x7101c3ea5c
7101c3e548  ldp x23,x19,[x9]
7101c3e54c  cbz x19,0x7101c3e564
7101c3e550  add x9,x19,#0x8
7101c3e554  ldxr x10,[x9]
7101c3e558  add x10,x10,#0x1
7101c3e55c  stxr w11,x10,[x9]
7101c3e560  cbnz w11,0x7101c3e554
7101c3e564  cbz x23,0x7101c3ea20
7101c3e568  ldr x0,[x8, #0x8]
7101c3e56c  add x2,x0,#0x110
7101c3e570  str x19,[sp, #0x30]
7101c3e574  cbz x19,0x7101c3e61c
7101c3e578  add x9,x19,#0x8
7101c3e57c  ldxr x10,[x9]
7101c3e580  add x10,x10,#0x1
7101c3e584  stxr w11,x10,[x9]
7101c3e588  cbnz w11,0x7101c3e57c
7101c3e58c  ldr x0,[x8, #0x8]
7101c3e590  mov x8,x19
7101c3e594  add x19,x19,#0x8
7101c3e598  stp x23,x8,[x29, #-0xa8]
7101c3e59c  ldxr x8,[x19]
7101c3e5a0  add x8,x8,#0x1
7101c3e5a4  stxr w9,x8,[x19]
7101c3e5a8  cbnz w9,0x7101c3e59c
7101c3e5ac  sub x1,x29,#0xa8
7101c3e5b0  mov w3,wzr
7101c3e5b4  bl 0x7102351c30
7101c3e5b8  ldaxr x8,[x19]
7101c3e5bc  sub x9,x8,#0x1
7101c3e5c0  stlxr w10,x9,[x19]
7101c3e5c4  cbnz w10,0x7101c3e5b8
7101c3e5c8  cbnz x8,0x7101c3e5e8
7101c3e5cc  ldr x21,[sp, #0x30]
7101c3e5d0  ldr x8,[x21]
7101c3e5d4  ldr x8,[x8, #0x10]
7101c3e5d8  mov x0,x21
7101c3e5dc  blr x8
7101c3e5e0  mov x0,x21
7101c3e5e4  bl 0x71039c2670
7101c3e5e8  ldaxr x8,[x19]
7101c3e5ec  sub x9,x8,#0x1
7101c3e5f0  stlxr w10,x9,[x19]
7101c3e5f4  cbnz w10,0x7101c3e5e8
7101c3e5f8  cbnz x8,0x7101c3e62c
7101c3e5fc  ldr x19,[sp, #0x30]
7101c3e600  ldr x8,[x19]
7101c3e604  ldr x8,[x8, #0x10]
7101c3e608  mov x0,x19
7101c3e60c  blr x8
7101c3e610  mov x0,x19
7101c3e614  bl 0x71039c2670
7101c3e618  b 0x7101c3e62c
7101c3e61c  sub x1,x29,#0xa8
7101c3e620  mov w3,wzr
7101c3e624  stp x23,x19,[x29, #-0xa8]
7101c3e628  bl 0x7102351c30
7101c3e62c  ldr x8,[x23]
7101c3e630  ldr w9,[x8, #0x4]
7101c3e634  cmp w9,#0x0
7101c3e638  mov w9,#0x10
7101c3e63c  orr w10,wzr,#0x38
7101c3e640  csel x9,x10,x9,eq
7101c3e644  mov w10,#0x8
7101c3e648  orr w11,wzr,#0x30
7101c3e64c  csel x10,x11,x10,eq
7101c3e650  ldr x9,[x8, x9, LSL #0x0]
7101c3e654  mov w11,#0x2
7101c3e658  ldr x8,[x8, x10, LSL #0x0]
7101c3e65c  mov w10,#0x4
7101c3e660  csel x10,x11,x10,eq
7101c3e664  sub x8,x9,x8
7101c3e668  lsr x8,x8,x10
7101c3e66c  cbz w8,0x7101c3e7a0
7101c3e670  mov x19,xzr
7101c3e674  add x27,x19,#0x1
7101c3e678  sub x8,x29,#0xa8
7101c3e67c  add x0,sp,#0x80
7101c3e680  adrp x1,0x710437c000
7101c3e684  add x1,x1,#0x4d6
7101c3e688  mov w2,w27
7101c3e68c  bl 0x7103776910
7101c3e690  ldr x0,[x23]
7101c3e694  ldr x8,[x0, #0x8]!
7101c3e698  ldr x9,[x0, #0x8]
7101c3e69c  sub x9,x9,x8
7101c3e6a0  asr x9,x9,#0x4
7101c3e6a4  cmp x9,x19
7101c3e6a8  b.ls 0x7101c3eb30
7101c3e6ac  add x9,x8,x19, LSL #0x4
7101c3e6b0  ldp x8,x21,[x9]
7101c3e6b4  cbz x21,0x7101c3e6cc
7101c3e6b8  add x9,x21,#0x8
7101c3e6bc  ldxr x10,[x9]
7101c3e6c0  add x10,x10,#0x1
7101c3e6c4  stxr w11,x10,[x9]
7101c3e6c8  cbnz w11,0x7101c3e6bc
7101c3e6cc  ldur x9,[x29, #-0xa0]
7101c3e6d0  ldr x9,[x9]
7101c3e6d4  cbz x9,0x7101c3e708
7101c3e6d8  ldr x8,[x8]
7101c3e6dc  ldr q0,[x8, #0xa0]
7101c3e6e0  ldrb w8,[x9, #0x58]
7101c3e6e4  orr w8,w8,#0x10
7101c3e6e8  fcmp s0,#0.0
7101c3e6ec  fcsel s2,s12,s11,mi
7101c3e6f0  dup s1,v0.S[0x1]
7101c3e6f4  fadd s0,s0,s2
7101c3e6f8  fneg s1,s1
7101c3e6fc  str s0,[x9, #0x30]
7101c3e700  str s1,[x9, #0x34]
7101c3e704  strb w8,[x9, #0x58]
7101c3e708  cbz x21,0x7101c3e73c
7101c3e70c  add x8,x21,#0x8
7101c3e710  ldaxr x9,[x8]
7101c3e714  sub x10,x9,#0x1
7101c3e718  stlxr w11,x10,[x8]
7101c3e71c  cbnz w11,0x7101c3e710
7101c3e720  cbnz x9,0x7101c3e73c
7101c3e724  ldr x8,[x21]
7101c3e728  ldr x8,[x8, #0x10]
7101c3e72c  mov x0,x21
7101c3e730  blr x8
7101c3e734  mov x0,x21
7101c3e738  bl 0x71039c2670
7101c3e73c  ldur x0,[x29, #-0xa0]
7101c3e740  adrp x8,0x710523d000
7101c3e744  add x8,x8,#0x9a8
7101c3e748  stp x8,xzr,[x29, #-0xa8]
7101c3e74c  cbz x0,0x7101c3e754
7101c3e750  bl 0x710392eb40
7101c3e754  ldr x8,[x23]
7101c3e758  ldr w9,[x8, #0x4]
7101c3e75c  cmp w9,#0x0
7101c3e760  mov w9,#0x8
7101c3e764  orr w10,wzr,#0x30
7101c3e768  csel x9,x10,x9,eq
7101c3e76c  mov w10,#0x10
7101c3e770  orr w11,wzr,#0x38
7101c3e774  csel x10,x11,x10,eq
7101c3e778  mov w11,#0x4
7101c3e77c  ldr x10,[x8, x10, LSL #0x0]
7101c3e780  ldr x8,[x8, x9, LSL #0x0]
7101c3e784  mov w12,#0x2
7101c3e788  csel x11,x12,x11,eq
7101c3e78c  sub x8,x10,x8
7101c3e790  lsr x8,x8,x11
7101c3e794  cmp x27,w8, UXTW 
7101c3e798  mov x19,x27
7101c3e79c  b.cc 0x7101c3e674
7101c3e7a0  ldr x8,[x26, #0x60]
7101c3e7a4  ldr x8,[x8, #0x8]
7101c3e7a8  mov w19,#0xae10
7101c3e7ac  mov w11,#0xae14
7101c3e7b0  add x10,x8,x19
7101c3e7b4  add x11,x8,x11
7101c3e7b8  ldr w9,[x10]
7101c3e7bc  ldr w12,[x11]
7101c3e7c0  adds w12,w12,w9
7101c3e7c4  b.eq 0x7101c3ea0c
7101c3e7c8  add x10,x20,#0x1a8
7101c3e7cc  str x10,[sp, #0x70]
7101c3e7d0  orr w10,wzr,#0x18
7101c3e7d4  madd x10,x22,x10,x28
7101c3e7d8  mov x27,xzr
7101c3e7dc  add x23,x20,#0x1b0
7101c3e7e0  mov w24,w12
7101c3e7e4  mov w25,#0x210
7101c3e7e8  mov w20,#0xa210
7101c3e7ec  str x23,[sp, #0x38]
7101c3e7f0  add x10,x10,#0x1b8
7101c3e7f4  str x10,[sp, #0x78]
7101c3e7f8  b 0x7101c3e804
7101c3e7fc  ldr w9,[x10]
7101c3e800  add x25,x25,#0x50
7101c3e804  sub w11,w27,w9
7101c3e808  orr w12,wzr,#0x30
7101c3e80c  add x10,x8,x25
7101c3e810  umaddl x8,w11,w12,x8
7101c3e814  add x8,x8,x20
7101c3e818  cmp x27,w9, UXTW 
7101c3e81c  csel x21,x10,x8,cc
7101c3e820  ldr x8,[x21]
7101c3e824  ldr x8,[x8, #0x10]
7101c3e828  mov x0,x21
7101c3e82c  blr x8
7101c3e830  cbnz w0,0x7101c3e9d8
7101c3e834  ldp q1,q2,[x21, #0x10]
7101c3e838  fsub v3.4S,v2.4S,v1.4S
7101c3e83c  fmul v0.4S,v3.4S,v3.4S
7101c3e840  faddp v0.2S,v0.2S,v0.2S
7101c3e844  fcmp s0,#0.0
7101c3e848  b.eq 0x7101c3e888
7101c3e84c  fsqrt s1,s0
7101c3e850  fcmp s1,s1
7101c3e854  b.vc 0x7101c3e868
7101c3e858  str q3,[sp, #0x50]
7101c3e85c  bl 0x71039c0840
7101c3e860  ldr q3,[sp, #0x50]
7101c3e864  mov v1.16B,v0.16B
7101c3e868  fdiv s0,s10,s1
7101c3e86c  movi v2.2D,#0x0
7101c3e870  fmul s1,s0,v3.S[0x0]
7101c3e874  fmul s0,s0,v3.S[0x1]
7101c3e878  mov v3.16B,v2.16B
7101c3e87c  mov v3.S[0x0],v1.S[0x0]
7101c3e880  ldp q1,q2,[x21, #0x10]
7101c3e884  mov v3.S[0x1],v0.S[0x0]
7101c3e888  fadd v0.4S,v3.4S,v3.4S
7101c3e88c  ldr x8,[sp, #0x78]
7101c3e890  fsub v1.4S,v1.4S,v0.4S
7101c3e894  ldr x9,[x23]
7101c3e898  fadd v0.4S,v0.4S,v2.4S
7101c3e89c  ldr x8,[x8]
7101c3e8a0  cmp x9,x8
7101c3e8a4  b.eq 0x7101c3e8bc
7101c3e8a8  stp q1,q0,[x9]
7101c3e8ac  ldr x8,[x23]
7101c3e8b0  add x8,x8,#0x20
7101c3e8b4  str x8,[x23]
7101c3e8b8  b 0x7101c3e9d8
7101c3e8bc  ldr x10,[sp, #0x70]
7101c3e8c0  ldr x28,[x10]
7101c3e8c4  sub x21,x9,x28
7101c3e8c8  asr x19,x21,#0x5
7101c3e8cc  add x9,x19,#0x1
7101c3e8d0  lsr x10,x9,#0x3b
7101c3e8d4  cbnz x10,0x7101c3eb34
7101c3e8d8  sub x8,x8,x28
7101c3e8dc  asr x10,x8,#0x5
7101c3e8e0  orr x11,xzr,#0x3fffffffffffffe
7101c3e8e4  cmp x10,x11
7101c3e8e8  b.hi 0x7101c3e90c
7101c3e8ec  asr x8,x8,#0x4
7101c3e8f0  cmp x8,x9
7101c3e8f4  csel x26,x9,x8,cc
7101c3e8f8  cbz x26,0x7101c3e9f4
7101c3e8fc  lsr x8,x26,#0x3b
7101c3e900  stp q1,q0,[sp, #0x40]
7101c3e904  cbz x8,0x7101c3e914
7101c3e908  b 0x7101c3eb3c
7101c3e90c  stp q1,q0,[sp, #0x40]
7101c3e910  orr x26,xzr,#0x7ffffffffffffff
7101c3e914  lsl x8,x26,#0x5
7101c3e918  cmp x8,#0x0
7101c3e91c  csinc x23,x8,xzr,ne
7101c3e920  mov w0,#0x10
7101c3e924  mov x1,x23
7101c3e928  bl 0x710392e290
7101c3e92c  mov x20,x0
7101c3e930  cbnz x0,0x7101c3e978
7101c3e934  adrp x8,0x7105332000
7101c3e938  ldr x0,[x8, #0xf00]
7101c3e93c  cbz x0,0x7101c3e974
7101c3e940  stur wzr,[x29, #-0x74]
7101c3e944  stur x23,[x29, #-0xa8]
7101c3e948  ldr x8,[x0]
7101c3e94c  ldr x8,[x8, #0x30]
7101c3e950  sub x1,x29,#0x74
7101c3e954  sub x2,x29,#0xa8
7101c3e958  blr x8
7101c3e95c  tbz w0,#0x0,0x7101c3e974
7101c3e960  mov w0,#0x10
7101c3e964  mov x1,x23
7101c3e968  bl 0x710392e290
7101c3e96c  mov x20,x0
7101c3e970  cbnz x0,0x7101c3e978
7101c3e974  mov x20,xzr
7101c3e978  ldp q1,q0,[sp, #0x40]
7101c3e97c  add x8,x20,x19, LSL #0x5
7101c3e980  add x19,x20,x26, LSL #0x5
7101c3e984  cmp x21,#0x1
7101c3e988  add x23,x8,#0x20
7101c3e98c  stp q1,q0,[x8]
7101c3e990  b.lt 0x7101c3e9a4
7101c3e994  mov x0,x20
7101c3e998  mov x1,x28
7101c3e99c  mov x2,x21
7101c3e9a0  bl 0x71039c00e0
7101c3e9a4  ldr x8,[sp, #0x70]
7101c3e9a8  str x20,[x8]
7101c3e9ac  ldr x8,[sp, #0x38]
7101c3e9b0  str x23,[x8]
7101c3e9b4  mov x23,x8
7101c3e9b8  ldr x8,[sp, #0x78]
7101c3e9bc  str x19,[x8]
7101c3e9c0  adrp x26,0x7105329000
7101c3e9c4  mov w19,#0xae10
7101c3e9c8  mov w20,#0xa210
7101c3e9cc  cbz x28,0x7101c3e9d8
7101c3e9d0  mov x0,x28
7101c3e9d4  bl 0x710392eb40
7101c3e9d8  ldr x8,[x26, #0x60]
7101c3e9dc  ldr x8,[x8, #0x8]
7101c3e9e0  add x27,x27,#0x1
7101c3e9e4  cmp x27,x24
7101c3e9e8  add x10,x8,x19
7101c3e9ec  b.cc 0x7101c3e7fc
7101c3e9f0  b 0x7101c3e9fc
7101c3e9f4  mov x20,xzr
7101c3e9f8  b 0x7101c3e97c
7101c3e9fc  ldp x24,x28,[sp, #0x20]
7101c3ea00  mov w9,#0xae14
7101c3ea04  add x11,x8,x9
7101c3ea08  add x25,sp,#0x90
7101c3ea0c  ldr x19,[sp, #0x30]
7101c3ea10  str wzr,[x10]
7101c3ea14  str wzr,[x11]
7101c3ea18  mov w21,#0xbf800000
7101c3ea1c  orr x27,xzr,#0x3f8000003f800000
7101c3ea20  adrp x23,0x7104412000
7101c3ea24  add x23,x23,#0x9fa
7101c3ea28  cbz x19,0x7101c3ea5c
7101c3ea2c  add x8,x19,#0x8
7101c3ea30  ldaxr x9,[x8]
7101c3ea34  sub x10,x9,#0x1
7101c3ea38  stlxr w11,x10,[x8]
7101c3ea3c  cbnz w11,0x7101c3ea30
7101c3ea40  cbnz x9,0x7101c3ea5c
7101c3ea44  ldr x8,[x19]
7101c3ea48  ldr x8,[x8, #0x10]
7101c3ea4c  mov x0,x19
7101c3ea50  blr x8
7101c3ea54  mov x0,x19
7101c3ea58  bl 0x71039c2670
7101c3ea5c  ldr x20,[sp, #0x88]
7101c3ea60  adrp x8,0x710523d000
7101c3ea64  add x8,x8,#0x988
7101c3ea68  stp x8,xzr,[sp, #0x80]
7101c3ea6c  cbz x20,0x7101c3ea90
7101c3ea70  ldr x0,[x20, #0x18]
7101c3ea74  adrp x8,0x710523d000
7101c3ea78  add x8,x8,#0x9a8
7101c3ea7c  stp x8,xzr,[x20, #0x10]
7101c3ea80  cbz x0,0x7101c3ea88
7101c3ea84  bl 0x710392eb40
7101c3ea88  mov x0,x20
7101c3ea8c  bl 0x710392eb40
7101c3ea90  add x22,x22,#0x1
7101c3ea94  cmp x24,x22
7101c3ea98  b.hi 0x7101c3e404
7101c3ea9c  ldp x8,x19,[sp, #0x8]
7101c3eaa0  ldr x9,[sp, #0x18]
7101c3eaa4  ldr x8,[x8]
7101c3eaa8  ldr x9,[x9]
7101c3eaac  sub x8,x8,x9
7101c3eab0  asr x2,x8,#0x3
7101c3eab4  adrp x1,0x71043ad000
7101c3eab8  add x1,x1,#0x75a
7101c3eabc  mov x0,x19
7101c3eac0  bl 0x7103778430
7101c3eac4  ldp d9,d8,[sp, #0x120]
7101c3eac8  ldr d12,[sp, #0x100]
7101c3eacc  ldp d11,d10,[sp, #0x110]
7101c3ead0  ldp x29,x30,[sp, #0x180]
7101c3ead4  ldp x20,x19,[sp, #0x170]
7101c3ead8  ldp x22,x21,[sp, #0x160]
7101c3eadc  ldp x24,x23,[sp, #0x150]
7101c3eae0  ldp x26,x25,[sp, #0x140]
7101c3eae4  ldp x28,x27,[sp, #0x130]
7101c3eae8  add sp,sp,#0x190
7101c3eaec  ret
7101c3eaf0  adrp x0,0x7105314000
7101c3eaf4  add x0,x0,#0x4d8
7101c3eaf8  bl 0x71039c06b0
7101c3eafc  cbz w0,0x7101c3dfe8
7101c3eb00  bl 0x7101764000
7101c3eb04  adrp x0,0x7101763000
7101c3eb08  add x0,x0,#0xc40
7101c3eb0c  adrp x1,0x71052c5000
7101c3eb10  add x1,x1,#0x180
7101c3eb14  adrp x2,0x7104f17000
7101c3eb18  add x2,x2,#0x0
7101c3eb1c  bl 0x71000001c0
7101c3eb20  adrp x0,0x7105314000
7101c3eb24  add x0,x0,#0x4d8
7101c3eb28  bl 0x71039c06c0
7101c3eb2c  b 0x7101c3dfe8
7101c3eb30  bl 0x71039c1330
7101c3eb34  ldr x0,[sp, #0x70]
7101c3eb38  bl 0x71039c0c00
7101c3eb3c  bl 0x71039c2650
