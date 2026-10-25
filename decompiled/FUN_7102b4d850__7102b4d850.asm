// addr:      7102b4d850
// offset:    0x2b4d850
// name:      FUN_7102b4d850
// mangled:   
// size:      19444

7102b4d850  str d8,[sp, #-0x70]!
7102b4d854  stp x28,x27,[sp, #0x10]
7102b4d858  stp x26,x25,[sp, #0x20]
7102b4d85c  stp x24,x23,[sp, #0x30]
7102b4d860  stp x22,x21,[sp, #0x40]
7102b4d864  stp x20,x19,[sp, #0x50]
7102b4d868  stp x29,x30,[sp, #0x60]
7102b4d86c  add x29,sp,#0x60
7102b4d870  sub sp,sp,#0x230
7102b4d874  ldr w8,[x0, #0xb8]
7102b4d878  cmp w8,#0x3
7102b4d87c  b.cs 0x7102b52408
7102b4d880  adrp x9,0x710532a000
7102b4d884  ldr x9,[x9, #0x9d0]
7102b4d888  mov x20,x0
7102b4d88c  ldr x9,[x9, x8, LSL #0x3]
7102b4d890  ldr x8,[x9, #0x228]
7102b4d894  ldr x9,[x9, #0x230]
7102b4d898  orr w1,wzr,#0xffffff
7102b4d89c  cmp x8,x9
7102b4d8a0  b.eq 0x7102b4d910
7102b4d8a4  adrp x10,0x7105332000
7102b4d8a8  ldr x0,[x10, #0xf20]
7102b4d8ac  mov x10,#0x498d
7102b4d8b0  movk x10,#0x4fd6, LSL #16
7102b4d8b4  movk x10,#0x11, LSL #32
7102b4d8b8  ldr w19,[x8]
7102b4d8bc  cmp w19,w1
7102b4d8c0  b.eq 0x7102b4d8f0
7102b4d8c4  ldr x11,[x0, #0x78]
7102b4d8c8  ldr x11,[x11]
7102b4d8cc  ldr x12,[x11, #0x40]
7102b4d8d0  ldr w12,[x12, #0x4]
7102b4d8d4  cmp w12,w19
7102b4d8d8  b.ls 0x7102b4d8f0
7102b4d8dc  ldr x11,[x11, #0x60]
7102b4d8e0  add x11,x11,x19, LSL #0x5
7102b4d8e4  ldr x11,[x11, #0x18]
7102b4d8e8  cmp x11,x10
7102b4d8ec  b.eq 0x7102b4d904
7102b4d8f0  add x8,x8,#0x4
7102b4d8f4  cmp x9,x8
7102b4d8f8  b.ne 0x7102b4d8b8
7102b4d8fc  orr w1,wzr,#0xffffff
7102b4d900  b 0x7102b4d910
7102b4d904  mov w1,w19
7102b4d908  bl 0x7103540a00
7102b4d90c  mov w1,w19
7102b4d910  add x0,x20,#0x738
7102b4d914  add x19,sp,#0x148
7102b4d918  str x20,[sp, #0x70]
7102b4d91c  str x0,[sp, #0x58]
7102b4d920  str w1,[sp, #0x44]
7102b4d924  bl 0x7103720ec0
7102b4d928  mov w1,#0x2a0
7102b4d92c  mov w0,#0x10
7102b4d930  bl 0x710392e290
7102b4d934  mov x22,x0
7102b4d938  cbnz x0,0x7102b4d984
7102b4d93c  adrp x8,0x7105332000
7102b4d940  ldr x0,[x8, #0xf00]
7102b4d944  cbz x0,0x7102b4d980
7102b4d948  mov w8,#0x2a0
7102b4d94c  str wzr,[sp, #0xd0]
7102b4d950  add x1,sp,#0xd0
7102b4d954  str x8,[x19, #0x18]
7102b4d958  ldr x8,[x0]
7102b4d95c  ldr x8,[x8, #0x30]
7102b4d960  add x2,sp,#0x160
7102b4d964  blr x8
7102b4d968  tbz w0,#0x0,0x7102b4d980
7102b4d96c  mov w1,#0x2a0
7102b4d970  mov w0,#0x10
7102b4d974  bl 0x710392e290
7102b4d978  mov x22,x0
7102b4d97c  cbnz x0,0x7102b4d984
7102b4d980  mov x22,xzr
7102b4d984  mov x19,#0xbc35
7102b4d988  movk x19,#0x62d7, LSL #16
7102b4d98c  mov x0,x22
7102b4d990  movk x19,#0x30, LSL #32
7102b4d994  bl 0x7102b6fc10
7102b4d998  mov x8,#0xcd15
7102b4d99c  movk x8,#0x75b, LSL #16
7102b4d9a0  movk x8,#0x55e5, LSL #32
7102b4d9a4  movk x8,#0x159a, LSL #48
7102b4d9a8  str x8,[x22, #0x230]
7102b4d9ac  mov x8,#0x3bb5
7102b4d9b0  movk x8,#0x1f12, LSL #16
7102b4d9b4  movk x8,#0x1333, LSL #32
7102b4d9b8  movk x8,#0x549, LSL #48
7102b4d9bc  str x8,[x22, #0x238]
7102b4d9c0  add x20,x22,#0x244
7102b4d9c4  orr x8,xzr,#0x400000000
7102b4d9c8  add x9,x22,#0x27c
7102b4d9cc  str x8,[x20]
7102b4d9d0  str xzr,[x9]
7102b4d9d4  add x9,x22,#0x274
7102b4d9d8  str xzr,[x9]
7102b4d9dc  add x9,x22,#0x26c
7102b4d9e0  str xzr,[x9]
7102b4d9e4  add x9,x22,#0x264
7102b4d9e8  add x8,x22,#0x254
7102b4d9ec  str xzr,[x8]
7102b4d9f0  adrp x8,0x7105332000
7102b4d9f4  str xzr,[x9]
7102b4d9f8  add x9,x22,#0x25c
7102b4d9fc  str xzr,[x9]
7102b4da00  str xzr,[x22, #0x298]
7102b4da04  str xzr,[x22, #0x290]
7102b4da08  str xzr,[x22, #0x288]
7102b4da0c  ldr x21,[x8, #0xf20]
7102b4da10  ldr x8,[x21, #0x78]
7102b4da14  ldr x8,[x8]
7102b4da18  ldp x9,x8,[x8, #0x50]
7102b4da1c  ldr w10,[x9, #0x4]
7102b4da20  udiv x11,x19,x10
7102b4da24  msub x10,x11,x10,x19
7102b4da28  add x9,x9,x10, LSL #0x3
7102b4da2c  ldp w11,w10,[x9, #0x8]
7102b4da30  add x8,x8,x11, LSL #0x3
7102b4da34  add x9,x8,x10, LSL #0x3
7102b4da38  cbz w10,0x7102b4da6c
7102b4da3c  cmp x10,#0x0
7102b4da40  cinc x11,x10,lt
7102b4da44  asr x11,x11,#0x1
7102b4da48  add x12,x8,x11, LSL #0x3
7102b4da4c  ldr x13,[x12], #0x8
7102b4da50  and x13,x13,#0xffffffffff
7102b4da54  mvn x14,x11
7102b4da58  add x10,x10,x14
7102b4da5c  cmp x13,x19
7102b4da60  csel x10,x10,x11,cc
7102b4da64  csel x8,x12,x8,cc
7102b4da68  cbnz x10,0x7102b4da3c
7102b4da6c  cmp x8,x9
7102b4da70  b.eq 0x7102b4da90
7102b4da74  ldr x8,[x8]
7102b4da78  and x9,x8,#0xffffffffff
7102b4da7c  cmp x9,x19
7102b4da80  lsr x24,x8,#0x28
7102b4da84  orr w25,wzr,#0xffffff
7102b4da88  ccmp w24,w25,#0x4,eq
7102b4da8c  b.ne 0x7102b4e1ac
7102b4da90  orr w1,wzr,#0xffffff
7102b4da94  mov x0,x22
7102b4da98  bl 0x7103720ec0
7102b4da9c  ldr x5,[sp, #0x70]
7102b4daa0  ldrb w8,[x5, #0x8c]
7102b4daa4  cmp w8,#0x2
7102b4daa8  b.cs 0x7102b4dab4
7102b4daac  mov w14,wzr
7102b4dab0  b 0x7102b4dac0
7102b4dab4  mov w8,wzr
7102b4dab8  mov w14,#0x1
7102b4dabc  strb wzr,[x5, #0x8c]
7102b4dac0  cmp w8,#0x1
7102b4dac4  mov w10,#0xd8
7102b4dac8  orr w11,wzr,#0xf0
7102b4dacc  cset w9,eq
7102b4dad0  csel x10,x11,x10,eq
7102b4dad4  str w9,[x22, #0x24c]
7102b4dad8  add x10,x22,x10
7102b4dadc  ldp x15,x11,[x10]
7102b4dae0  sub x11,x11,x15
7102b4dae4  mov x16,#0x4ec5
7102b4dae8  movk x16,#0xc4ec, LSL #16
7102b4daec  movk x16,#0xec4e, LSL #32
7102b4daf0  movk x16,#0x4ec4, LSL #48
7102b4daf4  asr x11,x11,#0x2
7102b4daf8  mul x13,x11,x16
7102b4dafc  ldrsb x11,[x5, #0x8d]
7102b4db00  cmp x13,x11
7102b4db04  add x25,sp,#0x148
7102b4db08  b.ls 0x7102b4db14
7102b4db0c  and w11,w11,#0xff
7102b4db10  b 0x7102b4db30
7102b4db14  strb wzr,[x5, #0x8d]
7102b4db18  ldr x12,[x10, #0x8]
7102b4db1c  sub x12,x12,x15
7102b4db20  asr x12,x12,#0x2
7102b4db24  mul x13,x12,x16
7102b4db28  mov w11,wzr
7102b4db2c  mov w14,#0x1
7102b4db30  ldrsb x12,[x5, #0x8e]
7102b4db34  cmp x13,x12
7102b4db38  b.ls 0x7102b4db44
7102b4db3c  and w12,w12,#0xff
7102b4db40  b 0x7102b4db60
7102b4db44  strb wzr,[x5, #0x8e]
7102b4db48  ldr x13,[x10, #0x8]
7102b4db4c  sub x13,x13,x15
7102b4db50  asr x13,x13,#0x2
7102b4db54  mul x13,x13,x16
7102b4db58  mov w12,wzr
7102b4db5c  mov w14,#0x1
7102b4db60  ldrsb x15,[x5, #0x8f]
7102b4db64  cmp x13,x15
7102b4db68  b.ls 0x7102b4db7c
7102b4db6c  and w13,w15,#0xff
7102b4db70  tbz w14,#0x0,0x7102b4db90
7102b4db74  ldr x5,[sp, #0x70]
7102b4db78  b 0x7102b4db84
7102b4db7c  mov w13,wzr
7102b4db80  strb wzr,[x5, #0x8f]
7102b4db84  mov w14,wzr
7102b4db88  str wzr,[x5, #0x90]
7102b4db8c  b 0x7102b4db98
7102b4db90  ldr x5,[sp, #0x70]
7102b4db94  ldr w14,[x5, #0x90]
7102b4db98  eor w14,w14,w14, LSR #0x1e
7102b4db9c  mov w15,#0x8965
7102b4dba0  movk w15,#0x6c07, LSL #16
7102b4dba4  mul w17,w14,w15
7102b4dba8  eor w16,w17,w17, LSR #0x1e
7102b4dbac  mov w18,#0x1
7102b4dbb0  madd w18,w16,w15,w18
7102b4dbb4  eor w16,w18,w18, LSR #0x1e
7102b4dbb8  mov w0,#0x2
7102b4dbbc  madd w0,w16,w15,w0
7102b4dbc0  eor w16,w0,w0, LSR #0x1e
7102b4dbc4  orr w1,wzr,#0x3
7102b4dbc8  madd w16,w16,w15,w1
7102b4dbcc  mov w15,#0x2800
7102b4dbd0  movk w15,#0x3c4b, LSL #16
7102b4dbd4  mul w14,w14,w15
7102b4dbd8  eor w14,w14,w17
7102b4dbdc  eor w14,w14,w14, LSR #0x8
7102b4dbe0  eor w14,w14,w16
7102b4dbe4  eor w15,w14,w16, LSR #0x13
7102b4dbe8  mov w2,#0x851f
7102b4dbec  movk w2,#0x51eb, LSL #16
7102b4dbf0  umull x17,w15,w2
7102b4dbf4  lsr x17,x17,#0x25
7102b4dbf8  mov w3,#0x64
7102b4dbfc  msub w1,w17,w3,w15
7102b4dc00  eor w17,w18,w18, LSL #0xb
7102b4dc04  eor w17,w17,w17, LSR #0x8
7102b4dc08  eor w17,w17,w15
7102b4dc0c  eor w14,w17,w14, LSR #0x13
7102b4dc10  umull x18,w14,w2
7102b4dc14  lsr x18,x18,#0x25
7102b4dc18  msub w2,w18,w3,w14
7102b4dc1c  eor w18,w0,w0, LSL #0xb
7102b4dc20  ldp w3,w4,[x22, #0x90]
7102b4dc24  eor w18,w18,w18, LSR #0x8
7102b4dc28  eor w18,w18,w14
7102b4dc2c  eor w17,w18,w17, LSR #0x13
7102b4dc30  cmp w2,w4
7102b4dc34  orr w2,wzr,#0x6
7102b4dc38  cinc w2,w2,cs
7102b4dc3c  cmp w1,w3
7102b4dc40  and w0,w17,#0x7
7102b4dc44  csel w0,w2,w0,cc
7102b4dc48  str w16,[x22, #0x230]
7102b4dc4c  str w15,[x22, #0x234]
7102b4dc50  str w14,[x22, #0x238]
7102b4dc54  str w17,[x22, #0x23c]
7102b4dc58  str w0,[x22, #0x240]
7102b4dc5c  ldrb w0,[x5, #0x57]
7102b4dc60  sub w0,w0,#0x1
7102b4dc64  cmp w0,#0x4
7102b4dc68  b.cs 0x7102b4dc84
7102b4dc6c  sxtb x14,w0
7102b4dc70  adrp x15,0x7104471000
7102b4dc74  add x15,x15,#0x220
7102b4dc78  ldr x15,[x15, x14, LSL #0x3]
7102b4dc7c  and x14,x0,#0xff
7102b4dc80  b 0x7102b4dd68
7102b4dc84  eor w16,w16,w16, LSL #0xb
7102b4dc88  eor w16,w16,w16, LSR #0x8
7102b4dc8c  eor w16,w16,w17
7102b4dc90  mov x3,#0x2
7102b4dc94  movk x3,#0x3, LSL #32
7102b4dc98  eor w15,w15,w15, LSL #0xb
7102b4dc9c  eor w15,w15,w15, LSR #0x8
7102b4dca0  eor w14,w14,w14, LSL #0xb
7102b4dca4  eor w14,w14,w14, LSR #0x8
7102b4dca8  orr x0,xzr,#0x100000000
7102b4dcac  stp x0,x3,[x25, #0x18]
7102b4dcb0  add x1,sp,#0x160
7102b4dcb4  orr x2,x1,#0x4
7102b4dcb8  eor w18,w16,w18, LSR #0x13
7102b4dcbc  and w0,w18,#0x3
7102b4dcc0  lsl x0,x0,#0x2
7102b4dcc4  eor w15,w15,w18
7102b4dcc8  ldr w3,[x1, x0, LSL #0x0]
7102b4dccc  eor w16,w15,w16, LSR #0x13
7102b4dcd0  eor w14,w14,w16
7102b4dcd4  eor w14,w14,w15, LSR #0x13
7102b4dcd8  str w3,[sp, #0x160]
7102b4dcdc  str wzr,[x1, x0, LSL #0x0]
7102b4dce0  mov w0,#0xaaab
7102b4dce4  movk w0,#0xaaaa, LSL #16
7102b4dce8  umull x0,w16,w0
7102b4dcec  lsr x0,x0,#0x21
7102b4dcf0  add w0,w0,w0, LSL #0x1
7102b4dcf4  sub w0,w16,w0
7102b4dcf8  lsl x0,x0,#0x2
7102b4dcfc  ldr w3,[sp, #0x164]
7102b4dd00  ldr w4,[x2, x0, LSL #0x0]
7102b4dd04  str w4,[sp, #0x164]
7102b4dd08  str w3,[x2, x0, LSL #0x0]
7102b4dd0c  add x0,x1,#0x8
7102b4dd10  str w14,[x22, #0x23c]
7102b4dd14  and w14,w14,#0x1
7102b4dd18  bfm x0,x14,#0x3e,#0x0
7102b4dd1c  str w17,[x22, #0x230]
7102b4dd20  str w18,[x22, #0x234]
7102b4dd24  str w16,[x22, #0x238]
7102b4dd28  ldr w14,[sp, #0x168]
7102b4dd2c  ldr w15,[x0]
7102b4dd30  str w15,[sp, #0x168]
7102b4dd34  str w14,[x0]
7102b4dd38  ldr w14,[sp, #0x160]
7102b4dd3c  ldr w17,[sp, #0x164]
7102b4dd40  mov w15,#0x1
7102b4dd44  lsl x16,x15,x14
7102b4dd48  lsl x17,x15,x17
7102b4dd4c  orr w16,w17,w16
7102b4dd50  ldr w17,[sp, #0x168]
7102b4dd54  lsl x17,x15,x17
7102b4dd58  orr w16,w16,w17
7102b4dd5c  ldr w17,[sp, #0x16c]
7102b4dd60  lsl x15,x15,x17
7102b4dd64  orr w15,w16,w15
7102b4dd68  orr x14,x15,x14, LSL #0x20
7102b4dd6c  sxtb w15,w11
7102b4dd70  sxtb x11,w11
7102b4dd74  str x14,[x20]
7102b4dd78  str w9,[x22, #0x24c]
7102b4dd7c  ldr x9,[x10]
7102b4dd80  mov w10,#0x34
7102b4dd84  sxtb x14,w12
7102b4dd88  madd x14,x14,x10,x9
7102b4dd8c  sxtb x16,w13
7102b4dd90  madd x11,x11,x10,x9
7102b4dd94  madd x9,x16,x10,x9
7102b4dd98  ldr w10,[x14, #0x1c]
7102b4dd9c  ldr w16,[x11, #0x18]
7102b4dda0  ldr w17,[x9, #0x20]
7102b4dda4  ldr w11,[x11, #0x24]
7102b4dda8  ldr w18,[x9, #0x2c]
7102b4ddac  sxtb w9,w12
7102b4ddb0  ldr w14,[x14, #0x28]
7102b4ddb4  str w15,[x22, #0x254]
7102b4ddb8  str w9,[x22, #0x264]
7102b4ddbc  sxtb w9,w13
7102b4ddc0  str w9,[x22, #0x274]
7102b4ddc4  str w11,[x22, #0x260]
7102b4ddc8  cmp w10,#0x0
7102b4ddcc  cinc w9,w10,lt
7102b4ddd0  cmp w8,#0x1
7102b4ddd4  asr w9,w9,#0x1
7102b4ddd8  neg w11,w9
7102b4dddc  sub w10,w10,w9
7102b4dde0  str w9,[x22, #0x278]
7102b4dde4  str w10,[x22, #0x26c]
7102b4dde8  add w10,w17,w9
7102b4ddec  sub w9,w11,w16
7102b4ddf0  str w14,[x22, #0x270]
7102b4ddf4  str w11,[x22, #0x25c]
7102b4ddf8  str w11,[x22, #0x268]
7102b4ddfc  str w10,[x22, #0x27c]
7102b4de00  str w9,[x22, #0x258]
7102b4de04  str w18,[x22, #0x280]
7102b4de08  str wzr,[x22, #0x250]
7102b4de0c  b.eq 0x7102b4de34
7102b4de10  sub w8,w10,w9
7102b4de14  cmp w8,#0x0
7102b4de18  cinc w8,w8,lt
7102b4de1c  add w8,w9,w8, ASR #0x1
7102b4de20  neg w8,w8
7102b4de24  ldr s1,[x22, #0x138]
7102b4de28  scvtf s0,w8
7102b4de2c  fmul s0,s1,s0
7102b4de30  str s0,[x22, #0x250]
7102b4de34  ldr x8,[sp, #0x70]
7102b4de38  ldrb w8,[x8, #0x18]
7102b4de3c  str xzr,[x25, #0x90]
7102b4de40  stp xzr,xzr,[x25, #0x98]
7102b4de44  str w8,[sp, #0x90]
7102b4de48  ldp x21,x19,[x22, #0x168]
7102b4de4c  orr x9,xzr,#-0x5555555555555556
7102b4de50  movk x9,#0xaaab
7102b4de54  subs x24,x19,x21
7102b4de58  b.eq 0x7102b4df24
7102b4de5c  asr x8,x24,#0x4
7102b4de60  mul x20,x8,x9
7102b4de64  orr x8,xzr,#0x5555555555555555
7102b4de68  movk x8,#0x5556
7102b4de6c  movk x8,#0x555, LSL #48
7102b4de70  cmp x20,x8
7102b4de74  b.cs 0x7102b5243c
7102b4de78  mov w0,#0x10
7102b4de7c  mov x1,x24
7102b4de80  bl 0x710392e290
7102b4de84  mov x23,x0
7102b4de88  cbnz x0,0x7102b4ded0
7102b4de8c  adrp x8,0x7105332000
7102b4de90  ldr x0,[x8, #0xf00]
7102b4de94  cbz x0,0x7102b4decc
7102b4de98  str wzr,[sp, #0xd0]
7102b4de9c  str x24,[x25, #0x18]
7102b4dea0  ldr x8,[x0]
7102b4dea4  ldr x8,[x8, #0x30]
7102b4dea8  add x1,sp,#0xd0
7102b4deac  add x2,sp,#0x160
7102b4deb0  blr x8
7102b4deb4  tbz w0,#0x0,0x7102b4decc
7102b4deb8  mov w0,#0x10
7102b4debc  mov x1,x24
7102b4dec0  bl 0x710392e290
7102b4dec4  mov x23,x0
7102b4dec8  cbnz x0,0x7102b4ded0
7102b4decc  mov x23,xzr
7102b4ded0  sub x8,x29,#0xb8
7102b4ded4  add x24,x8,#0x8
7102b4ded8  orr w8,wzr,#0x30
7102b4dedc  stp x23,x23,[x25, #0x90]
7102b4dee0  madd x8,x20,x8,x23
7102b4dee4  cmp x21,x19
7102b4dee8  str x8,[x25, #0xa0]
7102b4deec  b.eq 0x7102b4df2c
7102b4def0  mov x0,x23
7102b4def4  mov x1,x21
7102b4def8  bl 0x71039c2730
7102b4defc  ldp x8,x9,[x21, #0x18]
7102b4df00  ldrb w10,[x21, #0x28]
7102b4df04  add x21,x21,#0x30
7102b4df08  cmp x21,x19
7102b4df0c  strb w10,[x23, #0x28]
7102b4df10  stp x8,x9,[x23, #0x18]
7102b4df14  add x23,x23,#0x30
7102b4df18  b.ne 0x7102b4def0
7102b4df1c  str x23,[x25, #0x98]
7102b4df20  b 0x7102b4df2c
7102b4df24  sub x8,x29,#0xb8
7102b4df28  add x24,x8,#0x8
7102b4df2c  ldr w8,[x22, #0x24c]
7102b4df30  mov w9,#0x158
7102b4df34  mov w10,#0x148
7102b4df38  cmp w8,#0x0
7102b4df3c  csel x8,x10,x9,eq
7102b4df40  mov w9,#0x1a0
7102b4df44  mov w10,#0x188
7102b4df48  add x26,x22,x8
7102b4df4c  csel x23,x10,x9,eq
7102b4df50  ldpsw x1,x21,[x26]
7102b4df54  stp w1,w21,[sp, #0xd0]
7102b4df58  str xzr,[sp, #0xd8]
7102b4df5c  stp xzr,xzr,[sp, #0xe0]
7102b4df60  cbz w1,0x7102b4df94
7102b4df64  add x8,sp,#0xd0
7102b4df68  add x0,x8,#0x8
7102b4df6c  bl 0x7102b644d0
7102b4df70  ldp x19,x20,[sp, #0xd8]
7102b4df74  cmp x19,x20
7102b4df78  b.eq 0x7102b4df94
7102b4df7c  mov x0,x19
7102b4df80  mov x1,x21
7102b4df84  bl 0x71013e0e10
7102b4df88  add x19,x19,#0x18
7102b4df8c  cmp x20,x19
7102b4df90  b.ne 0x7102b4df7c
7102b4df94  ldr x8,[x24]
7102b4df98  ldr x9,[x25, #0x90]
7102b4df9c  subs x8,x8,x9
7102b4dfa0  orr x9,xzr,#-0x5555555555555556
7102b4dfa4  movk x9,#0xaaab
7102b4dfa8  stp xzr,xzr,[x25, #0x8]
7102b4dfac  str xzr,[sp, #0x148]
7102b4dfb0  b.eq 0x7102b4e024
7102b4dfb4  asr x8,x8,#0x4
7102b4dfb8  mul x19,x8,x9
7102b4dfbc  lsr x8,x19,#0x3e
7102b4dfc0  cbnz x8,0x7102b52408
7102b4dfc4  lsl x21,x19,#0x2
7102b4dfc8  mov w0,#0x10
7102b4dfcc  mov x1,x21
7102b4dfd0  bl 0x710392e290
7102b4dfd4  cbnz x0,0x7102b4e018
7102b4dfd8  adrp x8,0x7105332000
7102b4dfdc  ldr x0,[x8, #0xf00]
7102b4dfe0  cbz x0,0x7102b4e014
7102b4dfe4  str wzr,[sp, #0x130]
7102b4dfe8  str x21,[x25, #0x18]
7102b4dfec  ldr x8,[x0]
7102b4dff0  ldr x8,[x8, #0x30]
7102b4dff4  add x1,sp,#0x130
7102b4dff8  add x2,sp,#0x160
7102b4dffc  blr x8
7102b4e000  tbz w0,#0x0,0x7102b4e014
7102b4e004  mov w0,#0x10
7102b4e008  mov x1,x21
7102b4e00c  bl 0x710392e290
7102b4e010  cbnz x0,0x7102b4e018
7102b4e014  mov x0,xzr
7102b4e018  add x8,x0,x19, LSL #0x2
7102b4e01c  str x0,[sp, #0x148]
7102b4e020  stp x0,x8,[x25, #0x8]
7102b4e024  stp xzr,xzr,[sp, #0x138]
7102b4e028  str xzr,[sp, #0x130]
7102b4e02c  ldrsw x19,[x26]
7102b4e030  cbz w19,0x7102b4e098
7102b4e034  tbnz w19,#0x1f,0x7102b52408
7102b4e038  lsl x21,x19,#0x3
7102b4e03c  mov w0,#0x10
7102b4e040  mov x1,x21
7102b4e044  bl 0x710392e290
7102b4e048  cbnz x0,0x7102b4e08c
7102b4e04c  adrp x8,0x7105332000
7102b4e050  ldr x0,[x8, #0xf00]
7102b4e054  cbz x0,0x7102b4e088
7102b4e058  stur wzr,[x29, #-0xd0]
7102b4e05c  str x21,[x25, #0x18]
7102b4e060  ldr x8,[x0]
7102b4e064  ldr x8,[x8, #0x30]
7102b4e068  sub x1,x29,#0xd0
7102b4e06c  add x2,sp,#0x160
7102b4e070  blr x8
7102b4e074  tbz w0,#0x0,0x7102b4e088
7102b4e078  mov w0,#0x10
7102b4e07c  mov x1,x21
7102b4e080  bl 0x710392e290
7102b4e084  cbnz x0,0x7102b4e08c
7102b4e088  mov x0,xzr
7102b4e08c  add x8,x0,x19, LSL #0x3
7102b4e090  stp x0,x0,[sp, #0x130]
7102b4e094  str x8,[sp, #0x140]
7102b4e098  ldr w8,[x22, #0x24c]
7102b4e09c  cmp w8,#0x0
7102b4e0a0  mov w8,#0x1dc
7102b4e0a4  mov w9,#0x1b8
7102b4e0a8  csel x8,x9,x8,eq
7102b4e0ac  add x1,x22,x8
7102b4e0b0  add x0,sp,#0xd0
7102b4e0b4  bl 0x7102b64990
7102b4e0b8  ldr w8,[x22, #0x24c]
7102b4e0bc  cmp w8,#0x0
7102b4e0c0  mov w8,#0x218
7102b4e0c4  mov w9,#0x200
7102b4e0c8  csel x8,x9,x8,eq
7102b4e0cc  add x10,x22,x8
7102b4e0d0  ldp x8,x9,[x10]
7102b4e0d4  subs x9,x9,x8
7102b4e0d8  b.eq 0x7102b4e228
7102b4e0dc  asr x12,x9,#0x2
7102b4e0e0  mov x9,#0x8e39
7102b4e0e4  movk x9,#0x38e3, LSL #16
7102b4e0e8  movk x9,#0xe38e, LSL #32
7102b4e0ec  movk x9,#0x8e38, LSL #48
7102b4e0f0  mul x12,x12,x9
7102b4e0f4  mov x13,xzr
7102b4e0f8  mov w11,wzr
7102b4e0fc  mov w14,#0x1
7102b4e100  mov w15,#0x24
7102b4e104  madd x13,x13,x15,x8
7102b4e108  ldr w13,[x13, #0x20]
7102b4e10c  add w11,w13,w11
7102b4e110  mov w13,w14
7102b4e114  add w14,w14,#0x1
7102b4e118  cmp x12,x13
7102b4e11c  b.hi 0x7102b4e104
7102b4e120  cbz w11,0x7102b4e228
7102b4e124  ldr w13,[x22, #0x234]
7102b4e128  ldr w12,[x22, #0x230]
7102b4e12c  str w13,[x22, #0x230]
7102b4e130  ldr w13,[x22, #0x238]
7102b4e134  eor w12,w12,w12, LSL #0xb
7102b4e138  eor w12,w12,w12, LSR #0x8
7102b4e13c  str w13,[x22, #0x234]
7102b4e140  ldr w13,[x22, #0x23c]
7102b4e144  eor w12,w12,w13
7102b4e148  str w13,[x22, #0x238]
7102b4e14c  eor w13,w12,w13, LSR #0x13
7102b4e150  str w13,[x22, #0x23c]
7102b4e154  ldr x10,[x10, #0x8]
7102b4e158  subs x14,x10,x8
7102b4e15c  b.eq 0x7102b4e1a4
7102b4e160  udiv w15,w13,w11
7102b4e164  mov x10,xzr
7102b4e168  mov w12,wzr
7102b4e16c  msub w11,w15,w11,w13
7102b4e170  asr x15,x14,#0x2
7102b4e174  mov w14,#0x24
7102b4e178  mul x9,x15,x9
7102b4e17c  mov w13,#0x1
7102b4e180  madd x15,x10,x14,x8
7102b4e184  ldr w15,[x15, #0x20]
7102b4e188  add w12,w15,w12
7102b4e18c  cmp w11,w12
7102b4e190  b.cc 0x7102b4e218
7102b4e194  mov w10,w13
7102b4e198  add w13,w13,#0x1
7102b4e19c  cmp x9,x10
7102b4e1a0  b.hi 0x7102b4e180
7102b4e1a4  mov x1,xzr
7102b4e1a8  b 0x7102b4e220
7102b4e1ac  ldr x23,[x21]
7102b4e1b0  and x8,x8,#-0x10000000000
7102b4e1b4  orr x19,x8,x19
7102b4e1b8  mov x0,x23
7102b4e1bc  bl 0x71039c1a40
7102b4e1c0  mov x0,x21
7102b4e1c4  mov x1,x19
7102b4e1c8  bl 0x71035404b0
7102b4e1cc  mov x19,x0
7102b4e1d0  mov x0,x23
7102b4e1d4  bl 0x71039c1a50
7102b4e1d8  cmp x19,#0x0
7102b4e1dc  csel w19,w25,w24,eq
7102b4e1e0  cmp w19,w25
7102b4e1e4  b.eq 0x7102b4da90
7102b4e1e8  ldr x8,[x21, #0x8]
7102b4e1ec  add x8,x8,w19, UXTW  #0x3
7102b4e1f0  ldrb w8,[x8, #0x4]
7102b4e1f4  cbz w8,0x7102b4da90
7102b4e1f8  mov x0,x22
7102b4e1fc  mov w1,w19
7102b4e200  bl 0x7103720ec0
7102b4e204  adrp x8,0x7105332000
7102b4e208  ldr x0,[x8, #0xf20]
7102b4e20c  mov w1,w19
7102b4e210  bl 0x7103540b10
7102b4e214  b 0x7102b4da9c
7102b4e218  mov w9,#0x24
7102b4e21c  madd x1,x10,x9,x8
7102b4e220  add x0,sp,#0xd0
7102b4e224  bl 0x7102b64990
7102b4e228  ldr w8,[x26]
7102b4e22c  ldr w9,[x22, #0x260]
7102b4e230  cmp w8,#0x0
7102b4e234  cinc w8,w8,lt
7102b4e238  cmp w9,#0x1
7102b4e23c  asr w8,w8,#0x1
7102b4e240  sub w8,w8,#0x2
7102b4e244  b.lt 0x7102b4e2f0
7102b4e248  ldr w11,[x22, #0x258]
7102b4e24c  ldr w10,[x22, #0x25c]
7102b4e250  mov w12,#0x4
7102b4e254  sub w12,w12,w11
7102b4e258  add w12,w12,w10
7102b4e25c  cmp w12,#0x1
7102b4e260  b.lt 0x7102b4e2f0
7102b4e264  ldr s0,[x22, #0x250]
7102b4e268  ldr s1,[x22, #0x138]
7102b4e26c  fdiv s0,s0,s1
7102b4e270  fcvtzs w13,s0
7102b4e274  add w11,w8,w11
7102b4e278  add w11,w11,w13
7102b4e27c  mov x10,xzr
7102b4e280  sxtw x11,w11
7102b4e284  mov w12,w12
7102b4e288  orr w13,wzr,#0x18
7102b4e28c  mov w14,#0x1
7102b4e290  adds x15,x10,x11
7102b4e294  b.mi 0x7102b4e2e4
7102b4e298  mov x16,xzr
7102b4e29c  ldrsw x17,[sp, #0xd0]
7102b4e2a0  cmp x15,x17
7102b4e2a4  b.ge 0x7102b4e2d8
7102b4e2a8  ldrsw x17,[sp, #0xd4]
7102b4e2ac  cmp x16,x17
7102b4e2b0  b.ge 0x7102b4e2d8
7102b4e2b4  mul x18,x15,x13
7102b4e2b8  ldr x17,[sp, #0xd8]
7102b4e2bc  lsl x0,x14,x16
7102b4e2c0  ldr x17,[x17, x18, LSL #0x0]
7102b4e2c4  lsr x18,x16,#0x3
7102b4e2c8  and x18,x18,#0x1ffffffffffffff8
7102b4e2cc  ldr x1,[x17, x18, LSL #0x0]
7102b4e2d0  orr x0,x1,x0
7102b4e2d4  str x0,[x17, x18, LSL #0x0]
7102b4e2d8  add x16,x16,#0x1
7102b4e2dc  cmp x9,x16
7102b4e2e0  b.ne 0x7102b4e29c
7102b4e2e4  add x10,x10,#0x1
7102b4e2e8  cmp x10,x12
7102b4e2ec  b.ne 0x7102b4e290
7102b4e2f0  ldr w9,[x22, #0x270]
7102b4e2f4  cmp w9,#0x1
7102b4e2f8  b.lt 0x7102b4e3a4
7102b4e2fc  ldr w11,[x22, #0x268]
7102b4e300  ldr w10,[x22, #0x26c]
7102b4e304  mov w12,#0x4
7102b4e308  sub w12,w12,w11
7102b4e30c  add w12,w12,w10
7102b4e310  cmp w12,#0x1
7102b4e314  b.lt 0x7102b4e3a4
7102b4e318  ldr s0,[x22, #0x250]
7102b4e31c  ldr s1,[x22, #0x138]
7102b4e320  fdiv s0,s0,s1
7102b4e324  fcvtzs w13,s0
7102b4e328  add w11,w8,w11
7102b4e32c  add w11,w11,w13
7102b4e330  mov x10,xzr
7102b4e334  sxtw x11,w11
7102b4e338  mov w12,w12
7102b4e33c  orr w13,wzr,#0x18
7102b4e340  mov w14,#0x1
7102b4e344  adds x15,x10,x11
7102b4e348  b.mi 0x7102b4e398
7102b4e34c  mov x16,xzr
7102b4e350  ldrsw x17,[sp, #0xd0]
7102b4e354  cmp x15,x17
7102b4e358  b.ge 0x7102b4e38c
7102b4e35c  ldrsw x17,[sp, #0xd4]
7102b4e360  cmp x16,x17
7102b4e364  b.ge 0x7102b4e38c
7102b4e368  mul x18,x15,x13
7102b4e36c  ldr x17,[sp, #0xd8]
7102b4e370  lsl x0,x14,x16
7102b4e374  ldr x17,[x17, x18, LSL #0x0]
7102b4e378  lsr x18,x16,#0x3
7102b4e37c  and x18,x18,#0x1ffffffffffffff8
7102b4e380  ldr x1,[x17, x18, LSL #0x0]
7102b4e384  orr x0,x1,x0
7102b4e388  str x0,[x17, x18, LSL #0x0]
7102b4e38c  add x16,x16,#0x1
7102b4e390  cmp x9,x16
7102b4e394  b.ne 0x7102b4e350
7102b4e398  add x10,x10,#0x1
7102b4e39c  cmp x10,x12
7102b4e3a0  b.ne 0x7102b4e344
7102b4e3a4  add x9,x22,x23
7102b4e3a8  str x9,[sp, #0xa0]
7102b4e3ac  ldr w9,[x22, #0x280]
7102b4e3b0  cmp w9,#0x1
7102b4e3b4  b.lt 0x7102b4e460
7102b4e3b8  ldr w11,[x22, #0x278]
7102b4e3bc  ldr w10,[x22, #0x27c]
7102b4e3c0  mov w12,#0x4
7102b4e3c4  sub w12,w12,w11
7102b4e3c8  add w12,w12,w10
7102b4e3cc  cmp w12,#0x1
7102b4e3d0  b.lt 0x7102b4e460
7102b4e3d4  ldr s0,[x22, #0x250]
7102b4e3d8  ldr s1,[x22, #0x138]
7102b4e3dc  fdiv s0,s0,s1
7102b4e3e0  fcvtzs w13,s0
7102b4e3e4  add w8,w8,w11
7102b4e3e8  mov w11,w12
7102b4e3ec  orr w12,wzr,#0x18
7102b4e3f0  add w8,w8,w13
7102b4e3f4  mov x10,xzr
7102b4e3f8  sxtw x8,w8
7102b4e3fc  mov w13,#0x1
7102b4e400  adds x14,x10,x8
7102b4e404  b.mi 0x7102b4e454
7102b4e408  mov x15,xzr
7102b4e40c  ldrsw x16,[sp, #0xd0]
7102b4e410  cmp x14,x16
7102b4e414  b.ge 0x7102b4e448
7102b4e418  ldrsw x16,[sp, #0xd4]
7102b4e41c  cmp x15,x16
7102b4e420  b.ge 0x7102b4e448
7102b4e424  mul x17,x14,x12
7102b4e428  ldr x16,[sp, #0xd8]
7102b4e42c  lsl x18,x13,x15
7102b4e430  ldr x16,[x16, x17, LSL #0x0]
7102b4e434  lsr x17,x15,#0x3
7102b4e438  and x17,x17,#0x1ffffffffffffff8
7102b4e43c  ldr x0,[x16, x17, LSL #0x0]
7102b4e440  orr x18,x0,x18
7102b4e444  str x18,[x16, x17, LSL #0x0]
7102b4e448  add x15,x15,#0x1
7102b4e44c  cmp x9,x15
7102b4e450  b.ne 0x7102b4e40c
7102b4e454  add x10,x10,#0x1
7102b4e458  cmp x10,x11
7102b4e45c  b.ne 0x7102b4e400
7102b4e460  ldr w8,[x22, #0x24c]
7102b4e464  add x9,x22,#0x288
7102b4e468  str x9,[sp, #0x68]
7102b4e46c  orr w9,wzr,#0xf0
7102b4e470  mov w10,#0xd8
7102b4e474  ldrsw x11,[x22, #0x254]
7102b4e478  ldrsw x12,[x22, #0x274]
7102b4e47c  mov w13,#0x34
7102b4e480  add x14,sp,#0x160
7102b4e484  add x15,x14,#0x44
7102b4e488  orr w23,wzr,#0x18
7102b4e48c  mov w27,#0x1
7102b4e490  cmp w8,#0x0
7102b4e494  csel x9,x10,x9,eq
7102b4e498  ldrsw x10,[x22, #0x264]
7102b4e49c  ldr x9,[x22, x9, LSL #0x0]
7102b4e4a0  madd x10,x10,x13,x9
7102b4e4a4  madd x11,x11,x13,x9
7102b4e4a8  madd x9,x12,x13,x9
7102b4e4ac  orr x12,x14,#0x4
7102b4e4b0  stp x12,x15,[sp, #0x78]
7102b4e4b4  ldrb w11,[x11, #0x4]
7102b4e4b8  ldrb w10,[x10, #0x5]
7102b4e4bc  ldrb w9,[x9, #0x6]
7102b4e4c0  orr w10,w11,w10
7102b4e4c4  mov w4,wzr
7102b4e4c8  orr w28,wzr,#0x30
7102b4e4cc  str x24,[sp, #0x98]
7102b4e4d0  orr w3,w10,w9
7102b4e4d4  str x26,[sp, #0x88]
7102b4e4d8  str w3,[sp, #0xb0]
7102b4e4dc  cmp w8,#0x1
7102b4e4e0  b.ne 0x7102b4e590
7102b4e4e4  ldrsw x8,[sp, #0xd0]
7102b4e4e8  cmp w8,#0x1
7102b4e4ec  b.lt 0x7102b4e560
7102b4e4f0  ldrsw x10,[sp, #0xd4]
7102b4e4f4  ldr x11,[sp, #0xd8]
7102b4e4f8  mov w13,#0xffffffff
7102b4e4fc  mov x9,xzr
7102b4e500  sub x12,x10,#0x1
7102b4e504  mov w14,w13
7102b4e508  madd x16,x9,x23,x11
7102b4e50c  sxtw x15,w14
7102b4e510  mov x17,x12
7102b4e514  mov w13,w10
7102b4e518  cmp x17,x15
7102b4e51c  b.le 0x7102b4e548
7102b4e520  ldr x18,[x16]
7102b4e524  lsr x0,x17,#0x3
7102b4e528  and x0,x0,#0x1ffffffffffffff8
7102b4e52c  ldr x18,[x18, x0, LSL #0x0]
7102b4e530  lsl x1,x27,x17
7102b4e534  sub x17,x17,#0x1
7102b4e538  and x18,x18,x1
7102b4e53c  sub w13,w13,#0x1
7102b4e540  cbz x18,0x7102b4e518
7102b4e544  b 0x7102b4e54c
7102b4e548  mov w13,w14
7102b4e54c  add x9,x9,#0x1
7102b4e550  cmp x9,x8
7102b4e554  mov w14,w13
7102b4e558  b.ne 0x7102b4e508
7102b4e55c  b 0x7102b4e564
7102b4e560  mov w13,#0xffffffff
7102b4e564  ldr w9,[x22, #0x13c]
7102b4e568  add w8,w13,#0x1
7102b4e56c  cmp w8,w9
7102b4e570  b.lt 0x7102b4e608
7102b4e574  b 0x7102b4e590
7102b4e578  ldr w8,[x22, #0x24c]
7102b4e57c  ldr x24,[sp, #0x98]
7102b4e580  add w4,w4,#0x1
7102b4e584  add x25,sp,#0x148
7102b4e588  cmp w8,#0x1
7102b4e58c  b.eq 0x7102b4e4e4
7102b4e590  ldr x10,[sp, #0xa0]
7102b4e594  ldp x9,x10,[x10]
7102b4e598  sub x10,x10,x9
7102b4e59c  mov w8,w4
7102b4e5a0  asr x10,x10,#0x2
7102b4e5a4  cmp x10,x8
7102b4e5a8  b.ls 0x7102b4e5b4
7102b4e5ac  ldr w8,[x9, x8, LSL #0x2]
7102b4e5b0  b 0x7102b4e5b8
7102b4e5b4  mov w8,wzr
7102b4e5b8  ldr w10,[x22, #0x234]
7102b4e5bc  ldr w9,[x22, #0x230]
7102b4e5c0  str w10,[x22, #0x230]
7102b4e5c4  ldr w10,[x22, #0x238]
7102b4e5c8  eor w9,w9,w9, LSL #0xb
7102b4e5cc  eor w9,w9,w9, LSR #0x8
7102b4e5d0  str w10,[x22, #0x234]
7102b4e5d4  ldr w10,[x22, #0x23c]
7102b4e5d8  eor w9,w9,w10
7102b4e5dc  eor w9,w9,w10, LSR #0x13
7102b4e5e0  str w10,[x22, #0x238]
7102b4e5e4  mov w10,#0x851f
7102b4e5e8  movk w10,#0x51eb, LSL #16
7102b4e5ec  umull x10,w9,w10
7102b4e5f0  lsr x10,x10,#0x25
7102b4e5f4  mov w11,#0x64
7102b4e5f8  str w9,[x22, #0x23c]
7102b4e5fc  msub w9,w10,w11,w9
7102b4e600  cmp w9,w8
7102b4e604  b.cs 0x7102b4f118
7102b4e608  cbz w4,0x7102b4e664
7102b4e60c  ldr w9,[x22, #0x234]
7102b4e610  ldr w8,[x22, #0x230]
7102b4e614  str w9,[x22, #0x230]
7102b4e618  ldr w9,[x22, #0x238]
7102b4e61c  eor w8,w8,w8, LSL #0xb
7102b4e620  eor w8,w8,w8, LSR #0x8
7102b4e624  str w9,[x22, #0x234]
7102b4e628  ldr w9,[x22, #0x23c]
7102b4e62c  eor w8,w8,w9
7102b4e630  eor w8,w8,w9, LSR #0x13
7102b4e634  str w9,[x22, #0x238]
7102b4e638  mov w9,#0x851f
7102b4e63c  movk w9,#0x51eb, LSL #16
7102b4e640  umull x9,w8,w9
7102b4e644  lsr x9,x9,#0x25
7102b4e648  mov w10,#0x64
7102b4e64c  str w8,[x22, #0x23c]
7102b4e650  msub w8,w9,w10,w8
7102b4e654  ldr w9,[x22, #0x180]
7102b4e658  cmp w8,w9
7102b4e65c  cset w19,cc
7102b4e660  b 0x7102b4e668
7102b4e664  mov w19,#0x1
7102b4e668  ldr x8,[sp, #0x148]
7102b4e66c  str x8,[x25, #0x8]
7102b4e670  ldr x8,[x24]
7102b4e674  ldr x21,[x25, #0x90]
7102b4e678  orr x20,xzr,#-0x5555555555555556
7102b4e67c  movk x20,#0xaaab
7102b4e680  cmp x8,x21
7102b4e684  b.eq 0x7102b4eb74
7102b4e688  ldr w8,[sp, #0x90]
7102b4e68c  cbz w8,0x7102b4e8fc
7102b4e690  mov x26,xzr
7102b4e694  b 0x7102b4e7f4
7102b4e698  ldp x9,x8,[x25, #0x8]
7102b4e69c  cmp x9,x8
7102b4e6a0  b.eq 0x7102b4e6b8
7102b4e6a4  str w26,[x9]
7102b4e6a8  ldr x8,[x25, #0x8]
7102b4e6ac  add x8,x8,#0x4
7102b4e6b0  str x8,[x25, #0x8]
7102b4e6b4  b 0x7102b4e8d8
7102b4e6b8  ldr x21,[sp, #0x148]
7102b4e6bc  sub x2,x9,x21
7102b4e6c0  asr x12,x2,#0x2
7102b4e6c4  add x9,x12,#0x1
7102b4e6c8  lsr x10,x9,#0x3e
7102b4e6cc  cbnz x10,0x7102b52424
7102b4e6d0  sub x8,x8,x21
7102b4e6d4  asr x10,x8,#0x2
7102b4e6d8  orr x11,xzr,#0x1ffffffffffffffe
7102b4e6dc  cmp x10,x11
7102b4e6e0  stur w4,[x29, #-0x58]
7102b4e6e4  b.hi 0x7102b4e70c
7102b4e6e8  asr x8,x8,#0x1
7102b4e6ec  cmp x8,x9
7102b4e6f0  csel x9,x9,x8,cc
7102b4e6f4  cbz x9,0x7102b4e7e8
7102b4e6f8  lsr x8,x9,#0x3e
7102b4e6fc  str x12,[sp, #0x60]
7102b4e700  str x2,[sp, #0x48]
7102b4e704  cbz x8,0x7102b4e718
7102b4e708  b 0x7102b52408
7102b4e70c  str x12,[sp, #0x60]
7102b4e710  str x2,[sp, #0x48]
7102b4e714  orr x9,xzr,#0x3fffffffffffffff
7102b4e718  lsl x8,x9,#0x2
7102b4e71c  cmp x8,#0x0
7102b4e720  csinc x20,x8,xzr,ne
7102b4e724  mov w0,#0x10
7102b4e728  mov x1,x20
7102b4e72c  str x9,[sp, #0x50]
7102b4e730  bl 0x710392e290
7102b4e734  mov x25,x0
7102b4e738  cbnz x0,0x7102b4e784
7102b4e73c  adrp x8,0x7105332000
7102b4e740  ldr x0,[x8, #0xf00]
7102b4e744  cbz x0,0x7102b4e780
7102b4e748  add x8,sp,#0x148
7102b4e74c  stur wzr,[x29, #-0xd0]
7102b4e750  sub x1,x29,#0xd0
7102b4e754  str x20,[x8, #0x18]
7102b4e758  ldr x8,[x0]
7102b4e75c  ldr x8,[x8, #0x30]
7102b4e760  add x2,sp,#0x160
7102b4e764  blr x8
7102b4e768  tbz w0,#0x0,0x7102b4e780
7102b4e76c  mov w0,#0x10
7102b4e770  mov x1,x20
7102b4e774  bl 0x710392e290
7102b4e778  mov x25,x0
7102b4e77c  cbnz x0,0x7102b4e784
7102b4e780  mov x25,xzr
7102b4e784  ldp x2,x8,[sp, #0x48]
7102b4e788  ldr x12,[sp, #0x60]
7102b4e78c  add x20,x25,x12, LSL #0x2
7102b4e790  add x24,x25,x8, LSL #0x2
7102b4e794  cmp x2,#0x1
7102b4e798  str w26,[x20], #0x4
7102b4e79c  b.lt 0x7102b4e7ac
7102b4e7a0  mov x0,x25
7102b4e7a4  mov x1,x21
7102b4e7a8  bl 0x71039c00e0
7102b4e7ac  str x25,[sp, #0x148]
7102b4e7b0  add x25,sp,#0x148
7102b4e7b4  ldur w4,[x29, #-0x58]
7102b4e7b8  stp x20,x24,[x25, #0x8]
7102b4e7bc  ldr x24,[sp, #0x98]
7102b4e7c0  ldr w3,[sp, #0xb0]
7102b4e7c4  orr x20,xzr,#-0x5555555555555556
7102b4e7c8  movk x20,#0xaaab
7102b4e7cc  cbz x21,0x7102b4e8d8
7102b4e7d0  mov x0,x21
7102b4e7d4  mov w21,w4
7102b4e7d8  bl 0x710392eb40
7102b4e7dc  ldr w3,[sp, #0xb0]
7102b4e7e0  mov w4,w21
7102b4e7e4  b 0x7102b4e8d8
7102b4e7e8  mov x8,xzr
7102b4e7ec  mov x25,xzr
7102b4e7f0  b 0x7102b4e78c
7102b4e7f4  madd x8,x26,x28,x21
7102b4e7f8  ldrb w8,[x8, #0x18]
7102b4e7fc  cbz w19,0x7102b4e8d4
7102b4e800  cbz w8,0x7102b4e8d8
7102b4e804  tst w3,#0xff
7102b4e808  b.eq 0x7102b4e818
7102b4e80c  madd x8,x26,x28,x21
7102b4e810  ldrb w8,[x8, #0x19]
7102b4e814  cbnz w8,0x7102b4e8d8
7102b4e818  madd x9,x26,x28,x21
7102b4e81c  ldp w8,w9,[x9, #0x1c]
7102b4e820  sxtw x8,w8
7102b4e824  cmp w8,#0x1
7102b4e828  ccmp w9,#0x1,#0x8,ge
7102b4e82c  b.lt 0x7102b4e8d8
7102b4e830  ldr w10,[sp, #0xd0]
7102b4e834  cmp w10,w8
7102b4e838  b.lt 0x7102b4e8d8
7102b4e83c  ldr w11,[sp, #0xd4]
7102b4e840  sxtw x9,w9
7102b4e844  cmp w11,w9
7102b4e848  b.lt 0x7102b4e8d8
7102b4e84c  subs w12,w10,w8
7102b4e850  b.mi 0x7102b4e8d8
7102b4e854  ldr x13,[sp, #0xd8]
7102b4e858  sub w11,w11,w9
7102b4e85c  mov x10,xzr
7102b4e860  sxtw x11,w11
7102b4e864  sxtw x12,w12
7102b4e868  mov x14,xzr
7102b4e86c  mov x15,xzr
7102b4e870  add x17,x15,x10
7102b4e874  mul x17,x17,x23
7102b4e878  mov x16,xzr
7102b4e87c  ldr x17,[x13, x17, LSL #0x0]
7102b4e880  add x18,x14,x16
7102b4e884  lsr x0,x18,#0x3
7102b4e888  lsl x18,x27,x18
7102b4e88c  and x0,x0,#0x1ffffffffffffff8
7102b4e890  ldr x0,[x17, x0, LSL #0x0]
7102b4e894  tst x18,x0
7102b4e898  b.ne 0x7102b4e8b8
7102b4e89c  add x16,x16,#0x1
7102b4e8a0  cmp x16,x9
7102b4e8a4  b.lt 0x7102b4e880
7102b4e8a8  add x15,x15,#0x1
7102b4e8ac  cmp x15,x8
7102b4e8b0  b.lt 0x7102b4e870
7102b4e8b4  b 0x7102b4e698
7102b4e8b8  cmp x14,x11
7102b4e8bc  add x14,x14,#0x1
7102b4e8c0  b.lt 0x7102b4e86c
7102b4e8c4  cmp x10,x12
7102b4e8c8  add x10,x10,#0x1
7102b4e8cc  b.lt 0x7102b4e868
7102b4e8d0  b 0x7102b4e8d8
7102b4e8d4  cbz w8,0x7102b4e804
7102b4e8d8  ldr x8,[x24]
7102b4e8dc  ldr x21,[x25, #0x90]
7102b4e8e0  sub x8,x8,x21
7102b4e8e4  asr x8,x8,#0x4
7102b4e8e8  mul x8,x8,x20
7102b4e8ec  add x26,x26,#0x1
7102b4e8f0  cmp x8,x26
7102b4e8f4  b.hi 0x7102b4e7f4
7102b4e8f8  b 0x7102b4eb74
7102b4e8fc  mov x26,xzr
7102b4e900  b 0x7102b4eb48
7102b4e904  madd x8,x26,x28,x21
7102b4e908  ldrb w8,[x8, #0x18]
7102b4e90c  tbz w19,#0x0,0x7102b4e9e4
7102b4e910  cbz w8,0x7102b4eb54
7102b4e914  tst w3,#0xff
7102b4e918  b.eq 0x7102b4e928
7102b4e91c  madd x8,x26,x28,x21
7102b4e920  ldrb w8,[x8, #0x19]
7102b4e924  cbnz w8,0x7102b4eb54
7102b4e928  madd x9,x26,x28,x21
7102b4e92c  ldp w8,w9,[x9, #0x1c]
7102b4e930  sxtw x8,w8
7102b4e934  cmp w8,#0x1
7102b4e938  ccmp w9,#0x1,#0x8,ge
7102b4e93c  b.lt 0x7102b4eb54
7102b4e940  ldr w10,[sp, #0xd0]
7102b4e944  cmp w10,w8
7102b4e948  b.lt 0x7102b4eb54
7102b4e94c  ldr w11,[sp, #0xd4]
7102b4e950  sxtw x9,w9
7102b4e954  cmp w11,w9
7102b4e958  b.lt 0x7102b4eb54
7102b4e95c  subs w12,w10,w8
7102b4e960  b.mi 0x7102b4eb54
7102b4e964  ldr x13,[sp, #0xd8]
7102b4e968  sub w11,w11,w9
7102b4e96c  mov x10,xzr
7102b4e970  sxtw x11,w11
7102b4e974  sxtw x12,w12
7102b4e978  mov x14,xzr
7102b4e97c  mov x15,xzr
7102b4e980  add x17,x15,x10
7102b4e984  mul x17,x17,x23
7102b4e988  mov x16,xzr
7102b4e98c  ldr x17,[x13, x17, LSL #0x0]
7102b4e990  add x18,x14,x16
7102b4e994  lsr x0,x18,#0x3
7102b4e998  lsl x18,x27,x18
7102b4e99c  and x0,x0,#0x1ffffffffffffff8
7102b4e9a0  ldr x0,[x17, x0, LSL #0x0]
7102b4e9a4  tst x18,x0
7102b4e9a8  b.ne 0x7102b4e9c8
7102b4e9ac  add x16,x16,#0x1
7102b4e9b0  cmp x16,x9
7102b4e9b4  b.lt 0x7102b4e990
7102b4e9b8  add x15,x15,#0x1
7102b4e9bc  cmp x15,x8
7102b4e9c0  b.lt 0x7102b4e980
7102b4e9c4  b 0x7102b4e9ec
7102b4e9c8  cmp x14,x11
7102b4e9cc  add x14,x14,#0x1
7102b4e9d0  b.lt 0x7102b4e97c
7102b4e9d4  cmp x10,x12
7102b4e9d8  add x10,x10,#0x1
7102b4e9dc  b.lt 0x7102b4e978
7102b4e9e0  b 0x7102b4eb54
7102b4e9e4  cbnz w8,0x7102b4eb54
7102b4e9e8  b 0x7102b4e914
7102b4e9ec  ldp x9,x8,[x25, #0x8]
7102b4e9f0  cmp x9,x8
7102b4e9f4  b.eq 0x7102b4ea0c
7102b4e9f8  str w26,[x9]
7102b4e9fc  ldr x8,[x25, #0x8]
7102b4ea00  add x8,x8,#0x4
7102b4ea04  str x8,[x25, #0x8]
7102b4ea08  b 0x7102b4eb54
7102b4ea0c  ldr x21,[sp, #0x148]
7102b4ea10  sub x2,x9,x21
7102b4ea14  asr x12,x2,#0x2
7102b4ea18  add x9,x12,#0x1
7102b4ea1c  lsr x10,x9,#0x3e
7102b4ea20  cbnz x10,0x7102b52424
7102b4ea24  sub x8,x8,x21
7102b4ea28  asr x10,x8,#0x2
7102b4ea2c  orr x11,xzr,#0x1ffffffffffffffe
7102b4ea30  cmp x10,x11
7102b4ea34  stur w4,[x29, #-0x58]
7102b4ea38  b.hi 0x7102b4ea60
7102b4ea3c  asr x8,x8,#0x1
7102b4ea40  cmp x8,x9
7102b4ea44  csel x9,x9,x8,cc
7102b4ea48  cbz x9,0x7102b4eb3c
7102b4ea4c  lsr x8,x9,#0x3e
7102b4ea50  str x12,[sp, #0x60]
7102b4ea54  str x2,[sp, #0x50]
7102b4ea58  cbz x8,0x7102b4ea6c
7102b4ea5c  b 0x7102b52408
7102b4ea60  str x12,[sp, #0x60]
7102b4ea64  str x2,[sp, #0x50]
7102b4ea68  orr x9,xzr,#0x3fffffffffffffff
7102b4ea6c  lsl x8,x9,#0x2
7102b4ea70  cmp x8,#0x0
7102b4ea74  csinc x20,x8,xzr,ne
7102b4ea78  mov w0,#0x10
7102b4ea7c  mov x1,x20
7102b4ea80  str x9,[sp, #0x48]
7102b4ea84  bl 0x710392e290
7102b4ea88  mov x25,x0
7102b4ea8c  cbnz x0,0x7102b4ead8
7102b4ea90  adrp x8,0x7105332000
7102b4ea94  ldr x0,[x8, #0xf00]
7102b4ea98  cbz x0,0x7102b4ead4
7102b4ea9c  add x8,sp,#0x148
7102b4eaa0  stur wzr,[x29, #-0xd0]
7102b4eaa4  sub x1,x29,#0xd0
7102b4eaa8  str x20,[x8, #0x18]
7102b4eaac  ldr x8,[x0]
7102b4eab0  ldr x8,[x8, #0x30]
7102b4eab4  add x2,sp,#0x160
7102b4eab8  blr x8
7102b4eabc  tbz w0,#0x0,0x7102b4ead4
7102b4eac0  mov w0,#0x10
7102b4eac4  mov x1,x20
7102b4eac8  bl 0x710392e290
7102b4eacc  mov x25,x0
7102b4ead0  cbnz x0,0x7102b4ead8
7102b4ead4  mov x25,xzr
7102b4ead8  ldp x8,x2,[sp, #0x48]
7102b4eadc  ldr x12,[sp, #0x60]
7102b4eae0  add x20,x25,x12, LSL #0x2
7102b4eae4  add x24,x25,x8, LSL #0x2
7102b4eae8  cmp x2,#0x1
7102b4eaec  str w26,[x20], #0x4
7102b4eaf0  b.lt 0x7102b4eb00
7102b4eaf4  mov x0,x25
7102b4eaf8  mov x1,x21
7102b4eafc  bl 0x71039c00e0
7102b4eb00  str x25,[sp, #0x148]
7102b4eb04  add x25,sp,#0x148
7102b4eb08  ldur w4,[x29, #-0x58]
7102b4eb0c  stp x20,x24,[x25, #0x8]
7102b4eb10  ldr x24,[sp, #0x98]
7102b4eb14  ldr w3,[sp, #0xb0]
7102b4eb18  orr x20,xzr,#-0x5555555555555556
7102b4eb1c  movk x20,#0xaaab
7102b4eb20  cbz x21,0x7102b4eb54
7102b4eb24  mov x0,x21
7102b4eb28  mov w21,w4
7102b4eb2c  bl 0x710392eb40
7102b4eb30  ldr w3,[sp, #0xb0]
7102b4eb34  mov w4,w21
7102b4eb38  b 0x7102b4eb54
7102b4eb3c  mov x8,xzr
7102b4eb40  mov x25,xzr
7102b4eb44  b 0x7102b4eae0
7102b4eb48  madd x8,x26,x28,x21
7102b4eb4c  ldrb w8,[x8, #0x28]
7102b4eb50  cbz w8,0x7102b4e904
7102b4eb54  ldr x8,[x24]
7102b4eb58  ldr x21,[x25, #0x90]
7102b4eb5c  sub x8,x8,x21
7102b4eb60  asr x8,x8,#0x4
7102b4eb64  mul x8,x8,x20
7102b4eb68  add x26,x26,#0x1
7102b4eb6c  cmp x8,x26
7102b4eb70  b.hi 0x7102b4eb48
7102b4eb74  ldr x8,[sp, #0x148]
7102b4eb78  ldr x9,[x25, #0x8]
7102b4eb7c  cmp x8,x9
7102b4eb80  b.eq 0x7102b4f118
7102b4eb84  subs x9,x9,x8
7102b4eb88  b.eq 0x7102b4f118
7102b4eb8c  mov x10,xzr
7102b4eb90  mov w11,wzr
7102b4eb94  asr x9,x9,#0x2
7102b4eb98  ldrsw x12,[x8, x10, LSL #0x2]
7102b4eb9c  add x10,x10,#0x1
7102b4eba0  cmp x9,x10
7102b4eba4  madd x12,x12,x28,x21
7102b4eba8  ldr w12,[x12, #0x24]
7102b4ebac  add w11,w12,w11
7102b4ebb0  b.hi 0x7102b4eb98
7102b4ebb4  cbz w11,0x7102b4f118
7102b4ebb8  ldr w14,[x22, #0x234]
7102b4ebbc  ldr w13,[x22, #0x230]
7102b4ebc0  str w14,[x22, #0x230]
7102b4ebc4  ldr w14,[x22, #0x238]
7102b4ebc8  eor w13,w13,w13, LSL #0xb
7102b4ebcc  eor w13,w13,w13, LSR #0x8
7102b4ebd0  str w14,[x22, #0x234]
7102b4ebd4  ldr w14,[x22, #0x23c]
7102b4ebd8  eor w13,w13,w14
7102b4ebdc  eor w13,w13,w14, LSR #0x13
7102b4ebe0  str w14,[x22, #0x238]
7102b4ebe4  udiv w14,w13,w11
7102b4ebe8  mov x10,xzr
7102b4ebec  mov w12,wzr
7102b4ebf0  str w13,[x22, #0x23c]
7102b4ebf4  msub w11,w14,w11,w13
7102b4ebf8  ldrsw x19,[x8, x10, LSL #0x2]
7102b4ebfc  madd x13,x19,x28,x21
7102b4ec00  ldr w13,[x13, #0x24]
7102b4ec04  add w12,w13,w12
7102b4ec08  cmp w11,w12
7102b4ec0c  b.cc 0x7102b4ec20
7102b4ec10  add x10,x10,#0x1
7102b4ec14  cmp x9,x10
7102b4ec18  b.hi 0x7102b4ebf8
7102b4ec1c  b 0x7102b4f118
7102b4ec20  madd x20,x19,x28,x21
7102b4ec24  cbz x20,0x7102b4f118
7102b4ec28  ldr x8,[sp, #0x130]
7102b4ec2c  madd x26,x19,x28,x21
7102b4ec30  stur w4,[x29, #-0x58]
7102b4ec34  str x8,[sp, #0x138]
7102b4ec38  ldr w2,[x26, #0x1c]!
7102b4ec3c  mov x25,x26
7102b4ec40  ldr w3,[x25, #0x4]!
7102b4ec44  add x0,sp,#0xd0
7102b4ec48  add x1,sp,#0x130
7102b4ec4c  bl 0x7102b64710
7102b4ec50  ldp x0,x8,[sp, #0x130]
7102b4ec54  cmp x0,x8
7102b4ec58  b.eq 0x7102b52338
7102b4ec5c  ldr w10,[x22, #0x234]
7102b4ec60  ldr w9,[x22, #0x230]
7102b4ec64  str w10,[x22, #0x230]
7102b4ec68  ldr w10,[x22, #0x238]
7102b4ec6c  eor w9,w9,w9, LSL #0xb
7102b4ec70  eor w9,w9,w9, LSR #0x8
7102b4ec74  str w10,[x22, #0x234]
7102b4ec78  ldr w10,[x22, #0x23c]
7102b4ec7c  eor w9,w9,w10
7102b4ec80  sub x8,x8,x0
7102b4ec84  lsr x8,x8,#0x3
7102b4ec88  str w10,[x22, #0x238]
7102b4ec8c  ldr s2,[x22, #0x138]
7102b4ec90  eor w9,w9,w10, LSR #0x13
7102b4ec94  udiv w10,w9,w8
7102b4ec98  str w9,[x22, #0x23c]
7102b4ec9c  msub w8,w10,w8,w9
7102b4eca0  add x8,x0,w8, UXTW  #0x3
7102b4eca4  ldpsw x24,x18,[x8]
7102b4eca8  ldr x8,[sp, #0x88]
7102b4ecac  ldp s1,s3,[x8, #0x8]
7102b4ecb0  ldrb w8,[x20]
7102b4ecb4  scvtf s0,w24
7102b4ecb8  fmul s0,s2,s0
7102b4ecbc  fadd s1,s0,s1
7102b4ecc0  scvtf s0,w18
7102b4ecc4  fmul s5,s2,s0
7102b4ecc8  fadd s0,s5,s3
7102b4eccc  tbnz w8,#0x0,0x7102b4ecf8
7102b4ecd0  ldr w8,[x26]
7102b4ecd4  ldr w9,[x25]
7102b4ecd8  orr x15,xzr,#-0x5555555555555556
7102b4ecdc  ldur w4,[x29, #-0x58]
7102b4ece0  add x11,x20,#0x1
7102b4ece4  str wzr,[sp, #0x160]
7102b4ece8  ldr w3,[sp, #0xb0]
7102b4ecec  movk x15,#0xaaab
7102b4ecf0  add x16,sp,#0x160
7102b4ecf4  b 0x7102b4ed24
7102b4ecf8  madd x8,x19,x28,x21
7102b4ecfc  ldr x11,[x8, #0x10]
7102b4ed00  ldr w8,[x26]
7102b4ed04  ldr w9,[x25]
7102b4ed08  ldur w4,[x29, #-0x58]
7102b4ed0c  ldr w3,[sp, #0xb0]
7102b4ed10  add x16,sp,#0x160
7102b4ed14  str wzr,[sp, #0x160]
7102b4ed18  cbz x11,0x7102b4ed74
7102b4ed1c  orr x15,xzr,#-0x5555555555555556
7102b4ed20  movk x15,#0xaaab
7102b4ed24  mov x10,xzr
7102b4ed28  add x12,x11,x10
7102b4ed2c  ldrb w14,[x12]
7102b4ed30  cbz w14,0x7102b4ed80
7102b4ed34  add x13,x16,x10
7102b4ed38  strb w14,[x13, #0x4]
7102b4ed3c  ldrb w14,[x12, #0x1]
7102b4ed40  cbz w14,0x7102b4ed64
7102b4ed44  strb w14,[x13, #0x5]
7102b4ed48  ldrb w12,[x12, #0x2]
7102b4ed4c  cbz w12,0x7102b4ed6c
7102b4ed50  add x10,x10,#0x3
7102b4ed54  cmp w10,#0x3f
7102b4ed58  strb w12,[x13, #0x6]
7102b4ed5c  b.cc 0x7102b4ed28
7102b4ed60  b 0x7102b4ed80
7102b4ed64  add x10,x10,#0x1
7102b4ed68  b 0x7102b4ed80
7102b4ed6c  add x10,x10,#0x2
7102b4ed70  b 0x7102b4ed80
7102b4ed74  orr x15,xzr,#-0x5555555555555556
7102b4ed78  mov w10,wzr
7102b4ed7c  movk x15,#0xaaab
7102b4ed80  movi v2.2D,#0x0
7102b4ed84  mov v2.S[0x0],v1.S[0x0]
7102b4ed88  mov v2.S[0x1],v0.S[0x0]
7102b4ed8c  add x11,x16,w10, UXTW 
7102b4ed90  strb wzr,[x11, #0x4]
7102b4ed94  str w8,[sp, #0x1a4]
7102b4ed98  add x8,sp,#0x148
7102b4ed9c  str w10,[sp, #0x160]
7102b4eda0  str w9,[sp, #0x1a8]
7102b4eda4  stur q2,[x8, #0x68]
7102b4eda8  ldr x19,[x22, #0x290]
7102b4edac  ldr x9,[x22, #0x298]
7102b4edb0  cmp x19,x9
7102b4edb4  b.cs 0x7102b4edfc
7102b4edb8  ldr x12,[sp, #0x78]
7102b4edbc  mov x8,xzr
7102b4edc0  add x9,x12,x8
7102b4edc4  ldrb w11,[x9]
7102b4edc8  cbz w11,0x7102b4f038
7102b4edcc  add x10,x19,x8
7102b4edd0  strb w11,[x10, #0x4]
7102b4edd4  ldrb w11,[x9, #0x1]
7102b4edd8  cbz w11,0x7102b4f02c
7102b4eddc  strb w11,[x10, #0x5]
7102b4ede0  ldrb w9,[x9, #0x2]
7102b4ede4  cbz w9,0x7102b4f034
7102b4ede8  add x8,x8,#0x3
7102b4edec  cmp w8,#0x3f
7102b4edf0  strb w9,[x10, #0x6]
7102b4edf4  b.cc 0x7102b4edc0
7102b4edf8  b 0x7102b4f038
7102b4edfc  ldr x8,[sp, #0x68]
7102b4ee00  ldr x21,[x8]
7102b4ee04  sub x8,x19,x21
7102b4ee08  asr x8,x8,#0x5
7102b4ee0c  mul x17,x8,x15
7102b4ee10  orr x20,xzr,#-0x5555555555555556
7102b4ee14  movk x20,#0x2aa, LSL #48
7102b4ee18  add x8,x17,#0x1
7102b4ee1c  cmp x8,x20
7102b4ee20  b.hi 0x7102b5242c
7102b4ee24  sub x9,x9,x21
7102b4ee28  asr x9,x9,#0x5
7102b4ee2c  mul x9,x9,x15
7102b4ee30  orr x10,xzr,#0x5555555555555555
7102b4ee34  movk x10,#0x5554
7102b4ee38  movk x10,#0x155, LSL #48
7102b4ee3c  cmp x9,x10
7102b4ee40  b.hi 0x7102b4ee54
7102b4ee44  lsl x9,x9,#0x1
7102b4ee48  cmp x9,x8
7102b4ee4c  csel x20,x8,x9,cc
7102b4ee50  cbz x20,0x7102b4f110
7102b4ee54  add x8,x20,x20, LSL #0x1
7102b4ee58  lsl x8,x8,#0x5
7102b4ee5c  cmp x8,#0x0
7102b4ee60  csinc x1,x8,xzr,ne
7102b4ee64  mov w0,#0x10
7102b4ee68  str x18,[sp, #0x60]
7102b4ee6c  stp x1,x17,[sp, #0x48]
7102b4ee70  bl 0x710392e290
7102b4ee74  cbnz x0,0x7102b4eec0
7102b4ee78  adrp x8,0x7105332000
7102b4ee7c  ldr x0,[x8, #0xf00]
7102b4ee80  cbz x0,0x7102b4eebc
7102b4ee84  ldr x9,[sp, #0x48]
7102b4ee88  add x8,sp,#0x148
7102b4ee8c  str wzr,[sp, #0xcc]
7102b4ee90  add x1,sp,#0xcc
7102b4ee94  sub x2,x29,#0xd0
7102b4ee98  str x9,[x8, #0x78]
7102b4ee9c  ldr x8,[x0]
7102b4eea0  ldr x8,[x8, #0x30]
7102b4eea4  blr x8
7102b4eea8  tbz w0,#0x0,0x7102b4eebc
7102b4eeac  ldr x1,[sp, #0x48]
7102b4eeb0  mov w0,#0x10
7102b4eeb4  bl 0x710392e290
7102b4eeb8  cbnz x0,0x7102b4eec0
7102b4eebc  mov x0,xzr
7102b4eec0  ldur w4,[x29, #-0x58]
7102b4eec4  ldr w3,[sp, #0xb0]
7102b4eec8  ldr x18,[sp, #0x60]
7102b4eecc  ldr x17,[sp, #0x50]
7102b4eed0  orr w8,wzr,#0x60
7102b4eed4  madd x9,x17,x8,x0
7102b4eed8  madd x8,x20,x8,x0
7102b4eedc  ldr x15,[sp, #0x78]
7102b4eee0  mov x11,xzr
7102b4eee4  orr w16,wzr,#0x60
7102b4eee8  b 0x7102b4eef4
7102b4eeec  add x11,x11,#0x2
7102b4eef0  strb w10,[x12, #0x5]
7102b4eef4  add x10,x15,x11
7102b4eef8  ldrb w13,[x10]
7102b4eefc  cbz w13,0x7102b4ef28
7102b4ef00  add w14,w11,#0x1
7102b4ef04  add x12,x9,x11
7102b4ef08  cmp w14,#0x3f
7102b4ef0c  strb w13,[x12, #0x4]
7102b4ef10  b.cs 0x7102b4ef24
7102b4ef14  ldrb w10,[x10, #0x1]
7102b4ef18  cbnz w10,0x7102b4eeec
7102b4ef1c  add x11,x11,#0x1
7102b4ef20  b 0x7102b4ef28
7102b4ef24  add w11,w11,#0x1
7102b4ef28  mul x10,x17,x16
7102b4ef2c  add x12,x0,x10
7102b4ef30  ldr x15,[sp, #0x80]
7102b4ef34  add x13,x12,w11, UXTW 
7102b4ef38  mov x10,x9
7102b4ef3c  strb wzr,[x13, #0x4]
7102b4ef40  str w11,[x10], #0x60
7102b4ef44  ldp x11,x13,[x15]
7102b4ef48  ldr x14,[x15, #0x10]
7102b4ef4c  ldr w15,[x15, #0x18]
7102b4ef50  cmp x19,x21
7102b4ef54  str w15,[x12, #0x5c]
7102b4ef58  stur x14,[x12, #0x54]
7102b4ef5c  stur x13,[x12, #0x4c]
7102b4ef60  stur x11,[x12, #0x44]
7102b4ef64  b.eq 0x7102b4f000
7102b4ef68  mov x12,xzr
7102b4ef6c  mov x11,x19
7102b4ef70  sub x19,x19,#0x60
7102b4ef74  add x13,x11,x12
7102b4ef78  ldurb w15,[x13, #-0x5c]
7102b4ef7c  cbz w15,0x7102b4efbc
7102b4ef80  add x14,x9,x12
7102b4ef84  sturb w15,[x14, #-0x5c]
7102b4ef88  ldurb w15,[x13, #-0x5b]
7102b4ef8c  cbz w15,0x7102b4efb0
7102b4ef90  sturb w15,[x14, #-0x5b]
7102b4ef94  ldurb w13,[x13, #-0x5a]
7102b4ef98  cbz w13,0x7102b4efb8
7102b4ef9c  add x12,x12,#0x3
7102b4efa0  cmp w12,#0x3f
7102b4efa4  sturb w13,[x14, #-0x5a]
7102b4efa8  b.cc 0x7102b4ef74
7102b4efac  b 0x7102b4efbc
7102b4efb0  add x12,x12,#0x1
7102b4efb4  b 0x7102b4efbc
7102b4efb8  add x12,x12,#0x2
7102b4efbc  sub x13,x9,#0x60
7102b4efc0  add x14,x13,w12, UXTW 
7102b4efc4  strb wzr,[x14, #0x4]
7102b4efc8  stur w12,[x9, #-0x60]
7102b4efcc  ldur x12,[x11, #-0x1c]
7102b4efd0  ldur x14,[x11, #-0x14]
7102b4efd4  ldur x15,[x11, #-0xc]
7102b4efd8  ldur w11,[x11, #-0x4]
7102b4efdc  stur w11,[x9, #-0x4]
7102b4efe0  stur x15,[x9, #-0xc]
7102b4efe4  stur x14,[x9, #-0x14]
7102b4efe8  stur x12,[x9, #-0x1c]
7102b4efec  mov x9,x13
7102b4eff0  cmp x19,x21
7102b4eff4  b.ne 0x7102b4ef68
7102b4eff8  ldr x11,[sp, #0x68]
7102b4effc  ldr x21,[x11]
7102b4f000  str x9,[x22, #0x288]
7102b4f004  str x10,[x22, #0x290]
7102b4f008  str x8,[x22, #0x298]
7102b4f00c  cbz x21,0x7102b4f070
7102b4f010  mov x0,x21
7102b4f014  mov x19,x18
7102b4f018  bl 0x710392eb40
7102b4f01c  ldr w3,[sp, #0xb0]
7102b4f020  ldur w4,[x29, #-0x58]
7102b4f024  mov x18,x19
7102b4f028  b 0x7102b4f070
7102b4f02c  add x8,x8,#0x1
7102b4f030  b 0x7102b4f038
7102b4f034  add x8,x8,#0x2
7102b4f038  ldr x11,[sp, #0x80]
7102b4f03c  add x9,x19,w8, UXTW 
7102b4f040  strb wzr,[x9, #0x4]
7102b4f044  str w8,[x19]
7102b4f048  ldp x8,x9,[x11]
7102b4f04c  ldr x10,[x11, #0x10]
7102b4f050  ldr w11,[x11, #0x18]
7102b4f054  str w11,[x19, #0x5c]
7102b4f058  stur x10,[x19, #0x54]
7102b4f05c  stur x9,[x19, #0x4c]
7102b4f060  stur x8,[x19, #0x44]
7102b4f064  ldr x8,[x22, #0x290]
7102b4f068  add x8,x8,#0x60
7102b4f06c  str x8,[x22, #0x290]
7102b4f070  ldr w8,[x26]
7102b4f074  cmp w8,#0x1
7102b4f078  b.lt 0x7102b4e578
7102b4f07c  ldr w9,[x25]
7102b4f080  cmp w9,#0x1
7102b4f084  b.lt 0x7102b4e578
7102b4f088  ldr w10,[sp, #0xd0]
7102b4f08c  cmp w10,w8
7102b4f090  b.lt 0x7102b4e578
7102b4f094  ldr w10,[sp, #0xd4]
7102b4f098  cmp w10,w9
7102b4f09c  b.lt 0x7102b4e578
7102b4f0a0  mov x10,xzr
7102b4f0a4  adds x11,x10,x24
7102b4f0a8  b.mi 0x7102b4f100
7102b4f0ac  ldrsw x12,[sp, #0xd0]
7102b4f0b0  cmp x11,x12
7102b4f0b4  b.ge 0x7102b4f100
7102b4f0b8  mov x12,x18
7102b4f0bc  mov x13,x9
7102b4f0c0  tbnz x12,#0x3f,0x7102b4f0f4
7102b4f0c4  ldrsw x14,[sp, #0xd4]
7102b4f0c8  cmp x12,x14
7102b4f0cc  b.ge 0x7102b4f0f4
7102b4f0d0  mul x15,x11,x23
7102b4f0d4  ldr x14,[sp, #0xd8]
7102b4f0d8  lsl x16,x27,x12
7102b4f0dc  ldr x14,[x14, x15, LSL #0x0]
7102b4f0e0  lsr x15,x12,#0x3
7102b4f0e4  and x15,x15,#0x1ffffffffffffff8
7102b4f0e8  ldr x17,[x14, x15, LSL #0x0]
7102b4f0ec  orr x16,x17,x16
7102b4f0f0  str x16,[x14, x15, LSL #0x0]
7102b4f0f4  subs x13,x13,#0x1
7102b4f0f8  add x12,x12,#0x1
7102b4f0fc  b.ne 0x7102b4f0c0
7102b4f100  add x10,x10,#0x1
7102b4f104  cmp x10,x8
7102b4f108  b.ne 0x7102b4f0a4
7102b4f10c  b 0x7102b4e578
7102b4f110  mov x0,xzr
7102b4f114  b 0x7102b4eed0
7102b4f118  ldr x0,[sp, #0x130]
7102b4f11c  ldr x20,[sp, #0x70]
7102b4f120  adrp x21,0x710532a000
7102b4f124  cbz x0,0x7102b4f130
7102b4f128  str x0,[sp, #0x138]
7102b4f12c  bl 0x710392eb40
7102b4f130  ldr x0,[sp, #0x148]
7102b4f134  cbz x0,0x7102b4f140
7102b4f138  str x0,[x25, #0x8]
7102b4f13c  bl 0x710392eb40
7102b4f140  ldr x19,[sp, #0xd8]
7102b4f144  cbz x19,0x7102b4f184
7102b4f148  ldr x20,[sp, #0xe0]
7102b4f14c  cmp x20,x19
7102b4f150  b.eq 0x7102b4f170
7102b4f154  ldr x0,[x20, #-0x18]!
7102b4f158  cbz x0,0x7102b4f160
7102b4f15c  bl 0x710392eb40
7102b4f160  cmp x19,x20
7102b4f164  b.ne 0x7102b4f154
7102b4f168  ldr x0,[sp, #0xd8]
7102b4f16c  b 0x7102b4f174
7102b4f170  mov x0,x19
7102b4f174  ldr x20,[sp, #0x70]
7102b4f178  str x19,[sp, #0xe0]
7102b4f17c  cbz x0,0x7102b4f184
7102b4f180  bl 0x710392eb40
7102b4f184  ldr x19,[x25, #0x90]
7102b4f188  cbz x19,0x7102b4f1d0
7102b4f18c  ldr x8,[x25, #0x98]
7102b4f190  cmp x8,x19
7102b4f194  b.eq 0x7102b4f318
7102b4f198  mov x20,x8
7102b4f19c  ldrb w9,[x20, #-0x30]!
7102b4f1a0  tbz w9,#0x0,0x7102b4f1b0
7102b4f1a4  ldur x0,[x8, #-0x20]
7102b4f1a8  cbz x0,0x7102b4f1b0
7102b4f1ac  bl 0x710392eb40
7102b4f1b0  cmp x19,x20
7102b4f1b4  mov x8,x20
7102b4f1b8  b.ne 0x7102b4f19c
7102b4f1bc  ldr x0,[x25, #0x90]
7102b4f1c0  ldr x20,[sp, #0x70]
7102b4f1c4  str x19,[x25, #0x98]
7102b4f1c8  cbz x0,0x7102b4f1d0
7102b4f1cc  bl 0x710392eb40
7102b4f1d0  ldr x19,[x20, #0x9b0]
7102b4f1d4  str x22,[x20, #0x9b0]
7102b4f1d8  cbz x19,0x7102b4f1fc
7102b4f1dc  ldr x0,[x19, #0x288]
7102b4f1e0  cbz x0,0x7102b4f1ec
7102b4f1e4  str x0,[x19, #0x290]
7102b4f1e8  bl 0x710392eb40
7102b4f1ec  add x0,x19,#0x8
7102b4f1f0  bl 0x7102b53350
7102b4f1f4  mov x0,x19
7102b4f1f8  bl 0x710392eb40
7102b4f1fc  mov x0,x20
7102b4f200  bl 0x71025d9250
7102b4f204  ldr x8,[x20, #0x310]
7102b4f208  ldp x20,x19,[x8, #0xd0]
7102b4f20c  cmp x20,x19
7102b4f210  b.eq 0x7102b4f248
7102b4f214  ldr w8,[x20, #0x8]
7102b4f218  sub w8,w8,#0x2
7102b4f21c  cmp w8,#0x2
7102b4f220  b.hi 0x7102b4f248
7102b4f224  add x8,x20,#0x10
7102b4f228  cmp x19,x8
7102b4f22c  b.eq 0x7102b4f28c
7102b4f230  ldr w9,[x8, #0x8]
7102b4f234  add x8,x8,#0x10
7102b4f238  sub w9,w9,#0x2
7102b4f23c  cmp w9,#0x2
7102b4f240  b.ls 0x7102b4f228
7102b4f244  sub x20,x8,#0x10
7102b4f248  cmp x20,x19
7102b4f24c  b.eq 0x7102b4f28c
7102b4f250  ldr x8,[x20]
7102b4f254  cbz x8,0x7102b4f264
7102b4f258  add x0,x8,#0x108
7102b4f25c  strb wzr,[x8, #0x110]
7102b4f260  bl 0x71025e9d50
7102b4f264  add x20,x20,#0x10
7102b4f268  cmp x20,x19
7102b4f26c  b.eq 0x7102b4f28c
7102b4f270  ldr w8,[x20, #0x8]
7102b4f274  sub w8,w8,#0x2
7102b4f278  cmp w8,#0x2
7102b4f27c  b.hi 0x7102b4f248
7102b4f280  add x20,x20,#0x10
7102b4f284  cmp x19,x20
7102b4f288  b.ne 0x7102b4f270
7102b4f28c  ldr x20,[sp, #0x70]
7102b4f290  ldr w8,[x20, #0xb8]
7102b4f294  cmp w8,#0x3
7102b4f298  b.cs 0x7102b52408
7102b4f29c  ldr x9,[x21, #0x9d0]
7102b4f2a0  ldr x9,[x9, x8, LSL #0x3]
7102b4f2a4  ldr x8,[x9, #0x228]
7102b4f2a8  ldr x9,[x9, #0x230]
7102b4f2ac  orr w1,wzr,#0xffffff
7102b4f2b0  cmp x8,x9
7102b4f2b4  b.eq 0x7102b4f334
7102b4f2b8  adrp x10,0x7105332000
7102b4f2bc  ldr x0,[x10, #0xf20]
7102b4f2c0  mov x10,#0x4338
7102b4f2c4  movk x10,#0x4c51, LSL #16
7102b4f2c8  movk x10,#0x18, LSL #32
7102b4f2cc  ldr w19,[x8]
7102b4f2d0  cmp w19,w1
7102b4f2d4  b.eq 0x7102b4f304
7102b4f2d8  ldr x11,[x0, #0x78]
7102b4f2dc  ldr x11,[x11]
7102b4f2e0  ldr x12,[x11, #0x40]
7102b4f2e4  ldr w12,[x12, #0x4]
7102b4f2e8  cmp w12,w19
7102b4f2ec  b.ls 0x7102b4f304
7102b4f2f0  ldr x11,[x11, #0x60]
7102b4f2f4  add x11,x11,x19, LSL #0x5
7102b4f2f8  ldr x11,[x11, #0x18]
7102b4f2fc  cmp x11,x10
7102b4f300  b.eq 0x7102b4f328
7102b4f304  add x8,x8,#0x4
7102b4f308  cmp x9,x8
7102b4f30c  b.ne 0x7102b4f2cc
7102b4f310  orr w1,wzr,#0xffffff
7102b4f314  b 0x7102b4f334
7102b4f318  mov x0,x19
7102b4f31c  str x19,[x25, #0x98]
7102b4f320  cbnz x0,0x7102b4f1cc
7102b4f324  b 0x7102b4f1d0
7102b4f328  mov w1,w19
7102b4f32c  bl 0x7103540a00
7102b4f330  mov w1,w19
7102b4f334  add x23,x20,#0x968
7102b4f338  mov x0,x23
7102b4f33c  str w1,[sp, #0x48]
7102b4f340  bl 0x7103720ec0
7102b4f344  ldr x8,[x20, #0x9a8]
7102b4f348  ldr x9,[x8, #0x10]
7102b4f34c  ldr x10,[x20, #0x338]
7102b4f350  ldr x8,[x20, #0x9b0]
7102b4f354  str x10,[x9]
7102b4f358  ldr w8,[x8, #0x248]
7102b4f35c  str w8,[x9, #0x8]
7102b4f360  ldr x9,[x10]
7102b4f364  ldr x0,[x9, #0x8]
7102b4f368  cbz x0,0x7102b4f388
7102b4f36c  adrp x9,0x7104466000
7102b4f370  add x9,x9,#0xb30
7102b4f374  mov w2,#0xffffffff
7102b4f378  ldr w1,[x9, x8, LSL #0x2]
7102b4f37c  ldr x8,[x0]
7102b4f380  ldr x8,[x8, #0x58]
7102b4f384  blr x8
7102b4f388  orr w8,wzr,#0xffffff
7102b4f38c  adrp x19,0x710532f000
7102b4f390  str w8,[sp, #0x160]
7102b4f394  ldr x8,[x19, #0x488]
7102b4f398  cbz x8,0x7102b4f49c
7102b4f39c  ldr x20,[x8]
7102b4f3a0  ldr w8,[x20]
7102b4f3a4  cmp w8,#0x2
7102b4f3a8  b.ne 0x7102b4f3d4
7102b4f3ac  adrp x8,0x710532f000
7102b4f3b0  ldr w0,[x8, #0x484]
7102b4f3b4  cmn w0,#0x1
7102b4f3b8  b.eq 0x7102b4f3d4
7102b4f3bc  bl 0x71039c0ac0
7102b4f3c0  cbz x0,0x7102b4f3d4
7102b4f3c4  ldr x0,[x20, #0x10]
7102b4f3c8  orr w8,wzr,#0x3
7102b4f3cc  str w8,[x20]
7102b4f3d0  bl 0x710353c9b0
7102b4f3d4  ldr x8,[sp, #0x70]
7102b4f3d8  ldr x8,[x8, #0x10]
7102b4f3dc  adrp x9,0x7105332000
7102b4f3e0  ldr x0,[x9, #0xf20]
7102b4f3e4  ands x8,x8,#0xffffffffff
7102b4f3e8  b.eq 0x7102b4f458
7102b4f3ec  ldr x9,[x0, #0x78]
7102b4f3f0  ldr x10,[x9]
7102b4f3f4  ldr x9,[x10, #0x70]
7102b4f3f8  ldr x10,[x10, #0x40]
7102b4f3fc  ldr w11,[x10, #0xc]
7102b4f400  add x10,x9,x11, LSL #0x3
7102b4f404  cbz w11,0x7102b4f438
7102b4f408  cmp x11,#0x0
7102b4f40c  cinc x12,x11,lt
7102b4f410  asr x12,x12,#0x1
7102b4f414  add x13,x9,x12, LSL #0x3
7102b4f418  ldr x14,[x13], #0x8
7102b4f41c  and x14,x14,#0xffffffffff
7102b4f420  mvn x15,x12
7102b4f424  add x11,x11,x15
7102b4f428  cmp x14,x8
7102b4f42c  csel x11,x11,x12,cc
7102b4f430  csel x9,x13,x9,cc
7102b4f434  cbnz x11,0x7102b4f408
7102b4f438  cmp x9,x10
7102b4f43c  b.eq 0x7102b4f458
7102b4f440  ldr x9,[x9]
7102b4f444  and x10,x9,#0xffffffffff
7102b4f448  cmp x10,x8
7102b4f44c  b.ne 0x7102b4f458
7102b4f450  lsr x1,x9,#0x28
7102b4f454  b 0x7102b4f45c
7102b4f458  orr w1,wzr,#0xffffff
7102b4f45c  bl 0x7103540d50
7102b4f460  adrp x8,0x7104471000
7102b4f464  add x8,x8,#0xf50
7102b4f468  cmp x0,#0x0
7102b4f46c  csel x8,x8,x0,eq
7102b4f470  ldr w20,[x8]
7102b4f474  adrp x8,0x710532f000
7102b4f478  ldr w0,[x8, #0x484]
7102b4f47c  str w20,[sp, #0x160]
7102b4f480  cmn w0,#0x1
7102b4f484  b.eq 0x7102b4f53c
7102b4f488  bl 0x71039c0ac0
7102b4f48c  cbz x0,0x7102b4f53c
7102b4f490  mov x0,xzr
7102b4f494  bl 0x710353c9b0
7102b4f498  b 0x7102b4f53c
7102b4f49c  ldr x8,[x20, #0x10]
7102b4f4a0  adrp x9,0x7105332000
7102b4f4a4  ldr x0,[x9, #0xf20]
7102b4f4a8  ands x8,x8,#0xffffffffff
7102b4f4ac  b.eq 0x7102b4f51c
7102b4f4b0  ldr x9,[x0, #0x78]
7102b4f4b4  ldr x10,[x9]
7102b4f4b8  ldr x9,[x10, #0x70]
7102b4f4bc  ldr x10,[x10, #0x40]
7102b4f4c0  ldr w11,[x10, #0xc]
7102b4f4c4  add x10,x9,x11, LSL #0x3
7102b4f4c8  cbz w11,0x7102b4f4fc
7102b4f4cc  cmp x11,#0x0
7102b4f4d0  cinc x12,x11,lt
7102b4f4d4  asr x12,x12,#0x1
7102b4f4d8  add x13,x9,x12, LSL #0x3
7102b4f4dc  ldr x14,[x13], #0x8
7102b4f4e0  and x14,x14,#0xffffffffff
7102b4f4e4  mvn x15,x12
7102b4f4e8  add x11,x11,x15
7102b4f4ec  cmp x14,x8
7102b4f4f0  csel x11,x11,x12,cc
7102b4f4f4  csel x9,x13,x9,cc
7102b4f4f8  cbnz x11,0x7102b4f4cc
7102b4f4fc  cmp x9,x10
7102b4f500  b.eq 0x7102b4f51c
7102b4f504  ldr x9,[x9]
7102b4f508  and x10,x9,#0xffffffffff
7102b4f50c  cmp x10,x8
7102b4f510  b.ne 0x7102b4f51c
7102b4f514  lsr x1,x9,#0x28
7102b4f518  b 0x7102b4f520
7102b4f51c  orr w1,wzr,#0xffffff
7102b4f520  bl 0x7103540d50
7102b4f524  adrp x8,0x7104471000
7102b4f528  add x8,x8,#0xf50
7102b4f52c  cmp x0,#0x0
7102b4f530  csel x8,x8,x0,eq
7102b4f534  ldr w20,[x8]
7102b4f538  str w20,[sp, #0x160]
7102b4f53c  ldr x9,[sp, #0x70]
7102b4f540  ldr x8,[x9, #0x9a8]
7102b4f544  ldr x0,[x8, #0x8]
7102b4f548  ldr w8,[x9, #0xd8]
7102b4f54c  ldr x2,[x9, #0x9b0]
7102b4f550  ubfx w3,w8,#0x4,#0x1
7102b4f554  add x1,sp,#0x160
7102b4f558  bl 0x7102b60190
7102b4f55c  ldr x8,[x19, #0x488]
7102b4f560  cbz x8,0x7102b4f624
7102b4f564  ldr x19,[x8]
7102b4f568  ldr w8,[x19]
7102b4f56c  cmp w8,#0x2
7102b4f570  b.ne 0x7102b4f59c
7102b4f574  adrp x8,0x710532f000
7102b4f578  ldr w0,[x8, #0x484]
7102b4f57c  cmn w0,#0x1
7102b4f580  b.eq 0x7102b4f59c
7102b4f584  bl 0x71039c0ac0
7102b4f588  cbz x0,0x7102b4f59c
7102b4f58c  ldr x0,[x19, #0x10]
7102b4f590  orr w8,wzr,#0x3
7102b4f594  str w8,[x19]
7102b4f598  bl 0x710353c9b0
7102b4f59c  orr w8,wzr,#0xffffff
7102b4f5a0  cmp w20,w8
7102b4f5a4  b.eq 0x7102b4f600
7102b4f5a8  adrp x8,0x7105332000
7102b4f5ac  ldr x19,[x8, #0xf20]
7102b4f5b0  ldr w8,[x19, #0x48]
7102b4f5b4  cmp w8,w20
7102b4f5b8  b.ls 0x7102b4f5f8
7102b4f5bc  ldr x21,[x19]
7102b4f5c0  mov x0,x21
7102b4f5c4  bl 0x71039c1a40
7102b4f5c8  ldr x8,[x19, #0x40]
7102b4f5cc  mov w9,#0x48
7102b4f5d0  umaddl x9,w20,w9,x8
7102b4f5d4  ldrb w9,[x9, #0x8]
7102b4f5d8  tbz w9,#0x0,0x7102b4f5f0
7102b4f5dc  mov w9,w20
7102b4f5e0  mov w10,#0x48
7102b4f5e4  madd x1,x9,x10,x8
7102b4f5e8  mov x0,x19
7102b4f5ec  bl 0x710353f5a0
7102b4f5f0  mov x0,x21
7102b4f5f4  bl 0x71039c1a50
7102b4f5f8  orr w8,wzr,#0xffffff
7102b4f5fc  str w8,[sp, #0x160]
7102b4f600  adrp x8,0x710532f000
7102b4f604  ldr w0,[x8, #0x484]
7102b4f608  cmn w0,#0x1
7102b4f60c  b.eq 0x7102b4f688
7102b4f610  bl 0x71039c0ac0
7102b4f614  cbz x0,0x7102b4f688
7102b4f618  mov x0,xzr
7102b4f61c  bl 0x710353c9b0
7102b4f620  b 0x7102b4f688
7102b4f624  orr w8,wzr,#0xffffff
7102b4f628  cmp w20,w8
7102b4f62c  b.eq 0x7102b4f688
7102b4f630  adrp x8,0x7105332000
7102b4f634  ldr x19,[x8, #0xf20]
7102b4f638  ldr w8,[x19, #0x48]
7102b4f63c  cmp w8,w20
7102b4f640  b.ls 0x7102b4f680
7102b4f644  ldr x21,[x19]
7102b4f648  mov x0,x21
7102b4f64c  bl 0x71039c1a40
7102b4f650  ldr x8,[x19, #0x40]
7102b4f654  mov w9,#0x48
7102b4f658  umaddl x9,w20,w9,x8
7102b4f65c  ldrb w9,[x9, #0x8]
7102b4f660  tbz w9,#0x0,0x7102b4f678
7102b4f664  mov w9,w20
7102b4f668  mov w10,#0x48
7102b4f66c  madd x1,x9,x10,x8
7102b4f670  mov x0,x19
7102b4f674  bl 0x710353f5a0
7102b4f678  mov x0,x21
7102b4f67c  bl 0x71039c1a50
7102b4f680  orr w8,wzr,#0xffffff
7102b4f684  str w8,[sp, #0x160]
7102b4f688  ldr x19,[sp, #0x70]
7102b4f68c  ldr x8,[x19, #0x9a8]
7102b4f690  ldr x0,[x8, #0x28]
7102b4f694  ldr x2,[x19, #0x9b0]
7102b4f698  ldr x1,[sp, #0x58]
7102b4f69c  bl 0x7102b64c40
7102b4f6a0  ldrb w8,[x19, #0xd8]
7102b4f6a4  tbnz w8,#0x4,0x7102b4f6dc
7102b4f6a8  adrp x19,0x7105314000
7102b4f6ac  add x19,x19,#0x4d8
7102b4f6b0  ldarb w8,[x19]
7102b4f6b4  tbz w8,#0x0,0x7102b52340
7102b4f6b8  adrp x20,0x71052c5000
7102b4f6bc  ldrb w8,[x20, #0x1b0]
7102b4f6c0  cmp w8,#0x20
7102b4f6c4  b.eq 0x7102b4f6dc
7102b4f6c8  ldarb w8,[x19]
7102b4f6cc  tbz w8,#0x0,0x7102b523c8
7102b4f6d0  ldrb w8,[x20, #0x1b0]
7102b4f6d4  cmp w8,#0xd
7102b4f6d8  b.ne 0x7102b52324
7102b4f6dc  mov w20,#0x1
7102b4f6e0  ldr x9,[sp, #0x70]
7102b4f6e4  ldr x8,[x9, #0x9a8]
7102b4f6e8  ldr x22,[x8, #0x20]
7102b4f6ec  ldr x8,[sp, #0x58]
7102b4f6f0  ldr x19,[x9, #0x9b0]
7102b4f6f4  mov w0,#0x10
7102b4f6f8  mov w1,#0x20
7102b4f6fc  str x8,[x22, #0x28]
7102b4f700  bl 0x710392e290
7102b4f704  mov x21,x0
7102b4f708  cbnz x0,0x7102b4f754
7102b4f70c  adrp x8,0x7105332000
7102b4f710  ldr x0,[x8, #0xf00]
7102b4f714  cbz x0,0x7102b4f750
7102b4f718  mov w8,#0x20
7102b4f71c  str wzr,[sp, #0xd0]
7102b4f720  add x1,sp,#0xd0
7102b4f724  str x8,[x25, #0x18]
7102b4f728  ldr x8,[x0]
7102b4f72c  ldr x8,[x8, #0x30]
7102b4f730  add x2,sp,#0x160
7102b4f734  blr x8
7102b4f738  tbz w0,#0x0,0x7102b4f750
7102b4f73c  mov w0,#0x10
7102b4f740  mov w1,#0x20
7102b4f744  bl 0x710392e290
7102b4f748  mov x21,x0
7102b4f74c  cbnz x0,0x7102b4f754
7102b4f750  mov x21,xzr
7102b4f754  ldr x8,[x22]
7102b4f758  ldr w9,[x19, #0x240]
7102b4f75c  add w3,w9,#0x1
7102b4f760  stp xzr,xzr,[x21, #0x10]
7102b4f764  adrp x2,0x71042e5000
7102b4f768  add x2,x2,#0x386
7102b4f76c  stp x8,xzr,[x21]
7102b4f770  ldr x19,[x8, #0x8]
7102b4f774  add x0,sp,#0x160
7102b4f778  add x24,sp,#0x160
7102b4f77c  bl 0x710176bcc0
7102b4f780  add x2,x24,#0x8
7102b4f784  adrp x1,0x71043ab000
7102b4f788  add x1,x1,#0xbd2
7102b4f78c  add x0,sp,#0xd0
7102b4f790  str wzr,[sp, #0xd0]
7102b4f794  strb wzr,[sp, #0xd4]
7102b4f798  bl 0x7102b63c80
7102b4f79c  add x1,sp,#0xd0
7102b4f7a0  mov x0,x19
7102b4f7a4  mov x2,xzr
7102b4f7a8  bl 0x7102b60b30
7102b4f7ac  str x0,[x21, #0x8]
7102b4f7b0  cbz x0,0x7102b4f7c4
7102b4f7b4  ldrb w8,[x0, #0x18]
7102b4f7b8  cbz w8,0x7102b4f7c4
7102b4f7bc  strb wzr,[x0, #0x18]
7102b4f7c0  bl 0x7102b5f650
7102b4f7c4  ldr x19,[x22, #0x30]
7102b4f7c8  str x21,[x22, #0x30]
7102b4f7cc  cbz x19,0x7102b4f7e4
7102b4f7d0  mov x0,x19
7102b4f7d4  bl 0x7102b5b230
7102b4f7d8  mov x0,x19
7102b4f7dc  bl 0x710392eb40
7102b4f7e0  ldr x21,[x22, #0x30]
7102b4f7e4  ldr x0,[x21, #0x8]
7102b4f7e8  cbz x0,0x7102b4f7fc
7102b4f7ec  ldrb w8,[x0, #0x18]
7102b4f7f0  cbz w8,0x7102b4f7fc
7102b4f7f4  strb wzr,[x0, #0x18]
7102b4f7f8  bl 0x7102b5f650
7102b4f7fc  strb w20,[x22, #0xc]
7102b4f800  ldr x20,[sp, #0x70]
7102b4f804  mov w8,#0x1
7102b4f808  str w8,[x22, #0x8]
7102b4f80c  ldp x8,x9,[x20, #0x1a8]
7102b4f810  sub x10,x9,x8
7102b4f814  lsr x10,x10,#0x3
7102b4f818  cmp w10,#0x4
7102b4f81c  b.cc 0x7102b4f8c4
7102b4f820  adrp x8,0x71052b9000
7102b4f824  ldr x8,[x8, #0x4f8]
7102b4f828  ldr x8,[x8]
7102b4f82c  ldr w20,[x8, #0xa0]
7102b4f830  ldr x8,[sp, #0x70]
7102b4f834  ldr x8,[x8, #0x9b0]
7102b4f838  ldr w8,[x8, #0x24c]
7102b4f83c  cmp w8,#0x0
7102b4f840  ldr x8,[sp, #0x70]
7102b4f844  cset w19,ne
7102b4f848  mov w1,w19
7102b4f84c  ldr x0,[x8, #0x308]
7102b4f850  bl 0x7102624870
7102b4f854  ldr x8,[sp, #0x70]
7102b4f858  ldr x0,[x8, #0x308]
7102b4f85c  mov w1,w19
7102b4f860  bl 0x7102624740
7102b4f864  cmp w20,#0x4
7102b4f868  ldr x20,[sp, #0x70]
7102b4f86c  ldr x9,[x20, #0x300]
7102b4f870  orr w8,w19,#0x2
7102b4f874  csel w19,w8,w19,gt
7102b4f878  ldr x8,[x9, #0x48]
7102b4f87c  ldr x8,[x8, w19, UXTW #0x3]
7102b4f880  ldr x0,[x9, #0x60]
7102b4f884  add x10,x8,#0x8
7102b4f888  cmp x0,x10
7102b4f88c  b.eq 0x7102b4f8a8
7102b4f890  ldp x1,x2,[x8, #0x8]
7102b4f894  bl 0x7102616cf0
7102b4f898  ldr x9,[x20, #0x300]
7102b4f89c  ldr x8,[x9, #0x48]
7102b4f8a0  ldr x0,[x9, #0x60]
7102b4f8a4  ldr x8,[x8, x19, LSL #0x3]
7102b4f8a8  add x9,x8,#0x20
7102b4f8ac  add x0,x0,#0x18
7102b4f8b0  cmp x0,x9
7102b4f8b4  b.eq 0x7102b4f8c0
7102b4f8b8  ldp x1,x2,[x8, #0x20]
7102b4f8bc  bl 0x7102616cf0
7102b4f8c0  ldp x8,x9,[x20, #0x1a8]
7102b4f8c4  cmp x9,x8
7102b4f8c8  b.eq 0x7102b52434
7102b4f8cc  ldr x8,[x8]
7102b4f8d0  ldr x8,[x8, #0x10]
7102b4f8d4  mov w1,#0x88
7102b4f8d8  mov w0,#0x10
7102b4f8dc  str x8,[sp, #0xb0]
7102b4f8e0  bl 0x710392e290
7102b4f8e4  mov x19,x0
7102b4f8e8  cbnz x0,0x7102b4f934
7102b4f8ec  adrp x8,0x7105332000
7102b4f8f0  ldr x0,[x8, #0xf00]
7102b4f8f4  cbz x0,0x7102b4f930
7102b4f8f8  mov w8,#0x88
7102b4f8fc  str wzr,[sp, #0xd0]
7102b4f900  add x1,sp,#0xd0
7102b4f904  str x8,[x25, #0x18]
7102b4f908  ldr x8,[x0]
7102b4f90c  ldr x8,[x8, #0x30]
7102b4f910  add x2,sp,#0x160
7102b4f914  blr x8
7102b4f918  tbz w0,#0x0,0x7102b4f930
7102b4f91c  mov w1,#0x88
7102b4f920  mov w0,#0x10
7102b4f924  bl 0x710392e290
7102b4f928  mov x19,x0
7102b4f92c  cbnz x0,0x7102b4f934
7102b4f930  mov x19,xzr
7102b4f934  ldr x8,[x20, #0x9b0]
7102b4f938  ldr x1,[x20, #0x9a8]
7102b4f93c  mov x0,x19
7102b4f940  ldr x2,[sp, #0x58]
7102b4f944  add x3,x8,#0x244
7102b4f948  bl 0x7102b66f60
7102b4f94c  ldr x21,[x20, #0x9b8]
7102b4f950  str x19,[x20, #0x9b8]
7102b4f954  cbz x21,0x7102b4f970
7102b4f958  ldr x0,[x21, #0x58]
7102b4f95c  str xzr,[x21, #0x58]
7102b4f960  cbz x0,0x7102b4f968
7102b4f964  bl 0x710392eb40
7102b4f968  mov x0,x21
7102b4f96c  bl 0x710392eb40
7102b4f970  mov w1,#0x50
7102b4f974  mov w0,#0x10
7102b4f978  bl 0x710392e290
7102b4f97c  mov x19,x0
7102b4f980  cbnz x0,0x7102b4f9cc
7102b4f984  adrp x8,0x7105332000
7102b4f988  ldr x0,[x8, #0xf00]
7102b4f98c  cbz x0,0x7102b4f9c8
7102b4f990  mov w8,#0x50
7102b4f994  str wzr,[sp, #0xd0]
7102b4f998  add x1,sp,#0xd0
7102b4f99c  str x8,[x25, #0x18]
7102b4f9a0  ldr x8,[x0]
7102b4f9a4  ldr x8,[x8, #0x30]
7102b4f9a8  add x2,sp,#0x160
7102b4f9ac  blr x8
7102b4f9b0  tbz w0,#0x0,0x7102b4f9c8
7102b4f9b4  mov w1,#0x50
7102b4f9b8  mov w0,#0x10
7102b4f9bc  bl 0x710392e290
7102b4f9c0  mov x19,x0
7102b4f9c4  cbnz x0,0x7102b4f9cc
7102b4f9c8  mov x19,xzr
7102b4f9cc  ldr x8,[x20, #0x9b0]
7102b4f9d0  ldr x1,[x20, #0x9a8]
7102b4f9d4  mov x0,x19
7102b4f9d8  mov x2,x23
7102b4f9dc  add x3,x8,#0x244
7102b4f9e0  bl 0x7102b53440
7102b4f9e4  ldr x21,[x20, #0x9c0]
7102b4f9e8  str x19,[x20, #0x9c0]
7102b4f9ec  cbz x21,0x7102b4fa00
7102b4f9f0  mov x0,x21
7102b4f9f4  bl 0x7102b53c50
7102b4f9f8  mov x0,x21
7102b4f9fc  bl 0x710392eb40
7102b4fa00  mov w1,#0x88
7102b4fa04  mov w0,#0x10
7102b4fa08  bl 0x710392e290
7102b4fa0c  mov x19,x0
7102b4fa10  cbnz x0,0x7102b4fa5c
7102b4fa14  adrp x8,0x7105332000
7102b4fa18  ldr x0,[x8, #0xf00]
7102b4fa1c  cbz x0,0x7102b4fa58
7102b4fa20  mov w8,#0x88
7102b4fa24  str wzr,[sp, #0xd0]
7102b4fa28  add x1,sp,#0xd0
7102b4fa2c  str x8,[x25, #0x18]
7102b4fa30  ldr x8,[x0]
7102b4fa34  ldr x8,[x8, #0x30]
7102b4fa38  add x2,sp,#0x160
7102b4fa3c  blr x8
7102b4fa40  tbz w0,#0x0,0x7102b4fa58
7102b4fa44  mov w1,#0x88
7102b4fa48  mov w0,#0x10
7102b4fa4c  bl 0x710392e290
7102b4fa50  mov x19,x0
7102b4fa54  cbnz x0,0x7102b4fa5c
7102b4fa58  mov x19,xzr
7102b4fa5c  ldr x1,[x20, #0x9a8]
7102b4fa60  ldr x2,[sp, #0x58]
7102b4fa64  mov x0,x19
7102b4fa68  bl 0x7102b59c30
7102b4fa6c  ldr x21,[x20, #0x9c8]
7102b4fa70  str x19,[x20, #0x9c8]
7102b4fa74  cbz x21,0x7102b4fa88
7102b4fa78  mov x0,x21
7102b4fa7c  bl 0x7102b5ab80
7102b4fa80  mov x0,x21
7102b4fa84  bl 0x710392eb40
7102b4fa88  mov w1,#0xb0
7102b4fa8c  mov w0,#0x10
7102b4fa90  bl 0x710392e290
7102b4fa94  mov x19,x0
7102b4fa98  cbnz x0,0x7102b4fae4
7102b4fa9c  adrp x8,0x7105332000
7102b4faa0  ldr x0,[x8, #0xf00]
7102b4faa4  cbz x0,0x7102b4fae0
7102b4faa8  mov w8,#0xb0
7102b4faac  str wzr,[sp, #0xd0]
7102b4fab0  add x1,sp,#0xd0
7102b4fab4  str x8,[x25, #0x18]
7102b4fab8  ldr x8,[x0]
7102b4fabc  ldr x8,[x8, #0x30]
7102b4fac0  add x2,sp,#0x160
7102b4fac4  blr x8
7102b4fac8  tbz w0,#0x0,0x7102b4fae0
7102b4facc  mov w1,#0xb0
7102b4fad0  mov w0,#0x10
7102b4fad4  bl 0x710392e290
7102b4fad8  mov x19,x0
7102b4fadc  cbnz x0,0x7102b4fae4
7102b4fae0  mov x19,xzr
7102b4fae4  ldr x1,[x20, #0x9a8]
7102b4fae8  ldr x4,[x20, #0x9b0]
7102b4faec  mov x0,x19
7102b4faf0  ldr x2,[sp, #0xb0]
7102b4faf4  ldr x3,[sp, #0x58]
7102b4faf8  bl 0x7102b5b9e0
7102b4fafc  ldr x21,[x20, #0x9d0]
7102b4fb00  str x19,[x20, #0x9d0]
7102b4fb04  cbz x21,0x7102b4fb18
7102b4fb08  mov x0,x21
7102b4fb0c  bl 0x7102b5f1c0
7102b4fb10  mov x0,x21
7102b4fb14  bl 0x710392eb40
7102b4fb18  mov w0,#0x10
7102b4fb1c  mov w1,#0x40
7102b4fb20  bl 0x710392e290
7102b4fb24  mov x22,x0
7102b4fb28  cbnz x0,0x7102b4fb74
7102b4fb2c  adrp x8,0x7105332000
7102b4fb30  ldr x0,[x8, #0xf00]
7102b4fb34  cbz x0,0x7102b4fb70
7102b4fb38  mov w8,#0x40
7102b4fb3c  str wzr,[sp, #0xd0]
7102b4fb40  add x1,sp,#0xd0
7102b4fb44  str x8,[x25, #0x18]
7102b4fb48  ldr x8,[x0]
7102b4fb4c  ldr x8,[x8, #0x30]
7102b4fb50  add x2,sp,#0x160
7102b4fb54  blr x8
7102b4fb58  tbz w0,#0x0,0x7102b4fb70
7102b4fb5c  mov w0,#0x10
7102b4fb60  mov w1,#0x40
7102b4fb64  bl 0x710392e290
7102b4fb68  mov x22,x0
7102b4fb6c  cbnz x0,0x7102b4fb74
7102b4fb70  mov x22,xzr
7102b4fb74  ldr x8,[x20, #0x9a8]
7102b4fb78  ldr x9,[x20, #0x9b0]
7102b4fb7c  str x8,[x22]
7102b4fb80  ldr x8,[sp, #0x58]
7102b4fb84  str x8,[x22, #0x8]
7102b4fb88  mov x8,x22
7102b4fb8c  str xzr,[x8, #0x10]!
7102b4fb90  stp x8,x9,[sp, #0x90]
7102b4fb94  str xzr,[x22, #0x18]
7102b4fb98  stp xzr,xzr,[x22, #0x30]
7102b4fb9c  stp xzr,xzr,[x22, #0x20]
7102b4fba0  ldr x19,[sp, #0xb0]
7102b4fba4  ldr w20,[x19, #0x8]
7102b4fba8  cbz w20,0x7102b4fc60
7102b4fbac  ldr x23,[x19, #0x10]
7102b4fbb0  mov x21,xzr
7102b4fbb4  adrp x19,0x71042c2000
7102b4fbb8  add x19,x19,#0xf27
7102b4fbbc  add x0,x23,#0x48
7102b4fbc0  mov x1,x19
7102b4fbc4  bl 0x71039c0060
7102b4fbc8  cbz w0,0x7102b4fbe0
7102b4fbcc  add x21,x21,#0x1
7102b4fbd0  add x23,x23,#0x160
7102b4fbd4  cmp x21,x20
7102b4fbd8  b.cc 0x7102b4fbbc
7102b4fbdc  mov x23,xzr
7102b4fbe0  ldr x19,[sp, #0xb0]
7102b4fbe4  cbz w20,0x7102b4fc6c
7102b4fbe8  ldr x24,[x19, #0x10]
7102b4fbec  mov x21,xzr
7102b4fbf0  adrp x19,0x710425d000
7102b4fbf4  add x19,x19,#0x5ff
7102b4fbf8  add x0,x24,#0x48
7102b4fbfc  mov x1,x19
7102b4fc00  bl 0x71039c0060
7102b4fc04  cbz w0,0x7102b4fc1c
7102b4fc08  add x21,x21,#0x1
7102b4fc0c  add x24,x24,#0x160
7102b4fc10  cmp x21,x20
7102b4fc14  b.cc 0x7102b4fbf8
7102b4fc18  mov x24,xzr
7102b4fc1c  ldr x19,[sp, #0xb0]
7102b4fc20  cbz w20,0x7102b4fc70
7102b4fc24  ldr x26,[x19, #0x10]
7102b4fc28  mov x21,xzr
7102b4fc2c  adrp x19,0x7104317000
7102b4fc30  add x19,x19,#0x176
7102b4fc34  add x0,x26,#0x48
7102b4fc38  mov x1,x19
7102b4fc3c  bl 0x71039c0060
7102b4fc40  cbz w0,0x7102b4fc58
7102b4fc44  add x21,x21,#0x1
7102b4fc48  add x26,x26,#0x160
7102b4fc4c  cmp x21,x20
7102b4fc50  b.cc 0x7102b4fc34
7102b4fc54  mov x26,xzr
7102b4fc58  ldr x19,[sp, #0xb0]
7102b4fc5c  b 0x7102b4fc74
7102b4fc60  mov x24,xzr
7102b4fc64  mov x23,xzr
7102b4fc68  b 0x7102b4fc70
7102b4fc6c  mov x24,xzr
7102b4fc70  mov x26,xzr
7102b4fc74  ldr w20,[x19, #0x68]
7102b4fc78  str x24,[sp, #0x80]
7102b4fc7c  stur x22,[x29, #-0x58]
7102b4fc80  str x26,[sp, #0x68]
7102b4fc84  cbz w20,0x7102b4fcd0
7102b4fc88  ldr x22,[x19, #0x70]
7102b4fc8c  mov x21,xzr
7102b4fc90  adrp x19,0x7104317000
7102b4fc94  add x19,x19,#0x176
7102b4fc98  add x0,x22,#0x48
7102b4fc9c  bl 0x71039c0070
7102b4fca0  cmp x0,#0xd
7102b4fca4  b.cc 0x7102b4fcb8
7102b4fca8  add x0,x22,#0x55
7102b4fcac  mov x1,x19
7102b4fcb0  bl 0x71039c0060
7102b4fcb4  cbz w0,0x7102b4fcd8
7102b4fcb8  add x21,x21,#0x1
7102b4fcbc  add x22,x22,#0x130
7102b4fcc0  cmp x21,x20
7102b4fcc4  b.cc 0x7102b4fc98
7102b4fcc8  str xzr,[sp, #0x60]
7102b4fccc  b 0x7102b4fcdc
7102b4fcd0  str xzr,[sp, #0x60]
7102b4fcd4  b 0x7102b4fce0
7102b4fcd8  str x22,[sp, #0x60]
7102b4fcdc  ldr x19,[sp, #0xb0]
7102b4fce0  add x20,sp,#0x148
7102b4fce4  add x8,sp,#0x130
7102b4fce8  mov w28,#0x9dc5
7102b4fcec  movk w28,#0x811c, LSL #16
7102b4fcf0  stp xzr,x20,[sp, #0x140]
7102b4fcf4  stp x20,xzr,[x25, #0x8]
7102b4fcf8  stp x8,x8,[sp, #0x130]
7102b4fcfc  ldr w8,[x19, #0xf8]
7102b4fd00  cbz w8,0x7102b50834
7102b4fd04  add x8,sp,#0xd0
7102b4fd08  add x9,x8,#0x4c
7102b4fd0c  str x9,[sp, #0x8]
7102b4fd10  orr x9,x8,#0x4
7102b4fd14  str x9,[sp, #0x88]
7102b4fd18  add x9,x8,#0x48
7102b4fd1c  str x9,[sp, #0x78]
7102b4fd20  sub x9,x29,#0xb8
7102b4fd24  orr x9,x9,#0x4
7102b4fd28  str x9,[sp, #0xa0]
7102b4fd2c  sub x9,x29,#0xd0
7102b4fd30  orr x9,x9,#0x4
7102b4fd34  str x9,[sp, #0x18]
7102b4fd38  add x9,sp,#0x160
7102b4fd3c  orr x10,x9,#0x4
7102b4fd40  str x10,[sp, #0x50]
7102b4fd44  add x10,x8,#0x4d
7102b4fd48  add x8,x8,#0x8
7102b4fd4c  str x8,[sp, #0x30]
7102b4fd50  add x8,x9,#0x14
7102b4fd54  mov x24,xzr
7102b4fd58  mov w27,#0x140
7102b4fd5c  mov w22,#0x89
7102b4fd60  str x10,[sp, #0x10]
7102b4fd64  str x8,[sp]
7102b4fd68  add x8,x9,#0xc
7102b4fd6c  str x8,[sp, #0x20]
7102b4fd70  b 0x7102b507b0
7102b4fd74  stur wzr,[x29, #-0xb8]
7102b4fd78  sturb wzr,[x29, #-0xb4]
7102b4fd7c  ldrb w8,[x19]
7102b4fd80  cbz w8,0x7102b50814
7102b4fd84  add x21,x19,#0x1
7102b4fd88  mov x0,x21
7102b4fd8c  mov w1,#0x5f
7102b4fd90  bl 0x71039c0080
7102b4fd94  cbnz x0,0x7102b4fda4
7102b4fd98  mov x0,x21
7102b4fd9c  bl 0x71039c0070
7102b4fda0  add x0,x21,x0
7102b4fda4  subs x8,x0,x21
7102b4fda8  b.eq 0x7102b50814
7102b4fdac  cmp w8,#0x3f
7102b4fdb0  orr w9,wzr,#0x3f
7102b4fdb4  csel w9,w8,w9,cc
7102b4fdb8  cmp w9,#0x1
7102b4fdbc  b.lt 0x7102b4fde4
7102b4fdc0  ldr x11,[sp, #0xa0]
7102b4fdc4  mov x8,xzr
7102b4fdc8  ldrb w10,[x21, x8, LSL ]
7102b4fdcc  cbz w10,0x7102b4fde8
7102b4fdd0  strb w10,[x11, x8, LSL ]
7102b4fdd4  add x8,x8,#0x1
7102b4fdd8  cmp w8,w9
7102b4fddc  b.cc 0x7102b4fdc8
7102b4fde0  b 0x7102b4fde8
7102b4fde4  mov w8,wzr
7102b4fde8  sub x9,x29,#0xb8
7102b4fdec  add x9,x9,w8, UXTW 
7102b4fdf0  strb wzr,[x9, #0x4]
7102b4fdf4  stur w8,[x29, #-0xb8]
7102b4fdf8  stur wzr,[x29, #-0xd0]
7102b4fdfc  sturb wzr,[x29, #-0xcc]
7102b4fe00  ldrb w8,[x0]
7102b4fe04  ldr x19,[sp, #0xb0]
7102b4fe08  cbz w8,0x7102b50818
7102b4fe0c  add x21,x0,#0x1
7102b4fe10  mov x0,x21
7102b4fe14  mov w1,#0x5f
7102b4fe18  bl 0x71039c0080
7102b4fe1c  cbnz x0,0x7102b4fe2c
7102b4fe20  mov x0,x21
7102b4fe24  bl 0x71039c0070
7102b4fe28  add x0,x21,x0
7102b4fe2c  subs x8,x0,x21
7102b4fe30  b.eq 0x7102b50818
7102b4fe34  cmp w8,#0xf
7102b4fe38  orr w9,wzr,#0xf
7102b4fe3c  csel w8,w8,w9,cc
7102b4fe40  cmp w8,#0x1
7102b4fe44  b.lt 0x7102b4fe7c
7102b4fe48  ldr x14,[sp, #0xa0]
7102b4fe4c  ldr x11,[sp, #0x18]
7102b4fe50  mov x9,xzr
7102b4fe54  ldr x16,[sp, #0x50]
7102b4fe58  add x13,sp,#0xd0
7102b4fe5c  add x15,sp,#0x160
7102b4fe60  ldrb w10,[x21, x9, LSL ]
7102b4fe64  cbz w10,0x7102b4fe90
7102b4fe68  strb w10,[x11, x9, LSL ]
7102b4fe6c  add x9,x9,#0x1
7102b4fe70  cmp w9,w8
7102b4fe74  b.cc 0x7102b4fe60
7102b4fe78  b 0x7102b4fe90
7102b4fe7c  ldr x14,[sp, #0xa0]
7102b4fe80  ldr x16,[sp, #0x50]
7102b4fe84  mov w9,wzr
7102b4fe88  add x13,sp,#0xd0
7102b4fe8c  add x15,sp,#0x160
7102b4fe90  sub x10,x29,#0xd0
7102b4fe94  add x10,x10,w9, UXTW 
7102b4fe98  mov x8,xzr
7102b4fe9c  strb wzr,[x10, #0x4]
7102b4fea0  stur w9,[x29, #-0xd0]
7102b4fea4  b 0x7102b4feb0
7102b4fea8  add x8,x8,#0x2
7102b4feac  strb w9,[x10, #0x5]
7102b4feb0  add x9,x14,x8
7102b4feb4  ldrb w11,[x9]
7102b4feb8  cbz w11,0x7102b4fee4
7102b4febc  add w12,w8,#0x1
7102b4fec0  add x10,x15,x8
7102b4fec4  cmp w12,#0x3f
7102b4fec8  strb w11,[x10, #0x4]
7102b4fecc  b.cs 0x7102b4fee0
7102b4fed0  ldrb w9,[x9, #0x1]
7102b4fed4  cbnz w9,0x7102b4fea8
7102b4fed8  add x8,x8,#0x1
7102b4fedc  b 0x7102b4fee4
7102b4fee0  add w8,w8,#0x1
7102b4fee4  add x9,x15,w8, UXTW 
7102b4fee8  strb wzr,[x9, #0x4]
7102b4feec  str w8,[sp, #0x160]
7102b4fef0  ldurb w8,[x29, #-0xcc]
7102b4fef4  cbz w8,0x7102b4ffac
7102b4fef8  strb w8,[sp, #0x1a8]
7102b4fefc  ldurb w8,[x29, #-0xcb]
7102b4ff00  cbz w8,0x7102b4ffb4
7102b4ff04  strb w8,[sp, #0x1a9]
7102b4ff08  ldurb w8,[x29, #-0xca]
7102b4ff0c  cbz w8,0x7102b4ffbc
7102b4ff10  strb w8,[sp, #0x1aa]
7102b4ff14  ldurb w8,[x29, #-0xc9]
7102b4ff18  cbz w8,0x7102b4ffc4
7102b4ff1c  strb w8,[sp, #0x1ab]
7102b4ff20  ldurb w8,[x29, #-0xc8]
7102b4ff24  cbz w8,0x7102b4ffcc
7102b4ff28  strb w8,[sp, #0x1ac]
7102b4ff2c  ldurb w8,[x29, #-0xc7]
7102b4ff30  cbz w8,0x7102b4ffd4
7102b4ff34  strb w8,[sp, #0x1ad]
7102b4ff38  ldurb w8,[x29, #-0xc6]
7102b4ff3c  cbz w8,0x7102b4ffdc
7102b4ff40  strb w8,[sp, #0x1ae]
7102b4ff44  ldurb w8,[x29, #-0xc5]
7102b4ff48  cbz w8,0x7102b4ffe4
7102b4ff4c  strb w8,[sp, #0x1af]
7102b4ff50  ldurb w8,[x29, #-0xc4]
7102b4ff54  cbz w8,0x7102b4ffec
7102b4ff58  strb w8,[sp, #0x1b0]
7102b4ff5c  ldurb w8,[x29, #-0xc3]
7102b4ff60  cbz w8,0x7102b4fff4
7102b4ff64  strb w8,[sp, #0x1b1]
7102b4ff68  ldurb w8,[x29, #-0xc2]
7102b4ff6c  cbz w8,0x7102b50000
7102b4ff70  strb w8,[sp, #0x1b2]
7102b4ff74  ldurb w8,[x29, #-0xc1]
7102b4ff78  cbz w8,0x7102b5000c
7102b4ff7c  strb w8,[sp, #0x1b3]
7102b4ff80  ldurb w8,[x29, #-0xc0]
7102b4ff84  cbz w8,0x7102b50018
7102b4ff88  strb w8,[sp, #0x1b4]
7102b4ff8c  ldurb w8,[x29, #-0xbf]
7102b4ff90  cbz w8,0x7102b50020
7102b4ff94  strb w8,[sp, #0x1b5]
7102b4ff98  ldurb w8,[x29, #-0xbe]
7102b4ff9c  cbz w8,0x7102b5002c
7102b4ffa0  orr w9,wzr,#0xf
7102b4ffa4  strb w8,[sp, #0x1b6]
7102b4ffa8  b 0x7102b50030
7102b4ffac  mov w9,wzr
7102b4ffb0  b 0x7102b50030
7102b4ffb4  mov w9,#0x1
7102b4ffb8  b 0x7102b50030
7102b4ffbc  mov w9,#0x2
7102b4ffc0  b 0x7102b50030
7102b4ffc4  orr w9,wzr,#0x3
7102b4ffc8  b 0x7102b50030
7102b4ffcc  mov w9,#0x4
7102b4ffd0  b 0x7102b50030
7102b4ffd4  mov w9,#0x5
7102b4ffd8  b 0x7102b50030
7102b4ffdc  orr w9,wzr,#0x6
7102b4ffe0  b 0x7102b50030
7102b4ffe4  orr w9,wzr,#0x7
7102b4ffe8  b 0x7102b50030
7102b4ffec  mov w9,#0x8
7102b4fff0  b 0x7102b50030
7102b4fff4  mov w8,#0x9
7102b4fff8  mov w9,w8
7102b4fffc  b 0x7102b50030
7102b50000  mov w8,#0xa
7102b50004  mov w9,w8
7102b50008  b 0x7102b50030
7102b5000c  mov w8,#0xb
7102b50010  mov w9,w8
7102b50014  b 0x7102b50030
7102b50018  orr w9,wzr,#0xc
7102b5001c  b 0x7102b50030
7102b50020  mov w8,#0xd
7102b50024  mov w9,w8
7102b50028  b 0x7102b50030
7102b5002c  orr w9,wzr,#0xe
7102b50030  add x10,x15,#0x44
7102b50034  mov x8,xzr
7102b50038  strb wzr,[sp, #0xd0]
7102b5003c  add x10,x10,x9
7102b50040  strb wzr,[x10, #0x4]
7102b50044  str w9,[sp, #0x1a4]
7102b50048  b 0x7102b50054
7102b5004c  add x8,x8,#0x2
7102b50050  strb w9,[x10, #0x9]
7102b50054  add x9,x16,x8
7102b50058  ldrb w11,[x9]
7102b5005c  cbz w11,0x7102b50088
7102b50060  add w12,w8,#0x1
7102b50064  add x10,x13,x8
7102b50068  cmp w12,#0x3f
7102b5006c  strb w11,[x10, #0x8]
7102b50070  b.cs 0x7102b50084
7102b50074  ldrb w9,[x9, #0x1]
7102b50078  cbnz w9,0x7102b5004c
7102b5007c  add x8,x8,#0x1
7102b50080  b 0x7102b50088
7102b50084  add w8,w8,#0x1
7102b50088  ldr x9,[sp, #0x88]
7102b5008c  add x9,x9,w8, UXTW 
7102b50090  strb wzr,[x9, #0x4]
7102b50094  str w8,[sp, #0xd4]
7102b50098  ldrb w8,[sp, #0x1a8]
7102b5009c  cbz w8,0x7102b50158
7102b500a0  strb w8,[sp, #0x11c]
7102b500a4  ldrb w8,[sp, #0x1a9]
7102b500a8  cbz w8,0x7102b50160
7102b500ac  strb w8,[sp, #0x11d]
7102b500b0  ldrb w8,[sp, #0x1aa]
7102b500b4  cbz w8,0x7102b5016c
7102b500b8  strb w8,[sp, #0x11e]
7102b500bc  ldrb w8,[sp, #0x1ab]
7102b500c0  cbz w8,0x7102b50178
7102b500c4  strb w8,[sp, #0x11f]
7102b500c8  ldrb w8,[sp, #0x1ac]
7102b500cc  cbz w8,0x7102b50184
7102b500d0  strb w8,[sp, #0x120]
7102b500d4  ldrb w8,[sp, #0x1ad]
7102b500d8  cbz w8,0x7102b50190
7102b500dc  strb w8,[sp, #0x121]
7102b500e0  ldrb w8,[sp, #0x1ae]
7102b500e4  cbz w8,0x7102b5019c
7102b500e8  strb w8,[sp, #0x122]
7102b500ec  ldrb w8,[sp, #0x1af]
7102b500f0  cbz w8,0x7102b501a8
7102b500f4  strb w8,[sp, #0x123]
7102b500f8  ldrb w8,[sp, #0x1b0]
7102b500fc  cbz w8,0x7102b501b4
7102b50100  strb w8,[sp, #0x124]
7102b50104  ldrb w8,[sp, #0x1b1]
7102b50108  cbz w8,0x7102b501c0
7102b5010c  strb w8,[sp, #0x125]
7102b50110  ldrb w8,[sp, #0x1b2]
7102b50114  cbz w8,0x7102b501c8
7102b50118  strb w8,[sp, #0x126]
7102b5011c  ldrb w8,[sp, #0x1b3]
7102b50120  cbz w8,0x7102b501d0
7102b50124  strb w8,[sp, #0x127]
7102b50128  ldrb w8,[sp, #0x1b4]
7102b5012c  cbz w8,0x7102b50558
7102b50130  strb w8,[sp, #0x128]
7102b50134  ldrb w8,[sp, #0x1b5]
7102b50138  add x21,sp,#0x160
7102b5013c  cbz w8,0x7102b5056c
7102b50140  strb w8,[sp, #0x129]
7102b50144  ldrb w8,[sp, #0x1b6]
7102b50148  cbz w8,0x7102b5057c
7102b5014c  strb w8,[sp, #0x12a]
7102b50150  orr w8,wzr,#0xf
7102b50154  b 0x7102b501d8
7102b50158  add x21,sp,#0x160
7102b5015c  b 0x7102b501d8
7102b50160  add x21,sp,#0x160
7102b50164  mov w8,#0x1
7102b50168  b 0x7102b501d8
7102b5016c  add x21,sp,#0x160
7102b50170  mov w8,#0x2
7102b50174  b 0x7102b501d8
7102b50178  add x21,sp,#0x160
7102b5017c  orr w8,wzr,#0x3
7102b50180  b 0x7102b501d8
7102b50184  add x21,sp,#0x160
7102b50188  mov w8,#0x4
7102b5018c  b 0x7102b501d8
7102b50190  mov w8,#0x5
7102b50194  add x21,sp,#0x160
7102b50198  b 0x7102b501d8
7102b5019c  add x21,sp,#0x160
7102b501a0  orr w8,wzr,#0x6
7102b501a4  b 0x7102b501d8
7102b501a8  add x21,sp,#0x160
7102b501ac  orr w8,wzr,#0x7
7102b501b0  b 0x7102b501d8
7102b501b4  add x21,sp,#0x160
7102b501b8  mov w8,#0x8
7102b501bc  b 0x7102b501d8
7102b501c0  mov w8,#0x9
7102b501c4  b 0x7102b501d4
7102b501c8  mov w8,#0xa
7102b501cc  b 0x7102b501d4
7102b501d0  mov w8,#0xb
7102b501d4  add x21,sp,#0x160
7102b501d8  ldr x9,[sp, #0x78]
7102b501dc  add x9,x9,x8
7102b501e0  strb wzr,[x9, #0x4]
7102b501e4  ldrb w19,[sp, #0x11c]
7102b501e8  str w8,[sp, #0x118]
7102b501ec  mov w8,#0x1
7102b501f0  strb w8,[sp, #0xd0]
7102b501f4  cbz w19,0x7102b50244
7102b501f8  ldr x8,[sp, #0x10]
7102b501fc  mov w10,w19
7102b50200  mov w9,#0x9dc5
7102b50204  movk w9,#0x811c, LSL #16
7102b50208  mov w11,w22
7102b5020c  mul w9,w9,w11
7102b50210  and w10,w10,#0xff
7102b50214  eor w9,w9,w10
7102b50218  ldrb w10,[x8], #0x1
7102b5021c  cbnz w10,0x7102b5020c
7102b50220  mov w8,#0x69d9
7102b50224  movk w8,#0x160d, LSL #16
7102b50228  cmp w9,w8
7102b5022c  b.ne 0x7102b50244
7102b50230  ldr x0,[sp, #0x8]
7102b50234  adrp x1,0x710425d000
7102b50238  add x1,x1,#0x5fa
7102b5023c  bl 0x71039c0060
7102b50240  cbz w0,0x7102b50388
7102b50244  ldr x12,[sp, #0x30]
7102b50248  ldr x26,[sp, #0x20]
7102b5024c  mov x8,xzr
7102b50250  str x28,[x25, #0x18]
7102b50254  add x9,x12,x8
7102b50258  ldrb w10,[x9]
7102b5025c  cbz w10,0x7102b5029c
7102b50260  ldrb w11,[x9, #0x1]
7102b50264  strb w10,[x26, x8, LSL ]
7102b50268  cbz w11,0x7102b50290
7102b5026c  ldrb w9,[x9, #0x2]
7102b50270  add x10,x26,x8
7102b50274  strb w11,[x10, #0x1]
7102b50278  cbz w9,0x7102b50298
7102b5027c  add x8,x8,#0x3
7102b50280  cmp w8,#0x3f
7102b50284  strb w9,[x10, #0x2]
7102b50288  b.cc 0x7102b50254
7102b5028c  b 0x7102b5029c
7102b50290  add x8,x8,#0x1
7102b50294  b 0x7102b5029c
7102b50298  add x8,x8,#0x2
7102b5029c  add x9,x21,#0x8
7102b502a0  add x9,x9,w8, UXTW 
7102b502a4  strb wzr,[x9, #0x4]
7102b502a8  str w8,[sp, #0x168]
7102b502ac  cbz w19,0x7102b50368
7102b502b0  ldrb w8,[sp, #0x11d]
7102b502b4  strb w19,[sp, #0x1b0]
7102b502b8  cbz w8,0x7102b50374
7102b502bc  strb w8,[sp, #0x1b1]
7102b502c0  ldrb w8,[sp, #0x11e]
7102b502c4  ldr x19,[sp, #0xb0]
7102b502c8  cbz w8,0x7102b50380
7102b502cc  strb w8,[sp, #0x1b2]
7102b502d0  ldrb w8,[sp, #0x11f]
7102b502d4  cbz w8,0x7102b50408
7102b502d8  strb w8,[sp, #0x1b3]
7102b502dc  ldrb w8,[sp, #0x120]
7102b502e0  cbz w8,0x7102b50410
7102b502e4  strb w8,[sp, #0x1b4]
7102b502e8  ldrb w8,[sp, #0x121]
7102b502ec  cbz w8,0x7102b50418
7102b502f0  strb w8,[sp, #0x1b5]
7102b502f4  ldrb w8,[sp, #0x122]
7102b502f8  cbz w8,0x7102b50420
7102b502fc  strb w8,[sp, #0x1b6]
7102b50300  ldrb w8,[sp, #0x123]
7102b50304  cbz w8,0x7102b50530
7102b50308  strb w8,[sp, #0x1b7]
7102b5030c  ldrb w8,[sp, #0x124]
7102b50310  cbz w8,0x7102b50538
7102b50314  strb w8,[sp, #0x1b8]
7102b50318  ldrb w8,[sp, #0x125]
7102b5031c  cbz w8,0x7102b50540
7102b50320  strb w8,[sp, #0x1b9]
7102b50324  ldrb w8,[sp, #0x126]
7102b50328  cbz w8,0x7102b50548
7102b5032c  strb w8,[sp, #0x1ba]
7102b50330  ldrb w8,[sp, #0x127]
7102b50334  cbz w8,0x7102b50550
7102b50338  strb w8,[sp, #0x1bb]
7102b5033c  ldrb w8,[sp, #0x128]
7102b50340  cbz w8,0x7102b50564
7102b50344  strb w8,[sp, #0x1bc]
7102b50348  ldrb w8,[sp, #0x129]
7102b5034c  cbz w8,0x7102b50574
7102b50350  strb w8,[sp, #0x1bd]
7102b50354  ldrb w8,[sp, #0x12a]
7102b50358  cbz w8,0x7102b50584
7102b5035c  strb w8,[sp, #0x1be]
7102b50360  orr w8,wzr,#0xf
7102b50364  b 0x7102b50588
7102b50368  ldr x19,[sp, #0xb0]
7102b5036c  mov w8,wzr
7102b50370  b 0x7102b50588
7102b50374  ldr x19,[sp, #0xb0]
7102b50378  mov w8,#0x1
7102b5037c  b 0x7102b50588
7102b50380  mov w8,#0x2
7102b50384  b 0x7102b50588
7102b50388  madd x8,x24,x27,x26
7102b5038c  ldr w8,[x8, #0x108]
7102b50390  ldr x19,[sp, #0xb0]
7102b50394  mov w28,#0x9dc5
7102b50398  movk w28,#0x811c, LSL #16
7102b5039c  cmp w8,#0x1
7102b503a0  b.ne 0x7102b507a8
7102b503a4  madd x9,x24,x27,x26
7102b503a8  movi v0.2D,#0x0
7102b503ac  add x10,x9,#0x10c
7102b503b0  add x9,x9,#0x110
7102b503b4  ld1 {v0.S}[0],[x10]
7102b503b8  ld1 {v0.S}[1],[x9]
7102b503bc  ldr x12,[sp, #0x30]
7102b503c0  ldr x26,[sp]
7102b503c4  mov x8,xzr
7102b503c8  stur q0,[x25, #0x18]
7102b503cc  add x9,x12,x8
7102b503d0  ldrb w11,[x9]
7102b503d4  cbz w11,0x7102b50434
7102b503d8  add x10,x21,x8
7102b503dc  strb w11,[x10, #0x14]
7102b503e0  ldrb w11,[x9, #0x1]
7102b503e4  cbz w11,0x7102b50428
7102b503e8  ldrb w9,[x9, #0x2]
7102b503ec  strb w11,[x10, #0x15]
7102b503f0  cbz w9,0x7102b50430
7102b503f4  add x8,x8,#0x3
7102b503f8  cmp w8,#0x3f
7102b503fc  strb w9,[x10, #0x16]
7102b50400  b.cc 0x7102b503cc
7102b50404  b 0x7102b50434
7102b50408  orr w8,wzr,#0x3
7102b5040c  b 0x7102b50588
7102b50410  mov w8,#0x4
7102b50414  b 0x7102b50588
7102b50418  mov w8,#0x5
7102b5041c  b 0x7102b50588
7102b50420  orr w8,wzr,#0x6
7102b50424  b 0x7102b50588
7102b50428  add x8,x8,#0x1
7102b5042c  b 0x7102b50434
7102b50430  add x8,x8,#0x2
7102b50434  add x9,x21,#0x10
7102b50438  add x9,x9,w8, UXTW 
7102b5043c  mov w0,#0x10
7102b50440  orr w1,wzr,#0x70
7102b50444  strb wzr,[x9, #0x4]
7102b50448  str w8,[sp, #0x170]
7102b5044c  bl 0x710392e290
7102b50450  cbnz x0,0x7102b50498
7102b50454  adrp x8,0x7105332000
7102b50458  ldr x0,[x8, #0xf00]
7102b5045c  cbz x0,0x7102b50494
7102b50460  orr w8,wzr,#0x70
7102b50464  stur wzr,[x29, #-0xd0]
7102b50468  sub x1,x29,#0xd0
7102b5046c  str x8,[x25, #0x90]
7102b50470  ldr x8,[x0]
7102b50474  ldr x8,[x8, #0x30]
7102b50478  sub x2,x29,#0xb8
7102b5047c  blr x8
7102b50480  tbz w0,#0x0,0x7102b50494
7102b50484  mov w0,#0x10
7102b50488  orr w1,wzr,#0x70
7102b5048c  bl 0x710392e290
7102b50490  cbnz x0,0x7102b50498
7102b50494  mov x0,xzr
7102b50498  str xzr,[x0]
7102b5049c  ldr x10,[x25, #0x20]
7102b504a0  str x10,[x0, #0x18]
7102b504a4  ldr x10,[x25, #0x18]
7102b504a8  mov x8,xzr
7102b504ac  add x9,x0,#0x10
7102b504b0  str x10,[x0, #0x10]
7102b504b4  add x10,x26,x8
7102b504b8  ldrb w12,[x10]
7102b504bc  cbz w12,0x7102b504fc
7102b504c0  add x11,x0,x8
7102b504c4  strb w12,[x11, #0x24]
7102b504c8  ldrb w12,[x10, #0x1]
7102b504cc  cbz w12,0x7102b504f0
7102b504d0  strb w12,[x11, #0x25]
7102b504d4  ldrb w10,[x10, #0x2]
7102b504d8  cbz w10,0x7102b504f8
7102b504dc  add x8,x8,#0x3
7102b504e0  cmp w8,#0x3f
7102b504e4  strb w10,[x11, #0x26]
7102b504e8  b.cc 0x7102b504b4
7102b504ec  b 0x7102b504fc
7102b504f0  add x8,x8,#0x1
7102b504f4  b 0x7102b504fc
7102b504f8  add x8,x8,#0x2
7102b504fc  add x9,x9,w8, UXTW 
7102b50500  strb wzr,[x9, #0x14]
7102b50504  str w8,[x0, #0x20]
7102b50508  add x8,sp,#0x130
7102b5050c  str x8,[x0, #0x8]
7102b50510  ldr x8,[sp, #0x130]
7102b50514  str x8,[x0]
7102b50518  str x0,[x8, #0x8]
7102b5051c  ldr x8,[sp, #0x140]
7102b50520  add x8,x8,#0x1
7102b50524  str x0,[sp, #0x130]
7102b50528  str x8,[sp, #0x140]
7102b5052c  b 0x7102b507a8
7102b50530  orr w8,wzr,#0x7
7102b50534  b 0x7102b50588
7102b50538  mov w8,#0x8
7102b5053c  b 0x7102b50588
7102b50540  mov w8,#0x9
7102b50544  b 0x7102b50588
7102b50548  mov w8,#0xa
7102b5054c  b 0x7102b50588
7102b50550  mov w8,#0xb
7102b50554  b 0x7102b50588
7102b50558  add x21,sp,#0x160
7102b5055c  orr w8,wzr,#0xc
7102b50560  b 0x7102b501d8
7102b50564  orr w8,wzr,#0xc
7102b50568  b 0x7102b50588
7102b5056c  mov w8,#0xd
7102b50570  b 0x7102b501d8
7102b50574  mov w8,#0xd
7102b50578  b 0x7102b50588
7102b5057c  orr w8,wzr,#0xe
7102b50580  b 0x7102b501d8
7102b50584  orr w8,wzr,#0xe
7102b50588  add x9,x21,x8
7102b5058c  mov w0,#0x10
7102b50590  orr w1,wzr,#0x70
7102b50594  strb wzr,[x9, #0x50]
7102b50598  str w8,[sp, #0x1ac]
7102b5059c  bl 0x710392e290
7102b505a0  cbnz x0,0x7102b505e8
7102b505a4  adrp x8,0x7105332000
7102b505a8  ldr x0,[x8, #0xf00]
7102b505ac  cbz x0,0x7102b505e4
7102b505b0  orr w8,wzr,#0x70
7102b505b4  stur wzr,[x29, #-0xd0]
7102b505b8  sub x1,x29,#0xd0
7102b505bc  str x8,[x25, #0x90]
7102b505c0  ldr x8,[x0]
7102b505c4  ldr x8,[x8, #0x30]
7102b505c8  sub x2,x29,#0xb8
7102b505cc  blr x8
7102b505d0  tbz w0,#0x0,0x7102b505e4
7102b505d4  mov w0,#0x10
7102b505d8  orr w1,wzr,#0x70
7102b505dc  bl 0x710392e290
7102b505e0  cbnz x0,0x7102b505e8
7102b505e4  mov x0,xzr
7102b505e8  mov x9,x0
7102b505ec  mov x8,xzr
7102b505f0  str xzr,[x0]
7102b505f4  str x28,[x9, #0x10]!
7102b505f8  mov w28,#0x9dc5
7102b505fc  movk w28,#0x811c, LSL #16
7102b50600  add x10,x26,x8
7102b50604  ldrb w12,[x10]
7102b50608  cbz w12,0x7102b50648
7102b5060c  add x11,x0,x8
7102b50610  strb w12,[x11, #0x1c]
7102b50614  ldrb w12,[x10, #0x1]
7102b50618  cbz w12,0x7102b5063c
7102b5061c  strb w12,[x11, #0x1d]
7102b50620  ldrb w10,[x10, #0x2]
7102b50624  cbz w10,0x7102b50644
7102b50628  add x8,x8,#0x3
7102b5062c  cmp w8,#0x3f
7102b50630  strb w10,[x11, #0x1e]
7102b50634  b.cc 0x7102b50600
7102b50638  b 0x7102b50648
7102b5063c  add x8,x8,#0x1
7102b50640  b 0x7102b50648
7102b50644  add x8,x8,#0x2
7102b50648  add x9,x9,w8, UXTW 
7102b5064c  strb wzr,[x9, #0xc]
7102b50650  str w8,[x0, #0x18]
7102b50654  ldrb w9,[sp, #0x1b0]
7102b50658  add x8,x0,#0x5c
7102b5065c  cbz w9,0x7102b50780
7102b50660  strb w9,[x0, #0x60]
7102b50664  ldrb w9,[sp, #0x1b1]
7102b50668  cbz w9,0x7102b50714
7102b5066c  strb w9,[x0, #0x61]
7102b50670  ldrb w9,[sp, #0x1b2]
7102b50674  cbz w9,0x7102b5071c
7102b50678  strb w9,[x0, #0x62]
7102b5067c  ldrb w9,[sp, #0x1b3]
7102b50680  cbz w9,0x7102b50724
7102b50684  strb w9,[x0, #0x63]
7102b50688  ldrb w9,[sp, #0x1b4]
7102b5068c  cbz w9,0x7102b5072c
7102b50690  strb w9,[x0, #0x64]
7102b50694  ldrb w9,[sp, #0x1b5]
7102b50698  cbz w9,0x7102b50734
7102b5069c  strb w9,[x0, #0x65]
7102b506a0  ldrb w9,[sp, #0x1b6]
7102b506a4  cbz w9,0x7102b5073c
7102b506a8  strb w9,[x0, #0x66]
7102b506ac  ldrb w9,[sp, #0x1b7]
7102b506b0  cbz w9,0x7102b50744
7102b506b4  strb w9,[x0, #0x67]
7102b506b8  ldrb w9,[sp, #0x1b8]
7102b506bc  cbz w9,0x7102b5074c
7102b506c0  strb w9,[x0, #0x68]
7102b506c4  ldrb w9,[sp, #0x1b9]
7102b506c8  cbz w9,0x7102b50754
7102b506cc  strb w9,[x0, #0x69]
7102b506d0  ldrb w9,[sp, #0x1ba]
7102b506d4  cbz w9,0x7102b5075c
7102b506d8  strb w9,[x0, #0x6a]
7102b506dc  ldrb w9,[sp, #0x1bb]
7102b506e0  cbz w9,0x7102b50764
7102b506e4  strb w9,[x0, #0x6b]
7102b506e8  ldrb w9,[sp, #0x1bc]
7102b506ec  cbz w9,0x7102b5076c
7102b506f0  strb w9,[x0, #0x6c]
7102b506f4  ldrb w9,[sp, #0x1bd]
7102b506f8  cbz w9,0x7102b50774
7102b506fc  strb w9,[x0, #0x6d]
7102b50700  ldrb w9,[sp, #0x1be]
7102b50704  cbz w9,0x7102b5077c
7102b50708  strb w9,[x0, #0x6e]
7102b5070c  orr w9,wzr,#0xf
7102b50710  b 0x7102b50780
7102b50714  mov w9,#0x1
7102b50718  b 0x7102b50780
7102b5071c  mov w9,#0x2
7102b50720  b 0x7102b50780
7102b50724  orr w9,wzr,#0x3
7102b50728  b 0x7102b50780
7102b5072c  mov w9,#0x4
7102b50730  b 0x7102b50780
7102b50734  mov w9,#0x5
7102b50738  b 0x7102b50780
7102b5073c  orr w9,wzr,#0x6
7102b50740  b 0x7102b50780
7102b50744  orr w9,wzr,#0x7
7102b50748  b 0x7102b50780
7102b5074c  mov w9,#0x8
7102b50750  b 0x7102b50780
7102b50754  mov w9,#0x9
7102b50758  b 0x7102b50780
7102b5075c  mov w9,#0xa
7102b50760  b 0x7102b50780
7102b50764  mov w9,#0xb
7102b50768  b 0x7102b50780
7102b5076c  orr w9,wzr,#0xc
7102b50770  b 0x7102b50780
7102b50774  mov w9,#0xd
7102b50778  b 0x7102b50780
7102b5077c  orr w9,wzr,#0xe
7102b50780  add x8,x8,x9
7102b50784  strb wzr,[x8, #0x4]
7102b50788  str w9,[x0, #0x5c]
7102b5078c  ldr x8,[sp, #0x148]
7102b50790  stp x8,x20,[x0]
7102b50794  str x0,[x8, #0x8]
7102b50798  str x0,[sp, #0x148]
7102b5079c  ldr x8,[x25, #0x10]
7102b507a0  add x8,x8,#0x1
7102b507a4  str x8,[x25, #0x10]
7102b507a8  strb wzr,[sp, #0xd0]
7102b507ac  b 0x7102b50824
7102b507b0  ldr x26,[x19, #0x100]
7102b507b4  madd x28,x24,x27,x26
7102b507b8  add x0,x28,#0x48
7102b507bc  bl 0x71039c0070
7102b507c0  cmp x0,#0xc
7102b507c4  b.ls 0x7102b50818
7102b507c8  madd x8,x24,x27,x26
7102b507cc  add x21,x8,#0x55
7102b507d0  mov x0,x21
7102b507d4  mov w1,#0x5f
7102b507d8  bl 0x71039c0080
7102b507dc  mov x19,x0
7102b507e0  cbnz x0,0x7102b507f0
7102b507e4  mov x0,x21
7102b507e8  bl 0x71039c0070
7102b507ec  add x19,x21,x0
7102b507f0  sub x8,x19,x21
7102b507f4  cmp x8,#0x5
7102b507f8  b.ne 0x7102b50814
7102b507fc  mov x0,x21
7102b50800  adrp x1,0x71043de000
7102b50804  add x1,x1,#0x24f
7102b50808  mov w2,#0x5
7102b5080c  bl 0x71039c00c0
7102b50810  cbz w0,0x7102b4fd74
7102b50814  ldr x19,[sp, #0xb0]
7102b50818  strb wzr,[sp, #0xd0]
7102b5081c  mov w28,#0x9dc5
7102b50820  movk w28,#0x811c, LSL #16
7102b50824  ldr w8,[x19, #0xf8]
7102b50828  add x24,x24,#0x1
7102b5082c  cmp x24,x8
7102b50830  b.cc 0x7102b507b0
7102b50834  ldr w8,[x19, #0x8]
7102b50838  ldur x27,[x29, #-0x58]
7102b5083c  str x23,[sp, #0x78]
7102b50840  cbz w8,0x7102b50b44
7102b50844  add x8,sp,#0x160
7102b50848  mov x20,xzr
7102b5084c  add x25,x8,#0x9
7102b50850  add x21,x8,#0x8
7102b50854  add x23,sp,#0x130
7102b50858  mov w22,#0x89
7102b5085c  b 0x7102b5086c
7102b50860  mov x8,xzr
7102b50864  mov x19,xzr
7102b50868  b 0x7102b50ae4
7102b5086c  ldr x8,[x19, #0x10]
7102b50870  mov w9,#0x160
7102b50874  madd x19,x20,x9,x8
7102b50878  add x1,x19,#0x48
7102b5087c  add x0,sp,#0x160
7102b50880  bl 0x7102b69300
7102b50884  ldrb w8,[sp, #0x160]
7102b50888  cbz w8,0x7102b50b30
7102b5088c  ldr x24,[sp, #0x138]
7102b50890  cmp x23,x24
7102b50894  b.eq 0x7102b50910
7102b50898  ldrb w26,[sp, #0x168]
7102b5089c  mov x0,x24
7102b508a0  ldrb w9,[x0, #0x24]!
7102b508a4  mov w8,w28
7102b508a8  cbz w9,0x7102b508c8
7102b508ac  add x10,x24,#0x25
7102b508b0  mov w8,w28
7102b508b4  mul w8,w8,w22
7102b508b8  and w9,w9,#0xff
7102b508bc  eor w8,w8,w9
7102b508c0  ldrb w9,[x10], #0x1
7102b508c4  cbnz w9,0x7102b508b4
7102b508c8  mov w9,w28
7102b508cc  cbz w26,0x7102b508f0
7102b508d0  mov x10,x25
7102b508d4  mov w11,w26
7102b508d8  mov w9,w28
7102b508dc  mul w9,w9,w22
7102b508e0  and w11,w11,#0xff
7102b508e4  eor w9,w9,w11
7102b508e8  ldrb w11,[x10], #0x1
7102b508ec  cbnz w11,0x7102b508dc
7102b508f0  cmp w8,w9
7102b508f4  b.ne 0x7102b50904
7102b508f8  mov x1,x21
7102b508fc  bl 0x71039c0060
7102b50900  cbz w0,0x7102b5091c
7102b50904  ldr x24,[x24, #0x8]
7102b50908  cmp x23,x24
7102b5090c  b.ne 0x7102b5089c
7102b50910  adrp x8,0x71052a8000
7102b50914  ldr x8,[x8, #0xa80]
7102b50918  b 0x7102b50920
7102b5091c  add x8,x24,#0x10
7102b50920  ldr q0,[x8]
7102b50924  mov w0,#0x10
7102b50928  orr w1,wzr,#0x70
7102b5092c  str q0,[sp, #0xa0]
7102b50930  bl 0x710392e290
7102b50934  mov x26,x0
7102b50938  cbnz x0,0x7102b50984
7102b5093c  adrp x8,0x7105332000
7102b50940  ldr x0,[x8, #0xf00]
7102b50944  cbz x0,0x7102b50980
7102b50948  orr w8,wzr,#0x70
7102b5094c  stur wzr,[x29, #-0xb8]
7102b50950  sub x1,x29,#0xb8
7102b50954  str x8,[sp, #0xd0]
7102b50958  ldr x8,[x0]
7102b5095c  ldr x8,[x8, #0x30]
7102b50960  add x2,sp,#0xd0
7102b50964  blr x8
7102b50968  tbz w0,#0x0,0x7102b50980
7102b5096c  mov w0,#0x10
7102b50970  orr w1,wzr,#0x70
7102b50974  bl 0x710392e290
7102b50978  mov x26,x0
7102b5097c  cbnz x0,0x7102b50984
7102b50980  mov x26,xzr
7102b50984  ldr x9,[x27]
7102b50988  mov x8,xzr
7102b5098c  adrp x10,0x7105117000
7102b50990  add x10,x10,#0x6a8
7102b50994  str x10,[x26]
7102b50998  str wzr,[x26, #0x8]
7102b5099c  b 0x7102b509a8
7102b509a0  add x8,x8,#0x2
7102b509a4  strb w10,[x11, #0x11]
7102b509a8  add x10,x21,x8
7102b509ac  ldrb w12,[x10]
7102b509b0  cbz w12,0x7102b509dc
7102b509b4  add w13,w8,#0x1
7102b509b8  add x11,x26,x8
7102b509bc  cmp w13,#0x3f
7102b509c0  strb w12,[x11, #0x10]
7102b509c4  b.cs 0x7102b509d8
7102b509c8  ldrb w10,[x10, #0x1]
7102b509cc  cbnz w10,0x7102b509a0
7102b509d0  add x8,x8,#0x1
7102b509d4  b 0x7102b509dc
7102b509d8  add w8,w8,#0x1
7102b509dc  add x10,x26,#0xc
7102b509e0  add x10,x10,w8, UXTW 
7102b509e4  strb wzr,[x10, #0x4]
7102b509e8  stp x9,x19,[x26, #0x50]
7102b509ec  ldr q0,[sp, #0xa0]
7102b509f0  str w8,[x26, #0xc]
7102b509f4  adrp x8,0x7105117000
7102b509f8  add x8,x8,#0x5f8
7102b509fc  str x8,[x26]
7102b50a00  str q0,[x26, #0x60]
7102b50a04  ldp x9,x8,[x27, #0x18]
7102b50a08  cmp x9,x8
7102b50a0c  b.eq 0x7102b50a24
7102b50a10  str x26,[x9]
7102b50a14  ldr x8,[x27, #0x18]
7102b50a18  add x8,x8,#0x8
7102b50a1c  str x8,[x27, #0x18]
7102b50a20  b 0x7102b50b28
7102b50a24  ldr x10,[sp, #0x90]
7102b50a28  ldr x27,[x10]
7102b50a2c  sub x28,x9,x27
7102b50a30  asr x24,x28,#0x3
7102b50a34  add x9,x24,#0x1
7102b50a38  lsr x10,x9,#0x3d
7102b50a3c  cbnz x10,0x7102b5241c
7102b50a40  sub x8,x8,x27
7102b50a44  asr x10,x8,#0x3
7102b50a48  orr x11,xzr,#0xffffffffffffffe
7102b50a4c  cmp x10,x11
7102b50a50  b.hi 0x7102b50a70
7102b50a54  asr x8,x8,#0x2
7102b50a58  cmp x8,x9
7102b50a5c  csel x9,x9,x8,cc
7102b50a60  cbz x9,0x7102b50860
7102b50a64  lsr x8,x9,#0x3d
7102b50a68  cbz x8,0x7102b50a74
7102b50a6c  b 0x7102b52408
7102b50a70  orr x9,xzr,#0x1fffffffffffffff
7102b50a74  lsl x8,x9,#0x3
7102b50a78  cmp x8,#0x0
7102b50a7c  csinc x1,x8,xzr,ne
7102b50a80  mov w0,#0x10
7102b50a84  str x9,[sp, #0xa0]
7102b50a88  str x1,[sp, #0x88]
7102b50a8c  bl 0x710392e290
7102b50a90  mov x19,x0
7102b50a94  cbnz x0,0x7102b50ae0
7102b50a98  adrp x8,0x7105332000
7102b50a9c  ldr x0,[x8, #0xf00]
7102b50aa0  cbz x0,0x7102b50adc
7102b50aa4  ldr x8,[sp, #0x88]
7102b50aa8  stur wzr,[x29, #-0xb8]
7102b50aac  sub x1,x29,#0xb8
7102b50ab0  add x2,sp,#0xd0
7102b50ab4  str x8,[sp, #0xd0]
7102b50ab8  ldr x8,[x0]
7102b50abc  ldr x8,[x8, #0x30]
7102b50ac0  blr x8
7102b50ac4  tbz w0,#0x0,0x7102b50adc
7102b50ac8  ldr x1,[sp, #0x88]
7102b50acc  mov w0,#0x10
7102b50ad0  bl 0x710392e290
7102b50ad4  mov x19,x0
7102b50ad8  cbnz x0,0x7102b50ae0
7102b50adc  mov x19,xzr
7102b50ae0  ldr x8,[sp, #0xa0]
7102b50ae4  add x24,x19,x24, LSL #0x3
7102b50ae8  cmp x28,#0x1
7102b50aec  str x26,[x24], #0x8
7102b50af0  add x26,x19,x8, LSL #0x3
7102b50af4  b.lt 0x7102b50b08
7102b50af8  mov x0,x19
7102b50afc  mov x1,x27
7102b50b00  mov x2,x28
7102b50b04  bl 0x71039c00e0
7102b50b08  ldur x8,[x29, #-0x58]
7102b50b0c  mov w28,#0x9dc5
7102b50b10  movk w28,#0x811c, LSL #16
7102b50b14  stp x19,x24,[x8, #0x10]
7102b50b18  str x26,[x8, #0x20]
7102b50b1c  cbz x27,0x7102b50b28
7102b50b20  mov x0,x27
7102b50b24  bl 0x710392eb40
7102b50b28  ldur x27,[x29, #-0x58]
7102b50b2c  strb wzr,[sp, #0x160]
7102b50b30  ldr x19,[sp, #0xb0]
7102b50b34  ldr w8,[x19, #0x8]
7102b50b38  add x20,x20,#0x1
7102b50b3c  cmp x20,x8
7102b50b40  b.cc 0x7102b5086c
7102b50b44  ldr w8,[x19, #0x68]
7102b50b48  add x24,sp,#0x148
7102b50b4c  cbz w8,0x7102b50dac
7102b50b50  add x8,sp,#0x160
7102b50b54  mov x20,xzr
7102b50b58  mov w22,#0x130
7102b50b5c  add x23,x8,#0x8
7102b50b60  adrp x25,0x7105117000
7102b50b64  add x25,x25,#0x6a8
7102b50b68  ldr x19,[x19, #0x70]
7102b50b6c  madd x8,x20,x22,x19
7102b50b70  add x0,x8,#0x48
7102b50b74  bl 0x71039c0070
7102b50b78  cmp x0,#0xd
7102b50b7c  b.cc 0x7102b50d94
7102b50b80  madd x8,x20,x22,x19
7102b50b84  add x1,x8,#0x55
7102b50b88  add x0,sp,#0x160
7102b50b8c  bl 0x7102b69300
7102b50b90  ldrb w8,[sp, #0x160]
7102b50b94  cbz w8,0x7102b50d98
7102b50b98  mov w0,#0x10
7102b50b9c  orr w1,wzr,#0x60
7102b50ba0  bl 0x710392e290
7102b50ba4  mov x21,x0
7102b50ba8  cbnz x0,0x7102b50bf4
7102b50bac  adrp x8,0x7105332000
7102b50bb0  ldr x0,[x8, #0xf00]
7102b50bb4  cbz x0,0x7102b50bf0
7102b50bb8  orr w8,wzr,#0x60
7102b50bbc  stur wzr,[x29, #-0xb8]
7102b50bc0  sub x1,x29,#0xb8
7102b50bc4  str x8,[sp, #0xd0]
7102b50bc8  ldr x8,[x0]
7102b50bcc  ldr x8,[x8, #0x30]
7102b50bd0  add x2,sp,#0xd0
7102b50bd4  blr x8
7102b50bd8  tbz w0,#0x0,0x7102b50bf0
7102b50bdc  mov w0,#0x10
7102b50be0  orr w1,wzr,#0x60
7102b50be4  bl 0x710392e290
7102b50be8  mov x21,x0
7102b50bec  cbnz x0,0x7102b50bf4
7102b50bf0  mov x21,xzr
7102b50bf4  madd x8,x20,x22,x19
7102b50bf8  ldr x10,[x27]
7102b50bfc  mov x9,xzr
7102b50c00  orr w11,wzr,#0x6
7102b50c04  str x25,[x21]
7102b50c08  str w11,[x21, #0x8]
7102b50c0c  b 0x7102b50c18
7102b50c10  add x9,x9,#0x2
7102b50c14  strb w11,[x12, #0x11]
7102b50c18  add x11,x23,x9
7102b50c1c  ldrb w13,[x11]
7102b50c20  cbz w13,0x7102b50c4c
7102b50c24  add w14,w9,#0x1
7102b50c28  add x12,x21,x9
7102b50c2c  cmp w14,#0x3f
7102b50c30  strb w13,[x12, #0x10]
7102b50c34  b.cs 0x7102b50c48
7102b50c38  ldrb w11,[x11, #0x1]
7102b50c3c  cbnz w11,0x7102b50c10
7102b50c40  add x9,x9,#0x1
7102b50c44  b 0x7102b50c4c
7102b50c48  add w9,w9,#0x1
7102b50c4c  add x11,x21,#0xc
7102b50c50  add x11,x11,w9, UXTW 
7102b50c54  strb wzr,[x11, #0x4]
7102b50c58  str w9,[x21, #0xc]
7102b50c5c  adrp x9,0x7105117000
7102b50c60  add x9,x9,#0x730
7102b50c64  stp x10,x8,[x21, #0x50]
7102b50c68  str x9,[x21]
7102b50c6c  ldp x9,x8,[x27, #0x18]
7102b50c70  cmp x9,x8
7102b50c74  b.cs 0x7102b50c8c
7102b50c78  str x21,[x9]
7102b50c7c  ldr x8,[x27, #0x18]
7102b50c80  add x8,x8,#0x8
7102b50c84  str x8,[x27, #0x18]
7102b50c88  b 0x7102b50d94
7102b50c8c  ldr x10,[sp, #0x90]
7102b50c90  ldr x26,[x10]
7102b50c94  sub x27,x9,x26
7102b50c98  mov x22,x25
7102b50c9c  asr x25,x27,#0x3
7102b50ca0  add x9,x25,#0x1
7102b50ca4  lsr x10,x9,#0x3d
7102b50ca8  cbnz x10,0x7102b5241c
7102b50cac  sub x8,x8,x26
7102b50cb0  asr x10,x8,#0x3
7102b50cb4  orr x11,xzr,#0xffffffffffffffe
7102b50cb8  cmp x10,x11
7102b50cbc  b.hi 0x7102b50cdc
7102b50cc0  asr x8,x8,#0x2
7102b50cc4  cmp x8,x9
7102b50cc8  csel x28,x9,x8,cc
7102b50ccc  cbz x28,0x7102b50d40
7102b50cd0  lsr x8,x28,#0x3d
7102b50cd4  cbz x8,0x7102b50ce0
7102b50cd8  b 0x7102b52408
7102b50cdc  orr x28,xzr,#0x1fffffffffffffff
7102b50ce0  lsl x8,x28,#0x3
7102b50ce4  cmp x8,#0x0
7102b50ce8  csinc x24,x8,xzr,ne
7102b50cec  mov w0,#0x10
7102b50cf0  mov x1,x24
7102b50cf4  bl 0x710392e290
7102b50cf8  mov x19,x0
7102b50cfc  cbnz x0,0x7102b50d44
7102b50d00  adrp x8,0x7105332000
7102b50d04  ldr x0,[x8, #0xf00]
7102b50d08  cbz x0,0x7102b50d40
7102b50d0c  stur wzr,[x29, #-0xb8]
7102b50d10  str x24,[sp, #0xd0]
7102b50d14  ldr x8,[x0]
7102b50d18  ldr x8,[x8, #0x30]
7102b50d1c  sub x1,x29,#0xb8
7102b50d20  add x2,sp,#0xd0
7102b50d24  blr x8
7102b50d28  tbz w0,#0x0,0x7102b50d40
7102b50d2c  mov w0,#0x10
7102b50d30  mov x1,x24
7102b50d34  bl 0x710392e290
7102b50d38  mov x19,x0
7102b50d3c  cbnz x0,0x7102b50d44
7102b50d40  mov x19,xzr
7102b50d44  add x24,x19,x25, LSL #0x3
7102b50d48  cmp x27,#0x1
7102b50d4c  str x21,[x24], #0x8
7102b50d50  add x21,x19,x28, LSL #0x3
7102b50d54  b.lt 0x7102b50d68
7102b50d58  mov x0,x19
7102b50d5c  mov x1,x26
7102b50d60  mov x2,x27
7102b50d64  bl 0x71039c00e0
7102b50d68  ldur x27,[x29, #-0x58]
7102b50d6c  stp x19,x24,[x27, #0x10]
7102b50d70  add x24,sp,#0x148
7102b50d74  mov w28,#0x9dc5
7102b50d78  movk w28,#0x811c, LSL #16
7102b50d7c  mov x25,x22
7102b50d80  mov w22,#0x130
7102b50d84  str x21,[x27, #0x20]
7102b50d88  cbz x26,0x7102b50d94
7102b50d8c  mov x0,x26
7102b50d90  bl 0x710392eb40
7102b50d94  strb wzr,[sp, #0x160]
7102b50d98  ldr x19,[sp, #0xb0]
7102b50d9c  ldr w8,[x19, #0x68]
7102b50da0  add x20,x20,#0x1
7102b50da4  cmp x20,x8
7102b50da8  b.cc 0x7102b50b68
7102b50dac  ldr x8,[x27, #0x20]
7102b50db0  ldr x21,[x27, #0x10]
7102b50db4  sub x8,x8,x21
7102b50db8  ldr x20,[x24, #0x10]
7102b50dbc  asr x8,x8,#0x3
7102b50dc0  cmp x8,x20
7102b50dc4  b.cs 0x7102b50e7c
7102b50dc8  add x23,sp,#0x148
7102b50dcc  lsr x8,x20,#0x3d
7102b50dd0  cbnz x8,0x7102b52408
7102b50dd4  ldr x8,[x27, #0x18]
7102b50dd8  sub x25,x8,x21
7102b50ddc  lsl x8,x20,#0x3
7102b50de0  cmp x8,#0x0
7102b50de4  csinc x19,x8,xzr,ne
7102b50de8  mov w0,#0x10
7102b50dec  asr x22,x25,#0x3
7102b50df0  mov x1,x19
7102b50df4  bl 0x710392e290
7102b50df8  mov x24,x0
7102b50dfc  cbnz x0,0x7102b50e44
7102b50e00  adrp x8,0x7105332000
7102b50e04  ldr x0,[x8, #0xf00]
7102b50e08  cbz x0,0x7102b50e40
7102b50e0c  str wzr,[sp, #0xd0]
7102b50e10  str x19,[x23, #0x18]
7102b50e14  ldr x8,[x0]
7102b50e18  ldr x8,[x8, #0x30]
7102b50e1c  add x1,sp,#0xd0
7102b50e20  add x2,sp,#0x160
7102b50e24  blr x8
7102b50e28  tbz w0,#0x0,0x7102b50e40
7102b50e2c  mov w0,#0x10
7102b50e30  mov x1,x19
7102b50e34  bl 0x710392e290
7102b50e38  mov x24,x0
7102b50e3c  cbnz x0,0x7102b50e44
7102b50e40  mov x24,xzr
7102b50e44  add x19,x24,x22, LSL #0x3
7102b50e48  add x20,x24,x20, LSL #0x3
7102b50e4c  cmp x25,#0x1
7102b50e50  b.lt 0x7102b50e64
7102b50e54  mov x0,x24
7102b50e58  mov x1,x21
7102b50e5c  mov x2,x25
7102b50e60  bl 0x71039c00e0
7102b50e64  stp x24,x19,[x27, #0x10]
7102b50e68  add x24,sp,#0x148
7102b50e6c  str x20,[x27, #0x20]
7102b50e70  cbz x21,0x7102b50e7c
7102b50e74  mov x0,x21
7102b50e78  bl 0x710392eb40
7102b50e7c  ldr x26,[x24, #0x8]
7102b50e80  ldp x23,x24,[sp, #0x78]
7102b50e84  add x8,sp,#0x148
7102b50e88  cmp x8,x26
7102b50e8c  b.eq 0x7102b51958
7102b50e90  ldp x9,x8,[sp, #0x60]
7102b50e94  cmp x8,#0x0
7102b50e98  cset w8,ne
7102b50e9c  cmp x9,#0x0
7102b50ea0  cset w9,ne
7102b50ea4  cmp x23,#0x0
7102b50ea8  and w8,w8,w9
7102b50eac  str w8,[sp, #0x50]
7102b50eb0  cset w8,eq
7102b50eb4  cmp x24,#0x0
7102b50eb8  cset w9,eq
7102b50ebc  mov w25,#0x89
7102b50ec0  orr w8,w9,w8
7102b50ec4  str w8,[sp, #0x88]
7102b50ec8  b 0x7102b50ed4
7102b50ecc  mov x19,xzr
7102b50ed0  b 0x7102b51904
7102b50ed4  mov x21,x26
7102b50ed8  ldrb w20,[x21, #0x60]!
7102b50edc  cbz w20,0x7102b51948
7102b50ee0  ldur x19,[x21, #-0x50]
7102b50ee4  add x22,x26,#0x61
7102b50ee8  mov x8,x22
7102b50eec  mov w10,w20
7102b50ef0  mov w9,w28
7102b50ef4  mul w9,w9,w25
7102b50ef8  and w10,w10,#0xff
7102b50efc  eor w9,w9,w10
7102b50f00  ldrb w10,[x8], #0x1
7102b50f04  cbnz w10,0x7102b50ef4
7102b50f08  mov w8,#0x308b
7102b50f0c  movk w8,#0x196f, LSL #16
7102b50f10  cmp w9,w8
7102b50f14  b.ne 0x7102b50f2c
7102b50f18  mov x0,x21
7102b50f1c  adrp x1,0x7104348000
7102b50f20  add x1,x1,#0x4b0
7102b50f24  bl 0x71039c0060
7102b50f28  cbz w0,0x7102b510c0
7102b50f2c  mov x8,x22
7102b50f30  mov w10,w20
7102b50f34  mov w9,w28
7102b50f38  mul w9,w9,w25
7102b50f3c  and w10,w10,#0xff
7102b50f40  eor w9,w9,w10
7102b50f44  ldrb w10,[x8], #0x1
7102b50f48  cbnz w10,0x7102b50f38
7102b50f4c  mov w8,#0x5dac
7102b50f50  movk w8,#0x4d3e, LSL #16
7102b50f54  cmp w9,w8
7102b50f58  b.ne 0x7102b50f70
7102b50f5c  mov x0,x21
7102b50f60  adrp x1,0x710428f000
7102b50f64  add x1,x1,#0x942
7102b50f68  bl 0x71039c0060
7102b50f6c  cbz w0,0x7102b51170
7102b50f70  mov x8,x22
7102b50f74  mov w10,w20
7102b50f78  mov w9,w28
7102b50f7c  mul w9,w9,w25
7102b50f80  and w10,w10,#0xff
7102b50f84  eor w9,w9,w10
7102b50f88  ldrb w10,[x8], #0x1
7102b50f8c  cbnz w10,0x7102b50f7c
7102b50f90  mov w8,#0xe964
7102b50f94  movk w8,#0x4e9c, LSL #16
7102b50f98  cmp w9,w8
7102b50f9c  b.ne 0x7102b50fb4
7102b50fa0  mov x0,x21
7102b50fa4  adrp x1,0x710426e000
7102b50fa8  add x1,x1,#0x5e
7102b50fac  bl 0x71039c0060
7102b50fb0  cbz w0,0x7102b51248
7102b50fb4  mov w8,w28
7102b50fb8  and w9,w20,#0xff
7102b50fbc  mul w8,w8,w25
7102b50fc0  eor w8,w8,w9
7102b50fc4  ldrb w20,[x22], #0x1
7102b50fc8  cbnz w20,0x7102b50fb8
7102b50fcc  mov w9,#0x61e2
7102b50fd0  movk w9,#0x599b, LSL #16
7102b50fd4  cmp w8,w9
7102b50fd8  b.ne 0x7102b51948
7102b50fdc  mov x0,x21
7102b50fe0  adrp x1,0x71043ee000
7102b50fe4  add x1,x1,#0xc69
7102b50fe8  bl 0x71039c0060
7102b50fec  cbnz w0,0x7102b51948
7102b50ff0  cbz x24,0x7102b51948
7102b50ff4  ldr w8,[x19, #0x108]
7102b50ff8  cmp w8,#0x1
7102b50ffc  b.ne 0x7102b51948
7102b51000  mov w0,#0x10
7102b51004  orr w1,wzr,#0x70
7102b51008  bl 0x710392e290
7102b5100c  mov x21,x0
7102b51010  cbnz x0,0x7102b51060
7102b51014  adrp x8,0x7105332000
7102b51018  ldr x0,[x8, #0xf00]
7102b5101c  cbz x0,0x7102b5105c
7102b51020  add x8,sp,#0x148
7102b51024  orr w9,wzr,#0x70
7102b51028  str wzr,[sp, #0xd0]
7102b5102c  str x9,[x8, #0x18]
7102b51030  ldr x8,[x0]
7102b51034  ldr x8,[x8, #0x30]
7102b51038  add x1,sp,#0xd0
7102b5103c  add x2,sp,#0x160
7102b51040  blr x8
7102b51044  tbz w0,#0x0,0x7102b5105c
7102b51048  mov w0,#0x10
7102b5104c  orr w1,wzr,#0x70
7102b51050  bl 0x710392e290
7102b51054  mov x21,x0
7102b51058  cbnz x0,0x7102b51060
7102b5105c  mov x21,xzr
7102b51060  ldur x22,[x29, #-0x58]
7102b51064  ldr x8,[x22]
7102b51068  adrp x10,0x7105117000
7102b5106c  add x10,x10,#0x6a8
7102b51070  mov x9,xzr
7102b51074  str x10,[x21]
7102b51078  add x10,x26,#0x1c
7102b5107c  mov w11,#0x4
7102b51080  str w11,[x21, #0x8]
7102b51084  b 0x7102b51090
7102b51088  add x9,x9,#0x2
7102b5108c  strb w11,[x12, #0x11]
7102b51090  add x11,x10,x9
7102b51094  ldrb w13,[x11]
7102b51098  cbz w13,0x7102b517ec
7102b5109c  add w14,w9,#0x1
7102b510a0  add x12,x21,x9
7102b510a4  cmp w14,#0x3f
7102b510a8  strb w13,[x12, #0x10]
7102b510ac  b.cs 0x7102b517e8
7102b510b0  ldrb w11,[x11, #0x1]
7102b510b4  cbnz w11,0x7102b51088
7102b510b8  add x9,x9,#0x1
7102b510bc  b 0x7102b517ec
7102b510c0  ldr w8,[x19, #0x108]
7102b510c4  cmp w8,#0x4
7102b510c8  b.eq 0x7102b510d4
7102b510cc  cmp w8,#0x2
7102b510d0  b.ne 0x7102b51948
7102b510d4  ldr x20,[sp, #0x138]
7102b510d8  add x27,sp,#0x130
7102b510dc  cmp x27,x20
7102b510e0  b.eq 0x7102b51318
7102b510e4  mov x21,x26
7102b510e8  ldrb w22,[x21, #0x1c]!
7102b510ec  add x23,x21,#0x1
7102b510f0  mov x0,x20
7102b510f4  ldrb w9,[x0, #0x24]!
7102b510f8  mov w8,w28
7102b510fc  cbz w9,0x7102b5111c
7102b51100  add x10,x20,#0x25
7102b51104  mov w8,w28
7102b51108  mul w8,w8,w25
7102b5110c  and w9,w9,#0xff
7102b51110  eor w8,w8,w9
7102b51114  ldrb w9,[x10], #0x1
7102b51118  cbnz w9,0x7102b51108
7102b5111c  mov w9,w28
7102b51120  cbz w22,0x7102b51144
7102b51124  mov x10,x23
7102b51128  mov w11,w22
7102b5112c  mov w9,w28
7102b51130  mul w9,w9,w25
7102b51134  and w11,w11,#0xff
7102b51138  eor w9,w9,w11
7102b5113c  ldrb w11,[x10], #0x1
7102b51140  cbnz w11,0x7102b51130
7102b51144  cmp w8,w9
7102b51148  b.ne 0x7102b51158
7102b5114c  mov x1,x21
7102b51150  bl 0x71039c0060
7102b51154  cbz w0,0x7102b5132c
7102b51158  ldr x20,[x20, #0x8]
7102b5115c  cmp x27,x20
7102b51160  b.ne 0x7102b510f0
7102b51164  adrp x8,0x71052a8000
7102b51168  ldr x8,[x8, #0xa80]
7102b5116c  b 0x7102b51330
7102b51170  ldr w8,[x19, #0x108]
7102b51174  ldr w9,[sp, #0x88]
7102b51178  cmp w8,#0x1
7102b5117c  cset w8,ne
7102b51180  orr w8,w8,w9
7102b51184  tbnz w8,#0x0,0x7102b51948
7102b51188  mov w0,#0x10
7102b5118c  mov w1,#0x68
7102b51190  bl 0x710392e290
7102b51194  mov x21,x0
7102b51198  cbnz x0,0x7102b511e8
7102b5119c  adrp x8,0x7105332000
7102b511a0  ldr x0,[x8, #0xf00]
7102b511a4  cbz x0,0x7102b511e4
7102b511a8  add x8,sp,#0x148
7102b511ac  mov w9,#0x68
7102b511b0  str wzr,[sp, #0xd0]
7102b511b4  str x9,[x8, #0x18]
7102b511b8  ldr x8,[x0]
7102b511bc  ldr x8,[x8, #0x30]
7102b511c0  add x1,sp,#0xd0
7102b511c4  add x2,sp,#0x160
7102b511c8  blr x8
7102b511cc  tbz w0,#0x0,0x7102b511e4
7102b511d0  mov w0,#0x10
7102b511d4  mov w1,#0x68
7102b511d8  bl 0x710392e290
7102b511dc  mov x21,x0
7102b511e0  cbnz x0,0x7102b511e8
7102b511e4  mov x21,xzr
7102b511e8  ldur x22,[x29, #-0x58]
7102b511ec  ldp x24,x8,[x22]
7102b511f0  adrp x10,0x7105117000
7102b511f4  add x10,x10,#0x6a8
7102b511f8  str x10,[x21]
7102b511fc  mov w10,#0x2
7102b51200  mov x9,xzr
7102b51204  str w10,[x21, #0x8]
7102b51208  add x10,x26,#0x1c
7102b5120c  b 0x7102b51218
7102b51210  add x9,x9,#0x2
7102b51214  strb w11,[x12, #0x11]
7102b51218  add x11,x10,x9
7102b5121c  ldrb w13,[x11]
7102b51220  cbz w13,0x7102b51408
7102b51224  add w14,w9,#0x1
7102b51228  add x12,x21,x9
7102b5122c  cmp w14,#0x3f
7102b51230  strb w13,[x12, #0x10]
7102b51234  b.cs 0x7102b51404
7102b51238  ldrb w11,[x11, #0x1]
7102b5123c  cbnz w11,0x7102b51210
7102b51240  add x9,x9,#0x1
7102b51244  b 0x7102b51408
7102b51248  cbz x23,0x7102b51948
7102b5124c  ldr w8,[x19, #0x108]
7102b51250  cmp w8,#0x1
7102b51254  b.ne 0x7102b51948
7102b51258  mov w0,#0x10
7102b5125c  orr w1,wzr,#0x70
7102b51260  bl 0x710392e290
7102b51264  mov x21,x0
7102b51268  cbnz x0,0x7102b512b8
7102b5126c  adrp x8,0x7105332000
7102b51270  ldr x0,[x8, #0xf00]
7102b51274  cbz x0,0x7102b512b4
7102b51278  add x8,sp,#0x148
7102b5127c  orr w9,wzr,#0x70
7102b51280  str wzr,[sp, #0xd0]
7102b51284  str x9,[x8, #0x18]
7102b51288  ldr x8,[x0]
7102b5128c  ldr x8,[x8, #0x30]
7102b51290  add x1,sp,#0xd0
7102b51294  add x2,sp,#0x160
7102b51298  blr x8
7102b5129c  tbz w0,#0x0,0x7102b512b4
7102b512a0  mov w0,#0x10
7102b512a4  orr w1,wzr,#0x70
7102b512a8  bl 0x710392e290
7102b512ac  mov x21,x0
7102b512b0  cbnz x0,0x7102b512b8
7102b512b4  mov x21,xzr
7102b512b8  ldur x22,[x29, #-0x58]
7102b512bc  ldr x8,[x22]
7102b512c0  adrp x10,0x7105117000
7102b512c4  add x10,x10,#0x6a8
7102b512c8  mov x9,xzr
7102b512cc  str x10,[x21]
7102b512d0  add x10,x26,#0x1c
7102b512d4  orr w11,wzr,#0x3
7102b512d8  str w11,[x21, #0x8]
7102b512dc  b 0x7102b512e8
7102b512e0  add x9,x9,#0x2
7102b512e4  strb w11,[x12, #0x11]
7102b512e8  add x11,x10,x9
7102b512ec  ldrb w13,[x11]
7102b512f0  cbz w13,0x7102b517c8
7102b512f4  add w14,w9,#0x1
7102b512f8  add x12,x21,x9
7102b512fc  cmp w14,#0x3f
7102b51300  strb w13,[x12, #0x10]
7102b51304  b.cs 0x7102b517c4
7102b51308  ldrb w11,[x11, #0x1]
7102b5130c  cbnz w11,0x7102b512e0
7102b51310  add x9,x9,#0x1
7102b51314  b 0x7102b517c8
7102b51318  adrp x8,0x71052a8000
7102b5131c  ldr x8,[x8, #0xa80]
7102b51320  ldr w9,[sp, #0x50]
7102b51324  tbnz w9,#0x0,0x7102b5133c
7102b51328  b 0x7102b51948
7102b5132c  add x8,x20,#0x10
7102b51330  ldr x23,[sp, #0x78]
7102b51334  ldr w9,[sp, #0x50]
7102b51338  tbz w9,#0x0,0x7102b51948
7102b5133c  ldr q0,[x8]
7102b51340  mov w0,#0x10
7102b51344  mov w1,#0x80
7102b51348  str q0,[sp, #0xb0]
7102b5134c  bl 0x710392e290
7102b51350  mov x21,x0
7102b51354  cbnz x0,0x7102b513a4
7102b51358  adrp x8,0x7105332000
7102b5135c  ldr x0,[x8, #0xf00]
7102b51360  cbz x0,0x7102b513a0
7102b51364  add x8,sp,#0x148
7102b51368  mov w9,#0x80
7102b5136c  str wzr,[sp, #0xd0]
7102b51370  str x9,[x8, #0x18]
7102b51374  ldr x8,[x0]
7102b51378  ldr x8,[x8, #0x30]
7102b5137c  add x1,sp,#0xd0
7102b51380  add x2,sp,#0x160
7102b51384  blr x8
7102b51388  tbz w0,#0x0,0x7102b513a0
7102b5138c  mov w0,#0x10
7102b51390  mov w1,#0x80
7102b51394  bl 0x710392e290
7102b51398  mov x21,x0
7102b5139c  cbnz x0,0x7102b513a4
7102b513a0  mov x21,xzr
7102b513a4  ldur x22,[x29, #-0x58]
7102b513a8  ldr x8,[x22]
7102b513ac  adrp x10,0x7105117000
7102b513b0  add x10,x10,#0x6a8
7102b513b4  mov x9,xzr
7102b513b8  str x10,[x21]
7102b513bc  add x10,x26,#0x1c
7102b513c0  mov w11,#0x1
7102b513c4  str w11,[x21, #0x8]
7102b513c8  b 0x7102b513d4
7102b513cc  add x9,x9,#0x2
7102b513d0  strb w11,[x12, #0x11]
7102b513d4  add x11,x10,x9
7102b513d8  ldrb w13,[x11]
7102b513dc  cbz w13,0x7102b51788
7102b513e0  add w14,w9,#0x1
7102b513e4  add x12,x21,x9
7102b513e8  cmp w14,#0x3f
7102b513ec  strb w13,[x12, #0x10]
7102b513f0  b.cs 0x7102b51784
7102b513f4  ldrb w11,[x11, #0x1]
7102b513f8  cbnz w11,0x7102b513cc
7102b513fc  add x9,x9,#0x1
7102b51400  b 0x7102b51788
7102b51404  add w9,w9,#0x1
7102b51408  add x10,x21,#0xc
7102b5140c  add x10,x10,w9, UXTW 
7102b51410  strb wzr,[x10, #0x4]
7102b51414  str w9,[x21, #0xc]
7102b51418  adrp x9,0x7105117000
7102b5141c  add x9,x9,#0x538
7102b51420  mov x20,x21
7102b51424  mov w0,#0x10
7102b51428  str x9,[x21]
7102b5142c  str xzr,[x20, #0x50]!
7102b51430  stp xzr,xzr,[x21, #0x58]
7102b51434  ldr s0,[x19, #0x110]
7102b51438  ldr s2,[x19, #0x10c]
7102b5143c  orr w1,wzr,#0x70
7102b51440  str q0,[sp, #0xa0]
7102b51444  movi v0.2D,#0x0
7102b51448  mov v1.16B,v0.16B
7102b5144c  mov v0.S[0x0],v2.S[0x0]
7102b51450  str q0,[sp, #0xb0]
7102b51454  ldr s0,[x8, #0x138]
7102b51458  fadd s8,s0,s0
7102b5145c  fsub s0,s2,s8
7102b51460  mov v1.S[0x0],v0.S[0x0]
7102b51464  stp q1,q2,[sp, #0x20]
7102b51468  bl 0x710392e290
7102b5146c  cbnz x0,0x7102b514b8
7102b51470  adrp x8,0x7105332000
7102b51474  ldr x0,[x8, #0xf00]
7102b51478  cbz x0,0x7102b514b4
7102b5147c  add x8,sp,#0x148
7102b51480  orr w9,wzr,#0x70
7102b51484  str wzr,[sp, #0xd0]
7102b51488  str x9,[x8, #0x18]
7102b5148c  ldr x8,[x0]
7102b51490  ldr x8,[x8, #0x30]
7102b51494  add x1,sp,#0xd0
7102b51498  add x2,sp,#0x160
7102b5149c  blr x8
7102b514a0  tbz w0,#0x0,0x7102b514b4
7102b514a4  mov w0,#0x10
7102b514a8  orr w1,wzr,#0x70
7102b514ac  bl 0x710392e290
7102b514b0  cbnz x0,0x7102b514b8
7102b514b4  mov x0,xzr
7102b514b8  ldp q0,q1,[sp, #0xa0]
7102b514bc  mov v1.S[0x1],v0.S[0x0]
7102b514c0  adrp x9,0x7105117000
7102b514c4  add x9,x9,#0x6a8
7102b514c8  str x9,[x0]
7102b514cc  orr w9,wzr,#0x3
7102b514d0  str q1,[sp, #0xb0]
7102b514d4  ldr q1,[sp, #0x20]
7102b514d8  mov v1.S[0x1],v0.S[0x0]
7102b514dc  mov v0.16B,v1.16B
7102b514e0  mov x8,xzr
7102b514e4  str w9,[x0, #0x8]
7102b514e8  add x9,x26,#0x1c
7102b514ec  b 0x7102b514f8
7102b514f0  add x8,x8,#0x2
7102b514f4  strb w10,[x11, #0x11]
7102b514f8  add x10,x9,x8
7102b514fc  ldrb w12,[x10]
7102b51500  cbz w12,0x7102b5152c
7102b51504  add w13,w8,#0x1
7102b51508  add x11,x0,x8
7102b5150c  cmp w13,#0x3f
7102b51510  strb w12,[x11, #0x10]
7102b51514  b.cs 0x7102b51528
7102b51518  ldrb w10,[x10, #0x1]
7102b5151c  cbnz w10,0x7102b514f0
7102b51520  add x8,x8,#0x1
7102b51524  b 0x7102b5152c
7102b51528  add w8,w8,#0x1
7102b5152c  add x9,x0,#0xc
7102b51530  add x9,x9,w8, UXTW 
7102b51534  strb wzr,[x9, #0x4]
7102b51538  str w8,[x0, #0xc]
7102b5153c  adrp x8,0x7105117000
7102b51540  add x8,x8,#0x598
7102b51544  str q0,[x0, #0x60]
7102b51548  stp x24,x23,[x0, #0x50]
7102b5154c  str x8,[x0]
7102b51550  ldr x8,[x20]
7102b51554  str x0,[x20]
7102b51558  cbz x8,0x7102b5156c
7102b5155c  ldr x9,[x8]
7102b51560  ldr x9,[x9, #0x8]
7102b51564  mov x0,x8
7102b51568  blr x9
7102b5156c  mov w0,#0x10
7102b51570  orr w1,wzr,#0x70
7102b51574  bl 0x710392e290
7102b51578  cbnz x0,0x7102b515c4
7102b5157c  adrp x8,0x7105332000
7102b51580  ldr x0,[x8, #0xf00]
7102b51584  cbz x0,0x7102b515c0
7102b51588  add x8,sp,#0x148
7102b5158c  orr w9,wzr,#0x70
7102b51590  str wzr,[sp, #0xd0]
7102b51594  str x9,[x8, #0x18]
7102b51598  ldr x8,[x0]
7102b5159c  ldr x8,[x8, #0x30]
7102b515a0  add x1,sp,#0xd0
7102b515a4  add x2,sp,#0x160
7102b515a8  blr x8
7102b515ac  tbz w0,#0x0,0x7102b515c0
7102b515b0  mov w0,#0x10
7102b515b4  orr w1,wzr,#0x70
7102b515b8  bl 0x710392e290
7102b515bc  cbnz x0,0x7102b515c4
7102b515c0  mov x0,xzr
7102b515c4  adrp x9,0x7105117000
7102b515c8  add x9,x9,#0x6a8
7102b515cc  mov x8,xzr
7102b515d0  str x9,[x0]
7102b515d4  add x9,x26,#0x1c
7102b515d8  mov w10,#0x4
7102b515dc  str w10,[x0, #0x8]
7102b515e0  b 0x7102b515ec
7102b515e4  add x8,x8,#0x2
7102b515e8  strb w10,[x11, #0x11]
7102b515ec  add x10,x9,x8
7102b515f0  ldrb w12,[x10]
7102b515f4  cbz w12,0x7102b51620
7102b515f8  add w13,w8,#0x1
7102b515fc  add x11,x0,x8
7102b51600  cmp w13,#0x3f
7102b51604  strb w12,[x11, #0x10]
7102b51608  b.cs 0x7102b5161c
7102b5160c  ldrb w10,[x10, #0x1]
7102b51610  cbnz w10,0x7102b515e4
7102b51614  add x8,x8,#0x1
7102b51618  b 0x7102b51620
7102b5161c  add w8,w8,#0x1
7102b51620  add x9,x0,#0xc
7102b51624  add x9,x9,w8, UXTW 
7102b51628  strb wzr,[x9, #0x4]
7102b5162c  ldr q0,[sp, #0xb0]
7102b51630  str w8,[x0, #0xc]
7102b51634  adrp x8,0x7105117000
7102b51638  add x8,x8,#0x6d0
7102b5163c  str x8,[x0]
7102b51640  ldr x8,[sp, #0x80]
7102b51644  str q0,[x0, #0x60]
7102b51648  stp x24,x8,[x0, #0x50]
7102b5164c  ldr x8,[x21, #0x58]
7102b51650  str x0,[x21, #0x58]
7102b51654  cbz x8,0x7102b51668
7102b51658  ldr x9,[x8]
7102b5165c  ldr x9,[x9, #0x8]
7102b51660  mov x0,x8
7102b51664  blr x9
7102b51668  ldr q0,[sp, #0x30]
7102b5166c  fadd s0,s0,s8
7102b51670  movi v1.2D,#0x0
7102b51674  mov v1.S[0x0],v0.S[0x0]
7102b51678  mov w0,#0x10
7102b5167c  orr w1,wzr,#0x70
7102b51680  str q1,[sp, #0xb0]
7102b51684  bl 0x710392e290
7102b51688  cbnz x0,0x7102b516d4
7102b5168c  adrp x8,0x7105332000
7102b51690  ldr x0,[x8, #0xf00]
7102b51694  cbz x0,0x7102b516d0
7102b51698  add x8,sp,#0x148
7102b5169c  orr w9,wzr,#0x70
7102b516a0  str wzr,[sp, #0xd0]
7102b516a4  str x9,[x8, #0x18]
7102b516a8  ldr x8,[x0]
7102b516ac  ldr x8,[x8, #0x30]
7102b516b0  add x1,sp,#0xd0
7102b516b4  add x2,sp,#0x160
7102b516b8  blr x8
7102b516bc  tbz w0,#0x0,0x7102b516d0
7102b516c0  mov w0,#0x10
7102b516c4  orr w1,wzr,#0x70
7102b516c8  bl 0x710392e290
7102b516cc  cbnz x0,0x7102b516d4
7102b516d0  mov x0,xzr
7102b516d4  ldp q0,q1,[sp, #0xa0]
7102b516d8  mov v1.S[0x1],v0.S[0x0]
7102b516dc  mov v0.16B,v1.16B
7102b516e0  adrp x9,0x7105117000
7102b516e4  add x9,x9,#0x6a8
7102b516e8  str x9,[x0]
7102b516ec  orr w9,wzr,#0x3
7102b516f0  mov x8,xzr
7102b516f4  str w9,[x0, #0x8]
7102b516f8  add x9,x26,#0x1c
7102b516fc  b 0x7102b51708
7102b51700  add x8,x8,#0x2
7102b51704  strb w10,[x11, #0x11]
7102b51708  add x10,x9,x8
7102b5170c  ldrb w12,[x10]
7102b51710  cbz w12,0x7102b5173c
7102b51714  add w13,w8,#0x1
7102b51718  add x11,x0,x8
7102b5171c  cmp w13,#0x3f
7102b51720  strb w12,[x11, #0x10]
7102b51724  b.cs 0x7102b51738
7102b51728  ldrb w10,[x10, #0x1]
7102b5172c  cbnz w10,0x7102b51700
7102b51730  add x8,x8,#0x1
7102b51734  b 0x7102b5173c
7102b51738  add w8,w8,#0x1
7102b5173c  add x9,x0,#0xc
7102b51740  add x9,x9,w8, UXTW 
7102b51744  strb wzr,[x9, #0x4]
7102b51748  str w8,[x0, #0xc]
7102b5174c  adrp x8,0x7105117000
7102b51750  add x8,x8,#0x598
7102b51754  str q0,[x0, #0x60]
7102b51758  stp x24,x23,[x0, #0x50]
7102b5175c  str x8,[x0]
7102b51760  ldr x8,[x21, #0x60]
7102b51764  str x0,[x21, #0x60]
7102b51768  cbz x8,0x7102b5177c
7102b5176c  ldr x9,[x8]
7102b51770  ldr x9,[x9, #0x8]
7102b51774  mov x0,x8
7102b51778  blr x9
7102b5177c  ldr x24,[sp, #0x80]
7102b51780  b 0x7102b51828
7102b51784  add w9,w9,#0x1
7102b51788  add x10,x21,#0xc
7102b5178c  add x10,x10,w9, UXTW 
7102b51790  strb wzr,[x10, #0x4]
7102b51794  str x8,[x21, #0x50]
7102b51798  ldr x8,[sp, #0x68]
7102b5179c  str x8,[x21, #0x58]
7102b517a0  ldr x8,[sp, #0x60]
7102b517a4  stp x8,x19,[x21, #0x60]
7102b517a8  ldr q0,[sp, #0xb0]
7102b517ac  str w9,[x21, #0xc]
7102b517b0  adrp x9,0x7105117000
7102b517b4  add x9,x9,#0x790
7102b517b8  str x9,[x21]
7102b517bc  str q0,[x21, #0x70]
7102b517c0  b 0x7102b51828
7102b517c4  add w9,w9,#0x1
7102b517c8  add x10,x21,#0xc
7102b517cc  add x10,x10,w9, UXTW 
7102b517d0  strb wzr,[x10, #0x4]
7102b517d4  str w9,[x21, #0xc]
7102b517d8  adrp x9,0x7105117000
7102b517dc  add x9,x9,#0x598
7102b517e0  stp x8,x23,[x21, #0x50]
7102b517e4  b 0x7102b51808
7102b517e8  add w9,w9,#0x1
7102b517ec  add x10,x21,#0xc
7102b517f0  add x10,x10,w9, UXTW 
7102b517f4  strb wzr,[x10, #0x4]
7102b517f8  str w9,[x21, #0xc]
7102b517fc  adrp x9,0x7105117000
7102b51800  add x9,x9,#0x6d0
7102b51804  stp x8,x24,[x21, #0x50]
7102b51808  str x9,[x21]
7102b5180c  movi v0.2D,#0x0
7102b51810  stp xzr,xzr,[x21, #0x60]
7102b51814  add x8,x19,#0x10c
7102b51818  ld1 {v0.S}[0],[x8]
7102b5181c  add x8,x19,#0x110
7102b51820  ld1 {v0.S}[1],[x8]
7102b51824  str q0,[x21, #0x60]
7102b51828  ldp x9,x8,[x22, #0x18]
7102b5182c  cmp x9,x8
7102b51830  b.eq 0x7102b51848
7102b51834  str x21,[x9]
7102b51838  ldr x8,[x22, #0x18]
7102b5183c  add x8,x8,#0x8
7102b51840  str x8,[x22, #0x18]
7102b51844  b 0x7102b51948
7102b51848  ldr x10,[sp, #0x90]
7102b5184c  ldr x27,[x10]
7102b51850  sub x28,x9,x27
7102b51854  asr x20,x28,#0x3
7102b51858  add x9,x20,#0x1
7102b5185c  lsr x10,x9,#0x3d
7102b51860  cbnz x10,0x7102b5241c
7102b51864  sub x8,x8,x27
7102b51868  asr x10,x8,#0x3
7102b5186c  orr x11,xzr,#0xffffffffffffffe
7102b51870  cmp x10,x11
7102b51874  b.hi 0x7102b51894
7102b51878  asr x8,x8,#0x2
7102b5187c  cmp x8,x9
7102b51880  csel x22,x9,x8,cc
7102b51884  cbz x22,0x7102b50ecc
7102b51888  lsr x8,x22,#0x3d
7102b5188c  cbz x8,0x7102b51898
7102b51890  b 0x7102b52408
7102b51894  orr x22,xzr,#0x1fffffffffffffff
7102b51898  lsl x8,x22,#0x3
7102b5189c  cmp x8,#0x0
7102b518a0  csinc x24,x8,xzr,ne
7102b518a4  mov w0,#0x10
7102b518a8  mov x1,x24
7102b518ac  bl 0x710392e290
7102b518b0  mov x19,x0
7102b518b4  cbnz x0,0x7102b51900
7102b518b8  adrp x8,0x7105332000
7102b518bc  ldr x0,[x8, #0xf00]
7102b518c0  cbz x0,0x7102b518fc
7102b518c4  add x8,sp,#0x148
7102b518c8  str wzr,[sp, #0xd0]
7102b518cc  add x1,sp,#0xd0
7102b518d0  str x24,[x8, #0x18]
7102b518d4  ldr x8,[x0]
7102b518d8  ldr x8,[x8, #0x30]
7102b518dc  add x2,sp,#0x160
7102b518e0  blr x8
7102b518e4  tbz w0,#0x0,0x7102b518fc
7102b518e8  mov w0,#0x10
7102b518ec  mov x1,x24
7102b518f0  bl 0x710392e290
7102b518f4  mov x19,x0
7102b518f8  cbnz x0,0x7102b51900
7102b518fc  mov x19,xzr
7102b51900  ldr x24,[sp, #0x80]
7102b51904  add x20,x19,x20, LSL #0x3
7102b51908  cmp x28,#0x1
7102b5190c  str x21,[x20], #0x8
7102b51910  add x21,x19,x22, LSL #0x3
7102b51914  b.lt 0x7102b51928
7102b51918  mov x0,x19
7102b5191c  mov x1,x27
7102b51920  mov x2,x28
7102b51924  bl 0x71039c00e0
7102b51928  ldur x8,[x29, #-0x58]
7102b5192c  mov w28,#0x9dc5
7102b51930  movk w28,#0x811c, LSL #16
7102b51934  stp x19,x20,[x8, #0x10]
7102b51938  str x21,[x8, #0x20]
7102b5193c  cbz x27,0x7102b51948
7102b51940  mov x0,x27
7102b51944  bl 0x710392eb40
7102b51948  ldr x26,[x26, #0x8]
7102b5194c  add x8,sp,#0x148
7102b51950  cmp x8,x26
7102b51954  b.ne 0x7102b50ed4
7102b51958  ldr x8,[sp, #0x140]
7102b5195c  ldur x27,[x29, #-0x58]
7102b51960  add x21,sp,#0x148
7102b51964  cbz x8,0x7102b519ac
7102b51968  ldp x8,x0,[sp, #0x130]
7102b5196c  ldr x9,[x8, #0x8]
7102b51970  ldr x10,[x0]
7102b51974  str x9,[x10, #0x8]
7102b51978  ldr x9,[x0]
7102b5197c  ldr x8,[x8, #0x8]
7102b51980  add x19,sp,#0x130
7102b51984  cmp x0,x19
7102b51988  str x9,[x8]
7102b5198c  str xzr,[sp, #0x140]
7102b51990  b.eq 0x7102b519ac
7102b51994  ldr x20,[x0, #0x8]
7102b51998  cbz x0,0x7102b519a0
7102b5199c  bl 0x710392eb40
7102b519a0  cmp x20,x19
7102b519a4  mov x0,x20
7102b519a8  b.ne 0x7102b51994
7102b519ac  ldr x8,[x21, #0x10]
7102b519b0  cbz x8,0x7102b519fc
7102b519b4  ldr x0,[x21, #0x8]
7102b519b8  ldr x8,[sp, #0x148]
7102b519bc  add x19,sp,#0x148
7102b519c0  ldr x9,[x8, #0x8]
7102b519c4  ldr x10,[x0]
7102b519c8  str x9,[x10, #0x8]
7102b519cc  ldr x9,[x0]
7102b519d0  ldr x8,[x8, #0x8]
7102b519d4  cmp x0,x19
7102b519d8  str x9,[x8]
7102b519dc  str xzr,[x21, #0x10]
7102b519e0  b.eq 0x7102b519fc
7102b519e4  ldr x20,[x0, #0x8]
7102b519e8  cbz x0,0x7102b519f0
7102b519ec  bl 0x710392eb40
7102b519f0  cmp x20,x19
7102b519f4  mov x0,x20
7102b519f8  b.ne 0x7102b519e4
7102b519fc  ldr x8,[x27]
7102b51a00  ldr x8,[x8]
7102b51a04  ldrb w8,[x8, #0xc8]
7102b51a08  mov w1,#0x28
7102b51a0c  mov w0,#0x10
7102b51a10  str w8,[sp, #0x90]
7102b51a14  bl 0x710392e290
7102b51a18  cbnz x0,0x7102b51a60
7102b51a1c  adrp x8,0x7105332000
7102b51a20  ldr x0,[x8, #0xf00]
7102b51a24  cbz x0,0x7102b51a5c
7102b51a28  mov w8,#0x28
7102b51a2c  str wzr,[sp, #0xd0]
7102b51a30  add x1,sp,#0xd0
7102b51a34  str x8,[x21, #0x18]
7102b51a38  ldr x8,[x0]
7102b51a3c  ldr x8,[x8, #0x30]
7102b51a40  add x2,sp,#0x160
7102b51a44  blr x8
7102b51a48  tbz w0,#0x0,0x7102b51a5c
7102b51a4c  mov w1,#0x28
7102b51a50  mov w0,#0x10
7102b51a54  bl 0x710392e290
7102b51a58  cbnz x0,0x7102b51a60
7102b51a5c  mov x0,xzr
7102b51a60  ldr x11,[sp, #0x98]
7102b51a64  add x8,x0,#0x28
7102b51a68  str x8,[sp, #0xe0]
7102b51a6c  stp x0,x0,[sp, #0xd0]
7102b51a70  ldr x9,[x11, #0x290]
7102b51a74  ldr x8,[x11, #0x288]
7102b51a78  sub x9,x9,x8
7102b51a7c  orr x10,xzr,#-0x5555555555555556
7102b51a80  movk x10,#0xaaab
7102b51a84  asr x9,x9,#0x5
7102b51a88  mul x9,x9,x10
7102b51a8c  cmp w9,#0x1
7102b51a90  b.lt 0x7102b52314
7102b51a94  add x10,x11,#0x244
7102b51a98  str x10,[sp, #0x88]
7102b51a9c  add x10,sp,#0x160
7102b51aa0  add x10,x10,#0x10
7102b51aa4  mov x19,xzr
7102b51aa8  sxtw x9,w9
7102b51aac  mov w20,#0x89
7102b51ab0  str x9,[sp, #0x78]
7102b51ab4  str x10,[sp, #0x80]
7102b51ab8  add x10,x27,#0x28
7102b51abc  str x10,[sp, #0x60]
7102b51ac0  b 0x7102b51ad4
7102b51ac4  ldr x8,[sp, #0x98]
7102b51ac8  ldr x8,[x8, #0x288]
7102b51acc  ldr x0,[sp, #0xd0]
7102b51ad0  add x21,sp,#0x148
7102b51ad4  ldp x9,x23,[x27, #0x8]
7102b51ad8  str x19,[sp, #0xb0]
7102b51adc  str x9,[x21, #0x18]
7102b51ae0  ldp x11,x9,[sp, #0x80]
7102b51ae4  orr w10,wzr,#0x60
7102b51ae8  madd x10,x19,x10,x8
7102b51aec  ldr x9,[x9]
7102b51af0  str x9,[x21, #0x20]
7102b51af4  ldr x9,[x10, #0x58]
7102b51af8  str x9,[x11, #0x8]
7102b51afc  ldr x9,[x10, #0x50]
7102b51b00  str x9,[x11]
7102b51b04  ldr w9,[sp, #0x90]
7102b51b08  str w19,[sp, #0x180]
7102b51b0c  strb w9,[sp, #0x184]
7102b51b10  str x0,[sp, #0xd8]
7102b51b14  ldr x22,[x27, #0x18]
7102b51b18  cmp x23,x22
7102b51b1c  mov x9,x0
7102b51b20  b.eq 0x7102b51e4c
7102b51b24  orr w9,wzr,#0x60
7102b51b28  madd x8,x19,x9,x8
7102b51b2c  add x24,x8,#0x4
7102b51b30  add x21,x8,#0x5
7102b51b34  b 0x7102b51dd0
7102b51b38  ldr w8,[x25, #0x8]
7102b51b3c  cmp w8,#0x2
7102b51b40  b.ne 0x7102b51b64
7102b51b44  ldp x9,x8,[sp, #0xd8]
7102b51b48  cmp x9,x8
7102b51b4c  b.eq 0x7102b51ba0
7102b51b50  str x25,[x9]
7102b51b54  ldr x8,[sp, #0xd8]
7102b51b58  add x8,x8,#0x8
7102b51b5c  str x8,[sp, #0xd8]
7102b51b60  b 0x7102b51e3c
7102b51b64  ldr x8,[x25]
7102b51b68  ldr x8,[x8, #0x10]
7102b51b6c  add x1,sp,#0x160
7102b51b70  mov x0,x25
7102b51b74  blr x8
7102b51b78  cbz x0,0x7102b51e3c
7102b51b7c  ldp x9,x8,[x27, #0x30]
7102b51b80  mov x26,x0
7102b51b84  cmp x9,x8
7102b51b88  b.eq 0x7102b51be8
7102b51b8c  str x26,[x9]
7102b51b90  ldr x8,[x27, #0x30]
7102b51b94  add x8,x8,#0x8
7102b51b98  str x8,[x27, #0x30]
7102b51b9c  b 0x7102b51e3c
7102b51ba0  ldr x26,[sp, #0xd0]
7102b51ba4  sub x27,x9,x26
7102b51ba8  asr x28,x27,#0x3
7102b51bac  add x9,x28,#0x1
7102b51bb0  lsr x10,x9,#0x3d
7102b51bb4  cbnz x10,0x7102b52414
7102b51bb8  sub x8,x8,x26
7102b51bbc  asr x10,x8,#0x3
7102b51bc0  orr x11,xzr,#0xffffffffffffffe
7102b51bc4  cmp x10,x11
7102b51bc8  b.hi 0x7102b51c34
7102b51bcc  asr x8,x8,#0x2
7102b51bd0  cmp x8,x9
7102b51bd4  csel x9,x9,x8,cc
7102b51bd8  cbz x9,0x7102b51db8
7102b51bdc  lsr x8,x9,#0x3d
7102b51be0  cbz x8,0x7102b51c38
7102b51be4  b 0x7102b52408
7102b51be8  ldr x10,[sp, #0x60]
7102b51bec  ldr x25,[x10]
7102b51bf0  sub x27,x9,x25
7102b51bf4  asr x28,x27,#0x3
7102b51bf8  add x9,x28,#0x1
7102b51bfc  lsr x10,x9,#0x3d
7102b51c00  cbnz x10,0x7102b5240c
7102b51c04  sub x8,x8,x25
7102b51c08  asr x10,x8,#0x3
7102b51c0c  orr x11,xzr,#0xffffffffffffffe
7102b51c10  cmp x10,x11
7102b51c14  b.hi 0x7102b51cf4
7102b51c18  asr x8,x8,#0x2
7102b51c1c  cmp x8,x9
7102b51c20  csel x9,x9,x8,cc
7102b51c24  cbz x9,0x7102b51dc4
7102b51c28  lsr x8,x9,#0x3d
7102b51c2c  cbz x8,0x7102b51cf8
7102b51c30  b 0x7102b52408
7102b51c34  orr x9,xzr,#0x1fffffffffffffff
7102b51c38  lsl x8,x9,#0x3
7102b51c3c  cmp x8,#0x0
7102b51c40  csinc x1,x8,xzr,ne
7102b51c44  mov w0,#0x10
7102b51c48  str x9,[sp, #0xa0]
7102b51c4c  str x1,[sp, #0x68]
7102b51c50  bl 0x710392e290
7102b51c54  mov x19,x0
7102b51c58  cbnz x0,0x7102b51ca8
7102b51c5c  adrp x8,0x7105332000
7102b51c60  ldr x0,[x8, #0xf00]
7102b51c64  cbz x0,0x7102b51ca4
7102b51c68  ldr x9,[sp, #0x68]
7102b51c6c  add x8,sp,#0x148
7102b51c70  str wzr,[sp, #0x148]
7102b51c74  add x1,sp,#0x148
7102b51c78  sub x2,x29,#0xb8
7102b51c7c  str x9,[x8, #0x90]
7102b51c80  ldr x8,[x0]
7102b51c84  ldr x8,[x8, #0x30]
7102b51c88  blr x8
7102b51c8c  tbz w0,#0x0,0x7102b51ca4
7102b51c90  ldr x1,[sp, #0x68]
7102b51c94  mov w0,#0x10
7102b51c98  bl 0x710392e290
7102b51c9c  mov x19,x0
7102b51ca0  cbnz x0,0x7102b51ca8
7102b51ca4  mov x19,xzr
7102b51ca8  ldr x8,[sp, #0xa0]
7102b51cac  add x28,x19,x28, LSL #0x3
7102b51cb0  cmp x27,#0x1
7102b51cb4  str x25,[x28], #0x8
7102b51cb8  add x25,x19,x8, LSL #0x3
7102b51cbc  b.lt 0x7102b51cd0
7102b51cc0  mov x0,x19
7102b51cc4  mov x1,x26
7102b51cc8  mov x2,x27
7102b51ccc  bl 0x71039c00e0
7102b51cd0  stp x19,x28,[sp, #0xd0]
7102b51cd4  ldur x27,[x29, #-0x58]
7102b51cd8  ldr x19,[sp, #0xb0]
7102b51cdc  mov w28,#0x9dc5
7102b51ce0  movk w28,#0x811c, LSL #16
7102b51ce4  str x25,[sp, #0xe0]
7102b51ce8  cbz x26,0x7102b51e3c
7102b51cec  mov x0,x26
7102b51cf0  b 0x7102b51db0
7102b51cf4  orr x9,xzr,#0x1fffffffffffffff
7102b51cf8  lsl x8,x9,#0x3
7102b51cfc  cmp x8,#0x0
7102b51d00  csinc x1,x8,xzr,ne
7102b51d04  mov w0,#0x10
7102b51d08  str x9,[sp, #0xa0]
7102b51d0c  str x1,[sp, #0x68]
7102b51d10  bl 0x710392e290
7102b51d14  mov x19,x0
7102b51d18  cbnz x0,0x7102b51d68
7102b51d1c  adrp x8,0x7105332000
7102b51d20  ldr x0,[x8, #0xf00]
7102b51d24  cbz x0,0x7102b51d64
7102b51d28  ldr x9,[sp, #0x68]
7102b51d2c  add x8,sp,#0x148
7102b51d30  str wzr,[sp, #0x148]
7102b51d34  add x1,sp,#0x148
7102b51d38  sub x2,x29,#0xb8
7102b51d3c  str x9,[x8, #0x90]
7102b51d40  ldr x8,[x0]
7102b51d44  ldr x8,[x8, #0x30]
7102b51d48  blr x8
7102b51d4c  tbz w0,#0x0,0x7102b51d64
7102b51d50  ldr x1,[sp, #0x68]
7102b51d54  mov w0,#0x10
7102b51d58  bl 0x710392e290
7102b51d5c  mov x19,x0
7102b51d60  cbnz x0,0x7102b51d68
7102b51d64  mov x19,xzr
7102b51d68  ldr x8,[sp, #0xa0]
7102b51d6c  add x28,x19,x28, LSL #0x3
7102b51d70  cmp x27,#0x1
7102b51d74  str x26,[x28], #0x8
7102b51d78  add x26,x19,x8, LSL #0x3
7102b51d7c  b.lt 0x7102b51d90
7102b51d80  mov x0,x19
7102b51d84  mov x1,x25
7102b51d88  mov x2,x27
7102b51d8c  bl 0x71039c00e0
7102b51d90  ldur x27,[x29, #-0x58]
7102b51d94  stp x19,x28,[x27, #0x28]
7102b51d98  ldr x19,[sp, #0xb0]
7102b51d9c  mov w28,#0x9dc5
7102b51da0  movk w28,#0x811c, LSL #16
7102b51da4  str x26,[x27, #0x38]
7102b51da8  cbz x25,0x7102b51e3c
7102b51dac  mov x0,x25
7102b51db0  bl 0x710392eb40
7102b51db4  b 0x7102b51e3c
7102b51db8  mov x8,xzr
7102b51dbc  mov x19,xzr
7102b51dc0  b 0x7102b51cac
7102b51dc4  mov x8,xzr
7102b51dc8  mov x19,xzr
7102b51dcc  b 0x7102b51d6c
7102b51dd0  ldr x25,[x23]
7102b51dd4  mov x0,x25
7102b51dd8  mov w8,w28
7102b51ddc  ldrb w9,[x0, #0x10]!
7102b51de0  cbz w9,0x7102b51e00
7102b51de4  add x10,x25,#0x11
7102b51de8  mov w8,w28
7102b51dec  mul w8,w8,w20
7102b51df0  and w9,w9,#0xff
7102b51df4  eor w8,w8,w9
7102b51df8  ldrb w9,[x10], #0x1
7102b51dfc  cbnz w9,0x7102b51dec
7102b51e00  ldrb w9,[x24]
7102b51e04  mov w10,w28
7102b51e08  cbz w9,0x7102b51e28
7102b51e0c  mov x11,x21
7102b51e10  mov w10,w28
7102b51e14  mul w10,w10,w20
7102b51e18  and w9,w9,#0xff
7102b51e1c  eor w10,w10,w9
7102b51e20  ldrb w9,[x11], #0x1
7102b51e24  cbnz w9,0x7102b51e14
7102b51e28  cmp w8,w10
7102b51e2c  b.ne 0x7102b51e3c
7102b51e30  mov x1,x24
7102b51e34  bl 0x71039c0060
7102b51e38  cbz w0,0x7102b51b38
7102b51e3c  add x23,x23,#0x8
7102b51e40  cmp x23,x22
7102b51e44  b.ne 0x7102b51dd0
7102b51e48  ldp x0,x9,[sp, #0xd0]
7102b51e4c  subs x8,x9,x0
7102b51e50  b.eq 0x7102b51fc8
7102b51e54  ldr x9,[x27]
7102b51e58  ldr x9,[x9]
7102b51e5c  ldr x9,[x9, #0x340]
7102b51e60  ldp w10,w11,[x9]
7102b51e64  str w11,[x9]
7102b51e68  ldp w11,w12,[x9, #0x8]
7102b51e6c  eor w10,w10,w10, LSL #0xb
7102b51e70  eor w10,w10,w10, LSR #0x8
7102b51e74  eor w10,w10,w12
7102b51e78  eor w10,w10,w12, LSR #0x13
7102b51e7c  lsr x8,x8,#0x3
7102b51e80  stp w11,w12,[x9, #0x4]
7102b51e84  str w10,[x9, #0xc]
7102b51e88  udiv w9,w10,w8
7102b51e8c  msub w8,w9,w8,w10
7102b51e90  ldr x9,[sp, #0xd0]
7102b51e94  ldr x0,[x9, w8, UXTW #0x3]
7102b51e98  ldr x8,[x0]
7102b51e9c  ldr x8,[x8, #0x10]
7102b51ea0  add x1,sp,#0x160
7102b51ea4  blr x8
7102b51ea8  cbz x0,0x7102b51fc8
7102b51eac  ldp x9,x8,[x27, #0x30]
7102b51eb0  mov x25,x0
7102b51eb4  cmp x9,x8
7102b51eb8  b.eq 0x7102b51ed0
7102b51ebc  str x25,[x9]
7102b51ec0  ldr x8,[x27, #0x30]
7102b51ec4  add x8,x8,#0x8
7102b51ec8  str x8,[x27, #0x30]
7102b51ecc  b 0x7102b51fc8
7102b51ed0  ldr x10,[sp, #0x60]
7102b51ed4  ldr x24,[x10]
7102b51ed8  sub x26,x9,x24
7102b51edc  asr x21,x26,#0x3
7102b51ee0  add x9,x21,#0x1
7102b51ee4  lsr x10,x9,#0x3d
7102b51ee8  cbnz x10,0x7102b5240c
7102b51eec  sub x8,x8,x24
7102b51ef0  asr x10,x8,#0x3
7102b51ef4  orr x11,xzr,#0xffffffffffffffe
7102b51ef8  cmp x10,x11
7102b51efc  b.hi 0x7102b51f1c
7102b51f00  asr x8,x8,#0x2
7102b51f04  cmp x8,x9
7102b51f08  csel x22,x9,x8,cc
7102b51f0c  cbz x22,0x7102b51fdc
7102b51f10  lsr x8,x22,#0x3d
7102b51f14  cbz x8,0x7102b51f20
7102b51f18  b 0x7102b52408
7102b51f1c  orr x22,xzr,#0x1fffffffffffffff
7102b51f20  lsl x8,x22,#0x3
7102b51f24  cmp x8,#0x0
7102b51f28  csinc x27,x8,xzr,ne
7102b51f2c  mov w0,#0x10
7102b51f30  mov x1,x27
7102b51f34  bl 0x710392e290
7102b51f38  mov x19,x0
7102b51f3c  cbnz x0,0x7102b51f88
7102b51f40  adrp x8,0x7105332000
7102b51f44  ldr x0,[x8, #0xf00]
7102b51f48  cbz x0,0x7102b51f84
7102b51f4c  add x8,sp,#0x148
7102b51f50  str wzr,[sp, #0x148]
7102b51f54  add x1,sp,#0x148
7102b51f58  str x27,[x8, #0x90]
7102b51f5c  ldr x8,[x0]
7102b51f60  ldr x8,[x8, #0x30]
7102b51f64  sub x2,x29,#0xb8
7102b51f68  blr x8
7102b51f6c  tbz w0,#0x0,0x7102b51f84
7102b51f70  mov w0,#0x10
7102b51f74  mov x1,x27
7102b51f78  bl 0x710392e290
7102b51f7c  mov x19,x0
7102b51f80  cbnz x0,0x7102b51f88
7102b51f84  mov x19,xzr
7102b51f88  ldur x27,[x29, #-0x58]
7102b51f8c  add x21,x19,x21, LSL #0x3
7102b51f90  add x22,x19,x22, LSL #0x3
7102b51f94  cmp x26,#0x1
7102b51f98  str x25,[x21], #0x8
7102b51f9c  b.lt 0x7102b51fb0
7102b51fa0  mov x0,x19
7102b51fa4  mov x1,x24
7102b51fa8  mov x2,x26
7102b51fac  bl 0x71039c00e0
7102b51fb0  stp x19,x21,[x27, #0x28]
7102b51fb4  ldr x19,[sp, #0xb0]
7102b51fb8  str x22,[x27, #0x38]
7102b51fbc  cbz x24,0x7102b51fc8
7102b51fc0  mov x0,x24
7102b51fc4  bl 0x710392eb40
7102b51fc8  ldr x8,[sp, #0x78]
7102b51fcc  add x19,x19,#0x1
7102b51fd0  cmp x19,x8
7102b51fd4  b.lt 0x7102b51ac4
7102b51fd8  b 0x7102b51fe4
7102b51fdc  mov x19,xzr
7102b51fe0  b 0x7102b51f8c
7102b51fe4  ldr x0,[sp, #0xd0]
7102b51fe8  ldr x20,[sp, #0x70]
7102b51fec  add x21,sp,#0x148
7102b51ff0  cbz x0,0x7102b52000
7102b51ff4  str x0,[sp, #0xd8]
7102b51ff8  cbz x0,0x7102b52000
7102b51ffc  bl 0x710392eb40
7102b52000  ldr x19,[x20, #0x9d8]
7102b52004  str x27,[x20, #0x9d8]
7102b52008  cbz x19,0x7102b5201c
7102b5200c  mov x0,x19
7102b52010  bl 0x7102b59410
7102b52014  mov x0,x19
7102b52018  bl 0x710392eb40
7102b5201c  ldrb w20,[x20, #0xc8]
7102b52020  mov w0,#0x10
7102b52024  orr w1,wzr,#0x70
7102b52028  bl 0x710392e290
7102b5202c  mov x19,x0
7102b52030  cbnz x0,0x7102b5207c
7102b52034  adrp x8,0x7105332000
7102b52038  ldr x0,[x8, #0xf00]
7102b5203c  cbz x0,0x7102b52078
7102b52040  orr w8,wzr,#0x70
7102b52044  str wzr,[sp, #0xd0]
7102b52048  add x1,sp,#0xd0
7102b5204c  str x8,[x21, #0x18]
7102b52050  ldr x8,[x0]
7102b52054  ldr x8,[x8, #0x30]
7102b52058  add x2,sp,#0x160
7102b5205c  blr x8
7102b52060  tbz w0,#0x0,0x7102b52078
7102b52064  mov w0,#0x10
7102b52068  orr w1,wzr,#0x70
7102b5206c  bl 0x710392e290
7102b52070  mov x19,x0
7102b52074  cbnz x0,0x7102b5207c
7102b52078  mov x19,xzr
7102b5207c  cmp w20,#0x0
7102b52080  ldr x20,[sp, #0x70]
7102b52084  ldr x1,[x20, #0x9a8]
7102b52088  ldr x3,[x20, #0x9b0]
7102b5208c  ldr x2,[sp, #0x58]
7102b52090  cset w4,ne
7102b52094  mov x0,x19
7102b52098  bl 0x7102b58750
7102b5209c  ldr x21,[x20, #0x9e0]
7102b520a0  str x19,[x20, #0x9e0]
7102b520a4  cbz x21,0x7102b520b8
7102b520a8  mov x0,x21
7102b520ac  bl 0x7102b59260
7102b520b0  mov x0,x21
7102b520b4  bl 0x710392eb40
7102b520b8  ldr x8,[x20, #0x9d0]
7102b520bc  ldp w20,w1,[sp, #0x44]
7102b520c0  cbz x8,0x7102b52288
7102b520c4  ldr x9,[sp, #0x70]
7102b520c8  ldp x8,x9,[x9, #0x1a8]
7102b520cc  sub x8,x9,x8
7102b520d0  lsr x8,x8,#0x3
7102b520d4  cmp w8,#0x2
7102b520d8  b.cc 0x7102b52288
7102b520dc  ldr x11,[sp, #0x70]
7102b520e0  ldr x8,[x11, #0x9b0]
7102b520e4  ldr x10,[x11, #0x300]
7102b520e8  ldr w8,[x8, #0x24c]
7102b520ec  ldr x9,[x10, #0x48]
7102b520f0  cmp w8,#0x0
7102b520f4  cset w8,ne
7102b520f8  ldr x9,[x9, w8, UXTW #0x3]
7102b520fc  movi d0,#0x0
7102b52100  mov v2.16B,v0.16B
7102b52104  ldr q1,[x9, #0x40]
7102b52108  mov v2.S[0x0],v1.S[0x2]
7102b5210c  ldr x8,[x10, #0x60]
7102b52110  mov v1.D[0x1],v2.D[0x0]
7102b52114  mov v2.16B,v0.16B
7102b52118  str q1,[x8, #0x30]
7102b5211c  ldr q1,[x9, #0x50]
7102b52120  mov v2.S[0x0],v1.S[0x2]
7102b52124  mov v1.D[0x1],v2.D[0x0]
7102b52128  mov v2.16B,v0.16B
7102b5212c  str q1,[x8, #0x40]
7102b52130  ldr q1,[x9, #0x60]
7102b52134  mov v2.S[0x0],v1.S[0x2]
7102b52138  mov v1.D[0x1],v2.D[0x0]
7102b5213c  mov v2.16B,v0.16B
7102b52140  str q1,[x8, #0x50]
7102b52144  ldr q1,[x9, #0x70]
7102b52148  mov v2.S[0x0],v1.S[0x2]
7102b5214c  mov v1.D[0x1],v2.D[0x0]
7102b52150  mov v2.16B,v0.16B
7102b52154  str q1,[x8, #0x60]
7102b52158  ldr q1,[x9, #0x80]
7102b5215c  mov v2.S[0x0],v1.S[0x2]
7102b52160  mov v1.D[0x1],v2.D[0x0]
7102b52164  mov v2.16B,v0.16B
7102b52168  str q1,[x8, #0x70]
7102b5216c  ldrb w10,[x9, #0x90]
7102b52170  strb w10,[x8, #0x80]
7102b52174  ldr q1,[x9, #0xa0]
7102b52178  mov v2.S[0x0],v1.S[0x2]
7102b5217c  mov v1.D[0x1],v2.D[0x0]
7102b52180  str q1,[x8, #0x90]
7102b52184  ldr q1,[x9, #0xb0]
7102b52188  mov v0.S[0x0],v1.S[0x2]
7102b5218c  mov v1.D[0x1],v0.D[0x0]
7102b52190  str q1,[x8, #0xa0]
7102b52194  ldr x10,[x11, #0x9d0]
7102b52198  ldp x8,x9,[x10, #0x98]
7102b5219c  cmp x8,x9
7102b521a0  b.eq 0x7102b52288
7102b521a4  ldr x10,[x10]
7102b521a8  ldr x10,[x10]
7102b521ac  ldr x10,[x10, #0x300]
7102b521b0  fmov s0,wzr
7102b521b4  adrp x11,0x7104517000
7102b521b8  add x11,x11,#0x140
7102b521bc  ldr w13,[x8, #0xc]
7102b521c0  cmp w13,#0x6
7102b521c4  b.hi 0x7102b5227c
7102b521c8  ldrsw x13,[x11, x13, LSL #0x2]
7102b521cc  ldr x12,[x10, #0x60]
7102b521d0  add x13,x13,x11
7102b521d4  br x13
7102b521d8  ldr q1,[x8, #0x10]
7102b521dc  ext v2.16B,v1.16B,v1.16B,0x8
7102b521e0  mov v2.S[0x1],v0.S[0x0]
7102b521e4  mov v1.D[0x1],v2.D[0x0]
7102b521e8  str q1,[x12, #0x30]
7102b521ec  b 0x7102b5227c
7102b521f0  ldr q1,[x8, #0x10]
7102b521f4  ext v2.16B,v1.16B,v1.16B,0x8
7102b521f8  mov v2.S[0x1],v0.S[0x0]
7102b521fc  mov v1.D[0x1],v2.D[0x0]
7102b52200  str q1,[x12, #0x70]
7102b52204  b 0x7102b5227c
7102b52208  ldr q1,[x8, #0x10]
7102b5220c  ext v2.16B,v1.16B,v1.16B,0x8
7102b52210  mov v2.S[0x1],v0.S[0x0]
7102b52214  mov v1.D[0x1],v2.D[0x0]
7102b52218  str q1,[x12, #0x50]
7102b5221c  b 0x7102b5227c
7102b52220  ldr q1,[x8, #0x10]
7102b52224  ext v2.16B,v1.16B,v1.16B,0x8
7102b52228  mov v2.S[0x1],v0.S[0x0]
7102b5222c  mov v1.D[0x1],v2.D[0x0]
7102b52230  str q1,[x12, #0x60]
7102b52234  b 0x7102b5227c
7102b52238  ldr q1,[x8, #0x10]
7102b5223c  ext v2.16B,v1.16B,v1.16B,0x8
7102b52240  mov v2.S[0x1],v0.S[0x0]
7102b52244  mov v1.D[0x1],v2.D[0x0]
7102b52248  str q1,[x12, #0x40]
7102b5224c  b 0x7102b5227c
7102b52250  ldr q1,[x8, #0x10]
7102b52254  ext v2.16B,v1.16B,v1.16B,0x8
7102b52258  mov v2.S[0x1],v0.S[0x0]
7102b5225c  mov v1.D[0x1],v2.D[0x0]
7102b52260  str q1,[x12, #0x90]
7102b52264  b 0x7102b5227c
7102b52268  ldr q1,[x8, #0x10]
7102b5226c  ext v2.16B,v1.16B,v1.16B,0x8
7102b52270  mov v2.S[0x1],v0.S[0x0]
7102b52274  mov v1.D[0x1],v2.D[0x0]
7102b52278  str q1,[x12, #0xa0]
7102b5227c  add x8,x8,#0x20
7102b52280  cmp x9,x8
7102b52284  b.ne 0x7102b521bc
7102b52288  ldr x8,[sp, #0x70]
7102b5228c  ldrb w8,[x8, #0xd8]
7102b52290  tbz w8,#0x4,0x7102b522c0
7102b52294  adrp x8,0x7105314000
7102b52298  add x8,x8,#0x4d8
7102b5229c  ldarb w8,[x8]
7102b522a0  tbz w8,#0x0,0x7102b52380
7102b522a4  adrp x8,0x71052c5000
7102b522a8  ldrb w8,[x8, #0x1ba]
7102b522ac  cbnz w8,0x7102b522c0
7102b522b0  adrp x8,0x7105329000
7102b522b4  ldr x8,[x8, #0xf50]
7102b522b8  ldr x8,[x8]
7102b522bc  strb wzr,[x8, #0x1]
7102b522c0  orr w19,wzr,#0xffffff
7102b522c4  cmp w1,w19
7102b522c8  b.eq 0x7102b522d8
7102b522cc  adrp x8,0x7105332000
7102b522d0  ldr x0,[x8, #0xf20]
7102b522d4  bl 0x7103540b10
7102b522d8  cmp w20,w19
7102b522dc  b.eq 0x7102b522f0
7102b522e0  adrp x8,0x7105332000
7102b522e4  ldr x0,[x8, #0xf20]
7102b522e8  mov w1,w20
7102b522ec  bl 0x7103540b10
7102b522f0  add sp,sp,#0x230
7102b522f4  ldp x29,x30,[sp, #0x60]
7102b522f8  ldp x20,x19,[sp, #0x50]
7102b522fc  ldp x22,x21,[sp, #0x40]
7102b52300  ldp x24,x23,[sp, #0x30]
7102b52304  ldp x26,x25,[sp, #0x20]
7102b52308  ldp x28,x27,[sp, #0x10]
7102b5230c  ldr d8,[sp], #0x70
7102b52310  ret
7102b52314  ldr x20,[sp, #0x70]
7102b52318  str x0,[sp, #0xd8]
7102b5231c  cbnz x0,0x7102b51ffc
7102b52320  b 0x7102b52000
7102b52324  ldr x8,[sp, #0x70]
7102b52328  ldrb w8,[x8, #0xc8]
7102b5232c  cmp w8,#0x0
7102b52330  cset w20,ne
7102b52334  b 0x7102b4f6e0
7102b52338  add x25,sp,#0x148
7102b5233c  b 0x7102b4f11c
7102b52340  adrp x0,0x7105314000
7102b52344  add x0,x0,#0x4d8
7102b52348  bl 0x71039c06b0
7102b5234c  cbz w0,0x7102b4f6b8
7102b52350  bl 0x7101764000
7102b52354  adrp x0,0x7101763000
7102b52358  add x0,x0,#0xc40
7102b5235c  adrp x1,0x71052c5000
7102b52360  add x1,x1,#0x180
7102b52364  adrp x2,0x7104f17000
7102b52368  add x2,x2,#0x0
7102b5236c  bl 0x71000001c0
7102b52370  adrp x0,0x7105314000
7102b52374  add x0,x0,#0x4d8
7102b52378  bl 0x71039c06c0
7102b5237c  b 0x7102b4f6b8
7102b52380  adrp x0,0x7105314000
7102b52384  add x0,x0,#0x4d8
7102b52388  bl 0x71039c06b0
7102b5238c  ldr w1,[sp, #0x48]
7102b52390  cbz w0,0x7102b522a4
7102b52394  bl 0x7101764000
7102b52398  adrp x0,0x7101763000
7102b5239c  add x0,x0,#0xc40
7102b523a0  adrp x1,0x71052c5000
7102b523a4  add x1,x1,#0x180
7102b523a8  adrp x2,0x7104f17000
7102b523ac  add x2,x2,#0x0
7102b523b0  bl 0x71000001c0
7102b523b4  adrp x0,0x7105314000
7102b523b8  add x0,x0,#0x4d8
7102b523bc  bl 0x71039c06c0
7102b523c0  ldr w1,[sp, #0x48]
7102b523c4  b 0x7102b522a4
7102b523c8  adrp x0,0x7105314000
7102b523cc  add x0,x0,#0x4d8
7102b523d0  bl 0x71039c06b0
7102b523d4  cbz w0,0x7102b4f6d0
7102b523d8  bl 0x7101764000
7102b523dc  adrp x0,0x7101763000
7102b523e0  add x0,x0,#0xc40
7102b523e4  adrp x1,0x71052c5000
7102b523e8  add x1,x1,#0x180
7102b523ec  adrp x2,0x7104f17000
7102b523f0  add x2,x2,#0x0
7102b523f4  bl 0x71000001c0
7102b523f8  adrp x0,0x7105314000
7102b523fc  add x0,x0,#0x4d8
7102b52400  bl 0x71039c06c0
7102b52404  b 0x7102b4f6d0
7102b52408  bl 0x71039c2650
7102b5240c  ldr x0,[sp, #0x60]
7102b52410  bl 0x71039c0c00
7102b52414  add x0,sp,#0xd0
7102b52418  bl 0x71039c0c00
7102b5241c  ldr x0,[sp, #0x90]
7102b52420  bl 0x71039c0c00
7102b52424  add x0,sp,#0x148
7102b52428  bl 0x71039c0c00
7102b5242c  ldr x0,[sp, #0x68]
7102b52430  bl 0x71039c0c00
7102b52434  add x0,x20,#0x1a8
7102b52438  bl 0x71039c1330
7102b5243c  sub x0,x29,#0xb8
7102b52440  bl 0x71039c0c00
