// addr:      71037adcb0
// offset:    0x37adcb0
// name:      FUN_71037adcb0
// mangled:   
// size:      260

71037adcb0  cmp w2,#0x4
71037adcb4  b.hi 0x71037add68
71037adcb8  mov x8,#0x34db
71037adcbc  movk x8,#0xd7b6, LSL #16
71037adcc0  movk x8,#0xde82, LSL #32
71037adcc4  movk x8,#0x431b, LSL #48
71037adcc8  smulh x8,x3,x8
71037adccc  asr x11,x8,#0x12
71037adcd0  mov x9,#0x42bd
71037adcd4  movk x9,#0xe57a, LSL #16
71037adcd8  movk x9,#0x94d5, LSL #32
71037adcdc  movk x9,#0xd6bf, LSL #48
71037adce0  add x8,x11,x8, LSR #0x3f
71037adce4  smulh x9,x8,x9
71037adce8  add x9,x9,x8
71037adcec  mov x10,#0xf7cf
71037adcf0  movk x10,#0xe353, LSL #16
71037adcf4  movk x10,#0x9ba5, LSL #32
71037adcf8  movk x10,#0x20c4, LSL #48
71037adcfc  lsr x11,x9,#0x3f
71037add00  lsr x9,x9,#0x17
71037add04  add w9,w9,w11
71037add08  mov w11,#0x9680
71037add0c  movk w11,#0x98, LSL #16
71037add10  msub w4,w9,w11,w8
71037add14  smulh x8,x3,x10
71037add18  asr x9,x8,#0x7
71037add1c  add x8,x9,x8, LSR #0x3f
71037add20  smulh x9,x8,x10
71037add24  lsr x10,x9,#0x3f
71037add28  lsr x9,x9,#0x7
71037add2c  add w9,w9,w10
71037add30  mov w10,#0x3e8
71037add34  msub w5,w9,w10,w8
71037add38  mov w9,#0xfffffc18
71037add3c  madd w6,w8,w9,w3
71037add40  mov w8,w2
71037add44  adrp x9,0x7104532000
71037add48  add x9,x9,#0x544
71037add4c  ldrsw x8,[x9, x8, LSL #0x2]
71037add50  add x8,x8,x9
71037add54  br x8
71037add58  adrp x2,0x710425d000
71037add5c  add x2,x2,#0xe03
71037add60  orr w3,wzr,#0x3
71037add64  b 0x71037ab600
71037add68  mov w0,wzr
71037add6c  ret
71037add70  adrp x2,0x71043bd000
71037add74  add x2,x2,#0x5b
71037add78  mov w3,#0x2
71037add7c  b 0x71037ab600
71037add80  adrp x2,0x7104317000
71037add84  add x2,x2,#0x929
71037add88  mov w3,#0x2
71037add8c  b 0x71037ab600
71037add90  adrp x2,0x710427f000
71037add94  add x2,x2,#0x559
71037add98  b 0x71037adda4
71037add9c  adrp x2,0x71042f6000
71037adda0  add x2,x2,#0x768
71037adda4  mov w3,#0x2
71037adda8  mov w4,w5
71037addac  mov w5,w6
71037addb0  b 0x71037ab600
