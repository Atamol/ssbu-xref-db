// addr:      7102cd34f0
// offset:    0x2cd34f0
// name:      FUN_7102cd34f0
// mangled:   
// size:      2120

7102cd34f0  sub sp,sp,#0xb0
7102cd34f4  stp x26,x25,[sp, #0x60]
7102cd34f8  stp x24,x23,[sp, #0x70]
7102cd34fc  stp x22,x21,[sp, #0x80]
7102cd3500  stp x20,x19,[sp, #0x90]
7102cd3504  stp x29,x30,[sp, #0xa0]
7102cd3508  add x29,sp,#0xa0
7102cd350c  ldp x20,x8,[x0, #0x70]
7102cd3510  mov x19,x0
7102cd3514  cmp x8,x20
7102cd3518  b.eq 0x7102cd3540
7102cd351c  mov x21,x8
7102cd3520  ldrb w9,[x21, #-0x20]!
7102cd3524  tbz w9,#0x0,0x7102cd3534
7102cd3528  ldur x0,[x8, #-0x10]
7102cd352c  cbz x0,0x7102cd3534
7102cd3530  bl 0x710392eb40
7102cd3534  cmp x20,x21
7102cd3538  mov x8,x21
7102cd353c  b.ne 0x7102cd3520
7102cd3540  ldr x8,[x19]
7102cd3544  str x20,[x19, #0x78]
7102cd3548  ldr x8,[x8, #0x340]
7102cd354c  ldp w9,w10,[x8]
7102cd3550  eor w9,w9,w9, LSL #0xb
7102cd3554  ldp w12,w11,[x8, #0x8]
7102cd3558  eor w9,w9,w9, LSR #0x8
7102cd355c  eor w9,w9,w11
7102cd3560  eor w9,w9,w11, LSR #0x13
7102cd3564  adrp x13,0x7104473000
7102cd3568  ucvtf s0,w9
7102cd356c  ldr s1,[x13, #0x91c]
7102cd3570  adrp x13,0x7104473000
7102cd3574  fmul s3,s0,s1
7102cd3578  ldr s1,[x13, #0x710]
7102cd357c  ldr w13,[x19, #0x68]
7102cd3580  stp w10,w12,[x8]
7102cd3584  stp w11,w9,[x8, #0x8]
7102cd3588  ldr x8,[x19, #0x10]
7102cd358c  adrp x10,0x7104338000
7102cd3590  add x10,x10,#0x57b
7102cd3594  add w20,w13,#0x1
7102cd3598  fmul s0,s3,s1
7102cd359c  ldr s1,[x8, #0x680]
7102cd35a0  fcmp s0,s1
7102cd35a4  cset w8,ls
7102cd35a8  strb w8,[x19, #0x6c]
7102cd35ac  adrp x8,0x71043ff000
7102cd35b0  add x8,x8,#0x66e
7102cd35b4  csel x22,x8,x10,ls
7102cd35b8  adrp x2,0x710439b000
7102cd35bc  add x2,x2,#0x527
7102cd35c0  adrp x5,0x7104463000
7102cd35c4  add x5,x5,#0xe0c
7102cd35c8  add x0,sp,#0x30
7102cd35cc  mov w1,#0x20
7102cd35d0  stp xzr,xzr,[sp, #0x40]
7102cd35d4  mov x3,x22
7102cd35d8  mov w4,w20
7102cd35dc  stp xzr,xzr,[sp, #0x30]
7102cd35e0  bl 0x71039c04d0
7102cd35e4  add x0,sp,#0x30
7102cd35e8  stp xzr,xzr,[sp, #0x20]
7102cd35ec  str xzr,[sp, #0x18]
7102cd35f0  bl 0x71039c0070
7102cd35f4  cmn x0,#0x10
7102cd35f8  b.cs 0x7102cd3d28
7102cd35fc  add x8,sp,#0x18
7102cd3600  mov x23,x0
7102cd3604  cmp x0,#0x17
7102cd3608  orr x21,x8,#0x1
7102cd360c  b.cs 0x7102cd3624
7102cd3610  lsl w8,w23,#0x1
7102cd3614  mov x25,x21
7102cd3618  strb w8,[sp, #0x18]
7102cd361c  cbnz x23,0x7102cd3698
7102cd3620  b 0x7102cd36a8
7102cd3624  add x8,x23,#0x10
7102cd3628  and x26,x8,#-0x10
7102cd362c  tst x8,#-0x10
7102cd3630  csinc x24,x26,xzr,ne
7102cd3634  mov w0,#0x10
7102cd3638  mov x1,x24
7102cd363c  bl 0x710392e290
7102cd3640  mov x25,x0
7102cd3644  cbnz x0,0x7102cd368c
7102cd3648  adrp x8,0x7105332000
7102cd364c  ldr x0,[x8, #0xf00]
7102cd3650  cbz x0,0x7102cd3688
7102cd3654  str wzr,[sp, #0x50]
7102cd3658  str x24,[sp]
7102cd365c  ldr x8,[x0]
7102cd3660  ldr x8,[x8, #0x30]
7102cd3664  add x1,sp,#0x50
7102cd3668  mov x2,sp
7102cd366c  blr x8
7102cd3670  tbz w0,#0x0,0x7102cd3688
7102cd3674  mov w0,#0x10
7102cd3678  mov x1,x24
7102cd367c  bl 0x710392e290
7102cd3680  mov x25,x0
7102cd3684  cbnz x0,0x7102cd368c
7102cd3688  mov x25,xzr
7102cd368c  orr x8,x26,#0x1
7102cd3690  stp x23,x25,[sp, #0x20]
7102cd3694  str x8,[sp, #0x18]
7102cd3698  add x1,sp,#0x30
7102cd369c  mov x0,x25
7102cd36a0  mov x2,x23
7102cd36a4  bl 0x71039c00e0
7102cd36a8  add x1,sp,#0x18
7102cd36ac  mov x0,x19
7102cd36b0  mov w2,wzr
7102cd36b4  mov w3,wzr
7102cd36b8  strb wzr,[x25, x23, LSL ]
7102cd36bc  bl 0x7102cd4500
7102cd36c0  ldrb w8,[sp, #0x18]
7102cd36c4  tbz w8,#0x0,0x7102cd36d4
7102cd36c8  ldr x0,[sp, #0x28]
7102cd36cc  cbz x0,0x7102cd36d4
7102cd36d0  bl 0x710392eb40
7102cd36d4  adrp x2,0x710439b000
7102cd36d8  add x2,x2,#0x527
7102cd36dc  adrp x5,0x7104328000
7102cd36e0  add x5,x5,#0x277
7102cd36e4  add x0,sp,#0x30
7102cd36e8  mov w1,#0x20
7102cd36ec  mov x3,x22
7102cd36f0  stp xzr,xzr,[sp, #0x40]
7102cd36f4  mov w4,w20
7102cd36f8  stp xzr,xzr,[sp, #0x30]
7102cd36fc  bl 0x71039c04d0
7102cd3700  add x0,sp,#0x30
7102cd3704  stp xzr,xzr,[sp, #0x20]
7102cd3708  str xzr,[sp, #0x18]
7102cd370c  bl 0x71039c0070
7102cd3710  cmn x0,#0x11
7102cd3714  b.hi 0x7102cd3d28
7102cd3718  mov x23,x0
7102cd371c  cmp x0,#0x17
7102cd3720  b.cs 0x7102cd3738
7102cd3724  lsl w8,w23,#0x1
7102cd3728  mov x25,x21
7102cd372c  strb w8,[sp, #0x18]
7102cd3730  cbnz x23,0x7102cd37ac
7102cd3734  b 0x7102cd37bc
7102cd3738  add x8,x23,#0x10
7102cd373c  and x26,x8,#-0x10
7102cd3740  tst x8,#-0x10
7102cd3744  csinc x24,x26,xzr,ne
7102cd3748  mov w0,#0x10
7102cd374c  mov x1,x24
7102cd3750  bl 0x710392e290
7102cd3754  mov x25,x0
7102cd3758  cbnz x0,0x7102cd37a0
7102cd375c  adrp x8,0x7105332000
7102cd3760  ldr x0,[x8, #0xf00]
7102cd3764  cbz x0,0x7102cd379c
7102cd3768  str wzr,[sp, #0x50]
7102cd376c  str x24,[sp]
7102cd3770  ldr x8,[x0]
7102cd3774  ldr x8,[x8, #0x30]
7102cd3778  add x1,sp,#0x50
7102cd377c  mov x2,sp
7102cd3780  blr x8
7102cd3784  tbz w0,#0x0,0x7102cd379c
7102cd3788  mov w0,#0x10
7102cd378c  mov x1,x24
7102cd3790  bl 0x710392e290
7102cd3794  mov x25,x0
7102cd3798  cbnz x0,0x7102cd37a0
7102cd379c  mov x25,xzr
7102cd37a0  orr x8,x26,#0x1
7102cd37a4  stp x23,x25,[sp, #0x20]
7102cd37a8  str x8,[sp, #0x18]
7102cd37ac  add x1,sp,#0x30
7102cd37b0  mov x0,x25
7102cd37b4  mov x2,x23
7102cd37b8  bl 0x71039c00e0
7102cd37bc  add x1,sp,#0x18
7102cd37c0  mov w2,#0x1
7102cd37c4  mov x0,x19
7102cd37c8  mov w3,wzr
7102cd37cc  strb wzr,[x25, x23, LSL ]
7102cd37d0  bl 0x7102cd4500
7102cd37d4  ldrb w8,[sp, #0x18]
7102cd37d8  tbz w8,#0x0,0x7102cd37e8
7102cd37dc  ldr x0,[sp, #0x28]
7102cd37e0  cbz x0,0x7102cd37e8
7102cd37e4  bl 0x710392eb40
7102cd37e8  adrp x2,0x710439b000
7102cd37ec  add x2,x2,#0x527
7102cd37f0  adrp x5,0x7104442000
7102cd37f4  add x5,x5,#0x4dd
7102cd37f8  add x0,sp,#0x30
7102cd37fc  mov w1,#0x20
7102cd3800  mov x3,x22
7102cd3804  stp xzr,xzr,[sp, #0x40]
7102cd3808  mov w4,w20
7102cd380c  stp xzr,xzr,[sp, #0x30]
7102cd3810  bl 0x71039c04d0
7102cd3814  add x0,sp,#0x30
7102cd3818  stp xzr,xzr,[sp, #0x20]
7102cd381c  str xzr,[sp, #0x18]
7102cd3820  bl 0x71039c0070
7102cd3824  cmn x0,#0x11
7102cd3828  b.hi 0x7102cd3d28
7102cd382c  mov x22,x0
7102cd3830  cmp x0,#0x17
7102cd3834  b.cs 0x7102cd3848
7102cd3838  lsl w8,w22,#0x1
7102cd383c  strb w8,[sp, #0x18]
7102cd3840  cbnz x22,0x7102cd38bc
7102cd3844  b 0x7102cd38cc
7102cd3848  add x8,x22,#0x10
7102cd384c  and x24,x8,#-0x10
7102cd3850  tst x8,#-0x10
7102cd3854  csinc x23,x24,xzr,ne
7102cd3858  mov w0,#0x10
7102cd385c  mov x1,x23
7102cd3860  bl 0x710392e290
7102cd3864  mov x21,x0
7102cd3868  cbnz x0,0x7102cd38b0
7102cd386c  adrp x8,0x7105332000
7102cd3870  ldr x0,[x8, #0xf00]
7102cd3874  cbz x0,0x7102cd38ac
7102cd3878  str wzr,[sp, #0x50]
7102cd387c  str x23,[sp]
7102cd3880  ldr x8,[x0]
7102cd3884  ldr x8,[x8, #0x30]
7102cd3888  add x1,sp,#0x50
7102cd388c  mov x2,sp
7102cd3890  blr x8
7102cd3894  tbz w0,#0x0,0x7102cd38ac
7102cd3898  mov w0,#0x10
7102cd389c  mov x1,x23
7102cd38a0  bl 0x710392e290
7102cd38a4  mov x21,x0
7102cd38a8  cbnz x0,0x7102cd38b0
7102cd38ac  mov x21,xzr
7102cd38b0  orr x8,x24,#0x1
7102cd38b4  stp x22,x21,[sp, #0x20]
7102cd38b8  str x8,[sp, #0x18]
7102cd38bc  add x1,sp,#0x30
7102cd38c0  mov x0,x21
7102cd38c4  mov x2,x22
7102cd38c8  bl 0x71039c00e0
7102cd38cc  add x1,sp,#0x18
7102cd38d0  mov x0,x19
7102cd38d4  mov w2,wzr
7102cd38d8  mov w3,wzr
7102cd38dc  strb wzr,[x21, x22, LSL ]
7102cd38e0  bl 0x7102cd4500
7102cd38e4  ldrb w8,[sp, #0x18]
7102cd38e8  tbz w8,#0x0,0x7102cd38f8
7102cd38ec  ldr x0,[sp, #0x28]
7102cd38f0  cbz x0,0x7102cd38f8
7102cd38f4  bl 0x710392eb40
7102cd38f8  mov w8,#0x20
7102cd38fc  adrp x9,0x71043ee000
7102cd3900  add x9,x9,#0xcd6
7102cd3904  stp xzr,xzr,[sp, #0x18]
7102cd3908  strb w8,[sp, #0x18]
7102cd390c  ldp x8,x9,[x9]
7102cd3910  mov w3,#0xffffffff
7102cd3914  add x1,sp,#0x18
7102cd3918  mov x0,x19
7102cd391c  mov w2,wzr
7102cd3920  str xzr,[sp, #0x28]
7102cd3924  stur x9,[sp, #0x21]
7102cd3928  stur x8,[sp, #0x19]
7102cd392c  strb wzr,[sp, #0x29]
7102cd3930  bl 0x7102cd4500
7102cd3934  adrp x2,0x710439b000
7102cd3938  add x2,x2,#0x53a
7102cd393c  adrp x4,0x7104463000
7102cd3940  add x4,x4,#0xe0c
7102cd3944  add x0,sp,#0x30
7102cd3948  mov w1,#0x20
7102cd394c  mov w3,w20
7102cd3950  stp xzr,xzr,[sp, #0x40]
7102cd3954  stp xzr,xzr,[sp, #0x30]
7102cd3958  bl 0x71039c04d0
7102cd395c  add x0,sp,#0x30
7102cd3960  stp xzr,xzr,[sp, #0x8]
7102cd3964  str xzr,[sp]
7102cd3968  bl 0x71039c0070
7102cd396c  cmn x0,#0x11
7102cd3970  b.hi 0x7102cd3d30
7102cd3974  mov x8,sp
7102cd3978  mov x22,x0
7102cd397c  cmp x0,#0x17
7102cd3980  orr x21,x8,#0x1
7102cd3984  b.cs 0x7102cd399c
7102cd3988  lsl w8,w22,#0x1
7102cd398c  mov x24,x21
7102cd3990  strb w8,[sp]
7102cd3994  cbnz x22,0x7102cd3a10
7102cd3998  b 0x7102cd3a20
7102cd399c  add x8,x22,#0x10
7102cd39a0  and x25,x8,#-0x10
7102cd39a4  tst x8,#-0x10
7102cd39a8  csinc x23,x25,xzr,ne
7102cd39ac  mov w0,#0x10
7102cd39b0  mov x1,x23
7102cd39b4  bl 0x710392e290
7102cd39b8  mov x24,x0
7102cd39bc  cbnz x0,0x7102cd3a04
7102cd39c0  adrp x8,0x7105332000
7102cd39c4  ldr x0,[x8, #0xf00]
7102cd39c8  cbz x0,0x7102cd3a00
7102cd39cc  stur wzr,[x29, #-0x44]
7102cd39d0  str x23,[sp, #0x50]
7102cd39d4  ldr x8,[x0]
7102cd39d8  ldr x8,[x8, #0x30]
7102cd39dc  sub x1,x29,#0x44
7102cd39e0  add x2,sp,#0x50
7102cd39e4  blr x8
7102cd39e8  tbz w0,#0x0,0x7102cd3a00
7102cd39ec  mov w0,#0x10
7102cd39f0  mov x1,x23
7102cd39f4  bl 0x710392e290
7102cd39f8  mov x24,x0
7102cd39fc  cbnz x0,0x7102cd3a04
7102cd3a00  mov x24,xzr
7102cd3a04  orr x8,x25,#0x1
7102cd3a08  stp x22,x24,[sp, #0x8]
7102cd3a0c  str x8,[sp]
7102cd3a10  add x1,sp,#0x30
7102cd3a14  mov x0,x24
7102cd3a18  mov x2,x22
7102cd3a1c  bl 0x71039c00e0
7102cd3a20  mov x1,sp
7102cd3a24  mov w3,#0x1
7102cd3a28  mov x0,x19
7102cd3a2c  mov w2,wzr
7102cd3a30  strb wzr,[x24, x22, LSL ]
7102cd3a34  bl 0x7102cd4500
7102cd3a38  ldrb w8,[sp]
7102cd3a3c  tbz w8,#0x0,0x7102cd3a4c
7102cd3a40  ldr x0,[sp, #0x10]
7102cd3a44  cbz x0,0x7102cd3a4c
7102cd3a48  bl 0x710392eb40
7102cd3a4c  adrp x2,0x710439b000
7102cd3a50  add x2,x2,#0x53a
7102cd3a54  adrp x4,0x7104328000
7102cd3a58  add x4,x4,#0x277
7102cd3a5c  add x0,sp,#0x30
7102cd3a60  mov w1,#0x20
7102cd3a64  mov w3,w20
7102cd3a68  stp xzr,xzr,[sp, #0x40]
7102cd3a6c  stp xzr,xzr,[sp, #0x30]
7102cd3a70  bl 0x71039c04d0
7102cd3a74  add x0,sp,#0x30
7102cd3a78  stp xzr,xzr,[sp, #0x8]
7102cd3a7c  str xzr,[sp]
7102cd3a80  bl 0x71039c0070
7102cd3a84  cmn x0,#0x11
7102cd3a88  b.hi 0x7102cd3d30
7102cd3a8c  mov x22,x0
7102cd3a90  cmp x0,#0x17
7102cd3a94  b.cs 0x7102cd3aac
7102cd3a98  lsl w8,w22,#0x1
7102cd3a9c  mov x24,x21
7102cd3aa0  strb w8,[sp]
7102cd3aa4  cbnz x22,0x7102cd3b20
7102cd3aa8  b 0x7102cd3b30
7102cd3aac  add x8,x22,#0x10
7102cd3ab0  and x25,x8,#-0x10
7102cd3ab4  tst x8,#-0x10
7102cd3ab8  csinc x23,x25,xzr,ne
7102cd3abc  mov w0,#0x10
7102cd3ac0  mov x1,x23
7102cd3ac4  bl 0x710392e290
7102cd3ac8  mov x24,x0
7102cd3acc  cbnz x0,0x7102cd3b14
7102cd3ad0  adrp x8,0x7105332000
7102cd3ad4  ldr x0,[x8, #0xf00]
7102cd3ad8  cbz x0,0x7102cd3b10
7102cd3adc  stur wzr,[x29, #-0x44]
7102cd3ae0  str x23,[sp, #0x50]
7102cd3ae4  ldr x8,[x0]
7102cd3ae8  ldr x8,[x8, #0x30]
7102cd3aec  sub x1,x29,#0x44
7102cd3af0  add x2,sp,#0x50
7102cd3af4  blr x8
7102cd3af8  tbz w0,#0x0,0x7102cd3b10
7102cd3afc  mov w0,#0x10
7102cd3b00  mov x1,x23
7102cd3b04  bl 0x710392e290
7102cd3b08  mov x24,x0
7102cd3b0c  cbnz x0,0x7102cd3b14
7102cd3b10  mov x24,xzr
7102cd3b14  orr x8,x25,#0x1
7102cd3b18  stp x22,x24,[sp, #0x8]
7102cd3b1c  str x8,[sp]
7102cd3b20  add x1,sp,#0x30
7102cd3b24  mov x0,x24
7102cd3b28  mov x2,x22
7102cd3b2c  bl 0x71039c00e0
7102cd3b30  mov x1,sp
7102cd3b34  mov w2,#0x1
7102cd3b38  mov w3,#0x1
7102cd3b3c  mov x0,x19
7102cd3b40  strb wzr,[x24, x22, LSL ]
7102cd3b44  bl 0x7102cd4500
7102cd3b48  ldrb w8,[sp]
7102cd3b4c  tbz w8,#0x0,0x7102cd3b5c
7102cd3b50  ldr x0,[sp, #0x10]
7102cd3b54  cbz x0,0x7102cd3b5c
7102cd3b58  bl 0x710392eb40
7102cd3b5c  adrp x2,0x710439b000
7102cd3b60  add x2,x2,#0x53a
7102cd3b64  adrp x4,0x7104442000
7102cd3b68  add x4,x4,#0x4dd
7102cd3b6c  add x0,sp,#0x30
7102cd3b70  mov w1,#0x20
7102cd3b74  mov w3,w20
7102cd3b78  stp xzr,xzr,[sp, #0x40]
7102cd3b7c  stp xzr,xzr,[sp, #0x30]
7102cd3b80  bl 0x71039c04d0
7102cd3b84  add x0,sp,#0x30
7102cd3b88  stp xzr,xzr,[sp, #0x8]
7102cd3b8c  str xzr,[sp]
7102cd3b90  bl 0x71039c0070
7102cd3b94  cmn x0,#0x11
7102cd3b98  b.hi 0x7102cd3d30
7102cd3b9c  mov x20,x0
7102cd3ba0  cmp x0,#0x17
7102cd3ba4  b.cs 0x7102cd3bb8
7102cd3ba8  lsl w8,w20,#0x1
7102cd3bac  strb w8,[sp]
7102cd3bb0  cbnz x20,0x7102cd3c2c
7102cd3bb4  b 0x7102cd3c3c
7102cd3bb8  add x8,x20,#0x10
7102cd3bbc  and x23,x8,#-0x10
7102cd3bc0  tst x8,#-0x10
7102cd3bc4  csinc x22,x23,xzr,ne
7102cd3bc8  mov w0,#0x10
7102cd3bcc  mov x1,x22
7102cd3bd0  bl 0x710392e290
7102cd3bd4  mov x21,x0
7102cd3bd8  cbnz x0,0x7102cd3c20
7102cd3bdc  adrp x8,0x7105332000
7102cd3be0  ldr x0,[x8, #0xf00]
7102cd3be4  cbz x0,0x7102cd3c1c
7102cd3be8  stur wzr,[x29, #-0x44]
7102cd3bec  str x22,[sp, #0x50]
7102cd3bf0  ldr x8,[x0]
7102cd3bf4  ldr x8,[x8, #0x30]
7102cd3bf8  sub x1,x29,#0x44
7102cd3bfc  add x2,sp,#0x50
7102cd3c00  blr x8
7102cd3c04  tbz w0,#0x0,0x7102cd3c1c
7102cd3c08  mov w0,#0x10
7102cd3c0c  mov x1,x22
7102cd3c10  bl 0x710392e290
7102cd3c14  mov x21,x0
7102cd3c18  cbnz x0,0x7102cd3c20
7102cd3c1c  mov x21,xzr
7102cd3c20  orr x8,x23,#0x1
7102cd3c24  stp x20,x21,[sp, #0x8]
7102cd3c28  str x8,[sp]
7102cd3c2c  add x1,sp,#0x30
7102cd3c30  mov x0,x21
7102cd3c34  mov x2,x20
7102cd3c38  bl 0x71039c00e0
7102cd3c3c  mov x1,sp
7102cd3c40  mov w3,#0x1
7102cd3c44  mov x0,x19
7102cd3c48  mov w2,wzr
7102cd3c4c  strb wzr,[x21, x20, LSL ]
7102cd3c50  bl 0x7102cd4500
7102cd3c54  ldrb w8,[sp]
7102cd3c58  tbz w8,#0x0,0x7102cd3c68
7102cd3c5c  ldr x0,[sp, #0x10]
7102cd3c60  cbz x0,0x7102cd3c68
7102cd3c64  bl 0x710392eb40
7102cd3c68  mov w8,#0x20
7102cd3c6c  adrp x9,0x710425d000
7102cd3c70  add x9,x9,#0x68b
7102cd3c74  stp xzr,xzr,[sp]
7102cd3c78  strb w8,[sp]
7102cd3c7c  ldp x8,x9,[x9]
7102cd3c80  mov w3,#0xffffffff
7102cd3c84  mov x1,sp
7102cd3c88  mov x0,x19
7102cd3c8c  mov w2,wzr
7102cd3c90  str xzr,[sp, #0x10]
7102cd3c94  stur x9,[sp, #0x9]
7102cd3c98  stur x8,[sp, #0x1]
7102cd3c9c  strb wzr,[sp, #0x11]
7102cd3ca0  bl 0x7102cd4500
7102cd3ca4  ldp x20,x19,[x19, #0x70]
7102cd3ca8  b 0x7102cd3cb0
7102cd3cac  add x20,x20,#0x20
7102cd3cb0  cmp x20,x19
7102cd3cb4  b.eq 0x7102cd3ce4
7102cd3cb8  add x0,sp,#0x30
7102cd3cbc  mov x1,x20
7102cd3cc0  bl 0x71039c2730
7102cd3cc4  ldr x8,[x20, #0x18]
7102cd3cc8  str x8,[sp, #0x48]
7102cd3ccc  ldrb w8,[sp, #0x30]
7102cd3cd0  tbz w8,#0x0,0x7102cd3cac
7102cd3cd4  ldr x0,[sp, #0x40]
7102cd3cd8  cbz x0,0x7102cd3cac
7102cd3cdc  bl 0x710392eb40
7102cd3ce0  b 0x7102cd3cac
7102cd3ce4  ldrb w8,[sp]
7102cd3ce8  tbz w8,#0x0,0x7102cd3cf8
7102cd3cec  ldr x0,[sp, #0x10]
7102cd3cf0  cbz x0,0x7102cd3cf8
7102cd3cf4  bl 0x710392eb40
7102cd3cf8  ldrb w8,[sp, #0x18]
7102cd3cfc  tbz w8,#0x0,0x7102cd3d0c
7102cd3d00  ldr x0,[sp, #0x28]
7102cd3d04  cbz x0,0x7102cd3d0c
7102cd3d08  bl 0x710392eb40
7102cd3d0c  ldp x29,x30,[sp, #0xa0]
7102cd3d10  ldp x20,x19,[sp, #0x90]
7102cd3d14  ldp x22,x21,[sp, #0x80]
7102cd3d18  ldp x24,x23,[sp, #0x70]
7102cd3d1c  ldp x26,x25,[sp, #0x60]
7102cd3d20  add sp,sp,#0xb0
7102cd3d24  ret
7102cd3d28  add x0,sp,#0x18
7102cd3d2c  bl 0x71039c1a00
7102cd3d30  mov x0,sp
7102cd3d34  bl 0x71039c1a00
