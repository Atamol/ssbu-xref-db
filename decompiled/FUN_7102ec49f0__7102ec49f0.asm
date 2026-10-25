// addr:      7102ec49f0
// offset:    0x2ec49f0
// name:      FUN_7102ec49f0
// mangled:   
// size:      1136

7102ec49f0  sub sp,sp,#0x70
7102ec49f4  str x21,[sp, #0x40]
7102ec49f8  stp x20,x19,[sp, #0x50]
7102ec49fc  stp x29,x30,[sp, #0x60]
7102ec4a00  add x29,sp,#0x60
7102ec4a04  adrp x8,0x7105147000
7102ec4a08  add x8,x8,#0xec0
7102ec4a0c  adrp x9,0x7104468000
7102ec4a10  stp x2,xzr,[x0, #0x10]
7102ec4a14  adrp x10,0x710446a000
7102ec4a18  stp x8,x1,[x0]
7102ec4a1c  ldr x8,[x1, #0x338]
7102ec4a20  str w3,[x0, #0x28]
7102ec4a24  ldr q1,[x9, #0xca0]
7102ec4a28  ldr q0,[x10, #0x360]
7102ec4a2c  stp xzr,xzr,[x0, #0x170]
7102ec4a30  mov x19,x0
7102ec4a34  str xzr,[x0, #0x40]
7102ec4a38  stur xzr,[x0, #0x32]
7102ec4a3c  stur xzr,[x0, #0x2c]
7102ec4a40  str x8,[x0, #0x20]
7102ec4a44  adrp x8,0x7104465000
7102ec4a48  ldr q2,[x8, #0x6b0]
7102ec4a4c  adrp x8,0x710446a000
7102ec4a50  ldr q3,[x8, #0x350]
7102ec4a54  str xzr,[x0, #0x90]
7102ec4a58  str wzr,[x0, #0xe0]
7102ec4a5c  str wzr,[x0, #0x264]
7102ec4a60  strb wzr,[x0, #0x1d0]
7102ec4a64  strh wzr,[x0, #0x260]
7102ec4a68  str xzr,[x0, #0x258]
7102ec4a6c  str xzr,[x0, #0x250]
7102ec4a70  str xzr,[x0, #0x248]
7102ec4a74  str xzr,[x0, #0x240]
7102ec4a78  str xzr,[x0, #0x238]
7102ec4a7c  str xzr,[x0, #0x230]
7102ec4a80  str xzr,[x0, #0x228]
7102ec4a84  str xzr,[x0, #0x220]
7102ec4a88  str xzr,[x0, #0x218]
7102ec4a8c  str xzr,[x0, #0x210]
7102ec4a90  str xzr,[x0, #0x208]
7102ec4a94  stp xzr,xzr,[x0, #0x1c0]
7102ec4a98  stp xzr,xzr,[x0, #0x1f8]
7102ec4a9c  stp xzr,xzr,[x0, #0x1e8]
7102ec4aa0  stp xzr,xzr,[x0, #0x1d8]
7102ec4aa4  stp q1,q0,[x0, #0x50]
7102ec4aa8  stp q2,q3,[x0, #0x70]
7102ec4aac  stp q1,q0,[x0, #0xa0]
7102ec4ab0  stp q2,q3,[x0, #0xc0]
7102ec4ab4  stp q1,q0,[x0, #0xf0]
7102ec4ab8  stp q2,q3,[x0, #0x110]
7102ec4abc  stp q1,q0,[x0, #0x130]
7102ec4ac0  stp q2,q3,[x0, #0x150]
7102ec4ac4  stp q1,q0,[x0, #0x180]
7102ec4ac8  stp q2,q3,[x0, #0x1a0]
7102ec4acc  ldr x8,[x1, #0x310]
7102ec4ad0  ldp x9,x10,[x8, #0xd0]
7102ec4ad4  cmp x9,x10
7102ec4ad8  stp q1,q0,[sp, #0x20]
7102ec4adc  stp q3,q2,[sp]
7102ec4ae0  b.eq 0x7102ec4b18
7102ec4ae4  mov x11,#0x9611
7102ec4ae8  movk x11,#0x5f72, LSL #16
7102ec4aec  movk x11,#0x14, LSL #32
7102ec4af0  ldr w8,[x9, #0x8]
7102ec4af4  cmp w8,#0x1
7102ec4af8  b.hi 0x7102ec4b0c
7102ec4afc  ldr x8,[x9]
7102ec4b00  ldr x12,[x8, #0x68]
7102ec4b04  cmp x12,x11
7102ec4b08  b.eq 0x7102ec4c3c
7102ec4b0c  add x9,x9,#0x10
7102ec4b10  cmp x10,x9
7102ec4b14  b.ne 0x7102ec4af0
7102ec4b18  mov x0,xzr
7102ec4b1c  str xzr,[x19, #0x18]
7102ec4b20  fmov s0,wzr
7102ec4b24  mov w1,#0x1
7102ec4b28  bl 0x710260fdd0
7102ec4b2c  ldr x20,[x19, #0x18]
7102ec4b30  cbz x20,0x7102ec4b64
7102ec4b34  ldr x8,[x20, #0xd8]
7102ec4b38  cbnz x8,0x7102ec4b64
7102ec4b3c  add x0,x20,#0x90
7102ec4b40  mov x1,xzr
7102ec4b44  bl 0x71026533a0
7102ec4b48  mov x8,x0
7102ec4b4c  ldr x0,[x20, #0xd8]
7102ec4b50  str x8,[x20, #0xd8]
7102ec4b54  cbz x0,0x7102ec4b64
7102ec4b58  ldr x8,[x0]
7102ec4b5c  ldr x8,[x8, #0x8]
7102ec4b60  blr x8
7102ec4b64  ldr x8,[x19, #0x8]
7102ec4b68  ldr x9,[x8, #0x310]
7102ec4b6c  fmov s17,wzr
7102ec4b70  ldp x8,x9,[x9, #0xd0]
7102ec4b74  cmp x8,x9
7102ec4b78  b.eq 0x7102ec4bbc
7102ec4b7c  ldp q6,q5,[sp, #0x20]
7102ec4b80  ldp q16,q7,[sp]
7102ec4b84  mov x10,#0x778a
7102ec4b88  movk x10,#0xdf8c, LSL #16
7102ec4b8c  movk x10,#0xd, LSL #32
7102ec4b90  ldr w11,[x8, #0x8]
7102ec4b94  cmp w11,#0x1
7102ec4b98  b.hi 0x7102ec4bac
7102ec4b9c  ldr x21,[x8]
7102ec4ba0  ldr x11,[x21, #0x68]
7102ec4ba4  cmp x11,x10
7102ec4ba8  b.eq 0x7102ec4cd4
7102ec4bac  add x8,x8,#0x10
7102ec4bb0  cmp x9,x8
7102ec4bb4  b.ne 0x7102ec4b90
7102ec4bb8  b 0x7102ec4bc4
7102ec4bbc  ldp q6,q5,[sp, #0x20]
7102ec4bc0  ldp q16,q7,[sp]
7102ec4bc4  mov x21,xzr
7102ec4bc8  mov w8,#0x1
7102ec4bcc  mov v0.16B,v5.16B
7102ec4bd0  mov v1.16B,v6.16B
7102ec4bd4  mov v3.16B,v7.16B
7102ec4bd8  mov v2.16B,v16.16B
7102ec4bdc  ext v4.16B,v2.16B,v2.16B,0x8
7102ec4be0  mov v4.S[0x1],v17.S[0x0]
7102ec4be4  stp q3,q2,[x19, #0x150]
7102ec4be8  mov v3.16B,v5.16B
7102ec4bec  stp q1,q0,[x19, #0x130]
7102ec4bf0  mov v1.16B,v7.16B
7102ec4bf4  mov v2.D[0x1],v4.D[0x0]
7102ec4bf8  mov v0.16B,v16.16B
7102ec4bfc  str q2,[x19, #0x170]
7102ec4c00  mov v2.16B,v6.16B
7102ec4c04  tbnz w8,#0x0,0x7102ec4d94
7102ec4c08  ldr x8,[x21, #0xd8]
7102ec4c0c  cbz x8,0x7102ec4d0c
7102ec4c10  ldr x8,[x8, #0x8]
7102ec4c14  ldr x0,[x8, #0x8]
7102ec4c18  ldr x8,[x0]
7102ec4c1c  ldr x8,[x8, #0x18]
7102ec4c20  adrp x1,0x7104431000
7102ec4c24  add x1,x1,#0x43a
7102ec4c28  blr x8
7102ec4c2c  mov w20,w0
7102ec4c30  ldr x8,[x21, #0xd8]
7102ec4c34  cbnz x8,0x7102ec4d18
7102ec4c38  b 0x7102ec4d5c
7102ec4c3c  str x8,[x19, #0x18]
7102ec4c40  cbz x8,0x7102ec4c94
7102ec4c44  add x0,x8,#0x108
7102ec4c48  strb wzr,[x8, #0x110]
7102ec4c4c  bl 0x71025e9d50
7102ec4c50  ldr x8,[x19, #0x18]
7102ec4c54  cbz x8,0x7102ec4dc8
7102ec4c58  ldrb w9,[x8, #0xe0]
7102ec4c5c  cbz w9,0x7102ec4c70
7102ec4c60  ldr x9,[x8, #0xc8]
7102ec4c64  cbz x9,0x7102ec4c70
7102ec4c68  mov w10,#0x101
7102ec4c6c  strh w10,[x9, #0x30]
7102ec4c70  ldr x9,[x8, #0xd8]
7102ec4c74  cbz x9,0x7102ec4c80
7102ec4c78  mov w10,#0x1
7102ec4c7c  strb w10,[x9, #0x21]
7102ec4c80  ldrb w9,[x8, #0xe0]
7102ec4c84  cbz w9,0x7102ec4c90
7102ec4c88  ldr x8,[x8, #0xb0]
7102ec4c8c  strb wzr,[x8, #0x10]
7102ec4c90  ldr x8,[x19, #0x18]
7102ec4c94  cbz x8,0x7102ec4dc8
7102ec4c98  ldrb w9,[x8, #0xe0]
7102ec4c9c  cbz w9,0x7102ec4cac
7102ec4ca0  ldr x9,[x8, #0xc8]
7102ec4ca4  cbz x9,0x7102ec4cac
7102ec4ca8  strh wzr,[x9, #0x32]
7102ec4cac  ldr x8,[x8, #0xd8]
7102ec4cb0  cbz x8,0x7102ec4cb8
7102ec4cb4  strb wzr,[x8, #0x22]
7102ec4cb8  ldr x8,[x19, #0x18]
7102ec4cbc  cbz x8,0x7102ec4dc8
7102ec4cc0  ldrb w9,[x8, #0x118]
7102ec4cc4  orr w9,w9,#0x1
7102ec4cc8  strb w9,[x8, #0x118]
7102ec4ccc  ldr x0,[x19, #0x18]
7102ec4cd0  b 0x7102ec4b20
7102ec4cd4  cbz x21,0x7102ec4bc8
7102ec4cd8  ldr x8,[x21, #0xd8]
7102ec4cdc  cbz x8,0x7102ec4dd0
7102ec4ce0  ldr x8,[x8, #0x8]
7102ec4ce4  ldr x0,[x8, #0x8]
7102ec4ce8  ldr x8,[x0]
7102ec4cec  ldr x8,[x8, #0x18]
7102ec4cf0  adrp x1,0x710437a000
7102ec4cf4  add x1,x1,#0xa9d
7102ec4cf8  blr x8
7102ec4cfc  mov w20,w0
7102ec4d00  ldr x8,[x21, #0xd8]
7102ec4d04  cbnz x8,0x7102ec4ddc
7102ec4d08  b 0x7102ec4e20
7102ec4d0c  mov w20,#0xffffffff
7102ec4d10  ldr x8,[x21, #0xd8]
7102ec4d14  cbz x8,0x7102ec4d5c
7102ec4d18  ldr x8,[x8, #0x8]
7102ec4d1c  ldr x0,[x8, #0x8]
7102ec4d20  ldr x8,[x0]
7102ec4d24  ldr x8,[x8, #0x10]
7102ec4d28  blr x8
7102ec4d2c  cmp w0,w20
7102ec4d30  b.ls 0x7102ec4d5c
7102ec4d34  ldr x8,[x21, #0xd8]
7102ec4d38  ldr x8,[x8, #0x8]
7102ec4d3c  ldr x0,[x8, #0x48]
7102ec4d40  ldr x8,[x0]
7102ec4d44  ldr x8,[x8, #0x38]
7102ec4d48  mov w1,wzr
7102ec4d4c  blr x8
7102ec4d50  mov w8,w20
7102ec4d54  add x0,x1,x8, LSL #0x6
7102ec4d58  b 0x7102ec4d6c
7102ec4d5c  ldr x0,[x21, #0x90]
7102ec4d60  ldr x8,[x0]
7102ec4d64  ldr x8,[x8, #0x158]
7102ec4d68  blr x8
7102ec4d6c  add x8,x0,#0x10
7102ec4d70  add x9,x0,#0x20
7102ec4d74  add x10,x0,#0x30
7102ec4d78  ldp q6,q5,[sp, #0x20]
7102ec4d7c  ldp q16,q7,[sp]
7102ec4d80  ldr q1,[x9]
7102ec4d84  fmov s17,wzr
7102ec4d88  ldr q2,[x0]
7102ec4d8c  ldr q3,[x8]
7102ec4d90  ldr q0,[x10]
7102ec4d94  ext v4.16B,v0.16B,v0.16B,0x8
7102ec4d98  mov v4.S[0x1],v17.S[0x0]
7102ec4d9c  stp q1,q0,[x19, #0x1a0]
7102ec4da0  stp q2,q3,[x19, #0x180]
7102ec4da4  mov v0.D[0x1],v4.D[0x0]
7102ec4da8  stp q6,q5,[x19, #0xf0]
7102ec4dac  stp q7,q16,[x19, #0x110]
7102ec4db0  ldr x21,[sp, #0x40]
7102ec4db4  str q0,[x19, #0x1c0]
7102ec4db8  ldp x29,x30,[sp, #0x60]
7102ec4dbc  ldp x20,x19,[sp, #0x50]
7102ec4dc0  add sp,sp,#0x70
7102ec4dc4  ret
7102ec4dc8  mov x0,xzr
7102ec4dcc  b 0x7102ec4b20
7102ec4dd0  mov w20,#0xffffffff
7102ec4dd4  ldr x8,[x21, #0xd8]
7102ec4dd8  cbz x8,0x7102ec4e20
7102ec4ddc  ldr x8,[x8, #0x8]
7102ec4de0  ldr x0,[x8, #0x8]
7102ec4de4  ldr x8,[x0]
7102ec4de8  ldr x8,[x8, #0x10]
7102ec4dec  blr x8
7102ec4df0  cmp w0,w20
7102ec4df4  b.ls 0x7102ec4e20
7102ec4df8  ldr x8,[x21, #0xd8]
7102ec4dfc  ldr x8,[x8, #0x8]
7102ec4e00  ldr x0,[x8, #0x48]
7102ec4e04  ldr x8,[x0]
7102ec4e08  ldr x8,[x8, #0x38]
7102ec4e0c  mov w1,wzr
7102ec4e10  blr x8
7102ec4e14  mov w8,w20
7102ec4e18  add x0,x1,x8, LSL #0x6
7102ec4e1c  b 0x7102ec4e30
7102ec4e20  ldr x0,[x21, #0x90]
7102ec4e24  ldr x8,[x0]
7102ec4e28  ldr x8,[x8, #0x158]
7102ec4e2c  blr x8
7102ec4e30  add x9,x0,#0x10
7102ec4e34  add x10,x0,#0x20
7102ec4e38  add x11,x0,#0x30
7102ec4e3c  ldp q6,q5,[sp, #0x20]
7102ec4e40  ldp q16,q7,[sp]
7102ec4e44  ldr q3,[x10]
7102ec4e48  fmov s17,wzr
7102ec4e4c  mov w8,wzr
7102ec4e50  ldr q1,[x0]
7102ec4e54  ldr q0,[x9]
7102ec4e58  ldr q2,[x11]
7102ec4e5c  b 0x7102ec4bdc
