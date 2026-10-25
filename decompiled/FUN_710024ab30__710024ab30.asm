// addr:      710024ab30
// offset:    0x24ab30
// name:      FUN_710024ab30
// mangled:   
// size:      1024

710024ab30  stp x24,x23,[sp, #-0x40]!
710024ab34  stp x22,x21,[sp, #0x10]
710024ab38  stp x20,x19,[sp, #0x20]
710024ab3c  stp x29,x30,[sp, #0x30]
710024ab40  add x29,sp,#0x30
710024ab44  orr w1,wzr,#0xc
710024ab48  mov x19,x0
710024ab4c  bl 0x7100234fb0
710024ab50  adrp x8,0x71052a7000
710024ab54  ldr x8,[x8, #0xaa8]
710024ab58  add x8,x8,#0x10
710024ab5c  add x0,x19,#0x20
710024ab60  mov w1,#0x15
710024ab64  str x8,[x19], #0xb0
710024ab68  bl 0x710024d230
710024ab6c  mov w1,#0x32
710024ab70  mov x0,x19
710024ab74  bl 0x710024d4f0
710024ab78  adrp x0,0x7104f16000
710024ab7c  add x0,x0,#0xea5
710024ab80  bl 0x71039c0530
710024ab84  adrp x8,0x71052a4000
710024ab88  ldr x8,[x8, #0xda8]
710024ab8c  adrp x20,0x71052a4000
710024ab90  ldrb w8,[x8]
710024ab94  ldr x20,[x20, #0xdb0]
710024ab98  add x19,x20,#0x28
710024ab9c  cbz w8,0x710024abd8
710024aba0  adrp x8,0x71052a4000
710024aba4  ldr x8,[x8, #0xdb8]
710024aba8  ldr x0,[x8]
710024abac  bl 0x7101717960
710024abb0  ldr w8,[x0]
710024abb4  cbz w8,0x710024abd8
710024abb8  ldr x10,[x20, #0xa0]
710024abbc  ldp x9,x10,[x10]
710024abc0  sub x10,x10,x9
710024abc4  asr x10,x10,#0x3
710024abc8  cmp x10,x8
710024abcc  b.ls 0x710024abf0
710024abd0  ldr x8,[x9, x8, LSL #0x3]
710024abd4  add x19,x8,#0x20
710024abd8  ldr x8,[x19]
710024abdc  cbz x8,0x710024ac08
710024abe0  ldr x8,[x8, #0x10]
710024abe4  cbz x8,0x710024ac08
710024abe8  ldr x19,[x8, #0x10]
710024abec  b 0x710024ac0c
710024abf0  adrp x0,0x71042c4000
710024abf4  add x0,x0,#0x35f
710024abf8  mov w1,#0x47
710024abfc  orr w2,wzr,#0xe0000003
710024ac00  mov w3,wzr
710024ac04  bl 0x71001b1300
710024ac08  mov x19,xzr
710024ac0c  ldr x8,[x19, #0x78]!
710024ac10  ldr x8,[x8, #0x10]
710024ac14  mov x0,x19
710024ac18  blr x8
710024ac1c  adrp x20,0x71052a7000
710024ac20  ldr x20,[x20, #0xab0]
710024ac24  ldr x8,[x20]
710024ac28  ldr x8,[x8, #0x10]
710024ac2c  mov x0,x20
710024ac30  blr x8
710024ac34  adrp x21,0x71052a7000
710024ac38  ldr x21,[x21, #0xab8]
710024ac3c  ldr w22,[x21, #0x8]
710024ac40  cbnz w22,0x710024ac64
710024ac44  orr w0,wzr,#0x18
710024ac48  bl 0x71001af850
710024ac4c  cbz x0,0x710024ac58
710024ac50  stp x0,x0,[x0]
710024ac54  str xzr,[x0, #0x10]
710024ac58  ldr w22,[x21, #0x8]
710024ac5c  adrp x8,0x71052b5000
710024ac60  str x0,[x8, #0xa48]
710024ac64  adrp x8,0x71052a7000
710024ac68  ldr x8,[x8, #0xac0]
710024ac6c  str x21,[x8]
710024ac70  add w8,w22,#0x1
710024ac74  str w8,[x21, #0x8]
710024ac78  ldr x8,[x20]
710024ac7c  ldr x8,[x8, #0x20]
710024ac80  mov x0,x20
710024ac84  blr x8
710024ac88  cbnz w22,0x710024aeec
710024ac8c  orr w0,wzr,#0x60
710024ac90  bl 0x71001af850
710024ac94  cbz x0,0x710024af0c
710024ac98  adrp x8,0x71052a4000
710024ac9c  ldr x8,[x8, #0xd80]
710024aca0  mov x20,x0
710024aca4  add x8,x8,#0x10
710024aca8  strb wzr,[x0, #0x8]
710024acac  adrp x9,0x71052a7000
710024acb0  str x8,[x0, #0x38]!
710024acb4  mov x8,x20
710024acb8  adrp x1,0x7104411000
710024acbc  add x1,x1,#0x4cc
710024acc0  strb wzr,[x8, #0x40]!
710024acc4  ldr x9,[x9, #0xac8]
710024acc8  str wzr,[x20, #0xc]
710024accc  str wzr,[x20, #0x20]
710024acd0  stp xzr,xzr,[x20, #0x10]
710024acd4  add x9,x9,#0x10
710024acd8  str x9,[x20]
710024acdc  mov w9,#0x10
710024ace0  stp x8,x9,[x20, #0x50]
710024ace4  mov w8,#0x1
710024ace8  stur x8,[x20, #0x24]
710024acec  mov w8,#0x200
710024acf0  stur x8,[x20, #0x2c]
710024acf4  bl 0x71001b3cb0
710024acf8  adrp x0,0x71052a7000
710024acfc  ldr x0,[x0, #0xab8]
710024ad00  mov x1,x20
710024ad04  bl 0x710024b170
710024ad08  tbnz w0,#0x0,0x710024ad1c
710024ad0c  ldr x8,[x20]
710024ad10  ldr x8,[x8, #0x8]
710024ad14  mov x0,x20
710024ad18  blr x8
710024ad1c  mov w0,#0xc8
710024ad20  bl 0x71001af850
710024ad24  mov x20,x0
710024ad28  cbz x0,0x710024ae18
710024ad2c  adrp x8,0x71052a4000
710024ad30  ldr x8,[x8, #0xd80]
710024ad34  mov x0,x20
710024ad38  add x22,x8,#0x10
710024ad3c  mov x8,x20
710024ad40  strb wzr,[x20, #0x8]
710024ad44  str x22,[x0, #0x38]!
710024ad48  strb wzr,[x8, #0x40]!
710024ad4c  adrp x9,0x71052a7000
710024ad50  ldr x9,[x9, #0xac8]
710024ad54  mov w23,#0x10
710024ad58  stp x8,x23,[x20, #0x50]
710024ad5c  mov w8,#0x200
710024ad60  stp xzr,xzr,[x20, #0x10]
710024ad64  str wzr,[x20, #0x20]
710024ad68  stur x8,[x20, #0x2c]
710024ad6c  add x9,x9,#0x10
710024ad70  mov w24,#0x1
710024ad74  adrp x1,0x7104411000
710024ad78  add x1,x1,#0x4cc
710024ad7c  str wzr,[x20, #0xc]
710024ad80  str x9,[x20]
710024ad84  stur x24,[x20, #0x24]
710024ad88  bl 0x71001b3cb0
710024ad8c  adrp x8,0x71052a7000
710024ad90  adrp x9,0x71052a6000
710024ad94  mov x21,x20
710024ad98  ldr x8,[x8, #0xad0]
710024ad9c  ldr x9,[x9, #0x970]
710024ada0  add x10,x20,#0x70
710024ada4  add x8,x8,#0x10
710024ada8  add x9,x9,#0x10
710024adac  strb wzr,[x20, #0x60]
710024adb0  str x8,[x20]
710024adb4  adrp x8,0x71052a6000
710024adb8  str x9,[x21, #0x68]!
710024adbc  stlr w24,[x10]
710024adc0  ldr x8,[x8, #0xb80]
710024adc4  strb wzr,[x20, #0x74]
710024adc8  add x8,x8,#0x10
710024adcc  str x8,[x21]
710024add0  bl 0x71001cf750
710024add4  mov x1,x0
710024add8  mov x0,x21
710024addc  mov w2,wzr
710024ade0  bl 0x71001cf760
710024ade4  adrp x8,0x71052a7000
710024ade8  ldr x8,[x8, #0xad8]
710024adec  mov x0,x20
710024adf0  mov x9,x20
710024adf4  adrp x1,0x710438b000
710024adf8  add x1,x1,#0xf47
710024adfc  add x8,x8,#0x10
710024ae00  str x8,[x20]
710024ae04  mov x2,#-0x1
710024ae08  str x22,[x0, #0xa0]!
710024ae0c  strb wzr,[x9, #0xa8]!
710024ae10  stp x9,x23,[x20, #0xb8]
710024ae14  bl 0x71001b47e0
710024ae18  adrp x0,0x71052a7000
710024ae1c  ldr x0,[x0, #0xab8]
710024ae20  mov x1,x20
710024ae24  bl 0x710024b170
710024ae28  tbnz w0,#0x0,0x710024ae40
710024ae2c  cbz x20,0x710024ae40
710024ae30  ldr x8,[x20]
710024ae34  ldr x8,[x8, #0x8]
710024ae38  mov x0,x20
710024ae3c  blr x8
710024ae40  mov w0,#0x68
710024ae44  bl 0x71001af850
710024ae48  mov x20,x0
710024ae4c  cbz x0,0x710024aec4
710024ae50  adrp x8,0x71052a4000
710024ae54  ldr x8,[x8, #0xd80]
710024ae58  mov x0,x20
710024ae5c  add x8,x8,#0x10
710024ae60  strb wzr,[x20, #0x8]
710024ae64  adrp x9,0x71052a7000
710024ae68  str x8,[x0, #0x38]!
710024ae6c  mov x8,x20
710024ae70  adrp x1,0x7104411000
710024ae74  add x1,x1,#0x4cc
710024ae78  strb wzr,[x8, #0x40]!
710024ae7c  ldr x9,[x9, #0xac8]
710024ae80  str wzr,[x20, #0xc]
710024ae84  str wzr,[x20, #0x20]
710024ae88  stp xzr,xzr,[x20, #0x10]
710024ae8c  add x9,x9,#0x10
710024ae90  str x9,[x20]
710024ae94  mov w9,#0x10
710024ae98  stp x8,x9,[x20, #0x50]
710024ae9c  mov w8,#0x1
710024aea0  stur x8,[x20, #0x24]
710024aea4  mov w8,#0x200
710024aea8  stur x8,[x20, #0x2c]
710024aeac  bl 0x71001b3cb0
710024aeb0  adrp x8,0x71052a7000
710024aeb4  ldr x8,[x8, #0xae0]
710024aeb8  strb wzr,[x20, #0x60]
710024aebc  add x8,x8,#0x10
710024aec0  str x8,[x20]
710024aec4  adrp x0,0x71052a7000
710024aec8  ldr x0,[x0, #0xab8]
710024aecc  mov x1,x20
710024aed0  bl 0x710024b170
710024aed4  tbnz w0,#0x0,0x710024aeec
710024aed8  cbz x20,0x710024aeec
710024aedc  ldr x8,[x20]
710024aee0  ldr x8,[x8, #0x8]
710024aee4  mov x0,x20
710024aee8  blr x8
710024aeec  ldr x8,[x19]
710024aef0  ldr x1,[x8, #0x20]
710024aef4  mov x0,x19
710024aef8  ldp x29,x30,[sp, #0x30]
710024aefc  ldp x20,x19,[sp, #0x20]
710024af00  ldp x22,x21,[sp, #0x10]
710024af04  ldp x24,x23,[sp], #0x40
710024af08  br x1
710024af0c  adrp x0,0x71052a7000
710024af10  ldr x0,[x0, #0xab8]
710024af14  mov x1,xzr
710024af18  bl 0x710024b170
710024af1c  mov w0,#0xc8
710024af20  bl 0x71001af850
710024af24  mov x20,x0
710024af28  cbnz x0,0x710024ad2c
710024af2c  b 0x710024ae18
