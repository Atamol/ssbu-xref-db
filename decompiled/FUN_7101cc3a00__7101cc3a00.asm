// addr:      7101cc3a00
// offset:    0x1cc3a00
// name:      FUN_7101cc3a00
// mangled:   
// size:      1688

7101cc3a00  stp x28,x27,[sp, #-0x60]!
7101cc3a04  stp x26,x25,[sp, #0x10]
7101cc3a08  stp x24,x23,[sp, #0x20]
7101cc3a0c  stp x22,x21,[sp, #0x30]
7101cc3a10  stp x20,x19,[sp, #0x40]
7101cc3a14  stp x29,x30,[sp, #0x50]
7101cc3a18  add x29,sp,#0x50
7101cc3a1c  sub sp,sp,#0xad0
7101cc3a20  ldr w8,[x0, #0xe4]
7101cc3a24  mov x19,x0
7101cc3a28  mov w24,#0xf7cf
7101cc3a2c  movk w24,#0xe353, LSL #16
7101cc3a30  mov w23,#0x9ba5
7101cc3a34  movk w23,#0x20c4, LSL #16
7101cc3a38  cbz w8,0x7101cc3a48
7101cc3a3c  add x22,x19,#0x170
7101cc3a40  add x20,x19,#0x168
7101cc3a44  b 0x7101cc3e3c
7101cc3a48  add x20,x19,#0xf0
7101cc3a4c  adrp x1,0x71043e0000
7101cc3a50  add x1,x1,#0x2ae
7101cc3a54  add x8,sp,#0x18
7101cc3a58  mov x0,x20
7101cc3a5c  bl 0x71037780e0
7101cc3a60  ldr x21,[sp, #0x20]
7101cc3a64  ldr x22,[x21, #0x8]
7101cc3a68  cbz x22,0x7101cc3b58
7101cc3a6c  ldrb w8,[x21, #0x10]
7101cc3a70  cbz w8,0x7101cc3b38
7101cc3a74  ldr x8,[x21]
7101cc3a78  ldr x26,[x8, #0x80]
7101cc3a7c  add x25,x8,#0x88
7101cc3a80  cmp x26,x25
7101cc3a84  b.eq 0x7101cc3b38
7101cc3a88  ldr x0,[x26, #0x68]
7101cc3a8c  ldr x8,[x0]
7101cc3a90  ldr x8,[x8, #0x148]
7101cc3a94  blr x8
7101cc3a98  tbz w0,#0x0,0x7101cc3ad8
7101cc3a9c  ldr x8,[x22]
7101cc3aa0  ldr x1,[x26, #0x68]
7101cc3aa4  mov x0,x22
7101cc3aa8  ldr x8,[x8, #0x120]
7101cc3aac  blr x8
7101cc3ab0  tbz w0,#0x0,0x7101cc3ad8
7101cc3ab4  ldr x0,[x26, #0x68]
7101cc3ab8  ldr x8,[x0]
7101cc3abc  ldr x8,[x8, #0x178]
7101cc3ac0  blr x8
7101cc3ac4  ldr x0,[x26, #0x68]
7101cc3ac8  ldr x8,[x0]
7101cc3acc  ldr x8,[x8, #0x140]
7101cc3ad0  mov w1,wzr
7101cc3ad4  blr x8
7101cc3ad8  ldr x8,[x26, #0x8]
7101cc3adc  cbz x8,0x7101cc3af0
7101cc3ae0  mov x26,x8
7101cc3ae4  ldr x8,[x8]
7101cc3ae8  cbnz x8,0x7101cc3ae0
7101cc3aec  b 0x7101cc3b1c
7101cc3af0  mov x8,x26
7101cc3af4  ldr x9,[x8, #0x10]!
7101cc3af8  ldr x10,[x9]
7101cc3afc  cmp x10,x26
7101cc3b00  b.eq 0x7101cc3b28
7101cc3b04  ldr x9,[x8]
7101cc3b08  mov x8,x9
7101cc3b0c  ldr x26,[x8, #0x10]!
7101cc3b10  ldr x10,[x26]
7101cc3b14  cmp x10,x9
7101cc3b18  b.ne 0x7101cc3b04
7101cc3b1c  cmp x26,x25
7101cc3b20  b.ne 0x7101cc3a88
7101cc3b24  b 0x7101cc3b34
7101cc3b28  mov x26,x9
7101cc3b2c  cmp x26,x25
7101cc3b30  b.ne 0x7101cc3a88
7101cc3b34  ldr x22,[x21, #0x8]
7101cc3b38  ldr x8,[x22]
7101cc3b3c  ldr x8,[x8, #0x188]
7101cc3b40  mov x0,x22
7101cc3b44  blr x8
7101cc3b48  adrp x8,0x710523d000
7101cc3b4c  add x8,x8,#0x9e8
7101cc3b50  stp x8,xzr,[sp, #0x18]
7101cc3b54  b 0x7101cc3b68
7101cc3b58  adrp x8,0x710523d000
7101cc3b5c  add x8,x8,#0x9e8
7101cc3b60  stp x8,xzr,[sp, #0x18]
7101cc3b64  cbz x21,0x7101cc3b70
7101cc3b68  mov x0,x21
7101cc3b6c  bl 0x710392eb40
7101cc3b70  adrp x25,0x710532f000
7101cc3b74  ldr x8,[x25, #0x8f8]
7101cc3b78  ldr x22,[x19, #0x150]
7101cc3b7c  mov x1,x22
7101cc3b80  ldr x0,[x8, #0x8]
7101cc3b84  add x21,x19,#0x148
7101cc3b88  bl 0x7103350ae0
7101cc3b8c  tbz w0,#0x0,0x7101cc3bec
7101cc3b90  adrp x8,0x7105325000
7101cc3b94  ldr x8,[x8, #0xcd0]
7101cc3b98  ldr x0,[x8, #0x8]
7101cc3b9c  add x2,x19,#0x110
7101cc3ba0  mov x1,x22
7101cc3ba4  bl 0x7101cedc80
7101cc3ba8  and w8,w0,#0x1
7101cc3bac  strb w8,[x19, #0x158]
7101cc3bb0  tbz w0,#0x0,0x7101cc3bec
7101cc3bb4  adrp x1,0x71042c4000
7101cc3bb8  add x1,x1,#0xf06
7101cc3bbc  add x8,sp,#0x18
7101cc3bc0  mov x0,x20
7101cc3bc4  bl 0x71037780e0
7101cc3bc8  add x0,sp,#0x18
7101cc3bcc  bl 0x710377b140
7101cc3bd0  ldr x0,[sp, #0x20]
7101cc3bd4  adrp x8,0x710523d000
7101cc3bd8  add x8,x8,#0x9e8
7101cc3bdc  stp x8,xzr,[sp, #0x18]
7101cc3be0  cbz x0,0x7101cc3c00
7101cc3be4  bl 0x710392eb40
7101cc3be8  b 0x7101cc3c00
7101cc3bec  ldr x0,[x19, #0xf8]
7101cc3bf0  fmov s0,0x3f800000
7101cc3bf4  adrp x1,0x71042d6000
7101cc3bf8  add x1,x1,#0x393
7101cc3bfc  bl 0x7103778300
7101cc3c00  adrp x1,0x71043cf000
7101cc3c04  add x1,x1,#0x5ac
7101cc3c08  add x8,sp,#0x18
7101cc3c0c  mov x0,x20
7101cc3c10  add x27,sp,#0x18
7101cc3c14  bl 0x7103776910
7101cc3c18  adrp x1,0x71043f0000
7101cc3c1c  add x1,x1,#0xa9a
7101cc3c20  add x0,sp,#0x18
7101cc3c24  bl 0x710377a120
7101cc3c28  ldr x0,[sp, #0x20]
7101cc3c2c  adrp x26,0x710523d000
7101cc3c30  add x26,x26,#0x9a8
7101cc3c34  stp x26,xzr,[sp, #0x18]
7101cc3c38  cbz x0,0x7101cc3c40
7101cc3c3c  bl 0x710392eb40
7101cc3c40  add x0,x27,#0xe8
7101cc3c44  str wzr,[sp, #0x2c]
7101cc3c48  add x22,x27,#0x18
7101cc3c4c  strh wzr,[sp, #0x30]
7101cc3c50  strh wzr,[sp, #0x28]
7101cc3c54  stur xzr,[sp, #0x85]
7101cc3c58  str xzr,[sp, #0x70]
7101cc3c5c  stur xzr,[sp, #0xee]
7101cc3c60  str xzr,[sp, #0x98]
7101cc3c64  str xzr,[sp, #0xf8]
7101cc3c68  stp xzr,xzr,[sp, #0x18]
7101cc3c6c  stp xzr,xzr,[sp, #0x78]
7101cc3c70  stp xzr,xzr,[sp, #0xe0]
7101cc3c74  stp xzr,xzr,[sp, #0xd0]
7101cc3c78  stp xzr,xzr,[sp, #0xc0]
7101cc3c7c  stp xzr,xzr,[sp, #0xb0]
7101cc3c80  stp xzr,xzr,[sp, #0xa0]
7101cc3c84  stp xzr,xzr,[sp, #0x1b0]
7101cc3c88  stp xzr,xzr,[sp, #0x1a0]
7101cc3c8c  stp xzr,xzr,[sp, #0x190]
7101cc3c90  stp xzr,xzr,[sp, #0x180]
7101cc3c94  stp xzr,xzr,[sp, #0x170]
7101cc3c98  stp xzr,xzr,[sp, #0x160]
7101cc3c9c  stp xzr,xzr,[sp, #0x150]
7101cc3ca0  stp xzr,xzr,[sp, #0x140]
7101cc3ca4  stp xzr,xzr,[sp, #0x130]
7101cc3ca8  stp xzr,xzr,[sp, #0x120]
7101cc3cac  stp xzr,xzr,[sp, #0x110]
7101cc3cb0  stp xzr,xzr,[sp, #0x100]
7101cc3cb4  bl 0x71004f5770
7101cc3cb8  add x8,x27,#0x1ce
7101cc3cbc  str wzr,[sp, #0x1f0]
7101cc3cc0  str xzr,[x8]
7101cc3cc4  ldr x8,[x25, #0x8f8]
7101cc3cc8  stp xzr,xzr,[sp, #0x1d8]
7101cc3ccc  add x2,sp,#0x18
7101cc3cd0  mov x1,x21
7101cc3cd4  str xzr,[sp, #0x1c0]
7101cc3cd8  str xzr,[sp, #0x290]
7101cc3cdc  str xzr,[sp, #0x288]
7101cc3ce0  str xzr,[sp, #0x280]
7101cc3ce4  str xzr,[sp, #0x278]
7101cc3ce8  str xzr,[sp, #0x270]
7101cc3cec  str xzr,[sp, #0x268]
7101cc3cf0  str xzr,[sp, #0x260]
7101cc3cf4  str xzr,[sp, #0x258]
7101cc3cf8  str xzr,[sp, #0x250]
7101cc3cfc  str xzr,[sp, #0x248]
7101cc3d00  str xzr,[sp, #0x240]
7101cc3d04  str xzr,[sp, #0x238]
7101cc3d08  str xzr,[sp, #0x230]
7101cc3d0c  str xzr,[sp, #0x228]
7101cc3d10  str xzr,[sp, #0x220]
7101cc3d14  str xzr,[sp, #0x218]
7101cc3d18  str xzr,[sp, #0x210]
7101cc3d1c  str xzr,[sp, #0x208]
7101cc3d20  strb wzr,[sp, #0x2c8]
7101cc3d24  str xzr,[sp, #0x2c0]
7101cc3d28  stp xzr,xzr,[sp, #0x1c8]
7101cc3d2c  stp xzr,xzr,[sp, #0x1f8]
7101cc3d30  ldr x0,[x8, #0x8]
7101cc3d34  bl 0x710334e6a0
7101cc3d38  adrp x1,0x7104270000
7101cc3d3c  add x1,x1,#0x9c
7101cc3d40  add x8,sp,#0x8
7101cc3d44  mov x0,x20
7101cc3d48  bl 0x7103776910
7101cc3d4c  add x0,sp,#0x8
7101cc3d50  mov w1,#0x1
7101cc3d54  mov x2,x22
7101cc3d58  mov w21,#0x1
7101cc3d5c  bl 0x710377a310
7101cc3d60  ldr x0,[sp, #0x10]
7101cc3d64  stp x26,xzr,[sp, #0x8]
7101cc3d68  cbz x0,0x7101cc3d70
7101cc3d6c  bl 0x710392eb40
7101cc3d70  add x20,x19,#0x168
7101cc3d74  str xzr,[x19, #0x168]
7101cc3d78  bl 0x71039c07b0
7101cc3d7c  adrp x25,0x7107447000
7101cc3d80  ldr x8,[x25, #0xe8]
7101cc3d84  sub x0,x0,x8
7101cc3d88  bl 0x71039c0c80
7101cc3d8c  and x8,x0,#0xffffffff
7101cc3d90  asr x9,x0,#0x20
7101cc3d94  mul x10,x9,x24
7101cc3d98  mul x11,x8,x24
7101cc3d9c  mul x9,x9,x23
7101cc3da0  mov w26,#0x3e8
7101cc3da4  mul x8,x8,x23
7101cc3da8  add x22,x19,#0x170
7101cc3dac  strb wzr,[x19, #0x170]
7101cc3db0  add x10,x10,x11, LSR #0x20
7101cc3db4  add x8,x8,w10, UXTW 
7101cc3db8  add x9,x9,x10, ASR #0x20
7101cc3dbc  add x8,x9,x8, LSR #0x20
7101cc3dc0  asr x8,x8,#0x7
7101cc3dc4  add x8,x8,x0, LSR #0x3f
7101cc3dc8  mul x8,x8,x26
7101cc3dcc  str x8,[x19, #0x160]
7101cc3dd0  bl 0x71039c07b0
7101cc3dd4  ldr x8,[x25, #0xe8]
7101cc3dd8  sub x0,x0,x8
7101cc3ddc  bl 0x71039c0c80
7101cc3de0  and x8,x0,#0xffffffff
7101cc3de4  asr x9,x0,#0x20
7101cc3de8  mul x10,x9,x24
7101cc3dec  mul x11,x8,x24
7101cc3df0  mul x9,x9,x23
7101cc3df4  fmov s0,0x3f800000
7101cc3df8  mul x8,x8,x23
7101cc3dfc  adrp x1,0x71042e7000
7101cc3e00  add x1,x1,#0x32b
7101cc3e04  strb w21,[x19, #0x170]
7101cc3e08  add x10,x10,x11, LSR #0x20
7101cc3e0c  add x8,x8,w10, UXTW 
7101cc3e10  add x9,x9,x10, ASR #0x20
7101cc3e14  add x8,x9,x8, LSR #0x20
7101cc3e18  asr x8,x8,#0x7
7101cc3e1c  ldp x9,x10,[x19, #0x160]
7101cc3e20  add x8,x8,x0, LSR #0x3f
7101cc3e24  ldr x0,[x19, #0x108]
7101cc3e28  mul x8,x8,x26
7101cc3e2c  sub x9,x8,x9
7101cc3e30  add x9,x9,x10
7101cc3e34  stp x8,x9,[x19, #0x160]
7101cc3e38  bl 0x7103778300
7101cc3e3c  ldrb w8,[x22]
7101cc3e40  ldr x20,[x20]
7101cc3e44  cbnz w8,0x7101cc3e9c
7101cc3e48  bl 0x71039c07b0
7101cc3e4c  adrp x8,0x7107447000
7101cc3e50  ldr x8,[x8, #0xe8]
7101cc3e54  sub x0,x0,x8
7101cc3e58  bl 0x71039c0c80
7101cc3e5c  and x8,x0,#0xffffffff
7101cc3e60  asr x9,x0,#0x20
7101cc3e64  mul x10,x9,x24
7101cc3e68  mul x11,x8,x24
7101cc3e6c  mul x9,x9,x23
7101cc3e70  mul x8,x8,x23
7101cc3e74  add x10,x10,x11, LSR #0x20
7101cc3e78  add x8,x8,w10, UXTW 
7101cc3e7c  add x9,x9,x10, ASR #0x20
7101cc3e80  add x8,x9,x8, LSR #0x20
7101cc3e84  mov w9,#0x3e8
7101cc3e88  asr x8,x8,#0x7
7101cc3e8c  add x8,x8,x0, LSR #0x3f
7101cc3e90  madd x8,x8,x9,x20
7101cc3e94  ldr x9,[x19, #0x160]
7101cc3e98  sub x20,x8,x9
7101cc3e9c  mov x9,#0x5a53
7101cc3ea0  movk x9,#0xa09b, LSL #16
7101cc3ea4  lsr x8,x20,#0x9
7101cc3ea8  movk x9,#0xb82f, LSL #32
7101cc3eac  movk x9,#0x44, LSL #48
7101cc3eb0  umulh x8,x8,x9
7101cc3eb4  mov w9,#0xb
7101cc3eb8  lsr x8,x8,#0xb
7101cc3ebc  sub w8,w9,w8
7101cc3ec0  bic w2,w8,w8, ASR #0x1f
7101cc3ec4  add x0,x19,#0x120
7101cc3ec8  mov w1,#0x1
7101cc3ecc  str w2,[x19, #0x178]
7101cc3ed0  bl 0x710377a310
7101cc3ed4  adrp x21,0x710532f000
7101cc3ed8  ldr x8,[x21, #0x7c8]
7101cc3edc  ldr x8,[x8, #0x8]
7101cc3ee0  ldrb w8,[x8, #0x69]
7101cc3ee4  cbz w8,0x7101cc3f00
7101cc3ee8  adrp x8,0x710532f000
7101cc3eec  ldr x8,[x8, #0x8e8]
7101cc3ef0  ldr x8,[x8, #0x8]
7101cc3ef4  ldrb w8,[x8, #0xe8]
7101cc3ef8  cbnz w8,0x7101cc4074
7101cc3efc  b 0x7101cc3fbc
7101cc3f00  ldrb w8,[x19, #0x17c]
7101cc3f04  cbz w8,0x7101cc3f9c
7101cc3f08  adrp x8,0x7105325000
7101cc3f0c  ldr x8,[x8, #0xcc8]
7101cc3f10  ldr x20,[x8, #0x8]
7101cc3f14  ldr x1,[x19, #0x140]
7101cc3f18  orr w2,wzr,#0x3
7101cc3f1c  mov x0,x20
7101cc3f20  bl 0x7101cd3060
7101cc3f24  ldr w8,[x20, #0x26b0]
7101cc3f28  add w8,w8,#0x1
7101cc3f2c  str w8,[x20, #0x26b0]
7101cc3f30  bl 0x71039c63b0
7101cc3f34  ldr x8,[x19, #0x130]
7101cc3f38  sub x8,x0,x8
7101cc3f3c  and x10,x8,#0xffffffff
7101cc3f40  asr x11,x8,#0x20
7101cc3f44  mov w12,#0x94b3
7101cc3f48  movk w12,#0x26d6, LSL #16
7101cc3f4c  mul x13,x11,x12
7101cc3f50  mul x12,x10,x12
7101cc3f54  add x12,x13,x12, LSR #0x20
7101cc3f58  mov w13,#0xbe8
7101cc3f5c  movk w13,#0x112e, LSL #16
7101cc3f60  mul x11,x11,x13
7101cc3f64  mul x10,x10,x13
7101cc3f68  str x8,[x19, #0x130]
7101cc3f6c  adrp x9,0x7105325000
7101cc3f70  ldr x9,[x9, #0xcb8]
7101cc3f74  ldr x0,[x9, #0x8]
7101cc3f78  add x10,x10,w12, UXTW 
7101cc3f7c  add x11,x11,x12, ASR #0x20
7101cc3f80  ldr x1,[x19, #0x140]
7101cc3f84  add x10,x11,x10, LSR #0x20
7101cc3f88  lsr x10,x10,#0x1a
7101cc3f8c  lsr x8,x8,#0x3f
7101cc3f90  add w3,w10,w8
7101cc3f94  orr w2,wzr,#0x6
7101cc3f98  bl 0x7101cd2890
7101cc3f9c  strb wzr,[x19, #0x17c]
7101cc3fa0  adrp x8,0x710532f000
7101cc3fa4  ldr x8,[x8, #0x8e8]
7101cc3fa8  ldr x8,[x8, #0x8]
7101cc3fac  ldrb w9,[x8, #0xc66]
7101cc3fb0  cbz w9,0x7101cc4044
7101cc3fb4  ldrb w8,[x8, #0xe8]
7101cc3fb8  cbnz w8,0x7101cc4074
7101cc3fbc  ldr x0,[x19, #0xf8]
7101cc3fc0  fmov s0,0x3f800000
7101cc3fc4  adrp x1,0x71043e0000
7101cc3fc8  add x1,x1,#0x2ae
7101cc3fcc  bl 0x7103778300
7101cc3fd0  str xzr,[x19, #0x168]
7101cc3fd4  bl 0x71039c07b0
7101cc3fd8  adrp x8,0x7107447000
7101cc3fdc  ldr x8,[x8, #0xe8]
7101cc3fe0  sub x0,x0,x8
7101cc3fe4  bl 0x71039c0c80
7101cc3fe8  and x8,x0,#0xffffffff
7101cc3fec  asr x9,x0,#0x20
7101cc3ff0  mul x10,x9,x24
7101cc3ff4  mul x11,x8,x24
7101cc3ff8  mul x9,x9,x23
7101cc3ffc  strb wzr,[x19, #0x170]
7101cc4000  mul x8,x8,x23
7101cc4004  add x10,x10,x11, LSR #0x20
7101cc4008  add x8,x8,w10, UXTW 
7101cc400c  add x9,x9,x10, ASR #0x20
7101cc4010  add x8,x9,x8, LSR #0x20
7101cc4014  mov w9,#0x3e8
7101cc4018  asr x8,x8,#0x7
7101cc401c  add x8,x8,x0, LSR #0x3f
7101cc4020  mul x8,x8,x9
7101cc4024  ldrb w9,[x19, #0x158]
7101cc4028  str x8,[x19, #0x160]
7101cc402c  ldr w8,[x19, #0xdc]
7101cc4030  cmp w8,#0x13
7101cc4034  cbz w9,0x7101cc4064
7101cc4038  b.cs 0x7101cc4094
7101cc403c  mov w9,#0x4
7101cc4040  b 0x7101cc406c
7101cc4044  ldr x8,[x21, #0x7c8]
7101cc4048  ldr x0,[x8, #0x8]
7101cc404c  bl 0x71032e5f40
7101cc4050  ldr w8,[x19, #0xdc]
7101cc4054  cmp w8,#0x13
7101cc4058  b.cs 0x7101cc4094
7101cc405c  mov w9,#0x5
7101cc4060  b 0x7101cc406c
7101cc4064  b.cs 0x7101cc4094
7101cc4068  orr w9,wzr,#0x3
7101cc406c  add x8,x19,w8, SXTW  #0x2
7101cc4070  str w9,[x8, #0x90]
7101cc4074  add sp,sp,#0xad0
7101cc4078  ldp x29,x30,[sp, #0x50]
7101cc407c  ldp x20,x19,[sp, #0x40]
7101cc4080  ldp x22,x21,[sp, #0x30]
7101cc4084  ldp x24,x23,[sp, #0x20]
7101cc4088  ldp x26,x25,[sp, #0x10]
7101cc408c  ldp x28,x27,[sp], #0x60
7101cc4090  ret
7101cc4094  bl 0x71039c2650
