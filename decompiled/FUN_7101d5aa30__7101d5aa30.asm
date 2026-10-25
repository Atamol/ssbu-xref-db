// addr:      7101d5aa30
// offset:    0x1d5aa30
// name:      FUN_7101d5aa30
// mangled:   
// size:      2900

7101d5aa30  sub sp,sp,#0x180
7101d5aa34  stp d9,d8,[sp, #0x120]
7101d5aa38  str x28,[sp, #0x130]
7101d5aa3c  stp x24,x23,[sp, #0x140]
7101d5aa40  stp x22,x21,[sp, #0x150]
7101d5aa44  stp x20,x19,[sp, #0x160]
7101d5aa48  stp x29,x30,[sp, #0x170]
7101d5aa4c  add x29,sp,#0x170
7101d5aa50  ldr w21,[x0, #0x8]
7101d5aa54  cmp w21,w1
7101d5aa58  b.eq 0x7101d5b488
7101d5aa5c  mov x22,#0x12f7
7101d5aa60  movk x22,#0xcf28, LSL #16
7101d5aa64  mov w2,w1
7101d5aa68  mov x20,x0
7101d5aa6c  movk x22,#0x11, LSL #32
7101d5aa70  movk x22,#0xc100, LSL #48
7101d5aa74  add x19,x0,#0x10
7101d5aa78  str w1,[x0, #0x8]
7101d5aa7c  cmp w1,#0x1
7101d5aa80  b.ne 0x7101d5aac4
7101d5aa84  orr w8,w21,#0x1
7101d5aa88  cmp w8,#0x3
7101d5aa8c  b.ne 0x7101d5aac4
7101d5aa90  ldr x0,[x20, #0x18]
7101d5aa94  fmov s0,0x3f800000
7101d5aa98  adrp x1,0x7104401000
7101d5aa9c  add x1,x1,#0x889
7101d5aaa0  bl 0x7103778300
7101d5aaa4  ldr x8,[x20, #0x80]
7101d5aaa8  and x8,x8,#-0xffff0000000001
7101d5aaac  cmp x8,x22
7101d5aab0  b.ne 0x7101d5aaf4
7101d5aab4  ldr x0,[x20, #0x18]
7101d5aab8  adrp x1,0x7104280000
7101d5aabc  add x1,x1,#0xd8b
7101d5aac0  b 0x7101d5ab18
7101d5aac4  adrp x1,0x7104412000
7101d5aac8  add x1,x1,#0xc7c
7101d5aacc  mov x0,x19
7101d5aad0  bl 0x7103778430
7101d5aad4  ldr x8,[x20, #0x80]
7101d5aad8  and x8,x8,#-0xffff0000000001
7101d5aadc  cmp x8,x22
7101d5aae0  b.ne 0x7101d5ab70
7101d5aae4  ldr w2,[x20, #0x8]
7101d5aae8  adrp x1,0x710435b000
7101d5aaec  add x1,x1,#0xa99
7101d5aaf0  b 0x7101d5ab94
7101d5aaf4  mov x9,#0x8ba4
7101d5aaf8  movk x9,#0xde09, LSL #16
7101d5aafc  movk x9,#0xe, LSL #32
7101d5ab00  movk x9,#0xc100, LSL #48
7101d5ab04  cmp x8,x9
7101d5ab08  b.ne 0x7101d5ab9c
7101d5ab0c  ldr x0,[x20, #0x18]
7101d5ab10  adrp x1,0x71042c5000
7101d5ab14  add x1,x1,#0x114
7101d5ab18  fmov s0,0x3f800000
7101d5ab1c  bl 0x7103778300
7101d5ab20  ldr w8,[x20, #0x8]
7101d5ab24  cbnz w21,0x7101d5aba4
7101d5ab28  cmp w8,#0x1
7101d5ab2c  b.ne 0x7101d5aba4
7101d5ab30  ldrsw x21,[x20, #0x4]
7101d5ab34  cmn w21,#0x1
7101d5ab38  b.eq 0x7101d5b448
7101d5ab3c  bl 0x7101465a30
7101d5ab40  ldrb w8,[x0, #0x5]
7101d5ab44  cbz w8,0x7101d5abc4
7101d5ab48  mov w8,#0x3860
7101d5ab4c  madd x8,x21,x8,x0
7101d5ab50  ldrsb w8,[x8, #0x70]
7101d5ab54  ldr w9,[x0, #0x4c]
7101d5ab58  ldr x0,[x20, #0x18]
7101d5ab5c  cmp w9,w8
7101d5ab60  b.ne 0x7101d5abd4
7101d5ab64  adrp x1,0x710438c000
7101d5ab68  add x1,x1,#0xe1b
7101d5ab6c  b 0x7101d5abdc
7101d5ab70  mov x9,#0x8ba4
7101d5ab74  movk x9,#0xde09, LSL #16
7101d5ab78  movk x9,#0xe, LSL #32
7101d5ab7c  movk x9,#0xc100, LSL #48
7101d5ab80  cmp x8,x9
7101d5ab84  b.ne 0x7101d5ab9c
7101d5ab88  ldr w2,[x20, #0x8]
7101d5ab8c  adrp x1,0x710436c000
7101d5ab90  add x1,x1,#0x6db
7101d5ab94  mov x0,x19
7101d5ab98  bl 0x7103778430
7101d5ab9c  ldr w8,[x20, #0x8]
7101d5aba0  cbz w21,0x7101d5ab28
7101d5aba4  cmp w8,#0x3
7101d5aba8  b.ne 0x7101d5b448
7101d5abac  ldr x0,[x20, #0x18]
7101d5abb0  fmov s0,0x3f800000
7101d5abb4  adrp x1,0x710435b000
7101d5abb8  add x1,x1,#0xabd
7101d5abbc  bl 0x7103778300
7101d5abc0  b 0x7101d5b448
7101d5abc4  ldr w8,[x0, #0x48]
7101d5abc8  ldr x0,[x20, #0x18]
7101d5abcc  cmp w21,w8
7101d5abd0  b.eq 0x7101d5ab64
7101d5abd4  adrp x1,0x710435b000
7101d5abd8  add x1,x1,#0xaaf
7101d5abdc  fmov s0,0x3f800000
7101d5abe0  bl 0x7103778300
7101d5abe4  adrp x1,0x7104412000
7101d5abe8  add x1,x1,#0xc85
7101d5abec  add x8,sp,#0x18
7101d5abf0  mov x0,x19
7101d5abf4  bl 0x7103776640
7101d5abf8  ldr x21,[sp, #0x20]
7101d5abfc  ldr x8,[x21, #0x8]
7101d5ac00  cbz x8,0x7101d5ac18
7101d5ac04  ldr x8,[x8, #0x18]
7101d5ac08  cbz x8,0x7101d5ac18
7101d5ac0c  ldrb w9,[x8, #0x58]
7101d5ac10  and w9,w9,#0xfe
7101d5ac14  strb w9,[x8, #0x58]
7101d5ac18  adrp x1,0x71043cf000
7101d5ac1c  add x1,x1,#0x771
7101d5ac20  add x8,sp,#0x70
7101d5ac24  mov x0,x19
7101d5ac28  bl 0x7103776910
7101d5ac2c  ldr x0,[sp, #0x78]
7101d5ac30  ldr x8,[x0]
7101d5ac34  cbz x8,0x7101d5ac44
7101d5ac38  ldrb w9,[x8, #0x58]
7101d5ac3c  and w9,w9,#0xfe
7101d5ac40  strb w9,[x8, #0x58]
7101d5ac44  adrp x24,0x710523d000
7101d5ac48  add x24,x24,#0x9a8
7101d5ac4c  stp x24,xzr,[sp, #0x70]
7101d5ac50  cbz x0,0x7101d5ac58
7101d5ac54  bl 0x710392eb40
7101d5ac58  ldr w8,[x20, #0x4]
7101d5ac5c  cmn w8,#0x1
7101d5ac60  b.eq 0x7101d5b420
7101d5ac64  adrp x21,0x7105314000
7101d5ac68  add x21,x21,#0x4d8
7101d5ac6c  ldarb w8,[x21]
7101d5ac70  tbz w8,#0x0,0x7101d5b4c4
7101d5ac74  ldr w8,[x20, #0x4]
7101d5ac78  cmp w8,#0x7
7101d5ac7c  str wzr,[x20, #0xf8]
7101d5ac80  b.hi 0x7101d5b41c
7101d5ac84  ldarb w8,[x21]
7101d5ac88  tbz w8,#0x0,0x7101d5b504
7101d5ac8c  adrp x22,0x71052cc000
7101d5ac90  ldrb w8,[x22, #0x5d8]
7101d5ac94  cmp w8,#0x10
7101d5ac98  b.eq 0x7101d5aca4
7101d5ac9c  cmp w8,#0xe
7101d5aca0  b.ne 0x7101d5ace0
7101d5aca4  adrp x8,0x7105314000
7101d5aca8  ldr x8,[x8, #0x510]
7101d5acac  ldr x8,[x8]
7101d5acb0  ldr x22,[x8, #0x68]
7101d5acb4  ldrsw x8,[x20, #0x4]
7101d5acb8  cmp w8,#0x7
7101d5acbc  b.hi 0x7101d5adc4
7101d5acc0  mov w9,#0xb0
7101d5acc4  adrp x10,0x71052c5000
7101d5acc8  add x10,x10,#0x180
7101d5accc  madd x8,x8,x9,x10
7101d5acd0  mov w9,#0xedf8
7101d5acd4  movk w9,#0x4, LSL #16
7101d5acd8  ldr w2,[x8, x9, LSL #0x0]
7101d5acdc  b 0x7101d5adc8
7101d5ace0  ldr w8,[x20, #0x4]
7101d5ace4  fmov s9,0x3f800000
7101d5ace8  cmp w8,#0x7
7101d5acec  b.hi 0x7101d5aeac
7101d5acf0  ldarb w8,[x21]
7101d5acf4  tbz w8,#0x0,0x7101d5b544
7101d5acf8  ldrb w8,[x22, #0x5d8]
7101d5acfc  cmp w8,#0x25
7101d5ad00  b.ne 0x7101d5aeac
7101d5ad04  ldr w1,[x20, #0x4]
7101d5ad08  add x0,sp,#0x70
7101d5ad0c  bl 0x71017a6d60
7101d5ad10  ldp s0,s2,[sp, #0xd0]
7101d5ad14  adrp x8,0x7104473000
7101d5ad18  ucvtf s2,s2
7101d5ad1c  ldr s1,[x8, #0x91c]
7101d5ad20  ucvtf s0,s0
7101d5ad24  mov w8,#0x2
7101d5ad28  str w8,[x20, #0xf8]
7101d5ad2c  adrp x8,0x71052c3000
7101d5ad30  ldr x8,[x8, #0x600]
7101d5ad34  ldr x9,[x8, #0x8]
7101d5ad38  ldr x8,[x9, #0x10]
7101d5ad3c  fdiv s0,s0,s1
7101d5ad40  ldrb w10,[x8]
7101d5ad44  cmp w10,#0xc
7101d5ad48  fdiv s1,s2,s1
7101d5ad4c  b.ne 0x7101d5aeec
7101d5ad50  ldur w10,[x8, #0x1]
7101d5ad54  subs w10,w10,#0x1
7101d5ad58  b.lt 0x7101d5aeec
7101d5ad5c  ldr x9,[x9, #0x8]
7101d5ad60  ldursw x13,[x8, #0x5]
7101d5ad64  mov x14,#0x83db
7101d5ad68  movk x14,#0x5246, LSL #16
7101d5ad6c  movk x14,#0x21, LSL #32
7101d5ad70  mov w11,wzr
7101d5ad74  ldp x12,x9,[x9, #0x20]
7101d5ad78  add x13,x9,x13
7101d5ad7c  adrp x9,0x7104742000
7101d5ad80  add x9,x9,#0xdbb
7101d5ad84  add w15,w10,w11
7101d5ad88  cmp w15,#0x0
7101d5ad8c  cinc w15,w15,lt
7101d5ad90  asr w15,w15,#0x1
7101d5ad94  add x16,x13,w15, SXTW  #0x3
7101d5ad98  ldr w17,[x16]
7101d5ad9c  ldr x17,[x12, x17, LSL #0x3]
7101d5ada0  cmp x17,x14
7101d5ada4  b.eq 0x7101d5b4a8
7101d5ada8  sub w16,w15,#0x1
7101d5adac  cmp x17,x14
7101d5adb0  csel w10,w16,w10,hi
7101d5adb4  csinc w11,w11,w15,hi
7101d5adb8  cmp w11,w10
7101d5adbc  b.le 0x7101d5ad84
7101d5adc0  b 0x7101d5aef4
7101d5adc4  mov w2,wzr
7101d5adc8  ldr x0,[x22]
7101d5adcc  mov w1,#0x15
7101d5add0  bl 0x71017d1480
7101d5add4  ldrsw x8,[x20, #0x4]
7101d5add8  mov w21,w0
7101d5addc  cmp w8,#0x7
7101d5ade0  b.hi 0x7101d5ae04
7101d5ade4  mov w9,#0xb0
7101d5ade8  adrp x10,0x71052c5000
7101d5adec  add x10,x10,#0x180
7101d5adf0  madd x8,x8,x9,x10
7101d5adf4  mov w9,#0xedfc
7101d5adf8  movk w9,#0x4, LSL #16
7101d5adfc  ldr w2,[x8, x9, LSL #0x0]
7101d5ae00  b 0x7101d5ae08
7101d5ae04  mov w2,wzr
7101d5ae08  ldr x0,[x22]
7101d5ae0c  mov w1,#0x15
7101d5ae10  bl 0x71017d1480
7101d5ae14  mov w8,#0x1
7101d5ae18  str w8,[x20, #0xf8]
7101d5ae1c  adrp x8,0x71052c3000
7101d5ae20  ldr x8,[x8, #0x600]
7101d5ae24  ldr x9,[x8, #0x8]
7101d5ae28  ldr x8,[x9, #0x10]
7101d5ae2c  ldrb w10,[x8]
7101d5ae30  cmp w10,#0xc
7101d5ae34  b.ne 0x7101d5aed0
7101d5ae38  ldur w10,[x8, #0x1]
7101d5ae3c  subs w10,w10,#0x1
7101d5ae40  b.lt 0x7101d5aed0
7101d5ae44  ldr x9,[x9, #0x8]
7101d5ae48  ldursw x13,[x8, #0x5]
7101d5ae4c  mov x14,#0x9d26
7101d5ae50  movk x14,#0xac4a, LSL #16
7101d5ae54  movk x14,#0x1c, LSL #32
7101d5ae58  mov w11,wzr
7101d5ae5c  ldp x12,x9,[x9, #0x20]
7101d5ae60  add x13,x9,x13
7101d5ae64  adrp x9,0x7104742000
7101d5ae68  add x9,x9,#0xdbb
7101d5ae6c  add w15,w10,w11
7101d5ae70  cmp w15,#0x0
7101d5ae74  cinc w15,w15,lt
7101d5ae78  asr w15,w15,#0x1
7101d5ae7c  add x16,x13,w15, SXTW  #0x3
7101d5ae80  ldr w17,[x16]
7101d5ae84  ldr x17,[x12, x17, LSL #0x3]
7101d5ae88  cmp x17,x14
7101d5ae8c  b.eq 0x7101d5aec0
7101d5ae90  sub w16,w15,#0x1
7101d5ae94  cmp x17,x14
7101d5ae98  csel w10,w16,w10,hi
7101d5ae9c  csinc w11,w11,w15,hi
7101d5aea0  cmp w11,w10
7101d5aea4  b.le 0x7101d5ae6c
7101d5aea8  b 0x7101d5aed8
7101d5aeac  mov w21,wzr
7101d5aeb0  mov w0,wzr
7101d5aeb4  ldr w8,[x20, #0xf8]
7101d5aeb8  cbnz w8,0x7101d5af28
7101d5aebc  b 0x7101d5b41c
7101d5aec0  ldrsw x9,[x16, #0x4]
7101d5aec4  tbnz w9,#0x1f,0x7101d5aed0
7101d5aec8  add x9,x8,x9
7101d5aecc  b 0x7101d5aed8
7101d5aed0  adrp x9,0x7104742000
7101d5aed4  add x9,x9,#0xdbb
7101d5aed8  ldrb w8,[x9]
7101d5aedc  cmp w8,#0x8
7101d5aee0  b.ne 0x7101d5af08
7101d5aee4  ldur s0,[x9, #0x1]
7101d5aee8  b 0x7101d5af0c
7101d5aeec  adrp x9,0x7104742000
7101d5aef0  add x9,x9,#0xdbb
7101d5aef4  fcvtzu w21,s0
7101d5aef8  ldrb w8,[x9]
7101d5aefc  fcvtzu w0,s1
7101d5af00  cmp w8,#0x8
7101d5af04  b.eq 0x7101d5aee4
7101d5af08  fmov s0,wzr
7101d5af0c  adrp x8,0x7104472000
7101d5af10  ldr s1,[x8, #0xe0c]
7101d5af14  fmul s0,s0,s1
7101d5af18  fmov s1,0x3f800000
7101d5af1c  fmax s9,s0,s1
7101d5af20  ldr w8,[x20, #0xf8]
7101d5af24  cbz w8,0x7101d5b41c
7101d5af28  ucvtf s0,w21
7101d5af2c  cmp w8,#0x1
7101d5af30  mov w8,#0x1
7101d5af34  cinc w8,w8,ne
7101d5af38  str s0,[x20, #0xc0]
7101d5af3c  scvtf s0,w8
7101d5af40  str w0,[x20, #0xbc]
7101d5af44  ldr x0,[x20, #0x18]
7101d5af48  adrp x1,0x71042f8000
7101d5af4c  add x1,x1,#0x66d
7101d5af50  bl 0x7103778630
7101d5af54  strb wzr,[sp, #0x78]
7101d5af58  str xzr,[sp, #0x70]
7101d5af5c  ldr w8,[x20, #0xf8]
7101d5af60  cmp w8,#0x2
7101d5af64  b.eq 0x7101d5aff0
7101d5af68  cmp w8,#0x1
7101d5af6c  b.ne 0x7101d5b1a0
7101d5af70  mov x9,#0x7874
7101d5af74  movk x9,#0x5f74, LSL #16
7101d5af78  movk x9,#0x7367, LSL #32
7101d5af7c  movk x9,#0x5f70, LSL #48
7101d5af80  add x8,sp,#0x70
7101d5af84  str x9,[sp, #0x78]
7101d5af88  mov w10,#0x6f63
7101d5af8c  movk w10,#0x6e75, LSL #16
7101d5af90  str w10,[sp, #0x80]
7101d5af94  mov w9,#0xd
7101d5af98  add x1,x8,#0x8
7101d5af9c  str w9,[sp, #0x74]
7101d5afa0  add x8,x8,#0x9
7101d5afa4  mov w10,#0x74
7101d5afa8  strh w10,[sp, #0x84]
7101d5afac  mov w9,#0x9dc5
7101d5afb0  movk w9,#0x811c, LSL #16
7101d5afb4  mov w11,#0x89
7101d5afb8  mul w9,w9,w11
7101d5afbc  and w10,w10,#0xff
7101d5afc0  eor w9,w9,w10
7101d5afc4  ldrb w10,[x8], #0x1
7101d5afc8  cbnz w10,0x7101d5afb8
7101d5afcc  add x8,sp,#0x28
7101d5afd0  mov x0,x19
7101d5afd4  str w9,[sp, #0x70]
7101d5afd8  add x21,sp,#0x28
7101d5afdc  bl 0x7103776910
7101d5afe0  add x8,x20,#0xc8
7101d5afe4  cmp x8,x21
7101d5afe8  b.ne 0x7101d5b178
7101d5afec  b 0x7101d5b190
7101d5aff0  adrp x1,0x71042b4000
7101d5aff4  add x1,x1,#0x678
7101d5aff8  add x8,sp,#0x28
7101d5affc  mov x0,x19
7101d5b000  add x22,sp,#0x28
7101d5b004  bl 0x7103776640
7101d5b008  add x21,x20,#0xe8
7101d5b00c  cmp x21,x22
7101d5b010  b.eq 0x7101d5b040
7101d5b014  ldr x8,[sp, #0x30]
7101d5b018  str xzr,[sp, #0x30]
7101d5b01c  ldr x22,[x20, #0xf0]
7101d5b020  str x8,[x20, #0xf0]
7101d5b024  cbz x22,0x7101d5b040
7101d5b028  ldr x0,[x22, #0x18]
7101d5b02c  stp x24,xzr,[x22, #0x10]
7101d5b030  cbz x0,0x7101d5b038
7101d5b034  bl 0x710392eb40
7101d5b038  mov x0,x22
7101d5b03c  bl 0x710392eb40
7101d5b040  ldr x22,[sp, #0x30]
7101d5b044  adrp x8,0x710523d000
7101d5b048  add x8,x8,#0x988
7101d5b04c  stp x8,xzr,[sp, #0x28]
7101d5b050  cbz x22,0x7101d5b06c
7101d5b054  ldr x0,[x22, #0x18]
7101d5b058  stp x24,xzr,[x22, #0x10]
7101d5b05c  cbz x0,0x7101d5b064
7101d5b060  bl 0x710392eb40
7101d5b064  mov x0,x22
7101d5b068  bl 0x710392eb40
7101d5b06c  ldr w8,[x20]
7101d5b070  cbz w8,0x7101d5b094
7101d5b074  adrp x1,0x7104454000
7101d5b078  add x1,x1,#0xda6
7101d5b07c  add x0,sp,#0x70
7101d5b080  mov w2,#0x1
7101d5b084  add x22,sp,#0x70
7101d5b088  bl 0x710062dc20
7101d5b08c  add x22,x22,#0x8
7101d5b090  b 0x7101d5b158
7101d5b094  adrp x1,0x710434a000
7101d5b098  add x1,x1,#0x6b3
7101d5b09c  add x0,sp,#0x70
7101d5b0a0  add x22,sp,#0x70
7101d5b0a4  bl 0x710062dc20
7101d5b0a8  add x22,x22,#0x8
7101d5b0ac  add x8,sp,#0x28
7101d5b0b0  mov x0,x21
7101d5b0b4  mov x1,x22
7101d5b0b8  add x23,sp,#0x28
7101d5b0bc  bl 0x7103776910
7101d5b0c0  add x8,x20,#0xd8
7101d5b0c4  cmp x8,x23
7101d5b0c8  b.eq 0x7101d5b0e4
7101d5b0cc  ldr x8,[sp, #0x30]
7101d5b0d0  str xzr,[sp, #0x30]
7101d5b0d4  ldr x0,[x20, #0xe0]
7101d5b0d8  str x8,[x20, #0xe0]
7101d5b0dc  cbz x0,0x7101d5b0e4
7101d5b0e0  bl 0x710392eb40
7101d5b0e4  ldr x0,[sp, #0x30]
7101d5b0e8  stp x24,xzr,[sp, #0x28]
7101d5b0ec  cbz x0,0x7101d5b0f4
7101d5b0f0  bl 0x710392eb40
7101d5b0f4  ldr x8,[x20, #0xe0]
7101d5b0f8  ldr x23,[x8, #0x10]
7101d5b0fc  cbz x23,0x7101d5b144
7101d5b100  ldr s0,[x20, #0xc0]
7101d5b104  stp xzr,xzr,[sp, #0x58]
7101d5b108  stp xzr,xzr,[sp, #0x48]
7101d5b10c  add x0,sp,#0x28
7101d5b110  fcvtzs w3,s0
7101d5b114  mov w1,#0x20
7101d5b118  mov w2,wzr
7101d5b11c  mov w4,wzr
7101d5b120  mov w5,wzr
7101d5b124  stp xzr,xzr,[sp, #0x38]
7101d5b128  stp xzr,xzr,[sp, #0x28]
7101d5b12c  bl 0x71037ad940
7101d5b130  mov w2,w0
7101d5b134  add x1,sp,#0x28
7101d5b138  mov x0,x23
7101d5b13c  mov w3,wzr
7101d5b140  bl 0x71037a2270
7101d5b144  adrp x1,0x7104454000
7101d5b148  add x1,x1,#0xda6
7101d5b14c  add x0,sp,#0x70
7101d5b150  mov w2,wzr
7101d5b154  bl 0x710062dc20
7101d5b158  add x8,sp,#0x28
7101d5b15c  mov x0,x21
7101d5b160  mov x1,x22
7101d5b164  add x23,sp,#0x28
7101d5b168  bl 0x7103776910
7101d5b16c  add x8,x20,#0xc8
7101d5b170  cmp x8,x23
7101d5b174  b.eq 0x7101d5b190
7101d5b178  ldr x8,[sp, #0x30]
7101d5b17c  str xzr,[sp, #0x30]
7101d5b180  ldr x0,[x20, #0xd0]
7101d5b184  str x8,[x20, #0xd0]
7101d5b188  cbz x0,0x7101d5b190
7101d5b18c  bl 0x710392eb40
7101d5b190  ldr x0,[sp, #0x30]
7101d5b194  stp x24,xzr,[sp, #0x28]
7101d5b198  cbz x0,0x7101d5b1a0
7101d5b19c  bl 0x710392eb40
7101d5b1a0  ldr x8,[x20, #0xd0]
7101d5b1a4  ldr x21,[x8, #0x10]
7101d5b1a8  cbz x21,0x7101d5b1f0
7101d5b1ac  ldr s0,[x20, #0xc0]
7101d5b1b0  stp xzr,xzr,[sp, #0x58]
7101d5b1b4  stp xzr,xzr,[sp, #0x48]
7101d5b1b8  add x0,sp,#0x28
7101d5b1bc  fcvtzs w3,s0
7101d5b1c0  mov w1,#0x20
7101d5b1c4  mov w2,wzr
7101d5b1c8  mov w4,wzr
7101d5b1cc  mov w5,wzr
7101d5b1d0  stp xzr,xzr,[sp, #0x38]
7101d5b1d4  stp xzr,xzr,[sp, #0x28]
7101d5b1d8  bl 0x71037ad940
7101d5b1dc  mov w2,w0
7101d5b1e0  add x1,sp,#0x28
7101d5b1e4  mov x0,x21
7101d5b1e8  mov w3,wzr
7101d5b1ec  bl 0x71037a2270
7101d5b1f0  bl 0x7101465a30
7101d5b1f4  ldrb w9,[x0, #0x5]
7101d5b1f8  ldrsw x8,[x20, #0x4]
7101d5b1fc  cmp w9,#0x1
7101d5b200  b.eq 0x7101d5b218
7101d5b204  cbnz w9,0x7101d5b22c
7101d5b208  mov w9,#0x3860
7101d5b20c  madd x8,x8,x9,x0
7101d5b210  add x8,x8,#0x88
7101d5b214  b 0x7101d5b224
7101d5b218  mov w9,#0x3860
7101d5b21c  madd x8,x8,x9,x0
7101d5b220  add x8,x8,#0x8a
7101d5b224  ldrh w8,[x8]
7101d5b228  b 0x7101d5b230
7101d5b22c  mov w8,wzr
7101d5b230  ldr w9,[x20, #0xf8]
7101d5b234  cmp w9,#0x1
7101d5b238  b.ne 0x7101d5b25c
7101d5b23c  sub w8,w8,#0x1
7101d5b240  cmp w8,#0x11
7101d5b244  b.hi 0x7101d5b27c
7101d5b248  sxth x8,w8
7101d5b24c  adrp x9,0x7104545000
7101d5b250  add x9,x9,#0x6d0
7101d5b254  ldr s0,[x9,x8, lsl #2]
7101d5b258  b 0x7101d5b280
7101d5b25c  sub w8,w8,#0x2
7101d5b260  cmp w8,#0x10
7101d5b264  b.hi 0x7101d5b294
7101d5b268  adrp x9,0x7104545000
7101d5b26c  add x9,x9,#0x720
7101d5b270  sxth x8,w8
7101d5b274  ldr w2,[x9, x8, LSL #0x2]
7101d5b278  b 0x7101d5b298
7101d5b27c  fmov s0,0x41a00000
7101d5b280  ldr x0,[x20, #0x18]
7101d5b284  adrp x1,0x710434a000
7101d5b288  add x1,x1,#0x6c2
7101d5b28c  bl 0x7103778630
7101d5b290  b 0x7101d5b2c8
7101d5b294  mov w2,#0x1
7101d5b298  add x8,sp,#0x28
7101d5b29c  adrp x1,0x71042c5000
7101d5b2a0  add x1,x1,#0x131
7101d5b2a4  add x0,sp,#0x28
7101d5b2a8  strb wzr,[sp, #0x30]
7101d5b2ac  str xzr,[sp, #0x28]
7101d5b2b0  add x21,x8,#0x8
7101d5b2b4  bl 0x710062dc20
7101d5b2b8  ldr x0,[x20, #0xf0]
7101d5b2bc  fmov s0,0x3f800000
7101d5b2c0  mov x1,x21
7101d5b2c4  bl 0x7103778300
7101d5b2c8  ldp s0,s1,[x20, #0xbc]
7101d5b2cc  ucvtf s0,s0
7101d5b2d0  fsub s0,s0,s1
7101d5b2d4  fcmp s0,#0.0
7101d5b2d8  str q0,[sp]
7101d5b2dc  b.le 0x7101d5b300
7101d5b2e0  ldr w8,[x20, #0xf8]
7101d5b2e4  cmp w8,#0x1
7101d5b2e8  b.ne 0x7101d5b324
7101d5b2ec  ldr x0,[x20, #0x18]
7101d5b2f0  fmov s0,0x3f800000
7101d5b2f4  adrp x1,0x7104433000
7101d5b2f8  add x1,x1,#0x491
7101d5b2fc  b 0x7101d5b34c
7101d5b300  ldr w8,[x20, #0xf8]
7101d5b304  b.pl 0x7101d5b358
7101d5b308  cmp w8,#0x1
7101d5b30c  b.ne 0x7101d5b39c
7101d5b310  ldr x0,[x20, #0x18]
7101d5b314  fmov s0,0x3f800000
7101d5b318  adrp x1,0x71043f0000
7101d5b31c  add x1,x1,#0xc9b
7101d5b320  b 0x7101d5b3c4
7101d5b324  fmov s8,0x3f800000
7101d5b328  ldr x0,[x20, #0xf0]
7101d5b32c  adrp x1,0x71043f0000
7101d5b330  add x1,x1,#0xc94
7101d5b334  mov v0.16B,v8.16B
7101d5b338  bl 0x7103778300
7101d5b33c  ldr x0,[x20, #0xf0]
7101d5b340  adrp x1,0x7104319000
7101d5b344  add x1,x1,#0x236
7101d5b348  mov v0.16B,v8.16B
7101d5b34c  bl 0x7103778300
7101d5b350  mov w8,#0x1
7101d5b354  b 0x7101d5b3e8
7101d5b358  cmp w8,#0x1
7101d5b35c  b.ne 0x7101d5b3d0
7101d5b360  adrp x1,0x71042d6000
7101d5b364  add x1,x1,#0x5cc
7101d5b368  add x8,sp,#0x28
7101d5b36c  mov x0,x19
7101d5b370  bl 0x7103776910
7101d5b374  ldr x0,[sp, #0x30]
7101d5b378  ldr x8,[x0]
7101d5b37c  cbz x8,0x7101d5b38c
7101d5b380  ldrb w9,[x8, #0x58]
7101d5b384  and w9,w9,#0xfe
7101d5b388  strb w9,[x8, #0x58]
7101d5b38c  stp x24,xzr,[sp, #0x28]
7101d5b390  cbz x0,0x7101d5b3e4
7101d5b394  bl 0x710392eb40
7101d5b398  b 0x7101d5b3e4
7101d5b39c  fmov s8,0x3f800000
7101d5b3a0  ldr x0,[x20, #0xf0]
7101d5b3a4  adrp x1,0x71042a3000
7101d5b3a8  add x1,x1,#0x361
7101d5b3ac  mov v0.16B,v8.16B
7101d5b3b0  bl 0x7103778300
7101d5b3b4  ldr x0,[x20, #0xf0]
7101d5b3b8  adrp x1,0x7104454000
7101d5b3bc  add x1,x1,#0xdb7
7101d5b3c0  mov v0.16B,v8.16B
7101d5b3c4  bl 0x7103778300
7101d5b3c8  mov w8,#0x2
7101d5b3cc  b 0x7101d5b3e8
7101d5b3d0  ldr x0,[x20, #0xf0]
7101d5b3d4  fmov s0,0x3f800000
7101d5b3d8  adrp x1,0x7104453000
7101d5b3dc  add x1,x1,#0xa1
7101d5b3e0  bl 0x7103778300
7101d5b3e4  orr w8,wzr,#0x3
7101d5b3e8  ldr q5,[sp]
7101d5b3ec  fdiv s0,s5,s9
7101d5b3f0  str w8,[x20, #0xb4]
7101d5b3f4  fmov s2,0x3e800000
7101d5b3f8  adrp x8,0x7104472000
7101d5b3fc  ldr s3,[x8, #0x970]
7101d5b400  movi v4.4S,#0x80, LSL #24
7101d5b404  fabs s1,s0
7101d5b408  fcmp s1,s2
7101d5b40c  bit v2.16B,v5.16B,v4.16B
7101d5b410  fccmp s1,s3,#0x4,mi
7101d5b414  fcsel s0,s2,s0,gt
7101d5b418  str s0,[x20, #0xb8]
7101d5b41c  ldr x21,[sp, #0x20]
7101d5b420  adrp x8,0x710523d000
7101d5b424  add x8,x8,#0x988
7101d5b428  stp x8,xzr,[sp, #0x18]
7101d5b42c  cbz x21,0x7101d5b448
7101d5b430  ldr x0,[x21, #0x18]
7101d5b434  stp x24,xzr,[x21, #0x10]
7101d5b438  cbz x0,0x7101d5b440
7101d5b43c  bl 0x710392eb40
7101d5b440  mov x0,x21
7101d5b444  bl 0x710392eb40
7101d5b448  adrp x1,0x710438c000
7101d5b44c  add x1,x1,#0xe76
7101d5b450  add x8,sp,#0x70
7101d5b454  mov x0,x19
7101d5b458  bl 0x7103776910
7101d5b45c  ldr x0,[sp, #0x78]
7101d5b460  ldr x8,[x0]
7101d5b464  cbz x8,0x7101d5b474
7101d5b468  ldrb w9,[x8, #0x58]
7101d5b46c  and w9,w9,#0xfe
7101d5b470  strb w9,[x8, #0x58]
7101d5b474  adrp x8,0x710523d000
7101d5b478  add x8,x8,#0x9a8
7101d5b47c  stp x8,xzr,[sp, #0x70]
7101d5b480  cbz x0,0x7101d5b488
7101d5b484  bl 0x710392eb40
7101d5b488  ldp d9,d8,[sp, #0x120]
7101d5b48c  ldr x28,[sp, #0x130]
7101d5b490  ldp x29,x30,[sp, #0x170]
7101d5b494  ldp x20,x19,[sp, #0x160]
7101d5b498  ldp x22,x21,[sp, #0x150]
7101d5b49c  ldp x24,x23,[sp, #0x140]
7101d5b4a0  add sp,sp,#0x180
7101d5b4a4  ret
7101d5b4a8  ldrsw x9,[x16, #0x4]
7101d5b4ac  adrp x10,0x7104742000
7101d5b4b0  add x10,x10,#0xdbb
7101d5b4b4  add x8,x8,x9
7101d5b4b8  tst w9,#0x80000000
7101d5b4bc  csel x9,x10,x8,ne
7101d5b4c0  b 0x7101d5aef4
7101d5b4c4  adrp x0,0x7105314000
7101d5b4c8  add x0,x0,#0x4d8
7101d5b4cc  bl 0x71039c06b0
7101d5b4d0  cbz w0,0x7101d5ac74
7101d5b4d4  bl 0x7101764000
7101d5b4d8  adrp x0,0x7101763000
7101d5b4dc  add x0,x0,#0xc40
7101d5b4e0  adrp x1,0x71052c5000
7101d5b4e4  add x1,x1,#0x180
7101d5b4e8  adrp x2,0x7104f17000
7101d5b4ec  add x2,x2,#0x0
7101d5b4f0  bl 0x71000001c0
7101d5b4f4  adrp x0,0x7105314000
7101d5b4f8  add x0,x0,#0x4d8
7101d5b4fc  bl 0x71039c06c0
7101d5b500  b 0x7101d5ac74
7101d5b504  adrp x0,0x7105314000
7101d5b508  add x0,x0,#0x4d8
7101d5b50c  bl 0x71039c06b0
7101d5b510  cbz w0,0x7101d5ac8c
7101d5b514  bl 0x7101764000
7101d5b518  adrp x0,0x7101763000
7101d5b51c  add x0,x0,#0xc40
7101d5b520  adrp x1,0x71052c5000
7101d5b524  add x1,x1,#0x180
7101d5b528  adrp x2,0x7104f17000
7101d5b52c  add x2,x2,#0x0
7101d5b530  bl 0x71000001c0
7101d5b534  adrp x0,0x7105314000
7101d5b538  add x0,x0,#0x4d8
7101d5b53c  bl 0x71039c06c0
7101d5b540  b 0x7101d5ac8c
7101d5b544  adrp x0,0x7105314000
7101d5b548  add x0,x0,#0x4d8
7101d5b54c  bl 0x71039c06b0
7101d5b550  cbz w0,0x7101d5acf8
7101d5b554  bl 0x7101764000
7101d5b558  adrp x0,0x7101763000
7101d5b55c  add x0,x0,#0xc40
7101d5b560  adrp x1,0x71052c5000
7101d5b564  add x1,x1,#0x180
7101d5b568  adrp x2,0x7104f17000
7101d5b56c  add x2,x2,#0x0
7101d5b570  bl 0x71000001c0
7101d5b574  adrp x0,0x7105314000
7101d5b578  add x0,x0,#0x4d8
7101d5b57c  bl 0x71039c06c0
7101d5b580  b 0x7101d5acf8
