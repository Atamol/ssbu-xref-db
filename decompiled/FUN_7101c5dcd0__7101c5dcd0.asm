// addr:      7101c5dcd0
// offset:    0x1c5dcd0
// name:      FUN_7101c5dcd0
// mangled:   
// size:      11176

7101c5dcd0  sub sp,sp,#0x130
7101c5dcd4  stp d9,d8,[sp, #0xc0]
7101c5dcd8  stp x28,x27,[sp, #0xd0]
7101c5dcdc  stp x26,x25,[sp, #0xe0]
7101c5dce0  stp x24,x23,[sp, #0xf0]
7101c5dce4  stp x22,x21,[sp, #0x100]
7101c5dce8  stp x20,x19,[sp, #0x110]
7101c5dcec  stp x29,x30,[sp, #0x120]
7101c5dcf0  add x29,sp,#0x120
7101c5dcf4  mov x19,x0
7101c5dcf8  ldr x0,[x0, #0x460]
7101c5dcfc  bl 0x7101c7d450
7101c5dd00  ldr x8,[x19, #0x10]
7101c5dd04  ldr x8,[x8]
7101c5dd08  ldr x22,[x8]
7101c5dd0c  ldr x8,[x19, #0x460]
7101c5dd10  ldr x8,[x8, #0xf8]
7101c5dd14  ldr q0,[x8, #0x60]
7101c5dd18  ldr x8,[x19, #0x398]
7101c5dd1c  str q0,[sp, #0x20]
7101c5dd20  cbz x8,0x7101c5dd2c
7101c5dd24  ldr x0,[x8, #0x8]
7101c5dd28  bl 0x71032d6e10
7101c5dd2c  ldr x8,[x19, #0x3a0]
7101c5dd30  cbz x8,0x7101c5dd3c
7101c5dd34  ldr x0,[x8, #0x8]
7101c5dd38  bl 0x71032d6e10
7101c5dd3c  ldr x8,[x19, #0x3a8]
7101c5dd40  cbz x8,0x7101c5dd4c
7101c5dd44  ldr x0,[x8, #0x8]
7101c5dd48  bl 0x71032d6e10
7101c5dd4c  ldr x8,[x19, #0x3b0]
7101c5dd50  cbz x8,0x7101c5dd5c
7101c5dd54  ldr x0,[x8, #0x8]
7101c5dd58  bl 0x71032d6e10
7101c5dd5c  ldr x8,[x19, #0x3b8]
7101c5dd60  cbz x8,0x7101c5dd6c
7101c5dd64  ldr x0,[x8, #0x8]
7101c5dd68  bl 0x71032d6e10
7101c5dd6c  ldr x8,[x19, #0x3c0]
7101c5dd70  cbz x8,0x7101c5dd7c
7101c5dd74  ldr x0,[x8, #0x8]
7101c5dd78  bl 0x71032d6e10
7101c5dd7c  ldr x8,[x19, #0x3c8]
7101c5dd80  cbz x8,0x7101c5dd8c
7101c5dd84  ldr x0,[x8, #0x8]
7101c5dd88  bl 0x71032d6e10
7101c5dd8c  ldr x8,[x19, #0x3d0]
7101c5dd90  cbz x8,0x7101c5dd9c
7101c5dd94  ldr x0,[x8, #0x8]
7101c5dd98  bl 0x71032d6e10
7101c5dd9c  mov x24,#-0x1
7101c5dda0  str wzr,[sp, #0x70]
7101c5dda4  str xzr,[sp, #0x80]
7101c5dda8  stp xzr,xzr,[sp, #0x88]
7101c5ddac  str x24,[sp, #0x98]
7101c5ddb0  ldr x9,[x22, #0x600]
7101c5ddb4  ldr w8,[x9, #0x484]
7101c5ddb8  cbnz w8,0x7101c5ddc8
7101c5ddbc  ldr w8,[x9, #0x488]
7101c5ddc0  cmn w8,#0x1
7101c5ddc4  b.eq 0x7101c5dde4
7101c5ddc8  ldrb w10,[x9, #0x4aa]
7101c5ddcc  mov w8,#0x1
7101c5ddd0  cbz w10,0x7101c5dde8
7101c5ddd4  ldrb w9,[x9, #0x1a8]
7101c5ddd8  tst w9,#0x2
7101c5dddc  cinc w8,w8,ne
7101c5dde0  b 0x7101c5dde8
7101c5dde4  mov w8,wzr
7101c5dde8  str w8,[sp, #0x70]
7101c5ddec  adrp x8,0x7104472000
7101c5ddf0  ldr s8,[x8, #0x8b8]
7101c5ddf4  ldr q0,[sp, #0x20]
7101c5ddf8  fadd s2,s0,s8
7101c5ddfc  adrp x8,0x7104472000
7101c5de00  dup s0,v0.S[0x1]
7101c5de04  movi v1.2D,#0x0
7101c5de08  ldr s9,[x8, #0x4c4]
7101c5de0c  mov v1.S[0x0],v2.S[0x0]
7101c5de10  fsub s0,s9,s0
7101c5de14  mov v1.S[0x1],v0.S[0x0]
7101c5de18  stp q0,q2,[sp]
7101c5de1c  add x1,sp,#0x70
7101c5de20  str q1,[sp, #0x80]
7101c5de24  ldr x0,[x19, #0x300]
7101c5de28  str q1,[sp, #0x20]
7101c5de2c  bl 0x710376e330
7101c5de30  ldr x8,[x19, #0x300]
7101c5de34  ldrb w9,[x19, #0x422]
7101c5de38  cmp w9,#0x0
7101c5de3c  ldr w20,[x8, #0x254]
7101c5de40  cset w8,eq
7101c5de44  cmn w20,#0x1
7101c5de48  b.eq 0x7101c5df04
7101c5de4c  tbnz w8,#0x0,0x7101c5df04
7101c5de50  ldrb w8,[x19, #0x423]
7101c5de54  cmp w8,w20, UXTB 
7101c5de58  b.eq 0x7101c5dfdc
7101c5de5c  cmn w20,#0x1
7101c5de60  b.eq 0x7101c5df3c
7101c5de64  and w8,w20,#0xff
7101c5de68  cmp w8,#0x8
7101c5de6c  b.cs 0x7101c60874
7101c5de70  add x8,x19,w20, UXTB  #0x3
7101c5de74  ldr x9,[x8, #0x398]
7101c5de78  cbz x9,0x7101c5dec0
7101c5de7c  ldr x9,[x9, #0x8]
7101c5de80  ldp w10,w11,[x9, #0x20]
7101c5de84  add x8,x8,#0x398
7101c5de88  cmp w11,w10
7101c5de8c  b.eq 0x7101c5deb0
7101c5de90  ldrb w11,[x9, #0x2c]
7101c5de94  stp w10,wzr,[x9, #0x24]
7101c5de98  cbz w11,0x7101c5deb0
7101c5de9c  ldrb w10,[x9, #0x2d]
7101c5dea0  cbz w10,0x7101c5deb0
7101c5dea4  ldrb w10,[x9, #0x2e]
7101c5dea8  cbz w10,0x7101c5deb0
7101c5deac  sturh wzr,[x9, #0x2d]
7101c5deb0  ldr x8,[x8]
7101c5deb4  ldr x8,[x8, #0x8]
7101c5deb8  mov w9,#0x1
7101c5debc  strb w9,[x8, #0x2c]
7101c5dec0  and w8,w20,#0xff
7101c5dec4  cmp w8,#0x4
7101c5dec8  b.ne 0x7101c5df3c
7101c5decc  ldr x21,[x19, #0x2f8]
7101c5ded0  ldr x8,[x21]
7101c5ded4  ldr x9,[x8, #0x18]
7101c5ded8  ldr x0,[x9]
7101c5dedc  cbz x0,0x7101c5df28
7101c5dee0  ldr x8,[x0]
7101c5dee4  ldr x8,[x8, #0x2f8]
7101c5dee8  blr x8
7101c5deec  ldr x8,[x21]
7101c5def0  tbz w0,#0x0,0x7101c5df28
7101c5def4  ldr x0,[x8, #0x8]
7101c5def8  adrp x1,0x71043e0000
7101c5defc  add x1,x1,#0x210
7101c5df00  b 0x7101c5df34
7101c5df04  cmp w9,#0x0
7101c5df08  cset w9,ne
7101c5df0c  cmn w20,#0x1
7101c5df10  cset w10,ne
7101c5df14  and w8,w10,w8
7101c5df18  eor w8,w9,w8
7101c5df1c  cmp w8,#0x1
7101c5df20  b.eq 0x7101c5de5c
7101c5df24  b 0x7101c5dfdc
7101c5df28  ldr x0,[x8, #0x8]
7101c5df2c  adrp x1,0x7104454000
7101c5df30  add x1,x1,#0xaab
7101c5df34  fmov s0,0x3f800000
7101c5df38  bl 0x7103778300
7101c5df3c  ldrb w8,[x19, #0x422]
7101c5df40  cbz w8,0x7101c5dfdc
7101c5df44  ldrb w8,[x19, #0x423]
7101c5df48  cmp x8,#0x8
7101c5df4c  b.cs 0x7101c60874
7101c5df50  add x9,x19,x8, LSL #0x3
7101c5df54  ldr x10,[x9, #0x398]
7101c5df58  cbz x10,0x7101c5df9c
7101c5df5c  ldr x10,[x10, #0x8]
7101c5df60  ldp w11,w12,[x10, #0x20]
7101c5df64  add x9,x9,#0x398
7101c5df68  cmp w12,w11
7101c5df6c  b.eq 0x7101c5df90
7101c5df70  ldrb w12,[x10, #0x2c]
7101c5df74  stp w11,wzr,[x10, #0x24]
7101c5df78  cbz w12,0x7101c5df90
7101c5df7c  ldrb w11,[x10, #0x2d]
7101c5df80  cbz w11,0x7101c5df90
7101c5df84  ldrb w11,[x10, #0x2e]
7101c5df88  cbz w11,0x7101c5df90
7101c5df8c  sturh wzr,[x10, #0x2d]
7101c5df90  ldr x9,[x9]
7101c5df94  ldr x9,[x9, #0x8]
7101c5df98  strb wzr,[x9, #0x2c]
7101c5df9c  cmp w8,#0x4
7101c5dfa0  b.ne 0x7101c5dfdc
7101c5dfa4  ldr x21,[x19, #0x2f8]
7101c5dfa8  ldr x8,[x21]
7101c5dfac  ldr x9,[x8, #0x18]
7101c5dfb0  ldr x0,[x9]
7101c5dfb4  cbz x0,0x7101c5dfc8
7101c5dfb8  ldr x8,[x0]
7101c5dfbc  ldr x8,[x8, #0x2f8]
7101c5dfc0  blr x8
7101c5dfc4  ldr x8,[x21]
7101c5dfc8  ldr x0,[x8, #0x8]
7101c5dfcc  fmov s0,0x3f800000
7101c5dfd0  adrp x1,0x71043e0000
7101c5dfd4  add x1,x1,#0x210
7101c5dfd8  bl 0x7103778300
7101c5dfdc  cmn w20,#0x1
7101c5dfe0  cset w8,ne
7101c5dfe4  bfm w8,w20,#0x18,#0x17
7101c5dfe8  mov w23,#0x1920
7101c5dfec  strh w8,[x19, #0x422]
7101c5dff0  b.eq 0x7101c5e02c
7101c5dff4  and w8,w20,#0xff
7101c5dff8  cmp w8,#0x2
7101c5dffc  b.ne 0x7101c5e02c
7101c5e000  ldr x8,[x22, #0x600]
7101c5e004  ldrb w9,[x8, #0x4aa]
7101c5e008  cbz w9,0x7101c5e02c
7101c5e00c  ldrb w8,[x8, #0x1c0]
7101c5e010  tbz w8,#0x1,0x7101c5e02c
7101c5e014  ldrb w8,[x19, #0x420]
7101c5e018  cmp w8,#0x0
7101c5e01c  add x0,x19,#0x2f0
7101c5e020  mov w2,wzr
7101c5e024  cset w1,eq
7101c5e028  bl 0x7101c61990
7101c5e02c  ldrb w8,[x19, #0x431]
7101c5e030  cbnz w8,0x7101c5e284
7101c5e034  ldrb w8,[x19, #0x430]
7101c5e038  cbz w8,0x7101c5e054
7101c5e03c  ldr x8,[x22, #0x600]
7101c5e040  ldrb w9,[x8, #0x4aa]
7101c5e044  cbz w9,0x7101c5e284
7101c5e048  ldrb w8,[x8, #0x1ac]
7101c5e04c  tbz w8,#0x1,0x7101c5e284
7101c5e050  strb wzr,[x19, #0x430]
7101c5e054  ldr x8,[x22, #0x600]
7101c5e058  ldrb w9,[x8, #0x4aa]
7101c5e05c  cbz w9,0x7101c5e1b0
7101c5e060  ldrb w8,[x8, #0x278]
7101c5e064  tbz w8,#0x4,0x7101c5e1b0
7101c5e068  ldrb w8,[x19, #0x428]
7101c5e06c  tbz w8,#0x0,0x7101c5e1b0
7101c5e070  ldr x20,[x19, #0x2f8]
7101c5e074  ldr x8,[x20]
7101c5e078  ldr x8,[x8, #0x18]
7101c5e07c  ldr x0,[x8]
7101c5e080  cbz x0,0x7101c5e0b4
7101c5e084  ldr x8,[x0]
7101c5e088  ldr x8,[x8, #0x2f8]
7101c5e08c  blr x8
7101c5e090  tbnz w0,#0x0,0x7101c5e1b0
7101c5e094  ldr x8,[x20]
7101c5e098  ldr x8,[x8, #0x18]
7101c5e09c  ldr x0,[x8]
7101c5e0a0  cbz x0,0x7101c5e0b4
7101c5e0a4  ldr x8,[x0]
7101c5e0a8  ldr x8,[x8, #0x3c0]
7101c5e0ac  blr x8
7101c5e0b0  tbz w0,#0x0,0x7101c5e1b0
7101c5e0b4  ldrb w8,[x19, #0x428]
7101c5e0b8  tst w8,#0x6
7101c5e0bc  b.eq 0x7101c5e1b0
7101c5e0c0  ldr x8,[x19, #0x310]
7101c5e0c4  ldr x0,[x8]
7101c5e0c8  cbz x0,0x7101c5e0dc
7101c5e0cc  ldr x8,[x0]
7101c5e0d0  ldr x8,[x8, #0x320]
7101c5e0d4  mov w1,#0x1
7101c5e0d8  blr x8
7101c5e0dc  ldr w8,[x19, #0x400]
7101c5e0e0  add x20,x19,#0x3d8
7101c5e0e4  cmn w8,#0x1
7101c5e0e8  b.ne 0x7101c600f0
7101c5e0ec  ldr w8,[x19, #0x404]
7101c5e0f0  cmn w8,#0x1
7101c5e0f4  b.ne 0x7101c600f0
7101c5e0f8  adrp x8,0x710532f000
7101c5e0fc  ldr x8,[x8, #0x8d0]
7101c5e100  ldr x0,[x8, #0x8]
7101c5e104  ldrb w8,[x0, #0x191]
7101c5e108  add x25,x19,#0x400
7101c5e10c  cbnz w8,0x7101c60018
7101c5e110  mov x21,#0x90f3
7101c5e114  movk x21,#0x29a, LSL #16
7101c5e118  movk x21,#0x1a, LSL #32
7101c5e11c  mov w2,#0x4
7101c5e120  mov x1,x21
7101c5e124  bl 0x7103313f20
7101c5e128  tbz w0,#0x0,0x7101c60018
7101c5e12c  add x0,sp,#0x70
7101c5e130  mov x1,x21
7101c5e134  bl 0x71024076d0
7101c5e138  ldr w9,[sp, #0x70]
7101c5e13c  ldr x8,[sp, #0x80]
7101c5e140  str w9,[x20]
7101c5e144  cbz x8,0x7101c60044
7101c5e148  ldr w9,[x19, #0x3f4]
7101c5e14c  mov w10,#0x6500
7101c5e150  movk w10,#0x87, LSL #16
7101c5e154  cmp w9,w10
7101c5e158  b.ne 0x7101c6082c
7101c5e15c  adrp x9,0x7106dd5000
7101c5e160  ldr w9,[x9, #0x3ac]
7101c5e164  ldr w10,[x19, #0x3f0]
7101c5e168  cmp w10,w9
7101c5e16c  b.ne 0x7101c6084c
7101c5e170  ldr x10,[x19, #0x3e8]
7101c5e174  add x9,x19,#0x3e8
7101c5e178  cbz x10,0x7101c5e1a0
7101c5e17c  adrp x11,0x7106dd5000
7101c5e180  ldrb w11,[x11, #0x3a8]
7101c5e184  cmp w11,#0x1
7101c5e188  b.ne 0x7101c5e1a0
7101c5e18c  ldr wzr,[x10, #0x38]!
7101c5e190  ldaxr w11,[x10]
7101c5e194  sub w11,w11,#0x1
7101c5e198  stlxr w12,w11,[x10]
7101c5e19c  cbnz w12,0x7101c5e190
7101c5e1a0  str xzr,[x19, #0x3e8]
7101c5e1a4  add x10,x19,#0x3f8
7101c5e1a8  strb wzr,[x19, #0x3f8]
7101c5e1ac  b 0x7101c60858
7101c5e1b0  ldr x8,[x19, #0x310]
7101c5e1b4  strh wzr,[x19, #0x430]
7101c5e1b8  ldr x0,[x8]
7101c5e1bc  cbz x0,0x7101c5e1d0
7101c5e1c0  ldr x8,[x0]
7101c5e1c4  ldr x8,[x8, #0x328]
7101c5e1c8  mov w1,wzr
7101c5e1cc  blr x8
7101c5e1d0  ldr w8,[x19, #0x400]
7101c5e1d4  cmn w8,#0x1
7101c5e1d8  b.ne 0x7101c5e1e8
7101c5e1dc  ldr w8,[x19, #0x404]
7101c5e1e0  cmn w8,#0x1
7101c5e1e4  b.eq 0x7101c5e284
7101c5e1e8  add x0,x19,#0x3d8
7101c5e1ec  mov w1,wzr
7101c5e1f0  bl 0x710373b540
7101c5e1f4  add x20,x19,#0x3e0
7101c5e1f8  mov x0,x20
7101c5e1fc  str wzr,[x19, #0x3d8]
7101c5e200  bl 0x71039602c0
7101c5e204  adrp x8,0x7104f73000
7101c5e208  add x8,x8,#0xd50
7101c5e20c  str x8,[x19, #0x3e0]
7101c5e210  ldr x8,[x19, #0x3e8]
7101c5e214  cbz x8,0x7101c5e250
7101c5e218  adrp x9,0x7106dd5000
7101c5e21c  ldrb w9,[x9, #0x3a8]
7101c5e220  cmp w9,#0x1
7101c5e224  b.ne 0x7101c5e250
7101c5e228  adrp x10,0x7106dd5000
7101c5e22c  ldr w9,[x19, #0x3f0]
7101c5e230  ldr w10,[x10, #0x3ac]
7101c5e234  cmp w9,w10
7101c5e238  b.ne 0x7101c5e250
7101c5e23c  ldr wzr,[x8, #0x38]!
7101c5e240  ldaxr w9,[x8]
7101c5e244  sub w9,w9,#0x1
7101c5e248  stlxr w10,w9,[x8]
7101c5e24c  cbnz w10,0x7101c5e240
7101c5e250  mov x8,#0x650000000000
7101c5e254  movk x8,#0x87, LSL #48
7101c5e258  stp xzr,xzr,[x20, #0x10]
7101c5e25c  stp xzr,xzr,[x20]
7101c5e260  str x8,[x19, #0x3f0]
7101c5e264  adrp x8,0x7104f73000
7101c5e268  add x8,x8,#0xd30
7101c5e26c  str xzr,[x19, #0x3e8]
7101c5e270  strb wzr,[x19, #0x3f8]
7101c5e274  str x8,[x19, #0x3e0]
7101c5e278  str x24,[x19, #0x400]
7101c5e27c  str xzr,[x19, #0x408]
7101c5e280  str wzr,[x19, #0x414]
7101c5e284  ldr x8,[x19, #0x300]
7101c5e288  ldr w20,[x8, #0x25c]
7101c5e28c  add x25,x19,x23
7101c5e290  cmn w20,#0x1
7101c5e294  b.eq 0x7101c5e2ac
7101c5e298  and w8,w20,#0xff
7101c5e29c  cmp w8,#0x4
7101c5e2a0  b.ne 0x7101c5e2ac
7101c5e2a4  ldr x0,[x19, #0x2f8]
7101c5e2a8  bl 0x7101c73860
7101c5e2ac  cmn w20,#0x1
7101c5e2b0  cset w8,ne
7101c5e2b4  bfm w8,w20,#0x18,#0x17
7101c5e2b8  strh w8,[x19, #0x424]
7101c5e2bc  str wzr,[sp, #0x70]
7101c5e2c0  str xzr,[sp, #0x80]
7101c5e2c4  stp xzr,xzr,[sp, #0x88]
7101c5e2c8  str x24,[sp, #0x98]
7101c5e2cc  ldr x9,[x22, #0x600]
7101c5e2d0  ldr w8,[x9, #0x484]
7101c5e2d4  cbnz w8,0x7101c5e2e4
7101c5e2d8  ldr w8,[x9, #0x488]
7101c5e2dc  cmn w8,#0x1
7101c5e2e0  b.eq 0x7101c5e300
7101c5e2e4  ldrb w10,[x9, #0x4aa]
7101c5e2e8  mov w8,#0x1
7101c5e2ec  cbz w10,0x7101c5e304
7101c5e2f0  ldrb w9,[x9, #0x1a8]
7101c5e2f4  tst w9,#0x2
7101c5e2f8  cinc w8,w8,ne
7101c5e2fc  b 0x7101c5e304
7101c5e300  mov w8,wzr
7101c5e304  ldr q0,[sp, #0x20]
7101c5e308  str w8,[sp, #0x70]
7101c5e30c  add x1,sp,#0x70
7101c5e310  str q0,[sp, #0x80]
7101c5e314  ldr x0,[x19, #0x488]
7101c5e318  bl 0x710376e330
7101c5e31c  ldrb w8,[x19, #0x422]
7101c5e320  ldr x9,[x19, #0x460]
7101c5e324  cmp w8,#0x0
7101c5e328  cset w8,ne
7101c5e32c  strb w8,[x9, #0x15c]
7101c5e330  ldrb w20,[x25]
7101c5e334  cmp x20,#0x8
7101c5e338  b.cs 0x7101c60874
7101c5e33c  mov w8,#0x1b26
7101c5e340  ldrb w8,[x19, x8, LSL ]
7101c5e344  movi v7.2D,#0x0
7101c5e348  cbz w8,0x7101c5e438
7101c5e34c  mov w8,#0x1b25
7101c5e350  ldrb w8,[x19, x8, LSL ]
7101c5e354  cbz w8,0x7101c5e438
7101c5e358  ldr x8,[x19, #0x450]
7101c5e35c  orr w9,wzr,#0x1e0
7101c5e360  madd x9,x20,x9,x8
7101c5e364  ldrb w26,[x9, #0x194]
7101c5e368  ldr x9,[x19, #0x460]
7101c5e36c  ldrb w9,[x9, #0x159]
7101c5e370  add x21,x19,#0x448
7101c5e374  cbz w9,0x7101c5e7e4
7101c5e378  orr w9,wzr,#0x1e0
7101c5e37c  madd x9,x20,x9,x8
7101c5e380  ldrb w9,[x9, #0x190]
7101c5e384  cbz w9,0x7101c5e90c
7101c5e388  orr w9,wzr,#0x1e0
7101c5e38c  madd x9,x20,x9,x8
7101c5e390  ldrb w9,[x9, #0x192]
7101c5e394  cbz w9,0x7101c5f8e0
7101c5e398  orr w9,wzr,#0x1e0
7101c5e39c  madd x9,x20,x9,x8
7101c5e3a0  mov w23,wzr
7101c5e3a4  ldp q0,q1,[x9, #0x150]
7101c5e3a8  fcmeq v0.4S,v0.4S,v1.4S
7101c5e3ac  ext v1.16B,v0.16B,v0.16B,0x8
7101c5e3b0  and v0.8B,v0.8B,v1.8B
7101c5e3b4  mov w9,v0.S[0x1]
7101c5e3b8  fmov w10,s0
7101c5e3bc  tst w10,w9
7101c5e3c0  b.eq 0x7101c5e910
7101c5e3c4  cbnz w26,0x7101c5e910
7101c5e3c8  orr w9,wzr,#0x1e0
7101c5e3cc  madd x9,x20,x9,x8
7101c5e3d0  ldr x9,[x9, #0xa0]
7101c5e3d4  ldr x9,[x9]
7101c5e3d8  cbz x9,0x7101c5f800
7101c5e3dc  ldr s3,[x9, #0x30]
7101c5e3e0  mov v2.16B,v7.16B
7101c5e3e4  add x10,x9,#0x34
7101c5e3e8  ldp s0,s1,[x9, #0x50]
7101c5e3ec  add x11,x9,#0x38
7101c5e3f0  ldp s4,s6,[x9, #0x48]
7101c5e3f4  fmul s1,s1,s6
7101c5e3f8  mov v2.S[0x0],v3.S[0x0]
7101c5e3fc  fmul s0,s0,s4
7101c5e400  ld1 {v2.S}[1],[x10]
7101c5e404  fabs s0,s0
7101c5e408  ld1 {v2.S}[2],[x11]
7101c5e40c  fmov s4,0x3f000000
7101c5e410  ldrb w10,[x9, #0x5b]
7101c5e414  fmul s5,s0,s4
7101c5e418  fabs s1,s1
7101c5e41c  and w11,w10,#0x3
7101c5e420  cmp w11,#0x2
7101c5e424  b.eq 0x7101c5f81c
7101c5e428  cmp w11,#0x1
7101c5e42c  b.ne 0x7101c5f824
7101c5e430  fadd s3,s3,s5
7101c5e434  b 0x7101c5f820
7101c5e438  mov w2,#0x1
7101c5e43c  mov x0,x19
7101c5e440  mov w1,w20
7101c5e444  mov w3,wzr
7101c5e448  bl 0x7101c61bd0
7101c5e44c  ldr x8,[x19, #0x1b18]
7101c5e450  cbz x8,0x7101c5e548
7101c5e454  ldr x9,[x19, #0x1b10]
7101c5e458  mov x10,#0x8019
7101c5e45c  movk x10,#0x1801, LSL #16
7101c5e460  movk x10,#0x180, LSL #32
7101c5e464  movk x10,#0x8018, LSL #48
7101c5e468  umulh x10,x9,x10
7101c5e46c  sub x11,x9,x10
7101c5e470  add x10,x10,x11, LSR #0x1
7101c5e474  ldr x8,[x19, #0x1af8]
7101c5e478  lsr x10,x10,#0xa
7101c5e47c  mov x11,#-0x555
7101c5e480  madd x9,x10,x11,x9
7101c5e484  ldr x8,[x8, x10, LSL #0x3]
7101c5e488  add x9,x9,x9, LSL #0x1
7101c5e48c  add x8,x8,x9
7101c5e490  ldrb w20,[x8]
7101c5e494  cmp x20,#0x8
7101c5e498  b.cs 0x7101c60874
7101c5e49c  ldrb w21,[x8, #0x1]
7101c5e4a0  ldrb w22,[x8, #0x2]
7101c5e4a4  orr w9,wzr,#0x1e0
7101c5e4a8  ldr x8,[x19, #0x450]
7101c5e4ac  madd x8,x20,x9,x8
7101c5e4b0  ldr x8,[x8, #0x100]
7101c5e4b4  ldr x0,[x8, #0x8]
7101c5e4b8  cbz x0,0x7101c5e4cc
7101c5e4bc  ldr x8,[x0]
7101c5e4c0  ldr x8,[x8, #0x138]
7101c5e4c4  blr x8
7101c5e4c8  tbz w0,#0x0,0x7101c5e548
7101c5e4cc  mov w8,#0x1e8
7101c5e4d0  madd x8,x20,x8,x19
7101c5e4d4  add x8,x8,#0x918
7101c5e4d8  cmp w20,#0x8
7101c5e4dc  csel x8,x8,xzr,cc
7101c5e4e0  ldrb w6,[x8, #0x1e4]
7101c5e4e4  ldrb w5,[x8, #0x1e1]
7101c5e4e8  ldrb w4,[x8, #0x1e0]
7101c5e4ec  mov x0,x19
7101c5e4f0  mov w1,w20
7101c5e4f4  mov w2,w21
7101c5e4f8  mov w3,w22
7101c5e4fc  bl 0x7101c60880
7101c5e500  ldr x9,[x19, #0x1b10]
7101c5e504  ldr x10,[x19, #0x1b18]
7101c5e508  add x9,x9,#0x1
7101c5e50c  ldr x8,[x19, #0x1af8]
7101c5e510  sub x10,x10,#0x1
7101c5e514  cmp x9,#0xaaa
7101c5e518  str x10,[x19, #0x1b18]
7101c5e51c  str x9,[x19, #0x1b10]
7101c5e520  b.cc 0x7101c5e548
7101c5e524  ldr x0,[x8]
7101c5e528  cbz x0,0x7101c5e538
7101c5e52c  bl 0x710392eb40
7101c5e530  ldr x8,[x19, #0x1af8]
7101c5e534  ldr x9,[x19, #0x1b10]
7101c5e538  add x8,x8,#0x8
7101c5e53c  str x8,[x19, #0x1af8]
7101c5e540  sub x8,x9,#0x555
7101c5e544  str x8,[x19, #0x1b10]
7101c5e548  ldrb w8,[x25, #0x208]
7101c5e54c  cbz w8,0x7101c5e63c
7101c5e550  strb wzr,[x25, #0x208]
7101c5e554  ldr w8,[x19, #0x2c0]
7101c5e558  sub w8,w8,#0x7
7101c5e55c  cmp w8,#0x4
7101c5e560  b.hi 0x7101c5e5c4
7101c5e564  ldrb w8,[x19, #0x808]
7101c5e568  cbz w8,0x7101c5e63c
7101c5e56c  ldr x9,[x19, #0x500]
7101c5e570  ldr x8,[x19, #0x4f8]
7101c5e574  cmp x9,x8
7101c5e578  b.eq 0x7101c5e63c
7101c5e57c  mov x20,xzr
7101c5e580  ldrh w8,[x8, x20, LSL #0x1]
7101c5e584  and x9,x21,#-0x10000
7101c5e588  orr x21,x9,x8
7101c5e58c  mov w1,#0x1
7101c5e590  mov x0,x19
7101c5e594  mov w2,w20
7101c5e598  mov x3,x21
7101c5e59c  bl 0x7101c59930
7101c5e5a0  add w8,w20,#0x1
7101c5e5a4  and x20,x8,#0xff
7101c5e5a8  ldr x9,[x19, #0x500]
7101c5e5ac  ldr x8,[x19, #0x4f8]
7101c5e5b0  sub x9,x9,x8
7101c5e5b4  asr x9,x9,#0x1
7101c5e5b8  cmp x9,x20
7101c5e5bc  b.hi 0x7101c5e580
7101c5e5c0  b 0x7101c5e63c
7101c5e5c4  ldrb w8,[x19, #0x80b]
7101c5e5c8  cbz w8,0x7101c5e62c
7101c5e5cc  ldr x9,[x19, #0x500]
7101c5e5d0  ldr x8,[x19, #0x4f8]
7101c5e5d4  add x20,x19,#0x800
7101c5e5d8  cmp x9,x8
7101c5e5dc  b.eq 0x7101c5e624
7101c5e5e0  mov x21,xzr
7101c5e5e4  ldrh w8,[x8, x21, LSL #0x1]
7101c5e5e8  and x9,x22,#-0x10000
7101c5e5ec  orr x22,x9,x8
7101c5e5f0  mov x0,x19
7101c5e5f4  mov w1,wzr
7101c5e5f8  mov w2,w21
7101c5e5fc  mov x3,x22
7101c5e600  bl 0x7101c59930
7101c5e604  add w8,w21,#0x1
7101c5e608  and x21,x8,#0xff
7101c5e60c  ldr x9,[x19, #0x500]
7101c5e610  ldr x8,[x19, #0x4f8]
7101c5e614  sub x9,x9,x8
7101c5e618  asr x9,x9,#0x1
7101c5e61c  cmp x9,x21
7101c5e620  b.hi 0x7101c5e5e4
7101c5e624  mov x0,x20
7101c5e628  bl 0x7101c5d460
7101c5e62c  ldrb w8,[x19, #0x7d0]
7101c5e630  cbz w8,0x7101c5e63c
7101c5e634  mov x0,x19
7101c5e638  bl 0x7101c5a2d0
7101c5e63c  ldr x20,[x19, #0x450]
7101c5e640  ldr x1,[x20, #0x8]
7101c5e644  add x0,x20,#0x10
7101c5e648  bl 0x7101c75780
7101c5e64c  ldr x1,[x20, #0x8]
7101c5e650  add x0,x20,#0x1f0
7101c5e654  bl 0x7101c75780
7101c5e658  ldr x1,[x20, #0x8]
7101c5e65c  add x0,x20,#0x3d0
7101c5e660  bl 0x7101c75780
7101c5e664  ldr x1,[x20, #0x8]
7101c5e668  add x0,x20,#0x5b0
7101c5e66c  bl 0x7101c75780
7101c5e670  ldr x1,[x20, #0x8]
7101c5e674  add x0,x20,#0x790
7101c5e678  bl 0x7101c75780
7101c5e67c  ldr x1,[x20, #0x8]
7101c5e680  add x0,x20,#0x970
7101c5e684  bl 0x7101c75780
7101c5e688  ldr x1,[x20, #0x8]
7101c5e68c  add x0,x20,#0xb50
7101c5e690  bl 0x7101c75780
7101c5e694  ldr x1,[x20, #0x8]
7101c5e698  add x0,x20,#0xd30
7101c5e69c  bl 0x7101c75780
7101c5e6a0  ldr x23,[x19, #0x480]
7101c5e6a4  ldr x8,[x23, #0x310]
7101c5e6a8  add x25,x19,#0x480
7101c5e6ac  cbz x8,0x7101c5e7a8
7101c5e6b0  ldr x8,[x8, #0x8]
7101c5e6b4  ldr x0,[x8, #0x8]
7101c5e6b8  cbz x0,0x7101c5e6d0
7101c5e6bc  ldr x8,[x0]
7101c5e6c0  ldr x8,[x8, #0x138]
7101c5e6c4  blr x8
7101c5e6c8  tbz w0,#0x0,0x7101c5ea8c
7101c5e6cc  ldr x23,[x25]
7101c5e6d0  mov w8,#0x1038
7101c5e6d4  ldrb w2,[x23, x8, LSL ]
7101c5e6d8  add x1,x23,#0x30
7101c5e6dc  mov x0,x23
7101c5e6e0  bl 0x7101c73720
7101c5e6e4  ldr x8,[x25]
7101c5e6e8  add x0,x8,#0x1a0
7101c5e6ec  bl 0x7101c71530
7101c5e6f0  ldr x8,[x25]
7101c5e6f4  add x0,x8,#0x20
7101c5e6f8  adrp x1,0x710436c000
7101c5e6fc  add x1,x1,#0x3fd
7101c5e700  add x8,sp,#0x70
7101c5e704  bl 0x7103776910
7101c5e708  ldr x20,[sp, #0x78]
7101c5e70c  ldr x0,[x20, #0x10]
7101c5e710  cbz x0,0x7101c5e728
7101c5e714  add x1,sp,#0x30
7101c5e718  mov w2,wzr
7101c5e71c  mov w3,wzr
7101c5e720  str wzr,[sp, #0x30]
7101c5e724  bl 0x71037a2270
7101c5e728  adrp x21,0x710523d000
7101c5e72c  add x21,x21,#0x9a8
7101c5e730  stp x21,xzr,[sp, #0x70]
7101c5e734  cbz x20,0x7101c5e740
7101c5e738  mov x0,x20
7101c5e73c  bl 0x710392eb40
7101c5e740  ldr x8,[x25]
7101c5e744  add x0,x8,#0x20
7101c5e748  adrp x1,0x7104443000
7101c5e74c  add x1,x1,#0x7d9
7101c5e750  add x8,sp,#0x70
7101c5e754  bl 0x7103776910
7101c5e758  ldr x20,[sp, #0x78]
7101c5e75c  ldr x0,[x20, #0x10]
7101c5e760  cbz x0,0x7101c5e778
7101c5e764  add x1,sp,#0x30
7101c5e768  mov w2,wzr
7101c5e76c  mov w3,wzr
7101c5e770  str wzr,[sp, #0x30]
7101c5e774  bl 0x71037a2270
7101c5e778  stp x21,xzr,[sp, #0x70]
7101c5e77c  cbz x20,0x7101c5e788
7101c5e780  mov x0,x20
7101c5e784  bl 0x710392eb40
7101c5e788  ldr x8,[x25]
7101c5e78c  ldr x0,[x8, #0x310]
7101c5e790  str xzr,[x8, #0x310]
7101c5e794  cbz x0,0x7101c5ea8c
7101c5e798  ldr x8,[x0]
7101c5e79c  ldr x8,[x8, #0x8]
7101c5e7a0  blr x8
7101c5e7a4  b 0x7101c5ea8c
7101c5e7a8  mov w8,#0x1041
7101c5e7ac  ldrb w8,[x23, x8, LSL ]
7101c5e7b0  cbz w8,0x7101c5e7f4
7101c5e7b4  adrp x8,0x710532f000
7101c5e7b8  ldr x8,[x8, #0x8d0]
7101c5e7bc  ldr x0,[x8, #0x8]
7101c5e7c0  ldp x8,x9,[x0, #0x40]
7101c5e7c4  sub x9,x9,x8
7101c5e7c8  asr x9,x9,#0x3
7101c5e7cc  cmp x9,#0x4
7101c5e7d0  b.cc 0x7101c5e830
7101c5e7d4  ldr x20,[x8, #0x18]
7101c5e7d8  ldrb w8,[x0, #0x191]
7101c5e7dc  cbnz w8,0x7101c5e8ac
7101c5e7e0  b 0x7101c5e83c
7101c5e7e4  ldr x8,[x19, #0x428]
7101c5e7e8  tbnz w8,#0x0,0x7101c5e954
7101c5e7ec  mov w22,wzr
7101c5e7f0  b 0x7101c5f5a4
7101c5e7f4  mov w8,#0x1040
7101c5e7f8  ldrb w8,[x23, x8, LSL ]
7101c5e7fc  cbz w8,0x7101c5e984
7101c5e800  adrp x8,0x710532f000
7101c5e804  ldr x8,[x8, #0x8d0]
7101c5e808  ldr x0,[x8, #0x8]
7101c5e80c  ldp x8,x9,[x0, #0x40]
7101c5e810  sub x9,x9,x8
7101c5e814  asr x9,x9,#0x3
7101c5e818  cmp x9,#0x6
7101c5e81c  b.cc 0x7101c5e998
7101c5e820  ldr x20,[x8, #0x28]
7101c5e824  ldrb w8,[x0, #0x191]
7101c5e828  cbnz w8,0x7101c5ea14
7101c5e82c  b 0x7101c5e9a4
7101c5e830  mov x20,xzr
7101c5e834  ldrb w8,[x0, #0x191]
7101c5e838  cbnz w8,0x7101c5e8ac
7101c5e83c  mov w2,#0x4
7101c5e840  mov x1,x20
7101c5e844  bl 0x7103313f20
7101c5e848  tbz w0,#0x0,0x7101c5e8ac
7101c5e84c  add x0,sp,#0x70
7101c5e850  mov x1,x20
7101c5e854  bl 0x71024076d0
7101c5e858  ldr x8,[sp, #0x80]
7101c5e85c  adrp x9,0x7104f73000
7101c5e860  add x9,x9,#0xd50
7101c5e864  str x9,[sp, #0x78]
7101c5e868  cbz x8,0x7101c5e8d4
7101c5e86c  adrp x8,0x7106dd5000
7101c5e870  ldrb w8,[x8, #0x3a8]
7101c5e874  cmp w8,#0x1
7101c5e878  b.ne 0x7101c5e8d4
7101c5e87c  adrp x9,0x7106dd5000
7101c5e880  ldr w8,[sp, #0x88]
7101c5e884  ldr w9,[x9, #0x3ac]
7101c5e888  cmp w8,w9
7101c5e88c  b.ne 0x7101c5e8d4
7101c5e890  ldr x8,[sp, #0x80]
7101c5e894  ldr wzr,[x8, #0x38]!
7101c5e898  ldaxr w9,[x8]
7101c5e89c  sub w9,w9,#0x1
7101c5e8a0  stlxr w10,w9,[x8]
7101c5e8a4  cbnz w10,0x7101c5e898
7101c5e8a8  b 0x7101c5e8d4
7101c5e8ac  mov x8,#0x650000000000
7101c5e8b0  movk x8,#0x87, LSL #48
7101c5e8b4  strb wzr,[sp, #0x90]
7101c5e8b8  stp x24,xzr,[sp, #0x98]
7101c5e8bc  str wzr,[sp, #0x70]
7101c5e8c0  str xzr,[sp, #0xa8]
7101c5e8c4  stp xzr,x8,[sp, #0x80]
7101c5e8c8  adrp x8,0x7104f73000
7101c5e8cc  add x8,x8,#0xd50
7101c5e8d0  str x8,[sp, #0x78]
7101c5e8d4  str xzr,[sp, #0x80]
7101c5e8d8  strb wzr,[sp, #0x90]
7101c5e8dc  ldr x8,[x25]
7101c5e8e0  ldr x9,[x8, #0x18]
7101c5e8e4  ldr x0,[x9]
7101c5e8e8  cbz x0,0x7101c5e904
7101c5e8ec  ldr x8,[x0]
7101c5e8f0  ldr x8,[x8, #0x2f0]
7101c5e8f4  mov w1,wzr
7101c5e8f8  mov w2,wzr
7101c5e8fc  blr x8
7101c5e900  ldr x8,[x25]
7101c5e904  mov w9,#0x1041
7101c5e908  b 0x7101c5ea88
7101c5e90c  mov w23,wzr
7101c5e910  cbz w26,0x7101c5f8e8
7101c5e914  ldr x8,[x19, #0x428]
7101c5e918  tbnz w8,#0x0,0x7101c5e924
7101c5e91c  mov w23,wzr
7101c5e920  b 0x7101c5f384
7101c5e924  ldr x23,[x19, #0x2f8]
7101c5e928  ldr x8,[x23]
7101c5e92c  ldr x8,[x8, #0x18]
7101c5e930  ldr x0,[x8]
7101c5e934  cbz x0,0x7101c5f338
7101c5e938  ldr x8,[x0]
7101c5e93c  ldr x8,[x8, #0x2f8]
7101c5e940  blr x8
7101c5e944  tbz w0,#0x0,0x7101c5f310
7101c5e948  ldr x8,[x19, #0x428]
7101c5e94c  mov w23,wzr
7101c5e950  b 0x7101c5f384
7101c5e954  ldr x22,[x19, #0x2f8]
7101c5e958  ldr x8,[x22]
7101c5e95c  ldr x8,[x8, #0x18]
7101c5e960  ldr x0,[x8]
7101c5e964  cbz x0,0x7101c5f370
7101c5e968  ldr x8,[x0]
7101c5e96c  ldr x8,[x8, #0x2f8]
7101c5e970  blr x8
7101c5e974  tbz w0,#0x0,0x7101c5f348
7101c5e978  ldr x8,[x19, #0x428]
7101c5e97c  mov w22,wzr
7101c5e980  b 0x7101c5f5a4
7101c5e984  ldr w8,[x23, #0x103c]
7101c5e988  cbz w8,0x7101c5f634
7101c5e98c  sub w8,w8,#0x1
7101c5e990  str w8,[x23, #0x103c]
7101c5e994  b 0x7101c5ea8c
7101c5e998  mov x20,xzr
7101c5e99c  ldrb w8,[x0, #0x191]
7101c5e9a0  cbnz w8,0x7101c5ea14
7101c5e9a4  mov w2,#0x4
7101c5e9a8  mov x1,x20
7101c5e9ac  bl 0x7103313f20
7101c5e9b0  tbz w0,#0x0,0x7101c5ea14
7101c5e9b4  add x0,sp,#0x70
7101c5e9b8  mov x1,x20
7101c5e9bc  bl 0x71024076d0
7101c5e9c0  ldr x8,[sp, #0x80]
7101c5e9c4  adrp x9,0x7104f73000
7101c5e9c8  add x9,x9,#0xd50
7101c5e9cc  str x9,[sp, #0x78]
7101c5e9d0  cbz x8,0x7101c5ea3c
7101c5e9d4  adrp x8,0x7106dd5000
7101c5e9d8  ldrb w8,[x8, #0x3a8]
7101c5e9dc  cmp w8,#0x1
7101c5e9e0  b.ne 0x7101c5ea3c
7101c5e9e4  adrp x9,0x7106dd5000
7101c5e9e8  ldr w8,[sp, #0x88]
7101c5e9ec  ldr w9,[x9, #0x3ac]
7101c5e9f0  cmp w8,w9
7101c5e9f4  b.ne 0x7101c5ea3c
7101c5e9f8  ldr x8,[sp, #0x80]
7101c5e9fc  ldr wzr,[x8, #0x38]!
7101c5ea00  ldaxr w9,[x8]
7101c5ea04  sub w9,w9,#0x1
7101c5ea08  stlxr w10,w9,[x8]
7101c5ea0c  cbnz w10,0x7101c5ea00
7101c5ea10  b 0x7101c5ea3c
7101c5ea14  mov x8,#0x650000000000
7101c5ea18  movk x8,#0x87, LSL #48
7101c5ea1c  strb wzr,[sp, #0x90]
7101c5ea20  stp x24,xzr,[sp, #0x98]
7101c5ea24  str wzr,[sp, #0x70]
7101c5ea28  str xzr,[sp, #0xa8]
7101c5ea2c  stp xzr,x8,[sp, #0x80]
7101c5ea30  adrp x8,0x7104f73000
7101c5ea34  add x8,x8,#0xd50
7101c5ea38  str x8,[sp, #0x78]
7101c5ea3c  str xzr,[sp, #0x80]
7101c5ea40  strb wzr,[sp, #0x90]
7101c5ea44  ldr x8,[x25]
7101c5ea48  ldr x0,[x8, #0x8]
7101c5ea4c  fmov s0,0x3f800000
7101c5ea50  adrp x1,0x71043e0000
7101c5ea54  add x1,x1,#0x210
7101c5ea58  bl 0x7103778300
7101c5ea5c  ldr x8,[x25]
7101c5ea60  ldr x9,[x8, #0x18]
7101c5ea64  ldr x0,[x9]
7101c5ea68  cbz x0,0x7101c5ea84
7101c5ea6c  ldr x8,[x0]
7101c5ea70  ldr x8,[x8, #0x2f0]
7101c5ea74  mov w1,#0x1
7101c5ea78  mov w2,wzr
7101c5ea7c  blr x8
7101c5ea80  ldr x8,[x25]
7101c5ea84  mov w9,#0x1040
7101c5ea88  strb wzr,[x8, x9, LSL ]
7101c5ea8c  ldrsw x8,[x19, #0x2bc]
7101c5ea90  cmp w8,#0x13
7101c5ea94  b.cs 0x7101c60874
7101c5ea98  add x8,x19,x8, LSL #0x2
7101c5ea9c  ldr w8,[x8, #0x270]
7101c5eaa0  ldr w9,[x19, #0x2c0]
7101c5eaa4  cmp w9,w8
7101c5eaa8  b.eq 0x7101c5eaf8
7101c5eaac  cmp w8,#0xc
7101c5eab0  str w9,[x19, #0x2c8]
7101c5eab4  str w8,[x19, #0x2c0]
7101c5eab8  b.cs 0x7101c60874
7101c5eabc  sxtw x8,w8
7101c5eac0  add x8,x19,x8, LSL #0x4
7101c5eac4  ldp x9,x8,[x8, #0x1b0]
7101c5eac8  stp x9,x8,[x19, #0x190]
7101c5eacc  ldp x8,x10,[x19, #0x1a0]
7101c5ead0  and x9,x10,#0x1
7101c5ead4  orr x11,x9,x8
7101c5ead8  cbz x11,0x7101c5eaf4
7101c5eadc  ldr x11,[x19, #0x188]
7101c5eae0  add x0,x11,x10, ASR #0x1
7101c5eae4  cbz x9,0x7101c5eaf0
7101c5eae8  ldr x9,[x0]
7101c5eaec  ldr x8,[x9, x8, LSL #0x0]
7101c5eaf0  blr x8
7101c5eaf4  str wzr,[x19, #0x2c4]
7101c5eaf8  ldrb w8,[x19, #0x2cc]
7101c5eafc  cbz w8,0x7101c5eb30
7101c5eb00  ldp x8,x10,[x19, #0x1a0]
7101c5eb04  and x9,x10,#0x1
7101c5eb08  orr x11,x9,x8
7101c5eb0c  cbz x11,0x7101c5eb28
7101c5eb10  ldr x11,[x19, #0x188]
7101c5eb14  add x0,x11,x10, ASR #0x1
7101c5eb18  cbz x9,0x7101c5eb24
7101c5eb1c  ldr x9,[x0]
7101c5eb20  ldr x8,[x9, x8, LSL #0x0]
7101c5eb24  blr x8
7101c5eb28  str wzr,[x19, #0x2c4]
7101c5eb2c  strb wzr,[x19, #0x2cc]
7101c5eb30  ldr x9,[x19, #0x188]
7101c5eb34  cbz x9,0x7101c5eb5c
7101c5eb38  ldp x8,x11,[x19, #0x190]
7101c5eb3c  and x10,x11,#0x1
7101c5eb40  orr x12,x10,x8
7101c5eb44  cbz x12,0x7101c5eb5c
7101c5eb48  add x0,x9,x11, ASR #0x1
7101c5eb4c  cbz x10,0x7101c5eb58
7101c5eb50  ldr x9,[x0]
7101c5eb54  ldr x8,[x9, x8, LSL #0x0]
7101c5eb58  blr x8
7101c5eb5c  ldr w8,[x19, #0x2c4]
7101c5eb60  ldr x0,[x19, #0x7f0]
7101c5eb64  add w8,w8,#0x1
7101c5eb68  str w8,[x19, #0x2c4]
7101c5eb6c  cbz x0,0x7101c5eba0
7101c5eb70  ldr x8,[x0, #0x8]
7101c5eb74  ldr x8,[x8, #0x8]
7101c5eb78  cbz x8,0x7101c5ecd4
7101c5eb7c  ldr x9,[x8]
7101c5eb80  ldr x9,[x9, #0x138]
7101c5eb84  mov x0,x8
7101c5eb88  blr x9
7101c5eb8c  tbz w0,#0x0,0x7101c5ece4
7101c5eb90  ldr x0,[x19, #0x7f0]
7101c5eb94  str xzr,[x19, #0x7f0]
7101c5eb98  cbnz x0,0x7101c5ecd8
7101c5eb9c  b 0x7101c5ece4
7101c5eba0  ldrb w8,[x19, #0x7f8]
7101c5eba4  cbz w8,0x7101c5ece4
7101c5eba8  ldrb w8,[x19, #0x7f9]
7101c5ebac  cbz w8,0x7101c5ece4
7101c5ebb0  mov w0,#0x10
7101c5ebb4  mov w1,#0x8
7101c5ebb8  add x20,x19,#0x7e0
7101c5ebbc  bl 0x710392e290
7101c5ebc0  mov x21,x0
7101c5ebc4  cbnz x0,0x7101c5ec10
7101c5ebc8  adrp x8,0x7105332000
7101c5ebcc  ldr x0,[x8, #0xf00]
7101c5ebd0  cbz x0,0x7101c5ec0c
7101c5ebd4  mov w8,#0x8
7101c5ebd8  str wzr,[sp, #0x30]
7101c5ebdc  add x1,sp,#0x30
7101c5ebe0  str x8,[sp, #0x70]
7101c5ebe4  ldr x8,[x0]
7101c5ebe8  ldr x8,[x8, #0x30]
7101c5ebec  add x2,sp,#0x70
7101c5ebf0  blr x8
7101c5ebf4  tbz w0,#0x0,0x7101c5ec0c
7101c5ebf8  mov w0,#0x10
7101c5ebfc  mov w1,#0x8
7101c5ec00  bl 0x710392e290
7101c5ec04  mov x21,x0
7101c5ec08  cbnz x0,0x7101c5ec10
7101c5ec0c  mov x21,xzr
7101c5ec10  str xzr,[x21]
7101c5ec14  ldr x8,[x19, #0x7e8]
7101c5ec18  ldr x8,[x8, #0x8]
7101c5ec1c  cbz x8,0x7101c5eea8
7101c5ec20  ldr x0,[x8, #0x60]
7101c5ec24  cbz x0,0x7101c5eea8
7101c5ec28  ldr x8,[x8, #0x18]
7101c5ec2c  add x1,x8,#0xb0
7101c5ec30  bl 0x7103796f20
7101c5ec34  str x0,[x21]
7101c5ec38  cbz x0,0x7101c5eeac
7101c5ec3c  ldr x8,[x0]
7101c5ec40  ldr x8,[x8, #0x238]
7101c5ec44  mov w1,wzr
7101c5ec48  mov x22,x0
7101c5ec4c  blr x8
7101c5ec50  ldr x8,[x22]
7101c5ec54  ldr x8,[x8, #0x228]
7101c5ec58  mov x0,x22
7101c5ec5c  mov w1,wzr
7101c5ec60  blr x8
7101c5ec64  ldr x8,[x22]
7101c5ec68  ldr x8,[x8, #0x200]
7101c5ec6c  mov x0,x22
7101c5ec70  blr x8
7101c5ec74  tbz w0,#0x0,0x7101c5eeac
7101c5ec78  ldr x8,[x22]
7101c5ec7c  ldr x8,[x8, #0x210]
7101c5ec80  mov x0,x22
7101c5ec84  blr x8
7101c5ec88  tbz w0,#0x0,0x7101c5eeac
7101c5ec8c  ldr x8,[x22]
7101c5ec90  ldr x8,[x8, #0x238]
7101c5ec94  mov w1,#0x1
7101c5ec98  mov x0,x22
7101c5ec9c  blr x8
7101c5eca0  ldr x8,[x22]
7101c5eca4  ldr x8,[x8, #0x3c8]
7101c5eca8  mov x0,x22
7101c5ecac  blr x8
7101c5ecb0  ldr x8,[x22]
7101c5ecb4  ldr x8,[x8, #0x10]
7101c5ecb8  mov x0,x22
7101c5ecbc  blr x8
7101c5ecc0  ldr x8,[x22]
7101c5ecc4  ldr x8,[x8, #0x18]
7101c5ecc8  mov x0,x22
7101c5eccc  blr x8
7101c5ecd0  b 0x7101c5eeac
7101c5ecd4  str xzr,[x19, #0x7f0]
7101c5ecd8  ldr x8,[x0]
7101c5ecdc  ldr x8,[x8, #0x8]
7101c5ece0  blr x8
7101c5ece4  ldrb w8,[x19, #0x808]
7101c5ece8  cbz w8,0x7101c5f1c8
7101c5ecec  ldr x22,[x19, #0x908]
7101c5ecf0  ldrb w8,[x19, #0x910]
7101c5ecf4  cbz x22,0x7101c5ee9c
7101c5ecf8  cbnz w8,0x7101c5eea0
7101c5ecfc  ldr x8,[x19, #0x8e8]
7101c5ed00  ldr x9,[x19, #0x900]
7101c5ed04  mov w23,wzr
7101c5ed08  mov w25,wzr
7101c5ed0c  add x20,x19,#0x800
7101c5ed10  mov w10,#0x1
7101c5ed14  orr w26,wzr,#0x18
7101c5ed18  lsr x11,x9,#0x9
7101c5ed1c  and x9,x9,#0xfff
7101c5ed20  and x11,x11,#0x7ffffffffffff8
7101c5ed24  ldr x8,[x8, x11, LSL #0x0]
7101c5ed28  ldrb w21,[x8, x9, LSL ]
7101c5ed2c  tbnz w10,#0x0,0x7101c5ed4c
7101c5ed30  cmp w21,#0x4
7101c5ed34  b.cs 0x7101c60874
7101c5ed38  madd x8,x21,x26,x19
7101c5ed3c  ldrb w8,[x8, #0x838]
7101c5ed40  and w9,w27,#0xff
7101c5ed44  cmp w9,w8
7101c5ed48  b.ne 0x7101c5edf0
7101c5ed4c  ldr x9,[x19, #0x8c8]
7101c5ed50  ldr x8,[x19, #0x8c0]
7101c5ed54  sub x9,x9,x8
7101c5ed58  asr x9,x9,#0x1
7101c5ed5c  cmp x9,x21
7101c5ed60  b.ls 0x7101c5ed88
7101c5ed64  lsl x9,x21,#0x1
7101c5ed68  ldrb w8,[x8, x9, LSL ]
7101c5ed6c  cbz w8,0x7101c5ed88
7101c5ed70  mov w2,#0x1
7101c5ed74  mov x0,x20
7101c5ed78  mov w1,w21
7101c5ed7c  mov w3,wzr
7101c5ed80  mov w23,#0x1
7101c5ed84  bl 0x7101c597c0
7101c5ed88  cmp w21,#0x4
7101c5ed8c  b.cs 0x7101c60874
7101c5ed90  madd x8,x21,x26,x19
7101c5ed94  ldr x9,[x19, #0x900]
7101c5ed98  ldr x10,[x19, #0x908]
7101c5ed9c  add x9,x9,#0x1
7101c5eda0  ldrb w27,[x8, #0x838]
7101c5eda4  ldr x8,[x19, #0x8e8]
7101c5eda8  sub x10,x10,#0x1
7101c5edac  cmp x9,#0x2, LSL #12
7101c5edb0  str x10,[x19, #0x908]
7101c5edb4  str x9,[x19, #0x900]
7101c5edb8  b.cc 0x7101c5ede0
7101c5edbc  ldr x0,[x8]
7101c5edc0  cbz x0,0x7101c5edd0
7101c5edc4  bl 0x710392eb40
7101c5edc8  ldr x8,[x19, #0x8e8]
7101c5edcc  ldr x9,[x19, #0x900]
7101c5edd0  add x8,x8,#0x8
7101c5edd4  sub x9,x9,#0x1, LSL #12
7101c5edd8  str x8,[x19, #0x8e8]
7101c5eddc  str x9,[x19, #0x900]
7101c5ede0  add w25,w25,#0x1
7101c5ede4  mov w10,wzr
7101c5ede8  cmp x22,w25, UXTB 
7101c5edec  b.hi 0x7101c5ed18
7101c5edf0  tbz w23,#0x0,0x7101c5f1c0
7101c5edf4  adrp x8,0x710532f000
7101c5edf8  ldr x8,[x8, #0x8d0]
7101c5edfc  ldr x0,[x8, #0x8]
7101c5ee00  ldrb w8,[x0, #0x191]
7101c5ee04  and w9,w27,#0xff
7101c5ee08  cmp w9,#0x1
7101c5ee0c  b.ne 0x7101c5f0fc
7101c5ee10  cbnz w8,0x7101c5f188
7101c5ee14  mov x20,#0x6e12
7101c5ee18  movk x20,#0x2d22, LSL #16
7101c5ee1c  movk x20,#0x1a, LSL #32
7101c5ee20  mov w2,#0x4
7101c5ee24  mov x1,x20
7101c5ee28  bl 0x7103313f20
7101c5ee2c  tbz w0,#0x0,0x7101c5f188
7101c5ee30  add x0,sp,#0x70
7101c5ee34  mov x1,x20
7101c5ee38  add x21,sp,#0x70
7101c5ee3c  bl 0x71024076d0
7101c5ee40  ldr x9,[sp, #0x80]
7101c5ee44  add x8,x21,#0x10
7101c5ee48  adrp x10,0x7104f73000
7101c5ee4c  add x10,x10,#0xd50
7101c5ee50  str x10,[sp, #0x78]
7101c5ee54  cbz x9,0x7101c5f1b8
7101c5ee58  adrp x9,0x7106dd5000
7101c5ee5c  ldrb w9,[x9, #0x3a8]
7101c5ee60  cmp w9,#0x1
7101c5ee64  b.ne 0x7101c5f970
7101c5ee68  adrp x10,0x7106dd5000
7101c5ee6c  ldr w9,[sp, #0x88]
7101c5ee70  ldr w10,[x10, #0x3ac]
7101c5ee74  cmp w9,w10
7101c5ee78  b.ne 0x7101c5f970
7101c5ee7c  ldr x9,[sp, #0x80]
7101c5ee80  ldr wzr,[x9, #0x38]!
7101c5ee84  ldaxr w10,[x9]
7101c5ee88  sub w10,w10,#0x1
7101c5ee8c  add x21,sp,#0x70
7101c5ee90  stlxr w11,w10,[x9]
7101c5ee94  cbnz w11,0x7101c5ee84
7101c5ee98  b 0x7101c5f1b8
7101c5ee9c  cbz w8,0x7101c5f1c8
7101c5eea0  sub w8,w8,#0x1
7101c5eea4  b 0x7101c5f1c4
7101c5eea8  str xzr,[x21]
7101c5eeac  mov x0,x21
7101c5eeb0  bl 0x710392eb40
7101c5eeb4  adrp x1,0x710428f000
7101c5eeb8  add x1,x1,#0xf7d
7101c5eebc  add x8,sp,#0x70
7101c5eec0  mov x0,x20
7101c5eec4  strb wzr,[x19, #0x7f8]
7101c5eec8  add x21,sp,#0x70
7101c5eecc  bl 0x71037780e0
7101c5eed0  mov w0,#0x10
7101c5eed4  mov w1,#0x10
7101c5eed8  bl 0x710392e290
7101c5eedc  cbnz x0,0x7101c5ef24
7101c5eee0  adrp x8,0x7105332000
7101c5eee4  ldr x0,[x8, #0xf00]
7101c5eee8  cbz x0,0x7101c5ef20
7101c5eeec  mov w8,#0x10
7101c5eef0  stur wzr,[x29, #-0x6c]
7101c5eef4  sub x1,x29,#0x6c
7101c5eef8  str x8,[sp, #0x30]
7101c5eefc  ldr x8,[x0]
7101c5ef00  ldr x8,[x8, #0x30]
7101c5ef04  add x2,sp,#0x30
7101c5ef08  blr x8
7101c5ef0c  tbz w0,#0x0,0x7101c5ef20
7101c5ef10  mov w0,#0x10
7101c5ef14  mov w1,#0x10
7101c5ef18  bl 0x710392e290
7101c5ef1c  cbnz x0,0x7101c5ef24
7101c5ef20  mov x0,xzr
7101c5ef24  adrp x20,0x710523d000
7101c5ef28  add x20,x20,#0x9e8
7101c5ef2c  cmp x21,x0
7101c5ef30  stp x20,xzr,[x0]
7101c5ef34  b.eq 0x7101c5ef44
7101c5ef38  ldr x8,[sp, #0x78]
7101c5ef3c  str xzr,[sp, #0x78]
7101c5ef40  str x8,[x0, #0x8]
7101c5ef44  ldr x8,[x19, #0x7f0]
7101c5ef48  str x0,[x19, #0x7f0]
7101c5ef4c  cbz x8,0x7101c5ef60
7101c5ef50  ldr x9,[x8]
7101c5ef54  ldr x9,[x9, #0x8]
7101c5ef58  mov x0,x8
7101c5ef5c  blr x9
7101c5ef60  ldr x0,[sp, #0x78]
7101c5ef64  stp x20,xzr,[sp, #0x70]
7101c5ef68  cbz x0,0x7101c5ef70
7101c5ef6c  bl 0x710392eb40
7101c5ef70  ldr x0,[x19, #0x7f0]
7101c5ef74  fmov s0,0x3f800000
7101c5ef78  mov w21,#0x6500
7101c5ef7c  movk w21,#0x87, LSL #16
7101c5ef80  bl 0x710377aee0
7101c5ef84  adrp x22,0x710532f000
7101c5ef88  ldr x8,[x22, #0x8d0]
7101c5ef8c  ldr x0,[x8, #0x8]
7101c5ef90  ldrb w8,[x0, #0x191]
7101c5ef94  cbnz w8,0x7101c5f014
7101c5ef98  mov x20,#0x9adc
7101c5ef9c  movk x20,#0xd3b1, LSL #16
7101c5efa0  movk x20,#0x13, LSL #32
7101c5efa4  mov w2,#0x4
7101c5efa8  mov x1,x20
7101c5efac  bl 0x7103313f20
7101c5efb0  tbz w0,#0x0,0x7101c5f014
7101c5efb4  add x0,sp,#0x70
7101c5efb8  mov x1,x20
7101c5efbc  bl 0x71024076d0
7101c5efc0  ldr x8,[sp, #0x80]
7101c5efc4  adrp x9,0x7104f73000
7101c5efc8  add x9,x9,#0xd50
7101c5efcc  str x9,[sp, #0x78]
7101c5efd0  cbz x8,0x7101c5f034
7101c5efd4  adrp x8,0x7106dd5000
7101c5efd8  ldrb w8,[x8, #0x3a8]
7101c5efdc  cmp w8,#0x1
7101c5efe0  b.ne 0x7101c5f034
7101c5efe4  adrp x9,0x7106dd5000
7101c5efe8  ldr w8,[sp, #0x88]
7101c5efec  ldr w9,[x9, #0x3ac]
7101c5eff0  cmp w8,w9
7101c5eff4  b.ne 0x7101c5f034
7101c5eff8  ldr x8,[sp, #0x80]
7101c5effc  ldr wzr,[x8, #0x38]!
7101c5f000  ldaxr w9,[x8]
7101c5f004  sub w9,w9,#0x1
7101c5f008  stlxr w10,w9,[x8]
7101c5f00c  cbnz w10,0x7101c5f000
7101c5f010  b 0x7101c5f034
7101c5f014  adrp x8,0x7104f73000
7101c5f018  add x8,x8,#0xd50
7101c5f01c  stp wzr,w21,[sp, #0x88]
7101c5f020  strb wzr,[sp, #0x90]
7101c5f024  str wzr,[sp, #0x70]
7101c5f028  str xzr,[sp, #0xa8]
7101c5f02c  stp x24,xzr,[sp, #0x98]
7101c5f030  stp x8,xzr,[sp, #0x78]
7101c5f034  ldr x8,[x22, #0x8d0]
7101c5f038  str xzr,[sp, #0x80]
7101c5f03c  strb wzr,[sp, #0x90]
7101c5f040  ldr x0,[x8, #0x8]
7101c5f044  ldrb w8,[x0, #0x191]
7101c5f048  cbnz w8,0x7101c5f0c8
7101c5f04c  mov x20,#0x1361
7101c5f050  movk x20,#0xa306, LSL #16
7101c5f054  movk x20,#0x17, LSL #32
7101c5f058  mov w2,#0x4
7101c5f05c  mov x1,x20
7101c5f060  bl 0x7103313f20
7101c5f064  tbz w0,#0x0,0x7101c5f0c8
7101c5f068  add x0,sp,#0x30
7101c5f06c  mov x1,x20
7101c5f070  bl 0x71024076d0
7101c5f074  ldr x8,[sp, #0x40]
7101c5f078  adrp x9,0x7104f73000
7101c5f07c  add x9,x9,#0xd50
7101c5f080  str x9,[sp, #0x38]
7101c5f084  cbz x8,0x7101c5f0e8
7101c5f088  adrp x8,0x7106dd5000
7101c5f08c  ldrb w8,[x8, #0x3a8]
7101c5f090  cmp w8,#0x1
7101c5f094  b.ne 0x7101c5f0e8
7101c5f098  adrp x9,0x7106dd5000
7101c5f09c  ldr w8,[sp, #0x48]
7101c5f0a0  ldr w9,[x9, #0x3ac]
7101c5f0a4  cmp w8,w9
7101c5f0a8  b.ne 0x7101c5f0e8
7101c5f0ac  ldr x8,[sp, #0x40]
7101c5f0b0  ldr wzr,[x8, #0x38]!
7101c5f0b4  ldaxr w9,[x8]
7101c5f0b8  sub w9,w9,#0x1
7101c5f0bc  stlxr w10,w9,[x8]
7101c5f0c0  cbnz w10,0x7101c5f0b4
7101c5f0c4  b 0x7101c5f0e8
7101c5f0c8  adrp x8,0x7104f73000
7101c5f0cc  add x8,x8,#0xd50
7101c5f0d0  stp wzr,w21,[sp, #0x48]
7101c5f0d4  strb wzr,[sp, #0x50]
7101c5f0d8  str wzr,[sp, #0x30]
7101c5f0dc  str xzr,[sp, #0x68]
7101c5f0e0  stp x24,xzr,[sp, #0x58]
7101c5f0e4  stp x8,xzr,[sp, #0x38]
7101c5f0e8  str xzr,[sp, #0x40]
7101c5f0ec  strb wzr,[x19, #0x7f9]
7101c5f0f0  ldrb w8,[x19, #0x808]
7101c5f0f4  cbnz w8,0x7101c5ecec
7101c5f0f8  b 0x7101c5f1c8
7101c5f0fc  cbnz w8,0x7101c5f188
7101c5f100  mov x20,#0x76de
7101c5f104  movk x20,#0x35af, LSL #16
7101c5f108  movk x20,#0x16, LSL #32
7101c5f10c  mov w2,#0x4
7101c5f110  mov x1,x20
7101c5f114  bl 0x7103313f20
7101c5f118  tbz w0,#0x0,0x7101c5f188
7101c5f11c  add x0,sp,#0x70
7101c5f120  mov x1,x20
7101c5f124  add x21,sp,#0x70
7101c5f128  bl 0x71024076d0
7101c5f12c  ldr x9,[sp, #0x80]
7101c5f130  add x8,x21,#0x10
7101c5f134  adrp x10,0x7104f73000
7101c5f138  add x10,x10,#0xd50
7101c5f13c  str x10,[sp, #0x78]
7101c5f140  cbz x9,0x7101c5f1b8
7101c5f144  adrp x9,0x7106dd5000
7101c5f148  ldrb w9,[x9, #0x3a8]
7101c5f14c  cmp w9,#0x1
7101c5f150  b.ne 0x7101c5f970
7101c5f154  adrp x10,0x7106dd5000
7101c5f158  ldr w9,[sp, #0x88]
7101c5f15c  ldr w10,[x10, #0x3ac]
7101c5f160  cmp w9,w10
7101c5f164  b.ne 0x7101c5f970
7101c5f168  ldr x9,[sp, #0x80]
7101c5f16c  ldr wzr,[x9, #0x38]!
7101c5f170  ldaxr w10,[x9]
7101c5f174  sub w10,w10,#0x1
7101c5f178  add x21,sp,#0x70
7101c5f17c  stlxr w11,w10,[x9]
7101c5f180  cbnz w11,0x7101c5f170
7101c5f184  b 0x7101c5f1b8
7101c5f188  mov x9,#0x650000000000
7101c5f18c  movk x9,#0x87, LSL #48
7101c5f190  add x21,sp,#0x70
7101c5f194  stp x24,xzr,[sp, #0x98]
7101c5f198  add x8,x21,#0x10
7101c5f19c  stp xzr,x9,[sp, #0x80]
7101c5f1a0  adrp x9,0x7104f73000
7101c5f1a4  add x9,x9,#0xd50
7101c5f1a8  strb wzr,[sp, #0x90]
7101c5f1ac  str wzr,[sp, #0x70]
7101c5f1b0  str xzr,[sp, #0xa8]
7101c5f1b4  str x9,[sp, #0x78]
7101c5f1b8  str xzr,[x8]
7101c5f1bc  strb wzr,[x21, #0x20]
7101c5f1c0  mov w8,#0xa
7101c5f1c4  strb w8,[x19, #0x910]
7101c5f1c8  mov w8,#0x1b78
7101c5f1cc  add x0,x19,x8
7101c5f1d0  bl 0x7101c4ce90
7101c5f1d4  ldr x9,[x19, #0x1b78]
7101c5f1d8  cbz x9,0x7101c5f204
7101c5f1dc  ldr x11,[x19, #0x1b88]
7101c5f1e0  ldr x8,[x19, #0x1b80]
7101c5f1e4  and x10,x11,#0x1
7101c5f1e8  orr x12,x10,x8
7101c5f1ec  cbz x12,0x7101c5f204
7101c5f1f0  add x0,x9,x11, ASR #0x1
7101c5f1f4  cbz x10,0x7101c5f200
7101c5f1f8  ldr x9,[x0]
7101c5f1fc  ldr x8,[x9, x8, LSL #0x0]
7101c5f200  blr x8
7101c5f204  ldr w8,[x19, #0x1c34]
7101c5f208  add w8,w8,#0x1
7101c5f20c  str w8,[x19, #0x1c34]
7101c5f210  ldrsw x8,[x19, #0x174]
7101c5f214  cmp w8,#0x13
7101c5f218  b.cs 0x7101c60874
7101c5f21c  add x8,x19,x8, LSL #0x2
7101c5f220  ldr w8,[x8, #0x128]
7101c5f224  ldr w9,[x19, #0x178]
7101c5f228  cmp w9,w8
7101c5f22c  b.eq 0x7101c5f27c
7101c5f230  cmp w8,#0xe
7101c5f234  str w9,[x19, #0x180]
7101c5f238  str w8,[x19, #0x178]
7101c5f23c  b.cs 0x7101c60874
7101c5f240  sxtw x8,w8
7101c5f244  add x8,x19,x8, LSL #0x4
7101c5f248  ldp x9,x8,[x8, #0x48]
7101c5f24c  stp x9,x8,[x19, #0x28]
7101c5f250  ldp x8,x10,[x19, #0x38]
7101c5f254  and x9,x10,#0x1
7101c5f258  orr x11,x9,x8
7101c5f25c  cbz x11,0x7101c5f278
7101c5f260  ldr x11,[x19, #0x20]
7101c5f264  add x0,x11,x10, ASR #0x1
7101c5f268  cbz x9,0x7101c5f274
7101c5f26c  ldr x9,[x0]
7101c5f270  ldr x8,[x9, x8, LSL #0x0]
7101c5f274  blr x8
7101c5f278  str wzr,[x19, #0x17c]
7101c5f27c  ldrb w8,[x19, #0x184]
7101c5f280  cbz w8,0x7101c5f2b4
7101c5f284  ldp x8,x10,[x19, #0x38]
7101c5f288  and x9,x10,#0x1
7101c5f28c  orr x11,x9,x8
7101c5f290  cbz x11,0x7101c5f2ac
7101c5f294  ldr x11,[x19, #0x20]
7101c5f298  add x0,x11,x10, ASR #0x1
7101c5f29c  cbz x9,0x7101c5f2a8
7101c5f2a0  ldr x9,[x0]
7101c5f2a4  ldr x8,[x9, x8, LSL #0x0]
7101c5f2a8  blr x8
7101c5f2ac  str wzr,[x19, #0x17c]
7101c5f2b0  strb wzr,[x19, #0x184]
7101c5f2b4  ldr x9,[x19, #0x20]
7101c5f2b8  cbz x9,0x7101c5f2e0
7101c5f2bc  ldp x8,x11,[x19, #0x28]
7101c5f2c0  and x10,x11,#0x1
7101c5f2c4  orr x12,x10,x8
7101c5f2c8  cbz x12,0x7101c5f2e0
7101c5f2cc  add x0,x9,x11, ASR #0x1
7101c5f2d0  cbz x10,0x7101c5f2dc
7101c5f2d4  ldr x9,[x0]
7101c5f2d8  ldr x8,[x9, x8, LSL #0x0]
7101c5f2dc  blr x8
7101c5f2e0  ldr w8,[x19, #0x17c]
7101c5f2e4  add w8,w8,#0x1
7101c5f2e8  str w8,[x19, #0x17c]
7101c5f2ec  ldp d9,d8,[sp, #0xc0]
7101c5f2f0  ldp x29,x30,[sp, #0x120]
7101c5f2f4  ldp x20,x19,[sp, #0x110]
7101c5f2f8  ldp x22,x21,[sp, #0x100]
7101c5f2fc  ldp x24,x23,[sp, #0xf0]
7101c5f300  ldp x26,x25,[sp, #0xe0]
7101c5f304  ldp x28,x27,[sp, #0xd0]
7101c5f308  add sp,sp,#0x130
7101c5f30c  ret
7101c5f310  ldr x8,[x23]
7101c5f314  ldr x8,[x8, #0x18]
7101c5f318  ldr x0,[x8]
7101c5f31c  cbz x0,0x7101c5f338
7101c5f320  ldr x8,[x0]
7101c5f324  ldr x8,[x8, #0x3c0]
7101c5f328  blr x8
7101c5f32c  ldr x8,[x19, #0x428]
7101c5f330  tbz w0,#0x0,0x7101c5e91c
7101c5f334  b 0x7101c5f33c
7101c5f338  ldr x8,[x19, #0x428]
7101c5f33c  tbnz w8,#0x1,0x7101c5f380
7101c5f340  ubfx x23,x8,#0x2,#0x1
7101c5f344  b 0x7101c5f384
7101c5f348  ldr x8,[x22]
7101c5f34c  ldr x8,[x8, #0x18]
7101c5f350  ldr x0,[x8]
7101c5f354  cbz x0,0x7101c5f370
7101c5f358  ldr x8,[x0]
7101c5f35c  ldr x8,[x8, #0x3c0]
7101c5f360  blr x8
7101c5f364  ldr x8,[x19, #0x428]
7101c5f368  tbz w0,#0x0,0x7101c5e7ec
7101c5f36c  b 0x7101c5f374
7101c5f370  ldr x8,[x19, #0x428]
7101c5f374  tbnz w8,#0x1,0x7101c5f5a0
7101c5f378  ubfx x22,x8,#0x2,#0x1
7101c5f37c  b 0x7101c5f5a4
7101c5f380  mov w23,#0x1
7101c5f384  orr x9,x8,#0x4
7101c5f388  str x9,[x19, #0x428]
7101c5f38c  tbz w8,#0x0,0x7101c5f3f0
7101c5f390  ldr x27,[x19, #0x2f8]
7101c5f394  ldr x8,[x27]
7101c5f398  ldr x8,[x8, #0x18]
7101c5f39c  ldr x0,[x8]
7101c5f3a0  cbz x0,0x7101c5f3d4
7101c5f3a4  ldr x8,[x0]
7101c5f3a8  ldr x8,[x8, #0x2f8]
7101c5f3ac  blr x8
7101c5f3b0  tbnz w0,#0x0,0x7101c5f3f0
7101c5f3b4  ldr x8,[x27]
7101c5f3b8  ldr x8,[x8, #0x18]
7101c5f3bc  ldr x0,[x8]
7101c5f3c0  cbz x0,0x7101c5f3d4
7101c5f3c4  ldr x8,[x0]
7101c5f3c8  ldr x8,[x8, #0x3c0]
7101c5f3cc  blr x8
7101c5f3d0  tbz w0,#0x0,0x7101c5f3f0
7101c5f3d4  ldr x8,[x19, #0x428]
7101c5f3d8  tbnz w8,#0x1,0x7101c5f598
7101c5f3dc  ubfx x8,x8,#0x2,#0x1
7101c5f3e0  eor w8,w23,w8
7101c5f3e4  cmp w8,#0x1
7101c5f3e8  b.eq 0x7101c5f3f4
7101c5f3ec  b 0x7101c5f3f8
7101c5f3f0  tbz w23,#0x0,0x7101c5f3f8
7101c5f3f4  strb wzr,[x19, #0x431]
7101c5f3f8  sub x8,x29,#0x6c
7101c5f3fc  sturb w20,[x29, #-0x6c]
7101c5f400  stp x19,x8,[sp, #0x30]
7101c5f404  ldr x8,[x19, #0x488]
7101c5f408  ldr w1,[x8, #0x254]
7101c5f40c  ldr x8,[x22, #0x600]
7101c5f410  ldrb w9,[x8, #0x4aa]
7101c5f414  cbz w9,0x7101c5f420
7101c5f418  ldrb w8,[x8, #0x1a8]
7101c5f41c  tbnz w8,#0x1,0x7101c5f51c
7101c5f420  mov w8,#0x1
7101c5f424  ldr x9,[x19, #0x460]
7101c5f428  ldr s1,[x9, #0x144]
7101c5f42c  ldr s0,[x9, #0x140]
7101c5f430  adrp x10,0x7104471000
7101c5f434  ldr s4,[x10, #0xf68]
7101c5f438  fsub s2,s1,s0
7101c5f43c  fcmp s2,s4
7101c5f440  b.le 0x7101c5f454
7101c5f444  adrp x10,0x7104472000
7101c5f448  ldr s3,[x10, #0x970]
7101c5f44c  fcmp s2,s3
7101c5f450  b.mi 0x7101c5f4ac
7101c5f454  ldr s3,[x9, #0x14c]
7101c5f458  ldr s2,[x9, #0x148]
7101c5f45c  fsub s5,s3,s2
7101c5f460  fcmp s5,s4
7101c5f464  b.le 0x7101c5f478
7101c5f468  adrp x10,0x7104472000
7101c5f46c  ldr s4,[x10, #0x970]
7101c5f470  fcmp s5,s4
7101c5f474  b.mi 0x7101c5f4ac
7101c5f478  ldr x9,[x9, #0xf8]
7101c5f47c  ldr q4,[x9, #0x60]
7101c5f480  fcmp s1,s4
7101c5f484  b.lt 0x7101c5f4ac
7101c5f488  fcmp s0,s4
7101c5f48c  b.hi 0x7101c5f4ac
7101c5f490  dup s0,v4.S[0x1]
7101c5f494  fcmp s3,s0
7101c5f498  b.lt 0x7101c5f4ac
7101c5f49c  fcmp s2,s0
7101c5f4a0  b.hi 0x7101c5f4ac
7101c5f4a4  ldrb w9,[x19, #0x422]
7101c5f4a8  cbz w9,0x7101c5f978
7101c5f4ac  cmn w1,#0x1
7101c5f4b0  cset w9,eq
7101c5f4b4  eor w8,w8,#0x1
7101c5f4b8  and w8,w9,w8
7101c5f4bc  tbnz w8,#0x0,0x7101c5f4fc
7101c5f4c0  mov w8,#0x1ca8
7101c5f4c4  mov w9,#0x1
7101c5f4c8  strb w9,[x19, x8, LSL ]
7101c5f4cc  ldr x8,[x19, #0x450]
7101c5f4d0  orr w9,wzr,#0x1e0
7101c5f4d4  madd x8,x20,x9,x8
7101c5f4d8  strb wzr,[x8, #0x192]
7101c5f4dc  ldr x8,[x8, #0x30]
7101c5f4e0  ldr x8,[x8, #0x8]
7101c5f4e4  cbz x8,0x7101c5f4fc
7101c5f4e8  ldr x8,[x8, #0x18]
7101c5f4ec  cbz x8,0x7101c5f4fc
7101c5f4f0  ldrb w9,[x8, #0x58]
7101c5f4f4  and w9,w9,#0xfe
7101c5f4f8  strb w9,[x8, #0x58]
7101c5f4fc  mov w8,#0x1ca8
7101c5f500  ldrb w2,[x19, x8, LSL ]
7101c5f504  add x0,sp,#0x30
7101c5f508  mov w1,#0x4
7101c5f50c  bl 0x7101c624f0
7101c5f510  ldr w8,[x19, #0x1b30]
7101c5f514  cbnz w8,0x7101c5fb84
7101c5f518  b 0x7101c5fbd0
7101c5f51c  ldr w9,[x19, #0x1b30]
7101c5f520  cmp w9,#0x0
7101c5f524  cset w8,ne
7101c5f528  cbnz w9,0x7101c5f424
7101c5f52c  cmn w1,#0x1
7101c5f530  b.eq 0x7101c5f424
7101c5f534  and w8,w1,#0xff
7101c5f538  cmp w8,#0x1
7101c5f53c  b.ne 0x7101c5fe9c
7101c5f540  ldrb w8,[x25]
7101c5f544  cmp x8,#0x8
7101c5f548  b.cs 0x7101c60874
7101c5f54c  mov w9,#0x1e8
7101c5f550  madd x8,x8,x9,x19
7101c5f554  ldrb w8,[x8, #0xaf8]
7101c5f558  cmp w8,#0x1
7101c5f55c  b.eq 0x7101c5fe90
7101c5f560  ldr x8,[x19, #0x4f8]
7101c5f564  ldr x9,[x19, #0x500]
7101c5f568  cmp x8,x9
7101c5f56c  b.eq 0x7101c5fde4
7101c5f570  sub x9,x9,#0x2
7101c5f574  sub x9,x9,x8
7101c5f578  lsr x11,x9,#0x1
7101c5f57c  add w10,w11,#0x1
7101c5f580  and x10,x10,#0x3
7101c5f584  cmp x9,#0x6
7101c5f588  b.cs 0x7101c5fe04
7101c5f58c  mov w9,wzr
7101c5f590  cbnz x10,0x7101c5fe40
7101c5f594  b 0x7101c5fe54
7101c5f598  tbz w23,#0x0,0x7101c5f3f4
7101c5f59c  b 0x7101c5f3f8
7101c5f5a0  mov w22,#0x1
7101c5f5a4  and x9,x8,#-0x5
7101c5f5a8  str x9,[x19, #0x428]
7101c5f5ac  tbz w8,#0x0,0x7101c5f610
7101c5f5b0  ldr x23,[x19, #0x2f8]
7101c5f5b4  ldr x8,[x23]
7101c5f5b8  ldr x8,[x8, #0x18]
7101c5f5bc  ldr x0,[x8]
7101c5f5c0  cbz x0,0x7101c5f5f4
7101c5f5c4  ldr x8,[x0]
7101c5f5c8  ldr x8,[x8, #0x2f8]
7101c5f5cc  blr x8
7101c5f5d0  tbnz w0,#0x0,0x7101c5f610
7101c5f5d4  ldr x8,[x23]
7101c5f5d8  ldr x8,[x8, #0x18]
7101c5f5dc  ldr x0,[x8]
7101c5f5e0  cbz x0,0x7101c5f5f4
7101c5f5e4  ldr x8,[x0]
7101c5f5e8  ldr x8,[x8, #0x3c0]
7101c5f5ec  blr x8
7101c5f5f0  tbz w0,#0x0,0x7101c5f610
7101c5f5f4  ldr x8,[x19, #0x428]
7101c5f5f8  tbnz w8,#0x1,0x7101c5f62c
7101c5f5fc  ubfx x8,x8,#0x2,#0x1
7101c5f600  eor w8,w22,w8
7101c5f604  cmp w8,#0x1
7101c5f608  b.eq 0x7101c5f614
7101c5f60c  b 0x7101c5f618
7101c5f610  tbz w22,#0x0,0x7101c5f618
7101c5f614  strb wzr,[x19, #0x431]
7101c5f618  mov w8,#0x1b27
7101c5f61c  strb wzr,[x19, x8, LSL ]
7101c5f620  ldr w8,[x19, #0x1b30]
7101c5f624  cbnz w8,0x7101c5fb84
7101c5f628  b 0x7101c5fbd0
7101c5f62c  tbz w22,#0x0,0x7101c5f614
7101c5f630  b 0x7101c5f618
7101c5f634  ldr x8,[x23, #0x1030]
7101c5f638  cbz x8,0x7101c5ea8c
7101c5f63c  mov w8,#0x1042
7101c5f640  ldrb w8,[x23, x8, LSL ]
7101c5f644  cbz w8,0x7101c5ea8c
7101c5f648  mov w8,#0x1039
7101c5f64c  ldrb w27,[x23, x8, LSL ]
7101c5f650  cmp x27,#0x17
7101c5f654  b.cs 0x7101c60874
7101c5f658  ldr x9,[x23, #0x1028]
7101c5f65c  mov x11,#0x4925
7101c5f660  movk x11,#0x2492, LSL #16
7101c5f664  movk x11,#0x9249, LSL #32
7101c5f668  movk x11,#0x4924, LSL #48
7101c5f66c  lsr x10,x9,#0x2
7101c5f670  umulh x10,x10,x11
7101c5f674  ldr x8,[x23, #0x1010]
7101c5f678  lsr x10,x10,#0x1
7101c5f67c  ldr x21,[x8, x10, LSL #0x3]
7101c5f680  mov x8,#-0x1c
7101c5f684  madd x22,x10,x8,x9
7101c5f688  mov w8,#0x90
7101c5f68c  madd x20,x22,x8,x21
7101c5f690  mov w8,#0x90
7101c5f694  madd x8,x27,x8,x23
7101c5f698  ldrb w10,[x20]
7101c5f69c  add x9,x8,#0x318
7101c5f6a0  cmp x9,x20
7101c5f6a4  strb w10,[x8, #0x318]
7101c5f6a8  b.eq 0x7101c5f6c4
7101c5f6ac  mov w8,#0x90
7101c5f6b0  madd x9,x27,x8,x23
7101c5f6b4  madd x8,x22,x8,x21
7101c5f6b8  add x0,x9,#0x31c
7101c5f6bc  add x1,x8,#0xc
7101c5f6c0  bl 0x7101696040
7101c5f6c4  mov w8,#0x90
7101c5f6c8  madd x9,x22,x8,x21
7101c5f6cc  madd x8,x27,x8,x23
7101c5f6d0  ldr x0,[x8, #0x398]
7101c5f6d4  ldr x21,[x9, #0x80]
7101c5f6d8  ldr w26,[x9, #0x88]
7101c5f6dc  add x22,x8,#0x358
7101c5f6e0  add x28,x8,#0x398
7101c5f6e4  cmp x22,x0
7101c5f6e8  b.eq 0x7101c5f6f4
7101c5f6ec  cbz x0,0x7101c5f6f4
7101c5f6f0  bl 0x710392eb40
7101c5f6f4  mov w8,#0x90
7101c5f6f8  madd x8,x27,x8,x23
7101c5f6fc  strh wzr,[x22]
7101c5f700  str x22,[x28]
7101c5f704  str wzr,[x8, #0x3a0]
7101c5f708  cbz x21,0x7101c604c4
7101c5f70c  add x27,x8,#0x3a0
7101c5f710  tbz w26,#0x1f,0x7101c5f77c
7101c5f714  ldrh w10,[x21]
7101c5f718  cbz w10,0x7101c604a0
7101c5f71c  mov w8,wzr
7101c5f720  mov w26,wzr
7101c5f724  orr w9,wzr,#0x3
7101c5f728  mov x11,x21
7101c5f72c  orr w12,w10,#0x1
7101c5f730  and w12,w12,#0xffff
7101c5f734  cmp w12,#0xf
7101c5f738  b.ne 0x7101c5f758
7101c5f73c  and w10,w10,#0xffff
7101c5f740  cmp w10,#0xe
7101c5f744  b.ne 0x7101c5f760
7101c5f748  ldrh w10,[x11, #0x6]
7101c5f74c  lsr w10,w10,#0x1
7101c5f750  add w10,w10,#0x4
7101c5f754  b 0x7101c5f768
7101c5f758  mov w10,#0x1
7101c5f75c  b 0x7101c5f768
7101c5f760  cmp w10,#0xf
7101c5f764  csel w10,w9,wzr,eq
7101c5f768  add w8,w10,w8
7101c5f76c  add x11,x21,w8, UXTW  #0x1
7101c5f770  add w26,w10,w26
7101c5f774  ldrh w10,[x11]
7101c5f778  cbnz w10,0x7101c5f72c
7101c5f77c  cmp w26,#0x20
7101c5f780  str w26,[x27]
7101c5f784  b.lt 0x7101c604a8
7101c5f788  add w8,w26,#0x1
7101c5f78c  sxtw x8,w8
7101c5f790  adds x8,x8,x8
7101c5f794  csinv x8,x8,xzr,cc
7101c5f798  cmp x8,#0x0
7101c5f79c  csinc x23,x8,xzr,ne
7101c5f7a0  mov w0,#0x10
7101c5f7a4  mov x1,x23
7101c5f7a8  bl 0x710392e290
7101c5f7ac  mov x22,x0
7101c5f7b0  cbnz x0,0x7101c5f7f8
7101c5f7b4  adrp x8,0x7105332000
7101c5f7b8  ldr x0,[x8, #0xf00]
7101c5f7bc  cbz x0,0x7101c5f7f4
7101c5f7c0  str wzr,[sp, #0x30]
7101c5f7c4  str x23,[sp, #0x70]
7101c5f7c8  ldr x8,[x0]
7101c5f7cc  ldr x8,[x8, #0x30]
7101c5f7d0  add x1,sp,#0x30
7101c5f7d4  add x2,sp,#0x70
7101c5f7d8  blr x8
7101c5f7dc  tbz w0,#0x0,0x7101c5f7f4
7101c5f7e0  mov w0,#0x10
7101c5f7e4  mov x1,x23
7101c5f7e8  bl 0x710392e290
7101c5f7ec  mov x22,x0
7101c5f7f0  cbnz x0,0x7101c5f7f8
7101c5f7f4  mov x22,xzr
7101c5f7f8  str x22,[x28]
7101c5f7fc  b 0x7101c604a8
7101c5f800  adrp x9,0x71052a8000
7101c5f804  ldr x9,[x9, #0xa88]
7101c5f808  ldr q4,[x9]
7101c5f80c  fmov s0,wzr
7101c5f810  mov v1.16B,v0.16B
7101c5f814  dup s3,v4.S[0x1]
7101c5f818  b 0x7101c5f89c
7101c5f81c  fsub s3,s3,s5
7101c5f820  mov v2.S[0x0],v3.S[0x0]
7101c5f824  fmul s3,s1,s4
7101c5f828  ubfx w10,w10,#0x2,#0x2
7101c5f82c  cmp w10,#0x2
7101c5f830  b.eq 0x7101c5f848
7101c5f834  cmp w10,#0x1
7101c5f838  b.ne 0x7101c5f854
7101c5f83c  dup s4,v2.S[0x1]
7101c5f840  fsub s3,s4,s3
7101c5f844  b 0x7101c5f850
7101c5f848  dup s4,v2.S[0x1]
7101c5f84c  fadd s3,s3,s4
7101c5f850  mov v2.S[0x1],v3.S[0x0]
7101c5f854  ldr x9,[x9, #0x18]
7101c5f858  cbz x9,0x7101c5f894
7101c5f85c  ldp s3,s5,[x9, #0x30]
7101c5f860  fadd s4,s2,s3
7101c5f864  dup s3,v2.S[0x1]
7101c5f868  fadd s3,s3,s5
7101c5f86c  dup s6,v2.S[0x2]
7101c5f870  mov v2.16B,v7.16B
7101c5f874  mov v2.S[0x0],v4.S[0x0]
7101c5f878  ldr s5,[x9, #0x38]
7101c5f87c  mov v2.S[0x1],v3.S[0x0]
7101c5f880  fadd s5,s6,s5
7101c5f884  mov v2.S[0x2],v5.S[0x0]
7101c5f888  ldr x9,[x9, #0x18]
7101c5f88c  cbnz x9,0x7101c5f85c
7101c5f890  b 0x7101c5f89c
7101c5f894  dup s3,v2.S[0x1]
7101c5f898  mov v4.16B,v2.16B
7101c5f89c  mov v2.16B,v7.16B
7101c5f8a0  mov v2.S[0x0],v0.S[0x0]
7101c5f8a4  movi v0.4S,#0x3f, LSL #24
7101c5f8a8  mov v2.S[0x1],v1.S[0x0]
7101c5f8ac  fadd s4,s4,s8
7101c5f8b0  fmul v1.4S,v2.4S,v0.4S
7101c5f8b4  fsub s0,s9,s3
7101c5f8b8  fsub s2,s4,s1
7101c5f8bc  fadd s3,s4,s1
7101c5f8c0  dup s1,v1.S[0x1]
7101c5f8c4  fadd s4,s0,s1
7101c5f8c8  ldr q5,[sp]
7101c5f8cc  fcmp s4,s5
7101c5f8d0  ldr q4,[sp, #0x10]
7101c5f8d4  fccmp s3,s4,#0x8,ge
7101c5f8d8  fccmp s2,s4,#0x2,ge
7101c5f8dc  b.ls 0x7101c5f930
7101c5f8e0  mov w23,wzr
7101c5f8e4  cbnz w26,0x7101c5e914
7101c5f8e8  ldr w9,[x19, #0x1b30]
7101c5f8ec  cbz w9,0x7101c5f91c
7101c5f8f0  orr w9,wzr,#0x1e0
7101c5f8f4  madd x8,x20,x9,x8
7101c5f8f8  mov w9,#0xcccd
7101c5f8fc  movk w9,#0x3f4c, LSL #16
7101c5f900  str w9,[x8, #0x184]
7101c5f904  adrp x9,0x7104472000
7101c5f908  ldr s0,[x8, #0x180]
7101c5f90c  strb wzr,[x8, #0x193]
7101c5f910  ldr s1,[x9, #0x398]
7101c5f914  fmul s0,s0,s1
7101c5f918  b 0x7101c5fb70
7101c5f91c  ldrb w27,[x25, #0x388]
7101c5f920  ldr x8,[x19, #0x428]
7101c5f924  tbnz w8,#0x0,0x7101c5f944
7101c5f928  mov w28,wzr
7101c5f92c  b 0x7101c5fa3c
7101c5f930  fsub s0,s0,s1
7101c5f934  fcmp s0,s5
7101c5f938  cset w23,ls
7101c5f93c  cbnz w26,0x7101c5e914
7101c5f940  b 0x7101c5f8e8
7101c5f944  ldr x28,[x19, #0x2f8]
7101c5f948  ldr x8,[x28]
7101c5f94c  ldr x8,[x8, #0x18]
7101c5f950  ldr x0,[x8]
7101c5f954  cbz x0,0x7101c5fa24
7101c5f958  ldr x8,[x0]
7101c5f95c  ldr x8,[x8, #0x2f8]
7101c5f960  blr x8
7101c5f964  tbz w0,#0x0,0x7101c5f9ec
7101c5f968  ldr x8,[x19, #0x428]
7101c5f96c  b 0x7101c5fa34
7101c5f970  add x21,sp,#0x70
7101c5f974  b 0x7101c5f1b8
7101c5f978  cmn w1,#0x1
7101c5f97c  tbz w8,#0x0,0x7101c5fda8
7101c5f980  b.ne 0x7101c5fdac
7101c5f984  ldr x8,[x19, #0x450]
7101c5f988  orr w9,wzr,#0x1e0
7101c5f98c  madd x9,x20,x9,x8
7101c5f990  ldr w10,[x9, #0x1a0]
7101c5f994  cbz w10,0x7101c5fb7c
7101c5f998  add x22,x9,#0x1a0
7101c5f99c  orr w9,wzr,#0x1e0
7101c5f9a0  madd x8,x20,x9,x8
7101c5f9a4  add x0,x8,#0x28
7101c5f9a8  adrp x1,0x7104401000
7101c5f9ac  add x1,x1,#0x61b
7101c5f9b0  add x8,sp,#0x70
7101c5f9b4  bl 0x71037780e0
7101c5f9b8  fmov s0,0x3f800000
7101c5f9bc  add x0,sp,#0x70
7101c5f9c0  bl 0x710377aee0
7101c5f9c4  str wzr,[x22]
7101c5f9c8  ldr x0,[sp, #0x78]
7101c5f9cc  adrp x8,0x710523d000
7101c5f9d0  add x8,x8,#0x9e8
7101c5f9d4  stp x8,xzr,[sp, #0x70]
7101c5f9d8  cbz x0,0x7101c5fb7c
7101c5f9dc  bl 0x710392eb40
7101c5f9e0  ldr w8,[x19, #0x1b30]
7101c5f9e4  cbnz w8,0x7101c5fb84
7101c5f9e8  b 0x7101c5fbd0
7101c5f9ec  ldr x8,[x28]
7101c5f9f0  ldr x8,[x8, #0x18]
7101c5f9f4  ldr x0,[x8]
7101c5f9f8  movi v7.2D,#0x0
7101c5f9fc  cbz x0,0x7101c5fa24
7101c5fa00  ldr x8,[x0]
7101c5fa04  ldr x8,[x8, #0x3c0]
7101c5fa08  blr x8
7101c5fa0c  ldr x8,[x19, #0x428]
7101c5fa10  tbz w0,#0x0,0x7101c5fa34
7101c5fa14  movi v7.2D,#0x0
7101c5fa18  tbz w8,#0x1,0x7101c5fa2c
7101c5fa1c  mov w28,#0x1
7101c5fa20  b 0x7101c5fa3c
7101c5fa24  ldr x8,[x19, #0x428]
7101c5fa28  tbnz w8,#0x1,0x7101c5fa1c
7101c5fa2c  ubfx x28,x8,#0x2,#0x1
7101c5fa30  b 0x7101c5fa3c
7101c5fa34  mov w28,wzr
7101c5fa38  movi v7.2D,#0x0
7101c5fa3c  and x9,x8,#-0x5
7101c5fa40  orr x8,x8,#0x4
7101c5fa44  cmp w27,#0x0
7101c5fa48  csel x8,x9,x8,eq
7101c5fa4c  str x8,[x19, #0x428]
7101c5fa50  tbz w8,#0x0,0x7101c5fabc
7101c5fa54  ldr x27,[x19, #0x2f8]
7101c5fa58  ldr x8,[x27]
7101c5fa5c  ldr x8,[x8, #0x18]
7101c5fa60  ldr x0,[x8]
7101c5fa64  cbz x0,0x7101c5faa0
7101c5fa68  ldr x8,[x0]
7101c5fa6c  ldr x8,[x8, #0x2f8]
7101c5fa70  blr x8
7101c5fa74  movi v7.2D,#0x0
7101c5fa78  tbnz w0,#0x0,0x7101c5fabc
7101c5fa7c  ldr x8,[x27]
7101c5fa80  ldr x8,[x8, #0x18]
7101c5fa84  ldr x0,[x8]
7101c5fa88  cbz x0,0x7101c5faa0
7101c5fa8c  ldr x8,[x0]
7101c5fa90  ldr x8,[x8, #0x3c0]
7101c5fa94  blr x8
7101c5fa98  movi v7.2D,#0x0
7101c5fa9c  tbz w0,#0x0,0x7101c5fabc
7101c5faa0  ldr x8,[x19, #0x428]
7101c5faa4  tbnz w8,#0x1,0x7101c5fda0
7101c5faa8  ubfx x8,x8,#0x2,#0x1
7101c5faac  eor w8,w28,w8
7101c5fab0  cmp w8,#0x1
7101c5fab4  b.eq 0x7101c5fac0
7101c5fab8  b 0x7101c5fac4
7101c5fabc  tbz w28,#0x0,0x7101c5fac4
7101c5fac0  strb wzr,[x19, #0x431]
7101c5fac4  ldr x8,[x19, #0x450]
7101c5fac8  orr w9,wzr,#0x1e0
7101c5facc  madd x9,x20,x9,x8
7101c5fad0  ldrb w9,[x9, #0x190]
7101c5fad4  cbz w9,0x7101c5fb10
7101c5fad8  orr w9,wzr,#0x1e0
7101c5fadc  madd x9,x20,x9,x8
7101c5fae0  ldrb w9,[x9, #0x192]
7101c5fae4  cbz w9,0x7101c5fb10
7101c5fae8  orr w9,wzr,#0x1e0
7101c5faec  madd x9,x20,x9,x8
7101c5faf0  ldp q0,q1,[x9, #0x150]
7101c5faf4  fcmeq v0.4S,v0.4S,v1.4S
7101c5faf8  ext v1.16B,v0.16B,v0.16B,0x8
7101c5fafc  and v0.8B,v0.8B,v1.8B
7101c5fb00  mov w9,v0.S[0x1]
7101c5fb04  fmov w10,s0
7101c5fb08  tst w10,w9
7101c5fb0c  b.eq 0x7101c5fb34
7101c5fb10  ldr x9,[x22, #0x600]
7101c5fb14  ldrb w10,[x9, #0x4aa]
7101c5fb18  cbz w10,0x7101c5fb34
7101c5fb1c  ldrb w9,[x9, #0x1ac]
7101c5fb20  tbz w9,#0x1,0x7101c5fb34
7101c5fb24  ldrb w9,[x25, #0x207]
7101c5fb28  cbnz w9,0x7101c5fb34
7101c5fb2c  ldrb w9,[x25, #0x388]
7101c5fb30  cbz w9,0x7101c60198
7101c5fb34  cbz w23,0x7101c5fb40
7101c5fb38  ldrb w9,[x19, #0x422]
7101c5fb3c  cbz w9,0x7101c5fd1c
7101c5fb40  orr w9,wzr,#0x1e0
7101c5fb44  madd x8,x20,x9,x8
7101c5fb48  ldrb w9,[x8, #0x194]
7101c5fb4c  cmp w9,#0x0
7101c5fb50  adrp x9,0x7104472000
7101c5fb54  ldr s0,[x9, #0x398]
7101c5fb58  fmov s1,0x3f800000
7101c5fb5c  fcsel s0,s0,s1,eq
7101c5fb60  ldr s1,[x8, #0x180]
7101c5fb64  strb wzr,[x8, #0x193]
7101c5fb68  str s0,[x8, #0x184]
7101c5fb6c  fmul s0,s1,s0
7101c5fb70  str s0,[x8, #0x18c]
7101c5fb74  ldr x8,[x19, #0x460]
7101c5fb78  strb wzr,[x8, #0x15d]
7101c5fb7c  ldr w8,[x19, #0x1b30]
7101c5fb80  cbz w8,0x7101c5fbd0
7101c5fb84  subs w8,w8,#0x1
7101c5fb88  str w8,[x19, #0x1b30]
7101c5fb8c  b.ne 0x7101c5fbd0
7101c5fb90  cbz w26,0x7101c5fbd0
7101c5fb94  ldr x0,[x19, #0x488]
7101c5fb98  ldrb w22,[x19, #0x651]
7101c5fb9c  mov w8,#0x1
7101c5fba0  strb w8,[x19, #0x652]
7101c5fba4  bl 0x710376b960
7101c5fba8  ldr x0,[x19, #0x488]
7101c5fbac  ldr x8,[x0]
7101c5fbb0  ldr x8,[x8, #0x70]
7101c5fbb4  mov w1,w22
7101c5fbb8  blr x8
7101c5fbbc  ldr x0,[x19, #0x488]
7101c5fbc0  ldr x8,[x0]
7101c5fbc4  ldr x8,[x8, #0x60]
7101c5fbc8  mov w1,w22
7101c5fbcc  blr x8
7101c5fbd0  ldrb w8,[x25, #0x388]
7101c5fbd4  cbz w8,0x7101c5e44c
7101c5fbd8  ldr x8,[x19, #0x460]
7101c5fbdc  ldr s1,[x8, #0x144]
7101c5fbe0  ldr s0,[x8, #0x140]
7101c5fbe4  adrp x9,0x7104471000
7101c5fbe8  ldr s4,[x9, #0xf68]
7101c5fbec  fsub s2,s1,s0
7101c5fbf0  fcmp s2,s4
7101c5fbf4  b.le 0x7101c5fc08
7101c5fbf8  adrp x9,0x7104472000
7101c5fbfc  ldr s3,[x9, #0x970]
7101c5fc00  fcmp s2,s3
7101c5fc04  b.mi 0x7101c5e44c
7101c5fc08  ldr s2,[x8, #0x14c]
7101c5fc0c  ldr s3,[x8, #0x148]
7101c5fc10  fsub s5,s2,s3
7101c5fc14  fcmp s5,s4
7101c5fc18  b.le 0x7101c5fc2c
7101c5fc1c  adrp x9,0x7104472000
7101c5fc20  ldr s4,[x9, #0x970]
7101c5fc24  fcmp s5,s4
7101c5fc28  b.mi 0x7101c5e44c
7101c5fc2c  ldr x8,[x8, #0xf8]
7101c5fc30  ldr q4,[x8, #0x60]
7101c5fc34  fcmp s1,s4
7101c5fc38  b.lt 0x7101c5e44c
7101c5fc3c  fcmp s0,s4
7101c5fc40  b.hi 0x7101c5e44c
7101c5fc44  dup s0,v4.S[0x1]
7101c5fc48  fcmp s2,s0
7101c5fc4c  fccmp s3,s0,#0x2,ge
7101c5fc50  b.hi 0x7101c5e44c
7101c5fc54  ldrb w8,[x19, #0x422]
7101c5fc58  cbnz w8,0x7101c5e44c
7101c5fc5c  mov w2,#0x1
7101c5fc60  mov x0,x21
7101c5fc64  mov w1,w20
7101c5fc68  mov w22,#0x1
7101c5fc6c  bl 0x7101c77160
7101c5fc70  ldr x8,[x19, #0x460]
7101c5fc74  strb w22,[x8, #0x15e]
7101c5fc78  ldr x8,[x19, #0x450]
7101c5fc7c  orr w9,wzr,#0x1e0
7101c5fc80  madd x9,x20,x9,x8
7101c5fc84  strb w22,[x9, #0x192]
7101c5fc88  ldrb w9,[x9, #0x190]
7101c5fc8c  cbz w9,0x7101c5fca4
7101c5fc90  orr w9,wzr,#0x1e0
7101c5fc94  madd x9,x20,x9,x8
7101c5fc98  ldrb w9,[x9, #0x191]
7101c5fc9c  cmp w9,#0x0
7101c5fca0  cset w9,ne
7101c5fca4  orr w10,wzr,#0x1e0
7101c5fca8  madd x8,x20,x10,x8
7101c5fcac  ldr x8,[x8, #0x30]
7101c5fcb0  ldr x8,[x8, #0x8]
7101c5fcb4  cbz x8,0x7101c5fcd0
7101c5fcb8  ldr x8,[x8, #0x18]
7101c5fcbc  cbz x8,0x7101c5fcd0
7101c5fcc0  ldrb w10,[x8, #0x58]
7101c5fcc4  and w10,w10,#0xfe
7101c5fcc8  orr w9,w10,w9
7101c5fccc  strb w9,[x8, #0x58]
7101c5fcd0  ldr x0,[x19, #0x488]
7101c5fcd4  ldrb w20,[x19, #0x651]
7101c5fcd8  mov w8,#0x1
7101c5fcdc  strb w8,[x19, #0x652]
7101c5fce0  bl 0x710376b960
7101c5fce4  ldr x0,[x19, #0x488]
7101c5fce8  ldr x8,[x0]
7101c5fcec  ldr x8,[x8, #0x70]
7101c5fcf0  mov w1,w20
7101c5fcf4  blr x8
7101c5fcf8  ldr x0,[x19, #0x488]
7101c5fcfc  ldr x8,[x0]
7101c5fd00  ldr x8,[x8, #0x60]
7101c5fd04  mov w1,w20
7101c5fd08  blr x8
7101c5fd0c  strb wzr,[x25, #0x388]
7101c5fd10  ldr x8,[x19, #0x1b18]
7101c5fd14  cbnz x8,0x7101c5e454
7101c5fd18  b 0x7101c5e548
7101c5fd1c  ldr x9,[x19, #0x460]
7101c5fd20  ldr x9,[x9, #0xf8]
7101c5fd24  orr w10,wzr,#0x1e0
7101c5fd28  ldp q0,q1,[x9, #0x60]
7101c5fd2c  fcmeq v0.4S,v0.4S,v1.4S
7101c5fd30  madd x8,x20,x10,x8
7101c5fd34  adrp x10,0x7104472000
7101c5fd38  ldr s9,[x10, #0x398]
7101c5fd3c  ldrb w10,[x8, #0x194]
7101c5fd40  cmp w10,#0x0
7101c5fd44  ext v1.16B,v0.16B,v0.16B,0x8
7101c5fd48  and v0.8B,v0.8B,v1.8B
7101c5fd4c  fmov s8,0x3f800000
7101c5fd50  fcsel s1,s9,s8,eq
7101c5fd54  fmov w10,s0
7101c5fd58  mov w9,v0.S[0x1]
7101c5fd5c  ldr s0,[x8, #0x180]
7101c5fd60  fmul s0,s0,s1
7101c5fd64  mov w11,#0x1
7101c5fd68  strb w11,[x8, #0x193]
7101c5fd6c  str s1,[x8, #0x184]
7101c5fd70  and w9,w10,w9
7101c5fd74  str s0,[x8, #0x18c]
7101c5fd78  ldr x8,[x19, #0x460]
7101c5fd7c  strb w11,[x8, #0x15d]
7101c5fd80  cbz w9,0x7101c5fb7c
7101c5fd84  ldr x9,[x22, #0x600]
7101c5fd88  ldrb w8,[x9, #0x4aa]
7101c5fd8c  cbz w8,0x7101c5fea8
7101c5fd90  ldrb w9,[x9, #0x1a8]
7101c5fd94  add x8,x25,#0x207
7101c5fd98  tbz w9,#0x1,0x7101c5feac
7101c5fd9c  b 0x7101c5feb4
7101c5fda0  tbz w28,#0x0,0x7101c5fac0
7101c5fda4  b 0x7101c5fac4
7101c5fda8  b.eq 0x7101c5f4fc
7101c5fdac  ldrb w8,[x25]
7101c5fdb0  cmp x8,#0x8
7101c5fdb4  b.cs 0x7101c60874
7101c5fdb8  mov w9,#0x1e8
7101c5fdbc  madd x8,x8,x9,x19
7101c5fdc0  and w9,w1,#0xff
7101c5fdc4  sub w10,w9,#0x1
7101c5fdc8  cmp w10,#0x2
7101c5fdcc  ldrb w8,[x8, #0xaf8]
7101c5fdd0  b.cs 0x7101c5fdec
7101c5fdd4  sub w8,w8,#0x1
7101c5fdd8  cmp w8,#0x1
7101c5fddc  cset w2,hi
7101c5fde0  b 0x7101c60488
7101c5fde4  mov w9,wzr
7101c5fde8  b 0x7101c5fe54
7101c5fdec  cmp w9,#0x3
7101c5fdf0  b.ne 0x7101c60484
7101c5fdf4  cmp w8,#0x3
7101c5fdf8  mov w8,#0x2
7101c5fdfc  csel w2,wzr,w8,eq
7101c5fe00  b 0x7101c60488
7101c5fe04  sub x12,x10,#0x1
7101c5fe08  mov w9,wzr
7101c5fe0c  sub x11,x12,x11
7101c5fe10  ldrb w12,[x8]
7101c5fe14  add w9,w12,w9
7101c5fe18  ldrb w12,[x8, #0x2]
7101c5fe1c  add w9,w12,w9
7101c5fe20  ldrb w12,[x8, #0x4]
7101c5fe24  add w9,w12,w9
7101c5fe28  ldrb w12,[x8, #0x6]
7101c5fe2c  add x8,x8,#0x8
7101c5fe30  add w9,w12,w9
7101c5fe34  adds x11,x11,#0x4
7101c5fe38  b.ne 0x7101c5fe10
7101c5fe3c  cbz x10,0x7101c5fe54
7101c5fe40  neg x10,x10
7101c5fe44  ldrb w11,[x8], #0x2
7101c5fe48  add w9,w11,w9
7101c5fe4c  adds x10,x10,#0x1
7101c5fe50  b.ne 0x7101c5fe44
7101c5fe54  mov w8,#0x18e6
7101c5fe58  ldrb w8,[x19, x8, LSL ]
7101c5fe5c  cmp w8,#0x3
7101c5fe60  mov w10,#0x4
7101c5fe64  mov w11,#0x2
7101c5fe68  csel w10,w11,w10,eq
7101c5fe6c  cmp w8,#0x2
7101c5fe70  orr w8,wzr,#0x3
7101c5fe74  csel w8,w8,w10,eq
7101c5fe78  and w9,w9,#0xff
7101c5fe7c  cmp w9,w8
7101c5fe80  b.eq 0x7101c5fe98
7101c5fe84  ldr w8,[x19, #0x2c0]
7101c5fe88  cmp w8,#0x1
7101c5fe8c  b.ne 0x7101c5fe98
7101c5fe90  mov w1,#0x1
7101c5fe94  b 0x7101c5fe9c
7101c5fe98  mov w1,#0x2
7101c5fe9c  add x0,sp,#0x30
7101c5fea0  mov w2,wzr
7101c5fea4  b 0x7101c5f50c
7101c5fea8  add x8,x25,#0x207
7101c5feac  ldrb w9,[x8]
7101c5feb0  cbz w9,0x7101c5fb7c
7101c5feb4  strb wzr,[x8]
7101c5feb8  adrp x8,0x710532f000
7101c5febc  ldr x8,[x8, #0x8d0]
7101c5fec0  ldr x0,[x8, #0x8]
7101c5fec4  ldrb w8,[x0, #0x191]
7101c5fec8  mov w23,#0x6500
7101c5fecc  movk w23,#0x87, LSL #16
7101c5fed0  cbnz w8,0x7101c5ff50
7101c5fed4  mov x22,#0x9063
7101c5fed8  movk x22,#0x2944, LSL #16
7101c5fedc  movk x22,#0x15, LSL #32
7101c5fee0  mov w2,#0x4
7101c5fee4  mov x1,x22
7101c5fee8  bl 0x7103313f20
7101c5feec  tbz w0,#0x0,0x7101c5ff50
7101c5fef0  add x0,sp,#0x70
7101c5fef4  mov x1,x22
7101c5fef8  bl 0x71024076d0
7101c5fefc  ldr x8,[sp, #0x80]
7101c5ff00  adrp x9,0x7104f73000
7101c5ff04  add x9,x9,#0xd50
7101c5ff08  str x9,[sp, #0x78]
7101c5ff0c  cbz x8,0x7101c5ff70
7101c5ff10  adrp x8,0x7106dd5000
7101c5ff14  ldrb w8,[x8, #0x3a8]
7101c5ff18  cmp w8,#0x1
7101c5ff1c  b.ne 0x7101c5ff70
7101c5ff20  adrp x9,0x7106dd5000
7101c5ff24  ldr w8,[sp, #0x88]
7101c5ff28  ldr w9,[x9, #0x3ac]
7101c5ff2c  cmp w8,w9
7101c5ff30  b.ne 0x7101c5ff70
7101c5ff34  ldr x8,[sp, #0x80]
7101c5ff38  ldr wzr,[x8, #0x38]!
7101c5ff3c  ldaxr w9,[x8]
7101c5ff40  sub w9,w9,#0x1
7101c5ff44  stlxr w10,w9,[x8]
7101c5ff48  cbnz w10,0x7101c5ff3c
7101c5ff4c  b 0x7101c5ff70
7101c5ff50  adrp x8,0x7104f73000
7101c5ff54  add x8,x8,#0xd50
7101c5ff58  stp wzr,w23,[sp, #0x88]
7101c5ff5c  strb wzr,[sp, #0x90]
7101c5ff60  str wzr,[sp, #0x70]
7101c5ff64  str xzr,[sp, #0xa8]
7101c5ff68  stp x24,xzr,[sp, #0x98]
7101c5ff6c  stp x8,xzr,[sp, #0x78]
7101c5ff70  mov w2,#0x1
7101c5ff74  mov x0,x21
7101c5ff78  mov w1,w20
7101c5ff7c  str xzr,[sp, #0x80]
7101c5ff80  strb wzr,[sp, #0x90]
7101c5ff84  bl 0x7101c77160
7101c5ff88  orr w9,wzr,#0x1e0
7101c5ff8c  mul x9,x20,x9
7101c5ff90  ldr x8,[x19, #0x450]
7101c5ff94  add x8,x8,x9
7101c5ff98  ldrb w10,[x8, #0x194]
7101c5ff9c  ldr s1,[x8, #0x180]
7101c5ffa0  strb wzr,[x8, #0x193]
7101c5ffa4  cmp w10,#0x0
7101c5ffa8  fcsel s0,s9,s8,eq
7101c5ffac  str s0,[x8, #0x184]
7101c5ffb0  fmul s0,s1,s0
7101c5ffb4  str s0,[x8, #0x18c]
7101c5ffb8  ldr x23,[x19, #0x450]
7101c5ffbc  add x8,x23,x9
7101c5ffc0  ldr w9,[x8, #0x1a0]
7101c5ffc4  cbz w9,0x7101c601c8
7101c5ffc8  add x27,x8,#0x1a0
7101c5ffcc  orr w8,wzr,#0x1e0
7101c5ffd0  madd x8,x20,x8,x23
7101c5ffd4  add x22,x8,#0x28
7101c5ffd8  adrp x1,0x7104401000
7101c5ffdc  add x1,x1,#0x61b
7101c5ffe0  add x8,sp,#0x30
7101c5ffe4  mov x0,x22
7101c5ffe8  bl 0x71037780e0
7101c5ffec  fmov s0,0x3f800000
7101c5fff0  add x0,sp,#0x30
7101c5fff4  bl 0x710377aee0
7101c5fff8  str wzr,[x27]
7101c5fffc  ldr x0,[sp, #0x38]
7101c60000  adrp x8,0x710523d000
7101c60004  add x8,x8,#0x9e8
7101c60008  stp x8,xzr,[sp, #0x30]
7101c6000c  cbz x0,0x7101c601d4
7101c60010  bl 0x710392eb40
7101c60014  b 0x7101c601d4
7101c60018  mov x8,#0x650000000000
7101c6001c  movk x8,#0x87, LSL #48
7101c60020  strb wzr,[sp, #0x90]
7101c60024  stp x24,xzr,[sp, #0x98]
7101c60028  str wzr,[sp, #0x70]
7101c6002c  str xzr,[sp, #0xa8]
7101c60030  stp xzr,x8,[sp, #0x80]
7101c60034  adrp x8,0x7104f73000
7101c60038  add x8,x8,#0xd30
7101c6003c  str x8,[sp, #0x78]
7101c60040  str wzr,[x20]
7101c60044  ldr x8,[x19, #0x3e8]
7101c60048  cbz x8,0x7101c60084
7101c6004c  adrp x9,0x7106dd5000
7101c60050  ldrb w9,[x9, #0x3a8]
7101c60054  cmp w9,#0x1
7101c60058  b.ne 0x7101c60084
7101c6005c  adrp x10,0x7106dd5000
7101c60060  ldr w9,[x19, #0x3f0]
7101c60064  ldr w10,[x10, #0x3ac]
7101c60068  cmp w9,w10
7101c6006c  b.ne 0x7101c60084
7101c60070  ldr wzr,[x8, #0x38]!
7101c60074  ldaxr w9,[x8]
7101c60078  sub w9,w9,#0x1
7101c6007c  stlxr w10,w9,[x8]
7101c60080  cbnz w10,0x7101c60074
7101c60084  str xzr,[x19, #0x3e8]
7101c60088  add x10,x19,#0x3f8
7101c6008c  strb wzr,[x10]
7101c60090  ldp x9,x10,[sp, #0x98]
7101c60094  ldr x8,[sp, #0x80]
7101c60098  ldr x11,[sp, #0xa8]
7101c6009c  str x9,[x25]
7101c600a0  adrp x9,0x7104f73000
7101c600a4  add x9,x9,#0xd50
7101c600a8  stp x10,x11,[x25, #0x8]
7101c600ac  str x9,[sp, #0x78]
7101c600b0  cbz x8,0x7101c600ec
7101c600b4  adrp x9,0x7106dd5000
7101c600b8  ldrb w9,[x9, #0x3a8]
7101c600bc  cmp w9,#0x1
7101c600c0  b.ne 0x7101c600ec
7101c600c4  adrp x10,0x7106dd5000
7101c600c8  ldr w9,[sp, #0x88]
7101c600cc  ldr w10,[x10, #0x3ac]
7101c600d0  cmp w9,w10
7101c600d4  b.ne 0x7101c600ec
7101c600d8  ldr wzr,[x8, #0x38]!
7101c600dc  ldaxr w9,[x8]
7101c600e0  sub w9,w9,#0x1
7101c600e4  stlxr w10,w9,[x8]
7101c600e8  cbnz w10,0x7101c600dc
7101c600ec  str xzr,[sp, #0x80]
7101c600f0  ldr x8,[x19, #0x310]
7101c600f4  ldr x0,[x8]
7101c600f8  cbz x0,0x7101c6010c
7101c600fc  ldr x8,[x0]
7101c60100  ldr x8,[x8, #0x330]
7101c60104  blr x8
7101c60108  tbz w0,#0x0,0x7101c5e284
7101c6010c  mov w8,#0x1
7101c60110  strb w8,[x19, #0x431]
7101c60114  ldr w8,[x19, #0x400]
7101c60118  cmn w8,#0x1
7101c6011c  b.ne 0x7101c6012c
7101c60120  ldr w8,[x19, #0x404]
7101c60124  cmn w8,#0x1
7101c60128  b.eq 0x7101c5e284
7101c6012c  mov x0,x20
7101c60130  mov w1,wzr
7101c60134  bl 0x710373b540
7101c60138  add x20,x19,#0x3e0
7101c6013c  mov x0,x20
7101c60140  str wzr,[x19, #0x3d8]
7101c60144  bl 0x71039602c0
7101c60148  adrp x8,0x7104f73000
7101c6014c  add x8,x8,#0xd50
7101c60150  str x8,[x19, #0x3e0]
7101c60154  ldr x8,[x19, #0x3e8]
7101c60158  cbz x8,0x7101c5e250
7101c6015c  adrp x9,0x7106dd5000
7101c60160  ldrb w9,[x9, #0x3a8]
7101c60164  cmp w9,#0x1
7101c60168  b.ne 0x7101c5e250
7101c6016c  adrp x10,0x7106dd5000
7101c60170  ldr w9,[x19, #0x3f0]
7101c60174  ldr w10,[x10, #0x3ac]
7101c60178  cmp w9,w10
7101c6017c  b.ne 0x7101c5e250
7101c60180  ldr wzr,[x8, #0x38]!
7101c60184  ldaxr w9,[x8]
7101c60188  sub w9,w9,#0x1
7101c6018c  stlxr w10,w9,[x8]
7101c60190  cbnz w10,0x7101c60184
7101c60194  b 0x7101c5e250
7101c60198  orr w9,wzr,#0x1e0
7101c6019c  madd x8,x20,x9,x8
7101c601a0  ldr x8,[x8, #0x30]
7101c601a4  ldr x8,[x8, #0x18]
7101c601a8  ldr x8,[x8]
7101c601ac  cbz x8,0x7101c606f4
7101c601b0  mov v0.16B,v7.16B
7101c601b4  add x9,x8,#0x30
7101c601b8  add x8,x8,#0x34
7101c601bc  ld1 {v0.S}[0],[x9]
7101c601c0  ld1 {v0.S}[1],[x8]
7101c601c4  b 0x7101c60700
7101c601c8  orr w8,wzr,#0x1e0
7101c601cc  madd x8,x20,x8,x23
7101c601d0  add x22,x8,#0x28
7101c601d4  orr w8,wzr,#0x1e0
7101c601d8  madd x27,x20,x8,x23
7101c601dc  fmov s0,0x3f800000
7101c601e0  ldr x0,[x27, #0x30]!
7101c601e4  adrp x1,0x7104443000
7101c601e8  add x1,x1,#0xdfb
7101c601ec  bl 0x7103778300
7101c601f0  ldrb w8,[x27, #0x16b]
7101c601f4  add x28,x27,#0x16b
7101c601f8  cbz w8,0x7101c60210
7101c601fc  ldr x0,[x27]
7101c60200  fmov s0,0x3f800000
7101c60204  adrp x1,0x71042c4000
7101c60208  add x1,x1,#0xe37
7101c6020c  bl 0x7103778300
7101c60210  orr w8,wzr,#0x1e0
7101c60214  madd x8,x20,x8,x23
7101c60218  strb wzr,[x28]
7101c6021c  ldr x9,[x8, #0x100]
7101c60220  ldr x0,[x9, #0x8]
7101c60224  cbz x0,0x7101c60324
7101c60228  add x27,x8,#0x100
7101c6022c  ldr x8,[x0]
7101c60230  ldr x8,[x8, #0x138]
7101c60234  blr x8
7101c60238  ldr x8,[x27]
7101c6023c  ldr x23,[x8, #0x8]
7101c60240  cbz x23,0x7101c60324
7101c60244  ldrb w9,[x8, #0x10]
7101c60248  cbz w9,0x7101c60314
7101c6024c  ldr x8,[x8]
7101c60250  ldr x28,[x8, #0x80]
7101c60254  str x27,[sp, #0x20]
7101c60258  add x27,x8,#0x88
7101c6025c  cmp x28,x27
7101c60260  b.eq 0x7101c60314
7101c60264  ldr x0,[x28, #0x68]
7101c60268  ldr x8,[x0]
7101c6026c  ldr x8,[x8, #0x148]
7101c60270  blr x8
7101c60274  tbz w0,#0x0,0x7101c602b4
7101c60278  ldr x8,[x23]
7101c6027c  ldr x1,[x28, #0x68]
7101c60280  mov x0,x23
7101c60284  ldr x8,[x8, #0x120]
7101c60288  blr x8
7101c6028c  tbz w0,#0x0,0x7101c602b4
7101c60290  ldr x0,[x28, #0x68]
7101c60294  ldr x8,[x0]
7101c60298  ldr x8,[x8, #0x178]
7101c6029c  blr x8
7101c602a0  ldr x0,[x28, #0x68]
7101c602a4  ldr x8,[x0]
7101c602a8  ldr x8,[x8, #0x140]
7101c602ac  mov w1,wzr
7101c602b0  blr x8
7101c602b4  ldr x8,[x28, #0x8]
7101c602b8  cbz x8,0x7101c602cc
7101c602bc  mov x28,x8
7101c602c0  ldr x8,[x8]
7101c602c4  cbnz x8,0x7101c602bc
7101c602c8  b 0x7101c60300
7101c602cc  mov x8,x28
7101c602d0  ldr x9,[x8, #0x10]!
7101c602d4  ldr x10,[x9]
7101c602d8  cmp x10,x28
7101c602dc  b.eq 0x7101c602fc
7101c602e0  ldr x9,[x8]
7101c602e4  mov x8,x9
7101c602e8  ldr x28,[x8, #0x10]!
7101c602ec  ldr x10,[x28]
7101c602f0  cmp x10,x9
7101c602f4  b.ne 0x7101c602e0
7101c602f8  b 0x7101c60300
7101c602fc  mov x28,x9
7101c60300  cmp x28,x27
7101c60304  b.ne 0x7101c60264
7101c60308  ldr x8,[sp, #0x20]
7101c6030c  ldr x8,[x8]
7101c60310  ldr x23,[x8, #0x8]
7101c60314  ldr x8,[x23]
7101c60318  ldr x8,[x8, #0x188]
7101c6031c  mov x0,x23
7101c60320  blr x8
7101c60324  adrp x1,0x7104401000
7101c60328  add x1,x1,#0x627
7101c6032c  add x8,sp,#0x30
7101c60330  mov x0,x22
7101c60334  bl 0x71037780e0
7101c60338  ldr x0,[sp, #0x38]
7101c6033c  adrp x8,0x710523d000
7101c60340  add x8,x8,#0x9e8
7101c60344  stp x8,xzr,[sp, #0x30]
7101c60348  cbz x0,0x7101c60350
7101c6034c  bl 0x710392eb40
7101c60350  ldr x8,[x19, #0x460]
7101c60354  mov w22,#0x1
7101c60358  strb w22,[x8, #0x15e]
7101c6035c  ldr x0,[x19, #0x488]
7101c60360  strb wzr,[x19, #0x652]
7101c60364  bl 0x710376b960
7101c60368  ldr x0,[x19, #0x488]
7101c6036c  ldr x8,[x0]
7101c60370  ldr x8,[x8, #0x70]
7101c60374  mov w1,wzr
7101c60378  blr x8
7101c6037c  ldr x0,[x19, #0x488]
7101c60380  ldr x8,[x0]
7101c60384  ldr x8,[x8, #0x60]
7101c60388  mov w1,wzr
7101c6038c  blr x8
7101c60390  ldr x8,[x19, #0x310]
7101c60394  strh w22,[x19, #0x430]
7101c60398  ldr x0,[x8]
7101c6039c  mov w23,#0x6500
7101c603a0  movk w23,#0x87, LSL #16
7101c603a4  cbz x0,0x7101c603b8
7101c603a8  ldr x8,[x0]
7101c603ac  ldr x8,[x8, #0x328]
7101c603b0  mov w1,wzr
7101c603b4  blr x8
7101c603b8  ldr w8,[x19, #0x400]
7101c603bc  cmn w8,#0x1
7101c603c0  b.ne 0x7101c603d0
7101c603c4  ldr w8,[x19, #0x404]
7101c603c8  cmn w8,#0x1
7101c603cc  b.eq 0x7101c60468
7101c603d0  add x0,x19,#0x3d8
7101c603d4  mov w1,wzr
7101c603d8  bl 0x710373b540
7101c603dc  add x22,x19,#0x3e0
7101c603e0  mov x0,x22
7101c603e4  str wzr,[x19, #0x3d8]
7101c603e8  bl 0x71039602c0
7101c603ec  adrp x8,0x7104f73000
7101c603f0  add x8,x8,#0xd50
7101c603f4  str x8,[x19, #0x3e0]
7101c603f8  ldr x8,[x19, #0x3e8]
7101c603fc  cbz x8,0x7101c60438
7101c60400  adrp x9,0x7106dd5000
7101c60404  ldrb w9,[x9, #0x3a8]
7101c60408  cmp w9,#0x1
7101c6040c  b.ne 0x7101c60438
7101c60410  adrp x10,0x7106dd5000
7101c60414  ldr w9,[x19, #0x3f0]
7101c60418  ldr w10,[x10, #0x3ac]
7101c6041c  cmp w9,w10
7101c60420  b.ne 0x7101c60438
7101c60424  ldr wzr,[x8, #0x38]!
7101c60428  ldaxr w9,[x8]
7101c6042c  sub w9,w9,#0x1
7101c60430  stlxr w10,w9,[x8]
7101c60434  cbnz w10,0x7101c60428
7101c60438  adrp x8,0x7104f73000
7101c6043c  add x8,x8,#0xd30
7101c60440  stp xzr,xzr,[x22, #0x10]
7101c60444  stp xzr,xzr,[x22]
7101c60448  str xzr,[x19, #0x3e8]
7101c6044c  str wzr,[x19, #0x3f0]
7101c60450  str w23,[x19, #0x3f4]
7101c60454  strb wzr,[x19, #0x3f8]
7101c60458  str x8,[x19, #0x3e0]
7101c6045c  str x24,[x19, #0x400]
7101c60460  str xzr,[x19, #0x408]
7101c60464  str wzr,[x19, #0x414]
7101c60468  add x0,x19,#0x480
7101c6046c  bl 0x7101c73b20
7101c60470  orr w8,wzr,#0x1e
7101c60474  str w8,[x19, #0x1b30]
7101c60478  ldr w8,[x19, #0x1b30]
7101c6047c  cbnz w8,0x7101c5fb84
7101c60480  b 0x7101c5fbd0
7101c60484  mov w2,wzr
7101c60488  mov x0,x21
7101c6048c  mov w1,w20
7101c60490  bl 0x7101c76f30
7101c60494  ldr w8,[x19, #0x1b30]
7101c60498  cbnz w8,0x7101c5fb84
7101c6049c  b 0x7101c5fbd0
7101c604a0  mov w26,wzr
7101c604a4  str wzr,[x27]
7101c604a8  sbfiz x2,x26,#0x1,#0x20
7101c604ac  mov x0,x22
7101c604b0  mov x1,x21
7101c604b4  bl 0x71039c00e0
7101c604b8  ldr x8,[x28]
7101c604bc  ldrsw x9,[x27]
7101c604c0  strh wzr,[x8, x9, LSL #0x1]
7101c604c4  ldr x8,[x25]
7101c604c8  mov w9,#0x1039
7101c604cc  mov w21,#0x1038
7101c604d0  ldrb w10,[x8, x9, LSL ]
7101c604d4  mov x1,x20
7101c604d8  strb w10,[x8, x21, LSL ]
7101c604dc  ldr x8,[x25]
7101c604e0  ldrb w10,[x8, x9, LSL ]
7101c604e4  cmp w10,#0x16
7101c604e8  csinc w10,wzr,w10,eq
7101c604ec  strb w10,[x8, x9, LSL ]
7101c604f0  ldr x8,[x25]
7101c604f4  add x0,x8,#0x20
7101c604f8  bl 0x7101c70620
7101c604fc  ldr x0,[x25]
7101c60500  ldrb w8,[x0, x21, LSL ]
7101c60504  sub w9,w8,#0x1
7101c60508  cmp w8,#0x0
7101c6050c  mov w8,#0x16
7101c60510  add x1,x0,#0x1a0
7101c60514  csel w2,w8,w9,eq
7101c60518  bl 0x7101c73720
7101c6051c  ldr x8,[x25]
7101c60520  add x0,x8,#0x30
7101c60524  bl 0x7101c71530
7101c60528  ldr x21,[x25]
7101c6052c  ldr x8,[x21, #0x18]
7101c60530  ldr x0,[x8]
7101c60534  adrp x22,0x71042c4000
7101c60538  add x22,x22,#0xe26
7101c6053c  cbz x0,0x7101c6055c
7101c60540  ldr x8,[x0]
7101c60544  ldr x8,[x8, #0x2f8]
7101c60548  blr x8
7101c6054c  adrp x8,0x71042c4000
7101c60550  add x8,x8,#0xe1b
7101c60554  tst w0,#0x1
7101c60558  csel x22,x8,x22,ne
7101c6055c  add x8,sp,#0x70
7101c60560  mov x0,x21
7101c60564  mov x1,x22
7101c60568  add x23,sp,#0x70
7101c6056c  bl 0x71037780e0
7101c60570  mov w0,#0x10
7101c60574  mov w1,#0x10
7101c60578  bl 0x710392e290
7101c6057c  cbnz x0,0x7101c605c4
7101c60580  adrp x8,0x7105332000
7101c60584  ldr x0,[x8, #0xf00]
7101c60588  cbz x0,0x7101c605c0
7101c6058c  mov w8,#0x10
7101c60590  stur wzr,[x29, #-0x6c]
7101c60594  sub x1,x29,#0x6c
7101c60598  str x8,[sp, #0x30]
7101c6059c  ldr x8,[x0]
7101c605a0  ldr x8,[x8, #0x30]
7101c605a4  add x2,sp,#0x30
7101c605a8  blr x8
7101c605ac  tbz w0,#0x0,0x7101c605c0
7101c605b0  mov w0,#0x10
7101c605b4  mov w1,#0x10
7101c605b8  bl 0x710392e290
7101c605bc  cbnz x0,0x7101c605c4
7101c605c0  mov x0,xzr
7101c605c4  adrp x21,0x710523d000
7101c605c8  add x21,x21,#0x9e8
7101c605cc  cmp x23,x0
7101c605d0  stp x21,xzr,[x0]
7101c605d4  b.eq 0x7101c605e4
7101c605d8  ldr x8,[sp, #0x78]
7101c605dc  str xzr,[sp, #0x78]
7101c605e0  str x8,[x0, #0x8]
7101c605e4  ldr x9,[x25]
7101c605e8  ldr x8,[x9, #0x310]
7101c605ec  str x0,[x9, #0x310]
7101c605f0  cbz x8,0x7101c60604
7101c605f4  ldr x9,[x8]
7101c605f8  ldr x9,[x9, #0x8]
7101c605fc  mov x0,x8
7101c60600  blr x9
7101c60604  ldr x0,[sp, #0x78]
7101c60608  stp x21,xzr,[sp, #0x70]
7101c6060c  cbz x0,0x7101c60614
7101c60610  bl 0x710392eb40
7101c60614  ldr x8,[x25]
7101c60618  ldr x0,[x8, #0x310]
7101c6061c  fmov s0,0x3f800000
7101c60620  bl 0x710377aee0
7101c60624  ldrb w8,[x20]
7101c60628  ldr x9,[x25]
7101c6062c  sub w8,w8,#0x6a
7101c60630  cmp w8,#0x6
7101c60634  mov w8,#0x28
7101c60638  csel w8,wzr,w8,cc
7101c6063c  str w8,[x9, #0x103c]
7101c60640  ldr x20,[x25]
7101c60644  ldr x9,[x20, #0x1028]
7101c60648  mov x11,#0x4925
7101c6064c  movk x11,#0x2492, LSL #16
7101c60650  movk x11,#0x9249, LSL #32
7101c60654  movk x11,#0x4924, LSL #48
7101c60658  ldr x8,[x20, #0x1010]
7101c6065c  lsr x10,x9,#0x2
7101c60660  umulh x10,x10,x11
7101c60664  lsr x10,x10,#0x1
7101c60668  ldr x21,[x8, x10, LSL #0x3]
7101c6066c  mov x8,#-0x1c
7101c60670  madd x22,x10,x8,x9
7101c60674  mov w8,#0x90
7101c60678  madd x23,x22,x8,x21
7101c6067c  ldr x0,[x23, #0x80]!
7101c60680  sub x25,x23,#0x40
7101c60684  cmp x25,x0
7101c60688  b.eq 0x7101c60694
7101c6068c  cbz x0,0x7101c60694
7101c60690  bl 0x710392eb40
7101c60694  mov w8,#0x90
7101c60698  madd x8,x22,x8,x21
7101c6069c  strh wzr,[x25]
7101c606a0  str x25,[x23]
7101c606a4  str wzr,[x8, #0x88]
7101c606a8  ldr x8,[x20, #0x1030]
7101c606ac  sub x8,x8,#0x1
7101c606b0  str x8,[x20, #0x1030]
7101c606b4  ldr x8,[x20, #0x1028]
7101c606b8  add x8,x8,#0x1
7101c606bc  cmp x8,#0x38
7101c606c0  str x8,[x20, #0x1028]
7101c606c4  b.cc 0x7101c5ea8c
7101c606c8  ldr x9,[x20, #0x1010]
7101c606cc  ldr x0,[x9]
7101c606d0  cbz x0,0x7101c606e0
7101c606d4  bl 0x710392eb40
7101c606d8  ldr x9,[x20, #0x1010]
7101c606dc  ldr x8,[x20, #0x1028]
7101c606e0  add x9,x9,#0x8
7101c606e4  sub x8,x8,#0x1c
7101c606e8  str x9,[x20, #0x1010]
7101c606ec  str x8,[x20, #0x1028]
7101c606f0  b 0x7101c5ea8c
7101c606f4  adrp x8,0x71052a8000
7101c606f8  ldr x8,[x8, #0xa80]
7101c606fc  ldr q0,[x8]
7101c60700  ldr x8,[x19, #0x460]
7101c60704  ldr x8,[x8, #0xf8]
7101c60708  ldp s1,s2,[x8, #0x90]
7101c6070c  fcmp s0,s1
7101c60710  fcsel s1,s1,s0,mi
7101c60714  fcmp s2,s1
7101c60718  fcsel s1,s2,s1,mi
7101c6071c  dup s0,v0.S[0x1]
7101c60720  ldp s2,s3,[x8, #0x98]
7101c60724  fcmp s0,s2
7101c60728  mov v7.S[0x0],v1.S[0x0]
7101c6072c  fcsel s0,s2,s0,mi
7101c60730  fcmp s3,s0
7101c60734  fcsel s0,s3,s0,mi
7101c60738  mov v7.S[0x1],v0.S[0x0]
7101c6073c  str q7,[x8, #0x70]
7101c60740  mov w8,#0x1
7101c60744  strh w8,[x19, #0x430]
7101c60748  ldr x8,[x19, #0x310]
7101c6074c  ldr x0,[x8]
7101c60750  cbz x0,0x7101c60764
7101c60754  ldr x8,[x0]
7101c60758  ldr x8,[x8, #0x328]
7101c6075c  mov w1,wzr
7101c60760  blr x8
7101c60764  ldr w8,[x19, #0x400]
7101c60768  cmn w8,#0x1
7101c6076c  b.ne 0x7101c6077c
7101c60770  ldr w8,[x19, #0x404]
7101c60774  cmn w8,#0x1
7101c60778  b.eq 0x7101c60818
7101c6077c  add x0,x19,#0x3d8
7101c60780  mov w1,wzr
7101c60784  bl 0x710373b540
7101c60788  add x22,x19,#0x3e0
7101c6078c  mov x0,x22
7101c60790  str wzr,[x19, #0x3d8]
7101c60794  bl 0x71039602c0
7101c60798  adrp x8,0x7104f73000
7101c6079c  add x8,x8,#0xd50
7101c607a0  str x8,[x19, #0x3e0]
7101c607a4  ldr x8,[x19, #0x3e8]
7101c607a8  cbz x8,0x7101c607e4
7101c607ac  adrp x9,0x7106dd5000
7101c607b0  ldrb w9,[x9, #0x3a8]
7101c607b4  cmp w9,#0x1
7101c607b8  b.ne 0x7101c607e4
7101c607bc  adrp x10,0x7106dd5000
7101c607c0  ldr w9,[x19, #0x3f0]
7101c607c4  ldr w10,[x10, #0x3ac]
7101c607c8  cmp w9,w10
7101c607cc  b.ne 0x7101c607e4
7101c607d0  ldr wzr,[x8, #0x38]!
7101c607d4  ldaxr w9,[x8]
7101c607d8  sub w9,w9,#0x1
7101c607dc  stlxr w10,w9,[x8]
7101c607e0  cbnz w10,0x7101c607d4
7101c607e4  mov x8,#0x650000000000
7101c607e8  movk x8,#0x87, LSL #48
7101c607ec  stp xzr,xzr,[x22, #0x10]
7101c607f0  stp xzr,xzr,[x22]
7101c607f4  str x8,[x19, #0x3f0]
7101c607f8  adrp x8,0x7104f73000
7101c607fc  add x8,x8,#0xd30
7101c60800  str xzr,[x19, #0x3e8]
7101c60804  strb wzr,[x19, #0x3f8]
7101c60808  str x8,[x19, #0x3e0]
7101c6080c  str x24,[x19, #0x400]
7101c60810  str xzr,[x19, #0x408]
7101c60814  str wzr,[x19, #0x414]
7101c60818  mov w8,#0x1
7101c6081c  strb w8,[x25, #0x207]
7101c60820  ldr w8,[x19, #0x1b30]
7101c60824  cbnz w8,0x7101c5fb84
7101c60828  b 0x7101c5fbd0
7101c6082c  ldp x9,x10,[sp, #0x98]
7101c60830  ldr x11,[sp, #0xa8]
7101c60834  str x9,[x25]
7101c60838  adrp x9,0x7104f73000
7101c6083c  add x9,x9,#0xd50
7101c60840  stp x10,x11,[x25, #0x8]
7101c60844  str x9,[sp, #0x78]
7101c60848  b 0x7101c600b4
7101c6084c  str w9,[x19, #0x3f0]
7101c60850  add x9,x19,#0x3e8
7101c60854  add x10,x19,#0x3f8
7101c60858  str x8,[x9]
7101c6085c  add x8,x8,#0x38
7101c60860  ldaxr w9,[x8]
7101c60864  add w9,w9,#0x1
7101c60868  stlxr w11,w9,[x8]
7101c6086c  cbnz w11,0x7101c60860
7101c60870  b 0x7101c6008c
7101c60874  bl 0x71039c2650
