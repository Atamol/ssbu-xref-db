// addr:      7102bd3290
// offset:    0x2bd3290
// name:      FUN_7102bd3290
// mangled:   
// size:      12708

7102bd3290  sub sp,sp,#0x180
7102bd3294  stp d15,d14,[sp, #0xe0]
7102bd3298  stp d13,d12,[sp, #0xf0]
7102bd329c  stp d11,d10,[sp, #0x100]
7102bd32a0  stp d9,d8,[sp, #0x110]
7102bd32a4  stp x28,x27,[sp, #0x120]
7102bd32a8  stp x26,x25,[sp, #0x130]
7102bd32ac  stp x24,x23,[sp, #0x140]
7102bd32b0  stp x22,x21,[sp, #0x150]
7102bd32b4  stp x20,x19,[sp, #0x160]
7102bd32b8  stp x29,x30,[sp, #0x170]
7102bd32bc  add x29,sp,#0x170
7102bd32c0  ldr w8,[x0, #0x50]
7102bd32c4  mov v8.16B,v0.16B
7102bd32c8  mov x19,x0
7102bd32cc  cmp w8,#0x6
7102bd32d0  b.hi 0x7102bd3f7c
7102bd32d4  adrp x9,0x7104518000
7102bd32d8  add x9,x9,#0x538
7102bd32dc  ldrsw x8,[x9, x8, LSL #0x2]
7102bd32e0  add x8,x8,x9
7102bd32e4  br x8
7102bd32e8  ldrb w8,[x19, #0x58]
7102bd32ec  cbz w8,0x7102bd3cf0
7102bd32f0  mov x20,x19
7102bd32f4  ldr x8,[x20, #0x10]!
7102bd32f8  adrp x9,0x71052a8000
7102bd32fc  ldr x9,[x9, #0xa88]
7102bd3300  strb wzr,[x20, #0x48]
7102bd3304  ldr q0,[x9]
7102bd3308  fmov s1,wzr
7102bd330c  ext v2.16B,v0.16B,v0.16B,0x8
7102bd3310  mov v2.S[0x1],v1.S[0x0]
7102bd3314  mov v0.D[0x1],v2.D[0x0]
7102bd3318  str q0,[x20, #0x30]
7102bd331c  cbz x8,0x7102bd5f2c
7102bd3320  add x0,x8,#0x108
7102bd3324  mov w9,#0x1
7102bd3328  strb w9,[x8, #0x110]
7102bd332c  bl 0x71025e9d50
7102bd3330  ldr x8,[x20]
7102bd3334  cbz x8,0x7102bd5f2c
7102bd3338  ldr x0,[x8, #0xd8]
7102bd333c  adrp x8,0x7104473000
7102bd3340  ldr s0,[x8, #0x81c]
7102bd3344  mov w1,#0x1
7102bd3348  bl 0x71025ee450
7102bd334c  ldr x8,[x20]
7102bd3350  cbz x8,0x7102bd5f2c
7102bd3354  ldrb w9,[x8, #0xe0]
7102bd3358  cbz w9,0x7102bd5ef8
7102bd335c  ldr x21,[x8, #0xc8]
7102bd3360  cbz x21,0x7102bd5ef8
7102bd3364  ldp x22,x23,[x21, #0x18]
7102bd3368  cmp x22,x23
7102bd336c  str wzr,[x21, #0x3c]
7102bd3370  b.eq 0x7102bd5ef4
7102bd3374  fmov s9,wzr
7102bd3378  ldr x0,[x22], #0x8
7102bd337c  ldr x8,[x0]
7102bd3380  ldr x8,[x8, #0x18]
7102bd3384  mov v0.16B,v9.16B
7102bd3388  mov w1,wzr
7102bd338c  blr x8
7102bd3390  cmp x23,x22
7102bd3394  b.ne 0x7102bd3378
7102bd3398  ldp x22,x23,[x21, #0x18]
7102bd339c  cmp x22,x23
7102bd33a0  str wzr,[x21, #0x40]
7102bd33a4  b.eq 0x7102bd5ef8
7102bd33a8  fmov s9,wzr
7102bd33ac  ldr x0,[x22], #0x8
7102bd33b0  ldr x8,[x0]
7102bd33b4  ldr x8,[x8, #0x18]
7102bd33b8  mov v0.16B,v9.16B
7102bd33bc  mov w1,#0x1
7102bd33c0  blr x8
7102bd33c4  cmp x23,x22
7102bd33c8  b.ne 0x7102bd33ac
7102bd33cc  ldp x22,x21,[x21, #0x18]
7102bd33d0  cmp x22,x21
7102bd33d4  b.eq 0x7102bd5ef8
7102bd33d8  ldr x0,[x22], #0x8
7102bd33dc  ldr x8,[x0]
7102bd33e0  ldr x8,[x8, #0x38]
7102bd33e4  blr x8
7102bd33e8  cmp x21,x22
7102bd33ec  b.ne 0x7102bd33d8
7102bd33f0  b 0x7102bd5ef8
7102bd33f4  ldrb w8,[x19, #0x58]
7102bd33f8  cbz w8,0x7102bd3f7c
7102bd33fc  ldp x8,x9,[x19]
7102bd3400  strb wzr,[x19, #0x58]
7102bd3404  ldr x8,[x8, #0x340]
7102bd3408  ldp s0,s1,[x9, #0xf8]
7102bd340c  ldp w9,w10,[x8]
7102bd3410  fsub s1,s1,s0
7102bd3414  eor w9,w9,w9, LSL #0xb
7102bd3418  str w10,[x8]
7102bd341c  eor w9,w9,w9, LSR #0x8
7102bd3420  ldp w10,w11,[x8, #0x8]
7102bd3424  eor w9,w9,w11
7102bd3428  eor w9,w9,w11, LSR #0x13
7102bd342c  ucvtf s2,w9
7102bd3430  stp w10,w11,[x8, #0x4]
7102bd3434  str w9,[x8, #0xc]
7102bd3438  adrp x8,0x7104473000
7102bd343c  fmul s1,s1,s2
7102bd3440  ldr s2,[x8, #0x710]
7102bd3444  adrp x8,0x7104472000
7102bd3448  fmul s4,s1,s2
7102bd344c  ldr s1,[x8, #0xe0c]
7102bd3450  adrp x8,0x7104472000
7102bd3454  fadd s0,s0,s4
7102bd3458  fmul s0,s0,s1
7102bd345c  ldr s1,[x8, #0x58c]
7102bd3460  ldr x8,[x19]
7102bd3464  fdiv s0,s1,s0
7102bd3468  str s0,[x19, #0x5c]
7102bd346c  ldr x8,[x8, #0x340]
7102bd3470  ldp w9,w10,[x8]
7102bd3474  str w10,[x8]
7102bd3478  ldp w10,w11,[x8, #0x8]
7102bd347c  eor w9,w9,w9, LSL #0xb
7102bd3480  eor w9,w9,w9, LSR #0x8
7102bd3484  eor w9,w9,w11
7102bd3488  eor w9,w9,w11, LSR #0x13
7102bd348c  ucvtf s0,w9
7102bd3490  stp w10,w11,[x8, #0x4]
7102bd3494  str w9,[x8, #0xc]
7102bd3498  adrp x8,0x7104473000
7102bd349c  ldr s1,[x8, #0x91c]
7102bd34a0  ldr x8,[x19, #0x8]
7102bd34a4  fmul s3,s0,s1
7102bd34a8  ldr s1,[x8, #0x120]
7102bd34ac  fmul s0,s3,s2
7102bd34b0  fcmp s0,s1
7102bd34b4  b.pl 0x7102bd34c4
7102bd34b8  ldr s0,[x19, #0x5c]
7102bd34bc  fneg s0,s0
7102bd34c0  str s0,[x19, #0x5c]
7102bd34c4  ldr x8,[x19]
7102bd34c8  ldr x8,[x8, #0x338]
7102bd34cc  ldr x8,[x8]
7102bd34d0  ldr x0,[x8, #0x8]
7102bd34d4  cbz x0,0x7102bd34ec
7102bd34d8  ldr x8,[x0]
7102bd34dc  ldr w2,[x19, #0xc0]
7102bd34e0  orr w1,wzr,#0x1c
7102bd34e4  ldr x8,[x8, #0x58]
7102bd34e8  blr x8
7102bd34ec  mov w8,#0x2
7102bd34f0  b 0x7102bd3f70
7102bd34f4  ldr s0,[x19, #0x5c]
7102bd34f8  fcmp s0,#0.0
7102bd34fc  b.eq 0x7102bd3f7c
7102bd3500  ldr q1,[x19, #0x40]
7102bd3504  dup s2,v1.S[0x2]
7102bd3508  fmul s0,s0,s8
7102bd350c  fadd s0,s0,s2
7102bd3510  fmov s2,wzr
7102bd3514  mov v1.S[0x2],v0.S[0x0]
7102bd3518  ldr x8,[x19, #0x8]
7102bd351c  mov v1.S[0x3],v2.S[0x0]
7102bd3520  fabs s10,s0
7102bd3524  str q1,[x19, #0x40]
7102bd3528  ldr s0,[x8, #0x1b8]
7102bd352c  fmov s1,0x3f000000
7102bd3530  adrp x8,0x7104472000
7102bd3534  ldr s9,[x8, #0x58c]
7102bd3538  ldrb w8,[x19, #0xd0]
7102bd353c  fmul s11,s0,s1
7102bd3540  fsub s0,s9,s11
7102bd3544  fcmp s10,s11
7102bd3548  fccmp s0,s10,#0x8,pl
7102bd354c  b.pl 0x7102bd3e90
7102bd3550  cbnz w8,0x7102bd3ec0
7102bd3554  ldr x8,[x19, #0xc8]
7102bd3558  ldp x0,x1,[x8]
7102bd355c  adrp x2,0x7104420000
7102bd3560  add x2,x2,#0x6ff
7102bd3564  bl 0x71025f5420
7102bd3568  ldr x8,[x19, #0xc8]
7102bd356c  ldp x0,x1,[x8]
7102bd3570  adrp x2,0x710439b000
7102bd3574  add x2,x2,#0x555
7102bd3578  bl 0x71025f5420
7102bd357c  mov w8,#0x1
7102bd3580  strb w8,[x19, #0xd0]
7102bd3584  b 0x7102bd3ec0
7102bd3588  ldrb w8,[x19, #0x58]
7102bd358c  cbz w8,0x7102bd3ccc
7102bd3590  ldp x8,x9,[x19]
7102bd3594  strb wzr,[x19, #0x58]
7102bd3598  ldr x8,[x8, #0x340]
7102bd359c  ldr s0,[x9, #0x118]
7102bd35a0  ldr s1,[x9, #0x11c]
7102bd35a4  ldp w9,w10,[x8]
7102bd35a8  fsub s1,s1,s0
7102bd35ac  str w10,[x8]
7102bd35b0  ldp w10,w11,[x8, #0x8]
7102bd35b4  eor w9,w9,w9, LSL #0xb
7102bd35b8  eor w9,w9,w9, LSR #0x8
7102bd35bc  eor w9,w9,w11
7102bd35c0  eor w9,w9,w11, LSR #0x13
7102bd35c4  ucvtf s2,w9
7102bd35c8  stp w10,w11,[x8, #0x4]
7102bd35cc  str w9,[x8, #0xc]
7102bd35d0  adrp x8,0x7104473000
7102bd35d4  fmul s1,s1,s2
7102bd35d8  ldr s2,[x8, #0x710]
7102bd35dc  ldr x8,[x19]
7102bd35e0  fmul s4,s1,s2
7102bd35e4  fadd s0,s0,s4
7102bd35e8  str s0,[x19, #0x60]
7102bd35ec  ldr x8,[x8, #0x338]
7102bd35f0  ldr x8,[x8]
7102bd35f4  ldr x0,[x8, #0x8]
7102bd35f8  add x20,x19,#0x60
7102bd35fc  cbz x0,0x7102bd3cd0
7102bd3600  ldr x8,[x0]
7102bd3604  ldr w2,[x19, #0xc0]
7102bd3608  mov w1,#0x1d
7102bd360c  ldr x8,[x8, #0x58]
7102bd3610  blr x8
7102bd3614  b 0x7102bd3cd0
7102bd3618  ldr w9,[x19, #0x54]
7102bd361c  ldrb w8,[x19, #0x58]
7102bd3620  cmp w9,#0x1
7102bd3624  b.ne 0x7102bd3bfc
7102bd3628  cbnz w8,0x7102bd3f7c
7102bd362c  b 0x7102bd3dfc
7102bd3630  ldrb w8,[x19, #0x58]
7102bd3634  cbz w8,0x7102bd3e0c
7102bd3638  mov x21,x19
7102bd363c  ldr x8,[x21, #0x10]!
7102bd3640  strb wzr,[x21, #0x48]
7102bd3644  cbz x8,0x7102bd3684
7102bd3648  ldr x0,[x8, #0xd8]
7102bd364c  adrp x8,0x7104473000
7102bd3650  ldr s0,[x8, #0x15c]
7102bd3654  mov w1,#0x1
7102bd3658  bl 0x71025ee450
7102bd365c  ldr x8,[x21]
7102bd3660  cbz x8,0x7102bd3684
7102bd3664  ldr x9,[x8, #0xd8]
7102bd3668  cbz x9,0x7102bd3678
7102bd366c  strb wzr,[x9, #0x21]
7102bd3670  ldr x8,[x21]
7102bd3674  cbz x8,0x7102bd3684
7102bd3678  ldr x8,[x8, #0xd8]
7102bd367c  cbz x8,0x7102bd3684
7102bd3680  str s8,[x8, #0x24]
7102bd3684  ldr x9,[x19, #0xc8]
7102bd3688  ldp x8,x9,[x9]
7102bd368c  cmp x8,x9
7102bd3690  b.eq 0x7102bd3708
7102bd3694  ldr x11,[x8]
7102bd3698  ldrb w10,[x11, #0x20]
7102bd369c  cbz w10,0x7102bd36fc
7102bd36a0  ldp x13,x10,[x11, #0x8]
7102bd36a4  ldr x12,[x11]
7102bd36a8  strb wzr,[x11, #0x20]
7102bd36ac  str x12,[x13]
7102bd36b0  str x13,[x12, #0x8]
7102bd36b4  ldr x12,[x10, #0x18]
7102bd36b8  sub x12,x12,#0x1
7102bd36bc  str x12,[x10, #0x18]
7102bd36c0  stp xzr,xzr,[x11]
7102bd36c4  ldr x13,[x10, #0x40]
7102bd36c8  add x12,x10,#0x38
7102bd36cc  stp x12,x13,[x11]
7102bd36d0  str x11,[x10, #0x40]
7102bd36d4  str x11,[x13]
7102bd36d8  ldr x12,[x10, #0x30]
7102bd36dc  add x12,x12,#0x1
7102bd36e0  str x12,[x10, #0x30]
7102bd36e4  ldr x11,[x11, #0x18]
7102bd36e8  cbz x11,0x7102bd36f0
7102bd36ec  ldr w11,[x11, #0x110]
7102bd36f0  ldr w12,[x10, #0x48]
7102bd36f4  sub w11,w12,w11
7102bd36f8  str w11,[x10, #0x48]
7102bd36fc  add x8,x8,#0x8
7102bd3700  cmp x9,x8
7102bd3704  b.ne 0x7102bd3694
7102bd3708  ldr x8,[x19, #0x70]
7102bd370c  ldp x0,x1,[x8]
7102bd3710  mov w2,#0x1
7102bd3714  bl 0x71025f4d80
7102bd3718  ldr x8,[x19, #0x78]
7102bd371c  ldp x0,x1,[x8]
7102bd3720  mov w2,#0x1
7102bd3724  bl 0x71025f4d80
7102bd3728  add x22,x19,#0x80
7102bd372c  add x23,x19,#0xc0
7102bd3730  adrp x24,0x71052b9000
7102bd3734  orr w25,wzr,#0x18
7102bd3738  ldr x8,[x22]
7102bd373c  cbz x8,0x7102bd3868
7102bd3740  mov x9,x8
7102bd3744  ldr x10,[x9, #0x8]!
7102bd3748  mov x11,x10
7102bd374c  ldr x12,[x11, #0x98]!
7102bd3750  cmp x11,x12
7102bd3754  b.eq 0x7102bd3774
7102bd3758  strb wzr,[x12, #0x44]
7102bd375c  ldr x12,[x12]
7102bd3760  cmp x11,x12
7102bd3764  b.ne 0x7102bd3758
7102bd3768  ldr x8,[x22]
7102bd376c  mov x9,x8
7102bd3770  ldr x10,[x9, #0x8]!
7102bd3774  ldrb w12,[x8, #0x12b]
7102bd3778  add x11,x8,#0x12b
7102bd377c  strb wzr,[x8, #0x128]
7102bd3780  strb w12,[x8, #0x130]
7102bd3784  str wzr,[x11]
7102bd3788  ldr x11,[x8, #0x100]
7102bd378c  ldp x12,x13,[x8, #0x88]
7102bd3790  strb wzr,[x8, #0x12f]
7102bd3794  stp x11,x11,[x8, #0x88]
7102bd3798  ldr x11,[x8, #0xb8]
7102bd379c  stp x12,x13,[x8, #0x100]
7102bd37a0  ldr x12,[x8, #0x110]
7102bd37a4  ldp x13,x14,[x8, #0x98]
7102bd37a8  str x11,[x8, #0xc0]
7102bd37ac  ldr x11,[x8, #0xd0]
7102bd37b0  str x11,[x8, #0xd8]
7102bd37b4  ldr x11,[x8, #0xe8]
7102bd37b8  str x13,[x8, #0x110]
7102bd37bc  str x12,[x8, #0x98]
7102bd37c0  str x14,[x8, #0xa8]
7102bd37c4  str x11,[x8, #0xf0]
7102bd37c8  cbz x10,0x7102bd3868
7102bd37cc  str xzr,[x10, #0xd8]
7102bd37d0  ldr x20,[x9]
7102bd37d4  ldrb w8,[x20, #0xe0]
7102bd37d8  cbz w8,0x7102bd3868
7102bd37dc  mov x26,x20
7102bd37e0  ldr x27,[x26, #0x80]!
7102bd37e4  strh wzr,[x26, #0x60]
7102bd37e8  sturh wzr,[x26, #0x67]
7102bd37ec  cmp x26,x27
7102bd37f0  b.eq 0x7102bd383c
7102bd37f4  ldr w1,[x27, #0xfc]
7102bd37f8  strb wzr,[x27, #0x100]
7102bd37fc  cbz w1,0x7102bd3824
7102bd3800  ldr x8,[x27, #0xf0]
7102bd3804  ldr x9,[x8]
7102bd3808  madd x9,x1,x25,x9
7102bd380c  strb wzr,[x9, #0x10]
7102bd3810  ldr x0,[x8, #0x18]
7102bd3814  ldr x8,[x0]
7102bd3818  ldr x8,[x8, #0x18]
7102bd381c  mov w2,wzr
7102bd3820  blr x8
7102bd3824  str wzr,[x27, #0x80]
7102bd3828  stp xzr,xzr,[x27, #0x70]
7102bd382c  stp xzr,xzr,[x27, #0x60]
7102bd3830  ldr x27,[x27]
7102bd3834  cmp x26,x27
7102bd3838  b.ne 0x7102bd37f4
7102bd383c  mov x8,x20
7102bd3840  ldr x9,[x8, #0x68]!
7102bd3844  cmp x8,x9
7102bd3848  b.eq 0x7102bd385c
7102bd384c  strb wzr,[x9, #0x50]
7102bd3850  ldr x9,[x9]
7102bd3854  cmp x8,x9
7102bd3858  b.ne 0x7102bd384c
7102bd385c  ldr x0,[x24, #0x298]
7102bd3860  mov x1,x20
7102bd3864  bl 0x7100525010
7102bd3868  add x22,x22,#0x8
7102bd386c  cmp x22,x23
7102bd3870  b.ne 0x7102bd3738
7102bd3874  ldr x8,[x19]
7102bd3878  ldr x8,[x8, #0x338]
7102bd387c  ldr x8,[x8]
7102bd3880  ldr x0,[x8, #0x8]
7102bd3884  cbz x0,0x7102bd389c
7102bd3888  ldr x8,[x0]
7102bd388c  ldr w2,[x19, #0xc0]
7102bd3890  mov w1,#0x1d
7102bd3894  ldr x8,[x8, #0x58]
7102bd3898  blr x8
7102bd389c  ldr q0,[x19, #0x40]
7102bd38a0  movi v1.2D,#0x0
7102bd38a4  ext v0.16B,v1.16B,v0.16B,0x8
7102bd38a8  ldr x8,[x19, #0xe8]
7102bd38ac  ext v0.16B,v0.16B,v0.16B,0x8
7102bd38b0  str q0,[x19, #0x40]
7102bd38b4  cbz x8,0x7102bd3920
7102bd38b8  ldrb w9,[x8, #0x35]
7102bd38bc  cbz w9,0x7102bd3920
7102bd38c0  ldr w22,[x8, #0x3c]
7102bd38c4  adrp x8,0x7105334000
7102bd38c8  ldr x8,[x8, #0x920]
7102bd38cc  ldr x23,[x8]
7102bd38d0  mov w8,#0x9498
7102bd38d4  movk w8,#0x1, LSL #16
7102bd38d8  add x20,x23,x8
7102bd38dc  mov x0,x20
7102bd38e0  bl 0x71039c19c0
7102bd38e4  cmp w22,#0x1
7102bd38e8  b.lt 0x7102bd3918
7102bd38ec  lsr x8,x22,#0x18
7102bd38f0  orr w9,wzr,#0x300
7102bd38f4  madd x0,x8,x9,x23
7102bd38f8  cbz x0,0x7102bd3918
7102bd38fc  ldr w8,[x0, #0x4]
7102bd3900  cmp w8,w22
7102bd3904  b.ne 0x7102bd3918
7102bd3908  mov w1,wzr
7102bd390c  mov w2,wzr
7102bd3910  mov w3,wzr
7102bd3914  bl 0x71035707d0
7102bd3918  mov x0,x20
7102bd391c  bl 0x71039c19d0
7102bd3920  ldr x8,[x19, #0x100]
7102bd3924  cbz x8,0x7102bd3990
7102bd3928  ldrb w9,[x8, #0x35]
7102bd392c  cbz w9,0x7102bd3990
7102bd3930  ldr w22,[x8, #0x3c]
7102bd3934  adrp x8,0x7105334000
7102bd3938  ldr x8,[x8, #0x920]
7102bd393c  ldr x23,[x8]
7102bd3940  mov w8,#0x9498
7102bd3944  movk w8,#0x1, LSL #16
7102bd3948  add x20,x23,x8
7102bd394c  mov x0,x20
7102bd3950  bl 0x71039c19c0
7102bd3954  cmp w22,#0x1
7102bd3958  b.lt 0x7102bd3988
7102bd395c  lsr x8,x22,#0x18
7102bd3960  orr w9,wzr,#0x300
7102bd3964  madd x0,x8,x9,x23
7102bd3968  cbz x0,0x7102bd3988
7102bd396c  ldr w8,[x0, #0x4]
7102bd3970  cmp w8,w22
7102bd3974  b.ne 0x7102bd3988
7102bd3978  mov w1,wzr
7102bd397c  mov w2,wzr
7102bd3980  mov w3,wzr
7102bd3984  bl 0x71035707d0
7102bd3988  mov x0,x20
7102bd398c  bl 0x71039c19d0
7102bd3990  ldr x8,[x19, #0x118]
7102bd3994  cbz x8,0x7102bd3a00
7102bd3998  ldrb w9,[x8, #0x35]
7102bd399c  cbz w9,0x7102bd3a00
7102bd39a0  ldr w22,[x8, #0x3c]
7102bd39a4  adrp x8,0x7105334000
7102bd39a8  ldr x8,[x8, #0x920]
7102bd39ac  ldr x23,[x8]
7102bd39b0  mov w8,#0x9498
7102bd39b4  movk w8,#0x1, LSL #16
7102bd39b8  add x20,x23,x8
7102bd39bc  mov x0,x20
7102bd39c0  bl 0x71039c19c0
7102bd39c4  cmp w22,#0x1
7102bd39c8  b.lt 0x7102bd39f8
7102bd39cc  lsr x8,x22,#0x18
7102bd39d0  orr w9,wzr,#0x300
7102bd39d4  madd x0,x8,x9,x23
7102bd39d8  cbz x0,0x7102bd39f8
7102bd39dc  ldr w8,[x0, #0x4]
7102bd39e0  cmp w8,w22
7102bd39e4  b.ne 0x7102bd39f8
7102bd39e8  mov w1,wzr
7102bd39ec  mov w2,wzr
7102bd39f0  mov w3,wzr
7102bd39f4  bl 0x71035707d0
7102bd39f8  mov x0,x20
7102bd39fc  bl 0x71039c19d0
7102bd3a00  ldr x8,[x19, #0x130]
7102bd3a04  cbz x8,0x7102bd3a70
7102bd3a08  ldrb w9,[x8, #0x35]
7102bd3a0c  cbz w9,0x7102bd3a70
7102bd3a10  ldr w22,[x8, #0x3c]
7102bd3a14  adrp x8,0x7105334000
7102bd3a18  ldr x8,[x8, #0x920]
7102bd3a1c  ldr x23,[x8]
7102bd3a20  mov w8,#0x9498
7102bd3a24  movk w8,#0x1, LSL #16
7102bd3a28  add x20,x23,x8
7102bd3a2c  mov x0,x20
7102bd3a30  bl 0x71039c19c0
7102bd3a34  cmp w22,#0x1
7102bd3a38  b.lt 0x7102bd3a68
7102bd3a3c  lsr x8,x22,#0x18
7102bd3a40  orr w9,wzr,#0x300
7102bd3a44  madd x0,x8,x9,x23
7102bd3a48  cbz x0,0x7102bd3a68
7102bd3a4c  ldr w8,[x0, #0x4]
7102bd3a50  cmp w8,w22
7102bd3a54  b.ne 0x7102bd3a68
7102bd3a58  mov w1,wzr
7102bd3a5c  mov w2,wzr
7102bd3a60  mov w3,wzr
7102bd3a64  bl 0x71035707d0
7102bd3a68  mov x0,x20
7102bd3a6c  bl 0x71039c19d0
7102bd3a70  ldrb w8,[x19, #0x149]
7102bd3a74  cbz w8,0x7102bd3ac0
7102bd3a78  ldrsw x9,[x19, #0x14c]
7102bd3a7c  cmp w9,#0x37
7102bd3a80  b.hi 0x7102bd3ab4
7102bd3a84  adrp x8,0x71052b6000
7102bd3a88  ldr x8,[x8, #0xfd8]
7102bd3a8c  ldr x8,[x8]
7102bd3a90  ldr x8,[x8, #0xc0]
7102bd3a94  add x9,x8,x9
7102bd3a98  ldrb w10,[x9, #0x464]
7102bd3a9c  cbz w10,0x7102bd3ab4
7102bd3aa0  add x9,x9,#0x464
7102bd3aa4  strb wzr,[x9]
7102bd3aa8  ldr w9,[x8]
7102bd3aac  sub w9,w9,#0x1
7102bd3ab0  str w9,[x8]
7102bd3ab4  mov w8,#0xffffffff
7102bd3ab8  str w8,[x19, #0x14c]
7102bd3abc  strb wzr,[x19, #0x149]
7102bd3ac0  strb wzr,[x19, #0x14a]
7102bd3ac4  ldr x8,[x21]
7102bd3ac8  cbz x8,0x7102bd3f7c
7102bd3acc  ldr x9,[x8, #0xd8]
7102bd3ad0  cbz x9,0x7102bd3ae0
7102bd3ad4  str s8,[x9, #0x24]
7102bd3ad8  ldr x8,[x21]
7102bd3adc  cbz x8,0x7102bd3f7c
7102bd3ae0  ldr x0,[x8, #0xd8]
7102bd3ae4  cbz x0,0x7102bd3f7c
7102bd3ae8  adrp x8,0x7104472000
7102bd3aec  ldr s1,[x0, #0x10]
7102bd3af0  ldr s0,[x8, #0x458]
7102bd3af4  fcmp s1,s0
7102bd3af8  b.lt 0x7102bd3f7c
7102bd3afc  mov w1,#0x1
7102bd3b00  mov w20,#0x1
7102bd3b04  bl 0x71025ee450
7102bd3b08  ldr x8,[x21]
7102bd3b0c  cbz x8,0x7102bd3b5c
7102bd3b10  add x0,x8,#0x108
7102bd3b14  strb wzr,[x8, #0x110]
7102bd3b18  bl 0x71025e9d50
7102bd3b1c  ldr x8,[x21]
7102bd3b20  cbz x8,0x7102bd3b5c
7102bd3b24  ldrb w9,[x8, #0xe0]
7102bd3b28  cbz w9,0x7102bd3b3c
7102bd3b2c  ldr x9,[x8, #0xc8]
7102bd3b30  cbz x9,0x7102bd3b3c
7102bd3b34  mov w10,#0x101
7102bd3b38  strh w10,[x9, #0x30]
7102bd3b3c  ldr x9,[x8, #0xd8]
7102bd3b40  cbz x9,0x7102bd3b4c
7102bd3b44  mov w10,#0x1
7102bd3b48  strb w10,[x9, #0x21]
7102bd3b4c  ldrb w9,[x8, #0xe0]
7102bd3b50  cbz w9,0x7102bd3b5c
7102bd3b54  ldr x8,[x8, #0xb0]
7102bd3b58  strb wzr,[x8, #0x10]
7102bd3b5c  mov w8,#0x2
7102bd3b60  strb wzr,[x19, #0x5a]
7102bd3b64  strb w20,[x19, #0x58]
7102bd3b68  str w8,[x19, #0x50]
7102bd3b6c  b 0x7102bd3f7c
7102bd3b70  ldrb w8,[x19, #0x58]
7102bd3b74  cbz w8,0x7102bd3e1c
7102bd3b78  ldr q0,[x19, #0x40]
7102bd3b7c  dup s1,v0.S[0x2]
7102bd3b80  adrp x8,0x7104472000
7102bd3b84  ldr s2,[x8, #0x58c]
7102bd3b88  fcmp s1,s2
7102bd3b8c  strb wzr,[x19, #0x58]
7102bd3b90  b.lt 0x7102bd3bb0
7102bd3b94  adrp x8,0x7104473000
7102bd3b98  ldr s3,[x8, #0x948]
7102bd3b9c  fadd s1,s1,s3
7102bd3ba0  fmov s3,wzr
7102bd3ba4  mov v0.S[0x2],v1.S[0x0]
7102bd3ba8  mov v0.S[0x3],v3.S[0x0]
7102bd3bac  str q0,[x19, #0x40]
7102bd3bb0  fcmp s1,#0.0
7102bd3bb4  b.hi 0x7102bd3bcc
7102bd3bb8  fadd s1,s1,s2
7102bd3bbc  fmov s2,wzr
7102bd3bc0  mov v0.S[0x2],v1.S[0x0]
7102bd3bc4  mov v0.S[0x3],v2.S[0x0]
7102bd3bc8  str q0,[x19, #0x40]
7102bd3bcc  adrp x8,0x7104472000
7102bd3bd0  ldr s2,[x8, #0xfbc]
7102bd3bd4  fcmp s1,s2
7102bd3bd8  b.pl 0x7102bd3e54
7102bd3bdc  fsub s1,s1,s8
7102bd3be0  mov v0.S[0x2],v1.S[0x0]
7102bd3be4  fmov s2,wzr
7102bd3be8  mov v0.S[0x3],v2.S[0x0]
7102bd3bec  mov w8,#0xbf800000
7102bd3bf0  str w8,[x19, #0x5c]
7102bd3bf4  str q0,[x19, #0x40]
7102bd3bf8  b 0x7102bd3e48
7102bd3bfc  cbz w8,0x7102bd3dfc
7102bd3c00  mov x20,x19
7102bd3c04  ldr x8,[x20, #0x10]!
7102bd3c08  strb wzr,[x20, #0x48]
7102bd3c0c  cbz x8,0x7102bd5de0
7102bd3c10  ldrb w9,[x8, #0xe0]
7102bd3c14  cbz w9,0x7102bd3c2c
7102bd3c18  ldr x9,[x8, #0xc8]
7102bd3c1c  cbz x9,0x7102bd3c2c
7102bd3c20  strh wzr,[x9, #0x30]
7102bd3c24  ldr x8,[x20]
7102bd3c28  cbz x8,0x7102bd5de0
7102bd3c2c  ldrb w9,[x8, #0xe0]
7102bd3c30  cbz w9,0x7102bd5de0
7102bd3c34  ldr x21,[x8, #0xc8]
7102bd3c38  cbz x21,0x7102bd5de0
7102bd3c3c  ldp x22,x23,[x21, #0x18]
7102bd3c40  cmp x22,x23
7102bd3c44  str wzr,[x21, #0x3c]
7102bd3c48  b.eq 0x7102bd5ddc
7102bd3c4c  fmov s9,wzr
7102bd3c50  ldr x0,[x22], #0x8
7102bd3c54  ldr x8,[x0]
7102bd3c58  ldr x8,[x8, #0x18]
7102bd3c5c  mov v0.16B,v9.16B
7102bd3c60  mov w1,wzr
7102bd3c64  blr x8
7102bd3c68  cmp x23,x22
7102bd3c6c  b.ne 0x7102bd3c50
7102bd3c70  ldp x22,x23,[x21, #0x18]
7102bd3c74  cmp x22,x23
7102bd3c78  str wzr,[x21, #0x40]
7102bd3c7c  b.eq 0x7102bd5de0
7102bd3c80  fmov s9,wzr
7102bd3c84  ldr x0,[x22], #0x8
7102bd3c88  ldr x8,[x0]
7102bd3c8c  ldr x8,[x8, #0x18]
7102bd3c90  mov v0.16B,v9.16B
7102bd3c94  mov w1,#0x1
7102bd3c98  blr x8
7102bd3c9c  cmp x23,x22
7102bd3ca0  b.ne 0x7102bd3c84
7102bd3ca4  ldp x22,x21,[x21, #0x18]
7102bd3ca8  cmp x22,x21
7102bd3cac  b.eq 0x7102bd5de0
7102bd3cb0  ldr x0,[x22], #0x8
7102bd3cb4  ldr x8,[x0]
7102bd3cb8  ldr x8,[x8, #0x38]
7102bd3cbc  blr x8
7102bd3cc0  cmp x21,x22
7102bd3cc4  b.ne 0x7102bd3cb0
7102bd3cc8  b 0x7102bd5de0
7102bd3ccc  add x20,x19,#0x60
7102bd3cd0  ldr s0,[x20]
7102bd3cd4  fsub s0,s0,s8
7102bd3cd8  fcmp s0,#0.0
7102bd3cdc  str s0,[x20]
7102bd3ce0  b.hi 0x7102bd3f7c
7102bd3ce4  mov w8,#0x1
7102bd3ce8  str w8,[x19, #0x50]
7102bd3cec  b 0x7102bd3f78
7102bd3cf0  add x20,x19,#0x10
7102bd3cf4  ldr x8,[x20]
7102bd3cf8  cbz x8,0x7102bd3f7c
7102bd3cfc  ldr x9,[x8, #0xd8]
7102bd3d00  cbz x9,0x7102bd3d10
7102bd3d04  str s8,[x9, #0x24]
7102bd3d08  ldr x8,[x20]
7102bd3d0c  cbz x8,0x7102bd3f7c
7102bd3d10  ldr x0,[x8, #0xd8]
7102bd3d14  cbz x0,0x7102bd3f7c
7102bd3d18  adrp x8,0x7104472000
7102bd3d1c  ldr s0,[x0, #0x10]
7102bd3d20  ldr s1,[x8, #0xdd4]
7102bd3d24  fcmp s0,s1
7102bd3d28  b.lt 0x7102bd3f7c
7102bd3d2c  adrp x8,0x7104472000
7102bd3d30  ldr s0,[x8, #0xc40]
7102bd3d34  mov w1,#0x1
7102bd3d38  mov w21,#0x1
7102bd3d3c  bl 0x71025ee450
7102bd3d40  ldr x8,[x20]
7102bd3d44  cbz x8,0x7102bd3d58
7102bd3d48  ldr x8,[x8, #0xd8]
7102bd3d4c  cbz x8,0x7102bd3d58
7102bd3d50  mov w9,#0x1
7102bd3d54  strb w9,[x8, #0x21]
7102bd3d58  mov w8,#0x2
7102bd3d5c  str w8,[x19, #0x50]
7102bd3d60  ldr x8,[x19, #0xc8]
7102bd3d64  strb w21,[x19, #0x5a]
7102bd3d68  strb w21,[x19, #0x58]
7102bd3d6c  ldp x1,x8,[x8]
7102bd3d70  cmp x1,x8
7102bd3d74  b.eq 0x7102bd577c
7102bd3d78  mov w9,#0x1
7102bd3d7c  ldr x11,[x1]
7102bd3d80  ldrb w10,[x11, #0x20]
7102bd3d84  cbnz w10,0x7102bd3de4
7102bd3d88  ldp x13,x10,[x11, #0x8]
7102bd3d8c  ldr x12,[x11]
7102bd3d90  strb w9,[x11, #0x20]
7102bd3d94  str x12,[x13]
7102bd3d98  str x13,[x12, #0x8]
7102bd3d9c  ldr x12,[x10, #0x30]
7102bd3da0  sub x12,x12,#0x1
7102bd3da4  str x12,[x10, #0x30]
7102bd3da8  stp xzr,xzr,[x11]
7102bd3dac  ldr x13,[x10, #0x28]
7102bd3db0  add x12,x10,#0x20
7102bd3db4  stp x12,x13,[x11]
7102bd3db8  str x11,[x10, #0x28]
7102bd3dbc  str x11,[x13]
7102bd3dc0  ldr x12,[x10, #0x18]
7102bd3dc4  add x12,x12,#0x1
7102bd3dc8  str x12,[x10, #0x18]
7102bd3dcc  ldr x11,[x11, #0x18]
7102bd3dd0  cbz x11,0x7102bd3dd8
7102bd3dd4  ldr w11,[x11, #0x110]
7102bd3dd8  ldr w12,[x10, #0x48]
7102bd3ddc  add w11,w12,w11
7102bd3de0  str w11,[x10, #0x48]
7102bd3de4  add x1,x1,#0x8
7102bd3de8  cmp x8,x1
7102bd3dec  b.ne 0x7102bd3d7c
7102bd3df0  ldr x8,[x19, #0xc8]
7102bd3df4  ldp x0,x1,[x8]
7102bd3df8  b 0x7102bd5780
7102bd3dfc  add x20,x19,#0x10
7102bd3e00  ldr x8,[x20]
7102bd3e04  cbnz x8,0x7102bd5e14
7102bd3e08  b 0x7102bd3f7c
7102bd3e0c  add x21,x19,#0x10
7102bd3e10  ldr x8,[x21]
7102bd3e14  cbnz x8,0x7102bd3acc
7102bd3e18  b 0x7102bd3f7c
7102bd3e1c  ldr q0,[x19, #0x40]
7102bd3e20  ldr s2,[x19, #0x5c]
7102bd3e24  fmul s3,s2,s8
7102bd3e28  dup s1,v0.S[0x2]
7102bd3e2c  fadd s1,s1,s3
7102bd3e30  fmov s3,wzr
7102bd3e34  mov v0.S[0x2],v1.S[0x0]
7102bd3e38  mov v0.S[0x3],v3.S[0x0]
7102bd3e3c  fcmp s2,#0.0
7102bd3e40  str q0,[x19, #0x40]
7102bd3e44  b.gt 0x7102bd3e70
7102bd3e48  fcmp s1,#0.0
7102bd3e4c  b.ls 0x7102bd3e80
7102bd3e50  b 0x7102bd3f7c
7102bd3e54  fadd s1,s1,s8
7102bd3e58  mov v0.S[0x2],v1.S[0x0]
7102bd3e5c  fmov s2,wzr
7102bd3e60  mov v0.S[0x3],v2.S[0x0]
7102bd3e64  orr w8,wzr,#0x3f800000
7102bd3e68  str w8,[x19, #0x5c]
7102bd3e6c  str q0,[x19, #0x40]
7102bd3e70  adrp x8,0x7104472000
7102bd3e74  ldr s2,[x8, #0x58c]
7102bd3e78  fcmp s1,s2
7102bd3e7c  b.lt 0x7102bd3f7c
7102bd3e80  movi v1.2D,#0x0
7102bd3e84  mov w8,#0x2
7102bd3e88  str wzr,[x19, #0x5c]
7102bd3e8c  b 0x7102bd3f64
7102bd3e90  cbz w8,0x7102bd3ec0
7102bd3e94  ldr x8,[x19, #0xc8]
7102bd3e98  strb wzr,[x19, #0xd0]
7102bd3e9c  adrp x2,0x7104420000
7102bd3ea0  add x2,x2,#0x6ff
7102bd3ea4  ldp x0,x1,[x8]
7102bd3ea8  bl 0x71025f55b0
7102bd3eac  ldr x8,[x19, #0xc8]
7102bd3eb0  ldp x0,x1,[x8]
7102bd3eb4  adrp x2,0x710439b000
7102bd3eb8  add x2,x2,#0x555
7102bd3ebc  bl 0x71025f55b0
7102bd3ec0  adrp x8,0x7104472000
7102bd3ec4  ldr s0,[x8, #0xfbc]
7102bd3ec8  ldrb w8,[x19, #0xd1]
7102bd3ecc  fsub s1,s0,s11
7102bd3ed0  fadd s0,s11,s0
7102bd3ed4  fcmp s1,s10
7102bd3ed8  fccmp s10,s0,#0x0,mi
7102bd3edc  b.mi 0x7102bd3f14
7102bd3ee0  cbz w8,0x7102bd3f48
7102bd3ee4  ldr x8,[x19, #0xc8]
7102bd3ee8  ldp x0,x1,[x8]
7102bd3eec  adrp x2,0x71042a1000
7102bd3ef0  add x2,x2,#0x415
7102bd3ef4  bl 0x71025f55b0
7102bd3ef8  ldr x8,[x19, #0xc8]
7102bd3efc  ldp x0,x1,[x8]
7102bd3f00  adrp x2,0x7104410000
7102bd3f04  add x2,x2,#0xa5e
7102bd3f08  bl 0x71025f55b0
7102bd3f0c  strb wzr,[x19, #0xd1]
7102bd3f10  b 0x7102bd3f48
7102bd3f14  cbnz w8,0x7102bd3f48
7102bd3f18  ldr x8,[x19, #0xc8]
7102bd3f1c  ldp x0,x1,[x8]
7102bd3f20  adrp x2,0x71042a1000
7102bd3f24  add x2,x2,#0x415
7102bd3f28  bl 0x71025f5420
7102bd3f2c  ldr x8,[x19, #0xc8]
7102bd3f30  ldp x0,x1,[x8]
7102bd3f34  adrp x2,0x7104410000
7102bd3f38  add x2,x2,#0xa5e
7102bd3f3c  bl 0x71025f5420
7102bd3f40  mov w8,#0x1
7102bd3f44  strb w8,[x19, #0xd1]
7102bd3f48  ldr q0,[x19, #0x40]
7102bd3f4c  dup s1,v0.S[0x2]
7102bd3f50  fabs s1,s1
7102bd3f54  fcmp s1,s9
7102bd3f58  b.lt 0x7102bd3f7c
7102bd3f5c  movi v1.2D,#0x0
7102bd3f60  mov w8,#0x4
7102bd3f64  ext v0.16B,v1.16B,v0.16B,0x8
7102bd3f68  ext v0.16B,v0.16B,v0.16B,0x8
7102bd3f6c  str q0,[x19, #0x40]
7102bd3f70  str w8,[x19, #0x50]
7102bd3f74  mov w8,#0x1
7102bd3f78  strb w8,[x19, #0x58]
7102bd3f7c  ldr w8,[x19, #0x54]
7102bd3f80  cmp w8,#0x3
7102bd3f84  b.eq 0x7102bd419c
7102bd3f88  cmp w8,#0x2
7102bd3f8c  b.eq 0x7102bd3fb0
7102bd3f90  cmp w8,#0x1
7102bd3f94  b.ne 0x7102bd5da4
7102bd3f98  ldr w9,[x19, #0x50]
7102bd3f9c  ldrb w8,[x19, #0x59]
7102bd3fa0  cmp w9,#0x1
7102bd3fa4  b.ne 0x7102bd45a8
7102bd3fa8  cbnz w8,0x7102bd5da4
7102bd3fac  b 0x7102bd4884
7102bd3fb0  ldrb w8,[x19, #0x59]
7102bd3fb4  cbz w8,0x7102bd4040
7102bd3fb8  ldr x8,[x19, #0x10]
7102bd3fbc  strb wzr,[x19, #0x59]
7102bd3fc0  strb wzr,[x19, #0x68]
7102bd3fc4  cbz x8,0x7102bd3fec
7102bd3fc8  ldr x0,[x8, #0xd8]
7102bd3fcc  fmov s0,wzr
7102bd3fd0  mov w1,#0x1
7102bd3fd4  bl 0x71025ee450
7102bd3fd8  ldr x8,[x19, #0x10]
7102bd3fdc  cbz x8,0x7102bd3fec
7102bd3fe0  ldr x8,[x8, #0xd8]
7102bd3fe4  cbz x8,0x7102bd3fec
7102bd3fe8  strb wzr,[x8, #0x21]
7102bd3fec  ldr x8,[x19, #0x70]
7102bd3ff0  ldp x20,x21,[x8]
7102bd3ff4  cmp x20,x21
7102bd3ff8  b.eq 0x7102bd4030
7102bd3ffc  mov w22,#0x1
7102bd4000  mov x23,#-0x1
7102bd4004  ldr x8,[x20]
7102bd4008  ldr x9,[x8, #0x8]
7102bd400c  strb w22,[x8, #0x128]
7102bd4010  cbz x9,0x7102bd4024
7102bd4014  str x23,[x9, #0xd8]
7102bd4018  ldr x0,[x8, #0x8]
7102bd401c  mov w1,wzr
7102bd4020  bl 0x7100532bc0
7102bd4024  add x20,x20,#0x8
7102bd4028  cmp x21,x20
7102bd402c  b.ne 0x7102bd4004
7102bd4030  ldr x8,[x19, #0x78]
7102bd4034  ldp x0,x1,[x8]
7102bd4038  mov w2,#0x1
7102bd403c  bl 0x71025f4d80
7102bd4040  adrp x8,0x71052b9000
7102bd4044  ldr x8,[x8, #0x4f8]
7102bd4048  ldr x9,[x8]
7102bd404c  ldr w10,[x9, #0xa0]
7102bd4050  cmp w10,#0x1
7102bd4054  b.lt 0x7102bd483c
7102bd4058  ldr x12,[x9, #0x20]
7102bd405c  mov w8,wzr
7102bd4060  mov w11,wzr
7102bd4064  orr x13,xzr,#-0x100000000
7102bd4068  orr x14,xzr,#0x700000000
7102bd406c  mov x15,#0x500000000
7102bd4070  mov w16,w11
7102bd4074  cbz x12,0x7102bd4080
7102bd4078  cbz w11,0x7102bd40fc
7102bd407c  sub w16,w11,#0x1
7102bd4080  ldr x17,[x9, #0x28]
7102bd4084  cbz x17,0x7102bd4090
7102bd4088  cbz w16,0x7102bd4104
7102bd408c  sub w16,w16,#0x1
7102bd4090  ldr x17,[x9, #0x30]
7102bd4094  cbz x17,0x7102bd40a0
7102bd4098  cbz w16,0x7102bd410c
7102bd409c  sub w16,w16,#0x1
7102bd40a0  ldr x17,[x9, #0x38]
7102bd40a4  cbz x17,0x7102bd40b0
7102bd40a8  cbz w16,0x7102bd4114
7102bd40ac  sub w16,w16,#0x1
7102bd40b0  ldr x17,[x9, #0x40]
7102bd40b4  cbz x17,0x7102bd40c0
7102bd40b8  cbz w16,0x7102bd411c
7102bd40bc  sub w16,w16,#0x1
7102bd40c0  ldr x17,[x9, #0x48]
7102bd40c4  cbz x17,0x7102bd40d0
7102bd40c8  cbz w16,0x7102bd4124
7102bd40cc  sub w16,w16,#0x1
7102bd40d0  ldr x17,[x9, #0x50]
7102bd40d4  cbz x17,0x7102bd40e0
7102bd40d8  cbz w16,0x7102bd412c
7102bd40dc  sub w16,w16,#0x1
7102bd40e0  ldr x18,[x9, #0x58]
7102bd40e4  cmp x18,#0x0
7102bd40e8  ccmp w16,#0x0,#0x0,ne
7102bd40ec  csel x17,x14,x13,eq
7102bd40f0  cbnz w16,0x7102bd6428
7102bd40f4  cbnz x18,0x7102bd4130
7102bd40f8  b 0x7102bd6428
7102bd40fc  mov x17,xzr
7102bd4100  b 0x7102bd4130
7102bd4104  orr x17,xzr,#0x100000000
7102bd4108  b 0x7102bd4130
7102bd410c  orr x17,xzr,#0x200000000
7102bd4110  b 0x7102bd4130
7102bd4114  orr x17,xzr,#0x300000000
7102bd4118  b 0x7102bd4130
7102bd411c  orr x17,xzr,#0x400000000
7102bd4120  b 0x7102bd4130
7102bd4124  mov x17,x15
7102bd4128  b 0x7102bd4130
7102bd412c  orr x17,xzr,#0x600000000
7102bd4130  add x16,x9,x17, ASR #0x1d
7102bd4134  ldr x16,[x16, #0x20]
7102bd4138  ldr w16,[x16, #0x18]
7102bd413c  cmp w16,#0x4d
7102bd4140  cset w17,eq
7102bd4144  add w11,w11,#0x1
7102bd4148  cmp w11,w10
7102bd414c  orr w8,w8,w17
7102bd4150  b.ge 0x7102bd415c
7102bd4154  cmp w16,#0x4d
7102bd4158  b.ne 0x7102bd4070
7102bd415c  mov x22,x19
7102bd4160  ldr x9,[x22, #0x10]!
7102bd4164  cbz x9,0x7102bd4944
7102bd4168  ldrb w10,[x9, #0xe0]
7102bd416c  cbz w10,0x7102bd49cc
7102bd4170  ldr x10,[x9, #0xc8]
7102bd4174  cbz x10,0x7102bd4188
7102bd4178  ldrb w11,[x10, #0x30]
7102bd417c  cbz w11,0x7102bd4944
7102bd4180  ldrb w10,[x10, #0x31]
7102bd4184  cbz w10,0x7102bd49f4
7102bd4188  ldr x10,[x9, #0xb0]
7102bd418c  ldrb w10,[x10, #0x10]
7102bd4190  cmp w10,#0x0
7102bd4194  cset w11,eq
7102bd4198  b 0x7102bd49d0
7102bd419c  ldr s0,[x19, #0x64]
7102bd41a0  fcmp s0,#0.0
7102bd41a4  b.le 0x7102bd4554
7102bd41a8  fsub s0,s0,s8
7102bd41ac  str s0,[x19, #0x64]
7102bd41b0  ldr x8,[x19, #0x10]
7102bd41b4  cbz x8,0x7102bd5dac
7102bd41b8  ldrb w9,[x8, #0x110]
7102bd41bc  cbz w9,0x7102bd41e8
7102bd41c0  ldr w9,[x19, #0x50]
7102bd41c4  cmp w9,#0x5
7102bd41c8  b.ne 0x7102bd4220
7102bd41cc  cmp x8,#0x0
7102bd41d0  cset w9,eq
7102bd41d4  ldr x10,[x8, #0xd8]
7102bd41d8  cbnz x10,0x7102bd5138
7102bd41dc  tbnz w9,#0x0,0x7102bd5dac
7102bd41e0  fmov s0,wzr
7102bd41e4  b 0x7102bd5140
7102bd41e8  ldp d9,d8,[sp, #0x110]
7102bd41ec  add x0,x8,#0x60
7102bd41f0  ldp d11,d10,[sp, #0x100]
7102bd41f4  fmov s0,wzr
7102bd41f8  ldp d13,d12,[sp, #0xf0]
7102bd41fc  ldp d15,d14,[sp, #0xe0]
7102bd4200  ldp x29,x30,[sp, #0x170]
7102bd4204  ldp x20,x19,[sp, #0x160]
7102bd4208  ldp x22,x21,[sp, #0x150]
7102bd420c  ldp x24,x23,[sp, #0x140]
7102bd4210  ldp x26,x25,[sp, #0x130]
7102bd4214  ldp x28,x27,[sp, #0x120]
7102bd4218  add sp,sp,#0x180
7102bd421c  b 0x71025ee840
7102bd4220  adrp x8,0x7104472000
7102bd4224  ldr s0,[x19, #0x48]
7102bd4228  movi v3.4S,#0x3f, LSL #24
7102bd422c  ldr s1,[x8, #0x6e0]
7102bd4230  adrp x8,0x71052a4000
7102bd4234  ldr x8,[x8, #0x758]
7102bd4238  fmul s18,s0,s1
7102bd423c  movi v0.2D,#0x0
7102bd4240  ldr s1,[x8]
7102bd4244  mov v0.S[0x2],v18.S[0x0]
7102bd4248  movi v4.4S,#0xbf, LSL #24
7102bd424c  fmul v1.4S,v0.4S,v1.S[0x0]
7102bd4250  adrp x8,0x71052a4000
7102bd4254  fcmge v2.4S,v1.4S,#0.0
7102bd4258  ldr x8,[x8, #0x750]
7102bd425c  bsl v2.16B,v3.16B,v4.16B
7102bd4260  fmov s19,wzr
7102bd4264  fadd v1.4S,v1.4S,v2.4S
7102bd4268  ldr s2,[x8]
7102bd426c  fcvtzs v1.4S,v1.4S
7102bd4270  adrp x8,0x71052a4000
7102bd4274  scvtf v1.4S,v1.4S
7102bd4278  ldr x8,[x8, #0x760]
7102bd427c  fmls v0.4S,v1.4S,v2.S[0x0]
7102bd4280  ldr s2,[x8]
7102bd4284  adrp x8,0x71052a4000
7102bd4288  ldr x8,[x8, #0x338]
7102bd428c  ldr s4,[x8]
7102bd4290  dup v1.4S,v2.S[0x0]
7102bd4294  fneg s2,s2
7102bd4298  dup v2.4S,v2.S[0x0]
7102bd429c  adrp x8,0x71052a4000
7102bd42a0  fcmgt v3.4S,v0.4S,v1.4S
7102bd42a4  dup v1.4S,v4.S[0x0]
7102bd42a8  fneg s4,s4
7102bd42ac  fsub v1.4S,v1.4S,v0.4S
7102bd42b0  dup v4.4S,v4.S[0x0]
7102bd42b4  mov v5.16B,v3.16B
7102bd42b8  ldr x8,[x8, #0x740]
7102bd42bc  bsl v5.16B,v1.16B,v0.16B
7102bd42c0  fmov v0.4S,#0xbf800000
7102bd42c4  fcmgt v2.4S,v2.4S,v5.4S
7102bd42c8  fmov v1.4S,#0x3f800000
7102bd42cc  fsub v4.4S,v4.4S,v5.4S
7102bd42d0  mov v6.16B,v2.16B
7102bd42d4  bsl v3.16B,v0.16B,v1.16B
7102bd42d8  add x9,x8,#0x4
7102bd42dc  bsl v6.16B,v4.16B,v5.16B
7102bd42e0  ldr s4,[x8]
7102bd42e4  bsl v2.16B,v0.16B,v3.16B
7102bd42e8  ld1r {v0.4S},[x9]
7102bd42ec  add x9,x8,#0xc
7102bd42f0  fmul v3.4S,v6.4S,v6.4S
7102bd42f4  fmls v0.4S,v3.4S,v4.S[0x0]
7102bd42f8  ldr s4,[x8, #0x8]
7102bd42fc  fneg s4,s4
7102bd4300  dup v4.4S,v4.S[0x0]
7102bd4304  fmla v4.4S,v3.4S,v0.4S
7102bd4308  ld1r {v0.4S},[x9]
7102bd430c  fmla v0.4S,v3.4S,v4.4S
7102bd4310  ldr s4,[x8, #0x10]
7102bd4314  adrp x8,0x71052a4000
7102bd4318  ldr x8,[x8, #0x748]
7102bd431c  fneg s4,s4
7102bd4320  dup v4.4S,v4.S[0x0]
7102bd4324  str q18,[sp, #0x40]
7102bd4328  fmla v4.4S,v3.4S,v0.4S
7102bd432c  add x9,x8,#0x4
7102bd4330  mov v0.16B,v1.16B
7102bd4334  ld1r {v5.4S},[x9]
7102bd4338  add x9,x8,#0xc
7102bd433c  fmla v0.4S,v3.4S,v4.4S
7102bd4340  ldr s4,[x8]
7102bd4344  fmls v5.4S,v3.4S,v4.S[0x0]
7102bd4348  ldr s4,[x8, #0x8]
7102bd434c  fneg s4,s4
7102bd4350  dup v4.4S,v4.S[0x0]
7102bd4354  fmul v0.4S,v0.4S,v6.4S
7102bd4358  dup v7.2S,v0.S[0x1]
7102bd435c  ld1r {v6.4S},[x9]
7102bd4360  fmla v4.4S,v3.4S,v5.4S
7102bd4364  mov v16.16B,v7.16B
7102bd4368  mov v7.S[0x1],v0.S[0x1]
7102bd436c  mov v16.S[0x1],v19.S[0x0]
7102bd4370  fmla v6.4S,v3.4S,v4.4S
7102bd4374  ldr s4,[x8, #0x10]
7102bd4378  adrp x8,0x7104465000
7102bd437c  fneg s4,s4
7102bd4380  dup v4.4S,v4.S[0x0]
7102bd4384  fmla v4.4S,v3.4S,v6.4S
7102bd4388  fmla v1.4S,v3.4S,v4.4S
7102bd438c  ldr d4,[x8, #0x5c0]
7102bd4390  adrp x8,0x7104465000
7102bd4394  fmul v1.4S,v1.4S,v2.4S
7102bd4398  dup v2.2S,v1.S[0x1]
7102bd439c  mov v3.16B,v2.16B
7102bd43a0  mov v2.S[0x1],v19.S[0x0]
7102bd43a4  mov v3.S[0x1],v1.S[0x1]
7102bd43a8  ext v5.16B,v1.16B,v1.16B,0x8
7102bd43ac  mov v3.D[0x1],v4.D[0x0]
7102bd43b0  ext v4.16B,v0.16B,v0.16B,0x8
7102bd43b4  zip1 v6.2S,v5.2S,v4.2S
7102bd43b8  zip1 v4.2S,v4.2S,v5.2S
7102bd43bc  mov v17.16B,v6.16B
7102bd43c0  mov v6.D[0x1],v2.D[0x0]
7102bd43c4  mov v17.D[0x1],v16.D[0x0]
7102bd43c8  ldr d16,[x8, #0x218]
7102bd43cc  adrp x8,0x7104466000
7102bd43d0  mov v7.D[0x1],v16.D[0x0]
7102bd43d4  movi d16,#0x0
7102bd43d8  mov v4.D[0x1],v16.D[0x0]
7102bd43dc  fmul v2.4S,v7.4S,v6.4S
7102bd43e0  ldr q7,[x8, #0xb60]
7102bd43e4  adrp x8,0x7104469000
7102bd43e8  fmul v3.4S,v3.4S,v17.4S
7102bd43ec  fmul v6.4S,v4.4S,v1.S[0x0]
7102bd43f0  fmul v5.4S,v2.4S,v0.S[0x0]
7102bd43f4  fmul v1.4S,v2.4S,v1.S[0x0]
7102bd43f8  ldr q2,[x8, #0x7a0]
7102bd43fc  fmul v0.4S,v4.4S,v0.S[0x0]
7102bd4400  fmul v6.4S,v6.4S,v7.4S
7102bd4404  fmul v0.4S,v0.4S,v2.4S
7102bd4408  fadd v5.4S,v6.4S,v5.4S
7102bd440c  fadd v0.4S,v0.4S,v1.4S
7102bd4410  stp q3,q5,[sp, #0x50]
7102bd4414  fmov s5,0x3f800000
7102bd4418  str q0,[sp, #0x70]
7102bd441c  ldr q0,[x19, #0x30]
7102bd4420  mov v1.16B,v0.16B
7102bd4424  mov v1.S[0x3],v5.S[0x0]
7102bd4428  ext v0.16B,v1.16B,v0.16B,0xc
7102bd442c  ext v1.16B,v0.16B,v1.16B,0x4
7102bd4430  ext v0.16B,v0.16B,v0.16B,0x8
7102bd4434  ext v0.16B,v1.16B,v0.16B,0xc
7102bd4438  str q0,[sp, #0x80]
7102bd443c  ldr x20,[x19, #0x10]
7102bd4440  cbz x20,0x7102bd44d8
7102bd4444  ldr x0,[x20, #0x90]
7102bd4448  ldr x8,[x0]
7102bd444c  ldr x8,[x8, #0x148]
7102bd4450  add x1,sp,#0x50
7102bd4454  blr x8
7102bd4458  ldr q18,[sp, #0x40]
7102bd445c  ldr x20,[x20, #0xd8]
7102bd4460  fmov s5,0x3f800000
7102bd4464  cbz x20,0x7102bd44d8
7102bd4468  ldr x8,[sp, #0x68]
7102bd446c  str x8,[sp, #0xa8]
7102bd4470  ldr x8,[sp, #0x60]
7102bd4474  str x8,[sp, #0xa0]
7102bd4478  ldr x8,[sp, #0x58]
7102bd447c  str x8,[sp, #0x98]
7102bd4480  ldr x8,[sp, #0x50]
7102bd4484  str x8,[sp, #0x90]
7102bd4488  ldr x8,[sp, #0x88]
7102bd448c  str x8,[sp, #0xc8]
7102bd4490  ldr x8,[sp, #0x80]
7102bd4494  str x8,[sp, #0xc0]
7102bd4498  ldr x8,[sp, #0x78]
7102bd449c  str x8,[sp, #0xb8]
7102bd44a0  ldr x8,[sp, #0x70]
7102bd44a4  str x8,[sp, #0xb0]
7102bd44a8  ldr x8,[x20, #0x8]
7102bd44ac  ldrb w9,[x8, #0xa8]
7102bd44b0  cbz w9,0x7102bd44d0
7102bd44b4  ldr x0,[x8, #0x48]
7102bd44b8  ldr x8,[x0]
7102bd44bc  ldr x8,[x8, #0x20]
7102bd44c0  add x1,sp,#0x90
7102bd44c4  blr x8
7102bd44c8  ldr q18,[sp, #0x40]
7102bd44cc  fmov s5,0x3f800000
7102bd44d0  mov w8,#0x1
7102bd44d4  strb w8,[x20, #0x20]
7102bd44d8  ldr x8,[x19, #0x70]
7102bd44dc  ldr x8,[x8]
7102bd44e0  ldr x8,[x8]
7102bd44e4  ldr q1,[x19, #0x30]
7102bd44e8  mov v0.16B,v1.16B
7102bd44ec  ldr x8,[x8, #0x8]
7102bd44f0  movi d2,#0x0
7102bd44f4  mov v0.D[0x1],v2.D[0x0]
7102bd44f8  ldr x8,[x8, #0x18]
7102bd44fc  ldrb w9,[x8, #0x128]
7102bd4500  cbz w9,0x7102bd467c
7102bd4504  ldr x9,[x8, #0x8]
7102bd4508  ldrb w10,[x9, #0xe7]
7102bd450c  ldrb w9,[x9, #0xe8]
7102bd4510  orr w9,w9,w10
7102bd4514  tst w9,#0xff
7102bd4518  b.ne 0x7102bd467c
7102bd451c  ldr q2,[x8, #0x10]
7102bd4520  adrp x9,0x7104472000
7102bd4524  ldr s3,[x9, #0x970]
7102bd4528  fabd s4,s2,s1
7102bd452c  fcmp s4,s3
7102bd4530  b.gt 0x7102bd4548
7102bd4534  dup s2,v2.S[0x1]
7102bd4538  dup s1,v1.S[0x1]
7102bd453c  fabd s1,s2,s1
7102bd4540  fcmp s1,s3
7102bd4544  b.le 0x7102bd4688
7102bd4548  mov w9,#0x1
7102bd454c  strb w9,[x8, #0x12a]
7102bd4550  b 0x7102bd4684
7102bd4554  ldrb w8,[x19, #0x59]
7102bd4558  cbz w8,0x7102bd49c4
7102bd455c  mov x22,x19
7102bd4560  ldr x8,[x22, #0x10]!
7102bd4564  strb wzr,[x22, #0x49]
7102bd4568  strb wzr,[x22, #0x58]
7102bd456c  cbz x8,0x7102bd49a4
7102bd4570  ldr x0,[x8, #0xd8]
7102bd4574  adrp x8,0x7104473000
7102bd4578  ldr s0,[x8, #0xaf0]
7102bd457c  mov w1,#0x1
7102bd4580  bl 0x71025ee450
7102bd4584  ldr x8,[x22]
7102bd4588  cbz x8,0x7102bd49a4
7102bd458c  ldr x9,[x8, #0xd8]
7102bd4590  cbz x9,0x7102bd514c
7102bd4594  strb wzr,[x9, #0x21]
7102bd4598  ldr x8,[x19, #0x10]
7102bd459c  ldr x21,[x19, #0x20]
7102bd45a0  cbnz x8,0x7102bd5150
7102bd45a4  b 0x7102bd49a8
7102bd45a8  cbz w8,0x7102bd4884
7102bd45ac  mov x20,x19
7102bd45b0  ldr x8,[x20, #0x10]!
7102bd45b4  strb wzr,[x20, #0x49]
7102bd45b8  cbz x8,0x7102bd5864
7102bd45bc  ldrb w9,[x8, #0xe0]
7102bd45c0  cbz w9,0x7102bd45d8
7102bd45c4  ldr x9,[x8, #0xc8]
7102bd45c8  cbz x9,0x7102bd45d8
7102bd45cc  strh wzr,[x9, #0x30]
7102bd45d0  ldr x8,[x20]
7102bd45d4  cbz x8,0x7102bd5864
7102bd45d8  ldrb w9,[x8, #0xe0]
7102bd45dc  cbz w9,0x7102bd5864
7102bd45e0  ldr x21,[x8, #0xc8]
7102bd45e4  cbz x21,0x7102bd5864
7102bd45e8  ldp x23,x24,[x21, #0x18]
7102bd45ec  mov w22,#0x43020000
7102bd45f0  str w22,[x21, #0x3c]
7102bd45f4  cmp x23,x24
7102bd45f8  b.eq 0x7102bd5860
7102bd45fc  adrp x8,0x7104472000
7102bd4600  ldr s8,[x8, #0xe08]
7102bd4604  ldr x0,[x23], #0x8
7102bd4608  ldr x8,[x0]
7102bd460c  ldr x8,[x8, #0x18]
7102bd4610  mov v0.16B,v8.16B
7102bd4614  mov w1,wzr
7102bd4618  blr x8
7102bd461c  cmp x24,x23
7102bd4620  b.ne 0x7102bd4604
7102bd4624  ldp x23,x24,[x21, #0x18]
7102bd4628  cmp x23,x24
7102bd462c  str w22,[x21, #0x40]
7102bd4630  b.eq 0x7102bd5864
7102bd4634  ldr x0,[x23], #0x8
7102bd4638  ldr x8,[x0]
7102bd463c  ldr x8,[x8, #0x18]
7102bd4640  mov v0.16B,v8.16B
7102bd4644  mov w1,#0x1
7102bd4648  blr x8
7102bd464c  cmp x24,x23
7102bd4650  b.ne 0x7102bd4634
7102bd4654  ldp x22,x21,[x21, #0x18]
7102bd4658  cmp x22,x21
7102bd465c  b.eq 0x7102bd5864
7102bd4660  ldr x0,[x22], #0x8
7102bd4664  ldr x8,[x0]
7102bd4668  ldr x8,[x8, #0x38]
7102bd466c  blr x8
7102bd4670  cmp x21,x22
7102bd4674  b.ne 0x7102bd4660
7102bd4678  b 0x7102bd5864
7102bd467c  mov w9,#0x1
7102bd4680  strb w9,[x8, #0x129]
7102bd4684  str q0,[x8, #0x10]
7102bd4688  fmov s0,wzr
7102bd468c  adrp x9,0x7104472000
7102bd4690  ldr s10,[x9, #0x970]
7102bd4694  fabd s9,s0,s18
7102bd4698  fcmp s9,s10
7102bd469c  b.pl 0x7102bd46b0
7102bd46a0  ldr s0,[x8, #0x30]
7102bd46a4  fabd s0,s0,s18
7102bd46a8  fcmp s0,s10
7102bd46ac  b.mi 0x7102bd46bc
7102bd46b0  mov w9,#0x1
7102bd46b4  str s18,[x8, #0x30]
7102bd46b8  strb w9,[x8, #0x129]
7102bd46bc  ldr q0,[x8, #0x50]
7102bd46c0  fmov s11,0xbf800000
7102bd46c4  fadd s1,s0,s11
7102bd46c8  fabs s1,s1
7102bd46cc  fcmp s1,s10
7102bd46d0  b.mi 0x7102bd46e4
7102bd46d4  mov v0.S[0x0],v5.S[0x0]
7102bd46d8  mov w9,#0x1
7102bd46dc  str q0,[x8, #0x50]
7102bd46e0  strb w9,[x8, #0x129]
7102bd46e4  dup s1,v0.S[0x1]
7102bd46e8  fadd s1,s1,s11
7102bd46ec  fabs s1,s1
7102bd46f0  fcmp s1,s10
7102bd46f4  b.mi 0x7102bd4708
7102bd46f8  mov v0.S[0x1],v5.S[0x0]
7102bd46fc  mov w9,#0x1
7102bd4700  str q0,[x8, #0x50]
7102bd4704  strb w9,[x8, #0x129]
7102bd4708  ldr x8,[x19, #0x10]
7102bd470c  cbz x8,0x7102bd502c
7102bd4710  ldr x8,[x8, #0xd8]
7102bd4714  cbz x8,0x7102bd502c
7102bd4718  ldr x8,[x8, #0x8]
7102bd471c  ldr x0,[x8, #0x8]
7102bd4720  ldr x8,[x0]
7102bd4724  ldr x8,[x8, #0x18]
7102bd4728  adrp x1,0x71042f5000
7102bd472c  add x1,x1,#0xf7e
7102bd4730  blr x8
7102bd4734  cmn w0,#0x1
7102bd4738  b.eq 0x7102bd502c
7102bd473c  adrp x9,0x710446a000
7102bd4740  ldr q7,[x9, #0x350]
7102bd4744  adrp x9,0x7104465000
7102bd4748  ldr q6,[x9, #0x6b0]
7102bd474c  adrp x9,0x7104468000
7102bd4750  ldr q1,[x9, #0xca0]
7102bd4754  adrp x9,0x710446a000
7102bd4758  ldr q16,[x9, #0x360]
7102bd475c  ldr x8,[x19, #0x10]
7102bd4760  cbz x8,0x7102bd4bb8
7102bd4764  stp q16,q7,[sp]
7102bd4768  mov w20,w0
7102bd476c  stp q6,q1,[sp, #0x20]
7102bd4770  ldr x21,[x8, #0xd8]
7102bd4774  ldr x8,[x21]
7102bd4778  ldr x8,[x8, #0x10]
7102bd477c  mov x0,x21
7102bd4780  blr x8
7102bd4784  ldr x8,[x21, #0x8]
7102bd4788  ldrb w9,[x8, #0xa8]
7102bd478c  cbz w9,0x7102bd47dc
7102bd4790  ldr x0,[x8, #0x48]
7102bd4794  ldr x8,[x0]
7102bd4798  ldr x8,[x8, #0x10]
7102bd479c  mov w1,wzr
7102bd47a0  blr x8
7102bd47a4  ldr x8,[x21, #0x8]
7102bd47a8  ldrb w9,[x8, #0xa8]
7102bd47ac  cbz w9,0x7102bd47dc
7102bd47b0  ldr x22,[x8, #0x48]
7102bd47b4  ldr x8,[x22]
7102bd47b8  ldr x8,[x8, #0x10]
7102bd47bc  mov w1,#0x1
7102bd47c0  mov x0,x22
7102bd47c4  blr x8
7102bd47c8  ldr x8,[x22]
7102bd47cc  ldr x8,[x8, #0x10]
7102bd47d0  mov w1,#0x2
7102bd47d4  mov x0,x22
7102bd47d8  blr x8
7102bd47dc  strb wzr,[x21, #0x20]
7102bd47e0  ldr x21,[x19, #0x10]
7102bd47e4  ldp q6,q1,[sp, #0x20]
7102bd47e8  ldp q16,q7,[sp]
7102bd47ec  cbz x21,0x7102bd4bb8
7102bd47f0  ldr x8,[x21, #0xd8]
7102bd47f4  cbz x8,0x7102bd4b8c
7102bd47f8  ldr x8,[x8, #0x8]
7102bd47fc  ldr x0,[x8, #0x8]
7102bd4800  ldr x8,[x0]
7102bd4804  ldr x8,[x8, #0x10]
7102bd4808  blr x8
7102bd480c  cmp w0,w20
7102bd4810  b.ls 0x7102bd4b8c
7102bd4814  ldr x8,[x21, #0xd8]
7102bd4818  ldr x8,[x8, #0x8]
7102bd481c  ldr x0,[x8, #0x48]
7102bd4820  ldr x8,[x0]
7102bd4824  ldr x8,[x8, #0x38]
7102bd4828  mov w1,wzr
7102bd482c  blr x8
7102bd4830  mov w8,w20
7102bd4834  add x0,x1,x8, LSL #0x6
7102bd4838  b 0x7102bd4b9c
7102bd483c  mov x22,x19
7102bd4840  ldr x8,[x22, #0x10]!
7102bd4844  cbz x8,0x7102bd4990
7102bd4848  ldrb w9,[x8, #0xe0]
7102bd484c  cbz w9,0x7102bd4ad0
7102bd4850  ldr x9,[x8, #0xc8]
7102bd4854  cbz x9,0x7102bd4868
7102bd4858  ldrb w10,[x9, #0x30]
7102bd485c  cbz w10,0x7102bd4afc
7102bd4860  ldrb w9,[x9, #0x31]
7102bd4864  cbz w9,0x7102bd4afc
7102bd4868  ldr x9,[x8, #0xb0]
7102bd486c  ldrb w9,[x9, #0x10]
7102bd4870  cmp w9,#0x0
7102bd4874  cset w9,eq
7102bd4878  ldr x8,[x8, #0xd8]
7102bd487c  cbnz x8,0x7102bd4adc
7102bd4880  b 0x7102bd4aec
7102bd4884  add x20,x19,#0x10
7102bd4888  ldr x8,[x20]
7102bd488c  cbz x8,0x7102bd5da4
7102bd4890  ldrb w9,[x8, #0xe0]
7102bd4894  cbz w9,0x7102bd5da4
7102bd4898  ldr x21,[x8, #0xc8]
7102bd489c  cbz x21,0x7102bd5da4
7102bd48a0  adrp x8,0x7104473000
7102bd48a4  ldr s0,[x21, #0x3c]
7102bd48a8  ldr s1,[x8, #0x498]
7102bd48ac  fcmp s0,s1
7102bd48b0  b.lt 0x7102bd5da4
7102bd48b4  ldp x22,x23,[x21, #0x18]
7102bd48b8  cmp x22,x23
7102bd48bc  str wzr,[x21, #0x3c]
7102bd48c0  b.eq 0x7102bd573c
7102bd48c4  fmov s8,wzr
7102bd48c8  ldr x0,[x22], #0x8
7102bd48cc  ldr x8,[x0]
7102bd48d0  ldr x8,[x8, #0x18]
7102bd48d4  mov v0.16B,v8.16B
7102bd48d8  mov w1,wzr
7102bd48dc  blr x8
7102bd48e0  cmp x23,x22
7102bd48e4  b.ne 0x7102bd48c8
7102bd48e8  ldp x22,x23,[x21, #0x18]
7102bd48ec  cmp x22,x23
7102bd48f0  str wzr,[x21, #0x40]
7102bd48f4  b.eq 0x7102bd5740
7102bd48f8  fmov s8,wzr
7102bd48fc  ldr x0,[x22], #0x8
7102bd4900  ldr x8,[x0]
7102bd4904  ldr x8,[x8, #0x18]
7102bd4908  mov v0.16B,v8.16B
7102bd490c  mov w1,#0x1
7102bd4910  blr x8
7102bd4914  cmp x23,x22
7102bd4918  b.ne 0x7102bd48fc
7102bd491c  ldp x22,x21,[x21, #0x18]
7102bd4920  cmp x22,x21
7102bd4924  b.eq 0x7102bd5740
7102bd4928  ldr x0,[x22], #0x8
7102bd492c  ldr x8,[x0]
7102bd4930  ldr x8,[x8, #0x38]
7102bd4934  blr x8
7102bd4938  cmp x21,x22
7102bd493c  b.ne 0x7102bd4928
7102bd4940  b 0x7102bd5740
7102bd4944  mov w10,wzr
7102bd4948  tbnz w8,#0x0,0x7102bd49f8
7102bd494c  cbz w10,0x7102bd4afc
7102bd4950  ldr x8,[x22]
7102bd4954  cbz x8,0x7102bd4990
7102bd4958  ldrb w9,[x8, #0xe0]
7102bd495c  cbz w9,0x7102bd496c
7102bd4960  ldr x9,[x8, #0xc8]
7102bd4964  cbz x9,0x7102bd496c
7102bd4968  strh wzr,[x9, #0x30]
7102bd496c  ldr x9,[x8, #0xd8]
7102bd4970  cbz x9,0x7102bd4978
7102bd4974  strb wzr,[x9, #0x21]
7102bd4978  ldrb w9,[x8, #0xe0]
7102bd497c  cbz w9,0x7102bd4afc
7102bd4980  ldr x8,[x8, #0xb0]
7102bd4984  mov w9,#0x1
7102bd4988  strb w9,[x8, #0x10]
7102bd498c  b 0x7102bd4afc
7102bd4990  mov w20,#0x1
7102bd4994  fmov s9,wzr
7102bd4998  ldrb w8,[x19, #0x149]
7102bd499c  cbnz w8,0x7102bd558c
7102bd49a0  b 0x7102bd55d4
7102bd49a4  ldr x21,[x19, #0x20]
7102bd49a8  adrp x8,0x710532a000
7102bd49ac  add x8,x8,#0x9e0
7102bd49b0  ldarb w8,[x8]
7102bd49b4  tbz w8,#0x0,0x7102bd63d8
7102bd49b8  adrp x20,0x710532a000
7102bd49bc  add x20,x20,#0x9f0
7102bd49c0  b 0x7102bd5164
7102bd49c4  add x22,x19,#0x10
7102bd49c8  b 0x7102bd51e0
7102bd49cc  mov w11,#0x1
7102bd49d0  ldr x12,[x9, #0xd8]
7102bd49d4  cmp x12,#0x0
7102bd49d8  cset w10,eq
7102bd49dc  and w10,w11,w10
7102bd49e0  cbz x12,0x7102bd49f4
7102bd49e4  cbz w11,0x7102bd49f4
7102bd49e8  ldrb w10,[x12, #0x21]
7102bd49ec  cmp w10,#0x0
7102bd49f0  cset w10,ne
7102bd49f4  tbz w8,#0x0,0x7102bd494c
7102bd49f8  cmp x9,#0x0
7102bd49fc  cset w8,eq
7102bd4a00  orr w8,w10,w8
7102bd4a04  tbnz w8,#0x0,0x7102bd4a40
7102bd4a08  ldrb w8,[x9, #0xe0]
7102bd4a0c  cbz w8,0x7102bd4a20
7102bd4a10  ldr x8,[x9, #0xc8]
7102bd4a14  cbz x8,0x7102bd4a20
7102bd4a18  mov w10,#0x101
7102bd4a1c  strh w10,[x8, #0x30]
7102bd4a20  ldr x8,[x9, #0xd8]
7102bd4a24  cbz x8,0x7102bd4a30
7102bd4a28  mov w10,#0x1
7102bd4a2c  strb w10,[x8, #0x21]
7102bd4a30  ldrb w8,[x9, #0xe0]
7102bd4a34  cbz w8,0x7102bd4a40
7102bd4a38  ldr x8,[x9, #0xb0]
7102bd4a3c  strb wzr,[x8, #0x10]
7102bd4a40  ldr x20,[x19, #0x18]
7102bd4a44  ldr x21,[x20, #0x30]
7102bd4a48  cbz x21,0x7102bd4a68
7102bd4a4c  ldrb w8,[x21, #0x10]
7102bd4a50  cmp w8,#0x0
7102bd4a54  cset w8,ne
7102bd4a58  ldrb w9,[x20, #0x40]
7102bd4a5c  tbnz w8,#0x0,0x7102bd4a74
7102bd4a60  cbz w9,0x7102bd5da4
7102bd4a64  b 0x7102bd4a74
7102bd4a68  mov w8,wzr
7102bd4a6c  ldrb w9,[x20, #0x40]
7102bd4a70  tbz w8,#0x0,0x7102bd4a60
7102bd4a74  cbz w9,0x7102bd4ac0
7102bd4a78  cbz x21,0x7102bd4ab0
7102bd4a7c  ldrb w8,[x21, #0x10]
7102bd4a80  cbz w8,0x7102bd4ab0
7102bd4a84  ldrb w8,[x21, #0x50]
7102bd4a88  strb wzr,[x21, #0x10]
7102bd4a8c  cbz w8,0x7102bd4ab0
7102bd4a90  ldr x8,[x21]
7102bd4a94  ldr w0,[x8, #0x8]
7102bd4a98  bl 0x71003ac560
7102bd4a9c  ldr x8,[x0]
7102bd4aa0  ldr x8,[x8, #0x48]
7102bd4aa4  mov w1,wzr
7102bd4aa8  blr x8
7102bd4aac  strb wzr,[x21, #0x50]
7102bd4ab0  ldr x8,[x20]
7102bd4ab4  ldr x8,[x8, #0x30]
7102bd4ab8  mov x0,x20
7102bd4abc  blr x8
7102bd4ac0  strb wzr,[x20, #0x40]
7102bd4ac4  ldr x8,[x19, #0x10]
7102bd4ac8  cbnz x8,0x7102bd41b8
7102bd4acc  b 0x7102bd5dac
7102bd4ad0  mov w9,#0x1
7102bd4ad4  ldr x8,[x8, #0xd8]
7102bd4ad8  cbz x8,0x7102bd4aec
7102bd4adc  cbz w9,0x7102bd4aec
7102bd4ae0  ldrb w8,[x8, #0x21]
7102bd4ae4  cbnz w8,0x7102bd4950
7102bd4ae8  b 0x7102bd4afc
7102bd4aec  cmp x8,#0x0
7102bd4af0  cset w8,eq
7102bd4af4  and w8,w9,w8
7102bd4af8  tbnz w8,#0x0,0x7102bd4950
7102bd4afc  ldr x8,[x22]
7102bd4b00  fmov s9,wzr
7102bd4b04  cbz x8,0x7102bd4b7c
7102bd4b08  ldr x8,[x8, #0xd8]
7102bd4b0c  cbz x8,0x7102bd4b7c
7102bd4b10  ldr s9,[x8, #0x10]
7102bd4b14  adrp x8,0x7104472000
7102bd4b18  ldr s0,[x8, #0xaf4]
7102bd4b1c  adrp x9,0x7104472000
7102bd4b20  ldr s1,[x9, #0xfe0]
7102bd4b24  fcmp s9,s0
7102bd4b28  cset w8,hi
7102bd4b2c  fcmp s9,s1
7102bd4b30  cset w20,lt
7102bd4b34  b.lt 0x7102bd551c
7102bd4b38  fcmp s9,s0
7102bd4b3c  b.hi 0x7102bd551c
7102bd4b40  ldr x0,[x19, #0x18]
7102bd4b44  ldr x8,[x0, #0x30]
7102bd4b48  cbz x8,0x7102bd550c
7102bd4b4c  ldrb w8,[x8, #0x10]
7102bd4b50  cmp w8,#0x0
7102bd4b54  cset w9,ne
7102bd4b58  mov w8,wzr
7102bd4b5c  tbnz w9,#0x0,0x7102bd5518
7102bd4b60  ldrb w9,[x0, #0x40]
7102bd4b64  mov w20,w8
7102bd4b68  cbnz w9,0x7102bd551c
7102bd4b6c  bl 0x710313ef20
7102bd4b70  mov w8,wzr
7102bd4b74  mov w20,wzr
7102bd4b78  b 0x7102bd551c
7102bd4b7c  mov w20,#0x1
7102bd4b80  ldrb w8,[x19, #0x149]
7102bd4b84  cbnz w8,0x7102bd558c
7102bd4b88  b 0x7102bd55d4
7102bd4b8c  ldr x0,[x21, #0x90]
7102bd4b90  ldr x8,[x0]
7102bd4b94  ldr x8,[x8, #0x158]
7102bd4b98  blr x8
7102bd4b9c  add x8,x0,#0x10
7102bd4ba0  add x9,x0,#0x20
7102bd4ba4  add x10,x0,#0x30
7102bd4ba8  ldr q6,[x9]
7102bd4bac  ldr q1,[x0]
7102bd4bb0  ldr q16,[x8]
7102bd4bb4  ldr q7,[x10]
7102bd4bb8  movi v0.2D,#0x0
7102bd4bbc  mov v4.16B,v0.16B
7102bd4bc0  mov w8,#0x42100000
7102bd4bc4  fmul v0.4S,v1.4S,v0.4S
7102bd4bc8  fmla v1.4S,v4.4S,v16.4S
7102bd4bcc  dup v3.4S,w8
7102bd4bd0  mov v2.16B,v0.16B
7102bd4bd4  fadd v5.4S,v16.4S,v0.4S
7102bd4bd8  fmla v0.4S,v3.4S,v16.4S
7102bd4bdc  fmla v2.4S,v4.4S,v16.4S
7102bd4be0  fmla v5.4S,v4.4S,v6.4S
7102bd4be4  fmla v0.4S,v4.4S,v6.4S
7102bd4be8  fadd v2.4S,v6.4S,v2.4S
7102bd4bec  fmla v1.4S,v4.4S,v6.4S
7102bd4bf0  fmla v1.4S,v4.4S,v7.4S
7102bd4bf4  fadd v0.4S,v7.4S,v0.4S
7102bd4bf8  str q0,[sp, #0x20]
7102bd4bfc  fmla v2.4S,v4.4S,v7.4S
7102bd4c00  fmla v5.4S,v4.4S,v7.4S
7102bd4c04  stp q1,q5,[sp, #0x50]
7102bd4c08  stp q2,q0,[sp, #0x70]
7102bd4c0c  mov v2.16B,v0.16B
7102bd4c10  movi d0,#0x0
7102bd4c14  mov v2.D[0x1],v0.D[0x0]
7102bd4c18  dup s0,v1.S[0x1]
7102bd4c1c  str q2,[sp, #0x30]
7102bd4c20  bl 0x71039c2660
7102bd4c24  ldr x8,[x19, #0x70]
7102bd4c28  ldr x8,[x8]
7102bd4c2c  ldr x8,[x8, #0x8]
7102bd4c30  ldr x8,[x8, #0x8]
7102bd4c34  ldr x8,[x8, #0x18]
7102bd4c38  ldrb w9,[x8, #0x128]
7102bd4c3c  mov v8.16B,v0.16B
7102bd4c40  cbz w9,0x7102bd4c94
7102bd4c44  ldr x9,[x8, #0x8]
7102bd4c48  ldrb w10,[x9, #0xe7]
7102bd4c4c  ldrb w9,[x9, #0xe8]
7102bd4c50  orr w9,w9,w10
7102bd4c54  tst w9,#0xff
7102bd4c58  b.ne 0x7102bd4c94
7102bd4c5c  ldr q0,[x8, #0x10]
7102bd4c60  ldr q1,[sp, #0x20]
7102bd4c64  fabd s1,s0,s1
7102bd4c68  fcmp s1,s10
7102bd4c6c  b.gt 0x7102bd4c88
7102bd4c70  ldr q1,[sp, #0x20]
7102bd4c74  dup s0,v0.S[0x1]
7102bd4c78  dup s1,v1.S[0x1]
7102bd4c7c  fabd s0,s0,s1
7102bd4c80  fcmp s0,s10
7102bd4c84  b.le 0x7102bd4ca4
7102bd4c88  mov w9,#0x1
7102bd4c8c  strb w9,[x8, #0x12a]
7102bd4c90  b 0x7102bd4c9c
7102bd4c94  mov w9,#0x1
7102bd4c98  strb w9,[x8, #0x129]
7102bd4c9c  ldr q0,[sp, #0x30]
7102bd4ca0  str q0,[x8, #0x10]
7102bd4ca4  fmov s0,wzr
7102bd4ca8  fabd s0,s0,s8
7102bd4cac  fcmp s0,s10
7102bd4cb0  b.pl 0x7102bd4cc4
7102bd4cb4  ldr s0,[x8, #0x30]
7102bd4cb8  fabd s0,s0,s8
7102bd4cbc  fcmp s0,s10
7102bd4cc0  b.mi 0x7102bd4cd0
7102bd4cc4  mov w9,#0x1
7102bd4cc8  str s8,[x8, #0x30]
7102bd4ccc  strb w9,[x8, #0x129]
7102bd4cd0  ldr q0,[x8, #0x50]
7102bd4cd4  fadd s1,s0,s11
7102bd4cd8  fabs s1,s1
7102bd4cdc  fcmp s1,s10
7102bd4ce0  b.mi 0x7102bd4cf8
7102bd4ce4  fmov s1,0x3f800000
7102bd4ce8  mov v0.S[0x0],v1.S[0x0]
7102bd4cec  mov w9,#0x1
7102bd4cf0  strb w9,[x8, #0x129]
7102bd4cf4  str q0,[x8, #0x50]
7102bd4cf8  dup s1,v0.S[0x1]
7102bd4cfc  fadd s1,s1,s11
7102bd4d00  fabs s1,s1
7102bd4d04  fcmp s1,s10
7102bd4d08  b.mi 0x7102bd4d20
7102bd4d0c  fmov s1,0x3f800000
7102bd4d10  mov v0.S[0x1],v1.S[0x0]
7102bd4d14  mov w9,#0x1
7102bd4d18  strb w9,[x8, #0x129]
7102bd4d1c  str q0,[x8, #0x50]
7102bd4d20  ldr q0,[sp, #0x20]
7102bd4d24  dup s12,v0.S[0x1]
7102bd4d28  adrp x8,0x7104472000
7102bd4d2c  ldr s13,[x8, #0x58c]
7102bd4d30  adrp x8,0x7104472000
7102bd4d34  ldr s14,[x8, #0x3ac]
7102bd4d38  adrp x8,0x7104473000
7102bd4d3c  ldr s15,[x8, #0x948]
7102bd4d40  mov x21,xzr
7102bd4d44  adrp x22,0x71052b9000
7102bd4d48  orr w23,wzr,#0x18
7102bd4d4c  mov w24,#0x1
7102bd4d50  orr w25,wzr,#0xc
7102bd4d54  adrp x27,0x7104557000
7102bd4d58  add x27,x27,#0x990
7102bd4d5c  add x20,x19,x21, LSL #0x3
7102bd4d60  ldr x8,[x20, #0x80]!
7102bd4d64  cbz x8,0x7102bd5020
7102bd4d68  ldr w9,[x19, #0x50]
7102bd4d6c  cbz w9,0x7102bd4d78
7102bd4d70  cmp w9,#0x6
7102bd4d74  b.ne 0x7102bd4e74
7102bd4d78  ldrb w10,[x8, #0x12b]
7102bd4d7c  add x9,x8,#0x12b
7102bd4d80  strb wzr,[x8, #0x128]
7102bd4d84  strb w10,[x8, #0x130]
7102bd4d88  str wzr,[x9]
7102bd4d8c  ldr x9,[x8, #0x100]
7102bd4d90  ldp x10,x11,[x8, #0x88]
7102bd4d94  strb wzr,[x8, #0x12f]
7102bd4d98  stp x10,x11,[x8, #0x100]
7102bd4d9c  ldr x10,[x8, #0x110]
7102bd4da0  ldp x11,x12,[x8, #0x98]
7102bd4da4  str x10,[x8, #0x98]
7102bd4da8  stp x9,x9,[x8, #0x88]
7102bd4dac  ldr x9,[x8, #0xb8]
7102bd4db0  ldr x10,[x8, #0xd0]
7102bd4db4  str x9,[x8, #0xc0]
7102bd4db8  ldr x9,[x8, #0x8]
7102bd4dbc  str x10,[x8, #0xd8]
7102bd4dc0  ldr x10,[x8, #0xe8]
7102bd4dc4  str x11,[x8, #0x110]
7102bd4dc8  str x12,[x8, #0xa8]
7102bd4dcc  str x10,[x8, #0xf0]
7102bd4dd0  cbz x9,0x7102bd5020
7102bd4dd4  str xzr,[x9, #0xd8]
7102bd4dd8  ldr x20,[x8, #0x8]
7102bd4ddc  ldrb w8,[x20, #0xe0]
7102bd4de0  cbz w8,0x7102bd5020
7102bd4de4  mov x28,x20
7102bd4de8  ldr x26,[x28, #0x80]!
7102bd4dec  strh wzr,[x28, #0x60]
7102bd4df0  sturh wzr,[x28, #0x67]
7102bd4df4  cmp x28,x26
7102bd4df8  b.eq 0x7102bd4e44
7102bd4dfc  ldr w1,[x26, #0xfc]
7102bd4e00  strb wzr,[x26, #0x100]
7102bd4e04  cbz w1,0x7102bd4e2c
7102bd4e08  ldr x8,[x26, #0xf0]
7102bd4e0c  ldr x9,[x8]
7102bd4e10  madd x9,x1,x23,x9
7102bd4e14  strb wzr,[x9, #0x10]
7102bd4e18  ldr x0,[x8, #0x18]
7102bd4e1c  ldr x8,[x0]
7102bd4e20  ldr x8,[x8, #0x18]
7102bd4e24  mov w2,wzr
7102bd4e28  blr x8
7102bd4e2c  str wzr,[x26, #0x80]
7102bd4e30  stp xzr,xzr,[x26, #0x70]
7102bd4e34  stp xzr,xzr,[x26, #0x60]
7102bd4e38  ldr x26,[x26]
7102bd4e3c  cmp x28,x26
7102bd4e40  b.ne 0x7102bd4dfc
7102bd4e44  mov x8,x20
7102bd4e48  ldr x9,[x8, #0x68]!
7102bd4e4c  cmp x8,x9
7102bd4e50  b.eq 0x7102bd4e64
7102bd4e54  strb wzr,[x9, #0x50]
7102bd4e58  ldr x9,[x9]
7102bd4e5c  cmp x8,x9
7102bd4e60  b.ne 0x7102bd4e54
7102bd4e64  ldr x0,[x22, #0x298]
7102bd4e68  mov x1,x20
7102bd4e6c  bl 0x7100525010
7102bd4e70  b 0x7102bd5020
7102bd4e74  ldr s0,[x19, #0x48]
7102bd4e78  fcmp s0,#0.0
7102bd4e7c  b.pl 0x7102bd4e88
7102bd4e80  fadd s0,s0,s13
7102bd4e84  b 0x7102bd4e94
7102bd4e88  fcmp s0,s13
7102bd4e8c  b.le 0x7102bd4e94
7102bd4e90  fadd s0,s0,s15
7102bd4e94  ldr x9,[x19, #0x8]
7102bd4e98  ldp x10,x11,[x9, #0x1c0]
7102bd4e9c  sub x11,x11,x10
7102bd4ea0  asr x11,x11,#0x3
7102bd4ea4  cmp x11,x21
7102bd4ea8  b.ls 0x7102bd642c
7102bd4eac  add x9,x10,x21, LSL #0x3
7102bd4eb0  ldp s2,s1,[x9]
7102bd4eb4  fcmp s1,s2
7102bd4eb8  b.pl 0x7102bd4ecc
7102bd4ebc  fcmp s0,s2
7102bd4ec0  fccmp s0,s1,#0x0,lt
7102bd4ec4  b.hi 0x7102bd4d78
7102bd4ec8  b 0x7102bd4ed8
7102bd4ecc  fcmp s0,s2
7102bd4ed0  fccmp s0,s1,#0x2,ge
7102bd4ed4  b.hi 0x7102bd4d78
7102bd4ed8  ldr w9,[x19, #0x54]
7102bd4edc  cmp w9,#0x3
7102bd4ee0  b.ne 0x7102bd4ef8
7102bd4ee4  sub w9,w21,#0x1
7102bd4ee8  cmp w9,#0x3
7102bd4eec  b.hi 0x7102bd4ef8
7102bd4ef0  ldrb w9,[x19, #0x59]
7102bd4ef4  cbnz w9,0x7102bd4d78
7102bd4ef8  ldr x9,[x8, #0x8]
7102bd4efc  strb w24,[x8, #0x128]
7102bd4f00  cbz x9,0x7102bd4f18
7102bd4f04  mov x10,#-0x1
7102bd4f08  str x10,[x9, #0xd8]
7102bd4f0c  ldr x0,[x8, #0x8]
7102bd4f10  mov w1,wzr
7102bd4f14  bl 0x7100532bc0
7102bd4f18  madd x9,x21,x25,x27
7102bd4f1c  ldr x8,[x20]
7102bd4f20  ldr x8,[x8, #0x8]
7102bd4f24  ldr s0,[x9, #0x8]
7102bd4f28  ldr x8,[x8, #0x18]
7102bd4f2c  fmul s0,s0,s14
7102bd4f30  ldrb w9,[x8, #0x128]
7102bd4f34  fadd s0,s8,s0
7102bd4f38  cbz w9,0x7102bd4f80
7102bd4f3c  ldr x9,[x8, #0x8]
7102bd4f40  ldrb w10,[x9, #0xe7]
7102bd4f44  ldrb w9,[x9, #0xe8]
7102bd4f48  orr w9,w9,w10
7102bd4f4c  tst w9,#0xff
7102bd4f50  b.ne 0x7102bd4f80
7102bd4f54  ldr q1,[x8, #0x10]
7102bd4f58  ldr q2,[sp, #0x20]
7102bd4f5c  fabd s2,s1,s2
7102bd4f60  fcmp s2,s10
7102bd4f64  b.gt 0x7102bd4f78
7102bd4f68  dup s1,v1.S[0x1]
7102bd4f6c  fabd s1,s1,s12
7102bd4f70  fcmp s1,s10
7102bd4f74  b.le 0x7102bd4f8c
7102bd4f78  strb w24,[x8, #0x12a]
7102bd4f7c  b 0x7102bd4f84
7102bd4f80  strb w24,[x8, #0x129]
7102bd4f84  ldr q1,[sp, #0x30]
7102bd4f88  str q1,[x8, #0x10]
7102bd4f8c  fmov s1,wzr
7102bd4f90  fabd s1,s1,s0
7102bd4f94  fcmp s1,s10
7102bd4f98  b.pl 0x7102bd4fac
7102bd4f9c  ldr s1,[x8, #0x30]
7102bd4fa0  fabd s1,s1,s0
7102bd4fa4  fcmp s1,s10
7102bd4fa8  b.mi 0x7102bd4fb4
7102bd4fac  str s0,[x8, #0x30]
7102bd4fb0  strb w24,[x8, #0x129]
7102bd4fb4  ldr q0,[x8, #0x50]
7102bd4fb8  fadd s1,s0,s11
7102bd4fbc  fabs s1,s1
7102bd4fc0  fcmp s1,s10
7102bd4fc4  b.mi 0x7102bd4fd8
7102bd4fc8  fmov s1,0x3f800000
7102bd4fcc  mov v0.S[0x0],v1.S[0x0]
7102bd4fd0  str q0,[x8, #0x50]
7102bd4fd4  strb w24,[x8, #0x129]
7102bd4fd8  dup s1,v0.S[0x1]
7102bd4fdc  fadd s1,s1,s11
7102bd4fe0  fabs s1,s1
7102bd4fe4  fcmp s1,s10
7102bd4fe8  b.mi 0x7102bd4ffc
7102bd4fec  fmov s1,0x3f800000
7102bd4ff0  mov v0.S[0x1],v1.S[0x0]
7102bd4ff4  str q0,[x8, #0x50]
7102bd4ff8  strb w24,[x8, #0x129]
7102bd4ffc  ldr x8,[x20]
7102bd5000  ldr x8,[x8, #0x8]
7102bd5004  ldr x9,[x8, #0x98]!
7102bd5008  cmp x8,x9
7102bd500c  b.eq 0x7102bd5020
7102bd5010  strb w24,[x9, #0x44]
7102bd5014  ldr x9,[x9]
7102bd5018  cmp x8,x9
7102bd501c  b.ne 0x7102bd5010
7102bd5020  add x21,x21,#0x1
7102bd5024  cmp x21,#0x8
7102bd5028  b.cc 0x7102bd4d5c
7102bd502c  ldr x9,[x19, #0x78]
7102bd5030  ldp x8,x9,[x9]
7102bd5034  ldr q5,[sp, #0x40]
7102bd5038  fmov s6,0x3f800000
7102bd503c  cmp x8,x9
7102bd5040  b.eq 0x7102bd5120
7102bd5044  ldr q0,[x19, #0x30]
7102bd5048  mov v1.16B,v0.16B
7102bd504c  movi d2,#0x0
7102bd5050  mov v1.D[0x1],v2.D[0x0]
7102bd5054  mov w10,#0x1
7102bd5058  dup s2,v0.S[0x1]
7102bd505c  ldr x11,[x8]
7102bd5060  ldr x13,[x11, #0x8]
7102bd5064  ldrb w14,[x13, #0xe7]
7102bd5068  ldrb w13,[x13, #0xe8]
7102bd506c  ldrb w12,[x11, #0x128]
7102bd5070  cmp w12,#0x0
7102bd5074  orr w13,w13,w14
7102bd5078  and w12,w13,#0xff
7102bd507c  ccmp w12,#0x0,#0x0,ne
7102bd5080  b.eq 0x7102bd508c
7102bd5084  strb w10,[x11, #0x129]
7102bd5088  b 0x7102bd50b0
7102bd508c  ldr q3,[x11, #0x10]
7102bd5090  fabd s4,s3,s0
7102bd5094  fcmp s4,s10
7102bd5098  b.gt 0x7102bd50ac
7102bd509c  dup s3,v3.S[0x1]
7102bd50a0  fabd s3,s3,s2
7102bd50a4  fcmp s3,s10
7102bd50a8  b.le 0x7102bd50b4
7102bd50ac  strb w10,[x11, #0x12a]
7102bd50b0  str q1,[x11, #0x10]
7102bd50b4  fcmp s9,s10
7102bd50b8  b.pl 0x7102bd50cc
7102bd50bc  ldr s3,[x11, #0x30]
7102bd50c0  fabd s3,s3,s5
7102bd50c4  fcmp s3,s10
7102bd50c8  b.mi 0x7102bd50d4
7102bd50cc  str s5,[x11, #0x30]
7102bd50d0  strb w10,[x11, #0x129]
7102bd50d4  ldr q3,[x11, #0x50]
7102bd50d8  fadd s4,s3,s11
7102bd50dc  fabs s4,s4
7102bd50e0  fcmp s4,s10
7102bd50e4  b.mi 0x7102bd50f4
7102bd50e8  mov v3.S[0x0],v6.S[0x0]
7102bd50ec  strb w10,[x11, #0x129]
7102bd50f0  str q3,[x11, #0x50]
7102bd50f4  dup s4,v3.S[0x1]
7102bd50f8  fadd s4,s4,s11
7102bd50fc  fabs s4,s4
7102bd5100  fcmp s4,s10
7102bd5104  b.mi 0x7102bd5114
7102bd5108  mov v3.S[0x1],v6.S[0x0]
7102bd510c  strb w10,[x11, #0x129]
7102bd5110  str q3,[x11, #0x50]
7102bd5114  add x8,x8,#0x8
7102bd5118  cmp x9,x8
7102bd511c  b.ne 0x7102bd505c
7102bd5120  ldr x8,[x19, #0x10]
7102bd5124  cmp x8,#0x0
7102bd5128  cset w9,eq
7102bd512c  cbz x8,0x7102bd5dac
7102bd5130  ldr x10,[x8, #0xd8]
7102bd5134  cbz x10,0x7102bd41dc
7102bd5138  tbnz w9,#0x0,0x7102bd5dac
7102bd513c  ldr s0,[x10, #0x10]
7102bd5140  add x0,x8,#0x60
7102bd5144  bl 0x71025ee840
7102bd5148  b 0x7102bd5dac
7102bd514c  ldr x21,[x19, #0x20]
7102bd5150  ldr x0,[x8, #0x90]
7102bd5154  ldr x8,[x0]
7102bd5158  ldr x8,[x8, #0x158]
7102bd515c  blr x8
7102bd5160  mov x20,x0
7102bd5164  ldp x8,x9,[x20]
7102bd5168  ldp x10,x11,[x20, #0x10]
7102bd516c  str x10,[x21, #0x80]
7102bd5170  str x8,[x21, #0x70]
7102bd5174  ldp x8,x10,[x20, #0x20]
7102bd5178  ldp x12,x13,[x20, #0x30]
7102bd517c  str x9,[x21, #0x78]
7102bd5180  stp x10,x12,[x21, #0x98]
7102bd5184  str x13,[x21, #0xa8]
7102bd5188  stp x11,x8,[x21, #0x88]
7102bd518c  ldr x8,[x19, #0x70]
7102bd5190  ldp x20,x21,[x8]
7102bd5194  cmp x20,x21
7102bd5198  b.eq 0x7102bd51d0
7102bd519c  mov w23,#0x1
7102bd51a0  mov x24,#-0x1
7102bd51a4  ldr x8,[x20]
7102bd51a8  ldr x9,[x8, #0x8]
7102bd51ac  strb w23,[x8, #0x128]
7102bd51b0  cbz x9,0x7102bd51c4
7102bd51b4  str x24,[x9, #0xd8]
7102bd51b8  ldr x0,[x8, #0x8]
7102bd51bc  mov w1,wzr
7102bd51c0  bl 0x7100532bc0
7102bd51c4  add x20,x20,#0x8
7102bd51c8  cmp x21,x20
7102bd51cc  b.ne 0x7102bd51a4
7102bd51d0  ldr x8,[x19, #0x78]
7102bd51d4  ldp x0,x1,[x8]
7102bd51d8  mov w2,#0x1
7102bd51dc  bl 0x71025f4d80
7102bd51e0  ldr x8,[x22]
7102bd51e4  fmov s8,wzr
7102bd51e8  cbz x8,0x7102bd5268
7102bd51ec  ldr x8,[x8, #0xd8]
7102bd51f0  cbz x8,0x7102bd5268
7102bd51f4  ldr s8,[x8, #0x10]
7102bd51f8  adrp x8,0x7104472000
7102bd51fc  ldr s0,[x8, #0x980]
7102bd5200  fcmp s8,s0
7102bd5204  b.lt 0x7102bd5268
7102bd5208  ldrb w8,[x19, #0x68]
7102bd520c  cbnz w8,0x7102bd5268
7102bd5210  ldr x0,[x19, #0x20]
7102bd5214  mov w8,#0x1
7102bd5218  strb w8,[x19, #0x68]
7102bd521c  ldr x8,[x0, #0x30]
7102bd5220  cbz x8,0x7102bd5230
7102bd5224  ldrb w8,[x8, #0x10]
7102bd5228  cmp w8,#0x0
7102bd522c  cset w8,ne
7102bd5230  tbnz w8,#0x0,0x7102bd5240
7102bd5234  ldrb w8,[x0, #0x40]
7102bd5238  cbnz w8,0x7102bd5240
7102bd523c  bl 0x710313ef20
7102bd5240  ldr x8,[x19]
7102bd5244  ldr x8,[x8, #0x338]
7102bd5248  ldr x8,[x8]
7102bd524c  ldr x0,[x8, #0x8]
7102bd5250  cbz x0,0x7102bd5268
7102bd5254  ldr x8,[x0]
7102bd5258  ldr w2,[x19, #0xc4]
7102bd525c  orr w1,wzr,#0x1e
7102bd5260  ldr x8,[x8, #0x58]
7102bd5264  blr x8
7102bd5268  ldr x8,[x19, #0x20]
7102bd526c  ldr x9,[x8, #0x30]
7102bd5270  cbz x9,0x7102bd5280
7102bd5274  ldrb w9,[x9, #0x10]
7102bd5278  cmp w9,#0x0
7102bd527c  cset w9,ne
7102bd5280  tbnz w9,#0x0,0x7102bd528c
7102bd5284  ldrb w8,[x8, #0x40]
7102bd5288  cbz w8,0x7102bd540c
7102bd528c  adrp x9,0x710446a000
7102bd5290  ldr q1,[x9, #0x350]
7102bd5294  adrp x9,0x7104465000
7102bd5298  ldr q0,[x9, #0x6b0]
7102bd529c  adrp x9,0x7104468000
7102bd52a0  ldr q2,[x9, #0xca0]
7102bd52a4  adrp x9,0x710446a000
7102bd52a8  ldr q3,[x9, #0x360]
7102bd52ac  ldr x8,[x22]
7102bd52b0  cbz x8,0x7102bd5400
7102bd52b4  stp q3,q2,[sp, #0x10]
7102bd52b8  stp q1,q0,[sp, #0x30]
7102bd52bc  ldr x20,[x8, #0xd8]
7102bd52c0  ldr x8,[x20]
7102bd52c4  ldr x8,[x8, #0x10]
7102bd52c8  mov x0,x20
7102bd52cc  blr x8
7102bd52d0  ldr x8,[x20, #0x8]
7102bd52d4  ldrb w9,[x8, #0xa8]
7102bd52d8  cbz w9,0x7102bd5328
7102bd52dc  ldr x0,[x8, #0x48]
7102bd52e0  ldr x8,[x0]
7102bd52e4  ldr x8,[x8, #0x10]
7102bd52e8  mov w1,wzr
7102bd52ec  blr x8
7102bd52f0  ldr x8,[x20, #0x8]
7102bd52f4  ldrb w9,[x8, #0xa8]
7102bd52f8  cbz w9,0x7102bd5328
7102bd52fc  ldr x21,[x8, #0x48]
7102bd5300  ldr x8,[x21]
7102bd5304  ldr x8,[x8, #0x10]
7102bd5308  mov w1,#0x1
7102bd530c  mov x0,x21
7102bd5310  blr x8
7102bd5314  ldr x8,[x21]
7102bd5318  ldr x8,[x8, #0x10]
7102bd531c  mov w1,#0x2
7102bd5320  mov x0,x21
7102bd5324  blr x8
7102bd5328  strb wzr,[x20, #0x20]
7102bd532c  ldr x21,[x22]
7102bd5330  cbz x21,0x7102bd5378
7102bd5334  ldr x8,[x21, #0xd8]
7102bd5338  cbz x8,0x7102bd5384
7102bd533c  ldr x8,[x8, #0x8]
7102bd5340  ldr x0,[x8, #0x8]
7102bd5344  ldr x8,[x0]
7102bd5348  ldr x8,[x8, #0x18]
7102bd534c  adrp x1,0x71042f5000
7102bd5350  add x1,x1,#0xf7e
7102bd5354  blr x8
7102bd5358  ldp q1,q0,[sp, #0x30]
7102bd535c  ldp q3,q2,[sp, #0x10]
7102bd5360  ldr x21,[x22]
7102bd5364  cbz x21,0x7102bd5400
7102bd5368  mov w20,w0
7102bd536c  ldr x8,[x21, #0xd8]
7102bd5370  cbnz x8,0x7102bd5390
7102bd5374  b 0x7102bd53d4
7102bd5378  ldp q1,q0,[sp, #0x30]
7102bd537c  ldp q3,q2,[sp, #0x10]
7102bd5380  b 0x7102bd5400
7102bd5384  mov w20,#0xffffffff
7102bd5388  ldr x8,[x21, #0xd8]
7102bd538c  cbz x8,0x7102bd53d4
7102bd5390  ldr x8,[x8, #0x8]
7102bd5394  ldr x0,[x8, #0x8]
7102bd5398  ldr x8,[x0]
7102bd539c  ldr x8,[x8, #0x10]
7102bd53a0  blr x8
7102bd53a4  cmp w0,w20
7102bd53a8  b.ls 0x7102bd53d4
7102bd53ac  ldr x8,[x21, #0xd8]
7102bd53b0  ldr x8,[x8, #0x8]
7102bd53b4  ldr x0,[x8, #0x48]
7102bd53b8  ldr x8,[x0]
7102bd53bc  ldr x8,[x8, #0x38]
7102bd53c0  mov w1,wzr
7102bd53c4  blr x8
7102bd53c8  mov w8,w20
7102bd53cc  add x0,x1,x8, LSL #0x6
7102bd53d0  b 0x7102bd53e4
7102bd53d4  ldr x0,[x21, #0x90]
7102bd53d8  ldr x8,[x0]
7102bd53dc  ldr x8,[x8, #0x158]
7102bd53e0  blr x8
7102bd53e4  add x8,x0,#0x10
7102bd53e8  add x9,x0,#0x20
7102bd53ec  add x10,x0,#0x30
7102bd53f0  ldr q0,[x9]
7102bd53f4  ldr q2,[x0]
7102bd53f8  ldr q3,[x8]
7102bd53fc  ldr q1,[x10]
7102bd5400  ldr x8,[x19, #0x20]
7102bd5404  stp q2,q3,[x8, #0x70]
7102bd5408  stp q0,q1,[x8, #0x90]
7102bd540c  adrp x8,0x7104472000
7102bd5410  ldr s0,[x8, #0xdd8]
7102bd5414  fcmp s8,s0
7102bd5418  b.lt 0x7102bd5da4
7102bd541c  adrp x9,0x710532a000
7102bd5420  ldr x9,[x9, #0x9d8]
7102bd5424  ldr x9,[x9]
7102bd5428  ldr x9,[x9, #0x1c0]
7102bd542c  ldr x8,[x19]
7102bd5430  ldr x8,[x8, #0x308]
7102bd5434  ldr x8,[x8, #0x8]
7102bd5438  ldr x9,[x9, #0xb0]
7102bd543c  ldr x9,[x9]
7102bd5440  ldr x9,[x9, #0x20]
7102bd5444  cmp x9,x8
7102bd5448  b.ne 0x7102bd5478
7102bd544c  adrp x8,0x71052b8000
7102bd5450  ldr x8,[x8, #0xf00]
7102bd5454  ldr x8,[x8]
7102bd5458  add x0,x8,#0x2b0
7102bd545c  adrp x8,0x71052a8000
7102bd5460  ldr x8,[x8, #0xa88]
7102bd5464  ldr q0,[x8]
7102bd5468  mov w1,#0x5
7102bd546c  add x2,sp,#0x90
7102bd5470  str q0,[sp, #0x90]
7102bd5474  bl 0x71005162f0
7102bd5478  ldr x8,[x22]
7102bd547c  cbz x8,0x7102bd54a8
7102bd5480  ldr x0,[x8, #0xd8]
7102bd5484  fmov s0,wzr
7102bd5488  mov w1,#0x1
7102bd548c  bl 0x71025ee450
7102bd5490  ldr x8,[x22]
7102bd5494  cbz x8,0x7102bd54a8
7102bd5498  ldr x8,[x8, #0xd8]
7102bd549c  cbz x8,0x7102bd54a8
7102bd54a0  mov w9,#0x1
7102bd54a4  strb w9,[x8, #0x21]
7102bd54a8  ldr x20,[x19, #0x20]
7102bd54ac  ldrb w8,[x20, #0x40]
7102bd54b0  cbz w8,0x7102bd5500
7102bd54b4  ldr x21,[x20, #0x30]
7102bd54b8  cbz x21,0x7102bd54f0
7102bd54bc  ldrb w8,[x21, #0x10]
7102bd54c0  cbz w8,0x7102bd54f0
7102bd54c4  ldrb w8,[x21, #0x50]
7102bd54c8  strb wzr,[x21, #0x10]
7102bd54cc  cbz w8,0x7102bd54f0
7102bd54d0  ldr x8,[x21]
7102bd54d4  ldr w0,[x8, #0x8]
7102bd54d8  bl 0x71003ac560
7102bd54dc  ldr x8,[x0]
7102bd54e0  ldr x8,[x8, #0x48]
7102bd54e4  mov w1,wzr
7102bd54e8  blr x8
7102bd54ec  strb wzr,[x21, #0x50]
7102bd54f0  ldr x8,[x20]
7102bd54f4  ldr x8,[x8, #0x30]
7102bd54f8  mov x0,x20
7102bd54fc  blr x8
7102bd5500  strb wzr,[x20, #0x40]
7102bd5504  str wzr,[x19, #0x54]
7102bd5508  b 0x7102bd5768
7102bd550c  mov w9,wzr
7102bd5510  mov w8,wzr
7102bd5514  tbz w9,#0x0,0x7102bd4b60
7102bd5518  mov w20,w8
7102bd551c  fmov s0,0x40a00000
7102bd5520  fcmp s9,s0
7102bd5524  b.lt 0x7102bd5584
7102bd5528  tbnz w8,#0x0,0x7102bd5584
7102bd552c  adrp x9,0x7104472000
7102bd5530  ldr s0,[x19, #0x48]
7102bd5534  ldr s1,[x9, #0xfbc]
7102bd5538  ldr x8,[x19, #0x8]
7102bd553c  fcmp s0,s1
7102bd5540  b.ge 0x7102bd5560
7102bd5544  adrp x9,0x7104473000
7102bd5548  ldr s1,[x9, #0x4e8]
7102bd554c  fcmp s0,s1
7102bd5550  b.pl 0x7102bd556c
7102bd5554  adrp x9,0x7104472000
7102bd5558  ldr s1,[x9, #0x58c]
7102bd555c  b 0x7102bd5568
7102bd5560  adrp x9,0x7104473000
7102bd5564  ldr s1,[x9, #0x948]
7102bd5568  fadd s0,s0,s1
7102bd556c  ldr s1,[x8, #0x21c]
7102bd5570  fcmp s0,s1
7102bd5574  b.lt 0x7102bd5584
7102bd5578  ldr s1,[x8, #0x220]
7102bd557c  fcmp s0,s1
7102bd5580  b.ls 0x7102bd58c8
7102bd5584  ldrb w8,[x19, #0x149]
7102bd5588  cbz w8,0x7102bd55d4
7102bd558c  ldrsw x9,[x19, #0x14c]
7102bd5590  cmp w9,#0x37
7102bd5594  b.hi 0x7102bd55c8
7102bd5598  adrp x8,0x71052b6000
7102bd559c  ldr x8,[x8, #0xfd8]
7102bd55a0  ldr x8,[x8]
7102bd55a4  ldr x8,[x8, #0xc0]
7102bd55a8  add x9,x8,x9
7102bd55ac  ldrb w10,[x9, #0x464]
7102bd55b0  cbz w10,0x7102bd55c8
7102bd55b4  add x9,x9,#0x464
7102bd55b8  strb wzr,[x9]
7102bd55bc  ldr w9,[x8]
7102bd55c0  sub w9,w9,#0x1
7102bd55c4  str w9,[x8]
7102bd55c8  mov w8,#0xffffffff
7102bd55cc  str w8,[x19, #0x14c]
7102bd55d0  strb wzr,[x19, #0x149]
7102bd55d4  strb wzr,[x19, #0x14a]
7102bd55d8  tbnz w20,#0x0,0x7102bd5614
7102bd55dc  ldrb w8,[x19, #0x68]
7102bd55e0  cbnz w8,0x7102bd5614
7102bd55e4  mov w8,#0x1
7102bd55e8  strb w8,[x19, #0x68]
7102bd55ec  ldr x8,[x19]
7102bd55f0  ldr x8,[x8, #0x338]
7102bd55f4  ldr x8,[x8]
7102bd55f8  ldr x0,[x8, #0x8]
7102bd55fc  cbz x0,0x7102bd5614
7102bd5600  ldr x8,[x0]
7102bd5604  ldr w2,[x19, #0xc4]
7102bd5608  orr w1,wzr,#0x1f
7102bd560c  ldr x8,[x8, #0x58]
7102bd5610  blr x8
7102bd5614  ldr x8,[x19, #0x18]
7102bd5618  ldr x9,[x8, #0x30]
7102bd561c  cbz x9,0x7102bd562c
7102bd5620  ldrb w9,[x9, #0x10]
7102bd5624  cmp w9,#0x0
7102bd5628  cset w9,ne
7102bd562c  tbnz w9,#0x0,0x7102bd5638
7102bd5630  ldrb w8,[x8, #0x40]
7102bd5634  cbz w8,0x7102bd5904
7102bd5638  ldr x8,[x22]
7102bd563c  cbz x8,0x7102bd5904
7102bd5640  ldr x20,[x8, #0xd8]
7102bd5644  ldr x8,[x20]
7102bd5648  ldr x8,[x8, #0x10]
7102bd564c  mov x0,x20
7102bd5650  blr x8
7102bd5654  ldr x8,[x20, #0x8]
7102bd5658  ldrb w9,[x8, #0xa8]
7102bd565c  cbz w9,0x7102bd56ac
7102bd5660  ldr x0,[x8, #0x48]
7102bd5664  ldr x8,[x0]
7102bd5668  ldr x8,[x8, #0x10]
7102bd566c  mov w1,wzr
7102bd5670  blr x8
7102bd5674  ldr x8,[x20, #0x8]
7102bd5678  ldrb w9,[x8, #0xa8]
7102bd567c  cbz w9,0x7102bd56ac
7102bd5680  ldr x21,[x8, #0x48]
7102bd5684  ldr x8,[x21]
7102bd5688  ldr x8,[x8, #0x10]
7102bd568c  mov w1,#0x1
7102bd5690  mov x0,x21
7102bd5694  blr x8
7102bd5698  ldr x8,[x21]
7102bd569c  ldr x8,[x8, #0x10]
7102bd56a0  mov w1,#0x2
7102bd56a4  mov x0,x21
7102bd56a8  blr x8
7102bd56ac  strb wzr,[x20, #0x20]
7102bd56b0  ldr x8,[x22]
7102bd56b4  cbz x8,0x7102bd5904
7102bd56b8  ldr x8,[x8, #0xd8]
7102bd56bc  cbz x8,0x7102bd5904
7102bd56c0  ldr x8,[x8, #0x8]
7102bd56c4  ldr x0,[x8, #0x8]
7102bd56c8  ldr x8,[x0]
7102bd56cc  ldr x8,[x8, #0x18]
7102bd56d0  adrp x1,0x71042f5000
7102bd56d4  add x1,x1,#0xf7e
7102bd56d8  blr x8
7102bd56dc  cmn w0,#0x1
7102bd56e0  b.eq 0x7102bd5904
7102bd56e4  ldr x21,[x22]
7102bd56e8  cbz x21,0x7102bd58d8
7102bd56ec  ldr x8,[x21, #0xd8]
7102bd56f0  cbz x8,0x7102bd5898
7102bd56f4  ldr x8,[x8, #0x8]
7102bd56f8  mov w20,w0
7102bd56fc  ldr x0,[x8, #0x8]
7102bd5700  ldr x8,[x0]
7102bd5704  ldr x8,[x8, #0x10]
7102bd5708  blr x8
7102bd570c  cmp w0,w20
7102bd5710  b.ls 0x7102bd5898
7102bd5714  ldr x8,[x21, #0xd8]
7102bd5718  ldr x8,[x8, #0x8]
7102bd571c  ldr x0,[x8, #0x48]
7102bd5720  ldr x8,[x0]
7102bd5724  ldr x8,[x8, #0x38]
7102bd5728  mov w1,wzr
7102bd572c  blr x8
7102bd5730  mov w8,w20
7102bd5734  add x0,x1,x8, LSL #0x6
7102bd5738  b 0x7102bd58a8
7102bd573c  str wzr,[x21, #0x40]
7102bd5740  ldr x8,[x20]
7102bd5744  cbz x8,0x7102bd5760
7102bd5748  ldrb w9,[x8, #0xe0]
7102bd574c  cbz w9,0x7102bd5760
7102bd5750  ldr x8,[x8, #0xc8]
7102bd5754  cbz x8,0x7102bd5760
7102bd5758  mov w9,#0x101
7102bd575c  strh w9,[x8, #0x30]
7102bd5760  mov w8,#0x2
7102bd5764  str w8,[x19, #0x54]
7102bd5768  mov w8,#0x1
7102bd576c  strb w8,[x19, #0x59]
7102bd5770  ldr x8,[x19, #0x10]
7102bd5774  cbnz x8,0x7102bd41b8
7102bd5778  b 0x7102bd5dac
7102bd577c  mov x0,x1
7102bd5780  mov x20,#0xff72
7102bd5784  movk x20,#0xe331, LSL #16
7102bd5788  adrp x2,0x71042a1000
7102bd578c  add x2,x2,#0x415
7102bd5790  movk x20,#0x14, LSL #32
7102bd5794  bl 0x71025f55b0
7102bd5798  ldr x8,[x19, #0xc8]
7102bd579c  ldp x0,x1,[x8]
7102bd57a0  adrp x2,0x7104410000
7102bd57a4  add x2,x2,#0xa5e
7102bd57a8  bl 0x71025f55b0
7102bd57ac  ldr x8,[x19]
7102bd57b0  adrp x21,0x71052a8000
7102bd57b4  mov x3,#0x3cdc
7102bd57b8  movk x3,#0x5f1b, LSL #16
7102bd57bc  movk x3,#0xc, LSL #32
7102bd57c0  add x0,sp,#0x90
7102bd57c4  add x4,sp,#0x50
7102bd57c8  mov w5,#0x1
7102bd57cc  ldr x8,[x8, #0x320]
7102bd57d0  ldr x21,[x21, #0xa88]
7102bd57d4  ldr q0,[x21]
7102bd57d8  mov x2,x20
7102bd57dc  str q0,[sp, #0x50]
7102bd57e0  ldr x8,[x8, #0x48]
7102bd57e4  ldr x1,[x8, #0x320]
7102bd57e8  add x22,sp,#0x90
7102bd57ec  bl 0x71025effe0
7102bd57f0  add x9,x19,#0xd8
7102bd57f4  cmp x9,x22
7102bd57f8  b.eq 0x7102bd5f60
7102bd57fc  ldr x10,[x19, #0xe8]
7102bd5800  ldr x8,[sp, #0xa0]
7102bd5804  cmp x10,x8
7102bd5808  b.eq 0x7102bd5f64
7102bd580c  cbz x8,0x7102bd5f3c
7102bd5810  cbz x10,0x7102bd5838
7102bd5814  ldr x11,[x9]
7102bd5818  ldr x12,[x19, #0xe0]
7102bd581c  str x11,[x12]
7102bd5820  str x12,[x11, #0x8]
7102bd5824  ldr x11,[x10, #0x10]
7102bd5828  sub x11,x11,#0x1
7102bd582c  str x11,[x10, #0x10]
7102bd5830  stp xzr,xzr,[x9, #0x8]
7102bd5834  str xzr,[x9]
7102bd5838  ldr x11,[x8, #0x20]
7102bd583c  add x10,x8,#0x18
7102bd5840  stp x10,x11,[x19, #0xd8]
7102bd5844  str x9,[x8, #0x20]
7102bd5848  str x9,[x11]
7102bd584c  ldr x9,[x8, #0x10]
7102bd5850  add x9,x9,#0x1
7102bd5854  str x9,[x8, #0x10]
7102bd5858  str x8,[x19, #0xe8]
7102bd585c  b 0x7102bd5f60
7102bd5860  str w22,[x21, #0x40]
7102bd5864  ldr x8,[x19]
7102bd5868  ldr x8,[x8, #0x338]
7102bd586c  ldr x8,[x8]
7102bd5870  ldr x0,[x8, #0x8]
7102bd5874  cbz x0,0x7102bd588c
7102bd5878  ldr x8,[x0]
7102bd587c  ldr w2,[x19, #0xc4]
7102bd5880  mov w1,#0x1b
7102bd5884  ldr x8,[x8, #0x58]
7102bd5888  blr x8
7102bd588c  ldr x8,[x20]
7102bd5890  cbnz x8,0x7102bd4890
7102bd5894  b 0x7102bd5da4
7102bd5898  ldr x0,[x21, #0x90]
7102bd589c  ldr x8,[x0]
7102bd58a0  ldr x8,[x8, #0x158]
7102bd58a4  blr x8
7102bd58a8  add x8,x0,#0x10
7102bd58ac  add x9,x0,#0x20
7102bd58b0  add x10,x0,#0x30
7102bd58b4  ldr q0,[x9]
7102bd58b8  ldr q2,[x0]
7102bd58bc  ldr q3,[x8]
7102bd58c0  ldr q1,[x10]
7102bd58c4  b 0x7102bd58f8
7102bd58c8  add x0,x19,#0x140
7102bd58cc  bl 0x710317dc90
7102bd58d0  tbz w20,#0x0,0x7102bd55dc
7102bd58d4  b 0x7102bd5614
7102bd58d8  adrp x8,0x710446a000
7102bd58dc  ldr q1,[x8, #0x350]
7102bd58e0  adrp x8,0x7104465000
7102bd58e4  ldr q0,[x8, #0x6b0]
7102bd58e8  adrp x8,0x7104468000
7102bd58ec  ldr q2,[x8, #0xca0]
7102bd58f0  adrp x8,0x710446a000
7102bd58f4  ldr q3,[x8, #0x360]
7102bd58f8  ldr x8,[x19, #0x18]
7102bd58fc  stp q2,q3,[x8, #0x70]
7102bd5900  stp q0,q1,[x8, #0x90]
7102bd5904  ldr x8,[x19, #0x8]
7102bd5908  ldr s0,[x8, #0x1dc]
7102bd590c  fcmp s9,s0
7102bd5910  b.lt 0x7102bd5a88
7102bd5914  ldr s0,[x19, #0x48]
7102bd5918  adrp x9,0x7104472000
7102bd591c  ldr s1,[x9, #0x58c]
7102bd5920  fcmp s0,#0.0
7102bd5924  b.mi 0x7102bd5938
7102bd5928  fcmp s0,s1
7102bd592c  b.le 0x7102bd593c
7102bd5930  adrp x9,0x7104473000
7102bd5934  ldr s1,[x9, #0x948]
7102bd5938  fadd s0,s0,s1
7102bd593c  ldr s1,[x8, #0x1d8]
7102bd5940  adrp x8,0x7104472000
7102bd5944  ldr s2,[x8, #0xfbc]
7102bd5948  fsub s3,s2,s1
7102bd594c  fcmp s0,s3
7102bd5950  b.lt 0x7102bd5a88
7102bd5954  fadd s1,s1,s2
7102bd5958  fcmp s0,s1
7102bd595c  b.hi 0x7102bd5a88
7102bd5960  ldr x8,[x19, #0x70]
7102bd5964  ldr x8,[x8]
7102bd5968  ldr x8,[x8, #0x8]
7102bd596c  ldr x20,[x8, #0x8]
7102bd5970  ldr x8,[x20, #0x78]
7102bd5974  cmp x8,#0x4
7102bd5978  b.cc 0x7102bd5994
7102bd597c  ldr x8,[x20, #0x80]
7102bd5980  orr x9,xzr,#-0x3
7102bd5984  ldr x8,[x8]
7102bd5988  adds x9,x9,#0x1
7102bd598c  b.ne 0x7102bd5984
7102bd5990  b 0x7102bd5998
7102bd5994  mov x8,xzr
7102bd5998  ldr w1,[x8, #0xfc]
7102bd599c  strb wzr,[x8, #0x100]
7102bd59a0  cbz w1,0x7102bd59cc
7102bd59a4  ldr x8,[x8, #0xf0]
7102bd59a8  ldr x9,[x8]
7102bd59ac  orr w10,wzr,#0x18
7102bd59b0  madd x9,x1,x10,x9
7102bd59b4  strb wzr,[x9, #0x10]
7102bd59b8  ldr x0,[x8, #0x18]
7102bd59bc  ldr x8,[x0]
7102bd59c0  ldr x8,[x8, #0x18]
7102bd59c4  mov w2,wzr
7102bd59c8  blr x8
7102bd59cc  ldr x8,[x20, #0x78]
7102bd59d0  cmp x8,#0x5
7102bd59d4  b.cc 0x7102bd59f0
7102bd59d8  ldr x8,[x20, #0x80]
7102bd59dc  ldr x8,[x8]
7102bd59e0  ldr x8,[x8]
7102bd59e4  ldr x8,[x8]
7102bd59e8  ldr x8,[x8]
7102bd59ec  b 0x7102bd59f4
7102bd59f0  mov x8,xzr
7102bd59f4  ldr w1,[x8, #0xfc]
7102bd59f8  strb wzr,[x8, #0x100]
7102bd59fc  cbz w1,0x7102bd5a28
7102bd5a00  ldr x8,[x8, #0xf0]
7102bd5a04  ldr x9,[x8]
7102bd5a08  orr w10,wzr,#0x18
7102bd5a0c  madd x9,x1,x10,x9
7102bd5a10  strb wzr,[x9, #0x10]
7102bd5a14  ldr x0,[x8, #0x18]
7102bd5a18  ldr x8,[x0]
7102bd5a1c  ldr x8,[x8, #0x18]
7102bd5a20  mov w2,wzr
7102bd5a24  blr x8
7102bd5a28  ldr x8,[x20, #0x78]
7102bd5a2c  cmp x8,#0x6
7102bd5a30  b.cc 0x7102bd5a50
7102bd5a34  ldr x8,[x20, #0x80]
7102bd5a38  ldr x8,[x8]
7102bd5a3c  ldr x8,[x8]
7102bd5a40  ldr x8,[x8]
7102bd5a44  ldr x8,[x8]
7102bd5a48  ldr x8,[x8]
7102bd5a4c  b 0x7102bd5a54
7102bd5a50  mov x8,xzr
7102bd5a54  ldr w1,[x8, #0xfc]
7102bd5a58  strb wzr,[x8, #0x100]
7102bd5a5c  cbz w1,0x7102bd5a88
7102bd5a60  ldr x8,[x8, #0xf0]
7102bd5a64  ldr x9,[x8]
7102bd5a68  orr w10,wzr,#0x18
7102bd5a6c  madd x9,x1,x10,x9
7102bd5a70  strb wzr,[x9, #0x10]
7102bd5a74  ldr x0,[x8, #0x18]
7102bd5a78  ldr x8,[x0]
7102bd5a7c  ldr x8,[x8, #0x18]
7102bd5a80  mov w2,wzr
7102bd5a84  blr x8
7102bd5a88  adrp x8,0x7104471000
7102bd5a8c  ldr s8,[x8, #0xe58]
7102bd5a90  fcmp s9,s8
7102bd5a94  b.lt 0x7102bd5da4
7102bd5a98  adrp x9,0x710532a000
7102bd5a9c  ldr x9,[x9, #0x9d8]
7102bd5aa0  ldr x9,[x9]
7102bd5aa4  ldr x9,[x9, #0x1c0]
7102bd5aa8  ldr x8,[x19]
7102bd5aac  ldr x8,[x8, #0x308]
7102bd5ab0  ldr x8,[x8, #0x8]
7102bd5ab4  ldr x9,[x9, #0xb0]
7102bd5ab8  ldr x9,[x9]
7102bd5abc  ldr x9,[x9, #0x20]
7102bd5ac0  cmp x9,x8
7102bd5ac4  b.ne 0x7102bd5af4
7102bd5ac8  adrp x8,0x71052b8000
7102bd5acc  ldr x8,[x8, #0xf00]
7102bd5ad0  ldr x8,[x8]
7102bd5ad4  add x0,x8,#0x2b0
7102bd5ad8  adrp x8,0x71052a8000
7102bd5adc  ldr x8,[x8, #0xa88]
7102bd5ae0  ldr q0,[x8]
7102bd5ae4  orr w1,wzr,#0x7
7102bd5ae8  add x2,sp,#0x90
7102bd5aec  str q0,[sp, #0x90]
7102bd5af0  bl 0x71005162f0
7102bd5af4  ldr x8,[x22]
7102bd5af8  cbz x8,0x7102bd5b24
7102bd5afc  ldr x0,[x8, #0xd8]
7102bd5b00  mov v0.16B,v8.16B
7102bd5b04  mov w1,#0x1
7102bd5b08  bl 0x71025ee450
7102bd5b0c  ldr x8,[x22]
7102bd5b10  cbz x8,0x7102bd5b24
7102bd5b14  ldr x8,[x8, #0xd8]
7102bd5b18  cbz x8,0x7102bd5b24
7102bd5b1c  mov w9,#0x1
7102bd5b20  strb w9,[x8, #0x21]
7102bd5b24  ldr x20,[x19, #0x18]
7102bd5b28  ldrb w8,[x20, #0x40]
7102bd5b2c  cbz w8,0x7102bd5b7c
7102bd5b30  ldr x21,[x20, #0x30]
7102bd5b34  cbz x21,0x7102bd5b6c
7102bd5b38  ldrb w8,[x21, #0x10]
7102bd5b3c  cbz w8,0x7102bd5b6c
7102bd5b40  ldrb w8,[x21, #0x50]
7102bd5b44  strb wzr,[x21, #0x10]
7102bd5b48  cbz w8,0x7102bd5b6c
7102bd5b4c  ldr x8,[x21]
7102bd5b50  ldr w0,[x8, #0x8]
7102bd5b54  bl 0x71003ac560
7102bd5b58  ldr x8,[x0]
7102bd5b5c  ldr x8,[x8, #0x48]
7102bd5b60  mov w1,wzr
7102bd5b64  blr x8
7102bd5b68  strb wzr,[x21, #0x50]
7102bd5b6c  ldr x8,[x20]
7102bd5b70  ldr x8,[x8, #0x30]
7102bd5b74  mov x0,x20
7102bd5b78  blr x8
7102bd5b7c  strb wzr,[x20, #0x40]
7102bd5b80  ldr x9,[x19, #0x70]
7102bd5b84  orr w8,wzr,#0x3
7102bd5b88  str w8,[x19, #0x54]
7102bd5b8c  mov w8,#0x1
7102bd5b90  strb w8,[x19, #0x59]
7102bd5b94  ldr x9,[x9]
7102bd5b98  ldr x9,[x9, #0x8]
7102bd5b9c  ldr x20,[x9, #0x8]
7102bd5ba0  ldr x9,[x20, #0x78]
7102bd5ba4  cmp x9,#0x4
7102bd5ba8  b.cc 0x7102bd5bc4
7102bd5bac  ldr x9,[x20, #0x80]
7102bd5bb0  orr x10,xzr,#-0x3
7102bd5bb4  ldr x9,[x9]
7102bd5bb8  adds x10,x10,#0x1
7102bd5bbc  b.ne 0x7102bd5bb4
7102bd5bc0  b 0x7102bd5bc8
7102bd5bc4  mov x9,xzr
7102bd5bc8  ldr w1,[x9, #0xfc]
7102bd5bcc  strb w8,[x9, #0x100]
7102bd5bd0  cbz w1,0x7102bd5c10
7102bd5bd4  ldr x8,[x9, #0xf0]
7102bd5bd8  ldr x9,[x8]
7102bd5bdc  orr w10,wzr,#0x18
7102bd5be0  madd x9,x1,x10,x9
7102bd5be4  mov w10,#0x1
7102bd5be8  strb w10,[x9, #0x10]
7102bd5bec  ldr w9,[x9, #0x14]
7102bd5bf0  ldr x0,[x8, #0x18]
7102bd5bf4  ldr w8,[x8, #0x10]
7102bd5bf8  lsl w9,w10,w9
7102bd5bfc  tst w8,w9
7102bd5c00  ldr x8,[x0]
7102bd5c04  cset w2,ne
7102bd5c08  ldr x8,[x8, #0x18]
7102bd5c0c  blr x8
7102bd5c10  ldr x8,[x20, #0x78]
7102bd5c14  cmp x8,#0x5
7102bd5c18  b.cc 0x7102bd5c34
7102bd5c1c  ldr x8,[x20, #0x80]
7102bd5c20  ldr x8,[x8]
7102bd5c24  ldr x8,[x8]
7102bd5c28  ldr x8,[x8]
7102bd5c2c  ldr x9,[x8]
7102bd5c30  b 0x7102bd5c38
7102bd5c34  mov x9,xzr
7102bd5c38  ldr w1,[x9, #0xfc]
7102bd5c3c  mov w8,#0x1
7102bd5c40  strb w8,[x9, #0x100]
7102bd5c44  cbz w1,0x7102bd5c80
7102bd5c48  ldr x9,[x9, #0xf0]
7102bd5c4c  ldr x10,[x9]
7102bd5c50  orr w11,wzr,#0x18
7102bd5c54  madd x10,x1,x11,x10
7102bd5c58  strb w8,[x10, #0x10]
7102bd5c5c  ldr w10,[x10, #0x14]
7102bd5c60  ldr x0,[x9, #0x18]
7102bd5c64  ldr w9,[x9, #0x10]
7102bd5c68  lsl w8,w8,w10
7102bd5c6c  tst w9,w8
7102bd5c70  ldr x8,[x0]
7102bd5c74  cset w2,ne
7102bd5c78  ldr x8,[x8, #0x18]
7102bd5c7c  blr x8
7102bd5c80  ldr x8,[x20, #0x78]
7102bd5c84  cmp x8,#0x6
7102bd5c88  b.cc 0x7102bd5ca8
7102bd5c8c  ldr x8,[x20, #0x80]
7102bd5c90  ldr x8,[x8]
7102bd5c94  ldr x8,[x8]
7102bd5c98  ldr x8,[x8]
7102bd5c9c  ldr x8,[x8]
7102bd5ca0  ldr x9,[x8]
7102bd5ca4  b 0x7102bd5cac
7102bd5ca8  mov x9,xzr
7102bd5cac  ldr w1,[x9, #0xfc]
7102bd5cb0  mov w8,#0x1
7102bd5cb4  strb w8,[x9, #0x100]
7102bd5cb8  cbz w1,0x7102bd5cf4
7102bd5cbc  ldr x9,[x9, #0xf0]
7102bd5cc0  ldr x10,[x9]
7102bd5cc4  orr w11,wzr,#0x18
7102bd5cc8  madd x10,x1,x11,x10
7102bd5ccc  strb w8,[x10, #0x10]
7102bd5cd0  ldr w10,[x10, #0x14]
7102bd5cd4  ldr x0,[x9, #0x18]
7102bd5cd8  ldr w9,[x9, #0x10]
7102bd5cdc  lsl w8,w8,w10
7102bd5ce0  tst w9,w8
7102bd5ce4  ldr x8,[x0]
7102bd5ce8  cset w2,ne
7102bd5cec  ldr x8,[x8, #0x18]
7102bd5cf0  blr x8
7102bd5cf4  ldr x8,[x19, #0x70]
7102bd5cf8  ldp x0,x1,[x8]
7102bd5cfc  mov w2,#0x1
7102bd5d00  mov w20,#0x1
7102bd5d04  bl 0x71025f4d80
7102bd5d08  ldr x8,[x19, #0x78]
7102bd5d0c  ldp x21,x22,[x8]
7102bd5d10  cmp x21,x22
7102bd5d14  b.eq 0x7102bd5d48
7102bd5d18  mov x23,#-0x1
7102bd5d1c  ldr x8,[x21]
7102bd5d20  ldr x9,[x8, #0x8]
7102bd5d24  strb w20,[x8, #0x128]
7102bd5d28  cbz x9,0x7102bd5d3c
7102bd5d2c  str x23,[x9, #0xd8]
7102bd5d30  ldr x0,[x8, #0x8]
7102bd5d34  mov w1,wzr
7102bd5d38  bl 0x7100532bc0
7102bd5d3c  add x21,x21,#0x8
7102bd5d40  cmp x22,x21
7102bd5d44  b.ne 0x7102bd5d1c
7102bd5d48  mov w8,#0x43700000
7102bd5d4c  str w8,[x19, #0x64]
7102bd5d50  ldrb w8,[x19, #0x149]
7102bd5d54  cbz w8,0x7102bd5da0
7102bd5d58  ldrsw x9,[x19, #0x14c]
7102bd5d5c  cmp w9,#0x37
7102bd5d60  b.hi 0x7102bd5d94
7102bd5d64  adrp x8,0x71052b6000
7102bd5d68  ldr x8,[x8, #0xfd8]
7102bd5d6c  ldr x8,[x8]
7102bd5d70  ldr x8,[x8, #0xc0]
7102bd5d74  add x9,x8,x9
7102bd5d78  ldrb w10,[x9, #0x464]
7102bd5d7c  cbz w10,0x7102bd5d94
7102bd5d80  add x9,x9,#0x464
7102bd5d84  strb wzr,[x9]
7102bd5d88  ldr w9,[x8]
7102bd5d8c  sub w9,w9,#0x1
7102bd5d90  str w9,[x8]
7102bd5d94  mov w8,#0xffffffff
7102bd5d98  str w8,[x19, #0x14c]
7102bd5d9c  strb wzr,[x19, #0x149]
7102bd5da0  strb wzr,[x19, #0x14a]
7102bd5da4  ldr x8,[x19, #0x10]
7102bd5da8  cbnz x8,0x7102bd41b8
7102bd5dac  ldp d9,d8,[sp, #0x110]
7102bd5db0  ldp d11,d10,[sp, #0x100]
7102bd5db4  ldp d13,d12,[sp, #0xf0]
7102bd5db8  ldp d15,d14,[sp, #0xe0]
7102bd5dbc  ldp x29,x30,[sp, #0x170]
7102bd5dc0  ldp x20,x19,[sp, #0x160]
7102bd5dc4  ldp x22,x21,[sp, #0x150]
7102bd5dc8  ldp x24,x23,[sp, #0x140]
7102bd5dcc  ldp x26,x25,[sp, #0x130]
7102bd5dd0  ldp x28,x27,[sp, #0x120]
7102bd5dd4  add sp,sp,#0x180
7102bd5dd8  ret
7102bd5ddc  str wzr,[x21, #0x40]
7102bd5de0  ldr x8,[x19]
7102bd5de4  ldr x8,[x8, #0x338]
7102bd5de8  ldr x8,[x8]
7102bd5dec  ldr x0,[x8, #0x8]
7102bd5df0  cbz x0,0x7102bd5e08
7102bd5df4  ldr x8,[x0]
7102bd5df8  ldr w2,[x19, #0xc0]
7102bd5dfc  mov w1,#0x1b
7102bd5e00  ldr x8,[x8, #0x58]
7102bd5e04  blr x8
7102bd5e08  str wzr,[x19, #0x5c]
7102bd5e0c  ldr x8,[x20]
7102bd5e10  cbz x8,0x7102bd3f7c
7102bd5e14  ldrb w9,[x8, #0xe0]
7102bd5e18  cbz w9,0x7102bd3f7c
7102bd5e1c  ldr x21,[x8, #0xc8]
7102bd5e20  cbz x21,0x7102bd3f7c
7102bd5e24  adrp x8,0x7104473000
7102bd5e28  ldr s0,[x21, #0x3c]
7102bd5e2c  ldr s1,[x8, #0x70]
7102bd5e30  fcmp s0,s1
7102bd5e34  b.lt 0x7102bd3f7c
7102bd5e38  ldp x22,x23,[x21, #0x18]
7102bd5e3c  cmp x22,x23
7102bd5e40  str wzr,[x21, #0x3c]
7102bd5e44  b.eq 0x7102bd5ec8
7102bd5e48  fmov s9,wzr
7102bd5e4c  ldr x0,[x22], #0x8
7102bd5e50  ldr x8,[x0]
7102bd5e54  ldr x8,[x8, #0x18]
7102bd5e58  mov v0.16B,v9.16B
7102bd5e5c  mov w1,wzr
7102bd5e60  blr x8
7102bd5e64  cmp x23,x22
7102bd5e68  b.ne 0x7102bd5e4c
7102bd5e6c  ldp x22,x23,[x21, #0x18]
7102bd5e70  cmp x22,x23
7102bd5e74  str wzr,[x21, #0x40]
7102bd5e78  b.eq 0x7102bd5ecc
7102bd5e7c  fmov s9,wzr
7102bd5e80  ldr x0,[x22], #0x8
7102bd5e84  ldr x8,[x0]
7102bd5e88  ldr x8,[x8, #0x18]
7102bd5e8c  mov v0.16B,v9.16B
7102bd5e90  mov w1,#0x1
7102bd5e94  blr x8
7102bd5e98  cmp x23,x22
7102bd5e9c  b.ne 0x7102bd5e80
7102bd5ea0  ldp x22,x21,[x21, #0x18]
7102bd5ea4  cmp x22,x21
7102bd5ea8  b.eq 0x7102bd5ecc
7102bd5eac  ldr x0,[x22], #0x8
7102bd5eb0  ldr x8,[x0]
7102bd5eb4  ldr x8,[x8, #0x38]
7102bd5eb8  blr x8
7102bd5ebc  cmp x21,x22
7102bd5ec0  b.ne 0x7102bd5eac
7102bd5ec4  b 0x7102bd5ecc
7102bd5ec8  str wzr,[x21, #0x40]
7102bd5ecc  ldr x8,[x20]
7102bd5ed0  cbz x8,0x7102bd5eec
7102bd5ed4  ldrb w9,[x8, #0xe0]
7102bd5ed8  cbz w9,0x7102bd5eec
7102bd5edc  ldr x8,[x8, #0xc8]
7102bd5ee0  cbz x8,0x7102bd5eec
7102bd5ee4  mov w9,#0x101
7102bd5ee8  strh w9,[x8, #0x30]
7102bd5eec  mov w8,#0x4
7102bd5ef0  b 0x7102bd3f70
7102bd5ef4  str wzr,[x21, #0x40]
7102bd5ef8  ldr x8,[x20]
7102bd5efc  cbz x8,0x7102bd5f2c
7102bd5f00  ldrb w9,[x8, #0xe0]
7102bd5f04  cbz w9,0x7102bd5f20
7102bd5f08  ldr x9,[x8, #0xc8]
7102bd5f0c  cbz x9,0x7102bd5f20
7102bd5f10  mov w8,#0x101
7102bd5f14  strh w8,[x9, #0x30]
7102bd5f18  ldr x8,[x20]
7102bd5f1c  cbz x8,0x7102bd5f2c
7102bd5f20  ldr x8,[x8, #0xd8]
7102bd5f24  cbz x8,0x7102bd5f2c
7102bd5f28  strb wzr,[x8, #0x21]
7102bd5f2c  str wzr,[x19, #0x5c]
7102bd5f30  ldr x8,[x20]
7102bd5f34  cbnz x8,0x7102bd3cfc
7102bd5f38  b 0x7102bd3f7c
7102bd5f3c  cbz x10,0x7102bd5f60
7102bd5f40  ldp x8,x11,[x19, #0xd8]
7102bd5f44  str x8,[x11]
7102bd5f48  str x11,[x8, #0x8]
7102bd5f4c  ldr x8,[x10, #0x10]
7102bd5f50  sub x8,x8,#0x1
7102bd5f54  str x8,[x10, #0x10]
7102bd5f58  stp xzr,xzr,[x9, #0x8]
7102bd5f5c  str xzr,[x9]
7102bd5f60  ldr x8,[sp, #0xa0]
7102bd5f64  cbz x8,0x7102bd5f88
7102bd5f68  ldp x9,x10,[sp, #0x90]
7102bd5f6c  str x9,[x10]
7102bd5f70  str x10,[x9, #0x8]
7102bd5f74  ldr x9,[x8, #0x10]
7102bd5f78  sub x9,x9,#0x1
7102bd5f7c  str x9,[x8, #0x10]
7102bd5f80  stp xzr,xzr,[sp, #0x98]
7102bd5f84  str xzr,[sp, #0x90]
7102bd5f88  mov x22,x19
7102bd5f8c  ldr x8,[x22], #0xf0
7102bd5f90  ldr q0,[x21]
7102bd5f94  ldr x8,[x8, #0x320]
7102bd5f98  mov x3,#0x6d66
7102bd5f9c  movk x3,#0xc612, LSL #16
7102bd5fa0  movk x3,#0xc, LSL #32
7102bd5fa4  add x0,sp,#0x90
7102bd5fa8  str q0,[sp, #0x50]
7102bd5fac  ldr x8,[x8, #0x48]
7102bd5fb0  ldr x1,[x8, #0x320]
7102bd5fb4  add x4,sp,#0x50
7102bd5fb8  mov w5,#0x1
7102bd5fbc  mov x2,x20
7102bd5fc0  add x23,sp,#0x90
7102bd5fc4  bl 0x71025effe0
7102bd5fc8  cmp x22,x23
7102bd5fcc  b.eq 0x7102bd6058
7102bd5fd0  ldr x9,[x19, #0x100]
7102bd5fd4  ldr x8,[sp, #0xa0]
7102bd5fd8  cmp x9,x8
7102bd5fdc  b.eq 0x7102bd605c
7102bd5fe0  cbz x8,0x7102bd6034
7102bd5fe4  cbz x9,0x7102bd600c
7102bd5fe8  ldr x10,[x22]
7102bd5fec  ldr x11,[x19, #0xf8]
7102bd5ff0  str x10,[x11]
7102bd5ff4  str x11,[x10, #0x8]
7102bd5ff8  ldr x10,[x9, #0x10]
7102bd5ffc  sub x10,x10,#0x1
7102bd6000  str x10,[x9, #0x10]
7102bd6004  stp xzr,xzr,[x22, #0x8]
7102bd6008  str xzr,[x22]
7102bd600c  ldr x10,[x8, #0x20]
7102bd6010  add x9,x8,#0x18
7102bd6014  stp x9,x10,[x19, #0xf0]
7102bd6018  str x22,[x8, #0x20]
7102bd601c  str x22,[x10]
7102bd6020  ldr x9,[x8, #0x10]
7102bd6024  add x9,x9,#0x1
7102bd6028  str x9,[x8, #0x10]
7102bd602c  str x8,[x19, #0x100]
7102bd6030  b 0x7102bd6058
7102bd6034  cbz x9,0x7102bd6058
7102bd6038  ldp x8,x10,[x19, #0xf0]
7102bd603c  str x8,[x10]
7102bd6040  str x10,[x8, #0x8]
7102bd6044  ldr x8,[x9, #0x10]
7102bd6048  sub x8,x8,#0x1
7102bd604c  str x8,[x9, #0x10]
7102bd6050  stp xzr,xzr,[x22, #0x8]
7102bd6054  str xzr,[x22]
7102bd6058  ldr x8,[sp, #0xa0]
7102bd605c  cbz x8,0x7102bd6080
7102bd6060  ldp x9,x10,[sp, #0x90]
7102bd6064  str x9,[x10]
7102bd6068  str x10,[x9, #0x8]
7102bd606c  ldr x9,[x8, #0x10]
7102bd6070  sub x9,x9,#0x1
7102bd6074  str x9,[x8, #0x10]
7102bd6078  stp xzr,xzr,[sp, #0x98]
7102bd607c  str xzr,[sp, #0x90]
7102bd6080  ldr x8,[x19]
7102bd6084  ldr q0,[x21]
7102bd6088  mov x3,#0x303
7102bd608c  movk x3,#0x8b5a, LSL #16
7102bd6090  movk x3,#0xc, LSL #32
7102bd6094  add x0,sp,#0x90
7102bd6098  add x4,sp,#0x50
7102bd609c  mov w5,#0x1
7102bd60a0  add x22,sp,#0x90
7102bd60a4  ldr x8,[x8, #0x320]
7102bd60a8  mov x2,x20
7102bd60ac  str q0,[sp, #0x50]
7102bd60b0  ldr x8,[x8, #0x48]
7102bd60b4  ldr x1,[x8, #0x320]
7102bd60b8  bl 0x71025effe0
7102bd60bc  add x9,x19,#0x108
7102bd60c0  cmp x9,x22
7102bd60c4  b.eq 0x7102bd6150
7102bd60c8  ldr x10,[x19, #0x118]
7102bd60cc  ldr x8,[sp, #0xa0]
7102bd60d0  cmp x10,x8
7102bd60d4  b.eq 0x7102bd6154
7102bd60d8  cbz x8,0x7102bd612c
7102bd60dc  cbz x10,0x7102bd6104
7102bd60e0  ldr x11,[x9]
7102bd60e4  ldr x12,[x19, #0x110]
7102bd60e8  str x11,[x12]
7102bd60ec  str x12,[x11, #0x8]
7102bd60f0  ldr x11,[x10, #0x10]
7102bd60f4  sub x11,x11,#0x1
7102bd60f8  str x11,[x10, #0x10]
7102bd60fc  stp xzr,xzr,[x9, #0x8]
7102bd6100  str xzr,[x9]
7102bd6104  ldr x11,[x8, #0x20]
7102bd6108  add x10,x8,#0x18
7102bd610c  stp x10,x11,[x19, #0x108]
7102bd6110  str x9,[x8, #0x20]
7102bd6114  str x9,[x11]
7102bd6118  ldr x9,[x8, #0x10]
7102bd611c  add x9,x9,#0x1
7102bd6120  str x9,[x8, #0x10]
7102bd6124  str x8,[x19, #0x118]
7102bd6128  b 0x7102bd6150
7102bd612c  cbz x10,0x7102bd6150
7102bd6130  ldp x8,x11,[x19, #0x108]
7102bd6134  str x8,[x11]
7102bd6138  str x11,[x8, #0x8]
7102bd613c  ldr x8,[x10, #0x10]
7102bd6140  sub x8,x8,#0x1
7102bd6144  str x8,[x10, #0x10]
7102bd6148  stp xzr,xzr,[x9, #0x8]
7102bd614c  str xzr,[x9]
7102bd6150  ldr x8,[sp, #0xa0]
7102bd6154  cbz x8,0x7102bd6178
7102bd6158  ldp x9,x10,[sp, #0x90]
7102bd615c  str x9,[x10]
7102bd6160  str x10,[x9, #0x8]
7102bd6164  ldr x9,[x8, #0x10]
7102bd6168  sub x9,x9,#0x1
7102bd616c  str x9,[x8, #0x10]
7102bd6170  stp xzr,xzr,[sp, #0x98]
7102bd6174  str xzr,[sp, #0x90]
7102bd6178  ldr x8,[x19]
7102bd617c  ldr q0,[x21]
7102bd6180  mov x3,#0x52b9
7102bd6184  movk x3,#0x1253, LSL #16
7102bd6188  movk x3,#0xc, LSL #32
7102bd618c  add x0,sp,#0x90
7102bd6190  add x4,sp,#0x50
7102bd6194  mov w5,#0x1
7102bd6198  add x21,sp,#0x90
7102bd619c  ldr x8,[x8, #0x320]
7102bd61a0  mov x2,x20
7102bd61a4  str q0,[sp, #0x50]
7102bd61a8  ldr x8,[x8, #0x48]
7102bd61ac  ldr x1,[x8, #0x320]
7102bd61b0  bl 0x71025effe0
7102bd61b4  add x9,x19,#0x120
7102bd61b8  cmp x9,x21
7102bd61bc  b.eq 0x7102bd6248
7102bd61c0  ldr x10,[x19, #0x130]
7102bd61c4  ldr x8,[sp, #0xa0]
7102bd61c8  cmp x10,x8
7102bd61cc  b.eq 0x7102bd624c
7102bd61d0  cbz x8,0x7102bd6224
7102bd61d4  cbz x10,0x7102bd61fc
7102bd61d8  ldr x11,[x9]
7102bd61dc  ldr x12,[x19, #0x128]
7102bd61e0  str x11,[x12]
7102bd61e4  str x12,[x11, #0x8]
7102bd61e8  ldr x11,[x10, #0x10]
7102bd61ec  sub x11,x11,#0x1
7102bd61f0  str x11,[x10, #0x10]
7102bd61f4  stp xzr,xzr,[x9, #0x8]
7102bd61f8  str xzr,[x9]
7102bd61fc  ldr x11,[x8, #0x20]
7102bd6200  add x10,x8,#0x18
7102bd6204  stp x10,x11,[x19, #0x120]
7102bd6208  str x9,[x8, #0x20]
7102bd620c  str x9,[x11]
7102bd6210  ldr x9,[x8, #0x10]
7102bd6214  add x9,x9,#0x1
7102bd6218  str x9,[x8, #0x10]
7102bd621c  str x8,[x19, #0x130]
7102bd6220  b 0x7102bd6248
7102bd6224  cbz x10,0x7102bd6248
7102bd6228  ldp x8,x11,[x19, #0x120]
7102bd622c  str x8,[x11]
7102bd6230  str x11,[x8, #0x8]
7102bd6234  ldr x8,[x10, #0x10]
7102bd6238  sub x8,x8,#0x1
7102bd623c  str x8,[x10, #0x10]
7102bd6240  stp xzr,xzr,[x9, #0x8]
7102bd6244  str xzr,[x9]
7102bd6248  ldr x8,[sp, #0xa0]
7102bd624c  cbz x8,0x7102bd6270
7102bd6250  ldp x9,x10,[sp, #0x90]
7102bd6254  str x9,[x10]
7102bd6258  str x10,[x9, #0x8]
7102bd625c  ldr x9,[x8, #0x10]
7102bd6260  sub x9,x9,#0x1
7102bd6264  str x9,[x8, #0x10]
7102bd6268  stp xzr,xzr,[sp, #0x98]
7102bd626c  str xzr,[sp, #0x90]
7102bd6270  ldr x8,[x19, #0x70]
7102bd6274  ldr x8,[x8]
7102bd6278  ldr x8,[x8, #0x8]
7102bd627c  ldr x20,[x8, #0x8]
7102bd6280  ldr x8,[x20, #0x78]
7102bd6284  cmp x8,#0x4
7102bd6288  b.cc 0x7102bd62a4
7102bd628c  ldr x8,[x20, #0x80]
7102bd6290  orr x9,xzr,#-0x3
7102bd6294  ldr x8,[x8]
7102bd6298  adds x9,x9,#0x1
7102bd629c  b.ne 0x7102bd6294
7102bd62a0  b 0x7102bd62a8
7102bd62a4  mov x8,xzr
7102bd62a8  ldr w1,[x8, #0xfc]
7102bd62ac  mov w9,#0x1
7102bd62b0  strb w9,[x8, #0x100]
7102bd62b4  cbz w1,0x7102bd62f0
7102bd62b8  ldr x8,[x8, #0xf0]
7102bd62bc  ldr x10,[x8]
7102bd62c0  orr w11,wzr,#0x18
7102bd62c4  madd x10,x1,x11,x10
7102bd62c8  strb w9,[x10, #0x10]
7102bd62cc  ldr w10,[x10, #0x14]
7102bd62d0  ldr x0,[x8, #0x18]
7102bd62d4  ldr w8,[x8, #0x10]
7102bd62d8  lsl w9,w9,w10
7102bd62dc  tst w8,w9
7102bd62e0  ldr x8,[x0]
7102bd62e4  cset w2,ne
7102bd62e8  ldr x8,[x8, #0x18]
7102bd62ec  blr x8
7102bd62f0  ldr x8,[x20, #0x78]
7102bd62f4  cmp x8,#0x5
7102bd62f8  b.cc 0x7102bd6314
7102bd62fc  ldr x8,[x20, #0x80]
7102bd6300  ldr x8,[x8]
7102bd6304  ldr x8,[x8]
7102bd6308  ldr x8,[x8]
7102bd630c  ldr x9,[x8]
7102bd6310  b 0x7102bd6318
7102bd6314  mov x9,xzr
7102bd6318  ldr w1,[x9, #0xfc]
7102bd631c  mov w8,#0x1
7102bd6320  strb w8,[x9, #0x100]
7102bd6324  cbz w1,0x7102bd6360
7102bd6328  ldr x9,[x9, #0xf0]
7102bd632c  ldr x10,[x9]
7102bd6330  orr w11,wzr,#0x18
7102bd6334  madd x10,x1,x11,x10
7102bd6338  strb w8,[x10, #0x10]
7102bd633c  ldr w10,[x10, #0x14]
7102bd6340  ldr x0,[x9, #0x18]
7102bd6344  ldr w9,[x9, #0x10]
7102bd6348  lsl w8,w8,w10
7102bd634c  tst w9,w8
7102bd6350  ldr x8,[x0]
7102bd6354  cset w2,ne
7102bd6358  ldr x8,[x8, #0x18]
7102bd635c  blr x8
7102bd6360  ldr x8,[x20, #0x78]
7102bd6364  cmp x8,#0x6
7102bd6368  b.cc 0x7102bd6388
7102bd636c  ldr x8,[x20, #0x80]
7102bd6370  ldr x8,[x8]
7102bd6374  ldr x8,[x8]
7102bd6378  ldr x8,[x8]
7102bd637c  ldr x8,[x8]
7102bd6380  ldr x9,[x8]
7102bd6384  b 0x7102bd638c
7102bd6388  mov x9,xzr
7102bd638c  ldr w1,[x9, #0xfc]
7102bd6390  mov w8,#0x1
7102bd6394  strb w8,[x9, #0x100]
7102bd6398  cbz w1,0x7102bd3f7c
7102bd639c  ldr x9,[x9, #0xf0]
7102bd63a0  ldr x10,[x9]
7102bd63a4  orr w11,wzr,#0x18
7102bd63a8  madd x10,x1,x11,x10
7102bd63ac  strb w8,[x10, #0x10]
7102bd63b0  ldr w10,[x10, #0x14]
7102bd63b4  ldr x0,[x9, #0x18]
7102bd63b8  ldr w9,[x9, #0x10]
7102bd63bc  lsl w8,w8,w10
7102bd63c0  tst w9,w8
7102bd63c4  ldr x8,[x0]
7102bd63c8  cset w2,ne
7102bd63cc  ldr x8,[x8, #0x18]
7102bd63d0  blr x8
7102bd63d4  b 0x7102bd3f7c
7102bd63d8  adrp x0,0x710532a000
7102bd63dc  add x0,x0,#0x9e0
7102bd63e0  bl 0x71039c06b0
7102bd63e4  adrp x20,0x710532a000
7102bd63e8  add x20,x20,#0x9f0
7102bd63ec  cbz w0,0x7102bd5164
7102bd63f0  adrp x8,0x7104468000
7102bd63f4  adrp x9,0x710446a000
7102bd63f8  ldr q1,[x9, #0x360]
7102bd63fc  ldr q0,[x8, #0xca0]
7102bd6400  adrp x10,0x7104465000
7102bd6404  adrp x8,0x710446a000
7102bd6408  stp q0,q1,[x20]
7102bd640c  ldr q0,[x10, #0x6b0]
7102bd6410  ldr q1,[x8, #0x350]
7102bd6414  adrp x0,0x710532a000
7102bd6418  add x0,x0,#0x9e0
7102bd641c  stp q0,q1,[x20, #0x20]
7102bd6420  bl 0x71039c06c0
7102bd6424  b 0x7102bd5164
7102bd6428  bl 0x71039c2650
7102bd642c  add x0,x9,#0x1c0
7102bd6430  bl 0x71039c1330
