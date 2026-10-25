// addr:      7102ec68f0
// offset:    0x2ec68f0
// name:      FUN_7102ec68f0
// mangled:   
// size:      1160

7102ec68f0  sub sp,sp,#0x70
7102ec68f4  str x21,[sp, #0x40]
7102ec68f8  stp x20,x19,[sp, #0x50]
7102ec68fc  stp x29,x30,[sp, #0x60]
7102ec6900  add x29,sp,#0x60
7102ec6904  adrp x8,0x7105147000
7102ec6908  add x8,x8,#0xf08
7102ec690c  adrp x9,0x7104468000
7102ec6910  stp x2,xzr,[x0, #0x10]
7102ec6914  adrp x10,0x710446a000
7102ec6918  stp x8,x1,[x0]
7102ec691c  ldr x8,[x1, #0x338]
7102ec6920  str w3,[x0, #0x28]
7102ec6924  ldr q2,[x9, #0xca0]
7102ec6928  ldr q1,[x10, #0x360]
7102ec692c  stp xzr,xzr,[x0, #0x170]
7102ec6930  mov x19,x0
7102ec6934  stur xzr,[x0, #0x32]
7102ec6938  stur xzr,[x0, #0x2c]
7102ec693c  str xzr,[x0, #0x90]
7102ec6940  str x8,[x0, #0x20]
7102ec6944  adrp x8,0x7104465000
7102ec6948  ldr q3,[x8, #0x6b0]
7102ec694c  adrp x8,0x710446a000
7102ec6950  ldr q4,[x8, #0x350]
7102ec6954  adrp x8,0x71052a8000
7102ec6958  str xzr,[x0, #0x40]
7102ec695c  str wzr,[x0, #0xe0]
7102ec6960  strb wzr,[x0, #0x1d0]
7102ec6964  strh wzr,[x0, #0x260]
7102ec6968  str xzr,[x0, #0x258]
7102ec696c  str xzr,[x0, #0x250]
7102ec6970  str xzr,[x0, #0x248]
7102ec6974  str xzr,[x0, #0x240]
7102ec6978  str xzr,[x0, #0x238]
7102ec697c  str xzr,[x0, #0x230]
7102ec6980  str xzr,[x0, #0x228]
7102ec6984  str xzr,[x0, #0x220]
7102ec6988  str xzr,[x0, #0x218]
7102ec698c  str xzr,[x0, #0x210]
7102ec6990  str xzr,[x0, #0x208]
7102ec6994  stp xzr,xzr,[x0, #0x1c0]
7102ec6998  stp xzr,xzr,[x0, #0x1f8]
7102ec699c  stp xzr,xzr,[x0, #0x1e8]
7102ec69a0  stp xzr,xzr,[x0, #0x1d8]
7102ec69a4  stp q2,q1,[x0, #0x50]
7102ec69a8  stp q3,q4,[x0, #0x70]
7102ec69ac  stp q2,q1,[x0, #0xa0]
7102ec69b0  stp q3,q4,[x0, #0xc0]
7102ec69b4  stp q2,q1,[x0, #0xf0]
7102ec69b8  stp q3,q4,[x0, #0x110]
7102ec69bc  stp q2,q1,[x0, #0x130]
7102ec69c0  stp q3,q4,[x0, #0x150]
7102ec69c4  stp q2,q1,[x0, #0x180]
7102ec69c8  stp q3,q4,[x0, #0x1a0]
7102ec69cc  ldr x8,[x8, #0xa88]
7102ec69d0  ldr q0,[x8]
7102ec69d4  str wzr,[x0, #0x2d0]
7102ec69d8  stp q0,q0,[x0, #0x270]
7102ec69dc  stp q2,q1,[x0, #0x290]
7102ec69e0  stp q3,q4,[x0, #0x2b0]
7102ec69e4  ldr x8,[x1, #0x310]
7102ec69e8  ldp x9,x10,[x8, #0xd0]
7102ec69ec  cmp x9,x10
7102ec69f0  stp q2,q1,[sp, #0x20]
7102ec69f4  stp q4,q3,[sp]
7102ec69f8  b.eq 0x7102ec6a30
7102ec69fc  mov x11,#0x33eb
7102ec6a00  movk x11,#0xb759, LSL #16
7102ec6a04  movk x11,#0x11, LSL #32
7102ec6a08  ldr w8,[x9, #0x8]
7102ec6a0c  cmp w8,#0x1
7102ec6a10  b.hi 0x7102ec6a24
7102ec6a14  ldr x8,[x9]
7102ec6a18  ldr x12,[x8, #0x68]
7102ec6a1c  cmp x12,x11
7102ec6a20  b.eq 0x7102ec6b54
7102ec6a24  add x9,x9,#0x10
7102ec6a28  cmp x10,x9
7102ec6a2c  b.ne 0x7102ec6a08
7102ec6a30  mov x0,xzr
7102ec6a34  str xzr,[x19, #0x18]
7102ec6a38  fmov s0,wzr
7102ec6a3c  mov w1,#0x1
7102ec6a40  bl 0x710260fdd0
7102ec6a44  ldr x20,[x19, #0x18]
7102ec6a48  cbz x20,0x7102ec6a7c
7102ec6a4c  ldr x8,[x20, #0xd8]
7102ec6a50  cbnz x8,0x7102ec6a7c
7102ec6a54  add x0,x20,#0x90
7102ec6a58  mov x1,xzr
7102ec6a5c  bl 0x71026533a0
7102ec6a60  mov x8,x0
7102ec6a64  ldr x0,[x20, #0xd8]
7102ec6a68  str x8,[x20, #0xd8]
7102ec6a6c  cbz x0,0x7102ec6a7c
7102ec6a70  ldr x8,[x0]
7102ec6a74  ldr x8,[x8, #0x8]
7102ec6a78  blr x8
7102ec6a7c  ldr x8,[x19, #0x8]
7102ec6a80  ldr x9,[x8, #0x310]
7102ec6a84  fmov s17,wzr
7102ec6a88  ldp x8,x9,[x9, #0xd0]
7102ec6a8c  cmp x8,x9
7102ec6a90  b.eq 0x7102ec6ad4
7102ec6a94  ldp q6,q5,[sp, #0x20]
7102ec6a98  ldp q16,q7,[sp]
7102ec6a9c  mov x10,#0x778a
7102ec6aa0  movk x10,#0xdf8c, LSL #16
7102ec6aa4  movk x10,#0xd, LSL #32
7102ec6aa8  ldr w11,[x8, #0x8]
7102ec6aac  cmp w11,#0x1
7102ec6ab0  b.hi 0x7102ec6ac4
7102ec6ab4  ldr x21,[x8]
7102ec6ab8  ldr x11,[x21, #0x68]
7102ec6abc  cmp x11,x10
7102ec6ac0  b.eq 0x7102ec6bec
7102ec6ac4  add x8,x8,#0x10
7102ec6ac8  cmp x9,x8
7102ec6acc  b.ne 0x7102ec6aa8
7102ec6ad0  b 0x7102ec6adc
7102ec6ad4  ldp q6,q5,[sp, #0x20]
7102ec6ad8  ldp q16,q7,[sp]
7102ec6adc  mov x21,xzr
7102ec6ae0  mov w8,#0x1
7102ec6ae4  mov v0.16B,v5.16B
7102ec6ae8  mov v1.16B,v6.16B
7102ec6aec  mov v3.16B,v7.16B
7102ec6af0  mov v2.16B,v16.16B
7102ec6af4  ext v4.16B,v2.16B,v2.16B,0x8
7102ec6af8  mov v4.S[0x1],v17.S[0x0]
7102ec6afc  stp q3,q2,[x19, #0x150]
7102ec6b00  mov v3.16B,v5.16B
7102ec6b04  stp q1,q0,[x19, #0x130]
7102ec6b08  mov v1.16B,v7.16B
7102ec6b0c  mov v2.D[0x1],v4.D[0x0]
7102ec6b10  mov v0.16B,v16.16B
7102ec6b14  str q2,[x19, #0x170]
7102ec6b18  mov v2.16B,v6.16B
7102ec6b1c  tbnz w8,#0x0,0x7102ec6cac
7102ec6b20  ldr x8,[x21, #0xd8]
7102ec6b24  cbz x8,0x7102ec6c24
7102ec6b28  ldr x8,[x8, #0x8]
7102ec6b2c  ldr x0,[x8, #0x8]
7102ec6b30  ldr x8,[x0]
7102ec6b34  ldr x8,[x8, #0x18]
7102ec6b38  adrp x1,0x710426e000
7102ec6b3c  add x1,x1,#0x259
7102ec6b40  blr x8
7102ec6b44  mov w20,w0
7102ec6b48  ldr x8,[x21, #0xd8]
7102ec6b4c  cbnz x8,0x7102ec6c30
7102ec6b50  b 0x7102ec6c74
7102ec6b54  str x8,[x19, #0x18]
7102ec6b58  cbz x8,0x7102ec6bac
7102ec6b5c  add x0,x8,#0x108
7102ec6b60  strb wzr,[x8, #0x110]
7102ec6b64  bl 0x71025e9d50
7102ec6b68  ldr x8,[x19, #0x18]
7102ec6b6c  cbz x8,0x7102ec6ce0
7102ec6b70  ldrb w9,[x8, #0xe0]
7102ec6b74  cbz w9,0x7102ec6b88
7102ec6b78  ldr x9,[x8, #0xc8]
7102ec6b7c  cbz x9,0x7102ec6b88
7102ec6b80  mov w10,#0x101
7102ec6b84  strh w10,[x9, #0x30]
7102ec6b88  ldr x9,[x8, #0xd8]
7102ec6b8c  cbz x9,0x7102ec6b98
7102ec6b90  mov w10,#0x1
7102ec6b94  strb w10,[x9, #0x21]
7102ec6b98  ldrb w9,[x8, #0xe0]
7102ec6b9c  cbz w9,0x7102ec6ba8
7102ec6ba0  ldr x8,[x8, #0xb0]
7102ec6ba4  strb wzr,[x8, #0x10]
7102ec6ba8  ldr x8,[x19, #0x18]
7102ec6bac  cbz x8,0x7102ec6ce0
7102ec6bb0  ldrb w9,[x8, #0xe0]
7102ec6bb4  cbz w9,0x7102ec6bc4
7102ec6bb8  ldr x9,[x8, #0xc8]
7102ec6bbc  cbz x9,0x7102ec6bc4
7102ec6bc0  strh wzr,[x9, #0x32]
7102ec6bc4  ldr x8,[x8, #0xd8]
7102ec6bc8  cbz x8,0x7102ec6bd0
7102ec6bcc  strb wzr,[x8, #0x22]
7102ec6bd0  ldr x8,[x19, #0x18]
7102ec6bd4  cbz x8,0x7102ec6ce0
7102ec6bd8  ldrb w9,[x8, #0x118]
7102ec6bdc  orr w9,w9,#0x1
7102ec6be0  strb w9,[x8, #0x118]
7102ec6be4  ldr x0,[x19, #0x18]
7102ec6be8  b 0x7102ec6a38
7102ec6bec  cbz x21,0x7102ec6ae0
7102ec6bf0  ldr x8,[x21, #0xd8]
7102ec6bf4  cbz x8,0x7102ec6ce8
7102ec6bf8  ldr x8,[x8, #0x8]
7102ec6bfc  ldr x0,[x8, #0x8]
7102ec6c00  ldr x8,[x0]
7102ec6c04  ldr x8,[x8, #0x18]
7102ec6c08  adrp x1,0x710428f000
7102ec6c0c  add x1,x1,#0xc0b
7102ec6c10  blr x8
7102ec6c14  mov w20,w0
7102ec6c18  ldr x8,[x21, #0xd8]
7102ec6c1c  cbnz x8,0x7102ec6cf4
7102ec6c20  b 0x7102ec6d38
7102ec6c24  mov w20,#0xffffffff
7102ec6c28  ldr x8,[x21, #0xd8]
7102ec6c2c  cbz x8,0x7102ec6c74
7102ec6c30  ldr x8,[x8, #0x8]
7102ec6c34  ldr x0,[x8, #0x8]
7102ec6c38  ldr x8,[x0]
7102ec6c3c  ldr x8,[x8, #0x10]
7102ec6c40  blr x8
7102ec6c44  cmp w0,w20
7102ec6c48  b.ls 0x7102ec6c74
7102ec6c4c  ldr x8,[x21, #0xd8]
7102ec6c50  ldr x8,[x8, #0x8]
7102ec6c54  ldr x0,[x8, #0x48]
7102ec6c58  ldr x8,[x0]
7102ec6c5c  ldr x8,[x8, #0x38]
7102ec6c60  mov w1,wzr
7102ec6c64  blr x8
7102ec6c68  mov w8,w20
7102ec6c6c  add x0,x1,x8, LSL #0x6
7102ec6c70  b 0x7102ec6c84
7102ec6c74  ldr x0,[x21, #0x90]
7102ec6c78  ldr x8,[x0]
7102ec6c7c  ldr x8,[x8, #0x158]
7102ec6c80  blr x8
7102ec6c84  add x8,x0,#0x10
7102ec6c88  add x9,x0,#0x20
7102ec6c8c  add x10,x0,#0x30
7102ec6c90  ldp q6,q5,[sp, #0x20]
7102ec6c94  ldp q16,q7,[sp]
7102ec6c98  ldr q1,[x9]
7102ec6c9c  fmov s17,wzr
7102ec6ca0  ldr q2,[x0]
7102ec6ca4  ldr q3,[x8]
7102ec6ca8  ldr q0,[x10]
7102ec6cac  ext v4.16B,v0.16B,v0.16B,0x8
7102ec6cb0  mov v4.S[0x1],v17.S[0x0]
7102ec6cb4  stp q1,q0,[x19, #0x1a0]
7102ec6cb8  stp q2,q3,[x19, #0x180]
7102ec6cbc  mov v0.D[0x1],v4.D[0x0]
7102ec6cc0  stp q6,q5,[x19, #0xf0]
7102ec6cc4  stp q7,q16,[x19, #0x110]
7102ec6cc8  ldr x21,[sp, #0x40]
7102ec6ccc  str q0,[x19, #0x1c0]
7102ec6cd0  ldp x29,x30,[sp, #0x60]
7102ec6cd4  ldp x20,x19,[sp, #0x50]
7102ec6cd8  add sp,sp,#0x70
7102ec6cdc  ret
7102ec6ce0  mov x0,xzr
7102ec6ce4  b 0x7102ec6a38
7102ec6ce8  mov w20,#0xffffffff
7102ec6cec  ldr x8,[x21, #0xd8]
7102ec6cf0  cbz x8,0x7102ec6d38
7102ec6cf4  ldr x8,[x8, #0x8]
7102ec6cf8  ldr x0,[x8, #0x8]
7102ec6cfc  ldr x8,[x0]
7102ec6d00  ldr x8,[x8, #0x10]
7102ec6d04  blr x8
7102ec6d08  cmp w0,w20
7102ec6d0c  b.ls 0x7102ec6d38
7102ec6d10  ldr x8,[x21, #0xd8]
7102ec6d14  ldr x8,[x8, #0x8]
7102ec6d18  ldr x0,[x8, #0x48]
7102ec6d1c  ldr x8,[x0]
7102ec6d20  ldr x8,[x8, #0x38]
7102ec6d24  mov w1,wzr
7102ec6d28  blr x8
7102ec6d2c  mov w8,w20
7102ec6d30  add x0,x1,x8, LSL #0x6
7102ec6d34  b 0x7102ec6d48
7102ec6d38  ldr x0,[x21, #0x90]
7102ec6d3c  ldr x8,[x0]
7102ec6d40  ldr x8,[x8, #0x158]
7102ec6d44  blr x8
7102ec6d48  add x9,x0,#0x10
7102ec6d4c  add x10,x0,#0x20
7102ec6d50  add x11,x0,#0x30
7102ec6d54  ldp q6,q5,[sp, #0x20]
7102ec6d58  ldp q16,q7,[sp]
7102ec6d5c  ldr q3,[x10]
7102ec6d60  fmov s17,wzr
7102ec6d64  mov w8,wzr
7102ec6d68  ldr q1,[x0]
7102ec6d6c  ldr q0,[x9]
7102ec6d70  ldr q2,[x11]
7102ec6d74  b 0x7102ec6af4
