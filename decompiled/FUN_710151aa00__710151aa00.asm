// addr:      710151aa00
// offset:    0x151aa00
// name:      FUN_710151aa00
// mangled:   
// size:      1216

710151aa00  stp x20,x19,[sp, #-0x20]!
710151aa04  stp x29,x30,[sp, #0x10]
710151aa08  add x29,sp,#0x10
710151aa0c  mov x19,x0
710151aa10  bl 0x7101341d50
710151aa14  adrp x1,0x710435a000
710151aa18  add x1,x1,#0xb09
710151aa1c  adrp x2,0x710151a000
710151aa20  add x2,x2,#0xec0
710151aa24  mov x0,x19
710151aa28  bl 0x710135bea0
710151aa2c  ldp x8,x9,[x19, #0x100]
710151aa30  subs x10,x9,x8
710151aa34  b.eq 0x710151aa90
710151aa38  ldp x11,x14,[x19, #0x118]
710151aa3c  lsr x12,x11,#0x5
710151aa40  and x12,x12,#0x7fffffffffffff8
710151aa44  add x12,x8,x12
710151aa48  ldr x13,[x12]
710151aa4c  add x14,x14,x11
710151aa50  add x13,x13,w11, UXTB  #0x4
710151aa54  lsr x11,x14,#0x5
710151aa58  and x11,x11,#0x7fffffffffffff8
710151aa5c  ldr x15,[x8, x11, LSL #0x0]
710151aa60  add x11,x19,#0x120
710151aa64  add x14,x15,w14, UXTB  #0x4
710151aa68  b 0x710151aa70
710151aa6c  ldr x13,[x12, #0x8]!
710151aa70  cmp x14,x13
710151aa74  b.eq 0x710151aa94
710151aa78  ldr x15,[x12]
710151aa7c  add x13,x13,#0x10
710151aa80  sub x15,x13,x15
710151aa84  cmp x15,#0x1, LSL #12
710151aa88  b.ne 0x710151aa70
710151aa8c  b 0x710151aa6c
710151aa90  add x11,x19,#0x120
710151aa94  asr x10,x10,#0x3
710151aa98  cmp x10,#0x3
710151aa9c  str xzr,[x11]
710151aaa0  b.cc 0x710151aacc
710151aaa4  ldr x0,[x8]
710151aaa8  cbz x0,0x710151aab4
710151aaac  bl 0x710392eb40
710151aab0  ldp x8,x9,[x19, #0x100]
710151aab4  add x8,x8,#0x8
710151aab8  sub x10,x9,x8
710151aabc  asr x10,x10,#0x3
710151aac0  cmp x10,#0x2
710151aac4  str x8,[x19, #0x100]
710151aac8  b.hi 0x710151aaa4
710151aacc  cmp x10,#0x1
710151aad0  b.eq 0x710151aae4
710151aad4  cmp x10,#0x2
710151aad8  b.ne 0x710151aaec
710151aadc  mov w8,#0x100
710151aae0  b 0x710151aae8
710151aae4  mov w8,#0x80
710151aae8  str x8,[x19, #0x118]
710151aaec  ldp x8,x9,[x19, #0xc8]
710151aaf0  subs x10,x9,x8
710151aaf4  b.eq 0x710151ab5c
710151aaf8  ldr x14,[x19, #0xe0]
710151aafc  lsr x11,x14,#0x6
710151ab00  and x11,x11,#0x3fffffffffffff8
710151ab04  add x12,x8,x11
710151ab08  mov x11,x19
710151ab0c  ldr x13,[x12]
710151ab10  ldr x16,[x11, #0xe8]!
710151ab14  and x15,x14,#0x1ff
710151ab18  add x14,x16,x14
710151ab1c  add x13,x13,x15, LSL #0x3
710151ab20  lsr x15,x14,#0x6
710151ab24  and x14,x14,#0x1ff
710151ab28  and x15,x15,#0x3fffffffffffff8
710151ab2c  ldr x15,[x8, x15, LSL #0x0]
710151ab30  add x14,x15,x14, LSL #0x3
710151ab34  b 0x710151ab3c
710151ab38  ldr x13,[x12, #0x8]!
710151ab3c  cmp x14,x13
710151ab40  b.eq 0x710151ab60
710151ab44  ldr x15,[x12]
710151ab48  add x13,x13,#0x8
710151ab4c  sub x15,x13,x15
710151ab50  cmp x15,#0x1, LSL #12
710151ab54  b.ne 0x710151ab3c
710151ab58  b 0x710151ab38
710151ab5c  add x11,x19,#0xe8
710151ab60  asr x10,x10,#0x3
710151ab64  cmp x10,#0x3
710151ab68  str xzr,[x11]
710151ab6c  b.cc 0x710151ab98
710151ab70  ldr x0,[x8]
710151ab74  cbz x0,0x710151ab80
710151ab78  bl 0x710392eb40
710151ab7c  ldp x8,x9,[x19, #0xc8]
710151ab80  add x8,x8,#0x8
710151ab84  sub x10,x9,x8
710151ab88  asr x10,x10,#0x3
710151ab8c  cmp x10,#0x2
710151ab90  str x8,[x19, #0xc8]
710151ab94  b.hi 0x710151ab70
710151ab98  cmp x10,#0x1
710151ab9c  b.eq 0x710151abb0
710151aba0  cmp x10,#0x2
710151aba4  b.ne 0x710151abb8
710151aba8  mov w8,#0x200
710151abac  b 0x710151abb4
710151abb0  mov w8,#0x100
710151abb4  str x8,[x19, #0xe0]
710151abb8  ldp x8,x9,[x19, #0x100]
710151abbc  subs x10,x9,x8
710151abc0  lsl x10,x10,#0x5
710151abc4  sub x10,x10,#0x1
710151abc8  csel x11,xzr,x10,eq
710151abcc  ldp x10,x12,[x19, #0x118]
710151abd0  add x10,x12,x10
710151abd4  cmp x11,x10
710151abd8  b.ne 0x710151abf0
710151abdc  add x0,x19,#0xf8
710151abe0  bl 0x710135a0f0
710151abe4  ldp x10,x11,[x19, #0x118]
710151abe8  add x10,x10,x11
710151abec  ldp x8,x9,[x19, #0x100]
710151abf0  cmp x9,x8
710151abf4  b.eq 0x710151ac0c
710151abf8  lsr x9,x10,#0x5
710151abfc  and x9,x9,#0x7fffffffffffff8
710151ac00  ldr x8,[x8, x9, LSL #0x0]
710151ac04  add x8,x8,w10, UXTB  #0x4
710151ac08  b 0x710151ac10
710151ac0c  mov x8,xzr
710151ac10  mov w9,#0x2
710151ac14  str w9,[x8]
710151ac18  mov x9,#-0x1
710151ac1c  str x9,[x8, #0x8]
710151ac20  ldr x8,[x19, #0x120]
710151ac24  add x8,x8,#0x1
710151ac28  str x8,[x19, #0x120]
710151ac2c  adrp x8,0x71052c3000
710151ac30  ldr x20,[x8, #0x3a0]
710151ac34  ldp x8,x9,[x19, #0xc8]
710151ac38  subs x9,x9,x8
710151ac3c  lsl x9,x9,#0x6
710151ac40  sub x9,x9,#0x1
710151ac44  csel x10,xzr,x9,eq
710151ac48  ldp x9,x11,[x19, #0xe0]
710151ac4c  add x9,x11,x9
710151ac50  cmp x10,x9
710151ac54  b.ne 0x710151ac6c
710151ac58  add x0,x19,#0xc0
710151ac5c  bl 0x710135ac80
710151ac60  ldp x9,x10,[x19, #0xe0]
710151ac64  ldr x8,[x19, #0xc8]
710151ac68  add x9,x9,x10
710151ac6c  lsr x10,x9,#0x6
710151ac70  and x9,x9,#0x1ff
710151ac74  and x10,x10,#0x3fffffffffffff8
710151ac78  ldr x8,[x8, x10, LSL #0x0]
710151ac7c  str x20,[x8, x9, LSL #0x3]
710151ac80  ldp x9,x8,[x19, #0xe0]
710151ac84  add x10,x8,#0x1
710151ac88  adrp x8,0x71052c3000
710151ac8c  str x10,[x19, #0xe8]
710151ac90  ldr x20,[x8, #0x3a8]
710151ac94  ldp x8,x11,[x19, #0xc8]
710151ac98  subs x11,x11,x8
710151ac9c  lsl x11,x11,#0x6
710151aca0  sub x11,x11,#0x1
710151aca4  csel x11,xzr,x11,eq
710151aca8  add x9,x10,x9
710151acac  cmp x11,x9
710151acb0  b.ne 0x710151acc8
710151acb4  add x0,x19,#0xc0
710151acb8  bl 0x710135ac80
710151acbc  ldp x9,x10,[x19, #0xe0]
710151acc0  ldr x8,[x19, #0xc8]
710151acc4  add x9,x9,x10
710151acc8  lsr x10,x9,#0x6
710151accc  and x9,x9,#0x1ff
710151acd0  and x10,x10,#0x3fffffffffffff8
710151acd4  ldr x8,[x8, x10, LSL #0x0]
710151acd8  str x20,[x8, x9, LSL #0x3]
710151acdc  ldp x9,x8,[x19, #0xe0]
710151ace0  add x10,x8,#0x1
710151ace4  adrp x8,0x71052c3000
710151ace8  str x10,[x19, #0xe8]
710151acec  ldr x20,[x8, #0x3b0]
710151acf0  ldp x8,x11,[x19, #0xc8]
710151acf4  subs x11,x11,x8
710151acf8  lsl x11,x11,#0x6
710151acfc  sub x11,x11,#0x1
710151ad00  csel x11,xzr,x11,eq
710151ad04  add x9,x10,x9
710151ad08  cmp x11,x9
710151ad0c  b.ne 0x710151ad24
710151ad10  add x0,x19,#0xc0
710151ad14  bl 0x710135ac80
710151ad18  ldp x9,x10,[x19, #0xe0]
710151ad1c  ldr x8,[x19, #0xc8]
710151ad20  add x9,x9,x10
710151ad24  lsr x10,x9,#0x6
710151ad28  and x9,x9,#0x1ff
710151ad2c  and x10,x10,#0x3fffffffffffff8
710151ad30  ldr x8,[x8, x10, LSL #0x0]
710151ad34  str x20,[x8, x9, LSL #0x3]
710151ad38  ldp x9,x8,[x19, #0xe0]
710151ad3c  add x10,x8,#0x1
710151ad40  adrp x8,0x71052c3000
710151ad44  str x10,[x19, #0xe8]
710151ad48  ldr x20,[x8, #0x368]
710151ad4c  ldp x8,x11,[x19, #0xc8]
710151ad50  subs x11,x11,x8
710151ad54  lsl x11,x11,#0x6
710151ad58  sub x11,x11,#0x1
710151ad5c  csel x11,xzr,x11,eq
710151ad60  add x9,x10,x9
710151ad64  cmp x11,x9
710151ad68  b.ne 0x710151ad80
710151ad6c  add x0,x19,#0xc0
710151ad70  bl 0x710135ac80
710151ad74  ldp x9,x10,[x19, #0xe0]
710151ad78  ldr x8,[x19, #0xc8]
710151ad7c  add x9,x9,x10
710151ad80  lsr x10,x9,#0x6
710151ad84  and x9,x9,#0x1ff
710151ad88  and x10,x10,#0x3fffffffffffff8
710151ad8c  ldr x8,[x8, x10, LSL #0x0]
710151ad90  str x20,[x8, x9, LSL #0x3]
710151ad94  ldp x9,x8,[x19, #0xe0]
710151ad98  add x10,x8,#0x1
710151ad9c  adrp x8,0x71052c3000
710151ada0  str x10,[x19, #0xe8]
710151ada4  ldr x20,[x8, #0x370]
710151ada8  ldp x8,x11,[x19, #0xc8]
710151adac  subs x11,x11,x8
710151adb0  lsl x11,x11,#0x6
710151adb4  sub x11,x11,#0x1
710151adb8  csel x11,xzr,x11,eq
710151adbc  add x9,x10,x9
710151adc0  cmp x11,x9
710151adc4  b.ne 0x710151addc
710151adc8  add x0,x19,#0xc0
710151adcc  bl 0x710135ac80
710151add0  ldp x9,x10,[x19, #0xe0]
710151add4  ldr x8,[x19, #0xc8]
710151add8  add x9,x9,x10
710151addc  lsr x10,x9,#0x6
710151ade0  and x9,x9,#0x1ff
710151ade4  and x10,x10,#0x3fffffffffffff8
710151ade8  ldr x8,[x8, x10, LSL #0x0]
710151adec  str x20,[x8, x9, LSL #0x3]
710151adf0  ldp x9,x8,[x19, #0xe0]
710151adf4  add x10,x8,#0x1
710151adf8  adrp x8,0x71052c3000
710151adfc  str x10,[x19, #0xe8]
710151ae00  ldr x20,[x8, #0x378]
710151ae04  ldp x8,x11,[x19, #0xc8]
710151ae08  subs x11,x11,x8
710151ae0c  lsl x11,x11,#0x6
710151ae10  sub x11,x11,#0x1
710151ae14  csel x11,xzr,x11,eq
710151ae18  add x9,x10,x9
710151ae1c  cmp x11,x9
710151ae20  b.ne 0x710151ae38
710151ae24  add x0,x19,#0xc0
710151ae28  bl 0x710135ac80
710151ae2c  ldp x9,x10,[x19, #0xe0]
710151ae30  ldr x8,[x19, #0xc8]
710151ae34  add x9,x9,x10
710151ae38  lsr x10,x9,#0x6
710151ae3c  and x9,x9,#0x1ff
710151ae40  and x10,x10,#0x3fffffffffffff8
710151ae44  ldr x8,[x8, x10, LSL #0x0]
710151ae48  str x20,[x8, x9, LSL #0x3]
710151ae4c  ldp x9,x8,[x19, #0xe0]
710151ae50  add x10,x8,#0x1
710151ae54  adrp x8,0x71052c3000
710151ae58  str x10,[x19, #0xe8]
710151ae5c  ldr x20,[x8, #0x788]
710151ae60  ldp x8,x11,[x19, #0xc8]
710151ae64  subs x11,x11,x8
710151ae68  lsl x11,x11,#0x6
710151ae6c  sub x11,x11,#0x1
710151ae70  csel x11,xzr,x11,eq
710151ae74  add x9,x10,x9
710151ae78  cmp x11,x9
710151ae7c  b.ne 0x710151ae94
710151ae80  add x0,x19,#0xc0
710151ae84  bl 0x710135ac80
710151ae88  ldp x9,x10,[x19, #0xe0]
710151ae8c  ldr x8,[x19, #0xc8]
710151ae90  add x9,x9,x10
710151ae94  lsr x10,x9,#0x6
710151ae98  and x9,x9,#0x1ff
710151ae9c  and x10,x10,#0x3fffffffffffff8
710151aea0  ldr x8,[x8, x10, LSL #0x0]
710151aea4  str x20,[x8, x9, LSL #0x3]
710151aea8  ldr x8,[x19, #0xe8]
710151aeac  add x8,x8,#0x1
710151aeb0  str x8,[x19, #0xe8]
710151aeb4  ldp x29,x30,[sp, #0x10]
710151aeb8  ldp x20,x19,[sp], #0x20
710151aebc  ret
