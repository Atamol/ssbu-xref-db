// addr:      71038c6a10
// offset:    0x38c6a10
// name:      FUN_71038c6a10
// mangled:   
// size:      22068

71038c6a10  stp x28,x27,[sp, #-0x60]!
71038c6a14  stp x26,x25,[sp, #0x10]
71038c6a18  stp x24,x23,[sp, #0x20]
71038c6a1c  stp x22,x21,[sp, #0x30]
71038c6a20  stp x20,x19,[sp, #0x40]
71038c6a24  stp x29,x30,[sp, #0x50]
71038c6a28  add x29,sp,#0x50
71038c6a2c  sub sp,sp,#0x4d0
71038c6a30  mov x19,x0
71038c6a34  mov w2,#0x168
71038c6a38  add x0,sp,#0x120
71038c6a3c  mov w1,#0x10
71038c6a40  bl 0x710392e1f0
71038c6a44  cmp w0,#0xc
71038c6a48  b.ne 0x71038c6a84
71038c6a4c  adrp x8,0x710593d000
71038c6a50  ldr x0,[x8, #0x2b0]
71038c6a54  cbz x0,0x71038c6a84
71038c6a58  mov w8,#0x168
71038c6a5c  str x8,[sp, #0x3e0]
71038c6a60  ldr x8,[x0]
71038c6a64  ldr x8,[x8, #0x30]
71038c6a68  add x1,sp,#0x3e0
71038c6a6c  blr x8
71038c6a70  tbz w0,#0x0,0x71038c6a84
71038c6a74  mov w2,#0x168
71038c6a78  add x0,sp,#0x120
71038c6a7c  mov w1,#0x10
71038c6a80  bl 0x710392e1f0
71038c6a84  adrp x8,0x71052a8000
71038c6a88  ldr x8,[x8, #0xa78]
71038c6a8c  cbz x8,0x71038c6aa0
71038c6a90  ldr x2,[sp, #0x120]
71038c6a94  mov w0,#0x168
71038c6a98  mov w1,#0x10
71038c6a9c  bl 0x71039c19e0
71038c6aa0  ldr x28,[sp, #0x120]
71038c6aa4  mov x0,x28
71038c6aa8  bl 0x71037c3a70
71038c6aac  str x19,[sp, #0x90]
71038c6ab0  adrp x8,0x7105291000
71038c6ab4  add x8,x8,#0xc38
71038c6ab8  mov x20,x28
71038c6abc  mov x21,x28
71038c6ac0  adrp x23,0x7105230000
71038c6ac4  add x23,x23,#0xc18
71038c6ac8  mov x22,x28
71038c6acc  str x8,[x28]
71038c6ad0  mov x24,x28
71038c6ad4  mov x25,x28
71038c6ad8  mov x26,x28
71038c6adc  mov x19,x28
71038c6ae0  mov w1,#0x28
71038c6ae4  mov w0,#0x10
71038c6ae8  str xzr,[x20, #0x10]!
71038c6aec  str xzr,[x21, #0x48]!
71038c6af0  stp xzr,xzr,[x28, #0x50]
71038c6af4  stp xzr,xzr,[x28, #0x28]
71038c6af8  stp xzr,xzr,[x28, #0x18]
71038c6afc  stp xzr,x23,[x28, #0x38]
71038c6b00  str xzr,[x22, #0x68]!
71038c6b04  stp xzr,xzr,[x28, #0x70]
71038c6b08  str x23,[x28, #0x60]
71038c6b0c  str xzr,[x24, #0x88]!
71038c6b10  str x23,[x28, #0x80]
71038c6b14  stp xzr,xzr,[x28, #0x90]
71038c6b18  str xzr,[x25, #0xa8]!
71038c6b1c  str x23,[x28, #0xa0]
71038c6b20  stp xzr,xzr,[x28, #0xb0]
71038c6b24  str xzr,[x26, #0xc8]!
71038c6b28  str x23,[x28, #0xc0]
71038c6b2c  stp xzr,xzr,[x28, #0xd0]
71038c6b30  str xzr,[x19, #0xe8]!
71038c6b34  stur x23,[x19, #-0x8]
71038c6b38  stp xzr,xzr,[x19, #0x8]
71038c6b3c  bl 0x710392e290
71038c6b40  cbnz x0,0x71038c6b88
71038c6b44  adrp x8,0x7105332000
71038c6b48  ldr x0,[x8, #0xf00]
71038c6b4c  cbz x0,0x71038c6b84
71038c6b50  mov w8,#0x28
71038c6b54  str wzr,[sp, #0x120]
71038c6b58  add x1,sp,#0x120
71038c6b5c  str x8,[sp, #0x3e0]
71038c6b60  ldr x8,[x0]
71038c6b64  ldr x8,[x8, #0x30]
71038c6b68  add x2,sp,#0x3e0
71038c6b6c  blr x8
71038c6b70  tbz w0,#0x0,0x71038c6b84
71038c6b74  mov w1,#0x28
71038c6b78  mov w0,#0x10
71038c6b7c  bl 0x710392e290
71038c6b80  cbnz x0,0x71038c6b88
71038c6b84  mov x0,xzr
71038c6b88  orr w8,wzr,#0x3f800000
71038c6b8c  stp xzr,xzr,[x0, #0x10]
71038c6b90  stp xzr,xzr,[x0]
71038c6b94  add x27,x28,#0x128
71038c6b98  mov w1,#0xb8
71038c6b9c  str w8,[x0, #0x20]
71038c6ba0  str x0,[x28, #0x100]
71038c6ba4  mov w0,#0x10
71038c6ba8  str x27,[x28, #0x110]
71038c6bac  bl 0x710392e290
71038c6bb0  cbnz x0,0x71038c6bf8
71038c6bb4  adrp x8,0x7105332000
71038c6bb8  ldr x0,[x8, #0xf00]
71038c6bbc  cbz x0,0x71038c6bf4
71038c6bc0  mov w8,#0xb8
71038c6bc4  str wzr,[sp, #0x120]
71038c6bc8  add x1,sp,#0x120
71038c6bcc  str x8,[sp, #0x3e0]
71038c6bd0  ldr x8,[x0]
71038c6bd4  ldr x8,[x8, #0x30]
71038c6bd8  add x2,sp,#0x3e0
71038c6bdc  blr x8
71038c6be0  tbz w0,#0x0,0x71038c6bf4
71038c6be4  mov w1,#0xb8
71038c6be8  mov w0,#0x10
71038c6bec  bl 0x710392e290
71038c6bf0  cbnz x0,0x71038c6bf8
71038c6bf4  mov x0,xzr
71038c6bf8  str x0,[x28, #0x120]
71038c6bfc  adrp x9,0x7104317000
71038c6c00  add x9,x9,#0xa9b
71038c6c04  str xzr,[x0, #0x88]!
71038c6c08  mov x8,x0
71038c6c0c  stp x0,x0,[x0, #0x8]
71038c6c10  str xzr,[x8, #0x18]!
71038c6c14  stp x8,x8,[x0, #0x20]
71038c6c18  add x8,x28,#0x150
71038c6c1c  mov w12,#0x1a
71038c6c20  stp x27,x8,[x28, #0x140]
71038c6c24  mov w8,#0x5
71038c6c28  str w8,[x28, #0x160]
71038c6c2c  add x8,sp,#0x3e0
71038c6c30  cmp x8,x20
71038c6c34  stp xzr,x27,[x28, #0x130]
71038c6c38  stp xzr,xzr,[x28, #0x150]
71038c6c3c  str xzr,[x21]
71038c6c40  stp xzr,xzr,[x21, #0x8]
71038c6c44  adrp x21,0x71052a8000
71038c6c48  str xzr,[x22]
71038c6c4c  stp xzr,xzr,[x22, #0x8]
71038c6c50  str xzr,[x24]
71038c6c54  stp xzr,xzr,[x24, #0x8]
71038c6c58  str xzr,[x25]
71038c6c5c  stp xzr,xzr,[x25, #0x8]
71038c6c60  str xzr,[x26]
71038c6c64  stp xzr,xzr,[x26, #0x8]
71038c6c68  add x26,sp,#0x3e0
71038c6c6c  str xzr,[x19]
71038c6c70  stp xzr,xzr,[x19, #0x8]
71038c6c74  ldur x22,[x9, #0x5]
71038c6c78  ldr x24,[x9]
71038c6c7c  str xzr,[sp, #0x3e0]
71038c6c80  str xzr,[sp, #0x3e8]
71038c6c84  str xzr,[sp, #0x3f0]
71038c6c88  strb w12,[sp, #0x3e0]
71038c6c8c  stur x22,[x26, #0x6]
71038c6c90  stur x24,[x26, #0x1]
71038c6c94  strb wzr,[sp, #0x3ee]
71038c6c98  ldr x21,[x21, #0xa78]
71038c6c9c  b.eq 0x71038c6ce4
71038c6ca0  orr x7,x8,#0x1
71038c6ca4  ldrb w8,[x20]
71038c6ca8  tbnz w8,#0x0,0x71038c6cb4
71038c6cac  add x8,x28,#0x11
71038c6cb0  b 0x71038c7940
71038c6cb4  ldr x8,[x20]
71038c6cb8  and x8,x8,#-0x2
71038c6cbc  sub x1,x8,#0x1
71038c6cc0  cmp x1,#0xd
71038c6cc4  b.cs 0x71038c793c
71038c6cc8  ldr x3,[x28, #0x18]
71038c6ccc  mov w6,#0xd
71038c6cd0  sub x2,x6,x1
71038c6cd4  mov x0,x20
71038c6cd8  mov x4,xzr
71038c6cdc  mov x5,x3
71038c6ce0  bl 0x71037cfe00
71038c6ce4  ldrb w8,[sp, #0x3e0]
71038c6ce8  tbz w8,#0x0,0x71038c6d0c
71038c6cec  adrp x8,0x71052a8000
71038c6cf0  ldr x20,[sp, #0x3f0]
71038c6cf4  ldr x8,[x8, #0xa70]
71038c6cf8  cbz x8,0x71038c6d04
71038c6cfc  mov x0,x20
71038c6d00  bl 0x71039c19b0
71038c6d04  mov x0,x20
71038c6d08  bl 0x710392eb40
71038c6d0c  adrp x9,0x7104453000
71038c6d10  add x9,x9,#0x570
71038c6d14  ldr x11,[x9]
71038c6d18  add x8,sp,#0x3e0
71038c6d1c  add x0,x28,#0x28
71038c6d20  mov w10,#0x6c
71038c6d24  mov w9,#0x12
71038c6d28  cmp x8,x0
71038c6d2c  str xzr,[sp, #0x3e0]
71038c6d30  str xzr,[sp, #0x3e8]
71038c6d34  str xzr,[sp, #0x3f0]
71038c6d38  strb w9,[sp, #0x3e0]
71038c6d3c  stur x11,[x26, #0x1]
71038c6d40  str x11,[sp, #0xf0]
71038c6d44  sturh w10,[x26, #0x9]
71038c6d48  b.eq 0x71038c6d8c
71038c6d4c  orr x7,x8,#0x1
71038c6d50  ldrb w8,[x0]
71038c6d54  tbnz w8,#0x0,0x71038c6d60
71038c6d58  add x8,x28,#0x29
71038c6d5c  b 0x71038c798c
71038c6d60  ldr x8,[x0]
71038c6d64  and x8,x8,#-0x2
71038c6d68  sub x1,x8,#0x1
71038c6d6c  cmp x1,#0x9
71038c6d70  b.cs 0x71038c7988
71038c6d74  ldr x3,[x28, #0x30]
71038c6d78  mov w6,#0x9
71038c6d7c  sub x2,x6,x1
71038c6d80  mov x4,xzr
71038c6d84  mov x5,x3
71038c6d88  bl 0x71037cfe00
71038c6d8c  ldrb w8,[sp, #0x3e0]
71038c6d90  tbz w8,#0x0,0x71038c6db4
71038c6d94  adrp x8,0x71052a8000
71038c6d98  ldr x20,[sp, #0x3f0]
71038c6d9c  ldr x8,[x8, #0xa70]
71038c6da0  cbz x8,0x71038c6dac
71038c6da4  mov x0,x20
71038c6da8  bl 0x71039c19b0
71038c6dac  mov x0,x20
71038c6db0  bl 0x710392eb40
71038c6db4  adrp x8,0x7104359000
71038c6db8  add x8,x8,#0xe59
71038c6dbc  ldur x20,[x8, #0x7]
71038c6dc0  ldr x25,[x8]
71038c6dc4  orr w19,wzr,#0x1e
71038c6dc8  str xzr,[sp, #0x3e0]
71038c6dcc  str xzr,[sp, #0x3e8]
71038c6dd0  str xzr,[sp, #0x3f0]
71038c6dd4  strb w19,[sp, #0x3e0]
71038c6dd8  str x20,[sp, #0x3e8]
71038c6ddc  stur x25,[x26, #0x1]
71038c6de0  strb wzr,[sp, #0x3f0]
71038c6de4  ldr x0,[x28, #0x100]
71038c6de8  add x2,sp,#0x3e0
71038c6dec  mov w1,wzr
71038c6df0  bl 0x71038b69b0
71038c6df4  adrp x8,0x71043de000
71038c6df8  add x8,x8,#0xb74
71038c6dfc  ldr x0,[x28, #0x100]
71038c6e00  ldur x9,[x8, #0x7]
71038c6e04  ldr x8,[x8]
71038c6e08  str xzr,[sp, #0x3e0]
71038c6e0c  str xzr,[sp, #0x3e8]
71038c6e10  str xzr,[sp, #0x3f0]
71038c6e14  strb w19,[sp, #0x3e0]
71038c6e18  str x9,[sp, #0x3e8]
71038c6e1c  stur x8,[x26, #0x1]
71038c6e20  strb wzr,[sp, #0x3f0]
71038c6e24  mov w1,#0x4
71038c6e28  add x2,sp,#0x3e0
71038c6e2c  bl 0x71038b69b0
71038c6e30  mov x0,x28
71038c6e34  bl 0x71038b64a0
71038c6e38  add x0,sp,#0x120
71038c6e3c  mov w1,#0x10
71038c6e40  orr w2,wzr,#0x78
71038c6e44  bl 0x710392e1f0
71038c6e48  cmp w0,#0xc
71038c6e4c  b.ne 0x71038c6e88
71038c6e50  adrp x8,0x710593d000
71038c6e54  ldr x0,[x8, #0x2b0]
71038c6e58  cbz x0,0x71038c6e88
71038c6e5c  orr w8,wzr,#0x78
71038c6e60  str x8,[sp, #0x3e0]
71038c6e64  ldr x8,[x0]
71038c6e68  ldr x8,[x8, #0x30]
71038c6e6c  add x1,sp,#0x3e0
71038c6e70  blr x8
71038c6e74  tbz w0,#0x0,0x71038c6e88
71038c6e78  add x0,sp,#0x120
71038c6e7c  mov w1,#0x10
71038c6e80  orr w2,wzr,#0x78
71038c6e84  bl 0x710392e1f0
71038c6e88  cbz x21,0x71038c6e9c
71038c6e8c  ldr x2,[sp, #0x120]
71038c6e90  orr w0,wzr,#0x78
71038c6e94  mov w1,#0x10
71038c6e98  bl 0x71039c19e0
71038c6e9c  str x20,[sp, #0xd0]
71038c6ea0  ldr x20,[sp, #0x120]
71038c6ea4  orr w8,wzr,#0xe
71038c6ea8  str xzr,[sp, #0x3e0]
71038c6eac  strb w8,[sp, #0x3e0]
71038c6eb0  mov w8,#0x65
71038c6eb4  strb w8,[sp, #0x3e7]
71038c6eb8  mov w8,#0x7375
71038c6ebc  str xzr,[sp, #0x3e8]
71038c6ec0  str xzr,[sp, #0x3f0]
71038c6ec4  sturh w8,[x26, #0x5]
71038c6ec8  mov w8,#0x6964
71038c6ecc  movk w8,#0x6666, LSL #16
71038c6ed0  stur w8,[x26, #0x1]
71038c6ed4  strb wzr,[sp, #0x3e8]
71038c6ed8  add x1,sp,#0x3e0
71038c6edc  mov x0,x20
71038c6ee0  bl 0x71038b4c00
71038c6ee4  adrp x27,0x7105290000
71038c6ee8  add x27,x27,#0xed8
71038c6eec  adrp x8,0x7105291000
71038c6ef0  add x8,x8,#0xd08
71038c6ef4  str x27,[sp, #0x3e0]
71038c6ef8  str wzr,[sp, #0x3e8]
71038c6efc  stp x8,x20,[x29, #-0x80]
71038c6f00  cbz x20,0x71038c6f10
71038c6f04  ldr x8,[x20, #0x8]
71038c6f08  ldr x9,[x8]
71038c6f0c  b 0x71038c6f18
71038c6f10  mov x8,xzr
71038c6f14  mov x9,xzr
71038c6f18  adrp x19,0x710526a000
71038c6f1c  add x19,x19,#0x918
71038c6f20  stur x19,[x29, #-0x80]
71038c6f24  stp x8,x9,[x29, #-0x70]
71038c6f28  add x1,sp,#0x3e0
71038c6f2c  sub x2,x29,#0x80
71038c6f30  mov x0,x28
71038c6f34  bl 0x71038b51b0
71038c6f38  ldur x8,[x29, #-0x70]
71038c6f3c  stur x19,[x29, #-0x80]
71038c6f40  cbz x8,0x71038c6f68
71038c6f44  ldr x8,[x8]
71038c6f48  ldur x9,[x29, #-0x68]
71038c6f4c  cmp x8,x9
71038c6f50  b.ne 0x71038c6f68
71038c6f54  ldur x0,[x29, #-0x78]
71038c6f58  cbz x0,0x71038c6f68
71038c6f5c  ldr x8,[x0]
71038c6f60  ldr x8,[x8, #0x8]
71038c6f64  blr x8
71038c6f68  add x0,sp,#0x120
71038c6f6c  mov w1,#0x10
71038c6f70  orr w2,wzr,#0x78
71038c6f74  bl 0x710392e1f0
71038c6f78  cmp w0,#0xc
71038c6f7c  b.ne 0x71038c6fb8
71038c6f80  adrp x8,0x710593d000
71038c6f84  ldr x0,[x8, #0x2b0]
71038c6f88  cbz x0,0x71038c6fb8
71038c6f8c  orr w8,wzr,#0x78
71038c6f90  str x8,[sp, #0x3e0]
71038c6f94  ldr x8,[x0]
71038c6f98  ldr x8,[x8, #0x30]
71038c6f9c  add x1,sp,#0x3e0
71038c6fa0  blr x8
71038c6fa4  tbz w0,#0x0,0x71038c6fb8
71038c6fa8  add x0,sp,#0x120
71038c6fac  mov w1,#0x10
71038c6fb0  orr w2,wzr,#0x78
71038c6fb4  bl 0x710392e1f0
71038c6fb8  cbz x21,0x71038c6fcc
71038c6fbc  ldr x2,[sp, #0x120]
71038c6fc0  orr w0,wzr,#0x78
71038c6fc4  mov w1,#0x10
71038c6fc8  bl 0x71039c19e0
71038c6fcc  adrp x8,0x7104411000
71038c6fd0  add x8,x8,#0x344
71038c6fd4  ldr x8,[x8]
71038c6fd8  ldr x20,[sp, #0x120]
71038c6fdc  mov w9,#0x14
71038c6fe0  str xzr,[sp, #0x3e0]
71038c6fe4  str xzr,[sp, #0x3e8]
71038c6fe8  str xzr,[sp, #0x3f0]
71038c6fec  strb w9,[sp, #0x3e0]
71038c6ff0  str x8,[sp, #0xa8]
71038c6ff4  stur x8,[x26, #0x1]
71038c6ff8  mov w8,#0x7061
71038c6ffc  sturh w8,[x26, #0x9]
71038c7000  strb wzr,[sp, #0x3eb]
71038c7004  add x1,sp,#0x3e0
71038c7008  mov x0,x20
71038c700c  bl 0x71038b4c00
71038c7010  orr w8,wzr,#0x1e
71038c7014  str w8,[sp, #0x3e8]
71038c7018  adrp x8,0x7105291000
71038c701c  add x8,x8,#0xd08
71038c7020  str x27,[sp, #0x3e0]
71038c7024  stp x8,x20,[x29, #-0xa0]
71038c7028  cbz x20,0x71038c7038
71038c702c  ldr x8,[x20, #0x8]
71038c7030  ldr x9,[x8]
71038c7034  b 0x71038c7040
71038c7038  mov x8,xzr
71038c703c  mov x9,xzr
71038c7040  stp x8,x9,[x29, #-0x90]
71038c7044  stur x19,[x29, #-0xa0]
71038c7048  add x1,sp,#0x3e0
71038c704c  sub x2,x29,#0xa0
71038c7050  mov x0,x28
71038c7054  bl 0x71038b51b0
71038c7058  ldur x8,[x29, #-0x90]
71038c705c  stur x19,[x29, #-0xa0]
71038c7060  cbz x8,0x71038c7088
71038c7064  ldr x8,[x8]
71038c7068  ldur x9,[x29, #-0x88]
71038c706c  cmp x8,x9
71038c7070  b.ne 0x71038c7088
71038c7074  ldur x0,[x29, #-0x98]
71038c7078  cbz x0,0x71038c7088
71038c707c  ldr x8,[x0]
71038c7080  ldr x8,[x8, #0x8]
71038c7084  blr x8
71038c7088  add x0,sp,#0x120
71038c708c  mov w1,#0x10
71038c7090  orr w2,wzr,#0x78
71038c7094  bl 0x710392e1f0
71038c7098  cmp w0,#0xc
71038c709c  b.ne 0x71038c70d8
71038c70a0  adrp x8,0x710593d000
71038c70a4  ldr x0,[x8, #0x2b0]
71038c70a8  cbz x0,0x71038c70d8
71038c70ac  orr w8,wzr,#0x78
71038c70b0  str x8,[sp, #0x3e0]
71038c70b4  ldr x8,[x0]
71038c70b8  ldr x8,[x8, #0x30]
71038c70bc  add x1,sp,#0x3e0
71038c70c0  blr x8
71038c70c4  tbz w0,#0x0,0x71038c70d8
71038c70c8  add x0,sp,#0x120
71038c70cc  mov w1,#0x10
71038c70d0  orr w2,wzr,#0x78
71038c70d4  bl 0x710392e1f0
71038c70d8  cbz x21,0x71038c70ec
71038c70dc  ldr x2,[sp, #0x120]
71038c70e0  orr w0,wzr,#0x78
71038c70e4  mov w1,#0x10
71038c70e8  bl 0x71039c19e0
71038c70ec  orr w8,wzr,#0x1c
71038c70f0  adrp x9,0x7104328000
71038c70f4  add x9,x9,#0xb3e
71038c70f8  strb w8,[sp, #0x3e0]
71038c70fc  ldur x8,[x9, #0x6]
71038c7100  ldr x20,[sp, #0x120]
71038c7104  str xzr,[sp, #0x3f0]
71038c7108  str x8,[sp, #0xc8]
71038c710c  stur x8,[x26, #0x7]
71038c7110  ldr x8,[x9]
71038c7114  str x8,[sp, #0xc0]
71038c7118  stur x8,[x26, #0x1]
71038c711c  strb wzr,[sp, #0x3ef]
71038c7120  add x1,sp,#0x3e0
71038c7124  mov x0,x20
71038c7128  bl 0x71038b4c00
71038c712c  mov w8,#0x40
71038c7130  str w8,[sp, #0x3e8]
71038c7134  adrp x8,0x7105291000
71038c7138  add x8,x8,#0xd08
71038c713c  str x27,[sp, #0x3e0]
71038c7140  stp x8,x20,[x29, #-0xc0]
71038c7144  cbz x20,0x71038c7154
71038c7148  ldr x8,[x20, #0x8]
71038c714c  ldr x9,[x8]
71038c7150  b 0x71038c715c
71038c7154  mov x8,xzr
71038c7158  mov x9,xzr
71038c715c  stp x8,x9,[x29, #-0xb0]
71038c7160  stur x19,[x29, #-0xc0]
71038c7164  add x1,sp,#0x3e0
71038c7168  sub x2,x29,#0xc0
71038c716c  mov x0,x28
71038c7170  bl 0x71038b51b0
71038c7174  ldur x8,[x29, #-0xb0]
71038c7178  stur x19,[x29, #-0xc0]
71038c717c  cbz x8,0x71038c71a4
71038c7180  ldr x8,[x8]
71038c7184  ldur x9,[x29, #-0xa8]
71038c7188  cmp x8,x9
71038c718c  b.ne 0x71038c71a4
71038c7190  ldur x0,[x29, #-0xb8]
71038c7194  cbz x0,0x71038c71a4
71038c7198  ldr x8,[x0]
71038c719c  ldr x8,[x8, #0x8]
71038c71a0  blr x8
71038c71a4  add x0,sp,#0x120
71038c71a8  mov w1,#0x10
71038c71ac  orr w2,wzr,#0x78
71038c71b0  bl 0x710392e1f0
71038c71b4  cmp w0,#0xc
71038c71b8  b.ne 0x71038c71f4
71038c71bc  adrp x8,0x710593d000
71038c71c0  ldr x0,[x8, #0x2b0]
71038c71c4  cbz x0,0x71038c71f4
71038c71c8  orr w8,wzr,#0x78
71038c71cc  str x8,[sp, #0x3e0]
71038c71d0  ldr x8,[x0]
71038c71d4  ldr x8,[x8, #0x30]
71038c71d8  add x1,sp,#0x3e0
71038c71dc  blr x8
71038c71e0  tbz w0,#0x0,0x71038c71f4
71038c71e4  add x0,sp,#0x120
71038c71e8  mov w1,#0x10
71038c71ec  orr w2,wzr,#0x78
71038c71f0  bl 0x710392e1f0
71038c71f4  cbz x21,0x71038c7208
71038c71f8  ldr x2,[sp, #0x120]
71038c71fc  orr w0,wzr,#0x78
71038c7200  mov w1,#0x10
71038c7204  bl 0x71039c19e0
71038c7208  mov w8,#0x16
71038c720c  str xzr,[sp, #0x3e0]
71038c7210  strb w8,[sp, #0x3e0]
71038c7214  adrp x8,0x71042c3000
71038c7218  add x8,x8,#0x96a
71038c721c  ldr x8,[x8]
71038c7220  ldr x20,[sp, #0x120]
71038c7224  str xzr,[sp, #0x3e8]
71038c7228  str xzr,[sp, #0x3f0]
71038c722c  str x8,[sp, #0xe8]
71038c7230  stur x8,[x26, #0x1]
71038c7234  mov w8,#0x6574
71038c7238  movk w8,#0x30, LSL #16
71038c723c  stur w8,[x26, #0x9]
71038c7240  add x1,sp,#0x3e0
71038c7244  mov x0,x20
71038c7248  bl 0x71038b4c00
71038c724c  mov w8,#0x118
71038c7250  str w8,[sp, #0x3e8]
71038c7254  adrp x8,0x7105291000
71038c7258  add x8,x8,#0xd08
71038c725c  str x27,[sp, #0x3e0]
71038c7260  stp x8,x20,[x29, #-0xe0]
71038c7264  cbz x20,0x71038c7274
71038c7268  ldr x8,[x20, #0x8]
71038c726c  ldr x9,[x8]
71038c7270  b 0x71038c727c
71038c7274  mov x8,xzr
71038c7278  mov x9,xzr
71038c727c  stp x8,x9,[x29, #-0xd0]
71038c7280  stur x19,[x29, #-0xe0]
71038c7284  add x1,sp,#0x3e0
71038c7288  sub x2,x29,#0xe0
71038c728c  mov x0,x28
71038c7290  bl 0x71038b51b0
71038c7294  ldur x8,[x29, #-0xd0]
71038c7298  stur x19,[x29, #-0xe0]
71038c729c  cbz x8,0x71038c72c4
71038c72a0  ldr x8,[x8]
71038c72a4  ldur x9,[x29, #-0xc8]
71038c72a8  cmp x8,x9
71038c72ac  b.ne 0x71038c72c4
71038c72b0  ldur x0,[x29, #-0xd8]
71038c72b4  cbz x0,0x71038c72c4
71038c72b8  ldr x8,[x0]
71038c72bc  ldr x8,[x8, #0x8]
71038c72c0  blr x8
71038c72c4  add x0,sp,#0x120
71038c72c8  mov w1,#0x10
71038c72cc  orr w2,wzr,#0x78
71038c72d0  bl 0x710392e1f0
71038c72d4  cmp w0,#0xc
71038c72d8  b.ne 0x71038c7314
71038c72dc  adrp x8,0x710593d000
71038c72e0  ldr x0,[x8, #0x2b0]
71038c72e4  cbz x0,0x71038c7314
71038c72e8  orr w8,wzr,#0x78
71038c72ec  str x8,[sp, #0x3e0]
71038c72f0  ldr x8,[x0]
71038c72f4  ldr x8,[x8, #0x30]
71038c72f8  add x1,sp,#0x3e0
71038c72fc  blr x8
71038c7300  tbz w0,#0x0,0x71038c7314
71038c7304  add x0,sp,#0x120
71038c7308  mov w1,#0x10
71038c730c  orr w2,wzr,#0x78
71038c7310  bl 0x710392e1f0
71038c7314  cbz x21,0x71038c7328
71038c7318  ldr x2,[sp, #0x120]
71038c731c  orr w0,wzr,#0x78
71038c7320  mov w1,#0x10
71038c7324  bl 0x71039c19e0
71038c7328  adrp x8,0x7104290000
71038c732c  add x8,x8,#0x557
71038c7330  ldr x20,[sp, #0x120]
71038c7334  ldp x9,x8,[x8]
71038c7338  mov w10,#0x22
71038c733c  str xzr,[sp, #0x3e0]
71038c7340  str xzr,[sp, #0x3f0]
71038c7344  str xzr,[sp, #0x3e8]
71038c7348  strb w10,[sp, #0x3e0]
71038c734c  stp x8,x9,[sp, #0xb0]
71038c7350  stur x8,[x26, #0x9]
71038c7354  mov w8,#0x6d
71038c7358  stur x9,[x26, #0x1]
71038c735c  sturh w8,[x26, #0x11]
71038c7360  add x1,sp,#0x3e0
71038c7364  mov x0,x20
71038c7368  bl 0x71038b4c00
71038c736c  mov w8,#0x112
71038c7370  str w8,[sp, #0x3e8]
71038c7374  adrp x8,0x7105291000
71038c7378  add x8,x8,#0xd08
71038c737c  str x27,[sp, #0x3e0]
71038c7380  stp x8,x20,[x29, #-0x100]
71038c7384  cbz x20,0x71038c7394
71038c7388  ldr x8,[x20, #0x8]
71038c738c  ldr x9,[x8]
71038c7390  b 0x71038c739c
71038c7394  mov x8,xzr
71038c7398  mov x9,xzr
71038c739c  stp x8,x9,[x29, #-0xf0]
71038c73a0  stur x19,[x29, #-0x100]
71038c73a4  add x1,sp,#0x3e0
71038c73a8  sub x2,x29,#0x100
71038c73ac  mov x0,x28
71038c73b0  bl 0x71038b51b0
71038c73b4  ldur x8,[x29, #-0xf0]
71038c73b8  stur x19,[x29, #-0x100]
71038c73bc  cbz x8,0x71038c73e4
71038c73c0  ldr x8,[x8]
71038c73c4  ldur x9,[x29, #-0xe8]
71038c73c8  cmp x8,x9
71038c73cc  b.ne 0x71038c73e4
71038c73d0  ldur x0,[x29, #-0xf8]
71038c73d4  cbz x0,0x71038c73e4
71038c73d8  ldr x8,[x0]
71038c73dc  ldr x8,[x8, #0x8]
71038c73e0  blr x8
71038c73e4  add x0,sp,#0x120
71038c73e8  mov w1,#0x10
71038c73ec  orr w2,wzr,#0x78
71038c73f0  bl 0x710392e1f0
71038c73f4  cmp w0,#0xc
71038c73f8  b.ne 0x71038c7434
71038c73fc  adrp x8,0x710593d000
71038c7400  ldr x0,[x8, #0x2b0]
71038c7404  cbz x0,0x71038c7434
71038c7408  orr w8,wzr,#0x78
71038c740c  str x8,[sp, #0x3e0]
71038c7410  ldr x8,[x0]
71038c7414  ldr x8,[x8, #0x30]
71038c7418  add x1,sp,#0x3e0
71038c741c  blr x8
71038c7420  tbz w0,#0x0,0x71038c7434
71038c7424  add x0,sp,#0x120
71038c7428  mov w1,#0x10
71038c742c  orr w2,wzr,#0x78
71038c7430  bl 0x710392e1f0
71038c7434  cbz x21,0x71038c7448
71038c7438  ldr x2,[sp, #0x120]
71038c743c  orr w0,wzr,#0x78
71038c7440  mov w1,#0x10
71038c7444  bl 0x71039c19e0
71038c7448  mov w8,#0x20
71038c744c  adrp x9,0x7104464000
71038c7450  add x9,x9,#0x6fa
71038c7454  ldr x20,[sp, #0x120]
71038c7458  str xzr,[sp, #0x3e0]
71038c745c  strb w8,[sp, #0x3e0]
71038c7460  ldp x8,x9,[x9]
71038c7464  str xzr,[sp, #0x3f0]
71038c7468  str xzr,[sp, #0x3e8]
71038c746c  stp x9,x8,[sp, #0xd8]
71038c7470  stur x9,[x26, #0x9]
71038c7474  stur x8,[x26, #0x1]
71038c7478  strb wzr,[sp, #0x3f1]
71038c747c  add x1,sp,#0x3e0
71038c7480  mov x0,x20
71038c7484  bl 0x71038b4c00
71038c7488  mov w8,#0x123
71038c748c  str w8,[sp, #0x3e8]
71038c7490  adrp x8,0x7105291000
71038c7494  add x8,x8,#0xd08
71038c7498  str x27,[sp, #0x3e0]
71038c749c  str x20,[sp, #0x408]
71038c74a0  str x8,[sp, #0x400]
71038c74a4  cbz x20,0x71038c74b4
71038c74a8  ldr x8,[x20, #0x8]
71038c74ac  ldr x9,[x8]
71038c74b0  b 0x71038c74bc
71038c74b4  mov x8,xzr
71038c74b8  mov x9,xzr
71038c74bc  str x8,[sp, #0x410]
71038c74c0  str x9,[sp, #0x418]
71038c74c4  str x19,[sp, #0x400]
71038c74c8  add x1,sp,#0x3e0
71038c74cc  add x2,sp,#0x400
71038c74d0  mov x0,x28
71038c74d4  bl 0x71038b51b0
71038c74d8  ldr x8,[sp, #0x410]
71038c74dc  str x19,[sp, #0x400]
71038c74e0  cbz x8,0x71038c7508
71038c74e4  ldr x8,[x8]
71038c74e8  ldr x9,[sp, #0x418]
71038c74ec  cmp x8,x9
71038c74f0  b.ne 0x71038c7508
71038c74f4  ldr x0,[sp, #0x408]
71038c74f8  cbz x0,0x71038c7508
71038c74fc  ldr x8,[x0]
71038c7500  ldr x8,[x8, #0x8]
71038c7504  blr x8
71038c7508  mov w2,#0x28
71038c750c  add x0,sp,#0x120
71038c7510  mov w1,#0x10
71038c7514  bl 0x710392e1f0
71038c7518  cmp w0,#0xc
71038c751c  b.ne 0x71038c7558
71038c7520  adrp x8,0x710593d000
71038c7524  ldr x0,[x8, #0x2b0]
71038c7528  cbz x0,0x71038c7558
71038c752c  mov w8,#0x28
71038c7530  str x8,[sp, #0x3e0]
71038c7534  ldr x8,[x0]
71038c7538  ldr x8,[x8, #0x30]
71038c753c  add x1,sp,#0x3e0
71038c7540  blr x8
71038c7544  tbz w0,#0x0,0x71038c7558
71038c7548  mov w2,#0x28
71038c754c  add x0,sp,#0x120
71038c7550  mov w1,#0x10
71038c7554  bl 0x710392e1f0
71038c7558  cbz x21,0x71038c756c
71038c755c  ldr x2,[sp, #0x120]
71038c7560  mov w0,#0x28
71038c7564  mov w1,#0x10
71038c7568  bl 0x71039c19e0
71038c756c  ldr x19,[sp, #0x120]
71038c7570  stp xzr,xzr,[x19, #0x18]
71038c7574  stp xzr,xzr,[x19, #0x8]
71038c7578  str xzr,[x19]
71038c757c  mov x0,x19
71038c7580  bl 0x71037c3a70
71038c7584  adrp x8,0x710526a000
71038c7588  add x8,x8,#0x868
71038c758c  str xzr,[x19, #0x10]
71038c7590  stp xzr,xzr,[x19, #0x18]
71038c7594  str x8,[x19]
71038c7598  str x28,[sp, #0x3e8]
71038c759c  ldr x8,[x28, #0x8]
71038c75a0  str x8,[sp, #0x3f0]
71038c75a4  ldr x8,[x8]
71038c75a8  str x8,[sp, #0x3f8]
71038c75ac  adrp x8,0x7105233000
71038c75b0  add x8,x8,#0xb78
71038c75b4  str x8,[sp, #0x3e0]
71038c75b8  add x1,sp,#0x3e0
71038c75bc  mov x0,x19
71038c75c0  str x19,[sp, #0x88]
71038c75c4  bl 0x71038b3640
71038c75c8  mov w2,#0x168
71038c75cc  add x0,sp,#0x120
71038c75d0  mov w1,#0x10
71038c75d4  bl 0x710392e1f0
71038c75d8  cmp w0,#0xc
71038c75dc  b.ne 0x71038c7618
71038c75e0  adrp x8,0x710593d000
71038c75e4  ldr x0,[x8, #0x2b0]
71038c75e8  cbz x0,0x71038c7618
71038c75ec  mov w8,#0x168
71038c75f0  str x8,[sp, #0x3e0]
71038c75f4  ldr x8,[x0]
71038c75f8  ldr x8,[x8, #0x30]
71038c75fc  add x1,sp,#0x3e0
71038c7600  blr x8
71038c7604  tbz w0,#0x0,0x71038c7618
71038c7608  mov w2,#0x168
71038c760c  add x0,sp,#0x120
71038c7610  mov w1,#0x10
71038c7614  bl 0x710392e1f0
71038c7618  cbz x21,0x71038c762c
71038c761c  ldr x2,[sp, #0x120]
71038c7620  mov w0,#0x168
71038c7624  mov w1,#0x10
71038c7628  bl 0x71039c19e0
71038c762c  str x28,[sp, #0x80]
71038c7630  ldr x28,[sp, #0x120]
71038c7634  mov x0,x28
71038c7638  str x28,[sp, #0xf8]
71038c763c  bl 0x71037c3a70
71038c7640  stp x24,x22,[sp, #0x70]
71038c7644  adrp x8,0x7105291000
71038c7648  add x8,x8,#0xc38
71038c764c  mov x20,x28
71038c7650  mov x21,x28
71038c7654  mov x26,x28
71038c7658  mov x22,x28
71038c765c  mov x27,x28
71038c7660  mov x19,x28
71038c7664  str x8,[x28]
71038c7668  mov w1,#0x28
71038c766c  str xzr,[x20, #0x10]!
71038c7670  str xzr,[x21, #0x48]!
71038c7674  stp xzr,xzr,[x28, #0x50]
71038c7678  mov w0,#0x10
71038c767c  stp xzr,xzr,[x28, #0x28]
71038c7680  stp xzr,xzr,[x28, #0x18]
71038c7684  stp xzr,x23,[x28, #0x38]
71038c7688  str xzr,[x26, #0x68]!
71038c768c  str x23,[x28, #0x60]
71038c7690  stp xzr,xzr,[x28, #0x70]
71038c7694  str xzr,[x22, #0x88]!
71038c7698  str x23,[x28, #0x80]
71038c769c  stp xzr,xzr,[x28, #0x90]
71038c76a0  str xzr,[x27, #0xa8]!
71038c76a4  str x23,[x28, #0xa0]
71038c76a8  stp xzr,xzr,[x28, #0xb0]
71038c76ac  str xzr,[x19, #0xc8]!
71038c76b0  str x23,[x28, #0xc0]
71038c76b4  stp xzr,xzr,[x28, #0xd0]
71038c76b8  str xzr,[x28, #0xe8]!
71038c76bc  stur x23,[x28, #-0x8]
71038c76c0  stp xzr,xzr,[x28, #0x8]
71038c76c4  bl 0x710392e290
71038c76c8  cbnz x0,0x71038c7710
71038c76cc  adrp x8,0x7105332000
71038c76d0  ldr x0,[x8, #0xf00]
71038c76d4  cbz x0,0x71038c770c
71038c76d8  mov w8,#0x28
71038c76dc  str wzr,[sp, #0x120]
71038c76e0  add x1,sp,#0x120
71038c76e4  str x8,[sp, #0x3e0]
71038c76e8  ldr x8,[x0]
71038c76ec  ldr x8,[x8, #0x30]
71038c76f0  add x2,sp,#0x3e0
71038c76f4  blr x8
71038c76f8  tbz w0,#0x0,0x71038c770c
71038c76fc  mov w1,#0x28
71038c7700  mov w0,#0x10
71038c7704  bl 0x710392e290
71038c7708  cbnz x0,0x71038c7710
71038c770c  mov x0,xzr
71038c7710  stp xzr,xzr,[x0, #0x10]
71038c7714  orr w8,wzr,#0x3f800000
71038c7718  stp xzr,xzr,[x0]
71038c771c  mov w1,#0xb8
71038c7720  str w8,[x0, #0x20]
71038c7724  ldr x8,[sp, #0xf8]
71038c7728  add x24,x8,#0x128
71038c772c  str x0,[x8, #0x100]
71038c7730  mov w0,#0x10
71038c7734  str x24,[x8, #0x110]
71038c7738  bl 0x710392e290
71038c773c  cbnz x0,0x71038c7784
71038c7740  adrp x8,0x7105332000
71038c7744  ldr x0,[x8, #0xf00]
71038c7748  cbz x0,0x71038c7780
71038c774c  mov w8,#0xb8
71038c7750  str wzr,[sp, #0x120]
71038c7754  add x1,sp,#0x120
71038c7758  str x8,[sp, #0x3e0]
71038c775c  ldr x8,[x0]
71038c7760  ldr x8,[x8, #0x30]
71038c7764  add x2,sp,#0x3e0
71038c7768  blr x8
71038c776c  tbz w0,#0x0,0x71038c7780
71038c7770  mov w1,#0xb8
71038c7774  mov w0,#0x10
71038c7778  bl 0x710392e290
71038c777c  cbnz x0,0x71038c7784
71038c7780  mov x0,xzr
71038c7784  ldr x9,[sp, #0xf8]
71038c7788  str x0,[x9, #0x120]
71038c778c  mov w1,#0x10
71038c7790  str xzr,[x0, #0x88]!
71038c7794  mov x8,x0
71038c7798  stp x0,x0,[x0, #0x8]
71038c779c  str xzr,[x8, #0x18]!
71038c77a0  stp x8,x8,[x0, #0x20]
71038c77a4  add x8,x9,#0x150
71038c77a8  stp xzr,x24,[x9, #0x130]
71038c77ac  sub x0,x29,#0x60
71038c77b0  mov w2,#0x20
71038c77b4  stp x24,x8,[x9, #0x140]
71038c77b8  mov w8,#0x5
71038c77bc  str w8,[x9, #0x160]
71038c77c0  stp xzr,xzr,[x9, #0x150]
71038c77c4  str xzr,[x21]
71038c77c8  stp xzr,xzr,[x21, #0x8]
71038c77cc  str xzr,[x26]
71038c77d0  stp xzr,xzr,[x26, #0x8]
71038c77d4  str xzr,[x22]
71038c77d8  stp xzr,xzr,[x22, #0x8]
71038c77dc  str xzr,[x27]
71038c77e0  stp xzr,xzr,[x27, #0x8]
71038c77e4  str xzr,[x19]
71038c77e8  stp xzr,xzr,[x19, #0x8]
71038c77ec  str xzr,[x28]
71038c77f0  stp xzr,xzr,[x28, #0x8]
71038c77f4  str xzr,[sp, #0x3f0]
71038c77f8  str xzr,[sp, #0x3e8]
71038c77fc  str xzr,[sp, #0x3e0]
71038c7800  bl 0x710392e1f0
71038c7804  cmp w0,#0xc
71038c7808  b.ne 0x71038c7844
71038c780c  adrp x8,0x710593d000
71038c7810  ldr x0,[x8, #0x2b0]
71038c7814  cbz x0,0x71038c7844
71038c7818  mov w8,#0x20
71038c781c  str x8,[sp, #0x120]
71038c7820  ldr x8,[x0]
71038c7824  ldr x8,[x8, #0x30]
71038c7828  add x1,sp,#0x120
71038c782c  blr x8
71038c7830  tbz w0,#0x0,0x71038c7844
71038c7834  sub x0,x29,#0x60
71038c7838  mov w1,#0x10
71038c783c  mov w2,#0x20
71038c7840  bl 0x710392e1f0
71038c7844  adrp x22,0x71052a8000
71038c7848  ldr x22,[x22, #0xa78]
71038c784c  add x24,sp,#0x3e0
71038c7850  adrp x19,0x710526a000
71038c7854  add x19,x19,#0x918
71038c7858  adrp x26,0x7105290000
71038c785c  add x26,x26,#0xed8
71038c7860  cbz x22,0x71038c7874
71038c7864  ldur x2,[x29, #-0x60]
71038c7868  mov w0,#0x20
71038c786c  mov w1,#0x10
71038c7870  bl 0x71039c19e0
71038c7874  mov w8,#0x21
71038c7878  str x8,[sp, #0x3e0]
71038c787c  mov w8,#0x1b
71038c7880  ldur x7,[x29, #-0x60]
71038c7884  str x8,[sp, #0x3e8]
71038c7888  adrp x8,0x7104317000
71038c788c  add x8,x8,#0xaa9
71038c7890  ldp x28,x9,[x8]
71038c7894  ldr x10,[x8, #0x10]
71038c7898  mov w8,#0x79
71038c789c  str x7,[sp, #0x3f0]
71038c78a0  strb w8,[x7, #0x1a]
71038c78a4  mov w8,#0x6172
71038c78a8  strh w8,[x7, #0x18]
71038c78ac  stp x9,x10,[x7, #0x8]
71038c78b0  str x28,[x7]
71038c78b4  strb wzr,[x7, #0x1b]
71038c78b8  ldrb w8,[x20]
71038c78bc  ldr x27,[sp, #0xf8]
71038c78c0  stp x10,x9,[sp, #0x60]
71038c78c4  tbnz w8,#0x0,0x71038c78d4
71038c78c8  lsr x3,x8,#0x1
71038c78cc  mov w1,#0x16
71038c78d0  b 0x71038c78ec
71038c78d4  ldr x8,[x20]
71038c78d8  and x8,x8,#-0x2
71038c78dc  sub x1,x8,#0x1
71038c78e0  cmp x1,#0x1b
71038c78e4  b.cs 0x71038c7910
71038c78e8  ldr x3,[x27, #0x18]
71038c78ec  mov w6,#0x1b
71038c78f0  sub x2,x6,x1
71038c78f4  mov x0,x20
71038c78f8  mov x4,xzr
71038c78fc  mov x5,x3
71038c7900  bl 0x71037cfe00
71038c7904  ldrb w8,[sp, #0x3e0]
71038c7908  tbnz w8,#0x0,0x71038c79d8
71038c790c  b 0x71038c79f8
71038c7910  ldr x21,[x27, #0x20]
71038c7914  mov w2,#0x1b
71038c7918  mov x0,x21
71038c791c  mov x1,x7
71038c7920  bl 0x71039c00a0
71038c7924  strb wzr,[x21, #0x1b]
71038c7928  ldrb w8,[x27, #0x10]
71038c792c  tbnz w8,#0x0,0x71038c79d0
71038c7930  mov w8,#0x36
71038c7934  strb w8,[x20]
71038c7938  b 0x71038c79d8
71038c793c  ldr x8,[x28, #0x20]
71038c7940  ldr x9,[x7]
71038c7944  ldr w10,[x7, #0x8]
71038c7948  ldrb w11,[x7, #0xc]
71038c794c  strb w11,[x8, #0xc]
71038c7950  str w10,[x8, #0x8]
71038c7954  str x9,[x8]
71038c7958  strb wzr,[x8, #0xd]
71038c795c  ldrb w8,[x20]
71038c7960  tbnz w8,#0x0,0x71038c7974
71038c7964  strb w12,[x20]
71038c7968  ldrb w8,[sp, #0x3e0]
71038c796c  tbnz w8,#0x0,0x71038c6cec
71038c7970  b 0x71038c6d0c
71038c7974  mov w8,#0xd
71038c7978  str x8,[x28, #0x18]
71038c797c  ldrb w8,[sp, #0x3e0]
71038c7980  tbnz w8,#0x0,0x71038c6cec
71038c7984  b 0x71038c6d0c
71038c7988  ldr x8,[x28, #0x38]
71038c798c  ldr x9,[x7]
71038c7990  ldrb w10,[x7, #0x8]
71038c7994  strb w10,[x8, #0x8]
71038c7998  str x9,[x8]
71038c799c  strb wzr,[x8, #0x9]
71038c79a0  ldrb w8,[x0]
71038c79a4  tbnz w8,#0x0,0x71038c79bc
71038c79a8  mov w8,#0x12
71038c79ac  strb w8,[x0]
71038c79b0  ldrb w8,[sp, #0x3e0]
71038c79b4  tbnz w8,#0x0,0x71038c6d94
71038c79b8  b 0x71038c6db4
71038c79bc  mov w8,#0x9
71038c79c0  str x8,[x28, #0x30]
71038c79c4  ldrb w8,[sp, #0x3e0]
71038c79c8  tbnz w8,#0x0,0x71038c6d94
71038c79cc  b 0x71038c6db4
71038c79d0  mov w8,#0x1b
71038c79d4  str x8,[x27, #0x18]
71038c79d8  adrp x8,0x71052a8000
71038c79dc  ldr x20,[sp, #0x3f0]
71038c79e0  ldr x8,[x8, #0xa70]
71038c79e4  cbz x8,0x71038c79f0
71038c79e8  mov x0,x20
71038c79ec  bl 0x71039c19b0
71038c79f0  mov x0,x20
71038c79f4  bl 0x710392eb40
71038c79f8  ldr x9,[sp, #0xf0]
71038c79fc  mov w8,#0x12
71038c7a00  str xzr,[sp, #0x3e0]
71038c7a04  strb w8,[sp, #0x3e0]
71038c7a08  add x8,sp,#0x3e0
71038c7a0c  add x0,x27,#0x28
71038c7a10  str xzr,[sp, #0x3e8]
71038c7a14  str xzr,[sp, #0x3f0]
71038c7a18  cmp x8,x0
71038c7a1c  stur x9,[x24, #0x1]
71038c7a20  mov w9,#0x6c
71038c7a24  sturh w9,[x24, #0x9]
71038c7a28  b.eq 0x71038c7a6c
71038c7a2c  orr x7,x8,#0x1
71038c7a30  ldrb w8,[x0]
71038c7a34  tbnz w8,#0x0,0x71038c7a40
71038c7a38  add x8,x27,#0x29
71038c7a3c  b 0x71038c8774
71038c7a40  ldr x8,[x0]
71038c7a44  and x8,x8,#-0x2
71038c7a48  sub x1,x8,#0x1
71038c7a4c  cmp x1,#0x9
71038c7a50  b.cs 0x71038c8770
71038c7a54  ldr x3,[x27, #0x30]
71038c7a58  mov w6,#0x9
71038c7a5c  sub x2,x6,x1
71038c7a60  mov x4,xzr
71038c7a64  mov x5,x3
71038c7a68  bl 0x71037cfe00
71038c7a6c  ldrb w8,[sp, #0x3e0]
71038c7a70  tbz w8,#0x0,0x71038c7a94
71038c7a74  adrp x8,0x71052a8000
71038c7a78  ldr x20,[sp, #0x3f0]
71038c7a7c  ldr x8,[x8, #0xa70]
71038c7a80  cbz x8,0x71038c7a8c
71038c7a84  mov x0,x20
71038c7a88  bl 0x71039c19b0
71038c7a8c  mov x0,x20
71038c7a90  bl 0x710392eb40
71038c7a94  orr w8,wzr,#0x1e
71038c7a98  str xzr,[sp, #0x3e0]
71038c7a9c  strb w8,[sp, #0x3e0]
71038c7aa0  ldr x8,[sp, #0xd0]
71038c7aa4  str xzr,[sp, #0x3e8]
71038c7aa8  str xzr,[sp, #0x3f0]
71038c7aac  str x8,[sp, #0x3e8]
71038c7ab0  stur x25,[x24, #0x1]
71038c7ab4  strb wzr,[sp, #0x3f0]
71038c7ab8  ldr x0,[x27, #0x100]
71038c7abc  add x2,sp,#0x3e0
71038c7ac0  mov w1,wzr
71038c7ac4  bl 0x71038b69b0
71038c7ac8  sub x0,x29,#0x60
71038c7acc  mov w1,#0x10
71038c7ad0  mov w2,#0x20
71038c7ad4  str xzr,[sp, #0x3f0]
71038c7ad8  str xzr,[sp, #0x3e8]
71038c7adc  str xzr,[sp, #0x3e0]
71038c7ae0  bl 0x710392e1f0
71038c7ae4  cmp w0,#0xc
71038c7ae8  adrp x21,0x7105291000
71038c7aec  add x21,x21,#0xd08
71038c7af0  b.ne 0x71038c7b2c
71038c7af4  adrp x8,0x710593d000
71038c7af8  ldr x0,[x8, #0x2b0]
71038c7afc  cbz x0,0x71038c7b2c
71038c7b00  mov w8,#0x20
71038c7b04  str x8,[sp, #0x120]
71038c7b08  ldr x8,[x0]
71038c7b0c  ldr x8,[x8, #0x30]
71038c7b10  add x1,sp,#0x120
71038c7b14  blr x8
71038c7b18  tbz w0,#0x0,0x71038c7b2c
71038c7b1c  sub x0,x29,#0x60
71038c7b20  mov w1,#0x10
71038c7b24  mov w2,#0x20
71038c7b28  bl 0x710392e1f0
71038c7b2c  cbz x22,0x71038c7b40
71038c7b30  ldur x2,[x29, #-0x60]
71038c7b34  mov w0,#0x20
71038c7b38  mov w1,#0x10
71038c7b3c  bl 0x71039c19e0
71038c7b40  mov w8,#0x21
71038c7b44  str x8,[sp, #0x3e0]
71038c7b48  mov w8,#0x1d
71038c7b4c  str x8,[sp, #0x3e8]
71038c7b50  adrp x8,0x7104328000
71038c7b54  add x8,x8,#0x9fd
71038c7b58  ldur x20,[x29, #-0x60]
71038c7b5c  ldp x9,x10,[x8]
71038c7b60  ldr x11,[x8, #0x10]
71038c7b64  ldur x8,[x8, #0x15]
71038c7b68  str x20,[sp, #0x3f0]
71038c7b6c  stur x8,[x20, #0x15]
71038c7b70  stp x10,x11,[x20, #0x8]
71038c7b74  str x9,[x20]
71038c7b78  strb wzr,[x20, #0x1d]
71038c7b7c  ldr x0,[x27, #0x100]
71038c7b80  mov w1,#0x4
71038c7b84  add x2,sp,#0x3e0
71038c7b88  bl 0x71038b69b0
71038c7b8c  adrp x8,0x71052a8000
71038c7b90  ldr x8,[x8, #0xa70]
71038c7b94  cbz x8,0x71038c7ba0
71038c7b98  mov x0,x20
71038c7b9c  bl 0x71039c19b0
71038c7ba0  mov x0,x20
71038c7ba4  bl 0x710392eb40
71038c7ba8  mov x0,x27
71038c7bac  bl 0x71038b64a0
71038c7bb0  add x0,sp,#0x120
71038c7bb4  mov w1,#0x10
71038c7bb8  orr w2,wzr,#0x78
71038c7bbc  bl 0x710392e1f0
71038c7bc0  cmp w0,#0xc
71038c7bc4  b.ne 0x71038c7c00
71038c7bc8  adrp x8,0x710593d000
71038c7bcc  ldr x0,[x8, #0x2b0]
71038c7bd0  cbz x0,0x71038c7c00
71038c7bd4  orr w8,wzr,#0x78
71038c7bd8  str x8,[sp, #0x3e0]
71038c7bdc  ldr x8,[x0]
71038c7be0  ldr x8,[x8, #0x30]
71038c7be4  add x1,sp,#0x3e0
71038c7be8  blr x8
71038c7bec  tbz w0,#0x0,0x71038c7c00
71038c7bf0  add x0,sp,#0x120
71038c7bf4  mov w1,#0x10
71038c7bf8  orr w2,wzr,#0x78
71038c7bfc  bl 0x710392e1f0
71038c7c00  cbz x22,0x71038c7c14
71038c7c04  ldr x2,[sp, #0x120]
71038c7c08  orr w0,wzr,#0x78
71038c7c0c  mov w1,#0x10
71038c7c10  bl 0x71039c19e0
71038c7c14  ldr x20,[sp, #0x120]
71038c7c18  orr w8,wzr,#0xe
71038c7c1c  str xzr,[sp, #0x3e0]
71038c7c20  strb w8,[sp, #0x3e0]
71038c7c24  mov w8,#0x65
71038c7c28  strb w8,[sp, #0x3e7]
71038c7c2c  mov w8,#0x7375
71038c7c30  str xzr,[sp, #0x3e8]
71038c7c34  str xzr,[sp, #0x3f0]
71038c7c38  sturh w8,[x24, #0x5]
71038c7c3c  mov w8,#0x6964
71038c7c40  movk w8,#0x6666, LSL #16
71038c7c44  stur w8,[x24, #0x1]
71038c7c48  strb wzr,[sp, #0x3e8]
71038c7c4c  add x1,sp,#0x3e0
71038c7c50  mov x0,x20
71038c7c54  bl 0x71038b4c00
71038c7c58  str x26,[sp, #0x3e0]
71038c7c5c  str wzr,[sp, #0x3e8]
71038c7c60  str x21,[sp, #0x3c0]
71038c7c64  str x20,[sp, #0x3c8]
71038c7c68  cbz x20,0x71038c7c78
71038c7c6c  ldr x8,[x20, #0x8]
71038c7c70  ldr x9,[x8]
71038c7c74  b 0x71038c7c80
71038c7c78  mov x8,xzr
71038c7c7c  mov x9,xzr
71038c7c80  str x8,[sp, #0x3d0]
71038c7c84  str x9,[sp, #0x3d8]
71038c7c88  str x19,[sp, #0x3c0]
71038c7c8c  add x1,sp,#0x3e0
71038c7c90  add x2,sp,#0x3c0
71038c7c94  mov x0,x27
71038c7c98  bl 0x71038b51b0
71038c7c9c  ldr x8,[sp, #0x3d0]
71038c7ca0  str x19,[sp, #0x3c0]
71038c7ca4  cbz x8,0x71038c7ccc
71038c7ca8  ldr x8,[x8]
71038c7cac  ldr x9,[sp, #0x3d8]
71038c7cb0  cmp x8,x9
71038c7cb4  b.ne 0x71038c7ccc
71038c7cb8  ldr x0,[sp, #0x3c8]
71038c7cbc  cbz x0,0x71038c7ccc
71038c7cc0  ldr x8,[x0]
71038c7cc4  ldr x8,[x8, #0x8]
71038c7cc8  blr x8
71038c7ccc  add x0,sp,#0x120
71038c7cd0  mov w1,#0x10
71038c7cd4  orr w2,wzr,#0x78
71038c7cd8  bl 0x710392e1f0
71038c7cdc  cmp w0,#0xc
71038c7ce0  b.ne 0x71038c7d1c
71038c7ce4  adrp x8,0x710593d000
71038c7ce8  ldr x0,[x8, #0x2b0]
71038c7cec  cbz x0,0x71038c7d1c
71038c7cf0  orr w8,wzr,#0x78
71038c7cf4  str x8,[sp, #0x3e0]
71038c7cf8  ldr x8,[x0]
71038c7cfc  ldr x8,[x8, #0x30]
71038c7d00  add x1,sp,#0x3e0
71038c7d04  blr x8
71038c7d08  tbz w0,#0x0,0x71038c7d1c
71038c7d0c  add x0,sp,#0x120
71038c7d10  mov w1,#0x10
71038c7d14  orr w2,wzr,#0x78
71038c7d18  bl 0x710392e1f0
71038c7d1c  cbz x22,0x71038c7d30
71038c7d20  ldr x2,[sp, #0x120]
71038c7d24  orr w0,wzr,#0x78
71038c7d28  mov w1,#0x10
71038c7d2c  bl 0x71039c19e0
71038c7d30  adrp x8,0x71042f6000
71038c7d34  add x8,x8,#0x85b
71038c7d38  ldr x20,[sp, #0x120]
71038c7d3c  ldur x9,[x8, #0x7]
71038c7d40  ldr x8,[x8]
71038c7d44  orr w19,wzr,#0x1e
71038c7d48  str xzr,[sp, #0x3e0]
71038c7d4c  str xzr,[sp, #0x3e8]
71038c7d50  str xzr,[sp, #0x3f0]
71038c7d54  strb w19,[sp, #0x3e0]
71038c7d58  str x9,[sp, #0x3e8]
71038c7d5c  stur x8,[x24, #0x1]
71038c7d60  strb wzr,[sp, #0x3f0]
71038c7d64  add x1,sp,#0x3e0
71038c7d68  mov x0,x20
71038c7d6c  bl 0x71038b4c00
71038c7d70  str x26,[sp, #0x3e0]
71038c7d74  str w19,[sp, #0x3e8]
71038c7d78  str x21,[sp, #0x3a0]
71038c7d7c  str x20,[sp, #0x3a8]
71038c7d80  cbz x20,0x71038c7d90
71038c7d84  ldr x8,[x20, #0x8]
71038c7d88  ldr x9,[x8]
71038c7d8c  b 0x71038c7d98
71038c7d90  mov x8,xzr
71038c7d94  mov x9,xzr
71038c7d98  adrp x19,0x710526a000
71038c7d9c  add x19,x19,#0x918
71038c7da0  str x8,[sp, #0x3b0]
71038c7da4  str x9,[sp, #0x3b8]
71038c7da8  str x19,[sp, #0x3a0]
71038c7dac  add x1,sp,#0x3e0
71038c7db0  add x2,sp,#0x3a0
71038c7db4  mov x0,x27
71038c7db8  bl 0x71038b51b0
71038c7dbc  ldr x8,[sp, #0x3b0]
71038c7dc0  str x19,[sp, #0x3a0]
71038c7dc4  cbz x8,0x71038c7dec
71038c7dc8  ldr x8,[x8]
71038c7dcc  ldr x9,[sp, #0x3b8]
71038c7dd0  cmp x8,x9
71038c7dd4  b.ne 0x71038c7dec
71038c7dd8  ldr x0,[sp, #0x3a8]
71038c7ddc  cbz x0,0x71038c7dec
71038c7de0  ldr x8,[x0]
71038c7de4  ldr x8,[x8, #0x8]
71038c7de8  blr x8
71038c7dec  add x0,sp,#0x120
71038c7df0  mov w1,#0x10
71038c7df4  orr w2,wzr,#0x78
71038c7df8  bl 0x710392e1f0
71038c7dfc  cmp w0,#0xc
71038c7e00  b.ne 0x71038c7e3c
71038c7e04  adrp x8,0x710593d000
71038c7e08  ldr x0,[x8, #0x2b0]
71038c7e0c  cbz x0,0x71038c7e3c
71038c7e10  orr w8,wzr,#0x78
71038c7e14  str x8,[sp, #0x3e0]
71038c7e18  ldr x8,[x0]
71038c7e1c  ldr x8,[x8, #0x30]
71038c7e20  add x1,sp,#0x3e0
71038c7e24  blr x8
71038c7e28  tbz w0,#0x0,0x71038c7e3c
71038c7e2c  add x0,sp,#0x120
71038c7e30  mov w1,#0x10
71038c7e34  orr w2,wzr,#0x78
71038c7e38  bl 0x710392e1f0
71038c7e3c  cbz x22,0x71038c7e50
71038c7e40  ldr x2,[sp, #0x120]
71038c7e44  orr w0,wzr,#0x78
71038c7e48  mov w1,#0x10
71038c7e4c  bl 0x71039c19e0
71038c7e50  orr w8,wzr,#0x1c
71038c7e54  strb w8,[sp, #0x3e0]
71038c7e58  ldr x8,[sp, #0xc8]
71038c7e5c  str xzr,[sp, #0x3f0]
71038c7e60  ldr x20,[sp, #0x120]
71038c7e64  stur x8,[x24, #0x7]
71038c7e68  ldr x8,[sp, #0xc0]
71038c7e6c  stur x8,[x24, #0x1]
71038c7e70  strb wzr,[sp, #0x3ef]
71038c7e74  add x1,sp,#0x3e0
71038c7e78  mov x0,x20
71038c7e7c  bl 0x71038b4c00
71038c7e80  mov w8,#0x40
71038c7e84  str x26,[sp, #0x3e0]
71038c7e88  str x21,[sp, #0x380]
71038c7e8c  str w8,[sp, #0x3e8]
71038c7e90  str x20,[sp, #0x388]
71038c7e94  cbz x20,0x71038c7ea4
71038c7e98  ldr x8,[x20, #0x8]
71038c7e9c  ldr x9,[x8]
71038c7ea0  b 0x71038c7eac
71038c7ea4  mov x8,xzr
71038c7ea8  mov x9,xzr
71038c7eac  str x8,[sp, #0x390]
71038c7eb0  str x9,[sp, #0x398]
71038c7eb4  str x19,[sp, #0x380]
71038c7eb8  add x1,sp,#0x3e0
71038c7ebc  add x2,sp,#0x380
71038c7ec0  mov x0,x27
71038c7ec4  bl 0x71038b51b0
71038c7ec8  ldr x8,[sp, #0x390]
71038c7ecc  str x19,[sp, #0x380]
71038c7ed0  cbz x8,0x71038c7ef8
71038c7ed4  ldr x8,[x8]
71038c7ed8  ldr x9,[sp, #0x398]
71038c7edc  cmp x8,x9
71038c7ee0  b.ne 0x71038c7ef8
71038c7ee4  ldr x0,[sp, #0x388]
71038c7ee8  cbz x0,0x71038c7ef8
71038c7eec  ldr x8,[x0]
71038c7ef0  ldr x8,[x8, #0x8]
71038c7ef4  blr x8
71038c7ef8  add x0,sp,#0x120
71038c7efc  mov w1,#0x10
71038c7f00  orr w2,wzr,#0x78
71038c7f04  bl 0x710392e1f0
71038c7f08  cmp w0,#0xc
71038c7f0c  b.ne 0x71038c7f48
71038c7f10  adrp x8,0x710593d000
71038c7f14  ldr x0,[x8, #0x2b0]
71038c7f18  cbz x0,0x71038c7f48
71038c7f1c  orr w8,wzr,#0x78
71038c7f20  str x8,[sp, #0x3e0]
71038c7f24  ldr x8,[x0]
71038c7f28  ldr x8,[x8, #0x30]
71038c7f2c  add x1,sp,#0x3e0
71038c7f30  blr x8
71038c7f34  tbz w0,#0x0,0x71038c7f48
71038c7f38  add x0,sp,#0x120
71038c7f3c  mov w1,#0x10
71038c7f40  orr w2,wzr,#0x78
71038c7f44  bl 0x710392e1f0
71038c7f48  cbz x22,0x71038c7f5c
71038c7f4c  ldr x2,[sp, #0x120]
71038c7f50  orr w0,wzr,#0x78
71038c7f54  mov w1,#0x10
71038c7f58  bl 0x71039c19e0
71038c7f5c  mov w8,#0x16
71038c7f60  str xzr,[sp, #0x3e0]
71038c7f64  strb w8,[sp, #0x3e0]
71038c7f68  ldr x8,[sp, #0xe8]
71038c7f6c  ldr x20,[sp, #0x120]
71038c7f70  str xzr,[sp, #0x3e8]
71038c7f74  str xzr,[sp, #0x3f0]
71038c7f78  stur x8,[x24, #0x1]
71038c7f7c  mov w8,#0x6574
71038c7f80  movk w8,#0x30, LSL #16
71038c7f84  stur w8,[x24, #0x9]
71038c7f88  add x1,sp,#0x3e0
71038c7f8c  mov x0,x20
71038c7f90  bl 0x71038b4c00
71038c7f94  mov w8,#0x118
71038c7f98  str x26,[sp, #0x3e0]
71038c7f9c  str x21,[sp, #0x360]
71038c7fa0  str w8,[sp, #0x3e8]
71038c7fa4  str x20,[sp, #0x368]
71038c7fa8  cbz x20,0x71038c7fb8
71038c7fac  ldr x8,[x20, #0x8]
71038c7fb0  ldr x9,[x8]
71038c7fb4  b 0x71038c7fc0
71038c7fb8  mov x8,xzr
71038c7fbc  mov x9,xzr
71038c7fc0  str x8,[sp, #0x370]
71038c7fc4  str x9,[sp, #0x378]
71038c7fc8  str x19,[sp, #0x360]
71038c7fcc  add x1,sp,#0x3e0
71038c7fd0  add x2,sp,#0x360
71038c7fd4  mov x0,x27
71038c7fd8  bl 0x71038b51b0
71038c7fdc  ldr x8,[sp, #0x370]
71038c7fe0  str x19,[sp, #0x360]
71038c7fe4  cbz x8,0x71038c800c
71038c7fe8  ldr x8,[x8]
71038c7fec  ldr x9,[sp, #0x378]
71038c7ff0  cmp x8,x9
71038c7ff4  b.ne 0x71038c800c
71038c7ff8  ldr x0,[sp, #0x368]
71038c7ffc  cbz x0,0x71038c800c
71038c8000  ldr x8,[x0]
71038c8004  ldr x8,[x8, #0x8]
71038c8008  blr x8
71038c800c  add x0,sp,#0x120
71038c8010  mov w1,#0x10
71038c8014  orr w2,wzr,#0x78
71038c8018  bl 0x710392e1f0
71038c801c  cmp w0,#0xc
71038c8020  b.ne 0x71038c805c
71038c8024  adrp x8,0x710593d000
71038c8028  ldr x0,[x8, #0x2b0]
71038c802c  cbz x0,0x71038c805c
71038c8030  orr w8,wzr,#0x78
71038c8034  str x8,[sp, #0x3e0]
71038c8038  ldr x8,[x0]
71038c803c  ldr x8,[x8, #0x30]
71038c8040  add x1,sp,#0x3e0
71038c8044  blr x8
71038c8048  tbz w0,#0x0,0x71038c805c
71038c804c  add x0,sp,#0x120
71038c8050  mov w1,#0x10
71038c8054  orr w2,wzr,#0x78
71038c8058  bl 0x710392e1f0
71038c805c  cbz x22,0x71038c8070
71038c8060  ldr x2,[sp, #0x120]
71038c8064  orr w0,wzr,#0x78
71038c8068  mov w1,#0x10
71038c806c  bl 0x71039c19e0
71038c8070  mov w8,#0x22
71038c8074  str xzr,[sp, #0x3e0]
71038c8078  strb w8,[sp, #0x3e0]
71038c807c  ldr x8,[sp, #0xb0]
71038c8080  str xzr,[sp, #0x3f0]
71038c8084  ldr x20,[sp, #0x120]
71038c8088  str xzr,[sp, #0x3e8]
71038c808c  stur x8,[x24, #0x9]
71038c8090  ldr x8,[sp, #0xb8]
71038c8094  stur x8,[x24, #0x1]
71038c8098  mov w8,#0x6d
71038c809c  sturh w8,[x24, #0x11]
71038c80a0  add x1,sp,#0x3e0
71038c80a4  mov x0,x20
71038c80a8  bl 0x71038b4c00
71038c80ac  mov w8,#0x112
71038c80b0  str x26,[sp, #0x3e0]
71038c80b4  str x21,[sp, #0x340]
71038c80b8  str w8,[sp, #0x3e8]
71038c80bc  str x20,[sp, #0x348]
71038c80c0  cbz x20,0x71038c80d0
71038c80c4  ldr x8,[x20, #0x8]
71038c80c8  ldr x9,[x8]
71038c80cc  b 0x71038c80d8
71038c80d0  mov x8,xzr
71038c80d4  mov x9,xzr
71038c80d8  str x8,[sp, #0x350]
71038c80dc  str x9,[sp, #0x358]
71038c80e0  str x19,[sp, #0x340]
71038c80e4  add x1,sp,#0x3e0
71038c80e8  add x2,sp,#0x340
71038c80ec  mov x0,x27
71038c80f0  bl 0x71038b51b0
71038c80f4  ldr x8,[sp, #0x350]
71038c80f8  str x19,[sp, #0x340]
71038c80fc  cbz x8,0x71038c8124
71038c8100  ldr x8,[x8]
71038c8104  ldr x9,[sp, #0x358]
71038c8108  cmp x8,x9
71038c810c  b.ne 0x71038c8124
71038c8110  ldr x0,[sp, #0x348]
71038c8114  cbz x0,0x71038c8124
71038c8118  ldr x8,[x0]
71038c811c  ldr x8,[x8, #0x8]
71038c8120  blr x8
71038c8124  add x0,sp,#0x120
71038c8128  mov w1,#0x10
71038c812c  orr w2,wzr,#0x78
71038c8130  bl 0x710392e1f0
71038c8134  cmp w0,#0xc
71038c8138  b.ne 0x71038c8174
71038c813c  adrp x8,0x710593d000
71038c8140  ldr x0,[x8, #0x2b0]
71038c8144  cbz x0,0x71038c8174
71038c8148  orr w8,wzr,#0x78
71038c814c  str x8,[sp, #0x3e0]
71038c8150  ldr x8,[x0]
71038c8154  ldr x8,[x8, #0x30]
71038c8158  add x1,sp,#0x3e0
71038c815c  blr x8
71038c8160  tbz w0,#0x0,0x71038c8174
71038c8164  add x0,sp,#0x120
71038c8168  mov w1,#0x10
71038c816c  orr w2,wzr,#0x78
71038c8170  bl 0x710392e1f0
71038c8174  cbz x22,0x71038c8188
71038c8178  ldr x2,[sp, #0x120]
71038c817c  orr w0,wzr,#0x78
71038c8180  mov w1,#0x10
71038c8184  bl 0x71039c19e0
71038c8188  mov w8,#0x20
71038c818c  str xzr,[sp, #0x3e0]
71038c8190  strb w8,[sp, #0x3e0]
71038c8194  ldr x8,[sp, #0xd8]
71038c8198  ldr x20,[sp, #0x120]
71038c819c  str xzr,[sp, #0x3f0]
71038c81a0  str xzr,[sp, #0x3e8]
71038c81a4  stur x8,[x24, #0x9]
71038c81a8  ldr x8,[sp, #0xe0]
71038c81ac  stur x8,[x24, #0x1]
71038c81b0  strb wzr,[sp, #0x3f1]
71038c81b4  add x1,sp,#0x3e0
71038c81b8  mov x0,x20
71038c81bc  bl 0x71038b4c00
71038c81c0  mov w8,#0x123
71038c81c4  str x26,[sp, #0x3e0]
71038c81c8  str x21,[sp, #0x320]
71038c81cc  str w8,[sp, #0x3e8]
71038c81d0  str x20,[sp, #0x328]
71038c81d4  cbz x20,0x71038c81e4
71038c81d8  ldr x8,[x20, #0x8]
71038c81dc  ldr x9,[x8]
71038c81e0  b 0x71038c81ec
71038c81e4  mov x8,xzr
71038c81e8  mov x9,xzr
71038c81ec  str x8,[sp, #0x330]
71038c81f0  str x9,[sp, #0x338]
71038c81f4  str x19,[sp, #0x320]
71038c81f8  add x1,sp,#0x3e0
71038c81fc  add x2,sp,#0x320
71038c8200  mov x0,x27
71038c8204  bl 0x71038b51b0
71038c8208  ldr x8,[sp, #0x330]
71038c820c  str x19,[sp, #0x320]
71038c8210  cbz x8,0x71038c8238
71038c8214  ldr x8,[x8]
71038c8218  ldr x9,[sp, #0x338]
71038c821c  cmp x8,x9
71038c8220  b.ne 0x71038c8238
71038c8224  ldr x0,[sp, #0x328]
71038c8228  cbz x0,0x71038c8238
71038c822c  ldr x8,[x0]
71038c8230  ldr x8,[x8, #0x8]
71038c8234  blr x8
71038c8238  add x0,sp,#0x120
71038c823c  mov w1,#0x10
71038c8240  orr w2,wzr,#0x78
71038c8244  bl 0x710392e1f0
71038c8248  cmp w0,#0xc
71038c824c  b.ne 0x71038c8288
71038c8250  adrp x8,0x710593d000
71038c8254  ldr x0,[x8, #0x2b0]
71038c8258  cbz x0,0x71038c8288
71038c825c  orr w8,wzr,#0x78
71038c8260  str x8,[sp, #0x3e0]
71038c8264  ldr x8,[x0]
71038c8268  ldr x8,[x8, #0x30]
71038c826c  add x1,sp,#0x3e0
71038c8270  blr x8
71038c8274  tbz w0,#0x0,0x71038c8288
71038c8278  add x0,sp,#0x120
71038c827c  mov w1,#0x10
71038c8280  orr w2,wzr,#0x78
71038c8284  bl 0x710392e1f0
71038c8288  cbz x22,0x71038c829c
71038c828c  ldr x2,[sp, #0x120]
71038c8290  orr w0,wzr,#0x78
71038c8294  mov w1,#0x10
71038c8298  bl 0x71039c19e0
71038c829c  adrp x8,0x710436a000
71038c82a0  add x8,x8,#0xf21
71038c82a4  ldr x8,[x8]
71038c82a8  ldr x20,[sp, #0x120]
71038c82ac  orr w9,wzr,#0x18
71038c82b0  str xzr,[sp, #0x3e0]
71038c82b4  str xzr,[sp, #0x3e8]
71038c82b8  str xzr,[sp, #0x3f0]
71038c82bc  strb w9,[sp, #0x3e0]
71038c82c0  stur x8,[x24, #0x1]
71038c82c4  mov w8,#0x646e
71038c82c8  movk w8,#0x7865, LSL #16
71038c82cc  stur w8,[x24, #0x9]
71038c82d0  strb wzr,[sp, #0x3ed]
71038c82d4  add x1,sp,#0x3e0
71038c82d8  mov x0,x20
71038c82dc  bl 0x71038b4c00
71038c82e0  mov w8,#0xd4
71038c82e4  str x26,[sp, #0x3e0]
71038c82e8  str x21,[sp, #0x300]
71038c82ec  str w8,[sp, #0x3e8]
71038c82f0  str x20,[sp, #0x308]
71038c82f4  cbz x20,0x71038c8304
71038c82f8  ldr x8,[x20, #0x8]
71038c82fc  ldr x9,[x8]
71038c8300  b 0x71038c830c
71038c8304  mov x8,xzr
71038c8308  mov x9,xzr
71038c830c  str x8,[sp, #0x310]
71038c8310  str x9,[sp, #0x318]
71038c8314  str x19,[sp, #0x300]
71038c8318  add x1,sp,#0x3e0
71038c831c  add x2,sp,#0x300
71038c8320  mov x0,x27
71038c8324  bl 0x71038b51b0
71038c8328  ldr x8,[sp, #0x310]
71038c832c  str x19,[sp, #0x300]
71038c8330  cbz x8,0x71038c8358
71038c8334  ldr x8,[x8]
71038c8338  ldr x9,[sp, #0x318]
71038c833c  cmp x8,x9
71038c8340  b.ne 0x71038c8358
71038c8344  ldr x0,[sp, #0x308]
71038c8348  cbz x0,0x71038c8358
71038c834c  ldr x8,[x0]
71038c8350  ldr x8,[x8, #0x8]
71038c8354  blr x8
71038c8358  mov w2,#0x28
71038c835c  add x0,sp,#0x120
71038c8360  mov w1,#0x10
71038c8364  bl 0x710392e1f0
71038c8368  cmp w0,#0xc
71038c836c  b.ne 0x71038c83a8
71038c8370  adrp x8,0x710593d000
71038c8374  ldr x0,[x8, #0x2b0]
71038c8378  cbz x0,0x71038c83a8
71038c837c  mov w8,#0x28
71038c8380  str x8,[sp, #0x3e0]
71038c8384  ldr x8,[x0]
71038c8388  ldr x8,[x8, #0x30]
71038c838c  add x1,sp,#0x3e0
71038c8390  blr x8
71038c8394  tbz w0,#0x0,0x71038c83a8
71038c8398  mov w2,#0x28
71038c839c  add x0,sp,#0x120
71038c83a0  mov w1,#0x10
71038c83a4  bl 0x710392e1f0
71038c83a8  cbz x22,0x71038c83bc
71038c83ac  ldr x2,[sp, #0x120]
71038c83b0  mov w0,#0x28
71038c83b4  mov w1,#0x10
71038c83b8  bl 0x71039c19e0
71038c83bc  ldr x19,[sp, #0x120]
71038c83c0  stp xzr,xzr,[x19, #0x18]
71038c83c4  stp xzr,xzr,[x19, #0x8]
71038c83c8  str xzr,[x19]
71038c83cc  mov x0,x19
71038c83d0  str x19,[sp, #0xa0]
71038c83d4  bl 0x71037c3a70
71038c83d8  adrp x8,0x710526a000
71038c83dc  add x8,x8,#0x868
71038c83e0  str x8,[x19]
71038c83e4  stp xzr,xzr,[x19, #0x18]
71038c83e8  str xzr,[x19, #0x10]
71038c83ec  str x27,[sp, #0x3e8]
71038c83f0  ldr x8,[x27, #0x8]
71038c83f4  str x8,[sp, #0x3f0]
71038c83f8  ldr x8,[x8]
71038c83fc  str x8,[sp, #0x3f8]
71038c8400  adrp x8,0x7105233000
71038c8404  add x8,x8,#0xb78
71038c8408  str x8,[sp, #0x3e0]
71038c840c  add x1,sp,#0x3e0
71038c8410  mov x0,x19
71038c8414  bl 0x71038b3640
71038c8418  mov w2,#0x168
71038c841c  add x0,sp,#0x120
71038c8420  mov w1,#0x10
71038c8424  bl 0x710392e1f0
71038c8428  cmp w0,#0xc
71038c842c  b.ne 0x71038c8468
71038c8430  adrp x8,0x710593d000
71038c8434  ldr x0,[x8, #0x2b0]
71038c8438  cbz x0,0x71038c8468
71038c843c  mov w8,#0x168
71038c8440  str x8,[sp, #0x3e0]
71038c8444  ldr x8,[x0]
71038c8448  ldr x8,[x8, #0x30]
71038c844c  add x1,sp,#0x3e0
71038c8450  blr x8
71038c8454  tbz w0,#0x0,0x71038c8468
71038c8458  mov w2,#0x168
71038c845c  add x0,sp,#0x120
71038c8460  mov w1,#0x10
71038c8464  bl 0x710392e1f0
71038c8468  cbz x22,0x71038c847c
71038c846c  ldr x2,[sp, #0x120]
71038c8470  mov w0,#0x168
71038c8474  mov w1,#0x10
71038c8478  bl 0x71039c19e0
71038c847c  ldr x24,[sp, #0x120]
71038c8480  mov x0,x24
71038c8484  str x24,[sp, #0xd0]
71038c8488  bl 0x71037c3a70
71038c848c  adrp x8,0x7105291000
71038c8490  add x8,x8,#0xc38
71038c8494  mov x20,x24
71038c8498  mov x21,x24
71038c849c  mov x25,x24
71038c84a0  str x8,[x24]
71038c84a4  mov x22,x24
71038c84a8  mov x26,x24
71038c84ac  mov x19,x24
71038c84b0  mov x27,x24
71038c84b4  mov w1,#0x28
71038c84b8  mov w0,#0x10
71038c84bc  str xzr,[x20, #0x10]!
71038c84c0  str xzr,[x21, #0x48]!
71038c84c4  stp xzr,xzr,[x24, #0x50]
71038c84c8  stp xzr,xzr,[x24, #0x28]
71038c84cc  stp xzr,xzr,[x24, #0x18]
71038c84d0  stp xzr,x23,[x24, #0x38]
71038c84d4  str xzr,[x25, #0x68]!
71038c84d8  stp xzr,xzr,[x24, #0x70]
71038c84dc  str x23,[x24, #0x60]
71038c84e0  str xzr,[x22, #0x88]!
71038c84e4  str x23,[x24, #0x80]
71038c84e8  stp xzr,xzr,[x24, #0x90]
71038c84ec  str xzr,[x26, #0xa8]!
71038c84f0  str x23,[x24, #0xa0]
71038c84f4  stp xzr,xzr,[x24, #0xb0]
71038c84f8  str xzr,[x19, #0xc8]!
71038c84fc  str x23,[x24, #0xc0]
71038c8500  stp xzr,xzr,[x24, #0xd0]
71038c8504  str xzr,[x27, #0xe8]!
71038c8508  stur x23,[x27, #-0x8]
71038c850c  stp xzr,xzr,[x27, #0x8]
71038c8510  bl 0x710392e290
71038c8514  cbnz x0,0x71038c855c
71038c8518  adrp x8,0x7105332000
71038c851c  ldr x0,[x8, #0xf00]
71038c8520  cbz x0,0x71038c8558
71038c8524  mov w8,#0x28
71038c8528  str wzr,[sp, #0x120]
71038c852c  add x1,sp,#0x120
71038c8530  str x8,[sp, #0x3e0]
71038c8534  ldr x8,[x0]
71038c8538  ldr x8,[x8, #0x30]
71038c853c  add x2,sp,#0x3e0
71038c8540  blr x8
71038c8544  tbz w0,#0x0,0x71038c8558
71038c8548  mov w1,#0x28
71038c854c  mov w0,#0x10
71038c8550  bl 0x710392e290
71038c8554  cbnz x0,0x71038c855c
71038c8558  mov x0,xzr
71038c855c  stp xzr,xzr,[x0, #0x10]
71038c8560  orr w8,wzr,#0x3f800000
71038c8564  stp xzr,xzr,[x0]
71038c8568  mov w1,#0xb8
71038c856c  str w8,[x0, #0x20]
71038c8570  ldr x8,[sp, #0xd0]
71038c8574  add x24,x8,#0x128
71038c8578  str x0,[x8, #0x100]
71038c857c  mov w0,#0x10
71038c8580  str x24,[x8, #0x110]
71038c8584  bl 0x710392e290
71038c8588  cbnz x0,0x71038c85d0
71038c858c  adrp x8,0x7105332000
71038c8590  ldr x0,[x8, #0xf00]
71038c8594  cbz x0,0x71038c85cc
71038c8598  mov w8,#0xb8
71038c859c  str wzr,[sp, #0x120]
71038c85a0  add x1,sp,#0x120
71038c85a4  str x8,[sp, #0x3e0]
71038c85a8  ldr x8,[x0]
71038c85ac  ldr x8,[x8, #0x30]
71038c85b0  add x2,sp,#0x3e0
71038c85b4  blr x8
71038c85b8  tbz w0,#0x0,0x71038c85cc
71038c85bc  mov w1,#0xb8
71038c85c0  mov w0,#0x10
71038c85c4  bl 0x710392e290
71038c85c8  cbnz x0,0x71038c85d0
71038c85cc  mov x0,xzr
71038c85d0  ldr x9,[sp, #0xd0]
71038c85d4  str x0,[x9, #0x120]
71038c85d8  mov w1,#0x10
71038c85dc  str xzr,[x0, #0x88]!
71038c85e0  mov x8,x0
71038c85e4  stp x0,x0,[x0, #0x8]
71038c85e8  str xzr,[x8, #0x18]!
71038c85ec  stp x8,x8,[x0, #0x20]
71038c85f0  add x8,x9,#0x150
71038c85f4  stp xzr,x24,[x9, #0x130]
71038c85f8  sub x0,x29,#0x60
71038c85fc  mov w2,#0x20
71038c8600  stp x24,x8,[x9, #0x140]
71038c8604  mov w8,#0x5
71038c8608  str w8,[x9, #0x160]
71038c860c  stp xzr,xzr,[x9, #0x150]
71038c8610  str xzr,[x21]
71038c8614  stp xzr,xzr,[x21, #0x8]
71038c8618  str xzr,[x25]
71038c861c  stp xzr,xzr,[x25, #0x8]
71038c8620  str xzr,[x22]
71038c8624  stp xzr,xzr,[x22, #0x8]
71038c8628  str xzr,[x26]
71038c862c  stp xzr,xzr,[x26, #0x8]
71038c8630  str xzr,[x19]
71038c8634  stp xzr,xzr,[x19, #0x8]
71038c8638  str xzr,[x27]
71038c863c  stp xzr,xzr,[x27, #0x8]
71038c8640  str xzr,[sp, #0x3f0]
71038c8644  str xzr,[sp, #0x3e8]
71038c8648  str xzr,[sp, #0x3e0]
71038c864c  bl 0x710392e1f0
71038c8650  cmp w0,#0xc
71038c8654  b.ne 0x71038c8690
71038c8658  adrp x8,0x710593d000
71038c865c  ldr x0,[x8, #0x2b0]
71038c8660  cbz x0,0x71038c8690
71038c8664  mov w8,#0x20
71038c8668  str x8,[sp, #0x120]
71038c866c  ldr x8,[x0]
71038c8670  ldr x8,[x8, #0x30]
71038c8674  add x1,sp,#0x120
71038c8678  blr x8
71038c867c  tbz w0,#0x0,0x71038c8690
71038c8680  sub x0,x29,#0x60
71038c8684  mov w1,#0x10
71038c8688  mov w2,#0x20
71038c868c  bl 0x710392e1f0
71038c8690  adrp x22,0x71052a8000
71038c8694  ldr x22,[x22, #0xa78]
71038c8698  add x24,sp,#0x3e0
71038c869c  adrp x26,0x7105290000
71038c86a0  add x26,x26,#0xed8
71038c86a4  adrp x25,0x7105291000
71038c86a8  add x25,x25,#0xd08
71038c86ac  cbz x22,0x71038c86c0
71038c86b0  ldur x2,[x29, #-0x60]
71038c86b4  mov w0,#0x20
71038c86b8  mov w1,#0x10
71038c86bc  bl 0x71039c19e0
71038c86c0  mov w9,#0x21
71038c86c4  adrp x10,0x7104328000
71038c86c8  add x10,x10,#0xb26
71038c86cc  mov w11,#0x17
71038c86d0  ldur x8,[x29, #-0x60]
71038c86d4  str x9,[sp, #0x3e0]
71038c86d8  str x11,[sp, #0x3e8]
71038c86dc  ldp x9,x11,[x10]
71038c86e0  ldur x10,[x10, #0xf]
71038c86e4  str x8,[sp, #0x3f0]
71038c86e8  stp x10,x11,[sp, #0x28]
71038c86ec  stur x10,[x8, #0xf]
71038c86f0  stp x9,x11,[x8]
71038c86f4  ldr x27,[sp, #0xd0]
71038c86f8  strb wzr,[x8, #0x17]
71038c86fc  add x8,sp,#0x3e0
71038c8700  cmp x8,x20
71038c8704  str x9,[sp, #0x38]
71038c8708  b.eq 0x71038c8800
71038c870c  ldrb w9,[sp, #0x3e0]
71038c8710  ldr x10,[sp, #0x3f0]
71038c8714  orr x8,x8,#0x1
71038c8718  ldr x11,[sp, #0x3e8]
71038c871c  tst w9,#0x1
71038c8720  csel x7,x8,x10,eq
71038c8724  ldrb w8,[x20]
71038c8728  lsr x12,x9,#0x1
71038c872c  csel x21,x12,x11,eq
71038c8730  tbnz w8,#0x0,0x71038c8750
71038c8734  mov w1,#0x16
71038c8738  subs x2,x21,x1
71038c873c  b.hi 0x71038c8764
71038c8740  tbnz w8,#0x0,0x71038c87b8
71038c8744  add x25,x27,#0x11
71038c8748  cbnz x21,0x71038c87c0
71038c874c  b 0x71038c87d0
71038c8750  ldr x9,[x20]
71038c8754  and x9,x9,#-0x2
71038c8758  sub x1,x9,#0x1
71038c875c  subs x2,x21,x1
71038c8760  b.ls 0x71038c8740
71038c8764  tbnz w8,#0x0,0x71038c87e8
71038c8768  lsr x3,x8,#0x1
71038c876c  b 0x71038c87ec
71038c8770  ldr x8,[x27, #0x38]
71038c8774  ldr x9,[x7]
71038c8778  ldrb w10,[x7, #0x8]
71038c877c  strb w10,[x8, #0x8]
71038c8780  str x9,[x8]
71038c8784  strb wzr,[x8, #0x9]
71038c8788  ldrb w8,[x0]
71038c878c  tbnz w8,#0x0,0x71038c87a4
71038c8790  mov w8,#0x12
71038c8794  strb w8,[x0]
71038c8798  ldrb w8,[sp, #0x3e0]
71038c879c  tbnz w8,#0x0,0x71038c7a74
71038c87a0  b 0x71038c7a94
71038c87a4  mov w8,#0x9
71038c87a8  str x8,[x27, #0x30]
71038c87ac  ldrb w8,[sp, #0x3e0]
71038c87b0  tbnz w8,#0x0,0x71038c7a74
71038c87b4  b 0x71038c7a94
71038c87b8  ldr x25,[x27, #0x20]
71038c87bc  cbz x21,0x71038c87d0
71038c87c0  mov x0,x25
71038c87c4  mov x1,x7
71038c87c8  mov x2,x21
71038c87cc  bl 0x71039c00a0
71038c87d0  strb wzr,[x25, x21, LSL ]
71038c87d4  ldrb w8,[x20]
71038c87d8  tbnz w8,#0x0,0x71038c880c
71038c87dc  lsl w8,w21,#0x1
71038c87e0  strb w8,[x20]
71038c87e4  b 0x71038c8810
71038c87e8  ldr x3,[x27, #0x18]
71038c87ec  mov x0,x20
71038c87f0  mov x4,xzr
71038c87f4  mov x5,x3
71038c87f8  mov x6,x21
71038c87fc  bl 0x71037cfe00
71038c8800  ldrb w8,[sp, #0x3e0]
71038c8804  tbz w8,#0x0,0x71038c8840
71038c8808  b 0x71038c8820
71038c880c  str x21,[x27, #0x18]
71038c8810  adrp x25,0x7105291000
71038c8814  add x25,x25,#0xd08
71038c8818  ldrb w8,[sp, #0x3e0]
71038c881c  tbz w8,#0x0,0x71038c8840
71038c8820  adrp x8,0x71052a8000
71038c8824  ldr x20,[sp, #0x3f0]
71038c8828  ldr x8,[x8, #0xa70]
71038c882c  cbz x8,0x71038c8838
71038c8830  mov x0,x20
71038c8834  bl 0x71039c19b0
71038c8838  mov x0,x20
71038c883c  bl 0x710392eb40
71038c8840  ldr x9,[sp, #0xf0]
71038c8844  mov w8,#0x12
71038c8848  str xzr,[sp, #0x3e0]
71038c884c  strb w8,[sp, #0x3e0]
71038c8850  add x8,sp,#0x3e0
71038c8854  add x0,x27,#0x28
71038c8858  str xzr,[sp, #0x3e8]
71038c885c  str xzr,[sp, #0x3f0]
71038c8860  cmp x8,x0
71038c8864  stur x9,[x24, #0x1]
71038c8868  mov w9,#0x6c
71038c886c  sturh w9,[x24, #0x9]
71038c8870  b.eq 0x71038c88b4
71038c8874  orr x7,x8,#0x1
71038c8878  ldrb w8,[x0]
71038c887c  tbnz w8,#0x0,0x71038c8888
71038c8880  add x8,x27,#0x29
71038c8884  b 0x71038c9d1c
71038c8888  ldr x8,[x0]
71038c888c  and x8,x8,#-0x2
71038c8890  sub x1,x8,#0x1
71038c8894  cmp x1,#0x9
71038c8898  b.cs 0x71038c9d18
71038c889c  ldr x3,[x27, #0x30]
71038c88a0  mov w6,#0x9
71038c88a4  sub x2,x6,x1
71038c88a8  mov x4,xzr
71038c88ac  mov x5,x3
71038c88b0  bl 0x71037cfe00
71038c88b4  ldrb w8,[sp, #0x3e0]
71038c88b8  tbz w8,#0x0,0x71038c88dc
71038c88bc  adrp x8,0x71052a8000
71038c88c0  ldr x20,[sp, #0x3f0]
71038c88c4  ldr x8,[x8, #0xa70]
71038c88c8  cbz x8,0x71038c88d4
71038c88cc  mov x0,x20
71038c88d0  bl 0x71039c19b0
71038c88d4  mov x0,x20
71038c88d8  bl 0x710392eb40
71038c88dc  sub x0,x29,#0x60
71038c88e0  mov w1,#0x10
71038c88e4  mov w2,#0x20
71038c88e8  str xzr,[sp, #0x3f0]
71038c88ec  str xzr,[sp, #0x3e8]
71038c88f0  str xzr,[sp, #0x3e0]
71038c88f4  bl 0x710392e1f0
71038c88f8  cmp w0,#0xc
71038c88fc  b.ne 0x71038c8938
71038c8900  adrp x8,0x710593d000
71038c8904  ldr x0,[x8, #0x2b0]
71038c8908  cbz x0,0x71038c8938
71038c890c  mov w8,#0x20
71038c8910  str x8,[sp, #0x120]
71038c8914  ldr x8,[x0]
71038c8918  ldr x8,[x8, #0x30]
71038c891c  add x1,sp,#0x120
71038c8920  blr x8
71038c8924  tbz w0,#0x0,0x71038c8938
71038c8928  sub x0,x29,#0x60
71038c892c  mov w1,#0x10
71038c8930  mov w2,#0x20
71038c8934  bl 0x710392e1f0
71038c8938  cbz x22,0x71038c894c
71038c893c  ldur x2,[x29, #-0x60]
71038c8940  mov w0,#0x20
71038c8944  mov w1,#0x10
71038c8948  bl 0x71039c19e0
71038c894c  mov w8,#0x21
71038c8950  str x8,[sp, #0x3e0]
71038c8954  mov w8,#0x19
71038c8958  str x8,[sp, #0x3e8]
71038c895c  adrp x8,0x710426e000
71038c8960  add x8,x8,#0x892
71038c8964  ldur x20,[x29, #-0x60]
71038c8968  mov w19,#0x53
71038c896c  str x20,[sp, #0x3f0]
71038c8970  ldp x9,x10,[x8]
71038c8974  ldr x8,[x8, #0x10]
71038c8978  stp x10,x8,[x20, #0x8]
71038c897c  str x9,[x20]
71038c8980  strb w19,[x20, #0x18]
71038c8984  strb wzr,[x20, #0x19]
71038c8988  ldr x0,[x27, #0x100]
71038c898c  add x2,sp,#0x3e0
71038c8990  mov w1,wzr
71038c8994  bl 0x71038b69b0
71038c8998  adrp x8,0x71052a8000
71038c899c  ldr x8,[x8, #0xa70]
71038c89a0  cbz x8,0x71038c89ac
71038c89a4  mov x0,x20
71038c89a8  bl 0x71039c19b0
71038c89ac  mov x0,x20
71038c89b0  bl 0x710392eb40
71038c89b4  sub x0,x29,#0x60
71038c89b8  mov w1,#0x10
71038c89bc  mov w2,#0x20
71038c89c0  str xzr,[sp, #0x3f0]
71038c89c4  str xzr,[sp, #0x3e8]
71038c89c8  str xzr,[sp, #0x3e0]
71038c89cc  bl 0x710392e1f0
71038c89d0  cmp w0,#0xc
71038c89d4  b.ne 0x71038c8a10
71038c89d8  adrp x8,0x710593d000
71038c89dc  ldr x0,[x8, #0x2b0]
71038c89e0  cbz x0,0x71038c8a10
71038c89e4  mov w8,#0x20
71038c89e8  str x8,[sp, #0x120]
71038c89ec  ldr x8,[x0]
71038c89f0  ldr x8,[x8, #0x30]
71038c89f4  add x1,sp,#0x120
71038c89f8  blr x8
71038c89fc  tbz w0,#0x0,0x71038c8a10
71038c8a00  sub x0,x29,#0x60
71038c8a04  mov w1,#0x10
71038c8a08  mov w2,#0x20
71038c8a0c  bl 0x710392e1f0
71038c8a10  cbz x22,0x71038c8a24
71038c8a14  ldur x2,[x29, #-0x60]
71038c8a18  mov w0,#0x20
71038c8a1c  mov w1,#0x10
71038c8a20  bl 0x71039c19e0
71038c8a24  mov w8,#0x21
71038c8a28  str x8,[sp, #0x3e0]
71038c8a2c  mov w8,#0x19
71038c8a30  str x8,[sp, #0x3e8]
71038c8a34  adrp x8,0x7104359000
71038c8a38  add x8,x8,#0xe3f
71038c8a3c  ldur x20,[x29, #-0x60]
71038c8a40  ldp x9,x10,[x8]
71038c8a44  ldr x8,[x8, #0x10]
71038c8a48  str x20,[sp, #0x3f0]
71038c8a4c  str x9,[x20]
71038c8a50  stp x10,x8,[x20, #0x8]
71038c8a54  strb w19,[x20, #0x18]
71038c8a58  strb wzr,[x20, #0x19]
71038c8a5c  ldr x0,[x27, #0x100]
71038c8a60  mov w1,#0x4
71038c8a64  add x2,sp,#0x3e0
71038c8a68  bl 0x71038b69b0
71038c8a6c  adrp x8,0x71052a8000
71038c8a70  ldr x8,[x8, #0xa70]
71038c8a74  adrp x19,0x710526a000
71038c8a78  add x19,x19,#0x918
71038c8a7c  cbz x8,0x71038c8a88
71038c8a80  mov x0,x20
71038c8a84  bl 0x71039c19b0
71038c8a88  mov x0,x20
71038c8a8c  bl 0x710392eb40
71038c8a90  mov x0,x27
71038c8a94  bl 0x71038b64a0
71038c8a98  add x0,sp,#0x120
71038c8a9c  mov w1,#0x10
71038c8aa0  orr w2,wzr,#0x78
71038c8aa4  bl 0x710392e1f0
71038c8aa8  cmp w0,#0xc
71038c8aac  b.ne 0x71038c8ae8
71038c8ab0  adrp x8,0x710593d000
71038c8ab4  ldr x0,[x8, #0x2b0]
71038c8ab8  cbz x0,0x71038c8ae8
71038c8abc  orr w8,wzr,#0x78
71038c8ac0  str x8,[sp, #0x3e0]
71038c8ac4  ldr x8,[x0]
71038c8ac8  ldr x8,[x8, #0x30]
71038c8acc  add x1,sp,#0x3e0
71038c8ad0  blr x8
71038c8ad4  tbz w0,#0x0,0x71038c8ae8
71038c8ad8  add x0,sp,#0x120
71038c8adc  mov w1,#0x10
71038c8ae0  orr w2,wzr,#0x78
71038c8ae4  bl 0x710392e1f0
71038c8ae8  cbz x22,0x71038c8afc
71038c8aec  ldr x2,[sp, #0x120]
71038c8af0  orr w0,wzr,#0x78
71038c8af4  mov w1,#0x10
71038c8af8  bl 0x71039c19e0
71038c8afc  ldr x20,[sp, #0x120]
71038c8b00  orr w8,wzr,#0xe
71038c8b04  str xzr,[sp, #0x3e0]
71038c8b08  strb w8,[sp, #0x3e0]
71038c8b0c  mov w8,#0x65
71038c8b10  strb w8,[sp, #0x3e7]
71038c8b14  mov w8,#0x7375
71038c8b18  str xzr,[sp, #0x3e8]
71038c8b1c  str xzr,[sp, #0x3f0]
71038c8b20  sturh w8,[x24, #0x5]
71038c8b24  mov w8,#0x6964
71038c8b28  movk w8,#0x6666, LSL #16
71038c8b2c  stur w8,[x24, #0x1]
71038c8b30  strb wzr,[sp, #0x3e8]
71038c8b34  add x1,sp,#0x3e0
71038c8b38  mov x0,x20
71038c8b3c  bl 0x71038b4c00
71038c8b40  str x26,[sp, #0x3e0]
71038c8b44  str wzr,[sp, #0x3e8]
71038c8b48  str x25,[sp, #0x2e0]
71038c8b4c  str x20,[sp, #0x2e8]
71038c8b50  cbz x20,0x71038c8b60
71038c8b54  ldr x8,[x20, #0x8]
71038c8b58  ldr x9,[x8]
71038c8b5c  b 0x71038c8b68
71038c8b60  mov x8,xzr
71038c8b64  mov x9,xzr
71038c8b68  str x8,[sp, #0x2f0]
71038c8b6c  str x9,[sp, #0x2f8]
71038c8b70  str x19,[sp, #0x2e0]
71038c8b74  add x1,sp,#0x3e0
71038c8b78  add x2,sp,#0x2e0
71038c8b7c  mov x0,x27
71038c8b80  bl 0x71038b51b0
71038c8b84  ldr x8,[sp, #0x2f0]
71038c8b88  str x19,[sp, #0x2e0]
71038c8b8c  cbz x8,0x71038c8bb4
71038c8b90  ldr x8,[x8]
71038c8b94  ldr x9,[sp, #0x2f8]
71038c8b98  cmp x8,x9
71038c8b9c  b.ne 0x71038c8bb4
71038c8ba0  ldr x0,[sp, #0x2e8]
71038c8ba4  cbz x0,0x71038c8bb4
71038c8ba8  ldr x8,[x0]
71038c8bac  ldr x8,[x8, #0x8]
71038c8bb0  blr x8
71038c8bb4  add x0,sp,#0x120
71038c8bb8  mov w1,#0x10
71038c8bbc  orr w2,wzr,#0x78
71038c8bc0  bl 0x710392e1f0
71038c8bc4  cmp w0,#0xc
71038c8bc8  b.ne 0x71038c8c04
71038c8bcc  adrp x8,0x710593d000
71038c8bd0  ldr x0,[x8, #0x2b0]
71038c8bd4  cbz x0,0x71038c8c04
71038c8bd8  orr w8,wzr,#0x78
71038c8bdc  str x8,[sp, #0x3e0]
71038c8be0  ldr x8,[x0]
71038c8be4  ldr x8,[x8, #0x30]
71038c8be8  add x1,sp,#0x3e0
71038c8bec  blr x8
71038c8bf0  tbz w0,#0x0,0x71038c8c04
71038c8bf4  add x0,sp,#0x120
71038c8bf8  mov w1,#0x10
71038c8bfc  orr w2,wzr,#0x78
71038c8c00  bl 0x710392e1f0
71038c8c04  cbz x22,0x71038c8c18
71038c8c08  ldr x2,[sp, #0x120]
71038c8c0c  orr w0,wzr,#0x78
71038c8c10  mov w1,#0x10
71038c8c14  bl 0x71039c19e0
71038c8c18  mov w8,#0x16
71038c8c1c  str xzr,[sp, #0x3e0]
71038c8c20  strb w8,[sp, #0x3e0]
71038c8c24  ldr x8,[sp, #0xe8]
71038c8c28  ldr x20,[sp, #0x120]
71038c8c2c  str xzr,[sp, #0x3e8]
71038c8c30  str xzr,[sp, #0x3f0]
71038c8c34  stur x8,[x24, #0x1]
71038c8c38  mov w8,#0x6574
71038c8c3c  movk w8,#0x30, LSL #16
71038c8c40  stur w8,[x24, #0x9]
71038c8c44  add x1,sp,#0x3e0
71038c8c48  mov x0,x20
71038c8c4c  bl 0x71038b4c00
71038c8c50  mov w8,#0x118
71038c8c54  str x26,[sp, #0x3e0]
71038c8c58  str x25,[sp, #0x2c0]
71038c8c5c  str w8,[sp, #0x3e8]
71038c8c60  str x20,[sp, #0x2c8]
71038c8c64  cbz x20,0x71038c8c74
71038c8c68  ldr x8,[x20, #0x8]
71038c8c6c  ldr x9,[x8]
71038c8c70  b 0x71038c8c7c
71038c8c74  mov x8,xzr
71038c8c78  mov x9,xzr
71038c8c7c  str x8,[sp, #0x2d0]
71038c8c80  str x9,[sp, #0x2d8]
71038c8c84  str x19,[sp, #0x2c0]
71038c8c88  add x1,sp,#0x3e0
71038c8c8c  add x2,sp,#0x2c0
71038c8c90  mov x0,x27
71038c8c94  bl 0x71038b51b0
71038c8c98  ldr x8,[sp, #0x2d0]
71038c8c9c  str x19,[sp, #0x2c0]
71038c8ca0  cbz x8,0x71038c8cc8
71038c8ca4  ldr x8,[x8]
71038c8ca8  ldr x9,[sp, #0x2d8]
71038c8cac  cmp x8,x9
71038c8cb0  b.ne 0x71038c8cc8
71038c8cb4  ldr x0,[sp, #0x2c8]
71038c8cb8  cbz x0,0x71038c8cc8
71038c8cbc  ldr x8,[x0]
71038c8cc0  ldr x8,[x8, #0x8]
71038c8cc4  blr x8
71038c8cc8  add x0,sp,#0x120
71038c8ccc  mov w1,#0x10
71038c8cd0  orr w2,wzr,#0x78
71038c8cd4  bl 0x710392e1f0
71038c8cd8  cmp w0,#0xc
71038c8cdc  b.ne 0x71038c8d18
71038c8ce0  adrp x8,0x710593d000
71038c8ce4  ldr x0,[x8, #0x2b0]
71038c8ce8  cbz x0,0x71038c8d18
71038c8cec  orr w8,wzr,#0x78
71038c8cf0  str x8,[sp, #0x3e0]
71038c8cf4  ldr x8,[x0]
71038c8cf8  ldr x8,[x8, #0x30]
71038c8cfc  add x1,sp,#0x3e0
71038c8d00  blr x8
71038c8d04  tbz w0,#0x0,0x71038c8d18
71038c8d08  add x0,sp,#0x120
71038c8d0c  mov w1,#0x10
71038c8d10  orr w2,wzr,#0x78
71038c8d14  bl 0x710392e1f0
71038c8d18  cbz x22,0x71038c8d2c
71038c8d1c  ldr x2,[sp, #0x120]
71038c8d20  orr w0,wzr,#0x78
71038c8d24  mov w1,#0x10
71038c8d28  bl 0x71039c19e0
71038c8d2c  mov w8,#0x20
71038c8d30  str xzr,[sp, #0x3e0]
71038c8d34  strb w8,[sp, #0x3e0]
71038c8d38  ldr x8,[sp, #0xd8]
71038c8d3c  ldr x20,[sp, #0x120]
71038c8d40  str xzr,[sp, #0x3f0]
71038c8d44  str xzr,[sp, #0x3e8]
71038c8d48  stur x8,[x24, #0x9]
71038c8d4c  ldr x8,[sp, #0xe0]
71038c8d50  stur x8,[x24, #0x1]
71038c8d54  strb wzr,[sp, #0x3f1]
71038c8d58  add x1,sp,#0x3e0
71038c8d5c  mov x0,x20
71038c8d60  bl 0x71038b4c00
71038c8d64  mov w8,#0x123
71038c8d68  str x26,[sp, #0x3e0]
71038c8d6c  str x25,[sp, #0x2a0]
71038c8d70  str w8,[sp, #0x3e8]
71038c8d74  str x20,[sp, #0x2a8]
71038c8d78  cbz x20,0x71038c8d88
71038c8d7c  ldr x8,[x20, #0x8]
71038c8d80  ldr x9,[x8]
71038c8d84  b 0x71038c8d90
71038c8d88  mov x8,xzr
71038c8d8c  mov x9,xzr
71038c8d90  str x8,[sp, #0x2b0]
71038c8d94  str x9,[sp, #0x2b8]
71038c8d98  str x19,[sp, #0x2a0]
71038c8d9c  add x1,sp,#0x3e0
71038c8da0  add x2,sp,#0x2a0
71038c8da4  mov x0,x27
71038c8da8  bl 0x71038b51b0
71038c8dac  ldr x8,[sp, #0x2b0]
71038c8db0  str x19,[sp, #0x2a0]
71038c8db4  cbz x8,0x71038c8ddc
71038c8db8  ldr x8,[x8]
71038c8dbc  ldr x9,[sp, #0x2b8]
71038c8dc0  cmp x8,x9
71038c8dc4  b.ne 0x71038c8ddc
71038c8dc8  ldr x0,[sp, #0x2a8]
71038c8dcc  cbz x0,0x71038c8ddc
71038c8dd0  ldr x8,[x0]
71038c8dd4  ldr x8,[x8, #0x8]
71038c8dd8  blr x8
71038c8ddc  mov w2,#0x28
71038c8de0  add x0,sp,#0x120
71038c8de4  mov w1,#0x10
71038c8de8  bl 0x710392e1f0
71038c8dec  cmp w0,#0xc
71038c8df0  b.ne 0x71038c8e2c
71038c8df4  adrp x8,0x710593d000
71038c8df8  ldr x0,[x8, #0x2b0]
71038c8dfc  cbz x0,0x71038c8e2c
71038c8e00  mov w8,#0x28
71038c8e04  str x8,[sp, #0x3e0]
71038c8e08  ldr x8,[x0]
71038c8e0c  ldr x8,[x8, #0x30]
71038c8e10  add x1,sp,#0x3e0
71038c8e14  blr x8
71038c8e18  tbz w0,#0x0,0x71038c8e2c
71038c8e1c  mov w2,#0x28
71038c8e20  add x0,sp,#0x120
71038c8e24  mov w1,#0x10
71038c8e28  bl 0x710392e1f0
71038c8e2c  cbz x22,0x71038c8e40
71038c8e30  ldr x2,[sp, #0x120]
71038c8e34  mov w0,#0x28
71038c8e38  mov w1,#0x10
71038c8e3c  bl 0x71039c19e0
71038c8e40  ldr x19,[sp, #0x120]
71038c8e44  stp xzr,xzr,[x19, #0x18]
71038c8e48  stp xzr,xzr,[x19, #0x8]
71038c8e4c  str xzr,[x19]
71038c8e50  mov x0,x19
71038c8e54  bl 0x71037c3a70
71038c8e58  adrp x8,0x710526a000
71038c8e5c  add x8,x8,#0x868
71038c8e60  str x8,[x19]
71038c8e64  stp xzr,xzr,[x19, #0x18]
71038c8e68  str xzr,[x19, #0x10]
71038c8e6c  str x27,[sp, #0x3e8]
71038c8e70  ldr x8,[x27, #0x8]
71038c8e74  str x8,[sp, #0x3f0]
71038c8e78  ldr x8,[x8]
71038c8e7c  str x8,[sp, #0x3f8]
71038c8e80  adrp x8,0x7105233000
71038c8e84  add x8,x8,#0xb78
71038c8e88  str x8,[sp, #0x3e0]
71038c8e8c  add x1,sp,#0x3e0
71038c8e90  mov x0,x19
71038c8e94  bl 0x71038b3640
71038c8e98  mov w2,#0x168
71038c8e9c  add x0,sp,#0x120
71038c8ea0  mov w1,#0x10
71038c8ea4  bl 0x710392e1f0
71038c8ea8  cmp w0,#0xc
71038c8eac  b.ne 0x71038c8ee8
71038c8eb0  adrp x8,0x710593d000
71038c8eb4  ldr x0,[x8, #0x2b0]
71038c8eb8  cbz x0,0x71038c8ee8
71038c8ebc  mov w8,#0x168
71038c8ec0  str x8,[sp, #0x3e0]
71038c8ec4  ldr x8,[x0]
71038c8ec8  ldr x8,[x8, #0x30]
71038c8ecc  add x1,sp,#0x3e0
71038c8ed0  blr x8
71038c8ed4  tbz w0,#0x0,0x71038c8ee8
71038c8ed8  mov w2,#0x168
71038c8edc  add x0,sp,#0x120
71038c8ee0  mov w1,#0x10
71038c8ee4  bl 0x710392e1f0
71038c8ee8  cbz x22,0x71038c8efc
71038c8eec  ldr x2,[sp, #0x120]
71038c8ef0  mov w0,#0x168
71038c8ef4  mov w1,#0x10
71038c8ef8  bl 0x71039c19e0
71038c8efc  ldr x26,[sp, #0x120]
71038c8f00  str x28,[sp, #0x20]
71038c8f04  mov x0,x26
71038c8f08  bl 0x71037c3a70
71038c8f0c  str x19,[sp, #0x98]
71038c8f10  adrp x8,0x7105291000
71038c8f14  add x8,x8,#0xc38
71038c8f18  mov x20,x26
71038c8f1c  mov x21,x26
71038c8f20  mov x25,x26
71038c8f24  mov x22,x26
71038c8f28  mov x27,x26
71038c8f2c  str x8,[x26]
71038c8f30  mov x19,x26
71038c8f34  mov x28,x26
71038c8f38  mov w1,#0x28
71038c8f3c  str xzr,[x20, #0x10]!
71038c8f40  str xzr,[x21, #0x48]!
71038c8f44  stp xzr,xzr,[x26, #0x50]
71038c8f48  mov w0,#0x10
71038c8f4c  stp xzr,xzr,[x26, #0x28]
71038c8f50  stp xzr,xzr,[x26, #0x18]
71038c8f54  stp xzr,x23,[x26, #0x38]
71038c8f58  str xzr,[x25, #0x68]!
71038c8f5c  str x23,[x26, #0x60]
71038c8f60  stp xzr,xzr,[x26, #0x70]
71038c8f64  str xzr,[x22, #0x88]!
71038c8f68  str x23,[x26, #0x80]
71038c8f6c  stp xzr,xzr,[x26, #0x90]
71038c8f70  str xzr,[x27, #0xa8]!
71038c8f74  str x23,[x26, #0xa0]
71038c8f78  stp xzr,xzr,[x26, #0xb0]
71038c8f7c  str xzr,[x19, #0xc8]!
71038c8f80  str x23,[x26, #0xc0]
71038c8f84  stp xzr,xzr,[x26, #0xd0]
71038c8f88  str xzr,[x28, #0xe8]!
71038c8f8c  stur x23,[x28, #-0x8]
71038c8f90  stp xzr,xzr,[x28, #0x8]
71038c8f94  bl 0x710392e290
71038c8f98  cbnz x0,0x71038c8fe0
71038c8f9c  adrp x8,0x7105332000
71038c8fa0  ldr x0,[x8, #0xf00]
71038c8fa4  cbz x0,0x71038c8fdc
71038c8fa8  mov w8,#0x28
71038c8fac  str wzr,[sp, #0x120]
71038c8fb0  add x1,sp,#0x120
71038c8fb4  str x8,[sp, #0x3e0]
71038c8fb8  ldr x8,[x0]
71038c8fbc  ldr x8,[x8, #0x30]
71038c8fc0  add x2,sp,#0x3e0
71038c8fc4  blr x8
71038c8fc8  tbz w0,#0x0,0x71038c8fdc
71038c8fcc  mov w1,#0x28
71038c8fd0  mov w0,#0x10
71038c8fd4  bl 0x710392e290
71038c8fd8  cbnz x0,0x71038c8fe0
71038c8fdc  mov x0,xzr
71038c8fe0  orr w8,wzr,#0x3f800000
71038c8fe4  stp xzr,xzr,[x0, #0x10]
71038c8fe8  stp xzr,xzr,[x0]
71038c8fec  add x24,x26,#0x128
71038c8ff0  mov w1,#0xb8
71038c8ff4  str w8,[x0, #0x20]
71038c8ff8  str x0,[x26, #0x100]
71038c8ffc  mov w0,#0x10
71038c9000  str x24,[x26, #0x110]
71038c9004  bl 0x710392e290
71038c9008  cbnz x0,0x71038c9050
71038c900c  adrp x8,0x7105332000
71038c9010  ldr x0,[x8, #0xf00]
71038c9014  cbz x0,0x71038c904c
71038c9018  mov w8,#0xb8
71038c901c  str wzr,[sp, #0x120]
71038c9020  add x1,sp,#0x120
71038c9024  str x8,[sp, #0x3e0]
71038c9028  ldr x8,[x0]
71038c902c  ldr x8,[x8, #0x30]
71038c9030  add x2,sp,#0x3e0
71038c9034  blr x8
71038c9038  tbz w0,#0x0,0x71038c904c
71038c903c  mov w1,#0xb8
71038c9040  mov w0,#0x10
71038c9044  bl 0x710392e290
71038c9048  cbnz x0,0x71038c9050
71038c904c  mov x0,xzr
71038c9050  str x0,[x26, #0x120]
71038c9054  adrp x9,0x710437b000
71038c9058  add x9,x9,#0x286
71038c905c  str xzr,[x0, #0x88]!
71038c9060  mov x8,x0
71038c9064  stp x0,x0,[x0, #0x8]
71038c9068  str xzr,[x8, #0x18]!
71038c906c  stp x8,x8,[x0, #0x20]
71038c9070  add x8,x26,#0x150
71038c9074  stp x24,x8,[x26, #0x140]
71038c9078  mov w8,#0x5
71038c907c  str w8,[x26, #0x160]
71038c9080  orr w8,wzr,#0x1c
71038c9084  stp xzr,x24,[x26, #0x130]
71038c9088  adrp x24,0x7105290000
71038c908c  add x24,x24,#0xed8
71038c9090  stp xzr,xzr,[x26, #0x150]
71038c9094  str xzr,[x21]
71038c9098  stp xzr,xzr,[x21, #0x8]
71038c909c  adrp x21,0x71052a8000
71038c90a0  str xzr,[x25]
71038c90a4  stp xzr,xzr,[x25, #0x8]
71038c90a8  adrp x25,0x7105291000
71038c90ac  add x25,x25,#0xd08
71038c90b0  str xzr,[x22]
71038c90b4  stp xzr,xzr,[x22, #0x8]
71038c90b8  add x22,sp,#0x3e0
71038c90bc  str xzr,[x27]
71038c90c0  stp xzr,xzr,[x27, #0x8]
71038c90c4  str xzr,[x19]
71038c90c8  stp xzr,xzr,[x19, #0x8]
71038c90cc  str xzr,[x28]
71038c90d0  stp xzr,xzr,[x28, #0x8]
71038c90d4  ldur x27,[x9, #0x6]
71038c90d8  ldr x28,[x9]
71038c90dc  str xzr,[sp, #0x3f0]
71038c90e0  strb w8,[sp, #0x3e0]
71038c90e4  add x8,sp,#0x3e0
71038c90e8  cmp x8,x20
71038c90ec  stur x27,[x22, #0x7]
71038c90f0  stur x28,[x22, #0x1]
71038c90f4  strb wzr,[sp, #0x3ef]
71038c90f8  ldr x21,[x21, #0xa78]
71038c90fc  b.eq 0x71038c9148
71038c9100  orr x7,x8,#0x1
71038c9104  ldrb w8,[x20]
71038c9108  tbnz w8,#0x0,0x71038c9114
71038c910c  add x8,x26,#0x11
71038c9110  b 0x71038c9d64
71038c9114  ldr x8,[x20]
71038c9118  and x8,x8,#-0x2
71038c911c  sub x1,x8,#0x1
71038c9120  cmp x1,#0xe
71038c9124  b.cs 0x71038c9d60
71038c9128  ldr x3,[x26, #0x18]
71038c912c  orr w8,wzr,#0xe
71038c9130  sub x2,x8,x1
71038c9134  orr w6,wzr,#0xe
71038c9138  mov x0,x20
71038c913c  mov x4,xzr
71038c9140  mov x5,x3
71038c9144  bl 0x71037cfe00
71038c9148  ldrb w8,[sp, #0x3e0]
71038c914c  tbz w8,#0x0,0x71038c9170
71038c9150  adrp x8,0x71052a8000
71038c9154  ldr x20,[sp, #0x3f0]
71038c9158  ldr x8,[x8, #0xa70]
71038c915c  cbz x8,0x71038c9168
71038c9160  mov x0,x20
71038c9164  bl 0x71039c19b0
71038c9168  mov x0,x20
71038c916c  bl 0x710392eb40
71038c9170  ldr x9,[sp, #0xf0]
71038c9174  mov w8,#0x12
71038c9178  str xzr,[sp, #0x3e0]
71038c917c  strb w8,[sp, #0x3e0]
71038c9180  add x8,sp,#0x3e0
71038c9184  add x0,x26,#0x28
71038c9188  str xzr,[sp, #0x3e8]
71038c918c  str xzr,[sp, #0x3f0]
71038c9190  cmp x8,x0
71038c9194  stur x9,[x22, #0x1]
71038c9198  mov w9,#0x6c
71038c919c  sturh w9,[x22, #0x9]
71038c91a0  b.eq 0x71038c91e4
71038c91a4  orr x7,x8,#0x1
71038c91a8  ldrb w8,[x0]
71038c91ac  tbnz w8,#0x0,0x71038c91b8
71038c91b0  add x8,x26,#0x29
71038c91b4  b 0x71038c9db4
71038c91b8  ldr x8,[x0]
71038c91bc  and x8,x8,#-0x2
71038c91c0  sub x1,x8,#0x1
71038c91c4  cmp x1,#0x9
71038c91c8  b.cs 0x71038c9db0
71038c91cc  ldr x3,[x26, #0x30]
71038c91d0  mov w6,#0x9
71038c91d4  sub x2,x6,x1
71038c91d8  mov x4,xzr
71038c91dc  mov x5,x3
71038c91e0  bl 0x71037cfe00
71038c91e4  ldrb w8,[sp, #0x3e0]
71038c91e8  tbz w8,#0x0,0x71038c920c
71038c91ec  adrp x8,0x71052a8000
71038c91f0  ldr x20,[sp, #0x3f0]
71038c91f4  ldr x8,[x8, #0xa70]
71038c91f8  cbz x8,0x71038c9204
71038c91fc  mov x0,x20
71038c9200  bl 0x71039c19b0
71038c9204  mov x0,x20
71038c9208  bl 0x710392eb40
71038c920c  adrp x8,0x7104338000
71038c9210  add x8,x8,#0xda9
71038c9214  mov w19,#0x20
71038c9218  ldp x20,x8,[x8]
71038c921c  str xzr,[sp, #0x3e0]
71038c9220  str xzr,[sp, #0x3f0]
71038c9224  str xzr,[sp, #0x3e8]
71038c9228  strb w19,[sp, #0x3e0]
71038c922c  stur x8,[x22, #0x9]
71038c9230  stur x20,[x22, #0x1]
71038c9234  strb wzr,[sp, #0x3f1]
71038c9238  ldr x0,[x26, #0x100]
71038c923c  str x8,[sp, #0x58]
71038c9240  add x2,sp,#0x3e0
71038c9244  mov w1,wzr
71038c9248  bl 0x71038b69b0
71038c924c  adrp x8,0x7104338000
71038c9250  add x8,x8,#0xd98
71038c9254  ldr x0,[x26, #0x100]
71038c9258  ldp x9,x8,[x8]
71038c925c  str xzr,[sp, #0x3e0]
71038c9260  str xzr,[sp, #0x3f0]
71038c9264  str xzr,[sp, #0x3e8]
71038c9268  strb w19,[sp, #0x3e0]
71038c926c  stp x8,x9,[sp, #0x48]
71038c9270  stur x8,[x22, #0x9]
71038c9274  stur x9,[x22, #0x1]
71038c9278  strb wzr,[sp, #0x3f1]
71038c927c  mov w1,#0x4
71038c9280  add x2,sp,#0x3e0
71038c9284  bl 0x71038b69b0
71038c9288  mov x0,x26
71038c928c  bl 0x71038b64a0
71038c9290  add x0,sp,#0x120
71038c9294  mov w1,#0x10
71038c9298  orr w2,wzr,#0x78
71038c929c  bl 0x710392e1f0
71038c92a0  cmp w0,#0xc
71038c92a4  adrp x19,0x710526a000
71038c92a8  add x19,x19,#0x918
71038c92ac  b.ne 0x71038c92e8
71038c92b0  adrp x8,0x710593d000
71038c92b4  ldr x0,[x8, #0x2b0]
71038c92b8  cbz x0,0x71038c92e8
71038c92bc  orr w8,wzr,#0x78
71038c92c0  str x8,[sp, #0x3e0]
71038c92c4  ldr x8,[x0]
71038c92c8  ldr x8,[x8, #0x30]
71038c92cc  add x1,sp,#0x3e0
71038c92d0  blr x8
71038c92d4  tbz w0,#0x0,0x71038c92e8
71038c92d8  add x0,sp,#0x120
71038c92dc  mov w1,#0x10
71038c92e0  orr w2,wzr,#0x78
71038c92e4  bl 0x710392e1f0
71038c92e8  str x20,[sp, #0x40]
71038c92ec  cbz x21,0x71038c9300
71038c92f0  ldr x2,[sp, #0x120]
71038c92f4  orr w0,wzr,#0x78
71038c92f8  mov w1,#0x10
71038c92fc  bl 0x71039c19e0
71038c9300  ldr x20,[sp, #0x120]
71038c9304  orr w8,wzr,#0xe
71038c9308  str xzr,[sp, #0x3e0]
71038c930c  strb w8,[sp, #0x3e0]
71038c9310  mov w8,#0x65
71038c9314  strb w8,[sp, #0x3e7]
71038c9318  mov w8,#0x7375
71038c931c  str xzr,[sp, #0x3e8]
71038c9320  str xzr,[sp, #0x3f0]
71038c9324  sturh w8,[x22, #0x5]
71038c9328  mov w8,#0x6964
71038c932c  movk w8,#0x6666, LSL #16
71038c9330  stur w8,[x22, #0x1]
71038c9334  strb wzr,[sp, #0x3e8]
71038c9338  add x1,sp,#0x3e0
71038c933c  mov x0,x20
71038c9340  bl 0x71038b4c00
71038c9344  str x24,[sp, #0x3e0]
71038c9348  str wzr,[sp, #0x3e8]
71038c934c  str x25,[sp, #0x280]
71038c9350  str x20,[sp, #0x288]
71038c9354  cbz x20,0x71038c9364
71038c9358  ldr x8,[x20, #0x8]
71038c935c  ldr x9,[x8]
71038c9360  b 0x71038c936c
71038c9364  mov x8,xzr
71038c9368  mov x9,xzr
71038c936c  str x8,[sp, #0x290]
71038c9370  str x9,[sp, #0x298]
71038c9374  str x19,[sp, #0x280]
71038c9378  add x1,sp,#0x3e0
71038c937c  add x2,sp,#0x280
71038c9380  mov x0,x26
71038c9384  bl 0x71038b51b0
71038c9388  ldr x8,[sp, #0x290]
71038c938c  str x19,[sp, #0x280]
71038c9390  cbz x8,0x71038c93b8
71038c9394  ldr x8,[x8]
71038c9398  ldr x9,[sp, #0x298]
71038c939c  cmp x8,x9
71038c93a0  b.ne 0x71038c93b8
71038c93a4  ldr x0,[sp, #0x288]
71038c93a8  cbz x0,0x71038c93b8
71038c93ac  ldr x8,[x0]
71038c93b0  ldr x8,[x8, #0x8]
71038c93b4  blr x8
71038c93b8  add x0,sp,#0x120
71038c93bc  mov w1,#0x10
71038c93c0  orr w2,wzr,#0x78
71038c93c4  bl 0x710392e1f0
71038c93c8  cmp w0,#0xc
71038c93cc  b.ne 0x71038c9408
71038c93d0  adrp x8,0x710593d000
71038c93d4  ldr x0,[x8, #0x2b0]
71038c93d8  cbz x0,0x71038c9408
71038c93dc  orr w8,wzr,#0x78
71038c93e0  str x8,[sp, #0x3e0]
71038c93e4  ldr x8,[x0]
71038c93e8  ldr x8,[x8, #0x30]
71038c93ec  add x1,sp,#0x3e0
71038c93f0  blr x8
71038c93f4  tbz w0,#0x0,0x71038c9408
71038c93f8  add x0,sp,#0x120
71038c93fc  mov w1,#0x10
71038c9400  orr w2,wzr,#0x78
71038c9404  bl 0x710392e1f0
71038c9408  cbz x21,0x71038c941c
71038c940c  ldr x2,[sp, #0x120]
71038c9410  orr w0,wzr,#0x78
71038c9414  mov w1,#0x10
71038c9418  bl 0x71039c19e0
71038c941c  mov w8,#0x14
71038c9420  str xzr,[sp, #0x3e0]
71038c9424  strb w8,[sp, #0x3e0]
71038c9428  ldr x8,[sp, #0xa8]
71038c942c  ldr x20,[sp, #0x120]
71038c9430  str xzr,[sp, #0x3e8]
71038c9434  str xzr,[sp, #0x3f0]
71038c9438  stur x8,[x22, #0x1]
71038c943c  mov w8,#0x7061
71038c9440  sturh w8,[x22, #0x9]
71038c9444  strb wzr,[sp, #0x3eb]
71038c9448  add x1,sp,#0x3e0
71038c944c  mov x0,x20
71038c9450  bl 0x71038b4c00
71038c9454  orr w8,wzr,#0x1e
71038c9458  str x24,[sp, #0x3e0]
71038c945c  str x25,[sp, #0x260]
71038c9460  str w8,[sp, #0x3e8]
71038c9464  str x20,[sp, #0x268]
71038c9468  cbz x20,0x71038c9478
71038c946c  ldr x8,[x20, #0x8]
71038c9470  ldr x9,[x8]
71038c9474  b 0x71038c9480
71038c9478  mov x8,xzr
71038c947c  mov x9,xzr
71038c9480  str x8,[sp, #0x270]
71038c9484  str x9,[sp, #0x278]
71038c9488  str x19,[sp, #0x260]
71038c948c  add x1,sp,#0x3e0
71038c9490  add x2,sp,#0x260
71038c9494  mov x0,x26
71038c9498  bl 0x71038b51b0
71038c949c  ldr x8,[sp, #0x270]
71038c94a0  str x19,[sp, #0x260]
71038c94a4  cbz x8,0x71038c94cc
71038c94a8  ldr x8,[x8]
71038c94ac  ldr x9,[sp, #0x278]
71038c94b0  cmp x8,x9
71038c94b4  b.ne 0x71038c94cc
71038c94b8  ldr x0,[sp, #0x268]
71038c94bc  cbz x0,0x71038c94cc
71038c94c0  ldr x8,[x0]
71038c94c4  ldr x8,[x8, #0x8]
71038c94c8  blr x8
71038c94cc  add x0,sp,#0x120
71038c94d0  mov w1,#0x10
71038c94d4  orr w2,wzr,#0x78
71038c94d8  bl 0x710392e1f0
71038c94dc  cmp w0,#0xc
71038c94e0  b.ne 0x71038c951c
71038c94e4  adrp x8,0x710593d000
71038c94e8  ldr x0,[x8, #0x2b0]
71038c94ec  cbz x0,0x71038c951c
71038c94f0  orr w8,wzr,#0x78
71038c94f4  str x8,[sp, #0x3e0]
71038c94f8  ldr x8,[x0]
71038c94fc  ldr x8,[x8, #0x30]
71038c9500  add x1,sp,#0x3e0
71038c9504  blr x8
71038c9508  tbz w0,#0x0,0x71038c951c
71038c950c  add x0,sp,#0x120
71038c9510  mov w1,#0x10
71038c9514  orr w2,wzr,#0x78
71038c9518  bl 0x710392e1f0
71038c951c  cbz x21,0x71038c9530
71038c9520  ldr x2,[sp, #0x120]
71038c9524  orr w0,wzr,#0x78
71038c9528  mov w1,#0x10
71038c952c  bl 0x71039c19e0
71038c9530  orr w8,wzr,#0x1c
71038c9534  strb w8,[sp, #0x3e0]
71038c9538  ldr x8,[sp, #0xc8]
71038c953c  str xzr,[sp, #0x3f0]
71038c9540  ldr x20,[sp, #0x120]
71038c9544  stur x8,[x22, #0x7]
71038c9548  ldr x8,[sp, #0xc0]
71038c954c  stur x8,[x22, #0x1]
71038c9550  strb wzr,[sp, #0x3ef]
71038c9554  add x1,sp,#0x3e0
71038c9558  mov x0,x20
71038c955c  bl 0x71038b4c00
71038c9560  mov w8,#0x40
71038c9564  str x24,[sp, #0x3e0]
71038c9568  str x25,[sp, #0x240]
71038c956c  str w8,[sp, #0x3e8]
71038c9570  str x20,[sp, #0x248]
71038c9574  cbz x20,0x71038c9584
71038c9578  ldr x8,[x20, #0x8]
71038c957c  ldr x9,[x8]
71038c9580  b 0x71038c958c
71038c9584  mov x8,xzr
71038c9588  mov x9,xzr
71038c958c  str x8,[sp, #0x250]
71038c9590  str x9,[sp, #0x258]
71038c9594  str x19,[sp, #0x240]
71038c9598  add x1,sp,#0x3e0
71038c959c  add x2,sp,#0x240
71038c95a0  mov x0,x26
71038c95a4  bl 0x71038b51b0
71038c95a8  ldr x8,[sp, #0x250]
71038c95ac  str x19,[sp, #0x240]
71038c95b0  cbz x8,0x71038c95d8
71038c95b4  ldr x8,[x8]
71038c95b8  ldr x9,[sp, #0x258]
71038c95bc  cmp x8,x9
71038c95c0  b.ne 0x71038c95d8
71038c95c4  ldr x0,[sp, #0x248]
71038c95c8  cbz x0,0x71038c95d8
71038c95cc  ldr x8,[x0]
71038c95d0  ldr x8,[x8, #0x8]
71038c95d4  blr x8
71038c95d8  add x0,sp,#0x120
71038c95dc  mov w1,#0x10
71038c95e0  orr w2,wzr,#0x78
71038c95e4  bl 0x710392e1f0
71038c95e8  cmp w0,#0xc
71038c95ec  b.ne 0x71038c9628
71038c95f0  adrp x8,0x710593d000
71038c95f4  ldr x0,[x8, #0x2b0]
71038c95f8  cbz x0,0x71038c9628
71038c95fc  orr w8,wzr,#0x78
71038c9600  str x8,[sp, #0x3e0]
71038c9604  ldr x8,[x0]
71038c9608  ldr x8,[x8, #0x30]
71038c960c  add x1,sp,#0x3e0
71038c9610  blr x8
71038c9614  tbz w0,#0x0,0x71038c9628
71038c9618  add x0,sp,#0x120
71038c961c  mov w1,#0x10
71038c9620  orr w2,wzr,#0x78
71038c9624  bl 0x710392e1f0
71038c9628  cbz x21,0x71038c963c
71038c962c  ldr x2,[sp, #0x120]
71038c9630  orr w0,wzr,#0x78
71038c9634  mov w1,#0x10
71038c9638  bl 0x71039c19e0
71038c963c  mov w8,#0x16
71038c9640  str xzr,[sp, #0x3e0]
71038c9644  strb w8,[sp, #0x3e0]
71038c9648  ldr x8,[sp, #0xe8]
71038c964c  ldr x20,[sp, #0x120]
71038c9650  str xzr,[sp, #0x3e8]
71038c9654  str xzr,[sp, #0x3f0]
71038c9658  stur x8,[x22, #0x1]
71038c965c  mov w8,#0x6574
71038c9660  movk w8,#0x30, LSL #16
71038c9664  stur w8,[x22, #0x9]
71038c9668  add x1,sp,#0x3e0
71038c966c  mov x0,x20
71038c9670  bl 0x71038b4c00
71038c9674  mov w8,#0x118
71038c9678  str x24,[sp, #0x3e0]
71038c967c  str x25,[sp, #0x220]
71038c9680  str w8,[sp, #0x3e8]
71038c9684  str x20,[sp, #0x228]
71038c9688  cbz x20,0x71038c9698
71038c968c  ldr x8,[x20, #0x8]
71038c9690  ldr x9,[x8]
71038c9694  b 0x71038c96a0
71038c9698  mov x8,xzr
71038c969c  mov x9,xzr
71038c96a0  str x8,[sp, #0x230]
71038c96a4  str x9,[sp, #0x238]
71038c96a8  str x19,[sp, #0x220]
71038c96ac  add x1,sp,#0x3e0
71038c96b0  add x2,sp,#0x220
71038c96b4  mov x0,x26
71038c96b8  bl 0x71038b51b0
71038c96bc  ldr x8,[sp, #0x230]
71038c96c0  str x19,[sp, #0x220]
71038c96c4  cbz x8,0x71038c96ec
71038c96c8  ldr x8,[x8]
71038c96cc  ldr x9,[sp, #0x238]
71038c96d0  cmp x8,x9
71038c96d4  b.ne 0x71038c96ec
71038c96d8  ldr x0,[sp, #0x228]
71038c96dc  cbz x0,0x71038c96ec
71038c96e0  ldr x8,[x0]
71038c96e4  ldr x8,[x8, #0x8]
71038c96e8  blr x8
71038c96ec  add x0,sp,#0x120
71038c96f0  mov w1,#0x10
71038c96f4  orr w2,wzr,#0x78
71038c96f8  bl 0x710392e1f0
71038c96fc  cmp w0,#0xc
71038c9700  b.ne 0x71038c973c
71038c9704  adrp x8,0x710593d000
71038c9708  ldr x0,[x8, #0x2b0]
71038c970c  cbz x0,0x71038c973c
71038c9710  orr w8,wzr,#0x78
71038c9714  str x8,[sp, #0x3e0]
71038c9718  ldr x8,[x0]
71038c971c  ldr x8,[x8, #0x30]
71038c9720  add x1,sp,#0x3e0
71038c9724  blr x8
71038c9728  tbz w0,#0x0,0x71038c973c
71038c972c  add x0,sp,#0x120
71038c9730  mov w1,#0x10
71038c9734  orr w2,wzr,#0x78
71038c9738  bl 0x710392e1f0
71038c973c  cbz x21,0x71038c9750
71038c9740  ldr x2,[sp, #0x120]
71038c9744  orr w0,wzr,#0x78
71038c9748  mov w1,#0x10
71038c974c  bl 0x71039c19e0
71038c9750  mov w8,#0x22
71038c9754  str xzr,[sp, #0x3e0]
71038c9758  strb w8,[sp, #0x3e0]
71038c975c  ldr x8,[sp, #0xb0]
71038c9760  str xzr,[sp, #0x3f0]
71038c9764  ldr x20,[sp, #0x120]
71038c9768  str xzr,[sp, #0x3e8]
71038c976c  stur x8,[x22, #0x9]
71038c9770  ldr x8,[sp, #0xb8]
71038c9774  stur x8,[x22, #0x1]
71038c9778  mov w8,#0x6d
71038c977c  sturh w8,[x22, #0x11]
71038c9780  add x1,sp,#0x3e0
71038c9784  mov x0,x20
71038c9788  bl 0x71038b4c00
71038c978c  mov w8,#0x112
71038c9790  str x24,[sp, #0x3e0]
71038c9794  str x25,[sp, #0x200]
71038c9798  str w8,[sp, #0x3e8]
71038c979c  str x20,[sp, #0x208]
71038c97a0  cbz x20,0x71038c97b0
71038c97a4  ldr x8,[x20, #0x8]
71038c97a8  ldr x9,[x8]
71038c97ac  b 0x71038c97b8
71038c97b0  mov x8,xzr
71038c97b4  mov x9,xzr
71038c97b8  str x8,[sp, #0x210]
71038c97bc  str x9,[sp, #0x218]
71038c97c0  str x19,[sp, #0x200]
71038c97c4  add x1,sp,#0x3e0
71038c97c8  add x2,sp,#0x200
71038c97cc  mov x0,x26
71038c97d0  bl 0x71038b51b0
71038c97d4  ldr x8,[sp, #0x210]
71038c97d8  str x19,[sp, #0x200]
71038c97dc  cbz x8,0x71038c9804
71038c97e0  ldr x8,[x8]
71038c97e4  ldr x9,[sp, #0x218]
71038c97e8  cmp x8,x9
71038c97ec  b.ne 0x71038c9804
71038c97f0  ldr x0,[sp, #0x208]
71038c97f4  cbz x0,0x71038c9804
71038c97f8  ldr x8,[x0]
71038c97fc  ldr x8,[x8, #0x8]
71038c9800  blr x8
71038c9804  add x0,sp,#0x120
71038c9808  mov w1,#0x10
71038c980c  orr w2,wzr,#0x78
71038c9810  bl 0x710392e1f0
71038c9814  cmp w0,#0xc
71038c9818  b.ne 0x71038c9854
71038c981c  adrp x8,0x710593d000
71038c9820  ldr x0,[x8, #0x2b0]
71038c9824  cbz x0,0x71038c9854
71038c9828  orr w8,wzr,#0x78
71038c982c  str x8,[sp, #0x3e0]
71038c9830  ldr x8,[x0]
71038c9834  ldr x8,[x8, #0x30]
71038c9838  add x1,sp,#0x3e0
71038c983c  blr x8
71038c9840  tbz w0,#0x0,0x71038c9854
71038c9844  add x0,sp,#0x120
71038c9848  mov w1,#0x10
71038c984c  orr w2,wzr,#0x78
71038c9850  bl 0x710392e1f0
71038c9854  cbz x21,0x71038c9868
71038c9858  ldr x2,[sp, #0x120]
71038c985c  orr w0,wzr,#0x78
71038c9860  mov w1,#0x10
71038c9864  bl 0x71039c19e0
71038c9868  mov w8,#0x20
71038c986c  str xzr,[sp, #0x3e0]
71038c9870  strb w8,[sp, #0x3e0]
71038c9874  ldr x8,[sp, #0xd8]
71038c9878  ldr x20,[sp, #0x120]
71038c987c  str xzr,[sp, #0x3f0]
71038c9880  str xzr,[sp, #0x3e8]
71038c9884  stur x8,[x22, #0x9]
71038c9888  ldr x8,[sp, #0xe0]
71038c988c  stur x8,[x22, #0x1]
71038c9890  strb wzr,[sp, #0x3f1]
71038c9894  add x1,sp,#0x3e0
71038c9898  mov x0,x20
71038c989c  bl 0x71038b4c00
71038c98a0  mov w8,#0x123
71038c98a4  str x24,[sp, #0x3e0]
71038c98a8  str w8,[sp, #0x3e8]
71038c98ac  stp x25,x20,[sp, #0x1e0]
71038c98b0  cbz x20,0x71038c98c0
71038c98b4  ldr x8,[x20, #0x8]
71038c98b8  ldr x9,[x8]
71038c98bc  b 0x71038c98c8
71038c98c0  mov x8,xzr
71038c98c4  mov x9,xzr
71038c98c8  stp x8,x9,[sp, #0x1f0]
71038c98cc  str x19,[sp, #0x1e0]
71038c98d0  add x1,sp,#0x3e0
71038c98d4  add x2,sp,#0x1e0
71038c98d8  mov x0,x26
71038c98dc  bl 0x71038b51b0
71038c98e0  ldr x8,[sp, #0x1f0]
71038c98e4  str x19,[sp, #0x1e0]
71038c98e8  cbz x8,0x71038c9910
71038c98ec  ldr x8,[x8]
71038c98f0  ldr x9,[sp, #0x1f8]
71038c98f4  cmp x8,x9
71038c98f8  b.ne 0x71038c9910
71038c98fc  ldr x0,[sp, #0x1e8]
71038c9900  cbz x0,0x71038c9910
71038c9904  ldr x8,[x0]
71038c9908  ldr x8,[x8, #0x8]
71038c990c  blr x8
71038c9910  mov w2,#0x28
71038c9914  add x0,sp,#0x120
71038c9918  mov w1,#0x10
71038c991c  bl 0x710392e1f0
71038c9920  cmp w0,#0xc
71038c9924  b.ne 0x71038c9960
71038c9928  adrp x8,0x710593d000
71038c992c  ldr x0,[x8, #0x2b0]
71038c9930  cbz x0,0x71038c9960
71038c9934  mov w8,#0x28
71038c9938  str x8,[sp, #0x3e0]
71038c993c  ldr x8,[x0]
71038c9940  ldr x8,[x8, #0x30]
71038c9944  add x1,sp,#0x3e0
71038c9948  blr x8
71038c994c  tbz w0,#0x0,0x71038c9960
71038c9950  mov w2,#0x28
71038c9954  add x0,sp,#0x120
71038c9958  mov w1,#0x10
71038c995c  bl 0x710392e1f0
71038c9960  cbz x21,0x71038c9974
71038c9964  ldr x2,[sp, #0x120]
71038c9968  mov w0,#0x28
71038c996c  mov w1,#0x10
71038c9970  bl 0x71039c19e0
71038c9974  ldr x19,[sp, #0x120]
71038c9978  stp xzr,xzr,[x19, #0x18]
71038c997c  stp xzr,xzr,[x19, #0x8]
71038c9980  str xzr,[x19]
71038c9984  mov x0,x19
71038c9988  bl 0x71037c3a70
71038c998c  adrp x8,0x710526a000
71038c9990  add x8,x8,#0x868
71038c9994  str x8,[x19]
71038c9998  stp xzr,xzr,[x19, #0x18]
71038c999c  str xzr,[x19, #0x10]
71038c99a0  str x26,[sp, #0x3e8]
71038c99a4  ldr x8,[x26, #0x8]
71038c99a8  str x8,[sp, #0x3f0]
71038c99ac  ldr x8,[x8]
71038c99b0  str x8,[sp, #0x3f8]
71038c99b4  adrp x8,0x7105233000
71038c99b8  add x8,x8,#0xb78
71038c99bc  str x8,[sp, #0x3e0]
71038c99c0  add x1,sp,#0x3e0
71038c99c4  mov x0,x19
71038c99c8  bl 0x71038b3640
71038c99cc  mov w2,#0x168
71038c99d0  add x0,sp,#0x120
71038c99d4  mov w1,#0x10
71038c99d8  bl 0x710392e1f0
71038c99dc  cmp w0,#0xc
71038c99e0  b.ne 0x71038c9a1c
71038c99e4  adrp x8,0x710593d000
71038c99e8  ldr x0,[x8, #0x2b0]
71038c99ec  cbz x0,0x71038c9a1c
71038c99f0  mov w8,#0x168
71038c99f4  str x8,[sp, #0x3e0]
71038c99f8  ldr x8,[x0]
71038c99fc  ldr x8,[x8, #0x30]
71038c9a00  add x1,sp,#0x3e0
71038c9a04  blr x8
71038c9a08  tbz w0,#0x0,0x71038c9a1c
71038c9a0c  mov w2,#0x168
71038c9a10  add x0,sp,#0x120
71038c9a14  mov w1,#0x10
71038c9a18  bl 0x710392e1f0
71038c9a1c  str x19,[sp, #0xb8]
71038c9a20  cbz x21,0x71038c9a34
71038c9a24  ldr x2,[sp, #0x120]
71038c9a28  mov w0,#0x168
71038c9a2c  mov w1,#0x10
71038c9a30  bl 0x71039c19e0
71038c9a34  ldr x24,[sp, #0x120]
71038c9a38  str x28,[sp, #0x18]
71038c9a3c  str x27,[sp, #0xb0]
71038c9a40  mov x0,x24
71038c9a44  bl 0x71037c3a70
71038c9a48  adrp x8,0x7105291000
71038c9a4c  add x8,x8,#0xc38
71038c9a50  mov x20,x24
71038c9a54  mov x21,x24
71038c9a58  mov x25,x24
71038c9a5c  str x8,[x24]
71038c9a60  mov x28,x24
71038c9a64  mov x27,x24
71038c9a68  mov x19,x24
71038c9a6c  mov x22,x24
71038c9a70  mov w1,#0x28
71038c9a74  mov w0,#0x10
71038c9a78  str xzr,[x20, #0x10]!
71038c9a7c  str xzr,[x21, #0x48]!
71038c9a80  stp xzr,xzr,[x24, #0x50]
71038c9a84  stp xzr,xzr,[x24, #0x28]
71038c9a88  stp xzr,xzr,[x24, #0x18]
71038c9a8c  stp xzr,x23,[x24, #0x38]
71038c9a90  str xzr,[x25, #0x68]!
71038c9a94  stp xzr,xzr,[x24, #0x70]
71038c9a98  str x23,[x24, #0x60]
71038c9a9c  str xzr,[x28, #0x88]!
71038c9aa0  str x23,[x24, #0x80]
71038c9aa4  stp xzr,xzr,[x24, #0x90]
71038c9aa8  str xzr,[x27, #0xa8]!
71038c9aac  str x23,[x24, #0xa0]
71038c9ab0  stp xzr,xzr,[x24, #0xb0]
71038c9ab4  str xzr,[x19, #0xc8]!
71038c9ab8  str x23,[x24, #0xc0]
71038c9abc  stp xzr,xzr,[x24, #0xd0]
71038c9ac0  str xzr,[x22, #0xe8]!
71038c9ac4  stur x23,[x22, #-0x8]
71038c9ac8  stp xzr,xzr,[x22, #0x8]
71038c9acc  bl 0x710392e290
71038c9ad0  cbnz x0,0x71038c9b18
71038c9ad4  adrp x8,0x7105332000
71038c9ad8  ldr x0,[x8, #0xf00]
71038c9adc  cbz x0,0x71038c9b14
71038c9ae0  mov w8,#0x28
71038c9ae4  str wzr,[sp, #0x120]
71038c9ae8  add x1,sp,#0x120
71038c9aec  str x8,[sp, #0x3e0]
71038c9af0  ldr x8,[x0]
71038c9af4  ldr x8,[x8, #0x30]
71038c9af8  add x2,sp,#0x3e0
71038c9afc  blr x8
71038c9b00  tbz w0,#0x0,0x71038c9b14
71038c9b04  mov w1,#0x28
71038c9b08  mov w0,#0x10
71038c9b0c  bl 0x710392e290
71038c9b10  cbnz x0,0x71038c9b18
71038c9b14  mov x0,xzr
71038c9b18  orr w8,wzr,#0x3f800000
71038c9b1c  stp xzr,xzr,[x0, #0x10]
71038c9b20  stp xzr,xzr,[x0]
71038c9b24  add x23,x24,#0x128
71038c9b28  mov w1,#0xb8
71038c9b2c  str w8,[x0, #0x20]
71038c9b30  str x0,[x24, #0x100]
71038c9b34  mov w0,#0x10
71038c9b38  str x23,[x24, #0x110]
71038c9b3c  bl 0x710392e290
71038c9b40  cbnz x0,0x71038c9b88
71038c9b44  adrp x8,0x7105332000
71038c9b48  ldr x0,[x8, #0xf00]
71038c9b4c  cbz x0,0x71038c9b84
71038c9b50  mov w8,#0xb8
71038c9b54  str wzr,[sp, #0x120]
71038c9b58  add x1,sp,#0x120
71038c9b5c  str x8,[sp, #0x3e0]
71038c9b60  ldr x8,[x0]
71038c9b64  ldr x8,[x8, #0x30]
71038c9b68  add x2,sp,#0x3e0
71038c9b6c  blr x8
71038c9b70  tbz w0,#0x0,0x71038c9b84
71038c9b74  mov w1,#0xb8
71038c9b78  mov w0,#0x10
71038c9b7c  bl 0x710392e290
71038c9b80  cbnz x0,0x71038c9b88
71038c9b84  mov x0,xzr
71038c9b88  str x0,[x24, #0x120]
71038c9b8c  mov w1,#0x10
71038c9b90  mov w2,#0x20
71038c9b94  str xzr,[x0, #0x88]!
71038c9b98  mov x8,x0
71038c9b9c  stp x0,x0,[x0, #0x8]
71038c9ba0  str xzr,[x8, #0x18]!
71038c9ba4  stp x8,x8,[x0, #0x20]
71038c9ba8  add x8,x24,#0x150
71038c9bac  sub x0,x29,#0x60
71038c9bb0  stp x23,x8,[x24, #0x140]
71038c9bb4  mov w8,#0x5
71038c9bb8  str w8,[x24, #0x160]
71038c9bbc  stp xzr,x23,[x24, #0x130]
71038c9bc0  stp xzr,xzr,[x24, #0x150]
71038c9bc4  str xzr,[x21]
71038c9bc8  stp xzr,xzr,[x21, #0x8]
71038c9bcc  str xzr,[x25]
71038c9bd0  stp xzr,xzr,[x25, #0x8]
71038c9bd4  str xzr,[x28]
71038c9bd8  stp xzr,xzr,[x28, #0x8]
71038c9bdc  str xzr,[x27]
71038c9be0  stp xzr,xzr,[x27, #0x8]
71038c9be4  str xzr,[x19]
71038c9be8  stp xzr,xzr,[x19, #0x8]
71038c9bec  str xzr,[x22]
71038c9bf0  stp xzr,xzr,[x22, #0x8]
71038c9bf4  str xzr,[sp, #0x3f0]
71038c9bf8  str xzr,[sp, #0x3e8]
71038c9bfc  str xzr,[sp, #0x3e0]
71038c9c00  bl 0x710392e1f0
71038c9c04  cmp w0,#0xc
71038c9c08  b.ne 0x71038c9c44
71038c9c0c  adrp x8,0x710593d000
71038c9c10  ldr x0,[x8, #0x2b0]
71038c9c14  cbz x0,0x71038c9c44
71038c9c18  mov w8,#0x20
71038c9c1c  str x8,[sp, #0x120]
71038c9c20  ldr x8,[x0]
71038c9c24  ldr x8,[x8, #0x30]
71038c9c28  add x1,sp,#0x120
71038c9c2c  blr x8
71038c9c30  tbz w0,#0x0,0x71038c9c44
71038c9c34  sub x0,x29,#0x60
71038c9c38  mov w1,#0x10
71038c9c3c  mov w2,#0x20
71038c9c40  bl 0x710392e1f0
71038c9c44  adrp x27,0x71052a8000
71038c9c48  ldp x22,x28,[sp, #0x80]
71038c9c4c  ldr x27,[x27, #0xa78]
71038c9c50  adrp x25,0x7105291000
71038c9c54  add x25,x25,#0xd08
71038c9c58  cbz x27,0x71038c9c6c
71038c9c5c  ldur x2,[x29, #-0x60]
71038c9c60  mov w0,#0x20
71038c9c64  mov w1,#0x10
71038c9c68  bl 0x71039c19e0
71038c9c6c  mov w9,#0x21
71038c9c70  adrp x10,0x710438b000
71038c9c74  add x10,x10,#0x5a7
71038c9c78  orr w11,wzr,#0x18
71038c9c7c  ldur x8,[x29, #-0x60]
71038c9c80  str x9,[sp, #0x3e0]
71038c9c84  str x11,[sp, #0x3e8]
71038c9c88  ldp x9,x11,[x10]
71038c9c8c  ldr x10,[x10, #0x10]
71038c9c90  str x8,[sp, #0x3f0]
71038c9c94  stp x10,x11,[sp]
71038c9c98  str x9,[x8]
71038c9c9c  stp x11,x10,[x8, #0x8]
71038c9ca0  strb wzr,[x8, #0x18]
71038c9ca4  add x8,sp,#0x3e0
71038c9ca8  cmp x8,x20
71038c9cac  str x9,[sp, #0x10]
71038c9cb0  b.eq 0x71038c9e48
71038c9cb4  ldrb w9,[sp, #0x3e0]
71038c9cb8  ldr x10,[sp, #0x3f0]
71038c9cbc  orr x8,x8,#0x1
71038c9cc0  ldr x11,[sp, #0x3e8]
71038c9cc4  tst w9,#0x1
71038c9cc8  csel x7,x8,x10,eq
71038c9ccc  ldrb w8,[x20]
71038c9cd0  lsr x12,x9,#0x1
71038c9cd4  csel x21,x12,x11,eq
71038c9cd8  tbnz w8,#0x0,0x71038c9cf8
71038c9cdc  mov w1,#0x16
71038c9ce0  subs x2,x21,x1
71038c9ce4  b.hi 0x71038c9d0c
71038c9ce8  tbnz w8,#0x0,0x71038c9df8
71038c9cec  add x23,x24,#0x11
71038c9cf0  cbnz x21,0x71038c9e00
71038c9cf4  b 0x71038c9e10
71038c9cf8  ldr x9,[x20]
71038c9cfc  and x9,x9,#-0x2
71038c9d00  sub x1,x9,#0x1
71038c9d04  subs x2,x21,x1
71038c9d08  b.ls 0x71038c9ce8
71038c9d0c  tbnz w8,#0x0,0x71038c9e30
71038c9d10  lsr x3,x8,#0x1
71038c9d14  b 0x71038c9e34
71038c9d18  ldr x8,[x27, #0x38]
71038c9d1c  ldr x9,[x7]
71038c9d20  ldrb w10,[x7, #0x8]
71038c9d24  strb w10,[x8, #0x8]
71038c9d28  str x9,[x8]
71038c9d2c  strb wzr,[x8, #0x9]
71038c9d30  ldrb w8,[x0]
71038c9d34  tbnz w8,#0x0,0x71038c9d4c
71038c9d38  mov w8,#0x12
71038c9d3c  strb w8,[x0]
71038c9d40  ldrb w8,[sp, #0x3e0]
71038c9d44  tbnz w8,#0x0,0x71038c88bc
71038c9d48  b 0x71038c88dc
71038c9d4c  mov w8,#0x9
71038c9d50  str x8,[x27, #0x30]
71038c9d54  ldrb w8,[sp, #0x3e0]
71038c9d58  tbnz w8,#0x0,0x71038c88bc
71038c9d5c  b 0x71038c88dc
71038c9d60  ldr x8,[x26, #0x20]
71038c9d64  ldr x9,[x7]
71038c9d68  ldr w10,[x7, #0x8]
71038c9d6c  ldrh w11,[x7, #0xc]
71038c9d70  strh w11,[x8, #0xc]
71038c9d74  str w10,[x8, #0x8]
71038c9d78  str x9,[x8]
71038c9d7c  strb wzr,[x8, #0xe]
71038c9d80  ldrb w8,[x20]
71038c9d84  tbnz w8,#0x0,0x71038c9d9c
71038c9d88  orr w8,wzr,#0x1c
71038c9d8c  strb w8,[x20]
71038c9d90  ldrb w8,[sp, #0x3e0]
71038c9d94  tbnz w8,#0x0,0x71038c9150
71038c9d98  b 0x71038c9170
71038c9d9c  orr w8,wzr,#0xe
71038c9da0  str x8,[x26, #0x18]
71038c9da4  ldrb w8,[sp, #0x3e0]
71038c9da8  tbnz w8,#0x0,0x71038c9150
71038c9dac  b 0x71038c9170
71038c9db0  ldr x8,[x26, #0x38]
71038c9db4  ldr x9,[x7]
71038c9db8  ldrb w10,[x7, #0x8]
71038c9dbc  strb w10,[x8, #0x8]
71038c9dc0  str x9,[x8]
71038c9dc4  strb wzr,[x8, #0x9]
71038c9dc8  ldrb w8,[x0]
71038c9dcc  tbnz w8,#0x0,0x71038c9de4
71038c9dd0  mov w8,#0x12
71038c9dd4  strb w8,[x0]
71038c9dd8  ldrb w8,[sp, #0x3e0]
71038c9ddc  tbnz w8,#0x0,0x71038c91ec
71038c9de0  b 0x71038c920c
71038c9de4  mov w8,#0x9
71038c9de8  str x8,[x26, #0x30]
71038c9dec  ldrb w8,[sp, #0x3e0]
71038c9df0  tbnz w8,#0x0,0x71038c91ec
71038c9df4  b 0x71038c920c
71038c9df8  ldr x23,[x24, #0x20]
71038c9dfc  cbz x21,0x71038c9e10
71038c9e00  mov x0,x23
71038c9e04  mov x1,x7
71038c9e08  mov x2,x21
71038c9e0c  bl 0x71039c00a0
71038c9e10  strb wzr,[x23, x21, LSL ]
71038c9e14  ldrb w8,[x20]
71038c9e18  tbnz w8,#0x0,0x71038caa84
71038c9e1c  lsl w8,w21,#0x1
71038c9e20  strb w8,[x20]
71038c9e24  ldrb w8,[sp, #0x3e0]
71038c9e28  tbnz w8,#0x0,0x71038c9e50
71038c9e2c  b 0x71038c9e70
71038c9e30  ldr x3,[x24, #0x18]
71038c9e34  mov x0,x20
71038c9e38  mov x4,xzr
71038c9e3c  mov x5,x3
71038c9e40  mov x6,x21
71038c9e44  bl 0x71037cfe00
71038c9e48  ldrb w8,[sp, #0x3e0]
71038c9e4c  tbz w8,#0x0,0x71038c9e70
71038c9e50  adrp x8,0x71052a8000
71038c9e54  ldr x20,[sp, #0x3f0]
71038c9e58  ldr x8,[x8, #0xa70]
71038c9e5c  cbz x8,0x71038c9e68
71038c9e60  mov x0,x20
71038c9e64  bl 0x71039c19b0
71038c9e68  mov x0,x20
71038c9e6c  bl 0x710392eb40
71038c9e70  ldr x10,[sp, #0xf0]
71038c9e74  mov w8,#0x12
71038c9e78  str xzr,[sp, #0x3e0]
71038c9e7c  strb w8,[sp, #0x3e0]
71038c9e80  add x8,sp,#0x3e0
71038c9e84  add x9,sp,#0x3e0
71038c9e88  add x0,x24,#0x28
71038c9e8c  str xzr,[sp, #0x3e8]
71038c9e90  str xzr,[sp, #0x3f0]
71038c9e94  stur x10,[x9, #0x1]
71038c9e98  cmp x8,x0
71038c9e9c  mov w10,#0x6c
71038c9ea0  sturh w10,[x9, #0x9]
71038c9ea4  b.eq 0x71038c9ee8
71038c9ea8  orr x7,x8,#0x1
71038c9eac  ldrb w8,[x0]
71038c9eb0  tbnz w8,#0x0,0x71038c9ebc
71038c9eb4  add x8,x24,#0x29
71038c9eb8  b 0x71038caa98
71038c9ebc  ldr x8,[x0]
71038c9ec0  and x8,x8,#-0x2
71038c9ec4  sub x1,x8,#0x1
71038c9ec8  cmp x1,#0x9
71038c9ecc  b.cs 0x71038caa94
71038c9ed0  ldr x3,[x24, #0x30]
71038c9ed4  mov w6,#0x9
71038c9ed8  sub x2,x6,x1
71038c9edc  mov x4,xzr
71038c9ee0  mov x5,x3
71038c9ee4  bl 0x71037cfe00
71038c9ee8  ldrb w8,[sp, #0x3e0]
71038c9eec  tbz w8,#0x0,0x71038c9f10
71038c9ef0  adrp x8,0x71052a8000
71038c9ef4  ldr x20,[sp, #0x3f0]
71038c9ef8  ldr x8,[x8, #0xa70]
71038c9efc  cbz x8,0x71038c9f08
71038c9f00  mov x0,x20
71038c9f04  bl 0x71039c19b0
71038c9f08  mov x0,x20
71038c9f0c  bl 0x710392eb40
71038c9f10  ldr x8,[sp, #0x58]
71038c9f14  mov w19,#0x20
71038c9f18  add x20,sp,#0x3e0
71038c9f1c  str xzr,[sp, #0x3e0]
71038c9f20  str xzr,[sp, #0x3f0]
71038c9f24  str xzr,[sp, #0x3e8]
71038c9f28  strb w19,[sp, #0x3e0]
71038c9f2c  stur x8,[x20, #0x9]
71038c9f30  ldr x8,[sp, #0x40]
71038c9f34  stur x8,[x20, #0x1]
71038c9f38  strb wzr,[sp, #0x3f1]
71038c9f3c  ldr x0,[x24, #0x100]
71038c9f40  add x2,sp,#0x3e0
71038c9f44  mov w1,wzr
71038c9f48  bl 0x71038b69b0
71038c9f4c  ldr x8,[sp, #0x48]
71038c9f50  ldr x0,[x24, #0x100]
71038c9f54  str xzr,[sp, #0x3e0]
71038c9f58  str xzr,[sp, #0x3f0]
71038c9f5c  str xzr,[sp, #0x3e8]
71038c9f60  strb w19,[sp, #0x3e0]
71038c9f64  stur x8,[x20, #0x9]
71038c9f68  ldr x8,[sp, #0x50]
71038c9f6c  stur x8,[x20, #0x1]
71038c9f70  strb wzr,[sp, #0x3f1]
71038c9f74  mov w1,#0x4
71038c9f78  add x2,sp,#0x3e0
71038c9f7c  bl 0x71038b69b0
71038c9f80  mov x0,x24
71038c9f84  bl 0x71038b64a0
71038c9f88  add x0,sp,#0x120
71038c9f8c  mov w1,#0x10
71038c9f90  orr w2,wzr,#0x78
71038c9f94  bl 0x710392e1f0
71038c9f98  cmp w0,#0xc
71038c9f9c  adrp x19,0x710526a000
71038c9fa0  add x19,x19,#0x918
71038c9fa4  b.ne 0x71038c9fe0
71038c9fa8  adrp x8,0x710593d000
71038c9fac  ldr x0,[x8, #0x2b0]
71038c9fb0  cbz x0,0x71038c9fe0
71038c9fb4  orr w8,wzr,#0x78
71038c9fb8  str x8,[sp, #0x3e0]
71038c9fbc  ldr x8,[x0]
71038c9fc0  ldr x8,[x8, #0x30]
71038c9fc4  add x1,sp,#0x3e0
71038c9fc8  blr x8
71038c9fcc  tbz w0,#0x0,0x71038c9fe0
71038c9fd0  add x0,sp,#0x120
71038c9fd4  mov w1,#0x10
71038c9fd8  orr w2,wzr,#0x78
71038c9fdc  bl 0x710392e1f0
71038c9fe0  cbz x27,0x71038c9ff4
71038c9fe4  ldr x2,[sp, #0x120]
71038c9fe8  orr w0,wzr,#0x78
71038c9fec  mov w1,#0x10
71038c9ff0  bl 0x71039c19e0
71038c9ff4  ldr x20,[sp, #0x120]
71038c9ff8  orr w8,wzr,#0xe
71038c9ffc  str xzr,[sp, #0x3e0]
71038ca000  strb w8,[sp, #0x3e0]
71038ca004  mov w8,#0x65
71038ca008  strb w8,[sp, #0x3e7]
71038ca00c  add x8,sp,#0x3e0
71038ca010  mov w9,#0x7375
71038ca014  str xzr,[sp, #0x3e8]
71038ca018  str xzr,[sp, #0x3f0]
71038ca01c  sturh w9,[x8, #0x5]
71038ca020  mov w9,#0x6964
71038ca024  movk w9,#0x6666, LSL #16
71038ca028  stur w9,[x8, #0x1]
71038ca02c  strb wzr,[sp, #0x3e8]
71038ca030  add x1,sp,#0x3e0
71038ca034  mov x0,x20
71038ca038  bl 0x71038b4c00
71038ca03c  adrp x8,0x7105290000
71038ca040  add x8,x8,#0xed8
71038ca044  str wzr,[sp, #0x3e8]
71038ca048  str x8,[sp, #0x3e0]
71038ca04c  stp x25,x20,[sp, #0x1c0]
71038ca050  cbz x20,0x71038ca060
71038ca054  ldr x8,[x20, #0x8]
71038ca058  ldr x9,[x8]
71038ca05c  b 0x71038ca068
71038ca060  mov x8,xzr
71038ca064  mov x9,xzr
71038ca068  stp x8,x9,[sp, #0x1d0]
71038ca06c  str x19,[sp, #0x1c0]
71038ca070  add x1,sp,#0x3e0
71038ca074  add x2,sp,#0x1c0
71038ca078  mov x0,x24
71038ca07c  bl 0x71038b51b0
71038ca080  ldr x8,[sp, #0x1d0]
71038ca084  str x19,[sp, #0x1c0]
71038ca088  cbz x8,0x71038ca0b0
71038ca08c  ldr x8,[x8]
71038ca090  ldr x9,[sp, #0x1d8]
71038ca094  cmp x8,x9
71038ca098  b.ne 0x71038ca0b0
71038ca09c  ldr x0,[sp, #0x1c8]
71038ca0a0  cbz x0,0x71038ca0b0
71038ca0a4  ldr x8,[x0]
71038ca0a8  ldr x8,[x8, #0x8]
71038ca0ac  blr x8
71038ca0b0  add x0,sp,#0x120
71038ca0b4  mov w1,#0x10
71038ca0b8  orr w2,wzr,#0x78
71038ca0bc  bl 0x710392e1f0
71038ca0c0  cmp w0,#0xc
71038ca0c4  b.ne 0x71038ca100
71038ca0c8  adrp x8,0x710593d000
71038ca0cc  ldr x0,[x8, #0x2b0]
71038ca0d0  cbz x0,0x71038ca100
71038ca0d4  orr w8,wzr,#0x78
71038ca0d8  str x8,[sp, #0x3e0]
71038ca0dc  ldr x8,[x0]
71038ca0e0  ldr x8,[x8, #0x30]
71038ca0e4  add x1,sp,#0x3e0
71038ca0e8  blr x8
71038ca0ec  tbz w0,#0x0,0x71038ca100
71038ca0f0  add x0,sp,#0x120
71038ca0f4  mov w1,#0x10
71038ca0f8  orr w2,wzr,#0x78
71038ca0fc  bl 0x710392e1f0
71038ca100  cbz x27,0x71038ca114
71038ca104  ldr x2,[sp, #0x120]
71038ca108  orr w0,wzr,#0x78
71038ca10c  mov w1,#0x10
71038ca110  bl 0x71039c19e0
71038ca114  ldr x9,[sp, #0xa8]
71038ca118  ldr x20,[sp, #0x120]
71038ca11c  mov w8,#0x14
71038ca120  str xzr,[sp, #0x3e0]
71038ca124  strb w8,[sp, #0x3e0]
71038ca128  add x8,sp,#0x3e0
71038ca12c  str xzr,[sp, #0x3e8]
71038ca130  str xzr,[sp, #0x3f0]
71038ca134  stur x9,[x8, #0x1]
71038ca138  mov w9,#0x7061
71038ca13c  sturh w9,[x8, #0x9]
71038ca140  strb wzr,[sp, #0x3eb]
71038ca144  add x1,sp,#0x3e0
71038ca148  mov x0,x20
71038ca14c  bl 0x71038b4c00
71038ca150  adrp x8,0x7105290000
71038ca154  add x8,x8,#0xed8
71038ca158  str x8,[sp, #0x3e0]
71038ca15c  orr w8,wzr,#0x1e
71038ca160  str w8,[sp, #0x3e8]
71038ca164  stp x25,x20,[sp, #0x1a0]
71038ca168  cbz x20,0x71038ca178
71038ca16c  ldr x8,[x20, #0x8]
71038ca170  ldr x9,[x8]
71038ca174  b 0x71038ca180
71038ca178  mov x8,xzr
71038ca17c  mov x9,xzr
71038ca180  stp x8,x9,[sp, #0x1b0]
71038ca184  str x19,[sp, #0x1a0]
71038ca188  add x1,sp,#0x3e0
71038ca18c  add x2,sp,#0x1a0
71038ca190  mov x0,x24
71038ca194  bl 0x71038b51b0
71038ca198  ldr x8,[sp, #0x1b0]
71038ca19c  str x19,[sp, #0x1a0]
71038ca1a0  cbz x8,0x71038ca1c8
71038ca1a4  ldr x8,[x8]
71038ca1a8  ldr x9,[sp, #0x1b8]
71038ca1ac  cmp x8,x9
71038ca1b0  b.ne 0x71038ca1c8
71038ca1b4  ldr x0,[sp, #0x1a8]
71038ca1b8  cbz x0,0x71038ca1c8
71038ca1bc  ldr x8,[x0]
71038ca1c0  ldr x8,[x8, #0x8]
71038ca1c4  blr x8
71038ca1c8  add x0,sp,#0x120
71038ca1cc  mov w1,#0x10
71038ca1d0  orr w2,wzr,#0x78
71038ca1d4  bl 0x710392e1f0
71038ca1d8  cmp w0,#0xc
71038ca1dc  b.ne 0x71038ca218
71038ca1e0  adrp x8,0x710593d000
71038ca1e4  ldr x0,[x8, #0x2b0]
71038ca1e8  cbz x0,0x71038ca218
71038ca1ec  orr w8,wzr,#0x78
71038ca1f0  str x8,[sp, #0x3e0]
71038ca1f4  ldr x8,[x0]
71038ca1f8  ldr x8,[x8, #0x30]
71038ca1fc  add x1,sp,#0x3e0
71038ca200  blr x8
71038ca204  tbz w0,#0x0,0x71038ca218
71038ca208  add x0,sp,#0x120
71038ca20c  mov w1,#0x10
71038ca210  orr w2,wzr,#0x78
71038ca214  bl 0x710392e1f0
71038ca218  cbz x27,0x71038ca22c
71038ca21c  ldr x2,[sp, #0x120]
71038ca220  orr w0,wzr,#0x78
71038ca224  mov w1,#0x10
71038ca228  bl 0x71039c19e0
71038ca22c  ldr x9,[sp, #0xc8]
71038ca230  orr w8,wzr,#0x1c
71038ca234  strb w8,[sp, #0x3e0]
71038ca238  add x8,sp,#0x3e0
71038ca23c  str xzr,[sp, #0x3f0]
71038ca240  ldr x20,[sp, #0x120]
71038ca244  stur x9,[x8, #0x7]
71038ca248  ldr x9,[sp, #0xc0]
71038ca24c  stur x9,[x8, #0x1]
71038ca250  strb wzr,[sp, #0x3ef]
71038ca254  add x1,sp,#0x3e0
71038ca258  mov x0,x20
71038ca25c  bl 0x71038b4c00
71038ca260  adrp x8,0x7105290000
71038ca264  add x8,x8,#0xed8
71038ca268  str x8,[sp, #0x3e0]
71038ca26c  mov w8,#0x40
71038ca270  str w8,[sp, #0x3e8]
71038ca274  stp x25,x20,[sp, #0x180]
71038ca278  cbz x20,0x71038ca288
71038ca27c  ldr x8,[x20, #0x8]
71038ca280  ldr x9,[x8]
71038ca284  b 0x71038ca290
71038ca288  mov x8,xzr
71038ca28c  mov x9,xzr
71038ca290  stp x8,x9,[sp, #0x190]
71038ca294  str x19,[sp, #0x180]
71038ca298  add x1,sp,#0x3e0
71038ca29c  add x2,sp,#0x180
71038ca2a0  mov x0,x24
71038ca2a4  bl 0x71038b51b0
71038ca2a8  ldr x8,[sp, #0x190]
71038ca2ac  str x19,[sp, #0x180]
71038ca2b0  cbz x8,0x71038ca2d8
71038ca2b4  ldr x8,[x8]
71038ca2b8  ldr x9,[sp, #0x198]
71038ca2bc  cmp x8,x9
71038ca2c0  b.ne 0x71038ca2d8
71038ca2c4  ldr x0,[sp, #0x188]
71038ca2c8  cbz x0,0x71038ca2d8
71038ca2cc  ldr x8,[x0]
71038ca2d0  ldr x8,[x8, #0x8]
71038ca2d4  blr x8
71038ca2d8  add x0,sp,#0x120
71038ca2dc  mov w1,#0x10
71038ca2e0  orr w2,wzr,#0x78
71038ca2e4  bl 0x710392e1f0
71038ca2e8  cmp w0,#0xc
71038ca2ec  b.ne 0x71038ca328
71038ca2f0  adrp x8,0x710593d000
71038ca2f4  ldr x0,[x8, #0x2b0]
71038ca2f8  cbz x0,0x71038ca328
71038ca2fc  orr w8,wzr,#0x78
71038ca300  str x8,[sp, #0x3e0]
71038ca304  ldr x8,[x0]
71038ca308  ldr x8,[x8, #0x30]
71038ca30c  add x1,sp,#0x3e0
71038ca310  blr x8
71038ca314  tbz w0,#0x0,0x71038ca328
71038ca318  add x0,sp,#0x120
71038ca31c  mov w1,#0x10
71038ca320  orr w2,wzr,#0x78
71038ca324  bl 0x710392e1f0
71038ca328  cbz x27,0x71038ca33c
71038ca32c  ldr x2,[sp, #0x120]
71038ca330  orr w0,wzr,#0x78
71038ca334  mov w1,#0x10
71038ca338  bl 0x71039c19e0
71038ca33c  ldr x9,[sp, #0xe8]
71038ca340  ldr x20,[sp, #0x120]
71038ca344  mov w8,#0x16
71038ca348  str xzr,[sp, #0x3e0]
71038ca34c  strb w8,[sp, #0x3e0]
71038ca350  add x8,sp,#0x3e0
71038ca354  str xzr,[sp, #0x3e8]
71038ca358  str xzr,[sp, #0x3f0]
71038ca35c  stur x9,[x8, #0x1]
71038ca360  mov w9,#0x6574
71038ca364  movk w9,#0x30, LSL #16
71038ca368  stur w9,[x8, #0x9]
71038ca36c  add x1,sp,#0x3e0
71038ca370  mov x0,x20
71038ca374  bl 0x71038b4c00
71038ca378  adrp x8,0x7105290000
71038ca37c  add x8,x8,#0xed8
71038ca380  str x8,[sp, #0x3e0]
71038ca384  mov w8,#0x118
71038ca388  str w8,[sp, #0x3e8]
71038ca38c  stp x25,x20,[sp, #0x160]
71038ca390  cbz x20,0x71038ca3a0
71038ca394  ldr x8,[x20, #0x8]
71038ca398  ldr x9,[x8]
71038ca39c  b 0x71038ca3a8
71038ca3a0  mov x8,xzr
71038ca3a4  mov x9,xzr
71038ca3a8  stp x8,x9,[sp, #0x170]
71038ca3ac  str x19,[sp, #0x160]
71038ca3b0  add x1,sp,#0x3e0
71038ca3b4  add x2,sp,#0x160
71038ca3b8  mov x0,x24
71038ca3bc  bl 0x71038b51b0
71038ca3c0  ldr x8,[sp, #0x170]
71038ca3c4  str x19,[sp, #0x160]
71038ca3c8  cbz x8,0x71038ca3f0
71038ca3cc  ldr x8,[x8]
71038ca3d0  ldr x9,[sp, #0x178]
71038ca3d4  cmp x8,x9
71038ca3d8  b.ne 0x71038ca3f0
71038ca3dc  ldr x0,[sp, #0x168]
71038ca3e0  cbz x0,0x71038ca3f0
71038ca3e4  ldr x8,[x0]
71038ca3e8  ldr x8,[x8, #0x8]
71038ca3ec  blr x8
71038ca3f0  add x0,sp,#0x120
71038ca3f4  mov w1,#0x10
71038ca3f8  orr w2,wzr,#0x78
71038ca3fc  bl 0x710392e1f0
71038ca400  cmp w0,#0xc
71038ca404  b.ne 0x71038ca440
71038ca408  adrp x8,0x710593d000
71038ca40c  ldr x0,[x8, #0x2b0]
71038ca410  cbz x0,0x71038ca440
71038ca414  orr w8,wzr,#0x78
71038ca418  str x8,[sp, #0x3e0]
71038ca41c  ldr x8,[x0]
71038ca420  ldr x8,[x8, #0x30]
71038ca424  add x1,sp,#0x3e0
71038ca428  blr x8
71038ca42c  tbz w0,#0x0,0x71038ca440
71038ca430  add x0,sp,#0x120
71038ca434  mov w1,#0x10
71038ca438  orr w2,wzr,#0x78
71038ca43c  bl 0x710392e1f0
71038ca440  cbz x27,0x71038ca454
71038ca444  ldr x2,[sp, #0x120]
71038ca448  orr w0,wzr,#0x78
71038ca44c  mov w1,#0x10
71038ca450  bl 0x71039c19e0
71038ca454  ldr x9,[sp, #0xd8]
71038ca458  mov w8,#0x20
71038ca45c  str xzr,[sp, #0x3e0]
71038ca460  strb w8,[sp, #0x3e0]
71038ca464  add x8,sp,#0x3e0
71038ca468  ldr x20,[sp, #0x120]
71038ca46c  str xzr,[sp, #0x3f0]
71038ca470  str xzr,[sp, #0x3e8]
71038ca474  stur x9,[x8, #0x9]
71038ca478  ldr x9,[sp, #0xe0]
71038ca47c  stur x9,[x8, #0x1]
71038ca480  strb wzr,[sp, #0x3f1]
71038ca484  add x1,sp,#0x3e0
71038ca488  mov x0,x20
71038ca48c  bl 0x71038b4c00
71038ca490  adrp x8,0x7105290000
71038ca494  add x8,x8,#0xed8
71038ca498  str x8,[sp, #0x3e0]
71038ca49c  mov w8,#0x123
71038ca4a0  str w8,[sp, #0x3e8]
71038ca4a4  stp x25,x20,[sp, #0x140]
71038ca4a8  cbz x20,0x71038ca4b8
71038ca4ac  ldr x8,[x20, #0x8]
71038ca4b0  ldr x9,[x8]
71038ca4b4  b 0x71038ca4c0
71038ca4b8  mov x8,xzr
71038ca4bc  mov x9,xzr
71038ca4c0  stp x8,x9,[sp, #0x150]
71038ca4c4  str x19,[sp, #0x140]
71038ca4c8  add x1,sp,#0x3e0
71038ca4cc  add x2,sp,#0x140
71038ca4d0  mov x0,x24
71038ca4d4  bl 0x71038b51b0
71038ca4d8  ldr x8,[sp, #0x150]
71038ca4dc  str x19,[sp, #0x140]
71038ca4e0  cbz x8,0x71038ca508
71038ca4e4  ldr x8,[x8]
71038ca4e8  ldr x9,[sp, #0x158]
71038ca4ec  cmp x8,x9
71038ca4f0  b.ne 0x71038ca508
71038ca4f4  ldr x0,[sp, #0x148]
71038ca4f8  cbz x0,0x71038ca508
71038ca4fc  ldr x8,[x0]
71038ca500  ldr x8,[x8, #0x8]
71038ca504  blr x8
71038ca508  mov w2,#0x28
71038ca50c  add x0,sp,#0x120
71038ca510  mov w1,#0x10
71038ca514  bl 0x710392e1f0
71038ca518  cmp w0,#0xc
71038ca51c  b.ne 0x71038ca558
71038ca520  adrp x8,0x710593d000
71038ca524  ldr x0,[x8, #0x2b0]
71038ca528  cbz x0,0x71038ca558
71038ca52c  mov w8,#0x28
71038ca530  str x8,[sp, #0x3e0]
71038ca534  ldr x8,[x0]
71038ca538  ldr x8,[x8, #0x30]
71038ca53c  add x1,sp,#0x3e0
71038ca540  blr x8
71038ca544  tbz w0,#0x0,0x71038ca558
71038ca548  mov w2,#0x28
71038ca54c  add x0,sp,#0x120
71038ca550  mov w1,#0x10
71038ca554  bl 0x710392e1f0
71038ca558  cbz x27,0x71038ca56c
71038ca55c  ldr x2,[sp, #0x120]
71038ca560  mov w0,#0x28
71038ca564  mov w1,#0x10
71038ca568  bl 0x71039c19e0
71038ca56c  ldr x20,[sp, #0x120]
71038ca570  stp xzr,xzr,[x20, #0x18]
71038ca574  stp xzr,xzr,[x20, #0x8]
71038ca578  str xzr,[x20]
71038ca57c  mov x0,x20
71038ca580  bl 0x71037c3a70
71038ca584  adrp x8,0x710526a000
71038ca588  add x8,x8,#0x868
71038ca58c  str x8,[x20]
71038ca590  stp xzr,xzr,[x20, #0x18]
71038ca594  str xzr,[x20, #0x10]
71038ca598  str x24,[sp, #0x3e8]
71038ca59c  ldr x8,[x24, #0x8]
71038ca5a0  str x8,[sp, #0x3f0]
71038ca5a4  ldr x8,[x8]
71038ca5a8  str x8,[sp, #0x3f8]
71038ca5ac  adrp x8,0x7105233000
71038ca5b0  add x8,x8,#0xb78
71038ca5b4  str x8,[sp, #0x3e0]
71038ca5b8  add x1,sp,#0x3e0
71038ca5bc  mov x0,x20
71038ca5c0  bl 0x71038b3640
71038ca5c4  ldr x8,[sp, #0x90]
71038ca5c8  add x21,x8,#0x158
71038ca5cc  mov w8,#0x1a
71038ca5d0  stp xzr,xzr,[sp, #0x120]
71038ca5d4  strb w8,[sp, #0x120]
71038ca5d8  ldr x8,[sp, #0x78]
71038ca5dc  add x9,sp,#0x27
71038ca5e0  str xzr,[sp, #0x130]
71038ca5e4  stur x8,[x9, #0xff]
71038ca5e8  ldr x8,[sp, #0x70]
71038ca5ec  add x9,sp,#0x22
71038ca5f0  adrp x19,0x710526a000
71038ca5f4  add x19,x19,#0x8e8
71038ca5f8  str x19,[sp, #0x3e0]
71038ca5fc  stur x8,[x9, #0xff]
71038ca600  strb wzr,[sp, #0x12e]
71038ca604  str x28,[sp, #0x3e8]
71038ca608  cbz x28,0x71038ca618
71038ca60c  ldr x8,[x28, #0x8]
71038ca610  ldr x9,[x8]
71038ca614  b 0x71038ca620
71038ca618  mov x8,xzr
71038ca61c  mov x9,xzr
71038ca620  adrp x25,0x710523c000
71038ca624  add x25,x25,#0xb20
71038ca628  str x8,[sp, #0x3f0]
71038ca62c  str x9,[sp, #0x3f8]
71038ca630  str x25,[sp, #0x3e0]
71038ca634  add x0,sp,#0x138
71038ca638  add x2,sp,#0x120
71038ca63c  add x3,sp,#0x3e0
71038ca640  mov x1,x21
71038ca644  bl 0x71038b3960
71038ca648  ldrb w8,[sp, #0x120]
71038ca64c  tbz w8,#0x0,0x71038ca670
71038ca650  adrp x8,0x71052a8000
71038ca654  ldr x23,[sp, #0x130]
71038ca658  ldr x8,[x8, #0xa70]
71038ca65c  cbz x8,0x71038ca668
71038ca660  mov x0,x23
71038ca664  bl 0x71039c19b0
71038ca668  mov x0,x23
71038ca66c  bl 0x710392eb40
71038ca670  sub x0,x29,#0x60
71038ca674  mov w1,#0x10
71038ca678  mov w2,#0x20
71038ca67c  stp xzr,xzr,[sp, #0x128]
71038ca680  str xzr,[sp, #0x120]
71038ca684  bl 0x710392e1f0
71038ca688  cmp w0,#0xc
71038ca68c  b.ne 0x71038ca6c8
71038ca690  adrp x8,0x710593d000
71038ca694  ldr x0,[x8, #0x2b0]
71038ca698  cbz x0,0x71038ca6c8
71038ca69c  mov w8,#0x20
71038ca6a0  str x8,[sp, #0x3e0]
71038ca6a4  ldr x8,[x0]
71038ca6a8  ldr x8,[x8, #0x30]
71038ca6ac  add x1,sp,#0x3e0
71038ca6b0  blr x8
71038ca6b4  tbz w0,#0x0,0x71038ca6c8
71038ca6b8  sub x0,x29,#0x60
71038ca6bc  mov w1,#0x10
71038ca6c0  mov w2,#0x20
71038ca6c4  bl 0x710392e1f0
71038ca6c8  cbz x27,0x71038ca6dc
71038ca6cc  ldur x2,[x29, #-0x60]
71038ca6d0  mov w0,#0x20
71038ca6d4  mov w1,#0x10
71038ca6d8  bl 0x71039c19e0
71038ca6dc  mov w9,#0x21
71038ca6e0  ldur x8,[x29, #-0x60]
71038ca6e4  mov w10,#0x1b
71038ca6e8  str x9,[sp, #0x120]
71038ca6ec  ldr x9,[sp, #0x60]
71038ca6f0  stp x10,x8,[sp, #0x128]
71038ca6f4  str x9,[x8, #0x10]
71038ca6f8  ldr x9,[sp, #0x20]
71038ca6fc  str x9,[x8]
71038ca700  ldr x9,[sp, #0x68]
71038ca704  str x9,[x8, #0x8]
71038ca708  mov w9,#0x79
71038ca70c  strb w9,[x8, #0x1a]
71038ca710  mov w9,#0x6172
71038ca714  strh w9,[x8, #0x18]
71038ca718  strb wzr,[x8, #0x1b]
71038ca71c  ldr x8,[sp, #0xa0]
71038ca720  str x19,[sp, #0x3e0]
71038ca724  str x8,[sp, #0x3e8]
71038ca728  cbz x8,0x71038ca738
71038ca72c  ldr x8,[x8, #0x8]
71038ca730  ldr x9,[x8]
71038ca734  b 0x71038ca73c
71038ca738  mov x9,xzr
71038ca73c  str x8,[sp, #0x3f0]
71038ca740  str x9,[sp, #0x3f8]
71038ca744  str x25,[sp, #0x3e0]
71038ca748  add x0,sp,#0x118
71038ca74c  add x2,sp,#0x120
71038ca750  add x3,sp,#0x3e0
71038ca754  mov x1,x21
71038ca758  bl 0x71038b3960
71038ca75c  ldrb w8,[sp, #0x120]
71038ca760  tbz w8,#0x0,0x71038ca784
71038ca764  adrp x8,0x71052a8000
71038ca768  ldr x23,[sp, #0x130]
71038ca76c  ldr x8,[x8, #0xa70]
71038ca770  cbz x8,0x71038ca77c
71038ca774  mov x0,x23
71038ca778  bl 0x71039c19b0
71038ca77c  mov x0,x23
71038ca780  bl 0x710392eb40
71038ca784  sub x0,x29,#0x60
71038ca788  mov w1,#0x10
71038ca78c  mov w2,#0x20
71038ca790  stp xzr,xzr,[sp, #0x128]
71038ca794  str xzr,[sp, #0x120]
71038ca798  bl 0x710392e1f0
71038ca79c  cmp w0,#0xc
71038ca7a0  b.ne 0x71038ca7dc
71038ca7a4  adrp x8,0x710593d000
71038ca7a8  ldr x0,[x8, #0x2b0]
71038ca7ac  cbz x0,0x71038ca7dc
71038ca7b0  mov w8,#0x20
71038ca7b4  str x8,[sp, #0x3e0]
71038ca7b8  ldr x8,[x0]
71038ca7bc  ldr x8,[x8, #0x30]
71038ca7c0  add x1,sp,#0x3e0
71038ca7c4  blr x8
71038ca7c8  tbz w0,#0x0,0x71038ca7dc
71038ca7cc  sub x0,x29,#0x60
71038ca7d0  mov w1,#0x10
71038ca7d4  mov w2,#0x20
71038ca7d8  bl 0x710392e1f0
71038ca7dc  cbz x27,0x71038ca7f0
71038ca7e0  ldur x2,[x29, #-0x60]
71038ca7e4  mov w0,#0x20
71038ca7e8  mov w1,#0x10
71038ca7ec  bl 0x71039c19e0
71038ca7f0  ldur x8,[x29, #-0x60]
71038ca7f4  mov w9,#0x21
71038ca7f8  str x9,[sp, #0x120]
71038ca7fc  mov w9,#0x17
71038ca800  stp x9,x8,[sp, #0x128]
71038ca804  ldr x9,[sp, #0x28]
71038ca808  stur x9,[x8, #0xf]
71038ca80c  ldr x9,[sp, #0x30]
71038ca810  str x9,[x8, #0x8]
71038ca814  ldr x9,[sp, #0x38]
71038ca818  str x9,[x8]
71038ca81c  strb wzr,[x8, #0x17]
71038ca820  ldr x8,[sp, #0x98]
71038ca824  str x8,[sp, #0x3e8]
71038ca828  ldr x8,[x8, #0x8]
71038ca82c  str x8,[sp, #0x3f0]
71038ca830  ldr x8,[x8]
71038ca834  str x8,[sp, #0x3f8]
71038ca838  str x25,[sp, #0x3e0]
71038ca83c  add x0,sp,#0x110
71038ca840  add x2,sp,#0x120
71038ca844  add x3,sp,#0x3e0
71038ca848  mov x1,x21
71038ca84c  bl 0x71038b3960
71038ca850  ldrb w8,[sp, #0x120]
71038ca854  tbz w8,#0x0,0x71038ca878
71038ca858  adrp x8,0x71052a8000
71038ca85c  ldr x23,[sp, #0x130]
71038ca860  ldr x8,[x8, #0xa70]
71038ca864  cbz x8,0x71038ca870
71038ca868  mov x0,x23
71038ca86c  bl 0x71039c19b0
71038ca870  mov x0,x23
71038ca874  bl 0x710392eb40
71038ca878  orr w8,wzr,#0x1c
71038ca87c  strb w8,[sp, #0x120]
71038ca880  ldr x8,[sp, #0xb0]
71038ca884  add x9,sp,#0x28
71038ca888  str xzr,[sp, #0x130]
71038ca88c  stur x8,[x9, #0xff]
71038ca890  ldr x8,[sp, #0x18]
71038ca894  add x9,sp,#0x22
71038ca898  stur x8,[x9, #0xff]
71038ca89c  ldr x8,[sp, #0xb8]
71038ca8a0  strb wzr,[sp, #0x12f]
71038ca8a4  str x8,[sp, #0x3e8]
71038ca8a8  ldr x8,[x8, #0x8]
71038ca8ac  str x8,[sp, #0x3f0]
71038ca8b0  ldr x8,[x8]
71038ca8b4  str x8,[sp, #0x3f8]
71038ca8b8  str x25,[sp, #0x3e0]
71038ca8bc  add x0,sp,#0x108
71038ca8c0  add x2,sp,#0x120
71038ca8c4  add x3,sp,#0x3e0
71038ca8c8  mov x1,x21
71038ca8cc  bl 0x71038b3960
71038ca8d0  ldrb w8,[sp, #0x120]
71038ca8d4  tbz w8,#0x0,0x71038ca8f8
71038ca8d8  adrp x8,0x71052a8000
71038ca8dc  ldr x23,[sp, #0x130]
71038ca8e0  ldr x8,[x8, #0xa70]
71038ca8e4  cbz x8,0x71038ca8f0
71038ca8e8  mov x0,x23
71038ca8ec  bl 0x71039c19b0
71038ca8f0  mov x0,x23
71038ca8f4  bl 0x710392eb40
71038ca8f8  sub x0,x29,#0x60
71038ca8fc  mov w1,#0x10
71038ca900  mov w2,#0x20
71038ca904  stp xzr,xzr,[sp, #0x128]
71038ca908  str xzr,[sp, #0x120]
71038ca90c  bl 0x710392e1f0
71038ca910  cmp w0,#0xc
71038ca914  b.ne 0x71038ca950
71038ca918  adrp x8,0x710593d000
71038ca91c  ldr x0,[x8, #0x2b0]
71038ca920  cbz x0,0x71038ca950
71038ca924  mov w8,#0x20
71038ca928  str x8,[sp, #0x3e0]
71038ca92c  ldr x8,[x0]
71038ca930  ldr x8,[x8, #0x30]
71038ca934  add x1,sp,#0x3e0
71038ca938  blr x8
71038ca93c  tbz w0,#0x0,0x71038ca950
71038ca940  sub x0,x29,#0x60
71038ca944  mov w1,#0x10
71038ca948  mov w2,#0x20
71038ca94c  bl 0x710392e1f0
71038ca950  cbz x27,0x71038ca964
71038ca954  ldur x2,[x29, #-0x60]
71038ca958  mov w0,#0x20
71038ca95c  mov w1,#0x10
71038ca960  bl 0x71039c19e0
71038ca964  ldur x8,[x29, #-0x60]
71038ca968  mov w9,#0x21
71038ca96c  str x9,[sp, #0x120]
71038ca970  orr w9,wzr,#0x18
71038ca974  stp x9,x8,[sp, #0x128]
71038ca978  ldr x9,[sp]
71038ca97c  str x9,[x8, #0x10]
71038ca980  ldr x9,[sp, #0x10]
71038ca984  str x9,[x8]
71038ca988  ldr x9,[sp, #0x8]
71038ca98c  str x9,[x8, #0x8]
71038ca990  strb wzr,[x8, #0x18]
71038ca994  str x20,[sp, #0x3e8]
71038ca998  ldr x8,[x20, #0x8]
71038ca99c  str x8,[sp, #0x3f0]
71038ca9a0  ldr x8,[x8]
71038ca9a4  str x8,[sp, #0x3f8]
71038ca9a8  str x25,[sp, #0x3e0]
71038ca9ac  add x0,sp,#0x100
71038ca9b0  add x2,sp,#0x120
71038ca9b4  add x3,sp,#0x3e0
71038ca9b8  mov x1,x21
71038ca9bc  bl 0x71038b3960
71038ca9c0  ldrb w8,[sp, #0x120]
71038ca9c4  ldr x19,[sp, #0xf8]
71038ca9c8  ldr x25,[sp, #0xd0]
71038ca9cc  tbz w8,#0x0,0x71038ca9f0
71038ca9d0  adrp x8,0x71052a8000
71038ca9d4  ldr x21,[sp, #0x130]
71038ca9d8  ldr x8,[x8, #0xa70]
71038ca9dc  cbz x8,0x71038ca9e8
71038ca9e0  mov x0,x21
71038ca9e4  bl 0x71039c19b0
71038ca9e8  mov x0,x21
71038ca9ec  bl 0x710392eb40
71038ca9f0  str x22,[sp, #0x3e8]
71038ca9f4  ldr x8,[x22, #0x8]
71038ca9f8  adrp x23,0x7106d43000
71038ca9fc  add x23,x23,#0x190
71038caa00  ldp x9,x10,[x23]
71038caa04  adrp x21,0x7104f61000
71038caa08  add x21,x21,#0xe18
71038caa0c  str x8,[sp, #0x3f0]
71038caa10  ldr x11,[x8]
71038caa14  cmp x9,x10
71038caa18  str x21,[sp, #0x3e0]
71038caa1c  str x11,[sp, #0x3f8]
71038caa20  b.cs 0x71038caa6c
71038caa24  mov x10,x9
71038caa28  str xzr,[x10, #0x8]!
71038caa2c  stp xzr,xzr,[x9, #0x10]
71038caa30  str x21,[x9]
71038caa34  cbz x8,0x71038caaec
71038caa38  ldr x12,[x8]
71038caa3c  cmp x12,x11
71038caa40  b.ne 0x71038caaec
71038caa44  add x8,sp,#0x3e0
71038caa48  add x8,x8,#0x8
71038caa4c  str xzr,[x8]
71038caa50  stp xzr,xzr,[x8, #0x8]
71038caa54  str x22,[x10]
71038caa58  cbz x22,0x71038caadc
71038caa5c  ldr x8,[x22, #0x8]
71038caa60  str x8,[x9, #0x10]
71038caa64  ldr x10,[x8]
71038caa68  b 0x71038caae4
71038caa6c  add x0,sp,#0x3e0
71038caa70  bl 0x71038cc050
71038caa74  ldr x8,[sp, #0x3f0]
71038caa78  str x21,[sp, #0x3e0]
71038caa7c  cbnz x8,0x71038cab04
71038caa80  b 0x71038cab28
71038caa84  str x21,[x24, #0x18]
71038caa88  ldrb w8,[sp, #0x3e0]
71038caa8c  tbnz w8,#0x0,0x71038c9e50
71038caa90  b 0x71038c9e70
71038caa94  ldr x8,[x24, #0x38]
71038caa98  ldr x9,[x7]
71038caa9c  ldrb w10,[x7, #0x8]
71038caaa0  strb w10,[x8, #0x8]
71038caaa4  str x9,[x8]
71038caaa8  strb wzr,[x8, #0x9]
71038caaac  ldrb w8,[x0]
71038caab0  tbnz w8,#0x0,0x71038caac8
71038caab4  mov w8,#0x12
71038caab8  strb w8,[x0]
71038caabc  ldrb w8,[sp, #0x3e0]
71038caac0  tbnz w8,#0x0,0x71038c9ef0
71038caac4  b 0x71038c9f10
71038caac8  mov w8,#0x9
71038caacc  str x8,[x24, #0x30]
71038caad0  ldrb w8,[sp, #0x3e0]
71038caad4  tbnz w8,#0x0,0x71038c9ef0
71038caad8  b 0x71038c9f10
71038caadc  mov x10,xzr
71038caae0  str xzr,[x9, #0x10]
71038caae4  mov x8,xzr
71038caae8  str x10,[x9, #0x18]
71038caaec  adrp x9,0x7106d43000
71038caaf0  ldr x10,[x9, #0x190]
71038caaf4  add x10,x10,#0x20
71038caaf8  str x10,[x9, #0x190]
71038caafc  str x21,[sp, #0x3e0]
71038cab00  cbz x8,0x71038cab28
71038cab04  ldr x8,[x8]
71038cab08  ldr x9,[sp, #0x3f8]
71038cab0c  cmp x8,x9
71038cab10  b.ne 0x71038cab28
71038cab14  ldr x0,[sp, #0x3e8]
71038cab18  cbz x0,0x71038cab28
71038cab1c  ldr x8,[x0]
71038cab20  ldr x8,[x8, #0x8]
71038cab24  blr x8
71038cab28  str x19,[sp, #0x3e8]
71038cab2c  ldr x8,[x19, #0x8]
71038cab30  str x8,[sp, #0x3f0]
71038cab34  ldp x9,x11,[x23]
71038cab38  cmp x9,x11
71038cab3c  ldr x10,[x8]
71038cab40  str x10,[sp, #0x3f8]
71038cab44  str x21,[sp, #0x3e0]
71038cab48  b.cs 0x71038cab94
71038cab4c  mov x11,x9
71038cab50  str xzr,[x11, #0x8]!
71038cab54  stp xzr,xzr,[x9, #0x10]
71038cab58  str x21,[x9]
71038cab5c  cbz x8,0x71038cabbc
71038cab60  ldr x12,[x8]
71038cab64  cmp x12,x10
71038cab68  b.ne 0x71038cabbc
71038cab6c  add x8,sp,#0x3e0
71038cab70  add x8,x8,#0x8
71038cab74  str xzr,[x8]
71038cab78  stp xzr,xzr,[x8, #0x8]
71038cab7c  str x19,[x11]
71038cab80  cbz x19,0x71038cabac
71038cab84  ldr x8,[x19, #0x8]
71038cab88  str x8,[x9, #0x10]
71038cab8c  ldr x10,[x8]
71038cab90  b 0x71038cabb4
71038cab94  add x0,sp,#0x3e0
71038cab98  bl 0x71038cc050
71038cab9c  ldr x8,[sp, #0x3f0]
71038caba0  str x21,[sp, #0x3e0]
71038caba4  cbnz x8,0x71038cabd4
71038caba8  b 0x71038cabf8
71038cabac  mov x10,xzr
71038cabb0  str xzr,[x9, #0x10]
71038cabb4  mov x8,xzr
71038cabb8  str x10,[x9, #0x18]
71038cabbc  adrp x9,0x7106d43000
71038cabc0  ldr x10,[x9, #0x190]
71038cabc4  add x10,x10,#0x20
71038cabc8  str x10,[x9, #0x190]
71038cabcc  str x21,[sp, #0x3e0]
71038cabd0  cbz x8,0x71038cabf8
71038cabd4  ldr x8,[x8]
71038cabd8  ldr x9,[sp, #0x3f8]
71038cabdc  cmp x8,x9
71038cabe0  b.ne 0x71038cabf8
71038cabe4  ldr x0,[sp, #0x3e8]
71038cabe8  cbz x0,0x71038cabf8
71038cabec  ldr x8,[x0]
71038cabf0  ldr x8,[x8, #0x8]
71038cabf4  blr x8
71038cabf8  str x25,[sp, #0x3e8]
71038cabfc  ldr x8,[x25, #0x8]
71038cac00  str x8,[sp, #0x3f0]
71038cac04  ldp x9,x11,[x23]
71038cac08  cmp x9,x11
71038cac0c  ldr x10,[x8]
71038cac10  str x10,[sp, #0x3f8]
71038cac14  str x21,[sp, #0x3e0]
71038cac18  b.cs 0x71038cac64
71038cac1c  mov x11,x9
71038cac20  str xzr,[x11, #0x8]!
71038cac24  stp xzr,xzr,[x9, #0x10]
71038cac28  str x21,[x9]
71038cac2c  cbz x8,0x71038cac8c
71038cac30  ldr x12,[x8]
71038cac34  cmp x12,x10
71038cac38  b.ne 0x71038cac8c
71038cac3c  add x8,sp,#0x3e0
71038cac40  add x8,x8,#0x8
71038cac44  str xzr,[x8]
71038cac48  stp xzr,xzr,[x8, #0x8]
71038cac4c  str x25,[x11]
71038cac50  cbz x25,0x71038cac7c
71038cac54  ldr x8,[x25, #0x8]
71038cac58  str x8,[x9, #0x10]
71038cac5c  ldr x10,[x8]
71038cac60  b 0x71038cac84
71038cac64  add x0,sp,#0x3e0
71038cac68  bl 0x71038cc050
71038cac6c  ldr x8,[sp, #0x3f0]
71038cac70  str x21,[sp, #0x3e0]
71038cac74  cbnz x8,0x71038caca4
71038cac78  b 0x71038cacc8
71038cac7c  mov x10,xzr
71038cac80  str xzr,[x9, #0x10]
71038cac84  mov x8,xzr
71038cac88  str x10,[x9, #0x18]
71038cac8c  adrp x9,0x7106d43000
71038cac90  ldr x10,[x9, #0x190]
71038cac94  add x10,x10,#0x20
71038cac98  str x10,[x9, #0x190]
71038cac9c  str x21,[sp, #0x3e0]
71038caca0  cbz x8,0x71038cacc8
71038caca4  ldr x8,[x8]
71038caca8  ldr x9,[sp, #0x3f8]
71038cacac  cmp x8,x9
71038cacb0  b.ne 0x71038cacc8
71038cacb4  ldr x0,[sp, #0x3e8]
71038cacb8  cbz x0,0x71038cacc8
71038cacbc  ldr x8,[x0]
71038cacc0  ldr x8,[x8, #0x8]
71038cacc4  blr x8
71038cacc8  str x26,[sp, #0x3e8]
71038caccc  ldr x8,[x26, #0x8]
71038cacd0  str x8,[sp, #0x3f0]
71038cacd4  ldp x9,x11,[x23]
71038cacd8  cmp x9,x11
71038cacdc  ldr x10,[x8]
71038cace0  str x10,[sp, #0x3f8]
71038cace4  str x21,[sp, #0x3e0]
71038cace8  b.cs 0x71038cad34
71038cacec  mov x11,x9
71038cacf0  str xzr,[x11, #0x8]!
71038cacf4  stp xzr,xzr,[x9, #0x10]
71038cacf8  str x21,[x9]
71038cacfc  cbz x8,0x71038cad5c
71038cad00  ldr x12,[x8]
71038cad04  cmp x12,x10
71038cad08  b.ne 0x71038cad5c
71038cad0c  add x8,sp,#0x3e0
71038cad10  add x8,x8,#0x8
71038cad14  str xzr,[x8]
71038cad18  stp xzr,xzr,[x8, #0x8]
71038cad1c  str x26,[x11]
71038cad20  cbz x26,0x71038cad4c
71038cad24  ldr x8,[x26, #0x8]
71038cad28  str x8,[x9, #0x10]
71038cad2c  ldr x10,[x8]
71038cad30  b 0x71038cad54
71038cad34  add x0,sp,#0x3e0
71038cad38  bl 0x71038cc050
71038cad3c  ldr x8,[sp, #0x3f0]
71038cad40  str x21,[sp, #0x3e0]
71038cad44  cbnz x8,0x71038cad74
71038cad48  b 0x71038cad98
71038cad4c  mov x10,xzr
71038cad50  str xzr,[x9, #0x10]
71038cad54  mov x8,xzr
71038cad58  str x10,[x9, #0x18]
71038cad5c  adrp x9,0x7106d43000
71038cad60  ldr x10,[x9, #0x190]
71038cad64  add x10,x10,#0x20
71038cad68  str x10,[x9, #0x190]
71038cad6c  str x21,[sp, #0x3e0]
71038cad70  cbz x8,0x71038cad98
71038cad74  ldr x8,[x8]
71038cad78  ldr x9,[sp, #0x3f8]
71038cad7c  cmp x8,x9
71038cad80  b.ne 0x71038cad98
71038cad84  ldr x0,[sp, #0x3e8]
71038cad88  cbz x0,0x71038cad98
71038cad8c  ldr x8,[x0]
71038cad90  ldr x8,[x8, #0x8]
71038cad94  blr x8
71038cad98  str x24,[sp, #0x3e8]
71038cad9c  ldr x8,[x24, #0x8]
71038cada0  str x8,[sp, #0x3f0]
71038cada4  ldp x9,x11,[x23]
71038cada8  cmp x9,x11
71038cadac  ldr x10,[x8]
71038cadb0  str x10,[sp, #0x3f8]
71038cadb4  str x21,[sp, #0x3e0]
71038cadb8  b.cs 0x71038cae10
71038cadbc  stp xzr,xzr,[x9, #0x10]
71038cadc0  stp x21,xzr,[x9]
71038cadc4  cbz x8,0x71038cadfc
71038cadc8  ldr x11,[x8]
71038cadcc  cmp x11,x10
71038cadd0  b.ne 0x71038cadfc
71038cadd4  add x10,sp,#0x3e0
71038cadd8  add x10,x10,#0x8
71038caddc  str xzr,[x10]
71038cade0  stp xzr,xzr,[x10, #0x8]
71038cade4  str x24,[x9, #0x8]
71038cade8  ldr x10,[x24, #0x8]
71038cadec  str x10,[x9, #0x10]
71038cadf0  ldr x10,[x10]
71038cadf4  mov x8,xzr
71038cadf8  str x10,[x9, #0x18]
71038cadfc  adrp x9,0x7106d43000
71038cae00  ldr x10,[x9, #0x190]
71038cae04  add x10,x10,#0x20
71038cae08  str x10,[x9, #0x190]
71038cae0c  b 0x71038cae1c
71038cae10  add x0,sp,#0x3e0
71038cae14  bl 0x71038cc050
71038cae18  ldr x8,[sp, #0x3f0]
71038cae1c  ldp x24,x23,[sp, #0x98]
71038cae20  str x21,[sp, #0x3e0]
71038cae24  cbz x8,0x71038cae4c
71038cae28  ldr x8,[x8]
71038cae2c  ldr x9,[sp, #0x3f8]
71038cae30  cmp x8,x9
71038cae34  b.ne 0x71038cae4c
71038cae38  ldr x0,[sp, #0x3e8]
71038cae3c  cbz x0,0x71038cae4c
71038cae40  ldr x8,[x0]
71038cae44  ldr x8,[x8, #0x8]
71038cae48  blr x8
71038cae4c  adrp x22,0x7105290000
71038cae50  add x22,x22,#0xe78
71038cae54  str x22,[sp, #0x3e0]
71038cae58  str x28,[sp, #0x3e8]
71038cae5c  cbz x28,0x71038cae6c
71038cae60  ldr x8,[x28, #0x8]
71038cae64  ldr x10,[x8]
71038cae68  b 0x71038cae74
71038cae6c  mov x8,xzr
71038cae70  mov x10,xzr
71038cae74  adrp x21,0x7106d43000
71038cae78  add x21,x21,#0x1a8
71038cae7c  adrp x19,0x710523c000
71038cae80  add x19,x19,#0xb00
71038cae84  ldp x9,x11,[x21]
71038cae88  cmp x9,x11
71038cae8c  str x8,[sp, #0x3f0]
71038cae90  str x10,[sp, #0x3f8]
71038cae94  str x19,[sp, #0x3e0]
71038cae98  b.cs 0x71038caee4
71038cae9c  mov x11,x9
71038caea0  str xzr,[x11, #0x8]!
71038caea4  stp xzr,xzr,[x9, #0x10]
71038caea8  str x19,[x9]
71038caeac  cbz x8,0x71038caf0c
71038caeb0  ldr x12,[x8]
71038caeb4  cmp x12,x10
71038caeb8  b.ne 0x71038caf0c
71038caebc  add x8,sp,#0x3e0
71038caec0  add x8,x8,#0x8
71038caec4  str xzr,[x8]
71038caec8  stp xzr,xzr,[x8, #0x8]
71038caecc  str x28,[x11]
71038caed0  cbz x28,0x71038caefc
71038caed4  ldr x8,[x28, #0x8]
71038caed8  str x8,[x9, #0x10]
71038caedc  ldr x10,[x8]
71038caee0  b 0x71038caf04
71038caee4  add x0,sp,#0x3e0
71038caee8  bl 0x71038cc2b0
71038caeec  ldr x8,[sp, #0x3f0]
71038caef0  str x19,[sp, #0x3e0]
71038caef4  cbnz x8,0x71038caf24
71038caef8  b 0x71038caf48
71038caefc  mov x10,xzr
71038caf00  str xzr,[x9, #0x10]
71038caf04  mov x8,xzr
71038caf08  str x10,[x9, #0x18]
71038caf0c  adrp x9,0x7106d43000
71038caf10  ldr x10,[x9, #0x1a8]
71038caf14  add x10,x10,#0x20
71038caf18  str x10,[x9, #0x1a8]
71038caf1c  str x19,[sp, #0x3e0]
71038caf20  cbz x8,0x71038caf48
71038caf24  ldr x8,[x8]
71038caf28  ldr x9,[sp, #0x3f8]
71038caf2c  cmp x8,x9
71038caf30  b.ne 0x71038caf48
71038caf34  ldr x0,[sp, #0x3e8]
71038caf38  cbz x0,0x71038caf48
71038caf3c  ldr x8,[x0]
71038caf40  ldr x8,[x8, #0x8]
71038caf44  blr x8
71038caf48  str x22,[sp, #0x3e0]
71038caf4c  str x23,[sp, #0x3e8]
71038caf50  cbz x23,0x71038caf60
71038caf54  ldr x8,[x23, #0x8]
71038caf58  ldr x10,[x8]
71038caf5c  b 0x71038caf68
71038caf60  mov x8,xzr
71038caf64  mov x10,xzr
71038caf68  ldp x9,x11,[x21]
71038caf6c  cmp x9,x11
71038caf70  str x8,[sp, #0x3f0]
71038caf74  str x10,[sp, #0x3f8]
71038caf78  str x19,[sp, #0x3e0]
71038caf7c  b.cs 0x71038cafc8
71038caf80  mov x11,x9
71038caf84  str xzr,[x11, #0x8]!
71038caf88  stp xzr,xzr,[x9, #0x10]
71038caf8c  str x19,[x9]
71038caf90  cbz x8,0x71038caff0
71038caf94  ldr x12,[x8]
71038caf98  cmp x12,x10
71038caf9c  b.ne 0x71038caff0
71038cafa0  add x8,sp,#0x3e0
71038cafa4  add x8,x8,#0x8
71038cafa8  str xzr,[x8]
71038cafac  stp xzr,xzr,[x8, #0x8]
71038cafb0  str x23,[x11]
71038cafb4  cbz x23,0x71038cafe0
71038cafb8  ldr x8,[x23, #0x8]
71038cafbc  str x8,[x9, #0x10]
71038cafc0  ldr x10,[x8]
71038cafc4  b 0x71038cafe8
71038cafc8  add x0,sp,#0x3e0
71038cafcc  bl 0x71038cc2b0
71038cafd0  ldr x8,[sp, #0x3f0]
71038cafd4  str x19,[sp, #0x3e0]
71038cafd8  cbnz x8,0x71038cb008
71038cafdc  b 0x71038cb02c
71038cafe0  mov x10,xzr
71038cafe4  str xzr,[x9, #0x10]
71038cafe8  mov x8,xzr
71038cafec  str x10,[x9, #0x18]
71038caff0  adrp x9,0x7106d43000
71038caff4  ldr x10,[x9, #0x1a8]
71038caff8  add x10,x10,#0x20
71038caffc  str x10,[x9, #0x1a8]
71038cb000  str x19,[sp, #0x3e0]
71038cb004  cbz x8,0x71038cb02c
71038cb008  ldr x8,[x8]
71038cb00c  ldr x9,[sp, #0x3f8]
71038cb010  cmp x8,x9
71038cb014  b.ne 0x71038cb02c
71038cb018  ldr x0,[sp, #0x3e8]
71038cb01c  cbz x0,0x71038cb02c
71038cb020  ldr x8,[x0]
71038cb024  ldr x8,[x8, #0x8]
71038cb028  blr x8
71038cb02c  str x24,[sp, #0x3e8]
71038cb030  ldr x8,[x24, #0x8]
71038cb034  str x8,[sp, #0x3f0]
71038cb038  ldp x9,x11,[x21]
71038cb03c  cmp x9,x11
71038cb040  ldr x10,[x8]
71038cb044  str x10,[sp, #0x3f8]
71038cb048  str x19,[sp, #0x3e0]
71038cb04c  b.cs 0x71038cb098
71038cb050  mov x11,x9
71038cb054  str xzr,[x11, #0x8]!
71038cb058  stp xzr,xzr,[x9, #0x10]
71038cb05c  str x19,[x9]
71038cb060  cbz x8,0x71038cb0b8
71038cb064  ldr x12,[x8]
71038cb068  cmp x12,x10
71038cb06c  b.ne 0x71038cb0b8
71038cb070  add x8,sp,#0x3e0
71038cb074  add x8,x8,#0x8
71038cb078  str xzr,[x8]
71038cb07c  stp xzr,xzr,[x8, #0x8]
71038cb080  str x24,[x11]
71038cb084  cbz x24,0x71038cb0a8
71038cb088  ldr x8,[x24, #0x8]
71038cb08c  str x8,[x9, #0x10]
71038cb090  ldr x10,[x8]
71038cb094  b 0x71038cb0b0
71038cb098  add x0,sp,#0x3e0
71038cb09c  bl 0x71038cc2b0
71038cb0a0  ldr x8,[sp, #0x3f0]
71038cb0a4  b 0x71038cb0c8
71038cb0a8  mov x10,xzr
71038cb0ac  str xzr,[x9, #0x10]
71038cb0b0  mov x8,xzr
71038cb0b4  str x10,[x9, #0x18]
71038cb0b8  adrp x9,0x7106d43000
71038cb0bc  ldr x10,[x9, #0x1a8]
71038cb0c0  add x10,x10,#0x20
71038cb0c4  str x10,[x9, #0x1a8]
71038cb0c8  ldr x22,[sp, #0xb8]
71038cb0cc  str x19,[sp, #0x3e0]
71038cb0d0  cbz x8,0x71038cb0f8
71038cb0d4  ldr x8,[x8]
71038cb0d8  ldr x9,[sp, #0x3f8]
71038cb0dc  cmp x8,x9
71038cb0e0  b.ne 0x71038cb0f8
71038cb0e4  ldr x0,[sp, #0x3e8]
71038cb0e8  cbz x0,0x71038cb0f8
71038cb0ec  ldr x8,[x0]
71038cb0f0  ldr x8,[x8, #0x8]
71038cb0f4  blr x8
71038cb0f8  str x22,[sp, #0x3e8]
71038cb0fc  ldr x8,[x22, #0x8]
71038cb100  str x8,[sp, #0x3f0]
71038cb104  ldp x9,x11,[x21]
71038cb108  cmp x9,x11
71038cb10c  ldr x10,[x8]
71038cb110  str x10,[sp, #0x3f8]
71038cb114  str x19,[sp, #0x3e0]
71038cb118  b.cs 0x71038cb164
71038cb11c  mov x11,x9
71038cb120  str xzr,[x11, #0x8]!
71038cb124  stp xzr,xzr,[x9, #0x10]
71038cb128  str x19,[x9]
71038cb12c  cbz x8,0x71038cb18c
71038cb130  ldr x12,[x8]
71038cb134  cmp x12,x10
71038cb138  b.ne 0x71038cb18c
71038cb13c  add x8,sp,#0x3e0
71038cb140  add x8,x8,#0x8
71038cb144  str xzr,[x8]
71038cb148  stp xzr,xzr,[x8, #0x8]
71038cb14c  str x22,[x11]
71038cb150  cbz x22,0x71038cb17c
71038cb154  ldr x8,[x22, #0x8]
71038cb158  str x8,[x9, #0x10]
71038cb15c  ldr x10,[x8]
71038cb160  b 0x71038cb184
71038cb164  add x0,sp,#0x3e0
71038cb168  bl 0x71038cc2b0
71038cb16c  ldr x8,[sp, #0x3f0]
71038cb170  str x19,[sp, #0x3e0]
71038cb174  cbnz x8,0x71038cb1a4
71038cb178  b 0x71038cb1c8
71038cb17c  mov x10,xzr
71038cb180  str xzr,[x9, #0x10]
71038cb184  mov x8,xzr
71038cb188  str x10,[x9, #0x18]
71038cb18c  adrp x9,0x7106d43000
71038cb190  ldr x10,[x9, #0x1a8]
71038cb194  add x10,x10,#0x20
71038cb198  str x10,[x9, #0x1a8]
71038cb19c  str x19,[sp, #0x3e0]
71038cb1a0  cbz x8,0x71038cb1c8
71038cb1a4  ldr x8,[x8]
71038cb1a8  ldr x9,[sp, #0x3f8]
71038cb1ac  cmp x8,x9
71038cb1b0  b.ne 0x71038cb1c8
71038cb1b4  ldr x0,[sp, #0x3e8]
71038cb1b8  cbz x0,0x71038cb1c8
71038cb1bc  ldr x8,[x0]
71038cb1c0  ldr x8,[x8, #0x8]
71038cb1c4  blr x8
71038cb1c8  str x20,[sp, #0x3e8]
71038cb1cc  ldr x8,[x20, #0x8]
71038cb1d0  str x8,[sp, #0x3f0]
71038cb1d4  ldp x9,x11,[x21]
71038cb1d8  cmp x9,x11
71038cb1dc  ldr x10,[x8]
71038cb1e0  str x10,[sp, #0x3f8]
71038cb1e4  str x19,[sp, #0x3e0]
71038cb1e8  b.cs 0x71038cb248
71038cb1ec  stp xzr,xzr,[x9, #0x10]
71038cb1f0  stp x19,xzr,[x9]
71038cb1f4  cbz x8,0x71038cb22c
71038cb1f8  ldr x11,[x8]
71038cb1fc  cmp x11,x10
71038cb200  b.ne 0x71038cb22c
71038cb204  add x10,sp,#0x3e0
71038cb208  add x10,x10,#0x8
71038cb20c  str xzr,[x10]
71038cb210  stp xzr,xzr,[x10, #0x8]
71038cb214  str x20,[x9, #0x8]
71038cb218  ldr x10,[x20, #0x8]
71038cb21c  str x10,[x9, #0x10]
71038cb220  ldr x10,[x10]
71038cb224  mov x8,xzr
71038cb228  str x10,[x9, #0x18]
71038cb22c  adrp x9,0x7106d43000
71038cb230  ldr x10,[x9, #0x1a8]
71038cb234  add x10,x10,#0x20
71038cb238  str x10,[x9, #0x1a8]
71038cb23c  str x19,[sp, #0x3e0]
71038cb240  cbnz x8,0x71038cb25c
71038cb244  b 0x71038cb280
71038cb248  add x0,sp,#0x3e0
71038cb24c  bl 0x71038cc2b0
71038cb250  ldr x8,[sp, #0x3f0]
71038cb254  str x19,[sp, #0x3e0]
71038cb258  cbz x8,0x71038cb280
71038cb25c  ldr x8,[x8]
71038cb260  ldr x9,[sp, #0x3f8]
71038cb264  cmp x8,x9
71038cb268  b.ne 0x71038cb280
71038cb26c  ldr x0,[sp, #0x3e8]
71038cb270  cbz x0,0x71038cb280
71038cb274  ldr x8,[x0]
71038cb278  ldr x8,[x8, #0x8]
71038cb27c  blr x8
71038cb280  add sp,sp,#0x4d0
71038cb284  ldp x29,x30,[sp, #0x50]
71038cb288  ldp x20,x19,[sp, #0x40]
71038cb28c  ldp x22,x21,[sp, #0x30]
71038cb290  ldp x24,x23,[sp, #0x20]
71038cb294  ldp x26,x25,[sp, #0x10]
71038cb298  ldp x28,x27,[sp], #0x60
71038cb29c  ret
71038cb2a0  ldrb w8,[sp, #0x3e0]
71038cb2a4  mov x22,x0
71038cb2a8  tbz w8,#0x0,0x71038cbfc8
71038cb2ac  adrp x8,0x71052a8000
71038cb2b0  ldr x19,[sp, #0x3f0]
71038cb2b4  ldr x8,[x8, #0xa70]
71038cb2b8  cbz x8,0x71038cbe10
71038cb2bc  mov x0,x19
71038cb2c0  bl 0x71039c19b0
71038cb2c4  b 0x71038cbe10
71038cb2c8  bl 0x71037b2bc0
71038cb2cc  ldrb w8,[sp, #0x3e0]
71038cb2d0  mov x22,x0
71038cb2d4  tbz w8,#0x0,0x71038cbfc8
71038cb2d8  adrp x8,0x71052a8000
71038cb2dc  ldr x19,[sp, #0x3f0]
71038cb2e0  ldr x8,[x8, #0xa70]
71038cb2e4  cbz x8,0x71038cbe10
71038cb2e8  mov x0,x19
71038cb2ec  bl 0x71039c19b0
71038cb2f0  b 0x71038cbe10
71038cb2f4  bl 0x71037b2bc0
71038cb2f8  ldrb w8,[sp, #0x3e0]
71038cb2fc  mov x22,x0
71038cb300  tbz w8,#0x0,0x71038cbfc8
71038cb304  adrp x8,0x71052a8000
71038cb308  ldr x19,[sp, #0x3f0]
71038cb30c  ldr x8,[x8, #0xa70]
71038cb310  cbz x8,0x71038cbe10
71038cb314  mov x0,x19
71038cb318  bl 0x71039c19b0
71038cb31c  b 0x71038cbe10
71038cb320  bl 0x71037b2bc0
71038cb324  ldrb w8,[sp, #0x3e0]
71038cb328  mov x22,x0
71038cb32c  tbz w8,#0x0,0x71038cbfc8
71038cb330  adrp x8,0x71052a8000
71038cb334  ldr x19,[sp, #0x3f0]
71038cb338  ldr x8,[x8, #0xa70]
71038cb33c  cbz x8,0x71038cbe10
71038cb340  mov x0,x19
71038cb344  bl 0x71039c19b0
71038cb348  b 0x71038cbe10
71038cb34c  bl 0x71037b2bc0
71038cb350  ldrb w8,[sp, #0x3e0]
71038cb354  mov x22,x0
71038cb358  tbz w8,#0x0,0x71038cbfc8
71038cb35c  adrp x8,0x71052a8000
71038cb360  ldr x19,[sp, #0x3f0]
71038cb364  ldr x8,[x8, #0xa70]
71038cb368  cbz x8,0x71038cbe10
71038cb36c  mov x0,x19
71038cb370  bl 0x71039c19b0
71038cb374  b 0x71038cbe10
71038cb378  bl 0x71037b2bc0
71038cb37c  ldrb w8,[sp, #0x3e0]
71038cb380  mov x22,x0
71038cb384  tbz w8,#0x0,0x71038cbfc8
71038cb388  adrp x8,0x71052a8000
71038cb38c  ldr x19,[sp, #0x3f0]
71038cb390  ldr x8,[x8, #0xa70]
71038cb394  cbz x8,0x71038cbe10
71038cb398  mov x0,x19
71038cb39c  bl 0x71039c19b0
71038cb3a0  b 0x71038cbe10
71038cb3a4  bl 0x71037b2bc0
71038cb3a8  ldrb w8,[sp, #0x3e0]
71038cb3ac  mov x22,x0
71038cb3b0  tbz w8,#0x0,0x71038cbfc8
71038cb3b4  adrp x8,0x71052a8000
71038cb3b8  ldr x19,[sp, #0x3f0]
71038cb3bc  ldr x8,[x8, #0xa70]
71038cb3c0  cbz x8,0x71038cbe10
71038cb3c4  mov x0,x19
71038cb3c8  bl 0x71039c19b0
71038cb3cc  b 0x71038cbe10
71038cb3d0  bl 0x71037b2bc0
71038cb3d4  bl 0x71037b2bc0
71038cb3d8  bl 0x71037b2bc0
71038cb3dc  bl 0x71037b2bc0
71038cb3e0  bl 0x71037b2bc0
71038cb3e4  bl 0x71037b2bc0
71038cb3e8  bl 0x71037b2bc0
71038cb3ec  bl 0x71037b2bc0
71038cb3f0  bl 0x71037b2bc0
71038cb3f4  bl 0x71037b2bc0
71038cb3f8  bl 0x71037b2bc0
71038cb3fc  bl 0x71037b2bc0
71038cb400  bl 0x71037b2bc0
71038cb404  bl 0x71037b2bc0
71038cb408  bl 0x71037b2bc0
71038cb40c  ldrb w8,[sp, #0x3e0]
71038cb410  mov x22,x0
71038cb414  tbz w8,#0x0,0x71038cbfc8
71038cb418  adrp x8,0x71052a8000
71038cb41c  ldr x19,[sp, #0x3f0]
71038cb420  ldr x8,[x8, #0xa70]
71038cb424  cbz x8,0x71038cbe10
71038cb428  mov x0,x19
71038cb42c  bl 0x71039c19b0
71038cb430  b 0x71038cbe10
71038cb434  bl 0x71037b2bc0
71038cb438  ldrb w8,[sp, #0x3e0]
71038cb43c  mov x22,x0
71038cb440  tbz w8,#0x0,0x71038cbfc8
71038cb444  adrp x8,0x71052a8000
71038cb448  ldr x19,[sp, #0x3f0]
71038cb44c  ldr x8,[x8, #0xa70]
71038cb450  cbz x8,0x71038cbe10
71038cb454  mov x0,x19
71038cb458  bl 0x71039c19b0
71038cb45c  b 0x71038cbe10
71038cb460  bl 0x71037b2bc0
71038cb464  bl 0x71037b2bc0
71038cb468  b 0x71038cb478
71038cb46c  b 0x71038cb478
71038cb470  b 0x71038cb478
71038cb474  b 0x71038cb478
71038cb478  mov x22,x0
71038cb47c  str x19,[sp, #0x3e0]
71038cb480  ldr x8,[sp, #0x3f0]
71038cb484  cbnz x8,0x71038cb4ac
71038cb488  b 0x71038cbfc8
71038cb48c  b 0x71038cb49c
71038cb490  b 0x71038cb49c
71038cb494  b 0x71038cb49c
71038cb498  b 0x71038cb49c
71038cb49c  mov x22,x0
71038cb4a0  str x21,[sp, #0x3e0]
71038cb4a4  ldr x8,[sp, #0x3f0]
71038cb4a8  cbz x8,0x71038cbfc8
71038cb4ac  ldr x8,[x8]
71038cb4b0  ldr x9,[sp, #0x3f8]
71038cb4b4  cmp x8,x9
71038cb4b8  b.ne 0x71038cbfc8
71038cb4bc  ldr x0,[sp, #0x3e8]
71038cb4c0  cbz x0,0x71038cbfc8
71038cb4c4  ldr x8,[x0]
71038cb4c8  ldr x8,[x8, #0x8]
71038cb4cc  blr x8
71038cb4d0  mov x0,x22
71038cb4d4  bl 0x71039c19f0
71038cb4d8  bl 0x71037b2bc0
71038cb4dc  bl 0x71037b2bc0
71038cb4e0  bl 0x71037b2bc0
71038cb4e4  ldrb w8,[sp, #0x3e0]
71038cb4e8  mov x22,x0
71038cb4ec  tbz w8,#0x0,0x71038cbfc8
71038cb4f0  adrp x8,0x71052a8000
71038cb4f4  ldr x19,[sp, #0x3f0]
71038cb4f8  ldr x8,[x8, #0xa70]
71038cb4fc  cbz x8,0x71038cbe10
71038cb500  mov x0,x19
71038cb504  bl 0x71039c19b0
71038cb508  b 0x71038cbe10
71038cb50c  bl 0x71037b2bc0
71038cb510  ldrb w8,[sp, #0x120]
71038cb514  mov x22,x0
71038cb518  tbz w8,#0x0,0x71038cbfc8
71038cb51c  adrp x8,0x71052a8000
71038cb520  ldr x19,[sp, #0x130]
71038cb524  ldr x8,[x8, #0xa70]
71038cb528  cbz x8,0x71038cb5b8
71038cb52c  mov x0,x19
71038cb530  bl 0x71039c19b0
71038cb534  b 0x71038cb5b8
71038cb538  bl 0x71037b2bc0
71038cb53c  ldrb w8,[sp, #0x120]
71038cb540  mov x22,x0
71038cb544  tbz w8,#0x0,0x71038cbfc8
71038cb548  adrp x8,0x71052a8000
71038cb54c  ldr x19,[sp, #0x130]
71038cb550  ldr x8,[x8, #0xa70]
71038cb554  cbz x8,0x71038cb5b8
71038cb558  mov x0,x19
71038cb55c  bl 0x71039c19b0
71038cb560  b 0x71038cb5b8
71038cb564  bl 0x71037b2bc0
71038cb568  ldrb w8,[sp, #0x120]
71038cb56c  mov x22,x0
71038cb570  tbz w8,#0x0,0x71038cbfc8
71038cb574  adrp x8,0x71052a8000
71038cb578  ldr x19,[sp, #0x130]
71038cb57c  ldr x8,[x8, #0xa70]
71038cb580  cbz x8,0x71038cb5b8
71038cb584  mov x0,x19
71038cb588  bl 0x71039c19b0
71038cb58c  b 0x71038cb5b8
71038cb590  bl 0x71037b2bc0
71038cb594  ldrb w8,[sp, #0x120]
71038cb598  mov x22,x0
71038cb59c  tbz w8,#0x0,0x71038cbfc8
71038cb5a0  adrp x8,0x71052a8000
71038cb5a4  ldr x19,[sp, #0x130]
71038cb5a8  ldr x8,[x8, #0xa70]
71038cb5ac  cbz x8,0x71038cb5b8
71038cb5b0  mov x0,x19
71038cb5b4  bl 0x71039c19b0
71038cb5b8  mov x0,x19
71038cb5bc  bl 0x710392eb40
71038cb5c0  mov x0,x22
71038cb5c4  bl 0x71039c19f0
71038cb5c8  bl 0x71037b2bc0
71038cb5cc  ldrb w8,[sp, #0x120]
71038cb5d0  mov x22,x0
71038cb5d4  tbz w8,#0x0,0x71038cbfc8
71038cb5d8  adrp x8,0x71052a8000
71038cb5dc  ldr x19,[sp, #0x130]
71038cb5e0  ldr x8,[x8, #0xa70]
71038cb5e4  cbz x8,0x71038cbe10
71038cb5e8  mov x0,x19
71038cb5ec  bl 0x71039c19b0
71038cb5f0  b 0x71038cbe10
71038cb5f4  bl 0x71037b2bc0
71038cb5f8  bl 0x71039c19f0
71038cb5fc  adrp x8,0x71052a8000
71038cb600  ldr x8,[x8, #0xa70]
71038cb604  mov x22,x0
71038cb608  cbz x8,0x71038cbffc
71038cb60c  mov x0,x20
71038cb610  bl 0x71039c19b0
71038cb614  b 0x71038cbffc
71038cb618  bl 0x71037b2bc0
71038cb61c  ldr x8,[sp, #0x150]
71038cb620  mov x22,x0
71038cb624  str x19,[sp, #0x140]
71038cb628  cbz x8,0x71038cbfc8
71038cb62c  ldr x8,[x8]
71038cb630  ldr x9,[sp, #0x158]
71038cb634  cmp x8,x9
71038cb638  b.ne 0x71038cbfc8
71038cb63c  ldr x0,[sp, #0x148]
71038cb640  cbz x0,0x71038cbfc8
71038cb644  b 0x71038cbfd0
71038cb648  adrp x8,0x71052a8000
71038cb64c  ldr x8,[x8, #0xa70]
71038cb650  mov x22,x0
71038cb654  cbz x8,0x71038cbffc
71038cb658  mov x0,x20
71038cb65c  bl 0x71039c19b0
71038cb660  b 0x71038cbffc
71038cb664  bl 0x71037b2bc0
71038cb668  ldr x8,[sp, #0x170]
71038cb66c  mov x22,x0
71038cb670  str x19,[sp, #0x160]
71038cb674  cbz x8,0x71038cbfc8
71038cb678  ldr x8,[x8]
71038cb67c  ldr x9,[sp, #0x178]
71038cb680  cmp x8,x9
71038cb684  b.ne 0x71038cbfc8
71038cb688  ldr x0,[sp, #0x168]
71038cb68c  cbz x0,0x71038cbfc8
71038cb690  b 0x71038cbfd0
71038cb694  adrp x8,0x71052a8000
71038cb698  ldr x8,[x8, #0xa70]
71038cb69c  mov x22,x0
71038cb6a0  cbz x8,0x71038cbffc
71038cb6a4  mov x0,x20
71038cb6a8  bl 0x71039c19b0
71038cb6ac  b 0x71038cbffc
71038cb6b0  bl 0x71037b2bc0
71038cb6b4  ldr x8,[sp, #0x190]
71038cb6b8  mov x22,x0
71038cb6bc  str x19,[sp, #0x180]
71038cb6c0  cbz x8,0x71038cbfc8
71038cb6c4  ldr x8,[x8]
71038cb6c8  ldr x9,[sp, #0x198]
71038cb6cc  cmp x8,x9
71038cb6d0  b.ne 0x71038cbfc8
71038cb6d4  ldr x0,[sp, #0x188]
71038cb6d8  cbz x0,0x71038cbfc8
71038cb6dc  b 0x71038cbfd0
71038cb6e0  adrp x8,0x71052a8000
71038cb6e4  ldr x8,[x8, #0xa70]
71038cb6e8  mov x22,x0
71038cb6ec  cbz x8,0x71038cbffc
71038cb6f0  mov x0,x20
71038cb6f4  bl 0x71039c19b0
71038cb6f8  b 0x71038cbffc
71038cb6fc  bl 0x71037b2bc0
71038cb700  ldr x8,[sp, #0x1b0]
71038cb704  mov x22,x0
71038cb708  str x19,[sp, #0x1a0]
71038cb70c  cbz x8,0x71038cbfc8
71038cb710  ldr x8,[x8]
71038cb714  ldr x9,[sp, #0x1b8]
71038cb718  cmp x8,x9
71038cb71c  b.ne 0x71038cbfc8
71038cb720  ldr x0,[sp, #0x1a8]
71038cb724  cbz x0,0x71038cbfc8
71038cb728  b 0x71038cbfd0
71038cb72c  adrp x8,0x71052a8000
71038cb730  ldr x8,[x8, #0xa70]
71038cb734  mov x22,x0
71038cb738  cbz x8,0x71038cbffc
71038cb73c  mov x0,x20
71038cb740  bl 0x71039c19b0
71038cb744  b 0x71038cbffc
71038cb748  bl 0x71037b2bc0
71038cb74c  ldr x8,[sp, #0x1d0]
71038cb750  mov x22,x0
71038cb754  str x19,[sp, #0x1c0]
71038cb758  cbz x8,0x71038cbfc8
71038cb75c  ldr x8,[x8]
71038cb760  ldr x9,[sp, #0x1d8]
71038cb764  cmp x8,x9
71038cb768  b.ne 0x71038cbfc8
71038cb76c  ldr x0,[sp, #0x1c8]
71038cb770  cbz x0,0x71038cbfc8
71038cb774  b 0x71038cbfd0
71038cb778  adrp x8,0x71052a8000
71038cb77c  ldr x8,[x8, #0xa70]
71038cb780  mov x22,x0
71038cb784  cbz x8,0x71038cbffc
71038cb788  mov x0,x20
71038cb78c  bl 0x71039c19b0
71038cb790  b 0x71038cbffc
71038cb794  bl 0x71037b2bc0
71038cb798  bl 0x71039c19f0
71038cb79c  bl 0x71039c19f0
71038cb7a0  adrp x8,0x71052a8000
71038cb7a4  ldr x8,[x8, #0xa70]
71038cb7a8  mov x22,x0
71038cb7ac  cbz x8,0x71038cb7b8
71038cb7b0  mov x0,x24
71038cb7b4  bl 0x71039c19b0
71038cb7b8  mov x0,x24
71038cb7bc  bl 0x710392eb40
71038cb7c0  mov x0,x22
71038cb7c4  bl 0x71039c19f0
71038cb7c8  bl 0x71037b2bc0
71038cb7cc  bl 0x71039c19f0
71038cb7d0  adrp x8,0x71052a8000
71038cb7d4  ldr x8,[x8, #0xa70]
71038cb7d8  mov x22,x0
71038cb7dc  cbz x8,0x71038cbe10
71038cb7e0  mov x0,x19
71038cb7e4  bl 0x71039c19b0
71038cb7e8  b 0x71038cbe10
71038cb7ec  bl 0x71037b2bc0
71038cb7f0  ldr x8,[sp, #0x1f0]
71038cb7f4  mov x22,x0
71038cb7f8  str x19,[sp, #0x1e0]
71038cb7fc  cbz x8,0x71038cbfc8
71038cb800  ldr x8,[x8]
71038cb804  ldr x9,[sp, #0x1f8]
71038cb808  cmp x8,x9
71038cb80c  b.ne 0x71038cbfc8
71038cb810  ldr x0,[sp, #0x1e8]
71038cb814  cbz x0,0x71038cbfc8
71038cb818  b 0x71038cbfd0
71038cb81c  adrp x8,0x71052a8000
71038cb820  ldr x8,[x8, #0xa70]
71038cb824  mov x22,x0
71038cb828  cbz x8,0x71038cbffc
71038cb82c  mov x0,x20
71038cb830  bl 0x71039c19b0
71038cb834  b 0x71038cbffc
71038cb838  bl 0x71037b2bc0
71038cb83c  ldr x8,[sp, #0x210]
71038cb840  mov x22,x0
71038cb844  str x19,[sp, #0x200]
71038cb848  cbz x8,0x71038cbfc8
71038cb84c  ldr x8,[x8]
71038cb850  ldr x9,[sp, #0x218]
71038cb854  cmp x8,x9
71038cb858  b.ne 0x71038cbfc8
71038cb85c  ldr x0,[sp, #0x208]
71038cb860  cbz x0,0x71038cbfc8
71038cb864  b 0x71038cbfd0
71038cb868  adrp x8,0x71052a8000
71038cb86c  ldr x8,[x8, #0xa70]
71038cb870  mov x22,x0
71038cb874  cbz x8,0x71038cbffc
71038cb878  mov x0,x20
71038cb87c  bl 0x71039c19b0
71038cb880  b 0x71038cbffc
71038cb884  bl 0x71037b2bc0
71038cb888  ldr x8,[sp, #0x230]
71038cb88c  mov x22,x0
71038cb890  str x19,[sp, #0x220]
71038cb894  cbz x8,0x71038cbfc8
71038cb898  ldr x8,[x8]
71038cb89c  ldr x9,[sp, #0x238]
71038cb8a0  cmp x8,x9
71038cb8a4  b.ne 0x71038cbfc8
71038cb8a8  ldr x0,[sp, #0x228]
71038cb8ac  cbz x0,0x71038cbfc8
71038cb8b0  b 0x71038cbfd0
71038cb8b4  adrp x8,0x71052a8000
71038cb8b8  ldr x8,[x8, #0xa70]
71038cb8bc  mov x22,x0
71038cb8c0  cbz x8,0x71038cbffc
71038cb8c4  mov x0,x20
71038cb8c8  bl 0x71039c19b0
71038cb8cc  b 0x71038cbffc
71038cb8d0  bl 0x71037b2bc0
71038cb8d4  ldr x8,[sp, #0x250]
71038cb8d8  mov x22,x0
71038cb8dc  str x19,[sp, #0x240]
71038cb8e0  cbz x8,0x71038cbfc8
71038cb8e4  ldr x8,[x8]
71038cb8e8  ldr x9,[sp, #0x258]
71038cb8ec  cmp x8,x9
71038cb8f0  b.ne 0x71038cbfc8
71038cb8f4  ldr x0,[sp, #0x248]
71038cb8f8  cbz x0,0x71038cbfc8
71038cb8fc  b 0x71038cbfd0
71038cb900  adrp x8,0x71052a8000
71038cb904  ldr x8,[x8, #0xa70]
71038cb908  mov x22,x0
71038cb90c  cbz x8,0x71038cbffc
71038cb910  mov x0,x20
71038cb914  bl 0x71039c19b0
71038cb918  b 0x71038cbffc
71038cb91c  bl 0x71037b2bc0
71038cb920  ldr x8,[sp, #0x270]
71038cb924  mov x22,x0
71038cb928  str x19,[sp, #0x260]
71038cb92c  cbz x8,0x71038cbfc8
71038cb930  ldr x8,[x8]
71038cb934  ldr x9,[sp, #0x278]
71038cb938  cmp x8,x9
71038cb93c  b.ne 0x71038cbfc8
71038cb940  ldr x0,[sp, #0x268]
71038cb944  cbz x0,0x71038cbfc8
71038cb948  b 0x71038cbfd0
71038cb94c  adrp x8,0x71052a8000
71038cb950  ldr x8,[x8, #0xa70]
71038cb954  mov x22,x0
71038cb958  cbz x8,0x71038cbffc
71038cb95c  mov x0,x20
71038cb960  bl 0x71039c19b0
71038cb964  b 0x71038cbffc
71038cb968  bl 0x71037b2bc0
71038cb96c  ldr x8,[sp, #0x290]
71038cb970  mov x22,x0
71038cb974  str x19,[sp, #0x280]
71038cb978  cbz x8,0x71038cbfc8
71038cb97c  ldr x8,[x8]
71038cb980  ldr x9,[sp, #0x298]
71038cb984  cmp x8,x9
71038cb988  b.ne 0x71038cbfc8
71038cb98c  ldr x0,[sp, #0x288]
71038cb990  cbz x0,0x71038cbfc8
71038cb994  b 0x71038cbfd0
71038cb998  adrp x8,0x71052a8000
71038cb99c  ldr x8,[x8, #0xa70]
71038cb9a0  mov x22,x0
71038cb9a4  cbz x8,0x71038cbffc
71038cb9a8  mov x0,x20
71038cb9ac  bl 0x71039c19b0
71038cb9b0  b 0x71038cbffc
71038cb9b4  bl 0x71037b2bc0
71038cb9b8  bl 0x71039c19f0
71038cb9bc  bl 0x71039c19f0
71038cb9c0  adrp x8,0x71052a8000
71038cb9c4  ldr x8,[x8, #0xa70]
71038cb9c8  mov x22,x0
71038cb9cc  cbz x8,0x71038cb9d8
71038cb9d0  mov x0,x26
71038cb9d4  bl 0x71039c19b0
71038cb9d8  mov x0,x26
71038cb9dc  bl 0x710392eb40
71038cb9e0  mov x0,x22
71038cb9e4  bl 0x71039c19f0
71038cb9e8  bl 0x71037b2bc0
71038cb9ec  bl 0x71039c19f0
71038cb9f0  adrp x8,0x71052a8000
71038cb9f4  ldr x8,[x8, #0xa70]
71038cb9f8  mov x22,x0
71038cb9fc  cbz x8,0x71038cbe10
71038cba00  mov x0,x19
71038cba04  bl 0x71039c19b0
71038cba08  b 0x71038cbe10
71038cba0c  bl 0x71037b2bc0
71038cba10  ldr x8,[sp, #0x2b0]
71038cba14  mov x22,x0
71038cba18  str x19,[sp, #0x2a0]
71038cba1c  cbz x8,0x71038cbfc8
71038cba20  ldr x8,[x8]
71038cba24  ldr x9,[sp, #0x2b8]
71038cba28  cmp x8,x9
71038cba2c  b.ne 0x71038cbfc8
71038cba30  ldr x0,[sp, #0x2a8]
71038cba34  cbz x0,0x71038cbfc8
71038cba38  b 0x71038cbfd0
71038cba3c  adrp x8,0x71052a8000
71038cba40  ldr x8,[x8, #0xa70]
71038cba44  mov x22,x0
71038cba48  cbz x8,0x71038cbffc
71038cba4c  mov x0,x20
71038cba50  bl 0x71039c19b0
71038cba54  b 0x71038cbffc
71038cba58  bl 0x71037b2bc0
71038cba5c  ldr x8,[sp, #0x2d0]
71038cba60  mov x22,x0
71038cba64  str x19,[sp, #0x2c0]
71038cba68  cbz x8,0x71038cbfc8
71038cba6c  ldr x8,[x8]
71038cba70  ldr x9,[sp, #0x2d8]
71038cba74  cmp x8,x9
71038cba78  b.ne 0x71038cbfc8
71038cba7c  ldr x0,[sp, #0x2c8]
71038cba80  cbz x0,0x71038cbfc8
71038cba84  b 0x71038cbfd0
71038cba88  adrp x8,0x71052a8000
71038cba8c  ldr x8,[x8, #0xa70]
71038cba90  mov x22,x0
71038cba94  cbz x8,0x71038cbffc
71038cba98  mov x0,x20
71038cba9c  bl 0x71039c19b0
71038cbaa0  b 0x71038cbffc
71038cbaa4  bl 0x71037b2bc0
71038cbaa8  ldr x8,[sp, #0x2f0]
71038cbaac  mov x22,x0
71038cbab0  str x19,[sp, #0x2e0]
71038cbab4  cbz x8,0x71038cbfc8
71038cbab8  ldr x8,[x8]
71038cbabc  ldr x9,[sp, #0x2f8]
71038cbac0  cmp x8,x9
71038cbac4  b.ne 0x71038cbfc8
71038cbac8  ldr x0,[sp, #0x2e8]
71038cbacc  cbz x0,0x71038cbfc8
71038cbad0  b 0x71038cbfd0
71038cbad4  adrp x8,0x71052a8000
71038cbad8  ldr x8,[x8, #0xa70]
71038cbadc  mov x22,x0
71038cbae0  cbz x8,0x71038cbffc
71038cbae4  mov x0,x20
71038cbae8  bl 0x71039c19b0
71038cbaec  b 0x71038cbffc
71038cbaf0  bl 0x71037b2bc0
71038cbaf4  adrp x8,0x71052a8000
71038cbaf8  ldr x8,[x8, #0xa70]
71038cbafc  mov x22,x0
71038cbb00  cbz x8,0x71038cbffc
71038cbb04  mov x0,x20
71038cbb08  bl 0x71039c19b0
71038cbb0c  b 0x71038cbffc
71038cbb10  bl 0x71037b2bc0
71038cbb14  adrp x8,0x71052a8000
71038cbb18  ldr x8,[x8, #0xa70]
71038cbb1c  mov x22,x0
71038cbb20  cbz x8,0x71038cbffc
71038cbb24  mov x0,x20
71038cbb28  bl 0x71039c19b0
71038cbb2c  b 0x71038cbffc
71038cbb30  bl 0x71037b2bc0
71038cbb34  adrp x8,0x71052a8000
71038cbb38  ldr x8,[x8, #0xa70]
71038cbb3c  mov x22,x0
71038cbb40  cbz x8,0x71038cbb4c
71038cbb44  ldr x0,[sp, #0xd0]
71038cbb48  bl 0x71039c19b0
71038cbb4c  ldr x0,[sp, #0xd0]
71038cbb50  bl 0x710392eb40
71038cbb54  mov x0,x22
71038cbb58  bl 0x71039c19f0
71038cbb5c  bl 0x71037b2bc0
71038cbb60  bl 0x71039c19f0
71038cbb64  adrp x8,0x71052a8000
71038cbb68  ldr x8,[x8, #0xa70]
71038cbb6c  mov x22,x0
71038cbb70  cbz x8,0x71038cbb7c
71038cbb74  ldr x0,[sp, #0xa0]
71038cbb78  bl 0x71039c19b0
71038cbb7c  ldr x0,[sp, #0xa0]
71038cbb80  bl 0x710392eb40
71038cbb84  mov x0,x22
71038cbb88  bl 0x71039c19f0
71038cbb8c  bl 0x71037b2bc0
71038cbb90  ldr x8,[sp, #0x310]
71038cbb94  mov x22,x0
71038cbb98  str x19,[sp, #0x300]
71038cbb9c  cbz x8,0x71038cbfc8
71038cbba0  ldr x8,[x8]
71038cbba4  ldr x9,[sp, #0x318]
71038cbba8  cmp x8,x9
71038cbbac  b.ne 0x71038cbfc8
71038cbbb0  ldr x0,[sp, #0x308]
71038cbbb4  cbz x0,0x71038cbfc8
71038cbbb8  b 0x71038cbfd0
71038cbbbc  adrp x8,0x71052a8000
71038cbbc0  ldr x8,[x8, #0xa70]
71038cbbc4  mov x22,x0
71038cbbc8  cbz x8,0x71038cbffc
71038cbbcc  mov x0,x20
71038cbbd0  bl 0x71039c19b0
71038cbbd4  b 0x71038cbffc
71038cbbd8  bl 0x71037b2bc0
71038cbbdc  ldr x8,[sp, #0x330]
71038cbbe0  mov x22,x0
71038cbbe4  str x19,[sp, #0x320]
71038cbbe8  cbz x8,0x71038cbfc8
71038cbbec  ldr x8,[x8]
71038cbbf0  ldr x9,[sp, #0x338]
71038cbbf4  cmp x8,x9
71038cbbf8  b.ne 0x71038cbfc8
71038cbbfc  ldr x0,[sp, #0x328]
71038cbc00  cbz x0,0x71038cbfc8
71038cbc04  b 0x71038cbfd0
71038cbc08  adrp x8,0x71052a8000
71038cbc0c  ldr x8,[x8, #0xa70]
71038cbc10  mov x22,x0
71038cbc14  cbz x8,0x71038cbffc
71038cbc18  mov x0,x20
71038cbc1c  bl 0x71039c19b0
71038cbc20  b 0x71038cbffc
71038cbc24  bl 0x71037b2bc0
71038cbc28  ldr x8,[sp, #0x350]
71038cbc2c  mov x22,x0
71038cbc30  str x19,[sp, #0x340]
71038cbc34  cbz x8,0x71038cbfc8
71038cbc38  ldr x8,[x8]
71038cbc3c  ldr x9,[sp, #0x358]
71038cbc40  cmp x8,x9
71038cbc44  b.ne 0x71038cbfc8
71038cbc48  ldr x0,[sp, #0x348]
71038cbc4c  cbz x0,0x71038cbfc8
71038cbc50  b 0x71038cbfd0
71038cbc54  adrp x8,0x71052a8000
71038cbc58  ldr x8,[x8, #0xa70]
71038cbc5c  mov x22,x0
71038cbc60  cbz x8,0x71038cbffc
71038cbc64  mov x0,x20
71038cbc68  bl 0x71039c19b0
71038cbc6c  b 0x71038cbffc
71038cbc70  bl 0x71037b2bc0
71038cbc74  ldr x8,[sp, #0x370]
71038cbc78  mov x22,x0
71038cbc7c  str x19,[sp, #0x360]
71038cbc80  cbz x8,0x71038cbfc8
71038cbc84  ldr x8,[x8]
71038cbc88  ldr x9,[sp, #0x378]
71038cbc8c  cmp x8,x9
71038cbc90  b.ne 0x71038cbfc8
71038cbc94  ldr x0,[sp, #0x368]
71038cbc98  cbz x0,0x71038cbfc8
71038cbc9c  b 0x71038cbfd0
71038cbca0  adrp x8,0x71052a8000
71038cbca4  ldr x8,[x8, #0xa70]
71038cbca8  mov x22,x0
71038cbcac  cbz x8,0x71038cbffc
71038cbcb0  mov x0,x20
71038cbcb4  bl 0x71039c19b0
71038cbcb8  b 0x71038cbffc
71038cbcbc  bl 0x71037b2bc0
71038cbcc0  ldr x8,[sp, #0x390]
71038cbcc4  mov x22,x0
71038cbcc8  str x19,[sp, #0x380]
71038cbccc  cbz x8,0x71038cbfc8
71038cbcd0  ldr x8,[x8]
71038cbcd4  ldr x9,[sp, #0x398]
71038cbcd8  cmp x8,x9
71038cbcdc  b.ne 0x71038cbfc8
71038cbce0  ldr x0,[sp, #0x388]
71038cbce4  cbz x0,0x71038cbfc8
71038cbce8  b 0x71038cbfd0
71038cbcec  adrp x8,0x71052a8000
71038cbcf0  ldr x8,[x8, #0xa70]
71038cbcf4  mov x22,x0
71038cbcf8  cbz x8,0x71038cbffc
71038cbcfc  mov x0,x20
71038cbd00  bl 0x71039c19b0
71038cbd04  b 0x71038cbffc
71038cbd08  bl 0x71037b2bc0
71038cbd0c  ldr x8,[sp, #0x3b0]
71038cbd10  mov x22,x0
71038cbd14  str x19,[sp, #0x3a0]
71038cbd18  cbz x8,0x71038cbfc8
71038cbd1c  ldr x8,[x8]
71038cbd20  ldr x9,[sp, #0x3b8]
71038cbd24  cmp x8,x9
71038cbd28  b.ne 0x71038cbfc8
71038cbd2c  ldr x0,[sp, #0x3a8]
71038cbd30  cbz x0,0x71038cbfc8
71038cbd34  b 0x71038cbfd0
71038cbd38  adrp x8,0x71052a8000
71038cbd3c  ldr x8,[x8, #0xa70]
71038cbd40  mov x22,x0
71038cbd44  cbz x8,0x71038cbffc
71038cbd48  mov x0,x20
71038cbd4c  bl 0x71039c19b0
71038cbd50  b 0x71038cbffc
71038cbd54  bl 0x71037b2bc0
71038cbd58  ldr x8,[sp, #0x3d0]
71038cbd5c  mov x22,x0
71038cbd60  str x19,[sp, #0x3c0]
71038cbd64  cbz x8,0x71038cbfc8
71038cbd68  ldr x8,[x8]
71038cbd6c  ldr x9,[sp, #0x3d8]
71038cbd70  cmp x8,x9
71038cbd74  b.ne 0x71038cbfc8
71038cbd78  ldr x0,[sp, #0x3c8]
71038cbd7c  cbz x0,0x71038cbfc8
71038cbd80  b 0x71038cbfd0
71038cbd84  adrp x8,0x71052a8000
71038cbd88  ldr x8,[x8, #0xa70]
71038cbd8c  mov x22,x0
71038cbd90  cbz x8,0x71038cbffc
71038cbd94  mov x0,x20
71038cbd98  bl 0x71039c19b0
71038cbd9c  b 0x71038cbffc
71038cbda0  bl 0x71037b2bc0
71038cbda4  adrp x8,0x71052a8000
71038cbda8  ldr x8,[x8, #0xa70]
71038cbdac  mov x22,x0
71038cbdb0  cbz x8,0x71038cbffc
71038cbdb4  mov x0,x20
71038cbdb8  bl 0x71039c19b0
71038cbdbc  b 0x71038cbffc
71038cbdc0  bl 0x71037b2bc0
71038cbdc4  bl 0x71039c19f0
71038cbdc8  adrp x8,0x71052a8000
71038cbdcc  ldr x8,[x8, #0xa70]
71038cbdd0  mov x22,x0
71038cbdd4  cbz x8,0x71038cbde0
71038cbdd8  ldr x0,[sp, #0xf8]
71038cbddc  bl 0x71039c19b0
71038cbde0  ldr x0,[sp, #0xf8]
71038cbde4  bl 0x710392eb40
71038cbde8  mov x0,x22
71038cbdec  bl 0x71039c19f0
71038cbdf0  bl 0x71037b2bc0
71038cbdf4  bl 0x71039c19f0
71038cbdf8  adrp x8,0x71052a8000
71038cbdfc  ldr x8,[x8, #0xa70]
71038cbe00  mov x22,x0
71038cbe04  cbz x8,0x71038cbe10
71038cbe08  mov x0,x19
71038cbe0c  bl 0x71039c19b0
71038cbe10  mov x0,x19
71038cbe14  bl 0x710392eb40
71038cbe18  mov x0,x22
71038cbe1c  bl 0x71039c19f0
71038cbe20  bl 0x71037b2bc0
71038cbe24  ldr x8,[sp, #0x410]
71038cbe28  mov x22,x0
71038cbe2c  str x19,[sp, #0x400]
71038cbe30  cbz x8,0x71038cbfc8
71038cbe34  ldr x8,[x8]
71038cbe38  ldr x9,[sp, #0x418]
71038cbe3c  cmp x8,x9
71038cbe40  b.ne 0x71038cbfc8
71038cbe44  ldr x0,[sp, #0x408]
71038cbe48  cbz x0,0x71038cbfc8
71038cbe4c  b 0x71038cbfd0
71038cbe50  adrp x8,0x71052a8000
71038cbe54  ldr x8,[x8, #0xa70]
71038cbe58  mov x22,x0
71038cbe5c  cbz x8,0x71038cbffc
71038cbe60  mov x0,x20
71038cbe64  bl 0x71039c19b0
71038cbe68  b 0x71038cbffc
71038cbe6c  bl 0x71037b2bc0
71038cbe70  ldur x8,[x29, #-0xf0]
71038cbe74  mov x22,x0
71038cbe78  stur x19,[x29, #-0x100]
71038cbe7c  cbz x8,0x71038cbfc8
71038cbe80  ldr x8,[x8]
71038cbe84  ldur x9,[x29, #-0xe8]
71038cbe88  cmp x8,x9
71038cbe8c  b.ne 0x71038cbfc8
71038cbe90  ldur x0,[x29, #-0xf8]
71038cbe94  cbz x0,0x71038cbfc8
71038cbe98  b 0x71038cbfd0
71038cbe9c  adrp x8,0x71052a8000
71038cbea0  ldr x8,[x8, #0xa70]
71038cbea4  mov x22,x0
71038cbea8  cbz x8,0x71038cbffc
71038cbeac  mov x0,x20
71038cbeb0  bl 0x71039c19b0
71038cbeb4  b 0x71038cbffc
71038cbeb8  bl 0x71037b2bc0
71038cbebc  ldur x8,[x29, #-0xd0]
71038cbec0  mov x22,x0
71038cbec4  stur x19,[x29, #-0xe0]
71038cbec8  cbz x8,0x71038cbfc8
71038cbecc  ldr x8,[x8]
71038cbed0  ldur x9,[x29, #-0xc8]
71038cbed4  cmp x8,x9
71038cbed8  b.ne 0x71038cbfc8
71038cbedc  ldur x0,[x29, #-0xd8]
71038cbee0  cbz x0,0x71038cbfc8
71038cbee4  b 0x71038cbfd0
71038cbee8  adrp x8,0x71052a8000
71038cbeec  ldr x8,[x8, #0xa70]
71038cbef0  mov x22,x0
71038cbef4  cbz x8,0x71038cbffc
71038cbef8  mov x0,x20
71038cbefc  bl 0x71039c19b0
71038cbf00  b 0x71038cbffc
71038cbf04  bl 0x71037b2bc0
71038cbf08  ldur x8,[x29, #-0xb0]
71038cbf0c  mov x22,x0
71038cbf10  stur x19,[x29, #-0xc0]
71038cbf14  cbz x8,0x71038cbfc8
71038cbf18  ldr x8,[x8]
71038cbf1c  ldur x9,[x29, #-0xa8]
71038cbf20  cmp x8,x9
71038cbf24  b.ne 0x71038cbfc8
71038cbf28  ldur x0,[x29, #-0xb8]
71038cbf2c  cbz x0,0x71038cbfc8
71038cbf30  b 0x71038cbfd0
71038cbf34  adrp x8,0x71052a8000
71038cbf38  ldr x8,[x8, #0xa70]
71038cbf3c  mov x22,x0
71038cbf40  cbz x8,0x71038cbffc
71038cbf44  mov x0,x20
71038cbf48  bl 0x71039c19b0
71038cbf4c  b 0x71038cbffc
71038cbf50  bl 0x71037b2bc0
71038cbf54  ldur x8,[x29, #-0x90]
71038cbf58  mov x22,x0
71038cbf5c  stur x19,[x29, #-0xa0]
71038cbf60  cbz x8,0x71038cbfc8
71038cbf64  ldr x8,[x8]
71038cbf68  ldur x9,[x29, #-0x88]
71038cbf6c  cmp x8,x9
71038cbf70  b.ne 0x71038cbfc8
71038cbf74  ldur x0,[x29, #-0x98]
71038cbf78  cbnz x0,0x71038cbfd0
71038cbf7c  b 0x71038cbfc8
71038cbf80  adrp x8,0x71052a8000
71038cbf84  ldr x8,[x8, #0xa70]
71038cbf88  mov x22,x0
71038cbf8c  cbz x8,0x71038cbffc
71038cbf90  mov x0,x20
71038cbf94  bl 0x71039c19b0
71038cbf98  b 0x71038cbffc
71038cbf9c  bl 0x71037b2bc0
71038cbfa0  ldur x8,[x29, #-0x70]
71038cbfa4  mov x22,x0
71038cbfa8  stur x19,[x29, #-0x80]
71038cbfac  cbz x8,0x71038cbfc8
71038cbfb0  ldr x8,[x8]
71038cbfb4  ldur x9,[x29, #-0x68]
71038cbfb8  cmp x8,x9
71038cbfbc  b.ne 0x71038cbfc8
71038cbfc0  ldur x0,[x29, #-0x78]
71038cbfc4  cbnz x0,0x71038cbfd0
71038cbfc8  mov x0,x22
71038cbfcc  bl 0x71039c19f0
71038cbfd0  ldr x8,[x0]
71038cbfd4  ldr x8,[x8, #0x8]
71038cbfd8  blr x8
71038cbfdc  mov x0,x22
71038cbfe0  bl 0x71039c19f0
71038cbfe4  adrp x8,0x71052a8000
71038cbfe8  ldr x8,[x8, #0xa70]
71038cbfec  mov x22,x0
71038cbff0  cbz x8,0x71038cbffc
71038cbff4  mov x0,x20
71038cbff8  bl 0x71039c19b0
71038cbffc  mov x0,x20
71038cc000  bl 0x710392eb40
71038cc004  mov x0,x22
71038cc008  bl 0x71039c19f0
71038cc00c  bl 0x71037b2bc0
71038cc010  bl 0x71039c19f0
71038cc014  bl 0x71039c19f0
71038cc018  adrp x8,0x71052a8000
71038cc01c  ldr x8,[x8, #0xa70]
71038cc020  mov x22,x0
71038cc024  cbz x8,0x71038cc030
71038cc028  mov x0,x28
71038cc02c  bl 0x71039c19b0
71038cc030  mov x0,x28
71038cc034  bl 0x710392eb40
71038cc038  mov x0,x22
71038cc03c  bl 0x71039c19f0
71038cc040  bl 0x71037b2bc0
