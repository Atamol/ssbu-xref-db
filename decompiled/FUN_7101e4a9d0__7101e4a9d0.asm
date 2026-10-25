// addr:      7101e4a9d0
// offset:    0x1e4a9d0
// name:      FUN_7101e4a9d0
// mangled:   
// size:      1144

7101e4a9d0  sub sp,sp,#0x80
7101e4a9d4  stp x20,x19,[sp, #0x60]
7101e4a9d8  stp x29,x30,[sp, #0x70]
7101e4a9dc  add x29,sp,#0x70
7101e4a9e0  ldr w8,[x0, #0x184]
7101e4a9e4  mov x19,x0
7101e4a9e8  cbz w8,0x7101e4aa1c
7101e4a9ec  ldr x9,[x19, #0x1c0]
7101e4a9f0  ldr x8,[x9]
7101e4a9f4  ldrsw x10,[x8, #0x25c]
7101e4a9f8  cmn w10,#0x1
7101e4a9fc  b.eq 0x7101e4aac4
7101e4aa00  cmp w10,#0x2
7101e4aa04  b.cs 0x7101e4ae44
7101e4aa08  mov w11,#0x48
7101e4aa0c  madd x9,x10,x11,x9
7101e4aa10  mov w10,#0x1
7101e4aa14  ldrb w9,[x9, #0x8]
7101e4aa18  b 0x7101e4aacc
7101e4aa1c  ldr x8,[x19, #0x1c8]
7101e4aa20  add x0,x8,#0x10
7101e4aa24  adrp x1,0x710437c000
7101e4aa28  add x1,x1,#0xaf5
7101e4aa2c  add x20,x19,#0x1c8
7101e4aa30  bl 0x710377a120
7101e4aa34  ldr x8,[x19, #0x1c8]
7101e4aa38  ldr x8,[x8, #0x18]
7101e4aa3c  ldr x8,[x8, #0x10]
7101e4aa40  cbz x8,0x7101e4acd4
7101e4aa44  ldr x9,[x8, #0xd8]
7101e4aa48  cbz x9,0x7101e4acd0
7101e4aa4c  ldrh w12,[x9]
7101e4aa50  cbz w12,0x7101e4acd0
7101e4aa54  mov w10,wzr
7101e4aa58  mov w8,wzr
7101e4aa5c  orr w11,wzr,#0x3
7101e4aa60  mov x13,x9
7101e4aa64  orr w14,w12,#0x1
7101e4aa68  and w14,w14,#0xffff
7101e4aa6c  cmp w14,#0xf
7101e4aa70  b.ne 0x7101e4aa94
7101e4aa74  and w14,w12,#0xffff
7101e4aa78  cmp w14,#0xe
7101e4aa7c  b.ne 0x7101e4aaa0
7101e4aa80  ldrh w13,[x13, #0x6]
7101e4aa84  lsr w13,w13,#0x1
7101e4aa88  mov w12,wzr
7101e4aa8c  add w13,w13,#0x4
7101e4aa90  b 0x7101e4aaac
7101e4aa94  mov w12,#0x1
7101e4aa98  mov w13,#0x1
7101e4aa9c  b 0x7101e4aaac
7101e4aaa0  cmp w14,#0xf
7101e4aaa4  mov w12,wzr
7101e4aaa8  csel w13,w11,wzr,eq
7101e4aaac  add w10,w13,w10
7101e4aab0  add x13,x9,w10, UXTW  #0x1
7101e4aab4  add w8,w12,w8
7101e4aab8  ldrh w12,[x13]
7101e4aabc  cbnz w12,0x7101e4aa64
7101e4aac0  b 0x7101e4acd4
7101e4aac4  mov x10,xzr
7101e4aac8  mov w9,wzr
7101e4aacc  ldr x11,[x19, #0x250]
7101e4aad0  ldr x11,[x11]
7101e4aad4  ldr x12,[x11, #0x8]
7101e4aad8  ldrb w11,[x12, #0x388]
7101e4aadc  cbz w11,0x7101e4ab48
7101e4aae0  ldrb w11,[x19, #0x22d]
7101e4aae4  cmp w11,#0x3
7101e4aae8  b.hi 0x7101e4ab48
7101e4aaec  ldr x12,[x12]
7101e4aaf0  mov w13,#0x1d8
7101e4aaf4  madd x13,x11,x13,x12
7101e4aaf8  cmp x12,#0x0
7101e4aafc  ccmp x13,#0x0,#0x4,ne
7101e4ab00  b.eq 0x7101e4ab48
7101e4ab04  mov w13,#0x1d8
7101e4ab08  madd x11,x11,x13,x12
7101e4ab0c  ldrb w11,[x11, #0x20]
7101e4ab10  cmp w11,#0x3
7101e4ab14  b.ne 0x7101e4ab48
7101e4ab18  adrp x8,0x710532f000
7101e4ab1c  ldr x8,[x8, #0x8d0]
7101e4ab20  ldr x0,[x8, #0x8]
7101e4ab24  ldp x8,x9,[x0, #0x40]
7101e4ab28  sub x9,x9,x8
7101e4ab2c  asr x9,x9,#0x3
7101e4ab30  cmp x9,#0x4
7101e4ab34  b.cc 0x7101e4ad90
7101e4ab38  ldr x20,[x8, #0x18]
7101e4ab3c  ldrb w8,[x0, #0x191]
7101e4ab40  cbnz w8,0x7101e4ae0c
7101e4ab44  b 0x7101e4ad9c
7101e4ab48  ldrb w8,[x8, #0x280]
7101e4ab4c  cbz w8,0x7101e4acbc
7101e4ab50  mov w8,#0x1
7101e4ab54  str w8,[x19, #0x228]
7101e4ab58  ldr w8,[x19, #0x228]
7101e4ab5c  cbz w8,0x7101e4ad78
7101e4ab60  ldr x8,[x19, #0x190]
7101e4ab64  ldr x8,[x8]
7101e4ab68  ldr x0,[x8]
7101e4ab6c  mov w1,wzr
7101e4ab70  bl 0x71037760f0
7101e4ab74  ldrb w8,[x19, #0x22d]
7101e4ab78  cmp x8,#0x3
7101e4ab7c  b.hi 0x7101e4aba4
7101e4ab80  ldr x9,[x19, #0x1a8]
7101e4ab84  add x8,x9,x8, LSL #0x3
7101e4ab88  ldr x8,[x8, #0x48]
7101e4ab8c  cbz x8,0x7101e4aba4
7101e4ab90  ldr x0,[x8, #0x8]
7101e4ab94  fmov s0,0x3f800000
7101e4ab98  adrp x1,0x710432a000
7101e4ab9c  add x1,x1,#0x8bc
7101e4aba0  bl 0x7103778300
7101e4aba4  ldr x20,[x19, #0x1c0]
7101e4aba8  ldr x0,[x20]
7101e4abac  ldr x8,[x0]
7101e4abb0  ldr x8,[x8, #0x60]
7101e4abb4  mov w1,wzr
7101e4abb8  blr x8
7101e4abbc  ldr x0,[x20]
7101e4abc0  ldr x8,[x0]
7101e4abc4  ldr x8,[x8, #0x70]
7101e4abc8  mov w1,wzr
7101e4abcc  blr x8
7101e4abd0  add x0,x19,#0x198
7101e4abd4  adrp x1,0x710439d000
7101e4abd8  add x1,x1,#0xa27
7101e4abdc  mov x8,sp
7101e4abe0  bl 0x71037780e0
7101e4abe4  mov w0,#0x10
7101e4abe8  mov w1,#0x10
7101e4abec  bl 0x710392e290
7101e4abf0  cbnz x0,0x7101e4ac38
7101e4abf4  adrp x8,0x7105332000
7101e4abf8  ldr x0,[x8, #0xf00]
7101e4abfc  cbz x0,0x7101e4ac34
7101e4ac00  mov w8,#0x10
7101e4ac04  stur wzr,[x29, #-0x14]
7101e4ac08  sub x1,x29,#0x14
7101e4ac0c  stur x8,[x29, #-0x20]
7101e4ac10  ldr x8,[x0]
7101e4ac14  ldr x8,[x8, #0x30]
7101e4ac18  sub x2,x29,#0x20
7101e4ac1c  blr x8
7101e4ac20  tbz w0,#0x0,0x7101e4ac34
7101e4ac24  mov w0,#0x10
7101e4ac28  mov w1,#0x10
7101e4ac2c  bl 0x710392e290
7101e4ac30  cbnz x0,0x7101e4ac38
7101e4ac34  mov x0,xzr
7101e4ac38  ldr x8,[sp, #0x8]
7101e4ac3c  adrp x20,0x710523d000
7101e4ac40  add x20,x20,#0x9e8
7101e4ac44  str xzr,[sp, #0x8]
7101e4ac48  stp x20,x8,[x0]
7101e4ac4c  ldr x8,[x19, #0x210]
7101e4ac50  str x0,[x19, #0x210]
7101e4ac54  cbz x8,0x7101e4ac68
7101e4ac58  ldr x9,[x8]
7101e4ac5c  ldr x9,[x9, #0x8]
7101e4ac60  mov x0,x8
7101e4ac64  blr x9
7101e4ac68  stp x20,xzr,[sp]
7101e4ac6c  ldr x0,[x19, #0x210]
7101e4ac70  fmov s0,0x3f800000
7101e4ac74  bl 0x710377aee0
7101e4ac78  add x8,x19,#0x184
7101e4ac7c  orr x9,xzr,#-0x100000000
7101e4ac80  str wzr,[x19, #0x178]
7101e4ac84  stp xzr,xzr,[x19, #0x10]
7101e4ac88  stp xzr,xzr,[x19, #0x168]
7101e4ac8c  stp xzr,xzr,[x19, #0x158]
7101e4ac90  stp xzr,xzr,[x19, #0x148]
7101e4ac94  stp xzr,xzr,[x19, #0x138]
7101e4ac98  str x9,[x8]
7101e4ac9c  mov x8,#0xf
7101e4aca0  movk x8,#0xe, LSL #32
7101e4aca4  orr x9,xzr,#-0xffffffff
7101e4aca8  str x8,[x19, #0x130]
7101e4acac  add x8,x19,#0x17c
7101e4acb0  strb wzr,[x19, #0x18c]
7101e4acb4  str x9,[x8]
7101e4acb8  b 0x7101e4ad78
7101e4acbc  cbz x10,0x7101e4ab58
7101e4acc0  cmp w9,#0x1
7101e4acc4  b.eq 0x7101e4ad88
7101e4acc8  cbz w9,0x7101e4ab50
7101e4accc  b 0x7101e4ab58
7101e4acd0  mov w8,wzr
7101e4acd4  mov x0,x20
7101e4acd8  mov w1,wzr
7101e4acdc  str w8,[x19, #0x1d8]
7101e4ace0  bl 0x7101e94ba0
7101e4ace4  ldr x20,[x19, #0x1c0]
7101e4ace8  ldr x0,[x20]
7101e4acec  ldr x8,[x0]
7101e4acf0  ldr x8,[x8, #0x60]
7101e4acf4  mov w1,#0x1
7101e4acf8  blr x8
7101e4acfc  ldr x0,[x20]
7101e4ad00  ldr x8,[x0]
7101e4ad04  ldr x8,[x8, #0x70]
7101e4ad08  mov w1,#0x1
7101e4ad0c  blr x8
7101e4ad10  ldr x0,[x19, #0x1c0]
7101e4ad14  ldrb w8,[x0, #0x8]
7101e4ad18  cmp w8,#0x0
7101e4ad1c  cset w1,ne
7101e4ad20  mov w2,#0x1
7101e4ad24  bl 0x7103771a80
7101e4ad28  ldr x8,[x19, #0x190]
7101e4ad2c  ldr x8,[x8]
7101e4ad30  ldr x0,[x8]
7101e4ad34  mov w1,#0x1
7101e4ad38  bl 0x71037760f0
7101e4ad3c  ldrb w8,[x19, #0x22d]
7101e4ad40  cmp x8,#0x3
7101e4ad44  b.hi 0x7101e4ad78
7101e4ad48  ldr x9,[x19, #0x1a8]
7101e4ad4c  add x8,x9,x8, LSL #0x3
7101e4ad50  ldr x8,[x8, #0x48]
7101e4ad54  cbz x8,0x7101e4ad78
7101e4ad58  ldr x0,[x8, #0x8]
7101e4ad5c  ldp x29,x30,[sp, #0x70]
7101e4ad60  ldp x20,x19,[sp, #0x60]
7101e4ad64  adrp x1,0x71042a3000
7101e4ad68  add x1,x1,#0x880
7101e4ad6c  fmov s0,0x3f800000
7101e4ad70  add sp,sp,#0x80
7101e4ad74  b 0x7103778300
7101e4ad78  ldp x29,x30,[sp, #0x70]
7101e4ad7c  ldp x20,x19,[sp, #0x60]
7101e4ad80  add sp,sp,#0x80
7101e4ad84  ret
7101e4ad88  mov w8,#0x2
7101e4ad8c  b 0x7101e4ab54
7101e4ad90  mov x20,xzr
7101e4ad94  ldrb w8,[x0, #0x191]
7101e4ad98  cbnz w8,0x7101e4ae0c
7101e4ad9c  mov w2,#0x4
7101e4ada0  mov x1,x20
7101e4ada4  bl 0x7103313f20
7101e4ada8  tbz w0,#0x0,0x7101e4ae0c
7101e4adac  add x0,sp,#0x10
7101e4adb0  mov x1,x20
7101e4adb4  bl 0x71024076d0
7101e4adb8  ldr x8,[sp, #0x20]
7101e4adbc  adrp x9,0x7104f73000
7101e4adc0  add x9,x9,#0xd50
7101e4adc4  str x9,[sp, #0x18]
7101e4adc8  cbz x8,0x7101e4ae38
7101e4adcc  adrp x8,0x7106dd5000
7101e4add0  ldrb w8,[x8, #0x3a8]
7101e4add4  cmp w8,#0x1
7101e4add8  b.ne 0x7101e4ae38
7101e4addc  adrp x9,0x7106dd5000
7101e4ade0  ldr w8,[sp, #0x28]
7101e4ade4  ldr w9,[x9, #0x3ac]
7101e4ade8  cmp w8,w9
7101e4adec  b.ne 0x7101e4ae38
7101e4adf0  ldr x8,[sp, #0x20]
7101e4adf4  ldr wzr,[x8, #0x38]!
7101e4adf8  ldaxr w9,[x8]
7101e4adfc  sub w9,w9,#0x1
7101e4ae00  stlxr w10,w9,[x8]
7101e4ae04  cbnz w10,0x7101e4adf8
7101e4ae08  b 0x7101e4ae38
7101e4ae0c  mov x8,#0x650000000000
7101e4ae10  movk x8,#0x87, LSL #48
7101e4ae14  strb wzr,[sp, #0x30]
7101e4ae18  stp xzr,x8,[sp, #0x20]
7101e4ae1c  mov x8,#-0x1
7101e4ae20  stp x8,xzr,[sp, #0x38]
7101e4ae24  adrp x8,0x7104f73000
7101e4ae28  add x8,x8,#0xd50
7101e4ae2c  str wzr,[sp, #0x10]
7101e4ae30  str xzr,[sp, #0x48]
7101e4ae34  str x8,[sp, #0x18]
7101e4ae38  str xzr,[sp, #0x20]
7101e4ae3c  strb wzr,[sp, #0x30]
7101e4ae40  b 0x7101e4ab50
7101e4ae44  bl 0x71039c2650
