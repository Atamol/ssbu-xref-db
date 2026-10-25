// addr:      7102ab2890
// offset:    0x2ab2890
// name:      FUN_7102ab2890
// mangled:   
// size:      11428

7102ab2890  stp x28,x27,[sp, #-0x60]!
7102ab2894  stp x26,x25,[sp, #0x10]
7102ab2898  stp x24,x23,[sp, #0x20]
7102ab289c  stp x22,x21,[sp, #0x30]
7102ab28a0  stp x20,x19,[sp, #0x40]
7102ab28a4  stp x29,x30,[sp, #0x50]
7102ab28a8  add x29,sp,#0x50
7102ab28ac  sub sp,sp,#0x1d0
7102ab28b0  ldr x28,[x0, #0x338]
7102ab28b4  mov x19,x0
7102ab28b8  mov w1,#0x440
7102ab28bc  mov w0,#0x10
7102ab28c0  bl 0x710392e290
7102ab28c4  mov x20,x0
7102ab28c8  cbnz x0,0x7102ab2914
7102ab28cc  adrp x8,0x7105332000
7102ab28d0  ldr x0,[x8, #0xf00]
7102ab28d4  cbz x0,0x7102ab2910
7102ab28d8  mov w8,#0x440
7102ab28dc  str wzr,[sp, #0x70]
7102ab28e0  add x1,sp,#0x70
7102ab28e4  str x8,[sp, #0xa0]
7102ab28e8  ldr x8,[x0]
7102ab28ec  ldr x8,[x8, #0x30]
7102ab28f0  add x2,sp,#0xa0
7102ab28f4  blr x8
7102ab28f8  tbz w0,#0x0,0x7102ab2910
7102ab28fc  mov w1,#0x440
7102ab2900  mov w0,#0x10
7102ab2904  bl 0x710392e290
7102ab2908  mov x20,x0
7102ab290c  cbnz x0,0x7102ab2914
7102ab2910  mov x20,xzr
7102ab2914  adrp x8,0x7104468000
7102ab2918  adrp x9,0x7104465000
7102ab291c  ldr q0,[x8, #0xca0]
7102ab2920  adrp x8,0x710446a000
7102ab2924  ldr q2,[x9, #0x6b0]
7102ab2928  adrp x9,0x710446a000
7102ab292c  ldr q1,[x8, #0x360]
7102ab2930  ldr q3,[x9, #0x350]
7102ab2934  mov x27,x20
7102ab2938  mov x26,x20
7102ab293c  mov x0,x20
7102ab2940  adrp x10,0x710517b000
7102ab2944  add x10,x10,#0x340
7102ab2948  mov w8,#0xffffffff
7102ab294c  mov x21,x20
7102ab2950  str xzr,[x27, #0x8]!
7102ab2954  str xzr,[x26, #0x10]!
7102ab2958  str x10,[x0, #0x30]!
7102ab295c  stp xzr,xzr,[x20, #0x18]
7102ab2960  str xzr,[x20]
7102ab2964  stp q0,q1,[x20, #0x50]
7102ab2968  str xzr,[x20, #0x38]
7102ab296c  stp q2,q3,[x20, #0x70]
7102ab2970  add x9,x20,#0x3fc
7102ab2974  str w8,[x20, #0x40]
7102ab2978  strb wzr,[x20, #0x90]
7102ab297c  str x10,[x21, #0xa0]!
7102ab2980  str xzr,[x20, #0xa8]
7102ab2984  str w8,[x20, #0xb0]
7102ab2988  strb wzr,[x20, #0x100]
7102ab298c  str w8,[x20, #0x120]
7102ab2990  strb wzr,[x20, #0x170]
7102ab2994  str w8,[x20, #0x190]
7102ab2998  strb wzr,[x20, #0x1e0]
7102ab299c  str w8,[x20, #0x200]
7102ab29a0  strb wzr,[x20, #0x250]
7102ab29a4  str x10,[x20, #0x260]
7102ab29a8  str xzr,[x20, #0x268]
7102ab29ac  stp x10,xzr,[x20, #0x110]
7102ab29b0  stp x10,xzr,[x20, #0x180]
7102ab29b4  stp x10,xzr,[x20, #0x1f0]
7102ab29b8  add x10,x20,#0x3f1
7102ab29bc  stp q0,q1,[x20, #0xc0]
7102ab29c0  stp q2,q3,[x20, #0xe0]
7102ab29c4  stp q0,q1,[x20, #0x130]
7102ab29c8  stp q2,q3,[x20, #0x150]
7102ab29cc  stp q0,q1,[x20, #0x1a0]
7102ab29d0  stp q2,q3,[x20, #0x1c0]
7102ab29d4  stp q0,q1,[x20, #0x210]
7102ab29d8  stp q2,q3,[x20, #0x230]
7102ab29dc  stp q1,q0,[sp, #0x50]
7102ab29e0  stp q0,q1,[x20, #0x280]
7102ab29e4  stp q3,q2,[sp, #0x30]
7102ab29e8  str w8,[x20, #0x270]
7102ab29ec  add x8,x20,#0x384
7102ab29f0  strb wzr,[x20, #0x2c0]
7102ab29f4  strh wzr,[x20, #0x380]
7102ab29f8  str wzr,[x20, #0x390]
7102ab29fc  strh wzr,[x20, #0x394]
7102ab2a00  str xzr,[x20, #0x2f8]
7102ab2a04  str xzr,[x20, #0x2f0]
7102ab2a08  str xzr,[x20, #0x2e8]
7102ab2a0c  str xzr,[x20, #0x2e0]
7102ab2a10  str xzr,[x20, #0x2d8]
7102ab2a14  str xzr,[x20, #0x2d0]
7102ab2a18  strb wzr,[x20, #0x38c]
7102ab2a1c  stp q2,q3,[x20, #0x2a0]
7102ab2a20  str xzr,[x8]
7102ab2a24  add x8,x20,#0x3cc
7102ab2a28  str x28,[x20, #0x398]
7102ab2a2c  str xzr,[x20, #0x3c0]
7102ab2a30  strb wzr,[x20, #0x3c8]
7102ab2a34  str xzr,[x20, #0x3a8]
7102ab2a38  str xzr,[x20, #0x3a0]
7102ab2a3c  strh wzr,[x20, #0x3b0]
7102ab2a40  str xzr,[x10]
7102ab2a44  add x10,x20,#0x3ec
7102ab2a48  str xzr,[x10]
7102ab2a4c  add x10,x20,#0x3e4
7102ab2a50  str xzr,[x10]
7102ab2a54  add x10,x20,#0x3dc
7102ab2a58  str xzr,[x10]
7102ab2a5c  add x10,x20,#0x3d4
7102ab2a60  str xzr,[x8]
7102ab2a64  add x8,x20,#0x41c
7102ab2a68  str xzr,[x10]
7102ab2a6c  str xzr,[x8]
7102ab2a70  add x8,x20,#0x414
7102ab2a74  str xzr,[x8]
7102ab2a78  add x8,x20,#0x40c
7102ab2a7c  str xzr,[x8]
7102ab2a80  add x8,x20,#0x404
7102ab2a84  str xzr,[x8]
7102ab2a88  str xzr,[x9]
7102ab2a8c  str x19,[x20, #0x428]
7102ab2a90  strb wzr,[x20, #0x430]
7102ab2a94  ldr x8,[x19, #0x310]
7102ab2a98  ldp x9,x10,[x8, #0xd0]
7102ab2a9c  cmp x9,x10
7102ab2aa0  str x19,[sp, #0x28]
7102ab2aa4  b.eq 0x7102ab2af0
7102ab2aa8  mov x11,#0x53aa
7102ab2aac  movk x11,#0x4aa9, LSL #16
7102ab2ab0  add x25,x20,#0x110
7102ab2ab4  add x24,x20,#0x180
7102ab2ab8  add x23,x20,#0x1f0
7102ab2abc  add x22,x20,#0x260
7102ab2ac0  add x13,x20,#0x2d0
7102ab2ac4  movk x11,#0xf, LSL #32
7102ab2ac8  ldr w8,[x9, #0x8]
7102ab2acc  cmp w8,#0x1
7102ab2ad0  b.hi 0x7102ab2ae4
7102ab2ad4  ldr x8,[x9]
7102ab2ad8  ldr x12,[x8, #0x68]
7102ab2adc  cmp x12,x11
7102ab2ae0  b.eq 0x7102ab3288
7102ab2ae4  add x9,x9,#0x10
7102ab2ae8  cmp x10,x9
7102ab2aec  b.ne 0x7102ab2ac8
7102ab2af0  str xzr,[x20]
7102ab2af4  ldr x8,[x19, #0x310]
7102ab2af8  ldp x9,x10,[x8, #0xd0]
7102ab2afc  cmp x9,x10
7102ab2b00  b.eq 0x7102ab2b38
7102ab2b04  mov x11,#0x7bf9
7102ab2b08  movk x11,#0xa8e7, LSL #16
7102ab2b0c  movk x11,#0x13, LSL #32
7102ab2b10  ldr w8,[x9, #0x8]
7102ab2b14  cmp w8,#0x1
7102ab2b18  b.hi 0x7102ab2b2c
7102ab2b1c  ldr x8,[x9]
7102ab2b20  ldr x12,[x8, #0x68]
7102ab2b24  cmp x12,x11
7102ab2b28  b.eq 0x7102ab3468
7102ab2b2c  add x9,x9,#0x10
7102ab2b30  cmp x10,x9
7102ab2b34  b.ne 0x7102ab2b10
7102ab2b38  str xzr,[x27]
7102ab2b3c  ldr x8,[x19, #0x310]
7102ab2b40  ldp x9,x10,[x8, #0xd0]
7102ab2b44  cmp x9,x10
7102ab2b48  b.eq 0x7102ab2b80
7102ab2b4c  mov x11,#0x3d49
7102ab2b50  movk x11,#0xf758, LSL #16
7102ab2b54  movk x11,#0x13, LSL #32
7102ab2b58  ldr w8,[x9, #0x8]
7102ab2b5c  cmp w8,#0x1
7102ab2b60  b.hi 0x7102ab2b74
7102ab2b64  ldr x8,[x9]
7102ab2b68  ldr x12,[x8, #0x68]
7102ab2b6c  cmp x12,x11
7102ab2b70  b.eq 0x7102ab3554
7102ab2b74  add x9,x9,#0x10
7102ab2b78  cmp x10,x9
7102ab2b7c  b.ne 0x7102ab2b58
7102ab2b80  str xzr,[x26]
7102ab2b84  ldr x8,[x19, #0x300]
7102ab2b88  ldr x8,[x8, #0x18]
7102ab2b8c  ldr x8,[x8]
7102ab2b90  mov x9,#0x49d5
7102ab2b94  movk x9,#0x7d50, LSL #16
7102ab2b98  movk x9,#0xa, LSL #32
7102ab2b9c  b 0x7102ab2ba4
7102ab2ba0  add x8,x8,#0x8
7102ab2ba4  ldr x10,[x8]
7102ab2ba8  ldr x11,[x10, #0xa0]
7102ab2bac  and x11,x11,#0xffffffffff
7102ab2bb0  cmp x11,x9
7102ab2bb4  b.ne 0x7102ab2ba0
7102ab2bb8  ldr x8,[x10, #0x110]
7102ab2bbc  str x8,[x20, #0x18]
7102ab2bc0  mov w2,#0x1
7102ab2bc4  ldp x0,x1,[x8]
7102ab2bc8  bl 0x71025f4d80
7102ab2bcc  ldr x8,[x19, #0x300]
7102ab2bd0  ldr x8,[x8, #0x18]
7102ab2bd4  ldr x8,[x8]
7102ab2bd8  mov x9,#0x186f
7102ab2bdc  movk x9,#0xe459, LSL #16
7102ab2be0  movk x9,#0xa, LSL #32
7102ab2be4  b 0x7102ab2bec
7102ab2be8  add x8,x8,#0x8
7102ab2bec  ldr x10,[x8]
7102ab2bf0  ldr x11,[x10, #0xa0]
7102ab2bf4  and x11,x11,#0xffffffffff
7102ab2bf8  cmp x11,x9
7102ab2bfc  b.ne 0x7102ab2be8
7102ab2c00  ldr x8,[x10, #0x110]
7102ab2c04  str x8,[x20, #0x20]
7102ab2c08  mov w2,#0x1
7102ab2c0c  ldp x0,x1,[x8]
7102ab2c10  bl 0x71025f4d80
7102ab2c14  ldr x8,[x19, #0x320]
7102ab2c18  ldr x8,[x8, #0x48]
7102ab2c1c  ldr x8,[x8, #0x320]
7102ab2c20  ldr x9,[x8, #0x40]
7102ab2c24  ldp x8,x10,[x9]
7102ab2c28  mov x25,#0x6db7
7102ab2c2c  movk x25,#0xb6db, LSL #16
7102ab2c30  movk x25,#0xdb6d, LSL #32
7102ab2c34  movk x25,#0x6db6, LSL #48
7102ab2c38  subs x9,x10,x8
7102ab2c3c  b.eq 0x7102ab2ca4
7102ab2c40  asr x9,x9,#0x4
7102ab2c44  mul x9,x9,x25
7102ab2c48  cmp x8,x10
7102ab2c4c  b.eq 0x7102ab2c8c
7102ab2c50  mov x12,#0xa4db
7102ab2c54  movk x12,#0x9ed8, LSL #16
7102ab2c58  movk x12,#0x12, LSL #32
7102ab2c5c  mov x11,x8
7102ab2c60  ldr w13,[x11]
7102ab2c64  cbnz w13,0x7102ab2c78
7102ab2c68  ldr x13,[x11, #0x8]
7102ab2c6c  and x13,x13,#0xffffffffff
7102ab2c70  cmp x13,x12
7102ab2c74  b.eq 0x7102ab2c90
7102ab2c78  add x11,x11,#0x70
7102ab2c7c  cmp x10,x11
7102ab2c80  b.ne 0x7102ab2c60
7102ab2c84  mov x11,x10
7102ab2c88  b 0x7102ab2c90
7102ab2c8c  mov x11,x8
7102ab2c90  sub x8,x11,x8
7102ab2c94  asr x8,x8,#0x4
7102ab2c98  mul x8,x8,x25
7102ab2c9c  cmp x8,x9
7102ab2ca0  b.cc 0x7102ab2ca8
7102ab2ca4  mov w8,#0xffffffff
7102ab2ca8  str w8,[x20, #0x390]
7102ab2cac  str x28,[x20, #0x3c0]
7102ab2cb0  str xzr,[sp, #0xa0]
7102ab2cb4  ldr x8,[x28]
7102ab2cb8  ldr x0,[x8, #0x8]
7102ab2cbc  cbz x0,0x7102ab2cd0
7102ab2cc0  add x1,sp,#0xa0
7102ab2cc4  mov w2,wzr
7102ab2cc8  bl 0x7102405040
7102ab2ccc  b 0x7102ab2cd4
7102ab2cd0  mov w0,#0xffffffff
7102ab2cd4  mov x8,#0xb
7102ab2cd8  movk x8,#0xc, LSL #32
7102ab2cdc  str w0,[x20, #0x3cc]
7102ab2ce0  str wzr,[x20, #0x3e8]
7102ab2ce4  str x28,[x20, #0x3f0]
7102ab2ce8  mov w23,#0xffffffff
7102ab2cec  str x8,[x20, #0x3e0]
7102ab2cf0  str xzr,[sp, #0xa0]
7102ab2cf4  ldr x8,[x28]
7102ab2cf8  ldr x0,[x8, #0x8]
7102ab2cfc  cbz x0,0x7102ab2d10
7102ab2d00  add x1,sp,#0xa0
7102ab2d04  mov w2,wzr
7102ab2d08  bl 0x7102405040
7102ab2d0c  b 0x7102ab2d14
7102ab2d10  mov w0,w23
7102ab2d14  mov x8,#0x13
7102ab2d18  movk x8,#0x14, LSL #32
7102ab2d1c  str x8,[x20, #0x410]
7102ab2d20  ldr x8,[x20, #0x428]
7102ab2d24  str w0,[x20, #0x3fc]
7102ab2d28  str wzr,[x20, #0x418]
7102ab2d2c  ldrb w8,[x8, #0x54]
7102ab2d30  adrp x28,0x710517b000
7102ab2d34  add x28,x28,#0x340
7102ab2d38  cmp w8,#0x1
7102ab2d3c  strb w8,[x20, #0x430]
7102ab2d40  b.ne 0x7102ab2eb8
7102ab2d44  ldr x8,[x20, #0x18]
7102ab2d48  ldp x19,x21,[x8]
7102ab2d4c  cmp x19,x21
7102ab2d50  b.eq 0x7102ab2d88
7102ab2d54  mov w22,#0x1
7102ab2d58  mov x24,#-0x1
7102ab2d5c  ldr x8,[x19]
7102ab2d60  ldr x9,[x8, #0x8]
7102ab2d64  strb w22,[x8, #0x128]
7102ab2d68  cbz x9,0x7102ab2d7c
7102ab2d6c  str x24,[x9, #0xd8]
7102ab2d70  ldr x0,[x8, #0x8]
7102ab2d74  mov w1,wzr
7102ab2d78  bl 0x7100532bc0
7102ab2d7c  add x19,x19,#0x8
7102ab2d80  cmp x21,x19
7102ab2d84  b.ne 0x7102ab2d5c
7102ab2d88  ldr x8,[x20, #0x20]
7102ab2d8c  ldp x19,x21,[x8]
7102ab2d90  cmp x19,x21
7102ab2d94  b.eq 0x7102ab2dcc
7102ab2d98  mov w22,#0x1
7102ab2d9c  mov x24,#-0x1
7102ab2da0  ldr x8,[x19]
7102ab2da4  ldr x9,[x8, #0x8]
7102ab2da8  strb w22,[x8, #0x128]
7102ab2dac  cbz x9,0x7102ab2dc0
7102ab2db0  str x24,[x9, #0xd8]
7102ab2db4  ldr x0,[x8, #0x8]
7102ab2db8  mov w1,wzr
7102ab2dbc  bl 0x7100532bc0
7102ab2dc0  add x19,x19,#0x8
7102ab2dc4  cmp x21,x19
7102ab2dc8  b.ne 0x7102ab2da0
7102ab2dcc  adrp x8,0x7104473000
7102ab2dd0  ldr s0,[x8, #0x334]
7102ab2dd4  mov x0,x20
7102ab2dd8  mov w1,wzr
7102ab2ddc  bl 0x7102abb730
7102ab2de0  ldr x8,[x20]
7102ab2de4  ldr x19,[sp, #0x28]
7102ab2de8  cbz x8,0x7102ab2e24
7102ab2dec  ldrb w9,[x8, #0xe0]
7102ab2df0  cbz w9,0x7102ab2e04
7102ab2df4  ldr x9,[x8, #0xc8]
7102ab2df8  cbz x9,0x7102ab2e04
7102ab2dfc  mov w10,#0x101
7102ab2e00  strh w10,[x9, #0x30]
7102ab2e04  ldr x9,[x8, #0xd8]
7102ab2e08  cbz x9,0x7102ab2e14
7102ab2e0c  mov w10,#0x1
7102ab2e10  strb w10,[x9, #0x21]
7102ab2e14  ldrb w9,[x8, #0xe0]
7102ab2e18  cbz w9,0x7102ab2e24
7102ab2e1c  ldr x8,[x8, #0xb0]
7102ab2e20  strb wzr,[x8, #0x10]
7102ab2e24  ldr x8,[x27]
7102ab2e28  cbz x8,0x7102ab2e64
7102ab2e2c  ldrb w9,[x8, #0xe0]
7102ab2e30  cbz w9,0x7102ab2e44
7102ab2e34  ldr x9,[x8, #0xc8]
7102ab2e38  cbz x9,0x7102ab2e44
7102ab2e3c  mov w10,#0x101
7102ab2e40  strh w10,[x9, #0x30]
7102ab2e44  ldr x9,[x8, #0xd8]
7102ab2e48  cbz x9,0x7102ab2e54
7102ab2e4c  mov w10,#0x1
7102ab2e50  strb w10,[x9, #0x21]
7102ab2e54  ldrb w9,[x8, #0xe0]
7102ab2e58  cbz w9,0x7102ab2e64
7102ab2e5c  ldr x8,[x8, #0xb0]
7102ab2e60  strb wzr,[x8, #0x10]
7102ab2e64  ldr x8,[x26]
7102ab2e68  cbz x8,0x7102ab2ea4
7102ab2e6c  ldrb w9,[x8, #0xe0]
7102ab2e70  cbz w9,0x7102ab2e84
7102ab2e74  ldr x9,[x8, #0xc8]
7102ab2e78  cbz x9,0x7102ab2e84
7102ab2e7c  mov w10,#0x101
7102ab2e80  strh w10,[x9, #0x30]
7102ab2e84  ldr x9,[x8, #0xd8]
7102ab2e88  cbz x9,0x7102ab2e94
7102ab2e8c  mov w10,#0x1
7102ab2e90  strb w10,[x9, #0x21]
7102ab2e94  ldrb w9,[x8, #0xe0]
7102ab2e98  cbz w9,0x7102ab2ea4
7102ab2e9c  ldr x8,[x8, #0xb0]
7102ab2ea0  strb wzr,[x8, #0x10]
7102ab2ea4  fmov s0,0x3f800000
7102ab2ea8  mov x0,x20
7102ab2eac  bl 0x7102abb920
7102ab2eb0  mov w8,#0x4
7102ab2eb4  strb w8,[x20, #0x381]
7102ab2eb8  ldr x0,[x19, #0xa78]
7102ab2ebc  str x20,[x19, #0xa78]
7102ab2ec0  cbz x0,0x7102ab2ec8
7102ab2ec4  bl 0x710392eb40
7102ab2ec8  ldr x27,[x19, #0x338]
7102ab2ecc  mov w1,#0x2a0
7102ab2ed0  mov w0,#0x10
7102ab2ed4  bl 0x710392e290
7102ab2ed8  mov x20,x0
7102ab2edc  cbnz x0,0x7102ab2f28
7102ab2ee0  adrp x8,0x7105332000
7102ab2ee4  ldr x0,[x8, #0xf00]
7102ab2ee8  cbz x0,0x7102ab2f24
7102ab2eec  mov w8,#0x2a0
7102ab2ef0  str wzr,[sp, #0x70]
7102ab2ef4  add x1,sp,#0x70
7102ab2ef8  str x8,[sp, #0xa0]
7102ab2efc  ldr x8,[x0]
7102ab2f00  ldr x8,[x8, #0x30]
7102ab2f04  add x2,sp,#0xa0
7102ab2f08  blr x8
7102ab2f0c  tbz w0,#0x0,0x7102ab2f24
7102ab2f10  mov w1,#0x2a0
7102ab2f14  mov w0,#0x10
7102ab2f18  bl 0x710392e290
7102ab2f1c  mov x20,x0
7102ab2f20  cbnz x0,0x7102ab2f28
7102ab2f24  mov x20,xzr
7102ab2f28  adrp x8,0x710510d000
7102ab2f2c  add x8,x8,#0x800
7102ab2f30  mov x26,x20
7102ab2f34  mov x22,x20
7102ab2f38  str x8,[x20]
7102ab2f3c  mov x21,x20
7102ab2f40  str xzr,[x26, #0x8]!
7102ab2f44  str x28,[x22, #0x20]!
7102ab2f48  str xzr,[x20, #0x10]
7102ab2f4c  str xzr,[x20, #0x28]
7102ab2f50  str w23,[x20, #0x30]
7102ab2f54  ldp q1,q0,[sp, #0x50]
7102ab2f58  stp q0,q1,[x20, #0x40]
7102ab2f5c  add x8,x20,#0x1e4
7102ab2f60  ldp q3,q2,[sp, #0x30]
7102ab2f64  stp q2,q3,[x20, #0x60]
7102ab2f68  strb wzr,[x20, #0x80]
7102ab2f6c  str xzr,[x20, #0x90]
7102ab2f70  add x9,x20,#0x21c
7102ab2f74  add x10,x20,#0x25c
7102ab2f78  str x28,[x21, #0xa0]!
7102ab2f7c  str xzr,[x20, #0xa8]
7102ab2f80  str w23,[x20, #0xb0]
7102ab2f84  strb wzr,[x20, #0x100]
7102ab2f88  strb wzr,[x20, #0x1a0]
7102ab2f8c  strb wzr,[x20, #0x1e1]
7102ab2f90  str wzr,[x20, #0x1f0]
7102ab2f94  strh wzr,[x20, #0x1f4]
7102ab2f98  strb wzr,[x20, #0x1ec]
7102ab2f9c  stp xzr,xzr,[x20, #0x110]
7102ab2fa0  stp q0,q1,[x20, #0xc0]
7102ab2fa4  stp q2,q3,[x20, #0xe0]
7102ab2fa8  str xzr,[x8]
7102ab2fac  ldr x8,[x19, #0x338]
7102ab2fb0  str xzr,[x20, #0x250]
7102ab2fb4  strb wzr,[x20, #0x258]
7102ab2fb8  strb wzr,[x20, #0x218]
7102ab2fbc  str xzr,[x20, #0x210]
7102ab2fc0  str xzr,[x20, #0x208]
7102ab2fc4  stp x8,xzr,[x20, #0x1f8]
7102ab2fc8  add x8,x20,#0x239
7102ab2fcc  str xzr,[x8]
7102ab2fd0  add x8,x20,#0x234
7102ab2fd4  str xzr,[x8]
7102ab2fd8  add x8,x20,#0x22c
7102ab2fdc  str xzr,[x8]
7102ab2fe0  add x8,x20,#0x224
7102ab2fe4  str xzr,[x8]
7102ab2fe8  add x8,x20,#0x274
7102ab2fec  str xzr,[x9]
7102ab2ff0  str xzr,[x8]
7102ab2ff4  add x8,x20,#0x26c
7102ab2ff8  str xzr,[x8]
7102ab2ffc  add x8,x20,#0x264
7102ab3000  str xzr,[x8]
7102ab3004  add x8,x20,#0x279
7102ab3008  str xzr,[x10]
7102ab300c  str xzr,[x8]
7102ab3010  str x19,[x20, #0x288]
7102ab3014  strb wzr,[x20, #0x290]
7102ab3018  ldr x8,[x19, #0x310]
7102ab301c  ldp x9,x10,[x8, #0xd0]
7102ab3020  cmp x9,x10
7102ab3024  b.eq 0x7102ab3060
7102ab3028  mov x11,#0xdd4f
7102ab302c  movk x11,#0x563a, LSL #16
7102ab3030  add x24,x20,#0x110
7102ab3034  movk x11,#0x13, LSL #32
7102ab3038  ldr w8,[x9, #0x8]
7102ab303c  cmp w8,#0x1
7102ab3040  b.hi 0x7102ab3054
7102ab3044  ldr x8,[x9]
7102ab3048  ldr x12,[x8, #0x68]
7102ab304c  cmp x12,x11
7102ab3050  b.eq 0x7102ab3658
7102ab3054  add x9,x9,#0x10
7102ab3058  cmp x10,x9
7102ab305c  b.ne 0x7102ab3038
7102ab3060  str xzr,[x26]
7102ab3064  ldr x9,[x19, #0x300]
7102ab3068  ldr x8,[x9, #0x18]
7102ab306c  ldr x8,[x8]
7102ab3070  mov x10,#0x9053
7102ab3074  movk x10,#0xd88a, LSL #16
7102ab3078  movk x10,#0xe, LSL #32
7102ab307c  b 0x7102ab3084
7102ab3080  add x8,x8,#0x8
7102ab3084  ldr x11,[x8]
7102ab3088  ldr x12,[x11, #0xa0]
7102ab308c  and x12,x12,#0xffffffffff
7102ab3090  cmp x12,x10
7102ab3094  b.ne 0x7102ab3080
7102ab3098  ldr x8,[x11, #0x110]
7102ab309c  str x8,[x20, #0x10]
7102ab30a0  ldr x9,[x9, #0x18]
7102ab30a4  ldr x9,[x9]
7102ab30a8  mov x10,#0xc1e9
7102ab30ac  movk x10,#0x4183, LSL #16
7102ab30b0  movk x10,#0xe, LSL #32
7102ab30b4  b 0x7102ab30bc
7102ab30b8  add x9,x9,#0x8
7102ab30bc  ldr x11,[x9]
7102ab30c0  ldr x12,[x11, #0xa0]
7102ab30c4  and x12,x12,#0xffffffffff
7102ab30c8  cmp x12,x10
7102ab30cc  b.ne 0x7102ab30b8
7102ab30d0  ldr x9,[x11, #0x110]
7102ab30d4  str x9,[x20, #0x90]
7102ab30d8  mov w2,#0x1
7102ab30dc  ldp x0,x1,[x8]
7102ab30e0  bl 0x71025f4d80
7102ab30e4  ldr x8,[x20, #0x90]
7102ab30e8  ldp x0,x1,[x8]
7102ab30ec  mov w2,#0x1
7102ab30f0  bl 0x71025f4d80
7102ab30f4  adrp x9,0x710425d000
7102ab30f8  add x9,x9,#0x477
7102ab30fc  ldr x10,[x9]
7102ab3100  ldur x9,[x9, #0x7]
7102ab3104  add x8,x20,#0x1a1
7102ab3108  str x9,[x20, #0x1a8]
7102ab310c  str x10,[x8]
7102ab3110  adrp x8,0x7104463000
7102ab3114  add x8,x8,#0xc54
7102ab3118  ldr x10,[x8]
7102ab311c  ldur x8,[x8, #0x7]
7102ab3120  add x9,x20,#0x1c1
7102ab3124  str x8,[x20, #0x1c8]
7102ab3128  str x10,[x9]
7102ab312c  ldr x8,[x19, #0x320]
7102ab3130  ldr x8,[x8, #0x48]
7102ab3134  ldr x8,[x8, #0x320]
7102ab3138  ldr x9,[x8, #0x40]
7102ab313c  ldp x8,x10,[x9]
7102ab3140  subs x9,x10,x8
7102ab3144  b.eq 0x7102ab31ac
7102ab3148  asr x9,x9,#0x4
7102ab314c  mul x9,x9,x25
7102ab3150  cmp x8,x10
7102ab3154  b.eq 0x7102ab3194
7102ab3158  mov x12,#0x1747
7102ab315c  movk x12,#0x80f, LSL #16
7102ab3160  movk x12,#0x13, LSL #32
7102ab3164  mov x11,x8
7102ab3168  ldr w13,[x11]
7102ab316c  cbnz w13,0x7102ab3180
7102ab3170  ldr x13,[x11, #0x8]
7102ab3174  and x13,x13,#0xffffffffff
7102ab3178  cmp x13,x12
7102ab317c  b.eq 0x7102ab3198
7102ab3180  add x11,x11,#0x70
7102ab3184  cmp x10,x11
7102ab3188  b.ne 0x7102ab3168
7102ab318c  mov x11,x10
7102ab3190  b 0x7102ab3198
7102ab3194  mov x11,x8
7102ab3198  sub x8,x11,x8
7102ab319c  asr x8,x8,#0x4
7102ab31a0  mul x8,x8,x25
7102ab31a4  cmp x8,x9
7102ab31a8  b.cc 0x7102ab31b0
7102ab31ac  mov w8,#0xffffffff
7102ab31b0  str w8,[x20, #0x1f0]
7102ab31b4  str x27,[x20, #0x210]
7102ab31b8  str xzr,[sp, #0xa0]
7102ab31bc  ldr x8,[x27]
7102ab31c0  ldr x0,[x8, #0x8]
7102ab31c4  cbz x0,0x7102ab31d8
7102ab31c8  add x1,sp,#0xa0
7102ab31cc  mov w2,wzr
7102ab31d0  bl 0x7102405040
7102ab31d4  b 0x7102ab31dc
7102ab31d8  mov w0,#0xffffffff
7102ab31dc  mov x8,#0xd
7102ab31e0  movk x8,#0xe, LSL #32
7102ab31e4  str x8,[x20, #0x230]
7102ab31e8  add x8,x20,#0x260
7102ab31ec  str w0,[x20, #0x21c]
7102ab31f0  str wzr,[x20, #0x238]
7102ab31f4  str x27,[x20, #0x250]
7102ab31f8  str x8,[sp, #0xa0]
7102ab31fc  ldr x8,[x27]
7102ab3200  ldr x0,[x8, #0x8]
7102ab3204  cbz x0,0x7102ab3218
7102ab3208  add x1,sp,#0xa0
7102ab320c  mov w2,wzr
7102ab3210  bl 0x7102405040
7102ab3214  b 0x7102ab321c
7102ab3218  mov w0,#0xffffffff
7102ab321c  mov x8,#0x10
7102ab3220  movk x8,#0x11, LSL #32
7102ab3224  str x8,[x20, #0x270]
7102ab3228  ldr x8,[x20, #0x288]
7102ab322c  str w0,[x20, #0x25c]
7102ab3230  str wzr,[x20, #0x278]
7102ab3234  ldrb w8,[x8, #0x54]
7102ab3238  cmp w8,#0x1
7102ab323c  strb w8,[x20, #0x290]
7102ab3240  b.ne 0x7102ab3b04
7102ab3244  ldr x8,[x26]
7102ab3248  fmov s0,wzr
7102ab324c  cbz x8,0x7102ab372c
7102ab3250  ldr x8,[x8, #0xd8]
7102ab3254  cbz x8,0x7102ab372c
7102ab3258  ldr x8,[x8, #0x8]
7102ab325c  ldr x0,[x8, #0x10]
7102ab3260  ldr w8,[x8, #0xac]
7102ab3264  cmp w8,#0x1
7102ab3268  b.eq 0x7102ab36fc
7102ab326c  cbnz w8,0x7102ab372c
7102ab3270  ldr x8,[x0]
7102ab3274  ldr x8,[x8, #0x38]
7102ab3278  mov w1,wzr
7102ab327c  blr x8
7102ab3280  cbnz x0,0x7102ab3710
7102ab3284  b 0x7102ab3720
7102ab3288  str x8,[x20]
7102ab328c  cbz x8,0x7102ab3454
7102ab3290  ldr x9,[x8, #0xd8]
7102ab3294  cbz x9,0x7102ab3458
7102ab3298  ldrb w9,[x8, #0xe0]
7102ab329c  cbz w9,0x7102ab32ac
7102ab32a0  ldr x9,[x8, #0xc8]
7102ab32a4  cbz x9,0x7102ab32ac
7102ab32a8  strh wzr,[x9, #0x32]
7102ab32ac  ldr x8,[x8, #0xd8]
7102ab32b0  cbz x8,0x7102ab32b8
7102ab32b4  strb wzr,[x8, #0x22]
7102ab32b8  ldr x8,[x20]
7102ab32bc  str x13,[sp, #0x10]
7102ab32c0  str x26,[sp, #0x20]
7102ab32c4  cbz x8,0x7102ab3334
7102ab32c8  ldrb w9,[x8, #0xe0]
7102ab32cc  cbz w9,0x7102ab32e4
7102ab32d0  ldr x9,[x8, #0xc8]
7102ab32d4  cbz x9,0x7102ab32e4
7102ab32d8  mov w10,#0x1
7102ab32dc  strb w10,[x9, #0xc]
7102ab32e0  str wzr,[x9, #0x10]
7102ab32e4  ldr x8,[x8, #0xd8]
7102ab32e8  cbz x8,0x7102ab32f4
7102ab32ec  mov w9,#0x1
7102ab32f0  strb w9,[x8, #0x28]
7102ab32f4  ldr x8,[x20]
7102ab32f8  cbz x8,0x7102ab3334
7102ab32fc  ldrb w9,[x8, #0xe0]
7102ab3300  cbz w9,0x7102ab3314
7102ab3304  ldr x9,[x8, #0xc8]
7102ab3308  cbz x9,0x7102ab3314
7102ab330c  mov w10,#0x101
7102ab3310  strh w10,[x9, #0x30]
7102ab3314  ldr x9,[x8, #0xd8]
7102ab3318  cbz x9,0x7102ab3324
7102ab331c  mov w10,#0x1
7102ab3320  strb w10,[x9, #0x21]
7102ab3324  ldrb w9,[x8, #0xe0]
7102ab3328  cbz w9,0x7102ab3334
7102ab332c  ldr x8,[x8, #0xb0]
7102ab3330  strb wzr,[x8, #0x10]
7102ab3334  adrp x26,0x7104317000
7102ab3338  add x26,x26,#0x71
7102ab333c  adrp x3,0x710438a000
7102ab3340  add x3,x3,#0xd0e
7102ab3344  mov x1,x19
7102ab3348  mov x2,x26
7102ab334c  bl 0x710314fd10
7102ab3350  adrp x3,0x7104348000
7102ab3354  add x3,x3,#0x43d
7102ab3358  mov x0,x21
7102ab335c  mov x1,x19
7102ab3360  mov x2,x26
7102ab3364  bl 0x710314fd10
7102ab3368  adrp x3,0x7104328000
7102ab336c  add x3,x3,#0x139
7102ab3370  mov x0,x25
7102ab3374  mov x1,x19
7102ab3378  mov x2,x26
7102ab337c  bl 0x710314fd10
7102ab3380  adrp x3,0x71043ee000
7102ab3384  add x3,x3,#0xb95
7102ab3388  mov x0,x24
7102ab338c  mov x1,x19
7102ab3390  mov x2,x26
7102ab3394  bl 0x710314fd10
7102ab3398  adrp x3,0x7104452000
7102ab339c  add x3,x3,#0x9cc
7102ab33a0  mov x0,x23
7102ab33a4  mov x1,x19
7102ab33a8  mov x2,x26
7102ab33ac  bl 0x710314fd10
7102ab33b0  adrp x3,0x7104431000
7102ab33b4  add x3,x3,#0x19c
7102ab33b8  mov x0,x22
7102ab33bc  mov x1,x19
7102ab33c0  mov x2,x26
7102ab33c4  bl 0x710314fd10
7102ab33c8  ldr x19,[x20]
7102ab33cc  ldr x26,[sp, #0x20]
7102ab33d0  cbz x19,0x7102ab343c
7102ab33d4  ldr x0,[x19, #0xd0]
7102ab33d8  adrp x1,0x7104317000
7102ab33dc  add x1,x1,#0x71
7102ab33e0  bl 0x71025ee6c0
7102ab33e4  cbz x0,0x7102ab33f0
7102ab33e8  ldr x8,[sp, #0x10]
7102ab33ec  str x0,[x8]
7102ab33f0  ldr x0,[x19, #0xd0]
7102ab33f4  adrp x1,0x71043bc000
7102ab33f8  add x1,x1,#0x70e
7102ab33fc  bl 0x71025ee6c0
7102ab3400  cbz x0,0x7102ab3408
7102ab3404  str x0,[x20, #0x2d8]
7102ab3408  cbz x19,0x7102ab343c
7102ab340c  ldr x8,[sp, #0x10]
7102ab3410  ldr x1,[x8]
7102ab3414  cbz x1,0x7102ab343c
7102ab3418  ldr x21,[x19, #0xd8]
7102ab341c  cbz x21,0x7102ab343c
7102ab3420  ldr x8,[x19, #0xd0]
7102ab3424  cbz x8,0x7102ab343c
7102ab3428  ldr x0,[x21, #0x8]
7102ab342c  fmov s0,wzr
7102ab3430  bl 0x710367c160
7102ab3434  tbz w0,#0x0,0x7102ab343c
7102ab3438  str wzr,[x21, #0x10]
7102ab343c  ldr x0,[x20]
7102ab3440  fmov s0,wzr
7102ab3444  mov w1,#0x1
7102ab3448  bl 0x710260fdd0
7102ab344c  ldr x8,[x20]
7102ab3450  ldr x19,[sp, #0x28]
7102ab3454  cbz x8,0x7102ab2af4
7102ab3458  ldrb w9,[x8, #0x118]
7102ab345c  orr w9,w9,#0x1
7102ab3460  strb w9,[x8, #0x118]
7102ab3464  b 0x7102ab2af4
7102ab3468  str x8,[x27]
7102ab346c  cbz x8,0x7102ab43b4
7102ab3470  ldr x9,[x8, #0xd8]
7102ab3474  cbz x9,0x7102ab43b8
7102ab3478  ldrb w9,[x8, #0xe0]
7102ab347c  cbz w9,0x7102ab348c
7102ab3480  ldr x9,[x8, #0xc8]
7102ab3484  cbz x9,0x7102ab348c
7102ab3488  strh wzr,[x9, #0x32]
7102ab348c  ldr x8,[x8, #0xd8]
7102ab3490  cbz x8,0x7102ab3498
7102ab3494  strb wzr,[x8, #0x22]
7102ab3498  ldr x21,[x27]
7102ab349c  cbz x21,0x7102ab4364
7102ab34a0  ldrb w8,[x21, #0xe0]
7102ab34a4  cbz w8,0x7102ab34bc
7102ab34a8  ldr x8,[x21, #0xc8]
7102ab34ac  cbz x8,0x7102ab34bc
7102ab34b0  mov w9,#0x1
7102ab34b4  strb w9,[x8, #0xc]
7102ab34b8  str wzr,[x8, #0x10]
7102ab34bc  ldr x8,[x21, #0xd8]
7102ab34c0  cbz x8,0x7102ab34cc
7102ab34c4  mov w9,#0x1
7102ab34c8  strb w9,[x8, #0x28]
7102ab34cc  ldr x21,[x27]
7102ab34d0  cbz x21,0x7102ab4364
7102ab34d4  ldrb w8,[x21, #0xe0]
7102ab34d8  cbz w8,0x7102ab34ec
7102ab34dc  ldr x8,[x21, #0xc8]
7102ab34e0  cbz x8,0x7102ab34ec
7102ab34e4  mov w9,#0x101
7102ab34e8  strh w9,[x8, #0x30]
7102ab34ec  ldr x8,[x21, #0xd8]
7102ab34f0  cbz x8,0x7102ab34fc
7102ab34f4  mov w9,#0x1
7102ab34f8  strb w9,[x8, #0x21]
7102ab34fc  ldrb w8,[x21, #0xe0]
7102ab3500  cbz w8,0x7102ab350c
7102ab3504  ldr x8,[x21, #0xb0]
7102ab3508  strb wzr,[x8, #0x10]
7102ab350c  ldr x21,[x27]
7102ab3510  cmp x21,#0x0
7102ab3514  cset w19,eq
7102ab3518  cbz x21,0x7102ab439c
7102ab351c  ldr x0,[x21, #0xd0]
7102ab3520  adrp x1,0x710438a000
7102ab3524  add x1,x1,#0xce6
7102ab3528  bl 0x71025ee6c0
7102ab352c  cbz x0,0x7102ab3534
7102ab3530  str x0,[x20, #0x2e0]
7102ab3534  ldr x0,[x21, #0xd0]
7102ab3538  adrp x1,0x7104317000
7102ab353c  add x1,x1,#0xae
7102ab3540  bl 0x71025ee6c0
7102ab3544  cbz x0,0x7102ab436c
7102ab3548  str x0,[x20, #0x2e8]
7102ab354c  tbz w19,#0x0,0x7102ab4370
7102ab3550  b 0x7102ab439c
7102ab3554  str x8,[x26]
7102ab3558  cbz x8,0x7102ab4458
7102ab355c  ldr x9,[x8, #0xd8]
7102ab3560  cbz x9,0x7102ab445c
7102ab3564  ldrb w9,[x8, #0xe0]
7102ab3568  cbz w9,0x7102ab3578
7102ab356c  ldr x9,[x8, #0xc8]
7102ab3570  cbz x9,0x7102ab3578
7102ab3574  strh wzr,[x9, #0x32]
7102ab3578  ldr x8,[x8, #0xd8]
7102ab357c  cbz x8,0x7102ab3584
7102ab3580  strb wzr,[x8, #0x22]
7102ab3584  ldr x22,[x26]
7102ab3588  cbz x22,0x7102ab43c8
7102ab358c  ldrb w8,[x22, #0xe0]
7102ab3590  cbz w8,0x7102ab35a8
7102ab3594  ldr x8,[x22, #0xc8]
7102ab3598  cbz x8,0x7102ab35a8
7102ab359c  mov w9,#0x1
7102ab35a0  strb w9,[x8, #0xc]
7102ab35a4  str wzr,[x8, #0x10]
7102ab35a8  ldr x8,[x22, #0xd8]
7102ab35ac  cbz x8,0x7102ab35b8
7102ab35b0  mov w9,#0x1
7102ab35b4  strb w9,[x8, #0x28]
7102ab35b8  ldr x22,[x26]
7102ab35bc  cbz x22,0x7102ab43c8
7102ab35c0  ldrb w8,[x22, #0xe0]
7102ab35c4  cbz w8,0x7102ab35d8
7102ab35c8  ldr x8,[x22, #0xc8]
7102ab35cc  cbz x8,0x7102ab35d8
7102ab35d0  mov w9,#0x101
7102ab35d4  strh w9,[x8, #0x30]
7102ab35d8  ldr x8,[x22, #0xd8]
7102ab35dc  cbz x8,0x7102ab35e8
7102ab35e0  mov w9,#0x1
7102ab35e4  strb w9,[x8, #0x21]
7102ab35e8  ldrb w8,[x22, #0xe0]
7102ab35ec  cbz w8,0x7102ab35f8
7102ab35f0  ldr x8,[x22, #0xb0]
7102ab35f4  strb wzr,[x8, #0x10]
7102ab35f8  ldr x22,[x26]
7102ab35fc  cmp x22,#0x0
7102ab3600  cset w23,eq
7102ab3604  cbz x22,0x7102ab43d0
7102ab3608  ldr x0,[x22, #0xd0]
7102ab360c  adrp x21,0x71042c2000
7102ab3610  add x21,x21,#0xe1c
7102ab3614  mov x1,x21
7102ab3618  bl 0x71025ee6c0
7102ab361c  cbz x0,0x7102ab3624
7102ab3620  str x0,[x20, #0x2f0]
7102ab3624  mov w8,#0x6573
7102ab3628  movk w8,#0x74, LSL #16
7102ab362c  str w8,[x20, #0x310]
7102ab3630  ldp x8,x9,[x21]
7102ab3634  str x9,[x20, #0x308]
7102ab3638  str x8,[x20, #0x300]
7102ab363c  ldr x0,[x22, #0xd0]
7102ab3640  adrp x1,0x710438a000
7102ab3644  add x1,x1,#0xd24
7102ab3648  bl 0x71025ee6c0
7102ab364c  cbz x0,0x7102ab43f0
7102ab3650  str x0,[x20, #0x2f8]
7102ab3654  b 0x7102ab43f0
7102ab3658  str x8,[x26]
7102ab365c  cbz x8,0x7102ab53c0
7102ab3660  ldr x9,[x8, #0xd8]
7102ab3664  cbz x9,0x7102ab53c4
7102ab3668  ldrb w9,[x8, #0xe0]
7102ab366c  cbz w9,0x7102ab367c
7102ab3670  ldr x9,[x8, #0xc8]
7102ab3674  cbz x9,0x7102ab367c
7102ab3678  strh wzr,[x9, #0x32]
7102ab367c  ldr x8,[x8, #0xd8]
7102ab3680  cbz x8,0x7102ab3688
7102ab3684  strb wzr,[x8, #0x22]
7102ab3688  ldr x8,[x26]
7102ab368c  cbz x8,0x7102ab36c8
7102ab3690  ldrb w9,[x8, #0xe0]
7102ab3694  cbz w9,0x7102ab36a8
7102ab3698  ldr x9,[x8, #0xc8]
7102ab369c  cbz x9,0x7102ab36a8
7102ab36a0  mov w10,#0x101
7102ab36a4  strh w10,[x9, #0x30]
7102ab36a8  ldr x9,[x8, #0xd8]
7102ab36ac  cbz x9,0x7102ab36b8
7102ab36b0  mov w10,#0x1
7102ab36b4  strb w10,[x9, #0x21]
7102ab36b8  ldrb w9,[x8, #0xe0]
7102ab36bc  cbz w9,0x7102ab36c8
7102ab36c0  ldr x8,[x8, #0xb0]
7102ab36c4  strb wzr,[x8, #0x10]
7102ab36c8  ldr x19,[x26]
7102ab36cc  cbz x19,0x7102ab447c
7102ab36d0  ldr x8,[x19, #0xd8]
7102ab36d4  cbz x8,0x7102ab5210
7102ab36d8  ldr x8,[x8, #0x8]
7102ab36dc  ldr x0,[x8, #0x8]
7102ab36e0  ldr x8,[x0]
7102ab36e4  ldr x8,[x8, #0x18]
7102ab36e8  adrp x1,0x71042e5000
7102ab36ec  add x1,x1,#0x26e
7102ab36f0  blr x8
7102ab36f4  mov w23,w0
7102ab36f8  b 0x7102ab5214
7102ab36fc  ldr x8,[x0]
7102ab3700  ldr x8,[x8, #0x38]
7102ab3704  mov w1,#0x1
7102ab3708  blr x8
7102ab370c  cbz x0,0x7102ab3720
7102ab3710  ldr x8,[x0]
7102ab3714  ldr x8,[x8, #0x40]
7102ab3718  mov w1,wzr
7102ab371c  blr x8
7102ab3720  ldr x8,[x0]
7102ab3724  ldr x8,[x8, #0x88]
7102ab3728  blr x8
7102ab372c  ldr x0,[x26]
7102ab3730  mov w1,#0x1
7102ab3734  str x22,[sp, #0x10]
7102ab3738  bl 0x710260fdd0
7102ab373c  ldr x8,[x26]
7102ab3740  cbz x8,0x7102ab377c
7102ab3744  ldrb w9,[x8, #0xe0]
7102ab3748  cbz w9,0x7102ab375c
7102ab374c  ldr x9,[x8, #0xc8]
7102ab3750  cbz x9,0x7102ab375c
7102ab3754  mov w10,#0x101
7102ab3758  strh w10,[x9, #0x30]
7102ab375c  ldr x9,[x8, #0xd8]
7102ab3760  cbz x9,0x7102ab376c
7102ab3764  mov w10,#0x1
7102ab3768  strb w10,[x9, #0x21]
7102ab376c  ldrb w9,[x8, #0xe0]
7102ab3770  cbz w9,0x7102ab377c
7102ab3774  ldr x8,[x8, #0xb0]
7102ab3778  strb wzr,[x8, #0x10]
7102ab377c  ldr x25,[x20, #0x10]
7102ab3780  str x21,[sp, #0x20]
7102ab3784  ldp x19,x27,[x25, #0x18]
7102ab3788  cmp x19,x27
7102ab378c  b.eq 0x7102ab3880
7102ab3790  ldrb w21,[x20, #0x1a1]
7102ab3794  str x25,[sp, #0x8]
7102ab3798  add x23,x20,#0x1a1
7102ab379c  mov w26,#0x9dc5
7102ab37a0  movk w26,#0x811c, LSL #16
7102ab37a4  add x22,x20,#0x1a2
7102ab37a8  mov w28,#0x89
7102ab37ac  mov x25,x19
7102ab37b0  ldr x24,[x25]
7102ab37b4  ldr w8,[x24, #0x18]
7102ab37b8  mov w9,w26
7102ab37bc  cbz w21,0x7102ab37e0
7102ab37c0  mov x10,x22
7102ab37c4  mov w11,w21
7102ab37c8  mov w9,w26
7102ab37cc  mul w9,w9,w28
7102ab37d0  and w11,w11,#0xff
7102ab37d4  eor w9,w9,w11
7102ab37d8  ldrb w11,[x10], #0x1
7102ab37dc  cbnz w11,0x7102ab37cc
7102ab37e0  cmp w8,w9
7102ab37e4  b.ne 0x7102ab37f8
7102ab37e8  add x0,x24,#0x20
7102ab37ec  mov x1,x23
7102ab37f0  bl 0x71039c0060
7102ab37f4  cbz w0,0x7102ab4308
7102ab37f8  add x25,x25,#0x8
7102ab37fc  cmp x25,x27
7102ab3800  b.ne 0x7102ab37b0
7102ab3804  ldr x25,[sp, #0x8]
7102ab3808  cmp x19,x27
7102ab380c  b.eq 0x7102ab3870
7102ab3810  ldrb w21,[x20, #0x1c1]
7102ab3814  add x23,x20,#0x1c1
7102ab3818  add x22,x20,#0x1c2
7102ab381c  ldr x24,[x19]
7102ab3820  ldr w8,[x24, #0x18]
7102ab3824  mov w9,w26
7102ab3828  cbz w21,0x7102ab384c
7102ab382c  mov x10,x22
7102ab3830  mov w11,w21
7102ab3834  mov w9,w26
7102ab3838  mul w9,w9,w28
7102ab383c  and w11,w11,#0xff
7102ab3840  eor w9,w9,w11
7102ab3844  ldrb w11,[x10], #0x1
7102ab3848  cbnz w11,0x7102ab3838
7102ab384c  cmp w8,w9
7102ab3850  b.ne 0x7102ab3864
7102ab3854  add x0,x24,#0x20
7102ab3858  mov x1,x23
7102ab385c  bl 0x71039c0060
7102ab3860  cbz w0,0x7102ab433c
7102ab3864  add x19,x19,#0x8
7102ab3868  cmp x19,x27
7102ab386c  b.ne 0x7102ab381c
7102ab3870  ldr x19,[sp, #0x10]
7102ab3874  adrp x28,0x710517b000
7102ab3878  add x28,x28,#0x340
7102ab387c  b 0x7102ab3884
7102ab3880  ldr x19,[sp, #0x10]
7102ab3884  ldr q0,[sp, #0x60]
7102ab3888  mov w2,#0x1
7102ab388c  mov w23,#0x1
7102ab3890  str q0,[sp, #0xa0]
7102ab3894  ldr q0,[sp, #0x50]
7102ab3898  str q0,[sp, #0xb0]
7102ab389c  ldr q0,[sp, #0x40]
7102ab38a0  str q0,[sp, #0xc0]
7102ab38a4  ldr q0,[sp, #0x30]
7102ab38a8  str q0,[sp, #0xd0]
7102ab38ac  ldp x0,x1,[x25]
7102ab38b0  bl 0x71025f4d80
7102ab38b4  add x1,sp,#0xa0
7102ab38b8  mov x0,x19
7102ab38bc  bl 0x710314fa90
7102ab38c0  ldr q0,[sp, #0xd0]
7102ab38c4  movi v1.2D,#0x0
7102ab38c8  ldr x9,[x20, #0x10]
7102ab38cc  ldp x8,x9,[x9]
7102ab38d0  ext v1.16B,v1.16B,v0.16B,0x8
7102ab38d4  ext v7.16B,v1.16B,v1.16B,0x8
7102ab38d8  cmp x8,x9
7102ab38dc  b.eq 0x7102ab39b0
7102ab38e0  dup s1,v0.S[0x1]
7102ab38e4  adrp x10,0x7104472000
7102ab38e8  ldr s2,[x10, #0x970]
7102ab38ec  fmov s3,0xbf800000
7102ab38f0  fmov s4,0x3f800000
7102ab38f4  ldr x10,[x8]
7102ab38f8  ldr x12,[x10, #0x8]
7102ab38fc  ldrb w13,[x12, #0xe7]
7102ab3900  ldrb w12,[x12, #0xe8]
7102ab3904  ldrb w11,[x10, #0x128]
7102ab3908  cmp w11,#0x0
7102ab390c  orr w12,w12,w13
7102ab3910  and w11,w12,#0xff
7102ab3914  ccmp w11,#0x0,#0x0,ne
7102ab3918  b.eq 0x7102ab3924
7102ab391c  strb w23,[x10, #0x129]
7102ab3920  b 0x7102ab3948
7102ab3924  ldr q5,[x10, #0x10]
7102ab3928  fabd s6,s5,s0
7102ab392c  fcmp s6,s2
7102ab3930  b.gt 0x7102ab3944
7102ab3934  dup s5,v5.S[0x1]
7102ab3938  fabd s5,s5,s1
7102ab393c  fcmp s5,s2
7102ab3940  b.le 0x7102ab394c
7102ab3944  strb w23,[x10, #0x12a]
7102ab3948  str q7,[x10, #0x10]
7102ab394c  ldr s5,[x10, #0x30]
7102ab3950  fabs s5,s5
7102ab3954  fcmp s5,s2
7102ab3958  b.mi 0x7102ab3964
7102ab395c  str wzr,[x10, #0x30]
7102ab3960  strb w23,[x10, #0x129]
7102ab3964  ldr q5,[x10, #0x50]
7102ab3968  fadd s6,s5,s3
7102ab396c  fabs s6,s6
7102ab3970  fcmp s6,s2
7102ab3974  b.mi 0x7102ab3984
7102ab3978  mov v5.S[0x0],v4.S[0x0]
7102ab397c  strb w23,[x10, #0x129]
7102ab3980  str q5,[x10, #0x50]
7102ab3984  dup s6,v5.S[0x1]
7102ab3988  fadd s6,s6,s3
7102ab398c  fabs s6,s6
7102ab3990  fcmp s6,s2
7102ab3994  b.mi 0x7102ab39a4
7102ab3998  mov v5.S[0x1],v4.S[0x0]
7102ab399c  strb w23,[x10, #0x129]
7102ab39a0  str q5,[x10, #0x50]
7102ab39a4  add x8,x8,#0x8
7102ab39a8  cmp x9,x8
7102ab39ac  b.ne 0x7102ab38f4
7102ab39b0  ldr x8,[x20, #0x90]
7102ab39b4  str q7,[sp, #0x10]
7102ab39b8  ldp x19,x21,[x8]
7102ab39bc  cmp x19,x21
7102ab39c0  b.eq 0x7102ab39f8
7102ab39c4  mov w22,#0x1
7102ab39c8  mov x23,#-0x1
7102ab39cc  ldr x8,[x19]
7102ab39d0  ldr x9,[x8, #0x8]
7102ab39d4  strb w22,[x8, #0x128]
7102ab39d8  cbz x9,0x7102ab39ec
7102ab39dc  str x23,[x9, #0xd8]
7102ab39e0  ldr x0,[x8, #0x8]
7102ab39e4  mov w1,wzr
7102ab39e8  bl 0x7100532bc0
7102ab39ec  add x19,x19,#0x8
7102ab39f0  cmp x21,x19
7102ab39f4  b.ne 0x7102ab39cc
7102ab39f8  ldr x0,[sp, #0x20]
7102ab39fc  add x1,sp,#0xa0
7102ab3a00  bl 0x710314fa90
7102ab3a04  ldr x9,[x20, #0x90]
7102ab3a08  ldp x8,x9,[x9]
7102ab3a0c  ldr x19,[sp, #0x28]
7102ab3a10  cmp x8,x9
7102ab3a14  b.eq 0x7102ab3afc
7102ab3a18  ldr q0,[sp, #0xd0]
7102ab3a1c  ldr q1,[sp, #0x10]
7102ab3a20  ext v2.16B,v1.16B,v0.16B,0x8
7102ab3a24  dup s1,v0.S[0x1]
7102ab3a28  adrp x11,0x7104472000
7102ab3a2c  ldr s3,[x11, #0x970]
7102ab3a30  ext v2.16B,v2.16B,v2.16B,0x8
7102ab3a34  fmov s4,0xbf800000
7102ab3a38  fmov s5,0x3f800000
7102ab3a3c  mov w10,#0x1
7102ab3a40  ldr x11,[x8]
7102ab3a44  ldr x13,[x11, #0x8]
7102ab3a48  ldrb w14,[x13, #0xe7]
7102ab3a4c  ldrb w13,[x13, #0xe8]
7102ab3a50  ldrb w12,[x11, #0x128]
7102ab3a54  cmp w12,#0x0
7102ab3a58  orr w13,w13,w14
7102ab3a5c  and w12,w13,#0xff
7102ab3a60  ccmp w12,#0x0,#0x0,ne
7102ab3a64  b.eq 0x7102ab3a70
7102ab3a68  strb w10,[x11, #0x129]
7102ab3a6c  b 0x7102ab3a94
7102ab3a70  ldr q6,[x11, #0x10]
7102ab3a74  fabd s7,s6,s0
7102ab3a78  fcmp s7,s3
7102ab3a7c  b.gt 0x7102ab3a90
7102ab3a80  dup s6,v6.S[0x1]
7102ab3a84  fabd s6,s6,s1
7102ab3a88  fcmp s6,s3
7102ab3a8c  b.le 0x7102ab3a98
7102ab3a90  strb w10,[x11, #0x12a]
7102ab3a94  str q2,[x11, #0x10]
7102ab3a98  ldr s6,[x11, #0x30]
7102ab3a9c  fabs s6,s6
7102ab3aa0  fcmp s6,s3
7102ab3aa4  b.mi 0x7102ab3ab0
7102ab3aa8  str wzr,[x11, #0x30]
7102ab3aac  strb w10,[x11, #0x129]
7102ab3ab0  ldr q6,[x11, #0x50]
7102ab3ab4  fadd s7,s6,s4
7102ab3ab8  fabs s7,s7
7102ab3abc  fcmp s7,s3
7102ab3ac0  b.mi 0x7102ab3ad0
7102ab3ac4  mov v6.S[0x0],v5.S[0x0]
7102ab3ac8  strb w10,[x11, #0x129]
7102ab3acc  str q6,[x11, #0x50]
7102ab3ad0  dup s7,v6.S[0x1]
7102ab3ad4  fadd s7,s7,s4
7102ab3ad8  fabs s7,s7
7102ab3adc  fcmp s7,s3
7102ab3ae0  b.mi 0x7102ab3af0
7102ab3ae4  mov v6.S[0x1],v5.S[0x0]
7102ab3ae8  strb w10,[x11, #0x129]
7102ab3aec  str q6,[x11, #0x50]
7102ab3af0  add x8,x8,#0x8
7102ab3af4  cmp x9,x8
7102ab3af8  b.ne 0x7102ab3a40
7102ab3afc  mov w8,#0x4
7102ab3b00  strb w8,[x20, #0x1e1]
7102ab3b04  ldr x0,[x19, #0xa80]
7102ab3b08  str x20,[x19, #0xa80]
7102ab3b0c  cbz x0,0x7102ab3b1c
7102ab3b10  ldr x8,[x0]
7102ab3b14  ldr x8,[x8, #0x8]
7102ab3b18  blr x8
7102ab3b1c  adrp x8,0x7104328000
7102ab3b20  add x8,x8,#0x126
7102ab3b24  str x8,[sp, #0xa0]
7102ab3b28  adrp x8,0x710510d000
7102ab3b2c  add x8,x8,#0x6f0
7102ab3b30  mov w0,#0x10
7102ab3b34  ldp x9,x8,[x8]
7102ab3b38  mov w1,#0x100
7102ab3b3c  stp x9,x8,[sp, #0xa8]
7102ab3b40  bl 0x710392e290
7102ab3b44  mov x20,x0
7102ab3b48  cbnz x0,0x7102ab3b94
7102ab3b4c  adrp x8,0x7105332000
7102ab3b50  ldr x0,[x8, #0xf00]
7102ab3b54  cbz x0,0x7102ab3b90
7102ab3b58  mov w8,#0x100
7102ab3b5c  stur wzr,[x29, #-0x78]
7102ab3b60  sub x1,x29,#0x78
7102ab3b64  str x8,[sp, #0x70]
7102ab3b68  ldr x8,[x0]
7102ab3b6c  ldr x8,[x8, #0x30]
7102ab3b70  add x2,sp,#0x70
7102ab3b74  blr x8
7102ab3b78  tbz w0,#0x0,0x7102ab3b90
7102ab3b7c  mov w0,#0x10
7102ab3b80  mov w1,#0x100
7102ab3b84  bl 0x710392e290
7102ab3b88  mov x20,x0
7102ab3b8c  cbnz x0,0x7102ab3b94
7102ab3b90  mov x20,xzr
7102ab3b94  add x2,sp,#0xa0
7102ab3b98  mov x0,x20
7102ab3b9c  mov x1,x19
7102ab3ba0  bl 0x7102abe900
7102ab3ba4  ldr x0,[x19, #0xa90]
7102ab3ba8  str x20,[x19, #0xa90]
7102ab3bac  cbz x0,0x7102ab3bbc
7102ab3bb0  ldr x8,[x0]
7102ab3bb4  ldr x8,[x8, #0x8]
7102ab3bb8  blr x8
7102ab3bbc  ldr x22,[x19, #0x338]
7102ab3bc0  mov w1,#0x410
7102ab3bc4  mov w0,#0x10
7102ab3bc8  add x20,x19,#0x738
7102ab3bcc  bl 0x710392e290
7102ab3bd0  mov x21,x0
7102ab3bd4  cbnz x0,0x7102ab3c20
7102ab3bd8  adrp x8,0x7105332000
7102ab3bdc  ldr x0,[x8, #0xf00]
7102ab3be0  cbz x0,0x7102ab3c1c
7102ab3be4  mov w8,#0x410
7102ab3be8  str wzr,[sp, #0x70]
7102ab3bec  add x1,sp,#0x70
7102ab3bf0  str x8,[sp, #0xa0]
7102ab3bf4  ldr x8,[x0]
7102ab3bf8  ldr x8,[x8, #0x30]
7102ab3bfc  add x2,sp,#0xa0
7102ab3c00  blr x8
7102ab3c04  tbz w0,#0x0,0x7102ab3c1c
7102ab3c08  mov w1,#0x410
7102ab3c0c  mov w0,#0x10
7102ab3c10  bl 0x710392e290
7102ab3c14  mov x21,x0
7102ab3c18  cbnz x0,0x7102ab3c20
7102ab3c1c  mov x21,xzr
7102ab3c20  adrp x8,0x710510d000
7102ab3c24  add x8,x8,#0x780
7102ab3c28  add x10,x21,#0x3dc
7102ab3c2c  stp x20,xzr,[x21, #0x8]
7102ab3c30  str x8,[x21]
7102ab3c34  ldp q1,q0,[sp, #0x50]
7102ab3c38  str x20,[sp, #0x10]
7102ab3c3c  mov w8,#0xffffffff
7102ab3c40  add x11,x21,#0x3f4
7102ab3c44  stp q0,q1,[x21, #0x20]
7102ab3c48  add x9,x21,#0x3ac
7102ab3c4c  ldp q3,q2,[sp, #0x30]
7102ab3c50  str w8,[x21, #0x1b0]
7102ab3c54  str w8,[x21, #0x220]
7102ab3c58  mov w8,#0x5
7102ab3c5c  stp q0,q1,[x21, #0x60]
7102ab3c60  strb wzr,[x21, #0x200]
7102ab3c64  str x28,[x21, #0x210]
7102ab3c68  str xzr,[x21, #0x218]
7102ab3c6c  strb wzr,[x21, #0x270]
7102ab3c70  str xzr,[x21, #0x2a0]
7102ab3c74  str xzr,[x21, #0x298]
7102ab3c78  str xzr,[x21, #0x290]
7102ab3c7c  str xzr,[x21, #0x288]
7102ab3c80  str xzr,[x21, #0x280]
7102ab3c84  strh w8,[x21, #0x2a8]
7102ab3c88  str wzr,[x21, #0x2ac]
7102ab3c8c  strb wzr,[x21, #0x2b0]
7102ab3c90  str wzr,[x21, #0x2b4]
7102ab3c94  str xzr,[x21, #0x2d0]
7102ab3c98  str xzr,[x21, #0x2c8]
7102ab3c9c  str xzr,[x21, #0x2c0]
7102ab3ca0  stp x28,xzr,[x21, #0x1a0]
7102ab3ca4  stp q2,q3,[x21, #0x40]
7102ab3ca8  stp q2,q3,[x21, #0x80]
7102ab3cac  stp q0,q1,[x21, #0xa0]
7102ab3cb0  stp q2,q3,[x21, #0xc0]
7102ab3cb4  stp q0,q1,[x21, #0xe0]
7102ab3cb8  stp q2,q3,[x21, #0x100]
7102ab3cbc  stp q0,q1,[x21, #0x120]
7102ab3cc0  stp q2,q3,[x21, #0x140]
7102ab3cc4  stp q0,q1,[x21, #0x160]
7102ab3cc8  stp q2,q3,[x21, #0x180]
7102ab3ccc  stp q0,q1,[x21, #0x1c0]
7102ab3cd0  stp q2,q3,[x21, #0x1e0]
7102ab3cd4  stp q0,q1,[x21, #0x230]
7102ab3cd8  stp q2,q3,[x21, #0x250]
7102ab3cdc  ldr x8,[x19, #0x340]
7102ab3ce0  str x8,[x21, #0x2d8]
7102ab3ce4  mov x8,#-0x1
7102ab3ce8  strb wzr,[x21, #0x300]
7102ab3cec  str x8,[x21, #0x2f8]
7102ab3cf0  str x8,[x21, #0x2f0]
7102ab3cf4  str x8,[x21, #0x2e8]
7102ab3cf8  str x8,[x21, #0x2e0]
7102ab3cfc  add x8,x21,#0x37c
7102ab3d00  str xzr,[x21, #0x348]
7102ab3d04  str xzr,[x21, #0x340]
7102ab3d08  str xzr,[x21, #0x338]
7102ab3d0c  str xzr,[x21, #0x330]
7102ab3d10  str xzr,[x21, #0x328]
7102ab3d14  str xzr,[x21, #0x320]
7102ab3d18  str xzr,[x21, #0x318]
7102ab3d1c  str xzr,[x21, #0x310]
7102ab3d20  str xzr,[x21, #0x308]
7102ab3d24  str x22,[x21, #0x350]
7102ab3d28  str xzr,[x11]
7102ab3d2c  add x11,x21,#0x3ec
7102ab3d30  str xzr,[x11]
7102ab3d34  add x11,x21,#0x3e4
7102ab3d38  str xzr,[x10]
7102ab3d3c  add x10,x21,#0x3a1
7102ab3d40  str wzr,[x21, #0x3fc]
7102ab3d44  str xzr,[x11]
7102ab3d48  strb wzr,[x21, #0x378]
7102ab3d4c  str xzr,[x21, #0x370]
7102ab3d50  str xzr,[x21, #0x368]
7102ab3d54  str xzr,[x21, #0x360]
7102ab3d58  str xzr,[x10]
7102ab3d5c  add x10,x21,#0x39c
7102ab3d60  str xzr,[x10]
7102ab3d64  add x10,x21,#0x394
7102ab3d68  str xzr,[x10]
7102ab3d6c  add x10,x21,#0x38c
7102ab3d70  str xzr,[x10]
7102ab3d74  add x10,x21,#0x384
7102ab3d78  str xzr,[x8]
7102ab3d7c  add x8,x21,#0x3d1
7102ab3d80  str xzr,[x10]
7102ab3d84  add x10,x21,#0x3b4
7102ab3d88  str xzr,[x8]
7102ab3d8c  add x8,x21,#0x3cc
7102ab3d90  str xzr,[x8]
7102ab3d94  add x8,x21,#0x3c4
7102ab3d98  str xzr,[x8]
7102ab3d9c  add x8,x21,#0x3bc
7102ab3da0  str xzr,[x8]
7102ab3da4  str xzr,[x10]
7102ab3da8  str xzr,[x9]
7102ab3dac  str x19,[x21, #0x400]
7102ab3db0  ldr x9,[x19, #0x310]
7102ab3db4  ldp x8,x9,[x9, #0xd0]
7102ab3db8  cmp x8,x9
7102ab3dbc  str x22,[sp, #0x20]
7102ab3dc0  b.eq 0x7102ab3dfc
7102ab3dc4  mov x10,#0xc89b
7102ab3dc8  movk x10,#0x62ba, LSL #16
7102ab3dcc  add x23,x21,#0x280
7102ab3dd0  movk x10,#0x10, LSL #32
7102ab3dd4  ldr w11,[x8, #0x8]
7102ab3dd8  cmp w11,#0x1
7102ab3ddc  b.hi 0x7102ab3df0
7102ab3de0  ldr x20,[x8]
7102ab3de4  ldr x11,[x20, #0x68]
7102ab3de8  cmp x11,x10
7102ab3dec  b.eq 0x7102ab4098
7102ab3df0  add x8,x8,#0x10
7102ab3df4  cmp x9,x8
7102ab3df8  b.ne 0x7102ab3dd4
7102ab3dfc  str xzr,[x21, #0x10]
7102ab3e00  adrp x8,0x710446a000
7102ab3e04  ldr q0,[x8, #0x9b0]
7102ab3e08  mov w0,wzr
7102ab3e0c  bl 0x7100492c30
7102ab3e10  mov w8,#0x147b
7102ab3e14  movk w8,#0x3f0e, LSL #16
7102ab3e18  ldr q17,[sp, #0x40]
7102ab3e1c  dup v4.4S,w8
7102ab3e20  adrp x8,0x710446a000
7102ab3e24  ldr q16,[x8, #0x190]
7102ab3e28  mov w8,#0xc083
7102ab3e2c  movk w8,#0x3dca, LSL #16
7102ab3e30  fmul v5.4S,v0.4S,v0.S[0x0]
7102ab3e34  fmla v5.4S,v1.4S,v0.S[0x1]
7102ab3e38  fmul v6.4S,v0.4S,v1.S[0x0]
7102ab3e3c  fmla v6.4S,v1.4S,v1.S[0x1]
7102ab3e40  fmul v7.4S,v0.4S,v2.S[0x0]
7102ab3e44  fmla v7.4S,v1.4S,v2.S[0x1]
7102ab3e48  stp q17,q16,[x21, #0x180]
7102ab3e4c  ldr q17,[sp, #0x60]
7102ab3e50  dup v16.4S,w8
7102ab3e54  mov w8,#0xa1cb
7102ab3e58  movk w8,#0x3e85, LSL #16
7102ab3e5c  fmul v4.4S,v0.4S,v4.4S
7102ab3e60  str q17,[x21, #0x160]
7102ab3e64  ldr q17,[sp, #0x50]
7102ab3e68  fmla v4.4S,v16.4S,v1.4S
7102ab3e6c  fmla v5.4S,v2.4S,v0.S[0x2]
7102ab3e70  dup v16.4S,w8
7102ab3e74  adrp x8,0x7104469000
7102ab3e78  str q17,[x21, #0x170]
7102ab3e7c  fmla v4.4S,v16.4S,v2.4S
7102ab3e80  ldr q16,[x8, #0x3d0]
7102ab3e84  fmla v6.4S,v2.4S,v1.S[0x2]
7102ab3e88  mov v16.S[0x3],v3.S[0x3]
7102ab3e8c  fmla v7.4S,v2.4S,v2.S[0x2]
7102ab3e90  fmla v5.4S,v16.4S,v0.S[0x3]
7102ab3e94  fmla v6.4S,v16.4S,v1.S[0x3]
7102ab3e98  fmla v7.4S,v16.4S,v2.S[0x3]
7102ab3e9c  fmla v4.4S,v16.4S,v3.S[0x3]
7102ab3ea0  ldr x20,[x21, #0x8]
7102ab3ea4  mov w1,#0x240
7102ab3ea8  mov w0,#0x10
7102ab3eac  stp q5,q6,[x21, #0x120]
7102ab3eb0  stp q7,q4,[x21, #0x140]
7102ab3eb4  bl 0x710392e290
7102ab3eb8  mov x22,x0
7102ab3ebc  cbnz x0,0x7102ab3f08
7102ab3ec0  adrp x8,0x7105332000
7102ab3ec4  ldr x0,[x8, #0xf00]
7102ab3ec8  cbz x0,0x7102ab3f04
7102ab3ecc  mov w8,#0x240
7102ab3ed0  str wzr,[sp, #0x70]
7102ab3ed4  add x1,sp,#0x70
7102ab3ed8  str x8,[sp, #0xa0]
7102ab3edc  ldr x8,[x0]
7102ab3ee0  ldr x8,[x8, #0x30]
7102ab3ee4  add x2,sp,#0xa0
7102ab3ee8  blr x8
7102ab3eec  tbz w0,#0x0,0x7102ab3f04
7102ab3ef0  mov w1,#0x240
7102ab3ef4  mov w0,#0x10
7102ab3ef8  bl 0x710392e290
7102ab3efc  mov x22,x0
7102ab3f00  cbnz x0,0x7102ab3f08
7102ab3f04  mov x22,xzr
7102ab3f08  ldr x24,[sp, #0x28]
7102ab3f0c  mov x27,#0x1
7102ab3f10  mov w19,#0x4
7102ab3f14  mov x8,#0x100000001
7102ab3f18  movk x27,#0x10, LSL #32
7102ab3f1c  add x2,sp,#0xa0
7102ab3f20  mov x0,x22
7102ab3f24  add x23,sp,#0xa0
7102ab3f28  str x27,[sp, #0xb0]
7102ab3f2c  stp x19,x8,[sp, #0xa0]
7102ab3f30  mov x1,x24
7102ab3f34  bl 0x710313e6a0
7102ab3f38  stp xzr,xzr,[x22, #0x80]
7102ab3f3c  ldr q0,[sp, #0x60]
7102ab3f40  str q0,[x22, #0x150]
7102ab3f44  ldr q0,[sp, #0x50]
7102ab3f48  mov w8,#0x1
7102ab3f4c  adrp x9,0x710510c000
7102ab3f50  add x9,x9,#0xdb8
7102ab3f54  str w19,[x22, #0x44]
7102ab3f58  mov x19,x24
7102ab3f5c  str q0,[x22, #0x160]
7102ab3f60  ldr q0,[sp, #0x40]
7102ab3f64  strh wzr,[x22, #0x48]
7102ab3f68  strb w8,[x22, #0x5c]
7102ab3f6c  str q0,[x22, #0x170]
7102ab3f70  ldr q0,[sp, #0x30]
7102ab3f74  stur xzr,[x22, #0x54]
7102ab3f78  stur xzr,[x22, #0x4c]
7102ab3f7c  strb wzr,[x22, #0x60]
7102ab3f80  str x9,[x22]
7102ab3f84  str x20,[x22, #0x68]
7102ab3f88  stp xzr,xzr,[x22, #0x70]
7102ab3f8c  adrp x24,0x71052a8000
7102ab3f90  add x2,x22,#0x1b0
7102ab3f94  mov x1,x19
7102ab3f98  strb wzr,[x22, #0x190]
7102ab3f9c  str wzr,[x22, #0x194]
7102ab3fa0  strb wzr,[x22, #0x198]
7102ab3fa4  stp xzr,xzr,[x22, #0x1a0]
7102ab3fa8  str q0,[x22, #0x180]
7102ab3fac  ldr x24,[x24, #0xa80]
7102ab3fb0  ldr q0,[x24]
7102ab3fb4  strh w8,[x22, #0x1b8]
7102ab3fb8  mov w8,#0xffffffff
7102ab3fbc  str x19,[x22, #0x1b0]
7102ab3fc0  strb wzr,[x22, #0x1ba]
7102ab3fc4  str w8,[x22, #0x1bc]
7102ab3fc8  adrp x8,0x710532a000
7102ab3fcc  str wzr,[x22, #0x1f0]
7102ab3fd0  stp xzr,xzr,[x22, #0x1e0]
7102ab3fd4  stp q0,q0,[x22, #0x1c0]
7102ab3fd8  ldr x8,[x8, #0x9d8]
7102ab3fdc  ldr x8,[x8]
7102ab3fe0  ldr x0,[x8, #0x1c8]
7102ab3fe4  bl 0x71031675b0
7102ab3fe8  and w8,w0,#0x1
7102ab3fec  add x0,sp,#0xa0
7102ab3ff0  strb w8,[x22, #0x1b8]
7102ab3ff4  str xzr,[x22, #0x200]
7102ab3ff8  strb wzr,[x22, #0x208]
7102ab3ffc  mov x2,#0x84a3
7102ab4000  movk x2,#0x6023, LSL #16
7102ab4004  str x19,[x22, #0x210]
7102ab4008  movk x2,#0x11, LSL #32
7102ab400c  strb wzr,[x22, #0x230]
7102ab4010  add x20,x22,#0x218
7102ab4014  str xzr,[x22, #0x228]
7102ab4018  str xzr,[x22, #0x220]
7102ab401c  str xzr,[x22, #0x218]
7102ab4020  ldr x1,[x19, #0x320]
7102ab4024  bl 0x7102626be0
7102ab4028  cmp x23,x20
7102ab402c  b.eq 0x7102ab4164
7102ab4030  ldr x9,[x22, #0x228]
7102ab4034  ldr x8,[sp, #0xb0]
7102ab4038  cmp x9,x8
7102ab403c  b.eq 0x7102ab4168
7102ab4040  cbz x8,0x7102ab413c
7102ab4044  cbz x9,0x7102ab406c
7102ab4048  ldr x10,[x20]
7102ab404c  ldr x11,[x22, #0x220]
7102ab4050  str x10,[x11]
7102ab4054  str x11,[x10, #0x8]
7102ab4058  ldr x10,[x9, #0x10]
7102ab405c  sub x10,x10,#0x1
7102ab4060  str x10,[x9, #0x10]
7102ab4064  stp xzr,xzr,[x20, #0x8]
7102ab4068  str xzr,[x20]
7102ab406c  ldr x10,[x8, #0x20]
7102ab4070  add x9,x8,#0x18
7102ab4074  str x9,[x22, #0x218]
7102ab4078  str x10,[x22, #0x220]
7102ab407c  str x20,[x8, #0x20]
7102ab4080  str x20,[x10]
7102ab4084  ldr x9,[x8, #0x10]
7102ab4088  add x9,x9,#0x1
7102ab408c  str x9,[x8, #0x10]
7102ab4090  str x8,[x22, #0x228]
7102ab4094  b 0x7102ab4164
7102ab4098  str x20,[x21, #0x10]
7102ab409c  cbz x20,0x7102ab4334
7102ab40a0  ldr x8,[x20, #0xd8]
7102ab40a4  cbz x8,0x7102ab5524
7102ab40a8  ldrb w8,[x20, #0xe0]
7102ab40ac  cbz w8,0x7102ab40bc
7102ab40b0  ldr x8,[x20, #0xc8]
7102ab40b4  cbz x8,0x7102ab40bc
7102ab40b8  strh wzr,[x8, #0x32]
7102ab40bc  ldr x8,[x20, #0xd8]
7102ab40c0  cbz x8,0x7102ab40c8
7102ab40c4  strb wzr,[x8, #0x22]
7102ab40c8  ldr x8,[x21, #0x10]
7102ab40cc  cbz x8,0x7102ab4108
7102ab40d0  ldrb w9,[x8, #0xe0]
7102ab40d4  cbz w9,0x7102ab40e8
7102ab40d8  ldr x9,[x8, #0xc8]
7102ab40dc  cbz x9,0x7102ab40e8
7102ab40e0  mov w10,#0x101
7102ab40e4  strh w10,[x9, #0x30]
7102ab40e8  ldr x9,[x8, #0xd8]
7102ab40ec  cbz x9,0x7102ab40f8
7102ab40f0  mov w10,#0x1
7102ab40f4  strb w10,[x9, #0x21]
7102ab40f8  ldrb w9,[x8, #0xe0]
7102ab40fc  cbz w9,0x7102ab4108
7102ab4100  ldr x8,[x8, #0xb0]
7102ab4104  strb wzr,[x8, #0x10]
7102ab4108  ldr x19,[x21, #0x10]
7102ab410c  cbz x19,0x7102ab4484
7102ab4110  ldr x8,[x19, #0xd8]
7102ab4114  cbz x8,0x7102ab5250
7102ab4118  ldr x8,[x8, #0x8]
7102ab411c  ldr x0,[x8, #0x8]
7102ab4120  ldr x8,[x0]
7102ab4124  ldr x8,[x8, #0x18]
7102ab4128  adrp x1,0x7104317000
7102ab412c  add x1,x1,#0x93
7102ab4130  blr x8
7102ab4134  mov w22,w0
7102ab4138  b 0x7102ab5254
7102ab413c  cbz x9,0x7102ab4164
7102ab4140  ldr x8,[x22, #0x218]
7102ab4144  ldr x10,[x22, #0x220]
7102ab4148  str x8,[x10]
7102ab414c  str x10,[x8, #0x8]
7102ab4150  ldr x8,[x9, #0x10]
7102ab4154  sub x8,x8,#0x1
7102ab4158  str x8,[x9, #0x10]
7102ab415c  stp xzr,xzr,[x20, #0x8]
7102ab4160  str xzr,[x20]
7102ab4164  ldr x8,[sp, #0xb0]
7102ab4168  cbz x8,0x7102ab418c
7102ab416c  ldp x9,x10,[sp, #0xa0]
7102ab4170  str x9,[x10]
7102ab4174  str x10,[x9, #0x8]
7102ab4178  ldr x9,[x8, #0x10]
7102ab417c  sub x9,x9,#0x1
7102ab4180  str x9,[x8, #0x10]
7102ab4184  stp xzr,xzr,[sp, #0xa8]
7102ab4188  str xzr,[sp, #0xa0]
7102ab418c  ldr x8,[x22, #0x228]
7102ab4190  cbz x8,0x7102ab45c4
7102ab4194  adrp x9,0x71052a8000
7102ab4198  ldr x9,[x9, #0xaf8]
7102ab419c  ldr q1,[x9]
7102ab41a0  fmov s0,wzr
7102ab41a4  ext v2.16B,v1.16B,v1.16B,0x8
7102ab41a8  mov v3.16B,v1.16B
7102ab41ac  mov v2.S[0x1],v0.S[0x0]
7102ab41b0  ldrb w9,[x8, #0x35]
7102ab41b4  mov v3.D[0x1],v2.D[0x0]
7102ab41b8  str q3,[x8, #0x70]
7102ab41bc  cbz w9,0x7102ab4240
7102ab41c0  ldr w10,[x8, #0x3c]
7102ab41c4  cmp w10,#0x1
7102ab41c8  b.lt 0x7102ab424c
7102ab41cc  adrp x8,0x7105334000
7102ab41d0  ldr x8,[x8, #0x920]
7102ab41d4  ldr x8,[x8]
7102ab41d8  lsr x9,x10,#0x18
7102ab41dc  orr w11,wzr,#0x300
7102ab41e0  madd x11,x9,x11,x8
7102ab41e4  cbz x11,0x7102ab424c
7102ab41e8  ldr w11,[x11, #0x4]
7102ab41ec  cmp w11,w10
7102ab41f0  b.ne 0x7102ab424c
7102ab41f4  dup s3,v1.S[0x2]
7102ab41f8  mov v4.16B,v1.16B
7102ab41fc  mov v4.D[0x1],v2.D[0x0]
7102ab4200  orr w10,wzr,#0x300
7102ab4204  dup s2,v1.S[0x1]
7102ab4208  madd x8,x9,x10,x8
7102ab420c  mov w9,#0x1
7102ab4210  strb w9,[x8, #0x2da]
7102ab4214  ldr w9,[x8, #0x26c]
7102ab4218  fcmp s1,s3
7102ab421c  and w10,w9,#0xffffdfff
7102ab4220  orr w9,w9,#0x2000
7102ab4224  fccmp s1,s2,#0x0,eq
7102ab4228  csel w9,w9,w10,ne
7102ab422c  str w9,[x8, #0x26c]
7102ab4230  str q4,[x8, #0x100]
7102ab4234  ldr x9,[x22, #0x228]
7102ab4238  cbnz x9,0x7102ab4254
7102ab423c  b 0x7102ab45c4
7102ab4240  ldr x9,[x8, #0x48]
7102ab4244  orr x9,x9,#0x4
7102ab4248  str x9,[x8, #0x48]
7102ab424c  ldr x9,[x22, #0x228]
7102ab4250  cbz x9,0x7102ab45c4
7102ab4254  adrp x8,0x71052a8000
7102ab4258  ldr x8,[x8, #0xa88]
7102ab425c  ldr q1,[x8]
7102ab4260  ext v2.16B,v1.16B,v1.16B,0x8
7102ab4264  mov v2.S[0x1],v0.S[0x0]
7102ab4268  mov v3.16B,v1.16B
7102ab426c  mov v3.D[0x1],v2.D[0x0]
7102ab4270  ldrb w10,[x9, #0x35]
7102ab4274  str q3,[x9, #0x50]
7102ab4278  cbz w10,0x7102ab42f0
7102ab427c  ldr w12,[x9, #0x3c]
7102ab4280  cmp w12,#0x1
7102ab4284  b.lt 0x7102ab44c4
7102ab4288  adrp x10,0x7105334000
7102ab428c  ldr x10,[x10, #0x920]
7102ab4290  ldr x10,[x10]
7102ab4294  lsr x11,x12,#0x18
7102ab4298  orr w13,wzr,#0x300
7102ab429c  madd x13,x11,x13,x10
7102ab42a0  cbz x13,0x7102ab44c4
7102ab42a4  ldr w13,[x13, #0x4]
7102ab42a8  cmp w13,w12
7102ab42ac  b.ne 0x7102ab44c4
7102ab42b0  orr w12,wzr,#0x300
7102ab42b4  madd x12,x11,x12,x10
7102ab42b8  ldrb w12,[x12, #0x2d6]
7102ab42bc  cbz w12,0x7102ab4490
7102ab42c0  orr w12,wzr,#0x300
7102ab42c4  madd x12,x11,x12,x10
7102ab42c8  ldr q1,[x12, #0xf0]
7102ab42cc  mov v1.S[0x0],v3.S[0x0]
7102ab42d0  add x13,x9,#0x54
7102ab42d4  str q1,[x12, #0xf0]
7102ab42d8  ld1 {v1.S}[1],[x13]
7102ab42dc  add x9,x9,#0x58
7102ab42e0  str q1,[x12, #0xf0]
7102ab42e4  ld1 {v1.S}[2],[x9]
7102ab42e8  str q1,[x12, #0xf0]
7102ab42ec  b 0x7102ab44a8
7102ab42f0  ldr x10,[x9, #0x48]
7102ab42f4  orr x10,x10,#0x1
7102ab42f8  str x10,[x9, #0x48]
7102ab42fc  ldr x9,[x22, #0x228]
7102ab4300  cbnz x9,0x7102ab44cc
7102ab4304  b 0x7102ab45c4
7102ab4308  cbz x24,0x7102ab446c
7102ab430c  ldr x8,[x24, #0x8]
7102ab4310  ldr x8,[x8, #0x108]
7102ab4314  ldr x25,[sp, #0x8]
7102ab4318  cbz x8,0x7102ab3808
7102ab431c  strb wzr,[x8, #0x44]
7102ab4320  ldr x25,[x20, #0x10]
7102ab4324  ldp x19,x27,[x25, #0x18]
7102ab4328  cmp x19,x27
7102ab432c  b.ne 0x7102ab3810
7102ab4330  b 0x7102ab3870
7102ab4334  cbnz x20,0x7102ab5524
7102ab4338  b 0x7102ab3e00
7102ab433c  ldr x19,[sp, #0x10]
7102ab4340  adrp x28,0x710517b000
7102ab4344  add x28,x28,#0x340
7102ab4348  cbz x24,0x7102ab3884
7102ab434c  ldr x8,[x24, #0x8]
7102ab4350  ldr x8,[x8, #0x108]
7102ab4354  cbz x8,0x7102ab3884
7102ab4358  strb wzr,[x8, #0x44]
7102ab435c  ldr x25,[x20, #0x10]
7102ab4360  b 0x7102ab3884
7102ab4364  cmp x21,#0x0
7102ab4368  cset w19,eq
7102ab436c  tbnz w19,#0x0,0x7102ab439c
7102ab4370  ldr x1,[x20, #0x2e0]
7102ab4374  cbz x1,0x7102ab439c
7102ab4378  ldr x19,[x21, #0xd8]
7102ab437c  cbz x19,0x7102ab439c
7102ab4380  ldr x8,[x21, #0xd0]
7102ab4384  cbz x8,0x7102ab439c
7102ab4388  ldr x0,[x19, #0x8]
7102ab438c  fmov s0,wzr
7102ab4390  bl 0x710367c160
7102ab4394  tbz w0,#0x0,0x7102ab439c
7102ab4398  str wzr,[x19, #0x10]
7102ab439c  ldr x0,[x27]
7102ab43a0  fmov s0,wzr
7102ab43a4  mov w1,#0x1
7102ab43a8  bl 0x710260fdd0
7102ab43ac  ldr x8,[x27]
7102ab43b0  ldr x19,[sp, #0x28]
7102ab43b4  cbz x8,0x7102ab2b3c
7102ab43b8  ldrb w9,[x8, #0x118]
7102ab43bc  orr w9,w9,#0x1
7102ab43c0  strb w9,[x8, #0x118]
7102ab43c4  b 0x7102ab2b3c
7102ab43c8  cmp x22,#0x0
7102ab43cc  cset w23,eq
7102ab43d0  mov w8,#0x6573
7102ab43d4  movk w8,#0x74, LSL #16
7102ab43d8  str w8,[x20, #0x310]
7102ab43dc  adrp x8,0x71042c2000
7102ab43e0  add x8,x8,#0xe1c
7102ab43e4  ldp x9,x8,[x8]
7102ab43e8  str x8,[x20, #0x308]
7102ab43ec  str x9,[x20, #0x300]
7102ab43f0  adrp x8,0x710438a000
7102ab43f4  add x8,x8,#0xd24
7102ab43f8  ldur x10,[x8, #0xd]
7102ab43fc  add x9,x20,#0x34d
7102ab4400  str x10,[x9]
7102ab4404  ldp x9,x8,[x8]
7102ab4408  str x8,[x20, #0x348]
7102ab440c  str x9,[x20, #0x340]
7102ab4410  tbnz w23,#0x0,0x7102ab4440
7102ab4414  ldr x1,[x20, #0x2f0]
7102ab4418  cbz x1,0x7102ab4440
7102ab441c  ldr x19,[x22, #0xd8]
7102ab4420  cbz x19,0x7102ab4440
7102ab4424  ldr x8,[x22, #0xd0]
7102ab4428  cbz x8,0x7102ab4440
7102ab442c  ldr x0,[x19, #0x8]
7102ab4430  fmov s0,wzr
7102ab4434  bl 0x710367c160
7102ab4438  tbz w0,#0x0,0x7102ab4440
7102ab443c  str wzr,[x19, #0x10]
7102ab4440  ldr x0,[x26]
7102ab4444  fmov s0,wzr
7102ab4448  mov w1,#0x1
7102ab444c  bl 0x710260fdd0
7102ab4450  ldr x8,[x26]
7102ab4454  ldr x19,[sp, #0x28]
7102ab4458  cbz x8,0x7102ab2b84
7102ab445c  ldrb w9,[x8, #0x118]
7102ab4460  orr w9,w9,#0x1
7102ab4464  strb w9,[x8, #0x118]
7102ab4468  b 0x7102ab2b84
7102ab446c  ldr x25,[sp, #0x8]
7102ab4470  cmp x19,x27
7102ab4474  b.ne 0x7102ab3810
7102ab4478  b 0x7102ab3870
7102ab447c  str x19,[x20, #0x28]
7102ab4480  b 0x7102ab5244
7102ab4484  str x19,[x21, #0x1a8]
7102ab4488  mov w22,#0xffffffff
7102ab448c  b 0x7102ab53d8
7102ab4490  mov v1.D[0x1],v2.D[0x0]
7102ab4494  orr w9,wzr,#0x300
7102ab4498  madd x9,x11,x9,x10
7102ab449c  mov w12,#0x1
7102ab44a0  strb w12,[x9, #0x2da]
7102ab44a4  str q1,[x9, #0x120]
7102ab44a8  orr w9,wzr,#0x300
7102ab44ac  madd x9,x11,x9,x10
7102ab44b0  ldr x9,[x9, #0x58]
7102ab44b4  cbnz x9,0x7102ab44c4
7102ab44b8  orr w9,wzr,#0x300
7102ab44bc  madd x9,x11,x9,x10
7102ab44c0  stp xzr,xzr,[x9, #0x130]
7102ab44c4  ldr x9,[x22, #0x228]
7102ab44c8  cbz x9,0x7102ab45c4
7102ab44cc  ldr q1,[x8]
7102ab44d0  ldrb w8,[x9, #0x35]
7102ab44d4  ext v2.16B,v1.16B,v1.16B,0x8
7102ab44d8  mov v2.S[0x1],v0.S[0x0]
7102ab44dc  mov v0.16B,v1.16B
7102ab44e0  mov v0.D[0x1],v2.D[0x0]
7102ab44e4  str q0,[x9, #0x60]
7102ab44e8  cbz w8,0x7102ab4544
7102ab44ec  ldr w9,[x9, #0x3c]
7102ab44f0  cmp w9,#0x1
7102ab44f4  b.lt 0x7102ab4550
7102ab44f8  adrp x8,0x7105334000
7102ab44fc  ldr x8,[x8, #0x920]
7102ab4500  ldr x8,[x8]
7102ab4504  lsr x10,x9,#0x18
7102ab4508  orr w11,wzr,#0x300
7102ab450c  madd x11,x10,x11,x8
7102ab4510  cbz x11,0x7102ab4550
7102ab4514  ldr w11,[x11, #0x4]
7102ab4518  cmp w11,w9
7102ab451c  b.ne 0x7102ab4550
7102ab4520  mov v1.D[0x1],v2.D[0x0]
7102ab4524  orr w9,wzr,#0x300
7102ab4528  madd x8,x10,x9,x8
7102ab452c  mov w9,#0x1
7102ab4530  strb w9,[x8, #0x2da]
7102ab4534  str q1,[x8, #0x110]
7102ab4538  ldr x8,[x22, #0x228]
7102ab453c  cbnz x8,0x7102ab4558
7102ab4540  b 0x7102ab45c4
7102ab4544  ldr x8,[x9, #0x48]
7102ab4548  orr x8,x8,#0x2
7102ab454c  str x8,[x9, #0x48]
7102ab4550  ldr x8,[x22, #0x228]
7102ab4554  cbz x8,0x7102ab45c4
7102ab4558  ldrb w9,[x8, #0x35]
7102ab455c  cbz w9,0x7102ab45c4
7102ab4560  ldr w19,[x8, #0x3c]
7102ab4564  adrp x8,0x7105334000
7102ab4568  ldr x8,[x8, #0x920]
7102ab456c  ldr x20,[x8]
7102ab4570  mov w8,#0x9498
7102ab4574  movk w8,#0x1, LSL #16
7102ab4578  add x23,x20,x8
7102ab457c  mov x0,x23
7102ab4580  bl 0x71039c19c0
7102ab4584  cmp w19,#0x1
7102ab4588  b.lt 0x7102ab45b8
7102ab458c  lsr x8,x19,#0x18
7102ab4590  orr w9,wzr,#0x300
7102ab4594  madd x0,x8,x9,x20
7102ab4598  cbz x0,0x7102ab45b8
7102ab459c  ldr w8,[x0, #0x4]
7102ab45a0  cmp w8,w19
7102ab45a4  b.ne 0x7102ab45b8
7102ab45a8  mov w1,wzr
7102ab45ac  mov w2,wzr
7102ab45b0  mov w3,wzr
7102ab45b4  bl 0x71035707d0
7102ab45b8  mov x0,x23
7102ab45bc  bl 0x71039c19d0
7102ab45c0  ldr x19,[sp, #0x28]
7102ab45c4  mov w8,#0x4
7102ab45c8  stur x8,[x29, #-0x78]
7102ab45cc  mov x8,#0x100000001
7102ab45d0  mov w1,#0x48
7102ab45d4  mov w0,#0x10
7102ab45d8  stp x8,x27,[x29, #-0x70]
7102ab45dc  bl 0x710392e290
7102ab45e0  mov x23,x0
7102ab45e4  cbnz x0,0x7102ab4630
7102ab45e8  adrp x8,0x7105332000
7102ab45ec  ldr x0,[x8, #0xf00]
7102ab45f0  cbz x0,0x7102ab462c
7102ab45f4  mov w8,#0x48
7102ab45f8  str wzr,[sp, #0x70]
7102ab45fc  add x1,sp,#0x70
7102ab4600  str x8,[sp, #0xa0]
7102ab4604  ldr x8,[x0]
7102ab4608  ldr x8,[x8, #0x30]
7102ab460c  add x2,sp,#0xa0
7102ab4610  blr x8
7102ab4614  tbz w0,#0x0,0x7102ab462c
7102ab4618  mov w1,#0x48
7102ab461c  mov w0,#0x10
7102ab4620  bl 0x710392e290
7102ab4624  mov x23,x0
7102ab4628  cbnz x0,0x7102ab4630
7102ab462c  mov x23,xzr
7102ab4630  mov x27,#0x7a80
7102ab4634  movk x27,#0xfb99, LSL #16
7102ab4638  mov x28,#0xfc4f
7102ab463c  movk x28,#0x25cb, LSL #16
7102ab4640  mov x25,#0x1fca
7102ab4644  movk x25,#0x1ed9, LSL #16
7102ab4648  sub x2,x29,#0x78
7102ab464c  mov x0,x23
7102ab4650  mov x1,x19
7102ab4654  movk x27,#0x7, LSL #32
7102ab4658  movk x28,#0x4, LSL #32
7102ab465c  movk x25,#0x3, LSL #32
7102ab4660  bl 0x710313e6a0
7102ab4664  mov x0,x23
7102ab4668  str x23,[x22, #0x200]
7102ab466c  bl 0x710313ef20
7102ab4670  strb wzr,[sp, #0x146]
7102ab4674  strh wzr,[sp, #0x144]
7102ab4678  adrp x8,0x71052a8000
7102ab467c  str wzr,[sp, #0x140]
7102ab4680  ldr q1,[x24]
7102ab4684  ldr x8,[x8, #0xa88]
7102ab4688  ldr q0,[x8]
7102ab468c  fmov s3,wzr
7102ab4690  ext v2.16B,v0.16B,v0.16B,0x8
7102ab4694  stp q0,q0,[sp, #0x70]
7102ab4698  mov w10,#0x3f
7102ab469c  movk w10,#0x3, LSL #16
7102ab46a0  str w10,[sp, #0xf0]
7102ab46a4  mov w10,#0x19
7102ab46a8  mov v2.S[0x1],v3.S[0x0]
7102ab46ac  strb w10,[sp, #0xf4]
7102ab46b0  mov v0.D[0x1],v2.D[0x0]
7102ab46b4  mov x10,#0x2b3
7102ab46b8  movk x10,#0xa2c5, LSL #16
7102ab46bc  movk x10,#0x15, LSL #32
7102ab46c0  str x10,[sp, #0xf8]
7102ab46c4  mov w10,#0x100
7102ab46c8  str w10,[sp, #0x100]
7102ab46cc  mov w10,#0x1
7102ab46d0  orr w23,wzr,#0x3f800000
7102ab46d4  add x8,sp,#0xa0
7102ab46d8  strh w10,[sp, #0x104]
7102ab46dc  orr w26,wzr,#0xe
7102ab46e0  add x10,sp,#0xa0
7102ab46e4  str w23,[sp, #0x148]
7102ab46e8  stp q0,q0,[sp, #0xa0]
7102ab46ec  add x20,x8,#0xd4
7102ab46f0  orr x9,xzr,#0x300000000
7102ab46f4  strb wzr,[sp, #0x106]
7102ab46f8  strh wzr,[sp, #0x114]
7102ab46fc  strh wzr,[sp, #0x120]
7102ab4700  strb w26,[sp, #0x116]
7102ab4704  stur xzr,[x10, #0x6c]
7102ab4708  stur xzr,[x10, #0x67]
7102ab470c  str xzr,[sp, #0x118]
7102ab4710  str x25,[sp, #0x128]
7102ab4714  str q1,[sp, #0x130]
7102ab4718  add x24,x8,#0x67
7102ab471c  str wzr,[sp, #0x140]
7102ab4720  strh wzr,[sp, #0x144]
7102ab4724  stur x23,[x10, #0xac]
7102ab4728  stp x28,x27,[sp, #0x158]
7102ab472c  mov w27,#0xbf800000
7102ab4730  mov w8,#0xffffffff
7102ab4734  orr w28,wzr,#0x3
7102ab4738  mov w25,w8
7102ab473c  str x9,[sp, #0x90]
7102ab4740  strh wzr,[sp, #0x168]
7102ab4744  strh wzr,[sp, #0x16c]
7102ab4748  str w27,[sp, #0x170]
7102ab474c  stur xzr,[x10, #0xe4]
7102ab4750  stur xzr,[x10, #0xdc]
7102ab4754  stur xzr,[x10, #0xd4]
7102ab4758  str w8,[sp, #0x18c]
7102ab475c  strb w28,[sp, #0x190]
7102ab4760  strb wzr,[sp, #0x191]
7102ab4764  str w23,[sp, #0x194]
7102ab4768  strh wzr,[sp, #0x198]
7102ab476c  strb wzr,[sp, #0x19a]
7102ab4770  ldr x9,[x22, #0x68]
7102ab4774  ldr w8,[x9, #0x154]
7102ab4778  ldr w10,[x9, #0x150]
7102ab477c  stp w10,w8,[sp, #0xc0]
7102ab4780  ldr w10,[x9, #0x158]
7102ab4784  str w10,[sp, #0xc8]
7102ab4788  ldr w10,[x9, #0x15c]
7102ab478c  str w10,[sp, #0xcc]
7102ab4790  ldr w10,[x9, #0x160]
7102ab4794  str w10,[sp, #0xd0]
7102ab4798  ldr w10,[x9, #0x164]
7102ab479c  str w10,[sp, #0xd4]
7102ab47a0  ldr w10,[x9, #0x168]
7102ab47a4  str w10,[sp, #0xd8]
7102ab47a8  ldr w10,[x9, #0x16c]
7102ab47ac  str w10,[sp, #0xdc]
7102ab47b0  ldr w10,[x9, #0x170]
7102ab47b4  str w10,[sp, #0xe0]
7102ab47b8  str xzr,[sp, #0xe8]
7102ab47bc  ldr w10,[x9, #0x174]
7102ab47c0  strh w10,[sp, #0xf0]
7102ab47c4  ldr w10,[x9, #0x178]
7102ab47c8  strb w10,[sp, #0xf2]
7102ab47cc  ldrb w10,[x9, #0x17c]
7102ab47d0  strb w10,[sp, #0xf3]
7102ab47d4  ldr w10,[x9, #0x180]
7102ab47d8  strb w10,[sp, #0xf4]
7102ab47dc  ldr x10,[x9, #0x188]
7102ab47e0  str x10,[sp, #0xf8]
7102ab47e4  ldrb w10,[x9, #0x190]
7102ab47e8  strb w10,[sp, #0x100]
7102ab47ec  ldr w10,[x9, #0x194]
7102ab47f0  strb w10,[sp, #0x101]
7102ab47f4  ldrb w10,[x9, #0x198]
7102ab47f8  strb w10,[sp, #0x102]
7102ab47fc  ldrb w10,[x9, #0x199]
7102ab4800  strb w10,[sp, #0x103]
7102ab4804  ldrb w10,[x9, #0x19a]
7102ab4808  strb w10,[sp, #0x104]
7102ab480c  ldrb w10,[x9, #0x19b]
7102ab4810  strb w10,[sp, #0x105]
7102ab4814  ldrb w10,[x9, #0x19c]
7102ab4818  strb w10,[sp, #0x106]
7102ab481c  ldrh w10,[x9, #0x19e]
7102ab4820  strh w10,[sp, #0x114]
7102ab4824  ldr w10,[x9, #0x1a0]
7102ab4828  str w10,[sp, #0x118]
7102ab482c  ldrb w10,[x9, #0x1a4]
7102ab4830  strb w10,[sp, #0x107]
7102ab4834  ldrb w10,[x9, #0x1a5]
7102ab4838  strb w10,[sp, #0x108]
7102ab483c  ldrb w10,[x9, #0x1a6]
7102ab4840  strb w10,[sp, #0x109]
7102ab4844  ldr w10,[x9, #0x1a8]
7102ab4848  strb w10,[sp, #0x10a]
7102ab484c  ldrb w10,[x9, #0x1ac]
7102ab4850  strb w10,[sp, #0x10b]
7102ab4854  ldrb w10,[x9, #0x1ad]
7102ab4858  strb w10,[sp, #0x10c]
7102ab485c  ldrb w10,[x9, #0x1ae]
7102ab4860  strb w10,[sp, #0x10d]
7102ab4864  ldrb w10,[x9, #0x1af]
7102ab4868  strb w10,[sp, #0x10e]
7102ab486c  ldrb w10,[x9, #0x1b0]
7102ab4870  strb w10,[sp, #0x110]
7102ab4874  ldrb w9,[x9, #0x1b1]
7102ab4878  strb w9,[sp, #0x111]
7102ab487c  strb wzr,[sp, #0x113]
7102ab4880  stp xzr,xzr,[sp, #0x70]
7102ab4884  str q0,[sp, #0x80]
7102ab4888  stp w8,wzr,[sp, #0x90]
7102ab488c  ldr x8,[x22, #0x38]
7102ab4890  cbz x8,0x7102ab48dc
7102ab4894  ldr x0,[x8, #0x130]
7102ab4898  ldr x8,[x0]
7102ab489c  ldr x8,[x8, #0x100]
7102ab48a0  add x2,sp,#0x70
7102ab48a4  orr w4,wzr,#0x6
7102ab48a8  orr w5,wzr,#0x3f
7102ab48ac  mov w1,wzr
7102ab48b0  mov w3,wzr
7102ab48b4  blr x8
7102ab48b8  ldr x8,[x22, #0x38]
7102ab48bc  cbz x8,0x7102ab48dc
7102ab48c0  ldr x0,[x8, #0xa0]
7102ab48c4  ldr x8,[x0]
7102ab48c8  ldr x8,[x8, #0x68]
7102ab48cc  add x3,sp,#0xa0
7102ab48d0  mov w1,wzr
7102ab48d4  mov w2,wzr
7102ab48d8  blr x8
7102ab48dc  adrp x8,0x71052a8000
7102ab48e0  ldr x8,[x8, #0xa88]
7102ab48e4  ldr q0,[x8]
7102ab48e8  mov w8,#0x1
7102ab48ec  movk w8,#0x100, LSL #16
7102ab48f0  ext v1.16B,v0.16B,v0.16B,0x8
7102ab48f4  fmov s2,wzr
7102ab48f8  mov v1.S[0x1],v2.S[0x0]
7102ab48fc  mov v0.D[0x1],v1.D[0x0]
7102ab4900  add x9,sp,#0xa0
7102ab4904  stp q0,q0,[sp, #0xa0]
7102ab4908  stur w8,[x9, #0x61]
7102ab490c  mov x8,#0x1fca
7102ab4910  movk x8,#0x1ed9, LSL #16
7102ab4914  movk x8,#0x3, LSL #32
7102ab4918  sturh wzr,[x9, #0x65]
7102ab491c  strh wzr,[sp, #0x114]
7102ab4920  strb wzr,[sp, #0x121]
7102ab4924  strb w26,[sp, #0x116]
7102ab4928  stur xzr,[x24, #0x5]
7102ab492c  str xzr,[x24]
7102ab4930  str xzr,[sp, #0x118]
7102ab4934  str x8,[sp, #0x128]
7102ab4938  adrp x24,0x71052a8000
7102ab493c  ldr x24,[x24, #0xa80]
7102ab4940  ldr q1,[x24]
7102ab4944  mov x8,#0xfc4f
7102ab4948  movk x8,#0x25cb, LSL #16
7102ab494c  movk x8,#0x4, LSL #32
7102ab4950  str wzr,[sp, #0x140]
7102ab4954  str q1,[sp, #0x130]
7102ab4958  strb wzr,[sp, #0x120]
7102ab495c  strh wzr,[sp, #0x144]
7102ab4960  stur x23,[x9, #0xac]
7102ab4964  str x8,[sp, #0x158]
7102ab4968  mov x8,#0x7a80
7102ab496c  movk x8,#0xfb99, LSL #16
7102ab4970  movk x8,#0x7, LSL #32
7102ab4974  str x8,[sp, #0x160]
7102ab4978  strh wzr,[sp, #0x168]
7102ab497c  strh wzr,[sp, #0x16c]
7102ab4980  str w27,[sp, #0x170]
7102ab4984  str xzr,[x20]
7102ab4988  stp xzr,xzr,[x20, #0x8]
7102ab498c  str w25,[sp, #0x18c]
7102ab4990  strh w28,[sp, #0x190]
7102ab4994  str w23,[sp, #0x194]
7102ab4998  strh wzr,[sp, #0x198]
7102ab499c  strb wzr,[sp, #0x19a]
7102ab49a0  ldr x9,[x22, #0x68]
7102ab49a4  ldr w8,[x9, #0x1b8]
7102ab49a8  ldr w10,[x9, #0x1b4]
7102ab49ac  stp w10,w8,[sp, #0xc0]
7102ab49b0  ldr w10,[x9, #0x1bc]
7102ab49b4  str w10,[sp, #0xc8]
7102ab49b8  ldr w10,[x9, #0x1c0]
7102ab49bc  str w10,[sp, #0xcc]
7102ab49c0  ldr w10,[x9, #0x1c4]
7102ab49c4  str w10,[sp, #0xd0]
7102ab49c8  ldr w10,[x9, #0x1c8]
7102ab49cc  str w10,[sp, #0xd4]
7102ab49d0  ldr w10,[x9, #0x1cc]
7102ab49d4  str w10,[sp, #0xd8]
7102ab49d8  ldr w10,[x9, #0x1d0]
7102ab49dc  str w10,[sp, #0xdc]
7102ab49e0  ldr w10,[x9, #0x1d4]
7102ab49e4  str w10,[sp, #0xe0]
7102ab49e8  str xzr,[sp, #0xe8]
7102ab49ec  ldr w10,[x9, #0x1d8]
7102ab49f0  strh w10,[sp, #0xf0]
7102ab49f4  ldr w10,[x9, #0x1dc]
7102ab49f8  strb w10,[sp, #0xf2]
7102ab49fc  ldrb w10,[x9, #0x1e0]
7102ab4a00  strb w10,[sp, #0xf3]
7102ab4a04  ldr w10,[x9, #0x1e4]
7102ab4a08  strb w10,[sp, #0xf4]
7102ab4a0c  ldr x10,[x9, #0x1e8]
7102ab4a10  str x10,[sp, #0xf8]
7102ab4a14  ldrb w10,[x9, #0x1f0]
7102ab4a18  strb w10,[sp, #0x100]
7102ab4a1c  ldr w10,[x9, #0x1f4]
7102ab4a20  strb w10,[sp, #0x101]
7102ab4a24  ldrb w10,[x9, #0x1f8]
7102ab4a28  strb w10,[sp, #0x102]
7102ab4a2c  ldrb w10,[x9, #0x1f9]
7102ab4a30  strb w10,[sp, #0x103]
7102ab4a34  ldrb w10,[x9, #0x1fa]
7102ab4a38  strb w10,[sp, #0x104]
7102ab4a3c  ldrb w10,[x9, #0x1fb]
7102ab4a40  strb w10,[sp, #0x105]
7102ab4a44  ldrb w10,[x9, #0x1fc]
7102ab4a48  strb w10,[sp, #0x106]
7102ab4a4c  ldrh w10,[x9, #0x1fe]
7102ab4a50  strh w10,[sp, #0x114]
7102ab4a54  ldr w10,[x9, #0x200]
7102ab4a58  str w10,[sp, #0x118]
7102ab4a5c  ldrb w10,[x9, #0x204]
7102ab4a60  strb w10,[sp, #0x107]
7102ab4a64  ldrb w10,[x9, #0x205]
7102ab4a68  strb w10,[sp, #0x108]
7102ab4a6c  ldrb w10,[x9, #0x206]
7102ab4a70  strb w10,[sp, #0x109]
7102ab4a74  ldr w10,[x9, #0x208]
7102ab4a78  strb w10,[sp, #0x10a]
7102ab4a7c  ldrb w10,[x9, #0x20c]
7102ab4a80  strb w10,[sp, #0x10b]
7102ab4a84  ldrb w10,[x9, #0x20d]
7102ab4a88  strb w10,[sp, #0x10c]
7102ab4a8c  ldrb w10,[x9, #0x20e]
7102ab4a90  strb w10,[sp, #0x10d]
7102ab4a94  ldrb w10,[x9, #0x20f]
7102ab4a98  strb w10,[sp, #0x10e]
7102ab4a9c  ldrb w10,[x9, #0x210]
7102ab4aa0  strb w10,[sp, #0x110]
7102ab4aa4  ldrb w9,[x9, #0x211]
7102ab4aa8  stp xzr,xzr,[sp, #0x70]
7102ab4aac  str q0,[sp, #0x80]
7102ab4ab0  strb wzr,[sp, #0x113]
7102ab4ab4  strb w9,[sp, #0x111]
7102ab4ab8  stp w8,wzr,[sp, #0x90]
7102ab4abc  ldr x8,[x22, #0x200]
7102ab4ac0  ldr x8,[x8, #0x38]
7102ab4ac4  cbz x8,0x7102ab4b34
7102ab4ac8  ldr x0,[x8, #0x130]
7102ab4acc  ldr x8,[x0]
7102ab4ad0  ldr x8,[x8, #0x100]
7102ab4ad4  add x2,sp,#0x70
7102ab4ad8  orr w4,wzr,#0x6
7102ab4adc  orr w5,wzr,#0x3f
7102ab4ae0  mov w1,wzr
7102ab4ae4  mov w3,wzr
7102ab4ae8  blr x8
7102ab4aec  ldr x8,[x22, #0x200]
7102ab4af0  ldr x8,[x8, #0x38]
7102ab4af4  cbz x8,0x7102ab4b34
7102ab4af8  ldr x0,[x8, #0xa0]
7102ab4afc  ldr x8,[x0]
7102ab4b00  ldr x8,[x8, #0x68]
7102ab4b04  add x3,sp,#0xa0
7102ab4b08  mov w1,wzr
7102ab4b0c  mov w2,wzr
7102ab4b10  blr x8
7102ab4b14  ldr x8,[x22, #0x200]
7102ab4b18  ldr x8,[x8, #0x38]
7102ab4b1c  cbz x8,0x7102ab4b34
7102ab4b20  ldr x0,[x8, #0x130]
7102ab4b24  ldr x8,[x0]
7102ab4b28  ldr x8,[x8, #0x120]
7102ab4b2c  mov w1,wzr
7102ab4b30  blr x8
7102ab4b34  mov x0,x22
7102ab4b38  str x22,[x21, #0x340]
7102ab4b3c  bl 0x710313ef20
7102ab4b40  ldr x8,[x21, #0x340]
7102ab4b44  ldr x8,[x8, #0x38]
7102ab4b48  cbz x8,0x7102ab4b60
7102ab4b4c  ldr x0,[x8, #0x130]
7102ab4b50  ldr x8,[x0]
7102ab4b54  ldr x8,[x8, #0x120]
7102ab4b58  mov w1,wzr
7102ab4b5c  blr x8
7102ab4b60  mov w1,#0x260
7102ab4b64  mov w0,#0x10
7102ab4b68  bl 0x710392e290
7102ab4b6c  mov x22,x0
7102ab4b70  cbnz x0,0x7102ab4bbc
7102ab4b74  adrp x8,0x7105332000
7102ab4b78  ldr x0,[x8, #0xf00]
7102ab4b7c  cbz x0,0x7102ab4bb8
7102ab4b80  mov w8,#0x260
7102ab4b84  str wzr,[sp, #0x70]
7102ab4b88  add x1,sp,#0x70
7102ab4b8c  str x8,[sp, #0xa0]
7102ab4b90  ldr x8,[x0]
7102ab4b94  ldr x8,[x8, #0x30]
7102ab4b98  add x2,sp,#0xa0
7102ab4b9c  blr x8
7102ab4ba0  tbz w0,#0x0,0x7102ab4bb8
7102ab4ba4  mov w1,#0x260
7102ab4ba8  mov w0,#0x10
7102ab4bac  bl 0x710392e290
7102ab4bb0  mov x22,x0
7102ab4bb4  cbnz x0,0x7102ab4bbc
7102ab4bb8  mov x22,xzr
7102ab4bbc  adrp x8,0x710510d000
7102ab4bc0  add x8,x8,#0x820
7102ab4bc4  mov x20,x22
7102ab4bc8  str x8,[x22]
7102ab4bcc  mov w8,#0x4
7102ab4bd0  add x2,x22,#0x1a0
7102ab4bd4  str xzr,[x20, #0x8]!
7102ab4bd8  stp xzr,xzr,[x22, #0x20]
7102ab4bdc  strb w8,[x22, #0x130]
7102ab4be0  stp xzr,xzr,[x22, #0x10]
7102ab4be4  ldr q0,[sp, #0x60]
7102ab4be8  mov w8,#0x1
7102ab4bec  mov x1,x19
7102ab4bf0  strb wzr,[x22, #0x180]
7102ab4bf4  str wzr,[x22, #0x184]
7102ab4bf8  strb wzr,[x22, #0x188]
7102ab4bfc  str q0,[x22, #0x140]
7102ab4c00  ldr q0,[sp, #0x50]
7102ab4c04  str q0,[x22, #0x150]
7102ab4c08  ldr q0,[sp, #0x40]
7102ab4c0c  str q0,[x22, #0x160]
7102ab4c10  ldr q0,[sp, #0x30]
7102ab4c14  stp xzr,xzr,[x22, #0x190]
7102ab4c18  str q0,[x22, #0x170]
7102ab4c1c  ldr q0,[x24]
7102ab4c20  str x19,[x22, #0x1a0]
7102ab4c24  strh w8,[x22, #0x1a8]
7102ab4c28  strb wzr,[x22, #0x1aa]
7102ab4c2c  str w25,[x22, #0x1ac]
7102ab4c30  str wzr,[x22, #0x1e0]
7102ab4c34  adrp x8,0x710532a000
7102ab4c38  stp xzr,xzr,[x22, #0x1d0]
7102ab4c3c  stp q0,q0,[x22, #0x1b0]
7102ab4c40  ldr x8,[x8, #0x9d8]
7102ab4c44  ldr x8,[x8]
7102ab4c48  ldr x0,[x8, #0x1c8]
7102ab4c4c  bl 0x71031675b0
7102ab4c50  and w8,w0,#0x1
7102ab4c54  add x10,x22,#0x221
7102ab4c58  str xzr,[x22, #0x1f0]
7102ab4c5c  strb w8,[x22, #0x1a8]
7102ab4c60  strb wzr,[x22, #0x1f8]
7102ab4c64  add x8,x22,#0x1fc
7102ab4c68  str xzr,[x10]
7102ab4c6c  add x10,x22,#0x21c
7102ab4c70  add x9,x22,#0x22c
7102ab4c74  str xzr,[x10]
7102ab4c78  add x10,x22,#0x214
7102ab4c7c  str xzr,[x10]
7102ab4c80  add x10,x22,#0x20c
7102ab4c84  str xzr,[x10]
7102ab4c88  add x10,x22,#0x204
7102ab4c8c  str xzr,[x8]
7102ab4c90  add x8,x22,#0x249
7102ab4c94  str xzr,[x10]
7102ab4c98  add x10,x22,#0x23c
7102ab4c9c  str xzr,[x8]
7102ab4ca0  add x8,x22,#0x244
7102ab4ca4  str xzr,[x8]
7102ab4ca8  add x8,x22,#0x234
7102ab4cac  str xzr,[x10]
7102ab4cb0  str xzr,[x8]
7102ab4cb4  str xzr,[x9]
7102ab4cb8  ldr x9,[x19, #0x310]
7102ab4cbc  ldp x8,x9,[x9, #0xd0]
7102ab4cc0  cmp x8,x9
7102ab4cc4  b.eq 0x7102ab4cfc
7102ab4cc8  mov x10,#0x564f
7102ab4ccc  movk x10,#0x9012, LSL #16
7102ab4cd0  movk x10,#0xe, LSL #32
7102ab4cd4  ldr w11,[x8, #0x8]
7102ab4cd8  cmp w11,#0x1
7102ab4cdc  b.hi 0x7102ab4cf0
7102ab4ce0  ldr x24,[x8]
7102ab4ce4  ldr x11,[x24, #0x68]
7102ab4ce8  cmp x11,x10
7102ab4cec  b.eq 0x7102ab506c
7102ab4cf0  add x8,x8,#0x10
7102ab4cf4  cmp x9,x8
7102ab4cf8  b.ne 0x7102ab4cd4
7102ab4cfc  str xzr,[x20]
7102ab4d00  ldr x20,[sp, #0x10]
7102ab4d04  ldr x8,[x19, #0x338]
7102ab4d08  add x9,x22,#0x200
7102ab4d0c  str x8,[x22, #0x1f0]
7102ab4d10  str x9,[sp, #0xa0]
7102ab4d14  ldr x9,[x8]
7102ab4d18  ldr x0,[x9, #0x8]
7102ab4d1c  cbz x0,0x7102ab4d34
7102ab4d20  add x1,sp,#0xa0
7102ab4d24  mov w2,wzr
7102ab4d28  bl 0x7102405040
7102ab4d2c  ldr x8,[x19, #0x338]
7102ab4d30  b 0x7102ab4d38
7102ab4d34  mov w0,#0xffffffff
7102ab4d38  mov x9,#0x25
7102ab4d3c  movk x9,#0x26, LSL #32
7102ab4d40  str x9,[x22, #0x210]
7102ab4d44  add x9,x22,#0x230
7102ab4d48  str w0,[x22, #0x1fc]
7102ab4d4c  str wzr,[x22, #0x218]
7102ab4d50  str x8,[x22, #0x220]
7102ab4d54  str x9,[sp, #0xa0]
7102ab4d58  ldr x8,[x8]
7102ab4d5c  ldr x0,[x8, #0x8]
7102ab4d60  cbz x0,0x7102ab4d74
7102ab4d64  add x1,sp,#0xa0
7102ab4d68  mov w2,wzr
7102ab4d6c  bl 0x7102405040
7102ab4d70  b 0x7102ab4d78
7102ab4d74  mov w0,#0xffffffff
7102ab4d78  mov x8,#0x27
7102ab4d7c  movk x8,#0x28, LSL #32
7102ab4d80  str w0,[x22, #0x22c]
7102ab4d84  str wzr,[x22, #0x248]
7102ab4d88  str x8,[x22, #0x240]
7102ab4d8c  ldr x0,[x21, #0x348]
7102ab4d90  str x22,[x21, #0x348]
7102ab4d94  cbz x0,0x7102ab4da4
7102ab4d98  ldr x8,[x0]
7102ab4d9c  ldr x8,[x8, #0x8]
7102ab4da0  blr x8
7102ab4da4  ldr x22,[sp, #0x20]
7102ab4da8  mov x8,#0x100
7102ab4dac  movk x8,#0x302, LSL #16
7102ab4db0  movk x8,#0x504, LSL #32
7102ab4db4  movk x8,#0x706, LSL #48
7102ab4db8  str x8,[x21, #0x308]
7102ab4dbc  add x8,x21,#0x380
7102ab4dc0  str x22,[x21, #0x370]
7102ab4dc4  str x8,[sp, #0xa0]
7102ab4dc8  ldr x8,[x22]
7102ab4dcc  ldr x0,[x8, #0x8]
7102ab4dd0  cbz x0,0x7102ab4de4
7102ab4dd4  add x1,sp,#0xa0
7102ab4dd8  mov w2,wzr
7102ab4ddc  bl 0x7102405040
7102ab4de0  b 0x7102ab4de8
7102ab4de4  mov w0,#0xffffffff
7102ab4de8  mov x8,#0x1c
7102ab4dec  movk x8,#0x1d, LSL #32
7102ab4df0  str x8,[x21, #0x390]
7102ab4df4  add x8,x21,#0x3b0
7102ab4df8  str w0,[x21, #0x37c]
7102ab4dfc  str wzr,[x21, #0x398]
7102ab4e00  str x22,[x21, #0x3a0]
7102ab4e04  str x8,[sp, #0xa0]
7102ab4e08  ldr x8,[x22]
7102ab4e0c  ldr x0,[x8, #0x8]
7102ab4e10  cbz x0,0x7102ab4e24
7102ab4e14  add x1,sp,#0xa0
7102ab4e18  mov w2,wzr
7102ab4e1c  bl 0x7102405040
7102ab4e20  b 0x7102ab4e28
7102ab4e24  mov w0,#0xffffffff
7102ab4e28  mov x8,#0x1e
7102ab4e2c  movk x8,#0x1f, LSL #32
7102ab4e30  str x8,[x21, #0x3c0]
7102ab4e34  add x8,x21,#0x3e0
7102ab4e38  str w0,[x21, #0x3ac]
7102ab4e3c  str wzr,[x21, #0x3c8]
7102ab4e40  str x22,[x21, #0x3d0]
7102ab4e44  str x8,[sp, #0xa0]
7102ab4e48  ldr x8,[x22]
7102ab4e4c  ldr x0,[x8, #0x8]
7102ab4e50  cbz x0,0x7102ab4e64
7102ab4e54  add x1,sp,#0xa0
7102ab4e58  mov w2,wzr
7102ab4e5c  bl 0x7102405040
7102ab4e60  b 0x7102ab4e68
7102ab4e64  mov w0,#0xffffffff
7102ab4e68  mov x8,#0x21
7102ab4e6c  movk x8,#0x22, LSL #32
7102ab4e70  str w0,[x21, #0x3dc]
7102ab4e74  str wzr,[x21, #0x3f8]
7102ab4e78  str x8,[x21, #0x3f0]
7102ab4e7c  ldr x0,[x19, #0xa98]
7102ab4e80  str x21,[x19, #0xa98]
7102ab4e84  cbz x0,0x7102ab4e94
7102ab4e88  ldr x8,[x0]
7102ab4e8c  ldr x8,[x8, #0x8]
7102ab4e90  blr x8
7102ab4e94  adrp x8,0x710425d000
7102ab4e98  add x8,x8,#0x486
7102ab4e9c  str x8,[sp, #0xa0]
7102ab4ea0  adrp x8,0x710510d000
7102ab4ea4  add x8,x8,#0x700
7102ab4ea8  mov w1,#0x160
7102ab4eac  ldp x9,x10,[x8, #0x10]
7102ab4eb0  mov w0,#0x10
7102ab4eb4  stp x9,x10,[sp, #0xb8]
7102ab4eb8  ldp x9,x8,[x8]
7102ab4ebc  stp x9,x8,[sp, #0xa8]
7102ab4ec0  adrp x8,0x71043cd000
7102ab4ec4  add x8,x8,#0x5de
7102ab4ec8  adrp x9,0x7104338000
7102ab4ecc  add x9,x9,#0x324
7102ab4ed0  stp x8,x9,[sp, #0xc8]
7102ab4ed4  ldr x21,[x19, #0x338]
7102ab4ed8  bl 0x710392e290
7102ab4edc  mov x22,x0
7102ab4ee0  cbnz x0,0x7102ab4f2c
7102ab4ee4  adrp x8,0x7105332000
7102ab4ee8  ldr x0,[x8, #0xf00]
7102ab4eec  cbz x0,0x7102ab4f28
7102ab4ef0  mov w8,#0x160
7102ab4ef4  stur wzr,[x29, #-0x78]
7102ab4ef8  sub x1,x29,#0x78
7102ab4efc  str x8,[sp, #0x70]
7102ab4f00  ldr x8,[x0]
7102ab4f04  ldr x8,[x8, #0x30]
7102ab4f08  add x2,sp,#0x70
7102ab4f0c  blr x8
7102ab4f10  tbz w0,#0x0,0x7102ab4f28
7102ab4f14  mov w1,#0x160
7102ab4f18  mov w0,#0x10
7102ab4f1c  bl 0x710392e290
7102ab4f20  mov x22,x0
7102ab4f24  cbnz x0,0x7102ab4f2c
7102ab4f28  mov x22,xzr
7102ab4f2c  add x2,sp,#0xa0
7102ab4f30  mov x0,x22
7102ab4f34  mov x1,x19
7102ab4f38  mov x3,x20
7102ab4f3c  mov x4,x21
7102ab4f40  bl 0x7102abef70
7102ab4f44  ldr x0,[x19, #0xaa0]
7102ab4f48  str x22,[x19, #0xaa0]
7102ab4f4c  cbz x0,0x7102ab4f5c
7102ab4f50  ldr x8,[x0]
7102ab4f54  ldr x8,[x8, #0x8]
7102ab4f58  blr x8
7102ab4f5c  adrp x8,0x71043cd000
7102ab4f60  add x8,x8,#0x5ef
7102ab4f64  adrp x9,0x7104463000
7102ab4f68  add x9,x9,#0xc63
7102ab4f6c  str x8,[sp, #0xa0]
7102ab4f70  adrp x8,0x710510d000
7102ab4f74  add x8,x8,#0x720
7102ab4f78  adrp x10,0x71042d4000
7102ab4f7c  add x10,x10,#0x518
7102ab4f80  stp x10,x9,[sp, #0xa8]
7102ab4f84  mov w0,#0x10
7102ab4f88  ldp x9,x10,[x8, #0x10]
7102ab4f8c  mov w1,#0x200
7102ab4f90  stp x9,x10,[sp, #0xc8]
7102ab4f94  ldp x9,x8,[x8]
7102ab4f98  stp x9,x8,[sp, #0xb8]
7102ab4f9c  bl 0x710392e290
7102ab4fa0  mov x21,x0
7102ab4fa4  cbnz x0,0x7102ab4ff0
7102ab4fa8  adrp x8,0x7105332000
7102ab4fac  ldr x0,[x8, #0xf00]
7102ab4fb0  cbz x0,0x7102ab4fec
7102ab4fb4  mov w8,#0x200
7102ab4fb8  stur wzr,[x29, #-0x78]
7102ab4fbc  sub x1,x29,#0x78
7102ab4fc0  str x8,[sp, #0x70]
7102ab4fc4  ldr x8,[x0]
7102ab4fc8  ldr x8,[x8, #0x30]
7102ab4fcc  add x2,sp,#0x70
7102ab4fd0  blr x8
7102ab4fd4  tbz w0,#0x0,0x7102ab4fec
7102ab4fd8  mov w0,#0x10
7102ab4fdc  mov w1,#0x200
7102ab4fe0  bl 0x710392e290
7102ab4fe4  mov x21,x0
7102ab4fe8  cbnz x0,0x7102ab4ff0
7102ab4fec  mov x21,xzr
7102ab4ff0  add x2,sp,#0xa0
7102ab4ff4  mov x0,x21
7102ab4ff8  mov x1,x19
7102ab4ffc  mov x3,x20
7102ab5000  bl 0x7102ab7e50
7102ab5004  ldr x20,[x19, #0xaa8]
7102ab5008  str x21,[x19, #0xaa8]
7102ab500c  cbz x20,0x7102ab504c
7102ab5010  ldr x0,[x20, #0x1e8]
7102ab5014  cbz x0,0x7102ab5030
7102ab5018  ldrb w8,[x0, #0x42]
7102ab501c  cbnz w8,0x7102ab5034
7102ab5020  ldr x8,[x0]
7102ab5024  ldr x8,[x8, #0x20]
7102ab5028  blr x8
7102ab502c  ldr x0,[x20, #0x1e8]
7102ab5030  cbz x0,0x7102ab5040
7102ab5034  ldr x8,[x0]
7102ab5038  ldr x8,[x8, #0x8]
7102ab503c  blr x8
7102ab5040  mov x0,x20
7102ab5044  str xzr,[x20, #0x1e8]
7102ab5048  bl 0x710392eb40
7102ab504c  add sp,sp,#0x1d0
7102ab5050  ldp x29,x30,[sp, #0x50]
7102ab5054  ldp x20,x19,[sp, #0x40]
7102ab5058  ldp x22,x21,[sp, #0x30]
7102ab505c  ldp x24,x23,[sp, #0x20]
7102ab5060  ldp x26,x25,[sp, #0x10]
7102ab5064  ldp x28,x27,[sp], #0x60
7102ab5068  ret
7102ab506c  str x24,[x20]
7102ab5070  cbz x24,0x7102ab5188
7102ab5074  ldr x8,[x24, #0xd8]
7102ab5078  cbz x8,0x7102ab51fc
7102ab507c  ldrb w8,[x24, #0xe0]
7102ab5080  cbz w8,0x7102ab5090
7102ab5084  ldr x8,[x24, #0xc8]
7102ab5088  cbz x8,0x7102ab5090
7102ab508c  strh wzr,[x8, #0x32]
7102ab5090  ldr x8,[x24, #0xd8]
7102ab5094  cbz x8,0x7102ab509c
7102ab5098  strb wzr,[x8, #0x22]
7102ab509c  ldr x24,[x20]
7102ab50a0  cbz x24,0x7102ab5194
7102ab50a4  ldrb w8,[x24, #0xe0]
7102ab50a8  cbz w8,0x7102ab50bc
7102ab50ac  ldr x8,[x24, #0xc8]
7102ab50b0  cbz x8,0x7102ab50bc
7102ab50b4  mov w9,#0x101
7102ab50b8  strh w9,[x8, #0x30]
7102ab50bc  ldr x8,[x24, #0xd8]
7102ab50c0  cbz x8,0x7102ab50cc
7102ab50c4  mov w9,#0x1
7102ab50c8  strb w9,[x8, #0x21]
7102ab50cc  ldrb w8,[x24, #0xe0]
7102ab50d0  cbz w8,0x7102ab50dc
7102ab50d4  ldr x8,[x24, #0xb0]
7102ab50d8  strb wzr,[x8, #0x10]
7102ab50dc  ldr x24,[x20]
7102ab50e0  cbz x24,0x7102ab5194
7102ab50e4  ldr x0,[x24, #0xd0]
7102ab50e8  adrp x23,0x7104338000
7102ab50ec  add x23,x23,#0x34b
7102ab50f0  mov x1,x23
7102ab50f4  bl 0x71025ee6c0
7102ab50f8  ldr x20,[sp, #0x10]
7102ab50fc  cbz x0,0x7102ab5104
7102ab5100  str x0,[x22, #0x10]
7102ab5104  ldr x8,[x23]
7102ab5108  ldur x9,[x23, #0x7]
7102ab510c  stur x9,[x22, #0x37]
7102ab5110  str x8,[x22, #0x30]
7102ab5114  ldr x0,[x24, #0xd0]
7102ab5118  adrp x23,0x7104431000
7102ab511c  add x23,x23,#0x18a
7102ab5120  mov x1,x23
7102ab5124  bl 0x71025ee6c0
7102ab5128  cbz x0,0x7102ab5130
7102ab512c  str x0,[x22, #0x18]
7102ab5130  mov w8,#0x6e
7102ab5134  strh w8,[x22, #0x80]
7102ab5138  ldp x8,x9,[x23]
7102ab513c  adrp x23,0x710427e000
7102ab5140  add x23,x23,#0xb30
7102ab5144  mov x1,x23
7102ab5148  stp x8,x9,[x22, #0x70]
7102ab514c  ldr x0,[x24, #0xd0]
7102ab5150  bl 0x71025ee6c0
7102ab5154  cbz x0,0x7102ab515c
7102ab5158  str x0,[x22, #0x20]
7102ab515c  mov w8,#0x68
7102ab5160  strh w8,[x22, #0xc0]
7102ab5164  adrp x1,0x7104306000
7102ab5168  add x1,x1,#0x741
7102ab516c  ldp x8,x9,[x23]
7102ab5170  stp x8,x9,[x22, #0xb0]
7102ab5174  ldr x0,[x24, #0xd0]
7102ab5178  bl 0x71025ee6c0
7102ab517c  cbz x0,0x7102ab51e0
7102ab5180  str x0,[x22, #0x28]
7102ab5184  b 0x7102ab51e0
7102ab5188  ldr x20,[sp, #0x10]
7102ab518c  cbnz x24,0x7102ab5200
7102ab5190  b 0x7102ab4d04
7102ab5194  mov w9,#0x6e
7102ab5198  adrp x8,0x7104338000
7102ab519c  add x8,x8,#0x34b
7102ab51a0  strh w9,[x22, #0x80]
7102ab51a4  ldr x9,[x8]
7102ab51a8  ldur x8,[x8, #0x7]
7102ab51ac  adrp x10,0x7104431000
7102ab51b0  add x10,x10,#0x18a
7102ab51b4  stur x8,[x22, #0x37]
7102ab51b8  str x9,[x22, #0x30]
7102ab51bc  ldp x8,x9,[x10]
7102ab51c0  stp x8,x9,[x22, #0x70]
7102ab51c4  mov w8,#0x68
7102ab51c8  strh w8,[x22, #0xc0]
7102ab51cc  adrp x8,0x710427e000
7102ab51d0  add x8,x8,#0xb30
7102ab51d4  ldp x9,x8,[x8]
7102ab51d8  ldr x20,[sp, #0x10]
7102ab51dc  stp x9,x8,[x22, #0xb0]
7102ab51e0  strb wzr,[x22, #0x100]
7102ab51e4  adrp x8,0x7104306000
7102ab51e8  add x8,x8,#0x741
7102ab51ec  ldp x9,x8,[x8]
7102ab51f0  stp x9,x8,[x22, #0xf0]
7102ab51f4  cbnz x24,0x7102ab5200
7102ab51f8  b 0x7102ab4d04
7102ab51fc  ldr x20,[sp, #0x10]
7102ab5200  ldrb w8,[x24, #0x118]
7102ab5204  orr w8,w8,#0x1
7102ab5208  strb w8,[x24, #0x118]
7102ab520c  b 0x7102ab4d04
7102ab5210  mov w23,#0xffffffff
7102ab5214  str x19,[x20, #0x28]
7102ab5218  ldr x8,[x19, #0xd8]
7102ab521c  cbz x8,0x7102ab5244
7102ab5220  ldr x19,[sp, #0x28]
7102ab5224  cmn w23,#0x1
7102ab5228  b.eq 0x7102ab5288
7102ab522c  ldr x8,[x8, #0x8]
7102ab5230  ldr x0,[x8, #0x8]
7102ab5234  ldr x8,[x0]
7102ab5238  ldr x8,[x8, #0x10]
7102ab523c  blr x8
7102ab5240  b 0x7102ab528c
7102ab5244  ldr x19,[sp, #0x28]
7102ab5248  mov w23,#0xffffffff
7102ab524c  b 0x7102ab528c
7102ab5250  mov w22,#0xffffffff
7102ab5254  str x19,[x21, #0x1a8]
7102ab5258  ldr x8,[x19, #0xd8]
7102ab525c  cbz x8,0x7102ab5280
7102ab5260  cmn w22,#0x1
7102ab5264  b.eq 0x7102ab53d4
7102ab5268  ldr x8,[x8, #0x8]
7102ab526c  ldr x0,[x8, #0x8]
7102ab5270  ldr x8,[x0]
7102ab5274  ldr x8,[x8, #0x10]
7102ab5278  blr x8
7102ab527c  b 0x7102ab53d8
7102ab5280  mov w22,#0xffffffff
7102ab5284  b 0x7102ab53d8
7102ab5288  mov w23,wzr
7102ab528c  ldr q0,[sp, #0x60]
7102ab5290  str w23,[x20, #0x30]
7102ab5294  adrp x23,0x71042e5000
7102ab5298  add x23,x23,#0x26e
7102ab529c  adrp x3,0x7104420000
7102ab52a0  add x3,x3,#0x4c0
7102ab52a4  str q0,[x20, #0x40]
7102ab52a8  ldr q0,[sp, #0x50]
7102ab52ac  mov x0,x21
7102ab52b0  mov x1,x19
7102ab52b4  str q0,[x20, #0x50]
7102ab52b8  ldr q0,[sp, #0x40]
7102ab52bc  mov x2,x23
7102ab52c0  strb wzr,[x20, #0x80]
7102ab52c4  str q0,[x20, #0x60]
7102ab52c8  ldr q0,[sp, #0x30]
7102ab52cc  str q0,[x20, #0x70]
7102ab52d0  bl 0x710314fd10
7102ab52d4  ldr x28,[x20, #0x8]
7102ab52d8  cbz x28,0x7102ab5370
7102ab52dc  ldr x0,[x28, #0xd0]
7102ab52e0  adrp x23,0x71042e5000
7102ab52e4  add x23,x23,#0x26e
7102ab52e8  mov x1,x23
7102ab52ec  bl 0x71025ee6c0
7102ab52f0  cbz x0,0x7102ab52f8
7102ab52f4  str x0,[x24]
7102ab52f8  mov w8,#0x6573
7102ab52fc  movk w8,#0x74, LSL #16
7102ab5300  str w8,[x20, #0x130]
7102ab5304  ldp x8,x9,[x23]
7102ab5308  adrp x23,0x7104410000
7102ab530c  add x23,x23,#0x8d2
7102ab5310  mov x1,x23
7102ab5314  stp x8,x9,[x20, #0x120]
7102ab5318  ldr x0,[x28, #0xd0]
7102ab531c  bl 0x71025ee6c0
7102ab5320  cbz x0,0x7102ab5328
7102ab5324  str x0,[x20, #0x118]
7102ab5328  ldur x8,[x23, #0xd]
7102ab532c  add x9,x20,#0x16d
7102ab5330  str x8,[x9]
7102ab5334  ldp x8,x9,[x23]
7102ab5338  stp x8,x9,[x20, #0x160]
7102ab533c  cbz x28,0x7102ab53a0
7102ab5340  ldr x1,[x20, #0x110]
7102ab5344  cbz x1,0x7102ab53a0
7102ab5348  ldr x19,[x28, #0xd8]
7102ab534c  cbz x19,0x7102ab53a0
7102ab5350  ldr x8,[x28, #0xd0]
7102ab5354  cbz x8,0x7102ab53a0
7102ab5358  ldr x0,[x19, #0x8]
7102ab535c  fmov s0,wzr
7102ab5360  bl 0x710367c160
7102ab5364  tbz w0,#0x0,0x7102ab53a0
7102ab5368  str wzr,[x19, #0x10]
7102ab536c  b 0x7102ab53a0
7102ab5370  mov w11,#0x6573
7102ab5374  movk w11,#0x74, LSL #16
7102ab5378  adrp x8,0x7104410000
7102ab537c  add x8,x8,#0x8d2
7102ab5380  ldp x9,x10,[x23]
7102ab5384  str w11,[x20, #0x130]
7102ab5388  ldur x11,[x8, #0xd]
7102ab538c  add x12,x20,#0x16d
7102ab5390  stp x9,x10,[x20, #0x120]
7102ab5394  str x11,[x12]
7102ab5398  ldp x9,x8,[x8]
7102ab539c  stp x9,x8,[x20, #0x160]
7102ab53a0  ldr x0,[x26]
7102ab53a4  fmov s0,wzr
7102ab53a8  mov w1,#0x1
7102ab53ac  bl 0x710260fdd0
7102ab53b0  ldr x8,[x26]
7102ab53b4  ldr x19,[sp, #0x28]
7102ab53b8  adrp x28,0x710517b000
7102ab53bc  add x28,x28,#0x340
7102ab53c0  cbz x8,0x7102ab3064
7102ab53c4  ldrb w9,[x8, #0x118]
7102ab53c8  orr w9,w9,#0x1
7102ab53cc  strb w9,[x8, #0x118]
7102ab53d0  b 0x7102ab3064
7102ab53d4  mov w22,wzr
7102ab53d8  ldr q0,[sp, #0x60]
7102ab53dc  ldr x19,[x21, #0x10]
7102ab53e0  str w22,[x21, #0x1b0]
7102ab53e4  str q0,[x21, #0x1c0]
7102ab53e8  ldr q0,[sp, #0x50]
7102ab53ec  strb wzr,[x21, #0x200]
7102ab53f0  str q0,[x21, #0x1d0]
7102ab53f4  ldr q0,[sp, #0x40]
7102ab53f8  str q0,[x21, #0x1e0]
7102ab53fc  ldr q0,[sp, #0x30]
7102ab5400  str q0,[x21, #0x1f0]
7102ab5404  cbz x19,0x7102ab5434
7102ab5408  ldr x8,[x19, #0xd8]
7102ab540c  cbz x8,0x7102ab5440
7102ab5410  ldr x8,[x8, #0x8]
7102ab5414  ldr x0,[x8, #0x8]
7102ab5418  ldr x8,[x0]
7102ab541c  ldr x8,[x8, #0x18]
7102ab5420  adrp x1,0x71042f5000
7102ab5424  add x1,x1,#0xe7d
7102ab5428  blr x8
7102ab542c  mov w22,w0
7102ab5430  b 0x7102ab5444
7102ab5434  str x19,[x21, #0x218]
7102ab5438  mov w22,#0xffffffff
7102ab543c  b 0x7102ab547c
7102ab5440  mov w22,#0xffffffff
7102ab5444  str x19,[x21, #0x218]
7102ab5448  ldr x8,[x19, #0xd8]
7102ab544c  cbz x8,0x7102ab5470
7102ab5450  cmn w22,#0x1
7102ab5454  b.eq 0x7102ab5478
7102ab5458  ldr x8,[x8, #0x8]
7102ab545c  ldr x0,[x8, #0x8]
7102ab5460  ldr x8,[x0]
7102ab5464  ldr x8,[x8, #0x10]
7102ab5468  blr x8
7102ab546c  b 0x7102ab547c
7102ab5470  mov w22,#0xffffffff
7102ab5474  b 0x7102ab547c
7102ab5478  mov w22,wzr
7102ab547c  ldr q0,[sp, #0x60]
7102ab5480  ldr x20,[x21, #0x10]
7102ab5484  str w22,[x21, #0x220]
7102ab5488  str q0,[x21, #0x230]
7102ab548c  ldr q0,[sp, #0x50]
7102ab5490  strb wzr,[x21, #0x270]
7102ab5494  str q0,[x21, #0x240]
7102ab5498  ldr q0,[sp, #0x40]
7102ab549c  str q0,[x21, #0x250]
7102ab54a0  ldr q0,[sp, #0x30]
7102ab54a4  str q0,[x21, #0x260]
7102ab54a8  cbz x20,0x7102ab3e00
7102ab54ac  ldr x0,[x20, #0xd0]
7102ab54b0  adrp x1,0x71043ab000
7102ab54b4  add x1,x1,#0xb10
7102ab54b8  bl 0x71025ee6c0
7102ab54bc  cbz x0,0x7102ab54c4
7102ab54c0  str x0,[x23]
7102ab54c4  ldr x0,[x20, #0xd0]
7102ab54c8  adrp x1,0x7104348000
7102ab54cc  add x1,x1,#0x42b
7102ab54d0  bl 0x71025ee6c0
7102ab54d4  cbz x0,0x7102ab54dc
7102ab54d8  str x0,[x21, #0x288]
7102ab54dc  ldr x0,[x20, #0xd0]
7102ab54e0  adrp x1,0x71042c2000
7102ab54e4  add x1,x1,#0xe30
7102ab54e8  bl 0x71025ee6c0
7102ab54ec  cbz x0,0x7102ab54f4
7102ab54f0  str x0,[x21, #0x290]
7102ab54f4  ldr x0,[x20, #0xd0]
7102ab54f8  adrp x1,0x710439b000
7102ab54fc  add x1,x1,#0x318
7102ab5500  bl 0x71025ee6c0
7102ab5504  cbz x0,0x7102ab550c
7102ab5508  str x0,[x21, #0x298]
7102ab550c  ldr x0,[x20, #0xd0]
7102ab5510  adrp x1,0x71042b2000
7102ab5514  add x1,x1,#0x242
7102ab5518  bl 0x71025ee6c0
7102ab551c  cbz x0,0x7102ab5524
7102ab5520  str x0,[x21, #0x2a0]
7102ab5524  ldrb w8,[x20, #0x118]
7102ab5528  orr w8,w8,#0x1
7102ab552c  strb w8,[x20, #0x118]
7102ab5530  b 0x7102ab3e00
