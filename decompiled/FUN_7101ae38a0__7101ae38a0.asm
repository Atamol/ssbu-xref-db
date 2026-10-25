// addr:      7101ae38a0
// offset:    0x1ae38a0
// name:      FUN_7101ae38a0
// mangled:   
// size:      3316

7101ae38a0  str d8,[sp, #-0x70]!
7101ae38a4  stp x28,x27,[sp, #0x10]
7101ae38a8  stp x26,x25,[sp, #0x20]
7101ae38ac  stp x24,x23,[sp, #0x30]
7101ae38b0  stp x22,x21,[sp, #0x40]
7101ae38b4  stp x20,x19,[sp, #0x50]
7101ae38b8  stp x29,x30,[sp, #0x60]
7101ae38bc  add x29,sp,#0x60
7101ae38c0  sub sp,sp,#0x2d0
7101ae38c4  mov w21,w1
7101ae38c8  mov x25,x0
7101ae38cc  adrp x1,0x710432a000
7101ae38d0  add x1,x1,#0x87b
7101ae38d4  add x8,sp,#0x60
7101ae38d8  mov x0,x2
7101ae38dc  mov x19,x2
7101ae38e0  bl 0x71037780e0
7101ae38e4  ldr x22,[sp, #0x68]
7101ae38e8  ldr x0,[x22, #0x8]
7101ae38ec  cbz x0,0x7101ae3904
7101ae38f0  ldr x8,[x0]
7101ae38f4  ldr x8,[x8, #0x148]
7101ae38f8  blr x8
7101ae38fc  mov w23,w0
7101ae3900  b 0x7101ae3908
7101ae3904  mov w23,wzr
7101ae3908  adrp x8,0x710523d000
7101ae390c  add x8,x8,#0x9e8
7101ae3910  stp x8,xzr,[sp, #0x60]
7101ae3914  cbz x22,0x7101ae3920
7101ae3918  mov x0,x22
7101ae391c  bl 0x710392eb40
7101ae3920  tbnz w23,#0x0,0x7101ae3950
7101ae3924  fmov s8,0x3f800000
7101ae3928  ldr x0,[x19, #0x8]
7101ae392c  adrp x1,0x710432a000
7101ae3930  add x1,x1,#0x87b
7101ae3934  mov v0.16B,v8.16B
7101ae3938  bl 0x7103778300
7101ae393c  ldr x0,[x19, #0x8]
7101ae3940  mov v0.16B,v8.16B
7101ae3944  adrp x1,0x71043be000
7101ae3948  add x1,x1,#0xebf
7101ae394c  bl 0x7103778300
7101ae3950  cmp w21,#0x7d0
7101ae3954  b.cs 0x7101ae4568
7101ae3958  ldr x9,[x25, #0x148]
7101ae395c  mov w8,#0x3758
7101ae3960  movk w8,#0x2, LSL #16
7101ae3964  add x12,x25,x8
7101ae3968  sxtw x8,w21
7101ae396c  add x8,x9,x8, LSL #0x5
7101ae3970  ldp x9,x10,[x8]
7101ae3974  ldp x11,x8,[x8, #0x10]
7101ae3978  stp x11,x8,[x29, #-0x78]
7101ae397c  mov w8,#0x3750
7101ae3980  movk w8,#0x2, LSL #16
7101ae3984  stp x9,x10,[x29, #-0x88]
7101ae3988  add x8,x25,x8
7101ae398c  ldr x10,[x12, #0x18]
7101ae3990  str x8,[sp, #0x18]
7101ae3994  ldp x28,x20,[x12]
7101ae3998  str x19,[sp, #0x28]
7101ae399c  lsr x8,x10,#0x7
7101ae39a0  and x8,x8,#0x1fffffffffffff8
7101ae39a4  add x23,x28,x8
7101ae39a8  cmp x20,x28
7101ae39ac  b.eq 0x7101ae39c0
7101ae39b0  ldr x8,[x23]
7101ae39b4  and x9,x10,#0x3ff
7101ae39b8  add x22,x8,x9, LSL #0x2
7101ae39bc  b 0x7101ae39c4
7101ae39c0  mov x22,xzr
7101ae39c4  ldr x8,[x12, #0x20]
7101ae39c8  stp x23,x10,[sp, #0x8]
7101ae39cc  add x26,x10,x8
7101ae39d0  lsr x8,x26,#0x7
7101ae39d4  mov w21,#0xfb58
7101ae39d8  and x24,x8,#0x1fffffffffffff8
7101ae39dc  str x12,[sp, #0x20]
7101ae39e0  b 0x7101ae39e8
7101ae39e4  ldr x22,[x23, #0x8]!
7101ae39e8  cmp x20,x28
7101ae39ec  b.eq 0x7101ae3a08
7101ae39f0  ldr x8,[x28, x24, LSL #0x0]
7101ae39f4  and x9,x26,#0x3ff
7101ae39f8  add x8,x8,x9, LSL #0x2
7101ae39fc  cmp x22,x8
7101ae3a00  b.ne 0x7101ae3a14
7101ae3a04  b 0x7101ae3a54
7101ae3a08  mov x8,xzr
7101ae3a0c  cmp x22,x8
7101ae3a10  b.eq 0x7101ae3a54
7101ae3a14  ldr w27,[x22]
7101ae3a18  cmp w27,#0x80
7101ae3a1c  b.cs 0x7101ae4568
7101ae3a20  sxtw x19,w27
7101ae3a24  mov w8,#0x278
7101ae3a28  madd x8,x19,x8,x25
7101ae3a2c  add x0,x8,x21
7101ae3a30  sub x1,x29,#0x88
7101ae3a34  bl 0x7101aee7b0
7101ae3a38  tbnz w0,#0x0,0x7101ae3f50
7101ae3a3c  ldr x8,[x23]
7101ae3a40  add x22,x22,#0x4
7101ae3a44  sub x8,x22,x8
7101ae3a48  cmp x8,#0x1, LSL #12
7101ae3a4c  b.ne 0x7101ae39e8
7101ae3a50  b 0x7101ae39e4
7101ae3a54  ldp x8,x9,[sp, #0x8]
7101ae3a58  ldr x8,[x8]
7101ae3a5c  and x9,x9,#0x3ff
7101ae3a60  ldr w27,[x8, x9, LSL #0x2]
7101ae3a64  cmp w27,#0x80
7101ae3a68  b.cs 0x7101ae4568
7101ae3a6c  sxtw x9,w27
7101ae3a70  mov w8,#0x278
7101ae3a74  mov x26,x25
7101ae3a78  mov x25,x9
7101ae3a7c  madd x9,x9,x8,x26
7101ae3a80  mov w10,#0xfb50
7101ae3a84  mov w8,#0x1
7101ae3a88  str w8,[x9, x10, LSL #0x0]
7101ae3a8c  ldp x12,x13,[x29, #-0x78]
7101ae3a90  mov w14,#0xfb70
7101ae3a94  ldp x10,x11,[x29, #-0x88]
7101ae3a98  str x13,[x9, x14, LSL #0x0]
7101ae3a9c  mov w13,#0xfb68
7101ae3aa0  str x12,[x9, x13, LSL #0x0]
7101ae3aa4  mov w12,#0xfb60
7101ae3aa8  str x11,[x9, x12, LSL #0x0]
7101ae3aac  mov w11,#0xfb58
7101ae3ab0  str x10,[x9, x11, LSL #0x0]
7101ae3ab4  mov w10,#0xfb78
7101ae3ab8  ldr x9,[x9, x10, LSL #0x0]
7101ae3abc  cbz x9,0x7101ae3ac4
7101ae3ac0  strb w8,[x9, #0x74]
7101ae3ac4  add x23,sp,#0x60
7101ae3ac8  mov w2,#0x248
7101ae3acc  add x0,sp,#0x60
7101ae3ad0  mov w1,wzr
7101ae3ad4  add x22,x23,#0x88
7101ae3ad8  bl 0x71039c02a0
7101ae3adc  mov x0,x22
7101ae3ae0  bl 0x71004f5770
7101ae3ae4  add x8,x23,#0x16e
7101ae3ae8  adrp x28,0x710523d000
7101ae3aec  add x28,x28,#0xa28
7101ae3af0  mov w0,#0x10
7101ae3af4  mov w1,#0x10
7101ae3af8  str wzr,[sp, #0x1d8]
7101ae3afc  str xzr,[x8]
7101ae3b00  stp xzr,xzr,[sp, #0x1c0]
7101ae3b04  stp xzr,xzr,[sp, #0x1b0]
7101ae3b08  str xzr,[sp, #0x1a8]
7101ae3b0c  str xzr,[sp, #0x278]
7101ae3b10  str xzr,[sp, #0x270]
7101ae3b14  str xzr,[sp, #0x268]
7101ae3b18  str xzr,[sp, #0x260]
7101ae3b1c  str xzr,[sp, #0x258]
7101ae3b20  str xzr,[sp, #0x250]
7101ae3b24  str xzr,[sp, #0x248]
7101ae3b28  str xzr,[sp, #0x240]
7101ae3b2c  str xzr,[sp, #0x238]
7101ae3b30  str xzr,[sp, #0x230]
7101ae3b34  str xzr,[sp, #0x228]
7101ae3b38  str xzr,[sp, #0x220]
7101ae3b3c  str xzr,[sp, #0x218]
7101ae3b40  str xzr,[sp, #0x210]
7101ae3b44  str xzr,[sp, #0x208]
7101ae3b48  str xzr,[sp, #0x1e0]
7101ae3b4c  str x28,[sp, #0x280]
7101ae3b50  stp xzr,xzr,[sp, #0x1f8]
7101ae3b54  stp xzr,xzr,[sp, #0x1e8]
7101ae3b58  bl 0x710392e290
7101ae3b5c  cbnz x0,0x7101ae3ba4
7101ae3b60  adrp x8,0x7105332000
7101ae3b64  ldr x0,[x8, #0xf00]
7101ae3b68  cbz x0,0x7101ae3ba0
7101ae3b6c  mov w8,#0x10
7101ae3b70  str wzr,[sp, #0x40]
7101ae3b74  add x1,sp,#0x40
7101ae3b78  str x8,[sp, #0x50]
7101ae3b7c  ldr x8,[x0]
7101ae3b80  ldr x8,[x8, #0x30]
7101ae3b84  add x2,sp,#0x50
7101ae3b88  blr x8
7101ae3b8c  tbz w0,#0x0,0x7101ae3ba0
7101ae3b90  mov w0,#0x10
7101ae3b94  mov w1,#0x10
7101ae3b98  bl 0x710392e290
7101ae3b9c  cbnz x0,0x7101ae3ba4
7101ae3ba0  mov x0,xzr
7101ae3ba4  stp xzr,xzr,[x0]
7101ae3ba8  mov w1,#0x10
7101ae3bac  str x0,[sp, #0x288]
7101ae3bb0  mov w0,#0x10
7101ae3bb4  add x19,x23,#0x220
7101ae3bb8  str x28,[sp, #0x290]
7101ae3bbc  bl 0x710392e290
7101ae3bc0  cbnz x0,0x7101ae3c08
7101ae3bc4  adrp x8,0x7105332000
7101ae3bc8  ldr x0,[x8, #0xf00]
7101ae3bcc  cbz x0,0x7101ae3c04
7101ae3bd0  mov w8,#0x10
7101ae3bd4  str wzr,[sp, #0x40]
7101ae3bd8  add x1,sp,#0x40
7101ae3bdc  str x8,[sp, #0x50]
7101ae3be0  ldr x8,[x0]
7101ae3be4  ldr x8,[x8, #0x30]
7101ae3be8  add x2,sp,#0x50
7101ae3bec  blr x8
7101ae3bf0  tbz w0,#0x0,0x7101ae3c04
7101ae3bf4  mov w0,#0x10
7101ae3bf8  mov w1,#0x10
7101ae3bfc  bl 0x710392e290
7101ae3c00  cbnz x0,0x7101ae3c08
7101ae3c04  mov x0,xzr
7101ae3c08  mov w8,#0x278
7101ae3c0c  madd x20,x25,x8,x26
7101ae3c10  mov w8,#0xfb80
7101ae3c14  stp xzr,xzr,[x0]
7101ae3c18  str x0,[sp, #0x298]
7101ae3c1c  add x0,x20,x8
7101ae3c20  mov w2,#0x220
7101ae3c24  add x1,sp,#0x60
7101ae3c28  add x24,x23,#0x230
7101ae3c2c  bl 0x71039c00e0
7101ae3c30  mov w8,#0xfda0
7101ae3c34  add x8,x20,x8
7101ae3c38  cmp x8,x19
7101ae3c3c  b.eq 0x7101ae3cdc
7101ae3c40  mov w8,#0x278
7101ae3c44  madd x8,x25,x8,x26
7101ae3c48  ldr x9,[sp, #0x288]
7101ae3c4c  str xzr,[sp, #0x288]
7101ae3c50  mov w10,#0xfda8
7101ae3c54  ldr x22,[x8, x10, LSL #0x0]
7101ae3c58  str x9,[x8, x10, LSL #0x0]
7101ae3c5c  cbz x22,0x7101ae3cdc
7101ae3c60  ldr x23,[x22, #0x8]
7101ae3c64  stp xzr,xzr,[x22]
7101ae3c68  cbz x23,0x7101ae3cd4
7101ae3c6c  add x8,x23,#0x8
7101ae3c70  ldaxr x9,[x8]
7101ae3c74  sub x10,x9,#0x1
7101ae3c78  stlxr w11,x10,[x8]
7101ae3c7c  cbnz w11,0x7101ae3c70
7101ae3c80  cbnz x9,0x7101ae3c9c
7101ae3c84  ldr x8,[x23]
7101ae3c88  ldr x8,[x8, #0x10]
7101ae3c8c  mov x0,x23
7101ae3c90  blr x8
7101ae3c94  mov x0,x23
7101ae3c98  bl 0x71039c2670
7101ae3c9c  ldr x23,[x22, #0x8]
7101ae3ca0  cbz x23,0x7101ae3cd4
7101ae3ca4  add x8,x23,#0x8
7101ae3ca8  ldaxr x9,[x8]
7101ae3cac  sub x10,x9,#0x1
7101ae3cb0  stlxr w11,x10,[x8]
7101ae3cb4  cbnz w11,0x7101ae3ca8
7101ae3cb8  cbnz x9,0x7101ae3cd4
7101ae3cbc  ldr x8,[x23]
7101ae3cc0  ldr x8,[x8, #0x10]
7101ae3cc4  mov x0,x23
7101ae3cc8  blr x8
7101ae3ccc  mov x0,x23
7101ae3cd0  bl 0x71039c2670
7101ae3cd4  mov x0,x22
7101ae3cd8  bl 0x710392eb40
7101ae3cdc  mov w8,#0x278
7101ae3ce0  mul x8,x25,x8
7101ae3ce4  add x8,x26,x8
7101ae3ce8  mov w9,#0xfdb0
7101ae3cec  add x8,x8,x9
7101ae3cf0  cmp x8,x24
7101ae3cf4  ldr x24,[sp, #0x28]
7101ae3cf8  b.eq 0x7101ae3d9c
7101ae3cfc  mov w8,#0x278
7101ae3d00  mul x8,x25,x8
7101ae3d04  add x8,x26,x8
7101ae3d08  ldr x9,[sp, #0x298]
7101ae3d0c  str xzr,[sp, #0x298]
7101ae3d10  mov w10,#0xfdb8
7101ae3d14  ldr x22,[x8, x10, LSL #0x0]
7101ae3d18  str x9,[x8, x10, LSL #0x0]
7101ae3d1c  cbz x22,0x7101ae3d9c
7101ae3d20  ldr x23,[x22, #0x8]
7101ae3d24  stp xzr,xzr,[x22]
7101ae3d28  cbz x23,0x7101ae3d94
7101ae3d2c  add x8,x23,#0x8
7101ae3d30  ldaxr x9,[x8]
7101ae3d34  sub x10,x9,#0x1
7101ae3d38  stlxr w11,x10,[x8]
7101ae3d3c  cbnz w11,0x7101ae3d30
7101ae3d40  cbnz x9,0x7101ae3d5c
7101ae3d44  ldr x8,[x23]
7101ae3d48  ldr x8,[x8, #0x10]
7101ae3d4c  mov x0,x23
7101ae3d50  blr x8
7101ae3d54  mov x0,x23
7101ae3d58  bl 0x71039c2670
7101ae3d5c  ldr x23,[x22, #0x8]
7101ae3d60  cbz x23,0x7101ae3d94
7101ae3d64  add x8,x23,#0x8
7101ae3d68  ldaxr x9,[x8]
7101ae3d6c  sub x10,x9,#0x1
7101ae3d70  stlxr w11,x10,[x8]
7101ae3d74  cbnz w11,0x7101ae3d68
7101ae3d78  cbnz x9,0x7101ae3d94
7101ae3d7c  ldr x8,[x23]
7101ae3d80  ldr x8,[x8, #0x10]
7101ae3d84  mov x0,x23
7101ae3d88  blr x8
7101ae3d8c  mov x0,x23
7101ae3d90  bl 0x71039c2670
7101ae3d94  mov x0,x22
7101ae3d98  bl 0x710392eb40
7101ae3d9c  mov w8,#0x278
7101ae3da0  madd x8,x25,x8,x26
7101ae3da4  ldrb w10,[sp, #0x2a2]
7101ae3da8  ldrh w9,[sp, #0x2a0]
7101ae3dac  mov w11,#0xfdc2
7101ae3db0  strb w10,[x8, x11, LSL ]
7101ae3db4  mov w10,#0xfdc0
7101ae3db8  strh w9,[x8, x10, LSL #0x0]
7101ae3dbc  ldr x22,[sp, #0x298]
7101ae3dc0  str x28,[sp, #0x290]
7101ae3dc4  str xzr,[sp, #0x298]
7101ae3dc8  cbz x22,0x7101ae3e48
7101ae3dcc  ldr x23,[x22, #0x8]
7101ae3dd0  stp xzr,xzr,[x22]
7101ae3dd4  cbz x23,0x7101ae3e40
7101ae3dd8  add x8,x23,#0x8
7101ae3ddc  ldaxr x9,[x8]
7101ae3de0  sub x10,x9,#0x1
7101ae3de4  stlxr w11,x10,[x8]
7101ae3de8  cbnz w11,0x7101ae3ddc
7101ae3dec  cbnz x9,0x7101ae3e08
7101ae3df0  ldr x8,[x23]
7101ae3df4  ldr x8,[x8, #0x10]
7101ae3df8  mov x0,x23
7101ae3dfc  blr x8
7101ae3e00  mov x0,x23
7101ae3e04  bl 0x71039c2670
7101ae3e08  ldr x23,[x22, #0x8]
7101ae3e0c  cbz x23,0x7101ae3e40
7101ae3e10  add x8,x23,#0x8
7101ae3e14  ldaxr x9,[x8]
7101ae3e18  sub x10,x9,#0x1
7101ae3e1c  stlxr w11,x10,[x8]
7101ae3e20  cbnz w11,0x7101ae3e14
7101ae3e24  cbnz x9,0x7101ae3e40
7101ae3e28  ldr x8,[x23]
7101ae3e2c  ldr x8,[x8, #0x10]
7101ae3e30  mov x0,x23
7101ae3e34  blr x8
7101ae3e38  mov x0,x23
7101ae3e3c  bl 0x71039c2670
7101ae3e40  mov x0,x22
7101ae3e44  bl 0x710392eb40
7101ae3e48  ldr x22,[sp, #0x288]
7101ae3e4c  str x28,[sp, #0x280]
7101ae3e50  str xzr,[sp, #0x288]
7101ae3e54  cbz x22,0x7101ae3ed4
7101ae3e58  ldr x23,[x22, #0x8]
7101ae3e5c  stp xzr,xzr,[x22]
7101ae3e60  cbz x23,0x7101ae3ecc
7101ae3e64  add x8,x23,#0x8
7101ae3e68  ldaxr x9,[x8]
7101ae3e6c  sub x10,x9,#0x1
7101ae3e70  stlxr w11,x10,[x8]
7101ae3e74  cbnz w11,0x7101ae3e68
7101ae3e78  cbnz x9,0x7101ae3e94
7101ae3e7c  ldr x8,[x23]
7101ae3e80  ldr x8,[x8, #0x10]
7101ae3e84  mov x0,x23
7101ae3e88  blr x8
7101ae3e8c  mov x0,x23
7101ae3e90  bl 0x71039c2670
7101ae3e94  ldr x23,[x22, #0x8]
7101ae3e98  cbz x23,0x7101ae3ecc
7101ae3e9c  add x8,x23,#0x8
7101ae3ea0  ldaxr x9,[x8]
7101ae3ea4  sub x10,x9,#0x1
7101ae3ea8  stlxr w11,x10,[x8]
7101ae3eac  cbnz w11,0x7101ae3ea0
7101ae3eb0  cbnz x9,0x7101ae3ecc
7101ae3eb4  ldr x8,[x23]
7101ae3eb8  ldr x8,[x8, #0x10]
7101ae3ebc  mov x0,x23
7101ae3ec0  blr x8
7101ae3ec4  mov x0,x23
7101ae3ec8  bl 0x71039c2670
7101ae3ecc  mov x0,x22
7101ae3ed0  bl 0x710392eb40
7101ae3ed4  ldr x20,[sp, #0x20]
7101ae3ed8  ldp x10,x9,[x20, #0x18]
7101ae3edc  ldr x8,[x20]
7101ae3ee0  add x10,x10,#0x1
7101ae3ee4  sub x9,x9,#0x1
7101ae3ee8  cmp x10,#0x800
7101ae3eec  stp x10,x9,[x20, #0x18]
7101ae3ef0  b.cc 0x7101ae3f18
7101ae3ef4  ldr x0,[x8]
7101ae3ef8  cbz x0,0x7101ae3f08
7101ae3efc  bl 0x710392eb40
7101ae3f00  ldr x8,[x20]
7101ae3f04  ldp x10,x9,[x20, #0x18]
7101ae3f08  add x8,x8,#0x8
7101ae3f0c  sub x10,x10,#0x400
7101ae3f10  str x8,[x20]
7101ae3f14  str x10,[x20, #0x18]
7101ae3f18  ldr x11,[x20, #0x8]
7101ae3f1c  subs x11,x11,x8
7101ae3f20  lsl x11,x11,#0x7
7101ae3f24  sub x11,x11,#0x1
7101ae3f28  csel x11,xzr,x11,eq
7101ae3f2c  add x9,x9,x10
7101ae3f30  cmp x11,x9
7101ae3f34  b.ne 0x7101ae3fac
7101ae3f38  ldr x0,[sp, #0x18]
7101ae3f3c  bl 0x7101432380
7101ae3f40  ldp x9,x10,[x20, #0x18]
7101ae3f44  ldr x8,[x20]
7101ae3f48  add x9,x9,x10
7101ae3f4c  b 0x7101ae3fac
7101ae3f50  ldr x21,[sp, #0x18]
7101ae3f54  mov x0,x21
7101ae3f58  mov x1,x23
7101ae3f5c  mov x2,x22
7101ae3f60  bl 0x7101ae45a0
7101ae3f64  ldr x20,[sp, #0x20]
7101ae3f68  ldp x8,x9,[x20]
7101ae3f6c  subs x9,x9,x8
7101ae3f70  lsl x9,x9,#0x7
7101ae3f74  sub x9,x9,#0x1
7101ae3f78  csel x10,xzr,x9,eq
7101ae3f7c  ldp x9,x11,[x20, #0x18]
7101ae3f80  add x9,x11,x9
7101ae3f84  cmp x10,x9
7101ae3f88  b.ne 0x7101ae3fa0
7101ae3f8c  mov x0,x21
7101ae3f90  bl 0x7101432380
7101ae3f94  ldp x9,x10,[x20, #0x18]
7101ae3f98  ldr x8,[x20]
7101ae3f9c  add x9,x9,x10
7101ae3fa0  ldr x24,[sp, #0x28]
7101ae3fa4  mov x26,x25
7101ae3fa8  mov x25,x19
7101ae3fac  lsr x10,x9,#0x7
7101ae3fb0  and x9,x9,#0x3ff
7101ae3fb4  and x10,x10,#0x1fffffffffffff8
7101ae3fb8  ldr x8,[x8, x10, LSL #0x0]
7101ae3fbc  adrp x1,0x7104411000
7101ae3fc0  add x1,x1,#0x1db
7101ae3fc4  str w27,[x8, x9, LSL #0x2]
7101ae3fc8  ldr x8,[x20, #0x20]
7101ae3fcc  add x8,x8,#0x1
7101ae3fd0  str x8,[x20, #0x20]
7101ae3fd4  add x8,sp,#0x60
7101ae3fd8  mov x0,x24
7101ae3fdc  bl 0x7103776640
7101ae3fe0  adrp x1,0x71042c3000
7101ae3fe4  add x1,x1,#0x645
7101ae3fe8  sub x8,x29,#0x88
7101ae3fec  add x0,sp,#0x60
7101ae3ff0  bl 0x7103776910
7101ae3ff4  adrp x1,0x710437a000
7101ae3ff8  add x1,x1,#0xe67
7101ae3ffc  add x8,sp,#0x50
7101ae4000  add x0,sp,#0x60
7101ae4004  bl 0x7103776910
7101ae4008  adrp x1,0x71043ae000
7101ae400c  add x1,x1,#0x1be
7101ae4010  add x8,sp,#0x40
7101ae4014  mov x0,x24
7101ae4018  bl 0x7103776910
7101ae401c  mov w8,#0x278
7101ae4020  madd x19,x25,x8,x26
7101ae4024  mov w8,#0xfda8
7101ae4028  ldr x8,[x19, x8, LSL #0x0]
7101ae402c  ldr x8,[x8]
7101ae4030  cbz x8,0x7101ae406c
7101ae4034  adrp x1,0x7104433000
7101ae4038  add x1,x1,#0x949
7101ae403c  add x8,sp,#0x30
7101ae4040  mov x0,x24
7101ae4044  mov w20,#0xfda0
7101ae4048  bl 0x71037780e0
7101ae404c  ldr x22,[sp, #0x38]
7101ae4050  ldr x0,[x22, #0x8]
7101ae4054  cbz x0,0x7101ae40a0
7101ae4058  ldr x8,[x0]
7101ae405c  ldr x8,[x8, #0x148]
7101ae4060  blr x8
7101ae4064  mov w23,w0
7101ae4068  b 0x7101ae40a4
7101ae406c  adrp x1,0x71043be000
7101ae4070  add x1,x1,#0xebf
7101ae4074  add x8,sp,#0x30
7101ae4078  mov x0,x24
7101ae407c  bl 0x71037780e0
7101ae4080  ldr x20,[sp, #0x38]
7101ae4084  ldr x0,[x20, #0x8]
7101ae4088  cbz x0,0x7101ae4164
7101ae408c  ldr x8,[x0]
7101ae4090  ldr x8,[x8, #0x148]
7101ae4094  blr x8
7101ae4098  mov w21,w0
7101ae409c  b 0x7101ae4168
7101ae40a0  mov w23,wzr
7101ae40a4  add x21,x19,x20
7101ae40a8  adrp x8,0x710523d000
7101ae40ac  add x8,x8,#0x9e8
7101ae40b0  stp x8,xzr,[sp, #0x30]
7101ae40b4  cbz x22,0x7101ae40c0
7101ae40b8  mov x0,x22
7101ae40bc  bl 0x710392eb40
7101ae40c0  tbnz w23,#0x0,0x7101ae40d8
7101ae40c4  ldr x0,[x24, #0x8]
7101ae40c8  fmov s0,0x3f800000
7101ae40cc  adrp x1,0x7104433000
7101ae40d0  add x1,x1,#0x949
7101ae40d4  bl 0x7103778300
7101ae40d8  adrp x1,0x71042f7000
7101ae40dc  add x1,x1,#0xe0e
7101ae40e0  add x8,sp,#0x30
7101ae40e4  mov x0,x24
7101ae40e8  bl 0x7103776910
7101ae40ec  add x0,sp,#0x30
7101ae40f0  mov x1,x21
7101ae40f4  bl 0x7103779480
7101ae40f8  ldr x0,[sp, #0x38]
7101ae40fc  adrp x8,0x710523d000
7101ae4100  add x8,x8,#0x9a8
7101ae4104  stp x8,xzr,[sp, #0x30]
7101ae4108  cbz x0,0x7101ae4110
7101ae410c  bl 0x710392eb40
7101ae4110  ldr x8,[sp, #0x68]
7101ae4114  ldr x8,[x8, #0x8]
7101ae4118  cbz x8,0x7101ae4308
7101ae411c  ldr x21,[x8, #0x78]
7101ae4120  adrp x8,0x710593b000
7101ae4124  add x8,x8,#0xa40
7101ae4128  ldarb w8,[x8]
7101ae412c  tbz w8,#0x0,0x7101ae4524
7101ae4130  cbz x21,0x7101ae4308
7101ae4134  ldr x8,[x21]
7101ae4138  ldr x8,[x8]
7101ae413c  mov x0,x21
7101ae4140  blr x8
7101ae4144  cbz x0,0x7101ae4308
7101ae4148  adrp x8,0x710593b000
7101ae414c  add x8,x8,#0xa58
7101ae4150  cmp x0,x8
7101ae4154  b.eq 0x7101ae4300
7101ae4158  ldr x0,[x0]
7101ae415c  cbnz x0,0x7101ae4150
7101ae4160  b 0x7101ae4308
7101ae4164  mov w21,wzr
7101ae4168  adrp x8,0x710523d000
7101ae416c  add x8,x8,#0x9e8
7101ae4170  stp x8,xzr,[sp, #0x30]
7101ae4174  cbz x20,0x7101ae4180
7101ae4178  mov x0,x20
7101ae417c  bl 0x710392eb40
7101ae4180  tbnz w21,#0x0,0x7101ae4198
7101ae4184  ldr x0,[x24, #0x8]
7101ae4188  fmov s0,0x3f800000
7101ae418c  adrp x1,0x71043be000
7101ae4190  add x1,x1,#0xebf
7101ae4194  bl 0x7103778300
7101ae4198  adrp x1,0x71042f7000
7101ae419c  add x1,x1,#0xe0e
7101ae41a0  add x8,sp,#0x30
7101ae41a4  mov x0,x24
7101ae41a8  bl 0x7103776910
7101ae41ac  ldr x20,[sp, #0x38]
7101ae41b0  mov x0,x20
7101ae41b4  bl 0x7103779650
7101ae41b8  adrp x8,0x710523d000
7101ae41bc  add x8,x8,#0x9a8
7101ae41c0  stp x8,xzr,[sp, #0x30]
7101ae41c4  cbz x20,0x7101ae41d0
7101ae41c8  mov x0,x20
7101ae41cc  bl 0x710392eb40
7101ae41d0  ldur x8,[x29, #-0x80]
7101ae41d4  ldr x0,[x8, #0x10]
7101ae41d8  cbz x0,0x7101ae41f0
7101ae41dc  add x1,sp,#0x30
7101ae41e0  mov w2,wzr
7101ae41e4  mov w3,wzr
7101ae41e8  str wzr,[sp, #0x30]
7101ae41ec  bl 0x71037a2270
7101ae41f0  ldr x8,[sp, #0x58]
7101ae41f4  ldr x0,[x8, #0x10]
7101ae41f8  cbz x0,0x7101ae4210
7101ae41fc  add x1,sp,#0x30
7101ae4200  mov w2,wzr
7101ae4204  mov w3,wzr
7101ae4208  str wzr,[sp, #0x30]
7101ae420c  bl 0x71037a2270
7101ae4210  ldr x20,[sp, #0x48]
7101ae4214  ldr x0,[x20, #0x10]
7101ae4218  cbz x0,0x7101ae4230
7101ae421c  add x1,sp,#0x30
7101ae4220  mov w2,wzr
7101ae4224  mov w3,wzr
7101ae4228  str wzr,[sp, #0x30]
7101ae422c  bl 0x71037a2270
7101ae4230  mov w0,#0x10
7101ae4234  mov w1,#0x8
7101ae4238  bl 0x710392e290
7101ae423c  mov x21,x0
7101ae4240  cbnz x0,0x7101ae428c
7101ae4244  adrp x8,0x7105332000
7101ae4248  ldr x0,[x8, #0xf00]
7101ae424c  cbz x0,0x7101ae4288
7101ae4250  mov w8,#0x8
7101ae4254  stur wzr,[x29, #-0x54]
7101ae4258  sub x1,x29,#0x54
7101ae425c  str x8,[sp, #0x30]
7101ae4260  ldr x8,[x0]
7101ae4264  ldr x8,[x8, #0x30]
7101ae4268  add x2,sp,#0x30
7101ae426c  blr x8
7101ae4270  tbz w0,#0x0,0x7101ae4288
7101ae4274  mov w0,#0x10
7101ae4278  mov w1,#0x8
7101ae427c  bl 0x710392e290
7101ae4280  mov x21,x0
7101ae4284  cbnz x0,0x7101ae428c
7101ae4288  mov x21,xzr
7101ae428c  str xzr,[x21]
7101ae4290  ldr x8,[x24, #0x8]
7101ae4294  ldr x8,[x8, #0x8]
7101ae4298  cbz x8,0x7101ae42f8
7101ae429c  ldr x0,[x8, #0x60]
7101ae42a0  cbz x0,0x7101ae42f8
7101ae42a4  ldr x8,[x8, #0x18]
7101ae42a8  add x1,x8,#0xb0
7101ae42ac  bl 0x7103796f20
7101ae42b0  str x0,[x21]
7101ae42b4  cbz x0,0x7101ae4494
7101ae42b8  ldr x8,[x0]
7101ae42bc  ldr x8,[x8, #0x208]
7101ae42c0  mov w1,wzr
7101ae42c4  mov x19,x0
7101ae42c8  blr x8
7101ae42cc  ldr x8,[x19]
7101ae42d0  ldr x8,[x8, #0x200]
7101ae42d4  mov x0,x19
7101ae42d8  blr x8
7101ae42dc  tbz w0,#0x0,0x7101ae4478
7101ae42e0  ldr x8,[x19]
7101ae42e4  ldr x8,[x8, #0x210]
7101ae42e8  mov x0,x19
7101ae42ec  blr x8
7101ae42f0  eor w8,w0,#0x1
7101ae42f4  b 0x7101ae447c
7101ae42f8  str xzr,[x21]
7101ae42fc  b 0x7101ae4494
7101ae4300  mov w8,#0x1
7101ae4304  strb w8,[x21, #0x60]
7101ae4308  mov w8,#0x278
7101ae430c  madd x19,x25,x8,x26
7101ae4310  mov w8,#0xfbac
7101ae4314  add x20,x19,x8
7101ae4318  sub x0,x29,#0x88
7101ae431c  mov w1,#0x1
7101ae4320  mov x2,x20
7101ae4324  bl 0x710377a310
7101ae4328  add x0,sp,#0x50
7101ae432c  mov w1,#0x1
7101ae4330  mov x2,x20
7101ae4334  bl 0x710377a310
7101ae4338  orr w8,wzr,#0xfc00
7101ae433c  ldr w8,[x19, x8, LSL #0x0]
7101ae4340  mov w9,#0x8889
7101ae4344  movk w9,#0x8888, LSL #16
7101ae4348  mul x9,x8,x9
7101ae434c  lsr x9,x9,#0x25
7101ae4350  mov w10,#0xffffffc4
7101ae4354  madd w8,w9,w10,w8
7101ae4358  cmp w9,#0x3e7
7101ae435c  mov w10,#0x3e7
7101ae4360  csel w9,w9,w10,cc
7101ae4364  cmp w8,#0x3e7
7101ae4368  mov w11,#0x3e8
7101ae436c  csel w8,w8,w10,lt
7101ae4370  madd w2,w9,w11,w8
7101ae4374  add x0,sp,#0x40
7101ae4378  mov w1,#0x1
7101ae437c  bl 0x710377a310
7101ae4380  mov w0,#0x10
7101ae4384  mov w1,#0x8
7101ae4388  bl 0x710392e290
7101ae438c  mov x20,x0
7101ae4390  cbnz x0,0x7101ae43dc
7101ae4394  adrp x8,0x7105332000
7101ae4398  ldr x0,[x8, #0xf00]
7101ae439c  cbz x0,0x7101ae43d8
7101ae43a0  mov w8,#0x8
7101ae43a4  stur wzr,[x29, #-0x54]
7101ae43a8  sub x1,x29,#0x54
7101ae43ac  str x8,[sp, #0x30]
7101ae43b0  ldr x8,[x0]
7101ae43b4  ldr x8,[x8, #0x30]
7101ae43b8  add x2,sp,#0x30
7101ae43bc  blr x8
7101ae43c0  tbz w0,#0x0,0x7101ae43d8
7101ae43c4  mov w0,#0x10
7101ae43c8  mov w1,#0x8
7101ae43cc  bl 0x710392e290
7101ae43d0  mov x20,x0
7101ae43d4  cbnz x0,0x7101ae43dc
7101ae43d8  mov x20,xzr
7101ae43dc  str xzr,[x20]
7101ae43e0  ldr x8,[x24, #0x8]
7101ae43e4  ldr x8,[x8, #0x8]
7101ae43e8  cbz x8,0x7101ae4464
7101ae43ec  ldr x0,[x8, #0x60]
7101ae43f0  cbz x0,0x7101ae4464
7101ae43f4  ldr x8,[x8, #0x18]
7101ae43f8  add x1,x8,#0xb0
7101ae43fc  bl 0x7103796f20
7101ae4400  str x0,[x20]
7101ae4404  cbz x0,0x7101ae4468
7101ae4408  ldr x8,[x0]
7101ae440c  ldr x8,[x8, #0x208]
7101ae4410  mov w1,#0x1
7101ae4414  mov x19,x0
7101ae4418  mov w21,#0x1
7101ae441c  blr x8
7101ae4420  ldr x8,[x19]
7101ae4424  ldr x8,[x8, #0x200]
7101ae4428  mov x0,x19
7101ae442c  blr x8
7101ae4430  tbz w0,#0x0,0x7101ae4448
7101ae4434  ldr x8,[x19]
7101ae4438  ldr x8,[x8, #0x210]
7101ae443c  mov x0,x19
7101ae4440  blr x8
7101ae4444  eor w21,w0,#0x1
7101ae4448  ldr x8,[x19]
7101ae444c  ldr x8,[x8, #0x388]
7101ae4450  and w1,w21,#0x1
7101ae4454  mov x0,x19
7101ae4458  mov w2,wzr
7101ae445c  blr x8
7101ae4460  b 0x7101ae4468
7101ae4464  str xzr,[x20]
7101ae4468  mov x0,x20
7101ae446c  bl 0x710392eb40
7101ae4470  ldr x20,[sp, #0x48]
7101ae4474  b 0x7101ae449c
7101ae4478  mov w8,#0x1
7101ae447c  ldr x9,[x19]
7101ae4480  ldr x9,[x9, #0x388]
7101ae4484  and w1,w8,#0x1
7101ae4488  mov x0,x19
7101ae448c  mov w2,wzr
7101ae4490  blr x9
7101ae4494  mov x0,x21
7101ae4498  bl 0x710392eb40
7101ae449c  adrp x21,0x710523d000
7101ae44a0  add x21,x21,#0x9a8
7101ae44a4  stp x21,xzr,[sp, #0x40]
7101ae44a8  cbz x20,0x7101ae44b4
7101ae44ac  mov x0,x20
7101ae44b0  bl 0x710392eb40
7101ae44b4  ldr x0,[sp, #0x58]
7101ae44b8  stp x21,xzr,[sp, #0x50]
7101ae44bc  cbz x0,0x7101ae44c4
7101ae44c0  bl 0x710392eb40
7101ae44c4  ldur x0,[x29, #-0x80]
7101ae44c8  stp x21,xzr,[x29, #-0x88]
7101ae44cc  cbz x0,0x7101ae44d4
7101ae44d0  bl 0x710392eb40
7101ae44d4  ldr x19,[sp, #0x68]
7101ae44d8  adrp x8,0x710523d000
7101ae44dc  add x8,x8,#0x988
7101ae44e0  stp x8,xzr,[sp, #0x60]
7101ae44e4  cbz x19,0x7101ae4500
7101ae44e8  ldr x0,[x19, #0x18]
7101ae44ec  stp x21,xzr,[x19, #0x10]
7101ae44f0  cbz x0,0x7101ae44f8
7101ae44f4  bl 0x710392eb40
7101ae44f8  mov x0,x19
7101ae44fc  bl 0x710392eb40
7101ae4500  add sp,sp,#0x2d0
7101ae4504  ldp x29,x30,[sp, #0x60]
7101ae4508  ldp x20,x19,[sp, #0x50]
7101ae450c  ldp x22,x21,[sp, #0x40]
7101ae4510  ldp x24,x23,[sp, #0x30]
7101ae4514  ldp x26,x25,[sp, #0x20]
7101ae4518  ldp x28,x27,[sp, #0x10]
7101ae451c  ldr d8,[sp], #0x70
7101ae4520  ret
7101ae4524  adrp x0,0x710593b000
7101ae4528  add x0,x0,#0xa40
7101ae452c  bl 0x71039c06b0
7101ae4530  cbz w0,0x7101ae4130
7101ae4534  adrp x8,0x710593b000
7101ae4538  add x8,x8,#0xa48
7101ae453c  ldarb w8,[x8]
7101ae4540  tbz w8,#0x0,0x7101ae456c
7101ae4544  adrp x8,0x710593b000
7101ae4548  adrp x9,0x710593b000
7101ae454c  add x9,x9,#0xa50
7101ae4550  adrp x0,0x710593b000
7101ae4554  add x0,x0,#0xa40
7101ae4558  str x9,[x8, #0xa58]
7101ae455c  bl 0x71039c06c0
7101ae4560  cbnz x21,0x7101ae4134
7101ae4564  b 0x7101ae4308
7101ae4568  bl 0x71039c2650
7101ae456c  adrp x0,0x710593b000
7101ae4570  add x0,x0,#0xa48
7101ae4574  bl 0x71039c06b0
7101ae4578  cbz w0,0x7101ae4544
7101ae457c  adrp x8,0x710593b000
7101ae4580  adrp x0,0x710593b000
7101ae4584  add x0,x0,#0xa48
7101ae4588  str xzr,[x8, #0xa50]
7101ae458c  bl 0x71039c06c0
7101ae4590  b 0x7101ae4544
