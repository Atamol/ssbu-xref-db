// addr:      7101a9dcc0
// offset:    0x1a9dcc0
// name:      FUN_7101a9dcc0
// mangled:   
// size:      1404

7101a9dcc0  sub sp,sp,#0xb0
7101a9dcc4  stp x28,x27,[sp, #0x50]
7101a9dcc8  stp x26,x25,[sp, #0x60]
7101a9dccc  stp x24,x23,[sp, #0x70]
7101a9dcd0  stp x22,x21,[sp, #0x80]
7101a9dcd4  stp x20,x19,[sp, #0x90]
7101a9dcd8  stp x29,x30,[sp, #0xa0]
7101a9dcdc  add x29,sp,#0xa0
7101a9dce0  mov x20,x0
7101a9dce4  ldr x8,[x20, #0x8]!
7101a9dce8  ldr x9,[x20, #0x8]
7101a9dcec  sub x9,x9,x8
7101a9dcf0  orr x10,xzr,#-0x3333333333333334
7101a9dcf4  movk x10,#0xcccd
7101a9dcf8  asr x9,x9,#0x4
7101a9dcfc  mul x9,x9,x10
7101a9dd00  sxtw x25,w1
7101a9dd04  cmp x9,x25
7101a9dd08  b.ls 0x7101a9e234
7101a9dd0c  mov w9,#0x50
7101a9dd10  madd x8,x25,x9,x8
7101a9dd14  mov x21,x0
7101a9dd18  ldr x0,[x2, #0x8]
7101a9dd1c  ldrb w22,[x8, #0x46]
7101a9dd20  mov x19,x2
7101a9dd24  cbz w22,0x7101a9dd98
7101a9dd28  fmov s0,0x3f800000
7101a9dd2c  adrp x1,0x710424e000
7101a9dd30  add x1,x1,#0xfa2
7101a9dd34  bl 0x7103778300
7101a9dd38  cmp w22,#0x2
7101a9dd3c  b.ne 0x7101a9dda8
7101a9dd40  adrp x1,0x71042f7000
7101a9dd44  add x1,x1,#0xce0
7101a9dd48  add x8,sp,#0x38
7101a9dd4c  mov x0,x19
7101a9dd50  bl 0x7103776910
7101a9dd54  ldr x8,[x20]
7101a9dd58  mov w9,#0x50
7101a9dd5c  madd x8,x25,x9,x8
7101a9dd60  add x2,x8,#0x20
7101a9dd64  add x0,sp,#0x38
7101a9dd68  mov w1,#0x1
7101a9dd6c  bl 0x710377a310
7101a9dd70  ldr x0,[sp, #0x40]
7101a9dd74  adrp x8,0x710523d000
7101a9dd78  add x8,x8,#0x9a8
7101a9dd7c  stp x8,xzr,[sp, #0x38]
7101a9dd80  cbz x0,0x7101a9dd88
7101a9dd84  bl 0x710392eb40
7101a9dd88  ldr x0,[x19, #0x8]
7101a9dd8c  adrp x1,0x710436b000
7101a9dd90  add x1,x1,#0xddc
7101a9dd94  b 0x7101a9ddfc
7101a9dd98  fmov s0,0x3f800000
7101a9dd9c  adrp x1,0x710424e000
7101a9dda0  add x1,x1,#0xf96
7101a9dda4  bl 0x7103778300
7101a9dda8  adrp x1,0x710433a000
7101a9ddac  add x1,x1,#0x953
7101a9ddb0  add x8,sp,#0x38
7101a9ddb4  mov x0,x19
7101a9ddb8  bl 0x7103776910
7101a9ddbc  ldr x8,[x20]
7101a9ddc0  mov w9,#0x50
7101a9ddc4  madd x8,x25,x9,x8
7101a9ddc8  add x2,x8,#0x20
7101a9ddcc  add x0,sp,#0x38
7101a9ddd0  mov w1,#0x1
7101a9ddd4  bl 0x710377a310
7101a9ddd8  ldr x0,[sp, #0x40]
7101a9dddc  adrp x8,0x710523d000
7101a9dde0  add x8,x8,#0x9a8
7101a9dde4  stp x8,xzr,[sp, #0x38]
7101a9dde8  cbz x0,0x7101a9ddf0
7101a9ddec  bl 0x710392eb40
7101a9ddf0  ldr x0,[x19, #0x8]
7101a9ddf4  adrp x1,0x7104421000
7101a9ddf8  add x1,x1,#0xd82
7101a9ddfc  fmov s0,0x3f800000
7101a9de00  bl 0x7103778300
7101a9de04  ldr x8,[x20]
7101a9de08  mov w9,#0x50
7101a9de0c  madd x8,x25,x9,x8
7101a9de10  str xzr,[sp, #0x38]
7101a9de14  ldr x0,[x8, #0x38]
7101a9de18  add x1,sp,#0x38
7101a9de1c  bl 0x7103741810
7101a9de20  ldr x8,[sp, #0x38]
7101a9de24  mov w9,#0x4240
7101a9de28  movk w9,#0xf, LSL #16
7101a9de2c  ubfx x11,x8,#0x15,#0x5
7101a9de30  and x10,x8,#0xfff
7101a9de34  mul x10,x10,x9
7101a9de38  mul x9,x11,x9
7101a9de3c  mov w12,#0x3e8
7101a9de40  ubfx x15,x8,#0x1a,#0x6
7101a9de44  ubfx x13,x8,#0xc,#0x4
7101a9de48  madd x10,x13,x12,x10
7101a9de4c  madd x9,x15,x12,x9
7101a9de50  ubfx x14,x8,#0x10,#0x5
7101a9de54  ubfx x8,x8,#0x20,#0x6
7101a9de58  add x22,x9,x8
7101a9de5c  adrp x1,0x7104413000
7101a9de60  add x1,x1,#0x18a
7101a9de64  add x8,sp,#0x38
7101a9de68  mov x0,x19
7101a9de6c  add x23,x10,x14
7101a9de70  bl 0x7103776910
7101a9de74  add x0,sp,#0x38
7101a9de78  mov w1,#0x1
7101a9de7c  mov x2,x23
7101a9de80  bl 0x710377a310
7101a9de84  ldr x0,[sp, #0x40]
7101a9de88  adrp x26,0x710523d000
7101a9de8c  add x26,x26,#0x9a8
7101a9de90  stp x26,xzr,[sp, #0x38]
7101a9de94  cbz x0,0x7101a9de9c
7101a9de98  bl 0x710392eb40
7101a9de9c  adrp x1,0x71043ae000
7101a9dea0  add x1,x1,#0x1be
7101a9dea4  add x8,sp,#0x38
7101a9dea8  mov x0,x19
7101a9deac  bl 0x7103776910
7101a9deb0  add x0,sp,#0x38
7101a9deb4  mov w1,#0x2
7101a9deb8  mov w2,wzr
7101a9debc  mov x3,x22
7101a9dec0  bl 0x710377a310
7101a9dec4  ldr x0,[sp, #0x40]
7101a9dec8  stp x26,xzr,[sp, #0x38]
7101a9decc  cbz x0,0x7101a9ded4
7101a9ded0  bl 0x710392eb40
7101a9ded4  adrp x8,0x710532f000
7101a9ded8  ldr x8,[x8, #0x730]
7101a9dedc  ldr x27,[x8, #0x8]
7101a9dee0  ldr x8,[x20]
7101a9dee4  mov w9,#0x50
7101a9dee8  madd x8,x25,x9,x8
7101a9deec  ldr x10,[x27, #0x2e8]
7101a9def0  ldrh w8,[x8, #0x40]
7101a9def4  mov x22,#0xff0000000000
7101a9def8  ldr x11,[x10, #0x18]!
7101a9defc  movk x22,#0x1eff, LSL #48
7101a9df00  mov x23,x22
7101a9df04  cbz x11,0x7101a9df44
7101a9df08  mov x9,x10
7101a9df0c  ldrh w12,[x11, #0x20]
7101a9df10  cmp w12,w8
7101a9df14  cset w12,cc
7101a9df18  csel x9,x9,x11,cc
7101a9df1c  ldr x11,[x11, w12, UXTW #0x3]
7101a9df20  cbnz x11,0x7101a9df0c
7101a9df24  cmp x9,x10
7101a9df28  mov x23,x22
7101a9df2c  b.eq 0x7101a9df44
7101a9df30  ldrh w10,[x9, #0x20]
7101a9df34  cmp w10,w8
7101a9df38  mov x23,x22
7101a9df3c  b.hi 0x7101a9df44
7101a9df40  ldr x23,[x9, #0x28]
7101a9df44  adrp x1,0x71043ad000
7101a9df48  add x1,x1,#0x272
7101a9df4c  add x8,sp,#0x28
7101a9df50  mov x0,x19
7101a9df54  bl 0x7103776640
7101a9df58  adrp x1,0x71043ad000
7101a9df5c  add x1,x1,#0xa80
7101a9df60  add x8,sp,#0x38
7101a9df64  add x0,sp,#0x28
7101a9df68  bl 0x7103776910
7101a9df6c  ldr x24,[sp, #0x30]
7101a9df70  adrp x28,0x710523d000
7101a9df74  add x28,x28,#0x988
7101a9df78  stp x28,xzr,[sp, #0x28]
7101a9df7c  cbz x24,0x7101a9df98
7101a9df80  ldr x0,[x24, #0x18]
7101a9df84  stp x26,xzr,[x24, #0x10]
7101a9df88  cbz x0,0x7101a9df90
7101a9df8c  bl 0x710392eb40
7101a9df90  mov x0,x24
7101a9df94  bl 0x710392eb40
7101a9df98  ldr x0,[x21, #0x1e8]
7101a9df9c  mov x1,x23
7101a9dfa0  bl 0x7103240430
7101a9dfa4  ldr x8,[x0, #0x8]
7101a9dfa8  mov x1,x0
7101a9dfac  ldr x0,[sp, #0x40]
7101a9dfb0  ldr x8,[x8]
7101a9dfb4  cbz x8,0x7101a9dfc0
7101a9dfb8  bl 0x7103778b80
7101a9dfbc  b 0x7101a9dfc8
7101a9dfc0  mov w1,#0x1
7101a9dfc4  bl 0x71037790a0
7101a9dfc8  adrp x1,0x71043ad000
7101a9dfcc  add x1,x1,#0x272
7101a9dfd0  add x8,sp,#0x18
7101a9dfd4  mov x0,x19
7101a9dfd8  bl 0x7103776640
7101a9dfdc  adrp x1,0x710434a000
7101a9dfe0  add x1,x1,#0x68e
7101a9dfe4  add x8,sp,#0x28
7101a9dfe8  add x0,sp,#0x18
7101a9dfec  bl 0x7103776910
7101a9dff0  ldr x23,[sp, #0x20]
7101a9dff4  stp x28,xzr,[sp, #0x18]
7101a9dff8  cbz x23,0x7101a9e014
7101a9dffc  ldr x0,[x23, #0x18]
7101a9e000  stp x26,xzr,[x23, #0x10]
7101a9e004  cbz x0,0x7101a9e00c
7101a9e008  bl 0x710392eb40
7101a9e00c  mov x0,x23
7101a9e010  bl 0x710392eb40
7101a9e014  mov w0,#0x10
7101a9e018  mov w1,#0x20
7101a9e01c  str x26,[sp, #0x8]
7101a9e020  bl 0x710392e290
7101a9e024  cbnz x0,0x7101a9e06c
7101a9e028  adrp x8,0x7105332000
7101a9e02c  ldr x0,[x8, #0xf00]
7101a9e030  cbz x0,0x7101a9e068
7101a9e034  mov w8,#0x20
7101a9e038  str wzr,[sp, #0x48]
7101a9e03c  add x1,sp,#0x48
7101a9e040  str x8,[sp, #0x18]
7101a9e044  ldr x8,[x0]
7101a9e048  ldr x8,[x8, #0x30]
7101a9e04c  add x2,sp,#0x18
7101a9e050  blr x8
7101a9e054  tbz w0,#0x0,0x7101a9e068
7101a9e058  mov w0,#0x10
7101a9e05c  mov w1,#0x20
7101a9e060  bl 0x710392e290
7101a9e064  cbnz x0,0x7101a9e06c
7101a9e068  mov x0,xzr
7101a9e06c  stp xzr,xzr,[x0, #0x10]
7101a9e070  mov x24,x0
7101a9e074  stp xzr,xzr,[x0]
7101a9e078  ldr x8,[sp, #0x30]
7101a9e07c  str x0,[sp, #0x10]
7101a9e080  ldr x9,[x8]
7101a9e084  str x9,[x0]
7101a9e088  ldr x8,[x8, #0x8]
7101a9e08c  str x8,[x0, #0x8]
7101a9e090  ldr x23,[sp, #0x30]
7101a9e094  ldr x8,[x23, #0x10]
7101a9e098  str x8,[x24, #0x10]
7101a9e09c  ldr x8,[x23, #0x18]
7101a9e0a0  str x8,[x24, #0x18]
7101a9e0a4  ldr x8,[x20]
7101a9e0a8  mov w9,#0x50
7101a9e0ac  madd x8,x25,x9,x8
7101a9e0b0  ldr x10,[x27, #0x2e8]
7101a9e0b4  ldrh w8,[x8, #0x40]
7101a9e0b8  ldr x11,[x10, #0x18]!
7101a9e0bc  cbz x11,0x7101a9e0f4
7101a9e0c0  mov x9,x10
7101a9e0c4  ldrh w12,[x11, #0x20]
7101a9e0c8  cmp w12,w8
7101a9e0cc  cset w12,cc
7101a9e0d0  csel x9,x9,x11,cc
7101a9e0d4  ldr x11,[x11, w12, UXTW #0x3]
7101a9e0d8  cbnz x11,0x7101a9e0c4
7101a9e0dc  cmp x9,x10
7101a9e0e0  b.eq 0x7101a9e0f4
7101a9e0e4  ldrh w10,[x9, #0x20]
7101a9e0e8  cmp w10,w8
7101a9e0ec  b.hi 0x7101a9e0f4
7101a9e0f0  ldr x22,[x9, #0x28]
7101a9e0f4  add x0,sp,#0x8
7101a9e0f8  mov x1,x22
7101a9e0fc  bl 0x710337d450
7101a9e100  stp x26,xzr,[sp, #0x8]
7101a9e104  cbz x24,0x7101a9e110
7101a9e108  mov x0,x24
7101a9e10c  bl 0x710392eb40
7101a9e110  adrp x1,0x71043be000
7101a9e114  add x1,x1,#0xe80
7101a9e118  add x8,sp,#0x18
7101a9e11c  mov x0,x19
7101a9e120  bl 0x7103776910
7101a9e124  ldr x8,[x21, #0x8]
7101a9e128  mov w9,#0x50
7101a9e12c  madd x8,x25,x9,x8
7101a9e130  ldr x0,[x8, #0x48]
7101a9e134  ldrb w1,[x8, #0x45]
7101a9e138  ldr x22,[x21, #0x1e8]
7101a9e13c  mov w2,wzr
7101a9e140  bl 0x7103238a70
7101a9e144  tst x0,#0xffffffffff
7101a9e148  str x0,[sp, #0x48]
7101a9e14c  b.eq 0x7101a9e164
7101a9e150  ldr x0,[x22]
7101a9e154  ldrsw x2,[x0, #0x70]
7101a9e158  ldr w3,[x0, #0x68]
7101a9e15c  add x1,sp,#0x48
7101a9e160  bl 0x710323c4e0
7101a9e164  ldr x8,[x21, #0x8]
7101a9e168  mov w9,#0x50
7101a9e16c  madd x8,x25,x9,x8
7101a9e170  ldr x0,[x21, #0x1e8]
7101a9e174  ldrb w2,[x8, #0x45]
7101a9e178  ldr x1,[x8, #0x48]
7101a9e17c  mov w3,wzr
7101a9e180  bl 0x710323f330
7101a9e184  ldr x8,[x0, #0x8]
7101a9e188  ldr x8,[x8]
7101a9e18c  ldr x21,[sp, #0x20]
7101a9e190  cbz x8,0x7101a9e1a4
7101a9e194  mov x1,x0
7101a9e198  mov x0,x21
7101a9e19c  bl 0x7103778b80
7101a9e1a0  b 0x7101a9e1b0
7101a9e1a4  mov w1,#0x1
7101a9e1a8  mov x0,x21
7101a9e1ac  bl 0x71037790a0
7101a9e1b0  ldr x8,[x20]
7101a9e1b4  mov w9,#0x50
7101a9e1b8  madd x8,x25,x9,x8
7101a9e1bc  adrp x9,0x7104443000
7101a9e1c0  add x9,x9,#0x536
7101a9e1c4  ldrb w8,[x8, #0x4]
7101a9e1c8  ldr x0,[x19, #0x8]
7101a9e1cc  fmov s0,0x3f800000
7101a9e1d0  adrp x10,0x71042f8000
7101a9e1d4  add x10,x10,#0x1a7
7101a9e1d8  cmp w8,#0x0
7101a9e1dc  csel x1,x10,x9,eq
7101a9e1e0  bl 0x7103778300
7101a9e1e4  stp x26,xzr,[sp, #0x18]
7101a9e1e8  cbz x21,0x7101a9e1f4
7101a9e1ec  mov x0,x21
7101a9e1f0  bl 0x710392eb40
7101a9e1f4  stp x26,xzr,[sp, #0x28]
7101a9e1f8  cbz x23,0x7101a9e204
7101a9e1fc  mov x0,x23
7101a9e200  bl 0x710392eb40
7101a9e204  ldr x0,[sp, #0x40]
7101a9e208  stp x26,xzr,[sp, #0x38]
7101a9e20c  cbz x0,0x7101a9e214
7101a9e210  bl 0x710392eb40
7101a9e214  ldp x29,x30,[sp, #0xa0]
7101a9e218  ldp x20,x19,[sp, #0x90]
7101a9e21c  ldp x22,x21,[sp, #0x80]
7101a9e220  ldp x24,x23,[sp, #0x70]
7101a9e224  ldp x26,x25,[sp, #0x60]
7101a9e228  ldp x28,x27,[sp, #0x50]
7101a9e22c  add sp,sp,#0xb0
7101a9e230  ret
7101a9e234  mov x0,x20
7101a9e238  bl 0x71039c1330
