// addr:      710195dd10
// offset:    0x195dd10
// name:      FUN_710195dd10
// mangled:   
// size:      1100

710195dd10  sub sp,sp,#0xe0
710195dd14  stp x22,x21,[sp, #0xb0]
710195dd18  stp x20,x19,[sp, #0xc0]
710195dd1c  stp x29,x30,[sp, #0xd0]
710195dd20  add x29,sp,#0xd0
710195dd24  adrp x9,0x710532f000
710195dd28  mov x19,x0
710195dd2c  ldr w8,[x0, #0x13c]
710195dd30  ldr x0,[x9, #0x7c8]
710195dd34  cbz w8,0x710195ddb0
710195dd38  ldr x8,[x0, #0x8]
710195dd3c  ldrb w9,[x8, #0x6a]
710195dd40  cbz w9,0x710195e144
710195dd44  ldrb w8,[x8, #0x6b]
710195dd48  cbnz w8,0x710195e144
710195dd4c  ldr x0,[x19, #0x178]
710195dd50  mov x20,x1
710195dd54  mov w1,#0x1
710195dd58  bl 0x7101af86a0
710195dd5c  adrp x8,0x710532f000
710195dd60  ldr x8,[x8, #0x7f0]
710195dd64  ldr x0,[x8, #0x8]
710195dd68  mov w1,wzr
710195dd6c  bl 0x71032eb270
710195dd70  adrp x8,0x7105314000
710195dd74  ldr x8,[x8, #0x508]
710195dd78  ldr x8,[x8]
710195dd7c  mov w9,#0x4dd8
710195dd80  movk w9,#0x5b, LSL #16
710195dd84  add x21,x8,x9
710195dd88  mov w9,#0x4de8
710195dd8c  movk w9,#0x5b, LSL #16
710195dd90  add x22,x8,x9
710195dd94  ldr x8,[x22]
710195dd98  cbz x8,0x710195de3c
710195dd9c  ldr x8,[x21]
710195dda0  ldrb w9,[x8, #0x10]
710195dda4  and w9,w9,#0x1
710195dda8  strb w9,[x8, #0x10]
710195ddac  b 0x710195deb4
710195ddb0  bl 0x71032e5bf0
710195ddb4  ldr x8,[x19, #0x150]
710195ddb8  ldr x19,[x8, #0x80]
710195ddbc  ldr x0,[x19, #0x20]
710195ddc0  orr w1,wzr,#0x6
710195ddc4  orr w20,wzr,#0x6
710195ddc8  bl 0x7101df6680
710195ddcc  ldrsw x8,[x19, #0x12c]
710195ddd0  cmp w8,#0x13
710195ddd4  b.cs 0x710195e158
710195ddd8  add x8,x19,x8, LSL #0x2
710195dddc  str w20,[x8, #0xe0]
710195dde0  ldr x8,[x19, #0x28]
710195dde4  ldr x8,[x8, #0x80]
710195dde8  ldr w9,[x8, #0xe0]
710195ddec  cmp w9,#0x5
710195ddf0  b.eq 0x710195e144
710195ddf4  mov w9,#0xffffffff
710195ddf8  str x9,[x8, #0xe0]
710195ddfc  str w9,[x8, #0xe8]
710195de00  mov w9,#0x4
710195de04  stp xzr,xzr,[x8, #0x10]
710195de08  str wzr,[x8, #0xdc]
710195de0c  stur xzr,[x8, #0xd4]
710195de10  stur xzr,[x8, #0xcc]
710195de14  stur xzr,[x8, #0xc4]
710195de18  stur xzr,[x8, #0xbc]
710195de1c  stur xzr,[x8, #0xb4]
710195de20  stur xzr,[x8, #0xac]
710195de24  stur xzr,[x8, #0xa4]
710195de28  stur xzr,[x8, #0x9c]
710195de2c  stur xzr,[x8, #0x94]
710195de30  strb wzr,[x8, #0xec]
710195de34  str w9,[x8, #0x90]
710195de38  b 0x710195e144
710195de3c  mov w0,#0x10
710195de40  orr w1,wzr,#0x18
710195de44  bl 0x710392e290
710195de48  cbnz x0,0x710195de90
710195de4c  adrp x8,0x7105332000
710195de50  ldr x0,[x8, #0xf00]
710195de54  cbz x0,0x710195de8c
710195de58  orr w8,wzr,#0x18
710195de5c  str wzr,[sp, #0x20]
710195de60  add x1,sp,#0x20
710195de64  str x8,[sp, #0x68]
710195de68  ldr x8,[x0]
710195de6c  ldr x8,[x8, #0x30]
710195de70  add x2,sp,#0x68
710195de74  blr x8
710195de78  tbz w0,#0x0,0x710195de8c
710195de7c  mov w0,#0x10
710195de80  orr w1,wzr,#0x18
710195de84  bl 0x710392e290
710195de88  cbnz x0,0x710195de90
710195de8c  mov x0,xzr
710195de90  strb wzr,[x0, #0x10]
710195de94  str x21,[x0, #0x8]
710195de98  ldr x8,[x21]
710195de9c  str x8,[x0]
710195dea0  str x0,[x8, #0x8]
710195dea4  str x0,[x21]
710195dea8  ldr x8,[x22]
710195deac  add x8,x8,#0x1
710195deb0  str x8,[x22]
710195deb4  adrp x8,0x7105329000
710195deb8  ldr x8,[x8, #0xf98]
710195debc  ldr x8,[x8]
710195dec0  ldr x8,[x8, #0x40]
710195dec4  mov x9,x8
710195dec8  ldr x10,[x9, #0x90]!
710195decc  ldr x10,[x10]
710195ded0  ldrb w11,[x10, #0xf1]
710195ded4  mov x10,x9
710195ded8  cbnz w11,0x710195df2c
710195dedc  mov x10,x8
710195dee0  ldr x11,[x10, #0x98]!
710195dee4  ldr x11,[x11]
710195dee8  ldrb w11,[x11, #0xf1]
710195deec  cbnz w11,0x710195df2c
710195def0  mov x10,x8
710195def4  ldr x11,[x10, #0xa0]!
710195def8  ldr x11,[x11]
710195defc  ldrb w11,[x11, #0xf1]
710195df00  cbnz w11,0x710195df2c
710195df04  mov x10,x8
710195df08  ldr x11,[x10, #0xa8]!
710195df0c  ldr x11,[x11]
710195df10  ldrb w11,[x11, #0xf1]
710195df14  cbnz w11,0x710195df2c
710195df18  mov x10,x8
710195df1c  ldr x11,[x10, #0xb0]!
710195df20  ldr x11,[x11]
710195df24  ldrb w11,[x11, #0xf1]
710195df28  cbz w11,0x710195e138
710195df2c  sub x9,x10,x9
710195df30  asr x10,x9,#0x3
710195df34  cmp x10,#0x5
710195df38  b.cs 0x710195e158
710195df3c  add x8,x8,x10, LSL #0x3
710195df40  ldr x8,[x8, #0x90]
710195df44  ldr x8,[x8]
710195df48  ldrb w10,[x8, #0xf1]
710195df4c  cbz w10,0x710195df58
710195df50  ldrb w21,[x8, #0xf3]
710195df54  b 0x710195df5c
710195df58  mov w21,wzr
710195df5c  adrp x8,0x71050a6000
710195df60  add x8,x8,#0x230
710195df64  str x8,[sp, #0x8]
710195df68  ubfx w8,w9,#0x3,#0x8
710195df6c  add w1,w8,#0x1
710195df70  adrp x0,0x7104441000
710195df74  add x0,x0,#0x860
710195df78  add x8,sp,#0x68
710195df7c  add x22,sp,#0x68
710195df80  bl 0x71003a4ca0
710195df84  ldrsw x8,[sp, #0x6c]
710195df88  cbz w8,0x710195dfd8
710195df8c  add x9,x22,w8, UXTW 
710195df90  add x10,x22,#0x8
710195df94  add x11,x9,#0x8
710195df98  mov w9,#0xffffffff
710195df9c  adrp x12,0x7104754000
710195dfa0  add x12,x12,#0x84
710195dfa4  ldrb w13,[x10], #0x1
710195dfa8  sub w14,w13,#0x41
710195dfac  add w15,w13,#0x20
710195dfb0  cmp w14,#0x1a
710195dfb4  csel w13,w15,w13,cc
710195dfb8  eor w13,w13,w9
710195dfbc  and w13,w13,#0xff
710195dfc0  cmp x10,x11
710195dfc4  ldr w13,[x12, w13, UXTW #0x2]
710195dfc8  eor w9,w13,w9, LSR #0x8
710195dfcc  b.cc 0x710195dfa4
710195dfd0  mvn w1,w9
710195dfd4  b 0x710195dfdc
710195dfd8  mov x1,xzr
710195dfdc  bfm x1,x8,#0x20,#0x7
710195dfe0  adrp x8,0x710532f000
710195dfe4  ldr x8,[x8, #0x730]
710195dfe8  ldr x8,[x8, #0x8]
710195dfec  ldr x0,[x8, #0x368]
710195dff0  bl 0x710329eed0
710195dff4  str x0,[sp, #0x10]
710195dff8  strb w21,[sp, #0x18]
710195dffc  ldr x8,[x20, #0x8]
710195e000  mov x10,xzr
710195e004  adrp x9,0x710438a000
710195e008  add x9,x9,#0x95c
710195e00c  add x11,sp,#0x20
710195e010  str xzr,[sp, #0x20]
710195e014  b 0x710195e020
710195e018  add x10,x10,#0x2
710195e01c  strb w13,[x12, #0x9]
710195e020  add x13,x9,x10
710195e024  ldrb w14,[x13]
710195e028  cbz w14,0x710195e040
710195e02c  ldrb w13,[x13, #0x1]
710195e030  add x12,x11,x10
710195e034  strb w14,[x12, #0x8]
710195e038  cbnz w13,0x710195e018
710195e03c  add x10,x10,#0x1
710195e040  add x11,sp,#0x20
710195e044  add x12,x11,#0x8
710195e048  mov w9,#0x9dc5
710195e04c  movk w9,#0x811c, LSL #16
710195e050  strb wzr,[x12, w10, UXTW ]
710195e054  str w10,[sp, #0x24]
710195e058  ldrb w10,[sp, #0x28]
710195e05c  mov w12,w9
710195e060  cbz w10,0x710195e084
710195e064  add x11,x11,#0x9
710195e068  mov w13,#0x89
710195e06c  mov w12,w9
710195e070  mul w12,w12,w13
710195e074  and w10,w10,#0xff
710195e078  eor w12,w12,w10
710195e07c  ldrb w10,[x11], #0x1
710195e080  cbnz w10,0x710195e070
710195e084  str w12,[sp, #0x20]
710195e088  ldr x11,[x8, #0x38]
710195e08c  cbz x11,0x710195e0dc
710195e090  mov x10,xzr
710195e094  add x11,x11,#0x10
710195e098  add x12,sp,#0x68
710195e09c  str wzr,[sp, #0x68]
710195e0a0  b 0x710195e0ac
710195e0a4  add x10,x10,#0x2
710195e0a8  strb w13,[x14, #0x9]
710195e0ac  add x13,x11,x10
710195e0b0  ldrb w15,[x13]
710195e0b4  cbz w15,0x710195e0ec
710195e0b8  add w16,w10,#0x1
710195e0bc  add x14,x12,x10
710195e0c0  cmp w16,#0x3f
710195e0c4  strb w15,[x14, #0x8]
710195e0c8  b.cs 0x710195e0e8
710195e0cc  ldrb w13,[x13, #0x1]
710195e0d0  cbnz w13,0x710195e0a4
710195e0d4  add x10,x10,#0x1
710195e0d8  b 0x710195e0ec
710195e0dc  strb wzr,[sp, #0x70]
710195e0e0  str xzr,[sp, #0x68]
710195e0e4  b 0x710195e124
710195e0e8  add w10,w10,#0x1
710195e0ec  add x12,sp,#0x68
710195e0f0  add x11,x12,#0x8
710195e0f4  strb wzr,[x11, w10, UXTW ]
710195e0f8  ldrb w11,[sp, #0x70]
710195e0fc  str w10,[sp, #0x6c]
710195e100  cbz w11,0x710195e120
710195e104  add x10,x12,#0x9
710195e108  mov w12,#0x89
710195e10c  mul w9,w9,w12
710195e110  and w11,w11,#0xff
710195e114  eor w9,w9,w11
710195e118  ldrb w11,[x10], #0x1
710195e11c  cbnz w11,0x710195e10c
710195e120  str w9,[sp, #0x68]
710195e124  ldr x0,[x8, #0x20]
710195e128  add x1,sp,#0x20
710195e12c  add x2,sp,#0x68
710195e130  add x3,sp,#0x8
710195e134  bl 0x7103726240
710195e138  ldr w1,[x19, #0x1a0]
710195e13c  ldr x0,[x20, #0x8]
710195e140  bl 0x7103726af0
710195e144  ldp x29,x30,[sp, #0xd0]
710195e148  ldp x20,x19,[sp, #0xc0]
710195e14c  ldp x22,x21,[sp, #0xb0]
710195e150  add sp,sp,#0xe0
710195e154  ret
710195e158  bl 0x71039c2650
