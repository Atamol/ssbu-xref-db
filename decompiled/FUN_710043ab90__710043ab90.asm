// addr:      710043ab90
// offset:    0x43ab90
// name:      FUN_710043ab90
// mangled:   
// size:      1396

710043ab90  sub sp,sp,#0x70
710043ab94  stp x28,x27,[sp, #0x10]
710043ab98  stp x26,x25,[sp, #0x20]
710043ab9c  stp x24,x23,[sp, #0x30]
710043aba0  stp x22,x21,[sp, #0x40]
710043aba4  stp x20,x19,[sp, #0x50]
710043aba8  stp x29,x30,[sp, #0x60]
710043abac  add x29,sp,#0x60
710043abb0  adrp x8,0x7104468000
710043abb4  ldr q0,[x8, #0xe0]
710043abb8  adrp x9,0x710532e000
710043abbc  add x9,x9,#0x970
710043abc0  adrp x10,0x7104469000
710043abc4  adrp x8,0x7104468000
710043abc8  ldr q1,[x10, #0x1a0]
710043abcc  mov w0,#0x10
710043abd0  mov w1,#0x8
710043abd4  str q0,[x9]
710043abd8  ldr q0,[x8, #0x5b0]
710043abdc  adrp x8,0x710532e000
710043abe0  str xzr,[x9, #0x10]
710043abe4  str xzr,[x9, #0x18]
710043abe8  str q1,[x9, #0x20]
710043abec  str q0,[x8, #0x9a0]
710043abf0  bl 0x710392e290
710043abf4  cbnz x0,0x710043ac3c
710043abf8  adrp x8,0x7105332000
710043abfc  ldr x0,[x8, #0xf00]
710043ac00  cbz x0,0x710043ac38
710043ac04  mov w8,#0x8
710043ac08  str wzr,[sp, #0xc]
710043ac0c  add x1,sp,#0xc
710043ac10  str x8,[sp]
710043ac14  ldr x8,[x0]
710043ac18  ldr x8,[x8, #0x30]
710043ac1c  mov x2,sp
710043ac20  blr x8
710043ac24  tbz w0,#0x0,0x710043ac38
710043ac28  mov w0,#0x10
710043ac2c  mov w1,#0x8
710043ac30  bl 0x710392e290
710043ac34  cbnz x0,0x710043ac3c
710043ac38  mov x0,xzr
710043ac3c  mov x9,#0x5886
710043ac40  movk x9,#0x95d5, LSL #16
710043ac44  adrp x1,0x710532e000
710043ac48  add x1,x1,#0x9b0
710043ac4c  add x8,x0,#0x8
710043ac50  str x8,[x1, #0x10]
710043ac54  movk x9,#0xc, LSL #32
710043ac58  str x9,[x0]
710043ac5c  adrp x2,0x7104f17000
710043ac60  add x2,x2,#0x0
710043ac64  stp x0,x8,[x1]
710043ac68  adrp x0,0x71015dc000
710043ac6c  add x0,x0,#0x880
710043ac70  bl 0x71000001c0
710043ac74  mov w0,#0x10
710043ac78  orr w1,wzr,#0x18
710043ac7c  bl 0x710392e290
710043ac80  cbnz x0,0x710043acc8
710043ac84  adrp x8,0x7105332000
710043ac88  ldr x0,[x8, #0xf00]
710043ac8c  cbz x0,0x710043acc4
710043ac90  orr w8,wzr,#0x18
710043ac94  str wzr,[sp, #0xc]
710043ac98  add x1,sp,#0xc
710043ac9c  str x8,[sp]
710043aca0  ldr x8,[x0]
710043aca4  ldr x8,[x8, #0x30]
710043aca8  mov x2,sp
710043acac  blr x8
710043acb0  tbz w0,#0x0,0x710043acc4
710043acb4  mov w0,#0x10
710043acb8  orr w1,wzr,#0x18
710043acbc  bl 0x710392e290
710043acc0  cbnz x0,0x710043acc8
710043acc4  mov x0,xzr
710043acc8  mov x9,#0x1dd4
710043accc  movk x9,#0x1a83, LSL #16
710043acd0  mov x10,#0x6704
710043acd4  movk x10,#0x5d23, LSL #16
710043acd8  adrp x1,0x710532e000
710043acdc  add x1,x1,#0x9c8
710043ace0  add x8,x0,#0x18
710043ace4  str x8,[x1, #0x10]
710043ace8  movk x9,#0x10, LSL #32
710043acec  movk x10,#0x10, LSL #32
710043acf0  stp x9,x10,[x0]
710043acf4  mov x9,#0x4eb4
710043acf8  movk x9,#0x6043, LSL #16
710043acfc  movk x9,#0x10, LSL #32
710043ad00  str x9,[x0, #0x10]
710043ad04  stp x0,x8,[x1]
710043ad08  adrp x0,0x71015dc000
710043ad0c  add x0,x0,#0x880
710043ad10  adrp x2,0x7104f17000
710043ad14  add x2,x2,#0x0
710043ad18  bl 0x71000001c0
710043ad1c  mov w0,#0x10
710043ad20  orr w1,wzr,#0x18
710043ad24  bl 0x710392e290
710043ad28  cbnz x0,0x710043ad70
710043ad2c  adrp x8,0x7105332000
710043ad30  ldr x0,[x8, #0xf00]
710043ad34  cbz x0,0x710043ad6c
710043ad38  orr w8,wzr,#0x18
710043ad3c  str wzr,[sp, #0xc]
710043ad40  add x1,sp,#0xc
710043ad44  str x8,[sp]
710043ad48  ldr x8,[x0]
710043ad4c  ldr x8,[x8, #0x30]
710043ad50  mov x2,sp
710043ad54  blr x8
710043ad58  tbz w0,#0x0,0x710043ad6c
710043ad5c  mov w0,#0x10
710043ad60  orr w1,wzr,#0x18
710043ad64  bl 0x710392e290
710043ad68  cbnz x0,0x710043ad70
710043ad6c  mov x0,xzr
710043ad70  mov x10,#0x6bd1
710043ad74  movk x10,#0x4d92, LSL #16
710043ad78  mov x9,#0x8681
710043ad7c  movk x9,#0xb68a, LSL #16
710043ad80  adrp x21,0x710532e000
710043ad84  add x21,x21,#0x9e0
710043ad88  add x8,x0,#0x18
710043ad8c  str x8,[x21, #0x10]
710043ad90  movk x10,#0x10, LSL #32
710043ad94  movk x9,#0xd, LSL #32
710043ad98  stp x10,x9,[x0]
710043ad9c  mov x9,#0x841b
710043ada0  movk x9,#0xc1e6, LSL #16
710043ada4  movk x9,#0xe, LSL #32
710043ada8  str x9,[x0, #0x10]
710043adac  stp x0,x8,[x21]
710043adb0  adrp x0,0x71015dc000
710043adb4  add x0,x0,#0x880
710043adb8  adrp x2,0x7104f17000
710043adbc  add x2,x2,#0x0
710043adc0  mov x1,x21
710043adc4  bl 0x71000001c0
710043adc8  mov w0,#0x10
710043adcc  mov w1,#0x10
710043add0  bl 0x710392e290
710043add4  cbnz x0,0x710043ae1c
710043add8  adrp x8,0x7105332000
710043addc  ldr x0,[x8, #0xf00]
710043ade0  cbz x0,0x710043ae18
710043ade4  mov w8,#0x10
710043ade8  str wzr,[sp, #0xc]
710043adec  add x1,sp,#0xc
710043adf0  str x8,[sp]
710043adf4  ldr x8,[x0]
710043adf8  ldr x8,[x8, #0x30]
710043adfc  mov x2,sp
710043ae00  blr x8
710043ae04  tbz w0,#0x0,0x710043ae18
710043ae08  mov w0,#0x10
710043ae0c  mov w1,#0x10
710043ae10  bl 0x710392e290
710043ae14  cbnz x0,0x710043ae1c
710043ae18  mov x0,xzr
710043ae1c  mov x9,#0x1ae3
710043ae20  movk x9,#0x8a5d, LSL #16
710043ae24  mov x10,#0xe264
710043ae28  movk x10,#0x3a7d, LSL #16
710043ae2c  adrp x22,0x710532e000
710043ae30  add x22,x22,#0x9f8
710043ae34  add x8,x0,#0x10
710043ae38  stp x0,x8,[x22]
710043ae3c  movk x9,#0x1d, LSL #32
710043ae40  movk x10,#0x1c, LSL #32
710043ae44  str x8,[x22, #0x10]
710043ae48  mov x25,#0x3c65
710043ae4c  movk x25,#0x836b, LSL #16
710043ae50  mov x26,#0xe075
710043ae54  movk x26,#0x314b, LSL #16
710043ae58  stp x9,x10,[x0]
710043ae5c  mov x23,#0xc9c5
710043ae60  movk x23,#0xc2b, LSL #16
710043ae64  mov x27,#0xa4b0
710043ae68  movk x27,#0x8520, LSL #16
710043ae6c  mov x20,#0x2bc0
710043ae70  movk x20,#0x4dc0, LSL #16
710043ae74  mov x28,#0x78a0
710043ae78  movk x28,#0x3700, LSL #16
710043ae7c  adrp x0,0x71015dc000
710043ae80  add x0,x0,#0x880
710043ae84  adrp x2,0x7104f17000
710043ae88  add x2,x2,#0x0
710043ae8c  mov x1,x22
710043ae90  movk x25,#0xf, LSL #32
710043ae94  movk x26,#0xf, LSL #32
710043ae98  movk x23,#0xf, LSL #32
710043ae9c  movk x27,#0xe, LSL #32
710043aea0  movk x20,#0xe, LSL #32
710043aea4  movk x28,#0xe, LSL #32
710043aea8  bl 0x71000001c0
710043aeac  mov x24,#0xfffa00000000
710043aeb0  adrp x19,0x710532e000
710043aeb4  add x19,x19,#0xa10
710043aeb8  movk x24,#0xffff, LSL #48
710043aebc  adrp x0,0x71043bc000
710043aec0  add x0,x0,#0xb6c
710043aec4  stp xzr,xzr,[x19]
710043aec8  str xzr,[x19, #0x30]
710043aecc  stp xzr,x24,[x19, #0x10]
710043aed0  str wzr,[x19, #0x38]
710043aed4  stp x20,x20,[x19, #0x20]
710043aed8  bl 0x7103151710
710043aedc  str w0,[x19, #0x3c]
710043aee0  adrp x0,0x710436a000
710043aee4  add x0,x0,#0x9e7
710043aee8  stp xzr,xzr,[x19, #0x40]
710043aeec  str xzr,[x19, #0x70]
710043aef0  str wzr,[x19, #0x78]
710043aef4  stp xzr,x24,[x19, #0x50]
710043aef8  stp x28,x28,[x19, #0x60]
710043aefc  bl 0x7103151710
710043af00  str w0,[x19, #0x7c]
710043af04  adrp x0,0x71042a1000
710043af08  add x0,x0,#0x676
710043af0c  stp x27,x27,[x19, #0x80]
710043af10  str xzr,[x19, #0x90]
710043af14  str wzr,[x19, #0x98]
710043af18  bl 0x7103151710
710043af1c  str w0,[x19, #0x9c]
710043af20  adrp x0,0x7104441000
710043af24  add x0,x0,#0xec7
710043af28  stp xzr,xzr,[x19, #0xa0]
710043af2c  str xzr,[x19, #0xd0]
710043af30  str wzr,[x19, #0xd8]
710043af34  stp xzr,x24,[x19, #0xb0]
710043af38  stp x23,x23,[x19, #0xc0]
710043af3c  bl 0x7103151710
710043af40  str w0,[x19, #0xdc]
710043af44  adrp x0,0x7104359000
710043af48  add x0,x0,#0x918
710043af4c  stp x26,x26,[x19, #0xe0]
710043af50  str xzr,[x19, #0xf0]
710043af54  str wzr,[x19, #0xf8]
710043af58  bl 0x7103151710
710043af5c  str w0,[x19, #0xfc]
710043af60  adrp x0,0x7104410000
710043af64  add x0,x0,#0xc4b
710043af68  stp x25,x25,[x19, #0x100]
710043af6c  str xzr,[x19, #0x110]
710043af70  str wzr,[x19, #0x118]
710043af74  bl 0x7103151710
710043af78  mov x8,#0xfcb6
710043af7c  movk x8,#0xce7a, LSL #16
710043af80  adrp x9,0x710532e000
710043af84  add x9,x9,#0x9c8
710043af88  movk x8,#0x1a, LSL #32
710043af8c  str w0,[x19, #0x11c]
710043af90  stp xzr,x8,[x19, #0x120]
710043af94  mov x8,#0x8858
710043af98  movk x8,#0xf7da, LSL #16
710043af9c  movk x8,#0xd, LSL #32
710043afa0  mov x20,#0x6bd1
710043afa4  movk x20,#0x4d92, LSL #16
710043afa8  stp xzr,x8,[x19, #0x140]
710043afac  mov x8,#0x2
710043afb0  movk x8,#0xfffa, LSL #32
710043afb4  movk x8,#0xffff, LSL #48
710043afb8  stp x9,x8,[x19, #0x150]
710043afbc  mov x8,#0x26d3
710043afc0  movk x8,#0x81f9, LSL #16
710043afc4  movk x8,#0x12, LSL #32
710043afc8  adrp x9,0x710532e000
710043afcc  add x9,x9,#0x9b0
710043afd0  stp xzr,x8,[x19, #0x160]
710043afd4  orr x8,xzr,#-0xffffffffffff
710043afd8  movk x8,#0xfffa, LSL #32
710043afdc  movk x20,#0x10, LSL #32
710043afe0  adrp x0,0x71043ee000
710043afe4  add x0,x0,#0xe96
710043afe8  str x21,[x19, #0x190]
710043afec  stp xzr,x24,[x19, #0x130]
710043aff0  str wzr,[x19, #0x198]
710043aff4  stp x9,x8,[x19, #0x170]
710043aff8  stp x20,xzr,[x19, #0x180]
710043affc  bl 0x7103151710
710043b000  orr x8,xzr,#-0xfffffffffffd
710043b004  str w0,[x19, #0x19c]
710043b008  mov w0,#0x10
710043b00c  movk x8,#0xfffa, LSL #32
710043b010  orr w1,wzr,#0x38
710043b014  stp xzr,xzr,[x19, #0x1a0]
710043b018  stp x22,x8,[x19, #0x1b0]
710043b01c  bl 0x710392e290
710043b020  cbnz x0,0x710043b068
710043b024  adrp x8,0x7105332000
710043b028  ldr x0,[x8, #0xf00]
710043b02c  cbz x0,0x710043b064
710043b030  orr w8,wzr,#0x38
710043b034  str wzr,[sp, #0xc]
710043b038  add x1,sp,#0xc
710043b03c  str x8,[sp]
710043b040  ldr x8,[x0]
710043b044  ldr x8,[x8, #0x30]
710043b048  mov x2,sp
710043b04c  blr x8
710043b050  tbz w0,#0x0,0x710043b064
710043b054  mov w0,#0x10
710043b058  orr w1,wzr,#0x38
710043b05c  bl 0x710392e290
710043b060  cbnz x0,0x710043b068
710043b064  mov x0,xzr
710043b068  mov x8,#0xe075
710043b06c  movk x8,#0x314b, LSL #16
710043b070  adrp x1,0x710532e000
710043b074  add x1,x1,#0xbd0
710043b078  add x9,x0,#0x38
710043b07c  str x0,[x1]
710043b080  movk x8,#0xf, LSL #32
710043b084  str x9,[x1, #0x10]
710043b088  mov x10,#0x78a0
710043b08c  movk x10,#0x3700, LSL #16
710043b090  stp x23,x8,[x0]
710043b094  mov x8,#0x3c65
710043b098  movk x8,#0x836b, LSL #16
710043b09c  movk x8,#0xf, LSL #32
710043b0a0  movk x10,#0xe, LSL #32
710043b0a4  str x8,[x0, #0x10]
710043b0a8  mov x8,#0x2bc0
710043b0ac  movk x8,#0x4dc0, LSL #16
710043b0b0  str x10,[x0, #0x20]
710043b0b4  mov x10,#0xa4b0
710043b0b8  movk x10,#0x8520, LSL #16
710043b0bc  movk x8,#0xe, LSL #32
710043b0c0  str x8,[x0, #0x18]
710043b0c4  movk x10,#0xe, LSL #32
710043b0c8  stp x10,x20,[x0, #0x28]
710043b0cc  str x9,[x1, #0x8]
710043b0d0  ldp x29,x30,[sp, #0x60]
710043b0d4  ldp x20,x19,[sp, #0x50]
710043b0d8  adrp x8,0x71015dc000
710043b0dc  add x8,x8,#0x880
710043b0e0  ldp x22,x21,[sp, #0x40]
710043b0e4  ldp x24,x23,[sp, #0x30]
710043b0e8  adrp x2,0x7104f17000
710043b0ec  add x2,x2,#0x0
710043b0f0  ldp x26,x25,[sp, #0x20]
710043b0f4  ldp x28,x27,[sp, #0x10]
710043b0f8  mov x0,x8
710043b0fc  add sp,sp,#0x70
710043b100  b 0x71000001c0
