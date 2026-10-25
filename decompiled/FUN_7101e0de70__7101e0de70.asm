// addr:      7101e0de70
// offset:    0x1e0de70
// name:      FUN_7101e0de70
// mangled:   
// size:      656

7101e0de70  sub sp,sp,#0x70
7101e0de74  str x23,[sp, #0x30]
7101e0de78  stp x22,x21,[sp, #0x40]
7101e0de7c  stp x20,x19,[sp, #0x50]
7101e0de80  stp x29,x30,[sp, #0x60]
7101e0de84  add x29,sp,#0x60
7101e0de88  mov x21,x1
7101e0de8c  mov x19,x0
7101e0de90  add x0,x0,#0x510
7101e0de94  adrp x1,0x710438c000
7101e0de98  add x1,x1,#0xff8
7101e0de9c  add x8,sp,#0x20
7101e0dea0  bl 0x7103776640
7101e0dea4  ldrb w8,[x21, #0x8]
7101e0dea8  cbz w8,0x7101e0dec0
7101e0deac  ldrb w8,[x21, #0xec]
7101e0deb0  cbnz w8,0x7101e0dec0
7101e0deb4  ldp x8,x9,[x21, #0x70]
7101e0deb8  cmp x9,x8
7101e0debc  b.ne 0x7101e0dee4
7101e0dec0  ldr x19,[sp, #0x28]
7101e0dec4  ldr x8,[x19, #0x8]
7101e0dec8  cbz x8,0x7101e0e0b8
7101e0decc  ldr x8,[x8, #0x18]
7101e0ded0  cbz x8,0x7101e0e0b8
7101e0ded4  ldrb w9,[x8, #0x58]
7101e0ded8  and w9,w9,#0xfe
7101e0dedc  strb w9,[x8, #0x58]
7101e0dee0  b 0x7101e0e0b8
7101e0dee4  mov x20,#0xff0000000000
7101e0dee8  adrp x1,0x7104319000
7101e0deec  add x1,x1,#0x3b1
7101e0def0  add x8,sp,#0x10
7101e0def4  add x0,sp,#0x20
7101e0def8  movk x20,#0xc1ff, LSL #48
7101e0defc  bl 0x7103776640
7101e0df00  ldr w22,[x21, #0x150]
7101e0df04  ldrb w8,[x21, #0x8]
7101e0df08  cbz w8,0x7101e0df88
7101e0df0c  ldrb w8,[x21, #0xec]
7101e0df10  cbz w8,0x7101e0df1c
7101e0df14  ldp x8,x9,[x21, #0x70]
7101e0df18  b 0x7101e0df28
7101e0df1c  ldp x8,x9,[x21, #0x70]
7101e0df20  cmp x9,x8
7101e0df24  b.eq 0x7101e0df88
7101e0df28  sub x9,x9,x8
7101e0df2c  lsr x10,x9,#0x3
7101e0df30  cmp w10,#0x1
7101e0df34  b.lt 0x7101e0df88
7101e0df38  mov x10,xzr
7101e0df3c  sbfx x11,x9,#0x3,#0x20
7101e0df40  ldr x12,[x8, x10, LSL #0x3]
7101e0df44  ldrb w12,[x12, #0x10]
7101e0df48  cmp w12,#0x1
7101e0df4c  b.eq 0x7101e0df60
7101e0df50  add x10,x10,#0x1
7101e0df54  cmp x10,x11
7101e0df58  b.lt 0x7101e0df40
7101e0df5c  b 0x7101e0df88
7101e0df60  tbnz w10,#0x1f,0x7101e0df88
7101e0df64  asr x9,x9,#0x3
7101e0df68  cmp x9,x10
7101e0df6c  b.ls 0x7101e0df88
7101e0df70  ldr x8,[x8, x10, LSL #0x3]
7101e0df74  ldr x20,[x8, #0x18]
7101e0df78  ldrb w21,[x8, #0x20]
7101e0df7c  ldrb w8,[x8, #0x48]
7101e0df80  sub w23,w8,#0x1
7101e0df84  b 0x7101e0df90
7101e0df88  mov w21,wzr
7101e0df8c  orr w23,wzr,#0xff
7101e0df90  adrp x1,0x7104308000
7101e0df94  add x1,x1,#0x9cf
7101e0df98  mov x8,sp
7101e0df9c  add x0,sp,#0x10
7101e0dfa0  bl 0x7103776910
7101e0dfa4  adrp x1,0x7104308000
7101e0dfa8  add x1,x1,#0x98e
7101e0dfac  mov x0,sp
7101e0dfb0  mov w2,#0x1
7101e0dfb4  mov w3,w22
7101e0dfb8  bl 0x710377a280
7101e0dfbc  ldr x0,[sp, #0x8]
7101e0dfc0  adrp x22,0x710523d000
7101e0dfc4  add x22,x22,#0x9a8
7101e0dfc8  stp x22,xzr,[sp]
7101e0dfcc  cbz x0,0x7101e0dfd4
7101e0dfd0  bl 0x710392eb40
7101e0dfd4  and x9,x23,#0xff
7101e0dfd8  and w8,w23,#0xff
7101e0dfdc  mov w10,#0x301
7101e0dfe0  movk w10,#0x2, LSL #16
7101e0dfe4  lsl x9,x9,#0x3
7101e0dfe8  lsr w9,w10,w9
7101e0dfec  cmp w8,#0x3
7101e0dff0  csel w1,w9,wzr,cc
7101e0dff4  mov w2,#0xffffffff
7101e0dff8  add x0,sp,#0x10
7101e0dffc  mov w3,wzr
7101e0e000  mov w4,wzr
7101e0e004  bl 0x71025b12c0
7101e0e008  ldr x23,[x19, #0x8]
7101e0e00c  mov w2,#0x2
7101e0e010  mov x0,x20
7101e0e014  mov w1,w21
7101e0e018  bl 0x7103238a70
7101e0e01c  tst x0,#0xffffffffff
7101e0e020  str x0,[sp]
7101e0e024  b.eq 0x7101e0e03c
7101e0e028  ldr x0,[x23]
7101e0e02c  ldrsw x2,[x0, #0x70]
7101e0e030  ldr w3,[x0, #0x68]
7101e0e034  mov x1,sp
7101e0e038  bl 0x710323c4e0
7101e0e03c  ldr x0,[x19, #0x8]
7101e0e040  mov w3,#0x2
7101e0e044  mov x1,x20
7101e0e048  mov w2,w21
7101e0e04c  bl 0x710323f330
7101e0e050  mov x20,x0
7101e0e054  adrp x1,0x7104401000
7101e0e058  add x1,x1,#0xd32
7101e0e05c  mov x8,sp
7101e0e060  add x0,sp,#0x10
7101e0e064  bl 0x7103776910
7101e0e068  ldr x19,[sp, #0x8]
7101e0e06c  mov x0,x19
7101e0e070  mov x1,x20
7101e0e074  bl 0x7103778b80
7101e0e078  stp x22,xzr,[sp]
7101e0e07c  cbz x19,0x7101e0e088
7101e0e080  mov x0,x19
7101e0e084  bl 0x710392eb40
7101e0e088  ldr x19,[sp, #0x18]
7101e0e08c  adrp x8,0x710523d000
7101e0e090  add x8,x8,#0x988
7101e0e094  stp x8,xzr,[sp, #0x10]
7101e0e098  cbz x19,0x7101e0e0b4
7101e0e09c  ldr x0,[x19, #0x18]
7101e0e0a0  stp x22,xzr,[x19, #0x10]
7101e0e0a4  cbz x0,0x7101e0e0ac
7101e0e0a8  bl 0x710392eb40
7101e0e0ac  mov x0,x19
7101e0e0b0  bl 0x710392eb40
7101e0e0b4  ldr x19,[sp, #0x28]
7101e0e0b8  adrp x8,0x710523d000
7101e0e0bc  add x8,x8,#0x988
7101e0e0c0  stp x8,xzr,[sp, #0x20]
7101e0e0c4  cbz x19,0x7101e0e0e8
7101e0e0c8  ldr x0,[x19, #0x18]
7101e0e0cc  adrp x8,0x710523d000
7101e0e0d0  add x8,x8,#0x9a8
7101e0e0d4  stp x8,xzr,[x19, #0x10]
7101e0e0d8  cbz x0,0x7101e0e0e0
7101e0e0dc  bl 0x710392eb40
7101e0e0e0  mov x0,x19
7101e0e0e4  bl 0x710392eb40
7101e0e0e8  ldp x29,x30,[sp, #0x60]
7101e0e0ec  ldr x23,[sp, #0x30]
7101e0e0f0  ldp x20,x19,[sp, #0x50]
7101e0e0f4  ldp x22,x21,[sp, #0x40]
7101e0e0f8  add sp,sp,#0x70
7101e0e0fc  ret
