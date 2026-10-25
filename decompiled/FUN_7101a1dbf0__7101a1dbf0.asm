// addr:      7101a1dbf0
// offset:    0x1a1dbf0
// name:      FUN_7101a1dbf0
// mangled:   
// size:      2112

7101a1dbf0  str d8,[sp, #-0x60]!
7101a1dbf4  stp x26,x25,[sp, #0x10]
7101a1dbf8  stp x24,x23,[sp, #0x20]
7101a1dbfc  stp x22,x21,[sp, #0x30]
7101a1dc00  stp x20,x19,[sp, #0x40]
7101a1dc04  stp x29,x30,[sp, #0x50]
7101a1dc08  add x29,sp,#0x50
7101a1dc0c  ldr x8,[x1, #0x8]
7101a1dc10  ldr w25,[x8, #0x1f8]
7101a1dc14  ldr w8,[x8, #0x5d0]
7101a1dc18  mov w21,w2
7101a1dc1c  mov x19,x1
7101a1dc20  mov x20,x0
7101a1dc24  mov x26,#-0x3f00000000000000
7101a1dc28  cbz w8,0x7101a1dedc
7101a1dc2c  mov x22,#0xb807
7101a1dc30  movk x22,#0xb1cc, LSL #16
7101a1dc34  movk x22,#0x11, LSL #32
7101a1dc38  cmp w25,#0x2
7101a1dc3c  b.ne 0x7101a1dcb0
7101a1dc40  ldr x0,[x19, #0x8]
7101a1dc44  mov x23,#0xff0000000000
7101a1dc48  mov w1,#0xffffffff
7101a1dc4c  movk x23,#0xc1ff, LSL #48
7101a1dc50  bl 0x7101a024c0
7101a1dc54  adrp x8,0x710532f000
7101a1dc58  ldr x8,[x8, #0x730]
7101a1dc5c  ldr x8,[x8, #0x8]
7101a1dc60  ldr x24,[x8, #0x168]
7101a1dc64  mov x0,x24
7101a1dc68  mov x1,x22
7101a1dc6c  bl 0x71032631a0
7101a1dc70  and x9,x0,#-0x100000000000000
7101a1dc74  and x8,x0,#0xffffffffff
7101a1dc78  mov x2,x23
7101a1dc7c  cmp x9,x26
7101a1dc80  ccmp x8,#0x0,#0x4,eq
7101a1dc84  b.ne 0x7101a1dc98
7101a1dc88  mov x0,x24
7101a1dc8c  mov x1,x23
7101a1dc90  bl 0x7103263030
7101a1dc94  mov x2,x0
7101a1dc98  ldr x0,[x19, #0x8]
7101a1dc9c  mov x1,x23
7101a1dca0  mov w3,wzr
7101a1dca4  bl 0x7101a029b0
7101a1dca8  ldr x8,[x19, #0x8]
7101a1dcac  strb wzr,[x8, #0x6bd]
7101a1dcb0  ldr x0,[x19, #0x8]
7101a1dcb4  mov w1,w21
7101a1dcb8  bl 0x7101a028b0
7101a1dcbc  orr w8,w21,#0x1
7101a1dcc0  cmp w8,#0x3
7101a1dcc4  b.ne 0x7101a1de58
7101a1dcc8  ldr x10,[x19, #0x8]
7101a1dccc  ldr x8,[x10, #0x678]
7101a1dcd0  cbz x8,0x7101a1dd1c
7101a1dcd4  ldr x9,[x8, #0x8]
7101a1dcd8  ldr w11,[x9, #0x30]
7101a1dcdc  ldr w10,[x10, #0x150]
7101a1dce0  cmp w11,w10
7101a1dce4  b.eq 0x7101a1dcf4
7101a1dce8  ldr w11,[x9, #0x28]
7101a1dcec  cmp w11,w10
7101a1dcf0  b.eq 0x7101a1dd1c
7101a1dcf4  ldr x9,[x9, #0x20]
7101a1dcf8  strb wzr,[x9, #0x166]
7101a1dcfc  ldr x9,[x8, #0x8]
7101a1dd00  mov w10,#0xffffffff
7101a1dd04  str w10,[x9, #0x2c]
7101a1dd08  ldr x9,[x8, #0x8]
7101a1dd0c  ldr x9,[x9, #0x20]
7101a1dd10  strb wzr,[x9, #0x167]
7101a1dd14  ldr x8,[x8, #0x8]
7101a1dd18  str w10,[x8, #0x30]
7101a1dd1c  ldr x9,[x19, #0x8]
7101a1dd20  ldr x8,[x9, #0x680]
7101a1dd24  cbz x8,0x7101a1dd64
7101a1dd28  ldr x10,[x8, #0x8]
7101a1dd2c  ldr w11,[x10, #0x30]
7101a1dd30  ldr w9,[x9, #0x150]
7101a1dd34  cmp w11,w9
7101a1dd38  b.ne 0x7101a1dd64
7101a1dd3c  ldr x9,[x10, #0x20]
7101a1dd40  strb wzr,[x9, #0x166]
7101a1dd44  ldr x9,[x8, #0x8]
7101a1dd48  mov w10,#0xffffffff
7101a1dd4c  str w10,[x9, #0x2c]
7101a1dd50  ldr x9,[x8, #0x8]
7101a1dd54  ldr x9,[x9, #0x20]
7101a1dd58  strb wzr,[x9, #0x167]
7101a1dd5c  ldr x8,[x8, #0x8]
7101a1dd60  str w10,[x8, #0x30]
7101a1dd64  mov x23,#0xff0000000000
7101a1dd68  mov x0,x20
7101a1dd6c  mov x1,x19
7101a1dd70  movk x23,#0xc1ff, LSL #48
7101a1dd74  bl 0x7101a1f0b0
7101a1dd78  adrp x8,0x710532f000
7101a1dd7c  ldr x8,[x8, #0x730]
7101a1dd80  ldr x8,[x8, #0x8]
7101a1dd84  ldr x24,[x8, #0x168]
7101a1dd88  mov x0,x24
7101a1dd8c  mov x1,x22
7101a1dd90  bl 0x71032631a0
7101a1dd94  and x8,x0,#-0x100000000000000
7101a1dd98  cmp x8,x26
7101a1dd9c  b.ne 0x7101a1ddac
7101a1dda0  and x8,x0,#0xffffffffff
7101a1dda4  mov x2,x23
7101a1dda8  cbnz x8,0x7101a1ddbc
7101a1ddac  mov x0,x24
7101a1ddb0  mov x1,x23
7101a1ddb4  bl 0x7103263030
7101a1ddb8  mov x2,x0
7101a1ddbc  ldr x0,[x19, #0x8]
7101a1ddc0  mov x1,x23
7101a1ddc4  mov w3,wzr
7101a1ddc8  bl 0x7101a029b0
7101a1ddcc  ldr x8,[x19, #0x8]
7101a1ddd0  strb wzr,[x8, #0x6bd]
7101a1ddd4  ldr x8,[x19, #0x8]
7101a1ddd8  ldr x8,[x8, #0x5e8]
7101a1dddc  fmov s8,wzr
7101a1dde0  mov v0.16B,v8.16B
7101a1dde4  adrp x1,0x710425e000
7101a1dde8  add x1,x1,#0xd91
7101a1ddec  ldr x0,[x8, #0x10]
7101a1ddf0  bl 0x7103778630
7101a1ddf4  ldr x8,[x19, #0x8]
7101a1ddf8  ldr x23,[x8, #0x5e8]
7101a1ddfc  ldr x0,[x23, #0x10]
7101a1de00  mov v0.16B,v8.16B
7101a1de04  adrp x22,0x710433a000
7101a1de08  add x22,x22,#0x9c5
7101a1de0c  mov x1,x22
7101a1de10  bl 0x7103778630
7101a1de14  ldr x0,[x23, #0xf0]
7101a1de18  mov v0.16B,v8.16B
7101a1de1c  mov x1,x22
7101a1de20  bl 0x7103778630
7101a1de24  ldr x0,[x23, #0x100]
7101a1de28  mov v0.16B,v8.16B
7101a1de2c  mov x1,x22
7101a1de30  bl 0x7103778630
7101a1de34  ldr x8,[x19, #0x8]
7101a1de38  ldr w1,[x8, #0x150]
7101a1de3c  mov x0,x20
7101a1de40  bl 0x7101a1c300
7101a1de44  ldr x8,[x19, #0x8]
7101a1de48  ldr w1,[x8, #0x150]
7101a1de4c  mov x0,x20
7101a1de50  bl 0x7101a19420
7101a1de54  b 0x7101a1e114
7101a1de58  orr w8,w25,#0x1
7101a1de5c  cmp w8,#0x3
7101a1de60  b.ne 0x7101a1e114
7101a1de64  ldr x23,[x19, #0x8]
7101a1de68  ldr x8,[x23, #0x200]
7101a1de6c  and x9,x8,#-0x100000000000000
7101a1de70  cmp x9,x26
7101a1de74  b.ne 0x7101a1de80
7101a1de78  and x8,x8,#0xffffffffff
7101a1de7c  cbnz x8,0x7101a1e03c
7101a1de80  adrp x8,0x710532f000
7101a1de84  ldr x8,[x8, #0x730]
7101a1de88  ldr x8,[x8, #0x8]
7101a1de8c  ldr x25,[x8, #0x168]
7101a1de90  ldr x24,[x20, #0xd90]
7101a1de94  mov x1,x22
7101a1de98  mov x0,x25
7101a1de9c  bl 0x71032631a0
7101a1dea0  and x10,x24,#-0x100000000000000
7101a1dea4  and x9,x24,#0xffffffffff
7101a1dea8  and x8,x0,#0xffffffffff
7101a1deac  cmp x10,x26
7101a1deb0  b.ne 0x7101a1dfe0
7101a1deb4  cbz x9,0x7101a1dfe0
7101a1deb8  and x11,x0,#-0x100000000000000
7101a1debc  cmp x11,x26
7101a1dec0  b.ne 0x7101a1dfe4
7101a1dec4  cbz x8,0x7101a1dfe4
7101a1dec8  eor x8,x0,x24
7101a1decc  tst x8,#0xffffffffff
7101a1ded0  mov x2,x24
7101a1ded4  b.ne 0x7101a1e02c
7101a1ded8  b 0x7101a1e01c
7101a1dedc  cmp w21,#0x0
7101a1dee0  csinc w21,w21,wzr,ne
7101a1dee4  cmp w21,#0x2
7101a1dee8  b.eq 0x7101a1dfc0
7101a1deec  cmp w21,#0x1
7101a1def0  b.ne 0x7101a1dc2c
7101a1def4  mov w2,#0x1
7101a1def8  mov x0,x20
7101a1defc  mov x1,x19
7101a1df00  bl 0x7101a1eb70
7101a1df04  mov x0,x20
7101a1df08  mov x1,x19
7101a1df0c  bl 0x7101a1d4d0
7101a1df10  mov x0,x20
7101a1df14  mov x1,x19
7101a1df18  bl 0x7101a1cb30
7101a1df1c  ldr x22,[x19, #0x8]
7101a1df20  ldrb w8,[x22, #0x6bd]
7101a1df24  cbz w8,0x7101a1dc2c
7101a1df28  ldr w8,[x20, #0x16c]
7101a1df2c  sub w9,w8,#0x19
7101a1df30  mov w21,#0x1
7101a1df34  cmp w9,#0x4
7101a1df38  b.cc 0x7101a1dc2c
7101a1df3c  cmp w8,#0x2
7101a1df40  b.eq 0x7101a1dc2c
7101a1df44  mov w21,#0x1
7101a1df48  cmp w8,#0x13
7101a1df4c  b.eq 0x7101a1dc2c
7101a1df50  ldr w8,[x20, #0x170]
7101a1df54  cmp w8,#0x3
7101a1df58  b.eq 0x7101a1dc2c
7101a1df5c  ldr x23,[x22, #0x208]
7101a1df60  and x8,x23,#-0x100000000000000
7101a1df64  mov w21,#0x1
7101a1df68  cmp x8,x26
7101a1df6c  b.ne 0x7101a1dc2c
7101a1df70  and x8,x23,#0xffffffffff
7101a1df74  cbz x8,0x7101a1dc2c
7101a1df78  adrp x8,0x710532f000
7101a1df7c  ldr x8,[x8, #0x730]
7101a1df80  ldr x8,[x8, #0x8]
7101a1df84  ldr x0,[x8, #0x168]
7101a1df88  ldr w21,[x22, #0x150]
7101a1df8c  mov x1,#0xfa78
7101a1df90  movk x1,#0xd5f7, LSL #16
7101a1df94  movk x1,#0xf, LSL #32
7101a1df98  bl 0x71032631a0
7101a1df9c  and x8,x0,#-0x100000000000000
7101a1dfa0  and x9,x0,#0xffffffffff
7101a1dfa4  cmp x8,x26
7101a1dfa8  b.ne 0x7101a1e3ec
7101a1dfac  cbz x9,0x7101a1e3ec
7101a1dfb0  eor x8,x0,x23
7101a1dfb4  tst x8,#0xffffffffff
7101a1dfb8  b.ne 0x7101a1e3f8
7101a1dfbc  b 0x7101a1e404
7101a1dfc0  mov w2,#0x1
7101a1dfc4  mov x0,x20
7101a1dfc8  mov x1,x19
7101a1dfcc  bl 0x7101a1eee0
7101a1dfd0  mov x0,x20
7101a1dfd4  mov x1,x19
7101a1dfd8  bl 0x7101a1d4d0
7101a1dfdc  b 0x7101a1dc2c
7101a1dfe0  and x11,x0,#-0x100000000000000
7101a1dfe4  cmp x10,x26
7101a1dfe8  cset w10,eq
7101a1dfec  cmp x9,#0x0
7101a1dff0  cset w9,ne
7101a1dff4  cmp x8,#0x0
7101a1dff8  cset w8,ne
7101a1dffc  cmp x11,x26
7101a1e000  and w9,w10,w9
7101a1e004  cset w10,eq
7101a1e008  and w8,w8,w10
7101a1e00c  eor w8,w8,w9
7101a1e010  cmp w8,#0x1
7101a1e014  mov x2,x24
7101a1e018  b.eq 0x7101a1e02c
7101a1e01c  mov x0,x25
7101a1e020  mov x1,x24
7101a1e024  bl 0x7103263030
7101a1e028  mov x2,x0
7101a1e02c  mov x0,x23
7101a1e030  mov x1,x24
7101a1e034  mov w3,wzr
7101a1e038  bl 0x7101a029b0
7101a1e03c  ldr w8,[x20, #0x170]
7101a1e040  cbz w8,0x7101a1e04c
7101a1e044  ldr x0,[x19, #0x8]
7101a1e048  bl 0x7101a07580
7101a1e04c  ldr x8,[x19, #0x8]
7101a1e050  mov w9,#0x1
7101a1e054  strb w9,[x8, #0x6bd]
7101a1e058  ldr x8,[x19, #0x8]
7101a1e05c  ldr x8,[x8, #0x5e8]
7101a1e060  ldr x0,[x8, #0x10]
7101a1e064  adrp x1,0x710425e000
7101a1e068  add x1,x1,#0xd91
7101a1e06c  bl 0x7103778760
7101a1e070  ldr x8,[x19, #0x8]
7101a1e074  ldr x23,[x8, #0x5e8]
7101a1e078  ldr x0,[x23, #0x10]
7101a1e07c  adrp x22,0x710433a000
7101a1e080  add x22,x22,#0x9c5
7101a1e084  mov x1,x22
7101a1e088  bl 0x7103778760
7101a1e08c  ldr x0,[x23, #0xf0]
7101a1e090  mov x1,x22
7101a1e094  bl 0x7103778760
7101a1e098  ldr x0,[x23, #0x100]
7101a1e09c  mov x1,x22
7101a1e0a0  bl 0x7103778760
7101a1e0a4  mov x0,x20
7101a1e0a8  mov x1,x19
7101a1e0ac  bl 0x7101a1d4d0
7101a1e0b0  ldr x8,[x19, #0x8]
7101a1e0b4  ldr w1,[x8, #0x150]
7101a1e0b8  mov x0,x20
7101a1e0bc  bl 0x7101a1c300
7101a1e0c0  ldr x8,[x19, #0x8]
7101a1e0c4  ldr w1,[x8, #0x150]
7101a1e0c8  mov x0,x20
7101a1e0cc  bl 0x7101a19420
7101a1e0d0  ldrb w8,[x20, #0xf8d]
7101a1e0d4  cbz w8,0x7101a1e0e4
7101a1e0d8  ldr x9,[x19, #0x8]
7101a1e0dc  ldr w8,[x9, #0x150]
7101a1e0e0  cbz w8,0x7101a1e268
7101a1e0e4  mov x0,x20
7101a1e0e8  mov x1,x19
7101a1e0ec  bl 0x7101a1cb30
7101a1e0f0  ldr x23,[x19, #0x8]
7101a1e0f4  ldrb w8,[x23, #0x6bd]
7101a1e0f8  cbz w8,0x7101a1e114
7101a1e0fc  ldr w8,[x20, #0x16c]
7101a1e100  sub w9,w8,#0x19
7101a1e104  cmp w9,#0x4
7101a1e108  b.cc 0x7101a1e114
7101a1e10c  cmp w8,#0x2
7101a1e110  b.ne 0x7101a1e314
7101a1e114  mov x0,x20
7101a1e118  mov x1,x19
7101a1e11c  bl 0x7101a1f530
7101a1e120  ldr x26,[x19, #0x8]
7101a1e124  ldr x23,[x26, #0x200]
7101a1e128  ldrb w24,[x26, #0x210]
7101a1e12c  ldr w22,[x26, #0x150]
7101a1e130  mov x0,x20
7101a1e134  mov x1,x23
7101a1e138  mov w2,w24
7101a1e13c  mov w3,w22
7101a1e140  bl 0x7101a1c830
7101a1e144  tbnz w0,#0x0,0x7101a1e1d8
7101a1e148  adrp x8,0x710532f000
7101a1e14c  ldr x8,[x8, #0x730]
7101a1e150  ldr x8,[x8, #0x8]
7101a1e154  ldr x0,[x8, #0x168]
7101a1e158  mov x1,x23
7101a1e15c  bl 0x71032633f0
7101a1e160  cbz w0,0x7101a1e1ac
7101a1e164  mov w25,w0
7101a1e168  mov x0,x20
7101a1e16c  mov x1,x23
7101a1e170  mov w2,w24
7101a1e174  mov w3,w22
7101a1e178  mov w4,wzr
7101a1e17c  bl 0x7101a191b0
7101a1e180  and w8,w25,w25, ASR #0x1f
7101a1e184  cmp w25,#0x0
7101a1e188  csel w9,wzr,w25,lt
7101a1e18c  sub w10,w0,w8
7101a1e190  sub w9,w9,w8
7101a1e194  sdiv w11,w10,w9
7101a1e198  msub w10,w11,w9,w10
7101a1e19c  and w9,w9,w10, ASR #0x1f
7101a1e1a0  add w8,w10,w8
7101a1e1a4  add w8,w8,w9
7101a1e1a8  b 0x7101a1e1b0
7101a1e1ac  mov w8,wzr
7101a1e1b0  ldr x2,[x26, #0x208]
7101a1e1b4  ldrb w4,[x26, #0x6c2]
7101a1e1b8  and w3,w8,#0xff
7101a1e1bc  ldr x0,[x26, #0x5e8]
7101a1e1c0  mov x1,x23
7101a1e1c4  mov w5,wzr
7101a1e1c8  strb w8,[x26, #0x210]
7101a1e1cc  bl 0x71019fd290
7101a1e1d0  ldr x26,[x19, #0x8]
7101a1e1d4  ldr w22,[x26, #0x150]
7101a1e1d8  ldr w8,[x26, #0x394]
7101a1e1dc  cbz w8,0x7101a1e234
7101a1e1e0  ldr w9,[x20, #0x16c]
7101a1e1e4  cmp w9,#0x7
7101a1e1e8  b.eq 0x7101a1e234
7101a1e1ec  ldr x9,[x20, #0x250]
7101a1e1f0  ldr x10,[x20, #0x258]
7101a1e1f4  cmp x9,x10
7101a1e1f8  b.eq 0x7101a1e234
7101a1e1fc  ldr x11,[x9, #0x8]
7101a1e200  ldr w12,[x11, #0x150]
7101a1e204  cmp w12,w22
7101a1e208  b.eq 0x7101a1e228
7101a1e20c  ldr w12,[x11, #0x5d0]
7101a1e210  cbz w12,0x7101a1e228
7101a1e214  ldr w12,[x11, #0x1f8]
7101a1e218  cbnz w12,0x7101a1e228
7101a1e21c  ldr w11,[x11, #0x394]
7101a1e220  cmp w11,w8
7101a1e224  b.eq 0x7101a1e388
7101a1e228  add x9,x9,#0x10
7101a1e22c  cmp x10,x9
7101a1e230  b.ne 0x7101a1e1fc
7101a1e234  mov w8,#0x1
7101a1e238  cmp w21,#0x2
7101a1e23c  strb w8,[x26, #0x6ba]
7101a1e240  b.ne 0x7101a1e24c
7101a1e244  ldr x0,[x19, #0x8]
7101a1e248  bl 0x7101a07770
7101a1e24c  ldp x29,x30,[sp, #0x50]
7101a1e250  ldp x20,x19,[sp, #0x40]
7101a1e254  ldp x22,x21,[sp, #0x30]
7101a1e258  ldp x24,x23,[sp, #0x20]
7101a1e25c  ldp x26,x25,[sp, #0x10]
7101a1e260  ldr d8,[sp], #0x60
7101a1e264  ret
7101a1e268  ldrb w8,[x9, #0x6bd]
7101a1e26c  cbz w8,0x7101a1e0e4
7101a1e270  ldr x0,[x20, #0xdd0]
7101a1e274  mov x8,x0
7101a1e278  ldr x10,[x8, #0x20]!
7101a1e27c  cbz x10,0x7101a1e0e4
7101a1e280  ldr x9,[x9, #0x200]
7101a1e284  and x11,x9,#-0xffff0000000001
7101a1e288  mov x9,x8
7101a1e28c  ldr x12,[x10, #0x20]
7101a1e290  and x12,x12,#-0xffff0000000001
7101a1e294  cmp x12,x11
7101a1e298  cset w12,cc
7101a1e29c  csel x9,x9,x10,cc
7101a1e2a0  ldr x10,[x10, w12, UXTW #0x3]
7101a1e2a4  cbnz x10,0x7101a1e28c
7101a1e2a8  cmp x9,x8
7101a1e2ac  b.eq 0x7101a1e0e4
7101a1e2b0  ldr x8,[x9, #0x20]
7101a1e2b4  and x8,x8,#-0xffff0000000001
7101a1e2b8  cmp x11,x8
7101a1e2bc  b.cc 0x7101a1e0e4
7101a1e2c0  ldrsw x8,[x9, #0x28]
7101a1e2c4  cmn w8,#0x1
7101a1e2c8  b.eq 0x7101a1e0e4
7101a1e2cc  ldp x9,x10,[x0]
7101a1e2d0  sub x10,x10,x9
7101a1e2d4  mov x11,#0x8ba3
7101a1e2d8  movk x11,#0xba2e, LSL #16
7101a1e2dc  movk x11,#0xa2e8, LSL #32
7101a1e2e0  movk x11,#0x2e8b, LSL #48
7101a1e2e4  asr x10,x10,#0x4
7101a1e2e8  mul x10,x10,x11
7101a1e2ec  cmp w8,w10
7101a1e2f0  b.ge 0x7101a1e3d8
7101a1e2f4  cmp x10,x8
7101a1e2f8  b.ls 0x7101a1e42c
7101a1e2fc  mov w10,#0xb0
7101a1e300  madd x8,x8,x10,x9
7101a1e304  ldrb w8,[x8, #0xa0]
7101a1e308  cmp w8,#0x0
7101a1e30c  cset w2,ne
7101a1e310  b 0x7101a1e3dc
7101a1e314  cmp w8,#0x13
7101a1e318  b.eq 0x7101a1e114
7101a1e31c  ldr w8,[x20, #0x170]
7101a1e320  cmp w8,#0x3
7101a1e324  b.eq 0x7101a1e114
7101a1e328  ldr x24,[x23, #0x208]
7101a1e32c  and x8,x24,#-0x100000000000000
7101a1e330  cmp x8,x26
7101a1e334  b.ne 0x7101a1e114
7101a1e338  and x8,x24,#0xffffffffff
7101a1e33c  cbz x8,0x7101a1e114
7101a1e340  adrp x8,0x710532f000
7101a1e344  ldr x8,[x8, #0x730]
7101a1e348  ldr x8,[x8, #0x8]
7101a1e34c  ldr x0,[x8, #0x168]
7101a1e350  ldr w22,[x23, #0x150]
7101a1e354  mov x1,#0xfa78
7101a1e358  movk x1,#0xd5f7, LSL #16
7101a1e35c  movk x1,#0xf, LSL #32
7101a1e360  bl 0x71032631a0
7101a1e364  and x8,x0,#-0x100000000000000
7101a1e368  and x9,x0,#0xffffffffff
7101a1e36c  cmp x8,x26
7101a1e370  b.ne 0x7101a1e3a4
7101a1e374  cbz x9,0x7101a1e3a4
7101a1e378  eor x8,x0,x24
7101a1e37c  tst x8,#0xffffffffff
7101a1e380  b.ne 0x7101a1e3b0
7101a1e384  b 0x7101a1e114
7101a1e388  str wzr,[sp, #0x8]
7101a1e38c  str wzr,[x26, #0x394]
7101a1e390  ldr x0,[x26, #0x5e8]
7101a1e394  add x1,sp,#0x8
7101a1e398  bl 0x71019fd0b0
7101a1e39c  ldr x26,[x19, #0x8]
7101a1e3a0  b 0x7101a1e234
7101a1e3a4  cbz x9,0x7101a1e3b0
7101a1e3a8  cmp x8,x26
7101a1e3ac  b.eq 0x7101a1e114
7101a1e3b0  ldr w8,[x23, #0x1f8]
7101a1e3b4  cmp w8,#0x3
7101a1e3b8  b.eq 0x7101a1e114
7101a1e3bc  adrp x8,0x710532f000
7101a1e3c0  ldr x8,[x8, #0x8c8]
7101a1e3c4  ldr x0,[x8, #0x8]
7101a1e3c8  add x2,x23,#0x1f0
7101a1e3cc  mov w1,w22
7101a1e3d0  bl 0x7103311740
7101a1e3d4  b 0x7101a1e114
7101a1e3d8  mov w2,wzr
7101a1e3dc  mov w1,#0x1
7101a1e3e0  mov x0,x20
7101a1e3e4  bl 0x7101a1c9f0
7101a1e3e8  b 0x7101a1e0e4
7101a1e3ec  cbz x9,0x7101a1e3f8
7101a1e3f0  cmp x8,x26
7101a1e3f4  b.eq 0x7101a1e404
7101a1e3f8  ldr w8,[x22, #0x1f8]
7101a1e3fc  cmp w8,#0x3
7101a1e400  b.ne 0x7101a1e40c
7101a1e404  mov w21,#0x1
7101a1e408  b 0x7101a1dc2c
7101a1e40c  adrp x8,0x710532f000
7101a1e410  ldr x8,[x8, #0x8c8]
7101a1e414  ldr x0,[x8, #0x8]
7101a1e418  add x2,x22,#0x1f0
7101a1e41c  mov w1,w21
7101a1e420  bl 0x7103311740
7101a1e424  mov w21,#0x1
7101a1e428  b 0x7101a1dc2c
7101a1e42c  bl 0x71039c1330
