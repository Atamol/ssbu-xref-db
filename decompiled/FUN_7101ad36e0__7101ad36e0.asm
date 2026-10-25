// addr:      7101ad36e0
// offset:    0x1ad36e0
// name:      FUN_7101ad36e0
// mangled:   
// size:      1192

7101ad36e0  sub sp,sp,#0x60
7101ad36e4  str x25,[sp, #0x10]
7101ad36e8  stp x24,x23,[sp, #0x20]
7101ad36ec  stp x22,x21,[sp, #0x30]
7101ad36f0  stp x20,x19,[sp, #0x40]
7101ad36f4  stp x29,x30,[sp, #0x50]
7101ad36f8  add x29,sp,#0x50
7101ad36fc  mov x19,x0
7101ad3700  add x0,x0,#0x100
7101ad3704  adrp x1,0x71042f6000
7101ad3708  add x1,x1,#0x50c
7101ad370c  mov x8,sp
7101ad3710  mov x23,#-0x3f00000000000000
7101ad3714  bl 0x7103776910
7101ad3718  ldr x8,[x19, #0x118]
7101ad371c  and x9,x8,#0xffffffffff
7101ad3720  and x8,x8,#-0x100000000000000
7101ad3724  cmp x8,x23
7101ad3728  add x20,x19,#0x118
7101ad372c  ccmp x9,#0x0,#0x4,eq
7101ad3730  b.ne 0x7101ad373c
7101ad3734  mov w3,wzr
7101ad3738  b 0x7101ad3768
7101ad373c  ldrb w8,[x19, #0x120]
7101ad3740  cmp w8,#0x6
7101ad3744  b.eq 0x7101ad375c
7101ad3748  cmp w8,#0x7
7101ad374c  b.hi 0x7101ad375c
7101ad3750  ldr x8,[x19, #0x128]
7101ad3754  tst x8,#0xffffffffff
7101ad3758  b.eq 0x7101ad393c
7101ad375c  mov x0,x20
7101ad3760  bl 0x7101782120
7101ad3764  mov w3,w0
7101ad3768  adrp x1,0x7104319000
7101ad376c  add x1,x1,#0x115
7101ad3770  mov x0,sp
7101ad3774  mov w2,#0x1
7101ad3778  mov w21,#0x1
7101ad377c  bl 0x710377a280
7101ad3780  strb wzr,[x19, #0x250]
7101ad3784  adrp x22,0x7105314000
7101ad3788  ldr x9,[x22, #0x510]
7101ad378c  ldr x9,[x9]
7101ad3790  ldr x9,[x9, #0x1b8]
7101ad3794  ldr x9,[x9]
7101ad3798  ldr x9,[x9]
7101ad379c  ldr w8,[x19, #0x138]
7101ad37a0  ldr w9,[x9]
7101ad37a4  cmp w8,w9
7101ad37a8  b.ls 0x7101ad37b0
7101ad37ac  strb w21,[x19, #0x250]
7101ad37b0  ldrb w9,[x19, #0x120]
7101ad37b4  cmp w9,#0x5
7101ad37b8  strb wzr,[x19, #0x251]
7101ad37bc  b.ne 0x7101ad3984
7101ad37c0  adrp x8,0x710532f000
7101ad37c4  ldr x8,[x8, #0x730]
7101ad37c8  ldr x25,[x8, #0x8]
7101ad37cc  ldr x8,[x25, #0x318]
7101ad37d0  ldr x1,[x19, #0x128]
7101ad37d4  ldr x0,[x8, #0x8]
7101ad37d8  bl 0x710327d930
7101ad37dc  ldr x8,[x25, #0x318]
7101ad37e0  mov x21,x0
7101ad37e4  ldr x1,[x19, #0x128]
7101ad37e8  ldr x0,[x8, #0x8]
7101ad37ec  bl 0x710327d930
7101ad37f0  bl 0x710338b490
7101ad37f4  cmp w0,#0x1
7101ad37f8  b.ne 0x7101ad3820
7101ad37fc  add x0,x25,#0x310
7101ad3800  mov x1,x21
7101ad3804  bl 0x710327de70
7101ad3808  sub w9,w0,#0x1
7101ad380c  and w8,w9,#0xff
7101ad3810  cmp w8,#0xf
7101ad3814  b.ls 0x7101ad38fc
7101ad3818  mov w8,wzr
7101ad381c  b 0x7101ad397c
7101ad3820  ldr x8,[x25, #0x318]
7101ad3824  ldr x0,[x8, #0x8]
7101ad3828  mov x1,#0xaa88
7101ad382c  movk x1,#0x723a, LSL #16
7101ad3830  movk x1,#0x18, LSL #32
7101ad3834  mov x24,#0x2d00000000000000
7101ad3838  bl 0x710327d930
7101ad383c  and x10,x21,#-0x100000000000000
7101ad3840  and x9,x21,#0xffffffffff
7101ad3844  and x8,x0,#0xffffffffff
7101ad3848  cmp x10,x24
7101ad384c  b.ne 0x7101ad3874
7101ad3850  cbz x9,0x7101ad3874
7101ad3854  and x11,x0,#-0x100000000000000
7101ad3858  cmp x11,x24
7101ad385c  b.ne 0x7101ad3878
7101ad3860  cbz x8,0x7101ad3878
7101ad3864  eor x8,x0,x21
7101ad3868  tst x8,#0xffffffffff
7101ad386c  b.ne 0x7101ad3980
7101ad3870  b 0x7101ad38ac
7101ad3874  and x11,x0,#-0x100000000000000
7101ad3878  cmp x10,x24
7101ad387c  cset w10,eq
7101ad3880  cmp x9,#0x0
7101ad3884  cset w9,ne
7101ad3888  cmp x8,#0x0
7101ad388c  cset w8,ne
7101ad3890  cmp x11,x24
7101ad3894  and w9,w10,w9
7101ad3898  cset w10,eq
7101ad389c  and w8,w8,w10
7101ad38a0  eor w8,w8,w9
7101ad38a4  cmp w8,#0x1
7101ad38a8  b.eq 0x7101ad3980
7101ad38ac  ldr x8,[x20]
7101ad38b0  and x9,x8,#-0x100000000000000
7101ad38b4  cmp x9,x23
7101ad38b8  b.ne 0x7101ad3980
7101ad38bc  and x8,x8,#0xffffffffff
7101ad38c0  cbz x8,0x7101ad3980
7101ad38c4  ldrb w8,[x19, #0x120]
7101ad38c8  cmp w8,#0x6
7101ad38cc  b.eq 0x7101ad38e4
7101ad38d0  cmp w8,#0x7
7101ad38d4  b.hi 0x7101ad38e4
7101ad38d8  ldr x8,[x19, #0x128]
7101ad38dc  tst x8,#0xffffffffff
7101ad38e0  b.eq 0x7101ad3b74
7101ad38e4  mov x0,x20
7101ad38e8  bl 0x7101782120
7101ad38ec  cmp w0,#0x63
7101ad38f0  b.cc 0x7101ad3980
7101ad38f4  mov w8,#0x1
7101ad38f8  b 0x7101ad397c
7101ad38fc  ldr x8,[x22, #0x510]
7101ad3900  ldr x8,[x8]
7101ad3904  ldr x8,[x8, #0xd8]
7101ad3908  ldr x8,[x8]
7101ad390c  and w10,w0,#0xff
7101ad3910  cmp w10,#0xe
7101ad3914  b.cs 0x7101ad394c
7101ad3918  and w10,w9,#0xff
7101ad391c  cmp w10,#0xd
7101ad3920  b.cs 0x7101ad3b84
7101ad3924  ldr x8,[x8]
7101ad3928  and x9,x9,#0xff
7101ad392c  ldrb w8,[x8, x9, LSL ]
7101ad3930  cmp w8,#0x63
7101ad3934  cset w8,eq
7101ad3938  b 0x7101ad397c
7101ad393c  ldr w8,[x19, #0x130]
7101ad3940  cmp w8,#0x0
7101ad3944  b.gt 0x7101ad3734
7101ad3948  b 0x7101ad375c
7101ad394c  sub w9,w0,#0xe
7101ad3950  mvn w10,w9
7101ad3954  tst w10,#0xff
7101ad3958  b.eq 0x7101ad3818
7101ad395c  and w10,w9,#0xff
7101ad3960  cmp w10,#0x3
7101ad3964  b.cs 0x7101ad3b84
7101ad3968  ldr x8,[x8]
7101ad396c  add x8,x8,w9, UXTB  #0x1
7101ad3970  ldrh w8,[x8, #0xe]
7101ad3974  cmp w8,#0x3e7
7101ad3978  cset w8,eq
7101ad397c  strb w8,[x19, #0x251]
7101ad3980  ldrb w9,[x19, #0x120]
7101ad3984  mov w8,wzr
7101ad3988  cmp w9,#0x4
7101ad398c  strb wzr,[x19, #0x252]
7101ad3990  b.ne 0x7101ad3a68
7101ad3994  adrp x8,0x710532f000
7101ad3998  ldr x8,[x8, #0x730]
7101ad399c  ldr x21,[x8, #0x8]
7101ad39a0  ldr x20,[x21, #0x1d8]
7101ad39a4  ldr x1,[x19, #0x128]
7101ad39a8  mov x0,x20
7101ad39ac  bl 0x71032a7800
7101ad39b0  ldp x9,x8,[x20, #0x20]
7101ad39b4  sub x8,x8,x9
7101ad39b8  lsr x10,x8,#0x6
7101ad39bc  mov w8,#0xcccd
7101ad39c0  movk w8,#0xcccc, LSL #16
7101ad39c4  mul w11,w10,w8
7101ad39c8  cmp w0,w11
7101ad39cc  b.cs 0x7101ad3a1c
7101ad39d0  mov w10,#0x140
7101ad39d4  umull x10,w0,w10
7101ad39d8  orr w12,wzr,#0xffff
7101ad39dc  ldrh w10,[x9, x10, LSL #0x0]
7101ad39e0  cmp x10,x12
7101ad39e4  b.eq 0x7101ad3a1c
7101ad39e8  add x12,x20,w10, SXTH  #0x1
7101ad39ec  ldrh w12,[x12, #0x60]
7101ad39f0  cmp w12,w11
7101ad39f4  b.cs 0x7101ad3a28
7101ad39f8  mov w11,#0x140
7101ad39fc  madd x9,x12,x11,x9
7101ad3a00  ldrb w9,[x9, #0x5e]
7101ad3a04  cmp w9,#0x3
7101ad3a08  b.ne 0x7101ad3a28
7101ad3a0c  mov w8,wzr
7101ad3a10  ldrb w9,[x19, #0x250]
7101ad3a14  cbnz w9,0x7101ad3aec
7101ad3a18  b 0x7101ad3ae0
7101ad3a1c  ldr x11,[x21, #0x1d8]
7101ad3a20  mov w9,#0xffffffff
7101ad3a24  b 0x7101ad3a38
7101ad3a28  ldr x11,[x21, #0x1d8]
7101ad3a2c  lsl x9,x10,#0x30
7101ad3a30  add x9,x11,x9, ASR #0x2f
7101ad3a34  ldrh w9,[x9, #0x60]
7101ad3a38  ldp x10,x11,[x11, #0x20]
7101ad3a3c  sub x11,x11,x10
7101ad3a40  lsr x11,x11,#0x6
7101ad3a44  mul w8,w11,w8
7101ad3a48  cmp w9,w8
7101ad3a4c  b.cs 0x7101ad3a74
7101ad3a50  mov w8,#0x140
7101ad3a54  umaddl x8,w9,w8,x10
7101ad3a58  ldrb w8,[x8, #0x5e]
7101ad3a5c  cmp w8,#0x2
7101ad3a60  b.ne 0x7101ad3a74
7101ad3a64  mov w8,wzr
7101ad3a68  ldrb w9,[x19, #0x250]
7101ad3a6c  cbnz w9,0x7101ad3aec
7101ad3a70  b 0x7101ad3ae0
7101ad3a74  ldr x9,[x22, #0x510]
7101ad3a78  ldr x9,[x9]
7101ad3a7c  ldr x9,[x9, #0xb8]
7101ad3a80  ldr x9,[x9]
7101ad3a84  ldr x9,[x9]
7101ad3a88  mov x8,xzr
7101ad3a8c  add x9,x9,#0x3e
7101ad3a90  ldursh w10,[x9, #-0x34]
7101ad3a94  cmn w10,#0x1
7101ad3a98  b.eq 0x7101ad3ac8
7101ad3a9c  ldrsh w10,[x9]
7101ad3aa0  cmn w10,#0x1
7101ad3aa4  b.eq 0x7101ad3ac4
7101ad3aa8  add x8,x8,#0x2
7101ad3aac  lsr x10,x8,#0x4
7101ad3ab0  add x9,x9,#0x68
7101ad3ab4  cmp x10,#0x177
7101ad3ab8  b.cc 0x7101ad3a90
7101ad3abc  mov w8,#0x1
7101ad3ac0  b 0x7101ad3ad4
7101ad3ac4  add x8,x8,#0x1
7101ad3ac8  orr w9,wzr,#0xffff
7101ad3acc  bics wzr,w9,w8
7101ad3ad0  cset w8,eq
7101ad3ad4  strb w8,[x19, #0x252]
7101ad3ad8  ldrb w9,[x19, #0x250]
7101ad3adc  cbnz w9,0x7101ad3aec
7101ad3ae0  ldrb w9,[x19, #0x251]
7101ad3ae4  orr w8,w9,w8
7101ad3ae8  cbz w8,0x7101ad3b40
7101ad3aec  ldr x8,[x19, #0x108]
7101ad3af0  ldr x0,[x8, #0x8]
7101ad3af4  cbz x0,0x7101ad3b40
7101ad3af8  adrp x1,0x7104422000
7101ad3afc  add x1,x1,#0x9ef
7101ad3b00  bl 0x71037964b0
7101ad3b04  cbz x0,0x7101ad3b40
7101ad3b08  ldr x8,[x0]
7101ad3b0c  ldr x8,[x8, #0x130]
7101ad3b10  blr x8
7101ad3b14  tbz w0,#0x0,0x7101ad3b40
7101ad3b18  ldr x0,[x19, #0x108]
7101ad3b1c  fmov s0,wzr
7101ad3b20  adrp x1,0x7104422000
7101ad3b24  add x1,x1,#0x9ef
7101ad3b28  bl 0x7103778630
7101ad3b2c  ldr x0,[x19, #0x108]
7101ad3b30  fmov s0,0x3f800000
7101ad3b34  adrp x1,0x71042f8000
7101ad3b38  add x1,x1,#0x56f
7101ad3b3c  bl 0x7103778300
7101ad3b40  ldr x0,[sp, #0x8]
7101ad3b44  adrp x8,0x710523d000
7101ad3b48  add x8,x8,#0x9a8
7101ad3b4c  stp x8,xzr,[sp]
7101ad3b50  cbz x0,0x7101ad3b58
7101ad3b54  bl 0x710392eb40
7101ad3b58  ldp x29,x30,[sp, #0x50]
7101ad3b5c  ldr x25,[sp, #0x10]
7101ad3b60  ldp x20,x19,[sp, #0x40]
7101ad3b64  ldp x22,x21,[sp, #0x30]
7101ad3b68  ldp x24,x23,[sp, #0x20]
7101ad3b6c  add sp,sp,#0x60
7101ad3b70  ret
7101ad3b74  ldr w8,[x19, #0x130]
7101ad3b78  cmp w8,#0x0
7101ad3b7c  b.gt 0x7101ad3980
7101ad3b80  b 0x7101ad38e4
7101ad3b84  bl 0x71039c2650
