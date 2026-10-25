// addr:      71037fb770
// offset:    0x37fb770
// name:      FUN_71037fb770
// mangled:   
// size:      8608

71037fb770  stp x28,x27,[sp, #-0x60]!
71037fb774  stp x26,x25,[sp, #0x10]
71037fb778  stp x24,x23,[sp, #0x20]
71037fb77c  stp x22,x21,[sp, #0x30]
71037fb780  stp x20,x19,[sp, #0x40]
71037fb784  stp x29,x30,[sp, #0x50]
71037fb788  add x29,sp,#0x50
71037fb78c  sub sp,sp,#0x370
71037fb790  mov x19,x8
71037fb794  ldr w8,[x1]
71037fb798  orr x9,xzr,#0x100000000
71037fb79c  stur x9,[x0, #0x34]
71037fb7a0  adrp x9,0x7105265000
71037fb7a4  add x9,x9,#0xbf8
71037fb7a8  str w8,[x0, #0x30]
71037fb7ac  ldrb w8,[x1, #0x18]
71037fb7b0  strb w8,[x0, #0x3c]
71037fb7b4  ldrb w8,[x1, #0x38]
71037fb7b8  str x9,[sp, #0x150]
71037fb7bc  add x9,sp,#0x150
71037fb7c0  mov x25,x1
71037fb7c4  mov x20,x0
71037fb7c8  str x9,[sp, #0x170]
71037fb7cc  mov w9,#0x1
71037fb7d0  strb w8,[sp, #0x158]
71037fb7d4  adrp x8,0x7105941000
71037fb7d8  add x8,x8,#0x908
71037fb7dc  ldaxr w10,[x8]
71037fb7e0  stlxr w11,w9,[x8]
71037fb7e4  cbnz w11,0x71037fb7dc
71037fb7e8  cbnz w10,0x71037fb83c
71037fb7ec  adrp x22,0x71037fe000
71037fb7f0  add x22,x22,#0x4e0
71037fb7f4  adrp x23,0x71037fe000
71037fb7f8  add x23,x23,#0x5a0
71037fb7fc  adrp x24,0x71037fe000
71037fb800  add x24,x24,#0x5e0
71037fb804  mov x0,x22
71037fb808  mov x1,x23
71037fb80c  mov x2,x24
71037fb810  mov x3,xzr
71037fb814  bl 0x71039c8070
71037fb818  adrp x0,0x7105942000
71037fb81c  add x0,x0,#0x0
71037fb820  mov w1,#0x1400000
71037fb824  bl 0x71039c8080
71037fb828  mov x0,x22
71037fb82c  mov x1,x23
71037fb830  mov x2,x24
71037fb834  mov x3,xzr
71037fb838  bl 0x71039c8090
71037fb83c  ldr x0,[sp, #0x170]
71037fb840  cbz x0,0x71037fd344
71037fb844  ldr x8,[x0]
71037fb848  ldr x8,[x8, #0x30]
71037fb84c  blr x8
71037fb850  mov w0,#0x10
71037fb854  orr w1,wzr,#0x3000
71037fb858  bl 0x710392e290
71037fb85c  mov x22,x0
71037fb860  cbnz x0,0x71037fb8ac
71037fb864  adrp x8,0x7105332000
71037fb868  ldr x0,[x8, #0xf00]
71037fb86c  cbz x0,0x71037fb8a8
71037fb870  orr w8,wzr,#0x3000
71037fb874  str wzr,[sp, #0x190]
71037fb878  add x1,sp,#0x190
71037fb87c  str x8,[sp, #0x1d8]
71037fb880  ldr x8,[x0]
71037fb884  ldr x8,[x8, #0x30]
71037fb888  add x2,sp,#0x1d8
71037fb88c  blr x8
71037fb890  tbz w0,#0x0,0x71037fb8a8
71037fb894  mov w0,#0x10
71037fb898  orr w1,wzr,#0x3000
71037fb89c  bl 0x710392e290
71037fb8a0  mov x22,x0
71037fb8a4  cbnz x0,0x71037fb8ac
71037fb8a8  mov x22,xzr
71037fb8ac  adrp x8,0x7105940000
71037fb8b0  ldr x8,[x8, #0x8e8]
71037fb8b4  add x0,sp,#0x110
71037fb8b8  blr x8
71037fb8bc  adrp x8,0x7105940000
71037fb8c0  ldr x8,[x8, #0x900]
71037fb8c4  add x1,sp,#0x110
71037fb8c8  mov x0,x22
71037fb8cc  blr x8
71037fb8d0  tst w0,#0xff
71037fb8d4  b.eq 0x71037fc858
71037fb8d8  str x22,[x20, #0x68]
71037fb8dc  adrp x8,0x7105940000
71037fb8e0  ldr x1,[x8, #0x918]
71037fb8e4  mov x0,x22
71037fb8e8  bl 0x71037f8180
71037fb8ec  adrp x8,0x71052aa000
71037fb8f0  ldr x0,[x20, #0x68]
71037fb8f4  ldr x1,[x8, #0x340]
71037fb8f8  bl 0x7100033a40
71037fb8fc  ldr x0,[x20, #0x68]
71037fb900  adrp x27,0x7105940000
71037fb904  ldr x8,[x27, #0x920]
71037fb908  mov w1,#0x2f
71037fb90c  add x2,sp,#0x10c
71037fb910  blr x8
71037fb914  ldr x0,[x20, #0x68]
71037fb918  ldr x8,[x27, #0x920]
71037fb91c  mov w1,#0x31
71037fb920  add x2,sp,#0x108
71037fb924  blr x8
71037fb928  ldr x0,[x20, #0x68]
71037fb92c  ldr x8,[x27, #0x920]
71037fb930  mov w1,#0x2e
71037fb934  add x2,sp,#0x104
71037fb938  blr x8
71037fb93c  ldr x0,[x20, #0x68]
71037fb940  ldr x8,[x27, #0x920]
71037fb944  orr w1,wzr,#0x30
71037fb948  add x2,sp,#0x100
71037fb94c  blr x8
71037fb950  ldr x0,[x20, #0x68]
71037fb954  adrp x8,0x7105940000
71037fb958  ldr x8,[x8, #0x960]
71037fb95c  mov w1,#0x1
71037fb960  blr x8
71037fb964  ldr x0,[x20, #0x68]
71037fb968  adrp x8,0x7105940000
71037fb96c  ldr x8,[x8, #0x968]
71037fb970  mov w1,#0x1
71037fb974  blr x8
71037fb978  ldr x0,[x20, #0x68]
71037fb97c  adrp x8,0x7105940000
71037fb980  ldr x8,[x8, #0x988]
71037fb984  fmov s0,0x3f800000
71037fb988  blr x8
71037fb98c  adrp x8,0x710446a000
71037fb990  add x8,x8,#0x350
71037fb994  ldp x9,x8,[x8]
71037fb998  stp x9,x8,[sp, #0xf0]
71037fb99c  ldr x0,[x20, #0x68]
71037fb9a0  adrp x8,0x7105940000
71037fb9a4  ldr x8,[x8, #0x970]
71037fb9a8  add x1,sp,#0xf0
71037fb9ac  orr w2,wzr,#0x38
71037fb9b0  blr x8
71037fb9b4  mov x22,xzr
71037fb9b8  add x23,x20,#0x108
71037fb9bc  ldr x0,[x20, #0x68]
71037fb9c0  ldr x8,[x27, #0x920]
71037fb9c4  mov w1,w22
71037fb9c8  mov x2,x23
71037fb9cc  blr x8
71037fb9d0  add x22,x22,#0x1
71037fb9d4  add x23,x23,#0x4
71037fb9d8  cmp x22,#0x60
71037fb9dc  b.ne 0x71037fb9bc
71037fb9e0  ldr w22,[x20, #0x144]
71037fb9e4  ldr w23,[x20, #0x148]
71037fb9e8  str x19,[sp, #0x38]
71037fb9ec  ldr w24,[x20, #0x14c]
71037fb9f0  stp w22,w23,[x20, #0xf8]
71037fb9f4  ldr w21,[x20, #0x150]
71037fb9f8  str w24,[x20, #0x100]
71037fb9fc  str w21,[x20, #0x104]
71037fba00  mov w2,#0x31a0
71037fba04  ldp x19,x8,[x25, #0x20]
71037fba08  add x0,sp,#0x190
71037fba0c  ldp w26,w28,[x25, #0x30]
71037fba10  mov w1,#0x10
71037fba14  str x8,[sp, #0x30]
71037fba18  bl 0x710392e1f0
71037fba1c  cmp w0,#0xc
71037fba20  b.ne 0x71037fba5c
71037fba24  adrp x8,0x710593d000
71037fba28  ldr x0,[x8, #0x2b0]
71037fba2c  cbz x0,0x71037fba5c
71037fba30  mov w8,#0x31a0
71037fba34  str x8,[sp, #0x1d8]
71037fba38  ldr x8,[x0]
71037fba3c  ldr x8,[x8, #0x30]
71037fba40  add x1,sp,#0x1d8
71037fba44  blr x8
71037fba48  tbz w0,#0x0,0x71037fba5c
71037fba4c  mov w2,#0x31a0
71037fba50  add x0,sp,#0x190
71037fba54  mov w1,#0x10
71037fba58  bl 0x710392e1f0
71037fba5c  adrp x8,0x71052a8000
71037fba60  ldr x8,[x8, #0xa78]
71037fba64  cbz x8,0x71037fba78
71037fba68  ldr x2,[sp, #0x190]
71037fba6c  mov w0,#0x31a0
71037fba70  mov w1,#0x10
71037fba74  bl 0x71039c19e0
71037fba78  str w22,[sp, #0x2c]
71037fba7c  ldr x22,[sp, #0x190]
71037fba80  stp w28,w26,[sp, #0x1c]
71037fba84  stp w24,w23,[sp, #0x24]
71037fba88  stp x25,x19,[sp, #0x8]
71037fba8c  mov x0,x22
71037fba90  bl 0x71037c3a70
71037fba94  adrp x8,0x7105265000
71037fba98  add x8,x8,#0xe88
71037fba9c  mov x28,x22
71037fbaa0  mov x24,x22
71037fbaa4  mov x25,x22
71037fbaa8  str x8,[x22]
71037fbaac  str xzr,[x28, #0x10]!
71037fbab0  str xzr,[x24, #0x28]!
71037fbab4  str xzr,[x25, #0x58]!
71037fbab8  add x26,x22,#0x60
71037fbabc  add x23,x22,#0x828
71037fbac0  str xzr,[x22, #0x30]
71037fbac4  add x19,x22,#0x830
71037fbac8  stp xzr,xzr,[x22, #0x18]
71037fbacc  stp x26,x26,[x22, #0x60]
71037fbad0  str xzr,[x22, #0x840]
71037fbad4  str xzr,[x22, #0x828]
71037fbad8  str x23,[x22, #0x830]
71037fbadc  str x23,[x22, #0x838]
71037fbae0  str wzr,[x22, #0x840]
71037fbae4  mov x0,x24
71037fbae8  bl 0x71037c6f70
71037fbaec  mov w8,#0x1058
71037fbaf0  add x19,x22,x8
71037fbaf4  mov w8,#0x1060
71037fbaf8  add x24,x22,#0x858
71037fbafc  add x25,x22,#0x888
71037fbb00  str xzr,[x22, #0x860]
71037fbb04  add x26,x22,#0x890
71037fbb08  add x23,x22,x8
71037fbb0c  str xzr,[x22, #0x858]
71037fbb10  str xzr,[x22, #0x888]
71037fbb14  str x26,[x22, #0x890]
71037fbb18  str x26,[x22, #0x898]
71037fbb1c  str xzr,[x22, #0x1070]
71037fbb20  str xzr,[x22, #0x1058]
71037fbb24  str x19,[x22, #0x1060]
71037fbb28  str x19,[x22, #0x1068]
71037fbb2c  str wzr,[x22, #0x1070]
71037fbb30  mov x0,x24
71037fbb34  bl 0x71037c6f70
71037fbb38  mov w8,#0x1088
71037fbb3c  add x24,x22,x8
71037fbb40  mov w8,#0x10c0
71037fbb44  add x26,x22,x8
71037fbb48  mov w8,#0x1888
71037fbb4c  mov w9,#0x10b8
71037fbb50  add x25,x22,x9
71037fbb54  str xzr,[x22, #0x1090]
71037fbb58  str xzr,[x22, #0x1088]
71037fbb5c  add x19,x22,x8
71037fbb60  mov w8,#0x1890
71037fbb64  str xzr,[x22, #0x10b8]
71037fbb68  add x23,x22,x8
71037fbb6c  str x26,[x22, #0x10c0]
71037fbb70  str x26,[x22, #0x10c8]
71037fbb74  str xzr,[x22, #0x18a0]
71037fbb78  str xzr,[x22, #0x1888]
71037fbb7c  str x19,[x22, #0x1890]
71037fbb80  str x19,[x22, #0x1898]
71037fbb84  str wzr,[x22, #0x18a0]
71037fbb88  mov x0,x24
71037fbb8c  bl 0x71037c6f70
71037fbb90  mov w8,#0x18b8
71037fbb94  add x24,x22,x8
71037fbb98  mov w8,#0x18f0
71037fbb9c  add x26,x22,x8
71037fbba0  mov w8,#0x20b8
71037fbba4  mov w9,#0x18e8
71037fbba8  add x25,x22,x9
71037fbbac  str xzr,[x22, #0x18c0]
71037fbbb0  str xzr,[x22, #0x18b8]
71037fbbb4  add x19,x22,x8
71037fbbb8  mov w8,#0x20c0
71037fbbbc  str xzr,[x22, #0x18e8]
71037fbbc0  add x23,x22,x8
71037fbbc4  str x26,[x22, #0x18f0]
71037fbbc8  str x26,[x22, #0x18f8]
71037fbbcc  str xzr,[x22, #0x20d0]
71037fbbd0  str xzr,[x22, #0x20b8]
71037fbbd4  str x19,[x22, #0x20c0]
71037fbbd8  str x19,[x22, #0x20c8]
71037fbbdc  str wzr,[x22, #0x20d0]
71037fbbe0  mov x0,x24
71037fbbe4  bl 0x71037c6f70
71037fbbe8  mov w8,#0x20e8
71037fbbec  add x24,x22,x8
71037fbbf0  mov w8,#0x2120
71037fbbf4  add x26,x22,x8
71037fbbf8  mov w8,#0x28e8
71037fbbfc  mov w9,#0x2118
71037fbc00  add x25,x22,x9
71037fbc04  str xzr,[x22, #0x20f0]
71037fbc08  str xzr,[x22, #0x20e8]
71037fbc0c  add x19,x22,x8
71037fbc10  mov w8,#0x28f0
71037fbc14  str xzr,[x22, #0x2118]
71037fbc18  add x23,x22,x8
71037fbc1c  str x26,[x22, #0x2120]
71037fbc20  str x26,[x22, #0x2128]
71037fbc24  str xzr,[x22, #0x2900]
71037fbc28  str xzr,[x22, #0x28e8]
71037fbc2c  str x19,[x22, #0x28f0]
71037fbc30  str x19,[x22, #0x28f8]
71037fbc34  str wzr,[x22, #0x2900]
71037fbc38  mov x0,x24
71037fbc3c  bl 0x71037c6f70
71037fbc40  mov w8,#0x2918
71037fbc44  add x24,x22,x8
71037fbc48  mov w8,#0x2950
71037fbc4c  add x26,x22,x8
71037fbc50  mov w8,#0x3118
71037fbc54  mov w9,#0x2948
71037fbc58  add x25,x22,x9
71037fbc5c  str xzr,[x22, #0x2920]
71037fbc60  str xzr,[x22, #0x2918]
71037fbc64  add x19,x22,x8
71037fbc68  mov w8,#0x3120
71037fbc6c  str xzr,[x22, #0x2948]
71037fbc70  add x23,x22,x8
71037fbc74  str x26,[x22, #0x2950]
71037fbc78  str x26,[x22, #0x2958]
71037fbc7c  str xzr,[x22, #0x3130]
71037fbc80  str xzr,[x22, #0x3118]
71037fbc84  str x19,[x22, #0x3120]
71037fbc88  str x19,[x22, #0x3128]
71037fbc8c  str wzr,[x22, #0x3130]
71037fbc90  mov x0,x24
71037fbc94  bl 0x71037c6f70
71037fbc98  mov w8,#0x3160
71037fbc9c  strb wzr,[x22, x8, LSL ]
71037fbca0  mov w8,#0x3180
71037fbca4  mov w9,#0x1
71037fbca8  str xzr,[x22, #0x3158]
71037fbcac  str xzr,[x22, #0x3150]
71037fbcb0  str xzr,[x22, #0x3148]
71037fbcb4  adrp x23,0x7105335000
71037fbcb8  add x23,x23,#0xe18
71037fbcbc  str xzr,[x22, #0x3180]
71037fbcc0  str xzr,[x22, #0x3198]
71037fbcc4  str xzr,[x22, #0x3190]
71037fbcc8  str xzr,[x22, #0x3188]
71037fbccc  str xzr,[x22, #0x3178]
71037fbcd0  str xzr,[x22, #0x3170]
71037fbcd4  strh w9,[x22, x8, LSL #0x0]
71037fbcd8  mov w8,#0x3182
71037fbcdc  strb wzr,[x22, x8, LSL ]
71037fbce0  str x22,[x20, #0xe0]
71037fbce4  ldarb w8,[x23]
71037fbce8  tbz w8,#0x0,0x71037fd1d8
71037fbcec  adrp x8,0x7105335000
71037fbcf0  ldr x24,[x8, #0xbf8]
71037fbcf4  mov w8,#0x3168
71037fbcf8  add x2,x22,x8
71037fbcfc  ldr x8,[x27, #0x920]
71037fbd00  mov w1,#0x19
71037fbd04  mov x0,x24
71037fbd08  blr x8
71037fbd0c  adrp x8,0x7105940000
71037fbd10  ldr x8,[x8, #0xbd0]
71037fbd14  add x0,sp,#0x1d8
71037fbd18  blr x8
71037fbd1c  adrp x8,0x7105940000
71037fbd20  ldr x8,[x8, #0xbc8]
71037fbd24  add x0,sp,#0x1d8
71037fbd28  mov x1,x24
71037fbd2c  blr x8
71037fbd30  ldr x3,[sp, #0x30]
71037fbd34  add x1,sp,#0x1d8
71037fbd38  mov w2,#0x4
71037fbd3c  mov x0,x22
71037fbd40  bl 0x71037ff890
71037fbd44  mov w0,#0x10
71037fbd48  mov w1,#0x100
71037fbd4c  bl 0x710392e290
71037fbd50  cbnz x0,0x71037fbd98
71037fbd54  adrp x8,0x7105332000
71037fbd58  ldr x0,[x8, #0xf00]
71037fbd5c  cbz x0,0x71037fbd94
71037fbd60  mov w8,#0x100
71037fbd64  str wzr,[sp, #0x98]
71037fbd68  add x1,sp,#0x98
71037fbd6c  str x8,[sp, #0x190]
71037fbd70  ldr x8,[x0]
71037fbd74  ldr x8,[x8, #0x30]
71037fbd78  add x2,sp,#0x190
71037fbd7c  blr x8
71037fbd80  tbz w0,#0x0,0x71037fbd94
71037fbd84  mov w0,#0x10
71037fbd88  mov w1,#0x100
71037fbd8c  bl 0x710392e290
71037fbd90  cbnz x0,0x71037fbd98
71037fbd94  mov x0,xzr
71037fbd98  str x0,[x22, #0x18]
71037fbd9c  adrp x25,0x7105940000
71037fbda0  ldr x8,[x25, #0xc08]
71037fbda4  add x1,sp,#0x1d8
71037fbda8  blr x8
71037fbdac  tst w0,#0xff
71037fbdb0  b.eq 0x71037fc194
71037fbdb4  ldr x0,[x22, #0x18]
71037fbdb8  adrp x24,0x7105940000
71037fbdbc  ldr x8,[x24, #0xc10]
71037fbdc0  adrp x1,0x7104348000
71037fbdc4  add x1,x1,#0xdbf
71037fbdc8  blr x8
71037fbdcc  ldp w9,w8,[sp, #0x20]
71037fbdd0  ldr w10,[sp, #0x2c]
71037fbdd4  add w8,w9,w8
71037fbdd8  ldr w9,[sp, #0x1c]
71037fbddc  mul w8,w8,w10
71037fbde0  ldr w10,[sp, #0x28]
71037fbde4  add w9,w9,w21
71037fbde8  madd w3,w9,w10,w8
71037fbdec  mov w2,#0x5
71037fbdf0  add x1,sp,#0x1d8
71037fbdf4  mov x0,x22
71037fbdf8  bl 0x71037ff890
71037fbdfc  mov w0,#0x10
71037fbe00  mov w1,#0x100
71037fbe04  bl 0x710392e290
71037fbe08  cbnz x0,0x71037fbe50
71037fbe0c  adrp x8,0x7105332000
71037fbe10  ldr x0,[x8, #0xf00]
71037fbe14  cbz x0,0x71037fbe4c
71037fbe18  mov w8,#0x100
71037fbe1c  str wzr,[sp, #0x98]
71037fbe20  add x1,sp,#0x98
71037fbe24  str x8,[sp, #0x190]
71037fbe28  ldr x8,[x0]
71037fbe2c  ldr x8,[x8, #0x30]
71037fbe30  add x2,sp,#0x190
71037fbe34  blr x8
71037fbe38  tbz w0,#0x0,0x71037fbe4c
71037fbe3c  mov w0,#0x10
71037fbe40  mov w1,#0x100
71037fbe44  bl 0x710392e290
71037fbe48  cbnz x0,0x71037fbe50
71037fbe4c  mov x0,xzr
71037fbe50  str x0,[x22, #0x20]
71037fbe54  ldr x8,[x25, #0xc08]
71037fbe58  add x1,sp,#0x1d8
71037fbe5c  blr x8
71037fbe60  tst w0,#0xff
71037fbe64  b.eq 0x71037fc1a4
71037fbe68  ldr x0,[x22, #0x20]
71037fbe6c  ldr x8,[x24, #0xc10]
71037fbe70  adrp x1,0x7104317000
71037fbe74  add x1,x1,#0x98b
71037fbe78  blr x8
71037fbe7c  ldr x3,[sp, #0x10]
71037fbe80  add x1,sp,#0x1d8
71037fbe84  orr w2,wzr,#0x3
71037fbe88  mov x0,x22
71037fbe8c  bl 0x71037ff890
71037fbe90  mov w0,#0x10
71037fbe94  mov w1,#0x100
71037fbe98  bl 0x710392e290
71037fbe9c  cbnz x0,0x71037fbee4
71037fbea0  adrp x8,0x7105332000
71037fbea4  ldr x0,[x8, #0xf00]
71037fbea8  cbz x0,0x71037fbee0
71037fbeac  mov w8,#0x100
71037fbeb0  str wzr,[sp, #0x98]
71037fbeb4  add x1,sp,#0x98
71037fbeb8  str x8,[sp, #0x190]
71037fbebc  ldr x8,[x0]
71037fbec0  ldr x8,[x8, #0x30]
71037fbec4  add x2,sp,#0x190
71037fbec8  blr x8
71037fbecc  tbz w0,#0x0,0x71037fbee0
71037fbed0  mov w0,#0x10
71037fbed4  mov w1,#0x100
71037fbed8  bl 0x710392e290
71037fbedc  cbnz x0,0x71037fbee4
71037fbee0  mov x0,xzr
71037fbee4  str x0,[x28]
71037fbee8  ldr x8,[x25, #0xc08]
71037fbeec  add x1,sp,#0x1d8
71037fbef0  blr x8
71037fbef4  tst w0,#0xff
71037fbef8  b.eq 0x71037fc1b4
71037fbefc  ldr x0,[x28]
71037fbf00  ldr x8,[x24, #0xc10]
71037fbf04  adrp x1,0x7104307000
71037fbf08  add x1,x1,#0xe2
71037fbf0c  blr x8
71037fbf10  ldr x26,[sp, #0x8]
71037fbf14  ldp w19,w21,[x26, #0x30]
71037fbf18  add x0,sp,#0x190
71037fbf1c  mov w1,#0x10
71037fbf20  mov w2,#0x100
71037fbf24  bl 0x710392e1f0
71037fbf28  cmp w0,#0xc
71037fbf2c  b.ne 0x71037fbf68
71037fbf30  adrp x8,0x710593d000
71037fbf34  ldr x0,[x8, #0x2b0]
71037fbf38  cbz x0,0x71037fbf68
71037fbf3c  mov w8,#0x100
71037fbf40  str x8,[sp, #0x1d8]
71037fbf44  ldr x8,[x0]
71037fbf48  ldr x8,[x8, #0x30]
71037fbf4c  add x1,sp,#0x1d8
71037fbf50  blr x8
71037fbf54  tbz w0,#0x0,0x71037fbf68
71037fbf58  add x0,sp,#0x190
71037fbf5c  mov w1,#0x10
71037fbf60  mov w2,#0x100
71037fbf64  bl 0x710392e1f0
71037fbf68  adrp x8,0x71052a8000
71037fbf6c  ldr x8,[x8, #0xa78]
71037fbf70  cbz x8,0x71037fbf84
71037fbf74  ldr x2,[sp, #0x190]
71037fbf78  mov w0,#0x100
71037fbf7c  mov w1,#0x10
71037fbf80  bl 0x71039c19e0
71037fbf84  ldr x22,[sp, #0x190]
71037fbf88  mov x0,x22
71037fbf8c  bl 0x71037c3a70
71037fbf90  adrp x8,0x7105265000
71037fbf94  add x8,x8,#0xf78
71037fbf98  str xzr,[x22, #0xe8]
71037fbf9c  str x8,[x22]
71037fbfa0  orr w8,wzr,#0x3f800000
71037fbfa4  str w8,[x22, #0x70]
71037fbfa8  str w8,[x22, #0x98]
71037fbfac  str w8,[x22, #0xc0]
71037fbfb0  mov w8,#0x1
71037fbfb4  stp xzr,xzr,[x22, #0x60]
71037fbfb8  stp xzr,xzr,[x22, #0x50]
71037fbfbc  stp xzr,xzr,[x22, #0x40]
71037fbfc0  stp xzr,xzr,[x22, #0x30]
71037fbfc4  stp xzr,xzr,[x22, #0x20]
71037fbfc8  stp xzr,xzr,[x22, #0x10]
71037fbfcc  stp xzr,xzr,[x22, #0x88]
71037fbfd0  stp xzr,xzr,[x22, #0x78]
71037fbfd4  stp xzr,xzr,[x22, #0xb0]
71037fbfd8  stp xzr,xzr,[x22, #0xa0]
71037fbfdc  stp xzr,xzr,[x22, #0xd8]
71037fbfe0  strh w8,[x22, #0xe0]
71037fbfe4  strb wzr,[x22, #0xe2]
71037fbfe8  stp xzr,xzr,[x22, #0xf0]
71037fbfec  stp xzr,xzr,[x22, #0xc8]
71037fbff0  str x22,[x20, #0xf0]
71037fbff4  ldarb w8,[x23]
71037fbff8  tbz w8,#0x0,0x71037fd28c
71037fbffc  adrp x8,0x7105335000
71037fc000  add x8,x8,#0xc88
71037fc004  stp w19,w21,[x22, #0x10]
71037fc008  ldr w21,[x8, #0x8]
71037fc00c  str w21,[x22, #0x18]
71037fc010  ldr w9,[x8, #0x8]
71037fc014  str w9,[x22, #0x1c]
71037fc018  ldr w23,[x8]
71037fc01c  mov w0,#0x10
71037fc020  mov w1,#0x20
71037fc024  bl 0x710392e290
71037fc028  cbnz x0,0x71037fc070
71037fc02c  adrp x8,0x7105332000
71037fc030  ldr x0,[x8, #0xf00]
71037fc034  cbz x0,0x71037fc06c
71037fc038  mov w8,#0x20
71037fc03c  str wzr,[sp, #0x190]
71037fc040  add x1,sp,#0x190
71037fc044  str x8,[sp, #0x1d8]
71037fc048  ldr x8,[x0]
71037fc04c  ldr x8,[x8, #0x30]
71037fc050  add x2,sp,#0x1d8
71037fc054  blr x8
71037fc058  tbz w0,#0x0,0x71037fc06c
71037fc05c  mov w0,#0x10
71037fc060  mov w1,#0x20
71037fc064  bl 0x710392e290
71037fc068  cbnz x0,0x71037fc070
71037fc06c  mov x0,xzr
71037fc070  str x0,[x22, #0xd0]
71037fc074  adrp x24,0x7105335000
71037fc078  ldr x8,[x24, #0xc70]
71037fc07c  ldr x1,[x8, #0x20]
71037fc080  ldr w8,[x22, #0x18]
71037fc084  ldr w9,[x22, #0x10]
71037fc088  add w3,w9,w8
71037fc08c  adrp x8,0x7105940000
71037fc090  ldr x8,[x8, #0xc58]
71037fc094  mov x2,xzr
71037fc098  blr x8
71037fc09c  tst w0,#0xff
71037fc0a0  b.eq 0x71037fc1e8
71037fc0a4  ldr x0,[x22, #0xd0]
71037fc0a8  adrp x8,0x7105940000
71037fc0ac  ldr x8,[x8, #0xc60]
71037fc0b0  adrp x1,0x7104442000
71037fc0b4  add x1,x1,#0x33f
71037fc0b8  blr x8
71037fc0bc  add w8,w19,w21
71037fc0c0  mov w0,#0x10
71037fc0c4  mov w1,#0x20
71037fc0c8  mul w19,w8,w23
71037fc0cc  bl 0x710392e290
71037fc0d0  cbnz x0,0x71037fc118
71037fc0d4  adrp x8,0x7105332000
71037fc0d8  ldr x0,[x8, #0xf00]
71037fc0dc  cbz x0,0x71037fc114
71037fc0e0  mov w8,#0x20
71037fc0e4  str wzr,[sp, #0x190]
71037fc0e8  add x1,sp,#0x190
71037fc0ec  str x8,[sp, #0x1d8]
71037fc0f0  ldr x8,[x0]
71037fc0f4  ldr x8,[x8, #0x30]
71037fc0f8  add x2,sp,#0x1d8
71037fc0fc  blr x8
71037fc100  tbz w0,#0x0,0x71037fc114
71037fc104  mov w0,#0x10
71037fc108  mov w1,#0x20
71037fc10c  bl 0x710392e290
71037fc110  cbnz x0,0x71037fc118
71037fc114  mov x0,xzr
71037fc118  str x0,[x22, #0xd8]
71037fc11c  ldr x8,[x24, #0xc70]
71037fc120  ldr x1,[x8, #0x20]
71037fc124  ldr w8,[x22, #0x1c]
71037fc128  ldr w9,[x22, #0x14]
71037fc12c  add w3,w9,w8
71037fc130  adrp x8,0x7105940000
71037fc134  ldr x8,[x8, #0xc98]
71037fc138  mov w2,w19
71037fc13c  blr x8
71037fc140  tst w0,#0xff
71037fc144  b.eq 0x71037fc1f8
71037fc148  ldr x0,[x22, #0xd8]
71037fc14c  adrp x8,0x7105940000
71037fc150  ldr x8,[x8, #0xca0]
71037fc154  adrp x1,0x7104453000
71037fc158  add x1,x1,#0x457
71037fc15c  blr x8
71037fc160  ldr w8,[x22, #0x10]
71037fc164  str wzr,[sp, #0x1d8]
71037fc168  mov x0,x22
71037fc16c  ldr x9,[x0, #0x20]!
71037fc170  ldr x10,[x0, #0x8]
71037fc174  sub x10,x10,x9
71037fc178  asr x10,x10,#0x2
71037fc17c  cmp x10,x8
71037fc180  b.cs 0x71037fc220
71037fc184  sub x1,x8,x10
71037fc188  add x2,sp,#0x1d8
71037fc18c  bl 0x71037fff60
71037fc190  b 0x71037fc22c
71037fc194  add x0,sp,#0x48
71037fc198  mov x1,x22
71037fc19c  bl 0x71037ff980
71037fc1a0  b 0x71037fc1c0
71037fc1a4  sub x0,x29,#0x68
71037fc1a8  mov x1,x22
71037fc1ac  bl 0x71037ff980
71037fc1b0  b 0x71037fc1c0
71037fc1b4  add x0,sp,#0x188
71037fc1b8  mov x1,x22
71037fc1bc  bl 0x71037ff980
71037fc1c0  ldr x8,[x20]
71037fc1c4  ldr x9,[x8, #0x38]
71037fc1c8  add x8,sp,#0xe8
71037fc1cc  mov x0,x20
71037fc1d0  blr x9
71037fc1d4  ldr x9,[sp, #0x38]
71037fc1d8  mov w8,#0x1
71037fc1dc  movk w8,#0xf004, LSL #16
71037fc1e0  str w8,[x9]
71037fc1e4  b 0x71037fc864
71037fc1e8  add x0,sp,#0x98
71037fc1ec  mov x1,x22
71037fc1f0  bl 0x71037ffe80
71037fc1f4  b 0x71037fc204
71037fc1f8  add x0,sp,#0x48
71037fc1fc  mov x1,x22
71037fc200  bl 0x71037ffe80
71037fc204  ldr x8,[x20]
71037fc208  ldr x9,[x8, #0x38]
71037fc20c  add x8,sp,#0xe0
71037fc210  mov x0,x20
71037fc214  blr x9
71037fc218  ldr x9,[sp, #0x38]
71037fc21c  b 0x71037fc1d8
71037fc220  b.ls 0x71037fc22c
71037fc224  add x8,x9,x8, LSL #0x2
71037fc228  str x8,[x22, #0x28]
71037fc22c  ldr w8,[x22, #0x14]
71037fc230  str wzr,[sp, #0x1d8]
71037fc234  mov x0,x22
71037fc238  ldr x9,[x0, #0x38]!
71037fc23c  ldr x10,[x0, #0x8]
71037fc240  sub x10,x10,x9
71037fc244  asr x10,x10,#0x2
71037fc248  cmp x10,x8
71037fc24c  b.cs 0x71037fc260
71037fc250  sub x1,x8,x10
71037fc254  add x2,sp,#0x1d8
71037fc258  bl 0x71037fff60
71037fc25c  b 0x71037fc26c
71037fc260  b.ls 0x71037fc26c
71037fc264  add x8,x9,x8, LSL #0x2
71037fc268  str x8,[x22, #0x40]
71037fc26c  mov w1,#0xa0
71037fc270  mov w0,#0x10
71037fc274  bl 0x710392e290
71037fc278  cbnz x0,0x71037fc2c0
71037fc27c  adrp x8,0x7105332000
71037fc280  ldr x0,[x8, #0xf00]
71037fc284  cbz x0,0x71037fc2bc
71037fc288  mov w8,#0xa0
71037fc28c  str wzr,[sp, #0x190]
71037fc290  add x1,sp,#0x190
71037fc294  str x8,[sp, #0x1d8]
71037fc298  ldr x8,[x0]
71037fc29c  ldr x8,[x8, #0x30]
71037fc2a0  add x2,sp,#0x1d8
71037fc2a4  blr x8
71037fc2a8  tbz w0,#0x0,0x71037fc2bc
71037fc2ac  mov w1,#0xa0
71037fc2b0  mov w0,#0x10
71037fc2b4  bl 0x710392e290
71037fc2b8  cbnz x0,0x71037fc2c0
71037fc2bc  mov x0,xzr
71037fc2c0  str x0,[x20, #0x88]
71037fc2c4  ldr x1,[x20, #0x68]
71037fc2c8  adrp x8,0x7105941000
71037fc2cc  ldr x8,[x8, #0x3e8]
71037fc2d0  blr x8
71037fc2d4  tst w0,#0xff
71037fc2d8  b.eq 0x71037fc814
71037fc2dc  adrp x19,0x7105940000
71037fc2e0  ldr x8,[x19, #0xa08]
71037fc2e4  add x0,sp,#0x98
71037fc2e8  blr x8
71037fc2ec  ldr x1,[x20, #0x68]
71037fc2f0  adrp x21,0x7105940000
71037fc2f4  ldr x8,[x21, #0xa00]
71037fc2f8  add x0,sp,#0x98
71037fc2fc  blr x8
71037fc300  adrp x22,0x7105940000
71037fc304  ldr x8,[x22, #0xa10]
71037fc308  add x0,sp,#0x98
71037fc30c  mov w1,#0x1
71037fc310  blr x8
71037fc314  adrp x8,0x7105940000
71037fc318  ldr x8,[x8, #0xa20]
71037fc31c  add x0,sp,#0x98
71037fc320  mov w1,#0x200000
71037fc324  blr x8
71037fc328  adrp x8,0x7105940000
71037fc32c  ldr x8,[x8, #0xa18]
71037fc330  add x0,sp,#0x98
71037fc334  mov w1,#0x200000
71037fc338  blr x8
71037fc33c  adrp x8,0x7105940000
71037fc340  ldr x8,[x8, #0xa28]
71037fc344  add x0,sp,#0x98
71037fc348  mov w1,#0x20000
71037fc34c  blr x8
71037fc350  mov w0,#0x10
71037fc354  mov w1,#0x2000
71037fc358  bl 0x710392e290
71037fc35c  cbnz x0,0x71037fc3a4
71037fc360  adrp x8,0x7105332000
71037fc364  ldr x0,[x8, #0xf00]
71037fc368  cbz x0,0x71037fc3a0
71037fc36c  mov w8,#0x2000
71037fc370  str wzr,[sp, #0x190]
71037fc374  add x1,sp,#0x190
71037fc378  str x8,[sp, #0x1d8]
71037fc37c  ldr x8,[x0]
71037fc380  ldr x8,[x8, #0x30]
71037fc384  add x2,sp,#0x1d8
71037fc388  blr x8
71037fc38c  tbz w0,#0x0,0x71037fc3a0
71037fc390  mov w0,#0x10
71037fc394  mov w1,#0x2000
71037fc398  bl 0x710392e290
71037fc39c  cbnz x0,0x71037fc3a4
71037fc3a0  mov x0,xzr
71037fc3a4  str x0,[x20, #0x70]
71037fc3a8  adrp x23,0x7105940000
71037fc3ac  ldr x8,[x23, #0xa98]
71037fc3b0  add x1,sp,#0x98
71037fc3b4  blr x8
71037fc3b8  mov w0,#0x10
71037fc3bc  mov w1,#0x40
71037fc3c0  bl 0x710392e290
71037fc3c4  cbnz x0,0x71037fc40c
71037fc3c8  adrp x8,0x7105332000
71037fc3cc  ldr x0,[x8, #0xf00]
71037fc3d0  cbz x0,0x71037fc408
71037fc3d4  mov w8,#0x40
71037fc3d8  str wzr,[sp, #0x190]
71037fc3dc  add x1,sp,#0x190
71037fc3e0  str x8,[sp, #0x1d8]
71037fc3e4  ldr x8,[x0]
71037fc3e8  ldr x8,[x8, #0x30]
71037fc3ec  add x2,sp,#0x1d8
71037fc3f0  blr x8
71037fc3f4  tbz w0,#0x0,0x71037fc408
71037fc3f8  mov w0,#0x10
71037fc3fc  mov w1,#0x40
71037fc400  bl 0x710392e290
71037fc404  cbnz x0,0x71037fc40c
71037fc408  mov x0,xzr
71037fc40c  str x0,[x20, #0x80]
71037fc410  ldr x1,[x20, #0x68]
71037fc414  adrp x8,0x7105941000
71037fc418  ldr x8,[x8, #0x858]
71037fc41c  blr x8
71037fc420  bl 0x71037c9210
71037fc424  mov w0,#0x10
71037fc428  mov w1,#0x2000
71037fc42c  bl 0x710392e290
71037fc430  cbnz x0,0x71037fc478
71037fc434  adrp x8,0x7105332000
71037fc438  ldr x0,[x8, #0xf00]
71037fc43c  cbz x0,0x71037fc474
71037fc440  mov w8,#0x2000
71037fc444  str wzr,[sp, #0x190]
71037fc448  add x1,sp,#0x190
71037fc44c  str x8,[sp, #0x1d8]
71037fc450  ldr x8,[x0]
71037fc454  ldr x8,[x8, #0x30]
71037fc458  add x2,sp,#0x1d8
71037fc45c  blr x8
71037fc460  tbz w0,#0x0,0x71037fc474
71037fc464  mov w0,#0x10
71037fc468  mov w1,#0x2000
71037fc46c  bl 0x710392e290
71037fc470  cbnz x0,0x71037fc478
71037fc474  mov x0,xzr
71037fc478  str x0,[x20, #0x78]
71037fc47c  ldr x8,[x19, #0xa08]
71037fc480  add x0,sp,#0x98
71037fc484  blr x8
71037fc488  ldr x1,[x20, #0x68]
71037fc48c  ldr x8,[x21, #0xa00]
71037fc490  add x0,sp,#0x98
71037fc494  blr x8
71037fc498  ldr x8,[x22, #0xa10]
71037fc49c  add x0,sp,#0x98
71037fc4a0  orr w1,wzr,#0x3
71037fc4a4  blr x8
71037fc4a8  ldr x0,[x20, #0x78]
71037fc4ac  ldr x8,[x23, #0xa98]
71037fc4b0  add x1,sp,#0x98
71037fc4b4  blr x8
71037fc4b8  ldr x0,[x20, #0x68]
71037fc4bc  ldr x8,[x27, #0x920]
71037fc4c0  mov w1,#0x16
71037fc4c4  add x2,sp,#0x94
71037fc4c8  blr x8
71037fc4cc  ldr x19,[sp, #0x38]
71037fc4d0  ldrsw x8,[sp, #0x94]
71037fc4d4  str x8,[x20, #0xd0]
71037fc4d8  ldr x0,[x20, #0x68]
71037fc4dc  ldr x8,[x27, #0x920]
71037fc4e0  mov w1,#0x14
71037fc4e4  add x2,sp,#0x90
71037fc4e8  blr x8
71037fc4ec  ldr x0,[x20, #0x68]
71037fc4f0  ldr x8,[x27, #0x920]
71037fc4f4  mov w1,#0x13
71037fc4f8  add x2,sp,#0x188
71037fc4fc  blr x8
71037fc500  ldr w8,[sp, #0x188]
71037fc504  add w8,w8,#0xfff
71037fc508  and w8,w8,#0xfffff000
71037fc50c  ldpsw x22,x23,[sp, #0x90]
71037fc510  cmp x22,#0x8
71037fc514  mov x2,x23
71037fc518  str w8,[sp, #0x188]
71037fc51c  mov w8,#0x8
71037fc520  csel x24,x22,x8,hi
71037fc524  add x0,sp,#0x190
71037fc528  mov x1,x24
71037fc52c  bl 0x710392e1f0
71037fc530  cmp w0,#0xc
71037fc534  b.ne 0x71037fc56c
71037fc538  adrp x8,0x710593d000
71037fc53c  ldr x0,[x8, #0x2b0]
71037fc540  cbz x0,0x71037fc56c
71037fc544  str x23,[sp, #0x1d8]
71037fc548  ldr x8,[x0]
71037fc54c  ldr x8,[x8, #0x30]
71037fc550  add x1,sp,#0x1d8
71037fc554  blr x8
71037fc558  tbz w0,#0x0,0x71037fc56c
71037fc55c  add x0,sp,#0x190
71037fc560  mov x1,x24
71037fc564  mov x2,x23
71037fc568  bl 0x710392e1f0
71037fc56c  adrp x8,0x71052a8000
71037fc570  ldr x8,[x8, #0xa78]
71037fc574  cbz x8,0x71037fc588
71037fc578  ldr x2,[sp, #0x190]
71037fc57c  mov x0,x23
71037fc580  mov x1,x22
71037fc584  bl 0x71039c19e0
71037fc588  ldr x8,[sp, #0x190]
71037fc58c  str x8,[x20, #0xc8]
71037fc590  cbz x8,0x71037fc82c
71037fc594  ldrsw x23,[sp, #0x188]
71037fc598  ldr x22,[x20, #0xc0]
71037fc59c  mov w8,#0x8
71037fc5a0  add x0,sp,#0x190
71037fc5a4  cmp x23,#0x8
71037fc5a8  csel x24,x23,x8,hi
71037fc5ac  mov x1,x24
71037fc5b0  mov x2,x22
71037fc5b4  bl 0x710392e1f0
71037fc5b8  cmp w0,#0xc
71037fc5bc  b.ne 0x71037fc5f4
71037fc5c0  adrp x8,0x710593d000
71037fc5c4  ldr x0,[x8, #0x2b0]
71037fc5c8  cbz x0,0x71037fc5f4
71037fc5cc  str x22,[sp, #0x1d8]
71037fc5d0  ldr x8,[x0]
71037fc5d4  ldr x8,[x8, #0x30]
71037fc5d8  add x1,sp,#0x1d8
71037fc5dc  blr x8
71037fc5e0  tbz w0,#0x0,0x71037fc5f4
71037fc5e4  add x0,sp,#0x190
71037fc5e8  mov x1,x24
71037fc5ec  mov x2,x22
71037fc5f0  bl 0x710392e1f0
71037fc5f4  adrp x8,0x71052a8000
71037fc5f8  ldr x8,[x8, #0xa78]
71037fc5fc  cbz x8,0x71037fc610
71037fc600  ldr x2,[sp, #0x190]
71037fc604  mov x0,x22
71037fc608  mov x1,x23
71037fc60c  bl 0x71039c19e0
71037fc610  ldr x22,[sp, #0x190]
71037fc614  mov w0,#0x10
71037fc618  mov w1,#0x100
71037fc61c  str x22,[x20, #0xd8]
71037fc620  bl 0x710392e290
71037fc624  mov x23,x0
71037fc628  cbnz x0,0x71037fc674
71037fc62c  adrp x8,0x7105332000
71037fc630  ldr x0,[x8, #0xf00]
71037fc634  cbz x0,0x71037fc670
71037fc638  mov w8,#0x100
71037fc63c  str wzr,[sp, #0x190]
71037fc640  add x1,sp,#0x190
71037fc644  str x8,[sp, #0x1d8]
71037fc648  ldr x8,[x0]
71037fc64c  ldr x8,[x8, #0x30]
71037fc650  add x2,sp,#0x1d8
71037fc654  blr x8
71037fc658  tbz w0,#0x0,0x71037fc670
71037fc65c  mov w0,#0x10
71037fc660  mov w1,#0x100
71037fc664  bl 0x710392e290
71037fc668  mov x23,x0
71037fc66c  cbnz x0,0x71037fc674
71037fc670  mov x23,xzr
71037fc674  ldr x2,[x20, #0xc0]
71037fc678  add x0,sp,#0x48
71037fc67c  mov x1,x22
71037fc680  mov w3,wzr
71037fc684  bl 0x7103812c30
71037fc688  add x21,sp,#0x1d8
71037fc68c  ldr x8,[x25, #0xc08]
71037fc690  add x1,sp,#0x48
71037fc694  mov x0,x23
71037fc698  blr x8
71037fc69c  tst w0,#0xff
71037fc6a0  b.eq 0x71037fc844
71037fc6a4  ldr x0,[x20, #0x88]
71037fc6a8  stp x23,xzr,[x20, #0x90]
71037fc6ac  ldr x1,[x20, #0xc8]
71037fc6b0  adrp x8,0x7105941000
71037fc6b4  ldrsw x2,[sp, #0x94]
71037fc6b8  ldr x8,[x8, #0x420]
71037fc6bc  blr x8
71037fc6c0  ldp x0,x1,[x20, #0x88]
71037fc6c4  adrp x8,0x7105941000
71037fc6c8  ldr x2,[x20, #0x98]
71037fc6cc  ldr x3,[x20, #0xc0]
71037fc6d0  ldr x8,[x8, #0x418]
71037fc6d4  blr x8
71037fc6d8  ldr x0,[x20, #0x88]
71037fc6dc  adrp x8,0x7105941000
71037fc6e0  ldr x8,[x8, #0x400]
71037fc6e4  adrp x1,0x71037fb000
71037fc6e8  add x1,x1,#0x200
71037fc6ec  blr x8
71037fc6f0  ldr x0,[x20, #0x88]
71037fc6f4  adrp x8,0x7105941000
71037fc6f8  ldr x8,[x8, #0x3f8]
71037fc6fc  adrp x1,0x71043bd000
71037fc700  add x1,x1,#0xb0
71037fc704  blr x8
71037fc708  mov w1,#0x50
71037fc70c  mov w0,#0x10
71037fc710  bl 0x710392e290
71037fc714  mov x22,x0
71037fc718  cbnz x0,0x71037fc764
71037fc71c  adrp x8,0x7105332000
71037fc720  ldr x0,[x8, #0xf00]
71037fc724  cbz x0,0x71037fc760
71037fc728  mov w8,#0x50
71037fc72c  str wzr,[sp, #0x190]
71037fc730  add x1,sp,#0x190
71037fc734  str x8,[sp, #0x1d8]
71037fc738  ldr x8,[x0]
71037fc73c  ldr x8,[x8, #0x30]
71037fc740  add x2,sp,#0x1d8
71037fc744  blr x8
71037fc748  tbz w0,#0x0,0x71037fc760
71037fc74c  mov w1,#0x50
71037fc750  mov w0,#0x10
71037fc754  bl 0x710392e290
71037fc758  mov x22,x0
71037fc75c  cbnz x0,0x71037fc764
71037fc760  mov x22,xzr
71037fc764  mov x19,x22
71037fc768  adrp x8,0x7105232000
71037fc76c  add x8,x8,#0x4b8
71037fc770  str xzr,[x19, #0x38]!
71037fc774  stp xzr,xzr,[x22, #0x40]
71037fc778  str wzr,[x22, #0x28]
71037fc77c  stp xzr,xzr,[x22, #0x18]
71037fc780  str xzr,[x22]
71037fc784  str x8,[x22, #0x30]
71037fc788  stp xzr,xzr,[x22, #0x8]
71037fc78c  str x22,[x20, #0xe8]
71037fc790  strb wzr,[sp, #0x1d1]
71037fc794  strb wzr,[sp, #0x190]
71037fc798  adrp x1,0x710437b000
71037fc79c  add x1,x1,#0x1cb
71037fc7a0  add x0,sp,#0x190
71037fc7a4  bl 0x71037c9810
71037fc7a8  orr w8,wzr,#0x180000
71037fc7ac  stp xzr,x8,[sp, #0x1d8]
71037fc7b0  mov w8,#0x2
71037fc7b4  str w8,[sp, #0x1e8]
71037fc7b8  ldrb w8,[sp, #0x1d1]
71037fc7bc  cmp x8,#0x41
71037fc7c0  strb wzr,[sp, #0x22d]
71037fc7c4  strb wzr,[sp, #0x1ec]
71037fc7c8  b.cs 0x71037fd3b4
71037fc7cc  strb wzr,[sp, #0x22d]
71037fc7d0  cbz w8,0x71037fc8b0
71037fc7d4  mov w9,wzr
71037fc7d8  add x10,sp,#0x190
71037fc7dc  add x11,sp,#0x1d8
71037fc7e0  add w13,w9,#0x1
71037fc7e4  add x9,x11,w9, UXTB 
71037fc7e8  ldrb w12,[x10], #0x1
71037fc7ec  strb w13,[sp, #0x22d]
71037fc7f0  strb w12,[x9, #0x14]
71037fc7f4  ldrb w9,[sp, #0x22d]
71037fc7f8  cmp x9,#0x41
71037fc7fc  b.cs 0x71037fd36c
71037fc800  subs x8,x8,#0x1
71037fc804  b.ne 0x71037fc7e0
71037fc808  add x8,sp,#0x1d8
71037fc80c  add x8,x8,x9
71037fc810  b 0x71037fc8b4
71037fc814  ldr x8,[x20]
71037fc818  ldr x9,[x8, #0x38]
71037fc81c  add x8,sp,#0xd8
71037fc820  mov x0,x20
71037fc824  blr x9
71037fc828  b 0x71037fc218
71037fc82c  ldr x8,[x20]
71037fc830  ldr x9,[x8, #0x38]
71037fc834  add x8,sp,#0x88
71037fc838  mov x0,x20
71037fc83c  blr x9
71037fc840  b 0x71037fc858
71037fc844  ldr x8,[x20]
71037fc848  ldr x9,[x8, #0x38]
71037fc84c  add x8,sp,#0x40
71037fc850  mov x0,x20
71037fc854  blr x9
71037fc858  mov w8,#0x1
71037fc85c  movk w8,#0xf004, LSL #16
71037fc860  str w8,[x19]
71037fc864  ldr x0,[sp, #0x170]
71037fc868  add x8,sp,#0x150
71037fc86c  cmp x8,x0
71037fc870  b.eq 0x71037fc884
71037fc874  cbz x0,0x71037fc890
71037fc878  ldr x8,[x0]
71037fc87c  ldr x8,[x8, #0x28]
71037fc880  b 0x71037fc88c
71037fc884  ldr x8,[x0]
71037fc888  ldr x8,[x8, #0x20]
71037fc88c  blr x8
71037fc890  add sp,sp,#0x370
71037fc894  ldp x29,x30,[sp, #0x50]
71037fc898  ldp x20,x19,[sp, #0x40]
71037fc89c  ldp x22,x21,[sp, #0x30]
71037fc8a0  ldp x24,x23,[sp, #0x20]
71037fc8a4  ldp x26,x25,[sp, #0x10]
71037fc8a8  ldp x28,x27,[sp], #0x60
71037fc8ac  ret
71037fc8b0  add x8,sp,#0x1d8
71037fc8b4  mov w2,#0xf20
71037fc8b8  sub x0,x29,#0x68
71037fc8bc  mov w1,#0x10
71037fc8c0  strb wzr,[x8, #0x14]!
71037fc8c4  bl 0x710392e1f0
71037fc8c8  cmp w0,#0xc
71037fc8cc  b.ne 0x71037fc908
71037fc8d0  adrp x8,0x710593d000
71037fc8d4  ldr x0,[x8, #0x2b0]
71037fc8d8  cbz x0,0x71037fc908
71037fc8dc  mov w8,#0xf20
71037fc8e0  str x8,[sp, #0x190]
71037fc8e4  ldr x8,[x0]
71037fc8e8  ldr x8,[x8, #0x30]
71037fc8ec  add x1,sp,#0x190
71037fc8f0  blr x8
71037fc8f4  tbz w0,#0x0,0x71037fc908
71037fc8f8  mov w2,#0xf20
71037fc8fc  sub x0,x29,#0x68
71037fc900  mov w1,#0x10
71037fc904  bl 0x710392e1f0
71037fc908  adrp x8,0x71052a8000
71037fc90c  ldr x8,[x8, #0xa78]
71037fc910  cbz x8,0x71037fc924
71037fc914  ldur x2,[x29, #-0x68]
71037fc918  mov w0,#0xf20
71037fc91c  mov w1,#0x10
71037fc920  bl 0x71039c19e0
71037fc924  ldur x23,[x29, #-0x68]
71037fc928  mov x0,x23
71037fc92c  bl 0x71037c3a70
71037fc930  adrp x8,0x7105242000
71037fc934  add x8,x8,#0xf28
71037fc938  str wzr,[x23, #0x10]
71037fc93c  strb wzr,[x23, #0x14]
71037fc940  str xzr,[x23, #0xf18]
71037fc944  str x8,[x23]
71037fc948  cbz x23,0x71037fc958
71037fc94c  ldr x8,[x23, #0x8]
71037fc950  ldr x9,[x8]
71037fc954  b 0x71037fc960
71037fc958  mov x8,xzr
71037fc95c  mov x9,xzr
71037fc960  ldp x0,x10,[x22, #0x38]
71037fc964  stp x23,x8,[x22, #0x38]
71037fc968  ldr x8,[x22, #0x48]
71037fc96c  str x9,[x22, #0x48]
71037fc970  cbz x10,0x71037fc994
71037fc974  cbz x0,0x71037fc994
71037fc978  ldr x9,[x10]
71037fc97c  cmp x9,x8
71037fc980  b.ne 0x71037fc994
71037fc984  ldr x8,[x0]
71037fc988  ldr x8,[x8, #0x8]
71037fc98c  blr x8
71037fc990  ldr x23,[x19]
71037fc994  ldr x8,[x23]
71037fc998  ldr x9,[x8, #0x10]
71037fc99c  sub x8,x29,#0x68
71037fc9a0  add x1,sp,#0x1d8
71037fc9a4  mov x0,x23
71037fc9a8  blr x9
71037fc9ac  ldur w8,[x29, #-0x68]
71037fc9b0  tbnz w8,#0x1f,0x71037fca04
71037fc9b4  ldr x0,[x22, #0x38]
71037fc9b8  mov w8,#0x80000
71037fc9bc  orr w9,wzr,#0x3
71037fc9c0  stp x8,x9,[x22]
71037fc9c4  ldr x8,[x0]
71037fc9c8  ldr x9,[x8, #0x18]
71037fc9cc  add x8,sp,#0x190
71037fc9d0  blr x9
71037fc9d4  ldr x8,[sp, #0x198]
71037fc9d8  ldr x23,[x8, #0x98]
71037fc9dc  adrp x8,0x7105940000
71037fc9e0  ldr x8,[x8, #0xd30]
71037fc9e4  mov x0,x23
71037fc9e8  blr x8
71037fc9ec  str x0,[x22, #0x10]
71037fc9f0  adrp x8,0x7105940000
71037fc9f4  ldr x8,[x8, #0xd28]
71037fc9f8  mov x0,x23
71037fc9fc  blr x8
71037fca00  str x0,[x22, #0x18]
71037fca04  adrp x19,0x7105335000
71037fca08  ldrb w8,[x19, #0xb08]
71037fca0c  cbnz w8,0x71037fcbc4
71037fca10  ldr w8,[x26, #0x4]
71037fca14  cbz w8,0x71037fca30
71037fca18  ucvtf s0,w8
71037fca1c  adrp x8,0x7105335000
71037fca20  ldr s1,[x8, #0xb50]
71037fca24  fdiv s0,s0,s1
71037fca28  fcvtpu x0,s0
71037fca2c  bl 0x710359be70
71037fca30  mov x10,#0xf
71037fca34  mov w8,#0x1
71037fca38  orr x9,xzr,#0x100000000
71037fca3c  add x11,sp,#0x190
71037fca40  movk x10,#0x1, LSL #32
71037fca44  str xzr,[sp, #0x1e8]
71037fca48  stp x8,x9,[sp, #0x1d8]
71037fca4c  stur x8,[x11, #0x6c]
71037fca50  stur x10,[x11, #0x74]
71037fca54  add x0,sp,#0x190
71037fca58  add x1,sp,#0x1d8
71037fca5c  strb wzr,[sp, #0x1f0]
71037fca60  str wzr,[sp, #0x1f4]
71037fca64  strb wzr,[sp, #0x1f8]
71037fca68  stur xzr,[x11, #0x7c]
71037fca6c  str w8,[sp, #0x214]
71037fca70  str xzr,[sp, #0x218]
71037fca74  stur x8,[x11, #0x9c]
71037fca78  stur x10,[x11, #0xa4]
71037fca7c  strb wzr,[sp, #0x220]
71037fca80  str wzr,[sp, #0x224]
71037fca84  strb wzr,[sp, #0x228]
71037fca88  str wzr,[sp, #0x23c]
71037fca8c  str x9,[sp, #0x240]
71037fca90  str xzr,[sp, #0x248]
71037fca94  stur x8,[x11, #0xcc]
71037fca98  stur x10,[x11, #0xd4]
71037fca9c  strb wzr,[sp, #0x250]
71037fcaa0  str wzr,[sp, #0x254]
71037fcaa4  strb wzr,[sp, #0x258]
71037fcaa8  stur xzr,[x11, #0xdc]
71037fcaac  str w8,[sp, #0x274]
71037fcab0  str xzr,[sp, #0x278]
71037fcab4  stur x8,[x11, #0xfc]
71037fcab8  add x11,sp,#0x1d8
71037fcabc  add x12,x11,#0x114
71037fcac0  stur x10,[x21, #0xbc]
71037fcac4  strb wzr,[sp, #0x280]
71037fcac8  str wzr,[sp, #0x284]
71037fcacc  strb wzr,[sp, #0x288]
71037fcad0  stur xzr,[x21, #0xc4]
71037fcad4  str w8,[sp, #0x2a4]
71037fcad8  str xzr,[sp, #0x2a8]
71037fcadc  stur x8,[x21, #0xe4]
71037fcae0  stur x10,[x21, #0xec]
71037fcae4  strb wzr,[sp, #0x2b0]
71037fcae8  str wzr,[sp, #0x2b4]
71037fcaec  strb wzr,[sp, #0x2b8]
71037fcaf0  stur xzr,[x21, #0xf4]
71037fcaf4  str w8,[sp, #0x2d4]
71037fcaf8  str xzr,[sp, #0x2d8]
71037fcafc  str x8,[x12]
71037fcb00  add x12,x11,#0x11c
71037fcb04  str x10,[x12]
71037fcb08  add x10,x11,#0x124
71037fcb0c  strb wzr,[sp, #0x2e0]
71037fcb10  str wzr,[sp, #0x2e4]
71037fcb14  strb wzr,[sp, #0x2e8]
71037fcb18  str xzr,[x10]
71037fcb1c  orr x10,xzr,#0xf00000000
71037fcb20  str x9,[sp, #0x330]
71037fcb24  add x9,x11,#0x174
71037fcb28  strb w8,[x19, #0xb08]
71037fcb2c  str w8,[sp, #0x304]
71037fcb30  str xzr,[sp, #0x308]
71037fcb34  str w8,[sp, #0x31c]
71037fcb38  str x10,[sp, #0x320]
71037fcb3c  strb wzr,[sp, #0x310]
71037fcb40  str wzr,[sp, #0x314]
71037fcb44  strb wzr,[sp, #0x318]
71037fcb48  str x8,[sp, #0x328]
71037fcb4c  str xzr,[sp, #0x338]
71037fcb50  str x8,[x9]
71037fcb54  orr w8,wzr,#0xf
71037fcb58  str w8,[sp, #0x354]
71037fcb5c  strb wzr,[sp, #0x340]
71037fcb60  str wzr,[sp, #0x344]
71037fcb64  strb wzr,[sp, #0x348]
71037fcb68  bl 0x710359b630
71037fcb6c  ldr x8,[sp, #0x1a0]
71037fcb70  cbz x8,0x71037fcba8
71037fcb74  ldr x8,[x8]
71037fcb78  ldr x9,[sp, #0x1a8]
71037fcb7c  cmp x8,x9
71037fcb80  b.ne 0x71037fcba8
71037fcb84  ldr x8,[sp, #0x198]
71037fcb88  adrp x9,0x7105335000
71037fcb8c  str x8,[x9, #0xb60]
71037fcb90  cbz x8,0x71037fcbb0
71037fcb94  ldr x8,[x8, #0x8]
71037fcb98  adrp x9,0x7105335000
71037fcb9c  str x8,[x9, #0xb68]
71037fcba0  ldr x8,[x8]
71037fcba4  b 0x71037fcbbc
71037fcba8  adrp x8,0x7105335000
71037fcbac  str xzr,[x8, #0xb60]
71037fcbb0  adrp x9,0x7105335000
71037fcbb4  mov x8,xzr
71037fcbb8  str xzr,[x9, #0xb68]
71037fcbbc  adrp x9,0x7105335000
71037fcbc0  str x8,[x9, #0xb70]
71037fcbc4  adrp x19,0x7105335000
71037fcbc8  ldrb w8,[x19, #0x490]
71037fcbcc  cbnz w8,0x71037fcc94
71037fcbd0  ldr w8,[x26, #0x8]
71037fcbd4  cbz w8,0x71037fcbf0
71037fcbd8  ucvtf s0,w8
71037fcbdc  adrp x8,0x7105335000
71037fcbe0  ldr s1,[x8, #0x4d8]
71037fcbe4  fdiv s0,s0,s1
71037fcbe8  fcvtpu x0,s0
71037fcbec  bl 0x7103593d50
71037fcbf0  mov w8,#0x1
71037fcbf4  strb w8,[x19, #0x490]
71037fcbf8  mov w8,#0x101
71037fcbfc  orr w9,wzr,#0x3
71037fcc00  str w9,[sp, #0x1dc]
71037fcc04  strb wzr,[sp, #0x1e0]
71037fcc08  strh w8,[sp, #0x1d8]
71037fcc0c  orr x8,xzr,#0xff00000000
71037fcc10  add x0,sp,#0x190
71037fcc14  stur x8,[x21, #0xc]
71037fcc18  mov x8,#0xff
71037fcc1c  movk x8,#0x7, LSL #32
71037fcc20  add x1,sp,#0x1d8
71037fcc24  stur xzr,[x21, #0x2c]
71037fcc28  stur xzr,[x21, #0x24]
71037fcc2c  stur x8,[x21, #0x14]
71037fcc30  str wzr,[sp, #0x20c]
71037fcc34  stur xzr,[x21, #0x1c]
71037fcc38  bl 0x7103593520
71037fcc3c  ldr x8,[sp, #0x1a0]
71037fcc40  cbz x8,0x71037fcc78
71037fcc44  ldr x8,[x8]
71037fcc48  ldr x9,[sp, #0x1a8]
71037fcc4c  cmp x8,x9
71037fcc50  b.ne 0x71037fcc78
71037fcc54  ldr x8,[sp, #0x198]
71037fcc58  adrp x9,0x7105335000
71037fcc5c  str x8,[x9, #0x4e8]
71037fcc60  cbz x8,0x71037fcc80
71037fcc64  ldr x8,[x8, #0x8]
71037fcc68  adrp x9,0x7105335000
71037fcc6c  str x8,[x9, #0x4f0]
71037fcc70  ldr x8,[x8]
71037fcc74  b 0x71037fcc8c
71037fcc78  adrp x8,0x7105335000
71037fcc7c  str xzr,[x8, #0x4e8]
71037fcc80  adrp x9,0x7105335000
71037fcc84  mov x8,xzr
71037fcc88  str xzr,[x9, #0x4f0]
71037fcc8c  adrp x9,0x7105335000
71037fcc90  str x8,[x9, #0x4f8]
71037fcc94  adrp x19,0x71052b6000
71037fcc98  ldrb w8,[x19, #0xf20]
71037fcc9c  cbnz w8,0x71037fcd4c
71037fcca0  ldr w8,[x26, #0xc]
71037fcca4  cbz w8,0x71037fccc0
71037fcca8  ucvtf s0,w8
71037fccac  adrp x8,0x71052b6000
71037fccb0  ldr s1,[x8, #0xf68]
71037fccb4  fdiv s0,s0,s1
71037fccb8  fcvtpu x0,s0
71037fccbc  bl 0x71035915f0
71037fccc0  mov w8,#0x1
71037fccc4  strb w8,[x19, #0xf20]
71037fccc8  str w8,[sp, #0x190]
71037fcccc  add x8,sp,#0x190
71037fccd0  stur xzr,[x8, #0xc]
71037fccd4  stur xzr,[x8, #0x4]
71037fccd8  mov w8,#0x1
71037fccdc  movk w8,#0x100, LSL #16
71037fcce0  add x0,sp,#0x1d8
71037fcce4  add x1,sp,#0x190
71037fcce8  str w8,[sp, #0x1a4]
71037fccec  strb wzr,[sp, #0x1a8]
71037fccf0  bl 0x7103590cf0
71037fccf4  ldr x8,[sp, #0x1e8]
71037fccf8  cbz x8,0x71037fcd30
71037fccfc  ldr x8,[x8]
71037fcd00  ldr x9,[sp, #0x1f0]
71037fcd04  cmp x8,x9
71037fcd08  b.ne 0x71037fcd30
71037fcd0c  ldr x8,[sp, #0x1e0]
71037fcd10  adrp x9,0x71052b6000
71037fcd14  str x8,[x9, #0xf78]
71037fcd18  cbz x8,0x71037fcd38
71037fcd1c  ldr x8,[x8, #0x8]
71037fcd20  adrp x9,0x71052b6000
71037fcd24  str x8,[x9, #0xf80]
71037fcd28  ldr x8,[x8]
71037fcd2c  b 0x71037fcd44
71037fcd30  adrp x8,0x71052b6000
71037fcd34  str xzr,[x8, #0xf78]
71037fcd38  adrp x9,0x71052b6000
71037fcd3c  mov x8,xzr
71037fcd40  str xzr,[x9, #0xf80]
71037fcd44  adrp x9,0x71052b6000
71037fcd48  str x8,[x9, #0xf88]
71037fcd4c  adrp x19,0x7105335000
71037fcd50  ldrb w8,[x19, #0x500]
71037fcd54  cbnz w8,0x71037fce10
71037fcd58  ldr w8,[x26, #0x10]
71037fcd5c  cbz w8,0x71037fcd78
71037fcd60  ucvtf s0,w8
71037fcd64  adrp x8,0x7105335000
71037fcd68  ldr s1,[x8, #0x548]
71037fcd6c  fdiv s0,s0,s1
71037fcd70  fcvtpu x0,s0
71037fcd74  bl 0x7103592e20
71037fcd78  mov w8,#0x1
71037fcd7c  strb w8,[x19, #0x500]
71037fcd80  mov x8,#0x100000001
71037fcd84  orr x9,xzr,#0x100000000
71037fcd88  stp xzr,x9,[sp, #0x1d8]
71037fcd8c  stp x8,xzr,[sp, #0x1e8]
71037fcd90  mov w8,#0x41800000
71037fcd94  add x0,sp,#0x190
71037fcd98  add x1,sp,#0x1d8
71037fcd9c  str wzr,[sp, #0x200]
71037fcda0  str xzr,[sp, #0x1f8]
71037fcda4  stur x8,[x21, #0x2c]
71037fcda8  mov x8,#0x1
71037fcdac  movk x8,#0x7, LSL #32
71037fcdb0  stur x8,[x21, #0x34]
71037fcdb4  strb wzr,[sp, #0x214]
71037fcdb8  bl 0x7103591e00
71037fcdbc  ldr x8,[sp, #0x1a0]
71037fcdc0  cbz x8,0x71037fcdf8
71037fcdc4  ldr x8,[x8]
71037fcdc8  ldr x9,[sp, #0x1a8]
71037fcdcc  cmp x8,x9
71037fcdd0  b.ne 0x71037fcdf8
71037fcdd4  ldr x8,[sp, #0x198]
71037fcdd8  cbz x8,0x71037fcdf8
71037fcddc  adrp x9,0x7105335000
71037fcde0  add x9,x9,#0x558
71037fcde4  str x8,[x9]
71037fcde8  ldr x8,[x8, #0x60]
71037fcdec  str x8,[x9, #0x8]
71037fcdf0  ldr x8,[x8]
71037fcdf4  b 0x71037fce08
71037fcdf8  mov x8,xzr
71037fcdfc  adrp x9,0x7105335000
71037fce00  add x9,x9,#0x558
71037fce04  stp xzr,xzr,[x9]
71037fce08  adrp x9,0x7105335000
71037fce0c  str x8,[x9, #0x568]
71037fce10  adrp x19,0x7105337000
71037fce14  ldrb w8,[x19, #0x298]
71037fce18  cbnz w8,0x71037fceb0
71037fce1c  ldr w8,[x26, #0x14]
71037fce20  cbz w8,0x71037fce3c
71037fce24  ucvtf s0,w8
71037fce28  adrp x8,0x7105337000
71037fce2c  ldr s1,[x8, #0x2e0]
71037fce30  fdiv s0,s0,s1
71037fce34  fcvtpu x0,s0
71037fce38  bl 0x71035e97b0
71037fce3c  mov w8,#0x1
71037fce40  add x0,sp,#0x1d8
71037fce44  add x1,sp,#0x190
71037fce48  strb w8,[x19, #0x298]
71037fce4c  stp xzr,xzr,[sp, #0x198]
71037fce50  str xzr,[sp, #0x190]
71037fce54  bl 0x71035e88e0
71037fce58  ldr x8,[sp, #0x1e8]
71037fce5c  cbz x8,0x71037fce94
71037fce60  ldr x8,[x8]
71037fce64  ldr x9,[sp, #0x1f0]
71037fce68  cmp x8,x9
71037fce6c  b.ne 0x71037fce94
71037fce70  ldr x8,[sp, #0x1e0]
71037fce74  adrp x9,0x7105337000
71037fce78  str x8,[x9, #0x2f0]
71037fce7c  cbz x8,0x71037fce9c
71037fce80  ldr x8,[x8, #0x8]
71037fce84  adrp x9,0x7105337000
71037fce88  str x8,[x9, #0x2f8]
71037fce8c  ldr x8,[x8]
71037fce90  b 0x71037fcea8
71037fce94  adrp x8,0x7105337000
71037fce98  str xzr,[x8, #0x2f0]
71037fce9c  adrp x9,0x7105337000
71037fcea0  mov x8,xzr
71037fcea4  str xzr,[x9, #0x2f8]
71037fcea8  adrp x9,0x7105337000
71037fceac  str x8,[x9, #0x300]
71037fceb0  add x19,x20,#0x40
71037fceb4  mov x0,x19
71037fceb8  bl 0x71039c1a40
71037fcebc  str x19,[sp, #0x30]
71037fcec0  mov x22,x20
71037fcec4  orr x19,xzr,#-0x5555555555555556
71037fcec8  ldr x24,[x22, #0x18]!
71037fcecc  ldr x8,[x22, #0x10]
71037fced0  sub x8,x8,x24
71037fced4  asr x8,x8,#0x3
71037fced8  movk x19,#0xaaab
71037fcedc  mul x8,x8,x19
71037fcee0  ldr w21,[x22, #0x18]
71037fcee4  cmp x8,x21
71037fcee8  b.cs 0x71037fd010
71037fceec  add x8,x20,#0x28
71037fcef0  ldr x25,[x20, #0x20]
71037fcef4  str x8,[sp, #0x1f8]
71037fcef8  add x8,x21,x21, LSL #0x1
71037fcefc  lsl x23,x8,#0x3
71037fcf00  sub x0,x29,#0x68
71037fcf04  mov w1,#0x10
71037fcf08  mov x2,x23
71037fcf0c  bl 0x710392e1f0
71037fcf10  cmp w0,#0xc
71037fcf14  b.ne 0x71037fcf4c
71037fcf18  adrp x8,0x710593d000
71037fcf1c  ldr x0,[x8, #0x2b0]
71037fcf20  cbz x0,0x71037fcf4c
71037fcf24  str x23,[sp, #0x190]
71037fcf28  ldr x8,[x0]
71037fcf2c  ldr x8,[x8, #0x30]
71037fcf30  add x1,sp,#0x190
71037fcf34  blr x8
71037fcf38  tbz w0,#0x0,0x71037fcf4c
71037fcf3c  sub x0,x29,#0x68
71037fcf40  mov w1,#0x10
71037fcf44  mov x2,x23
71037fcf48  bl 0x710392e1f0
71037fcf4c  adrp x8,0x71052a8000
71037fcf50  ldr x8,[x8, #0xa78]
71037fcf54  cbz x8,0x71037fcf68
71037fcf58  ldur x2,[x29, #-0x68]
71037fcf5c  mov w1,#0x10
71037fcf60  mov x0,x23
71037fcf64  bl 0x71039c19e0
71037fcf68  sub x8,x25,x24
71037fcf6c  asr x8,x8,#0x3
71037fcf70  mul x8,x8,x19
71037fcf74  ldur x10,[x29, #-0x68]
71037fcf78  orr w11,wzr,#0x18
71037fcf7c  madd x9,x8,x11,x10
71037fcf80  stp x10,x9,[sp, #0x1d8]
71037fcf84  madd x10,x21,x11,x10
71037fcf88  stp x9,x10,[sp, #0x1e8]
71037fcf8c  ldp x8,x11,[x20, #0x18]
71037fcf90  cmp x11,x8
71037fcf94  b.eq 0x71037fcfe4
71037fcf98  stp xzr,xzr,[x9, #-0x10]
71037fcf9c  stur xzr,[x9, #-0x18]
71037fcfa0  ldr x10,[x11, #-0x18]!
71037fcfa4  cmp x8,x11
71037fcfa8  stur x10,[x9, #-0x18]
71037fcfac  ldr x10,[x11, #0x8]
71037fcfb0  stur x10,[x9, #-0x10]
71037fcfb4  ldr x10,[x11, #0x10]
71037fcfb8  stur x10,[x9, #-0x8]
71037fcfbc  str xzr,[x11]
71037fcfc0  stp xzr,xzr,[x11, #0x8]
71037fcfc4  ldr x9,[sp, #0x1e0]
71037fcfc8  sub x9,x9,#0x18
71037fcfcc  str x9,[sp, #0x1e0]
71037fcfd0  b.ne 0x71037fcf98
71037fcfd4  mov x12,x9
71037fcfd8  ldp x11,x8,[x20, #0x18]
71037fcfdc  ldp x9,x10,[sp, #0x1e8]
71037fcfe0  b 0x71037fcfec
71037fcfe4  mov x12,x9
71037fcfe8  mov x11,x8
71037fcfec  stp x12,x9,[x20, #0x18]
71037fcff0  add x0,sp,#0x1d8
71037fcff4  stp x11,x8,[sp, #0x1e0]
71037fcff8  ldr x8,[x20, #0x28]
71037fcffc  str x10,[x20, #0x28]
71037fd000  str x8,[sp, #0x1f0]
71037fd004  str x11,[sp, #0x1d8]
71037fd008  bl 0x71037fe6e0
71037fd00c  ldr w21,[x20, #0x30]
71037fd010  cbz w21,0x71037fd1c4
71037fd014  orr x27,xzr,#-0x5555555555555556
71037fd018  mov w24,wzr
71037fd01c  add x26,x20,#0x28
71037fd020  movk x27,#0xaaa, LSL #48
71037fd024  orr w28,wzr,#0x18
71037fd028  ldp x9,x8,[x20, #0x20]
71037fd02c  cmp x9,x8
71037fd030  b.cs 0x71037fd04c
71037fd034  stp xzr,xzr,[x9, #0x8]
71037fd038  str xzr,[x9]
71037fd03c  ldr x8,[x20, #0x20]
71037fd040  add x8,x8,#0x18
71037fd044  str x8,[x20, #0x20]
71037fd048  b 0x71037fd1b4
71037fd04c  ldr x10,[x22]
71037fd050  sub x9,x9,x10
71037fd054  asr x9,x9,#0x3
71037fd058  mul x21,x9,x19
71037fd05c  add x9,x21,#0x1
71037fd060  cmp x9,x27
71037fd064  b.hi 0x71037fd3ac
71037fd068  sub x8,x8,x10
71037fd06c  orr x10,xzr,#0x5555555555555555
71037fd070  asr x8,x8,#0x3
71037fd074  mul x8,x8,x19
71037fd078  movk x10,#0x555, LSL #48
71037fd07c  cmp x8,x10
71037fd080  b.cs 0x71037fd0a0
71037fd084  lsl x8,x8,#0x1
71037fd088  cmp x8,x9
71037fd08c  csel x25,x9,x8,cc
71037fd090  stp xzr,x26,[sp, #0x1f0]
71037fd094  cbnz x25,0x71037fd0a8
71037fd098  mov x9,xzr
71037fd09c  b 0x71037fd11c
71037fd0a0  mov x25,x27
71037fd0a4  stp xzr,x26,[sp, #0x1f0]
71037fd0a8  add x8,x25,x25, LSL #0x1
71037fd0ac  lsl x23,x8,#0x3
71037fd0b0  sub x0,x29,#0x68
71037fd0b4  mov w1,#0x10
71037fd0b8  mov x2,x23
71037fd0bc  bl 0x710392e1f0
71037fd0c0  cmp w0,#0xc
71037fd0c4  b.ne 0x71037fd0fc
71037fd0c8  adrp x8,0x710593d000
71037fd0cc  ldr x0,[x8, #0x2b0]
71037fd0d0  cbz x0,0x71037fd0fc
71037fd0d4  str x23,[sp, #0x190]
71037fd0d8  ldr x8,[x0]
71037fd0dc  ldr x8,[x8, #0x30]
71037fd0e0  add x1,sp,#0x190
71037fd0e4  blr x8
71037fd0e8  tbz w0,#0x0,0x71037fd0fc
71037fd0ec  sub x0,x29,#0x68
71037fd0f0  mov w1,#0x10
71037fd0f4  mov x2,x23
71037fd0f8  bl 0x710392e1f0
71037fd0fc  adrp x8,0x71052a8000
71037fd100  ldr x8,[x8, #0xa78]
71037fd104  cbz x8,0x71037fd118
71037fd108  ldur x2,[x29, #-0x68]
71037fd10c  mov w1,#0x10
71037fd110  mov x0,x23
71037fd114  bl 0x71039c19e0
71037fd118  ldur x9,[x29, #-0x68]
71037fd11c  madd x8,x21,x28,x9
71037fd120  madd x10,x25,x28,x9
71037fd124  add x11,x8,#0x18
71037fd128  stp x9,x8,[sp, #0x1d8]
71037fd12c  str x10,[sp, #0x1f0]
71037fd130  stp xzr,xzr,[x8, #0x8]
71037fd134  str xzr,[x8]
71037fd138  str x11,[sp, #0x1e8]
71037fd13c  ldp x9,x12,[x20, #0x18]
71037fd140  cmp x12,x9
71037fd144  b.eq 0x71037fd190
71037fd148  stp xzr,xzr,[x8, #-0x10]
71037fd14c  stur xzr,[x8, #-0x18]
71037fd150  ldr x10,[x12, #-0x18]!
71037fd154  cmp x9,x12
71037fd158  stur x10,[x8, #-0x18]
71037fd15c  ldr x10,[x12, #0x8]
71037fd160  stur x10,[x8, #-0x10]
71037fd164  ldr x10,[x12, #0x10]
71037fd168  stur x10,[x8, #-0x8]
71037fd16c  str xzr,[x12]
71037fd170  stp xzr,xzr,[x12, #0x8]
71037fd174  ldr x8,[sp, #0x1e0]
71037fd178  sub x8,x8,#0x18
71037fd17c  str x8,[sp, #0x1e0]
71037fd180  b.ne 0x71037fd148
71037fd184  ldp x12,x9,[x20, #0x18]
71037fd188  ldp x11,x10,[sp, #0x1e8]
71037fd18c  b 0x71037fd194
71037fd190  mov x12,x9
71037fd194  stp x8,x11,[x20, #0x18]
71037fd198  add x0,sp,#0x1d8
71037fd19c  stp x12,x9,[sp, #0x1e0]
71037fd1a0  ldr x8,[x20, #0x28]
71037fd1a4  str x10,[x20, #0x28]
71037fd1a8  str x8,[sp, #0x1f0]
71037fd1ac  str x12,[sp, #0x1d8]
71037fd1b0  bl 0x71037fe6e0
71037fd1b4  ldr w8,[x20, #0x30]
71037fd1b8  add w24,w24,#0x1
71037fd1bc  cmp w24,w8
71037fd1c0  b.cc 0x71037fd028
71037fd1c4  ldr x0,[sp, #0x30]
71037fd1c8  bl 0x71039c1a50
71037fd1cc  ldr x19,[sp, #0x38]
71037fd1d0  mov w8,wzr
71037fd1d4  b 0x71037fc860
71037fd1d8  adrp x0,0x7105335000
71037fd1dc  add x0,x0,#0xe18
71037fd1e0  bl 0x71039c06b0
71037fd1e4  cbz w0,0x71037fbcec
71037fd1e8  adrp x24,0x7105335000
71037fd1ec  add x24,x24,#0xb90
71037fd1f0  mov x0,x24
71037fd1f4  bl 0x71037c3a70
71037fd1f8  adrp x8,0x7105265000
71037fd1fc  add x8,x8,#0xb08
71037fd200  stur xzr,[x24, #0x35]
71037fd204  stp xzr,xzr,[x24, #0x28]
71037fd208  str x8,[x24]
71037fd20c  stp xzr,xzr,[x24, #0x18]
71037fd210  add x0,x24,#0x40
71037fd214  bl 0x71039c2710
71037fd218  adrp x8,0x7105265000
71037fd21c  add x8,x8,#0xb48
71037fd220  adrp x0,0x71037fb000
71037fd224  add x0,x0,#0x320
71037fd228  str x8,[x24]
71037fd22c  add x8,x8,#0x50
71037fd230  stp x8,xzr,[x24, #0x60]
71037fd234  mov w8,#0x1
71037fd238  stp xzr,xzr,[x24, #0xa0]
71037fd23c  adrp x2,0x7104f17000
71037fd240  add x2,x2,#0x0
71037fd244  strh w8,[x24, #0xa0]
71037fd248  mov w8,#0x20000
71037fd24c  mov x1,x24
71037fd250  stp xzr,xzr,[x24, #0xb0]
71037fd254  strb wzr,[x24, #0xa2]
71037fd258  str x8,[x24, #0xc0]
71037fd25c  stp xzr,xzr,[x24, #0x90]
71037fd260  stp xzr,xzr,[x24, #0x80]
71037fd264  stp xzr,xzr,[x24, #0x70]
71037fd268  stp xzr,xzr,[x24, #0xf8]
71037fd26c  stp xzr,xzr,[x24, #0xe8]
71037fd270  stp xzr,xzr,[x24, #0xd8]
71037fd274  stp xzr,xzr,[x24, #0xc8]
71037fd278  bl 0x71000001c0
71037fd27c  adrp x0,0x7105335000
71037fd280  add x0,x0,#0xe18
71037fd284  bl 0x71039c06c0
71037fd288  b 0x71037fbcec
71037fd28c  adrp x0,0x7105335000
71037fd290  add x0,x0,#0xe18
71037fd294  bl 0x71039c06b0
71037fd298  cbz w0,0x71037fbffc
71037fd29c  adrp x23,0x7105335000
71037fd2a0  add x23,x23,#0xb90
71037fd2a4  mov x0,x23
71037fd2a8  bl 0x71037c3a70
71037fd2ac  adrp x8,0x7105265000
71037fd2b0  add x8,x8,#0xb08
71037fd2b4  stur xzr,[x23, #0x35]
71037fd2b8  stp xzr,xzr,[x23, #0x28]
71037fd2bc  str x8,[x23]
71037fd2c0  stp xzr,xzr,[x23, #0x18]
71037fd2c4  add x0,x23,#0x40
71037fd2c8  bl 0x71039c2710
71037fd2cc  adrp x8,0x7105265000
71037fd2d0  add x8,x8,#0xb48
71037fd2d4  adrp x0,0x71037fb000
71037fd2d8  add x0,x0,#0x320
71037fd2dc  str x8,[x23]
71037fd2e0  add x8,x8,#0x50
71037fd2e4  stp x8,xzr,[x23, #0x60]
71037fd2e8  mov w8,#0x1
71037fd2ec  stp xzr,xzr,[x23, #0xa0]
71037fd2f0  adrp x2,0x7104f17000
71037fd2f4  add x2,x2,#0x0
71037fd2f8  strh w8,[x23, #0xa0]
71037fd2fc  mov w8,#0x20000
71037fd300  mov x1,x23
71037fd304  stp xzr,xzr,[x23, #0xb0]
71037fd308  strb wzr,[x23, #0xa2]
71037fd30c  str x8,[x23, #0xc0]
71037fd310  stp xzr,xzr,[x23, #0x90]
71037fd314  stp xzr,xzr,[x23, #0x80]
71037fd318  stp xzr,xzr,[x23, #0x70]
71037fd31c  stp xzr,xzr,[x23, #0xf8]
71037fd320  stp xzr,xzr,[x23, #0xe8]
71037fd324  stp xzr,xzr,[x23, #0xd8]
71037fd328  stp xzr,xzr,[x23, #0xc8]
71037fd32c  bl 0x71000001c0
71037fd330  adrp x0,0x7105335000
71037fd334  add x0,x0,#0xe18
71037fd338  bl 0x71039c06c0
71037fd33c  ldr x26,[sp, #0x8]
71037fd340  b 0x71037fbffc
71037fd344  mov w0,#0x8
71037fd348  bl 0x71039c6c40
71037fd34c  adrp x8,0x7105242000
71037fd350  add x8,x8,#0x50
71037fd354  str x8,[x0]
71037fd358  adrp x2,0x71052a8000
71037fd35c  ldr x2,[x2, #0xb58]
71037fd360  adrp x1,0x7105242000
71037fd364  add x1,x1,#0x70
71037fd368  bl 0x71039c6c50
71037fd36c  mov w0,#0x10
71037fd370  bl 0x71039c6c40
71037fd374  mov x20,x0
71037fd378  adrp x1,0x71043ff000
71037fd37c  add x1,x1,#0xf06
71037fd380  bl 0x71039c5f10
71037fd384  adrp x8,0x71052a8000
71037fd388  ldr x8,[x8, #0xb30]
71037fd38c  add x8,x8,#0x10
71037fd390  str x8,[x20]
71037fd394  adrp x1,0x71052a8000
71037fd398  adrp x2,0x71052a8000
71037fd39c  ldr x1,[x1, #0xb38]
71037fd3a0  ldr x2,[x2, #0xb40]
71037fd3a4  mov x0,x20
71037fd3a8  bl 0x71039c6c50
71037fd3ac  mov x0,x22
71037fd3b0  bl 0x71039c0c00
71037fd3b4  mov w0,#0x10
71037fd3b8  bl 0x71039c6c40
71037fd3bc  mov x20,x0
71037fd3c0  adrp x1,0x71043ff000
71037fd3c4  add x1,x1,#0xf06
71037fd3c8  bl 0x71039c5f10
71037fd3cc  adrp x8,0x71052a8000
71037fd3d0  ldr x8,[x8, #0xb30]
71037fd3d4  add x8,x8,#0x10
71037fd3d8  str x8,[x20]
71037fd3dc  adrp x1,0x71052a8000
71037fd3e0  adrp x2,0x71052a8000
71037fd3e4  ldr x1,[x1, #0xb38]
71037fd3e8  ldr x2,[x2, #0xb40]
71037fd3ec  mov x0,x20
71037fd3f0  bl 0x71039c6c50
71037fd3f4  b 0x71037fd3fc
71037fd3f8  b 0x71037fd4b4
71037fd3fc  mov x21,x0
71037fd400  mov x0,x20
71037fd404  bl 0x71039c6c60
71037fd408  b 0x71037fd8dc
71037fd40c  mov x21,x0
71037fd410  add x0,x23,#0x18
71037fd414  bl 0x71037fb210
71037fd418  adrp x8,0x7105241000
71037fd41c  add x8,x8,#0xa68
71037fd420  str x8,[x23]
71037fd424  bl 0x71037c3c30
71037fd428  ldr x1,[x23, #0x8]
71037fd42c  bl 0x71037c4080
71037fd430  b 0x71037fd46c
71037fd434  bl 0x71037b2bc0
71037fd438  b 0x71037fd468
71037fd43c  mov x21,x0
71037fd440  add x0,x24,#0x18
71037fd444  bl 0x71037fb210
71037fd448  adrp x8,0x7105241000
71037fd44c  add x8,x8,#0xa68
71037fd450  str x8,[x24]
71037fd454  bl 0x71037c3c30
71037fd458  ldr x1,[x24, #0x8]
71037fd45c  bl 0x71037c4080
71037fd460  b 0x71037fd46c
71037fd464  bl 0x71037b2bc0
71037fd468  mov x21,x0
71037fd46c  adrp x0,0x7105335000
71037fd470  add x0,x0,#0xe18
71037fd474  bl 0x71039c6e10
71037fd478  b 0x71037fd8dc
71037fd47c  b 0x71037fd4b4
71037fd480  b 0x71037fd8d8
71037fd484  adrp x8,0x71052a8000
71037fd488  ldr x8,[x8, #0xa70]
71037fd48c  mov x21,x0
71037fd490  cbz x8,0x71037fd49c
71037fd494  mov x0,x23
71037fd498  bl 0x71039c19b0
71037fd49c  mov x0,x23
71037fd4a0  bl 0x710392eb40
71037fd4a4  b 0x71037fd8dc
71037fd4a8  bl 0x71037b2bc0
71037fd4ac  b 0x71037fd8d8
71037fd4b0  b 0x71037fd8d8
71037fd4b4  mov x21,x0
71037fd4b8  ldr x0,[sp, #0x30]
71037fd4bc  bl 0x71039c1a50
71037fd4c0  b 0x71037fd8dc
71037fd4c4  b 0x71037fd8d8
71037fd4c8  adrp x8,0x71052a8000
71037fd4cc  ldr x8,[x8, #0xa70]
71037fd4d0  mov x21,x0
71037fd4d4  cbz x8,0x71037fd80c
71037fd4d8  mov x0,x22
71037fd4dc  bl 0x71039c19b0
71037fd4e0  b 0x71037fd80c
71037fd4e4  bl 0x71037b2bc0
71037fd4e8  b 0x71037fd8d8
71037fd4ec  b 0x71037fd8d8
71037fd4f0  b 0x71037fd8d8
71037fd4f4  b 0x71037fd8d8
71037fd4f8  b 0x71037fd8d8
71037fd4fc  b 0x71037fd8d8
71037fd500  b 0x71037fd8d8
71037fd504  ldr x8,[x19]
71037fd508  mov x21,x0
71037fd50c  cbz x8,0x71037fd550
71037fd510  ldr x9,[x8, #0x8]
71037fd514  cbz x9,0x71037fd530
71037fd518  ldr x10,[x9, #0x10]
71037fd51c  str x10,[x8, #0x8]
71037fd520  str x8,[x9, #0x10]
71037fd524  mov x8,x9
71037fd528  cbnz x9,0x71037fd510
71037fd52c  b 0x71037fd544
71037fd530  ldr x9,[x8, #0x10]
71037fd534  stp xzr,xzr,[x8]
71037fd538  str xzr,[x8, #0x10]
71037fd53c  mov x8,x9
71037fd540  cbnz x9,0x71037fd510
71037fd544  str xzr,[x22, #0x3118]
71037fd548  str x19,[x22, #0x3120]
71037fd54c  str x19,[x22, #0x3128]
71037fd550  str xzr,[x19]
71037fd554  stp xzr,xzr,[x23]
71037fd558  ldr x8,[x26]
71037fd55c  cmp x26,x8
71037fd560  b.eq 0x71037fd578
71037fd564  ldr x9,[x8]
71037fd568  stp xzr,xzr,[x8]
71037fd56c  cmp x26,x9
71037fd570  mov x8,x9
71037fd574  b.ne 0x71037fd564
71037fd578  stp xzr,xzr,[x25, #0x8]
71037fd57c  str xzr,[x25]
71037fd580  ldr x8,[x24]
71037fd584  cbz x8,0x71037fd7c8
71037fd588  ldr x9,[x22, #0x2920]
71037fd58c  b 0x71037fd7bc
71037fd590  ldr x8,[x19]
71037fd594  mov x21,x0
71037fd598  cbz x8,0x71037fd5dc
71037fd59c  ldr x9,[x8, #0x8]
71037fd5a0  cbz x9,0x71037fd5bc
71037fd5a4  ldr x10,[x9, #0x10]
71037fd5a8  str x10,[x8, #0x8]
71037fd5ac  str x8,[x9, #0x10]
71037fd5b0  mov x8,x9
71037fd5b4  cbnz x9,0x71037fd59c
71037fd5b8  b 0x71037fd5d0
71037fd5bc  ldr x9,[x8, #0x10]
71037fd5c0  stp xzr,xzr,[x8]
71037fd5c4  str xzr,[x8, #0x10]
71037fd5c8  mov x8,x9
71037fd5cc  cbnz x9,0x71037fd59c
71037fd5d0  str xzr,[x22, #0x28e8]
71037fd5d4  str x19,[x22, #0x28f0]
71037fd5d8  str x19,[x22, #0x28f8]
71037fd5dc  str xzr,[x19]
71037fd5e0  stp xzr,xzr,[x23]
71037fd5e4  ldr x8,[x26]
71037fd5e8  cmp x26,x8
71037fd5ec  b.eq 0x71037fd604
71037fd5f0  ldr x9,[x8]
71037fd5f4  stp xzr,xzr,[x8]
71037fd5f8  cmp x26,x9
71037fd5fc  mov x8,x9
71037fd600  b.ne 0x71037fd5f0
71037fd604  stp xzr,xzr,[x25, #0x8]
71037fd608  str xzr,[x25]
71037fd60c  ldr x8,[x24]
71037fd610  cbz x8,0x71037fd7c8
71037fd614  ldr x9,[x22, #0x20f0]
71037fd618  b 0x71037fd7bc
71037fd61c  ldr x8,[x19]
71037fd620  mov x21,x0
71037fd624  cbz x8,0x71037fd668
71037fd628  ldr x9,[x8, #0x8]
71037fd62c  cbz x9,0x71037fd648
71037fd630  ldr x10,[x9, #0x10]
71037fd634  str x10,[x8, #0x8]
71037fd638  str x8,[x9, #0x10]
71037fd63c  mov x8,x9
71037fd640  cbnz x9,0x71037fd628
71037fd644  b 0x71037fd65c
71037fd648  ldr x9,[x8, #0x10]
71037fd64c  stp xzr,xzr,[x8]
71037fd650  str xzr,[x8, #0x10]
71037fd654  mov x8,x9
71037fd658  cbnz x9,0x71037fd628
71037fd65c  str xzr,[x22, #0x20b8]
71037fd660  str x19,[x22, #0x20c0]
71037fd664  str x19,[x22, #0x20c8]
71037fd668  str xzr,[x19]
71037fd66c  stp xzr,xzr,[x23]
71037fd670  ldr x8,[x26]
71037fd674  cmp x26,x8
71037fd678  b.eq 0x71037fd690
71037fd67c  ldr x9,[x8]
71037fd680  stp xzr,xzr,[x8]
71037fd684  cmp x26,x9
71037fd688  mov x8,x9
71037fd68c  b.ne 0x71037fd67c
71037fd690  stp xzr,xzr,[x25, #0x8]
71037fd694  str xzr,[x25]
71037fd698  ldr x8,[x24]
71037fd69c  cbz x8,0x71037fd7c8
71037fd6a0  ldr x9,[x22, #0x18c0]
71037fd6a4  b 0x71037fd7bc
71037fd6a8  ldr x8,[x19]
71037fd6ac  mov x21,x0
71037fd6b0  cbz x8,0x71037fd6f4
71037fd6b4  ldr x9,[x8, #0x8]
71037fd6b8  cbz x9,0x71037fd6d4
71037fd6bc  ldr x10,[x9, #0x10]
71037fd6c0  str x10,[x8, #0x8]
71037fd6c4  str x8,[x9, #0x10]
71037fd6c8  mov x8,x9
71037fd6cc  cbnz x9,0x71037fd6b4
71037fd6d0  b 0x71037fd6e8
71037fd6d4  ldr x9,[x8, #0x10]
71037fd6d8  stp xzr,xzr,[x8]
71037fd6dc  str xzr,[x8, #0x10]
71037fd6e0  mov x8,x9
71037fd6e4  cbnz x9,0x71037fd6b4
71037fd6e8  str xzr,[x22, #0x1888]
71037fd6ec  str x19,[x22, #0x1890]
71037fd6f0  str x19,[x22, #0x1898]
71037fd6f4  str xzr,[x19]
71037fd6f8  stp xzr,xzr,[x23]
71037fd6fc  ldr x8,[x26]
71037fd700  cmp x26,x8
71037fd704  b.eq 0x71037fd71c
71037fd708  ldr x9,[x8]
71037fd70c  stp xzr,xzr,[x8]
71037fd710  cmp x26,x9
71037fd714  mov x8,x9
71037fd718  b.ne 0x71037fd708
71037fd71c  stp xzr,xzr,[x25, #0x8]
71037fd720  str xzr,[x25]
71037fd724  ldr x8,[x24]
71037fd728  cbz x8,0x71037fd7c8
71037fd72c  ldr x9,[x22, #0x1090]
71037fd730  b 0x71037fd7bc
71037fd734  ldr x8,[x19]
71037fd738  mov x21,x0
71037fd73c  cbz x8,0x71037fd780
71037fd740  ldr x9,[x8, #0x8]
71037fd744  cbz x9,0x71037fd760
71037fd748  ldr x10,[x9, #0x10]
71037fd74c  str x10,[x8, #0x8]
71037fd750  str x8,[x9, #0x10]
71037fd754  mov x8,x9
71037fd758  cbnz x9,0x71037fd740
71037fd75c  b 0x71037fd774
71037fd760  ldr x9,[x8, #0x10]
71037fd764  stp xzr,xzr,[x8]
71037fd768  str xzr,[x8, #0x10]
71037fd76c  mov x8,x9
71037fd770  cbnz x9,0x71037fd740
71037fd774  str xzr,[x22, #0x1058]
71037fd778  str x19,[x22, #0x1060]
71037fd77c  str x19,[x22, #0x1068]
71037fd780  str xzr,[x19]
71037fd784  stp xzr,xzr,[x23]
71037fd788  ldr x8,[x26]
71037fd78c  cmp x26,x8
71037fd790  b.eq 0x71037fd7a8
71037fd794  ldr x9,[x8]
71037fd798  stp xzr,xzr,[x8]
71037fd79c  cmp x26,x9
71037fd7a0  mov x8,x9
71037fd7a4  b.ne 0x71037fd794
71037fd7a8  stp xzr,xzr,[x25, #0x8]
71037fd7ac  str xzr,[x25]
71037fd7b0  ldr x8,[x24]
71037fd7b4  cbz x8,0x71037fd7c8
71037fd7b8  ldr x9,[x22, #0x860]
71037fd7bc  str x8,[x9]
71037fd7c0  str x9,[x8, #0x8]
71037fd7c4  stp xzr,xzr,[x24]
71037fd7c8  sub x19,x24,#0x28
71037fd7cc  sub x0,x19,#0x808
71037fd7d0  bl 0x71037c7870
71037fd7d4  sub x19,x19,#0x830
71037fd7d8  cmp x22,x19
71037fd7dc  b.ne 0x71037fd7cc
71037fd7e0  adrp x8,0x7105241000
71037fd7e4  add x8,x8,#0xa68
71037fd7e8  str x8,[x22]
71037fd7ec  bl 0x71037c3c30
71037fd7f0  ldr x1,[x22, #0x8]
71037fd7f4  bl 0x71037c4080
71037fd7f8  adrp x8,0x71052a8000
71037fd7fc  ldr x8,[x8, #0xa70]
71037fd800  cbz x8,0x71037fd80c
71037fd804  mov x0,x22
71037fd808  bl 0x71039c19b0
71037fd80c  mov x0,x22
71037fd810  bl 0x710392eb40
71037fd814  b 0x71037fd8dc
71037fd818  bl 0x71037b2bc0
71037fd81c  bl 0x71037b2bc0
71037fd820  ldr x8,[x23]
71037fd824  mov x21,x0
71037fd828  cbz x8,0x71037fd86c
71037fd82c  ldr x9,[x8, #0x8]
71037fd830  cbz x9,0x71037fd84c
71037fd834  ldr x10,[x9, #0x10]
71037fd838  str x10,[x8, #0x8]
71037fd83c  str x8,[x9, #0x10]
71037fd840  mov x8,x9
71037fd844  cbnz x9,0x71037fd82c
71037fd848  b 0x71037fd860
71037fd84c  ldr x9,[x8, #0x10]
71037fd850  stp xzr,xzr,[x8]
71037fd854  str xzr,[x8, #0x10]
71037fd858  mov x8,x9
71037fd85c  cbnz x9,0x71037fd82c
71037fd860  str xzr,[x22, #0x828]
71037fd864  str x23,[x22, #0x830]
71037fd868  str x23,[x22, #0x838]
71037fd86c  str xzr,[x23]
71037fd870  stp xzr,xzr,[x19]
71037fd874  ldr x8,[x26]
71037fd878  cmp x26,x8
71037fd87c  b.eq 0x71037fd894
71037fd880  ldr x9,[x8]
71037fd884  stp xzr,xzr,[x8]
71037fd888  cmp x26,x9
71037fd88c  mov x8,x9
71037fd890  b.ne 0x71037fd880
71037fd894  stp xzr,xzr,[x25, #0x8]
71037fd898  str xzr,[x25]
71037fd89c  ldr x8,[x24]
71037fd8a0  cbz x8,0x71037fd7e0
71037fd8a4  ldr x9,[x22, #0x30]
71037fd8a8  str x8,[x9]
71037fd8ac  str x9,[x8, #0x8]
71037fd8b0  stp xzr,xzr,[x24]
71037fd8b4  b 0x71037fd7e0
71037fd8b8  mov x21,x0
71037fd8bc  b 0x71037fd7f8
71037fd8c0  b 0x71037fd8d8
71037fd8c4  b 0x71037fd8d8
71037fd8c8  b 0x71037fd8d8
71037fd8cc  b 0x71037fd8d8
71037fd8d0  b 0x71037fd8d8
71037fd8d4  b 0x71037fd8d8
71037fd8d8  mov x21,x0
71037fd8dc  ldr x0,[sp, #0x170]
71037fd8e0  add x8,sp,#0x150
71037fd8e4  cmp x8,x0
71037fd8e8  b.ne 0x71037fd8f8
71037fd8ec  ldr x8,[x0]
71037fd8f0  ldr x8,[x8, #0x20]
71037fd8f4  b 0x71037fd904
71037fd8f8  cbz x0,0x71037fd908
71037fd8fc  ldr x8,[x0]
71037fd900  ldr x8,[x8, #0x28]
71037fd904  blr x8
71037fd908  mov x0,x21
71037fd90c  bl 0x71039c19f0
