// addr:      7101bd3320
// offset:    0x1bd3320
// name:      FUN_7101bd3320
// mangled:   
// size:      4224

7101bd3320  str d8,[sp, #-0x70]!
7101bd3324  stp x28,x27,[sp, #0x10]
7101bd3328  stp x26,x25,[sp, #0x20]
7101bd332c  stp x24,x23,[sp, #0x30]
7101bd3330  stp x22,x21,[sp, #0x40]
7101bd3334  stp x20,x19,[sp, #0x50]
7101bd3338  stp x29,x30,[sp, #0x60]
7101bd333c  add x29,sp,#0x60
7101bd3340  sub sp,sp,#0x2, LSL #12
7101bd3344  sub sp,sp,#0x210
7101bd3348  add x22,sp,#0x70
7101bd334c  mov w23,w1
7101bd3350  mov x19,x0
7101bd3354  mov w21,#0x1
7101bd3358  orr x8,xzr,#0x100000000
7101bd335c  str wzr,[sp, #0x70]
7101bd3360  add x0,x22,#0xec
7101bd3364  mov w2,#0x1000
7101bd3368  strb w21,[sp, #0x79]
7101bd336c  mov w1,wzr
7101bd3370  stur x8,[sp, #0x7c]
7101bd3374  mov w20,#0x9dc5
7101bd3378  movk w20,#0x811c, LSL #16
7101bd337c  strb wzr,[sp, #0x8c]
7101bd3380  stur xzr,[sp, #0x84]
7101bd3384  strb wzr,[sp, #0xd4]
7101bd3388  stur xzr,[x22, #0x5c]
7101bd338c  strb wzr,[sp, #0x11c]
7101bd3390  stur xzr,[x22, #0xa4]
7101bd3394  bl 0x71039c02a0
7101bd3398  mov w8,#0x10ec
7101bd339c  strb w21,[x22, x8, LSL ]
7101bd33a0  mov w8,#0x10f4
7101bd33a4  strb w21,[x22, x8, LSL ]
7101bd33a8  mov w8,#0x1100
7101bd33ac  mov w9,#0x1190
7101bd33b0  add x0,x22,x9
7101bd33b4  strb wzr,[x22, x8, LSL ]
7101bd33b8  mov w8,#0x20
7101bd33bc  mov w2,#0x1000
7101bd33c0  mov w1,wzr
7101bd33c4  str xzr,[sp, #0x1168]
7101bd33c8  str w8,[sp, #0x11b0]
7101bd33cc  bl 0x71039c02a0
7101bd33d0  mov w8,#0x1149
7101bd33d4  str xzr,[x22, x8, LSL #0x0]
7101bd33d8  mov w8,#0x1144
7101bd33dc  str xzr,[x22, x8, LSL #0x0]
7101bd33e0  mov w8,#0x5
7101bd33e4  str w8,[sp, #0x74]
7101bd33e8  orr x8,xzr,#0x1000000000
7101bd33ec  str x8,[sp, #0x20]
7101bd33f0  mov x9,#0x6e6d
7101bd33f4  movk x9,#0x5f75, LSL #16
7101bd33f8  add x8,sp,#0x20
7101bd33fc  mov x10,#0x7265
7101bd3400  movk x10,#0x6c5f, LSL #16
7101bd3404  movk x9,#0x6568, LSL #32
7101bd3408  movk x9,#0x6461, LSL #48
7101bd340c  strb w21,[sp, #0x78]
7101bd3410  add x11,x8,#0x9
7101bd3414  movk x10,#0x636f, LSL #32
7101bd3418  movk x10,#0x6c61, LSL #48
7101bd341c  mov w12,#0x6d
7101bd3420  str wzr,[sp, #0x1160]
7101bd3424  strb wzr,[sp, #0x38]
7101bd3428  mov w8,#0x89
7101bd342c  mov w13,w20
7101bd3430  stp x9,x10,[sp, #0x28]
7101bd3434  mul w13,w13,w8
7101bd3438  and w12,w12,#0xff
7101bd343c  eor w13,w13,w12
7101bd3440  ldrb w12,[x11], #0x1
7101bd3444  cbnz w12,0x7101bd3434
7101bd3448  add x12,sp,#0x20
7101bd344c  mov x11,xzr
7101bd3450  str w13,[sp, #0x20]
7101bd3454  add x12,x12,#0x9
7101bd3458  mov w15,#0x6d
7101bd345c  add x13,sp,#0x70
7101bd3460  add w14,w11,#0x1
7101bd3464  add x16,x13,x11
7101bd3468  cmp w14,#0x3e
7101bd346c  strb w15,[x16, #0x64]
7101bd3470  b.hi 0x7101bd3488
7101bd3474  ldrb w15,[x12, x11, LSL ]
7101bd3478  add x14,x11,#0x1
7101bd347c  mov x11,x14
7101bd3480  cbnz w15,0x7101bd3460
7101bd3484  b 0x7101bd348c
7101bd3488  add w14,w11,#0x1
7101bd348c  add x12,sp,#0x70
7101bd3490  add x11,x12,#0x64
7101bd3494  mov w13,w20
7101bd3498  strb wzr,[x11, w14, UXTW ]
7101bd349c  ldrb w11,[sp, #0xd4]
7101bd34a0  str w14,[sp, #0xd0]
7101bd34a4  cbz w11,0x7101bd34c4
7101bd34a8  add x12,x12,#0x65
7101bd34ac  mov w13,w20
7101bd34b0  mul w13,w13,w8
7101bd34b4  and w11,w11,#0xff
7101bd34b8  eor w13,w13,w11
7101bd34bc  ldrb w11,[x12], #0x1
7101bd34c0  cbnz w11,0x7101bd34b0
7101bd34c4  str x10,[sp, #0x30]
7101bd34c8  mov w10,#0x635f
7101bd34cc  strh w10,[sp, #0x38]
7101bd34d0  mov x10,#0x6d6f
7101bd34d4  movk x10,#0x756d, LSL #16
7101bd34d8  orr x11,xzr,#0x1e00000000
7101bd34dc  movk x10,#0x696e, LSL #32
7101bd34e0  movk x10,#0x6163, LSL #48
7101bd34e4  strb wzr,[sp, #0x46]
7101bd34e8  stp x11,x9,[sp, #0x20]
7101bd34ec  add x9,sp,#0x20
7101bd34f0  stur x10,[sp, #0x3a]
7101bd34f4  mov w10,#0x6974
7101bd34f8  movk w10,#0x6e6f, LSL #16
7101bd34fc  add x9,x9,#0x9
7101bd3500  stur w10,[sp, #0x42]
7101bd3504  mov w10,#0x6d
7101bd3508  mov w11,w20
7101bd350c  str w13,[sp, #0xcc]
7101bd3510  mul w11,w11,w8
7101bd3514  and w10,w10,#0xff
7101bd3518  eor w11,w11,w10
7101bd351c  ldrb w10,[x9], #0x1
7101bd3520  cbnz w10,0x7101bd3510
7101bd3524  add x10,sp,#0x20
7101bd3528  mov x9,xzr
7101bd352c  str w11,[sp, #0x20]
7101bd3530  add x10,x10,#0x9
7101bd3534  mov w13,#0x6d
7101bd3538  add x11,sp,#0x70
7101bd353c  add w12,w9,#0x1
7101bd3540  add x14,x11,x9
7101bd3544  cmp w12,#0x3e
7101bd3548  strb w13,[x14, #0x1c]
7101bd354c  b.hi 0x7101bd3564
7101bd3550  ldrb w13,[x10, x9, LSL ]
7101bd3554  add x12,x9,#0x1
7101bd3558  mov x9,x12
7101bd355c  cbnz w13,0x7101bd353c
7101bd3560  b 0x7101bd3568
7101bd3564  add w12,w9,#0x1
7101bd3568  add x10,sp,#0x70
7101bd356c  add x9,x10,#0x1c
7101bd3570  mov w11,w20
7101bd3574  strb wzr,[x9, w12, UXTW ]
7101bd3578  ldrb w9,[sp, #0x8c]
7101bd357c  str w12,[sp, #0x88]
7101bd3580  cbz w9,0x7101bd35a0
7101bd3584  add x10,x10,#0x1d
7101bd3588  mov w11,w20
7101bd358c  mul w11,w11,w8
7101bd3590  and w9,w9,#0xff
7101bd3594  eor w11,w11,w9
7101bd3598  ldrb w9,[x10], #0x1
7101bd359c  cbnz w9,0x7101bd358c
7101bd35a0  mov x10,#0x6e6d
7101bd35a4  movk x10,#0x5f75, LSL #16
7101bd35a8  str w11,[sp, #0x84]
7101bd35ac  orr x9,xzr,#0xf00000000
7101bd35b0  movk x10,#0x6f6c, LSL #32
7101bd35b4  movk x10,#0x6163, LSL #48
7101bd35b8  add x11,sp,#0x20
7101bd35bc  mov x12,#0x5f6c
7101bd35c0  movk x12,#0x6974, LSL #16
7101bd35c4  stp x9,x10,[sp, #0x20]
7101bd35c8  add x9,x11,#0x9
7101bd35cc  movk x12,#0x6c74, LSL #32
7101bd35d0  movk x12,#0x65, LSL #48
7101bd35d4  str x12,[sp, #0x30]
7101bd35d8  mov w10,#0x6d
7101bd35dc  mov w11,w20
7101bd35e0  mul w11,w11,w8
7101bd35e4  and w10,w10,#0xff
7101bd35e8  eor w11,w11,w10
7101bd35ec  ldrb w10,[x9], #0x1
7101bd35f0  cbnz w10,0x7101bd35e0
7101bd35f4  add x10,sp,#0x20
7101bd35f8  mov x9,xzr
7101bd35fc  str w11,[sp, #0x20]
7101bd3600  add x10,x10,#0x9
7101bd3604  mov w13,#0x6d
7101bd3608  add x11,sp,#0x70
7101bd360c  add w12,w9,#0x1
7101bd3610  add x14,x11,x9
7101bd3614  cmp w12,#0x3e
7101bd3618  strb w13,[x14, #0xac]
7101bd361c  b.hi 0x7101bd3634
7101bd3620  ldrb w13,[x10, x9, LSL ]
7101bd3624  add x12,x9,#0x1
7101bd3628  mov x9,x12
7101bd362c  cbnz w13,0x7101bd360c
7101bd3630  b 0x7101bd3638
7101bd3634  add w12,w9,#0x1
7101bd3638  add x9,sp,#0x70
7101bd363c  add x10,x9,#0xac
7101bd3640  strb wzr,[x10, w12, UXTW ]
7101bd3644  ldrb w10,[sp, #0x11c]
7101bd3648  str w12,[sp, #0x118]
7101bd364c  cbz w10,0x7101bd3668
7101bd3650  add x9,x9,#0xad
7101bd3654  mul w11,w20,w8
7101bd3658  and w10,w10,#0xff
7101bd365c  eor w20,w11,w10
7101bd3660  ldrb w10,[x9], #0x1
7101bd3664  cbnz w10,0x7101bd3654
7101bd3668  str w20,[sp, #0x114]
7101bd366c  ldr x0,[x19, #0x168]
7101bd3670  cmn w23,#0x1
7101bd3674  cset w2,eq
7101bd3678  add x1,sp,#0x70
7101bd367c  mov w3,#0x1
7101bd3680  stur w23,[x29, #-0x54]
7101bd3684  bl 0x7101af8570
7101bd3688  ldr x8,[x19, #0x170]
7101bd368c  ldr x0,[x8, #0x80]
7101bd3690  mov w1,#0x5
7101bd3694  bl 0x7101af2070
7101bd3698  adrp x8,0x710532f000
7101bd369c  ldr x8,[x8, #0x7c8]
7101bd36a0  ldr x0,[x8, #0x8]
7101bd36a4  bl 0x71032e5a30
7101bd36a8  mov x21,x19
7101bd36ac  ldr x8,[x21, #0x10]!
7101bd36b0  ldr x9,[x21, #0x8]
7101bd36b4  cmp x9,x8
7101bd36b8  b.eq 0x7101bd4394
7101bd36bc  ldr x8,[x8]
7101bd36c0  ldr x8,[x8]
7101bd36c4  ldr x22,[x8]
7101bd36c8  str x22,[sp, #0x8]
7101bd36cc  ldr x8,[x22], #0x8
7101bd36d0  ldr x9,[x8, #0x600]
7101bd36d4  mov w10,#0x20
7101bd36d8  str w10,[x9, #0x10]
7101bd36dc  ldr x9,[x8, #0x600]
7101bd36e0  mov w10,#0x40
7101bd36e4  str w10,[x9, #0x14]
7101bd36e8  ldr x8,[x8, #0x600]
7101bd36ec  mov w9,#0x10
7101bd36f0  str w9,[x8, #0x18]
7101bd36f4  adrp x1,0x7104329000
7101bd36f8  add x1,x1,#0xe18
7101bd36fc  add x8,sp,#0x70
7101bd3700  mov x0,x22
7101bd3704  bl 0x7103776910
7101bd3708  ldr x23,[sp, #0x78]
7101bd370c  ldr x8,[x23]
7101bd3710  cbz x8,0x7101bd372c
7101bd3714  adrp x1,0x710439d000
7101bd3718  add x1,x1,#0x316
7101bd371c  add x0,sp,#0x70
7101bd3720  mov w2,#0x1
7101bd3724  mov w3,wzr
7101bd3728  bl 0x710377a280
7101bd372c  adrp x28,0x710523d000
7101bd3730  add x28,x28,#0x9a8
7101bd3734  stp x28,xzr,[sp, #0x70]
7101bd3738  cbz x23,0x7101bd3744
7101bd373c  mov x0,x23
7101bd3740  bl 0x710392eb40
7101bd3744  mov x8,#0x41800000
7101bd3748  movk x8,#0x4248, LSL #48
7101bd374c  mov x9,#0x3f800000
7101bd3750  movk x9,#0x101, LSL #32
7101bd3754  movk x9,#0x1, LSL #48
7101bd3758  str x9,[sp, #0x80]
7101bd375c  stp xzr,x8,[sp, #0x70]
7101bd3760  mov w20,#0x1
7101bd3764  add x8,sp,#0x70
7101bd3768  add x0,sp,#0x70
7101bd376c  strh wzr,[sp, #0x88]
7101bd3770  strb w20,[sp, #0x8a]
7101bd3774  add x23,x8,#0x30
7101bd3778  str xzr,[sp, #0xc0]
7101bd377c  str xzr,[sp, #0xf0]
7101bd3780  str xzr,[sp, #0x120]
7101bd3784  str xzr,[sp, #0x150]
7101bd3788  str xzr,[sp, #0x180]
7101bd378c  strb wzr,[sp, #0x91]
7101bd3790  sturh wzr,[sp, #0x8f]
7101bd3794  stur wzr,[sp, #0x8b]
7101bd3798  bl 0x710337e790
7101bd379c  strb w20,[sp, #0x86]
7101bd37a0  mov w27,#0x101
7101bd37a4  adrp x8,0x71050ac000
7101bd37a8  add x8,x8,#0x1d8
7101bd37ac  add x20,sp,#0x20
7101bd37b0  add x0,sp,#0x20
7101bd37b4  mov x1,x23
7101bd37b8  str wzr,[sp, #0x74]
7101bd37bc  strb wzr,[sp, #0x84]
7101bd37c0  strh w27,[sp, #0x8e]
7101bd37c4  stp x8,x19,[sp, #0x20]
7101bd37c8  str x20,[sp, #0x40]
7101bd37cc  bl 0x71003cb050
7101bd37d0  ldr x0,[sp, #0x40]
7101bd37d4  cmp x20,x0
7101bd37d8  b.eq 0x7101bd37ec
7101bd37dc  cbz x0,0x7101bd37f8
7101bd37e0  ldr x8,[x0]
7101bd37e4  ldr x8,[x8, #0x28]
7101bd37e8  b 0x7101bd37f4
7101bd37ec  ldr x8,[x0]
7101bd37f0  ldr x8,[x8, #0x20]
7101bd37f4  blr x8
7101bd37f8  add x0,x19,#0x178
7101bd37fc  add x4,x19,#0x50
7101bd3800  adrp x2,0x710424f000
7101bd3804  add x2,x2,#0xc05
7101bd3808  add x3,sp,#0x70
7101bd380c  mov x1,x22
7101bd3810  add x20,sp,#0x70
7101bd3814  bl 0x7103781a20
7101bd3818  ldr x0,[sp, #0x180]
7101bd381c  add x8,x20,#0xf0
7101bd3820  cmp x8,x0
7101bd3824  b.eq 0x7101bd3838
7101bd3828  cbz x0,0x7101bd3844
7101bd382c  ldr x8,[x0]
7101bd3830  ldr x8,[x8, #0x28]
7101bd3834  b 0x7101bd3840
7101bd3838  ldr x8,[x0]
7101bd383c  ldr x8,[x8, #0x20]
7101bd3840  blr x8
7101bd3844  ldr x0,[sp, #0x150]
7101bd3848  add x8,sp,#0x70
7101bd384c  add x8,x8,#0xc0
7101bd3850  cmp x8,x0
7101bd3854  b.eq 0x7101bd3868
7101bd3858  cbz x0,0x7101bd3874
7101bd385c  ldr x8,[x0]
7101bd3860  ldr x8,[x8, #0x28]
7101bd3864  b 0x7101bd3870
7101bd3868  ldr x8,[x0]
7101bd386c  ldr x8,[x8, #0x20]
7101bd3870  blr x8
7101bd3874  ldr x0,[sp, #0x120]
7101bd3878  add x8,sp,#0x70
7101bd387c  add x8,x8,#0x90
7101bd3880  cmp x8,x0
7101bd3884  b.eq 0x7101bd3898
7101bd3888  cbz x0,0x7101bd38a4
7101bd388c  ldr x8,[x0]
7101bd3890  ldr x8,[x8, #0x28]
7101bd3894  b 0x7101bd38a0
7101bd3898  ldr x8,[x0]
7101bd389c  ldr x8,[x8, #0x20]
7101bd38a0  blr x8
7101bd38a4  ldr x0,[sp, #0xf0]
7101bd38a8  add x8,sp,#0x70
7101bd38ac  add x8,x8,#0x60
7101bd38b0  cmp x8,x0
7101bd38b4  b.eq 0x7101bd38c8
7101bd38b8  cbz x0,0x7101bd38d4
7101bd38bc  ldr x8,[x0]
7101bd38c0  ldr x8,[x8, #0x28]
7101bd38c4  b 0x7101bd38d0
7101bd38c8  ldr x8,[x0]
7101bd38cc  ldr x8,[x8, #0x20]
7101bd38d0  blr x8
7101bd38d4  ldr x0,[sp, #0xc0]
7101bd38d8  add x8,sp,#0x70
7101bd38dc  add x8,x8,#0x30
7101bd38e0  cmp x8,x0
7101bd38e4  b.eq 0x7101bd38f8
7101bd38e8  cbz x0,0x7101bd3904
7101bd38ec  ldr x8,[x0]
7101bd38f0  ldr x8,[x8, #0x28]
7101bd38f4  b 0x7101bd3900
7101bd38f8  ldr x8,[x0]
7101bd38fc  ldr x8,[x8, #0x20]
7101bd3900  blr x8
7101bd3904  mov w8,#0x1
7101bd3908  str w8,[sp, #0x80]
7101bd390c  strh w8,[sp, #0x84]
7101bd3910  strb w8,[sp, #0x86]
7101bd3914  add x8,sp,#0x70
7101bd3918  add x1,x8,#0xc0
7101bd391c  adrp x8,0x71050ac000
7101bd3920  add x8,x8,#0x220
7101bd3924  add x20,sp,#0x20
7101bd3928  add x0,sp,#0x20
7101bd392c  str xzr,[sp, #0x70]
7101bd3930  stur wzr,[sp, #0x7a]
7101bd3934  strh wzr,[sp, #0x7e]
7101bd3938  str xzr,[sp, #0x88]
7101bd393c  str wzr,[sp, #0x90]
7101bd3940  str xzr,[sp, #0xc0]
7101bd3944  str xzr,[sp, #0xf0]
7101bd3948  str xzr,[sp, #0x120]
7101bd394c  str xzr,[sp, #0x150]
7101bd3950  str xzr,[sp, #0x180]
7101bd3954  str wzr,[sp, #0x190]
7101bd3958  strh w27,[sp, #0x78]
7101bd395c  str x8,[sp, #0x20]
7101bd3960  str x20,[sp, #0x40]
7101bd3964  bl 0x7101989a30
7101bd3968  ldr x0,[sp, #0x40]
7101bd396c  cmp x20,x0
7101bd3970  b.eq 0x7101bd3984
7101bd3974  cbz x0,0x7101bd3990
7101bd3978  ldr x8,[x0]
7101bd397c  ldr x8,[x8, #0x28]
7101bd3980  b 0x7101bd398c
7101bd3984  ldr x8,[x0]
7101bd3988  ldr x8,[x8, #0x20]
7101bd398c  blr x8
7101bd3990  add x9,sp,#0x70
7101bd3994  adrp x8,0x71050ac000
7101bd3998  add x8,x8,#0x268
7101bd399c  add x1,x9,#0x60
7101bd39a0  add x20,sp,#0x20
7101bd39a4  str x20,[sp, #0x40]
7101bd39a8  add x0,sp,#0x20
7101bd39ac  stp x8,x19,[sp, #0x20]
7101bd39b0  bl 0x7101989a30
7101bd39b4  ldr x0,[sp, #0x40]
7101bd39b8  cmp x20,x0
7101bd39bc  b.eq 0x7101bd39d0
7101bd39c0  cbz x0,0x7101bd39dc
7101bd39c4  ldr x8,[x0]
7101bd39c8  ldr x8,[x8, #0x28]
7101bd39cc  b 0x7101bd39d8
7101bd39d0  ldr x8,[x0]
7101bd39d4  ldr x8,[x8, #0x20]
7101bd39d8  blr x8
7101bd39dc  add x23,x19,#0x180
7101bd39e0  adrp x2,0x7104307000
7101bd39e4  add x2,x2,#0x72
7101bd39e8  add x3,sp,#0x70
7101bd39ec  mov x0,x23
7101bd39f0  mov x1,x22
7101bd39f4  bl 0x7103770b30
7101bd39f8  ldr x24,[x19, #0x180]
7101bd39fc  ldp x8,x9,[x24, #0x180]
7101bd3a00  sub x9,x9,x8
7101bd3a04  lsr x10,x9,#0x3
7101bd3a08  cmp w10,#0x1
7101bd3a0c  b.lt 0x7101bd3a50
7101bd3a10  ldr x2,[x8]
7101bd3a14  mov x0,x24
7101bd3a18  mov w1,wzr
7101bd3a1c  ubfx x20,x9,#0x3,#0x20
7101bd3a20  bl 0x710376e070
7101bd3a24  cmp x20,#0x1
7101bd3a28  b.eq 0x7101bd3a50
7101bd3a2c  mov w25,#0x1
7101bd3a30  ldr x8,[x24, #0x180]
7101bd3a34  ldr x2,[x8, x25, LSL #0x3]
7101bd3a38  mov x0,x24
7101bd3a3c  mov w1,w25
7101bd3a40  bl 0x710376e070
7101bd3a44  add x25,x25,#0x1
7101bd3a48  cmp x20,x25
7101bd3a4c  b.ne 0x7101bd3a30
7101bd3a50  ldr x1,[x23]
7101bd3a54  cbz x1,0x7101bd3b58
7101bd3a58  ldp x8,x9,[x1, #0x180]
7101bd3a5c  sub x8,x9,x8
7101bd3a60  lsr x8,x8,#0x3
7101bd3a64  cmp w8,#0x1
7101bd3a68  b.lt 0x7101bd3b50
7101bd3a6c  mov w24,wzr
7101bd3a70  adrp x20,0x710523d000
7101bd3a74  add x20,x20,#0x9c8
7101bd3a78  add x0,sp,#0x20
7101bd3a7c  mov w2,w24
7101bd3a80  bl 0x7103771d60
7101bd3a84  ldr x25,[sp, #0x28]
7101bd3a88  ldr x26,[x25]
7101bd3a8c  cbz x26,0x7101bd3ad0
7101bd3a90  ldr x8,[x26]
7101bd3a94  ldr x8,[x8, #0x1f8]
7101bd3a98  mov x0,x26
7101bd3a9c  mov w1,wzr
7101bd3aa0  blr x8
7101bd3aa4  ldr x8,[x26]
7101bd3aa8  ldr x8,[x8, #0x200]
7101bd3aac  mov x0,x26
7101bd3ab0  blr x8
7101bd3ab4  tbz w0,#0x0,0x7101bd3adc
7101bd3ab8  ldr x8,[x26]
7101bd3abc  ldr x8,[x8, #0x210]
7101bd3ac0  mov x0,x26
7101bd3ac4  blr x8
7101bd3ac8  eor w8,w0,#0x1
7101bd3acc  b 0x7101bd3ae0
7101bd3ad0  stp x20,xzr,[sp, #0x20]
7101bd3ad4  cbnz x25,0x7101bd3b2c
7101bd3ad8  b 0x7101bd3b34
7101bd3adc  mov w8,#0x1
7101bd3ae0  ldr x9,[x26]
7101bd3ae4  ldr x9,[x9, #0x388]
7101bd3ae8  and w1,w8,#0x1
7101bd3aec  mov x0,x26
7101bd3af0  mov w2,wzr
7101bd3af4  blr x9
7101bd3af8  ldr x1,[x25]
7101bd3afc  add x0,sp,#0x10
7101bd3b00  bl 0x710377ad90
7101bd3b04  ldr x0,[sp, #0x18]
7101bd3b08  ldr x8,[x0]
7101bd3b0c  cbz x8,0x7101bd3b1c
7101bd3b10  ldrb w9,[x8, #0x58]
7101bd3b14  and w9,w9,#0xfe
7101bd3b18  strb w9,[x8, #0x58]
7101bd3b1c  stp x28,xzr,[sp, #0x10]
7101bd3b20  cbz x0,0x7101bd3b28
7101bd3b24  bl 0x710392eb40
7101bd3b28  stp x20,xzr,[sp, #0x20]
7101bd3b2c  mov x0,x25
7101bd3b30  bl 0x710392eb40
7101bd3b34  ldr x1,[x23]
7101bd3b38  ldp x8,x9,[x1, #0x180]
7101bd3b3c  sub x8,x9,x8
7101bd3b40  add w24,w24,#0x1
7101bd3b44  lsr x8,x8,#0x3
7101bd3b48  cmp w24,w8
7101bd3b4c  b.lt 0x7101bd3a78
7101bd3b50  mov x0,x1
7101bd3b54  bl 0x710376b960
7101bd3b58  ldr x0,[sp, #0x180]
7101bd3b5c  add x8,sp,#0x70
7101bd3b60  add x8,x8,#0xf0
7101bd3b64  cmp x8,x0
7101bd3b68  b.eq 0x7101bd3b7c
7101bd3b6c  cbz x0,0x7101bd3b88
7101bd3b70  ldr x8,[x0]
7101bd3b74  ldr x8,[x8, #0x28]
7101bd3b78  b 0x7101bd3b84
7101bd3b7c  ldr x8,[x0]
7101bd3b80  ldr x8,[x8, #0x20]
7101bd3b84  blr x8
7101bd3b88  ldr x0,[sp, #0x150]
7101bd3b8c  add x8,sp,#0x70
7101bd3b90  add x8,x8,#0xc0
7101bd3b94  cmp x8,x0
7101bd3b98  b.eq 0x7101bd3bac
7101bd3b9c  cbz x0,0x7101bd3bb8
7101bd3ba0  ldr x8,[x0]
7101bd3ba4  ldr x8,[x8, #0x28]
7101bd3ba8  b 0x7101bd3bb4
7101bd3bac  ldr x8,[x0]
7101bd3bb0  ldr x8,[x8, #0x20]
7101bd3bb4  blr x8
7101bd3bb8  ldr x0,[sp, #0x120]
7101bd3bbc  add x8,sp,#0x70
7101bd3bc0  add x8,x8,#0x90
7101bd3bc4  cmp x8,x0
7101bd3bc8  b.eq 0x7101bd3bdc
7101bd3bcc  cbz x0,0x7101bd3be8
7101bd3bd0  ldr x8,[x0]
7101bd3bd4  ldr x8,[x8, #0x28]
7101bd3bd8  b 0x7101bd3be4
7101bd3bdc  ldr x8,[x0]
7101bd3be0  ldr x8,[x8, #0x20]
7101bd3be4  blr x8
7101bd3be8  ldr x0,[sp, #0xf0]
7101bd3bec  add x8,sp,#0x70
7101bd3bf0  add x8,x8,#0x60
7101bd3bf4  cmp x8,x0
7101bd3bf8  b.eq 0x7101bd3c0c
7101bd3bfc  cbz x0,0x7101bd3c18
7101bd3c00  ldr x8,[x0]
7101bd3c04  ldr x8,[x8, #0x28]
7101bd3c08  b 0x7101bd3c14
7101bd3c0c  ldr x8,[x0]
7101bd3c10  ldr x8,[x8, #0x20]
7101bd3c14  blr x8
7101bd3c18  ldr x0,[sp, #0xc0]
7101bd3c1c  add x8,sp,#0x70
7101bd3c20  add x8,x8,#0x30
7101bd3c24  cmp x8,x0
7101bd3c28  b.eq 0x7101bd3c3c
7101bd3c2c  cbz x0,0x7101bd3c48
7101bd3c30  ldr x8,[x0]
7101bd3c34  ldr x8,[x8, #0x28]
7101bd3c38  b 0x7101bd3c44
7101bd3c3c  ldr x8,[x0]
7101bd3c40  ldr x8,[x8, #0x20]
7101bd3c44  blr x8
7101bd3c48  mov w8,#0x1
7101bd3c4c  add x23,x19,#0x188
7101bd3c50  strh w8,[sp, #0x84]
7101bd3c54  str w8,[sp, #0x80]
7101bd3c58  strb w8,[sp, #0x86]
7101bd3c5c  mov w8,#0x100
7101bd3c60  adrp x2,0x710424f000
7101bd3c64  add x2,x2,#0xd71
7101bd3c68  add x3,sp,#0x70
7101bd3c6c  mov x0,x23
7101bd3c70  mov x1,x22
7101bd3c74  str xzr,[sp, #0x70]
7101bd3c78  stur wzr,[sp, #0x7a]
7101bd3c7c  strh wzr,[sp, #0x7e]
7101bd3c80  str xzr,[sp, #0x88]
7101bd3c84  str wzr,[sp, #0x90]
7101bd3c88  str xzr,[sp, #0xc0]
7101bd3c8c  str xzr,[sp, #0xf0]
7101bd3c90  str xzr,[sp, #0x120]
7101bd3c94  str xzr,[sp, #0x150]
7101bd3c98  str xzr,[sp, #0x180]
7101bd3c9c  str wzr,[sp, #0x190]
7101bd3ca0  strh w8,[sp, #0x78]
7101bd3ca4  bl 0x7103770b30
7101bd3ca8  ldr x24,[x19, #0x188]
7101bd3cac  ldp x8,x9,[x24, #0x180]
7101bd3cb0  sub x9,x9,x8
7101bd3cb4  lsr x10,x9,#0x3
7101bd3cb8  cmp w10,#0x1
7101bd3cbc  b.lt 0x7101bd3d00
7101bd3cc0  ldr x2,[x8]
7101bd3cc4  mov x0,x24
7101bd3cc8  mov w1,wzr
7101bd3ccc  ubfx x20,x9,#0x3,#0x20
7101bd3cd0  bl 0x710376e070
7101bd3cd4  cmp x20,#0x1
7101bd3cd8  b.eq 0x7101bd3d00
7101bd3cdc  mov w25,#0x1
7101bd3ce0  ldr x8,[x24, #0x180]
7101bd3ce4  ldr x2,[x8, x25, LSL #0x3]
7101bd3ce8  mov x0,x24
7101bd3cec  mov w1,w25
7101bd3cf0  bl 0x710376e070
7101bd3cf4  add x25,x25,#0x1
7101bd3cf8  cmp x20,x25
7101bd3cfc  b.ne 0x7101bd3ce0
7101bd3d00  ldr x1,[x23]
7101bd3d04  cbz x1,0x7101bd3e74
7101bd3d08  ldp x8,x9,[x1, #0x180]
7101bd3d0c  sub x8,x9,x8
7101bd3d10  lsr x8,x8,#0x3
7101bd3d14  cmp w8,#0x1
7101bd3d18  b.lt 0x7101bd3e58
7101bd3d1c  mov w24,wzr
7101bd3d20  adrp x20,0x710523d000
7101bd3d24  add x20,x20,#0x9c8
7101bd3d28  add x0,sp,#0x20
7101bd3d2c  mov w2,w24
7101bd3d30  bl 0x7103771d60
7101bd3d34  ldr x25,[sp, #0x28]
7101bd3d38  ldr x26,[x25]
7101bd3d3c  cbz x26,0x7101bd3d80
7101bd3d40  ldr x8,[x26]
7101bd3d44  ldr x8,[x8, #0x1f8]
7101bd3d48  mov x0,x26
7101bd3d4c  mov w1,wzr
7101bd3d50  blr x8
7101bd3d54  ldr x8,[x26]
7101bd3d58  ldr x8,[x8, #0x200]
7101bd3d5c  mov x0,x26
7101bd3d60  blr x8
7101bd3d64  tbz w0,#0x0,0x7101bd3d8c
7101bd3d68  ldr x8,[x26]
7101bd3d6c  ldr x8,[x8, #0x210]
7101bd3d70  mov x0,x26
7101bd3d74  blr x8
7101bd3d78  eor w8,w0,#0x1
7101bd3d7c  b 0x7101bd3d90
7101bd3d80  stp x20,xzr,[sp, #0x20]
7101bd3d84  cbnz x25,0x7101bd3e34
7101bd3d88  b 0x7101bd3e3c
7101bd3d8c  mov w8,#0x1
7101bd3d90  ldr x9,[x26]
7101bd3d94  ldr x9,[x9, #0x388]
7101bd3d98  and w1,w8,#0x1
7101bd3d9c  mov x0,x26
7101bd3da0  mov w2,wzr
7101bd3da4  blr x9
7101bd3da8  ldr x26,[x25]
7101bd3dac  cbz x26,0x7101bd3df0
7101bd3db0  ldr x8,[x26]
7101bd3db4  ldr x8,[x8, #0x208]
7101bd3db8  mov x0,x26
7101bd3dbc  mov w1,wzr
7101bd3dc0  blr x8
7101bd3dc4  ldr x8,[x26]
7101bd3dc8  ldr x8,[x8, #0x200]
7101bd3dcc  mov x0,x26
7101bd3dd0  blr x8
7101bd3dd4  tbz w0,#0x0,0x7101bd3df8
7101bd3dd8  ldr x8,[x26]
7101bd3ddc  ldr x8,[x8, #0x210]
7101bd3de0  mov x0,x26
7101bd3de4  blr x8
7101bd3de8  eor w8,w0,#0x1
7101bd3dec  b 0x7101bd3dfc
7101bd3df0  mov x1,xzr
7101bd3df4  b 0x7101bd3e18
7101bd3df8  mov w8,#0x1
7101bd3dfc  ldr x9,[x26]
7101bd3e00  ldr x9,[x9, #0x388]
7101bd3e04  and w1,w8,#0x1
7101bd3e08  mov x0,x26
7101bd3e0c  mov w2,wzr
7101bd3e10  blr x9
7101bd3e14  ldr x1,[x25]
7101bd3e18  add x0,sp,#0x10
7101bd3e1c  bl 0x710377ad90
7101bd3e20  ldr x0,[sp, #0x18]
7101bd3e24  stp x28,xzr,[sp, #0x10]
7101bd3e28  cbz x0,0x7101bd3e30
7101bd3e2c  bl 0x710392eb40
7101bd3e30  stp x20,xzr,[sp, #0x20]
7101bd3e34  mov x0,x25
7101bd3e38  bl 0x710392eb40
7101bd3e3c  ldr x1,[x23]
7101bd3e40  ldp x8,x9,[x1, #0x180]
7101bd3e44  sub x8,x9,x8
7101bd3e48  add w24,w24,#0x1
7101bd3e4c  lsr x8,x8,#0x3
7101bd3e50  cmp w24,w8
7101bd3e54  b.lt 0x7101bd3d28
7101bd3e58  mov x0,x1
7101bd3e5c  bl 0x710376b960
7101bd3e60  ldr x0,[x23]
7101bd3e64  ldr x8,[x0]
7101bd3e68  ldr x8,[x8, #0x70]
7101bd3e6c  mov w1,wzr
7101bd3e70  blr x8
7101bd3e74  ldr x0,[sp, #0x180]
7101bd3e78  add x8,sp,#0x70
7101bd3e7c  add x8,x8,#0xf0
7101bd3e80  cmp x8,x0
7101bd3e84  b.eq 0x7101bd3e98
7101bd3e88  cbz x0,0x7101bd3ea4
7101bd3e8c  ldr x8,[x0]
7101bd3e90  ldr x8,[x8, #0x28]
7101bd3e94  b 0x7101bd3ea0
7101bd3e98  ldr x8,[x0]
7101bd3e9c  ldr x8,[x8, #0x20]
7101bd3ea0  blr x8
7101bd3ea4  ldr x0,[sp, #0x150]
7101bd3ea8  add x8,sp,#0x70
7101bd3eac  add x8,x8,#0xc0
7101bd3eb0  cmp x8,x0
7101bd3eb4  b.eq 0x7101bd3ec8
7101bd3eb8  cbz x0,0x7101bd3ed4
7101bd3ebc  ldr x8,[x0]
7101bd3ec0  ldr x8,[x8, #0x28]
7101bd3ec4  b 0x7101bd3ed0
7101bd3ec8  ldr x8,[x0]
7101bd3ecc  ldr x8,[x8, #0x20]
7101bd3ed0  blr x8
7101bd3ed4  ldr x0,[sp, #0x120]
7101bd3ed8  add x8,sp,#0x70
7101bd3edc  add x8,x8,#0x90
7101bd3ee0  cmp x8,x0
7101bd3ee4  b.eq 0x7101bd3ef8
7101bd3ee8  cbz x0,0x7101bd3f04
7101bd3eec  ldr x8,[x0]
7101bd3ef0  ldr x8,[x8, #0x28]
7101bd3ef4  b 0x7101bd3f00
7101bd3ef8  ldr x8,[x0]
7101bd3efc  ldr x8,[x8, #0x20]
7101bd3f00  blr x8
7101bd3f04  ldr x0,[sp, #0xf0]
7101bd3f08  add x8,sp,#0x70
7101bd3f0c  add x8,x8,#0x60
7101bd3f10  cmp x8,x0
7101bd3f14  b.eq 0x7101bd3f28
7101bd3f18  cbz x0,0x7101bd3f34
7101bd3f1c  ldr x8,[x0]
7101bd3f20  ldr x8,[x8, #0x28]
7101bd3f24  b 0x7101bd3f30
7101bd3f28  ldr x8,[x0]
7101bd3f2c  ldr x8,[x8, #0x20]
7101bd3f30  blr x8
7101bd3f34  ldr x0,[sp, #0xc0]
7101bd3f38  add x8,sp,#0x70
7101bd3f3c  add x8,x8,#0x30
7101bd3f40  cmp x8,x0
7101bd3f44  b.eq 0x7101bd3f58
7101bd3f48  cbz x0,0x7101bd3f64
7101bd3f4c  ldr x8,[x0]
7101bd3f50  ldr x8,[x8, #0x28]
7101bd3f54  b 0x7101bd3f60
7101bd3f58  ldr x8,[x0]
7101bd3f5c  ldr x8,[x8, #0x20]
7101bd3f60  blr x8
7101bd3f64  mov x9,#0x41f0000000000000
7101bd3f68  add x23,x19,#0x190
7101bd3f6c  mov w8,#0x1
7101bd3f70  str x9,[sp, #0x88]
7101bd3f74  add x9,sp,#0x70
7101bd3f78  adrp x2,0x71043e0000
7101bd3f7c  add x2,x2,#0xa56
7101bd3f80  add x3,sp,#0x70
7101bd3f84  str xzr,[sp, #0x70]
7101bd3f88  mov x0,x23
7101bd3f8c  mov x1,x22
7101bd3f90  strh w27,[sp, #0x78]
7101bd3f94  stur wzr,[sp, #0x7a]
7101bd3f98  strh wzr,[sp, #0x7e]
7101bd3f9c  str w8,[sp, #0x80]
7101bd3fa0  strh w8,[sp, #0x84]
7101bd3fa4  add x20,x9,#0xf0
7101bd3fa8  strb w8,[sp, #0x86]
7101bd3fac  str wzr,[sp, #0x90]
7101bd3fb0  str xzr,[sp, #0xc0]
7101bd3fb4  str xzr,[sp, #0xf0]
7101bd3fb8  str xzr,[sp, #0x120]
7101bd3fbc  str xzr,[sp, #0x150]
7101bd3fc0  str xzr,[sp, #0x180]
7101bd3fc4  str wzr,[sp, #0x190]
7101bd3fc8  strb w8,[sp, #0x7a]
7101bd3fcc  bl 0x7103770b30
7101bd3fd0  adrp x2,0x71042f8000
7101bd3fd4  add x2,x2,#0x193
7101bd3fd8  mov x0,x23
7101bd3fdc  mov w1,wzr
7101bd3fe0  bl 0x71037717d0
7101bd3fe4  ldr x0,[x19, #0x190]
7101bd3fe8  orr w2,wzr,#0x6
7101bd3fec  mov w1,wzr
7101bd3ff0  mov w3,wzr
7101bd3ff4  bl 0x7103771930
7101bd3ff8  ldr x0,[x19, #0x190]
7101bd3ffc  bl 0x710376b960
7101bd4000  ldr x0,[x19, #0x190]
7101bd4004  ldr x8,[x0]
7101bd4008  ldr x8,[x8, #0x60]
7101bd400c  mov w1,wzr
7101bd4010  blr x8
7101bd4014  ldr x0,[sp, #0x180]
7101bd4018  cmp x20,x0
7101bd401c  b.eq 0x7101bd4030
7101bd4020  cbz x0,0x7101bd403c
7101bd4024  ldr x8,[x0]
7101bd4028  ldr x8,[x8, #0x28]
7101bd402c  b 0x7101bd4038
7101bd4030  ldr x8,[x0]
7101bd4034  ldr x8,[x8, #0x20]
7101bd4038  blr x8
7101bd403c  ldr x0,[sp, #0x150]
7101bd4040  add x8,sp,#0x70
7101bd4044  add x8,x8,#0xc0
7101bd4048  cmp x8,x0
7101bd404c  b.eq 0x7101bd4060
7101bd4050  cbz x0,0x7101bd406c
7101bd4054  ldr x8,[x0]
7101bd4058  ldr x8,[x8, #0x28]
7101bd405c  b 0x7101bd4068
7101bd4060  ldr x8,[x0]
7101bd4064  ldr x8,[x8, #0x20]
7101bd4068  blr x8
7101bd406c  ldr x0,[sp, #0x120]
7101bd4070  add x8,sp,#0x70
7101bd4074  add x8,x8,#0x90
7101bd4078  cmp x8,x0
7101bd407c  b.eq 0x7101bd4090
7101bd4080  cbz x0,0x7101bd409c
7101bd4084  ldr x8,[x0]
7101bd4088  ldr x8,[x8, #0x28]
7101bd408c  b 0x7101bd4098
7101bd4090  ldr x8,[x0]
7101bd4094  ldr x8,[x8, #0x20]
7101bd4098  blr x8
7101bd409c  ldr x0,[sp, #0xf0]
7101bd40a0  add x8,sp,#0x70
7101bd40a4  add x8,x8,#0x60
7101bd40a8  cmp x8,x0
7101bd40ac  b.eq 0x7101bd40c0
7101bd40b0  cbz x0,0x7101bd40cc
7101bd40b4  ldr x8,[x0]
7101bd40b8  ldr x8,[x8, #0x28]
7101bd40bc  b 0x7101bd40c8
7101bd40c0  ldr x8,[x0]
7101bd40c4  ldr x8,[x8, #0x20]
7101bd40c8  blr x8
7101bd40cc  ldr x0,[sp, #0xc0]
7101bd40d0  add x8,sp,#0x70
7101bd40d4  add x8,x8,#0x30
7101bd40d8  cmp x8,x0
7101bd40dc  b.eq 0x7101bd40f0
7101bd40e0  cbz x0,0x7101bd40fc
7101bd40e4  ldr x8,[x0]
7101bd40e8  ldr x8,[x8, #0x28]
7101bd40ec  b 0x7101bd40f8
7101bd40f0  ldr x8,[x0]
7101bd40f4  ldr x8,[x8, #0x20]
7101bd40f8  blr x8
7101bd40fc  adrp x1,0x7104318000
7101bd4100  add x1,x1,#0xd52
7101bd4104  add x8,sp,#0x70
7101bd4108  mov x0,x22
7101bd410c  bl 0x7103776640
7101bd4110  ldr x23,[sp, #0x78]
7101bd4114  ldr x8,[x23, #0x8]
7101bd4118  cbz x8,0x7101bd4150
7101bd411c  adrp x1,0x710434a000
7101bd4120  add x1,x1,#0x68e
7101bd4124  add x8,sp,#0x20
7101bd4128  add x0,sp,#0x70
7101bd412c  bl 0x7103776910
7101bd4130  ldr x24,[sp, #0x28]
7101bd4134  mov x0,x24
7101bd4138  bl 0x7103779cc0
7101bd413c  str w0,[x19, #0x1c8]
7101bd4140  stp x28,xzr,[sp, #0x20]
7101bd4144  cbz x24,0x7101bd4150
7101bd4148  mov x0,x24
7101bd414c  bl 0x710392eb40
7101bd4150  adrp x20,0x710523d000
7101bd4154  add x20,x20,#0x988
7101bd4158  stp x20,xzr,[sp, #0x70]
7101bd415c  cbz x23,0x7101bd4178
7101bd4160  ldr x0,[x23, #0x18]
7101bd4164  stp x28,xzr,[x23, #0x10]
7101bd4168  cbz x0,0x7101bd4170
7101bd416c  bl 0x710392eb40
7101bd4170  mov x0,x23
7101bd4174  bl 0x710392eb40
7101bd4178  ldrh w2,[x19, #0x1b0]
7101bd417c  add x1,x19,#0x198
7101bd4180  mov x0,x19
7101bd4184  mov w3,wzr
7101bd4188  bl 0x7101bd43a0
7101bd418c  adrp x1,0x710434a000
7101bd4190  add x1,x1,#0x50a
7101bd4194  add x8,sp,#0x20
7101bd4198  mov x0,x22
7101bd419c  bl 0x7103776640
7101bd41a0  fmov s8,0x3f800000
7101bd41a4  ldr x22,[sp, #0x28]
7101bd41a8  adrp x1,0x7104411000
7101bd41ac  add x1,x1,#0x39d
7101bd41b0  mov v0.16B,v8.16B
7101bd41b4  mov x0,x22
7101bd41b8  bl 0x7103778300
7101bd41bc  mov v0.16B,v8.16B
7101bd41c0  adrp x1,0x7104292000
7101bd41c4  add x1,x1,#0x57e
7101bd41c8  mov x0,x22
7101bd41cc  bl 0x7103778300
7101bd41d0  mov w8,#0x1
7101bd41d4  str w8,[x19, #0x1b4]
7101bd41d8  ldr x8,[x19]
7101bd41dc  str wzr,[x19, #0x1c4]
7101bd41e0  ldr x8,[x8, #0x10]
7101bd41e4  mov x0,x19
7101bd41e8  blr x8
7101bd41ec  ldp x8,x9,[x19, #0x10]
7101bd41f0  cmp x9,x8
7101bd41f4  b.eq 0x7101bd4394
7101bd41f8  ldr x10,[x8]
7101bd41fc  ldr x10,[x10]
7101bd4200  ldr x10,[x10]
7101bd4204  ldr x11,[x10, #0x10]
7101bd4208  ldr x11,[x11, #0x8]
7101bd420c  cbz x11,0x7101bd4270
7101bd4210  add x0,x10,#0x8
7101bd4214  adrp x1,0x71043cf000
7101bd4218  add x1,x1,#0x2fb
7101bd421c  add x8,sp,#0x70
7101bd4220  bl 0x71037780e0
7101bd4224  ldr x23,[sp, #0x78]
7101bd4228  ldr x8,[x23]
7101bd422c  cbz x8,0x7101bd4254
7101bd4230  ldr x8,[x23, #0x8]
7101bd4234  cbz x8,0x7101bd4244
7101bd4238  fmov s0,0x3f800000
7101bd423c  add x0,sp,#0x70
7101bd4240  bl 0x710377aee0
7101bd4244  adrp x8,0x710523d000
7101bd4248  add x8,x8,#0x9e8
7101bd424c  stp x8,xzr,[sp, #0x70]
7101bd4250  b 0x7101bd4264
7101bd4254  adrp x8,0x710523d000
7101bd4258  add x8,x8,#0x9e8
7101bd425c  stp x8,xzr,[sp, #0x70]
7101bd4260  cbz x23,0x7101bd426c
7101bd4264  mov x0,x23
7101bd4268  bl 0x710392eb40
7101bd426c  ldp x8,x9,[x19, #0x10]
7101bd4270  ldur w23,[x29, #-0x54]
7101bd4274  cmp x9,x8
7101bd4278  b.eq 0x7101bd4394
7101bd427c  ldr x8,[x8]
7101bd4280  ldr x8,[x8]
7101bd4284  ldr x8,[x8]
7101bd4288  ldr x9,[x8, #0x10]
7101bd428c  ldr x9,[x9, #0x8]
7101bd4290  cbz x9,0x7101bd42f0
7101bd4294  add x0,x8,#0x8
7101bd4298  adrp x1,0x7104401000
7101bd429c  add x1,x1,#0x36a
7101bd42a0  add x8,sp,#0x70
7101bd42a4  bl 0x71037780e0
7101bd42a8  ldr x21,[sp, #0x78]
7101bd42ac  ldr x8,[x21]
7101bd42b0  cbz x8,0x7101bd42d8
7101bd42b4  ldr x8,[x21, #0x8]
7101bd42b8  cbz x8,0x7101bd42c8
7101bd42bc  fmov s0,0x3f800000
7101bd42c0  add x0,sp,#0x70
7101bd42c4  bl 0x710377aee0
7101bd42c8  adrp x8,0x710523d000
7101bd42cc  add x8,x8,#0x9e8
7101bd42d0  stp x8,xzr,[sp, #0x70]
7101bd42d4  b 0x7101bd42e8
7101bd42d8  adrp x8,0x710523d000
7101bd42dc  add x8,x8,#0x9e8
7101bd42e0  stp x8,xzr,[sp, #0x70]
7101bd42e4  cbz x21,0x7101bd42f0
7101bd42e8  mov x0,x21
7101bd42ec  bl 0x710392eb40
7101bd42f0  cmn w23,#0x1
7101bd42f4  b.eq 0x7101bd4334
7101bd42f8  ldrsw x8,[x19, #0x124]
7101bd42fc  cmp w8,#0x13
7101bd4300  str w23,[x19, #0x160]
7101bd4304  b.cs 0x7101bd439c
7101bd4308  add x8,x19,x8, LSL #0x2
7101bd430c  orr w9,wzr,#0x3
7101bd4310  str w9,[x8, #0xd8]
7101bd4314  ldr x8,[sp, #0x8]
7101bd4318  ldr x0,[x8, #0x10]
7101bd431c  adrp x1,0x7104421000
7101bd4320  add x1,x1,#0x55
7101bd4324  bl 0x7103778760
7101bd4328  stp x20,xzr,[sp, #0x20]
7101bd432c  cbnz x22,0x7101bd4354
7101bd4330  b 0x7101bd436c
7101bd4334  ldr x8,[sp, #0x8]
7101bd4338  ldr x0,[x8, #0x10]
7101bd433c  fmov s0,0x3f800000
7101bd4340  adrp x1,0x7104421000
7101bd4344  add x1,x1,#0x55
7101bd4348  bl 0x7103778300
7101bd434c  stp x20,xzr,[sp, #0x20]
7101bd4350  cbz x22,0x7101bd436c
7101bd4354  ldr x0,[x22, #0x18]
7101bd4358  stp x28,xzr,[x22, #0x10]
7101bd435c  cbz x0,0x7101bd4364
7101bd4360  bl 0x710392eb40
7101bd4364  mov x0,x22
7101bd4368  bl 0x710392eb40
7101bd436c  add sp,sp,#0x2, LSL #12
7101bd4370  add sp,sp,#0x210
7101bd4374  ldp x29,x30,[sp, #0x60]
7101bd4378  ldp x20,x19,[sp, #0x50]
7101bd437c  ldp x22,x21,[sp, #0x40]
7101bd4380  ldp x24,x23,[sp, #0x30]
7101bd4384  ldp x26,x25,[sp, #0x20]
7101bd4388  ldp x28,x27,[sp, #0x10]
7101bd438c  ldr d8,[sp], #0x70
7101bd4390  ret
7101bd4394  mov x0,x21
7101bd4398  bl 0x71039c1330
7101bd439c  bl 0x71039c2650
