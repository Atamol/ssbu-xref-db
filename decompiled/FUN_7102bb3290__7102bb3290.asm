// addr:      7102bb3290
// offset:    0x2bb3290
// name:      FUN_7102bb3290
// mangled:   
// size:      44032

7102bb3290  sub sp,sp,#0xd0
7102bb3294  str d12,[sp, #0x40]
7102bb3298  stp d11,d10,[sp, #0x50]
7102bb329c  stp d9,d8,[sp, #0x60]
7102bb32a0  stp x28,x27,[sp, #0x70]
7102bb32a4  stp x26,x25,[sp, #0x80]
7102bb32a8  stp x24,x23,[sp, #0x90]
7102bb32ac  stp x22,x21,[sp, #0xa0]
7102bb32b0  stp x20,x19,[sp, #0xb0]
7102bb32b4  stp x29,x30,[sp, #0xc0]
7102bb32b8  add x29,sp,#0xc0
7102bb32bc  str x1,[sp, #0x18]
7102bb32c0  ldr x8,[x1, #0x8]!
7102bb32c4  ldrb w9,[x8]
7102bb32c8  mov x24,x0
7102bb32cc  str x1,[sp, #0x30]
7102bb32d0  cmp w9,#0xc
7102bb32d4  b.ne 0x7102bb3360
7102bb32d8  ldur w9,[x8, #0x1]
7102bb32dc  subs w9,w9,#0x1
7102bb32e0  b.lt 0x7102bb3360
7102bb32e4  ldr x11,[sp, #0x18]
7102bb32e8  ldr x13,[x11]
7102bb32ec  ldursw x12,[x8, #0x5]
7102bb32f0  ldp x11,x13,[x13, #0x20]
7102bb32f4  add x12,x13,x12
7102bb32f8  mov x13,#0x8e5b
7102bb32fc  movk x13,#0xf773, LSL #16
7102bb3300  mov w10,wzr
7102bb3304  adrp x19,0x7104742000
7102bb3308  add x19,x19,#0xdbb
7102bb330c  movk x13,#0x11, LSL #32
7102bb3310  add w14,w9,w10
7102bb3314  cmp w14,#0x0
7102bb3318  cinc w14,w14,lt
7102bb331c  asr w14,w14,#0x1
7102bb3320  add x15,x12,w14, SXTW  #0x3
7102bb3324  ldr w16,[x15]
7102bb3328  ldr x16,[x11, x16, LSL #0x3]
7102bb332c  cmp x16,x13
7102bb3330  b.eq 0x7102bb3350
7102bb3334  sub w15,w14,#0x1
7102bb3338  cmp x16,x13
7102bb333c  csel w9,w15,w9,hi
7102bb3340  csinc w10,w10,w14,hi
7102bb3344  cmp w10,w9
7102bb3348  b.le 0x7102bb3310
7102bb334c  b 0x7102bb3368
7102bb3350  ldrsw x9,[x15, #0x4]
7102bb3354  tbnz w9,#0x1f,0x7102bb3360
7102bb3358  add x19,x8,x9
7102bb335c  b 0x7102bb3368
7102bb3360  adrp x19,0x7104742000
7102bb3364  add x19,x19,#0xdbb
7102bb3368  ldrb w8,[x19]
7102bb336c  sub w8,w8,#0xb
7102bb3370  cmp w8,#0x1
7102bb3374  b.hi 0x7102bb3380
7102bb3378  ldur w8,[x19, #0x1]
7102bb337c  b 0x7102bb3384
7102bb3380  mov w8,wzr
7102bb3384  ldp x9,x10,[x24, #0x8]
7102bb3388  sub x10,x10,x9
7102bb338c  sxtw x8,w8
7102bb3390  asr x10,x10,#0x2
7102bb3394  add x21,x24,#0x8
7102bb3398  cmp x10,x8
7102bb339c  b.cs 0x7102bb33b0
7102bb33a0  sub x1,x8,x10
7102bb33a4  mov x0,x21
7102bb33a8  bl 0x71003ca470
7102bb33ac  b 0x7102bb33bc
7102bb33b0  b.ls 0x7102bb33bc
7102bb33b4  add x8,x9,x8, LSL #0x2
7102bb33b8  str x8,[x24, #0x10]
7102bb33bc  ldrb w12,[x19]
7102bb33c0  sub w8,w12,#0xb
7102bb33c4  cmp w8,#0x1
7102bb33c8  b.hi 0x7102bb3470
7102bb33cc  ldur w8,[x19, #0x1]
7102bb33d0  cmp w8,#0x1
7102bb33d4  b.lt 0x7102bb3470
7102bb33d8  adrp x11,0x7104472000
7102bb33dc  ldr s0,[x11, #0xb48]
7102bb33e0  mov w8,wzr
7102bb33e4  mov x9,xzr
7102bb33e8  add x10,x19,#0x5
7102bb33ec  adrp x11,0x7104742000
7102bb33f0  add x11,x11,#0xdbb
7102bb33f4  tbnz w9,#0x1f,0x7102bb3424
7102bb33f8  and w12,w12,#0xff
7102bb33fc  cmp w12,#0xb
7102bb3400  mov x12,x11
7102bb3404  b.ne 0x7102bb3428
7102bb3408  ldur w12,[x19, #0x1]
7102bb340c  cmp w12,w9
7102bb3410  mov x12,x11
7102bb3414  b.le 0x7102bb3428
7102bb3418  ldrsw x12,[x10, w8, SXTW #0x0]
7102bb341c  add x12,x19,x12
7102bb3420  b 0x7102bb3428
7102bb3424  mov x12,x11
7102bb3428  ldrb w13,[x12]
7102bb342c  mov v1.16B,v0.16B
7102bb3430  cmp w13,#0x8
7102bb3434  b.ne 0x7102bb343c
7102bb3438  ldur s1,[x12, #0x1]
7102bb343c  ldr x12,[x21]
7102bb3440  str s1,[x12,x9, lsl #2]
7102bb3444  ldrb w12,[x19]
7102bb3448  sub w13,w12,#0xb
7102bb344c  add x9,x9,#0x1
7102bb3450  cmp w13,#0x1
7102bb3454  b.hi 0x7102bb3460
7102bb3458  ldur w13,[x19, #0x1]
7102bb345c  b 0x7102bb3464
7102bb3460  mov w13,wzr
7102bb3464  add w8,w8,#0x4
7102bb3468  cmp x9,w13, SXTW 
7102bb346c  b.lt 0x7102bb33f4
7102bb3470  ldr x8,[sp, #0x30]
7102bb3474  ldr x8,[x8]
7102bb3478  ldrb w9,[x8]
7102bb347c  cmp w9,#0xc
7102bb3480  b.ne 0x7102bb3510
7102bb3484  ldur w9,[x8, #0x1]
7102bb3488  subs w9,w9,#0x1
7102bb348c  b.lt 0x7102bb3510
7102bb3490  ldr x11,[sp, #0x18]
7102bb3494  ldr x25,[x11]
7102bb3498  ldursw x12,[x8, #0x5]
7102bb349c  ldp x11,x13,[x25, #0x20]
7102bb34a0  add x12,x13,x12
7102bb34a4  mov x13,#0x5bf
7102bb34a8  movk x13,#0x76db, LSL #16
7102bb34ac  mov w10,wzr
7102bb34b0  adrp x20,0x7104742000
7102bb34b4  add x20,x20,#0xdbb
7102bb34b8  movk x13,#0xb, LSL #32
7102bb34bc  add w14,w9,w10
7102bb34c0  cmp w14,#0x0
7102bb34c4  cinc w14,w14,lt
7102bb34c8  asr w14,w14,#0x1
7102bb34cc  add x15,x12,w14, SXTW  #0x3
7102bb34d0  ldr w16,[x15]
7102bb34d4  ldr x16,[x11, x16, LSL #0x3]
7102bb34d8  cmp x16,x13
7102bb34dc  b.eq 0x7102bb3500
7102bb34e0  sub w15,w14,#0x1
7102bb34e4  cmp x16,x13
7102bb34e8  csel w9,w15,w9,hi
7102bb34ec  csinc w10,w10,w14,hi
7102bb34f0  cmp w10,w9
7102bb34f4  b.le 0x7102bb34bc
7102bb34f8  mov x25,xzr
7102bb34fc  b 0x7102bb351c
7102bb3500  ldrsw x9,[x15, #0x4]
7102bb3504  tbnz w9,#0x1f,0x7102bb3510
7102bb3508  add x20,x8,x9
7102bb350c  b 0x7102bb351c
7102bb3510  mov x25,xzr
7102bb3514  adrp x20,0x7104742000
7102bb3518  add x20,x20,#0xdbb
7102bb351c  ldrb w8,[x20]
7102bb3520  sub w8,w8,#0xb
7102bb3524  cmp w8,#0x1
7102bb3528  b.hi 0x7102bb3534
7102bb352c  ldur w8,[x20, #0x1]
7102bb3530  b 0x7102bb3538
7102bb3534  mov w8,wzr
7102bb3538  sxtw x27,w8
7102bb353c  ldp x22,x8,[x24, #0x20]
7102bb3540  str x24,[sp, #0x28]
7102bb3544  sub x23,x8,x22
7102bb3548  orr x11,xzr,#-0x3333333333333334
7102bb354c  movk x11,#0xcccd
7102bb3550  asr x9,x23,#0x3
7102bb3554  mul x28,x9,x11
7102bb3558  add x21,x24,#0x20
7102bb355c  cmp x28,x27
7102bb3560  b.cs 0x7102bb36ac
7102bb3564  ldr x9,[x24, #0x30]
7102bb3568  sub x10,x9,x8
7102bb356c  asr x10,x10,#0x3
7102bb3570  mul x10,x10,x11
7102bb3574  sub x26,x27,x28
7102bb3578  cmp x10,x26
7102bb357c  b.cs 0x7102bb36c4
7102bb3580  tbz w27,#0x1f,0x7102bb3588
7102bb3584  b 0x7102bbde84
7102bb3588  sub x8,x9,x22
7102bb358c  orr x9,xzr,#-0x3333333333333334
7102bb3590  asr x8,x8,#0x3
7102bb3594  movk x9,#0xcccd
7102bb3598  mul x8,x8,x9
7102bb359c  orr x9,xzr,#0x3333333333333333
7102bb35a0  movk x9,#0x333, LSL #48
7102bb35a4  cmp x8,x9
7102bb35a8  orr x9,xzr,#0x6666666666666666
7102bb35ac  movk x9,#0x666, LSL #48
7102bb35b0  str x25,[sp, #0x20]
7102bb35b4  b.cs 0x7102bb35c8
7102bb35b8  lsl x8,x8,#0x1
7102bb35bc  cmp x8,x27
7102bb35c0  csel x9,x27,x8,cc
7102bb35c4  cbz x9,0x7102bbde6c
7102bb35c8  add x8,x9,x9, LSL #0x2
7102bb35cc  lsl x8,x8,#0x3
7102bb35d0  cmp x8,#0x0
7102bb35d4  csinc x24,x8,xzr,ne
7102bb35d8  mov w0,#0x10
7102bb35dc  mov x1,x24
7102bb35e0  mov x19,x9
7102bb35e4  bl 0x710392e290
7102bb35e8  mov x25,x0
7102bb35ec  cbnz x0,0x7102bb3634
7102bb35f0  adrp x8,0x7105332000
7102bb35f4  ldr x0,[x8, #0xf00]
7102bb35f8  cbz x0,0x7102bb3630
7102bb35fc  str wzr,[sp, #0x4c]
7102bb3600  str x24,[sp, #0x38]
7102bb3604  ldr x8,[x0]
7102bb3608  ldr x8,[x8, #0x30]
7102bb360c  add x1,sp,#0x4c
7102bb3610  add x2,sp,#0x38
7102bb3614  blr x8
7102bb3618  tbz w0,#0x0,0x7102bb3630
7102bb361c  mov w0,#0x10
7102bb3620  mov x1,x24
7102bb3624  bl 0x710392e290
7102bb3628  mov x25,x0
7102bb362c  cbnz x0,0x7102bb3634
7102bb3630  mov x25,xzr
7102bb3634  mov x8,x19
7102bb3638  mov w19,#0x28
7102bb363c  madd x24,x28,x19,x25
7102bb3640  madd x28,x8,x19,x25
7102bb3644  add x8,x26,x26, LSL #0x2
7102bb3648  lsl x2,x8,#0x3
7102bb364c  mov x0,x24
7102bb3650  mov w1,wzr
7102bb3654  bl 0x71039c02a0
7102bb3658  orr x8,xzr,#-0x6666666666666667
7102bb365c  smulh x8,x23,x8
7102bb3660  asr x9,x8,#0x4
7102bb3664  add x8,x9,x8, LSR #0x3f
7102bb3668  madd x25,x27,x19,x25
7102bb366c  cmp x23,#0x1
7102bb3670  madd x24,x8,x19,x24
7102bb3674  b.lt 0x7102bb3688
7102bb3678  mov x0,x24
7102bb367c  mov x1,x22
7102bb3680  mov x2,x23
7102bb3684  bl 0x71039c00e0
7102bb3688  ldr x8,[sp, #0x28]
7102bb368c  stp x24,x25,[x8, #0x20]
7102bb3690  ldr x25,[sp, #0x20]
7102bb3694  str x28,[x8, #0x30]
7102bb3698  mov x28,x8
7102bb369c  cbz x22,0x7102bb372c
7102bb36a0  mov x0,x22
7102bb36a4  bl 0x710392eb40
7102bb36a8  b 0x7102bb372c
7102bb36ac  mov x28,x24
7102bb36b0  b.ls 0x7102bb372c
7102bb36b4  mov w8,#0x28
7102bb36b8  madd x8,x27,x8,x22
7102bb36bc  str x8,[x28, #0x28]
7102bb36c0  b 0x7102bb372c
7102bb36c4  ldr x28,[sp, #0x28]
7102bb36c8  mov x9,x26
7102bb36cc  tbz w26,#0x0,0x7102bb36ec
7102bb36d0  stp xzr,xzr,[x8, #0x18]
7102bb36d4  sub x9,x26,#0x1
7102bb36d8  stp xzr,xzr,[x8, #0x8]
7102bb36dc  str xzr,[x8]
7102bb36e0  ldr x8,[x28, #0x28]
7102bb36e4  add x8,x8,#0x28
7102bb36e8  str x8,[x28, #0x28]
7102bb36ec  cmp x26,#0x1
7102bb36f0  b.eq 0x7102bb372c
7102bb36f4  stp xzr,xzr,[x8, #0x18]
7102bb36f8  subs x9,x9,#0x2
7102bb36fc  stp xzr,xzr,[x8, #0x8]
7102bb3700  str xzr,[x8]
7102bb3704  ldr x8,[x28, #0x28]
7102bb3708  add x10,x8,#0x28
7102bb370c  str x10,[x28, #0x28]
7102bb3710  stp xzr,xzr,[x8, #0x40]
7102bb3714  str xzr,[x8, #0x28]
7102bb3718  stp xzr,xzr,[x8, #0x30]
7102bb371c  ldr x8,[x28, #0x28]
7102bb3720  add x8,x8,#0x28
7102bb3724  str x8,[x28, #0x28]
7102bb3728  b.ne 0x7102bb36f4
7102bb372c  ldrb w3,[x20]
7102bb3730  sub w8,w3,#0xb
7102bb3734  cmp w8,#0x1
7102bb3738  b.hi 0x7102bb3ea4
7102bb373c  ldur w8,[x20, #0x1]
7102bb3740  cmp w8,#0x1
7102bb3744  b.lt 0x7102bb3ea4
7102bb3748  adrp x2,0x7104472000
7102bb374c  adrp x0,0x7104472000
7102bb3750  adrp x1,0x7104471000
7102bb3754  ldr s3,[x2, #0xbd4]
7102bb3758  adrp x2,0x7104472000
7102bb375c  ldr s0,[x0, #0x4a4]
7102bb3760  ldr s2,[x1, #0xb98]
7102bb3764  ldr s4,[x2, #0xe0c]
7102bb3768  fmov s1,wzr
7102bb376c  mov x9,#0xe824
7102bb3770  movk x9,#0x6e65, LSL #16
7102bb3774  mov x10,#0x395a
7102bb3778  movk x10,#0xcc51, LSL #16
7102bb377c  mov x11,#0xf141
7102bb3780  movk x11,#0xb493, LSL #16
7102bb3784  mov x12,#0xce18
7102bb3788  movk x12,#0x889e, LSL #16
7102bb378c  mov x13,#0x8ff4
7102bb3790  movk x13,#0x3891, LSL #16
7102bb3794  mov x14,#0xb0ad
7102bb3798  movk x14,#0x49c, LSL #16
7102bb379c  mov x15,#0xa2d7
7102bb37a0  movk x15,#0xc01a, LSL #16
7102bb37a4  mov x16,#0x9241
7102bb37a8  movk x16,#0xb71d, LSL #16
7102bb37ac  mov x17,#0x656c
7102bb37b0  movk x17,#0x6a02, LSL #16
7102bb37b4  mov x18,#0x55fa
7102bb37b8  movk x18,#0x1d05, LSL #16
7102bb37bc  mov x8,xzr
7102bb37c0  movk x9,#0x12, LSL #32
7102bb37c4  movk x10,#0xe, LSL #32
7102bb37c8  movk x11,#0xe, LSL #32
7102bb37cc  movk x12,#0xe, LSL #32
7102bb37d0  movk x13,#0xd, LSL #32
7102bb37d4  movk x14,#0xd, LSL #32
7102bb37d8  movk x15,#0x5, LSL #32
7102bb37dc  movk x16,#0x5, LSL #32
7102bb37e0  movk x17,#0x5, LSL #32
7102bb37e4  movk x18,#0x5, LSL #32
7102bb37e8  add x0,x20,#0x5
7102bb37ec  mov w1,#0x28
7102bb37f0  adrp x2,0x7104742000
7102bb37f4  add x2,x2,#0xdbb
7102bb37f8  mov x4,xzr
7102bb37fc  tbnz w8,#0x1f,0x7102bb3830
7102bb3800  and w3,w3,#0xff
7102bb3804  cmp w3,#0xb
7102bb3808  mov x3,x2
7102bb380c  b.ne 0x7102bb3834
7102bb3810  ldur w3,[x20, #0x1]
7102bb3814  cmp w3,w8
7102bb3818  b.le 0x7102bb382c
7102bb381c  ldrsw x3,[x0, w8, SXTW #0x2]
7102bb3820  add x3,x20,x3
7102bb3824  mov x4,x25
7102bb3828  b 0x7102bb3834
7102bb382c  mov x4,xzr
7102bb3830  mov x3,x2
7102bb3834  ldrb w5,[x3]
7102bb3838  cmp w5,#0xc
7102bb383c  mov x5,x2
7102bb3840  b.ne 0x7102bb38b4
7102bb3844  ldur w5,[x3, #0x1]
7102bb3848  subs w5,w5,#0x1
7102bb384c  b.lt 0x7102bb38b0
7102bb3850  ldursw x19,[x3, #0x5]
7102bb3854  ldp x7,x22,[x4, #0x20]
7102bb3858  mov w6,wzr
7102bb385c  add x19,x22,x19
7102bb3860  add w22,w5,w6
7102bb3864  cmp w22,#0x0
7102bb3868  cinc w22,w22,lt
7102bb386c  asr w22,w22,#0x1
7102bb3870  add x23,x19,w22, SXTW  #0x3
7102bb3874  ldr w24,[x23]
7102bb3878  ldr x24,[x7, x24, LSL #0x3]
7102bb387c  cmp x24,x15
7102bb3880  b.eq 0x7102bb38a0
7102bb3884  sub w23,w22,#0x1
7102bb3888  cmp x24,x15
7102bb388c  csel w5,w23,w5,hi
7102bb3890  csinc w6,w6,w22,hi
7102bb3894  cmp w6,w5
7102bb3898  b.le 0x7102bb3860
7102bb389c  b 0x7102bb38b0
7102bb38a0  ldrsw x5,[x23, #0x4]
7102bb38a4  tbnz w5,#0x1f,0x7102bb38b0
7102bb38a8  add x5,x3,x5
7102bb38ac  b 0x7102bb38b4
7102bb38b0  mov x5,x2
7102bb38b4  ldrb w6,[x5]
7102bb38b8  mov v5.16B,v0.16B
7102bb38bc  cmp w6,#0x8
7102bb38c0  b.ne 0x7102bb38c8
7102bb38c4  ldur s5,[x5, #0x1]
7102bb38c8  mul x6,x8,x1
7102bb38cc  ldr x5,[x21]
7102bb38d0  str s5,[x5,x6]
7102bb38d4  ldrb w5,[x3]
7102bb38d8  cmp w5,#0xc
7102bb38dc  mov x5,x2
7102bb38e0  b.ne 0x7102bb3954
7102bb38e4  ldur w5,[x3, #0x1]
7102bb38e8  subs w5,w5,#0x1
7102bb38ec  b.lt 0x7102bb3950
7102bb38f0  ldursw x19,[x3, #0x5]
7102bb38f4  ldp x7,x22,[x4, #0x20]
7102bb38f8  mov w6,wzr
7102bb38fc  add x19,x22,x19
7102bb3900  add w22,w5,w6
7102bb3904  cmp w22,#0x0
7102bb3908  cinc w22,w22,lt
7102bb390c  asr w22,w22,#0x1
7102bb3910  add x23,x19,w22, SXTW  #0x3
7102bb3914  ldr w24,[x23]
7102bb3918  ldr x24,[x7, x24, LSL #0x3]
7102bb391c  cmp x24,x18
7102bb3920  b.eq 0x7102bb3940
7102bb3924  sub w23,w22,#0x1
7102bb3928  cmp x24,x18
7102bb392c  csel w5,w23,w5,hi
7102bb3930  csinc w6,w6,w22,hi
7102bb3934  cmp w6,w5
7102bb3938  b.le 0x7102bb3900
7102bb393c  b 0x7102bb3950
7102bb3940  ldrsw x5,[x23, #0x4]
7102bb3944  tbnz w5,#0x1f,0x7102bb3950
7102bb3948  add x5,x3,x5
7102bb394c  b 0x7102bb3954
7102bb3950  mov x5,x2
7102bb3954  ldrb w6,[x5]
7102bb3958  mov v5.16B,v1.16B
7102bb395c  cmp w6,#0x8
7102bb3960  b.ne 0x7102bb3968
7102bb3964  ldur s5,[x5, #0x1]
7102bb3968  ldr x5,[x21]
7102bb396c  madd x5,x8,x1,x5
7102bb3970  str s5,[x5, #0x4]
7102bb3974  ldrb w5,[x3]
7102bb3978  cmp w5,#0xc
7102bb397c  mov x5,x2
7102bb3980  b.ne 0x7102bb39f4
7102bb3984  ldur w5,[x3, #0x1]
7102bb3988  subs w5,w5,#0x1
7102bb398c  b.lt 0x7102bb39f0
7102bb3990  ldursw x19,[x3, #0x5]
7102bb3994  ldp x7,x22,[x4, #0x20]
7102bb3998  mov w6,wzr
7102bb399c  add x19,x22,x19
7102bb39a0  add w22,w5,w6
7102bb39a4  cmp w22,#0x0
7102bb39a8  cinc w22,w22,lt
7102bb39ac  asr w22,w22,#0x1
7102bb39b0  add x23,x19,w22, SXTW  #0x3
7102bb39b4  ldr w24,[x23]
7102bb39b8  ldr x24,[x7, x24, LSL #0x3]
7102bb39bc  cmp x24,x16
7102bb39c0  b.eq 0x7102bb39e0
7102bb39c4  sub w23,w22,#0x1
7102bb39c8  cmp x24,x16
7102bb39cc  csel w5,w23,w5,hi
7102bb39d0  csinc w6,w6,w22,hi
7102bb39d4  cmp w6,w5
7102bb39d8  b.le 0x7102bb39a0
7102bb39dc  b 0x7102bb39f0
7102bb39e0  ldrsw x5,[x23, #0x4]
7102bb39e4  tbnz w5,#0x1f,0x7102bb39f0
7102bb39e8  add x5,x3,x5
7102bb39ec  b 0x7102bb39f4
7102bb39f0  mov x5,x2
7102bb39f4  ldrb w6,[x5]
7102bb39f8  mov v5.16B,v1.16B
7102bb39fc  cmp w6,#0x8
7102bb3a00  b.ne 0x7102bb3a08
7102bb3a04  ldur s5,[x5, #0x1]
7102bb3a08  ldr x5,[x21]
7102bb3a0c  madd x5,x8,x1,x5
7102bb3a10  str s5,[x5, #0x8]
7102bb3a14  ldrb w5,[x3]
7102bb3a18  cmp w5,#0xc
7102bb3a1c  mov x5,x2
7102bb3a20  b.ne 0x7102bb3a94
7102bb3a24  ldur w5,[x3, #0x1]
7102bb3a28  subs w5,w5,#0x1
7102bb3a2c  b.lt 0x7102bb3a90
7102bb3a30  ldursw x19,[x3, #0x5]
7102bb3a34  ldp x7,x22,[x4, #0x20]
7102bb3a38  mov w6,wzr
7102bb3a3c  add x19,x22,x19
7102bb3a40  add w22,w5,w6
7102bb3a44  cmp w22,#0x0
7102bb3a48  cinc w22,w22,lt
7102bb3a4c  asr w22,w22,#0x1
7102bb3a50  add x23,x19,w22, SXTW  #0x3
7102bb3a54  ldr w24,[x23]
7102bb3a58  ldr x24,[x7, x24, LSL #0x3]
7102bb3a5c  cmp x24,x17
7102bb3a60  b.eq 0x7102bb3a80
7102bb3a64  sub w23,w22,#0x1
7102bb3a68  cmp x24,x17
7102bb3a6c  csel w5,w23,w5,hi
7102bb3a70  csinc w6,w6,w22,hi
7102bb3a74  cmp w6,w5
7102bb3a78  b.le 0x7102bb3a40
7102bb3a7c  b 0x7102bb3a90
7102bb3a80  ldrsw x5,[x23, #0x4]
7102bb3a84  tbnz w5,#0x1f,0x7102bb3a90
7102bb3a88  add x5,x3,x5
7102bb3a8c  b 0x7102bb3a94
7102bb3a90  mov x5,x2
7102bb3a94  ldrb w6,[x5]
7102bb3a98  mov v5.16B,v1.16B
7102bb3a9c  cmp w6,#0x8
7102bb3aa0  b.ne 0x7102bb3aa8
7102bb3aa4  ldur s5,[x5, #0x1]
7102bb3aa8  ldr x5,[x21]
7102bb3aac  madd x5,x8,x1,x5
7102bb3ab0  str s5,[x5, #0xc]
7102bb3ab4  ldrb w5,[x3]
7102bb3ab8  cmp w5,#0xc
7102bb3abc  mov x5,x2
7102bb3ac0  b.ne 0x7102bb3b34
7102bb3ac4  ldur w5,[x3, #0x1]
7102bb3ac8  subs w5,w5,#0x1
7102bb3acc  b.lt 0x7102bb3b30
7102bb3ad0  ldursw x19,[x3, #0x5]
7102bb3ad4  ldp x7,x22,[x4, #0x20]
7102bb3ad8  mov w6,wzr
7102bb3adc  add x19,x22,x19
7102bb3ae0  add w22,w5,w6
7102bb3ae4  cmp w22,#0x0
7102bb3ae8  cinc w22,w22,lt
7102bb3aec  asr w22,w22,#0x1
7102bb3af0  add x23,x19,w22, SXTW  #0x3
7102bb3af4  ldr w24,[x23]
7102bb3af8  ldr x24,[x7, x24, LSL #0x3]
7102bb3afc  cmp x24,x10
7102bb3b00  b.eq 0x7102bb3b20
7102bb3b04  sub w23,w22,#0x1
7102bb3b08  cmp x24,x10
7102bb3b0c  csel w5,w23,w5,hi
7102bb3b10  csinc w6,w6,w22,hi
7102bb3b14  cmp w6,w5
7102bb3b18  b.le 0x7102bb3ae0
7102bb3b1c  b 0x7102bb3b30
7102bb3b20  ldrsw x5,[x23, #0x4]
7102bb3b24  tbnz w5,#0x1f,0x7102bb3b30
7102bb3b28  add x5,x3,x5
7102bb3b2c  b 0x7102bb3b34
7102bb3b30  mov x5,x2
7102bb3b34  ldrb w6,[x5]
7102bb3b38  mov v5.16B,v2.16B
7102bb3b3c  cmp w6,#0x8
7102bb3b40  b.ne 0x7102bb3b48
7102bb3b44  ldur s5,[x5, #0x1]
7102bb3b48  ldr x5,[x21]
7102bb3b4c  madd x5,x8,x1,x5
7102bb3b50  str s5,[x5, #0x10]
7102bb3b54  ldrb w5,[x3]
7102bb3b58  cmp w5,#0xc
7102bb3b5c  mov x5,x2
7102bb3b60  b.ne 0x7102bb3bd4
7102bb3b64  ldur w5,[x3, #0x1]
7102bb3b68  subs w5,w5,#0x1
7102bb3b6c  b.lt 0x7102bb3bd0
7102bb3b70  ldursw x19,[x3, #0x5]
7102bb3b74  ldp x7,x22,[x4, #0x20]
7102bb3b78  mov w6,wzr
7102bb3b7c  add x19,x22,x19
7102bb3b80  add w22,w5,w6
7102bb3b84  cmp w22,#0x0
7102bb3b88  cinc w22,w22,lt
7102bb3b8c  asr w22,w22,#0x1
7102bb3b90  add x23,x19,w22, SXTW  #0x3
7102bb3b94  ldr w24,[x23]
7102bb3b98  ldr x24,[x7, x24, LSL #0x3]
7102bb3b9c  cmp x24,x9
7102bb3ba0  b.eq 0x7102bb3bc0
7102bb3ba4  sub w23,w22,#0x1
7102bb3ba8  cmp x24,x9
7102bb3bac  csel w5,w23,w5,hi
7102bb3bb0  csinc w6,w6,w22,hi
7102bb3bb4  cmp w6,w5
7102bb3bb8  b.le 0x7102bb3b80
7102bb3bbc  b 0x7102bb3bd0
7102bb3bc0  ldrsw x5,[x23, #0x4]
7102bb3bc4  tbnz w5,#0x1f,0x7102bb3bd0
7102bb3bc8  add x5,x3,x5
7102bb3bcc  b 0x7102bb3bd4
7102bb3bd0  mov x5,x2
7102bb3bd4  ldrb w6,[x5]
7102bb3bd8  mov v5.16B,v3.16B
7102bb3bdc  cmp w6,#0x8
7102bb3be0  b.ne 0x7102bb3be8
7102bb3be4  ldur s5,[x5, #0x1]
7102bb3be8  ldr x5,[x21]
7102bb3bec  madd x5,x8,x1,x5
7102bb3bf0  str s5,[x5, #0x14]
7102bb3bf4  ldrb w5,[x3]
7102bb3bf8  cmp w5,#0xc
7102bb3bfc  mov x5,x2
7102bb3c00  b.ne 0x7102bb3c74
7102bb3c04  ldur w5,[x3, #0x1]
7102bb3c08  subs w5,w5,#0x1
7102bb3c0c  b.lt 0x7102bb3c70
7102bb3c10  ldursw x19,[x3, #0x5]
7102bb3c14  ldp x7,x22,[x4, #0x20]
7102bb3c18  mov w6,wzr
7102bb3c1c  add x19,x22,x19
7102bb3c20  add w22,w5,w6
7102bb3c24  cmp w22,#0x0
7102bb3c28  cinc w22,w22,lt
7102bb3c2c  asr w22,w22,#0x1
7102bb3c30  add x23,x19,w22, SXTW  #0x3
7102bb3c34  ldr w24,[x23]
7102bb3c38  ldr x24,[x7, x24, LSL #0x3]
7102bb3c3c  cmp x24,x11
7102bb3c40  b.eq 0x7102bb3c60
7102bb3c44  sub w23,w22,#0x1
7102bb3c48  cmp x24,x11
7102bb3c4c  csel w5,w23,w5,hi
7102bb3c50  csinc w6,w6,w22,hi
7102bb3c54  cmp w6,w5
7102bb3c58  b.le 0x7102bb3c20
7102bb3c5c  b 0x7102bb3c70
7102bb3c60  ldrsw x5,[x23, #0x4]
7102bb3c64  tbnz w5,#0x1f,0x7102bb3c70
7102bb3c68  add x5,x3,x5
7102bb3c6c  b 0x7102bb3c74
7102bb3c70  mov x5,x2
7102bb3c74  ldrb w6,[x5]
7102bb3c78  mov v5.16B,v4.16B
7102bb3c7c  cmp w6,#0x8
7102bb3c80  b.ne 0x7102bb3c88
7102bb3c84  ldur s5,[x5, #0x1]
7102bb3c88  ldr x5,[x21]
7102bb3c8c  madd x5,x8,x1,x5
7102bb3c90  str s5,[x5, #0x18]
7102bb3c94  ldrb w5,[x3]
7102bb3c98  cmp w5,#0xc
7102bb3c9c  mov x5,x2
7102bb3ca0  b.ne 0x7102bb3d14
7102bb3ca4  ldur w5,[x3, #0x1]
7102bb3ca8  subs w5,w5,#0x1
7102bb3cac  b.lt 0x7102bb3d10
7102bb3cb0  ldursw x19,[x3, #0x5]
7102bb3cb4  ldp x7,x22,[x4, #0x20]
7102bb3cb8  mov w6,wzr
7102bb3cbc  add x19,x22,x19
7102bb3cc0  add w22,w5,w6
7102bb3cc4  cmp w22,#0x0
7102bb3cc8  cinc w22,w22,lt
7102bb3ccc  asr w22,w22,#0x1
7102bb3cd0  add x23,x19,w22, SXTW  #0x3
7102bb3cd4  ldr w24,[x23]
7102bb3cd8  ldr x24,[x7, x24, LSL #0x3]
7102bb3cdc  cmp x24,x12
7102bb3ce0  b.eq 0x7102bb3d00
7102bb3ce4  sub w23,w22,#0x1
7102bb3ce8  cmp x24,x12
7102bb3cec  csel w5,w23,w5,hi
7102bb3cf0  csinc w6,w6,w22,hi
7102bb3cf4  cmp w6,w5
7102bb3cf8  b.le 0x7102bb3cc0
7102bb3cfc  b 0x7102bb3d10
7102bb3d00  ldrsw x5,[x23, #0x4]
7102bb3d04  tbnz w5,#0x1f,0x7102bb3d10
7102bb3d08  add x5,x3,x5
7102bb3d0c  b 0x7102bb3d14
7102bb3d10  mov x5,x2
7102bb3d14  ldrb w6,[x5]
7102bb3d18  mov v5.16B,v4.16B
7102bb3d1c  cmp w6,#0x8
7102bb3d20  b.ne 0x7102bb3d28
7102bb3d24  ldur s5,[x5, #0x1]
7102bb3d28  ldr x5,[x21]
7102bb3d2c  madd x5,x8,x1,x5
7102bb3d30  str s5,[x5, #0x1c]
7102bb3d34  ldrb w5,[x3]
7102bb3d38  cmp w5,#0xc
7102bb3d3c  mov x5,x2
7102bb3d40  b.ne 0x7102bb3db4
7102bb3d44  ldur w5,[x3, #0x1]
7102bb3d48  subs w5,w5,#0x1
7102bb3d4c  b.lt 0x7102bb3db0
7102bb3d50  ldursw x19,[x3, #0x5]
7102bb3d54  ldp x7,x22,[x4, #0x20]
7102bb3d58  mov w6,wzr
7102bb3d5c  add x19,x22,x19
7102bb3d60  add w22,w5,w6
7102bb3d64  cmp w22,#0x0
7102bb3d68  cinc w22,w22,lt
7102bb3d6c  asr w22,w22,#0x1
7102bb3d70  add x23,x19,w22, SXTW  #0x3
7102bb3d74  ldr w24,[x23]
7102bb3d78  ldr x24,[x7, x24, LSL #0x3]
7102bb3d7c  cmp x24,x13
7102bb3d80  b.eq 0x7102bb3da0
7102bb3d84  sub w23,w22,#0x1
7102bb3d88  cmp x24,x13
7102bb3d8c  csel w5,w23,w5,hi
7102bb3d90  csinc w6,w6,w22,hi
7102bb3d94  cmp w6,w5
7102bb3d98  b.le 0x7102bb3d60
7102bb3d9c  b 0x7102bb3db0
7102bb3da0  ldrsw x5,[x23, #0x4]
7102bb3da4  tbnz w5,#0x1f,0x7102bb3db0
7102bb3da8  add x5,x3,x5
7102bb3dac  b 0x7102bb3db4
7102bb3db0  mov x5,x2
7102bb3db4  ldrb w6,[x5]
7102bb3db8  mov v5.16B,v4.16B
7102bb3dbc  cmp w6,#0x8
7102bb3dc0  b.ne 0x7102bb3dc8
7102bb3dc4  ldur s5,[x5, #0x1]
7102bb3dc8  ldr x5,[x21]
7102bb3dcc  madd x5,x8,x1,x5
7102bb3dd0  str s5,[x5, #0x20]
7102bb3dd4  ldrb w5,[x3]
7102bb3dd8  cmp w5,#0xc
7102bb3ddc  mov x5,x2
7102bb3de0  b.ne 0x7102bb3e54
7102bb3de4  ldur w5,[x3, #0x1]
7102bb3de8  subs w5,w5,#0x1
7102bb3dec  b.lt 0x7102bb3e50
7102bb3df0  ldursw x19,[x3, #0x5]
7102bb3df4  ldp x7,x4,[x4, #0x20]
7102bb3df8  mov w6,wzr
7102bb3dfc  add x4,x4,x19
7102bb3e00  add w19,w5,w6
7102bb3e04  cmp w19,#0x0
7102bb3e08  cinc w19,w19,lt
7102bb3e0c  asr w19,w19,#0x1
7102bb3e10  add x22,x4,w19, SXTW  #0x3
7102bb3e14  ldr w23,[x22]
7102bb3e18  ldr x23,[x7, x23, LSL #0x3]
7102bb3e1c  cmp x23,x14
7102bb3e20  b.eq 0x7102bb3e40
7102bb3e24  sub w22,w19,#0x1
7102bb3e28  cmp x23,x14
7102bb3e2c  csel w5,w22,w5,hi
7102bb3e30  csinc w6,w6,w19,hi
7102bb3e34  cmp w6,w5
7102bb3e38  b.le 0x7102bb3e00
7102bb3e3c  b 0x7102bb3e50
7102bb3e40  ldrsw x4,[x22, #0x4]
7102bb3e44  tbnz w4,#0x1f,0x7102bb3e50
7102bb3e48  add x5,x3,x4
7102bb3e4c  b 0x7102bb3e54
7102bb3e50  mov x5,x2
7102bb3e54  ldrb w3,[x5]
7102bb3e58  mov v5.16B,v4.16B
7102bb3e5c  cmp w3,#0x8
7102bb3e60  b.ne 0x7102bb3e68
7102bb3e64  ldur s5,[x5, #0x1]
7102bb3e68  ldr x3,[x21]
7102bb3e6c  madd x3,x8,x1,x3
7102bb3e70  add x8,x8,#0x1
7102bb3e74  str s5,[x3, #0x24]
7102bb3e78  ldrb w3,[x20]
7102bb3e7c  sub w4,w3,#0xb
7102bb3e80  cmp w4,#0x1
7102bb3e84  b.hi 0x7102bb3e98
7102bb3e88  ldur w4,[x20, #0x1]
7102bb3e8c  cmp x8,w4, SXTW 
7102bb3e90  b.lt 0x7102bb37f8
7102bb3e94  b 0x7102bb3ea4
7102bb3e98  mov w4,wzr
7102bb3e9c  cmp x8,w4, SXTW 
7102bb3ea0  b.lt 0x7102bb37f8
7102bb3ea4  ldr x8,[sp, #0x30]
7102bb3ea8  ldr x8,[x8]
7102bb3eac  ldrb w9,[x8]
7102bb3eb0  cmp w9,#0xc
7102bb3eb4  b.ne 0x7102bb3f48
7102bb3eb8  ldur w9,[x8, #0x1]
7102bb3ebc  subs w9,w9,#0x1
7102bb3ec0  b.lt 0x7102bb3f48
7102bb3ec4  ldr x11,[sp, #0x18]
7102bb3ec8  ldr x13,[x11]
7102bb3ecc  str x13,[sp, #0x20]
7102bb3ed0  ldursw x12,[x8, #0x5]
7102bb3ed4  adrp x20,0x7104742000
7102bb3ed8  add x20,x20,#0xdbb
7102bb3edc  ldp x11,x13,[x13, #0x20]
7102bb3ee0  add x12,x13,x12
7102bb3ee4  mov x13,#0xe8b2
7102bb3ee8  movk x13,#0x3a64, LSL #16
7102bb3eec  mov w10,wzr
7102bb3ef0  movk x13,#0xd, LSL #32
7102bb3ef4  add w14,w9,w10
7102bb3ef8  cmp w14,#0x0
7102bb3efc  cinc w14,w14,lt
7102bb3f00  asr w14,w14,#0x1
7102bb3f04  add x15,x12,w14, SXTW  #0x3
7102bb3f08  ldr w16,[x15]
7102bb3f0c  ldr x16,[x11, x16, LSL #0x3]
7102bb3f10  cmp x16,x13
7102bb3f14  b.eq 0x7102bb3f38
7102bb3f18  sub w15,w14,#0x1
7102bb3f1c  cmp x16,x13
7102bb3f20  csel w9,w15,w9,hi
7102bb3f24  csinc w10,w10,w14,hi
7102bb3f28  cmp w10,w9
7102bb3f2c  b.le 0x7102bb3ef4
7102bb3f30  str xzr,[sp, #0x20]
7102bb3f34  b 0x7102bb3f54
7102bb3f38  ldrsw x9,[x15, #0x4]
7102bb3f3c  tbnz w9,#0x1f,0x7102bb3f48
7102bb3f40  add x20,x8,x9
7102bb3f44  b 0x7102bb3f54
7102bb3f48  str xzr,[sp, #0x20]
7102bb3f4c  adrp x20,0x7104742000
7102bb3f50  add x20,x20,#0xdbb
7102bb3f54  ldrb w8,[x20]
7102bb3f58  sub w8,w8,#0xb
7102bb3f5c  cmp w8,#0x1
7102bb3f60  b.hi 0x7102bb3f6c
7102bb3f64  ldur w8,[x20, #0x1]
7102bb3f68  b 0x7102bb3f70
7102bb3f6c  mov w8,wzr
7102bb3f70  ldp x22,x25,[x28, #0x38]
7102bb3f74  sxtw x19,w8
7102bb3f78  sub x8,x25,x22
7102bb3f7c  orr x10,xzr,#-0x5555555555555556
7102bb3f80  movk x10,#0xaaab
7102bb3f84  asr x8,x8,#0x4
7102bb3f88  mul x27,x8,x10
7102bb3f8c  add x21,x28,#0x38
7102bb3f90  cmp x27,x19
7102bb3f94  b.cs 0x7102bb3ff8
7102bb3f98  ldr x8,[x28, #0x48]
7102bb3f9c  sub x9,x8,x25
7102bb3fa0  asr x9,x9,#0x4
7102bb3fa4  mul x9,x9,x10
7102bb3fa8  sub x26,x19,x27
7102bb3fac  cmp x9,x26
7102bb3fb0  b.cs 0x7102bb404c
7102bb3fb4  tbz w19,#0x1f,0x7102bb3fbc
7102bb3fb8  b 0x7102bbde84
7102bb3fbc  sub x8,x8,x22
7102bb3fc0  orr x9,xzr,#-0x5555555555555556
7102bb3fc4  asr x8,x8,#0x4
7102bb3fc8  movk x9,#0xaaab
7102bb3fcc  mul x8,x8,x9
7102bb3fd0  orr x9,xzr,#-0x5555555555555556
7102bb3fd4  movk x9,#0x2aa, LSL #48
7102bb3fd8  cmp x8,x9
7102bb3fdc  b.cs 0x7102bb40b4
7102bb3fe0  lsl x8,x8,#0x1
7102bb3fe4  cmp x8,x19
7102bb3fe8  csel x8,x19,x8,cc
7102bb3fec  cbnz x8,0x7102bb40bc
7102bb3ff0  mov x24,xzr
7102bb3ff4  b 0x7102bb412c
7102bb3ff8  b.ls 0x7102bb41ec
7102bb3ffc  orr w8,wzr,#0x30
7102bb4000  madd x19,x19,x8,x22
7102bb4004  cmp x19,x25
7102bb4008  b.eq 0x7102bb4044
7102bb400c  ldurb w8,[x25, #-0x18]
7102bb4010  tbz w8,#0x0,0x7102bb4020
7102bb4014  ldur x0,[x25, #-0x8]
7102bb4018  cbz x0,0x7102bb4020
7102bb401c  bl 0x710392eb40
7102bb4020  ldurb w8,[x25, #-0x30]
7102bb4024  sub x22,x25,#0x30
7102bb4028  tbz w8,#0x0,0x7102bb4038
7102bb402c  ldur x0,[x25, #-0x20]
7102bb4030  cbz x0,0x7102bb4038
7102bb4034  bl 0x710392eb40
7102bb4038  cmp x19,x22
7102bb403c  mov x25,x22
7102bb4040  b.ne 0x7102bb400c
7102bb4044  str x19,[x28, #0x40]
7102bb4048  b 0x7102bb41ec
7102bb404c  mov x8,x26
7102bb4050  tbz w26,#0x0,0x7102bb4070
7102bb4054  stp xzr,xzr,[x25, #0x20]
7102bb4058  stp xzr,xzr,[x25, #0x10]
7102bb405c  stp xzr,xzr,[x25]
7102bb4060  ldr x8,[x28, #0x40]
7102bb4064  add x25,x8,#0x30
7102bb4068  sub x8,x26,#0x1
7102bb406c  str x25,[x28, #0x40]
7102bb4070  cmp x26,#0x1
7102bb4074  b.eq 0x7102bb41ec
7102bb4078  stp xzr,xzr,[x25, #0x20]
7102bb407c  subs x8,x8,#0x2
7102bb4080  stp xzr,xzr,[x25, #0x10]
7102bb4084  stp xzr,xzr,[x25]
7102bb4088  ldr x9,[x28, #0x40]
7102bb408c  add x10,x9,#0x30
7102bb4090  str x10,[x28, #0x40]
7102bb4094  stp xzr,xzr,[x9, #0x50]
7102bb4098  stp xzr,xzr,[x9, #0x40]
7102bb409c  stp xzr,xzr,[x9, #0x30]
7102bb40a0  ldr x9,[x28, #0x40]
7102bb40a4  add x25,x9,#0x30
7102bb40a8  str x25,[x28, #0x40]
7102bb40ac  b.ne 0x7102bb4078
7102bb40b0  b 0x7102bb41ec
7102bb40b4  orr x8,xzr,#0x5555555555555555
7102bb40b8  movk x8,#0x555, LSL #48
7102bb40bc  mov x28,x8
7102bb40c0  add x8,x8,x8, LSL #0x1
7102bb40c4  lsl x8,x8,#0x4
7102bb40c8  cmp x8,#0x0
7102bb40cc  csinc x23,x8,xzr,ne
7102bb40d0  mov w0,#0x10
7102bb40d4  mov x1,x23
7102bb40d8  bl 0x710392e290
7102bb40dc  mov x24,x0
7102bb40e0  cbnz x0,0x7102bb4128
7102bb40e4  adrp x8,0x7105332000
7102bb40e8  ldr x0,[x8, #0xf00]
7102bb40ec  cbz x0,0x7102bb4124
7102bb40f0  str wzr,[sp, #0x4c]
7102bb40f4  str x23,[sp, #0x38]
7102bb40f8  ldr x8,[x0]
7102bb40fc  ldr x8,[x8, #0x30]
7102bb4100  add x1,sp,#0x4c
7102bb4104  add x2,sp,#0x38
7102bb4108  blr x8
7102bb410c  tbz w0,#0x0,0x7102bb4124
7102bb4110  mov w0,#0x10
7102bb4114  mov x1,x23
7102bb4118  bl 0x710392e290
7102bb411c  mov x24,x0
7102bb4120  cbnz x0,0x7102bb4128
7102bb4124  mov x24,xzr
7102bb4128  mov x8,x28
7102bb412c  orr w28,wzr,#0x30
7102bb4130  madd x23,x27,x28,x24
7102bb4134  madd x27,x8,x28,x24
7102bb4138  add x8,x26,x26, LSL #0x1
7102bb413c  lsl x2,x8,#0x4
7102bb4140  mov x0,x23
7102bb4144  mov w1,wzr
7102bb4148  bl 0x71039c02a0
7102bb414c  madd x8,x19,x28,x24
7102bb4150  cmp x25,x22
7102bb4154  b.eq 0x7102bb7fe8
7102bb4158  ldr x12,[sp, #0x28]
7102bb415c  ldr x9,[x25, #-0x30]!
7102bb4160  cmp x22,x25
7102bb4164  ldp x10,x11,[x25, #0x8]
7102bb4168  str x9,[x23, #-0x30]!
7102bb416c  stp x10,x11,[x23, #0x8]
7102bb4170  ldr x11,[x25, #0x28]
7102bb4174  ldp x9,x10,[x25, #0x18]
7102bb4178  str xzr,[x25]
7102bb417c  stp xzr,xzr,[x25, #0x8]
7102bb4180  str x9,[x23, #0x18]
7102bb4184  stp x10,x11,[x23, #0x20]
7102bb4188  str xzr,[x25, #0x18]
7102bb418c  stp xzr,xzr,[x25, #0x20]
7102bb4190  b.ne 0x7102bb415c
7102bb4194  ldp x22,x19,[x12, #0x38]
7102bb4198  cmp x19,x22
7102bb419c  stp x23,x8,[x12, #0x38]
7102bb41a0  str x27,[x12, #0x48]
7102bb41a4  b.eq 0x7102bb41e0
7102bb41a8  ldurb w8,[x19, #-0x18]
7102bb41ac  tbz w8,#0x0,0x7102bb41bc
7102bb41b0  ldur x0,[x19, #-0x8]
7102bb41b4  cbz x0,0x7102bb41bc
7102bb41b8  bl 0x710392eb40
7102bb41bc  ldurb w8,[x19, #-0x30]
7102bb41c0  sub x23,x19,#0x30
7102bb41c4  tbz w8,#0x0,0x7102bb41d4
7102bb41c8  ldur x0,[x19, #-0x20]
7102bb41cc  cbz x0,0x7102bb41d4
7102bb41d0  bl 0x710392eb40
7102bb41d4  cmp x22,x23
7102bb41d8  mov x19,x23
7102bb41dc  b.ne 0x7102bb41a8
7102bb41e0  cbz x22,0x7102bb41ec
7102bb41e4  mov x0,x22
7102bb41e8  bl 0x710392eb40
7102bb41ec  ldrb w8,[x20]
7102bb41f0  mov x15,#0x52e1
7102bb41f4  movk x15,#0x7374, LSL #16
7102bb41f8  movk x15,#0xa, LSL #32
7102bb41fc  sub w9,w8,#0xb
7102bb4200  cmp w9,#0x1
7102bb4204  b.hi 0x7102bb4414
7102bb4208  ldur w9,[x20, #0x1]
7102bb420c  cmp w9,#0x1
7102bb4210  b.lt 0x7102bb4414
7102bb4214  mov x23,#0x64e2
7102bb4218  movk x23,#0x4f5c, LSL #16
7102bb421c  mov x22,xzr
7102bb4220  movk x23,#0xc, LSL #32
7102bb4224  adrp x25,0x7104742000
7102bb4228  add x25,x25,#0xdbb
7102bb422c  add x9,x20,#0x5
7102bb4230  str x9,[sp, #0x10]
7102bb4234  adrp x26,0x710427e000
7102bb4238  add x26,x26,#0xc2f
7102bb423c  orr w27,wzr,#0x30
7102bb4240  adrp x28,0x71042e5000
7102bb4244  add x28,x28,#0x3a2
7102bb4248  mov x19,xzr
7102bb424c  tbnz w22,#0x1f,0x7102bb4284
7102bb4250  and w8,w8,#0xff
7102bb4254  cmp w8,#0xb
7102bb4258  mov x24,x25
7102bb425c  b.ne 0x7102bb4288
7102bb4260  ldur w8,[x20, #0x1]
7102bb4264  cmp w8,w22
7102bb4268  b.le 0x7102bb4280
7102bb426c  ldr x8,[sp, #0x10]
7102bb4270  ldrsw x8,[x8, w22, SXTW #0x2]
7102bb4274  ldr x19,[sp, #0x20]
7102bb4278  add x24,x20,x8
7102bb427c  b 0x7102bb4288
7102bb4280  mov x19,xzr
7102bb4284  mov x24,x25
7102bb4288  ldrb w8,[x24]
7102bb428c  cmp w8,#0xc
7102bb4290  b.ne 0x7102bb4304
7102bb4294  ldur w8,[x24, #0x1]
7102bb4298  subs w8,w8,#0x1
7102bb429c  b.lt 0x7102bb4304
7102bb42a0  ldursw x11,[x24, #0x5]
7102bb42a4  ldp x10,x12,[x19, #0x20]
7102bb42a8  mov w9,wzr
7102bb42ac  add x11,x12,x11
7102bb42b0  add w12,w8,w9
7102bb42b4  cmp w12,#0x0
7102bb42b8  cinc w12,w12,lt
7102bb42bc  asr w12,w12,#0x1
7102bb42c0  add x13,x11,w12, SXTW  #0x3
7102bb42c4  ldr w14,[x13]
7102bb42c8  ldr x14,[x10, x14, LSL #0x3]
7102bb42cc  cmp x14,x15
7102bb42d0  b.eq 0x7102bb42f0
7102bb42d4  sub w13,w12,#0x1
7102bb42d8  cmp x14,x15
7102bb42dc  csel w8,w13,w8,hi
7102bb42e0  csinc w9,w9,w12,hi
7102bb42e4  cmp w9,w8
7102bb42e8  b.le 0x7102bb42b0
7102bb42ec  b 0x7102bb4304
7102bb42f0  ldrsw x8,[x13, #0x4]
7102bb42f4  tbnz w8,#0x1f,0x7102bb4304
7102bb42f8  add x9,x24,x8
7102bb42fc  mov x8,x19
7102bb4300  b 0x7102bb430c
7102bb4304  mov x8,xzr
7102bb4308  mov x9,x25
7102bb430c  ldrb w10,[x9]
7102bb4310  cmp w10,#0xa
7102bb4314  mov x1,x26
7102bb4318  b.ne 0x7102bb4328
7102bb431c  ldursw x9,[x9, #0x1]
7102bb4320  ldr x8,[x8, #0x28]
7102bb4324  add x1,x8,x9
7102bb4328  ldr x8,[x21]
7102bb432c  madd x0,x22,x27,x8
7102bb4330  bl 0x71039c2720
7102bb4334  ldrb w8,[x24]
7102bb4338  cmp w8,#0xc
7102bb433c  b.ne 0x7102bb43ac
7102bb4340  ldur w8,[x24, #0x1]
7102bb4344  subs w8,w8,#0x1
7102bb4348  b.lt 0x7102bb43ac
7102bb434c  ldursw x11,[x24, #0x5]
7102bb4350  ldp x10,x12,[x19, #0x20]
7102bb4354  mov w9,wzr
7102bb4358  add x11,x12,x11
7102bb435c  add w12,w8,w9
7102bb4360  cmp w12,#0x0
7102bb4364  cinc w12,w12,lt
7102bb4368  asr w12,w12,#0x1
7102bb436c  add x13,x11,w12, SXTW  #0x3
7102bb4370  ldr w14,[x13]
7102bb4374  ldr x14,[x10, x14, LSL #0x3]
7102bb4378  cmp x14,x23
7102bb437c  b.eq 0x7102bb439c
7102bb4380  sub w13,w12,#0x1
7102bb4384  cmp x14,x23
7102bb4388  csel w8,w13,w8,hi
7102bb438c  csinc w9,w9,w12,hi
7102bb4390  cmp w9,w8
7102bb4394  b.le 0x7102bb435c
7102bb4398  b 0x7102bb43ac
7102bb439c  ldrsw x8,[x13, #0x4]
7102bb43a0  tbnz w8,#0x1f,0x7102bb43ac
7102bb43a4  add x8,x24,x8
7102bb43a8  b 0x7102bb43b4
7102bb43ac  mov x19,xzr
7102bb43b0  mov x8,x25
7102bb43b4  ldrb w9,[x8]
7102bb43b8  cmp w9,#0xa
7102bb43bc  mov x1,x28
7102bb43c0  b.ne 0x7102bb43d0
7102bb43c4  ldursw x8,[x8, #0x1]
7102bb43c8  ldr x9,[x19, #0x28]
7102bb43cc  add x1,x9,x8
7102bb43d0  ldr x8,[x21]
7102bb43d4  madd x8,x22,x27,x8
7102bb43d8  add x0,x8,#0x18
7102bb43dc  bl 0x71039c2720
7102bb43e0  ldrb w8,[x20]
7102bb43e4  sub w9,w8,#0xb
7102bb43e8  add x22,x22,#0x1
7102bb43ec  cmp w9,#0x1
7102bb43f0  b.hi 0x7102bb43fc
7102bb43f4  ldur w9,[x20, #0x1]
7102bb43f8  b 0x7102bb4400
7102bb43fc  mov w9,wzr
7102bb4400  mov x15,#0x52e1
7102bb4404  movk x15,#0x7374, LSL #16
7102bb4408  movk x15,#0xa, LSL #32
7102bb440c  cmp x22,w9, SXTW 
7102bb4410  b.lt 0x7102bb4248
7102bb4414  ldr x8,[sp, #0x30]
7102bb4418  ldr x8,[x8]
7102bb441c  ldrb w9,[x8]
7102bb4420  cmp w9,#0xc
7102bb4424  b.ne 0x7102bb44a8
7102bb4428  ldur w9,[x8, #0x1]
7102bb442c  subs w9,w9,#0x1
7102bb4430  b.lt 0x7102bb44a8
7102bb4434  ldr x11,[sp, #0x18]
7102bb4438  ldr x19,[x11]
7102bb443c  ldursw x12,[x8, #0x5]
7102bb4440  ldp x11,x13,[x19, #0x20]
7102bb4444  add x12,x13,x12
7102bb4448  mov x13,#0xf62f
7102bb444c  movk x13,#0x3426, LSL #16
7102bb4450  mov w10,wzr
7102bb4454  adrp x20,0x7104742000
7102bb4458  add x20,x20,#0xdbb
7102bb445c  movk x13,#0x9, LSL #32
7102bb4460  add w14,w9,w10
7102bb4464  cmp w14,#0x0
7102bb4468  cinc w14,w14,lt
7102bb446c  asr w14,w14,#0x1
7102bb4470  add x15,x12,w14, SXTW  #0x3
7102bb4474  ldr w16,[x15]
7102bb4478  ldr x16,[x11, x16, LSL #0x3]
7102bb447c  cmp x16,x13
7102bb4480  b.eq 0x7102bb45dc
7102bb4484  sub w15,w14,#0x1
7102bb4488  cmp x16,x13
7102bb448c  csel w9,w15,w9,hi
7102bb4490  csinc w10,w10,w14,hi
7102bb4494  cmp w10,w9
7102bb4498  b.le 0x7102bb4460
7102bb449c  ldr x10,[sp, #0x28]
7102bb44a0  mov x19,xzr
7102bb44a4  b 0x7102bb44b8
7102bb44a8  ldr x10,[sp, #0x28]
7102bb44ac  mov x19,xzr
7102bb44b0  adrp x20,0x7104742000
7102bb44b4  add x20,x20,#0xdbb
7102bb44b8  ldrb w8,[x20]
7102bb44bc  sub w8,w8,#0xb
7102bb44c0  cmp w8,#0x1
7102bb44c4  b.hi 0x7102bb44d0
7102bb44c8  ldur w8,[x20, #0x1]
7102bb44cc  b 0x7102bb44d4
7102bb44d0  mov w8,wzr
7102bb44d4  sxtw x27,w8
7102bb44d8  ldp x22,x8,[x10, #0x50]
7102bb44dc  sub x23,x8,x22
7102bb44e0  orr x11,xzr,#-0x3333333333333334
7102bb44e4  movk x11,#0xcccd
7102bb44e8  asr x9,x23,#0x2
7102bb44ec  mul x28,x9,x11
7102bb44f0  add x21,x10,#0x50
7102bb44f4  cmp x28,x27
7102bb44f8  b.cs 0x7102bb4560
7102bb44fc  ldr x9,[x10, #0x60]
7102bb4500  sub x10,x9,x8
7102bb4504  asr x10,x10,#0x2
7102bb4508  mul x10,x10,x11
7102bb450c  sub x26,x27,x28
7102bb4510  cmp x10,x26
7102bb4514  b.cs 0x7102bb4578
7102bb4518  tbz w27,#0x1f,0x7102bb4520
7102bb451c  b 0x7102bbde84
7102bb4520  sub x8,x9,x22
7102bb4524  orr x9,xzr,#-0x3333333333333334
7102bb4528  asr x8,x8,#0x2
7102bb452c  movk x9,#0xcccd
7102bb4530  mul x8,x8,x9
7102bb4534  orr x9,xzr,#0x6666666666666666
7102bb4538  movk x9,#0x666, LSL #48
7102bb453c  cmp x8,x9
7102bb4540  str x19,[sp, #0x20]
7102bb4544  b.cs 0x7102bb45f0
7102bb4548  lsl x8,x8,#0x1
7102bb454c  cmp x8,x27
7102bb4550  csel x8,x27,x8,cc
7102bb4554  cbnz x8,0x7102bb45f8
7102bb4558  mov x25,xzr
7102bb455c  b 0x7102bb4668
7102bb4560  mov x24,x10
7102bb4564  b.ls 0x7102bb46d4
7102bb4568  mov w8,#0x14
7102bb456c  madd x8,x27,x8,x22
7102bb4570  str x8,[x24, #0x58]
7102bb4574  b 0x7102bb46d4
7102bb4578  ldr x24,[sp, #0x28]
7102bb457c  mov x9,x26
7102bb4580  tbz w26,#0x0,0x7102bb459c
7102bb4584  str wzr,[x8, #0x10]
7102bb4588  stp xzr,xzr,[x8]
7102bb458c  ldr x8,[x24, #0x58]
7102bb4590  add x8,x8,#0x14
7102bb4594  sub x9,x26,#0x1
7102bb4598  str x8,[x24, #0x58]
7102bb459c  cmp x26,#0x1
7102bb45a0  b.eq 0x7102bb46d4
7102bb45a4  str wzr,[x8, #0x10]
7102bb45a8  stp xzr,xzr,[x8]
7102bb45ac  ldr x8,[x24, #0x58]
7102bb45b0  add x10,x8,#0x14
7102bb45b4  str x10,[x24, #0x58]
7102bb45b8  str wzr,[x8, #0x24]
7102bb45bc  stur xzr,[x8, #0x1c]
7102bb45c0  stur xzr,[x8, #0x14]
7102bb45c4  ldr x8,[x24, #0x58]
7102bb45c8  add x8,x8,#0x14
7102bb45cc  subs x9,x9,#0x2
7102bb45d0  str x8,[x24, #0x58]
7102bb45d4  b.ne 0x7102bb45a4
7102bb45d8  b 0x7102bb46d4
7102bb45dc  ldrsw x9,[x15, #0x4]
7102bb45e0  ldr x10,[sp, #0x28]
7102bb45e4  tbnz w9,#0x1f,0x7102bb44ac
7102bb45e8  add x20,x8,x9
7102bb45ec  b 0x7102bb44b8
7102bb45f0  orr x8,xzr,#-0x3333333333333334
7102bb45f4  movk x8,#0xccc, LSL #48
7102bb45f8  str x8,[sp, #0x10]
7102bb45fc  add x8,x8,x8, LSL #0x2
7102bb4600  lsl x8,x8,#0x2
7102bb4604  cmp x8,#0x0
7102bb4608  csinc x24,x8,xzr,ne
7102bb460c  mov w0,#0x10
7102bb4610  mov x1,x24
7102bb4614  bl 0x710392e290
7102bb4618  mov x25,x0
7102bb461c  cbnz x0,0x7102bb4664
7102bb4620  adrp x8,0x7105332000
7102bb4624  ldr x0,[x8, #0xf00]
7102bb4628  cbz x0,0x7102bb4660
7102bb462c  str wzr,[sp, #0x4c]
7102bb4630  str x24,[sp, #0x38]
7102bb4634  ldr x8,[x0]
7102bb4638  ldr x8,[x8, #0x30]
7102bb463c  add x1,sp,#0x4c
7102bb4640  add x2,sp,#0x38
7102bb4644  blr x8
7102bb4648  tbz w0,#0x0,0x7102bb4660
7102bb464c  mov w0,#0x10
7102bb4650  mov x1,x24
7102bb4654  bl 0x710392e290
7102bb4658  mov x25,x0
7102bb465c  cbnz x0,0x7102bb4664
7102bb4660  mov x25,xzr
7102bb4664  ldr x8,[sp, #0x10]
7102bb4668  mov w19,#0x14
7102bb466c  madd x24,x28,x19,x25
7102bb4670  madd x28,x8,x19,x25
7102bb4674  add x8,x26,x26, LSL #0x2
7102bb4678  lsl x2,x8,#0x2
7102bb467c  mov x0,x24
7102bb4680  mov w1,wzr
7102bb4684  bl 0x71039c02a0
7102bb4688  orr x8,xzr,#-0x6666666666666667
7102bb468c  smulh x8,x23,x8
7102bb4690  asr x9,x8,#0x3
7102bb4694  add x8,x9,x8, LSR #0x3f
7102bb4698  madd x25,x27,x19,x25
7102bb469c  cmp x23,#0x1
7102bb46a0  madd x24,x8,x19,x24
7102bb46a4  b.lt 0x7102bb46b8
7102bb46a8  mov x0,x24
7102bb46ac  mov x1,x22
7102bb46b0  mov x2,x23
7102bb46b4  bl 0x71039c00e0
7102bb46b8  ldp x19,x8,[sp, #0x20]
7102bb46bc  str x28,[x8, #0x60]
7102bb46c0  stp x24,x25,[x8, #0x50]
7102bb46c4  mov x24,x8
7102bb46c8  cbz x22,0x7102bb46d4
7102bb46cc  mov x0,x22
7102bb46d0  bl 0x710392eb40
7102bb46d4  ldrb w17,[x20]
7102bb46d8  sub w8,w17,#0xb
7102bb46dc  cmp w8,#0x1
7102bb46e0  b.hi 0x7102bb4ad8
7102bb46e4  ldur w8,[x20, #0x1]
7102bb46e8  cmp w8,#0x1
7102bb46ec  b.lt 0x7102bb4ad8
7102bb46f0  adrp x16,0x7104471000
7102bb46f4  ldr s1,[x16, #0xc58]
7102bb46f8  fmov s0,wzr
7102bb46fc  mov x9,#0xad54
7102bb4700  movk x9,#0x61f7, LSL #16
7102bb4704  mov x10,#0x3092
7102bb4708  movk x10,#0x62c9, LSL #16
7102bb470c  mov x11,#0x1fd0
7102bb4710  movk x11,#0xaeaf, LSL #16
7102bb4714  mov x12,#0xd2e2
7102bb4718  movk x12,#0x321b, LSL #16
7102bb471c  mov x13,#0xf576
7102bb4720  movk x13,#0xe93a, LSL #16
7102bb4724  mov x8,xzr
7102bb4728  movk x9,#0x15, LSL #32
7102bb472c  movk x10,#0x13, LSL #32
7102bb4730  movk x11,#0x11, LSL #32
7102bb4734  movk x12,#0x11, LSL #32
7102bb4738  movk x13,#0xf, LSL #32
7102bb473c  add x14,x20,#0x5
7102bb4740  mov w15,#0x14
7102bb4744  adrp x16,0x7104742000
7102bb4748  add x16,x16,#0xdbb
7102bb474c  mov x18,xzr
7102bb4750  tbnz w8,#0x1f,0x7102bb4784
7102bb4754  and w17,w17,#0xff
7102bb4758  cmp w17,#0xb
7102bb475c  mov x17,x16
7102bb4760  b.ne 0x7102bb4788
7102bb4764  ldur w17,[x20, #0x1]
7102bb4768  cmp w17,w8
7102bb476c  b.le 0x7102bb4780
7102bb4770  ldrsw x17,[x14, w8, SXTW #0x2]
7102bb4774  add x17,x20,x17
7102bb4778  mov x18,x19
7102bb477c  b 0x7102bb4788
7102bb4780  mov x18,xzr
7102bb4784  mov x17,x16
7102bb4788  ldrb w0,[x17]
7102bb478c  cmp w0,#0xc
7102bb4790  mov x0,x16
7102bb4794  b.ne 0x7102bb4808
7102bb4798  ldur w0,[x17, #0x1]
7102bb479c  subs w0,w0,#0x1
7102bb47a0  b.lt 0x7102bb4804
7102bb47a4  ldursw x3,[x17, #0x5]
7102bb47a8  ldp x2,x4,[x18, #0x20]
7102bb47ac  mov w1,wzr
7102bb47b0  add x3,x4,x3
7102bb47b4  add w4,w0,w1
7102bb47b8  cmp w4,#0x0
7102bb47bc  cinc w4,w4,lt
7102bb47c0  asr w4,w4,#0x1
7102bb47c4  add x5,x3,w4, SXTW  #0x3
7102bb47c8  ldr w6,[x5]
7102bb47cc  ldr x6,[x2, x6, LSL #0x3]
7102bb47d0  cmp x6,x9
7102bb47d4  b.eq 0x7102bb47f4
7102bb47d8  sub w5,w4,#0x1
7102bb47dc  cmp x6,x9
7102bb47e0  csel w0,w5,w0,hi
7102bb47e4  csinc w1,w1,w4,hi
7102bb47e8  cmp w1,w0
7102bb47ec  b.le 0x7102bb47b4
7102bb47f0  b 0x7102bb4804
7102bb47f4  ldrsw x0,[x5, #0x4]
7102bb47f8  tbnz w0,#0x1f,0x7102bb4804
7102bb47fc  add x0,x17,x0
7102bb4800  b 0x7102bb4808
7102bb4804  mov x0,x16
7102bb4808  ldrb w1,[x0]
7102bb480c  mov v2.16B,v0.16B
7102bb4810  cmp w1,#0x8
7102bb4814  b.ne 0x7102bb481c
7102bb4818  ldur s2,[x0, #0x1]
7102bb481c  mul x1,x8,x15
7102bb4820  ldr x0,[x21]
7102bb4824  str s2,[x0,x1]
7102bb4828  ldrb w0,[x17]
7102bb482c  cmp w0,#0xc
7102bb4830  mov x0,x16
7102bb4834  b.ne 0x7102bb48a8
7102bb4838  ldur w0,[x17, #0x1]
7102bb483c  subs w0,w0,#0x1
7102bb4840  b.lt 0x7102bb48a4
7102bb4844  ldursw x3,[x17, #0x5]
7102bb4848  ldp x2,x4,[x18, #0x20]
7102bb484c  mov w1,wzr
7102bb4850  add x3,x4,x3
7102bb4854  add w4,w0,w1
7102bb4858  cmp w4,#0x0
7102bb485c  cinc w4,w4,lt
7102bb4860  asr w4,w4,#0x1
7102bb4864  add x5,x3,w4, SXTW  #0x3
7102bb4868  ldr w6,[x5]
7102bb486c  ldr x6,[x2, x6, LSL #0x3]
7102bb4870  cmp x6,x10
7102bb4874  b.eq 0x7102bb4894
7102bb4878  sub w5,w4,#0x1
7102bb487c  cmp x6,x10
7102bb4880  csel w0,w5,w0,hi
7102bb4884  csinc w1,w1,w4,hi
7102bb4888  cmp w1,w0
7102bb488c  b.le 0x7102bb4854
7102bb4890  b 0x7102bb48a4
7102bb4894  ldrsw x0,[x5, #0x4]
7102bb4898  tbnz w0,#0x1f,0x7102bb48a4
7102bb489c  add x0,x17,x0
7102bb48a0  b 0x7102bb48a8
7102bb48a4  mov x0,x16
7102bb48a8  ldrb w1,[x0]
7102bb48ac  mov v2.16B,v1.16B
7102bb48b0  cmp w1,#0x8
7102bb48b4  b.ne 0x7102bb48bc
7102bb48b8  ldur s2,[x0, #0x1]
7102bb48bc  ldr x0,[x21]
7102bb48c0  madd x0,x8,x15,x0
7102bb48c4  str s2,[x0, #0x4]
7102bb48c8  ldrb w0,[x17]
7102bb48cc  cmp w0,#0xc
7102bb48d0  mov x0,x16
7102bb48d4  b.ne 0x7102bb4948
7102bb48d8  ldur w0,[x17, #0x1]
7102bb48dc  subs w0,w0,#0x1
7102bb48e0  b.lt 0x7102bb4944
7102bb48e4  ldursw x3,[x17, #0x5]
7102bb48e8  ldp x2,x4,[x18, #0x20]
7102bb48ec  mov w1,wzr
7102bb48f0  add x3,x4,x3
7102bb48f4  add w4,w0,w1
7102bb48f8  cmp w4,#0x0
7102bb48fc  cinc w4,w4,lt
7102bb4900  asr w4,w4,#0x1
7102bb4904  add x5,x3,w4, SXTW  #0x3
7102bb4908  ldr w6,[x5]
7102bb490c  ldr x6,[x2, x6, LSL #0x3]
7102bb4910  cmp x6,x13
7102bb4914  b.eq 0x7102bb4934
7102bb4918  sub w5,w4,#0x1
7102bb491c  cmp x6,x13
7102bb4920  csel w0,w5,w0,hi
7102bb4924  csinc w1,w1,w4,hi
7102bb4928  cmp w1,w0
7102bb492c  b.le 0x7102bb48f4
7102bb4930  b 0x7102bb4944
7102bb4934  ldrsw x0,[x5, #0x4]
7102bb4938  tbnz w0,#0x1f,0x7102bb4944
7102bb493c  add x0,x17,x0
7102bb4940  b 0x7102bb4948
7102bb4944  mov x0,x16
7102bb4948  ldrb w1,[x0]
7102bb494c  mov v2.16B,v0.16B
7102bb4950  cmp w1,#0x8
7102bb4954  b.ne 0x7102bb495c
7102bb4958  ldur s2,[x0, #0x1]
7102bb495c  ldr x0,[x21]
7102bb4960  madd x0,x8,x15,x0
7102bb4964  str s2,[x0, #0x8]
7102bb4968  ldrb w0,[x17]
7102bb496c  cmp w0,#0xc
7102bb4970  mov x0,x16
7102bb4974  b.ne 0x7102bb49e8
7102bb4978  ldur w0,[x17, #0x1]
7102bb497c  subs w0,w0,#0x1
7102bb4980  b.lt 0x7102bb49e4
7102bb4984  ldursw x3,[x17, #0x5]
7102bb4988  ldp x2,x4,[x18, #0x20]
7102bb498c  mov w1,wzr
7102bb4990  add x3,x4,x3
7102bb4994  add w4,w0,w1
7102bb4998  cmp w4,#0x0
7102bb499c  cinc w4,w4,lt
7102bb49a0  asr w4,w4,#0x1
7102bb49a4  add x5,x3,w4, SXTW  #0x3
7102bb49a8  ldr w6,[x5]
7102bb49ac  ldr x6,[x2, x6, LSL #0x3]
7102bb49b0  cmp x6,x11
7102bb49b4  b.eq 0x7102bb49d4
7102bb49b8  sub w5,w4,#0x1
7102bb49bc  cmp x6,x11
7102bb49c0  csel w0,w5,w0,hi
7102bb49c4  csinc w1,w1,w4,hi
7102bb49c8  cmp w1,w0
7102bb49cc  b.le 0x7102bb4994
7102bb49d0  b 0x7102bb49e4
7102bb49d4  ldrsw x0,[x5, #0x4]
7102bb49d8  tbnz w0,#0x1f,0x7102bb49e4
7102bb49dc  add x0,x17,x0
7102bb49e0  b 0x7102bb49e8
7102bb49e4  mov x0,x16
7102bb49e8  ldrb w1,[x0]
7102bb49ec  mov v2.16B,v0.16B
7102bb49f0  cmp w1,#0x8
7102bb49f4  b.ne 0x7102bb49fc
7102bb49f8  ldur s2,[x0, #0x1]
7102bb49fc  ldr x0,[x21]
7102bb4a00  madd x0,x8,x15,x0
7102bb4a04  str s2,[x0, #0xc]
7102bb4a08  ldrb w0,[x17]
7102bb4a0c  cmp w0,#0xc
7102bb4a10  mov x0,x16
7102bb4a14  b.ne 0x7102bb4a88
7102bb4a18  ldur w0,[x17, #0x1]
7102bb4a1c  subs w0,w0,#0x1
7102bb4a20  b.lt 0x7102bb4a84
7102bb4a24  ldursw x3,[x17, #0x5]
7102bb4a28  ldp x2,x18,[x18, #0x20]
7102bb4a2c  mov w1,wzr
7102bb4a30  add x18,x18,x3
7102bb4a34  add w3,w0,w1
7102bb4a38  cmp w3,#0x0
7102bb4a3c  cinc w3,w3,lt
7102bb4a40  asr w3,w3,#0x1
7102bb4a44  add x4,x18,w3, SXTW  #0x3
7102bb4a48  ldr w5,[x4]
7102bb4a4c  ldr x5,[x2, x5, LSL #0x3]
7102bb4a50  cmp x5,x12
7102bb4a54  b.eq 0x7102bb4a74
7102bb4a58  sub w4,w3,#0x1
7102bb4a5c  cmp x5,x12
7102bb4a60  csel w0,w4,w0,hi
7102bb4a64  csinc w1,w1,w3,hi
7102bb4a68  cmp w1,w0
7102bb4a6c  b.le 0x7102bb4a34
7102bb4a70  b 0x7102bb4a84
7102bb4a74  ldrsw x18,[x4, #0x4]
7102bb4a78  tbnz w18,#0x1f,0x7102bb4a84
7102bb4a7c  add x0,x17,x18
7102bb4a80  b 0x7102bb4a88
7102bb4a84  mov x0,x16
7102bb4a88  ldrb w17,[x0]
7102bb4a8c  mov v2.16B,v0.16B
7102bb4a90  cmp w17,#0x8
7102bb4a94  b.ne 0x7102bb4a9c
7102bb4a98  ldur s2,[x0, #0x1]
7102bb4a9c  ldr x17,[x21]
7102bb4aa0  madd x17,x8,x15,x17
7102bb4aa4  add x8,x8,#0x1
7102bb4aa8  str s2,[x17, #0x10]
7102bb4aac  ldrb w17,[x20]
7102bb4ab0  sub w18,w17,#0xb
7102bb4ab4  cmp w18,#0x1
7102bb4ab8  b.hi 0x7102bb4acc
7102bb4abc  ldur w18,[x20, #0x1]
7102bb4ac0  cmp x8,w18, SXTW 
7102bb4ac4  b.lt 0x7102bb474c
7102bb4ac8  b 0x7102bb4ad8
7102bb4acc  mov w18,wzr
7102bb4ad0  cmp x8,w18, SXTW 
7102bb4ad4  b.lt 0x7102bb474c
7102bb4ad8  ldr x8,[sp, #0x30]
7102bb4adc  ldr x8,[x8]
7102bb4ae0  ldrb w9,[x8]
7102bb4ae4  cmp w9,#0xc
7102bb4ae8  b.ne 0x7102bb4b78
7102bb4aec  ldur w9,[x8, #0x1]
7102bb4af0  subs w9,w9,#0x1
7102bb4af4  b.lt 0x7102bb4b78
7102bb4af8  ldr x11,[sp, #0x18]
7102bb4afc  ldr x19,[x11]
7102bb4b00  ldursw x12,[x8, #0x5]
7102bb4b04  ldp x11,x13,[x19, #0x20]
7102bb4b08  add x12,x13,x12
7102bb4b0c  mov x13,#0x454b
7102bb4b10  movk x13,#0xc274, LSL #16
7102bb4b14  mov w10,wzr
7102bb4b18  adrp x20,0x7104742000
7102bb4b1c  add x20,x20,#0xdbb
7102bb4b20  movk x13,#0xd, LSL #32
7102bb4b24  add w14,w9,w10
7102bb4b28  cmp w14,#0x0
7102bb4b2c  cinc w14,w14,lt
7102bb4b30  asr w14,w14,#0x1
7102bb4b34  add x15,x12,w14, SXTW  #0x3
7102bb4b38  ldr w16,[x15]
7102bb4b3c  ldr x16,[x11, x16, LSL #0x3]
7102bb4b40  cmp x16,x13
7102bb4b44  b.eq 0x7102bb4b68
7102bb4b48  sub w15,w14,#0x1
7102bb4b4c  cmp x16,x13
7102bb4b50  csel w9,w15,w9,hi
7102bb4b54  csinc w10,w10,w14,hi
7102bb4b58  cmp w10,w9
7102bb4b5c  b.le 0x7102bb4b24
7102bb4b60  mov x19,xzr
7102bb4b64  b 0x7102bb4b84
7102bb4b68  ldrsw x9,[x15, #0x4]
7102bb4b6c  tbnz w9,#0x1f,0x7102bb4b78
7102bb4b70  add x20,x8,x9
7102bb4b74  b 0x7102bb4b84
7102bb4b78  mov x19,xzr
7102bb4b7c  adrp x20,0x7104742000
7102bb4b80  add x20,x20,#0xdbb
7102bb4b84  ldrb w8,[x20]
7102bb4b88  sub w8,w8,#0xb
7102bb4b8c  cmp w8,#0x1
7102bb4b90  b.hi 0x7102bb4b9c
7102bb4b94  ldur w8,[x20, #0x1]
7102bb4b98  b 0x7102bb4ba0
7102bb4b9c  mov w8,wzr
7102bb4ba0  sxtw x27,w8
7102bb4ba4  ldp x22,x8,[x24, #0x68]
7102bb4ba8  sub x23,x8,x22
7102bb4bac  asr x28,x23,#0x3
7102bb4bb0  add x21,x24,#0x68
7102bb4bb4  cmp x28,x27
7102bb4bb8  b.cs 0x7102bb4c0c
7102bb4bbc  ldr x9,[x24, #0x78]
7102bb4bc0  sub x10,x9,x8
7102bb4bc4  sub x26,x27,x28
7102bb4bc8  asr x10,x10,#0x3
7102bb4bcc  cmp x10,x26
7102bb4bd0  b.cs 0x7102bb4c20
7102bb4bd4  tbz w27,#0x1f,0x7102bb4bdc
7102bb4bd8  b 0x7102bbde84
7102bb4bdc  sub x8,x9,x22
7102bb4be0  asr x9,x8,#0x3
7102bb4be4  orr x10,xzr,#0xffffffffffffffe
7102bb4be8  cmp x9,x10
7102bb4bec  b.hi 0x7102bb4c74
7102bb4bf0  asr x8,x8,#0x2
7102bb4bf4  cmp x8,x27
7102bb4bf8  csel x25,x27,x8,cc
7102bb4bfc  cbz x25,0x7102bb4cdc
7102bb4c00  lsr x8,x25,#0x3d
7102bb4c04  cbz x8,0x7102bb4c78
7102bb4c08  b 0x7102bbb008
7102bb4c0c  mov x28,x24
7102bb4c10  b.ls 0x7102bb4d28
7102bb4c14  add x8,x22,x27, LSL #0x3
7102bb4c18  str x8,[x28, #0x70]
7102bb4c1c  b 0x7102bb4d28
7102bb4c20  ldr x28,[sp, #0x28]
7102bb4c24  mov x9,x26
7102bb4c28  tbz w26,#0x0,0x7102bb4c40
7102bb4c2c  str xzr,[x8]
7102bb4c30  ldr x8,[x28, #0x70]
7102bb4c34  add x8,x8,#0x8
7102bb4c38  sub x9,x26,#0x1
7102bb4c3c  str x8,[x28, #0x70]
7102bb4c40  cmp x26,#0x1
7102bb4c44  b.eq 0x7102bb4d28
7102bb4c48  str xzr,[x8]
7102bb4c4c  ldr x8,[x28, #0x70]
7102bb4c50  add x10,x8,#0x8
7102bb4c54  str x10,[x28, #0x70]
7102bb4c58  str xzr,[x8, #0x8]
7102bb4c5c  ldr x8,[x28, #0x70]
7102bb4c60  add x8,x8,#0x8
7102bb4c64  subs x9,x9,#0x2
7102bb4c68  str x8,[x28, #0x70]
7102bb4c6c  b.ne 0x7102bb4c48
7102bb4c70  b 0x7102bb4d28
7102bb4c74  orr x25,xzr,#0x1fffffffffffffff
7102bb4c78  lsl x8,x25,#0x3
7102bb4c7c  cmp x8,#0x0
7102bb4c80  csinc x1,x8,xzr,ne
7102bb4c84  mov w0,#0x10
7102bb4c88  str x1,[sp, #0x20]
7102bb4c8c  bl 0x710392e290
7102bb4c90  mov x24,x0
7102bb4c94  cbnz x0,0x7102bb4ce0
7102bb4c98  adrp x8,0x7105332000
7102bb4c9c  ldr x0,[x8, #0xf00]
7102bb4ca0  cbz x0,0x7102bb4cdc
7102bb4ca4  ldr x8,[sp, #0x20]
7102bb4ca8  str wzr,[sp, #0x4c]
7102bb4cac  add x1,sp,#0x4c
7102bb4cb0  add x2,sp,#0x38
7102bb4cb4  str x8,[sp, #0x38]
7102bb4cb8  ldr x8,[x0]
7102bb4cbc  ldr x8,[x8, #0x30]
7102bb4cc0  blr x8
7102bb4cc4  tbz w0,#0x0,0x7102bb4cdc
7102bb4cc8  ldr x1,[sp, #0x20]
7102bb4ccc  mov w0,#0x10
7102bb4cd0  bl 0x710392e290
7102bb4cd4  mov x24,x0
7102bb4cd8  cbnz x0,0x7102bb4ce0
7102bb4cdc  mov x24,xzr
7102bb4ce0  add x0,x24,x28, LSL #0x3
7102bb4ce4  lsl x2,x26,#0x3
7102bb4ce8  mov w1,wzr
7102bb4cec  add x25,x24,x25, LSL #0x3
7102bb4cf0  bl 0x71039c02a0
7102bb4cf4  add x26,x24,x27, LSL #0x3
7102bb4cf8  cmp x23,#0x1
7102bb4cfc  b.lt 0x7102bb4d10
7102bb4d00  mov x0,x24
7102bb4d04  mov x1,x22
7102bb4d08  mov x2,x23
7102bb4d0c  bl 0x71039c00e0
7102bb4d10  ldr x28,[sp, #0x28]
7102bb4d14  stp x24,x26,[x28, #0x68]
7102bb4d18  str x25,[x28, #0x78]
7102bb4d1c  cbz x22,0x7102bb4d28
7102bb4d20  mov x0,x22
7102bb4d24  bl 0x710392eb40
7102bb4d28  ldrb w11,[x20]
7102bb4d2c  mov x2,#0x4096
7102bb4d30  movk x2,#0xf6dc, LSL #16
7102bb4d34  mov x1,#0x7bc8
7102bb4d38  movk x1,#0xc467, LSL #16
7102bb4d3c  orr x23,xzr,#-0x3333333333333334
7102bb4d40  movk x2,#0xb, LSL #32
7102bb4d44  movk x1,#0x9, LSL #32
7102bb4d48  movk x23,#0xcccd
7102bb4d4c  sub w8,w11,#0xb
7102bb4d50  cmp w8,#0x1
7102bb4d54  b.hi 0x7102bb4f2c
7102bb4d58  ldur w8,[x20, #0x1]
7102bb4d5c  cmp w8,#0x1
7102bb4d60  b.lt 0x7102bb4f2c
7102bb4d64  adrp x10,0x7104472000
7102bb4d68  ldr s1,[x10, #0x150]
7102bb4d6c  fmov s0,wzr
7102bb4d70  mov x8,xzr
7102bb4d74  add x9,x20,#0x5
7102bb4d78  adrp x10,0x7104742000
7102bb4d7c  add x10,x10,#0xdbb
7102bb4d80  mov x12,xzr
7102bb4d84  tbnz w8,#0x1f,0x7102bb4db8
7102bb4d88  and w11,w11,#0xff
7102bb4d8c  cmp w11,#0xb
7102bb4d90  mov x11,x10
7102bb4d94  b.ne 0x7102bb4dbc
7102bb4d98  ldur w11,[x20, #0x1]
7102bb4d9c  cmp w11,w8
7102bb4da0  b.le 0x7102bb4db4
7102bb4da4  ldrsw x11,[x9, w8, SXTW #0x2]
7102bb4da8  add x11,x20,x11
7102bb4dac  mov x12,x19
7102bb4db0  b 0x7102bb4dbc
7102bb4db4  mov x12,xzr
7102bb4db8  mov x11,x10
7102bb4dbc  ldrb w13,[x11]
7102bb4dc0  cmp w13,#0xc
7102bb4dc4  mov x13,x10
7102bb4dc8  b.ne 0x7102bb4e3c
7102bb4dcc  ldur w13,[x11, #0x1]
7102bb4dd0  subs w13,w13,#0x1
7102bb4dd4  b.lt 0x7102bb4e38
7102bb4dd8  ldursw x16,[x11, #0x5]
7102bb4ddc  ldp x15,x17,[x12, #0x20]
7102bb4de0  mov w14,wzr
7102bb4de4  add x16,x17,x16
7102bb4de8  add w17,w13,w14
7102bb4dec  cmp w17,#0x0
7102bb4df0  cinc w17,w17,lt
7102bb4df4  asr w17,w17,#0x1
7102bb4df8  add x18,x16,w17, SXTW  #0x3
7102bb4dfc  ldr w0,[x18]
7102bb4e00  ldr x0,[x15, x0, LSL #0x3]
7102bb4e04  cmp x0,x2
7102bb4e08  b.eq 0x7102bb4e28
7102bb4e0c  sub w18,w17,#0x1
7102bb4e10  cmp x0,x2
7102bb4e14  csel w13,w18,w13,hi
7102bb4e18  csinc w14,w14,w17,hi
7102bb4e1c  cmp w14,w13
7102bb4e20  b.le 0x7102bb4de8
7102bb4e24  b 0x7102bb4e38
7102bb4e28  ldrsw x13,[x18, #0x4]
7102bb4e2c  tbnz w13,#0x1f,0x7102bb4e38
7102bb4e30  add x13,x11,x13
7102bb4e34  b 0x7102bb4e3c
7102bb4e38  mov x13,x10
7102bb4e3c  ldrb w14,[x13]
7102bb4e40  mov v2.16B,v0.16B
7102bb4e44  cmp w14,#0x8
7102bb4e48  b.ne 0x7102bb4e50
7102bb4e4c  ldur s2,[x13, #0x1]
7102bb4e50  ldr x13,[x21]
7102bb4e54  lsl x14,x8,#0x3
7102bb4e58  str s2,[x13,x14]
7102bb4e5c  ldrb w13,[x11]
7102bb4e60  cmp w13,#0xc
7102bb4e64  mov x13,x10
7102bb4e68  b.ne 0x7102bb4edc
7102bb4e6c  ldur w13,[x11, #0x1]
7102bb4e70  subs w13,w13,#0x1
7102bb4e74  b.lt 0x7102bb4ed8
7102bb4e78  ldursw x16,[x11, #0x5]
7102bb4e7c  ldp x15,x12,[x12, #0x20]
7102bb4e80  mov w14,wzr
7102bb4e84  add x12,x12,x16
7102bb4e88  add w16,w13,w14
7102bb4e8c  cmp w16,#0x0
7102bb4e90  cinc w16,w16,lt
7102bb4e94  asr w16,w16,#0x1
7102bb4e98  add x17,x12,w16, SXTW  #0x3
7102bb4e9c  ldr w18,[x17]
7102bb4ea0  ldr x18,[x15, x18, LSL #0x3]
7102bb4ea4  cmp x18,x1
7102bb4ea8  b.eq 0x7102bb4ec8
7102bb4eac  sub w17,w16,#0x1
7102bb4eb0  cmp x18,x1
7102bb4eb4  csel w13,w17,w13,hi
7102bb4eb8  csinc w14,w14,w16,hi
7102bb4ebc  cmp w14,w13
7102bb4ec0  b.le 0x7102bb4e88
7102bb4ec4  b 0x7102bb4ed8
7102bb4ec8  ldrsw x12,[x17, #0x4]
7102bb4ecc  tbnz w12,#0x1f,0x7102bb4ed8
7102bb4ed0  add x13,x11,x12
7102bb4ed4  b 0x7102bb4edc
7102bb4ed8  mov x13,x10
7102bb4edc  ldrb w11,[x13]
7102bb4ee0  mov v2.16B,v1.16B
7102bb4ee4  cmp w11,#0x8
7102bb4ee8  b.ne 0x7102bb4ef0
7102bb4eec  ldur s2,[x13, #0x1]
7102bb4ef0  ldr x11,[x21]
7102bb4ef4  add x11,x11,x8, LSL #0x3
7102bb4ef8  add x8,x8,#0x1
7102bb4efc  str s2,[x11, #0x4]
7102bb4f00  ldrb w11,[x20]
7102bb4f04  sub w12,w11,#0xb
7102bb4f08  cmp w12,#0x1
7102bb4f0c  b.hi 0x7102bb4f20
7102bb4f10  ldur w12,[x20, #0x1]
7102bb4f14  cmp x8,w12, SXTW 
7102bb4f18  b.lt 0x7102bb4d80
7102bb4f1c  b 0x7102bb4f2c
7102bb4f20  mov w12,wzr
7102bb4f24  cmp x8,w12, SXTW 
7102bb4f28  b.lt 0x7102bb4d80
7102bb4f2c  ldr x8,[sp, #0x30]
7102bb4f30  ldr x8,[x8]
7102bb4f34  ldrb w9,[x8]
7102bb4f38  cmp w9,#0xc
7102bb4f3c  b.ne 0x7102bb4fc8
7102bb4f40  ldur w9,[x8, #0x1]
7102bb4f44  subs w10,w9,#0x1
7102bb4f48  b.lt 0x7102bb4fc8
7102bb4f4c  ldr x12,[sp, #0x18]
7102bb4f50  ldr x13,[x12]
7102bb4f54  ldursw x9,[x8, #0x5]
7102bb4f58  ldp x12,x13,[x13, #0x20]
7102bb4f5c  mov x14,#0x5074
7102bb4f60  movk x14,#0xc465, LSL #16
7102bb4f64  mov w11,wzr
7102bb4f68  add x13,x13,x9
7102bb4f6c  movk x14,#0x19, LSL #32
7102bb4f70  adrp x9,0x7104742000
7102bb4f74  add x9,x9,#0xdbb
7102bb4f78  add w15,w10,w11
7102bb4f7c  cmp w15,#0x0
7102bb4f80  cinc w15,w15,lt
7102bb4f84  asr w15,w15,#0x1
7102bb4f88  add x16,x13,w15, SXTW  #0x3
7102bb4f8c  ldr w17,[x16]
7102bb4f90  ldr x17,[x12, x17, LSL #0x3]
7102bb4f94  cmp x17,x14
7102bb4f98  b.eq 0x7102bb4fb8
7102bb4f9c  sub w16,w15,#0x1
7102bb4fa0  cmp x17,x14
7102bb4fa4  csel w10,w16,w10,hi
7102bb4fa8  csinc w11,w11,w15,hi
7102bb4fac  cmp w11,w10
7102bb4fb0  b.le 0x7102bb4f78
7102bb4fb4  b 0x7102bb4fd0
7102bb4fb8  ldrsw x9,[x16, #0x4]
7102bb4fbc  tbnz w9,#0x1f,0x7102bb4fc8
7102bb4fc0  add x9,x8,x9
7102bb4fc4  b 0x7102bb4fd0
7102bb4fc8  adrp x9,0x7104742000
7102bb4fcc  add x9,x9,#0xdbb
7102bb4fd0  ldrb w8,[x9]
7102bb4fd4  cmp w8,#0x8
7102bb4fd8  b.ne 0x7102bb4fe4
7102bb4fdc  ldur s0,[x9, #0x1]
7102bb4fe0  b 0x7102bb4fec
7102bb4fe4  adrp x8,0x7104472000
7102bb4fe8  ldr s0,[x8, #0x598]
7102bb4fec  ldr x8,[sp, #0x30]
7102bb4ff0  str s0,[x28, #0x80]
7102bb4ff4  ldr x8,[x8]
7102bb4ff8  ldrb w9,[x8]
7102bb4ffc  cmp w9,#0xc
7102bb5000  b.ne 0x7102bb508c
7102bb5004  ldur w9,[x8, #0x1]
7102bb5008  subs w10,w9,#0x1
7102bb500c  b.lt 0x7102bb508c
7102bb5010  ldr x12,[sp, #0x18]
7102bb5014  ldr x13,[x12]
7102bb5018  ldursw x9,[x8, #0x5]
7102bb501c  ldp x12,x13,[x13, #0x20]
7102bb5020  mov x14,#0xabd0
7102bb5024  movk x14,#0xf8a2, LSL #16
7102bb5028  mov w11,wzr
7102bb502c  add x13,x13,x9
7102bb5030  movk x14,#0x17, LSL #32
7102bb5034  adrp x9,0x7104742000
7102bb5038  add x9,x9,#0xdbb
7102bb503c  add w15,w10,w11
7102bb5040  cmp w15,#0x0
7102bb5044  cinc w15,w15,lt
7102bb5048  asr w15,w15,#0x1
7102bb504c  add x16,x13,w15, SXTW  #0x3
7102bb5050  ldr w17,[x16]
7102bb5054  ldr x17,[x12, x17, LSL #0x3]
7102bb5058  cmp x17,x14
7102bb505c  b.eq 0x7102bb507c
7102bb5060  sub w16,w15,#0x1
7102bb5064  cmp x17,x14
7102bb5068  csel w10,w16,w10,hi
7102bb506c  csinc w11,w11,w15,hi
7102bb5070  cmp w11,w10
7102bb5074  b.le 0x7102bb503c
7102bb5078  b 0x7102bb5094
7102bb507c  ldrsw x9,[x16, #0x4]
7102bb5080  tbnz w9,#0x1f,0x7102bb508c
7102bb5084  add x9,x8,x9
7102bb5088  b 0x7102bb5094
7102bb508c  adrp x9,0x7104742000
7102bb5090  add x9,x9,#0xdbb
7102bb5094  ldrb w8,[x9]
7102bb5098  cmp w8,#0x8
7102bb509c  b.ne 0x7102bb50a8
7102bb50a0  ldur s0,[x9, #0x1]
7102bb50a4  b 0x7102bb50b0
7102bb50a8  adrp x8,0x7104473000
7102bb50ac  ldr s0,[x8, #0x368]
7102bb50b0  ldr x8,[sp, #0x30]
7102bb50b4  str s0,[x28, #0x84]
7102bb50b8  ldr x8,[x8]
7102bb50bc  ldrb w9,[x8]
7102bb50c0  cmp w9,#0xc
7102bb50c4  b.ne 0x7102bb5154
7102bb50c8  ldur w9,[x8, #0x1]
7102bb50cc  subs w9,w9,#0x1
7102bb50d0  b.lt 0x7102bb5154
7102bb50d4  ldr x11,[sp, #0x18]
7102bb50d8  ldr x19,[x11]
7102bb50dc  ldursw x12,[x8, #0x5]
7102bb50e0  ldp x11,x13,[x19, #0x20]
7102bb50e4  add x12,x13,x12
7102bb50e8  mov x13,#0x5824
7102bb50ec  movk x13,#0x2931, LSL #16
7102bb50f0  mov w10,wzr
7102bb50f4  adrp x20,0x7104742000
7102bb50f8  add x20,x20,#0xdbb
7102bb50fc  movk x13,#0x14, LSL #32
7102bb5100  add w14,w9,w10
7102bb5104  cmp w14,#0x0
7102bb5108  cinc w14,w14,lt
7102bb510c  asr w14,w14,#0x1
7102bb5110  add x15,x12,w14, SXTW  #0x3
7102bb5114  ldr w16,[x15]
7102bb5118  ldr x16,[x11, x16, LSL #0x3]
7102bb511c  cmp x16,x13
7102bb5120  b.eq 0x7102bb5144
7102bb5124  sub w15,w14,#0x1
7102bb5128  cmp x16,x13
7102bb512c  csel w9,w15,w9,hi
7102bb5130  csinc w10,w10,w14,hi
7102bb5134  cmp w10,w9
7102bb5138  b.le 0x7102bb5100
7102bb513c  mov x19,xzr
7102bb5140  b 0x7102bb5160
7102bb5144  ldrsw x9,[x15, #0x4]
7102bb5148  tbnz w9,#0x1f,0x7102bb5154
7102bb514c  add x20,x8,x9
7102bb5150  b 0x7102bb5160
7102bb5154  mov x19,xzr
7102bb5158  adrp x20,0x7104742000
7102bb515c  add x20,x20,#0xdbb
7102bb5160  ldrb w8,[x20]
7102bb5164  sub w8,w8,#0xb
7102bb5168  cmp w8,#0x1
7102bb516c  b.hi 0x7102bb5178
7102bb5170  ldur w8,[x20, #0x1]
7102bb5174  b 0x7102bb517c
7102bb5178  mov w8,wzr
7102bb517c  ldp x9,x10,[x28, #0x88]
7102bb5180  sub x10,x10,x9
7102bb5184  sxtw x8,w8
7102bb5188  asr x10,x10,#0x3
7102bb518c  add x21,x28,#0x88
7102bb5190  cmp x10,x8
7102bb5194  b.cs 0x7102bb51a8
7102bb5198  sub x1,x8,x10
7102bb519c  mov x0,x21
7102bb51a0  bl 0x7100771690
7102bb51a4  b 0x7102bb51b4
7102bb51a8  b.ls 0x7102bb51b4
7102bb51ac  add x8,x9,x8, LSL #0x3
7102bb51b0  str x8,[x28, #0x90]
7102bb51b4  ldrb w12,[x20]
7102bb51b8  sub w8,w12,#0xb
7102bb51bc  cmp w8,#0x1
7102bb51c0  b.hi 0x7102bb5274
7102bb51c4  ldur w8,[x20, #0x1]
7102bb51c8  cmp w8,#0x1
7102bb51cc  b.lt 0x7102bb5274
7102bb51d0  mov w8,wzr
7102bb51d4  mov x9,xzr
7102bb51d8  add x10,x20,#0x5
7102bb51dc  adrp x11,0x7104742000
7102bb51e0  add x11,x11,#0xdbb
7102bb51e4  mov x13,xzr
7102bb51e8  tbnz w9,#0x1f,0x7102bb521c
7102bb51ec  and w12,w12,#0xff
7102bb51f0  cmp w12,#0xb
7102bb51f4  mov x12,x11
7102bb51f8  b.ne 0x7102bb5220
7102bb51fc  ldur w12,[x20, #0x1]
7102bb5200  cmp w12,w9
7102bb5204  b.le 0x7102bb5218
7102bb5208  ldrsw x12,[x10, w8, SXTW #0x0]
7102bb520c  add x12,x20,x12
7102bb5210  mov x13,x19
7102bb5214  b 0x7102bb5220
7102bb5218  mov x13,xzr
7102bb521c  mov x12,x11
7102bb5220  ldrb w14,[x12]
7102bb5224  cmp w14,#0x9
7102bb5228  b.ne 0x7102bb523c
7102bb522c  ldursw x12,[x12, #0x1]
7102bb5230  ldr x13,[x13, #0x20]
7102bb5234  ldr x12,[x13, x12, LSL #0x3]
7102bb5238  b 0x7102bb5240
7102bb523c  mov x12,xzr
7102bb5240  ldr x13,[x21]
7102bb5244  str x12,[x13, x9, LSL #0x3]
7102bb5248  ldrb w12,[x20]
7102bb524c  sub w13,w12,#0xb
7102bb5250  add x9,x9,#0x1
7102bb5254  cmp w13,#0x1
7102bb5258  b.hi 0x7102bb5264
7102bb525c  ldur w13,[x20, #0x1]
7102bb5260  b 0x7102bb5268
7102bb5264  mov w13,wzr
7102bb5268  add w8,w8,#0x4
7102bb526c  cmp x9,w13, SXTW 
7102bb5270  b.lt 0x7102bb51e4
7102bb5274  ldr x8,[sp, #0x30]
7102bb5278  ldr x8,[x8]
7102bb527c  ldrb w9,[x8]
7102bb5280  cmp w9,#0xc
7102bb5284  b.ne 0x7102bb5314
7102bb5288  ldur w9,[x8, #0x1]
7102bb528c  subs w9,w9,#0x1
7102bb5290  b.lt 0x7102bb5314
7102bb5294  ldr x11,[sp, #0x18]
7102bb5298  ldr x19,[x11]
7102bb529c  ldursw x12,[x8, #0x5]
7102bb52a0  ldp x11,x13,[x19, #0x20]
7102bb52a4  add x12,x13,x12
7102bb52a8  mov x13,#0x1788
7102bb52ac  movk x13,#0x631, LSL #16
7102bb52b0  mov w10,wzr
7102bb52b4  adrp x20,0x7104742000
7102bb52b8  add x20,x20,#0xdbb
7102bb52bc  movk x13,#0x11, LSL #32
7102bb52c0  add w14,w9,w10
7102bb52c4  cmp w14,#0x0
7102bb52c8  cinc w14,w14,lt
7102bb52cc  asr w14,w14,#0x1
7102bb52d0  add x15,x12,w14, SXTW  #0x3
7102bb52d4  ldr w16,[x15]
7102bb52d8  ldr x16,[x11, x16, LSL #0x3]
7102bb52dc  cmp x16,x13
7102bb52e0  b.eq 0x7102bb5304
7102bb52e4  sub w15,w14,#0x1
7102bb52e8  cmp x16,x13
7102bb52ec  csel w9,w15,w9,hi
7102bb52f0  csinc w10,w10,w14,hi
7102bb52f4  cmp w10,w9
7102bb52f8  b.le 0x7102bb52c0
7102bb52fc  mov x19,xzr
7102bb5300  b 0x7102bb5320
7102bb5304  ldrsw x9,[x15, #0x4]
7102bb5308  tbnz w9,#0x1f,0x7102bb5314
7102bb530c  add x20,x8,x9
7102bb5310  b 0x7102bb5320
7102bb5314  mov x19,xzr
7102bb5318  adrp x20,0x7104742000
7102bb531c  add x20,x20,#0xdbb
7102bb5320  ldrb w8,[x20]
7102bb5324  sub w8,w8,#0xb
7102bb5328  cmp w8,#0x1
7102bb532c  b.hi 0x7102bb5338
7102bb5330  ldur w8,[x20, #0x1]
7102bb5334  b 0x7102bb533c
7102bb5338  mov w8,wzr
7102bb533c  ldp x9,x10,[x28, #0xa0]
7102bb5340  sub x10,x10,x9
7102bb5344  sxtw x8,w8
7102bb5348  asr x10,x10,#0x3
7102bb534c  add x21,x28,#0xa0
7102bb5350  cmp x10,x8
7102bb5354  b.cs 0x7102bb5368
7102bb5358  sub x1,x8,x10
7102bb535c  mov x0,x21
7102bb5360  bl 0x7100771690
7102bb5364  b 0x7102bb5374
7102bb5368  b.ls 0x7102bb5374
7102bb536c  add x8,x9,x8, LSL #0x3
7102bb5370  str x8,[x28, #0xa8]
7102bb5374  ldrb w12,[x20]
7102bb5378  sub w8,w12,#0xb
7102bb537c  cmp w8,#0x1
7102bb5380  b.hi 0x7102bb5434
7102bb5384  ldur w8,[x20, #0x1]
7102bb5388  cmp w8,#0x1
7102bb538c  b.lt 0x7102bb5434
7102bb5390  mov w8,wzr
7102bb5394  mov x9,xzr
7102bb5398  add x10,x20,#0x5
7102bb539c  adrp x11,0x7104742000
7102bb53a0  add x11,x11,#0xdbb
7102bb53a4  mov x13,xzr
7102bb53a8  tbnz w9,#0x1f,0x7102bb53dc
7102bb53ac  and w12,w12,#0xff
7102bb53b0  cmp w12,#0xb
7102bb53b4  mov x12,x11
7102bb53b8  b.ne 0x7102bb53e0
7102bb53bc  ldur w12,[x20, #0x1]
7102bb53c0  cmp w12,w9
7102bb53c4  b.le 0x7102bb53d8
7102bb53c8  ldrsw x12,[x10, w8, SXTW #0x0]
7102bb53cc  add x12,x20,x12
7102bb53d0  mov x13,x19
7102bb53d4  b 0x7102bb53e0
7102bb53d8  mov x13,xzr
7102bb53dc  mov x12,x11
7102bb53e0  ldrb w14,[x12]
7102bb53e4  cmp w14,#0x9
7102bb53e8  b.ne 0x7102bb53fc
7102bb53ec  ldursw x12,[x12, #0x1]
7102bb53f0  ldr x13,[x13, #0x20]
7102bb53f4  ldr x12,[x13, x12, LSL #0x3]
7102bb53f8  b 0x7102bb5400
7102bb53fc  mov x12,xzr
7102bb5400  ldr x13,[x21]
7102bb5404  str x12,[x13, x9, LSL #0x3]
7102bb5408  ldrb w12,[x20]
7102bb540c  sub w13,w12,#0xb
7102bb5410  add x9,x9,#0x1
7102bb5414  cmp w13,#0x1
7102bb5418  b.hi 0x7102bb5424
7102bb541c  ldur w13,[x20, #0x1]
7102bb5420  b 0x7102bb5428
7102bb5424  mov w13,wzr
7102bb5428  add w8,w8,#0x4
7102bb542c  cmp x9,w13, SXTW 
7102bb5430  b.lt 0x7102bb53a4
7102bb5434  ldr x8,[sp, #0x30]
7102bb5438  ldr x8,[x8]
7102bb543c  ldrb w9,[x8]
7102bb5440  cmp w9,#0xc
7102bb5444  b.ne 0x7102bb54d4
7102bb5448  ldur w9,[x8, #0x1]
7102bb544c  subs w9,w9,#0x1
7102bb5450  b.lt 0x7102bb54d4
7102bb5454  ldr x11,[sp, #0x18]
7102bb5458  ldr x19,[x11]
7102bb545c  ldursw x12,[x8, #0x5]
7102bb5460  ldp x11,x13,[x19, #0x20]
7102bb5464  add x12,x13,x12
7102bb5468  mov x13,#0xa16a
7102bb546c  movk x13,#0x2db3, LSL #16
7102bb5470  mov w10,wzr
7102bb5474  adrp x20,0x7104742000
7102bb5478  add x20,x20,#0xdbb
7102bb547c  movk x13,#0x11, LSL #32
7102bb5480  add w14,w9,w10
7102bb5484  cmp w14,#0x0
7102bb5488  cinc w14,w14,lt
7102bb548c  asr w14,w14,#0x1
7102bb5490  add x15,x12,w14, SXTW  #0x3
7102bb5494  ldr w16,[x15]
7102bb5498  ldr x16,[x11, x16, LSL #0x3]
7102bb549c  cmp x16,x13
7102bb54a0  b.eq 0x7102bb54c4
7102bb54a4  sub w15,w14,#0x1
7102bb54a8  cmp x16,x13
7102bb54ac  csel w9,w15,w9,hi
7102bb54b0  csinc w10,w10,w14,hi
7102bb54b4  cmp w10,w9
7102bb54b8  b.le 0x7102bb5480
7102bb54bc  mov x19,xzr
7102bb54c0  b 0x7102bb54e0
7102bb54c4  ldrsw x9,[x15, #0x4]
7102bb54c8  tbnz w9,#0x1f,0x7102bb54d4
7102bb54cc  add x20,x8,x9
7102bb54d0  b 0x7102bb54e0
7102bb54d4  mov x19,xzr
7102bb54d8  adrp x20,0x7104742000
7102bb54dc  add x20,x20,#0xdbb
7102bb54e0  ldrb w8,[x20]
7102bb54e4  sub w8,w8,#0xb
7102bb54e8  cmp w8,#0x1
7102bb54ec  b.hi 0x7102bb54f8
7102bb54f0  ldur w8,[x20, #0x1]
7102bb54f4  b 0x7102bb54fc
7102bb54f8  mov w8,wzr
7102bb54fc  ldp x9,x10,[x28, #0xb8]
7102bb5500  sub x10,x10,x9
7102bb5504  asr x10,x10,#0x2
7102bb5508  mul x10,x10,x23
7102bb550c  sxtw x8,w8
7102bb5510  add x21,x28,#0xb8
7102bb5514  cmp x10,x8
7102bb5518  b.cs 0x7102bb552c
7102bb551c  sub x1,x8,x10
7102bb5520  mov x0,x21
7102bb5524  bl 0x7102bbde90
7102bb5528  b 0x7102bb553c
7102bb552c  b.ls 0x7102bb553c
7102bb5530  mov w10,#0x14
7102bb5534  madd x8,x8,x10,x9
7102bb5538  str x8,[x28, #0xc0]
7102bb553c  ldrb w16,[x20]
7102bb5540  mov x22,#0x263c
7102bb5544  movk x22,#0xc0ad, LSL #16
7102bb5548  movk x22,#0xb, LSL #32
7102bb554c  sub w8,w16,#0xb
7102bb5550  cmp w8,#0x1
7102bb5554  b.hi 0x7102bb5950
7102bb5558  ldur w8,[x20, #0x1]
7102bb555c  cmp w8,#0x1
7102bb5560  b.lt 0x7102bb5950
7102bb5564  adrp x11,0x7104472000
7102bb5568  adrp x15,0x7104473000
7102bb556c  ldr s2,[x15, #0xb40]
7102bb5570  ldr s0,[x11, #0xc40]
7102bb5574  fmov s1,0x3f400000
7102bb5578  fmov s3,0x3f000000
7102bb557c  fmov s4,wzr
7102bb5580  mov x9,#0x8d34
7102bb5584  movk x9,#0xe13a, LSL #16
7102bb5588  mov x10,#0xf916
7102bb558c  movk x10,#0xeb0, LSL #16
7102bb5590  mov x11,#0xdb8a
7102bb5594  movk x11,#0x29a8, LSL #16
7102bb5598  mov x12,#0x7083
7102bb559c  movk x12,#0x2c3f, LSL #16
7102bb55a0  mov x8,xzr
7102bb55a4  movk x9,#0xb, LSL #32
7102bb55a8  movk x10,#0x7, LSL #32
7102bb55ac  movk x11,#0x6, LSL #32
7102bb55b0  movk x12,#0x3, LSL #32
7102bb55b4  add x13,x20,#0x5
7102bb55b8  mov w14,#0x14
7102bb55bc  adrp x15,0x7104742000
7102bb55c0  add x15,x15,#0xdbb
7102bb55c4  mov x17,xzr
7102bb55c8  tbnz w8,#0x1f,0x7102bb55fc
7102bb55cc  and w16,w16,#0xff
7102bb55d0  cmp w16,#0xb
7102bb55d4  mov x16,x15
7102bb55d8  b.ne 0x7102bb5600
7102bb55dc  ldur w16,[x20, #0x1]
7102bb55e0  cmp w16,w8
7102bb55e4  b.le 0x7102bb55f8
7102bb55e8  ldrsw x16,[x13, w8, SXTW #0x2]
7102bb55ec  add x16,x20,x16
7102bb55f0  mov x17,x19
7102bb55f4  b 0x7102bb5600
7102bb55f8  mov x17,xzr
7102bb55fc  mov x16,x15
7102bb5600  ldrb w18,[x16]
7102bb5604  cmp w18,#0xc
7102bb5608  mov x18,x15
7102bb560c  b.ne 0x7102bb5680
7102bb5610  ldur w18,[x16, #0x1]
7102bb5614  subs w18,w18,#0x1
7102bb5618  b.lt 0x7102bb567c
7102bb561c  ldursw x2,[x16, #0x5]
7102bb5620  ldp x1,x3,[x17, #0x20]
7102bb5624  mov w0,wzr
7102bb5628  add x2,x3,x2
7102bb562c  add w3,w18,w0
7102bb5630  cmp w3,#0x0
7102bb5634  cinc w3,w3,lt
7102bb5638  asr w3,w3,#0x1
7102bb563c  add x4,x2,w3, SXTW  #0x3
7102bb5640  ldr w5,[x4]
7102bb5644  ldr x5,[x1, x5, LSL #0x3]
7102bb5648  cmp x5,x22
7102bb564c  b.eq 0x7102bb566c
7102bb5650  sub w4,w3,#0x1
7102bb5654  cmp x5,x22
7102bb5658  csel w18,w4,w18,hi
7102bb565c  csinc w0,w0,w3,hi
7102bb5660  cmp w0,w18
7102bb5664  b.le 0x7102bb562c
7102bb5668  b 0x7102bb567c
7102bb566c  ldrsw x18,[x4, #0x4]
7102bb5670  tbnz w18,#0x1f,0x7102bb567c
7102bb5674  add x18,x16,x18
7102bb5678  b 0x7102bb5680
7102bb567c  mov x18,x15
7102bb5680  ldrb w0,[x18]
7102bb5684  mov v5.16B,v0.16B
7102bb5688  cmp w0,#0x8
7102bb568c  b.ne 0x7102bb5694
7102bb5690  ldur s5,[x18, #0x1]
7102bb5694  mul x0,x8,x14
7102bb5698  ldr x18,[x21]
7102bb569c  str s5,[x18,x0]
7102bb56a0  ldrb w18,[x16]
7102bb56a4  cmp w18,#0xc
7102bb56a8  mov x18,x15
7102bb56ac  b.ne 0x7102bb5720
7102bb56b0  ldur w18,[x16, #0x1]
7102bb56b4  subs w18,w18,#0x1
7102bb56b8  b.lt 0x7102bb571c
7102bb56bc  ldursw x2,[x16, #0x5]
7102bb56c0  ldp x1,x3,[x17, #0x20]
7102bb56c4  mov w0,wzr
7102bb56c8  add x2,x3,x2
7102bb56cc  add w3,w18,w0
7102bb56d0  cmp w3,#0x0
7102bb56d4  cinc w3,w3,lt
7102bb56d8  asr w3,w3,#0x1
7102bb56dc  add x4,x2,w3, SXTW  #0x3
7102bb56e0  ldr w5,[x4]
7102bb56e4  ldr x5,[x1, x5, LSL #0x3]
7102bb56e8  cmp x5,x11
7102bb56ec  b.eq 0x7102bb570c
7102bb56f0  sub w4,w3,#0x1
7102bb56f4  cmp x5,x11
7102bb56f8  csel w18,w4,w18,hi
7102bb56fc  csinc w0,w0,w3,hi
7102bb5700  cmp w0,w18
7102bb5704  b.le 0x7102bb56cc
7102bb5708  b 0x7102bb571c
7102bb570c  ldrsw x18,[x4, #0x4]
7102bb5710  tbnz w18,#0x1f,0x7102bb571c
7102bb5714  add x18,x16,x18
7102bb5718  b 0x7102bb5720
7102bb571c  mov x18,x15
7102bb5720  ldrb w0,[x18]
7102bb5724  mov v5.16B,v1.16B
7102bb5728  cmp w0,#0x8
7102bb572c  b.ne 0x7102bb5734
7102bb5730  ldur s5,[x18, #0x1]
7102bb5734  ldr x18,[x21]
7102bb5738  madd x18,x8,x14,x18
7102bb573c  str s5,[x18, #0x4]
7102bb5740  ldrb w18,[x16]
7102bb5744  cmp w18,#0xc
7102bb5748  mov x18,x15
7102bb574c  b.ne 0x7102bb57c0
7102bb5750  ldur w18,[x16, #0x1]
7102bb5754  subs w18,w18,#0x1
7102bb5758  b.lt 0x7102bb57bc
7102bb575c  ldursw x2,[x16, #0x5]
7102bb5760  ldp x1,x3,[x17, #0x20]
7102bb5764  mov w0,wzr
7102bb5768  add x2,x3,x2
7102bb576c  add w3,w18,w0
7102bb5770  cmp w3,#0x0
7102bb5774  cinc w3,w3,lt
7102bb5778  asr w3,w3,#0x1
7102bb577c  add x4,x2,w3, SXTW  #0x3
7102bb5780  ldr w5,[x4]
7102bb5784  ldr x5,[x1, x5, LSL #0x3]
7102bb5788  cmp x5,x12
7102bb578c  b.eq 0x7102bb57ac
7102bb5790  sub w4,w3,#0x1
7102bb5794  cmp x5,x12
7102bb5798  csel w18,w4,w18,hi
7102bb579c  csinc w0,w0,w3,hi
7102bb57a0  cmp w0,w18
7102bb57a4  b.le 0x7102bb576c
7102bb57a8  b 0x7102bb57bc
7102bb57ac  ldrsw x18,[x4, #0x4]
7102bb57b0  tbnz w18,#0x1f,0x7102bb57bc
7102bb57b4  add x18,x16,x18
7102bb57b8  b 0x7102bb57c0
7102bb57bc  mov x18,x15
7102bb57c0  ldrb w0,[x18]
7102bb57c4  mov v5.16B,v2.16B
7102bb57c8  cmp w0,#0x8
7102bb57cc  b.ne 0x7102bb57d4
7102bb57d0  ldur s5,[x18, #0x1]
7102bb57d4  ldr x18,[x21]
7102bb57d8  madd x18,x8,x14,x18
7102bb57dc  str s5,[x18, #0x8]
7102bb57e0  ldrb w18,[x16]
7102bb57e4  cmp w18,#0xc
7102bb57e8  mov x18,x15
7102bb57ec  b.ne 0x7102bb5860
7102bb57f0  ldur w18,[x16, #0x1]
7102bb57f4  subs w18,w18,#0x1
7102bb57f8  b.lt 0x7102bb585c
7102bb57fc  ldursw x2,[x16, #0x5]
7102bb5800  ldp x1,x3,[x17, #0x20]
7102bb5804  mov w0,wzr
7102bb5808  add x2,x3,x2
7102bb580c  add w3,w18,w0
7102bb5810  cmp w3,#0x0
7102bb5814  cinc w3,w3,lt
7102bb5818  asr w3,w3,#0x1
7102bb581c  add x4,x2,w3, SXTW  #0x3
7102bb5820  ldr w5,[x4]
7102bb5824  ldr x5,[x1, x5, LSL #0x3]
7102bb5828  cmp x5,x10
7102bb582c  b.eq 0x7102bb584c
7102bb5830  sub w4,w3,#0x1
7102bb5834  cmp x5,x10
7102bb5838  csel w18,w4,w18,hi
7102bb583c  csinc w0,w0,w3,hi
7102bb5840  cmp w0,w18
7102bb5844  b.le 0x7102bb580c
7102bb5848  b 0x7102bb585c
7102bb584c  ldrsw x18,[x4, #0x4]
7102bb5850  tbnz w18,#0x1f,0x7102bb585c
7102bb5854  add x18,x16,x18
7102bb5858  b 0x7102bb5860
7102bb585c  mov x18,x15
7102bb5860  ldrb w0,[x18]
7102bb5864  mov v5.16B,v3.16B
7102bb5868  cmp w0,#0x8
7102bb586c  b.ne 0x7102bb5874
7102bb5870  ldur s5,[x18, #0x1]
7102bb5874  ldr x18,[x21]
7102bb5878  madd x18,x8,x14,x18
7102bb587c  str s5,[x18, #0xc]
7102bb5880  ldrb w18,[x16]
7102bb5884  cmp w18,#0xc
7102bb5888  mov x18,x15
7102bb588c  b.ne 0x7102bb5900
7102bb5890  ldur w18,[x16, #0x1]
7102bb5894  subs w18,w18,#0x1
7102bb5898  b.lt 0x7102bb58fc
7102bb589c  ldursw x2,[x16, #0x5]
7102bb58a0  ldp x1,x17,[x17, #0x20]
7102bb58a4  mov w0,wzr
7102bb58a8  add x17,x17,x2
7102bb58ac  add w2,w18,w0
7102bb58b0  cmp w2,#0x0
7102bb58b4  cinc w2,w2,lt
7102bb58b8  asr w2,w2,#0x1
7102bb58bc  add x3,x17,w2, SXTW  #0x3
7102bb58c0  ldr w4,[x3]
7102bb58c4  ldr x4,[x1, x4, LSL #0x3]
7102bb58c8  cmp x4,x9
7102bb58cc  b.eq 0x7102bb58ec
7102bb58d0  sub w3,w2,#0x1
7102bb58d4  cmp x4,x9
7102bb58d8  csel w18,w3,w18,hi
7102bb58dc  csinc w0,w0,w2,hi
7102bb58e0  cmp w0,w18
7102bb58e4  b.le 0x7102bb58ac
7102bb58e8  b 0x7102bb58fc
7102bb58ec  ldrsw x17,[x3, #0x4]
7102bb58f0  tbnz w17,#0x1f,0x7102bb58fc
7102bb58f4  add x18,x16,x17
7102bb58f8  b 0x7102bb5900
7102bb58fc  mov x18,x15
7102bb5900  ldrb w16,[x18]
7102bb5904  mov v5.16B,v4.16B
7102bb5908  cmp w16,#0x8
7102bb590c  b.ne 0x7102bb5914
7102bb5910  ldur s5,[x18, #0x1]
7102bb5914  ldr x16,[x21]
7102bb5918  madd x16,x8,x14,x16
7102bb591c  add x8,x8,#0x1
7102bb5920  str s5,[x16, #0x10]
7102bb5924  ldrb w16,[x20]
7102bb5928  sub w17,w16,#0xb
7102bb592c  cmp w17,#0x1
7102bb5930  b.hi 0x7102bb5944
7102bb5934  ldur w17,[x20, #0x1]
7102bb5938  cmp x8,w17, SXTW 
7102bb593c  b.lt 0x7102bb55c4
7102bb5940  b 0x7102bb5950
7102bb5944  mov w17,wzr
7102bb5948  cmp x8,w17, SXTW 
7102bb594c  b.lt 0x7102bb55c4
7102bb5950  ldr x8,[sp, #0x30]
7102bb5954  ldr x8,[x8]
7102bb5958  ldrb w9,[x8]
7102bb595c  cmp w9,#0xc
7102bb5960  b.ne 0x7102bb59f0
7102bb5964  ldur w9,[x8, #0x1]
7102bb5968  subs w9,w9,#0x1
7102bb596c  b.lt 0x7102bb59f0
7102bb5970  ldr x11,[sp, #0x18]
7102bb5974  ldr x19,[x11]
7102bb5978  ldursw x12,[x8, #0x5]
7102bb597c  ldp x11,x13,[x19, #0x20]
7102bb5980  add x12,x13,x12
7102bb5984  mov x13,#0x40ea
7102bb5988  movk x13,#0xc552, LSL #16
7102bb598c  mov w10,wzr
7102bb5990  adrp x20,0x7104742000
7102bb5994  add x20,x20,#0xdbb
7102bb5998  movk x13,#0x13, LSL #32
7102bb599c  add w14,w9,w10
7102bb59a0  cmp w14,#0x0
7102bb59a4  cinc w14,w14,lt
7102bb59a8  asr w14,w14,#0x1
7102bb59ac  add x15,x12,w14, SXTW  #0x3
7102bb59b0  ldr w16,[x15]
7102bb59b4  ldr x16,[x11, x16, LSL #0x3]
7102bb59b8  cmp x16,x13
7102bb59bc  b.eq 0x7102bb59e0
7102bb59c0  sub w15,w14,#0x1
7102bb59c4  cmp x16,x13
7102bb59c8  csel w9,w15,w9,hi
7102bb59cc  csinc w10,w10,w14,hi
7102bb59d0  cmp w10,w9
7102bb59d4  b.le 0x7102bb599c
7102bb59d8  mov x19,xzr
7102bb59dc  b 0x7102bb59fc
7102bb59e0  ldrsw x9,[x15, #0x4]
7102bb59e4  tbnz w9,#0x1f,0x7102bb59f0
7102bb59e8  add x20,x8,x9
7102bb59ec  b 0x7102bb59fc
7102bb59f0  mov x19,xzr
7102bb59f4  adrp x20,0x7104742000
7102bb59f8  add x20,x20,#0xdbb
7102bb59fc  ldrb w8,[x20]
7102bb5a00  sub w8,w8,#0xb
7102bb5a04  cmp w8,#0x1
7102bb5a08  b.hi 0x7102bb5a14
7102bb5a0c  ldur w8,[x20, #0x1]
7102bb5a10  b 0x7102bb5a18
7102bb5a14  mov w8,wzr
7102bb5a18  ldp x9,x10,[x28, #0xd0]
7102bb5a1c  sub x10,x10,x9
7102bb5a20  asr x10,x10,#0x2
7102bb5a24  mul x10,x10,x23
7102bb5a28  sxtw x8,w8
7102bb5a2c  add x21,x28,#0xd0
7102bb5a30  cmp x10,x8
7102bb5a34  b.cs 0x7102bb5a48
7102bb5a38  sub x1,x8,x10
7102bb5a3c  mov x0,x21
7102bb5a40  bl 0x7102bbde90
7102bb5a44  b 0x7102bb5a58
7102bb5a48  b.ls 0x7102bb5a58
7102bb5a4c  mov w10,#0x14
7102bb5a50  madd x8,x8,x10,x9
7102bb5a54  str x8,[x28, #0xd8]
7102bb5a58  ldrb w16,[x20]
7102bb5a5c  sub w8,w16,#0xb
7102bb5a60  cmp w8,#0x1
7102bb5a64  b.hi 0x7102bb5e60
7102bb5a68  ldur w8,[x20, #0x1]
7102bb5a6c  cmp w8,#0x1
7102bb5a70  b.lt 0x7102bb5e60
7102bb5a74  adrp x15,0x7104473000
7102bb5a78  adrp x14,0x7104472000
7102bb5a7c  ldr s0,[x14, #0x44]
7102bb5a80  ldr s1,[x15, #0x3d0]
7102bb5a84  adrp x15,0x7104473000
7102bb5a88  ldr s2,[x15, #0x4d4]
7102bb5a8c  fmov s3,wzr
7102bb5a90  mov x9,#0x8d34
7102bb5a94  movk x9,#0xe13a, LSL #16
7102bb5a98  mov x10,#0xf916
7102bb5a9c  movk x10,#0xeb0, LSL #16
7102bb5aa0  mov x11,#0xdb8a
7102bb5aa4  movk x11,#0x29a8, LSL #16
7102bb5aa8  mov x12,#0x7083
7102bb5aac  movk x12,#0x2c3f, LSL #16
7102bb5ab0  mov x8,xzr
7102bb5ab4  movk x9,#0xb, LSL #32
7102bb5ab8  movk x10,#0x7, LSL #32
7102bb5abc  movk x11,#0x6, LSL #32
7102bb5ac0  movk x12,#0x3, LSL #32
7102bb5ac4  add x13,x20,#0x5
7102bb5ac8  mov w14,#0x14
7102bb5acc  adrp x15,0x7104742000
7102bb5ad0  add x15,x15,#0xdbb
7102bb5ad4  mov x17,xzr
7102bb5ad8  tbnz w8,#0x1f,0x7102bb5b0c
7102bb5adc  and w16,w16,#0xff
7102bb5ae0  cmp w16,#0xb
7102bb5ae4  mov x16,x15
7102bb5ae8  b.ne 0x7102bb5b10
7102bb5aec  ldur w16,[x20, #0x1]
7102bb5af0  cmp w16,w8
7102bb5af4  b.le 0x7102bb5b08
7102bb5af8  ldrsw x16,[x13, w8, SXTW #0x2]
7102bb5afc  add x16,x20,x16
7102bb5b00  mov x17,x19
7102bb5b04  b 0x7102bb5b10
7102bb5b08  mov x17,xzr
7102bb5b0c  mov x16,x15
7102bb5b10  ldrb w18,[x16]
7102bb5b14  cmp w18,#0xc
7102bb5b18  mov x18,x15
7102bb5b1c  b.ne 0x7102bb5b90
7102bb5b20  ldur w18,[x16, #0x1]
7102bb5b24  subs w18,w18,#0x1
7102bb5b28  b.lt 0x7102bb5b8c
7102bb5b2c  ldursw x2,[x16, #0x5]
7102bb5b30  ldp x1,x3,[x17, #0x20]
7102bb5b34  mov w0,wzr
7102bb5b38  add x2,x3,x2
7102bb5b3c  add w3,w18,w0
7102bb5b40  cmp w3,#0x0
7102bb5b44  cinc w3,w3,lt
7102bb5b48  asr w3,w3,#0x1
7102bb5b4c  add x4,x2,w3, SXTW  #0x3
7102bb5b50  ldr w5,[x4]
7102bb5b54  ldr x5,[x1, x5, LSL #0x3]
7102bb5b58  cmp x5,x22
7102bb5b5c  b.eq 0x7102bb5b7c
7102bb5b60  sub w4,w3,#0x1
7102bb5b64  cmp x5,x22
7102bb5b68  csel w18,w4,w18,hi
7102bb5b6c  csinc w0,w0,w3,hi
7102bb5b70  cmp w0,w18
7102bb5b74  b.le 0x7102bb5b3c
7102bb5b78  b 0x7102bb5b8c
7102bb5b7c  ldrsw x18,[x4, #0x4]
7102bb5b80  tbnz w18,#0x1f,0x7102bb5b8c
7102bb5b84  add x18,x16,x18
7102bb5b88  b 0x7102bb5b90
7102bb5b8c  mov x18,x15
7102bb5b90  ldrb w0,[x18]
7102bb5b94  mov v4.16B,v0.16B
7102bb5b98  cmp w0,#0x8
7102bb5b9c  b.ne 0x7102bb5ba4
7102bb5ba0  ldur s4,[x18, #0x1]
7102bb5ba4  mul x0,x8,x14
7102bb5ba8  ldr x18,[x21]
7102bb5bac  str s4,[x18,x0]
7102bb5bb0  ldrb w18,[x16]
7102bb5bb4  cmp w18,#0xc
7102bb5bb8  mov x18,x15
7102bb5bbc  b.ne 0x7102bb5c30
7102bb5bc0  ldur w18,[x16, #0x1]
7102bb5bc4  subs w18,w18,#0x1
7102bb5bc8  b.lt 0x7102bb5c2c
7102bb5bcc  ldursw x2,[x16, #0x5]
7102bb5bd0  ldp x1,x3,[x17, #0x20]
7102bb5bd4  mov w0,wzr
7102bb5bd8  add x2,x3,x2
7102bb5bdc  add w3,w18,w0
7102bb5be0  cmp w3,#0x0
7102bb5be4  cinc w3,w3,lt
7102bb5be8  asr w3,w3,#0x1
7102bb5bec  add x4,x2,w3, SXTW  #0x3
7102bb5bf0  ldr w5,[x4]
7102bb5bf4  ldr x5,[x1, x5, LSL #0x3]
7102bb5bf8  cmp x5,x11
7102bb5bfc  b.eq 0x7102bb5c1c
7102bb5c00  sub w4,w3,#0x1
7102bb5c04  cmp x5,x11
7102bb5c08  csel w18,w4,w18,hi
7102bb5c0c  csinc w0,w0,w3,hi
7102bb5c10  cmp w0,w18
7102bb5c14  b.le 0x7102bb5bdc
7102bb5c18  b 0x7102bb5c2c
7102bb5c1c  ldrsw x18,[x4, #0x4]
7102bb5c20  tbnz w18,#0x1f,0x7102bb5c2c
7102bb5c24  add x18,x16,x18
7102bb5c28  b 0x7102bb5c30
7102bb5c2c  mov x18,x15
7102bb5c30  ldrb w0,[x18]
7102bb5c34  mov v4.16B,v1.16B
7102bb5c38  cmp w0,#0x8
7102bb5c3c  b.ne 0x7102bb5c44
7102bb5c40  ldur s4,[x18, #0x1]
7102bb5c44  ldr x18,[x21]
7102bb5c48  madd x18,x8,x14,x18
7102bb5c4c  str s4,[x18, #0x4]
7102bb5c50  ldrb w18,[x16]
7102bb5c54  cmp w18,#0xc
7102bb5c58  mov x18,x15
7102bb5c5c  b.ne 0x7102bb5cd0
7102bb5c60  ldur w18,[x16, #0x1]
7102bb5c64  subs w18,w18,#0x1
7102bb5c68  b.lt 0x7102bb5ccc
7102bb5c6c  ldursw x2,[x16, #0x5]
7102bb5c70  ldp x1,x3,[x17, #0x20]
7102bb5c74  mov w0,wzr
7102bb5c78  add x2,x3,x2
7102bb5c7c  add w3,w18,w0
7102bb5c80  cmp w3,#0x0
7102bb5c84  cinc w3,w3,lt
7102bb5c88  asr w3,w3,#0x1
7102bb5c8c  add x4,x2,w3, SXTW  #0x3
7102bb5c90  ldr w5,[x4]
7102bb5c94  ldr x5,[x1, x5, LSL #0x3]
7102bb5c98  cmp x5,x12
7102bb5c9c  b.eq 0x7102bb5cbc
7102bb5ca0  sub w4,w3,#0x1
7102bb5ca4  cmp x5,x12
7102bb5ca8  csel w18,w4,w18,hi
7102bb5cac  csinc w0,w0,w3,hi
7102bb5cb0  cmp w0,w18
7102bb5cb4  b.le 0x7102bb5c7c
7102bb5cb8  b 0x7102bb5ccc
7102bb5cbc  ldrsw x18,[x4, #0x4]
7102bb5cc0  tbnz w18,#0x1f,0x7102bb5ccc
7102bb5cc4  add x18,x16,x18
7102bb5cc8  b 0x7102bb5cd0
7102bb5ccc  mov x18,x15
7102bb5cd0  ldrb w0,[x18]
7102bb5cd4  mov v4.16B,v2.16B
7102bb5cd8  cmp w0,#0x8
7102bb5cdc  b.ne 0x7102bb5ce4
7102bb5ce0  ldur s4,[x18, #0x1]
7102bb5ce4  ldr x18,[x21]
7102bb5ce8  madd x18,x8,x14,x18
7102bb5cec  str s4,[x18, #0x8]
7102bb5cf0  ldrb w18,[x16]
7102bb5cf4  cmp w18,#0xc
7102bb5cf8  mov x18,x15
7102bb5cfc  b.ne 0x7102bb5d70
7102bb5d00  ldur w18,[x16, #0x1]
7102bb5d04  subs w18,w18,#0x1
7102bb5d08  b.lt 0x7102bb5d6c
7102bb5d0c  ldursw x2,[x16, #0x5]
7102bb5d10  ldp x1,x3,[x17, #0x20]
7102bb5d14  mov w0,wzr
7102bb5d18  add x2,x3,x2
7102bb5d1c  add w3,w18,w0
7102bb5d20  cmp w3,#0x0
7102bb5d24  cinc w3,w3,lt
7102bb5d28  asr w3,w3,#0x1
7102bb5d2c  add x4,x2,w3, SXTW  #0x3
7102bb5d30  ldr w5,[x4]
7102bb5d34  ldr x5,[x1, x5, LSL #0x3]
7102bb5d38  cmp x5,x10
7102bb5d3c  b.eq 0x7102bb5d5c
7102bb5d40  sub w4,w3,#0x1
7102bb5d44  cmp x5,x10
7102bb5d48  csel w18,w4,w18,hi
7102bb5d4c  csinc w0,w0,w3,hi
7102bb5d50  cmp w0,w18
7102bb5d54  b.le 0x7102bb5d1c
7102bb5d58  b 0x7102bb5d6c
7102bb5d5c  ldrsw x18,[x4, #0x4]
7102bb5d60  tbnz w18,#0x1f,0x7102bb5d6c
7102bb5d64  add x18,x16,x18
7102bb5d68  b 0x7102bb5d70
7102bb5d6c  mov x18,x15
7102bb5d70  ldrb w0,[x18]
7102bb5d74  mov v4.16B,v1.16B
7102bb5d78  cmp w0,#0x8
7102bb5d7c  b.ne 0x7102bb5d84
7102bb5d80  ldur s4,[x18, #0x1]
7102bb5d84  ldr x18,[x21]
7102bb5d88  madd x18,x8,x14,x18
7102bb5d8c  str s4,[x18, #0xc]
7102bb5d90  ldrb w18,[x16]
7102bb5d94  cmp w18,#0xc
7102bb5d98  mov x18,x15
7102bb5d9c  b.ne 0x7102bb5e10
7102bb5da0  ldur w18,[x16, #0x1]
7102bb5da4  subs w18,w18,#0x1
7102bb5da8  b.lt 0x7102bb5e0c
7102bb5dac  ldursw x2,[x16, #0x5]
7102bb5db0  ldp x1,x17,[x17, #0x20]
7102bb5db4  mov w0,wzr
7102bb5db8  add x17,x17,x2
7102bb5dbc  add w2,w18,w0
7102bb5dc0  cmp w2,#0x0
7102bb5dc4  cinc w2,w2,lt
7102bb5dc8  asr w2,w2,#0x1
7102bb5dcc  add x3,x17,w2, SXTW  #0x3
7102bb5dd0  ldr w4,[x3]
7102bb5dd4  ldr x4,[x1, x4, LSL #0x3]
7102bb5dd8  cmp x4,x9
7102bb5ddc  b.eq 0x7102bb5dfc
7102bb5de0  sub w3,w2,#0x1
7102bb5de4  cmp x4,x9
7102bb5de8  csel w18,w3,w18,hi
7102bb5dec  csinc w0,w0,w2,hi
7102bb5df0  cmp w0,w18
7102bb5df4  b.le 0x7102bb5dbc
7102bb5df8  b 0x7102bb5e0c
7102bb5dfc  ldrsw x17,[x3, #0x4]
7102bb5e00  tbnz w17,#0x1f,0x7102bb5e0c
7102bb5e04  add x18,x16,x17
7102bb5e08  b 0x7102bb5e10
7102bb5e0c  mov x18,x15
7102bb5e10  ldrb w16,[x18]
7102bb5e14  mov v4.16B,v3.16B
7102bb5e18  cmp w16,#0x8
7102bb5e1c  b.ne 0x7102bb5e24
7102bb5e20  ldur s4,[x18, #0x1]
7102bb5e24  ldr x16,[x21]
7102bb5e28  madd x16,x8,x14,x16
7102bb5e2c  add x8,x8,#0x1
7102bb5e30  str s4,[x16, #0x10]
7102bb5e34  ldrb w16,[x20]
7102bb5e38  sub w17,w16,#0xb
7102bb5e3c  cmp w17,#0x1
7102bb5e40  b.hi 0x7102bb5e54
7102bb5e44  ldur w17,[x20, #0x1]
7102bb5e48  cmp x8,w17, SXTW 
7102bb5e4c  b.lt 0x7102bb5ad4
7102bb5e50  b 0x7102bb5e60
7102bb5e54  mov w17,wzr
7102bb5e58  cmp x8,w17, SXTW 
7102bb5e5c  b.lt 0x7102bb5ad4
7102bb5e60  ldr x8,[sp, #0x30]
7102bb5e64  ldr x8,[x8]
7102bb5e68  ldrb w9,[x8]
7102bb5e6c  cmp w9,#0xc
7102bb5e70  b.ne 0x7102bb5efc
7102bb5e74  ldur w9,[x8, #0x1]
7102bb5e78  subs w10,w9,#0x1
7102bb5e7c  b.lt 0x7102bb5efc
7102bb5e80  ldr x12,[sp, #0x18]
7102bb5e84  ldr x13,[x12]
7102bb5e88  ldursw x9,[x8, #0x5]
7102bb5e8c  ldp x12,x13,[x13, #0x20]
7102bb5e90  mov x14,#0x2710
7102bb5e94  movk x14,#0xf0cd, LSL #16
7102bb5e98  mov w11,wzr
7102bb5e9c  add x13,x13,x9
7102bb5ea0  movk x14,#0x18, LSL #32
7102bb5ea4  adrp x9,0x7104742000
7102bb5ea8  add x9,x9,#0xdbb
7102bb5eac  add w15,w10,w11
7102bb5eb0  cmp w15,#0x0
7102bb5eb4  cinc w15,w15,lt
7102bb5eb8  asr w15,w15,#0x1
7102bb5ebc  add x16,x13,w15, SXTW  #0x3
7102bb5ec0  ldr w17,[x16]
7102bb5ec4  ldr x17,[x12, x17, LSL #0x3]
7102bb5ec8  cmp x17,x14
7102bb5ecc  b.eq 0x7102bb5eec
7102bb5ed0  sub w16,w15,#0x1
7102bb5ed4  cmp x17,x14
7102bb5ed8  csel w10,w16,w10,hi
7102bb5edc  csinc w11,w11,w15,hi
7102bb5ee0  cmp w11,w10
7102bb5ee4  b.le 0x7102bb5eac
7102bb5ee8  b 0x7102bb5f04
7102bb5eec  ldrsw x9,[x16, #0x4]
7102bb5ef0  tbnz w9,#0x1f,0x7102bb5efc
7102bb5ef4  add x9,x8,x9
7102bb5ef8  b 0x7102bb5f04
7102bb5efc  adrp x9,0x7104742000
7102bb5f00  add x9,x9,#0xdbb
7102bb5f04  ldrb w8,[x9]
7102bb5f08  cmp w8,#0x8
7102bb5f0c  b.ne 0x7102bb5f18
7102bb5f10  ldur s0,[x9, #0x1]
7102bb5f14  b 0x7102bb5f20
7102bb5f18  adrp x8,0x7104473000
7102bb5f1c  ldr s0,[x8, #0x8cc]
7102bb5f20  ldr x8,[sp, #0x30]
7102bb5f24  str s0,[x28, #0xe8]
7102bb5f28  ldr x8,[x8]
7102bb5f2c  ldrb w9,[x8]
7102bb5f30  cmp w9,#0xc
7102bb5f34  b.ne 0x7102bb5fc0
7102bb5f38  ldur w9,[x8, #0x1]
7102bb5f3c  subs w10,w9,#0x1
7102bb5f40  b.lt 0x7102bb5fc0
7102bb5f44  ldr x12,[sp, #0x18]
7102bb5f48  ldr x13,[x12]
7102bb5f4c  ldursw x9,[x8, #0x5]
7102bb5f50  ldp x12,x13,[x13, #0x20]
7102bb5f54  mov x14,#0x4c2e
7102bb5f58  movk x14,#0x1f0f, LSL #16
7102bb5f5c  mov w11,wzr
7102bb5f60  add x13,x13,x9
7102bb5f64  movk x14,#0x18, LSL #32
7102bb5f68  adrp x9,0x7104742000
7102bb5f6c  add x9,x9,#0xdbb
7102bb5f70  add w15,w10,w11
7102bb5f74  cmp w15,#0x0
7102bb5f78  cinc w15,w15,lt
7102bb5f7c  asr w15,w15,#0x1
7102bb5f80  add x16,x13,w15, SXTW  #0x3
7102bb5f84  ldr w17,[x16]
7102bb5f88  ldr x17,[x12, x17, LSL #0x3]
7102bb5f8c  cmp x17,x14
7102bb5f90  b.eq 0x7102bb5fb0
7102bb5f94  sub w16,w15,#0x1
7102bb5f98  cmp x17,x14
7102bb5f9c  csel w10,w16,w10,hi
7102bb5fa0  csinc w11,w11,w15,hi
7102bb5fa4  cmp w11,w10
7102bb5fa8  b.le 0x7102bb5f70
7102bb5fac  b 0x7102bb5fc8
7102bb5fb0  ldrsw x9,[x16, #0x4]
7102bb5fb4  tbnz w9,#0x1f,0x7102bb5fc0
7102bb5fb8  add x9,x8,x9
7102bb5fbc  b 0x7102bb5fc8
7102bb5fc0  adrp x9,0x7104742000
7102bb5fc4  add x9,x9,#0xdbb
7102bb5fc8  ldrb w8,[x9]
7102bb5fcc  cmp w8,#0x8
7102bb5fd0  b.ne 0x7102bb5fdc
7102bb5fd4  ldur s0,[x9, #0x1]
7102bb5fd8  b 0x7102bb5fe4
7102bb5fdc  adrp x8,0x7104473000
7102bb5fe0  ldr s0,[x8, #0x254]
7102bb5fe4  ldr x8,[sp, #0x30]
7102bb5fe8  str s0,[x28, #0xec]
7102bb5fec  ldr x8,[x8]
7102bb5ff0  ldrb w9,[x8]
7102bb5ff4  cmp w9,#0xc
7102bb5ff8  b.ne 0x7102bb6084
7102bb5ffc  ldur w9,[x8, #0x1]
7102bb6000  subs w10,w9,#0x1
7102bb6004  b.lt 0x7102bb6084
7102bb6008  ldr x12,[sp, #0x18]
7102bb600c  ldr x13,[x12]
7102bb6010  ldursw x9,[x8, #0x5]
7102bb6014  ldp x12,x13,[x13, #0x20]
7102bb6018  mov x14,#0x5757
7102bb601c  movk x14,#0xfdd3, LSL #16
7102bb6020  mov w11,wzr
7102bb6024  add x13,x13,x9
7102bb6028  movk x14,#0x18, LSL #32
7102bb602c  adrp x9,0x7104742000
7102bb6030  add x9,x9,#0xdbb
7102bb6034  add w15,w10,w11
7102bb6038  cmp w15,#0x0
7102bb603c  cinc w15,w15,lt
7102bb6040  asr w15,w15,#0x1
7102bb6044  add x16,x13,w15, SXTW  #0x3
7102bb6048  ldr w17,[x16]
7102bb604c  ldr x17,[x12, x17, LSL #0x3]
7102bb6050  cmp x17,x14
7102bb6054  b.eq 0x7102bb6074
7102bb6058  sub w16,w15,#0x1
7102bb605c  cmp x17,x14
7102bb6060  csel w10,w16,w10,hi
7102bb6064  csinc w11,w11,w15,hi
7102bb6068  cmp w11,w10
7102bb606c  b.le 0x7102bb6034
7102bb6070  b 0x7102bb608c
7102bb6074  ldrsw x9,[x16, #0x4]
7102bb6078  tbnz w9,#0x1f,0x7102bb6084
7102bb607c  add x9,x8,x9
7102bb6080  b 0x7102bb608c
7102bb6084  adrp x9,0x7104742000
7102bb6088  add x9,x9,#0xdbb
7102bb608c  ldrb w8,[x9]
7102bb6090  cmp w8,#0x8
7102bb6094  b.ne 0x7102bb60a0
7102bb6098  ldur s0,[x9, #0x1]
7102bb609c  b 0x7102bb60a8
7102bb60a0  adrp x8,0x7104473000
7102bb60a4  ldr s0,[x8, #0x36c]
7102bb60a8  ldr x8,[sp, #0x30]
7102bb60ac  str s0,[x28, #0xf0]
7102bb60b0  ldr x8,[x8]
7102bb60b4  ldrb w9,[x8]
7102bb60b8  cmp w9,#0xc
7102bb60bc  b.ne 0x7102bb6148
7102bb60c0  ldur w9,[x8, #0x1]
7102bb60c4  subs w10,w9,#0x1
7102bb60c8  b.lt 0x7102bb6148
7102bb60cc  ldr x12,[sp, #0x18]
7102bb60d0  ldr x13,[x12]
7102bb60d4  ldursw x9,[x8, #0x5]
7102bb60d8  ldp x12,x13,[x13, #0x20]
7102bb60dc  mov x14,#0x3c69
7102bb60e0  movk x14,#0x1211, LSL #16
7102bb60e4  mov w11,wzr
7102bb60e8  add x13,x13,x9
7102bb60ec  movk x14,#0x18, LSL #32
7102bb60f0  adrp x9,0x7104742000
7102bb60f4  add x9,x9,#0xdbb
7102bb60f8  add w15,w10,w11
7102bb60fc  cmp w15,#0x0
7102bb6100  cinc w15,w15,lt
7102bb6104  asr w15,w15,#0x1
7102bb6108  add x16,x13,w15, SXTW  #0x3
7102bb610c  ldr w17,[x16]
7102bb6110  ldr x17,[x12, x17, LSL #0x3]
7102bb6114  cmp x17,x14
7102bb6118  b.eq 0x7102bb6138
7102bb611c  sub w16,w15,#0x1
7102bb6120  cmp x17,x14
7102bb6124  csel w10,w16,w10,hi
7102bb6128  csinc w11,w11,w15,hi
7102bb612c  cmp w11,w10
7102bb6130  b.le 0x7102bb60f8
7102bb6134  b 0x7102bb6150
7102bb6138  ldrsw x9,[x16, #0x4]
7102bb613c  tbnz w9,#0x1f,0x7102bb6148
7102bb6140  add x9,x8,x9
7102bb6144  b 0x7102bb6150
7102bb6148  adrp x9,0x7104742000
7102bb614c  add x9,x9,#0xdbb
7102bb6150  ldrb w8,[x9]
7102bb6154  cmp w8,#0x8
7102bb6158  b.ne 0x7102bb6164
7102bb615c  ldur s0,[x9, #0x1]
7102bb6160  b 0x7102bb616c
7102bb6164  adrp x8,0x7104473000
7102bb6168  ldr s0,[x8, #0x494]
7102bb616c  ldr x8,[sp, #0x30]
7102bb6170  str s0,[x28, #0xf4]
7102bb6174  ldr x8,[x8]
7102bb6178  ldrb w9,[x8]
7102bb617c  cmp w9,#0xc
7102bb6180  b.ne 0x7102bb620c
7102bb6184  ldur w9,[x8, #0x1]
7102bb6188  subs w10,w9,#0x1
7102bb618c  b.lt 0x7102bb620c
7102bb6190  ldr x12,[sp, #0x18]
7102bb6194  ldr x13,[x12]
7102bb6198  ldursw x9,[x8, #0x5]
7102bb619c  ldp x12,x13,[x13, #0x20]
7102bb61a0  mov x14,#0xc2e6
7102bb61a4  movk x14,#0x1285, LSL #16
7102bb61a8  mov w11,wzr
7102bb61ac  add x13,x13,x9
7102bb61b0  movk x14,#0xf, LSL #32
7102bb61b4  adrp x9,0x7104742000
7102bb61b8  add x9,x9,#0xdbb
7102bb61bc  add w15,w10,w11
7102bb61c0  cmp w15,#0x0
7102bb61c4  cinc w15,w15,lt
7102bb61c8  asr w15,w15,#0x1
7102bb61cc  add x16,x13,w15, SXTW  #0x3
7102bb61d0  ldr w17,[x16]
7102bb61d4  ldr x17,[x12, x17, LSL #0x3]
7102bb61d8  cmp x17,x14
7102bb61dc  b.eq 0x7102bb61fc
7102bb61e0  sub w16,w15,#0x1
7102bb61e4  cmp x17,x14
7102bb61e8  csel w10,w16,w10,hi
7102bb61ec  csinc w11,w11,w15,hi
7102bb61f0  cmp w11,w10
7102bb61f4  b.le 0x7102bb61bc
7102bb61f8  b 0x7102bb6214
7102bb61fc  ldrsw x9,[x16, #0x4]
7102bb6200  tbnz w9,#0x1f,0x7102bb620c
7102bb6204  add x9,x8,x9
7102bb6208  b 0x7102bb6214
7102bb620c  adrp x9,0x7104742000
7102bb6210  add x9,x9,#0xdbb
7102bb6214  ldrb w8,[x9]
7102bb6218  cmp w8,#0x8
7102bb621c  b.ne 0x7102bb6228
7102bb6220  ldur s0,[x9, #0x1]
7102bb6224  b 0x7102bb6230
7102bb6228  adrp x8,0x7104472000
7102bb622c  ldr s0,[x8, #0x398]
7102bb6230  ldr x8,[sp, #0x30]
7102bb6234  str s0,[x28, #0xf8]
7102bb6238  ldr x8,[x8]
7102bb623c  ldrb w9,[x8]
7102bb6240  cmp w9,#0xc
7102bb6244  b.ne 0x7102bb62d0
7102bb6248  ldur w9,[x8, #0x1]
7102bb624c  subs w10,w9,#0x1
7102bb6250  b.lt 0x7102bb62d0
7102bb6254  ldr x12,[sp, #0x18]
7102bb6258  ldr x13,[x12]
7102bb625c  ldursw x9,[x8, #0x5]
7102bb6260  ldp x12,x13,[x13, #0x20]
7102bb6264  mov x14,#0xdb58
7102bb6268  movk x14,#0x8364, LSL #16
7102bb626c  mov w11,wzr
7102bb6270  add x13,x13,x9
7102bb6274  movk x14,#0x23, LSL #32
7102bb6278  adrp x9,0x7104742000
7102bb627c  add x9,x9,#0xdbb
7102bb6280  add w15,w10,w11
7102bb6284  cmp w15,#0x0
7102bb6288  cinc w15,w15,lt
7102bb628c  asr w15,w15,#0x1
7102bb6290  add x16,x13,w15, SXTW  #0x3
7102bb6294  ldr w17,[x16]
7102bb6298  ldr x17,[x12, x17, LSL #0x3]
7102bb629c  cmp x17,x14
7102bb62a0  b.eq 0x7102bb62c0
7102bb62a4  sub w16,w15,#0x1
7102bb62a8  cmp x17,x14
7102bb62ac  csel w10,w16,w10,hi
7102bb62b0  csinc w11,w11,w15,hi
7102bb62b4  cmp w11,w10
7102bb62b8  b.le 0x7102bb6280
7102bb62bc  b 0x7102bb62d8
7102bb62c0  ldrsw x9,[x16, #0x4]
7102bb62c4  tbnz w9,#0x1f,0x7102bb62d0
7102bb62c8  add x9,x8,x9
7102bb62cc  b 0x7102bb62d8
7102bb62d0  adrp x9,0x7104742000
7102bb62d4  add x9,x9,#0xdbb
7102bb62d8  ldrb w8,[x9]
7102bb62dc  cmp w8,#0x8
7102bb62e0  b.ne 0x7102bb62ec
7102bb62e4  ldur s0,[x9, #0x1]
7102bb62e8  b 0x7102bb62f4
7102bb62ec  adrp x8,0x7104472000
7102bb62f0  ldr s0,[x8, #0x854]
7102bb62f4  ldr x8,[sp, #0x30]
7102bb62f8  str s0,[x28, #0xfc]
7102bb62fc  ldr x8,[x8]
7102bb6300  ldrb w9,[x8]
7102bb6304  cmp w9,#0xc
7102bb6308  b.ne 0x7102bb6394
7102bb630c  ldur w9,[x8, #0x1]
7102bb6310  subs w10,w9,#0x1
7102bb6314  b.lt 0x7102bb6394
7102bb6318  ldr x12,[sp, #0x18]
7102bb631c  ldr x13,[x12]
7102bb6320  ldursw x9,[x8, #0x5]
7102bb6324  ldp x12,x13,[x13, #0x20]
7102bb6328  mov x14,#0xb238
7102bb632c  movk x14,#0x3ccf, LSL #16
7102bb6330  mov w11,wzr
7102bb6334  add x13,x13,x9
7102bb6338  movk x14,#0xe, LSL #32
7102bb633c  adrp x9,0x7104742000
7102bb6340  add x9,x9,#0xdbb
7102bb6344  add w15,w10,w11
7102bb6348  cmp w15,#0x0
7102bb634c  cinc w15,w15,lt
7102bb6350  asr w15,w15,#0x1
7102bb6354  add x16,x13,w15, SXTW  #0x3
7102bb6358  ldr w17,[x16]
7102bb635c  ldr x17,[x12, x17, LSL #0x3]
7102bb6360  cmp x17,x14
7102bb6364  b.eq 0x7102bb6384
7102bb6368  sub w16,w15,#0x1
7102bb636c  cmp x17,x14
7102bb6370  csel w10,w16,w10,hi
7102bb6374  csinc w11,w11,w15,hi
7102bb6378  cmp w11,w10
7102bb637c  b.le 0x7102bb6344
7102bb6380  b 0x7102bb639c
7102bb6384  ldrsw x9,[x16, #0x4]
7102bb6388  tbnz w9,#0x1f,0x7102bb6394
7102bb638c  add x9,x8,x9
7102bb6390  b 0x7102bb639c
7102bb6394  adrp x9,0x7104742000
7102bb6398  add x9,x9,#0xdbb
7102bb639c  ldrb w8,[x9]
7102bb63a0  cmp w8,#0x8
7102bb63a4  b.ne 0x7102bb63b0
7102bb63a8  ldur s0,[x9, #0x1]
7102bb63ac  b 0x7102bb63b4
7102bb63b0  fmov s0,0x41700000
7102bb63b4  ldr x8,[sp, #0x30]
7102bb63b8  str s0,[x28, #0x100]
7102bb63bc  ldr x8,[x8]
7102bb63c0  ldrb w9,[x8]
7102bb63c4  cmp w9,#0xc
7102bb63c8  b.ne 0x7102bb6454
7102bb63cc  ldur w9,[x8, #0x1]
7102bb63d0  subs w10,w9,#0x1
7102bb63d4  b.lt 0x7102bb6454
7102bb63d8  ldr x12,[sp, #0x18]
7102bb63dc  ldr x13,[x12]
7102bb63e0  ldursw x9,[x8, #0x5]
7102bb63e4  ldp x12,x13,[x13, #0x20]
7102bb63e8  mov x14,#0x42d0
7102bb63ec  movk x14,#0x6ce, LSL #16
7102bb63f0  mov w11,wzr
7102bb63f4  add x13,x13,x9
7102bb63f8  movk x14,#0xe, LSL #32
7102bb63fc  adrp x9,0x7104742000
7102bb6400  add x9,x9,#0xdbb
7102bb6404  add w15,w10,w11
7102bb6408  cmp w15,#0x0
7102bb640c  cinc w15,w15,lt
7102bb6410  asr w15,w15,#0x1
7102bb6414  add x16,x13,w15, SXTW  #0x3
7102bb6418  ldr w17,[x16]
7102bb641c  ldr x17,[x12, x17, LSL #0x3]
7102bb6420  cmp x17,x14
7102bb6424  b.eq 0x7102bb6444
7102bb6428  sub w16,w15,#0x1
7102bb642c  cmp x17,x14
7102bb6430  csel w10,w16,w10,hi
7102bb6434  csinc w11,w11,w15,hi
7102bb6438  cmp w11,w10
7102bb643c  b.le 0x7102bb6404
7102bb6440  b 0x7102bb645c
7102bb6444  ldrsw x9,[x16, #0x4]
7102bb6448  tbnz w9,#0x1f,0x7102bb6454
7102bb644c  add x9,x8,x9
7102bb6450  b 0x7102bb645c
7102bb6454  adrp x9,0x7104742000
7102bb6458  add x9,x9,#0xdbb
7102bb645c  ldrb w8,[x9]
7102bb6460  cmp w8,#0x8
7102bb6464  b.ne 0x7102bb6470
7102bb6468  ldur s0,[x9, #0x1]
7102bb646c  b 0x7102bb6474
7102bb6470  fmov s0,0x40a00000
7102bb6474  ldr x8,[sp, #0x30]
7102bb6478  str s0,[x28, #0x104]
7102bb647c  ldr x8,[x8]
7102bb6480  ldrb w9,[x8]
7102bb6484  cmp w9,#0xc
7102bb6488  b.ne 0x7102bb6518
7102bb648c  ldur w9,[x8, #0x1]
7102bb6490  subs w9,w9,#0x1
7102bb6494  b.lt 0x7102bb6518
7102bb6498  ldr x11,[sp, #0x18]
7102bb649c  ldr x19,[x11]
7102bb64a0  ldursw x12,[x8, #0x5]
7102bb64a4  ldp x11,x13,[x19, #0x20]
7102bb64a8  add x12,x13,x12
7102bb64ac  mov x13,#0xd2c6
7102bb64b0  movk x13,#0x3033, LSL #16
7102bb64b4  mov w10,wzr
7102bb64b8  adrp x20,0x7104742000
7102bb64bc  add x20,x20,#0xdbb
7102bb64c0  movk x13,#0x11, LSL #32
7102bb64c4  add w14,w9,w10
7102bb64c8  cmp w14,#0x0
7102bb64cc  cinc w14,w14,lt
7102bb64d0  asr w14,w14,#0x1
7102bb64d4  add x15,x12,w14, SXTW  #0x3
7102bb64d8  ldr w16,[x15]
7102bb64dc  ldr x16,[x11, x16, LSL #0x3]
7102bb64e0  cmp x16,x13
7102bb64e4  b.eq 0x7102bb6508
7102bb64e8  sub w15,w14,#0x1
7102bb64ec  cmp x16,x13
7102bb64f0  csel w9,w15,w9,hi
7102bb64f4  csinc w10,w10,w14,hi
7102bb64f8  cmp w10,w9
7102bb64fc  b.le 0x7102bb64c4
7102bb6500  mov x19,xzr
7102bb6504  b 0x7102bb6524
7102bb6508  ldrsw x9,[x15, #0x4]
7102bb650c  tbnz w9,#0x1f,0x7102bb6518
7102bb6510  add x20,x8,x9
7102bb6514  b 0x7102bb6524
7102bb6518  mov x19,xzr
7102bb651c  adrp x20,0x7104742000
7102bb6520  add x20,x20,#0xdbb
7102bb6524  ldrb w8,[x20]
7102bb6528  sub w8,w8,#0xb
7102bb652c  cmp w8,#0x1
7102bb6530  b.hi 0x7102bb653c
7102bb6534  ldur w8,[x20, #0x1]
7102bb6538  b 0x7102bb6540
7102bb653c  mov w8,wzr
7102bb6540  ldp x9,x10,[x28, #0x108]
7102bb6544  sub x10,x10,x9
7102bb6548  orr x11,xzr,#-0x5555555555555556
7102bb654c  movk x11,#0xaaab
7102bb6550  asr x10,x10,#0x2
7102bb6554  mul x10,x10,x11
7102bb6558  sxtw x8,w8
7102bb655c  add x21,x28,#0x108
7102bb6560  cmp x10,x8
7102bb6564  b.cs 0x7102bb6578
7102bb6568  sub x1,x8,x10
7102bb656c  mov x0,x21
7102bb6570  bl 0x7102bbe0a0
7102bb6574  b 0x7102bb6588
7102bb6578  b.ls 0x7102bb6588
7102bb657c  orr w10,wzr,#0xc
7102bb6580  madd x8,x8,x10,x9
7102bb6584  str x8,[x28, #0x110]
7102bb6588  ldrb w12,[x20]
7102bb658c  mov x30,#0xff37
7102bb6590  movk x30,#0x87f1, LSL #16
7102bb6594  mov x2,#0x9e1b
7102bb6598  movk x2,#0x69ff, LSL #16
7102bb659c  mov x3,#0xae8d
7102bb65a0  movk x3,#0x1ef8, LSL #16
7102bb65a4  movk x30,#0x5, LSL #32
7102bb65a8  movk x2,#0x5, LSL #32
7102bb65ac  movk x3,#0x5, LSL #32
7102bb65b0  sub w8,w12,#0xb
7102bb65b4  cmp w8,#0x1
7102bb65b8  b.hi 0x7102bb6840
7102bb65bc  ldur w8,[x20, #0x1]
7102bb65c0  cmp w8,#0x1
7102bb65c4  b.lt 0x7102bb6840
7102bb65c8  adrp x11,0x7104471000
7102bb65cc  adrp x10,0x7104473000
7102bb65d0  ldr s1,[x11, #0xe5c]
7102bb65d4  adrp x11,0x7104473000
7102bb65d8  ldr s0,[x10, #0xbc]
7102bb65dc  orr w10,wzr,#0xc
7102bb65e0  ldr s2,[x11, #0xa5c]
7102bb65e4  mov x8,xzr
7102bb65e8  add x9,x20,#0x5
7102bb65ec  adrp x11,0x7104742000
7102bb65f0  add x11,x11,#0xdbb
7102bb65f4  mov x13,xzr
7102bb65f8  tbnz w8,#0x1f,0x7102bb662c
7102bb65fc  and w12,w12,#0xff
7102bb6600  cmp w12,#0xb
7102bb6604  mov x12,x11
7102bb6608  b.ne 0x7102bb6630
7102bb660c  ldur w12,[x20, #0x1]
7102bb6610  cmp w12,w8
7102bb6614  b.le 0x7102bb6628
7102bb6618  ldrsw x12,[x9, w8, SXTW #0x2]
7102bb661c  add x12,x20,x12
7102bb6620  mov x13,x19
7102bb6624  b 0x7102bb6630
7102bb6628  mov x13,xzr
7102bb662c  mov x12,x11
7102bb6630  ldrb w14,[x12]
7102bb6634  cmp w14,#0xc
7102bb6638  mov x14,x11
7102bb663c  b.ne 0x7102bb66b0
7102bb6640  ldur w14,[x12, #0x1]
7102bb6644  subs w14,w14,#0x1
7102bb6648  b.lt 0x7102bb66ac
7102bb664c  ldursw x17,[x12, #0x5]
7102bb6650  ldp x16,x18,[x13, #0x20]
7102bb6654  mov w15,wzr
7102bb6658  add x17,x18,x17
7102bb665c  add w18,w14,w15
7102bb6660  cmp w18,#0x0
7102bb6664  cinc w18,w18,lt
7102bb6668  asr w18,w18,#0x1
7102bb666c  add x0,x17,w18, SXTW  #0x3
7102bb6670  ldr w1,[x0]
7102bb6674  ldr x1,[x16, x1, LSL #0x3]
7102bb6678  cmp x1,x2
7102bb667c  b.eq 0x7102bb669c
7102bb6680  sub w0,w18,#0x1
7102bb6684  cmp x1,x2
7102bb6688  csel w14,w0,w14,hi
7102bb668c  csinc w15,w15,w18,hi
7102bb6690  cmp w15,w14
7102bb6694  b.le 0x7102bb665c
7102bb6698  b 0x7102bb66ac
7102bb669c  ldrsw x14,[x0, #0x4]
7102bb66a0  tbnz w14,#0x1f,0x7102bb66ac
7102bb66a4  add x14,x12,x14
7102bb66a8  b 0x7102bb66b0
7102bb66ac  mov x14,x11
7102bb66b0  ldrb w15,[x14]
7102bb66b4  mov v3.16B,v0.16B
7102bb66b8  cmp w15,#0x8
7102bb66bc  b.ne 0x7102bb66c4
7102bb66c0  ldur s3,[x14, #0x1]
7102bb66c4  mul x15,x8,x10
7102bb66c8  ldr x14,[x21]
7102bb66cc  str s3,[x14,x15]
7102bb66d0  ldrb w14,[x12]
7102bb66d4  cmp w14,#0xc
7102bb66d8  mov x14,x11
7102bb66dc  b.ne 0x7102bb6750
7102bb66e0  ldur w14,[x12, #0x1]
7102bb66e4  subs w14,w14,#0x1
7102bb66e8  b.lt 0x7102bb674c
7102bb66ec  ldursw x17,[x12, #0x5]
7102bb66f0  ldp x16,x18,[x13, #0x20]
7102bb66f4  mov w15,wzr
7102bb66f8  add x17,x18,x17
7102bb66fc  add w18,w14,w15
7102bb6700  cmp w18,#0x0
7102bb6704  cinc w18,w18,lt
7102bb6708  asr w18,w18,#0x1
7102bb670c  add x0,x17,w18, SXTW  #0x3
7102bb6710  ldr w1,[x0]
7102bb6714  ldr x1,[x16, x1, LSL #0x3]
7102bb6718  cmp x1,x3
7102bb671c  b.eq 0x7102bb673c
7102bb6720  sub w0,w18,#0x1
7102bb6724  cmp x1,x3
7102bb6728  csel w14,w0,w14,hi
7102bb672c  csinc w15,w15,w18,hi
7102bb6730  cmp w15,w14
7102bb6734  b.le 0x7102bb66fc
7102bb6738  b 0x7102bb674c
7102bb673c  ldrsw x14,[x0, #0x4]
7102bb6740  tbnz w14,#0x1f,0x7102bb674c
7102bb6744  add x14,x12,x14
7102bb6748  b 0x7102bb6750
7102bb674c  mov x14,x11
7102bb6750  ldrb w15,[x14]
7102bb6754  mov v3.16B,v1.16B
7102bb6758  cmp w15,#0x8
7102bb675c  b.ne 0x7102bb6764
7102bb6760  ldur s3,[x14, #0x1]
7102bb6764  ldr x14,[x21]
7102bb6768  madd x14,x8,x10,x14
7102bb676c  str s3,[x14, #0x4]
7102bb6770  ldrb w14,[x12]
7102bb6774  cmp w14,#0xc
7102bb6778  mov x14,x11
7102bb677c  b.ne 0x7102bb67f0
7102bb6780  ldur w14,[x12, #0x1]
7102bb6784  subs w14,w14,#0x1
7102bb6788  b.lt 0x7102bb67ec
7102bb678c  ldursw x17,[x12, #0x5]
7102bb6790  ldp x16,x13,[x13, #0x20]
7102bb6794  mov w15,wzr
7102bb6798  add x13,x13,x17
7102bb679c  add w17,w14,w15
7102bb67a0  cmp w17,#0x0
7102bb67a4  cinc w17,w17,lt
7102bb67a8  asr w17,w17,#0x1
7102bb67ac  add x18,x13,w17, SXTW  #0x3
7102bb67b0  ldr w0,[x18]
7102bb67b4  ldr x0,[x16, x0, LSL #0x3]
7102bb67b8  cmp x0,x30
7102bb67bc  b.eq 0x7102bb67dc
7102bb67c0  sub w18,w17,#0x1
7102bb67c4  cmp x0,x30
7102bb67c8  csel w14,w18,w14,hi
7102bb67cc  csinc w15,w15,w17,hi
7102bb67d0  cmp w15,w14
7102bb67d4  b.le 0x7102bb679c
7102bb67d8  b 0x7102bb67ec
7102bb67dc  ldrsw x13,[x18, #0x4]
7102bb67e0  tbnz w13,#0x1f,0x7102bb67ec
7102bb67e4  add x14,x12,x13
7102bb67e8  b 0x7102bb67f0
7102bb67ec  mov x14,x11
7102bb67f0  ldrb w12,[x14]
7102bb67f4  mov v3.16B,v2.16B
7102bb67f8  cmp w12,#0x8
7102bb67fc  b.ne 0x7102bb6804
7102bb6800  ldur s3,[x14, #0x1]
7102bb6804  ldr x12,[x21]
7102bb6808  madd x12,x8,x10,x12
7102bb680c  add x8,x8,#0x1
7102bb6810  str s3,[x12, #0x8]
7102bb6814  ldrb w12,[x20]
7102bb6818  sub w13,w12,#0xb
7102bb681c  cmp w13,#0x1
7102bb6820  b.hi 0x7102bb6834
7102bb6824  ldur w13,[x20, #0x1]
7102bb6828  cmp x8,w13, SXTW 
7102bb682c  b.lt 0x7102bb65f4
7102bb6830  b 0x7102bb6840
7102bb6834  mov w13,wzr
7102bb6838  cmp x8,w13, SXTW 
7102bb683c  b.lt 0x7102bb65f4
7102bb6840  ldr x8,[sp, #0x30]
7102bb6844  ldr x8,[x8]
7102bb6848  ldrb w9,[x8]
7102bb684c  cmp w9,#0xc
7102bb6850  b.ne 0x7102bb68e0
7102bb6854  ldur w9,[x8, #0x1]
7102bb6858  subs w9,w9,#0x1
7102bb685c  b.lt 0x7102bb68e0
7102bb6860  ldr x11,[sp, #0x18]
7102bb6864  ldr x27,[x11]
7102bb6868  ldursw x12,[x8, #0x5]
7102bb686c  ldp x11,x13,[x27, #0x20]
7102bb6870  add x12,x13,x12
7102bb6874  mov x13,#0xd260
7102bb6878  movk x13,#0x4d13, LSL #16
7102bb687c  mov w10,wzr
7102bb6880  adrp x23,0x7104742000
7102bb6884  add x23,x23,#0xdbb
7102bb6888  movk x13,#0x10, LSL #32
7102bb688c  add w14,w9,w10
7102bb6890  cmp w14,#0x0
7102bb6894  cinc w14,w14,lt
7102bb6898  asr w14,w14,#0x1
7102bb689c  add x15,x12,w14, SXTW  #0x3
7102bb68a0  ldr w16,[x15]
7102bb68a4  ldr x16,[x11, x16, LSL #0x3]
7102bb68a8  cmp x16,x13
7102bb68ac  b.eq 0x7102bb68d0
7102bb68b0  sub w15,w14,#0x1
7102bb68b4  cmp x16,x13
7102bb68b8  csel w9,w15,w9,hi
7102bb68bc  csinc w10,w10,w14,hi
7102bb68c0  cmp w10,w9
7102bb68c4  b.le 0x7102bb688c
7102bb68c8  mov x27,xzr
7102bb68cc  b 0x7102bb68ec
7102bb68d0  ldrsw x9,[x15, #0x4]
7102bb68d4  tbnz w9,#0x1f,0x7102bb68e0
7102bb68d8  add x23,x8,x9
7102bb68dc  b 0x7102bb68ec
7102bb68e0  mov x27,xzr
7102bb68e4  adrp x23,0x7104742000
7102bb68e8  add x23,x23,#0xdbb
7102bb68ec  ldrb w8,[x23]
7102bb68f0  sub w8,w8,#0xb
7102bb68f4  cmp w8,#0x1
7102bb68f8  b.hi 0x7102bb6904
7102bb68fc  ldur w8,[x23, #0x1]
7102bb6900  b 0x7102bb6908
7102bb6904  mov w8,wzr
7102bb6908  sxtw x20,w8
7102bb690c  ldp x22,x8,[x28, #0x120]
7102bb6910  sub x12,x8,x22
7102bb6914  orr x11,xzr,#-0x5555555555555556
7102bb6918  movk x11,#0xaaab
7102bb691c  asr x9,x12,#0x4
7102bb6920  mul x26,x9,x11
7102bb6924  add x21,x28,#0x120
7102bb6928  cmp x26,x20
7102bb692c  b.cs 0x7102bb6990
7102bb6930  ldr x9,[x28, #0x130]
7102bb6934  sub x10,x9,x8
7102bb6938  asr x10,x10,#0x4
7102bb693c  mul x10,x10,x11
7102bb6940  sub x19,x20,x26
7102bb6944  cmp x10,x19
7102bb6948  b.cs 0x7102bb69a4
7102bb694c  tbnz w20,#0x1f,0x7102bbde84
7102bb6950  sub x8,x9,x22
7102bb6954  orr x9,xzr,#-0x5555555555555556
7102bb6958  asr x8,x8,#0x4
7102bb695c  movk x9,#0xaaab
7102bb6960  mul x8,x8,x9
7102bb6964  orr x9,xzr,#-0x5555555555555556
7102bb6968  movk x9,#0x2aa, LSL #48
7102bb696c  cmp x8,x9
7102bb6970  str x27,[sp, #0x20]
7102bb6974  str x12,[sp, #0x10]
7102bb6978  b.cs 0x7102bb6a0c
7102bb697c  lsl x8,x8,#0x1
7102bb6980  cmp x8,x20
7102bb6984  csel x27,x20,x8,cc
7102bb6988  cbnz x27,0x7102bb6a14
7102bb698c  b 0x7102bb6a78
7102bb6990  b.ls 0x7102bb6b00
7102bb6994  orr w8,wzr,#0x30
7102bb6998  madd x8,x20,x8,x22
7102bb699c  str x8,[x28, #0x128]
7102bb69a0  b 0x7102bb6b00
7102bb69a4  mov x9,x19
7102bb69a8  tbz w19,#0x0,0x7102bb69c8
7102bb69ac  stp xzr,xzr,[x8, #0x20]
7102bb69b0  sub x9,x19,#0x1
7102bb69b4  stp xzr,xzr,[x8, #0x10]
7102bb69b8  stp xzr,xzr,[x8]
7102bb69bc  ldr x8,[x28, #0x128]
7102bb69c0  add x8,x8,#0x30
7102bb69c4  str x8,[x28, #0x128]
7102bb69c8  cmp x19,#0x1
7102bb69cc  b.eq 0x7102bb6b00
7102bb69d0  stp xzr,xzr,[x8, #0x20]
7102bb69d4  subs x9,x9,#0x2
7102bb69d8  stp xzr,xzr,[x8, #0x10]
7102bb69dc  stp xzr,xzr,[x8]
7102bb69e0  ldr x8,[x28, #0x128]
7102bb69e4  add x10,x8,#0x30
7102bb69e8  str x10,[x28, #0x128]
7102bb69ec  stp xzr,xzr,[x8, #0x50]
7102bb69f0  stp xzr,xzr,[x8, #0x40]
7102bb69f4  stp xzr,xzr,[x8, #0x30]
7102bb69f8  ldr x8,[x28, #0x128]
7102bb69fc  add x8,x8,#0x30
7102bb6a00  str x8,[x28, #0x128]
7102bb6a04  b.ne 0x7102bb69d0
7102bb6a08  b 0x7102bb6b00
7102bb6a0c  orr x27,xzr,#0x5555555555555555
7102bb6a10  movk x27,#0x555, LSL #48
7102bb6a14  add x8,x27,x27, LSL #0x1
7102bb6a18  lsl x8,x8,#0x4
7102bb6a1c  cmp x8,#0x0
7102bb6a20  csinc x24,x8,xzr,ne
7102bb6a24  mov w0,#0x10
7102bb6a28  mov x1,x24
7102bb6a2c  bl 0x710392e290
7102bb6a30  mov x25,x0
7102bb6a34  cbnz x0,0x7102bb6a7c
7102bb6a38  adrp x8,0x7105332000
7102bb6a3c  ldr x0,[x8, #0xf00]
7102bb6a40  cbz x0,0x7102bb6a78
7102bb6a44  str wzr,[sp, #0x4c]
7102bb6a48  str x24,[sp, #0x38]
7102bb6a4c  ldr x8,[x0]
7102bb6a50  ldr x8,[x8, #0x30]
7102bb6a54  add x1,sp,#0x4c
7102bb6a58  add x2,sp,#0x38
7102bb6a5c  blr x8
7102bb6a60  tbz w0,#0x0,0x7102bb6a78
7102bb6a64  mov w0,#0x10
7102bb6a68  mov x1,x24
7102bb6a6c  bl 0x710392e290
7102bb6a70  mov x25,x0
7102bb6a74  cbnz x0,0x7102bb6a7c
7102bb6a78  mov x25,xzr
7102bb6a7c  orr w28,wzr,#0x30
7102bb6a80  madd x24,x26,x28,x25
7102bb6a84  add x8,x19,x19, LSL #0x1
7102bb6a88  lsl x2,x8,#0x4
7102bb6a8c  mov x0,x24
7102bb6a90  mov w1,wzr
7102bb6a94  madd x26,x27,x28,x25
7102bb6a98  bl 0x71039c02a0
7102bb6a9c  ldr x2,[sp, #0x10]
7102bb6aa0  orr x8,xzr,#0x5555555555555555
7102bb6aa4  movk x8,#0xd555, LSL #48
7102bb6aa8  smulh x8,x2,x8
7102bb6aac  asr x9,x8,#0x3
7102bb6ab0  add x8,x9,x8, LSR #0x3f
7102bb6ab4  madd x19,x20,x28,x25
7102bb6ab8  cmp x2,#0x1
7102bb6abc  madd x24,x8,x28,x24
7102bb6ac0  b.lt 0x7102bb6ad0
7102bb6ac4  mov x0,x24
7102bb6ac8  mov x1,x22
7102bb6acc  bl 0x71039c00e0
7102bb6ad0  ldp x27,x28,[sp, #0x20]
7102bb6ad4  mov x30,#0xff37
7102bb6ad8  movk x30,#0x87f1, LSL #16
7102bb6adc  movk x30,#0x5, LSL #32
7102bb6ae0  str x26,[x28, #0x130]
7102bb6ae4  stp x24,x19,[x28, #0x120]
7102bb6ae8  cbz x22,0x7102bb6b00
7102bb6aec  mov x0,x22
7102bb6af0  bl 0x710392eb40
7102bb6af4  mov x30,#0xff37
7102bb6af8  movk x30,#0x87f1, LSL #16
7102bb6afc  movk x30,#0x5, LSL #32
7102bb6b00  ldrb w5,[x23]
7102bb6b04  sub w8,w5,#0xb
7102bb6b08  cmp w8,#0x1
7102bb6b0c  b.hi 0x7102bb73f0
7102bb6b10  ldur w8,[x23, #0x1]
7102bb6b14  cmp w8,#0x1
7102bb6b18  b.lt 0x7102bb73f0
7102bb6b1c  adrp x16,0x7104472000
7102bb6b20  ldr s1,[x16, #0xd40]
7102bb6b24  adrp x16,0x7104473000
7102bb6b28  adrp x4,0x7104472000
7102bb6b2c  ldr s7,[x4, #0xb94]
7102bb6b30  adrp x4,0x7104472000
7102bb6b34  ldr s2,[x16, #0x81c]
7102bb6b38  adrp x16,0x7104471000
7102bb6b3c  adrp x2,0x7104472000
7102bb6b40  adrp x3,0x7104471000
7102bb6b44  ldr s3,[x16, #0xb98]
7102bb6b48  ldr s4,[x2, #0x2fc]
7102bb6b4c  ldr s6,[x3, #0xc4c]
7102bb6b50  fmov s0,wzr
7102bb6b54  fmov s5,0x41700000
7102bb6b58  ldr s17,[x4, #0xe0c]
7102bb6b5c  fmov s16,0x41f00000
7102bb6b60  mov x9,#0xe824
7102bb6b64  movk x9,#0x6e65, LSL #16
7102bb6b68  mov x10,#0x395a
7102bb6b6c  movk x10,#0xcc51, LSL #16
7102bb6b70  mov x11,#0x1308
7102bb6b74  movk x11,#0xf05e, LSL #16
7102bb6b78  mov x12,#0x2c51
7102bb6b7c  movk x12,#0xcc53, LSL #16
7102bb6b80  mov x13,#0x3855
7102bb6b84  movk x13,#0xa5e4, LSL #16
7102bb6b88  mov x14,#0x70c
7102bb6b8c  movk x14,#0x99e9, LSL #16
7102bb6b90  mov x15,#0xfc43
7102bb6b94  movk x15,#0x3c86, LSL #16
7102bb6b98  mov x16,#0xc31a
7102bb6b9c  movk x16,#0x8b, LSL #16
7102bb6ba0  mov x17,#0xa2d7
7102bb6ba4  movk x17,#0xc01a, LSL #16
7102bb6ba8  mov x18,#0x9241
7102bb6bac  movk x18,#0xb71d, LSL #16
7102bb6bb0  mov x0,#0x656c
7102bb6bb4  movk x0,#0x6a02, LSL #16
7102bb6bb8  mov x1,#0x55fa
7102bb6bbc  movk x1,#0x1d05, LSL #16
7102bb6bc0  mov x8,xzr
7102bb6bc4  movk x9,#0x12, LSL #32
7102bb6bc8  movk x10,#0xe, LSL #32
7102bb6bcc  movk x11,#0x8, LSL #32
7102bb6bd0  movk x12,#0x8, LSL #32
7102bb6bd4  movk x13,#0x8, LSL #32
7102bb6bd8  movk x14,#0x8, LSL #32
7102bb6bdc  movk x15,#0x8, LSL #32
7102bb6be0  movk x16,#0x8, LSL #32
7102bb6be4  movk x17,#0x5, LSL #32
7102bb6be8  movk x18,#0x5, LSL #32
7102bb6bec  movk x0,#0x5, LSL #32
7102bb6bf0  movk x1,#0x5, LSL #32
7102bb6bf4  add x2,x23,#0x5
7102bb6bf8  orr w3,wzr,#0x30
7102bb6bfc  adrp x4,0x7104742000
7102bb6c00  add x4,x4,#0xdbb
7102bb6c04  mov x6,xzr
7102bb6c08  tbnz w8,#0x1f,0x7102bb6c3c
7102bb6c0c  and w5,w5,#0xff
7102bb6c10  cmp w5,#0xb
7102bb6c14  mov x5,x4
7102bb6c18  b.ne 0x7102bb6c40
7102bb6c1c  ldur w5,[x23, #0x1]
7102bb6c20  cmp w5,w8
7102bb6c24  b.le 0x7102bb6c38
7102bb6c28  ldrsw x5,[x2, w8, SXTW #0x2]
7102bb6c2c  add x5,x23,x5
7102bb6c30  mov x6,x27
7102bb6c34  b 0x7102bb6c40
7102bb6c38  mov x6,xzr
7102bb6c3c  mov x5,x4
7102bb6c40  ldrb w7,[x5]
7102bb6c44  cmp w7,#0xc
7102bb6c48  mov x7,x4
7102bb6c4c  b.ne 0x7102bb6cc0
7102bb6c50  ldur w7,[x5, #0x1]
7102bb6c54  subs w7,w7,#0x1
7102bb6c58  b.lt 0x7102bb6cbc
7102bb6c5c  ldursw x22,[x5, #0x5]
7102bb6c60  ldp x20,x24,[x6, #0x20]
7102bb6c64  mov w19,wzr
7102bb6c68  add x22,x24,x22
7102bb6c6c  add w24,w7,w19
7102bb6c70  cmp w24,#0x0
7102bb6c74  cinc w24,w24,lt
7102bb6c78  asr w24,w24,#0x1
7102bb6c7c  add x25,x22,w24, SXTW  #0x3
7102bb6c80  ldr w26,[x25]
7102bb6c84  ldr x26,[x20, x26, LSL #0x3]
7102bb6c88  cmp x26,x17
7102bb6c8c  b.eq 0x7102bb6cac
7102bb6c90  sub w25,w24,#0x1
7102bb6c94  cmp x26,x17
7102bb6c98  csel w7,w25,w7,hi
7102bb6c9c  csinc w19,w19,w24,hi
7102bb6ca0  cmp w19,w7
7102bb6ca4  b.le 0x7102bb6c6c
7102bb6ca8  b 0x7102bb6cbc
7102bb6cac  ldrsw x7,[x25, #0x4]
7102bb6cb0  tbnz w7,#0x1f,0x7102bb6cbc
7102bb6cb4  add x7,x5,x7
7102bb6cb8  b 0x7102bb6cc0
7102bb6cbc  mov x7,x4
7102bb6cc0  ldrb w19,[x7]
7102bb6cc4  mov v18.16B,v0.16B
7102bb6cc8  cmp w19,#0x8
7102bb6ccc  b.ne 0x7102bb6cd4
7102bb6cd0  ldur s18,[x7, #0x1]
7102bb6cd4  mul x19,x8,x3
7102bb6cd8  ldr x7,[x21]
7102bb6cdc  str s18,[x7,x19]
7102bb6ce0  ldrb w7,[x5]
7102bb6ce4  cmp w7,#0xc
7102bb6ce8  mov x7,x4
7102bb6cec  b.ne 0x7102bb6d60
7102bb6cf0  ldur w7,[x5, #0x1]
7102bb6cf4  subs w7,w7,#0x1
7102bb6cf8  b.lt 0x7102bb6d5c
7102bb6cfc  ldursw x22,[x5, #0x5]
7102bb6d00  ldp x20,x24,[x6, #0x20]
7102bb6d04  mov w19,wzr
7102bb6d08  add x22,x24,x22
7102bb6d0c  add w24,w7,w19
7102bb6d10  cmp w24,#0x0
7102bb6d14  cinc w24,w24,lt
7102bb6d18  asr w24,w24,#0x1
7102bb6d1c  add x25,x22,w24, SXTW  #0x3
7102bb6d20  ldr w26,[x25]
7102bb6d24  ldr x26,[x20, x26, LSL #0x3]
7102bb6d28  cmp x26,x1
7102bb6d2c  b.eq 0x7102bb6d4c
7102bb6d30  sub w25,w24,#0x1
7102bb6d34  cmp x26,x1
7102bb6d38  csel w7,w25,w7,hi
7102bb6d3c  csinc w19,w19,w24,hi
7102bb6d40  cmp w19,w7
7102bb6d44  b.le 0x7102bb6d0c
7102bb6d48  b 0x7102bb6d5c
7102bb6d4c  ldrsw x7,[x25, #0x4]
7102bb6d50  tbnz w7,#0x1f,0x7102bb6d5c
7102bb6d54  add x7,x5,x7
7102bb6d58  b 0x7102bb6d60
7102bb6d5c  mov x7,x4
7102bb6d60  ldrb w19,[x7]
7102bb6d64  mov v18.16B,v1.16B
7102bb6d68  cmp w19,#0x8
7102bb6d6c  b.ne 0x7102bb6d74
7102bb6d70  ldur s18,[x7, #0x1]
7102bb6d74  ldr x7,[x21]
7102bb6d78  madd x7,x8,x3,x7
7102bb6d7c  str s18,[x7, #0x4]
7102bb6d80  ldrb w7,[x5]
7102bb6d84  cmp w7,#0xc
7102bb6d88  mov x7,x4
7102bb6d8c  b.ne 0x7102bb6e00
7102bb6d90  ldur w7,[x5, #0x1]
7102bb6d94  subs w7,w7,#0x1
7102bb6d98  b.lt 0x7102bb6dfc
7102bb6d9c  ldursw x22,[x5, #0x5]
7102bb6da0  ldp x20,x24,[x6, #0x20]
7102bb6da4  mov w19,wzr
7102bb6da8  add x22,x24,x22
7102bb6dac  add w24,w7,w19
7102bb6db0  cmp w24,#0x0
7102bb6db4  cinc w24,w24,lt
7102bb6db8  asr w24,w24,#0x1
7102bb6dbc  add x25,x22,w24, SXTW  #0x3
7102bb6dc0  ldr w26,[x25]
7102bb6dc4  ldr x26,[x20, x26, LSL #0x3]
7102bb6dc8  cmp x26,x18
7102bb6dcc  b.eq 0x7102bb6dec
7102bb6dd0  sub w25,w24,#0x1
7102bb6dd4  cmp x26,x18
7102bb6dd8  csel w7,w25,w7,hi
7102bb6ddc  csinc w19,w19,w24,hi
7102bb6de0  cmp w19,w7
7102bb6de4  b.le 0x7102bb6dac
7102bb6de8  b 0x7102bb6dfc
7102bb6dec  ldrsw x7,[x25, #0x4]
7102bb6df0  tbnz w7,#0x1f,0x7102bb6dfc
7102bb6df4  add x7,x5,x7
7102bb6df8  b 0x7102bb6e00
7102bb6dfc  mov x7,x4
7102bb6e00  ldrb w19,[x7]
7102bb6e04  mov v18.16B,v0.16B
7102bb6e08  cmp w19,#0x8
7102bb6e0c  b.ne 0x7102bb6e14
7102bb6e10  ldur s18,[x7, #0x1]
7102bb6e14  ldr x7,[x21]
7102bb6e18  madd x7,x8,x3,x7
7102bb6e1c  str s18,[x7, #0x8]
7102bb6e20  ldrb w7,[x5]
7102bb6e24  cmp w7,#0xc
7102bb6e28  mov x7,x4
7102bb6e2c  b.ne 0x7102bb6ea0
7102bb6e30  ldur w7,[x5, #0x1]
7102bb6e34  subs w7,w7,#0x1
7102bb6e38  b.lt 0x7102bb6e9c
7102bb6e3c  ldursw x22,[x5, #0x5]
7102bb6e40  ldp x20,x24,[x6, #0x20]
7102bb6e44  mov w19,wzr
7102bb6e48  add x22,x24,x22
7102bb6e4c  add w24,w7,w19
7102bb6e50  cmp w24,#0x0
7102bb6e54  cinc w24,w24,lt
7102bb6e58  asr w24,w24,#0x1
7102bb6e5c  add x25,x22,w24, SXTW  #0x3
7102bb6e60  ldr w26,[x25]
7102bb6e64  ldr x26,[x20, x26, LSL #0x3]
7102bb6e68  cmp x26,x0
7102bb6e6c  b.eq 0x7102bb6e8c
7102bb6e70  sub w25,w24,#0x1
7102bb6e74  cmp x26,x0
7102bb6e78  csel w7,w25,w7,hi
7102bb6e7c  csinc w19,w19,w24,hi
7102bb6e80  cmp w19,w7
7102bb6e84  b.le 0x7102bb6e4c
7102bb6e88  b 0x7102bb6e9c
7102bb6e8c  ldrsw x7,[x25, #0x4]
7102bb6e90  tbnz w7,#0x1f,0x7102bb6e9c
7102bb6e94  add x7,x5,x7
7102bb6e98  b 0x7102bb6ea0
7102bb6e9c  mov x7,x4
7102bb6ea0  ldrb w19,[x7]
7102bb6ea4  mov v18.16B,v2.16B
7102bb6ea8  cmp w19,#0x8
7102bb6eac  b.ne 0x7102bb6eb4
7102bb6eb0  ldur s18,[x7, #0x1]
7102bb6eb4  ldr x7,[x21]
7102bb6eb8  madd x7,x8,x3,x7
7102bb6ebc  str s18,[x7, #0xc]
7102bb6ec0  ldrb w7,[x5]
7102bb6ec4  cmp w7,#0xc
7102bb6ec8  mov x7,x4
7102bb6ecc  b.ne 0x7102bb6f40
7102bb6ed0  ldur w7,[x5, #0x1]
7102bb6ed4  subs w7,w7,#0x1
7102bb6ed8  b.lt 0x7102bb6f3c
7102bb6edc  ldursw x22,[x5, #0x5]
7102bb6ee0  ldp x20,x24,[x6, #0x20]
7102bb6ee4  mov w19,wzr
7102bb6ee8  add x22,x24,x22
7102bb6eec  add w24,w7,w19
7102bb6ef0  cmp w24,#0x0
7102bb6ef4  cinc w24,w24,lt
7102bb6ef8  asr w24,w24,#0x1
7102bb6efc  add x25,x22,w24, SXTW  #0x3
7102bb6f00  ldr w26,[x25]
7102bb6f04  ldr x26,[x20, x26, LSL #0x3]
7102bb6f08  cmp x26,x10
7102bb6f0c  b.eq 0x7102bb6f2c
7102bb6f10  sub w25,w24,#0x1
7102bb6f14  cmp x26,x10
7102bb6f18  csel w7,w25,w7,hi
7102bb6f1c  csinc w19,w19,w24,hi
7102bb6f20  cmp w19,w7
7102bb6f24  b.le 0x7102bb6eec
7102bb6f28  b 0x7102bb6f3c
7102bb6f2c  ldrsw x7,[x25, #0x4]
7102bb6f30  tbnz w7,#0x1f,0x7102bb6f3c
7102bb6f34  add x7,x5,x7
7102bb6f38  b 0x7102bb6f40
7102bb6f3c  mov x7,x4
7102bb6f40  ldrb w19,[x7]
7102bb6f44  mov v18.16B,v3.16B
7102bb6f48  cmp w19,#0x8
7102bb6f4c  b.ne 0x7102bb6f54
7102bb6f50  ldur s18,[x7, #0x1]
7102bb6f54  ldr x7,[x21]
7102bb6f58  madd x7,x8,x3,x7
7102bb6f5c  str s18,[x7, #0x10]
7102bb6f60  ldrb w7,[x5]
7102bb6f64  cmp w7,#0xc
7102bb6f68  mov x7,x4
7102bb6f6c  b.ne 0x7102bb6fe0
7102bb6f70  ldur w7,[x5, #0x1]
7102bb6f74  subs w7,w7,#0x1
7102bb6f78  b.lt 0x7102bb6fdc
7102bb6f7c  ldursw x22,[x5, #0x5]
7102bb6f80  ldp x20,x24,[x6, #0x20]
7102bb6f84  mov w19,wzr
7102bb6f88  add x22,x24,x22
7102bb6f8c  add w24,w7,w19
7102bb6f90  cmp w24,#0x0
7102bb6f94  cinc w24,w24,lt
7102bb6f98  asr w24,w24,#0x1
7102bb6f9c  add x25,x22,w24, SXTW  #0x3
7102bb6fa0  ldr w26,[x25]
7102bb6fa4  ldr x26,[x20, x26, LSL #0x3]
7102bb6fa8  cmp x26,x9
7102bb6fac  b.eq 0x7102bb6fcc
7102bb6fb0  sub w25,w24,#0x1
7102bb6fb4  cmp x26,x9
7102bb6fb8  csel w7,w25,w7,hi
7102bb6fbc  csinc w19,w19,w24,hi
7102bb6fc0  cmp w19,w7
7102bb6fc4  b.le 0x7102bb6f8c
7102bb6fc8  b 0x7102bb6fdc
7102bb6fcc  ldrsw x7,[x25, #0x4]
7102bb6fd0  tbnz w7,#0x1f,0x7102bb6fdc
7102bb6fd4  add x7,x5,x7
7102bb6fd8  b 0x7102bb6fe0
7102bb6fdc  mov x7,x4
7102bb6fe0  ldrb w19,[x7]
7102bb6fe4  mov v18.16B,v4.16B
7102bb6fe8  cmp w19,#0x8
7102bb6fec  b.ne 0x7102bb6ff4
7102bb6ff0  ldur s18,[x7, #0x1]
7102bb6ff4  ldr x7,[x21]
7102bb6ff8  madd x7,x8,x3,x7
7102bb6ffc  str s18,[x7, #0x14]
7102bb7000  ldrb w7,[x5]
7102bb7004  cmp w7,#0xc
7102bb7008  mov x7,x4
7102bb700c  b.ne 0x7102bb7080
7102bb7010  ldur w7,[x5, #0x1]
7102bb7014  subs w7,w7,#0x1
7102bb7018  b.lt 0x7102bb707c
7102bb701c  ldursw x22,[x5, #0x5]
7102bb7020  ldp x20,x24,[x6, #0x20]
7102bb7024  mov w19,wzr
7102bb7028  add x22,x24,x22
7102bb702c  add w24,w7,w19
7102bb7030  cmp w24,#0x0
7102bb7034  cinc w24,w24,lt
7102bb7038  asr w24,w24,#0x1
7102bb703c  add x25,x22,w24, SXTW  #0x3
7102bb7040  ldr w26,[x25]
7102bb7044  ldr x26,[x20, x26, LSL #0x3]
7102bb7048  cmp x26,x16
7102bb704c  b.eq 0x7102bb706c
7102bb7050  sub w25,w24,#0x1
7102bb7054  cmp x26,x16
7102bb7058  csel w7,w25,w7,hi
7102bb705c  csinc w19,w19,w24,hi
7102bb7060  cmp w19,w7
7102bb7064  b.le 0x7102bb702c
7102bb7068  b 0x7102bb707c
7102bb706c  ldrsw x7,[x25, #0x4]
7102bb7070  tbnz w7,#0x1f,0x7102bb707c
7102bb7074  add x7,x5,x7
7102bb7078  b 0x7102bb7080
7102bb707c  mov x7,x4
7102bb7080  ldrb w19,[x7]
7102bb7084  mov v18.16B,v0.16B
7102bb7088  cmp w19,#0x8
7102bb708c  b.ne 0x7102bb7094
7102bb7090  ldur s18,[x7, #0x1]
7102bb7094  ldr x7,[x21]
7102bb7098  madd x7,x8,x3,x7
7102bb709c  str s18,[x7, #0x18]
7102bb70a0  ldrb w7,[x5]
7102bb70a4  cmp w7,#0xc
7102bb70a8  mov x7,x4
7102bb70ac  b.ne 0x7102bb7120
7102bb70b0  ldur w7,[x5, #0x1]
7102bb70b4  subs w7,w7,#0x1
7102bb70b8  b.lt 0x7102bb711c
7102bb70bc  ldursw x22,[x5, #0x5]
7102bb70c0  ldp x20,x24,[x6, #0x20]
7102bb70c4  mov w19,wzr
7102bb70c8  add x22,x24,x22
7102bb70cc  add w24,w7,w19
7102bb70d0  cmp w24,#0x0
7102bb70d4  cinc w24,w24,lt
7102bb70d8  asr w24,w24,#0x1
7102bb70dc  add x25,x22,w24, SXTW  #0x3
7102bb70e0  ldr w26,[x25]
7102bb70e4  ldr x26,[x20, x26, LSL #0x3]
7102bb70e8  cmp x26,x15
7102bb70ec  b.eq 0x7102bb710c
7102bb70f0  sub w25,w24,#0x1
7102bb70f4  cmp x26,x15
7102bb70f8  csel w7,w25,w7,hi
7102bb70fc  csinc w19,w19,w24,hi
7102bb7100  cmp w19,w7
7102bb7104  b.le 0x7102bb70cc
7102bb7108  b 0x7102bb711c
7102bb710c  ldrsw x7,[x25, #0x4]
7102bb7110  tbnz w7,#0x1f,0x7102bb711c
7102bb7114  add x7,x5,x7
7102bb7118  b 0x7102bb7120
7102bb711c  mov x7,x4
7102bb7120  ldrb w19,[x7]
7102bb7124  mov v18.16B,v5.16B
7102bb7128  cmp w19,#0x8
7102bb712c  b.ne 0x7102bb7134
7102bb7130  ldur s18,[x7, #0x1]
7102bb7134  ldr x7,[x21]
7102bb7138  madd x7,x8,x3,x7
7102bb713c  str s18,[x7, #0x1c]
7102bb7140  ldrb w7,[x5]
7102bb7144  cmp w7,#0xc
7102bb7148  mov x7,x4
7102bb714c  b.ne 0x7102bb71c0
7102bb7150  ldur w7,[x5, #0x1]
7102bb7154  subs w7,w7,#0x1
7102bb7158  b.lt 0x7102bb71bc
7102bb715c  ldursw x22,[x5, #0x5]
7102bb7160  ldp x20,x24,[x6, #0x20]
7102bb7164  mov w19,wzr
7102bb7168  add x22,x24,x22
7102bb716c  add w24,w7,w19
7102bb7170  cmp w24,#0x0
7102bb7174  cinc w24,w24,lt
7102bb7178  asr w24,w24,#0x1
7102bb717c  add x25,x22,w24, SXTW  #0x3
7102bb7180  ldr w26,[x25]
7102bb7184  ldr x26,[x20, x26, LSL #0x3]
7102bb7188  cmp x26,x13
7102bb718c  b.eq 0x7102bb71ac
7102bb7190  sub w25,w24,#0x1
7102bb7194  cmp x26,x13
7102bb7198  csel w7,w25,w7,hi
7102bb719c  csinc w19,w19,w24,hi
7102bb71a0  cmp w19,w7
7102bb71a4  b.le 0x7102bb716c
7102bb71a8  b 0x7102bb71bc
7102bb71ac  ldrsw x7,[x25, #0x4]
7102bb71b0  tbnz w7,#0x1f,0x7102bb71bc
7102bb71b4  add x7,x5,x7
7102bb71b8  b 0x7102bb71c0
7102bb71bc  mov x7,x4
7102bb71c0  ldrb w19,[x7]
7102bb71c4  mov v18.16B,v6.16B
7102bb71c8  cmp w19,#0x8
7102bb71cc  b.ne 0x7102bb71d4
7102bb71d0  ldur s18,[x7, #0x1]
7102bb71d4  ldr x7,[x21]
7102bb71d8  madd x7,x8,x3,x7
7102bb71dc  str s18,[x7, #0x20]
7102bb71e0  ldrb w7,[x5]
7102bb71e4  cmp w7,#0xc
7102bb71e8  mov x7,x4
7102bb71ec  b.ne 0x7102bb7260
7102bb71f0  ldur w7,[x5, #0x1]
7102bb71f4  subs w7,w7,#0x1
7102bb71f8  b.lt 0x7102bb725c
7102bb71fc  ldursw x22,[x5, #0x5]
7102bb7200  ldp x20,x24,[x6, #0x20]
7102bb7204  mov w19,wzr
7102bb7208  add x22,x24,x22
7102bb720c  add w24,w7,w19
7102bb7210  cmp w24,#0x0
7102bb7214  cinc w24,w24,lt
7102bb7218  asr w24,w24,#0x1
7102bb721c  add x25,x22,w24, SXTW  #0x3
7102bb7220  ldr w26,[x25]
7102bb7224  ldr x26,[x20, x26, LSL #0x3]
7102bb7228  cmp x26,x14
7102bb722c  b.eq 0x7102bb724c
7102bb7230  sub w25,w24,#0x1
7102bb7234  cmp x26,x14
7102bb7238  csel w7,w25,w7,hi
7102bb723c  csinc w19,w19,w24,hi
7102bb7240  cmp w19,w7
7102bb7244  b.le 0x7102bb720c
7102bb7248  b 0x7102bb725c
7102bb724c  ldrsw x7,[x25, #0x4]
7102bb7250  tbnz w7,#0x1f,0x7102bb725c
7102bb7254  add x7,x5,x7
7102bb7258  b 0x7102bb7260
7102bb725c  mov x7,x4
7102bb7260  ldrb w19,[x7]
7102bb7264  mov v18.16B,v7.16B
7102bb7268  cmp w19,#0x8
7102bb726c  b.ne 0x7102bb7274
7102bb7270  ldur s18,[x7, #0x1]
7102bb7274  ldr x7,[x21]
7102bb7278  madd x7,x8,x3,x7
7102bb727c  str s18,[x7, #0x24]
7102bb7280  ldrb w7,[x5]
7102bb7284  cmp w7,#0xc
7102bb7288  mov x7,x4
7102bb728c  b.ne 0x7102bb7300
7102bb7290  ldur w7,[x5, #0x1]
7102bb7294  subs w7,w7,#0x1
7102bb7298  b.lt 0x7102bb72fc
7102bb729c  ldursw x22,[x5, #0x5]
7102bb72a0  ldp x20,x24,[x6, #0x20]
7102bb72a4  mov w19,wzr
7102bb72a8  add x22,x24,x22
7102bb72ac  add w24,w7,w19
7102bb72b0  cmp w24,#0x0
7102bb72b4  cinc w24,w24,lt
7102bb72b8  asr w24,w24,#0x1
7102bb72bc  add x25,x22,w24, SXTW  #0x3
7102bb72c0  ldr w26,[x25]
7102bb72c4  ldr x26,[x20, x26, LSL #0x3]
7102bb72c8  cmp x26,x12
7102bb72cc  b.eq 0x7102bb72ec
7102bb72d0  sub w25,w24,#0x1
7102bb72d4  cmp x26,x12
7102bb72d8  csel w7,w25,w7,hi
7102bb72dc  csinc w19,w19,w24,hi
7102bb72e0  cmp w19,w7
7102bb72e4  b.le 0x7102bb72ac
7102bb72e8  b 0x7102bb72fc
7102bb72ec  ldrsw x7,[x25, #0x4]
7102bb72f0  tbnz w7,#0x1f,0x7102bb72fc
7102bb72f4  add x7,x5,x7
7102bb72f8  b 0x7102bb7300
7102bb72fc  mov x7,x4
7102bb7300  ldrb w19,[x7]
7102bb7304  mov v18.16B,v16.16B
7102bb7308  cmp w19,#0x8
7102bb730c  b.ne 0x7102bb7314
7102bb7310  ldur s18,[x7, #0x1]
7102bb7314  ldr x7,[x21]
7102bb7318  madd x7,x8,x3,x7
7102bb731c  str s18,[x7, #0x28]
7102bb7320  ldrb w7,[x5]
7102bb7324  cmp w7,#0xc
7102bb7328  mov x7,x4
7102bb732c  b.ne 0x7102bb73a0
7102bb7330  ldur w7,[x5, #0x1]
7102bb7334  subs w7,w7,#0x1
7102bb7338  b.lt 0x7102bb739c
7102bb733c  ldursw x22,[x5, #0x5]
7102bb7340  ldp x20,x6,[x6, #0x20]
7102bb7344  mov w19,wzr
7102bb7348  add x6,x6,x22
7102bb734c  add w22,w7,w19
7102bb7350  cmp w22,#0x0
7102bb7354  cinc w22,w22,lt
7102bb7358  asr w22,w22,#0x1
7102bb735c  add x24,x6,w22, SXTW  #0x3
7102bb7360  ldr w25,[x24]
7102bb7364  ldr x25,[x20, x25, LSL #0x3]
7102bb7368  cmp x25,x11
7102bb736c  b.eq 0x7102bb738c
7102bb7370  sub w24,w22,#0x1
7102bb7374  cmp x25,x11
7102bb7378  csel w7,w24,w7,hi
7102bb737c  csinc w19,w19,w22,hi
7102bb7380  cmp w19,w7
7102bb7384  b.le 0x7102bb734c
7102bb7388  b 0x7102bb739c
7102bb738c  ldrsw x6,[x24, #0x4]
7102bb7390  tbnz w6,#0x1f,0x7102bb739c
7102bb7394  add x7,x5,x6
7102bb7398  b 0x7102bb73a0
7102bb739c  mov x7,x4
7102bb73a0  ldrb w5,[x7]
7102bb73a4  mov v18.16B,v17.16B
7102bb73a8  cmp w5,#0x8
7102bb73ac  b.ne 0x7102bb73b4
7102bb73b0  ldur s18,[x7, #0x1]
7102bb73b4  ldr x5,[x21]
7102bb73b8  madd x5,x8,x3,x5
7102bb73bc  add x8,x8,#0x1
7102bb73c0  str s18,[x5, #0x2c]
7102bb73c4  ldrb w5,[x23]
7102bb73c8  sub w6,w5,#0xb
7102bb73cc  cmp w6,#0x1
7102bb73d0  b.hi 0x7102bb73e4
7102bb73d4  ldur w6,[x23, #0x1]
7102bb73d8  cmp x8,w6, SXTW 
7102bb73dc  b.lt 0x7102bb6c04
7102bb73e0  b 0x7102bb73f0
7102bb73e4  mov w6,wzr
7102bb73e8  cmp x8,w6, SXTW 
7102bb73ec  b.lt 0x7102bb6c04
7102bb73f0  ldr x8,[sp, #0x30]
7102bb73f4  ldr x8,[x8]
7102bb73f8  ldrb w9,[x8]
7102bb73fc  cmp w9,#0xc
7102bb7400  b.ne 0x7102bb7490
7102bb7404  ldur w9,[x8, #0x1]
7102bb7408  mov x17,#0x52e1
7102bb740c  movk x17,#0x7374, LSL #16
7102bb7410  movk x17,#0xa, LSL #32
7102bb7414  subs w9,w9,#0x1
7102bb7418  b.lt 0x7102bb74bc
7102bb741c  ldr x11,[sp, #0x18]
7102bb7420  ldr x13,[x11]
7102bb7424  str x13,[sp, #0x20]
7102bb7428  ldursw x12,[x8, #0x5]
7102bb742c  adrp x25,0x7104742000
7102bb7430  add x25,x25,#0xdbb
7102bb7434  ldp x11,x13,[x13, #0x20]
7102bb7438  add x12,x13,x12
7102bb743c  mov x13,#0x7abb
7102bb7440  movk x13,#0xe7d9, LSL #16
7102bb7444  mov w10,wzr
7102bb7448  movk x13,#0xd, LSL #32
7102bb744c  add w14,w9,w10
7102bb7450  cmp w14,#0x0
7102bb7454  cinc w14,w14,lt
7102bb7458  asr w14,w14,#0x1
7102bb745c  add x15,x12,w14, SXTW  #0x3
7102bb7460  ldr w16,[x15]
7102bb7464  ldr x16,[x11, x16, LSL #0x3]
7102bb7468  cmp x16,x13
7102bb746c  b.eq 0x7102bb74ac
7102bb7470  sub w15,w14,#0x1
7102bb7474  cmp x16,x13
7102bb7478  csel w9,w15,w9,hi
7102bb747c  csinc w10,w10,w14,hi
7102bb7480  cmp w10,w9
7102bb7484  b.le 0x7102bb744c
7102bb7488  str xzr,[sp, #0x20]
7102bb748c  b 0x7102bb74c8
7102bb7490  mov x17,#0x52e1
7102bb7494  movk x17,#0x7374, LSL #16
7102bb7498  str xzr,[sp, #0x20]
7102bb749c  adrp x25,0x7104742000
7102bb74a0  add x25,x25,#0xdbb
7102bb74a4  movk x17,#0xa, LSL #32
7102bb74a8  b 0x7102bb74c8
7102bb74ac  ldrsw x9,[x15, #0x4]
7102bb74b0  tbnz w9,#0x1f,0x7102bb74bc
7102bb74b4  add x25,x8,x9
7102bb74b8  b 0x7102bb74c8
7102bb74bc  str xzr,[sp, #0x20]
7102bb74c0  adrp x25,0x7104742000
7102bb74c4  add x25,x25,#0xdbb
7102bb74c8  ldrb w8,[x25]
7102bb74cc  sub w8,w8,#0xb
7102bb74d0  cmp w8,#0x1
7102bb74d4  b.hi 0x7102bb74e0
7102bb74d8  ldur w8,[x25, #0x1]
7102bb74dc  b 0x7102bb74e4
7102bb74e0  mov w8,wzr
7102bb74e4  ldp x22,x19,[x28, #0x138]
7102bb74e8  sxtw x27,w8
7102bb74ec  sub x8,x19,x22
7102bb74f0  mov x2,#0x9e1b
7102bb74f4  movk x2,#0x69ff, LSL #16
7102bb74f8  mov x3,#0xae8d
7102bb74fc  movk x3,#0x1ef8, LSL #16
7102bb7500  movk x2,#0x5, LSL #32
7102bb7504  movk x3,#0x5, LSL #32
7102bb7508  add x21,x28,#0x138
7102bb750c  asr x20,x8,#0x5
7102bb7510  cmp x20,x27
7102bb7514  b.cs 0x7102bb7564
7102bb7518  ldr x8,[x28, #0x148]
7102bb751c  sub x9,x8,x19
7102bb7520  sub x26,x27,x20
7102bb7524  asr x9,x9,#0x5
7102bb7528  cmp x9,x26
7102bb752c  b.cs 0x7102bb75d0
7102bb7530  tbnz w27,#0x1f,0x7102bbde84
7102bb7534  sub x8,x8,x22
7102bb7538  asr x9,x8,#0x5
7102bb753c  orr x10,xzr,#0x3fffffffffffffe
7102bb7540  cmp x9,x10
7102bb7544  b.hi 0x7102bb762c
7102bb7548  asr x8,x8,#0x4
7102bb754c  cmp x8,x27
7102bb7550  csel x28,x27,x8,cc
7102bb7554  cbz x28,0x7102bb7690
7102bb7558  lsr x8,x28,#0x3b
7102bb755c  cbz x8,0x7102bb7630
7102bb7560  b 0x7102bbb008
7102bb7564  b.ls 0x7102bb78b4
7102bb7568  add x20,x22,x27, LSL #0x5
7102bb756c  cmp x20,x19
7102bb7570  b.eq 0x7102bb75c8
7102bb7574  mov x22,x19
7102bb7578  ldrb w8,[x22, #-0x20]!
7102bb757c  tbz w8,#0x0,0x7102bb75bc
7102bb7580  ldur x0,[x19, #-0x10]
7102bb7584  cbz x0,0x7102bb75bc
7102bb7588  bl 0x710392eb40
7102bb758c  mov x3,#0xae8d
7102bb7590  movk x3,#0x1ef8, LSL #16
7102bb7594  mov x2,#0x9e1b
7102bb7598  movk x2,#0x69ff, LSL #16
7102bb759c  mov x30,#0xff37
7102bb75a0  movk x30,#0x87f1, LSL #16
7102bb75a4  mov x17,#0x52e1
7102bb75a8  movk x17,#0x7374, LSL #16
7102bb75ac  movk x3,#0x5, LSL #32
7102bb75b0  movk x2,#0x5, LSL #32
7102bb75b4  movk x30,#0x5, LSL #32
7102bb75b8  movk x17,#0xa, LSL #32
7102bb75bc  cmp x20,x22
7102bb75c0  mov x19,x22
7102bb75c4  b.ne 0x7102bb7578
7102bb75c8  str x20,[x28, #0x140]
7102bb75cc  b 0x7102bb78b4
7102bb75d0  mov x8,x26
7102bb75d4  tbz w26,#0x0,0x7102bb75f0
7102bb75d8  stp xzr,xzr,[x19, #0x10]
7102bb75dc  stp xzr,xzr,[x19]
7102bb75e0  ldr x8,[x28, #0x140]
7102bb75e4  add x19,x8,#0x20
7102bb75e8  sub x8,x26,#0x1
7102bb75ec  str x19,[x28, #0x140]
7102bb75f0  cmp x26,#0x1
7102bb75f4  b.eq 0x7102bb78b4
7102bb75f8  stp xzr,xzr,[x19, #0x10]
7102bb75fc  subs x8,x8,#0x2
7102bb7600  stp xzr,xzr,[x19]
7102bb7604  ldr x9,[x28, #0x140]
7102bb7608  add x10,x9,#0x20
7102bb760c  str x10,[x28, #0x140]
7102bb7610  stp xzr,xzr,[x9, #0x30]
7102bb7614  stp xzr,xzr,[x9, #0x20]
7102bb7618  ldr x9,[x28, #0x140]
7102bb761c  add x19,x9,#0x20
7102bb7620  str x19,[x28, #0x140]
7102bb7624  b.ne 0x7102bb75f8
7102bb7628  b 0x7102bb78b4
7102bb762c  orr x28,xzr,#0x7ffffffffffffff
7102bb7630  lsl x8,x28,#0x5
7102bb7634  cmp x8,#0x0
7102bb7638  csinc x24,x8,xzr,ne
7102bb763c  mov w0,#0x10
7102bb7640  mov x1,x24
7102bb7644  bl 0x710392e290
7102bb7648  mov x23,x0
7102bb764c  cbnz x0,0x7102bb7694
7102bb7650  adrp x8,0x7105332000
7102bb7654  ldr x0,[x8, #0xf00]
7102bb7658  cbz x0,0x7102bb7690
7102bb765c  str wzr,[sp, #0x4c]
7102bb7660  str x24,[sp, #0x38]
7102bb7664  ldr x8,[x0]
7102bb7668  ldr x8,[x8, #0x30]
7102bb766c  add x1,sp,#0x4c
7102bb7670  add x2,sp,#0x38
7102bb7674  blr x8
7102bb7678  tbz w0,#0x0,0x7102bb7690
7102bb767c  mov w0,#0x10
7102bb7680  mov x1,x24
7102bb7684  bl 0x710392e290
7102bb7688  mov x23,x0
7102bb768c  cbnz x0,0x7102bb7694
7102bb7690  mov x23,xzr
7102bb7694  add x24,x23,x20, LSL #0x5
7102bb7698  lsl x2,x26,#0x5
7102bb769c  add x26,x23,x28, LSL #0x5
7102bb76a0  mov x0,x24
7102bb76a4  mov w1,wzr
7102bb76a8  bl 0x71039c02a0
7102bb76ac  add x8,x23,x27, LSL #0x5
7102bb76b0  subs x9,x19,x22
7102bb76b4  b.eq 0x7102bb7ffc
7102bb76b8  sub x10,x9,#0x20
7102bb76bc  ldr x0,[sp, #0x28]
7102bb76c0  mov x30,#0xff37
7102bb76c4  movk x30,#0x87f1, LSL #16
7102bb76c8  lsr x11,x10,#0x5
7102bb76cc  mvn x9,x11
7102bb76d0  add w11,w11,#0x1
7102bb76d4  mov x2,#0x9e1b
7102bb76d8  movk x2,#0x69ff, LSL #16
7102bb76dc  mov x3,#0xae8d
7102bb76e0  movk x3,#0x1ef8, LSL #16
7102bb76e4  ands x11,x11,#0x3
7102bb76e8  movk x30,#0x5, LSL #32
7102bb76ec  movk x2,#0x5, LSL #32
7102bb76f0  movk x3,#0x5, LSL #32
7102bb76f4  b.eq 0x7102bb7744
7102bb76f8  sub x12,x20,x11
7102bb76fc  neg x11,x11
7102bb7700  sub x13,x24,#0x8
7102bb7704  sub x14,x19,#0x20
7102bb7708  mov x15,x11
7102bb770c  ldp x16,x17,[x14]
7102bb7710  ldr x18,[x14, #0x10]
7102bb7714  stp x17,x18,[x13, #-0x10]
7102bb7718  stur x16,[x13, #-0x18]
7102bb771c  ldr w16,[x14, #0x18]
7102bb7720  ldrb w17,[x14, #0x1c]
7102bb7724  adds x15,x15,#0x1
7102bb7728  stp xzr,xzr,[x14, #0x8]
7102bb772c  str xzr,[x14], #-0x20
7102bb7730  strb w17,[x13, #0x4]
7102bb7734  str w16,[x13], #-0x20
7102bb7738  b.ne 0x7102bb770c
7102bb773c  add x24,x23,x12, LSL #0x5
7102bb7740  add x19,x19,x11, LSL #0x5
7102bb7744  mov x17,#0x52e1
7102bb7748  movk x17,#0x7374, LSL #16
7102bb774c  add x9,x20,x9
7102bb7750  cmp x10,#0x60
7102bb7754  movk x17,#0xa, LSL #32
7102bb7758  b.cc 0x7102bb780c
7102bb775c  sub x10,x24,#0x40
7102bb7760  ldp x11,x12,[x19, #-0x20]
7102bb7764  ldur x13,[x19, #-0x10]
7102bb7768  stp x12,x13,[x10, #0x28]
7102bb776c  str x11,[x10, #0x20]
7102bb7770  ldur w11,[x19, #-0x8]
7102bb7774  ldurb w12,[x19, #-0x4]
7102bb7778  stur xzr,[x19, #-0x20]
7102bb777c  stp xzr,xzr,[x19, #-0x18]
7102bb7780  strb w12,[x10, #0x3c]
7102bb7784  str w11,[x10, #0x38]
7102bb7788  ldp x11,x12,[x19, #-0x40]
7102bb778c  ldur x13,[x19, #-0x30]
7102bb7790  stp x12,x13,[x10, #0x8]
7102bb7794  str x11,[x10]
7102bb7798  ldur w11,[x19, #-0x28]
7102bb779c  ldurb w12,[x19, #-0x24]
7102bb77a0  stp xzr,xzr,[x19, #-0x38]
7102bb77a4  stur xzr,[x19, #-0x40]
7102bb77a8  strb w12,[x10, #0x1c]
7102bb77ac  str w11,[x10, #0x18]
7102bb77b0  ldur x13,[x19, #-0x50]
7102bb77b4  ldp x11,x12,[x19, #-0x60]
7102bb77b8  stur x11,[x10, #-0x20]
7102bb77bc  stp x12,x13,[x10, #-0x18]
7102bb77c0  ldur w11,[x19, #-0x48]
7102bb77c4  ldurb w12,[x19, #-0x44]
7102bb77c8  stp xzr,xzr,[x19, #-0x58]
7102bb77cc  stur xzr,[x19, #-0x60]
7102bb77d0  sturb w12,[x10, #-0x4]
7102bb77d4  stur w11,[x10, #-0x8]
7102bb77d8  ldr x11,[x19, #-0x80]!
7102bb77dc  cmp x22,x19
7102bb77e0  ldp x12,x13,[x19, #0x8]
7102bb77e4  stur x11,[x10, #-0x40]
7102bb77e8  stp x12,x13,[x10, #-0x38]
7102bb77ec  ldr w11,[x19, #0x18]
7102bb77f0  ldrb w12,[x19, #0x1c]
7102bb77f4  stp xzr,xzr,[x19, #0x8]
7102bb77f8  str xzr,[x19]
7102bb77fc  sturb w12,[x10, #-0x24]
7102bb7800  stur w11,[x10, #-0x28]
7102bb7804  sub x10,x10,#0x80
7102bb7808  b.ne 0x7102bb7760
7102bb780c  add x10,x23,x9, LSL #0x5
7102bb7810  ldp x22,x9,[x0, #0x138]
7102bb7814  stp x10,x8,[x0, #0x138]
7102bb7818  cmp x9,x22
7102bb781c  str x26,[x0, #0x148]
7102bb7820  b.eq 0x7102bb7878
7102bb7824  mov x19,x9
7102bb7828  ldrb w8,[x19, #-0x20]!
7102bb782c  tbz w8,#0x0,0x7102bb786c
7102bb7830  ldur x0,[x9, #-0x10]
7102bb7834  cbz x0,0x7102bb786c
7102bb7838  bl 0x710392eb40
7102bb783c  mov x3,#0xae8d
7102bb7840  movk x3,#0x1ef8, LSL #16
7102bb7844  mov x2,#0x9e1b
7102bb7848  movk x2,#0x69ff, LSL #16
7102bb784c  mov x30,#0xff37
7102bb7850  movk x30,#0x87f1, LSL #16
7102bb7854  mov x17,#0x52e1
7102bb7858  movk x17,#0x7374, LSL #16
7102bb785c  movk x3,#0x5, LSL #32
7102bb7860  movk x2,#0x5, LSL #32
7102bb7864  movk x30,#0x5, LSL #32
7102bb7868  movk x17,#0xa, LSL #32
7102bb786c  cmp x22,x19
7102bb7870  mov x9,x19
7102bb7874  b.ne 0x7102bb7828
7102bb7878  cbz x22,0x7102bb78b4
7102bb787c  mov x0,x22
7102bb7880  bl 0x710392eb40
7102bb7884  mov x3,#0xae8d
7102bb7888  movk x3,#0x1ef8, LSL #16
7102bb788c  mov x2,#0x9e1b
7102bb7890  movk x2,#0x69ff, LSL #16
7102bb7894  mov x30,#0xff37
7102bb7898  movk x30,#0x87f1, LSL #16
7102bb789c  mov x17,#0x52e1
7102bb78a0  movk x17,#0x7374, LSL #16
7102bb78a4  movk x3,#0x5, LSL #32
7102bb78a8  movk x2,#0x5, LSL #32
7102bb78ac  movk x30,#0x5, LSL #32
7102bb78b0  movk x17,#0xa, LSL #32
7102bb78b4  ldrb w8,[x25]
7102bb78b8  sub w9,w8,#0xb
7102bb78bc  cmp w9,#0x1
7102bb78c0  b.hi 0x7102bb7c0c
7102bb78c4  ldur w9,[x25, #0x1]
7102bb78c8  cmp w9,#0x1
7102bb78cc  b.lt 0x7102bb7c0c
7102bb78d0  mov x22,#0xc949
7102bb78d4  movk x22,#0xef94, LSL #16
7102bb78d8  mov x24,#0xd62e
7102bb78dc  movk x24,#0xbe45, LSL #16
7102bb78e0  mov x19,xzr
7102bb78e4  adrp x27,0x7104742000
7102bb78e8  add x27,x27,#0xdbb
7102bb78ec  movk x22,#0x7, LSL #32
7102bb78f0  movk x24,#0x5, LSL #32
7102bb78f4  adrp x26,0x7104518000
7102bb78f8  add x26,x26,#0x308
7102bb78fc  add x9,x25,#0x5
7102bb7900  str x9,[sp, #0x10]
7102bb7904  adrp x28,0x7104518000
7102bb7908  add x28,x28,#0x2ec
7102bb790c  mov x23,xzr
7102bb7910  tbnz w19,#0x1f,0x7102bb7948
7102bb7914  and w8,w8,#0xff
7102bb7918  cmp w8,#0xb
7102bb791c  mov x20,x27
7102bb7920  b.ne 0x7102bb794c
7102bb7924  ldur w8,[x25, #0x1]
7102bb7928  cmp w8,w19
7102bb792c  b.le 0x7102bb7944
7102bb7930  ldr x8,[sp, #0x10]
7102bb7934  ldrsw x8,[x8, w19, SXTW #0x2]
7102bb7938  ldr x23,[sp, #0x20]
7102bb793c  add x20,x25,x8
7102bb7940  b 0x7102bb794c
7102bb7944  mov x23,xzr
7102bb7948  mov x20,x27
7102bb794c  ldrb w8,[x20]
7102bb7950  cmp w8,#0xc
7102bb7954  b.ne 0x7102bb79c8
7102bb7958  ldur w8,[x20, #0x1]
7102bb795c  subs w8,w8,#0x1
7102bb7960  b.lt 0x7102bb79c8
7102bb7964  ldursw x11,[x20, #0x5]
7102bb7968  ldp x10,x12,[x23, #0x20]
7102bb796c  mov w9,wzr
7102bb7970  add x11,x12,x11
7102bb7974  add w12,w8,w9
7102bb7978  cmp w12,#0x0
7102bb797c  cinc w12,w12,lt
7102bb7980  asr w12,w12,#0x1
7102bb7984  add x13,x11,w12, SXTW  #0x3
7102bb7988  ldr w14,[x13]
7102bb798c  ldr x14,[x10, x14, LSL #0x3]
7102bb7990  cmp x14,x17
7102bb7994  b.eq 0x7102bb79b4
7102bb7998  sub w13,w12,#0x1
7102bb799c  cmp x14,x17
7102bb79a0  csel w8,w13,w8,hi
7102bb79a4  csinc w9,w9,w12,hi
7102bb79a8  cmp w9,w8
7102bb79ac  b.le 0x7102bb7974
7102bb79b0  b 0x7102bb79c8
7102bb79b4  ldrsw x8,[x13, #0x4]
7102bb79b8  tbnz w8,#0x1f,0x7102bb79c8
7102bb79bc  add x9,x20,x8
7102bb79c0  mov x8,x23
7102bb79c4  b 0x7102bb79d0
7102bb79c8  mov x8,xzr
7102bb79cc  mov x9,x27
7102bb79d0  ldrb w10,[x9]
7102bb79d4  cmp w10,#0xa
7102bb79d8  adrp x1,0x710427e000
7102bb79dc  add x1,x1,#0xc43
7102bb79e0  b.ne 0x7102bb79f0
7102bb79e4  ldursw x9,[x9, #0x1]
7102bb79e8  ldr x8,[x8, #0x28]
7102bb79ec  add x1,x8,x9
7102bb79f0  ldr x8,[x21]
7102bb79f4  add x0,x8,x19, LSL #0x5
7102bb79f8  bl 0x71039c2720
7102bb79fc  ldrb w8,[x20]
7102bb7a00  cmp w8,#0xc
7102bb7a04  mov x8,x27
7102bb7a08  b.ne 0x7102bb7a7c
7102bb7a0c  ldur w8,[x20, #0x1]
7102bb7a10  subs w8,w8,#0x1
7102bb7a14  b.lt 0x7102bb7a78
7102bb7a18  ldursw x11,[x20, #0x5]
7102bb7a1c  ldp x10,x12,[x23, #0x20]
7102bb7a20  mov w9,wzr
7102bb7a24  add x11,x12,x11
7102bb7a28  add w12,w8,w9
7102bb7a2c  cmp w12,#0x0
7102bb7a30  cinc w12,w12,lt
7102bb7a34  asr w12,w12,#0x1
7102bb7a38  add x13,x11,w12, SXTW  #0x3
7102bb7a3c  ldr w14,[x13]
7102bb7a40  ldr x14,[x10, x14, LSL #0x3]
7102bb7a44  cmp x14,x24
7102bb7a48  b.eq 0x7102bb7a68
7102bb7a4c  sub w13,w12,#0x1
7102bb7a50  cmp x14,x24
7102bb7a54  csel w8,w13,w8,hi
7102bb7a58  csinc w9,w9,w12,hi
7102bb7a5c  cmp w9,w8
7102bb7a60  b.le 0x7102bb7a28
7102bb7a64  b 0x7102bb7a78
7102bb7a68  ldrsw x8,[x13, #0x4]
7102bb7a6c  tbnz w8,#0x1f,0x7102bb7a78
7102bb7a70  add x8,x20,x8
7102bb7a74  b 0x7102bb7a7c
7102bb7a78  mov x8,x27
7102bb7a7c  ldrb w9,[x8]
7102bb7a80  sub w9,w9,#0x1
7102bb7a84  mov x17,#0x52e1
7102bb7a88  movk x17,#0x7374, LSL #16
7102bb7a8c  mov x30,#0xff37
7102bb7a90  movk x30,#0x87f1, LSL #16
7102bb7a94  mov x2,#0x9e1b
7102bb7a98  movk x2,#0x69ff, LSL #16
7102bb7a9c  mov x3,#0xae8d
7102bb7aa0  movk x3,#0x1ef8, LSL #16
7102bb7aa4  movk x17,#0xa, LSL #32
7102bb7aa8  movk x30,#0x5, LSL #32
7102bb7aac  movk x3,#0x5, LSL #32
7102bb7ab0  cmp w9,#0x6
7102bb7ab4  movk x2,#0x5, LSL #32
7102bb7ab8  b.hi 0x7102bb7ae0
7102bb7abc  ldrsw x9,[x28, x9, LSL #0x2]
7102bb7ac0  add x9,x9,x28
7102bb7ac4  br x9
7102bb7ac8  ldrb w8,[x8, #0x1]
7102bb7acc  b 0x7102bb7af4
7102bb7ad0  ldur w8,[x8, #0x1]
7102bb7ad4  b 0x7102bb7af4
7102bb7ad8  ldursh w8,[x8, #0x1]
7102bb7adc  b 0x7102bb7af4
7102bb7ae0  mov w8,#0x2
7102bb7ae4  b 0x7102bb7af4
7102bb7ae8  ldrsb w8,[x8, #0x1]
7102bb7aec  b 0x7102bb7af4
7102bb7af0  ldurh w8,[x8, #0x1]
7102bb7af4  ldr x9,[x21]
7102bb7af8  add x9,x9,x19, LSL #0x5
7102bb7afc  str w8,[x9, #0x18]
7102bb7b00  ldrb w8,[x20]
7102bb7b04  cmp w8,#0xc
7102bb7b08  mov x8,x27
7102bb7b0c  b.ne 0x7102bb7b80
7102bb7b10  ldur w8,[x20, #0x1]
7102bb7b14  subs w8,w8,#0x1
7102bb7b18  b.lt 0x7102bb7b7c
7102bb7b1c  ldursw x11,[x20, #0x5]
7102bb7b20  ldp x10,x12,[x23, #0x20]
7102bb7b24  mov w9,wzr
7102bb7b28  add x11,x12,x11
7102bb7b2c  add w12,w8,w9
7102bb7b30  cmp w12,#0x0
7102bb7b34  cinc w12,w12,lt
7102bb7b38  asr w12,w12,#0x1
7102bb7b3c  add x13,x11,w12, SXTW  #0x3
7102bb7b40  ldr w14,[x13]
7102bb7b44  ldr x14,[x10, x14, LSL #0x3]
7102bb7b48  cmp x14,x22
7102bb7b4c  b.eq 0x7102bb7b6c
7102bb7b50  sub w13,w12,#0x1
7102bb7b54  cmp x14,x22
7102bb7b58  csel w8,w13,w8,hi
7102bb7b5c  csinc w9,w9,w12,hi
7102bb7b60  cmp w9,w8
7102bb7b64  b.le 0x7102bb7b2c
7102bb7b68  b 0x7102bb7b7c
7102bb7b6c  ldrsw x8,[x13, #0x4]
7102bb7b70  tbnz w8,#0x1f,0x7102bb7b7c
7102bb7b74  add x8,x20,x8
7102bb7b78  b 0x7102bb7b80
7102bb7b7c  mov x8,x27
7102bb7b80  ldrb w9,[x8]
7102bb7b84  sub w9,w9,#0x1
7102bb7b88  cmp w9,#0x6
7102bb7b8c  b.hi 0x7102bb7bb4
7102bb7b90  ldrsw x9,[x26, x9, LSL #0x2]
7102bb7b94  add x9,x9,x26
7102bb7b98  br x9
7102bb7b9c  ldrb w8,[x8, #0x1]
7102bb7ba0  b 0x7102bb7bc8
7102bb7ba4  ldur w8,[x8, #0x1]
7102bb7ba8  b 0x7102bb7bc8
7102bb7bac  ldursh w8,[x8, #0x1]
7102bb7bb0  b 0x7102bb7bc8
7102bb7bb4  mov w8,#0x1
7102bb7bb8  b 0x7102bb7bc8
7102bb7bbc  ldrsb w8,[x8, #0x1]
7102bb7bc0  b 0x7102bb7bc8
7102bb7bc4  ldurh w8,[x8, #0x1]
7102bb7bc8  ldr x9,[x21]
7102bb7bcc  cmp w8,#0x0
7102bb7bd0  cset w8,ne
7102bb7bd4  add x9,x9,x19, LSL #0x5
7102bb7bd8  add x19,x19,#0x1
7102bb7bdc  strb w8,[x9, #0x1c]
7102bb7be0  ldrb w8,[x25]
7102bb7be4  sub w9,w8,#0xb
7102bb7be8  cmp w9,#0x1
7102bb7bec  b.hi 0x7102bb7c00
7102bb7bf0  ldur w9,[x25, #0x1]
7102bb7bf4  cmp x19,w9, SXTW 
7102bb7bf8  b.lt 0x7102bb790c
7102bb7bfc  b 0x7102bb7c0c
7102bb7c00  mov w9,wzr
7102bb7c04  cmp x19,w9, SXTW 
7102bb7c08  b.lt 0x7102bb790c
7102bb7c0c  ldr x8,[sp, #0x30]
7102bb7c10  ldr x8,[x8]
7102bb7c14  ldrb w9,[x8]
7102bb7c18  cmp w9,#0xc
7102bb7c1c  b.ne 0x7102bb7cac
7102bb7c20  ldur w9,[x8, #0x1]
7102bb7c24  orr x17,xzr,#-0x3333333333333334
7102bb7c28  movk x17,#0xcccd
7102bb7c2c  subs w9,w9,#0x1
7102bb7c30  b.lt 0x7102bb7cc8
7102bb7c34  ldr x11,[sp, #0x18]
7102bb7c38  ldr x13,[x11]
7102bb7c3c  str x13,[sp, #0x20]
7102bb7c40  ldursw x12,[x8, #0x5]
7102bb7c44  adrp x25,0x7104742000
7102bb7c48  add x25,x25,#0xdbb
7102bb7c4c  ldp x11,x13,[x13, #0x20]
7102bb7c50  add x12,x13,x12
7102bb7c54  mov x13,#0x4e5a
7102bb7c58  movk x13,#0xbc5, LSL #16
7102bb7c5c  mov w10,wzr
7102bb7c60  movk x13,#0xa, LSL #32
7102bb7c64  add w14,w9,w10
7102bb7c68  cmp w14,#0x0
7102bb7c6c  cinc w14,w14,lt
7102bb7c70  asr w14,w14,#0x1
7102bb7c74  add x15,x12,w14, SXTW  #0x3
7102bb7c78  ldr w16,[x15]
7102bb7c7c  ldr x16,[x11, x16, LSL #0x3]
7102bb7c80  cmp x16,x13
7102bb7c84  b.eq 0x7102bb7cd0
7102bb7c88  sub w15,w14,#0x1
7102bb7c8c  cmp x16,x13
7102bb7c90  csel w9,w15,w9,hi
7102bb7c94  csinc w10,w10,w14,hi
7102bb7c98  cmp w10,w9
7102bb7c9c  b.le 0x7102bb7c64
7102bb7ca0  ldr x28,[sp, #0x28]
7102bb7ca4  str xzr,[sp, #0x20]
7102bb7ca8  b 0x7102bb7cf0
7102bb7cac  ldr x28,[sp, #0x28]
7102bb7cb0  orr x17,xzr,#-0x3333333333333334
7102bb7cb4  str xzr,[sp, #0x20]
7102bb7cb8  adrp x25,0x7104742000
7102bb7cbc  add x25,x25,#0xdbb
7102bb7cc0  movk x17,#0xcccd
7102bb7cc4  b 0x7102bb7cf0
7102bb7cc8  ldr x28,[sp, #0x28]
7102bb7ccc  b 0x7102bb7ce4
7102bb7cd0  ldrsw x9,[x15, #0x4]
7102bb7cd4  ldr x28,[sp, #0x28]
7102bb7cd8  tbnz w9,#0x1f,0x7102bb7ce4
7102bb7cdc  add x25,x8,x9
7102bb7ce0  b 0x7102bb7cf0
7102bb7ce4  str xzr,[sp, #0x20]
7102bb7ce8  adrp x25,0x7104742000
7102bb7cec  add x25,x25,#0xdbb
7102bb7cf0  ldrb w8,[x25]
7102bb7cf4  sub w8,w8,#0xb
7102bb7cf8  cmp w8,#0x1
7102bb7cfc  b.hi 0x7102bb7d08
7102bb7d00  ldur w8,[x25, #0x1]
7102bb7d04  b 0x7102bb7d0c
7102bb7d08  mov w8,wzr
7102bb7d0c  ldp x22,x19,[x28, #0x150]
7102bb7d10  sxtw x20,w8
7102bb7d14  sub x8,x19,x22
7102bb7d18  asr x8,x8,#0x3
7102bb7d1c  mul x27,x8,x17
7102bb7d20  add x21,x28,#0x150
7102bb7d24  cmp x27,x20
7102bb7d28  b.cs 0x7102bb7ef8
7102bb7d2c  ldr x8,[x28, #0x160]
7102bb7d30  sub x9,x8,x19
7102bb7d34  asr x9,x9,#0x3
7102bb7d38  mul x9,x9,x17
7102bb7d3c  sub x26,x20,x27
7102bb7d40  cmp x9,x26
7102bb7d44  b.cs 0x7102bb7f74
7102bb7d48  tbnz w20,#0x1f,0x7102bbde84
7102bb7d4c  sub x8,x8,x22
7102bb7d50  orr x9,xzr,#-0x3333333333333334
7102bb7d54  asr x8,x8,#0x3
7102bb7d58  movk x9,#0xcccd
7102bb7d5c  mul x8,x8,x9
7102bb7d60  orr x9,xzr,#0x3333333333333333
7102bb7d64  movk x9,#0x333, LSL #48
7102bb7d68  cmp x8,x9
7102bb7d6c  orr x9,xzr,#0x6666666666666666
7102bb7d70  movk x9,#0x666, LSL #48
7102bb7d74  b.cs 0x7102bb7d88
7102bb7d78  lsl x8,x8,#0x1
7102bb7d7c  cmp x8,x20
7102bb7d80  csel x9,x20,x8,cc
7102bb7d84  cbz x9,0x7102bbde78
7102bb7d88  add x8,x9,x9, LSL #0x2
7102bb7d8c  lsl x8,x8,#0x3
7102bb7d90  cmp x8,#0x0
7102bb7d94  csinc x23,x8,xzr,ne
7102bb7d98  mov w0,#0x10
7102bb7d9c  mov x1,x23
7102bb7da0  mov x28,x9
7102bb7da4  bl 0x710392e290
7102bb7da8  mov x24,x0
7102bb7dac  cbnz x0,0x7102bb7df4
7102bb7db0  adrp x8,0x7105332000
7102bb7db4  ldr x0,[x8, #0xf00]
7102bb7db8  cbz x0,0x7102bb7df0
7102bb7dbc  str wzr,[sp, #0x4c]
7102bb7dc0  str x23,[sp, #0x38]
7102bb7dc4  ldr x8,[x0]
7102bb7dc8  ldr x8,[x8, #0x30]
7102bb7dcc  add x1,sp,#0x4c
7102bb7dd0  add x2,sp,#0x38
7102bb7dd4  blr x8
7102bb7dd8  tbz w0,#0x0,0x7102bb7df0
7102bb7ddc  mov w0,#0x10
7102bb7de0  mov x1,x23
7102bb7de4  bl 0x710392e290
7102bb7de8  mov x24,x0
7102bb7dec  cbnz x0,0x7102bb7df4
7102bb7df0  mov x24,xzr
7102bb7df4  mov x8,x28
7102bb7df8  mov w28,#0x28
7102bb7dfc  madd x23,x27,x28,x24
7102bb7e00  madd x27,x8,x28,x24
7102bb7e04  add x8,x26,x26, LSL #0x2
7102bb7e08  lsl x2,x8,#0x3
7102bb7e0c  mov x0,x23
7102bb7e10  mov w1,wzr
7102bb7e14  bl 0x71039c02a0
7102bb7e18  madd x8,x20,x28,x24
7102bb7e1c  cmp x19,x22
7102bb7e20  b.eq 0x7102bb8040
7102bb7e24  ldr x28,[sp, #0x28]
7102bb7e28  ldr x9,[x19, #-0x28]!
7102bb7e2c  cmp x22,x19
7102bb7e30  ldp x10,x11,[x19, #0x8]
7102bb7e34  str x9,[x23, #-0x28]!
7102bb7e38  stp x10,x11,[x23, #0x8]
7102bb7e3c  ldr x9,[x19, #0x18]
7102bb7e40  ldr w10,[x19, #0x20]
7102bb7e44  stp xzr,xzr,[x19, #0x8]
7102bb7e48  str xzr,[x19]
7102bb7e4c  str w10,[x23, #0x20]
7102bb7e50  str x9,[x23, #0x18]
7102bb7e54  b.ne 0x7102bb7e28
7102bb7e58  ldp x22,x9,[x28, #0x150]
7102bb7e5c  mov x15,#0x52e1
7102bb7e60  movk x15,#0x7374, LSL #16
7102bb7e64  mov x30,#0xff37
7102bb7e68  movk x30,#0x87f1, LSL #16
7102bb7e6c  mov x2,#0x9e1b
7102bb7e70  movk x2,#0x69ff, LSL #16
7102bb7e74  mov x3,#0xae8d
7102bb7e78  movk x3,#0x1ef8, LSL #16
7102bb7e7c  movk x15,#0xa, LSL #32
7102bb7e80  str x27,[x28, #0x160]
7102bb7e84  cmp x9,x22
7102bb7e88  movk x30,#0x5, LSL #32
7102bb7e8c  movk x2,#0x5, LSL #32
7102bb7e90  movk x3,#0x5, LSL #32
7102bb7e94  stp x23,x8,[x28, #0x150]
7102bb7e98  b.eq 0x7102bb7ef0
7102bb7e9c  mov x19,x9
7102bb7ea0  ldrb w8,[x19, #-0x28]!
7102bb7ea4  tbz w8,#0x0,0x7102bb7ee4
7102bb7ea8  ldur x0,[x9, #-0x18]
7102bb7eac  cbz x0,0x7102bb7ee4
7102bb7eb0  bl 0x710392eb40
7102bb7eb4  mov x3,#0xae8d
7102bb7eb8  movk x3,#0x1ef8, LSL #16
7102bb7ebc  mov x2,#0x9e1b
7102bb7ec0  movk x2,#0x69ff, LSL #16
7102bb7ec4  mov x30,#0xff37
7102bb7ec8  movk x30,#0x87f1, LSL #16
7102bb7ecc  mov x15,#0x52e1
7102bb7ed0  movk x15,#0x7374, LSL #16
7102bb7ed4  movk x3,#0x5, LSL #32
7102bb7ed8  movk x2,#0x5, LSL #32
7102bb7edc  movk x30,#0x5, LSL #32
7102bb7ee0  movk x15,#0xa, LSL #32
7102bb7ee4  cmp x22,x19
7102bb7ee8  mov x9,x19
7102bb7eec  b.ne 0x7102bb7ea0
7102bb7ef0  cbnz x22,0x7102bb8080
7102bb7ef4  b 0x7102bb80b8
7102bb7ef8  mov x15,#0x52e1
7102bb7efc  movk x15,#0x7374, LSL #16
7102bb7f00  movk x15,#0xa, LSL #32
7102bb7f04  b.ls 0x7102bb80b8
7102bb7f08  mov w8,#0x28
7102bb7f0c  madd x20,x20,x8,x22
7102bb7f10  cmp x20,x19
7102bb7f14  b.eq 0x7102bb7f6c
7102bb7f18  mov x22,x19
7102bb7f1c  ldrb w8,[x22, #-0x28]!
7102bb7f20  tbz w8,#0x0,0x7102bb7f60
7102bb7f24  ldur x0,[x19, #-0x18]
7102bb7f28  cbz x0,0x7102bb7f60
7102bb7f2c  bl 0x710392eb40
7102bb7f30  mov x3,#0xae8d
7102bb7f34  movk x3,#0x1ef8, LSL #16
7102bb7f38  mov x2,#0x9e1b
7102bb7f3c  movk x2,#0x69ff, LSL #16
7102bb7f40  mov x30,#0xff37
7102bb7f44  movk x30,#0x87f1, LSL #16
7102bb7f48  mov x15,#0x52e1
7102bb7f4c  movk x15,#0x7374, LSL #16
7102bb7f50  movk x3,#0x5, LSL #32
7102bb7f54  movk x2,#0x5, LSL #32
7102bb7f58  movk x30,#0x5, LSL #32
7102bb7f5c  movk x15,#0xa, LSL #32
7102bb7f60  cmp x20,x22
7102bb7f64  mov x19,x22
7102bb7f68  b.ne 0x7102bb7f1c
7102bb7f6c  str x20,[x28, #0x158]
7102bb7f70  b 0x7102bb80b8
7102bb7f74  mov x15,#0x52e1
7102bb7f78  movk x15,#0x7374, LSL #16
7102bb7f7c  mov x8,x26
7102bb7f80  movk x15,#0xa, LSL #32
7102bb7f84  tbz w26,#0x0,0x7102bb7fa4
7102bb7f88  stp xzr,xzr,[x19, #0x18]
7102bb7f8c  str xzr,[x19]
7102bb7f90  stp xzr,xzr,[x19, #0x8]
7102bb7f94  ldr x8,[x28, #0x158]
7102bb7f98  add x19,x8,#0x28
7102bb7f9c  sub x8,x26,#0x1
7102bb7fa0  str x19,[x28, #0x158]
7102bb7fa4  cmp x26,#0x1
7102bb7fa8  b.eq 0x7102bb80b8
7102bb7fac  stp xzr,xzr,[x19, #0x18]
7102bb7fb0  subs x8,x8,#0x2
7102bb7fb4  stp xzr,xzr,[x19, #0x8]
7102bb7fb8  str xzr,[x19]
7102bb7fbc  ldr x9,[x28, #0x158]
7102bb7fc0  add x10,x9,#0x28
7102bb7fc4  str x10,[x28, #0x158]
7102bb7fc8  stp xzr,xzr,[x9, #0x40]
7102bb7fcc  str xzr,[x9, #0x28]
7102bb7fd0  stp xzr,xzr,[x9, #0x30]
7102bb7fd4  ldr x9,[x28, #0x158]
7102bb7fd8  add x19,x9,#0x28
7102bb7fdc  str x19,[x28, #0x158]
7102bb7fe0  b.ne 0x7102bb7fac
7102bb7fe4  b 0x7102bb80b8
7102bb7fe8  ldr x9,[sp, #0x28]
7102bb7fec  stp x23,x8,[x9, #0x38]
7102bb7ff0  str x27,[x9, #0x48]
7102bb7ff4  cbnz x22,0x7102bb41e4
7102bb7ff8  b 0x7102bb41ec
7102bb7ffc  ldr x9,[sp, #0x28]
7102bb8000  mov x17,#0x52e1
7102bb8004  movk x17,#0x7374, LSL #16
7102bb8008  mov x30,#0xff37
7102bb800c  movk x30,#0x87f1, LSL #16
7102bb8010  mov x2,#0x9e1b
7102bb8014  movk x2,#0x69ff, LSL #16
7102bb8018  mov x3,#0xae8d
7102bb801c  movk x3,#0x1ef8, LSL #16
7102bb8020  stp x24,x8,[x9, #0x138]
7102bb8024  str x26,[x9, #0x148]
7102bb8028  movk x17,#0xa, LSL #32
7102bb802c  movk x30,#0x5, LSL #32
7102bb8030  movk x2,#0x5, LSL #32
7102bb8034  movk x3,#0x5, LSL #32
7102bb8038  cbnz x22,0x7102bb787c
7102bb803c  b 0x7102bb78b4
7102bb8040  ldr x28,[sp, #0x28]
7102bb8044  mov x15,#0x52e1
7102bb8048  movk x15,#0x7374, LSL #16
7102bb804c  mov x30,#0xff37
7102bb8050  movk x30,#0x87f1, LSL #16
7102bb8054  mov x2,#0x9e1b
7102bb8058  movk x2,#0x69ff, LSL #16
7102bb805c  mov x3,#0xae8d
7102bb8060  movk x3,#0x1ef8, LSL #16
7102bb8064  stp x23,x8,[x28, #0x150]
7102bb8068  str x27,[x28, #0x160]
7102bb806c  movk x15,#0xa, LSL #32
7102bb8070  movk x30,#0x5, LSL #32
7102bb8074  movk x2,#0x5, LSL #32
7102bb8078  movk x3,#0x5, LSL #32
7102bb807c  cbz x22,0x7102bb80b8
7102bb8080  mov x0,x22
7102bb8084  bl 0x710392eb40
7102bb8088  mov x3,#0xae8d
7102bb808c  movk x3,#0x1ef8, LSL #16
7102bb8090  mov x2,#0x9e1b
7102bb8094  movk x2,#0x69ff, LSL #16
7102bb8098  mov x30,#0xff37
7102bb809c  movk x30,#0x87f1, LSL #16
7102bb80a0  mov x15,#0x52e1
7102bb80a4  movk x15,#0x7374, LSL #16
7102bb80a8  movk x3,#0x5, LSL #32
7102bb80ac  movk x2,#0x5, LSL #32
7102bb80b0  movk x30,#0x5, LSL #32
7102bb80b4  movk x15,#0xa, LSL #32
7102bb80b8  ldrb w8,[x25]
7102bb80bc  sub w9,w8,#0xb
7102bb80c0  cmp w9,#0x1
7102bb80c4  b.hi 0x7102bb842c
7102bb80c8  ldur w9,[x25, #0x1]
7102bb80cc  cmp w9,#0x1
7102bb80d0  b.lt 0x7102bb842c
7102bb80d4  adrp x9,0x7104473000
7102bb80d8  ldr s8,[x9, #0x5fc]
7102bb80dc  adrp x9,0x7104471000
7102bb80e0  ldr s10,[x9, #0xba4]
7102bb80e4  fmov s9,wzr
7102bb80e8  mov x19,xzr
7102bb80ec  add x20,x25,#0x5
7102bb80f0  mov w22,#0x28
7102bb80f4  adrp x23,0x7104742000
7102bb80f8  add x23,x23,#0xdbb
7102bb80fc  adrp x24,0x710427e000
7102bb8100  add x24,x24,#0xc43
7102bb8104  mov x27,xzr
7102bb8108  tbnz w19,#0x1f,0x7102bb813c
7102bb810c  and w8,w8,#0xff
7102bb8110  cmp w8,#0xb
7102bb8114  mov x26,x23
7102bb8118  b.ne 0x7102bb8140
7102bb811c  ldur w8,[x25, #0x1]
7102bb8120  cmp w8,w19
7102bb8124  b.le 0x7102bb8138
7102bb8128  ldrsw x8,[x20, w19, SXTW #0x2]
7102bb812c  ldr x27,[sp, #0x20]
7102bb8130  add x26,x25,x8
7102bb8134  b 0x7102bb8140
7102bb8138  mov x27,xzr
7102bb813c  mov x26,x23
7102bb8140  ldrb w8,[x26]
7102bb8144  cmp w8,#0xc
7102bb8148  b.ne 0x7102bb81bc
7102bb814c  ldur w8,[x26, #0x1]
7102bb8150  subs w8,w8,#0x1
7102bb8154  b.lt 0x7102bb81bc
7102bb8158  ldursw x11,[x26, #0x5]
7102bb815c  ldp x10,x12,[x27, #0x20]
7102bb8160  mov w9,wzr
7102bb8164  add x11,x12,x11
7102bb8168  add w12,w8,w9
7102bb816c  cmp w12,#0x0
7102bb8170  cinc w12,w12,lt
7102bb8174  asr w12,w12,#0x1
7102bb8178  add x13,x11,w12, SXTW  #0x3
7102bb817c  ldr w14,[x13]
7102bb8180  ldr x14,[x10, x14, LSL #0x3]
7102bb8184  cmp x14,x15
7102bb8188  b.eq 0x7102bb81a8
7102bb818c  sub w13,w12,#0x1
7102bb8190  cmp x14,x15
7102bb8194  csel w8,w13,w8,hi
7102bb8198  csinc w9,w9,w12,hi
7102bb819c  cmp w9,w8
7102bb81a0  b.le 0x7102bb8168
7102bb81a4  b 0x7102bb81bc
7102bb81a8  ldrsw x8,[x13, #0x4]
7102bb81ac  tbnz w8,#0x1f,0x7102bb81bc
7102bb81b0  add x9,x26,x8
7102bb81b4  mov x8,x27
7102bb81b8  b 0x7102bb81c4
7102bb81bc  mov x8,xzr
7102bb81c0  mov x9,x23
7102bb81c4  ldrb w10,[x9]
7102bb81c8  cmp w10,#0xa
7102bb81cc  mov x1,x24
7102bb81d0  b.ne 0x7102bb81e0
7102bb81d4  ldursw x9,[x9, #0x1]
7102bb81d8  ldr x8,[x8, #0x28]
7102bb81dc  add x1,x8,x9
7102bb81e0  ldr x8,[x21]
7102bb81e4  madd x0,x19,x22,x8
7102bb81e8  bl 0x71039c2720
7102bb81ec  ldrb w8,[x26]
7102bb81f0  mov x30,#0xff37
7102bb81f4  movk x30,#0x87f1, LSL #16
7102bb81f8  mov x2,#0x9e1b
7102bb81fc  movk x2,#0x69ff, LSL #16
7102bb8200  mov x3,#0xae8d
7102bb8204  movk x3,#0x1ef8, LSL #16
7102bb8208  movk x30,#0x5, LSL #32
7102bb820c  movk x3,#0x5, LSL #32
7102bb8210  cmp w8,#0xc
7102bb8214  mov x8,x23
7102bb8218  movk x2,#0x5, LSL #32
7102bb821c  b.ne 0x7102bb8290
7102bb8220  ldur w8,[x26, #0x1]
7102bb8224  subs w8,w8,#0x1
7102bb8228  b.lt 0x7102bb828c
7102bb822c  ldursw x11,[x26, #0x5]
7102bb8230  ldp x10,x12,[x27, #0x20]
7102bb8234  mov w9,wzr
7102bb8238  add x11,x12,x11
7102bb823c  add w12,w8,w9
7102bb8240  cmp w12,#0x0
7102bb8244  cinc w12,w12,lt
7102bb8248  asr w12,w12,#0x1
7102bb824c  add x13,x11,w12, SXTW  #0x3
7102bb8250  ldr w14,[x13]
7102bb8254  ldr x14,[x10, x14, LSL #0x3]
7102bb8258  cmp x14,x2
7102bb825c  b.eq 0x7102bb827c
7102bb8260  sub w13,w12,#0x1
7102bb8264  cmp x14,x2
7102bb8268  csel w8,w13,w8,hi
7102bb826c  csinc w9,w9,w12,hi
7102bb8270  cmp w9,w8
7102bb8274  b.le 0x7102bb823c
7102bb8278  b 0x7102bb828c
7102bb827c  ldrsw x8,[x13, #0x4]
7102bb8280  tbnz w8,#0x1f,0x7102bb828c
7102bb8284  add x8,x26,x8
7102bb8288  b 0x7102bb8290
7102bb828c  mov x8,x23
7102bb8290  ldrb w9,[x8]
7102bb8294  mov v0.16B,v8.16B
7102bb8298  cmp w9,#0x8
7102bb829c  b.ne 0x7102bb82a4
7102bb82a0  ldur s0,[x8, #0x1]
7102bb82a4  ldr x8,[x21]
7102bb82a8  madd x8,x19,x22,x8
7102bb82ac  str s0,[x8, #0x18]
7102bb82b0  ldrb w8,[x26]
7102bb82b4  mov x15,#0x52e1
7102bb82b8  movk x15,#0x7374, LSL #16
7102bb82bc  movk x15,#0xa, LSL #32
7102bb82c0  cmp w8,#0xc
7102bb82c4  mov x8,x23
7102bb82c8  b.ne 0x7102bb833c
7102bb82cc  ldur w8,[x26, #0x1]
7102bb82d0  subs w8,w8,#0x1
7102bb82d4  b.lt 0x7102bb8338
7102bb82d8  ldursw x11,[x26, #0x5]
7102bb82dc  ldp x10,x12,[x27, #0x20]
7102bb82e0  mov w9,wzr
7102bb82e4  add x11,x12,x11
7102bb82e8  add w12,w8,w9
7102bb82ec  cmp w12,#0x0
7102bb82f0  cinc w12,w12,lt
7102bb82f4  asr w12,w12,#0x1
7102bb82f8  add x13,x11,w12, SXTW  #0x3
7102bb82fc  ldr w14,[x13]
7102bb8300  ldr x14,[x10, x14, LSL #0x3]
7102bb8304  cmp x14,x3
7102bb8308  b.eq 0x7102bb8328
7102bb830c  sub w13,w12,#0x1
7102bb8310  cmp x14,x3
7102bb8314  csel w8,w13,w8,hi
7102bb8318  csinc w9,w9,w12,hi
7102bb831c  cmp w9,w8
7102bb8320  b.le 0x7102bb82e8
7102bb8324  b 0x7102bb8338
7102bb8328  ldrsw x8,[x13, #0x4]
7102bb832c  tbnz w8,#0x1f,0x7102bb8338
7102bb8330  add x8,x26,x8
7102bb8334  b 0x7102bb833c
7102bb8338  mov x8,x23
7102bb833c  ldrb w9,[x8]
7102bb8340  mov v0.16B,v9.16B
7102bb8344  cmp w9,#0x8
7102bb8348  b.ne 0x7102bb8350
7102bb834c  ldur s0,[x8, #0x1]
7102bb8350  ldr x8,[x21]
7102bb8354  madd x8,x19,x22,x8
7102bb8358  str s0,[x8, #0x1c]
7102bb835c  ldrb w8,[x26]
7102bb8360  cmp w8,#0xc
7102bb8364  mov x8,x23
7102bb8368  b.ne 0x7102bb83dc
7102bb836c  ldur w8,[x26, #0x1]
7102bb8370  subs w8,w8,#0x1
7102bb8374  b.lt 0x7102bb83d8
7102bb8378  ldursw x11,[x26, #0x5]
7102bb837c  ldp x10,x12,[x27, #0x20]
7102bb8380  mov w9,wzr
7102bb8384  add x11,x12,x11
7102bb8388  add w12,w8,w9
7102bb838c  cmp w12,#0x0
7102bb8390  cinc w12,w12,lt
7102bb8394  asr w12,w12,#0x1
7102bb8398  add x13,x11,w12, SXTW  #0x3
7102bb839c  ldr w14,[x13]
7102bb83a0  ldr x14,[x10, x14, LSL #0x3]
7102bb83a4  cmp x14,x30
7102bb83a8  b.eq 0x7102bb83c8
7102bb83ac  sub w13,w12,#0x1
7102bb83b0  cmp x14,x30
7102bb83b4  csel w8,w13,w8,hi
7102bb83b8  csinc w9,w9,w12,hi
7102bb83bc  cmp w9,w8
7102bb83c0  b.le 0x7102bb8388
7102bb83c4  b 0x7102bb83d8
7102bb83c8  ldrsw x8,[x13, #0x4]
7102bb83cc  tbnz w8,#0x1f,0x7102bb83d8
7102bb83d0  add x8,x26,x8
7102bb83d4  b 0x7102bb83dc
7102bb83d8  mov x8,x23
7102bb83dc  ldrb w9,[x8]
7102bb83e0  mov v0.16B,v10.16B
7102bb83e4  cmp w9,#0x8
7102bb83e8  b.ne 0x7102bb83f0
7102bb83ec  ldur s0,[x8, #0x1]
7102bb83f0  ldr x8,[x21]
7102bb83f4  madd x8,x19,x22,x8
7102bb83f8  add x19,x19,#0x1
7102bb83fc  str s0,[x8, #0x20]
7102bb8400  ldrb w8,[x25]
7102bb8404  sub w9,w8,#0xb
7102bb8408  cmp w9,#0x1
7102bb840c  b.hi 0x7102bb8420
7102bb8410  ldur w9,[x25, #0x1]
7102bb8414  cmp x19,w9, SXTW 
7102bb8418  b.lt 0x7102bb8104
7102bb841c  b 0x7102bb842c
7102bb8420  mov w9,wzr
7102bb8424  cmp x19,w9, SXTW 
7102bb8428  b.lt 0x7102bb8104
7102bb842c  ldr x8,[sp, #0x30]
7102bb8430  ldr x8,[x8]
7102bb8434  ldrb w9,[x8]
7102bb8438  cmp w9,#0xc
7102bb843c  b.ne 0x7102bb84c8
7102bb8440  ldur w9,[x8, #0x1]
7102bb8444  subs w10,w9,#0x1
7102bb8448  b.lt 0x7102bb84c8
7102bb844c  ldr x12,[sp, #0x18]
7102bb8450  ldr x13,[x12]
7102bb8454  ldursw x9,[x8, #0x5]
7102bb8458  ldp x12,x13,[x13, #0x20]
7102bb845c  mov x14,#0xca1c
7102bb8460  movk x14,#0xa02f, LSL #16
7102bb8464  mov w11,wzr
7102bb8468  add x13,x13,x9
7102bb846c  movk x14,#0x16, LSL #32
7102bb8470  adrp x9,0x7104742000
7102bb8474  add x9,x9,#0xdbb
7102bb8478  add w15,w10,w11
7102bb847c  cmp w15,#0x0
7102bb8480  cinc w15,w15,lt
7102bb8484  asr w15,w15,#0x1
7102bb8488  add x16,x13,w15, SXTW  #0x3
7102bb848c  ldr w17,[x16]
7102bb8490  ldr x17,[x12, x17, LSL #0x3]
7102bb8494  cmp x17,x14
7102bb8498  b.eq 0x7102bb84b8
7102bb849c  sub w16,w15,#0x1
7102bb84a0  cmp x17,x14
7102bb84a4  csel w10,w16,w10,hi
7102bb84a8  csinc w11,w11,w15,hi
7102bb84ac  cmp w11,w10
7102bb84b0  b.le 0x7102bb8478
7102bb84b4  b 0x7102bb84d0
7102bb84b8  ldrsw x9,[x16, #0x4]
7102bb84bc  tbnz w9,#0x1f,0x7102bb84c8
7102bb84c0  add x9,x8,x9
7102bb84c4  b 0x7102bb84d0
7102bb84c8  adrp x9,0x7104742000
7102bb84cc  add x9,x9,#0xdbb
7102bb84d0  ldrb w8,[x9]
7102bb84d4  adrp x10,0x7104473000
7102bb84d8  cmp w8,#0x8
7102bb84dc  b.ne 0x7102bb84e8
7102bb84e0  ldur s0,[x9, #0x1]
7102bb84e4  b 0x7102bb84ec
7102bb84e8  ldr s0,[x10, #0x5fc]
7102bb84ec  ldr x8,[sp, #0x30]
7102bb84f0  str s0,[x28, #0x168]
7102bb84f4  ldr x8,[x8]
7102bb84f8  ldrb w9,[x8]
7102bb84fc  cmp w9,#0xc
7102bb8500  b.ne 0x7102bb8594
7102bb8504  ldur w9,[x8, #0x1]
7102bb8508  subs w9,w9,#0x1
7102bb850c  b.lt 0x7102bb8594
7102bb8510  ldr x11,[sp, #0x18]
7102bb8514  ldr x13,[x11]
7102bb8518  str x13,[sp, #0x8]
7102bb851c  ldursw x12,[x8, #0x5]
7102bb8520  adrp x17,0x7104742000
7102bb8524  add x17,x17,#0xdbb
7102bb8528  ldp x11,x13,[x13, #0x20]
7102bb852c  add x12,x13,x12
7102bb8530  mov x13,#0x6a95
7102bb8534  movk x13,#0x365c, LSL #16
7102bb8538  mov w10,wzr
7102bb853c  movk x13,#0xe, LSL #32
7102bb8540  add w14,w9,w10
7102bb8544  cmp w14,#0x0
7102bb8548  cinc w14,w14,lt
7102bb854c  asr w14,w14,#0x1
7102bb8550  add x15,x12,w14, SXTW  #0x3
7102bb8554  ldr w16,[x15]
7102bb8558  ldr x16,[x11, x16, LSL #0x3]
7102bb855c  cmp x16,x13
7102bb8560  b.eq 0x7102bb8584
7102bb8564  sub w15,w14,#0x1
7102bb8568  cmp x16,x13
7102bb856c  csel w9,w15,w9,hi
7102bb8570  csinc w10,w10,w14,hi
7102bb8574  cmp w10,w9
7102bb8578  b.le 0x7102bb8540
7102bb857c  str xzr,[sp, #0x8]
7102bb8580  b 0x7102bb85a0
7102bb8584  ldrsw x9,[x15, #0x4]
7102bb8588  tbnz w9,#0x1f,0x7102bb8594
7102bb858c  add x17,x8,x9
7102bb8590  b 0x7102bb85a0
7102bb8594  str xzr,[sp, #0x8]
7102bb8598  adrp x17,0x7104742000
7102bb859c  add x17,x17,#0xdbb
7102bb85a0  ldrb w8,[x17]
7102bb85a4  sub w8,w8,#0xb
7102bb85a8  cmp w8,#0x1
7102bb85ac  b.hi 0x7102bb85b8
7102bb85b0  ldur w8,[x17, #0x1]
7102bb85b4  b 0x7102bb85bc
7102bb85b8  mov w8,wzr
7102bb85bc  ldp x22,x19,[x28, #0x170]
7102bb85c0  sxtw x25,w8
7102bb85c4  sub x8,x19,x22
7102bb85c8  asr x20,x8,#0x6
7102bb85cc  add x0,x28,#0x170
7102bb85d0  str x17,[sp, #0x10]
7102bb85d4  str x0,[sp, #0x20]
7102bb85d8  cmp x20,x25
7102bb85dc  b.cs 0x7102bb862c
7102bb85e0  ldr x8,[x28, #0x180]
7102bb85e4  sub x9,x8,x19
7102bb85e8  sub x21,x25,x20
7102bb85ec  asr x9,x9,#0x6
7102bb85f0  cmp x9,x21
7102bb85f4  b.cs 0x7102bb86cc
7102bb85f8  tbnz w25,#0x1f,0x7102bbde8c
7102bb85fc  sub x8,x8,x22
7102bb8600  asr x9,x8,#0x6
7102bb8604  orr x10,xzr,#0x1fffffffffffffe
7102bb8608  cmp x9,x10
7102bb860c  b.hi 0x7102bb8740
7102bb8610  asr x8,x8,#0x5
7102bb8614  cmp x8,x25
7102bb8618  csel x26,x25,x8,cc
7102bb861c  cbz x26,0x7102bb87a4
7102bb8620  lsr x8,x26,#0x3a
7102bb8624  cbz x8,0x7102bb8744
7102bb8628  b 0x7102bbb008
7102bb862c  b.ls 0x7102bb89d4
7102bb8630  add x20,x22,x25, LSL #0x6
7102bb8634  cmp x20,x19
7102bb8638  b.eq 0x7102bb86bc
7102bb863c  ldurb w8,[x19, #-0x28]
7102bb8640  tbz w8,#0x0,0x7102bb8674
7102bb8644  ldur x0,[x19, #-0x18]
7102bb8648  cbz x0,0x7102bb8674
7102bb864c  bl 0x710392eb40
7102bb8650  mov x3,#0xae8d
7102bb8654  movk x3,#0x1ef8, LSL #16
7102bb8658  mov x2,#0x9e1b
7102bb865c  movk x2,#0x69ff, LSL #16
7102bb8660  mov x30,#0xff37
7102bb8664  movk x30,#0x87f1, LSL #16
7102bb8668  movk x3,#0x5, LSL #32
7102bb866c  movk x2,#0x5, LSL #32
7102bb8670  movk x30,#0x5, LSL #32
7102bb8674  ldurb w8,[x19, #-0x40]
7102bb8678  sub x21,x19,#0x40
7102bb867c  tbz w8,#0x0,0x7102bb86b0
7102bb8680  ldur x0,[x19, #-0x30]
7102bb8684  cbz x0,0x7102bb86b0
7102bb8688  bl 0x710392eb40
7102bb868c  mov x3,#0xae8d
7102bb8690  movk x3,#0x1ef8, LSL #16
7102bb8694  mov x2,#0x9e1b
7102bb8698  movk x2,#0x69ff, LSL #16
7102bb869c  mov x30,#0xff37
7102bb86a0  movk x30,#0x87f1, LSL #16
7102bb86a4  movk x3,#0x5, LSL #32
7102bb86a8  movk x2,#0x5, LSL #32
7102bb86ac  movk x30,#0x5, LSL #32
7102bb86b0  cmp x20,x21
7102bb86b4  mov x19,x21
7102bb86b8  b.ne 0x7102bb863c
7102bb86bc  ldr x17,[sp, #0x10]
7102bb86c0  ldr x0,[sp, #0x20]
7102bb86c4  str x20,[x28, #0x178]
7102bb86c8  b 0x7102bb89d4
7102bb86cc  mov x8,x21
7102bb86d0  tbz w21,#0x0,0x7102bb86f4
7102bb86d4  stp xzr,xzr,[x19, #0x30]
7102bb86d8  stp xzr,xzr,[x19, #0x20]
7102bb86dc  stp xzr,xzr,[x19, #0x10]
7102bb86e0  stp xzr,xzr,[x19]
7102bb86e4  ldr x8,[x28, #0x178]
7102bb86e8  add x19,x8,#0x40
7102bb86ec  sub x8,x21,#0x1
7102bb86f0  str x19,[x28, #0x178]
7102bb86f4  cmp x21,#0x1
7102bb86f8  b.eq 0x7102bb89d4
7102bb86fc  stp xzr,xzr,[x19, #0x30]
7102bb8700  subs x8,x8,#0x2
7102bb8704  stp xzr,xzr,[x19, #0x20]
7102bb8708  stp xzr,xzr,[x19, #0x10]
7102bb870c  stp xzr,xzr,[x19]
7102bb8710  ldr x9,[x28, #0x178]
7102bb8714  add x10,x9,#0x40
7102bb8718  str x10,[x28, #0x178]
7102bb871c  stp xzr,xzr,[x9, #0x70]
7102bb8720  stp xzr,xzr,[x9, #0x60]
7102bb8724  stp xzr,xzr,[x9, #0x50]
7102bb8728  stp xzr,xzr,[x9, #0x40]
7102bb872c  ldr x9,[x28, #0x178]
7102bb8730  add x19,x9,#0x40
7102bb8734  str x19,[x28, #0x178]
7102bb8738  b.ne 0x7102bb86fc
7102bb873c  b 0x7102bb89d4
7102bb8740  orr x26,xzr,#0x3ffffffffffffff
7102bb8744  lsl x8,x26,#0x6
7102bb8748  cmp x8,#0x0
7102bb874c  csinc x24,x8,xzr,ne
7102bb8750  mov w0,#0x10
7102bb8754  mov x1,x24
7102bb8758  bl 0x710392e290
7102bb875c  mov x23,x0
7102bb8760  cbnz x0,0x7102bb87a8
7102bb8764  adrp x8,0x7105332000
7102bb8768  ldr x0,[x8, #0xf00]
7102bb876c  cbz x0,0x7102bb87a4
7102bb8770  str wzr,[sp, #0x4c]
7102bb8774  str x24,[sp, #0x38]
7102bb8778  ldr x8,[x0]
7102bb877c  ldr x8,[x8, #0x30]
7102bb8780  add x1,sp,#0x4c
7102bb8784  add x2,sp,#0x38
7102bb8788  blr x8
7102bb878c  tbz w0,#0x0,0x7102bb87a4
7102bb8790  mov w0,#0x10
7102bb8794  mov x1,x24
7102bb8798  bl 0x710392e290
7102bb879c  mov x23,x0
7102bb87a0  cbnz x0,0x7102bb87a8
7102bb87a4  mov x23,xzr
7102bb87a8  add x24,x23,x20, LSL #0x6
7102bb87ac  lsl x2,x21,#0x6
7102bb87b0  add x21,x23,x26, LSL #0x6
7102bb87b4  mov x0,x24
7102bb87b8  mov w1,wzr
7102bb87bc  bl 0x71039c02a0
7102bb87c0  add x8,x23,x25, LSL #0x6
7102bb87c4  subs x9,x19,x22
7102bb87c8  b.eq 0x7102bb8968
7102bb87cc  ldr x17,[sp, #0x10]
7102bb87d0  ldr x0,[sp, #0x20]
7102bb87d4  sub x10,x9,#0x40
7102bb87d8  mov x9,#-0x1
7102bb87dc  eor x9,x9,x10, LSR #0x6
7102bb87e0  mov x30,#0xff37
7102bb87e4  movk x30,#0x87f1, LSL #16
7102bb87e8  mov x2,#0x9e1b
7102bb87ec  movk x2,#0x69ff, LSL #16
7102bb87f0  mov x3,#0xae8d
7102bb87f4  movk x3,#0x1ef8, LSL #16
7102bb87f8  movk x30,#0x5, LSL #32
7102bb87fc  movk x2,#0x5, LSL #32
7102bb8800  movk x3,#0x5, LSL #32
7102bb8804  tbnz w10,#0x6,0x7102bb8840
7102bb8808  ldr x11,[x19, #-0x40]!
7102bb880c  ldp x12,x13,[x19, #0x8]
7102bb8810  str x11,[x24, #-0x40]!
7102bb8814  stp x12,x13,[x24, #0x8]
7102bb8818  ldr x13,[x19, #0x28]
7102bb881c  ldp x11,x12,[x19, #0x18]
7102bb8820  str xzr,[x19]
7102bb8824  stp xzr,xzr,[x19, #0x8]
7102bb8828  str x11,[x24, #0x18]
7102bb882c  stp x12,x13,[x24, #0x20]
7102bb8830  str xzr,[x19, #0x18]
7102bb8834  ldp x11,x12,[x19, #0x30]
7102bb8838  stp xzr,xzr,[x19, #0x20]
7102bb883c  stp x11,x12,[x24, #0x30]
7102bb8840  add x9,x20,x9
7102bb8844  cmp x10,#0x40
7102bb8848  b.cc 0x7102bb88cc
7102bb884c  sub x10,x24,#0x40
7102bb8850  ldp x11,x12,[x19, #-0x40]
7102bb8854  ldur x13,[x19, #-0x30]
7102bb8858  stp x12,x13,[x10, #0x8]
7102bb885c  str x11,[x10]
7102bb8860  ldp x11,x12,[x19, #-0x28]
7102bb8864  ldur x13,[x19, #-0x18]
7102bb8868  stp xzr,xzr,[x19, #-0x38]
7102bb886c  stur xzr,[x19, #-0x40]
7102bb8870  stp x12,x13,[x10, #0x20]
7102bb8874  str x11,[x10, #0x18]
7102bb8878  ldp x11,x12,[x19, #-0x10]
7102bb887c  stur xzr,[x19, #-0x28]
7102bb8880  stp xzr,xzr,[x19, #-0x20]
7102bb8884  stp x11,x12,[x10, #0x30]
7102bb8888  ldr x11,[x19, #-0x80]!
7102bb888c  cmp x22,x19
7102bb8890  ldp x12,x13,[x19, #0x8]
7102bb8894  stur x11,[x10, #-0x40]
7102bb8898  stp x12,x13,[x10, #-0x38]
7102bb889c  ldr x13,[x19, #0x28]
7102bb88a0  ldp x11,x12,[x19, #0x18]
7102bb88a4  str xzr,[x19]
7102bb88a8  stp xzr,xzr,[x19, #0x8]
7102bb88ac  stur x11,[x10, #-0x28]
7102bb88b0  stp x12,x13,[x10, #-0x20]
7102bb88b4  str xzr,[x19, #0x18]
7102bb88b8  ldp x11,x12,[x19, #0x30]
7102bb88bc  stp xzr,xzr,[x19, #0x20]
7102bb88c0  stp x11,x12,[x10, #-0x10]
7102bb88c4  sub x10,x10,#0x80
7102bb88c8  b.ne 0x7102bb8850
7102bb88cc  ldp x22,x19,[x28, #0x170]
7102bb88d0  add x9,x23,x9, LSL #0x6
7102bb88d4  stp x9,x8,[x28, #0x170]
7102bb88d8  str x21,[x28, #0x180]
7102bb88dc  cmp x19,x22
7102bb88e0  b.eq 0x7102bb899c
7102bb88e4  ldurb w8,[x19, #-0x28]
7102bb88e8  tbz w8,#0x0,0x7102bb891c
7102bb88ec  ldur x0,[x19, #-0x18]
7102bb88f0  cbz x0,0x7102bb891c
7102bb88f4  bl 0x710392eb40
7102bb88f8  mov x3,#0xae8d
7102bb88fc  movk x3,#0x1ef8, LSL #16
7102bb8900  mov x2,#0x9e1b
7102bb8904  movk x2,#0x69ff, LSL #16
7102bb8908  mov x30,#0xff37
7102bb890c  movk x30,#0x87f1, LSL #16
7102bb8910  movk x3,#0x5, LSL #32
7102bb8914  movk x2,#0x5, LSL #32
7102bb8918  movk x30,#0x5, LSL #32
7102bb891c  ldurb w8,[x19, #-0x40]
7102bb8920  sub x20,x19,#0x40
7102bb8924  tbz w8,#0x0,0x7102bb8958
7102bb8928  ldur x0,[x19, #-0x30]
7102bb892c  cbz x0,0x7102bb8958
7102bb8930  bl 0x710392eb40
7102bb8934  mov x3,#0xae8d
7102bb8938  movk x3,#0x1ef8, LSL #16
7102bb893c  mov x2,#0x9e1b
7102bb8940  movk x2,#0x69ff, LSL #16
7102bb8944  mov x30,#0xff37
7102bb8948  movk x30,#0x87f1, LSL #16
7102bb894c  movk x3,#0x5, LSL #32
7102bb8950  movk x2,#0x5, LSL #32
7102bb8954  movk x30,#0x5, LSL #32
7102bb8958  cmp x22,x20
7102bb895c  mov x19,x20
7102bb8960  b.ne 0x7102bb88e4
7102bb8964  b 0x7102bb8994
7102bb8968  mov x30,#0xff37
7102bb896c  movk x30,#0x87f1, LSL #16
7102bb8970  mov x2,#0x9e1b
7102bb8974  movk x2,#0x69ff, LSL #16
7102bb8978  mov x3,#0xae8d
7102bb897c  movk x3,#0x1ef8, LSL #16
7102bb8980  stp x24,x8,[x28, #0x170]
7102bb8984  str x21,[x28, #0x180]
7102bb8988  movk x30,#0x5, LSL #32
7102bb898c  movk x2,#0x5, LSL #32
7102bb8990  movk x3,#0x5, LSL #32
7102bb8994  ldr x17,[sp, #0x10]
7102bb8998  ldr x0,[sp, #0x20]
7102bb899c  cbz x22,0x7102bb89d4
7102bb89a0  mov x0,x22
7102bb89a4  bl 0x710392eb40
7102bb89a8  ldr x0,[sp, #0x20]
7102bb89ac  ldr x17,[sp, #0x10]
7102bb89b0  mov x3,#0xae8d
7102bb89b4  movk x3,#0x1ef8, LSL #16
7102bb89b8  mov x2,#0x9e1b
7102bb89bc  movk x2,#0x69ff, LSL #16
7102bb89c0  mov x30,#0xff37
7102bb89c4  movk x30,#0x87f1, LSL #16
7102bb89c8  movk x3,#0x5, LSL #32
7102bb89cc  movk x2,#0x5, LSL #32
7102bb89d0  movk x30,#0x5, LSL #32
7102bb89d4  ldrb w8,[x17]
7102bb89d8  sub w9,w8,#0xb
7102bb89dc  cmp w9,#0x1
7102bb89e0  b.hi 0x7102bb8edc
7102bb89e4  ldur w9,[x17, #0x1]
7102bb89e8  cmp w9,#0x1
7102bb89ec  b.lt 0x7102bb8edc
7102bb89f0  add x9,x17,#0x5
7102bb89f4  str x9,[sp]
7102bb89f8  adrp x9,0x7104472000
7102bb89fc  ldr s9,[x9, #0xe0c]
7102bb8a00  fmov s8,wzr
7102bb8a04  mov x22,#0x49ff
7102bb8a08  movk x22,#0xce46, LSL #16
7102bb8a0c  mov x23,#0xd133
7102bb8a10  movk x23,#0xc02a, LSL #16
7102bb8a14  mov x24,#0x5fca
7102bb8a18  movk x24,#0xdbc3, LSL #16
7102bb8a1c  mov x26,#0x1dd1
7102bb8a20  movk x26,#0xd8ad, LSL #16
7102bb8a24  mov x25,#0x2d47
7102bb8a28  movk x25,#0xafaa, LSL #16
7102bb8a2c  mov x27,#0x7cfd
7102bb8a30  movk x27,#0x36a3, LSL #16
7102bb8a34  mov x20,xzr
7102bb8a38  movk x22,#0xb, LSL #32
7102bb8a3c  movk x23,#0xa, LSL #32
7102bb8a40  movk x24,#0x9, LSL #32
7102bb8a44  movk x26,#0x8, LSL #32
7102bb8a48  movk x25,#0x8, LSL #32
7102bb8a4c  adrp x28,0x7104742000
7102bb8a50  add x28,x28,#0xdbb
7102bb8a54  movk x27,#0x8, LSL #32
7102bb8a58  mov x21,xzr
7102bb8a5c  tbnz w20,#0x1f,0x7102bb8a90
7102bb8a60  and w8,w8,#0xff
7102bb8a64  cmp w8,#0xb
7102bb8a68  mov x19,x28
7102bb8a6c  b.ne 0x7102bb8a94
7102bb8a70  ldur w8,[x17, #0x1]
7102bb8a74  cmp w8,w20
7102bb8a78  b.le 0x7102bb8a8c
7102bb8a7c  ldp x8,x21,[sp]
7102bb8a80  ldrsw x8,[x8, w20, SXTW #0x2]
7102bb8a84  add x19,x17,x8
7102bb8a88  b 0x7102bb8a94
7102bb8a8c  mov x21,xzr
7102bb8a90  mov x19,x28
7102bb8a94  ldrb w8,[x19]
7102bb8a98  cmp w8,#0xc
7102bb8a9c  b.ne 0x7102bb8b10
7102bb8aa0  ldur w8,[x19, #0x1]
7102bb8aa4  subs w8,w8,#0x1
7102bb8aa8  b.lt 0x7102bb8b10
7102bb8aac  ldursw x11,[x19, #0x5]
7102bb8ab0  ldp x10,x12,[x21, #0x20]
7102bb8ab4  mov w9,wzr
7102bb8ab8  add x11,x12,x11
7102bb8abc  add w12,w8,w9
7102bb8ac0  cmp w12,#0x0
7102bb8ac4  cinc w12,w12,lt
7102bb8ac8  asr w12,w12,#0x1
7102bb8acc  add x13,x11,w12, SXTW  #0x3
7102bb8ad0  ldr w14,[x13]
7102bb8ad4  ldr x14,[x10, x14, LSL #0x3]
7102bb8ad8  cmp x14,x22
7102bb8adc  b.eq 0x7102bb8afc
7102bb8ae0  sub w13,w12,#0x1
7102bb8ae4  cmp x14,x22
7102bb8ae8  csel w8,w13,w8,hi
7102bb8aec  csinc w9,w9,w12,hi
7102bb8af0  cmp w9,w8
7102bb8af4  b.le 0x7102bb8abc
7102bb8af8  b 0x7102bb8b10
7102bb8afc  ldrsw x8,[x13, #0x4]
7102bb8b00  tbnz w8,#0x1f,0x7102bb8b10
7102bb8b04  add x9,x19,x8
7102bb8b08  mov x8,x21
7102bb8b0c  b 0x7102bb8b18
7102bb8b10  mov x8,xzr
7102bb8b14  mov x9,x28
7102bb8b18  ldrb w10,[x9]
7102bb8b1c  cmp w10,#0xa
7102bb8b20  adrp x1,0x7104317000
7102bb8b24  add x1,x1,#0x1c1
7102bb8b28  b.ne 0x7102bb8b38
7102bb8b2c  ldursw x9,[x9, #0x1]
7102bb8b30  ldr x8,[x8, #0x28]
7102bb8b34  add x1,x8,x9
7102bb8b38  ldr x8,[x0]
7102bb8b3c  add x0,x8,x20, LSL #0x6
7102bb8b40  bl 0x71039c2720
7102bb8b44  ldrb w8,[x19]
7102bb8b48  cmp w8,#0xc
7102bb8b4c  b.ne 0x7102bb8bb0
7102bb8b50  ldur w8,[x19, #0x1]
7102bb8b54  ldr x15,[sp, #0x20]
7102bb8b58  subs w8,w8,#0x1
7102bb8b5c  b.lt 0x7102bb8bb4
7102bb8b60  ldursw x11,[x19, #0x5]
7102bb8b64  ldp x10,x12,[x21, #0x20]
7102bb8b68  mov w9,wzr
7102bb8b6c  add x11,x12,x11
7102bb8b70  add w12,w8,w9
7102bb8b74  cmp w12,#0x0
7102bb8b78  cinc w12,w12,lt
7102bb8b7c  asr w12,w12,#0x1
7102bb8b80  add x13,x11,w12, SXTW  #0x3
7102bb8b84  ldr w14,[x13]
7102bb8b88  ldr x14,[x10, x14, LSL #0x3]
7102bb8b8c  cmp x14,x24
7102bb8b90  b.eq 0x7102bb8c80
7102bb8b94  sub w13,w12,#0x1
7102bb8b98  cmp x14,x24
7102bb8b9c  csel w8,w13,w8,hi
7102bb8ba0  csinc w9,w9,w12,hi
7102bb8ba4  cmp w9,w8
7102bb8ba8  b.le 0x7102bb8b70
7102bb8bac  b 0x7102bb8bb4
7102bb8bb0  ldr x15,[sp, #0x20]
7102bb8bb4  mov x8,xzr
7102bb8bb8  mov x9,x28
7102bb8bbc  ldrb w10,[x9]
7102bb8bc0  cmp w10,#0xa
7102bb8bc4  adrp x1,0x7104464000
7102bb8bc8  add x1,x1,#0x41f
7102bb8bcc  b.ne 0x7102bb8bdc
7102bb8bd0  ldursw x9,[x9, #0x1]
7102bb8bd4  ldr x8,[x8, #0x28]
7102bb8bd8  add x1,x8,x9
7102bb8bdc  ldr x8,[x15]
7102bb8be0  add x8,x8,x20, LSL #0x6
7102bb8be4  add x0,x8,#0x18
7102bb8be8  bl 0x71039c2720
7102bb8bec  ldrb w8,[x19]
7102bb8bf0  ldr x17,[sp, #0x10]
7102bb8bf4  mov x30,#0xff37
7102bb8bf8  movk x30,#0x87f1, LSL #16
7102bb8bfc  mov x2,#0x9e1b
7102bb8c00  movk x2,#0x69ff, LSL #16
7102bb8c04  mov x3,#0xae8d
7102bb8c08  movk x3,#0x1ef8, LSL #16
7102bb8c0c  movk x30,#0x5, LSL #32
7102bb8c10  movk x2,#0x5, LSL #32
7102bb8c14  movk x3,#0x5, LSL #32
7102bb8c18  cmp w8,#0xc
7102bb8c1c  mov x8,x28
7102bb8c20  b.ne 0x7102bb8ca8
7102bb8c24  ldur w8,[x19, #0x1]
7102bb8c28  subs w8,w8,#0x1
7102bb8c2c  b.lt 0x7102bb8ca4
7102bb8c30  ldursw x11,[x19, #0x5]
7102bb8c34  ldp x10,x12,[x21, #0x20]
7102bb8c38  mov w9,wzr
7102bb8c3c  add x11,x12,x11
7102bb8c40  add w12,w8,w9
7102bb8c44  cmp w12,#0x0
7102bb8c48  cinc w12,w12,lt
7102bb8c4c  asr w12,w12,#0x1
7102bb8c50  add x13,x11,w12, SXTW  #0x3
7102bb8c54  ldr w14,[x13]
7102bb8c58  ldr x14,[x10, x14, LSL #0x3]
7102bb8c5c  cmp x14,x26
7102bb8c60  b.eq 0x7102bb8c94
7102bb8c64  sub w13,w12,#0x1
7102bb8c68  cmp x14,x26
7102bb8c6c  csel w8,w13,w8,hi
7102bb8c70  csinc w9,w9,w12,hi
7102bb8c74  cmp w9,w8
7102bb8c78  b.le 0x7102bb8c40
7102bb8c7c  b 0x7102bb8ca4
7102bb8c80  ldrsw x8,[x13, #0x4]
7102bb8c84  tbnz w8,#0x1f,0x7102bb8bb4
7102bb8c88  add x9,x19,x8
7102bb8c8c  mov x8,x21
7102bb8c90  b 0x7102bb8bbc
7102bb8c94  ldrsw x8,[x13, #0x4]
7102bb8c98  tbnz w8,#0x1f,0x7102bb8ca4
7102bb8c9c  add x8,x19,x8
7102bb8ca0  b 0x7102bb8ca8
7102bb8ca4  mov x8,x28
7102bb8ca8  ldrb w9,[x8]
7102bb8cac  mov v0.16B,v8.16B
7102bb8cb0  cmp w9,#0x8
7102bb8cb4  b.ne 0x7102bb8cbc
7102bb8cb8  ldur s0,[x8, #0x1]
7102bb8cbc  ldr x0,[sp, #0x20]
7102bb8cc0  ldr x8,[x0]
7102bb8cc4  add x8,x8,x20, LSL #0x6
7102bb8cc8  str s0,[x8, #0x30]
7102bb8ccc  ldrb w8,[x19]
7102bb8cd0  cmp w8,#0xc
7102bb8cd4  mov x8,x28
7102bb8cd8  b.ne 0x7102bb8d4c
7102bb8cdc  ldur w8,[x19, #0x1]
7102bb8ce0  subs w8,w8,#0x1
7102bb8ce4  b.lt 0x7102bb8d48
7102bb8ce8  ldursw x11,[x19, #0x5]
7102bb8cec  ldp x10,x12,[x21, #0x20]
7102bb8cf0  mov w9,wzr
7102bb8cf4  add x11,x12,x11
7102bb8cf8  add w12,w8,w9
7102bb8cfc  cmp w12,#0x0
7102bb8d00  cinc w12,w12,lt
7102bb8d04  asr w12,w12,#0x1
7102bb8d08  add x13,x11,w12, SXTW  #0x3
7102bb8d0c  ldr w14,[x13]
7102bb8d10  ldr x14,[x10, x14, LSL #0x3]
7102bb8d14  cmp x14,x25
7102bb8d18  b.eq 0x7102bb8d38
7102bb8d1c  sub w13,w12,#0x1
7102bb8d20  cmp x14,x25
7102bb8d24  csel w8,w13,w8,hi
7102bb8d28  csinc w9,w9,w12,hi
7102bb8d2c  cmp w9,w8
7102bb8d30  b.le 0x7102bb8cf8
7102bb8d34  b 0x7102bb8d48
7102bb8d38  ldrsw x8,[x13, #0x4]
7102bb8d3c  tbnz w8,#0x1f,0x7102bb8d48
7102bb8d40  add x8,x19,x8
7102bb8d44  b 0x7102bb8d4c
7102bb8d48  mov x8,x28
7102bb8d4c  ldrb w9,[x8]
7102bb8d50  mov v0.16B,v8.16B
7102bb8d54  cmp w9,#0x8
7102bb8d58  b.ne 0x7102bb8d60
7102bb8d5c  ldur s0,[x8, #0x1]
7102bb8d60  ldr x8,[x0]
7102bb8d64  add x8,x8,x20, LSL #0x6
7102bb8d68  str s0,[x8, #0x34]
7102bb8d6c  ldrb w8,[x19]
7102bb8d70  cmp w8,#0xc
7102bb8d74  mov x8,x28
7102bb8d78  b.ne 0x7102bb8dec
7102bb8d7c  ldur w8,[x19, #0x1]
7102bb8d80  subs w8,w8,#0x1
7102bb8d84  b.lt 0x7102bb8de8
7102bb8d88  ldursw x11,[x19, #0x5]
7102bb8d8c  ldp x10,x12,[x21, #0x20]
7102bb8d90  mov w9,wzr
7102bb8d94  add x11,x12,x11
7102bb8d98  add w12,w8,w9
7102bb8d9c  cmp w12,#0x0
7102bb8da0  cinc w12,w12,lt
7102bb8da4  asr w12,w12,#0x1
7102bb8da8  add x13,x11,w12, SXTW  #0x3
7102bb8dac  ldr w14,[x13]
7102bb8db0  ldr x14,[x10, x14, LSL #0x3]
7102bb8db4  cmp x14,x27
7102bb8db8  b.eq 0x7102bb8dd8
7102bb8dbc  sub w13,w12,#0x1
7102bb8dc0  cmp x14,x27
7102bb8dc4  csel w8,w13,w8,hi
7102bb8dc8  csinc w9,w9,w12,hi
7102bb8dcc  cmp w9,w8
7102bb8dd0  b.le 0x7102bb8d98
7102bb8dd4  b 0x7102bb8de8
7102bb8dd8  ldrsw x8,[x13, #0x4]
7102bb8ddc  tbnz w8,#0x1f,0x7102bb8de8
7102bb8de0  add x8,x19,x8
7102bb8de4  b 0x7102bb8dec
7102bb8de8  mov x8,x28
7102bb8dec  ldrb w9,[x8]
7102bb8df0  mov v0.16B,v8.16B
7102bb8df4  cmp w9,#0x8
7102bb8df8  b.ne 0x7102bb8e00
7102bb8dfc  ldur s0,[x8, #0x1]
7102bb8e00  ldr x8,[x0]
7102bb8e04  add x8,x8,x20, LSL #0x6
7102bb8e08  str s0,[x8, #0x38]
7102bb8e0c  ldrb w8,[x19]
7102bb8e10  cmp w8,#0xc
7102bb8e14  mov x8,x28
7102bb8e18  b.ne 0x7102bb8e8c
7102bb8e1c  ldur w8,[x19, #0x1]
7102bb8e20  subs w8,w8,#0x1
7102bb8e24  b.lt 0x7102bb8e88
7102bb8e28  ldursw x11,[x19, #0x5]
7102bb8e2c  ldp x10,x12,[x21, #0x20]
7102bb8e30  mov w9,wzr
7102bb8e34  add x11,x12,x11
7102bb8e38  add w12,w8,w9
7102bb8e3c  cmp w12,#0x0
7102bb8e40  cinc w12,w12,lt
7102bb8e44  asr w12,w12,#0x1
7102bb8e48  add x13,x11,w12, SXTW  #0x3
7102bb8e4c  ldr w14,[x13]
7102bb8e50  ldr x14,[x10, x14, LSL #0x3]
7102bb8e54  cmp x14,x23
7102bb8e58  b.eq 0x7102bb8e78
7102bb8e5c  sub w13,w12,#0x1
7102bb8e60  cmp x14,x23
7102bb8e64  csel w8,w13,w8,hi
7102bb8e68  csinc w9,w9,w12,hi
7102bb8e6c  cmp w9,w8
7102bb8e70  b.le 0x7102bb8e38
7102bb8e74  b 0x7102bb8e88
7102bb8e78  ldrsw x8,[x13, #0x4]
7102bb8e7c  tbnz w8,#0x1f,0x7102bb8e88
7102bb8e80  add x8,x19,x8
7102bb8e84  b 0x7102bb8e8c
7102bb8e88  mov x8,x28
7102bb8e8c  ldrb w9,[x8]
7102bb8e90  mov v0.16B,v9.16B
7102bb8e94  cmp w9,#0x8
7102bb8e98  b.ne 0x7102bb8ea0
7102bb8e9c  ldur s0,[x8, #0x1]
7102bb8ea0  ldr x8,[x0]
7102bb8ea4  add x8,x8,x20, LSL #0x6
7102bb8ea8  add x20,x20,#0x1
7102bb8eac  str s0,[x8, #0x3c]
7102bb8eb0  ldrb w8,[x17]
7102bb8eb4  sub w9,w8,#0xb
7102bb8eb8  cmp w9,#0x1
7102bb8ebc  b.hi 0x7102bb8ed0
7102bb8ec0  ldur w9,[x17, #0x1]
7102bb8ec4  cmp x20,w9, SXTW 
7102bb8ec8  b.lt 0x7102bb8a58
7102bb8ecc  b 0x7102bb8edc
7102bb8ed0  mov w9,wzr
7102bb8ed4  cmp x20,w9, SXTW 
7102bb8ed8  b.lt 0x7102bb8a58
7102bb8edc  ldr x8,[sp, #0x30]
7102bb8ee0  ldr x8,[x8]
7102bb8ee4  ldrb w9,[x8]
7102bb8ee8  cmp w9,#0xc
7102bb8eec  b.ne 0x7102bb8f7c
7102bb8ef0  ldur w9,[x8, #0x1]
7102bb8ef4  orr x17,xzr,#-0x3333333333333334
7102bb8ef8  movk x17,#0xcccd
7102bb8efc  subs w9,w9,#0x1
7102bb8f00  b.lt 0x7102bb8f98
7102bb8f04  ldr x11,[sp, #0x18]
7102bb8f08  ldr x13,[x11]
7102bb8f0c  str x13,[sp, #0x10]
7102bb8f10  ldursw x12,[x8, #0x5]
7102bb8f14  adrp x18,0x7104742000
7102bb8f18  add x18,x18,#0xdbb
7102bb8f1c  ldp x11,x13,[x13, #0x20]
7102bb8f20  add x12,x13,x12
7102bb8f24  mov x13,#0x98ec
7102bb8f28  movk x13,#0x8aaf, LSL #16
7102bb8f2c  mov w10,wzr
7102bb8f30  movk x13,#0x13, LSL #32
7102bb8f34  add w14,w9,w10
7102bb8f38  cmp w14,#0x0
7102bb8f3c  cinc w14,w14,lt
7102bb8f40  asr w14,w14,#0x1
7102bb8f44  add x15,x12,w14, SXTW  #0x3
7102bb8f48  ldr w16,[x15]
7102bb8f4c  ldr x16,[x11, x16, LSL #0x3]
7102bb8f50  cmp x16,x13
7102bb8f54  b.eq 0x7102bb8fa0
7102bb8f58  sub w15,w14,#0x1
7102bb8f5c  cmp x16,x13
7102bb8f60  csel w9,w15,w9,hi
7102bb8f64  csinc w10,w10,w14,hi
7102bb8f68  cmp w10,w9
7102bb8f6c  b.le 0x7102bb8f34
7102bb8f70  ldr x28,[sp, #0x28]
7102bb8f74  str xzr,[sp, #0x10]
7102bb8f78  b 0x7102bb8fc0
7102bb8f7c  ldr x28,[sp, #0x28]
7102bb8f80  orr x17,xzr,#-0x3333333333333334
7102bb8f84  str xzr,[sp, #0x10]
7102bb8f88  adrp x18,0x7104742000
7102bb8f8c  add x18,x18,#0xdbb
7102bb8f90  movk x17,#0xcccd
7102bb8f94  b 0x7102bb8fc0
7102bb8f98  ldr x28,[sp, #0x28]
7102bb8f9c  b 0x7102bb8fb4
7102bb8fa0  ldrsw x9,[x15, #0x4]
7102bb8fa4  ldr x28,[sp, #0x28]
7102bb8fa8  tbnz w9,#0x1f,0x7102bb8fb4
7102bb8fac  add x18,x8,x9
7102bb8fb0  b 0x7102bb8fc0
7102bb8fb4  str xzr,[sp, #0x10]
7102bb8fb8  adrp x18,0x7104742000
7102bb8fbc  add x18,x18,#0xdbb
7102bb8fc0  ldrb w8,[x18]
7102bb8fc4  sub w8,w8,#0xb
7102bb8fc8  cmp w8,#0x1
7102bb8fcc  b.hi 0x7102bb8fd8
7102bb8fd0  ldur w8,[x18, #0x1]
7102bb8fd4  b 0x7102bb8fdc
7102bb8fd8  mov w8,wzr
7102bb8fdc  ldp x22,x19,[x28, #0x188]
7102bb8fe0  sxtw x20,w8
7102bb8fe4  sub x8,x19,x22
7102bb8fe8  asr x8,x8,#0x3
7102bb8fec  mul x26,x8,x17
7102bb8ff0  add x21,x28,#0x188
7102bb8ff4  str x18,[sp, #0x20]
7102bb8ff8  cmp x26,x20
7102bb8ffc  b.cs 0x7102bb91a0
7102bb9000  ldr x8,[x28, #0x198]
7102bb9004  sub x9,x8,x19
7102bb9008  asr x9,x9,#0x3
7102bb900c  mul x9,x9,x17
7102bb9010  sub x25,x20,x26
7102bb9014  cmp x9,x25
7102bb9018  b.cs 0x7102bb9208
7102bb901c  tbnz w20,#0x1f,0x7102bbde84
7102bb9020  sub x8,x8,x22
7102bb9024  asr x8,x8,#0x3
7102bb9028  mul x8,x8,x17
7102bb902c  orr x9,xzr,#0x3333333333333333
7102bb9030  movk x9,#0x333, LSL #48
7102bb9034  orr x27,xzr,#0x6666666666666666
7102bb9038  movk x27,#0x666, LSL #48
7102bb903c  cmp x8,x9
7102bb9040  b.cs 0x7102bb9054
7102bb9044  lsl x8,x8,#0x1
7102bb9048  cmp x8,x20
7102bb904c  csel x27,x20,x8,cc
7102bb9050  cbz x27,0x7102bb90b8
7102bb9054  add x8,x27,x27, LSL #0x2
7102bb9058  lsl x8,x8,#0x3
7102bb905c  cmp x8,#0x0
7102bb9060  csinc x23,x8,xzr,ne
7102bb9064  mov w0,#0x10
7102bb9068  mov x1,x23
7102bb906c  bl 0x710392e290
7102bb9070  mov x24,x0
7102bb9074  cbnz x0,0x7102bb90bc
7102bb9078  adrp x8,0x7105332000
7102bb907c  ldr x0,[x8, #0xf00]
7102bb9080  cbz x0,0x7102bb90b8
7102bb9084  str wzr,[sp, #0x4c]
7102bb9088  str x23,[sp, #0x38]
7102bb908c  ldr x8,[x0]
7102bb9090  ldr x8,[x8, #0x30]
7102bb9094  add x1,sp,#0x4c
7102bb9098  add x2,sp,#0x38
7102bb909c  blr x8
7102bb90a0  tbz w0,#0x0,0x7102bb90b8
7102bb90a4  mov w0,#0x10
7102bb90a8  mov x1,x23
7102bb90ac  bl 0x710392e290
7102bb90b0  mov x24,x0
7102bb90b4  cbnz x0,0x7102bb90bc
7102bb90b8  mov x24,xzr
7102bb90bc  mov w28,#0x28
7102bb90c0  madd x23,x26,x28,x24
7102bb90c4  add x8,x25,x25, LSL #0x2
7102bb90c8  lsl x2,x8,#0x3
7102bb90cc  mov x0,x23
7102bb90d0  mov w1,wzr
7102bb90d4  madd x26,x27,x28,x24
7102bb90d8  bl 0x71039c02a0
7102bb90dc  madd x8,x20,x28,x24
7102bb90e0  cmp x19,x22
7102bb90e4  b.eq 0x7102bb9270
7102bb90e8  ldr x28,[sp, #0x28]
7102bb90ec  ldr x9,[x19, #-0x28]!
7102bb90f0  cmp x22,x19
7102bb90f4  ldp x10,x11,[x19, #0x8]
7102bb90f8  str x9,[x23, #-0x28]!
7102bb90fc  stp x10,x11,[x23, #0x8]
7102bb9100  str xzr,[x19]
7102bb9104  ldp x9,x10,[x19, #0x18]
7102bb9108  stp xzr,xzr,[x19, #0x8]
7102bb910c  stp x9,x10,[x23, #0x18]
7102bb9110  b.ne 0x7102bb90ec
7102bb9114  ldp x22,x9,[x28, #0x188]
7102bb9118  mov x30,#0xff37
7102bb911c  movk x30,#0x87f1, LSL #16
7102bb9120  mov x2,#0x9e1b
7102bb9124  movk x2,#0x69ff, LSL #16
7102bb9128  mov x3,#0xae8d
7102bb912c  movk x3,#0x1ef8, LSL #16
7102bb9130  movk x30,#0x5, LSL #32
7102bb9134  movk x2,#0x5, LSL #32
7102bb9138  stp x23,x8,[x28, #0x188]
7102bb913c  cmp x9,x22
7102bb9140  movk x3,#0x5, LSL #32
7102bb9144  str x26,[x28, #0x198]
7102bb9148  b.eq 0x7102bb9194
7102bb914c  mov x19,x9
7102bb9150  ldrb w8,[x19, #-0x28]!
7102bb9154  tbz w8,#0x0,0x7102bb9188
7102bb9158  ldur x0,[x9, #-0x18]
7102bb915c  cbz x0,0x7102bb9188
7102bb9160  bl 0x710392eb40
7102bb9164  mov x3,#0xae8d
7102bb9168  movk x3,#0x1ef8, LSL #16
7102bb916c  mov x2,#0x9e1b
7102bb9170  movk x2,#0x69ff, LSL #16
7102bb9174  mov x30,#0xff37
7102bb9178  movk x30,#0x87f1, LSL #16
7102bb917c  movk x3,#0x5, LSL #32
7102bb9180  movk x2,#0x5, LSL #32
7102bb9184  movk x30,#0x5, LSL #32
7102bb9188  cmp x22,x19
7102bb918c  mov x9,x19
7102bb9190  b.ne 0x7102bb9150
7102bb9194  ldr x18,[sp, #0x20]
7102bb9198  cbnz x22,0x7102bb92a8
7102bb919c  b 0x7102bb92d8
7102bb91a0  b.ls 0x7102bb92d8
7102bb91a4  mov w8,#0x28
7102bb91a8  madd x20,x20,x8,x22
7102bb91ac  cmp x20,x19
7102bb91b0  b.eq 0x7102bb91fc
7102bb91b4  mov x22,x19
7102bb91b8  ldrb w8,[x22, #-0x28]!
7102bb91bc  tbz w8,#0x0,0x7102bb91f0
7102bb91c0  ldur x0,[x19, #-0x18]
7102bb91c4  cbz x0,0x7102bb91f0
7102bb91c8  bl 0x710392eb40
7102bb91cc  mov x3,#0xae8d
7102bb91d0  movk x3,#0x1ef8, LSL #16
7102bb91d4  mov x2,#0x9e1b
7102bb91d8  movk x2,#0x69ff, LSL #16
7102bb91dc  mov x30,#0xff37
7102bb91e0  movk x30,#0x87f1, LSL #16
7102bb91e4  movk x3,#0x5, LSL #32
7102bb91e8  movk x2,#0x5, LSL #32
7102bb91ec  movk x30,#0x5, LSL #32
7102bb91f0  cmp x20,x22
7102bb91f4  mov x19,x22
7102bb91f8  b.ne 0x7102bb91b8
7102bb91fc  ldr x18,[sp, #0x20]
7102bb9200  str x20,[x28, #0x190]
7102bb9204  b 0x7102bb92d8
7102bb9208  mov x8,x25
7102bb920c  tbz w25,#0x0,0x7102bb922c
7102bb9210  stp xzr,xzr,[x19, #0x18]
7102bb9214  str xzr,[x19]
7102bb9218  stp xzr,xzr,[x19, #0x8]
7102bb921c  ldr x8,[x28, #0x190]
7102bb9220  add x19,x8,#0x28
7102bb9224  sub x8,x25,#0x1
7102bb9228  str x19,[x28, #0x190]
7102bb922c  cmp x25,#0x1
7102bb9230  b.eq 0x7102bb92d8
7102bb9234  stp xzr,xzr,[x19, #0x18]
7102bb9238  subs x8,x8,#0x2
7102bb923c  stp xzr,xzr,[x19, #0x8]
7102bb9240  str xzr,[x19]
7102bb9244  ldr x9,[x28, #0x190]
7102bb9248  add x10,x9,#0x28
7102bb924c  str x10,[x28, #0x190]
7102bb9250  stp xzr,xzr,[x9, #0x40]
7102bb9254  str xzr,[x9, #0x28]
7102bb9258  stp xzr,xzr,[x9, #0x30]
7102bb925c  ldr x9,[x28, #0x190]
7102bb9260  add x19,x9,#0x28
7102bb9264  str x19,[x28, #0x190]
7102bb9268  b.ne 0x7102bb9234
7102bb926c  b 0x7102bb92d8
7102bb9270  ldr x28,[sp, #0x28]
7102bb9274  mov x30,#0xff37
7102bb9278  movk x30,#0x87f1, LSL #16
7102bb927c  mov x2,#0x9e1b
7102bb9280  movk x2,#0x69ff, LSL #16
7102bb9284  mov x3,#0xae8d
7102bb9288  movk x3,#0x1ef8, LSL #16
7102bb928c  movk x3,#0x5, LSL #32
7102bb9290  str x26,[x28, #0x198]
7102bb9294  stp x23,x8,[x28, #0x188]
7102bb9298  movk x30,#0x5, LSL #32
7102bb929c  movk x2,#0x5, LSL #32
7102bb92a0  ldr x18,[sp, #0x20]
7102bb92a4  cbz x22,0x7102bb92d8
7102bb92a8  mov x0,x22
7102bb92ac  bl 0x710392eb40
7102bb92b0  ldr x18,[sp, #0x20]
7102bb92b4  mov x3,#0xae8d
7102bb92b8  movk x3,#0x1ef8, LSL #16
7102bb92bc  mov x2,#0x9e1b
7102bb92c0  movk x2,#0x69ff, LSL #16
7102bb92c4  mov x30,#0xff37
7102bb92c8  movk x30,#0x87f1, LSL #16
7102bb92cc  movk x3,#0x5, LSL #32
7102bb92d0  movk x2,#0x5, LSL #32
7102bb92d4  movk x30,#0x5, LSL #32
7102bb92d8  ldrb w8,[x18]
7102bb92dc  sub w9,w8,#0xb
7102bb92e0  cmp w9,#0x1
7102bb92e4  b.hi 0x7102bb9774
7102bb92e8  ldur w9,[x18, #0x1]
7102bb92ec  cmp w9,#0x1
7102bb92f0  b.lt 0x7102bb9774
7102bb92f4  add x9,x18,#0x5
7102bb92f8  str x9,[sp, #0x8]
7102bb92fc  adrp x9,0x7104472000
7102bb9300  ldr s8,[x9, #0x5a0]
7102bb9304  fmov s9,wzr
7102bb9308  mov x22,#0xa42f
7102bb930c  movk x22,#0xa30d, LSL #16
7102bb9310  mov x23,#0xe598
7102bb9314  movk x23,#0x74d4, LSL #16
7102bb9318  mov x24,#0xaaff
7102bb931c  movk x24,#0x768a, LSL #16
7102bb9320  mov x26,#0xb741
7102bb9324  movk x26,#0x38e4, LSL #16
7102bb9328  mov x27,#0x372
7102bb932c  movk x27,#0x6805, LSL #16
7102bb9330  mov x20,xzr
7102bb9334  movk x22,#0x19, LSL #32
7102bb9338  movk x23,#0xc, LSL #32
7102bb933c  movk x24,#0xb, LSL #32
7102bb9340  movk x26,#0xb, LSL #32
7102bb9344  movk x27,#0xa, LSL #32
7102bb9348  adrp x16,0x7104742000
7102bb934c  add x16,x16,#0xdbb
7102bb9350  mov w15,#0x28
7102bb9354  mov x19,xzr
7102bb9358  tbnz w20,#0x1f,0x7102bb938c
7102bb935c  and w8,w8,#0xff
7102bb9360  cmp w8,#0xb
7102bb9364  mov x28,x16
7102bb9368  b.ne 0x7102bb9390
7102bb936c  ldur w8,[x18, #0x1]
7102bb9370  cmp w8,w20
7102bb9374  b.le 0x7102bb9388
7102bb9378  ldp x8,x19,[sp, #0x8]
7102bb937c  ldrsw x8,[x8, w20, SXTW #0x2]
7102bb9380  add x28,x18,x8
7102bb9384  b 0x7102bb9390
7102bb9388  mov x19,xzr
7102bb938c  mov x28,x16
7102bb9390  ldrb w8,[x28]
7102bb9394  cmp w8,#0xc
7102bb9398  b.ne 0x7102bb940c
7102bb939c  ldur w8,[x28, #0x1]
7102bb93a0  subs w8,w8,#0x1
7102bb93a4  b.lt 0x7102bb940c
7102bb93a8  ldursw x11,[x28, #0x5]
7102bb93ac  ldp x10,x12,[x19, #0x20]
7102bb93b0  mov w9,wzr
7102bb93b4  add x11,x12,x11
7102bb93b8  add w12,w8,w9
7102bb93bc  cmp w12,#0x0
7102bb93c0  cinc w12,w12,lt
7102bb93c4  asr w12,w12,#0x1
7102bb93c8  add x13,x11,w12, SXTW  #0x3
7102bb93cc  ldr w14,[x13]
7102bb93d0  ldr x14,[x10, x14, LSL #0x3]
7102bb93d4  cmp x14,x26
7102bb93d8  b.eq 0x7102bb93f8
7102bb93dc  sub w13,w12,#0x1
7102bb93e0  cmp x14,x26
7102bb93e4  csel w8,w13,w8,hi
7102bb93e8  csinc w9,w9,w12,hi
7102bb93ec  cmp w9,w8
7102bb93f0  b.le 0x7102bb93b8
7102bb93f4  b 0x7102bb940c
7102bb93f8  ldrsw x8,[x13, #0x4]
7102bb93fc  tbnz w8,#0x1f,0x7102bb940c
7102bb9400  add x9,x28,x8
7102bb9404  mov x8,x19
7102bb9408  b 0x7102bb9414
7102bb940c  mov x8,xzr
7102bb9410  mov x9,x16
7102bb9414  ldrb w10,[x9]
7102bb9418  cmp w10,#0xa
7102bb941c  adrp x1,0x7104328000
7102bb9420  add x1,x1,#0x1b7
7102bb9424  b.ne 0x7102bb9434
7102bb9428  ldursw x9,[x9, #0x1]
7102bb942c  ldr x8,[x8, #0x28]
7102bb9430  add x1,x8,x9
7102bb9434  ldr x8,[x21]
7102bb9438  madd x0,x20,x15,x8
7102bb943c  mov x25,x21
7102bb9440  mov x21,x15
7102bb9444  bl 0x71039c2720
7102bb9448  ldrb w8,[x28]
7102bb944c  adrp x16,0x7104742000
7102bb9450  add x16,x16,#0xdbb
7102bb9454  cmp w8,#0xc
7102bb9458  mov x8,x16
7102bb945c  b.ne 0x7102bb94d0
7102bb9460  ldur w8,[x28, #0x1]
7102bb9464  subs w8,w8,#0x1
7102bb9468  b.lt 0x7102bb94cc
7102bb946c  ldursw x11,[x28, #0x5]
7102bb9470  ldp x10,x12,[x19, #0x20]
7102bb9474  mov w9,wzr
7102bb9478  add x11,x12,x11
7102bb947c  add w12,w8,w9
7102bb9480  cmp w12,#0x0
7102bb9484  cinc w12,w12,lt
7102bb9488  asr w12,w12,#0x1
7102bb948c  add x13,x11,w12, SXTW  #0x3
7102bb9490  ldr w14,[x13]
7102bb9494  ldr x14,[x10, x14, LSL #0x3]
7102bb9498  cmp x14,x27
7102bb949c  b.eq 0x7102bb94bc
7102bb94a0  sub w13,w12,#0x1
7102bb94a4  cmp x14,x27
7102bb94a8  csel w8,w13,w8,hi
7102bb94ac  csinc w9,w9,w12,hi
7102bb94b0  cmp w9,w8
7102bb94b4  b.le 0x7102bb947c
7102bb94b8  b 0x7102bb94cc
7102bb94bc  ldrsw x8,[x13, #0x4]
7102bb94c0  tbnz w8,#0x1f,0x7102bb94cc
7102bb94c4  add x8,x28,x8
7102bb94c8  b 0x7102bb94d0
7102bb94cc  mov x8,x16
7102bb94d0  ldrb w9,[x8]
7102bb94d4  ldr x18,[sp, #0x20]
7102bb94d8  sub w9,w9,#0x1
7102bb94dc  mov x30,#0xff37
7102bb94e0  movk x30,#0x87f1, LSL #16
7102bb94e4  mov x2,#0x9e1b
7102bb94e8  movk x2,#0x69ff, LSL #16
7102bb94ec  mov x3,#0xae8d
7102bb94f0  movk x3,#0x1ef8, LSL #16
7102bb94f4  movk x30,#0x5, LSL #32
7102bb94f8  movk x2,#0x5, LSL #32
7102bb94fc  movk x3,#0x5, LSL #32
7102bb9500  cmp w9,#0x6
7102bb9504  mov x15,x21
7102bb9508  b.hi 0x7102bb953c
7102bb950c  adrp x10,0x7104518000
7102bb9510  add x10,x10,#0x324
7102bb9514  mov x21,x25
7102bb9518  ldrsw x9,[x10, x9, LSL #0x2]
7102bb951c  add x9,x9,x10
7102bb9520  br x9
7102bb9524  ldrb w8,[x8, #0x1]
7102bb9528  b 0x7102bb9554
7102bb952c  ldur w8,[x8, #0x1]
7102bb9530  b 0x7102bb9554
7102bb9534  ldursh w8,[x8, #0x1]
7102bb9538  b 0x7102bb9554
7102bb953c  mov w8,#0x1
7102bb9540  mov x21,x25
7102bb9544  b 0x7102bb9554
7102bb9548  ldrsb w8,[x8, #0x1]
7102bb954c  b 0x7102bb9554
7102bb9550  ldurh w8,[x8, #0x1]
7102bb9554  ldr x9,[x21]
7102bb9558  madd x9,x20,x15,x9
7102bb955c  str w8,[x9, #0x18]
7102bb9560  ldrb w8,[x28]
7102bb9564  cmp w8,#0xc
7102bb9568  mov x8,x16
7102bb956c  b.ne 0x7102bb95e0
7102bb9570  ldur w8,[x28, #0x1]
7102bb9574  subs w8,w8,#0x1
7102bb9578  b.lt 0x7102bb95dc
7102bb957c  ldursw x11,[x28, #0x5]
7102bb9580  ldp x10,x12,[x19, #0x20]
7102bb9584  mov w9,wzr
7102bb9588  add x11,x12,x11
7102bb958c  add w12,w8,w9
7102bb9590  cmp w12,#0x0
7102bb9594  cinc w12,w12,lt
7102bb9598  asr w12,w12,#0x1
7102bb959c  add x13,x11,w12, SXTW  #0x3
7102bb95a0  ldr w14,[x13]
7102bb95a4  ldr x14,[x10, x14, LSL #0x3]
7102bb95a8  cmp x14,x23
7102bb95ac  b.eq 0x7102bb95cc
7102bb95b0  sub w13,w12,#0x1
7102bb95b4  cmp x14,x23
7102bb95b8  csel w8,w13,w8,hi
7102bb95bc  csinc w9,w9,w12,hi
7102bb95c0  cmp w9,w8
7102bb95c4  b.le 0x7102bb958c
7102bb95c8  b 0x7102bb95dc
7102bb95cc  ldrsw x8,[x13, #0x4]
7102bb95d0  tbnz w8,#0x1f,0x7102bb95dc
7102bb95d4  add x8,x28,x8
7102bb95d8  b 0x7102bb95e0
7102bb95dc  mov x8,x16
7102bb95e0  ldrb w9,[x8]
7102bb95e4  mov v0.16B,v8.16B
7102bb95e8  cmp w9,#0x8
7102bb95ec  b.ne 0x7102bb95f4
7102bb95f0  ldur s0,[x8, #0x1]
7102bb95f4  ldr x8,[x21]
7102bb95f8  madd x8,x20,x15,x8
7102bb95fc  str s0,[x8, #0x1c]
7102bb9600  ldrb w8,[x28]
7102bb9604  cmp w8,#0xc
7102bb9608  mov x8,x16
7102bb960c  b.ne 0x7102bb9680
7102bb9610  ldur w8,[x28, #0x1]
7102bb9614  subs w8,w8,#0x1
7102bb9618  b.lt 0x7102bb967c
7102bb961c  ldursw x11,[x28, #0x5]
7102bb9620  ldp x10,x12,[x19, #0x20]
7102bb9624  mov w9,wzr
7102bb9628  add x11,x12,x11
7102bb962c  add w12,w8,w9
7102bb9630  cmp w12,#0x0
7102bb9634  cinc w12,w12,lt
7102bb9638  asr w12,w12,#0x1
7102bb963c  add x13,x11,w12, SXTW  #0x3
7102bb9640  ldr w14,[x13]
7102bb9644  ldr x14,[x10, x14, LSL #0x3]
7102bb9648  cmp x14,x24
7102bb964c  b.eq 0x7102bb966c
7102bb9650  sub w13,w12,#0x1
7102bb9654  cmp x14,x24
7102bb9658  csel w8,w13,w8,hi
7102bb965c  csinc w9,w9,w12,hi
7102bb9660  cmp w9,w8
7102bb9664  b.le 0x7102bb962c
7102bb9668  b 0x7102bb967c
7102bb966c  ldrsw x8,[x13, #0x4]
7102bb9670  tbnz w8,#0x1f,0x7102bb967c
7102bb9674  add x8,x28,x8
7102bb9678  b 0x7102bb9680
7102bb967c  mov x8,x16
7102bb9680  ldrb w9,[x8]
7102bb9684  mov v0.16B,v8.16B
7102bb9688  cmp w9,#0x8
7102bb968c  b.ne 0x7102bb9694
7102bb9690  ldur s0,[x8, #0x1]
7102bb9694  ldr x8,[x21]
7102bb9698  madd x8,x20,x15,x8
7102bb969c  str s0,[x8, #0x20]
7102bb96a0  ldrb w8,[x28]
7102bb96a4  cmp w8,#0xc
7102bb96a8  mov x8,x16
7102bb96ac  b.ne 0x7102bb9720
7102bb96b0  ldur w8,[x28, #0x1]
7102bb96b4  subs w8,w8,#0x1
7102bb96b8  b.lt 0x7102bb971c
7102bb96bc  ldursw x11,[x28, #0x5]
7102bb96c0  ldp x10,x12,[x19, #0x20]
7102bb96c4  mov w9,wzr
7102bb96c8  add x11,x12,x11
7102bb96cc  add w12,w8,w9
7102bb96d0  cmp w12,#0x0
7102bb96d4  cinc w12,w12,lt
7102bb96d8  asr w12,w12,#0x1
7102bb96dc  add x13,x11,w12, SXTW  #0x3
7102bb96e0  ldr w14,[x13]
7102bb96e4  ldr x14,[x10, x14, LSL #0x3]
7102bb96e8  cmp x14,x22
7102bb96ec  b.eq 0x7102bb970c
7102bb96f0  sub w13,w12,#0x1
7102bb96f4  cmp x14,x22
7102bb96f8  csel w8,w13,w8,hi
7102bb96fc  csinc w9,w9,w12,hi
7102bb9700  cmp w9,w8
7102bb9704  b.le 0x7102bb96cc
7102bb9708  b 0x7102bb971c
7102bb970c  ldrsw x8,[x13, #0x4]
7102bb9710  tbnz w8,#0x1f,0x7102bb971c
7102bb9714  add x8,x28,x8
7102bb9718  b 0x7102bb9720
7102bb971c  mov x8,x16
7102bb9720  ldrb w9,[x8]
7102bb9724  mov v0.16B,v9.16B
7102bb9728  cmp w9,#0x8
7102bb972c  b.ne 0x7102bb9734
7102bb9730  ldur s0,[x8, #0x1]
7102bb9734  ldr x8,[x21]
7102bb9738  madd x8,x20,x15,x8
7102bb973c  add x20,x20,#0x1
7102bb9740  str s0,[x8, #0x24]
7102bb9744  ldrb w8,[x18]
7102bb9748  ldr x28,[sp, #0x28]
7102bb974c  sub w9,w8,#0xb
7102bb9750  cmp w9,#0x1
7102bb9754  b.hi 0x7102bb9768
7102bb9758  ldur w9,[x18, #0x1]
7102bb975c  cmp x20,w9, SXTW 
7102bb9760  b.lt 0x7102bb9354
7102bb9764  b 0x7102bb9774
7102bb9768  mov w9,wzr
7102bb976c  cmp x20,w9, SXTW 
7102bb9770  b.lt 0x7102bb9354
7102bb9774  ldr x8,[sp, #0x30]
7102bb9778  ldr x8,[x8]
7102bb977c  ldrb w9,[x8]
7102bb9780  cmp w9,#0xc
7102bb9784  b.ne 0x7102bb9814
7102bb9788  ldur w9,[x8, #0x1]
7102bb978c  subs w9,w9,#0x1
7102bb9790  b.lt 0x7102bb9814
7102bb9794  ldr x11,[sp, #0x18]
7102bb9798  ldr x19,[x11]
7102bb979c  ldursw x12,[x8, #0x5]
7102bb97a0  ldp x11,x13,[x19, #0x20]
7102bb97a4  add x12,x13,x12
7102bb97a8  mov x13,#0x2964
7102bb97ac  movk x13,#0x9ced, LSL #16
7102bb97b0  mov w10,wzr
7102bb97b4  adrp x20,0x7104742000
7102bb97b8  add x20,x20,#0xdbb
7102bb97bc  movk x13,#0xb, LSL #32
7102bb97c0  add w14,w9,w10
7102bb97c4  cmp w14,#0x0
7102bb97c8  cinc w14,w14,lt
7102bb97cc  asr w14,w14,#0x1
7102bb97d0  add x15,x12,w14, SXTW  #0x3
7102bb97d4  ldr w16,[x15]
7102bb97d8  ldr x16,[x11, x16, LSL #0x3]
7102bb97dc  cmp x16,x13
7102bb97e0  b.eq 0x7102bb9804
7102bb97e4  sub w15,w14,#0x1
7102bb97e8  cmp x16,x13
7102bb97ec  csel w9,w15,w9,hi
7102bb97f0  csinc w10,w10,w14,hi
7102bb97f4  cmp w10,w9
7102bb97f8  b.le 0x7102bb97c0
7102bb97fc  mov x19,xzr
7102bb9800  b 0x7102bb9820
7102bb9804  ldrsw x9,[x15, #0x4]
7102bb9808  tbnz w9,#0x1f,0x7102bb9814
7102bb980c  add x20,x8,x9
7102bb9810  b 0x7102bb9820
7102bb9814  mov x19,xzr
7102bb9818  adrp x20,0x7104742000
7102bb981c  add x20,x20,#0xdbb
7102bb9820  ldrb w8,[x20]
7102bb9824  sub w8,w8,#0xb
7102bb9828  cmp w8,#0x1
7102bb982c  b.hi 0x7102bb9838
7102bb9830  ldur w8,[x20, #0x1]
7102bb9834  b 0x7102bb983c
7102bb9838  mov w8,wzr
7102bb983c  ldp x9,x10,[x28, #0x1a0]
7102bb9840  sub x10,x10,x9
7102bb9844  orr x11,xzr,#-0x5555555555555556
7102bb9848  movk x11,#0xaaab
7102bb984c  asr x10,x10,#0x2
7102bb9850  mul x10,x10,x11
7102bb9854  sxtw x8,w8
7102bb9858  add x21,x28,#0x1a0
7102bb985c  cmp x10,x8
7102bb9860  b.cs 0x7102bb98a4
7102bb9864  sub x1,x8,x10
7102bb9868  mov x0,x21
7102bb986c  bl 0x7102bbe0a0
7102bb9870  mov x3,#0xae8d
7102bb9874  movk x3,#0x1ef8, LSL #16
7102bb9878  mov x2,#0x9e1b
7102bb987c  movk x2,#0x69ff, LSL #16
7102bb9880  mov x30,#0xff37
7102bb9884  movk x30,#0x87f1, LSL #16
7102bb9888  mov x17,#0x52e1
7102bb988c  movk x17,#0x7374, LSL #16
7102bb9890  movk x3,#0x5, LSL #32
7102bb9894  movk x2,#0x5, LSL #32
7102bb9898  movk x30,#0x5, LSL #32
7102bb989c  movk x17,#0xa, LSL #32
7102bb98a0  b 0x7102bb98c0
7102bb98a4  mov x17,#0x52e1
7102bb98a8  movk x17,#0x7374, LSL #16
7102bb98ac  movk x17,#0xa, LSL #32
7102bb98b0  b.ls 0x7102bb98c0
7102bb98b4  orr w10,wzr,#0xc
7102bb98b8  madd x8,x8,x10,x9
7102bb98bc  str x8,[x28, #0x1a8]
7102bb98c0  ldrb w12,[x20]
7102bb98c4  sub w8,w12,#0xb
7102bb98c8  cmp w8,#0x1
7102bb98cc  b.hi 0x7102bb9b9c
7102bb98d0  ldur w8,[x20, #0x1]
7102bb98d4  cmp w8,#0x1
7102bb98d8  b.lt 0x7102bb9b9c
7102bb98dc  adrp x11,0x7104472000
7102bb98e0  ldr s1,[x11, #0x674]
7102bb98e4  fmov s0,wzr
7102bb98e8  mov x8,xzr
7102bb98ec  add x9,x20,#0x5
7102bb98f0  orr w10,wzr,#0xc
7102bb98f4  adrp x11,0x7104742000
7102bb98f8  add x11,x11,#0xdbb
7102bb98fc  mov x13,xzr
7102bb9900  tbnz w8,#0x1f,0x7102bb9934
7102bb9904  and w12,w12,#0xff
7102bb9908  cmp w12,#0xb
7102bb990c  mov x12,x11
7102bb9910  b.ne 0x7102bb9938
7102bb9914  ldur w12,[x20, #0x1]
7102bb9918  cmp w12,w8
7102bb991c  b.le 0x7102bb9930
7102bb9920  ldrsw x12,[x9, w8, SXTW #0x2]
7102bb9924  add x12,x20,x12
7102bb9928  mov x13,x19
7102bb992c  b 0x7102bb9938
7102bb9930  mov x13,xzr
7102bb9934  mov x12,x11
7102bb9938  ldrb w14,[x12]
7102bb993c  cmp w14,#0xc
7102bb9940  mov x14,x11
7102bb9944  b.ne 0x7102bb99d4
7102bb9948  ldur w14,[x12, #0x1]
7102bb994c  subs w14,w14,#0x1
7102bb9950  b.lt 0x7102bb99d0
7102bb9954  ldursw x17,[x12, #0x5]
7102bb9958  ldp x16,x18,[x13, #0x20]
7102bb995c  mov w15,wzr
7102bb9960  add x17,x18,x17
7102bb9964  add w18,w14,w15
7102bb9968  cmp w18,#0x0
7102bb996c  cinc w18,w18,lt
7102bb9970  asr w18,w18,#0x1
7102bb9974  add x0,x17,w18, SXTW  #0x3
7102bb9978  ldr w1,[x0]
7102bb997c  ldr x1,[x16, x1, LSL #0x3]
7102bb9980  cmp x1,x2
7102bb9984  b.eq 0x7102bb99b4
7102bb9988  sub w0,w18,#0x1
7102bb998c  cmp x1,x2
7102bb9990  csel w14,w0,w14,hi
7102bb9994  csinc w15,w15,w18,hi
7102bb9998  cmp w15,w14
7102bb999c  b.le 0x7102bb9964
7102bb99a0  mov x17,#0x52e1
7102bb99a4  movk x17,#0x7374, LSL #16
7102bb99a8  mov x14,x11
7102bb99ac  movk x17,#0xa, LSL #32
7102bb99b0  b 0x7102bb99d4
7102bb99b4  ldrsw x14,[x0, #0x4]
7102bb99b8  mov x17,#0x52e1
7102bb99bc  movk x17,#0x7374, LSL #16
7102bb99c0  movk x17,#0xa, LSL #32
7102bb99c4  tbnz w14,#0x1f,0x7102bb99d0
7102bb99c8  add x14,x12,x14
7102bb99cc  b 0x7102bb99d4
7102bb99d0  mov x14,x11
7102bb99d4  ldrb w15,[x14]
7102bb99d8  mov v2.16B,v0.16B
7102bb99dc  cmp w15,#0x8
7102bb99e0  b.ne 0x7102bb99e8
7102bb99e4  ldur s2,[x14, #0x1]
7102bb99e8  mul x15,x8,x10
7102bb99ec  ldr x14,[x21]
7102bb99f0  str s2,[x14,x15]
7102bb99f4  ldrb w14,[x12]
7102bb99f8  cmp w14,#0xc
7102bb99fc  mov x14,x11
7102bb9a00  b.ne 0x7102bb9a90
7102bb9a04  ldur w14,[x12, #0x1]
7102bb9a08  subs w14,w14,#0x1
7102bb9a0c  b.lt 0x7102bb9a8c
7102bb9a10  ldursw x17,[x12, #0x5]
7102bb9a14  ldp x16,x18,[x13, #0x20]
7102bb9a18  mov w15,wzr
7102bb9a1c  add x17,x18,x17
7102bb9a20  add w18,w14,w15
7102bb9a24  cmp w18,#0x0
7102bb9a28  cinc w18,w18,lt
7102bb9a2c  asr w18,w18,#0x1
7102bb9a30  add x0,x17,w18, SXTW  #0x3
7102bb9a34  ldr w1,[x0]
7102bb9a38  ldr x1,[x16, x1, LSL #0x3]
7102bb9a3c  cmp x1,x3
7102bb9a40  b.eq 0x7102bb9a70
7102bb9a44  sub w0,w18,#0x1
7102bb9a48  cmp x1,x3
7102bb9a4c  csel w14,w0,w14,hi
7102bb9a50  csinc w15,w15,w18,hi
7102bb9a54  cmp w15,w14
7102bb9a58  b.le 0x7102bb9a20
7102bb9a5c  mov x17,#0x52e1
7102bb9a60  movk x17,#0x7374, LSL #16
7102bb9a64  mov x14,x11
7102bb9a68  movk x17,#0xa, LSL #32
7102bb9a6c  b 0x7102bb9a90
7102bb9a70  ldrsw x14,[x0, #0x4]
7102bb9a74  mov x17,#0x52e1
7102bb9a78  movk x17,#0x7374, LSL #16
7102bb9a7c  movk x17,#0xa, LSL #32
7102bb9a80  tbnz w14,#0x1f,0x7102bb9a8c
7102bb9a84  add x14,x12,x14
7102bb9a88  b 0x7102bb9a90
7102bb9a8c  mov x14,x11
7102bb9a90  ldrb w15,[x14]
7102bb9a94  mov v2.16B,v1.16B
7102bb9a98  cmp w15,#0x8
7102bb9a9c  b.ne 0x7102bb9aa4
7102bb9aa0  ldur s2,[x14, #0x1]
7102bb9aa4  ldr x14,[x21]
7102bb9aa8  madd x14,x8,x10,x14
7102bb9aac  str s2,[x14, #0x4]
7102bb9ab0  ldrb w14,[x12]
7102bb9ab4  cmp w14,#0xc
7102bb9ab8  mov x14,x11
7102bb9abc  b.ne 0x7102bb9b4c
7102bb9ac0  ldur w14,[x12, #0x1]
7102bb9ac4  subs w14,w14,#0x1
7102bb9ac8  b.lt 0x7102bb9b48
7102bb9acc  ldursw x17,[x12, #0x5]
7102bb9ad0  ldp x16,x13,[x13, #0x20]
7102bb9ad4  mov w15,wzr
7102bb9ad8  add x13,x13,x17
7102bb9adc  add w17,w14,w15
7102bb9ae0  cmp w17,#0x0
7102bb9ae4  cinc w17,w17,lt
7102bb9ae8  asr w17,w17,#0x1
7102bb9aec  add x18,x13,w17, SXTW  #0x3
7102bb9af0  ldr w0,[x18]
7102bb9af4  ldr x0,[x16, x0, LSL #0x3]
7102bb9af8  cmp x0,x30
7102bb9afc  b.eq 0x7102bb9b2c
7102bb9b00  sub w18,w17,#0x1
7102bb9b04  cmp x0,x30
7102bb9b08  csel w14,w18,w14,hi
7102bb9b0c  csinc w15,w15,w17,hi
7102bb9b10  cmp w15,w14
7102bb9b14  b.le 0x7102bb9adc
7102bb9b18  mov x17,#0x52e1
7102bb9b1c  movk x17,#0x7374, LSL #16
7102bb9b20  mov x14,x11
7102bb9b24  movk x17,#0xa, LSL #32
7102bb9b28  b 0x7102bb9b4c
7102bb9b2c  ldrsw x13,[x18, #0x4]
7102bb9b30  mov x17,#0x52e1
7102bb9b34  movk x17,#0x7374, LSL #16
7102bb9b38  movk x17,#0xa, LSL #32
7102bb9b3c  tbnz w13,#0x1f,0x7102bb9b48
7102bb9b40  add x14,x12,x13
7102bb9b44  b 0x7102bb9b4c
7102bb9b48  mov x14,x11
7102bb9b4c  ldrb w12,[x14]
7102bb9b50  mov v2.16B,v0.16B
7102bb9b54  cmp w12,#0x8
7102bb9b58  b.ne 0x7102bb9b60
7102bb9b5c  ldur s2,[x14, #0x1]
7102bb9b60  ldr x12,[x21]
7102bb9b64  madd x12,x8,x10,x12
7102bb9b68  add x8,x8,#0x1
7102bb9b6c  str s2,[x12, #0x8]
7102bb9b70  ldrb w12,[x20]
7102bb9b74  sub w13,w12,#0xb
7102bb9b78  cmp w13,#0x1
7102bb9b7c  b.hi 0x7102bb9b90
7102bb9b80  ldur w13,[x20, #0x1]
7102bb9b84  cmp x8,w13, SXTW 
7102bb9b88  b.lt 0x7102bb98fc
7102bb9b8c  b 0x7102bb9b9c
7102bb9b90  mov w13,wzr
7102bb9b94  cmp x8,w13, SXTW 
7102bb9b98  b.lt 0x7102bb98fc
7102bb9b9c  ldr x8,[sp, #0x30]
7102bb9ba0  ldr x8,[x8]
7102bb9ba4  ldrb w9,[x8]
7102bb9ba8  cmp w9,#0xc
7102bb9bac  b.ne 0x7102bb9c3c
7102bb9bb0  ldur w9,[x8, #0x1]
7102bb9bb4  subs w9,w9,#0x1
7102bb9bb8  b.lt 0x7102bb9c3c
7102bb9bbc  ldr x11,[sp, #0x18]
7102bb9bc0  ldr x18,[x11]
7102bb9bc4  ldursw x12,[x8, #0x5]
7102bb9bc8  ldp x11,x13,[x18, #0x20]
7102bb9bcc  add x12,x13,x12
7102bb9bd0  mov x13,#0xbfcc
7102bb9bd4  movk x13,#0x377d, LSL #16
7102bb9bd8  mov w10,wzr
7102bb9bdc  adrp x0,0x7104742000
7102bb9be0  add x0,x0,#0xdbb
7102bb9be4  movk x13,#0xb, LSL #32
7102bb9be8  add w14,w9,w10
7102bb9bec  cmp w14,#0x0
7102bb9bf0  cinc w14,w14,lt
7102bb9bf4  asr w14,w14,#0x1
7102bb9bf8  add x15,x12,w14, SXTW  #0x3
7102bb9bfc  ldr w16,[x15]
7102bb9c00  ldr x16,[x11, x16, LSL #0x3]
7102bb9c04  cmp x16,x13
7102bb9c08  b.eq 0x7102bb9c2c
7102bb9c0c  sub w15,w14,#0x1
7102bb9c10  cmp x16,x13
7102bb9c14  csel w9,w15,w9,hi
7102bb9c18  csinc w10,w10,w14,hi
7102bb9c1c  cmp w10,w9
7102bb9c20  b.le 0x7102bb9be8
7102bb9c24  mov x18,xzr
7102bb9c28  b 0x7102bb9c48
7102bb9c2c  ldrsw x9,[x15, #0x4]
7102bb9c30  tbnz w9,#0x1f,0x7102bb9c3c
7102bb9c34  add x0,x8,x9
7102bb9c38  b 0x7102bb9c48
7102bb9c3c  mov x18,xzr
7102bb9c40  adrp x0,0x7104742000
7102bb9c44  add x0,x0,#0xdbb
7102bb9c48  ldrb w8,[x0]
7102bb9c4c  sub w8,w8,#0xb
7102bb9c50  cmp w8,#0x1
7102bb9c54  str x18,[sp, #0x8]
7102bb9c58  b.hi 0x7102bb9c64
7102bb9c5c  ldur w8,[x0, #0x1]
7102bb9c60  b 0x7102bb9c68
7102bb9c64  mov w8,wzr
7102bb9c68  ldp x22,x19,[x28, #0x1b8]
7102bb9c6c  sxtw x25,w8
7102bb9c70  sub x8,x19,x22
7102bb9c74  asr x9,x8,#0x3
7102bb9c78  mov x8,#0x8e39
7102bb9c7c  movk x8,#0x38e3, LSL #16
7102bb9c80  movk x8,#0xe38e, LSL #32
7102bb9c84  movk x8,#0x8e38, LSL #48
7102bb9c88  mul x26,x9,x8
7102bb9c8c  add x21,x28,#0x1b8
7102bb9c90  str x0,[sp, #0x20]
7102bb9c94  cmp x26,x25
7102bb9c98  b.cs 0x7102bb9cf4
7102bb9c9c  ldr x9,[x28, #0x1c8]
7102bb9ca0  sub x10,x9,x19
7102bb9ca4  asr x10,x10,#0x3
7102bb9ca8  mul x10,x10,x8
7102bb9cac  sub x20,x25,x26
7102bb9cb0  cmp x10,x20
7102bb9cb4  b.cs 0x7102bb9d64
7102bb9cb8  tbnz w25,#0x1f,0x7102bbde84
7102bb9cbc  sub x9,x9,x22
7102bb9cc0  asr x9,x9,#0x3
7102bb9cc4  mul x8,x9,x8
7102bb9cc8  mov x9,#0x71c6
7102bb9ccc  movk x9,#0xc71c, LSL #16
7102bb9cd0  movk x9,#0x1c71, LSL #32
7102bb9cd4  movk x9,#0x1c7, LSL #48
7102bb9cd8  cmp x8,x9
7102bb9cdc  b.hi 0x7102bb9de4
7102bb9ce0  lsl x8,x8,#0x1
7102bb9ce4  cmp x8,x25
7102bb9ce8  csel x27,x25,x8,cc
7102bb9cec  cbnz x27,0x7102bb9df4
7102bb9cf0  b 0x7102bb9e58
7102bb9cf4  b.ls 0x7102bb9f84
7102bb9cf8  mov w8,#0x48
7102bb9cfc  madd x20,x25,x8,x22
7102bb9d00  cmp x20,x19
7102bb9d04  b.eq 0x7102bb9d58
7102bb9d08  ldurb w8,[x19, #-0x20]
7102bb9d0c  tbz w8,#0x0,0x7102bb9d28
7102bb9d10  ldur x0,[x19, #-0x10]
7102bb9d14  cbz x0,0x7102bb9d28
7102bb9d18  bl 0x710392eb40
7102bb9d1c  mov x17,#0x52e1
7102bb9d20  movk x17,#0x7374, LSL #16
7102bb9d24  movk x17,#0xa, LSL #32
7102bb9d28  ldurb w8,[x19, #-0x48]
7102bb9d2c  sub x22,x19,#0x48
7102bb9d30  tbz w8,#0x0,0x7102bb9d4c
7102bb9d34  ldur x0,[x19, #-0x38]
7102bb9d38  cbz x0,0x7102bb9d4c
7102bb9d3c  bl 0x710392eb40
7102bb9d40  mov x17,#0x52e1
7102bb9d44  movk x17,#0x7374, LSL #16
7102bb9d48  movk x17,#0xa, LSL #32
7102bb9d4c  cmp x20,x22
7102bb9d50  mov x19,x22
7102bb9d54  b.ne 0x7102bb9d08
7102bb9d58  ldr x0,[sp, #0x20]
7102bb9d5c  str x20,[x28, #0x1c0]
7102bb9d60  b 0x7102bb9f84
7102bb9d64  mov x8,x20
7102bb9d68  tbz w20,#0x0,0x7102bb9d90
7102bb9d6c  stp xzr,xzr,[x19, #0x38]
7102bb9d70  str xzr,[x19]
7102bb9d74  stp xzr,xzr,[x19, #0x28]
7102bb9d78  stp xzr,xzr,[x19, #0x18]
7102bb9d7c  stp xzr,xzr,[x19, #0x8]
7102bb9d80  ldr x8,[x28, #0x1c0]
7102bb9d84  add x19,x8,#0x48
7102bb9d88  sub x8,x20,#0x1
7102bb9d8c  str x19,[x28, #0x1c0]
7102bb9d90  cmp x20,#0x1
7102bb9d94  b.eq 0x7102bb9f84
7102bb9d98  stp xzr,xzr,[x19, #0x38]
7102bb9d9c  subs x8,x8,#0x2
7102bb9da0  stp xzr,xzr,[x19, #0x28]
7102bb9da4  str xzr,[x19]
7102bb9da8  stp xzr,xzr,[x19, #0x18]
7102bb9dac  stp xzr,xzr,[x19, #0x8]
7102bb9db0  ldr x9,[x28, #0x1c0]
7102bb9db4  add x10,x9,#0x48
7102bb9db8  str x10,[x28, #0x1c0]
7102bb9dbc  str xzr,[x9, #0x48]
7102bb9dc0  stp xzr,xzr,[x9, #0x80]
7102bb9dc4  stp xzr,xzr,[x9, #0x70]
7102bb9dc8  stp xzr,xzr,[x9, #0x60]
7102bb9dcc  stp xzr,xzr,[x9, #0x50]
7102bb9dd0  ldr x9,[x28, #0x1c0]
7102bb9dd4  add x19,x9,#0x48
7102bb9dd8  str x19,[x28, #0x1c0]
7102bb9ddc  b.ne 0x7102bb9d98
7102bb9de0  b 0x7102bb9f84
7102bb9de4  mov x27,#0xe38e
7102bb9de8  movk x27,#0x8e38, LSL #16
7102bb9dec  movk x27,#0x38e3, LSL #32
7102bb9df0  movk x27,#0x38e, LSL #48
7102bb9df4  add x8,x27,x27, LSL #0x3
7102bb9df8  lsl x8,x8,#0x3
7102bb9dfc  cmp x8,#0x0
7102bb9e00  csinc x23,x8,xzr,ne
7102bb9e04  mov w0,#0x10
7102bb9e08  mov x1,x23
7102bb9e0c  bl 0x710392e290
7102bb9e10  mov x24,x0
7102bb9e14  cbnz x0,0x7102bb9e5c
7102bb9e18  adrp x8,0x7105332000
7102bb9e1c  ldr x0,[x8, #0xf00]
7102bb9e20  cbz x0,0x7102bb9e58
7102bb9e24  str wzr,[sp, #0x4c]
7102bb9e28  str x23,[sp, #0x38]
7102bb9e2c  ldr x8,[x0]
7102bb9e30  ldr x8,[x8, #0x30]
7102bb9e34  add x1,sp,#0x4c
7102bb9e38  add x2,sp,#0x38
7102bb9e3c  blr x8
7102bb9e40  tbz w0,#0x0,0x7102bb9e58
7102bb9e44  mov w0,#0x10
7102bb9e48  mov x1,x23
7102bb9e4c  bl 0x710392e290
7102bb9e50  mov x24,x0
7102bb9e54  cbnz x0,0x7102bb9e5c
7102bb9e58  mov x24,xzr
7102bb9e5c  mov w28,#0x48
7102bb9e60  madd x23,x26,x28,x24
7102bb9e64  add x8,x20,x20, LSL #0x3
7102bb9e68  lsl x2,x8,#0x3
7102bb9e6c  mov x0,x23
7102bb9e70  mov w1,wzr
7102bb9e74  madd x26,x27,x28,x24
7102bb9e78  bl 0x71039c02a0
7102bb9e7c  madd x8,x25,x28,x24
7102bb9e80  cmp x19,x22
7102bb9e84  b.eq 0x7102bbde48
7102bb9e88  ldr x28,[sp, #0x28]
7102bb9e8c  mov x9,xzr
7102bb9e90  sub x10,x22,x19
7102bb9e94  add x12,x19,x9
7102bb9e98  ldp x13,x14,[x12, #-0x48]
7102bb9e9c  ldur x15,[x12, #-0x38]
7102bb9ea0  add x11,x23,x9
7102bb9ea4  sub x9,x9,#0x48
7102bb9ea8  stp x14,x15,[x11, #-0x40]
7102bb9eac  stur x13,[x11, #-0x48]
7102bb9eb0  ldur x13,[x12, #-0x30]
7102bb9eb4  ldur w14,[x12, #-0x28]
7102bb9eb8  stur xzr,[x12, #-0x48]
7102bb9ebc  stp xzr,xzr,[x12, #-0x40]
7102bb9ec0  stur w14,[x11, #-0x28]
7102bb9ec4  stur x13,[x11, #-0x30]
7102bb9ec8  ldp x13,x14,[x12, #-0x20]
7102bb9ecc  ldur x15,[x12, #-0x10]
7102bb9ed0  stp x14,x15,[x11, #-0x18]
7102bb9ed4  stur x13,[x11, #-0x20]
7102bb9ed8  stp xzr,xzr,[x12, #-0x18]
7102bb9edc  stur xzr,[x12, #-0x20]
7102bb9ee0  ldur x12,[x12, #-0x8]
7102bb9ee4  cmp x10,x9
7102bb9ee8  stur x12,[x11, #-0x8]
7102bb9eec  b.ne 0x7102bb9e94
7102bb9ef0  ldp x22,x19,[x28, #0x1b8]
7102bb9ef4  mov x17,#0x52e1
7102bb9ef8  movk x17,#0x7374, LSL #16
7102bb9efc  add x9,x23,x9
7102bb9f00  movk x17,#0xa, LSL #32
7102bb9f04  stp x9,x8,[x28, #0x1b8]
7102bb9f08  str x26,[x28, #0x1c8]
7102bb9f0c  cmp x19,x22
7102bb9f10  b.eq 0x7102bb9f64
7102bb9f14  ldurb w8,[x19, #-0x20]
7102bb9f18  tbz w8,#0x0,0x7102bb9f34
7102bb9f1c  ldur x0,[x19, #-0x10]
7102bb9f20  cbz x0,0x7102bb9f34
7102bb9f24  bl 0x710392eb40
7102bb9f28  mov x17,#0x52e1
7102bb9f2c  movk x17,#0x7374, LSL #16
7102bb9f30  movk x17,#0xa, LSL #32
7102bb9f34  ldurb w8,[x19, #-0x48]
7102bb9f38  sub x20,x19,#0x48
7102bb9f3c  tbz w8,#0x0,0x7102bb9f58
7102bb9f40  ldur x0,[x19, #-0x38]
7102bb9f44  cbz x0,0x7102bb9f58
7102bb9f48  bl 0x710392eb40
7102bb9f4c  mov x17,#0x52e1
7102bb9f50  movk x17,#0x7374, LSL #16
7102bb9f54  movk x17,#0xa, LSL #32
7102bb9f58  cmp x22,x20
7102bb9f5c  mov x19,x20
7102bb9f60  b.ne 0x7102bb9f14
7102bb9f64  ldr x0,[sp, #0x20]
7102bb9f68  cbz x22,0x7102bb9f84
7102bb9f6c  mov x0,x22
7102bb9f70  bl 0x710392eb40
7102bb9f74  ldr x0,[sp, #0x20]
7102bb9f78  mov x17,#0x52e1
7102bb9f7c  movk x17,#0x7374, LSL #16
7102bb9f80  movk x17,#0xa, LSL #32
7102bb9f84  ldrb w8,[x0]
7102bb9f88  ldr x19,[sp, #0x8]
7102bb9f8c  sub w9,w8,#0xb
7102bb9f90  cmp w9,#0x1
7102bb9f94  b.hi 0x7102bba524
7102bb9f98  ldur w9,[x0, #0x1]
7102bb9f9c  cmp w9,#0x1
7102bb9fa0  b.lt 0x7102bba524
7102bb9fa4  adrp x9,0x7104472000
7102bb9fa8  ldr s8,[x9, #0x1b8]
7102bb9fac  fmov s9,wzr
7102bb9fb0  fmov s10,0xc1f00000
7102bb9fb4  fmov s11,0x41200000
7102bb9fb8  fmov s12,0x41a00000
7102bb9fbc  mov x23,#0x2a8
7102bb9fc0  movk x23,#0x876f, LSL #16
7102bb9fc4  mov x24,#0xb741
7102bb9fc8  movk x24,#0x38e4, LSL #16
7102bb9fcc  mov x26,#0xeb68
7102bb9fd0  movk x26,#0x6177, LSL #16
7102bb9fd4  mov x22,xzr
7102bb9fd8  movk x23,#0xf, LSL #32
7102bb9fdc  movk x24,#0xb, LSL #32
7102bb9fe0  movk x26,#0x5, LSL #32
7102bb9fe4  adrp x20,0x7104742000
7102bb9fe8  add x20,x20,#0xdbb
7102bb9fec  add x9,x0,#0x5
7102bb9ff0  mov w25,#0x48
7102bb9ff4  str x9,[sp, #0x10]
7102bb9ff8  mov x28,xzr
7102bb9ffc  tbnz w22,#0x1f,0x7102bba034
7102bba000  and w8,w8,#0xff
7102bba004  cmp w8,#0xb
7102bba008  mov x27,x20
7102bba00c  b.ne 0x7102bba038
7102bba010  ldur w8,[x0, #0x1]
7102bba014  cmp w8,w22
7102bba018  b.le 0x7102bba030
7102bba01c  ldr x8,[sp, #0x10]
7102bba020  ldrsw x8,[x8, w22, SXTW #0x2]
7102bba024  add x27,x0,x8
7102bba028  mov x28,x19
7102bba02c  b 0x7102bba038
7102bba030  mov x28,xzr
7102bba034  mov x27,x20
7102bba038  ldrb w8,[x27]
7102bba03c  cmp w8,#0xc
7102bba040  b.ne 0x7102bba0b4
7102bba044  ldur w8,[x27, #0x1]
7102bba048  subs w8,w8,#0x1
7102bba04c  b.lt 0x7102bba0b4
7102bba050  ldursw x11,[x27, #0x5]
7102bba054  ldp x10,x12,[x28, #0x20]
7102bba058  mov w9,wzr
7102bba05c  add x11,x12,x11
7102bba060  add w12,w8,w9
7102bba064  cmp w12,#0x0
7102bba068  cinc w12,w12,lt
7102bba06c  asr w12,w12,#0x1
7102bba070  add x13,x11,w12, SXTW  #0x3
7102bba074  ldr w14,[x13]
7102bba078  ldr x14,[x10, x14, LSL #0x3]
7102bba07c  cmp x14,x17
7102bba080  b.eq 0x7102bba0a0
7102bba084  sub w13,w12,#0x1
7102bba088  cmp x14,x17
7102bba08c  csel w8,w13,w8,hi
7102bba090  csinc w9,w9,w12,hi
7102bba094  cmp w9,w8
7102bba098  b.le 0x7102bba060
7102bba09c  b 0x7102bba0b4
7102bba0a0  ldrsw x8,[x13, #0x4]
7102bba0a4  tbnz w8,#0x1f,0x7102bba0b4
7102bba0a8  add x9,x27,x8
7102bba0ac  mov x8,x28
7102bba0b0  b 0x7102bba0bc
7102bba0b4  mov x8,xzr
7102bba0b8  mov x9,x20
7102bba0bc  ldrb w10,[x9]
7102bba0c0  cmp w10,#0xa
7102bba0c4  adrp x1,0x7104348000
7102bba0c8  add x1,x1,#0x512
7102bba0cc  b.ne 0x7102bba0dc
7102bba0d0  ldursw x9,[x9, #0x1]
7102bba0d4  ldr x8,[x8, #0x28]
7102bba0d8  add x1,x8,x9
7102bba0dc  ldr x8,[x21]
7102bba0e0  madd x0,x22,x25,x8
7102bba0e4  bl 0x71039c2720
7102bba0e8  ldrb w8,[x27]
7102bba0ec  mov x15,#0xff37
7102bba0f0  movk x15,#0x87f1, LSL #16
7102bba0f4  mov x16,#0x9e1b
7102bba0f8  movk x16,#0x69ff, LSL #16
7102bba0fc  mov x17,#0xae8d
7102bba100  movk x17,#0x1ef8, LSL #16
7102bba104  movk x15,#0x5, LSL #32
7102bba108  movk x17,#0x5, LSL #32
7102bba10c  cmp w8,#0xc
7102bba110  mov x8,x20
7102bba114  movk x16,#0x5, LSL #32
7102bba118  b.ne 0x7102bba18c
7102bba11c  ldur w8,[x27, #0x1]
7102bba120  subs w8,w8,#0x1
7102bba124  b.lt 0x7102bba188
7102bba128  ldursw x11,[x27, #0x5]
7102bba12c  ldp x10,x12,[x28, #0x20]
7102bba130  mov w9,wzr
7102bba134  add x11,x12,x11
7102bba138  add w12,w8,w9
7102bba13c  cmp w12,#0x0
7102bba140  cinc w12,w12,lt
7102bba144  asr w12,w12,#0x1
7102bba148  add x13,x11,w12, SXTW  #0x3
7102bba14c  ldr w14,[x13]
7102bba150  ldr x14,[x10, x14, LSL #0x3]
7102bba154  cmp x14,x16
7102bba158  b.eq 0x7102bba178
7102bba15c  sub w13,w12,#0x1
7102bba160  cmp x14,x16
7102bba164  csel w8,w13,w8,hi
7102bba168  csinc w9,w9,w12,hi
7102bba16c  cmp w9,w8
7102bba170  b.le 0x7102bba138
7102bba174  b 0x7102bba188
7102bba178  ldrsw x8,[x13, #0x4]
7102bba17c  tbnz w8,#0x1f,0x7102bba188
7102bba180  add x8,x27,x8
7102bba184  b 0x7102bba18c
7102bba188  mov x8,x20
7102bba18c  ldrb w9,[x8]
7102bba190  mov v0.16B,v8.16B
7102bba194  cmp w9,#0x8
7102bba198  b.ne 0x7102bba1a0
7102bba19c  ldur s0,[x8, #0x1]
7102bba1a0  ldr x8,[x21]
7102bba1a4  madd x8,x22,x25,x8
7102bba1a8  str s0,[x8, #0x18]
7102bba1ac  ldrb w8,[x27]
7102bba1b0  cmp w8,#0xc
7102bba1b4  mov x8,x20
7102bba1b8  b.ne 0x7102bba22c
7102bba1bc  ldur w8,[x27, #0x1]
7102bba1c0  subs w8,w8,#0x1
7102bba1c4  b.lt 0x7102bba228
7102bba1c8  ldursw x11,[x27, #0x5]
7102bba1cc  ldp x10,x12,[x28, #0x20]
7102bba1d0  mov w9,wzr
7102bba1d4  add x11,x12,x11
7102bba1d8  add w12,w8,w9
7102bba1dc  cmp w12,#0x0
7102bba1e0  cinc w12,w12,lt
7102bba1e4  asr w12,w12,#0x1
7102bba1e8  add x13,x11,w12, SXTW  #0x3
7102bba1ec  ldr w14,[x13]
7102bba1f0  ldr x14,[x10, x14, LSL #0x3]
7102bba1f4  cmp x14,x17
7102bba1f8  b.eq 0x7102bba218
7102bba1fc  sub w13,w12,#0x1
7102bba200  cmp x14,x17
7102bba204  csel w8,w13,w8,hi
7102bba208  csinc w9,w9,w12,hi
7102bba20c  cmp w9,w8
7102bba210  b.le 0x7102bba1d8
7102bba214  b 0x7102bba228
7102bba218  ldrsw x8,[x13, #0x4]
7102bba21c  tbnz w8,#0x1f,0x7102bba228
7102bba220  add x8,x27,x8
7102bba224  b 0x7102bba22c
7102bba228  mov x8,x20
7102bba22c  ldrb w9,[x8]
7102bba230  mov v0.16B,v9.16B
7102bba234  cmp w9,#0x8
7102bba238  b.ne 0x7102bba240
7102bba23c  ldur s0,[x8, #0x1]
7102bba240  ldr x8,[x21]
7102bba244  madd x8,x22,x25,x8
7102bba248  str s0,[x8, #0x1c]
7102bba24c  ldrb w8,[x27]
7102bba250  cmp w8,#0xc
7102bba254  mov x8,x20
7102bba258  b.ne 0x7102bba2cc
7102bba25c  ldur w8,[x27, #0x1]
7102bba260  subs w8,w8,#0x1
7102bba264  b.lt 0x7102bba2c8
7102bba268  ldursw x11,[x27, #0x5]
7102bba26c  ldp x10,x12,[x28, #0x20]
7102bba270  mov w9,wzr
7102bba274  add x11,x12,x11
7102bba278  add w12,w8,w9
7102bba27c  cmp w12,#0x0
7102bba280  cinc w12,w12,lt
7102bba284  asr w12,w12,#0x1
7102bba288  add x13,x11,w12, SXTW  #0x3
7102bba28c  ldr w14,[x13]
7102bba290  ldr x14,[x10, x14, LSL #0x3]
7102bba294  cmp x14,x15
7102bba298  b.eq 0x7102bba2b8
7102bba29c  sub w13,w12,#0x1
7102bba2a0  cmp x14,x15
7102bba2a4  csel w8,w13,w8,hi
7102bba2a8  csinc w9,w9,w12,hi
7102bba2ac  cmp w9,w8
7102bba2b0  b.le 0x7102bba278
7102bba2b4  b 0x7102bba2c8
7102bba2b8  ldrsw x8,[x13, #0x4]
7102bba2bc  tbnz w8,#0x1f,0x7102bba2c8
7102bba2c0  add x8,x27,x8
7102bba2c4  b 0x7102bba2cc
7102bba2c8  mov x8,x20
7102bba2cc  ldrb w9,[x8]
7102bba2d0  mov v0.16B,v10.16B
7102bba2d4  cmp w9,#0x8
7102bba2d8  b.ne 0x7102bba2e0
7102bba2dc  ldur s0,[x8, #0x1]
7102bba2e0  ldr x8,[x21]
7102bba2e4  madd x8,x22,x25,x8
7102bba2e8  str s0,[x8, #0x20]
7102bba2ec  ldrb w8,[x27]
7102bba2f0  cmp w8,#0xc
7102bba2f4  b.ne 0x7102bba368
7102bba2f8  ldur w8,[x27, #0x1]
7102bba2fc  subs w8,w8,#0x1
7102bba300  b.lt 0x7102bba368
7102bba304  ldursw x11,[x27, #0x5]
7102bba308  ldp x10,x12,[x28, #0x20]
7102bba30c  mov w9,wzr
7102bba310  add x11,x12,x11
7102bba314  add w12,w8,w9
7102bba318  cmp w12,#0x0
7102bba31c  cinc w12,w12,lt
7102bba320  asr w12,w12,#0x1
7102bba324  add x13,x11,w12, SXTW  #0x3
7102bba328  ldr w14,[x13]
7102bba32c  ldr x14,[x10, x14, LSL #0x3]
7102bba330  cmp x14,x24
7102bba334  b.eq 0x7102bba354
7102bba338  sub w13,w12,#0x1
7102bba33c  cmp x14,x24
7102bba340  csel w8,w13,w8,hi
7102bba344  csinc w9,w9,w12,hi
7102bba348  cmp w9,w8
7102bba34c  b.le 0x7102bba314
7102bba350  b 0x7102bba368
7102bba354  ldrsw x8,[x13, #0x4]
7102bba358  tbnz w8,#0x1f,0x7102bba368
7102bba35c  add x9,x27,x8
7102bba360  mov x8,x28
7102bba364  b 0x7102bba370
7102bba368  mov x8,xzr
7102bba36c  mov x9,x20
7102bba370  ldrb w10,[x9]
7102bba374  cmp w10,#0xa
7102bba378  adrp x1,0x7104317000
7102bba37c  add x1,x1,#0x1d1
7102bba380  b.ne 0x7102bba390
7102bba384  ldursw x9,[x9, #0x1]
7102bba388  ldr x8,[x8, #0x28]
7102bba38c  add x1,x8,x9
7102bba390  ldr x8,[x21]
7102bba394  madd x8,x22,x25,x8
7102bba398  add x0,x8,#0x28
7102bba39c  bl 0x71039c2720
7102bba3a0  ldrb w8,[x27]
7102bba3a4  ldr x0,[sp, #0x20]
7102bba3a8  mov x17,#0x52e1
7102bba3ac  movk x17,#0x7374, LSL #16
7102bba3b0  movk x17,#0xa, LSL #32
7102bba3b4  cmp w8,#0xc
7102bba3b8  mov x8,x20
7102bba3bc  b.ne 0x7102bba430
7102bba3c0  ldur w8,[x27, #0x1]
7102bba3c4  subs w8,w8,#0x1
7102bba3c8  b.lt 0x7102bba42c
7102bba3cc  ldursw x11,[x27, #0x5]
7102bba3d0  ldp x10,x12,[x28, #0x20]
7102bba3d4  mov w9,wzr
7102bba3d8  add x11,x12,x11
7102bba3dc  add w12,w8,w9
7102bba3e0  cmp w12,#0x0
7102bba3e4  cinc w12,w12,lt
7102bba3e8  asr w12,w12,#0x1
7102bba3ec  add x13,x11,w12, SXTW  #0x3
7102bba3f0  ldr w14,[x13]
7102bba3f4  ldr x14,[x10, x14, LSL #0x3]
7102bba3f8  cmp x14,x26
7102bba3fc  b.eq 0x7102bba41c
7102bba400  sub w13,w12,#0x1
7102bba404  cmp x14,x26
7102bba408  csel w8,w13,w8,hi
7102bba40c  csinc w9,w9,w12,hi
7102bba410  cmp w9,w8
7102bba414  b.le 0x7102bba3dc
7102bba418  b 0x7102bba42c
7102bba41c  ldrsw x8,[x13, #0x4]
7102bba420  tbnz w8,#0x1f,0x7102bba42c
7102bba424  add x8,x27,x8
7102bba428  b 0x7102bba430
7102bba42c  mov x8,x20
7102bba430  ldrb w9,[x8]
7102bba434  mov v0.16B,v11.16B
7102bba438  cmp w9,#0x8
7102bba43c  b.ne 0x7102bba444
7102bba440  ldur s0,[x8, #0x1]
7102bba444  ldr x8,[x21]
7102bba448  madd x8,x22,x25,x8
7102bba44c  str s0,[x8, #0x40]
7102bba450  ldrb w8,[x27]
7102bba454  cmp w8,#0xc
7102bba458  mov x8,x20
7102bba45c  b.ne 0x7102bba4d0
7102bba460  ldur w8,[x27, #0x1]
7102bba464  subs w8,w8,#0x1
7102bba468  b.lt 0x7102bba4cc
7102bba46c  ldursw x11,[x27, #0x5]
7102bba470  ldp x10,x12,[x28, #0x20]
7102bba474  mov w9,wzr
7102bba478  add x11,x12,x11
7102bba47c  add w12,w8,w9
7102bba480  cmp w12,#0x0
7102bba484  cinc w12,w12,lt
7102bba488  asr w12,w12,#0x1
7102bba48c  add x13,x11,w12, SXTW  #0x3
7102bba490  ldr w14,[x13]
7102bba494  ldr x14,[x10, x14, LSL #0x3]
7102bba498  cmp x14,x23
7102bba49c  b.eq 0x7102bba4bc
7102bba4a0  sub w13,w12,#0x1
7102bba4a4  cmp x14,x23
7102bba4a8  csel w8,w13,w8,hi
7102bba4ac  csinc w9,w9,w12,hi
7102bba4b0  cmp w9,w8
7102bba4b4  b.le 0x7102bba47c
7102bba4b8  b 0x7102bba4cc
7102bba4bc  ldrsw x8,[x13, #0x4]
7102bba4c0  tbnz w8,#0x1f,0x7102bba4cc
7102bba4c4  add x8,x27,x8
7102bba4c8  b 0x7102bba4d0
7102bba4cc  mov x8,x20
7102bba4d0  ldrb w9,[x8]
7102bba4d4  mov v0.16B,v12.16B
7102bba4d8  cmp w9,#0x8
7102bba4dc  b.ne 0x7102bba4e4
7102bba4e0  ldur s0,[x8, #0x1]
7102bba4e4  ldr x8,[x21]
7102bba4e8  madd x8,x22,x25,x8
7102bba4ec  add x22,x22,#0x1
7102bba4f0  str s0,[x8, #0x44]
7102bba4f4  ldrb w8,[x0]
7102bba4f8  ldr x28,[sp, #0x28]
7102bba4fc  sub w9,w8,#0xb
7102bba500  cmp w9,#0x1
7102bba504  b.hi 0x7102bba518
7102bba508  ldur w9,[x0, #0x1]
7102bba50c  cmp x22,w9, SXTW 
7102bba510  b.lt 0x7102bb9ff8
7102bba514  b 0x7102bba524
7102bba518  mov w9,wzr
7102bba51c  cmp x22,w9, SXTW 
7102bba520  b.lt 0x7102bb9ff8
7102bba524  ldr x8,[sp, #0x30]
7102bba528  ldr x9,[x8]
7102bba52c  ldrb w8,[x9]
7102bba530  cmp w8,#0xc
7102bba534  b.ne 0x7102bba5c0
7102bba538  ldur w8,[x9, #0x1]
7102bba53c  subs w10,w8,#0x1
7102bba540  b.lt 0x7102bba5c0
7102bba544  ldr x12,[sp, #0x18]
7102bba548  ldr x13,[x12]
7102bba54c  ldursw x8,[x9, #0x5]
7102bba550  ldp x12,x13,[x13, #0x20]
7102bba554  mov x14,#0x9e56
7102bba558  movk x14,#0x721d, LSL #16
7102bba55c  mov w11,wzr
7102bba560  add x13,x13,x8
7102bba564  movk x14,#0x12, LSL #32
7102bba568  adrp x8,0x7104742000
7102bba56c  add x8,x8,#0xdbb
7102bba570  add w15,w10,w11
7102bba574  cmp w15,#0x0
7102bba578  cinc w15,w15,lt
7102bba57c  asr w15,w15,#0x1
7102bba580  add x16,x13,w15, SXTW  #0x3
7102bba584  ldr w17,[x16]
7102bba588  ldr x17,[x12, x17, LSL #0x3]
7102bba58c  cmp x17,x14
7102bba590  b.eq 0x7102bba5b0
7102bba594  sub w16,w15,#0x1
7102bba598  cmp x17,x14
7102bba59c  csel w10,w16,w10,hi
7102bba5a0  csinc w11,w11,w15,hi
7102bba5a4  cmp w11,w10
7102bba5a8  b.le 0x7102bba570
7102bba5ac  b 0x7102bba5c8
7102bba5b0  ldrsw x8,[x16, #0x4]
7102bba5b4  tbnz w8,#0x1f,0x7102bba5c0
7102bba5b8  add x8,x9,x8
7102bba5bc  b 0x7102bba5c8
7102bba5c0  adrp x8,0x7104742000
7102bba5c4  add x8,x8,#0xdbb
7102bba5c8  ldrb w9,[x8]
7102bba5cc  sub w9,w9,#0x1
7102bba5d0  cmp w9,#0x6
7102bba5d4  b.hi 0x7102bba5fc
7102bba5d8  adrp x10,0x7104518000
7102bba5dc  add x10,x10,#0x340
7102bba5e0  ldrsw x9,[x10, x9, LSL #0x2]
7102bba5e4  add x9,x9,x10
7102bba5e8  br x9
7102bba5ec  ldrb w8,[x8, #0x1]
7102bba5f0  b 0x7102bba618
7102bba5f4  ldur w8,[x8, #0x1]
7102bba5f8  b 0x7102bba618
7102bba5fc  mov w8,#0x4
7102bba600  b 0x7102bba618
7102bba604  ldursh w8,[x8, #0x1]
7102bba608  b 0x7102bba618
7102bba60c  ldrsb w8,[x8, #0x1]
7102bba610  b 0x7102bba618
7102bba614  ldurh w8,[x8, #0x1]
7102bba618  str w8,[x28, #0x1d0]
7102bba61c  ldr x8,[sp, #0x30]
7102bba620  ldr x9,[x8]
7102bba624  ldrb w8,[x9]
7102bba628  cmp w8,#0xc
7102bba62c  b.ne 0x7102bba6b8
7102bba630  ldur w8,[x9, #0x1]
7102bba634  subs w10,w8,#0x1
7102bba638  b.lt 0x7102bba6b8
7102bba63c  ldr x12,[sp, #0x18]
7102bba640  ldr x13,[x12]
7102bba644  ldursw x8,[x9, #0x5]
7102bba648  ldp x12,x13,[x13, #0x20]
7102bba64c  mov x14,#0xa10f
7102bba650  movk x14,#0x4e10, LSL #16
7102bba654  mov w11,wzr
7102bba658  add x13,x13,x8
7102bba65c  movk x14,#0x12, LSL #32
7102bba660  adrp x8,0x7104742000
7102bba664  add x8,x8,#0xdbb
7102bba668  add w15,w10,w11
7102bba66c  cmp w15,#0x0
7102bba670  cinc w15,w15,lt
7102bba674  asr w15,w15,#0x1
7102bba678  add x16,x13,w15, SXTW  #0x3
7102bba67c  ldr w17,[x16]
7102bba680  ldr x17,[x12, x17, LSL #0x3]
7102bba684  cmp x17,x14
7102bba688  b.eq 0x7102bba6a8
7102bba68c  sub w16,w15,#0x1
7102bba690  cmp x17,x14
7102bba694  csel w10,w16,w10,hi
7102bba698  csinc w11,w11,w15,hi
7102bba69c  cmp w11,w10
7102bba6a0  b.le 0x7102bba668
7102bba6a4  b 0x7102bba6c0
7102bba6a8  ldrsw x8,[x16, #0x4]
7102bba6ac  tbnz w8,#0x1f,0x7102bba6b8
7102bba6b0  add x8,x9,x8
7102bba6b4  b 0x7102bba6c0
7102bba6b8  adrp x8,0x7104742000
7102bba6bc  add x8,x8,#0xdbb
7102bba6c0  ldrb w9,[x8]
7102bba6c4  sub w9,w9,#0x1
7102bba6c8  cmp w9,#0x6
7102bba6cc  b.hi 0x7102bba6f4
7102bba6d0  adrp x10,0x7104518000
7102bba6d4  add x10,x10,#0x35c
7102bba6d8  ldrsw x9,[x10, x9, LSL #0x2]
7102bba6dc  add x9,x9,x10
7102bba6e0  br x9
7102bba6e4  ldrb w8,[x8, #0x1]
7102bba6e8  b 0x7102bba710
7102bba6ec  ldur w8,[x8, #0x1]
7102bba6f0  b 0x7102bba710
7102bba6f4  orr w8,wzr,#0x7
7102bba6f8  b 0x7102bba710
7102bba6fc  ldursh w8,[x8, #0x1]
7102bba700  b 0x7102bba710
7102bba704  ldrsb w8,[x8, #0x1]
7102bba708  b 0x7102bba710
7102bba70c  ldurh w8,[x8, #0x1]
7102bba710  str w8,[x28, #0x1d4]
7102bba714  ldr x8,[sp, #0x30]
7102bba718  ldr x9,[x8]
7102bba71c  ldrb w8,[x9]
7102bba720  cmp w8,#0xc
7102bba724  b.ne 0x7102bba7b0
7102bba728  ldur w8,[x9, #0x1]
7102bba72c  subs w10,w8,#0x1
7102bba730  b.lt 0x7102bba7b0
7102bba734  ldr x12,[sp, #0x18]
7102bba738  ldr x13,[x12]
7102bba73c  ldursw x8,[x9, #0x5]
7102bba740  ldp x12,x13,[x13, #0x20]
7102bba744  mov x14,#0x224d
7102bba748  movk x14,#0xb57c, LSL #16
7102bba74c  mov w11,wzr
7102bba750  add x13,x13,x8
7102bba754  movk x14,#0x1c, LSL #32
7102bba758  adrp x8,0x7104742000
7102bba75c  add x8,x8,#0xdbb
7102bba760  add w15,w10,w11
7102bba764  cmp w15,#0x0
7102bba768  cinc w15,w15,lt
7102bba76c  asr w15,w15,#0x1
7102bba770  add x16,x13,w15, SXTW  #0x3
7102bba774  ldr w17,[x16]
7102bba778  ldr x17,[x12, x17, LSL #0x3]
7102bba77c  cmp x17,x14
7102bba780  b.eq 0x7102bba7a0
7102bba784  sub w16,w15,#0x1
7102bba788  cmp x17,x14
7102bba78c  csel w10,w16,w10,hi
7102bba790  csinc w11,w11,w15,hi
7102bba794  cmp w11,w10
7102bba798  b.le 0x7102bba760
7102bba79c  b 0x7102bba7b8
7102bba7a0  ldrsw x8,[x16, #0x4]
7102bba7a4  tbnz w8,#0x1f,0x7102bba7b0
7102bba7a8  add x8,x9,x8
7102bba7ac  b 0x7102bba7b8
7102bba7b0  adrp x8,0x7104742000
7102bba7b4  add x8,x8,#0xdbb
7102bba7b8  ldrb w9,[x8]
7102bba7bc  sub w9,w9,#0x1
7102bba7c0  cmp w9,#0x6
7102bba7c4  b.hi 0x7102bba7ec
7102bba7c8  adrp x10,0x7104518000
7102bba7cc  add x10,x10,#0x378
7102bba7d0  ldrsw x9,[x10, x9, LSL #0x2]
7102bba7d4  add x9,x9,x10
7102bba7d8  br x9
7102bba7dc  ldrb w8,[x8, #0x1]
7102bba7e0  b 0x7102bba808
7102bba7e4  ldur w8,[x8, #0x1]
7102bba7e8  b 0x7102bba808
7102bba7ec  mov w8,#0x1
7102bba7f0  b 0x7102bba808
7102bba7f4  ldursh w8,[x8, #0x1]
7102bba7f8  b 0x7102bba808
7102bba7fc  ldrsb w8,[x8, #0x1]
7102bba800  b 0x7102bba808
7102bba804  ldurh w8,[x8, #0x1]
7102bba808  cmp w8,#0x0
7102bba80c  cset w8,ne
7102bba810  strb w8,[x28, #0x1d8]
7102bba814  ldr x8,[sp, #0x30]
7102bba818  ldr x8,[x8]
7102bba81c  ldrb w9,[x8]
7102bba820  cmp w9,#0xc
7102bba824  b.ne 0x7102bba8b4
7102bba828  ldur w9,[x8, #0x1]
7102bba82c  subs w9,w9,#0x1
7102bba830  b.lt 0x7102bba8b4
7102bba834  ldr x11,[sp, #0x18]
7102bba838  ldr x19,[x11]
7102bba83c  ldursw x12,[x8, #0x5]
7102bba840  ldp x11,x13,[x19, #0x20]
7102bba844  add x12,x13,x12
7102bba848  mov x13,#0xca61
7102bba84c  movk x13,#0xdeaf, LSL #16
7102bba850  mov w10,wzr
7102bba854  adrp x26,0x7104742000
7102bba858  add x26,x26,#0xdbb
7102bba85c  movk x13,#0xb, LSL #32
7102bba860  add w14,w9,w10
7102bba864  cmp w14,#0x0
7102bba868  cinc w14,w14,lt
7102bba86c  asr w14,w14,#0x1
7102bba870  add x15,x12,w14, SXTW  #0x3
7102bba874  ldr w16,[x15]
7102bba878  ldr x16,[x11, x16, LSL #0x3]
7102bba87c  cmp x16,x13
7102bba880  b.eq 0x7102bba8a4
7102bba884  sub w15,w14,#0x1
7102bba888  cmp x16,x13
7102bba88c  csel w9,w15,w9,hi
7102bba890  csinc w10,w10,w14,hi
7102bba894  cmp w10,w9
7102bba898  b.le 0x7102bba860
7102bba89c  mov x19,xzr
7102bba8a0  b 0x7102bba8c0
7102bba8a4  ldrsw x9,[x15, #0x4]
7102bba8a8  tbnz w9,#0x1f,0x7102bba8b4
7102bba8ac  add x26,x8,x9
7102bba8b0  b 0x7102bba8c0
7102bba8b4  mov x19,xzr
7102bba8b8  adrp x26,0x7104742000
7102bba8bc  add x26,x26,#0xdbb
7102bba8c0  ldrb w8,[x26]
7102bba8c4  sub w8,w8,#0xb
7102bba8c8  cmp w8,#0x1
7102bba8cc  b.hi 0x7102bba8d8
7102bba8d0  ldur w8,[x26, #0x1]
7102bba8d4  b 0x7102bba8dc
7102bba8d8  mov w8,wzr
7102bba8dc  sxtw x27,w8
7102bba8e0  ldp x22,x8,[x28, #0x1e0]
7102bba8e4  sub x23,x8,x22
7102bba8e8  orr x11,xzr,#-0x3333333333333334
7102bba8ec  movk x11,#0xcccd
7102bba8f0  mov x24,x28
7102bba8f4  asr x9,x23,#0x2
7102bba8f8  add x21,x28,#0x1e0
7102bba8fc  mul x28,x9,x11
7102bba900  cmp x28,x27
7102bba904  b.cs 0x7102bba968
7102bba908  ldr x9,[x24, #0x1f0]
7102bba90c  sub x10,x9,x8
7102bba910  asr x10,x10,#0x2
7102bba914  mul x10,x10,x11
7102bba918  sub x20,x27,x28
7102bba91c  cmp x10,x20
7102bba920  b.cs 0x7102bba97c
7102bba924  tbnz w27,#0x1f,0x7102bbde84
7102bba928  sub x8,x9,x22
7102bba92c  orr x9,xzr,#-0x3333333333333334
7102bba930  asr x8,x8,#0x2
7102bba934  movk x9,#0xcccd
7102bba938  mul x8,x8,x9
7102bba93c  orr x9,xzr,#0x6666666666666666
7102bba940  movk x9,#0x666, LSL #48
7102bba944  cmp x8,x9
7102bba948  str x19,[sp, #0x20]
7102bba94c  b.cs 0x7102bba9e0
7102bba950  lsl x8,x8,#0x1
7102bba954  cmp x8,x27
7102bba958  csel x8,x27,x8,cc
7102bba95c  cbnz x8,0x7102bba9e8
7102bba960  mov x25,xzr
7102bba964  b 0x7102bbaa58
7102bba968  b.ls 0x7102bbaac4
7102bba96c  mov w8,#0x14
7102bba970  madd x8,x27,x8,x22
7102bba974  str x8,[x24, #0x1e8]
7102bba978  b 0x7102bbaac4
7102bba97c  ldr x24,[sp, #0x28]
7102bba980  mov x9,x20
7102bba984  tbz w20,#0x0,0x7102bba9a0
7102bba988  str wzr,[x8, #0x10]
7102bba98c  stp xzr,xzr,[x8]
7102bba990  ldr x8,[x24, #0x1e8]
7102bba994  add x8,x8,#0x14
7102bba998  sub x9,x20,#0x1
7102bba99c  str x8,[x24, #0x1e8]
7102bba9a0  cmp x20,#0x1
7102bba9a4  b.eq 0x7102bbaac4
7102bba9a8  str wzr,[x8, #0x10]
7102bba9ac  stp xzr,xzr,[x8]
7102bba9b0  ldr x8,[x24, #0x1e8]
7102bba9b4  add x10,x8,#0x14
7102bba9b8  str x10,[x24, #0x1e8]
7102bba9bc  str wzr,[x8, #0x24]
7102bba9c0  stur xzr,[x8, #0x1c]
7102bba9c4  stur xzr,[x8, #0x14]
7102bba9c8  ldr x8,[x24, #0x1e8]
7102bba9cc  add x8,x8,#0x14
7102bba9d0  subs x9,x9,#0x2
7102bba9d4  str x8,[x24, #0x1e8]
7102bba9d8  b.ne 0x7102bba9a8
7102bba9dc  b 0x7102bbaac4
7102bba9e0  orr x8,xzr,#-0x3333333333333334
7102bba9e4  movk x8,#0xccc, LSL #48
7102bba9e8  str x8,[sp, #0x10]
7102bba9ec  add x8,x8,x8, LSL #0x2
7102bba9f0  lsl x8,x8,#0x2
7102bba9f4  cmp x8,#0x0
7102bba9f8  csinc x24,x8,xzr,ne
7102bba9fc  mov w0,#0x10
7102bbaa00  mov x1,x24
7102bbaa04  bl 0x710392e290
7102bbaa08  mov x25,x0
7102bbaa0c  cbnz x0,0x7102bbaa54
7102bbaa10  adrp x8,0x7105332000
7102bbaa14  ldr x0,[x8, #0xf00]
7102bbaa18  cbz x0,0x7102bbaa50
7102bbaa1c  str wzr,[sp, #0x4c]
7102bbaa20  str x24,[sp, #0x38]
7102bbaa24  ldr x8,[x0]
7102bbaa28  ldr x8,[x8, #0x30]
7102bbaa2c  add x1,sp,#0x4c
7102bbaa30  add x2,sp,#0x38
7102bbaa34  blr x8
7102bbaa38  tbz w0,#0x0,0x7102bbaa50
7102bbaa3c  mov w0,#0x10
7102bbaa40  mov x1,x24
7102bbaa44  bl 0x710392e290
7102bbaa48  mov x25,x0
7102bbaa4c  cbnz x0,0x7102bbaa54
7102bbaa50  mov x25,xzr
7102bbaa54  ldr x8,[sp, #0x10]
7102bbaa58  mov w19,#0x14
7102bbaa5c  madd x24,x28,x19,x25
7102bbaa60  madd x28,x8,x19,x25
7102bbaa64  add x8,x20,x20, LSL #0x2
7102bbaa68  lsl x2,x8,#0x2
7102bbaa6c  mov x0,x24
7102bbaa70  mov w1,wzr
7102bbaa74  bl 0x71039c02a0
7102bbaa78  orr x8,xzr,#-0x6666666666666667
7102bbaa7c  smulh x8,x23,x8
7102bbaa80  asr x9,x8,#0x3
7102bbaa84  add x8,x9,x8, LSR #0x3f
7102bbaa88  madd x20,x27,x19,x25
7102bbaa8c  cmp x23,#0x1
7102bbaa90  madd x24,x8,x19,x24
7102bbaa94  b.lt 0x7102bbaaa8
7102bbaa98  mov x0,x24
7102bbaa9c  mov x1,x22
7102bbaaa0  mov x2,x23
7102bbaaa4  bl 0x71039c00e0
7102bbaaa8  ldp x19,x8,[sp, #0x20]
7102bbaaac  str x28,[x8, #0x1f0]
7102bbaab0  stp x24,x20,[x8, #0x1e0]
7102bbaab4  mov x24,x8
7102bbaab8  cbz x22,0x7102bbaac4
7102bbaabc  mov x0,x22
7102bbaac0  bl 0x710392eb40
7102bbaac4  ldrb w15,[x26]
7102bbaac8  sub w8,w15,#0xb
7102bbaacc  mov x5,#0x7bc8
7102bbaad0  movk x5,#0xc467, LSL #16
7102bbaad4  mov x6,#0x263c
7102bbaad8  movk x6,#0xc0ad, LSL #16
7102bbaadc  movk x6,#0xb, LSL #32
7102bbaae0  cmp w8,#0x1
7102bbaae4  movk x5,#0x9, LSL #32
7102bbaae8  b.hi 0x7102bbaedc
7102bbaaec  ldur w8,[x26, #0x1]
7102bbaaf0  cmp w8,#0x1
7102bbaaf4  b.lt 0x7102bbaedc
7102bbaaf8  adrp x14,0x7104473000
7102bbaafc  adrp x11,0x7104472000
7102bbab00  ldr s0,[x11, #0xc40]
7102bbab04  ldr s1,[x14, #0x1a0]
7102bbab08  adrp x14,0x7104473000
7102bbab0c  ldr s3,[x14, #0x3d8]
7102bbab10  fmov s2,wzr
7102bbab14  fmov s4,0xc1f00000
7102bbab18  mov x9,#0x2615
7102bbab1c  movk x9,#0xfbdb, LSL #16
7102bbab20  mov x10,#0x1683
7102bbab24  movk x10,#0x8cdc, LSL #16
7102bbab28  mov x11,#0x77af
7102bbab2c  movk x11,#0x62d2, LSL #16
7102bbab30  mov x8,xzr
7102bbab34  movk x9,#0x1, LSL #32
7102bbab38  movk x10,#0x1, LSL #32
7102bbab3c  movk x11,#0x1, LSL #32
7102bbab40  add x12,x26,#0x5
7102bbab44  mov w13,#0x14
7102bbab48  adrp x14,0x7104742000
7102bbab4c  add x14,x14,#0xdbb
7102bbab50  mov x16,xzr
7102bbab54  tbnz w8,#0x1f,0x7102bbab88
7102bbab58  and w15,w15,#0xff
7102bbab5c  cmp w15,#0xb
7102bbab60  mov x15,x14
7102bbab64  b.ne 0x7102bbab8c
7102bbab68  ldur w15,[x26, #0x1]
7102bbab6c  cmp w15,w8
7102bbab70  b.le 0x7102bbab84
7102bbab74  ldrsw x15,[x12, w8, SXTW #0x2]
7102bbab78  add x15,x26,x15
7102bbab7c  mov x16,x19
7102bbab80  b 0x7102bbab8c
7102bbab84  mov x16,xzr
7102bbab88  mov x15,x14
7102bbab8c  ldrb w17,[x15]
7102bbab90  cmp w17,#0xc
7102bbab94  mov x17,x14
7102bbab98  b.ne 0x7102bbac0c
7102bbab9c  ldur w17,[x15, #0x1]
7102bbaba0  subs w17,w17,#0x1
7102bbaba4  b.lt 0x7102bbac08
7102bbaba8  ldursw x1,[x15, #0x5]
7102bbabac  ldp x0,x2,[x16, #0x20]
7102bbabb0  mov w18,wzr
7102bbabb4  add x1,x2,x1
7102bbabb8  add w2,w17,w18
7102bbabbc  cmp w2,#0x0
7102bbabc0  cinc w2,w2,lt
7102bbabc4  asr w2,w2,#0x1
7102bbabc8  add x3,x1,w2, SXTW  #0x3
7102bbabcc  ldr w4,[x3]
7102bbabd0  ldr x4,[x0, x4, LSL #0x3]
7102bbabd4  cmp x4,x6
7102bbabd8  b.eq 0x7102bbabf8
7102bbabdc  sub w3,w2,#0x1
7102bbabe0  cmp x4,x6
7102bbabe4  csel w17,w3,w17,hi
7102bbabe8  csinc w18,w18,w2,hi
7102bbabec  cmp w18,w17
7102bbabf0  b.le 0x7102bbabb8
7102bbabf4  b 0x7102bbac08
7102bbabf8  ldrsw x17,[x3, #0x4]
7102bbabfc  tbnz w17,#0x1f,0x7102bbac08
7102bbac00  add x17,x15,x17
7102bbac04  b 0x7102bbac0c
7102bbac08  mov x17,x14
7102bbac0c  ldrb w18,[x17]
7102bbac10  mov v5.16B,v0.16B
7102bbac14  cmp w18,#0x8
7102bbac18  b.ne 0x7102bbac20
7102bbac1c  ldur s5,[x17, #0x1]
7102bbac20  mul x18,x8,x13
7102bbac24  ldr x17,[x21]
7102bbac28  str s5,[x17,x18]
7102bbac2c  ldrb w17,[x15]
7102bbac30  cmp w17,#0xc
7102bbac34  mov x17,x14
7102bbac38  b.ne 0x7102bbacac
7102bbac3c  ldur w17,[x15, #0x1]
7102bbac40  subs w17,w17,#0x1
7102bbac44  b.lt 0x7102bbaca8
7102bbac48  ldursw x1,[x15, #0x5]
7102bbac4c  ldp x0,x2,[x16, #0x20]
7102bbac50  mov w18,wzr
7102bbac54  add x1,x2,x1
7102bbac58  add w2,w17,w18
7102bbac5c  cmp w2,#0x0
7102bbac60  cinc w2,w2,lt
7102bbac64  asr w2,w2,#0x1
7102bbac68  add x3,x1,w2, SXTW  #0x3
7102bbac6c  ldr w4,[x3]
7102bbac70  ldr x4,[x0, x4, LSL #0x3]
7102bbac74  cmp x4,x5
7102bbac78  b.eq 0x7102bbac98
7102bbac7c  sub w3,w2,#0x1
7102bbac80  cmp x4,x5
7102bbac84  csel w17,w3,w17,hi
7102bbac88  csinc w18,w18,w2,hi
7102bbac8c  cmp w18,w17
7102bbac90  b.le 0x7102bbac58
7102bbac94  b 0x7102bbaca8
7102bbac98  ldrsw x17,[x3, #0x4]
7102bbac9c  tbnz w17,#0x1f,0x7102bbaca8
7102bbaca0  add x17,x15,x17
7102bbaca4  b 0x7102bbacac
7102bbaca8  mov x17,x14
7102bbacac  ldrb w18,[x17]
7102bbacb0  mov v5.16B,v1.16B
7102bbacb4  cmp w18,#0x8
7102bbacb8  b.ne 0x7102bbacc0
7102bbacbc  ldur s5,[x17, #0x1]
7102bbacc0  ldr x17,[x21]
7102bbacc4  madd x17,x8,x13,x17
7102bbacc8  str s5,[x17, #0x4]
7102bbaccc  ldrb w17,[x15]
7102bbacd0  cmp w17,#0xc
7102bbacd4  mov x17,x14
7102bbacd8  b.ne 0x7102bbad4c
7102bbacdc  ldur w17,[x15, #0x1]
7102bbace0  subs w17,w17,#0x1
7102bbace4  b.lt 0x7102bbad48
7102bbace8  ldursw x1,[x15, #0x5]
7102bbacec  ldp x0,x2,[x16, #0x20]
7102bbacf0  mov w18,wzr
7102bbacf4  add x1,x2,x1
7102bbacf8  add w2,w17,w18
7102bbacfc  cmp w2,#0x0
7102bbad00  cinc w2,w2,lt
7102bbad04  asr w2,w2,#0x1
7102bbad08  add x3,x1,w2, SXTW  #0x3
7102bbad0c  ldr w4,[x3]
7102bbad10  ldr x4,[x0, x4, LSL #0x3]
7102bbad14  cmp x4,x10
7102bbad18  b.eq 0x7102bbad38
7102bbad1c  sub w3,w2,#0x1
7102bbad20  cmp x4,x10
7102bbad24  csel w17,w3,w17,hi
7102bbad28  csinc w18,w18,w2,hi
7102bbad2c  cmp w18,w17
7102bbad30  b.le 0x7102bbacf8
7102bbad34  b 0x7102bbad48
7102bbad38  ldrsw x17,[x3, #0x4]
7102bbad3c  tbnz w17,#0x1f,0x7102bbad48
7102bbad40  add x17,x15,x17
7102bbad44  b 0x7102bbad4c
7102bbad48  mov x17,x14
7102bbad4c  ldrb w18,[x17]
7102bbad50  mov v5.16B,v2.16B
7102bbad54  cmp w18,#0x8
7102bbad58  b.ne 0x7102bbad60
7102bbad5c  ldur s5,[x17, #0x1]
7102bbad60  ldr x17,[x21]
7102bbad64  madd x17,x8,x13,x17
7102bbad68  str s5,[x17, #0x8]
7102bbad6c  ldrb w17,[x15]
7102bbad70  cmp w17,#0xc
7102bbad74  mov x17,x14
7102bbad78  b.ne 0x7102bbadec
7102bbad7c  ldur w17,[x15, #0x1]
7102bbad80  subs w17,w17,#0x1
7102bbad84  b.lt 0x7102bbade8
7102bbad88  ldursw x1,[x15, #0x5]
7102bbad8c  ldp x0,x2,[x16, #0x20]
7102bbad90  mov w18,wzr
7102bbad94  add x1,x2,x1
7102bbad98  add w2,w17,w18
7102bbad9c  cmp w2,#0x0
7102bbada0  cinc w2,w2,lt
7102bbada4  asr w2,w2,#0x1
7102bbada8  add x3,x1,w2, SXTW  #0x3
7102bbadac  ldr w4,[x3]
7102bbadb0  ldr x4,[x0, x4, LSL #0x3]
7102bbadb4  cmp x4,x9
7102bbadb8  b.eq 0x7102bbadd8
7102bbadbc  sub w3,w2,#0x1
7102bbadc0  cmp x4,x9
7102bbadc4  csel w17,w3,w17,hi
7102bbadc8  csinc w18,w18,w2,hi
7102bbadcc  cmp w18,w17
7102bbadd0  b.le 0x7102bbad98
7102bbadd4  b 0x7102bbade8
7102bbadd8  ldrsw x17,[x3, #0x4]
7102bbaddc  tbnz w17,#0x1f,0x7102bbade8
7102bbade0  add x17,x15,x17
7102bbade4  b 0x7102bbadec
7102bbade8  mov x17,x14
7102bbadec  ldrb w18,[x17]
7102bbadf0  mov v5.16B,v3.16B
7102bbadf4  cmp w18,#0x8
7102bbadf8  b.ne 0x7102bbae00
7102bbadfc  ldur s5,[x17, #0x1]
7102bbae00  ldr x17,[x21]
7102bbae04  madd x17,x8,x13,x17
7102bbae08  str s5,[x17, #0xc]
7102bbae0c  ldrb w17,[x15]
7102bbae10  cmp w17,#0xc
7102bbae14  mov x17,x14
7102bbae18  b.ne 0x7102bbae8c
7102bbae1c  ldur w17,[x15, #0x1]
7102bbae20  subs w17,w17,#0x1
7102bbae24  b.lt 0x7102bbae88
7102bbae28  ldursw x1,[x15, #0x5]
7102bbae2c  ldp x0,x16,[x16, #0x20]
7102bbae30  mov w18,wzr
7102bbae34  add x16,x16,x1
7102bbae38  add w1,w17,w18
7102bbae3c  cmp w1,#0x0
7102bbae40  cinc w1,w1,lt
7102bbae44  asr w1,w1,#0x1
7102bbae48  add x2,x16,w1, SXTW  #0x3
7102bbae4c  ldr w3,[x2]
7102bbae50  ldr x3,[x0, x3, LSL #0x3]
7102bbae54  cmp x3,x11
7102bbae58  b.eq 0x7102bbae78
7102bbae5c  sub w2,w1,#0x1
7102bbae60  cmp x3,x11
7102bbae64  csel w17,w2,w17,hi
7102bbae68  csinc w18,w18,w1,hi
7102bbae6c  cmp w18,w17
7102bbae70  b.le 0x7102bbae38
7102bbae74  b 0x7102bbae88
7102bbae78  ldrsw x16,[x2, #0x4]
7102bbae7c  tbnz w16,#0x1f,0x7102bbae88
7102bbae80  add x17,x15,x16
7102bbae84  b 0x7102bbae8c
7102bbae88  mov x17,x14
7102bbae8c  ldrb w15,[x17]
7102bbae90  mov v5.16B,v4.16B
7102bbae94  cmp w15,#0x8
7102bbae98  b.ne 0x7102bbaea0
7102bbae9c  ldur s5,[x17, #0x1]
7102bbaea0  ldr x15,[x21]
7102bbaea4  madd x15,x8,x13,x15
7102bbaea8  add x8,x8,#0x1
7102bbaeac  str s5,[x15, #0x10]
7102bbaeb0  ldrb w15,[x26]
7102bbaeb4  sub w16,w15,#0xb
7102bbaeb8  cmp w16,#0x1
7102bbaebc  b.hi 0x7102bbaed0
7102bbaec0  ldur w16,[x26, #0x1]
7102bbaec4  cmp x8,w16, SXTW 
7102bbaec8  b.lt 0x7102bbab50
7102bbaecc  b 0x7102bbaedc
7102bbaed0  mov w16,wzr
7102bbaed4  cmp x8,w16, SXTW 
7102bbaed8  b.lt 0x7102bbab50
7102bbaedc  ldr x8,[sp, #0x30]
7102bbaee0  ldr x8,[x8]
7102bbaee4  ldrb w9,[x8]
7102bbaee8  cmp w9,#0xc
7102bbaeec  b.ne 0x7102bbaf7c
7102bbaef0  ldur w9,[x8, #0x1]
7102bbaef4  subs w9,w9,#0x1
7102bbaef8  b.lt 0x7102bbaf7c
7102bbaefc  ldr x11,[sp, #0x18]
7102bbaf00  ldr x19,[x11]
7102bbaf04  ldursw x12,[x8, #0x5]
7102bbaf08  ldp x11,x13,[x19, #0x20]
7102bbaf0c  add x12,x13,x12
7102bbaf10  mov x13,#0x4c2e
7102bbaf14  movk x13,#0x9bf0, LSL #16
7102bbaf18  mov w10,wzr
7102bbaf1c  adrp x20,0x7104742000
7102bbaf20  add x20,x20,#0xdbb
7102bbaf24  movk x13,#0xe, LSL #32
7102bbaf28  add w14,w9,w10
7102bbaf2c  cmp w14,#0x0
7102bbaf30  cinc w14,w14,lt
7102bbaf34  asr w14,w14,#0x1
7102bbaf38  add x15,x12,w14, SXTW  #0x3
7102bbaf3c  ldr w16,[x15]
7102bbaf40  ldr x16,[x11, x16, LSL #0x3]
7102bbaf44  cmp x16,x13
7102bbaf48  b.eq 0x7102bbaf6c
7102bbaf4c  sub w15,w14,#0x1
7102bbaf50  cmp x16,x13
7102bbaf54  csel w9,w15,w9,hi
7102bbaf58  csinc w10,w10,w14,hi
7102bbaf5c  cmp w10,w9
7102bbaf60  b.le 0x7102bbaf28
7102bbaf64  mov x19,xzr
7102bbaf68  b 0x7102bbaf88
7102bbaf6c  ldrsw x9,[x15, #0x4]
7102bbaf70  tbnz w9,#0x1f,0x7102bbaf7c
7102bbaf74  add x20,x8,x9
7102bbaf78  b 0x7102bbaf88
7102bbaf7c  mov x19,xzr
7102bbaf80  adrp x20,0x7104742000
7102bbaf84  add x20,x20,#0xdbb
7102bbaf88  ldrb w8,[x20]
7102bbaf8c  sub w8,w8,#0xb
7102bbaf90  cmp w8,#0x1
7102bbaf94  b.hi 0x7102bbafa0
7102bbaf98  ldur w8,[x20, #0x1]
7102bbaf9c  b 0x7102bbafa4
7102bbafa0  mov w8,wzr
7102bbafa4  sxtw x27,w8
7102bbafa8  ldp x22,x8,[x24, #0x1f8]
7102bbafac  sub x23,x8,x22
7102bbafb0  asr x28,x23,#0x3
7102bbafb4  add x21,x24,#0x1f8
7102bbafb8  cmp x28,x27
7102bbafbc  b.cs 0x7102bbb00c
7102bbafc0  ldr x9,[x24, #0x208]
7102bbafc4  sub x10,x9,x8
7102bbafc8  sub x26,x27,x28
7102bbafcc  asr x10,x10,#0x3
7102bbafd0  cmp x10,x26
7102bbafd4  b.cs 0x7102bbb028
7102bbafd8  tbnz w27,#0x1f,0x7102bbde84
7102bbafdc  sub x8,x9,x22
7102bbafe0  asr x9,x8,#0x3
7102bbafe4  orr x10,xzr,#0xffffffffffffffe
7102bbafe8  cmp x9,x10
7102bbafec  b.hi 0x7102bbb084
7102bbaff0  asr x8,x8,#0x2
7102bbaff4  cmp x8,x27
7102bbaff8  csel x25,x27,x8,cc
7102bbaffc  cbz x25,0x7102bbb0ec
7102bbb000  lsr x8,x25,#0x3d
7102bbb004  cbz x8,0x7102bbb088
7102bbb008  bl 0x71039c2650
7102bbb00c  mov x23,x24
7102bbb010  orr x24,xzr,#-0x5555555555555556
7102bbb014  movk x24,#0xaaab
7102bbb018  b.ls 0x7102bbb140
7102bbb01c  add x8,x22,x27, LSL #0x3
7102bbb020  str x8,[x23, #0x200]
7102bbb024  b 0x7102bbb140
7102bbb028  ldr x23,[sp, #0x28]
7102bbb02c  orr x24,xzr,#-0x5555555555555556
7102bbb030  mov x9,x26
7102bbb034  movk x24,#0xaaab
7102bbb038  tbz w26,#0x0,0x7102bbb050
7102bbb03c  str xzr,[x8]
7102bbb040  ldr x8,[x23, #0x200]
7102bbb044  add x8,x8,#0x8
7102bbb048  sub x9,x26,#0x1
7102bbb04c  str x8,[x23, #0x200]
7102bbb050  cmp x26,#0x1
7102bbb054  b.eq 0x7102bbb140
7102bbb058  str xzr,[x8]
7102bbb05c  ldr x8,[x23, #0x200]
7102bbb060  add x10,x8,#0x8
7102bbb064  str x10,[x23, #0x200]
7102bbb068  str xzr,[x8, #0x8]
7102bbb06c  ldr x8,[x23, #0x200]
7102bbb070  add x8,x8,#0x8
7102bbb074  subs x9,x9,#0x2
7102bbb078  str x8,[x23, #0x200]
7102bbb07c  b.ne 0x7102bbb058
7102bbb080  b 0x7102bbb140
7102bbb084  orr x25,xzr,#0x1fffffffffffffff
7102bbb088  lsl x8,x25,#0x3
7102bbb08c  cmp x8,#0x0
7102bbb090  csinc x1,x8,xzr,ne
7102bbb094  mov w0,#0x10
7102bbb098  str x1,[sp, #0x20]
7102bbb09c  bl 0x710392e290
7102bbb0a0  mov x24,x0
7102bbb0a4  cbnz x0,0x7102bbb0f0
7102bbb0a8  adrp x8,0x7105332000
7102bbb0ac  ldr x0,[x8, #0xf00]
7102bbb0b0  cbz x0,0x7102bbb0ec
7102bbb0b4  ldr x8,[sp, #0x20]
7102bbb0b8  str wzr,[sp, #0x4c]
7102bbb0bc  add x1,sp,#0x4c
7102bbb0c0  add x2,sp,#0x38
7102bbb0c4  str x8,[sp, #0x38]
7102bbb0c8  ldr x8,[x0]
7102bbb0cc  ldr x8,[x8, #0x30]
7102bbb0d0  blr x8
7102bbb0d4  tbz w0,#0x0,0x7102bbb0ec
7102bbb0d8  ldr x1,[sp, #0x20]
7102bbb0dc  mov w0,#0x10
7102bbb0e0  bl 0x710392e290
7102bbb0e4  mov x24,x0
7102bbb0e8  cbnz x0,0x7102bbb0f0
7102bbb0ec  mov x24,xzr
7102bbb0f0  add x0,x24,x28, LSL #0x3
7102bbb0f4  lsl x2,x26,#0x3
7102bbb0f8  mov w1,wzr
7102bbb0fc  add x25,x24,x25, LSL #0x3
7102bbb100  bl 0x71039c02a0
7102bbb104  add x26,x24,x27, LSL #0x3
7102bbb108  cmp x23,#0x1
7102bbb10c  b.lt 0x7102bbb120
7102bbb110  mov x0,x24
7102bbb114  mov x1,x22
7102bbb118  mov x2,x23
7102bbb11c  bl 0x71039c00e0
7102bbb120  ldr x23,[sp, #0x28]
7102bbb124  stp x24,x26,[x23, #0x1f8]
7102bbb128  orr x24,xzr,#-0x5555555555555556
7102bbb12c  movk x24,#0xaaab
7102bbb130  str x25,[x23, #0x208]
7102bbb134  cbz x22,0x7102bbb140
7102bbb138  mov x0,x22
7102bbb13c  bl 0x710392eb40
7102bbb140  ldrb w11,[x20]
7102bbb144  sub w8,w11,#0xb
7102bbb148  mov x22,#0x7bc8
7102bbb14c  movk x22,#0xc467, LSL #16
7102bbb150  mov x25,#0x263c
7102bbb154  movk x25,#0xc0ad, LSL #16
7102bbb158  movk x25,#0xb, LSL #32
7102bbb15c  cmp w8,#0x1
7102bbb160  movk x22,#0x9, LSL #32
7102bbb164  b.hi 0x7102bbb340
7102bbb168  ldur w8,[x20, #0x1]
7102bbb16c  cmp w8,#0x1
7102bbb170  b.lt 0x7102bbb340
7102bbb174  adrp x10,0x7104473000
7102bbb178  ldr s0,[x10, #0x1a0]
7102bbb17c  adrp x10,0x7104472000
7102bbb180  ldr s1,[x10, #0x48]
7102bbb184  mov x8,xzr
7102bbb188  add x9,x20,#0x5
7102bbb18c  adrp x10,0x7104742000
7102bbb190  add x10,x10,#0xdbb
7102bbb194  mov x12,xzr
7102bbb198  tbnz w8,#0x1f,0x7102bbb1cc
7102bbb19c  and w11,w11,#0xff
7102bbb1a0  cmp w11,#0xb
7102bbb1a4  mov x11,x10
7102bbb1a8  b.ne 0x7102bbb1d0
7102bbb1ac  ldur w11,[x20, #0x1]
7102bbb1b0  cmp w11,w8
7102bbb1b4  b.le 0x7102bbb1c8
7102bbb1b8  ldrsw x11,[x9, w8, SXTW #0x2]
7102bbb1bc  add x11,x20,x11
7102bbb1c0  mov x12,x19
7102bbb1c4  b 0x7102bbb1d0
7102bbb1c8  mov x12,xzr
7102bbb1cc  mov x11,x10
7102bbb1d0  ldrb w13,[x11]
7102bbb1d4  cmp w13,#0xc
7102bbb1d8  mov x13,x10
7102bbb1dc  b.ne 0x7102bbb250
7102bbb1e0  ldur w13,[x11, #0x1]
7102bbb1e4  subs w13,w13,#0x1
7102bbb1e8  b.lt 0x7102bbb24c
7102bbb1ec  ldursw x16,[x11, #0x5]
7102bbb1f0  ldp x15,x17,[x12, #0x20]
7102bbb1f4  mov w14,wzr
7102bbb1f8  add x16,x17,x16
7102bbb1fc  add w17,w13,w14
7102bbb200  cmp w17,#0x0
7102bbb204  cinc w17,w17,lt
7102bbb208  asr w17,w17,#0x1
7102bbb20c  add x18,x16,w17, SXTW  #0x3
7102bbb210  ldr w0,[x18]
7102bbb214  ldr x0,[x15, x0, LSL #0x3]
7102bbb218  cmp x0,x25
7102bbb21c  b.eq 0x7102bbb23c
7102bbb220  sub w18,w17,#0x1
7102bbb224  cmp x0,x25
7102bbb228  csel w13,w18,w13,hi
7102bbb22c  csinc w14,w14,w17,hi
7102bbb230  cmp w14,w13
7102bbb234  b.le 0x7102bbb1fc
7102bbb238  b 0x7102bbb24c
7102bbb23c  ldrsw x13,[x18, #0x4]
7102bbb240  tbnz w13,#0x1f,0x7102bbb24c
7102bbb244  add x13,x11,x13
7102bbb248  b 0x7102bbb250
7102bbb24c  mov x13,x10
7102bbb250  ldrb w14,[x13]
7102bbb254  mov v2.16B,v0.16B
7102bbb258  cmp w14,#0x8
7102bbb25c  b.ne 0x7102bbb264
7102bbb260  ldur s2,[x13, #0x1]
7102bbb264  ldr x13,[x21]
7102bbb268  lsl x14,x8,#0x3
7102bbb26c  str s2,[x13,x14]
7102bbb270  ldrb w13,[x11]
7102bbb274  cmp w13,#0xc
7102bbb278  mov x13,x10
7102bbb27c  b.ne 0x7102bbb2f0
7102bbb280  ldur w13,[x11, #0x1]
7102bbb284  subs w13,w13,#0x1
7102bbb288  b.lt 0x7102bbb2ec
7102bbb28c  ldursw x16,[x11, #0x5]
7102bbb290  ldp x15,x12,[x12, #0x20]
7102bbb294  mov w14,wzr
7102bbb298  add x12,x12,x16
7102bbb29c  add w16,w13,w14
7102bbb2a0  cmp w16,#0x0
7102bbb2a4  cinc w16,w16,lt
7102bbb2a8  asr w16,w16,#0x1
7102bbb2ac  add x17,x12,w16, SXTW  #0x3
7102bbb2b0  ldr w18,[x17]
7102bbb2b4  ldr x18,[x15, x18, LSL #0x3]
7102bbb2b8  cmp x18,x22
7102bbb2bc  b.eq 0x7102bbb2dc
7102bbb2c0  sub w17,w16,#0x1
7102bbb2c4  cmp x18,x22
7102bbb2c8  csel w13,w17,w13,hi
7102bbb2cc  csinc w14,w14,w16,hi
7102bbb2d0  cmp w14,w13
7102bbb2d4  b.le 0x7102bbb29c
7102bbb2d8  b 0x7102bbb2ec
7102bbb2dc  ldrsw x12,[x17, #0x4]
7102bbb2e0  tbnz w12,#0x1f,0x7102bbb2ec
7102bbb2e4  add x13,x11,x12
7102bbb2e8  b 0x7102bbb2f0
7102bbb2ec  mov x13,x10
7102bbb2f0  ldrb w11,[x13]
7102bbb2f4  mov v2.16B,v1.16B
7102bbb2f8  cmp w11,#0x8
7102bbb2fc  b.ne 0x7102bbb304
7102bbb300  ldur s2,[x13, #0x1]
7102bbb304  ldr x11,[x21]
7102bbb308  add x11,x11,x8, LSL #0x3
7102bbb30c  add x8,x8,#0x1
7102bbb310  str s2,[x11, #0x4]
7102bbb314  ldrb w11,[x20]
7102bbb318  sub w12,w11,#0xb
7102bbb31c  cmp w12,#0x1
7102bbb320  b.hi 0x7102bbb334
7102bbb324  ldur w12,[x20, #0x1]
7102bbb328  cmp x8,w12, SXTW 
7102bbb32c  b.lt 0x7102bbb194
7102bbb330  b 0x7102bbb340
7102bbb334  mov w12,wzr
7102bbb338  cmp x8,w12, SXTW 
7102bbb33c  b.lt 0x7102bbb194
7102bbb340  ldr x8,[sp, #0x30]
7102bbb344  ldr x8,[x8]
7102bbb348  ldrb w9,[x8]
7102bbb34c  cmp w9,#0xc
7102bbb350  b.ne 0x7102bbb3dc
7102bbb354  ldur w9,[x8, #0x1]
7102bbb358  subs w10,w9,#0x1
7102bbb35c  b.lt 0x7102bbb3dc
7102bbb360  ldr x12,[sp, #0x18]
7102bbb364  ldr x13,[x12]
7102bbb368  ldursw x9,[x8, #0x5]
7102bbb36c  ldp x12,x13,[x13, #0x20]
7102bbb370  mov x14,#0x3b6c
7102bbb374  movk x14,#0xa9cc, LSL #16
7102bbb378  mov w11,wzr
7102bbb37c  add x13,x13,x9
7102bbb380  movk x14,#0x1b, LSL #32
7102bbb384  adrp x9,0x7104742000
7102bbb388  add x9,x9,#0xdbb
7102bbb38c  add w15,w10,w11
7102bbb390  cmp w15,#0x0
7102bbb394  cinc w15,w15,lt
7102bbb398  asr w15,w15,#0x1
7102bbb39c  add x16,x13,w15, SXTW  #0x3
7102bbb3a0  ldr w17,[x16]
7102bbb3a4  ldr x17,[x12, x17, LSL #0x3]
7102bbb3a8  cmp x17,x14
7102bbb3ac  b.eq 0x7102bbb3cc
7102bbb3b0  sub w16,w15,#0x1
7102bbb3b4  cmp x17,x14
7102bbb3b8  csel w10,w16,w10,hi
7102bbb3bc  csinc w11,w11,w15,hi
7102bbb3c0  cmp w11,w10
7102bbb3c4  b.le 0x7102bbb38c
7102bbb3c8  b 0x7102bbb3e4
7102bbb3cc  ldrsw x9,[x16, #0x4]
7102bbb3d0  tbnz w9,#0x1f,0x7102bbb3dc
7102bbb3d4  add x9,x8,x9
7102bbb3d8  b 0x7102bbb3e4
7102bbb3dc  adrp x9,0x7104742000
7102bbb3e0  add x9,x9,#0xdbb
7102bbb3e4  ldrb w8,[x9]
7102bbb3e8  cmp w8,#0x8
7102bbb3ec  b.ne 0x7102bbb3f8
7102bbb3f0  ldur s0,[x9, #0x1]
7102bbb3f4  b 0x7102bbb400
7102bbb3f8  adrp x8,0x7104473000
7102bbb3fc  ldr s0,[x8, #0x7d0]
7102bbb400  ldr x8,[sp, #0x30]
7102bbb404  str s0,[x23, #0x210]
7102bbb408  ldr x8,[x8]
7102bbb40c  ldrb w9,[x8]
7102bbb410  cmp w9,#0xc
7102bbb414  b.ne 0x7102bbb4a0
7102bbb418  ldur w9,[x8, #0x1]
7102bbb41c  subs w9,w9,#0x1
7102bbb420  b.lt 0x7102bbb4a0
7102bbb424  ldr x12,[sp, #0x18]
7102bbb428  ldr x13,[x12]
7102bbb42c  ldursw x10,[x8, #0x5]
7102bbb430  ldp x12,x13,[x13, #0x20]
7102bbb434  mov x14,#0xd30a
7102bbb438  movk x14,#0x3832, LSL #16
7102bbb43c  mov w11,wzr
7102bbb440  add x13,x13,x10
7102bbb444  movk x14,#0x21, LSL #32
7102bbb448  adrp x10,0x7104742000
7102bbb44c  add x10,x10,#0xdbb
7102bbb450  add w15,w9,w11
7102bbb454  cmp w15,#0x0
7102bbb458  cinc w15,w15,lt
7102bbb45c  asr w15,w15,#0x1
7102bbb460  add x16,x13,w15, SXTW  #0x3
7102bbb464  ldr w17,[x16]
7102bbb468  ldr x17,[x12, x17, LSL #0x3]
7102bbb46c  cmp x17,x14
7102bbb470  b.eq 0x7102bbb490
7102bbb474  sub w16,w15,#0x1
7102bbb478  cmp x17,x14
7102bbb47c  csel w9,w16,w9,hi
7102bbb480  csinc w11,w11,w15,hi
7102bbb484  cmp w11,w9
7102bbb488  b.le 0x7102bbb450
7102bbb48c  b 0x7102bbb4a8
7102bbb490  ldrsw x9,[x16, #0x4]
7102bbb494  tbnz w9,#0x1f,0x7102bbb4a0
7102bbb498  add x10,x8,x9
7102bbb49c  b 0x7102bbb4a8
7102bbb4a0  adrp x10,0x7104742000
7102bbb4a4  add x10,x10,#0xdbb
7102bbb4a8  ldrb w8,[x10]
7102bbb4ac  adrp x9,0x7104471000
7102bbb4b0  cmp w8,#0x8
7102bbb4b4  b.ne 0x7102bbb4c0
7102bbb4b8  ldur s0,[x10, #0x1]
7102bbb4bc  b 0x7102bbb4c4
7102bbb4c0  ldr s0,[x9, #0xc4c]
7102bbb4c4  ldr x8,[sp, #0x30]
7102bbb4c8  str s0,[x23, #0x214]
7102bbb4cc  ldr x8,[x8]
7102bbb4d0  ldrb w10,[x8]
7102bbb4d4  cmp w10,#0xc
7102bbb4d8  b.ne 0x7102bbb564
7102bbb4dc  ldur w10,[x8, #0x1]
7102bbb4e0  subs w10,w10,#0x1
7102bbb4e4  b.lt 0x7102bbb564
7102bbb4e8  ldr x13,[sp, #0x18]
7102bbb4ec  ldr x14,[x13]
7102bbb4f0  ldursw x11,[x8, #0x5]
7102bbb4f4  ldp x13,x14,[x14, #0x20]
7102bbb4f8  mov x15,#0x7406
7102bbb4fc  movk x15,#0xd44e, LSL #16
7102bbb500  mov w12,wzr
7102bbb504  add x14,x14,x11
7102bbb508  movk x15,#0x15, LSL #32
7102bbb50c  adrp x11,0x7104742000
7102bbb510  add x11,x11,#0xdbb
7102bbb514  add w16,w10,w12
7102bbb518  cmp w16,#0x0
7102bbb51c  cinc w16,w16,lt
7102bbb520  asr w16,w16,#0x1
7102bbb524  add x17,x14,w16, SXTW  #0x3
7102bbb528  ldr w18,[x17]
7102bbb52c  ldr x18,[x13, x18, LSL #0x3]
7102bbb530  cmp x18,x15
7102bbb534  b.eq 0x7102bbb554
7102bbb538  sub w17,w16,#0x1
7102bbb53c  cmp x18,x15
7102bbb540  csel w10,w17,w10,hi
7102bbb544  csinc w12,w12,w16,hi
7102bbb548  cmp w12,w10
7102bbb54c  b.le 0x7102bbb514
7102bbb550  b 0x7102bbb56c
7102bbb554  ldrsw x10,[x17, #0x4]
7102bbb558  tbnz w10,#0x1f,0x7102bbb564
7102bbb55c  add x11,x8,x10
7102bbb560  b 0x7102bbb56c
7102bbb564  adrp x11,0x7104742000
7102bbb568  add x11,x11,#0xdbb
7102bbb56c  ldrb w8,[x11]
7102bbb570  adrp x10,0x7104471000
7102bbb574  cmp w8,#0x8
7102bbb578  b.ne 0x7102bbb584
7102bbb57c  ldur s0,[x11, #0x1]
7102bbb580  b 0x7102bbb588
7102bbb584  ldr s0,[x10, #0xc90]
7102bbb588  ldr x8,[sp, #0x30]
7102bbb58c  str s0,[x23, #0x218]
7102bbb590  ldr x8,[x8]
7102bbb594  ldrb w11,[x8]
7102bbb598  cmp w11,#0xc
7102bbb59c  b.ne 0x7102bbb628
7102bbb5a0  ldur w11,[x8, #0x1]
7102bbb5a4  subs w11,w11,#0x1
7102bbb5a8  b.lt 0x7102bbb628
7102bbb5ac  ldr x14,[sp, #0x18]
7102bbb5b0  ldr x15,[x14]
7102bbb5b4  ldursw x12,[x8, #0x5]
7102bbb5b8  ldp x14,x15,[x15, #0x20]
7102bbb5bc  mov x16,#0xb03b
7102bbb5c0  movk x16,#0x1e3e, LSL #16
7102bbb5c4  mov w13,wzr
7102bbb5c8  add x15,x15,x12
7102bbb5cc  movk x16,#0x17, LSL #32
7102bbb5d0  adrp x12,0x7104742000
7102bbb5d4  add x12,x12,#0xdbb
7102bbb5d8  add w17,w11,w13
7102bbb5dc  cmp w17,#0x0
7102bbb5e0  cinc w17,w17,lt
7102bbb5e4  asr w17,w17,#0x1
7102bbb5e8  add x18,x15,w17, SXTW  #0x3
7102bbb5ec  ldr w0,[x18]
7102bbb5f0  ldr x0,[x14, x0, LSL #0x3]
7102bbb5f4  cmp x0,x16
7102bbb5f8  b.eq 0x7102bbb618
7102bbb5fc  sub w18,w17,#0x1
7102bbb600  cmp x0,x16
7102bbb604  csel w11,w18,w11,hi
7102bbb608  csinc w13,w13,w17,hi
7102bbb60c  cmp w13,w11
7102bbb610  b.le 0x7102bbb5d8
7102bbb614  b 0x7102bbb630
7102bbb618  ldrsw x11,[x18, #0x4]
7102bbb61c  tbnz w11,#0x1f,0x7102bbb628
7102bbb620  add x12,x8,x11
7102bbb624  b 0x7102bbb630
7102bbb628  adrp x12,0x7104742000
7102bbb62c  add x12,x12,#0xdbb
7102bbb630  ldrb w8,[x12]
7102bbb634  adrp x11,0x7104473000
7102bbb638  cmp w8,#0x8
7102bbb63c  b.ne 0x7102bbb648
7102bbb640  ldur s0,[x12, #0x1]
7102bbb644  b 0x7102bbb64c
7102bbb648  ldr s0,[x11, #0xa04]
7102bbb64c  ldr x8,[sp, #0x30]
7102bbb650  str s0,[x23, #0x21c]
7102bbb654  ldr x8,[x8]
7102bbb658  ldrb w12,[x8]
7102bbb65c  cmp w12,#0xc
7102bbb660  b.ne 0x7102bbb6ec
7102bbb664  ldur w12,[x8, #0x1]
7102bbb668  subs w13,w12,#0x1
7102bbb66c  b.lt 0x7102bbb6ec
7102bbb670  ldr x15,[sp, #0x18]
7102bbb674  ldr x16,[x15]
7102bbb678  ldursw x12,[x8, #0x5]
7102bbb67c  ldp x15,x16,[x16, #0x20]
7102bbb680  mov x17,#0x8ce3
7102bbb684  movk x17,#0x3d9c, LSL #16
7102bbb688  mov w14,wzr
7102bbb68c  add x16,x16,x12
7102bbb690  movk x17,#0x1f, LSL #32
7102bbb694  adrp x12,0x7104742000
7102bbb698  add x12,x12,#0xdbb
7102bbb69c  add w18,w13,w14
7102bbb6a0  cmp w18,#0x0
7102bbb6a4  cinc w18,w18,lt
7102bbb6a8  asr w18,w18,#0x1
7102bbb6ac  add x0,x16,w18, SXTW  #0x3
7102bbb6b0  ldr w1,[x0]
7102bbb6b4  ldr x1,[x15, x1, LSL #0x3]
7102bbb6b8  cmp x1,x17
7102bbb6bc  b.eq 0x7102bbb6dc
7102bbb6c0  sub w0,w18,#0x1
7102bbb6c4  cmp x1,x17
7102bbb6c8  csel w13,w0,w13,hi
7102bbb6cc  csinc w14,w14,w18,hi
7102bbb6d0  cmp w14,w13
7102bbb6d4  b.le 0x7102bbb69c
7102bbb6d8  b 0x7102bbb6f4
7102bbb6dc  ldrsw x12,[x0, #0x4]
7102bbb6e0  tbnz w12,#0x1f,0x7102bbb6ec
7102bbb6e4  add x12,x8,x12
7102bbb6e8  b 0x7102bbb6f4
7102bbb6ec  adrp x12,0x7104742000
7102bbb6f0  add x12,x12,#0xdbb
7102bbb6f4  ldrb w13,[x12]
7102bbb6f8  adrp x8,0x7104472000
7102bbb6fc  cmp w13,#0x8
7102bbb700  b.ne 0x7102bbb70c
7102bbb704  ldur s0,[x12, #0x1]
7102bbb708  b 0x7102bbb710
7102bbb70c  ldr s0,[x8, #0x858]
7102bbb710  ldr x12,[sp, #0x30]
7102bbb714  str s0,[x23, #0x220]
7102bbb718  ldr x12,[x12]
7102bbb71c  ldrb w13,[x12]
7102bbb720  cmp w13,#0xc
7102bbb724  b.ne 0x7102bbb7b0
7102bbb728  ldur w13,[x12, #0x1]
7102bbb72c  subs w14,w13,#0x1
7102bbb730  b.lt 0x7102bbb7b0
7102bbb734  ldr x16,[sp, #0x18]
7102bbb738  ldr x17,[x16]
7102bbb73c  ldursw x13,[x12, #0x5]
7102bbb740  ldp x16,x17,[x17, #0x20]
7102bbb744  mov x18,#0x8bc4
7102bbb748  movk x18,#0x3f42, LSL #16
7102bbb74c  mov w15,wzr
7102bbb750  add x17,x17,x13
7102bbb754  movk x18,#0x1f, LSL #32
7102bbb758  adrp x13,0x7104742000
7102bbb75c  add x13,x13,#0xdbb
7102bbb760  add w0,w14,w15
7102bbb764  cmp w0,#0x0
7102bbb768  cinc w0,w0,lt
7102bbb76c  asr w0,w0,#0x1
7102bbb770  add x1,x17,w0, SXTW  #0x3
7102bbb774  ldr w2,[x1]
7102bbb778  ldr x2,[x16, x2, LSL #0x3]
7102bbb77c  cmp x2,x18
7102bbb780  b.eq 0x7102bbb7a0
7102bbb784  sub w1,w0,#0x1
7102bbb788  cmp x2,x18
7102bbb78c  csel w14,w1,w14,hi
7102bbb790  csinc w15,w15,w0,hi
7102bbb794  cmp w15,w14
7102bbb798  b.le 0x7102bbb760
7102bbb79c  b 0x7102bbb7b8
7102bbb7a0  ldrsw x13,[x1, #0x4]
7102bbb7a4  tbnz w13,#0x1f,0x7102bbb7b0
7102bbb7a8  add x13,x12,x13
7102bbb7ac  b 0x7102bbb7b8
7102bbb7b0  adrp x13,0x7104742000
7102bbb7b4  add x13,x13,#0xdbb
7102bbb7b8  ldrb w12,[x13]
7102bbb7bc  cmp w12,#0x8
7102bbb7c0  b.ne 0x7102bbb7cc
7102bbb7c4  ldur s0,[x13, #0x1]
7102bbb7c8  b 0x7102bbb7d0
7102bbb7cc  ldr s0,[x9, #0xc4c]
7102bbb7d0  ldr x9,[sp, #0x30]
7102bbb7d4  str s0,[x23, #0x224]
7102bbb7d8  ldr x9,[x9]
7102bbb7dc  ldrb w12,[x9]
7102bbb7e0  cmp w12,#0xc
7102bbb7e4  b.ne 0x7102bbb870
7102bbb7e8  ldur w12,[x9, #0x1]
7102bbb7ec  subs w13,w12,#0x1
7102bbb7f0  b.lt 0x7102bbb870
7102bbb7f4  ldr x15,[sp, #0x18]
7102bbb7f8  ldr x16,[x15]
7102bbb7fc  ldursw x12,[x9, #0x5]
7102bbb800  ldp x15,x16,[x16, #0x20]
7102bbb804  mov x17,#0xa964
7102bbb808  movk x17,#0x3ec8, LSL #16
7102bbb80c  mov w14,wzr
7102bbb810  add x16,x16,x12
7102bbb814  movk x17,#0x15, LSL #32
7102bbb818  adrp x12,0x7104742000
7102bbb81c  add x12,x12,#0xdbb
7102bbb820  add w18,w13,w14
7102bbb824  cmp w18,#0x0
7102bbb828  cinc w18,w18,lt
7102bbb82c  asr w18,w18,#0x1
7102bbb830  add x0,x16,w18, SXTW  #0x3
7102bbb834  ldr w1,[x0]
7102bbb838  ldr x1,[x15, x1, LSL #0x3]
7102bbb83c  cmp x1,x17
7102bbb840  b.eq 0x7102bbb860
7102bbb844  sub w0,w18,#0x1
7102bbb848  cmp x1,x17
7102bbb84c  csel w13,w0,w13,hi
7102bbb850  csinc w14,w14,w18,hi
7102bbb854  cmp w14,w13
7102bbb858  b.le 0x7102bbb820
7102bbb85c  b 0x7102bbb878
7102bbb860  ldrsw x12,[x0, #0x4]
7102bbb864  tbnz w12,#0x1f,0x7102bbb870
7102bbb868  add x12,x9,x12
7102bbb86c  b 0x7102bbb878
7102bbb870  adrp x12,0x7104742000
7102bbb874  add x12,x12,#0xdbb
7102bbb878  ldrb w9,[x12]
7102bbb87c  cmp w9,#0x8
7102bbb880  b.ne 0x7102bbb88c
7102bbb884  ldur s0,[x12, #0x1]
7102bbb888  b 0x7102bbb890
7102bbb88c  ldr s0,[x10, #0xc90]
7102bbb890  ldr x9,[sp, #0x30]
7102bbb894  str s0,[x23, #0x228]
7102bbb898  ldr x9,[x9]
7102bbb89c  ldrb w10,[x9]
7102bbb8a0  cmp w10,#0xc
7102bbb8a4  b.ne 0x7102bbb930
7102bbb8a8  ldur w10,[x9, #0x1]
7102bbb8ac  subs w12,w10,#0x1
7102bbb8b0  b.lt 0x7102bbb930
7102bbb8b4  ldr x14,[sp, #0x18]
7102bbb8b8  ldr x15,[x14]
7102bbb8bc  ldursw x10,[x9, #0x5]
7102bbb8c0  ldp x14,x15,[x15, #0x20]
7102bbb8c4  mov x16,#0xfdf1
7102bbb8c8  movk x16,#0xb197, LSL #16
7102bbb8cc  mov w13,wzr
7102bbb8d0  add x15,x15,x10
7102bbb8d4  movk x16,#0x17, LSL #32
7102bbb8d8  adrp x10,0x7104742000
7102bbb8dc  add x10,x10,#0xdbb
7102bbb8e0  add w17,w12,w13
7102bbb8e4  cmp w17,#0x0
7102bbb8e8  cinc w17,w17,lt
7102bbb8ec  asr w17,w17,#0x1
7102bbb8f0  add x18,x15,w17, SXTW  #0x3
7102bbb8f4  ldr w0,[x18]
7102bbb8f8  ldr x0,[x14, x0, LSL #0x3]
7102bbb8fc  cmp x0,x16
7102bbb900  b.eq 0x7102bbb920
7102bbb904  sub w18,w17,#0x1
7102bbb908  cmp x0,x16
7102bbb90c  csel w12,w18,w12,hi
7102bbb910  csinc w13,w13,w17,hi
7102bbb914  cmp w13,w12
7102bbb918  b.le 0x7102bbb8e0
7102bbb91c  b 0x7102bbb938
7102bbb920  ldrsw x10,[x18, #0x4]
7102bbb924  tbnz w10,#0x1f,0x7102bbb930
7102bbb928  add x10,x9,x10
7102bbb92c  b 0x7102bbb938
7102bbb930  adrp x10,0x7104742000
7102bbb934  add x10,x10,#0xdbb
7102bbb938  ldrb w9,[x10]
7102bbb93c  cmp w9,#0x8
7102bbb940  b.ne 0x7102bbb94c
7102bbb944  ldur s0,[x10, #0x1]
7102bbb948  b 0x7102bbb950
7102bbb94c  ldr s0,[x11, #0xa04]
7102bbb950  ldr x9,[sp, #0x30]
7102bbb954  str s0,[x23, #0x22c]
7102bbb958  ldr x9,[x9]
7102bbb95c  ldrb w10,[x9]
7102bbb960  cmp w10,#0xc
7102bbb964  b.ne 0x7102bbb9f0
7102bbb968  ldur w10,[x9, #0x1]
7102bbb96c  subs w11,w10,#0x1
7102bbb970  b.lt 0x7102bbb9f0
7102bbb974  ldr x13,[sp, #0x18]
7102bbb978  ldr x14,[x13]
7102bbb97c  ldursw x10,[x9, #0x5]
7102bbb980  ldp x13,x14,[x14, #0x20]
7102bbb984  mov x15,#0xf612
7102bbb988  movk x15,#0x7c93, LSL #16
7102bbb98c  mov w12,wzr
7102bbb990  add x14,x14,x10
7102bbb994  movk x15,#0x21, LSL #32
7102bbb998  adrp x10,0x7104742000
7102bbb99c  add x10,x10,#0xdbb
7102bbb9a0  add w16,w11,w12
7102bbb9a4  cmp w16,#0x0
7102bbb9a8  cinc w16,w16,lt
7102bbb9ac  asr w16,w16,#0x1
7102bbb9b0  add x17,x14,w16, SXTW  #0x3
7102bbb9b4  ldr w18,[x17]
7102bbb9b8  ldr x18,[x13, x18, LSL #0x3]
7102bbb9bc  cmp x18,x15
7102bbb9c0  b.eq 0x7102bbb9e0
7102bbb9c4  sub w17,w16,#0x1
7102bbb9c8  cmp x18,x15
7102bbb9cc  csel w11,w17,w11,hi
7102bbb9d0  csinc w12,w12,w16,hi
7102bbb9d4  cmp w12,w11
7102bbb9d8  b.le 0x7102bbb9a0
7102bbb9dc  b 0x7102bbb9f8
7102bbb9e0  ldrsw x10,[x17, #0x4]
7102bbb9e4  tbnz w10,#0x1f,0x7102bbb9f0
7102bbb9e8  add x10,x9,x10
7102bbb9ec  b 0x7102bbb9f8
7102bbb9f0  adrp x10,0x7104742000
7102bbb9f4  add x10,x10,#0xdbb
7102bbb9f8  ldrb w9,[x10]
7102bbb9fc  cmp w9,#0x8
7102bbba00  b.ne 0x7102bbba0c
7102bbba04  ldur s0,[x10, #0x1]
7102bbba08  b 0x7102bbba10
7102bbba0c  ldr s0,[x8, #0x858]
7102bbba10  ldr x9,[sp, #0x30]
7102bbba14  str s0,[x23, #0x230]
7102bbba18  ldr x9,[x9]
7102bbba1c  ldrb w10,[x9]
7102bbba20  cmp w10,#0xc
7102bbba24  b.ne 0x7102bbbab0
7102bbba28  ldur w10,[x9, #0x1]
7102bbba2c  subs w11,w10,#0x1
7102bbba30  b.lt 0x7102bbbab0
7102bbba34  ldr x13,[sp, #0x18]
7102bbba38  ldr x14,[x13]
7102bbba3c  ldursw x10,[x9, #0x5]
7102bbba40  ldp x13,x14,[x14, #0x20]
7102bbba44  mov x15,#0x76d9
7102bbba48  movk x15,#0x3ef7, LSL #16
7102bbba4c  mov w12,wzr
7102bbba50  add x14,x14,x10
7102bbba54  movk x15,#0x1f, LSL #32
7102bbba58  adrp x10,0x7104742000
7102bbba5c  add x10,x10,#0xdbb
7102bbba60  add w16,w11,w12
7102bbba64  cmp w16,#0x0
7102bbba68  cinc w16,w16,lt
7102bbba6c  asr w16,w16,#0x1
7102bbba70  add x17,x14,w16, SXTW  #0x3
7102bbba74  ldr w18,[x17]
7102bbba78  ldr x18,[x13, x18, LSL #0x3]
7102bbba7c  cmp x18,x15
7102bbba80  b.eq 0x7102bbbaa0
7102bbba84  sub w17,w16,#0x1
7102bbba88  cmp x18,x15
7102bbba8c  csel w11,w17,w11,hi
7102bbba90  csinc w12,w12,w16,hi
7102bbba94  cmp w12,w11
7102bbba98  b.le 0x7102bbba60
7102bbba9c  b 0x7102bbbab8
7102bbbaa0  ldrsw x10,[x17, #0x4]
7102bbbaa4  tbnz w10,#0x1f,0x7102bbbab0
7102bbbaa8  add x10,x9,x10
7102bbbaac  b 0x7102bbbab8
7102bbbab0  adrp x10,0x7104742000
7102bbbab4  add x10,x10,#0xdbb
7102bbbab8  ldrb w9,[x10]
7102bbbabc  cmp w9,#0x8
7102bbbac0  b.ne 0x7102bbbacc
7102bbbac4  ldur s0,[x10, #0x1]
7102bbbac8  b 0x7102bbbad4
7102bbbacc  adrp x9,0x7104472000
7102bbbad0  ldr s0,[x9, #0x450]
7102bbbad4  ldr x9,[sp, #0x30]
7102bbbad8  str s0,[x23, #0x234]
7102bbbadc  ldr x9,[x9]
7102bbbae0  ldrb w10,[x9]
7102bbbae4  cmp w10,#0xc
7102bbbae8  b.ne 0x7102bbbb74
7102bbbaec  ldur w10,[x9, #0x1]
7102bbbaf0  subs w11,w10,#0x1
7102bbbaf4  b.lt 0x7102bbbb74
7102bbbaf8  ldr x13,[sp, #0x18]
7102bbbafc  ldr x14,[x13]
7102bbbb00  ldursw x10,[x9, #0x5]
7102bbbb04  ldp x13,x14,[x14, #0x20]
7102bbbb08  mov x15,#0x1f85
7102bbbb0c  movk x15,#0xd19a, LSL #16
7102bbbb10  mov w12,wzr
7102bbbb14  add x14,x14,x10
7102bbbb18  movk x15,#0x15, LSL #32
7102bbbb1c  adrp x10,0x7104742000
7102bbbb20  add x10,x10,#0xdbb
7102bbbb24  add w16,w11,w12
7102bbbb28  cmp w16,#0x0
7102bbbb2c  cinc w16,w16,lt
7102bbbb30  asr w16,w16,#0x1
7102bbbb34  add x17,x14,w16, SXTW  #0x3
7102bbbb38  ldr w18,[x17]
7102bbbb3c  ldr x18,[x13, x18, LSL #0x3]
7102bbbb40  cmp x18,x15
7102bbbb44  b.eq 0x7102bbbb64
7102bbbb48  sub w17,w16,#0x1
7102bbbb4c  cmp x18,x15
7102bbbb50  csel w11,w17,w11,hi
7102bbbb54  csinc w12,w12,w16,hi
7102bbbb58  cmp w12,w11
7102bbbb5c  b.le 0x7102bbbb24
7102bbbb60  b 0x7102bbbb7c
7102bbbb64  ldrsw x10,[x17, #0x4]
7102bbbb68  tbnz w10,#0x1f,0x7102bbbb74
7102bbbb6c  add x10,x9,x10
7102bbbb70  b 0x7102bbbb7c
7102bbbb74  adrp x10,0x7104742000
7102bbbb78  add x10,x10,#0xdbb
7102bbbb7c  ldrb w9,[x10]
7102bbbb80  cmp w9,#0x8
7102bbbb84  b.ne 0x7102bbbb90
7102bbbb88  ldur s0,[x10, #0x1]
7102bbbb8c  b 0x7102bbbb98
7102bbbb90  adrp x9,0x7104471000
7102bbbb94  ldr s0,[x9, #0xc9c]
7102bbbb98  ldr x9,[sp, #0x30]
7102bbbb9c  str s0,[x23, #0x238]
7102bbbba0  ldr x9,[x9]
7102bbbba4  ldrb w10,[x9]
7102bbbba8  cmp w10,#0xc
7102bbbbac  b.ne 0x7102bbbc38
7102bbbbb0  ldur w10,[x9, #0x1]
7102bbbbb4  subs w11,w10,#0x1
7102bbbbb8  b.lt 0x7102bbbc38
7102bbbbbc  ldr x13,[sp, #0x18]
7102bbbbc0  ldr x14,[x13]
7102bbbbc4  ldursw x10,[x9, #0x5]
7102bbbbc8  ldp x13,x14,[x14, #0x20]
7102bbbbcc  mov x15,#0xc6b7
7102bbbbd0  movk x15,#0xd4f0, LSL #16
7102bbbbd4  mov w12,wzr
7102bbbbd8  add x14,x14,x10
7102bbbbdc  movk x15,#0x17, LSL #32
7102bbbbe0  adrp x10,0x7104742000
7102bbbbe4  add x10,x10,#0xdbb
7102bbbbe8  add w16,w11,w12
7102bbbbec  cmp w16,#0x0
7102bbbbf0  cinc w16,w16,lt
7102bbbbf4  asr w16,w16,#0x1
7102bbbbf8  add x17,x14,w16, SXTW  #0x3
7102bbbbfc  ldr w18,[x17]
7102bbbc00  ldr x18,[x13, x18, LSL #0x3]
7102bbbc04  cmp x18,x15
7102bbbc08  b.eq 0x7102bbbc28
7102bbbc0c  sub w17,w16,#0x1
7102bbbc10  cmp x18,x15
7102bbbc14  csel w11,w17,w11,hi
7102bbbc18  csinc w12,w12,w16,hi
7102bbbc1c  cmp w12,w11
7102bbbc20  b.le 0x7102bbbbe8
7102bbbc24  b 0x7102bbbc40
7102bbbc28  ldrsw x10,[x17, #0x4]
7102bbbc2c  tbnz w10,#0x1f,0x7102bbbc38
7102bbbc30  add x10,x9,x10
7102bbbc34  b 0x7102bbbc40
7102bbbc38  adrp x10,0x7104742000
7102bbbc3c  add x10,x10,#0xdbb
7102bbbc40  ldrb w9,[x10]
7102bbbc44  cmp w9,#0x8
7102bbbc48  b.ne 0x7102bbbc54
7102bbbc4c  ldur s0,[x10, #0x1]
7102bbbc50  b 0x7102bbbc5c
7102bbbc54  adrp x9,0x7104472000
7102bbbc58  ldr s0,[x9, #0x54c]
7102bbbc5c  ldr x9,[sp, #0x30]
7102bbbc60  str s0,[x23, #0x23c]
7102bbbc64  ldr x9,[x9]
7102bbbc68  ldrb w10,[x9]
7102bbbc6c  cmp w10,#0xc
7102bbbc70  b.ne 0x7102bbbcfc
7102bbbc74  ldur w10,[x9, #0x1]
7102bbbc78  subs w11,w10,#0x1
7102bbbc7c  b.lt 0x7102bbbcfc
7102bbbc80  ldr x13,[sp, #0x18]
7102bbbc84  ldr x14,[x13]
7102bbbc88  ldursw x10,[x9, #0x5]
7102bbbc8c  ldp x13,x14,[x14, #0x20]
7102bbbc90  mov x15,#0xd6bf
7102bbbc94  movk x15,#0x95dd, LSL #16
7102bbbc98  mov w12,wzr
7102bbbc9c  add x14,x14,x10
7102bbbca0  movk x15,#0x18, LSL #32
7102bbbca4  adrp x10,0x7104742000
7102bbbca8  add x10,x10,#0xdbb
7102bbbcac  add w16,w11,w12
7102bbbcb0  cmp w16,#0x0
7102bbbcb4  cinc w16,w16,lt
7102bbbcb8  asr w16,w16,#0x1
7102bbbcbc  add x17,x14,w16, SXTW  #0x3
7102bbbcc0  ldr w18,[x17]
7102bbbcc4  ldr x18,[x13, x18, LSL #0x3]
7102bbbcc8  cmp x18,x15
7102bbbccc  b.eq 0x7102bbbcec
7102bbbcd0  sub w17,w16,#0x1
7102bbbcd4  cmp x18,x15
7102bbbcd8  csel w11,w17,w11,hi
7102bbbcdc  csinc w12,w12,w16,hi
7102bbbce0  cmp w12,w11
7102bbbce4  b.le 0x7102bbbcac
7102bbbce8  b 0x7102bbbd04
7102bbbcec  ldrsw x10,[x17, #0x4]
7102bbbcf0  tbnz w10,#0x1f,0x7102bbbcfc
7102bbbcf4  add x10,x9,x10
7102bbbcf8  b 0x7102bbbd04
7102bbbcfc  adrp x10,0x7104742000
7102bbbd00  add x10,x10,#0xdbb
7102bbbd04  ldrb w9,[x10]
7102bbbd08  cmp w9,#0x8
7102bbbd0c  b.ne 0x7102bbbd18
7102bbbd10  ldur s0,[x10, #0x1]
7102bbbd14  b 0x7102bbbd20
7102bbbd18  adrp x9,0x7104472000
7102bbbd1c  ldr s0,[x9, #0x454]
7102bbbd20  ldr x9,[sp, #0x30]
7102bbbd24  str s0,[x23, #0x240]
7102bbbd28  ldr x9,[x9]
7102bbbd2c  ldrb w10,[x9]
7102bbbd30  cmp w10,#0xc
7102bbbd34  b.ne 0x7102bbbdc0
7102bbbd38  ldur w10,[x9, #0x1]
7102bbbd3c  subs w11,w10,#0x1
7102bbbd40  b.lt 0x7102bbbdc0
7102bbbd44  ldr x13,[sp, #0x18]
7102bbbd48  ldr x14,[x13]
7102bbbd4c  ldursw x10,[x9, #0x5]
7102bbbd50  ldp x13,x14,[x14, #0x20]
7102bbbd54  mov x15,#0x269d
7102bbbd58  movk x15,#0x13e1, LSL #16
7102bbbd5c  mov w12,wzr
7102bbbd60  add x14,x14,x10
7102bbbd64  movk x15,#0x1a, LSL #32
7102bbbd68  adrp x10,0x7104742000
7102bbbd6c  add x10,x10,#0xdbb
7102bbbd70  add w16,w11,w12
7102bbbd74  cmp w16,#0x0
7102bbbd78  cinc w16,w16,lt
7102bbbd7c  asr w16,w16,#0x1
7102bbbd80  add x17,x14,w16, SXTW  #0x3
7102bbbd84  ldr w18,[x17]
7102bbbd88  ldr x18,[x13, x18, LSL #0x3]
7102bbbd8c  cmp x18,x15
7102bbbd90  b.eq 0x7102bbbdb0
7102bbbd94  sub w17,w16,#0x1
7102bbbd98  cmp x18,x15
7102bbbd9c  csel w11,w17,w11,hi
7102bbbda0  csinc w12,w12,w16,hi
7102bbbda4  cmp w12,w11
7102bbbda8  b.le 0x7102bbbd70
7102bbbdac  b 0x7102bbbdc8
7102bbbdb0  ldrsw x10,[x17, #0x4]
7102bbbdb4  tbnz w10,#0x1f,0x7102bbbdc0
7102bbbdb8  add x10,x9,x10
7102bbbdbc  b 0x7102bbbdc8
7102bbbdc0  adrp x10,0x7104742000
7102bbbdc4  add x10,x10,#0xdbb
7102bbbdc8  ldrb w9,[x10]
7102bbbdcc  cmp w9,#0x8
7102bbbdd0  b.ne 0x7102bbbddc
7102bbbdd4  ldur s0,[x10, #0x1]
7102bbbdd8  b 0x7102bbbde4
7102bbbddc  adrp x9,0x7104473000
7102bbbde0  ldr s0,[x9, #0x5a0]
7102bbbde4  ldr x9,[sp, #0x30]
7102bbbde8  str s0,[x23, #0x244]
7102bbbdec  ldr x9,[x9]
7102bbbdf0  ldrb w10,[x9]
7102bbbdf4  cmp w10,#0xc
7102bbbdf8  b.ne 0x7102bbbe84
7102bbbdfc  ldur w10,[x9, #0x1]
7102bbbe00  subs w11,w10,#0x1
7102bbbe04  b.lt 0x7102bbbe84
7102bbbe08  ldr x13,[sp, #0x18]
7102bbbe0c  ldr x14,[x13]
7102bbbe10  ldursw x10,[x9, #0x5]
7102bbbe14  ldp x13,x14,[x14, #0x20]
7102bbbe18  mov x15,#0x151a
7102bbbe1c  movk x15,#0x40f3, LSL #16
7102bbbe20  mov w12,wzr
7102bbbe24  add x14,x14,x10
7102bbbe28  movk x15,#0x21, LSL #32
7102bbbe2c  adrp x10,0x7104742000
7102bbbe30  add x10,x10,#0xdbb
7102bbbe34  add w16,w11,w12
7102bbbe38  cmp w16,#0x0
7102bbbe3c  cinc w16,w16,lt
7102bbbe40  asr w16,w16,#0x1
7102bbbe44  add x17,x14,w16, SXTW  #0x3
7102bbbe48  ldr w18,[x17]
7102bbbe4c  ldr x18,[x13, x18, LSL #0x3]
7102bbbe50  cmp x18,x15
7102bbbe54  b.eq 0x7102bbbe74
7102bbbe58  sub w17,w16,#0x1
7102bbbe5c  cmp x18,x15
7102bbbe60  csel w11,w17,w11,hi
7102bbbe64  csinc w12,w12,w16,hi
7102bbbe68  cmp w12,w11
7102bbbe6c  b.le 0x7102bbbe34
7102bbbe70  b 0x7102bbbe8c
7102bbbe74  ldrsw x10,[x17, #0x4]
7102bbbe78  tbnz w10,#0x1f,0x7102bbbe84
7102bbbe7c  add x10,x9,x10
7102bbbe80  b 0x7102bbbe8c
7102bbbe84  adrp x10,0x7104742000
7102bbbe88  add x10,x10,#0xdbb
7102bbbe8c  ldrb w9,[x10]
7102bbbe90  cmp w9,#0x8
7102bbbe94  b.ne 0x7102bbbea0
7102bbbe98  ldur s0,[x10, #0x1]
7102bbbe9c  b 0x7102bbbea4
7102bbbea0  ldr s0,[x8, #0x858]
7102bbbea4  ldr x8,[sp, #0x30]
7102bbbea8  str s0,[x23, #0x248]
7102bbbeac  ldr x8,[x8]
7102bbbeb0  ldrb w9,[x8]
7102bbbeb4  cmp w9,#0xc
7102bbbeb8  b.ne 0x7102bbbf44
7102bbbebc  ldur w9,[x8, #0x1]
7102bbbec0  subs w9,w9,#0x1
7102bbbec4  b.lt 0x7102bbbf44
7102bbbec8  ldr x11,[sp, #0x18]
7102bbbecc  ldr x13,[x11]
7102bbbed0  ldursw x12,[x8, #0x5]
7102bbbed4  ldp x11,x13,[x13, #0x20]
7102bbbed8  add x12,x13,x12
7102bbbedc  mov x13,#0xf7ca
7102bbbee0  movk x13,#0x7709, LSL #16
7102bbbee4  mov w10,wzr
7102bbbee8  adrp x19,0x7104742000
7102bbbeec  add x19,x19,#0xdbb
7102bbbef0  movk x13,#0x11, LSL #32
7102bbbef4  add w14,w9,w10
7102bbbef8  cmp w14,#0x0
7102bbbefc  cinc w14,w14,lt
7102bbbf00  asr w14,w14,#0x1
7102bbbf04  add x15,x12,w14, SXTW  #0x3
7102bbbf08  ldr w16,[x15]
7102bbbf0c  ldr x16,[x11, x16, LSL #0x3]
7102bbbf10  cmp x16,x13
7102bbbf14  b.eq 0x7102bbbf34
7102bbbf18  sub w15,w14,#0x1
7102bbbf1c  cmp x16,x13
7102bbbf20  csel w9,w15,w9,hi
7102bbbf24  csinc w10,w10,w14,hi
7102bbbf28  cmp w10,w9
7102bbbf2c  b.le 0x7102bbbef4
7102bbbf30  b 0x7102bbbf4c
7102bbbf34  ldrsw x9,[x15, #0x4]
7102bbbf38  tbnz w9,#0x1f,0x7102bbbf44
7102bbbf3c  add x19,x8,x9
7102bbbf40  b 0x7102bbbf4c
7102bbbf44  adrp x19,0x7104742000
7102bbbf48  add x19,x19,#0xdbb
7102bbbf4c  ldrb w8,[x19]
7102bbbf50  sub w8,w8,#0xb
7102bbbf54  cmp w8,#0x1
7102bbbf58  b.hi 0x7102bbbf64
7102bbbf5c  ldur w8,[x19, #0x1]
7102bbbf60  b 0x7102bbbf68
7102bbbf64  mov w8,wzr
7102bbbf68  ldr x10,[x23, #0x258]
7102bbbf6c  ldr x9,[x23, #0x250]
7102bbbf70  sub x10,x10,x9
7102bbbf74  sxtw x8,w8
7102bbbf78  asr x10,x10,#0x2
7102bbbf7c  add x21,x23,#0x250
7102bbbf80  cmp x10,x8
7102bbbf84  b.cs 0x7102bbbf98
7102bbbf88  sub x1,x8,x10
7102bbbf8c  mov x0,x21
7102bbbf90  bl 0x71003ca470
7102bbbf94  b 0x7102bbbfa4
7102bbbf98  b.ls 0x7102bbbfa4
7102bbbf9c  add x8,x9,x8, LSL #0x2
7102bbbfa0  str x8,[x23, #0x258]
7102bbbfa4  ldrb w12,[x19]
7102bbbfa8  sub w8,w12,#0xb
7102bbbfac  cmp w8,#0x1
7102bbbfb0  b.hi 0x7102bbc054
7102bbbfb4  ldur w8,[x19, #0x1]
7102bbbfb8  cmp w8,#0x1
7102bbbfbc  b.lt 0x7102bbc054
7102bbbfc0  fmov s0,wzr
7102bbbfc4  mov w8,wzr
7102bbbfc8  mov x9,xzr
7102bbbfcc  add x10,x19,#0x5
7102bbbfd0  adrp x11,0x7104742000
7102bbbfd4  add x11,x11,#0xdbb
7102bbbfd8  tbnz w9,#0x1f,0x7102bbc008
7102bbbfdc  and w12,w12,#0xff
7102bbbfe0  cmp w12,#0xb
7102bbbfe4  mov x12,x11
7102bbbfe8  b.ne 0x7102bbc00c
7102bbbfec  ldur w12,[x19, #0x1]
7102bbbff0  cmp w12,w9
7102bbbff4  mov x12,x11
7102bbbff8  b.le 0x7102bbc00c
7102bbbffc  ldrsw x12,[x10, w8, SXTW #0x0]
7102bbc000  add x12,x19,x12
7102bbc004  b 0x7102bbc00c
7102bbc008  mov x12,x11
7102bbc00c  ldrb w13,[x12]
7102bbc010  mov v1.16B,v0.16B
7102bbc014  cmp w13,#0x8
7102bbc018  b.ne 0x7102bbc020
7102bbc01c  ldur s1,[x12, #0x1]
7102bbc020  ldr x12,[x21]
7102bbc024  str s1,[x12,x9, lsl #2]
7102bbc028  ldrb w12,[x19]
7102bbc02c  sub w13,w12,#0xb
7102bbc030  add x9,x9,#0x1
7102bbc034  cmp w13,#0x1
7102bbc038  b.hi 0x7102bbc044
7102bbc03c  ldur w13,[x19, #0x1]
7102bbc040  b 0x7102bbc048
7102bbc044  mov w13,wzr
7102bbc048  add w8,w8,#0x4
7102bbc04c  cmp x9,w13, SXTW 
7102bbc050  b.lt 0x7102bbbfd8
7102bbc054  ldr x8,[sp, #0x30]
7102bbc058  ldr x8,[x8]
7102bbc05c  ldrb w9,[x8]
7102bbc060  cmp w9,#0xc
7102bbc064  b.ne 0x7102bbc0f0
7102bbc068  ldur w9,[x8, #0x1]
7102bbc06c  subs w9,w9,#0x1
7102bbc070  b.lt 0x7102bbc0f0
7102bbc074  ldr x11,[sp, #0x18]
7102bbc078  ldr x13,[x11]
7102bbc07c  ldursw x12,[x8, #0x5]
7102bbc080  ldp x11,x13,[x13, #0x20]
7102bbc084  add x12,x13,x12
7102bbc088  mov x13,#0xee22
7102bbc08c  movk x13,#0xd90d, LSL #16
7102bbc090  mov w10,wzr
7102bbc094  adrp x19,0x7104742000
7102bbc098  add x19,x19,#0xdbb
7102bbc09c  movk x13,#0x13, LSL #32
7102bbc0a0  add w14,w9,w10
7102bbc0a4  cmp w14,#0x0
7102bbc0a8  cinc w14,w14,lt
7102bbc0ac  asr w14,w14,#0x1
7102bbc0b0  add x15,x12,w14, SXTW  #0x3
7102bbc0b4  ldr w16,[x15]
7102bbc0b8  ldr x16,[x11, x16, LSL #0x3]
7102bbc0bc  cmp x16,x13
7102bbc0c0  b.eq 0x7102bbc0e0
7102bbc0c4  sub w15,w14,#0x1
7102bbc0c8  cmp x16,x13
7102bbc0cc  csel w9,w15,w9,hi
7102bbc0d0  csinc w10,w10,w14,hi
7102bbc0d4  cmp w10,w9
7102bbc0d8  b.le 0x7102bbc0a0
7102bbc0dc  b 0x7102bbc0f8
7102bbc0e0  ldrsw x9,[x15, #0x4]
7102bbc0e4  tbnz w9,#0x1f,0x7102bbc0f0
7102bbc0e8  add x19,x8,x9
7102bbc0ec  b 0x7102bbc0f8
7102bbc0f0  adrp x19,0x7104742000
7102bbc0f4  add x19,x19,#0xdbb
7102bbc0f8  ldrb w8,[x19]
7102bbc0fc  sub w8,w8,#0xb
7102bbc100  cmp w8,#0x1
7102bbc104  b.hi 0x7102bbc110
7102bbc108  ldur w8,[x19, #0x1]
7102bbc10c  b 0x7102bbc114
7102bbc110  mov w8,wzr
7102bbc114  ldr x10,[x23, #0x270]
7102bbc118  ldr x9,[x23, #0x268]
7102bbc11c  sub x10,x10,x9
7102bbc120  sxtw x8,w8
7102bbc124  asr x10,x10,#0x2
7102bbc128  add x21,x23,#0x268
7102bbc12c  cmp x10,x8
7102bbc130  b.cs 0x7102bbc144
7102bbc134  sub x1,x8,x10
7102bbc138  mov x0,x21
7102bbc13c  bl 0x71003ca470
7102bbc140  b 0x7102bbc150
7102bbc144  b.ls 0x7102bbc150
7102bbc148  add x8,x9,x8, LSL #0x2
7102bbc14c  str x8,[x23, #0x270]
7102bbc150  ldrb w12,[x19]
7102bbc154  sub w8,w12,#0xb
7102bbc158  cmp w8,#0x1
7102bbc15c  b.hi 0x7102bbc200
7102bbc160  ldur w8,[x19, #0x1]
7102bbc164  cmp w8,#0x1
7102bbc168  b.lt 0x7102bbc200
7102bbc16c  fmov s0,wzr
7102bbc170  mov w8,wzr
7102bbc174  mov x9,xzr
7102bbc178  add x10,x19,#0x5
7102bbc17c  adrp x11,0x7104742000
7102bbc180  add x11,x11,#0xdbb
7102bbc184  tbnz w9,#0x1f,0x7102bbc1b4
7102bbc188  and w12,w12,#0xff
7102bbc18c  cmp w12,#0xb
7102bbc190  mov x12,x11
7102bbc194  b.ne 0x7102bbc1b8
7102bbc198  ldur w12,[x19, #0x1]
7102bbc19c  cmp w12,w9
7102bbc1a0  mov x12,x11
7102bbc1a4  b.le 0x7102bbc1b8
7102bbc1a8  ldrsw x12,[x10, w8, SXTW #0x0]
7102bbc1ac  add x12,x19,x12
7102bbc1b0  b 0x7102bbc1b8
7102bbc1b4  mov x12,x11
7102bbc1b8  ldrb w13,[x12]
7102bbc1bc  mov v1.16B,v0.16B
7102bbc1c0  cmp w13,#0x8
7102bbc1c4  b.ne 0x7102bbc1cc
7102bbc1c8  ldur s1,[x12, #0x1]
7102bbc1cc  ldr x12,[x21]
7102bbc1d0  str s1,[x12,x9, lsl #2]
7102bbc1d4  ldrb w12,[x19]
7102bbc1d8  sub w13,w12,#0xb
7102bbc1dc  add x9,x9,#0x1
7102bbc1e0  cmp w13,#0x1
7102bbc1e4  b.hi 0x7102bbc1f0
7102bbc1e8  ldur w13,[x19, #0x1]
7102bbc1ec  b 0x7102bbc1f4
7102bbc1f0  mov w13,wzr
7102bbc1f4  add w8,w8,#0x4
7102bbc1f8  cmp x9,w13, SXTW 
7102bbc1fc  b.lt 0x7102bbc184
7102bbc200  ldr x8,[sp, #0x30]
7102bbc204  ldr x8,[x8]
7102bbc208  ldrb w9,[x8]
7102bbc20c  cmp w9,#0xc
7102bbc210  b.ne 0x7102bbc29c
7102bbc214  ldur w9,[x8, #0x1]
7102bbc218  subs w9,w9,#0x1
7102bbc21c  b.lt 0x7102bbc29c
7102bbc220  ldr x11,[sp, #0x18]
7102bbc224  ldr x13,[x11]
7102bbc228  ldursw x12,[x8, #0x5]
7102bbc22c  ldp x11,x13,[x13, #0x20]
7102bbc230  add x12,x13,x12
7102bbc234  mov x13,#0x6ff6
7102bbc238  movk x13,#0x164b, LSL #16
7102bbc23c  mov w10,wzr
7102bbc240  adrp x19,0x7104742000
7102bbc244  add x19,x19,#0xdbb
7102bbc248  movk x13,#0x12, LSL #32
7102bbc24c  add w14,w9,w10
7102bbc250  cmp w14,#0x0
7102bbc254  cinc w14,w14,lt
7102bbc258  asr w14,w14,#0x1
7102bbc25c  add x15,x12,w14, SXTW  #0x3
7102bbc260  ldr w16,[x15]
7102bbc264  ldr x16,[x11, x16, LSL #0x3]
7102bbc268  cmp x16,x13
7102bbc26c  b.eq 0x7102bbc28c
7102bbc270  sub w15,w14,#0x1
7102bbc274  cmp x16,x13
7102bbc278  csel w9,w15,w9,hi
7102bbc27c  csinc w10,w10,w14,hi
7102bbc280  cmp w10,w9
7102bbc284  b.le 0x7102bbc24c
7102bbc288  b 0x7102bbc2a4
7102bbc28c  ldrsw x9,[x15, #0x4]
7102bbc290  tbnz w9,#0x1f,0x7102bbc29c
7102bbc294  add x19,x8,x9
7102bbc298  b 0x7102bbc2a4
7102bbc29c  adrp x19,0x7104742000
7102bbc2a0  add x19,x19,#0xdbb
7102bbc2a4  ldrb w8,[x19]
7102bbc2a8  sub w8,w8,#0xb
7102bbc2ac  cmp w8,#0x1
7102bbc2b0  b.hi 0x7102bbc2bc
7102bbc2b4  ldur w8,[x19, #0x1]
7102bbc2b8  b 0x7102bbc2c0
7102bbc2bc  mov w8,wzr
7102bbc2c0  ldr x10,[x23, #0x288]
7102bbc2c4  ldr x9,[x23, #0x280]
7102bbc2c8  sub x10,x10,x9
7102bbc2cc  sxtw x8,w8
7102bbc2d0  asr x10,x10,#0x2
7102bbc2d4  add x21,x23,#0x280
7102bbc2d8  cmp x10,x8
7102bbc2dc  b.cs 0x7102bbc2f0
7102bbc2e0  sub x1,x8,x10
7102bbc2e4  mov x0,x21
7102bbc2e8  bl 0x71003ca470
7102bbc2ec  b 0x7102bbc2fc
7102bbc2f0  b.ls 0x7102bbc2fc
7102bbc2f4  add x8,x9,x8, LSL #0x2
7102bbc2f8  str x8,[x23, #0x288]
7102bbc2fc  ldrb w12,[x19]
7102bbc300  sub w8,w12,#0xb
7102bbc304  cmp w8,#0x1
7102bbc308  b.hi 0x7102bbc3ac
7102bbc30c  ldur w8,[x19, #0x1]
7102bbc310  cmp w8,#0x1
7102bbc314  b.lt 0x7102bbc3ac
7102bbc318  fmov s0,wzr
7102bbc31c  mov w8,wzr
7102bbc320  mov x9,xzr
7102bbc324  add x10,x19,#0x5
7102bbc328  adrp x11,0x7104742000
7102bbc32c  add x11,x11,#0xdbb
7102bbc330  tbnz w9,#0x1f,0x7102bbc360
7102bbc334  and w12,w12,#0xff
7102bbc338  cmp w12,#0xb
7102bbc33c  mov x12,x11
7102bbc340  b.ne 0x7102bbc364
7102bbc344  ldur w12,[x19, #0x1]
7102bbc348  cmp w12,w9
7102bbc34c  mov x12,x11
7102bbc350  b.le 0x7102bbc364
7102bbc354  ldrsw x12,[x10, w8, SXTW #0x0]
7102bbc358  add x12,x19,x12
7102bbc35c  b 0x7102bbc364
7102bbc360  mov x12,x11
7102bbc364  ldrb w13,[x12]
7102bbc368  mov v1.16B,v0.16B
7102bbc36c  cmp w13,#0x8
7102bbc370  b.ne 0x7102bbc378
7102bbc374  ldur s1,[x12, #0x1]
7102bbc378  ldr x12,[x21]
7102bbc37c  str s1,[x12,x9, lsl #2]
7102bbc380  ldrb w12,[x19]
7102bbc384  sub w13,w12,#0xb
7102bbc388  add x9,x9,#0x1
7102bbc38c  cmp w13,#0x1
7102bbc390  b.hi 0x7102bbc39c
7102bbc394  ldur w13,[x19, #0x1]
7102bbc398  b 0x7102bbc3a0
7102bbc39c  mov w13,wzr
7102bbc3a0  add w8,w8,#0x4
7102bbc3a4  cmp x9,w13, SXTW 
7102bbc3a8  b.lt 0x7102bbc330
7102bbc3ac  ldr x8,[sp, #0x30]
7102bbc3b0  ldr x8,[x8]
7102bbc3b4  ldrb w9,[x8]
7102bbc3b8  cmp w9,#0xc
7102bbc3bc  b.ne 0x7102bbc44c
7102bbc3c0  ldur w9,[x8, #0x1]
7102bbc3c4  subs w9,w9,#0x1
7102bbc3c8  b.lt 0x7102bbc44c
7102bbc3cc  ldr x11,[sp, #0x18]
7102bbc3d0  ldr x19,[x11]
7102bbc3d4  ldursw x12,[x8, #0x5]
7102bbc3d8  ldp x11,x13,[x19, #0x20]
7102bbc3dc  add x12,x13,x12
7102bbc3e0  mov x13,#0x15aa
7102bbc3e4  movk x13,#0xac25, LSL #16
7102bbc3e8  mov w10,wzr
7102bbc3ec  adrp x20,0x7104742000
7102bbc3f0  add x20,x20,#0xdbb
7102bbc3f4  movk x13,#0x14, LSL #32
7102bbc3f8  add w14,w9,w10
7102bbc3fc  cmp w14,#0x0
7102bbc400  cinc w14,w14,lt
7102bbc404  asr w14,w14,#0x1
7102bbc408  add x15,x12,w14, SXTW  #0x3
7102bbc40c  ldr w16,[x15]
7102bbc410  ldr x16,[x11, x16, LSL #0x3]
7102bbc414  cmp x16,x13
7102bbc418  b.eq 0x7102bbc43c
7102bbc41c  sub w15,w14,#0x1
7102bbc420  cmp x16,x13
7102bbc424  csel w9,w15,w9,hi
7102bbc428  csinc w10,w10,w14,hi
7102bbc42c  cmp w10,w9
7102bbc430  b.le 0x7102bbc3f8
7102bbc434  mov x19,xzr
7102bbc438  b 0x7102bbc458
7102bbc43c  ldrsw x9,[x15, #0x4]
7102bbc440  tbnz w9,#0x1f,0x7102bbc44c
7102bbc444  add x20,x8,x9
7102bbc448  b 0x7102bbc458
7102bbc44c  mov x19,xzr
7102bbc450  adrp x20,0x7104742000
7102bbc454  add x20,x20,#0xdbb
7102bbc458  ldrb w8,[x20]
7102bbc45c  sub w8,w8,#0xb
7102bbc460  cmp w8,#0x1
7102bbc464  b.hi 0x7102bbc470
7102bbc468  ldur w8,[x20, #0x1]
7102bbc46c  b 0x7102bbc474
7102bbc470  mov w8,wzr
7102bbc474  ldr x10,[x23, #0x2a0]
7102bbc478  ldr x9,[x23, #0x298]
7102bbc47c  sub x10,x10,x9
7102bbc480  asr x10,x10,#0x2
7102bbc484  mul x10,x10,x24
7102bbc488  sxtw x8,w8
7102bbc48c  add x21,x23,#0x298
7102bbc490  cmp x10,x8
7102bbc494  b.cs 0x7102bbc4a8
7102bbc498  sub x1,x8,x10
7102bbc49c  mov x0,x21
7102bbc4a0  bl 0x7102bbe2b0
7102bbc4a4  b 0x7102bbc4b8
7102bbc4a8  b.ls 0x7102bbc4b8
7102bbc4ac  orr w10,wzr,#0xc
7102bbc4b0  madd x8,x8,x10,x9
7102bbc4b4  str x8,[x23, #0x2a0]
7102bbc4b8  ldrb w15,[x20]
7102bbc4bc  sub w8,w15,#0xb
7102bbc4c0  cmp w8,#0x1
7102bbc4c4  b.hi 0x7102bbc79c
7102bbc4c8  ldur w8,[x20, #0x1]
7102bbc4cc  cmp w8,#0x1
7102bbc4d0  b.lt 0x7102bbc79c
7102bbc4d4  adrp x13,0x7104472000
7102bbc4d8  ldr s0,[x13, #0x85c]
7102bbc4dc  fmov s1,0x41f00000
7102bbc4e0  mov x9,#0x58ef
7102bbc4e4  movk x9,#0x4d62, LSL #16
7102bbc4e8  mov x10,#0x6f83
7102bbc4ec  movk x10,#0xd8d5, LSL #16
7102bbc4f0  mov x8,xzr
7102bbc4f4  movk x9,#0xc, LSL #32
7102bbc4f8  movk x10,#0x6, LSL #32
7102bbc4fc  add x11,x20,#0x5
7102bbc500  adrp x12,0x7104742000
7102bbc504  add x12,x12,#0xdbb
7102bbc508  orr w13,wzr,#0xc
7102bbc50c  adrp x14,0x7104518000
7102bbc510  add x14,x14,#0x394
7102bbc514  mov x16,xzr
7102bbc518  tbnz w8,#0x1f,0x7102bbc54c
7102bbc51c  and w15,w15,#0xff
7102bbc520  cmp w15,#0xb
7102bbc524  mov x15,x12
7102bbc528  b.ne 0x7102bbc550
7102bbc52c  ldur w15,[x20, #0x1]
7102bbc530  cmp w15,w8
7102bbc534  b.le 0x7102bbc548
7102bbc538  ldrsw x15,[x11, w8, SXTW #0x2]
7102bbc53c  add x15,x20,x15
7102bbc540  mov x16,x19
7102bbc544  b 0x7102bbc550
7102bbc548  mov x16,xzr
7102bbc54c  mov x15,x12
7102bbc550  ldrb w17,[x15]
7102bbc554  cmp w17,#0xc
7102bbc558  mov x17,x12
7102bbc55c  b.ne 0x7102bbc5d0
7102bbc560  ldur w17,[x15, #0x1]
7102bbc564  subs w17,w17,#0x1
7102bbc568  b.lt 0x7102bbc5cc
7102bbc56c  ldursw x1,[x15, #0x5]
7102bbc570  ldp x0,x2,[x16, #0x20]
7102bbc574  mov w18,wzr
7102bbc578  add x1,x2,x1
7102bbc57c  add w2,w17,w18
7102bbc580  cmp w2,#0x0
7102bbc584  cinc w2,w2,lt
7102bbc588  asr w2,w2,#0x1
7102bbc58c  add x3,x1,w2, SXTW  #0x3
7102bbc590  ldr w4,[x3]
7102bbc594  ldr x4,[x0, x4, LSL #0x3]
7102bbc598  cmp x4,x25
7102bbc59c  b.eq 0x7102bbc5bc
7102bbc5a0  sub w3,w2,#0x1
7102bbc5a4  cmp x4,x25
7102bbc5a8  csel w17,w3,w17,hi
7102bbc5ac  csinc w18,w18,w2,hi
7102bbc5b0  cmp w18,w17
7102bbc5b4  b.le 0x7102bbc57c
7102bbc5b8  b 0x7102bbc5cc
7102bbc5bc  ldrsw x17,[x3, #0x4]
7102bbc5c0  tbnz w17,#0x1f,0x7102bbc5cc
7102bbc5c4  add x17,x15,x17
7102bbc5c8  b 0x7102bbc5d0
7102bbc5cc  mov x17,x12
7102bbc5d0  ldrb w18,[x17]
7102bbc5d4  mov v2.16B,v0.16B
7102bbc5d8  cmp w18,#0x8
7102bbc5dc  b.ne 0x7102bbc5e4
7102bbc5e0  ldur s2,[x17, #0x1]
7102bbc5e4  mul x18,x8,x13
7102bbc5e8  ldr x17,[x21]
7102bbc5ec  str s2,[x17,x18]
7102bbc5f0  ldrb w17,[x15]
7102bbc5f4  cmp w17,#0xc
7102bbc5f8  mov x17,x12
7102bbc5fc  b.ne 0x7102bbc670
7102bbc600  ldur w17,[x15, #0x1]
7102bbc604  subs w17,w17,#0x1
7102bbc608  b.lt 0x7102bbc66c
7102bbc60c  ldursw x1,[x15, #0x5]
7102bbc610  ldp x0,x2,[x16, #0x20]
7102bbc614  mov w18,wzr
7102bbc618  add x1,x2,x1
7102bbc61c  add w2,w17,w18
7102bbc620  cmp w2,#0x0
7102bbc624  cinc w2,w2,lt
7102bbc628  asr w2,w2,#0x1
7102bbc62c  add x3,x1,w2, SXTW  #0x3
7102bbc630  ldr w4,[x3]
7102bbc634  ldr x4,[x0, x4, LSL #0x3]
7102bbc638  cmp x4,x9
7102bbc63c  b.eq 0x7102bbc65c
7102bbc640  sub w3,w2,#0x1
7102bbc644  cmp x4,x9
7102bbc648  csel w17,w3,w17,hi
7102bbc64c  csinc w18,w18,w2,hi
7102bbc650  cmp w18,w17
7102bbc654  b.le 0x7102bbc61c
7102bbc658  b 0x7102bbc66c
7102bbc65c  ldrsw x17,[x3, #0x4]
7102bbc660  tbnz w17,#0x1f,0x7102bbc66c
7102bbc664  add x17,x15,x17
7102bbc668  b 0x7102bbc670
7102bbc66c  mov x17,x12
7102bbc670  ldrb w18,[x17]
7102bbc674  mov v2.16B,v1.16B
7102bbc678  cmp w18,#0x8
7102bbc67c  b.ne 0x7102bbc684
7102bbc680  ldur s2,[x17, #0x1]
7102bbc684  ldr x17,[x21]
7102bbc688  madd x17,x8,x13,x17
7102bbc68c  str s2,[x17, #0x4]
7102bbc690  ldrb w17,[x15]
7102bbc694  cmp w17,#0xc
7102bbc698  mov x17,x12
7102bbc69c  b.ne 0x7102bbc710
7102bbc6a0  ldur w17,[x15, #0x1]
7102bbc6a4  subs w17,w17,#0x1
7102bbc6a8  b.lt 0x7102bbc70c
7102bbc6ac  ldursw x1,[x15, #0x5]
7102bbc6b0  ldp x0,x16,[x16, #0x20]
7102bbc6b4  mov w18,wzr
7102bbc6b8  add x16,x16,x1
7102bbc6bc  add w1,w17,w18
7102bbc6c0  cmp w1,#0x0
7102bbc6c4  cinc w1,w1,lt
7102bbc6c8  asr w1,w1,#0x1
7102bbc6cc  add x2,x16,w1, SXTW  #0x3
7102bbc6d0  ldr w3,[x2]
7102bbc6d4  ldr x3,[x0, x3, LSL #0x3]
7102bbc6d8  cmp x3,x10
7102bbc6dc  b.eq 0x7102bbc6fc
7102bbc6e0  sub w2,w1,#0x1
7102bbc6e4  cmp x3,x10
7102bbc6e8  csel w17,w2,w17,hi
7102bbc6ec  csinc w18,w18,w1,hi
7102bbc6f0  cmp w18,w17
7102bbc6f4  b.le 0x7102bbc6bc
7102bbc6f8  b 0x7102bbc70c
7102bbc6fc  ldrsw x16,[x2, #0x4]
7102bbc700  tbnz w16,#0x1f,0x7102bbc70c
7102bbc704  add x17,x15,x16
7102bbc708  b 0x7102bbc710
7102bbc70c  mov x17,x12
7102bbc710  ldrb w15,[x17]
7102bbc714  sub w15,w15,#0x1
7102bbc718  cmp w15,#0x6
7102bbc71c  b.hi 0x7102bbc744
7102bbc720  ldrsw x15,[x14, x15, LSL #0x2]
7102bbc724  add x15,x15,x14
7102bbc728  br x15
7102bbc72c  ldrb w15,[x17, #0x1]
7102bbc730  b 0x7102bbc758
7102bbc734  ldur w15,[x17, #0x1]
7102bbc738  b 0x7102bbc758
7102bbc73c  ldursh w15,[x17, #0x1]
7102bbc740  b 0x7102bbc758
7102bbc744  mov w15,#0x1
7102bbc748  b 0x7102bbc758
7102bbc74c  ldrsb w15,[x17, #0x1]
7102bbc750  b 0x7102bbc758
7102bbc754  ldurh w15,[x17, #0x1]
7102bbc758  ldr x16,[x21]
7102bbc75c  madd x16,x8,x13,x16
7102bbc760  cmp w15,#0x0
7102bbc764  cset w15,ne
7102bbc768  strb w15,[x16, #0x8]
7102bbc76c  ldrb w15,[x20]
7102bbc770  sub w16,w15,#0xb
7102bbc774  add x8,x8,#0x1
7102bbc778  cmp w16,#0x1
7102bbc77c  b.hi 0x7102bbc790
7102bbc780  ldur w16,[x20, #0x1]
7102bbc784  cmp x8,w16, SXTW 
7102bbc788  b.lt 0x7102bbc514
7102bbc78c  b 0x7102bbc79c
7102bbc790  mov w16,wzr
7102bbc794  cmp x8,w16, SXTW 
7102bbc798  b.lt 0x7102bbc514
7102bbc79c  ldr x8,[sp, #0x30]
7102bbc7a0  ldr x8,[x8]
7102bbc7a4  ldrb w9,[x8]
7102bbc7a8  cmp w9,#0xc
7102bbc7ac  b.ne 0x7102bbc83c
7102bbc7b0  ldur w9,[x8, #0x1]
7102bbc7b4  subs w9,w9,#0x1
7102bbc7b8  b.lt 0x7102bbc83c
7102bbc7bc  ldr x11,[sp, #0x18]
7102bbc7c0  ldr x19,[x11]
7102bbc7c4  ldursw x12,[x8, #0x5]
7102bbc7c8  ldp x11,x13,[x19, #0x20]
7102bbc7cc  add x12,x13,x12
7102bbc7d0  mov x13,#0xe00e
7102bbc7d4  movk x13,#0xe708, LSL #16
7102bbc7d8  mov w10,wzr
7102bbc7dc  adrp x20,0x7104742000
7102bbc7e0  add x20,x20,#0xdbb
7102bbc7e4  movk x13,#0x16, LSL #32
7102bbc7e8  add w14,w9,w10
7102bbc7ec  cmp w14,#0x0
7102bbc7f0  cinc w14,w14,lt
7102bbc7f4  asr w14,w14,#0x1
7102bbc7f8  add x15,x12,w14, SXTW  #0x3
7102bbc7fc  ldr w16,[x15]
7102bbc800  ldr x16,[x11, x16, LSL #0x3]
7102bbc804  cmp x16,x13
7102bbc808  b.eq 0x7102bbc82c
7102bbc80c  sub w15,w14,#0x1
7102bbc810  cmp x16,x13
7102bbc814  csel w9,w15,w9,hi
7102bbc818  csinc w10,w10,w14,hi
7102bbc81c  cmp w10,w9
7102bbc820  b.le 0x7102bbc7e8
7102bbc824  mov x19,xzr
7102bbc828  b 0x7102bbc848
7102bbc82c  ldrsw x9,[x15, #0x4]
7102bbc830  tbnz w9,#0x1f,0x7102bbc83c
7102bbc834  add x20,x8,x9
7102bbc838  b 0x7102bbc848
7102bbc83c  mov x19,xzr
7102bbc840  adrp x20,0x7104742000
7102bbc844  add x20,x20,#0xdbb
7102bbc848  ldrb w8,[x20]
7102bbc84c  sub w8,w8,#0xb
7102bbc850  cmp w8,#0x1
7102bbc854  b.hi 0x7102bbc860
7102bbc858  ldur w8,[x20, #0x1]
7102bbc85c  b 0x7102bbc864
7102bbc860  mov w8,wzr
7102bbc864  ldr x10,[x23, #0x2b8]
7102bbc868  ldr x9,[x23, #0x2b0]
7102bbc86c  sub x10,x10,x9
7102bbc870  asr x10,x10,#0x2
7102bbc874  mul x10,x10,x24
7102bbc878  sxtw x8,w8
7102bbc87c  add x21,x23,#0x2b0
7102bbc880  cmp x10,x8
7102bbc884  b.cs 0x7102bbc8a4
7102bbc888  sub x1,x8,x10
7102bbc88c  mov x0,x21
7102bbc890  bl 0x7102bbe2b0
7102bbc894  mov x5,#0x4096
7102bbc898  movk x5,#0xf6dc, LSL #16
7102bbc89c  movk x5,#0xb, LSL #32
7102bbc8a0  b 0x7102bbc8c0
7102bbc8a4  mov x5,#0x4096
7102bbc8a8  movk x5,#0xf6dc, LSL #16
7102bbc8ac  movk x5,#0xb, LSL #32
7102bbc8b0  b.ls 0x7102bbc8c0
7102bbc8b4  orr w10,wzr,#0xc
7102bbc8b8  madd x8,x8,x10,x9
7102bbc8bc  str x8,[x23, #0x2b8]
7102bbc8c0  ldrb w15,[x20]
7102bbc8c4  sub w8,w15,#0xb
7102bbc8c8  cmp w8,#0x1
7102bbc8cc  b.hi 0x7102bbcba8
7102bbc8d0  ldur w8,[x20, #0x1]
7102bbc8d4  cmp w8,#0x1
7102bbc8d8  b.lt 0x7102bbcba8
7102bbc8dc  adrp x13,0x7104472000
7102bbc8e0  adrp x14,0x7104473000
7102bbc8e4  ldr s0,[x13, #0xdc]
7102bbc8e8  ldr s1,[x14, #0x5fc]
7102bbc8ec  mov x9,#0x58ef
7102bbc8f0  movk x9,#0x4d62, LSL #16
7102bbc8f4  mov x10,#0x6f83
7102bbc8f8  movk x10,#0xd8d5, LSL #16
7102bbc8fc  mov x8,xzr
7102bbc900  movk x9,#0xc, LSL #32
7102bbc904  movk x10,#0x6, LSL #32
7102bbc908  add x11,x20,#0x5
7102bbc90c  adrp x12,0x7104742000
7102bbc910  add x12,x12,#0xdbb
7102bbc914  orr w13,wzr,#0xc
7102bbc918  adrp x14,0x7104518000
7102bbc91c  add x14,x14,#0x3b0
7102bbc920  mov x16,xzr
7102bbc924  tbnz w8,#0x1f,0x7102bbc958
7102bbc928  and w15,w15,#0xff
7102bbc92c  cmp w15,#0xb
7102bbc930  mov x15,x12
7102bbc934  b.ne 0x7102bbc95c
7102bbc938  ldur w15,[x20, #0x1]
7102bbc93c  cmp w15,w8
7102bbc940  b.le 0x7102bbc954
7102bbc944  ldrsw x15,[x11, w8, SXTW #0x2]
7102bbc948  add x15,x20,x15
7102bbc94c  mov x16,x19
7102bbc950  b 0x7102bbc95c
7102bbc954  mov x16,xzr
7102bbc958  mov x15,x12
7102bbc95c  ldrb w17,[x15]
7102bbc960  cmp w17,#0xc
7102bbc964  mov x17,x12
7102bbc968  b.ne 0x7102bbc9dc
7102bbc96c  ldur w17,[x15, #0x1]
7102bbc970  subs w17,w17,#0x1
7102bbc974  b.lt 0x7102bbc9d8
7102bbc978  ldursw x1,[x15, #0x5]
7102bbc97c  ldp x0,x2,[x16, #0x20]
7102bbc980  mov w18,wzr
7102bbc984  add x1,x2,x1
7102bbc988  add w2,w17,w18
7102bbc98c  cmp w2,#0x0
7102bbc990  cinc w2,w2,lt
7102bbc994  asr w2,w2,#0x1
7102bbc998  add x3,x1,w2, SXTW  #0x3
7102bbc99c  ldr w4,[x3]
7102bbc9a0  ldr x4,[x0, x4, LSL #0x3]
7102bbc9a4  cmp x4,x25
7102bbc9a8  b.eq 0x7102bbc9c8
7102bbc9ac  sub w3,w2,#0x1
7102bbc9b0  cmp x4,x25
7102bbc9b4  csel w17,w3,w17,hi
7102bbc9b8  csinc w18,w18,w2,hi
7102bbc9bc  cmp w18,w17
7102bbc9c0  b.le 0x7102bbc988
7102bbc9c4  b 0x7102bbc9d8
7102bbc9c8  ldrsw x17,[x3, #0x4]
7102bbc9cc  tbnz w17,#0x1f,0x7102bbc9d8
7102bbc9d0  add x17,x15,x17
7102bbc9d4  b 0x7102bbc9dc
7102bbc9d8  mov x17,x12
7102bbc9dc  ldrb w18,[x17]
7102bbc9e0  mov v2.16B,v0.16B
7102bbc9e4  cmp w18,#0x8
7102bbc9e8  b.ne 0x7102bbc9f0
7102bbc9ec  ldur s2,[x17, #0x1]
7102bbc9f0  mul x18,x8,x13
7102bbc9f4  ldr x17,[x21]
7102bbc9f8  str s2,[x17,x18]
7102bbc9fc  ldrb w17,[x15]
7102bbca00  cmp w17,#0xc
7102bbca04  mov x17,x12
7102bbca08  b.ne 0x7102bbca7c
7102bbca0c  ldur w17,[x15, #0x1]
7102bbca10  subs w17,w17,#0x1
7102bbca14  b.lt 0x7102bbca78
7102bbca18  ldursw x1,[x15, #0x5]
7102bbca1c  ldp x0,x2,[x16, #0x20]
7102bbca20  mov w18,wzr
7102bbca24  add x1,x2,x1
7102bbca28  add w2,w17,w18
7102bbca2c  cmp w2,#0x0
7102bbca30  cinc w2,w2,lt
7102bbca34  asr w2,w2,#0x1
7102bbca38  add x3,x1,w2, SXTW  #0x3
7102bbca3c  ldr w4,[x3]
7102bbca40  ldr x4,[x0, x4, LSL #0x3]
7102bbca44  cmp x4,x9
7102bbca48  b.eq 0x7102bbca68
7102bbca4c  sub w3,w2,#0x1
7102bbca50  cmp x4,x9
7102bbca54  csel w17,w3,w17,hi
7102bbca58  csinc w18,w18,w2,hi
7102bbca5c  cmp w18,w17
7102bbca60  b.le 0x7102bbca28
7102bbca64  b 0x7102bbca78
7102bbca68  ldrsw x17,[x3, #0x4]
7102bbca6c  tbnz w17,#0x1f,0x7102bbca78
7102bbca70  add x17,x15,x17
7102bbca74  b 0x7102bbca7c
7102bbca78  mov x17,x12
7102bbca7c  ldrb w18,[x17]
7102bbca80  mov v2.16B,v1.16B
7102bbca84  cmp w18,#0x8
7102bbca88  b.ne 0x7102bbca90
7102bbca8c  ldur s2,[x17, #0x1]
7102bbca90  ldr x17,[x21]
7102bbca94  madd x17,x8,x13,x17
7102bbca98  str s2,[x17, #0x4]
7102bbca9c  ldrb w17,[x15]
7102bbcaa0  cmp w17,#0xc
7102bbcaa4  mov x17,x12
7102bbcaa8  b.ne 0x7102bbcb1c
7102bbcaac  ldur w17,[x15, #0x1]
7102bbcab0  subs w17,w17,#0x1
7102bbcab4  b.lt 0x7102bbcb18
7102bbcab8  ldursw x1,[x15, #0x5]
7102bbcabc  ldp x0,x16,[x16, #0x20]
7102bbcac0  mov w18,wzr
7102bbcac4  add x16,x16,x1
7102bbcac8  add w1,w17,w18
7102bbcacc  cmp w1,#0x0
7102bbcad0  cinc w1,w1,lt
7102bbcad4  asr w1,w1,#0x1
7102bbcad8  add x2,x16,w1, SXTW  #0x3
7102bbcadc  ldr w3,[x2]
7102bbcae0  ldr x3,[x0, x3, LSL #0x3]
7102bbcae4  cmp x3,x10
7102bbcae8  b.eq 0x7102bbcb08
7102bbcaec  sub w2,w1,#0x1
7102bbcaf0  cmp x3,x10
7102bbcaf4  csel w17,w2,w17,hi
7102bbcaf8  csinc w18,w18,w1,hi
7102bbcafc  cmp w18,w17
7102bbcb00  b.le 0x7102bbcac8
7102bbcb04  b 0x7102bbcb18
7102bbcb08  ldrsw x16,[x2, #0x4]
7102bbcb0c  tbnz w16,#0x1f,0x7102bbcb18
7102bbcb10  add x17,x15,x16
7102bbcb14  b 0x7102bbcb1c
7102bbcb18  mov x17,x12
7102bbcb1c  ldrb w15,[x17]
7102bbcb20  sub w15,w15,#0x1
7102bbcb24  cmp w15,#0x6
7102bbcb28  b.hi 0x7102bbcb50
7102bbcb2c  ldrsw x15,[x14, x15, LSL #0x2]
7102bbcb30  add x15,x15,x14
7102bbcb34  br x15
7102bbcb38  ldrb w15,[x17, #0x1]
7102bbcb3c  b 0x7102bbcb64
7102bbcb40  ldur w15,[x17, #0x1]
7102bbcb44  b 0x7102bbcb64
7102bbcb48  ldursh w15,[x17, #0x1]
7102bbcb4c  b 0x7102bbcb64
7102bbcb50  mov w15,#0x1
7102bbcb54  b 0x7102bbcb64
7102bbcb58  ldrsb w15,[x17, #0x1]
7102bbcb5c  b 0x7102bbcb64
7102bbcb60  ldurh w15,[x17, #0x1]
7102bbcb64  ldr x16,[x21]
7102bbcb68  madd x16,x8,x13,x16
7102bbcb6c  cmp w15,#0x0
7102bbcb70  cset w15,ne
7102bbcb74  strb w15,[x16, #0x8]
7102bbcb78  ldrb w15,[x20]
7102bbcb7c  sub w16,w15,#0xb
7102bbcb80  add x8,x8,#0x1
7102bbcb84  cmp w16,#0x1
7102bbcb88  b.hi 0x7102bbcb9c
7102bbcb8c  ldur w16,[x20, #0x1]
7102bbcb90  cmp x8,w16, SXTW 
7102bbcb94  b.lt 0x7102bbc920
7102bbcb98  b 0x7102bbcba8
7102bbcb9c  mov w16,wzr
7102bbcba0  cmp x8,w16, SXTW 
7102bbcba4  b.lt 0x7102bbc920
7102bbcba8  ldr x8,[sp, #0x30]
7102bbcbac  ldr x8,[x8]
7102bbcbb0  ldrb w9,[x8]
7102bbcbb4  cmp w9,#0xc
7102bbcbb8  b.ne 0x7102bbcc44
7102bbcbbc  ldur w9,[x8, #0x1]
7102bbcbc0  subs w10,w9,#0x1
7102bbcbc4  b.lt 0x7102bbcc44
7102bbcbc8  ldr x12,[sp, #0x18]
7102bbcbcc  ldr x13,[x12]
7102bbcbd0  ldursw x9,[x8, #0x5]
7102bbcbd4  ldp x12,x13,[x13, #0x20]
7102bbcbd8  mov x14,#0x3af6
7102bbcbdc  movk x14,#0x3479, LSL #16
7102bbcbe0  mov w11,wzr
7102bbcbe4  add x13,x13,x9
7102bbcbe8  movk x14,#0x17, LSL #32
7102bbcbec  adrp x9,0x7104742000
7102bbcbf0  add x9,x9,#0xdbb
7102bbcbf4  add w15,w10,w11
7102bbcbf8  cmp w15,#0x0
7102bbcbfc  cinc w15,w15,lt
7102bbcc00  asr w15,w15,#0x1
7102bbcc04  add x16,x13,w15, SXTW  #0x3
7102bbcc08  ldr w17,[x16]
7102bbcc0c  ldr x17,[x12, x17, LSL #0x3]
7102bbcc10  cmp x17,x14
7102bbcc14  b.eq 0x7102bbcc34
7102bbcc18  sub w16,w15,#0x1
7102bbcc1c  cmp x17,x14
7102bbcc20  csel w10,w16,w10,hi
7102bbcc24  csinc w11,w11,w15,hi
7102bbcc28  cmp w11,w10
7102bbcc2c  b.le 0x7102bbcbf4
7102bbcc30  b 0x7102bbcc4c
7102bbcc34  ldrsw x9,[x16, #0x4]
7102bbcc38  tbnz w9,#0x1f,0x7102bbcc44
7102bbcc3c  add x9,x8,x9
7102bbcc40  b 0x7102bbcc4c
7102bbcc44  adrp x9,0x7104742000
7102bbcc48  add x9,x9,#0xdbb
7102bbcc4c  ldrb w8,[x9]
7102bbcc50  cmp w8,#0x8
7102bbcc54  b.ne 0x7102bbcc60
7102bbcc58  ldur s0,[x9, #0x1]
7102bbcc5c  b 0x7102bbcc68
7102bbcc60  adrp x8,0x7104473000
7102bbcc64  ldr s0,[x8, #0xb94]
7102bbcc68  ldr x8,[sp, #0x30]
7102bbcc6c  str s0,[x23, #0x2c8]
7102bbcc70  ldr x8,[x8]
7102bbcc74  ldrb w9,[x8]
7102bbcc78  cmp w9,#0xc
7102bbcc7c  b.ne 0x7102bbcd08
7102bbcc80  ldur w9,[x8, #0x1]
7102bbcc84  subs w10,w9,#0x1
7102bbcc88  b.lt 0x7102bbcd08
7102bbcc8c  ldr x12,[sp, #0x18]
7102bbcc90  ldr x13,[x12]
7102bbcc94  ldursw x9,[x8, #0x5]
7102bbcc98  ldp x12,x13,[x13, #0x20]
7102bbcc9c  mov x14,#0x4cec
7102bbcca0  movk x14,#0x38b3, LSL #16
7102bbcca4  mov w11,wzr
7102bbcca8  add x13,x13,x9
7102bbccac  movk x14,#0x16, LSL #32
7102bbccb0  adrp x9,0x7104742000
7102bbccb4  add x9,x9,#0xdbb
7102bbccb8  add w15,w10,w11
7102bbccbc  cmp w15,#0x0
7102bbccc0  cinc w15,w15,lt
7102bbccc4  asr w15,w15,#0x1
7102bbccc8  add x16,x13,w15, SXTW  #0x3
7102bbcccc  ldr w17,[x16]
7102bbccd0  ldr x17,[x12, x17, LSL #0x3]
7102bbccd4  cmp x17,x14
7102bbccd8  b.eq 0x7102bbccf8
7102bbccdc  sub w16,w15,#0x1
7102bbcce0  cmp x17,x14
7102bbcce4  csel w10,w16,w10,hi
7102bbcce8  csinc w11,w11,w15,hi
7102bbccec  cmp w11,w10
7102bbccf0  b.le 0x7102bbccb8
7102bbccf4  b 0x7102bbcd10
7102bbccf8  ldrsw x9,[x16, #0x4]
7102bbccfc  tbnz w9,#0x1f,0x7102bbcd08
7102bbcd00  add x9,x8,x9
7102bbcd04  b 0x7102bbcd10
7102bbcd08  adrp x9,0x7104742000
7102bbcd0c  add x9,x9,#0xdbb
7102bbcd10  ldrb w8,[x9]
7102bbcd14  cmp w8,#0x8
7102bbcd18  b.ne 0x7102bbcd24
7102bbcd1c  ldur s0,[x9, #0x1]
7102bbcd20  b 0x7102bbcd2c
7102bbcd24  adrp x8,0x7104472000
7102bbcd28  ldr s0,[x8, #0xbd8]
7102bbcd2c  ldr x8,[sp, #0x30]
7102bbcd30  str s0,[x23, #0x2cc]
7102bbcd34  ldr x9,[x8]
7102bbcd38  ldrb w8,[x9]
7102bbcd3c  cmp w8,#0xc
7102bbcd40  b.ne 0x7102bbcdd0
7102bbcd44  ldur w8,[x9, #0x1]
7102bbcd48  subs w10,w8,#0x1
7102bbcd4c  b.lt 0x7102bbcdd0
7102bbcd50  ldr x11,[sp, #0x18]
7102bbcd54  ldr x11,[x11]
7102bbcd58  ldursw x8,[x9, #0x5]
7102bbcd5c  ldp x13,x14,[x11, #0x20]
7102bbcd60  mov x15,#0x95dc
7102bbcd64  movk x15,#0x9722, LSL #16
7102bbcd68  mov w12,wzr
7102bbcd6c  add x14,x14,x8
7102bbcd70  movk x15,#0x15, LSL #32
7102bbcd74  adrp x8,0x7104742000
7102bbcd78  add x8,x8,#0xdbb
7102bbcd7c  add w16,w10,w12
7102bbcd80  cmp w16,#0x0
7102bbcd84  cinc w16,w16,lt
7102bbcd88  asr w16,w16,#0x1
7102bbcd8c  add x17,x14,w16, SXTW  #0x3
7102bbcd90  ldr w18,[x17]
7102bbcd94  ldr x18,[x13, x18, LSL #0x3]
7102bbcd98  cmp x18,x15
7102bbcd9c  b.eq 0x7102bbcdc0
7102bbcda0  sub w17,w16,#0x1
7102bbcda4  cmp x18,x15
7102bbcda8  csel w10,w17,w10,hi
7102bbcdac  csinc w12,w12,w16,hi
7102bbcdb0  cmp w12,w10
7102bbcdb4  b.le 0x7102bbcd7c
7102bbcdb8  mov x11,xzr
7102bbcdbc  b 0x7102bbcddc
7102bbcdc0  ldrsw x8,[x17, #0x4]
7102bbcdc4  tbnz w8,#0x1f,0x7102bbcdd0
7102bbcdc8  add x8,x9,x8
7102bbcdcc  b 0x7102bbcddc
7102bbcdd0  mov x11,xzr
7102bbcdd4  adrp x8,0x7104742000
7102bbcdd8  add x8,x8,#0xdbb
7102bbcddc  ldrb w9,[x8]
7102bbcde0  cmp w9,#0xc
7102bbcde4  b.ne 0x7102bbce68
7102bbcde8  ldur w9,[x8, #0x1]
7102bbcdec  subs w10,w9,#0x1
7102bbcdf0  b.lt 0x7102bbce68
7102bbcdf4  ldursw x9,[x8, #0x5]
7102bbcdf8  ldp x13,x14,[x11, #0x20]
7102bbcdfc  mov x15,#0x30cc
7102bbce00  movk x15,#0xe414, LSL #16
7102bbce04  mov w12,wzr
7102bbce08  add x14,x14,x9
7102bbce0c  movk x15,#0x8, LSL #32
7102bbce10  adrp x9,0x7104742000
7102bbce14  add x9,x9,#0xdbb
7102bbce18  add w16,w10,w12
7102bbce1c  cmp w16,#0x0
7102bbce20  cinc w16,w16,lt
7102bbce24  asr w16,w16,#0x1
7102bbce28  add x17,x14,w16, SXTW  #0x3
7102bbce2c  ldr w18,[x17]
7102bbce30  ldr x18,[x13, x18, LSL #0x3]
7102bbce34  cmp x18,x15
7102bbce38  b.eq 0x7102bbce58
7102bbce3c  sub w17,w16,#0x1
7102bbce40  cmp x18,x15
7102bbce44  csel w10,w17,w10,hi
7102bbce48  csinc w12,w12,w16,hi
7102bbce4c  cmp w12,w10
7102bbce50  b.le 0x7102bbce18
7102bbce54  b 0x7102bbce70
7102bbce58  ldrsw x9,[x17, #0x4]
7102bbce5c  tbnz w9,#0x1f,0x7102bbce68
7102bbce60  add x9,x8,x9
7102bbce64  b 0x7102bbce70
7102bbce68  adrp x9,0x7104742000
7102bbce6c  add x9,x9,#0xdbb
7102bbce70  ldrb w10,[x9]
7102bbce74  cmp w10,#0x8
7102bbce78  b.ne 0x7102bbce84
7102bbce7c  ldur s0,[x9, #0x1]
7102bbce80  b 0x7102bbce8c
7102bbce84  adrp x9,0x7104473000
7102bbce88  ldr s0,[x9, #0x794]
7102bbce8c  str s0,[x23, #0x2d0]
7102bbce90  ldrb w9,[x8]
7102bbce94  cmp w9,#0xc
7102bbce98  b.ne 0x7102bbcf1c
7102bbce9c  ldur w9,[x8, #0x1]
7102bbcea0  subs w10,w9,#0x1
7102bbcea4  b.lt 0x7102bbcf1c
7102bbcea8  ldursw x9,[x8, #0x5]
7102bbceac  ldp x13,x14,[x11, #0x20]
7102bbceb0  mov x15,#0x5a
7102bbceb4  movk x15,#0x9313, LSL #16
7102bbceb8  mov w12,wzr
7102bbcebc  add x14,x14,x9
7102bbcec0  movk x15,#0x8, LSL #32
7102bbcec4  adrp x9,0x7104742000
7102bbcec8  add x9,x9,#0xdbb
7102bbcecc  add w16,w10,w12
7102bbced0  cmp w16,#0x0
7102bbced4  cinc w16,w16,lt
7102bbced8  asr w16,w16,#0x1
7102bbcedc  add x17,x14,w16, SXTW  #0x3
7102bbcee0  ldr w18,[x17]
7102bbcee4  ldr x18,[x13, x18, LSL #0x3]
7102bbcee8  cmp x18,x15
7102bbceec  b.eq 0x7102bbcf0c
7102bbcef0  sub w17,w16,#0x1
7102bbcef4  cmp x18,x15
7102bbcef8  csel w10,w17,w10,hi
7102bbcefc  csinc w12,w12,w16,hi
7102bbcf00  cmp w12,w10
7102bbcf04  b.le 0x7102bbcecc
7102bbcf08  b 0x7102bbcf24
7102bbcf0c  ldrsw x9,[x17, #0x4]
7102bbcf10  tbnz w9,#0x1f,0x7102bbcf1c
7102bbcf14  add x9,x8,x9
7102bbcf18  b 0x7102bbcf24
7102bbcf1c  adrp x9,0x7104742000
7102bbcf20  add x9,x9,#0xdbb
7102bbcf24  ldrb w10,[x9]
7102bbcf28  cmp w10,#0x8
7102bbcf2c  b.ne 0x7102bbcf38
7102bbcf30  ldur s0,[x9, #0x1]
7102bbcf34  b 0x7102bbcf3c
7102bbcf38  fmov s0,wzr
7102bbcf3c  str s0,[x23, #0x2d4]
7102bbcf40  ldrb w9,[x8]
7102bbcf44  cmp w9,#0xc
7102bbcf48  b.ne 0x7102bbcfcc
7102bbcf4c  ldur w9,[x8, #0x1]
7102bbcf50  subs w9,w9,#0x1
7102bbcf54  b.lt 0x7102bbcfcc
7102bbcf58  ldursw x10,[x8, #0x5]
7102bbcf5c  ldp x13,x14,[x11, #0x20]
7102bbcf60  mov x15,#0x452f
7102bbcf64  movk x15,#0x8c1a, LSL #16
7102bbcf68  mov w12,wzr
7102bbcf6c  add x14,x14,x10
7102bbcf70  movk x15,#0x5, LSL #32
7102bbcf74  adrp x10,0x7104742000
7102bbcf78  add x10,x10,#0xdbb
7102bbcf7c  add w16,w9,w12
7102bbcf80  cmp w16,#0x0
7102bbcf84  cinc w16,w16,lt
7102bbcf88  asr w16,w16,#0x1
7102bbcf8c  add x17,x14,w16, SXTW  #0x3
7102bbcf90  ldr w18,[x17]
7102bbcf94  ldr x18,[x13, x18, LSL #0x3]
7102bbcf98  cmp x18,x15
7102bbcf9c  b.eq 0x7102bbcfbc
7102bbcfa0  sub w17,w16,#0x1
7102bbcfa4  cmp x18,x15
7102bbcfa8  csel w9,w17,w9,hi
7102bbcfac  csinc w12,w12,w16,hi
7102bbcfb0  cmp w12,w9
7102bbcfb4  b.le 0x7102bbcf7c
7102bbcfb8  b 0x7102bbcfd4
7102bbcfbc  ldrsw x9,[x17, #0x4]
7102bbcfc0  tbnz w9,#0x1f,0x7102bbcfcc
7102bbcfc4  add x10,x8,x9
7102bbcfc8  b 0x7102bbcfd4
7102bbcfcc  adrp x10,0x7104742000
7102bbcfd0  add x10,x10,#0xdbb
7102bbcfd4  ldrb w12,[x10]
7102bbcfd8  adrp x9,0x7104473000
7102bbcfdc  cmp w12,#0x8
7102bbcfe0  b.ne 0x7102bbcfec
7102bbcfe4  ldur s0,[x10, #0x1]
7102bbcfe8  b 0x7102bbcff0
7102bbcfec  ldr s0,[x9, #0xc8]
7102bbcff0  str s0,[x23, #0x2d8]
7102bbcff4  ldrb w10,[x8]
7102bbcff8  cmp w10,#0xc
7102bbcffc  b.ne 0x7102bbd080
7102bbd000  ldur w10,[x8, #0x1]
7102bbd004  subs w12,w10,#0x1
7102bbd008  b.lt 0x7102bbd080
7102bbd00c  ldursw x10,[x8, #0x5]
7102bbd010  ldp x14,x15,[x11, #0x20]
7102bbd014  mov x16,#0xe50f
7102bbd018  movk x16,#0xf54d, LSL #16
7102bbd01c  mov w13,wzr
7102bbd020  add x15,x15,x10
7102bbd024  movk x16,#0x6, LSL #32
7102bbd028  adrp x10,0x7104742000
7102bbd02c  add x10,x10,#0xdbb
7102bbd030  add w17,w12,w13
7102bbd034  cmp w17,#0x0
7102bbd038  cinc w17,w17,lt
7102bbd03c  asr w17,w17,#0x1
7102bbd040  add x18,x15,w17, SXTW  #0x3
7102bbd044  ldr w0,[x18]
7102bbd048  ldr x0,[x14, x0, LSL #0x3]
7102bbd04c  cmp x0,x16
7102bbd050  b.eq 0x7102bbd070
7102bbd054  sub w18,w17,#0x1
7102bbd058  cmp x0,x16
7102bbd05c  csel w12,w18,w12,hi
7102bbd060  csinc w13,w13,w17,hi
7102bbd064  cmp w13,w12
7102bbd068  b.le 0x7102bbd030
7102bbd06c  b 0x7102bbd088
7102bbd070  ldrsw x10,[x18, #0x4]
7102bbd074  tbnz w10,#0x1f,0x7102bbd080
7102bbd078  add x10,x8,x10
7102bbd07c  b 0x7102bbd088
7102bbd080  adrp x10,0x7104742000
7102bbd084  add x10,x10,#0xdbb
7102bbd088  ldrb w12,[x10]
7102bbd08c  cmp w12,#0x8
7102bbd090  b.ne 0x7102bbd09c
7102bbd094  ldur s0,[x10, #0x1]
7102bbd098  b 0x7102bbd0a0
7102bbd09c  fmov s0,0x41a00000
7102bbd0a0  str s0,[x23, #0x2dc]
7102bbd0a4  ldrb w10,[x8]
7102bbd0a8  cmp w10,#0xc
7102bbd0ac  b.ne 0x7102bbd130
7102bbd0b0  ldur w10,[x8, #0x1]
7102bbd0b4  subs w12,w10,#0x1
7102bbd0b8  b.lt 0x7102bbd130
7102bbd0bc  ldursw x10,[x8, #0x5]
7102bbd0c0  ldp x14,x15,[x11, #0x20]
7102bbd0c4  mov x16,#0xbd3c
7102bbd0c8  movk x16,#0x6847, LSL #16
7102bbd0cc  mov w13,wzr
7102bbd0d0  add x15,x15,x10
7102bbd0d4  movk x16,#0x10, LSL #32
7102bbd0d8  adrp x10,0x7104742000
7102bbd0dc  add x10,x10,#0xdbb
7102bbd0e0  add w17,w12,w13
7102bbd0e4  cmp w17,#0x0
7102bbd0e8  cinc w17,w17,lt
7102bbd0ec  asr w17,w17,#0x1
7102bbd0f0  add x18,x15,w17, SXTW  #0x3
7102bbd0f4  ldr w0,[x18]
7102bbd0f8  ldr x0,[x14, x0, LSL #0x3]
7102bbd0fc  cmp x0,x16
7102bbd100  b.eq 0x7102bbd120
7102bbd104  sub w18,w17,#0x1
7102bbd108  cmp x0,x16
7102bbd10c  csel w12,w18,w12,hi
7102bbd110  csinc w13,w13,w17,hi
7102bbd114  cmp w13,w12
7102bbd118  b.le 0x7102bbd0e0
7102bbd11c  b 0x7102bbd138
7102bbd120  ldrsw x10,[x18, #0x4]
7102bbd124  tbnz w10,#0x1f,0x7102bbd130
7102bbd128  add x10,x8,x10
7102bbd12c  b 0x7102bbd138
7102bbd130  adrp x10,0x7104742000
7102bbd134  add x10,x10,#0xdbb
7102bbd138  ldrb w12,[x10]
7102bbd13c  sub w12,w12,#0x1
7102bbd140  cmp w12,#0x6
7102bbd144  b.hi 0x7102bbd174
7102bbd148  adrp x13,0x7104518000
7102bbd14c  add x13,x13,#0x3cc
7102bbd150  ldrsw x12,[x13, x12, LSL #0x2]
7102bbd154  add x12,x12,x13
7102bbd158  br x12
7102bbd15c  ldrb w10,[x10, #0x1]
7102bbd160  b 0x7102bbd188
7102bbd164  ldur w10,[x10, #0x1]
7102bbd168  b 0x7102bbd188
7102bbd16c  ldursh w10,[x10, #0x1]
7102bbd170  b 0x7102bbd188
7102bbd174  mov w10,wzr
7102bbd178  b 0x7102bbd188
7102bbd17c  ldrsb w10,[x10, #0x1]
7102bbd180  b 0x7102bbd188
7102bbd184  ldurh w10,[x10, #0x1]
7102bbd188  str w10,[x23, #0x2e0]
7102bbd18c  ldrb w10,[x8]
7102bbd190  cmp w10,#0xc
7102bbd194  b.ne 0x7102bbd20c
7102bbd198  ldur w10,[x8, #0x1]
7102bbd19c  subs w10,w10,#0x1
7102bbd1a0  b.lt 0x7102bbd20c
7102bbd1a4  ldursw x12,[x8, #0x5]
7102bbd1a8  ldp x14,x15,[x11, #0x20]
7102bbd1ac  mov w13,wzr
7102bbd1b0  add x15,x15,x12
7102bbd1b4  adrp x12,0x7104742000
7102bbd1b8  add x12,x12,#0xdbb
7102bbd1bc  add w16,w10,w13
7102bbd1c0  cmp w16,#0x0
7102bbd1c4  cinc w16,w16,lt
7102bbd1c8  asr w16,w16,#0x1
7102bbd1cc  add x17,x15,w16, SXTW  #0x3
7102bbd1d0  ldr w18,[x17]
7102bbd1d4  ldr x18,[x14, x18, LSL #0x3]
7102bbd1d8  cmp x18,x5
7102bbd1dc  b.eq 0x7102bbd1fc
7102bbd1e0  sub w17,w16,#0x1
7102bbd1e4  cmp x18,x5
7102bbd1e8  csel w10,w17,w10,hi
7102bbd1ec  csinc w13,w13,w16,hi
7102bbd1f0  cmp w13,w10
7102bbd1f4  b.le 0x7102bbd1bc
7102bbd1f8  b 0x7102bbd214
7102bbd1fc  ldrsw x10,[x17, #0x4]
7102bbd200  tbnz w10,#0x1f,0x7102bbd20c
7102bbd204  add x12,x8,x10
7102bbd208  b 0x7102bbd214
7102bbd20c  adrp x12,0x7104742000
7102bbd210  add x12,x12,#0xdbb
7102bbd214  ldrb w13,[x12]
7102bbd218  adrp x10,0x7104472000
7102bbd21c  cmp w13,#0x8
7102bbd220  b.ne 0x7102bbd22c
7102bbd224  ldur s0,[x12, #0x1]
7102bbd228  b 0x7102bbd230
7102bbd22c  ldr s0,[x10, #0x58c]
7102bbd230  str s0,[x23, #0x2e4]
7102bbd234  ldrb w12,[x8]
7102bbd238  cmp w12,#0xc
7102bbd23c  b.ne 0x7102bbd2b4
7102bbd240  ldur w12,[x8, #0x1]
7102bbd244  subs w12,w12,#0x1
7102bbd248  b.lt 0x7102bbd2b4
7102bbd24c  ldursw x15,[x8, #0x5]
7102bbd250  ldp x14,x11,[x11, #0x20]
7102bbd254  mov w13,wzr
7102bbd258  add x15,x11,x15
7102bbd25c  adrp x11,0x7104742000
7102bbd260  add x11,x11,#0xdbb
7102bbd264  add w16,w12,w13
7102bbd268  cmp w16,#0x0
7102bbd26c  cinc w16,w16,lt
7102bbd270  asr w16,w16,#0x1
7102bbd274  add x17,x15,w16, SXTW  #0x3
7102bbd278  ldr w18,[x17]
7102bbd27c  ldr x18,[x14, x18, LSL #0x3]
7102bbd280  cmp x18,x22
7102bbd284  b.eq 0x7102bbd2a4
7102bbd288  sub w17,w16,#0x1
7102bbd28c  cmp x18,x22
7102bbd290  csel w12,w17,w12,hi
7102bbd294  csinc w13,w13,w16,hi
7102bbd298  cmp w13,w12
7102bbd29c  b.le 0x7102bbd264
7102bbd2a0  b 0x7102bbd2bc
7102bbd2a4  ldrsw x11,[x17, #0x4]
7102bbd2a8  tbnz w11,#0x1f,0x7102bbd2b4
7102bbd2ac  add x11,x8,x11
7102bbd2b0  b 0x7102bbd2bc
7102bbd2b4  adrp x11,0x7104742000
7102bbd2b8  add x11,x11,#0xdbb
7102bbd2bc  ldrb w12,[x11]
7102bbd2c0  adrp x8,0x7104472000
7102bbd2c4  cmp w12,#0x8
7102bbd2c8  b.ne 0x7102bbd2d4
7102bbd2cc  ldur s0,[x11, #0x1]
7102bbd2d0  b 0x7102bbd2d8
7102bbd2d4  ldr s0,[x8, #0xbdc]
7102bbd2d8  ldr x11,[sp, #0x30]
7102bbd2dc  str s0,[x23, #0x2e8]
7102bbd2e0  ldr x13,[x11]
7102bbd2e4  ldrb w11,[x13]
7102bbd2e8  cmp w11,#0xc
7102bbd2ec  b.ne 0x7102bbd37c
7102bbd2f0  ldur w11,[x13, #0x1]
7102bbd2f4  subs w14,w11,#0x1
7102bbd2f8  b.lt 0x7102bbd37c
7102bbd2fc  ldr x12,[sp, #0x18]
7102bbd300  ldr x12,[x12]
7102bbd304  ldursw x11,[x13, #0x5]
7102bbd308  ldp x16,x17,[x12, #0x20]
7102bbd30c  mov x18,#0x344d
7102bbd310  movk x18,#0x68e9, LSL #16
7102bbd314  mov w15,wzr
7102bbd318  add x17,x17,x11
7102bbd31c  movk x18,#0x16, LSL #32
7102bbd320  adrp x11,0x7104742000
7102bbd324  add x11,x11,#0xdbb
7102bbd328  add w0,w14,w15
7102bbd32c  cmp w0,#0x0
7102bbd330  cinc w0,w0,lt
7102bbd334  asr w0,w0,#0x1
7102bbd338  add x1,x17,w0, SXTW  #0x3
7102bbd33c  ldr w2,[x1]
7102bbd340  ldr x2,[x16, x2, LSL #0x3]
7102bbd344  cmp x2,x18
7102bbd348  b.eq 0x7102bbd36c
7102bbd34c  sub w1,w0,#0x1
7102bbd350  cmp x2,x18
7102bbd354  csel w14,w1,w14,hi
7102bbd358  csinc w15,w15,w0,hi
7102bbd35c  cmp w15,w14
7102bbd360  b.le 0x7102bbd328
7102bbd364  mov x12,xzr
7102bbd368  b 0x7102bbd388
7102bbd36c  ldrsw x11,[x1, #0x4]
7102bbd370  tbnz w11,#0x1f,0x7102bbd37c
7102bbd374  add x11,x13,x11
7102bbd378  b 0x7102bbd388
7102bbd37c  mov x12,xzr
7102bbd380  adrp x11,0x7104742000
7102bbd384  add x11,x11,#0xdbb
7102bbd388  ldrb w13,[x11]
7102bbd38c  cmp w13,#0xc
7102bbd390  b.ne 0x7102bbd414
7102bbd394  ldur w13,[x11, #0x1]
7102bbd398  subs w14,w13,#0x1
7102bbd39c  b.lt 0x7102bbd414
7102bbd3a0  ldursw x13,[x11, #0x5]
7102bbd3a4  ldp x16,x17,[x12, #0x20]
7102bbd3a8  mov x18,#0x30cc
7102bbd3ac  movk x18,#0xe414, LSL #16
7102bbd3b0  mov w15,wzr
7102bbd3b4  add x17,x17,x13
7102bbd3b8  movk x18,#0x8, LSL #32
7102bbd3bc  adrp x13,0x7104742000
7102bbd3c0  add x13,x13,#0xdbb
7102bbd3c4  add w0,w14,w15
7102bbd3c8  cmp w0,#0x0
7102bbd3cc  cinc w0,w0,lt
7102bbd3d0  asr w0,w0,#0x1
7102bbd3d4  add x1,x17,w0, SXTW  #0x3
7102bbd3d8  ldr w2,[x1]
7102bbd3dc  ldr x2,[x16, x2, LSL #0x3]
7102bbd3e0  cmp x2,x18
7102bbd3e4  b.eq 0x7102bbd404
7102bbd3e8  sub w1,w0,#0x1
7102bbd3ec  cmp x2,x18
7102bbd3f0  csel w14,w1,w14,hi
7102bbd3f4  csinc w15,w15,w0,hi
7102bbd3f8  cmp w15,w14
7102bbd3fc  b.le 0x7102bbd3c4
7102bbd400  b 0x7102bbd41c
7102bbd404  ldrsw x13,[x1, #0x4]
7102bbd408  tbnz w13,#0x1f,0x7102bbd414
7102bbd40c  add x13,x11,x13
7102bbd410  b 0x7102bbd41c
7102bbd414  adrp x13,0x7104742000
7102bbd418  add x13,x13,#0xdbb
7102bbd41c  ldrb w14,[x13]
7102bbd420  cmp w14,#0x8
7102bbd424  b.ne 0x7102bbd430
7102bbd428  ldur s0,[x13, #0x1]
7102bbd42c  b 0x7102bbd434
7102bbd430  ldr s0,[x9, #0xc8]
7102bbd434  str s0,[x23, #0x2ec]
7102bbd438  ldrb w13,[x11]
7102bbd43c  cmp w13,#0xc
7102bbd440  b.ne 0x7102bbd4c4
7102bbd444  ldur w13,[x11, #0x1]
7102bbd448  subs w14,w13,#0x1
7102bbd44c  b.lt 0x7102bbd4c4
7102bbd450  ldursw x13,[x11, #0x5]
7102bbd454  ldp x16,x17,[x12, #0x20]
7102bbd458  mov x18,#0x5a
7102bbd45c  movk x18,#0x9313, LSL #16
7102bbd460  mov w15,wzr
7102bbd464  add x17,x17,x13
7102bbd468  movk x18,#0x8, LSL #32
7102bbd46c  adrp x13,0x7104742000
7102bbd470  add x13,x13,#0xdbb
7102bbd474  add w0,w14,w15
7102bbd478  cmp w0,#0x0
7102bbd47c  cinc w0,w0,lt
7102bbd480  asr w0,w0,#0x1
7102bbd484  add x1,x17,w0, SXTW  #0x3
7102bbd488  ldr w2,[x1]
7102bbd48c  ldr x2,[x16, x2, LSL #0x3]
7102bbd490  cmp x2,x18
7102bbd494  b.eq 0x7102bbd4b4
7102bbd498  sub w1,w0,#0x1
7102bbd49c  cmp x2,x18
7102bbd4a0  csel w14,w1,w14,hi
7102bbd4a4  csinc w15,w15,w0,hi
7102bbd4a8  cmp w15,w14
7102bbd4ac  b.le 0x7102bbd474
7102bbd4b0  b 0x7102bbd4cc
7102bbd4b4  ldrsw x13,[x1, #0x4]
7102bbd4b8  tbnz w13,#0x1f,0x7102bbd4c4
7102bbd4bc  add x13,x11,x13
7102bbd4c0  b 0x7102bbd4cc
7102bbd4c4  adrp x13,0x7104742000
7102bbd4c8  add x13,x13,#0xdbb
7102bbd4cc  ldrb w14,[x13]
7102bbd4d0  cmp w14,#0x8
7102bbd4d4  b.ne 0x7102bbd4e0
7102bbd4d8  ldur s0,[x13, #0x1]
7102bbd4dc  b 0x7102bbd4e4
7102bbd4e0  fmov s0,wzr
7102bbd4e4  str s0,[x23, #0x2f0]
7102bbd4e8  ldrb w13,[x11]
7102bbd4ec  cmp w13,#0xc
7102bbd4f0  b.ne 0x7102bbd574
7102bbd4f4  ldur w13,[x11, #0x1]
7102bbd4f8  subs w14,w13,#0x1
7102bbd4fc  b.lt 0x7102bbd574
7102bbd500  ldursw x13,[x11, #0x5]
7102bbd504  ldp x16,x17,[x12, #0x20]
7102bbd508  mov x18,#0x452f
7102bbd50c  movk x18,#0x8c1a, LSL #16
7102bbd510  mov w15,wzr
7102bbd514  add x17,x17,x13
7102bbd518  movk x18,#0x5, LSL #32
7102bbd51c  adrp x13,0x7104742000
7102bbd520  add x13,x13,#0xdbb
7102bbd524  add w0,w14,w15
7102bbd528  cmp w0,#0x0
7102bbd52c  cinc w0,w0,lt
7102bbd530  asr w0,w0,#0x1
7102bbd534  add x1,x17,w0, SXTW  #0x3
7102bbd538  ldr w2,[x1]
7102bbd53c  ldr x2,[x16, x2, LSL #0x3]
7102bbd540  cmp x2,x18
7102bbd544  b.eq 0x7102bbd564
7102bbd548  sub w1,w0,#0x1
7102bbd54c  cmp x2,x18
7102bbd550  csel w14,w1,w14,hi
7102bbd554  csinc w15,w15,w0,hi
7102bbd558  cmp w15,w14
7102bbd55c  b.le 0x7102bbd524
7102bbd560  b 0x7102bbd57c
7102bbd564  ldrsw x13,[x1, #0x4]
7102bbd568  tbnz w13,#0x1f,0x7102bbd574
7102bbd56c  add x13,x11,x13
7102bbd570  b 0x7102bbd57c
7102bbd574  adrp x13,0x7104742000
7102bbd578  add x13,x13,#0xdbb
7102bbd57c  ldrb w14,[x13]
7102bbd580  cmp w14,#0x8
7102bbd584  b.ne 0x7102bbd590
7102bbd588  ldur s0,[x13, #0x1]
7102bbd58c  b 0x7102bbd594
7102bbd590  ldr s0,[x9, #0xc8]
7102bbd594  str s0,[x23, #0x2f4]
7102bbd598  ldrb w9,[x11]
7102bbd59c  cmp w9,#0xc
7102bbd5a0  b.ne 0x7102bbd624
7102bbd5a4  ldur w9,[x11, #0x1]
7102bbd5a8  subs w13,w9,#0x1
7102bbd5ac  b.lt 0x7102bbd624
7102bbd5b0  ldursw x9,[x11, #0x5]
7102bbd5b4  ldp x15,x16,[x12, #0x20]
7102bbd5b8  mov x17,#0xe50f
7102bbd5bc  movk x17,#0xf54d, LSL #16
7102bbd5c0  mov w14,wzr
7102bbd5c4  add x16,x16,x9
7102bbd5c8  movk x17,#0x6, LSL #32
7102bbd5cc  adrp x9,0x7104742000
7102bbd5d0  add x9,x9,#0xdbb
7102bbd5d4  add w18,w13,w14
7102bbd5d8  cmp w18,#0x0
7102bbd5dc  cinc w18,w18,lt
7102bbd5e0  asr w18,w18,#0x1
7102bbd5e4  add x0,x16,w18, SXTW  #0x3
7102bbd5e8  ldr w1,[x0]
7102bbd5ec  ldr x1,[x15, x1, LSL #0x3]
7102bbd5f0  cmp x1,x17
7102bbd5f4  b.eq 0x7102bbd614
7102bbd5f8  sub w0,w18,#0x1
7102bbd5fc  cmp x1,x17
7102bbd600  csel w13,w0,w13,hi
7102bbd604  csinc w14,w14,w18,hi
7102bbd608  cmp w14,w13
7102bbd60c  b.le 0x7102bbd5d4
7102bbd610  b 0x7102bbd62c
7102bbd614  ldrsw x9,[x0, #0x4]
7102bbd618  tbnz w9,#0x1f,0x7102bbd624
7102bbd61c  add x9,x11,x9
7102bbd620  b 0x7102bbd62c
7102bbd624  adrp x9,0x7104742000
7102bbd628  add x9,x9,#0xdbb
7102bbd62c  ldrb w13,[x9]
7102bbd630  cmp w13,#0x8
7102bbd634  b.ne 0x7102bbd640
7102bbd638  ldur s0,[x9, #0x1]
7102bbd63c  b 0x7102bbd644
7102bbd640  fmov s0,0x41a00000
7102bbd644  str s0,[x23, #0x2f8]
7102bbd648  ldrb w9,[x11]
7102bbd64c  cmp w9,#0xc
7102bbd650  b.ne 0x7102bbd6d4
7102bbd654  ldur w9,[x11, #0x1]
7102bbd658  subs w13,w9,#0x1
7102bbd65c  b.lt 0x7102bbd6d4
7102bbd660  ldursw x9,[x11, #0x5]
7102bbd664  ldp x15,x16,[x12, #0x20]
7102bbd668  mov x17,#0xbd3c
7102bbd66c  movk x17,#0x6847, LSL #16
7102bbd670  mov w14,wzr
7102bbd674  add x16,x16,x9
7102bbd678  movk x17,#0x10, LSL #32
7102bbd67c  adrp x9,0x7104742000
7102bbd680  add x9,x9,#0xdbb
7102bbd684  add w18,w13,w14
7102bbd688  cmp w18,#0x0
7102bbd68c  cinc w18,w18,lt
7102bbd690  asr w18,w18,#0x1
7102bbd694  add x0,x16,w18, SXTW  #0x3
7102bbd698  ldr w1,[x0]
7102bbd69c  ldr x1,[x15, x1, LSL #0x3]
7102bbd6a0  cmp x1,x17
7102bbd6a4  b.eq 0x7102bbd6c4
7102bbd6a8  sub w0,w18,#0x1
7102bbd6ac  cmp x1,x17
7102bbd6b0  csel w13,w0,w13,hi
7102bbd6b4  csinc w14,w14,w18,hi
7102bbd6b8  cmp w14,w13
7102bbd6bc  b.le 0x7102bbd684
7102bbd6c0  b 0x7102bbd6dc
7102bbd6c4  ldrsw x9,[x0, #0x4]
7102bbd6c8  tbnz w9,#0x1f,0x7102bbd6d4
7102bbd6cc  add x9,x11,x9
7102bbd6d0  b 0x7102bbd6dc
7102bbd6d4  adrp x9,0x7104742000
7102bbd6d8  add x9,x9,#0xdbb
7102bbd6dc  ldrb w13,[x9]
7102bbd6e0  sub w13,w13,#0x1
7102bbd6e4  cmp w13,#0x6
7102bbd6e8  b.hi 0x7102bbd718
7102bbd6ec  adrp x14,0x7104518000
7102bbd6f0  add x14,x14,#0x3e8
7102bbd6f4  ldrsw x13,[x14, x13, LSL #0x2]
7102bbd6f8  add x13,x13,x14
7102bbd6fc  br x13
7102bbd700  ldrb w9,[x9, #0x1]
7102bbd704  b 0x7102bbd72c
7102bbd708  ldur w9,[x9, #0x1]
7102bbd70c  b 0x7102bbd72c
7102bbd710  ldursh w9,[x9, #0x1]
7102bbd714  b 0x7102bbd72c
7102bbd718  mov w9,wzr
7102bbd71c  b 0x7102bbd72c
7102bbd720  ldrsb w9,[x9, #0x1]
7102bbd724  b 0x7102bbd72c
7102bbd728  ldurh w9,[x9, #0x1]
7102bbd72c  str w9,[x23, #0x2fc]
7102bbd730  ldrb w9,[x11]
7102bbd734  cmp w9,#0xc
7102bbd738  b.ne 0x7102bbd7b0
7102bbd73c  ldur w9,[x11, #0x1]
7102bbd740  subs w13,w9,#0x1
7102bbd744  b.lt 0x7102bbd7b0
7102bbd748  ldursw x9,[x11, #0x5]
7102bbd74c  ldp x15,x16,[x12, #0x20]
7102bbd750  mov w14,wzr
7102bbd754  add x16,x16,x9
7102bbd758  adrp x9,0x7104742000
7102bbd75c  add x9,x9,#0xdbb
7102bbd760  add w17,w13,w14
7102bbd764  cmp w17,#0x0
7102bbd768  cinc w17,w17,lt
7102bbd76c  asr w17,w17,#0x1
7102bbd770  add x18,x16,w17, SXTW  #0x3
7102bbd774  ldr w0,[x18]
7102bbd778  ldr x0,[x15, x0, LSL #0x3]
7102bbd77c  cmp x0,x5
7102bbd780  b.eq 0x7102bbd7a0
7102bbd784  sub w18,w17,#0x1
7102bbd788  cmp x0,x5
7102bbd78c  csel w13,w18,w13,hi
7102bbd790  csinc w14,w14,w17,hi
7102bbd794  cmp w14,w13
7102bbd798  b.le 0x7102bbd760
7102bbd79c  b 0x7102bbd7b8
7102bbd7a0  ldrsw x9,[x18, #0x4]
7102bbd7a4  tbnz w9,#0x1f,0x7102bbd7b0
7102bbd7a8  add x9,x11,x9
7102bbd7ac  b 0x7102bbd7b8
7102bbd7b0  adrp x9,0x7104742000
7102bbd7b4  add x9,x9,#0xdbb
7102bbd7b8  ldrb w13,[x9]
7102bbd7bc  cmp w13,#0x8
7102bbd7c0  b.ne 0x7102bbd7cc
7102bbd7c4  ldur s0,[x9, #0x1]
7102bbd7c8  b 0x7102bbd7d0
7102bbd7cc  ldr s0,[x10, #0x58c]
7102bbd7d0  str s0,[x23, #0x300]
7102bbd7d4  ldrb w9,[x11]
7102bbd7d8  cmp w9,#0xc
7102bbd7dc  b.ne 0x7102bbd854
7102bbd7e0  ldur w9,[x11, #0x1]
7102bbd7e4  subs w10,w9,#0x1
7102bbd7e8  b.lt 0x7102bbd854
7102bbd7ec  ldursw x9,[x11, #0x5]
7102bbd7f0  ldp x14,x12,[x12, #0x20]
7102bbd7f4  mov w13,wzr
7102bbd7f8  add x12,x12,x9
7102bbd7fc  adrp x9,0x7104742000
7102bbd800  add x9,x9,#0xdbb
7102bbd804  add w15,w10,w13
7102bbd808  cmp w15,#0x0
7102bbd80c  cinc w15,w15,lt
7102bbd810  asr w15,w15,#0x1
7102bbd814  add x16,x12,w15, SXTW  #0x3
7102bbd818  ldr w17,[x16]
7102bbd81c  ldr x17,[x14, x17, LSL #0x3]
7102bbd820  cmp x17,x22
7102bbd824  b.eq 0x7102bbd844
7102bbd828  sub w16,w15,#0x1
7102bbd82c  cmp x17,x22
7102bbd830  csel w10,w16,w10,hi
7102bbd834  csinc w13,w13,w15,hi
7102bbd838  cmp w13,w10
7102bbd83c  b.le 0x7102bbd804
7102bbd840  b 0x7102bbd85c
7102bbd844  ldrsw x9,[x16, #0x4]
7102bbd848  tbnz w9,#0x1f,0x7102bbd854
7102bbd84c  add x9,x11,x9
7102bbd850  b 0x7102bbd85c
7102bbd854  adrp x9,0x7104742000
7102bbd858  add x9,x9,#0xdbb
7102bbd85c  ldrb w10,[x9]
7102bbd860  cmp w10,#0x8
7102bbd864  b.ne 0x7102bbd870
7102bbd868  ldur s0,[x9, #0x1]
7102bbd86c  b 0x7102bbd874
7102bbd870  ldr s0,[x8, #0xbdc]
7102bbd874  ldr x9,[sp, #0x30]
7102bbd878  str s0,[x23, #0x304]
7102bbd87c  ldr x11,[x9]
7102bbd880  ldrb w9,[x11]
7102bbd884  cmp w9,#0xc
7102bbd888  b.ne 0x7102bbd918
7102bbd88c  ldur w9,[x11, #0x1]
7102bbd890  subs w12,w9,#0x1
7102bbd894  b.lt 0x7102bbd918
7102bbd898  ldr x10,[sp, #0x18]
7102bbd89c  ldr x10,[x10]
7102bbd8a0  ldursw x9,[x11, #0x5]
7102bbd8a4  ldp x14,x15,[x10, #0x20]
7102bbd8a8  mov x16,#0xb901
7102bbd8ac  movk x16,#0xd0e8, LSL #16
7102bbd8b0  mov w13,wzr
7102bbd8b4  add x15,x15,x9
7102bbd8b8  movk x16,#0x12, LSL #32
7102bbd8bc  adrp x9,0x7104742000
7102bbd8c0  add x9,x9,#0xdbb
7102bbd8c4  add w17,w12,w13
7102bbd8c8  cmp w17,#0x0
7102bbd8cc  cinc w17,w17,lt
7102bbd8d0  asr w17,w17,#0x1
7102bbd8d4  add x18,x15,w17, SXTW  #0x3
7102bbd8d8  ldr w0,[x18]
7102bbd8dc  ldr x0,[x14, x0, LSL #0x3]
7102bbd8e0  cmp x0,x16
7102bbd8e4  b.eq 0x7102bbd908
7102bbd8e8  sub w18,w17,#0x1
7102bbd8ec  cmp x0,x16
7102bbd8f0  csel w12,w18,w12,hi
7102bbd8f4  csinc w13,w13,w17,hi
7102bbd8f8  cmp w13,w12
7102bbd8fc  b.le 0x7102bbd8c4
7102bbd900  mov x10,xzr
7102bbd904  b 0x7102bbd924
7102bbd908  ldrsw x9,[x18, #0x4]
7102bbd90c  tbnz w9,#0x1f,0x7102bbd918
7102bbd910  add x9,x11,x9
7102bbd914  b 0x7102bbd924
7102bbd918  mov x10,xzr
7102bbd91c  adrp x9,0x7104742000
7102bbd920  add x9,x9,#0xdbb
7102bbd924  ldrb w11,[x9]
7102bbd928  cmp w11,#0xc
7102bbd92c  b.ne 0x7102bbd9b0
7102bbd930  ldur w11,[x9, #0x1]
7102bbd934  subs w12,w11,#0x1
7102bbd938  b.lt 0x7102bbd9b0
7102bbd93c  ldursw x11,[x9, #0x5]
7102bbd940  ldp x14,x15,[x10, #0x20]
7102bbd944  mov x16,#0x30cc
7102bbd948  movk x16,#0xe414, LSL #16
7102bbd94c  mov w13,wzr
7102bbd950  add x15,x15,x11
7102bbd954  movk x16,#0x8, LSL #32
7102bbd958  adrp x11,0x7104742000
7102bbd95c  add x11,x11,#0xdbb
7102bbd960  add w17,w12,w13
7102bbd964  cmp w17,#0x0
7102bbd968  cinc w17,w17,lt
7102bbd96c  asr w17,w17,#0x1
7102bbd970  add x18,x15,w17, SXTW  #0x3
7102bbd974  ldr w0,[x18]
7102bbd978  ldr x0,[x14, x0, LSL #0x3]
7102bbd97c  cmp x0,x16
7102bbd980  b.eq 0x7102bbd9a0
7102bbd984  sub w18,w17,#0x1
7102bbd988  cmp x0,x16
7102bbd98c  csel w12,w18,w12,hi
7102bbd990  csinc w13,w13,w17,hi
7102bbd994  cmp w13,w12
7102bbd998  b.le 0x7102bbd960
7102bbd99c  b 0x7102bbd9b8
7102bbd9a0  ldrsw x11,[x18, #0x4]
7102bbd9a4  tbnz w11,#0x1f,0x7102bbd9b0
7102bbd9a8  add x11,x9,x11
7102bbd9ac  b 0x7102bbd9b8
7102bbd9b0  adrp x11,0x7104742000
7102bbd9b4  add x11,x11,#0xdbb
7102bbd9b8  ldrb w12,[x11]
7102bbd9bc  cmp w12,#0x8
7102bbd9c0  b.ne 0x7102bbd9cc
7102bbd9c4  ldur s0,[x11, #0x1]
7102bbd9c8  b 0x7102bbd9d0
7102bbd9cc  fmov s0,wzr
7102bbd9d0  str s0,[x23, #0x308]
7102bbd9d4  ldrb w11,[x9]
7102bbd9d8  cmp w11,#0xc
7102bbd9dc  b.ne 0x7102bbda60
7102bbd9e0  ldur w11,[x9, #0x1]
7102bbd9e4  subs w12,w11,#0x1
7102bbd9e8  b.lt 0x7102bbda60
7102bbd9ec  ldursw x11,[x9, #0x5]
7102bbd9f0  ldp x14,x15,[x10, #0x20]
7102bbd9f4  mov x16,#0x5a
7102bbd9f8  movk x16,#0x9313, LSL #16
7102bbd9fc  mov w13,wzr
7102bbda00  add x15,x15,x11
7102bbda04  movk x16,#0x8, LSL #32
7102bbda08  adrp x11,0x7104742000
7102bbda0c  add x11,x11,#0xdbb
7102bbda10  add w17,w12,w13
7102bbda14  cmp w17,#0x0
7102bbda18  cinc w17,w17,lt
7102bbda1c  asr w17,w17,#0x1
7102bbda20  add x18,x15,w17, SXTW  #0x3
7102bbda24  ldr w0,[x18]
7102bbda28  ldr x0,[x14, x0, LSL #0x3]
7102bbda2c  cmp x0,x16
7102bbda30  b.eq 0x7102bbda50
7102bbda34  sub w18,w17,#0x1
7102bbda38  cmp x0,x16
7102bbda3c  csel w12,w18,w12,hi
7102bbda40  csinc w13,w13,w17,hi
7102bbda44  cmp w13,w12
7102bbda48  b.le 0x7102bbda10
7102bbda4c  b 0x7102bbda68
7102bbda50  ldrsw x11,[x18, #0x4]
7102bbda54  tbnz w11,#0x1f,0x7102bbda60
7102bbda58  add x11,x9,x11
7102bbda5c  b 0x7102bbda68
7102bbda60  adrp x11,0x7104742000
7102bbda64  add x11,x11,#0xdbb
7102bbda68  ldrb w12,[x11]
7102bbda6c  cmp w12,#0x8
7102bbda70  b.ne 0x7102bbda7c
7102bbda74  ldur s0,[x11, #0x1]
7102bbda78  b 0x7102bbda80
7102bbda7c  fmov s0,0xc0a00000
7102bbda80  str s0,[x23, #0x30c]
7102bbda84  ldrb w11,[x9]
7102bbda88  cmp w11,#0xc
7102bbda8c  b.ne 0x7102bbdb10
7102bbda90  ldur w11,[x9, #0x1]
7102bbda94  subs w12,w11,#0x1
7102bbda98  b.lt 0x7102bbdb10
7102bbda9c  ldursw x11,[x9, #0x5]
7102bbdaa0  ldp x14,x15,[x10, #0x20]
7102bbdaa4  mov x16,#0x452f
7102bbdaa8  movk x16,#0x8c1a, LSL #16
7102bbdaac  mov w13,wzr
7102bbdab0  add x15,x15,x11
7102bbdab4  movk x16,#0x5, LSL #32
7102bbdab8  adrp x11,0x7104742000
7102bbdabc  add x11,x11,#0xdbb
7102bbdac0  add w17,w12,w13
7102bbdac4  cmp w17,#0x0
7102bbdac8  cinc w17,w17,lt
7102bbdacc  asr w17,w17,#0x1
7102bbdad0  add x18,x15,w17, SXTW  #0x3
7102bbdad4  ldr w0,[x18]
7102bbdad8  ldr x0,[x14, x0, LSL #0x3]
7102bbdadc  cmp x0,x16
7102bbdae0  b.eq 0x7102bbdb00
7102bbdae4  sub w18,w17,#0x1
7102bbdae8  cmp x0,x16
7102bbdaec  csel w12,w18,w12,hi
7102bbdaf0  csinc w13,w13,w17,hi
7102bbdaf4  cmp w13,w12
7102bbdaf8  b.le 0x7102bbdac0
7102bbdafc  b 0x7102bbdb18
7102bbdb00  ldrsw x11,[x18, #0x4]
7102bbdb04  tbnz w11,#0x1f,0x7102bbdb10
7102bbdb08  add x11,x9,x11
7102bbdb0c  b 0x7102bbdb18
7102bbdb10  adrp x11,0x7104742000
7102bbdb14  add x11,x11,#0xdbb
7102bbdb18  ldrb w12,[x11]
7102bbdb1c  cmp w12,#0x8
7102bbdb20  b.ne 0x7102bbdb2c
7102bbdb24  ldur s0,[x11, #0x1]
7102bbdb28  b 0x7102bbdb34
7102bbdb2c  adrp x11,0x7104472000
7102bbdb30  ldr s0,[x11, #0xee8]
7102bbdb34  str s0,[x23, #0x310]
7102bbdb38  ldrb w11,[x9]
7102bbdb3c  cmp w11,#0xc
7102bbdb40  b.ne 0x7102bbdbc4
7102bbdb44  ldur w11,[x9, #0x1]
7102bbdb48  subs w12,w11,#0x1
7102bbdb4c  b.lt 0x7102bbdbc4
7102bbdb50  ldursw x11,[x9, #0x5]
7102bbdb54  ldp x14,x15,[x10, #0x20]
7102bbdb58  mov x16,#0xe50f
7102bbdb5c  movk x16,#0xf54d, LSL #16
7102bbdb60  mov w13,wzr
7102bbdb64  add x15,x15,x11
7102bbdb68  movk x16,#0x6, LSL #32
7102bbdb6c  adrp x11,0x7104742000
7102bbdb70  add x11,x11,#0xdbb
7102bbdb74  add w17,w12,w13
7102bbdb78  cmp w17,#0x0
7102bbdb7c  cinc w17,w17,lt
7102bbdb80  asr w17,w17,#0x1
7102bbdb84  add x18,x15,w17, SXTW  #0x3
7102bbdb88  ldr w0,[x18]
7102bbdb8c  ldr x0,[x14, x0, LSL #0x3]
7102bbdb90  cmp x0,x16
7102bbdb94  b.eq 0x7102bbdbb4
7102bbdb98  sub w18,w17,#0x1
7102bbdb9c  cmp x0,x16
7102bbdba0  csel w12,w18,w12,hi
7102bbdba4  csinc w13,w13,w17,hi
7102bbdba8  cmp w13,w12
7102bbdbac  b.le 0x7102bbdb74
7102bbdbb0  b 0x7102bbdbcc
7102bbdbb4  ldrsw x11,[x18, #0x4]
7102bbdbb8  tbnz w11,#0x1f,0x7102bbdbc4
7102bbdbbc  add x11,x9,x11
7102bbdbc0  b 0x7102bbdbcc
7102bbdbc4  adrp x11,0x7104742000
7102bbdbc8  add x11,x11,#0xdbb
7102bbdbcc  ldrb w12,[x11]
7102bbdbd0  cmp w12,#0x8
7102bbdbd4  b.ne 0x7102bbdbe0
7102bbdbd8  ldur s0,[x11, #0x1]
7102bbdbdc  b 0x7102bbdbe4
7102bbdbe0  fmov s0,0x41200000
7102bbdbe4  str s0,[x23, #0x314]
7102bbdbe8  ldrb w11,[x9]
7102bbdbec  cmp w11,#0xc
7102bbdbf0  b.ne 0x7102bbdc74
7102bbdbf4  ldur w11,[x9, #0x1]
7102bbdbf8  subs w12,w11,#0x1
7102bbdbfc  b.lt 0x7102bbdc74
7102bbdc00  ldursw x11,[x9, #0x5]
7102bbdc04  ldp x14,x15,[x10, #0x20]
7102bbdc08  mov x16,#0xbd3c
7102bbdc0c  movk x16,#0x6847, LSL #16
7102bbdc10  mov w13,wzr
7102bbdc14  add x15,x15,x11
7102bbdc18  movk x16,#0x10, LSL #32
7102bbdc1c  adrp x11,0x7104742000
7102bbdc20  add x11,x11,#0xdbb
7102bbdc24  add w17,w12,w13
7102bbdc28  cmp w17,#0x0
7102bbdc2c  cinc w17,w17,lt
7102bbdc30  asr w17,w17,#0x1
7102bbdc34  add x18,x15,w17, SXTW  #0x3
7102bbdc38  ldr w0,[x18]
7102bbdc3c  ldr x0,[x14, x0, LSL #0x3]
7102bbdc40  cmp x0,x16
7102bbdc44  b.eq 0x7102bbdc64
7102bbdc48  sub w18,w17,#0x1
7102bbdc4c  cmp x0,x16
7102bbdc50  csel w12,w18,w12,hi
7102bbdc54  csinc w13,w13,w17,hi
7102bbdc58  cmp w13,w12
7102bbdc5c  b.le 0x7102bbdc24
7102bbdc60  b 0x7102bbdc7c
7102bbdc64  ldrsw x11,[x18, #0x4]
7102bbdc68  tbnz w11,#0x1f,0x7102bbdc74
7102bbdc6c  add x11,x9,x11
7102bbdc70  b 0x7102bbdc7c
7102bbdc74  adrp x11,0x7104742000
7102bbdc78  add x11,x11,#0xdbb
7102bbdc7c  ldrb w12,[x11]
7102bbdc80  sub w12,w12,#0x1
7102bbdc84  cmp w12,#0x6
7102bbdc88  b.hi 0x7102bbdcb8
7102bbdc8c  adrp x13,0x7104518000
7102bbdc90  add x13,x13,#0x404
7102bbdc94  ldrsw x12,[x13, x12, LSL #0x2]
7102bbdc98  add x12,x12,x13
7102bbdc9c  br x12
7102bbdca0  ldrb w11,[x11, #0x1]
7102bbdca4  b 0x7102bbdccc
7102bbdca8  ldur w11,[x11, #0x1]
7102bbdcac  b 0x7102bbdccc
7102bbdcb0  ldursh w11,[x11, #0x1]
7102bbdcb4  b 0x7102bbdccc
7102bbdcb8  mov w11,wzr
7102bbdcbc  b 0x7102bbdccc
7102bbdcc0  ldrsb w11,[x11, #0x1]
7102bbdcc4  b 0x7102bbdccc
7102bbdcc8  ldurh w11,[x11, #0x1]
7102bbdccc  str w11,[x23, #0x318]
7102bbdcd0  ldrb w11,[x9]
7102bbdcd4  cmp w11,#0xc
7102bbdcd8  b.ne 0x7102bbdd50
7102bbdcdc  ldur w11,[x9, #0x1]
7102bbdce0  subs w12,w11,#0x1
7102bbdce4  b.lt 0x7102bbdd50
7102bbdce8  ldursw x11,[x9, #0x5]
7102bbdcec  ldp x14,x15,[x10, #0x20]
7102bbdcf0  mov w13,wzr
7102bbdcf4  add x15,x15,x11
7102bbdcf8  adrp x11,0x7104742000
7102bbdcfc  add x11,x11,#0xdbb
7102bbdd00  add w16,w12,w13
7102bbdd04  cmp w16,#0x0
7102bbdd08  cinc w16,w16,lt
7102bbdd0c  asr w16,w16,#0x1
7102bbdd10  add x17,x15,w16, SXTW  #0x3
7102bbdd14  ldr w18,[x17]
7102bbdd18  ldr x18,[x14, x18, LSL #0x3]
7102bbdd1c  cmp x18,x5
7102bbdd20  b.eq 0x7102bbdd40
7102bbdd24  sub w17,w16,#0x1
7102bbdd28  cmp x18,x5
7102bbdd2c  csel w12,w17,w12,hi
7102bbdd30  csinc w13,w13,w16,hi
7102bbdd34  cmp w13,w12
7102bbdd38  b.le 0x7102bbdd00
7102bbdd3c  b 0x7102bbdd58
7102bbdd40  ldrsw x11,[x17, #0x4]
7102bbdd44  tbnz w11,#0x1f,0x7102bbdd50
7102bbdd48  add x11,x9,x11
7102bbdd4c  b 0x7102bbdd58
7102bbdd50  adrp x11,0x7104742000
7102bbdd54  add x11,x11,#0xdbb
7102bbdd58  ldrb w12,[x11]
7102bbdd5c  cmp w12,#0x8
7102bbdd60  b.ne 0x7102bbdd6c
7102bbdd64  ldur s0,[x11, #0x1]
7102bbdd68  b 0x7102bbdd70
7102bbdd6c  ldr s0,[x8, #0xbdc]
7102bbdd70  str s0,[x23, #0x31c]
7102bbdd74  ldrb w8,[x9]
7102bbdd78  cmp w8,#0xc
7102bbdd7c  b.ne 0x7102bbddf4
7102bbdd80  ldur w8,[x9, #0x1]
7102bbdd84  subs w11,w8,#0x1
7102bbdd88  b.lt 0x7102bbddf4
7102bbdd8c  ldursw x8,[x9, #0x5]
7102bbdd90  ldp x13,x10,[x10, #0x20]
7102bbdd94  mov w12,wzr
7102bbdd98  add x10,x10,x8
7102bbdd9c  adrp x8,0x7104742000
7102bbdda0  add x8,x8,#0xdbb
7102bbdda4  add w14,w11,w12
7102bbdda8  cmp w14,#0x0
7102bbddac  cinc w14,w14,lt
7102bbddb0  asr w14,w14,#0x1
7102bbddb4  add x15,x10,w14, SXTW  #0x3
7102bbddb8  ldr w16,[x15]
7102bbddbc  ldr x16,[x13, x16, LSL #0x3]
7102bbddc0  cmp x16,x22
7102bbddc4  b.eq 0x7102bbdde4
7102bbddc8  sub w15,w14,#0x1
7102bbddcc  cmp x16,x22
7102bbddd0  csel w11,w15,w11,hi
7102bbddd4  csinc w12,w12,w14,hi
7102bbddd8  cmp w12,w11
7102bbdddc  b.le 0x7102bbdda4
7102bbdde0  b 0x7102bbddfc
7102bbdde4  ldrsw x8,[x15, #0x4]
7102bbdde8  tbnz w8,#0x1f,0x7102bbddf4
7102bbddec  add x8,x9,x8
7102bbddf0  b 0x7102bbddfc
7102bbddf4  adrp x8,0x7104742000
7102bbddf8  add x8,x8,#0xdbb
7102bbddfc  ldrb w9,[x8]
7102bbde00  cmp w9,#0x8
7102bbde04  b.ne 0x7102bbde10
7102bbde08  ldur s0,[x8, #0x1]
7102bbde0c  b 0x7102bbde18
7102bbde10  adrp x8,0x7104473000
7102bbde14  ldr s0,[x8, #0x2a4]
7102bbde18  str s0,[x23, #0x320]
7102bbde1c  ldp d9,d8,[sp, #0x60]
7102bbde20  ldp d11,d10,[sp, #0x50]
7102bbde24  ldr d12,[sp, #0x40]
7102bbde28  ldp x29,x30,[sp, #0xc0]
7102bbde2c  ldp x20,x19,[sp, #0xb0]
7102bbde30  ldp x22,x21,[sp, #0xa0]
7102bbde34  ldp x24,x23,[sp, #0x90]
7102bbde38  ldp x26,x25,[sp, #0x80]
7102bbde3c  ldp x28,x27,[sp, #0x70]
7102bbde40  add sp,sp,#0xd0
7102bbde44  ret
7102bbde48  ldr x28,[sp, #0x28]
7102bbde4c  mov x17,#0x52e1
7102bbde50  movk x17,#0x7374, LSL #16
7102bbde54  stp x23,x8,[x28, #0x1b8]
7102bbde58  str x26,[x28, #0x1c8]
7102bbde5c  movk x17,#0xa, LSL #32
7102bbde60  ldr x0,[sp, #0x20]
7102bbde64  cbnz x22,0x7102bb9f6c
7102bbde68  b 0x7102bb9f84
7102bbde6c  mov x8,xzr
7102bbde70  mov x25,xzr
7102bbde74  b 0x7102bb3638
7102bbde78  mov x8,xzr
7102bbde7c  mov x24,xzr
7102bbde80  b 0x7102bb7df8
7102bbde84  mov x0,x21
7102bbde88  bl 0x71039c0c00
7102bbde8c  bl 0x71039c0c00
