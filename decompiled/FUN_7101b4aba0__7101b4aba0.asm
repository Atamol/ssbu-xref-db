// addr:      7101b4aba0
// offset:    0x1b4aba0
// name:      FUN_7101b4aba0
// mangled:   
// size:      1076

7101b4aba0  sub sp,sp,#0x80
7101b4aba4  stp x22,x21,[sp, #0x50]
7101b4aba8  stp x20,x19,[sp, #0x60]
7101b4abac  stp x29,x30,[sp, #0x70]
7101b4abb0  add x29,sp,#0x70
7101b4abb4  mov w22,w4
7101b4abb8  mov w20,w3
7101b4abbc  mov w21,w2
7101b4abc0  mov x19,x0
7101b4abc4  cmp w1,#0x4
7101b4abc8  strb wzr,[sp, #0x10]
7101b4abcc  str xzr,[sp, #0x8]
7101b4abd0  b.hi 0x7101b4af20
7101b4abd4  mov w8,w1
7101b4abd8  adrp x9,0x71044f8000
7101b4abdc  add x9,x9,#0x734
7101b4abe0  ldrsw x8,[x9, x8, LSL #0x2]
7101b4abe4  add x8,x8,x9
7101b4abe8  br x8
7101b4abec  mov x10,#0x735f
7101b4abf0  movk x10,#0x6174, LSL #16
7101b4abf4  movk x10,#0x6567, LSL #32
7101b4abf8  movk x10,#0x705f, LSL #48
7101b4abfc  str x10,[sp, #0x18]
7101b4ac00  mov w10,#0x6b6f
7101b4ac04  strh w10,[sp, #0x20]
7101b4ac08  mov x10,#0x5f65
7101b4ac0c  movk x10,#0x7473, LSL #16
7101b4ac10  movk x10,#0x6461, LSL #32
7101b4ac14  movk x10,#0x7569, LSL #48
7101b4ac18  stur x10,[sp, #0x22]
7101b4ac1c  mov w10,#0x5f6d
7101b4ac20  movk w10,#0x7974, LSL #16
7101b4ac24  stur w10,[sp, #0x2a]
7101b4ac28  mov w10,#0x6570
7101b4ac2c  mov x9,#0x656d
7101b4ac30  movk x9,#0x5f6c, LSL #16
7101b4ac34  movk x9,#0x6e69, LSL #32
7101b4ac38  movk x9,#0x6f66, LSL #48
7101b4ac3c  str x9,[sp, #0x10]
7101b4ac40  strh w10,[sp, #0x2e]
7101b4ac44  mov x10,#0x6e5f
7101b4ac48  movk x10,#0x726f, LSL #16
7101b4ac4c  movk x10,#0x616d, LSL #32
7101b4ac50  movk x10,#0x6c, LSL #48
7101b4ac54  str x10,[sp, #0x30]
7101b4ac58  add x9,sp,#0x8
7101b4ac5c  mov w10,#0x27
7101b4ac60  str w10,[sp, #0xc]
7101b4ac64  mov w8,#0x9dc5
7101b4ac68  movk w8,#0x811c, LSL #16
7101b4ac6c  add x9,x9,#0x9
7101b4ac70  mov w11,#0x6d
7101b4ac74  mov w10,#0x89
7101b4ac78  mul w8,w8,w10
7101b4ac7c  and w11,w11,#0xff
7101b4ac80  eor w8,w8,w11
7101b4ac84  ldrb w11,[x9], #0x1
7101b4ac88  cbnz w11,0x7101b4ac78
7101b4ac8c  b 0x7101b4af1c
7101b4ac90  mov w10,#0x6b6f
7101b4ac94  strh w10,[sp, #0x20]
7101b4ac98  mov x10,#0x5f65
7101b4ac9c  movk x10,#0x7473, LSL #16
7101b4aca0  movk x10,#0x6461, LSL #32
7101b4aca4  movk x10,#0x7569, LSL #48
7101b4aca8  stur x10,[sp, #0x22]
7101b4acac  mov w10,#0x5f6d
7101b4acb0  movk w10,#0x7974, LSL #16
7101b4acb4  stur w10,[sp, #0x2a]
7101b4acb8  mov w10,#0x6570
7101b4acbc  strh w10,[sp, #0x2e]
7101b4acc0  mov x10,#0x655f
7101b4acc4  movk x10,#0x656c, LSL #16
7101b4acc8  mov x9,#0x735f
7101b4accc  movk x9,#0x6174, LSL #16
7101b4acd0  movk x9,#0x6567, LSL #32
7101b4acd4  movk x9,#0x705f, LSL #48
7101b4acd8  movk x10,#0x7463, LSL #32
7101b4acdc  movk x10,#0x6972, LSL #48
7101b4ace0  str x10,[sp, #0x30]
7101b4ace4  mov x8,#0x656d
7101b4ace8  movk x8,#0x5f6c, LSL #16
7101b4acec  str x9,[sp, #0x18]
7101b4acf0  mov w10,#0x63
7101b4acf4  strh w10,[sp, #0x38]
7101b4acf8  movk x8,#0x6e69, LSL #32
7101b4acfc  movk x8,#0x6f66, LSL #48
7101b4ad00  str x8,[sp, #0x10]
7101b4ad04  add x9,sp,#0x8
7101b4ad08  mov w10,#0x29
7101b4ad0c  str w10,[sp, #0xc]
7101b4ad10  mov w8,#0x9dc5
7101b4ad14  movk w8,#0x811c, LSL #16
7101b4ad18  add x9,x9,#0x9
7101b4ad1c  mov w11,#0x6d
7101b4ad20  mov w10,#0x89
7101b4ad24  mul w8,w8,w10
7101b4ad28  and w11,w11,#0xff
7101b4ad2c  eor w8,w8,w11
7101b4ad30  ldrb w11,[x9], #0x1
7101b4ad34  cbnz w11,0x7101b4ad24
7101b4ad38  b 0x7101b4af1c
7101b4ad3c  mov w10,#0x6b6f
7101b4ad40  strh w10,[sp, #0x20]
7101b4ad44  mov x10,#0x5f65
7101b4ad48  movk x10,#0x7473, LSL #16
7101b4ad4c  movk x10,#0x6461, LSL #32
7101b4ad50  movk x10,#0x7569, LSL #48
7101b4ad54  stur x10,[sp, #0x22]
7101b4ad58  mov w10,#0x5f6d
7101b4ad5c  movk w10,#0x7974, LSL #16
7101b4ad60  mov x9,#0x735f
7101b4ad64  movk x9,#0x6174, LSL #16
7101b4ad68  strb wzr,[sp, #0x34]
7101b4ad6c  stur w10,[sp, #0x2a]
7101b4ad70  mov w10,#0x6570
7101b4ad74  mov x8,#0x656d
7101b4ad78  movk x8,#0x5f6c, LSL #16
7101b4ad7c  movk x9,#0x6567, LSL #32
7101b4ad80  movk x9,#0x705f, LSL #48
7101b4ad84  strh w10,[sp, #0x2e]
7101b4ad88  mov w10,#0x665f
7101b4ad8c  movk w10,#0x796c, LSL #16
7101b4ad90  movk x8,#0x6e69, LSL #32
7101b4ad94  movk x8,#0x6f66, LSL #48
7101b4ad98  str x9,[sp, #0x18]
7101b4ad9c  add x9,sp,#0x8
7101b4ada0  str w10,[sp, #0x30]
7101b4ada4  str x8,[sp, #0x10]
7101b4ada8  mov w10,#0x24
7101b4adac  mov w8,#0x9dc5
7101b4adb0  movk w8,#0x811c, LSL #16
7101b4adb4  add x9,x9,#0x9
7101b4adb8  str w10,[sp, #0xc]
7101b4adbc  mov w11,#0x6d
7101b4adc0  mov w10,#0x89
7101b4adc4  mul w8,w8,w10
7101b4adc8  and w11,w11,#0xff
7101b4adcc  eor w8,w8,w11
7101b4add0  ldrb w11,[x9], #0x1
7101b4add4  cbnz w11,0x7101b4adc4
7101b4add8  b 0x7101b4af1c
7101b4addc  mov x10,#0x735f
7101b4ade0  movk x10,#0x6174, LSL #16
7101b4ade4  movk x10,#0x6567, LSL #32
7101b4ade8  movk x10,#0x705f, LSL #48
7101b4adec  str x10,[sp, #0x18]
7101b4adf0  mov w10,#0x6b6f
7101b4adf4  strh w10,[sp, #0x20]
7101b4adf8  mov x10,#0x5f65
7101b4adfc  movk x10,#0x7473, LSL #16
7101b4ae00  movk x10,#0x6461, LSL #32
7101b4ae04  movk x10,#0x7569, LSL #48
7101b4ae08  stur x10,[sp, #0x22]
7101b4ae0c  mov w10,#0x5f6d
7101b4ae10  movk w10,#0x7974, LSL #16
7101b4ae14  stur w10,[sp, #0x2a]
7101b4ae18  mov w10,#0x6570
7101b4ae1c  mov x9,#0x656d
7101b4ae20  movk x9,#0x5f6c, LSL #16
7101b4ae24  movk x9,#0x6e69, LSL #32
7101b4ae28  movk x9,#0x6f66, LSL #48
7101b4ae2c  str x9,[sp, #0x10]
7101b4ae30  strh w10,[sp, #0x2e]
7101b4ae34  mov x10,#0x675f
7101b4ae38  movk x10,#0x6f72, LSL #16
7101b4ae3c  movk x10,#0x6e75, LSL #32
7101b4ae40  movk x10,#0x64, LSL #48
7101b4ae44  str x10,[sp, #0x30]
7101b4ae48  add x9,sp,#0x8
7101b4ae4c  mov w10,#0x27
7101b4ae50  str w10,[sp, #0xc]
7101b4ae54  mov w8,#0x9dc5
7101b4ae58  movk w8,#0x811c, LSL #16
7101b4ae5c  add x9,x9,#0x9
7101b4ae60  mov w11,#0x6d
7101b4ae64  mov w10,#0x89
7101b4ae68  mul w8,w8,w10
7101b4ae6c  and w11,w11,#0xff
7101b4ae70  eor w8,w8,w11
7101b4ae74  ldrb w11,[x9], #0x1
7101b4ae78  cbnz w11,0x7101b4ae68
7101b4ae7c  b 0x7101b4af1c
7101b4ae80  mov w10,#0x6b6f
7101b4ae84  strh w10,[sp, #0x20]
7101b4ae88  mov x10,#0x5f65
7101b4ae8c  movk x10,#0x7473, LSL #16
7101b4ae90  movk x10,#0x6461, LSL #32
7101b4ae94  movk x10,#0x7569, LSL #48
7101b4ae98  stur x10,[sp, #0x22]
7101b4ae9c  mov w10,#0x5f6d
7101b4aea0  movk w10,#0x7974, LSL #16
7101b4aea4  mov x9,#0x735f
7101b4aea8  movk x9,#0x6174, LSL #16
7101b4aeac  strb wzr,[sp, #0x34]
7101b4aeb0  stur w10,[sp, #0x2a]
7101b4aeb4  mov w10,#0x6570
7101b4aeb8  mov x8,#0x656d
7101b4aebc  movk x8,#0x5f6c, LSL #16
7101b4aec0  movk x9,#0x6567, LSL #32
7101b4aec4  movk x9,#0x705f, LSL #48
7101b4aec8  strh w10,[sp, #0x2e]
7101b4aecc  mov w10,#0x695f
7101b4aed0  movk w10,#0x6563, LSL #16
7101b4aed4  movk x8,#0x6e69, LSL #32
7101b4aed8  movk x8,#0x6f66, LSL #48
7101b4aedc  str x9,[sp, #0x18]
7101b4aee0  add x9,sp,#0x8
7101b4aee4  str w10,[sp, #0x30]
7101b4aee8  str x8,[sp, #0x10]
7101b4aeec  mov w10,#0x24
7101b4aef0  mov w8,#0x9dc5
7101b4aef4  movk w8,#0x811c, LSL #16
7101b4aef8  add x9,x9,#0x9
7101b4aefc  str w10,[sp, #0xc]
7101b4af00  mov w11,#0x6d
7101b4af04  mov w10,#0x89
7101b4af08  mul w8,w8,w10
7101b4af0c  and w11,w11,#0xff
7101b4af10  eor w8,w8,w11
7101b4af14  ldrb w11,[x9], #0x1
7101b4af18  cbnz w11,0x7101b4af08
7101b4af1c  str w8,[sp, #0x8]
7101b4af20  add x8,sp,#0x8
7101b4af24  add x0,x19,#0x38
7101b4af28  add x1,x8,#0x8
7101b4af2c  bl 0x710377a120
7101b4af30  tbz w22,#0x0,0x7101b4af48
7101b4af34  add x0,x19,#0x58
7101b4af38  adrp x1,0x71043be000
7101b4af3c  add x1,x1,#0x36b
7101b4af40  bl 0x710377a120
7101b4af44  b 0x7101b4af68
7101b4af48  ldr x8,[x19, #0x60]
7101b4af4c  ldr x0,[x8, #0x10]
7101b4af50  cbz x0,0x7101b4af68
7101b4af54  add x1,sp,#0x8
7101b4af58  mov w2,wzr
7101b4af5c  mov w3,wzr
7101b4af60  str wzr,[sp, #0x8]
7101b4af64  bl 0x71037a2270
7101b4af68  ldr x8,[x19, #0x70]
7101b4af6c  ldr x0,[x8, #0x10]
7101b4af70  cbz x0,0x7101b4af88
7101b4af74  add x1,sp,#0x8
7101b4af78  mov w2,wzr
7101b4af7c  mov w3,wzr
7101b4af80  str wzr,[sp, #0x8]
7101b4af84  bl 0x71037a2270
7101b4af88  fmov s0,wzr
7101b4af8c  fmov s1,0x3f800000
7101b4af90  cmp w21,#0x3
7101b4af94  fcsel s0,s1,s0,eq
7101b4af98  fmov s1,0x40000000
7101b4af9c  cmp w21,#0x4
7101b4afa0  fcsel s0,s1,s0,eq
7101b4afa4  cmp w20,#0x4
7101b4afa8  mov w8,#0x160
7101b4afac  orr w9,wzr,#0x180
7101b4afb0  csel x8,x9,x8,gt
7101b4afb4  add x8,x19,x8
7101b4afb8  add x0,x8,#0x158
7101b4afbc  bl 0x710377b010
7101b4afc0  ldp x29,x30,[sp, #0x70]
7101b4afc4  ldp x20,x19,[sp, #0x60]
7101b4afc8  ldp x22,x21,[sp, #0x50]
7101b4afcc  add sp,sp,#0x80
7101b4afd0  ret
