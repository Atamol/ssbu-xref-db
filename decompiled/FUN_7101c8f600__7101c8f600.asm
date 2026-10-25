// addr:      7101c8f600
// offset:    0x1c8f600
// name:      FUN_7101c8f600
// mangled:   
// size:      7684

7101c8f600  str x28,[sp, #-0x60]!
7101c8f604  stp x26,x25,[sp, #0x10]
7101c8f608  stp x24,x23,[sp, #0x20]
7101c8f60c  stp x22,x21,[sp, #0x30]
7101c8f610  stp x20,x19,[sp, #0x40]
7101c8f614  stp x29,x30,[sp, #0x50]
7101c8f618  add x29,sp,#0x50
7101c8f61c  sub sp,sp,#0x230
7101c8f620  mov w21,w5
7101c8f624  mov w20,w4
7101c8f628  mov w23,w3
7101c8f62c  mov w24,w2
7101c8f630  mov x22,x1
7101c8f634  strb w2,[sp, #0x10c]
7101c8f638  mov x19,x0
7101c8f63c  cmp w4,#0x3
7101c8f640  strb w3,[sp, #0x108]
7101c8f644  strb wzr,[sp, #0x80]
7101c8f648  str xzr,[sp, #0x78]
7101c8f64c  strb wzr,[sp, #0xc8]
7101c8f650  str xzr,[sp, #0xc0]
7101c8f654  strb wzr,[sp, #0x74]
7101c8f658  strb wzr,[sp, #0x70]
7101c8f65c  b.ne 0x7101c8f680
7101c8f660  adrp x8,0x71052c4000
7101c8f664  ldr x8,[x8, #0xc58]
7101c8f668  ldr x8,[x8, #0x8]
7101c8f66c  add x0,x8,#0xa0
7101c8f670  bl 0x7101704ba0
7101c8f674  tbz w0,#0x0,0x7101c8f6f0
7101c8f678  orr w25,wzr,#0x7
7101c8f67c  b 0x7101c8f6fc
7101c8f680  cmp w20,#0x5
7101c8f684  b.hi 0x7101c8f9a8
7101c8f688  mov w8,w20
7101c8f68c  adrp x10,0x71044f9000
7101c8f690  add x10,x10,#0x8fc
7101c8f694  ldrsw x8,[x10, x8, LSL #0x2]
7101c8f698  add x8,x8,x10
7101c8f69c  add x9,sp,#0x110
7101c8f6a0  br x8
7101c8f6a4  add x8,sp,#0x10c
7101c8f6a8  str x8,[sp, #0x48]
7101c8f6ac  add x8,sp,#0x108
7101c8f6b0  str x8,[sp, #0x50]
7101c8f6b4  add x8,sp,#0x74
7101c8f6b8  str x8,[sp, #0x58]
7101c8f6bc  add x8,sp,#0x70
7101c8f6c0  str x8,[sp, #0x60]
7101c8f6c4  add x8,sp,#0x78
7101c8f6c8  str x8,[sp, #0x68]
7101c8f6cc  adrp x8,0x71052c4000
7101c8f6d0  ldr x8,[x8, #0xc58]
7101c8f6d4  ldr x8,[x8, #0x8]
7101c8f6d8  add x0,x8,#0xa0
7101c8f6dc  bl 0x7101704ba0
7101c8f6e0  tbz w0,#0x0,0x7101c8fc3c
7101c8f6e4  adrp x1,0x7104545000
7101c8f6e8  add x1,x1,#0x260
7101c8f6ec  b 0x7101c8fc50
7101c8f6f0  mov w0,wzr
7101c8f6f4  bl 0x7101797350
7101c8f6f8  orr w25,wzr,#0x6
7101c8f6fc  mov w8,#0x1
7101c8f700  ldrb w26,[x19, #0x138]
7101c8f704  strb w8,[sp, #0x74]
7101c8f708  sxtb w8,w24
7101c8f70c  cmp w8,#0x1
7101c8f710  csinc w8,w24,wzr,lt
7101c8f714  sxtb w9,w8
7101c8f718  bic w1,w8,w9, ASR #0x7
7101c8f71c  sxtb w9,w23
7101c8f720  cmp w9,#0x1
7101c8f724  csinc w9,w23,wzr,lt
7101c8f728  sxtb w10,w9
7101c8f72c  and w8,w1,#0xff
7101c8f730  cmp w8,#0x2
7101c8f734  bic w2,w9,w10, ASR #0x7
7101c8f738  strb w1,[sp, #0x10c]
7101c8f73c  strb w2,[sp, #0x108]
7101c8f740  b.cs 0x7101c91400
7101c8f744  adrp x8,0x7104545000
7101c8f748  add x8,x8,#0x280
7101c8f74c  and x9,x1,#0xff
7101c8f750  ldrb w8,[x8, x9, LSL ]
7101c8f754  cmp w8,#0x1
7101c8f758  cset w8,eq
7101c8f75c  sub x0,x29,#0xe0
7101c8f760  sub x23,x29,#0xe0
7101c8f764  strb w8,[sp, #0x70]
7101c8f768  bl 0x7101c91730
7101c8f76c  mov x10,xzr
7101c8f770  add x8,x23,#0x8
7101c8f774  add x9,sp,#0x78
7101c8f778  b 0x7101c8f784
7101c8f77c  add x10,x10,#0x2
7101c8f780  strb w11,[x12, #0x9]
7101c8f784  add x11,x8,x10
7101c8f788  ldrb w13,[x11]
7101c8f78c  cbz w13,0x7101c8f7b8
7101c8f790  add w14,w10,#0x1
7101c8f794  add x12,x9,x10
7101c8f798  cmp w14,#0x3f
7101c8f79c  strb w13,[x12, #0x8]
7101c8f7a0  b.cs 0x7101c8f7b4
7101c8f7a4  ldrb w11,[x11, #0x1]
7101c8f7a8  cbnz w11,0x7101c8f77c
7101c8f7ac  add x10,x10,#0x1
7101c8f7b0  b 0x7101c8f7b8
7101c8f7b4  add w10,w10,#0x1
7101c8f7b8  add x9,sp,#0x78
7101c8f7bc  add x23,x9,#0x8
7101c8f7c0  mov w8,#0x9dc5
7101c8f7c4  movk w8,#0x811c, LSL #16
7101c8f7c8  mov w12,w8
7101c8f7cc  strb wzr,[x23, w10, UXTW ]
7101c8f7d0  str w10,[sp, #0x7c]
7101c8f7d4  ldrb w10,[sp, #0x80]
7101c8f7d8  cbz w10,0x7101c8f7fc
7101c8f7dc  add x11,x9,#0x9
7101c8f7e0  mov w13,#0x89
7101c8f7e4  mov w12,w8
7101c8f7e8  mul w12,w12,w13
7101c8f7ec  and w10,w10,#0xff
7101c8f7f0  eor w12,w12,w10
7101c8f7f4  ldrb w10,[x11], #0x1
7101c8f7f8  cbnz w10,0x7101c8f7e8
7101c8f7fc  sub x11,x29,#0xe0
7101c8f800  mov x10,xzr
7101c8f804  str w12,[sp, #0x78]
7101c8f808  add x11,x11,#0x50
7101c8f80c  b 0x7101c8f818
7101c8f810  add x10,x10,#0x2
7101c8f814  strb w12,[x13, #0x51]
7101c8f818  add x12,x11,x10
7101c8f81c  ldrb w14,[x12]
7101c8f820  cbz w14,0x7101c8f84c
7101c8f824  add w15,w10,#0x1
7101c8f828  add x13,x9,x10
7101c8f82c  cmp w15,#0x3f
7101c8f830  strb w14,[x13, #0x50]
7101c8f834  b.cs 0x7101c8f848
7101c8f838  ldrb w12,[x12, #0x1]
7101c8f83c  cbnz w12,0x7101c8f810
7101c8f840  add x10,x10,#0x1
7101c8f844  b 0x7101c8f84c
7101c8f848  add w10,w10,#0x1
7101c8f84c  add x9,sp,#0x78
7101c8f850  add x11,x9,#0x50
7101c8f854  strb wzr,[x11, w10, UXTW ]
7101c8f858  str w10,[sp, #0xc4]
7101c8f85c  ldrb w10,[sp, #0xc8]
7101c8f860  cbz w10,0x7101c8f880
7101c8f864  add x9,x9,#0x51
7101c8f868  mov w11,#0x89
7101c8f86c  mul w8,w8,w11
7101c8f870  and w10,w10,#0xff
7101c8f874  eor w8,w8,w10
7101c8f878  ldrb w10,[x9], #0x1
7101c8f87c  cbnz w10,0x7101c8f86c
7101c8f880  cmp w26,w25
7101c8f884  str w8,[sp, #0xc0]
7101c8f888  b.ne 0x7101c90e8c
7101c8f88c  ldr x0,[x22, #0x8]
7101c8f890  adrp x1,0x710433a000
7101c8f894  add x1,x1,#0x225
7101c8f898  bl 0x7103778760
7101c8f89c  ldr x0,[x22, #0x8]
7101c8f8a0  adrp x1,0x71043be000
7101c8f8a4  add x1,x1,#0xdce
7101c8f8a8  bl 0x7103778760
7101c8f8ac  mov w25,wzr
7101c8f8b0  b 0x7101c90ea8
7101c8f8b4  sxtb w10,w24
7101c8f8b8  orr w8,wzr,#0x3
7101c8f8bc  cmp w10,#0x3
7101c8f8c0  csel w10,w24,w8,lt
7101c8f8c4  sxtb w11,w10
7101c8f8c8  bic w11,w10,w11, ASR #0x7
7101c8f8cc  sxtb w10,w23
7101c8f8d0  cmp w10,#0x3
7101c8f8d4  strb w8,[sp, #0x74]
7101c8f8d8  csel w8,w23,w8,lt
7101c8f8dc  sxtb w10,w8
7101c8f8e0  and w12,w11,#0xff
7101c8f8e4  cmp w12,#0x4
7101c8f8e8  strb w11,[sp, #0x10c]
7101c8f8ec  bic w10,w8,w10, ASR #0x7
7101c8f8f0  strb w10,[sp, #0x108]
7101c8f8f4  b.cs 0x7101c91400
7101c8f8f8  and x12,x11,#0xff
7101c8f8fc  adrp x11,0x7104545000
7101c8f900  add x11,x11,#0x27c
7101c8f904  ldrb w12,[x11, x12, LSL ]
7101c8f908  cmp w12,#0x0
7101c8f90c  mov w8,#0x9dc5
7101c8f910  movk w8,#0x811c, LSL #16
7101c8f914  cset w13,eq
7101c8f918  cmp w12,#0x3
7101c8f91c  strb w13,[sp, #0x70]
7101c8f920  b.eq 0x7101c90078
7101c8f924  cmp w12,#0x2
7101c8f928  b.eq 0x7101c900f8
7101c8f92c  cbnz w12,0x7101c90170
7101c8f930  mov x13,#0x6e6d
7101c8f934  movk x13,#0x5f75, LSL #16
7101c8f938  orr x12,xzr,#0x1800000000
7101c8f93c  movk x13,#0x6e6f, LSL #32
7101c8f940  movk x13,#0x696c, LSL #48
7101c8f944  mov w14,#0x6d
7101c8f948  stp x12,x13,[sp, #0x158]
7101c8f94c  mov x13,#0x656e
7101c8f950  movk x13,#0x725f, LSL #16
7101c8f954  movk x13,#0x6f6f, LSL #32
7101c8f958  movk x13,#0x5f6d, LSL #48
7101c8f95c  str x13,[sp, #0x168]
7101c8f960  mov w13,#0x7572
7101c8f964  strh w13,[sp, #0x170]
7101c8f968  mov w13,#0x656c
7101c8f96c  movk w13,#0x615f, LSL #16
7101c8f970  stur w13,[x9, #0x62]
7101c8f974  add x12,sp,#0x158
7101c8f978  mov w13,#0x6c6c
7101c8f97c  strh w13,[sp, #0x176]
7101c8f980  add x12,x12,#0x9
7101c8f984  mov w13,#0x89
7101c8f988  strb wzr,[sp, #0x178]
7101c8f98c  mov w15,w8
7101c8f990  mul w15,w15,w13
7101c8f994  and w14,w14,#0xff
7101c8f998  eor w15,w15,w14
7101c8f99c  ldrb w14,[x12], #0x1
7101c8f9a0  cbnz w14,0x7101c8f990
7101c8f9a4  b 0x7101c901e0
7101c8f9a8  tbz w21,#0x0,0x7101c8f9b8
7101c8f9ac  add x0,x19,#0x100
7101c8f9b0  mov w1,wzr
7101c8f9b4  bl 0x7101c83c40
7101c8f9b8  ldr x0,[x22, #0x8]
7101c8f9bc  adrp x1,0x7104319000
7101c8f9c0  add x1,x1,#0x6af
7101c8f9c4  bl 0x7103778760
7101c8f9c8  b 0x7101c913e0
7101c8f9cc  sxtb w10,w24
7101c8f9d0  mov w8,#0x4
7101c8f9d4  cmp w10,#0x4
7101c8f9d8  csel w10,w24,w8,lt
7101c8f9dc  sxtb w11,w10
7101c8f9e0  bic w11,w10,w11, ASR #0x7
7101c8f9e4  sxtb w10,w23
7101c8f9e8  cmp w10,#0x4
7101c8f9ec  strb w8,[sp, #0x74]
7101c8f9f0  csel w8,w23,w8,lt
7101c8f9f4  sxtb w10,w8
7101c8f9f8  and w12,w11,#0xff
7101c8f9fc  cmp w12,#0x5
7101c8fa00  strb w11,[sp, #0x10c]
7101c8fa04  bic w10,w8,w10, ASR #0x7
7101c8fa08  strb w10,[sp, #0x108]
7101c8fa0c  b.cs 0x7101c91400
7101c8fa10  and x12,x11,#0xff
7101c8fa14  adrp x11,0x7104545000
7101c8fa18  add x11,x11,#0x277
7101c8fa1c  ldrb w12,[x11, x12, LSL ]
7101c8fa20  cmp x12,#0x0
7101c8fa24  mov w8,#0x9dc5
7101c8fa28  movk w8,#0x811c, LSL #16
7101c8fa2c  cset w13,eq
7101c8fa30  cmp w12,#0x4
7101c8fa34  strb w13,[sp, #0x70]
7101c8fa38  b.hi 0x7101c906f8
7101c8fa3c  adrp x13,0x71044f9000
7101c8fa40  add x13,x13,#0x914
7101c8fa44  ldrsw x12,[x13, x12, LSL #0x2]
7101c8fa48  add x12,x12,x13
7101c8fa4c  br x12
7101c8fa50  mov x13,#0x6e6d
7101c8fa54  movk x13,#0x5f75, LSL #16
7101c8fa58  orr x12,xzr,#0x1800000000
7101c8fa5c  movk x13,#0x6e6f, LSL #32
7101c8fa60  movk x13,#0x696c, LSL #48
7101c8fa64  mov w14,#0x6d
7101c8fa68  stp x12,x13,[sp, #0x158]
7101c8fa6c  mov x13,#0x656e
7101c8fa70  movk x13,#0x725f, LSL #16
7101c8fa74  movk x13,#0x6f6f, LSL #32
7101c8fa78  movk x13,#0x5f6d, LSL #48
7101c8fa7c  str x13,[sp, #0x168]
7101c8fa80  mov w13,#0x6f66
7101c8fa84  strh w13,[sp, #0x170]
7101c8fa88  mov w13,#0x6d72
7101c8fa8c  movk w13,#0x615f, LSL #16
7101c8fa90  stur w13,[x9, #0x62]
7101c8fa94  add x12,sp,#0x158
7101c8fa98  mov w13,#0x6c6c
7101c8fa9c  strh w13,[sp, #0x176]
7101c8faa0  add x12,x12,#0x9
7101c8faa4  mov w13,#0x89
7101c8faa8  strb wzr,[sp, #0x178]
7101c8faac  mov w15,w8
7101c8fab0  mul w15,w15,w13
7101c8fab4  and w14,w14,#0xff
7101c8fab8  eor w15,w15,w14
7101c8fabc  ldrb w14,[x12], #0x1
7101c8fac0  cbnz w14,0x7101c8fab0
7101c8fac4  b 0x7101c908d4
7101c8fac8  mov w8,#0x1
7101c8facc  strb w8,[sp, #0x74]
7101c8fad0  sxtb w8,w24
7101c8fad4  cmp w8,#0x1
7101c8fad8  csinc w8,w24,wzr,lt
7101c8fadc  sxtb w9,w8
7101c8fae0  bic w1,w8,w9, ASR #0x7
7101c8fae4  sxtb w9,w23
7101c8fae8  cmp w9,#0x1
7101c8faec  csinc w9,w23,wzr,lt
7101c8faf0  sxtb w10,w9
7101c8faf4  and w8,w1,#0xff
7101c8faf8  cmp w8,#0x2
7101c8fafc  bic w2,w9,w10, ASR #0x7
7101c8fb00  strb w1,[sp, #0x10c]
7101c8fb04  strb w2,[sp, #0x108]
7101c8fb08  b.cs 0x7101c91400
7101c8fb0c  adrp x8,0x7104545000
7101c8fb10  add x8,x8,#0x280
7101c8fb14  and x9,x1,#0xff
7101c8fb18  ldrb w8,[x8, x9, LSL ]
7101c8fb1c  cmp w8,#0x1
7101c8fb20  cset w8,eq
7101c8fb24  sub x0,x29,#0xe0
7101c8fb28  sub x23,x29,#0xe0
7101c8fb2c  strb w8,[sp, #0x70]
7101c8fb30  bl 0x7101c919f0
7101c8fb34  mov x10,xzr
7101c8fb38  add x8,x23,#0x8
7101c8fb3c  add x9,sp,#0x78
7101c8fb40  b 0x7101c8fb4c
7101c8fb44  add x10,x10,#0x2
7101c8fb48  strb w11,[x12, #0x9]
7101c8fb4c  add x11,x8,x10
7101c8fb50  ldrb w13,[x11]
7101c8fb54  cbz w13,0x7101c8fc60
7101c8fb58  add w14,w10,#0x1
7101c8fb5c  add x12,x9,x10
7101c8fb60  cmp w14,#0x3f
7101c8fb64  strb w13,[x12, #0x8]
7101c8fb68  b.cs 0x7101c8fc5c
7101c8fb6c  ldrb w11,[x11, #0x1]
7101c8fb70  cbnz w11,0x7101c8fb44
7101c8fb74  add x10,x10,#0x1
7101c8fb78  b 0x7101c8fc60
7101c8fb7c  mov w8,#0x1
7101c8fb80  strb w8,[sp, #0x74]
7101c8fb84  sxtb w8,w24
7101c8fb88  cmp w8,#0x1
7101c8fb8c  csinc w8,w24,wzr,lt
7101c8fb90  sxtb w10,w23
7101c8fb94  cmp w10,#0x1
7101c8fb98  sxtb w9,w8
7101c8fb9c  bic w8,w8,w9, ASR #0x7
7101c8fba0  csinc w10,w23,wzr,lt
7101c8fba4  sxtb w11,w10
7101c8fba8  bic w10,w10,w11, ASR #0x7
7101c8fbac  and w9,w8,#0xff
7101c8fbb0  cmp w9,#0x2
7101c8fbb4  strb w8,[sp, #0x10c]
7101c8fbb8  strb w10,[sp, #0x108]
7101c8fbbc  b.cs 0x7101c91400
7101c8fbc0  adrp x11,0x7104545000
7101c8fbc4  add x11,x11,#0x280
7101c8fbc8  and x8,x8,#0xff
7101c8fbcc  ldrb w8,[x11, x8, LSL ]
7101c8fbd0  cmp w8,#0x1
7101c8fbd4  adrp x12,0x7104308000
7101c8fbd8  add x12,x12,#0x53b
7101c8fbdc  adrp x13,0x7104280000
7101c8fbe0  add x13,x13,#0xa36
7101c8fbe4  cset w14,eq
7101c8fbe8  cmp w8,#0x2
7101c8fbec  mov x9,xzr
7101c8fbf0  strb w14,[sp, #0x70]
7101c8fbf4  csel x8,x13,x12,eq
7101c8fbf8  add x14,sp,#0x158
7101c8fbfc  str xzr,[sp, #0x158]
7101c8fc00  b 0x7101c8fc0c
7101c8fc04  add x9,x9,#0x2
7101c8fc08  strb w15,[x16, #0x9]
7101c8fc0c  add x15,x8,x9
7101c8fc10  ldrb w17,[x15]
7101c8fc14  cbz w17,0x7101c8fcf4
7101c8fc18  add w18,w9,#0x1
7101c8fc1c  add x16,x14,x9
7101c8fc20  cmp w18,#0x3f
7101c8fc24  strb w17,[x16, #0x8]
7101c8fc28  b.cs 0x7101c8fcf0
7101c8fc2c  ldrb w15,[x15, #0x1]
7101c8fc30  cbnz w15,0x7101c8fc04
7101c8fc34  add x9,x9,#0x1
7101c8fc38  b 0x7101c8fcf4
7101c8fc3c  mov w0,wzr
7101c8fc40  bl 0x7101797350
7101c8fc44  tbz w0,#0x0,0x7101c90284
7101c8fc48  adrp x1,0x7104545000
7101c8fc4c  add x1,x1,#0x268
7101c8fc50  add x0,sp,#0x48
7101c8fc54  bl 0x7101c91410
7101c8fc58  b 0x7101c90e8c
7101c8fc5c  add w10,w10,#0x1
7101c8fc60  add x9,sp,#0x78
7101c8fc64  add x11,x9,#0x8
7101c8fc68  mov w8,#0x9dc5
7101c8fc6c  movk w8,#0x811c, LSL #16
7101c8fc70  mov w12,w8
7101c8fc74  strb wzr,[x11, w10, UXTW ]
7101c8fc78  str w10,[sp, #0x7c]
7101c8fc7c  ldrb w10,[sp, #0x80]
7101c8fc80  cbz w10,0x7101c8fca4
7101c8fc84  add x11,x9,#0x9
7101c8fc88  mov w13,#0x89
7101c8fc8c  mov w12,w8
7101c8fc90  mul w12,w12,w13
7101c8fc94  and w10,w10,#0xff
7101c8fc98  eor w12,w12,w10
7101c8fc9c  ldrb w10,[x11], #0x1
7101c8fca0  cbnz w10,0x7101c8fc90
7101c8fca4  sub x11,x29,#0xe0
7101c8fca8  mov x10,xzr
7101c8fcac  str w12,[sp, #0x78]
7101c8fcb0  add x11,x11,#0x50
7101c8fcb4  b 0x7101c8fcc0
7101c8fcb8  add x10,x10,#0x2
7101c8fcbc  strb w12,[x13, #0x51]
7101c8fcc0  add x12,x11,x10
7101c8fcc4  ldrb w14,[x12]
7101c8fcc8  cbz w14,0x7101c8fda8
7101c8fccc  add w15,w10,#0x1
7101c8fcd0  add x13,x9,x10
7101c8fcd4  cmp w15,#0x3f
7101c8fcd8  strb w14,[x13, #0x50]
7101c8fcdc  b.cs 0x7101c8fda4
7101c8fce0  ldrb w12,[x12, #0x1]
7101c8fce4  cbnz w12,0x7101c8fcb8
7101c8fce8  add x10,x10,#0x1
7101c8fcec  b 0x7101c8fda8
7101c8fcf0  add w9,w9,#0x1
7101c8fcf4  add x14,sp,#0x158
7101c8fcf8  add x15,x14,#0x8
7101c8fcfc  mov w8,#0x9dc5
7101c8fd00  movk w8,#0x811c, LSL #16
7101c8fd04  strb wzr,[x15, w9, UXTW ]
7101c8fd08  str w9,[sp, #0x15c]
7101c8fd0c  ldrb w9,[sp, #0x160]
7101c8fd10  mov w15,w8
7101c8fd14  cbz w9,0x7101c8fd3c
7101c8fd18  add x14,x14,#0x9
7101c8fd1c  mov w16,#0x89
7101c8fd20  mov w17,w9
7101c8fd24  mov w15,w8
7101c8fd28  mul w15,w15,w16
7101c8fd2c  and w17,w17,#0xff
7101c8fd30  eor w15,w15,w17
7101c8fd34  ldrb w17,[x14], #0x1
7101c8fd38  cbnz w17,0x7101c8fd28
7101c8fd3c  and w14,w10,#0xff
7101c8fd40  cmp w14,#0x2
7101c8fd44  str w15,[sp, #0x158]
7101c8fd48  b.cs 0x7101c91400
7101c8fd4c  and x10,x10,#0xff
7101c8fd50  ldrb w10,[x11, x10, LSL ]
7101c8fd54  add x11,sp,#0x110
7101c8fd58  cmp w10,#0x2
7101c8fd5c  mov x14,xzr
7101c8fd60  str xzr,[sp, #0x110]
7101c8fd64  csel x10,x13,x12,eq
7101c8fd68  b 0x7101c8fd74
7101c8fd6c  add x14,x14,#0x2
7101c8fd70  strb w12,[x13, #0x9]
7101c8fd74  add x12,x10,x14
7101c8fd78  ldrb w15,[x12]
7101c8fd7c  cbz w15,0x7101c8fde4
7101c8fd80  add w16,w14,#0x1
7101c8fd84  add x13,x11,x14
7101c8fd88  cmp w16,#0x3f
7101c8fd8c  strb w15,[x13, #0x8]
7101c8fd90  b.cs 0x7101c8fde0
7101c8fd94  ldrb w12,[x12, #0x1]
7101c8fd98  cbnz w12,0x7101c8fd6c
7101c8fd9c  add x14,x14,#0x1
7101c8fda0  b 0x7101c8fde4
7101c8fda4  add w10,w10,#0x1
7101c8fda8  add x9,sp,#0x78
7101c8fdac  add x11,x9,#0x50
7101c8fdb0  strb wzr,[x11, w10, UXTW ]
7101c8fdb4  str w10,[sp, #0xc4]
7101c8fdb8  ldrb w10,[sp, #0xc8]
7101c8fdbc  cbz w10,0x7101c90e88
7101c8fdc0  add x9,x9,#0x51
7101c8fdc4  mov w11,#0x89
7101c8fdc8  mul w8,w8,w11
7101c8fdcc  and w10,w10,#0xff
7101c8fdd0  eor w8,w8,w10
7101c8fdd4  ldrb w10,[x9], #0x1
7101c8fdd8  cbnz w10,0x7101c8fdc8
7101c8fddc  b 0x7101c90e88
7101c8fde0  add w14,w14,#0x1
7101c8fde4  add x11,sp,#0x110
7101c8fde8  add x10,x11,#0x8
7101c8fdec  mov w13,w8
7101c8fdf0  strb wzr,[x10, w14, UXTW ]
7101c8fdf4  ldrb w10,[sp, #0x118]
7101c8fdf8  str w14,[sp, #0x114]
7101c8fdfc  cbz w10,0x7101c8fe24
7101c8fe00  add x11,x11,#0x9
7101c8fe04  mov w12,#0x89
7101c8fe08  mov w14,w10
7101c8fe0c  mov w13,w8
7101c8fe10  mul w13,w13,w12
7101c8fe14  and w14,w14,#0xff
7101c8fe18  eor w13,w13,w14
7101c8fe1c  ldrb w14,[x11], #0x1
7101c8fe20  cbnz w14,0x7101c8fe10
7101c8fe24  str w13,[sp, #0x110]
7101c8fe28  add x11,sp,#0x158
7101c8fe2c  sub x13,x29,#0xe0
7101c8fe30  mov x12,xzr
7101c8fe34  add x11,x11,#0x9
7101c8fe38  add x13,x13,#0x9
7101c8fe3c  stur wzr,[x29, #-0xe0]
7101c8fe40  tst w9,#0xff
7101c8fe44  b.eq 0x7101c8fe8c
7101c8fe48  add w14,w12,#0x1
7101c8fe4c  add x15,x13,x12
7101c8fe50  cmp w14,#0x3f
7101c8fe54  sturb w9,[x15, #-0x1]
7101c8fe58  b.cs 0x7101c8fe80
7101c8fe5c  ldrb w9,[x11, x12, LSL ]
7101c8fe60  cbz w9,0x7101c8fe88
7101c8fe64  add x14,x11,x12
7101c8fe68  strb w9,[x13, x12, LSL ]
7101c8fe6c  ldrb w9,[x14, #0x1]
7101c8fe70  add x12,x12,#0x2
7101c8fe74  tst w9,#0xff
7101c8fe78  b.ne 0x7101c8fe48
7101c8fe7c  b 0x7101c8fe8c
7101c8fe80  add w12,w12,#0x1
7101c8fe84  b 0x7101c8fe8c
7101c8fe88  add x12,x12,#0x1
7101c8fe8c  sub x11,x29,#0xe0
7101c8fe90  add x9,x11,#0x8
7101c8fe94  mov w13,w8
7101c8fe98  strb wzr,[x9, w12, UXTW ]
7101c8fe9c  ldurb w9,[x29, #-0xd8]
7101c8fea0  stur w12,[x29, #-0xdc]
7101c8fea4  cbz w9,0x7101c8fecc
7101c8fea8  add x12,x11,#0x9
7101c8feac  mov w14,#0x89
7101c8feb0  mov w15,w9
7101c8feb4  mov w13,w8
7101c8feb8  mul w13,w13,w14
7101c8febc  and w15,w15,#0xff
7101c8fec0  eor w13,w13,w15
7101c8fec4  ldrb w15,[x12], #0x1
7101c8fec8  cbnz w15,0x7101c8feb8
7101c8fecc  stur w13,[x29, #-0xe0]
7101c8fed0  add x13,sp,#0x110
7101c8fed4  mov x12,xzr
7101c8fed8  add x13,x13,#0x9
7101c8fedc  stur wzr,[x29, #-0x98]
7101c8fee0  tst w10,#0xff
7101c8fee4  b.eq 0x7101c8ff2c
7101c8fee8  add w15,w12,#0x1
7101c8feec  add x14,x11,x12
7101c8fef0  cmp w15,#0x3f
7101c8fef4  strb w10,[x14, #0x50]
7101c8fef8  b.cs 0x7101c8ff20
7101c8fefc  ldrb w10,[x13, x12, LSL ]
7101c8ff00  cbz w10,0x7101c8ff28
7101c8ff04  add x15,x13,x12
7101c8ff08  strb w10,[x14, #0x51]
7101c8ff0c  ldrb w10,[x15, #0x1]
7101c8ff10  add x12,x12,#0x2
7101c8ff14  tst w10,#0xff
7101c8ff18  b.ne 0x7101c8fee8
7101c8ff1c  b 0x7101c8ff2c
7101c8ff20  add w12,w12,#0x1
7101c8ff24  b 0x7101c8ff2c
7101c8ff28  add x12,x12,#0x1
7101c8ff2c  sub x11,x29,#0xe0
7101c8ff30  add x10,x11,#0x50
7101c8ff34  strb wzr,[x10, w12, UXTW ]
7101c8ff38  ldurb w10,[x29, #-0x90]
7101c8ff3c  stur w12,[x29, #-0x94]
7101c8ff40  mov w12,w8
7101c8ff44  cbz w10,0x7101c8ff6c
7101c8ff48  add x11,x11,#0x51
7101c8ff4c  mov w13,#0x89
7101c8ff50  mov w14,w10
7101c8ff54  mov w12,w8
7101c8ff58  mul w12,w12,w13
7101c8ff5c  and w14,w14,#0xff
7101c8ff60  eor w12,w12,w14
7101c8ff64  ldrb w14,[x11], #0x1
7101c8ff68  cbnz w14,0x7101c8ff58
7101c8ff6c  stur w12,[x29, #-0x98]
7101c8ff70  cbz w9,0x7101c8ffac
7101c8ff74  sub x12,x29,#0xe0
7101c8ff78  add x13,sp,#0x78
7101c8ff7c  mov x11,xzr
7101c8ff80  add x12,x12,#0x9
7101c8ff84  add x13,x13,#0x8
7101c8ff88  add w14,w11,#0x1
7101c8ff8c  cmp w14,#0x3e
7101c8ff90  strb w9,[x13, x11, LSL ]
7101c8ff94  b.hi 0x7101c8ffb4
7101c8ff98  ldrb w9,[x12, x11, LSL ]
7101c8ff9c  add x14,x11,#0x1
7101c8ffa0  mov x11,x14
7101c8ffa4  cbnz w9,0x7101c8ff88
7101c8ffa8  b 0x7101c8ffb8
7101c8ffac  mov x14,xzr
7101c8ffb0  b 0x7101c8ffb8
7101c8ffb4  add w14,w11,#0x1
7101c8ffb8  add x11,sp,#0x78
7101c8ffbc  add x9,x11,#0x8
7101c8ffc0  mov w12,w8
7101c8ffc4  strb wzr,[x9, w14, UXTW ]
7101c8ffc8  ldrb w9,[sp, #0x80]
7101c8ffcc  str w14,[sp, #0x7c]
7101c8ffd0  cbz w9,0x7101c8fff4
7101c8ffd4  add x11,x11,#0x9
7101c8ffd8  mov w13,#0x89
7101c8ffdc  mov w12,w8
7101c8ffe0  mul w12,w12,w13
7101c8ffe4  and w9,w9,#0xff
7101c8ffe8  eor w12,w12,w9
7101c8ffec  ldrb w9,[x11], #0x1
7101c8fff0  cbnz w9,0x7101c8ffe0
7101c8fff4  str w12,[sp, #0x78]
7101c8fff8  cbz w10,0x7101c90034
7101c8fffc  sub x11,x29,#0xe0
7101c90000  add x12,sp,#0x78
7101c90004  mov x9,xzr
7101c90008  add x11,x11,#0x51
7101c9000c  add x12,x12,#0x50
7101c90010  add w13,w9,#0x1
7101c90014  cmp w13,#0x3e
7101c90018  strb w10,[x12, x9, LSL ]
7101c9001c  b.hi 0x7101c9003c
7101c90020  ldrb w10,[x11, x9, LSL ]
7101c90024  add x13,x9,#0x1
7101c90028  mov x9,x13
7101c9002c  cbnz w10,0x7101c90010
7101c90030  b 0x7101c90040
7101c90034  mov w13,wzr
7101c90038  b 0x7101c90040
7101c9003c  add w13,w9,#0x1
7101c90040  add x9,sp,#0x78
7101c90044  add x10,x9,#0x50
7101c90048  strb wzr,[x10, w13, UXTW ]
7101c9004c  ldrb w10,[sp, #0xc8]
7101c90050  str w13,[sp, #0xc4]
7101c90054  cbz w10,0x7101c90e88
7101c90058  add x9,x9,#0x51
7101c9005c  mov w11,#0x89
7101c90060  mul w8,w8,w11
7101c90064  and w10,w10,#0xff
7101c90068  eor w8,w8,w10
7101c9006c  ldrb w10,[x9], #0x1
7101c90070  cbnz w10,0x7101c90060
7101c90074  b 0x7101c90e88
7101c90078  mov x13,#0x6e6d
7101c9007c  movk x13,#0x5f75, LSL #16
7101c90080  orr x12,xzr,#0x1c00000000
7101c90084  movk x13,#0x6e6f, LSL #32
7101c90088  movk x13,#0x696c, LSL #48
7101c9008c  mov w14,#0x6d
7101c90090  stp x12,x13,[sp, #0x158]
7101c90094  mov x13,#0x656e
7101c90098  movk x13,#0x725f, LSL #16
7101c9009c  movk x13,#0x6f6f, LSL #32
7101c900a0  movk x13,#0x5f6d, LSL #48
7101c900a4  str x13,[sp, #0x168]
7101c900a8  mov w13,#0x7572
7101c900ac  strh w13,[sp, #0x170]
7101c900b0  mov x13,#0x656c
7101c900b4  movk x13,#0x735f, LSL #16
7101c900b8  movk x13,#0x6174, LSL #32
7101c900bc  movk x13,#0x696d, LSL #48
7101c900c0  stur x13,[x9, #0x62]
7101c900c4  add x12,sp,#0x158
7101c900c8  mov w13,#0x616e
7101c900cc  strh w13,[sp, #0x17a]
7101c900d0  add x12,x12,#0x9
7101c900d4  mov w13,#0x89
7101c900d8  strb wzr,[sp, #0x17c]
7101c900dc  mov w15,w8
7101c900e0  mul w15,w15,w13
7101c900e4  and w14,w14,#0xff
7101c900e8  eor w15,w15,w14
7101c900ec  ldrb w14,[x12], #0x1
7101c900f0  cbnz w14,0x7101c900e0
7101c900f4  b 0x7101c901e0
7101c900f8  mov x13,#0x6e6d
7101c900fc  movk x13,#0x5f75, LSL #16
7101c90100  mov x12,#0x1a00000000
7101c90104  movk x13,#0x6e6f, LSL #32
7101c90108  movk x13,#0x696c, LSL #48
7101c9010c  add x14,sp,#0x158
7101c90110  stp x12,x13,[sp, #0x158]
7101c90114  mov x13,#0x656e
7101c90118  movk x13,#0x725f, LSL #16
7101c9011c  movk x13,#0x6f6f, LSL #32
7101c90120  movk x13,#0x5f6d, LSL #48
7101c90124  str x13,[sp, #0x168]
7101c90128  mov w13,#0x7572
7101c9012c  strh w13,[sp, #0x170]
7101c90130  mov x13,#0x656c
7101c90134  movk x13,#0x735f, LSL #16
7101c90138  movk x13,#0x6f74, LSL #32
7101c9013c  movk x13,#0x6b63, LSL #48
7101c90140  stur x13,[x9, #0x62]
7101c90144  add x12,x14,#0x9
7101c90148  mov w14,#0x6d
7101c9014c  strb wzr,[sp, #0x17a]
7101c90150  mov w13,#0x89
7101c90154  mov w15,w8
7101c90158  mul w15,w15,w13
7101c9015c  and w14,w14,#0xff
7101c90160  eor w15,w15,w14
7101c90164  ldrb w14,[x12], #0x1
7101c90168  cbnz w14,0x7101c90158
7101c9016c  b 0x7101c901e0
7101c90170  mov x13,#0x6e6d
7101c90174  movk x13,#0x5f75, LSL #16
7101c90178  mov x12,#0x1900000000
7101c9017c  movk x13,#0x6e6f, LSL #32
7101c90180  movk x13,#0x696c, LSL #48
7101c90184  mov x15,#0x656c
7101c90188  movk x15,#0x745f, LSL #16
7101c9018c  stp x12,x13,[sp, #0x158]
7101c90190  mov x13,#0x656e
7101c90194  movk x13,#0x725f, LSL #16
7101c90198  movk x13,#0x6f6f, LSL #32
7101c9019c  movk x13,#0x5f6d, LSL #48
7101c901a0  str x13,[sp, #0x168]
7101c901a4  add x14,sp,#0x158
7101c901a8  mov w13,#0x7572
7101c901ac  strh w13,[sp, #0x170]
7101c901b0  movk x15,#0x6d69, LSL #32
7101c901b4  movk x15,#0x65, LSL #48
7101c901b8  stur x15,[x9, #0x62]
7101c901bc  add x12,x14,#0x9
7101c901c0  mov w14,#0x6d
7101c901c4  mov w13,#0x89
7101c901c8  mov w15,w8
7101c901cc  mul w15,w15,w13
7101c901d0  and w14,w14,#0xff
7101c901d4  eor w15,w15,w14
7101c901d8  ldrb w14,[x12], #0x1
7101c901dc  cbnz w14,0x7101c901cc
7101c901e0  and w12,w10,#0xff
7101c901e4  cmp w12,#0x4
7101c901e8  str w15,[sp, #0x158]
7101c901ec  b.cs 0x7101c91400
7101c901f0  and x10,x10,#0xff
7101c901f4  ldrb w10,[x11, x10, LSL ]
7101c901f8  cmp w10,#0x3
7101c901fc  b.eq 0x7101c90330
7101c90200  cmp w10,#0x2
7101c90204  b.eq 0x7101c903b0
7101c90208  cbnz w10,0x7101c9042c
7101c9020c  mov x11,#0x6e6d
7101c90210  movk x11,#0x5f75, LSL #16
7101c90214  orr x10,xzr,#0x1800000000
7101c90218  movk x11,#0x6e6f, LSL #32
7101c9021c  movk x11,#0x696c, LSL #48
7101c90220  mov w12,w8
7101c90224  stp x10,x11,[sp, #0x110]
7101c90228  mov x11,#0x656e
7101c9022c  movk x11,#0x725f, LSL #16
7101c90230  movk x11,#0x6f6f, LSL #32
7101c90234  movk x11,#0x5f6d, LSL #48
7101c90238  str x11,[sp, #0x120]
7101c9023c  mov w11,#0x7572
7101c90240  strh w11,[sp, #0x128]
7101c90244  mov w11,#0x656c
7101c90248  movk w11,#0x615f, LSL #16
7101c9024c  stur w11,[x9, #0x1a]
7101c90250  add x10,sp,#0x110
7101c90254  mov w9,#0x6c6c
7101c90258  strh w9,[sp, #0x12e]
7101c9025c  add x10,x10,#0x9
7101c90260  mov w11,#0x6d
7101c90264  strb wzr,[sp, #0x130]
7101c90268  mov w9,#0x89
7101c9026c  mul w12,w12,w9
7101c90270  and w11,w11,#0xff
7101c90274  eor w12,w12,w11
7101c90278  ldrb w11,[x10], #0x1
7101c9027c  cbnz w11,0x7101c9026c
7101c90280  b 0x7101c90424
7101c90284  ldrsb w9,[sp, #0x10c]
7101c90288  ldrsb w10,[sp, #0x108]
7101c9028c  orr w8,wzr,#0x6
7101c90290  strb w8,[sp, #0x74]
7101c90294  cmp w9,#0x6
7101c90298  csel w9,w9,w8,lt
7101c9029c  cmp w10,#0x6
7101c902a0  bic w2,w9,w9, ASR #0x7
7101c902a4  csel w8,w10,w8,lt
7101c902a8  bic w3,w8,w8, ASR #0x7
7101c902ac  and w9,w2,#0xff
7101c902b0  cmp w9,#0x7
7101c902b4  strb w2,[sp, #0x10c]
7101c902b8  strb w3,[sp, #0x108]
7101c902bc  b.cs 0x7101c91400
7101c902c0  adrp x1,0x7104545000
7101c902c4  add x1,x1,#0x270
7101c902c8  and x8,x2,#0xff
7101c902cc  ldrb w8,[x1, x8, LSL ]
7101c902d0  cmp w8,#0x0
7101c902d4  cset w8,eq
7101c902d8  sub x0,x29,#0xe0
7101c902dc  sub x23,x29,#0xe0
7101c902e0  strb w8,[sp, #0x70]
7101c902e4  bl 0x7101c8dd70
7101c902e8  mov x10,xzr
7101c902ec  add x8,x23,#0x8
7101c902f0  add x9,sp,#0x78
7101c902f4  b 0x7101c90300
7101c902f8  add x10,x10,#0x2
7101c902fc  strb w11,[x12, #0x9]
7101c90300  add x11,x8,x10
7101c90304  ldrb w13,[x11]
7101c90308  cbz w13,0x7101c90dc0
7101c9030c  add w14,w10,#0x1
7101c90310  add x12,x9,x10
7101c90314  cmp w14,#0x3f
7101c90318  strb w13,[x12, #0x8]
7101c9031c  b.cs 0x7101c90dbc
7101c90320  ldrb w11,[x11, #0x1]
7101c90324  cbnz w11,0x7101c902f8
7101c90328  add x10,x10,#0x1
7101c9032c  b 0x7101c90dc0
7101c90330  mov x11,#0x6e6d
7101c90334  movk x11,#0x5f75, LSL #16
7101c90338  orr x10,xzr,#0x1c00000000
7101c9033c  movk x11,#0x6e6f, LSL #32
7101c90340  movk x11,#0x696c, LSL #48
7101c90344  mov w12,w8
7101c90348  stp x10,x11,[sp, #0x110]
7101c9034c  mov x11,#0x656e
7101c90350  movk x11,#0x725f, LSL #16
7101c90354  movk x11,#0x6f6f, LSL #32
7101c90358  movk x11,#0x5f6d, LSL #48
7101c9035c  str x11,[sp, #0x120]
7101c90360  mov w11,#0x7572
7101c90364  strh w11,[sp, #0x128]
7101c90368  mov x11,#0x656c
7101c9036c  movk x11,#0x735f, LSL #16
7101c90370  movk x11,#0x6174, LSL #32
7101c90374  movk x11,#0x696d, LSL #48
7101c90378  stur x11,[x9, #0x1a]
7101c9037c  add x10,sp,#0x110
7101c90380  mov w9,#0x616e
7101c90384  strh w9,[sp, #0x132]
7101c90388  add x10,x10,#0x9
7101c9038c  mov w11,#0x6d
7101c90390  strb wzr,[sp, #0x134]
7101c90394  mov w9,#0x89
7101c90398  mul w12,w12,w9
7101c9039c  and w11,w11,#0xff
7101c903a0  eor w12,w12,w11
7101c903a4  ldrb w11,[x10], #0x1
7101c903a8  cbnz w11,0x7101c90398
7101c903ac  b 0x7101c90424
7101c903b0  mov x11,#0x6e6d
7101c903b4  movk x11,#0x5f75, LSL #16
7101c903b8  mov x10,#0x1a00000000
7101c903bc  movk x11,#0x6e6f, LSL #32
7101c903c0  movk x11,#0x696c, LSL #48
7101c903c4  add x12,sp,#0x110
7101c903c8  stp x10,x11,[sp, #0x110]
7101c903cc  mov x11,#0x656e
7101c903d0  movk x11,#0x725f, LSL #16
7101c903d4  movk x11,#0x6f6f, LSL #32
7101c903d8  movk x11,#0x5f6d, LSL #48
7101c903dc  str x11,[sp, #0x120]
7101c903e0  mov w11,#0x7572
7101c903e4  strh w11,[sp, #0x128]
7101c903e8  mov x11,#0x656c
7101c903ec  movk x11,#0x735f, LSL #16
7101c903f0  movk x11,#0x6f74, LSL #32
7101c903f4  movk x11,#0x6b63, LSL #48
7101c903f8  stur x11,[x9, #0x1a]
7101c903fc  add x10,x12,#0x9
7101c90400  mov w11,#0x6d
7101c90404  strb wzr,[sp, #0x132]
7101c90408  mov w9,#0x89
7101c9040c  mov w12,w8
7101c90410  mul w12,w12,w9
7101c90414  and w11,w11,#0xff
7101c90418  eor w12,w12,w11
7101c9041c  ldrb w11,[x10], #0x1
7101c90420  cbnz w11,0x7101c90410
7101c90424  str w12,[sp, #0x110]
7101c90428  b 0x7101c904a0
7101c9042c  mov x11,#0x6e6d
7101c90430  movk x11,#0x5f75, LSL #16
7101c90434  mov x10,#0x1900000000
7101c90438  movk x11,#0x6e6f, LSL #32
7101c9043c  movk x11,#0x696c, LSL #48
7101c90440  mov x13,#0x656c
7101c90444  movk x13,#0x745f, LSL #16
7101c90448  stp x10,x11,[sp, #0x110]
7101c9044c  mov x11,#0x656e
7101c90450  movk x11,#0x725f, LSL #16
7101c90454  movk x11,#0x6f6f, LSL #32
7101c90458  movk x11,#0x5f6d, LSL #48
7101c9045c  str x11,[sp, #0x120]
7101c90460  add x12,sp,#0x110
7101c90464  mov w11,#0x7572
7101c90468  strh w11,[sp, #0x128]
7101c9046c  movk x13,#0x6d69, LSL #32
7101c90470  movk x13,#0x65, LSL #48
7101c90474  stur x13,[x9, #0x1a]
7101c90478  add x10,x12,#0x9
7101c9047c  mov w12,#0x6d
7101c90480  mov w11,#0x89
7101c90484  mov w9,w8
7101c90488  mul w9,w9,w11
7101c9048c  and w12,w12,#0xff
7101c90490  eor w9,w9,w12
7101c90494  ldrb w12,[x10], #0x1
7101c90498  cbnz w12,0x7101c90488
7101c9049c  str w9,[sp, #0x110]
7101c904a0  add x10,sp,#0x158
7101c904a4  sub x11,x29,#0xe0
7101c904a8  mov x9,xzr
7101c904ac  add x10,x10,#0x9
7101c904b0  add x11,x11,#0x9
7101c904b4  stur wzr,[x29, #-0xe0]
7101c904b8  mov w12,#0x6d
7101c904bc  tst w12,#0xff
7101c904c0  b.eq 0x7101c90508
7101c904c4  add w13,w9,#0x1
7101c904c8  add x14,x11,x9
7101c904cc  cmp w13,#0x3f
7101c904d0  sturb w12,[x14, #-0x1]
7101c904d4  b.cs 0x7101c904fc
7101c904d8  ldrb w12,[x10, x9, LSL ]
7101c904dc  cbz w12,0x7101c90504
7101c904e0  add x13,x10,x9
7101c904e4  strb w12,[x11, x9, LSL ]
7101c904e8  ldrb w12,[x13, #0x1]
7101c904ec  add x9,x9,#0x2
7101c904f0  tst w12,#0xff
7101c904f4  b.ne 0x7101c904c4
7101c904f8  b 0x7101c90508
7101c904fc  add w9,w9,#0x1
7101c90500  b 0x7101c90508
7101c90504  add x9,x9,#0x1
7101c90508  sub x10,x29,#0xe0
7101c9050c  add x11,x10,#0x8
7101c90510  mov w12,w8
7101c90514  strb wzr,[x11, w9, UXTW ]
7101c90518  stur w9,[x29, #-0xdc]
7101c9051c  ldurb w9,[x29, #-0xd8]
7101c90520  cbz w9,0x7101c90548
7101c90524  add x11,x10,#0x9
7101c90528  mov w13,#0x89
7101c9052c  mov w14,w9
7101c90530  mov w12,w8
7101c90534  mul w12,w12,w13
7101c90538  and w14,w14,#0xff
7101c9053c  eor w12,w12,w14
7101c90540  ldrb w14,[x11], #0x1
7101c90544  cbnz w14,0x7101c90534
7101c90548  stur w12,[x29, #-0xe0]
7101c9054c  add x12,sp,#0x110
7101c90550  mov x11,xzr
7101c90554  add x12,x12,#0x9
7101c90558  mov w13,#0x6d
7101c9055c  stur wzr,[x29, #-0x98]
7101c90560  tst w13,#0xff
7101c90564  b.eq 0x7101c905ac
7101c90568  add w15,w11,#0x1
7101c9056c  add x14,x10,x11
7101c90570  cmp w15,#0x3f
7101c90574  strb w13,[x14, #0x50]
7101c90578  b.cs 0x7101c905a0
7101c9057c  ldrb w13,[x12, x11, LSL ]
7101c90580  cbz w13,0x7101c905a8
7101c90584  add x15,x12,x11
7101c90588  strb w13,[x14, #0x51]
7101c9058c  ldrb w13,[x15, #0x1]
7101c90590  add x11,x11,#0x2
7101c90594  tst w13,#0xff
7101c90598  b.ne 0x7101c90568
7101c9059c  b 0x7101c905ac
7101c905a0  add w11,w11,#0x1
7101c905a4  b 0x7101c905ac
7101c905a8  add x11,x11,#0x1
7101c905ac  sub x13,x29,#0xe0
7101c905b0  add x10,x13,#0x50
7101c905b4  mov w12,w8
7101c905b8  strb wzr,[x10, w11, UXTW ]
7101c905bc  ldurb w10,[x29, #-0x90]
7101c905c0  stur w11,[x29, #-0x94]
7101c905c4  cbz w10,0x7101c905ec
7101c905c8  add x11,x13,#0x51
7101c905cc  mov w13,#0x89
7101c905d0  mov w14,w10
7101c905d4  mov w12,w8
7101c905d8  mul w12,w12,w13
7101c905dc  and w14,w14,#0xff
7101c905e0  eor w12,w12,w14
7101c905e4  ldrb w14,[x11], #0x1
7101c905e8  cbnz w14,0x7101c905d8
7101c905ec  stur w12,[x29, #-0x98]
7101c905f0  cbz w9,0x7101c9062c
7101c905f4  sub x12,x29,#0xe0
7101c905f8  add x13,sp,#0x78
7101c905fc  mov x11,xzr
7101c90600  add x12,x12,#0x9
7101c90604  add x13,x13,#0x8
7101c90608  add w14,w11,#0x1
7101c9060c  cmp w14,#0x3e
7101c90610  strb w9,[x13, x11, LSL ]
7101c90614  b.hi 0x7101c90634
7101c90618  ldrb w9,[x12, x11, LSL ]
7101c9061c  add x14,x11,#0x1
7101c90620  mov x11,x14
7101c90624  cbnz w9,0x7101c90608
7101c90628  b 0x7101c90638
7101c9062c  mov x14,xzr
7101c90630  b 0x7101c90638
7101c90634  add w14,w11,#0x1
7101c90638  add x11,sp,#0x78
7101c9063c  add x9,x11,#0x8
7101c90640  mov w12,w8
7101c90644  strb wzr,[x9, w14, UXTW ]
7101c90648  ldrb w9,[sp, #0x80]
7101c9064c  str w14,[sp, #0x7c]
7101c90650  cbz w9,0x7101c90674
7101c90654  add x11,x11,#0x9
7101c90658  mov w13,#0x89
7101c9065c  mov w12,w8
7101c90660  mul w12,w12,w13
7101c90664  and w9,w9,#0xff
7101c90668  eor w12,w12,w9
7101c9066c  ldrb w9,[x11], #0x1
7101c90670  cbnz w9,0x7101c90660
7101c90674  str w12,[sp, #0x78]
7101c90678  cbz w10,0x7101c906b4
7101c9067c  sub x11,x29,#0xe0
7101c90680  add x12,sp,#0x78
7101c90684  mov x9,xzr
7101c90688  add x11,x11,#0x51
7101c9068c  add x12,x12,#0x50
7101c90690  add w13,w9,#0x1
7101c90694  cmp w13,#0x3e
7101c90698  strb w10,[x12, x9, LSL ]
7101c9069c  b.hi 0x7101c906bc
7101c906a0  ldrb w10,[x11, x9, LSL ]
7101c906a4  add x13,x9,#0x1
7101c906a8  mov x9,x13
7101c906ac  cbnz w10,0x7101c90690
7101c906b0  b 0x7101c906c0
7101c906b4  mov w13,wzr
7101c906b8  b 0x7101c906c0
7101c906bc  add w13,w9,#0x1
7101c906c0  add x9,sp,#0x78
7101c906c4  add x10,x9,#0x50
7101c906c8  strb wzr,[x10, w13, UXTW ]
7101c906cc  ldrb w10,[sp, #0xc8]
7101c906d0  str w13,[sp, #0xc4]
7101c906d4  cbz w10,0x7101c90e88
7101c906d8  add x9,x9,#0x51
7101c906dc  mov w11,#0x89
7101c906e0  mul w8,w8,w11
7101c906e4  and w10,w10,#0xff
7101c906e8  eor w8,w8,w10
7101c906ec  ldrb w10,[x9], #0x1
7101c906f0  cbnz w10,0x7101c906e0
7101c906f4  b 0x7101c90e88
7101c906f8  mov x13,#0x6e6d
7101c906fc  movk x13,#0x5f75, LSL #16
7101c90700  mov x12,#0x1900000000
7101c90704  movk x13,#0x6e6f, LSL #32
7101c90708  movk x13,#0x696c, LSL #48
7101c9070c  mov x15,#0x6d72
7101c90710  movk x15,#0x665f, LSL #16
7101c90714  stp x12,x13,[sp, #0x158]
7101c90718  mov x13,#0x656e
7101c9071c  movk x13,#0x725f, LSL #16
7101c90720  movk x13,#0x6f6f, LSL #32
7101c90724  movk x13,#0x5f6d, LSL #48
7101c90728  str x13,[sp, #0x168]
7101c9072c  add x14,sp,#0x158
7101c90730  mov w13,#0x6f66
7101c90734  strh w13,[sp, #0x170]
7101c90738  movk x15,#0x756f, LSL #32
7101c9073c  movk x15,#0x72, LSL #48
7101c90740  stur x15,[x9, #0x62]
7101c90744  add x12,x14,#0x9
7101c90748  mov w14,#0x6d
7101c9074c  mov w13,#0x89
7101c90750  mov w15,w8
7101c90754  mul w15,w15,w13
7101c90758  and w14,w14,#0xff
7101c9075c  eor w15,w15,w14
7101c90760  ldrb w14,[x12], #0x1
7101c90764  cbnz w14,0x7101c90754
7101c90768  b 0x7101c908d4
7101c9076c  mov x13,#0x6e6d
7101c90770  movk x13,#0x5f75, LSL #16
7101c90774  mov x12,#0x1a00000000
7101c90778  movk x13,#0x6e6f, LSL #32
7101c9077c  movk x13,#0x696c, LSL #48
7101c90780  add x14,sp,#0x158
7101c90784  stp x12,x13,[sp, #0x158]
7101c90788  mov x13,#0x656e
7101c9078c  movk x13,#0x725f, LSL #16
7101c90790  movk x13,#0x6f6f, LSL #32
7101c90794  movk x13,#0x5f6d, LSL #48
7101c90798  str x13,[sp, #0x168]
7101c9079c  mov w13,#0x6f66
7101c907a0  strh w13,[sp, #0x170]
7101c907a4  mov x13,#0x6d72
7101c907a8  movk x13,#0x745f, LSL #16
7101c907ac  movk x13,#0x7268, LSL #32
7101c907b0  movk x13,#0x6565, LSL #48
7101c907b4  stur x13,[x9, #0x62]
7101c907b8  add x12,x14,#0x9
7101c907bc  mov w14,#0x6d
7101c907c0  strb wzr,[sp, #0x17a]
7101c907c4  mov w13,#0x89
7101c907c8  mov w15,w8
7101c907cc  mul w15,w15,w13
7101c907d0  and w14,w14,#0xff
7101c907d4  eor w15,w15,w14
7101c907d8  ldrb w14,[x12], #0x1
7101c907dc  cbnz w14,0x7101c907cc
7101c907e0  b 0x7101c908d4
7101c907e4  mov x13,#0x6e6d
7101c907e8  movk x13,#0x5f75, LSL #16
7101c907ec  orr x12,xzr,#0x1c00000000
7101c907f0  movk x13,#0x6e6f, LSL #32
7101c907f4  movk x13,#0x696c, LSL #48
7101c907f8  mov w14,#0x6d
7101c907fc  stp x12,x13,[sp, #0x158]
7101c90800  mov x13,#0x656e
7101c90804  movk x13,#0x725f, LSL #16
7101c90808  movk x13,#0x6f6f, LSL #32
7101c9080c  movk x13,#0x5f6d, LSL #48
7101c90810  str x13,[sp, #0x168]
7101c90814  mov w13,#0x6f66
7101c90818  strh w13,[sp, #0x170]
7101c9081c  mov x13,#0x6d72
7101c90820  movk x13,#0x6f5f, LSL #16
7101c90824  movk x13,#0x656e, LSL #32
7101c90828  movk x13,#0x6f5f, LSL #48
7101c9082c  stur x13,[x9, #0x62]
7101c90830  add x12,sp,#0x158
7101c90834  mov w13,#0x656e
7101c90838  strh w13,[sp, #0x17a]
7101c9083c  add x12,x12,#0x9
7101c90840  mov w13,#0x89
7101c90844  strb wzr,[sp, #0x17c]
7101c90848  mov w15,w8
7101c9084c  mul w15,w15,w13
7101c90850  and w14,w14,#0xff
7101c90854  eor w15,w15,w14
7101c90858  ldrb w14,[x12], #0x1
7101c9085c  cbnz w14,0x7101c9084c
7101c90860  b 0x7101c908d4
7101c90864  mov x13,#0x6e6d
7101c90868  movk x13,#0x5f75, LSL #16
7101c9086c  mov x12,#0x1900000000
7101c90870  movk x13,#0x6e6f, LSL #32
7101c90874  movk x13,#0x696c, LSL #48
7101c90878  mov x15,#0x6d72
7101c9087c  movk x15,#0x745f, LSL #16
7101c90880  stp x12,x13,[sp, #0x158]
7101c90884  mov x13,#0x656e
7101c90888  movk x13,#0x725f, LSL #16
7101c9088c  movk x13,#0x6f6f, LSL #32
7101c90890  movk x13,#0x5f6d, LSL #48
7101c90894  str x13,[sp, #0x168]
7101c90898  add x14,sp,#0x158
7101c9089c  mov w13,#0x6f66
7101c908a0  strh w13,[sp, #0x170]
7101c908a4  movk x15,#0x6165, LSL #32
7101c908a8  movk x15,#0x6d, LSL #48
7101c908ac  stur x15,[x9, #0x62]
7101c908b0  add x12,x14,#0x9
7101c908b4  mov w14,#0x6d
7101c908b8  mov w13,#0x89
7101c908bc  mov w15,w8
7101c908c0  mul w15,w15,w13
7101c908c4  and w14,w14,#0xff
7101c908c8  eor w15,w15,w14
7101c908cc  ldrb w14,[x12], #0x1
7101c908d0  cbnz w14,0x7101c908c0
7101c908d4  and w12,w10,#0xff
7101c908d8  cmp w12,#0x5
7101c908dc  str w15,[sp, #0x158]
7101c908e0  b.cs 0x7101c91400
7101c908e4  and x10,x10,#0xff
7101c908e8  ldrb w10,[x11, x10, LSL ]
7101c908ec  cmp w10,#0x4
7101c908f0  b.hi 0x7101c90980
7101c908f4  adrp x11,0x71044f9000
7101c908f8  add x11,x11,#0x928
7101c908fc  ldrsw x10,[x11, x10, LSL #0x2]
7101c90900  add x10,x10,x11
7101c90904  br x10
7101c90908  mov x11,#0x6e6d
7101c9090c  movk x11,#0x5f75, LSL #16
7101c90910  orr x10,xzr,#0x1800000000
7101c90914  movk x11,#0x6e6f, LSL #32
7101c90918  movk x11,#0x696c, LSL #48
7101c9091c  mov w12,w8
7101c90920  stp x10,x11,[sp, #0x110]
7101c90924  mov x11,#0x656e
7101c90928  movk x11,#0x725f, LSL #16
7101c9092c  movk x11,#0x6f6f, LSL #32
7101c90930  movk x11,#0x5f6d, LSL #48
7101c90934  str x11,[sp, #0x120]
7101c90938  mov w11,#0x6f66
7101c9093c  strh w11,[sp, #0x128]
7101c90940  mov w11,#0x6d72
7101c90944  movk w11,#0x615f, LSL #16
7101c90948  stur w11,[x9, #0x1a]
7101c9094c  add x10,sp,#0x110
7101c90950  mov w9,#0x6c6c
7101c90954  strh w9,[sp, #0x12e]
7101c90958  add x10,x10,#0x9
7101c9095c  mov w11,#0x6d
7101c90960  strb wzr,[sp, #0x130]
7101c90964  mov w9,#0x89
7101c90968  mul w12,w12,w9
7101c9096c  and w11,w11,#0xff
7101c90970  eor w12,w12,w11
7101c90974  ldrb w11,[x10], #0x1
7101c90978  cbnz w11,0x7101c90968
7101c9097c  b 0x7101c90ae8
7101c90980  mov x11,#0x6e6d
7101c90984  movk x11,#0x5f75, LSL #16
7101c90988  mov x10,#0x1900000000
7101c9098c  movk x11,#0x6e6f, LSL #32
7101c90990  movk x11,#0x696c, LSL #48
7101c90994  mov x13,#0x6d72
7101c90998  movk x13,#0x665f, LSL #16
7101c9099c  stp x10,x11,[sp, #0x110]
7101c909a0  mov x11,#0x656e
7101c909a4  movk x11,#0x725f, LSL #16
7101c909a8  movk x11,#0x6f6f, LSL #32
7101c909ac  movk x11,#0x5f6d, LSL #48
7101c909b0  str x11,[sp, #0x120]
7101c909b4  add x12,sp,#0x110
7101c909b8  mov w11,#0x6f66
7101c909bc  strh w11,[sp, #0x128]
7101c909c0  movk x13,#0x756f, LSL #32
7101c909c4  movk x13,#0x72, LSL #48
7101c909c8  stur x13,[x9, #0x1a]
7101c909cc  add x10,x12,#0x9
7101c909d0  mov w12,#0x6d
7101c909d4  mov w11,#0x89
7101c909d8  mov w9,w8
7101c909dc  mul w9,w9,w11
7101c909e0  and w12,w12,#0xff
7101c909e4  eor w9,w9,w12
7101c909e8  ldrb w12,[x10], #0x1
7101c909ec  cbnz w12,0x7101c909dc
7101c909f0  b 0x7101c90b60
7101c909f4  mov x11,#0x6e6d
7101c909f8  movk x11,#0x5f75, LSL #16
7101c909fc  mov x10,#0x1a00000000
7101c90a00  movk x11,#0x6e6f, LSL #32
7101c90a04  movk x11,#0x696c, LSL #48
7101c90a08  add x12,sp,#0x110
7101c90a0c  stp x10,x11,[sp, #0x110]
7101c90a10  mov x11,#0x656e
7101c90a14  movk x11,#0x725f, LSL #16
7101c90a18  movk x11,#0x6f6f, LSL #32
7101c90a1c  movk x11,#0x5f6d, LSL #48
7101c90a20  str x11,[sp, #0x120]
7101c90a24  mov w11,#0x6f66
7101c90a28  strh w11,[sp, #0x128]
7101c90a2c  mov x11,#0x6d72
7101c90a30  movk x11,#0x745f, LSL #16
7101c90a34  movk x11,#0x7268, LSL #32
7101c90a38  movk x11,#0x6565, LSL #48
7101c90a3c  stur x11,[x9, #0x1a]
7101c90a40  add x10,x12,#0x9
7101c90a44  mov w11,#0x6d
7101c90a48  strb wzr,[sp, #0x132]
7101c90a4c  mov w9,#0x89
7101c90a50  mov w12,w8
7101c90a54  mul w12,w12,w9
7101c90a58  and w11,w11,#0xff
7101c90a5c  eor w12,w12,w11
7101c90a60  ldrb w11,[x10], #0x1
7101c90a64  cbnz w11,0x7101c90a54
7101c90a68  b 0x7101c90ae8
7101c90a6c  mov x11,#0x6e6d
7101c90a70  movk x11,#0x5f75, LSL #16
7101c90a74  orr x10,xzr,#0x1c00000000
7101c90a78  movk x11,#0x6e6f, LSL #32
7101c90a7c  movk x11,#0x696c, LSL #48
7101c90a80  mov w12,w8
7101c90a84  stp x10,x11,[sp, #0x110]
7101c90a88  mov x11,#0x656e
7101c90a8c  movk x11,#0x725f, LSL #16
7101c90a90  movk x11,#0x6f6f, LSL #32
7101c90a94  movk x11,#0x5f6d, LSL #48
7101c90a98  str x11,[sp, #0x120]
7101c90a9c  mov w11,#0x6f66
7101c90aa0  strh w11,[sp, #0x128]
7101c90aa4  mov x11,#0x6d72
7101c90aa8  movk x11,#0x6f5f, LSL #16
7101c90aac  movk x11,#0x656e, LSL #32
7101c90ab0  movk x11,#0x6f5f, LSL #48
7101c90ab4  stur x11,[x9, #0x1a]
7101c90ab8  add x10,sp,#0x110
7101c90abc  mov w9,#0x656e
7101c90ac0  strh w9,[sp, #0x132]
7101c90ac4  add x10,x10,#0x9
7101c90ac8  mov w11,#0x6d
7101c90acc  strb wzr,[sp, #0x134]
7101c90ad0  mov w9,#0x89
7101c90ad4  mul w12,w12,w9
7101c90ad8  and w11,w11,#0xff
7101c90adc  eor w12,w12,w11
7101c90ae0  ldrb w11,[x10], #0x1
7101c90ae4  cbnz w11,0x7101c90ad4
7101c90ae8  str w12,[sp, #0x110]
7101c90aec  b 0x7101c90b64
7101c90af0  mov x11,#0x6e6d
7101c90af4  movk x11,#0x5f75, LSL #16
7101c90af8  mov x10,#0x1900000000
7101c90afc  movk x11,#0x6e6f, LSL #32
7101c90b00  movk x11,#0x696c, LSL #48
7101c90b04  mov x13,#0x6d72
7101c90b08  movk x13,#0x745f, LSL #16
7101c90b0c  stp x10,x11,[sp, #0x110]
7101c90b10  mov x11,#0x656e
7101c90b14  movk x11,#0x725f, LSL #16
7101c90b18  movk x11,#0x6f6f, LSL #32
7101c90b1c  movk x11,#0x5f6d, LSL #48
7101c90b20  str x11,[sp, #0x120]
7101c90b24  add x12,sp,#0x110
7101c90b28  mov w11,#0x6f66
7101c90b2c  strh w11,[sp, #0x128]
7101c90b30  movk x13,#0x6165, LSL #32
7101c90b34  movk x13,#0x6d, LSL #48
7101c90b38  stur x13,[x9, #0x1a]
7101c90b3c  add x10,x12,#0x9
7101c90b40  mov w12,#0x6d
7101c90b44  mov w11,#0x89
7101c90b48  mov w9,w8
7101c90b4c  mul w9,w9,w11
7101c90b50  and w12,w12,#0xff
7101c90b54  eor w9,w9,w12
7101c90b58  ldrb w12,[x10], #0x1
7101c90b5c  cbnz w12,0x7101c90b4c
7101c90b60  str w9,[sp, #0x110]
7101c90b64  add x10,sp,#0x158
7101c90b68  sub x11,x29,#0xe0
7101c90b6c  mov x9,xzr
7101c90b70  add x10,x10,#0x9
7101c90b74  add x11,x11,#0x9
7101c90b78  stur wzr,[x29, #-0xe0]
7101c90b7c  mov w12,#0x6d
7101c90b80  tst w12,#0xff
7101c90b84  b.eq 0x7101c90bcc
7101c90b88  add w13,w9,#0x1
7101c90b8c  add x14,x11,x9
7101c90b90  cmp w13,#0x3f
7101c90b94  sturb w12,[x14, #-0x1]
7101c90b98  b.cs 0x7101c90bc0
7101c90b9c  ldrb w12,[x10, x9, LSL ]
7101c90ba0  cbz w12,0x7101c90bc8
7101c90ba4  add x13,x10,x9
7101c90ba8  strb w12,[x11, x9, LSL ]
7101c90bac  ldrb w12,[x13, #0x1]
7101c90bb0  add x9,x9,#0x2
7101c90bb4  tst w12,#0xff
7101c90bb8  b.ne 0x7101c90b88
7101c90bbc  b 0x7101c90bcc
7101c90bc0  add w9,w9,#0x1
7101c90bc4  b 0x7101c90bcc
7101c90bc8  add x9,x9,#0x1
7101c90bcc  sub x10,x29,#0xe0
7101c90bd0  add x11,x10,#0x8
7101c90bd4  mov w12,w8
7101c90bd8  strb wzr,[x11, w9, UXTW ]
7101c90bdc  stur w9,[x29, #-0xdc]
7101c90be0  ldurb w9,[x29, #-0xd8]
7101c90be4  cbz w9,0x7101c90c0c
7101c90be8  add x11,x10,#0x9
7101c90bec  mov w13,#0x89
7101c90bf0  mov w14,w9
7101c90bf4  mov w12,w8
7101c90bf8  mul w12,w12,w13
7101c90bfc  and w14,w14,#0xff
7101c90c00  eor w12,w12,w14
7101c90c04  ldrb w14,[x11], #0x1
7101c90c08  cbnz w14,0x7101c90bf8
7101c90c0c  stur w12,[x29, #-0xe0]
7101c90c10  add x12,sp,#0x110
7101c90c14  mov x11,xzr
7101c90c18  add x12,x12,#0x9
7101c90c1c  mov w13,#0x6d
7101c90c20  stur wzr,[x29, #-0x98]
7101c90c24  tst w13,#0xff
7101c90c28  b.eq 0x7101c90c70
7101c90c2c  add w15,w11,#0x1
7101c90c30  add x14,x10,x11
7101c90c34  cmp w15,#0x3f
7101c90c38  strb w13,[x14, #0x50]
7101c90c3c  b.cs 0x7101c90c64
7101c90c40  ldrb w13,[x12, x11, LSL ]
7101c90c44  cbz w13,0x7101c90c6c
7101c90c48  add x15,x12,x11
7101c90c4c  strb w13,[x14, #0x51]
7101c90c50  ldrb w13,[x15, #0x1]
7101c90c54  add x11,x11,#0x2
7101c90c58  tst w13,#0xff
7101c90c5c  b.ne 0x7101c90c2c
7101c90c60  b 0x7101c90c70
7101c90c64  add w11,w11,#0x1
7101c90c68  b 0x7101c90c70
7101c90c6c  add x11,x11,#0x1
7101c90c70  sub x13,x29,#0xe0
7101c90c74  add x10,x13,#0x50
7101c90c78  mov w12,w8
7101c90c7c  strb wzr,[x10, w11, UXTW ]
7101c90c80  ldurb w10,[x29, #-0x90]
7101c90c84  stur w11,[x29, #-0x94]
7101c90c88  cbz w10,0x7101c90cb0
7101c90c8c  add x11,x13,#0x51
7101c90c90  mov w13,#0x89
7101c90c94  mov w14,w10
7101c90c98  mov w12,w8
7101c90c9c  mul w12,w12,w13
7101c90ca0  and w14,w14,#0xff
7101c90ca4  eor w12,w12,w14
7101c90ca8  ldrb w14,[x11], #0x1
7101c90cac  cbnz w14,0x7101c90c9c
7101c90cb0  stur w12,[x29, #-0x98]
7101c90cb4  cbz w9,0x7101c90cf0
7101c90cb8  sub x12,x29,#0xe0
7101c90cbc  add x13,sp,#0x78
7101c90cc0  mov x11,xzr
7101c90cc4  add x12,x12,#0x9
7101c90cc8  add x13,x13,#0x8
7101c90ccc  add w14,w11,#0x1
7101c90cd0  cmp w14,#0x3e
7101c90cd4  strb w9,[x13, x11, LSL ]
7101c90cd8  b.hi 0x7101c90cf8
7101c90cdc  ldrb w9,[x12, x11, LSL ]
7101c90ce0  add x14,x11,#0x1
7101c90ce4  mov x11,x14
7101c90ce8  cbnz w9,0x7101c90ccc
7101c90cec  b 0x7101c90cfc
7101c90cf0  mov x14,xzr
7101c90cf4  b 0x7101c90cfc
7101c90cf8  add w14,w11,#0x1
7101c90cfc  add x11,sp,#0x78
7101c90d00  add x9,x11,#0x8
7101c90d04  mov w12,w8
7101c90d08  strb wzr,[x9, w14, UXTW ]
7101c90d0c  ldrb w9,[sp, #0x80]
7101c90d10  str w14,[sp, #0x7c]
7101c90d14  cbz w9,0x7101c90d38
7101c90d18  add x11,x11,#0x9
7101c90d1c  mov w13,#0x89
7101c90d20  mov w12,w8
7101c90d24  mul w12,w12,w13
7101c90d28  and w9,w9,#0xff
7101c90d2c  eor w12,w12,w9
7101c90d30  ldrb w9,[x11], #0x1
7101c90d34  cbnz w9,0x7101c90d24
7101c90d38  str w12,[sp, #0x78]
7101c90d3c  cbz w10,0x7101c90d78
7101c90d40  sub x11,x29,#0xe0
7101c90d44  add x12,sp,#0x78
7101c90d48  mov x9,xzr
7101c90d4c  add x11,x11,#0x51
7101c90d50  add x12,x12,#0x50
7101c90d54  add w13,w9,#0x1
7101c90d58  cmp w13,#0x3e
7101c90d5c  strb w10,[x12, x9, LSL ]
7101c90d60  b.hi 0x7101c90d80
7101c90d64  ldrb w10,[x11, x9, LSL ]
7101c90d68  add x13,x9,#0x1
7101c90d6c  mov x9,x13
7101c90d70  cbnz w10,0x7101c90d54
7101c90d74  b 0x7101c90d84
7101c90d78  mov w13,wzr
7101c90d7c  b 0x7101c90d84
7101c90d80  add w13,w9,#0x1
7101c90d84  add x9,sp,#0x78
7101c90d88  add x10,x9,#0x50
7101c90d8c  strb wzr,[x10, w13, UXTW ]
7101c90d90  ldrb w10,[sp, #0xc8]
7101c90d94  str w13,[sp, #0xc4]
7101c90d98  cbz w10,0x7101c90e88
7101c90d9c  add x9,x9,#0x51
7101c90da0  mov w11,#0x89
7101c90da4  mul w8,w8,w11
7101c90da8  and w10,w10,#0xff
7101c90dac  eor w8,w8,w10
7101c90db0  ldrb w10,[x9], #0x1
7101c90db4  cbnz w10,0x7101c90da4
7101c90db8  b 0x7101c90e88
7101c90dbc  add w10,w10,#0x1
7101c90dc0  add x9,sp,#0x78
7101c90dc4  add x11,x9,#0x8
7101c90dc8  mov w8,#0x9dc5
7101c90dcc  movk w8,#0x811c, LSL #16
7101c90dd0  mov w12,w8
7101c90dd4  strb wzr,[x11, w10, UXTW ]
7101c90dd8  str w10,[sp, #0x7c]
7101c90ddc  ldrb w10,[sp, #0x80]
7101c90de0  cbz w10,0x7101c90e04
7101c90de4  add x11,x9,#0x9
7101c90de8  mov w13,#0x89
7101c90dec  mov w12,w8
7101c90df0  mul w12,w12,w13
7101c90df4  and w10,w10,#0xff
7101c90df8  eor w12,w12,w10
7101c90dfc  ldrb w10,[x11], #0x1
7101c90e00  cbnz w10,0x7101c90df0
7101c90e04  sub x11,x29,#0xe0
7101c90e08  mov x10,xzr
7101c90e0c  str w12,[sp, #0x78]
7101c90e10  add x11,x11,#0x50
7101c90e14  b 0x7101c90e20
7101c90e18  add x10,x10,#0x2
7101c90e1c  strb w12,[x13, #0x51]
7101c90e20  add x12,x11,x10
7101c90e24  ldrb w14,[x12]
7101c90e28  cbz w14,0x7101c90e54
7101c90e2c  add w15,w10,#0x1
7101c90e30  add x13,x9,x10
7101c90e34  cmp w15,#0x3f
7101c90e38  strb w14,[x13, #0x50]
7101c90e3c  b.cs 0x7101c90e50
7101c90e40  ldrb w12,[x12, #0x1]
7101c90e44  cbnz w12,0x7101c90e18
7101c90e48  add x10,x10,#0x1
7101c90e4c  b 0x7101c90e54
7101c90e50  add w10,w10,#0x1
7101c90e54  add x9,sp,#0x78
7101c90e58  add x11,x9,#0x50
7101c90e5c  strb wzr,[x11, w10, UXTW ]
7101c90e60  str w10,[sp, #0xc4]
7101c90e64  ldrb w10,[sp, #0xc8]
7101c90e68  cbz w10,0x7101c90e88
7101c90e6c  add x9,x9,#0x51
7101c90e70  mov w11,#0x89
7101c90e74  mul w8,w8,w11
7101c90e78  and w10,w10,#0xff
7101c90e7c  eor w8,w8,w10
7101c90e80  ldrb w10,[x9], #0x1
7101c90e84  cbnz w10,0x7101c90e74
7101c90e88  str w8,[sp, #0xc0]
7101c90e8c  ldr x0,[x22, #0x8]
7101c90e90  adrp x1,0x7104319000
7101c90e94  add x1,x1,#0x6af
7101c90e98  bl 0x7103778760
7101c90e9c  add x8,sp,#0x78
7101c90ea0  add x23,x8,#0x8
7101c90ea4  mov w25,#0x1
7101c90ea8  ldrb w9,[sp, #0x70]
7101c90eac  ldr x0,[x22, #0x8]
7101c90eb0  fmov s0,0x3f800000
7101c90eb4  adrp x8,0x7104422000
7101c90eb8  add x8,x8,#0x470
7101c90ebc  adrp x10,0x71043be000
7101c90ec0  add x10,x10,#0x6f6
7101c90ec4  cmp w9,#0x0
7101c90ec8  csel x1,x10,x8,eq
7101c90ecc  bl 0x7103778300
7101c90ed0  adrp x1,0x71042b4000
7101c90ed4  add x1,x1,#0x52d
7101c90ed8  sub x8,x29,#0xe0
7101c90edc  mov x0,x22
7101c90ee0  bl 0x7103776910
7101c90ee4  adrp x1,0x71042a3000
7101c90ee8  add x1,x1,#0x1a8
7101c90eec  add x8,sp,#0x158
7101c90ef0  mov x0,x22
7101c90ef4  bl 0x7103776910
7101c90ef8  adrp x1,0x71042b4000
7101c90efc  add x1,x1,#0x4a1
7101c90f00  add x8,sp,#0x110
7101c90f04  mov x0,x22
7101c90f08  bl 0x7103776910
7101c90f0c  adrp x1,0x7104422000
7101c90f10  add x1,x1,#0x478
7101c90f14  add x8,sp,#0x38
7101c90f18  mov x0,x22
7101c90f1c  bl 0x7103776910
7101c90f20  adrp x1,0x710424f000
7101c90f24  add x1,x1,#0x5ef
7101c90f28  add x8,sp,#0x28
7101c90f2c  mov x0,x22
7101c90f30  bl 0x7103776910
7101c90f34  sub x0,x29,#0xe0
7101c90f38  mov x1,x23
7101c90f3c  bl 0x710377a120
7101c90f40  add x0,sp,#0x110
7101c90f44  mov x1,x23
7101c90f48  bl 0x710377a120
7101c90f4c  ldrb w8,[sp, #0x10c]
7101c90f50  ldrb w9,[sp, #0x108]
7101c90f54  cmp w8,w9
7101c90f58  b.eq 0x7101c90fac
7101c90f5c  add x8,sp,#0x78
7101c90f60  add x24,x8,#0x50
7101c90f64  add x0,sp,#0x158
7101c90f68  mov x1,x24
7101c90f6c  bl 0x710377a120
7101c90f70  add x0,sp,#0x38
7101c90f74  mov x1,x24
7101c90f78  bl 0x710377a120
7101c90f7c  ldrsb w9,[sp, #0x10c]
7101c90f80  ldrsb w11,[sp, #0x108]
7101c90f84  adrp x8,0x710438b000
7101c90f88  add x8,x8,#0x71d
7101c90f8c  adrp x10,0x7104401000
7101c90f90  add x10,x10,#0xd83
7101c90f94  adrp x1,0x710424f000
7101c90f98  add x1,x1,#0x5e3
7101c90f9c  mov x0,x22
7101c90fa0  cmp w9,w11
7101c90fa4  csel x2,x10,x8,gt
7101c90fa8  bl 0x7103778430
7101c90fac  add x0,sp,#0x28
7101c90fb0  mov x1,x23
7101c90fb4  bl 0x710377a120
7101c90fb8  tbz w21,#0x0,0x7101c91374
7101c90fbc  ldr x1,[x19, #0x120]
7101c90fc0  add x0,sp,#0x18
7101c90fc4  mov w2,wzr
7101c90fc8  add x22,x19,#0x120
7101c90fcc  bl 0x7103771d60
7101c90fd0  ldr x1,[x19, #0x120]
7101c90fd4  add x0,sp,#0x8
7101c90fd8  mov w2,#0x1
7101c90fdc  bl 0x7103771d60
7101c90fe0  ldrb w8,[sp, #0x10c]
7101c90fe4  cbz w8,0x7101c91040
7101c90fe8  ldr x21,[sp, #0x10]
7101c90fec  ldrb w9,[sp, #0x74]
7101c90ff0  cmp w8,w9
7101c90ff4  ldr x23,[x21]
7101c90ff8  b.ne 0x7101c910f0
7101c90ffc  cbz x23,0x7101c9118c
7101c91000  ldr x8,[x23]
7101c91004  ldr x8,[x8, #0x208]
7101c91008  mov x0,x23
7101c9100c  mov w1,wzr
7101c91010  blr x8
7101c91014  ldr x8,[x23]
7101c91018  ldr x8,[x8, #0x200]
7101c9101c  mov x0,x23
7101c91020  blr x8
7101c91024  tbz w0,#0x0,0x7101c91170
7101c91028  ldr x8,[x23]
7101c9102c  ldr x8,[x8, #0x210]
7101c91030  mov x0,x23
7101c91034  blr x8
7101c91038  eor w8,w0,#0x1
7101c9103c  b 0x7101c91174
7101c91040  ldr x21,[sp, #0x10]
7101c91044  ldr x23,[x21]
7101c91048  cbz x23,0x7101c910a4
7101c9104c  ldr x8,[x23]
7101c91050  ldr x8,[x8, #0x208]
7101c91054  mov w1,#0x1
7101c91058  mov x0,x23
7101c9105c  mov w24,#0x1
7101c91060  blr x8
7101c91064  ldr x8,[x23]
7101c91068  ldr x8,[x8, #0x200]
7101c9106c  mov x0,x23
7101c91070  blr x8
7101c91074  tbz w0,#0x0,0x7101c9108c
7101c91078  ldr x8,[x23]
7101c9107c  ldr x8,[x8, #0x210]
7101c91080  mov x0,x23
7101c91084  blr x8
7101c91088  eor w24,w0,#0x1
7101c9108c  ldr x8,[x23]
7101c91090  ldr x8,[x8, #0x388]
7101c91094  and w1,w24,#0x1
7101c91098  mov x0,x23
7101c9109c  mov w2,wzr
7101c910a0  blr x8
7101c910a4  ldr x23,[sp, #0x20]
7101c910a8  ldr x24,[x23]
7101c910ac  cbz x24,0x7101c911f0
7101c910b0  ldr x8,[x24]
7101c910b4  ldr x8,[x8, #0x208]
7101c910b8  mov x0,x24
7101c910bc  mov w1,wzr
7101c910c0  blr x8
7101c910c4  ldr x8,[x24]
7101c910c8  ldr x8,[x8, #0x200]
7101c910cc  mov x0,x24
7101c910d0  blr x8
7101c910d4  tbz w0,#0x0,0x7101c91150
7101c910d8  ldr x8,[x24]
7101c910dc  ldr x8,[x8, #0x210]
7101c910e0  mov x0,x24
7101c910e4  blr x8
7101c910e8  eor w8,w0,#0x1
7101c910ec  b 0x7101c91154
7101c910f0  cbz x23,0x7101c9118c
7101c910f4  ldr x8,[x23]
7101c910f8  ldr x8,[x8, #0x208]
7101c910fc  mov w1,#0x1
7101c91100  mov x0,x23
7101c91104  mov w24,#0x1
7101c91108  blr x8
7101c9110c  ldr x8,[x23]
7101c91110  ldr x8,[x8, #0x200]
7101c91114  mov x0,x23
7101c91118  blr x8
7101c9111c  tbz w0,#0x0,0x7101c91134
7101c91120  ldr x8,[x23]
7101c91124  ldr x8,[x8, #0x210]
7101c91128  mov x0,x23
7101c9112c  blr x8
7101c91130  eor w24,w0,#0x1
7101c91134  ldr x8,[x23]
7101c91138  ldr x8,[x8, #0x388]
7101c9113c  and w1,w24,#0x1
7101c91140  mov x0,x23
7101c91144  mov w2,wzr
7101c91148  blr x8
7101c9114c  b 0x7101c9118c
7101c91150  mov w8,#0x1
7101c91154  ldr x9,[x24]
7101c91158  ldr x9,[x9, #0x388]
7101c9115c  and w1,w8,#0x1
7101c91160  mov x0,x24
7101c91164  mov w2,wzr
7101c91168  blr x9
7101c9116c  b 0x7101c911f0
7101c91170  mov w8,#0x1
7101c91174  ldr x9,[x23]
7101c91178  ldr x9,[x9, #0x388]
7101c9117c  and w1,w8,#0x1
7101c91180  mov x0,x23
7101c91184  mov w2,wzr
7101c91188  blr x9
7101c9118c  ldr x23,[sp, #0x20]
7101c91190  ldr x24,[x23]
7101c91194  cbz x24,0x7101c911f0
7101c91198  ldr x8,[x24]
7101c9119c  ldr x8,[x8, #0x208]
7101c911a0  mov w1,#0x1
7101c911a4  mov x0,x24
7101c911a8  mov w26,#0x1
7101c911ac  blr x8
7101c911b0  ldr x8,[x24]
7101c911b4  ldr x8,[x8, #0x200]
7101c911b8  mov x0,x24
7101c911bc  blr x8
7101c911c0  tbz w0,#0x0,0x7101c911d8
7101c911c4  ldr x8,[x24]
7101c911c8  ldr x8,[x8, #0x210]
7101c911cc  mov x0,x24
7101c911d0  blr x8
7101c911d4  eor w26,w0,#0x1
7101c911d8  ldr x8,[x24]
7101c911dc  ldr x8,[x8, #0x388]
7101c911e0  and w1,w26,#0x1
7101c911e4  mov x0,x24
7101c911e8  mov w2,wzr
7101c911ec  blr x8
7101c911f0  mov w1,#0x1
7101c911f4  mov x0,x22
7101c911f8  bl 0x7101c83c40
7101c911fc  cmp w20,#0x3
7101c91200  b.ne 0x7101c912dc
7101c91204  cbnz w25,0x7101c912dc
7101c91208  ldr x24,[x21]
7101c9120c  cbz x24,0x7101c9126c
7101c91210  ldr x8,[x24]
7101c91214  ldr x8,[x8, #0x208]
7101c91218  mov x0,x24
7101c9121c  mov w1,wzr
7101c91220  blr x8
7101c91224  ldr x8,[x24]
7101c91228  ldr x8,[x8, #0x200]
7101c9122c  mov x0,x24
7101c91230  blr x8
7101c91234  tbz w0,#0x0,0x7101c91250
7101c91238  ldr x8,[x24]
7101c9123c  ldr x8,[x8, #0x210]
7101c91240  mov x0,x24
7101c91244  blr x8
7101c91248  eor w8,w0,#0x1
7101c9124c  b 0x7101c91254
7101c91250  mov w8,#0x1
7101c91254  ldr x9,[x24]
7101c91258  ldr x9,[x9, #0x388]
7101c9125c  and w1,w8,#0x1
7101c91260  mov x0,x24
7101c91264  mov w2,wzr
7101c91268  blr x9
7101c9126c  ldr x24,[x23]
7101c91270  cbz x24,0x7101c912d0
7101c91274  ldr x8,[x24]
7101c91278  ldr x8,[x8, #0x208]
7101c9127c  mov x0,x24
7101c91280  mov w1,wzr
7101c91284  blr x8
7101c91288  ldr x8,[x24]
7101c9128c  ldr x8,[x8, #0x200]
7101c91290  mov x0,x24
7101c91294  blr x8
7101c91298  tbz w0,#0x0,0x7101c912b4
7101c9129c  ldr x8,[x24]
7101c912a0  ldr x8,[x8, #0x210]
7101c912a4  mov x0,x24
7101c912a8  blr x8
7101c912ac  eor w8,w0,#0x1
7101c912b0  b 0x7101c912b8
7101c912b4  mov w8,#0x1
7101c912b8  ldr x9,[x24]
7101c912bc  ldr x9,[x9, #0x388]
7101c912c0  and w1,w8,#0x1
7101c912c4  mov x0,x24
7101c912c8  mov w2,wzr
7101c912cc  blr x9
7101c912d0  mov x0,x22
7101c912d4  mov w1,wzr
7101c912d8  bl 0x7101c83c40
7101c912dc  adrp x8,0x71052c4000
7101c912e0  ldr x8,[x8, #0xc58]
7101c912e4  ldr x8,[x8, #0x8]
7101c912e8  add x0,x8,#0xa0
7101c912ec  add x22,x19,#0x130
7101c912f0  bl 0x7101704ba0
7101c912f4  tbz w0,#0x0,0x7101c91330
7101c912f8  ldrb w8,[x19, #0x138]
7101c912fc  cbnz w8,0x7101c91340
7101c91300  ldrb w8,[x19, #0x139]
7101c91304  cbnz w8,0x7101c91340
7101c91308  ldrb w8,[x19, #0x13a]
7101c9130c  cbnz w8,0x7101c91340
7101c91310  ldrb w8,[x19, #0x13b]
7101c91314  cbnz w8,0x7101c91340
7101c91318  ldrb w8,[x19, #0x13c]
7101c9131c  cbnz w8,0x7101c91340
7101c91320  ldrb w8,[x19, #0x13d]
7101c91324  cmp w8,#0x0
7101c91328  cset w1,ne
7101c9132c  b 0x7101c91344
7101c91330  mov w0,wzr
7101c91334  bl 0x7101797350
7101c91338  ldrb w8,[x19, #0x138]
7101c9133c  cbz w8,0x7101c91300
7101c91340  mov w1,#0x1
7101c91344  mov x0,x22
7101c91348  bl 0x7101c83c40
7101c9134c  adrp x22,0x710523d000
7101c91350  add x22,x22,#0x9c8
7101c91354  stp x22,xzr,[sp, #0x8]
7101c91358  cbz x21,0x7101c91364
7101c9135c  mov x0,x21
7101c91360  bl 0x710392eb40
7101c91364  stp x22,xzr,[sp, #0x18]
7101c91368  cbz x23,0x7101c91374
7101c9136c  mov x0,x23
7101c91370  bl 0x710392eb40
7101c91374  cmp w20,#0x6
7101c91378  b.cs 0x7101c91400
7101c9137c  ldrb w8,[sp, #0x10c]
7101c91380  add x9,x19,w20, SXTW 
7101c91384  adrp x19,0x710523d000
7101c91388  add x19,x19,#0x9a8
7101c9138c  strb w8,[x9, #0x138]
7101c91390  ldr x0,[sp, #0x30]
7101c91394  stp x19,xzr,[sp, #0x28]
7101c91398  cbz x0,0x7101c913a0
7101c9139c  bl 0x710392eb40
7101c913a0  ldr x0,[sp, #0x40]
7101c913a4  stp x19,xzr,[sp, #0x38]
7101c913a8  cbz x0,0x7101c913b0
7101c913ac  bl 0x710392eb40
7101c913b0  ldr x0,[sp, #0x118]
7101c913b4  stp x19,xzr,[sp, #0x110]
7101c913b8  cbz x0,0x7101c913c0
7101c913bc  bl 0x710392eb40
7101c913c0  ldr x0,[sp, #0x160]
7101c913c4  stp x19,xzr,[sp, #0x158]
7101c913c8  cbz x0,0x7101c913d0
7101c913cc  bl 0x710392eb40
7101c913d0  ldur x0,[x29, #-0xd8]
7101c913d4  stp x19,xzr,[x29, #-0xe0]
7101c913d8  cbz x0,0x7101c913e0
7101c913dc  bl 0x710392eb40
7101c913e0  add sp,sp,#0x230
7101c913e4  ldp x29,x30,[sp, #0x50]
7101c913e8  ldp x20,x19,[sp, #0x40]
7101c913ec  ldp x22,x21,[sp, #0x30]
7101c913f0  ldp x24,x23,[sp, #0x20]
7101c913f4  ldp x26,x25,[sp, #0x10]
7101c913f8  ldr x28,[sp], #0x60
7101c913fc  ret
7101c91400  bl 0x71039c2650
