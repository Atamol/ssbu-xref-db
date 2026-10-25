// addr:      7101e9aa40
// offset:    0x1e9aa40
// name:      FUN_7101e9aa40
// mangled:   
// size:      3284

7101e9aa40  str d8,[sp, #-0x70]!
7101e9aa44  stp x28,x27,[sp, #0x10]
7101e9aa48  stp x26,x25,[sp, #0x20]
7101e9aa4c  stp x24,x23,[sp, #0x30]
7101e9aa50  stp x22,x21,[sp, #0x40]
7101e9aa54  stp x20,x19,[sp, #0x50]
7101e9aa58  stp x29,x30,[sp, #0x60]
7101e9aa5c  add x29,sp,#0x60
7101e9aa60  sub sp,sp,#0x1c0
7101e9aa64  ldrb w8,[x2, #0x1a]
7101e9aa68  strb w8,[x0, #0x9]
7101e9aa6c  ldrb w8,[x2, #0x1b]
7101e9aa70  strb w8,[x0, #0xa]
7101e9aa74  ldrb w8,[x2, #0x18]
7101e9aa78  cmp w8,#0x4
7101e9aa7c  mov w9,#0x4
7101e9aa80  csel w8,w8,w9,cc
7101e9aa84  strb w8,[x0, #0x8]
7101e9aa88  mov x10,x1
7101e9aa8c  ldr x1,[x2, #0x8]
7101e9aa90  mov x20,x0
7101e9aa94  add x8,sp,#0x80
7101e9aa98  mov x0,x10
7101e9aa9c  mov x24,x2
7101e9aaa0  str x10,[sp, #0x10]
7101e9aaa4  bl 0x7103776640
7101e9aaa8  adrp x1,0x7104401000
7101e9aaac  add x1,x1,#0xc00
7101e9aab0  add x8,sp,#0x30
7101e9aab4  add x0,sp,#0x80
7101e9aab8  add x19,sp,#0x30
7101e9aabc  bl 0x71037780e0
7101e9aac0  ldr x8,[x20]
7101e9aac4  add x9,x8,#0x8
7101e9aac8  cmp x9,x19
7101e9aacc  b.eq 0x7101e9aae8
7101e9aad0  ldr x9,[sp, #0x38]
7101e9aad4  str xzr,[sp, #0x38]
7101e9aad8  ldr x0,[x8, #0x10]
7101e9aadc  str x9,[x8, #0x10]
7101e9aae0  cbz x0,0x7101e9aae8
7101e9aae4  bl 0x710392eb40
7101e9aae8  ldr x0,[sp, #0x38]
7101e9aaec  adrp x27,0x710523d000
7101e9aaf0  add x27,x27,#0x9e8
7101e9aaf4  stp x27,xzr,[sp, #0x30]
7101e9aaf8  cbz x0,0x7101e9ab00
7101e9aafc  bl 0x710392eb40
7101e9ab00  adrp x1,0x7104319000
7101e9ab04  add x1,x1,#0x53e
7101e9ab08  add x8,sp,#0x30
7101e9ab0c  add x0,sp,#0x80
7101e9ab10  add x19,sp,#0x30
7101e9ab14  bl 0x71037780e0
7101e9ab18  ldr x8,[x20]
7101e9ab1c  add x9,x8,#0x18
7101e9ab20  cmp x9,x19
7101e9ab24  b.eq 0x7101e9ab40
7101e9ab28  ldr x9,[sp, #0x38]
7101e9ab2c  str xzr,[sp, #0x38]
7101e9ab30  ldr x0,[x8, #0x20]
7101e9ab34  str x9,[x8, #0x20]
7101e9ab38  cbz x0,0x7101e9ab40
7101e9ab3c  bl 0x710392eb40
7101e9ab40  ldr x0,[sp, #0x38]
7101e9ab44  stp x27,xzr,[sp, #0x30]
7101e9ab48  cbz x0,0x7101e9ab50
7101e9ab4c  bl 0x710392eb40
7101e9ab50  adrp x1,0x710432a000
7101e9ab54  add x1,x1,#0x721
7101e9ab58  add x8,sp,#0x30
7101e9ab5c  add x0,sp,#0x80
7101e9ab60  add x19,sp,#0x30
7101e9ab64  bl 0x71037780e0
7101e9ab68  ldr x8,[x20]
7101e9ab6c  add x9,x8,#0x28
7101e9ab70  cmp x9,x19
7101e9ab74  b.eq 0x7101e9ab90
7101e9ab78  ldr x9,[sp, #0x38]
7101e9ab7c  str xzr,[sp, #0x38]
7101e9ab80  ldr x0,[x8, #0x30]
7101e9ab84  str x9,[x8, #0x30]
7101e9ab88  cbz x0,0x7101e9ab90
7101e9ab8c  bl 0x710392eb40
7101e9ab90  ldr x0,[sp, #0x38]
7101e9ab94  stp x27,xzr,[sp, #0x30]
7101e9ab98  cbz x0,0x7101e9aba0
7101e9ab9c  bl 0x710392eb40
7101e9aba0  adrp x1,0x71043e0000
7101e9aba4  add x1,x1,#0x8b7
7101e9aba8  add x8,sp,#0x30
7101e9abac  add x0,sp,#0x80
7101e9abb0  add x19,sp,#0x30
7101e9abb4  bl 0x71037780e0
7101e9abb8  ldr x8,[x20]
7101e9abbc  add x9,x8,#0x38
7101e9abc0  cmp x9,x19
7101e9abc4  b.eq 0x7101e9abe0
7101e9abc8  ldr x9,[sp, #0x38]
7101e9abcc  str xzr,[sp, #0x38]
7101e9abd0  ldr x0,[x8, #0x40]
7101e9abd4  str x9,[x8, #0x40]
7101e9abd8  cbz x0,0x7101e9abe0
7101e9abdc  bl 0x710392eb40
7101e9abe0  ldr x0,[sp, #0x38]
7101e9abe4  stp x27,xzr,[sp, #0x30]
7101e9abe8  cbz x0,0x7101e9abf0
7101e9abec  bl 0x710392eb40
7101e9abf0  adrp x1,0x71043cf000
7101e9abf4  add x1,x1,#0xca4
7101e9abf8  add x8,sp,#0x30
7101e9abfc  add x0,sp,#0x80
7101e9ac00  bl 0x7103776910
7101e9ac04  ldrb w9,[x24, #0x19]
7101e9ac08  adrp x8,0x7104867000
7101e9ac0c  add x8,x8,#0xc2e
7101e9ac10  adrp x10,0x710437c000
7101e9ac14  add x10,x10,#0xc21
7101e9ac18  adrp x11,0x710424f000
7101e9ac1c  add x11,x11,#0xbd7
7101e9ac20  add x0,sp,#0x30
7101e9ac24  cmp w9,#0x1
7101e9ac28  csel x8,x10,x8,eq
7101e9ac2c  cmp w9,#0x0
7101e9ac30  csel x1,x11,x8,eq
7101e9ac34  bl 0x710377a120
7101e9ac38  ldr x0,[sp, #0x38]
7101e9ac3c  adrp x21,0x710523d000
7101e9ac40  add x21,x21,#0x9a8
7101e9ac44  stp x21,xzr,[sp, #0x30]
7101e9ac48  cbz x0,0x7101e9ac50
7101e9ac4c  bl 0x710392eb40
7101e9ac50  ldr x22,[sp, #0x88]
7101e9ac54  adrp x26,0x710523d000
7101e9ac58  add x26,x26,#0x988
7101e9ac5c  stp x26,xzr,[sp, #0x80]
7101e9ac60  cbz x22,0x7101e9ac7c
7101e9ac64  ldr x0,[x22, #0x18]
7101e9ac68  stp x21,xzr,[x22, #0x10]
7101e9ac6c  cbz x0,0x7101e9ac74
7101e9ac70  bl 0x710392eb40
7101e9ac74  mov x0,x22
7101e9ac78  bl 0x710392eb40
7101e9ac7c  ldr x8,[x20]
7101e9ac80  str xzr,[sp, #0x80]
7101e9ac84  strh wzr,[sp, #0x8e]
7101e9ac88  stur wzr,[sp, #0x8a]
7101e9ac8c  add x19,sp,#0x30
7101e9ac90  add x0,sp,#0x30
7101e9ac94  str xzr,[sp, #0xd0]
7101e9ac98  str xzr,[sp, #0x100]
7101e9ac9c  str xzr,[sp, #0x130]
7101e9aca0  str xzr,[sp, #0x160]
7101e9aca4  str xzr,[sp, #0x190]
7101e9aca8  str wzr,[sp, #0x1a0]
7101e9acac  str x8,[sp, #0x18]
7101e9acb0  mov w8,#0x101
7101e9acb4  strh w8,[sp, #0x88]
7101e9acb8  mov w8,#0x1
7101e9acbc  str w8,[sp, #0x90]
7101e9acc0  strh w8,[sp, #0x94]
7101e9acc4  strb w8,[sp, #0x96]
7101e9acc8  mov x8,#0x41f0000000000000
7101e9accc  str x8,[sp, #0x98]
7101e9acd0  add x8,sp,#0x80
7101e9acd4  add x1,x8,#0x60
7101e9acd8  adrp x8,0x7105186000
7101e9acdc  add x8,x8,#0x40
7101e9ace0  str wzr,[sp, #0xa0]
7101e9ace4  str x8,[sp, #0x30]
7101e9ace8  str x19,[sp, #0x50]
7101e9acec  bl 0x7101989a30
7101e9acf0  ldr x0,[sp, #0x50]
7101e9acf4  cmp x19,x0
7101e9acf8  b.eq 0x7101e9ad0c
7101e9acfc  cbz x0,0x7101e9ad18
7101e9ad00  ldr x8,[x0]
7101e9ad04  ldr x8,[x8, #0x28]
7101e9ad08  b 0x7101e9ad14
7101e9ad0c  ldr x8,[x0]
7101e9ad10  ldr x8,[x8, #0x20]
7101e9ad14  blr x8
7101e9ad18  add x8,sp,#0x80
7101e9ad1c  add x1,x8,#0xc0
7101e9ad20  adrp x8,0x7105186000
7101e9ad24  add x8,x8,#0xd0
7101e9ad28  add x19,sp,#0x30
7101e9ad2c  str x19,[sp, #0x50]
7101e9ad30  add x0,sp,#0x30
7101e9ad34  str x8,[sp, #0x30]
7101e9ad38  bl 0x7101989a30
7101e9ad3c  ldr x0,[sp, #0x50]
7101e9ad40  cmp x19,x0
7101e9ad44  b.eq 0x7101e9ad58
7101e9ad48  cbz x0,0x7101e9ad64
7101e9ad4c  ldr x8,[x0]
7101e9ad50  ldr x8,[x8, #0x28]
7101e9ad54  b 0x7101e9ad60
7101e9ad58  ldr x8,[x0]
7101e9ad5c  ldr x8,[x8, #0x20]
7101e9ad60  blr x8
7101e9ad64  ldr x2,[x24]
7101e9ad68  ldp x1,x0,[sp, #0x10]
7101e9ad6c  add x3,sp,#0x80
7101e9ad70  bl 0x7103770b30
7101e9ad74  fmov s8,0x3f800000
7101e9ad78  add x8,sp,#0x30
7101e9ad7c  mov x23,xzr
7101e9ad80  add x8,x8,#0x8
7101e9ad84  stur x8,[x29, #-0x58]
7101e9ad88  str x20,[sp, #0x8]
7101e9ad8c  ldr x8,[x20]
7101e9ad90  add x8,x8,x23, LSL #0x3
7101e9ad94  add x22,x8,#0x48
7101e9ad98  ldrb w8,[x20, #0x8]
7101e9ad9c  cmp x23,x8
7101e9ada0  b.cs 0x7101e9b5ac
7101e9ada4  mov w0,#0x10
7101e9ada8  mov w1,#0xb8
7101e9adac  mov x20,x26
7101e9adb0  mov x19,x27
7101e9adb4  mov x27,x24
7101e9adb8  bl 0x710392e290
7101e9adbc  mov x25,x0
7101e9adc0  cbnz x0,0x7101e9ae0c
7101e9adc4  adrp x8,0x7105332000
7101e9adc8  ldr x0,[x8, #0xf00]
7101e9adcc  cbz x0,0x7101e9ae08
7101e9add0  mov w8,#0xb8
7101e9add4  str wzr,[sp, #0x20]
7101e9add8  add x1,sp,#0x20
7101e9addc  str x8,[sp, #0x30]
7101e9ade0  ldr x8,[x0]
7101e9ade4  ldr x8,[x8, #0x30]
7101e9ade8  add x2,sp,#0x30
7101e9adec  blr x8
7101e9adf0  tbz w0,#0x0,0x7101e9ae08
7101e9adf4  mov w0,#0x10
7101e9adf8  mov w1,#0xb8
7101e9adfc  bl 0x710392e290
7101e9ae00  mov x25,x0
7101e9ae04  cbnz x0,0x7101e9ae0c
7101e9ae08  mov x25,xzr
7101e9ae0c  mov x24,x25
7101e9ae10  mov x26,x25
7101e9ae14  mov x28,x25
7101e9ae18  mov x0,x25
7101e9ae1c  stp xzr,xzr,[x25, #0xa8]
7101e9ae20  stp xzr,xzr,[x25, #0x98]
7101e9ae24  str xzr,[x25, #0x28]
7101e9ae28  str xzr,[x25, #0x18]
7101e9ae2c  stp xzr,xzr,[x25, #0x88]
7101e9ae30  stp xzr,xzr,[x25, #0x78]
7101e9ae34  stp xzr,xzr,[x25, #0x68]
7101e9ae38  stp xzr,xzr,[x25, #0x58]
7101e9ae3c  stp xzr,xzr,[x25, #0x48]
7101e9ae40  stp xzr,xzr,[x25, #0x38]
7101e9ae44  stp xzr,xzr,[x25]
7101e9ae48  str xzr,[x24, #0x30]!
7101e9ae4c  str xzr,[x26, #0x20]!
7101e9ae50  str xzr,[x28, #0x10]!
7101e9ae54  bl 0x7103776290
7101e9ae58  mov x0,x28
7101e9ae5c  bl 0x7103776290
7101e9ae60  mov x0,x26
7101e9ae64  bl 0x7103776290
7101e9ae68  mov x0,x24
7101e9ae6c  bl 0x7103776290
7101e9ae70  mov w0,#0x10
7101e9ae74  mov w1,#0x20
7101e9ae78  str x21,[x25, #0x40]
7101e9ae7c  bl 0x710392e290
7101e9ae80  cbnz x0,0x7101e9aec8
7101e9ae84  adrp x8,0x7105332000
7101e9ae88  ldr x0,[x8, #0xf00]
7101e9ae8c  cbz x0,0x7101e9aec4
7101e9ae90  mov w8,#0x20
7101e9ae94  str wzr,[sp, #0x20]
7101e9ae98  add x1,sp,#0x20
7101e9ae9c  str x8,[sp, #0x30]
7101e9aea0  ldr x8,[x0]
7101e9aea4  ldr x8,[x8, #0x30]
7101e9aea8  add x2,sp,#0x30
7101e9aeac  blr x8
7101e9aeb0  tbz w0,#0x0,0x7101e9aec4
7101e9aeb4  mov w0,#0x10
7101e9aeb8  mov w1,#0x20
7101e9aebc  bl 0x710392e290
7101e9aec0  cbnz x0,0x7101e9aec8
7101e9aec4  mov x0,xzr
7101e9aec8  stp xzr,xzr,[x0, #0x10]
7101e9aecc  mov w1,#0x20
7101e9aed0  stp xzr,xzr,[x0]
7101e9aed4  stp x0,x21,[x25, #0x48]
7101e9aed8  mov w0,#0x10
7101e9aedc  bl 0x710392e290
7101e9aee0  cbnz x0,0x7101e9af28
7101e9aee4  adrp x8,0x7105332000
7101e9aee8  ldr x0,[x8, #0xf00]
7101e9aeec  cbz x0,0x7101e9af24
7101e9aef0  mov w8,#0x20
7101e9aef4  str wzr,[sp, #0x20]
7101e9aef8  add x1,sp,#0x20
7101e9aefc  str x8,[sp, #0x30]
7101e9af00  ldr x8,[x0]
7101e9af04  ldr x8,[x8, #0x30]
7101e9af08  add x2,sp,#0x30
7101e9af0c  blr x8
7101e9af10  tbz w0,#0x0,0x7101e9af24
7101e9af14  mov w0,#0x10
7101e9af18  mov w1,#0x20
7101e9af1c  bl 0x710392e290
7101e9af20  cbnz x0,0x7101e9af28
7101e9af24  mov x0,xzr
7101e9af28  stp xzr,xzr,[x0, #0x10]
7101e9af2c  mov w1,#0x20
7101e9af30  stp xzr,xzr,[x0]
7101e9af34  stp x0,x21,[x25, #0x58]
7101e9af38  mov w0,#0x10
7101e9af3c  bl 0x710392e290
7101e9af40  mov x24,x27
7101e9af44  cbnz x0,0x7101e9af8c
7101e9af48  adrp x8,0x7105332000
7101e9af4c  ldr x0,[x8, #0xf00]
7101e9af50  cbz x0,0x7101e9af88
7101e9af54  mov w8,#0x20
7101e9af58  str wzr,[sp, #0x20]
7101e9af5c  add x1,sp,#0x20
7101e9af60  str x8,[sp, #0x30]
7101e9af64  ldr x8,[x0]
7101e9af68  ldr x8,[x8, #0x30]
7101e9af6c  add x2,sp,#0x30
7101e9af70  blr x8
7101e9af74  tbz w0,#0x0,0x7101e9af88
7101e9af78  mov w0,#0x10
7101e9af7c  mov w1,#0x20
7101e9af80  bl 0x710392e290
7101e9af84  cbnz x0,0x7101e9af8c
7101e9af88  mov x0,xzr
7101e9af8c  stp xzr,xzr,[x0, #0x10]
7101e9af90  mov w1,#0x20
7101e9af94  stp xzr,xzr,[x0]
7101e9af98  stp x0,x21,[x25, #0x68]
7101e9af9c  mov w0,#0x10
7101e9afa0  bl 0x710392e290
7101e9afa4  mov x27,x19
7101e9afa8  cbnz x0,0x7101e9aff0
7101e9afac  adrp x8,0x7105332000
7101e9afb0  ldr x0,[x8, #0xf00]
7101e9afb4  cbz x0,0x7101e9afec
7101e9afb8  mov w8,#0x20
7101e9afbc  str wzr,[sp, #0x20]
7101e9afc0  add x1,sp,#0x20
7101e9afc4  str x8,[sp, #0x30]
7101e9afc8  ldr x8,[x0]
7101e9afcc  ldr x8,[x8, #0x30]
7101e9afd0  add x2,sp,#0x30
7101e9afd4  blr x8
7101e9afd8  tbz w0,#0x0,0x7101e9afec
7101e9afdc  mov w0,#0x10
7101e9afe0  mov w1,#0x20
7101e9afe4  bl 0x710392e290
7101e9afe8  cbnz x0,0x7101e9aff0
7101e9afec  mov x0,xzr
7101e9aff0  stp xzr,xzr,[x0, #0x10]
7101e9aff4  orr w1,wzr,#0x18
7101e9aff8  stp xzr,xzr,[x0]
7101e9affc  stp x0,x27,[x25, #0x78]
7101e9b000  mov w0,#0x10
7101e9b004  bl 0x710392e290
7101e9b008  cbnz x0,0x7101e9b050
7101e9b00c  adrp x8,0x7105332000
7101e9b010  ldr x0,[x8, #0xf00]
7101e9b014  cbz x0,0x7101e9b04c
7101e9b018  orr w8,wzr,#0x18
7101e9b01c  str wzr,[sp, #0x20]
7101e9b020  add x1,sp,#0x20
7101e9b024  str x8,[sp, #0x30]
7101e9b028  ldr x8,[x0]
7101e9b02c  ldr x8,[x8, #0x30]
7101e9b030  add x2,sp,#0x30
7101e9b034  blr x8
7101e9b038  tbz w0,#0x0,0x7101e9b04c
7101e9b03c  mov w0,#0x10
7101e9b040  orr w1,wzr,#0x18
7101e9b044  bl 0x710392e290
7101e9b048  cbnz x0,0x7101e9b050
7101e9b04c  mov x0,xzr
7101e9b050  mov w8,#0x1
7101e9b054  stp xzr,xzr,[x0]
7101e9b058  strb w8,[x0, #0x10]
7101e9b05c  strb wzr,[x25, #0x98]
7101e9b060  stur xzr,[x25, #0xae]
7101e9b064  strh w8,[x25, #0xb6]
7101e9b068  stp x0,xzr,[x25, #0x88]
7101e9b06c  stp xzr,xzr,[x25, #0xa0]
7101e9b070  ldr x26,[x22]
7101e9b074  str x25,[x22]
7101e9b078  cbz x26,0x7101e9b08c
7101e9b07c  mov x0,x26
7101e9b080  bl 0x7101e9a8e0
7101e9b084  mov x0,x26
7101e9b088  bl 0x710392eb40
7101e9b08c  ldr x0,[x24, #0x10]
7101e9b090  add x8,sp,#0x30
7101e9b094  mov w1,w23
7101e9b098  bl 0x71003a4ca0
7101e9b09c  ldr x19,[sp, #0x18]
7101e9b0a0  ldur x2,[x29, #-0x58]
7101e9b0a4  mov w1,w23
7101e9b0a8  mov x0,x19
7101e9b0ac  bl 0x71037717d0
7101e9b0b0  ldr x9,[x19]
7101e9b0b4  add x19,sp,#0x20
7101e9b0b8  ldr x8,[x9, #0x1b8]
7101e9b0bc  mov x26,x20
7101e9b0c0  ldr x20,[sp, #0x8]
7101e9b0c4  cbz x8,0x7101e9b1ac
7101e9b0c8  add x9,x9,#0x1b8
7101e9b0cc  mov x10,x9
7101e9b0d0  mov x11,x8
7101e9b0d4  ldr w12,[x11, #0x20]
7101e9b0d8  cmp w12,w23
7101e9b0dc  cset w12,lt
7101e9b0e0  csel x10,x10,x11,lt
7101e9b0e4  ldr x11,[x11, w12, UXTW #0x3]
7101e9b0e8  cbnz x11,0x7101e9b0d4
7101e9b0ec  cmp x10,x9
7101e9b0f0  b.eq 0x7101e9b144
7101e9b0f4  ldr w11,[x10, #0x20]
7101e9b0f8  cmp w11,w23
7101e9b0fc  b.gt 0x7101e9b144
7101e9b100  ldr x25,[x10, #0x28]
7101e9b104  cbz x25,0x7101e9b144
7101e9b108  ldr x8,[x25]
7101e9b10c  ldr x8,[x8, #0x1f8]
7101e9b110  mov w1,#0x1
7101e9b114  mov x0,x25
7101e9b118  blr x8
7101e9b11c  ldr x8,[x25]
7101e9b120  ldr x8,[x8, #0x388]
7101e9b124  mov x0,x25
7101e9b128  mov w1,wzr
7101e9b12c  mov w2,wzr
7101e9b130  blr x8
7101e9b134  ldr x8,[sp, #0x18]
7101e9b138  ldr x8,[x8]
7101e9b13c  add x9,x8,#0x1b8
7101e9b140  ldr x8,[x8, #0x1b8]
7101e9b144  cbz x8,0x7101e9b1ac
7101e9b148  mov x10,x9
7101e9b14c  ldr w11,[x8, #0x20]
7101e9b150  cmp w11,w23
7101e9b154  cset w11,lt
7101e9b158  csel x10,x10,x8,lt
7101e9b15c  ldr x8,[x8, w11, UXTW #0x3]
7101e9b160  cbnz x8,0x7101e9b14c
7101e9b164  cmp x10,x9
7101e9b168  b.eq 0x7101e9b1ac
7101e9b16c  ldr w8,[x10, #0x20]
7101e9b170  cmp w8,w23
7101e9b174  b.gt 0x7101e9b1ac
7101e9b178  ldr x25,[x10, #0x28]
7101e9b17c  cbz x25,0x7101e9b1ac
7101e9b180  ldr x8,[x25]
7101e9b184  ldr x8,[x8, #0x208]
7101e9b188  mov w1,#0x1
7101e9b18c  mov x0,x25
7101e9b190  blr x8
7101e9b194  ldr x8,[x25]
7101e9b198  ldr x8,[x8, #0x388]
7101e9b19c  mov x0,x25
7101e9b1a0  mov w1,wzr
7101e9b1a4  mov w2,wzr
7101e9b1a8  blr x8
7101e9b1ac  ldr x0,[sp, #0x10]
7101e9b1b0  ldur x1,[x29, #-0x58]
7101e9b1b4  add x8,sp,#0x20
7101e9b1b8  bl 0x7103776640
7101e9b1bc  ldr x8,[x22]
7101e9b1c0  cmp x8,x19
7101e9b1c4  b.eq 0x7101e9b1f4
7101e9b1c8  ldr x9,[sp, #0x28]
7101e9b1cc  str xzr,[sp, #0x28]
7101e9b1d0  ldr x25,[x8, #0x8]
7101e9b1d4  str x9,[x8, #0x8]
7101e9b1d8  cbz x25,0x7101e9b1f4
7101e9b1dc  ldr x0,[x25, #0x18]
7101e9b1e0  stp x21,xzr,[x25, #0x10]
7101e9b1e4  cbz x0,0x7101e9b1ec
7101e9b1e8  bl 0x710392eb40
7101e9b1ec  mov x0,x25
7101e9b1f0  bl 0x710392eb40
7101e9b1f4  ldr x28,[sp, #0x28]
7101e9b1f8  stp x26,xzr,[sp, #0x20]
7101e9b1fc  cbz x28,0x7101e9b218
7101e9b200  ldr x0,[x28, #0x18]
7101e9b204  stp x21,xzr,[x28, #0x10]
7101e9b208  cbz x0,0x7101e9b210
7101e9b20c  bl 0x710392eb40
7101e9b210  mov x0,x28
7101e9b214  bl 0x710392eb40
7101e9b218  ldr x28,[x22]
7101e9b21c  add x8,sp,#0x20
7101e9b220  mov x0,x28
7101e9b224  adrp x1,0x7104422000
7101e9b228  add x1,x1,#0xa8d
7101e9b22c  bl 0x7103776640
7101e9b230  ldr x8,[x22]
7101e9b234  add x9,x8,#0x30
7101e9b238  cmp x9,x19
7101e9b23c  b.eq 0x7101e9b26c
7101e9b240  ldr x9,[sp, #0x28]
7101e9b244  str xzr,[sp, #0x28]
7101e9b248  ldr x25,[x8, #0x38]
7101e9b24c  str x9,[x8, #0x38]
7101e9b250  cbz x25,0x7101e9b26c
7101e9b254  ldr x0,[x25, #0x18]
7101e9b258  stp x21,xzr,[x25, #0x10]
7101e9b25c  cbz x0,0x7101e9b264
7101e9b260  bl 0x710392eb40
7101e9b264  mov x0,x25
7101e9b268  bl 0x710392eb40
7101e9b26c  ldr x25,[sp, #0x28]
7101e9b270  stp x26,xzr,[sp, #0x20]
7101e9b274  cbz x25,0x7101e9b290
7101e9b278  ldr x0,[x25, #0x18]
7101e9b27c  stp x21,xzr,[x25, #0x10]
7101e9b280  cbz x0,0x7101e9b288
7101e9b284  bl 0x710392eb40
7101e9b288  mov x0,x25
7101e9b28c  bl 0x710392eb40
7101e9b290  add x8,sp,#0x20
7101e9b294  mov x0,x28
7101e9b298  adrp x1,0x71042c5000
7101e9b29c  add x1,x1,#0x541
7101e9b2a0  bl 0x7103776640
7101e9b2a4  ldr x8,[x22]
7101e9b2a8  add x9,x8,#0x20
7101e9b2ac  cmp x9,x19
7101e9b2b0  b.eq 0x7101e9b2e0
7101e9b2b4  ldr x9,[sp, #0x28]
7101e9b2b8  str xzr,[sp, #0x28]
7101e9b2bc  ldr x25,[x8, #0x28]
7101e9b2c0  str x9,[x8, #0x28]
7101e9b2c4  cbz x25,0x7101e9b2e0
7101e9b2c8  ldr x0,[x25, #0x18]
7101e9b2cc  stp x21,xzr,[x25, #0x10]
7101e9b2d0  cbz x0,0x7101e9b2d8
7101e9b2d4  bl 0x710392eb40
7101e9b2d8  mov x0,x25
7101e9b2dc  bl 0x710392eb40
7101e9b2e0  ldr x25,[sp, #0x28]
7101e9b2e4  stp x26,xzr,[sp, #0x20]
7101e9b2e8  cbz x25,0x7101e9b304
7101e9b2ec  ldr x0,[x25, #0x18]
7101e9b2f0  stp x21,xzr,[x25, #0x10]
7101e9b2f4  cbz x0,0x7101e9b2fc
7101e9b2f8  bl 0x710392eb40
7101e9b2fc  mov x0,x25
7101e9b300  bl 0x710392eb40
7101e9b304  ldr x8,[x22]
7101e9b308  ldr x0,[x8, #0x28]
7101e9b30c  mov v0.16B,v8.16B
7101e9b310  adrp x1,0x710433a000
7101e9b314  add x1,x1,#0x8b3
7101e9b318  bl 0x7103778300
7101e9b31c  add x8,sp,#0x20
7101e9b320  mov x0,x28
7101e9b324  adrp x1,0x71042d6000
7101e9b328  add x1,x1,#0x9cf
7101e9b32c  bl 0x7103776640
7101e9b330  ldr x8,[x22]
7101e9b334  add x9,x8,#0x10
7101e9b338  cmp x9,x19
7101e9b33c  b.eq 0x7101e9b36c
7101e9b340  ldr x9,[sp, #0x28]
7101e9b344  str xzr,[sp, #0x28]
7101e9b348  ldr x25,[x8, #0x18]
7101e9b34c  str x9,[x8, #0x18]
7101e9b350  cbz x25,0x7101e9b36c
7101e9b354  ldr x0,[x25, #0x18]
7101e9b358  stp x21,xzr,[x25, #0x10]
7101e9b35c  cbz x0,0x7101e9b364
7101e9b360  bl 0x710392eb40
7101e9b364  mov x0,x25
7101e9b368  bl 0x710392eb40
7101e9b36c  ldr x25,[sp, #0x28]
7101e9b370  stp x26,xzr,[sp, #0x20]
7101e9b374  cbz x25,0x7101e9b390
7101e9b378  ldr x0,[x25, #0x18]
7101e9b37c  stp x21,xzr,[x25, #0x10]
7101e9b380  cbz x0,0x7101e9b388
7101e9b384  bl 0x710392eb40
7101e9b388  mov x0,x25
7101e9b38c  bl 0x710392eb40
7101e9b390  add x8,sp,#0x20
7101e9b394  mov x0,x28
7101e9b398  adrp x1,0x71043cd000
7101e9b39c  add x1,x1,#0x314
7101e9b3a0  bl 0x7103776910
7101e9b3a4  ldr x8,[x22]
7101e9b3a8  add x9,x8,#0x40
7101e9b3ac  cmp x9,x19
7101e9b3b0  b.eq 0x7101e9b3cc
7101e9b3b4  ldr x9,[sp, #0x28]
7101e9b3b8  str xzr,[sp, #0x28]
7101e9b3bc  ldr x0,[x8, #0x48]
7101e9b3c0  str x9,[x8, #0x48]
7101e9b3c4  cbz x0,0x7101e9b3cc
7101e9b3c8  bl 0x710392eb40
7101e9b3cc  ldr x0,[sp, #0x28]
7101e9b3d0  stp x21,xzr,[sp, #0x20]
7101e9b3d4  cbz x0,0x7101e9b3dc
7101e9b3d8  bl 0x710392eb40
7101e9b3dc  ldr x8,[x22]
7101e9b3e0  add x0,x8,#0x10
7101e9b3e4  add x8,sp,#0x20
7101e9b3e8  adrp x1,0x710426d000
7101e9b3ec  add x1,x1,#0xc22
7101e9b3f0  bl 0x7103776910
7101e9b3f4  ldr x8,[x22]
7101e9b3f8  add x9,x8,#0x50
7101e9b3fc  cmp x9,x19
7101e9b400  b.eq 0x7101e9b41c
7101e9b404  ldr x9,[sp, #0x28]
7101e9b408  str xzr,[sp, #0x28]
7101e9b40c  ldr x0,[x8, #0x58]
7101e9b410  str x9,[x8, #0x58]
7101e9b414  cbz x0,0x7101e9b41c
7101e9b418  bl 0x710392eb40
7101e9b41c  ldr x0,[sp, #0x28]
7101e9b420  stp x21,xzr,[sp, #0x20]
7101e9b424  cbz x0,0x7101e9b42c
7101e9b428  bl 0x710392eb40
7101e9b42c  add x8,sp,#0x20
7101e9b430  mov x0,x28
7101e9b434  adrp x1,0x710436a000
7101e9b438  add x1,x1,#0xc4b
7101e9b43c  bl 0x7103776910
7101e9b440  ldr x8,[x22]
7101e9b444  add x9,x8,#0x60
7101e9b448  cmp x9,x19
7101e9b44c  b.eq 0x7101e9b468
7101e9b450  ldr x9,[sp, #0x28]
7101e9b454  str xzr,[sp, #0x28]
7101e9b458  ldr x0,[x8, #0x68]
7101e9b45c  str x9,[x8, #0x68]
7101e9b460  cbz x0,0x7101e9b468
7101e9b464  bl 0x710392eb40
7101e9b468  ldr x0,[sp, #0x28]
7101e9b46c  stp x21,xzr,[sp, #0x20]
7101e9b470  cbz x0,0x7101e9b478
7101e9b474  bl 0x710392eb40
7101e9b478  add x8,sp,#0x20
7101e9b47c  mov x0,x28
7101e9b480  adrp x1,0x7104433000
7101e9b484  add x1,x1,#0x78e
7101e9b488  bl 0x7103776910
7101e9b48c  ldr x8,[x22]
7101e9b490  add x9,x8,#0x70
7101e9b494  cmp x9,x19
7101e9b498  b.eq 0x7101e9b4b4
7101e9b49c  ldr x9,[sp, #0x28]
7101e9b4a0  str xzr,[sp, #0x28]
7101e9b4a4  ldr x0,[x8, #0x78]
7101e9b4a8  str x9,[x8, #0x78]
7101e9b4ac  cbz x0,0x7101e9b4b4
7101e9b4b0  bl 0x710392eb40
7101e9b4b4  ldr x0,[sp, #0x28]
7101e9b4b8  stp x21,xzr,[sp, #0x20]
7101e9b4bc  cbz x0,0x7101e9b4c4
7101e9b4c0  bl 0x710392eb40
7101e9b4c4  add x8,sp,#0x20
7101e9b4c8  mov x0,x28
7101e9b4cc  adrp x1,0x71043cf000
7101e9b4d0  add x1,x1,#0xbba
7101e9b4d4  bl 0x71037780e0
7101e9b4d8  ldr x8,[x22]
7101e9b4dc  add x9,x8,#0x80
7101e9b4e0  cmp x9,x19
7101e9b4e4  b.eq 0x7101e9b500
7101e9b4e8  ldr x9,[sp, #0x28]
7101e9b4ec  str xzr,[sp, #0x28]
7101e9b4f0  ldr x0,[x8, #0x88]
7101e9b4f4  str x9,[x8, #0x88]
7101e9b4f8  cbz x0,0x7101e9b500
7101e9b4fc  bl 0x710392eb40
7101e9b500  ldr x0,[sp, #0x28]
7101e9b504  stp x27,xzr,[sp, #0x20]
7101e9b508  cbz x0,0x7101e9b510
7101e9b50c  bl 0x710392eb40
7101e9b510  adrp x8,0x7104470000
7101e9b514  add x8,x8,#0xee0
7101e9b518  ldr x9,[x22]
7101e9b51c  ldr x8,[x8, x23, LSL #0x3]
7101e9b520  str x8,[x9, #0x90]
7101e9b524  ldrb w8,[x24, #0x19]
7101e9b528  ldr x0,[x28, #0x8]
7101e9b52c  mov v0.16B,v8.16B
7101e9b530  adrp x9,0x7104281000
7101e9b534  add x9,x9,#0x1bd
7101e9b538  cmp w8,#0x2
7101e9b53c  adrp x8,0x7104413000
7101e9b540  add x8,x8,#0x0
7101e9b544  csel x1,x9,x8,eq
7101e9b548  bl 0x7103778300
7101e9b54c  ldr x0,[x28, #0x8]
7101e9b550  mov v0.16B,v8.16B
7101e9b554  adrp x1,0x71043f0000
7101e9b558  add x1,x1,#0xfcb
7101e9b55c  bl 0x7103778300
7101e9b560  ldrb w8,[x20, #0x9]
7101e9b564  ldr x0,[x28, #0x8]
7101e9b568  mov v0.16B,v8.16B
7101e9b56c  adrp x9,0x710439b000
7101e9b570  add x9,x9,#0xa10
7101e9b574  cmp w8,#0x0
7101e9b578  adrp x8,0x710425d000
7101e9b57c  add x8,x8,#0xb6c
7101e9b580  csel x1,x9,x8,eq
7101e9b584  bl 0x7103778300
7101e9b588  ldr x0,[x28, #0x8]
7101e9b58c  mov v0.16B,v8.16B
7101e9b590  adrp x1,0x710438d000
7101e9b594  add x1,x1,#0x258
7101e9b598  bl 0x7103778300
7101e9b59c  mov x0,x20
7101e9b5a0  mov w1,w23
7101e9b5a4  bl 0x7101e9b720
7101e9b5a8  b 0x7101e9b5c8
7101e9b5ac  ldr x25,[x22]
7101e9b5b0  str xzr,[x22]
7101e9b5b4  cbz x25,0x7101e9b5c8
7101e9b5b8  mov x0,x25
7101e9b5bc  bl 0x7101e9a8e0
7101e9b5c0  mov x0,x25
7101e9b5c4  bl 0x710392eb40
7101e9b5c8  add x23,x23,#0x1
7101e9b5cc  cmp x23,#0x4
7101e9b5d0  b.ne 0x7101e9ad8c
7101e9b5d4  ldr x19,[x20]
7101e9b5d8  ldr x0,[x19]
7101e9b5dc  ldr x8,[x0]
7101e9b5e0  ldr x8,[x8, #0x60]
7101e9b5e4  mov w1,wzr
7101e9b5e8  blr x8
7101e9b5ec  ldr x0,[x19]
7101e9b5f0  ldr x8,[x0]
7101e9b5f4  ldr x8,[x8, #0x70]
7101e9b5f8  mov w1,wzr
7101e9b5fc  blr x8
7101e9b600  ldr x0,[sp, #0x190]
7101e9b604  add x8,sp,#0x80
7101e9b608  add x8,x8,#0xf0
7101e9b60c  cmp x8,x0
7101e9b610  b.eq 0x7101e9b624
7101e9b614  cbz x0,0x7101e9b630
7101e9b618  ldr x8,[x0]
7101e9b61c  ldr x8,[x8, #0x28]
7101e9b620  b 0x7101e9b62c
7101e9b624  ldr x8,[x0]
7101e9b628  ldr x8,[x8, #0x20]
7101e9b62c  blr x8
7101e9b630  ldr x0,[sp, #0x160]
7101e9b634  add x8,sp,#0x80
7101e9b638  add x8,x8,#0xc0
7101e9b63c  cmp x8,x0
7101e9b640  b.eq 0x7101e9b654
7101e9b644  cbz x0,0x7101e9b660
7101e9b648  ldr x8,[x0]
7101e9b64c  ldr x8,[x8, #0x28]
7101e9b650  b 0x7101e9b65c
7101e9b654  ldr x8,[x0]
7101e9b658  ldr x8,[x8, #0x20]
7101e9b65c  blr x8
7101e9b660  ldr x0,[sp, #0x130]
7101e9b664  add x8,sp,#0x80
7101e9b668  add x8,x8,#0x90
7101e9b66c  cmp x8,x0
7101e9b670  b.eq 0x7101e9b684
7101e9b674  cbz x0,0x7101e9b690
7101e9b678  ldr x8,[x0]
7101e9b67c  ldr x8,[x8, #0x28]
7101e9b680  b 0x7101e9b68c
7101e9b684  ldr x8,[x0]
7101e9b688  ldr x8,[x8, #0x20]
7101e9b68c  blr x8
7101e9b690  ldr x0,[sp, #0x100]
7101e9b694  add x8,sp,#0x80
7101e9b698  add x8,x8,#0x60
7101e9b69c  cmp x8,x0
7101e9b6a0  b.eq 0x7101e9b6b4
7101e9b6a4  cbz x0,0x7101e9b6c0
7101e9b6a8  ldr x8,[x0]
7101e9b6ac  ldr x8,[x8, #0x28]
7101e9b6b0  b 0x7101e9b6bc
7101e9b6b4  ldr x8,[x0]
7101e9b6b8  ldr x8,[x8, #0x20]
7101e9b6bc  blr x8
7101e9b6c0  ldr x0,[sp, #0xd0]
7101e9b6c4  add x8,sp,#0x80
7101e9b6c8  add x8,x8,#0x30
7101e9b6cc  cmp x8,x0
7101e9b6d0  b.eq 0x7101e9b6e4
7101e9b6d4  cbz x0,0x7101e9b6f0
7101e9b6d8  ldr x8,[x0]
7101e9b6dc  ldr x8,[x8, #0x28]
7101e9b6e0  b 0x7101e9b6ec
7101e9b6e4  ldr x8,[x0]
7101e9b6e8  ldr x8,[x8, #0x20]
7101e9b6ec  blr x8
7101e9b6f0  add sp,sp,#0x1c0
7101e9b6f4  ldp x29,x30,[sp, #0x60]
7101e9b6f8  ldp x20,x19,[sp, #0x50]
7101e9b6fc  ldp x22,x21,[sp, #0x40]
7101e9b700  ldp x24,x23,[sp, #0x30]
7101e9b704  ldp x26,x25,[sp, #0x20]
7101e9b708  ldp x28,x27,[sp, #0x10]
7101e9b70c  ldr d8,[sp], #0x70
7101e9b710  ret
