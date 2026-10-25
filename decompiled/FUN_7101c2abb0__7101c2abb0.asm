// addr:      7101c2abb0
// offset:    0x1c2abb0
// name:      FUN_7101c2abb0
// mangled:   
// size:      3268

7101c2abb0  sub sp,sp,#0xf0
7101c2abb4  str d8,[sp, #0x80]
7101c2abb8  stp x28,x27,[sp, #0x90]
7101c2abbc  stp x26,x25,[sp, #0xa0]
7101c2abc0  stp x24,x23,[sp, #0xb0]
7101c2abc4  stp x22,x21,[sp, #0xc0]
7101c2abc8  stp x20,x19,[sp, #0xd0]
7101c2abcc  stp x29,x30,[sp, #0xe0]
7101c2abd0  add x29,sp,#0xe0
7101c2abd4  adrp x8,0x71050ad000
7101c2abd8  add x8,x8,#0x280
7101c2abdc  mov x28,x1
7101c2abe0  stp x8,xzr,[x0]
7101c2abe4  orr x8,xzr,#0x1ffffffff
7101c2abe8  stp xzr,x8,[x0, #0x60]
7101c2abec  mov w8,#0x1
7101c2abf0  mov x20,x0
7101c2abf4  stp xzr,xzr,[x0, #0x10]
7101c2abf8  strb wzr,[x0, #0x58]
7101c2abfc  str x1,[x0, #0x78]
7101c2ac00  mov w1,#0xb0
7101c2ac04  strb w8,[x0, #0x70]
7101c2ac08  stp xzr,xzr,[x0, #0x48]
7101c2ac0c  mov w0,#0x10
7101c2ac10  bl 0x710392e290
7101c2ac14  mov x19,x0
7101c2ac18  cbnz x0,0x7101c2ac64
7101c2ac1c  adrp x8,0x7105332000
7101c2ac20  ldr x0,[x8, #0xf00]
7101c2ac24  cbz x0,0x7101c2ac60
7101c2ac28  mov w8,#0xb0
7101c2ac2c  str wzr,[sp, #0x70]
7101c2ac30  add x1,sp,#0x70
7101c2ac34  str x8,[sp, #0x20]
7101c2ac38  ldr x8,[x0]
7101c2ac3c  ldr x8,[x8, #0x30]
7101c2ac40  add x2,sp,#0x20
7101c2ac44  blr x8
7101c2ac48  tbz w0,#0x0,0x7101c2ac60
7101c2ac4c  mov w1,#0xb0
7101c2ac50  mov w0,#0x10
7101c2ac54  bl 0x710392e290
7101c2ac58  mov x19,x0
7101c2ac5c  cbnz x0,0x7101c2ac64
7101c2ac60  mov x19,xzr
7101c2ac64  adrp x8,0x71050ad000
7101c2ac68  add x8,x8,#0x2b8
7101c2ac6c  adrp x9,0x71050ad000
7101c2ac70  add x9,x9,#0x198
7101c2ac74  mov x23,x19
7101c2ac78  str x8,[x19]
7101c2ac7c  mov w8,#0x1000
7101c2ac80  stp xzr,xzr,[x19, #0x8]
7101c2ac84  str x9,[x23, #0x18]!
7101c2ac88  str w8,[x19, #0x20]
7101c2ac8c  mov x8,x19
7101c2ac90  str xzr,[x19, #0x28]
7101c2ac94  stp xzr,xzr,[x19, #0x30]
7101c2ac98  mov w0,#0x10
7101c2ac9c  mov w1,#0x80
7101c2aca0  stp xzr,xzr,[x19, #0x50]
7101c2aca4  str xzr,[x8, #0x48]!
7101c2aca8  str x8,[x19, #0x40]
7101c2acac  str x28,[x19, #0x60]
7101c2acb0  bl 0x710392e290
7101c2acb4  cbnz x0,0x7101c2acfc
7101c2acb8  adrp x8,0x7105332000
7101c2acbc  ldr x0,[x8, #0xf00]
7101c2acc0  cbz x0,0x7101c2acf8
7101c2acc4  mov w8,#0x80
7101c2acc8  str wzr,[sp, #0x70]
7101c2accc  add x1,sp,#0x70
7101c2acd0  str x8,[sp, #0x20]
7101c2acd4  ldr x8,[x0]
7101c2acd8  ldr x8,[x8, #0x30]
7101c2acdc  add x2,sp,#0x20
7101c2ace0  blr x8
7101c2ace4  tbz w0,#0x0,0x7101c2acf8
7101c2ace8  mov w0,#0x10
7101c2acec  mov w1,#0x80
7101c2acf0  bl 0x710392e290
7101c2acf4  cbnz x0,0x7101c2acfc
7101c2acf8  mov x0,xzr
7101c2acfc  adrp x8,0x7105181000
7101c2ad00  add x8,x8,#0xb40
7101c2ad04  str x8,[x0]
7101c2ad08  mov x8,x0
7101c2ad0c  mov x9,x0
7101c2ad10  mov x24,#-0x1
7101c2ad14  str xzr,[x8, #0x10]!
7101c2ad18  str x8,[x0, #0x8]
7101c2ad1c  mov x8,x0
7101c2ad20  mov x25,x19
7101c2ad24  str xzr,[x9, #0x28]!
7101c2ad28  stp xzr,x9,[x0, #0x18]
7101c2ad2c  mov x1,#0x4f97
7101c2ad30  movk x1,#0x5678, LSL #16
7101c2ad34  movk x1,#0xd, LSL #32
7101c2ad38  str xzr,[x8, #0x40]!
7101c2ad3c  stp xzr,x8,[x0, #0x30]
7101c2ad40  mov x8,x0
7101c2ad44  str xzr,[x8, #0x58]!
7101c2ad48  stp xzr,x8,[x0, #0x48]
7101c2ad4c  mov w8,#0x2
7101c2ad50  str xzr,[x0, #0x60]
7101c2ad54  str w8,[x0, #0x68]
7101c2ad58  adrp x8,0x710532f000
7101c2ad5c  str wzr,[x0, #0x78]
7101c2ad60  str xzr,[x0, #0x70]
7101c2ad64  str x24,[x25, #0x88]!
7101c2ad68  str x24,[x25, #0x8]
7101c2ad6c  stp xzr,xzr,[x25, #-0x10]
7101c2ad70  stp x0,xzr,[x25, #-0x20]
7101c2ad74  ldr x26,[x8, #0x730]
7101c2ad78  cbz x26,0x7101c2ae30
7101c2ad7c  ldr x27,[x26, #0x8]
7101c2ad80  ldr x22,[x27, #0x178]
7101c2ad84  ldr x0,[x22, #0x8]
7101c2ad88  bl 0x71032b23e0
7101c2ad8c  mov x21,x0
7101c2ad90  mov x0,x22
7101c2ad94  mov x1,x21
7101c2ad98  bl 0x71032b1e40
7101c2ad9c  tbnz w0,#0x1f,0x7101c2adc8
7101c2ada0  ldr x0,[x27, #0x178]
7101c2ada4  mov x1,x21
7101c2ada8  bl 0x71032b1e40
7101c2adac  lsr w9,w0,#0x5
7101c2adb0  lsl x9,x9,#0x2
7101c2adb4  mov w8,#0x1
7101c2adb8  ldr w10,[x25, x9, LSL #0x0]
7101c2adbc  lsl w8,w8,w0
7101c2adc0  bic w8,w10,w8
7101c2adc4  str w8,[x25, x9, LSL #0x0]
7101c2adc8  mov x25,x19
7101c2adcc  mov x1,#0x4f97
7101c2add0  movk x1,#0x5678, LSL #16
7101c2add4  str x24,[x25, #0x98]!
7101c2add8  str x24,[x25, #0x8]
7101c2addc  ldr x24,[x26, #0x8]
7101c2ade0  ldr x22,[x24, #0x178]
7101c2ade4  ldr x0,[x22, #0x8]
7101c2ade8  movk x1,#0xd, LSL #32
7101c2adec  bl 0x71032b23e0
7101c2adf0  mov x21,x0
7101c2adf4  mov x0,x22
7101c2adf8  mov x1,x21
7101c2adfc  bl 0x71032b1e40
7101c2ae00  tbnz w0,#0x1f,0x7101c2ae34
7101c2ae04  ldr x0,[x24, #0x178]
7101c2ae08  mov x1,x21
7101c2ae0c  bl 0x71032b1e40
7101c2ae10  lsr w9,w0,#0x5
7101c2ae14  lsl x9,x9,#0x2
7101c2ae18  mov w8,#0x1
7101c2ae1c  ldr w10,[x25, x9, LSL #0x0]
7101c2ae20  lsl w8,w8,w0
7101c2ae24  bic w8,w10,w8
7101c2ae28  str w8,[x25, x9, LSL #0x0]
7101c2ae2c  b 0x7101c2ae34
7101c2ae30  stp x24,x24,[x19, #0x98]
7101c2ae34  mov w8,#0x1
7101c2ae38  mov x21,#0x19d5
7101c2ae3c  movk x21,#0xa941, LSL #16
7101c2ae40  add x0,sp,#0x20
7101c2ae44  strb w8,[x19, #0xa8]
7101c2ae48  movk x21,#0x2e, LSL #32
7101c2ae4c  stp x23,x19,[x20, #0x80]
7101c2ae50  bl 0x7101c2a4b0
7101c2ae54  ldp x9,x8,[sp, #0x20]
7101c2ae58  ldr x0,[x20, #0x80]
7101c2ae5c  sub x8,x8,x9
7101c2ae60  lsr x8,x8,#0x3
7101c2ae64  cmp w8,#0x6e
7101c2ae68  b.gt 0x7101c2ae7c
7101c2ae6c  mov x8,#0xec63
7101c2ae70  movk x8,#0x1277, LSL #16
7101c2ae74  movk x8,#0x2f, LSL #32
7101c2ae78  b 0x7101c2ae88
7101c2ae7c  mov x8,#0xa229
7101c2ae80  movk x8,#0xe952, LSL #16
7101c2ae84  movk x8,#0x32, LSL #32
7101c2ae88  add x9,sp,#0x60
7101c2ae8c  str x8,[sp, #0x60]
7101c2ae90  mov w8,#0x1
7101c2ae94  add x2,sp,#0x70
7101c2ae98  mov w4,#0x1
7101c2ae9c  mov x1,x28
7101c2aea0  mov x3,x21
7101c2aea4  stp x9,x8,[sp, #0x70]
7101c2aea8  bl 0x71032cb040
7101c2aeac  adrp x8,0x7105314000
7101c2aeb0  add x8,x8,#0x4d8
7101c2aeb4  ldr x27,[x20, #0x80]
7101c2aeb8  ldarb w8,[x8]
7101c2aebc  tbz w8,#0x0,0x7101c2b828
7101c2aec0  adrp x8,0x7105305000
7101c2aec4  ldr w8,[x8, #0xf0]
7101c2aec8  mov w11,#0x4090000
7101c2aecc  mov w9,#0x100a
7101c2aed0  mov w10,#0x14
7101c2aed4  movk w10,#0x50, LSL #16
7101c2aed8  cmp w8,w11
7101c2aedc  csel w8,w10,w9,eq
7101c2aee0  str w8,[x27, #0x8]
7101c2aee4  add x20,x27,#0x58
7101c2aee8  add x8,sp,#0x20
7101c2aeec  cmp x20,x8
7101c2aef0  b.eq 0x7101c2af00
7101c2aef4  ldp x1,x2,[sp, #0x20]
7101c2aef8  mov x0,x20
7101c2aefc  bl 0x7101684440
7101c2af00  ldr x8,[x27, #0x50]
7101c2af04  ldrb w9,[x8, #0x78]
7101c2af08  cbnz w9,0x7101c2af14
7101c2af0c  mov w9,#0x4
7101c2af10  str w9,[x8, #0x68]
7101c2af14  mov x0,x27
7101c2af18  ldr x8,[x0, #0x10]!
7101c2af1c  ldr x9,[x0, #0x8]
7101c2af20  cmp x9,x8
7101c2af24  b.eq 0x7101c2b870
7101c2af28  ldr x8,[x8]
7101c2af2c  ldr x8,[x8]
7101c2af30  ldr x8,[x8]
7101c2af34  add x22,x8,#0x8
7101c2af38  adrp x1,0x7104433000
7101c2af3c  add x1,x1,#0x3c
7101c2af40  add x8,sp,#0x70
7101c2af44  mov x0,x22
7101c2af48  bl 0x7103776640
7101c2af4c  fmov s8,0x3f800000
7101c2af50  ldr x19,[sp, #0x78]
7101c2af54  adrp x1,0x71043e0000
7101c2af58  add x1,x1,#0xba
7101c2af5c  mov v0.16B,v8.16B
7101c2af60  mov x0,x19
7101c2af64  bl 0x7103778300
7101c2af68  mov v0.16B,v8.16B
7101c2af6c  adrp x1,0x7104308000
7101c2af70  add x1,x1,#0x464
7101c2af74  mov x0,x19
7101c2af78  bl 0x7103778300
7101c2af7c  mov v0.16B,v8.16B
7101c2af80  adrp x1,0x7104431000
7101c2af84  add x1,x1,#0xcaa
7101c2af88  mov x0,x19
7101c2af8c  str x19,[sp, #0x8]
7101c2af90  bl 0x7103778300
7101c2af94  adrp x1,0x7104291000
7101c2af98  add x1,x1,#0xc29
7101c2af9c  add x8,sp,#0x60
7101c2afa0  add x0,sp,#0x70
7101c2afa4  bl 0x7103776910
7101c2afa8  ldr x0,[sp, #0x68]
7101c2afac  ldr x8,[x0]
7101c2afb0  cbz x8,0x7101c2afc0
7101c2afb4  ldrb w9,[x8, #0x58]
7101c2afb8  and w9,w9,#0xfe
7101c2afbc  strb w9,[x8, #0x58]
7101c2afc0  adrp x23,0x710523d000
7101c2afc4  add x23,x23,#0x9a8
7101c2afc8  str x20,[sp]
7101c2afcc  str x28,[sp, #0x10]
7101c2afd0  stp x23,xzr,[sp, #0x60]
7101c2afd4  cbz x0,0x7101c2afdc
7101c2afd8  bl 0x710392eb40
7101c2afdc  ldp x8,x9,[x27, #0x58]
7101c2afe0  adrp x11,0x710532f000
7101c2afe4  ldr x11,[x11, #0x730]
7101c2afe8  sub x8,x9,x8
7101c2afec  ldr x9,[x11, #0x8]
7101c2aff0  lsr x8,x8,#0x3
7101c2aff4  mov w10,#0x79
7101c2aff8  cmp w8,#0x79
7101c2affc  csel w8,w8,w10,lt
7101c2b000  mov x25,xzr
7101c2b004  adrp x19,0x7104422000
7101c2b008  add x19,x19,#0x362
7101c2b00c  adrp x21,0x710523d000
7101c2b010  add x21,x21,#0x988
7101c2b014  sxtw x26,w8
7101c2b018  str x9,[sp, #0x18]
7101c2b01c  add x8,sp,#0x60
7101c2b020  mov x0,x22
7101c2b024  mov x1,x19
7101c2b028  mov w2,w25
7101c2b02c  bl 0x7103776640
7101c2b030  cmp x25,x26
7101c2b034  b.ge 0x7101c2b120
7101c2b038  ldp x8,x9,[x27, #0x58]
7101c2b03c  sub x9,x9,x8
7101c2b040  asr x9,x9,#0x3
7101c2b044  cmp x9,x25
7101c2b048  b.ls 0x7101c2b868
7101c2b04c  ldr x20,[x8, x25, LSL #0x3]
7101c2b050  add x8,sp,#0x50
7101c2b054  add x0,sp,#0x60
7101c2b058  adrp x1,0x710433a000
7101c2b05c  add x1,x1,#0x8f0
7101c2b060  mov x28,x22
7101c2b064  bl 0x7103776910
7101c2b068  ldr x0,[x27, #0x48]
7101c2b06c  mov x1,x20
7101c2b070  mov w2,#0xd
7101c2b074  bl 0x710323f4a0
7101c2b078  ldr x22,[sp, #0x58]
7101c2b07c  mov x1,x0
7101c2b080  mov x0,x22
7101c2b084  bl 0x7103778b80
7101c2b088  mov x24,x23
7101c2b08c  stp x23,xzr,[sp, #0x50]
7101c2b090  cbz x22,0x7101c2b09c
7101c2b094  mov x0,x22
7101c2b098  bl 0x710392eb40
7101c2b09c  adrp x8,0x710532f000
7101c2b0a0  ldr x8,[x8, #0x730]
7101c2b0a4  ldr x8,[x8, #0x8]
7101c2b0a8  ldr x8,[x8, #0x178]
7101c2b0ac  ldr x22,[x8, #0x8]
7101c2b0b0  mov x1,#0x484c
7101c2b0b4  movk x1,#0x1f1e, LSL #16
7101c2b0b8  movk x1,#0xf, LSL #32
7101c2b0bc  mov x0,x22
7101c2b0c0  bl 0x71032b23e0
7101c2b0c4  tst x20,#0xffffffffff
7101c2b0c8  and x9,x20,#-0x100000000000000
7101c2b0cc  mov x11,#0x6900000000000000
7101c2b0d0  cset w8,ne
7101c2b0d4  cmp x9,x11
7101c2b0d8  cset w10,eq
7101c2b0dc  and w23,w10,w8
7101c2b0e0  and x8,x0,#0xffffffffff
7101c2b0e4  tbz w23,#0x0,0x7101c2b14c
7101c2b0e8  and x10,x0,#-0x100000000000000
7101c2b0ec  cmp x10,x11
7101c2b0f0  ccmp x8,#0x0,#0x4,eq
7101c2b0f4  b.eq 0x7101c2b150
7101c2b0f8  eor x8,x0,x20
7101c2b0fc  tst x8,#0xffffffffff
7101c2b100  b.eq 0x7101c2b228
7101c2b104  mov x1,#0x4f97
7101c2b108  movk x1,#0x5678, LSL #16
7101c2b10c  mov x0,x22
7101c2b110  movk x1,#0xd, LSL #32
7101c2b114  bl 0x71032b23e0
7101c2b118  and x8,x0,#0xffffffffff
7101c2b11c  b 0x7101c2b1a8
7101c2b120  ldr x20,[sp, #0x68]
7101c2b124  ldr x8,[x20, #0x8]
7101c2b128  cbz x8,0x7101c2b298
7101c2b12c  ldr x8,[x8, #0x18]
7101c2b130  cbz x8,0x7101c2b298
7101c2b134  ldrb w9,[x8, #0x58]
7101c2b138  and w9,w9,#0xfe
7101c2b13c  strb w9,[x8, #0x58]
7101c2b140  stp x21,xzr,[sp, #0x60]
7101c2b144  cbnz x20,0x7101c2b2a0
7101c2b148  b 0x7101c2b2b8
7101c2b14c  and x10,x0,#-0x100000000000000
7101c2b150  mov x12,#0x6900000000000000
7101c2b154  and x11,x20,#0xffffffffff
7101c2b158  cmp x9,x12
7101c2b15c  cset w9,eq
7101c2b160  cmp x11,#0x0
7101c2b164  cset w11,ne
7101c2b168  cmp x8,#0x0
7101c2b16c  cset w8,ne
7101c2b170  cmp x10,x12
7101c2b174  cset w10,eq
7101c2b178  and w9,w9,w11
7101c2b17c  and w8,w8,w10
7101c2b180  eor w8,w8,w9
7101c2b184  cmp w8,#0x1
7101c2b188  b.ne 0x7101c2b228
7101c2b18c  mov x1,#0x4f97
7101c2b190  movk x1,#0x5678, LSL #16
7101c2b194  mov x0,x22
7101c2b198  movk x1,#0xd, LSL #32
7101c2b19c  bl 0x71032b23e0
7101c2b1a0  and x8,x0,#0xffffffffff
7101c2b1a4  cbz w23,0x7101c2b1cc
7101c2b1a8  mov x10,#0x6900000000000000
7101c2b1ac  and x9,x0,#-0x100000000000000
7101c2b1b0  cmp x9,x10
7101c2b1b4  b.ne 0x7101c2b1dc
7101c2b1b8  cbz x8,0x7101c2b1dc
7101c2b1bc  eor x8,x0,x20
7101c2b1c0  tst x8,#0xffffffffff
7101c2b1c4  b.ne 0x7101c2b1fc
7101c2b1c8  b 0x7101c2b228
7101c2b1cc  cmp x8,#0x0
7101c2b1d0  and x9,x0,#-0x100000000000000
7101c2b1d4  mov x10,#0x6900000000000000
7101c2b1d8  b 0x7101c2b1e0
7101c2b1dc  cmp x8,#0x0
7101c2b1e0  cset w8,ne
7101c2b1e4  cmp x9,x10
7101c2b1e8  cset w9,eq
7101c2b1ec  and w8,w8,w9
7101c2b1f0  eor w8,w8,w23
7101c2b1f4  cmp w8,#0x1
7101c2b1f8  b.ne 0x7101c2b228
7101c2b1fc  orr w1,wzr,#0xc
7101c2b200  mov x0,x20
7101c2b204  bl 0x7103238c50
7101c2b208  tst x0,#0xffffffffff
7101c2b20c  str x0,[sp, #0x50]
7101c2b210  b.eq 0x7101c2b228
7101c2b214  ldr x0,[x27, #0x50]
7101c2b218  ldrsw x2,[x0, #0x70]
7101c2b21c  ldr w3,[x0, #0x68]
7101c2b220  add x1,sp,#0x50
7101c2b224  bl 0x710323c4e0
7101c2b228  orr w1,wzr,#0xe
7101c2b22c  mov x0,x20
7101c2b230  bl 0x7103238c50
7101c2b234  tst x0,#0xffffffffff
7101c2b238  str x0,[sp, #0x50]
7101c2b23c  b.eq 0x7101c2b254
7101c2b240  ldr x0,[x27, #0x50]
7101c2b244  ldrsw x2,[x0, #0x70]
7101c2b248  ldr w3,[x0, #0x68]
7101c2b24c  add x1,sp,#0x50
7101c2b250  bl 0x710323c4e0
7101c2b254  ldr x8,[sp, #0x18]
7101c2b258  ldr x0,[x8, #0x178]
7101c2b25c  mov x1,x20
7101c2b260  bl 0x71032b2de0
7101c2b264  mov w1,#0x11
7101c2b268  bl 0x7103238d60
7101c2b26c  tst x0,#0xffffffffff
7101c2b270  mov x23,x24
7101c2b274  mov x22,x28
7101c2b278  str x0,[sp, #0x50]
7101c2b27c  b.eq 0x7101c2b294
7101c2b280  ldr x0,[x27, #0x50]
7101c2b284  ldrsw x2,[x0, #0x70]
7101c2b288  ldr w3,[x0, #0x68]
7101c2b28c  add x1,sp,#0x50
7101c2b290  bl 0x710323c4e0
7101c2b294  ldr x20,[sp, #0x68]
7101c2b298  stp x21,xzr,[sp, #0x60]
7101c2b29c  cbz x20,0x7101c2b2b8
7101c2b2a0  ldr x0,[x20, #0x18]
7101c2b2a4  stp x23,xzr,[x20, #0x10]
7101c2b2a8  cbz x0,0x7101c2b2b0
7101c2b2ac  bl 0x710392eb40
7101c2b2b0  mov x0,x20
7101c2b2b4  bl 0x710392eb40
7101c2b2b8  add x25,x25,#0x1
7101c2b2bc  cmp x25,#0x79
7101c2b2c0  b.cc 0x7101c2b01c
7101c2b2c4  ldr x19,[x27, #0x40]
7101c2b2c8  mov w1,#0x28
7101c2b2cc  mov w0,#0x10
7101c2b2d0  bl 0x710392e290
7101c2b2d4  cbnz x0,0x7101c2b31c
7101c2b2d8  adrp x8,0x7105332000
7101c2b2dc  ldr x0,[x8, #0xf00]
7101c2b2e0  cbz x0,0x7101c2b318
7101c2b2e4  mov w8,#0x28
7101c2b2e8  str wzr,[sp, #0x50]
7101c2b2ec  add x1,sp,#0x50
7101c2b2f0  str x8,[sp, #0x60]
7101c2b2f4  ldr x8,[x0]
7101c2b2f8  ldr x8,[x8, #0x30]
7101c2b2fc  add x2,sp,#0x60
7101c2b300  blr x8
7101c2b304  tbz w0,#0x0,0x7101c2b318
7101c2b308  mov w1,#0x28
7101c2b30c  mov w0,#0x10
7101c2b310  bl 0x710392e290
7101c2b314  cbnz x0,0x7101c2b31c
7101c2b318  mov x0,xzr
7101c2b31c  adrp x8,0x71050ad000
7101c2b320  add x8,x8,#0x1e0
7101c2b324  adrp x9,0x7101c29000
7101c2b328  add x9,x9,#0x8e0
7101c2b32c  str x8,[x0]
7101c2b330  str xzr,[x0, #0x20]
7101c2b334  stp x27,x9,[x0, #0x10]
7101c2b338  adrp x1,0x710434a000
7101c2b33c  add x1,x1,#0x283
7101c2b340  str wzr,[x0, #0x8]
7101c2b344  add x2,sp,#0x50
7101c2b348  str x0,[sp, #0x50]
7101c2b34c  mov x0,x19
7101c2b350  bl 0x7103376af0
7101c2b354  ldr x0,[sp, #0x50]
7101c2b358  ldr x22,[sp, #0x10]
7101c2b35c  str xzr,[sp, #0x50]
7101c2b360  cbz x0,0x7101c2b370
7101c2b364  ldr x8,[x0]
7101c2b368  ldr x8,[x8, #0x8]
7101c2b36c  blr x8
7101c2b370  ldr x19,[x27, #0x40]
7101c2b374  mov w0,#0x10
7101c2b378  orr w1,wzr,#0x38
7101c2b37c  bl 0x710392e290
7101c2b380  cbnz x0,0x7101c2b3c8
7101c2b384  adrp x8,0x7105332000
7101c2b388  ldr x0,[x8, #0xf00]
7101c2b38c  cbz x0,0x7101c2b3c4
7101c2b390  orr w8,wzr,#0x38
7101c2b394  str wzr,[sp, #0x48]
7101c2b398  add x1,sp,#0x48
7101c2b39c  str x8,[sp, #0x60]
7101c2b3a0  ldr x8,[x0]
7101c2b3a4  ldr x8,[x8, #0x30]
7101c2b3a8  add x2,sp,#0x60
7101c2b3ac  blr x8
7101c2b3b0  tbz w0,#0x0,0x7101c2b3c4
7101c2b3b4  mov w0,#0x10
7101c2b3b8  orr w1,wzr,#0x38
7101c2b3bc  bl 0x710392e290
7101c2b3c0  cbnz x0,0x7101c2b3c8
7101c2b3c4  mov x0,xzr
7101c2b3c8  adrp x8,0x71050ad000
7101c2b3cc  add x8,x8,#0x208
7101c2b3d0  str x27,[x0, #0x10]
7101c2b3d4  str x8,[x0]
7101c2b3d8  adrp x8,0x7101c29000
7101c2b3dc  add x8,x8,#0xd70
7101c2b3e0  stp x8,xzr,[x0, #0x18]
7101c2b3e4  mov w8,#0x1
7101c2b3e8  stp xzr,xzr,[x0, #0x28]
7101c2b3ec  adrp x1,0x710439d000
7101c2b3f0  add x1,x1,#0x3c9
7101c2b3f4  add x2,sp,#0x48
7101c2b3f8  str w8,[x0, #0x8]
7101c2b3fc  str x0,[sp, #0x48]
7101c2b400  mov x0,x19
7101c2b404  bl 0x7103376af0
7101c2b408  ldr x0,[sp, #0x48]
7101c2b40c  str xzr,[sp, #0x48]
7101c2b410  cbz x0,0x7101c2b420
7101c2b414  ldr x8,[x0]
7101c2b418  ldr x8,[x8, #0x8]
7101c2b41c  blr x8
7101c2b420  ldr x19,[x27, #0x40]
7101c2b424  mov w0,#0x10
7101c2b428  orr w1,wzr,#0x38
7101c2b42c  bl 0x710392e290
7101c2b430  cbnz x0,0x7101c2b478
7101c2b434  adrp x8,0x7105332000
7101c2b438  ldr x0,[x8, #0xf00]
7101c2b43c  cbz x0,0x7101c2b474
7101c2b440  orr w8,wzr,#0x38
7101c2b444  str wzr,[sp, #0x40]
7101c2b448  add x1,sp,#0x40
7101c2b44c  str x8,[sp, #0x60]
7101c2b450  ldr x8,[x0]
7101c2b454  ldr x8,[x8, #0x30]
7101c2b458  add x2,sp,#0x60
7101c2b45c  blr x8
7101c2b460  tbz w0,#0x0,0x7101c2b474
7101c2b464  mov w0,#0x10
7101c2b468  orr w1,wzr,#0x38
7101c2b46c  bl 0x710392e290
7101c2b470  cbnz x0,0x7101c2b478
7101c2b474  mov x0,xzr
7101c2b478  adrp x20,0x71050ad000
7101c2b47c  add x20,x20,#0x230
7101c2b480  adrp x8,0x7101c29000
7101c2b484  add x8,x8,#0xe10
7101c2b488  stp xzr,xzr,[x0, #0x28]
7101c2b48c  str x20,[x0]
7101c2b490  str x27,[x0, #0x10]
7101c2b494  adrp x1,0x7104433000
7101c2b498  add x1,x1,#0x4e
7101c2b49c  stp x8,xzr,[x0, #0x18]
7101c2b4a0  add x2,sp,#0x40
7101c2b4a4  str wzr,[x0, #0x8]
7101c2b4a8  str x0,[sp, #0x40]
7101c2b4ac  mov x0,x19
7101c2b4b0  bl 0x7103376af0
7101c2b4b4  ldr x0,[sp, #0x40]
7101c2b4b8  str xzr,[sp, #0x40]
7101c2b4bc  cbz x0,0x7101c2b4cc
7101c2b4c0  ldr x8,[x0]
7101c2b4c4  ldr x8,[x8, #0x8]
7101c2b4c8  blr x8
7101c2b4cc  ldr x19,[x27, #0x40]
7101c2b4d0  mov w0,#0x10
7101c2b4d4  orr w1,wzr,#0x38
7101c2b4d8  bl 0x710392e290
7101c2b4dc  cbnz x0,0x7101c2b524
7101c2b4e0  adrp x8,0x7105332000
7101c2b4e4  ldr x0,[x8, #0xf00]
7101c2b4e8  cbz x0,0x7101c2b520
7101c2b4ec  orr w8,wzr,#0x38
7101c2b4f0  str wzr,[sp, #0x38]
7101c2b4f4  add x1,sp,#0x38
7101c2b4f8  str x8,[sp, #0x60]
7101c2b4fc  ldr x8,[x0]
7101c2b500  ldr x8,[x8, #0x30]
7101c2b504  add x2,sp,#0x60
7101c2b508  blr x8
7101c2b50c  tbz w0,#0x0,0x7101c2b520
7101c2b510  mov w0,#0x10
7101c2b514  orr w1,wzr,#0x38
7101c2b518  bl 0x710392e290
7101c2b51c  cbnz x0,0x7101c2b524
7101c2b520  mov x0,xzr
7101c2b524  adrp x8,0x7101c2a000
7101c2b528  add x8,x8,#0x50
7101c2b52c  str x20,[x0]
7101c2b530  stp xzr,xzr,[x0, #0x28]
7101c2b534  adrp x1,0x7104308000
7101c2b538  add x1,x1,#0x47e
7101c2b53c  str x27,[x0, #0x10]
7101c2b540  add x2,sp,#0x38
7101c2b544  stp x8,xzr,[x0, #0x18]
7101c2b548  str wzr,[x0, #0x8]
7101c2b54c  str x0,[sp, #0x38]
7101c2b550  mov x0,x19
7101c2b554  bl 0x7103376af0
7101c2b558  ldr x0,[sp, #0x38]
7101c2b55c  str xzr,[sp, #0x38]
7101c2b560  cbz x0,0x7101c2b570
7101c2b564  ldr x8,[x0]
7101c2b568  ldr x8,[x8, #0x8]
7101c2b56c  blr x8
7101c2b570  ldr x19,[x27, #0x40]
7101c2b574  mov w0,#0x10
7101c2b578  orr w1,wzr,#0x38
7101c2b57c  bl 0x710392e290
7101c2b580  cbnz x0,0x7101c2b5c8
7101c2b584  adrp x8,0x7105332000
7101c2b588  ldr x0,[x8, #0xf00]
7101c2b58c  cbz x0,0x7101c2b5c4
7101c2b590  orr w8,wzr,#0x38
7101c2b594  stur wzr,[x29, #-0x54]
7101c2b598  sub x1,x29,#0x54
7101c2b59c  str x8,[sp, #0x60]
7101c2b5a0  ldr x8,[x0]
7101c2b5a4  ldr x8,[x8, #0x30]
7101c2b5a8  add x2,sp,#0x60
7101c2b5ac  blr x8
7101c2b5b0  tbz w0,#0x0,0x7101c2b5c4
7101c2b5b4  mov w0,#0x10
7101c2b5b8  orr w1,wzr,#0x38
7101c2b5bc  bl 0x710392e290
7101c2b5c0  cbnz x0,0x7101c2b5c8
7101c2b5c4  mov x0,xzr
7101c2b5c8  adrp x8,0x71050ad000
7101c2b5cc  add x8,x8,#0x258
7101c2b5d0  str x27,[x0, #0x10]
7101c2b5d4  str x8,[x0]
7101c2b5d8  adrp x8,0x7101c2a000
7101c2b5dc  add x8,x8,#0x90
7101c2b5e0  stp x8,xzr,[x0, #0x18]
7101c2b5e4  mov w8,#0x1
7101c2b5e8  stp xzr,xzr,[x0, #0x28]
7101c2b5ec  adrp x1,0x7104422000
7101c2b5f0  add x1,x1,#0x356
7101c2b5f4  add x2,sp,#0x60
7101c2b5f8  str w8,[x0, #0x8]
7101c2b5fc  str x0,[sp, #0x60]
7101c2b600  mov x0,x19
7101c2b604  bl 0x7103376af0
7101c2b608  ldr x0,[sp, #0x60]
7101c2b60c  str xzr,[sp, #0x60]
7101c2b610  cbz x0,0x7101c2b620
7101c2b614  ldr x8,[x0]
7101c2b618  ldr x8,[x8, #0x8]
7101c2b61c  blr x8
7101c2b620  ldr x8,[x27, #0x40]
7101c2b624  ldr x0,[x8]
7101c2b628  cbz x0,0x7101c2b670
7101c2b62c  adrp x1,0x71043be000
7101c2b630  add x1,x1,#0x61b
7101c2b634  adrp x2,0x71042b2000
7101c2b638  add x2,x2,#0xa84
7101c2b63c  mov w3,#0x79
7101c2b640  bl 0x7103375650
7101c2b644  ldr x8,[x27, #0x40]
7101c2b648  ldr x0,[x8]
7101c2b64c  cbz x0,0x7101c2b670
7101c2b650  adrp x1,0x710425f000
7101c2b654  add x1,x1,#0x338
7101c2b658  adrp x2,0x71042b2000
7101c2b65c  add x2,x2,#0xa84
7101c2b660  mov w3,w26
7101c2b664  bl 0x7103375650
7101c2b668  ldr x8,[x27, #0x40]
7101c2b66c  ldr x0,[x8]
7101c2b670  adrp x1,0x7104433000
7101c2b674  add x1,x1,#0x61
7101c2b678  adrp x2,0x71042b2000
7101c2b67c  add x2,x2,#0xa84
7101c2b680  mov w3,wzr
7101c2b684  mov x24,x21
7101c2b688  bl 0x7103375650
7101c2b68c  ldr x19,[x27, #0x40]
7101c2b690  ldr x8,[x19]
7101c2b694  ldr x20,[x8]
7101c2b698  str wzr,[x8, #0x10]
7101c2b69c  ldr x8,[x20, #0x10]
7101c2b6a0  mov w9,#0x48
7101c2b6a4  str x20,[x8]
7101c2b6a8  str w9,[x8, #0x8]
7101c2b6ac  ldp x9,x8,[x20, #0x10]
7101c2b6b0  add x10,x9,#0x10
7101c2b6b4  str x10,[x20, #0x10]
7101c2b6b8  ldr x10,[x8, #0xc8]
7101c2b6bc  str x9,[x20, #0x10]
7101c2b6c0  cmp x10,x20
7101c2b6c4  b.eq 0x7101c2b6ec
7101c2b6c8  adrp x1,0x7104433000
7101c2b6cc  add x1,x1,#0x78
7101c2b6d0  mov x0,x20
7101c2b6d4  bl 0x71038f4b20
7101c2b6d8  orr w1,wzr,#0xfffffffe
7101c2b6dc  mov x0,x20
7101c2b6e0  bl 0x71038f4fc0
7101c2b6e4  ldr x21,[sp, #0x8]
7101c2b6e8  b 0x7101c2b768
7101c2b6ec  ldr x8,[x8, #0x40]
7101c2b6f0  ldr w9,[x8, #0xc]
7101c2b6f4  ldr x21,[sp, #0x8]
7101c2b6f8  cmp w9,#0x2
7101c2b6fc  b.cc 0x7101c2b70c
7101c2b700  ldr x8,[x8, #0x10]
7101c2b704  add x1,x8,#0x10
7101c2b708  b 0x7101c2b758
7101c2b70c  ldr x9,[x8, #0x18]
7101c2b710  ldrb w8,[x8, #0xb]
7101c2b714  mov w10,#0xffffffff
7101c2b718  lsl x8,x10,x8
7101c2b71c  mvn w8,w8
7101c2b720  and x8,x8,#0x2
7101c2b724  add x1,x9,x8, LSL #0x5
7101c2b728  adrp x8,0x7104862000
7101c2b72c  add x8,x8,#0x960
7101c2b730  ldr w9,[x1, #0x18]
7101c2b734  cmp w9,#0x13
7101c2b738  b.ne 0x7101c2b748
7101c2b73c  ldr x9,[x1, #0x10]
7101c2b740  cmp x9,#0x2
7101c2b744  b.eq 0x7101c2b758
7101c2b748  ldrsw x9,[x1, #0x1c]
7101c2b74c  add x1,x1,x9, LSL #0x5
7101c2b750  cbnz w9,0x7101c2b730
7101c2b754  mov x1,x8
7101c2b758  adrp x2,0x7104433000
7101c2b75c  add x2,x2,#0x78
7101c2b760  mov x0,x20
7101c2b764  bl 0x71038f4d40
7101c2b768  ldr x9,[x20, #0x10]
7101c2b76c  sub x8,x9,#0x10
7101c2b770  adrp x10,0x7104862000
7101c2b774  add x10,x10,#0x960
7101c2b778  cmp x8,x10
7101c2b77c  b.eq 0x7101c2b7a8
7101c2b780  ldur w9,[x9, #-0x8]
7101c2b784  and w9,w9,#0xf
7101c2b788  cmp w9,#0x6
7101c2b78c  b.ne 0x7101c2b7a8
7101c2b790  mov x0,x19
7101c2b794  mov w1,wzr
7101c2b798  bl 0x7103377130
7101c2b79c  stp x24,xzr,[sp, #0x70]
7101c2b7a0  cbnz x21,0x7101c2b7b4
7101c2b7a4  b 0x7101c2b7cc
7101c2b7a8  str x8,[x20, #0x10]
7101c2b7ac  stp x24,xzr,[sp, #0x70]
7101c2b7b0  cbz x21,0x7101c2b7cc
7101c2b7b4  ldr x0,[x21, #0x18]
7101c2b7b8  stp x23,xzr,[x21, #0x10]
7101c2b7bc  cbz x0,0x7101c2b7c4
7101c2b7c0  bl 0x710392eb40
7101c2b7c4  mov x0,x21
7101c2b7c8  bl 0x710392eb40
7101c2b7cc  ldr x8,[x22]
7101c2b7d0  add x0,x8,#0x8
7101c2b7d4  adrp x1,0x7104545000
7101c2b7d8  add x1,x1,#0x110
7101c2b7dc  bl 0x710323eba0
7101c2b7e0  ldr x8,[x22]
7101c2b7e4  add x0,x8,#0x8
7101c2b7e8  adrp x1,0x7104545000
7101c2b7ec  add x1,x1,#0x118
7101c2b7f0  bl 0x710323eba0
7101c2b7f4  ldr x0,[sp, #0x20]
7101c2b7f8  cbz x0,0x7101c2b804
7101c2b7fc  str x0,[sp, #0x28]
7101c2b800  bl 0x710392eb40
7101c2b804  ldr d8,[sp, #0x80]
7101c2b808  ldp x29,x30,[sp, #0xe0]
7101c2b80c  ldp x20,x19,[sp, #0xd0]
7101c2b810  ldp x22,x21,[sp, #0xc0]
7101c2b814  ldp x24,x23,[sp, #0xb0]
7101c2b818  ldp x26,x25,[sp, #0xa0]
7101c2b81c  ldp x28,x27,[sp, #0x90]
7101c2b820  add sp,sp,#0xf0
7101c2b824  ret
7101c2b828  adrp x0,0x7105314000
7101c2b82c  add x0,x0,#0x4d8
7101c2b830  bl 0x71039c06b0
7101c2b834  cbz w0,0x7101c2aec0
7101c2b838  bl 0x7101764000
7101c2b83c  adrp x0,0x7101763000
7101c2b840  add x0,x0,#0xc40
7101c2b844  adrp x1,0x71052c5000
7101c2b848  add x1,x1,#0x180
7101c2b84c  adrp x2,0x7104f17000
7101c2b850  add x2,x2,#0x0
7101c2b854  bl 0x71000001c0
7101c2b858  adrp x0,0x7105314000
7101c2b85c  add x0,x0,#0x4d8
7101c2b860  bl 0x71039c06c0
7101c2b864  b 0x7101c2aec0
7101c2b868  ldr x0,[sp]
7101c2b86c  bl 0x71039c1330
7101c2b870  bl 0x71039c1330
