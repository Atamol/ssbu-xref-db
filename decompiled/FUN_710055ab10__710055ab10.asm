// addr:      710055ab10
// offset:    0x55ab10
// name:      FUN_710055ab10
// mangled:   
// size:      1008

710055ab10  sub sp,sp,#0x80
710055ab14  str x21,[sp, #0x50]
710055ab18  stp x20,x19,[sp, #0x60]
710055ab1c  stp x29,x30,[sp, #0x70]
710055ab20  add x29,sp,#0x70
710055ab24  ldr x20,[x0, #0x108]
710055ab28  mov x19,x0
710055ab2c  str xzr,[x0, #0x108]
710055ab30  cbz x20,0x710055ab44
710055ab34  mov x0,x20
710055ab38  bl 0x71039c2810
710055ab3c  mov x0,x20
710055ab40  bl 0x710392eb40
710055ab44  ldr x20,[x19, #0x100]
710055ab48  str xzr,[x19, #0x100]
710055ab4c  cbz x20,0x710055ab60
710055ab50  mov x0,x20
710055ab54  bl 0x71039c2820
710055ab58  mov x0,x20
710055ab5c  bl 0x710392eb40
710055ab60  mov w1,#0x48
710055ab64  mov w0,#0x10
710055ab68  bl 0x710392e290
710055ab6c  mov x20,x0
710055ab70  cbnz x0,0x710055abbc
710055ab74  adrp x8,0x7105332000
710055ab78  ldr x0,[x8, #0xf00]
710055ab7c  cbz x0,0x710055abb8
710055ab80  mov w8,#0x48
710055ab84  str wzr,[sp, #0x10]
710055ab88  add x1,sp,#0x10
710055ab8c  str x8,[sp, #0x28]
710055ab90  ldr x8,[x0]
710055ab94  ldr x8,[x8, #0x30]
710055ab98  add x2,sp,#0x28
710055ab9c  blr x8
710055aba0  tbz w0,#0x0,0x710055abb8
710055aba4  mov w1,#0x48
710055aba8  mov w0,#0x10
710055abac  bl 0x710392e290
710055abb0  mov x20,x0
710055abb4  cbnz x0,0x710055abbc
710055abb8  mov x20,xzr
710055abbc  mov x0,x20
710055abc0  bl 0x71039c2830
710055abc4  ldr x21,[x19, #0x108]
710055abc8  str x20,[x19, #0x108]
710055abcc  cbz x21,0x710055abe0
710055abd0  mov x0,x21
710055abd4  bl 0x71039c2810
710055abd8  mov x0,x21
710055abdc  bl 0x710392eb40
710055abe0  mov w1,#0x50
710055abe4  mov w0,#0x10
710055abe8  bl 0x710392e290
710055abec  mov x20,x0
710055abf0  cbnz x0,0x710055ac3c
710055abf4  adrp x8,0x7105332000
710055abf8  ldr x0,[x8, #0xf00]
710055abfc  cbz x0,0x710055ac38
710055ac00  mov w8,#0x50
710055ac04  str wzr,[sp, #0x10]
710055ac08  add x1,sp,#0x10
710055ac0c  str x8,[sp, #0x28]
710055ac10  ldr x8,[x0]
710055ac14  ldr x8,[x8, #0x30]
710055ac18  add x2,sp,#0x28
710055ac1c  blr x8
710055ac20  tbz w0,#0x0,0x710055ac38
710055ac24  mov w1,#0x50
710055ac28  mov w0,#0x10
710055ac2c  bl 0x710392e290
710055ac30  mov x20,x0
710055ac34  cbnz x0,0x710055ac3c
710055ac38  mov x20,xzr
710055ac3c  mov x0,x20
710055ac40  bl 0x71039c2840
710055ac44  ldr x21,[x19, #0x100]
710055ac48  str x20,[x19, #0x100]
710055ac4c  cbz x21,0x710055ac60
710055ac50  mov x0,x21
710055ac54  bl 0x71039c2820
710055ac58  mov x0,x21
710055ac5c  bl 0x710392eb40
710055ac60  ldr x0,[x19, #0x108]
710055ac64  mov w8,#0x1
710055ac68  add x1,sp,#0x28
710055ac6c  str w8,[sp, #0x28]
710055ac70  add x21,sp,#0x28
710055ac74  bl 0x71039c2850
710055ac78  mov w8,#0x10
710055ac7c  stp xzr,xzr,[sp, #0x28]
710055ac80  strb w8,[sp, #0x28]
710055ac84  mov x8,#0x6f26
710055ac88  movk x8,#0x6666, LSL #16
710055ac8c  movk x8,#0x6573, LSL #32
710055ac90  movk x8,#0x3d74, LSL #48
710055ac94  str xzr,[sp, #0x38]
710055ac98  stur x8,[sp, #0x29]
710055ac9c  add x8,sp,#0x10
710055aca0  add x20,sp,#0x10
710055aca4  strb wzr,[sp, #0x31]
710055aca8  ldr w0,[x19, #0x11c]
710055acac  bl 0x71039c2860
710055acb0  ldrb w8,[sp, #0x10]
710055acb4  ldp x10,x9,[sp, #0x18]
710055acb8  orr x20,x20,#0x1
710055acbc  lsr x11,x8,#0x1
710055acc0  tst w8,#0x1
710055acc4  csel x1,x20,x9,eq
710055acc8  csel x2,x11,x10,eq
710055accc  add x0,sp,#0x28
710055acd0  bl 0x71039c2870
710055acd4  ldrb w8,[sp, #0x10]
710055acd8  tbz w8,#0x0,0x710055ace8
710055acdc  ldr x0,[sp, #0x20]
710055ace0  cbz x0,0x710055ace8
710055ace4  bl 0x710392eb40
710055ace8  adrp x1,0x71042b3000
710055acec  add x1,x1,#0x83e
710055acf0  add x0,sp,#0x28
710055acf4  bl 0x71039c2880
710055acf8  ldr w0,[x19, #0x114]
710055acfc  add x8,sp,#0x10
710055ad00  bl 0x71039c2860
710055ad04  ldrb w8,[sp, #0x10]
710055ad08  ldp x10,x9,[sp, #0x18]
710055ad0c  lsr x11,x8,#0x1
710055ad10  tst w8,#0x1
710055ad14  csel x1,x20,x9,eq
710055ad18  csel x2,x11,x10,eq
710055ad1c  add x0,sp,#0x28
710055ad20  bl 0x71039c2870
710055ad24  ldrb w8,[sp, #0x10]
710055ad28  tbz w8,#0x0,0x710055ad38
710055ad2c  ldr x0,[sp, #0x20]
710055ad30  cbz x0,0x710055ad38
710055ad34  bl 0x710392eb40
710055ad38  adrp x8,0x710523d000
710055ad3c  ldrsw x8,[x8, #0xc]
710055ad40  cmp w8,#0xd
710055ad44  b.hi 0x710055ad58
710055ad48  adrp x9,0x710523d000
710055ad4c  add x9,x9,#0x80
710055ad50  ldr x20,[x9, x8, LSL #0x3]
710055ad54  b 0x710055ad60
710055ad58  adrp x20,0x71042d4000
710055ad5c  add x20,x20,#0xe44
710055ad60  mov w1,#0x50
710055ad64  mov w0,#0x10
710055ad68  orr x21,x21,#0x1
710055ad6c  bl 0x710392e290
710055ad70  cbnz x0,0x710055adb8
710055ad74  adrp x8,0x7105332000
710055ad78  ldr x0,[x8, #0xf00]
710055ad7c  cbz x0,0x710055adb4
710055ad80  mov w8,#0x50
710055ad84  stur wzr,[x29, #-0x30]
710055ad88  sub x1,x29,#0x30
710055ad8c  str x8,[sp, #0x10]
710055ad90  ldr x8,[x0]
710055ad94  ldr x8,[x8, #0x30]
710055ad98  add x2,sp,#0x10
710055ad9c  blr x8
710055ada0  tbz w0,#0x0,0x710055adb4
710055ada4  mov w1,#0x50
710055ada8  mov w0,#0x10
710055adac  bl 0x710392e290
710055adb0  cbnz x0,0x710055adb8
710055adb4  mov x0,xzr
710055adb8  mov w8,#0x51
710055adbc  str x8,[sp, #0x10]
710055adc0  adrp x8,0x710435a000
710055adc4  add x8,x8,#0xa0f
710055adc8  mov w9,#0x43
710055adcc  mov x1,x20
710055add0  ldp x11,x12,[x8, #0x10]
710055add4  stp x9,x0,[sp, #0x18]
710055add8  ldp x9,x10,[x8]
710055addc  stp x11,x12,[x0, #0x10]
710055ade0  ldp x11,x12,[x8, #0x20]
710055ade4  stp x9,x10,[x0]
710055ade8  ldp x9,x8,[x8, #0x30]
710055adec  strb wzr,[x0, #0x43]
710055adf0  stp x11,x12,[x0, #0x20]
710055adf4  stp x9,x8,[x0, #0x30]
710055adf8  mov w8,#0x3d
710055adfc  strb w8,[x0, #0x42]
710055ae00  mov w8,#0x676e
710055ae04  strh w8,[x0, #0x40]
710055ae08  add x0,sp,#0x10
710055ae0c  bl 0x71039c2880
710055ae10  ldrb w8,[sp, #0x28]
710055ae14  ldp x10,x9,[sp, #0x30]
710055ae18  lsr x11,x8,#0x1
710055ae1c  tst w8,#0x1
710055ae20  csel x1,x21,x9,eq
710055ae24  csel x2,x11,x10,eq
710055ae28  add x0,sp,#0x10
710055ae2c  bl 0x71039c2870
710055ae30  adrp x8,0x710593b000
710055ae34  ldr x8,[x8, #0x580]
710055ae38  ldr x8,[x8]
710055ae3c  mov w9,#0x7300
710055ae40  ldrsw x9,[x8, x9, LSL #0x0]
710055ae44  cmn w9,#0x1
710055ae48  b.eq 0x710055ae64
710055ae4c  ldr x10,[x8, #0x72c0]
710055ae50  cmp x10,x9
710055ae54  b.ls 0x710055aefc
710055ae58  mov w10,#0xcc0
710055ae5c  madd x8,x9,x10,x8
710055ae60  add x8,x8,#0xcc0
710055ae64  ldp x9,x8,[x8]
710055ae68  add x10,sp,#0x10
710055ae6c  stp x9,x8,[sp]
710055ae70  ldrb w8,[sp, #0x10]
710055ae74  ldp x1,x0,[x19, #0x100]
710055ae78  tst w8,#0x1
710055ae7c  adrp x8,0x71052a8000
710055ae80  ldr x9,[sp, #0x20]
710055ae84  ldr x8,[x8, #0xae8]
710055ae88  ldr x6,[x8]
710055ae8c  orr x10,x10,#0x1
710055ae90  csel x4,x10,x9,eq
710055ae94  mov x2,sp
710055ae98  sub x5,x29,#0x30
710055ae9c  mov w3,wzr
710055aea0  stp xzr,xzr,[x29, #-0x30]
710055aea4  bl 0x71039c2890
710055aea8  ldrsw x8,[x19, #0xe4]
710055aeac  cmp w8,#0x13
710055aeb0  b.cs 0x710055aefc
710055aeb4  add x8,x19,x8, LSL #0x2
710055aeb8  mov w9,#0x4
710055aebc  str w9,[x8, #0x98]
710055aec0  ldrb w8,[sp, #0x10]
710055aec4  tbz w8,#0x0,0x710055aed4
710055aec8  ldr x0,[sp, #0x20]
710055aecc  cbz x0,0x710055aed4
710055aed0  bl 0x710392eb40
710055aed4  ldrb w8,[sp, #0x28]
710055aed8  tbz w8,#0x0,0x710055aee8
710055aedc  ldr x0,[sp, #0x38]
710055aee0  cbz x0,0x710055aee8
710055aee4  bl 0x710392eb40
710055aee8  ldp x29,x30,[sp, #0x70]
710055aeec  ldr x21,[sp, #0x50]
710055aef0  ldp x20,x19,[sp, #0x60]
710055aef4  add sp,sp,#0x80
710055aef8  ret
710055aefc  bl 0x71039c2650
