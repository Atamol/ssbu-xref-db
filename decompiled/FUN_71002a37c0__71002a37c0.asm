// addr:      71002a37c0
// offset:    0x2a37c0
// name:      FUN_71002a37c0
// mangled:   
// size:      1932

71002a37c0  sub sp,sp,#0xd0
71002a37c4  stp x26,x25,[sp, #0x80]
71002a37c8  stp x24,x23,[sp, #0x90]
71002a37cc  stp x22,x21,[sp, #0xa0]
71002a37d0  stp x20,x19,[sp, #0xb0]
71002a37d4  stp x29,x30,[sp, #0xc0]
71002a37d8  add x29,sp,#0xc0
71002a37dc  mov w8,#0x100
71002a37e0  stp xzr,x8,[sp, #0x60]
71002a37e4  add x8,sp,#0x40
71002a37e8  str x8,[sp]
71002a37ec  sub x8,x29,#0x50
71002a37f0  stp xzr,xzr,[sp, #0x40]
71002a37f4  mov x20,x0
71002a37f8  mov x0,sp
71002a37fc  mov x19,x1
71002a3800  strb wzr,[sp, #0x3c]
71002a3804  stp x8,xzr,[sp, #0x8]
71002a3808  mov w8,#0x200
71002a380c  stp xzr,x8,[sp, #0x28]
71002a3810  mov w8,#0x144
71002a3814  str w8,[sp, #0x38]
71002a3818  stp xzr,xzr,[sp, #0x50]
71002a381c  stp xzr,xzr,[sp, #0x18]
71002a3820  bl 0x71001b3160
71002a3824  ldp x8,x21,[sp, #0x18]
71002a3828  cmp x21,x8
71002a382c  b.eq 0x71002a3f10
71002a3830  ldur x8,[x21, #-0x10]
71002a3834  cbz x8,0x71002a3860
71002a3838  ldurb w9,[x21, #-0x8]
71002a383c  ldr x0,[sp]
71002a3840  cbz w9,0x71002a384c
71002a3844  mov w1,#0x2c
71002a3848  b 0x71002a385c
71002a384c  tst x8,#0x1
71002a3850  mov w8,#0x3a
71002a3854  mov w9,#0x2c
71002a3858  csel w1,w9,w8,eq
71002a385c  bl 0x71002ad5d0
71002a3860  ldur x8,[x21, #-0x10]
71002a3864  add x8,x8,#0x1
71002a3868  stur x8,[x21, #-0x10]
71002a386c  ldr x0,[sp]
71002a3870  orr w1,wzr,#0x38
71002a3874  bl 0x71002ad6c0
71002a3878  ldr x10,[sp]
71002a387c  ldr x11,[x10, #0x18]
71002a3880  mov w22,#0x22
71002a3884  adrp x24,0x71052a8000
71002a3888  ldr x24,[x24, #0x860]
71002a388c  mov w23,#0x5c
71002a3890  orr w9,wzr,#0x30
71002a3894  add x12,x11,#0x1
71002a3898  str x12,[x10, #0x18]
71002a389c  strb w22,[x11]
71002a38a0  adrp x25,0x71052a8000
71002a38a4  ldr x25,[x25, #0x868]
71002a38a8  adrp x8,0x71042d5000
71002a38ac  add x8,x8,#0x806
71002a38b0  mov x10,x8
71002a38b4  ldrb w11,[x10]
71002a38b8  ldrb w12,[x24, x11, LSL ]
71002a38bc  cbnz w12,0x71002a38e8
71002a38c0  ldr x12,[sp]
71002a38c4  ldr x13,[x12, #0x18]
71002a38c8  add x10,x10,#0x1
71002a38cc  add x14,x13,#0x1
71002a38d0  str x14,[x12, #0x18]
71002a38d4  strb w11,[x13]
71002a38d8  sub x11,x10,x8
71002a38dc  cmp x11,#0x9
71002a38e0  b.cc 0x71002a38b4
71002a38e4  b 0x71002a3988
71002a38e8  ldr x13,[sp]
71002a38ec  ldr x14,[x13, #0x18]
71002a38f0  add x15,x14,#0x1
71002a38f4  str x15,[x13, #0x18]
71002a38f8  strb w23,[x14]
71002a38fc  ldr x13,[sp]
71002a3900  ldr x14,[x13, #0x18]
71002a3904  add x10,x10,#0x1
71002a3908  cmp w12,#0x75
71002a390c  add x15,x14,#0x1
71002a3910  str x15,[x13, #0x18]
71002a3914  strb w12,[x14]
71002a3918  b.ne 0x71002a38d8
71002a391c  ldr x12,[sp]
71002a3920  ldr x13,[x12, #0x18]
71002a3924  add x14,x13,#0x1
71002a3928  str x14,[x12, #0x18]
71002a392c  strb w9,[x13]
71002a3930  ldr x12,[sp]
71002a3934  ldr x13,[x12, #0x18]
71002a3938  add x14,x13,#0x1
71002a393c  str x14,[x12, #0x18]
71002a3940  strb w9,[x13]
71002a3944  ldr x12,[sp]
71002a3948  lsr x13,x11,#0x4
71002a394c  ldrb w13,[x25, x13, LSL ]
71002a3950  and x11,x11,#0xf
71002a3954  ldr x14,[x12, #0x18]
71002a3958  add x15,x14,#0x1
71002a395c  str x15,[x12, #0x18]
71002a3960  strb w13,[x14]
71002a3964  ldr x12,[sp]
71002a3968  ldr x13,[x12, #0x18]
71002a396c  ldrb w11,[x25, x11, LSL ]
71002a3970  add x14,x13,#0x1
71002a3974  str x14,[x12, #0x18]
71002a3978  strb w11,[x13]
71002a397c  sub x11,x10,x8
71002a3980  cmp x11,#0x9
71002a3984  b.cc 0x71002a38b4
71002a3988  ldr x8,[sp]
71002a398c  ldr x9,[x8, #0x18]
71002a3990  add x10,x9,#0x1
71002a3994  mov w0,#0xffffffff
71002a3998  str x10,[x8, #0x18]
71002a399c  strb w22,[x9]
71002a39a0  bl 0x71001b34a0
71002a39a4  ldp x8,x26,[sp, #0x18]
71002a39a8  add w21,w0,#0x1
71002a39ac  cmp x26,x8
71002a39b0  b.eq 0x71002a3f1c
71002a39b4  ldur x8,[x26, #-0x10]
71002a39b8  cbz x8,0x71002a39e4
71002a39bc  ldurb w9,[x26, #-0x8]
71002a39c0  ldr x0,[sp]
71002a39c4  cbz w9,0x71002a39d0
71002a39c8  mov w1,#0x2c
71002a39cc  b 0x71002a39e0
71002a39d0  tst x8,#0x1
71002a39d4  mov w8,#0x3a
71002a39d8  mov w9,#0x2c
71002a39dc  csel w1,w9,w8,eq
71002a39e0  bl 0x71002ad5d0
71002a39e4  ldur x8,[x26, #-0x10]
71002a39e8  add x8,x8,#0x1
71002a39ec  stur x8,[x26, #-0x10]
71002a39f0  sub x1,x29,#0x4c
71002a39f4  mov w0,w21
71002a39f8  sub x26,x29,#0x4c
71002a39fc  bl 0x71001b9fe0
71002a3a00  mov x21,x0
71002a3a04  ldr x0,[sp]
71002a3a08  sub x1,x21,x26
71002a3a0c  bl 0x71002ad6c0
71002a3a10  cmp x26,x21
71002a3a14  b.eq 0x71002a3a3c
71002a3a18  sub x8,x29,#0x4c
71002a3a1c  ldr x9,[sp]
71002a3a20  ldrb w10,[x8], #0x1
71002a3a24  ldr x11,[x9, #0x18]
71002a3a28  add x12,x11,#0x1
71002a3a2c  cmp x21,x8
71002a3a30  str x12,[x9, #0x18]
71002a3a34  strb w10,[x11]
71002a3a38  b.ne 0x71002a3a1c
71002a3a3c  ldp x8,x21,[sp, #0x18]
71002a3a40  cmp x21,x8
71002a3a44  b.eq 0x71002a3f28
71002a3a48  ldur x8,[x21, #-0x10]
71002a3a4c  cbz x8,0x71002a3a78
71002a3a50  ldurb w9,[x21, #-0x8]
71002a3a54  ldr x0,[sp]
71002a3a58  cbz w9,0x71002a3a64
71002a3a5c  mov w1,#0x2c
71002a3a60  b 0x71002a3a74
71002a3a64  tst x8,#0x1
71002a3a68  mov w8,#0x3a
71002a3a6c  mov w9,#0x2c
71002a3a70  csel w1,w9,w8,eq
71002a3a74  bl 0x71002ad5d0
71002a3a78  ldur x8,[x21, #-0x10]
71002a3a7c  add x8,x8,#0x1
71002a3a80  stur x8,[x21, #-0x10]
71002a3a84  ldr x0,[sp]
71002a3a88  orr w1,wzr,#0x38
71002a3a8c  bl 0x71002ad6c0
71002a3a90  ldr x9,[sp]
71002a3a94  ldr x10,[x9, #0x18]
71002a3a98  adrp x8,0x7104349000
71002a3a9c  add x8,x8,#0x85b
71002a3aa0  add x11,x10,#0x1
71002a3aa4  str x11,[x9, #0x18]
71002a3aa8  strb w22,[x10]
71002a3aac  orr w9,wzr,#0x30
71002a3ab0  mov x10,x8
71002a3ab4  ldrb w11,[x10]
71002a3ab8  ldrb w12,[x24, x11, LSL ]
71002a3abc  cbnz w12,0x71002a3ae8
71002a3ac0  ldr x12,[sp]
71002a3ac4  ldr x13,[x12, #0x18]
71002a3ac8  add x10,x10,#0x1
71002a3acc  add x14,x13,#0x1
71002a3ad0  str x14,[x12, #0x18]
71002a3ad4  strb w11,[x13]
71002a3ad8  sub x11,x10,x8
71002a3adc  cmp x11,#0x9
71002a3ae0  b.cc 0x71002a3ab4
71002a3ae4  b 0x71002a3b88
71002a3ae8  ldr x13,[sp]
71002a3aec  ldr x14,[x13, #0x18]
71002a3af0  add x15,x14,#0x1
71002a3af4  str x15,[x13, #0x18]
71002a3af8  strb w23,[x14]
71002a3afc  ldr x13,[sp]
71002a3b00  ldr x14,[x13, #0x18]
71002a3b04  add x10,x10,#0x1
71002a3b08  cmp w12,#0x75
71002a3b0c  add x15,x14,#0x1
71002a3b10  str x15,[x13, #0x18]
71002a3b14  strb w12,[x14]
71002a3b18  b.ne 0x71002a3ad8
71002a3b1c  ldr x12,[sp]
71002a3b20  ldr x13,[x12, #0x18]
71002a3b24  add x14,x13,#0x1
71002a3b28  str x14,[x12, #0x18]
71002a3b2c  strb w9,[x13]
71002a3b30  ldr x12,[sp]
71002a3b34  ldr x13,[x12, #0x18]
71002a3b38  add x14,x13,#0x1
71002a3b3c  str x14,[x12, #0x18]
71002a3b40  strb w9,[x13]
71002a3b44  ldr x12,[sp]
71002a3b48  lsr x13,x11,#0x4
71002a3b4c  ldrb w13,[x25, x13, LSL ]
71002a3b50  and x11,x11,#0xf
71002a3b54  ldr x14,[x12, #0x18]
71002a3b58  add x15,x14,#0x1
71002a3b5c  str x15,[x12, #0x18]
71002a3b60  strb w13,[x14]
71002a3b64  ldr x12,[sp]
71002a3b68  ldr x13,[x12, #0x18]
71002a3b6c  ldrb w11,[x25, x11, LSL ]
71002a3b70  add x14,x13,#0x1
71002a3b74  str x14,[x12, #0x18]
71002a3b78  strb w11,[x13]
71002a3b7c  sub x11,x10,x8
71002a3b80  cmp x11,#0x9
71002a3b84  b.cc 0x71002a3ab4
71002a3b88  ldr x8,[sp]
71002a3b8c  ldr x9,[x8, #0x18]
71002a3b90  add x10,x9,#0x1
71002a3b94  mov x0,sp
71002a3b98  str x10,[x8, #0x18]
71002a3b9c  strb w22,[x9]
71002a3ba0  bl 0x71001b3160
71002a3ba4  ldp x8,x21,[sp, #0x18]
71002a3ba8  cmp x21,x8
71002a3bac  b.eq 0x71002a3f34
71002a3bb0  ldur x8,[x21, #-0x10]
71002a3bb4  cbz x8,0x71002a3be0
71002a3bb8  ldurb w9,[x21, #-0x8]
71002a3bbc  ldr x0,[sp]
71002a3bc0  cbz w9,0x71002a3bcc
71002a3bc4  mov w1,#0x2c
71002a3bc8  b 0x71002a3bdc
71002a3bcc  tst x8,#0x1
71002a3bd0  mov w8,#0x3a
71002a3bd4  mov w9,#0x2c
71002a3bd8  csel w1,w9,w8,eq
71002a3bdc  bl 0x71002ad5d0
71002a3be0  ldur x8,[x21, #-0x10]
71002a3be4  add x8,x8,#0x1
71002a3be8  stur x8,[x21, #-0x10]
71002a3bec  ldr x0,[sp]
71002a3bf0  orr w1,wzr,#0x3e
71002a3bf4  bl 0x71002ad6c0
71002a3bf8  ldr x9,[sp]
71002a3bfc  ldr x10,[x9, #0x18]
71002a3c00  adrp x8,0x7104339000
71002a3c04  add x8,x8,#0x736
71002a3c08  add x11,x10,#0x1
71002a3c0c  str x11,[x9, #0x18]
71002a3c10  strb w22,[x10]
71002a3c14  orr w9,wzr,#0x30
71002a3c18  mov x10,x8
71002a3c1c  ldrb w11,[x10]
71002a3c20  ldrb w12,[x24, x11, LSL ]
71002a3c24  cbnz w12,0x71002a3c50
71002a3c28  ldr x12,[sp]
71002a3c2c  ldr x13,[x12, #0x18]
71002a3c30  add x10,x10,#0x1
71002a3c34  add x14,x13,#0x1
71002a3c38  str x14,[x12, #0x18]
71002a3c3c  strb w11,[x13]
71002a3c40  sub x11,x10,x8
71002a3c44  cmp x11,#0xa
71002a3c48  b.cc 0x71002a3c1c
71002a3c4c  b 0x71002a3cf0
71002a3c50  ldr x13,[sp]
71002a3c54  ldr x14,[x13, #0x18]
71002a3c58  add x15,x14,#0x1
71002a3c5c  str x15,[x13, #0x18]
71002a3c60  strb w23,[x14]
71002a3c64  ldr x13,[sp]
71002a3c68  ldr x14,[x13, #0x18]
71002a3c6c  add x10,x10,#0x1
71002a3c70  cmp w12,#0x75
71002a3c74  add x15,x14,#0x1
71002a3c78  str x15,[x13, #0x18]
71002a3c7c  strb w12,[x14]
71002a3c80  b.ne 0x71002a3c40
71002a3c84  ldr x12,[sp]
71002a3c88  ldr x13,[x12, #0x18]
71002a3c8c  add x14,x13,#0x1
71002a3c90  str x14,[x12, #0x18]
71002a3c94  strb w9,[x13]
71002a3c98  ldr x12,[sp]
71002a3c9c  ldr x13,[x12, #0x18]
71002a3ca0  add x14,x13,#0x1
71002a3ca4  str x14,[x12, #0x18]
71002a3ca8  strb w9,[x13]
71002a3cac  ldr x12,[sp]
71002a3cb0  lsr x13,x11,#0x4
71002a3cb4  ldrb w13,[x25, x13, LSL ]
71002a3cb8  and x11,x11,#0xf
71002a3cbc  ldr x14,[x12, #0x18]
71002a3cc0  add x15,x14,#0x1
71002a3cc4  str x15,[x12, #0x18]
71002a3cc8  strb w13,[x14]
71002a3ccc  ldr x12,[sp]
71002a3cd0  ldr x13,[x12, #0x18]
71002a3cd4  ldrb w11,[x25, x11, LSL ]
71002a3cd8  add x14,x13,#0x1
71002a3cdc  str x14,[x12, #0x18]
71002a3ce0  strb w11,[x13]
71002a3ce4  sub x11,x10,x8
71002a3ce8  cmp x11,#0xa
71002a3cec  b.cc 0x71002a3c1c
71002a3cf0  ldr x8,[sp]
71002a3cf4  ldr x9,[x8, #0x18]
71002a3cf8  add x10,x9,#0x1
71002a3cfc  str x10,[x8, #0x18]
71002a3d00  strb w22,[x9]
71002a3d04  ldr x20,[x20, #0x20]
71002a3d08  sub x8,x20,#0x1
71002a3d0c  ldrb w9,[x8, #0x1]!
71002a3d10  cbnz w9,0x71002a3d0c
71002a3d14  sub x21,x8,x20
71002a3d18  ldp x8,x26,[sp, #0x18]
71002a3d1c  cmp x26,x8
71002a3d20  b.eq 0x71002a3f40
71002a3d24  ldur x8,[x26, #-0x10]
71002a3d28  cbz x8,0x71002a3d54
71002a3d2c  ldurb w9,[x26, #-0x8]
71002a3d30  ldr x0,[sp]
71002a3d34  cbz w9,0x71002a3d40
71002a3d38  mov w1,#0x2c
71002a3d3c  b 0x71002a3d50
71002a3d40  tst x8,#0x1
71002a3d44  mov w8,#0x3a
71002a3d48  mov w9,#0x2c
71002a3d4c  csel w1,w9,w8,eq
71002a3d50  bl 0x71002ad5d0
71002a3d54  ldur x8,[x26, #-0x10]
71002a3d58  add x8,x8,#0x1
71002a3d5c  stur x8,[x26, #-0x10]
71002a3d60  ldr x0,[sp]
71002a3d64  orr w8,wzr,#0x6
71002a3d68  mov w9,#0x2
71002a3d6c  madd w1,w21,w8,w9
71002a3d70  bl 0x71002ad6c0
71002a3d74  ldr x8,[sp]
71002a3d78  ldr x9,[x8, #0x18]
71002a3d7c  add x10,x9,#0x1
71002a3d80  str x10,[x8, #0x18]
71002a3d84  strb w22,[x9]
71002a3d88  cbz w21,0x71002a3e6c
71002a3d8c  and x8,x21,#0xffffffff
71002a3d90  orr w9,wzr,#0x30
71002a3d94  mov x10,x20
71002a3d98  ldrb w11,[x10]
71002a3d9c  ldrb w12,[x24, x11, LSL ]
71002a3da0  cbnz w12,0x71002a3dcc
71002a3da4  ldr x12,[sp]
71002a3da8  ldr x13,[x12, #0x18]
71002a3dac  add x10,x10,#0x1
71002a3db0  add x14,x13,#0x1
71002a3db4  str x14,[x12, #0x18]
71002a3db8  strb w11,[x13]
71002a3dbc  sub x11,x10,x20
71002a3dc0  cmp x11,x8
71002a3dc4  b.cc 0x71002a3d98
71002a3dc8  b 0x71002a3e6c
71002a3dcc  ldr x13,[sp]
71002a3dd0  ldr x14,[x13, #0x18]
71002a3dd4  add x15,x14,#0x1
71002a3dd8  str x15,[x13, #0x18]
71002a3ddc  strb w23,[x14]
71002a3de0  ldr x13,[sp]
71002a3de4  ldr x14,[x13, #0x18]
71002a3de8  add x10,x10,#0x1
71002a3dec  cmp w12,#0x75
71002a3df0  add x15,x14,#0x1
71002a3df4  str x15,[x13, #0x18]
71002a3df8  strb w12,[x14]
71002a3dfc  b.ne 0x71002a3dbc
71002a3e00  ldr x12,[sp]
71002a3e04  ldr x13,[x12, #0x18]
71002a3e08  add x14,x13,#0x1
71002a3e0c  str x14,[x12, #0x18]
71002a3e10  strb w9,[x13]
71002a3e14  ldr x12,[sp]
71002a3e18  ldr x13,[x12, #0x18]
71002a3e1c  add x14,x13,#0x1
71002a3e20  str x14,[x12, #0x18]
71002a3e24  strb w9,[x13]
71002a3e28  ldr x12,[sp]
71002a3e2c  lsr x13,x11,#0x4
71002a3e30  ldrb w13,[x25, x13, LSL ]
71002a3e34  and x11,x11,#0xf
71002a3e38  ldr x14,[x12, #0x18]
71002a3e3c  add x15,x14,#0x1
71002a3e40  str x15,[x12, #0x18]
71002a3e44  strb w13,[x14]
71002a3e48  ldr x12,[sp]
71002a3e4c  ldr x13,[x12, #0x18]
71002a3e50  ldrb w11,[x25, x11, LSL ]
71002a3e54  add x14,x13,#0x1
71002a3e58  str x14,[x12, #0x18]
71002a3e5c  strb w11,[x13]
71002a3e60  sub x11,x10,x20
71002a3e64  cmp x11,x8
71002a3e68  b.cc 0x71002a3d98
71002a3e6c  ldr x8,[sp]
71002a3e70  ldr x9,[x8, #0x18]
71002a3e74  add x10,x9,#0x1
71002a3e78  str x10,[x8, #0x18]
71002a3e7c  strb w22,[x9]
71002a3e80  ldr x8,[sp, #0x20]
71002a3e84  ldr x0,[sp]
71002a3e88  mov w20,#0x7d
71002a3e8c  mov w1,w20
71002a3e90  sub x8,x8,#0x10
71002a3e94  str x8,[sp, #0x20]
71002a3e98  bl 0x71002ad5d0
71002a3e9c  ldr x8,[sp, #0x20]
71002a3ea0  ldr x0,[sp]
71002a3ea4  sub x8,x8,#0x10
71002a3ea8  mov w1,w20
71002a3eac  str x8,[sp, #0x20]
71002a3eb0  bl 0x71002ad5d0
71002a3eb4  add x0,sp,#0x40
71002a3eb8  bl 0x71002ac3d0
71002a3ebc  mov x1,x0
71002a3ec0  mov x0,x19
71002a3ec4  bl 0x71001b3cb0
71002a3ec8  ldr x0,[sp, #0x18]
71002a3ecc  bl 0x71001b1870
71002a3ed0  ldr x0,[sp, #0x10]
71002a3ed4  cbz x0,0x71002a3edc
71002a3ed8  bl 0x71001b1870
71002a3edc  ldr x0,[sp, #0x50]
71002a3ee0  bl 0x71001b1870
71002a3ee4  ldr x0,[sp, #0x48]
71002a3ee8  cbz x0,0x71002a3ef0
71002a3eec  bl 0x71001b1870
71002a3ef0  ldp x29,x30,[sp, #0xc0]
71002a3ef4  mov w0,#0x1
71002a3ef8  ldp x20,x19,[sp, #0xb0]
71002a3efc  ldp x22,x21,[sp, #0xa0]
71002a3f00  ldp x24,x23,[sp, #0x90]
71002a3f04  ldp x26,x25,[sp, #0x80]
71002a3f08  add sp,sp,#0xd0
71002a3f0c  ret
71002a3f10  mov w8,#0x1
71002a3f14  strb w8,[sp, #0x3c]
71002a3f18  b 0x71002a386c
71002a3f1c  mov w8,#0x1
71002a3f20  strb w8,[sp, #0x3c]
71002a3f24  b 0x71002a39f0
71002a3f28  mov w8,#0x1
71002a3f2c  strb w8,[sp, #0x3c]
71002a3f30  b 0x71002a3a84
71002a3f34  mov w8,#0x1
71002a3f38  strb w8,[sp, #0x3c]
71002a3f3c  b 0x71002a3bec
71002a3f40  mov w8,#0x1
71002a3f44  strb w8,[sp, #0x3c]
71002a3f48  b 0x71002a3d60
