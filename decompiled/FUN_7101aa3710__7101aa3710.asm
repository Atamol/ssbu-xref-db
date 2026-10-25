// addr:      7101aa3710
// offset:    0x1aa3710
// name:      FUN_7101aa3710
// mangled:   
// size:      800

7101aa3710  sub sp,sp,#0xa0
7101aa3714  stp x24,x23,[sp, #0x60]
7101aa3718  stp x22,x21,[sp, #0x70]
7101aa371c  stp x20,x19,[sp, #0x80]
7101aa3720  stp x29,x30,[sp, #0x90]
7101aa3724  add x29,sp,#0x90
7101aa3728  ldp x8,x9,[x0, #0x8]
7101aa372c  sub x9,x9,x8
7101aa3730  asr x10,x9,#0x5
7101aa3734  sxtw x9,w1
7101aa3738  cmp x10,x9
7101aa373c  b.ls 0x7101aa3a18
7101aa3740  add x21,x8,x9, LSL #0x5
7101aa3744  mov x22,x21
7101aa3748  mov x19,x2
7101aa374c  ldr x8,[x22, #0x10]!
7101aa3750  cbz x8,0x7101aa37ac
7101aa3754  ldrh w9,[x8, #0x20]
7101aa3758  ldrb w10,[x8, #0x22]
7101aa375c  and x9,x9,#0xfff
7101aa3760  ldrb w11,[x8, #0x23]
7101aa3764  bfm x9,x10,#0x34,#0x3
7101aa3768  ldrb w10,[x8, #0x2a]
7101aa376c  bfm x9,x11,#0x30,#0x4
7101aa3770  ldrb w11,[x8, #0x2b]
7101aa3774  orr x24,x9,#0x4000000000000000
7101aa3778  ldrh w9,[x8, #0x28]
7101aa377c  and x9,x9,#0xfff
7101aa3780  ldrb w12,[x8, #0x2c]
7101aa3784  bfm x9,x10,#0x34,#0x3
7101aa3788  ldrb w13,[x8, #0x2d]
7101aa378c  ldrb w8,[x8, #0x2e]
7101aa3790  and w8,w8,#0x3f
7101aa3794  bfm x9,x11,#0x30,#0x4
7101aa3798  bfm x9,x12,#0x2b,#0x4
7101aa379c  bfm x9,x13,#0x26,#0x5
7101aa37a0  bfm x9,x8,#0x20,#0x5
7101aa37a4  orr x8,x9,#0x4000000000000000
7101aa37a8  b 0x7101aa37b0
7101aa37ac  mov x24,xzr
7101aa37b0  str x8,[sp, #0x40]
7101aa37b4  adrp x1,0x71043be000
7101aa37b8  add x1,x1,#0x822
7101aa37bc  add x8,sp,#0x30
7101aa37c0  mov x0,x19
7101aa37c4  mov w23,#0x4240
7101aa37c8  movk w23,#0xf, LSL #16
7101aa37cc  bl 0x7103776910
7101aa37d0  adrp x1,0x7104319000
7101aa37d4  add x1,x1,#0x6c3
7101aa37d8  add x8,sp,#0x20
7101aa37dc  mov x0,x19
7101aa37e0  bl 0x7103776910
7101aa37e4  adrp x1,0x710435b000
7101aa37e8  add x1,x1,#0xf3
7101aa37ec  add x8,sp,#0x10
7101aa37f0  mov x0,x19
7101aa37f4  bl 0x7103776910
7101aa37f8  adrp x1,0x7104292000
7101aa37fc  add x1,x1,#0x511
7101aa3800  mov x8,sp
7101aa3804  mov x0,x19
7101aa3808  bl 0x7103776640
7101aa380c  ldr x20,[sp, #0x8]
7101aa3810  fmov s0,0x3f800000
7101aa3814  adrp x1,0x71043cd000
7101aa3818  add x1,x1,#0x335
7101aa381c  mov x0,x20
7101aa3820  bl 0x7103778300
7101aa3824  and x8,x24,#0xfff
7101aa3828  mul x8,x8,x23
7101aa382c  ubfx x9,x24,#0xc,#0x4
7101aa3830  mov w11,#0x3e8
7101aa3834  madd x8,x9,x11,x8
7101aa3838  ubfx x10,x24,#0x10,#0x5
7101aa383c  add x2,x8,x10
7101aa3840  add x0,sp,#0x30
7101aa3844  mov w1,#0x1
7101aa3848  bl 0x710377a310
7101aa384c  add x0,sp,#0x40
7101aa3850  sub x1,x29,#0x38
7101aa3854  bl 0x71037419c0
7101aa3858  tbz w0,#0x0,0x7101aa38b4
7101aa385c  ldur x8,[x29, #-0x38]
7101aa3860  add x0,sp,#0x48
7101aa3864  sub x2,x29,#0x40
7101aa3868  mov x1,xzr
7101aa386c  stur x8,[x29, #-0x40]
7101aa3870  bl 0x71039c6290
7101aa3874  mov x24,xzr
7101aa3878  cbnz w0,0x7101aa38b8
7101aa387c  ldrh w8,[sp, #0x48]
7101aa3880  ldrb w9,[sp, #0x4a]
7101aa3884  and x8,x8,#0xfff
7101aa3888  bfm x8,x9,#0x34,#0x3
7101aa388c  ldrb w9,[sp, #0x4b]
7101aa3890  bfm x8,x9,#0x30,#0x4
7101aa3894  ldrb w9,[sp, #0x4c]
7101aa3898  bfm x8,x9,#0x2b,#0x4
7101aa389c  ldrb w9,[sp, #0x4d]
7101aa38a0  ldrb w10,[sp, #0x4e]
7101aa38a4  bfm x8,x9,#0x26,#0x5
7101aa38a8  bfm x8,x10,#0x20,#0x5
7101aa38ac  orr x24,x8,#-0x8000000000000000
7101aa38b0  b 0x7101aa38b8
7101aa38b4  mov x24,xzr
7101aa38b8  ldr x8,[x22]
7101aa38bc  add x9,x8,#0x50
7101aa38c0  cmp x8,#0x0
7101aa38c4  csel x1,xzr,x9,eq
7101aa38c8  add x0,sp,#0x20
7101aa38cc  bl 0x710377a120
7101aa38d0  ldr w8,[x21, #0x4]
7101aa38d4  sub w8,w8,#0x1
7101aa38d8  cmp w8,#0x5
7101aa38dc  b.hi 0x7101aa39b0
7101aa38e0  adrp x9,0x71044f7000
7101aa38e4  add x9,x9,#0xd78
7101aa38e8  ldrsw x8,[x9, x8, LSL #0x2]
7101aa38ec  add x8,x8,x9
7101aa38f0  br x8
7101aa38f4  ubfx x8,x24,#0x15,#0x5
7101aa38f8  mul x8,x8,x23
7101aa38fc  ubfx x10,x24,#0x1a,#0x6
7101aa3900  mov w12,#0x3e8
7101aa3904  madd x8,x10,x12,x8
7101aa3908  and x9,x24,#0xfff
7101aa390c  ubfx x11,x24,#0x20,#0x6
7101aa3910  add x4,x8,x11
7101aa3914  mul x8,x9,x23
7101aa3918  ubfx x13,x24,#0xc,#0x4
7101aa391c  madd x8,x13,x12,x8
7101aa3920  ubfx x14,x24,#0x10,#0x5
7101aa3924  add x3,x8,x14
7101aa3928  adrp x1,0x7104318000
7101aa392c  add x1,x1,#0x9bb
7101aa3930  add x0,sp,#0x10
7101aa3934  mov w2,#0x2
7101aa3938  bl 0x710377a280
7101aa393c  ldr x0,[x19, #0x8]
7101aa3940  adrp x1,0x710437c000
7101aa3944  add x1,x1,#0xb5
7101aa3948  b 0x7101aa39a8
7101aa394c  ldr x8,[sp, #0x18]
7101aa3950  ldr x0,[x8, #0x10]
7101aa3954  cbz x0,0x7101aa396c
7101aa3958  sub x1,x29,#0x38
7101aa395c  mov w2,wzr
7101aa3960  mov w3,wzr
7101aa3964  stur wzr,[x29, #-0x38]
7101aa3968  bl 0x71037a2270
7101aa396c  ldr x0,[x19, #0x8]
7101aa3970  adrp x1,0x710424e000
7101aa3974  add x1,x1,#0xfbc
7101aa3978  b 0x7101aa39a8
7101aa397c  ldr x8,[sp, #0x18]
7101aa3980  ldr x0,[x8, #0x10]
7101aa3984  cbz x0,0x7101aa399c
7101aa3988  sub x1,x29,#0x38
7101aa398c  mov w2,wzr
7101aa3990  mov w3,wzr
7101aa3994  stur wzr,[x29, #-0x38]
7101aa3998  bl 0x71037a2270
7101aa399c  ldr x0,[x19, #0x8]
7101aa39a0  adrp x1,0x71043f0000
7101aa39a4  add x1,x1,#0x507
7101aa39a8  fmov s0,0x3f800000
7101aa39ac  bl 0x7103778300
7101aa39b0  adrp x8,0x710523d000
7101aa39b4  add x8,x8,#0x988
7101aa39b8  stp x8,xzr,[sp]
7101aa39bc  cbz x20,0x7101aa39e0
7101aa39c0  ldr x0,[x20, #0x18]
7101aa39c4  adrp x8,0x710523d000
7101aa39c8  add x8,x8,#0x9a8
7101aa39cc  stp x8,xzr,[x20, #0x10]
7101aa39d0  cbz x0,0x7101aa39d8
7101aa39d4  bl 0x710392eb40
7101aa39d8  mov x0,x20
7101aa39dc  bl 0x710392eb40
7101aa39e0  ldr x0,[sp, #0x18]
7101aa39e4  adrp x19,0x710523d000
7101aa39e8  add x19,x19,#0x9a8
7101aa39ec  stp x19,xzr,[sp, #0x10]
7101aa39f0  cbz x0,0x7101aa39f8
7101aa39f4  bl 0x710392eb40
7101aa39f8  ldr x0,[sp, #0x28]
7101aa39fc  stp x19,xzr,[sp, #0x20]
7101aa3a00  cbz x0,0x7101aa3a08
7101aa3a04  bl 0x710392eb40
7101aa3a08  ldr x0,[sp, #0x38]
7101aa3a0c  stp x19,xzr,[sp, #0x30]
7101aa3a10  cbz x0,0x7101aa3a18
7101aa3a14  bl 0x710392eb40
7101aa3a18  ldp x29,x30,[sp, #0x90]
7101aa3a1c  ldp x20,x19,[sp, #0x80]
7101aa3a20  ldp x22,x21,[sp, #0x70]
7101aa3a24  ldp x24,x23,[sp, #0x60]
7101aa3a28  add sp,sp,#0xa0
7101aa3a2c  ret
