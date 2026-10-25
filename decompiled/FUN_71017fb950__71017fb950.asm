// addr:      71017fb950
// offset:    0x17fb950
// name:      FUN_71017fb950
// mangled:   
// size:      6816

71017fb950  sub sp,sp,#0x1e0
71017fb954  stp x28,x27,[sp, #0x180]
71017fb958  stp x26,x25,[sp, #0x190]
71017fb95c  stp x24,x23,[sp, #0x1a0]
71017fb960  stp x22,x21,[sp, #0x1b0]
71017fb964  stp x20,x19,[sp, #0x1c0]
71017fb968  stp x29,x30,[sp, #0x1d0]
71017fb96c  add x29,sp,#0x1d0
71017fb970  mov x22,x1
71017fb974  mov x21,x0
71017fb978  mov w1,#0x2f8
71017fb97c  mov w0,#0x10
71017fb980  bl 0x710392e290
71017fb984  mov x19,x0
71017fb988  cbnz x0,0x71017fb9d4
71017fb98c  adrp x8,0x7105332000
71017fb990  ldr x0,[x8, #0xf00]
71017fb994  cbz x0,0x71017fb9d0
71017fb998  mov w8,#0x2f8
71017fb99c  str wzr,[sp, #0x30]
71017fb9a0  add x1,sp,#0x30
71017fb9a4  str x8,[sp, #0x40]
71017fb9a8  ldr x8,[x0]
71017fb9ac  ldr x8,[x8, #0x30]
71017fb9b0  add x2,sp,#0x40
71017fb9b4  blr x8
71017fb9b8  tbz w0,#0x0,0x71017fb9d0
71017fb9bc  mov w1,#0x2f8
71017fb9c0  mov w0,#0x10
71017fb9c4  bl 0x710392e290
71017fb9c8  mov x19,x0
71017fb9cc  cbnz x0,0x71017fb9d4
71017fb9d0  mov x19,xzr
71017fb9d4  mov w28,#0xffffffff
71017fb9d8  mov w0,#0x10
71017fb9dc  mov w1,#0x80
71017fb9e0  stp xzr,xzr,[x19, #0x10]
71017fb9e4  str w28,[x19, #0x120]
71017fb9e8  stp x19,xzr,[x19]
71017fb9ec  strb wzr,[x19, #0x124]
71017fb9f0  str wzr,[x19, #0x128]
71017fb9f4  stp xzr,x28,[x19, #0x110]
71017fb9f8  stp xzr,xzr,[x19, #0x100]
71017fb9fc  stp xzr,xzr,[x19, #0xf0]
71017fba00  stp xzr,xzr,[x19, #0xe0]
71017fba04  stp xzr,xzr,[x19, #0xd0]
71017fba08  stp xzr,xzr,[x19, #0xc0]
71017fba0c  stp xzr,xzr,[x19, #0xb0]
71017fba10  stp xzr,xzr,[x19, #0xa0]
71017fba14  stp xzr,xzr,[x19, #0x90]
71017fba18  stp xzr,xzr,[x19, #0x80]
71017fba1c  stp xzr,xzr,[x19, #0x70]
71017fba20  stp xzr,xzr,[x19, #0x60]
71017fba24  stp xzr,xzr,[x19, #0x50]
71017fba28  stp xzr,xzr,[x19, #0x40]
71017fba2c  stp xzr,xzr,[x19, #0x30]
71017fba30  stp xzr,xzr,[x19, #0x20]
71017fba34  bl 0x710392e290
71017fba38  cbnz x0,0x71017fba80
71017fba3c  adrp x8,0x7105332000
71017fba40  ldr x0,[x8, #0xf00]
71017fba44  cbz x0,0x71017fba7c
71017fba48  mov w8,#0x80
71017fba4c  str wzr,[sp, #0x30]
71017fba50  add x1,sp,#0x30
71017fba54  str x8,[sp, #0x40]
71017fba58  ldr x8,[x0]
71017fba5c  ldr x8,[x8, #0x30]
71017fba60  add x2,sp,#0x40
71017fba64  blr x8
71017fba68  tbz w0,#0x0,0x71017fba7c
71017fba6c  mov w0,#0x10
71017fba70  mov w1,#0x80
71017fba74  bl 0x710392e290
71017fba78  cbnz x0,0x71017fba80
71017fba7c  mov x0,xzr
71017fba80  mov x8,x0
71017fba84  adrp x24,0x7105181000
71017fba88  add x24,x24,#0xb40
71017fba8c  str xzr,[x8, #0x10]!
71017fba90  stp x24,x8,[x0]
71017fba94  mov x8,x0
71017fba98  str xzr,[x8, #0x28]!
71017fba9c  stp xzr,x8,[x0, #0x18]
71017fbaa0  mov x8,x0
71017fbaa4  str xzr,[x8, #0x40]!
71017fbaa8  stp xzr,x8,[x0, #0x30]
71017fbaac  mov x8,x0
71017fbab0  mov x23,#0xff0000000000
71017fbab4  mov w20,#0x2
71017fbab8  movk x23,#0xc1ff, LSL #48
71017fbabc  str xzr,[x8, #0x58]!
71017fbac0  str xzr,[x0, #0x60]
71017fbac4  mov w1,#0x10
71017fbac8  str w20,[x0, #0x68]
71017fbacc  str wzr,[x0, #0x78]
71017fbad0  str xzr,[x0, #0x70]
71017fbad4  stp xzr,x8,[x0, #0x48]
71017fbad8  adrp x8,0x710523d000
71017fbadc  add x8,x8,#0xa48
71017fbae0  str wzr,[x19, #0x180]
71017fbae4  str x23,[x19, #0x188]
71017fbae8  str wzr,[x19, #0x190]
71017fbaec  str x8,[x19, #0x198]
71017fbaf0  stp x0,xzr,[x19, #0x130]
71017fbaf4  mov w0,#0x10
71017fbaf8  stp xzr,xzr,[x19, #0x170]
71017fbafc  stp xzr,xzr,[x19, #0x160]
71017fbb00  stp xzr,xzr,[x19, #0x150]
71017fbb04  stp xzr,xzr,[x19, #0x140]
71017fbb08  bl 0x710392e290
71017fbb0c  cbnz x0,0x71017fbb54
71017fbb10  adrp x8,0x7105332000
71017fbb14  ldr x0,[x8, #0xf00]
71017fbb18  cbz x0,0x71017fbb50
71017fbb1c  mov w8,#0x10
71017fbb20  str wzr,[sp, #0x30]
71017fbb24  add x1,sp,#0x30
71017fbb28  str x8,[sp, #0x40]
71017fbb2c  ldr x8,[x0]
71017fbb30  ldr x8,[x8, #0x30]
71017fbb34  add x2,sp,#0x40
71017fbb38  blr x8
71017fbb3c  tbz w0,#0x0,0x71017fbb50
71017fbb40  mov w0,#0x10
71017fbb44  mov w1,#0x10
71017fbb48  bl 0x710392e290
71017fbb4c  cbnz x0,0x71017fbb54
71017fbb50  mov x0,xzr
71017fbb54  add x8,x19,#0x1ac
71017fbb58  stp xzr,xzr,[x0]
71017fbb5c  str x0,[x19, #0x1a0]
71017fbb60  add x9,x19,#0x1d4
71017fbb64  add x10,x19,#0x201
71017fbb68  str w28,[x19, #0x1a8]
71017fbb6c  mov w1,#0xb8
71017fbb70  mov w0,#0x10
71017fbb74  str xzr,[x8]
71017fbb78  add x8,x19,#0x1bc
71017fbb7c  str xzr,[x8]
71017fbb80  add x8,x19,#0x1c4
71017fbb84  str xzr,[x8]
71017fbb88  add x8,x19,#0x1cc
71017fbb8c  str xzr,[x8]
71017fbb90  add x8,x19,#0x1b4
71017fbb94  str xzr,[x8]
71017fbb98  add x8,x19,#0x1f4
71017fbb9c  str xzr,[x8]
71017fbba0  add x8,x19,#0x1ec
71017fbba4  str xzr,[x8]
71017fbba8  add x8,x19,#0x1e4
71017fbbac  str xzr,[x8]
71017fbbb0  add x8,x19,#0x1dc
71017fbbb4  str xzr,[x9]
71017fbbb8  orr w9,wzr,#0xffff
71017fbbbc  str xzr,[x8]
71017fbbc0  str w28,[x19, #0x1ac]
71017fbbc4  strh w9,[x19, #0x1b0]
71017fbbc8  strb wzr,[x19, #0x1bc]
71017fbbcc  str w28,[x19, #0x1c0]
71017fbbd0  strh w9,[x19, #0x1c4]
71017fbbd4  strb wzr,[x19, #0x1d0]
71017fbbd8  str xzr,[x19, #0x1c8]
71017fbbdc  str w28,[x19, #0x1d4]
71017fbbe0  strh w9,[x19, #0x1d8]
71017fbbe4  str xzr,[x8]
71017fbbe8  add x8,x19,#0x1fc
71017fbbec  strb wzr,[x19, #0x1e4]
71017fbbf0  str w28,[x19, #0x1e8]
71017fbbf4  strh w9,[x19, #0x1ec]
71017fbbf8  strb wzr,[x19, #0x1f8]
71017fbbfc  str xzr,[x19, #0x1f0]
71017fbc00  strb wzr,[x19, #0x250]
71017fbc04  str xzr,[x19, #0x248]
71017fbc08  strh wzr,[x19, #0x290]
71017fbc0c  strh wzr,[x19, #0x294]
71017fbc10  str wzr,[x19, #0x2a8]
71017fbc14  str xzr,[x19, #0x2a0]
71017fbc18  str xzr,[x19, #0x298]
71017fbc1c  str xzr,[x10]
71017fbc20  str xzr,[x8]
71017fbc24  strb w20,[x19, #0x2ac]
71017fbc28  strb wzr,[x19, #0x2ad]
71017fbc2c  strh w9,[x19, #0x2ae]
71017fbc30  str wzr,[x19, #0x2b0]
71017fbc34  str wzr,[x19, #0x2d4]
71017fbc38  strb wzr,[x19, #0x2d0]
71017fbc3c  str xzr,[x19, #0x2c8]
71017fbc40  str xzr,[x19, #0x2c0]
71017fbc44  str xzr,[x19, #0x2b8]
71017fbc48  bl 0x710392e290
71017fbc4c  cbnz x0,0x71017fbc94
71017fbc50  adrp x8,0x7105332000
71017fbc54  ldr x0,[x8, #0xf00]
71017fbc58  cbz x0,0x71017fbc90
71017fbc5c  mov w8,#0xb8
71017fbc60  str wzr,[sp, #0x30]
71017fbc64  add x1,sp,#0x30
71017fbc68  str x8,[sp, #0x40]
71017fbc6c  ldr x8,[x0]
71017fbc70  ldr x8,[x8, #0x30]
71017fbc74  add x2,sp,#0x40
71017fbc78  blr x8
71017fbc7c  tbz w0,#0x0,0x71017fbc90
71017fbc80  mov w1,#0xb8
71017fbc84  mov w0,#0x10
71017fbc88  bl 0x710392e290
71017fbc8c  cbnz x0,0x71017fbc94
71017fbc90  mov x0,xzr
71017fbc94  adrp x25,0x71050a7000
71017fbc98  add x25,x25,#0x138
71017fbc9c  adrp x27,0x7101990000
71017fbca0  add x27,x27,#0x4d0
71017fbca4  adrp x26,0x7101990000
71017fbca8  add x26,x26,#0x4e0
71017fbcac  stp x25,x0,[x0]
71017fbcb0  str w28,[x0, #0xa8]
71017fbcb4  stp xzr,xzr,[x0, #0x10]
71017fbcb8  strb wzr,[x0, #0xac]
71017fbcbc  str w28,[x0, #0xb0]
71017fbcc0  stp xzr,xzr,[x0, #0x20]
71017fbcc4  stp xzr,x28,[x0, #0x98]
71017fbcc8  stp xzr,xzr,[x0, #0x88]
71017fbccc  stp xzr,xzr,[x0, #0x78]
71017fbcd0  stp xzr,xzr,[x0, #0x68]
71017fbcd4  stp xzr,xzr,[x0, #0x58]
71017fbcd8  stp xzr,xzr,[x0, #0x48]
71017fbcdc  str wzr,[x0, #0x50]
71017fbce0  stp xzr,xzr,[x0, #0x38]
71017fbce4  stp xzr,xzr,[x0, #0x30]
71017fbce8  str x27,[x0, #0x30]
71017fbcec  stp x26,xzr,[x0, #0x40]
71017fbcf0  str x0,[x19, #0x2d8]
71017fbcf4  strb wzr,[x19, #0x2e8]
71017fbcf8  str xzr,[x19, #0x2e0]
71017fbcfc  str wzr,[x19, #0x2f0]
71017fbd00  strb wzr,[x19, #0x2f4]
71017fbd04  ldr x22,[x22, #0xa8]
71017fbd08  cbz x22,0x71017fbd54
71017fbd0c  adrp x8,0x7105324000
71017fbd10  add x8,x8,#0x798
71017fbd14  ldarb w8,[x8]
71017fbd18  tbz w8,#0x0,0x71017fd2c4
71017fbd1c  ldr x8,[x22]
71017fbd20  ldr x8,[x8]
71017fbd24  mov x0,x22
71017fbd28  blr x8
71017fbd2c  cbz x0,0x71017fbd54
71017fbd30  adrp x8,0x7105324000
71017fbd34  add x8,x8,#0x7a0
71017fbd38  cmp x0,x8
71017fbd3c  b.eq 0x71017fbd4c
71017fbd40  ldr x0,[x0]
71017fbd44  cbnz x0,0x71017fbd38
71017fbd48  b 0x71017fbd54
71017fbd4c  ldr w8,[x22, #0x8]
71017fbd50  str w8,[x19, #0x2f0]
71017fbd54  adrp x8,0x71017f9000
71017fbd58  add x8,x8,#0x2a0
71017fbd5c  adrp x9,0x71017f9000
71017fbd60  add x9,x9,#0xb80
71017fbd64  stp x8,xzr,[x19, #0x28]
71017fbd68  adrp x8,0x71017f9000
71017fbd6c  add x8,x8,#0x650
71017fbd70  adrp x20,0x710532f000
71017fbd74  stp x8,xzr,[x19, #0x38]
71017fbd78  adrp x8,0x71017f9000
71017fbd7c  add x8,x8,#0xd70
71017fbd80  stp x8,xzr,[x19, #0x58]
71017fbd84  adrp x8,0x71017f9000
71017fbd88  add x8,x8,#0xe50
71017fbd8c  stp x8,xzr,[x19, #0x68]
71017fbd90  adrp x8,0x71017fa000
71017fbd94  add x8,x8,#0x1c0
71017fbd98  stp x9,xzr,[x19, #0x48]
71017fbd9c  adrp x9,0x71017fa000
71017fbda0  add x9,x9,#0x170
71017fbda4  stp x8,xzr,[x19, #0x88]
71017fbda8  adrp x8,0x71017fa000
71017fbdac  add x8,x8,#0xfb0
71017fbdb0  stp x9,xzr,[x19, #0x78]
71017fbdb4  adrp x9,0x71017fb000
71017fbdb8  add x9,x9,#0x50
71017fbdbc  stp x8,xzr,[x19, #0x98]
71017fbdc0  adrp x8,0x71017fb000
71017fbdc4  add x8,x8,#0x2b0
71017fbdc8  stp x9,xzr,[x19, #0xa8]
71017fbdcc  stp x8,xzr,[x19, #0xb8]
71017fbdd0  ldr x8,[x20, #0x498]
71017fbdd4  cbnz x8,0x71017fbe3c
71017fbdd8  mov w0,#0x10
71017fbddc  mov w1,#0x8
71017fbde0  bl 0x710392e290
71017fbde4  cbnz x0,0x71017fbe2c
71017fbde8  adrp x8,0x7105332000
71017fbdec  ldr x0,[x8, #0xf00]
71017fbdf0  cbz x0,0x71017fbe28
71017fbdf4  mov w8,#0x8
71017fbdf8  str wzr,[sp, #0x30]
71017fbdfc  add x1,sp,#0x30
71017fbe00  str x8,[sp, #0x40]
71017fbe04  ldr x8,[x0]
71017fbe08  ldr x8,[x8, #0x30]
71017fbe0c  add x2,sp,#0x40
71017fbe10  blr x8
71017fbe14  tbz w0,#0x0,0x71017fbe28
71017fbe18  mov w0,#0x10
71017fbe1c  mov w1,#0x8
71017fbe20  bl 0x710392e290
71017fbe24  cbnz x0,0x71017fbe2c
71017fbe28  mov x0,xzr
71017fbe2c  mov w8,#0x2
71017fbe30  str w8,[x0]
71017fbe34  strb wzr,[x0, #0x4]
71017fbe38  str x0,[x20, #0x498]
71017fbe3c  ldr x22,[x21, #0x58]
71017fbe40  str x19,[x21, #0x58]
71017fbe44  cbz x22,0x71017fbe5c
71017fbe48  mov x0,x22
71017fbe4c  bl 0x71017fb640
71017fbe50  mov x0,x22
71017fbe54  bl 0x710392eb40
71017fbe58  ldr x19,[x21, #0x58]
71017fbe5c  ldr w8,[x19, #0x2f0]
71017fbe60  cmp w8,#0x1
71017fbe64  b.ne 0x71017fbe98
71017fbe68  adrp x8,0x7105314000
71017fbe6c  add x8,x8,#0x4d8
71017fbe70  ldarb w8,[x8]
71017fbe74  tbz w8,#0x0,0x71017fd304
71017fbe78  adrp x8,0x7105307000
71017fbe7c  ldr w1,[x8, #0xd50]
71017fbe80  adrp x8,0x710532f000
71017fbe84  ldr x8,[x8, #0x7b0]
71017fbe88  ldr x0,[x8, #0x8]
71017fbe8c  bl 0x71032e14a0
71017fbe90  tbz w0,#0x0,0x71017fbf50
71017fbe94  ldr w8,[x19, #0x2f0]
71017fbe98  cmp w8,#0x2
71017fbe9c  b.ne 0x71017fbf44
71017fbea0  adrp x8,0x7105314000
71017fbea4  add x8,x8,#0x4d8
71017fbea8  ldarb w8,[x8]
71017fbeac  tbz w8,#0x0,0x71017fd344
71017fbeb0  adrp x8,0x7105307000
71017fbeb4  ldr w1,[x8, #0xd50]
71017fbeb8  adrp x8,0x710532f000
71017fbebc  ldr x8,[x8, #0x7b0]
71017fbec0  ldr x0,[x8, #0x8]
71017fbec4  bl 0x71032df050
71017fbec8  adrp x8,0x710532f000
71017fbecc  ldr x8,[x8, #0x730]
71017fbed0  ldr x8,[x8, #0x8]
71017fbed4  ldr x22,[x0, #0x8]
71017fbed8  mov x1,x22
71017fbedc  ldr x23,[x8, #0x168]
71017fbee0  mov x21,x0
71017fbee4  mov x0,x23
71017fbee8  bl 0x71032632a0
71017fbeec  mov x20,x22
71017fbef0  tbz w0,#0x0,0x71017fbf0c
71017fbef4  mov x1,#0xb807
71017fbef8  movk x1,#0xb1cc, LSL #16
71017fbefc  movk x1,#0x11, LSL #32
71017fbf00  mov x0,x23
71017fbf04  bl 0x71032631a0
71017fbf08  mov x20,x0
71017fbf0c  mov x0,x23
71017fbf10  mov x1,x22
71017fbf14  bl 0x71032633f0
71017fbf18  ldrb w8,[x21, #0x12]
71017fbf1c  cmp w0,w8
71017fbf20  csel w9,w8,wzr,hi
71017fbf24  ldr w8,[x19, #0x2f0]
71017fbf28  cmp w8,#0x2
71017fbf2c  b.ne 0x71017fbf60
71017fbf30  add x21,x19,#0x130
71017fbf34  mov w22,#0x1
71017fbf38  mov x23,x20
71017fbf3c  mov w20,w9
71017fbf40  b 0x71017fbf8c
71017fbf44  mov w20,wzr
71017fbf48  mov w22,wzr
71017fbf4c  b 0x71017fbf6c
71017fbf50  mov w20,wzr
71017fbf54  mov w22,wzr
71017fbf58  str wzr,[x19, #0x2f0]
71017fbf5c  b 0x71017fbf6c
71017fbf60  mov w22,#0x1
71017fbf64  mov x23,x20
71017fbf68  mov w20,w9
71017fbf6c  ldr x0,[x19, #0x130]
71017fbf70  ldrsw x2,[x0, #0x70]
71017fbf74  ldr w3,[x0, #0x68]
71017fbf78  adrp x1,0x7104543000
71017fbf7c  add x1,x1,#0x9a8
71017fbf80  mov w4,wzr
71017fbf84  add x21,x19,#0x130
71017fbf88  bl 0x710323beb0
71017fbf8c  ldr x0,[x19, #0x130]
71017fbf90  ldrsw x2,[x0, #0x70]
71017fbf94  ldr w3,[x0, #0x68]
71017fbf98  adrp x1,0x7104543000
71017fbf9c  add x1,x1,#0x930
71017fbfa0  mov w4,wzr
71017fbfa4  bl 0x710323beb0
71017fbfa8  cbz w22,0x71017fc01c
71017fbfac  orr w2,wzr,#0x3
71017fbfb0  mov x0,x23
71017fbfb4  mov w1,w20
71017fbfb8  bl 0x7103238a70
71017fbfbc  tst x0,#0xffffffffff
71017fbfc0  str x0,[sp, #0x40]
71017fbfc4  b.eq 0x71017fbfdc
71017fbfc8  ldr x0,[x19, #0x130]
71017fbfcc  ldrsw x2,[x0, #0x70]
71017fbfd0  ldr w3,[x0, #0x68]
71017fbfd4  add x1,sp,#0x40
71017fbfd8  bl 0x710323c4e0
71017fbfdc  adrp x8,0x710532f000
71017fbfe0  ldr x8,[x8, #0x730]
71017fbfe4  ldr x8,[x8, #0x8]
71017fbfe8  ldr x0,[x8, #0x168]
71017fbfec  mov x1,x23
71017fbff0  bl 0x7103263f80
71017fbff4  mov w1,#0x12
71017fbff8  bl 0x7103238d60
71017fbffc  tst x0,#0xffffffffff
71017fc000  str x0,[sp, #0x40]
71017fc004  b.eq 0x71017fc01c
71017fc008  ldr x0,[x19, #0x130]
71017fc00c  ldrsw x2,[x0, #0x70]
71017fc010  ldr w3,[x0, #0x68]
71017fc014  add x1,sp,#0x40
71017fc018  bl 0x710323c4e0
71017fc01c  str w22,[sp, #0xc]
71017fc020  ldr x22,[x19, #0x130]
71017fc024  mov x0,x22
71017fc028  str x23,[sp, #0x10]
71017fc02c  bl 0x710323cb80
71017fc030  tbnz w0,#0x0,0x71017fc050
71017fc034  mov w23,#0x4240
71017fc038  movk w23,#0xf, LSL #16
71017fc03c  mov x0,x23
71017fc040  bl 0x71039c0d80
71017fc044  mov x0,x22
71017fc048  bl 0x710323cb80
71017fc04c  tbz w0,#0x0,0x71017fc03c
71017fc050  ldr w8,[x19, #0x2f0]
71017fc054  cmp w8,#0x2
71017fc058  b.eq 0x71017fce94
71017fc05c  mov w1,#0x88
71017fc060  mov w0,#0x10
71017fc064  str w20,[sp, #0x8]
71017fc068  bl 0x710392e290
71017fc06c  mov x22,x0
71017fc070  cbnz x0,0x71017fc0bc
71017fc074  adrp x8,0x7105332000
71017fc078  ldr x0,[x8, #0xf00]
71017fc07c  cbz x0,0x71017fc0b8
71017fc080  mov w8,#0x88
71017fc084  str wzr,[sp, #0x30]
71017fc088  add x1,sp,#0x30
71017fc08c  str x8,[sp, #0x40]
71017fc090  ldr x8,[x0]
71017fc094  ldr x8,[x8, #0x30]
71017fc098  add x2,sp,#0x40
71017fc09c  blr x8
71017fc0a0  tbz w0,#0x0,0x71017fc0b8
71017fc0a4  mov w1,#0x88
71017fc0a8  mov w0,#0x10
71017fc0ac  bl 0x710392e290
71017fc0b0  mov x22,x0
71017fc0b4  cbnz x0,0x71017fc0bc
71017fc0b8  mov x22,xzr
71017fc0bc  adrp x8,0x71050a7000
71017fc0c0  add x8,x8,#0x3a0
71017fc0c4  mov w20,#0x1
71017fc0c8  stp x8,xzr,[x22]
71017fc0cc  orr x8,xzr,#0x1ffffffff
71017fc0d0  mov w1,#0x570
71017fc0d4  mov w0,#0x10
71017fc0d8  strb wzr,[x22, #0x58]
71017fc0dc  stp xzr,xzr,[x22, #0x10]
71017fc0e0  str x21,[x22, #0x78]
71017fc0e4  strb w20,[x22, #0x70]
71017fc0e8  stp xzr,xzr,[x22, #0x48]
71017fc0ec  stp xzr,x8,[x22, #0x60]
71017fc0f0  bl 0x710392e290
71017fc0f4  mov x23,x0
71017fc0f8  cbnz x0,0x71017fc144
71017fc0fc  adrp x8,0x7105332000
71017fc100  ldr x0,[x8, #0xf00]
71017fc104  cbz x0,0x71017fc140
71017fc108  mov w8,#0x570
71017fc10c  str wzr,[sp, #0x30]
71017fc110  add x1,sp,#0x30
71017fc114  str x8,[sp, #0x40]
71017fc118  ldr x8,[x0]
71017fc11c  ldr x8,[x8, #0x30]
71017fc120  add x2,sp,#0x40
71017fc124  blr x8
71017fc128  tbz w0,#0x0,0x71017fc140
71017fc12c  mov w1,#0x570
71017fc130  mov w0,#0x10
71017fc134  bl 0x710392e290
71017fc138  mov x23,x0
71017fc13c  cbnz x0,0x71017fc144
71017fc140  mov x23,xzr
71017fc144  mov w8,#0x100
71017fc148  strh w8,[x23, #0x8]
71017fc14c  mov w8,#0x4001
71017fc150  str w8,[x23, #0xc]
71017fc154  adrp x8,0x71050a7000
71017fc158  add x8,x8,#0x240
71017fc15c  mov w0,#0x10
71017fc160  mov w1,#0x8
71017fc164  str x21,[sp]
71017fc168  strb w20,[x23, #0x10]
71017fc16c  str w20,[x23, #0x14]
71017fc170  strb wzr,[x23, #0x18]
71017fc174  str x8,[x23]
71017fc178  bl 0x710392e290
71017fc17c  mov x24,x0
71017fc180  cbnz x0,0x71017fc1cc
71017fc184  adrp x8,0x7105332000
71017fc188  ldr x0,[x8, #0xf00]
71017fc18c  cbz x0,0x71017fc1c8
71017fc190  mov w8,#0x8
71017fc194  str wzr,[sp, #0x30]
71017fc198  add x1,sp,#0x30
71017fc19c  str x8,[sp, #0x40]
71017fc1a0  ldr x8,[x0]
71017fc1a4  ldr x8,[x8, #0x30]
71017fc1a8  add x2,sp,#0x40
71017fc1ac  blr x8
71017fc1b0  tbz w0,#0x0,0x71017fc1c8
71017fc1b4  mov w0,#0x10
71017fc1b8  mov w1,#0x8
71017fc1bc  bl 0x710392e290
71017fc1c0  mov x24,x0
71017fc1c4  cbnz x0,0x71017fc1cc
71017fc1c8  mov x24,xzr
71017fc1cc  mov x0,x24
71017fc1d0  bl 0x7103773200
71017fc1d4  str x24,[x23, #0x20]
71017fc1d8  add x24,x23,#0x28
71017fc1dc  mov x0,x24
71017fc1e0  bl 0x7103776290
71017fc1e4  add x21,x23,#0x38
71017fc1e8  mov x0,x21
71017fc1ec  bl 0x7103776290
71017fc1f0  add x0,x23,#0x70
71017fc1f4  mov w2,#0x25c
71017fc1f8  mov w1,wzr
71017fc1fc  str wzr,[x23, #0x2cc]
71017fc200  stp xzr,xzr,[x23, #0x60]
71017fc204  stp xzr,xzr,[x23, #0x50]
71017fc208  str x23,[x23, #0x48]
71017fc20c  str x28,[x23, #0x2d0]
71017fc210  str w28,[x23, #0x2d8]
71017fc214  strb wzr,[x23, #0x2dc]
71017fc218  bl 0x71039c02a0
71017fc21c  adrp x8,0x7105240000
71017fc220  add x8,x8,#0x1d0
71017fc224  mov w0,#0x10
71017fc228  mov w1,#0x10
71017fc22c  str xzr,[x23, #0x2e0]
71017fc230  str x8,[x23, #0x2e8]
71017fc234  bl 0x710392e290
71017fc238  cbnz x0,0x71017fc280
71017fc23c  adrp x8,0x7105332000
71017fc240  ldr x0,[x8, #0xf00]
71017fc244  cbz x0,0x71017fc27c
71017fc248  mov w8,#0x10
71017fc24c  str wzr,[sp, #0x30]
71017fc250  add x1,sp,#0x30
71017fc254  str x8,[sp, #0x40]
71017fc258  ldr x8,[x0]
71017fc25c  ldr x8,[x8, #0x30]
71017fc260  add x2,sp,#0x40
71017fc264  blr x8
71017fc268  tbz w0,#0x0,0x71017fc27c
71017fc26c  mov w0,#0x10
71017fc270  mov w1,#0x10
71017fc274  bl 0x710392e290
71017fc278  cbnz x0,0x71017fc280
71017fc27c  mov x0,xzr
71017fc280  stp xzr,xzr,[x0]
71017fc284  mov w1,#0x80
71017fc288  str x0,[x23, #0x2f0]
71017fc28c  mov w0,#0x10
71017fc290  bl 0x710392e290
71017fc294  cbnz x0,0x71017fc2dc
71017fc298  adrp x8,0x7105332000
71017fc29c  ldr x0,[x8, #0xf00]
71017fc2a0  cbz x0,0x71017fc2d8
71017fc2a4  mov w8,#0x80
71017fc2a8  str wzr,[sp, #0x30]
71017fc2ac  add x1,sp,#0x30
71017fc2b0  str x8,[sp, #0x40]
71017fc2b4  ldr x8,[x0]
71017fc2b8  ldr x8,[x8, #0x30]
71017fc2bc  add x2,sp,#0x40
71017fc2c0  blr x8
71017fc2c4  tbz w0,#0x0,0x71017fc2d8
71017fc2c8  mov w0,#0x10
71017fc2cc  mov w1,#0x80
71017fc2d0  bl 0x710392e290
71017fc2d4  cbnz x0,0x71017fc2dc
71017fc2d8  mov x0,xzr
71017fc2dc  adrp x8,0x7105181000
71017fc2e0  add x8,x8,#0xb40
71017fc2e4  str x8,[x0]
71017fc2e8  mov x8,x0
71017fc2ec  mov w1,#0xb8
71017fc2f0  str xzr,[x8, #0x10]!
71017fc2f4  str x8,[x0, #0x8]
71017fc2f8  mov x8,x0
71017fc2fc  str xzr,[x8, #0x28]!
71017fc300  stp xzr,x8,[x0, #0x18]
71017fc304  mov x8,x0
71017fc308  str xzr,[x8, #0x40]!
71017fc30c  stp xzr,x8,[x0, #0x30]
71017fc310  mov x8,x0
71017fc314  str xzr,[x8, #0x58]!
71017fc318  stp xzr,x8,[x0, #0x48]
71017fc31c  mov w8,#0x2
71017fc320  str xzr,[x0, #0x60]
71017fc324  str w8,[x0, #0x68]
71017fc328  orr w8,wzr,#0xffff
71017fc32c  str wzr,[x0, #0x78]
71017fc330  str xzr,[x0, #0x70]
71017fc334  str x0,[x23, #0x2f8]
71017fc338  mov w0,#0x10
71017fc33c  str w28,[x23, #0x300]
71017fc340  strh w8,[x23, #0x304]
71017fc344  strh wzr,[x23, #0x320]
71017fc348  str xzr,[x23, #0x318]
71017fc34c  str xzr,[x23, #0x310]
71017fc350  str xzr,[x23, #0x308]
71017fc354  bl 0x710392e290
71017fc358  cbnz x0,0x71017fc3a0
71017fc35c  adrp x8,0x7105332000
71017fc360  ldr x0,[x8, #0xf00]
71017fc364  cbz x0,0x71017fc39c
71017fc368  mov w8,#0xb8
71017fc36c  str wzr,[sp, #0x30]
71017fc370  add x1,sp,#0x30
71017fc374  str x8,[sp, #0x40]
71017fc378  ldr x8,[x0]
71017fc37c  ldr x8,[x8, #0x30]
71017fc380  add x2,sp,#0x40
71017fc384  blr x8
71017fc388  tbz w0,#0x0,0x71017fc39c
71017fc38c  mov w1,#0xb8
71017fc390  mov w0,#0x10
71017fc394  bl 0x710392e290
71017fc398  cbnz x0,0x71017fc3a0
71017fc39c  mov x0,xzr
71017fc3a0  add x8,x23,#0x330
71017fc3a4  stp x25,x0,[x0]
71017fc3a8  stp xzr,xzr,[x0, #0x10]
71017fc3ac  str w28,[x0, #0xa8]
71017fc3b0  strb wzr,[x0, #0xac]
71017fc3b4  str w28,[x0, #0xb0]
71017fc3b8  stp xzr,xzr,[x0, #0x20]
71017fc3bc  stp xzr,x28,[x0, #0x98]
71017fc3c0  stp xzr,xzr,[x0, #0x88]
71017fc3c4  stp xzr,xzr,[x0, #0x78]
71017fc3c8  stp xzr,xzr,[x0, #0x68]
71017fc3cc  stp xzr,xzr,[x0, #0x58]
71017fc3d0  stp xzr,xzr,[x0, #0x48]
71017fc3d4  str wzr,[x0, #0x50]
71017fc3d8  stp xzr,xzr,[x0, #0x38]
71017fc3dc  stp xzr,xzr,[x0, #0x30]
71017fc3e0  str x27,[x0, #0x30]
71017fc3e4  stp x26,xzr,[x0, #0x40]
71017fc3e8  str x8,[x23, #0x330]
71017fc3ec  mov x8,#0x2
71017fc3f0  movk x8,#0x3, LSL #32
71017fc3f4  str x8,[x23, #0x3f8]
71017fc3f8  mov w8,#0x1
71017fc3fc  strb w8,[x23, #0x404]
71017fc400  adrp x8,0x7103345000
71017fc404  add x8,x8,#0x430
71017fc408  str xzr,[x23, #0x358]
71017fc40c  str x8,[x23, #0x358]
71017fc410  adrp x8,0x7103345000
71017fc414  add x8,x8,#0x440
71017fc418  str xzr,[x23, #0x368]
71017fc41c  str x8,[x23, #0x368]
71017fc420  adrp x8,0x7103345000
71017fc424  add x8,x8,#0x520
71017fc428  str xzr,[x23, #0x378]
71017fc42c  str x8,[x23, #0x378]
71017fc430  adrp x8,0x7103345000
71017fc434  add x8,x8,#0x7a0
71017fc438  str xzr,[x23, #0x388]
71017fc43c  str x8,[x23, #0x388]
71017fc440  add x8,x23,#0x408
71017fc444  str x8,[x23, #0x408]
71017fc448  adrp x8,0x7103345000
71017fc44c  add x8,x8,#0x940
71017fc450  str xzr,[x23, #0x430]
71017fc454  str x8,[x23, #0x430]
71017fc458  adrp x8,0x7103345000
71017fc45c  add x8,x8,#0x950
71017fc460  str xzr,[x23, #0x440]
71017fc464  str x8,[x23, #0x440]
71017fc468  adrp x8,0x7103345000
71017fc46c  add x8,x8,#0xa70
71017fc470  str xzr,[x23, #0x460]
71017fc474  str x8,[x23, #0x460]
71017fc478  adrp x8,0x7103345000
71017fc47c  add x8,x8,#0xb50
71017fc480  str xzr,[x23, #0x450]
71017fc484  str x8,[x23, #0x450]
71017fc488  adrp x8,0x7103345000
71017fc48c  add x8,x8,#0xd80
71017fc490  str xzr,[x23, #0x470]
71017fc494  str x8,[x23, #0x470]
71017fc498  adrp x8,0x7103345000
71017fc49c  add x8,x8,#0xeb0
71017fc4a0  str xzr,[x23, #0x480]
71017fc4a4  str x8,[x23, #0x480]
71017fc4a8  adrp x8,0x7103345000
71017fc4ac  add x8,x8,#0xf60
71017fc4b0  str xzr,[x23, #0x490]
71017fc4b4  str x8,[x23, #0x490]
71017fc4b8  adrp x8,0x7103346000
71017fc4bc  add x8,x8,#0xa0
71017fc4c0  str x0,[x23, #0x328]
71017fc4c4  add x0,x23,#0x520
71017fc4c8  str xzr,[x23, #0x4a0]
71017fc4cc  str x8,[x23, #0x4a0]
71017fc4d0  adrp x8,0x7103346000
71017fc4d4  add x8,x8,#0x140
71017fc4d8  str xzr,[x23, #0x348]
71017fc4dc  str xzr,[x23, #0x340]
71017fc4e0  str xzr,[x23, #0x338]
71017fc4e4  str xzr,[x23, #0x350]
71017fc4e8  str x28,[x23, #0x3e8]
71017fc4ec  str w28,[x23, #0x3f0]
71017fc4f0  strb wzr,[x23, #0x3f4]
71017fc4f4  str xzr,[x23, #0x3e0]
71017fc4f8  str xzr,[x23, #0x3d8]
71017fc4fc  str xzr,[x23, #0x3d0]
71017fc500  str xzr,[x23, #0x3c8]
71017fc504  str xzr,[x23, #0x3c0]
71017fc508  str xzr,[x23, #0x3b8]
71017fc50c  str xzr,[x23, #0x3b0]
71017fc510  str xzr,[x23, #0x3a8]
71017fc514  str xzr,[x23, #0x3a0]
71017fc518  str xzr,[x23, #0x398]
71017fc51c  str xzr,[x23, #0x390]
71017fc520  str xzr,[x23, #0x380]
71017fc524  str xzr,[x23, #0x370]
71017fc528  str xzr,[x23, #0x360]
71017fc52c  str wzr,[x23, #0x400]
71017fc530  str xzr,[x23, #0x360]
71017fc534  str xzr,[x23, #0x370]
71017fc538  str xzr,[x23, #0x380]
71017fc53c  str xzr,[x23, #0x390]
71017fc540  str wzr,[x23, #0x398]
71017fc544  str xzr,[x23, #0x508]
71017fc548  str xzr,[x23, #0x428]
71017fc54c  str xzr,[x23, #0x420]
71017fc550  str xzr,[x23, #0x418]
71017fc554  str xzr,[x23, #0x410]
71017fc558  str x28,[x23, #0x510]
71017fc55c  str w28,[x23, #0x518]
71017fc560  strb wzr,[x23, #0x51c]
71017fc564  str xzr,[x23, #0x500]
71017fc568  str xzr,[x23, #0x4f8]
71017fc56c  str xzr,[x23, #0x4f0]
71017fc570  str xzr,[x23, #0x4e8]
71017fc574  str xzr,[x23, #0x4e0]
71017fc578  str xzr,[x23, #0x4d8]
71017fc57c  str xzr,[x23, #0x4d0]
71017fc580  str xzr,[x23, #0x4c8]
71017fc584  str xzr,[x23, #0x4c0]
71017fc588  str xzr,[x23, #0x4b8]
71017fc58c  str xzr,[x23, #0x4b0]
71017fc590  str xzr,[x23, #0x4a8]
71017fc594  str xzr,[x23, #0x498]
71017fc598  str xzr,[x23, #0x488]
71017fc59c  str xzr,[x23, #0x478]
71017fc5a0  str xzr,[x23, #0x468]
71017fc5a4  str xzr,[x23, #0x458]
71017fc5a8  str xzr,[x23, #0x448]
71017fc5ac  str xzr,[x23, #0x438]
71017fc5b0  str xzr,[x23, #0x438]
71017fc5b4  str xzr,[x23, #0x448]
71017fc5b8  str xzr,[x23, #0x468]
71017fc5bc  str xzr,[x23, #0x458]
71017fc5c0  str xzr,[x23, #0x478]
71017fc5c4  str xzr,[x23, #0x488]
71017fc5c8  str xzr,[x23, #0x498]
71017fc5cc  str xzr,[x23, #0x4a8]
71017fc5d0  str x8,[x23, #0x4b0]
71017fc5d4  str xzr,[x23, #0x4b8]
71017fc5d8  str wzr,[x23, #0x4c0]
71017fc5dc  bl 0x7103382c30
71017fc5e0  mov x8,#0x650000000000
71017fc5e4  movk x8,#0x87, LSL #48
71017fc5e8  str x8,[x23, #0x540]
71017fc5ec  mov x8,#-0x1
71017fc5f0  adrp x9,0x7104f73000
71017fc5f4  add x9,x9,#0xd30
71017fc5f8  strb wzr,[x23, #0x548]
71017fc5fc  str x9,[x23, #0x530]
71017fc600  str wzr,[x23, #0x528]
71017fc604  str x8,[x23, #0x550]
71017fc608  add x8,x23,#0x565
71017fc60c  adrp x9,0x71019a6000
71017fc610  add x9,x9,#0x550
71017fc614  str xzr,[x23, #0x538]
71017fc618  str xzr,[x8]
71017fc61c  adrp x8,0x71019a6000
71017fc620  add x8,x8,#0x540
71017fc624  str xzr,[x23, #0x560]
71017fc628  str xzr,[x23, #0x558]
71017fc62c  str xzr,[x23, #0x208]
71017fc630  str xzr,[x23, #0x218]
71017fc634  str xzr,[x23, #0x228]
71017fc638  str xzr,[x23, #0x238]
71017fc63c  str xzr,[x23, #0x248]
71017fc640  str xzr,[x23, #0x258]
71017fc644  str xzr,[x23, #0x268]
71017fc648  str xzr,[x23, #0x278]
71017fc64c  stp x8,xzr,[x23, #0x70]
71017fc650  adrp x8,0x71019a6000
71017fc654  add x8,x8,#0x880
71017fc658  stp x8,xzr,[x23, #0x90]
71017fc65c  adrp x8,0x71019a6000
71017fc660  add x8,x8,#0x920
71017fc664  stp x8,xzr,[x23, #0xa0]
71017fc668  adrp x8,0x71019a7000
71017fc66c  add x8,x8,#0x7e0
71017fc670  stp x8,xzr,[x23, #0xc0]
71017fc674  adrp x8,0x71019a7000
71017fc678  add x8,x8,#0x880
71017fc67c  stp x8,xzr,[x23, #0xd0]
71017fc680  adrp x8,0x71019a7000
71017fc684  add x8,x8,#0xa70
71017fc688  stp x8,xzr,[x23, #0xf0]
71017fc68c  adrp x8,0x71019a7000
71017fc690  add x8,x8,#0xb30
71017fc694  stp x8,xzr,[x23, #0x100]
71017fc698  adrp x8,0x71019a7000
71017fc69c  add x8,x8,#0xfb0
71017fc6a0  stp x8,xzr,[x23, #0x130]
71017fc6a4  adrp x8,0x71019a8000
71017fc6a8  add x8,x8,#0x5d0
71017fc6ac  stp x8,xzr,[x23, #0x140]
71017fc6b0  adrp x8,0x71019a8000
71017fc6b4  add x8,x8,#0x970
71017fc6b8  stp x8,xzr,[x23, #0x160]
71017fc6bc  adrp x8,0x71019a8000
71017fc6c0  add x8,x8,#0xb30
71017fc6c4  stp x8,xzr,[x23, #0x170]
71017fc6c8  adrp x8,0x71019a9000
71017fc6cc  add x8,x8,#0x940
71017fc6d0  stp x8,xzr,[x23, #0x1f0]
71017fc6d4  adrp x8,0x71019a9000
71017fc6d8  add x8,x8,#0xa30
71017fc6dc  str x8,[x23, #0x200]
71017fc6e0  adrp x8,0x71019a9000
71017fc6e4  add x8,x8,#0xb20
71017fc6e8  stp x8,xzr,[x23, #0x1e0]
71017fc6ec  adrp x8,0x71019a9000
71017fc6f0  add x8,x8,#0xb60
71017fc6f4  stp x8,xzr,[x23, #0x190]
71017fc6f8  adrp x8,0x71019aa000
71017fc6fc  add x8,x8,#0x670
71017fc700  stp x8,xzr,[x23, #0x1a0]
71017fc704  adrp x8,0x71019aa000
71017fc708  add x8,x8,#0xc70
71017fc70c  stp x8,xzr,[x23, #0x1c0]
71017fc710  adrp x8,0x71019aa000
71017fc714  add x8,x8,#0xcd0
71017fc718  stp x8,xzr,[x23, #0x1d0]
71017fc71c  adrp x8,0x71019aa000
71017fc720  add x8,x8,#0xd50
71017fc724  str x8,[x23, #0x210]
71017fc728  adrp x8,0x71019aa000
71017fc72c  add x8,x8,#0xd80
71017fc730  str x8,[x23, #0x220]
71017fc734  adrp x8,0x71019ab000
71017fc738  add x8,x8,#0x7c0
71017fc73c  str x8,[x23, #0x230]
71017fc740  adrp x8,0x71019ab000
71017fc744  add x8,x8,#0xca0
71017fc748  str x8,[x23, #0x240]
71017fc74c  adrp x8,0x71019ab000
71017fc750  add x8,x8,#0xf80
71017fc754  str x8,[x23, #0x250]
71017fc758  adrp x8,0x71019ac000
71017fc75c  add x8,x8,#0x40
71017fc760  str x8,[x23, #0x260]
71017fc764  adrp x8,0x71019ac000
71017fc768  add x8,x8,#0x100
71017fc76c  str x8,[x23, #0x270]
71017fc770  ldrsw x8,[x23, #0x2cc]
71017fc774  cmp w8,#0x13
71017fc778  stp x9,xzr,[x23, #0x80]
71017fc77c  adrp x9,0x71019a7000
71017fc780  add x9,x9,#0x1a0
71017fc784  stp x9,xzr,[x23, #0xb0]
71017fc788  adrp x9,0x71019a7000
71017fc78c  add x9,x9,#0x970
71017fc790  stp x9,xzr,[x23, #0xe0]
71017fc794  adrp x9,0x71019a7000
71017fc798  add x9,x9,#0xd70
71017fc79c  stp x9,xzr,[x23, #0x110]
71017fc7a0  adrp x9,0x71019a8000
71017fc7a4  add x9,x9,#0x7e0
71017fc7a8  stp x9,xzr,[x23, #0x150]
71017fc7ac  adrp x9,0x71019a9000
71017fc7b0  add x9,x9,#0x3d0
71017fc7b4  stp x9,xzr,[x23, #0x180]
71017fc7b8  adrp x9,0x71019aa000
71017fc7bc  add x9,x9,#0xbd0
71017fc7c0  stp x9,xzr,[x23, #0x1b0]
71017fc7c4  adrp x9,0x71019aa000
71017fc7c8  add x9,x9,#0xd10
71017fc7cc  stp x9,xzr,[x23, #0x120]
71017fc7d0  b.cs 0x71017fd384
71017fc7d4  add x8,x23,x8, LSL #0x2
71017fc7d8  str wzr,[x8, #0x280]
71017fc7dc  ldr x1,[x19, #0x130]
71017fc7e0  add x26,x23,#0x20
71017fc7e4  adrp x2,0x7104543000
71017fc7e8  add x2,x2,#0x9a8
71017fc7ec  mov w3,#0x1
71017fc7f0  mov x0,x26
71017fc7f4  bl 0x71032cbf30
71017fc7f8  ldr x8,[x23, #0x20]
71017fc7fc  ldr x8,[x8]
71017fc800  add x9,x8,#0x8
71017fc804  cmp x9,x24
71017fc808  b.eq 0x71017fc87c
71017fc80c  ldr x9,[x8, #0x10]
71017fc810  ldr x9,[x9]
71017fc814  ldr x10,[x23, #0x30]
71017fc818  str x9,[x10]
71017fc81c  ldr x9,[x8, #0x10]
71017fc820  ldr x9,[x9, #0x8]
71017fc824  ldr x10,[x23, #0x30]
71017fc828  str x9,[x10, #0x8]
71017fc82c  ldr x9,[x8, #0x10]
71017fc830  ldr x8,[x23, #0x30]
71017fc834  cmp x8,x9
71017fc838  b.eq 0x71017fc87c
71017fc83c  ldr x10,[x9, #0x18]
71017fc840  ldr x10,[x10]
71017fc844  ldr x11,[x8, #0x18]
71017fc848  str x10,[x11]
71017fc84c  ldr x10,[x9, #0x18]
71017fc850  ldr x10,[x10, #0x8]
71017fc854  ldr x11,[x8, #0x18]
71017fc858  str x10,[x11, #0x8]
71017fc85c  ldr x10,[x9, #0x18]
71017fc860  ldr x10,[x10, #0x10]
71017fc864  ldr x11,[x8, #0x18]
71017fc868  str x10,[x11, #0x10]
71017fc86c  ldr x9,[x9, #0x18]
71017fc870  ldr x9,[x9, #0x18]
71017fc874  ldr x8,[x8, #0x18]
71017fc878  str x9,[x8, #0x18]
71017fc87c  adrp x1,0x710425f000
71017fc880  add x1,x1,#0x615
71017fc884  add x8,sp,#0x40
71017fc888  mov x0,x24
71017fc88c  add x20,sp,#0x40
71017fc890  bl 0x7103776640
71017fc894  cmp x20,x21
71017fc898  ldr x21,[sp]
71017fc89c  b.eq 0x71017fc8d4
71017fc8a0  ldr x8,[sp, #0x48]
71017fc8a4  str xzr,[sp, #0x48]
71017fc8a8  ldr x25,[x23, #0x40]
71017fc8ac  str x8,[x23, #0x40]
71017fc8b0  cbz x25,0x71017fc8d4
71017fc8b4  ldr x0,[x25, #0x18]
71017fc8b8  adrp x8,0x710523d000
71017fc8bc  add x8,x8,#0x9a8
71017fc8c0  stp x8,xzr,[x25, #0x10]
71017fc8c4  cbz x0,0x71017fc8cc
71017fc8c8  bl 0x710392eb40
71017fc8cc  mov x0,x25
71017fc8d0  bl 0x710392eb40
71017fc8d4  ldr x27,[sp, #0x48]
71017fc8d8  add x20,sp,#0x40
71017fc8dc  add x25,x23,#0x2e0
71017fc8e0  adrp x8,0x710523d000
71017fc8e4  add x8,x8,#0x988
71017fc8e8  stp x8,xzr,[sp, #0x40]
71017fc8ec  cbz x27,0x71017fc910
71017fc8f0  ldr x0,[x27, #0x18]
71017fc8f4  adrp x8,0x710523d000
71017fc8f8  add x8,x8,#0x9a8
71017fc8fc  stp x8,xzr,[x27, #0x10]
71017fc900  cbz x0,0x71017fc908
71017fc904  bl 0x710392eb40
71017fc908  mov x0,x27
71017fc90c  bl 0x710392eb40
71017fc910  ldr x8,[x26]
71017fc914  mov w26,#0x1
71017fc918  ldr x8,[x8]
71017fc91c  ldr x8,[x8]
71017fc920  ldr x9,[x8, #0x600]
71017fc924  mov w10,#0x80
71017fc928  str w10,[x9, #0xdc]
71017fc92c  ldr x9,[x8, #0x600]
71017fc930  str w10,[x9, #0xe0]
71017fc934  ldr x8,[x8, #0x600]
71017fc938  str w10,[x8, #0x18]
71017fc93c  mov w27,#0x101
71017fc940  mov x8,#0x41f0000000000000
71017fc944  add x0,sp,#0x40
71017fc948  str xzr,[sp, #0x40]
71017fc94c  strh w27,[sp, #0x48]
71017fc950  strh wzr,[sp, #0x4e]
71017fc954  stur wzr,[sp, #0x4a]
71017fc958  str w26,[sp, #0x50]
71017fc95c  strh w26,[sp, #0x54]
71017fc960  strb w26,[sp, #0x56]
71017fc964  str wzr,[sp, #0x60]
71017fc968  str xzr,[sp, #0x90]
71017fc96c  str x8,[sp, #0x58]
71017fc970  str xzr,[x20, #0x80]
71017fc974  str xzr,[x20, #0xb0]
71017fc978  str xzr,[x20, #0xe0]
71017fc97c  str xzr,[x20, #0x110]
71017fc980  str wzr,[sp, #0x160]
71017fc984  bl 0x710337df20
71017fc988  adrp x2,0x7104307000
71017fc98c  add x2,x2,#0x72
71017fc990  add x3,sp,#0x40
71017fc994  mov x0,x25
71017fc998  mov x1,x24
71017fc99c  str xzr,[sp, #0x40]
71017fc9a0  strb w26,[sp, #0x48]
71017fc9a4  bl 0x7103770b30
71017fc9a8  adrp x2,0x7104401000
71017fc9ac  add x2,x2,#0xdad
71017fc9b0  mov x0,x25
71017fc9b4  mov w1,wzr
71017fc9b8  bl 0x71037717d0
71017fc9bc  ldr x9,[x25]
71017fc9c0  ldr x8,[x9, #0x1b8]
71017fc9c4  cbz x8,0x71017fcaa8
71017fc9c8  add x9,x9,#0x1b8
71017fc9cc  mov x10,x9
71017fc9d0  mov x11,x8
71017fc9d4  ldr w12,[x11, #0x20]
71017fc9d8  cmp w12,#0x0
71017fc9dc  cset w12,lt
71017fc9e0  csel x10,x10,x11,lt
71017fc9e4  ldr x11,[x11, w12, UXTW #0x3]
71017fc9e8  cbnz x11,0x71017fc9d4
71017fc9ec  cmp x10,x9
71017fc9f0  b.eq 0x71017fca40
71017fc9f4  ldr w11,[x10, #0x20]
71017fc9f8  cmp w11,#0x0
71017fc9fc  b.gt 0x71017fca40
71017fca00  ldr x26,[x10, #0x28]
71017fca04  cbz x26,0x71017fca40
71017fca08  ldr x8,[x26]
71017fca0c  ldr x8,[x8, #0x1f8]
71017fca10  mov w1,#0x1
71017fca14  mov x0,x26
71017fca18  blr x8
71017fca1c  ldr x8,[x26]
71017fca20  ldr x8,[x8, #0x388]
71017fca24  mov x0,x26
71017fca28  mov w1,wzr
71017fca2c  mov w2,wzr
71017fca30  blr x8
71017fca34  ldr x8,[x25]
71017fca38  add x9,x8,#0x1b8
71017fca3c  ldr x8,[x8, #0x1b8]
71017fca40  cbz x8,0x71017fcaa8
71017fca44  mov x10,x9
71017fca48  ldr w11,[x8, #0x20]
71017fca4c  cmp w11,#0x0
71017fca50  cset w11,lt
71017fca54  csel x10,x10,x8,lt
71017fca58  ldr x8,[x8, w11, UXTW #0x3]
71017fca5c  cbnz x8,0x71017fca48
71017fca60  cmp x10,x9
71017fca64  b.eq 0x71017fcaa8
71017fca68  ldr w8,[x10, #0x20]
71017fca6c  cmp w8,#0x0
71017fca70  b.gt 0x71017fcaa8
71017fca74  ldr x26,[x10, #0x28]
71017fca78  cbz x26,0x71017fcaa8
71017fca7c  ldr x8,[x26]
71017fca80  ldr x8,[x8, #0x208]
71017fca84  mov w1,#0x1
71017fca88  mov x0,x26
71017fca8c  blr x8
71017fca90  ldr x8,[x26]
71017fca94  ldr x8,[x8, #0x388]
71017fca98  mov x0,x26
71017fca9c  mov w1,wzr
71017fcaa0  mov w2,wzr
71017fcaa4  blr x8
71017fcaa8  adrp x2,0x7104308000
71017fcaac  add x2,x2,#0xc5c
71017fcab0  mov w1,#0x1
71017fcab4  mov x0,x25
71017fcab8  bl 0x71037717d0
71017fcabc  ldr x0,[x25]
71017fcac0  ldr x9,[x0, #0x1b8]
71017fcac4  cbz x9,0x71017fcbac
71017fcac8  add x8,x0,#0x1b8
71017fcacc  mov x10,x8
71017fcad0  mov x11,x9
71017fcad4  ldr w12,[x11, #0x20]
71017fcad8  cmp w12,#0x1
71017fcadc  cset w12,lt
71017fcae0  csel x10,x10,x11,lt
71017fcae4  ldr x11,[x11, w12, UXTW #0x3]
71017fcae8  cbnz x11,0x71017fcad4
71017fcaec  cmp x10,x8
71017fcaf0  b.eq 0x71017fcb40
71017fcaf4  ldr w11,[x10, #0x20]
71017fcaf8  cmp w11,#0x1
71017fcafc  b.gt 0x71017fcb40
71017fcb00  ldr x26,[x10, #0x28]
71017fcb04  cbz x26,0x71017fcb40
71017fcb08  ldr x8,[x26]
71017fcb0c  ldr x8,[x8, #0x1f8]
71017fcb10  mov w1,#0x1
71017fcb14  mov x0,x26
71017fcb18  blr x8
71017fcb1c  ldr x8,[x26]
71017fcb20  ldr x8,[x8, #0x388]
71017fcb24  mov x0,x26
71017fcb28  mov w1,wzr
71017fcb2c  mov w2,wzr
71017fcb30  blr x8
71017fcb34  ldr x0,[x25]
71017fcb38  ldr x9,[x0, #0x1b8]
71017fcb3c  add x8,x0,#0x1b8
71017fcb40  cbz x9,0x71017fcbac
71017fcb44  mov x10,x8
71017fcb48  ldr w11,[x9, #0x20]
71017fcb4c  cmp w11,#0x1
71017fcb50  cset w11,lt
71017fcb54  csel x10,x10,x9,lt
71017fcb58  ldr x9,[x9, w11, UXTW #0x3]
71017fcb5c  cbnz x9,0x71017fcb48
71017fcb60  cmp x10,x8
71017fcb64  b.eq 0x71017fcbac
71017fcb68  ldr w8,[x10, #0x20]
71017fcb6c  cmp w8,#0x1
71017fcb70  b.gt 0x71017fcbac
71017fcb74  ldr x26,[x10, #0x28]
71017fcb78  cbz x26,0x71017fcbac
71017fcb7c  ldr x8,[x26]
71017fcb80  ldr x8,[x8, #0x208]
71017fcb84  mov w1,#0x1
71017fcb88  mov x0,x26
71017fcb8c  blr x8
71017fcb90  ldr x8,[x26]
71017fcb94  ldr x8,[x8, #0x388]
71017fcb98  mov x0,x26
71017fcb9c  mov w1,wzr
71017fcba0  mov w2,wzr
71017fcba4  blr x8
71017fcba8  ldr x0,[x25]
71017fcbac  ldr x8,[x0]
71017fcbb0  ldr x8,[x8, #0x60]
71017fcbb4  mov w1,wzr
71017fcbb8  blr x8
71017fcbbc  adrp x1,0x710436c000
71017fcbc0  add x1,x1,#0x5a4
71017fcbc4  add x8,sp,#0x30
71017fcbc8  mov x0,x24
71017fcbcc  bl 0x7103776640
71017fcbd0  adrp x1,0x71043ad000
71017fcbd4  add x1,x1,#0xfe3
71017fcbd8  add x8,sp,#0x20
71017fcbdc  add x0,sp,#0x30
71017fcbe0  bl 0x7103776910
71017fcbe4  adrp x1,0x71042a2000
71017fcbe8  add x1,x1,#0x85c
71017fcbec  add x0,sp,#0x20
71017fcbf0  bl 0x710377a120
71017fcbf4  ldr x0,[sp, #0x28]
71017fcbf8  adrp x25,0x710523d000
71017fcbfc  add x25,x25,#0x9a8
71017fcc00  stp x25,xzr,[sp, #0x20]
71017fcc04  cbz x0,0x71017fcc0c
71017fcc08  bl 0x710392eb40
71017fcc0c  ldr x8,[x23, #0x20]
71017fcc10  ldr x8,[x8]
71017fcc14  ldr x8,[x8]
71017fcc18  ldr x8,[x8, #0x600]
71017fcc1c  strb wzr,[x8, #0x4aa]
71017fcc20  strh w27,[x23, #0x8]
71017fcc24  ldrh w8,[sp, #0x1c]
71017fcc28  strh w8,[x23, #0xa]
71017fcc2c  mov w8,#0x1000
71017fcc30  movk w8,#0x1, LSL #16
71017fcc34  mov w9,#0x1
71017fcc38  strb w9,[x23, #0x10]
71017fcc3c  str w8,[x23, #0xc]
71017fcc40  ldrh w10,[sp, #0x20]
71017fcc44  ldrb w11,[sp, #0x22]
71017fcc48  str w8,[x23, #0xc]
71017fcc4c  ldr x8,[x23, #0x20]
71017fcc50  sturh w10,[x23, #0x11]
71017fcc54  strb w11,[x23, #0x13]
71017fcc58  str w9,[x23, #0x14]
71017fcc5c  strb wzr,[x23, #0x18]
71017fcc60  ldr x8,[x8]
71017fcc64  ldr x10,[x8]
71017fcc68  ldr x8,[x10, #0x600]
71017fcc6c  str w9,[x8, #0x494]
71017fcc70  ldr x8,[x10, #0x608]
71017fcc74  ldr x9,[x10, #0x610]
71017fcc78  cmp x8,x9
71017fcc7c  b.eq 0x71017fccec
71017fcc80  sub x10,x9,#0x10
71017fcc84  sub x10,x10,x8
71017fcc88  ubfx x11,x10,#0x4,#0x1c
71017fcc8c  add w11,w11,#0x1
71017fcc90  ands x11,x11,#0x3
71017fcc94  b.eq 0x71017fccb4
71017fcc98  neg x11,x11
71017fcc9c  mov w12,#0x1
71017fcca0  ldr x13,[x8, #0x8]
71017fcca4  add x8,x8,#0x10
71017fcca8  adds x11,x11,#0x1
71017fccac  str w12,[x13, #0x494]
71017fccb0  b.ne 0x71017fcca0
71017fccb4  cmp x10,#0x30
71017fccb8  b.cc 0x71017fccec
71017fccbc  mov w10,#0x1
71017fccc0  ldr x11,[x8, #0x8]
71017fccc4  str w10,[x11, #0x494]
71017fccc8  ldr x11,[x8, #0x18]
71017fcccc  str w10,[x11, #0x494]
71017fccd0  ldr x11,[x8, #0x28]
71017fccd4  str w10,[x11, #0x494]
71017fccd8  ldr x11,[x8, #0x38]
71017fccdc  add x8,x8,#0x40
71017fcce0  cmp x9,x8
71017fcce4  str w10,[x11, #0x494]
71017fcce8  b.ne 0x71017fccc0
71017fccec  ldr x24,[sp, #0x38]
71017fccf0  adrp x8,0x710523d000
71017fccf4  add x8,x8,#0x988
71017fccf8  stp x8,xzr,[sp, #0x30]
71017fccfc  cbz x24,0x71017fcd18
71017fcd00  ldr x0,[x24, #0x18]
71017fcd04  stp x25,xzr,[x24, #0x10]
71017fcd08  cbz x0,0x71017fcd10
71017fcd0c  bl 0x710392eb40
71017fcd10  mov x0,x24
71017fcd14  bl 0x710392eb40
71017fcd18  ldr x0,[x20, #0x110]
71017fcd1c  add x8,sp,#0x40
71017fcd20  add x8,x8,#0xf0
71017fcd24  cmp x8,x0
71017fcd28  b.eq 0x71017fcd48
71017fcd2c  adrp x24,0x7105181000
71017fcd30  add x24,x24,#0xb40
71017fcd34  cbz x0,0x71017fcd5c
71017fcd38  ldr x8,[x0]
71017fcd3c  ldr x8,[x8, #0x28]
71017fcd40  blr x8
71017fcd44  b 0x71017fcd5c
71017fcd48  ldr x8,[x0]
71017fcd4c  ldr x8,[x8, #0x20]
71017fcd50  blr x8
71017fcd54  adrp x24,0x7105181000
71017fcd58  add x24,x24,#0xb40
71017fcd5c  ldr x0,[x20, #0xe0]
71017fcd60  add x8,sp,#0x40
71017fcd64  add x8,x8,#0xc0
71017fcd68  cmp x8,x0
71017fcd6c  b.eq 0x71017fcd80
71017fcd70  cbz x0,0x71017fcd8c
71017fcd74  ldr x8,[x0]
71017fcd78  ldr x8,[x8, #0x28]
71017fcd7c  b 0x71017fcd88
71017fcd80  ldr x8,[x0]
71017fcd84  ldr x8,[x8, #0x20]
71017fcd88  blr x8
71017fcd8c  ldr x0,[x20, #0xb0]
71017fcd90  add x8,sp,#0x40
71017fcd94  add x8,x8,#0x90
71017fcd98  cmp x8,x0
71017fcd9c  b.eq 0x71017fcdb0
71017fcda0  cbz x0,0x71017fcdbc
71017fcda4  ldr x8,[x0]
71017fcda8  ldr x8,[x8, #0x28]
71017fcdac  b 0x71017fcdb8
71017fcdb0  ldr x8,[x0]
71017fcdb4  ldr x8,[x8, #0x20]
71017fcdb8  blr x8
71017fcdbc  ldr x0,[x20, #0x80]
71017fcdc0  add x8,sp,#0x40
71017fcdc4  add x8,x8,#0x60
71017fcdc8  cmp x8,x0
71017fcdcc  b.eq 0x71017fcde8
71017fcdd0  ldr w20,[sp, #0x8]
71017fcdd4  cbz x0,0x71017fcdf8
71017fcdd8  ldr x8,[x0]
71017fcddc  ldr x8,[x8, #0x28]
71017fcde0  blr x8
71017fcde4  b 0x71017fcdf8
71017fcde8  ldr x8,[x0]
71017fcdec  ldr x8,[x8, #0x20]
71017fcdf0  blr x8
71017fcdf4  ldr w20,[sp, #0x8]
71017fcdf8  ldr x0,[sp, #0x90]
71017fcdfc  add x8,sp,#0x40
71017fce00  add x8,x8,#0x30
71017fce04  cmp x8,x0
71017fce08  b.eq 0x71017fce1c
71017fce0c  cbz x0,0x71017fce28
71017fce10  ldr x8,[x0]
71017fce14  ldr x8,[x8, #0x28]
71017fce18  b 0x71017fce24
71017fce1c  ldr x8,[x0]
71017fce20  ldr x8,[x8, #0x20]
71017fce24  blr x8
71017fce28  adrp x8,0x7105333000
71017fce2c  add x8,x8,#0x600
71017fce30  str x23,[x22, #0x80]
71017fce34  str x8,[x22, #0x10]
71017fce38  ldp w9,w8,[x8, #0x60]
71017fce3c  stp w9,w8,[x22, #0x68]
71017fce40  adrp x8,0x7105333000
71017fce44  add x8,x8,#0x650
71017fce48  mov w9,#0x1
71017fce4c  ldaxrb w10,[x8]
71017fce50  stxrb w11,w9,[x8]
71017fce54  and w10,w10,#0x1
71017fce58  cmp w11,#0x0
71017fce5c  ccmp w10,#0x0,#0x0,eq
71017fce60  b.ne 0x71017fce4c
71017fce64  adrp x8,0x7105333000
71017fce68  add x8,x8,#0x648
71017fce6c  ldr x9,[x8]
71017fce70  str x9,[x22, #0x48]
71017fce74  mov x0,x22
71017fce78  str x22,[x8], #0x8
71017fce7c  stlrb wzr,[x8]
71017fce80  bl 0x71032caea0
71017fce84  ldr x0,[x19, #0x168]
71017fce88  str x22,[x19, #0x168]
71017fce8c  cbz x0,0x71017fce94
71017fce90  bl 0x71032cad20
71017fce94  mov w1,#0x88
71017fce98  mov w0,#0x10
71017fce9c  bl 0x710392e290
71017fcea0  mov x22,x0
71017fcea4  cbnz x0,0x71017fcef0
71017fcea8  adrp x8,0x7105332000
71017fceac  ldr x0,[x8, #0xf00]
71017fceb0  cbz x0,0x71017fceec
71017fceb4  mov w8,#0x88
71017fceb8  str wzr,[sp, #0x30]
71017fcebc  add x1,sp,#0x30
71017fcec0  str x8,[sp, #0x40]
71017fcec4  ldr x8,[x0]
71017fcec8  ldr x8,[x8, #0x30]
71017fcecc  add x2,sp,#0x40
71017fced0  blr x8
71017fced4  tbz w0,#0x0,0x71017fceec
71017fced8  mov w1,#0x88
71017fcedc  mov w0,#0x10
71017fcee0  bl 0x710392e290
71017fcee4  mov x22,x0
71017fcee8  cbnz x0,0x71017fcef0
71017fceec  mov x22,xzr
71017fcef0  adrp x8,0x71050a7000
71017fcef4  add x8,x8,#0x88
71017fcef8  mov w1,#0x128
71017fcefc  stp x8,xzr,[x22]
71017fcf00  orr x8,xzr,#0x1ffffffff
71017fcf04  stp xzr,x8,[x22, #0x60]
71017fcf08  mov w8,#0x1
71017fcf0c  mov w0,#0x10
71017fcf10  stp xzr,xzr,[x22, #0x10]
71017fcf14  strb wzr,[x22, #0x58]
71017fcf18  str x21,[x22, #0x78]
71017fcf1c  strb w8,[x22, #0x70]
71017fcf20  stp xzr,xzr,[x22, #0x48]
71017fcf24  bl 0x710392e290
71017fcf28  mov x23,x0
71017fcf2c  cbnz x0,0x71017fcf78
71017fcf30  adrp x8,0x7105332000
71017fcf34  ldr x0,[x8, #0xf00]
71017fcf38  cbz x0,0x71017fcf74
71017fcf3c  mov w8,#0x128
71017fcf40  str wzr,[sp, #0x30]
71017fcf44  add x1,sp,#0x30
71017fcf48  str x8,[sp, #0x40]
71017fcf4c  ldr x8,[x0]
71017fcf50  ldr x8,[x8, #0x30]
71017fcf54  add x2,sp,#0x40
71017fcf58  blr x8
71017fcf5c  tbz w0,#0x0,0x71017fcf74
71017fcf60  mov w1,#0x128
71017fcf64  mov w0,#0x10
71017fcf68  bl 0x710392e290
71017fcf6c  mov x23,x0
71017fcf70  cbnz x0,0x71017fcf78
71017fcf74  mov x23,xzr
71017fcf78  mov w0,#0x10
71017fcf7c  mov w1,#0x80
71017fcf80  str x21,[x23]
71017fcf84  bl 0x710392e290
71017fcf88  cbnz x0,0x71017fcfd0
71017fcf8c  adrp x8,0x7105332000
71017fcf90  ldr x0,[x8, #0xf00]
71017fcf94  cbz x0,0x71017fcfcc
71017fcf98  mov w8,#0x80
71017fcf9c  str wzr,[sp, #0x30]
71017fcfa0  add x1,sp,#0x30
71017fcfa4  str x8,[sp, #0x40]
71017fcfa8  ldr x8,[x0]
71017fcfac  ldr x8,[x8, #0x30]
71017fcfb0  add x2,sp,#0x40
71017fcfb4  blr x8
71017fcfb8  tbz w0,#0x0,0x71017fcfcc
71017fcfbc  mov w0,#0x10
71017fcfc0  mov w1,#0x80
71017fcfc4  bl 0x710392e290
71017fcfc8  cbnz x0,0x71017fcfd0
71017fcfcc  mov x0,xzr
71017fcfd0  mov x8,x0
71017fcfd4  mov w1,#0x8
71017fcfd8  str xzr,[x8, #0x10]!
71017fcfdc  stp x24,x8,[x0]
71017fcfe0  mov x8,x0
71017fcfe4  str xzr,[x8, #0x28]!
71017fcfe8  stp xzr,x8,[x0, #0x18]
71017fcfec  mov x8,x0
71017fcff0  str xzr,[x8, #0x40]!
71017fcff4  stp xzr,x8,[x0, #0x30]
71017fcff8  mov x8,x0
71017fcffc  add x24,x23,#0x10
71017fd000  str xzr,[x0, #0x60]
71017fd004  str xzr,[x8, #0x58]!
71017fd008  str wzr,[x0, #0x78]
71017fd00c  str xzr,[x0, #0x70]
71017fd010  stp xzr,x8,[x0, #0x48]
71017fd014  mov w8,#0x2
71017fd018  str w8,[x0, #0x68]
71017fd01c  str x0,[x23, #0x8]
71017fd020  mov w0,#0x10
71017fd024  bl 0x710392e290
71017fd028  mov x25,x0
71017fd02c  cbnz x0,0x71017fd078
71017fd030  adrp x8,0x7105332000
71017fd034  ldr x0,[x8, #0xf00]
71017fd038  cbz x0,0x71017fd074
71017fd03c  mov w8,#0x8
71017fd040  str wzr,[sp, #0x30]
71017fd044  add x1,sp,#0x30
71017fd048  str x8,[sp, #0x40]
71017fd04c  ldr x8,[x0]
71017fd050  ldr x8,[x8, #0x30]
71017fd054  add x2,sp,#0x40
71017fd058  blr x8
71017fd05c  tbz w0,#0x0,0x71017fd074
71017fd060  mov w0,#0x10
71017fd064  mov w1,#0x8
71017fd068  bl 0x710392e290
71017fd06c  mov x25,x0
71017fd070  cbnz x0,0x71017fd078
71017fd074  mov x25,xzr
71017fd078  mov x0,x25
71017fd07c  bl 0x7103773200
71017fd080  str x25,[x23, #0x10]
71017fd084  add x25,x23,#0x18
71017fd088  mov x0,x25
71017fd08c  bl 0x7103776290
71017fd090  stp xzr,xzr,[x23, #0x40]
71017fd094  adrp x2,0x7104543000
71017fd098  add x2,x2,#0x930
71017fd09c  stp xzr,xzr,[x23, #0x30]
71017fd0a0  mov w3,#0x1
71017fd0a4  mov x0,x24
71017fd0a8  str x23,[x23, #0x28]
71017fd0ac  str w28,[x23, #0xe8]
71017fd0b0  strb wzr,[x23, #0xec]
71017fd0b4  str xzr,[x23, #0x90]
71017fd0b8  stp xzr,x28,[x23, #0xd8]
71017fd0bc  stp xzr,xzr,[x23, #0xc8]
71017fd0c0  stp xzr,xzr,[x23, #0xb8]
71017fd0c4  stp xzr,xzr,[x23, #0xa8]
71017fd0c8  stp xzr,xzr,[x23, #0x98]
71017fd0cc  ldr w8,[sp, #0xc]
71017fd0d0  strb w8,[x23, #0xf0]
71017fd0d4  ldr w8,[sp, #0x40]
71017fd0d8  ldrh w9,[sp, #0x44]
71017fd0dc  ldrb w10,[sp, #0x46]
71017fd0e0  stur w8,[x23, #0xf1]
71017fd0e4  ldr x8,[sp, #0x10]
71017fd0e8  strb w10,[x23, #0xf7]
71017fd0ec  sturh w9,[x23, #0xf5]
71017fd0f0  str x8,[x23, #0xf8]
71017fd0f4  add x8,x23,#0x101
71017fd0f8  strb w20,[x23, #0x100]
71017fd0fc  ldr w9,[sp, #0x30]
71017fd100  ldrb w11,[sp, #0x36]
71017fd104  ldrh w10,[sp, #0x34]
71017fd108  str w9,[x8]
71017fd10c  mov x8,#0xff0000000000
71017fd110  movk x8,#0x2dff, LSL #48
71017fd114  adrp x9,0x710198d000
71017fd118  add x9,x9,#0xf80
71017fd11c  strb w11,[x23, #0x107]
71017fd120  add x11,x23,#0x105
71017fd124  strh w10,[x11]
71017fd128  str wzr,[x23, #0x108]
71017fd12c  strb wzr,[x23, #0x120]
71017fd130  str wzr,[x23, #0x90]
71017fd134  stp x9,xzr,[x23, #0x70]
71017fd138  stp x8,xzr,[x23, #0x110]
71017fd13c  adrp x8,0x710198d000
71017fd140  add x8,x8,#0xc00
71017fd144  stp x8,xzr,[x23, #0x50]
71017fd148  adrp x8,0x710198d000
71017fd14c  add x8,x8,#0xc10
71017fd150  stp x8,xzr,[x23, #0x60]
71017fd154  adrp x8,0x710198e000
71017fd158  add x8,x8,#0x10
71017fd15c  stp x8,xzr,[x23, #0x80]
71017fd160  ldr x1,[x19, #0x130]
71017fd164  bl 0x71032cbf30
71017fd168  ldr x8,[x23, #0x10]
71017fd16c  ldr x0,[x8]
71017fd170  mov w2,#0x1000
71017fd174  mov w1,wzr
71017fd178  bl 0x7103775dc0
71017fd17c  ldr x8,[x23, #0x10]
71017fd180  ldr x8,[x8]
71017fd184  add x9,x8,#0x8
71017fd188  cmp x9,x25
71017fd18c  b.eq 0x71017fd200
71017fd190  ldr x9,[x8, #0x10]
71017fd194  ldr x9,[x9]
71017fd198  ldr x10,[x23, #0x20]
71017fd19c  str x9,[x10]
71017fd1a0  ldr x9,[x8, #0x10]
71017fd1a4  ldr x9,[x9, #0x8]
71017fd1a8  ldr x10,[x23, #0x20]
71017fd1ac  str x9,[x10, #0x8]
71017fd1b0  ldr x9,[x8, #0x10]
71017fd1b4  ldr x8,[x23, #0x20]
71017fd1b8  cmp x8,x9
71017fd1bc  b.eq 0x71017fd200
71017fd1c0  ldr x10,[x9, #0x18]
71017fd1c4  ldr x10,[x10]
71017fd1c8  ldr x11,[x8, #0x18]
71017fd1cc  str x10,[x11]
71017fd1d0  ldr x10,[x9, #0x18]
71017fd1d4  ldr x10,[x10, #0x8]
71017fd1d8  ldr x11,[x8, #0x18]
71017fd1dc  str x10,[x11, #0x8]
71017fd1e0  ldr x10,[x9, #0x18]
71017fd1e4  ldr x10,[x10, #0x10]
71017fd1e8  ldr x11,[x8, #0x18]
71017fd1ec  str x10,[x11, #0x10]
71017fd1f0  ldr x9,[x9, #0x18]
71017fd1f4  ldr x9,[x9, #0x18]
71017fd1f8  ldr x8,[x8, #0x18]
71017fd1fc  str x9,[x8, #0x18]
71017fd200  ldrb w8,[x23, #0xf0]
71017fd204  cbz w8,0x71017fd224
71017fd208  adrp x8,0x710532f000
71017fd20c  ldr x8,[x8, #0x730]
71017fd210  ldr x8,[x8, #0x8]
71017fd214  ldr x1,[x23, #0xf8]
71017fd218  ldr x0,[x8, #0x168]
71017fd21c  bl 0x7103263f80
71017fd220  str x0,[x23, #0x110]
71017fd224  adrp x8,0x7105333000
71017fd228  add x8,x8,#0x600
71017fd22c  str x23,[x22, #0x80]
71017fd230  str x8,[x22, #0x10]
71017fd234  ldp w9,w8,[x8, #0x60]
71017fd238  stp w9,w8,[x22, #0x68]
71017fd23c  adrp x8,0x7105333000
71017fd240  add x8,x8,#0x650
71017fd244  mov w9,#0x1
71017fd248  ldaxrb w10,[x8]
71017fd24c  stxrb w11,w9,[x8]
71017fd250  and w10,w10,#0x1
71017fd254  cmp w11,#0x0
71017fd258  ccmp w10,#0x0,#0x0,eq
71017fd25c  b.ne 0x71017fd248
71017fd260  adrp x8,0x7105333000
71017fd264  add x8,x8,#0x648
71017fd268  ldr x9,[x8]
71017fd26c  str x9,[x22, #0x48]
71017fd270  mov x0,x22
71017fd274  str x22,[x8], #0x8
71017fd278  stlrb wzr,[x8]
71017fd27c  bl 0x71032caea0
71017fd280  ldr x0,[x19, #0x170]
71017fd284  str x22,[x19, #0x170]
71017fd288  cbz x0,0x71017fd290
71017fd28c  bl 0x71032cad20
71017fd290  ldrsw x8,[x19, #0x114]
71017fd294  cmp w8,#0x13
71017fd298  b.cs 0x71017fd384
71017fd29c  add x8,x19,x8, LSL #0x2
71017fd2a0  str wzr,[x8, #0xc8]
71017fd2a4  ldp x29,x30,[sp, #0x1d0]
71017fd2a8  ldp x20,x19,[sp, #0x1c0]
71017fd2ac  ldp x22,x21,[sp, #0x1b0]
71017fd2b0  ldp x24,x23,[sp, #0x1a0]
71017fd2b4  ldp x26,x25,[sp, #0x190]
71017fd2b8  ldp x28,x27,[sp, #0x180]
71017fd2bc  add sp,sp,#0x1e0
71017fd2c0  ret
71017fd2c4  adrp x0,0x7105324000
71017fd2c8  add x0,x0,#0x798
71017fd2cc  bl 0x71039c06b0
71017fd2d0  cbz w0,0x71017fbd1c
71017fd2d4  adrp x8,0x7105324000
71017fd2d8  add x8,x8,#0x748
71017fd2dc  ldarb w8,[x8]
71017fd2e0  tbz w8,#0x0,0x71017fd388
71017fd2e4  adrp x8,0x7105324000
71017fd2e8  adrp x9,0x7105324000
71017fd2ec  add x9,x9,#0x760
71017fd2f0  adrp x0,0x7105324000
71017fd2f4  add x0,x0,#0x798
71017fd2f8  str x9,[x8, #0x7a0]
71017fd2fc  bl 0x71039c06c0
71017fd300  b 0x71017fbd1c
71017fd304  adrp x0,0x7105314000
71017fd308  add x0,x0,#0x4d8
71017fd30c  bl 0x71039c06b0
71017fd310  cbz w0,0x71017fbe78
71017fd314  bl 0x7101764000
71017fd318  adrp x0,0x7101763000
71017fd31c  add x0,x0,#0xc40
71017fd320  adrp x1,0x71052c5000
71017fd324  add x1,x1,#0x180
71017fd328  adrp x2,0x7104f17000
71017fd32c  add x2,x2,#0x0
71017fd330  bl 0x71000001c0
71017fd334  adrp x0,0x7105314000
71017fd338  add x0,x0,#0x4d8
71017fd33c  bl 0x71039c06c0
71017fd340  b 0x71017fbe78
71017fd344  adrp x0,0x7105314000
71017fd348  add x0,x0,#0x4d8
71017fd34c  bl 0x71039c06b0
71017fd350  cbz w0,0x71017fbeb0
71017fd354  bl 0x7101764000
71017fd358  adrp x0,0x7101763000
71017fd35c  add x0,x0,#0xc40
71017fd360  adrp x1,0x71052c5000
71017fd364  add x1,x1,#0x180
71017fd368  adrp x2,0x7104f17000
71017fd36c  add x2,x2,#0x0
71017fd370  bl 0x71000001c0
71017fd374  adrp x0,0x7105314000
71017fd378  add x0,x0,#0x4d8
71017fd37c  bl 0x71039c06c0
71017fd380  b 0x71017fbeb0
71017fd384  bl 0x71039c2650
71017fd388  adrp x0,0x7105324000
71017fd38c  add x0,x0,#0x748
71017fd390  bl 0x71039c06b0
71017fd394  cbz w0,0x71017fd2e4
71017fd398  adrp x8,0x7105324000
71017fd39c  add x8,x8,#0x750
71017fd3a0  ldarb w8,[x8]
71017fd3a4  tbz w8,#0x0,0x71017fd3c8
71017fd3a8  adrp x8,0x7105324000
71017fd3ac  adrp x9,0x7105324000
71017fd3b0  add x9,x9,#0x758
71017fd3b4  adrp x0,0x7105324000
71017fd3b8  add x0,x0,#0x748
71017fd3bc  str x9,[x8, #0x760]
71017fd3c0  bl 0x71039c06c0
71017fd3c4  b 0x71017fd2e4
71017fd3c8  adrp x0,0x7105324000
71017fd3cc  add x0,x0,#0x750
71017fd3d0  bl 0x71039c06b0
71017fd3d4  cbz w0,0x71017fd3a8
71017fd3d8  adrp x8,0x7105324000
71017fd3dc  adrp x0,0x7105324000
71017fd3e0  add x0,x0,#0x750
71017fd3e4  str xzr,[x8, #0x758]
71017fd3e8  bl 0x71039c06c0
71017fd3ec  b 0x71017fd3a8
