// addr:      71038ac560
// offset:    0x38ac560
// name:      FUN_71038ac560
// mangled:   
// size:      3204

71038ac560  sub sp,sp,#0xb0
71038ac564  stp x28,x27,[sp, #0x50]
71038ac568  stp x26,x25,[sp, #0x60]
71038ac56c  stp x24,x23,[sp, #0x70]
71038ac570  stp x22,x21,[sp, #0x80]
71038ac574  stp x20,x19,[sp, #0x90]
71038ac578  stp x29,x30,[sp, #0xa0]
71038ac57c  add x29,sp,#0xa0
71038ac580  ldr x8,[x0, #0xc8]
71038ac584  mov x19,x0
71038ac588  cbz x8,0x71038ac6f4
71038ac58c  ldr x8,[x8]
71038ac590  ldr x9,[x19, #0xd0]
71038ac594  cmp x8,x9
71038ac598  b.ne 0x71038ac6f4
71038ac59c  ldrb w8,[x19, #0x138]
71038ac5a0  mov x20,x1
71038ac5a4  cbnz w8,0x71038ac638
71038ac5a8  mov x24,x19
71038ac5ac  ldr x8,[x24, #0xc0]!
71038ac5b0  ldp x22,x23,[x8, #0x10]
71038ac5b4  cmp x22,x23
71038ac5b8  b.eq 0x71038ac638
71038ac5bc  add x21,x19,#0x70
71038ac5c0  ldr x8,[x22, #0x8]
71038ac5c4  add x1,x8,#0x28
71038ac5c8  mov x0,x21
71038ac5cc  bl 0x71038ad1f0
71038ac5d0  ldr x8,[x0, #0x10]
71038ac5d4  cbz x8,0x71038ac62c
71038ac5d8  ldr x8,[x8]
71038ac5dc  ldr x9,[x0, #0x18]
71038ac5e0  cmp x8,x9
71038ac5e4  b.ne 0x71038ac62c
71038ac5e8  ldr x8,[x0, #0x8]
71038ac5ec  ldr x9,[x8, #0x20]
71038ac5f0  cbz x9,0x71038ac62c
71038ac5f4  ldr x9,[x9]
71038ac5f8  ldr x10,[x8, #0x28]
71038ac5fc  cmp x9,x10
71038ac600  b.ne 0x71038ac62c
71038ac604  ldr x9,[x22, #0x10]
71038ac608  cbz x9,0x71038ac62c
71038ac60c  ldr x9,[x9]
71038ac610  ldr x10,[x22, #0x18]
71038ac614  cmp x9,x10
71038ac618  b.ne 0x71038ac62c
71038ac61c  ldr x8,[x8, #0x18]
71038ac620  ldr x9,[x22, #0x8]
71038ac624  cmp x8,x9
71038ac628  b.eq 0x71038ad01c
71038ac62c  add x22,x22,#0x20
71038ac630  cmp x23,x22
71038ac634  b.ne 0x71038ac5c0
71038ac638  ldr x8,[x19, #0x88]
71038ac63c  add x21,x19,#0x70
71038ac640  cbz x8,0x71038acc60
71038ac644  adrp x25,0x71052a8000
71038ac648  ldr x22,[x19, #0x80]
71038ac64c  ldr x25,[x25, #0xa70]
71038ac650  adrp x24,0x7104f61000
71038ac654  add x24,x24,#0xe38
71038ac658  cbz x22,0x71038ac6cc
71038ac65c  ldr x26,[x22]
71038ac660  ldr x8,[x22, #0x38]
71038ac664  str x24,[x22, #0x28]
71038ac668  cbz x8,0x71038ac690
71038ac66c  ldr x8,[x8]
71038ac670  ldr x9,[x22, #0x40]
71038ac674  cmp x8,x9
71038ac678  b.ne 0x71038ac690
71038ac67c  ldr x0,[x22, #0x30]
71038ac680  cbz x0,0x71038ac690
71038ac684  ldr x8,[x0]
71038ac688  ldr x8,[x8, #0x8]
71038ac68c  blr x8
71038ac690  ldrb w8,[x22, #0x10]
71038ac694  tbz w8,#0x0,0x71038ac6b0
71038ac698  ldr x23,[x22, #0x20]
71038ac69c  cbz x25,0x71038ac6a8
71038ac6a0  mov x0,x23
71038ac6a4  bl 0x71039c19b0
71038ac6a8  mov x0,x23
71038ac6ac  bl 0x710392eb40
71038ac6b0  cbz x25,0x71038ac6bc
71038ac6b4  mov x0,x22
71038ac6b8  bl 0x71039c19b0
71038ac6bc  mov x0,x22
71038ac6c0  bl 0x710392eb40
71038ac6c4  mov x22,x26
71038ac6c8  cbnz x22,0x71038ac65c
71038ac6cc  ldr x10,[x19, #0x78]
71038ac6d0  str xzr,[x19, #0x80]
71038ac6d4  cbz x10,0x71038acc5c
71038ac6d8  sub x9,x10,#0x1
71038ac6dc  and x8,x10,#0x3
71038ac6e0  cmp x9,#0x3
71038ac6e4  b.cs 0x71038acbf8
71038ac6e8  mov x9,xzr
71038ac6ec  cbnz x8,0x71038acc40
71038ac6f0  b 0x71038acc5c
71038ac6f4  ldr x8,[x19, #0x88]
71038ac6f8  add x20,x19,#0x70
71038ac6fc  cbz x8,0x71038ac818
71038ac700  adrp x24,0x71052a8000
71038ac704  ldr x21,[x19, #0x80]
71038ac708  ldr x24,[x24, #0xa70]
71038ac70c  adrp x23,0x7104f61000
71038ac710  add x23,x23,#0xe38
71038ac714  cbz x21,0x71038ac788
71038ac718  ldr x25,[x21]
71038ac71c  ldr x8,[x21, #0x38]
71038ac720  str x23,[x21, #0x28]
71038ac724  cbz x8,0x71038ac74c
71038ac728  ldr x8,[x8]
71038ac72c  ldr x9,[x21, #0x40]
71038ac730  cmp x8,x9
71038ac734  b.ne 0x71038ac74c
71038ac738  ldr x0,[x21, #0x30]
71038ac73c  cbz x0,0x71038ac74c
71038ac740  ldr x8,[x0]
71038ac744  ldr x8,[x8, #0x8]
71038ac748  blr x8
71038ac74c  ldrb w8,[x21, #0x10]
71038ac750  tbz w8,#0x0,0x71038ac76c
71038ac754  ldr x22,[x21, #0x20]
71038ac758  cbz x24,0x71038ac764
71038ac75c  mov x0,x22
71038ac760  bl 0x71039c19b0
71038ac764  mov x0,x22
71038ac768  bl 0x710392eb40
71038ac76c  cbz x24,0x71038ac778
71038ac770  mov x0,x21
71038ac774  bl 0x71039c19b0
71038ac778  mov x0,x21
71038ac77c  bl 0x710392eb40
71038ac780  mov x21,x25
71038ac784  cbnz x21,0x71038ac718
71038ac788  ldr x10,[x19, #0x78]
71038ac78c  str xzr,[x19, #0x80]
71038ac790  cbz x10,0x71038ac814
71038ac794  sub x9,x10,#0x1
71038ac798  and x8,x10,#0x3
71038ac79c  cmp x9,#0x3
71038ac7a0  b.cs 0x71038ac7b0
71038ac7a4  mov x9,xzr
71038ac7a8  cbnz x8,0x71038ac7f8
71038ac7ac  b 0x71038ac814
71038ac7b0  mov x9,xzr
71038ac7b4  sub x10,x10,x8
71038ac7b8  ldr x11,[x20]
71038ac7bc  lsl x12,x9,#0x3
71038ac7c0  add x9,x9,#0x4
71038ac7c4  str xzr,[x11, x12, LSL #0x0]
71038ac7c8  ldr x11,[x20]
71038ac7cc  add x11,x11,x12
71038ac7d0  str xzr,[x11, #0x8]
71038ac7d4  ldr x11,[x20]
71038ac7d8  add x11,x11,x12
71038ac7dc  str xzr,[x11, #0x10]
71038ac7e0  ldr x11,[x20]
71038ac7e4  add x11,x11,x12
71038ac7e8  cmp x10,x9
71038ac7ec  str xzr,[x11, #0x18]
71038ac7f0  b.ne 0x71038ac7b8
71038ac7f4  cbz x8,0x71038ac814
71038ac7f8  lsl x9,x9,#0x3
71038ac7fc  neg x8,x8
71038ac800  ldr x10,[x20]
71038ac804  str xzr,[x10, x9, LSL #0x0]
71038ac808  add x9,x9,#0x8
71038ac80c  adds x8,x8,#0x1
71038ac810  b.ne 0x71038ac800
71038ac814  str xzr,[x19, #0x88]
71038ac818  mov w2,#0x3b0
71038ac81c  add x0,sp,#0x48
71038ac820  mov w1,#0x10
71038ac824  bl 0x710392e1f0
71038ac828  cmp w0,#0xc
71038ac82c  b.ne 0x71038ac868
71038ac830  adrp x8,0x710593d000
71038ac834  ldr x0,[x8, #0x2b0]
71038ac838  cbz x0,0x71038ac868
71038ac83c  mov w8,#0x3b0
71038ac840  str x8,[sp, #0x20]
71038ac844  ldr x8,[x0]
71038ac848  ldr x8,[x8, #0x30]
71038ac84c  add x1,sp,#0x20
71038ac850  blr x8
71038ac854  tbz w0,#0x0,0x71038ac868
71038ac858  mov w2,#0x3b0
71038ac85c  add x0,sp,#0x48
71038ac860  mov w1,#0x10
71038ac864  bl 0x710392e1f0
71038ac868  adrp x22,0x71052a8000
71038ac86c  ldr x22,[x22, #0xa78]
71038ac870  cbz x22,0x71038ac884
71038ac874  ldr x2,[sp, #0x48]
71038ac878  mov w0,#0x3b0
71038ac87c  mov w1,#0x10
71038ac880  bl 0x71039c19e0
71038ac884  ldr x21,[sp, #0x48]
71038ac888  adrp x8,0x7105233000
71038ac88c  add x8,x8,#0xb78
71038ac890  stp xzr,xzr,[sp, #0x30]
71038ac894  stp x8,xzr,[sp, #0x20]
71038ac898  add x1,sp,#0x20
71038ac89c  mov x0,x21
71038ac8a0  bl 0x71038ae0b0
71038ac8a4  cbz x21,0x71038ac8b8
71038ac8a8  ldr x25,[x21, #0x8]
71038ac8ac  ldr x8,[x25]
71038ac8b0  str x8,[sp, #0x10]
71038ac8b4  b 0x71038ac8c0
71038ac8b8  mov x25,xzr
71038ac8bc  str xzr,[sp, #0x10]
71038ac8c0  mov w8,#0x12
71038ac8c4  stp xzr,xzr,[sp, #0x20]
71038ac8c8  strb w8,[sp, #0x20]
71038ac8cc  add x8,sp,#0x20
71038ac8d0  orr x24,x8,#0x1
71038ac8d4  adrp x8,0x7104453000
71038ac8d8  add x8,x8,#0x570
71038ac8dc  ldr x8,[x8]
71038ac8e0  stur x8,[sp, #0x21]
71038ac8e4  mov w8,#0x6c
71038ac8e8  mov w1,#0x9
71038ac8ec  mov x0,x24
71038ac8f0  str xzr,[sp, #0x30]
71038ac8f4  sturh w8,[sp, #0x29]
71038ac8f8  bl 0x7102677830
71038ac8fc  ldr x28,[x19, #0x78]
71038ac900  mov x23,x0
71038ac904  str x25,[sp, #0x18]
71038ac908  cbz x28,0x71038ac930
71038ac90c  sub x26,x28,#0x1
71038ac910  ands x8,x26,x28
71038ac914  b.eq 0x71038ac934
71038ac918  cmp x23,x28
71038ac91c  mov x27,x23
71038ac920  b.cc 0x71038ac938
71038ac924  udiv x9,x23,x28
71038ac928  msub x27,x9,x28,x23
71038ac92c  b 0x71038ac938
71038ac930  b 0x71038aca6c
71038ac934  and x27,x26,x23
71038ac938  ldr x9,[x20]
71038ac93c  ldr x9,[x9, x27, LSL #0x3]
71038ac940  cbz x9,0x71038aca6c
71038ac944  ldr x22,[x9]
71038ac948  cbz x22,0x71038aca64
71038ac94c  cbz x8,0x71038ac9e4
71038ac950  add x8,sp,#0x20
71038ac954  orr x26,x8,#0x1
71038ac958  ldr x8,[x22, #0x8]
71038ac95c  cmp x8,x23
71038ac960  b.eq 0x71038ac97c
71038ac964  cmp x8,x28
71038ac968  b.cc 0x71038ac974
71038ac96c  udiv x9,x8,x28
71038ac970  msub x8,x9,x28,x8
71038ac974  cmp x8,x27
71038ac978  b.ne 0x71038aca64
71038ac97c  ldrb w9,[x22, #0x10]
71038ac980  ldr x10,[x22, #0x18]
71038ac984  lsr x8,x9,#0x1
71038ac988  tst w9,#0x1
71038ac98c  csel x10,x8,x10,eq
71038ac990  cmp x10,#0x9
71038ac994  b.ne 0x71038ac9d8
71038ac998  tbnz w9,#0x0,0x71038ac9c4
71038ac99c  mov x9,xzr
71038ac9a0  add x10,x22,x9
71038ac9a4  ldrb w10,[x10, #0x11]
71038ac9a8  ldrb w11,[x26, x9, LSL ]
71038ac9ac  cmp w10,w11
71038ac9b0  b.ne 0x71038ac9d8
71038ac9b4  add x9,x9,#0x1
71038ac9b8  cmp x8,x9
71038ac9bc  b.ne 0x71038ac9a0
71038ac9c0  b 0x71038acfac
71038ac9c4  ldr x0,[x22, #0x20]
71038ac9c8  mov x1,x24
71038ac9cc  mov w2,#0x9
71038ac9d0  bl 0x71039c0250
71038ac9d4  cbz w0,0x71038acfac
71038ac9d8  ldr x22,[x22]
71038ac9dc  cbnz x22,0x71038ac958
71038ac9e0  b 0x71038aca64
71038ac9e4  add x8,sp,#0x20
71038ac9e8  orr x25,x8,#0x1
71038ac9ec  ldr x8,[x22, #0x8]
71038ac9f0  and x9,x8,x26
71038ac9f4  cmp x8,x23
71038ac9f8  ccmp x9,x27,#0x4,ne
71038ac9fc  b.ne 0x71038aca64
71038aca00  ldrb w9,[x22, #0x10]
71038aca04  ldr x10,[x22, #0x18]
71038aca08  lsr x8,x9,#0x1
71038aca0c  tst w9,#0x1
71038aca10  csel x10,x8,x10,eq
71038aca14  cmp x10,#0x9
71038aca18  b.ne 0x71038aca5c
71038aca1c  tbnz w9,#0x0,0x71038aca48
71038aca20  mov x9,xzr
71038aca24  add x10,x22,x9
71038aca28  ldrb w10,[x10, #0x11]
71038aca2c  ldrb w11,[x25, x9, LSL ]
71038aca30  cmp w10,w11
71038aca34  b.ne 0x71038aca5c
71038aca38  add x9,x9,#0x1
71038aca3c  cmp x8,x9
71038aca40  b.ne 0x71038aca24
71038aca44  b 0x71038acfac
71038aca48  ldr x0,[x22, #0x20]
71038aca4c  mov x1,x24
71038aca50  mov w2,#0x9
71038aca54  bl 0x71039c0250
71038aca58  cbz w0,0x71038acfac
71038aca5c  ldr x22,[x22]
71038aca60  cbnz x22,0x71038ac9ec
71038aca64  adrp x22,0x71052a8000
71038aca68  ldr x22,[x22, #0xa78]
71038aca6c  mov w2,#0x48
71038aca70  add x0,sp,#0x40
71038aca74  mov w1,#0x10
71038aca78  bl 0x710392e1f0
71038aca7c  cmp w0,#0xc
71038aca80  b.ne 0x71038acabc
71038aca84  adrp x8,0x710593d000
71038aca88  ldr x0,[x8, #0x2b0]
71038aca8c  cbz x0,0x71038acabc
71038aca90  mov w8,#0x48
71038aca94  str x8,[sp, #0x48]
71038aca98  ldr x8,[x0]
71038aca9c  ldr x8,[x8, #0x30]
71038acaa0  add x1,sp,#0x48
71038acaa4  blr x8
71038acaa8  tbz w0,#0x0,0x71038acabc
71038acaac  mov w2,#0x48
71038acab0  add x0,sp,#0x40
71038acab4  mov w1,#0x10
71038acab8  bl 0x710392e1f0
71038acabc  cbz x22,0x71038acad0
71038acac0  ldr x2,[sp, #0x40]
71038acac4  mov w0,#0x48
71038acac8  mov w1,#0x10
71038acacc  bl 0x71039c19e0
71038acad0  ldr x22,[sp, #0x40]
71038acad4  ldp x8,x9,[sp, #0x20]
71038acad8  ldr x10,[sp, #0x30]
71038acadc  mov x24,x22
71038acae0  adrp x25,0x7104f61000
71038acae4  add x25,x25,#0xe38
71038acae8  stp x9,x10,[x22, #0x18]
71038acaec  str x8,[x22, #0x10]
71038acaf0  stp xzr,xzr,[sp, #0x28]
71038acaf4  str xzr,[sp, #0x20]
71038acaf8  str xzr,[x24, #0x30]!
71038acafc  stp xzr,xzr,[x22, #0x38]
71038acb00  str x25,[x22, #0x28]
71038acb04  stp xzr,x23,[x22]
71038acb08  ldr x8,[x19, #0x88]
71038acb0c  add x8,x8,#0x1
71038acb10  ucvtf s0,x8
71038acb14  ldr s1,[x19, #0x90]
71038acb18  cbz x28,0x71038acb2c
71038acb1c  ucvtf s2,x28
71038acb20  fmul s2,s1,s2
71038acb24  fcmp s2,s0
71038acb28  b.pl 0x71038acb9c
71038acb2c  lsl x8,x28,#0x1
71038acb30  cmp x28,#0x3
71038acb34  b.cc 0x71038acb48
71038acb38  sub x9,x28,#0x1
71038acb3c  tst x9,x28
71038acb40  cset w9,ne
71038acb44  b 0x71038acb4c
71038acb48  mov w9,#0x1
71038acb4c  fdiv s0,s0,s1
71038acb50  fcvtpu x10,s0
71038acb54  orr x8,x9,x8
71038acb58  cmp x8,x10
71038acb5c  add x26,x22,#0x10
71038acb60  csel x1,x10,x8,cc
71038acb64  mov x0,x20
71038acb68  bl 0x71038ad760
71038acb6c  ldr x28,[x19, #0x78]
71038acb70  sub x8,x28,#0x1
71038acb74  tst x8,x28
71038acb78  b.eq 0x71038acb8c
71038acb7c  cmp x23,x28
71038acb80  b.cs 0x71038acb94
71038acb84  mov x27,x23
71038acb88  b 0x71038acb9c
71038acb8c  and x27,x8,x23
71038acb90  b 0x71038acb9c
71038acb94  udiv x8,x23,x28
71038acb98  msub x27,x8,x28,x23
71038acb9c  ldr x8,[x20]
71038acba0  ldr x8,[x8, x27, LSL #0x3]
71038acba4  cbz x8,0x71038acbb4
71038acba8  ldr x9,[x8]
71038acbac  str x9,[x22]
71038acbb0  b 0x71038acf9c
71038acbb4  mov x8,x19
71038acbb8  ldr x9,[x8, #0x80]!
71038acbbc  str x9,[x22]
71038acbc0  ldur x9,[x8, #-0x10]
71038acbc4  str x22,[x8]
71038acbc8  str x8,[x9, x27, LSL #0x3]
71038acbcc  ldr x8,[x22]
71038acbd0  cbz x8,0x71038acfa0
71038acbd4  ldr x8,[x8, #0x8]
71038acbd8  sub x9,x28,#0x1
71038acbdc  tst x9,x28
71038acbe0  b.eq 0x71038acf90
71038acbe4  cmp x8,x28
71038acbe8  b.cc 0x71038acf94
71038acbec  udiv x9,x8,x28
71038acbf0  msub x8,x9,x28,x8
71038acbf4  b 0x71038acf94
71038acbf8  mov x9,xzr
71038acbfc  sub x10,x10,x8
71038acc00  ldr x11,[x21]
71038acc04  lsl x12,x9,#0x3
71038acc08  add x9,x9,#0x4
71038acc0c  str xzr,[x11, x12, LSL #0x0]
71038acc10  ldr x11,[x21]
71038acc14  add x11,x11,x12
71038acc18  str xzr,[x11, #0x8]
71038acc1c  ldr x11,[x21]
71038acc20  add x11,x11,x12
71038acc24  str xzr,[x11, #0x10]
71038acc28  ldr x11,[x21]
71038acc2c  add x11,x11,x12
71038acc30  cmp x10,x9
71038acc34  str xzr,[x11, #0x18]
71038acc38  b.ne 0x71038acc00
71038acc3c  cbz x8,0x71038acc5c
71038acc40  lsl x9,x9,#0x3
71038acc44  neg x8,x8
71038acc48  ldr x10,[x21]
71038acc4c  str xzr,[x10, x9, LSL #0x0]
71038acc50  add x9,x9,#0x8
71038acc54  adds x8,x8,#0x1
71038acc58  b.ne 0x71038acc48
71038acc5c  str xzr,[x19, #0x88]
71038acc60  mov x24,x19
71038acc64  ldr x8,[x24, #0xc0]!
71038acc68  ldp x22,x27,[x8, #0x10]
71038acc6c  cmp x22,x27
71038acc70  b.eq 0x71038acd60
71038acc74  str x24,[sp, #0x10]
71038acc78  adrp x26,0x71052a8000
71038acc7c  ldr x26,[x26, #0xa78]
71038acc80  mov w23,#0x3b0
71038acc84  adrp x28,0x710593d000
71038acc88  ldr x8,[x22, #0x8]
71038acc8c  add x1,x8,#0x28
71038acc90  mov x0,x21
71038acc94  bl 0x71038ad1f0
71038acc98  mov x24,x0
71038acc9c  add x0,sp,#0x48
71038acca0  mov w1,#0x10
71038acca4  mov x2,x23
71038acca8  bl 0x710392e1f0
71038accac  cmp w0,#0xc
71038accb0  b.ne 0x71038acce4
71038accb4  ldr x0,[x28, #0x2b0]
71038accb8  cbz x0,0x71038acce4
71038accbc  str x23,[sp, #0x20]
71038accc0  ldr x8,[x0]
71038accc4  ldr x8,[x8, #0x30]
71038accc8  add x1,sp,#0x20
71038acccc  blr x8
71038accd0  tbz w0,#0x0,0x71038acce4
71038accd4  add x0,sp,#0x48
71038accd8  mov w1,#0x10
71038accdc  mov x2,x23
71038acce0  bl 0x710392e1f0
71038acce4  cbz x26,0x71038accf8
71038acce8  ldr x2,[sp, #0x48]
71038accec  mov w1,#0x10
71038accf0  mov x0,x23
71038accf4  bl 0x71039c19e0
71038accf8  ldr x25,[sp, #0x48]
71038accfc  mov x0,x25
71038acd00  mov x1,x22
71038acd04  bl 0x71038ae0b0
71038acd08  cbz x25,0x71038acd18
71038acd0c  ldr x8,[x25, #0x8]
71038acd10  ldr x9,[x8]
71038acd14  b 0x71038acd20
71038acd18  mov x8,xzr
71038acd1c  mov x9,xzr
71038acd20  ldp x0,x10,[x24, #0x8]
71038acd24  stp x25,x8,[x24, #0x8]
71038acd28  ldr x8,[x24, #0x18]
71038acd2c  str x9,[x24, #0x18]
71038acd30  cbz x10,0x71038acd50
71038acd34  cbz x0,0x71038acd50
71038acd38  ldr x9,[x10]
71038acd3c  cmp x9,x8
71038acd40  b.ne 0x71038acd50
71038acd44  ldr x8,[x0]
71038acd48  ldr x8,[x8, #0x8]
71038acd4c  blr x8
71038acd50  add x22,x22,#0x20
71038acd54  cmp x27,x22
71038acd58  b.ne 0x71038acc88
71038acd5c  ldr x24,[sp, #0x10]
71038acd60  mov w8,#0x1
71038acd64  str w8,[sp, #0x18]
71038acd68  ldr x8,[x24]
71038acd6c  ldp x28,x26,[x8, #0x10]
71038acd70  cmp x28,x26
71038acd74  b.eq 0x71038acf70
71038acd78  add x27,x19,#0x70
71038acd7c  add x22,x19,#0x10
71038acd80  mov w21,#0x1
71038acd84  stp x27,x26,[sp, #0x8]
71038acd88  ldr x24,[x28, #0x8]
71038acd8c  add x1,x24,#0x28
71038acd90  mov x0,x27
71038acd94  bl 0x71038ad1f0
71038acd98  ldr x8,[x0, #0x10]
71038acd9c  cbz x8,0x71038acf64
71038acda0  ldr x8,[x8]
71038acda4  ldr x9,[x0, #0x18]
71038acda8  cmp x8,x9
71038acdac  b.ne 0x71038acf64
71038acdb0  ldr x23,[x0, #0x8]
71038acdb4  ldr x25,[x19, #0x20]
71038acdb8  cbz x25,0x71038ace28
71038acdbc  ldr w8,[sp, #0x18]
71038acdc0  tbz w8,#0x0,0x71038acde4
71038acdc4  add x2,x25,#0x10
71038acdc8  add x3,x25,#0x20
71038acdcc  mov x0,x23
71038acdd0  mov x1,x20
71038acdd4  bl 0x71038af680
71038acdd8  ldr x25,[x25]
71038acddc  cbnz x25,0x71038acdc4
71038acde0  b 0x71038ace28
71038acde4  ldr w8,[x25, #0x18]
71038acde8  cmp w8,#0x16e
71038acdec  b.cs 0x71038ad058
71038acdf0  lsr x9,x8,#0x3
71038acdf4  lsl x8,x21,x8
71038acdf8  and x9,x9,#0x1ffffff8
71038acdfc  add x9,x19,x9
71038ace00  ldr x9,[x9, #0xd8]
71038ace04  tst x9,x8
71038ace08  b.eq 0x71038ace20
71038ace0c  add x2,x25,#0x10
71038ace10  add x3,x25,#0x20
71038ace14  mov x0,x23
71038ace18  mov x1,x20
71038ace1c  bl 0x71038af680
71038ace20  ldr x25,[x25]
71038ace24  cbnz x25,0x71038acde4
71038ace28  ldr w8,[sp, #0x18]
71038ace2c  tbz w8,#0x0,0x71038acf20
71038ace30  bl 0x71038cd8c0
71038ace34  ldr x8,[x24, #0x110]
71038ace38  ldur x27,[x8, #-0x8]
71038ace3c  ldr x8,[x27, #0x90]
71038ace40  sub x9,x8,#0x88
71038ace44  cmp x8,#0x0
71038ace48  csel x25,xzr,x9,eq
71038ace4c  cmp x27,x25
71038ace50  b.eq 0x71038acf20
71038ace54  add x24,x0,#0x30
71038ace58  ldr w26,[x25, #0x8]
71038ace5c  mov x0,x22
71038ace60  mov w1,w26
71038ace64  bl 0x71038ab050
71038ace68  cbnz x0,0x71038aceac
71038ace6c  ldrb w8,[x25, #0x38]
71038ace70  cbz w8,0x71038ace88
71038ace74  add x3,x25,#0x40
71038ace78  mov x0,x23
71038ace7c  mov x1,x20
71038ace80  mov x2,x25
71038ace84  b 0x71038acea8
71038ace88  mov x0,x24
71038ace8c  mov w1,w26
71038ace90  bl 0x710368a270
71038ace94  cbz x0,0x71038aceac
71038ace98  add x2,x0,#0x10
71038ace9c  add x3,x0,#0x20
71038acea0  mov x0,x23
71038acea4  mov x1,x20
71038acea8  bl 0x71038af680
71038aceac  ldr x8,[x25, #0x98]!
71038aceb0  cbz x8,0x71038acec8
71038aceb4  ldr x8,[x25]
71038aceb8  mov x25,x8
71038acebc  ldr x9,[x25, #0x8]!
71038acec0  cbnz x9,0x71038aceb4
71038acec4  b 0x71038acf0c
71038acec8  sub x9,x25,#0x10
71038acecc  ldr x8,[x9]
71038aced0  and x8,x8,#-0x2
71038aced4  ldr x10,[x8, #0x10]
71038aced8  cmp x10,x9
71038acedc  b.eq 0x71038acee8
71038acee0  mov x10,xzr
71038acee4  b 0x71038acf04
71038acee8  mov x9,x8
71038aceec  ldr x8,[x8]
71038acef0  and x8,x8,#-0x2
71038acef4  ldr x10,[x8, #0x10]
71038acef8  cmp x9,x10
71038acefc  b.eq 0x71038acee8
71038acf00  ldr x10,[x9, #0x10]
71038acf04  cmp x10,x8
71038acf08  csel x8,x9,x8,eq
71038acf0c  sub x9,x8,#0x88
71038acf10  cmp x8,#0x0
71038acf14  csel x25,xzr,x9,eq
71038acf18  cmp x27,x25
71038acf1c  b.ne 0x71038ace58
71038acf20  ldr x23,[x23, #0x398]
71038acf24  ldp x27,x26,[sp, #0x8]
71038acf28  cbz x23,0x71038acf64
71038acf2c  ldr x24,[x23, #0x20]
71038acf30  ldr x0,[x24, #0x50]
71038acf34  cbz x0,0x71038acf5c
71038acf38  ldp x1,x8,[x24, #0x58]
71038acf3c  sub x2,x8,x1
71038acf40  bl 0x71039c00e0
71038acf44  ldr x0,[x24, #0x38]
71038acf48  str xzr,[x24, #0x50]
71038acf4c  ldr x1,[x20, #0x8]
71038acf50  ldr x8,[x0]
71038acf54  ldr x8,[x8, #0x18]
71038acf58  blr x8
71038acf5c  ldr x23,[x23]
71038acf60  cbnz x23,0x71038acf2c
71038acf64  add x28,x28,#0x20
71038acf68  cmp x28,x26
71038acf6c  b.ne 0x71038acd88
71038acf70  ldr x9,[x19, #0x100]
71038acf74  add x8,x19,#0x138
71038acf78  str xzr,[x19, #0xd8]
71038acf7c  stp xzr,xzr,[x19, #0xf0]
71038acf80  and x9,x9,#-0x400000000000
71038acf84  stp xzr,xzr,[x19, #0xe0]
71038acf88  str x9,[x19, #0x100]
71038acf8c  b 0x71038acff8
71038acf90  and x8,x8,x9
71038acf94  ldr x9,[x20]
71038acf98  add x8,x9,x8, LSL #0x3
71038acf9c  str x22,[x8]
71038acfa0  ldr x8,[x19, #0x88]
71038acfa4  add x8,x8,#0x1
71038acfa8  str x8,[x19, #0x88]
71038acfac  cbz x21,0x71038acfbc
71038acfb0  ldr x8,[x21, #0x8]
71038acfb4  ldr x9,[x8]
71038acfb8  b 0x71038acfc4
71038acfbc  mov x8,xzr
71038acfc0  mov x9,xzr
71038acfc4  ldp x0,x10,[x22, #0x30]
71038acfc8  stp x21,x8,[x22, #0x30]
71038acfcc  ldr x8,[x22, #0x40]
71038acfd0  str x9,[x22, #0x40]
71038acfd4  cbz x10,0x71038acff4
71038acfd8  cbz x0,0x71038acff4
71038acfdc  ldr x9,[x10]
71038acfe0  cmp x9,x8
71038acfe4  b.ne 0x71038acff4
71038acfe8  ldr x8,[x0]
71038acfec  ldr x8,[x8, #0x8]
71038acff0  blr x8
71038acff4  add x8,x19,#0x138
71038acff8  strb wzr,[x8]
71038acffc  ldp x29,x30,[sp, #0xa0]
71038ad000  ldp x20,x19,[sp, #0x90]
71038ad004  ldp x22,x21,[sp, #0x80]
71038ad008  ldp x24,x23,[sp, #0x70]
71038ad00c  ldp x26,x25,[sp, #0x60]
71038ad010  ldp x28,x27,[sp, #0x50]
71038ad014  add sp,sp,#0xb0
71038ad018  ret
71038ad01c  ldr x8,[x19, #0xd8]
71038ad020  cbnz x8,0x71038ad050
71038ad024  ldr x8,[x19, #0xe0]
71038ad028  cbnz x8,0x71038ad050
71038ad02c  ldr x8,[x19, #0xe8]
71038ad030  cbnz x8,0x71038ad050
71038ad034  ldr x8,[x19, #0xf0]
71038ad038  cbnz x8,0x71038ad050
71038ad03c  ldr x8,[x19, #0xf8]
71038ad040  cbnz x8,0x71038ad050
71038ad044  ldr x8,[x19, #0x100]
71038ad048  tst x8,#0x3fffffffffff
71038ad04c  b.eq 0x71038acffc
71038ad050  str wzr,[sp, #0x18]
71038ad054  b 0x71038acd68
71038ad058  mov w0,#0x10
71038ad05c  bl 0x71039c6c40
71038ad060  mov x20,x0
71038ad064  adrp x1,0x7104464000
71038ad068  add x1,x1,#0x611
71038ad06c  bl 0x71039c5f10
71038ad070  adrp x8,0x71052a8000
71038ad074  ldr x8,[x8, #0xb30]
71038ad078  add x8,x8,#0x10
71038ad07c  str x8,[x20]
71038ad080  adrp x1,0x71052a8000
71038ad084  adrp x2,0x71052a8000
71038ad088  ldr x1,[x1, #0xb38]
71038ad08c  ldr x2,[x2, #0xb40]
71038ad090  mov x0,x20
71038ad094  bl 0x71039c6c50
71038ad098  mov x19,x0
71038ad09c  mov x0,x20
71038ad0a0  bl 0x71039c6c60
71038ad0a4  mov x0,x19
71038ad0a8  bl 0x71039c19f0
71038ad0ac  mov x19,x0
71038ad0b0  cbz x22,0x71038ad140
71038ad0b4  ldr x8,[x22, #0x38]
71038ad0b8  str x25,[x22, #0x28]
71038ad0bc  cbz x8,0x71038ad0e4
71038ad0c0  ldr x8,[x8]
71038ad0c4  ldr x9,[x22, #0x40]
71038ad0c8  cmp x8,x9
71038ad0cc  b.ne 0x71038ad0e4
71038ad0d0  ldr x0,[x24]
71038ad0d4  cbz x0,0x71038ad0e4
71038ad0d8  ldr x8,[x0]
71038ad0dc  ldr x8,[x8, #0x8]
71038ad0e0  blr x8
71038ad0e4  ldrb w8,[x26]
71038ad0e8  tbz w8,#0x0,0x71038ad10c
71038ad0ec  adrp x8,0x71052a8000
71038ad0f0  ldr x20,[x22, #0x20]
71038ad0f4  ldr x8,[x8, #0xa70]
71038ad0f8  cbz x8,0x71038ad104
71038ad0fc  mov x0,x20
71038ad100  bl 0x71039c19b0
71038ad104  mov x0,x20
71038ad108  bl 0x710392eb40
71038ad10c  adrp x8,0x71052a8000
71038ad110  ldr x8,[x8, #0xa70]
71038ad114  cbz x8,0x71038ad120
71038ad118  mov x0,x22
71038ad11c  bl 0x71039c19b0
71038ad120  mov x0,x22
71038ad124  bl 0x710392eb40
71038ad128  ldr x8,[sp, #0x18]
71038ad12c  cbnz x8,0x71038ad150
71038ad130  b 0x71038ad148
71038ad134  bl 0x71037b2bc0
71038ad138  bl 0x71037b2bc0
71038ad13c  mov x19,x0
71038ad140  ldr x8,[sp, #0x18]
71038ad144  cbnz x8,0x71038ad150
71038ad148  mov x0,x19
71038ad14c  bl 0x71039c19f0
71038ad150  cbz x21,0x71038ad148
71038ad154  ldp x9,x8,[sp, #0x10]
71038ad158  ldr x8,[x8]
71038ad15c  cmp x8,x9
71038ad160  b.ne 0x71038ad148
71038ad164  ldr x8,[x21]
71038ad168  ldr x8,[x8, #0x8]
71038ad16c  mov x0,x21
71038ad170  blr x8
71038ad174  mov x0,x19
71038ad178  bl 0x71039c19f0
71038ad17c  adrp x8,0x71052a8000
71038ad180  ldr x8,[x8, #0xa70]
71038ad184  mov x19,x0
71038ad188  cbz x8,0x71038ad194
71038ad18c  mov x0,x21
71038ad190  bl 0x71039c19b0
71038ad194  mov x0,x21
71038ad198  bl 0x710392eb40
71038ad19c  mov x0,x19
71038ad1a0  bl 0x71039c19f0
71038ad1a4  bl 0x71037b2bc0
71038ad1a8  bl 0x71037b2bc0
71038ad1ac  bl 0x71037b2bc0
71038ad1b0  bl 0x71037b2bc0
71038ad1b4  adrp x8,0x71052a8000
71038ad1b8  ldr x8,[x8, #0xa70]
71038ad1bc  mov x19,x0
71038ad1c0  cbz x8,0x71038ad1cc
71038ad1c4  mov x0,x25
71038ad1c8  bl 0x71039c19b0
71038ad1cc  mov x0,x25
71038ad1d0  bl 0x710392eb40
71038ad1d4  mov x0,x19
71038ad1d8  bl 0x71039c19f0
71038ad1dc  bl 0x71037b2bc0
71038ad1e0  bl 0x71037b2bc0
