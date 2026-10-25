// addr:      7102e1ab00
// offset:    0x2e1ab00
// name:      FUN_7102e1ab00
// mangled:   
// size:      7604

7102e1ab00  str d8,[sp, #-0x70]!
7102e1ab04  stp x28,x27,[sp, #0x10]
7102e1ab08  stp x26,x25,[sp, #0x20]
7102e1ab0c  stp x24,x23,[sp, #0x30]
7102e1ab10  stp x22,x21,[sp, #0x40]
7102e1ab14  stp x20,x19,[sp, #0x50]
7102e1ab18  stp x29,x30,[sp, #0x60]
7102e1ab1c  add x29,sp,#0x60
7102e1ab20  sub sp,sp,#0x3d0
7102e1ab24  adrp x8,0x710513f000
7102e1ab28  add x8,x8,#0xc20
7102e1ab2c  mov x26,x1
7102e1ab30  mov x21,x0
7102e1ab34  str x8,[x0]
7102e1ab38  mov w1,#0xa0
7102e1ab3c  mov w0,#0x10
7102e1ab40  mov w24,w3
7102e1ab44  mov x23,x2
7102e1ab48  bl 0x710392e290
7102e1ab4c  mov x22,x0
7102e1ab50  cbnz x0,0x7102e1ab9c
7102e1ab54  adrp x8,0x7105332000
7102e1ab58  ldr x0,[x8, #0xf00]
7102e1ab5c  cbz x0,0x7102e1ab98
7102e1ab60  mov w8,#0xa0
7102e1ab64  str wzr,[sp, #0xf0]
7102e1ab68  add x1,sp,#0xf0
7102e1ab6c  str x8,[sp, #0x170]
7102e1ab70  ldr x8,[x0]
7102e1ab74  ldr x8,[x8, #0x30]
7102e1ab78  add x2,sp,#0x170
7102e1ab7c  blr x8
7102e1ab80  tbz w0,#0x0,0x7102e1ab98
7102e1ab84  mov w1,#0xa0
7102e1ab88  mov w0,#0x10
7102e1ab8c  bl 0x710392e290
7102e1ab90  mov x22,x0
7102e1ab94  cbnz x0,0x7102e1ab9c
7102e1ab98  mov x22,xzr
7102e1ab9c  mov x20,x22
7102e1aba0  mov w8,#0xffffffff
7102e1aba4  str x26,[x22]
7102e1aba8  str xzr,[x20, #0x8]!
7102e1abac  str w8,[x22, #0x40]
7102e1abb0  mov x25,x22
7102e1abb4  mov w8,#0x1
7102e1abb8  stp xzr,xzr,[x22, #0x30]
7102e1abbc  adrp x10,0x710513f000
7102e1abc0  add x10,x10,#0xc30
7102e1abc4  stp xzr,xzr,[x22, #0x20]
7102e1abc8  stp xzr,xzr,[x22, #0x10]
7102e1abcc  str xzr,[x25, #0x50]!
7102e1abd0  strh w8,[x22, #0x90]
7102e1abd4  mov x8,#0x43c8000000000000
7102e1abd8  stur x8,[x22, #0x94]
7102e1abdc  eor w8,w24,#0x1
7102e1abe0  and x9,x8,#0x1
7102e1abe4  and w8,w8,#0x1
7102e1abe8  ldr x19,[x10, x9, LSL #0x3]
7102e1abec  str xzr,[x22, #0x58]
7102e1abf0  str w8,[x22, #0x44]
7102e1abf4  stp xzr,xzr,[x22, #0x80]
7102e1abf8  stp xzr,xzr,[x22, #0x70]
7102e1abfc  stp xzr,xzr,[x22, #0x60]
7102e1ac00  ldrb w13,[x19]
7102e1ac04  cbz w13,0x7102e1ac94
7102e1ac08  ldr x9,[x26, #0x310]
7102e1ac0c  ldp x8,x9,[x9, #0xd0]
7102e1ac10  cmp x8,x9
7102e1ac14  b.eq 0x7102e1ac94
7102e1ac18  mov x10,xzr
7102e1ac1c  add x12,x19,#0x1
7102e1ac20  mov w11,#0xffffffff
7102e1ac24  orr x14,xzr,#0x100000000
7102e1ac28  adrp x15,0x7104754000
7102e1ac2c  add x15,x15,#0x84
7102e1ac30  and w13,w13,#0xff
7102e1ac34  sub w16,w13,#0x41
7102e1ac38  add w17,w13,#0x20
7102e1ac3c  cmp w16,#0x1a
7102e1ac40  csel w13,w17,w13,cc
7102e1ac44  eor w13,w13,w11
7102e1ac48  and w13,w13,#0xff
7102e1ac4c  ldr w13,[x15, w13, UXTW #0x2]
7102e1ac50  eor w11,w13,w11, LSR #0x8
7102e1ac54  ldrb w13,[x12], #0x1
7102e1ac58  add x10,x10,x14
7102e1ac5c  cbnz w13,0x7102e1ac30
7102e1ac60  mvn w11,w11
7102e1ac64  and x10,x10,#0xff00000000
7102e1ac68  orr x11,x10,x11
7102e1ac6c  ldr w10,[x8, #0x8]
7102e1ac70  cmp w10,#0x1
7102e1ac74  b.hi 0x7102e1ac88
7102e1ac78  ldr x10,[x8]
7102e1ac7c  ldr x12,[x10, #0x68]
7102e1ac80  cmp x11,x12
7102e1ac84  b.eq 0x7102e1c888
7102e1ac88  add x8,x8,#0x10
7102e1ac8c  cmp x9,x8
7102e1ac90  b.ne 0x7102e1ac6c
7102e1ac94  str xzr,[x20]
7102e1ac98  ldr x8,[x22]
7102e1ac9c  ldr x8,[x8, #0x300]
7102e1aca0  ldr x9,[x8, #0x18]
7102e1aca4  ldp x8,x9,[x9]
7102e1aca8  add x24,sp,#0x170
7102e1acac  stp x26,x21,[sp, #0x10]
7102e1acb0  cmp x8,x9
7102e1acb4  str x25,[sp, #0x98]
7102e1acb8  b.eq 0x7102e1ad4c
7102e1acbc  ldrb w10,[x19], #0x1
7102e1acc0  mov w11,#0xffffffff
7102e1acc4  orr x12,xzr,#0x100000000
7102e1acc8  adrp x13,0x7104754000
7102e1accc  add x13,x13,#0x84
7102e1acd0  ldr x14,[x8]
7102e1acd4  cbz w10,0x7102e1ad24
7102e1acd8  mov x15,xzr
7102e1acdc  mov x16,x19
7102e1ace0  mov w18,w10
7102e1ace4  mov w17,w11
7102e1ace8  and w18,w18,#0xff
7102e1acec  sub w0,w18,#0x41
7102e1acf0  add w1,w18,#0x20
7102e1acf4  cmp w0,#0x1a
7102e1acf8  csel w18,w1,w18,cc
7102e1acfc  eor w18,w18,w17
7102e1ad00  and w18,w18,#0xff
7102e1ad04  ldr w18,[x13, w18, UXTW #0x2]
7102e1ad08  eor w17,w18,w17, LSR #0x8
7102e1ad0c  ldrb w18,[x16], #0x1
7102e1ad10  add x15,x15,x12
7102e1ad14  cbnz w18,0x7102e1ace8
7102e1ad18  mvn w16,w17
7102e1ad1c  and x15,x15,#0xff00000000
7102e1ad20  b 0x7102e1ad2c
7102e1ad24  mov x16,xzr
7102e1ad28  mov x15,xzr
7102e1ad2c  orr x15,x15,x16
7102e1ad30  ldr x16,[x14, #0xa0]
7102e1ad34  and x16,x16,#0xffffffffff
7102e1ad38  cmp x16,x15
7102e1ad3c  b.eq 0x7102e1ad54
7102e1ad40  add x8,x8,#0x8
7102e1ad44  cmp x8,x9
7102e1ad48  b.ne 0x7102e1acd0
7102e1ad4c  mov x8,xzr
7102e1ad50  b 0x7102e1ad68
7102e1ad54  ldr x8,[x14, #0x110]
7102e1ad58  cbz x8,0x7102e1ad68
7102e1ad5c  ldp x9,x10,[x8]
7102e1ad60  cmp x9,x10
7102e1ad64  csel x8,xzr,x8,eq
7102e1ad68  str x8,[x22, #0x10]
7102e1ad6c  ldp x0,x1,[x8]
7102e1ad70  mov x19,#0x2b3
7102e1ad74  movk x19,#0xa2c5, LSL #16
7102e1ad78  mov x25,#0x7a80
7102e1ad7c  movk x25,#0xfb99, LSL #16
7102e1ad80  mov x26,#0xfc4f
7102e1ad84  movk x26,#0x25cb, LSL #16
7102e1ad88  mov x28,#0x1fca
7102e1ad8c  movk x28,#0x1ed9, LSL #16
7102e1ad90  mov w2,#0x1
7102e1ad94  movk x19,#0x15, LSL #32
7102e1ad98  movk x25,#0x7, LSL #32
7102e1ad9c  movk x26,#0x4, LSL #32
7102e1ada0  movk x28,#0x3, LSL #32
7102e1ada4  bl 0x71025f4d80
7102e1ada8  adrp x9,0x71052a8000
7102e1adac  ldr x9,[x9, #0xa80]
7102e1adb0  ldr q0,[x9]
7102e1adb4  orr x13,xzr,#0x3f8000003f800000
7102e1adb8  orr w8,wzr,#0x3f800000
7102e1adbc  mov x10,x9
7102e1adc0  orr w30,wzr,#0xe
7102e1adc4  add x11,sp,#0x170
7102e1adc8  mov w27,#0xbf800000
7102e1adcc  mov w20,#0xffffffff
7102e1add0  orr w9,wzr,#0x3
7102e1add4  str w8,[sp, #0x1b0]
7102e1add8  stp xzr,xzr,[sp, #0x180]
7102e1addc  str x28,[sp, #0x1b8]
7102e1ade0  stp xzr,xzr,[sp, #0x170]
7102e1ade4  mov w14,w20
7102e1ade8  stp xzr,x13,[sp, #0x1a0]
7102e1adec  orr w15,wzr,#0x3
7102e1adf0  sturh wzr,[x24, #0x71]
7102e1adf4  add x12,x11,#0x1dc
7102e1adf8  adrp x21,0x71052a8000
7102e1adfc  stp xzr,xzr,[sp, #0x190]
7102e1ae00  movi d3,#0x0
7102e1ae04  mov v1.16B,v3.16B
7102e1ae08  movi v4.2D,#0x0
7102e1ae0c  strb wzr,[sp, #0x1c4]
7102e1ae10  str wzr,[sp, #0x1c0]
7102e1ae14  strb wzr,[sp, #0x1e3]
7102e1ae18  strh wzr,[sp, #0x1e4]
7102e1ae1c  strb wzr,[sp, #0x1e0]
7102e1ae20  str xzr,[sp, #0x1d8]
7102e1ae24  strb w30,[sp, #0x1e6]
7102e1ae28  strh wzr,[sp, #0x1f0]
7102e1ae2c  str xzr,[sp, #0x1e8]
7102e1ae30  str x28,[sp, #0x1f8]
7102e1ae34  strb wzr,[sp, #0x216]
7102e1ae38  strh wzr,[sp, #0x214]
7102e1ae3c  str wzr,[sp, #0x210]
7102e1ae40  str x13,[sp, #0x218]
7102e1ae44  str wzr,[sp, #0x220]
7102e1ae48  str x26,[sp, #0x228]
7102e1ae4c  str x25,[sp, #0x230]
7102e1ae50  strh wzr,[sp, #0x238]
7102e1ae54  strh wzr,[sp, #0x23c]
7102e1ae58  str w27,[sp, #0x240]
7102e1ae5c  strb wzr,[sp, #0x16c]
7102e1ae60  str wzr,[sp, #0x168]
7102e1ae64  sturb wzr,[x29, #-0xba]
7102e1ae68  sturh wzr,[x29, #-0xbc]
7102e1ae6c  stur wzr,[x29, #-0xc0]
7102e1ae70  str xzr,[sp, #0xf0]
7102e1ae74  stp x19,xzr,[sp, #0x1c8]
7102e1ae78  str q0,[sp, #0x200]
7102e1ae7c  stur xzr,[x24, #0xe4]
7102e1ae80  stur xzr,[x24, #0xdc]
7102e1ae84  stur xzr,[x24, #0xd4]
7102e1ae88  str w20,[sp, #0x25c]
7102e1ae8c  add x20,x11,#0x1e4
7102e1ae90  strb w9,[sp, #0x260]
7102e1ae94  add x9,x11,#0x1d4
7102e1ae98  strb wzr,[sp, #0x261]
7102e1ae9c  str w8,[sp, #0x264]
7102e1aea0  strh wzr,[sp, #0x268]
7102e1aea4  strb wzr,[sp, #0x26a]
7102e1aea8  str xzr,[sp, #0x288]
7102e1aeac  str xzr,[sp, #0x280]
7102e1aeb0  str xzr,[sp, #0x278]
7102e1aeb4  str xzr,[sp, #0x270]
7102e1aeb8  str w8,[sp, #0x2a8]
7102e1aebc  str w8,[sp, #0x2ac]
7102e1aec0  str w8,[sp, #0x2b0]
7102e1aec4  str x28,[sp, #0x2b8]
7102e1aec8  strh wzr,[sp, #0x2e0]
7102e1aecc  strh wzr,[sp, #0x2e2]
7102e1aed0  str xzr,[sp, #0x2a0]
7102e1aed4  str xzr,[sp, #0x298]
7102e1aed8  str xzr,[sp, #0x290]
7102e1aedc  strb wzr,[sp, #0x2c4]
7102e1aee0  str wzr,[sp, #0x2c0]
7102e1aee4  str x19,[sp, #0x2c8]
7102e1aee8  strh wzr,[sp, #0x2e4]
7102e1aeec  strh wzr,[sp, #0x2f0]
7102e1aef0  str xzr,[sp, #0x2d8]
7102e1aef4  str xzr,[sp, #0x2d0]
7102e1aef8  strb w30,[sp, #0x2e6]
7102e1aefc  str xzr,[sp, #0x2e8]
7102e1af00  str x28,[sp, #0x2f8]
7102e1af04  strb wzr,[sp, #0x316]
7102e1af08  strh wzr,[sp, #0x314]
7102e1af0c  str wzr,[sp, #0x310]
7102e1af10  str w8,[sp, #0x318]
7102e1af14  str w8,[sp, #0x31c]
7102e1af18  str wzr,[sp, #0x320]
7102e1af1c  str x26,[sp, #0x328]
7102e1af20  str x25,[sp, #0x330]
7102e1af24  strh wzr,[sp, #0x338]
7102e1af28  strh wzr,[sp, #0x33c]
7102e1af2c  str w27,[sp, #0x340]
7102e1af30  str q0,[sp, #0x300]
7102e1af34  str xzr,[x20]
7102e1af38  str xzr,[x12]
7102e1af3c  str xzr,[x9]
7102e1af40  str w14,[sp, #0x35c]
7102e1af44  add x14,x23,#0x2a4
7102e1af48  strb w15,[sp, #0x360]
7102e1af4c  strb wzr,[sp, #0x361]
7102e1af50  str w8,[sp, #0x364]
7102e1af54  strh wzr,[sp, #0x368]
7102e1af58  strb wzr,[sp, #0x36a]
7102e1af5c  stp xzr,xzr,[sp, #0xf8]
7102e1af60  ldr x21,[x21, #0xa88]
7102e1af64  ldr q0,[x21]
7102e1af68  ldr s2,[x23, #0x2a0]
7102e1af6c  mov v1.S[0x0],v0.S[0x2]
7102e1af70  ldrb w4,[x23, #0x2ca]
7102e1af74  mov v0.D[0x1],v1.D[0x0]
7102e1af78  ldr x15,[x14]
7102e1af7c  scvtf s1,s2
7102e1af80  ldr w16,[x23, #0x2ac]
7102e1af84  ldr w17,[x23, #0x2b0]
7102e1af88  ldr w18,[x23, #0x2b8]
7102e1af8c  ldr w0,[x23, #0x2cc]
7102e1af90  ldr x1,[x23, #0x2c0]
7102e1af94  ldrb w2,[x23, #0x2bd]
7102e1af98  ldrb w3,[x23, #0x2c8]
7102e1af9c  ldrb w5,[x23, #0x2c9]
7102e1afa0  cmp w4,#0x0
7102e1afa4  ldrb w6,[x23, #0x2bc]
7102e1afa8  cset w4,ne
7102e1afac  ldrh w7,[x23, #0x2d0]
7102e1afb0  ldr w19,[x23, #0x2b4]
7102e1afb4  cmp w6,#0x0
7102e1afb8  cset w6,ne
7102e1afbc  str x15,[sp, #0x198]
7102e1afc0  orr w15,wzr,#0x1f
7102e1afc4  str w16,[sp, #0x1a0]
7102e1afc8  mov w16,#0x200
7102e1afcc  str s1,[sp, #0x190]
7102e1afd0  mov v1.16B,v3.16B
7102e1afd4  str wzr,[sp, #0x194]
7102e1afd8  str w17,[sp, #0x1a4]
7102e1afdc  ldr x17,[sp, #0x100]
7102e1afe0  str w8,[sp, #0x1a8]
7102e1afe4  str w18,[sp, #0x1ac]
7102e1afe8  str w0,[sp, #0x1b0]
7102e1afec  str x28,[sp, #0x1b8]
7102e1aff0  strb w15,[sp, #0x1c4]
7102e1aff4  str x1,[sp, #0x1c8]
7102e1aff8  strb w2,[sp, #0x1d0]
7102e1affc  strb w3,[sp, #0x1d1]
7102e1b000  strh wzr,[sp, #0x1d2]
7102e1b004  strb w4,[sp, #0x1d4]
7102e1b008  strb wzr,[sp, #0x1d9]
7102e1b00c  str q0,[sp, #0x170]
7102e1b010  ldr q0,[x10]
7102e1b014  mov w10,#0x3f
7102e1b018  movk w10,#0x7, LSL #16
7102e1b01c  str w10,[sp, #0x1c0]
7102e1b020  str q4,[sp, #0x180]
7102e1b024  stur wzr,[x24, #0x65]
7102e1b028  strb w5,[sp, #0x1da]
7102e1b02c  sturh wzr,[x24, #0x6b]
7102e1b030  strh w16,[sp, #0x1e2]
7102e1b034  ldrb w16,[sp, #0x16c]
7102e1b038  strb w6,[sp, #0x1dd]
7102e1b03c  stur wzr,[x24, #0x6e]
7102e1b040  strb w16,[sp, #0x1f0]
7102e1b044  ldr w16,[sp, #0x168]
7102e1b048  str w16,[sp, #0x1ec]
7102e1b04c  ldurh w16,[x29, #-0x84]
7102e1b050  strh w16,[sp, #0x1f6]
7102e1b054  ldur w16,[x29, #-0x88]
7102e1b058  strh w7,[sp, #0x1e4]
7102e1b05c  mov w7,#0xffffffff
7102e1b060  strb w30,[sp, #0x1e6]
7102e1b064  str w19,[sp, #0x1e8]
7102e1b068  orr w19,wzr,#0x3
7102e1b06c  strb wzr,[sp, #0x1f1]
7102e1b070  stur w16,[x24, #0x82]
7102e1b074  ldur x16,[x29, #-0xc0]
7102e1b078  str x13,[sp, #0x218]
7102e1b07c  ldrh w13,[sp, #0x164]
7102e1b080  strh w13,[sp, #0x23a]
7102e1b084  ldrh w13,[sp, #0x160]
7102e1b088  str x16,[sp, #0x210]
7102e1b08c  strh w13,[sp, #0x23e]
7102e1b090  ldp x13,x16,[sp, #0xf0]
7102e1b094  str x28,[sp, #0x1f8]
7102e1b098  str wzr,[sp, #0x220]
7102e1b09c  str x26,[sp, #0x228]
7102e1b0a0  str x25,[sp, #0x230]
7102e1b0a4  strh wzr,[sp, #0x238]
7102e1b0a8  strh wzr,[sp, #0x23c]
7102e1b0ac  str w27,[sp, #0x240]
7102e1b0b0  sturb wzr,[x29, #-0xba]
7102e1b0b4  sturh wzr,[x29, #-0xbc]
7102e1b0b8  stur wzr,[x29, #-0xc0]
7102e1b0bc  str xzr,[sp, #0xf0]
7102e1b0c0  stp xzr,xzr,[sp, #0xf8]
7102e1b0c4  str q0,[sp, #0x200]
7102e1b0c8  ldr q0,[x21]
7102e1b0cc  mov v1.S[0x0],v0.S[0x2]
7102e1b0d0  mov v0.D[0x1],v1.D[0x0]
7102e1b0d4  stur x13,[x24, #0xd4]
7102e1b0d8  ldrh w13,[sp, #0x15c]
7102e1b0dc  stur x17,[x24, #0xe4]
7102e1b0e0  stur x16,[x24, #0xdc]
7102e1b0e4  str w7,[sp, #0x25c]
7102e1b0e8  strb w19,[sp, #0x260]
7102e1b0ec  strb wzr,[sp, #0x261]
7102e1b0f0  strh w13,[sp, #0x262]
7102e1b0f4  str w8,[sp, #0x264]
7102e1b0f8  strh wzr,[sp, #0x268]
7102e1b0fc  strb wzr,[sp, #0x26a]
7102e1b100  ldr s2,[x23, #0x2a0]
7102e1b104  ldrb w3,[x23, #0x2ca]
7102e1b108  scvtf s2,s2
7102e1b10c  ldr x13,[x14]
7102e1b110  ldrb w5,[x23, #0x2bc]
7102e1b114  ldr w14,[x23, #0x2ac]
7102e1b118  ldr w16,[x23, #0x2b0]
7102e1b11c  ldr w17,[x23, #0x2b8]
7102e1b120  ldr w18,[x23, #0x2cc]
7102e1b124  ldr x0,[x23, #0x2c0]
7102e1b128  ldrb w1,[x23, #0x2bd]
7102e1b12c  ldrb w2,[x23, #0x2c8]
7102e1b130  ldrb w4,[x23, #0x2c9]
7102e1b134  cmp w3,#0x0
7102e1b138  cset w3,ne
7102e1b13c  cmp w5,#0x0
7102e1b140  ldrh w5,[x23, #0x2d0]
7102e1b144  ldr w6,[x23, #0x2b4]
7102e1b148  str x13,[sp, #0x298]
7102e1b14c  add x13,x11,#0x16b
7102e1b150  str w10,[sp, #0x2c0]
7102e1b154  add x10,x11,#0x165
7102e1b158  str s2,[sp, #0x290]
7102e1b15c  str wzr,[sp, #0x294]
7102e1b160  str w14,[sp, #0x2a0]
7102e1b164  str w16,[sp, #0x2a4]
7102e1b168  str w8,[sp, #0x2a8]
7102e1b16c  str w17,[sp, #0x2ac]
7102e1b170  str w18,[sp, #0x2b0]
7102e1b174  str x28,[sp, #0x2b8]
7102e1b178  strb w15,[sp, #0x2c4]
7102e1b17c  str x0,[sp, #0x2c8]
7102e1b180  mov w0,#0x10
7102e1b184  strb w1,[sp, #0x2d0]
7102e1b188  mov w1,#0x110
7102e1b18c  strb w2,[sp, #0x2d1]
7102e1b190  strh wzr,[sp, #0x2d2]
7102e1b194  strb w3,[sp, #0x2d4]
7102e1b198  strb wzr,[sp, #0x2d9]
7102e1b19c  str x10,[sp, #0x78]
7102e1b1a0  stp q0,q4,[sp, #0x270]
7102e1b1a4  str wzr,[x10]
7102e1b1a8  add x10,x11,#0x16e
7102e1b1ac  strb w4,[sp, #0x2da]
7102e1b1b0  strh wzr,[x13]
7102e1b1b4  cset w13,ne
7102e1b1b8  strb w13,[sp, #0x2dd]
7102e1b1bc  ldur w13,[x29, #-0x88]
7102e1b1c0  str x10,[sp, #0x70]
7102e1b1c4  str wzr,[x10]
7102e1b1c8  add x10,x11,#0x182
7102e1b1cc  strh wzr,[sp, #0x2e2]
7102e1b1d0  strh w5,[sp, #0x2e4]
7102e1b1d4  strb w30,[sp, #0x2e6]
7102e1b1d8  str w6,[sp, #0x2e8]
7102e1b1dc  strh wzr,[sp, #0x2f0]
7102e1b1e0  str wzr,[sp, #0x2ec]
7102e1b1e4  str w13,[x10]
7102e1b1e8  adrp x10,0x71052a8000
7102e1b1ec  ldr x10,[x10, #0xa80]
7102e1b1f0  ldr q0,[x10]
7102e1b1f4  ldurh w10,[x29, #-0x84]
7102e1b1f8  strh w10,[sp, #0x2f6]
7102e1b1fc  ldur x10,[x29, #-0xc0]
7102e1b200  str x10,[sp, #0x310]
7102e1b204  ldrh w10,[sp, #0x168]
7102e1b208  strh w10,[sp, #0x33a]
7102e1b20c  ldrh w10,[sp, #0x164]
7102e1b210  strh w10,[sp, #0x33e]
7102e1b214  ldr x10,[sp, #0x100]
7102e1b218  str x28,[sp, #0x2f8]
7102e1b21c  str w8,[sp, #0x318]
7102e1b220  str w8,[sp, #0x31c]
7102e1b224  str wzr,[sp, #0x320]
7102e1b228  str x26,[sp, #0x328]
7102e1b22c  str x25,[sp, #0x330]
7102e1b230  strh wzr,[sp, #0x338]
7102e1b234  strh wzr,[sp, #0x33c]
7102e1b238  str w27,[sp, #0x340]
7102e1b23c  str x9,[sp, #0x80]
7102e1b240  str wzr,[sp, #0x144]
7102e1b244  str q0,[sp, #0x300]
7102e1b248  str x10,[x20]
7102e1b24c  ldr x10,[sp, #0xf8]
7102e1b250  str x10,[x12]
7102e1b254  ldr x10,[sp, #0xf0]
7102e1b258  str x10,[x9]
7102e1b25c  ldrh w9,[sp, #0x160]
7102e1b260  strh w9,[sp, #0x362]
7102e1b264  adrp x9,0x7104466000
7102e1b268  ldr q0,[x9, #0x150]
7102e1b26c  str w8,[sp, #0x364]
7102e1b270  adrp x8,0x7104469000
7102e1b274  str w7,[sp, #0x35c]
7102e1b278  strb w19,[sp, #0x360]
7102e1b27c  add x19,sp,#0xf0
7102e1b280  strb wzr,[sp, #0x361]
7102e1b284  strh wzr,[sp, #0x368]
7102e1b288  strb wzr,[sp, #0x36a]
7102e1b28c  str q0,[sp, #0x60]
7102e1b290  str q0,[sp, #0xf0]
7102e1b294  ldr q0,[x8, #0xa00]
7102e1b298  mov x8,#0x40400000
7102e1b29c  movk x8,#0x2, LSL #32
7102e1b2a0  str x8,[sp, #0x110]
7102e1b2a4  adrp x8,0x7104467000
7102e1b2a8  ldr q1,[x8, #0xfa0]
7102e1b2ac  mov w8,#0x40400000
7102e1b2b0  str q0,[sp, #0x50]
7102e1b2b4  str q0,[sp, #0x100]
7102e1b2b8  ldr q0,[x21]
7102e1b2bc  add w21,w8,#0x800, LSL #12
7102e1b2c0  str w21,[sp, #0x140]
7102e1b2c4  str q1,[sp, #0x40]
7102e1b2c8  str q1,[sp, #0x120]
7102e1b2cc  mov v1.16B,v3.16B
7102e1b2d0  mov v1.S[0x0],v0.S[0x2]
7102e1b2d4  mov v0.D[0x1],v1.D[0x0]
7102e1b2d8  str q0,[sp, #0x130]
7102e1b2dc  ldr x25,[x22]
7102e1b2e0  bl 0x710392e290
7102e1b2e4  mov x26,x0
7102e1b2e8  cbnz x0,0x7102e1b334
7102e1b2ec  adrp x8,0x7105332000
7102e1b2f0  ldr x0,[x8, #0xf00]
7102e1b2f4  cbz x0,0x7102e1b330
7102e1b2f8  mov w8,#0x110
7102e1b2fc  stur wzr,[x29, #-0x88]
7102e1b300  sub x1,x29,#0x88
7102e1b304  stur x8,[x29, #-0xc0]
7102e1b308  ldr x8,[x0]
7102e1b30c  ldr x8,[x8, #0x30]
7102e1b310  sub x2,x29,#0xc0
7102e1b314  blr x8
7102e1b318  tbz w0,#0x0,0x7102e1b330
7102e1b31c  mov w1,#0x110
7102e1b320  mov w0,#0x10
7102e1b324  bl 0x710392e290
7102e1b328  mov x26,x0
7102e1b32c  cbnz x0,0x7102e1b334
7102e1b330  mov x26,xzr
7102e1b334  add x24,x19,#0x30
7102e1b338  ldr x19,[x22, #0x8]
7102e1b33c  mov w20,#0x4
7102e1b340  mov x8,#0x100000001
7102e1b344  stp x20,x8,[x29, #-0xc0]
7102e1b348  mov x8,#0x1
7102e1b34c  movk x8,#0x10, LSL #32
7102e1b350  sub x2,x29,#0xc0
7102e1b354  mov x0,x26
7102e1b358  mov x1,x25
7102e1b35c  stur x8,[x29, #-0xb0]
7102e1b360  bl 0x710313e6a0
7102e1b364  mov w8,#0x1
7102e1b368  strb w8,[x26, #0x5c]
7102e1b36c  adrp x8,0x7104465000
7102e1b370  adrp x9,0x7104468000
7102e1b374  ldr q0,[x9, #0xca0]
7102e1b378  adrp x9,0x7105178000
7102e1b37c  add x9,x9,#0xc88
7102e1b380  ldr q1,[x8, #0xfb0]
7102e1b384  adrp x8,0x710446a000
7102e1b388  str q1,[sp, #0xb0]
7102e1b38c  stp q1,q0,[x26, #0xc0]
7102e1b390  ldr q1,[x8, #0x360]
7102e1b394  adrp x8,0x7104465000
7102e1b398  ldr q2,[x8, #0x6b0]
7102e1b39c  adrp x8,0x710446a000
7102e1b3a0  ldr q3,[x8, #0x350]
7102e1b3a4  str w20,[x26, #0x44]
7102e1b3a8  mov w8,#0xffffffff
7102e1b3ac  mov x20,x22
7102e1b3b0  strh wzr,[x26, #0x48]
7102e1b3b4  stur xzr,[x26, #0x54]
7102e1b3b8  stur xzr,[x26, #0x4c]
7102e1b3bc  strb wzr,[x26, #0x60]
7102e1b3c0  str x9,[x26]
7102e1b3c4  str q3,[x26, #0x100]
7102e1b3c8  stp q1,q2,[x26, #0xe0]
7102e1b3cc  stp q1,q0,[sp, #0xd0]
7102e1b3d0  str x19,[x26, #0x68]
7102e1b3d4  str w8,[x26, #0xb0]
7102e1b3d8  stp q0,q1,[x26, #0x70]
7102e1b3dc  str q2,[sp, #0xc0]
7102e1b3e0  stp q2,q3,[x26, #0x90]
7102e1b3e4  str w21,[sp, #0x3c]
7102e1b3e8  str x26,[x20, #0x18]!
7102e1b3ec  ldr x8,[x26, #0x38]
7102e1b3f0  str q3,[sp, #0xa0]
7102e1b3f4  cbz x8,0x7102e1b420
7102e1b3f8  ldr x0,[x8, #0x130]
7102e1b3fc  ldr x8,[x0]
7102e1b400  ldr x8,[x8, #0x100]
7102e1b404  add x2,sp,#0xf0
7102e1b408  mov w1,wzr
7102e1b40c  mov w3,wzr
7102e1b410  mov w4,wzr
7102e1b414  mov w5,wzr
7102e1b418  blr x8
7102e1b41c  ldr x26,[x20]
7102e1b420  ldr x8,[x26, #0x38]
7102e1b424  add x25,sp,#0x170
7102e1b428  cbz x8,0x7102e1b454
7102e1b42c  ldr x0,[x8, #0x130]
7102e1b430  ldr x8,[x0]
7102e1b434  ldr x8,[x8, #0x100]
7102e1b438  mov w3,#0x1
7102e1b43c  mov w1,wzr
7102e1b440  mov x2,x24
7102e1b444  mov w4,wzr
7102e1b448  mov w5,wzr
7102e1b44c  blr x8
7102e1b450  ldr x26,[x20]
7102e1b454  ldr x8,[x26, #0x38]
7102e1b458  cbz x8,0x7102e1b47c
7102e1b45c  ldr x0,[x8, #0xa0]
7102e1b460  ldr x8,[x0]
7102e1b464  ldr x8,[x8, #0x68]
7102e1b468  add x3,sp,#0x170
7102e1b46c  mov w1,wzr
7102e1b470  mov w2,wzr
7102e1b474  blr x8
7102e1b478  ldr x26,[x20]
7102e1b47c  ldr x8,[x26, #0x38]
7102e1b480  add x19,x25,#0x100
7102e1b484  cbz x8,0x7102e1b4a8
7102e1b488  ldr x0,[x8, #0xa0]
7102e1b48c  ldr x8,[x0]
7102e1b490  ldr x8,[x8, #0x68]
7102e1b494  mov w1,#0x1
7102e1b498  mov w2,wzr
7102e1b49c  mov x3,x19
7102e1b4a0  blr x8
7102e1b4a4  ldr x26,[x20]
7102e1b4a8  ldrb w8,[x26, #0x40]
7102e1b4ac  str x19,[sp, #0x90]
7102e1b4b0  cbz w8,0x7102e1b500
7102e1b4b4  ldr x19,[x26, #0x30]
7102e1b4b8  cbz x19,0x7102e1b4f0
7102e1b4bc  ldrb w8,[x19, #0x10]
7102e1b4c0  cbz w8,0x7102e1b4f0
7102e1b4c4  ldrb w8,[x19, #0x50]
7102e1b4c8  strb wzr,[x19, #0x10]
7102e1b4cc  cbz w8,0x7102e1b4f0
7102e1b4d0  ldr x8,[x19]
7102e1b4d4  ldr w0,[x8, #0x8]
7102e1b4d8  bl 0x71003ac560
7102e1b4dc  ldr x8,[x0]
7102e1b4e0  ldr x8,[x8, #0x48]
7102e1b4e4  mov w1,wzr
7102e1b4e8  blr x8
7102e1b4ec  strb wzr,[x19, #0x50]
7102e1b4f0  ldr x8,[x26]
7102e1b4f4  ldr x8,[x8, #0x30]
7102e1b4f8  mov x0,x26
7102e1b4fc  blr x8
7102e1b500  strb wzr,[x26, #0x40]
7102e1b504  ldr x8,[x20]
7102e1b508  ldr x8,[x8, #0x38]
7102e1b50c  add x9,sp,#0x170
7102e1b510  add x10,x9,#0x6e
7102e1b514  str x24,[sp, #0x8]
7102e1b518  stur x23,[x29, #-0x58]
7102e1b51c  str x22,[sp, #0x88]
7102e1b520  add x21,x25,#0x20
7102e1b524  add x22,x25,#0x50
7102e1b528  add x23,x25,#0x60
7102e1b52c  add x28,x25,#0x78
7102e1b530  add x24,x25,#0xd4
7102e1b534  add x19,x25,#0x120
7102e1b538  add x17,x25,#0x150
7102e1b53c  add x27,x9,#0x160
7102e1b540  add x16,x9,#0x178
7102e1b544  add x0,x9,#0x1a0
7102e1b548  add x26,x9,#0x65
7102e1b54c  str x10,[sp, #0x20]
7102e1b550  add x10,x9,#0x7c
7102e1b554  add x9,x9,#0x17c
7102e1b558  stp x10,x9,[sp, #0x28]
7102e1b55c  cbz x8,0x7102e1b5a4
7102e1b560  str x0,[sp]
7102e1b564  ldr x0,[x8, #0x130]
7102e1b568  ldr x8,[x0]
7102e1b56c  ldr x1,[sp, #0x98]
7102e1b570  mov x2,x1
7102e1b574  mov x20,x16
7102e1b578  ldr x8,[x8, #0x178]
7102e1b57c  mov w3,#0x1
7102e1b580  mov x25,x24
7102e1b584  mov x24,x26
7102e1b588  mov x26,x17
7102e1b58c  blr x8
7102e1b590  ldr x0,[sp]
7102e1b594  mov x17,x26
7102e1b598  mov x26,x24
7102e1b59c  mov x24,x25
7102e1b5a0  mov x16,x20
7102e1b5a4  str xzr,[sp, #0x180]
7102e1b5a8  adrp x8,0x71052a8000
7102e1b5ac  ldr x8,[x8, #0xa80]
7102e1b5b0  ldr q0,[x8]
7102e1b5b4  mov x20,#0x1fca
7102e1b5b8  movk x20,#0x1ed9, LSL #16
7102e1b5bc  mov x10,#0x2b3
7102e1b5c0  movk x10,#0xa2c5, LSL #16
7102e1b5c4  orr x9,xzr,#0x3f8000003f800000
7102e1b5c8  orr w8,wzr,#0x3f800000
7102e1b5cc  movk x20,#0x3, LSL #32
7102e1b5d0  add x12,sp,#0x170
7102e1b5d4  movk x10,#0x15, LSL #32
7102e1b5d8  orr w11,wzr,#0xe
7102e1b5dc  str xzr,[sp, #0x188]
7102e1b5e0  stp xzr,xzr,[sp, #0x170]
7102e1b5e4  str x9,[sp, #0x1a8]
7102e1b5e8  str w8,[sp, #0x1b0]
7102e1b5ec  str x20,[sp, #0x1b8]
7102e1b5f0  sturh wzr,[x12, #0x71]
7102e1b5f4  stp xzr,xzr,[x21, #0x8]
7102e1b5f8  mov x14,x10
7102e1b5fc  mov w30,#0xbf800000
7102e1b600  orr w13,wzr,#0x3
7102e1b604  orr w15,wzr,#0x3
7102e1b608  str xzr,[x21]
7102e1b60c  movi d4,#0x0
7102e1b610  mov v2.16B,v4.16B
7102e1b614  str wzr,[x22]
7102e1b618  movi v5.2D,#0x0
7102e1b61c  mov w25,#0x3f
7102e1b620  movk w25,#0x7, LSL #16
7102e1b624  strb wzr,[x22, #0x4]
7102e1b628  mov w22,#0xffffffff
7102e1b62c  str x10,[sp, #0x1c8]
7102e1b630  mov x10,#0xfc4f
7102e1b634  movk x10,#0x25cb, LSL #16
7102e1b638  strb wzr,[sp, #0x1e3]
7102e1b63c  movk x10,#0x4, LSL #32
7102e1b640  strh wzr,[sp, #0x1e4]
7102e1b644  strb wzr,[sp, #0x1f1]
7102e1b648  strb wzr,[x23, #0x10]
7102e1b64c  strb wzr,[sp, #0xf6]
7102e1b650  strh wzr,[sp, #0xf4]
7102e1b654  str wzr,[sp, #0xf0]
7102e1b658  stp xzr,xzr,[x23]
7102e1b65c  adrp x23,0x71052a8000
7102e1b660  strb w11,[sp, #0x1e6]
7102e1b664  strb wzr,[x28, #0x8]
7102e1b668  str xzr,[x28]
7102e1b66c  mov x28,#0x7a80
7102e1b670  movk x28,#0xfb99, LSL #16
7102e1b674  movk x28,#0x7, LSL #32
7102e1b678  str x20,[sp, #0x1f8]
7102e1b67c  str x9,[sp, #0x218]
7102e1b680  str wzr,[sp, #0x220]
7102e1b684  str x10,[sp, #0x228]
7102e1b688  str x28,[sp, #0x230]
7102e1b68c  strh wzr,[sp, #0x238]
7102e1b690  strh wzr,[sp, #0x23c]
7102e1b694  str w30,[sp, #0x240]
7102e1b698  str q0,[sp, #0x200]
7102e1b69c  str xzr,[x24]
7102e1b6a0  stp xzr,xzr,[x24, #0x8]
7102e1b6a4  strh w13,[sp, #0x260]
7102e1b6a8  ldr x13,[sp, #0x90]
7102e1b6ac  str w22,[sp, #0x25c]
7102e1b6b0  str w8,[sp, #0x264]
7102e1b6b4  strh wzr,[sp, #0x268]
7102e1b6b8  strb wzr,[sp, #0x26a]
7102e1b6bc  stp xzr,xzr,[x13, #0x10]
7102e1b6c0  stp xzr,xzr,[x13]
7102e1b6c4  add x13,sp,#0x170
7102e1b6c8  add x13,x13,#0x171
7102e1b6cc  str x9,[sp, #0x2a8]
7102e1b6d0  str w8,[sp, #0x2b0]
7102e1b6d4  str x20,[sp, #0x2b8]
7102e1b6d8  strh wzr,[x13]
7102e1b6dc  str xzr,[x19, #0x10]
7102e1b6e0  stp xzr,xzr,[x19]
7102e1b6e4  orr w19,wzr,#0x3
7102e1b6e8  strb wzr,[x17, #0x4]
7102e1b6ec  str wzr,[x17]
7102e1b6f0  str x14,[sp, #0x2c8]
7102e1b6f4  strb wzr,[sp, #0x2e3]
7102e1b6f8  strh wzr,[sp, #0x2e4]
7102e1b6fc  strb wzr,[sp, #0x2f1]
7102e1b700  strb wzr,[x27, #0x10]
7102e1b704  stp xzr,xzr,[x27]
7102e1b708  ldr x27,[sp, #0x80]
7102e1b70c  strb w11,[sp, #0x2e6]
7102e1b710  strb wzr,[x16, #0x8]
7102e1b714  str xzr,[x16]
7102e1b718  str x20,[sp, #0x2f8]
7102e1b71c  str q0,[sp, #0x300]
7102e1b720  strb wzr,[x0, #0x6]
7102e1b724  strh wzr,[x0, #0x4]
7102e1b728  str wzr,[x0]
7102e1b72c  str x9,[sp, #0x318]
7102e1b730  str wzr,[sp, #0x320]
7102e1b734  str x10,[sp, #0x328]
7102e1b738  str x28,[sp, #0x330]
7102e1b73c  strh wzr,[sp, #0x338]
7102e1b740  strh wzr,[sp, #0x33c]
7102e1b744  str w30,[sp, #0x340]
7102e1b748  str xzr,[x27]
7102e1b74c  stp xzr,xzr,[x27, #0x8]
7102e1b750  str w22,[sp, #0x35c]
7102e1b754  strh w15,[sp, #0x360]
7102e1b758  str w8,[sp, #0x364]
7102e1b75c  strh wzr,[sp, #0x368]
7102e1b760  strb wzr,[sp, #0x36a]
7102e1b764  ldr x23,[x23, #0xa88]
7102e1b768  ldr q1,[x23]
7102e1b76c  ldur x21,[x29, #-0x58]
7102e1b770  mov v2.S[0x0],v1.S[0x2]
7102e1b774  ldr s3,[x21, #0x2d8]
7102e1b778  scvtf s3,s3
7102e1b77c  mov v1.D[0x1],v2.D[0x0]
7102e1b780  ldr w15,[x21, #0x2e4]
7102e1b784  ldrb w3,[x21, #0x302]
7102e1b788  add x14,x21,#0x2dc
7102e1b78c  ldr x13,[x14]
7102e1b790  ldr w16,[x21, #0x2e8]
7102e1b794  ldr w17,[x21, #0x2f0]
7102e1b798  ldr w18,[x21, #0x304]
7102e1b79c  ldr x0,[x21, #0x2f8]
7102e1b7a0  ldrb w1,[x21, #0x2f5]
7102e1b7a4  ldrb w2,[x21, #0x300]
7102e1b7a8  ldrb w4,[x21, #0x301]
7102e1b7ac  ldrb w5,[x21, #0x2f4]
7102e1b7b0  ldrh w6,[x21, #0x308]
7102e1b7b4  ldr w7,[x21, #0x2ec]
7102e1b7b8  cmp w3,#0x0
7102e1b7bc  cset w3,ne
7102e1b7c0  cmp w5,#0x0
7102e1b7c4  str w15,[sp, #0x1a0]
7102e1b7c8  orr w15,wzr,#0x3f
7102e1b7cc  strh w15,[sp, #0x1c0]
7102e1b7d0  orr w15,wzr,#0x7
7102e1b7d4  strb w15,[sp, #0x1c2]
7102e1b7d8  orr w15,wzr,#0x1f
7102e1b7dc  str s3,[sp, #0x190]
7102e1b7e0  str wzr,[sp, #0x194]
7102e1b7e4  str x13,[sp, #0x198]
7102e1b7e8  cset w13,ne
7102e1b7ec  str w16,[sp, #0x1a4]
7102e1b7f0  ldr x16,[sp, #0xf0]
7102e1b7f4  str w8,[sp, #0x1a8]
7102e1b7f8  str w17,[sp, #0x1ac]
7102e1b7fc  str w18,[sp, #0x1b0]
7102e1b800  str x20,[sp, #0x1b8]
7102e1b804  strb wzr,[sp, #0x1c3]
7102e1b808  strb w15,[sp, #0x1c4]
7102e1b80c  str x0,[sp, #0x1c8]
7102e1b810  strb w1,[sp, #0x1d0]
7102e1b814  strb w2,[sp, #0x1d1]
7102e1b818  strh wzr,[sp, #0x1d2]
7102e1b81c  strb w3,[sp, #0x1d4]
7102e1b820  strb wzr,[sp, #0xf6]
7102e1b824  strh wzr,[sp, #0xf4]
7102e1b828  str wzr,[sp, #0xf0]
7102e1b82c  stp q1,q5,[sp, #0x170]
7102e1b830  mov v1.16B,v4.16B
7102e1b834  strb wzr,[x26, #0x4]
7102e1b838  str wzr,[x26]
7102e1b83c  orr w26,wzr,#0x3
7102e1b840  strb w4,[sp, #0x1da]
7102e1b844  sturh wzr,[x12, #0x6b]
7102e1b848  ldr x12,[sp, #0x20]
7102e1b84c  strb w13,[sp, #0x1dd]
7102e1b850  mov w13,#0x2
7102e1b854  strb wzr,[x12, #0x4]
7102e1b858  str wzr,[x12]
7102e1b85c  ldr x12,[sp, #0x28]
7102e1b860  strb w13,[sp, #0x1e3]
7102e1b864  strh w6,[sp, #0x1e4]
7102e1b868  strb w11,[sp, #0x1e6]
7102e1b86c  str w7,[sp, #0x1e8]
7102e1b870  strh wzr,[x12, #0x4]
7102e1b874  str wzr,[x12]
7102e1b878  ldr x12,[sp, #0x78]
7102e1b87c  str x16,[sp, #0x210]
7102e1b880  ldurh w16,[x29, #-0xc0]
7102e1b884  strh w16,[sp, #0x23a]
7102e1b888  ldurh w16,[x29, #-0x88]
7102e1b88c  strh w16,[sp, #0x23e]
7102e1b890  ldrh w16,[sp, #0x168]
7102e1b894  str x20,[sp, #0x1f8]
7102e1b898  str x9,[sp, #0x218]
7102e1b89c  str wzr,[sp, #0x220]
7102e1b8a0  str x10,[sp, #0x228]
7102e1b8a4  str x28,[sp, #0x230]
7102e1b8a8  strh wzr,[sp, #0x238]
7102e1b8ac  strh wzr,[sp, #0x23c]
7102e1b8b0  str w30,[sp, #0x240]
7102e1b8b4  str q0,[sp, #0x200]
7102e1b8b8  ldr q0,[x23]
7102e1b8bc  mov v1.S[0x0],v0.S[0x2]
7102e1b8c0  mov v0.D[0x1],v1.D[0x0]
7102e1b8c4  str xzr,[x24]
7102e1b8c8  stp xzr,xzr,[x24, #0x8]
7102e1b8cc  mov w24,w22
7102e1b8d0  str w22,[sp, #0x25c]
7102e1b8d4  strh w19,[sp, #0x260]
7102e1b8d8  strh w16,[sp, #0x262]
7102e1b8dc  str w8,[sp, #0x264]
7102e1b8e0  strh wzr,[sp, #0x268]
7102e1b8e4  strb wzr,[sp, #0x26a]
7102e1b8e8  ldr s2,[x21, #0x2d8]
7102e1b8ec  scvtf s2,s2
7102e1b8f0  ldrb w4,[x21, #0x302]
7102e1b8f4  ldr x14,[x14]
7102e1b8f8  ldr w16,[x21, #0x2e4]
7102e1b8fc  ldr w17,[x21, #0x2e8]
7102e1b900  ldr w18,[x21, #0x2f0]
7102e1b904  ldr w0,[x21, #0x304]
7102e1b908  ldr x1,[x21, #0x2f8]
7102e1b90c  ldrb w2,[x21, #0x2f5]
7102e1b910  ldrb w3,[x21, #0x300]
7102e1b914  ldrb w6,[x21, #0x2f4]
7102e1b918  cmp w4,#0x0
7102e1b91c  ldrb w5,[x21, #0x301]
7102e1b920  cset w4,ne
7102e1b924  ldrh w7,[x21, #0x308]
7102e1b928  ldr w19,[x21, #0x2ec]
7102e1b92c  cmp w6,#0x0
7102e1b930  str s2,[sp, #0x290]
7102e1b934  str wzr,[sp, #0x294]
7102e1b938  str x14,[sp, #0x298]
7102e1b93c  str w16,[sp, #0x2a0]
7102e1b940  str w17,[sp, #0x2a4]
7102e1b944  str w8,[sp, #0x2a8]
7102e1b948  str w18,[sp, #0x2ac]
7102e1b94c  str w0,[sp, #0x2b0]
7102e1b950  mov w0,#0x10
7102e1b954  str x20,[sp, #0x2b8]
7102e1b958  str w25,[sp, #0x2c0]
7102e1b95c  strb w15,[sp, #0x2c4]
7102e1b960  str x1,[sp, #0x2c8]
7102e1b964  mov w1,#0x110
7102e1b968  strb w2,[sp, #0x2d0]
7102e1b96c  strb w3,[sp, #0x2d1]
7102e1b970  strh wzr,[sp, #0x2d2]
7102e1b974  strb w4,[sp, #0x2d4]
7102e1b978  stp q0,q5,[sp, #0x270]
7102e1b97c  strb wzr,[x12, #0x4]
7102e1b980  str wzr,[x12]
7102e1b984  add x12,sp,#0x170
7102e1b988  add x12,x12,#0x16b
7102e1b98c  strb w5,[sp, #0x2da]
7102e1b990  strh wzr,[x12]
7102e1b994  cset w12,ne
7102e1b998  strb w12,[sp, #0x2dd]
7102e1b99c  ldr x12,[sp, #0x70]
7102e1b9a0  strh wzr,[x12, #0x4]
7102e1b9a4  str wzr,[x12]
7102e1b9a8  strh w7,[sp, #0x2e4]
7102e1b9ac  strb w11,[sp, #0x2e6]
7102e1b9b0  adrp x11,0x71052a8000
7102e1b9b4  str w19,[sp, #0x2e8]
7102e1b9b8  ldr x11,[x11, #0xa80]
7102e1b9bc  ldr q0,[x11]
7102e1b9c0  ldr x11,[sp, #0x30]
7102e1b9c4  strh wzr,[x11, #0x4]
7102e1b9c8  str wzr,[x11]
7102e1b9cc  ldr x11,[sp, #0xf0]
7102e1b9d0  str x20,[sp, #0x2f8]
7102e1b9d4  str x11,[sp, #0x310]
7102e1b9d8  str x9,[sp, #0x318]
7102e1b9dc  str wzr,[sp, #0x320]
7102e1b9e0  str x10,[sp, #0x328]
7102e1b9e4  str x28,[sp, #0x330]
7102e1b9e8  ldr x28,[sp, #0x88]
7102e1b9ec  strh wzr,[sp, #0x338]
7102e1b9f0  strh wzr,[sp, #0x33c]
7102e1b9f4  str w30,[sp, #0x340]
7102e1b9f8  str w13,[sp, #0x114]
7102e1b9fc  str wzr,[sp, #0x144]
7102e1ba00  str q0,[sp, #0x300]
7102e1ba04  ldr q0,[sp, #0x60]
7102e1ba08  str xzr,[x27]
7102e1ba0c  str q0,[sp, #0xf0]
7102e1ba10  ldp q1,q0,[sp, #0x40]
7102e1ba14  str q0,[sp, #0x100]
7102e1ba18  ldr q0,[x23]
7102e1ba1c  stp xzr,xzr,[x27, #0x8]
7102e1ba20  str w8,[sp, #0x364]
7102e1ba24  mov w8,#0x40400000
7102e1ba28  str w8,[sp, #0x110]
7102e1ba2c  ldr w8,[sp, #0x3c]
7102e1ba30  str w22,[sp, #0x35c]
7102e1ba34  strh w26,[sp, #0x360]
7102e1ba38  strh wzr,[sp, #0x368]
7102e1ba3c  strb wzr,[sp, #0x36a]
7102e1ba40  str w8,[sp, #0x140]
7102e1ba44  str q1,[sp, #0x120]
7102e1ba48  mov v1.16B,v4.16B
7102e1ba4c  mov v1.S[0x0],v0.S[0x2]
7102e1ba50  mov v0.D[0x1],v1.D[0x0]
7102e1ba54  str q0,[sp, #0x130]
7102e1ba58  ldr x27,[x28]
7102e1ba5c  bl 0x710392e290
7102e1ba60  mov x26,x0
7102e1ba64  cbnz x0,0x7102e1bab0
7102e1ba68  adrp x8,0x7105332000
7102e1ba6c  ldr x0,[x8, #0xf00]
7102e1ba70  cbz x0,0x7102e1baac
7102e1ba74  mov w8,#0x110
7102e1ba78  stur wzr,[x29, #-0x88]
7102e1ba7c  sub x1,x29,#0x88
7102e1ba80  stur x8,[x29, #-0xc0]
7102e1ba84  ldr x8,[x0]
7102e1ba88  ldr x8,[x8, #0x30]
7102e1ba8c  sub x2,x29,#0xc0
7102e1ba90  blr x8
7102e1ba94  tbz w0,#0x0,0x7102e1baac
7102e1ba98  mov w1,#0x110
7102e1ba9c  mov w0,#0x10
7102e1baa0  bl 0x710392e290
7102e1baa4  mov x26,x0
7102e1baa8  cbnz x0,0x7102e1bab0
7102e1baac  mov x26,xzr
7102e1bab0  ldr x19,[x28, #0x8]
7102e1bab4  mov w20,#0x4
7102e1bab8  mov x8,#0x100000001
7102e1babc  stp x20,x8,[x29, #-0xc0]
7102e1bac0  mov x8,#0x1
7102e1bac4  movk x8,#0x10, LSL #32
7102e1bac8  sub x2,x29,#0xc0
7102e1bacc  mov x0,x26
7102e1bad0  mov x1,x27
7102e1bad4  stur x8,[x29, #-0xb0]
7102e1bad8  bl 0x710313e6a0
7102e1badc  mov w8,#0x1
7102e1bae0  strb w8,[x26, #0x5c]
7102e1bae4  adrp x8,0x7105178000
7102e1bae8  add x8,x8,#0xc88
7102e1baec  str w20,[x26, #0x44]
7102e1baf0  strh wzr,[x26, #0x48]
7102e1baf4  stur xzr,[x26, #0x54]
7102e1baf8  mov w22,w24
7102e1bafc  stur xzr,[x26, #0x4c]
7102e1bb00  strb wzr,[x26, #0x60]
7102e1bb04  str x8,[x26]
7102e1bb08  ldp q0,q2,[sp, #0xb0]
7102e1bb0c  str q0,[x26, #0xc0]
7102e1bb10  ldp q1,q0,[sp, #0xd0]
7102e1bb14  stp q0,q1,[x26, #0xd0]
7102e1bb18  ldr q3,[sp, #0xa0]
7102e1bb1c  str x19,[x26, #0x68]
7102e1bb20  mov x19,x28
7102e1bb24  str w24,[x26, #0xb0]
7102e1bb28  stp q0,q1,[x26, #0x70]
7102e1bb2c  stp q2,q3,[x26, #0xf0]
7102e1bb30  stp q2,q3,[x26, #0x90]
7102e1bb34  str x26,[x19, #0x20]!
7102e1bb38  ldr x8,[x26, #0x38]
7102e1bb3c  cbz x8,0x7102e1bb68
7102e1bb40  ldr x0,[x8, #0x130]
7102e1bb44  ldr x8,[x0]
7102e1bb48  ldr x8,[x8, #0x100]
7102e1bb4c  add x2,sp,#0xf0
7102e1bb50  mov w1,wzr
7102e1bb54  mov w3,wzr
7102e1bb58  mov w4,wzr
7102e1bb5c  mov w5,wzr
7102e1bb60  blr x8
7102e1bb64  ldr x26,[x19]
7102e1bb68  adrp x27,0x71052a8000
7102e1bb6c  ldr x27,[x27, #0xa88]
7102e1bb70  ldr x8,[x26, #0x38]
7102e1bb74  add x24,sp,#0x170
7102e1bb78  cbz x8,0x7102e1bba4
7102e1bb7c  ldr x0,[x8, #0x130]
7102e1bb80  ldr x8,[x0]
7102e1bb84  ldr x8,[x8, #0x100]
7102e1bb88  ldr x2,[sp, #0x8]
7102e1bb8c  mov w3,#0x1
7102e1bb90  mov w1,wzr
7102e1bb94  mov w4,wzr
7102e1bb98  mov w5,wzr
7102e1bb9c  blr x8
7102e1bba0  ldr x26,[x19]
7102e1bba4  ldr x8,[x26, #0x38]
7102e1bba8  cbz x8,0x7102e1bbcc
7102e1bbac  ldr x0,[x8, #0xa0]
7102e1bbb0  ldr x8,[x0]
7102e1bbb4  ldr x8,[x8, #0x68]
7102e1bbb8  add x3,sp,#0x170
7102e1bbbc  mov w1,wzr
7102e1bbc0  mov w2,wzr
7102e1bbc4  blr x8
7102e1bbc8  ldr x26,[x19]
7102e1bbcc  ldr x8,[x26, #0x38]
7102e1bbd0  cbz x8,0x7102e1bbf4
7102e1bbd4  ldr x0,[x8, #0xa0]
7102e1bbd8  ldr x8,[x0]
7102e1bbdc  ldr x8,[x8, #0x68]
7102e1bbe0  ldr x3,[sp, #0x90]
7102e1bbe4  mov w1,#0x1
7102e1bbe8  mov w2,wzr
7102e1bbec  blr x8
7102e1bbf0  ldr x26,[x19]
7102e1bbf4  ldrb w8,[x26, #0x40]
7102e1bbf8  cbz w8,0x7102e1bc48
7102e1bbfc  ldr x20,[x26, #0x30]
7102e1bc00  cbz x20,0x7102e1bc38
7102e1bc04  ldrb w8,[x20, #0x10]
7102e1bc08  cbz w8,0x7102e1bc38
7102e1bc0c  ldrb w8,[x20, #0x50]
7102e1bc10  strb wzr,[x20, #0x10]
7102e1bc14  cbz w8,0x7102e1bc38
7102e1bc18  ldr x8,[x20]
7102e1bc1c  ldr w0,[x8, #0x8]
7102e1bc20  bl 0x71003ac560
7102e1bc24  ldr x8,[x0]
7102e1bc28  ldr x8,[x8, #0x48]
7102e1bc2c  mov w1,wzr
7102e1bc30  blr x8
7102e1bc34  strb wzr,[x20, #0x50]
7102e1bc38  ldr x8,[x26]
7102e1bc3c  ldr x8,[x8, #0x30]
7102e1bc40  mov x0,x26
7102e1bc44  blr x8
7102e1bc48  strb wzr,[x26, #0x40]
7102e1bc4c  ldr x8,[x19]
7102e1bc50  ldr x8,[x8, #0x38]
7102e1bc54  ldr x23,[sp, #0x98]
7102e1bc58  cbz x8,0x7102e1bc78
7102e1bc5c  ldr x0,[x8, #0x130]
7102e1bc60  ldr x8,[x0]
7102e1bc64  ldr x8,[x8, #0x178]
7102e1bc68  mov w3,#0x1
7102e1bc6c  mov x1,x23
7102e1bc70  mov x2,x23
7102e1bc74  blr x8
7102e1bc78  mov x10,#0x1fca
7102e1bc7c  movk x10,#0x1ed9, LSL #16
7102e1bc80  orr x9,xzr,#0x3f8000003f800000
7102e1bc84  movk x10,#0x3, LSL #32
7102e1bc88  mov x11,x10
7102e1bc8c  str x10,[sp, #0x1b8]
7102e1bc90  mov x10,#0x2b3
7102e1bc94  movk x10,#0xa2c5, LSL #16
7102e1bc98  fmov s2,wzr
7102e1bc9c  orr w8,wzr,#0x3f800000
7102e1bca0  movk x10,#0x15, LSL #32
7102e1bca4  str w8,[sp, #0x1b0]
7102e1bca8  stp xzr,xzr,[sp, #0x180]
7102e1bcac  mov w1,#0x110
7102e1bcb0  stp xzr,x9,[sp, #0x1a0]
7102e1bcb4  stur wzr,[x24, #0x72]
7102e1bcb8  stp x10,xzr,[sp, #0x1c8]
7102e1bcbc  orr w10,wzr,#0xe
7102e1bcc0  mov w0,#0x10
7102e1bcc4  strh wzr,[sp, #0x1e0]
7102e1bcc8  str xzr,[sp, #0x1d8]
7102e1bccc  strb w10,[sp, #0x1e6]
7102e1bcd0  adrp x10,0x71052a8000
7102e1bcd4  strh wzr,[sp, #0x1f0]
7102e1bcd8  str xzr,[sp, #0x1e8]
7102e1bcdc  str x11,[sp, #0x1f8]
7102e1bce0  stp xzr,xzr,[sp, #0x190]
7102e1bce4  ldr x10,[x10, #0xa80]
7102e1bce8  ldr q0,[x10]
7102e1bcec  str x9,[sp, #0x218]
7102e1bcf0  mov x9,#0xfc4f
7102e1bcf4  movk x9,#0x25cb, LSL #16
7102e1bcf8  movk x9,#0x4, LSL #32
7102e1bcfc  str x9,[sp, #0x228]
7102e1bd00  mov x9,#0x7a80
7102e1bd04  movk x9,#0xfb99, LSL #16
7102e1bd08  movk x9,#0x7, LSL #32
7102e1bd0c  str x9,[sp, #0x230]
7102e1bd10  mov w9,#0xbf800000
7102e1bd14  str w9,[sp, #0x240]
7102e1bd18  orr w9,wzr,#0x3
7102e1bd1c  strb wzr,[sp, #0x216]
7102e1bd20  strh wzr,[sp, #0x214]
7102e1bd24  str wzr,[sp, #0x210]
7102e1bd28  str wzr,[sp, #0x220]
7102e1bd2c  strh wzr,[sp, #0x238]
7102e1bd30  strh wzr,[sp, #0x23c]
7102e1bd34  str q0,[sp, #0x200]
7102e1bd38  ldr q0,[x27]
7102e1bd3c  ext v1.16B,v0.16B,v0.16B,0x8
7102e1bd40  stur xzr,[x24, #0xe4]
7102e1bd44  mov v1.S[0x1],v2.S[0x0]
7102e1bd48  stur xzr,[x24, #0xdc]
7102e1bd4c  mov v0.D[0x1],v1.D[0x0]
7102e1bd50  stur xzr,[x24, #0xd4]
7102e1bd54  str w22,[sp, #0x25c]
7102e1bd58  strb w9,[sp, #0x260]
7102e1bd5c  strb wzr,[sp, #0x261]
7102e1bd60  str w8,[sp, #0x264]
7102e1bd64  strh wzr,[sp, #0x268]
7102e1bd68  strb wzr,[sp, #0x26a]
7102e1bd6c  str q0,[sp, #0x170]
7102e1bd70  ldr s0,[x21, #0x310]
7102e1bd74  scvtf s0,s0
7102e1bd78  str s0,[sp, #0x190]
7102e1bd7c  ldr w9,[x21, #0x314]
7102e1bd80  str w9,[sp, #0x198]
7102e1bd84  ldr w9,[x21, #0x318]
7102e1bd88  str w9,[sp, #0x19c]
7102e1bd8c  ldr w9,[x21, #0x31c]
7102e1bd90  str w9,[sp, #0x1a0]
7102e1bd94  ldr w9,[x21, #0x320]
7102e1bd98  str w9,[sp, #0x1a4]
7102e1bd9c  str w8,[sp, #0x1a8]
7102e1bda0  ldr w8,[x21, #0x328]
7102e1bda4  str w8,[sp, #0x1ac]
7102e1bda8  ldr w8,[x21, #0x33c]
7102e1bdac  str w8,[sp, #0x1b0]
7102e1bdb0  orr w8,wzr,#0x1f
7102e1bdb4  str w25,[sp, #0x1c0]
7102e1bdb8  strb w8,[sp, #0x1c4]
7102e1bdbc  ldr x8,[x21, #0x330]
7102e1bdc0  str x8,[sp, #0x1c8]
7102e1bdc4  ldrb w8,[x21, #0x32d]
7102e1bdc8  strb w8,[sp, #0x1d0]
7102e1bdcc  ldrb w8,[x21, #0x338]
7102e1bdd0  strb w8,[sp, #0x1d1]
7102e1bdd4  strh wzr,[sp, #0x1d2]
7102e1bdd8  ldrb w8,[x21, #0x33a]
7102e1bddc  strb wzr,[sp, #0x1d9]
7102e1bde0  cmp w8,#0x0
7102e1bde4  cset w8,ne
7102e1bde8  strb w8,[sp, #0x1d4]
7102e1bdec  stur wzr,[x24, #0x65]
7102e1bdf0  ldrb w8,[x21, #0x339]
7102e1bdf4  strb w8,[sp, #0x1da]
7102e1bdf8  sturh wzr,[x24, #0x6b]
7102e1bdfc  ldrb w8,[x21, #0x32c]
7102e1be00  strb wzr,[sp, #0x1de]
7102e1be04  strh wzr,[sp, #0x1e0]
7102e1be08  strb wzr,[sp, #0x1e3]
7102e1be0c  cmp w8,#0x0
7102e1be10  cset w8,ne
7102e1be14  strb w8,[sp, #0x1dd]
7102e1be18  ldrh w8,[x21, #0x340]
7102e1be1c  strh w8,[sp, #0x1e4]
7102e1be20  ldr w8,[x21, #0x324]
7102e1be24  str w8,[sp, #0x1e8]
7102e1be28  ldr x25,[x28]
7102e1be2c  bl 0x710392e290
7102e1be30  mov x24,x0
7102e1be34  cbnz x0,0x7102e1be80
7102e1be38  adrp x8,0x7105332000
7102e1be3c  ldr x0,[x8, #0xf00]
7102e1be40  cbz x0,0x7102e1be7c
7102e1be44  mov w8,#0x110
7102e1be48  stur wzr,[x29, #-0xc0]
7102e1be4c  sub x1,x29,#0xc0
7102e1be50  str x8,[sp, #0xf0]
7102e1be54  ldr x8,[x0]
7102e1be58  ldr x8,[x8, #0x30]
7102e1be5c  add x2,sp,#0xf0
7102e1be60  blr x8
7102e1be64  tbz w0,#0x0,0x7102e1be7c
7102e1be68  mov w1,#0x110
7102e1be6c  mov w0,#0x10
7102e1be70  bl 0x710392e290
7102e1be74  mov x24,x0
7102e1be78  cbnz x0,0x7102e1be80
7102e1be7c  mov x24,xzr
7102e1be80  ldr x19,[x28, #0x8]
7102e1be84  mov w20,#0x4
7102e1be88  mov x8,#0x100000001
7102e1be8c  stp x20,x8,[sp, #0xf0]
7102e1be90  mov x8,#0x1
7102e1be94  movk x8,#0x10, LSL #32
7102e1be98  add x2,sp,#0xf0
7102e1be9c  mov x0,x24
7102e1bea0  mov x1,x25
7102e1bea4  str x8,[sp, #0x100]
7102e1bea8  bl 0x710313e6a0
7102e1beac  mov w8,#0x1
7102e1beb0  strb w8,[x24, #0x5c]
7102e1beb4  adrp x8,0x7105178000
7102e1beb8  add x8,x8,#0xc88
7102e1bebc  str w20,[x24, #0x44]
7102e1bec0  strh wzr,[x24, #0x48]
7102e1bec4  stur xzr,[x24, #0x54]
7102e1bec8  stur xzr,[x24, #0x4c]
7102e1becc  strb wzr,[x24, #0x60]
7102e1bed0  str x8,[x24]
7102e1bed4  adrp x8,0x7104469000
7102e1bed8  ldp q0,q2,[sp, #0xb0]
7102e1bedc  str q0,[x24, #0xc0]
7102e1bee0  ldp q1,q0,[sp, #0xd0]
7102e1bee4  stp q0,q1,[x24, #0xd0]
7102e1bee8  ldr q3,[sp, #0xa0]
7102e1beec  str x19,[x24, #0x68]
7102e1bef0  mov x19,x28
7102e1bef4  str w22,[x24, #0xb0]
7102e1bef8  stp q0,q1,[x24, #0x70]
7102e1befc  ldr q1,[x8, #0xc10]
7102e1bf00  mov w8,#0x40a00000
7102e1bf04  stp q2,q3,[x24, #0xf0]
7102e1bf08  stp q2,q3,[x24, #0x90]
7102e1bf0c  str x24,[x19, #0x28]!
7102e1bf10  ldr q0,[x27]
7102e1bf14  str x8,[sp, #0x110]
7102e1bf18  stp q1,q0,[sp, #0xf0]
7102e1bf1c  ldr x8,[x24, #0x38]
7102e1bf20  cbz x8,0x7102e1bf4c
7102e1bf24  ldr x0,[x8, #0x130]
7102e1bf28  ldr x8,[x0]
7102e1bf2c  ldr x8,[x8, #0x100]
7102e1bf30  add x2,sp,#0xf0
7102e1bf34  mov w1,wzr
7102e1bf38  mov w3,wzr
7102e1bf3c  mov w4,wzr
7102e1bf40  mov w5,wzr
7102e1bf44  blr x8
7102e1bf48  ldr x24,[x19]
7102e1bf4c  ldr x21,[sp, #0x18]
7102e1bf50  ldr x8,[x24, #0x38]
7102e1bf54  mov x25,#0x40400000
7102e1bf58  movk x25,#0x2, LSL #32
7102e1bf5c  cbz x8,0x7102e1bf80
7102e1bf60  ldr x0,[x8, #0xa0]
7102e1bf64  ldr x8,[x0]
7102e1bf68  ldr x8,[x8, #0x68]
7102e1bf6c  add x3,sp,#0x170
7102e1bf70  mov w1,wzr
7102e1bf74  mov w2,wzr
7102e1bf78  blr x8
7102e1bf7c  ldr x24,[x19]
7102e1bf80  adrp x8,0x7104469000
7102e1bf84  ldr q0,[x27]
7102e1bf88  ldr q1,[x8, #0x540]
7102e1bf8c  mov w8,#0x40a00000
7102e1bf90  str x8,[sp, #0x110]
7102e1bf94  stp q1,q0,[sp, #0xf0]
7102e1bf98  ldr x8,[x24, #0x38]
7102e1bf9c  cbz x8,0x7102e1bfc8
7102e1bfa0  ldr x0,[x8, #0x130]
7102e1bfa4  ldr x8,[x0]
7102e1bfa8  ldr x8,[x8, #0x100]
7102e1bfac  add x2,sp,#0xf0
7102e1bfb0  mov w1,wzr
7102e1bfb4  mov w3,wzr
7102e1bfb8  mov w4,wzr
7102e1bfbc  mov w5,wzr
7102e1bfc0  blr x8
7102e1bfc4  ldr x24,[x19]
7102e1bfc8  ldr x8,[x24, #0x38]
7102e1bfcc  cbz x8,0x7102e1bff0
7102e1bfd0  ldr x0,[x8, #0xa0]
7102e1bfd4  ldr x8,[x0]
7102e1bfd8  ldr x8,[x8, #0x68]
7102e1bfdc  mov w1,#0x1
7102e1bfe0  add x3,sp,#0x170
7102e1bfe4  mov w2,wzr
7102e1bfe8  blr x8
7102e1bfec  ldr x24,[x19]
7102e1bff0  adrp x8,0x710446a000
7102e1bff4  ldr q0,[x27]
7102e1bff8  ldr q1,[x8, #0x3a0]
7102e1bffc  mov w8,#0x40a00000
7102e1c000  str x8,[sp, #0x110]
7102e1c004  stp q1,q0,[sp, #0xf0]
7102e1c008  ldr x8,[x24, #0x38]
7102e1c00c  cbz x8,0x7102e1c038
7102e1c010  ldr x0,[x8, #0x130]
7102e1c014  ldr x8,[x0]
7102e1c018  ldr x8,[x8, #0x100]
7102e1c01c  add x2,sp,#0xf0
7102e1c020  mov w1,wzr
7102e1c024  mov w3,wzr
7102e1c028  mov w4,wzr
7102e1c02c  mov w5,wzr
7102e1c030  blr x8
7102e1c034  ldr x24,[x19]
7102e1c038  ldr x8,[x24, #0x38]
7102e1c03c  cbz x8,0x7102e1c060
7102e1c040  ldr x0,[x8, #0xa0]
7102e1c044  ldr x8,[x0]
7102e1c048  ldr x8,[x8, #0x68]
7102e1c04c  mov w1,#0x2
7102e1c050  add x3,sp,#0x170
7102e1c054  mov w2,wzr
7102e1c058  blr x8
7102e1c05c  ldr x24,[x19]
7102e1c060  adrp x8,0x7104467000
7102e1c064  ldr q0,[x27]
7102e1c068  ldr q1,[x8, #0x560]
7102e1c06c  mov w8,#0x40a00000
7102e1c070  str x8,[sp, #0x110]
7102e1c074  stp q1,q0,[sp, #0xf0]
7102e1c078  ldr x8,[x24, #0x38]
7102e1c07c  cbz x8,0x7102e1c0a8
7102e1c080  ldr x0,[x8, #0x130]
7102e1c084  ldr x8,[x0]
7102e1c088  ldr x8,[x8, #0x100]
7102e1c08c  add x2,sp,#0xf0
7102e1c090  mov w1,wzr
7102e1c094  mov w3,wzr
7102e1c098  mov w4,wzr
7102e1c09c  mov w5,wzr
7102e1c0a0  blr x8
7102e1c0a4  ldr x24,[x19]
7102e1c0a8  ldr x8,[x24, #0x38]
7102e1c0ac  cbz x8,0x7102e1c0d0
7102e1c0b0  ldr x0,[x8, #0xa0]
7102e1c0b4  ldr x8,[x0]
7102e1c0b8  ldr x8,[x8, #0x68]
7102e1c0bc  orr w1,wzr,#0x3
7102e1c0c0  add x3,sp,#0x170
7102e1c0c4  mov w2,wzr
7102e1c0c8  blr x8
7102e1c0cc  ldr x24,[x19]
7102e1c0d0  adrp x8,0x7104465000
7102e1c0d4  ldr q0,[x27]
7102e1c0d8  ldr q1,[x8, #0xe70]
7102e1c0dc  mov w8,#0x40a00000
7102e1c0e0  str x8,[sp, #0x110]
7102e1c0e4  stp q1,q0,[sp, #0xf0]
7102e1c0e8  ldr x8,[x24, #0x38]
7102e1c0ec  cbz x8,0x7102e1c118
7102e1c0f0  ldr x0,[x8, #0x130]
7102e1c0f4  ldr x8,[x0]
7102e1c0f8  ldr x8,[x8, #0x100]
7102e1c0fc  add x2,sp,#0xf0
7102e1c100  mov w1,wzr
7102e1c104  mov w3,wzr
7102e1c108  mov w4,wzr
7102e1c10c  mov w5,wzr
7102e1c110  blr x8
7102e1c114  ldr x24,[x19]
7102e1c118  ldr x8,[x24, #0x38]
7102e1c11c  cbz x8,0x7102e1c140
7102e1c120  ldr x0,[x8, #0xa0]
7102e1c124  ldr x8,[x0]
7102e1c128  ldr x8,[x8, #0x68]
7102e1c12c  mov w1,#0x4
7102e1c130  add x3,sp,#0x170
7102e1c134  mov w2,wzr
7102e1c138  blr x8
7102e1c13c  ldr x24,[x19]
7102e1c140  ldrb w8,[x24, #0x40]
7102e1c144  cbz w8,0x7102e1c194
7102e1c148  ldr x20,[x24, #0x30]
7102e1c14c  cbz x20,0x7102e1c184
7102e1c150  ldrb w8,[x20, #0x10]
7102e1c154  cbz w8,0x7102e1c184
7102e1c158  ldrb w8,[x20, #0x50]
7102e1c15c  strb wzr,[x20, #0x10]
7102e1c160  cbz w8,0x7102e1c184
7102e1c164  ldr x8,[x20]
7102e1c168  ldr w0,[x8, #0x8]
7102e1c16c  bl 0x71003ac560
7102e1c170  ldr x8,[x0]
7102e1c174  ldr x8,[x8, #0x48]
7102e1c178  mov w1,wzr
7102e1c17c  blr x8
7102e1c180  strb wzr,[x20, #0x50]
7102e1c184  ldr x8,[x24]
7102e1c188  ldr x8,[x8, #0x30]
7102e1c18c  mov x0,x24
7102e1c190  blr x8
7102e1c194  strb wzr,[x24, #0x40]
7102e1c198  ldr x8,[x19]
7102e1c19c  ldr x8,[x8, #0x38]
7102e1c1a0  cbz x8,0x7102e1c1c0
7102e1c1a4  ldr x0,[x8, #0x130]
7102e1c1a8  ldr x8,[x0]
7102e1c1ac  ldr x8,[x8, #0x178]
7102e1c1b0  mov w3,#0x1
7102e1c1b4  mov x1,x23
7102e1c1b8  mov x2,x23
7102e1c1bc  blr x8
7102e1c1c0  adrp x8,0x7104468000
7102e1c1c4  ldr q0,[x8, #0x8f0]
7102e1c1c8  adrp x8,0x7104468000
7102e1c1cc  str q0,[sp, #0x170]
7102e1c1d0  ldr q0,[x8, #0xe40]
7102e1c1d4  adrp x8,0x7104469000
7102e1c1d8  mov w1,#0x68
7102e1c1dc  str q0,[sp, #0xf0]
7102e1c1e0  ldr q0,[x8, #0xa10]
7102e1c1e4  adrp x8,0x7104468000
7102e1c1e8  ldr q1,[x8, #0x5b0]
7102e1c1ec  mov w8,#0x41100000
7102e1c1f0  mov w0,#0x10
7102e1c1f4  str x25,[sp, #0x190]
7102e1c1f8  str q0,[sp, #0x180]
7102e1c1fc  str q1,[sp, #0x100]
7102e1c200  ldr q1,[x27]
7102e1c204  str x25,[sp, #0x110]
7102e1c208  stur x8,[x29, #-0xa0]
7102e1c20c  stp q0,q1,[x29, #-0xc0]
7102e1c210  bl 0x710392e290
7102e1c214  mov x24,x0
7102e1c218  cbnz x0,0x7102e1c264
7102e1c21c  adrp x8,0x7105332000
7102e1c220  ldr x0,[x8, #0xf00]
7102e1c224  cbz x0,0x7102e1c260
7102e1c228  mov w8,#0x68
7102e1c22c  str wzr,[sp, #0x168]
7102e1c230  add x1,sp,#0x168
7102e1c234  stur x8,[x29, #-0x88]
7102e1c238  ldr x8,[x0]
7102e1c23c  ldr x8,[x8, #0x30]
7102e1c240  sub x2,x29,#0x88
7102e1c244  blr x8
7102e1c248  tbz w0,#0x0,0x7102e1c260
7102e1c24c  mov w1,#0x68
7102e1c250  mov w0,#0x10
7102e1c254  bl 0x710392e290
7102e1c258  mov x24,x0
7102e1c25c  cbnz x0,0x7102e1c264
7102e1c260  mov x24,xzr
7102e1c264  ldr x1,[x28]
7102e1c268  mov w19,#0x1
7102e1c26c  mov x8,#0x100000001
7102e1c270  stp x19,x8,[x29, #-0x88]
7102e1c274  mov x8,#0x1
7102e1c278  movk x8,#0x10, LSL #32
7102e1c27c  sub x2,x29,#0x88
7102e1c280  mov x0,x24
7102e1c284  stur x8,[x29, #-0x78]
7102e1c288  bl 0x710313e6a0
7102e1c28c  adrp x8,0x7105178000
7102e1c290  add x8,x8,#0xa88
7102e1c294  str w19,[x24, #0x44]
7102e1c298  strb w19,[x24, #0x5c]
7102e1c29c  mov x19,x28
7102e1c2a0  str x8,[x24]
7102e1c2a4  strh wzr,[x24, #0x48]
7102e1c2a8  stur xzr,[x24, #0x54]
7102e1c2ac  stur xzr,[x24, #0x4c]
7102e1c2b0  strb wzr,[x24, #0x60]
7102e1c2b4  str x24,[x19, #0x30]!
7102e1c2b8  ldr x8,[x24, #0x38]
7102e1c2bc  cbz x8,0x7102e1c2e8
7102e1c2c0  ldr x0,[x8, #0x130]
7102e1c2c4  ldr x8,[x0]
7102e1c2c8  ldr x8,[x8, #0x58]
7102e1c2cc  add x2,sp,#0x170
7102e1c2d0  mov w1,wzr
7102e1c2d4  mov w3,wzr
7102e1c2d8  mov w4,wzr
7102e1c2dc  mov w5,wzr
7102e1c2e0  blr x8
7102e1c2e4  ldr x24,[x19]
7102e1c2e8  ldr x8,[x24, #0x38]
7102e1c2ec  cbz x8,0x7102e1c318
7102e1c2f0  ldr x0,[x8, #0x130]
7102e1c2f4  ldr x8,[x0]
7102e1c2f8  ldr x8,[x8, #0x58]
7102e1c2fc  add x2,sp,#0xf0
7102e1c300  mov w3,#0x1
7102e1c304  mov w1,wzr
7102e1c308  mov w4,wzr
7102e1c30c  mov w5,wzr
7102e1c310  blr x8
7102e1c314  ldr x24,[x19]
7102e1c318  ldr x8,[x24, #0x38]
7102e1c31c  cbz x8,0x7102e1c348
7102e1c320  ldr x0,[x8, #0x130]
7102e1c324  ldr x8,[x0]
7102e1c328  ldr x8,[x8, #0x58]
7102e1c32c  sub x2,x29,#0xc0
7102e1c330  mov w3,#0x2
7102e1c334  mov w1,wzr
7102e1c338  mov w4,wzr
7102e1c33c  mov w5,wzr
7102e1c340  blr x8
7102e1c344  ldr x24,[x19]
7102e1c348  ldrb w8,[x24, #0x40]
7102e1c34c  cbz w8,0x7102e1c39c
7102e1c350  ldr x20,[x24, #0x30]
7102e1c354  cbz x20,0x7102e1c38c
7102e1c358  ldrb w8,[x20, #0x10]
7102e1c35c  cbz w8,0x7102e1c38c
7102e1c360  ldrb w8,[x20, #0x50]
7102e1c364  strb wzr,[x20, #0x10]
7102e1c368  cbz w8,0x7102e1c38c
7102e1c36c  ldr x8,[x20]
7102e1c370  ldr w0,[x8, #0x8]
7102e1c374  bl 0x71003ac560
7102e1c378  ldr x8,[x0]
7102e1c37c  ldr x8,[x8, #0x48]
7102e1c380  mov w1,wzr
7102e1c384  blr x8
7102e1c388  strb wzr,[x20, #0x50]
7102e1c38c  ldr x8,[x24]
7102e1c390  ldr x8,[x8, #0x30]
7102e1c394  mov x0,x24
7102e1c398  blr x8
7102e1c39c  strb wzr,[x24, #0x40]
7102e1c3a0  ldr x8,[x19]
7102e1c3a4  ldr x8,[x8, #0x38]
7102e1c3a8  cbz x8,0x7102e1c3c8
7102e1c3ac  ldr x0,[x8, #0x130]
7102e1c3b0  ldr x8,[x0]
7102e1c3b4  ldr x8,[x8, #0x168]
7102e1c3b8  mov w3,#0x1
7102e1c3bc  mov x1,x23
7102e1c3c0  mov x2,x23
7102e1c3c4  blr x8
7102e1c3c8  ldrsw x8,[x28, #0x44]
7102e1c3cc  adrp x19,0x7104471000
7102e1c3d0  add x19,x19,#0x340
7102e1c3d4  fmov s1,0xc1200000
7102e1c3d8  mov w1,#0x50
7102e1c3dc  lsl x8,x8,#0x4
7102e1c3e0  ldr s0,[x19,x8]
7102e1c3e4  fadd s1,s0,s1
7102e1c3e8  mov w0,#0x10
7102e1c3ec  str q1,[sp, #0xa0]
7102e1c3f0  fmov s1,0x41200000
7102e1c3f4  fadd s0,s0,s1
7102e1c3f8  str q0,[sp, #0xb0]
7102e1c3fc  bl 0x710392e290
7102e1c400  mov x24,x0
7102e1c404  cbnz x0,0x7102e1c450
7102e1c408  adrp x8,0x7105332000
7102e1c40c  ldr x0,[x8, #0xf00]
7102e1c410  cbz x0,0x7102e1c44c
7102e1c414  mov w8,#0x50
7102e1c418  str wzr,[sp, #0xf0]
7102e1c41c  add x1,sp,#0xf0
7102e1c420  str x8,[sp, #0x170]
7102e1c424  ldr x8,[x0]
7102e1c428  ldr x8,[x8, #0x30]
7102e1c42c  add x2,sp,#0x170
7102e1c430  blr x8
7102e1c434  tbz w0,#0x0,0x7102e1c44c
7102e1c438  mov w1,#0x50
7102e1c43c  mov w0,#0x10
7102e1c440  bl 0x710392e290
7102e1c444  mov x24,x0
7102e1c448  cbnz x0,0x7102e1c450
7102e1c44c  mov x24,xzr
7102e1c450  movi v0.2D,#0x0
7102e1c454  mov v1.16B,v0.16B
7102e1c458  ldr x1,[x28]
7102e1c45c  ldp q0,q2,[sp, #0xa0]
7102e1c460  str x1,[x24]
7102e1c464  strb wzr,[x24, #0xa]
7102e1c468  mov w8,#0x1
7102e1c46c  stp xzr,xzr,[x24, #0x30]
7102e1c470  strh w8,[x24, #0x8]
7102e1c474  mov v1.S[0x0],v0.S[0x0]
7102e1c478  fmov s0,0x41f00000
7102e1c47c  mov v2.S[0x1],v0.S[0x0]
7102e1c480  fmov s0,wzr
7102e1c484  mov v2.S[0x2],v0.S[0x0]
7102e1c488  str w22,[x24, #0xc]
7102e1c48c  mov v2.S[0x3],v0.S[0x0]
7102e1c490  str w8,[x24, #0x40]
7102e1c494  stp q1,q2,[x24, #0x10]
7102e1c498  adrp x20,0x710532a000
7102e1c49c  ldr x8,[x20, #0x9d8]
7102e1c4a0  ldr x8,[x8]
7102e1c4a4  ldr x0,[x8, #0x1c8]
7102e1c4a8  mov x2,x24
7102e1c4ac  bl 0x71031675b0
7102e1c4b0  and w8,w0,#0x1
7102e1c4b4  strb w8,[x24, #0x8]
7102e1c4b8  ldr x23,[x28, #0x38]
7102e1c4bc  str x24,[x28, #0x38]
7102e1c4c0  cbz x23,0x7102e1c544
7102e1c4c4  adrp x8,0x71052b6000
7102e1c4c8  ldr x8,[x8, #0xfd8]
7102e1c4cc  ldrb w9,[x8, #0x9]
7102e1c4d0  cbz w9,0x7102e1c524
7102e1c4d4  ldrb w9,[x23, #0xa]
7102e1c4d8  cbz w9,0x7102e1c524
7102e1c4dc  ldrb w9,[x23, #0x9]
7102e1c4e0  cbz w9,0x7102e1c520
7102e1c4e4  ldrsw x9,[x23, #0xc]
7102e1c4e8  cmp w9,#0x37
7102e1c4ec  b.hi 0x7102e1c518
7102e1c4f0  ldr x8,[x8]
7102e1c4f4  ldr x8,[x8, #0xc0]
7102e1c4f8  add x9,x8,x9
7102e1c4fc  ldrb w10,[x9, #0x464]
7102e1c500  cbz w10,0x7102e1c518
7102e1c504  add x9,x9,#0x464
7102e1c508  strb wzr,[x9]
7102e1c50c  ldr w9,[x8]
7102e1c510  sub w9,w9,#0x1
7102e1c514  str w9,[x8]
7102e1c518  str w22,[x23, #0xc]
7102e1c51c  strb wzr,[x23, #0x9]
7102e1c520  strb wzr,[x23, #0xa]
7102e1c524  ldr x8,[x20, #0x9d8]
7102e1c528  ldr x8,[x8]
7102e1c52c  ldr x0,[x8, #0x1c8]
7102e1c530  ldr x1,[x23]
7102e1c534  mov x2,x23
7102e1c538  bl 0x71031676c0
7102e1c53c  mov x0,x23
7102e1c540  bl 0x710392eb40
7102e1c544  ldr q0,[x28, #0x80]
7102e1c548  movi d1,#0x0
7102e1c54c  ldr x8,[x28]
7102e1c550  mov v0.D[0x1],v1.D[0x0]
7102e1c554  ldrsw x10,[x28, #0x44]
7102e1c558  str q0,[sp, #0x170]
7102e1c55c  ldr x8,[x8, #0x1370]
7102e1c560  fmov s8,wzr
7102e1c564  adrp x9,0x710513f000
7102e1c568  add x9,x9,#0xc40
7102e1c56c  ldr x2,[x9, x10, LSL #0x3]
7102e1c570  ldp x0,x1,[x8]
7102e1c574  mov v0.16B,v8.16B
7102e1c578  add x3,sp,#0x170
7102e1c57c  bl 0x71025f51e0
7102e1c580  str xzr,[sp, #0x170]
7102e1c584  ldr x8,[x28]
7102e1c588  ldr x8,[x8, #0x338]
7102e1c58c  ldr x8,[x8]
7102e1c590  ldr x0,[x8, #0x8]
7102e1c594  cbz x0,0x7102e1c5a8
7102e1c598  add x1,sp,#0x170
7102e1c59c  mov w2,wzr
7102e1c5a0  bl 0x7102405040
7102e1c5a4  b 0x7102e1c5ac
7102e1c5a8  mov w0,#0xffffffff
7102e1c5ac  ldur x15,[x29, #-0x58]
7102e1c5b0  ldr x22,[x28, #0x10]
7102e1c5b4  str w0,[x28, #0x40]
7102e1c5b8  cbz x22,0x7102e1c678
7102e1c5bc  ldp x8,x9,[x22]
7102e1c5c0  sub x9,x9,x8
7102e1c5c4  lsr x9,x9,#0x3
7102e1c5c8  cbz w9,0x7102e1c640
7102e1c5cc  fmov s8,wzr
7102e1c5d0  fmov s0,0x3f000000
7102e1c5d4  mov w10,wzr
7102e1c5d8  mov w12,wzr
7102e1c5dc  mov x11,x8
7102e1c5e0  cmp w10,w12
7102e1c5e4  b.eq 0x7102e1c5f8
7102e1c5e8  add w12,w12,#0x1
7102e1c5ec  add x11,x11,#0x8
7102e1c5f0  cmp w10,w12
7102e1c5f4  b.ne 0x7102e1c5e8
7102e1c5f8  ldr x11,[x11]
7102e1c5fc  ldr x11,[x11, #0x8]
7102e1c600  ldr x12,[x11, #0x80]!
7102e1c604  cmp x11,x12
7102e1c608  b.eq 0x7102e1c634
7102e1c60c  ldp x13,x14,[x12, #0x88]
7102e1c610  ldr x12,[x12]
7102e1c614  ldr s1,[x13, #0x14]
7102e1c618  ldr s2,[x14, #0x14]
7102e1c61c  fadd s1,s1,s2
7102e1c620  fmul s1,s1,s0
7102e1c624  fcmp s8,s1
7102e1c628  fcsel s8,s1,s8,mi
7102e1c62c  cmp x11,x12
7102e1c630  b.ne 0x7102e1c60c
7102e1c634  add w10,w10,#0x1
7102e1c638  cmp w10,w9
7102e1c63c  b.ne 0x7102e1c5d8
7102e1c640  ldrsw x8,[x28, #0x44]
7102e1c644  ldr q0,[x19,x8, lsl #4]
7102e1c648  ldr x8,[sp, #0x10]
7102e1c64c  ldr x8,[x8, #0x308]
7102e1c650  ldr s2,[x8, #0x100]
7102e1c654  dup s1,v0.S[0x1]
7102e1c658  fadd s1,s8,s1
7102e1c65c  fsub s1,s2,s1
7102e1c660  ldr s2,[x15, #0xb3c]
7102e1c664  fadd s1,s1,s2
7102e1c668  str s1,[x28, #0x94]
7102e1c66c  ldrb w8,[x15, #0xb40]
7102e1c670  strb w8,[x28, #0x91]
7102e1c674  b 0x7102e1c680
7102e1c678  ldrsw x8,[x28, #0x44]
7102e1c67c  ldr q0,[x19,x8, lsl #4]
7102e1c680  adrp x8,0x7104465000
7102e1c684  ldr q1,[x8, #0xe80]
7102e1c688  add x8,x28,#0x98
7102e1c68c  fadd v0.4S,v0.4S,v1.4S
7102e1c690  ldr q1,[sp, #0xe0]
7102e1c694  st1 {v0.S}[1],[x8]
7102e1c698  ldr x19,[x28, #0x8]
7102e1c69c  fmov s7,0x3f800000
7102e1c6a0  str q1,[sp, #0xf0]
7102e1c6a4  ldr q1,[sp, #0xd0]
7102e1c6a8  str q1,[sp, #0x100]
7102e1c6ac  ldr q1,[sp, #0xc0]
7102e1c6b0  str q1,[sp, #0x110]
7102e1c6b4  mov v1.16B,v0.16B
7102e1c6b8  mov v1.S[0x3],v7.S[0x0]
7102e1c6bc  ext v0.16B,v1.16B,v0.16B,0xc
7102e1c6c0  ext v1.16B,v0.16B,v1.16B,0x4
7102e1c6c4  ext v0.16B,v0.16B,v0.16B,0x8
7102e1c6c8  ext v0.16B,v1.16B,v0.16B,0xc
7102e1c6cc  str q0,[sp, #0x120]
7102e1c6d0  cbz x19,0x7102e1c760
7102e1c6d4  ldr x0,[x19, #0x90]
7102e1c6d8  ldr x8,[x0]
7102e1c6dc  ldr x8,[x8, #0x148]
7102e1c6e0  add x1,sp,#0xf0
7102e1c6e4  blr x8
7102e1c6e8  ldr x19,[x19, #0xd8]
7102e1c6ec  fmov s7,0x3f800000
7102e1c6f0  cbz x19,0x7102e1c760
7102e1c6f4  ldr x8,[sp, #0x108]
7102e1c6f8  str x8,[sp, #0x188]
7102e1c6fc  ldr x8,[sp, #0x100]
7102e1c700  str x8,[sp, #0x180]
7102e1c704  ldr x8,[sp, #0xf8]
7102e1c708  str x8,[sp, #0x178]
7102e1c70c  ldr x8,[sp, #0xf0]
7102e1c710  str x8,[sp, #0x170]
7102e1c714  ldr x8,[sp, #0x128]
7102e1c718  str x8,[sp, #0x1a8]
7102e1c71c  ldr x8,[sp, #0x120]
7102e1c720  str x8,[sp, #0x1a0]
7102e1c724  ldr x8,[sp, #0x118]
7102e1c728  str x8,[sp, #0x198]
7102e1c72c  ldr x8,[sp, #0x110]
7102e1c730  str x8,[sp, #0x190]
7102e1c734  ldr x8,[x19, #0x8]
7102e1c738  ldrb w9,[x8, #0xa8]
7102e1c73c  cbz w9,0x7102e1c758
7102e1c740  ldr x0,[x8, #0x48]
7102e1c744  ldr x8,[x0]
7102e1c748  ldr x8,[x8, #0x20]
7102e1c74c  add x1,sp,#0x170
7102e1c750  blr x8
7102e1c754  fmov s7,0x3f800000
7102e1c758  mov w8,#0x1
7102e1c75c  strb w8,[x19, #0x20]
7102e1c760  cbz x22,0x7102e1c850
7102e1c764  ldp x8,x9,[x22]
7102e1c768  cmp x8,x9
7102e1c76c  b.eq 0x7102e1c850
7102e1c770  ldr q0,[sp, #0x120]
7102e1c774  mov v1.16B,v0.16B
7102e1c778  movi d2,#0x0
7102e1c77c  mov v1.D[0x1],v2.D[0x0]
7102e1c780  adrp x11,0x7104472000
7102e1c784  dup s2,v0.S[0x1]
7102e1c788  ldr s3,[x11, #0x970]
7102e1c78c  fmov s4,0xbf800000
7102e1c790  mov w10,#0x1
7102e1c794  ldr x11,[x8]
7102e1c798  ldr x13,[x11, #0x8]
7102e1c79c  ldrb w14,[x13, #0xe7]
7102e1c7a0  ldrb w13,[x13, #0xe8]
7102e1c7a4  ldrb w12,[x11, #0x128]
7102e1c7a8  cmp w12,#0x0
7102e1c7ac  orr w13,w13,w14
7102e1c7b0  and w12,w13,#0xff
7102e1c7b4  ccmp w12,#0x0,#0x0,ne
7102e1c7b8  b.eq 0x7102e1c7c4
7102e1c7bc  strb w10,[x11, #0x129]
7102e1c7c0  b 0x7102e1c7e8
7102e1c7c4  ldr q5,[x11, #0x10]
7102e1c7c8  fabd s6,s5,s0
7102e1c7cc  fcmp s6,s3
7102e1c7d0  b.gt 0x7102e1c7e4
7102e1c7d4  dup s5,v5.S[0x1]
7102e1c7d8  fabd s5,s5,s2
7102e1c7dc  fcmp s5,s3
7102e1c7e0  b.le 0x7102e1c7ec
7102e1c7e4  strb w10,[x11, #0x12a]
7102e1c7e8  str q1,[x11, #0x10]
7102e1c7ec  ldr s5,[x11, #0x30]
7102e1c7f0  fabs s5,s5
7102e1c7f4  fcmp s5,s3
7102e1c7f8  b.mi 0x7102e1c804
7102e1c7fc  str wzr,[x11, #0x30]
7102e1c800  strb w10,[x11, #0x129]
7102e1c804  ldr q5,[x11, #0x50]
7102e1c808  fadd s6,s5,s4
7102e1c80c  fabs s6,s6
7102e1c810  fcmp s6,s3
7102e1c814  b.mi 0x7102e1c824
7102e1c818  mov v5.S[0x0],v7.S[0x0]
7102e1c81c  strb w10,[x11, #0x129]
7102e1c820  str q5,[x11, #0x50]
7102e1c824  dup s6,v5.S[0x1]
7102e1c828  fadd s6,s6,s4
7102e1c82c  fabs s6,s6
7102e1c830  fcmp s6,s3
7102e1c834  b.mi 0x7102e1c844
7102e1c838  mov v5.S[0x1],v7.S[0x0]
7102e1c83c  strb w10,[x11, #0x129]
7102e1c840  str q5,[x11, #0x50]
7102e1c844  add x8,x8,#0x8
7102e1c848  cmp x9,x8
7102e1c84c  b.ne 0x7102e1c794
7102e1c850  ldp q0,q1,[sp, #0xf0]
7102e1c854  ldp q2,q3,[sp, #0x110]
7102e1c858  stp q0,q1,[x28, #0x50]
7102e1c85c  stp q2,q3,[x28, #0x70]
7102e1c860  str x28,[x21, #0x8]
7102e1c864  add sp,sp,#0x3d0
7102e1c868  ldp x29,x30,[sp, #0x60]
7102e1c86c  ldp x20,x19,[sp, #0x50]
7102e1c870  ldp x22,x21,[sp, #0x40]
7102e1c874  ldp x24,x23,[sp, #0x30]
7102e1c878  ldp x26,x25,[sp, #0x20]
7102e1c87c  ldp x28,x27,[sp, #0x10]
7102e1c880  ldr d8,[sp], #0x70
7102e1c884  ret
7102e1c888  str x10,[x20]
7102e1c88c  cbz x10,0x7102e1c8a0
7102e1c890  add x0,x10,#0x108
7102e1c894  strb wzr,[x10, #0x110]
7102e1c898  bl 0x71025e9d50
7102e1c89c  ldr x10,[x20]
7102e1c8a0  cbz x10,0x7102e1ac98
7102e1c8a4  ldrb w8,[x10, #0x118]
7102e1c8a8  orr w8,w8,#0x1
7102e1c8ac  strb w8,[x10, #0x118]
7102e1c8b0  b 0x7102e1ac98
