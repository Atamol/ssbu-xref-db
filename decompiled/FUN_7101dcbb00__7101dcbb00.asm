// addr:      7101dcbb00
// offset:    0x1dcbb00
// name:      FUN_7101dcbb00
// mangled:   
// size:      2784

7101dcbb00  sub sp,sp,#0x110
7101dcbb04  str d8,[sp, #0xa0]
7101dcbb08  stp x28,x27,[sp, #0xb0]
7101dcbb0c  stp x26,x25,[sp, #0xc0]
7101dcbb10  stp x24,x23,[sp, #0xd0]
7101dcbb14  stp x22,x21,[sp, #0xe0]
7101dcbb18  stp x20,x19,[sp, #0xf0]
7101dcbb1c  stp x29,x30,[sp, #0x100]
7101dcbb20  add x29,sp,#0x100
7101dcbb24  ldrb w9,[x0, #0x5f9]
7101dcbb28  ldrb w8,[x0, #0x1d0]
7101dcbb2c  mov x19,x0
7101dcbb30  cmp w9,#0x1
7101dcbb34  b.ne 0x7101dcbbf0
7101dcbb38  cmp w8,#0x2
7101dcbb3c  b.cs 0x7101dcc5d4
7101dcbb40  add x8,x19,x8, LSL #0x3
7101dcbb44  ldr x0,[x8, #0x1c0]
7101dcbb48  ldr x8,[x0]
7101dcbb4c  ldr x8,[x8, #0x88]
7101dcbb50  blr x8
7101dcbb54  mov x20,x0
7101dcbb58  mvn w8,w20
7101dcbb5c  tst w8,#0xffff
7101dcbb60  b.eq 0x7101dcc410
7101dcbb64  ldrh w9,[x19, #0x440]
7101dcbb68  sxth w8,w20
7101dcbb6c  cmp w9,w8, UXTH 
7101dcbb70  b.eq 0x7101dcc410
7101dcbb74  mov x9,#0xff0000000000
7101dcbb78  movk x9,#0x2dff, LSL #48
7101dcbb7c  strh w8,[x19, #0x440]
7101dcbb80  adrp x24,0x710532f000
7101dcbb84  cmp w8,#0x7cf
7101dcbb88  str x9,[x19, #0x438]
7101dcbb8c  ldr x9,[x24, #0x730]
7101dcbb90  ldr x9,[x9, #0x8]
7101dcbb94  ldr x21,[x9, #0x1d8]
7101dcbb98  b.gt 0x7101dcbd48
7101dcbb9c  ldp x9,x10,[x21, #0x20]
7101dcbba0  lsl x8,x20,#0x30
7101dcbba4  orr x11,xzr,#-0x3333333333333334
7101dcbba8  add x8,x21,x8, ASR #0x2f
7101dcbbac  movk x11,#0xcccd
7101dcbbb0  ldrh w8,[x8, #0x60]
7101dcbbb4  sub x10,x10,x9
7101dcbbb8  asr x10,x10,#0x6
7101dcbbbc  mul x10,x10,x11
7101dcbbc0  cmp w10,w8
7101dcbbc4  b.ls 0x7101dcbd48
7101dcbbc8  mov w11,#0x140
7101dcbbcc  madd x9,x8,x11,x9
7101dcbbd0  adrp x11,0x7105182000
7101dcbbd4  add x11,x11,#0xb08
7101dcbbd8  cmp x10,x8
7101dcbbdc  csel x8,x9,x11,hi
7101dcbbe0  ldrb w9,[x8, #0x5e]
7101dcbbe4  cbz w9,0x7101dcc0d0
7101dcbbe8  mov w23,#0x4
7101dcbbec  b 0x7101dcbd4c
7101dcbbf0  cmp w8,#0x2
7101dcbbf4  b.cs 0x7101dcc5d4
7101dcbbf8  add x8,x19,x8, LSL #0x3
7101dcbbfc  ldr x0,[x8, #0x1c0]
7101dcbc00  ldr x8,[x0]
7101dcbc04  ldr x8,[x8, #0x90]
7101dcbc08  mov x21,#0x2d00000000000000
7101dcbc0c  blr x8
7101dcbc10  ldr x9,[x19, #0x438]
7101dcbc14  and x10,x9,#-0x100000000000000
7101dcbc18  mov x20,x0
7101dcbc1c  and x8,x0,#0xffffffffff
7101dcbc20  cmp x10,x21
7101dcbc24  b.ne 0x7101dcbc50
7101dcbc28  and x10,x9,#0xffffffffff
7101dcbc2c  cbz x10,0x7101dcbc50
7101dcbc30  and x10,x20,#-0x100000000000000
7101dcbc34  cmp x10,x21
7101dcbc38  ccmp x8,#0x0,#0x4,eq
7101dcbc3c  eor x8,x20,x9
7101dcbc40  and x8,x8,#0xffffffffff
7101dcbc44  ccmp x8,#0x0,#0x4,ne
7101dcbc48  b.eq 0x7101dcc410
7101dcbc4c  b 0x7101dcbc60
7101dcbc50  and x9,x20,#-0x100000000000000
7101dcbc54  cmp x9,x21
7101dcbc58  ccmp x8,#0x0,#0x4,eq
7101dcbc5c  b.eq 0x7101dcc410
7101dcbc60  orr w8,wzr,#0xffff
7101dcbc64  str x20,[x19, #0x438]
7101dcbc68  adrp x23,0x710532f000
7101dcbc6c  strh w8,[x19, #0x440]
7101dcbc70  ldr x8,[x23, #0x730]
7101dcbc74  ldr x24,[x8, #0x8]
7101dcbc78  ldr x1,[x24, #0x318]
7101dcbc7c  add x0,sp,#0x50
7101dcbc80  mov x2,x20
7101dcbc84  add x21,x19,#0x3e8
7101dcbc88  add x22,sp,#0x50
7101dcbc8c  bl 0x710327cd40
7101dcbc90  add x22,x22,#0x8
7101dcbc94  adrp x0,0x710438b000
7101dcbc98  add x0,x0,#0x152
7101dcbc9c  add x8,sp,#0x8
7101dcbca0  mov x1,x22
7101dcbca4  add x25,sp,#0x8
7101dcbca8  bl 0x71003a4ca0
7101dcbcac  add x1,x25,#0x8
7101dcbcb0  mov x0,x21
7101dcbcb4  bl 0x710377a120
7101dcbcb8  ldr x1,[x24, #0x318]
7101dcbcbc  add x0,sp,#0x50
7101dcbcc0  mov x2,x20
7101dcbcc4  bl 0x710327cd40
7101dcbcc8  adrp x0,0x7104443000
7101dcbccc  add x0,x0,#0xc51
7101dcbcd0  add x8,sp,#0x8
7101dcbcd4  mov x1,x22
7101dcbcd8  bl 0x71003a4ca0
7101dcbcdc  ldr x0,[x24, #0x318]
7101dcbce0  mov x1,x20
7101dcbce4  bl 0x710327d3b0
7101dcbce8  mov x9,#0x7990
7101dcbcec  movk x9,#0x9711, LSL #16
7101dcbcf0  and x8,x0,#0xffffffffff
7101dcbcf4  movk x9,#0x6, LSL #32
7101dcbcf8  mov w22,#0xffffffff
7101dcbcfc  cmp x8,x9
7101dcbd00  b.le 0x7101dcbea8
7101dcbd04  mov x9,#0x387c
7101dcbd08  movk x9,#0x32ae, LSL #16
7101dcbd0c  movk x9,#0xe, LSL #32
7101dcbd10  cmp x8,x9
7101dcbd14  b.gt 0x7101dcbeec
7101dcbd18  mov x9,#0x7991
7101dcbd1c  movk x9,#0x9711, LSL #16
7101dcbd20  movk x9,#0x6, LSL #32
7101dcbd24  cmp x8,x9
7101dcbd28  b.eq 0x7101dcbf24
7101dcbd2c  mov x9,#0x3d9f
7101dcbd30  movk x9,#0xaaec, LSL #16
7101dcbd34  movk x9,#0xd, LSL #32
7101dcbd38  cmp x8,x9
7101dcbd3c  b.ne 0x7101dcbf38
7101dcbd40  mov w22,#0x2
7101dcbd44  b 0x7101dcbf38
7101dcbd48  mov w23,wzr
7101dcbd4c  and x1,x20,#0xffff
7101dcbd50  mov x0,x21
7101dcbd54  add x22,x19,#0x3e8
7101dcbd58  bl 0x71032a9470
7101dcbd5c  mov x2,x0
7101dcbd60  add x0,sp,#0x50
7101dcbd64  mov x1,x21
7101dcbd68  add x25,sp,#0x50
7101dcbd6c  bl 0x71032a9540
7101dcbd70  add x1,x25,#0x8
7101dcbd74  adrp x0,0x7104464000
7101dcbd78  add x0,x0,#0x1d4
7101dcbd7c  add x8,sp,#0x8
7101dcbd80  add x21,sp,#0x8
7101dcbd84  bl 0x71003a4ca0
7101dcbd88  add x3,x21,#0x8
7101dcbd8c  adrp x1,0x71042d6000
7101dcbd90  add x1,x1,#0x791
7101dcbd94  mov w2,#0x1
7101dcbd98  mov x0,x22
7101dcbd9c  bl 0x710377a280
7101dcbda0  and w8,w23,#0xff
7101dcbda4  add x0,x19,#0x3f8
7101dcbda8  cmp w8,#0x4
7101dcbdac  b.hi 0x7101dcbdc4
7101dcbdb0  adrp x8,0x71050b0000
7101dcbdb4  add x8,x8,#0x730
7101dcbdb8  sxtb x9,w23
7101dcbdbc  ldr x1,[x8, x9, LSL #0x3]
7101dcbdc0  b 0x7101dcbdcc
7101dcbdc4  adrp x1,0x7104867000
7101dcbdc8  add x1,x1,#0xc2e
7101dcbdcc  bl 0x710377a120
7101dcbdd0  ldrsh x8,[x19, #0x440]
7101dcbdd4  cmn x8,#0x1
7101dcbdd8  b.eq 0x7101dcc26c
7101dcbddc  cmp w8,#0x7cf
7101dcbde0  b.gt 0x7101dcc26c
7101dcbde4  ldr x9,[x24, #0x730]
7101dcbde8  ldr x9,[x9, #0x8]
7101dcbdec  ldr x11,[x9, #0x1d8]
7101dcbdf0  add x9,x11,x8, LSL #0x1
7101dcbdf4  ldp x10,x11,[x11, #0x20]
7101dcbdf8  sub x11,x11,x10
7101dcbdfc  orr x12,xzr,#-0x3333333333333334
7101dcbe00  movk x12,#0xcccd
7101dcbe04  ldrh w9,[x9, #0x60]
7101dcbe08  asr x11,x11,#0x6
7101dcbe0c  mul x11,x11,x12
7101dcbe10  cmp w11,w9
7101dcbe14  b.ls 0x7101dcc26c
7101dcbe18  mov w8,#0x140
7101dcbe1c  madd x8,x9,x8,x10
7101dcbe20  adrp x10,0x7105182000
7101dcbe24  add x10,x10,#0xb08
7101dcbe28  cmp x11,x9
7101dcbe2c  csel x8,x8,x10,hi
7101dcbe30  ldrb w8,[x8, #0x68]
7101dcbe34  cmp w8,#0x3
7101dcbe38  b.hi 0x7101dcc204
7101dcbe3c  adrp x9,0x71044fb000
7101dcbe40  add x9,x9,#0x5a8
7101dcbe44  ldrsw x8,[x9, x8, LSL #0x2]
7101dcbe48  add x8,x8,x9
7101dcbe4c  br x8
7101dcbe50  mov x11,#0x6c63
7101dcbe54  movk x11,#0x7361, LSL #16
7101dcbe58  mov x9,#0xa00000000
7101dcbe5c  add x10,sp,#0x50
7101dcbe60  movk x11,#0x5f73, LSL #32
7101dcbe64  movk x11,#0x6f6e, LSL #48
7101dcbe68  stp x9,x11,[sp, #0x50]
7101dcbe6c  add x1,x10,#0x8
7101dcbe70  add x9,x10,#0x9
7101dcbe74  mov w10,#0x656e
7101dcbe78  strh w10,[sp, #0x60]
7101dcbe7c  mov w8,#0x9dc5
7101dcbe80  movk w8,#0x811c, LSL #16
7101dcbe84  strb wzr,[sp, #0x62]
7101dcbe88  mov w11,#0x63
7101dcbe8c  mov w10,#0x89
7101dcbe90  mul w8,w8,w10
7101dcbe94  and w11,w11,#0xff
7101dcbe98  eor w8,w8,w11
7101dcbe9c  ldrb w11,[x9], #0x1
7101dcbea0  cbnz w11,0x7101dcbe90
7101dcbea4  b 0x7101dcc258
7101dcbea8  mov x9,#0x483a
7101dcbeac  movk x9,#0x8a9, LSL #16
7101dcbeb0  movk x9,#0x3, LSL #32
7101dcbeb4  cmp x8,x9
7101dcbeb8  b.eq 0x7101dcbf1c
7101dcbebc  mov x9,#0x5cc9
7101dcbec0  movk x9,#0x2eb5, LSL #16
7101dcbec4  movk x9,#0x3, LSL #32
7101dcbec8  cmp x8,x9
7101dcbecc  b.eq 0x7101dcbf34
7101dcbed0  mov x9,#0xf324
7101dcbed4  movk x9,#0xb7a5, LSL #16
7101dcbed8  movk x9,#0x5, LSL #32
7101dcbedc  cmp x8,x9
7101dcbee0  b.ne 0x7101dcbf38
7101dcbee4  mov w22,#0x5
7101dcbee8  b 0x7101dcbf38
7101dcbeec  mov x9,#0x387d
7101dcbef0  movk x9,#0x32ae, LSL #16
7101dcbef4  movk x9,#0xe, LSL #32
7101dcbef8  cmp x8,x9
7101dcbefc  b.eq 0x7101dcbf2c
7101dcbf00  mov x9,#0x1611
7101dcbf04  movk x9,#0x6cb9, LSL #16
7101dcbf08  movk x9,#0x10, LSL #32
7101dcbf0c  cmp x8,x9
7101dcbf10  b.ne 0x7101dcbf38
7101dcbf14  orr w22,wzr,#0x3
7101dcbf18  b 0x7101dcbf38
7101dcbf1c  mov w22,#0x4
7101dcbf20  b 0x7101dcbf38
7101dcbf24  mov w22,wzr
7101dcbf28  b 0x7101dcbf38
7101dcbf2c  mov w22,#0x1
7101dcbf30  b 0x7101dcbf38
7101dcbf34  orr w22,wzr,#0x6
7101dcbf38  ldr x0,[x24, #0x318]
7101dcbf3c  mov x1,x20
7101dcbf40  bl 0x710327d3b0
7101dcbf44  mov x9,#0x3d9f
7101dcbf48  movk x9,#0xaaec, LSL #16
7101dcbf4c  and x8,x0,#0xffffffffff
7101dcbf50  movk x9,#0xd, LSL #32
7101dcbf54  cmp x8,x9
7101dcbf58  b.eq 0x7101dcbf84
7101dcbf5c  mov x9,#0x1611
7101dcbf60  movk x9,#0x6cb9, LSL #16
7101dcbf64  movk x9,#0x10, LSL #32
7101dcbf68  cmp x8,x9
7101dcbf6c  b.eq 0x7101dcbf84
7101dcbf70  mov x9,#0x387d
7101dcbf74  movk x9,#0x32ae, LSL #16
7101dcbf78  movk x9,#0xe, LSL #32
7101dcbf7c  cmp x8,x9
7101dcbf80  b.ne 0x7101dcbf8c
7101dcbf84  mov w21,#0x1
7101dcbf88  b 0x7101dcbf90
7101dcbf8c  mov w21,wzr
7101dcbf90  ldr x0,[x24, #0x318]
7101dcbf94  mov x1,x20
7101dcbf98  bl 0x710327d0d0
7101dcbf9c  mov x9,#0x9f9
7101dcbfa0  movk x9,#0xdb83, LSL #16
7101dcbfa4  and x8,x0,#0xffffffffff
7101dcbfa8  movk x9,#0x7, LSL #32
7101dcbfac  cmp x8,x9
7101dcbfb0  b.ne 0x7101dcbfec
7101dcbfb4  cbz w21,0x7101dcbfec
7101dcbfb8  ldr x0,[x19, #0x3a0]
7101dcbfbc  fmov s0,0x3f800000
7101dcbfc0  adrp x1,0x710425f000
7101dcbfc4  add x1,x1,#0x95f
7101dcbfc8  bl 0x7103778300
7101dcbfcc  sub w8,w22,#0x1
7101dcbfd0  add x21,x19,#0x408
7101dcbfd4  cmp w8,#0x2
7101dcbfd8  b.hi 0x7101dcc04c
7101dcbfdc  adrp x9,0x71050b0000
7101dcbfe0  add x9,x9,#0x780
7101dcbfe4  ldr x1,[x9, w8, SXTW #0x3]
7101dcbfe8  b 0x7101dcc054
7101dcbfec  cbnz w22,0x7101dcc0b8
7101dcbff0  fmov s8,0x3f800000
7101dcbff4  ldr x0,[x19, #0x3a0]
7101dcbff8  adrp x1,0x7104443000
7101dcbffc  add x1,x1,#0xc91
7101dcc000  mov v0.16B,v8.16B
7101dcc004  bl 0x7103778300
7101dcc008  add x8,sp,#0x8
7101dcc00c  add x0,x19,#0x428
7101dcc010  mov w2,#0x1
7101dcc014  add x1,x8,#0x8
7101dcc018  mov w3,#0x1
7101dcc01c  bl 0x710377a280
7101dcc020  ldr x8,[x23, #0x730]
7101dcc024  ldr x8,[x8, #0x8]
7101dcc028  ldr x2,[x19, #0x438]
7101dcc02c  add x0,sp,#0x50
7101dcc030  add x21,sp,#0x50
7101dcc034  ldr x1,[x8, #0x318]
7101dcc038  bl 0x710327cd40
7101dcc03c  ldr x0,[x19, #0x3e0]
7101dcc040  mov v0.16B,v8.16B
7101dcc044  add x1,x21,#0x8
7101dcc048  b 0x7101dcc0b4
7101dcc04c  adrp x1,0x7104867000
7101dcc050  add x1,x1,#0xc2e
7101dcc054  adrp x0,0x7104412000
7101dcc058  add x0,x0,#0xdec
7101dcc05c  add x8,sp,#0x50
7101dcc060  add x22,sp,#0x50
7101dcc064  bl 0x71003a4ca0
7101dcc068  add x22,x22,#0x8
7101dcc06c  mov x0,x21
7101dcc070  mov x1,x22
7101dcc074  bl 0x710377a120
7101dcc078  add x8,sp,#0x8
7101dcc07c  add x0,x19,#0x418
7101dcc080  mov w2,#0x1
7101dcc084  add x1,x8,#0x8
7101dcc088  mov w3,#0x1
7101dcc08c  bl 0x710377a280
7101dcc090  ldr x8,[x23, #0x730]
7101dcc094  ldr x8,[x8, #0x8]
7101dcc098  ldr x2,[x19, #0x438]
7101dcc09c  add x0,sp,#0x50
7101dcc0a0  ldr x1,[x8, #0x318]
7101dcc0a4  bl 0x710327cd40
7101dcc0a8  ldr x0,[x19, #0x3d0]
7101dcc0ac  fmov s0,0x3f800000
7101dcc0b0  mov x1,x22
7101dcc0b4  bl 0x7103778300
7101dcc0b8  ldr x8,[x23, #0x730]
7101dcc0bc  ldr x8,[x8, #0x8]
7101dcc0c0  ldr x0,[x8, #0x318]
7101dcc0c4  mov x1,x20
7101dcc0c8  bl 0x710327da30
7101dcc0cc  b 0x7101dcc3f0
7101dcc0d0  ldrb w8,[x8, #0x6c]
7101dcc0d4  sub w8,w8,#0x1
7101dcc0d8  cmp w8,#0x2
7101dcc0dc  and x8,x8,#0xff
7101dcc0e0  lsl x8,x8,#0x3
7101dcc0e4  mov w9,#0x301
7101dcc0e8  movk w9,#0x2, LSL #16
7101dcc0ec  lsr w8,w9,w8
7101dcc0f0  csel w23,wzr,w8,hi
7101dcc0f4  b 0x7101dcbd4c
7101dcc0f8  mov x9,#0x900000000
7101dcc0fc  str x9,[sp, #0x50]
7101dcc100  mov x9,#0x6c63
7101dcc104  movk x9,#0x7361, LSL #16
7101dcc108  add x10,sp,#0x50
7101dcc10c  add x1,x10,#0x8
7101dcc110  movk x9,#0x5f73, LSL #32
7101dcc114  movk x9,#0x6361, LSL #48
7101dcc118  str x9,[sp, #0x58]
7101dcc11c  add x9,x10,#0x9
7101dcc120  mov w10,#0x65
7101dcc124  strh w10,[sp, #0x60]
7101dcc128  mov w8,#0x9dc5
7101dcc12c  movk w8,#0x811c, LSL #16
7101dcc130  mov w11,#0x63
7101dcc134  mov w10,#0x89
7101dcc138  mul w8,w8,w10
7101dcc13c  and w11,w11,#0xff
7101dcc140  eor w8,w8,w11
7101dcc144  ldrb w11,[x9], #0x1
7101dcc148  cbnz w11,0x7101dcc138
7101dcc14c  b 0x7101dcc258
7101dcc150  mov x11,#0x6c63
7101dcc154  movk x11,#0x7361, LSL #16
7101dcc158  mov x9,#0xa00000000
7101dcc15c  add x10,sp,#0x50
7101dcc160  movk x11,#0x5f73, LSL #32
7101dcc164  movk x11,#0x6f68, LSL #48
7101dcc168  stp x9,x11,[sp, #0x50]
7101dcc16c  add x1,x10,#0x8
7101dcc170  add x9,x10,#0x9
7101dcc174  mov w10,#0x6570
7101dcc178  strh w10,[sp, #0x60]
7101dcc17c  mov w8,#0x9dc5
7101dcc180  movk w8,#0x811c, LSL #16
7101dcc184  strb wzr,[sp, #0x62]
7101dcc188  mov w11,#0x63
7101dcc18c  mov w10,#0x89
7101dcc190  mul w8,w8,w10
7101dcc194  and w11,w11,#0xff
7101dcc198  eor w8,w8,w11
7101dcc19c  ldrb w11,[x9], #0x1
7101dcc1a0  cbnz w11,0x7101dcc190
7101dcc1a4  b 0x7101dcc258
7101dcc1a8  mov x11,#0x6c63
7101dcc1ac  movk x11,#0x7361, LSL #16
7101dcc1b0  orr x9,xzr,#0xc00000000
7101dcc1b4  add x10,sp,#0x50
7101dcc1b8  movk x11,#0x5f73, LSL #32
7101dcc1bc  movk x11,#0x656c, LSL #48
7101dcc1c0  stp x9,x11,[sp, #0x50]
7101dcc1c4  add x1,x10,#0x8
7101dcc1c8  add x9,x10,#0x9
7101dcc1cc  mov w10,#0x6567
7101dcc1d0  movk w10,#0x646e, LSL #16
7101dcc1d4  mov w8,#0x9dc5
7101dcc1d8  movk w8,#0x811c, LSL #16
7101dcc1dc  str w10,[sp, #0x60]
7101dcc1e0  mov w11,#0x63
7101dcc1e4  strb wzr,[sp, #0x64]
7101dcc1e8  mov w10,#0x89
7101dcc1ec  mul w8,w8,w10
7101dcc1f0  and w11,w11,#0xff
7101dcc1f4  eor w8,w8,w11
7101dcc1f8  ldrb w11,[x9], #0x1
7101dcc1fc  cbnz w11,0x7101dcc1ec
7101dcc200  b 0x7101dcc258
7101dcc204  mov x11,#0x6c63
7101dcc208  movk x11,#0x7361, LSL #16
7101dcc20c  mov x9,#0xa00000000
7101dcc210  add x10,sp,#0x50
7101dcc214  movk x11,#0x5f73, LSL #32
7101dcc218  movk x11,#0x6f6e, LSL #48
7101dcc21c  stp x9,x11,[sp, #0x50]
7101dcc220  add x1,x10,#0x8
7101dcc224  add x9,x10,#0x9
7101dcc228  mov w10,#0x656e
7101dcc22c  strh w10,[sp, #0x60]
7101dcc230  mov w8,#0x9dc5
7101dcc234  movk w8,#0x811c, LSL #16
7101dcc238  strb wzr,[sp, #0x62]
7101dcc23c  mov w11,#0x63
7101dcc240  mov w10,#0x89
7101dcc244  mul w8,w8,w10
7101dcc248  and w11,w11,#0xff
7101dcc24c  eor w8,w8,w11
7101dcc250  ldrb w11,[x9], #0x1
7101dcc254  cbnz w11,0x7101dcc244
7101dcc258  str w8,[sp, #0x50]
7101dcc25c  ldr x0,[x19, #0x3b0]
7101dcc260  fmov s0,0x3f800000
7101dcc264  bl 0x7103778300
7101dcc268  ldrh w8,[x19, #0x440]
7101dcc26c  mvn w9,w8
7101dcc270  tst w9,#0xffff
7101dcc274  b.eq 0x7101dcc2d4
7101dcc278  ldr x9,[x24, #0x730]
7101dcc27c  ldr x9,[x9, #0x8]
7101dcc280  ldr x9,[x9, #0x1d8]
7101dcc284  add x8,x9,w8, SXTH  #0x1
7101dcc288  ldp x10,x9,[x9, #0x20]
7101dcc28c  ldrh w8,[x8, #0x60]
7101dcc290  sub x9,x9,x10
7101dcc294  orr x11,xzr,#-0x3333333333333334
7101dcc298  movk x11,#0xcccd
7101dcc29c  asr x9,x9,#0x6
7101dcc2a0  mul x9,x9,x11
7101dcc2a4  mov w11,#0x140
7101dcc2a8  madd x10,x8,x11,x10
7101dcc2ac  adrp x11,0x7105182000
7101dcc2b0  add x11,x11,#0xb08
7101dcc2b4  cmp x9,x8
7101dcc2b8  csel x8,x10,x11,hi
7101dcc2bc  ldrb w8,[x8, #0x68]
7101dcc2c0  cmp w8,#0x3
7101dcc2c4  b.ls 0x7101dcc2d8
7101dcc2c8  adrp x1,0x7104867000
7101dcc2cc  add x1,x1,#0xc2e
7101dcc2d0  b 0x7101dcc2e8
7101dcc2d4  mov w8,wzr
7101dcc2d8  adrp x9,0x71050b0000
7101dcc2dc  add x9,x9,#0x760
7101dcc2e0  sxtb x8,w8
7101dcc2e4  ldr x1,[x9, x8, LSL #0x3]
7101dcc2e8  ldr x0,[x19, #0x3a0]
7101dcc2ec  fmov s0,0x3f800000
7101dcc2f0  bl 0x7103778300
7101dcc2f4  ldrh w1,[x19, #0x440]
7101dcc2f8  add x0,x19,#0x3b8
7101dcc2fc  bl 0x7101dcf780
7101dcc300  ldr x8,[x19, #0x590]
7101dcc304  ldr x8,[x8]
7101dcc308  ldr x11,[x8, #0x28]
7101dcc30c  cbz x11,0x7101dcc3dc
7101dcc310  ldrsh x9,[x19, #0x440]
7101dcc314  sub x12,x11,#0x1
7101dcc318  ands x13,x12,x11
7101dcc31c  b.eq 0x7101dcc338
7101dcc320  cmp x11,x9
7101dcc324  mov x10,x9
7101dcc328  b.hi 0x7101dcc33c
7101dcc32c  udiv x10,x9,x11
7101dcc330  msub x10,x10,x11,x9
7101dcc334  b 0x7101dcc33c
7101dcc338  and x10,x12,x9
7101dcc33c  ldr x8,[x8, #0x20]
7101dcc340  ldr x8,[x8, x10, LSL #0x3]
7101dcc344  cbz x8,0x7101dcc3dc
7101dcc348  ldr x21,[x8]
7101dcc34c  cbz x21,0x7101dcc3dc
7101dcc350  and w8,w9,#0xffff
7101dcc354  cbz x13,0x7101dcc398
7101dcc358  ldr x12,[x21, #0x8]
7101dcc35c  cmp x12,x9
7101dcc360  b.ne 0x7101dcc374
7101dcc364  ldrh w12,[x21, #0x10]
7101dcc368  cmp w12,w8
7101dcc36c  b.ne 0x7101dcc38c
7101dcc370  b 0x7101dcc3cc
7101dcc374  cmp x12,x11
7101dcc378  b.cc 0x7101dcc384
7101dcc37c  udiv x13,x12,x11
7101dcc380  msub x12,x13,x11,x12
7101dcc384  cmp x12,x10
7101dcc388  b.ne 0x7101dcc3dc
7101dcc38c  ldr x21,[x21]
7101dcc390  cbnz x21,0x7101dcc358
7101dcc394  b 0x7101dcc3dc
7101dcc398  ldr x11,[x21, #0x8]
7101dcc39c  and x13,x11,x12
7101dcc3a0  cmp x11,x9
7101dcc3a4  ccmp x13,x10,#0x4,ne
7101dcc3a8  b.ne 0x7101dcc3dc
7101dcc3ac  cmp x11,x9
7101dcc3b0  b.ne 0x7101dcc3c0
7101dcc3b4  ldrh w11,[x21, #0x10]
7101dcc3b8  cmp w11,w8
7101dcc3bc  b.eq 0x7101dcc3cc
7101dcc3c0  ldr x21,[x21]
7101dcc3c4  cbnz x21,0x7101dcc398
7101dcc3c8  b 0x7101dcc3dc
7101dcc3cc  ldr x9,[x21, #0x18]!
7101dcc3d0  ldr x10,[x21, #0x8]
7101dcc3d4  cmp x10,x9
7101dcc3d8  b.ne 0x7101dcc434
7101dcc3dc  fmov s0,0x3f800000
7101dcc3e0  add x0,x19,#0x328
7101dcc3e4  bl 0x710377aee0
7101dcc3e8  and x0,x20,#0xffff
7101dcc3ec  bl 0x7101dcf6a0
7101dcc3f0  ldr w8,[x19, #0x4c0]
7101dcc3f4  cmp w8,w0
7101dcc3f8  b.eq 0x7101dcc410
7101dcc3fc  mov w1,w0
7101dcc400  add x0,x19,#0x450
7101dcc404  ldr x8,[x0]
7101dcc408  ldr x8,[x8, #0x18]
7101dcc40c  blr x8
7101dcc410  ldr d8,[sp, #0xa0]
7101dcc414  ldp x29,x30,[sp, #0x100]
7101dcc418  ldp x20,x19,[sp, #0xf0]
7101dcc41c  ldp x22,x21,[sp, #0xe0]
7101dcc420  ldp x24,x23,[sp, #0xd0]
7101dcc424  ldp x26,x25,[sp, #0xc0]
7101dcc428  ldp x28,x27,[sp, #0xb0]
7101dcc42c  add sp,sp,#0x110
7101dcc430  ret
7101dcc434  ldr w9,[x21, #0x8]
7101dcc438  ldr w10,[x21]
7101dcc43c  sub w9,w9,w10
7101dcc440  lsr w10,w9,#0x1
7101dcc444  ubfx w9,w9,#0x1,#0x8
7101dcc448  cmp w9,#0x6
7101dcc44c  orr w9,wzr,#0x6
7101dcc450  csel w22,w10,w9,cc
7101dcc454  and w9,w22,#0xff
7101dcc458  cmp w9,#0x6
7101dcc45c  b.hi 0x7101dcc474
7101dcc460  add x8,x19,w22, UXTB  #0x4
7101dcc464  fmov s0,0x3f800000
7101dcc468  add x0,x8,#0x328
7101dcc46c  bl 0x710377aee0
7101dcc470  ldrh w8,[x19, #0x440]
7101dcc474  ldr x10,[x19, #0x5b8]
7101dcc478  ldr x9,[x19, #0x5c0]
7101dcc47c  cmp x10,x9
7101dcc480  b.eq 0x7101dcc4ac
7101dcc484  ldrh w11,[x10]
7101dcc488  cmp w11,w8
7101dcc48c  b.eq 0x7101dcc4ac
7101dcc490  add x10,x10,#0x2
7101dcc494  cmp x9,x10
7101dcc498  b.eq 0x7101dcc3e8
7101dcc49c  ldrh w11,[x10], #0x2
7101dcc4a0  cmp w11,w8
7101dcc4a4  b.ne 0x7101dcc494
7101dcc4a8  sub x10,x10,#0x2
7101dcc4ac  cmp x10,x9
7101dcc4b0  b.eq 0x7101dcc3e8
7101dcc4b4  tst w22,#0xff
7101dcc4b8  b.eq 0x7101dcc3e8
7101dcc4bc  adrp x8,0x7105329000
7101dcc4c0  ldr x8,[x8, #0xf98]
7101dcc4c4  ldr x8,[x8]
7101dcc4c8  fmov s8,0x3f800000
7101dcc4cc  mov x25,xzr
7101dcc4d0  and x26,x22,#0xff
7101dcc4d4  adrp x28,0x710433a000
7101dcc4d8  add x28,x28,#0x5f1
7101dcc4dc  add x22,x19,#0x200
7101dcc4e0  stur x8,[x29, #-0x58]
7101dcc4e4  ldp x8,x9,[x21]
7101dcc4e8  sub x9,x9,x8
7101dcc4ec  asr x9,x9,#0x1
7101dcc4f0  cmp x9,x25
7101dcc4f4  b.ls 0x7101dcc5d8
7101dcc4f8  ldrh w23,[x8, x25, LSL #0x1]
7101dcc4fc  ldurh w8,[x22, #-0x28]
7101dcc500  cmp w23,w8
7101dcc504  b.eq 0x7101dcc5c0
7101dcc508  sxth w27,w23
7101dcc50c  cmn w27,#0x1
7101dcc510  b.eq 0x7101dcc584
7101dcc514  cmp w27,#0x7cf
7101dcc518  mov x1,x28
7101dcc51c  b.gt 0x7101dcc588
7101dcc520  ldr x9,[x24, #0x730]
7101dcc524  ldr x9,[x9, #0x8]
7101dcc528  ldr x9,[x9, #0x1d8]
7101dcc52c  sxth x8,w23
7101dcc530  add x10,x9,x8, LSL #0x1
7101dcc534  ldrh w10,[x10, #0x60]
7101dcc538  ldp x11,x9,[x9, #0x20]
7101dcc53c  sub x9,x9,x11
7101dcc540  mov w11,#0xcccd
7101dcc544  movk w11,#0xcccc, LSL #16
7101dcc548  lsr x9,x9,#0x6
7101dcc54c  mul w9,w9,w11
7101dcc550  cmp w9,w10
7101dcc554  mov x1,x28
7101dcc558  b.ls 0x7101dcc588
7101dcc55c  ldur x9,[x29, #-0x58]
7101dcc560  ldr x9,[x9, #0x30]
7101dcc564  mov w10,#0x24
7101dcc568  madd x8,x8,x10,x9
7101dcc56c  ldrb w8,[x8, #0x1]
7101dcc570  tst w8,#0x8
7101dcc574  adrp x8,0x710425f000
7101dcc578  add x8,x8,#0x953
7101dcc57c  csel x1,x28,x8,eq
7101dcc580  b 0x7101dcc588
7101dcc584  mov x1,x28
7101dcc588  ldur x0,[x22, #-0x18]
7101dcc58c  mov v0.16B,v8.16B
7101dcc590  bl 0x7103778300
7101dcc594  sub x1,x22,#0x10
7101dcc598  mov w3,#0x1
7101dcc59c  mov x0,x23
7101dcc5a0  mov w2,wzr
7101dcc5a4  bl 0x71025ae1b0
7101dcc5a8  mov w3,#0x1
7101dcc5ac  mov x0,x23
7101dcc5b0  mov x1,x22
7101dcc5b4  mov w2,wzr
7101dcc5b8  bl 0x71025ae1b0
7101dcc5bc  sturh w27,[x22, #-0x28]
7101dcc5c0  add x25,x25,#0x1
7101dcc5c4  add x22,x22,#0x38
7101dcc5c8  cmp x25,x26
7101dcc5cc  b.cc 0x7101dcc4e4
7101dcc5d0  b 0x7101dcc3e8
7101dcc5d4  bl 0x71039c2650
7101dcc5d8  mov x0,x21
7101dcc5dc  bl 0x71039c1330
