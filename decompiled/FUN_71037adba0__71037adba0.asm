// addr:      71037adba0
// offset:    0x37adba0
// name:      FUN_71037adba0
// mangled:   
// size:      260

71037adba0  cmp w2,#0x4
71037adba4  b.hi 0x71037adc58
71037adba8  mov x8,#0x34db
71037adbac  movk x8,#0xd7b6, LSL #16
71037adbb0  movk x8,#0xde82, LSL #32
71037adbb4  movk x8,#0x431b, LSL #48
71037adbb8  smulh x8,x3,x8
71037adbbc  asr x11,x8,#0x12
71037adbc0  mov x9,#0x42bd
71037adbc4  movk x9,#0xe57a, LSL #16
71037adbc8  movk x9,#0x94d5, LSL #32
71037adbcc  movk x9,#0xd6bf, LSL #48
71037adbd0  add x8,x11,x8, LSR #0x3f
71037adbd4  smulh x9,x8,x9
71037adbd8  add x9,x9,x8
71037adbdc  mov x10,#0xf7cf
71037adbe0  movk x10,#0xe353, LSL #16
71037adbe4  movk x10,#0x9ba5, LSL #32
71037adbe8  movk x10,#0x20c4, LSL #48
71037adbec  lsr x11,x9,#0x3f
71037adbf0  lsr x9,x9,#0x17
71037adbf4  add w9,w9,w11
71037adbf8  mov w11,#0x9680
71037adbfc  movk w11,#0x98, LSL #16
71037adc00  msub w4,w9,w11,w8
71037adc04  smulh x8,x3,x10
71037adc08  asr x9,x8,#0x7
71037adc0c  add x8,x9,x8, LSR #0x3f
71037adc10  smulh x9,x8,x10
71037adc14  lsr x10,x9,#0x3f
71037adc18  lsr x9,x9,#0x7
71037adc1c  add w9,w9,w10
71037adc20  mov w10,#0x3e8
71037adc24  msub w5,w9,w10,w8
71037adc28  mov w9,#0xfffffc18
71037adc2c  madd w6,w8,w9,w3
71037adc30  mov w8,w2
71037adc34  adrp x9,0x7104532000
71037adc38  add x9,x9,#0x530
71037adc3c  ldrsw x8,[x9, x8, LSL #0x2]
71037adc40  add x8,x8,x9
71037adc44  br x8
71037adc48  adrp x2,0x71042d4000
71037adc4c  add x2,x2,#0xe5b
71037adc50  orr w3,wzr,#0x3
71037adc54  b 0x71037ab600
71037adc58  mov w0,wzr
71037adc5c  ret
71037adc60  adrp x2,0x710426e000
71037adc64  add x2,x2,#0x818
71037adc68  mov w3,#0x2
71037adc6c  b 0x71037ab600
71037adc70  adrp x2,0x710427f000
71037adc74  add x2,x2,#0x56e
71037adc78  b 0x71037adc84
71037adc7c  adrp x2,0x7104453000
71037adc80  add x2,x2,#0x3a4
71037adc84  mov w3,#0x2
71037adc88  mov w4,w5
71037adc8c  mov w5,w6
71037adc90  b 0x71037ab600
71037adc94  adrp x2,0x7104338000
71037adc98  add x2,x2,#0xd47
71037adc9c  orr w3,wzr,#0x3
71037adca0  b 0x71037ab600
