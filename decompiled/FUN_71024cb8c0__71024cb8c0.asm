// addr:      71024cb8c0
// offset:    0x24cb8c0
// name:      FUN_71024cb8c0
// mangled:   
// size:      1960

71024cb8c0  sub sp,sp,#0x100
71024cb8c4  stp x28,x27,[sp, #0xa0]
71024cb8c8  stp x26,x25,[sp, #0xb0]
71024cb8cc  stp x24,x23,[sp, #0xc0]
71024cb8d0  stp x22,x21,[sp, #0xd0]
71024cb8d4  stp x20,x19,[sp, #0xe0]
71024cb8d8  stp x29,x30,[sp, #0xf0]
71024cb8dc  add x29,sp,#0xf0
71024cb8e0  cmp w0,#0x3
71024cb8e4  b.cs 0x71024cc064
71024cb8e8  adrp x11,0x7105314000
71024cb8ec  ldr x11,[x11, #0x510]
71024cb8f0  ldr x11,[x11]
71024cb8f4  ldr x11,[x11, #0x158]
71024cb8f8  str x11,[sp, #0x28]
71024cb8fc  ldr x11,[x11]
71024cb900  adrp x12,0x710532a000
71024cb904  ldr x12,[x12, #0x868]
71024cb908  ldr x23,[x12]
71024cb90c  mov w12,#0xd700
71024cb910  movk w12,#0x3, LSL #16
71024cb914  mov w14,#0xcc35
71024cb918  movk w14,#0x3, LSL #16
71024cb91c  ldr x11,[x11]
71024cb920  umaddl x13,w0,w12,x11
71024cb924  ldrb w14,[x13, x14, LSL ]
71024cb928  str x14,[sp, #0x8]
71024cb92c  mov w14,#0xd68c
71024cb930  movk w14,#0x3, LSL #16
71024cb934  mov w19,w0
71024cb938  ldrb w14,[x13, x14, LSL ]
71024cb93c  str x14,[sp, #0x10]
71024cb940  mov w14,#0xcc37
71024cb944  movk w14,#0x3, LSL #16
71024cb948  mov w8,wzr
71024cb94c  ldrb w14,[x13, x14, LSL ]
71024cb950  str w14,[sp, #0x4]
71024cb954  mov w14,#0xce44
71024cb958  movk w14,#0x3, LSL #16
71024cb95c  mov w22,wzr
71024cb960  ldrsw x13,[x13, x14, LSL #0x0]
71024cb964  mov w9,wzr
71024cb968  mov w10,wzr
71024cb96c  mov w14,#0x1
71024cb970  str x13,[sp, #0x18]
71024cb974  mov w24,w0
71024cb978  mov w13,#0xd690
71024cb97c  movk w13,#0x3, LSL #16
71024cb980  str w1,[sp, #0x24]
71024cb984  madd x17,x24,x12,x11
71024cb988  lsr w15,w10,#0x4
71024cb98c  add w10,w10,#0x1
71024cb990  add x15,x17,w15, UXTW  #0x2
71024cb994  ldr w15,[x15, x13, LSL #0x0]
71024cb998  and w16,w8,#0x1e
71024cb99c  lsl w16,w14,w16
71024cb9a0  tst w15,w16
71024cb9a4  csinc w22,w22,w9,eq
71024cb9a8  cinc w9,w9,ne
71024cb9ac  add w8,w8,#0x2
71024cb9b0  cmp w10,#0x80
71024cb9b4  b.ne 0x71024cb984
71024cb9b8  mov x25,xzr
71024cb9bc  mov w26,wzr
71024cb9c0  mov w27,wzr
71024cb9c4  mov w28,wzr
71024cb9c8  mov w20,wzr
71024cb9cc  str wzr,[sp, #0x60]
71024cb9d0  mov w21,wzr
71024cb9d4  mov x8,x23
71024cb9d8  stur xzr,[x29, #-0x68]
71024cb9dc  stp xzr,xzr,[sp, #0x40]
71024cb9e0  stur wzr,[x29, #-0x6c]
71024cb9e4  stp xzr,xzr,[sp, #0x50]
71024cb9e8  stp xzr,xzr,[sp, #0x30]
71024cb9ec  b 0x71024cba08
71024cb9f0  ldr w8,[sp, #0x60]
71024cb9f4  add w8,w8,#0x1
71024cb9f8  str w8,[sp, #0x60]
71024cb9fc  adrp x8,0x710532a000
71024cba00  ldr x8,[x8, #0x868]
71024cba04  ldr x8,[x8]
71024cba08  mov w9,#0x138
71024cba0c  madd x8,x25,x9,x8
71024cba10  add x1,x8,#0x5c8
71024cba14  add x0,sp,#0x68
71024cba18  bl 0x71024cc070
71024cba1c  ldp x0,x8,[sp, #0x68]
71024cba20  cmp x0,x8
71024cba24  b.eq 0x71024cba7c
71024cba28  ldp x10,x4,[sp, #0x28]
71024cba2c  ldr x3,[sp, #0x38]
71024cba30  ldp x18,x17,[sp, #0x50]
71024cba34  cmp x25,#0x1
71024cba38  ldp x2,x1,[sp, #0x40]
71024cba3c  orr w11,wzr,#0xffff
71024cba40  mov w7,#0xcc38
71024cba44  movk w7,#0x3, LSL #16
71024cba48  ldr x10,[x10]
71024cba4c  mov w12,#0xd
71024cba50  csel w11,w12,w11,eq
71024cba54  cmp x25,#0x0
71024cba58  mov w12,#0xb
71024cba5c  mov w9,wzr
71024cba60  csel w11,w12,w11,eq
71024cba64  mov x12,x0
71024cba68  mov w5,#0xd700
71024cba6c  movk w5,#0x3, LSL #16
71024cba70  mov w6,#0x84
71024cba74  mov w30,#0x1
71024cba78  b 0x71024cba94
71024cba7c  ldp x18,x17,[sp, #0x50]
71024cba80  ldp x2,x1,[sp, #0x40]
71024cba84  ldp x4,x3,[sp, #0x30]
71024cba88  b 0x71024cbc14
71024cba8c  sub x14,x29,#0x6c
71024cba90  b 0x71024cbb60
71024cba94  sub w13,w9,#0x400
71024cba98  cmp w9,#0x3ff
71024cba9c  csel w14,w11,w25,hi
71024cbaa0  csel w13,w13,w9,hi
71024cbaa4  cmp w19,#0x2
71024cbaa8  b.hi 0x71024cbc04
71024cbaac  cmp w14,#0x14
71024cbab0  b.cs 0x71024cc064
71024cbab4  cmp w13,#0x3ff
71024cbab8  b.hi 0x71024cbc04
71024cbabc  ldr x15,[x10]
71024cbac0  madd x15,x24,x5,x15
71024cbac4  umaddl x14,w14,w6,x15
71024cbac8  lsr w16,w13,#0x5
71024cbacc  lsl w13,w30,w13
71024cbad0  add x14,x14,w16, UXTW  #0x2
71024cbad4  ldr w14,[x14, x7, LSL #0x0]
71024cbad8  tst w14,w13
71024cbadc  b.eq 0x71024cbc04
71024cbae0  ldr w13,[x12, #0x50]
71024cbae4  sub w15,w13,#0x1
71024cbae8  cmp w15,#0x9
71024cbaec  b.hi 0x71024cbb74
71024cbaf0  adrp x16,0x7104501000
71024cbaf4  add x16,x16,#0xe18
71024cbaf8  ldr w14,[x12, #0x70]
71024cbafc  ldrsw x15,[x16, x15, LSL #0x2]
71024cbb00  add x15,x15,x16
71024cbb04  br x15
71024cbb08  sub w14,w14,#0x3
71024cbb0c  cmp w14,#0x3
71024cbb10  b.cs 0x71024cbb24
71024cbb14  b 0x71024cbb74
71024cbb18  sub w14,w14,#0x8
71024cbb1c  cmp w14,#0x2
71024cbb20  b.cc 0x71024cbb74
71024cbb24  ldr w14,[sp, #0x60]
71024cbb28  and w14,w14,#0x7fffffff
71024cbb2c  cmp w14,#0x11
71024cbb30  b.hi 0x71024cbb6c
71024cbb34  lsl w14,w30,w14
71024cbb38  mov w15,#0x7ff9
71024cbb3c  tst w14,w15
71024cbb40  b.eq 0x71024cbb4c
71024cbb44  sub x14,x29,#0x64
71024cbb48  b 0x71024cbb60
71024cbb4c  mov w15,#0x8002
71024cbb50  movk w15,#0x3, LSL #16
71024cbb54  tst w14,w15
71024cbb58  b.eq 0x71024cba8c
71024cbb5c  sub x14,x29,#0x68
71024cbb60  ldr w15,[x14]
71024cbb64  add w15,w15,#0x1
71024cbb68  str w15,[x14]
71024cbb6c  cmp w13,#0x2
71024cbb70  cinc w4,w4,eq
71024cbb74  ldr x13,[x12]
71024cbb78  ldp x14,x15,[x23, #0x150]
71024cbb7c  eor x14,x14,x13
71024cbb80  eor x15,x15,x13
71024cbb84  tst x14,#0xffffffffff
71024cbb88  csinc w27,w27,wzr,ne
71024cbb8c  tst x15,#0xffffffffff
71024cbb90  csinc w28,w28,wzr,ne
71024cbb94  ldp x14,x15,[x23, #0x160]
71024cbb98  eor x14,x14,x13
71024cbb9c  eor x15,x15,x13
71024cbba0  tst x14,#0xffffffffff
71024cbba4  csinc w26,w26,wzr,ne
71024cbba8  tst x15,#0xffffffffff
71024cbbac  ldp x14,x15,[x23, #0x170]
71024cbbb0  csinc w21,w21,wzr,ne
71024cbbb4  eor x14,x14,x13
71024cbbb8  eor x15,x15,x13
71024cbbbc  tst x14,#0xffffffffff
71024cbbc0  csinc w18,w18,wzr,ne
71024cbbc4  tst x15,#0xffffffffff
71024cbbc8  ldp x14,x15,[x23, #0x180]
71024cbbcc  csinc w2,w2,wzr,ne
71024cbbd0  eor x14,x14,x13
71024cbbd4  tst x14,#0xffffffffff
71024cbbd8  eor x14,x15,x13
71024cbbdc  csinc w1,w1,wzr,ne
71024cbbe0  tst x14,#0xffffffffff
71024cbbe4  csinc w3,w3,wzr,ne
71024cbbe8  ldp x14,x15,[x23, #0x190]
71024cbbec  eor x14,x14,x13
71024cbbf0  eor x13,x15,x13
71024cbbf4  tst x14,#0xffffffffff
71024cbbf8  csinc w20,w20,wzr,ne
71024cbbfc  tst x13,#0xffffffffff
71024cbc00  csinc w17,w17,wzr,ne
71024cbc04  add x12,x12,#0x128
71024cbc08  add w9,w9,#0x1
71024cbc0c  cmp x8,x12
71024cbc10  b.ne 0x71024cba94
71024cbc14  stp x4,x3,[sp, #0x30]
71024cbc18  stp x2,x1,[sp, #0x40]
71024cbc1c  stp x18,x17,[sp, #0x50]
71024cbc20  cbz x0,0x71024cbc2c
71024cbc24  str x0,[sp, #0x70]
71024cbc28  bl 0x710392eb40
71024cbc2c  add x25,x25,#0x1
71024cbc30  cmp x25,#0x12
71024cbc34  b.ne 0x71024cb9f0
71024cbc38  adrp x8,0x71052c5000
71024cbc3c  ldr x8,[x8, #0xe0]
71024cbc40  ldr x24,[x8]
71024cbc44  ldr w8,[sp, #0x24]
71024cbc48  mov w23,#0xf7cf
71024cbc4c  movk w23,#0xe353, LSL #16
71024cbc50  mov w25,#0x9ba5
71024cbc54  movk w25,#0x20c4, LSL #16
71024cbc58  tbnz w8,#0x0,0x71024cbccc
71024cbc5c  ldr x8,[x24, #0x20]
71024cbc60  cbz x8,0x71024cbccc
71024cbc64  bl 0x71039c07b0
71024cbc68  adrp x8,0x7107447000
71024cbc6c  ldr x8,[x8, #0xe8]
71024cbc70  sub x0,x0,x8
71024cbc74  bl 0x71039c0c80
71024cbc78  and x8,x0,#0xffffffff
71024cbc7c  asr x9,x0,#0x20
71024cbc80  mul x10,x9,x23
71024cbc84  mul x11,x8,x23
71024cbc88  mul x9,x9,x25
71024cbc8c  mul x8,x8,x25
71024cbc90  add x10,x10,x11, LSR #0x20
71024cbc94  add x8,x8,w10, UXTW 
71024cbc98  add x9,x9,x10, ASR #0x20
71024cbc9c  ldr x10,[x24, #0x20]
71024cbca0  add x8,x9,x8, LSR #0x20
71024cbca4  mov w9,#0x3e8
71024cbca8  asr x8,x8,#0x7
71024cbcac  add x8,x8,x0, LSR #0x3f
71024cbcb0  neg x10,x10
71024cbcb4  madd x8,x8,x9,x10
71024cbcb8  mov x9,#0x3a00
71024cbcbc  movk x9,#0xee64, LSL #16
71024cbcc0  movk x9,#0x8b, LSL #32
71024cbcc4  cmp x8,x9
71024cbcc8  b.lt 0x71024cc044
71024cbccc  ldr w8,[sp, #0x4]
71024cbcd0  cmp w8,#0x0
71024cbcd4  cset w8,ne
71024cbcd8  str x8,[sp, #0x60]
71024cbcdc  bl 0x71039c07b0
71024cbce0  adrp x8,0x7107447000
71024cbce4  ldr x8,[x8, #0xe8]
71024cbce8  sub x0,x0,x8
71024cbcec  bl 0x71039c0c80
71024cbcf0  and x8,x0,#0xffffffff
71024cbcf4  asr x9,x0,#0x20
71024cbcf8  mul x10,x9,x23
71024cbcfc  mul x11,x8,x23
71024cbd00  mul x9,x9,x25
71024cbd04  adrp x1,0x71042d5000
71024cbd08  add x1,x1,#0x999
71024cbd0c  mul x8,x8,x25
71024cbd10  add x10,x10,x11, LSR #0x20
71024cbd14  add x8,x8,w10, UXTW 
71024cbd18  add x9,x9,x10, ASR #0x20
71024cbd1c  add x8,x9,x8, LSR #0x20
71024cbd20  mov w9,#0x3e8
71024cbd24  asr x8,x8,#0x7
71024cbd28  add x8,x8,x0, LSR #0x3f
71024cbd2c  sub x0,x29,#0x60
71024cbd30  mul x8,x8,x9
71024cbd34  str x8,[x24, #0x20]
71024cbd38  bl 0x710375aa90
71024cbd3c  ldur x25,[x29, #-0x60]
71024cbd40  ldr x9,[x25]
71024cbd44  mov w24,#0x4020
71024cbd48  sxtw x8,w19
71024cbd4c  adrp x1,0x710426f000
71024cbd50  add x1,x1,#0x72d
71024cbd54  str x8,[sp, #0x68]
71024cbd58  add x0,x9,x24
71024cbd5c  add x2,sp,#0x68
71024cbd60  bl 0x71039c5fa0
71024cbd64  ldr x8,[x25]
71024cbd68  ldr x9,[sp, #0x8]
71024cbd6c  adrp x1,0x71043f0000
71024cbd70  add x1,x1,#0x12d
71024cbd74  add x0,x8,x24
71024cbd78  add x2,sp,#0x68
71024cbd7c  str x9,[sp, #0x68]
71024cbd80  bl 0x71039c5fa0
71024cbd84  ldr x8,[x25]
71024cbd88  ldr x9,[sp, #0x10]
71024cbd8c  adrp x1,0x7104432000
71024cbd90  add x1,x1,#0x6ec
71024cbd94  add x0,x8,x24
71024cbd98  add x2,sp,#0x68
71024cbd9c  str x9,[sp, #0x68]
71024cbda0  bl 0x71039c5fa0
71024cbda4  ldr x9,[x25]
71024cbda8  sxtw x8,w22
71024cbdac  adrp x1,0x71043ac000
71024cbdb0  add x1,x1,#0xe44
71024cbdb4  add x2,sp,#0x68
71024cbdb8  str x8,[sp, #0x68]
71024cbdbc  add x0,x9,x24
71024cbdc0  bl 0x71039c5fa0
71024cbdc4  ldr x9,[x25]
71024cbdc8  ldursw x8,[x29, #-0x64]
71024cbdcc  adrp x1,0x71042d5000
71024cbdd0  add x1,x1,#0x9a3
71024cbdd4  add x2,sp,#0x68
71024cbdd8  add x0,x9,x24
71024cbddc  str x8,[sp, #0x68]
71024cbde0  bl 0x71039c5fa0
71024cbde4  ldr x9,[x25]
71024cbde8  ldursw x8,[x29, #-0x68]
71024cbdec  adrp x1,0x7104349000
71024cbdf0  add x1,x1,#0x99f
71024cbdf4  add x2,sp,#0x68
71024cbdf8  add x0,x9,x24
71024cbdfc  str x8,[sp, #0x68]
71024cbe00  bl 0x71039c5fa0
71024cbe04  ldr x9,[x25]
71024cbe08  ldursw x8,[x29, #-0x6c]
71024cbe0c  adrp x1,0x7104421000
71024cbe10  add x1,x1,#0xa31
71024cbe14  add x2,sp,#0x68
71024cbe18  add x0,x9,x24
71024cbe1c  str x8,[sp, #0x68]
71024cbe20  bl 0x71039c5fa0
71024cbe24  ldr x8,[x25]
71024cbe28  ldr x9,[sp, #0x18]
71024cbe2c  adrp x1,0x71042d5000
71024cbe30  add x1,x1,#0x9bd
71024cbe34  add x0,x8,x24
71024cbe38  add x2,sp,#0x68
71024cbe3c  str x9,[sp, #0x68]
71024cbe40  bl 0x71039c5fa0
71024cbe44  ldr x8,[sp, #0x30]
71024cbe48  ldr x9,[x25]
71024cbe4c  add x0,x9,x24
71024cbe50  sxtw x8,w8
71024cbe54  adrp x1,0x71042c4000
71024cbe58  add x1,x1,#0x529
71024cbe5c  add x2,sp,#0x68
71024cbe60  str x8,[sp, #0x68]
71024cbe64  bl 0x71039c5fa0
71024cbe68  ldr x8,[x25]
71024cbe6c  and x9,x21,#0xff
71024cbe70  adrp x1,0x71042c4000
71024cbe74  add x1,x1,#0x53d
71024cbe78  str x9,[sp, #0x68]
71024cbe7c  add x0,x8,x24
71024cbe80  add x2,sp,#0x68
71024cbe84  bl 0x71039c5fa0
71024cbe88  ldr x8,[x25]
71024cbe8c  and x9,x20,#0xff
71024cbe90  adrp x1,0x710439c000
71024cbe94  add x1,x1,#0xb07
71024cbe98  str x9,[sp, #0x68]
71024cbe9c  add x0,x8,x24
71024cbea0  add x2,sp,#0x68
71024cbea4  bl 0x71039c5fa0
71024cbea8  ldur x19,[x29, #-0x60]
71024cbeac  ldr x8,[x19]
71024cbeb0  and x9,x28,#0xff
71024cbeb4  adrp x1,0x710425e000
71024cbeb8  add x1,x1,#0xae8
71024cbebc  str x9,[sp, #0x68]
71024cbec0  add x0,x8,x24
71024cbec4  add x2,sp,#0x68
71024cbec8  bl 0x71039c5fa0
71024cbecc  ldr x8,[x19]
71024cbed0  and x9,x27,#0xff
71024cbed4  adrp x1,0x7104432000
71024cbed8  add x1,x1,#0x6fb
71024cbedc  str x9,[sp, #0x68]
71024cbee0  add x0,x8,x24
71024cbee4  add x2,sp,#0x68
71024cbee8  bl 0x71039c5fa0
71024cbeec  ldr x8,[x19]
71024cbef0  and x9,x26,#0xff
71024cbef4  adrp x1,0x7104421000
71024cbef8  add x1,x1,#0xa4b
71024cbefc  str x9,[sp, #0x68]
71024cbf00  add x0,x8,x24
71024cbf04  add x2,sp,#0x68
71024cbf08  bl 0x71039c5fa0
71024cbf0c  ldr x8,[x19]
71024cbf10  ldr x9,[sp, #0x38]
71024cbf14  and x9,x9,#0xff
71024cbf18  add x0,x8,x24
71024cbf1c  adrp x1,0x71043f0000
71024cbf20  add x1,x1,#0x13c
71024cbf24  add x2,sp,#0x68
71024cbf28  str x9,[sp, #0x68]
71024cbf2c  bl 0x71039c5fa0
71024cbf30  ldr x8,[x19]
71024cbf34  ldr x9,[sp, #0x40]
71024cbf38  and x9,x9,#0xff
71024cbf3c  add x0,x8,x24
71024cbf40  adrp x1,0x7104454000
71024cbf44  add x1,x1,#0x1e9
71024cbf48  add x2,sp,#0x68
71024cbf4c  str x9,[sp, #0x68]
71024cbf50  bl 0x71039c5fa0
71024cbf54  ldr x8,[x19]
71024cbf58  ldr x9,[sp, #0x48]
71024cbf5c  and x9,x9,#0xff
71024cbf60  add x0,x8,x24
71024cbf64  adrp x1,0x710435a000
71024cbf68  add x1,x1,#0xc50
71024cbf6c  add x2,sp,#0x68
71024cbf70  str x9,[sp, #0x68]
71024cbf74  bl 0x71039c5fa0
71024cbf78  ldr x8,[x19]
71024cbf7c  ldr x9,[sp, #0x50]
71024cbf80  and x9,x9,#0xff
71024cbf84  add x0,x8,x24
71024cbf88  adrp x1,0x7104454000
71024cbf8c  add x1,x1,#0x1fa
71024cbf90  add x2,sp,#0x68
71024cbf94  str x9,[sp, #0x68]
71024cbf98  bl 0x71039c5fa0
71024cbf9c  ldr x8,[x19]
71024cbfa0  ldr x9,[sp, #0x58]
71024cbfa4  and x9,x9,#0xff
71024cbfa8  add x0,x8,x24
71024cbfac  adrp x1,0x7104339000
71024cbfb0  add x1,x1,#0x94f
71024cbfb4  add x2,sp,#0x68
71024cbfb8  str x9,[sp, #0x68]
71024cbfbc  bl 0x71039c5fa0
71024cbfc0  ldr x8,[x19]
71024cbfc4  ldr x9,[sp, #0x60]
71024cbfc8  adrp x1,0x71043f0000
71024cbfcc  add x1,x1,#0x14e
71024cbfd0  add x0,x8,x24
71024cbfd4  add x2,sp,#0x68
71024cbfd8  str x9,[sp, #0x68]
71024cbfdc  bl 0x71039c5fa0
71024cbfe0  adrp x8,0x710593b000
71024cbfe4  ldr x8,[x8, #0x580]
71024cbfe8  ldr x1,[x8]
71024cbfec  mov w8,#0x7300
71024cbff0  ldrsw x8,[x1, x8, LSL #0x0]
71024cbff4  cmn w8,#0x1
71024cbff8  b.eq 0x71024cc014
71024cbffc  ldr x9,[x1, #0x72c0]
71024cc000  cmp x9,x8
71024cc004  b.ls 0x71024cc064
71024cc008  mov w9,#0xcc0
71024cc00c  madd x8,x8,x9,x1
71024cc010  add x1,x8,#0xcc0
71024cc014  ldr x8,[x19]
71024cc018  mov w9,#0x4020
71024cc01c  add x0,x8,x9
71024cc020  bl 0x71039c5fb0
71024cc024  stur xzr,[x29, #-0x60]
71024cc028  cbz x19,0x71024cc044
71024cc02c  ldr x0,[x19]
71024cc030  str xzr,[x19]
71024cc034  cbz x0,0x71024cc03c
71024cc038  bl 0x710392eb40
71024cc03c  mov x0,x19
71024cc040  bl 0x710392eb40
71024cc044  ldp x29,x30,[sp, #0xf0]
71024cc048  ldp x20,x19,[sp, #0xe0]
71024cc04c  ldp x22,x21,[sp, #0xd0]
71024cc050  ldp x24,x23,[sp, #0xc0]
71024cc054  ldp x26,x25,[sp, #0xb0]
71024cc058  ldp x28,x27,[sp, #0xa0]
71024cc05c  add sp,sp,#0x100
71024cc060  ret
71024cc064  bl 0x71039c2650
