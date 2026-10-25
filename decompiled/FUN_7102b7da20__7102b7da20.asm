// addr:      7102b7da20
// offset:    0x2b7da20
// name:      FUN_7102b7da20
// mangled:   
// size:      20944

7102b7da20  str d10,[sp, #-0x80]!
7102b7da24  stp d9,d8,[sp, #0x10]
7102b7da28  stp x28,x27,[sp, #0x20]
7102b7da2c  stp x26,x25,[sp, #0x30]
7102b7da30  stp x24,x23,[sp, #0x40]
7102b7da34  stp x22,x21,[sp, #0x50]
7102b7da38  stp x20,x19,[sp, #0x60]
7102b7da3c  stp x29,x30,[sp, #0x70]
7102b7da40  add x29,sp,#0x70
7102b7da44  sub sp,sp,#0x3a0
7102b7da48  mov x26,x0
7102b7da4c  bl 0x71025d9250
7102b7da50  add x8,x26,#0x7f0
7102b7da54  mov w0,#0x10
7102b7da58  orr w1,wzr,#0x38
7102b7da5c  str x8,[sp, #0x50]
7102b7da60  bl 0x710392e290
7102b7da64  cbnz x0,0x7102b7daac
7102b7da68  adrp x8,0x7105332000
7102b7da6c  ldr x0,[x8, #0xf00]
7102b7da70  cbz x0,0x7102b7daa8
7102b7da74  orr w8,wzr,#0x38
7102b7da78  stur wzr,[x29, #-0x100]
7102b7da7c  sub x1,x29,#0x100
7102b7da80  str x8,[sp, #0x140]
7102b7da84  ldr x8,[x0]
7102b7da88  ldr x8,[x8, #0x30]
7102b7da8c  add x2,sp,#0x140
7102b7da90  blr x8
7102b7da94  tbz w0,#0x0,0x7102b7daa8
7102b7da98  mov w0,#0x10
7102b7da9c  orr w1,wzr,#0x38
7102b7daa0  bl 0x710392e290
7102b7daa4  cbnz x0,0x7102b7daac
7102b7daa8  mov x0,xzr
7102b7daac  ldrb w8,[x26, #0x18]
7102b7dab0  ldr x9,[sp, #0x50]
7102b7dab4  str wzr,[x0, #0x30]
7102b7dab8  stp x26,x9,[x0]
7102b7dabc  mov x9,#0x100000001
7102b7dac0  strb w8,[x0, #0x2c]
7102b7dac4  mov w8,#0x1
7102b7dac8  str x9,[x0, #0x10]
7102b7dacc  stp xzr,xzr,[x0, #0x18]
7102b7dad0  strb w8,[x0, #0x2d]
7102b7dad4  ldr w8,[x26, #0x848]
7102b7dad8  ucvtf s0,w8
7102b7dadc  str s0,[x0, #0x28]
7102b7dae0  ldr w9,[x26, #0x84c]
7102b7dae4  subs w8,w9,w8
7102b7dae8  b.ls 0x7102b7db2c
7102b7daec  ldr x9,[x26, #0x340]
7102b7daf0  ldp w10,w11,[x9]
7102b7daf4  str w11,[x9]
7102b7daf8  ldp w11,w12,[x9, #0x8]
7102b7dafc  eor w10,w10,w10, LSL #0xb
7102b7db00  eor w10,w10,w10, LSR #0x8
7102b7db04  eor w10,w10,w12
7102b7db08  eor w10,w10,w12, LSR #0x13
7102b7db0c  stp w11,w12,[x9, #0x4]
7102b7db10  str w10,[x9, #0xc]
7102b7db14  udiv w9,w10,w8
7102b7db18  ldr s1,[x0, #0x28]
7102b7db1c  msub w8,w9,w8,w10
7102b7db20  ucvtf s0,w8
7102b7db24  fadd s0,s1,s0
7102b7db28  str s0,[x0, #0x28]
7102b7db2c  ldr x8,[x26, #0x738]
7102b7db30  str x0,[x26, #0x738]
7102b7db34  cbz x8,0x7102b7db40
7102b7db38  mov x0,x8
7102b7db3c  bl 0x710392eb40
7102b7db40  mov w0,#0x10
7102b7db44  mov w1,#0x20
7102b7db48  bl 0x710392e290
7102b7db4c  cbnz x0,0x7102b7db84
7102b7db50  adrp x8,0x7105332000
7102b7db54  ldr x0,[x8, #0xf00]
7102b7db58  mov w8,#0x20
7102b7db5c  stur wzr,[x29, #-0x100]
7102b7db60  sub x1,x29,#0x100
7102b7db64  str x8,[sp, #0x140]
7102b7db68  ldr x8,[x0]
7102b7db6c  ldr x8,[x8, #0x30]
7102b7db70  add x2,sp,#0x140
7102b7db74  blr x8
7102b7db78  mov w0,#0x10
7102b7db7c  mov w1,#0x20
7102b7db80  bl 0x710392e290
7102b7db84  ldr x8,[sp, #0x50]
7102b7db88  stp x26,x8,[x0]
7102b7db8c  ldr x8,[x26, #0x308]
7102b7db90  ldp x9,x8,[x8, #0x118]
7102b7db94  stp x9,x8,[x0, #0x10]
7102b7db98  ldr x8,[x26, #0x7c8]
7102b7db9c  str x0,[x26, #0x7c8]
7102b7dba0  cbz x8,0x7102b7dbac
7102b7dba4  mov x0,x8
7102b7dba8  bl 0x710392eb40
7102b7dbac  mov w0,#0x10
7102b7dbb0  orr w1,wzr,#0x60
7102b7dbb4  bl 0x710392e290
7102b7dbb8  mov x23,x0
7102b7dbbc  cbnz x0,0x7102b7dc08
7102b7dbc0  adrp x8,0x7105332000
7102b7dbc4  ldr x0,[x8, #0xf00]
7102b7dbc8  cbz x0,0x7102b7dc04
7102b7dbcc  orr w8,wzr,#0x60
7102b7dbd0  stur wzr,[x29, #-0x100]
7102b7dbd4  sub x1,x29,#0x100
7102b7dbd8  str x8,[sp, #0x140]
7102b7dbdc  ldr x8,[x0]
7102b7dbe0  ldr x8,[x8, #0x30]
7102b7dbe4  add x2,sp,#0x140
7102b7dbe8  blr x8
7102b7dbec  tbz w0,#0x0,0x7102b7dc04
7102b7dbf0  mov w0,#0x10
7102b7dbf4  orr w1,wzr,#0x60
7102b7dbf8  bl 0x710392e290
7102b7dbfc  mov x23,x0
7102b7dc00  cbnz x0,0x7102b7dc08
7102b7dc04  mov x23,xzr
7102b7dc08  mov x8,x23
7102b7dc0c  adrp x19,0x71052b9000
7102b7dc10  str xzr,[x8, #0x40]!
7102b7dc14  stp x26,x8,[sp, #0x88]
7102b7dc18  strb wzr,[x23, #0x58]
7102b7dc1c  stp xzr,xzr,[x23, #0x48]
7102b7dc20  stp xzr,xzr,[x23, #0x30]
7102b7dc24  stp xzr,xzr,[x23, #0x20]
7102b7dc28  stp xzr,xzr,[x23, #0x10]
7102b7dc2c  stp xzr,xzr,[x23]
7102b7dc30  ldr x8,[x19, #0x4f8]
7102b7dc34  ldr x8,[x8]
7102b7dc38  ldr w9,[x8, #0xa0]
7102b7dc3c  cmp w9,#0x1
7102b7dc40  b.lt 0x7102b7e058
7102b7dc44  add x9,x26,#0x870
7102b7dc48  stur x9,[x29, #-0x68]
7102b7dc4c  add x9,x26,#0x874
7102b7dc50  str x9,[sp, #0x80]
7102b7dc54  add x9,x26,#0x880
7102b7dc58  str x9,[sp, #0x68]
7102b7dc5c  add x9,x26,#0x884
7102b7dc60  str x9,[sp, #0x60]
7102b7dc64  add x9,x26,#0x890
7102b7dc68  mov x21,#0x2b2d
7102b7dc6c  movk x21,#0x6bb, LSL #16
7102b7dc70  mov w20,wzr
7102b7dc74  str x9,[sp, #0x78]
7102b7dc78  add x9,x26,#0x894
7102b7dc7c  movk x21,#0x11, LSL #32
7102b7dc80  str x9,[sp, #0x70]
7102b7dc84  ldr x10,[x8, #0x20]
7102b7dc88  mov w9,w20
7102b7dc8c  cbz x10,0x7102b7dc98
7102b7dc90  cbz w20,0x7102b7dd1c
7102b7dc94  sub w9,w20,#0x1
7102b7dc98  ldr x10,[x8, #0x28]
7102b7dc9c  cbz x10,0x7102b7dca8
7102b7dca0  cbz w9,0x7102b7dd24
7102b7dca4  sub w9,w9,#0x1
7102b7dca8  ldr x10,[x8, #0x30]
7102b7dcac  cbz x10,0x7102b7dcb8
7102b7dcb0  cbz w9,0x7102b7dd2c
7102b7dcb4  sub w9,w9,#0x1
7102b7dcb8  ldr x10,[x8, #0x38]
7102b7dcbc  cbz x10,0x7102b7dcc8
7102b7dcc0  cbz w9,0x7102b7dd34
7102b7dcc4  sub w9,w9,#0x1
7102b7dcc8  ldr x10,[x8, #0x40]
7102b7dccc  cbz x10,0x7102b7dcd8
7102b7dcd0  cbz w9,0x7102b7dd3c
7102b7dcd4  sub w9,w9,#0x1
7102b7dcd8  ldr x10,[x8, #0x48]
7102b7dcdc  cbz x10,0x7102b7dce8
7102b7dce0  cbz w9,0x7102b7dd44
7102b7dce4  sub w9,w9,#0x1
7102b7dce8  ldr x10,[x8, #0x50]
7102b7dcec  cbz x10,0x7102b7dcf8
7102b7dcf0  cbz w9,0x7102b7dd4c
7102b7dcf4  sub w9,w9,#0x1
7102b7dcf8  ldr x8,[x8, #0x58]
7102b7dcfc  cmp x8,#0x0
7102b7dd00  ccmp w9,#0x0,#0x0,ne
7102b7dd04  mov w10,#0xffffffff
7102b7dd08  orr w11,wzr,#0x7
7102b7dd0c  csel x24,x11,x10,eq
7102b7dd10  cbnz w9,0x7102b81da0
7102b7dd14  cbnz x8,0x7102b7dd50
7102b7dd18  b 0x7102b81da0
7102b7dd1c  mov x24,xzr
7102b7dd20  b 0x7102b7dd50
7102b7dd24  mov w24,#0x1
7102b7dd28  b 0x7102b7dd50
7102b7dd2c  mov w24,#0x2
7102b7dd30  b 0x7102b7dd50
7102b7dd34  orr w24,wzr,#0x3
7102b7dd38  b 0x7102b7dd50
7102b7dd3c  mov w24,#0x4
7102b7dd40  b 0x7102b7dd50
7102b7dd44  mov w24,#0x5
7102b7dd48  b 0x7102b7dd50
7102b7dd4c  orr w24,wzr,#0x6
7102b7dd50  mov w0,#0x10
7102b7dd54  orr w1,wzr,#0x70
7102b7dd58  bl 0x710392e290
7102b7dd5c  mov x22,x0
7102b7dd60  cbnz x0,0x7102b7ddac
7102b7dd64  adrp x8,0x7105332000
7102b7dd68  ldr x0,[x8, #0xf00]
7102b7dd6c  cbz x0,0x7102b7dda8
7102b7dd70  orr w8,wzr,#0x70
7102b7dd74  stur wzr,[x29, #-0x100]
7102b7dd78  sub x1,x29,#0x100
7102b7dd7c  str x8,[sp, #0x140]
7102b7dd80  ldr x8,[x0]
7102b7dd84  ldr x8,[x8, #0x30]
7102b7dd88  add x2,sp,#0x140
7102b7dd8c  blr x8
7102b7dd90  tbz w0,#0x0,0x7102b7dda8
7102b7dd94  mov w0,#0x10
7102b7dd98  orr w1,wzr,#0x70
7102b7dd9c  bl 0x710392e290
7102b7dda0  mov x22,x0
7102b7dda4  cbnz x0,0x7102b7ddac
7102b7dda8  mov x22,xzr
7102b7ddac  stp xzr,xzr,[x22, #0x50]
7102b7ddb0  cmp w24,#0x8
7102b7ddb4  stp xzr,xzr,[x22, #0x40]
7102b7ddb8  str w24,[x22]
7102b7ddbc  str wzr,[x22, #0x34]
7102b7ddc0  strb wzr,[x22, #0x38]
7102b7ddc4  strb wzr,[x22, #0x30]
7102b7ddc8  stp xzr,xzr,[x22, #0x20]
7102b7ddcc  stp xzr,xzr,[x22, #0x10]
7102b7ddd0  ldr x8,[sp, #0x50]
7102b7ddd4  stp x26,x8,[x22, #0x60]
7102b7ddd8  b.cs 0x7102b81da0
7102b7dddc  ldr x8,[x19, #0x4f8]
7102b7dde0  ldr x8,[x8]
7102b7dde4  sxtw x24,w24
7102b7dde8  add x8,x8,x24, LSL #0x3
7102b7ddec  ldr x8,[x8, #0x20]
7102b7ddf0  ldrsw x8,[x8, #0x18]
7102b7ddf4  movi v2.2D,#0x0
7102b7ddf8  cmp w8,#0x75
7102b7ddfc  mov x9,x21
7102b7de00  b.hi 0x7102b7de10
7102b7de04  adrp x9,0x710453c000
7102b7de08  add x9,x9,#0x1c0
7102b7de0c  ldr x9,[x9, x8, LSL #0x3]
7102b7de10  ldr x12,[x26, #0x898]
7102b7de14  ldr x11,[x26, #0x8a0]
7102b7de18  cmp x12,x11
7102b7de1c  b.eq 0x7102b7de68
7102b7de20  mov x10,xzr
7102b7de24  mov x13,x12
7102b7de28  ldr x14,[x13], #0x18
7102b7de2c  eor x14,x14,x9
7102b7de30  tst x14,#0xffffffffff
7102b7de34  csel x10,x12,x10,eq
7102b7de38  cmp x11,x13
7102b7de3c  mov x12,x13
7102b7de40  b.ne 0x7102b7de28
7102b7de44  cbz x10,0x7102b7de68
7102b7de48  mov v0.16B,v2.16B
7102b7de4c  add x8,x10,#0x8
7102b7de50  add x9,x10,#0x10
7102b7de54  ld1 {v0.S}[0],[x8]
7102b7de58  add x8,x10,#0xc
7102b7de5c  ld1 {v0.S}[1],[x8]
7102b7de60  add x8,x10,#0x14
7102b7de64  b 0x7102b7def4
7102b7de68  cmp w8,#0x50
7102b7de6c  b.hi 0x7102b7debc
7102b7de70  adrp x9,0x710517d000
7102b7de74  add x9,x9,#0x300
7102b7de78  ldr x8,[x9, x8, LSL #0x3]
7102b7de7c  ldr w8,[x8, #0x4]
7102b7de80  sub w9,w8,#0x2
7102b7de84  cmp w9,#0x2
7102b7de88  b.cc 0x7102b7dedc
7102b7de8c  cmp w8,#0x1
7102b7de90  b.eq 0x7102b7debc
7102b7de94  mov v1.16B,v2.16B
7102b7de98  mov v0.16B,v2.16B
7102b7de9c  cbnz w8,0x7102b7df00
7102b7dea0  mov v0.16B,v2.16B
7102b7dea4  add x8,x26,#0x878
7102b7dea8  ld1 {v0.S}[0],[x8]
7102b7deac  add x8,x26,#0x87c
7102b7deb0  ld1 {v0.S}[1],[x8]
7102b7deb4  ldp x8,x9,[sp, #0x60]
7102b7deb8  b 0x7102b7def4
7102b7debc  mov v0.16B,v2.16B
7102b7dec0  add x8,x26,#0x868
7102b7dec4  ldur x9,[x29, #-0x68]
7102b7dec8  ld1 {v0.S}[0],[x8]
7102b7decc  add x8,x26,#0x86c
7102b7ded0  ld1 {v0.S}[1],[x8]
7102b7ded4  ldr x8,[sp, #0x80]
7102b7ded8  b 0x7102b7def4
7102b7dedc  mov v0.16B,v2.16B
7102b7dee0  add x8,x26,#0x888
7102b7dee4  ld1 {v0.S}[0],[x8]
7102b7dee8  add x8,x26,#0x88c
7102b7deec  ld1 {v0.S}[1],[x8]
7102b7def0  ldp x8,x9,[sp, #0x70]
7102b7def4  mov v1.16B,v2.16B
7102b7def8  ld1 {v1.S}[0],[x9]
7102b7defc  ld1 {v1.S}[1],[x8]
7102b7df00  fsub v2.4S,v0.4S,v1.4S
7102b7df04  lsl x8,x24,#0x3
7102b7df08  fadd v0.4S,v1.4S,v0.4S
7102b7df0c  stp q2,q0,[x22, #0x10]
7102b7df10  ldr x0,[x23, x8, LSL #0x0]
7102b7df14  str x22,[x23, x8, LSL #0x0]
7102b7df18  cbz x0,0x7102b7df24
7102b7df1c  bl 0x710392eb40
7102b7df20  ldr x22,[x23, x24, LSL #0x3]
7102b7df24  ldp x9,x8,[x23, #0x48]
7102b7df28  cmp x9,x8
7102b7df2c  b.cs 0x7102b7df44
7102b7df30  str x22,[x9]
7102b7df34  ldr x8,[x23, #0x48]
7102b7df38  add x8,x8,#0x8
7102b7df3c  str x8,[x23, #0x48]
7102b7df40  b 0x7102b7e040
7102b7df44  ldr x10,[sp, #0x90]
7102b7df48  ldr x24,[x10]
7102b7df4c  sub x25,x9,x24
7102b7df50  asr x28,x25,#0x3
7102b7df54  add x9,x28,#0x1
7102b7df58  lsr x10,x9,#0x3d
7102b7df5c  cbnz x10,0x7102b82bc0
7102b7df60  sub x8,x8,x24
7102b7df64  asr x10,x8,#0x3
7102b7df68  orr x11,xzr,#0xffffffffffffffe
7102b7df6c  cmp x10,x11
7102b7df70  b.hi 0x7102b7df90
7102b7df74  asr x8,x8,#0x2
7102b7df78  cmp x8,x9
7102b7df7c  csel x21,x9,x8,cc
7102b7df80  cbz x21,0x7102b7dff4
7102b7df84  lsr x8,x21,#0x3d
7102b7df88  cbz x8,0x7102b7df94
7102b7df8c  b 0x7102b81da0
7102b7df90  orr x21,xzr,#0x1fffffffffffffff
7102b7df94  lsl x8,x21,#0x3
7102b7df98  cmp x8,#0x0
7102b7df9c  csinc x27,x8,xzr,ne
7102b7dfa0  mov w0,#0x10
7102b7dfa4  mov x1,x27
7102b7dfa8  bl 0x710392e290
7102b7dfac  mov x26,x0
7102b7dfb0  cbnz x0,0x7102b7dff8
7102b7dfb4  adrp x8,0x7105332000
7102b7dfb8  ldr x0,[x8, #0xf00]
7102b7dfbc  cbz x0,0x7102b7dff4
7102b7dfc0  stur wzr,[x29, #-0x100]
7102b7dfc4  str x27,[sp, #0x140]
7102b7dfc8  ldr x8,[x0]
7102b7dfcc  ldr x8,[x8, #0x30]
7102b7dfd0  sub x1,x29,#0x100
7102b7dfd4  add x2,sp,#0x140
7102b7dfd8  blr x8
7102b7dfdc  tbz w0,#0x0,0x7102b7dff4
7102b7dfe0  mov w0,#0x10
7102b7dfe4  mov x1,x27
7102b7dfe8  bl 0x710392e290
7102b7dfec  mov x26,x0
7102b7dff0  cbnz x0,0x7102b7dff8
7102b7dff4  mov x26,xzr
7102b7dff8  add x27,x26,x28, LSL #0x3
7102b7dffc  add x21,x26,x21, LSL #0x3
7102b7e000  cmp x25,#0x1
7102b7e004  str x22,[x27], #0x8
7102b7e008  b.lt 0x7102b7e01c
7102b7e00c  mov x0,x26
7102b7e010  mov x1,x24
7102b7e014  mov x2,x25
7102b7e018  bl 0x71039c00e0
7102b7e01c  stp x26,x27,[x23, #0x40]
7102b7e020  ldr x26,[sp, #0x88]
7102b7e024  str x21,[x23, #0x50]
7102b7e028  mov x21,#0x2b2d
7102b7e02c  movk x21,#0x6bb, LSL #16
7102b7e030  movk x21,#0x11, LSL #32
7102b7e034  cbz x24,0x7102b7e040
7102b7e038  mov x0,x24
7102b7e03c  bl 0x710392eb40
7102b7e040  ldr x8,[x19, #0x4f8]
7102b7e044  ldr x8,[x8]
7102b7e048  ldr w9,[x8, #0xa0]
7102b7e04c  add w20,w20,#0x1
7102b7e050  cmp w20,w9
7102b7e054  b.lt 0x7102b7dc84
7102b7e058  adrp x8,0x710532a000
7102b7e05c  ldr x8,[x8, #0x9d8]
7102b7e060  ldr x8,[x8]
7102b7e064  ldr x9,[x8, #0x1b8]
7102b7e068  mov x8,x9
7102b7e06c  ldr x10,[x8, #0x50]!
7102b7e070  cbz x10,0x7102b7e0b4
7102b7e074  add x11,x9,#0x50
7102b7e078  b 0x7102b7e084
7102b7e07c  mov x11,x10
7102b7e080  mov x10,x12
7102b7e084  ldr x12,[x10, #0x20]
7102b7e088  cmp x12,x26
7102b7e08c  b.ls 0x7102b7e0a0
7102b7e090  ldr x12,[x10]
7102b7e094  mov x11,x10
7102b7e098  cbnz x12,0x7102b7e07c
7102b7e09c  b 0x7102b7e0b8
7102b7e0a0  b.cs 0x7102b7e0b8
7102b7e0a4  ldr x12,[x10, #0x8]!
7102b7e0a8  mov x11,x10
7102b7e0ac  cbnz x12,0x7102b7e07c
7102b7e0b0  b 0x7102b7e0b8
7102b7e0b4  mov x11,x8
7102b7e0b8  ldr x10,[x11]
7102b7e0bc  mov w11,#0x1
7102b7e0c0  ldr x10,[x10, #0x28]
7102b7e0c4  strb w11,[x10]
7102b7e0c8  ldr x10,[x9, #0x20]
7102b7e0cc  cmp x10,x26
7102b7e0d0  b.ne 0x7102b7e134
7102b7e0d4  ldr x10,[x8]
7102b7e0d8  cbz x10,0x7102b7e118
7102b7e0dc  add x8,x9,#0x50
7102b7e0e0  b 0x7102b7e0ec
7102b7e0e4  mov x8,x10
7102b7e0e8  mov x10,x9
7102b7e0ec  ldr x9,[x10, #0x20]
7102b7e0f0  cmp x9,x26
7102b7e0f4  b.ls 0x7102b7e108
7102b7e0f8  ldr x9,[x10]
7102b7e0fc  mov x8,x10
7102b7e100  cbnz x9,0x7102b7e0e4
7102b7e104  b 0x7102b7e118
7102b7e108  b.cs 0x7102b7e118
7102b7e10c  ldr x9,[x10, #0x8]!
7102b7e110  mov x8,x10
7102b7e114  cbnz x9,0x7102b7e0e4
7102b7e118  ldr x8,[x8]
7102b7e11c  ldr x1,[x8, #0x28]
7102b7e120  ldr x0,[x1, #0x30]
7102b7e124  cbz x0,0x7102b81da0
7102b7e128  ldr x8,[x0]
7102b7e12c  ldr x8,[x8, #0x30]
7102b7e130  blr x8
7102b7e134  ldr x20,[x26, #0x740]
7102b7e138  str x23,[x26, #0x740]
7102b7e13c  cbz x20,0x7102b7e154
7102b7e140  mov x0,x20
7102b7e144  bl 0x7102b88d50
7102b7e148  mov x0,x20
7102b7e14c  bl 0x710392eb40
7102b7e150  ldr x23,[x26, #0x740]
7102b7e154  mov w1,#0x7d0
7102b7e158  mov w0,#0x10
7102b7e15c  bl 0x710392e290
7102b7e160  mov x27,x0
7102b7e164  cbnz x0,0x7102b7e1b0
7102b7e168  adrp x8,0x7105332000
7102b7e16c  ldr x0,[x8, #0xf00]
7102b7e170  cbz x0,0x7102b7e1ac
7102b7e174  mov w8,#0x7d0
7102b7e178  stur wzr,[x29, #-0x100]
7102b7e17c  sub x1,x29,#0x100
7102b7e180  str x8,[sp, #0x140]
7102b7e184  ldr x8,[x0]
7102b7e188  ldr x8,[x8, #0x30]
7102b7e18c  add x2,sp,#0x140
7102b7e190  blr x8
7102b7e194  tbz w0,#0x0,0x7102b7e1ac
7102b7e198  mov w1,#0x7d0
7102b7e19c  mov w0,#0x10
7102b7e1a0  bl 0x710392e290
7102b7e1a4  mov x27,x0
7102b7e1a8  cbnz x0,0x7102b7e1b0
7102b7e1ac  mov x27,xzr
7102b7e1b0  ldrb w8,[x26, #0x18]
7102b7e1b4  ldr x9,[sp, #0x50]
7102b7e1b8  mov x10,x27
7102b7e1bc  stp x26,x9,[x27]
7102b7e1c0  mov x9,#0x6400000000
7102b7e1c4  strb w8,[x27, #0x10]
7102b7e1c8  movi v0.2D,#0x0
7102b7e1cc  orr x8,xzr,#0xf0000000f
7102b7e1d0  stp x23,x9,[x27, #0x18]
7102b7e1d4  orr x9,xzr,#0xc00000000
7102b7e1d8  str xzr,[x10, #0x50]!
7102b7e1dc  str x8,[x27, #0x68]
7102b7e1e0  orr w8,wzr,#0xff7fffff
7102b7e1e4  str w8,[x27, #0x80]
7102b7e1e8  stur x9,[x27, #0x94]
7102b7e1ec  orr w9,wzr,#0xc
7102b7e1f0  str w8,[x27, #0xb0]
7102b7e1f4  mov x8,x27
7102b7e1f8  str x10,[sp, #0x38]
7102b7e1fc  stur xzr,[x27, #0x8c]
7102b7e200  stur xzr,[x27, #0x84]
7102b7e204  str w9,[x27, #0x9c]
7102b7e208  stp xzr,xzr,[x27, #0x58]
7102b7e20c  str q0,[x27, #0x70]
7102b7e210  str q0,[x27, #0xa0]
7102b7e214  str xzr,[x8, #0xc8]!
7102b7e218  stur xzr,[x8, #-0xc]
7102b7e21c  stur xzr,[x8, #-0x14]
7102b7e220  stp xzr,xzr,[x8, #0x8]
7102b7e224  str x8,[sp, #0x20]
7102b7e228  ldp x8,x9,[x26, #0x1a8]
7102b7e22c  cmp x9,x8
7102b7e230  b.eq 0x7102b82be0
7102b7e234  ldr x8,[x8]
7102b7e238  add x23,x27,#0xe0
7102b7e23c  mov w2,#0x2e8
7102b7e240  mov x0,x23
7102b7e244  mov w1,wzr
7102b7e248  str x8,[sp, #0x68]
7102b7e24c  bl 0x71039c02a0
7102b7e250  ldr x9,[x26, #0x838]
7102b7e254  ldr x11,[x26, #0x830]
7102b7e258  cmp x9,x11
7102b7e25c  str x27,[sp, #0x90]
7102b7e260  str x23,[sp, #0x78]
7102b7e264  b.ne 0x7102b7e278
7102b7e268  mov x20,xzr
7102b7e26c  mov x8,xzr
7102b7e270  add x19,x27,#0xe8
7102b7e274  b 0x7102b7e43c
7102b7e278  add x8,x27,#0x3b0
7102b7e27c  str x8,[sp, #0x80]
7102b7e280  ldr x10,[x26, #0x820]
7102b7e284  ldr x8,[x26, #0x818]
7102b7e288  mov x13,xzr
7102b7e28c  stur wzr,[x29, #-0x68]
7102b7e290  ldr w21,[x11, x13, LSL #0x2]
7102b7e294  cmp x10,x8
7102b7e298  b.ne 0x7102b7e2a4
7102b7e29c  mov x10,x8
7102b7e2a0  b 0x7102b7e410
7102b7e2a4  mov x28,xzr
7102b7e2a8  mov w23,wzr
7102b7e2ac  str x13,[sp, #0x70]
7102b7e2b0  ldr w24,[x8, x28, LSL #0x2]
7102b7e2b4  ldr x9,[x27, #0x3b8]
7102b7e2b8  ldr x8,[x27, #0x3c0]
7102b7e2bc  cmp x9,x8
7102b7e2c0  b.eq 0x7102b7e2e0
7102b7e2c4  ldur w8,[x29, #-0x68]
7102b7e2c8  stp w23,w8,[x9]
7102b7e2cc  stp w24,w21,[x9, #0x8]
7102b7e2d0  ldr x8,[x27, #0x3b8]
7102b7e2d4  add x8,x8,#0x10
7102b7e2d8  str x8,[x27, #0x3b8]
7102b7e2dc  b 0x7102b7e3e4
7102b7e2e0  ldr x10,[sp, #0x80]
7102b7e2e4  ldr x25,[x10]
7102b7e2e8  sub x26,x9,x25
7102b7e2ec  asr x19,x26,#0x4
7102b7e2f0  add x9,x19,#0x1
7102b7e2f4  lsr x10,x9,#0x3c
7102b7e2f8  cbnz x10,0x7102b82bb0
7102b7e2fc  sub x8,x8,x25
7102b7e300  asr x10,x8,#0x4
7102b7e304  orr x11,xzr,#0x7fffffffffffffe
7102b7e308  cmp x10,x11
7102b7e30c  b.hi 0x7102b7e32c
7102b7e310  asr x8,x8,#0x3
7102b7e314  cmp x8,x9
7102b7e318  csel x22,x9,x8,cc
7102b7e31c  cbz x22,0x7102b7e390
7102b7e320  lsr x8,x22,#0x3c
7102b7e324  cbz x8,0x7102b7e330
7102b7e328  b 0x7102b81da0
7102b7e32c  orr x22,xzr,#0xfffffffffffffff
7102b7e330  lsl x8,x22,#0x4
7102b7e334  cmp x8,#0x0
7102b7e338  csinc x20,x8,xzr,ne
7102b7e33c  mov w0,#0x10
7102b7e340  mov x1,x20
7102b7e344  bl 0x710392e290
7102b7e348  mov x27,x0
7102b7e34c  cbnz x0,0x7102b7e394
7102b7e350  adrp x8,0x7105332000
7102b7e354  ldr x0,[x8, #0xf00]
7102b7e358  cbz x0,0x7102b7e390
7102b7e35c  stur wzr,[x29, #-0x100]
7102b7e360  str x20,[sp, #0x140]
7102b7e364  ldr x8,[x0]
7102b7e368  ldr x8,[x8, #0x30]
7102b7e36c  sub x1,x29,#0x100
7102b7e370  add x2,sp,#0x140
7102b7e374  blr x8
7102b7e378  tbz w0,#0x0,0x7102b7e390
7102b7e37c  mov w0,#0x10
7102b7e380  mov x1,x20
7102b7e384  bl 0x710392e290
7102b7e388  mov x27,x0
7102b7e38c  cbnz x0,0x7102b7e394
7102b7e390  mov x27,xzr
7102b7e394  ldur w9,[x29, #-0x68]
7102b7e398  add x8,x27,x19, LSL #0x4
7102b7e39c  add x19,x27,x22, LSL #0x4
7102b7e3a0  add x20,x8,#0x10
7102b7e3a4  cmp x26,#0x1
7102b7e3a8  stp w24,w21,[x8, #0x8]
7102b7e3ac  stp w23,w9,[x8]
7102b7e3b0  b.lt 0x7102b7e3c4
7102b7e3b4  mov x0,x27
7102b7e3b8  mov x1,x25
7102b7e3bc  mov x2,x26
7102b7e3c0  bl 0x71039c00e0
7102b7e3c4  ldp x26,x8,[sp, #0x88]
7102b7e3c8  str x27,[x8, #0x3b0]
7102b7e3cc  mov x27,x8
7102b7e3d0  str x20,[x8, #0x3b8]
7102b7e3d4  str x19,[x8, #0x3c0]
7102b7e3d8  cbz x25,0x7102b7e3e4
7102b7e3dc  mov x0,x25
7102b7e3e0  bl 0x710392eb40
7102b7e3e4  ldr x10,[x26, #0x820]
7102b7e3e8  ldr x8,[x26, #0x818]
7102b7e3ec  sub x9,x10,x8
7102b7e3f0  add x28,x28,#0x1
7102b7e3f4  asr x9,x9,#0x2
7102b7e3f8  add w23,w24,w23
7102b7e3fc  cmp x9,x28
7102b7e400  b.hi 0x7102b7e2b0
7102b7e404  ldr x9,[x26, #0x838]
7102b7e408  ldr x11,[x26, #0x830]
7102b7e40c  ldp x13,x23,[sp, #0x70]
7102b7e410  ldur w12,[x29, #-0x68]
7102b7e414  add w12,w21,w12
7102b7e418  stur w12,[x29, #-0x68]
7102b7e41c  sub x12,x9,x11
7102b7e420  add x13,x13,#0x1
7102b7e424  asr x12,x12,#0x2
7102b7e428  cmp x12,x13
7102b7e42c  b.hi 0x7102b7e290
7102b7e430  mov x19,x27
7102b7e434  ldr x8,[x19, #0xe8]!
7102b7e438  ldur x20,[x19, #-0x8]
7102b7e43c  sub x9,x8,x20
7102b7e440  orr x22,xzr,#-0x5555555555555556
7102b7e444  asr x10,x9,#0x3
7102b7e448  movk x22,#0xaaab
7102b7e44c  mul x10,x10,x22
7102b7e450  cmp x10,#0x4b
7102b7e454  b.cs 0x7102b7e46c
7102b7e458  mov w8,#0x4b
7102b7e45c  sub x1,x8,x10
7102b7e460  mov x0,x23
7102b7e464  bl 0x7102b644d0
7102b7e468  b 0x7102b7e4a8
7102b7e46c  cmp x9,#0x708
7102b7e470  b.eq 0x7102b7e4a8
7102b7e474  add x21,x20,#0x708
7102b7e478  cmp x21,x8
7102b7e47c  b.eq 0x7102b7e49c
7102b7e480  sub x22,x8,#0x708
7102b7e484  ldr x0,[x22, #0x6f0]
7102b7e488  cbz x0,0x7102b7e490
7102b7e48c  bl 0x710392eb40
7102b7e490  sub x22,x22,#0x18
7102b7e494  cmp x20,x22
7102b7e498  b.ne 0x7102b7e484
7102b7e49c  orr x22,xzr,#-0x5555555555555556
7102b7e4a0  movk x22,#0xaaab
7102b7e4a4  str x21,[x19]
7102b7e4a8  mov x19,xzr
7102b7e4ac  mov w20,#0x17
7102b7e4b0  ldr x8,[x23]
7102b7e4b4  add x0,x8,x19
7102b7e4b8  mov x1,x20
7102b7e4bc  bl 0x71013e0e10
7102b7e4c0  add x19,x19,#0x18
7102b7e4c4  cmp x19,#0x708
7102b7e4c8  b.ne 0x7102b7e4b0
7102b7e4cc  mov x23,x27
7102b7e4d0  ldr x19,[x23, #0xf8]!
7102b7e4d4  ldr x8,[x23, #0x8]
7102b7e4d8  sub x9,x8,x19
7102b7e4dc  asr x10,x9,#0x3
7102b7e4e0  mul x10,x10,x22
7102b7e4e4  cmp x10,#0x4b
7102b7e4e8  b.cs 0x7102b7e500
7102b7e4ec  mov w8,#0x4b
7102b7e4f0  sub x1,x8,x10
7102b7e4f4  mov x0,x23
7102b7e4f8  bl 0x7102b644d0
7102b7e4fc  b 0x7102b7e534
7102b7e500  cmp x9,#0x708
7102b7e504  b.eq 0x7102b7e534
7102b7e508  add x20,x19,#0x708
7102b7e50c  cmp x20,x8
7102b7e510  b.eq 0x7102b7e530
7102b7e514  sub x21,x8,#0x708
7102b7e518  ldr x0,[x21, #0x6f0]
7102b7e51c  cbz x0,0x7102b7e524
7102b7e520  bl 0x710392eb40
7102b7e524  sub x21,x21,#0x18
7102b7e528  cmp x19,x21
7102b7e52c  b.ne 0x7102b7e518
7102b7e530  str x20,[x27, #0x100]
7102b7e534  mov x19,xzr
7102b7e538  mov w20,#0x17
7102b7e53c  ldr x8,[x23]
7102b7e540  add x0,x8,x19
7102b7e544  mov x1,x20
7102b7e548  bl 0x71013e0e10
7102b7e54c  add x19,x19,#0x18
7102b7e550  cmp x19,#0x708
7102b7e554  b.ne 0x7102b7e53c
7102b7e558  str x23,[sp, #0x28]
7102b7e55c  ldp x19,x8,[x27, #0x110]
7102b7e560  sub x9,x8,x19
7102b7e564  asr x10,x9,#0x3
7102b7e568  mul x10,x10,x22
7102b7e56c  add x23,x27,#0x110
7102b7e570  cmp x10,#0x4b
7102b7e574  b.cs 0x7102b7e58c
7102b7e578  mov w8,#0x4b
7102b7e57c  sub x1,x8,x10
7102b7e580  mov x0,x23
7102b7e584  bl 0x7102b644d0
7102b7e588  b 0x7102b7e5c0
7102b7e58c  cmp x9,#0x708
7102b7e590  b.eq 0x7102b7e5c0
7102b7e594  add x20,x19,#0x708
7102b7e598  cmp x20,x8
7102b7e59c  b.eq 0x7102b7e5bc
7102b7e5a0  sub x21,x8,#0x708
7102b7e5a4  ldr x0,[x21, #0x6f0]
7102b7e5a8  cbz x0,0x7102b7e5b0
7102b7e5ac  bl 0x710392eb40
7102b7e5b0  sub x21,x21,#0x18
7102b7e5b4  cmp x19,x21
7102b7e5b8  b.ne 0x7102b7e5a4
7102b7e5bc  str x20,[x27, #0x118]
7102b7e5c0  mov x19,xzr
7102b7e5c4  mov w20,#0x17
7102b7e5c8  ldr x8,[x23]
7102b7e5cc  add x0,x8,x19
7102b7e5d0  mov x1,x20
7102b7e5d4  bl 0x71013e0e10
7102b7e5d8  add x19,x19,#0x18
7102b7e5dc  cmp x19,#0x708
7102b7e5e0  b.ne 0x7102b7e5c8
7102b7e5e4  mov w20,#0x1
7102b7e5e8  adrp x0,0x7104338000
7102b7e5ec  add x0,x0,#0x42b
7102b7e5f0  str x23,[sp, #0x30]
7102b7e5f4  strb w20,[sp, #0x140]
7102b7e5f8  bl 0x7103151710
7102b7e5fc  str w0,[sp, #0x144]
7102b7e600  adrp x0,0x710436a000
7102b7e604  add x0,x0,#0x69c
7102b7e608  str wzr,[sp, #0x148]
7102b7e60c  strb w20,[sp, #0x14c]
7102b7e610  bl 0x7103151710
7102b7e614  str w0,[sp, #0x150]
7102b7e618  adrp x0,0x7104410000
7102b7e61c  add x0,x0,#0x971
7102b7e620  str w20,[sp, #0x154]
7102b7e624  strb w20,[sp, #0x158]
7102b7e628  bl 0x7103151710
7102b7e62c  str w0,[sp, #0x15c]
7102b7e630  mov w21,#0x2
7102b7e634  adrp x0,0x71043de000
7102b7e638  add x0,x0,#0x255
7102b7e63c  str w21,[sp, #0x160]
7102b7e640  strb w21,[sp, #0x164]
7102b7e644  bl 0x7103151710
7102b7e648  str w0,[sp, #0x168]
7102b7e64c  adrp x0,0x71043bc000
7102b7e650  add x0,x0,#0x7e0
7102b7e654  str wzr,[sp, #0x16c]
7102b7e658  strb w21,[sp, #0x170]
7102b7e65c  bl 0x7103151710
7102b7e660  str w0,[sp, #0x174]
7102b7e664  adrp x0,0x71043ee000
7102b7e668  add x0,x0,#0xc79
7102b7e66c  str w20,[sp, #0x178]
7102b7e670  strb w21,[sp, #0x17c]
7102b7e674  bl 0x7103151710
7102b7e678  str w0,[sp, #0x180]
7102b7e67c  adrp x0,0x71043ab000
7102b7e680  add x0,x0,#0xbdd
7102b7e684  str w21,[sp, #0x184]
7102b7e688  strb w21,[sp, #0x188]
7102b7e68c  bl 0x7103151710
7102b7e690  str w0,[sp, #0x18c]
7102b7e694  orr w19,wzr,#0x3
7102b7e698  adrp x0,0x7104359000
7102b7e69c  add x0,x0,#0x601
7102b7e6a0  str w19,[sp, #0x190]
7102b7e6a4  strb w21,[sp, #0x194]
7102b7e6a8  bl 0x7103151710
7102b7e6ac  str w0,[sp, #0x198]
7102b7e6b0  mov w8,#0x4
7102b7e6b4  adrp x0,0x71043de000
7102b7e6b8  add x0,x0,#0x25d
7102b7e6bc  str w8,[sp, #0x19c]
7102b7e6c0  strb w21,[sp, #0x1a0]
7102b7e6c4  bl 0x7103151710
7102b7e6c8  str w0,[sp, #0x1a4]
7102b7e6cc  mov w23,#0x5
7102b7e6d0  adrp x0,0x710439b000
7102b7e6d4  add x0,x0,#0x3d2
7102b7e6d8  str w23,[sp, #0x1a8]
7102b7e6dc  strb w21,[sp, #0x1ac]
7102b7e6e0  bl 0x7103151710
7102b7e6e4  str w0,[sp, #0x1b0]
7102b7e6e8  orr w24,wzr,#0x6
7102b7e6ec  adrp x0,0x710436a000
7102b7e6f0  add x0,x0,#0x6a4
7102b7e6f4  str w24,[sp, #0x1b4]
7102b7e6f8  strb w21,[sp, #0x1b8]
7102b7e6fc  bl 0x7103151710
7102b7e700  str w0,[sp, #0x1bc]
7102b7e704  orr w25,wzr,#0x7
7102b7e708  adrp x0,0x71042a1000
7102b7e70c  add x0,x0,#0x2d3
7102b7e710  str w25,[sp, #0x1c0]
7102b7e714  strb w21,[sp, #0x1c4]
7102b7e718  bl 0x7103151710
7102b7e71c  str w0,[sp, #0x1c8]
7102b7e720  mov w26,#0x8
7102b7e724  adrp x0,0x710428f000
7102b7e728  add x0,x0,#0x962
7102b7e72c  str w26,[sp, #0x1cc]
7102b7e730  strb w21,[sp, #0x1d0]
7102b7e734  bl 0x7103151710
7102b7e738  str w0,[sp, #0x1d4]
7102b7e73c  mov w27,#0x9
7102b7e740  adrp x0,0x7104338000
7102b7e744  add x0,x0,#0x433
7102b7e748  str w27,[sp, #0x1d8]
7102b7e74c  strb w21,[sp, #0x1dc]
7102b7e750  bl 0x7103151710
7102b7e754  str w0,[sp, #0x1e0]
7102b7e758  mov w28,#0xa
7102b7e75c  adrp x0,0x71042f5000
7102b7e760  add x0,x0,#0xf49
7102b7e764  str w28,[sp, #0x1e4]
7102b7e768  strb w21,[sp, #0x1e8]
7102b7e76c  bl 0x7103151710
7102b7e770  str w0,[sp, #0x1ec]
7102b7e774  mov w22,#0xb
7102b7e778  adrp x0,0x7104431000
7102b7e77c  add x0,x0,#0x28a
7102b7e780  str w22,[sp, #0x1f0]
7102b7e784  strb w21,[sp, #0x1f4]
7102b7e788  bl 0x7103151710
7102b7e78c  str w0,[sp, #0x1f8]
7102b7e790  orr w8,wzr,#0xc
7102b7e794  adrp x0,0x7104348000
7102b7e798  add x0,x0,#0x4df
7102b7e79c  str w8,[sp, #0x1fc]
7102b7e7a0  strb w21,[sp, #0x200]
7102b7e7a4  bl 0x7103151710
7102b7e7a8  str w0,[sp, #0x204]
7102b7e7ac  mov w8,#0xd
7102b7e7b0  adrp x0,0x71042b2000
7102b7e7b4  add x0,x0,#0x39b
7102b7e7b8  str w8,[sp, #0x208]
7102b7e7bc  strb w21,[sp, #0x20c]
7102b7e7c0  bl 0x7103151710
7102b7e7c4  str w0,[sp, #0x210]
7102b7e7c8  orr w8,wzr,#0xe
7102b7e7cc  adrp x0,0x710427e000
7102b7e7d0  add x0,x0,#0xc27
7102b7e7d4  str w8,[sp, #0x214]
7102b7e7d8  strb w19,[sp, #0x218]
7102b7e7dc  bl 0x7103151710
7102b7e7e0  str w0,[sp, #0x21c]
7102b7e7e4  adrp x0,0x7104306000
7102b7e7e8  add x0,x0,#0x7cd
7102b7e7ec  str wzr,[sp, #0x220]
7102b7e7f0  strb w19,[sp, #0x224]
7102b7e7f4  bl 0x7103151710
7102b7e7f8  str w0,[sp, #0x228]
7102b7e7fc  adrp x0,0x71042a1000
7102b7e800  add x0,x0,#0x2db
7102b7e804  str w20,[sp, #0x22c]
7102b7e808  strb w19,[sp, #0x230]
7102b7e80c  bl 0x7103151710
7102b7e810  str w0,[sp, #0x234]
7102b7e814  adrp x0,0x71043de000
7102b7e818  add x0,x0,#0x265
7102b7e81c  str w21,[sp, #0x238]
7102b7e820  strb w19,[sp, #0x23c]
7102b7e824  bl 0x7103151710
7102b7e828  str w0,[sp, #0x240]
7102b7e82c  adrp x0,0x7104452000
7102b7e830  add x0,x0,#0xa60
7102b7e834  str w19,[sp, #0x244]
7102b7e838  strb w19,[sp, #0x248]
7102b7e83c  bl 0x7103151710
7102b7e840  str w0,[sp, #0x24c]
7102b7e844  mov w8,#0x4
7102b7e848  adrp x0,0x7104431000
7102b7e84c  add x0,x0,#0x292
7102b7e850  str w8,[sp, #0x250]
7102b7e854  strb w19,[sp, #0x254]
7102b7e858  bl 0x7103151710
7102b7e85c  str w0,[sp, #0x258]
7102b7e860  adrp x0,0x710428f000
7102b7e864  add x0,x0,#0x96a
7102b7e868  str w23,[sp, #0x25c]
7102b7e86c  strb w19,[sp, #0x260]
7102b7e870  bl 0x7103151710
7102b7e874  str w0,[sp, #0x264]
7102b7e878  adrp x0,0x710426e000
7102b7e87c  add x0,x0,#0x66
7102b7e880  str w24,[sp, #0x268]
7102b7e884  strb w19,[sp, #0x26c]
7102b7e888  bl 0x7103151710
7102b7e88c  str w0,[sp, #0x270]
7102b7e890  adrp x0,0x71042e5000
7102b7e894  add x0,x0,#0x39a
7102b7e898  str w25,[sp, #0x274]
7102b7e89c  strb w19,[sp, #0x278]
7102b7e8a0  bl 0x7103151710
7102b7e8a4  str w0,[sp, #0x27c]
7102b7e8a8  adrp x0,0x7104317000
7102b7e8ac  add x0,x0,#0x194
7102b7e8b0  str w26,[sp, #0x280]
7102b7e8b4  strb w19,[sp, #0x284]
7102b7e8b8  bl 0x7103151710
7102b7e8bc  str w0,[sp, #0x288]
7102b7e8c0  adrp x0,0x71042b2000
7102b7e8c4  add x0,x0,#0x3a3
7102b7e8c8  str w27,[sp, #0x28c]
7102b7e8cc  strb w19,[sp, #0x290]
7102b7e8d0  bl 0x7103151710
7102b7e8d4  str w0,[sp, #0x294]
7102b7e8d8  adrp x0,0x71043ff000
7102b7e8dc  add x0,x0,#0x569
7102b7e8e0  str w28,[sp, #0x298]
7102b7e8e4  strb w19,[sp, #0x29c]
7102b7e8e8  bl 0x7103151710
7102b7e8ec  ldr x8,[sp, #0x68]
7102b7e8f0  str w0,[sp, #0x2a0]
7102b7e8f4  str w22,[sp, #0x2a4]
7102b7e8f8  ldr x8,[x8, #0x10]
7102b7e8fc  str x8,[sp, #0x48]
7102b7e900  ldr w8,[x8, #0xf8]
7102b7e904  ldr x27,[sp, #0x90]
7102b7e908  ldr x22,[sp, #0x78]
7102b7e90c  str x8,[sp, #0x40]
7102b7e910  cbz w8,0x7102b7ecbc
7102b7e914  adrp x8,0x7104471000
7102b7e918  ldr s8,[x8, #0xd40]
7102b7e91c  adrp x8,0x7104472000
7102b7e920  ldr s10,[x8, #0xfbc]
7102b7e924  fmov s9,0x41200000
7102b7e928  mov x9,xzr
7102b7e92c  add x19,sp,#0x140
7102b7e930  orr w28,wzr,#0x18
7102b7e934  ldr x8,[sp, #0x48]
7102b7e938  ldr x8,[x8, #0x100]
7102b7e93c  mov w10,#0x140
7102b7e940  madd x8,x9,x10,x8
7102b7e944  ldr w25,[x8, #0x100]
7102b7e948  mov x23,xzr
7102b7e94c  add x12,x8,#0x10c
7102b7e950  add x13,x8,#0x110
7102b7e954  str x9,[sp, #0x60]
7102b7e958  stur x12,[x29, #-0x68]
7102b7e95c  str x13,[sp, #0x80]
7102b7e960  b 0x7102b7e97c
7102b7e964  mov x8,xzr
7102b7e968  mov x22,xzr
7102b7e96c  b 0x7102b7eb80
7102b7e970  mov x8,xzr
7102b7e974  mov x22,xzr
7102b7e978  b 0x7102b7ec40
7102b7e97c  add x8,x19,x23
7102b7e980  ldr w9,[x8, #0x4]
7102b7e984  cmp w25,w9
7102b7e988  b.ne 0x7102b7ec9c
7102b7e98c  ldr s0,[x12]
7102b7e990  fadd s0,s0,s8
7102b7e994  ldr s1,[x13]
7102b7e998  ldrb w11,[x19, x23, LSL ]
7102b7e99c  cmp w11,#0x3
7102b7e9a0  fdiv s0,s0,s9
7102b7e9a4  fcvtzs w9,s0
7102b7e9a8  fsub s0,s10,s1
7102b7e9ac  fdiv s0,s0,s9
7102b7e9b0  mov x24,x9
7102b7e9b4  fcvtzs w10,s0
7102b7e9b8  bfm x24,x10,#0x20,#0x1f
7102b7e9bc  b.eq 0x7102b7ea34
7102b7e9c0  cmp w11,#0x2
7102b7e9c4  b.eq 0x7102b7ea08
7102b7e9c8  cmp w11,#0x1
7102b7e9cc  b.ne 0x7102b7ec9c
7102b7e9d0  ldrsw x8,[x8, #0x8]
7102b7e9d4  mul x8,x8,x28
7102b7e9d8  smull x9,w9,w28
7102b7e9dc  ldr x8,[x22, x8, LSL #0x0]
7102b7e9e0  mov w11,#0x1
7102b7e9e4  ldr x8,[x8, x9, LSL #0x0]
7102b7e9e8  sxtw x9,w10
7102b7e9ec  lsr x10,x9,#0x3
7102b7e9f0  lsl x9,x11,x9
7102b7e9f4  and x10,x10,#0x1ffffffffffffff8
7102b7e9f8  ldr x11,[x8, x10, LSL #0x0]
7102b7e9fc  orr x9,x11,x9
7102b7ea00  str x9,[x8, x10, LSL #0x0]
7102b7ea04  b 0x7102b7ec9c
7102b7ea08  ldrsw x8,[x8, #0x8]
7102b7ea0c  madd x20,x8,x28,x22
7102b7ea10  add x21,x20,#0x170
7102b7ea14  ldp x9,x8,[x20, #0x170]
7102b7ea18  cmp x9,x8
7102b7ea1c  b.eq 0x7102b7ea64
7102b7ea20  str x24,[x9]
7102b7ea24  ldr x8,[x21]
7102b7ea28  add x8,x8,#0x8
7102b7ea2c  str x8,[x21]
7102b7ea30  b 0x7102b7ec9c
7102b7ea34  ldrsw x8,[x8, #0x8]
7102b7ea38  madd x21,x8,x28,x22
7102b7ea3c  ldr x8,[x21, #0x58]!
7102b7ea40  mov x20,x21
7102b7ea44  ldr x9,[x20, #-0x8]!
7102b7ea48  cmp x9,x8
7102b7ea4c  b.eq 0x7102b7eab4
7102b7ea50  str x24,[x9]
7102b7ea54  ldr x8,[x20]
7102b7ea58  add x8,x8,#0x8
7102b7ea5c  str x8,[x20]
7102b7ea60  b 0x7102b7ec9c
7102b7ea64  add x0,x20,#0x168
7102b7ea68  ldr x26,[x0]
7102b7ea6c  sub x28,x9,x26
7102b7ea70  asr x27,x28,#0x3
7102b7ea74  add x9,x27,#0x1
7102b7ea78  lsr x10,x9,#0x3d
7102b7ea7c  cbnz x10,0x7102b82bb4
7102b7ea80  sub x8,x8,x26
7102b7ea84  asr x10,x8,#0x3
7102b7ea88  orr x11,xzr,#0xffffffffffffffe
7102b7ea8c  cmp x10,x11
7102b7ea90  str x0,[sp, #0x70]
7102b7ea94  b.hi 0x7102b7eb04
7102b7ea98  asr x8,x8,#0x2
7102b7ea9c  cmp x8,x9
7102b7eaa0  csel x9,x9,x8,cc
7102b7eaa4  cbz x9,0x7102b7e964
7102b7eaa8  lsr x8,x9,#0x3d
7102b7eaac  cbz x8,0x7102b7eb08
7102b7eab0  b 0x7102b81da0
7102b7eab4  sub x0,x21,#0x10
7102b7eab8  ldr x26,[x0]
7102b7eabc  sub x28,x9,x26
7102b7eac0  asr x27,x28,#0x3
7102b7eac4  add x9,x27,#0x1
7102b7eac8  lsr x10,x9,#0x3d
7102b7eacc  cbnz x10,0x7102b82bb4
7102b7ead0  sub x8,x8,x26
7102b7ead4  asr x10,x8,#0x3
7102b7ead8  orr x11,xzr,#0xffffffffffffffe
7102b7eadc  cmp x10,x11
7102b7eae0  str x0,[sp, #0x70]
7102b7eae4  b.hi 0x7102b7ebc4
7102b7eae8  asr x8,x8,#0x2
7102b7eaec  cmp x8,x9
7102b7eaf0  csel x9,x9,x8,cc
7102b7eaf4  cbz x9,0x7102b7e970
7102b7eaf8  lsr x8,x9,#0x3d
7102b7eafc  cbz x8,0x7102b7ebc8
7102b7eb00  b 0x7102b81da0
7102b7eb04  orr x9,xzr,#0x1fffffffffffffff
7102b7eb08  lsl x8,x9,#0x3
7102b7eb0c  cmp x8,#0x0
7102b7eb10  csinc x1,x8,xzr,ne
7102b7eb14  mov w0,#0x10
7102b7eb18  str x9,[sp, #0x68]
7102b7eb1c  str x1,[sp, #0x58]
7102b7eb20  bl 0x710392e290
7102b7eb24  mov x22,x0
7102b7eb28  cbnz x0,0x7102b7eb74
7102b7eb2c  adrp x8,0x7105332000
7102b7eb30  ldr x0,[x8, #0xf00]
7102b7eb34  cbz x0,0x7102b7eb70
7102b7eb38  ldr x8,[sp, #0x58]
7102b7eb3c  str wzr,[sp, #0x2b0]
7102b7eb40  add x1,sp,#0x2b0
7102b7eb44  sub x2,x29,#0x100
7102b7eb48  stur x8,[x29, #-0x100]
7102b7eb4c  ldr x8,[x0]
7102b7eb50  ldr x8,[x8, #0x30]
7102b7eb54  blr x8
7102b7eb58  tbz w0,#0x0,0x7102b7eb70
7102b7eb5c  ldr x1,[sp, #0x58]
7102b7eb60  mov w0,#0x10
7102b7eb64  bl 0x710392e290
7102b7eb68  mov x22,x0
7102b7eb6c  cbnz x0,0x7102b7eb74
7102b7eb70  mov x22,xzr
7102b7eb74  ldur x12,[x29, #-0x68]
7102b7eb78  ldr x13,[sp, #0x80]
7102b7eb7c  ldr x8,[sp, #0x68]
7102b7eb80  add x27,x22,x27, LSL #0x3
7102b7eb84  add x20,x20,#0x178
7102b7eb88  cmp x28,#0x1
7102b7eb8c  str x24,[x27], #0x8
7102b7eb90  add x24,x22,x8, LSL #0x3
7102b7eb94  b.lt 0x7102b7ebb0
7102b7eb98  mov x0,x22
7102b7eb9c  mov x1,x26
7102b7eba0  mov x2,x28
7102b7eba4  bl 0x71039c00e0
7102b7eba8  ldr x13,[sp, #0x80]
7102b7ebac  ldur x12,[x29, #-0x68]
7102b7ebb0  ldr x8,[sp, #0x70]
7102b7ebb4  str x22,[x8]
7102b7ebb8  str x27,[x21]
7102b7ebbc  str x24,[x20]
7102b7ebc0  b 0x7102b7ec7c
7102b7ebc4  orr x9,xzr,#0x1fffffffffffffff
7102b7ebc8  lsl x8,x9,#0x3
7102b7ebcc  cmp x8,#0x0
7102b7ebd0  csinc x1,x8,xzr,ne
7102b7ebd4  mov w0,#0x10
7102b7ebd8  str x9,[sp, #0x68]
7102b7ebdc  str x1,[sp, #0x58]
7102b7ebe0  bl 0x710392e290
7102b7ebe4  mov x22,x0
7102b7ebe8  cbnz x0,0x7102b7ec34
7102b7ebec  adrp x8,0x7105332000
7102b7ebf0  ldr x0,[x8, #0xf00]
7102b7ebf4  cbz x0,0x7102b7ec30
7102b7ebf8  ldr x8,[sp, #0x58]
7102b7ebfc  str wzr,[sp, #0x2b0]
7102b7ec00  add x1,sp,#0x2b0
7102b7ec04  sub x2,x29,#0x100
7102b7ec08  stur x8,[x29, #-0x100]
7102b7ec0c  ldr x8,[x0]
7102b7ec10  ldr x8,[x8, #0x30]
7102b7ec14  blr x8
7102b7ec18  tbz w0,#0x0,0x7102b7ec30
7102b7ec1c  ldr x1,[sp, #0x58]
7102b7ec20  mov w0,#0x10
7102b7ec24  bl 0x710392e290
7102b7ec28  mov x22,x0
7102b7ec2c  cbnz x0,0x7102b7ec34
7102b7ec30  mov x22,xzr
7102b7ec34  ldur x12,[x29, #-0x68]
7102b7ec38  ldr x13,[sp, #0x80]
7102b7ec3c  ldr x8,[sp, #0x68]
7102b7ec40  add x27,x22,x27, LSL #0x3
7102b7ec44  cmp x28,#0x1
7102b7ec48  str x24,[x27], #0x8
7102b7ec4c  add x24,x22,x8, LSL #0x3
7102b7ec50  b.lt 0x7102b7ec6c
7102b7ec54  mov x0,x22
7102b7ec58  mov x1,x26
7102b7ec5c  mov x2,x28
7102b7ec60  bl 0x71039c00e0
7102b7ec64  ldr x13,[sp, #0x80]
7102b7ec68  ldur x12,[x29, #-0x68]
7102b7ec6c  ldr x8,[sp, #0x70]
7102b7ec70  str x22,[x8]
7102b7ec74  str x27,[x20]
7102b7ec78  str x24,[x21]
7102b7ec7c  ldr x27,[sp, #0x90]
7102b7ec80  ldr x22,[sp, #0x78]
7102b7ec84  orr w28,wzr,#0x18
7102b7ec88  cbz x26,0x7102b7ec9c
7102b7ec8c  mov x0,x26
7102b7ec90  bl 0x710392eb40
7102b7ec94  ldr x13,[sp, #0x80]
7102b7ec98  ldur x12,[x29, #-0x68]
7102b7ec9c  add x23,x23,#0xc
7102b7eca0  cmp x23,#0x168
7102b7eca4  b.ne 0x7102b7e97c
7102b7eca8  ldr x9,[sp, #0x60]
7102b7ecac  ldr x8,[sp, #0x40]
7102b7ecb0  add x9,x9,#0x1
7102b7ecb4  cmp x9,x8
7102b7ecb8  b.cc 0x7102b7e934
7102b7ecbc  str xzr,[x27, #0x3d8]
7102b7ecc0  str xzr,[x27, #0x3d0]
7102b7ecc4  adrp x21,0x71052a8000
7102b7ecc8  str xzr,[x27, #0x3c8]
7102b7eccc  fmov s8,wzr
7102b7ecd0  add x20,sp,#0x130
7102b7ecd4  str xzr,[x27, #0x440]
7102b7ecd8  add x0,x27,#0x640
7102b7ecdc  mov v1.16B,v8.16B
7102b7ece0  str xzr,[x27, #0x4a8]
7102b7ece4  mov w26,#0xffffffff
7102b7ece8  add x2,sp,#0x140
7102b7ecec  str xzr,[x27, #0x510]
7102b7ecf0  mov w3,w26
7102b7ecf4  mov x4,x26
7102b7ecf8  str xzr,[x27, #0x5b0]
7102b7ecfc  ldr x21,[x21, #0xa80]
7102b7ed00  ldr q0,[x21]
7102b7ed04  ldr x19,[sp, #0x88]
7102b7ed08  mov x1,x19
7102b7ed0c  str q0,[x20, #0x10]
7102b7ed10  mov v0.16B,v8.16B
7102b7ed14  bl 0x710318bf30
7102b7ed18  ldr q0,[x21]
7102b7ed1c  mov v1.16B,v8.16B
7102b7ed20  add x0,x27,#0x670
7102b7ed24  str q0,[x20, #0x1e0]
7102b7ed28  mov v0.16B,v8.16B
7102b7ed2c  sub x2,x29,#0x100
7102b7ed30  mov x1,x19
7102b7ed34  mov w3,w26
7102b7ed38  mov x4,x26
7102b7ed3c  bl 0x710318bf30
7102b7ed40  ldr q0,[x21]
7102b7ed44  mov v1.16B,v8.16B
7102b7ed48  add x0,x27,#0x6a0
7102b7ed4c  str q0,[x20, #0x180]
7102b7ed50  mov v0.16B,v8.16B
7102b7ed54  add x2,sp,#0x2b0
7102b7ed58  mov x1,x19
7102b7ed5c  mov w3,w26
7102b7ed60  mov x4,x26
7102b7ed64  bl 0x710318bf30
7102b7ed68  ldr q0,[x21]
7102b7ed6c  mov v1.16B,v8.16B
7102b7ed70  add x0,x27,#0x6d0
7102b7ed74  str q0,[x20, #0x240]
7102b7ed78  mov v0.16B,v8.16B
7102b7ed7c  sub x2,x29,#0xa0
7102b7ed80  mov x1,x19
7102b7ed84  mov w3,w26
7102b7ed88  mov x4,x26
7102b7ed8c  bl 0x710318bf30
7102b7ed90  ldr q0,[x21]
7102b7ed94  mov v1.16B,v8.16B
7102b7ed98  add x0,x27,#0x700
7102b7ed9c  str q0,[x20]
7102b7eda0  mov v0.16B,v8.16B
7102b7eda4  add x2,sp,#0x130
7102b7eda8  mov x1,x19
7102b7edac  mov w3,w26
7102b7edb0  mov x4,x26
7102b7edb4  bl 0x710318bf30
7102b7edb8  ldr q0,[x21]
7102b7edbc  mov v1.16B,v8.16B
7102b7edc0  add x0,x27,#0x730
7102b7edc4  str q0,[sp, #0x120]
7102b7edc8  mov v0.16B,v8.16B
7102b7edcc  add x2,sp,#0x120
7102b7edd0  mov x1,x19
7102b7edd4  mov w3,w26
7102b7edd8  mov x4,x26
7102b7eddc  bl 0x710318bf30
7102b7ede0  ldr q0,[x21]
7102b7ede4  mov v1.16B,v8.16B
7102b7ede8  add x0,x27,#0x760
7102b7edec  str q0,[sp, #0x110]
7102b7edf0  mov v0.16B,v8.16B
7102b7edf4  add x2,sp,#0x110
7102b7edf8  mov x1,x19
7102b7edfc  mov w3,w26
7102b7ee00  mov x4,x26
7102b7ee04  bl 0x710318bf30
7102b7ee08  ldr q0,[x21]
7102b7ee0c  mov v1.16B,v8.16B
7102b7ee10  add x0,x27,#0x790
7102b7ee14  str q0,[sp, #0x100]
7102b7ee18  mov v0.16B,v8.16B
7102b7ee1c  add x2,sp,#0x100
7102b7ee20  mov x1,x19
7102b7ee24  mov w3,w26
7102b7ee28  mov x4,x26
7102b7ee2c  bl 0x710318bf30
7102b7ee30  ldr x19,[x27, #0x3d0]
7102b7ee34  ldr x26,[x27, #0x3c8]
7102b7ee38  sub x21,x19,x26
7102b7ee3c  orr x11,xzr,#-0x5555555555555556
7102b7ee40  movk x11,#0xaaab
7102b7ee44  asr x8,x21,#0x3
7102b7ee48  mul x23,x8,x11
7102b7ee4c  cmp x23,#0x4a
7102b7ee50  strb wzr,[x27, #0x7c0]
7102b7ee54  b.hi 0x7102b7eeb0
7102b7ee58  mov w8,#0x4b
7102b7ee5c  sub x9,x8,x23
7102b7ee60  ldr x8,[x27, #0x3d8]
7102b7ee64  sub x10,x8,x19
7102b7ee68  asr x10,x10,#0x3
7102b7ee6c  mul x10,x10,x11
7102b7ee70  cmp x10,x9
7102b7ee74  b.cs 0x7102b7eeec
7102b7ee78  sub x8,x8,x26
7102b7ee7c  asr x8,x8,#0x3
7102b7ee80  mul x8,x8,x11
7102b7ee84  orr x9,xzr,#0x5555555555555555
7102b7ee88  movk x9,#0x5554
7102b7ee8c  movk x9,#0x555, LSL #48
7102b7ee90  cmp x8,x9
7102b7ee94  b.hi 0x7102b7ef48
7102b7ee98  lsl x8,x8,#0x1
7102b7ee9c  cmp x8,#0x4b
7102b7eea0  mov w9,#0x4b
7102b7eea4  csel x24,x8,x9,hi
7102b7eea8  cbnz x24,0x7102b7ef50
7102b7eeac  b 0x7102b7efb4
7102b7eeb0  cmp x21,#0x708
7102b7eeb4  b.eq 0x7102b7f07c
7102b7eeb8  add x20,x26,#0x708
7102b7eebc  cmp x20,x19
7102b7eec0  b.eq 0x7102b7eee4
7102b7eec4  sub x19,x19,#0x708
7102b7eec8  ldr x0,[x19, #0x6f0]
7102b7eecc  cbz x0,0x7102b7eed8
7102b7eed0  str x0,[x19, #0x6f8]
7102b7eed4  bl 0x710392eb40
7102b7eed8  sub x19,x19,#0x18
7102b7eedc  cmp x26,x19
7102b7eee0  b.ne 0x7102b7eec8
7102b7eee4  str x20,[x27, #0x3d0]
7102b7eee8  b 0x7102b7f07c
7102b7eeec  mov x8,x9
7102b7eef0  tbz w9,#0x0,0x7102b7ef0c
7102b7eef4  stp xzr,xzr,[x19, #0x8]
7102b7eef8  str xzr,[x19]
7102b7eefc  ldr x8,[x27, #0x3d0]
7102b7ef00  add x19,x8,#0x18
7102b7ef04  sub x8,x9,#0x1
7102b7ef08  str x19,[x27, #0x3d0]
7102b7ef0c  cmp x9,#0x1
7102b7ef10  b.eq 0x7102b7f07c
7102b7ef14  stp xzr,xzr,[x19, #0x8]
7102b7ef18  subs x8,x8,#0x2
7102b7ef1c  str xzr,[x19]
7102b7ef20  ldr x9,[x27, #0x3d0]
7102b7ef24  add x10,x9,#0x18
7102b7ef28  str x10,[x27, #0x3d0]
7102b7ef2c  stp xzr,xzr,[x9, #0x20]
7102b7ef30  str xzr,[x9, #0x18]
7102b7ef34  ldr x9,[x27, #0x3d0]
7102b7ef38  add x19,x9,#0x18
7102b7ef3c  str x19,[x27, #0x3d0]
7102b7ef40  b.ne 0x7102b7ef14
7102b7ef44  b 0x7102b7f07c
7102b7ef48  orr x24,xzr,#-0x5555555555555556
7102b7ef4c  movk x24,#0xaaa, LSL #48
7102b7ef50  add x8,x24,x24, LSL #0x1
7102b7ef54  lsl x8,x8,#0x3
7102b7ef58  cmp x8,#0x0
7102b7ef5c  csinc x22,x8,xzr,ne
7102b7ef60  mov w0,#0x10
7102b7ef64  mov x1,x22
7102b7ef68  bl 0x710392e290
7102b7ef6c  mov x20,x0
7102b7ef70  cbnz x0,0x7102b7efb8
7102b7ef74  adrp x8,0x7105332000
7102b7ef78  ldr x0,[x8, #0xf00]
7102b7ef7c  cbz x0,0x7102b7efb4
7102b7ef80  stur wzr,[x29, #-0x100]
7102b7ef84  str x22,[sp, #0x140]
7102b7ef88  ldr x8,[x0]
7102b7ef8c  ldr x8,[x8, #0x30]
7102b7ef90  sub x1,x29,#0x100
7102b7ef94  add x2,sp,#0x140
7102b7ef98  blr x8
7102b7ef9c  tbz w0,#0x0,0x7102b7efb4
7102b7efa0  mov w0,#0x10
7102b7efa4  mov x1,x22
7102b7efa8  bl 0x710392e290
7102b7efac  mov x20,x0
7102b7efb0  cbnz x0,0x7102b7efb8
7102b7efb4  mov x20,xzr
7102b7efb8  orr w8,wzr,#0x18
7102b7efbc  madd x27,x23,x8,x20
7102b7efc0  madd x22,x24,x8,x20
7102b7efc4  mov w8,#0x708
7102b7efc8  sub x2,x8,x21
7102b7efcc  mov x0,x27
7102b7efd0  mov w1,wzr
7102b7efd4  bl 0x71039c02a0
7102b7efd8  add x8,x20,#0x708
7102b7efdc  cmp x19,x26
7102b7efe0  b.eq 0x7102b826f4
7102b7efe4  mov x9,xzr
7102b7efe8  sub x10,x26,x19
7102b7efec  add x11,x27,x9
7102b7eff0  add x12,x19,x9
7102b7eff4  stur xzr,[x11, #-0x18]
7102b7eff8  stp xzr,xzr,[x11, #-0x10]
7102b7effc  ldur x13,[x12, #-0x18]
7102b7f000  stur x13,[x11, #-0x18]
7102b7f004  ldur x13,[x12, #-0x10]
7102b7f008  stur x13,[x11, #-0x10]
7102b7f00c  ldur x13,[x12, #-0x8]
7102b7f010  sub x9,x9,#0x18
7102b7f014  cmp x10,x9
7102b7f018  stur x13,[x11, #-0x8]
7102b7f01c  stp xzr,xzr,[x12, #-0x10]
7102b7f020  stur xzr,[x12, #-0x18]
7102b7f024  b.ne 0x7102b7efec
7102b7f028  ldr x11,[sp, #0x90]
7102b7f02c  ldr x26,[x11, #0x3c8]
7102b7f030  ldr x10,[x11, #0x3d0]
7102b7f034  add x9,x27,x9
7102b7f038  mov x27,x11
7102b7f03c  str x9,[x11, #0x3c8]
7102b7f040  cmp x10,x26
7102b7f044  str x8,[x11, #0x3d0]
7102b7f048  str x22,[x11, #0x3d8]
7102b7f04c  b.eq 0x7102b7f070
7102b7f050  mov x19,x10
7102b7f054  ldr x0,[x19, #-0x18]!
7102b7f058  cbz x0,0x7102b7f064
7102b7f05c  stur x0,[x10, #-0x10]
7102b7f060  bl 0x710392eb40
7102b7f064  cmp x26,x19
7102b7f068  mov x10,x19
7102b7f06c  b.ne 0x7102b7f054
7102b7f070  cbz x26,0x7102b7f07c
7102b7f074  mov x0,x26
7102b7f078  bl 0x710392eb40
7102b7f07c  ldr x26,[sp, #0x88]
7102b7f080  mov x19,xzr
7102b7f084  add x21,x27,#0x3c8
7102b7f088  orr w11,wzr,#0x18
7102b7f08c  ldr x8,[x21]
7102b7f090  madd x28,x19,x11,x8
7102b7f094  mov x27,x28
7102b7f098  ldr x20,[x27, #0x8]!
7102b7f09c  ldr x22,[x28]
7102b7f0a0  sub x23,x20,x22
7102b7f0a4  cmp x23,#0x16
7102b7f0a8  b.hi 0x7102b7f0f0
7102b7f0ac  madd x25,x19,x11,x8
7102b7f0b0  ldr x8,[x25, #0x10]!
7102b7f0b4  mov w9,#0x17
7102b7f0b8  sub x24,x9,x23
7102b7f0bc  sub x9,x8,x20
7102b7f0c0  cmp x9,x24
7102b7f0c4  b.cs 0x7102b7f108
7102b7f0c8  sub x8,x8,x22
7102b7f0cc  orr x9,xzr,#0x3ffffffffffffffe
7102b7f0d0  cmp x8,x9
7102b7f0d4  b.hi 0x7102b7f15c
7102b7f0d8  lsl x8,x8,#0x1
7102b7f0dc  cmp x8,#0x17
7102b7f0e0  mov w9,#0x17
7102b7f0e4  csel x26,x8,x9,hi
7102b7f0e8  cbnz x26,0x7102b7f160
7102b7f0ec  b 0x7102b7f1ac
7102b7f0f0  cmp x23,#0x17
7102b7f0f4  ldr x23,[sp, #0x78]
7102b7f0f8  b.eq 0x7102b7f264
7102b7f0fc  add x8,x22,#0x17
7102b7f100  str x8,[x27]
7102b7f104  b 0x7102b7f264
7102b7f108  mov x8,x24
7102b7f10c  tbz w24,#0x0,0x7102b7f124
7102b7f110  strb wzr,[x20]
7102b7f114  ldr x8,[x27]
7102b7f118  add x20,x8,#0x1
7102b7f11c  sub x8,x24,#0x1
7102b7f120  str x20,[x27]
7102b7f124  ldr x23,[sp, #0x78]
7102b7f128  cmp x24,#0x1
7102b7f12c  b.eq 0x7102b7f264
7102b7f130  strb wzr,[x20]
7102b7f134  ldr x9,[x27]
7102b7f138  add x10,x9,#0x1
7102b7f13c  str x10,[x27]
7102b7f140  strb wzr,[x9, #0x1]
7102b7f144  ldr x9,[x27]
7102b7f148  add x20,x9,#0x1
7102b7f14c  subs x8,x8,#0x2
7102b7f150  str x20,[x27]
7102b7f154  b.ne 0x7102b7f130
7102b7f158  b 0x7102b7f264
7102b7f15c  orr x26,xzr,#0x7fffffffffffffff
7102b7f160  mov w0,#0x10
7102b7f164  mov x1,x26
7102b7f168  bl 0x710392e290
7102b7f16c  cbnz x0,0x7102b7f1b0
7102b7f170  adrp x8,0x7105332000
7102b7f174  ldr x0,[x8, #0xf00]
7102b7f178  cbz x0,0x7102b7f1ac
7102b7f17c  stur wzr,[x29, #-0x100]
7102b7f180  str x26,[sp, #0x140]
7102b7f184  ldr x8,[x0]
7102b7f188  ldr x8,[x8, #0x30]
7102b7f18c  sub x1,x29,#0x100
7102b7f190  add x2,sp,#0x140
7102b7f194  blr x8
7102b7f198  tbz w0,#0x0,0x7102b7f1ac
7102b7f19c  mov w0,#0x10
7102b7f1a0  mov x1,x26
7102b7f1a4  bl 0x710392e290
7102b7f1a8  cbnz x0,0x7102b7f1b0
7102b7f1ac  mov x0,xzr
7102b7f1b0  add x8,x0,x23
7102b7f1b4  add x9,x20,x24
7102b7f1b8  sub x10,x24,#0x1
7102b7f1bc  ands x13,x24,#0x3
7102b7f1c0  b.eq 0x7102b7f1f4
7102b7f1c4  add x11,x20,x13
7102b7f1c8  add x12,x22,#0x17
7102b7f1cc  sub x11,x11,x22
7102b7f1d0  sub x12,x12,x13
7102b7f1d4  neg x13,x13
7102b7f1d8  mov x14,x8
7102b7f1dc  adds x13,x13,#0x1
7102b7f1e0  strb wzr,[x14], #0x1
7102b7f1e4  b.ne 0x7102b7f1dc
7102b7f1e8  add x11,x0,x11
7102b7f1ec  sub x24,x12,x20
7102b7f1f0  b 0x7102b7f1f8
7102b7f1f4  mov x11,x8
7102b7f1f8  sub x9,x9,x22
7102b7f1fc  cmp x10,#0x3
7102b7f200  b.cc 0x7102b7f210
7102b7f204  subs x24,x24,#0x4
7102b7f208  str wzr,[x11], #0x4
7102b7f20c  b.ne 0x7102b7f204
7102b7f210  add x24,x0,x9
7102b7f214  ldr x20,[x28]
7102b7f218  ldr x9,[x27]
7102b7f21c  sub x2,x9,x20
7102b7f220  add x23,x0,x26
7102b7f224  sub x22,x8,x2
7102b7f228  cmp x2,#0x1
7102b7f22c  b.lt 0x7102b7f23c
7102b7f230  mov x0,x22
7102b7f234  mov x1,x20
7102b7f238  bl 0x71039c00e0
7102b7f23c  str x22,[x28]
7102b7f240  str x24,[x27]
7102b7f244  ldr x26,[sp, #0x88]
7102b7f248  str x23,[x25]
7102b7f24c  ldr x23,[sp, #0x78]
7102b7f250  orr w11,wzr,#0x18
7102b7f254  cbz x20,0x7102b7f264
7102b7f258  mov x0,x20
7102b7f25c  bl 0x710392eb40
7102b7f260  orr w11,wzr,#0x18
7102b7f264  add x19,x19,#0x1
7102b7f268  cmp x19,#0x4b
7102b7f26c  b.ne 0x7102b7f08c
7102b7f270  ldr x27,[sp, #0x90]
7102b7f274  mov w1,#0x4b
7102b7f278  add x0,sp,#0x140
7102b7f27c  str wzr,[x27, #0x48]
7102b7f280  stp xzr,xzr,[x27, #0x38]
7102b7f284  stp xzr,xzr,[x27, #0x28]
7102b7f288  str xzr,[sp, #0x140]
7102b7f28c  stp xzr,xzr,[sp, #0x148]
7102b7f290  bl 0x7102b644d0
7102b7f294  mov x19,xzr
7102b7f298  mov w20,#0x17
7102b7f29c  ldr x8,[sp, #0x140]
7102b7f2a0  add x0,x8,x19
7102b7f2a4  mov x1,x20
7102b7f2a8  bl 0x71013e0e10
7102b7f2ac  add x19,x19,#0x18
7102b7f2b0  cmp x19,#0x708
7102b7f2b4  b.ne 0x7102b7f29c
7102b7f2b8  ldp x11,x8,[x27, #0xe0]
7102b7f2bc  subs x8,x8,x11
7102b7f2c0  orr x18,xzr,#-0x5555555555555556
7102b7f2c4  movk x18,#0xaaab
7102b7f2c8  asr x8,x8,#0x3
7102b7f2cc  mul x8,x8,x18
7102b7f2d0  b.eq 0x7102b7f2dc
7102b7f2d4  ldr w9,[x11, #0x8]
7102b7f2d8  b 0x7102b7f2e0
7102b7f2dc  mov x9,xzr
7102b7f2e0  cmp w8,#0x0
7102b7f2e4  cset w10,eq
7102b7f2e8  cmp w9,#0x0
7102b7f2ec  cset w12,eq
7102b7f2f0  orr w10,w10,w12
7102b7f2f4  cmp w10,#0x0
7102b7f2f8  csel w14,w8,wzr,ne
7102b7f2fc  csel w10,w9,wzr,ne
7102b7f300  cmp w14,w8
7102b7f304  ccmp w10,w9,#0x0,eq
7102b7f308  b.eq 0x7102b7f38c
7102b7f30c  orr w12,wzr,#0x18
7102b7f310  mov w13,#0x1
7102b7f314  b 0x7102b7f31c
7102b7f318  ldr x11,[x23]
7102b7f31c  sxtw x15,w14
7102b7f320  smull x14,w14,w12
7102b7f324  ldr x16,[x11, x14, LSL #0x0]
7102b7f328  sxtw x11,w10
7102b7f32c  lsr x14,x11,#0x6
7102b7f330  lsl x11,x13,x11
7102b7f334  ldr x16,[x16, x14, LSL #0x3]
7102b7f338  tst x16,x11
7102b7f33c  b.eq 0x7102b7f35c
7102b7f340  mul x17,x15,x12
7102b7f344  ldr x16,[sp, #0x140]
7102b7f348  lsl x14,x14,#0x3
7102b7f34c  ldr x16,[x16, x17, LSL #0x0]
7102b7f350  ldr x17,[x16, x14, LSL #0x0]
7102b7f354  orr x11,x17,x11
7102b7f358  str x11,[x16, x14, LSL #0x0]
7102b7f35c  add w14,w10,#0x1
7102b7f360  add w11,w15,#0x1
7102b7f364  cmp w14,w9
7102b7f368  csel w14,wzr,w8,lt
7102b7f36c  csinc w16,w9,w10,ge
7102b7f370  cmp w11,w8
7102b7f374  csinc w14,w14,w15,ge
7102b7f378  csel w10,w10,w16,lt
7102b7f37c  cmp w14,w8
7102b7f380  b.ne 0x7102b7f318
7102b7f384  cmp w10,w9
7102b7f388  b.ne 0x7102b7f318
7102b7f38c  ldp x11,x8,[x27, #0xf8]
7102b7f390  subs x8,x8,x11
7102b7f394  asr x8,x8,#0x3
7102b7f398  mul x8,x8,x18
7102b7f39c  b.eq 0x7102b7f3a8
7102b7f3a0  ldr w9,[x11, #0x8]
7102b7f3a4  b 0x7102b7f3ac
7102b7f3a8  mov x9,xzr
7102b7f3ac  cmp w8,#0x0
7102b7f3b0  cset w10,eq
7102b7f3b4  cmp w9,#0x0
7102b7f3b8  ldp x1,x0,[sp, #0x28]
7102b7f3bc  cset w12,eq
7102b7f3c0  orr w10,w10,w12
7102b7f3c4  cmp w10,#0x0
7102b7f3c8  csel w14,w8,wzr,ne
7102b7f3cc  csel w10,w9,wzr,ne
7102b7f3d0  cmp w14,w8
7102b7f3d4  ccmp w10,w9,#0x0,eq
7102b7f3d8  b.eq 0x7102b7f45c
7102b7f3dc  orr w12,wzr,#0x18
7102b7f3e0  mov w13,#0x1
7102b7f3e4  b 0x7102b7f3ec
7102b7f3e8  ldr x11,[x1]
7102b7f3ec  sxtw x15,w14
7102b7f3f0  smull x14,w14,w12
7102b7f3f4  ldr x16,[x11, x14, LSL #0x0]
7102b7f3f8  sxtw x11,w10
7102b7f3fc  lsr x14,x11,#0x6
7102b7f400  lsl x11,x13,x11
7102b7f404  ldr x16,[x16, x14, LSL #0x3]
7102b7f408  tst x16,x11
7102b7f40c  b.eq 0x7102b7f42c
7102b7f410  mul x17,x15,x12
7102b7f414  ldr x16,[sp, #0x140]
7102b7f418  lsl x14,x14,#0x3
7102b7f41c  ldr x16,[x16, x17, LSL #0x0]
7102b7f420  ldr x17,[x16, x14, LSL #0x0]
7102b7f424  orr x11,x17,x11
7102b7f428  str x11,[x16, x14, LSL #0x0]
7102b7f42c  add w14,w10,#0x1
7102b7f430  add w11,w15,#0x1
7102b7f434  cmp w14,w9
7102b7f438  csel w14,wzr,w8,lt
7102b7f43c  csinc w16,w9,w10,ge
7102b7f440  cmp w11,w8
7102b7f444  csinc w14,w14,w15,ge
7102b7f448  csel w10,w10,w16,lt
7102b7f44c  cmp w14,w8
7102b7f450  b.ne 0x7102b7f3e8
7102b7f454  cmp w10,w9
7102b7f458  b.ne 0x7102b7f3e8
7102b7f45c  ldp x11,x8,[x27, #0x110]
7102b7f460  subs x8,x8,x11
7102b7f464  asr x8,x8,#0x3
7102b7f468  mul x8,x8,x18
7102b7f46c  b.eq 0x7102b7f478
7102b7f470  ldr w9,[x11, #0x8]
7102b7f474  b 0x7102b7f47c
7102b7f478  mov x9,xzr
7102b7f47c  cmp w8,#0x0
7102b7f480  cset w10,eq
7102b7f484  cmp w9,#0x0
7102b7f488  cset w12,eq
7102b7f48c  orr w10,w10,w12
7102b7f490  cmp w10,#0x0
7102b7f494  csel w14,w8,wzr,ne
7102b7f498  csel w10,w9,wzr,ne
7102b7f49c  cmp w14,w8
7102b7f4a0  ccmp w10,w9,#0x0,eq
7102b7f4a4  b.eq 0x7102b7f528
7102b7f4a8  orr w12,wzr,#0x18
7102b7f4ac  mov w13,#0x1
7102b7f4b0  b 0x7102b7f4b8
7102b7f4b4  ldr x11,[x0]
7102b7f4b8  sxtw x15,w14
7102b7f4bc  smull x14,w14,w12
7102b7f4c0  ldr x16,[x11, x14, LSL #0x0]
7102b7f4c4  sxtw x11,w10
7102b7f4c8  lsr x14,x11,#0x6
7102b7f4cc  lsl x11,x13,x11
7102b7f4d0  ldr x16,[x16, x14, LSL #0x3]
7102b7f4d4  tst x16,x11
7102b7f4d8  b.eq 0x7102b7f4f8
7102b7f4dc  mul x17,x15,x12
7102b7f4e0  ldr x16,[sp, #0x140]
7102b7f4e4  lsl x14,x14,#0x3
7102b7f4e8  ldr x16,[x16, x17, LSL #0x0]
7102b7f4ec  ldr x17,[x16, x14, LSL #0x0]
7102b7f4f0  orr x11,x17,x11
7102b7f4f4  str x11,[x16, x14, LSL #0x0]
7102b7f4f8  add w14,w10,#0x1
7102b7f4fc  add w11,w15,#0x1
7102b7f500  cmp w14,w9
7102b7f504  csel w14,wzr,w8,lt
7102b7f508  csinc w16,w9,w10,ge
7102b7f50c  cmp w11,w8
7102b7f510  csinc w14,w14,w15,ge
7102b7f514  csel w10,w10,w16,lt
7102b7f518  cmp w14,w8
7102b7f51c  b.ne 0x7102b7f4b4
7102b7f520  cmp w10,w9
7102b7f524  b.ne 0x7102b7f4b4
7102b7f528  mov w0,#0x10
7102b7f52c  orr w1,wzr,#0x38
7102b7f530  bl 0x710392e290
7102b7f534  mov x20,x0
7102b7f538  cbnz x0,0x7102b7f584
7102b7f53c  adrp x8,0x7105332000
7102b7f540  ldr x0,[x8, #0xf00]
7102b7f544  cbz x0,0x7102b7f580
7102b7f548  orr w8,wzr,#0x38
7102b7f54c  str wzr,[sp, #0x2b0]
7102b7f550  add x1,sp,#0x2b0
7102b7f554  stur x8,[x29, #-0x100]
7102b7f558  ldr x8,[x0]
7102b7f55c  ldr x8,[x8, #0x30]
7102b7f560  sub x2,x29,#0x100
7102b7f564  blr x8
7102b7f568  tbz w0,#0x0,0x7102b7f580
7102b7f56c  mov w0,#0x10
7102b7f570  orr w1,wzr,#0x38
7102b7f574  bl 0x710392e290
7102b7f578  mov x20,x0
7102b7f57c  cbnz x0,0x7102b7f584
7102b7f580  mov x20,xzr
7102b7f584  mov w2,#0x1
7102b7f588  add x3,sp,#0x140
7102b7f58c  mov x0,x20
7102b7f590  mov x1,x26
7102b7f594  bl 0x7102b88790
7102b7f598  ldr x8,[sp, #0x20]
7102b7f59c  ldr x23,[x8]
7102b7f5a0  str x20,[x8]
7102b7f5a4  cbz x23,0x7102b7f604
7102b7f5a8  ldr x0,[x23, #0x20]
7102b7f5ac  cbz x0,0x7102b7f5b8
7102b7f5b0  str x0,[x23, #0x28]
7102b7f5b4  bl 0x710392eb40
7102b7f5b8  ldr x19,[x23, #0x8]
7102b7f5bc  cbz x19,0x7102b7f5fc
7102b7f5c0  ldr x8,[x23, #0x10]
7102b7f5c4  cmp x8,x19
7102b7f5c8  b.eq 0x7102b826b4
7102b7f5cc  mov x20,x8
7102b7f5d0  ldr x0,[x20, #-0x18]!
7102b7f5d4  cbz x0,0x7102b7f5e0
7102b7f5d8  stur x0,[x8, #-0x10]
7102b7f5dc  bl 0x710392eb40
7102b7f5e0  cmp x19,x20
7102b7f5e4  mov x8,x20
7102b7f5e8  b.ne 0x7102b7f5d0
7102b7f5ec  ldr x0,[x23, #0x8]
7102b7f5f0  str x19,[x23, #0x10]
7102b7f5f4  cbz x0,0x7102b7f5fc
7102b7f5f8  bl 0x710392eb40
7102b7f5fc  mov x0,x23
7102b7f600  bl 0x710392eb40
7102b7f604  ldr x19,[sp, #0x140]
7102b7f608  cbz x19,0x7102b7f63c
7102b7f60c  ldr x20,[sp, #0x148]
7102b7f610  cmp x20,x19
7102b7f614  b.eq 0x7102b82604
7102b7f618  ldr x0,[x20, #-0x18]!
7102b7f61c  cbz x0,0x7102b7f624
7102b7f620  bl 0x710392eb40
7102b7f624  cmp x19,x20
7102b7f628  b.ne 0x7102b7f618
7102b7f62c  ldr x0,[sp, #0x140]
7102b7f630  str x19,[sp, #0x148]
7102b7f634  cbz x0,0x7102b7f63c
7102b7f638  bl 0x710392eb40
7102b7f63c  mov w1,#0x4b
7102b7f640  add x0,sp,#0x140
7102b7f644  str xzr,[sp, #0x140]
7102b7f648  stp xzr,xzr,[sp, #0x148]
7102b7f64c  bl 0x7102b644d0
7102b7f650  mov x19,xzr
7102b7f654  mov w20,#0x17
7102b7f658  ldr x8,[sp, #0x140]
7102b7f65c  add x0,x8,x19
7102b7f660  mov x1,x20
7102b7f664  bl 0x71013e0e10
7102b7f668  add x19,x19,#0x18
7102b7f66c  cmp x19,#0x708
7102b7f670  b.ne 0x7102b7f658
7102b7f674  mov x8,xzr
7102b7f678  orr w9,wzr,#0x18
7102b7f67c  mov w10,#0x1
7102b7f680  madd x12,x8,x9,x27
7102b7f684  ldr x11,[x12, #0x248]
7102b7f688  ldr x12,[x12, #0x250]
7102b7f68c  cmp x11,x12
7102b7f690  b.eq 0x7102b7f72c
7102b7f694  sub x13,x12,#0x8
7102b7f698  sub x13,x13,x11
7102b7f69c  tbnz w13,#0x3,0x7102b7f6c8
7102b7f6a0  ldpsw x15,x16,[x11], #0x8
7102b7f6a4  mul x15,x15,x9
7102b7f6a8  ldr x14,[sp, #0x140]
7102b7f6ac  ldr x14,[x14, x15, LSL #0x0]
7102b7f6b0  lsr x15,x16,#0x3
7102b7f6b4  lsl x16,x10,x16
7102b7f6b8  and x15,x15,#0x1ffffffffffffff8
7102b7f6bc  ldr x17,[x14, x15, LSL #0x0]
7102b7f6c0  orr x16,x16,x17
7102b7f6c4  str x16,[x14, x15, LSL #0x0]
7102b7f6c8  cmp x13,#0x8
7102b7f6cc  b.cc 0x7102b7f72c
7102b7f6d0  ldpsw x13,x14,[x11]
7102b7f6d4  mul x13,x13,x9
7102b7f6d8  ldr x15,[sp, #0x140]
7102b7f6dc  ldr x13,[x15, x13, LSL #0x0]
7102b7f6e0  lsr x15,x14,#0x3
7102b7f6e4  lsl x14,x10,x14
7102b7f6e8  and x15,x15,#0x1ffffffffffffff8
7102b7f6ec  ldr x16,[x13, x15, LSL #0x0]
7102b7f6f0  orr x14,x14,x16
7102b7f6f4  str x14,[x13, x15, LSL #0x0]
7102b7f6f8  ldr x15,[sp, #0x140]
7102b7f6fc  ldpsw x13,x14,[x11, #0x8]
7102b7f700  add x11,x11,#0x10
7102b7f704  cmp x11,x12
7102b7f708  mul x13,x13,x9
7102b7f70c  ldr x13,[x15, x13, LSL #0x0]
7102b7f710  lsr x15,x14,#0x3
7102b7f714  lsl x14,x10,x14
7102b7f718  and x15,x15,#0x1ffffffffffffff8
7102b7f71c  ldr x16,[x13, x15, LSL #0x0]
7102b7f720  orr x14,x14,x16
7102b7f724  str x14,[x13, x15, LSL #0x0]
7102b7f728  b.ne 0x7102b7f6d0
7102b7f72c  add x8,x8,#0x1
7102b7f730  cmp x8,#0xf
7102b7f734  b.ne 0x7102b7f680
7102b7f738  mov w0,#0x10
7102b7f73c  orr w1,wzr,#0x38
7102b7f740  bl 0x710392e290
7102b7f744  mov x20,x0
7102b7f748  cbnz x0,0x7102b7f794
7102b7f74c  adrp x8,0x7105332000
7102b7f750  ldr x0,[x8, #0xf00]
7102b7f754  cbz x0,0x7102b7f790
7102b7f758  orr w8,wzr,#0x38
7102b7f75c  str wzr,[sp, #0x2b0]
7102b7f760  add x1,sp,#0x2b0
7102b7f764  stur x8,[x29, #-0x100]
7102b7f768  ldr x8,[x0]
7102b7f76c  ldr x8,[x8, #0x30]
7102b7f770  sub x2,x29,#0x100
7102b7f774  blr x8
7102b7f778  tbz w0,#0x0,0x7102b7f790
7102b7f77c  mov w0,#0x10
7102b7f780  orr w1,wzr,#0x38
7102b7f784  bl 0x710392e290
7102b7f788  mov x20,x0
7102b7f78c  cbnz x0,0x7102b7f794
7102b7f790  mov x20,xzr
7102b7f794  mov w2,#0x2
7102b7f798  add x3,sp,#0x140
7102b7f79c  mov x0,x20
7102b7f7a0  mov x1,x26
7102b7f7a4  bl 0x7102b88790
7102b7f7a8  ldr x23,[x27, #0xd0]
7102b7f7ac  str x20,[x27, #0xd0]
7102b7f7b0  cbz x23,0x7102b7f810
7102b7f7b4  ldr x0,[x23, #0x20]
7102b7f7b8  cbz x0,0x7102b7f7c4
7102b7f7bc  str x0,[x23, #0x28]
7102b7f7c0  bl 0x710392eb40
7102b7f7c4  ldr x19,[x23, #0x8]
7102b7f7c8  cbz x19,0x7102b7f808
7102b7f7cc  ldr x8,[x23, #0x10]
7102b7f7d0  cmp x8,x19
7102b7f7d4  b.eq 0x7102b826c4
7102b7f7d8  mov x20,x8
7102b7f7dc  ldr x0,[x20, #-0x18]!
7102b7f7e0  cbz x0,0x7102b7f7ec
7102b7f7e4  stur x0,[x8, #-0x10]
7102b7f7e8  bl 0x710392eb40
7102b7f7ec  cmp x19,x20
7102b7f7f0  mov x8,x20
7102b7f7f4  b.ne 0x7102b7f7dc
7102b7f7f8  ldr x0,[x23, #0x8]
7102b7f7fc  str x19,[x23, #0x10]
7102b7f800  cbz x0,0x7102b7f808
7102b7f804  bl 0x710392eb40
7102b7f808  mov x0,x23
7102b7f80c  bl 0x710392eb40
7102b7f810  ldr x19,[sp, #0x140]
7102b7f814  cbz x19,0x7102b7f848
7102b7f818  ldr x20,[sp, #0x148]
7102b7f81c  cmp x20,x19
7102b7f820  b.eq 0x7102b82614
7102b7f824  ldr x0,[x20, #-0x18]!
7102b7f828  cbz x0,0x7102b7f830
7102b7f82c  bl 0x710392eb40
7102b7f830  cmp x19,x20
7102b7f834  b.ne 0x7102b7f824
7102b7f838  ldr x0,[sp, #0x140]
7102b7f83c  str x19,[sp, #0x148]
7102b7f840  cbz x0,0x7102b7f848
7102b7f844  bl 0x710392eb40
7102b7f848  mov w1,#0x4b
7102b7f84c  add x0,sp,#0x140
7102b7f850  str xzr,[sp, #0x140]
7102b7f854  stp xzr,xzr,[sp, #0x148]
7102b7f858  bl 0x7102b644d0
7102b7f85c  mov x19,xzr
7102b7f860  mov w20,#0x17
7102b7f864  ldr x8,[sp, #0x140]
7102b7f868  add x0,x8,x19
7102b7f86c  mov x1,x20
7102b7f870  bl 0x71013e0e10
7102b7f874  add x19,x19,#0x18
7102b7f878  cmp x19,#0x708
7102b7f87c  b.ne 0x7102b7f864
7102b7f880  ldp x8,x9,[x27, #0x128]
7102b7f884  cmp x8,x9
7102b7f888  b.eq 0x7102b7f8c8
7102b7f88c  orr w10,wzr,#0x18
7102b7f890  mov w11,#0x1
7102b7f894  ldpsw x12,x13,[x8]
7102b7f898  add x8,x8,#0x8
7102b7f89c  cmp x8,x9
7102b7f8a0  mul x12,x12,x10
7102b7f8a4  ldr x14,[sp, #0x140]
7102b7f8a8  ldr x12,[x14, x12, LSL #0x0]
7102b7f8ac  lsr x14,x13,#0x3
7102b7f8b0  lsl x13,x11,x13
7102b7f8b4  and x14,x14,#0x1ffffffffffffff8
7102b7f8b8  ldr x15,[x12, x14, LSL #0x0]
7102b7f8bc  orr x13,x13,x15
7102b7f8c0  str x13,[x12, x14, LSL #0x0]
7102b7f8c4  b.ne 0x7102b7f894
7102b7f8c8  ldp x8,x9,[x27, #0x140]
7102b7f8cc  cmp x8,x9
7102b7f8d0  b.eq 0x7102b7f910
7102b7f8d4  orr w10,wzr,#0x18
7102b7f8d8  mov w11,#0x1
7102b7f8dc  ldpsw x12,x13,[x8]
7102b7f8e0  add x8,x8,#0x8
7102b7f8e4  cmp x8,x9
7102b7f8e8  mul x12,x12,x10
7102b7f8ec  ldr x14,[sp, #0x140]
7102b7f8f0  ldr x12,[x14, x12, LSL #0x0]
7102b7f8f4  lsr x14,x13,#0x3
7102b7f8f8  lsl x13,x11,x13
7102b7f8fc  and x14,x14,#0x1ffffffffffffff8
7102b7f900  ldr x15,[x12, x14, LSL #0x0]
7102b7f904  orr x13,x13,x15
7102b7f908  str x13,[x12, x14, LSL #0x0]
7102b7f90c  b.ne 0x7102b7f8dc
7102b7f910  ldp x8,x9,[x27, #0x158]
7102b7f914  cmp x8,x9
7102b7f918  b.eq 0x7102b7f958
7102b7f91c  orr w10,wzr,#0x18
7102b7f920  mov w11,#0x1
7102b7f924  ldpsw x12,x13,[x8]
7102b7f928  add x8,x8,#0x8
7102b7f92c  cmp x8,x9
7102b7f930  mul x12,x12,x10
7102b7f934  ldr x14,[sp, #0x140]
7102b7f938  ldr x12,[x14, x12, LSL #0x0]
7102b7f93c  lsr x14,x13,#0x3
7102b7f940  lsl x13,x11,x13
7102b7f944  and x14,x14,#0x1ffffffffffffff8
7102b7f948  ldr x15,[x12, x14, LSL #0x0]
7102b7f94c  orr x13,x13,x15
7102b7f950  str x13,[x12, x14, LSL #0x0]
7102b7f954  b.ne 0x7102b7f924
7102b7f958  ldp x8,x9,[x27, #0x170]
7102b7f95c  cmp x8,x9
7102b7f960  b.eq 0x7102b7f9a0
7102b7f964  orr w10,wzr,#0x18
7102b7f968  mov w11,#0x1
7102b7f96c  ldpsw x12,x13,[x8]
7102b7f970  add x8,x8,#0x8
7102b7f974  cmp x8,x9
7102b7f978  mul x12,x12,x10
7102b7f97c  ldr x14,[sp, #0x140]
7102b7f980  ldr x12,[x14, x12, LSL #0x0]
7102b7f984  lsr x14,x13,#0x3
7102b7f988  lsl x13,x11,x13
7102b7f98c  and x14,x14,#0x1ffffffffffffff8
7102b7f990  ldr x15,[x12, x14, LSL #0x0]
7102b7f994  orr x13,x13,x15
7102b7f998  str x13,[x12, x14, LSL #0x0]
7102b7f99c  b.ne 0x7102b7f96c
7102b7f9a0  ldp x8,x9,[x27, #0x188]
7102b7f9a4  cmp x8,x9
7102b7f9a8  b.eq 0x7102b7f9e8
7102b7f9ac  orr w10,wzr,#0x18
7102b7f9b0  mov w11,#0x1
7102b7f9b4  ldpsw x12,x13,[x8]
7102b7f9b8  add x8,x8,#0x8
7102b7f9bc  cmp x8,x9
7102b7f9c0  mul x12,x12,x10
7102b7f9c4  ldr x14,[sp, #0x140]
7102b7f9c8  ldr x12,[x14, x12, LSL #0x0]
7102b7f9cc  lsr x14,x13,#0x3
7102b7f9d0  lsl x13,x11,x13
7102b7f9d4  and x14,x14,#0x1ffffffffffffff8
7102b7f9d8  ldr x15,[x12, x14, LSL #0x0]
7102b7f9dc  orr x13,x13,x15
7102b7f9e0  str x13,[x12, x14, LSL #0x0]
7102b7f9e4  b.ne 0x7102b7f9b4
7102b7f9e8  ldp x8,x9,[x27, #0x1a0]
7102b7f9ec  cmp x8,x9
7102b7f9f0  b.eq 0x7102b7fa30
7102b7f9f4  orr w10,wzr,#0x18
7102b7f9f8  mov w11,#0x1
7102b7f9fc  ldpsw x12,x13,[x8]
7102b7fa00  add x8,x8,#0x8
7102b7fa04  cmp x8,x9
7102b7fa08  mul x12,x12,x10
7102b7fa0c  ldr x14,[sp, #0x140]
7102b7fa10  ldr x12,[x14, x12, LSL #0x0]
7102b7fa14  lsr x14,x13,#0x3
7102b7fa18  lsl x13,x11,x13
7102b7fa1c  and x14,x14,#0x1ffffffffffffff8
7102b7fa20  ldr x15,[x12, x14, LSL #0x0]
7102b7fa24  orr x13,x13,x15
7102b7fa28  str x13,[x12, x14, LSL #0x0]
7102b7fa2c  b.ne 0x7102b7f9fc
7102b7fa30  ldp x8,x9,[x27, #0x1b8]
7102b7fa34  cmp x8,x9
7102b7fa38  b.eq 0x7102b7fa78
7102b7fa3c  orr w10,wzr,#0x18
7102b7fa40  mov w11,#0x1
7102b7fa44  ldpsw x12,x13,[x8]
7102b7fa48  add x8,x8,#0x8
7102b7fa4c  cmp x8,x9
7102b7fa50  mul x12,x12,x10
7102b7fa54  ldr x14,[sp, #0x140]
7102b7fa58  ldr x12,[x14, x12, LSL #0x0]
7102b7fa5c  lsr x14,x13,#0x3
7102b7fa60  lsl x13,x11,x13
7102b7fa64  and x14,x14,#0x1ffffffffffffff8
7102b7fa68  ldr x15,[x12, x14, LSL #0x0]
7102b7fa6c  orr x13,x13,x15
7102b7fa70  str x13,[x12, x14, LSL #0x0]
7102b7fa74  b.ne 0x7102b7fa44
7102b7fa78  ldp x8,x9,[x27, #0x1d0]
7102b7fa7c  cmp x8,x9
7102b7fa80  b.eq 0x7102b7fac0
7102b7fa84  orr w10,wzr,#0x18
7102b7fa88  mov w11,#0x1
7102b7fa8c  ldpsw x12,x13,[x8]
7102b7fa90  add x8,x8,#0x8
7102b7fa94  cmp x8,x9
7102b7fa98  mul x12,x12,x10
7102b7fa9c  ldr x14,[sp, #0x140]
7102b7faa0  ldr x12,[x14, x12, LSL #0x0]
7102b7faa4  lsr x14,x13,#0x3
7102b7faa8  lsl x13,x11,x13
7102b7faac  and x14,x14,#0x1ffffffffffffff8
7102b7fab0  ldr x15,[x12, x14, LSL #0x0]
7102b7fab4  orr x13,x13,x15
7102b7fab8  str x13,[x12, x14, LSL #0x0]
7102b7fabc  b.ne 0x7102b7fa8c
7102b7fac0  ldp x8,x9,[x27, #0x1e8]
7102b7fac4  cmp x8,x9
7102b7fac8  b.eq 0x7102b7fb08
7102b7facc  orr w10,wzr,#0x18
7102b7fad0  mov w11,#0x1
7102b7fad4  ldpsw x12,x13,[x8]
7102b7fad8  add x8,x8,#0x8
7102b7fadc  cmp x8,x9
7102b7fae0  mul x12,x12,x10
7102b7fae4  ldr x14,[sp, #0x140]
7102b7fae8  ldr x12,[x14, x12, LSL #0x0]
7102b7faec  lsr x14,x13,#0x3
7102b7faf0  lsl x13,x11,x13
7102b7faf4  and x14,x14,#0x1ffffffffffffff8
7102b7faf8  ldr x15,[x12, x14, LSL #0x0]
7102b7fafc  orr x13,x13,x15
7102b7fb00  str x13,[x12, x14, LSL #0x0]
7102b7fb04  b.ne 0x7102b7fad4
7102b7fb08  ldr x8,[x27, #0x200]
7102b7fb0c  ldr x9,[x27, #0x208]
7102b7fb10  cmp x8,x9
7102b7fb14  b.eq 0x7102b7fb54
7102b7fb18  orr w10,wzr,#0x18
7102b7fb1c  mov w11,#0x1
7102b7fb20  ldpsw x12,x13,[x8]
7102b7fb24  add x8,x8,#0x8
7102b7fb28  cmp x8,x9
7102b7fb2c  mul x12,x12,x10
7102b7fb30  ldr x14,[sp, #0x140]
7102b7fb34  ldr x12,[x14, x12, LSL #0x0]
7102b7fb38  lsr x14,x13,#0x3
7102b7fb3c  lsl x13,x11,x13
7102b7fb40  and x14,x14,#0x1ffffffffffffff8
7102b7fb44  ldr x15,[x12, x14, LSL #0x0]
7102b7fb48  orr x13,x13,x15
7102b7fb4c  str x13,[x12, x14, LSL #0x0]
7102b7fb50  b.ne 0x7102b7fb20
7102b7fb54  ldr x8,[x27, #0x218]
7102b7fb58  ldr x9,[x27, #0x220]
7102b7fb5c  cmp x8,x9
7102b7fb60  b.eq 0x7102b7fba0
7102b7fb64  orr w10,wzr,#0x18
7102b7fb68  mov w11,#0x1
7102b7fb6c  ldpsw x12,x13,[x8]
7102b7fb70  add x8,x8,#0x8
7102b7fb74  cmp x8,x9
7102b7fb78  mul x12,x12,x10
7102b7fb7c  ldr x14,[sp, #0x140]
7102b7fb80  ldr x12,[x14, x12, LSL #0x0]
7102b7fb84  lsr x14,x13,#0x3
7102b7fb88  lsl x13,x11,x13
7102b7fb8c  and x14,x14,#0x1ffffffffffffff8
7102b7fb90  ldr x15,[x12, x14, LSL #0x0]
7102b7fb94  orr x13,x13,x15
7102b7fb98  str x13,[x12, x14, LSL #0x0]
7102b7fb9c  b.ne 0x7102b7fb6c
7102b7fba0  ldr x8,[x27, #0x230]
7102b7fba4  ldr x9,[x27, #0x238]
7102b7fba8  cmp x8,x9
7102b7fbac  b.eq 0x7102b7fbec
7102b7fbb0  orr w10,wzr,#0x18
7102b7fbb4  mov w11,#0x1
7102b7fbb8  ldpsw x12,x13,[x8]
7102b7fbbc  add x8,x8,#0x8
7102b7fbc0  cmp x8,x9
7102b7fbc4  mul x12,x12,x10
7102b7fbc8  ldr x14,[sp, #0x140]
7102b7fbcc  ldr x12,[x14, x12, LSL #0x0]
7102b7fbd0  lsr x14,x13,#0x3
7102b7fbd4  lsl x13,x11,x13
7102b7fbd8  and x14,x14,#0x1ffffffffffffff8
7102b7fbdc  ldr x15,[x12, x14, LSL #0x0]
7102b7fbe0  orr x13,x13,x15
7102b7fbe4  str x13,[x12, x14, LSL #0x0]
7102b7fbe8  b.ne 0x7102b7fbb8
7102b7fbec  mov w0,#0x10
7102b7fbf0  orr w1,wzr,#0x38
7102b7fbf4  bl 0x710392e290
7102b7fbf8  mov x20,x0
7102b7fbfc  cbnz x0,0x7102b7fc48
7102b7fc00  adrp x8,0x7105332000
7102b7fc04  ldr x0,[x8, #0xf00]
7102b7fc08  cbz x0,0x7102b7fc44
7102b7fc0c  orr w8,wzr,#0x38
7102b7fc10  str wzr,[sp, #0x2b0]
7102b7fc14  add x1,sp,#0x2b0
7102b7fc18  stur x8,[x29, #-0x100]
7102b7fc1c  ldr x8,[x0]
7102b7fc20  ldr x8,[x8, #0x30]
7102b7fc24  sub x2,x29,#0x100
7102b7fc28  blr x8
7102b7fc2c  tbz w0,#0x0,0x7102b7fc44
7102b7fc30  mov w0,#0x10
7102b7fc34  orr w1,wzr,#0x38
7102b7fc38  bl 0x710392e290
7102b7fc3c  mov x20,x0
7102b7fc40  cbnz x0,0x7102b7fc48
7102b7fc44  mov x20,xzr
7102b7fc48  orr w2,wzr,#0x3
7102b7fc4c  add x3,sp,#0x140
7102b7fc50  mov x0,x20
7102b7fc54  mov x1,x26
7102b7fc58  bl 0x7102b88790
7102b7fc5c  ldr x23,[x27, #0xd8]
7102b7fc60  str x20,[x27, #0xd8]
7102b7fc64  cbz x23,0x7102b7fcc4
7102b7fc68  ldr x0,[x23, #0x20]
7102b7fc6c  cbz x0,0x7102b7fc78
7102b7fc70  str x0,[x23, #0x28]
7102b7fc74  bl 0x710392eb40
7102b7fc78  ldr x19,[x23, #0x8]
7102b7fc7c  cbz x19,0x7102b7fcbc
7102b7fc80  ldr x8,[x23, #0x10]
7102b7fc84  cmp x8,x19
7102b7fc88  b.eq 0x7102b826d4
7102b7fc8c  mov x20,x8
7102b7fc90  ldr x0,[x20, #-0x18]!
7102b7fc94  cbz x0,0x7102b7fca0
7102b7fc98  stur x0,[x8, #-0x10]
7102b7fc9c  bl 0x710392eb40
7102b7fca0  cmp x19,x20
7102b7fca4  mov x8,x20
7102b7fca8  b.ne 0x7102b7fc90
7102b7fcac  ldr x0,[x23, #0x8]
7102b7fcb0  str x19,[x23, #0x10]
7102b7fcb4  cbz x0,0x7102b7fcbc
7102b7fcb8  bl 0x710392eb40
7102b7fcbc  mov x0,x23
7102b7fcc0  bl 0x710392eb40
7102b7fcc4  ldr x19,[sp, #0x140]
7102b7fcc8  cbz x19,0x7102b7fcfc
7102b7fccc  ldr x20,[sp, #0x148]
7102b7fcd0  cmp x20,x19
7102b7fcd4  b.eq 0x7102b82624
7102b7fcd8  ldr x0,[x20, #-0x18]!
7102b7fcdc  cbz x0,0x7102b7fce4
7102b7fce0  bl 0x710392eb40
7102b7fce4  cmp x19,x20
7102b7fce8  b.ne 0x7102b7fcd8
7102b7fcec  ldr x0,[sp, #0x140]
7102b7fcf0  str x19,[sp, #0x148]
7102b7fcf4  cbz x0,0x7102b7fcfc
7102b7fcf8  bl 0x710392eb40
7102b7fcfc  ldr x19,[x27, #0x3b0]
7102b7fd00  ldr x21,[x27, #0x3b8]
7102b7fd04  cmp x19,x21
7102b7fd08  b.eq 0x7102b7fe88
7102b7fd0c  orr x25,xzr,#0x6666666666666666
7102b7fd10  orr x26,xzr,#-0x3333333333333334
7102b7fd14  movk x25,#0x666, LSL #48
7102b7fd18  movk x26,#0xcccd
7102b7fd1c  mov w28,#0x28
7102b7fd20  ldp x8,x9,[x27, #0x58]
7102b7fd24  cmp x8,x9
7102b7fd28  b.cs 0x7102b7fd58
7102b7fd2c  ldp x9,x10,[x19]
7102b7fd30  strb wzr,[x8, #0x18]
7102b7fd34  stp x9,x10,[x8]
7102b7fd38  orr w9,wzr,#0x3
7102b7fd3c  str x9,[x8, #0x10]
7102b7fd40  strh wzr,[x8, #0x24]
7102b7fd44  stur xzr,[x8, #0x1c]
7102b7fd48  ldr x8,[x27, #0x58]
7102b7fd4c  add x8,x8,#0x28
7102b7fd50  str x8,[x27, #0x58]
7102b7fd54  b 0x7102b7fe7c
7102b7fd58  ldr x10,[sp, #0x38]
7102b7fd5c  ldr x23,[x10]
7102b7fd60  sub x24,x8,x23
7102b7fd64  asr x8,x24,#0x3
7102b7fd68  mul x27,x8,x26
7102b7fd6c  add x8,x27,#0x1
7102b7fd70  cmp x8,x25
7102b7fd74  b.hi 0x7102b82bc8
7102b7fd78  sub x9,x9,x23
7102b7fd7c  asr x9,x9,#0x3
7102b7fd80  mul x9,x9,x26
7102b7fd84  orr x10,xzr,#0x3333333333333333
7102b7fd88  movk x10,#0x3332
7102b7fd8c  movk x10,#0x333, LSL #48
7102b7fd90  cmp x9,x10
7102b7fd94  mov x22,x25
7102b7fd98  b.hi 0x7102b7fdac
7102b7fd9c  lsl x9,x9,#0x1
7102b7fda0  cmp x9,x8
7102b7fda4  csel x22,x8,x9,cc
7102b7fda8  cbz x22,0x7102b7fe08
7102b7fdac  add x8,x22,x22, LSL #0x2
7102b7fdb0  lsl x8,x8,#0x3
7102b7fdb4  cmp x8,#0x0
7102b7fdb8  csinc x20,x8,xzr,ne
7102b7fdbc  mov w0,#0x10
7102b7fdc0  mov x1,x20
7102b7fdc4  bl 0x710392e290
7102b7fdc8  cbnz x0,0x7102b7fe0c
7102b7fdcc  adrp x8,0x7105332000
7102b7fdd0  ldr x0,[x8, #0xf00]
7102b7fdd4  cbz x0,0x7102b7fe08
7102b7fdd8  stur wzr,[x29, #-0x100]
7102b7fddc  str x20,[sp, #0x140]
7102b7fde0  ldr x8,[x0]
7102b7fde4  ldr x8,[x8, #0x30]
7102b7fde8  sub x1,x29,#0x100
7102b7fdec  add x2,sp,#0x140
7102b7fdf0  blr x8
7102b7fdf4  tbz w0,#0x0,0x7102b7fe08
7102b7fdf8  mov w0,#0x10
7102b7fdfc  mov x1,x20
7102b7fe00  bl 0x710392e290
7102b7fe04  cbnz x0,0x7102b7fe0c
7102b7fe08  mov x0,xzr
7102b7fe0c  madd x8,x27,x28,x0
7102b7fe10  ldp x9,x10,[x19]
7102b7fe14  stp x9,x10,[x8]
7102b7fe18  orr w9,wzr,#0x3
7102b7fe1c  str x9,[x8, #0x10]
7102b7fe20  orr x9,xzr,#-0x6666666666666667
7102b7fe24  smulh x9,x24,x9
7102b7fe28  asr x10,x9,#0x4
7102b7fe2c  add x9,x10,x9, LSR #0x3f
7102b7fe30  madd x22,x22,x28,x0
7102b7fe34  add x27,x8,#0x28
7102b7fe38  strb wzr,[x8, #0x18]
7102b7fe3c  strh wzr,[x8, #0x24]
7102b7fe40  stur xzr,[x8, #0x1c]
7102b7fe44  madd x20,x9,x28,x8
7102b7fe48  cmp x24,#0x1
7102b7fe4c  b.lt 0x7102b7fe60
7102b7fe50  mov x0,x20
7102b7fe54  mov x1,x23
7102b7fe58  mov x2,x24
7102b7fe5c  bl 0x71039c00e0
7102b7fe60  ldr x8,[sp, #0x90]
7102b7fe64  stp x20,x27,[x8, #0x50]
7102b7fe68  mov x27,x8
7102b7fe6c  str x22,[x8, #0x60]
7102b7fe70  cbz x23,0x7102b7fe7c
7102b7fe74  mov x0,x23
7102b7fe78  bl 0x710392eb40
7102b7fe7c  add x19,x19,#0x10
7102b7fe80  cmp x21,x19
7102b7fe84  b.ne 0x7102b7fd20
7102b7fe88  ldrb w8,[x27, #0x10]
7102b7fe8c  cbz w8,0x7102b7ffd8
7102b7fe90  ldp x19,x20,[x27, #0x50]
7102b7fe94  cmp x19,x20
7102b7fe98  b.eq 0x7102b7ffd8
7102b7fe9c  orr w22,wzr,#0x18
7102b7fea0  mov w23,#0x1
7102b7fea4  ldr x8,[x27]
7102b7fea8  ldr x8,[x8, #0x340]
7102b7feac  ldp w9,w10,[x8]
7102b7feb0  eor w9,w9,w9, LSL #0xb
7102b7feb4  ldp w11,w12,[x8, #0x8]
7102b7feb8  stp w10,w11,[x8]
7102b7febc  mov w10,#0xaaab
7102b7fec0  movk w10,#0xaaaa, LSL #16
7102b7fec4  eor w9,w9,w9, LSR #0x8
7102b7fec8  eor w9,w9,w12
7102b7fecc  eor w9,w9,w12, LSR #0x13
7102b7fed0  umull x10,w9,w10
7102b7fed4  stp w12,w9,[x8, #0x8]
7102b7fed8  ldr w11,[x19, #0xc]
7102b7fedc  lsr x8,x10,#0x21
7102b7fee0  ldp x24,x10,[x19]
7102b7fee4  add w8,w8,w8, LSL #0x1
7102b7fee8  sub w8,w9,w8
7102b7feec  lsr x9,x24,#0x20
7102b7fef0  str w8,[x19, #0x10]
7102b7fef4  cbz w10,0x7102b7ff10
7102b7fef8  cbz w11,0x7102b7ff10
7102b7fefc  ldr w12,[x19, #0x4]
7102b7ff00  add w25,w12,w11
7102b7ff04  mov w26,w24
7102b7ff08  mov w27,w9
7102b7ff0c  b 0x7102b7ff20
7102b7ff10  ldr w12,[x19, #0x4]
7102b7ff14  add w25,w12,w11
7102b7ff18  add w26,w10,w24
7102b7ff1c  mov w27,w25
7102b7ff20  add w28,w10,w24
7102b7ff24  cmp w26,w28
7102b7ff28  b.ne 0x7102b7ff34
7102b7ff2c  cmp w27,w25
7102b7ff30  b.eq 0x7102b7ffc8
7102b7ff34  lsr x10,x10,#0x20
7102b7ff38  add w21,w10,w9
7102b7ff3c  b 0x7102b7ff44
7102b7ff40  ldr w8,[x19, #0x10]
7102b7ff44  ldr x0,[sp, #0x90]
7102b7ff48  mov w9,w26
7102b7ff4c  bfm x9,x27,#0x20,#0x1f
7102b7ff50  str x9,[sp, #0x140]
7102b7ff54  smull x10,w26,w22
7102b7ff58  sxtw x9,w27
7102b7ff5c  smaddl x8,w8,w22,x0
7102b7ff60  ldr x8,[x8, #0xe0]
7102b7ff64  ldr x8,[x8, x10, LSL #0x0]
7102b7ff68  lsr x10,x9,#0x3
7102b7ff6c  lsl x9,x23,x9
7102b7ff70  and x10,x10,#0x1ffffffffffffff8
7102b7ff74  ldr x8,[x8, x10, LSL #0x0]
7102b7ff78  tst x9,x8
7102b7ff7c  b.eq 0x7102b7ff8c
7102b7ff80  add x1,sp,#0x140
7102b7ff84  mov w2,#0x1
7102b7ff88  bl 0x7102b87480
7102b7ff8c  add w26,w26,#0x1
7102b7ff90  cmp w28,w26
7102b7ff94  b.le 0x7102b7ffac
7102b7ff98  cmp w26,w28
7102b7ff9c  b.ne 0x7102b7ff40
7102b7ffa0  cmp w27,w25
7102b7ffa4  b.ne 0x7102b7ff40
7102b7ffa8  b 0x7102b7ffc8
7102b7ffac  add w8,w27,#0x1
7102b7ffb0  cmp w21,w8
7102b7ffb4  csel w26,w24,w28,gt
7102b7ffb8  csinc w27,w21,w27,le
7102b7ffbc  cmp w26,w28
7102b7ffc0  b.eq 0x7102b7ffa0
7102b7ffc4  b 0x7102b7ff40
7102b7ffc8  ldr x27,[sp, #0x90]
7102b7ffcc  add x19,x19,#0x28
7102b7ffd0  cmp x19,x20
7102b7ffd4  b.ne 0x7102b7fea4
7102b7ffd8  ldr x26,[sp, #0x88]
7102b7ffdc  mov w19,wzr
7102b7ffe0  add x20,x27,#0x3e0
7102b7ffe4  adrp x22,0x71043bc000
7102b7ffe8  add x22,x22,#0x7e8
7102b7ffec  add x21,x27,#0x448
7102b7fff0  adrp x23,0x71042a1000
7102b7fff4  add x23,x23,#0x2e3
7102b7fff8  add x25,x27,#0x4b0
7102b7fffc  adrp x24,0x7104328000
7102b80000  add x24,x24,#0x19c
7102b80004  ldr x8,[x27, #0x440]
7102b80008  cmp x8,#0xc
7102b8000c  b.cs 0x7102b81da0
7102b80010  ldr x1,[x27]
7102b80014  cmp w19,#0x0
7102b80018  add x0,x20,x8, LSL #0x3
7102b8001c  cset w3,ne
7102b80020  mov x2,x22
7102b80024  bl 0x7102b8c4d0
7102b80028  ldr x8,[x27, #0x440]
7102b8002c  add x8,x8,#0x1
7102b80030  str x8,[x27, #0x440]
7102b80034  ldr x8,[x27, #0x4a8]
7102b80038  cmp x8,#0xc
7102b8003c  b.cs 0x7102b81da0
7102b80040  ldr x1,[x27]
7102b80044  cmp w19,#0x0
7102b80048  add x0,x21,x8, LSL #0x3
7102b8004c  cset w3,ne
7102b80050  mov x2,x23
7102b80054  bl 0x7102b8c4d0
7102b80058  ldr x8,[x27, #0x4a8]
7102b8005c  add x8,x8,#0x1
7102b80060  str x8,[x27, #0x4a8]
7102b80064  ldr x8,[x27, #0x510]
7102b80068  cmp x8,#0xc
7102b8006c  b.cs 0x7102b81da0
7102b80070  ldr x1,[x27]
7102b80074  cmp w19,#0x0
7102b80078  add x0,x25,x8, LSL #0x3
7102b8007c  cset w3,ne
7102b80080  mov x2,x24
7102b80084  bl 0x7102b8c4d0
7102b80088  ldr x8,[x27, #0x510]
7102b8008c  add w19,w19,#0x1
7102b80090  cmp w19,#0xc
7102b80094  add x8,x8,#0x1
7102b80098  str x8,[x27, #0x510]
7102b8009c  b.cc 0x7102b80004
7102b800a0  ldr x8,[x27, #0x8]
7102b800a4  ldrb w9,[x8, #0x100]
7102b800a8  ldrb w10,[x8, #0x101]
7102b800ac  ldrb w11,[x8, #0x102]
7102b800b0  mov w13,w9
7102b800b4  ldrb w12,[x8, #0x103]
7102b800b8  bfm w13,w10,#0x18,#0x7
7102b800bc  bfm w13,w11,#0x10,#0x7
7102b800c0  bfm w13,w12,#0x8,#0x7
7102b800c4  str w13,[x27, #0x518]
7102b800c8  ldrb w13,[x8, #0x104]
7102b800cc  ldrb w14,[x8, #0x105]
7102b800d0  ldrb w15,[x8, #0x106]
7102b800d4  ldrb w16,[x8, #0x107]
7102b800d8  sub w9,w9,w13
7102b800dc  bfm w13,w14,#0x18,#0x7
7102b800e0  scvtf s0,w9
7102b800e4  bfm w13,w15,#0x10,#0x7
7102b800e8  bfm w13,w16,#0x8,#0x7
7102b800ec  str w13,[x27, #0x51c]
7102b800f0  ldr s1,[x8, #0x110]
7102b800f4  fdiv s0,s0,s1
7102b800f8  sub w10,w10,w14
7102b800fc  fcvtzs w9,s0
7102b80100  strb w9,[x27, #0x520]
7102b80104  scvtf s0,w10
7102b80108  sub w10,w11,w15
7102b8010c  ldr s1,[x8, #0x110]
7102b80110  fdiv s0,s0,s1
7102b80114  fcvtzs w9,s0
7102b80118  strb w9,[x27, #0x521]
7102b8011c  scvtf s0,w10
7102b80120  sub w10,w12,w16
7102b80124  ldr s1,[x8, #0x110]
7102b80128  fdiv s0,s0,s1
7102b8012c  fcvtzs w9,s0
7102b80130  strb w9,[x27, #0x522]
7102b80134  scvtf s0,w10
7102b80138  ldr s1,[x8, #0x110]
7102b8013c  fdiv s0,s0,s1
7102b80140  fcvtzs w9,s0
7102b80144  strb w9,[x27, #0x523]
7102b80148  ldrb w9,[x8, #0x108]
7102b8014c  ldrb w10,[x8, #0x109]
7102b80150  ldrb w11,[x8, #0x10a]
7102b80154  mov w13,w9
7102b80158  ldrb w12,[x8, #0x10b]
7102b8015c  bfm w13,w10,#0x18,#0x7
7102b80160  bfm w13,w11,#0x10,#0x7
7102b80164  bfm w13,w12,#0x8,#0x7
7102b80168  str w13,[x27, #0x524]
7102b8016c  ldrb w13,[x8, #0x10c]
7102b80170  ldrb w14,[x8, #0x10d]
7102b80174  ldrb w15,[x8, #0x10e]
7102b80178  ldrb w16,[x8, #0x10f]
7102b8017c  sub w9,w9,w13
7102b80180  bfm w13,w14,#0x18,#0x7
7102b80184  scvtf s0,w9
7102b80188  bfm w13,w15,#0x10,#0x7
7102b8018c  bfm w13,w16,#0x8,#0x7
7102b80190  str w13,[x27, #0x528]
7102b80194  ldr s1,[x8, #0x114]
7102b80198  fdiv s0,s0,s1
7102b8019c  sub w10,w10,w14
7102b801a0  fcvtzs w9,s0
7102b801a4  strb w9,[x27, #0x52c]
7102b801a8  scvtf s0,w10
7102b801ac  sub w10,w11,w15
7102b801b0  add x11,x27,#0x624
7102b801b4  ldr s1,[x8, #0x114]
7102b801b8  fdiv s0,s0,s1
7102b801bc  fcvtzs w9,s0
7102b801c0  strb w9,[x27, #0x52d]
7102b801c4  scvtf s0,w10
7102b801c8  sub w10,w12,w16
7102b801cc  ldr s1,[x8, #0x114]
7102b801d0  fdiv s0,s0,s1
7102b801d4  fcvtzs w9,s0
7102b801d8  strb w9,[x27, #0x52e]
7102b801dc  scvtf s0,w10
7102b801e0  add x10,x27,#0x614
7102b801e4  ldr s1,[x8, #0x114]
7102b801e8  strb wzr,[x27, #0x5c0]
7102b801ec  fdiv s0,s0,s1
7102b801f0  fcvtzs w8,s0
7102b801f4  strb w8,[x27, #0x52f]
7102b801f8  add x8,x27,#0x634
7102b801fc  str xzr,[x8]
7102b80200  add x8,x27,#0x5c9
7102b80204  str wzr,[x27, #0x63c]
7102b80208  str xzr,[x8]
7102b8020c  add x8,x27,#0x5c4
7102b80210  str xzr,[x8]
7102b80214  add x8,x27,#0x5d9
7102b80218  str xzr,[x8]
7102b8021c  add x8,x27,#0x5d4
7102b80220  str xzr,[x8]
7102b80224  add x8,x27,#0x5e9
7102b80228  str xzr,[x8]
7102b8022c  add x8,x27,#0x5e4
7102b80230  str xzr,[x8]
7102b80234  add x8,x27,#0x5f9
7102b80238  str xzr,[x8]
7102b8023c  add x8,x27,#0x5f4
7102b80240  str xzr,[x8]
7102b80244  add x8,x27,#0x609
7102b80248  add x9,x27,#0x604
7102b8024c  str xzr,[x8]
7102b80250  add x8,x27,#0x619
7102b80254  str xzr,[x9]
7102b80258  str xzr,[x8]
7102b8025c  add x8,x27,#0x629
7102b80260  str xzr,[x10]
7102b80264  str xzr,[x8]
7102b80268  str xzr,[x11]
7102b8026c  ldr x20,[x26, #0x748]
7102b80270  str x27,[x26, #0x748]
7102b80274  cbz x20,0x7102b80288
7102b80278  mov x0,x20
7102b8027c  bl 0x7102b876d0
7102b80280  mov x0,x20
7102b80284  bl 0x710392eb40
7102b80288  ldr s0,[x26, #0x90c]
7102b8028c  ldr s2,[x26, #0x93c]
7102b80290  adrp x8,0x7104473000
7102b80294  ldr s3,[x26, #0x944]
7102b80298  fadd s3,s2,s3
7102b8029c  ldr s1,[x26, #0x938]
7102b802a0  ucvtf s0,s0
7102b802a4  mov v4.16B,v1.16B
7102b802a8  mov v4.S[0x1],v2.S[0x0]
7102b802ac  ldr s2,[x8, #0x91c]
7102b802b0  mov v1.S[0x1],v3.S[0x0]
7102b802b4  adrp x8,0x7104472000
7102b802b8  fdiv s0,s0,s2
7102b802bc  movi d5,#0x0
7102b802c0  add x9,sp,#0x130
7102b802c4  mov v4.D[0x1],v5.D[0x0]
7102b802c8  ldrb w19,[x26, #0x18]
7102b802cc  mov v1.D[0x1],v5.D[0x0]
7102b802d0  mov w1,#0x50
7102b802d4  str q4,[x9, #0x10]
7102b802d8  str q1,[x9, #0x1e0]
7102b802dc  ldr s1,[x8, #0xdc]
7102b802e0  mov w0,#0x10
7102b802e4  fdiv s8,s1,s0
7102b802e8  bl 0x710392e290
7102b802ec  mov x20,x0
7102b802f0  cbnz x0,0x7102b8033c
7102b802f4  adrp x8,0x7105332000
7102b802f8  ldr x0,[x8, #0xf00]
7102b802fc  cbz x0,0x7102b80338
7102b80300  mov w8,#0x50
7102b80304  stur wzr,[x29, #-0xa0]
7102b80308  sub x1,x29,#0xa0
7102b8030c  str x8,[sp, #0x2b0]
7102b80310  ldr x8,[x0]
7102b80314  ldr x8,[x8, #0x30]
7102b80318  add x2,sp,#0x2b0
7102b8031c  blr x8
7102b80320  tbz w0,#0x0,0x7102b80338
7102b80324  mov w1,#0x50
7102b80328  mov w0,#0x10
7102b8032c  bl 0x710392e290
7102b80330  mov x20,x0
7102b80334  cbnz x0,0x7102b8033c
7102b80338  mov x20,xzr
7102b8033c  mov v0.16B,v8.16B
7102b80340  cmp w19,#0x0
7102b80344  cset w5,ne
7102b80348  adrp x2,0x7104338000
7102b8034c  add x2,x2,#0x41d
7102b80350  add x3,sp,#0x140
7102b80354  sub x4,x29,#0x100
7102b80358  mov x0,x20
7102b8035c  mov x1,x26
7102b80360  bl 0x7102b8ba80
7102b80364  ldr x0,[x26, #0x768]
7102b80368  str x20,[x26, #0x768]
7102b8036c  cbz x0,0x7102b80374
7102b80370  bl 0x710392eb40
7102b80374  movi v3.2D,#0x0
7102b80378  ldr s0,[x26, #0x930]
7102b8037c  ldr s1,[x26, #0x940]
7102b80380  fadd s1,s0,s1
7102b80384  mov v2.16B,v3.16B
7102b80388  add x8,sp,#0x130
7102b8038c  mov v2.S[0x0],v0.S[0x0]
7102b80390  ldr s0,[x26, #0x934]
7102b80394  mov v2.S[0x1],v0.S[0x0]
7102b80398  mov w1,#0x50
7102b8039c  str q2,[x8, #0x10]
7102b803a0  mov v2.16B,v3.16B
7102b803a4  mov v2.S[0x0],v1.S[0x0]
7102b803a8  mov v2.S[0x1],v0.S[0x0]
7102b803ac  mov w0,#0x10
7102b803b0  str q2,[x8, #0x1e0]
7102b803b4  bl 0x710392e290
7102b803b8  mov x20,x0
7102b803bc  cbnz x0,0x7102b80408
7102b803c0  adrp x8,0x7105332000
7102b803c4  ldr x0,[x8, #0xf00]
7102b803c8  cbz x0,0x7102b80404
7102b803cc  mov w8,#0x50
7102b803d0  stur wzr,[x29, #-0xa0]
7102b803d4  sub x1,x29,#0xa0
7102b803d8  str x8,[sp, #0x2b0]
7102b803dc  ldr x8,[x0]
7102b803e0  ldr x8,[x8, #0x30]
7102b803e4  add x2,sp,#0x2b0
7102b803e8  blr x8
7102b803ec  tbz w0,#0x0,0x7102b80404
7102b803f0  mov w1,#0x50
7102b803f4  mov w0,#0x10
7102b803f8  bl 0x710392e290
7102b803fc  mov x20,x0
7102b80400  cbnz x0,0x7102b80408
7102b80404  mov x20,xzr
7102b80408  mov v0.16B,v8.16B
7102b8040c  cmp w19,#0x0
7102b80410  cset w5,ne
7102b80414  adrp x2,0x7104463000
7102b80418  add x2,x2,#0xd63
7102b8041c  add x3,sp,#0x140
7102b80420  sub x4,x29,#0x100
7102b80424  mov x0,x20
7102b80428  mov x1,x26
7102b8042c  bl 0x7102b8ba80
7102b80430  ldr x0,[x26, #0x770]
7102b80434  str x20,[x26, #0x770]
7102b80438  cbz x0,0x7102b80440
7102b8043c  bl 0x710392eb40
7102b80440  ldr x8,[x26, #0x300]
7102b80444  ldr x9,[x8, #0x18]
7102b80448  ldp x8,x9,[x9]
7102b8044c  cmp x8,x9
7102b80450  b.eq 0x7102b80498
7102b80454  mov x10,#0x7907
7102b80458  movk x10,#0xe670, LSL #16
7102b8045c  movk x10,#0x12, LSL #32
7102b80460  ldr x11,[x8], #0x8
7102b80464  ldr x12,[x11, #0xa0]
7102b80468  and x12,x12,#0xffffffffff
7102b8046c  cmp x12,x10
7102b80470  b.eq 0x7102b80480
7102b80474  cmp x9,x8
7102b80478  b.ne 0x7102b80460
7102b8047c  b 0x7102b80498
7102b80480  ldr x8,[x11, #0x110]
7102b80484  cbz x8,0x7102b80498
7102b80488  ldp x9,x10,[x8]
7102b8048c  cmp x9,x10
7102b80490  csel x19,xzr,x8,eq
7102b80494  b 0x7102b8049c
7102b80498  mov x19,xzr
7102b8049c  mov w0,#0x10
7102b804a0  mov w1,#0x40
7102b804a4  bl 0x710392e290
7102b804a8  mov x21,x0
7102b804ac  cbnz x0,0x7102b804e8
7102b804b0  adrp x8,0x7105332000
7102b804b4  ldr x0,[x8, #0xf00]
7102b804b8  mov w8,#0x40
7102b804bc  stur wzr,[x29, #-0x100]
7102b804c0  sub x1,x29,#0x100
7102b804c4  str x8,[sp, #0x140]
7102b804c8  ldr x8,[x0]
7102b804cc  ldr x8,[x8, #0x30]
7102b804d0  add x2,sp,#0x140
7102b804d4  blr x8
7102b804d8  mov w0,#0x10
7102b804dc  mov w1,#0x40
7102b804e0  bl 0x710392e290
7102b804e4  mov x21,x0
7102b804e8  ldr x8,[sp, #0x50]
7102b804ec  stp x8,x19,[x21, #0x8]
7102b804f0  mov x8,x21
7102b804f4  str wzr,[x21]
7102b804f8  str xzr,[x8, #0x20]!
7102b804fc  stp xzr,xzr,[x21, #0x28]
7102b80500  ldp x9,x10,[x19]
7102b80504  cmp x9,x10
7102b80508  b.eq 0x7102b80514
7102b8050c  ldr x9,[x9]
7102b80510  b 0x7102b80518
7102b80514  mov x9,xzr
7102b80518  ldr x10,[x9, #0x18]
7102b8051c  str x10,[x8, #0x8]
7102b80520  ldr x9,[x9, #0x10]
7102b80524  str x9,[x8]
7102b80528  ldr x0,[x26, #0x7c0]
7102b8052c  str x21,[x26, #0x7c0]
7102b80530  cbz x0,0x7102b8053c
7102b80534  bl 0x710392eb40
7102b80538  ldr x21,[x26, #0x7c0]
7102b8053c  ldr w8,[x21]
7102b80540  cbz w8,0x7102b80698
7102b80544  ldr x8,[x21, #0x10]
7102b80548  ldr x19,[x8]
7102b8054c  mov x9,x8
7102b80550  ldr x20,[x9, #0x8]!
7102b80554  cmp x19,x20
7102b80558  b.eq 0x7102b80598
7102b8055c  mov w22,#0x1
7102b80560  mov x23,#-0x1
7102b80564  ldr x8,[x19]
7102b80568  ldr x9,[x8, #0x8]
7102b8056c  strb w22,[x8, #0x128]
7102b80570  cbz x9,0x7102b80584
7102b80574  str x23,[x9, #0xd8]
7102b80578  ldr x0,[x8, #0x8]
7102b8057c  mov w1,wzr
7102b80580  bl 0x7100532bc0
7102b80584  add x19,x19,#0x8
7102b80588  cmp x20,x19
7102b8058c  b.ne 0x7102b80564
7102b80590  ldr x8,[x21, #0x10]
7102b80594  add x9,x8,#0x8
7102b80598  str wzr,[x21, #0x34]
7102b8059c  ldr x8,[x8]
7102b805a0  ldr x9,[x9]
7102b805a4  cmp x8,x9
7102b805a8  b.eq 0x7102b80694
7102b805ac  movi v0.2D,#0x0
7102b805b0  add x10,x21,#0x30
7102b805b4  ldr q1,[x21, #0x20]
7102b805b8  ld1 {v0.S}[0],[x10]
7102b805bc  adrp x11,0x7104472000
7102b805c0  fadd v0.4S,v1.4S,v0.4S
7102b805c4  ldr s2,[x11, #0x970]
7102b805c8  dup s1,v0.S[0x1]
7102b805cc  fmov s3,0xbf800000
7102b805d0  fmov s4,0x3f800000
7102b805d4  mov w10,#0x1
7102b805d8  ldr x11,[x8]
7102b805dc  ldr x13,[x11, #0x8]
7102b805e0  ldrb w14,[x13, #0xe7]
7102b805e4  ldrb w13,[x13, #0xe8]
7102b805e8  ldrb w12,[x11, #0x128]
7102b805ec  cmp w12,#0x0
7102b805f0  orr w13,w13,w14
7102b805f4  and w12,w13,#0xff
7102b805f8  ccmp w12,#0x0,#0x0,ne
7102b805fc  b.eq 0x7102b80608
7102b80600  strb w10,[x11, #0x129]
7102b80604  b 0x7102b8062c
7102b80608  ldr q5,[x11, #0x10]
7102b8060c  fabd s6,s5,s0
7102b80610  fcmp s6,s2
7102b80614  b.gt 0x7102b80628
7102b80618  dup s5,v5.S[0x1]
7102b8061c  fabd s5,s5,s1
7102b80620  fcmp s5,s2
7102b80624  b.le 0x7102b80630
7102b80628  strb w10,[x11, #0x12a]
7102b8062c  str q0,[x11, #0x10]
7102b80630  ldr s5,[x11, #0x30]
7102b80634  fabs s5,s5
7102b80638  fcmp s5,s2
7102b8063c  b.mi 0x7102b80648
7102b80640  str wzr,[x11, #0x30]
7102b80644  strb w10,[x11, #0x129]
7102b80648  ldr q5,[x11, #0x50]
7102b8064c  fadd s6,s5,s3
7102b80650  fabs s6,s6
7102b80654  fcmp s6,s2
7102b80658  b.mi 0x7102b80668
7102b8065c  mov v5.S[0x0],v4.S[0x0]
7102b80660  strb w10,[x11, #0x129]
7102b80664  str q5,[x11, #0x50]
7102b80668  dup s6,v5.S[0x1]
7102b8066c  fadd s6,s6,s3
7102b80670  fabs s6,s6
7102b80674  fcmp s6,s2
7102b80678  b.mi 0x7102b80688
7102b8067c  mov v5.S[0x1],v4.S[0x0]
7102b80680  strb w10,[x11, #0x129]
7102b80684  str q5,[x11, #0x50]
7102b80688  add x8,x8,#0x8
7102b8068c  cmp x9,x8
7102b80690  b.ne 0x7102b805d8
7102b80694  str wzr,[x21]
7102b80698  ldr x21,[x26, #0x740]
7102b8069c  mov w1,#0x48
7102b806a0  mov w0,#0x10
7102b806a4  bl 0x710392e290
7102b806a8  mov x20,x0
7102b806ac  cbnz x0,0x7102b806f8
7102b806b0  adrp x8,0x7105332000
7102b806b4  ldr x0,[x8, #0xf00]
7102b806b8  cbz x0,0x7102b806f4
7102b806bc  mov w8,#0x48
7102b806c0  stur wzr,[x29, #-0x100]
7102b806c4  sub x1,x29,#0x100
7102b806c8  str x8,[sp, #0x140]
7102b806cc  ldr x8,[x0]
7102b806d0  ldr x8,[x8, #0x30]
7102b806d4  add x2,sp,#0x140
7102b806d8  blr x8
7102b806dc  tbz w0,#0x0,0x7102b806f4
7102b806e0  mov w1,#0x48
7102b806e4  mov w0,#0x10
7102b806e8  bl 0x710392e290
7102b806ec  mov x20,x0
7102b806f0  cbnz x0,0x7102b806f8
7102b806f4  mov x20,xzr
7102b806f8  ldr x3,[sp, #0x50]
7102b806fc  mov x0,x20
7102b80700  mov x1,x26
7102b80704  mov x2,x21
7102b80708  bl 0x7102b86570
7102b8070c  ldr x0,[x26, #0x7d0]
7102b80710  str x20,[x26, #0x7d0]
7102b80714  cbz x0,0x7102b8071c
7102b80718  bl 0x710392eb40
7102b8071c  ldr x8,[x26, #0x748]
7102b80720  mov w0,#0x10
7102b80724  orr w1,wzr,#0x38
7102b80728  str x8,[sp, #0x80]
7102b8072c  bl 0x710392e290
7102b80730  mov x27,x0
7102b80734  cbnz x0,0x7102b80780
7102b80738  adrp x8,0x7105332000
7102b8073c  ldr x0,[x8, #0xf00]
7102b80740  cbz x0,0x7102b8077c
7102b80744  orr w8,wzr,#0x38
7102b80748  stur wzr,[x29, #-0x100]
7102b8074c  sub x1,x29,#0x100
7102b80750  str x8,[sp, #0x140]
7102b80754  ldr x8,[x0]
7102b80758  ldr x8,[x8, #0x30]
7102b8075c  add x2,sp,#0x140
7102b80760  blr x8
7102b80764  tbz w0,#0x0,0x7102b8077c
7102b80768  mov w0,#0x10
7102b8076c  orr w1,wzr,#0x38
7102b80770  bl 0x710392e290
7102b80774  mov x27,x0
7102b80778  cbnz x0,0x7102b80780
7102b8077c  mov x27,xzr
7102b80780  ldrb w8,[x26, #0x18]
7102b80784  ldr x9,[sp, #0x50]
7102b80788  strb w8,[x27, #0x10]
7102b8078c  mov x8,x27
7102b80790  stp x26,x9,[x27]
7102b80794  str xzr,[x8, #0x18]!
7102b80798  str x8,[sp, #0x68]
7102b8079c  stp xzr,xzr,[x27, #0x20]
7102b807a0  ldr w8,[x26, #0x858]
7102b807a4  ucvtf s0,w8
7102b807a8  str s0,[x27, #0x30]
7102b807ac  ldr w9,[x26, #0x85c]
7102b807b0  subs w8,w9,w8
7102b807b4  b.ls 0x7102b807f8
7102b807b8  ldr x9,[x26, #0x340]
7102b807bc  ldp w10,w11,[x9]
7102b807c0  str w11,[x9]
7102b807c4  ldp w11,w12,[x9, #0x8]
7102b807c8  eor w10,w10,w10, LSL #0xb
7102b807cc  eor w10,w10,w10, LSR #0x8
7102b807d0  eor w10,w10,w12
7102b807d4  eor w10,w10,w12, LSR #0x13
7102b807d8  stp w11,w12,[x9, #0x4]
7102b807dc  str w10,[x9, #0xc]
7102b807e0  udiv w9,w10,w8
7102b807e4  ldr s1,[x27, #0x30]
7102b807e8  msub w8,w9,w8,w10
7102b807ec  ucvtf s0,w8
7102b807f0  fadd s0,s1,s0
7102b807f4  str s0,[x27, #0x30]
7102b807f8  ldr x8,[x26, #0x300]
7102b807fc  ldr x1,[x8, #0x20]
7102b80800  adrp x2,0x71042a1000
7102b80804  add x2,x2,#0x2c3
7102b80808  add x0,sp,#0x140
7102b8080c  add x19,sp,#0x140
7102b80810  bl 0x710262c340
7102b80814  ldr x8,[sp, #0x140]
7102b80818  mov x9,xzr
7102b8081c  add x10,x19,#0x10
7102b80820  sub x11,x29,#0x100
7102b80824  stur wzr,[x29, #-0xf8]
7102b80828  stur x8,[x29, #-0x100]
7102b8082c  b 0x7102b80838
7102b80830  add x9,x9,#0x2
7102b80834  strb w12,[x13, #0x11]
7102b80838  add x12,x10,x9
7102b8083c  ldrb w14,[x12]
7102b80840  cbz w14,0x7102b8086c
7102b80844  add w15,w9,#0x1
7102b80848  add x13,x11,x9
7102b8084c  cmp w15,#0x3f
7102b80850  strb w14,[x13, #0x10]
7102b80854  b.cs 0x7102b80868
7102b80858  ldrb w12,[x12, #0x1]
7102b8085c  cbnz w12,0x7102b80830
7102b80860  add x9,x9,#0x1
7102b80864  b 0x7102b8086c
7102b80868  add w9,w9,#0x1
7102b8086c  sub x10,x29,#0x100
7102b80870  add x11,x10,#0x10
7102b80874  mov w17,#0x9dc5
7102b80878  movk w17,#0x811c, LSL #16
7102b8087c  strb wzr,[x11, w9, UXTW ]
7102b80880  stur w9,[x29, #-0xf4]
7102b80884  ldurb w9,[x29, #-0xf0]
7102b80888  mov w11,w17
7102b8088c  cbz w9,0x7102b808b0
7102b80890  add x10,x10,#0x11
7102b80894  mov w12,#0x89
7102b80898  mov w11,w17
7102b8089c  mul w11,w11,w12
7102b808a0  and w9,w9,#0xff
7102b808a4  eor w11,w11,w9
7102b808a8  ldrb w9,[x10], #0x1
7102b808ac  cbnz w9,0x7102b8089c
7102b808b0  ldp x12,x9,[sp, #0x190]
7102b808b4  stur w11,[x29, #-0xf8]
7102b808b8  add x11,sp,#0x140
7102b808bc  mov x10,xzr
7102b808c0  stur x12,[x29, #-0xb0]
7102b808c4  add x11,x11,#0x68
7102b808c8  add x12,sp,#0x2b0
7102b808cc  str x9,[sp, #0x2b0]
7102b808d0  str wzr,[sp, #0x2b8]
7102b808d4  b 0x7102b808e0
7102b808d8  add x10,x10,#0x2
7102b808dc  strb w13,[x14, #0x11]
7102b808e0  add x13,x11,x10
7102b808e4  ldrb w15,[x13]
7102b808e8  cbz w15,0x7102b80914
7102b808ec  add w16,w10,#0x1
7102b808f0  add x14,x12,x10
7102b808f4  cmp w16,#0x3f
7102b808f8  strb w15,[x14, #0x10]
7102b808fc  b.cs 0x7102b80910
7102b80900  ldrb w13,[x13, #0x1]
7102b80904  cbnz w13,0x7102b808d8
7102b80908  add x10,x10,#0x1
7102b8090c  b 0x7102b80914
7102b80910  add w10,w10,#0x1
7102b80914  add x11,sp,#0x2b0
7102b80918  add x12,x11,#0x10
7102b8091c  strb wzr,[x12, w10, UXTW ]
7102b80920  str w10,[sp, #0x2bc]
7102b80924  ldrb w10,[sp, #0x2c0]
7102b80928  mov w12,w17
7102b8092c  cbz w10,0x7102b80950
7102b80930  add x11,x11,#0x11
7102b80934  mov w13,#0x89
7102b80938  mov w12,w17
7102b8093c  mul w12,w12,w13
7102b80940  and w10,w10,#0xff
7102b80944  eor w12,w12,w10
7102b80948  ldrb w10,[x11], #0x1
7102b8094c  cbnz w10,0x7102b8093c
7102b80950  ldr x10,[sp, #0x1e8]
7102b80954  cmp x8,x9
7102b80958  str w12,[sp, #0x2b8]
7102b8095c  str x10,[sp, #0x300]
7102b80960  b.eq 0x7102b80e40
7102b80964  fmov s8,wzr
7102b80968  mov x18,#0xec35
7102b8096c  movk x18,#0xc439, LSL #16
7102b80970  sub x9,x29,#0x100
7102b80974  movk x18,#0xf, LSL #32
7102b80978  add x9,x9,#0x11
7102b8097c  adrp x20,0x7104754000
7102b80980  add x20,x20,#0x84
7102b80984  orr x19,xzr,#0x100000000
7102b80988  orr w22,wzr,#0x10001
7102b8098c  stp x9,x27,[sp, #0x70]
7102b80990  adrp x26,0x710507f000
7102b80994  add x26,x26,#0x650
7102b80998  adrp x21,0x7102b8a000
7102b8099c  add x21,x21,#0x650
7102b809a0  b 0x7102b809b0
7102b809a4  bl 0x710262fb80
7102b809a8  mov x27,x0
7102b809ac  b 0x7102b80a3c
7102b809b0  ldr x24,[x8]
7102b809b4  ldp x8,x9,[x27, #0x18]
7102b809b8  subs x8,x9,x8
7102b809bc  lsr x28,x8,#0x3
7102b809c0  ldr x8,[sp, #0x88]
7102b809c4  ldr x0,[x8, #0x310]
7102b809c8  b.eq 0x7102b80a04
7102b809cc  ldp x1,x8,[x0, #0xd0]
7102b809d0  cmp x1,x8
7102b809d4  b.eq 0x7102b80a38
7102b809d8  ldr w9,[x1, #0x8]
7102b809dc  cmp w9,#0x1
7102b809e0  b.hi 0x7102b809f4
7102b809e4  ldr x9,[x1]
7102b809e8  ldr x9,[x9, #0x68]
7102b809ec  cmp x9,x18
7102b809f0  b.eq 0x7102b809a4
7102b809f4  add x1,x1,#0x10
7102b809f8  cmp x8,x1
7102b809fc  b.ne 0x7102b809d8
7102b80a00  b 0x7102b80a38
7102b80a04  ldp x8,x9,[x0, #0xd0]
7102b80a08  cmp x8,x9
7102b80a0c  b.eq 0x7102b80a38
7102b80a10  ldr w10,[x8, #0x8]
7102b80a14  cmp w10,#0x1
7102b80a18  b.hi 0x7102b80a2c
7102b80a1c  ldr x27,[x8]
7102b80a20  ldr x10,[x27, #0x68]
7102b80a24  cmp x10,x18
7102b80a28  b.eq 0x7102b80a3c
7102b80a2c  add x8,x8,#0x10
7102b80a30  cmp x9,x8
7102b80a34  b.ne 0x7102b80a10
7102b80a38  mov x27,xzr
7102b80a3c  ldr x8,[x24, #0x120]
7102b80a40  ldr x23,[x24, #0x110]
7102b80a44  mov w0,#0x10
7102b80a48  mov w1,#0xd0
7102b80a4c  stur x8,[x29, #-0x68]
7102b80a50  bl 0x710392e290
7102b80a54  mov x25,x0
7102b80a58  cbnz x0,0x7102b80aa4
7102b80a5c  adrp x8,0x7105332000
7102b80a60  ldr x0,[x8, #0xf00]
7102b80a64  cbz x0,0x7102b80aa0
7102b80a68  mov w8,#0xd0
7102b80a6c  str wzr,[sp, #0x130]
7102b80a70  add x1,sp,#0x130
7102b80a74  stur x8,[x29, #-0xa0]
7102b80a78  ldr x8,[x0]
7102b80a7c  ldr x8,[x8, #0x30]
7102b80a80  sub x2,x29,#0xa0
7102b80a84  blr x8
7102b80a88  tbz w0,#0x0,0x7102b80aa0
7102b80a8c  mov w0,#0x10
7102b80a90  mov w1,#0xd0
7102b80a94  bl 0x710392e290
7102b80a98  mov x25,x0
7102b80a9c  cbnz x0,0x7102b80aa4
7102b80aa0  mov x25,xzr
7102b80aa4  ldr q0,[x24, #0x140]
7102b80aa8  ldr x24,[sp, #0x88]
7102b80aac  mov w8,#0x1
7102b80ab0  stur x8,[x29, #-0xa0]
7102b80ab4  mov x8,#0x100000001
7102b80ab8  stur x8,[x29, #-0x98]
7102b80abc  mov x8,#0x1
7102b80ac0  movk x8,#0x10, LSL #32
7102b80ac4  sub x2,x29,#0xa0
7102b80ac8  mov x0,x25
7102b80acc  mov x1,x24
7102b80ad0  stur x8,[x29, #-0x90]
7102b80ad4  str q0,[sp, #0x90]
7102b80ad8  bl 0x710313e6a0
7102b80adc  adrp x8,0x7105118000
7102b80ae0  add x8,x8,#0x978
7102b80ae4  str x8,[x25]
7102b80ae8  ldr x8,[sp, #0x80]
7102b80aec  stp x24,x8,[x25, #0x48]
7102b80af0  stp x27,x23,[x25, #0x58]
7102b80af4  ldr q0,[sp, #0x90]
7102b80af8  stp xzr,xzr,[x25, #0x80]
7102b80afc  str w28,[x25, #0x90]
7102b80b00  adrp x8,0x71052a8000
7102b80b04  mov v1.16B,v8.16B
7102b80b08  add x27,x25,#0xa0
7102b80b0c  mov w3,#0xffffffff
7102b80b10  sub x2,x29,#0xa0
7102b80b14  mov x0,x27
7102b80b18  mov x1,x24
7102b80b1c  mov x4,x3
7102b80b20  strb wzr,[x25, #0x94]
7102b80b24  strb wzr,[x25, #0x9c]
7102b80b28  str q0,[x25, #0x70]
7102b80b2c  ldr x8,[x8, #0xa80]
7102b80b30  ldr q0,[x8]
7102b80b34  add x8,sp,#0x130
7102b80b38  str q0,[x8, #0x240]
7102b80b3c  mov v0.16B,v8.16B
7102b80b40  bl 0x710318bf30
7102b80b44  ldr x8,[x25, #0x58]
7102b80b48  cbz x8,0x7102b80bac
7102b80b4c  add x0,x8,#0x108
7102b80b50  strb wzr,[x8, #0x110]
7102b80b54  bl 0x71025e9d50
7102b80b58  ldr x8,[x25, #0x58]
7102b80b5c  cbz x8,0x7102b80bac
7102b80b60  ldrb w9,[x8, #0xe0]
7102b80b64  cbz w9,0x7102b80b78
7102b80b68  ldr x9,[x8, #0xc8]
7102b80b6c  cbz x9,0x7102b80b78
7102b80b70  mov w10,#0x101
7102b80b74  strh w10,[x9, #0x30]
7102b80b78  ldr x9,[x8, #0xd8]
7102b80b7c  cbz x9,0x7102b80b88
7102b80b80  mov w10,#0x1
7102b80b84  strb w10,[x9, #0x21]
7102b80b88  ldrb w9,[x8, #0xe0]
7102b80b8c  cbz w9,0x7102b80b98
7102b80b90  ldr x8,[x8, #0xb0]
7102b80b94  strb wzr,[x8, #0x10]
7102b80b98  ldr x8,[x25, #0x58]
7102b80b9c  cbz x8,0x7102b80bac
7102b80ba0  ldrb w9,[x8, #0x118]
7102b80ba4  orr w9,w9,#0x1
7102b80ba8  strb w9,[x8, #0x118]
7102b80bac  ldr x8,[x25, #0x60]
7102b80bb0  ldp x28,x24,[x8]
7102b80bb4  cmp x28,x24
7102b80bb8  b.eq 0x7102b80c74
7102b80bbc  ldr x23,[x28]
7102b80bc0  ldr x8,[x23, #0x60]
7102b80bc4  cbz x8,0x7102b80bf8
7102b80bc8  ldrh w9,[x8, #0x8]
7102b80bcc  sub w9,w9,#0x1
7102b80bd0  sxth w10,w9
7102b80bd4  cmp w10,#0x0
7102b80bd8  strh w9,[x8, #0x8]
7102b80bdc  b.gt 0x7102b80bf4
7102b80be0  ldr x0,[x23, #0x60]
7102b80be4  cbz x0,0x7102b80bf4
7102b80be8  ldr x8,[x0]
7102b80bec  ldr x8,[x8, #0x8]
7102b80bf0  blr x8
7102b80bf4  str xzr,[x23, #0x60]
7102b80bf8  mov w0,#0x10
7102b80bfc  mov w1,#0x20
7102b80c00  bl 0x710392e290
7102b80c04  cbnz x0,0x7102b80c4c
7102b80c08  adrp x8,0x7105332000
7102b80c0c  ldr x0,[x8, #0xf00]
7102b80c10  cbz x0,0x7102b80c48
7102b80c14  mov w8,#0x20
7102b80c18  str wzr,[sp, #0x130]
7102b80c1c  add x1,sp,#0x130
7102b80c20  stur x8,[x29, #-0xa0]
7102b80c24  ldr x8,[x0]
7102b80c28  ldr x8,[x8, #0x30]
7102b80c2c  sub x2,x29,#0xa0
7102b80c30  blr x8
7102b80c34  tbz w0,#0x0,0x7102b80c48
7102b80c38  mov w0,#0x10
7102b80c3c  mov w1,#0x20
7102b80c40  bl 0x710392e290
7102b80c44  cbnz x0,0x7102b80c4c
7102b80c48  mov x0,xzr
7102b80c4c  add x28,x28,#0x8
7102b80c50  cmp x24,x28
7102b80c54  str w22,[x0, #0x8]
7102b80c58  str x26,[x0]
7102b80c5c  stp x25,x21,[x0, #0x10]
7102b80c60  str x0,[x23, #0x60]
7102b80c64  b.ne 0x7102b80bbc
7102b80c68  ldr x8,[x25, #0x60]
7102b80c6c  ldp x0,x28,[x8]
7102b80c70  b 0x7102b80c78
7102b80c74  mov x0,x28
7102b80c78  mov w2,#0x1
7102b80c7c  mov x1,x28
7102b80c80  bl 0x71025f4d80
7102b80c84  ldr x8,[x25, #0x38]
7102b80c88  cbz x8,0x7102b80cac
7102b80c8c  ldr x0,[x8, #0x130]
7102b80c90  ldr x8,[x0]
7102b80c94  ldr x8,[x8, #0x60]
7102b80c98  ldur x2,[x29, #-0x68]
7102b80c9c  mov w1,wzr
7102b80ca0  mov w3,wzr
7102b80ca4  mov w4,wzr
7102b80ca8  blr x8
7102b80cac  mov w1,#0x4
7102b80cb0  mov x0,x27
7102b80cb4  bl 0x710318c3a0
7102b80cb8  mov w8,#0x40a00000
7102b80cbc  str w8,[x25, #0xc0]
7102b80cc0  ldrb w8,[x25, #0xa9]
7102b80cc4  cbz w8,0x7102b80cf4
7102b80cc8  ldrsw x8,[x25, #0xac]
7102b80ccc  cmn w8,#0x1
7102b80cd0  b.eq 0x7102b80cf4
7102b80cd4  adrp x9,0x71052b6000
7102b80cd8  ldr x9,[x9, #0xfd8]
7102b80cdc  ldr x9,[x9]
7102b80ce0  ldr x9,[x9, #0xa8]
7102b80ce4  mov w10,#0x50
7102b80ce8  madd x8,x8,x10,x9
7102b80cec  mov w9,#0x40a00000
7102b80cf0  str w9,[x8, #0x30]
7102b80cf4  stur x25,[x29, #-0xa0]
7102b80cf8  ldrb w8,[x25, #0x40]
7102b80cfc  ldr x27,[sp, #0x78]
7102b80d00  cbz w8,0x7102b80d50
7102b80d04  ldr x23,[x25, #0x30]
7102b80d08  cbz x23,0x7102b80d40
7102b80d0c  ldrb w8,[x23, #0x10]
7102b80d10  cbz w8,0x7102b80d40
7102b80d14  ldrb w8,[x23, #0x50]
7102b80d18  strb wzr,[x23, #0x10]
7102b80d1c  cbz w8,0x7102b80d40
7102b80d20  ldr x8,[x23]
7102b80d24  ldr w0,[x8, #0x8]
7102b80d28  bl 0x71003ac560
7102b80d2c  ldr x8,[x0]
7102b80d30  ldr x8,[x8, #0x48]
7102b80d34  mov w1,wzr
7102b80d38  blr x8
7102b80d3c  strb wzr,[x23, #0x50]
7102b80d40  ldr x8,[x25]
7102b80d44  ldr x8,[x8, #0x30]
7102b80d48  mov x0,x25
7102b80d4c  blr x8
7102b80d50  strb wzr,[x25, #0x40]
7102b80d54  ldp x8,x9,[x27, #0x20]
7102b80d58  cmp x8,x9
7102b80d5c  b.eq 0x7102b80d74
7102b80d60  str x25,[x8]
7102b80d64  ldr x8,[x27, #0x20]
7102b80d68  add x8,x8,#0x8
7102b80d6c  str x8,[x27, #0x20]
7102b80d70  b 0x7102b80d80
7102b80d74  ldr x0,[sp, #0x68]
7102b80d78  sub x1,x29,#0xa0
7102b80d7c  bl 0x7102b8c8c0
7102b80d80  ldur x8,[x29, #-0x100]
7102b80d84  ldur x9,[x29, #-0xb0]
7102b80d88  mov x18,#0xec35
7102b80d8c  movk x18,#0xc439, LSL #16
7102b80d90  ldr x0,[sp, #0x70]
7102b80d94  movk x18,#0xf, LSL #32
7102b80d98  mov w1,#0xffffffff
7102b80d9c  add x8,x8,#0x8
7102b80da0  cmp x8,x9
7102b80da4  stur x8,[x29, #-0x100]
7102b80da8  b.eq 0x7102b80e34
7102b80dac  ldurb w10,[x29, #-0xf0]
7102b80db0  ldr x11,[x8]
7102b80db4  cbz w10,0x7102b80e04
7102b80db8  mov x12,xzr
7102b80dbc  mov x13,x0
7102b80dc0  mov w15,w10
7102b80dc4  mov w14,w1
7102b80dc8  and w15,w15,#0xff
7102b80dcc  sub w16,w15,#0x41
7102b80dd0  add w17,w15,#0x20
7102b80dd4  cmp w16,#0x1a
7102b80dd8  csel w15,w17,w15,cc
7102b80ddc  eor w15,w15,w14
7102b80de0  and w15,w15,#0xff
7102b80de4  ldr w15,[x20, w15, UXTW #0x2]
7102b80de8  eor w14,w15,w14, LSR #0x8
7102b80dec  ldrb w15,[x13], #0x1
7102b80df0  add x12,x12,x19
7102b80df4  cbnz w15,0x7102b80dc8
7102b80df8  mvn w13,w14
7102b80dfc  and x12,x12,#0xff00000000
7102b80e00  b 0x7102b80e0c
7102b80e04  mov x13,xzr
7102b80e08  mov x12,xzr
7102b80e0c  ldr x11,[x11, #0xa0]
7102b80e10  orr x12,x12,x13
7102b80e14  and x11,x11,#0xffffffffff
7102b80e18  cmp x11,x12
7102b80e1c  b.eq 0x7102b80e34
7102b80e20  add x8,x8,#0x8
7102b80e24  cmp x8,x9
7102b80e28  stur x8,[x29, #-0x100]
7102b80e2c  b.ne 0x7102b80db0
7102b80e30  mov x8,x9
7102b80e34  ldr x9,[sp, #0x2b0]
7102b80e38  cmp x8,x9
7102b80e3c  b.ne 0x7102b809b0
7102b80e40  ldr x26,[sp, #0x88]
7102b80e44  ldr x22,[x26, #0x758]
7102b80e48  str x27,[x26, #0x758]
7102b80e4c  cbz x22,0x7102b80ea0
7102b80e50  ldr x19,[x22, #0x18]
7102b80e54  cbz x19,0x7102b80e98
7102b80e58  ldr x8,[x22, #0x20]
7102b80e5c  cmp x8,x19
7102b80e60  b.eq 0x7102b826e4
7102b80e64  sub x9,x8,#0x8
7102b80e68  sub x9,x9,x19
7102b80e6c  mvn x10,x9
7102b80e70  and x10,x10,#-0x8
7102b80e74  add x0,x8,x10
7102b80e78  add x8,x9,#0x8
7102b80e7c  and x2,x8,#-0x8
7102b80e80  mov w1,wzr
7102b80e84  bl 0x71039c02a0
7102b80e88  ldr x0,[x22, #0x18]
7102b80e8c  str x19,[x22, #0x20]
7102b80e90  cbz x0,0x7102b80e98
7102b80e94  bl 0x710392eb40
7102b80e98  mov x0,x22
7102b80e9c  bl 0x710392eb40
7102b80ea0  ldr x9,[x26, #0x310]
7102b80ea4  ldp x8,x9,[x9, #0xd0]
7102b80ea8  cmp x8,x9
7102b80eac  b.eq 0x7102b80f6c
7102b80eb0  mov x10,#0xf6d7
7102b80eb4  movk x10,#0x5d9b, LSL #16
7102b80eb8  movk x10,#0x12, LSL #32
7102b80ebc  mov x11,x8
7102b80ec0  ldr w12,[x11, #0x8]
7102b80ec4  cmp w12,#0x1
7102b80ec8  b.hi 0x7102b80edc
7102b80ecc  ldr x24,[x11]
7102b80ed0  ldr x12,[x24, #0x68]
7102b80ed4  cmp x12,x10
7102b80ed8  b.eq 0x7102b80eec
7102b80edc  add x11,x11,#0x10
7102b80ee0  cmp x9,x11
7102b80ee4  b.ne 0x7102b80ec0
7102b80ee8  mov x24,xzr
7102b80eec  cmp x8,x9
7102b80ef0  b.eq 0x7102b80f6c
7102b80ef4  mov x10,#0x1abb
7102b80ef8  movk x10,#0x5804, LSL #16
7102b80efc  movk x10,#0x11, LSL #32
7102b80f00  mov x11,x8
7102b80f04  ldr w12,[x11, #0x8]
7102b80f08  cmp w12,#0x1
7102b80f0c  b.hi 0x7102b80f20
7102b80f10  ldr x19,[x11]
7102b80f14  ldr x12,[x19, #0x68]
7102b80f18  cmp x12,x10
7102b80f1c  b.eq 0x7102b80f30
7102b80f20  add x11,x11,#0x10
7102b80f24  cmp x9,x11
7102b80f28  b.ne 0x7102b80f04
7102b80f2c  mov x19,xzr
7102b80f30  cmp x8,x9
7102b80f34  b.eq 0x7102b80f6c
7102b80f38  mov x10,#0x9adf
7102b80f3c  movk x10,#0x6fb1, LSL #16
7102b80f40  movk x10,#0x12, LSL #32
7102b80f44  ldr w11,[x8, #0x8]
7102b80f48  cmp w11,#0x1
7102b80f4c  b.hi 0x7102b80f60
7102b80f50  ldr x25,[x8]
7102b80f54  ldr x11,[x25, #0x68]
7102b80f58  cmp x11,x10
7102b80f5c  b.eq 0x7102b82710
7102b80f60  add x8,x8,#0x10
7102b80f64  cmp x9,x8
7102b80f68  b.ne 0x7102b80f44
7102b80f6c  str xzr,[sp, #0x2c0]
7102b80f70  str xzr,[sp, #0x2b8]
7102b80f74  adrp x0,0x71043bc000
7102b80f78  add x0,x0,#0x7d8
7102b80f7c  str xzr,[sp, #0x2b0]
7102b80f80  ldr x19,[x26, #0x300]
7102b80f84  bl 0x7103151710
7102b80f88  ldr x1,[x19, #0x8]
7102b80f8c  mov w2,w0
7102b80f90  add x0,sp,#0x140
7102b80f94  bl 0x710262cbe0
7102b80f98  ldr x8,[sp, #0x140]
7102b80f9c  cbz x8,0x7102b81130
7102b80fa0  mov w19,#0x140
7102b80fa4  orr x24,xzr,#0x7fffffffffffffe
7102b80fa8  b 0x7102b80fb4
7102b80fac  mov x23,xzr
7102b80fb0  b 0x7102b810e0
7102b80fb4  ldp x10,x11,[x8, #0x1a8]
7102b80fb8  ldr w9,[sp, #0x148]
7102b80fbc  sub x11,x11,x10
7102b80fc0  asr x11,x11,#0x3
7102b80fc4  cmp x11,x9
7102b80fc8  b.ls 0x7102b82bb8
7102b80fcc  ldr x9,[x10, x9, LSL #0x3]
7102b80fd0  ldr x9,[x9, #0x10]
7102b80fd4  ldr w8,[sp, #0x150]
7102b80fd8  ldr x9,[x9, #0x100]
7102b80fdc  madd x10,x8,x19,x9
7102b80fe0  ldr w10,[x10, #0x108]
7102b80fe4  cmp w10,#0x1
7102b80fe8  b.ne 0x7102b81120
7102b80fec  madd x8,x8,x19,x9
7102b80ff0  movi v0.2D,#0x0
7102b80ff4  add x9,x8,#0x10c
7102b80ff8  add x8,x8,#0x110
7102b80ffc  ld1 {v0.S}[0],[x9]
7102b81000  ldr x9,[sp, #0x2b8]
7102b81004  ld1 {v0.S}[1],[x8]
7102b81008  ldr x8,[sp, #0x2c0]
7102b8100c  cmp x9,x8
7102b81010  b.eq 0x7102b81028
7102b81014  str q0,[x9]
7102b81018  ldr x8,[sp, #0x2b8]
7102b8101c  add x8,x8,#0x10
7102b81020  str x8,[sp, #0x2b8]
7102b81024  b 0x7102b81120
7102b81028  ldr x21,[sp, #0x2b0]
7102b8102c  sub x22,x9,x21
7102b81030  asr x25,x22,#0x4
7102b81034  add x9,x25,#0x1
7102b81038  lsr x10,x9,#0x3c
7102b8103c  cbnz x10,0x7102b82bd0
7102b81040  sub x8,x8,x21
7102b81044  asr x10,x8,#0x4
7102b81048  cmp x10,x24
7102b8104c  b.hi 0x7102b81070
7102b81050  asr x8,x8,#0x3
7102b81054  cmp x8,x9
7102b81058  csel x26,x9,x8,cc
7102b8105c  cbz x26,0x7102b80fac
7102b81060  lsr x8,x26,#0x3c
7102b81064  str q0,[sp, #0x90]
7102b81068  cbz x8,0x7102b81078
7102b8106c  b 0x7102b81da0
7102b81070  str q0,[sp, #0x90]
7102b81074  orr x26,xzr,#0xfffffffffffffff
7102b81078  lsl x8,x26,#0x4
7102b8107c  cmp x8,#0x0
7102b81080  csinc x20,x8,xzr,ne
7102b81084  mov w0,#0x10
7102b81088  mov x1,x20
7102b8108c  bl 0x710392e290
7102b81090  mov x23,x0
7102b81094  cbnz x0,0x7102b810dc
7102b81098  adrp x8,0x7105332000
7102b8109c  ldr x0,[x8, #0xf00]
7102b810a0  cbz x0,0x7102b810d8
7102b810a4  stur wzr,[x29, #-0xa0]
7102b810a8  stur x20,[x29, #-0x100]
7102b810ac  ldr x8,[x0]
7102b810b0  ldr x8,[x8, #0x30]
7102b810b4  sub x1,x29,#0xa0
7102b810b8  sub x2,x29,#0x100
7102b810bc  blr x8
7102b810c0  tbz w0,#0x0,0x7102b810d8
7102b810c4  mov w0,#0x10
7102b810c8  mov x1,x20
7102b810cc  bl 0x710392e290
7102b810d0  mov x23,x0
7102b810d4  cbnz x0,0x7102b810dc
7102b810d8  mov x23,xzr
7102b810dc  ldr q0,[sp, #0x90]
7102b810e0  add x20,x23,x25, LSL #0x4
7102b810e4  add x25,x23,x26, LSL #0x4
7102b810e8  cmp x22,#0x1
7102b810ec  str q0,[x20], #0x10
7102b810f0  b.lt 0x7102b81104
7102b810f4  mov x0,x23
7102b810f8  mov x1,x21
7102b810fc  mov x2,x22
7102b81100  bl 0x71039c00e0
7102b81104  ldr x26,[sp, #0x88]
7102b81108  str x23,[sp, #0x2b0]
7102b8110c  str x20,[sp, #0x2b8]
7102b81110  str x25,[sp, #0x2c0]
7102b81114  cbz x21,0x7102b81120
7102b81118  mov x0,x21
7102b8111c  bl 0x710392eb40
7102b81120  add x0,sp,#0x140
7102b81124  bl 0x7102927ba0
7102b81128  ldr x8,[sp, #0x140]
7102b8112c  cbnz x8,0x7102b80fb4
7102b81130  ldr x9,[x26, #0x310]
7102b81134  ldp x8,x9,[x9, #0xd0]
7102b81138  cmp x8,x9
7102b8113c  b.eq 0x7102b81174
7102b81140  mov x10,#0x78eb
7102b81144  movk x10,#0x29b5, LSL #16
7102b81148  movk x10,#0xf, LSL #32
7102b8114c  ldr w11,[x8, #0x8]
7102b81150  cmp w11,#0x1
7102b81154  b.hi 0x7102b81168
7102b81158  ldr x19,[x8]
7102b8115c  ldr x11,[x19, #0x68]
7102b81160  cmp x11,x10
7102b81164  b.eq 0x7102b81178
7102b81168  add x8,x8,#0x10
7102b8116c  cmp x9,x8
7102b81170  b.ne 0x7102b8114c
7102b81174  mov x19,xzr
7102b81178  ldr x20,[x26, #0x748]
7102b8117c  ldr x22,[x26, #0x740]
7102b81180  mov w1,#0x140
7102b81184  mov w0,#0x10
7102b81188  bl 0x710392e290
7102b8118c  mov x21,x0
7102b81190  cbnz x0,0x7102b811dc
7102b81194  adrp x8,0x7105332000
7102b81198  ldr x0,[x8, #0xf00]
7102b8119c  cbz x0,0x7102b811d8
7102b811a0  mov w8,#0x140
7102b811a4  stur wzr,[x29, #-0xa0]
7102b811a8  sub x1,x29,#0xa0
7102b811ac  stur x8,[x29, #-0x100]
7102b811b0  ldr x8,[x0]
7102b811b4  ldr x8,[x8, #0x30]
7102b811b8  sub x2,x29,#0x100
7102b811bc  blr x8
7102b811c0  tbz w0,#0x0,0x7102b811d8
7102b811c4  mov w1,#0x140
7102b811c8  mov w0,#0x10
7102b811cc  bl 0x710392e290
7102b811d0  mov x21,x0
7102b811d4  cbnz x0,0x7102b811dc
7102b811d8  mov x21,xzr
7102b811dc  ldrb w23,[x26, #0x18]
7102b811e0  mov x8,#0x100000001
7102b811e4  sub x2,x29,#0x100
7102b811e8  stp xzr,x8,[x29, #-0x100]
7102b811ec  mov x8,#0x1
7102b811f0  movk x8,#0x10, LSL #32
7102b811f4  mov x0,x21
7102b811f8  mov x1,x26
7102b811fc  stur x8,[x29, #-0xf0]
7102b81200  bl 0x710313e6a0
7102b81204  adrp x8,0x7105118000
7102b81208  add x8,x8,#0x9f8
7102b8120c  strb w23,[x21, #0x43]
7102b81210  stp x26,x19,[x21, #0x48]
7102b81214  mov x19,x21
7102b81218  str wzr,[x21, #0x44]
7102b8121c  mov w3,#0xffffffff
7102b81220  sub x2,x29,#0x100
7102b81224  str x8,[x21]
7102b81228  mov x1,x26
7102b8122c  mov x4,x3
7102b81230  str xzr,[x19, #0x60]!
7102b81234  stp xzr,xzr,[x21, #0xd0]
7102b81238  str xzr,[x21, #0x68]
7102b8123c  str x22,[x21, #0xf0]
7102b81240  strb wzr,[x21, #0xf8]
7102b81244  stp xzr,xzr,[x21, #0xc0]
7102b81248  stp xzr,xzr,[x21, #0xb0]
7102b8124c  stp xzr,xzr,[x21, #0xa0]
7102b81250  stp xzr,xzr,[x21, #0x90]
7102b81254  stp xzr,xzr,[x21, #0x80]
7102b81258  stp xzr,xzr,[x21, #0x70]
7102b8125c  ldr x8,[sp, #0x50]
7102b81260  stp x8,x20,[x21, #0xe0]
7102b81264  add x8,x21,#0x106
7102b81268  add x20,x21,#0x110
7102b8126c  mov x0,x20
7102b81270  str xzr,[x8]
7102b81274  adrp x8,0x71052a8000
7102b81278  str xzr,[x21, #0x100]
7102b8127c  ldr x8,[x8, #0xa80]
7102b81280  ldr q0,[x8]
7102b81284  add x8,sp,#0x130
7102b81288  str q0,[x8, #0x1e0]
7102b8128c  fmov s0,wzr
7102b81290  mov v1.16B,v0.16B
7102b81294  bl 0x710318bf30
7102b81298  ldr x8,[sp, #0x2b0]
7102b8129c  ldr x9,[sp, #0x2b8]
7102b812a0  movi d5,#0x0
7102b812a4  cmp x9,x8
7102b812a8  b.eq 0x7102b81314
7102b812ac  sub x10,x9,#0x10
7102b812b0  sub x10,x10,x8
7102b812b4  tbnz w10,#0x4,0x7102b812d4
7102b812b8  ldr q0,[x8], #0x10
7102b812bc  ext v1.16B,v0.16B,v0.16B,0x8
7102b812c0  fmov s2,wzr
7102b812c4  mov v1.S[0x1],v2.S[0x0]
7102b812c8  mov v0.D[0x1],v1.D[0x0]
7102b812cc  add x19,x21,#0x70
7102b812d0  str q0,[x21, #0x60]
7102b812d4  cmp x10,#0x10
7102b812d8  b.cc 0x7102b81314
7102b812dc  ldr q0,[x8]
7102b812e0  mov v1.16B,v5.16B
7102b812e4  mov v1.S[0x0],v0.S[0x2]
7102b812e8  mov v0.D[0x1],v1.D[0x0]
7102b812ec  mov v1.16B,v5.16B
7102b812f0  str q0,[x19]
7102b812f4  ldr q0,[x8, #0x10]
7102b812f8  add x8,x8,#0x20
7102b812fc  cmp x8,x9
7102b81300  mov v1.S[0x0],v0.S[0x2]
7102b81304  mov v0.D[0x1],v1.D[0x0]
7102b81308  str q0,[x19, #0x10]
7102b8130c  add x19,x19,#0x20
7102b81310  b.ne 0x7102b812dc
7102b81314  ldp q1,q2,[x21, #0x60]
7102b81318  mov v0.16B,v5.16B
7102b8131c  mov v0.S[0x0],v1.S[0x2]
7102b81320  mov v3.16B,v5.16B
7102b81324  mov v3.S[0x0],v2.S[0x2]
7102b81328  mov v2.D[0x1],v3.D[0x0]
7102b8132c  mov v3.16B,v5.16B
7102b81330  mov v1.D[0x1],v0.D[0x0]
7102b81334  ldr x8,[x21, #0x50]
7102b81338  ldp q0,q4,[x21, #0x80]
7102b8133c  mov v5.S[0x0],v4.S[0x2]
7102b81340  mov v3.S[0x0],v0.S[0x2]
7102b81344  stp q1,q2,[x21, #0xa0]
7102b81348  mov v4.D[0x1],v5.D[0x0]
7102b8134c  mov v0.D[0x1],v3.D[0x0]
7102b81350  stp q0,q4,[x21, #0xc0]
7102b81354  cbz x8,0x7102b813b8
7102b81358  ldrb w9,[x8, #0xe0]
7102b8135c  cbz w9,0x7102b81370
7102b81360  ldr x9,[x8, #0xc8]
7102b81364  cbz x9,0x7102b81370
7102b81368  mov w10,#0x101
7102b8136c  strh w10,[x9, #0x30]
7102b81370  ldr x9,[x8, #0xd8]
7102b81374  cbz x9,0x7102b81380
7102b81378  mov w10,#0x1
7102b8137c  strb w10,[x9, #0x21]
7102b81380  ldrb w9,[x8, #0xe0]
7102b81384  cbz w9,0x7102b81390
7102b81388  ldr x8,[x8, #0xb0]
7102b8138c  strb wzr,[x8, #0x10]
7102b81390  ldr x8,[x21, #0x50]
7102b81394  cbz x8,0x7102b813b8
7102b81398  add x0,x8,#0x108
7102b8139c  strb wzr,[x8, #0x110]
7102b813a0  bl 0x71025e9d50
7102b813a4  ldr x8,[x21, #0x50]
7102b813a8  cbz x8,0x7102b813b8
7102b813ac  ldrb w9,[x8, #0x118]
7102b813b0  orr w9,w9,#0x1
7102b813b4  strb w9,[x8, #0x118]
7102b813b8  mov w1,#0x4
7102b813bc  mov x0,x20
7102b813c0  bl 0x710318c3a0
7102b813c4  ldrb w9,[x21, #0x119]
7102b813c8  mov w8,#0x41200000
7102b813cc  str w8,[x21, #0x130]
7102b813d0  cbz w9,0x7102b813fc
7102b813d4  ldrsw x9,[x21, #0x11c]
7102b813d8  cmn w9,#0x1
7102b813dc  b.eq 0x7102b813fc
7102b813e0  adrp x10,0x71052b6000
7102b813e4  ldr x10,[x10, #0xfd8]
7102b813e8  ldr x10,[x10]
7102b813ec  ldr x10,[x10, #0xa8]
7102b813f0  mov w11,#0x50
7102b813f4  madd x9,x9,x11,x10
7102b813f8  str w8,[x9, #0x30]
7102b813fc  ldr x8,[x21, #0xe0]
7102b81400  ldp w9,w8,[x8, #0x70]
7102b81404  ucvtf s0,w9
7102b81408  subs w8,w8,w9
7102b8140c  b.ls 0x7102b8144c
7102b81410  ldr x9,[x21, #0x48]
7102b81414  ldr x9,[x9, #0x340]
7102b81418  ldp w10,w11,[x9]
7102b8141c  str w11,[x9]
7102b81420  ldp w11,w12,[x9, #0x8]
7102b81424  eor w10,w10,w10, LSL #0xb
7102b81428  eor w10,w10,w10, LSR #0x8
7102b8142c  eor w10,w10,w12
7102b81430  eor w10,w10,w12, LSR #0x13
7102b81434  stp w11,w12,[x9, #0x4]
7102b81438  str w10,[x9, #0xc]
7102b8143c  udiv w9,w10,w8
7102b81440  msub w8,w9,w8,w10
7102b81444  ucvtf s1,w8
7102b81448  fadd s0,s0,s1
7102b8144c  mov w8,#0x1
7102b81450  str s0,[x21, #0x108]
7102b81454  str s0,[x21, #0x104]
7102b81458  strh w8,[x21, #0x10c]
7102b8145c  str x21,[x26, #0x750]
7102b81460  ldr x0,[sp, #0x2b0]
7102b81464  cbz x0,0x7102b81470
7102b81468  str x0,[sp, #0x2b8]
7102b8146c  bl 0x710392eb40
7102b81470  ldr x8,[x26, #0x310]
7102b81474  ldp x25,x19,[x8, #0xd0]
7102b81478  cmp x25,x19
7102b8147c  b.eq 0x7102b814b4
7102b81480  ldr w8,[x25, #0x8]
7102b81484  sub w8,w8,#0x2
7102b81488  cmp w8,#0x2
7102b8148c  b.hi 0x7102b814b4
7102b81490  add x8,x25,#0x10
7102b81494  cmp x19,x8
7102b81498  b.eq 0x7102b81794
7102b8149c  ldr w9,[x8, #0x8]
7102b814a0  add x8,x8,#0x10
7102b814a4  sub w9,w9,#0x2
7102b814a8  cmp w9,#0x2
7102b814ac  b.ls 0x7102b81494
7102b814b0  sub x25,x8,#0x10
7102b814b4  cmp x25,x19
7102b814b8  b.eq 0x7102b81794
7102b814bc  mov x24,#0xbe5c
7102b814c0  movk x24,#0x5997, LSL #16
7102b814c4  mov x22,#0x1f36
7102b814c8  movk x22,#0x38a6, LSL #16
7102b814cc  mov x27,#0xf6d7
7102b814d0  movk x27,#0x5d9b, LSL #16
7102b814d4  mov x28,#0x1abb
7102b814d8  movk x28,#0x5804, LSL #16
7102b814dc  add x20,x26,#0x778
7102b814e0  orr x23,xzr,#0xffffffffffffffe
7102b814e4  movk x24,#0xd, LSL #32
7102b814e8  movk x22,#0xc, LSL #32
7102b814ec  movk x27,#0x12, LSL #32
7102b814f0  movk x28,#0x11, LSL #32
7102b814f4  ldr x26,[x25]
7102b814f8  cbz x26,0x7102b81604
7102b814fc  ldr x8,[x26, #0x68]
7102b81500  cmp x8,x24
7102b81504  b.eq 0x7102b8175c
7102b81508  ldr x8,[x26, #0x68]
7102b8150c  cmp x8,x22
7102b81510  b.eq 0x7102b8175c
7102b81514  ldr x8,[x26, #0x68]
7102b81518  cmp x8,x27
7102b8151c  b.eq 0x7102b8175c
7102b81520  ldr x8,[x26, #0x68]
7102b81524  cmp x8,x28
7102b81528  b.eq 0x7102b8175c
7102b8152c  ldr x8,[x26, #0x68]
7102b81530  mov x9,#0x9adf
7102b81534  movk x9,#0x6fb1, LSL #16
7102b81538  movk x9,#0x12, LSL #32
7102b8153c  cmp x8,x9
7102b81540  b.eq 0x7102b8175c
7102b81544  ldr x8,[x26, #0x68]
7102b81548  mov x9,#0x78eb
7102b8154c  movk x9,#0x29b5, LSL #16
7102b81550  movk x9,#0xf, LSL #32
7102b81554  cmp x8,x9
7102b81558  b.eq 0x7102b8175c
7102b8155c  ldr x8,[x26, #0x68]
7102b81560  mov x9,#0xec35
7102b81564  movk x9,#0xc439, LSL #16
7102b81568  movk x9,#0xf, LSL #32
7102b8156c  cmp x8,x9
7102b81570  b.eq 0x7102b8175c
7102b81574  ldr x8,[x26, #0x68]
7102b81578  mov x9,#0x4f47
7102b8157c  movk x9,#0x43e3, LSL #16
7102b81580  movk x9,#0xc, LSL #32
7102b81584  cmp x8,x9
7102b81588  b.eq 0x7102b8175c
7102b8158c  ldr x8,[x26, #0x68]
7102b81590  mov x9,#0x2481
7102b81594  movk x9,#0xc156, LSL #16
7102b81598  movk x9,#0xf, LSL #32
7102b8159c  cmp x8,x9
7102b815a0  b.eq 0x7102b8175c
7102b815a4  ldr x8,[x26, #0x68]
7102b815a8  mov x9,#0xd0c8
7102b815ac  movk x9,#0x79b5, LSL #16
7102b815b0  movk x9,#0x10, LSL #32
7102b815b4  cmp x8,x9
7102b815b8  b.eq 0x7102b8175c
7102b815bc  ldr x8,[x26, #0x68]
7102b815c0  mov x9,#0xfa3c
7102b815c4  movk x9,#0x71ed, LSL #16
7102b815c8  movk x9,#0xf, LSL #32
7102b815cc  cmp x8,x9
7102b815d0  b.eq 0x7102b8175c
7102b815d4  ldr x8,[x26, #0x68]
7102b815d8  mov x9,#0x1ed7
7102b815dc  movk x9,#0x1c30, LSL #16
7102b815e0  movk x9,#0xf, LSL #32
7102b815e4  cmp x8,x9
7102b815e8  b.eq 0x7102b8175c
7102b815ec  ldr x8,[x26, #0x68]
7102b815f0  mov x9,#0xeb3
7102b815f4  movk x9,#0x187, LSL #16
7102b815f8  movk x9,#0xf, LSL #32
7102b815fc  cmp x8,x9
7102b81600  b.eq 0x7102b8175c
7102b81604  ldr x10,[sp, #0x88]
7102b81608  ldr x9,[x10, #0x780]
7102b8160c  ldr x8,[x10, #0x788]
7102b81610  cmp x9,x8
7102b81614  b.eq 0x7102b8162c
7102b81618  str x26,[x9]
7102b8161c  ldr x8,[x10, #0x780]
7102b81620  add x8,x8,#0x8
7102b81624  str x8,[x10, #0x780]
7102b81628  b 0x7102b8175c
7102b8162c  ldr x21,[x20]
7102b81630  sub x22,x9,x21
7102b81634  asr x28,x22,#0x3
7102b81638  add x9,x28,#0x1
7102b8163c  lsr x10,x9,#0x3d
7102b81640  cbnz x10,0x7102b82be8
7102b81644  sub x8,x8,x21
7102b81648  asr x10,x8,#0x3
7102b8164c  cmp x10,x23
7102b81650  str x20,[sp, #0x90]
7102b81654  b.hi 0x7102b81678
7102b81658  asr x8,x8,#0x2
7102b8165c  cmp x8,x9
7102b81660  csel x27,x9,x8,cc
7102b81664  cbz x27,0x7102b816e4
7102b81668  mov x20,x24
7102b8166c  lsr x8,x27,#0x3d
7102b81670  cbz x8,0x7102b81680
7102b81674  b 0x7102b81da0
7102b81678  mov x20,x24
7102b8167c  orr x27,xzr,#0x1fffffffffffffff
7102b81680  lsl x8,x27,#0x3
7102b81684  cmp x8,#0x0
7102b81688  csinc x24,x8,xzr,ne
7102b8168c  mov w0,#0x10
7102b81690  mov x1,x24
7102b81694  bl 0x710392e290
7102b81698  mov x23,x0
7102b8169c  cbnz x0,0x7102b816ec
7102b816a0  adrp x8,0x7105332000
7102b816a4  ldr x0,[x8, #0xf00]
7102b816a8  cbz x0,0x7102b816e8
7102b816ac  stur wzr,[x29, #-0x100]
7102b816b0  str x24,[sp, #0x140]
7102b816b4  ldr x8,[x0]
7102b816b8  ldr x8,[x8, #0x30]
7102b816bc  sub x1,x29,#0x100
7102b816c0  add x2,sp,#0x140
7102b816c4  blr x8
7102b816c8  tbz w0,#0x0,0x7102b816e8
7102b816cc  mov w0,#0x10
7102b816d0  mov x1,x24
7102b816d4  bl 0x710392e290
7102b816d8  mov x23,x0
7102b816dc  cbnz x0,0x7102b816ec
7102b816e0  b 0x7102b816e8
7102b816e4  mov x20,x24
7102b816e8  mov x23,xzr
7102b816ec  add x24,x23,x28, LSL #0x3
7102b816f0  cmp x22,#0x1
7102b816f4  str x26,[x24], #0x8
7102b816f8  add x26,x23,x27, LSL #0x3
7102b816fc  b.lt 0x7102b81710
7102b81700  mov x0,x23
7102b81704  mov x1,x21
7102b81708  mov x2,x22
7102b8170c  bl 0x71039c00e0
7102b81710  ldr x8,[sp, #0x88]
7102b81714  str x24,[x8, #0x780]
7102b81718  mov x24,x20
7102b8171c  ldr x20,[sp, #0x90]
7102b81720  mov x22,#0x1f36
7102b81724  movk x22,#0x38a6, LSL #16
7102b81728  mov x27,#0xf6d7
7102b8172c  movk x27,#0x5d9b, LSL #16
7102b81730  mov x28,#0x1abb
7102b81734  movk x28,#0x5804, LSL #16
7102b81738  str x23,[x8, #0x778]
7102b8173c  orr x23,xzr,#0xffffffffffffffe
7102b81740  movk x22,#0xc, LSL #32
7102b81744  movk x27,#0x12, LSL #32
7102b81748  movk x28,#0x11, LSL #32
7102b8174c  str x26,[x8, #0x788]
7102b81750  cbz x21,0x7102b8175c
7102b81754  mov x0,x21
7102b81758  bl 0x710392eb40
7102b8175c  ldr x26,[sp, #0x88]
7102b81760  add x25,x25,#0x10
7102b81764  cmp x25,x19
7102b81768  b.eq 0x7102b81794
7102b8176c  ldr w8,[x25, #0x8]
7102b81770  sub w8,w8,#0x2
7102b81774  cmp w8,#0x2
7102b81778  b.hi 0x7102b8178c
7102b8177c  add x25,x25,#0x10
7102b81780  cmp x19,x25
7102b81784  b.ne 0x7102b8176c
7102b81788  b 0x7102b81794
7102b8178c  cmp x25,x19
7102b81790  b.ne 0x7102b814f4
7102b81794  ldr x8,[x26, #0x300]
7102b81798  ldr x9,[x8, #0x18]
7102b8179c  mov x11,#0x267b
7102b817a0  movk x11,#0xd63e, LSL #16
7102b817a4  movk x11,#0xc, LSL #32
7102b817a8  ldp x8,x9,[x9]
7102b817ac  cmp x8,x9
7102b817b0  b.eq 0x7102b817d0
7102b817b4  ldr x19,[x8], #0x8
7102b817b8  ldr x10,[x19, #0xa0]
7102b817bc  and x10,x10,#0xffffffffff
7102b817c0  cmp x10,x11
7102b817c4  b.eq 0x7102b817d4
7102b817c8  cmp x9,x8
7102b817cc  b.ne 0x7102b817b4
7102b817d0  mov x19,xzr
7102b817d4  ldr x9,[x26, #0x798]
7102b817d8  ldr x8,[x26, #0x7a0]
7102b817dc  add x25,x26,#0x790
7102b817e0  cmp x9,x8
7102b817e4  b.cs 0x7102b817fc
7102b817e8  str x19,[x9]
7102b817ec  ldr x8,[x26, #0x798]
7102b817f0  add x8,x8,#0x8
7102b817f4  str x8,[x26, #0x798]
7102b817f8  b 0x7102b818ec
7102b817fc  ldr x21,[x25]
7102b81800  sub x22,x9,x21
7102b81804  asr x26,x22,#0x3
7102b81808  add x9,x26,#0x1
7102b8180c  lsr x10,x9,#0x3d
7102b81810  cbnz x10,0x7102b82bd8
7102b81814  sub x8,x8,x21
7102b81818  asr x10,x8,#0x3
7102b8181c  orr x11,xzr,#0xffffffffffffffe
7102b81820  cmp x10,x11
7102b81824  b.hi 0x7102b81844
7102b81828  asr x8,x8,#0x2
7102b8182c  cmp x8,x9
7102b81830  csel x20,x9,x8,cc
7102b81834  cbz x20,0x7102b818a8
7102b81838  lsr x8,x20,#0x3d
7102b8183c  cbz x8,0x7102b81848
7102b81840  b 0x7102b81da0
7102b81844  orr x20,xzr,#0x1fffffffffffffff
7102b81848  lsl x8,x20,#0x3
7102b8184c  cmp x8,#0x0
7102b81850  csinc x24,x8,xzr,ne
7102b81854  mov w0,#0x10
7102b81858  mov x1,x24
7102b8185c  bl 0x710392e290
7102b81860  mov x23,x0
7102b81864  cbnz x0,0x7102b818ac
7102b81868  adrp x8,0x7105332000
7102b8186c  ldr x0,[x8, #0xf00]
7102b81870  cbz x0,0x7102b818a8
7102b81874  stur wzr,[x29, #-0x100]
7102b81878  str x24,[sp, #0x140]
7102b8187c  ldr x8,[x0]
7102b81880  ldr x8,[x8, #0x30]
7102b81884  sub x1,x29,#0x100
7102b81888  add x2,sp,#0x140
7102b8188c  blr x8
7102b81890  tbz w0,#0x0,0x7102b818a8
7102b81894  mov w0,#0x10
7102b81898  mov x1,x24
7102b8189c  bl 0x710392e290
7102b818a0  mov x23,x0
7102b818a4  cbnz x0,0x7102b818ac
7102b818a8  mov x23,xzr
7102b818ac  add x24,x23,x26, LSL #0x3
7102b818b0  cmp x22,#0x1
7102b818b4  str x19,[x24], #0x8
7102b818b8  add x19,x23,x20, LSL #0x3
7102b818bc  b.lt 0x7102b818d0
7102b818c0  mov x0,x23
7102b818c4  mov x1,x21
7102b818c8  mov x2,x22
7102b818cc  bl 0x71039c00e0
7102b818d0  ldr x26,[sp, #0x88]
7102b818d4  str x23,[x26, #0x790]
7102b818d8  str x24,[x26, #0x798]
7102b818dc  str x19,[x26, #0x7a0]
7102b818e0  cbz x21,0x7102b818ec
7102b818e4  mov x0,x21
7102b818e8  bl 0x710392eb40
7102b818ec  ldr x8,[x26, #0x300]
7102b818f0  ldr x9,[x8, #0x18]
7102b818f4  mov x28,#0x7925
7102b818f8  movk x28,#0x44dd, LSL #16
7102b818fc  movk x28,#0xd, LSL #32
7102b81900  ldp x8,x9,[x9]
7102b81904  cmp x8,x9
7102b81908  b.eq 0x7102b81928
7102b8190c  ldr x19,[x8], #0x8
7102b81910  ldr x10,[x19, #0xa0]
7102b81914  and x10,x10,#0xffffffffff
7102b81918  cmp x10,x28
7102b8191c  b.eq 0x7102b8192c
7102b81920  cmp x9,x8
7102b81924  b.ne 0x7102b8190c
7102b81928  mov x19,xzr
7102b8192c  ldr x9,[x26, #0x798]
7102b81930  ldr x8,[x26, #0x7a0]
7102b81934  cmp x9,x8
7102b81938  b.cs 0x7102b81950
7102b8193c  str x19,[x9]
7102b81940  ldr x8,[x26, #0x798]
7102b81944  add x8,x8,#0x8
7102b81948  str x8,[x26, #0x798]
7102b8194c  b 0x7102b81a40
7102b81950  ldr x21,[x25]
7102b81954  sub x22,x9,x21
7102b81958  asr x26,x22,#0x3
7102b8195c  add x9,x26,#0x1
7102b81960  lsr x10,x9,#0x3d
7102b81964  cbnz x10,0x7102b82bd8
7102b81968  sub x8,x8,x21
7102b8196c  asr x10,x8,#0x3
7102b81970  orr x11,xzr,#0xffffffffffffffe
7102b81974  cmp x10,x11
7102b81978  b.hi 0x7102b81998
7102b8197c  asr x8,x8,#0x2
7102b81980  cmp x8,x9
7102b81984  csel x20,x9,x8,cc
7102b81988  cbz x20,0x7102b819fc
7102b8198c  lsr x8,x20,#0x3d
7102b81990  cbz x8,0x7102b8199c
7102b81994  b 0x7102b81da0
7102b81998  orr x20,xzr,#0x1fffffffffffffff
7102b8199c  lsl x8,x20,#0x3
7102b819a0  cmp x8,#0x0
7102b819a4  csinc x24,x8,xzr,ne
7102b819a8  mov w0,#0x10
7102b819ac  mov x1,x24
7102b819b0  bl 0x710392e290
7102b819b4  mov x23,x0
7102b819b8  cbnz x0,0x7102b81a00
7102b819bc  adrp x8,0x7105332000
7102b819c0  ldr x0,[x8, #0xf00]
7102b819c4  cbz x0,0x7102b819fc
7102b819c8  stur wzr,[x29, #-0x100]
7102b819cc  str x24,[sp, #0x140]
7102b819d0  ldr x8,[x0]
7102b819d4  ldr x8,[x8, #0x30]
7102b819d8  sub x1,x29,#0x100
7102b819dc  add x2,sp,#0x140
7102b819e0  blr x8
7102b819e4  tbz w0,#0x0,0x7102b819fc
7102b819e8  mov w0,#0x10
7102b819ec  mov x1,x24
7102b819f0  bl 0x710392e290
7102b819f4  mov x23,x0
7102b819f8  cbnz x0,0x7102b81a00
7102b819fc  mov x23,xzr
7102b81a00  add x24,x23,x26, LSL #0x3
7102b81a04  cmp x22,#0x1
7102b81a08  str x19,[x24], #0x8
7102b81a0c  add x19,x23,x20, LSL #0x3
7102b81a10  b.lt 0x7102b81a24
7102b81a14  mov x0,x23
7102b81a18  mov x1,x21
7102b81a1c  mov x2,x22
7102b81a20  bl 0x71039c00e0
7102b81a24  ldr x26,[sp, #0x88]
7102b81a28  str x23,[x26, #0x790]
7102b81a2c  str x24,[x26, #0x798]
7102b81a30  str x19,[x26, #0x7a0]
7102b81a34  cbz x21,0x7102b81a40
7102b81a38  mov x0,x21
7102b81a3c  bl 0x710392eb40
7102b81a40  ldr x8,[x26, #0x300]
7102b81a44  ldr x9,[x8, #0x18]
7102b81a48  mov x27,#0x289f
7102b81a4c  movk x27,#0xddd4, LSL #16
7102b81a50  movk x27,#0xd, LSL #32
7102b81a54  ldp x8,x9,[x9]
7102b81a58  cmp x8,x9
7102b81a5c  b.eq 0x7102b81a7c
7102b81a60  ldr x19,[x8], #0x8
7102b81a64  ldr x10,[x19, #0xa0]
7102b81a68  and x10,x10,#0xffffffffff
7102b81a6c  cmp x10,x27
7102b81a70  b.eq 0x7102b81a80
7102b81a74  cmp x9,x8
7102b81a78  b.ne 0x7102b81a60
7102b81a7c  mov x19,xzr
7102b81a80  ldr x9,[x26, #0x798]
7102b81a84  ldr x8,[x26, #0x7a0]
7102b81a88  cmp x9,x8
7102b81a8c  b.cs 0x7102b81aa8
7102b81a90  str x19,[x9]
7102b81a94  ldr x8,[x26, #0x798]
7102b81a98  add x8,x8,#0x8
7102b81a9c  str x8,[x26, #0x798]
7102b81aa0  mov x20,x26
7102b81aa4  b 0x7102b81b98
7102b81aa8  ldr x21,[x25]
7102b81aac  sub x22,x9,x21
7102b81ab0  asr x26,x22,#0x3
7102b81ab4  add x9,x26,#0x1
7102b81ab8  lsr x10,x9,#0x3d
7102b81abc  cbnz x10,0x7102b82bd8
7102b81ac0  sub x8,x8,x21
7102b81ac4  asr x10,x8,#0x3
7102b81ac8  orr x11,xzr,#0xffffffffffffffe
7102b81acc  cmp x10,x11
7102b81ad0  b.hi 0x7102b81af0
7102b81ad4  asr x8,x8,#0x2
7102b81ad8  cmp x8,x9
7102b81adc  csel x20,x9,x8,cc
7102b81ae0  cbz x20,0x7102b81b54
7102b81ae4  lsr x8,x20,#0x3d
7102b81ae8  cbz x8,0x7102b81af4
7102b81aec  b 0x7102b81da0
7102b81af0  orr x20,xzr,#0x1fffffffffffffff
7102b81af4  lsl x8,x20,#0x3
7102b81af8  cmp x8,#0x0
7102b81afc  csinc x24,x8,xzr,ne
7102b81b00  mov w0,#0x10
7102b81b04  mov x1,x24
7102b81b08  bl 0x710392e290
7102b81b0c  mov x23,x0
7102b81b10  cbnz x0,0x7102b81b58
7102b81b14  adrp x8,0x7105332000
7102b81b18  ldr x0,[x8, #0xf00]
7102b81b1c  cbz x0,0x7102b81b54
7102b81b20  stur wzr,[x29, #-0x100]
7102b81b24  str x24,[sp, #0x140]
7102b81b28  ldr x8,[x0]
7102b81b2c  ldr x8,[x8, #0x30]
7102b81b30  sub x1,x29,#0x100
7102b81b34  add x2,sp,#0x140
7102b81b38  blr x8
7102b81b3c  tbz w0,#0x0,0x7102b81b54
7102b81b40  mov w0,#0x10
7102b81b44  mov x1,x24
7102b81b48  bl 0x710392e290
7102b81b4c  mov x23,x0
7102b81b50  cbnz x0,0x7102b81b58
7102b81b54  mov x23,xzr
7102b81b58  add x24,x23,x26, LSL #0x3
7102b81b5c  cmp x22,#0x1
7102b81b60  str x19,[x24], #0x8
7102b81b64  add x19,x23,x20, LSL #0x3
7102b81b68  b.lt 0x7102b81b7c
7102b81b6c  mov x0,x23
7102b81b70  mov x1,x21
7102b81b74  mov x2,x22
7102b81b78  bl 0x71039c00e0
7102b81b7c  ldr x20,[sp, #0x88]
7102b81b80  str x23,[x20, #0x790]
7102b81b84  str x24,[x20, #0x798]
7102b81b88  str x19,[x20, #0x7a0]
7102b81b8c  cbz x21,0x7102b81b98
7102b81b90  mov x0,x21
7102b81b94  bl 0x710392eb40
7102b81b98  ldr x8,[x20, #0x300]
7102b81b9c  ldr x9,[x8, #0x18]
7102b81ba0  mov x26,#0x1809
7102b81ba4  movk x26,#0xaad3, LSL #16
7102b81ba8  movk x26,#0xd, LSL #32
7102b81bac  ldp x8,x9,[x9]
7102b81bb0  cmp x8,x9
7102b81bb4  b.eq 0x7102b81bd4
7102b81bb8  ldr x19,[x8], #0x8
7102b81bbc  ldr x10,[x19, #0xa0]
7102b81bc0  and x10,x10,#0xffffffffff
7102b81bc4  cmp x10,x26
7102b81bc8  b.eq 0x7102b81bd8
7102b81bcc  cmp x9,x8
7102b81bd0  b.ne 0x7102b81bb8
7102b81bd4  mov x19,xzr
7102b81bd8  ldr x22,[sp, #0x88]
7102b81bdc  ldr x9,[x22, #0x798]
7102b81be0  ldr x8,[x22, #0x7a0]
7102b81be4  cmp x9,x8
7102b81be8  b.cs 0x7102b81c00
7102b81bec  str x19,[x9]
7102b81bf0  ldr x8,[x22, #0x798]
7102b81bf4  add x8,x8,#0x8
7102b81bf8  str x8,[x22, #0x798]
7102b81bfc  b 0x7102b81cf4
7102b81c00  ldr x21,[x25]
7102b81c04  sub x22,x9,x21
7102b81c08  asr x20,x22,#0x3
7102b81c0c  add x9,x20,#0x1
7102b81c10  lsr x10,x9,#0x3d
7102b81c14  cbnz x10,0x7102b82bd8
7102b81c18  sub x8,x8,x21
7102b81c1c  asr x10,x8,#0x3
7102b81c20  orr x11,xzr,#0xffffffffffffffe
7102b81c24  cmp x10,x11
7102b81c28  str x25,[sp, #0x90]
7102b81c2c  b.hi 0x7102b81c4c
7102b81c30  asr x8,x8,#0x2
7102b81c34  cmp x8,x9
7102b81c38  csel x25,x9,x8,cc
7102b81c3c  cbz x25,0x7102b81cb0
7102b81c40  lsr x8,x25,#0x3d
7102b81c44  cbz x8,0x7102b81c50
7102b81c48  b 0x7102b81da0
7102b81c4c  orr x25,xzr,#0x1fffffffffffffff
7102b81c50  lsl x8,x25,#0x3
7102b81c54  cmp x8,#0x0
7102b81c58  csinc x24,x8,xzr,ne
7102b81c5c  mov w0,#0x10
7102b81c60  mov x1,x24
7102b81c64  bl 0x710392e290
7102b81c68  mov x23,x0
7102b81c6c  cbnz x0,0x7102b81cb4
7102b81c70  adrp x8,0x7105332000
7102b81c74  ldr x0,[x8, #0xf00]
7102b81c78  cbz x0,0x7102b81cb0
7102b81c7c  stur wzr,[x29, #-0x100]
7102b81c80  str x24,[sp, #0x140]
7102b81c84  ldr x8,[x0]
7102b81c88  ldr x8,[x8, #0x30]
7102b81c8c  sub x1,x29,#0x100
7102b81c90  add x2,sp,#0x140
7102b81c94  blr x8
7102b81c98  tbz w0,#0x0,0x7102b81cb0
7102b81c9c  mov w0,#0x10
7102b81ca0  mov x1,x24
7102b81ca4  bl 0x710392e290
7102b81ca8  mov x23,x0
7102b81cac  cbnz x0,0x7102b81cb4
7102b81cb0  mov x23,xzr
7102b81cb4  add x20,x23,x20, LSL #0x3
7102b81cb8  cmp x22,#0x1
7102b81cbc  str x19,[x20], #0x8
7102b81cc0  add x19,x23,x25, LSL #0x3
7102b81cc4  b.lt 0x7102b81cd8
7102b81cc8  mov x0,x23
7102b81ccc  mov x1,x21
7102b81cd0  mov x2,x22
7102b81cd4  bl 0x71039c00e0
7102b81cd8  ldp x22,x25,[sp, #0x88]
7102b81cdc  str x23,[x22, #0x790]
7102b81ce0  str x20,[x22, #0x798]
7102b81ce4  str x19,[x22, #0x7a0]
7102b81ce8  cbz x21,0x7102b81cf4
7102b81cec  mov x0,x21
7102b81cf0  bl 0x710392eb40
7102b81cf4  ldr x8,[x22, #0x300]
7102b81cf8  ldr x9,[x8, #0x18]
7102b81cfc  ldp x8,x9,[x9]
7102b81d00  cmp x8,x9
7102b81d04  b.eq 0x7102b81d30
7102b81d08  mov x10,#0xdd79
7102b81d0c  movk x10,#0x22ae, LSL #16
7102b81d10  movk x10,#0xe, LSL #32
7102b81d14  ldr x19,[x8], #0x8
7102b81d18  ldr x11,[x19, #0xa0]
7102b81d1c  and x11,x11,#0xffffffffff
7102b81d20  cmp x11,x10
7102b81d24  b.eq 0x7102b81d34
7102b81d28  cmp x9,x8
7102b81d2c  b.ne 0x7102b81d14
7102b81d30  mov x19,xzr
7102b81d34  ldr x22,[sp, #0x88]
7102b81d38  ldr x9,[x22, #0x798]
7102b81d3c  ldr x8,[x22, #0x7a0]
7102b81d40  cmp x9,x8
7102b81d44  b.cs 0x7102b81d5c
7102b81d48  str x19,[x9]
7102b81d4c  ldr x8,[x22, #0x798]
7102b81d50  add x8,x8,#0x8
7102b81d54  str x8,[x22, #0x798]
7102b81d58  b 0x7102b81e4c
7102b81d5c  ldr x21,[x25]
7102b81d60  sub x22,x9,x21
7102b81d64  asr x24,x22,#0x3
7102b81d68  add x9,x24,#0x1
7102b81d6c  lsr x10,x9,#0x3d
7102b81d70  cbnz x10,0x7102b82bd8
7102b81d74  sub x8,x8,x21
7102b81d78  asr x10,x8,#0x3
7102b81d7c  orr x11,xzr,#0xffffffffffffffe
7102b81d80  cmp x10,x11
7102b81d84  b.hi 0x7102b81da4
7102b81d88  asr x8,x8,#0x2
7102b81d8c  cmp x8,x9
7102b81d90  csel x25,x9,x8,cc
7102b81d94  cbz x25,0x7102b81e08
7102b81d98  lsr x8,x25,#0x3d
7102b81d9c  cbz x8,0x7102b81da8
7102b81da0  bl 0x71039c2650
7102b81da4  orr x25,xzr,#0x1fffffffffffffff
7102b81da8  lsl x8,x25,#0x3
7102b81dac  cmp x8,#0x0
7102b81db0  csinc x23,x8,xzr,ne
7102b81db4  mov w0,#0x10
7102b81db8  mov x1,x23
7102b81dbc  bl 0x710392e290
7102b81dc0  mov x20,x0
7102b81dc4  cbnz x0,0x7102b81e0c
7102b81dc8  adrp x8,0x7105332000
7102b81dcc  ldr x0,[x8, #0xf00]
7102b81dd0  cbz x0,0x7102b81e08
7102b81dd4  stur wzr,[x29, #-0x100]
7102b81dd8  str x23,[sp, #0x140]
7102b81ddc  ldr x8,[x0]
7102b81de0  ldr x8,[x8, #0x30]
7102b81de4  sub x1,x29,#0x100
7102b81de8  add x2,sp,#0x140
7102b81dec  blr x8
7102b81df0  tbz w0,#0x0,0x7102b81e08
7102b81df4  mov w0,#0x10
7102b81df8  mov x1,x23
7102b81dfc  bl 0x710392e290
7102b81e00  mov x20,x0
7102b81e04  cbnz x0,0x7102b81e0c
7102b81e08  mov x20,xzr
7102b81e0c  add x23,x20,x24, LSL #0x3
7102b81e10  cmp x22,#0x1
7102b81e14  str x19,[x23], #0x8
7102b81e18  add x19,x20,x25, LSL #0x3
7102b81e1c  b.lt 0x7102b81e30
7102b81e20  mov x0,x20
7102b81e24  mov x1,x21
7102b81e28  mov x2,x22
7102b81e2c  bl 0x71039c00e0
7102b81e30  ldr x22,[sp, #0x88]
7102b81e34  str x20,[x22, #0x790]
7102b81e38  str x23,[x22, #0x798]
7102b81e3c  str x19,[x22, #0x7a0]
7102b81e40  cbz x21,0x7102b81e4c
7102b81e44  mov x0,x21
7102b81e48  bl 0x710392eb40
7102b81e4c  ldr x8,[x22, #0x300]
7102b81e50  ldr x9,[x8, #0x18]
7102b81e54  ldp x8,x9,[x9]
7102b81e58  cmp x8,x9
7102b81e5c  b.eq 0x7102b81e8c
7102b81e60  mov x12,#0x267b
7102b81e64  movk x12,#0xd63e, LSL #16
7102b81e68  mov x10,x8
7102b81e6c  movk x12,#0xc, LSL #32
7102b81e70  ldr x19,[x10], #0x8
7102b81e74  ldr x11,[x19, #0xa0]
7102b81e78  and x11,x11,#0xffffffffff
7102b81e7c  cmp x11,x12
7102b81e80  b.eq 0x7102b81e90
7102b81e84  cmp x9,x10
7102b81e88  b.ne 0x7102b81e70
7102b81e8c  mov x19,xzr
7102b81e90  ldr x10,[sp, #0x88]
7102b81e94  ldr x11,[x10, #0x310]
7102b81e98  ldp x10,x11,[x11, #0xd0]
7102b81e9c  cmp x10,x11
7102b81ea0  b.eq 0x7102b81ecc
7102b81ea4  ldr w12,[x10, #0x8]
7102b81ea8  cmp w12,#0x1
7102b81eac  b.hi 0x7102b81ec0
7102b81eb0  ldr x20,[x10]
7102b81eb4  ldr x12,[x20, #0x68]
7102b81eb8  cmp x12,x28
7102b81ebc  b.eq 0x7102b81ed0
7102b81ec0  add x10,x10,#0x10
7102b81ec4  cmp x11,x10
7102b81ec8  b.ne 0x7102b81ea4
7102b81ecc  mov x20,xzr
7102b81ed0  cmp x8,x9
7102b81ed4  b.eq 0x7102b81f10
7102b81ed8  ldr x10,[x8], #0x8
7102b81edc  ldr x11,[x10, #0xa0]
7102b81ee0  and x11,x11,#0xffffffffff
7102b81ee4  cmp x11,x28
7102b81ee8  b.eq 0x7102b81ef8
7102b81eec  cmp x9,x8
7102b81ef0  b.ne 0x7102b81ed8
7102b81ef4  b 0x7102b81f10
7102b81ef8  ldr x8,[x10, #0x110]
7102b81efc  cbz x8,0x7102b81f10
7102b81f00  ldp x9,x10,[x8]
7102b81f04  cmp x9,x10
7102b81f08  csel x21,xzr,x8,eq
7102b81f0c  b 0x7102b81f14
7102b81f10  mov x21,xzr
7102b81f14  ldr x22,[x19, #0x130]
7102b81f18  adrp x0,0x71042a1000
7102b81f1c  add x0,x0,#0x67e
7102b81f20  bl 0x7103151710
7102b81f24  ldp x8,x9,[x22]
7102b81f28  cmp x8,x9
7102b81f2c  b.eq 0x7102b81f54
7102b81f30  ldr x22,[x8]
7102b81f34  ldr x10,[x22, #0x18]
7102b81f38  cbz x10,0x7102b81f48
7102b81f3c  ldr w10,[x10, #0x100]
7102b81f40  cmp w10,w0
7102b81f44  b.eq 0x7102b81f58
7102b81f48  add x8,x8,#0x8
7102b81f4c  cmp x9,x8
7102b81f50  b.ne 0x7102b81f30
7102b81f54  mov x22,xzr
7102b81f58  mov w0,#0x10
7102b81f5c  orr w1,wzr,#0x18
7102b81f60  bl 0x710392e290
7102b81f64  cbnz x0,0x7102b81f9c
7102b81f68  adrp x8,0x7105332000
7102b81f6c  ldr x0,[x8, #0xf00]
7102b81f70  orr w8,wzr,#0x18
7102b81f74  stur wzr,[x29, #-0x100]
7102b81f78  sub x1,x29,#0x100
7102b81f7c  str x8,[sp, #0x140]
7102b81f80  ldr x8,[x0]
7102b81f84  ldr x8,[x8, #0x30]
7102b81f88  add x2,sp,#0x140
7102b81f8c  blr x8
7102b81f90  mov w0,#0x10
7102b81f94  orr w1,wzr,#0x18
7102b81f98  bl 0x710392e290
7102b81f9c  ldr x9,[sp, #0x88]
7102b81fa0  stp x20,x21,[x0]
7102b81fa4  str x22,[x0, #0x10]
7102b81fa8  ldr x8,[x9, #0x7b0]
7102b81fac  str x0,[x9, #0x7b0]
7102b81fb0  cbz x8,0x7102b81fbc
7102b81fb4  mov x0,x8
7102b81fb8  bl 0x710392eb40
7102b81fbc  ldr x8,[sp, #0x88]
7102b81fc0  ldr x9,[x8, #0x310]
7102b81fc4  ldp x8,x9,[x9, #0xd0]
7102b81fc8  cmp x8,x9
7102b81fcc  b.eq 0x7102b81ff8
7102b81fd0  ldr w10,[x8, #0x8]
7102b81fd4  cmp w10,#0x1
7102b81fd8  b.hi 0x7102b81fec
7102b81fdc  ldr x20,[x8]
7102b81fe0  ldr x10,[x20, #0x68]
7102b81fe4  cmp x10,x27
7102b81fe8  b.eq 0x7102b81ffc
7102b81fec  add x8,x8,#0x10
7102b81ff0  cmp x9,x8
7102b81ff4  b.ne 0x7102b81fd0
7102b81ff8  mov x20,xzr
7102b81ffc  ldr x8,[sp, #0x88]
7102b82000  ldr x8,[x8, #0x300]
7102b82004  ldr x9,[x8, #0x18]
7102b82008  ldp x8,x9,[x9]
7102b8200c  cmp x8,x9
7102b82010  b.eq 0x7102b8204c
7102b82014  ldr x10,[x8], #0x8
7102b82018  ldr x11,[x10, #0xa0]
7102b8201c  and x11,x11,#0xffffffffff
7102b82020  cmp x11,x27
7102b82024  b.eq 0x7102b82034
7102b82028  cmp x9,x8
7102b8202c  b.ne 0x7102b82014
7102b82030  b 0x7102b8204c
7102b82034  ldr x8,[x10, #0x110]
7102b82038  cbz x8,0x7102b8204c
7102b8203c  ldp x9,x10,[x8]
7102b82040  cmp x9,x10
7102b82044  csel x21,xzr,x8,eq
7102b82048  b 0x7102b82050
7102b8204c  mov x21,xzr
7102b82050  ldr x22,[x19, #0x130]
7102b82054  adrp x0,0x71043bc000
7102b82058  add x0,x0,#0xb6c
7102b8205c  bl 0x7103151710
7102b82060  ldp x8,x9,[x22]
7102b82064  cmp x8,x9
7102b82068  b.eq 0x7102b82090
7102b8206c  ldr x22,[x8]
7102b82070  ldr x10,[x22, #0x18]
7102b82074  cbz x10,0x7102b82084
7102b82078  ldr w10,[x10, #0x100]
7102b8207c  cmp w10,w0
7102b82080  b.eq 0x7102b82094
7102b82084  add x8,x8,#0x8
7102b82088  cmp x9,x8
7102b8208c  b.ne 0x7102b8206c
7102b82090  mov x22,xzr
7102b82094  mov w0,#0x10
7102b82098  orr w1,wzr,#0x18
7102b8209c  bl 0x710392e290
7102b820a0  cbnz x0,0x7102b820d8
7102b820a4  adrp x8,0x7105332000
7102b820a8  ldr x0,[x8, #0xf00]
7102b820ac  orr w8,wzr,#0x18
7102b820b0  stur wzr,[x29, #-0x100]
7102b820b4  sub x1,x29,#0x100
7102b820b8  str x8,[sp, #0x140]
7102b820bc  ldr x8,[x0]
7102b820c0  ldr x8,[x8, #0x30]
7102b820c4  add x2,sp,#0x140
7102b820c8  blr x8
7102b820cc  mov w0,#0x10
7102b820d0  orr w1,wzr,#0x18
7102b820d4  bl 0x710392e290
7102b820d8  ldr x9,[sp, #0x88]
7102b820dc  stp x20,x21,[x0]
7102b820e0  str x22,[x0, #0x10]
7102b820e4  ldr x8,[x9, #0x7a8]
7102b820e8  str x0,[x9, #0x7a8]
7102b820ec  cbz x8,0x7102b820f8
7102b820f0  mov x0,x8
7102b820f4  bl 0x710392eb40
7102b820f8  ldr x8,[sp, #0x88]
7102b820fc  ldr x9,[x8, #0x310]
7102b82100  ldp x8,x9,[x9, #0xd0]
7102b82104  cmp x8,x9
7102b82108  b.eq 0x7102b82134
7102b8210c  ldr w10,[x8, #0x8]
7102b82110  cmp w10,#0x1
7102b82114  b.hi 0x7102b82128
7102b82118  ldr x20,[x8]
7102b8211c  ldr x10,[x20, #0x68]
7102b82120  cmp x10,x26
7102b82124  b.eq 0x7102b82138
7102b82128  add x8,x8,#0x10
7102b8212c  cmp x9,x8
7102b82130  b.ne 0x7102b8210c
7102b82134  mov x20,xzr
7102b82138  ldr x8,[sp, #0x88]
7102b8213c  ldr x8,[x8, #0x300]
7102b82140  ldr x9,[x8, #0x18]
7102b82144  ldp x8,x9,[x9]
7102b82148  cmp x8,x9
7102b8214c  b.eq 0x7102b8216c
7102b82150  ldr x10,[x8], #0x8
7102b82154  ldr x11,[x10, #0xa0]
7102b82158  and x11,x11,#0xffffffffff
7102b8215c  cmp x11,x26
7102b82160  b.eq 0x7102b825e8
7102b82164  cmp x9,x8
7102b82168  b.ne 0x7102b82150
7102b8216c  ldr x24,[sp, #0x88]
7102b82170  mov x21,xzr
7102b82174  ldr x19,[x19, #0x130]
7102b82178  adrp x0,0x710436a000
7102b8217c  add x0,x0,#0x9e7
7102b82180  bl 0x7103151710
7102b82184  ldp x8,x9,[x19]
7102b82188  cmp x8,x9
7102b8218c  b.eq 0x7102b821b4
7102b82190  ldr x19,[x8]
7102b82194  ldr x10,[x19, #0x18]
7102b82198  cbz x10,0x7102b821a8
7102b8219c  ldr w10,[x10, #0x100]
7102b821a0  cmp w10,w0
7102b821a4  b.eq 0x7102b821b8
7102b821a8  add x8,x8,#0x8
7102b821ac  cmp x9,x8
7102b821b0  b.ne 0x7102b82190
7102b821b4  mov x19,xzr
7102b821b8  mov w0,#0x10
7102b821bc  orr w1,wzr,#0x18
7102b821c0  bl 0x710392e290
7102b821c4  cbnz x0,0x7102b821fc
7102b821c8  adrp x8,0x7105332000
7102b821cc  ldr x0,[x8, #0xf00]
7102b821d0  orr w8,wzr,#0x18
7102b821d4  stur wzr,[x29, #-0x100]
7102b821d8  sub x1,x29,#0x100
7102b821dc  str x8,[sp, #0x140]
7102b821e0  ldr x8,[x0]
7102b821e4  ldr x8,[x8, #0x30]
7102b821e8  add x2,sp,#0x140
7102b821ec  blr x8
7102b821f0  mov w0,#0x10
7102b821f4  orr w1,wzr,#0x18
7102b821f8  bl 0x710392e290
7102b821fc  stp x20,x21,[x0]
7102b82200  str x19,[x0, #0x10]
7102b82204  ldr x8,[x24, #0x7b8]
7102b82208  str x0,[x24, #0x7b8]
7102b8220c  cbz x8,0x7102b82218
7102b82210  mov x0,x8
7102b82214  bl 0x710392eb40
7102b82218  ldr x19,[x24, #0x7b0]
7102b8221c  ldr x8,[x19]
7102b82220  cbz x8,0x7102b82234
7102b82224  add x0,x8,#0x108
7102b82228  mov w9,#0x1
7102b8222c  strb w9,[x8, #0x110]
7102b82230  bl 0x71025e9d50
7102b82234  ldr x8,[x19, #0x8]
7102b82238  cbz x8,0x7102b8227c
7102b8223c  ldp x20,x21,[x8]
7102b82240  cmp x20,x21
7102b82244  b.eq 0x7102b8227c
7102b82248  mov w22,#0x1
7102b8224c  mov x23,#-0x1
7102b82250  ldr x8,[x20]
7102b82254  ldr x9,[x8, #0x8]
7102b82258  strb w22,[x8, #0x128]
7102b8225c  cbz x9,0x7102b82270
7102b82260  str x23,[x9, #0xd8]
7102b82264  ldr x0,[x8, #0x8]
7102b82268  mov w1,wzr
7102b8226c  bl 0x7100532bc0
7102b82270  add x20,x20,#0x8
7102b82274  cmp x21,x20
7102b82278  b.ne 0x7102b82250
7102b8227c  ldr x9,[x19, #0x10]
7102b82280  cbz x9,0x7102b822ec
7102b82284  ldrb w8,[x9, #0x20]
7102b82288  cbnz w8,0x7102b822ec
7102b8228c  mov w8,#0x1
7102b82290  strb w8,[x9, #0x20]
7102b82294  ldr x10,[x9]
7102b82298  ldp x11,x8,[x9, #0x8]
7102b8229c  str x10,[x11]
7102b822a0  str x11,[x10, #0x8]
7102b822a4  ldr x10,[x8, #0x30]
7102b822a8  sub x10,x10,#0x1
7102b822ac  str x10,[x8, #0x30]
7102b822b0  stp xzr,xzr,[x9]
7102b822b4  ldr x11,[x8, #0x28]
7102b822b8  add x10,x8,#0x20
7102b822bc  stp x10,x11,[x9]
7102b822c0  str x9,[x8, #0x28]
7102b822c4  str x9,[x11]
7102b822c8  ldr x10,[x8, #0x18]
7102b822cc  add x10,x10,#0x1
7102b822d0  str x10,[x8, #0x18]
7102b822d4  ldr x9,[x9, #0x18]
7102b822d8  cbz x9,0x7102b822e0
7102b822dc  ldr w9,[x9, #0x110]
7102b822e0  ldr w10,[x8, #0x48]
7102b822e4  add w9,w10,w9
7102b822e8  str w9,[x8, #0x48]
7102b822ec  ldr x19,[x24, #0x7a8]
7102b822f0  ldr x8,[x19]
7102b822f4  cbz x8,0x7102b82304
7102b822f8  add x0,x8,#0x108
7102b822fc  strb wzr,[x8, #0x110]
7102b82300  bl 0x71025e9d50
7102b82304  ldr x8,[x19, #0x8]
7102b82308  cbz x8,0x7102b82318
7102b8230c  ldp x0,x1,[x8]
7102b82310  mov w2,#0x1
7102b82314  bl 0x71025f4d80
7102b82318  ldr x9,[x19, #0x10]
7102b8231c  cbz x9,0x7102b82384
7102b82320  ldrb w8,[x9, #0x20]
7102b82324  cbz w8,0x7102b82384
7102b82328  ldp x11,x8,[x9, #0x8]
7102b8232c  ldr x10,[x9]
7102b82330  strb wzr,[x9, #0x20]
7102b82334  str x10,[x11]
7102b82338  str x11,[x10, #0x8]
7102b8233c  ldr x10,[x8, #0x18]
7102b82340  sub x10,x10,#0x1
7102b82344  str x10,[x8, #0x18]
7102b82348  stp xzr,xzr,[x9]
7102b8234c  ldr x11,[x8, #0x40]
7102b82350  add x10,x8,#0x38
7102b82354  stp x10,x11,[x9]
7102b82358  str x9,[x8, #0x40]
7102b8235c  str x9,[x11]
7102b82360  ldr x10,[x8, #0x30]
7102b82364  add x10,x10,#0x1
7102b82368  str x10,[x8, #0x30]
7102b8236c  ldr x9,[x9, #0x18]
7102b82370  cbz x9,0x7102b82378
7102b82374  ldr w9,[x9, #0x110]
7102b82378  ldr w10,[x8, #0x48]
7102b8237c  sub w9,w10,w9
7102b82380  str w9,[x8, #0x48]
7102b82384  ldr x19,[x24, #0x7b8]
7102b82388  ldr x8,[x19]
7102b8238c  cbz x8,0x7102b8239c
7102b82390  add x0,x8,#0x108
7102b82394  strb wzr,[x8, #0x110]
7102b82398  bl 0x71025e9d50
7102b8239c  ldr x8,[x19, #0x8]
7102b823a0  cbz x8,0x7102b823b0
7102b823a4  ldp x0,x1,[x8]
7102b823a8  mov w2,#0x1
7102b823ac  bl 0x71025f4d80
7102b823b0  ldr x9,[x19, #0x10]
7102b823b4  cbz x9,0x7102b8241c
7102b823b8  ldrb w8,[x9, #0x20]
7102b823bc  cbz w8,0x7102b8241c
7102b823c0  ldp x11,x8,[x9, #0x8]
7102b823c4  ldr x10,[x9]
7102b823c8  strb wzr,[x9, #0x20]
7102b823cc  str x10,[x11]
7102b823d0  str x11,[x10, #0x8]
7102b823d4  ldr x10,[x8, #0x18]
7102b823d8  sub x10,x10,#0x1
7102b823dc  str x10,[x8, #0x18]
7102b823e0  stp xzr,xzr,[x9]
7102b823e4  ldr x11,[x8, #0x40]
7102b823e8  add x10,x8,#0x38
7102b823ec  stp x10,x11,[x9]
7102b823f0  str x9,[x8, #0x40]
7102b823f4  str x9,[x11]
7102b823f8  ldr x10,[x8, #0x30]
7102b823fc  add x10,x10,#0x1
7102b82400  str x10,[x8, #0x30]
7102b82404  ldr x9,[x9, #0x18]
7102b82408  cbz x9,0x7102b82410
7102b8240c  ldr w9,[x9, #0x110]
7102b82410  ldr w10,[x8, #0x48]
7102b82414  sub w9,w10,w9
7102b82418  str w9,[x8, #0x48]
7102b8241c  ldr x8,[x24, #0x300]
7102b82420  ldr x9,[x8, #0x18]
7102b82424  ldp x8,x9,[x9]
7102b82428  cmp x8,x9
7102b8242c  b.eq 0x7102b82458
7102b82430  mov x10,#0xdf99
7102b82434  movk x10,#0xb569, LSL #16
7102b82438  movk x10,#0x7, LSL #32
7102b8243c  ldr x19,[x8], #0x8
7102b82440  ldr x11,[x19, #0xa0]
7102b82444  and x11,x11,#0xffffffffff
7102b82448  cmp x11,x10
7102b8244c  b.eq 0x7102b8245c
7102b82450  cmp x9,x8
7102b82454  b.ne 0x7102b8243c
7102b82458  mov x19,xzr
7102b8245c  adrp x8,0x7105314000
7102b82460  add x8,x8,#0x4d8
7102b82464  ldarb w8,[x8]
7102b82468  tbz w8,#0x0,0x7102b82b70
7102b8246c  ldr x9,[x19, #0x130]
7102b82470  adrp x8,0x71052c5000
7102b82474  ldrb w10,[x8, #0x1ba]
7102b82478  ldp x8,x9,[x9]
7102b8247c  cmp x8,x9
7102b82480  cbz w10,0x7102b82504
7102b82484  b.eq 0x7102b8257c
7102b82488  mov w10,#0x1
7102b8248c  ldr x12,[x8]
7102b82490  ldrb w11,[x12, #0x20]
7102b82494  cbnz w11,0x7102b824f4
7102b82498  ldp x14,x11,[x12, #0x8]
7102b8249c  ldr x13,[x12]
7102b824a0  strb w10,[x12, #0x20]
7102b824a4  str x13,[x14]
7102b824a8  str x14,[x13, #0x8]
7102b824ac  ldr x13,[x11, #0x30]
7102b824b0  sub x13,x13,#0x1
7102b824b4  str x13,[x11, #0x30]
7102b824b8  stp xzr,xzr,[x12]
7102b824bc  ldr x14,[x11, #0x28]
7102b824c0  add x13,x11,#0x20
7102b824c4  stp x13,x14,[x12]
7102b824c8  str x12,[x11, #0x28]
7102b824cc  str x12,[x14]
7102b824d0  ldr x13,[x11, #0x18]
7102b824d4  add x13,x13,#0x1
7102b824d8  str x13,[x11, #0x18]
7102b824dc  ldr x12,[x12, #0x18]
7102b824e0  cbz x12,0x7102b824e8
7102b824e4  ldr w12,[x12, #0x110]
7102b824e8  ldr w13,[x11, #0x48]
7102b824ec  add w12,w13,w12
7102b824f0  str w12,[x11, #0x48]
7102b824f4  add x8,x8,#0x8
7102b824f8  cmp x9,x8
7102b824fc  b.ne 0x7102b8248c
7102b82500  b 0x7102b8257c
7102b82504  b.eq 0x7102b8257c
7102b82508  ldr x11,[x8]
7102b8250c  ldrb w10,[x11, #0x20]
7102b82510  cbz w10,0x7102b82570
7102b82514  ldp x13,x10,[x11, #0x8]
7102b82518  ldr x12,[x11]
7102b8251c  strb wzr,[x11, #0x20]
7102b82520  str x12,[x13]
7102b82524  str x13,[x12, #0x8]
7102b82528  ldr x12,[x10, #0x18]
7102b8252c  sub x12,x12,#0x1
7102b82530  str x12,[x10, #0x18]
7102b82534  stp xzr,xzr,[x11]
7102b82538  ldr x13,[x10, #0x40]
7102b8253c  add x12,x10,#0x38
7102b82540  stp x12,x13,[x11]
7102b82544  str x11,[x10, #0x40]
7102b82548  str x11,[x13]
7102b8254c  ldr x12,[x10, #0x30]
7102b82550  add x12,x12,#0x1
7102b82554  str x12,[x10, #0x30]
7102b82558  ldr x11,[x11, #0x18]
7102b8255c  cbz x11,0x7102b82564
7102b82560  ldr w11,[x11, #0x110]
7102b82564  ldr w12,[x10, #0x48]
7102b82568  sub w11,w12,w11
7102b8256c  str w11,[x10, #0x48]
7102b82570  add x8,x8,#0x8
7102b82574  cmp x9,x8
7102b82578  b.ne 0x7102b82508
7102b8257c  ldr x8,[x24, #0x310]
7102b82580  ldr x19,[x8, #0x118]
7102b82584  cbz x19,0x7102b82684
7102b82588  ldr x8,[x19]
7102b8258c  ldrb w10,[x24, #0x18]
7102b82590  ldrb w9,[x8, #0x80]
7102b82594  cbz w10,0x7102b82634
7102b82598  cbz w9,0x7102b82684
7102b8259c  ldr x0,[x8, #0x30]
7102b825a0  ldr x8,[x0]
7102b825a4  ldr x8,[x8, #0x180]
7102b825a8  mov x1,#0xa7c
7102b825ac  movk x1,#0x2973, LSL #16
7102b825b0  movk x1,#0xe, LSL #32
7102b825b4  mov w2,wzr
7102b825b8  blr x8
7102b825bc  ldr x8,[x19]
7102b825c0  ldrb w9,[x8, #0x80]
7102b825c4  cbz w9,0x7102b82684
7102b825c8  ldr x0,[x8, #0x30]
7102b825cc  ldr x8,[x0]
7102b825d0  ldr x8,[x8, #0x180]
7102b825d4  mov x1,#0x8da4
7102b825d8  movk x1,#0x1ca4, LSL #16
7102b825dc  movk x1,#0xf, LSL #32
7102b825e0  mov w2,#0x1
7102b825e4  b 0x7102b82680
7102b825e8  ldr x8,[x10, #0x110]
7102b825ec  ldr x24,[sp, #0x88]
7102b825f0  cbz x8,0x7102b82170
7102b825f4  ldp x9,x10,[x8]
7102b825f8  cmp x9,x10
7102b825fc  csel x21,xzr,x8,eq
7102b82600  b 0x7102b82174
7102b82604  mov x0,x19
7102b82608  str x19,[sp, #0x148]
7102b8260c  cbnz x0,0x7102b7f638
7102b82610  b 0x7102b7f63c
7102b82614  mov x0,x19
7102b82618  str x19,[sp, #0x148]
7102b8261c  cbnz x0,0x7102b7f844
7102b82620  b 0x7102b7f848
7102b82624  mov x0,x19
7102b82628  str x19,[sp, #0x148]
7102b8262c  cbnz x0,0x7102b7fcf8
7102b82630  b 0x7102b7fcfc
7102b82634  cbz w9,0x7102b82684
7102b82638  ldr x0,[x8, #0x30]
7102b8263c  ldr x8,[x0]
7102b82640  ldr x8,[x8, #0x180]
7102b82644  mov x1,#0xa7c
7102b82648  movk x1,#0x2973, LSL #16
7102b8264c  movk x1,#0xe, LSL #32
7102b82650  mov w2,#0x1
7102b82654  blr x8
7102b82658  ldr x8,[x19]
7102b8265c  ldrb w9,[x8, #0x80]
7102b82660  cbz w9,0x7102b82684
7102b82664  ldr x0,[x8, #0x30]
7102b82668  ldr x8,[x0]
7102b8266c  ldr x8,[x8, #0x180]
7102b82670  mov x1,#0x8da4
7102b82674  movk x1,#0x1ca4, LSL #16
7102b82678  movk x1,#0xf, LSL #32
7102b8267c  mov w2,wzr
7102b82680  blr x8
7102b82684  mov w8,#0x1
7102b82688  strb w8,[x24, #0x7d8]
7102b8268c  add sp,sp,#0x3a0
7102b82690  ldp d9,d8,[sp, #0x10]
7102b82694  ldp x29,x30,[sp, #0x70]
7102b82698  ldp x20,x19,[sp, #0x60]
7102b8269c  ldp x22,x21,[sp, #0x50]
7102b826a0  ldp x24,x23,[sp, #0x40]
7102b826a4  ldp x26,x25,[sp, #0x30]
7102b826a8  ldp x28,x27,[sp, #0x20]
7102b826ac  ldr d10,[sp], #0x80
7102b826b0  ret
7102b826b4  mov x0,x19
7102b826b8  str x19,[x23, #0x10]
7102b826bc  cbnz x0,0x7102b7f5f8
7102b826c0  b 0x7102b7f5fc
7102b826c4  mov x0,x19
7102b826c8  str x19,[x23, #0x10]
7102b826cc  cbnz x0,0x7102b7f804
7102b826d0  b 0x7102b7f808
7102b826d4  mov x0,x19
7102b826d8  str x19,[x23, #0x10]
7102b826dc  cbnz x0,0x7102b7fcb8
7102b826e0  b 0x7102b7fcbc
7102b826e4  mov x0,x19
7102b826e8  str x19,[x22, #0x20]
7102b826ec  cbnz x0,0x7102b80e94
7102b826f0  b 0x7102b80e98
7102b826f4  ldr x9,[sp, #0x90]
7102b826f8  str x27,[x9, #0x3c8]
7102b826fc  mov x27,x9
7102b82700  str x8,[x9, #0x3d0]
7102b82704  str x22,[x9, #0x3d8]
7102b82708  cbnz x26,0x7102b7f074
7102b8270c  b 0x7102b7f07c
7102b82710  cbz x24,0x7102b80f6c
7102b82714  cbz x19,0x7102b80f6c
7102b82718  cbz x25,0x7102b80f6c
7102b8271c  ldr x8,[x26, #0x300]
7102b82720  ldr x1,[x8, #0x20]
7102b82724  adrp x2,0x7104410000
7102b82728  add x2,x2,#0x95e
7102b8272c  add x0,sp,#0x140
7102b82730  bl 0x710262c340
7102b82734  ldr x8,[x26, #0x300]
7102b82738  ldr x8,[x8, #0x18]
7102b8273c  ldr x8,[x8]
7102b82740  mov x9,#0x3584
7102b82744  movk x9,#0x2605, LSL #16
7102b82748  movk x9,#0x10, LSL #32
7102b8274c  mov w4,#0x9dc5
7102b82750  movk w4,#0x811c, LSL #16
7102b82754  b 0x7102b8275c
7102b82758  add x8,x8,#0x8
7102b8275c  ldr x11,[x8]
7102b82760  ldr x10,[x11, #0xa0]
7102b82764  and x10,x10,#0xffffffffff
7102b82768  cmp x10,x9
7102b8276c  b.ne 0x7102b82758
7102b82770  ldr x10,[sp, #0x140]
7102b82774  ldr x21,[x11, #0x130]
7102b82778  add x9,sp,#0x140
7102b8277c  mov x8,xzr
7102b82780  add x9,x9,#0x10
7102b82784  sub x11,x29,#0x100
7102b82788  stur x10,[x29, #-0x100]
7102b8278c  stur wzr,[x29, #-0xf8]
7102b82790  b 0x7102b8279c
7102b82794  add x8,x8,#0x2
7102b82798  strb w12,[x13, #0x11]
7102b8279c  add x12,x9,x8
7102b827a0  ldrb w14,[x12]
7102b827a4  cbz w14,0x7102b827d0
7102b827a8  add w15,w8,#0x1
7102b827ac  add x13,x11,x8
7102b827b0  cmp w15,#0x3f
7102b827b4  strb w14,[x13, #0x10]
7102b827b8  b.cs 0x7102b827cc
7102b827bc  ldrb w12,[x12, #0x1]
7102b827c0  cbnz w12,0x7102b82794
7102b827c4  add x8,x8,#0x1
7102b827c8  b 0x7102b827d0
7102b827cc  add w8,w8,#0x1
7102b827d0  sub x9,x29,#0x100
7102b827d4  add x11,x9,#0x10
7102b827d8  mov w12,w4
7102b827dc  strb wzr,[x11, w8, UXTW ]
7102b827e0  stur w8,[x29, #-0xf4]
7102b827e4  ldurb w8,[x29, #-0xf0]
7102b827e8  cbz w8,0x7102b8280c
7102b827ec  add x9,x9,#0x11
7102b827f0  mov w11,#0x89
7102b827f4  mov w12,w4
7102b827f8  mul w12,w12,w11
7102b827fc  and w8,w8,#0xff
7102b82800  eor w12,w12,w8
7102b82804  ldrb w8,[x9], #0x1
7102b82808  cbnz w8,0x7102b827f8
7102b8280c  ldr x8,[sp, #0x190]
7102b82810  stur w12,[x29, #-0xf8]
7102b82814  add x12,sp,#0x140
7102b82818  add x12,x12,#0x10
7102b8281c  add x13,sp,#0xa8
7102b82820  stur x8,[x29, #-0xb0]
7102b82824  ldr x9,[x10]
7102b82828  mov x11,xzr
7102b8282c  str x10,[sp, #0xa8]
7102b82830  str wzr,[sp, #0xb0]
7102b82834  b 0x7102b82840
7102b82838  add x11,x11,#0x2
7102b8283c  strb w14,[x15, #0x11]
7102b82840  add x14,x12,x11
7102b82844  ldrb w16,[x14]
7102b82848  cbz w16,0x7102b82874
7102b8284c  add w17,w11,#0x1
7102b82850  add x15,x13,x11
7102b82854  cmp w17,#0x3f
7102b82858  strb w16,[x15, #0x10]
7102b8285c  b.cs 0x7102b82870
7102b82860  ldrb w14,[x14, #0x1]
7102b82864  cbnz w14,0x7102b82838
7102b82868  add x11,x11,#0x1
7102b8286c  b 0x7102b82874
7102b82870  add w11,w11,#0x1
7102b82874  add x12,sp,#0xa8
7102b82878  add x13,x12,#0x10
7102b8287c  strb wzr,[x13, w11, UXTW ]
7102b82880  str w11,[sp, #0xb4]
7102b82884  ldrb w11,[sp, #0xb8]
7102b82888  mov w13,w4
7102b8288c  cbz w11,0x7102b828b4
7102b82890  add x12,x12,#0x11
7102b82894  mov w14,#0x89
7102b82898  mov w15,w11
7102b8289c  mov w13,w4
7102b828a0  mul w13,w13,w14
7102b828a4  and w15,w15,#0xff
7102b828a8  eor w13,w13,w15
7102b828ac  ldrb w15,[x12], #0x1
7102b828b0  cbnz w15,0x7102b828a0
7102b828b4  add x10,x10,#0x8
7102b828b8  cmp x10,x8
7102b828bc  str w13,[sp, #0xb0]
7102b828c0  str x8,[sp, #0xf8]
7102b828c4  str x10,[sp, #0xa8]
7102b828c8  b.eq 0x7102b82964
7102b828cc  add x13,sp,#0xa8
7102b828d0  mov w12,#0xffffffff
7102b828d4  orr x14,xzr,#0x100000000
7102b828d8  add x13,x13,#0x11
7102b828dc  adrp x15,0x7104754000
7102b828e0  add x15,x15,#0x84
7102b828e4  ldr x16,[x10]
7102b828e8  cbz w11,0x7102b82938
7102b828ec  mov x17,xzr
7102b828f0  mov x18,x13
7102b828f4  mov w1,w11
7102b828f8  mov w0,w12
7102b828fc  and w1,w1,#0xff
7102b82900  sub w2,w1,#0x41
7102b82904  add w3,w1,#0x20
7102b82908  cmp w2,#0x1a
7102b8290c  csel w1,w3,w1,cc
7102b82910  eor w1,w1,w0
7102b82914  and w1,w1,#0xff
7102b82918  ldr w1,[x15, w1, UXTW #0x2]
7102b8291c  eor w0,w1,w0, LSR #0x8
7102b82920  ldrb w1,[x18], #0x1
7102b82924  add x17,x17,x14
7102b82928  cbnz w1,0x7102b828fc
7102b8292c  mvn w18,w0
7102b82930  and x17,x17,#0xff00000000
7102b82934  b 0x7102b82940
7102b82938  mov x18,xzr
7102b8293c  mov x17,xzr
7102b82940  ldr x16,[x16, #0xa0]
7102b82944  orr x17,x17,x18
7102b82948  and x16,x16,#0xffffffffff
7102b8294c  cmp x16,x17
7102b82950  b.eq 0x7102b82964
7102b82954  add x10,x10,#0x8
7102b82958  cmp x10,x8
7102b8295c  str x10,[sp, #0xa8]
7102b82960  b.ne 0x7102b828e4
7102b82964  add x13,sp,#0xa8
7102b82968  sub x14,x29,#0x100
7102b8296c  mov x12,xzr
7102b82970  add x13,x13,#0x11
7102b82974  add x14,x14,#0x11
7102b82978  stur x10,[x29, #-0x100]
7102b8297c  stur wzr,[x29, #-0xf8]
7102b82980  tst w11,#0xff
7102b82984  b.eq 0x7102b829cc
7102b82988  add w15,w12,#0x1
7102b8298c  add x16,x14,x12
7102b82990  cmp w15,#0x3f
7102b82994  sturb w11,[x16, #-0x1]
7102b82998  b.cs 0x7102b829c0
7102b8299c  ldrb w11,[x13, x12, LSL ]
7102b829a0  cbz w11,0x7102b829c8
7102b829a4  add x15,x13,x12
7102b829a8  strb w11,[x14, x12, LSL ]
7102b829ac  ldrb w11,[x15, #0x1]
7102b829b0  add x12,x12,#0x2
7102b829b4  tst w11,#0xff
7102b829b8  b.ne 0x7102b82988
7102b829bc  b 0x7102b829cc
7102b829c0  add w12,w12,#0x1
7102b829c4  b 0x7102b829cc
7102b829c8  add x12,x12,#0x1
7102b829cc  sub x11,x29,#0x100
7102b829d0  add x13,x11,#0x10
7102b829d4  strb wzr,[x13, w12, UXTW ]
7102b829d8  stur w12,[x29, #-0xf4]
7102b829dc  ldurb w12,[x29, #-0xf0]
7102b829e0  cbz w12,0x7102b82a00
7102b829e4  add x11,x11,#0x11
7102b829e8  mov w13,#0x89
7102b829ec  mul w14,w4,w13
7102b829f0  and w12,w12,#0xff
7102b829f4  eor w4,w14,w12
7102b829f8  ldrb w12,[x11], #0x1
7102b829fc  cbnz w12,0x7102b829ec
7102b82a00  stur w4,[x29, #-0xf8]
7102b82a04  stur x8,[x29, #-0xb0]
7102b82a08  ldr x22,[x9, #0x110]
7102b82a0c  cbz x22,0x7102b80f6c
7102b82a10  ldp x8,x9,[x22]
7102b82a14  cmp x8,x9
7102b82a18  b.eq 0x7102b80f6c
7102b82a1c  ldr x8,[x10]
7102b82a20  ldr x23,[x8, #0x110]
7102b82a24  cbz x23,0x7102b80f6c
7102b82a28  ldp x8,x9,[x23]
7102b82a2c  cmp x8,x9
7102b82a30  b.eq 0x7102b80f6c
7102b82a34  adrp x8,0x7104465000
7102b82a38  adrp x9,0x7104466000
7102b82a3c  ldr q1,[x9, #0xfb0]
7102b82a40  ldr q0,[x8, #0x810]
7102b82a44  add x8,sp,#0x130
7102b82a48  mov w1,#0x90
7102b82a4c  mov w0,#0x10
7102b82a50  str q0,[x8, #0x1e0]
7102b82a54  str q1,[x8, #0x180]
7102b82a58  bl 0x710392e290
7102b82a5c  mov x20,x0
7102b82a60  cbnz x0,0x7102b82aac
7102b82a64  adrp x8,0x7105332000
7102b82a68  ldr x0,[x8, #0xf00]
7102b82a6c  cbz x0,0x7102b82aa8
7102b82a70  mov w8,#0x90
7102b82a74  str wzr,[sp, #0x130]
7102b82a78  add x1,sp,#0x130
7102b82a7c  stur x8,[x29, #-0xa0]
7102b82a80  ldr x8,[x0]
7102b82a84  ldr x8,[x8, #0x30]
7102b82a88  sub x2,x29,#0xa0
7102b82a8c  blr x8
7102b82a90  tbz w0,#0x0,0x7102b82aa8
7102b82a94  mov w1,#0x90
7102b82a98  mov w0,#0x10
7102b82a9c  bl 0x710392e290
7102b82aa0  mov x20,x0
7102b82aa4  cbnz x0,0x7102b82aac
7102b82aa8  mov x20,xzr
7102b82aac  ldr x2,[sp, #0x50]
7102b82ab0  sub x6,x29,#0x100
7102b82ab4  add x7,sp,#0x2b0
7102b82ab8  mov x0,x20
7102b82abc  mov x1,x26
7102b82ac0  mov x3,x23
7102b82ac4  mov x4,x22
7102b82ac8  mov x5,x21
7102b82acc  str x24,[sp]
7102b82ad0  stp x19,x25,[sp, #0x8]
7102b82ad4  bl 0x7102b898e0
7102b82ad8  mov x0,x20
7102b82adc  str x20,[x26, #0x760]
7102b82ae0  bl 0x710313ef20
7102b82ae4  ldr x8,[x26, #0x760]
7102b82ae8  ldr x9,[x8, #0x68]
7102b82aec  ldp x8,x9,[x9]
7102b82af0  cmp x8,x9
7102b82af4  b.eq 0x7102b80f6c
7102b82af8  ldr x11,[x8]
7102b82afc  ldrb w10,[x11, #0x20]
7102b82b00  cbz w10,0x7102b82b60
7102b82b04  ldp x13,x10,[x11, #0x8]
7102b82b08  ldr x12,[x11]
7102b82b0c  strb wzr,[x11, #0x20]
7102b82b10  str x12,[x13]
7102b82b14  str x13,[x12, #0x8]
7102b82b18  ldr x12,[x10, #0x18]
7102b82b1c  sub x12,x12,#0x1
7102b82b20  str x12,[x10, #0x18]
7102b82b24  stp xzr,xzr,[x11]
7102b82b28  ldr x13,[x10, #0x40]
7102b82b2c  add x12,x10,#0x38
7102b82b30  stp x12,x13,[x11]
7102b82b34  str x11,[x10, #0x40]
7102b82b38  str x11,[x13]
7102b82b3c  ldr x12,[x10, #0x30]
7102b82b40  add x12,x12,#0x1
7102b82b44  str x12,[x10, #0x30]
7102b82b48  ldr x11,[x11, #0x18]
7102b82b4c  cbz x11,0x7102b82b54
7102b82b50  ldr w11,[x11, #0x110]
7102b82b54  ldr w12,[x10, #0x48]
7102b82b58  sub w11,w12,w11
7102b82b5c  str w11,[x10, #0x48]
7102b82b60  add x8,x8,#0x8
7102b82b64  cmp x9,x8
7102b82b68  b.ne 0x7102b82af8
7102b82b6c  b 0x7102b80f6c
7102b82b70  adrp x0,0x7105314000
7102b82b74  add x0,x0,#0x4d8
7102b82b78  bl 0x71039c06b0
7102b82b7c  cbz w0,0x7102b8246c
7102b82b80  bl 0x7101764000
7102b82b84  adrp x0,0x7101763000
7102b82b88  add x0,x0,#0xc40
7102b82b8c  adrp x1,0x71052c5000
7102b82b90  add x1,x1,#0x180
7102b82b94  adrp x2,0x7104f17000
7102b82b98  add x2,x2,#0x0
7102b82b9c  bl 0x71000001c0
7102b82ba0  adrp x0,0x7105314000
7102b82ba4  add x0,x0,#0x4d8
7102b82ba8  bl 0x71039c06c0
7102b82bac  b 0x7102b8246c
7102b82bb0  ldr x0,[sp, #0x80]
7102b82bb4  bl 0x71039c0c00
7102b82bb8  add x0,x8,#0x1a8
7102b82bbc  bl 0x71039c1330
7102b82bc0  ldr x0,[sp, #0x90]
7102b82bc4  bl 0x71039c0c00
7102b82bc8  ldr x0,[sp, #0x38]
7102b82bcc  bl 0x71039c0c00
7102b82bd0  add x0,sp,#0x2b0
7102b82bd4  bl 0x71039c0c00
7102b82bd8  mov x0,x25
7102b82bdc  bl 0x71039c0c00
7102b82be0  add x0,x26,#0x1a8
7102b82be4  bl 0x71039c1330
7102b82be8  mov x0,x20
7102b82bec  bl 0x71039c0c00
