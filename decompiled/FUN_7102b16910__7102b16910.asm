// addr:      7102b16910
// offset:    0x2b16910
// name:      FUN_7102b16910
// mangled:   
// size:      1848

7102b16910  sub sp,sp,#0x110
7102b16914  str x28,[sp, #0xc0]
7102b16918  stp x24,x23,[sp, #0xd0]
7102b1691c  stp x22,x21,[sp, #0xe0]
7102b16920  stp x20,x19,[sp, #0xf0]
7102b16924  stp x29,x30,[sp, #0x100]
7102b16928  add x29,sp,#0x100
7102b1692c  mov x20,x1
7102b16930  mov x19,x0
7102b16934  mov w0,#0x10
7102b16938  orr w1,wzr,#0x60
7102b1693c  mov w22,w3
7102b16940  mov w23,w2
7102b16944  bl 0x710392e290
7102b16948  mov x21,x0
7102b1694c  cbnz x0,0x7102b16998
7102b16950  adrp x8,0x7105332000
7102b16954  ldr x0,[x8, #0xf00]
7102b16958  cbz x0,0x7102b16994
7102b1695c  orr w8,wzr,#0x60
7102b16960  str wzr,[sp, #0x30]
7102b16964  add x1,sp,#0x30
7102b16968  str x8,[sp, #0x70]
7102b1696c  ldr x8,[x0]
7102b16970  ldr x8,[x8, #0x30]
7102b16974  add x2,sp,#0x70
7102b16978  blr x8
7102b1697c  tbz w0,#0x0,0x7102b16994
7102b16980  mov w0,#0x10
7102b16984  orr w1,wzr,#0x60
7102b16988  bl 0x710392e290
7102b1698c  mov x21,x0
7102b16990  cbnz x0,0x7102b16998
7102b16994  mov x21,xzr
7102b16998  mov x8,#0xb717
7102b1699c  movk x8,#0x38d1, LSL #16
7102b169a0  mov x24,x21
7102b169a4  movk x8,#0x1, LSL #32
7102b169a8  str x20,[x21]
7102b169ac  str xzr,[x24, #0x8]!
7102b169b0  str x8,[x21, #0x48]
7102b169b4  orr w8,w23,w22
7102b169b8  str wzr,[x21, #0x44]
7102b169bc  stp xzr,xzr,[x21, #0x10]
7102b169c0  strh wzr,[x21, #0x40]
7102b169c4  str xzr,[x21, #0x58]
7102b169c8  strb wzr,[x21, #0x54]
7102b169cc  str wzr,[x21, #0x50]
7102b169d0  stp xzr,xzr,[x21, #0x30]
7102b169d4  stp x21,xzr,[x21, #0x20]
7102b169d8  cbz w8,0x7102b16a2c
7102b169dc  cbnz w23,0x7102b169f0
7102b169e0  cmp w22,#0x1
7102b169e4  b.ne 0x7102b169f0
7102b169e8  mov w8,#0x1
7102b169ec  b 0x7102b16a2c
7102b169f0  cmp w23,#0x1
7102b169f4  b.ne 0x7102b16a04
7102b169f8  cbnz w22,0x7102b16a04
7102b169fc  mov w8,#0x2
7102b16a00  b 0x7102b16a2c
7102b16a04  cmp w23,#0x1
7102b16a08  b.ne 0x7102b16a1c
7102b16a0c  cmp w22,#0x1
7102b16a10  b.ne 0x7102b16a1c
7102b16a14  orr w8,wzr,#0x3
7102b16a18  b 0x7102b16a2c
7102b16a1c  cmp w23,#0x2
7102b16a20  b.ne 0x7102b16f9c
7102b16a24  cbnz w22,0x7102b16f9c
7102b16a28  mov w8,#0x4
7102b16a2c  orr w9,wzr,#0x30
7102b16a30  umull x10,w8,w9
7102b16a34  str w8,[x21, #0x5c]
7102b16a38  adrp x22,0x7105112000
7102b16a3c  add x22,x22,#0x8e0
7102b16a40  ldr x14,[x22, x10, LSL #0x0]
7102b16a44  ldrb w13,[x14]
7102b16a48  cbz w13,0x7102b16ad8
7102b16a4c  ldr x11,[x20, #0x310]
7102b16a50  ldp x10,x11,[x11, #0xd0]
7102b16a54  cmp x10,x11
7102b16a58  b.eq 0x7102b16ad8
7102b16a5c  mov x12,xzr
7102b16a60  add x15,x14,#0x1
7102b16a64  mov w14,#0xffffffff
7102b16a68  orr x16,xzr,#0x100000000
7102b16a6c  adrp x17,0x7104754000
7102b16a70  add x17,x17,#0x84
7102b16a74  and w13,w13,#0xff
7102b16a78  sub w18,w13,#0x41
7102b16a7c  add w0,w13,#0x20
7102b16a80  cmp w18,#0x1a
7102b16a84  csel w13,w0,w13,cc
7102b16a88  eor w13,w13,w14
7102b16a8c  and w13,w13,#0xff
7102b16a90  ldr w13,[x17, w13, UXTW #0x2]
7102b16a94  eor w14,w13,w14, LSR #0x8
7102b16a98  ldrb w13,[x15], #0x1
7102b16a9c  add x12,x12,x16
7102b16aa0  cbnz w13,0x7102b16a74
7102b16aa4  mvn w13,w14
7102b16aa8  and x12,x12,#0xff00000000
7102b16aac  orr x12,x12,x13
7102b16ab0  ldr w13,[x10, #0x8]
7102b16ab4  cmp w13,#0x1
7102b16ab8  b.hi 0x7102b16acc
7102b16abc  ldr x23,[x10]
7102b16ac0  ldr x13,[x23, #0x68]
7102b16ac4  cmp x12,x13
7102b16ac8  b.eq 0x7102b16adc
7102b16acc  add x10,x10,#0x10
7102b16ad0  cmp x11,x10
7102b16ad4  b.ne 0x7102b16ab0
7102b16ad8  mov x23,xzr
7102b16adc  umaddl x8,w8,w9,x22
7102b16ae0  ldr q0,[x8, #0x20]
7102b16ae4  fmov s1,0x3f800000
7102b16ae8  mov v0.S[0x3],v1.S[0x0]
7102b16aec  adrp x8,0x7104468000
7102b16af0  ldr q2,[x8, #0xca0]
7102b16af4  adrp x8,0x710446a000
7102b16af8  ldr q3,[x8, #0x360]
7102b16afc  adrp x8,0x7104465000
7102b16b00  ldr q4,[x8, #0x6b0]
7102b16b04  str x23,[x24]
7102b16b08  stp q2,q3,[sp, #0x30]
7102b16b0c  stp q4,q0,[sp, #0x50]
7102b16b10  cbz x23,0x7102b16bb8
7102b16b14  ldr x0,[x23, #0x90]
7102b16b18  add x1,sp,#0x30
7102b16b1c  ldr x8,[x0]
7102b16b20  str q4,[sp]
7102b16b24  ldr x8,[x8, #0x148]
7102b16b28  stp q3,q2,[sp, #0x10]
7102b16b2c  blr x8
7102b16b30  ldp q4,q3,[sp]
7102b16b34  ldr q2,[sp, #0x20]
7102b16b38  fmov s1,0x3f800000
7102b16b3c  ldr x23,[x23, #0xd8]
7102b16b40  cbz x23,0x7102b16bb8
7102b16b44  ldr x8,[sp, #0x48]
7102b16b48  str x8,[sp, #0x88]
7102b16b4c  ldr x8,[sp, #0x40]
7102b16b50  str x8,[sp, #0x80]
7102b16b54  ldr x8,[sp, #0x38]
7102b16b58  str x8,[sp, #0x78]
7102b16b5c  ldr x8,[sp, #0x30]
7102b16b60  str x8,[sp, #0x70]
7102b16b64  ldr x8,[sp, #0x68]
7102b16b68  str x8,[sp, #0xa8]
7102b16b6c  ldr x8,[sp, #0x60]
7102b16b70  str x8,[sp, #0xa0]
7102b16b74  ldr x8,[sp, #0x58]
7102b16b78  str x8,[sp, #0x98]
7102b16b7c  ldr x8,[sp, #0x50]
7102b16b80  str x8,[sp, #0x90]
7102b16b84  ldr x8,[x23, #0x8]
7102b16b88  ldrb w9,[x8, #0xa8]
7102b16b8c  cbz w9,0x7102b16bb0
7102b16b90  ldr x0,[x8, #0x48]
7102b16b94  ldr x8,[x0]
7102b16b98  ldr x8,[x8, #0x20]
7102b16b9c  add x1,sp,#0x70
7102b16ba0  blr x8
7102b16ba4  ldp q4,q3,[sp]
7102b16ba8  ldr q2,[sp, #0x20]
7102b16bac  fmov s1,0x3f800000
7102b16bb0  mov w8,#0x1
7102b16bb4  strb w8,[x23, #0x20]
7102b16bb8  ldr x9,[x21]
7102b16bbc  ldr x10,[x9, #0x300]
7102b16bc0  ldr x11,[x10, #0x18]
7102b16bc4  ldp x10,x11,[x11]
7102b16bc8  ldrsw x8,[x21, #0x5c]
7102b16bcc  cmp x10,x11
7102b16bd0  b.eq 0x7102b16c8c
7102b16bd4  orr w12,wzr,#0x30
7102b16bd8  madd x12,x8,x12,x22
7102b16bdc  ldr x12,[x12, #0x8]
7102b16be0  ldrb w13,[x12], #0x1
7102b16be4  mov w14,#0xffffffff
7102b16be8  adrp x15,0x7104754000
7102b16bec  add x15,x15,#0x84
7102b16bf0  orr x16,xzr,#0x100000000
7102b16bf4  ldr x17,[x10]
7102b16bf8  cbz w13,0x7102b16c48
7102b16bfc  mov x18,xzr
7102b16c00  mov x0,x12
7102b16c04  mov w2,w13
7102b16c08  mov w1,w14
7102b16c0c  and w2,w2,#0xff
7102b16c10  sub w3,w2,#0x41
7102b16c14  add w4,w2,#0x20
7102b16c18  cmp w3,#0x1a
7102b16c1c  csel w2,w4,w2,cc
7102b16c20  eor w2,w2,w1
7102b16c24  and w2,w2,#0xff
7102b16c28  ldr w2,[x15, w2, UXTW #0x2]
7102b16c2c  eor w1,w2,w1, LSR #0x8
7102b16c30  ldrb w2,[x0], #0x1
7102b16c34  add x18,x18,x16
7102b16c38  cbnz w2,0x7102b16c0c
7102b16c3c  mvn w0,w1
7102b16c40  and x18,x18,#0xff00000000
7102b16c44  b 0x7102b16c50
7102b16c48  mov x0,xzr
7102b16c4c  mov x18,xzr
7102b16c50  orr x18,x18,x0
7102b16c54  ldr x0,[x17, #0xa0]
7102b16c58  and x0,x0,#0xffffffffff
7102b16c5c  cmp x0,x18
7102b16c60  b.eq 0x7102b16c74
7102b16c64  add x10,x10,#0x8
7102b16c68  cmp x10,x11
7102b16c6c  b.ne 0x7102b16bf4
7102b16c70  b 0x7102b16c8c
7102b16c74  ldr x10,[x17, #0x110]
7102b16c78  cbz x10,0x7102b16c8c
7102b16c7c  ldp x11,x12,[x10]
7102b16c80  cmp x11,x12
7102b16c84  b.eq 0x7102b16c8c
7102b16c88  str x10,[x21, #0x10]
7102b16c8c  ldr x9,[x9, #0x738]
7102b16c90  add x10,x9,#0x8
7102b16c94  cmp x9,#0x0
7102b16c98  csel x9,xzr,x10,eq
7102b16c9c  adrp x10,0x71052a8000
7102b16ca0  ldr x10,[x10, #0xa88]
7102b16ca4  ldr w9,[x9, #0x5c]
7102b16ca8  stp xzr,xzr,[sp, #0x30]
7102b16cac  stp q2,q3,[sp, #0x70]
7102b16cb0  stp w9,wzr,[sp, #0x50]
7102b16cb4  orr w9,wzr,#0x30
7102b16cb8  ldr q0,[x10]
7102b16cbc  madd x8,x8,x9,x22
7102b16cc0  str q0,[sp, #0x40]
7102b16cc4  ldr q0,[x8, #0x20]
7102b16cc8  mov v0.S[0x3],v1.S[0x0]
7102b16ccc  mov w0,#0x10
7102b16cd0  mov w1,#0x8
7102b16cd4  stp q4,q0,[sp, #0x90]
7102b16cd8  bl 0x710392e290
7102b16cdc  mov x22,x0
7102b16ce0  cbnz x0,0x7102b16d2c
7102b16ce4  adrp x8,0x7105332000
7102b16ce8  ldr x0,[x8, #0xf00]
7102b16cec  cbz x0,0x7102b16d28
7102b16cf0  mov w8,#0x8
7102b16cf4  stur wzr,[x29, #-0x34]
7102b16cf8  sub x1,x29,#0x34
7102b16cfc  stur x8,[x29, #-0x48]
7102b16d00  ldr x8,[x0]
7102b16d04  ldr x8,[x8, #0x30]
7102b16d08  sub x2,x29,#0x48
7102b16d0c  blr x8
7102b16d10  tbz w0,#0x0,0x7102b16d28
7102b16d14  mov w0,#0x10
7102b16d18  mov w1,#0x8
7102b16d1c  bl 0x710392e290
7102b16d20  mov x22,x0
7102b16d24  cbnz x0,0x7102b16d2c
7102b16d28  mov x22,xzr
7102b16d2c  ldr x1,[x21]
7102b16d30  mov x0,x22
7102b16d34  mov w2,wzr
7102b16d38  bl 0x7102b22230
7102b16d3c  ldr x23,[x21, #0x18]
7102b16d40  str x22,[x21, #0x18]
7102b16d44  cbz x23,0x7102b16d64
7102b16d48  ldr x0,[x23]
7102b16d4c  str xzr,[x23]
7102b16d50  cbz x0,0x7102b16d58
7102b16d54  bl 0x710392eb40
7102b16d58  mov x0,x23
7102b16d5c  bl 0x710392eb40
7102b16d60  ldr x22,[x21, #0x18]
7102b16d64  ldr x22,[x22]
7102b16d68  cbz x22,0x7102b16f60
7102b16d6c  ldr x8,[x22]
7102b16d70  cbz x8,0x7102b16f08
7102b16d74  ldrb w9,[x22, #0x10]
7102b16d78  cbz w9,0x7102b16eb4
7102b16d7c  ldr x8,[x8, #0x38]
7102b16d80  cbz x8,0x7102b16e14
7102b16d84  ldr x0,[x8, #0x130]
7102b16d88  ldr x8,[x0]
7102b16d8c  ldr x8,[x8, #0x1a0]
7102b16d90  blr x8
7102b16d94  ldr w8,[x0, #0x48]
7102b16d98  ldr x9,[x0, #0x8]
7102b16d9c  orr w8,w8,#0x1f80
7102b16da0  str w8,[x0, #0x48]
7102b16da4  ldr w8,[x9, #0x10]
7102b16da8  cmp w8,#0x1
7102b16dac  b.lt 0x7102b16e14
7102b16db0  ldr x11,[x0, #0x40]
7102b16db4  mov x8,xzr
7102b16db8  orr w10,wzr,#0x30
7102b16dbc  lsl x12,x8,#0x5
7102b16dc0  ldr w13,[x11, x12, LSL #0x0]
7102b16dc4  cmp w13,#0x1
7102b16dc8  b.lt 0x7102b16e00
7102b16dcc  mov x13,xzr
7102b16dd0  ldr x14,[x9, #0x18]
7102b16dd4  add x14,x14,x10
7102b16dd8  ldr x14,[x14, x13, LSL #0x3]
7102b16ddc  cbz x14,0x7102b16df0
7102b16de0  ldr x9,[x0, #0x48]
7102b16de4  str x9,[x14, #0x8]
7102b16de8  ldr x11,[x0, #0x40]
7102b16dec  ldr x9,[x0, #0x8]
7102b16df0  ldrsw x14,[x11, x12, LSL #0x0]
7102b16df4  add x13,x13,#0x1
7102b16df8  cmp x13,x14
7102b16dfc  b.lt 0x7102b16dd0
7102b16e00  ldrsw x12,[x9, #0x10]
7102b16e04  add x8,x8,#0x1
7102b16e08  add x10,x10,#0x2d0
7102b16e0c  cmp x8,x12
7102b16e10  b.lt 0x7102b16dbc
7102b16e14  ldr x8,[x22]
7102b16e18  ldr x8,[x8, #0x38]
7102b16e1c  cbz x8,0x7102b16eb0
7102b16e20  ldr x0,[x8, #0x130]
7102b16e24  ldr x8,[x0]
7102b16e28  ldr x8,[x8, #0x1a0]
7102b16e2c  blr x8
7102b16e30  ldr w8,[x0, #0x4c]
7102b16e34  ldr x9,[x0, #0x8]
7102b16e38  orr w8,w8,#0x1f80
7102b16e3c  str w8,[x0, #0x4c]
7102b16e40  ldr w8,[x9, #0x10]
7102b16e44  cmp w8,#0x1
7102b16e48  b.lt 0x7102b16eb0
7102b16e4c  ldr x11,[x0, #0x40]
7102b16e50  mov x8,xzr
7102b16e54  orr w10,wzr,#0x30
7102b16e58  lsl x12,x8,#0x5
7102b16e5c  ldr w13,[x11, x12, LSL #0x0]
7102b16e60  cmp w13,#0x1
7102b16e64  b.lt 0x7102b16e9c
7102b16e68  mov x13,xzr
7102b16e6c  ldr x14,[x9, #0x18]
7102b16e70  add x14,x14,x10
7102b16e74  ldr x14,[x14, x13, LSL #0x3]
7102b16e78  cbz x14,0x7102b16e8c
7102b16e7c  ldr x9,[x0, #0x48]
7102b16e80  str x9,[x14, #0x8]
7102b16e84  ldr x11,[x0, #0x40]
7102b16e88  ldr x9,[x0, #0x8]
7102b16e8c  ldrsw x14,[x11, x12, LSL #0x0]
7102b16e90  add x13,x13,#0x1
7102b16e94  cmp x13,x14
7102b16e98  b.lt 0x7102b16e6c
7102b16e9c  ldrsw x12,[x9, #0x10]
7102b16ea0  add x8,x8,#0x1
7102b16ea4  add x10,x10,#0x2d0
7102b16ea8  cmp x8,x12
7102b16eac  b.lt 0x7102b16e58
7102b16eb0  ldr x8,[x22]
7102b16eb4  ldr x9,[x8, #0x38]
7102b16eb8  cbz x9,0x7102b16ee4
7102b16ebc  ldr x0,[x9, #0x130]
7102b16ec0  ldr x8,[x0]
7102b16ec4  ldr x8,[x8, #0x58]
7102b16ec8  add x2,sp,#0x30
7102b16ecc  mov w1,wzr
7102b16ed0  mov w3,wzr
7102b16ed4  mov w4,wzr
7102b16ed8  mov w5,wzr
7102b16edc  blr x8
7102b16ee0  ldr x8,[x22]
7102b16ee4  ldr x8,[x8, #0x38]
7102b16ee8  cbz x8,0x7102b16f08
7102b16eec  ldr x0,[x8, #0x130]
7102b16ef0  ldr x8,[x0]
7102b16ef4  ldr x8,[x8, #0x168]
7102b16ef8  add x1,sp,#0x70
7102b16efc  add x2,sp,#0x70
7102b16f00  mov w3,#0x1
7102b16f04  blr x8
7102b16f08  ldr x8,[x22, #0x8]
7102b16f0c  cbz x8,0x7102b16f60
7102b16f10  ldr x9,[x8, #0x38]
7102b16f14  cbz x9,0x7102b16f40
7102b16f18  ldr x0,[x9, #0x130]
7102b16f1c  ldr x8,[x0]
7102b16f20  ldr x8,[x8, #0x140]
7102b16f24  add x2,sp,#0x30
7102b16f28  mov w1,wzr
7102b16f2c  mov w3,wzr
7102b16f30  mov w4,wzr
7102b16f34  mov w5,wzr
7102b16f38  blr x8
7102b16f3c  ldr x8,[x22, #0x8]
7102b16f40  ldr x8,[x8, #0x38]
7102b16f44  cbz x8,0x7102b16f60
7102b16f48  ldr x0,[x8, #0x130]
7102b16f4c  ldr x8,[x0]
7102b16f50  ldr x8,[x8, #0x188]
7102b16f54  add x1,sp,#0x70
7102b16f58  add x2,sp,#0x70
7102b16f5c  blr x8
7102b16f60  ldr x8,[x24]
7102b16f64  cbz x8,0x7102b16fdc
7102b16f68  add x0,x8,#0x108
7102b16f6c  strb wzr,[x8, #0x110]
7102b16f70  bl 0x71025e9d50
7102b16f74  ldr x8,[x24]
7102b16f78  cbz x8,0x7102b16fdc
7102b16f7c  ldrb w9,[x8, #0xe0]
7102b16f80  cbz w9,0x7102b16f90
7102b16f84  ldr x9,[x8, #0xc8]
7102b16f88  cbz x9,0x7102b16f90
7102b16f8c  strh wzr,[x9, #0x32]
7102b16f90  ldr x8,[x8, #0xd8]
7102b16f94  cbz x8,0x7102b16f9c
7102b16f98  strb wzr,[x8, #0x22]
7102b16f9c  ldr x8,[x24]
7102b16fa0  cbz x8,0x7102b16fdc
7102b16fa4  ldrb w9,[x8, #0xe0]
7102b16fa8  cbz w9,0x7102b16fbc
7102b16fac  ldr x9,[x8, #0xc8]
7102b16fb0  cbz x9,0x7102b16fbc
7102b16fb4  mov w10,#0x101
7102b16fb8  strh w10,[x9, #0x30]
7102b16fbc  ldr x9,[x8, #0xd8]
7102b16fc0  cbz x9,0x7102b16fcc
7102b16fc4  mov w10,#0x1
7102b16fc8  strb w10,[x9, #0x21]
7102b16fcc  ldrb w9,[x8, #0xe0]
7102b16fd0  cbz w9,0x7102b16fdc
7102b16fd4  ldr x8,[x8, #0xb0]
7102b16fd8  strb wzr,[x8, #0x10]
7102b16fdc  ldr x8,[x21, #0x10]
7102b16fe0  cbz x8,0x7102b16ff0
7102b16fe4  ldp x0,x1,[x8]
7102b16fe8  mov w2,#0x1
7102b16fec  bl 0x71025f4d80
7102b16ff0  ldr x8,[x21, #0x18]
7102b16ff4  ldr x0,[x8]
7102b16ff8  bl 0x7102b224a0
7102b16ffc  str xzr,[sp, #0x70]
7102b17000  ldr x8,[x20, #0x338]
7102b17004  ldr x8,[x8]
7102b17008  ldr x0,[x8, #0x8]
7102b1700c  cbz x0,0x7102b17020
7102b17010  add x1,sp,#0x70
7102b17014  mov w2,wzr
7102b17018  bl 0x7102405040
7102b1701c  b 0x7102b17024
7102b17020  mov w0,#0xffffffff
7102b17024  str w0,[x21, #0x44]
7102b17028  str x21,[x19]
7102b1702c  ldr x28,[sp, #0xc0]
7102b17030  ldp x29,x30,[sp, #0x100]
7102b17034  ldp x20,x19,[sp, #0xf0]
7102b17038  ldp x22,x21,[sp, #0xe0]
7102b1703c  ldp x24,x23,[sp, #0xd0]
7102b17040  add sp,sp,#0x110
7102b17044  ret
