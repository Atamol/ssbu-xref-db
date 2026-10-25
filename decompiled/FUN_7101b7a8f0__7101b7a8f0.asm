// addr:      7101b7a8f0
// offset:    0x1b7a8f0
// name:      FUN_7101b7a8f0
// mangled:   
// size:      6696

7101b7a8f0  sub sp,sp,#0xe0
7101b7a8f4  stp x28,x27,[sp, #0x80]
7101b7a8f8  stp x26,x25,[sp, #0x90]
7101b7a8fc  stp x24,x23,[sp, #0xa0]
7101b7a900  stp x22,x21,[sp, #0xb0]
7101b7a904  stp x20,x19,[sp, #0xc0]
7101b7a908  stp x29,x30,[sp, #0xd0]
7101b7a90c  add x29,sp,#0xd0
7101b7a910  adrp x8,0x71050ab000
7101b7a914  add x8,x8,#0x468
7101b7a918  mov x19,x0
7101b7a91c  stp x8,xzr,[x0]
7101b7a920  orr x8,xzr,#0x1ffffffff
7101b7a924  stp xzr,x8,[x0, #0x60]
7101b7a928  mov w8,#0x1
7101b7a92c  stp xzr,xzr,[x0, #0x10]
7101b7a930  mov w22,w2
7101b7a934  strb wzr,[x0, #0x58]
7101b7a938  str x1,[x0, #0x78]
7101b7a93c  mov w1,#0x6e90
7101b7a940  strb w8,[x0, #0x70]
7101b7a944  stp xzr,xzr,[x0, #0x48]
7101b7a948  mov w0,#0x10
7101b7a94c  bl 0x710392e290
7101b7a950  mov x20,x0
7101b7a954  cbnz x0,0x7101b7a9a0
7101b7a958  adrp x8,0x7105332000
7101b7a95c  ldr x0,[x8, #0xf00]
7101b7a960  cbz x0,0x7101b7a99c
7101b7a964  mov w8,#0x6e90
7101b7a968  str wzr,[sp, #0x60]
7101b7a96c  add x1,sp,#0x60
7101b7a970  stur x8,[x29, #-0x60]
7101b7a974  ldr x8,[x0]
7101b7a978  ldr x8,[x8, #0x30]
7101b7a97c  sub x2,x29,#0x60
7101b7a980  blr x8
7101b7a984  tbz w0,#0x0,0x7101b7a99c
7101b7a988  mov w1,#0x6e90
7101b7a98c  mov w0,#0x10
7101b7a990  bl 0x710392e290
7101b7a994  mov x20,x0
7101b7a998  cbnz x0,0x7101b7a9a0
7101b7a99c  mov x20,xzr
7101b7a9a0  adrp x8,0x71050ab000
7101b7a9a4  add x8,x8,#0x240
7101b7a9a8  mov w0,#0x10
7101b7a9ac  mov w1,#0x8
7101b7a9b0  stp x8,x19,[x20]
7101b7a9b4  add x21,x20,#0x10
7101b7a9b8  bl 0x710392e290
7101b7a9bc  mov x23,x0
7101b7a9c0  cbnz x0,0x7101b7aa0c
7101b7a9c4  adrp x8,0x7105332000
7101b7a9c8  ldr x0,[x8, #0xf00]
7101b7a9cc  cbz x0,0x7101b7aa08
7101b7a9d0  mov w8,#0x8
7101b7a9d4  str wzr,[sp, #0x60]
7101b7a9d8  add x1,sp,#0x60
7101b7a9dc  stur x8,[x29, #-0x60]
7101b7a9e0  ldr x8,[x0]
7101b7a9e4  ldr x8,[x8, #0x30]
7101b7a9e8  sub x2,x29,#0x60
7101b7a9ec  blr x8
7101b7a9f0  tbz w0,#0x0,0x7101b7aa08
7101b7a9f4  mov w0,#0x10
7101b7a9f8  mov w1,#0x8
7101b7a9fc  bl 0x710392e290
7101b7aa00  mov x23,x0
7101b7aa04  cbnz x0,0x7101b7aa0c
7101b7aa08  mov x23,xzr
7101b7aa0c  mov x0,x23
7101b7aa10  bl 0x7103773200
7101b7aa14  add x0,x20,#0x18
7101b7aa18  mov x1,x21
7101b7aa1c  str x23,[x20, #0x10]
7101b7aa20  bl 0x7101414b10
7101b7aa24  adrp x8,0x71050ab000
7101b7aa28  add x8,x8,#0x278
7101b7aa2c  str x8,[x20, #0x18]
7101b7aa30  adrp x24,0x710523d000
7101b7aa34  add x24,x24,#0x9a8
7101b7aa38  mov x8,x20
7101b7aa3c  str x20,[x20, #0x28]
7101b7aa40  mov w0,#0x10
7101b7aa44  mov w1,#0x20
7101b7aa48  str x24,[x8, #0x30]!
7101b7aa4c  str x8,[sp, #0x58]
7101b7aa50  stp xzr,xzr,[x20, #0x50]
7101b7aa54  stp xzr,xzr,[x20, #0x40]
7101b7aa58  str xzr,[x20, #0x38]
7101b7aa5c  bl 0x710392e290
7101b7aa60  cbnz x0,0x7101b7aaa8
7101b7aa64  adrp x8,0x7105332000
7101b7aa68  ldr x0,[x8, #0xf00]
7101b7aa6c  cbz x0,0x7101b7aaa4
7101b7aa70  mov w8,#0x20
7101b7aa74  str wzr,[sp, #0x60]
7101b7aa78  add x1,sp,#0x60
7101b7aa7c  stur x8,[x29, #-0x60]
7101b7aa80  ldr x8,[x0]
7101b7aa84  ldr x8,[x8, #0x30]
7101b7aa88  sub x2,x29,#0x60
7101b7aa8c  blr x8
7101b7aa90  tbz w0,#0x0,0x7101b7aaa4
7101b7aa94  mov w0,#0x10
7101b7aa98  mov w1,#0x20
7101b7aa9c  bl 0x710392e290
7101b7aaa0  cbnz x0,0x7101b7aaa8
7101b7aaa4  mov x0,xzr
7101b7aaa8  adrp x25,0x710523d000
7101b7aaac  add x25,x25,#0x9e8
7101b7aab0  mov x8,x20
7101b7aab4  stp xzr,xzr,[x0, #0x10]
7101b7aab8  orr w1,wzr,#0x18
7101b7aabc  stp xzr,xzr,[x0]
7101b7aac0  str x25,[x8, #0x40]!
7101b7aac4  stur x0,[x8, #-0x8]
7101b7aac8  mov w0,#0x10
7101b7aacc  str x8,[sp, #0x50]
7101b7aad0  bl 0x710392e290
7101b7aad4  cbnz x0,0x7101b7ab1c
7101b7aad8  adrp x8,0x7105332000
7101b7aadc  ldr x0,[x8, #0xf00]
7101b7aae0  cbz x0,0x7101b7ab18
7101b7aae4  orr w8,wzr,#0x18
7101b7aae8  str wzr,[sp, #0x60]
7101b7aaec  add x1,sp,#0x60
7101b7aaf0  stur x8,[x29, #-0x60]
7101b7aaf4  ldr x8,[x0]
7101b7aaf8  ldr x8,[x8, #0x30]
7101b7aafc  sub x2,x29,#0x60
7101b7ab00  blr x8
7101b7ab04  tbz w0,#0x0,0x7101b7ab18
7101b7ab08  mov w0,#0x10
7101b7ab0c  orr w1,wzr,#0x18
7101b7ab10  bl 0x710392e290
7101b7ab14  cbnz x0,0x7101b7ab1c
7101b7ab18  mov x0,xzr
7101b7ab1c  mov w23,#0x1
7101b7ab20  mov x8,x20
7101b7ab24  orr w1,wzr,#0x18
7101b7ab28  stp xzr,xzr,[x0]
7101b7ab2c  strb w23,[x0, #0x10]
7101b7ab30  str x25,[x8, #0x50]!
7101b7ab34  stur x0,[x8, #-0x8]
7101b7ab38  mov w0,#0x10
7101b7ab3c  str x8,[sp, #0x48]
7101b7ab40  bl 0x710392e290
7101b7ab44  cbnz x0,0x7101b7ab8c
7101b7ab48  adrp x8,0x7105332000
7101b7ab4c  ldr x0,[x8, #0xf00]
7101b7ab50  cbz x0,0x7101b7ab88
7101b7ab54  orr w8,wzr,#0x18
7101b7ab58  str wzr,[sp, #0x60]
7101b7ab5c  add x1,sp,#0x60
7101b7ab60  stur x8,[x29, #-0x60]
7101b7ab64  ldr x8,[x0]
7101b7ab68  ldr x8,[x8, #0x30]
7101b7ab6c  sub x2,x29,#0x60
7101b7ab70  blr x8
7101b7ab74  tbz w0,#0x0,0x7101b7ab88
7101b7ab78  mov w0,#0x10
7101b7ab7c  orr w1,wzr,#0x18
7101b7ab80  bl 0x710392e290
7101b7ab84  cbnz x0,0x7101b7ab8c
7101b7ab88  mov x0,xzr
7101b7ab8c  mov x26,x20
7101b7ab90  stp xzr,xzr,[x0]
7101b7ab94  strb w23,[x0, #0x10]
7101b7ab98  mov w1,#0x20
7101b7ab9c  str x24,[x26, #0x60]!
7101b7aba0  stur x0,[x26, #-0x8]
7101b7aba4  mov w0,#0x10
7101b7aba8  str xzr,[x26, #0x8]
7101b7abac  stp xzr,xzr,[x26, #0x20]
7101b7abb0  stp xzr,xzr,[x26, #0x10]
7101b7abb4  bl 0x710392e290
7101b7abb8  cbnz x0,0x7101b7ac00
7101b7abbc  adrp x8,0x7105332000
7101b7abc0  ldr x0,[x8, #0xf00]
7101b7abc4  cbz x0,0x7101b7abfc
7101b7abc8  mov w8,#0x20
7101b7abcc  str wzr,[sp, #0x60]
7101b7abd0  add x1,sp,#0x60
7101b7abd4  stur x8,[x29, #-0x60]
7101b7abd8  ldr x8,[x0]
7101b7abdc  ldr x8,[x8, #0x30]
7101b7abe0  sub x2,x29,#0x60
7101b7abe4  blr x8
7101b7abe8  tbz w0,#0x0,0x7101b7abfc
7101b7abec  mov w0,#0x10
7101b7abf0  mov w1,#0x20
7101b7abf4  bl 0x710392e290
7101b7abf8  cbnz x0,0x7101b7ac00
7101b7abfc  mov x0,xzr
7101b7ac00  mov x8,x20
7101b7ac04  stp xzr,xzr,[x0, #0x10]
7101b7ac08  stp xzr,xzr,[x0]
7101b7ac0c  orr w1,wzr,#0x18
7101b7ac10  str x25,[x8, #0x70]!
7101b7ac14  stur x0,[x8, #-0x8]
7101b7ac18  mov w0,#0x10
7101b7ac1c  str x8,[sp, #0x40]
7101b7ac20  bl 0x710392e290
7101b7ac24  cbnz x0,0x7101b7ac6c
7101b7ac28  adrp x8,0x7105332000
7101b7ac2c  ldr x0,[x8, #0xf00]
7101b7ac30  cbz x0,0x7101b7ac68
7101b7ac34  orr w8,wzr,#0x18
7101b7ac38  str wzr,[sp, #0x60]
7101b7ac3c  add x1,sp,#0x60
7101b7ac40  stur x8,[x29, #-0x60]
7101b7ac44  ldr x8,[x0]
7101b7ac48  ldr x8,[x8, #0x30]
7101b7ac4c  sub x2,x29,#0x60
7101b7ac50  blr x8
7101b7ac54  tbz w0,#0x0,0x7101b7ac68
7101b7ac58  mov w0,#0x10
7101b7ac5c  orr w1,wzr,#0x18
7101b7ac60  bl 0x710392e290
7101b7ac64  cbnz x0,0x7101b7ac6c
7101b7ac68  mov x0,xzr
7101b7ac6c  mov w23,#0x1
7101b7ac70  mov x8,x20
7101b7ac74  orr w1,wzr,#0x18
7101b7ac78  stp xzr,xzr,[x0]
7101b7ac7c  strb w23,[x0, #0x10]
7101b7ac80  str x25,[x8, #0x80]!
7101b7ac84  stur x0,[x8, #-0x8]
7101b7ac88  mov w0,#0x10
7101b7ac8c  str x8,[sp, #0x38]
7101b7ac90  bl 0x710392e290
7101b7ac94  cbnz x0,0x7101b7acdc
7101b7ac98  adrp x8,0x7105332000
7101b7ac9c  ldr x0,[x8, #0xf00]
7101b7aca0  cbz x0,0x7101b7acd8
7101b7aca4  orr w8,wzr,#0x18
7101b7aca8  str wzr,[sp, #0x60]
7101b7acac  add x1,sp,#0x60
7101b7acb0  stur x8,[x29, #-0x60]
7101b7acb4  ldr x8,[x0]
7101b7acb8  ldr x8,[x8, #0x30]
7101b7acbc  sub x2,x29,#0x60
7101b7acc0  blr x8
7101b7acc4  tbz w0,#0x0,0x7101b7acd8
7101b7acc8  mov w0,#0x10
7101b7accc  orr w1,wzr,#0x18
7101b7acd0  bl 0x710392e290
7101b7acd4  cbnz x0,0x7101b7acdc
7101b7acd8  mov x0,xzr
7101b7acdc  mov x8,x20
7101b7ace0  stp xzr,xzr,[x0]
7101b7ace4  strb w23,[x0, #0x10]
7101b7ace8  mov w1,#0x20
7101b7acec  str x24,[x8, #0x90]!
7101b7acf0  stur x0,[x8, #-0x8]
7101b7acf4  mov w0,#0x10
7101b7acf8  str x8,[sp, #0x18]
7101b7acfc  bl 0x710392e290
7101b7ad00  cbnz x0,0x7101b7ad48
7101b7ad04  adrp x8,0x7105332000
7101b7ad08  ldr x0,[x8, #0xf00]
7101b7ad0c  cbz x0,0x7101b7ad44
7101b7ad10  mov w8,#0x20
7101b7ad14  str wzr,[sp, #0x60]
7101b7ad18  add x1,sp,#0x60
7101b7ad1c  stur x8,[x29, #-0x60]
7101b7ad20  ldr x8,[x0]
7101b7ad24  ldr x8,[x8, #0x30]
7101b7ad28  sub x2,x29,#0x60
7101b7ad2c  blr x8
7101b7ad30  tbz w0,#0x0,0x7101b7ad44
7101b7ad34  mov w0,#0x10
7101b7ad38  mov w1,#0x20
7101b7ad3c  bl 0x710392e290
7101b7ad40  cbnz x0,0x7101b7ad48
7101b7ad44  mov x0,xzr
7101b7ad48  mov x8,x20
7101b7ad4c  stp xzr,xzr,[x0, #0x10]
7101b7ad50  stp xzr,xzr,[x0]
7101b7ad54  orr w1,wzr,#0x18
7101b7ad58  str x25,[x8, #0xa0]!
7101b7ad5c  stur x0,[x8, #-0x8]
7101b7ad60  mov w0,#0x10
7101b7ad64  str x8,[sp, #0x10]
7101b7ad68  bl 0x710392e290
7101b7ad6c  cbnz x0,0x7101b7adb4
7101b7ad70  adrp x8,0x7105332000
7101b7ad74  ldr x0,[x8, #0xf00]
7101b7ad78  cbz x0,0x7101b7adb0
7101b7ad7c  orr w8,wzr,#0x18
7101b7ad80  str wzr,[sp, #0x60]
7101b7ad84  add x1,sp,#0x60
7101b7ad88  stur x8,[x29, #-0x60]
7101b7ad8c  ldr x8,[x0]
7101b7ad90  ldr x8,[x8, #0x30]
7101b7ad94  sub x2,x29,#0x60
7101b7ad98  blr x8
7101b7ad9c  tbz w0,#0x0,0x7101b7adb0
7101b7ada0  mov w0,#0x10
7101b7ada4  orr w1,wzr,#0x18
7101b7ada8  bl 0x710392e290
7101b7adac  cbnz x0,0x7101b7adb4
7101b7adb0  mov x0,xzr
7101b7adb4  mov w23,#0x1
7101b7adb8  mov x8,x20
7101b7adbc  orr w1,wzr,#0x18
7101b7adc0  stp xzr,xzr,[x0]
7101b7adc4  strb w23,[x0, #0x10]
7101b7adc8  str x25,[x8, #0xb0]!
7101b7adcc  stur x0,[x8, #-0x8]
7101b7add0  mov w0,#0x10
7101b7add4  str x8,[sp, #0x8]
7101b7add8  bl 0x710392e290
7101b7addc  cbnz x0,0x7101b7ae24
7101b7ade0  adrp x8,0x7105332000
7101b7ade4  ldr x0,[x8, #0xf00]
7101b7ade8  cbz x0,0x7101b7ae20
7101b7adec  orr w8,wzr,#0x18
7101b7adf0  str wzr,[sp, #0x60]
7101b7adf4  add x1,sp,#0x60
7101b7adf8  stur x8,[x29, #-0x60]
7101b7adfc  ldr x8,[x0]
7101b7ae00  ldr x8,[x8, #0x30]
7101b7ae04  sub x2,x29,#0x60
7101b7ae08  blr x8
7101b7ae0c  tbz w0,#0x0,0x7101b7ae20
7101b7ae10  mov w0,#0x10
7101b7ae14  orr w1,wzr,#0x18
7101b7ae18  bl 0x710392e290
7101b7ae1c  cbnz x0,0x7101b7ae24
7101b7ae20  mov x0,xzr
7101b7ae24  mov x8,x20
7101b7ae28  stp xzr,xzr,[x0]
7101b7ae2c  strb w23,[x0, #0x10]
7101b7ae30  mov w1,#0x20
7101b7ae34  str x24,[x8, #0xc0]!
7101b7ae38  stur x0,[x8, #-0x8]
7101b7ae3c  mov w0,#0x10
7101b7ae40  str x8,[sp, #0x28]
7101b7ae44  bl 0x710392e290
7101b7ae48  cbnz x0,0x7101b7ae90
7101b7ae4c  adrp x8,0x7105332000
7101b7ae50  ldr x0,[x8, #0xf00]
7101b7ae54  cbz x0,0x7101b7ae8c
7101b7ae58  mov w8,#0x20
7101b7ae5c  str wzr,[sp, #0x60]
7101b7ae60  add x1,sp,#0x60
7101b7ae64  stur x8,[x29, #-0x60]
7101b7ae68  ldr x8,[x0]
7101b7ae6c  ldr x8,[x8, #0x30]
7101b7ae70  sub x2,x29,#0x60
7101b7ae74  blr x8
7101b7ae78  tbz w0,#0x0,0x7101b7ae8c
7101b7ae7c  mov w0,#0x10
7101b7ae80  mov w1,#0x20
7101b7ae84  bl 0x710392e290
7101b7ae88  cbnz x0,0x7101b7ae90
7101b7ae8c  mov x0,xzr
7101b7ae90  mov x8,x20
7101b7ae94  stp xzr,xzr,[x0, #0x10]
7101b7ae98  stp xzr,xzr,[x0]
7101b7ae9c  orr w1,wzr,#0x18
7101b7aea0  str x25,[x8, #0xd0]!
7101b7aea4  stur x0,[x8, #-0x8]
7101b7aea8  mov w0,#0x10
7101b7aeac  str x8,[sp, #0x30]
7101b7aeb0  bl 0x710392e290
7101b7aeb4  cbnz x0,0x7101b7aefc
7101b7aeb8  adrp x8,0x7105332000
7101b7aebc  ldr x0,[x8, #0xf00]
7101b7aec0  cbz x0,0x7101b7aef8
7101b7aec4  orr w8,wzr,#0x18
7101b7aec8  str wzr,[sp, #0x60]
7101b7aecc  add x1,sp,#0x60
7101b7aed0  stur x8,[x29, #-0x60]
7101b7aed4  ldr x8,[x0]
7101b7aed8  ldr x8,[x8, #0x30]
7101b7aedc  sub x2,x29,#0x60
7101b7aee0  blr x8
7101b7aee4  tbz w0,#0x0,0x7101b7aef8
7101b7aee8  mov w0,#0x10
7101b7aeec  orr w1,wzr,#0x18
7101b7aef0  bl 0x710392e290
7101b7aef4  cbnz x0,0x7101b7aefc
7101b7aef8  mov x0,xzr
7101b7aefc  mov w23,#0x1
7101b7af00  mov x8,x20
7101b7af04  orr w1,wzr,#0x18
7101b7af08  stp xzr,xzr,[x0]
7101b7af0c  strb w23,[x0, #0x10]
7101b7af10  str x25,[x8, #0xe0]!
7101b7af14  stur x0,[x8, #-0x8]
7101b7af18  mov w0,#0x10
7101b7af1c  str x8,[sp, #0x20]
7101b7af20  bl 0x710392e290
7101b7af24  cbnz x0,0x7101b7af6c
7101b7af28  adrp x8,0x7105332000
7101b7af2c  ldr x0,[x8, #0xf00]
7101b7af30  cbz x0,0x7101b7af68
7101b7af34  orr w8,wzr,#0x18
7101b7af38  str wzr,[sp, #0x60]
7101b7af3c  add x1,sp,#0x60
7101b7af40  stur x8,[x29, #-0x60]
7101b7af44  ldr x8,[x0]
7101b7af48  ldr x8,[x8, #0x30]
7101b7af4c  sub x2,x29,#0x60
7101b7af50  blr x8
7101b7af54  tbz w0,#0x0,0x7101b7af68
7101b7af58  mov w0,#0x10
7101b7af5c  orr w1,wzr,#0x18
7101b7af60  bl 0x710392e290
7101b7af64  cbnz x0,0x7101b7af6c
7101b7af68  mov x0,xzr
7101b7af6c  mov x27,x20
7101b7af70  stp xzr,xzr,[x0]
7101b7af74  strb w23,[x0, #0x10]
7101b7af78  mov w1,#0x20
7101b7af7c  str x24,[x27, #0xf0]!
7101b7af80  stur x0,[x27, #-0x8]
7101b7af84  mov w0,#0x10
7101b7af88  bl 0x710392e290
7101b7af8c  cbnz x0,0x7101b7afd4
7101b7af90  adrp x8,0x7105332000
7101b7af94  ldr x0,[x8, #0xf00]
7101b7af98  cbz x0,0x7101b7afd0
7101b7af9c  mov w8,#0x20
7101b7afa0  str wzr,[sp, #0x60]
7101b7afa4  add x1,sp,#0x60
7101b7afa8  stur x8,[x29, #-0x60]
7101b7afac  ldr x8,[x0]
7101b7afb0  ldr x8,[x8, #0x30]
7101b7afb4  sub x2,x29,#0x60
7101b7afb8  blr x8
7101b7afbc  tbz w0,#0x0,0x7101b7afd0
7101b7afc0  mov w0,#0x10
7101b7afc4  mov w1,#0x20
7101b7afc8  bl 0x710392e290
7101b7afcc  cbnz x0,0x7101b7afd4
7101b7afd0  mov x0,xzr
7101b7afd4  stp xzr,xzr,[x0, #0x10]
7101b7afd8  orr w1,wzr,#0x18
7101b7afdc  stp xzr,xzr,[x0]
7101b7afe0  str x0,[x20, #0xf8]
7101b7afe4  mov w0,#0x10
7101b7afe8  stp xzr,xzr,[x20, #0x160]
7101b7afec  stp xzr,xzr,[x20, #0x150]
7101b7aff0  stp xzr,xzr,[x20, #0x140]
7101b7aff4  stp xzr,xzr,[x20, #0x130]
7101b7aff8  stp xzr,xzr,[x20, #0x120]
7101b7affc  stp xzr,xzr,[x20, #0x110]
7101b7b000  stp x25,xzr,[x20, #0x100]
7101b7b004  bl 0x710392e290
7101b7b008  cbnz x0,0x7101b7b050
7101b7b00c  adrp x8,0x7105332000
7101b7b010  ldr x0,[x8, #0xf00]
7101b7b014  cbz x0,0x7101b7b04c
7101b7b018  orr w8,wzr,#0x18
7101b7b01c  str wzr,[sp, #0x60]
7101b7b020  add x1,sp,#0x60
7101b7b024  stur x8,[x29, #-0x60]
7101b7b028  ldr x8,[x0]
7101b7b02c  ldr x8,[x8, #0x30]
7101b7b030  sub x2,x29,#0x60
7101b7b034  blr x8
7101b7b038  tbz w0,#0x0,0x7101b7b04c
7101b7b03c  mov w0,#0x10
7101b7b040  orr w1,wzr,#0x18
7101b7b044  bl 0x710392e290
7101b7b048  cbnz x0,0x7101b7b050
7101b7b04c  mov x0,xzr
7101b7b050  mov w23,#0x1
7101b7b054  stp xzr,xzr,[x0]
7101b7b058  strb w23,[x0, #0x10]
7101b7b05c  orr w1,wzr,#0x18
7101b7b060  stp x0,x25,[x20, #0x108]
7101b7b064  mov w0,#0x10
7101b7b068  bl 0x710392e290
7101b7b06c  cbnz x0,0x7101b7b0b4
7101b7b070  adrp x8,0x7105332000
7101b7b074  ldr x0,[x8, #0xf00]
7101b7b078  cbz x0,0x7101b7b0b0
7101b7b07c  orr w8,wzr,#0x18
7101b7b080  str wzr,[sp, #0x60]
7101b7b084  add x1,sp,#0x60
7101b7b088  stur x8,[x29, #-0x60]
7101b7b08c  ldr x8,[x0]
7101b7b090  ldr x8,[x8, #0x30]
7101b7b094  sub x2,x29,#0x60
7101b7b098  blr x8
7101b7b09c  tbz w0,#0x0,0x7101b7b0b0
7101b7b0a0  mov w0,#0x10
7101b7b0a4  orr w1,wzr,#0x18
7101b7b0a8  bl 0x710392e290
7101b7b0ac  cbnz x0,0x7101b7b0b4
7101b7b0b0  mov x0,xzr
7101b7b0b4  stp xzr,xzr,[x0]
7101b7b0b8  orr w1,wzr,#0x18
7101b7b0bc  strb w23,[x0, #0x10]
7101b7b0c0  stp x0,x25,[x20, #0x118]
7101b7b0c4  mov w0,#0x10
7101b7b0c8  bl 0x710392e290
7101b7b0cc  cbnz x0,0x7101b7b114
7101b7b0d0  adrp x8,0x7105332000
7101b7b0d4  ldr x0,[x8, #0xf00]
7101b7b0d8  cbz x0,0x7101b7b110
7101b7b0dc  orr w8,wzr,#0x18
7101b7b0e0  str wzr,[sp, #0x60]
7101b7b0e4  add x1,sp,#0x60
7101b7b0e8  stur x8,[x29, #-0x60]
7101b7b0ec  ldr x8,[x0]
7101b7b0f0  ldr x8,[x8, #0x30]
7101b7b0f4  sub x2,x29,#0x60
7101b7b0f8  blr x8
7101b7b0fc  tbz w0,#0x0,0x7101b7b110
7101b7b100  mov w0,#0x10
7101b7b104  orr w1,wzr,#0x18
7101b7b108  bl 0x710392e290
7101b7b10c  cbnz x0,0x7101b7b114
7101b7b110  mov x0,xzr
7101b7b114  mov w23,#0x1
7101b7b118  stp xzr,xzr,[x0]
7101b7b11c  strb w23,[x0, #0x10]
7101b7b120  orr w1,wzr,#0x18
7101b7b124  stp x0,x25,[x20, #0x128]
7101b7b128  mov w0,#0x10
7101b7b12c  bl 0x710392e290
7101b7b130  cbnz x0,0x7101b7b178
7101b7b134  adrp x8,0x7105332000
7101b7b138  ldr x0,[x8, #0xf00]
7101b7b13c  cbz x0,0x7101b7b174
7101b7b140  orr w8,wzr,#0x18
7101b7b144  str wzr,[sp, #0x60]
7101b7b148  add x1,sp,#0x60
7101b7b14c  stur x8,[x29, #-0x60]
7101b7b150  ldr x8,[x0]
7101b7b154  ldr x8,[x8, #0x30]
7101b7b158  sub x2,x29,#0x60
7101b7b15c  blr x8
7101b7b160  tbz w0,#0x0,0x7101b7b174
7101b7b164  mov w0,#0x10
7101b7b168  orr w1,wzr,#0x18
7101b7b16c  bl 0x710392e290
7101b7b170  cbnz x0,0x7101b7b178
7101b7b174  mov x0,xzr
7101b7b178  stp xzr,xzr,[x0]
7101b7b17c  orr w1,wzr,#0x18
7101b7b180  strb w23,[x0, #0x10]
7101b7b184  stp x0,x25,[x20, #0x138]
7101b7b188  mov w0,#0x10
7101b7b18c  bl 0x710392e290
7101b7b190  cbnz x0,0x7101b7b1d8
7101b7b194  adrp x8,0x7105332000
7101b7b198  ldr x0,[x8, #0xf00]
7101b7b19c  cbz x0,0x7101b7b1d4
7101b7b1a0  orr w8,wzr,#0x18
7101b7b1a4  str wzr,[sp, #0x60]
7101b7b1a8  add x1,sp,#0x60
7101b7b1ac  stur x8,[x29, #-0x60]
7101b7b1b0  ldr x8,[x0]
7101b7b1b4  ldr x8,[x8, #0x30]
7101b7b1b8  sub x2,x29,#0x60
7101b7b1bc  blr x8
7101b7b1c0  tbz w0,#0x0,0x7101b7b1d4
7101b7b1c4  mov w0,#0x10
7101b7b1c8  orr w1,wzr,#0x18
7101b7b1cc  bl 0x710392e290
7101b7b1d0  cbnz x0,0x7101b7b1d8
7101b7b1d4  mov x0,xzr
7101b7b1d8  mov w23,#0x1
7101b7b1dc  stp xzr,xzr,[x0]
7101b7b1e0  strb w23,[x0, #0x10]
7101b7b1e4  orr w1,wzr,#0x18
7101b7b1e8  stp x0,x25,[x20, #0x148]
7101b7b1ec  mov w0,#0x10
7101b7b1f0  bl 0x710392e290
7101b7b1f4  cbnz x0,0x7101b7b23c
7101b7b1f8  adrp x8,0x7105332000
7101b7b1fc  ldr x0,[x8, #0xf00]
7101b7b200  cbz x0,0x7101b7b238
7101b7b204  orr w8,wzr,#0x18
7101b7b208  str wzr,[sp, #0x60]
7101b7b20c  add x1,sp,#0x60
7101b7b210  stur x8,[x29, #-0x60]
7101b7b214  ldr x8,[x0]
7101b7b218  ldr x8,[x8, #0x30]
7101b7b21c  sub x2,x29,#0x60
7101b7b220  blr x8
7101b7b224  tbz w0,#0x0,0x7101b7b238
7101b7b228  mov w0,#0x10
7101b7b22c  orr w1,wzr,#0x18
7101b7b230  bl 0x710392e290
7101b7b234  cbnz x0,0x7101b7b23c
7101b7b238  mov x0,xzr
7101b7b23c  stp xzr,xzr,[x0]
7101b7b240  orr w1,wzr,#0x18
7101b7b244  strb w23,[x0, #0x10]
7101b7b248  stp x0,x25,[x20, #0x158]
7101b7b24c  mov w0,#0x10
7101b7b250  bl 0x710392e290
7101b7b254  cbnz x0,0x7101b7b29c
7101b7b258  adrp x8,0x7105332000
7101b7b25c  ldr x0,[x8, #0xf00]
7101b7b260  cbz x0,0x7101b7b298
7101b7b264  orr w8,wzr,#0x18
7101b7b268  str wzr,[sp, #0x60]
7101b7b26c  add x1,sp,#0x60
7101b7b270  stur x8,[x29, #-0x60]
7101b7b274  ldr x8,[x0]
7101b7b278  ldr x8,[x8, #0x30]
7101b7b27c  sub x2,x29,#0x60
7101b7b280  blr x8
7101b7b284  tbz w0,#0x0,0x7101b7b298
7101b7b288  mov w0,#0x10
7101b7b28c  orr w1,wzr,#0x18
7101b7b290  bl 0x710392e290
7101b7b294  cbnz x0,0x7101b7b29c
7101b7b298  mov x0,xzr
7101b7b29c  mov w8,#0x1
7101b7b2a0  stp xzr,xzr,[x0]
7101b7b2a4  strb w8,[x0, #0x10]
7101b7b2a8  mov w1,#0x20
7101b7b2ac  str x0,[x20, #0x168]
7101b7b2b0  mov w0,#0x10
7101b7b2b4  stp xzr,xzr,[x20, #0x1e0]
7101b7b2b8  stp xzr,xzr,[x20, #0x1d0]
7101b7b2bc  stp xzr,xzr,[x20, #0x1c0]
7101b7b2c0  stp xzr,xzr,[x20, #0x1b0]
7101b7b2c4  stp xzr,xzr,[x20, #0x1a0]
7101b7b2c8  stp xzr,xzr,[x20, #0x190]
7101b7b2cc  stp xzr,xzr,[x20, #0x180]
7101b7b2d0  stp x24,xzr,[x20, #0x170]
7101b7b2d4  bl 0x710392e290
7101b7b2d8  cbnz x0,0x7101b7b320
7101b7b2dc  adrp x8,0x7105332000
7101b7b2e0  ldr x0,[x8, #0xf00]
7101b7b2e4  cbz x0,0x7101b7b31c
7101b7b2e8  mov w8,#0x20
7101b7b2ec  str wzr,[sp, #0x60]
7101b7b2f0  add x1,sp,#0x60
7101b7b2f4  stur x8,[x29, #-0x60]
7101b7b2f8  ldr x8,[x0]
7101b7b2fc  ldr x8,[x8, #0x30]
7101b7b300  sub x2,x29,#0x60
7101b7b304  blr x8
7101b7b308  tbz w0,#0x0,0x7101b7b31c
7101b7b30c  mov w0,#0x10
7101b7b310  mov w1,#0x20
7101b7b314  bl 0x710392e290
7101b7b318  cbnz x0,0x7101b7b320
7101b7b31c  mov x0,xzr
7101b7b320  stp xzr,xzr,[x0, #0x10]
7101b7b324  mov w1,#0x20
7101b7b328  stp xzr,xzr,[x0]
7101b7b32c  stp x0,x24,[x20, #0x178]
7101b7b330  mov w0,#0x10
7101b7b334  bl 0x710392e290
7101b7b338  cbnz x0,0x7101b7b380
7101b7b33c  adrp x8,0x7105332000
7101b7b340  ldr x0,[x8, #0xf00]
7101b7b344  cbz x0,0x7101b7b37c
7101b7b348  mov w8,#0x20
7101b7b34c  str wzr,[sp, #0x60]
7101b7b350  add x1,sp,#0x60
7101b7b354  stur x8,[x29, #-0x60]
7101b7b358  ldr x8,[x0]
7101b7b35c  ldr x8,[x8, #0x30]
7101b7b360  sub x2,x29,#0x60
7101b7b364  blr x8
7101b7b368  tbz w0,#0x0,0x7101b7b37c
7101b7b36c  mov w0,#0x10
7101b7b370  mov w1,#0x20
7101b7b374  bl 0x710392e290
7101b7b378  cbnz x0,0x7101b7b380
7101b7b37c  mov x0,xzr
7101b7b380  stp xzr,xzr,[x0, #0x10]
7101b7b384  mov w1,#0x20
7101b7b388  stp xzr,xzr,[x0]
7101b7b38c  stp x0,x24,[x20, #0x188]
7101b7b390  mov w0,#0x10
7101b7b394  bl 0x710392e290
7101b7b398  cbnz x0,0x7101b7b3e0
7101b7b39c  adrp x8,0x7105332000
7101b7b3a0  ldr x0,[x8, #0xf00]
7101b7b3a4  cbz x0,0x7101b7b3dc
7101b7b3a8  mov w8,#0x20
7101b7b3ac  str wzr,[sp, #0x60]
7101b7b3b0  add x1,sp,#0x60
7101b7b3b4  stur x8,[x29, #-0x60]
7101b7b3b8  ldr x8,[x0]
7101b7b3bc  ldr x8,[x8, #0x30]
7101b7b3c0  sub x2,x29,#0x60
7101b7b3c4  blr x8
7101b7b3c8  tbz w0,#0x0,0x7101b7b3dc
7101b7b3cc  mov w0,#0x10
7101b7b3d0  mov w1,#0x20
7101b7b3d4  bl 0x710392e290
7101b7b3d8  cbnz x0,0x7101b7b3e0
7101b7b3dc  mov x0,xzr
7101b7b3e0  stp xzr,xzr,[x0, #0x10]
7101b7b3e4  mov w1,#0x20
7101b7b3e8  stp xzr,xzr,[x0]
7101b7b3ec  stp x0,x24,[x20, #0x198]
7101b7b3f0  mov w0,#0x10
7101b7b3f4  bl 0x710392e290
7101b7b3f8  cbnz x0,0x7101b7b440
7101b7b3fc  adrp x8,0x7105332000
7101b7b400  ldr x0,[x8, #0xf00]
7101b7b404  cbz x0,0x7101b7b43c
7101b7b408  mov w8,#0x20
7101b7b40c  str wzr,[sp, #0x60]
7101b7b410  add x1,sp,#0x60
7101b7b414  stur x8,[x29, #-0x60]
7101b7b418  ldr x8,[x0]
7101b7b41c  ldr x8,[x8, #0x30]
7101b7b420  sub x2,x29,#0x60
7101b7b424  blr x8
7101b7b428  tbz w0,#0x0,0x7101b7b43c
7101b7b42c  mov w0,#0x10
7101b7b430  mov w1,#0x20
7101b7b434  bl 0x710392e290
7101b7b438  cbnz x0,0x7101b7b440
7101b7b43c  mov x0,xzr
7101b7b440  stp xzr,xzr,[x0, #0x10]
7101b7b444  mov w1,#0x20
7101b7b448  stp xzr,xzr,[x0]
7101b7b44c  stp x0,x24,[x20, #0x1a8]
7101b7b450  mov w0,#0x10
7101b7b454  bl 0x710392e290
7101b7b458  cbnz x0,0x7101b7b4a0
7101b7b45c  adrp x8,0x7105332000
7101b7b460  ldr x0,[x8, #0xf00]
7101b7b464  cbz x0,0x7101b7b49c
7101b7b468  mov w8,#0x20
7101b7b46c  str wzr,[sp, #0x60]
7101b7b470  add x1,sp,#0x60
7101b7b474  stur x8,[x29, #-0x60]
7101b7b478  ldr x8,[x0]
7101b7b47c  ldr x8,[x8, #0x30]
7101b7b480  sub x2,x29,#0x60
7101b7b484  blr x8
7101b7b488  tbz w0,#0x0,0x7101b7b49c
7101b7b48c  mov w0,#0x10
7101b7b490  mov w1,#0x20
7101b7b494  bl 0x710392e290
7101b7b498  cbnz x0,0x7101b7b4a0
7101b7b49c  mov x0,xzr
7101b7b4a0  stp xzr,xzr,[x0, #0x10]
7101b7b4a4  mov w1,#0x20
7101b7b4a8  stp xzr,xzr,[x0]
7101b7b4ac  stp x0,x24,[x20, #0x1b8]
7101b7b4b0  mov w0,#0x10
7101b7b4b4  bl 0x710392e290
7101b7b4b8  cbnz x0,0x7101b7b500
7101b7b4bc  adrp x8,0x7105332000
7101b7b4c0  ldr x0,[x8, #0xf00]
7101b7b4c4  cbz x0,0x7101b7b4fc
7101b7b4c8  mov w8,#0x20
7101b7b4cc  str wzr,[sp, #0x60]
7101b7b4d0  add x1,sp,#0x60
7101b7b4d4  stur x8,[x29, #-0x60]
7101b7b4d8  ldr x8,[x0]
7101b7b4dc  ldr x8,[x8, #0x30]
7101b7b4e0  sub x2,x29,#0x60
7101b7b4e4  blr x8
7101b7b4e8  tbz w0,#0x0,0x7101b7b4fc
7101b7b4ec  mov w0,#0x10
7101b7b4f0  mov w1,#0x20
7101b7b4f4  bl 0x710392e290
7101b7b4f8  cbnz x0,0x7101b7b500
7101b7b4fc  mov x0,xzr
7101b7b500  stp xzr,xzr,[x0, #0x10]
7101b7b504  mov w1,#0x20
7101b7b508  stp xzr,xzr,[x0]
7101b7b50c  stp x0,x24,[x20, #0x1c8]
7101b7b510  mov w0,#0x10
7101b7b514  bl 0x710392e290
7101b7b518  cbnz x0,0x7101b7b560
7101b7b51c  adrp x8,0x7105332000
7101b7b520  ldr x0,[x8, #0xf00]
7101b7b524  cbz x0,0x7101b7b55c
7101b7b528  mov w8,#0x20
7101b7b52c  str wzr,[sp, #0x60]
7101b7b530  add x1,sp,#0x60
7101b7b534  stur x8,[x29, #-0x60]
7101b7b538  ldr x8,[x0]
7101b7b53c  ldr x8,[x8, #0x30]
7101b7b540  sub x2,x29,#0x60
7101b7b544  blr x8
7101b7b548  tbz w0,#0x0,0x7101b7b55c
7101b7b54c  mov w0,#0x10
7101b7b550  mov w1,#0x20
7101b7b554  bl 0x710392e290
7101b7b558  cbnz x0,0x7101b7b560
7101b7b55c  mov x0,xzr
7101b7b560  stp xzr,xzr,[x0, #0x10]
7101b7b564  mov w1,#0x20
7101b7b568  stp xzr,xzr,[x0]
7101b7b56c  stp x0,x24,[x20, #0x1d8]
7101b7b570  mov w0,#0x10
7101b7b574  bl 0x710392e290
7101b7b578  cbnz x0,0x7101b7b5c0
7101b7b57c  adrp x8,0x7105332000
7101b7b580  ldr x0,[x8, #0xf00]
7101b7b584  cbz x0,0x7101b7b5bc
7101b7b588  mov w8,#0x20
7101b7b58c  str wzr,[sp, #0x60]
7101b7b590  add x1,sp,#0x60
7101b7b594  stur x8,[x29, #-0x60]
7101b7b598  ldr x8,[x0]
7101b7b59c  ldr x8,[x8, #0x30]
7101b7b5a0  sub x2,x29,#0x60
7101b7b5a4  blr x8
7101b7b5a8  tbz w0,#0x0,0x7101b7b5bc
7101b7b5ac  mov w0,#0x10
7101b7b5b0  mov w1,#0x20
7101b7b5b4  bl 0x710392e290
7101b7b5b8  cbnz x0,0x7101b7b5c0
7101b7b5bc  mov x0,xzr
7101b7b5c0  stp xzr,xzr,[x0, #0x10]
7101b7b5c4  orr w1,wzr,#0x18
7101b7b5c8  stp xzr,xzr,[x0]
7101b7b5cc  stp x0,x25,[x20, #0x1e8]
7101b7b5d0  mov w0,#0x10
7101b7b5d4  bl 0x710392e290
7101b7b5d8  cbnz x0,0x7101b7b620
7101b7b5dc  adrp x8,0x7105332000
7101b7b5e0  ldr x0,[x8, #0xf00]
7101b7b5e4  cbz x0,0x7101b7b61c
7101b7b5e8  orr w8,wzr,#0x18
7101b7b5ec  str wzr,[sp, #0x60]
7101b7b5f0  add x1,sp,#0x60
7101b7b5f4  stur x8,[x29, #-0x60]
7101b7b5f8  ldr x8,[x0]
7101b7b5fc  ldr x8,[x8, #0x30]
7101b7b600  sub x2,x29,#0x60
7101b7b604  blr x8
7101b7b608  tbz w0,#0x0,0x7101b7b61c
7101b7b60c  mov w0,#0x10
7101b7b610  orr w1,wzr,#0x18
7101b7b614  bl 0x710392e290
7101b7b618  cbnz x0,0x7101b7b620
7101b7b61c  mov x0,xzr
7101b7b620  mov w8,#0x1
7101b7b624  add x23,x20,#0x200
7101b7b628  strb w8,[x0, #0x10]
7101b7b62c  stp xzr,xzr,[x0]
7101b7b630  mov w2,#0x6c80
7101b7b634  str x0,[x20, #0x1f8]
7101b7b638  mov x0,x23
7101b7b63c  mov w1,wzr
7101b7b640  bl 0x71039c02a0
7101b7b644  mov x0,x23
7101b7b648  bl 0x7101b635a0
7101b7b64c  add x0,x20,#0xf90
7101b7b650  bl 0x7101b635a0
7101b7b654  mov w8,#0x1d20
7101b7b658  add x0,x20,x8
7101b7b65c  bl 0x7101b635a0
7101b7b660  mov w8,#0x2ab0
7101b7b664  add x0,x20,x8
7101b7b668  bl 0x7101b635a0
7101b7b66c  mov w8,#0x3840
7101b7b670  add x0,x20,x8
7101b7b674  bl 0x7101b635a0
7101b7b678  mov w8,#0x45d0
7101b7b67c  add x0,x20,x8
7101b7b680  bl 0x7101b635a0
7101b7b684  mov w8,#0x5360
7101b7b688  add x0,x20,x8
7101b7b68c  bl 0x7101b635a0
7101b7b690  mov w8,#0x60f0
7101b7b694  add x0,x20,x8
7101b7b698  bl 0x7101b635a0
7101b7b69c  mov w8,#0x6e88
7101b7b6a0  str wzr,[x20, x8, LSL #0x0]
7101b7b6a4  ldr x8,[x20, #0x8]
7101b7b6a8  str xzr,[x20, #0x6e80]
7101b7b6ac  ldr x8,[x8, #0x78]
7101b7b6b0  ldr x1,[x8]
7101b7b6b4  adrp x9,0x7104544000
7101b7b6b8  add x9,x9,#0xbc0
7101b7b6bc  adrp x10,0x7104544000
7101b7b6c0  add x10,x10,#0xbb8
7101b7b6c4  tst w22,#0x1
7101b7b6c8  csel x2,x10,x9,ne
7101b7b6cc  mov x0,x21
7101b7b6d0  mov w3,wzr
7101b7b6d4  bl 0x71032cbf30
7101b7b6d8  ldr x8,[x20, #0x10]
7101b7b6dc  ldr x8,[x8]
7101b7b6e0  ldr x8,[x8]
7101b7b6e4  str wzr,[x8, #0x650]
7101b7b6e8  adrp x8,0x710532f000
7101b7b6ec  ldr x23,[x8, #0x8b8]
7101b7b6f0  ldr x8,[x20, #0x8]
7101b7b6f4  ldr x8,[x8, #0x78]
7101b7b6f8  ldr x22,[x8]
7101b7b6fc  adrp x8,0x710532f000
7101b7b700  add x8,x8,#0x4d8
7101b7b704  ldarb w8,[x8]
7101b7b708  tbz w8,#0x0,0x7101b7c2cc
7101b7b70c  ldr x10,[x22, #0x28]!
7101b7b710  cbz x10,0x7101b7b758
7101b7b714  mov x9,#0x17bf
7101b7b718  movk x9,#0xa2ef, LSL #16
7101b7b71c  movk x9,#0xf, LSL #32
7101b7b720  mov x8,x22
7101b7b724  ldr x11,[x10, #0x20]
7101b7b728  and x11,x11,#0xffffffffff
7101b7b72c  cmp x11,x9
7101b7b730  cset w11,cc
7101b7b734  csel x8,x8,x10,cc
7101b7b738  ldr x10,[x10, w11, UXTW #0x3]
7101b7b73c  cbnz x10,0x7101b7b724
7101b7b740  cmp x8,x22
7101b7b744  b.eq 0x7101b7b758
7101b7b748  ldr x10,[x8, #0x20]
7101b7b74c  and x10,x10,#0xffffffffc0
7101b7b750  cmp x10,x9
7101b7b754  b.ls 0x7101b7c2c4
7101b7b758  adrp x22,0x710532f000
7101b7b75c  add x22,x22,#0x4a4
7101b7b760  ldr w8,[x22]
7101b7b764  orr w9,wzr,#0xffffff
7101b7b768  add x28,x20,#0x1f0
7101b7b76c  cmp w8,w9
7101b7b770  b.eq 0x7101b7b7a4
7101b7b774  ldr x0,[x23, #0x8]
7101b7b778  adrp x1,0x7104544000
7101b7b77c  add x1,x1,#0xbc8
7101b7b780  orr w2,wzr,#0x3
7101b7b784  bl 0x710330a8f0
7101b7b788  cbz w0,0x7101b7b7a4
7101b7b78c  adrp x8,0x7105334000
7101b7b790  ldr x8,[x8, #0x920]
7101b7b794  mov w1,w0
7101b7b798  ldr x0,[x8]
7101b7b79c  mov x2,x22
7101b7b7a0  bl 0x7103563a20
7101b7b7a4  ldr x8,[x21]
7101b7b7a8  ldr x8,[x8]
7101b7b7ac  add x0,x8,#0x8
7101b7b7b0  adrp x1,0x710436c000
7101b7b7b4  add x1,x1,#0x84a
7101b7b7b8  sub x8,x29,#0x60
7101b7b7bc  sub x22,x29,#0x60
7101b7b7c0  bl 0x71037780e0
7101b7b7c4  cmp x22,x28
7101b7b7c8  b.eq 0x7101b7b7e4
7101b7b7cc  ldur x8,[x29, #-0x58]
7101b7b7d0  stur xzr,[x29, #-0x58]
7101b7b7d4  ldr x0,[x20, #0x1f8]
7101b7b7d8  str x8,[x20, #0x1f8]
7101b7b7dc  cbz x0,0x7101b7b7e4
7101b7b7e0  bl 0x710392eb40
7101b7b7e4  ldur x0,[x29, #-0x58]
7101b7b7e8  stp x25,xzr,[x29, #-0x60]
7101b7b7ec  cbz x0,0x7101b7b7f4
7101b7b7f0  bl 0x710392eb40
7101b7b7f4  ldr x8,[x21]
7101b7b7f8  ldr x8,[x8]
7101b7b7fc  add x0,x8,#0x8
7101b7b800  adrp x1,0x71042d5000
7101b7b804  add x1,x1,#0xfb9
7101b7b808  sub x8,x29,#0x60
7101b7b80c  sub x22,x29,#0x60
7101b7b810  bl 0x7103776910
7101b7b814  cmp x22,x27
7101b7b818  b.eq 0x7101b7b834
7101b7b81c  ldur x8,[x29, #-0x58]
7101b7b820  stur xzr,[x29, #-0x58]
7101b7b824  ldr x0,[x20, #0xf8]
7101b7b828  str x8,[x20, #0xf8]
7101b7b82c  cbz x0,0x7101b7b834
7101b7b830  bl 0x710392eb40
7101b7b834  ldur x0,[x29, #-0x58]
7101b7b838  add x22,x20,#0x100
7101b7b83c  stp x24,xzr,[x29, #-0x60]
7101b7b840  cbz x0,0x7101b7b848
7101b7b844  bl 0x710392eb40
7101b7b848  ldr x8,[x20, #0x8]
7101b7b84c  ldr x0,[x8, #0x78]
7101b7b850  adrp x1,0x7104308000
7101b7b854  add x1,x1,#0x1e9
7101b7b858  mov w2,wzr
7101b7b85c  bl 0x7103240d30
7101b7b860  mov x1,x0
7101b7b864  ldr x0,[x20, #0xf8]
7101b7b868  bl 0x7103778b80
7101b7b86c  ldr x8,[x20, #0x10]
7101b7b870  ldr x8,[x8]
7101b7b874  add x0,x8,#0x8
7101b7b878  adrp x1,0x710424f000
7101b7b87c  add x1,x1,#0x1b0
7101b7b880  sub x8,x29,#0x60
7101b7b884  sub x23,x29,#0x60
7101b7b888  bl 0x71037780e0
7101b7b88c  cmp x23,x22
7101b7b890  b.eq 0x7101b7b8ac
7101b7b894  ldur x8,[x29, #-0x58]
7101b7b898  stur xzr,[x29, #-0x58]
7101b7b89c  ldr x0,[x20, #0x108]
7101b7b8a0  str x8,[x20, #0x108]
7101b7b8a4  cbz x0,0x7101b7b8ac
7101b7b8a8  bl 0x710392eb40
7101b7b8ac  ldur x0,[x29, #-0x58]
7101b7b8b0  add x22,x20,#0x110
7101b7b8b4  stp x25,xzr,[x29, #-0x60]
7101b7b8b8  cbz x0,0x7101b7b8c0
7101b7b8bc  bl 0x710392eb40
7101b7b8c0  ldr x8,[x21]
7101b7b8c4  ldr x8,[x8]
7101b7b8c8  add x0,x8,#0x8
7101b7b8cc  adrp x1,0x710434a000
7101b7b8d0  add x1,x1,#0x3f
7101b7b8d4  sub x8,x29,#0x60
7101b7b8d8  sub x23,x29,#0x60
7101b7b8dc  bl 0x71037780e0
7101b7b8e0  cmp x23,x22
7101b7b8e4  b.eq 0x7101b7b900
7101b7b8e8  ldur x8,[x29, #-0x58]
7101b7b8ec  stur xzr,[x29, #-0x58]
7101b7b8f0  ldr x0,[x20, #0x118]
7101b7b8f4  str x8,[x20, #0x118]
7101b7b8f8  cbz x0,0x7101b7b900
7101b7b8fc  bl 0x710392eb40
7101b7b900  ldur x0,[x29, #-0x58]
7101b7b904  add x22,x20,#0x120
7101b7b908  stp x25,xzr,[x29, #-0x60]
7101b7b90c  cbz x0,0x7101b7b914
7101b7b910  bl 0x710392eb40
7101b7b914  ldr x8,[x21]
7101b7b918  ldr x8,[x8]
7101b7b91c  add x0,x8,#0x8
7101b7b920  adrp x1,0x71043cf000
7101b7b924  add x1,x1,#0x134
7101b7b928  sub x8,x29,#0x60
7101b7b92c  sub x23,x29,#0x60
7101b7b930  bl 0x71037780e0
7101b7b934  cmp x23,x22
7101b7b938  b.eq 0x7101b7b954
7101b7b93c  ldur x8,[x29, #-0x58]
7101b7b940  stur xzr,[x29, #-0x58]
7101b7b944  ldr x0,[x20, #0x128]
7101b7b948  str x8,[x20, #0x128]
7101b7b94c  cbz x0,0x7101b7b954
7101b7b950  bl 0x710392eb40
7101b7b954  ldur x0,[x29, #-0x58]
7101b7b958  add x22,x20,#0x130
7101b7b95c  stp x25,xzr,[x29, #-0x60]
7101b7b960  cbz x0,0x7101b7b968
7101b7b964  bl 0x710392eb40
7101b7b968  ldr x8,[x21]
7101b7b96c  ldr x8,[x8]
7101b7b970  add x0,x8,#0x8
7101b7b974  adrp x1,0x71043ad000
7101b7b978  add x1,x1,#0x499
7101b7b97c  sub x8,x29,#0x60
7101b7b980  sub x23,x29,#0x60
7101b7b984  bl 0x71037780e0
7101b7b988  cmp x23,x22
7101b7b98c  b.eq 0x7101b7b9a8
7101b7b990  ldur x8,[x29, #-0x58]
7101b7b994  stur xzr,[x29, #-0x58]
7101b7b998  ldr x0,[x20, #0x138]
7101b7b99c  str x8,[x20, #0x138]
7101b7b9a0  cbz x0,0x7101b7b9a8
7101b7b9a4  bl 0x710392eb40
7101b7b9a8  ldur x0,[x29, #-0x58]
7101b7b9ac  add x22,x20,#0x140
7101b7b9b0  stp x25,xzr,[x29, #-0x60]
7101b7b9b4  cbz x0,0x7101b7b9bc
7101b7b9b8  bl 0x710392eb40
7101b7b9bc  ldr x8,[x21]
7101b7b9c0  ldr x8,[x8]
7101b7b9c4  add x0,x8,#0x8
7101b7b9c8  adrp x1,0x710425f000
7101b7b9cc  add x1,x1,#0x7e
7101b7b9d0  sub x8,x29,#0x60
7101b7b9d4  sub x23,x29,#0x60
7101b7b9d8  bl 0x71037780e0
7101b7b9dc  cmp x23,x22
7101b7b9e0  b.eq 0x7101b7b9fc
7101b7b9e4  ldur x8,[x29, #-0x58]
7101b7b9e8  stur xzr,[x29, #-0x58]
7101b7b9ec  ldr x0,[x20, #0x148]
7101b7b9f0  str x8,[x20, #0x148]
7101b7b9f4  cbz x0,0x7101b7b9fc
7101b7b9f8  bl 0x710392eb40
7101b7b9fc  ldur x0,[x29, #-0x58]
7101b7ba00  add x22,x20,#0x150
7101b7ba04  stp x25,xzr,[x29, #-0x60]
7101b7ba08  cbz x0,0x7101b7ba10
7101b7ba0c  bl 0x710392eb40
7101b7ba10  ldr x8,[x21]
7101b7ba14  ldr x8,[x8]
7101b7ba18  add x0,x8,#0x8
7101b7ba1c  adrp x1,0x710434a000
7101b7ba20  add x1,x1,#0x4b
7101b7ba24  sub x8,x29,#0x60
7101b7ba28  sub x23,x29,#0x60
7101b7ba2c  bl 0x71037780e0
7101b7ba30  cmp x23,x22
7101b7ba34  b.eq 0x7101b7ba50
7101b7ba38  ldur x8,[x29, #-0x58]
7101b7ba3c  stur xzr,[x29, #-0x58]
7101b7ba40  ldr x0,[x20, #0x158]
7101b7ba44  str x8,[x20, #0x158]
7101b7ba48  cbz x0,0x7101b7ba50
7101b7ba4c  bl 0x710392eb40
7101b7ba50  ldur x0,[x29, #-0x58]
7101b7ba54  add x22,x20,#0x160
7101b7ba58  stp x25,xzr,[x29, #-0x60]
7101b7ba5c  cbz x0,0x7101b7ba64
7101b7ba60  bl 0x710392eb40
7101b7ba64  ldr x8,[x21]
7101b7ba68  ldr x8,[x8]
7101b7ba6c  add x0,x8,#0x8
7101b7ba70  adrp x1,0x7104339000
7101b7ba74  add x1,x1,#0xee3
7101b7ba78  sub x8,x29,#0x60
7101b7ba7c  sub x23,x29,#0x60
7101b7ba80  bl 0x71037780e0
7101b7ba84  cmp x23,x22
7101b7ba88  b.eq 0x7101b7baa4
7101b7ba8c  ldur x8,[x29, #-0x58]
7101b7ba90  stur xzr,[x29, #-0x58]
7101b7ba94  ldr x0,[x20, #0x168]
7101b7ba98  str x8,[x20, #0x168]
7101b7ba9c  cbz x0,0x7101b7baa4
7101b7baa0  bl 0x710392eb40
7101b7baa4  ldur x0,[x29, #-0x58]
7101b7baa8  stp x25,xzr,[x29, #-0x60]
7101b7baac  cbz x0,0x7101b7bab4
7101b7bab0  bl 0x710392eb40
7101b7bab4  ldr x8,[x21]
7101b7bab8  ldr x8,[x8]
7101b7babc  add x0,x8,#0x8
7101b7bac0  adrp x1,0x710426f000
7101b7bac4  add x1,x1,#0xcfe
7101b7bac8  add x8,sp,#0x60
7101b7bacc  bl 0x7103776640
7101b7bad0  adrp x1,0x7104401000
7101b7bad4  add x1,x1,#0x119
7101b7bad8  sub x8,x29,#0x60
7101b7badc  add x0,sp,#0x60
7101b7bae0  sub x22,x29,#0x60
7101b7bae4  bl 0x7103776910
7101b7bae8  ldr x8,[sp, #0x18]
7101b7baec  cmp x22,x8
7101b7baf0  b.eq 0x7101b7bb0c
7101b7baf4  ldur x8,[x29, #-0x58]
7101b7baf8  stur xzr,[x29, #-0x58]
7101b7bafc  ldr x0,[x20, #0x98]
7101b7bb00  str x8,[x20, #0x98]
7101b7bb04  cbz x0,0x7101b7bb0c
7101b7bb08  bl 0x710392eb40
7101b7bb0c  ldur x0,[x29, #-0x58]
7101b7bb10  stp x24,xzr,[x29, #-0x60]
7101b7bb14  cbz x0,0x7101b7bb1c
7101b7bb18  bl 0x710392eb40
7101b7bb1c  ldr x8,[x21]
7101b7bb20  ldr x8,[x8]
7101b7bb24  add x0,x8,#0x8
7101b7bb28  adrp x1,0x710425f000
7101b7bb2c  add x1,x1,#0x8a
7101b7bb30  sub x8,x29,#0x60
7101b7bb34  sub x22,x29,#0x60
7101b7bb38  bl 0x71037780e0
7101b7bb3c  ldr x8,[sp, #0x10]
7101b7bb40  cmp x22,x8
7101b7bb44  b.eq 0x7101b7bb60
7101b7bb48  ldur x8,[x29, #-0x58]
7101b7bb4c  stur xzr,[x29, #-0x58]
7101b7bb50  ldr x0,[x20, #0xa8]
7101b7bb54  str x8,[x20, #0xa8]
7101b7bb58  cbz x0,0x7101b7bb60
7101b7bb5c  bl 0x710392eb40
7101b7bb60  ldur x0,[x29, #-0x58]
7101b7bb64  stp x25,xzr,[x29, #-0x60]
7101b7bb68  cbz x0,0x7101b7bb70
7101b7bb6c  bl 0x710392eb40
7101b7bb70  ldr x8,[x21]
7101b7bb74  ldr x8,[x8]
7101b7bb78  add x0,x8,#0x8
7101b7bb7c  adrp x1,0x71042b4000
7101b7bb80  add x1,x1,#0x90
7101b7bb84  sub x8,x29,#0x60
7101b7bb88  sub x22,x29,#0x60
7101b7bb8c  bl 0x71037780e0
7101b7bb90  ldr x8,[sp, #0x8]
7101b7bb94  cmp x22,x8
7101b7bb98  b.eq 0x7101b7bbb4
7101b7bb9c  ldur x8,[x29, #-0x58]
7101b7bba0  stur xzr,[x29, #-0x58]
7101b7bba4  ldr x0,[x20, #0xb8]
7101b7bba8  str x8,[x20, #0xb8]
7101b7bbac  cbz x0,0x7101b7bbb4
7101b7bbb0  bl 0x710392eb40
7101b7bbb4  ldur x0,[x29, #-0x58]
7101b7bbb8  stp x25,xzr,[x29, #-0x60]
7101b7bbbc  cbz x0,0x7101b7bbc4
7101b7bbc0  bl 0x710392eb40
7101b7bbc4  ldr x22,[sp, #0x68]
7101b7bbc8  adrp x23,0x710523d000
7101b7bbcc  add x23,x23,#0x988
7101b7bbd0  stp x23,xzr,[sp, #0x60]
7101b7bbd4  cbz x22,0x7101b7bbf0
7101b7bbd8  ldr x0,[x22, #0x18]
7101b7bbdc  stp x24,xzr,[x22, #0x10]
7101b7bbe0  cbz x0,0x7101b7bbe8
7101b7bbe4  bl 0x710392eb40
7101b7bbe8  mov x0,x22
7101b7bbec  bl 0x710392eb40
7101b7bbf0  ldr x8,[x21]
7101b7bbf4  ldr x8,[x8]
7101b7bbf8  add x0,x8,#0x8
7101b7bbfc  adrp x1,0x71042d6000
7101b7bc00  add x1,x1,#0xa7f
7101b7bc04  sub x8,x29,#0x60
7101b7bc08  sub x22,x29,#0x60
7101b7bc0c  bl 0x7103776910
7101b7bc10  ldr x8,[sp, #0x58]
7101b7bc14  cmp x22,x8
7101b7bc18  b.eq 0x7101b7bc34
7101b7bc1c  ldur x8,[x29, #-0x58]
7101b7bc20  stur xzr,[x29, #-0x58]
7101b7bc24  ldr x0,[x20, #0x38]
7101b7bc28  str x8,[x20, #0x38]
7101b7bc2c  cbz x0,0x7101b7bc34
7101b7bc30  bl 0x710392eb40
7101b7bc34  ldur x0,[x29, #-0x58]
7101b7bc38  stp x24,xzr,[x29, #-0x60]
7101b7bc3c  cbz x0,0x7101b7bc44
7101b7bc40  bl 0x710392eb40
7101b7bc44  ldr x8,[x21]
7101b7bc48  ldr x8,[x8]
7101b7bc4c  add x0,x8,#0x8
7101b7bc50  adrp x1,0x710434a000
7101b7bc54  add x1,x1,#0x57
7101b7bc58  sub x8,x29,#0x60
7101b7bc5c  sub x22,x29,#0x60
7101b7bc60  bl 0x71037780e0
7101b7bc64  ldr x8,[sp, #0x50]
7101b7bc68  cmp x22,x8
7101b7bc6c  b.eq 0x7101b7bc88
7101b7bc70  ldur x8,[x29, #-0x58]
7101b7bc74  stur xzr,[x29, #-0x58]
7101b7bc78  ldr x0,[x20, #0x48]
7101b7bc7c  str x8,[x20, #0x48]
7101b7bc80  cbz x0,0x7101b7bc88
7101b7bc84  bl 0x710392eb40
7101b7bc88  ldur x0,[x29, #-0x58]
7101b7bc8c  stp x25,xzr,[x29, #-0x60]
7101b7bc90  cbz x0,0x7101b7bc98
7101b7bc94  bl 0x710392eb40
7101b7bc98  ldr x8,[x21]
7101b7bc9c  ldr x8,[x8]
7101b7bca0  add x0,x8,#0x8
7101b7bca4  adrp x1,0x7104443000
7101b7bca8  add x1,x1,#0x34c
7101b7bcac  sub x8,x29,#0x60
7101b7bcb0  sub x22,x29,#0x60
7101b7bcb4  bl 0x71037780e0
7101b7bcb8  ldr x8,[sp, #0x48]
7101b7bcbc  cmp x22,x8
7101b7bcc0  b.eq 0x7101b7bcdc
7101b7bcc4  ldur x8,[x29, #-0x58]
7101b7bcc8  stur xzr,[x29, #-0x58]
7101b7bccc  ldr x0,[x20, #0x58]
7101b7bcd0  str x8,[x20, #0x58]
7101b7bcd4  cbz x0,0x7101b7bcdc
7101b7bcd8  bl 0x710392eb40
7101b7bcdc  ldur x0,[x29, #-0x58]
7101b7bce0  stp x25,xzr,[x29, #-0x60]
7101b7bce4  cbz x0,0x7101b7bcec
7101b7bce8  bl 0x710392eb40
7101b7bcec  ldr x8,[x21]
7101b7bcf0  ldr x8,[x8]
7101b7bcf4  add x0,x8,#0x8
7101b7bcf8  adrp x1,0x7104401000
7101b7bcfc  add x1,x1,#0x127
7101b7bd00  sub x8,x29,#0x60
7101b7bd04  sub x22,x29,#0x60
7101b7bd08  bl 0x7103776910
7101b7bd0c  cmp x22,x26
7101b7bd10  b.eq 0x7101b7bd2c
7101b7bd14  ldur x8,[x29, #-0x58]
7101b7bd18  stur xzr,[x29, #-0x58]
7101b7bd1c  ldr x0,[x20, #0x68]
7101b7bd20  str x8,[x20, #0x68]
7101b7bd24  cbz x0,0x7101b7bd2c
7101b7bd28  bl 0x710392eb40
7101b7bd2c  ldur x0,[x29, #-0x58]
7101b7bd30  stp x24,xzr,[x29, #-0x60]
7101b7bd34  cbz x0,0x7101b7bd3c
7101b7bd38  bl 0x710392eb40
7101b7bd3c  ldr x8,[x21]
7101b7bd40  ldr x8,[x8]
7101b7bd44  add x0,x8,#0x8
7101b7bd48  adrp x1,0x71042a2000
7101b7bd4c  add x1,x1,#0xccd
7101b7bd50  sub x8,x29,#0x60
7101b7bd54  sub x22,x29,#0x60
7101b7bd58  bl 0x71037780e0
7101b7bd5c  ldr x8,[sp, #0x40]
7101b7bd60  cmp x22,x8
7101b7bd64  b.eq 0x7101b7bd80
7101b7bd68  ldur x8,[x29, #-0x58]
7101b7bd6c  stur xzr,[x29, #-0x58]
7101b7bd70  ldr x0,[x20, #0x78]
7101b7bd74  str x8,[x20, #0x78]
7101b7bd78  cbz x0,0x7101b7bd80
7101b7bd7c  bl 0x710392eb40
7101b7bd80  ldur x0,[x29, #-0x58]
7101b7bd84  stp x25,xzr,[x29, #-0x60]
7101b7bd88  cbz x0,0x7101b7bd90
7101b7bd8c  bl 0x710392eb40
7101b7bd90  ldr x8,[x21]
7101b7bd94  ldr x8,[x8]
7101b7bd98  add x0,x8,#0x8
7101b7bd9c  adrp x1,0x71042a2000
7101b7bda0  add x1,x1,#0xcde
7101b7bda4  sub x8,x29,#0x60
7101b7bda8  sub x22,x29,#0x60
7101b7bdac  bl 0x71037780e0
7101b7bdb0  ldr x8,[sp, #0x38]
7101b7bdb4  cmp x22,x8
7101b7bdb8  b.eq 0x7101b7bdd4
7101b7bdbc  ldur x8,[x29, #-0x58]
7101b7bdc0  stur xzr,[x29, #-0x58]
7101b7bdc4  ldr x0,[x20, #0x88]
7101b7bdc8  str x8,[x20, #0x88]
7101b7bdcc  cbz x0,0x7101b7bdd4
7101b7bdd0  bl 0x710392eb40
7101b7bdd4  ldur x0,[x29, #-0x58]
7101b7bdd8  stp x25,xzr,[x29, #-0x60]
7101b7bddc  cbz x0,0x7101b7bde4
7101b7bde0  bl 0x710392eb40
7101b7bde4  ldr x8,[x21]
7101b7bde8  ldr x8,[x8]
7101b7bdec  add x0,x8,#0x8
7101b7bdf0  adrp x1,0x710438c000
7101b7bdf4  add x1,x1,#0x6a3
7101b7bdf8  add x8,sp,#0x60
7101b7bdfc  bl 0x7103776640
7101b7be00  adrp x1,0x71043ad000
7101b7be04  add x1,x1,#0x4a5
7101b7be08  sub x8,x29,#0x60
7101b7be0c  add x0,sp,#0x60
7101b7be10  sub x22,x29,#0x60
7101b7be14  bl 0x7103776910
7101b7be18  ldr x8,[sp, #0x28]
7101b7be1c  cmp x22,x8
7101b7be20  b.eq 0x7101b7be3c
7101b7be24  ldur x8,[x29, #-0x58]
7101b7be28  stur xzr,[x29, #-0x58]
7101b7be2c  ldr x0,[x20, #0xc8]
7101b7be30  str x8,[x20, #0xc8]
7101b7be34  cbz x0,0x7101b7be3c
7101b7be38  bl 0x710392eb40
7101b7be3c  ldur x0,[x29, #-0x58]
7101b7be40  stp x24,xzr,[x29, #-0x60]
7101b7be44  cbz x0,0x7101b7be4c
7101b7be48  bl 0x710392eb40
7101b7be4c  ldr x8,[x21]
7101b7be50  ldr x8,[x8]
7101b7be54  add x0,x8,#0x8
7101b7be58  adrp x1,0x7104329000
7101b7be5c  add x1,x1,#0xcae
7101b7be60  sub x8,x29,#0x60
7101b7be64  sub x22,x29,#0x60
7101b7be68  bl 0x71037780e0
7101b7be6c  ldr x8,[sp, #0x20]
7101b7be70  cmp x22,x8
7101b7be74  b.eq 0x7101b7be90
7101b7be78  ldur x8,[x29, #-0x58]
7101b7be7c  stur xzr,[x29, #-0x58]
7101b7be80  ldr x0,[x20, #0xe8]
7101b7be84  str x8,[x20, #0xe8]
7101b7be88  cbz x0,0x7101b7be90
7101b7be8c  bl 0x710392eb40
7101b7be90  ldur x0,[x29, #-0x58]
7101b7be94  stp x25,xzr,[x29, #-0x60]
7101b7be98  cbz x0,0x7101b7bea0
7101b7be9c  bl 0x710392eb40
7101b7bea0  adrp x1,0x710434a000
7101b7bea4  add x1,x1,#0x6c2
7101b7bea8  sub x8,x29,#0x60
7101b7beac  add x0,sp,#0x60
7101b7beb0  sub x22,x29,#0x60
7101b7beb4  bl 0x71037780e0
7101b7beb8  ldr x8,[sp, #0x30]
7101b7bebc  cmp x22,x8
7101b7bec0  b.eq 0x7101b7bedc
7101b7bec4  ldur x8,[x29, #-0x58]
7101b7bec8  stur xzr,[x29, #-0x58]
7101b7becc  ldr x0,[x20, #0xd8]
7101b7bed0  str x8,[x20, #0xd8]
7101b7bed4  cbz x0,0x7101b7bedc
7101b7bed8  bl 0x710392eb40
7101b7bedc  ldur x0,[x29, #-0x58]
7101b7bee0  stp x25,xzr,[x29, #-0x60]
7101b7bee4  cbz x0,0x7101b7beec
7101b7bee8  bl 0x710392eb40
7101b7beec  ldr x22,[sp, #0x68]
7101b7bef0  add x25,x20,#0x170
7101b7bef4  stp x23,xzr,[sp, #0x60]
7101b7bef8  cbz x22,0x7101b7bf14
7101b7befc  ldr x0,[x22, #0x18]
7101b7bf00  stp x24,xzr,[x22, #0x10]
7101b7bf04  cbz x0,0x7101b7bf0c
7101b7bf08  bl 0x710392eb40
7101b7bf0c  mov x0,x22
7101b7bf10  bl 0x710392eb40
7101b7bf14  ldr x8,[x21]
7101b7bf18  ldr x8,[x8]
7101b7bf1c  add x0,x8,#0x8
7101b7bf20  adrp x1,0x710425f000
7101b7bf24  add x1,x1,#0x96
7101b7bf28  sub x8,x29,#0x60
7101b7bf2c  mov w2,#0x1
7101b7bf30  sub x22,x29,#0x60
7101b7bf34  bl 0x7103776910
7101b7bf38  cmp x22,x25
7101b7bf3c  b.eq 0x7101b7bf58
7101b7bf40  ldur x8,[x29, #-0x58]
7101b7bf44  stur xzr,[x29, #-0x58]
7101b7bf48  ldr x0,[x20, #0x178]
7101b7bf4c  str x8,[x20, #0x178]
7101b7bf50  cbz x0,0x7101b7bf58
7101b7bf54  bl 0x710392eb40
7101b7bf58  ldur x0,[x29, #-0x58]
7101b7bf5c  stp x24,xzr,[x29, #-0x60]
7101b7bf60  cbz x0,0x7101b7bf68
7101b7bf64  bl 0x710392eb40
7101b7bf68  ldr x8,[x20, #0x178]
7101b7bf6c  ldr x8,[x8]
7101b7bf70  add x22,x20,#0x180
7101b7bf74  cbz x8,0x7101b7bf84
7101b7bf78  ldrb w9,[x8, #0x58]
7101b7bf7c  and w9,w9,#0xfe
7101b7bf80  strb w9,[x8, #0x58]
7101b7bf84  ldr x8,[x21]
7101b7bf88  ldr x8,[x8]
7101b7bf8c  add x0,x8,#0x8
7101b7bf90  adrp x1,0x710425f000
7101b7bf94  add x1,x1,#0x96
7101b7bf98  sub x8,x29,#0x60
7101b7bf9c  mov w2,#0x2
7101b7bfa0  sub x23,x29,#0x60
7101b7bfa4  bl 0x7103776910
7101b7bfa8  cmp x23,x22
7101b7bfac  b.eq 0x7101b7bfc8
7101b7bfb0  ldur x8,[x29, #-0x58]
7101b7bfb4  stur xzr,[x29, #-0x58]
7101b7bfb8  ldr x0,[x20, #0x188]
7101b7bfbc  str x8,[x20, #0x188]
7101b7bfc0  cbz x0,0x7101b7bfc8
7101b7bfc4  bl 0x710392eb40
7101b7bfc8  ldur x0,[x29, #-0x58]
7101b7bfcc  stp x24,xzr,[x29, #-0x60]
7101b7bfd0  cbz x0,0x7101b7bfd8
7101b7bfd4  bl 0x710392eb40
7101b7bfd8  ldr x8,[x20, #0x188]
7101b7bfdc  ldr x8,[x8]
7101b7bfe0  add x22,x20,#0x190
7101b7bfe4  cbz x8,0x7101b7bff4
7101b7bfe8  ldrb w9,[x8, #0x58]
7101b7bfec  and w9,w9,#0xfe
7101b7bff0  strb w9,[x8, #0x58]
7101b7bff4  ldr x8,[x21]
7101b7bff8  ldr x8,[x8]
7101b7bffc  add x0,x8,#0x8
7101b7c000  adrp x1,0x710425f000
7101b7c004  add x1,x1,#0x96
7101b7c008  sub x8,x29,#0x60
7101b7c00c  orr w2,wzr,#0x3
7101b7c010  sub x23,x29,#0x60
7101b7c014  bl 0x7103776910
7101b7c018  cmp x23,x22
7101b7c01c  b.eq 0x7101b7c038
7101b7c020  ldur x8,[x29, #-0x58]
7101b7c024  stur xzr,[x29, #-0x58]
7101b7c028  ldr x0,[x20, #0x198]
7101b7c02c  str x8,[x20, #0x198]
7101b7c030  cbz x0,0x7101b7c038
7101b7c034  bl 0x710392eb40
7101b7c038  ldur x0,[x29, #-0x58]
7101b7c03c  stp x24,xzr,[x29, #-0x60]
7101b7c040  cbz x0,0x7101b7c048
7101b7c044  bl 0x710392eb40
7101b7c048  ldr x8,[x20, #0x198]
7101b7c04c  ldr x8,[x8]
7101b7c050  add x22,x20,#0x1a0
7101b7c054  cbz x8,0x7101b7c064
7101b7c058  ldrb w9,[x8, #0x58]
7101b7c05c  and w9,w9,#0xfe
7101b7c060  strb w9,[x8, #0x58]
7101b7c064  ldr x8,[x21]
7101b7c068  ldr x8,[x8]
7101b7c06c  add x0,x8,#0x8
7101b7c070  adrp x1,0x710425f000
7101b7c074  add x1,x1,#0x96
7101b7c078  sub x8,x29,#0x60
7101b7c07c  mov w2,#0x4
7101b7c080  sub x23,x29,#0x60
7101b7c084  bl 0x7103776910
7101b7c088  cmp x23,x22
7101b7c08c  b.eq 0x7101b7c0a8
7101b7c090  ldur x8,[x29, #-0x58]
7101b7c094  stur xzr,[x29, #-0x58]
7101b7c098  ldr x0,[x20, #0x1a8]
7101b7c09c  str x8,[x20, #0x1a8]
7101b7c0a0  cbz x0,0x7101b7c0a8
7101b7c0a4  bl 0x710392eb40
7101b7c0a8  ldur x0,[x29, #-0x58]
7101b7c0ac  stp x24,xzr,[x29, #-0x60]
7101b7c0b0  cbz x0,0x7101b7c0b8
7101b7c0b4  bl 0x710392eb40
7101b7c0b8  ldr x8,[x20, #0x1a8]
7101b7c0bc  ldr x8,[x8]
7101b7c0c0  add x22,x20,#0x1b0
7101b7c0c4  cbz x8,0x7101b7c0d4
7101b7c0c8  ldrb w9,[x8, #0x58]
7101b7c0cc  and w9,w9,#0xfe
7101b7c0d0  strb w9,[x8, #0x58]
7101b7c0d4  ldr x8,[x21]
7101b7c0d8  ldr x8,[x8]
7101b7c0dc  add x0,x8,#0x8
7101b7c0e0  adrp x1,0x710425f000
7101b7c0e4  add x1,x1,#0x96
7101b7c0e8  mov w2,#0x5
7101b7c0ec  sub x8,x29,#0x60
7101b7c0f0  sub x23,x29,#0x60
7101b7c0f4  bl 0x7103776910
7101b7c0f8  cmp x23,x22
7101b7c0fc  b.eq 0x7101b7c118
7101b7c100  ldur x8,[x29, #-0x58]
7101b7c104  stur xzr,[x29, #-0x58]
7101b7c108  ldr x0,[x20, #0x1b8]
7101b7c10c  str x8,[x20, #0x1b8]
7101b7c110  cbz x0,0x7101b7c118
7101b7c114  bl 0x710392eb40
7101b7c118  ldur x0,[x29, #-0x58]
7101b7c11c  stp x24,xzr,[x29, #-0x60]
7101b7c120  cbz x0,0x7101b7c128
7101b7c124  bl 0x710392eb40
7101b7c128  ldr x8,[x20, #0x1b8]
7101b7c12c  ldr x8,[x8]
7101b7c130  add x22,x20,#0x1c0
7101b7c134  cbz x8,0x7101b7c144
7101b7c138  ldrb w9,[x8, #0x58]
7101b7c13c  and w9,w9,#0xfe
7101b7c140  strb w9,[x8, #0x58]
7101b7c144  ldr x8,[x21]
7101b7c148  ldr x8,[x8]
7101b7c14c  add x0,x8,#0x8
7101b7c150  adrp x1,0x710425f000
7101b7c154  add x1,x1,#0x96
7101b7c158  sub x8,x29,#0x60
7101b7c15c  orr w2,wzr,#0x6
7101b7c160  sub x23,x29,#0x60
7101b7c164  bl 0x7103776910
7101b7c168  cmp x23,x22
7101b7c16c  b.eq 0x7101b7c188
7101b7c170  ldur x8,[x29, #-0x58]
7101b7c174  stur xzr,[x29, #-0x58]
7101b7c178  ldr x0,[x20, #0x1c8]
7101b7c17c  str x8,[x20, #0x1c8]
7101b7c180  cbz x0,0x7101b7c188
7101b7c184  bl 0x710392eb40
7101b7c188  ldur x0,[x29, #-0x58]
7101b7c18c  stp x24,xzr,[x29, #-0x60]
7101b7c190  cbz x0,0x7101b7c198
7101b7c194  bl 0x710392eb40
7101b7c198  ldr x8,[x20, #0x1c8]
7101b7c19c  ldr x8,[x8]
7101b7c1a0  add x22,x20,#0x1d0
7101b7c1a4  cbz x8,0x7101b7c1b4
7101b7c1a8  ldrb w9,[x8, #0x58]
7101b7c1ac  and w9,w9,#0xfe
7101b7c1b0  strb w9,[x8, #0x58]
7101b7c1b4  ldr x8,[x21]
7101b7c1b8  ldr x8,[x8]
7101b7c1bc  add x0,x8,#0x8
7101b7c1c0  adrp x1,0x710425f000
7101b7c1c4  add x1,x1,#0x96
7101b7c1c8  sub x8,x29,#0x60
7101b7c1cc  orr w2,wzr,#0x7
7101b7c1d0  sub x23,x29,#0x60
7101b7c1d4  bl 0x7103776910
7101b7c1d8  cmp x23,x22
7101b7c1dc  b.eq 0x7101b7c1f8
7101b7c1e0  ldur x8,[x29, #-0x58]
7101b7c1e4  stur xzr,[x29, #-0x58]
7101b7c1e8  ldr x0,[x20, #0x1d8]
7101b7c1ec  str x8,[x20, #0x1d8]
7101b7c1f0  cbz x0,0x7101b7c1f8
7101b7c1f4  bl 0x710392eb40
7101b7c1f8  ldur x0,[x29, #-0x58]
7101b7c1fc  stp x24,xzr,[x29, #-0x60]
7101b7c200  cbz x0,0x7101b7c208
7101b7c204  bl 0x710392eb40
7101b7c208  ldr x8,[x20, #0x1d8]
7101b7c20c  ldr x8,[x8]
7101b7c210  add x22,x20,#0x1e0
7101b7c214  cbz x8,0x7101b7c224
7101b7c218  ldrb w9,[x8, #0x58]
7101b7c21c  and w9,w9,#0xfe
7101b7c220  strb w9,[x8, #0x58]
7101b7c224  ldr x8,[x21]
7101b7c228  sub x21,x29,#0x60
7101b7c22c  ldr x8,[x8]
7101b7c230  add x0,x8,#0x8
7101b7c234  adrp x1,0x710425f000
7101b7c238  add x1,x1,#0x96
7101b7c23c  sub x8,x29,#0x60
7101b7c240  mov w2,#0x8
7101b7c244  bl 0x7103776910
7101b7c248  cmp x21,x22
7101b7c24c  b.eq 0x7101b7c268
7101b7c250  ldur x8,[x29, #-0x58]
7101b7c254  stur xzr,[x29, #-0x58]
7101b7c258  ldr x0,[x20, #0x1e8]
7101b7c25c  str x8,[x20, #0x1e8]
7101b7c260  cbz x0,0x7101b7c268
7101b7c264  bl 0x710392eb40
7101b7c268  ldur x0,[x29, #-0x58]
7101b7c26c  stp x24,xzr,[x29, #-0x60]
7101b7c270  cbz x0,0x7101b7c278
7101b7c274  bl 0x710392eb40
7101b7c278  ldr x8,[x20, #0x1e8]
7101b7c27c  ldr x8,[x8]
7101b7c280  cbz x8,0x7101b7c290
7101b7c284  ldrb w9,[x8, #0x58]
7101b7c288  and w9,w9,#0xfe
7101b7c28c  strb w9,[x8, #0x58]
7101b7c290  mov w1,#0x4
7101b7c294  mov x0,x20
7101b7c298  mov w2,wzr
7101b7c29c  bl 0x7101b69480
7101b7c2a0  str x20,[x19, #0x80]
7101b7c2a4  ldp x29,x30,[sp, #0xd0]
7101b7c2a8  ldp x20,x19,[sp, #0xc0]
7101b7c2ac  ldp x22,x21,[sp, #0xb0]
7101b7c2b0  ldp x24,x23,[sp, #0xa0]
7101b7c2b4  ldp x26,x25,[sp, #0x90]
7101b7c2b8  ldp x28,x27,[sp, #0x80]
7101b7c2bc  add sp,sp,#0xe0
7101b7c2c0  ret
7101b7c2c4  add x22,x8,#0x28
7101b7c2c8  b 0x7101b7b760
7101b7c2cc  adrp x0,0x710532f000
7101b7c2d0  add x0,x0,#0x4d8
7101b7c2d4  bl 0x71039c06b0
7101b7c2d8  cbz w0,0x7101b7b70c
7101b7c2dc  adrp x1,0x710532f000
7101b7c2e0  add x1,x1,#0x4a4
7101b7c2e4  orr w8,wzr,#0xffffff
7101b7c2e8  adrp x0,0x710353e000
7101b7c2ec  add x0,x0,#0x700
7101b7c2f0  str w8,[x1]
7101b7c2f4  adrp x2,0x7104f17000
7101b7c2f8  add x2,x2,#0x0
7101b7c2fc  bl 0x71000001c0
7101b7c300  adrp x0,0x710532f000
7101b7c304  add x0,x0,#0x4d8
7101b7c308  bl 0x71039c06c0
7101b7c30c  ldr x10,[x22, #0x28]!
7101b7c310  cbnz x10,0x7101b7b714
7101b7c314  b 0x7101b7b758
