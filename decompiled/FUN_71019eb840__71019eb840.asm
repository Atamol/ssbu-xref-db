// addr:      71019eb840
// offset:    0x19eb840
// name:      FUN_71019eb840
// mangled:   
// size:      19884

71019eb840  stp d15,d14,[sp, #-0xa0]!
71019eb844  stp d13,d12,[sp, #0x10]
71019eb848  stp d11,d10,[sp, #0x20]
71019eb84c  stp d9,d8,[sp, #0x30]
71019eb850  stp x28,x27,[sp, #0x40]
71019eb854  stp x26,x25,[sp, #0x50]
71019eb858  stp x24,x23,[sp, #0x60]
71019eb85c  stp x22,x21,[sp, #0x70]
71019eb860  stp x20,x19,[sp, #0x80]
71019eb864  stp x29,x30,[sp, #0x90]
71019eb868  add x29,sp,#0x90
71019eb86c  sub sp,sp,#0x380
71019eb870  ldrb w8,[x3]
71019eb874  strb w8,[x0, #0x254]
71019eb878  adrp x8,0x710532f000
71019eb87c  ldr x8,[x8, #0x730]
71019eb880  ldr x27,[x8, #0x8]
71019eb884  ldrb w8,[x3, #0x1]
71019eb888  stp xzr,xzr,[x29, #-0xc8]
71019eb88c  str w8,[sp, #0x11c]
71019eb890  sub x8,x29,#0xd0
71019eb894  add x8,x8,#0x8
71019eb898  str x2,[sp, #0x8]
71019eb89c  str x1,[sp, #0xf0]
71019eb8a0  str x3,[sp, #0x170]
71019eb8a4  mov x26,x0
71019eb8a8  stp xzr,x8,[x29, #-0xd8]
71019eb8ac  str x8,[sp, #0x28]
71019eb8b0  stp xzr,xzr,[x29, #-0xe8]
71019eb8b4  ldp x23,x24,[x4]
71019eb8b8  str x4,[sp, #0x160]
71019eb8bc  subs x20,x24,x23
71019eb8c0  asr x21,x20,#0x3
71019eb8c4  b.eq 0x71019eb938
71019eb8c8  lsr x8,x21,#0x3d
71019eb8cc  cbnz x8,0x71019f05e8
71019eb8d0  mov w0,#0x10
71019eb8d4  mov x1,x20
71019eb8d8  bl 0x710392e290
71019eb8dc  mov x19,x0
71019eb8e0  cbnz x0,0x71019eb928
71019eb8e4  adrp x8,0x7105332000
71019eb8e8  ldr x0,[x8, #0xf00]
71019eb8ec  cbz x0,0x71019eb924
71019eb8f0  str wzr,[sp, #0x2e0]
71019eb8f4  str x20,[sp, #0x190]
71019eb8f8  ldr x8,[x0]
71019eb8fc  ldr x8,[x8, #0x30]
71019eb900  add x1,sp,#0x2e0
71019eb904  add x2,sp,#0x190
71019eb908  blr x8
71019eb90c  tbz w0,#0x0,0x71019eb924
71019eb910  mov w0,#0x10
71019eb914  mov x1,x20
71019eb918  bl 0x710392e290
71019eb91c  mov x19,x0
71019eb920  cbnz x0,0x71019eb928
71019eb924  mov x19,xzr
71019eb928  add x8,x19,x21, LSL #0x3
71019eb92c  stp x19,x19,[x29, #-0xe8]
71019eb930  stur x8,[x29, #-0xd8]
71019eb934  b 0x71019eb93c
71019eb938  mov x19,xzr
71019eb93c  cmp x23,x24
71019eb940  str x26,[sp, #0x168]
71019eb944  str x27,[sp, #0xe0]
71019eb948  b.eq 0x71019eb960
71019eb94c  mov w25,#0xa
71019eb950  adrp x28,0x71044f6000
71019eb954  add x28,x28,#0xe0c
71019eb958  mov x26,#-0x3f00000000000000
71019eb95c  b 0x71019eb970
71019eb960  mov x23,x19
71019eb964  b 0x71019ebf30
71019eb968  mov x22,xzr
71019eb96c  b 0x71019ebed0
71019eb970  ldr x1,[x23]
71019eb974  ldr x0,[x27, #0x168]
71019eb978  bl 0x7103262cc0
71019eb97c  cmp w0,#0x4
71019eb980  b.hi 0x71019ebf10
71019eb984  mov w8,w0
71019eb988  ldrsw x8,[x28, x8, LSL #0x2]
71019eb98c  add x8,x8,x28
71019eb990  br x8
71019eb994  ldr x21,[x23]
71019eb998  ldr x0,[x27, #0x168]
71019eb99c  mov x1,x21
71019eb9a0  bl 0x7103263a30
71019eb9a4  bics wzr,w25,w0
71019eb9a8  b.ne 0x71019ebf10
71019eb9ac  ldp x9,x8,[x29, #-0xe0]
71019eb9b0  cmp x9,x8
71019eb9b4  b.eq 0x71019ebbc8
71019eb9b8  str x21,[x9]
71019eb9bc  b 0x71019ebe0c
71019eb9c0  ldr w8,[sp, #0x11c]
71019eb9c4  cbnz w8,0x71019ebf10
71019eb9c8  ldr x19,[x23]
71019eb9cc  ldr x0,[x27, #0x168]
71019eb9d0  mov x1,x19
71019eb9d4  bl 0x7103263030
71019eb9d8  ldr x8,[sp, #0x160]
71019eb9dc  ldp x9,x8,[x8]
71019eb9e0  cmp x9,x8
71019eb9e4  b.eq 0x71019ebde4
71019eb9e8  tst x0,#0xffffffffff
71019eb9ec  and x11,x0,#-0x100000000000000
71019eb9f0  cset w10,ne
71019eb9f4  cmp x11,x26
71019eb9f8  cset w11,eq
71019eb9fc  and w11,w11,w10
71019eba00  b.ne 0x71019ebd28
71019eba04  and x10,x0,#0xffffffffff
71019eba08  cbz x10,0x71019ebd28
71019eba0c  cbz w11,0x71019ebdf0
71019eba10  ldr x10,[x9]
71019eba14  and x12,x10,#-0x100000000000000
71019eba18  and x11,x10,#0xffffffffff
71019eba1c  eor x10,x0,x10
71019eba20  cmp x12,x26
71019eba24  ccmp x11,#0x0,#0x4,eq
71019eba28  and x10,x10,#0xffffffffff
71019eba2c  ccmp x10,#0x0,#0x0,ne
71019eba30  b.eq 0x71019ebde4
71019eba34  add x9,x9,#0x8
71019eba38  cmp x8,x9
71019eba3c  b.ne 0x71019eba10
71019eba40  b 0x71019ebdf0
71019eba44  ldr x19,[x23]
71019eba48  ldr x0,[x27, #0x168]
71019eba4c  mov x1,x19
71019eba50  bl 0x7103263030
71019eba54  ldur x21,[x29, #-0xc8]
71019eba58  mov x20,x0
71019eba5c  cbz x21,0x71019ebb30
71019eba60  ldr x22,[sp, #0x28]
71019eba64  and x8,x19,#-0xffff0000000001
71019eba68  b 0x71019eba74
71019eba6c  mov x22,x21
71019eba70  mov x21,x9
71019eba74  ldr x9,[x21, #0x20]
71019eba78  and x9,x9,#-0xffff0000000001
71019eba7c  cmp x8,x9
71019eba80  b.cs 0x71019eba90
71019eba84  ldr x9,[x21]
71019eba88  cbnz x9,0x71019eba6c
71019eba8c  b 0x71019ebc10
71019eba90  cmp x9,x8
71019eba94  b.cs 0x71019ebb38
71019eba98  mov x22,x21
71019eba9c  ldr x9,[x22, #0x8]!
71019ebaa0  cbz x9,0x71019ebb38
71019ebaa4  mov x21,x9
71019ebaa8  b 0x71019eba74
71019ebaac  ldr w8,[sp, #0x11c]
71019ebab0  cbz w8,0x71019ebf10
71019ebab4  ldr x19,[x23]
71019ebab8  ldr x0,[x27, #0x168]
71019ebabc  mov x1,x19
71019ebac0  bl 0x7103263030
71019ebac4  ldr x8,[sp, #0x160]
71019ebac8  ldp x9,x8,[x8]
71019ebacc  cmp x9,x8
71019ebad0  b.eq 0x71019ebde4
71019ebad4  tst x0,#0xffffffffff
71019ebad8  and x11,x0,#-0x100000000000000
71019ebadc  cset w10,ne
71019ebae0  cmp x11,x26
71019ebae4  cset w11,eq
71019ebae8  and w11,w11,w10
71019ebaec  b.ne 0x71019ebc20
71019ebaf0  and x10,x0,#0xffffffffff
71019ebaf4  cbz x10,0x71019ebc20
71019ebaf8  cbz w11,0x71019ebdf0
71019ebafc  ldr x10,[x9]
71019ebb00  and x12,x10,#-0x100000000000000
71019ebb04  and x11,x10,#0xffffffffff
71019ebb08  eor x10,x0,x10
71019ebb0c  cmp x12,x26
71019ebb10  ccmp x11,#0x0,#0x4,eq
71019ebb14  and x10,x10,#0xffffffffff
71019ebb18  ccmp x10,#0x0,#0x0,ne
71019ebb1c  b.eq 0x71019ebde4
71019ebb20  add x9,x9,#0x8
71019ebb24  cmp x8,x9
71019ebb28  b.ne 0x71019ebafc
71019ebb2c  b 0x71019ebdf0
71019ebb30  ldr x22,[sp, #0x28]
71019ebb34  mov x21,x22
71019ebb38  ldr x8,[x22]
71019ebb3c  cbnz x8,0x71019ebf10
71019ebb40  mov w0,#0x10
71019ebb44  orr w1,wzr,#0x30
71019ebb48  bl 0x710392e290
71019ebb4c  mov x1,x0
71019ebb50  cbnz x0,0x71019ebb8c
71019ebb54  adrp x8,0x7105332000
71019ebb58  ldr x0,[x8, #0xf00]
71019ebb5c  orr w8,wzr,#0x30
71019ebb60  str wzr,[sp, #0x2e0]
71019ebb64  add x1,sp,#0x2e0
71019ebb68  str x8,[sp, #0x190]
71019ebb6c  ldr x8,[x0]
71019ebb70  ldr x8,[x8, #0x30]
71019ebb74  add x2,sp,#0x190
71019ebb78  blr x8
71019ebb7c  mov w0,#0x10
71019ebb80  orr w1,wzr,#0x30
71019ebb84  bl 0x710392e290
71019ebb88  mov x1,x0
71019ebb8c  stp x19,x20,[x1, #0x20]
71019ebb90  str x21,[x1, #0x10]
71019ebb94  stp xzr,xzr,[x1]
71019ebb98  str x1,[x22]
71019ebb9c  ldur x8,[x29, #-0xd0]
71019ebba0  ldr x8,[x8]
71019ebba4  cbz x8,0x71019ebbb0
71019ebba8  stur x8,[x29, #-0xd0]
71019ebbac  ldr x1,[x22]
71019ebbb0  ldur x0,[x29, #-0xc8]
71019ebbb4  bl 0x71003e59f0
71019ebbb8  ldur x8,[x29, #-0xc0]
71019ebbbc  add x8,x8,#0x1
71019ebbc0  stur x8,[x29, #-0xc0]
71019ebbc4  b 0x71019ebf10
71019ebbc8  ldur x19,[x29, #-0xe8]
71019ebbcc  sub x20,x9,x19
71019ebbd0  asr x27,x20,#0x3
71019ebbd4  add x9,x27,#0x1
71019ebbd8  lsr x10,x9,#0x3d
71019ebbdc  cbnz x10,0x71019f05e0
71019ebbe0  sub x8,x8,x19
71019ebbe4  asr x10,x8,#0x3
71019ebbe8  orr x11,xzr,#0xffffffffffffffe
71019ebbec  cmp x10,x11
71019ebbf0  b.hi 0x71019ebc7c
71019ebbf4  asr x8,x8,#0x2
71019ebbf8  cmp x8,x9
71019ebbfc  csel x26,x9,x8,cc
71019ebc00  cbz x26,0x71019ebdb0
71019ebc04  lsr x8,x26,#0x3d
71019ebc08  cbz x8,0x71019ebc80
71019ebc0c  b 0x71019f05e8
71019ebc10  mov x22,x21
71019ebc14  ldr x8,[x22]
71019ebc18  cbnz x8,0x71019ebf10
71019ebc1c  b 0x71019ebb40
71019ebc20  ldr x10,[x9]
71019ebc24  tst x10,#0xffffffffff
71019ebc28  and x13,x10,#-0x100000000000000
71019ebc2c  cset w12,ne
71019ebc30  cmp x13,x26
71019ebc34  cset w13,eq
71019ebc38  and w12,w13,w12
71019ebc3c  tbz w11,#0x0,0x71019ebd84
71019ebc40  cbz w12,0x71019ebde4
71019ebc44  add x11,x9,#0x8
71019ebc48  eor x10,x0,x10
71019ebc4c  tst x10,#0xffffffffff
71019ebc50  b.eq 0x71019ebde4
71019ebc54  cmp x8,x11
71019ebc58  b.eq 0x71019ebdf0
71019ebc5c  mov x9,x11
71019ebc60  ldr x10,[x11], #0x8
71019ebc64  and x12,x10,#-0x100000000000000
71019ebc68  cmp x12,x26
71019ebc6c  b.ne 0x71019ebde4
71019ebc70  and x12,x10,#0xffffffffff
71019ebc74  cbnz x12,0x71019ebc48
71019ebc78  b 0x71019ebde4
71019ebc7c  orr x26,xzr,#0x1fffffffffffffff
71019ebc80  lsl x8,x26,#0x3
71019ebc84  cmp x8,#0x0
71019ebc88  csinc x21,x8,xzr,ne
71019ebc8c  mov w0,#0x10
71019ebc90  mov x1,x21
71019ebc94  bl 0x710392e290
71019ebc98  mov x22,x0
71019ebc9c  cbnz x0,0x71019ebce4
71019ebca0  adrp x8,0x7105332000
71019ebca4  ldr x0,[x8, #0xf00]
71019ebca8  cbz x0,0x71019ebce0
71019ebcac  str wzr,[sp, #0x2e0]
71019ebcb0  str x21,[sp, #0x190]
71019ebcb4  ldr x8,[x0]
71019ebcb8  ldr x8,[x8, #0x30]
71019ebcbc  add x1,sp,#0x2e0
71019ebcc0  add x2,sp,#0x190
71019ebcc4  blr x8
71019ebcc8  tbz w0,#0x0,0x71019ebce0
71019ebccc  mov w0,#0x10
71019ebcd0  mov x1,x21
71019ebcd4  bl 0x710392e290
71019ebcd8  mov x22,x0
71019ebcdc  cbnz x0,0x71019ebce4
71019ebce0  mov x22,xzr
71019ebce4  ldr x21,[x23]
71019ebce8  add x27,x22,x27, LSL #0x3
71019ebcec  cmp x20,#0x1
71019ebcf0  str x21,[x27], #0x8
71019ebcf4  add x21,x22,x26, LSL #0x3
71019ebcf8  b.lt 0x71019ebd0c
71019ebcfc  mov x0,x22
71019ebd00  mov x1,x19
71019ebd04  mov x2,x20
71019ebd08  bl 0x71039c00e0
71019ebd0c  stp x22,x27,[x29, #-0xe8]
71019ebd10  ldr x27,[sp, #0xe0]
71019ebd14  mov x26,#-0x3f00000000000000
71019ebd18  stur x21,[x29, #-0xd8]
71019ebd1c  cbz x19,0x71019ebf10
71019ebd20  mov x0,x19
71019ebd24  b 0x71019ebf0c
71019ebd28  ldr x10,[x9]
71019ebd2c  tst x10,#0xffffffffff
71019ebd30  and x13,x10,#-0x100000000000000
71019ebd34  cset w12,ne
71019ebd38  cmp x13,x26
71019ebd3c  cset w13,eq
71019ebd40  and w12,w13,w12
71019ebd44  tbz w11,#0x0,0x71019ebdb8
71019ebd48  cbz w12,0x71019ebde4
71019ebd4c  add x11,x9,#0x8
71019ebd50  eor x10,x0,x10
71019ebd54  tst x10,#0xffffffffff
71019ebd58  b.eq 0x71019ebde4
71019ebd5c  cmp x8,x11
71019ebd60  b.eq 0x71019ebdf0
71019ebd64  mov x9,x11
71019ebd68  ldr x10,[x11], #0x8
71019ebd6c  and x12,x10,#-0x100000000000000
71019ebd70  cmp x12,x26
71019ebd74  b.ne 0x71019ebde4
71019ebd78  and x12,x10,#0xffffffffff
71019ebd7c  cbnz x12,0x71019ebd50
71019ebd80  b 0x71019ebde4
71019ebd84  cbz w12,0x71019ebde4
71019ebd88  add x9,x9,#0x8
71019ebd8c  cmp x8,x9
71019ebd90  b.eq 0x71019ebdf0
71019ebd94  ldr x10,[x9], #0x8
71019ebd98  and x11,x10,#-0x100000000000000
71019ebd9c  cmp x11,x26
71019ebda0  b.ne 0x71019ebde0
71019ebda4  and x10,x10,#0xffffffffff
71019ebda8  cbnz x10,0x71019ebd8c
71019ebdac  b 0x71019ebde0
71019ebdb0  mov x22,xzr
71019ebdb4  b 0x71019ebce8
71019ebdb8  cbz w12,0x71019ebde4
71019ebdbc  add x9,x9,#0x8
71019ebdc0  cmp x8,x9
71019ebdc4  b.eq 0x71019ebdf0
71019ebdc8  ldr x10,[x9], #0x8
71019ebdcc  and x11,x10,#-0x100000000000000
71019ebdd0  cmp x11,x26
71019ebdd4  b.ne 0x71019ebde0
71019ebdd8  and x10,x10,#0xffffffffff
71019ebddc  cbnz x10,0x71019ebdc0
71019ebde0  sub x9,x9,#0x8
71019ebde4  cmp x8,x9
71019ebde8  b.ne 0x71019ebdfc
71019ebdec  b 0x71019ebf10
71019ebdf0  mov x9,x8
71019ebdf4  cmp x8,x9
71019ebdf8  b.eq 0x71019ebf10
71019ebdfc  ldp x9,x8,[x29, #-0xe0]
71019ebe00  cmp x9,x8
71019ebe04  b.eq 0x71019ebe1c
71019ebe08  str x19,[x9]
71019ebe0c  ldur x8,[x29, #-0xe0]
71019ebe10  add x8,x8,#0x8
71019ebe14  stur x8,[x29, #-0xe0]
71019ebe18  b 0x71019ebf10
71019ebe1c  ldur x20,[x29, #-0xe8]
71019ebe20  sub x21,x9,x20
71019ebe24  asr x27,x21,#0x3
71019ebe28  add x9,x27,#0x1
71019ebe2c  lsr x10,x9,#0x3d
71019ebe30  cbnz x10,0x71019f05e0
71019ebe34  sub x8,x8,x20
71019ebe38  asr x10,x8,#0x3
71019ebe3c  orr x11,xzr,#0xffffffffffffffe
71019ebe40  cmp x10,x11
71019ebe44  b.hi 0x71019ebe64
71019ebe48  asr x8,x8,#0x2
71019ebe4c  cmp x8,x9
71019ebe50  csel x26,x9,x8,cc
71019ebe54  cbz x26,0x71019eb968
71019ebe58  lsr x8,x26,#0x3d
71019ebe5c  cbz x8,0x71019ebe68
71019ebe60  b 0x71019f05e8
71019ebe64  orr x26,xzr,#0x1fffffffffffffff
71019ebe68  lsl x8,x26,#0x3
71019ebe6c  cmp x8,#0x0
71019ebe70  csinc x19,x8,xzr,ne
71019ebe74  mov w0,#0x10
71019ebe78  mov x1,x19
71019ebe7c  bl 0x710392e290
71019ebe80  mov x22,x0
71019ebe84  cbnz x0,0x71019ebecc
71019ebe88  adrp x8,0x7105332000
71019ebe8c  ldr x0,[x8, #0xf00]
71019ebe90  cbz x0,0x71019ebec8
71019ebe94  str wzr,[sp, #0x2e0]
71019ebe98  str x19,[sp, #0x190]
71019ebe9c  ldr x8,[x0]
71019ebea0  ldr x8,[x8, #0x30]
71019ebea4  add x1,sp,#0x2e0
71019ebea8  add x2,sp,#0x190
71019ebeac  blr x8
71019ebeb0  tbz w0,#0x0,0x71019ebec8
71019ebeb4  mov w0,#0x10
71019ebeb8  mov x1,x19
71019ebebc  bl 0x710392e290
71019ebec0  mov x22,x0
71019ebec4  cbnz x0,0x71019ebecc
71019ebec8  mov x22,xzr
71019ebecc  ldr x19,[x23]
71019ebed0  add x27,x22,x27, LSL #0x3
71019ebed4  cmp x21,#0x1
71019ebed8  str x19,[x27], #0x8
71019ebedc  add x19,x22,x26, LSL #0x3
71019ebee0  b.lt 0x71019ebef4
71019ebee4  mov x0,x22
71019ebee8  mov x1,x20
71019ebeec  mov x2,x21
71019ebef0  bl 0x71039c00e0
71019ebef4  stp x22,x27,[x29, #-0xe8]
71019ebef8  ldr x27,[sp, #0xe0]
71019ebefc  mov x26,#-0x3f00000000000000
71019ebf00  stur x19,[x29, #-0xd8]
71019ebf04  cbz x20,0x71019ebf10
71019ebf08  mov x0,x20
71019ebf0c  bl 0x710392eb40
71019ebf10  add x23,x23,#0x8
71019ebf14  cmp x23,x24
71019ebf18  b.ne 0x71019eb970
71019ebf1c  ldp x9,x26,[sp, #0x160]
71019ebf20  ldp x19,x23,[x29, #-0xe8]
71019ebf24  ldp x8,x9,[x9]
71019ebf28  sub x8,x9,x8
71019ebf2c  asr x21,x8,#0x3
71019ebf30  ldr x8,[sp, #0x170]
71019ebf34  ldrb w22,[x8]
71019ebf38  ldr x8,[sp, #0xf0]
71019ebf3c  ldr x20,[x8]
71019ebf40  adrp x8,0x710532f000
71019ebf44  add x8,x8,#0x4d0
71019ebf48  ldarb w8,[x8]
71019ebf4c  tbz w8,#0x0,0x71019f0594
71019ebf50  ldr x11,[x20, #0x10]!
71019ebf54  sub x8,x23,x19
71019ebf58  cbz x11,0x71019ebfa0
71019ebf5c  mov x10,#0xd936
71019ebf60  movk x10,#0x75a6, LSL #16
71019ebf64  movk x10,#0x28, LSL #32
71019ebf68  mov x9,x20
71019ebf6c  ldr x12,[x11, #0x20]
71019ebf70  and x12,x12,#0xfffffffffe
71019ebf74  cmp x12,x10
71019ebf78  cset w12,cc
71019ebf7c  csel x9,x9,x11,cc
71019ebf80  ldr x11,[x11, w12, UXTW #0x3]
71019ebf84  cbnz x11,0x71019ebf6c
71019ebf88  cmp x9,x20
71019ebf8c  b.eq 0x71019ebfa0
71019ebf90  ldr x11,[x9, #0x20]
71019ebf94  and x11,x11,#0xffffffffff
71019ebf98  cmp x11,x10
71019ebf9c  b.ls 0x71019ec09c
71019ebfa0  adrp x9,0x710532f000
71019ebfa4  add x9,x9,#0x4a0
71019ebfa8  ldr w20,[x9]
71019ebfac  sub x21,x21,x8, ASR #0x3
71019ebfb0  orr w23,wzr,#0xffffff
71019ebfb4  add x19,x26,#0x1a0
71019ebfb8  cmp w20,w23
71019ebfbc  str w20,[sp, #0x2e0]
71019ebfc0  b.ne 0x71019ebfd4
71019ebfc4  add x1,sp,#0x2e0
71019ebfc8  mov x0,x19
71019ebfcc  bl 0x7103720c30
71019ebfd0  b 0x71019ec000
71019ebfd4  adrp x24,0x7105332000
71019ebfd8  ldr x0,[x24, #0xf20]
71019ebfdc  mov w1,w20
71019ebfe0  bl 0x7103540a00
71019ebfe4  add x1,sp,#0x2e0
71019ebfe8  mov x0,x19
71019ebfec  bl 0x7103720c30
71019ebff0  ldr x0,[x24, #0xf20]
71019ebff4  mov w1,w20
71019ebff8  bl 0x7103540b10
71019ebffc  str w23,[sp, #0x2e0]
71019ec000  ldr x10,[x26, #0x1a8]
71019ec004  ldrb w8,[x10]
71019ec008  cmp w8,#0xc
71019ec00c  b.ne 0x71019ec0b4
71019ec010  adrp x8,0x7104465000
71019ec014  add x8,x8,#0x5b8
71019ec018  adrp x9,0x7104465000
71019ec01c  add x9,x9,#0x1b8
71019ec020  cmp w22,#0x0
71019ec024  csel x8,x9,x8,eq
71019ec028  ldur w9,[x10, #0x1]
71019ec02c  subs w11,w9,#0x1
71019ec030  b.lt 0x71019ec0b4
71019ec034  ldr x8,[x8]
71019ec038  and x13,x8,#0xffffffffff
71019ec03c  ldr x8,[x19]
71019ec040  ldursw x9,[x10, #0x5]
71019ec044  ldp x14,x15,[x8, #0x20]
71019ec048  mov w12,wzr
71019ec04c  add x15,x15,x9
71019ec050  adrp x9,0x7104742000
71019ec054  add x9,x9,#0xdbb
71019ec058  add w16,w11,w12
71019ec05c  cmp w16,#0x0
71019ec060  cinc w16,w16,lt
71019ec064  asr w16,w16,#0x1
71019ec068  add x17,x15,w16, SXTW  #0x3
71019ec06c  ldr w18,[x17]
71019ec070  ldr x18,[x14, x18, LSL #0x3]
71019ec074  cmp x18,x13
71019ec078  b.eq 0x71019ec0a4
71019ec07c  sub w17,w16,#0x1
71019ec080  cmp x18,x13
71019ec084  csel w11,w17,w11,hi
71019ec088  csinc w12,w12,w16,hi
71019ec08c  cmp w12,w11
71019ec090  b.le 0x71019ec058
71019ec094  mov x8,xzr
71019ec098  b 0x71019ec0c0
71019ec09c  add x9,x9,#0x28
71019ec0a0  b 0x71019ebfa8
71019ec0a4  ldrsw x9,[x17, #0x4]
71019ec0a8  tbnz w9,#0x1f,0x71019ec0b4
71019ec0ac  add x9,x10,x9
71019ec0b0  b 0x71019ec0c0
71019ec0b4  mov x8,xzr
71019ec0b8  adrp x9,0x7104742000
71019ec0bc  add x9,x9,#0xdbb
71019ec0c0  mov x20,xzr
71019ec0c4  cmp w21,#0x1
71019ec0c8  adrp x19,0x7104742000
71019ec0cc  add x19,x19,#0xdbb
71019ec0d0  b.lt 0x71019ec114
71019ec0d4  ldrb w10,[x9]
71019ec0d8  cmp w10,#0xb
71019ec0dc  b.ne 0x71019ec114
71019ec0e0  ldur w10,[x9, #0x1]
71019ec0e4  cmp w10,w21
71019ec0e8  b.ge 0x71019ec0fc
71019ec0ec  mov x20,xzr
71019ec0f0  adrp x19,0x7104742000
71019ec0f4  add x19,x19,#0xdbb
71019ec0f8  b 0x71019ec114
71019ec0fc  lsl w10,w21,#0x2
71019ec100  sub w10,w10,#0x4
71019ec104  add x10,x9,w10, SXTW 
71019ec108  ldursw x10,[x10, #0x5]
71019ec10c  add x19,x9,x10
71019ec110  mov x20,x8
71019ec114  ldrb w8,[x19]
71019ec118  cmp w8,#0xc
71019ec11c  b.ne 0x71019ec1a0
71019ec120  ldur w8,[x19, #0x1]
71019ec124  subs w9,w8,#0x1
71019ec128  b.lt 0x71019ec1a0
71019ec12c  ldursw x8,[x19, #0x5]
71019ec130  ldp x11,x12,[x20, #0x20]
71019ec134  mov x13,#0xce2f
71019ec138  movk x13,#0xfffc, LSL #16
71019ec13c  mov w10,wzr
71019ec140  add x12,x12,x8
71019ec144  movk x13,#0x9, LSL #32
71019ec148  adrp x8,0x7104742000
71019ec14c  add x8,x8,#0xdbb
71019ec150  add w14,w9,w10
71019ec154  cmp w14,#0x0
71019ec158  cinc w14,w14,lt
71019ec15c  asr w14,w14,#0x1
71019ec160  add x15,x12,w14, SXTW  #0x3
71019ec164  ldr w16,[x15]
71019ec168  ldr x16,[x11, x16, LSL #0x3]
71019ec16c  cmp x16,x13
71019ec170  b.eq 0x71019ec190
71019ec174  sub w15,w14,#0x1
71019ec178  cmp x16,x13
71019ec17c  csel w9,w15,w9,hi
71019ec180  csinc w10,w10,w14,hi
71019ec184  cmp w10,w9
71019ec188  b.le 0x71019ec150
71019ec18c  b 0x71019ec1a8
71019ec190  ldrsw x8,[x15, #0x4]
71019ec194  tbnz w8,#0x1f,0x71019ec1a0
71019ec198  add x8,x19,x8
71019ec19c  b 0x71019ec1a8
71019ec1a0  adrp x8,0x7104742000
71019ec1a4  add x8,x8,#0xdbb
71019ec1a8  ldrb w9,[x8]
71019ec1ac  sub w9,w9,#0x1
71019ec1b0  cmp w9,#0x6
71019ec1b4  b.hi 0x71019ec1ec
71019ec1b8  adrp x10,0x71044f6000
71019ec1bc  add x10,x10,#0xe20
71019ec1c0  ldrsw x9,[x10, x9, LSL #0x2]
71019ec1c4  add x9,x9,x10
71019ec1c8  br x9
71019ec1cc  ldrb w8,[x8, #0x1]
71019ec1d0  cmp w8,w21
71019ec1d4  b.eq 0x71019ec228
71019ec1d8  b 0x71019ed7e4
71019ec1dc  ldur w8,[x8, #0x1]
71019ec1e0  cmp w8,w21
71019ec1e4  b.eq 0x71019ec228
71019ec1e8  b 0x71019ed7e4
71019ec1ec  mov w8,wzr
71019ec1f0  cmp w8,w21
71019ec1f4  b.eq 0x71019ec228
71019ec1f8  b 0x71019ed7e4
71019ec1fc  ldursh w8,[x8, #0x1]
71019ec200  cmp w8,w21
71019ec204  b.eq 0x71019ec228
71019ec208  b 0x71019ed7e4
71019ec20c  ldrsb w8,[x8, #0x1]
71019ec210  cmp w8,w21
71019ec214  b.eq 0x71019ec228
71019ec218  b 0x71019ed7e4
71019ec21c  ldurh w8,[x8, #0x1]
71019ec220  cmp w8,w21
71019ec224  b.ne 0x71019ed7e4
71019ec228  add x8,sp,#0x190
71019ec22c  add x22,x8,#0x8
71019ec230  adrp x0,0x7104432000
71019ec234  add x0,x0,#0x9a1
71019ec238  add x8,sp,#0x190
71019ec23c  mov w1,wzr
71019ec240  bl 0x71003a4ca0
71019ec244  ldrsw x8,[sp, #0x194]
71019ec248  cbz w8,0x71019ec294
71019ec24c  add x10,x22,w8, UXTW 
71019ec250  mov w9,#0xffffffff
71019ec254  mov x11,x22
71019ec258  adrp x12,0x7104754000
71019ec25c  add x12,x12,#0x84
71019ec260  ldrb w13,[x11], #0x1
71019ec264  sub w14,w13,#0x41
71019ec268  add w15,w13,#0x20
71019ec26c  cmp w14,#0x1a
71019ec270  csel w13,w15,w13,cc
71019ec274  eor w13,w13,w9
71019ec278  and w13,w13,#0xff
71019ec27c  cmp x11,x10
71019ec280  ldr w13,[x12, w13, UXTW #0x2]
71019ec284  eor w9,w13,w9, LSR #0x8
71019ec288  b.cc 0x71019ec260
71019ec28c  mvn w9,w9
71019ec290  b 0x71019ec298
71019ec294  mov x9,xzr
71019ec298  ldrb w10,[x19]
71019ec29c  cmp w10,#0xc
71019ec2a0  b.ne 0x71019ec31c
71019ec2a4  ldur w10,[x19, #0x1]
71019ec2a8  subs w10,w10,#0x1
71019ec2ac  b.lt 0x71019ec31c
71019ec2b0  bfm x9,x8,#0x20,#0x7
71019ec2b4  ldursw x8,[x19, #0x5]
71019ec2b8  mov w11,wzr
71019ec2bc  ldp x12,x13,[x20, #0x20]
71019ec2c0  add x13,x13,x8
71019ec2c4  adrp x8,0x7104742000
71019ec2c8  add x8,x8,#0xdbb
71019ec2cc  add w14,w10,w11
71019ec2d0  cmp w14,#0x0
71019ec2d4  cinc w14,w14,lt
71019ec2d8  asr w14,w14,#0x1
71019ec2dc  add x15,x13,w14, SXTW  #0x3
71019ec2e0  ldr w16,[x15]
71019ec2e4  ldr x16,[x12, x16, LSL #0x3]
71019ec2e8  cmp x16,x9
71019ec2ec  b.eq 0x71019ec30c
71019ec2f0  sub w15,w14,#0x1
71019ec2f4  cmp x16,x9
71019ec2f8  csel w10,w15,w10,hi
71019ec2fc  csinc w11,w11,w14,hi
71019ec300  cmp w11,w10
71019ec304  b.le 0x71019ec2cc
71019ec308  b 0x71019ec324
71019ec30c  ldrsw x8,[x15, #0x4]
71019ec310  tbnz w8,#0x1f,0x71019ec31c
71019ec314  add x8,x19,x8
71019ec318  b 0x71019ec324
71019ec31c  adrp x8,0x7104742000
71019ec320  add x8,x8,#0xdbb
71019ec324  ldrb w9,[x8]
71019ec328  sub w9,w9,#0x1
71019ec32c  cmp w9,#0x6
71019ec330  b.hi 0x71019ec358
71019ec334  adrp x10,0x71044f6000
71019ec338  add x10,x10,#0xe3c
71019ec33c  ldrsw x9,[x10, x9, LSL #0x2]
71019ec340  add x9,x9,x10
71019ec344  br x9
71019ec348  ldrb w8,[x8, #0x1]
71019ec34c  b 0x71019ec374
71019ec350  ldur w8,[x8, #0x1]
71019ec354  b 0x71019ec374
71019ec358  mov w8,wzr
71019ec35c  b 0x71019ec374
71019ec360  ldursh w8,[x8, #0x1]
71019ec364  b 0x71019ec374
71019ec368  ldrsb w8,[x8, #0x1]
71019ec36c  b 0x71019ec374
71019ec370  ldurh w8,[x8, #0x1]
71019ec374  str w8,[x26, #0x1d4]
71019ec378  adrp x0,0x7104432000
71019ec37c  add x0,x0,#0x9a1
71019ec380  add x8,sp,#0x190
71019ec384  mov w1,#0x1
71019ec388  add x23,sp,#0x190
71019ec38c  bl 0x71003a4ca0
71019ec390  ldrsw x8,[sp, #0x194]
71019ec394  cbz w8,0x71019ec3e4
71019ec398  add x10,x23,w8, UXTW 
71019ec39c  mov w9,#0xffffffff
71019ec3a0  adrp x11,0x7104754000
71019ec3a4  add x11,x11,#0x84
71019ec3a8  add x10,x10,#0x8
71019ec3ac  mov x12,x22
71019ec3b0  ldrb w13,[x12], #0x1
71019ec3b4  sub w14,w13,#0x41
71019ec3b8  add w15,w13,#0x20
71019ec3bc  cmp w14,#0x1a
71019ec3c0  csel w13,w15,w13,cc
71019ec3c4  eor w13,w13,w9
71019ec3c8  and w13,w13,#0xff
71019ec3cc  cmp x12,x10
71019ec3d0  ldr w13,[x11, w13, UXTW #0x2]
71019ec3d4  eor w9,w13,w9, LSR #0x8
71019ec3d8  b.cc 0x71019ec3b0
71019ec3dc  mvn w9,w9
71019ec3e0  b 0x71019ec3e8
71019ec3e4  mov x9,xzr
71019ec3e8  ldrb w10,[x19]
71019ec3ec  cmp w10,#0xc
71019ec3f0  b.ne 0x71019ec46c
71019ec3f4  ldur w10,[x19, #0x1]
71019ec3f8  subs w10,w10,#0x1
71019ec3fc  b.lt 0x71019ec46c
71019ec400  bfm x9,x8,#0x20,#0x7
71019ec404  ldursw x8,[x19, #0x5]
71019ec408  mov w11,wzr
71019ec40c  ldp x12,x13,[x20, #0x20]
71019ec410  add x13,x13,x8
71019ec414  adrp x8,0x7104742000
71019ec418  add x8,x8,#0xdbb
71019ec41c  add w14,w10,w11
71019ec420  cmp w14,#0x0
71019ec424  cinc w14,w14,lt
71019ec428  asr w14,w14,#0x1
71019ec42c  add x15,x13,w14, SXTW  #0x3
71019ec430  ldr w16,[x15]
71019ec434  ldr x16,[x12, x16, LSL #0x3]
71019ec438  cmp x16,x9
71019ec43c  b.eq 0x71019ec45c
71019ec440  sub w15,w14,#0x1
71019ec444  cmp x16,x9
71019ec448  csel w10,w15,w10,hi
71019ec44c  csinc w11,w11,w14,hi
71019ec450  cmp w11,w10
71019ec454  b.le 0x71019ec41c
71019ec458  b 0x71019ec474
71019ec45c  ldrsw x8,[x15, #0x4]
71019ec460  tbnz w8,#0x1f,0x71019ec46c
71019ec464  add x8,x19,x8
71019ec468  b 0x71019ec474
71019ec46c  adrp x8,0x7104742000
71019ec470  add x8,x8,#0xdbb
71019ec474  ldrb w9,[x8]
71019ec478  sub w9,w9,#0x1
71019ec47c  cmp w9,#0x6
71019ec480  b.hi 0x71019ec4a8
71019ec484  adrp x10,0x71044f6000
71019ec488  add x10,x10,#0xe58
71019ec48c  ldrsw x9,[x10, x9, LSL #0x2]
71019ec490  add x9,x9,x10
71019ec494  br x9
71019ec498  ldrb w8,[x8, #0x1]
71019ec49c  b 0x71019ec4c4
71019ec4a0  ldur w8,[x8, #0x1]
71019ec4a4  b 0x71019ec4c4
71019ec4a8  mov w8,wzr
71019ec4ac  b 0x71019ec4c4
71019ec4b0  ldursh w8,[x8, #0x1]
71019ec4b4  b 0x71019ec4c4
71019ec4b8  ldrsb w8,[x8, #0x1]
71019ec4bc  b 0x71019ec4c4
71019ec4c0  ldurh w8,[x8, #0x1]
71019ec4c4  str w8,[x26, #0x1d8]
71019ec4c8  adrp x0,0x7104432000
71019ec4cc  add x0,x0,#0x9a1
71019ec4d0  add x8,sp,#0x190
71019ec4d4  mov w1,#0x2
71019ec4d8  add x23,sp,#0x190
71019ec4dc  bl 0x71003a4ca0
71019ec4e0  ldrsw x8,[sp, #0x194]
71019ec4e4  cbz w8,0x71019ec534
71019ec4e8  add x10,x23,w8, UXTW 
71019ec4ec  mov w9,#0xffffffff
71019ec4f0  adrp x11,0x7104754000
71019ec4f4  add x11,x11,#0x84
71019ec4f8  add x10,x10,#0x8
71019ec4fc  mov x12,x22
71019ec500  ldrb w13,[x12], #0x1
71019ec504  sub w14,w13,#0x41
71019ec508  add w15,w13,#0x20
71019ec50c  cmp w14,#0x1a
71019ec510  csel w13,w15,w13,cc
71019ec514  eor w13,w13,w9
71019ec518  and w13,w13,#0xff
71019ec51c  cmp x12,x10
71019ec520  ldr w13,[x11, w13, UXTW #0x2]
71019ec524  eor w9,w13,w9, LSR #0x8
71019ec528  b.cc 0x71019ec500
71019ec52c  mvn w9,w9
71019ec530  b 0x71019ec538
71019ec534  mov x9,xzr
71019ec538  ldrb w10,[x19]
71019ec53c  cmp w10,#0xc
71019ec540  b.ne 0x71019ec5bc
71019ec544  ldur w10,[x19, #0x1]
71019ec548  subs w10,w10,#0x1
71019ec54c  b.lt 0x71019ec5bc
71019ec550  bfm x9,x8,#0x20,#0x7
71019ec554  ldursw x8,[x19, #0x5]
71019ec558  mov w11,wzr
71019ec55c  ldp x12,x13,[x20, #0x20]
71019ec560  add x13,x13,x8
71019ec564  adrp x8,0x7104742000
71019ec568  add x8,x8,#0xdbb
71019ec56c  add w14,w10,w11
71019ec570  cmp w14,#0x0
71019ec574  cinc w14,w14,lt
71019ec578  asr w14,w14,#0x1
71019ec57c  add x15,x13,w14, SXTW  #0x3
71019ec580  ldr w16,[x15]
71019ec584  ldr x16,[x12, x16, LSL #0x3]
71019ec588  cmp x16,x9
71019ec58c  b.eq 0x71019ec5ac
71019ec590  sub w15,w14,#0x1
71019ec594  cmp x16,x9
71019ec598  csel w10,w15,w10,hi
71019ec59c  csinc w11,w11,w14,hi
71019ec5a0  cmp w11,w10
71019ec5a4  b.le 0x71019ec56c
71019ec5a8  b 0x71019ec5c4
71019ec5ac  ldrsw x8,[x15, #0x4]
71019ec5b0  tbnz w8,#0x1f,0x71019ec5bc
71019ec5b4  add x8,x19,x8
71019ec5b8  b 0x71019ec5c4
71019ec5bc  adrp x8,0x7104742000
71019ec5c0  add x8,x8,#0xdbb
71019ec5c4  ldrb w9,[x8]
71019ec5c8  sub w9,w9,#0x1
71019ec5cc  cmp w9,#0x6
71019ec5d0  b.hi 0x71019ec5f8
71019ec5d4  adrp x10,0x71044f6000
71019ec5d8  add x10,x10,#0xe74
71019ec5dc  ldrsw x9,[x10, x9, LSL #0x2]
71019ec5e0  add x9,x9,x10
71019ec5e4  br x9
71019ec5e8  ldrb w8,[x8, #0x1]
71019ec5ec  b 0x71019ec614
71019ec5f0  ldur w8,[x8, #0x1]
71019ec5f4  b 0x71019ec614
71019ec5f8  mov w8,wzr
71019ec5fc  b 0x71019ec614
71019ec600  ldursh w8,[x8, #0x1]
71019ec604  b 0x71019ec614
71019ec608  ldrsb w8,[x8, #0x1]
71019ec60c  b 0x71019ec614
71019ec610  ldurh w8,[x8, #0x1]
71019ec614  str w8,[x26, #0x1dc]
71019ec618  adrp x0,0x7104432000
71019ec61c  add x0,x0,#0x9a1
71019ec620  add x8,sp,#0x190
71019ec624  orr w1,wzr,#0x3
71019ec628  add x23,sp,#0x190
71019ec62c  bl 0x71003a4ca0
71019ec630  ldrsw x8,[sp, #0x194]
71019ec634  cbz w8,0x71019ec684
71019ec638  add x10,x23,w8, UXTW 
71019ec63c  mov w9,#0xffffffff
71019ec640  adrp x11,0x7104754000
71019ec644  add x11,x11,#0x84
71019ec648  add x10,x10,#0x8
71019ec64c  mov x12,x22
71019ec650  ldrb w13,[x12], #0x1
71019ec654  sub w14,w13,#0x41
71019ec658  add w15,w13,#0x20
71019ec65c  cmp w14,#0x1a
71019ec660  csel w13,w15,w13,cc
71019ec664  eor w13,w13,w9
71019ec668  and w13,w13,#0xff
71019ec66c  cmp x12,x10
71019ec670  ldr w13,[x11, w13, UXTW #0x2]
71019ec674  eor w9,w13,w9, LSR #0x8
71019ec678  b.cc 0x71019ec650
71019ec67c  mvn w9,w9
71019ec680  b 0x71019ec688
71019ec684  mov x9,xzr
71019ec688  ldrb w10,[x19]
71019ec68c  cmp w10,#0xc
71019ec690  b.ne 0x71019ec70c
71019ec694  ldur w10,[x19, #0x1]
71019ec698  subs w10,w10,#0x1
71019ec69c  b.lt 0x71019ec70c
71019ec6a0  bfm x9,x8,#0x20,#0x7
71019ec6a4  ldursw x8,[x19, #0x5]
71019ec6a8  mov w11,wzr
71019ec6ac  ldp x12,x13,[x20, #0x20]
71019ec6b0  add x13,x13,x8
71019ec6b4  adrp x8,0x7104742000
71019ec6b8  add x8,x8,#0xdbb
71019ec6bc  add w14,w10,w11
71019ec6c0  cmp w14,#0x0
71019ec6c4  cinc w14,w14,lt
71019ec6c8  asr w14,w14,#0x1
71019ec6cc  add x15,x13,w14, SXTW  #0x3
71019ec6d0  ldr w16,[x15]
71019ec6d4  ldr x16,[x12, x16, LSL #0x3]
71019ec6d8  cmp x16,x9
71019ec6dc  b.eq 0x71019ec6fc
71019ec6e0  sub w15,w14,#0x1
71019ec6e4  cmp x16,x9
71019ec6e8  csel w10,w15,w10,hi
71019ec6ec  csinc w11,w11,w14,hi
71019ec6f0  cmp w11,w10
71019ec6f4  b.le 0x71019ec6bc
71019ec6f8  b 0x71019ec714
71019ec6fc  ldrsw x8,[x15, #0x4]
71019ec700  tbnz w8,#0x1f,0x71019ec70c
71019ec704  add x8,x19,x8
71019ec708  b 0x71019ec714
71019ec70c  adrp x8,0x7104742000
71019ec710  add x8,x8,#0xdbb
71019ec714  ldrb w9,[x8]
71019ec718  sub w9,w9,#0x1
71019ec71c  cmp w9,#0x6
71019ec720  b.hi 0x71019ec748
71019ec724  adrp x10,0x71044f6000
71019ec728  add x10,x10,#0xe90
71019ec72c  ldrsw x9,[x10, x9, LSL #0x2]
71019ec730  add x9,x9,x10
71019ec734  br x9
71019ec738  ldrb w8,[x8, #0x1]
71019ec73c  b 0x71019ec764
71019ec740  ldur w8,[x8, #0x1]
71019ec744  b 0x71019ec764
71019ec748  mov w8,wzr
71019ec74c  b 0x71019ec764
71019ec750  ldursh w8,[x8, #0x1]
71019ec754  b 0x71019ec764
71019ec758  ldrsb w8,[x8, #0x1]
71019ec75c  b 0x71019ec764
71019ec760  ldurh w8,[x8, #0x1]
71019ec764  str w8,[x26, #0x1e0]
71019ec768  adrp x0,0x7104432000
71019ec76c  add x0,x0,#0x9a1
71019ec770  add x8,sp,#0x190
71019ec774  mov w1,#0x4
71019ec778  add x23,sp,#0x190
71019ec77c  bl 0x71003a4ca0
71019ec780  ldrsw x8,[sp, #0x194]
71019ec784  cbz w8,0x71019ec7d4
71019ec788  add x10,x23,w8, UXTW 
71019ec78c  mov w9,#0xffffffff
71019ec790  adrp x11,0x7104754000
71019ec794  add x11,x11,#0x84
71019ec798  add x10,x10,#0x8
71019ec79c  mov x12,x22
71019ec7a0  ldrb w13,[x12], #0x1
71019ec7a4  sub w14,w13,#0x41
71019ec7a8  add w15,w13,#0x20
71019ec7ac  cmp w14,#0x1a
71019ec7b0  csel w13,w15,w13,cc
71019ec7b4  eor w13,w13,w9
71019ec7b8  and w13,w13,#0xff
71019ec7bc  cmp x12,x10
71019ec7c0  ldr w13,[x11, w13, UXTW #0x2]
71019ec7c4  eor w9,w13,w9, LSR #0x8
71019ec7c8  b.cc 0x71019ec7a0
71019ec7cc  mvn w9,w9
71019ec7d0  b 0x71019ec7d8
71019ec7d4  mov x9,xzr
71019ec7d8  ldrb w10,[x19]
71019ec7dc  cmp w10,#0xc
71019ec7e0  b.ne 0x71019ec85c
71019ec7e4  ldur w10,[x19, #0x1]
71019ec7e8  subs w10,w10,#0x1
71019ec7ec  b.lt 0x71019ec85c
71019ec7f0  bfm x9,x8,#0x20,#0x7
71019ec7f4  ldursw x8,[x19, #0x5]
71019ec7f8  mov w11,wzr
71019ec7fc  ldp x12,x13,[x20, #0x20]
71019ec800  add x13,x13,x8
71019ec804  adrp x8,0x7104742000
71019ec808  add x8,x8,#0xdbb
71019ec80c  add w14,w10,w11
71019ec810  cmp w14,#0x0
71019ec814  cinc w14,w14,lt
71019ec818  asr w14,w14,#0x1
71019ec81c  add x15,x13,w14, SXTW  #0x3
71019ec820  ldr w16,[x15]
71019ec824  ldr x16,[x12, x16, LSL #0x3]
71019ec828  cmp x16,x9
71019ec82c  b.eq 0x71019ec84c
71019ec830  sub w15,w14,#0x1
71019ec834  cmp x16,x9
71019ec838  csel w10,w15,w10,hi
71019ec83c  csinc w11,w11,w14,hi
71019ec840  cmp w11,w10
71019ec844  b.le 0x71019ec80c
71019ec848  b 0x71019ec864
71019ec84c  ldrsw x8,[x15, #0x4]
71019ec850  tbnz w8,#0x1f,0x71019ec85c
71019ec854  add x8,x19,x8
71019ec858  b 0x71019ec864
71019ec85c  adrp x8,0x7104742000
71019ec860  add x8,x8,#0xdbb
71019ec864  ldrb w9,[x8]
71019ec868  sub w9,w9,#0x1
71019ec86c  cmp w9,#0x6
71019ec870  b.hi 0x71019ec898
71019ec874  adrp x10,0x71044f6000
71019ec878  add x10,x10,#0xeac
71019ec87c  ldrsw x9,[x10, x9, LSL #0x2]
71019ec880  add x9,x9,x10
71019ec884  br x9
71019ec888  ldrb w8,[x8, #0x1]
71019ec88c  b 0x71019ec8b4
71019ec890  ldur w8,[x8, #0x1]
71019ec894  b 0x71019ec8b4
71019ec898  mov w8,wzr
71019ec89c  b 0x71019ec8b4
71019ec8a0  ldursh w8,[x8, #0x1]
71019ec8a4  b 0x71019ec8b4
71019ec8a8  ldrsb w8,[x8, #0x1]
71019ec8ac  b 0x71019ec8b4
71019ec8b0  ldurh w8,[x8, #0x1]
71019ec8b4  str w8,[x26, #0x1e4]
71019ec8b8  adrp x0,0x7104432000
71019ec8bc  add x0,x0,#0x9a1
71019ec8c0  mov w1,#0x5
71019ec8c4  add x8,sp,#0x190
71019ec8c8  add x23,sp,#0x190
71019ec8cc  bl 0x71003a4ca0
71019ec8d0  ldrsw x8,[sp, #0x194]
71019ec8d4  cbz w8,0x71019ec924
71019ec8d8  add x10,x23,w8, UXTW 
71019ec8dc  mov w9,#0xffffffff
71019ec8e0  adrp x11,0x7104754000
71019ec8e4  add x11,x11,#0x84
71019ec8e8  add x10,x10,#0x8
71019ec8ec  mov x12,x22
71019ec8f0  ldrb w13,[x12], #0x1
71019ec8f4  sub w14,w13,#0x41
71019ec8f8  add w15,w13,#0x20
71019ec8fc  cmp w14,#0x1a
71019ec900  csel w13,w15,w13,cc
71019ec904  eor w13,w13,w9
71019ec908  and w13,w13,#0xff
71019ec90c  cmp x12,x10
71019ec910  ldr w13,[x11, w13, UXTW #0x2]
71019ec914  eor w9,w13,w9, LSR #0x8
71019ec918  b.cc 0x71019ec8f0
71019ec91c  mvn w9,w9
71019ec920  b 0x71019ec928
71019ec924  mov x9,xzr
71019ec928  ldrb w10,[x19]
71019ec92c  cmp w10,#0xc
71019ec930  b.ne 0x71019ec9ac
71019ec934  ldur w10,[x19, #0x1]
71019ec938  subs w10,w10,#0x1
71019ec93c  b.lt 0x71019ec9ac
71019ec940  bfm x9,x8,#0x20,#0x7
71019ec944  ldursw x8,[x19, #0x5]
71019ec948  mov w11,wzr
71019ec94c  ldp x12,x13,[x20, #0x20]
71019ec950  add x13,x13,x8
71019ec954  adrp x8,0x7104742000
71019ec958  add x8,x8,#0xdbb
71019ec95c  add w14,w10,w11
71019ec960  cmp w14,#0x0
71019ec964  cinc w14,w14,lt
71019ec968  asr w14,w14,#0x1
71019ec96c  add x15,x13,w14, SXTW  #0x3
71019ec970  ldr w16,[x15]
71019ec974  ldr x16,[x12, x16, LSL #0x3]
71019ec978  cmp x16,x9
71019ec97c  b.eq 0x71019ec99c
71019ec980  sub w15,w14,#0x1
71019ec984  cmp x16,x9
71019ec988  csel w10,w15,w10,hi
71019ec98c  csinc w11,w11,w14,hi
71019ec990  cmp w11,w10
71019ec994  b.le 0x71019ec95c
71019ec998  b 0x71019ec9b4
71019ec99c  ldrsw x8,[x15, #0x4]
71019ec9a0  tbnz w8,#0x1f,0x71019ec9ac
71019ec9a4  add x8,x19,x8
71019ec9a8  b 0x71019ec9b4
71019ec9ac  adrp x8,0x7104742000
71019ec9b0  add x8,x8,#0xdbb
71019ec9b4  ldrb w9,[x8]
71019ec9b8  sub w9,w9,#0x1
71019ec9bc  cmp w9,#0x6
71019ec9c0  b.hi 0x71019ec9e8
71019ec9c4  adrp x10,0x71044f6000
71019ec9c8  add x10,x10,#0xec8
71019ec9cc  ldrsw x9,[x10, x9, LSL #0x2]
71019ec9d0  add x9,x9,x10
71019ec9d4  br x9
71019ec9d8  ldrb w8,[x8, #0x1]
71019ec9dc  b 0x71019eca04
71019ec9e0  ldur w8,[x8, #0x1]
71019ec9e4  b 0x71019eca04
71019ec9e8  mov w8,wzr
71019ec9ec  b 0x71019eca04
71019ec9f0  ldursh w8,[x8, #0x1]
71019ec9f4  b 0x71019eca04
71019ec9f8  ldrsb w8,[x8, #0x1]
71019ec9fc  b 0x71019eca04
71019eca00  ldurh w8,[x8, #0x1]
71019eca04  str w8,[x26, #0x1e8]
71019eca08  adrp x0,0x7104432000
71019eca0c  add x0,x0,#0x9a1
71019eca10  add x8,sp,#0x190
71019eca14  orr w1,wzr,#0x6
71019eca18  add x23,sp,#0x190
71019eca1c  bl 0x71003a4ca0
71019eca20  ldrsw x8,[sp, #0x194]
71019eca24  cbz w8,0x71019eca74
71019eca28  add x10,x23,w8, UXTW 
71019eca2c  mov w9,#0xffffffff
71019eca30  adrp x11,0x7104754000
71019eca34  add x11,x11,#0x84
71019eca38  add x10,x10,#0x8
71019eca3c  mov x12,x22
71019eca40  ldrb w13,[x12], #0x1
71019eca44  sub w14,w13,#0x41
71019eca48  add w15,w13,#0x20
71019eca4c  cmp w14,#0x1a
71019eca50  csel w13,w15,w13,cc
71019eca54  eor w13,w13,w9
71019eca58  and w13,w13,#0xff
71019eca5c  cmp x12,x10
71019eca60  ldr w13,[x11, w13, UXTW #0x2]
71019eca64  eor w9,w13,w9, LSR #0x8
71019eca68  b.cc 0x71019eca40
71019eca6c  mvn w9,w9
71019eca70  b 0x71019eca78
71019eca74  mov x9,xzr
71019eca78  ldrb w10,[x19]
71019eca7c  cmp w10,#0xc
71019eca80  b.ne 0x71019ecafc
71019eca84  ldur w10,[x19, #0x1]
71019eca88  subs w10,w10,#0x1
71019eca8c  b.lt 0x71019ecafc
71019eca90  bfm x9,x8,#0x20,#0x7
71019eca94  ldursw x8,[x19, #0x5]
71019eca98  mov w11,wzr
71019eca9c  ldp x12,x13,[x20, #0x20]
71019ecaa0  add x13,x13,x8
71019ecaa4  adrp x8,0x7104742000
71019ecaa8  add x8,x8,#0xdbb
71019ecaac  add w14,w10,w11
71019ecab0  cmp w14,#0x0
71019ecab4  cinc w14,w14,lt
71019ecab8  asr w14,w14,#0x1
71019ecabc  add x15,x13,w14, SXTW  #0x3
71019ecac0  ldr w16,[x15]
71019ecac4  ldr x16,[x12, x16, LSL #0x3]
71019ecac8  cmp x16,x9
71019ecacc  b.eq 0x71019ecaec
71019ecad0  sub w15,w14,#0x1
71019ecad4  cmp x16,x9
71019ecad8  csel w10,w15,w10,hi
71019ecadc  csinc w11,w11,w14,hi
71019ecae0  cmp w11,w10
71019ecae4  b.le 0x71019ecaac
71019ecae8  b 0x71019ecb04
71019ecaec  ldrsw x8,[x15, #0x4]
71019ecaf0  tbnz w8,#0x1f,0x71019ecafc
71019ecaf4  add x8,x19,x8
71019ecaf8  b 0x71019ecb04
71019ecafc  adrp x8,0x7104742000
71019ecb00  add x8,x8,#0xdbb
71019ecb04  ldrb w9,[x8]
71019ecb08  sub w9,w9,#0x1
71019ecb0c  cmp w9,#0x6
71019ecb10  b.hi 0x71019ecb38
71019ecb14  adrp x10,0x71044f6000
71019ecb18  add x10,x10,#0xee4
71019ecb1c  ldrsw x9,[x10, x9, LSL #0x2]
71019ecb20  add x9,x9,x10
71019ecb24  br x9
71019ecb28  ldrb w8,[x8, #0x1]
71019ecb2c  b 0x71019ecb54
71019ecb30  ldur w8,[x8, #0x1]
71019ecb34  b 0x71019ecb54
71019ecb38  mov w8,wzr
71019ecb3c  b 0x71019ecb54
71019ecb40  ldursh w8,[x8, #0x1]
71019ecb44  b 0x71019ecb54
71019ecb48  ldrsb w8,[x8, #0x1]
71019ecb4c  b 0x71019ecb54
71019ecb50  ldurh w8,[x8, #0x1]
71019ecb54  str w8,[x26, #0x1ec]
71019ecb58  adrp x0,0x7104432000
71019ecb5c  add x0,x0,#0x9a1
71019ecb60  add x8,sp,#0x190
71019ecb64  orr w1,wzr,#0x7
71019ecb68  add x23,sp,#0x190
71019ecb6c  bl 0x71003a4ca0
71019ecb70  ldrsw x8,[sp, #0x194]
71019ecb74  cbz w8,0x71019ecbc4
71019ecb78  add x10,x23,w8, UXTW 
71019ecb7c  mov w9,#0xffffffff
71019ecb80  adrp x11,0x7104754000
71019ecb84  add x11,x11,#0x84
71019ecb88  add x10,x10,#0x8
71019ecb8c  mov x12,x22
71019ecb90  ldrb w13,[x12], #0x1
71019ecb94  sub w14,w13,#0x41
71019ecb98  add w15,w13,#0x20
71019ecb9c  cmp w14,#0x1a
71019ecba0  csel w13,w15,w13,cc
71019ecba4  eor w13,w13,w9
71019ecba8  and w13,w13,#0xff
71019ecbac  cmp x12,x10
71019ecbb0  ldr w13,[x11, w13, UXTW #0x2]
71019ecbb4  eor w9,w13,w9, LSR #0x8
71019ecbb8  b.cc 0x71019ecb90
71019ecbbc  mvn w9,w9
71019ecbc0  b 0x71019ecbc8
71019ecbc4  mov x9,xzr
71019ecbc8  ldrb w10,[x19]
71019ecbcc  cmp w10,#0xc
71019ecbd0  b.ne 0x71019ecc4c
71019ecbd4  ldur w10,[x19, #0x1]
71019ecbd8  subs w10,w10,#0x1
71019ecbdc  b.lt 0x71019ecc4c
71019ecbe0  bfm x9,x8,#0x20,#0x7
71019ecbe4  ldursw x8,[x19, #0x5]
71019ecbe8  mov w11,wzr
71019ecbec  ldp x12,x13,[x20, #0x20]
71019ecbf0  add x13,x13,x8
71019ecbf4  adrp x8,0x7104742000
71019ecbf8  add x8,x8,#0xdbb
71019ecbfc  add w14,w10,w11
71019ecc00  cmp w14,#0x0
71019ecc04  cinc w14,w14,lt
71019ecc08  asr w14,w14,#0x1
71019ecc0c  add x15,x13,w14, SXTW  #0x3
71019ecc10  ldr w16,[x15]
71019ecc14  ldr x16,[x12, x16, LSL #0x3]
71019ecc18  cmp x16,x9
71019ecc1c  b.eq 0x71019ecc3c
71019ecc20  sub w15,w14,#0x1
71019ecc24  cmp x16,x9
71019ecc28  csel w10,w15,w10,hi
71019ecc2c  csinc w11,w11,w14,hi
71019ecc30  cmp w11,w10
71019ecc34  b.le 0x71019ecbfc
71019ecc38  b 0x71019ecc54
71019ecc3c  ldrsw x8,[x15, #0x4]
71019ecc40  tbnz w8,#0x1f,0x71019ecc4c
71019ecc44  add x8,x19,x8
71019ecc48  b 0x71019ecc54
71019ecc4c  adrp x8,0x7104742000
71019ecc50  add x8,x8,#0xdbb
71019ecc54  ldrb w9,[x8]
71019ecc58  sub w9,w9,#0x1
71019ecc5c  cmp w9,#0x6
71019ecc60  b.hi 0x71019ecc88
71019ecc64  adrp x10,0x71044f6000
71019ecc68  add x10,x10,#0xf00
71019ecc6c  ldrsw x9,[x10, x9, LSL #0x2]
71019ecc70  add x9,x9,x10
71019ecc74  br x9
71019ecc78  ldrb w8,[x8, #0x1]
71019ecc7c  b 0x71019ecca4
71019ecc80  ldur w8,[x8, #0x1]
71019ecc84  b 0x71019ecca4
71019ecc88  mov w8,wzr
71019ecc8c  b 0x71019ecca4
71019ecc90  ldursh w8,[x8, #0x1]
71019ecc94  b 0x71019ecca4
71019ecc98  ldrsb w8,[x8, #0x1]
71019ecc9c  b 0x71019ecca4
71019ecca0  ldurh w8,[x8, #0x1]
71019ecca4  str w8,[x26, #0x1f0]
71019ecca8  adrp x0,0x7104432000
71019eccac  add x0,x0,#0x9a1
71019eccb0  add x8,sp,#0x190
71019eccb4  mov w1,#0x8
71019eccb8  add x23,sp,#0x190
71019eccbc  bl 0x71003a4ca0
71019eccc0  ldrsw x8,[sp, #0x194]
71019eccc4  cbz w8,0x71019ecd14
71019eccc8  add x10,x23,w8, UXTW 
71019ecccc  mov w9,#0xffffffff
71019eccd0  adrp x11,0x7104754000
71019eccd4  add x11,x11,#0x84
71019eccd8  add x10,x10,#0x8
71019eccdc  mov x12,x22
71019ecce0  ldrb w13,[x12], #0x1
71019ecce4  sub w14,w13,#0x41
71019ecce8  add w15,w13,#0x20
71019eccec  cmp w14,#0x1a
71019eccf0  csel w13,w15,w13,cc
71019eccf4  eor w13,w13,w9
71019eccf8  and w13,w13,#0xff
71019eccfc  cmp x12,x10
71019ecd00  ldr w13,[x11, w13, UXTW #0x2]
71019ecd04  eor w9,w13,w9, LSR #0x8
71019ecd08  b.cc 0x71019ecce0
71019ecd0c  mvn w9,w9
71019ecd10  b 0x71019ecd18
71019ecd14  mov x9,xzr
71019ecd18  ldrb w10,[x19]
71019ecd1c  cmp w10,#0xc
71019ecd20  b.ne 0x71019ecd9c
71019ecd24  ldur w10,[x19, #0x1]
71019ecd28  subs w10,w10,#0x1
71019ecd2c  b.lt 0x71019ecd9c
71019ecd30  bfm x9,x8,#0x20,#0x7
71019ecd34  ldursw x8,[x19, #0x5]
71019ecd38  mov w11,wzr
71019ecd3c  ldp x12,x13,[x20, #0x20]
71019ecd40  add x13,x13,x8
71019ecd44  adrp x8,0x7104742000
71019ecd48  add x8,x8,#0xdbb
71019ecd4c  add w14,w10,w11
71019ecd50  cmp w14,#0x0
71019ecd54  cinc w14,w14,lt
71019ecd58  asr w14,w14,#0x1
71019ecd5c  add x15,x13,w14, SXTW  #0x3
71019ecd60  ldr w16,[x15]
71019ecd64  ldr x16,[x12, x16, LSL #0x3]
71019ecd68  cmp x16,x9
71019ecd6c  b.eq 0x71019ecd8c
71019ecd70  sub w15,w14,#0x1
71019ecd74  cmp x16,x9
71019ecd78  csel w10,w15,w10,hi
71019ecd7c  csinc w11,w11,w14,hi
71019ecd80  cmp w11,w10
71019ecd84  b.le 0x71019ecd4c
71019ecd88  b 0x71019ecda4
71019ecd8c  ldrsw x8,[x15, #0x4]
71019ecd90  tbnz w8,#0x1f,0x71019ecd9c
71019ecd94  add x8,x19,x8
71019ecd98  b 0x71019ecda4
71019ecd9c  adrp x8,0x7104742000
71019ecda0  add x8,x8,#0xdbb
71019ecda4  ldrb w9,[x8]
71019ecda8  sub w9,w9,#0x1
71019ecdac  cmp w9,#0x6
71019ecdb0  b.hi 0x71019ecdd8
71019ecdb4  adrp x10,0x71044f6000
71019ecdb8  add x10,x10,#0xf1c
71019ecdbc  ldrsw x9,[x10, x9, LSL #0x2]
71019ecdc0  add x9,x9,x10
71019ecdc4  br x9
71019ecdc8  ldrb w8,[x8, #0x1]
71019ecdcc  b 0x71019ecdf4
71019ecdd0  ldur w8,[x8, #0x1]
71019ecdd4  b 0x71019ecdf4
71019ecdd8  mov w8,wzr
71019ecddc  b 0x71019ecdf4
71019ecde0  ldursh w8,[x8, #0x1]
71019ecde4  b 0x71019ecdf4
71019ecde8  ldrsb w8,[x8, #0x1]
71019ecdec  b 0x71019ecdf4
71019ecdf0  ldurh w8,[x8, #0x1]
71019ecdf4  str w8,[x26, #0x1f4]
71019ecdf8  adrp x0,0x7104432000
71019ecdfc  add x0,x0,#0x9a1
71019ece00  mov w1,#0x9
71019ece04  add x8,sp,#0x190
71019ece08  add x23,sp,#0x190
71019ece0c  bl 0x71003a4ca0
71019ece10  ldrsw x8,[sp, #0x194]
71019ece14  cbz w8,0x71019ece64
71019ece18  add x10,x23,w8, UXTW 
71019ece1c  mov w9,#0xffffffff
71019ece20  adrp x11,0x7104754000
71019ece24  add x11,x11,#0x84
71019ece28  add x10,x10,#0x8
71019ece2c  mov x12,x22
71019ece30  ldrb w13,[x12], #0x1
71019ece34  sub w14,w13,#0x41
71019ece38  add w15,w13,#0x20
71019ece3c  cmp w14,#0x1a
71019ece40  csel w13,w15,w13,cc
71019ece44  eor w13,w13,w9
71019ece48  and w13,w13,#0xff
71019ece4c  cmp x12,x10
71019ece50  ldr w13,[x11, w13, UXTW #0x2]
71019ece54  eor w9,w13,w9, LSR #0x8
71019ece58  b.cc 0x71019ece30
71019ece5c  mvn w9,w9
71019ece60  b 0x71019ece68
71019ece64  mov x9,xzr
71019ece68  ldrb w10,[x19]
71019ece6c  cmp w10,#0xc
71019ece70  b.ne 0x71019eceec
71019ece74  ldur w10,[x19, #0x1]
71019ece78  subs w10,w10,#0x1
71019ece7c  b.lt 0x71019eceec
71019ece80  bfm x9,x8,#0x20,#0x7
71019ece84  ldursw x8,[x19, #0x5]
71019ece88  mov w11,wzr
71019ece8c  ldp x12,x13,[x20, #0x20]
71019ece90  add x13,x13,x8
71019ece94  adrp x8,0x7104742000
71019ece98  add x8,x8,#0xdbb
71019ece9c  add w14,w10,w11
71019ecea0  cmp w14,#0x0
71019ecea4  cinc w14,w14,lt
71019ecea8  asr w14,w14,#0x1
71019eceac  add x15,x13,w14, SXTW  #0x3
71019eceb0  ldr w16,[x15]
71019eceb4  ldr x16,[x12, x16, LSL #0x3]
71019eceb8  cmp x16,x9
71019ecebc  b.eq 0x71019ecedc
71019ecec0  sub w15,w14,#0x1
71019ecec4  cmp x16,x9
71019ecec8  csel w10,w15,w10,hi
71019ececc  csinc w11,w11,w14,hi
71019eced0  cmp w11,w10
71019eced4  b.le 0x71019ece9c
71019eced8  b 0x71019ecef4
71019ecedc  ldrsw x8,[x15, #0x4]
71019ecee0  tbnz w8,#0x1f,0x71019eceec
71019ecee4  add x8,x19,x8
71019ecee8  b 0x71019ecef4
71019eceec  adrp x8,0x7104742000
71019ecef0  add x8,x8,#0xdbb
71019ecef4  ldrb w9,[x8]
71019ecef8  sub w9,w9,#0x1
71019ecefc  cmp w9,#0x6
71019ecf00  b.hi 0x71019ecf28
71019ecf04  adrp x10,0x71044f6000
71019ecf08  add x10,x10,#0xf38
71019ecf0c  ldrsw x9,[x10, x9, LSL #0x2]
71019ecf10  add x9,x9,x10
71019ecf14  br x9
71019ecf18  ldrb w8,[x8, #0x1]
71019ecf1c  b 0x71019ecf44
71019ecf20  ldur w8,[x8, #0x1]
71019ecf24  b 0x71019ecf44
71019ecf28  mov w8,wzr
71019ecf2c  b 0x71019ecf44
71019ecf30  ldursh w8,[x8, #0x1]
71019ecf34  b 0x71019ecf44
71019ecf38  ldrsb w8,[x8, #0x1]
71019ecf3c  b 0x71019ecf44
71019ecf40  ldurh w8,[x8, #0x1]
71019ecf44  str w8,[x26, #0x1f8]
71019ecf48  adrp x0,0x7104432000
71019ecf4c  add x0,x0,#0x9a1
71019ecf50  mov w1,#0xa
71019ecf54  add x8,sp,#0x190
71019ecf58  add x23,sp,#0x190
71019ecf5c  bl 0x71003a4ca0
71019ecf60  ldrsw x8,[sp, #0x194]
71019ecf64  cbz w8,0x71019ecfb4
71019ecf68  add x10,x23,w8, UXTW 
71019ecf6c  mov w9,#0xffffffff
71019ecf70  adrp x11,0x7104754000
71019ecf74  add x11,x11,#0x84
71019ecf78  add x10,x10,#0x8
71019ecf7c  mov x12,x22
71019ecf80  ldrb w13,[x12], #0x1
71019ecf84  sub w14,w13,#0x41
71019ecf88  add w15,w13,#0x20
71019ecf8c  cmp w14,#0x1a
71019ecf90  csel w13,w15,w13,cc
71019ecf94  eor w13,w13,w9
71019ecf98  and w13,w13,#0xff
71019ecf9c  cmp x12,x10
71019ecfa0  ldr w13,[x11, w13, UXTW #0x2]
71019ecfa4  eor w9,w13,w9, LSR #0x8
71019ecfa8  b.cc 0x71019ecf80
71019ecfac  mvn w9,w9
71019ecfb0  b 0x71019ecfb8
71019ecfb4  mov x9,xzr
71019ecfb8  ldrb w10,[x19]
71019ecfbc  cmp w10,#0xc
71019ecfc0  b.ne 0x71019ed03c
71019ecfc4  ldur w10,[x19, #0x1]
71019ecfc8  subs w10,w10,#0x1
71019ecfcc  b.lt 0x71019ed03c
71019ecfd0  bfm x9,x8,#0x20,#0x7
71019ecfd4  ldursw x8,[x19, #0x5]
71019ecfd8  mov w11,wzr
71019ecfdc  ldp x12,x13,[x20, #0x20]
71019ecfe0  add x13,x13,x8
71019ecfe4  adrp x8,0x7104742000
71019ecfe8  add x8,x8,#0xdbb
71019ecfec  add w14,w10,w11
71019ecff0  cmp w14,#0x0
71019ecff4  cinc w14,w14,lt
71019ecff8  asr w14,w14,#0x1
71019ecffc  add x15,x13,w14, SXTW  #0x3
71019ed000  ldr w16,[x15]
71019ed004  ldr x16,[x12, x16, LSL #0x3]
71019ed008  cmp x16,x9
71019ed00c  b.eq 0x71019ed02c
71019ed010  sub w15,w14,#0x1
71019ed014  cmp x16,x9
71019ed018  csel w10,w15,w10,hi
71019ed01c  csinc w11,w11,w14,hi
71019ed020  cmp w11,w10
71019ed024  b.le 0x71019ecfec
71019ed028  b 0x71019ed044
71019ed02c  ldrsw x8,[x15, #0x4]
71019ed030  tbnz w8,#0x1f,0x71019ed03c
71019ed034  add x8,x19,x8
71019ed038  b 0x71019ed044
71019ed03c  adrp x8,0x7104742000
71019ed040  add x8,x8,#0xdbb
71019ed044  ldrb w9,[x8]
71019ed048  sub w9,w9,#0x1
71019ed04c  cmp w9,#0x6
71019ed050  b.hi 0x71019ed078
71019ed054  adrp x10,0x71044f6000
71019ed058  add x10,x10,#0xf54
71019ed05c  ldrsw x9,[x10, x9, LSL #0x2]
71019ed060  add x9,x9,x10
71019ed064  br x9
71019ed068  ldrb w8,[x8, #0x1]
71019ed06c  b 0x71019ed094
71019ed070  ldur w8,[x8, #0x1]
71019ed074  b 0x71019ed094
71019ed078  mov w8,wzr
71019ed07c  b 0x71019ed094
71019ed080  ldursh w8,[x8, #0x1]
71019ed084  b 0x71019ed094
71019ed088  ldrsb w8,[x8, #0x1]
71019ed08c  b 0x71019ed094
71019ed090  ldurh w8,[x8, #0x1]
71019ed094  str w8,[x26, #0x1fc]
71019ed098  adrp x0,0x7104432000
71019ed09c  add x0,x0,#0x9a1
71019ed0a0  mov w1,#0xb
71019ed0a4  add x8,sp,#0x190
71019ed0a8  add x23,sp,#0x190
71019ed0ac  bl 0x71003a4ca0
71019ed0b0  ldrsw x8,[sp, #0x194]
71019ed0b4  cbz w8,0x71019ed104
71019ed0b8  add x10,x23,w8, UXTW 
71019ed0bc  mov w9,#0xffffffff
71019ed0c0  adrp x11,0x7104754000
71019ed0c4  add x11,x11,#0x84
71019ed0c8  add x10,x10,#0x8
71019ed0cc  mov x12,x22
71019ed0d0  ldrb w13,[x12], #0x1
71019ed0d4  sub w14,w13,#0x41
71019ed0d8  add w15,w13,#0x20
71019ed0dc  cmp w14,#0x1a
71019ed0e0  csel w13,w15,w13,cc
71019ed0e4  eor w13,w13,w9
71019ed0e8  and w13,w13,#0xff
71019ed0ec  cmp x12,x10
71019ed0f0  ldr w13,[x11, w13, UXTW #0x2]
71019ed0f4  eor w9,w13,w9, LSR #0x8
71019ed0f8  b.cc 0x71019ed0d0
71019ed0fc  mvn w9,w9
71019ed100  b 0x71019ed108
71019ed104  mov x9,xzr
71019ed108  ldrb w10,[x19]
71019ed10c  cmp w10,#0xc
71019ed110  b.ne 0x71019ed18c
71019ed114  ldur w10,[x19, #0x1]
71019ed118  subs w10,w10,#0x1
71019ed11c  b.lt 0x71019ed18c
71019ed120  bfm x9,x8,#0x20,#0x7
71019ed124  ldursw x8,[x19, #0x5]
71019ed128  mov w11,wzr
71019ed12c  ldp x12,x13,[x20, #0x20]
71019ed130  add x13,x13,x8
71019ed134  adrp x8,0x7104742000
71019ed138  add x8,x8,#0xdbb
71019ed13c  add w14,w10,w11
71019ed140  cmp w14,#0x0
71019ed144  cinc w14,w14,lt
71019ed148  asr w14,w14,#0x1
71019ed14c  add x15,x13,w14, SXTW  #0x3
71019ed150  ldr w16,[x15]
71019ed154  ldr x16,[x12, x16, LSL #0x3]
71019ed158  cmp x16,x9
71019ed15c  b.eq 0x71019ed17c
71019ed160  sub w15,w14,#0x1
71019ed164  cmp x16,x9
71019ed168  csel w10,w15,w10,hi
71019ed16c  csinc w11,w11,w14,hi
71019ed170  cmp w11,w10
71019ed174  b.le 0x71019ed13c
71019ed178  b 0x71019ed194
71019ed17c  ldrsw x8,[x15, #0x4]
71019ed180  tbnz w8,#0x1f,0x71019ed18c
71019ed184  add x8,x19,x8
71019ed188  b 0x71019ed194
71019ed18c  adrp x8,0x7104742000
71019ed190  add x8,x8,#0xdbb
71019ed194  ldrb w9,[x8]
71019ed198  sub w9,w9,#0x1
71019ed19c  cmp w9,#0x6
71019ed1a0  b.hi 0x71019ed1c8
71019ed1a4  adrp x10,0x71044f6000
71019ed1a8  add x10,x10,#0xf70
71019ed1ac  ldrsw x9,[x10, x9, LSL #0x2]
71019ed1b0  add x9,x9,x10
71019ed1b4  br x9
71019ed1b8  ldrb w8,[x8, #0x1]
71019ed1bc  b 0x71019ed1e4
71019ed1c0  ldur w8,[x8, #0x1]
71019ed1c4  b 0x71019ed1e4
71019ed1c8  mov w8,wzr
71019ed1cc  b 0x71019ed1e4
71019ed1d0  ldursh w8,[x8, #0x1]
71019ed1d4  b 0x71019ed1e4
71019ed1d8  ldrsb w8,[x8, #0x1]
71019ed1dc  b 0x71019ed1e4
71019ed1e0  ldurh w8,[x8, #0x1]
71019ed1e4  str w8,[x26, #0x200]
71019ed1e8  adrp x0,0x7104432000
71019ed1ec  add x0,x0,#0x9a1
71019ed1f0  add x8,sp,#0x190
71019ed1f4  orr w1,wzr,#0xc
71019ed1f8  add x23,sp,#0x190
71019ed1fc  bl 0x71003a4ca0
71019ed200  ldrsw x8,[sp, #0x194]
71019ed204  cbz w8,0x71019ed250
71019ed208  add x9,x23,w8, UXTW 
71019ed20c  add x10,x9,#0x8
71019ed210  mov w9,#0xffffffff
71019ed214  adrp x11,0x7104754000
71019ed218  add x11,x11,#0x84
71019ed21c  ldrb w12,[x22], #0x1
71019ed220  sub w13,w12,#0x41
71019ed224  add w14,w12,#0x20
71019ed228  cmp w13,#0x1a
71019ed22c  csel w12,w14,w12,cc
71019ed230  eor w12,w12,w9
71019ed234  and w12,w12,#0xff
71019ed238  cmp x22,x10
71019ed23c  ldr w12,[x11, w12, UXTW #0x2]
71019ed240  eor w9,w12,w9, LSR #0x8
71019ed244  b.cc 0x71019ed21c
71019ed248  mvn w9,w9
71019ed24c  b 0x71019ed254
71019ed250  mov x9,xzr
71019ed254  ldrb w10,[x19]
71019ed258  cmp w10,#0xc
71019ed25c  b.ne 0x71019ed2d8
71019ed260  ldur w10,[x19, #0x1]
71019ed264  subs w10,w10,#0x1
71019ed268  b.lt 0x71019ed2d8
71019ed26c  bfm x9,x8,#0x20,#0x7
71019ed270  ldursw x8,[x19, #0x5]
71019ed274  mov w11,wzr
71019ed278  ldp x12,x13,[x20, #0x20]
71019ed27c  add x13,x13,x8
71019ed280  adrp x8,0x7104742000
71019ed284  add x8,x8,#0xdbb
71019ed288  add w14,w10,w11
71019ed28c  cmp w14,#0x0
71019ed290  cinc w14,w14,lt
71019ed294  asr w14,w14,#0x1
71019ed298  add x15,x13,w14, SXTW  #0x3
71019ed29c  ldr w16,[x15]
71019ed2a0  ldr x16,[x12, x16, LSL #0x3]
71019ed2a4  cmp x16,x9
71019ed2a8  b.eq 0x71019ed2c8
71019ed2ac  sub w15,w14,#0x1
71019ed2b0  cmp x16,x9
71019ed2b4  csel w10,w15,w10,hi
71019ed2b8  csinc w11,w11,w14,hi
71019ed2bc  cmp w11,w10
71019ed2c0  b.le 0x71019ed288
71019ed2c4  b 0x71019ed2e0
71019ed2c8  ldrsw x8,[x15, #0x4]
71019ed2cc  tbnz w8,#0x1f,0x71019ed2d8
71019ed2d0  add x8,x19,x8
71019ed2d4  b 0x71019ed2e0
71019ed2d8  adrp x8,0x7104742000
71019ed2dc  add x8,x8,#0xdbb
71019ed2e0  ldrb w9,[x8]
71019ed2e4  sub w9,w9,#0x1
71019ed2e8  cmp w9,#0x6
71019ed2ec  b.hi 0x71019ed314
71019ed2f0  adrp x10,0x71044f6000
71019ed2f4  add x10,x10,#0xf8c
71019ed2f8  ldrsw x9,[x10, x9, LSL #0x2]
71019ed2fc  add x9,x9,x10
71019ed300  br x9
71019ed304  ldrb w8,[x8, #0x1]
71019ed308  b 0x71019ed330
71019ed30c  ldur w8,[x8, #0x1]
71019ed310  b 0x71019ed330
71019ed314  mov w8,wzr
71019ed318  b 0x71019ed330
71019ed31c  ldursh w8,[x8, #0x1]
71019ed320  b 0x71019ed330
71019ed324  ldrsb w8,[x8, #0x1]
71019ed328  b 0x71019ed330
71019ed32c  ldurh w8,[x8, #0x1]
71019ed330  ldr w10,[x26, #0x1d4]
71019ed334  ldr w11,[x26, #0x1d8]
71019ed338  cmp w10,#0x0
71019ed33c  cset w9,gt
71019ed340  cmp w11,#0x1
71019ed344  str w8,[x26, #0x204]
71019ed348  str w9,[x26, #0x208]
71019ed34c  b.lt 0x71019ed360
71019ed350  cmp w10,#0x0
71019ed354  mov w9,#0x1
71019ed358  cinc w9,w9,gt
71019ed35c  str w9,[x26, #0x208]
71019ed360  ldr w10,[x26, #0x1dc]
71019ed364  cmp w10,#0x1
71019ed368  b.lt 0x71019ed374
71019ed36c  add w9,w9,#0x1
71019ed370  str w9,[x26, #0x208]
71019ed374  ldr w10,[x26, #0x1e0]
71019ed378  cmp w10,#0x1
71019ed37c  b.lt 0x71019ed388
71019ed380  add w9,w9,#0x1
71019ed384  str w9,[x26, #0x208]
71019ed388  ldr w10,[x26, #0x1e4]
71019ed38c  cmp w10,#0x1
71019ed390  b.lt 0x71019ed39c
71019ed394  add w9,w9,#0x1
71019ed398  str w9,[x26, #0x208]
71019ed39c  ldr w10,[x26, #0x1e8]
71019ed3a0  cmp w10,#0x1
71019ed3a4  b.lt 0x71019ed3b0
71019ed3a8  add w9,w9,#0x1
71019ed3ac  str w9,[x26, #0x208]
71019ed3b0  ldr w10,[x26, #0x1ec]
71019ed3b4  cmp w10,#0x1
71019ed3b8  b.lt 0x71019ed3c4
71019ed3bc  add w9,w9,#0x1
71019ed3c0  str w9,[x26, #0x208]
71019ed3c4  ldr w10,[x26, #0x1f0]
71019ed3c8  cmp w10,#0x1
71019ed3cc  b.lt 0x71019ed3d8
71019ed3d0  add w9,w9,#0x1
71019ed3d4  str w9,[x26, #0x208]
71019ed3d8  ldr w10,[x26, #0x1f4]
71019ed3dc  cmp w10,#0x1
71019ed3e0  b.lt 0x71019ed3ec
71019ed3e4  add w9,w9,#0x1
71019ed3e8  str w9,[x26, #0x208]
71019ed3ec  ldr w10,[x26, #0x1f8]
71019ed3f0  cmp w10,#0x1
71019ed3f4  b.lt 0x71019ed400
71019ed3f8  add w9,w9,#0x1
71019ed3fc  str w9,[x26, #0x208]
71019ed400  ldr w10,[x26, #0x1fc]
71019ed404  cmp w10,#0x1
71019ed408  b.lt 0x71019ed414
71019ed40c  add w9,w9,#0x1
71019ed410  str w9,[x26, #0x208]
71019ed414  ldr w10,[x26, #0x200]
71019ed418  cmp w10,#0x0
71019ed41c  b.gt 0x71019ed428
71019ed420  cmp w8,#0x1
71019ed424  b.lt 0x71019ed43c
71019ed428  cmp w10,#0x0
71019ed42c  cinc w9,w9,gt
71019ed430  cmp w8,#0x0
71019ed434  cinc w8,w9,gt
71019ed438  str w8,[x26, #0x208]
71019ed43c  ldrb w8,[x19]
71019ed440  cmp w8,#0xc
71019ed444  b.ne 0x71019ed4c8
71019ed448  ldur w8,[x19, #0x1]
71019ed44c  subs w9,w8,#0x1
71019ed450  b.lt 0x71019ed4c8
71019ed454  ldursw x8,[x19, #0x5]
71019ed458  ldp x11,x12,[x20, #0x20]
71019ed45c  mov x13,#0x7543
71019ed460  movk x13,#0x6b6a, LSL #16
71019ed464  mov w10,wzr
71019ed468  add x12,x12,x8
71019ed46c  movk x13,#0x9, LSL #32
71019ed470  adrp x8,0x7104742000
71019ed474  add x8,x8,#0xdbb
71019ed478  add w14,w9,w10
71019ed47c  cmp w14,#0x0
71019ed480  cinc w14,w14,lt
71019ed484  asr w14,w14,#0x1
71019ed488  add x15,x12,w14, SXTW  #0x3
71019ed48c  ldr w16,[x15]
71019ed490  ldr x16,[x11, x16, LSL #0x3]
71019ed494  cmp x16,x13
71019ed498  b.eq 0x71019ed4b8
71019ed49c  sub w15,w14,#0x1
71019ed4a0  cmp x16,x13
71019ed4a4  csel w9,w15,w9,hi
71019ed4a8  csinc w10,w10,w14,hi
71019ed4ac  cmp w10,w9
71019ed4b0  b.le 0x71019ed478
71019ed4b4  b 0x71019ed4d0
71019ed4b8  ldrsw x8,[x15, #0x4]
71019ed4bc  tbnz w8,#0x1f,0x71019ed4c8
71019ed4c0  add x8,x19,x8
71019ed4c4  b 0x71019ed4d0
71019ed4c8  adrp x8,0x7104742000
71019ed4cc  add x8,x8,#0xdbb
71019ed4d0  ldrb w9,[x8]
71019ed4d4  sub w9,w9,#0x1
71019ed4d8  cmp w9,#0x6
71019ed4dc  b.hi 0x71019ed504
71019ed4e0  adrp x10,0x71044f6000
71019ed4e4  add x10,x10,#0xfa8
71019ed4e8  ldrsw x9,[x10, x9, LSL #0x2]
71019ed4ec  add x9,x9,x10
71019ed4f0  br x9
71019ed4f4  ldrb w8,[x8, #0x1]
71019ed4f8  b 0x71019ed520
71019ed4fc  ldur w8,[x8, #0x1]
71019ed500  b 0x71019ed520
71019ed504  orr w8,wzr,#0x6
71019ed508  b 0x71019ed520
71019ed50c  ldursh w8,[x8, #0x1]
71019ed510  b 0x71019ed520
71019ed514  ldrsb w8,[x8, #0x1]
71019ed518  b 0x71019ed520
71019ed51c  ldurh w8,[x8, #0x1]
71019ed520  str w8,[x26, #0x1d0]
71019ed524  ldrb w8,[x19]
71019ed528  cmp w8,#0xc
71019ed52c  b.ne 0x71019ed5b0
71019ed530  ldur w8,[x19, #0x1]
71019ed534  subs w9,w8,#0x1
71019ed538  b.lt 0x71019ed5b0
71019ed53c  ldursw x8,[x19, #0x5]
71019ed540  ldp x11,x12,[x20, #0x20]
71019ed544  mov x13,#0xccf3
71019ed548  movk x13,#0x96f, LSL #16
71019ed54c  mov w10,wzr
71019ed550  add x12,x12,x8
71019ed554  movk x13,#0x8, LSL #32
71019ed558  adrp x8,0x7104742000
71019ed55c  add x8,x8,#0xdbb
71019ed560  add w14,w9,w10
71019ed564  cmp w14,#0x0
71019ed568  cinc w14,w14,lt
71019ed56c  asr w14,w14,#0x1
71019ed570  add x15,x12,w14, SXTW  #0x3
71019ed574  ldr w16,[x15]
71019ed578  ldr x16,[x11, x16, LSL #0x3]
71019ed57c  cmp x16,x13
71019ed580  b.eq 0x71019ed5a0
71019ed584  sub w15,w14,#0x1
71019ed588  cmp x16,x13
71019ed58c  csel w9,w15,w9,hi
71019ed590  csinc w10,w10,w14,hi
71019ed594  cmp w10,w9
71019ed598  b.le 0x71019ed560
71019ed59c  b 0x71019ed5b8
71019ed5a0  ldrsw x8,[x15, #0x4]
71019ed5a4  tbnz w8,#0x1f,0x71019ed5b0
71019ed5a8  add x8,x19,x8
71019ed5ac  b 0x71019ed5b8
71019ed5b0  adrp x8,0x7104742000
71019ed5b4  add x8,x8,#0xdbb
71019ed5b8  ldrb w9,[x8]
71019ed5bc  sub w9,w9,#0x1
71019ed5c0  cmp w9,#0x6
71019ed5c4  b.hi 0x71019ed5ec
71019ed5c8  adrp x10,0x71044f6000
71019ed5cc  add x10,x10,#0xfc4
71019ed5d0  ldrsw x9,[x10, x9, LSL #0x2]
71019ed5d4  add x9,x9,x10
71019ed5d8  br x9
71019ed5dc  ldrb w8,[x8, #0x1]
71019ed5e0  b 0x71019ed608
71019ed5e4  ldur w8,[x8, #0x1]
71019ed5e8  b 0x71019ed608
71019ed5ec  mov w8,wzr
71019ed5f0  b 0x71019ed608
71019ed5f4  ldursh w8,[x8, #0x1]
71019ed5f8  b 0x71019ed608
71019ed5fc  ldrsb w8,[x8, #0x1]
71019ed600  b 0x71019ed608
71019ed604  ldurh w8,[x8, #0x1]
71019ed608  scvtf s0,w8
71019ed60c  str s0,[x26, #0x20c]
71019ed610  ldrb w8,[x19]
71019ed614  cmp w8,#0xc
71019ed618  b.ne 0x71019ed69c
71019ed61c  ldur w8,[x19, #0x1]
71019ed620  subs w9,w8,#0x1
71019ed624  b.lt 0x71019ed69c
71019ed628  ldursw x8,[x19, #0x5]
71019ed62c  ldp x11,x12,[x20, #0x20]
71019ed630  mov x13,#0xfc65
71019ed634  movk x13,#0x7e68, LSL #16
71019ed638  mov w10,wzr
71019ed63c  add x12,x12,x8
71019ed640  movk x13,#0x8, LSL #32
71019ed644  adrp x8,0x7104742000
71019ed648  add x8,x8,#0xdbb
71019ed64c  add w14,w9,w10
71019ed650  cmp w14,#0x0
71019ed654  cinc w14,w14,lt
71019ed658  asr w14,w14,#0x1
71019ed65c  add x15,x12,w14, SXTW  #0x3
71019ed660  ldr w16,[x15]
71019ed664  ldr x16,[x11, x16, LSL #0x3]
71019ed668  cmp x16,x13
71019ed66c  b.eq 0x71019ed68c
71019ed670  sub w15,w14,#0x1
71019ed674  cmp x16,x13
71019ed678  csel w9,w15,w9,hi
71019ed67c  csinc w10,w10,w14,hi
71019ed680  cmp w10,w9
71019ed684  b.le 0x71019ed64c
71019ed688  b 0x71019ed6a4
71019ed68c  ldrsw x8,[x15, #0x4]
71019ed690  tbnz w8,#0x1f,0x71019ed69c
71019ed694  add x8,x19,x8
71019ed698  b 0x71019ed6a4
71019ed69c  adrp x8,0x7104742000
71019ed6a0  add x8,x8,#0xdbb
71019ed6a4  ldrb w9,[x8]
71019ed6a8  sub w9,w9,#0x1
71019ed6ac  cmp w9,#0x6
71019ed6b0  b.hi 0x71019ed6d8
71019ed6b4  adrp x10,0x71044f6000
71019ed6b8  add x10,x10,#0xfe0
71019ed6bc  ldrsw x9,[x10, x9, LSL #0x2]
71019ed6c0  add x9,x9,x10
71019ed6c4  br x9
71019ed6c8  ldrb w8,[x8, #0x1]
71019ed6cc  b 0x71019ed6f4
71019ed6d0  ldur w8,[x8, #0x1]
71019ed6d4  b 0x71019ed6f4
71019ed6d8  mov w8,wzr
71019ed6dc  b 0x71019ed6f4
71019ed6e0  ldursh w8,[x8, #0x1]
71019ed6e4  b 0x71019ed6f4
71019ed6e8  ldrsb w8,[x8, #0x1]
71019ed6ec  b 0x71019ed6f4
71019ed6f0  ldurh w8,[x8, #0x1]
71019ed6f4  scvtf s0,w8
71019ed6f8  str s0,[x26, #0x210]
71019ed6fc  ldrb w8,[x19]
71019ed700  cmp w8,#0xc
71019ed704  b.ne 0x71019ed788
71019ed708  ldur w8,[x19, #0x1]
71019ed70c  subs w9,w8,#0x1
71019ed710  b.lt 0x71019ed788
71019ed714  ldursw x8,[x19, #0x5]
71019ed718  ldp x11,x12,[x20, #0x20]
71019ed71c  mov x13,#0xcad0
71019ed720  movk x13,#0x590a, LSL #16
71019ed724  mov w10,wzr
71019ed728  add x12,x12,x8
71019ed72c  movk x13,#0x6, LSL #32
71019ed730  adrp x8,0x7104742000
71019ed734  add x8,x8,#0xdbb
71019ed738  add w14,w9,w10
71019ed73c  cmp w14,#0x0
71019ed740  cinc w14,w14,lt
71019ed744  asr w14,w14,#0x1
71019ed748  add x15,x12,w14, SXTW  #0x3
71019ed74c  ldr w16,[x15]
71019ed750  ldr x16,[x11, x16, LSL #0x3]
71019ed754  cmp x16,x13
71019ed758  b.eq 0x71019ed778
71019ed75c  sub w15,w14,#0x1
71019ed760  cmp x16,x13
71019ed764  csel w9,w15,w9,hi
71019ed768  csinc w10,w10,w14,hi
71019ed76c  cmp w10,w9
71019ed770  b.le 0x71019ed738
71019ed774  b 0x71019ed790
71019ed778  ldrsw x8,[x15, #0x4]
71019ed77c  tbnz w8,#0x1f,0x71019ed788
71019ed780  add x8,x19,x8
71019ed784  b 0x71019ed790
71019ed788  adrp x8,0x7104742000
71019ed78c  add x8,x8,#0xdbb
71019ed790  ldrb w9,[x8]
71019ed794  sub w9,w9,#0x1
71019ed798  cmp w9,#0x6
71019ed79c  b.hi 0x71019ed7c4
71019ed7a0  adrp x10,0x71044f6000
71019ed7a4  add x10,x10,#0xffc
71019ed7a8  ldrsw x9,[x10, x9, LSL #0x2]
71019ed7ac  add x9,x9,x10
71019ed7b0  br x9
71019ed7b4  ldrb w8,[x8, #0x1]
71019ed7b8  b 0x71019ed7e0
71019ed7bc  ldur w8,[x8, #0x1]
71019ed7c0  b 0x71019ed7e0
71019ed7c4  mov w8,#0xffffffff
71019ed7c8  b 0x71019ed7e0
71019ed7cc  ldursh w8,[x8, #0x1]
71019ed7d0  b 0x71019ed7e0
71019ed7d4  ldrsb w8,[x8, #0x1]
71019ed7d8  b 0x71019ed7e0
71019ed7dc  ldurh w8,[x8, #0x1]
71019ed7e0  str w8,[x26, #0x214]
71019ed7e4  ldr x8,[sp, #0x8]
71019ed7e8  ldr x8,[x8]
71019ed7ec  ldr x24,[x8]
71019ed7f0  ldr x8,[x26, #0x10]
71019ed7f4  ldr x22,[x26]
71019ed7f8  sub x8,x8,x22
71019ed7fc  mov x10,#0x8ba3
71019ed800  movk x10,#0xba2e, LSL #16
71019ed804  movk x10,#0xa2e8, LSL #32
71019ed808  movk x10,#0x2e8b, LSL #48
71019ed80c  sxtw x23,w21
71019ed810  asr x8,x8,#0x4
71019ed814  mul x8,x8,x10
71019ed818  cmp x8,x23
71019ed81c  b.cs 0x71019eda78
71019ed820  mov x8,#0x745d
71019ed824  movk x8,#0x45d1, LSL #16
71019ed828  movk x8,#0x5d17, LSL #32
71019ed82c  movk x8,#0x174, LSL #48
71019ed830  cmp x23,x8
71019ed834  b.hi 0x71019f05e8
71019ed838  ldr x20,[x26, #0x8]
71019ed83c  sub x9,x20,x22
71019ed840  asr x9,x9,#0x4
71019ed844  mul x25,x9,x10
71019ed848  mov w9,#0xb0
71019ed84c  mul x9,x23,x9
71019ed850  lsl x8,x21,#0x20
71019ed854  cmp x8,#0x0
71019ed858  csinc x21,x9,xzr,ne
71019ed85c  mov w0,#0x10
71019ed860  mov x1,x21
71019ed864  bl 0x710392e290
71019ed868  mov x19,x0
71019ed86c  cbnz x0,0x71019ed8b4
71019ed870  adrp x8,0x7105332000
71019ed874  ldr x0,[x8, #0xf00]
71019ed878  cbz x0,0x71019ed8b0
71019ed87c  str wzr,[sp, #0x2e0]
71019ed880  str x21,[sp, #0x190]
71019ed884  ldr x8,[x0]
71019ed888  ldr x8,[x8, #0x30]
71019ed88c  add x1,sp,#0x2e0
71019ed890  add x2,sp,#0x190
71019ed894  blr x8
71019ed898  tbz w0,#0x0,0x71019ed8b0
71019ed89c  mov w0,#0x10
71019ed8a0  mov x1,x21
71019ed8a4  bl 0x710392e290
71019ed8a8  mov x19,x0
71019ed8ac  cbnz x0,0x71019ed8b4
71019ed8b0  mov x19,xzr
71019ed8b4  mov w8,#0xb0
71019ed8b8  madd x9,x25,x8,x19
71019ed8bc  madd x8,x23,x8,x19
71019ed8c0  cmp x20,x22
71019ed8c4  b.eq 0x71019ee23c
71019ed8c8  str x8,[sp, #0x140]
71019ed8cc  mov w8,#0xb0
71019ed8d0  madd x26,x25,x8,x19
71019ed8d4  str x24,[sp, #0x188]
71019ed8d8  mov x28,xzr
71019ed8dc  str x25,[sp, #0x150]
71019ed8e0  adrp x24,0x710523d000
71019ed8e4  add x24,x24,#0x988
71019ed8e8  sub x22,x22,x20
71019ed8ec  adrp x25,0x710523d000
71019ed8f0  add x25,x25,#0x9a8
71019ed8f4  str x9,[sp, #0x130]
71019ed8f8  add x23,x20,x28
71019ed8fc  ldur x8,[x23, #-0xa8]
71019ed900  add x27,x26,x28
71019ed904  stur x8,[x27, #-0xa8]
71019ed908  ldur x8,[x23, #-0xb0]
71019ed90c  ldur x9,[x23, #-0xa0]
71019ed910  cmp x20,x26
71019ed914  stp x9,x24,[x27, #-0xa0]
71019ed918  stur x8,[x27, #-0xb0]
71019ed91c  stur xzr,[x27, #-0x90]
71019ed920  b.eq 0x71019ed98c
71019ed924  ldur x8,[x23, #-0x90]
71019ed928  stur xzr,[x23, #-0x90]
71019ed92c  ldur x21,[x27, #-0x90]
71019ed930  stur x8,[x27, #-0x90]
71019ed934  cbz x21,0x71019ed950
71019ed938  ldr x0,[x21, #0x18]
71019ed93c  stp x25,xzr,[x21, #0x10]
71019ed940  cbz x0,0x71019ed948
71019ed944  bl 0x710392eb40
71019ed948  mov x0,x21
71019ed94c  bl 0x710392eb40
71019ed950  stp x25,xzr,[x27, #-0x88]
71019ed954  ldur x8,[x23, #-0x80]
71019ed958  stur xzr,[x23, #-0x80]
71019ed95c  ldur x0,[x27, #-0x80]
71019ed960  stur x8,[x27, #-0x80]
71019ed964  cbz x0,0x71019ed96c
71019ed968  bl 0x710392eb40
71019ed96c  stp x25,xzr,[x27, #-0x78]
71019ed970  ldur x8,[x23, #-0x70]
71019ed974  stur xzr,[x23, #-0x70]
71019ed978  ldur x0,[x27, #-0x70]
71019ed97c  stur x8,[x27, #-0x70]
71019ed980  cbz x0,0x71019ed994
71019ed984  bl 0x710392eb40
71019ed988  b 0x71019ed994
71019ed98c  stp x25,xzr,[x27, #-0x88]
71019ed990  stp x25,xzr,[x27, #-0x78]
71019ed994  ldp x8,x9,[x23, #-0x68]
71019ed998  sub x28,x28,#0xb0
71019ed99c  ldp x10,x11,[x23, #-0x58]
71019ed9a0  cmp x22,x28
71019ed9a4  stp x10,x11,[x27, #-0x58]
71019ed9a8  stp x8,x9,[x27, #-0x68]
71019ed9ac  ldp x8,x9,[x23, #-0x48]
71019ed9b0  ldp x10,x11,[x23, #-0x38]
71019ed9b4  stp x10,x11,[x27, #-0x38]
71019ed9b8  stp x8,x9,[x27, #-0x48]
71019ed9bc  ldur x10,[x23, #-0x18]
71019ed9c0  ldp x8,x9,[x23, #-0x28]
71019ed9c4  ldurh w11,[x23, #-0x10]
71019ed9c8  sturh w11,[x27, #-0x10]
71019ed9cc  stp x9,x10,[x27, #-0x20]
71019ed9d0  stur x8,[x27, #-0x28]
71019ed9d4  b.ne 0x71019ed8f8
71019ed9d8  ldr x9,[sp, #0x150]
71019ed9dc  mov w8,#0xb0
71019ed9e0  mul x8,x9,x8
71019ed9e4  ldr x26,[sp, #0x168]
71019ed9e8  ldp x20,x21,[x26]
71019ed9ec  cmp x21,x20
71019ed9f0  add x8,x19,x8
71019ed9f4  add x8,x8,x28
71019ed9f8  str x8,[x26]
71019ed9fc  ldr x8,[sp, #0x130]
71019eda00  str x8,[x26, #0x8]
71019eda04  ldr x8,[sp, #0x140]
71019eda08  str x8,[x26, #0x10]
71019eda0c  b.eq 0x71019ee24c
71019eda10  ldr x27,[sp, #0xe0]
71019eda14  ldur x0,[x21, #-0x70]
71019eda18  stp x25,xzr,[x21, #-0x78]
71019eda1c  cbz x0,0x71019eda24
71019eda20  bl 0x710392eb40
71019eda24  ldur x0,[x21, #-0x80]
71019eda28  stp x25,xzr,[x21, #-0x88]
71019eda2c  cbz x0,0x71019eda34
71019eda30  bl 0x710392eb40
71019eda34  ldur x19,[x21, #-0x90]
71019eda38  sub x22,x21,#0xb0
71019eda3c  stp x24,xzr,[x21, #-0x98]
71019eda40  cbz x19,0x71019eda5c
71019eda44  ldr x0,[x19, #0x18]
71019eda48  stp x25,xzr,[x19, #0x10]
71019eda4c  cbz x0,0x71019eda54
71019eda50  bl 0x710392eb40
71019eda54  mov x0,x19
71019eda58  bl 0x710392eb40
71019eda5c  cmp x20,x22
71019eda60  mov x21,x22
71019eda64  b.ne 0x71019eda14
71019eda68  ldr x24,[sp, #0x188]
71019eda6c  cbz x20,0x71019eda78
71019eda70  mov x0,x20
71019eda74  bl 0x710392eb40
71019eda78  ldr x0,[x26, #0x20]!
71019eda7c  add x24,x24,#0x8
71019eda80  bl 0x71019f05f0
71019eda84  stp xzr,xzr,[x26]
71019eda88  mov x1,#0xfa78
71019eda8c  movk x1,#0xd5f7, LSL #16
71019eda90  stur x26,[x26, #-0x8]
71019eda94  ldr x19,[x27, #0x168]
71019eda98  movk x1,#0xf, LSL #32
71019eda9c  mov x0,x19
71019edaa0  bl 0x71032631a0
71019edaa4  mov x1,#0x26b0
71019edaa8  movk x1,#0xca41, LSL #16
71019edaac  str x0,[sp, #0xa8]
71019edab0  movk x1,#0x14, LSL #32
71019edab4  mov x0,x19
71019edab8  bl 0x71032631a0
71019edabc  ldr w1,[x26, #0x1b0]
71019edac0  str x0,[sp, #0xe8]
71019edac4  adrp x0,0x71043df000
71019edac8  add x0,x0,#0xa45
71019edacc  add x8,sp,#0x2e0
71019edad0  str x26,[sp, #0x128]
71019edad4  add x19,sp,#0x2e0
71019edad8  bl 0x71003a4ca0
71019edadc  fmov s8,0x3f800000
71019edae0  mov w20,wzr
71019edae4  adrp x26,0x7104291000
71019edae8  add x26,x26,#0x646
71019edaec  adrp x22,0x71042e6000
71019edaf0  add x22,x22,#0xb68
71019edaf4  adrp x23,0x7104454000
71019edaf8  add x23,x23,#0x440
71019edafc  str x24,[sp, #0x188]
71019edb00  adrp x25,0x710523d000
71019edb04  add x25,x25,#0x9a8
71019edb08  adrp x27,0x710424e000
71019edb0c  add x27,x27,#0xe99
71019edb10  add x19,x19,#0x8
71019edb14  mov w28,#0x1
71019edb18  add x8,sp,#0x190
71019edb1c  mov x0,x24
71019edb20  adrp x1,0x7104412000
71019edb24  add x1,x1,#0x2ca
71019edb28  mov w2,w20
71019edb2c  bl 0x7103776640
71019edb30  ldr x24,[sp, #0x198]
71019edb34  mov v0.16B,v8.16B
71019edb38  mov x1,x19
71019edb3c  mov x0,x24
71019edb40  bl 0x7103778300
71019edb44  mov v0.16B,v8.16B
71019edb48  mov x0,x24
71019edb4c  adrp x1,0x71042b4000
71019edb50  add x1,x1,#0x86
71019edb54  bl 0x7103778300
71019edb58  mov v0.16B,v8.16B
71019edb5c  mov x0,x24
71019edb60  adrp x1,0x7104318000
71019edb64  add x1,x1,#0x94d
71019edb68  bl 0x7103778300
71019edb6c  mov v0.16B,v8.16B
71019edb70  mov x0,x24
71019edb74  adrp x1,0x7104307000
71019edb78  add x1,x1,#0xeea
71019edb7c  bl 0x7103778300
71019edb80  mov v0.16B,v8.16B
71019edb84  mov x0,x24
71019edb88  adrp x1,0x710424e000
71019edb8c  add x1,x1,#0xe8f
71019edb90  bl 0x7103778300
71019edb94  add x8,sp,#0x268
71019edb98  add x0,sp,#0x190
71019edb9c  mov x1,x26
71019edba0  bl 0x7103776640
71019edba4  ldr x8,[sp, #0x170]
71019edba8  ldrb w8,[x8, #0x3]
71019edbac  ldr x21,[sp, #0x270]
71019edbb0  mov v0.16B,v8.16B
71019edbb4  cmp w8,#0x0
71019edbb8  adrp x8,0x71042b3000
71019edbbc  add x8,x8,#0xd52
71019edbc0  csel x1,x22,x8,eq
71019edbc4  mov x0,x21
71019edbc8  bl 0x7103778300
71019edbcc  adrp x8,0x710523d000
71019edbd0  add x8,x8,#0x988
71019edbd4  str x8,[sp, #0x268]
71019edbd8  str xzr,[sp, #0x270]
71019edbdc  cbz x21,0x71019edbf8
71019edbe0  ldr x0,[x21, #0x18]
71019edbe4  stp x25,xzr,[x21, #0x10]
71019edbe8  cbz x0,0x71019edbf0
71019edbec  bl 0x710392eb40
71019edbf0  mov x0,x21
71019edbf4  bl 0x710392eb40
71019edbf8  ldr x8,[sp, #0x168]
71019edbfc  ldrb w8,[x8, #0x254]
71019edc00  cbz w8,0x71019edc8c
71019edc04  ldr x8,[sp, #0x170]
71019edc08  ldrb w8,[x8, #0x2]
71019edc0c  mov v0.16B,v8.16B
71019edc10  adrp x9,0x71042a2000
71019edc14  add x9,x9,#0x934
71019edc18  mov x0,x24
71019edc1c  cmp w8,#0x0
71019edc20  adrp x8,0x7104454000
71019edc24  add x8,x8,#0x431
71019edc28  csel x1,x9,x8,eq
71019edc2c  bl 0x7103778300
71019edc30  ldr x0,[sp, #0x188]
71019edc34  add x8,sp,#0x268
71019edc38  adrp x1,0x710436b000
71019edc3c  add x1,x1,#0xc2e
71019edc40  mov w2,w20
71019edc44  bl 0x7103776640
71019edc48  ldr x21,[sp, #0x270]
71019edc4c  mov v0.16B,v8.16B
71019edc50  mov x1,x19
71019edc54  mov x0,x21
71019edc58  bl 0x7103778300
71019edc5c  adrp x8,0x710523d000
71019edc60  add x8,x8,#0x988
71019edc64  str x8,[sp, #0x268]
71019edc68  str xzr,[sp, #0x270]
71019edc6c  cbz x21,0x71019edca0
71019edc70  ldr x0,[x21, #0x18]
71019edc74  stp x25,xzr,[x21, #0x10]
71019edc78  cbz x0,0x71019edc80
71019edc7c  bl 0x710392eb40
71019edc80  mov x0,x21
71019edc84  bl 0x710392eb40
71019edc88  b 0x71019edca0
71019edc8c  mov v0.16B,v8.16B
71019edc90  mov x0,x24
71019edc94  adrp x1,0x71042a2000
71019edc98  add x1,x1,#0x940
71019edc9c  bl 0x7103778300
71019edca0  add x8,sp,#0x268
71019edca4  add x0,sp,#0x190
71019edca8  mov x1,x23
71019edcac  bl 0x7103776910
71019edcb0  ldr x0,[sp, #0x270]
71019edcb4  ldr x8,[x0, #0x10]
71019edcb8  cbz x8,0x71019edcc0
71019edcbc  strb w28,[x8, #0x27d]
71019edcc0  str x25,[sp, #0x268]
71019edcc4  str xzr,[sp, #0x270]
71019edcc8  cbz x0,0x71019edcd0
71019edccc  bl 0x710392eb40
71019edcd0  add x8,sp,#0x268
71019edcd4  add x0,sp,#0x190
71019edcd8  mov x1,x27
71019edcdc  bl 0x7103776910
71019edce0  ldr x0,[sp, #0x270]
71019edce4  ldr x8,[x0, #0x10]
71019edce8  cbz x8,0x71019edcf0
71019edcec  strb w28,[x8, #0x27d]
71019edcf0  str x25,[sp, #0x268]
71019edcf4  str xzr,[sp, #0x270]
71019edcf8  cbz x0,0x71019edd00
71019edcfc  bl 0x710392eb40
71019edd00  adrp x8,0x710523d000
71019edd04  add x8,x8,#0x988
71019edd08  stp x8,xzr,[sp, #0x190]
71019edd0c  cbz x24,0x71019edd28
71019edd10  ldr x0,[x24, #0x18]
71019edd14  stp x25,xzr,[x24, #0x10]
71019edd18  cbz x0,0x71019edd20
71019edd1c  bl 0x710392eb40
71019edd20  mov x0,x24
71019edd24  bl 0x710392eb40
71019edd28  ldr x24,[sp, #0x188]
71019edd2c  add w20,w20,#0x1
71019edd30  cmp w20,#0x5b
71019edd34  b.ne 0x71019edb18
71019edd38  ldr x8,[sp, #0x8]
71019edd3c  ldr x8,[x8]
71019edd40  ldr x8,[x8]
71019edd44  ldr x19,[x8]
71019edd48  ldr x0,[x19, #0x458]
71019edd4c  ldr s0,[x19, #0x640]
71019edd50  fmov s1,wzr
71019edd54  ldr x8,[x0]
71019edd58  fmul s0,s0,s1
71019edd5c  ldr x8,[x8, #0x58]
71019edd60  blr x8
71019edd64  ldr x20,[x19, #0x460]
71019edd68  ldr x21,[x19, #0x468]
71019edd6c  cmp x20,x21
71019edd70  ldr x28,[sp, #0x168]
71019edd74  ldr x27,[sp, #0xe0]
71019edd78  mov x26,#-0x3f00000000000000
71019edd7c  b.eq 0x71019eddb4
71019edd80  ldr x19,[x20]
71019edd84  ldr x8,[x19]
71019edd88  ldr x8,[x8, #0x40]
71019edd8c  mov x0,x19
71019edd90  blr x8
71019edd94  tbz w0,#0x0,0x71019edda8
71019edd98  ldr x8,[x19]
71019edd9c  ldr x8,[x8, #0x20]
71019edda0  mov x0,x19
71019edda4  blr x8
71019edda8  add x20,x20,#0x8
71019eddac  cmp x21,x20
71019eddb0  b.ne 0x71019edd80
71019eddb4  adrp x1,0x710425e000
71019eddb8  add x1,x1,#0xd2d
71019eddbc  add x8,sp,#0x190
71019eddc0  mov x0,x24
71019eddc4  bl 0x7103776910
71019eddc8  ldr x0,[sp, #0x198]
71019eddcc  ldr x8,[x0]
71019eddd0  cbz x8,0x71019ede30
71019eddd4  ldr s1,[x8, #0x30]
71019eddd8  movi v6.2D,#0x0
71019edddc  add x9,x8,#0x34
71019edde0  ldp s0,s4,[x8, #0x50]
71019edde4  add x10,x8,#0x38
71019edde8  ldp s2,s5,[x8, #0x48]
71019eddec  fmul s4,s4,s5
71019eddf0  mov v6.S[0x0],v1.S[0x0]
71019eddf4  fmul s0,s0,s2
71019eddf8  ld1 {v6.S}[1],[x9]
71019eddfc  fabs s0,s0
71019ede00  ld1 {v6.S}[2],[x10]
71019ede04  fmov s2,0x3f000000
71019ede08  ldrb w8,[x8, #0x5b]
71019ede0c  fmul s3,s0,s2
71019ede10  fabs s4,s4
71019ede14  and w9,w8,#0x3
71019ede18  cmp w9,#0x2
71019ede1c  b.eq 0x71019ede4c
71019ede20  cmp w9,#0x1
71019ede24  b.ne 0x71019ede54
71019ede28  fadd s1,s1,s3
71019ede2c  b 0x71019ede50
71019ede30  adrp x8,0x71052a8000
71019ede34  ldr x8,[x8, #0xa88]
71019ede38  ldr q0,[x8]
71019ede3c  str q0,[sp, #0x150]
71019ede40  fmov s0,wzr
71019ede44  mov v4.16B,v0.16B
71019ede48  b 0x71019ede88
71019ede4c  fsub s1,s1,s3
71019ede50  mov v6.S[0x0],v1.S[0x0]
71019ede54  fmul s1,s4,s2
71019ede58  ubfx w8,w8,#0x2,#0x2
71019ede5c  cmp w8,#0x2
71019ede60  b.eq 0x71019ede78
71019ede64  cmp w8,#0x1
71019ede68  b.ne 0x71019ede84
71019ede6c  dup s2,v6.S[0x1]
71019ede70  fsub s1,s2,s1
71019ede74  b 0x71019ede80
71019ede78  dup s2,v6.S[0x1]
71019ede7c  fadd s1,s1,s2
71019ede80  mov v6.S[0x1],v1.S[0x0]
71019ede84  str q6,[sp, #0x150]
71019ede88  movi v1.2D,#0x0
71019ede8c  mov v1.S[0x0],v0.S[0x0]
71019ede90  stp x25,xzr,[sp, #0x190]
71019ede94  cbz x0,0x71019edeac
71019ede98  str q1,[sp, #0x170]
71019ede9c  str q4,[sp, #0x140]
71019edea0  bl 0x710392eb40
71019edea4  ldr q4,[sp, #0x140]
71019edea8  ldr q1,[sp, #0x170]
71019edeac  mov v1.S[0x1],v4.S[0x0]
71019edeb0  adrp x1,0x7104291000
71019edeb4  add x1,x1,#0x5cc
71019edeb8  add x8,sp,#0x268
71019edebc  mov x0,x24
71019edec0  str q1,[sp, #0x170]
71019edec4  bl 0x7103776640
71019edec8  adrp x1,0x7104464000
71019edecc  add x1,x1,#0x1f6
71019eded0  add x8,sp,#0x190
71019eded4  add x0,sp,#0x268
71019eded8  bl 0x7103776910
71019ededc  ldr x0,[sp, #0x198]
71019edee0  ldr x8,[x0]
71019edee4  cbz x8,0x71019edf48
71019edee8  movi v6.2D,#0x0
71019edeec  ldr s2,[x8, #0x30]
71019edef0  add x9,x8,#0x34
71019edef4  ldp s0,s1,[x8, #0x50]
71019edef8  add x10,x8,#0x38
71019edefc  ldp s3,s5,[x8, #0x48]
71019edf00  ldrb w8,[x8, #0x5b]
71019edf04  mov v7.16B,v6.16B
71019edf08  fmul s1,s1,s5
71019edf0c  fmul s0,s0,s3
71019edf10  mov v7.S[0x0],v2.S[0x0]
71019edf14  fmov s3,0x3f000000
71019edf18  fabs s1,s1
71019edf1c  fabs s0,s0
71019edf20  fmul s4,s0,s3
71019edf24  ld1 {v7.S}[1],[x9]
71019edf28  and w9,w8,#0x3
71019edf2c  cmp w9,#0x2
71019edf30  ld1 {v7.S}[2],[x10]
71019edf34  b.eq 0x71019edf68
71019edf38  cmp w9,#0x1
71019edf3c  b.ne 0x71019edf70
71019edf40  fadd s2,s2,s4
71019edf44  b 0x71019edf6c
71019edf48  adrp x8,0x71052a8000
71019edf4c  ldr x8,[x8, #0xa88]
71019edf50  fmov s0,wzr
71019edf54  mov v1.16B,v0.16B
71019edf58  ldr q7,[x8]
71019edf5c  ldr q4,[sp, #0x170]
71019edf60  movi v6.2D,#0x0
71019edf64  b 0x71019edfa4
71019edf68  fsub s2,s2,s4
71019edf6c  mov v7.S[0x0],v2.S[0x0]
71019edf70  ldr q4,[sp, #0x170]
71019edf74  fmul s2,s1,s3
71019edf78  ubfx w8,w8,#0x2,#0x2
71019edf7c  cmp w8,#0x2
71019edf80  b.eq 0x71019edf98
71019edf84  cmp w8,#0x1
71019edf88  b.ne 0x71019edfa4
71019edf8c  dup s3,v7.S[0x1]
71019edf90  fsub s2,s3,s2
71019edf94  b 0x71019edfa0
71019edf98  dup s3,v7.S[0x1]
71019edf9c  fadd s2,s2,s3
71019edfa0  mov v7.S[0x1],v2.S[0x0]
71019edfa4  movi v2.4S,#0x3f, LSL #24
71019edfa8  mov v3.16B,v2.16B
71019edfac  fmul v4.4S,v4.4S,v2.4S
71019edfb0  mov v2.16B,v6.16B
71019edfb4  dup s13,v7.S[0x1]
71019edfb8  stp x25,xzr,[sp, #0x190]
71019edfbc  mov v2.S[0x0],v0.S[0x0]
71019edfc0  str q4,[sp, #0x170]
71019edfc4  mov v2.S[0x1],v1.S[0x0]
71019edfc8  fmul v0.4S,v2.4S,v3.4S
71019edfcc  dup s14,v0.S[0x1]
71019edfd0  cbz x0,0x71019edfe4
71019edfd4  stp q0,q7,[sp, #0x130]
71019edfd8  bl 0x710392eb40
71019edfdc  ldp q0,q7,[sp, #0x130]
71019edfe0  ldr q4,[sp, #0x170]
71019edfe4  ldr q1,[sp, #0x150]
71019edfe8  dup s8,v1.S[0x1]
71019edfec  dup s12,v4.S[0x1]
71019edff0  fsub s9,s7,s0
71019edff4  fadd s10,s7,s0
71019edff8  fsub s11,s13,s14
71019edffc  fadd s13,s13,s14
71019ee000  ldr x19,[sp, #0x270]
71019ee004  adrp x8,0x710523d000
71019ee008  add x8,x8,#0x988
71019ee00c  str x8,[sp, #0x268]
71019ee010  str xzr,[sp, #0x270]
71019ee014  cbz x19,0x71019ee038
71019ee018  ldr x0,[x19, #0x18]
71019ee01c  stp x25,xzr,[x19, #0x10]
71019ee020  cbz x0,0x71019ee028
71019ee024  bl 0x710392eb40
71019ee028  mov x0,x19
71019ee02c  bl 0x710392eb40
71019ee030  ldr q1,[sp, #0x150]
71019ee034  ldr q4,[sp, #0x170]
71019ee038  fsub s0,s1,s4
71019ee03c  fadd s4,s1,s4
71019ee040  fsub s6,s10,s9
71019ee044  ldr s1,[x28, #0x20c]
71019ee048  fadd s3,s6,s1
71019ee04c  fsub s7,s13,s11
71019ee050  str s0,[sp, #0x18]
71019ee054  fadd s0,s8,s12
71019ee058  str s3,[sp, #0x34]
71019ee05c  ldr s3,[x28, #0x210]
71019ee060  fadd s5,s7,s3
71019ee064  ldr w8,[x28, #0x1d4]
71019ee068  str s6,[sp, #0xb4]
71019ee06c  fsub s2,s8,s12
71019ee070  str s5,[sp, #0x14]
71019ee074  fmov s5,0x3f000000
71019ee078  fmul s16,s6,s5
71019ee07c  fmul s14,s7,s5
71019ee080  scvtf s5,w8
71019ee084  subs w8,w8,#0x1
71019ee088  str s16,[sp, #0xdc]
71019ee08c  fmul s5,s6,s5
71019ee090  scvtf s6,w8
71019ee094  ldr w8,[x28, #0x208]
71019ee098  sub w9,w8,#0x1
71019ee09c  fmul s1,s1,s6
71019ee0a0  fadd s1,s5,s1
71019ee0a4  scvtf s6,w9
71019ee0a8  fcsel s1,s1,s5,gt
71019ee0ac  scvtf s5,w8
71019ee0b0  fmul s5,s7,s5
71019ee0b4  fmul s16,s3,s6
71019ee0b8  cmp w8,#0x2
71019ee0bc  ldr x8,[sp, #0x160]
71019ee0c0  ldp x20,x8,[x8]
71019ee0c4  str x8,[sp, #0x120]
71019ee0c8  fadd s3,s5,s16
71019ee0cc  fcsel s3,s5,s3,lt
71019ee0d0  cmp x20,x8
71019ee0d4  b.eq 0x71019ee234
71019ee0d8  ldr s5,[sp, #0x18]
71019ee0dc  fsub s2,s0,s2
71019ee0e0  ldr x9,[sp, #0xe8]
71019ee0e4  tst x9,#0xffffffffff
71019ee0e8  and x9,x9,#-0x100000000000000
71019ee0ec  add x14,sp,#0x190
71019ee0f0  ldr x13,[sp, #0xa8]
71019ee0f4  and x10,x13,#-0x100000000000000
71019ee0f8  add x15,x28,#0x30
71019ee0fc  adrp x19,0x7104412000
71019ee100  add x19,x19,#0x2ca
71019ee104  fsub s4,s4,s5
71019ee108  add x8,sp,#0x268
71019ee10c  add x8,x8,#0x8
71019ee110  str x8,[sp, #0x150]
71019ee114  cset w8,eq
71019ee118  cset w11,ne
71019ee11c  cmp x9,x26
71019ee120  add x9,x14,#0x18
71019ee124  fsub s2,s2,s3
71019ee128  str x9,[sp, #0x110]
71019ee12c  add x9,x14,#0x28
71019ee130  str x9,[sp, #0xc0]
71019ee134  add x9,x14,#0x38
71019ee138  cset w12,eq
71019ee13c  fmov s3,0x3f000000
71019ee140  str x9,[sp, #0xb8]
71019ee144  cset w9,ne
71019ee148  tst x13,#0xffffffffff
71019ee14c  and w11,w12,w11
71019ee150  fsub s1,s4,s1
71019ee154  str w11,[sp, #0x140]
71019ee158  cset w11,eq
71019ee15c  cset w12,ne
71019ee160  cmp x10,x26
71019ee164  add x13,x28,#0x20
71019ee168  add x10,x14,#0x48
71019ee16c  str x13,[sp, #0xf8]
71019ee170  cset w13,eq
71019ee174  fmul s2,s2,s3
71019ee178  str x10,[sp, #0x108]
71019ee17c  cset w10,ne
71019ee180  and w12,w13,w12
71019ee184  orr w8,w8,w9
71019ee188  str w12,[sp, #0x104]
71019ee18c  add x12,x28,#0x48
71019ee190  fmul s1,s1,s3
71019ee194  str w8,[sp, #0xd8]
71019ee198  orr w8,w11,w10
71019ee19c  stp x12,x15,[sp, #0x80]
71019ee1a0  add x12,x28,#0x58
71019ee1a4  str w8,[sp, #0xa4]
71019ee1a8  add x8,x14,#0x8
71019ee1ac  str x12,[sp, #0x78]
71019ee1b0  add x12,x28,#0x68
71019ee1b4  str x8,[sp, #0xd0]
71019ee1b8  adrp x8,0x7104472000
71019ee1bc  str x12,[sp, #0x70]
71019ee1c0  add x12,x28,#0x78
71019ee1c4  fsub s13,s0,s2
71019ee1c8  ldr s0,[x8, #0x8b8]
71019ee1cc  adrp x8,0x7104472000
71019ee1d0  str x12,[sp, #0x68]
71019ee1d4  add x12,x28,#0x90
71019ee1d8  ldr s12,[x8, #0x4c4]
71019ee1dc  adrp x8,0x7104473000
71019ee1e0  fadd s8,s5,s1
71019ee1e4  str x12,[sp, #0x60]
71019ee1e8  add x12,x14,#0x60
71019ee1ec  ldr s15,[x8, #0x208]
71019ee1f0  str x12,[sp, #0x58]
71019ee1f4  add x12,x28,#0xb0
71019ee1f8  str x12,[sp, #0x50]
71019ee1fc  add x12,x14,#0x80
71019ee200  fmov s9,0x3f800000
71019ee204  str x12,[sp, #0x48]
71019ee208  add x12,x28,#0xc0
71019ee20c  mov w23,wzr
71019ee210  mov w22,wzr
71019ee214  str x12,[sp, #0x40]
71019ee218  add x12,x14,#0x90
71019ee21c  str s7,[sp, #0x1c]
71019ee220  str wzr,[sp, #0x170]
71019ee224  str s4,[sp, #0x4]
71019ee228  str x12,[sp, #0x38]
71019ee22c  str s0,[sp, #0xcc]
71019ee230  b 0x71019ee300
71019ee234  mov w22,wzr
71019ee238  b 0x71019f0444
71019ee23c  stp x9,x9,[x26]
71019ee240  str x8,[x26, #0x10]
71019ee244  cbnz x20,0x71019eda70
71019ee248  b 0x71019eda78
71019ee24c  ldr x27,[sp, #0xe0]
71019ee250  ldr x24,[sp, #0x188]
71019ee254  cbnz x20,0x71019eda70
71019ee258  b 0x71019eda78
71019ee25c  mov x21,x23
71019ee260  ldr x8,[x23]
71019ee264  cbnz x8,0x71019ef560
71019ee268  mov w0,#0x10
71019ee26c  orr w1,wzr,#0x30
71019ee270  bl 0x710392e290
71019ee274  mov x1,x0
71019ee278  cbnz x0,0x71019ee2b4
71019ee27c  adrp x8,0x7105332000
71019ee280  ldr x0,[x8, #0xf00]
71019ee284  orr w8,wzr,#0x30
71019ee288  str wzr,[sp, #0x258]
71019ee28c  add x1,sp,#0x258
71019ee290  stur x8,[x29, #-0xb8]
71019ee294  ldr x8,[x0]
71019ee298  ldr x8,[x8, #0x30]
71019ee29c  sub x2,x29,#0xb8
71019ee2a0  blr x8
71019ee2a4  mov w0,#0x10
71019ee2a8  orr w1,wzr,#0x30
71019ee2ac  bl 0x710392e290
71019ee2b0  mov x1,x0
71019ee2b4  str x19,[x1, #0x20]
71019ee2b8  str w22,[x1, #0x28]
71019ee2bc  str x21,[x1, #0x10]
71019ee2c0  stp xzr,xzr,[x1]
71019ee2c4  str x1,[x23]
71019ee2c8  ldr x8,[x28, #0x18]
71019ee2cc  ldr x8,[x8]
71019ee2d0  cbz x8,0x71019ef5f4
71019ee2d4  str x8,[x28, #0x18]
71019ee2d8  ldr x1,[x23]
71019ee2dc  b 0x71019ef5f4
71019ee2e0  mov x23,x21
71019ee2e4  ldr x8,[x23]
71019ee2e8  cbnz x8,0x71019ef560
71019ee2ec  b 0x71019ee268
71019ee2f0  mov x9,x8
71019ee2f4  cmp x8,x9
71019ee2f8  b.ne 0x71019eef20
71019ee2fc  b 0x71019ef560
71019ee300  ldp x9,x8,[x29, #-0xe8]
71019ee304  cmp x9,x8
71019ee308  b.eq 0x71019ee3d4
71019ee30c  ldr x10,[x20]
71019ee310  tst x10,#0xffffffffff
71019ee314  and x12,x10,#-0x100000000000000
71019ee318  and x13,x10,#0xffffffffff
71019ee31c  cset w11,eq
71019ee320  cmp x12,x26
71019ee324  cset w12,ne
71019ee328  ccmp x13,#0x0,#0x4,eq
71019ee32c  b.ne 0x71019ee398
71019ee330  orr w10,w12,w11
71019ee334  ldr x11,[x9]
71019ee338  and x12,x11,#-0x100000000000000
71019ee33c  tst x11,#0xffffffffff
71019ee340  cset w11,ne
71019ee344  cmp x12,x26
71019ee348  cset w12,eq
71019ee34c  and w11,w11,w12
71019ee350  cmp w11,w10
71019ee354  b.ne 0x71019ee3cc
71019ee358  add x9,x9,#0x8
71019ee35c  cmp x8,x9
71019ee360  b.eq 0x71019eef3c
71019ee364  ldr x11,[x9], #0x8
71019ee368  and x12,x11,#-0x100000000000000
71019ee36c  tst x11,#0xffffffffff
71019ee370  cset w11,ne
71019ee374  cmp x12,x26
71019ee378  cset w12,eq
71019ee37c  and w11,w11,w12
71019ee380  cmp w11,w10
71019ee384  b.eq 0x71019ee35c
71019ee388  sub x9,x9,#0x8
71019ee38c  cmp x8,x9
71019ee390  b.ne 0x71019f042c
71019ee394  b 0x71019ee3d4
71019ee398  ldr x11,[x9]
71019ee39c  and x13,x11,#-0x100000000000000
71019ee3a0  and x12,x11,#0xffffffffff
71019ee3a4  eor x11,x11,x10
71019ee3a8  cmp x13,x26
71019ee3ac  ccmp x12,#0x0,#0x4,eq
71019ee3b0  and x11,x11,#0xffffffffff
71019ee3b4  ccmp x11,#0x0,#0x0,ne
71019ee3b8  b.eq 0x71019ee3cc
71019ee3bc  add x9,x9,#0x8
71019ee3c0  cmp x8,x9
71019ee3c4  b.ne 0x71019ee398
71019ee3c8  mov x9,x8
71019ee3cc  cmp x8,x9
71019ee3d0  b.ne 0x71019f042c
71019ee3d4  ldr s0,[sp, #0xdc]
71019ee3d8  add x8,sp,#0x2d0
71019ee3dc  mov x0,x24
71019ee3e0  mov x1,x19
71019ee3e4  mov w2,w22
71019ee3e8  fsub s11,s13,s14
71019ee3ec  fadd s10,s0,s8
71019ee3f0  bl 0x7103776910
71019ee3f4  ldr x8,[sp, #0x2d8]
71019ee3f8  ldr x8,[x8]
71019ee3fc  cbz x8,0x71019ee414
71019ee400  ldrb w9,[x8, #0x58]
71019ee404  orr w9,w9,#0x10
71019ee408  str s10,[x8, #0x30]
71019ee40c  str s11,[x8, #0x34]
71019ee410  strb w9,[x8, #0x58]
71019ee414  add x8,sp,#0x2c0
71019ee418  mov x0,x24
71019ee41c  adrp x1,0x710436b000
71019ee420  add x1,x1,#0xc2e
71019ee424  mov w2,w22
71019ee428  bl 0x7103776910
71019ee42c  ldr x8,[sp, #0x2c8]
71019ee430  ldr x9,[x8]
71019ee434  cbz x9,0x71019ee470
71019ee438  ldrb w10,[x9, #0x58]
71019ee43c  orr w10,w10,#0x10
71019ee440  str s10,[x9, #0x30]
71019ee444  str s11,[x9, #0x34]
71019ee448  strb w10,[x9, #0x58]
71019ee44c  ldr x8,[x8]
71019ee450  cbz x8,0x71019ee470
71019ee454  ldr s0,[sp, #0xb4]
71019ee458  str s0,[x8, #0x50]
71019ee45c  ldr s0,[sp, #0x1c]
71019ee460  ldrb w9,[x8, #0x58]
71019ee464  orr w9,w9,#0x10
71019ee468  strb w9,[x8, #0x58]
71019ee46c  str s0,[x8, #0x54]
71019ee470  add x8,sp,#0x2b0
71019ee474  mov x0,x24
71019ee478  mov x1,x19
71019ee47c  mov w2,w22
71019ee480  bl 0x7103776640
71019ee484  ldr x19,[x20]
71019ee488  ldr x0,[x27, #0x168]
71019ee48c  mov x1,x19
71019ee490  mov w2,wzr
71019ee494  bl 0x7103263540
71019ee498  ldr x1,[x27, #0x168]
71019ee49c  mov w21,w0
71019ee4a0  add x0,sp,#0x190
71019ee4a4  mov x2,x19
71019ee4a8  bl 0x7103262310
71019ee4ac  ldr x2,[sp, #0xd0]
71019ee4b0  add x8,sp,#0x268
71019ee4b4  adrp x0,0x710428f000
71019ee4b8  add x0,x0,#0xf2e
71019ee4bc  mov w1,w21
71019ee4c0  bl 0x71003a4ca0
71019ee4c4  adrp x8,0x710593b000
71019ee4c8  ldr x8,[x8, #0xc60]
71019ee4cc  ldr x0,[x8]
71019ee4d0  ldr x1,[sp, #0x150]
71019ee4d4  bl 0x71037a4570
71019ee4d8  adrp x1,0x7104307000
71019ee4dc  add x1,x1,#0xeea
71019ee4e0  tbz w0,#0x0,0x71019ee58c
71019ee4e4  adrp x8,0x710593b000
71019ee4e8  ldr x8,[x8, #0xc60]
71019ee4ec  ldr x0,[x8]
71019ee4f0  ldr x1,[sp, #0x150]
71019ee4f4  bl 0x71037a4450
71019ee4f8  cbz x0,0x71019ee584
71019ee4fc  ldrh w10,[x0]
71019ee500  orr w13,wzr,#0x3
71019ee504  cbz w10,0x71019ee584
71019ee508  mov w8,wzr
71019ee50c  mov w9,#0x1
71019ee510  mov x11,x0
71019ee514  orr w12,w10,#0x1
71019ee518  and w10,w10,#0xffff
71019ee51c  and w12,w12,#0xffff
71019ee520  cmp w12,#0xf
71019ee524  b.ne 0x71019ee540
71019ee528  cmp w10,#0xe
71019ee52c  b.ne 0x71019ee550
71019ee530  ldrh w10,[x11, #0x6]
71019ee534  lsr w10,w10,#0x1
71019ee538  add w10,w10,#0x4
71019ee53c  b 0x71019ee558
71019ee540  cmp w10,#0xa
71019ee544  mov w10,#0x1
71019ee548  cinc w9,w9,eq
71019ee54c  b 0x71019ee558
71019ee550  cmp w10,#0xf
71019ee554  csel w10,w13,wzr,eq
71019ee558  add w8,w10,w8
71019ee55c  add x11,x0,w8, UXTW  #0x1
71019ee560  ldrh w10,[x11]
71019ee564  cbnz w10,0x71019ee514
71019ee568  cmp w9,#0x2
71019ee56c  adrp x8,0x7104307000
71019ee570  add x8,x8,#0xeea
71019ee574  adrp x9,0x710438c000
71019ee578  add x9,x9,#0x2da
71019ee57c  csel x1,x9,x8,eq
71019ee580  b 0x71019ee58c
71019ee584  adrp x1,0x7104307000
71019ee588  add x1,x1,#0xeea
71019ee58c  ldr x0,[sp, #0x2b8]
71019ee590  mov v0.16B,v9.16B
71019ee594  bl 0x7103778300
71019ee598  ldr x8,[x20]
71019ee59c  tst x8,#0xffffffffff
71019ee5a0  and x11,x8,#-0x100000000000000
71019ee5a4  and x9,x8,#0xffffffffff
71019ee5a8  cset w10,eq
71019ee5ac  cmp x11,x26
71019ee5b0  cset w11,ne
71019ee5b4  orr w10,w10,w11
71019ee5b8  ldr w11,[sp, #0xd8]
71019ee5bc  orr w11,w11,w10
71019ee5c0  str x23,[sp, #0x160]
71019ee5c4  tbz w11,#0x0,0x71019ee5d8
71019ee5c8  ldr w11,[sp, #0x140]
71019ee5cc  cmp w11,w10
71019ee5d0  b.eq 0x71019ee5e8
71019ee5d4  b 0x71019ee908
71019ee5d8  ldr x10,[sp, #0xe8]
71019ee5dc  eor x10,x10,x8
71019ee5e0  tst x10,#0xffffffffff
71019ee5e4  b.eq 0x71019ee908
71019ee5e8  add x8,sp,#0x258
71019ee5ec  add x0,sp,#0x2b0
71019ee5f0  adrp x1,0x71043be000
71019ee5f4  add x1,x1,#0xe80
71019ee5f8  bl 0x7103776910
71019ee5fc  ldr x21,[sp, #0xf0]
71019ee600  ldr x1,[x20]
71019ee604  orr w3,wzr,#0x7
71019ee608  mov w2,wzr
71019ee60c  mov x0,x21
71019ee610  bl 0x710323f330
71019ee614  ldr x19,[sp, #0x260]
71019ee618  mov x1,x0
71019ee61c  mov x0,x19
71019ee620  bl 0x7103778b80
71019ee624  add x8,sp,#0x248
71019ee628  add x0,sp,#0x2b0
71019ee62c  adrp x1,0x7104401000
71019ee630  add x1,x1,#0xd5
71019ee634  bl 0x7103776910
71019ee638  ldr x1,[x20]
71019ee63c  orr w3,wzr,#0x7
71019ee640  mov x0,x21
71019ee644  mov w2,wzr
71019ee648  bl 0x710323f330
71019ee64c  ldr x21,[sp, #0x250]
71019ee650  mov x1,x0
71019ee654  mov x0,x21
71019ee658  bl 0x7103778b80
71019ee65c  ldr w23,[x28, #0x214]
71019ee660  cmn w23,#0x1
71019ee664  b.eq 0x71019ee8d4
71019ee668  ldr x1,[x20]
71019ee66c  ldr x0,[x27, #0x2a8]
71019ee670  mov w2,wzr
71019ee674  bl 0x7103280ec0
71019ee678  mov x9,#0x191
71019ee67c  movk x9,#0xa18, LSL #16
71019ee680  movk x9,#0x12, LSL #32
71019ee684  ldr x8,[x27, #0x2a8]
71019ee688  str x9,[sp, #0x190]
71019ee68c  mov x9,#0x6aaf
71019ee690  movk x9,#0xe5da, LSL #16
71019ee694  movk x9,#0x12, LSL #32
71019ee698  str x9,[sp, #0x198]
71019ee69c  mov x9,#0x3107
71019ee6a0  movk x9,#0x7d1f, LSL #16
71019ee6a4  movk x9,#0x12, LSL #32
71019ee6a8  cmp w23,#0x1
71019ee6ac  stur x9,[x29, #-0xa8]
71019ee6b0  csel w9,wzr,w23,hi
71019ee6b4  sbfiz x9,x9,#0x3,#0x20
71019ee6b8  add x10,sp,#0x190
71019ee6bc  fmov s10,wzr
71019ee6c0  ldr x2,[x10, x9, LSL #0x0]
71019ee6c4  mov x10,#0x5a39
71019ee6c8  movk x10,#0x92dd, LSL #16
71019ee6cc  movk x10,#0x12, LSL #32
71019ee6d0  stur x10,[x29, #-0xa0]
71019ee6d4  sub x10,x29,#0xa8
71019ee6d8  ldr x24,[x10, x9, LSL #0x0]
71019ee6dc  mov x10,#0xb477
71019ee6e0  movk x10,#0x40cc, LSL #16
71019ee6e4  movk x10,#0xf, LSL #32
71019ee6e8  stur x10,[x29, #-0xb8]
71019ee6ec  mov x10,#0xbfc3
71019ee6f0  movk x10,#0xe6bb, LSL #16
71019ee6f4  movk x10,#0xf, LSL #32
71019ee6f8  stur x10,[x29, #-0xb0]
71019ee6fc  ldr x27,[x8, #0x8]
71019ee700  sub x10,x29,#0xb8
71019ee704  ldr x26,[x10, x9, LSL #0x0]
71019ee708  mov v0.16B,v10.16B
71019ee70c  mov w21,w0
71019ee710  mov x0,x27
71019ee714  mov w1,w21
71019ee718  bl 0x710326ad60
71019ee71c  str d0,[sp, #0x130]
71019ee720  mov v0.16B,v10.16B
71019ee724  mov x0,x27
71019ee728  mov w1,w21
71019ee72c  mov x2,x24
71019ee730  bl 0x710326ad60
71019ee734  str d0,[sp, #0x90]
71019ee738  mov v0.16B,v9.16B
71019ee73c  mov x0,x27
71019ee740  mov w1,w21
71019ee744  mov x2,x26
71019ee748  bl 0x710326ad60
71019ee74c  mov w0,#0x10
71019ee750  mov w1,#0x20
71019ee754  mov v10.16B,v0.16B
71019ee758  bl 0x710392e290
71019ee75c  mov x21,x0
71019ee760  cbnz x0,0x71019ee7ac
71019ee764  adrp x8,0x7105332000
71019ee768  ldr x0,[x8, #0xf00]
71019ee76c  cbz x0,0x71019ee7a8
71019ee770  mov w8,#0x20
71019ee774  stur wzr,[x29, #-0xa8]
71019ee778  sub x1,x29,#0xa8
71019ee77c  str x8,[sp, #0x190]
71019ee780  ldr x8,[x0]
71019ee784  ldr x8,[x8, #0x30]
71019ee788  add x2,sp,#0x190
71019ee78c  blr x8
71019ee790  tbz w0,#0x0,0x71019ee7a8
71019ee794  mov w0,#0x10
71019ee798  mov w1,#0x20
71019ee79c  bl 0x710392e290
71019ee7a0  mov x21,x0
71019ee7a4  cbnz x0,0x71019ee7ac
71019ee7a8  mov x21,xzr
71019ee7ac  stp xzr,xzr,[x21, #0x10]
71019ee7b0  movi v0.2D,#0x0
71019ee7b4  stp xzr,xzr,[x21]
71019ee7b8  ldr x8,[x19]
71019ee7bc  ldr q1,[sp, #0x130]
71019ee7c0  mov v0.S[0x0],v1.S[0x0]
71019ee7c4  str x8,[x21]
71019ee7c8  ldr x8,[x19, #0x8]
71019ee7cc  str x8,[x21, #0x8]
71019ee7d0  ldr x8,[sp, #0x260]
71019ee7d4  ldr q1,[sp, #0x90]
71019ee7d8  ldr x9,[x8, #0x10]
71019ee7dc  mov v0.S[0x1],v1.S[0x0]
71019ee7e0  str x9,[x21, #0x10]
71019ee7e4  ldr x8,[x8, #0x18]
71019ee7e8  str x8,[x21, #0x18]
71019ee7ec  add x1,sp,#0x190
71019ee7f0  str q0,[sp, #0x130]
71019ee7f4  str q0,[sp, #0x190]
71019ee7f8  mov v0.16B,v10.16B
71019ee7fc  mov x0,x21
71019ee800  bl 0x7103779770
71019ee804  ldr x23,[sp, #0x160]
71019ee808  cbz x21,0x71019ee814
71019ee80c  mov x0,x21
71019ee810  bl 0x710392eb40
71019ee814  mov w0,#0x10
71019ee818  mov w1,#0x20
71019ee81c  bl 0x710392e290
71019ee820  ldr x27,[sp, #0xe0]
71019ee824  ldr x24,[sp, #0x188]
71019ee828  mov x19,x0
71019ee82c  mov x26,#-0x3f00000000000000
71019ee830  cbnz x0,0x71019ee87c
71019ee834  adrp x8,0x7105332000
71019ee838  ldr x0,[x8, #0xf00]
71019ee83c  cbz x0,0x71019ee878
71019ee840  mov w8,#0x20
71019ee844  stur wzr,[x29, #-0xa8]
71019ee848  sub x1,x29,#0xa8
71019ee84c  str x8,[sp, #0x190]
71019ee850  ldr x8,[x0]
71019ee854  ldr x8,[x8, #0x30]
71019ee858  add x2,sp,#0x190
71019ee85c  blr x8
71019ee860  tbz w0,#0x0,0x71019ee878
71019ee864  mov w0,#0x10
71019ee868  mov w1,#0x20
71019ee86c  bl 0x710392e290
71019ee870  mov x19,x0
71019ee874  cbnz x0,0x71019ee87c
71019ee878  mov x19,xzr
71019ee87c  stp xzr,xzr,[x19, #0x10]
71019ee880  add x1,sp,#0x190
71019ee884  stp xzr,xzr,[x19]
71019ee888  ldr x8,[sp, #0x250]
71019ee88c  ldr x9,[x8]
71019ee890  str x9,[x19]
71019ee894  ldr x8,[x8, #0x8]
71019ee898  str x8,[x19, #0x8]
71019ee89c  ldr x21,[sp, #0x250]
71019ee8a0  ldr x8,[x21, #0x10]
71019ee8a4  str x8,[x19, #0x10]
71019ee8a8  ldr q0,[sp, #0x130]
71019ee8ac  ldr x8,[x21, #0x18]
71019ee8b0  str x8,[x19, #0x18]
71019ee8b4  mov x0,x19
71019ee8b8  str q0,[sp, #0x190]
71019ee8bc  mov v0.16B,v10.16B
71019ee8c0  bl 0x7103779770
71019ee8c4  cbz x19,0x71019ee8d8
71019ee8c8  mov x0,x19
71019ee8cc  bl 0x710392eb40
71019ee8d0  b 0x71019ee8d8
71019ee8d4  ldr x23,[sp, #0x160]
71019ee8d8  str x25,[sp, #0x248]
71019ee8dc  str xzr,[sp, #0x250]
71019ee8e0  cbz x21,0x71019ee8ec
71019ee8e4  mov x0,x21
71019ee8e8  bl 0x710392eb40
71019ee8ec  ldr x0,[sp, #0x260]
71019ee8f0  str x25,[sp, #0x258]
71019ee8f4  str xzr,[sp, #0x260]
71019ee8f8  cbz x0,0x71019ee900
71019ee8fc  bl 0x710392eb40
71019ee900  ldr x8,[x20]
71019ee904  and x9,x8,#0xffffffffff
71019ee908  and x10,x8,#-0x100000000000000
71019ee90c  cmp x10,x26
71019ee910  b.ne 0x71019ee968
71019ee914  cbz x9,0x71019ee968
71019ee918  ldr w11,[sp, #0x140]
71019ee91c  mov x10,x26
71019ee920  cbz w11,0x71019ee938
71019ee924  ldr x10,[sp, #0xe8]
71019ee928  eor x10,x10,x8
71019ee92c  tst x10,#0xffffffffff
71019ee930  mov x10,x26
71019ee934  b.eq 0x71019ee970
71019ee938  cmp x9,#0x0
71019ee93c  cset w9,eq
71019ee940  cmp x10,x26
71019ee944  cset w10,ne
71019ee948  orr w9,w9,w10
71019ee94c  ldr w10,[sp, #0xa4]
71019ee950  orr w10,w10,w9
71019ee954  tbz w10,#0x0,0x71019ee998
71019ee958  ldr w8,[sp, #0x104]
71019ee95c  cmp w8,w9
71019ee960  b.eq 0x71019ee9a8
71019ee964  b 0x71019eea0c
71019ee968  ldr w11,[sp, #0x140]
71019ee96c  tbnz w11,#0x0,0x71019ee938
71019ee970  add x8,sp,#0x190
71019ee974  add x0,sp,#0x2b0
71019ee978  adrp x1,0x710435a000
71019ee97c  add x1,x1,#0xf30
71019ee980  bl 0x7103776910
71019ee984  sub x8,x29,#0xa8
71019ee988  add x0,sp,#0x2b0
71019ee98c  adrp x1,0x7104280000
71019ee990  add x1,x1,#0x421
71019ee994  b 0x71019ee9cc
71019ee998  ldr x9,[sp, #0xa8]
71019ee99c  eor x8,x9,x8
71019ee9a0  tst x8,#0xffffffffff
71019ee9a4  b.eq 0x71019eea0c
71019ee9a8  add x8,sp,#0x190
71019ee9ac  add x0,sp,#0x2b0
71019ee9b0  adrp x1,0x7104454000
71019ee9b4  add x1,x1,#0x440
71019ee9b8  bl 0x7103776910
71019ee9bc  sub x8,x29,#0xa8
71019ee9c0  add x0,sp,#0x2b0
71019ee9c4  adrp x1,0x710424e000
71019ee9c8  add x1,x1,#0xe99
71019ee9cc  bl 0x7103776910
71019ee9d0  ldr x19,[sp, #0x150]
71019ee9d4  add x0,sp,#0x190
71019ee9d8  mov x1,x19
71019ee9dc  bl 0x710377a120
71019ee9e0  sub x0,x29,#0xa8
71019ee9e4  mov x1,x19
71019ee9e8  bl 0x710377a120
71019ee9ec  ldur x0,[x29, #-0xa0]
71019ee9f0  stp x25,xzr,[x29, #-0xa8]
71019ee9f4  cbz x0,0x71019ee9fc
71019ee9f8  bl 0x710392eb40
71019ee9fc  ldr x0,[sp, #0x198]
71019eea00  stp x25,xzr,[sp, #0x190]
71019eea04  cbz x0,0x71019eea0c
71019eea08  bl 0x710392eb40
71019eea0c  sub x8,x29,#0xa8
71019eea10  add x0,sp,#0x2b0
71019eea14  adrp x1,0x7104464000
71019eea18  add x1,x1,#0x1f6
71019eea1c  bl 0x7103776910
71019eea20  add x0,sp,#0x190
71019eea24  bl 0x71019eb6b0
71019eea28  ldr x8,[x20]
71019eea2c  str x8,[sp, #0x190]
71019eea30  ldr x1,[x20]
71019eea34  ldr x0,[x27, #0x168]
71019eea38  bl 0x7103263f80
71019eea3c  ldr x8,[sp, #0x2b8]
71019eea40  str x0,[sp, #0x1a0]
71019eea44  ldr x9,[x8]
71019eea48  ldr x10,[sp, #0x1b0]
71019eea4c  str x9,[x10]
71019eea50  ldr x9,[x8, #0x8]
71019eea54  ldr x10,[sp, #0x1b0]
71019eea58  str x9,[x10, #0x8]
71019eea5c  ldr x9,[sp, #0x1b0]
71019eea60  cmp x9,x8
71019eea64  b.eq 0x71019eeaa8
71019eea68  ldr x10,[x8, #0x18]
71019eea6c  ldr x10,[x10]
71019eea70  ldr x11,[x9, #0x18]
71019eea74  str x10,[x11]
71019eea78  ldr x10,[x8, #0x18]
71019eea7c  ldr x10,[x10, #0x8]
71019eea80  ldr x11,[x9, #0x18]
71019eea84  str x10,[x11, #0x8]
71019eea88  ldr x10,[x8, #0x18]
71019eea8c  ldr x10,[x10, #0x10]
71019eea90  ldr x11,[x9, #0x18]
71019eea94  str x10,[x11, #0x10]
71019eea98  ldr x8,[x8, #0x18]
71019eea9c  ldr x8,[x8, #0x18]
71019eeaa0  ldr x9,[x9, #0x18]
71019eeaa4  str x8,[x9, #0x18]
71019eeaa8  ldr x8,[sp, #0x2d8]
71019eeaac  ldr x9,[x8]
71019eeab0  ldr x10,[sp, #0x1c0]
71019eeab4  str x9,[x10]
71019eeab8  ldr x9,[x8, #0x8]
71019eeabc  ldr x10,[sp, #0x1c0]
71019eeac0  str x9,[x10, #0x8]
71019eeac4  ldr x9,[x8, #0x10]
71019eeac8  ldr x10,[sp, #0x1c0]
71019eeacc  str x9,[x10, #0x10]
71019eead0  ldr x8,[x8, #0x18]
71019eead4  ldr x9,[sp, #0x1c0]
71019eead8  str x8,[x9, #0x18]
71019eeadc  ldr x8,[sp, #0x2c8]
71019eeae0  ldr x9,[x8]
71019eeae4  ldr x10,[sp, #0x1d0]
71019eeae8  str x9,[x10]
71019eeaec  ldr x9,[x8, #0x8]
71019eeaf0  ldr x10,[sp, #0x1d0]
71019eeaf4  str x9,[x10, #0x8]
71019eeaf8  ldr x9,[x8, #0x10]
71019eeafc  ldr x10,[sp, #0x1d0]
71019eeb00  str x9,[x10, #0x10]
71019eeb04  ldr x8,[x8, #0x18]
71019eeb08  ldr x9,[sp, #0x1d0]
71019eeb0c  str x8,[x9, #0x18]
71019eeb10  ldur x8,[x29, #-0xa0]
71019eeb14  ldr x8,[x8]
71019eeb18  movi v7.2D,#0x0
71019eeb1c  cbz x8,0x71019eeb7c
71019eeb20  ldr s3,[x8, #0x30]
71019eeb24  mov v2.16B,v7.16B
71019eeb28  add x9,x8,#0x34
71019eeb2c  ldp s0,s1,[x8, #0x50]
71019eeb30  ldp s4,s5,[x8, #0x48]
71019eeb34  fmul s1,s1,s5
71019eeb38  mov v2.S[0x0],v3.S[0x0]
71019eeb3c  fmul s0,s0,s4
71019eeb40  ld1 {v2.S}[1],[x9]
71019eeb44  add x9,x8,#0x38
71019eeb48  ld1 {v2.S}[2],[x9]
71019eeb4c  fabs s0,s0
71019eeb50  fmov s4,0x3f000000
71019eeb54  ldrb w9,[x8, #0x5b]
71019eeb58  fmul s4,s0,s4
71019eeb5c  fabs s1,s1
71019eeb60  and w10,w9,#0x3
71019eeb64  cmp w10,#0x2
71019eeb68  b.eq 0x71019eeb9c
71019eeb6c  cmp w10,#0x1
71019eeb70  b.ne 0x71019eeba4
71019eeb74  fadd s3,s3,s4
71019eeb78  b 0x71019eeba0
71019eeb7c  adrp x8,0x71052a8000
71019eeb80  ldr x8,[x8, #0xa88]
71019eeb84  fmov s0,wzr
71019eeb88  mov v1.16B,v0.16B
71019eeb8c  ldr q4,[x8]
71019eeb90  ldr w9,[sp, #0x170]
71019eeb94  dup s3,v4.S[0x1]
71019eeb98  b 0x71019eec24
71019eeb9c  fsub s3,s3,s4
71019eeba0  mov v2.S[0x0],v3.S[0x0]
71019eeba4  fmov s3,0x3f000000
71019eeba8  fmul s3,s1,s3
71019eebac  ubfx w9,w9,#0x2,#0x2
71019eebb0  cmp w9,#0x2
71019eebb4  b.eq 0x71019eebcc
71019eebb8  cmp w9,#0x1
71019eebbc  b.ne 0x71019eebd8
71019eebc0  dup s4,v2.S[0x1]
71019eebc4  fsub s3,s4,s3
71019eebc8  b 0x71019eebd4
71019eebcc  dup s4,v2.S[0x1]
71019eebd0  fadd s3,s3,s4
71019eebd4  mov v2.S[0x1],v3.S[0x0]
71019eebd8  ldr w9,[sp, #0x170]
71019eebdc  ldr x8,[x8, #0x18]
71019eebe0  cbz x8,0x71019eec1c
71019eebe4  ldp s3,s5,[x8, #0x30]
71019eebe8  fadd s4,s2,s3
71019eebec  dup s3,v2.S[0x1]
71019eebf0  fadd s3,s3,s5
71019eebf4  dup s6,v2.S[0x2]
71019eebf8  mov v2.16B,v7.16B
71019eebfc  mov v2.S[0x0],v4.S[0x0]
71019eec00  ldr s5,[x8, #0x38]
71019eec04  mov v2.S[0x1],v3.S[0x0]
71019eec08  fadd s5,s6,s5
71019eec0c  mov v2.S[0x2],v5.S[0x0]
71019eec10  ldr x8,[x8, #0x18]
71019eec14  cbnz x8,0x71019eebe4
71019eec18  b 0x71019eec24
71019eec1c  dup s3,v2.S[0x1]
71019eec20  mov v4.16B,v2.16B
71019eec24  mov v2.16B,v7.16B
71019eec28  mov v2.S[0x0],v0.S[0x0]
71019eec2c  ldr s0,[sp, #0xcc]
71019eec30  fadd s0,s4,s0
71019eec34  str w23,[sp, #0x1fc]
71019eec38  mov v2.S[0x1],v1.S[0x0]
71019eec3c  fsub s1,s12,s3
71019eec40  movi v3.4S,#0x3f, LSL #24
71019eec44  fmul v2.4S,v2.4S,v3.4S
71019eec48  dup s4,v2.S[0x1]
71019eec4c  fsub s3,s0,s2
71019eec50  fadd s0,s0,s2
71019eec54  fadd s3,s3,s15
71019eec58  fadd s0,s0,s15
71019eec5c  fadd s2,s1,s4
71019eec60  fsub s1,s4,s1
71019eec64  str s3,[sp, #0x1d8]
71019eec68  fadd s1,s1,s12
71019eec6c  fsub s2,s12,s2
71019eec70  str s0,[sp, #0x1dc]
71019eec74  str s2,[sp, #0x1e0]
71019eec78  str s1,[sp, #0x1e4]
71019eec7c  str w9,[sp, #0x200]
71019eec80  ldr x1,[x20]
71019eec84  ldr x0,[x27, #0x168]
71019eec88  bl 0x7103263a30
71019eec8c  ldr w9,[sp, #0x11c]
71019eec90  ubfx w8,w0,#0x1,#0x1
71019eec94  strb w8,[sp, #0x231]
71019eec98  cbz w9,0x71019eeca8
71019eec9c  str wzr,[sp, #0x130]
71019eeca0  cbnz w8,0x71019ef614
71019eeca4  b 0x71019ef744
71019eeca8  ldr x21,[x27, #0x168]
71019eecac  ldr x19,[x20]
71019eecb0  mov x1,#0xb807
71019eecb4  movk x1,#0xb1cc, LSL #16
71019eecb8  movk x1,#0x11, LSL #32
71019eecbc  mov x0,x21
71019eecc0  bl 0x71032631a0
71019eecc4  tst x19,#0xffffffffff
71019eecc8  and x24,x19,#-0x100000000000000
71019eeccc  cset w8,ne
71019eecd0  cmp x24,x26
71019eecd4  cset w9,eq
71019eecd8  and x23,x19,#0xffffffffff
71019eecdc  mov x10,x26
71019eece0  and w26,w9,w8
71019eece4  and x8,x0,#0xffffffffff
71019eece8  tbz w26,#0x0,0x71019eee2c
71019eecec  and x9,x0,#-0x100000000000000
71019eecf0  cmp x9,x10
71019eecf4  b.ne 0x71019eee30
71019eecf8  cbz x8,0x71019eee30
71019eecfc  eor x8,x0,x19
71019eed00  tst x8,#0xffffffffff
71019eed04  b.eq 0x71019eee6c
71019eed08  mov x1,#0x98f0
71019eed0c  movk x1,#0xd031, LSL #16
71019eed10  mov x0,x21
71019eed14  movk x1,#0xf, LSL #32
71019eed18  bl 0x71032631a0
71019eed1c  and x8,x0,#-0x100000000000000
71019eed20  mov x9,#-0x3f00000000000000
71019eed24  cmp x8,x9
71019eed28  b.ne 0x71019eef8c
71019eed2c  and x8,x0,#0xffffffffff
71019eed30  cbz x8,0x71019eef8c
71019eed34  cbz w26,0x71019eed44
71019eed38  eor x8,x19,x0
71019eed3c  tst x8,#0xffffffffff
71019eed40  b.eq 0x71019eef9c
71019eed44  ldur x10,[x29, #-0xc8]
71019eed48  cbz x10,0x71019ef0ac
71019eed4c  ldr x8,[sp, #0x28]
71019eed50  ldr x24,[sp, #0x188]
71019eed54  and x9,x19,#-0xffff0000000001
71019eed58  ldr x11,[x10, #0x20]
71019eed5c  and x11,x11,#-0xffff0000000001
71019eed60  cmp x11,x9
71019eed64  cset w11,cc
71019eed68  csel x8,x8,x10,cc
71019eed6c  ldr x10,[x10, w11, UXTW #0x3]
71019eed70  cbnz x10,0x71019eed58
71019eed74  ldr x10,[sp, #0x28]
71019eed78  cmp x8,x10
71019eed7c  b.eq 0x71019ef0b0
71019eed80  ldr x10,[x8, #0x20]
71019eed84  and x10,x10,#-0xffff0000000001
71019eed88  cmp x9,x10
71019eed8c  mov x26,#-0x3f00000000000000
71019eed90  b.cc 0x71019ef560
71019eed94  ldr x19,[x8, #0x28]
71019eed98  ldp x9,x8,[x29, #-0xe8]
71019eed9c  cmp x9,x8
71019eeda0  b.eq 0x71019eef18
71019eeda4  tst x19,#0xffffffffff
71019eeda8  and x11,x19,#-0x100000000000000
71019eedac  and x12,x19,#0xffffffffff
71019eedb0  cset w10,eq
71019eedb4  cmp x11,x26
71019eedb8  cset w11,ne
71019eedbc  ccmp x12,#0x0,#0x4,eq
71019eedc0  b.ne 0x71019eeee0
71019eedc4  orr w10,w11,w10
71019eedc8  ldr x11,[x9]
71019eedcc  and x12,x11,#-0x100000000000000
71019eedd0  tst x11,#0xffffffffff
71019eedd4  cset w11,ne
71019eedd8  cmp x12,x26
71019eeddc  cset w12,eq
71019eede0  and w11,w11,w12
71019eede4  cmp w11,w10
71019eede8  b.ne 0x71019eef18
71019eedec  add x9,x9,#0x8
71019eedf0  cmp x8,x9
71019eedf4  b.eq 0x71019ee2f0
71019eedf8  ldr x11,[x9], #0x8
71019eedfc  and x12,x11,#-0x100000000000000
71019eee00  tst x11,#0xffffffffff
71019eee04  cset w11,ne
71019eee08  cmp x12,x26
71019eee0c  cset w12,eq
71019eee10  and w11,w11,w12
71019eee14  cmp w11,w10
71019eee18  b.eq 0x71019eedf0
71019eee1c  sub x9,x9,#0x8
71019eee20  cmp x8,x9
71019eee24  b.ne 0x71019eef20
71019eee28  b 0x71019ef560
71019eee2c  and x9,x0,#-0x100000000000000
71019eee30  mov x10,#-0x3f00000000000000
71019eee34  cmp x24,x10
71019eee38  mov x12,x10
71019eee3c  cset w10,eq
71019eee40  cmp x23,#0x0
71019eee44  cset w11,ne
71019eee48  cmp x8,#0x0
71019eee4c  cset w8,ne
71019eee50  cmp x9,x12
71019eee54  cset w9,eq
71019eee58  and w10,w10,w11
71019eee5c  and w8,w8,w9
71019eee60  eor w8,w8,w10
71019eee64  cmp w8,#0x1
71019eee68  b.eq 0x71019eed08
71019eee6c  mov x1,#0xc82e
71019eee70  movk x1,#0x80f1, LSL #16
71019eee74  mov x0,x21
71019eee78  movk x1,#0x12, LSL #32
71019eee7c  bl 0x71032631a0
71019eee80  ldr x23,[sp, #0x128]
71019eee84  ldr x24,[x23]
71019eee88  mov x19,x0
71019eee8c  cbz x24,0x71019ef010
71019eee90  ldr x23,[sp, #0xf8]
71019eee94  and x8,x19,#-0xffff0000000001
71019eee98  mov x26,x24
71019eee9c  b 0x71019eeea8
71019eeea0  mov x23,x26
71019eeea4  mov x26,x9
71019eeea8  ldr x9,[x26, #0x20]
71019eeeac  and x9,x9,#-0xffff0000000001
71019eeeb0  cmp x8,x9
71019eeeb4  b.cs 0x71019eeec4
71019eeeb8  ldr x9,[x26]
71019eeebc  cbnz x9,0x71019eeea0
71019eeec0  b 0x71019ef0c4
71019eeec4  cmp x9,x8
71019eeec8  b.cs 0x71019ef014
71019eeecc  mov x23,x26
71019eeed0  ldr x9,[x23, #0x8]!
71019eeed4  cbz x9,0x71019ef014
71019eeed8  mov x26,x9
71019eeedc  b 0x71019eeea8
71019eeee0  ldr x10,[x9]
71019eeee4  and x12,x10,#-0x100000000000000
71019eeee8  and x11,x10,#0xffffffffff
71019eeeec  eor x10,x10,x19
71019eeef0  cmp x12,x26
71019eeef4  ccmp x11,#0x0,#0x4,eq
71019eeef8  and x10,x10,#0xffffffffff
71019eeefc  ccmp x10,#0x0,#0x0,ne
71019eef00  b.eq 0x71019eef14
71019eef04  add x9,x9,#0x8
71019eef08  cmp x8,x9
71019eef0c  b.ne 0x71019eeee0
71019eef10  mov x9,x8
71019eef14  ldur x8,[x29, #-0xe0]
71019eef18  cmp x8,x9
71019eef1c  b.eq 0x71019ef560
71019eef20  ldr x23,[sp, #0x128]
71019eef24  str x19,[sp, #0x198]
71019eef28  ldr x21,[x23]
71019eef2c  cbz x21,0x71019ee25c
71019eef30  ldr x23,[sp, #0xf8]
71019eef34  and x8,x19,#-0xffff0000000001
71019eef38  b 0x71019eef54
71019eef3c  mov x9,x8
71019eef40  cmp x8,x9
71019eef44  b.ne 0x71019f042c
71019eef48  b 0x71019ee3d4
71019eef4c  mov x23,x21
71019eef50  mov x21,x9
71019eef54  ldr x9,[x21, #0x20]
71019eef58  and x9,x9,#-0xffff0000000001
71019eef5c  cmp x8,x9
71019eef60  b.cs 0x71019eef70
71019eef64  ldr x9,[x21]
71019eef68  cbnz x9,0x71019eef4c
71019eef6c  b 0x71019ee2e0
71019eef70  cmp x9,x8
71019eef74  b.cs 0x71019ee260
71019eef78  mov x23,x21
71019eef7c  ldr x9,[x23, #0x8]!
71019eef80  cbz x9,0x71019ee260
71019eef84  mov x21,x9
71019eef88  b 0x71019eef54
71019eef8c  mov x8,#-0x3f00000000000000
71019eef90  cmp x24,x8
71019eef94  b.ne 0x71019eef9c
71019eef98  cbnz x23,0x71019eed44
71019eef9c  mov x1,#0xfb2b
71019eefa0  movk x1,#0xfdfd, LSL #16
71019eefa4  mov x0,x21
71019eefa8  movk x1,#0x13, LSL #32
71019eefac  bl 0x71032631a0
71019eefb0  ldr x23,[sp, #0x128]
71019eefb4  ldr x24,[x23]
71019eefb8  mov x19,x0
71019eefbc  cbz x24,0x71019ef31c
71019eefc0  ldr x23,[sp, #0xf8]
71019eefc4  and x8,x19,#-0xffff0000000001
71019eefc8  mov x26,x24
71019eefcc  b 0x71019eefd8
71019eefd0  mov x23,x26
71019eefd4  mov x26,x9
71019eefd8  ldr x9,[x26, #0x20]
71019eefdc  and x9,x9,#-0xffff0000000001
71019eefe0  cmp x8,x9
71019eefe4  b.cs 0x71019eeff4
71019eefe8  ldr x9,[x26]
71019eefec  cbnz x9,0x71019eefd0
71019eeff0  b 0x71019ef3b8
71019eeff4  cmp x9,x8
71019eeff8  b.cs 0x71019ef320
71019eeffc  mov x23,x26
71019ef000  ldr x9,[x23, #0x8]!
71019ef004  cbz x9,0x71019ef320
71019ef008  mov x26,x9
71019ef00c  b 0x71019eefd8
71019ef010  mov x26,x23
71019ef014  ldr x8,[x23]
71019ef018  cbnz x8,0x71019ef0d0
71019ef01c  mov w0,#0x10
71019ef020  orr w1,wzr,#0x30
71019ef024  bl 0x710392e290
71019ef028  mov x1,x0
71019ef02c  cbnz x0,0x71019ef068
71019ef030  adrp x8,0x7105332000
71019ef034  ldr x0,[x8, #0xf00]
71019ef038  orr w8,wzr,#0x30
71019ef03c  str wzr,[sp, #0x258]
71019ef040  add x1,sp,#0x258
71019ef044  stur x8,[x29, #-0xb8]
71019ef048  ldr x8,[x0]
71019ef04c  ldr x8,[x8, #0x30]
71019ef050  sub x2,x29,#0xb8
71019ef054  blr x8
71019ef058  mov w0,#0x10
71019ef05c  orr w1,wzr,#0x30
71019ef060  bl 0x710392e290
71019ef064  mov x1,x0
71019ef068  str x19,[x1, #0x20]
71019ef06c  str w22,[x1, #0x28]
71019ef070  str x26,[x1, #0x10]
71019ef074  stp xzr,xzr,[x1]
71019ef078  str x1,[x23]
71019ef07c  ldr x8,[x28, #0x18]
71019ef080  ldr x8,[x8]
71019ef084  cbz x8,0x71019ef090
71019ef088  str x8,[x28, #0x18]
71019ef08c  ldr x1,[x23]
71019ef090  ldr x0,[x28, #0x20]
71019ef094  bl 0x71003e59f0
71019ef098  ldp x24,x8,[x28, #0x20]
71019ef09c  add x8,x8,#0x1
71019ef0a0  str x8,[x28, #0x28]
71019ef0a4  ldr x21,[x27, #0x168]
71019ef0a8  b 0x71019ef0d0
71019ef0ac  ldr x24,[sp, #0x188]
71019ef0b0  str wzr,[sp, #0x130]
71019ef0b4  mov x26,#-0x3f00000000000000
71019ef0b8  ldrb w8,[sp, #0x231]
71019ef0bc  cbnz w8,0x71019ef614
71019ef0c0  b 0x71019ef744
71019ef0c4  mov x23,x26
71019ef0c8  ldr x8,[x23]
71019ef0cc  cbz x8,0x71019ef01c
71019ef0d0  mov x1,#0xf367
71019ef0d4  movk x1,#0xef73, LSL #16
71019ef0d8  mov x0,x21
71019ef0dc  movk x1,#0x14, LSL #32
71019ef0e0  bl 0x71032631a0
71019ef0e4  mov x19,x0
71019ef0e8  cbz x24,0x71019ef13c
71019ef0ec  ldr x23,[sp, #0xf8]
71019ef0f0  and x8,x19,#-0xffff0000000001
71019ef0f4  mov x26,x24
71019ef0f8  b 0x71019ef104
71019ef0fc  mov x23,x26
71019ef100  mov x26,x9
71019ef104  ldr x9,[x26, #0x20]
71019ef108  and x9,x9,#-0xffff0000000001
71019ef10c  cmp x8,x9
71019ef110  b.cs 0x71019ef120
71019ef114  ldr x9,[x26]
71019ef118  cbnz x9,0x71019ef0fc
71019ef11c  b 0x71019ef1dc
71019ef120  cmp x9,x8
71019ef124  b.cs 0x71019ef144
71019ef128  mov x23,x26
71019ef12c  ldr x9,[x23, #0x8]!
71019ef130  cbz x9,0x71019ef144
71019ef134  mov x26,x9
71019ef138  b 0x71019ef104
71019ef13c  ldr x23,[sp, #0x128]
71019ef140  mov x26,x23
71019ef144  ldr x8,[x23]
71019ef148  cbnz x8,0x71019ef1e8
71019ef14c  mov w0,#0x10
71019ef150  orr w1,wzr,#0x30
71019ef154  bl 0x710392e290
71019ef158  mov x1,x0
71019ef15c  cbnz x0,0x71019ef198
71019ef160  adrp x8,0x7105332000
71019ef164  ldr x0,[x8, #0xf00]
71019ef168  orr w8,wzr,#0x30
71019ef16c  str wzr,[sp, #0x258]
71019ef170  add x1,sp,#0x258
71019ef174  stur x8,[x29, #-0xb8]
71019ef178  ldr x8,[x0]
71019ef17c  ldr x8,[x8, #0x30]
71019ef180  sub x2,x29,#0xb8
71019ef184  blr x8
71019ef188  mov w0,#0x10
71019ef18c  orr w1,wzr,#0x30
71019ef190  bl 0x710392e290
71019ef194  mov x1,x0
71019ef198  str x19,[x1, #0x20]
71019ef19c  str w22,[x1, #0x28]
71019ef1a0  str x26,[x1, #0x10]
71019ef1a4  stp xzr,xzr,[x1]
71019ef1a8  str x1,[x23]
71019ef1ac  ldr x8,[x28, #0x18]
71019ef1b0  ldr x8,[x8]
71019ef1b4  cbz x8,0x71019ef1c0
71019ef1b8  str x8,[x28, #0x18]
71019ef1bc  ldr x1,[x23]
71019ef1c0  ldr x0,[x28, #0x20]
71019ef1c4  bl 0x71003e59f0
71019ef1c8  ldp x24,x8,[x28, #0x20]
71019ef1cc  add x8,x8,#0x1
71019ef1d0  str x8,[x28, #0x28]
71019ef1d4  ldr x21,[x27, #0x168]
71019ef1d8  b 0x71019ef1e8
71019ef1dc  mov x23,x26
71019ef1e0  ldr x8,[x23]
71019ef1e4  cbz x8,0x71019ef14c
71019ef1e8  mov x1,#0x4ff6
71019ef1ec  movk x1,#0x915a, LSL #16
71019ef1f0  mov x0,x21
71019ef1f4  movk x1,#0x12, LSL #32
71019ef1f8  bl 0x71032631a0
71019ef1fc  mov x19,x0
71019ef200  cbz x24,0x71019ef254
71019ef204  ldr x21,[sp, #0xf8]
71019ef208  and x8,x19,#-0xffff0000000001
71019ef20c  mov x26,#-0x3f00000000000000
71019ef210  b 0x71019ef21c
71019ef214  mov x21,x24
71019ef218  mov x24,x9
71019ef21c  ldr x9,[x24, #0x20]
71019ef220  and x9,x9,#-0xffff0000000001
71019ef224  cmp x8,x9
71019ef228  b.cs 0x71019ef238
71019ef22c  ldr x9,[x24]
71019ef230  cbnz x9,0x71019ef214
71019ef234  b 0x71019ef270
71019ef238  cmp x9,x8
71019ef23c  b.cs 0x71019ef260
71019ef240  mov x21,x24
71019ef244  ldr x9,[x21, #0x8]!
71019ef248  cbz x9,0x71019ef260
71019ef24c  mov x24,x9
71019ef250  b 0x71019ef21c
71019ef254  ldr x21,[sp, #0x128]
71019ef258  mov x24,x21
71019ef25c  mov x26,#-0x3f00000000000000
71019ef260  ldr x8,[x21]
71019ef264  cbz x8,0x71019ef27c
71019ef268  ldr x24,[sp, #0x188]
71019ef26c  b 0x71019ef308
71019ef270  mov x21,x24
71019ef274  ldr x8,[x21]
71019ef278  cbnz x8,0x71019ef268
71019ef27c  mov w0,#0x10
71019ef280  orr w1,wzr,#0x30
71019ef284  bl 0x710392e290
71019ef288  mov x1,x0
71019ef28c  cbnz x0,0x71019ef2c8
71019ef290  adrp x8,0x7105332000
71019ef294  ldr x0,[x8, #0xf00]
71019ef298  orr w8,wzr,#0x30
71019ef29c  str wzr,[sp, #0x258]
71019ef2a0  add x1,sp,#0x258
71019ef2a4  stur x8,[x29, #-0xb8]
71019ef2a8  ldr x8,[x0]
71019ef2ac  ldr x8,[x8, #0x30]
71019ef2b0  sub x2,x29,#0xb8
71019ef2b4  blr x8
71019ef2b8  mov w0,#0x10
71019ef2bc  orr w1,wzr,#0x30
71019ef2c0  bl 0x710392e290
71019ef2c4  mov x1,x0
71019ef2c8  str x19,[x1, #0x20]
71019ef2cc  str w22,[x1, #0x28]
71019ef2d0  str x24,[x1, #0x10]
71019ef2d4  stp xzr,xzr,[x1]
71019ef2d8  str x1,[x21]
71019ef2dc  ldr x8,[x28, #0x18]
71019ef2e0  ldr x8,[x8]
71019ef2e4  cbz x8,0x71019ef2f0
71019ef2e8  str x8,[x28, #0x18]
71019ef2ec  ldr x1,[x21]
71019ef2f0  ldr x0,[x28, #0x20]
71019ef2f4  ldr x24,[sp, #0x188]
71019ef2f8  bl 0x71003e59f0
71019ef2fc  ldr x8,[x28, #0x28]
71019ef300  add x8,x8,#0x1
71019ef304  str x8,[x28, #0x28]
71019ef308  mov w8,#0x1
71019ef30c  str w8,[sp, #0x130]
71019ef310  ldrb w8,[sp, #0x231]
71019ef314  cbnz w8,0x71019ef614
71019ef318  b 0x71019ef744
71019ef31c  mov x26,x23
71019ef320  ldr x8,[x23]
71019ef324  cbnz x8,0x71019ef3c4
71019ef328  mov w0,#0x10
71019ef32c  orr w1,wzr,#0x30
71019ef330  bl 0x710392e290
71019ef334  mov x1,x0
71019ef338  cbnz x0,0x71019ef374
71019ef33c  adrp x8,0x7105332000
71019ef340  ldr x0,[x8, #0xf00]
71019ef344  orr w8,wzr,#0x30
71019ef348  str wzr,[sp, #0x258]
71019ef34c  add x1,sp,#0x258
71019ef350  stur x8,[x29, #-0xb8]
71019ef354  ldr x8,[x0]
71019ef358  ldr x8,[x8, #0x30]
71019ef35c  sub x2,x29,#0xb8
71019ef360  blr x8
71019ef364  mov w0,#0x10
71019ef368  orr w1,wzr,#0x30
71019ef36c  bl 0x710392e290
71019ef370  mov x1,x0
71019ef374  str x19,[x1, #0x20]
71019ef378  str w22,[x1, #0x28]
71019ef37c  str x26,[x1, #0x10]
71019ef380  stp xzr,xzr,[x1]
71019ef384  str x1,[x23]
71019ef388  ldr x8,[x28, #0x18]
71019ef38c  ldr x8,[x8]
71019ef390  cbz x8,0x71019ef39c
71019ef394  str x8,[x28, #0x18]
71019ef398  ldr x1,[x23]
71019ef39c  ldr x0,[x28, #0x20]
71019ef3a0  bl 0x71003e59f0
71019ef3a4  ldp x24,x8,[x28, #0x20]
71019ef3a8  add x8,x8,#0x1
71019ef3ac  str x8,[x28, #0x28]
71019ef3b0  ldr x21,[x27, #0x168]
71019ef3b4  b 0x71019ef3c4
71019ef3b8  mov x23,x26
71019ef3bc  ldr x8,[x23]
71019ef3c0  cbz x8,0x71019ef328
71019ef3c4  mov x1,#0x1f77
71019ef3c8  movk x1,#0xd706, LSL #16
71019ef3cc  mov x0,x21
71019ef3d0  movk x1,#0x15, LSL #32
71019ef3d4  bl 0x71032631a0
71019ef3d8  mov x19,x0
71019ef3dc  cbz x24,0x71019ef430
71019ef3e0  ldr x23,[sp, #0xf8]
71019ef3e4  and x8,x19,#-0xffff0000000001
71019ef3e8  mov x26,x24
71019ef3ec  b 0x71019ef3f8
71019ef3f0  mov x23,x26
71019ef3f4  mov x26,x9
71019ef3f8  ldr x9,[x26, #0x20]
71019ef3fc  and x9,x9,#-0xffff0000000001
71019ef400  cmp x8,x9
71019ef404  b.cs 0x71019ef414
71019ef408  ldr x9,[x26]
71019ef40c  cbnz x9,0x71019ef3f0
71019ef410  b 0x71019ef4d0
71019ef414  cmp x9,x8
71019ef418  b.cs 0x71019ef438
71019ef41c  mov x23,x26
71019ef420  ldr x9,[x23, #0x8]!
71019ef424  cbz x9,0x71019ef438
71019ef428  mov x26,x9
71019ef42c  b 0x71019ef3f8
71019ef430  ldr x23,[sp, #0x128]
71019ef434  mov x26,x23
71019ef438  ldr x8,[x23]
71019ef43c  cbnz x8,0x71019ef4dc
71019ef440  mov w0,#0x10
71019ef444  orr w1,wzr,#0x30
71019ef448  bl 0x710392e290
71019ef44c  mov x1,x0
71019ef450  cbnz x0,0x71019ef48c
71019ef454  adrp x8,0x7105332000
71019ef458  ldr x0,[x8, #0xf00]
71019ef45c  orr w8,wzr,#0x30
71019ef460  str wzr,[sp, #0x258]
71019ef464  add x1,sp,#0x258
71019ef468  stur x8,[x29, #-0xb8]
71019ef46c  ldr x8,[x0]
71019ef470  ldr x8,[x8, #0x30]
71019ef474  sub x2,x29,#0xb8
71019ef478  blr x8
71019ef47c  mov w0,#0x10
71019ef480  orr w1,wzr,#0x30
71019ef484  bl 0x710392e290
71019ef488  mov x1,x0
71019ef48c  str x19,[x1, #0x20]
71019ef490  str w22,[x1, #0x28]
71019ef494  str x26,[x1, #0x10]
71019ef498  stp xzr,xzr,[x1]
71019ef49c  str x1,[x23]
71019ef4a0  ldr x8,[x28, #0x18]
71019ef4a4  ldr x8,[x8]
71019ef4a8  cbz x8,0x71019ef4b4
71019ef4ac  str x8,[x28, #0x18]
71019ef4b0  ldr x1,[x23]
71019ef4b4  ldr x0,[x28, #0x20]
71019ef4b8  bl 0x71003e59f0
71019ef4bc  ldp x24,x8,[x28, #0x20]
71019ef4c0  add x8,x8,#0x1
71019ef4c4  str x8,[x28, #0x28]
71019ef4c8  ldr x21,[x27, #0x168]
71019ef4cc  b 0x71019ef4dc
71019ef4d0  mov x23,x26
71019ef4d4  ldr x8,[x23]
71019ef4d8  cbz x8,0x71019ef440
71019ef4dc  mov x1,#0x1d87
71019ef4e0  movk x1,#0x57ab, LSL #16
71019ef4e4  mov x0,x21
71019ef4e8  movk x1,#0x12, LSL #32
71019ef4ec  bl 0x71032631a0
71019ef4f0  mov x19,x0
71019ef4f4  cbz x24,0x71019ef548
71019ef4f8  ldr x21,[sp, #0xf8]
71019ef4fc  and x8,x19,#-0xffff0000000001
71019ef500  mov x26,#-0x3f00000000000000
71019ef504  b 0x71019ef510
71019ef508  mov x21,x24
71019ef50c  mov x24,x9
71019ef510  ldr x9,[x24, #0x20]
71019ef514  and x9,x9,#-0xffff0000000001
71019ef518  cmp x8,x9
71019ef51c  b.cs 0x71019ef52c
71019ef520  ldr x9,[x24]
71019ef524  cbnz x9,0x71019ef508
71019ef528  b 0x71019ef570
71019ef52c  cmp x9,x8
71019ef530  b.cs 0x71019ef554
71019ef534  mov x21,x24
71019ef538  ldr x9,[x21, #0x8]!
71019ef53c  cbz x9,0x71019ef554
71019ef540  mov x24,x9
71019ef544  b 0x71019ef510
71019ef548  ldr x21,[sp, #0x128]
71019ef54c  mov x24,x21
71019ef550  mov x26,#-0x3f00000000000000
71019ef554  ldr x8,[x21]
71019ef558  cbz x8,0x71019ef57c
71019ef55c  ldr x24,[sp, #0x188]
71019ef560  str wzr,[sp, #0x130]
71019ef564  ldrb w8,[sp, #0x231]
71019ef568  cbnz w8,0x71019ef614
71019ef56c  b 0x71019ef744
71019ef570  mov x21,x24
71019ef574  ldr x8,[x21]
71019ef578  cbnz x8,0x71019ef55c
71019ef57c  mov w0,#0x10
71019ef580  orr w1,wzr,#0x30
71019ef584  bl 0x710392e290
71019ef588  mov x1,x0
71019ef58c  cbnz x0,0x71019ef5c8
71019ef590  adrp x8,0x7105332000
71019ef594  ldr x0,[x8, #0xf00]
71019ef598  orr w8,wzr,#0x30
71019ef59c  str wzr,[sp, #0x258]
71019ef5a0  add x1,sp,#0x258
71019ef5a4  stur x8,[x29, #-0xb8]
71019ef5a8  ldr x8,[x0]
71019ef5ac  ldr x8,[x8, #0x30]
71019ef5b0  sub x2,x29,#0xb8
71019ef5b4  blr x8
71019ef5b8  mov w0,#0x10
71019ef5bc  orr w1,wzr,#0x30
71019ef5c0  bl 0x710392e290
71019ef5c4  mov x1,x0
71019ef5c8  str x19,[x1, #0x20]
71019ef5cc  str w22,[x1, #0x28]
71019ef5d0  str x24,[x1, #0x10]
71019ef5d4  stp xzr,xzr,[x1]
71019ef5d8  str x1,[x21]
71019ef5dc  ldr x8,[x28, #0x18]
71019ef5e0  ldr x8,[x8]
71019ef5e4  cbz x8,0x71019ef5f0
71019ef5e8  str x8,[x28, #0x18]
71019ef5ec  ldr x1,[x21]
71019ef5f0  ldr x24,[sp, #0x188]
71019ef5f4  ldr x0,[x28, #0x20]
71019ef5f8  bl 0x71003e59f0
71019ef5fc  str wzr,[sp, #0x130]
71019ef600  ldr x8,[x28, #0x28]
71019ef604  add x8,x8,#0x1
71019ef608  str x8,[x28, #0x28]
71019ef60c  ldrb w8,[sp, #0x231]
71019ef610  cbz w8,0x71019ef744
71019ef614  ldr x19,[x20]
71019ef618  ldr x21,[x27, #0x168]
71019ef61c  mov x0,x21
71019ef620  mov x1,x19
71019ef624  bl 0x7103263a30
71019ef628  mvn w8,w0
71019ef62c  tst w8,#0x6
71019ef630  b.ne 0x71019ef744
71019ef634  mov x0,x21
71019ef638  mov x1,x19
71019ef63c  bl 0x7103263030
71019ef640  ldr x23,[sp, #0x128]
71019ef644  str x0,[sp, #0x198]
71019ef648  ldr x21,[x23]
71019ef64c  mov x19,x0
71019ef650  cbz x21,0x71019ef6a0
71019ef654  ldr x23,[sp, #0xf8]
71019ef658  and x8,x19,#-0xffff0000000001
71019ef65c  b 0x71019ef668
71019ef660  mov x23,x21
71019ef664  mov x21,x9
71019ef668  ldr x9,[x21, #0x20]
71019ef66c  and x9,x9,#-0xffff0000000001
71019ef670  cmp x8,x9
71019ef674  b.cs 0x71019ef684
71019ef678  ldr x9,[x21]
71019ef67c  cbnz x9,0x71019ef660
71019ef680  b 0x71019ef738
71019ef684  cmp x9,x8
71019ef688  b.cs 0x71019ef6a4
71019ef68c  mov x23,x21
71019ef690  ldr x9,[x23, #0x8]!
71019ef694  cbz x9,0x71019ef6a4
71019ef698  mov x21,x9
71019ef69c  b 0x71019ef668
71019ef6a0  mov x21,x23
71019ef6a4  ldr x8,[x23]
71019ef6a8  cbnz x8,0x71019ef744
71019ef6ac  mov w0,#0x10
71019ef6b0  orr w1,wzr,#0x30
71019ef6b4  bl 0x710392e290
71019ef6b8  mov x1,x0
71019ef6bc  cbnz x0,0x71019ef6f8
71019ef6c0  adrp x8,0x7105332000
71019ef6c4  ldr x0,[x8, #0xf00]
71019ef6c8  orr w8,wzr,#0x30
71019ef6cc  str wzr,[sp, #0x258]
71019ef6d0  add x1,sp,#0x258
71019ef6d4  stur x8,[x29, #-0xb8]
71019ef6d8  ldr x8,[x0]
71019ef6dc  ldr x8,[x8, #0x30]
71019ef6e0  sub x2,x29,#0xb8
71019ef6e4  blr x8
71019ef6e8  mov w0,#0x10
71019ef6ec  orr w1,wzr,#0x30
71019ef6f0  bl 0x710392e290
71019ef6f4  mov x1,x0
71019ef6f8  str x19,[x1, #0x20]
71019ef6fc  str w22,[x1, #0x28]
71019ef700  str x21,[x1, #0x10]
71019ef704  stp xzr,xzr,[x1]
71019ef708  str x1,[x23]
71019ef70c  ldr x8,[x28, #0x18]
71019ef710  ldr x8,[x8]
71019ef714  cbz x8,0x71019ef720
71019ef718  str x8,[x28, #0x18]
71019ef71c  ldr x1,[x23]
71019ef720  ldr x0,[x28, #0x20]
71019ef724  bl 0x71003e59f0
71019ef728  ldr x8,[x28, #0x28]
71019ef72c  add x8,x8,#0x1
71019ef730  str x8,[x28, #0x28]
71019ef734  b 0x71019ef744
71019ef738  mov x23,x21
71019ef73c  ldr x8,[x23]
71019ef740  cbz x8,0x71019ef6ac
71019ef744  ldp x19,x9,[x28, #0x8]
71019ef748  cmp x19,x9
71019ef74c  b.eq 0x71019ef910
71019ef750  ldr x8,[sp, #0x198]
71019ef754  str x8,[x19, #0x8]
71019ef758  ldr x8,[sp, #0x190]
71019ef75c  ldr x9,[sp, #0x1a0]
71019ef760  ldr x1,[sp, #0x110]
71019ef764  add x0,x19,#0x18
71019ef768  str x9,[x19, #0x10]
71019ef76c  str x8,[x19]
71019ef770  bl 0x7103776390
71019ef774  mov w0,#0x10
71019ef778  mov w1,#0x20
71019ef77c  str x25,[x19, #0x28]
71019ef780  bl 0x710392e290
71019ef784  cbnz x0,0x71019ef7cc
71019ef788  adrp x8,0x7105332000
71019ef78c  ldr x0,[x8, #0xf00]
71019ef790  cbz x0,0x71019ef7c8
71019ef794  mov w8,#0x20
71019ef798  str wzr,[sp, #0x258]
71019ef79c  add x1,sp,#0x258
71019ef7a0  stur x8,[x29, #-0xb8]
71019ef7a4  ldr x8,[x0]
71019ef7a8  ldr x8,[x8, #0x30]
71019ef7ac  sub x2,x29,#0xb8
71019ef7b0  blr x8
71019ef7b4  tbz w0,#0x0,0x71019ef7c8
71019ef7b8  mov w0,#0x10
71019ef7bc  mov w1,#0x20
71019ef7c0  bl 0x710392e290
71019ef7c4  cbnz x0,0x71019ef7cc
71019ef7c8  mov x0,xzr
71019ef7cc  add x8,sp,#0x190
71019ef7d0  cmp x19,x8
71019ef7d4  stp xzr,xzr,[x0, #0x10]
71019ef7d8  stp xzr,xzr,[x0]
71019ef7dc  str x0,[x19, #0x30]
71019ef7e0  b.eq 0x71019ef81c
71019ef7e4  ldr x8,[sp, #0x1c0]
71019ef7e8  ldr x9,[x8]
71019ef7ec  str x9,[x0]
71019ef7f0  ldr x8,[x8, #0x8]
71019ef7f4  ldr x9,[x19, #0x30]
71019ef7f8  str x8,[x9, #0x8]
71019ef7fc  ldr x8,[sp, #0x1c0]
71019ef800  ldr x8,[x8, #0x10]
71019ef804  ldr x9,[x19, #0x30]
71019ef808  str x8,[x9, #0x10]
71019ef80c  ldr x8,[sp, #0x1c0]
71019ef810  ldr x8,[x8, #0x18]
71019ef814  ldr x9,[x19, #0x30]
71019ef818  str x8,[x9, #0x18]
71019ef81c  mov w0,#0x10
71019ef820  mov w1,#0x20
71019ef824  str x25,[x19, #0x38]
71019ef828  bl 0x710392e290
71019ef82c  cbnz x0,0x71019ef874
71019ef830  adrp x8,0x7105332000
71019ef834  ldr x0,[x8, #0xf00]
71019ef838  cbz x0,0x71019ef870
71019ef83c  mov w8,#0x20
71019ef840  str wzr,[sp, #0x258]
71019ef844  add x1,sp,#0x258
71019ef848  stur x8,[x29, #-0xb8]
71019ef84c  ldr x8,[x0]
71019ef850  ldr x8,[x8, #0x30]
71019ef854  sub x2,x29,#0xb8
71019ef858  blr x8
71019ef85c  tbz w0,#0x0,0x71019ef870
71019ef860  mov w0,#0x10
71019ef864  mov w1,#0x20
71019ef868  bl 0x710392e290
71019ef86c  cbnz x0,0x71019ef874
71019ef870  mov x0,xzr
71019ef874  add x8,sp,#0x190
71019ef878  cmp x19,x8
71019ef87c  stp xzr,xzr,[x0, #0x10]
71019ef880  stp xzr,xzr,[x0]
71019ef884  str x0,[x19, #0x40]
71019ef888  b.eq 0x71019ef8c4
71019ef88c  ldr x8,[sp, #0x1d0]
71019ef890  ldr x9,[x8]
71019ef894  str x9,[x0]
71019ef898  ldr x8,[x8, #0x8]
71019ef89c  ldr x9,[x19, #0x40]
71019ef8a0  str x8,[x9, #0x8]
71019ef8a4  ldr x8,[sp, #0x1d0]
71019ef8a8  ldr x8,[x8, #0x10]
71019ef8ac  ldr x9,[x19, #0x40]
71019ef8b0  str x8,[x9, #0x10]
71019ef8b4  ldr x8,[sp, #0x1d0]
71019ef8b8  ldr x8,[x8, #0x18]
71019ef8bc  ldr x9,[x19, #0x40]
71019ef8c0  str x8,[x9, #0x18]
71019ef8c4  ldr x12,[sp, #0x108]
71019ef8c8  ldp x8,x9,[x12]
71019ef8cc  ldp x10,x11,[x12, #0x10]
71019ef8d0  stp x10,x11,[x19, #0x58]
71019ef8d4  stp x8,x9,[x19, #0x48]
71019ef8d8  ldp x8,x9,[x12, #0x20]
71019ef8dc  ldp x10,x11,[x12, #0x30]
71019ef8e0  stp x10,x11,[x19, #0x78]
71019ef8e4  stp x8,x9,[x19, #0x68]
71019ef8e8  ldr x10,[x12, #0x50]
71019ef8ec  ldp x8,x9,[x12, #0x40]
71019ef8f0  ldrh w11,[x12, #0x58]
71019ef8f4  strh w11,[x19, #0xa0]
71019ef8f8  stp x9,x10,[x19, #0x90]
71019ef8fc  str x8,[x19, #0x88]
71019ef900  ldr x8,[x28, #0x8]
71019ef904  add x8,x8,#0xb0
71019ef908  str x8,[x28, #0x8]
71019ef90c  b 0x71019efd5c
71019ef910  ldr x10,[x28]
71019ef914  sub x8,x19,x10
71019ef918  mov x11,#0x8ba3
71019ef91c  movk x11,#0xba2e, LSL #16
71019ef920  movk x11,#0xa2e8, LSL #32
71019ef924  movk x11,#0x2e8b, LSL #48
71019ef928  asr x8,x8,#0x4
71019ef92c  mul x26,x8,x11
71019ef930  mov x27,#0x745d
71019ef934  movk x27,#0x45d1, LSL #16
71019ef938  movk x27,#0x5d17, LSL #32
71019ef93c  movk x27,#0x174, LSL #48
71019ef940  add x8,x26,#0x1
71019ef944  cmp x8,x27
71019ef948  b.hi 0x71019f05d8
71019ef94c  sub x9,x9,x10
71019ef950  mov x10,#0xba2d
71019ef954  movk x10,#0xa2e8, LSL #16
71019ef958  asr x9,x9,#0x4
71019ef95c  mul x9,x9,x11
71019ef960  movk x10,#0x2e8b, LSL #32
71019ef964  movk x10,#0xba, LSL #48
71019ef968  cmp x9,x10
71019ef96c  mov w23,#0xb0
71019ef970  b.hi 0x71019ef984
71019ef974  lsl x9,x9,#0x1
71019ef978  cmp x9,x8
71019ef97c  csel x27,x8,x9,cc
71019ef980  cbz x27,0x71019ef9e4
71019ef984  mul x8,x27,x23
71019ef988  cmp x8,#0x0
71019ef98c  csinc x21,x8,xzr,ne
71019ef990  mov w0,#0x10
71019ef994  mov x1,x21
71019ef998  bl 0x710392e290
71019ef99c  mov x19,x0
71019ef9a0  cbnz x0,0x71019ef9e8
71019ef9a4  adrp x8,0x7105332000
71019ef9a8  ldr x0,[x8, #0xf00]
71019ef9ac  cbz x0,0x71019ef9e4
71019ef9b0  str wzr,[sp, #0x258]
71019ef9b4  stur x21,[x29, #-0xb8]
71019ef9b8  ldr x8,[x0]
71019ef9bc  ldr x8,[x8, #0x30]
71019ef9c0  add x1,sp,#0x258
71019ef9c4  sub x2,x29,#0xb8
71019ef9c8  blr x8
71019ef9cc  tbz w0,#0x0,0x71019ef9e4
71019ef9d0  mov w0,#0x10
71019ef9d4  mov x1,x21
71019ef9d8  bl 0x710392e290
71019ef9dc  mov x19,x0
71019ef9e0  cbnz x0,0x71019ef9e8
71019ef9e4  mov x19,xzr
71019ef9e8  madd x21,x26,x23,x19
71019ef9ec  ldp x8,x9,[sp, #0x198]
71019ef9f0  stp x8,x9,[x21, #0x8]
71019ef9f4  ldr x8,[sp, #0x190]
71019ef9f8  ldr x1,[sp, #0x110]
71019ef9fc  add x0,x21,#0x18
71019efa00  str x8,[x21]
71019efa04  bl 0x7103776390
71019efa08  mov x23,x21
71019efa0c  mov w0,#0x10
71019efa10  mov w1,#0x20
71019efa14  str x25,[x23, #0x28]!
71019efa18  add x24,x21,#0x30
71019efa1c  bl 0x710392e290
71019efa20  cbnz x0,0x71019efa68
71019efa24  adrp x8,0x7105332000
71019efa28  ldr x0,[x8, #0xf00]
71019efa2c  cbz x0,0x71019efa64
71019efa30  mov w8,#0x20
71019efa34  str wzr,[sp, #0x258]
71019efa38  add x1,sp,#0x258
71019efa3c  stur x8,[x29, #-0xb8]
71019efa40  ldr x8,[x0]
71019efa44  ldr x8,[x8, #0x30]
71019efa48  sub x2,x29,#0xb8
71019efa4c  blr x8
71019efa50  tbz w0,#0x0,0x71019efa64
71019efa54  mov w0,#0x10
71019efa58  mov w1,#0x20
71019efa5c  bl 0x710392e290
71019efa60  cbnz x0,0x71019efa68
71019efa64  mov x0,xzr
71019efa68  stp xzr,xzr,[x0, #0x10]
71019efa6c  mov w11,#0xb0
71019efa70  stp xzr,xzr,[x0]
71019efa74  ldr x8,[sp, #0xc0]
71019efa78  cmp x23,x8
71019efa7c  str x0,[x24]
71019efa80  b.eq 0x71019efabc
71019efa84  ldr x8,[sp, #0x1c0]
71019efa88  ldr x9,[x8]
71019efa8c  str x9,[x0]
71019efa90  ldr x8,[x8, #0x8]
71019efa94  madd x10,x26,x11,x19
71019efa98  str x8,[x0, #0x8]
71019efa9c  ldr x8,[sp, #0x1c0]
71019efaa0  ldr x8,[x8, #0x10]
71019efaa4  ldr x9,[x10, #0x30]
71019efaa8  str x8,[x9, #0x10]
71019efaac  ldr x8,[sp, #0x1c0]
71019efab0  ldr x8,[x8, #0x18]
71019efab4  ldr x9,[x10, #0x30]
71019efab8  str x8,[x9, #0x18]
71019efabc  madd x23,x26,x11,x19
71019efac0  mov w0,#0x10
71019efac4  mov w1,#0x20
71019efac8  str x25,[x23, #0x38]!
71019efacc  add x24,x23,#0x8
71019efad0  bl 0x710392e290
71019efad4  cbnz x0,0x71019efb1c
71019efad8  adrp x8,0x7105332000
71019efadc  ldr x0,[x8, #0xf00]
71019efae0  cbz x0,0x71019efb18
71019efae4  mov w8,#0x20
71019efae8  str wzr,[sp, #0x258]
71019efaec  add x1,sp,#0x258
71019efaf0  stur x8,[x29, #-0xb8]
71019efaf4  ldr x8,[x0]
71019efaf8  ldr x8,[x8, #0x30]
71019efafc  sub x2,x29,#0xb8
71019efb00  blr x8
71019efb04  tbz w0,#0x0,0x71019efb18
71019efb08  mov w0,#0x10
71019efb0c  mov w1,#0x20
71019efb10  bl 0x710392e290
71019efb14  cbnz x0,0x71019efb1c
71019efb18  mov x0,xzr
71019efb1c  stp xzr,xzr,[x0, #0x10]
71019efb20  mov w11,#0xb0
71019efb24  stp xzr,xzr,[x0]
71019efb28  ldr x8,[sp, #0xb8]
71019efb2c  cmp x23,x8
71019efb30  str x0,[x24]
71019efb34  b.eq 0x71019efb70
71019efb38  ldr x8,[sp, #0x1d0]
71019efb3c  ldr x9,[x8]
71019efb40  str x9,[x0]
71019efb44  ldr x8,[x8, #0x8]
71019efb48  madd x10,x26,x11,x19
71019efb4c  str x8,[x0, #0x8]
71019efb50  ldr x8,[sp, #0x1d0]
71019efb54  ldr x8,[x8, #0x10]
71019efb58  ldr x9,[x10, #0x40]
71019efb5c  str x8,[x9, #0x10]
71019efb60  ldr x8,[sp, #0x1d0]
71019efb64  ldr x8,[x8, #0x18]
71019efb68  ldr x9,[x10, #0x40]
71019efb6c  str x8,[x9, #0x18]
71019efb70  ldr x13,[sp, #0x108]
71019efb74  madd x8,x26,x11,x19
71019efb78  madd x14,x27,x11,x19
71019efb7c  ldp x9,x10,[x13]
71019efb80  ldp x11,x12,[x13, #0x10]
71019efb84  stp x11,x12,[x8, #0x58]
71019efb88  stp x9,x10,[x8, #0x48]
71019efb8c  ldp x9,x10,[x13, #0x20]
71019efb90  ldp x11,x12,[x13, #0x30]
71019efb94  stp x11,x12,[x8, #0x78]
71019efb98  stp x9,x10,[x8, #0x68]
71019efb9c  ldr x11,[x13, #0x50]
71019efba0  ldp x9,x10,[x13, #0x40]
71019efba4  ldrh w12,[x13, #0x58]
71019efba8  strh w12,[x8, #0xa0]
71019efbac  stp x10,x11,[x8, #0x90]
71019efbb0  str x9,[x8, #0x88]
71019efbb4  ldp x26,x24,[x28]
71019efbb8  add x8,x21,#0xb0
71019efbbc  cmp x24,x26
71019efbc0  b.eq 0x71019efcd4
71019efbc4  mov x23,xzr
71019efbc8  sub x28,x26,x24
71019efbcc  str x8,[sp, #0x20]
71019efbd0  str x14,[sp, #0x90]
71019efbd4  add x26,x24,x23
71019efbd8  ldur x8,[x26, #-0xa8]
71019efbdc  add x27,x21,x23
71019efbe0  stur x8,[x27, #-0xa8]
71019efbe4  ldur x8,[x26, #-0xb0]
71019efbe8  ldur x9,[x26, #-0xa0]
71019efbec  stur x8,[x27, #-0xb0]
71019efbf0  adrp x8,0x710523d000
71019efbf4  add x8,x8,#0x988
71019efbf8  cmp x24,x21
71019efbfc  stur xzr,[x27, #-0x90]
71019efc00  stp x9,x8,[x27, #-0xa0]
71019efc04  b.eq 0x71019efc70
71019efc08  ldur x8,[x26, #-0x90]
71019efc0c  stur xzr,[x26, #-0x90]
71019efc10  ldur x19,[x27, #-0x90]
71019efc14  stur x8,[x27, #-0x90]
71019efc18  cbz x19,0x71019efc34
71019efc1c  ldr x0,[x19, #0x18]
71019efc20  stp x25,xzr,[x19, #0x10]
71019efc24  cbz x0,0x71019efc2c
71019efc28  bl 0x710392eb40
71019efc2c  mov x0,x19
71019efc30  bl 0x710392eb40
71019efc34  stp x25,xzr,[x27, #-0x88]
71019efc38  ldur x8,[x26, #-0x80]
71019efc3c  stur xzr,[x26, #-0x80]
71019efc40  ldur x0,[x27, #-0x80]
71019efc44  stur x8,[x27, #-0x80]
71019efc48  cbz x0,0x71019efc50
71019efc4c  bl 0x710392eb40
71019efc50  stp x25,xzr,[x27, #-0x78]
71019efc54  ldur x8,[x26, #-0x70]
71019efc58  stur xzr,[x26, #-0x70]
71019efc5c  ldur x0,[x27, #-0x70]
71019efc60  stur x8,[x27, #-0x70]
71019efc64  cbz x0,0x71019efc78
71019efc68  bl 0x710392eb40
71019efc6c  b 0x71019efc78
71019efc70  stp x25,xzr,[x27, #-0x88]
71019efc74  stp x25,xzr,[x27, #-0x78]
71019efc78  ldp x8,x9,[x26, #-0x68]
71019efc7c  sub x23,x23,#0xb0
71019efc80  ldp x10,x11,[x26, #-0x58]
71019efc84  cmp x28,x23
71019efc88  stp x10,x11,[x27, #-0x58]
71019efc8c  stp x8,x9,[x27, #-0x68]
71019efc90  ldp x8,x9,[x26, #-0x48]
71019efc94  ldp x10,x11,[x26, #-0x38]
71019efc98  stp x10,x11,[x27, #-0x38]
71019efc9c  stp x8,x9,[x27, #-0x48]
71019efca0  ldur x10,[x26, #-0x18]
71019efca4  ldp x8,x9,[x26, #-0x28]
71019efca8  ldurh w11,[x26, #-0x10]
71019efcac  sturh w11,[x27, #-0x10]
71019efcb0  stp x9,x10,[x27, #-0x20]
71019efcb4  stur x8,[x27, #-0x28]
71019efcb8  b.ne 0x71019efbd4
71019efcbc  ldr x28,[sp, #0x168]
71019efcc0  ldp x19,x26,[x28]
71019efcc4  ldr x14,[sp, #0x90]
71019efcc8  ldr x8,[sp, #0x20]
71019efccc  add x21,x21,x23
71019efcd0  b 0x71019efcd8
71019efcd4  mov x19,x26
71019efcd8  stp x21,x8,[x28]
71019efcdc  ldr x27,[sp, #0xe0]
71019efce0  ldr x24,[sp, #0x188]
71019efce4  cmp x26,x19
71019efce8  str x14,[x28, #0x10]
71019efcec  b.eq 0x71019efd4c
71019efcf0  ldur x0,[x26, #-0x70]
71019efcf4  stp x25,xzr,[x26, #-0x78]
71019efcf8  cbz x0,0x71019efd00
71019efcfc  bl 0x710392eb40
71019efd00  ldur x0,[x26, #-0x80]
71019efd04  stp x25,xzr,[x26, #-0x88]
71019efd08  cbz x0,0x71019efd10
71019efd0c  bl 0x710392eb40
71019efd10  ldur x21,[x26, #-0x90]
71019efd14  sub x23,x26,#0xb0
71019efd18  adrp x8,0x710523d000
71019efd1c  add x8,x8,#0x988
71019efd20  stp x8,xzr,[x26, #-0x98]
71019efd24  cbz x21,0x71019efd40
71019efd28  ldr x0,[x21, #0x18]
71019efd2c  stp x25,xzr,[x21, #0x10]
71019efd30  cbz x0,0x71019efd38
71019efd34  bl 0x710392eb40
71019efd38  mov x0,x21
71019efd3c  bl 0x710392eb40
71019efd40  cmp x19,x23
71019efd44  mov x26,x23
71019efd48  b.ne 0x71019efcf0
71019efd4c  mov x26,#-0x3f00000000000000
71019efd50  cbz x19,0x71019efd5c
71019efd54  mov x0,x19
71019efd58  bl 0x710392eb40
71019efd5c  ldr x23,[sp, #0x128]
71019efd60  ldr x19,[x20]
71019efd64  ldr x21,[x23]
71019efd68  cbz x21,0x71019efdb8
71019efd6c  ldr x23,[sp, #0xf8]
71019efd70  and x8,x19,#-0xffff0000000001
71019efd74  b 0x71019efd80
71019efd78  mov x23,x21
71019efd7c  mov x21,x9
71019efd80  ldr x9,[x21, #0x20]
71019efd84  and x9,x9,#-0xffff0000000001
71019efd88  cmp x8,x9
71019efd8c  b.cs 0x71019efd9c
71019efd90  ldr x9,[x21]
71019efd94  cbnz x9,0x71019efd78
71019efd98  b 0x71019efe50
71019efd9c  cmp x9,x8
71019efda0  b.cs 0x71019efdbc
71019efda4  mov x23,x21
71019efda8  ldr x9,[x23, #0x8]!
71019efdac  cbz x9,0x71019efdbc
71019efdb0  mov x21,x9
71019efdb4  b 0x71019efd80
71019efdb8  mov x21,x23
71019efdbc  ldr x8,[x23]
71019efdc0  cbnz x8,0x71019efe5c
71019efdc4  mov w0,#0x10
71019efdc8  orr w1,wzr,#0x30
71019efdcc  bl 0x710392e290
71019efdd0  mov x1,x0
71019efdd4  cbnz x0,0x71019efe10
71019efdd8  adrp x8,0x7105332000
71019efddc  ldr x0,[x8, #0xf00]
71019efde0  orr w8,wzr,#0x30
71019efde4  str wzr,[sp, #0x258]
71019efde8  add x1,sp,#0x258
71019efdec  stur x8,[x29, #-0xb8]
71019efdf0  ldr x8,[x0]
71019efdf4  ldr x8,[x8, #0x30]
71019efdf8  sub x2,x29,#0xb8
71019efdfc  blr x8
71019efe00  mov w0,#0x10
71019efe04  orr w1,wzr,#0x30
71019efe08  bl 0x710392e290
71019efe0c  mov x1,x0
71019efe10  str x19,[x1, #0x20]
71019efe14  str w22,[x1, #0x28]
71019efe18  str x21,[x1, #0x10]
71019efe1c  stp xzr,xzr,[x1]
71019efe20  str x1,[x23]
71019efe24  ldr x8,[x28, #0x18]
71019efe28  ldr x8,[x8]
71019efe2c  cbz x8,0x71019efe38
71019efe30  str x8,[x28, #0x18]
71019efe34  ldr x1,[x23]
71019efe38  ldr x0,[x28, #0x20]
71019efe3c  bl 0x71003e59f0
71019efe40  ldr x8,[x28, #0x28]
71019efe44  add x8,x8,#0x1
71019efe48  str x8,[x28, #0x28]
71019efe4c  b 0x71019efe5c
71019efe50  mov x23,x21
71019efe54  ldr x8,[x23]
71019efe58  cbz x8,0x71019efdc4
71019efe5c  ldr x8,[sp, #0x198]
71019efe60  tst x8,#0xffffffffff
71019efe64  and x8,x8,#-0x100000000000000
71019efe68  cset w9,eq
71019efe6c  cmp x8,x26
71019efe70  cset w8,ne
71019efe74  orr w8,w8,w9
71019efe78  ldrb w9,[sp, #0x231]
71019efe7c  cmp w9,#0x0
71019efe80  cset w9,ne
71019efe84  orr w8,w9,w8
71019efe88  ldr w9,[sp, #0x130]
71019efe8c  ldr x21,[sp, #0x2b8]
71019efe90  mov x0,x21
71019efe94  orr w8,w9,w8
71019efe98  tbz w8,#0x0,0x71019efeb4
71019efe9c  mov v0.16B,v9.16B
71019efea0  adrp x1,0x7104412000
71019efea4  add x1,x1,#0x2df
71019efea8  bl 0x7103778300
71019efeac  ldr x23,[sp, #0x160]
71019efeb0  b 0x71019eff10
71019efeb4  mov v0.16B,v9.16B
71019efeb8  adrp x1,0x710426f000
71019efebc  add x1,x1,#0x9dd
71019efec0  bl 0x7103778300
71019efec4  sub x8,x29,#0xb8
71019efec8  add x0,sp,#0x2b0
71019efecc  adrp x1,0x71042d5000
71019efed0  add x1,x1,#0xc17
71019efed4  bl 0x7103776910
71019efed8  ldr x1,[sp, #0x198]
71019efedc  ldr x0,[sp, #0xf0]
71019efee0  orr w3,wzr,#0x7
71019efee4  mov w2,wzr
71019efee8  bl 0x710323f330
71019efeec  ldur x19,[x29, #-0xb0]
71019efef0  mov x1,x0
71019efef4  mov x0,x19
71019efef8  bl 0x7103778b80
71019efefc  ldr x23,[sp, #0x160]
71019eff00  stp x25,xzr,[x29, #-0xb8]
71019eff04  cbz x19,0x71019eff10
71019eff08  mov x0,x19
71019eff0c  bl 0x710392eb40
71019eff10  ldr x8,[x20]
71019eff14  and x9,x8,#-0x100000000000000
71019eff18  cmp x9,x26
71019eff1c  b.ne 0x71019eff68
71019eff20  and x9,x8,#0xffffffffff
71019eff24  cbz x9,0x71019eff68
71019eff28  ldr w9,[sp, #0x104]
71019eff2c  cbz w9,0x71019eff40
71019eff30  ldr x9,[sp, #0xa8]
71019eff34  eor x9,x9,x8
71019eff38  tst x9,#0xffffffffff
71019eff3c  b.eq 0x71019f0118
71019eff40  ldr w9,[sp, #0x140]
71019eff44  cbz w9,0x71019eff58
71019eff48  ldr x9,[sp, #0xe8]
71019eff4c  eor x8,x9,x8
71019eff50  tst x8,#0xffffffffff
71019eff54  b.eq 0x71019eff78
71019eff58  mov x0,x21
71019eff5c  adrp x1,0x710425f000
71019eff60  add x1,x1,#0xcde
71019eff64  b 0x71019f02b4
71019eff68  ldr w8,[sp, #0x104]
71019eff6c  tbz w8,#0x0,0x71019f0118
71019eff70  ldr w8,[sp, #0x140]
71019eff74  tbnz w8,#0x0,0x71019eff58
71019eff78  ldp x8,x9,[sp, #0x198]
71019eff7c  ldr x10,[sp, #0x88]
71019eff80  stp x8,x9,[x10, #0x8]
71019eff84  ldr x8,[sp, #0x190]
71019eff88  str x8,[x10]
71019eff8c  ldr x8,[sp, #0x110]
71019eff90  ldr x9,[sp, #0x80]
71019eff94  cmp x9,x8
71019eff98  b.eq 0x71019f000c
71019eff9c  ldr x8,[sp, #0x1b0]
71019effa0  ldr x8,[x8]
71019effa4  ldr x9,[x28, #0x50]
71019effa8  str x8,[x9]
71019effac  ldr x8,[sp, #0x1b0]
71019effb0  ldr x8,[x8, #0x8]
71019effb4  ldr x9,[x28, #0x50]
71019effb8  str x8,[x9, #0x8]
71019effbc  ldr x9,[sp, #0x1b0]
71019effc0  ldr x8,[x28, #0x50]
71019effc4  cmp x8,x9
71019effc8  b.eq 0x71019f000c
71019effcc  ldr x10,[x9, #0x18]
71019effd0  ldr x10,[x10]
71019effd4  ldr x11,[x8, #0x18]
71019effd8  str x10,[x11]
71019effdc  ldr x10,[x9, #0x18]
71019effe0  ldr x10,[x10, #0x8]
71019effe4  ldr x11,[x8, #0x18]
71019effe8  str x10,[x11, #0x8]
71019effec  ldr x10,[x9, #0x18]
71019efff0  ldr x10,[x10, #0x10]
71019efff4  ldr x11,[x8, #0x18]
71019efff8  str x10,[x11, #0x10]
71019efffc  ldr x9,[x9, #0x18]
71019f0000  ldr x9,[x9, #0x18]
71019f0004  ldr x8,[x8, #0x18]
71019f0008  str x9,[x8, #0x18]
71019f000c  ldr x8,[sp, #0xc0]
71019f0010  ldr x9,[sp, #0x78]
71019f0014  cmp x9,x8
71019f0018  b.eq 0x71019f005c
71019f001c  ldr x8,[sp, #0x1c0]
71019f0020  ldr x8,[x8]
71019f0024  ldr x9,[x28, #0x60]
71019f0028  str x8,[x9]
71019f002c  ldr x8,[sp, #0x1c0]
71019f0030  ldr x8,[x8, #0x8]
71019f0034  ldr x9,[x28, #0x60]
71019f0038  str x8,[x9, #0x8]
71019f003c  ldr x8,[sp, #0x1c0]
71019f0040  ldr x8,[x8, #0x10]
71019f0044  ldr x9,[x28, #0x60]
71019f0048  str x8,[x9, #0x10]
71019f004c  ldr x8,[sp, #0x1c0]
71019f0050  ldr x8,[x8, #0x18]
71019f0054  ldr x9,[x28, #0x60]
71019f0058  str x8,[x9, #0x18]
71019f005c  ldr x8,[sp, #0xb8]
71019f0060  ldr x9,[sp, #0x70]
71019f0064  cmp x9,x8
71019f0068  b.eq 0x71019f00ac
71019f006c  ldr x8,[sp, #0x1d0]
71019f0070  ldr x8,[x8]
71019f0074  ldr x9,[x28, #0x70]
71019f0078  str x8,[x9]
71019f007c  ldr x8,[sp, #0x1d0]
71019f0080  ldr x8,[x8, #0x8]
71019f0084  ldr x9,[x28, #0x70]
71019f0088  str x8,[x9, #0x8]
71019f008c  ldr x8,[sp, #0x1d0]
71019f0090  ldr x8,[x8, #0x10]
71019f0094  ldr x9,[x28, #0x70]
71019f0098  str x8,[x9, #0x10]
71019f009c  ldr x8,[sp, #0x1d0]
71019f00a0  ldr x8,[x8, #0x18]
71019f00a4  ldr x9,[x28, #0x70]
71019f00a8  str x8,[x9, #0x18]
71019f00ac  ldr x9,[sp, #0x108]
71019f00b0  ldp x8,x9,[x9]
71019f00b4  ldr x10,[sp, #0x68]
71019f00b8  stp x8,x9,[x10]
71019f00bc  ldp x11,x10,[sp, #0x58]
71019f00c0  ldr x9,[x11, #0x8]
71019f00c4  ldr w8,[x11, #0x10]
71019f00c8  str x9,[x10, #0x8]
71019f00cc  ldr x9,[x11]
71019f00d0  str w8,[x10, #0x10]
71019f00d4  str x9,[x10]
71019f00d8  mov x0,x21
71019f00dc  ldp x10,x9,[sp, #0x48]
71019f00e0  ldr x8,[x10, #0x8]
71019f00e4  str x8,[x9, #0x8]
71019f00e8  ldr x8,[x10]
71019f00ec  str x8,[x9]
71019f00f0  ldp x10,x9,[sp, #0x38]
71019f00f4  ldr x8,[x10, #0x8]
71019f00f8  str x8,[x9, #0x8]
71019f00fc  ldr x8,[x10]
71019f0100  str x8,[x9]
71019f0104  ldrh w8,[sp, #0x230]
71019f0108  adrp x1,0x710425e000
71019f010c  add x1,x1,#0xddc
71019f0110  strh w8,[x28, #0xd0]
71019f0114  b 0x71019f02b4
71019f0118  ldp x8,x9,[sp, #0x198]
71019f011c  ldr x10,[sp, #0x88]
71019f0120  stp x8,x9,[x10, #0x8]
71019f0124  ldr x8,[sp, #0x190]
71019f0128  str x8,[x10]
71019f012c  ldr x8,[sp, #0x110]
71019f0130  ldr x9,[sp, #0x80]
71019f0134  cmp x9,x8
71019f0138  b.eq 0x71019f01ac
71019f013c  ldr x8,[sp, #0x1b0]
71019f0140  ldr x8,[x8]
71019f0144  ldr x9,[x28, #0x50]
71019f0148  str x8,[x9]
71019f014c  ldr x8,[sp, #0x1b0]
71019f0150  ldr x8,[x8, #0x8]
71019f0154  ldr x9,[x28, #0x50]
71019f0158  str x8,[x9, #0x8]
71019f015c  ldr x9,[sp, #0x1b0]
71019f0160  ldr x8,[x28, #0x50]
71019f0164  cmp x8,x9
71019f0168  b.eq 0x71019f01ac
71019f016c  ldr x10,[x9, #0x18]
71019f0170  ldr x10,[x10]
71019f0174  ldr x11,[x8, #0x18]
71019f0178  str x10,[x11]
71019f017c  ldr x10,[x9, #0x18]
71019f0180  ldr x10,[x10, #0x8]
71019f0184  ldr x11,[x8, #0x18]
71019f0188  str x10,[x11, #0x8]
71019f018c  ldr x10,[x9, #0x18]
71019f0190  ldr x10,[x10, #0x10]
71019f0194  ldr x11,[x8, #0x18]
71019f0198  str x10,[x11, #0x10]
71019f019c  ldr x9,[x9, #0x18]
71019f01a0  ldr x9,[x9, #0x18]
71019f01a4  ldr x8,[x8, #0x18]
71019f01a8  str x9,[x8, #0x18]
71019f01ac  ldr x8,[sp, #0xc0]
71019f01b0  ldr x9,[sp, #0x78]
71019f01b4  cmp x9,x8
71019f01b8  b.eq 0x71019f01fc
71019f01bc  ldr x8,[sp, #0x1c0]
71019f01c0  ldr x8,[x8]
71019f01c4  ldr x9,[x28, #0x60]
71019f01c8  str x8,[x9]
71019f01cc  ldr x8,[sp, #0x1c0]
71019f01d0  ldr x8,[x8, #0x8]
71019f01d4  ldr x9,[x28, #0x60]
71019f01d8  str x8,[x9, #0x8]
71019f01dc  ldr x8,[sp, #0x1c0]
71019f01e0  ldr x8,[x8, #0x10]
71019f01e4  ldr x9,[x28, #0x60]
71019f01e8  str x8,[x9, #0x10]
71019f01ec  ldr x8,[sp, #0x1c0]
71019f01f0  ldr x8,[x8, #0x18]
71019f01f4  ldr x9,[x28, #0x60]
71019f01f8  str x8,[x9, #0x18]
71019f01fc  ldr x8,[sp, #0xb8]
71019f0200  ldr x9,[sp, #0x70]
71019f0204  cmp x9,x8
71019f0208  b.eq 0x71019f024c
71019f020c  ldr x8,[sp, #0x1d0]
71019f0210  ldr x8,[x8]
71019f0214  ldr x9,[x28, #0x70]
71019f0218  str x8,[x9]
71019f021c  ldr x8,[sp, #0x1d0]
71019f0220  ldr x8,[x8, #0x8]
71019f0224  ldr x9,[x28, #0x70]
71019f0228  str x8,[x9, #0x8]
71019f022c  ldr x8,[sp, #0x1d0]
71019f0230  ldr x8,[x8, #0x10]
71019f0234  ldr x9,[x28, #0x70]
71019f0238  str x8,[x9, #0x10]
71019f023c  ldr x8,[sp, #0x1d0]
71019f0240  ldr x8,[x8, #0x18]
71019f0244  ldr x9,[x28, #0x70]
71019f0248  str x8,[x9, #0x18]
71019f024c  ldr x9,[sp, #0x108]
71019f0250  ldp x8,x9,[x9]
71019f0254  ldr x10,[sp, #0x68]
71019f0258  stp x8,x9,[x10]
71019f025c  ldp x11,x10,[sp, #0x58]
71019f0260  ldr x9,[x11, #0x8]
71019f0264  ldr w8,[x11, #0x10]
71019f0268  str x9,[x10, #0x8]
71019f026c  ldr x9,[x11]
71019f0270  str w8,[x10, #0x10]
71019f0274  str x9,[x10]
71019f0278  mov x0,x21
71019f027c  ldp x10,x9,[sp, #0x48]
71019f0280  ldr x8,[x10, #0x8]
71019f0284  str x8,[x9, #0x8]
71019f0288  ldr x8,[x10]
71019f028c  str x8,[x9]
71019f0290  ldp x10,x9,[sp, #0x38]
71019f0294  ldr x8,[x10, #0x8]
71019f0298  str x8,[x9, #0x8]
71019f029c  ldr x8,[x10]
71019f02a0  str x8,[x9]
71019f02a4  ldrh w8,[sp, #0x230]
71019f02a8  strh w8,[x28, #0xd0]
71019f02ac  adrp x1,0x710438d000
71019f02b0  add x1,x1,#0x2e3
71019f02b4  mov v0.16B,v9.16B
71019f02b8  bl 0x7103778300
71019f02bc  ldr x0,[sp, #0x1b0]
71019f02c0  mov v0.16B,v9.16B
71019f02c4  adrp x1,0x71043f0000
71019f02c8  add x1,x1,#0x423
71019f02cc  bl 0x7103778300
71019f02d0  ldr w9,[sp, #0x170]
71019f02d4  add w9,w9,#0x1
71019f02d8  cmp w23,#0xc
71019f02dc  mov w8,#0xd
71019f02e0  b.hi 0x71019f02ec
71019f02e4  add x8,x28,w23, SXTW  #0x2
71019f02e8  ldr w8,[x8, #0x1d4]
71019f02ec  cmp w8,w9
71019f02f0  b.le 0x71019f0304
71019f02f4  ldr s0,[sp, #0x34]
71019f02f8  fadd s8,s0,s8
71019f02fc  str w9,[sp, #0x170]
71019f0300  b 0x71019f0370
71019f0304  sxtw x8,w23
71019f0308  add x23,x8,#0x1
71019f030c  cmp w23,#0xc
71019f0310  b.hi 0x71019f036c
71019f0314  add x8,x28,x23, LSL #0x2
71019f0318  ldr w8,[x8, #0x1d4]
71019f031c  ldr s1,[sp, #0xb4]
71019f0320  scvtf s0,w8
71019f0324  fmul s0,s1,s0
71019f0328  cmp w8,#0x2
71019f032c  b.lt 0x71019f0344
71019f0330  sub w8,w8,#0x1
71019f0334  scvtf s1,w8
71019f0338  ldr s2,[x28, #0x20c]
71019f033c  fmul s1,s2,s1
71019f0340  fadd s0,s0,s1
71019f0344  ldr s1,[sp, #0x4]
71019f0348  fsub s0,s1,s0
71019f034c  fmov s1,0x3f000000
71019f0350  fmul s0,s0,s1
71019f0354  ldr s1,[sp, #0x18]
71019f0358  fadd s8,s1,s0
71019f035c  ldr s0,[sp, #0x14]
71019f0360  str wzr,[sp, #0x170]
71019f0364  fsub s13,s13,s0
71019f0368  b 0x71019f0370
71019f036c  str wzr,[sp, #0x170]
71019f0370  ldr x0,[sp, #0x1d0]
71019f0374  stp x25,xzr,[sp, #0x1c8]
71019f0378  cbz x0,0x71019f0380
71019f037c  bl 0x710392eb40
71019f0380  ldr x0,[sp, #0x1c0]
71019f0384  stp x25,xzr,[sp, #0x1b8]
71019f0388  cbz x0,0x71019f0390
71019f038c  bl 0x710392eb40
71019f0390  ldr x19,[sp, #0x1b0]
71019f0394  adrp x8,0x710523d000
71019f0398  add x8,x8,#0x988
71019f039c  stp x8,xzr,[sp, #0x1a8]
71019f03a0  cbz x19,0x71019f03bc
71019f03a4  ldr x0,[x19, #0x18]
71019f03a8  stp x25,xzr,[x19, #0x10]
71019f03ac  cbz x0,0x71019f03b4
71019f03b0  bl 0x710392eb40
71019f03b4  mov x0,x19
71019f03b8  bl 0x710392eb40
71019f03bc  ldur x0,[x29, #-0xa0]
71019f03c0  stp x25,xzr,[x29, #-0xa8]
71019f03c4  cbz x0,0x71019f03cc
71019f03c8  bl 0x710392eb40
71019f03cc  adrp x8,0x710523d000
71019f03d0  add x8,x8,#0x988
71019f03d4  adrp x19,0x7104412000
71019f03d8  add x19,x19,#0x2ca
71019f03dc  str x8,[sp, #0x2b0]
71019f03e0  str xzr,[sp, #0x2b8]
71019f03e4  cbz x21,0x71019f0400
71019f03e8  ldr x0,[x21, #0x18]
71019f03ec  stp x25,xzr,[x21, #0x10]
71019f03f0  cbz x0,0x71019f03f8
71019f03f4  bl 0x710392eb40
71019f03f8  mov x0,x21
71019f03fc  bl 0x710392eb40
71019f0400  ldr x0,[sp, #0x2c8]
71019f0404  str x25,[sp, #0x2c0]
71019f0408  str xzr,[sp, #0x2c8]
71019f040c  cbz x0,0x71019f0414
71019f0410  bl 0x710392eb40
71019f0414  ldr x0,[sp, #0x2d8]
71019f0418  add w22,w22,#0x1
71019f041c  str x25,[sp, #0x2d0]
71019f0420  str xzr,[sp, #0x2d8]
71019f0424  cbz x0,0x71019f042c
71019f0428  bl 0x710392eb40
71019f042c  ldr x8,[sp, #0x120]
71019f0430  add x20,x20,#0x8
71019f0434  cmp x20,x8
71019f0438  b.ne 0x71019ee300
71019f043c  cmp w22,#0x5a
71019f0440  b.gt 0x71019f04d8
71019f0444  adrp x19,0x7104412000
71019f0448  add x19,x19,#0x2ca
71019f044c  adrp x20,0x710436b000
71019f0450  add x20,x20,#0xc2e
71019f0454  add x8,sp,#0x190
71019f0458  mov x0,x24
71019f045c  mov x1,x19
71019f0460  mov w2,w22
71019f0464  bl 0x7103776910
71019f0468  ldr x21,[sp, #0x198]
71019f046c  ldr x8,[x21]
71019f0470  cbz x8,0x71019f0480
71019f0474  ldrb w9,[x8, #0x58]
71019f0478  and w9,w9,#0xfe
71019f047c  strb w9,[x8, #0x58]
71019f0480  add x8,sp,#0x268
71019f0484  mov x0,x24
71019f0488  mov x1,x20
71019f048c  mov w2,w22
71019f0490  bl 0x7103776910
71019f0494  ldr x0,[sp, #0x270]
71019f0498  ldr x8,[x0]
71019f049c  cbz x8,0x71019f04ac
71019f04a0  ldrb w9,[x8, #0x58]
71019f04a4  and w9,w9,#0xfe
71019f04a8  strb w9,[x8, #0x58]
71019f04ac  str x25,[sp, #0x268]
71019f04b0  str xzr,[sp, #0x270]
71019f04b4  cbz x0,0x71019f04bc
71019f04b8  bl 0x710392eb40
71019f04bc  stp x25,xzr,[sp, #0x190]
71019f04c0  cbz x21,0x71019f04cc
71019f04c4  mov x0,x21
71019f04c8  bl 0x710392eb40
71019f04cc  cmp w22,#0x5a
71019f04d0  add w22,w22,#0x1
71019f04d4  b.lt 0x71019f0454
71019f04d8  ldr x8,[sp, #0x8]
71019f04dc  ldr x8,[x8]
71019f04e0  ldr x8,[x8]
71019f04e4  ldr x19,[x8]
71019f04e8  ldr x0,[x19, #0x458]
71019f04ec  ldr s0,[x19, #0x640]
71019f04f0  fmov s1,wzr
71019f04f4  ldr x8,[x0]
71019f04f8  fmul s0,s0,s1
71019f04fc  ldr x8,[x8, #0x58]
71019f0500  blr x8
71019f0504  ldr x20,[x19, #0x460]
71019f0508  ldr x21,[x19, #0x468]
71019f050c  cmp x20,x21
71019f0510  b.eq 0x71019f0548
71019f0514  ldr x19,[x20]
71019f0518  ldr x8,[x19]
71019f051c  ldr x8,[x8, #0x40]
71019f0520  mov x0,x19
71019f0524  blr x8
71019f0528  tbz w0,#0x0,0x71019f053c
71019f052c  ldr x8,[x19]
71019f0530  ldr x8,[x8, #0x20]
71019f0534  mov x0,x19
71019f0538  blr x8
71019f053c  add x20,x20,#0x8
71019f0540  cmp x21,x20
71019f0544  b.ne 0x71019f0514
71019f0548  str wzr,[x28, #0x218]
71019f054c  ldur x0,[x29, #-0xe8]
71019f0550  cbz x0,0x71019f055c
71019f0554  stur x0,[x29, #-0xe0]
71019f0558  bl 0x710392eb40
71019f055c  ldur x0,[x29, #-0xc8]
71019f0560  bl 0x71019f0630
71019f0564  add sp,sp,#0x380
71019f0568  ldp d9,d8,[sp, #0x30]
71019f056c  ldp d11,d10,[sp, #0x20]
71019f0570  ldp d13,d12,[sp, #0x10]
71019f0574  ldp x29,x30,[sp, #0x90]
71019f0578  ldp x20,x19,[sp, #0x80]
71019f057c  ldp x22,x21,[sp, #0x70]
71019f0580  ldp x24,x23,[sp, #0x60]
71019f0584  ldp x26,x25,[sp, #0x50]
71019f0588  ldp x28,x27,[sp, #0x40]
71019f058c  ldp d15,d14,[sp], #0xa0
71019f0590  ret
71019f0594  adrp x0,0x710532f000
71019f0598  add x0,x0,#0x4d0
71019f059c  bl 0x71039c06b0
71019f05a0  cbz w0,0x71019ebf50
71019f05a4  adrp x1,0x710532f000
71019f05a8  add x1,x1,#0x4a0
71019f05ac  orr w8,wzr,#0xffffff
71019f05b0  adrp x0,0x710353d000
71019f05b4  add x0,x0,#0xb50
71019f05b8  str w8,[x1]
71019f05bc  adrp x2,0x7104f17000
71019f05c0  add x2,x2,#0x0
71019f05c4  bl 0x71000001c0
71019f05c8  adrp x0,0x710532f000
71019f05cc  add x0,x0,#0x4d0
71019f05d0  bl 0x71039c06c0
71019f05d4  b 0x71019ebf50
71019f05d8  mov x0,x28
71019f05dc  bl 0x71039c0c00
71019f05e0  sub x0,x29,#0xe8
71019f05e4  bl 0x71039c0c00
71019f05e8  bl 0x71039c2650
