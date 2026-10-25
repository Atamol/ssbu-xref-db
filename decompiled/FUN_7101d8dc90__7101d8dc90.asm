// addr:      7101d8dc90
// offset:    0x1d8dc90
// name:      FUN_7101d8dc90
// mangled:   
// size:      1068

7101d8dc90  sub sp,sp,#0xc0
7101d8dc94  stp x26,x25,[sp, #0x70]
7101d8dc98  stp x24,x23,[sp, #0x80]
7101d8dc9c  stp x22,x21,[sp, #0x90]
7101d8dca0  stp x20,x19,[sp, #0xa0]
7101d8dca4  stp x29,x30,[sp, #0xb0]
7101d8dca8  add x29,sp,#0xb0
7101d8dcac  add x20,x0,#0x120
7101d8dcb0  mov x19,x0
7101d8dcb4  adrp x1,0x710439d000
7101d8dcb8  add x1,x1,#0x945
7101d8dcbc  sub x8,x29,#0x50
7101d8dcc0  mov x0,x20
7101d8dcc4  bl 0x7103776640
7101d8dcc8  ldrsh x8,[x19, #0x15c]
7101d8dccc  cmn x8,#0x1
7101d8dcd0  b.eq 0x7101d8ddbc
7101d8dcd4  adrp x24,0x710532f000
7101d8dcd8  ldr x9,[x24, #0x730]
7101d8dcdc  ldr x9,[x9, #0x8]
7101d8dce0  ldr x9,[x9, #0x1d8]
7101d8dce4  add x10,x9,x8, LSL #0x1
7101d8dce8  ldrh w10,[x10, #0x60]
7101d8dcec  ldp x11,x9,[x9, #0x20]
7101d8dcf0  sub x9,x9,x11
7101d8dcf4  orr x23,xzr,#-0x3333333333333334
7101d8dcf8  movk x23,#0xcccd
7101d8dcfc  mov w12,#0x140
7101d8dd00  asr x9,x9,#0x6
7101d8dd04  mul x9,x9,x23
7101d8dd08  madd x11,x10,x12,x11
7101d8dd0c  adrp x25,0x7105182000
7101d8dd10  add x25,x25,#0xb08
7101d8dd14  cmp x9,x10
7101d8dd18  csel x9,x11,x25,hi
7101d8dd1c  ldrb w9,[x9, #0x5e]
7101d8dd20  cmp w9,#0x3
7101d8dd24  b.ne 0x7101d8de38
7101d8dd28  and x0,x8,#0xffff
7101d8dd2c  bl 0x71025c9890
7101d8dd30  tbz w0,#0x0,0x7101d8de68
7101d8dd34  add x0,sp,#0x40
7101d8dd38  sub x1,x29,#0x50
7101d8dd3c  add x20,x19,#0x198
7101d8dd40  add x21,x19,#0x10
7101d8dd44  bl 0x7103776390
7101d8dd48  ldr w8,[x19, #0x158]
7101d8dd4c  ldrh w3,[x19, #0x15c]
7101d8dd50  add x2,sp,#0x40
7101d8dd54  mov w4,#0x1
7101d8dd58  mov w6,#0x1
7101d8dd5c  mov w7,#0x1
7101d8dd60  mov x0,x20
7101d8dd64  mov x1,x21
7101d8dd68  add x24,x19,#0x158
7101d8dd6c  cmp w8,#0x1
7101d8dd70  ldr w8,[x19, #0x160]
7101d8dd74  str w8,[sp, #0x8]
7101d8dd78  cset w5,eq
7101d8dd7c  strb wzr,[sp]
7101d8dd80  bl 0x7101d8e0c0
7101d8dd84  ldr x20,[sp, #0x48]
7101d8dd88  adrp x8,0x710523d000
7101d8dd8c  add x8,x8,#0x988
7101d8dd90  stp x8,xzr,[sp, #0x40]
7101d8dd94  cbz x20,0x7101d8e038
7101d8dd98  ldr x0,[x20, #0x18]
7101d8dd9c  adrp x8,0x710523d000
7101d8dda0  add x8,x8,#0x9a8
7101d8dda4  stp x8,xzr,[x20, #0x10]
7101d8dda8  cbz x0,0x7101d8ddb0
7101d8ddac  bl 0x710392eb40
7101d8ddb0  mov x0,x20
7101d8ddb4  bl 0x710392eb40
7101d8ddb8  b 0x7101d8e038
7101d8ddbc  adrp x1,0x710426d000
7101d8ddc0  add x1,x1,#0xc22
7101d8ddc4  add x8,sp,#0x50
7101d8ddc8  sub x0,x29,#0x50
7101d8ddcc  bl 0x7103776910
7101d8ddd0  ldr x19,[sp, #0x58]
7101d8ddd4  mov w1,#0x1
7101d8ddd8  mov x0,x19
7101d8dddc  bl 0x71037790a0
7101d8dde0  adrp x20,0x710523d000
7101d8dde4  add x20,x20,#0x9a8
7101d8dde8  stp x20,xzr,[sp, #0x50]
7101d8ddec  cbz x19,0x7101d8ddf8
7101d8ddf0  mov x0,x19
7101d8ddf4  bl 0x710392eb40
7101d8ddf8  adrp x1,0x7104441000
7101d8ddfc  add x1,x1,#0x875
7101d8de00  add x8,sp,#0x50
7101d8de04  sub x0,x29,#0x50
7101d8de08  bl 0x7103776910
7101d8de0c  ldr x19,[sp, #0x58]
7101d8de10  mov w1,#0x1
7101d8de14  mov x0,x19
7101d8de18  bl 0x71037790a0
7101d8de1c  stp x20,xzr,[sp, #0x50]
7101d8de20  cbz x19,0x7101d8de2c
7101d8de24  mov x0,x19
7101d8de28  bl 0x710392eb40
7101d8de2c  sub x0,x29,#0x50
7101d8de30  bl 0x71025ae390
7101d8de34  b 0x7101d8e06c
7101d8de38  and w0,w8,#0xffff
7101d8de3c  ldrb w8,[x19, #0x338]
7101d8de40  cbz w8,0x7101d8de74
7101d8de44  ldr x8,[x24, #0x730]
7101d8de48  ldr x8,[x8, #0x8]
7101d8de4c  ldr x8,[x8, #0x1d8]
7101d8de50  orr w9,wzr,#0xffff
7101d8de54  cmp w0,w9
7101d8de58  b.eq 0x7101d8de7c
7101d8de5c  add x9,x8,w0, SXTH  #0x1
7101d8de60  ldrh w9,[x9, #0x60]
7101d8de64  b 0x7101d8de80
7101d8de68  ldrh w0,[x19, #0x15c]
7101d8de6c  ldrb w8,[x19, #0x338]
7101d8de70  cbnz w8,0x7101d8de44
7101d8de74  mov w21,wzr
7101d8de78  b 0x7101d8deac
7101d8de7c  mov w9,#0xffffffff
7101d8de80  ldp x10,x8,[x8, #0x20]
7101d8de84  sub x8,x8,x10
7101d8de88  asr x8,x8,#0x6
7101d8de8c  mul x8,x8,x23
7101d8de90  mov w11,#0x140
7101d8de94  madd x10,x9,x11,x10
7101d8de98  cmp x8,x9
7101d8de9c  csel x8,x10,x25,hi
7101d8dea0  ldrb w8,[x8, #0x5e]
7101d8dea4  cmp w8,#0x3
7101d8dea8  cset w21,eq
7101d8deac  bl 0x71025c9890
7101d8deb0  orr w26,w21,w0
7101d8deb4  add x0,sp,#0x30
7101d8deb8  sub x1,x29,#0x50
7101d8debc  add x22,x19,#0x198
7101d8dec0  add x21,x19,#0x10
7101d8dec4  bl 0x7103776390
7101d8dec8  ldr w8,[x19, #0x158]
7101d8decc  ldrh w3,[x19, #0x15c]
7101d8ded0  and w6,w26,#0x1
7101d8ded4  add x2,sp,#0x30
7101d8ded8  mov w4,#0x1
7101d8dedc  mov w7,#0x1
7101d8dee0  mov x0,x22
7101d8dee4  mov x1,x21
7101d8dee8  cmp w8,#0x1
7101d8deec  ldr w8,[x19, #0x160]
7101d8def0  str w8,[sp, #0x8]
7101d8def4  cset w5,eq
7101d8def8  strb wzr,[sp]
7101d8defc  bl 0x7101d8e0c0
7101d8df00  ldr x22,[sp, #0x38]
7101d8df04  adrp x8,0x710523d000
7101d8df08  add x8,x8,#0x988
7101d8df0c  stp x8,xzr,[sp, #0x30]
7101d8df10  cbz x22,0x7101d8df34
7101d8df14  ldr x0,[x22, #0x18]
7101d8df18  adrp x8,0x710523d000
7101d8df1c  add x8,x8,#0x9a8
7101d8df20  stp x8,xzr,[x22, #0x10]
7101d8df24  cbz x0,0x7101d8df2c
7101d8df28  bl 0x710392eb40
7101d8df2c  mov x0,x22
7101d8df30  bl 0x710392eb40
7101d8df34  ldr x8,[x24, #0x730]
7101d8df38  ldr x8,[x8, #0x8]
7101d8df3c  ldrsh x9,[x19, #0x15c]
7101d8df40  cmn x9,#0x1
7101d8df44  ldr x8,[x8, #0x1d8]
7101d8df48  b.eq 0x7101d8df54
7101d8df4c  add x9,x8,x9, LSL #0x1
7101d8df50  ldrh w9,[x9, #0x60]
7101d8df54  ldp x10,x8,[x8, #0x20]
7101d8df58  sub x8,x8,x10
7101d8df5c  asr x8,x8,#0x6
7101d8df60  mul x8,x8,x23
7101d8df64  mov w11,#0x140
7101d8df68  madd x10,x9,x11,x10
7101d8df6c  cmp x8,x9
7101d8df70  csel x8,x10,x25,hi
7101d8df74  ldrb w8,[x8, #0x5e]
7101d8df78  add x24,x19,#0x158
7101d8df7c  cmp w8,#0x3
7101d8df80  b.ne 0x7101d8e038
7101d8df84  ldr w8,[x24]
7101d8df88  cmp w8,#0x1
7101d8df8c  b.ne 0x7101d8e038
7101d8df90  tst w26,#0x1
7101d8df94  mov w8,#0x2
7101d8df98  csel w22,wzr,w8,ne
7101d8df9c  adrp x1,0x7104280000
7101d8dfa0  add x1,x1,#0xe29
7101d8dfa4  add x8,sp,#0x20
7101d8dfa8  mov x0,x20
7101d8dfac  add x23,x19,#0x1d0
7101d8dfb0  bl 0x7103776910
7101d8dfb4  ldrh w3,[x19, #0x15c]
7101d8dfb8  add x2,sp,#0x20
7101d8dfbc  mov x0,x23
7101d8dfc0  mov x1,x21
7101d8dfc4  mov w4,w22
7101d8dfc8  bl 0x7101d8e310
7101d8dfcc  ldr x0,[sp, #0x28]
7101d8dfd0  adrp x25,0x710523d000
7101d8dfd4  add x25,x25,#0x9a8
7101d8dfd8  stp x25,xzr,[sp, #0x20]
7101d8dfdc  cbz x0,0x7101d8dfe4
7101d8dfe0  bl 0x710392eb40
7101d8dfe4  adrp x1,0x710434a000
7101d8dfe8  add x1,x1,#0x71f
7101d8dfec  add x8,sp,#0x10
7101d8dff0  mov x0,x20
7101d8dff4  add x23,x19,#0x1e8
7101d8dff8  bl 0x7103776910
7101d8dffc  ldrh w3,[x19, #0x15c]
7101d8e000  add x2,sp,#0x10
7101d8e004  mov x0,x23
7101d8e008  mov x1,x21
7101d8e00c  mov w4,w22
7101d8e010  bl 0x7101d8e310
7101d8e014  ldr x0,[sp, #0x18]
7101d8e018  stp x25,xzr,[sp, #0x10]
7101d8e01c  cbz x0,0x7101d8e024
7101d8e020  bl 0x710392eb40
7101d8e024  ldr x0,[x19, #0x128]
7101d8e028  adrp x1,0x710436c000
7101d8e02c  add x1,x1,#0x7dc
7101d8e030  bl 0x7103778760
7101d8e034  b 0x7101d8e04c
7101d8e038  ldr x0,[x19, #0x128]
7101d8e03c  fmov s0,0x3f800000
7101d8e040  adrp x1,0x7104270000
7101d8e044  add x1,x1,#0x277
7101d8e048  bl 0x7103778300
7101d8e04c  ldr w8,[x24]
7101d8e050  cmp w8,#0x8
7101d8e054  b.ne 0x7101d8e06c
7101d8e058  ldr x0,[x19, #0x128]
7101d8e05c  fmov s0,0x3f800000
7101d8e060  adrp x1,0x710436c000
7101d8e064  add x1,x1,#0x7e9
7101d8e068  bl 0x7103778300
7101d8e06c  ldur x19,[x29, #-0x48]
7101d8e070  adrp x8,0x710523d000
7101d8e074  add x8,x8,#0x988
7101d8e078  stp x8,xzr,[x29, #-0x50]
7101d8e07c  cbz x19,0x7101d8e0a0
7101d8e080  ldr x0,[x19, #0x18]
7101d8e084  adrp x8,0x710523d000
7101d8e088  add x8,x8,#0x9a8
7101d8e08c  stp x8,xzr,[x19, #0x10]
7101d8e090  cbz x0,0x7101d8e098
7101d8e094  bl 0x710392eb40
7101d8e098  mov x0,x19
7101d8e09c  bl 0x710392eb40
7101d8e0a0  ldp x29,x30,[sp, #0xb0]
7101d8e0a4  ldp x20,x19,[sp, #0xa0]
7101d8e0a8  ldp x22,x21,[sp, #0x90]
7101d8e0ac  ldp x24,x23,[sp, #0x80]
7101d8e0b0  ldp x26,x25,[sp, #0x70]
7101d8e0b4  add sp,sp,#0xc0
7101d8e0b8  ret
