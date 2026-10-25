// addr:      7102ef6bd0
// offset:    0x2ef6bd0
// name:      FUN_7102ef6bd0
// mangled:   
// size:      3056

7102ef6bd0  sub sp,sp,#0xb0
7102ef6bd4  stp x28,x27,[sp, #0x50]
7102ef6bd8  stp x26,x25,[sp, #0x60]
7102ef6bdc  stp x24,x23,[sp, #0x70]
7102ef6be0  stp x22,x21,[sp, #0x80]
7102ef6be4  stp x20,x19,[sp, #0x90]
7102ef6be8  stp x29,x30,[sp, #0xa0]
7102ef6bec  add x29,sp,#0xa0
7102ef6bf0  ldr x8,[x0, #0x300]
7102ef6bf4  ldr x8,[x8, #0x18]
7102ef6bf8  mov x22,#0x917e
7102ef6bfc  movk x22,#0x389b, LSL #16
7102ef6c00  movk x22,#0xf, LSL #32
7102ef6c04  mov x19,x0
7102ef6c08  ldp x25,x26,[x8]
7102ef6c0c  cmp x25,x26
7102ef6c10  b.eq 0x7102ef6e4c
7102ef6c14  mov w27,#0xffffffff
7102ef6c18  mov w28,#0x59
7102ef6c1c  adrp x23,0x7104754000
7102ef6c20  add x23,x23,#0x84
7102ef6c24  orr x24,xzr,#0x100000000
7102ef6c28  b 0x7102ef6cf8
7102ef6c2c  mov w0,#0x10
7102ef6c30  orr w1,wzr,#0x1f0
7102ef6c34  bl 0x710392e290
7102ef6c38  mov x21,x0
7102ef6c3c  cbnz x0,0x7102ef6c88
7102ef6c40  adrp x8,0x7105332000
7102ef6c44  ldr x0,[x8, #0xf00]
7102ef6c48  cbz x0,0x7102ef6c84
7102ef6c4c  orr w8,wzr,#0x1f0
7102ef6c50  str wzr,[sp, #0x4c]
7102ef6c54  add x1,sp,#0x4c
7102ef6c58  str x8,[sp]
7102ef6c5c  ldr x8,[x0]
7102ef6c60  ldr x8,[x8, #0x30]
7102ef6c64  mov x2,sp
7102ef6c68  blr x8
7102ef6c6c  tbz w0,#0x0,0x7102ef6c84
7102ef6c70  mov w0,#0x10
7102ef6c74  orr w1,wzr,#0x1f0
7102ef6c78  bl 0x710392e290
7102ef6c7c  mov x21,x0
7102ef6c80  cbnz x0,0x7102ef6c88
7102ef6c84  mov x21,xzr
7102ef6c88  mov x0,x21
7102ef6c8c  mov x1,x19
7102ef6c90  mov x2,x20
7102ef6c94  bl 0x71031455c0
7102ef6c98  adrp x8,0x710514b000
7102ef6c9c  add x8,x8,#0x6c8
7102ef6ca0  str x8,[x21]
7102ef6ca4  add x8,x21,#0x151
7102ef6ca8  str x19,[x21, #0x1d0]
7102ef6cac  strh wzr,[x21, #0x1d8]
7102ef6cb0  str xzr,[x21, #0x1e0]
7102ef6cb4  strh wzr,[x8]
7102ef6cb8  ldr x8,[x19, #0x338]
7102ef6cbc  ldr x8,[x8]
7102ef6cc0  ldr x0,[x8, #0x8]
7102ef6cc4  cbz x0,0x7102ef6cd8
7102ef6cc8  add x1,x21,#0x1e0
7102ef6ccc  mov w2,wzr
7102ef6cd0  bl 0x7102405040
7102ef6cd4  b 0x7102ef6cdc
7102ef6cd8  mov w0,w27
7102ef6cdc  ldr x8,[x21, #0xb8]
7102ef6ce0  str w0,[x21, #0x1e8]
7102ef6ce4  cbz x8,0x7102ef6e38
7102ef6ce8  ldp x0,x1,[x8]
7102ef6cec  mov w2,#0x1
7102ef6cf0  bl 0x71025f4d80
7102ef6cf4  b 0x7102ef6e38
7102ef6cf8  ldr x20,[x25]
7102ef6cfc  ldrb w10,[x20, #0x58]
7102ef6d00  cbz w10,0x7102ef6e40
7102ef6d04  ldr x9,[x19, #0x310]
7102ef6d08  ldp x8,x9,[x9, #0xd0]
7102ef6d0c  cmp x8,x9
7102ef6d10  b.eq 0x7102ef6e40
7102ef6d14  mov x11,xzr
7102ef6d18  mov x12,x28
7102ef6d1c  mov w13,w27
7102ef6d20  and w10,w10,#0xff
7102ef6d24  sub w14,w10,#0x41
7102ef6d28  add w15,w10,#0x20
7102ef6d2c  cmp w14,#0x1a
7102ef6d30  csel w10,w15,w10,cc
7102ef6d34  eor w10,w10,w13
7102ef6d38  and w10,w10,#0xff
7102ef6d3c  ldr w14,[x23, w10, UXTW #0x2]
7102ef6d40  ldrb w10,[x20, x12, LSL ]
7102ef6d44  add x12,x12,#0x1
7102ef6d48  eor w13,w14,w13, LSR #0x8
7102ef6d4c  add x11,x11,x24
7102ef6d50  cbnz w10,0x7102ef6d20
7102ef6d54  mvn w10,w13
7102ef6d58  and x11,x11,#0xff00000000
7102ef6d5c  orr x10,x11,x10
7102ef6d60  ldr w11,[x8, #0x8]
7102ef6d64  cmp w11,#0x1
7102ef6d68  b.hi 0x7102ef6d7c
7102ef6d6c  ldr x11,[x8]
7102ef6d70  ldr x12,[x11, #0x68]
7102ef6d74  cmp x10,x12
7102ef6d78  b.eq 0x7102ef6d8c
7102ef6d7c  add x8,x8,#0x10
7102ef6d80  cmp x9,x8
7102ef6d84  b.ne 0x7102ef6d60
7102ef6d88  b 0x7102ef6e40
7102ef6d8c  cbz x11,0x7102ef6e40
7102ef6d90  ldr x8,[x11, #0x68]
7102ef6d94  cmp x8,x22
7102ef6d98  b.eq 0x7102ef6dcc
7102ef6d9c  ldr x8,[x11, #0x68]
7102ef6da0  mov x9,#0xc953
7102ef6da4  movk x9,#0x316b, LSL #16
7102ef6da8  movk x9,#0x10, LSL #32
7102ef6dac  cmp x8,x9
7102ef6db0  b.eq 0x7102ef6dcc
7102ef6db4  ldr x8,[x11, #0x68]
7102ef6db8  mov x9,#0xf430
7102ef6dbc  movk x9,#0xcb64, LSL #16
7102ef6dc0  movk x9,#0x10, LSL #32
7102ef6dc4  cmp x8,x9
7102ef6dc8  b.ne 0x7102ef6c2c
7102ef6dcc  mov w0,#0x10
7102ef6dd0  orr w1,wzr,#0x1e0
7102ef6dd4  bl 0x710392e290
7102ef6dd8  mov x21,x0
7102ef6ddc  cbnz x0,0x7102ef6e28
7102ef6de0  adrp x8,0x7105332000
7102ef6de4  ldr x0,[x8, #0xf00]
7102ef6de8  cbz x0,0x7102ef6e24
7102ef6dec  orr w8,wzr,#0x1e0
7102ef6df0  str wzr,[sp, #0x4c]
7102ef6df4  add x1,sp,#0x4c
7102ef6df8  str x8,[sp]
7102ef6dfc  ldr x8,[x0]
7102ef6e00  ldr x8,[x8, #0x30]
7102ef6e04  mov x2,sp
7102ef6e08  blr x8
7102ef6e0c  tbz w0,#0x0,0x7102ef6e24
7102ef6e10  mov w0,#0x10
7102ef6e14  orr w1,wzr,#0x1e0
7102ef6e18  bl 0x710392e290
7102ef6e1c  mov x21,x0
7102ef6e20  cbnz x0,0x7102ef6e28
7102ef6e24  mov x21,xzr
7102ef6e28  mov x0,x21
7102ef6e2c  mov x1,x19
7102ef6e30  mov x2,x20
7102ef6e34  bl 0x7103145960
7102ef6e38  mov x0,x21
7102ef6e3c  bl 0x710313ef20
7102ef6e40  add x25,x25,#0x8
7102ef6e44  cmp x25,x26
7102ef6e48  b.ne 0x7102ef6cf8
7102ef6e4c  mov w1,#0x250
7102ef6e50  mov w0,#0x10
7102ef6e54  bl 0x710392e290
7102ef6e58  mov x21,x0
7102ef6e5c  cbnz x0,0x7102ef6ea8
7102ef6e60  adrp x8,0x7105332000
7102ef6e64  ldr x0,[x8, #0xf00]
7102ef6e68  cbz x0,0x7102ef6ea4
7102ef6e6c  mov w8,#0x250
7102ef6e70  str wzr,[sp, #0x4c]
7102ef6e74  add x1,sp,#0x4c
7102ef6e78  str x8,[sp]
7102ef6e7c  ldr x8,[x0]
7102ef6e80  ldr x8,[x8, #0x30]
7102ef6e84  mov x2,sp
7102ef6e88  blr x8
7102ef6e8c  tbz w0,#0x0,0x7102ef6ea4
7102ef6e90  mov w1,#0x250
7102ef6e94  mov w0,#0x10
7102ef6e98  bl 0x710392e290
7102ef6e9c  mov x21,x0
7102ef6ea0  cbnz x0,0x7102ef6ea8
7102ef6ea4  mov x21,xzr
7102ef6ea8  mov x25,#-0xffff00000001
7102ef6eac  add x20,x19,#0x738
7102ef6eb0  adrp x23,0x710514b000
7102ef6eb4  add x23,x23,#0x770
7102ef6eb8  mov x24,#-0x1
7102ef6ebc  strb wzr,[x21, #0x98]
7102ef6ec0  movk x25,#0x3f80, LSL #48
7102ef6ec4  orr x8,xzr,#-0x100000000
7102ef6ec8  str x8,[x21, #0x90]
7102ef6ecc  add x0,x21,#0x9c
7102ef6ed0  mov w2,#0x1b4
7102ef6ed4  mov w1,wzr
7102ef6ed8  stp x23,x19,[x21]
7102ef6edc  stp xzr,xzr,[x21, #0x50]
7102ef6ee0  stp xzr,xzr,[x21, #0x40]
7102ef6ee4  stp xzr,xzr,[x21, #0x30]
7102ef6ee8  stp xzr,xzr,[x21, #0x20]
7102ef6eec  stp x20,xzr,[x21, #0x10]
7102ef6ef0  stp xzr,x24,[x21, #0x60]
7102ef6ef4  stp xzr,xzr,[x21, #0x70]
7102ef6ef8  stp xzr,x25,[x21, #0x80]
7102ef6efc  bl 0x71039c02a0
7102ef6f00  mov x8,#0x100000001
7102ef6f04  stp x8,x8,[x21, #0x70]
7102ef6f08  mov w8,#0x1
7102ef6f0c  str w8,[x21, #0x80]
7102ef6f10  ldr x0,[x19, #0x948]
7102ef6f14  str x21,[x19, #0x948]
7102ef6f18  cbz x0,0x7102ef6f2c
7102ef6f1c  ldr x8,[x0]
7102ef6f20  ldr x8,[x8, #0x8]
7102ef6f24  blr x8
7102ef6f28  ldr x21,[x19, #0x948]
7102ef6f2c  add x1,x19,#0x7c0
7102ef6f30  add x2,x19,#0x850
7102ef6f34  add x3,x19,#0x808
7102ef6f38  add x4,x19,#0x8a8
7102ef6f3c  mov x0,x21
7102ef6f40  bl 0x7102ef9a60
7102ef6f44  ldr x8,[x19, #0x948]
7102ef6f48  ldr x9,[x19, #0x7f0]
7102ef6f4c  mov w1,#0x250
7102ef6f50  ldr x10,[x19, #0x7f8]
7102ef6f54  mov w0,#0x10
7102ef6f58  ldr x11,[x19, #0x800]
7102ef6f5c  stp x10,x11,[x8, #0x1f8]
7102ef6f60  str x9,[x8, #0x1f0]
7102ef6f64  ldr x9,[x19, #0x880]
7102ef6f68  ldr x10,[x19, #0x888]
7102ef6f6c  ldr x11,[x19, #0x890]
7102ef6f70  str x11,[x8, #0x218]
7102ef6f74  str x10,[x8, #0x210]
7102ef6f78  str x9,[x8, #0x208]
7102ef6f7c  ldr x9,[x19, #0x838]
7102ef6f80  ldr x10,[x19, #0x840]
7102ef6f84  str x10,[x8, #0x228]
7102ef6f88  str x9,[x8, #0x220]
7102ef6f8c  ldr x9,[x19, #0x8d8]
7102ef6f90  ldr x10,[x19, #0x8e0]
7102ef6f94  str x10,[x8, #0x238]
7102ef6f98  str x9,[x8, #0x230]
7102ef6f9c  ldr x8,[x19, #0x948]
7102ef6fa0  ldr w9,[x19, #0x794]
7102ef6fa4  str w9,[x8, #0x70]
7102ef6fa8  ldr w9,[x19, #0x798]
7102ef6fac  str w9,[x8, #0x74]
7102ef6fb0  ldr w9,[x19, #0x79c]
7102ef6fb4  str w9,[x8, #0x78]
7102ef6fb8  ldr w9,[x19, #0x7a0]
7102ef6fbc  str w9,[x8, #0x7c]
7102ef6fc0  ldr w9,[x19, #0x7a4]
7102ef6fc4  str w9,[x8, #0x80]
7102ef6fc8  bl 0x710392e290
7102ef6fcc  mov x21,x0
7102ef6fd0  cbnz x0,0x7102ef701c
7102ef6fd4  adrp x8,0x7105332000
7102ef6fd8  ldr x0,[x8, #0xf00]
7102ef6fdc  cbz x0,0x7102ef7018
7102ef6fe0  mov w8,#0x250
7102ef6fe4  str wzr,[sp, #0x4c]
7102ef6fe8  add x1,sp,#0x4c
7102ef6fec  str x8,[sp]
7102ef6ff0  ldr x8,[x0]
7102ef6ff4  ldr x8,[x8, #0x30]
7102ef6ff8  mov x2,sp
7102ef6ffc  blr x8
7102ef7000  tbz w0,#0x0,0x7102ef7018
7102ef7004  mov w1,#0x250
7102ef7008  mov w0,#0x10
7102ef700c  bl 0x710392e290
7102ef7010  mov x21,x0
7102ef7014  cbnz x0,0x7102ef701c
7102ef7018  mov x21,xzr
7102ef701c  orr x8,xzr,#-0x100000000
7102ef7020  add x0,x21,#0x9c
7102ef7024  mov w2,#0x1b4
7102ef7028  mov w1,wzr
7102ef702c  add x22,x19,#0x7f0
7102ef7030  str x8,[x21, #0x90]
7102ef7034  add x28,x19,#0x880
7102ef7038  add x27,x19,#0x838
7102ef703c  strb wzr,[x21, #0x98]
7102ef7040  stp x23,x19,[x21]
7102ef7044  add x26,x19,#0x8d8
7102ef7048  stp xzr,xzr,[x21, #0x50]
7102ef704c  stp xzr,xzr,[x21, #0x40]
7102ef7050  stp xzr,xzr,[x21, #0x30]
7102ef7054  stp xzr,xzr,[x21, #0x20]
7102ef7058  stp x20,xzr,[x21, #0x10]
7102ef705c  stp xzr,x24,[x21, #0x60]
7102ef7060  stp xzr,xzr,[x21, #0x70]
7102ef7064  stp xzr,x25,[x21, #0x80]
7102ef7068  bl 0x71039c02a0
7102ef706c  mov x8,#0x100000001
7102ef7070  stp x8,x8,[x21, #0x70]
7102ef7074  mov w8,#0x1
7102ef7078  str w8,[x21, #0x80]
7102ef707c  ldr x0,[x19, #0x950]
7102ef7080  str x21,[x19, #0x950]
7102ef7084  cbz x0,0x7102ef7098
7102ef7088  ldr x8,[x0]
7102ef708c  ldr x8,[x8, #0x8]
7102ef7090  blr x8
7102ef7094  ldr x21,[x19, #0x950]
7102ef7098  mov x23,#0xe24d
7102ef709c  movk x23,#0xbb01, LSL #16
7102ef70a0  add x1,x19,#0x7d8
7102ef70a4  add x2,x19,#0x868
7102ef70a8  add x3,x19,#0x820
7102ef70ac  add x4,x19,#0x8c0
7102ef70b0  mov x0,x21
7102ef70b4  movk x23,#0xe, LSL #32
7102ef70b8  bl 0x7102ef9a60
7102ef70bc  ldr x8,[x19, #0x950]
7102ef70c0  ldp x9,x10,[x22]
7102ef70c4  ldr x11,[x22, #0x10]
7102ef70c8  stp x10,x11,[x8, #0x1f8]
7102ef70cc  str x9,[x8, #0x1f0]
7102ef70d0  ldp x9,x10,[x28]
7102ef70d4  ldr x11,[x28, #0x10]
7102ef70d8  str x11,[x8, #0x218]
7102ef70dc  str x10,[x8, #0x210]
7102ef70e0  str x9,[x8, #0x208]
7102ef70e4  ldp x9,x10,[x27]
7102ef70e8  str x10,[x8, #0x228]
7102ef70ec  str x9,[x8, #0x220]
7102ef70f0  adrp x2,0x710439b000
7102ef70f4  add x2,x2,#0x63c
7102ef70f8  ldp x9,x10,[x26]
7102ef70fc  str x10,[x8, #0x238]
7102ef7100  str x9,[x8, #0x230]
7102ef7104  ldr x8,[x19, #0x950]
7102ef7108  ldr w9,[x19, #0x7a8]
7102ef710c  str w9,[x8, #0x70]
7102ef7110  ldr w9,[x19, #0x7ac]
7102ef7114  str w9,[x8, #0x74]
7102ef7118  ldr w9,[x19, #0x7b0]
7102ef711c  str w9,[x8, #0x78]
7102ef7120  ldr w9,[x19, #0x7b4]
7102ef7124  str w9,[x8, #0x7c]
7102ef7128  ldr w9,[x19, #0x7b8]
7102ef712c  str w9,[x8, #0x80]
7102ef7130  ldr x0,[x19, #0x948]
7102ef7134  adrp x3,0x7104338000
7102ef7138  add x3,x3,#0x64e
7102ef713c  mov w1,wzr
7102ef7140  bl 0x7102ef7ef0
7102ef7144  ldr x0,[x19, #0x948]
7102ef7148  adrp x2,0x71042d4000
7102ef714c  add x2,x2,#0x7dd
7102ef7150  adrp x3,0x710425d000
7102ef7154  add x3,x3,#0x7ac
7102ef7158  mov w1,#0x1
7102ef715c  bl 0x7102ef7ef0
7102ef7160  ldr x0,[x19, #0x948]
7102ef7164  adrp x2,0x71042d4000
7102ef7168  add x2,x2,#0x7f6
7102ef716c  adrp x3,0x71042f6000
7102ef7170  add x3,x3,#0x13d
7102ef7174  mov w1,#0x2
7102ef7178  bl 0x7102ef7ef0
7102ef717c  ldr x0,[x19, #0x948]
7102ef7180  adrp x2,0x7104306000
7102ef7184  add x2,x2,#0x9bc
7102ef7188  adrp x3,0x71042e5000
7102ef718c  add x3,x3,#0x581
7102ef7190  orr w1,wzr,#0x3
7102ef7194  bl 0x7102ef7ef0
7102ef7198  ldr x0,[x19, #0x948]
7102ef719c  adrp x2,0x71042f6000
7102ef71a0  add x2,x2,#0x159
7102ef71a4  adrp x3,0x71042b2000
7102ef71a8  add x3,x3,#0x5be
7102ef71ac  mov w1,#0x4
7102ef71b0  bl 0x7102ef7ef0
7102ef71b4  ldr x0,[x19, #0x950]
7102ef71b8  adrp x2,0x710427e000
7102ef71bc  add x2,x2,#0xead
7102ef71c0  adrp x3,0x71042c3000
7102ef71c4  add x3,x3,#0x1c7
7102ef71c8  mov w1,wzr
7102ef71cc  bl 0x7102ef7ef0
7102ef71d0  ldr x0,[x19, #0x950]
7102ef71d4  adrp x2,0x7104359000
7102ef71d8  add x2,x2,#0x751
7102ef71dc  adrp x3,0x7104306000
7102ef71e0  add x3,x3,#0x9d5
7102ef71e4  mov w1,#0x1
7102ef71e8  bl 0x7102ef7ef0
7102ef71ec  ldr x0,[x19, #0x950]
7102ef71f0  adrp x2,0x7104431000
7102ef71f4  add x2,x2,#0x454
7102ef71f8  adrp x3,0x71043ff000
7102ef71fc  add x3,x3,#0x747
7102ef7200  mov w1,#0x2
7102ef7204  bl 0x7102ef7ef0
7102ef7208  ldr x0,[x19, #0x950]
7102ef720c  adrp x2,0x7104420000
7102ef7210  add x2,x2,#0x7c5
7102ef7214  adrp x3,0x7104338000
7102ef7218  add x3,x3,#0x66a
7102ef721c  orr w1,wzr,#0x3
7102ef7220  bl 0x7102ef7ef0
7102ef7224  ldr x0,[x19, #0x950]
7102ef7228  adrp x2,0x7104410000
7102ef722c  add x2,x2,#0xb8c
7102ef7230  adrp x3,0x71043ab000
7102ef7234  add x3,x3,#0xd6a
7102ef7238  mov w1,#0x4
7102ef723c  bl 0x7102ef7ef0
7102ef7240  ldr x0,[x19, #0x310]
7102ef7244  mov x8,x0
7102ef7248  mov x9,x0
7102ef724c  ldr x10,[x8, #0xd0]!
7102ef7250  ldr x11,[x9, #0xd8]!
7102ef7254  cmp x10,x11
7102ef7258  b.eq 0x7102ef7298
7102ef725c  mov x21,#0x917e
7102ef7260  movk x21,#0x389b, LSL #16
7102ef7264  movk x21,#0xf, LSL #32
7102ef7268  ldr w12,[x10, #0x8]
7102ef726c  cmp w12,#0x1
7102ef7270  b.hi 0x7102ef7284
7102ef7274  ldr x12,[x10]
7102ef7278  ldr x13,[x12, #0x68]
7102ef727c  cmp x13,x23
7102ef7280  b.eq 0x7102ef72a8
7102ef7284  add x10,x10,#0x10
7102ef7288  cmp x11,x10
7102ef728c  b.ne 0x7102ef7268
7102ef7290  mov x12,xzr
7102ef7294  b 0x7102ef72a8
7102ef7298  mov x21,#0x917e
7102ef729c  movk x21,#0x389b, LSL #16
7102ef72a0  mov x12,xzr
7102ef72a4  movk x21,#0xf, LSL #32
7102ef72a8  str x12,[x19, #0x980]
7102ef72ac  ldr x1,[x8]
7102ef72b0  ldr x10,[x9]
7102ef72b4  cmp x1,x10
7102ef72b8  b.eq 0x7102ef72e4
7102ef72bc  ldr w11,[x1, #0x8]
7102ef72c0  cmp w11,#0x1
7102ef72c4  b.hi 0x7102ef72d8
7102ef72c8  ldr x11,[x1]
7102ef72cc  ldr x11,[x11, #0x68]
7102ef72d0  cmp x11,x23
7102ef72d4  b.eq 0x7102ef72ec
7102ef72d8  add x1,x1,#0x10
7102ef72dc  cmp x10,x1
7102ef72e0  b.ne 0x7102ef72bc
7102ef72e4  mov x0,xzr
7102ef72e8  b 0x7102ef72fc
7102ef72ec  bl 0x710262fb80
7102ef72f0  ldr x9,[x19, #0x310]
7102ef72f4  add x8,x9,#0xd0
7102ef72f8  add x9,x9,#0xd8
7102ef72fc  str x0,[x19, #0x988]
7102ef7300  ldr x10,[x8]
7102ef7304  ldr x11,[x9]
7102ef7308  mov x14,#0xf430
7102ef730c  movk x14,#0xcb64, LSL #16
7102ef7310  mov x15,#0xc953
7102ef7314  movk x15,#0x316b, LSL #16
7102ef7318  movk x14,#0x10, LSL #32
7102ef731c  movk x15,#0x10, LSL #32
7102ef7320  cmp x10,x11
7102ef7324  b.eq 0x7102ef7350
7102ef7328  ldr w12,[x10, #0x8]
7102ef732c  cmp w12,#0x1
7102ef7330  b.hi 0x7102ef7344
7102ef7334  ldr x12,[x10]
7102ef7338  ldr x13,[x12, #0x68]
7102ef733c  cmp x13,x15
7102ef7340  b.eq 0x7102ef7354
7102ef7344  add x10,x10,#0x10
7102ef7348  cmp x11,x10
7102ef734c  b.ne 0x7102ef7328
7102ef7350  mov x12,xzr
7102ef7354  str x12,[x19, #0x990]
7102ef7358  ldr x10,[x8]
7102ef735c  ldr x11,[x9]
7102ef7360  cmp x10,x11
7102ef7364  b.eq 0x7102ef7390
7102ef7368  ldr w12,[x10, #0x8]
7102ef736c  cmp w12,#0x1
7102ef7370  b.hi 0x7102ef7384
7102ef7374  ldr x12,[x10]
7102ef7378  ldr x13,[x12, #0x68]
7102ef737c  cmp x13,x14
7102ef7380  b.eq 0x7102ef7394
7102ef7384  add x10,x10,#0x10
7102ef7388  cmp x11,x10
7102ef738c  b.ne 0x7102ef7368
7102ef7390  mov x12,xzr
7102ef7394  str x12,[x19, #0x998]
7102ef7398  ldr x8,[x8]
7102ef739c  ldr x9,[x9]
7102ef73a0  cmp x8,x9
7102ef73a4  b.eq 0x7102ef73d0
7102ef73a8  ldr w10,[x8, #0x8]
7102ef73ac  cmp w10,#0x1
7102ef73b0  b.hi 0x7102ef73c4
7102ef73b4  ldr x10,[x8]
7102ef73b8  ldr x11,[x10, #0x68]
7102ef73bc  cmp x11,x21
7102ef73c0  b.eq 0x7102ef73d4
7102ef73c4  add x8,x8,#0x10
7102ef73c8  cmp x9,x8
7102ef73cc  b.ne 0x7102ef73a8
7102ef73d0  mov x10,xzr
7102ef73d4  mov w1,#0x2c0
7102ef73d8  mov w0,#0x10
7102ef73dc  str x10,[x19, #0x9a0]
7102ef73e0  bl 0x710392e290
7102ef73e4  mov x21,x0
7102ef73e8  cbnz x0,0x7102ef7434
7102ef73ec  adrp x8,0x7105332000
7102ef73f0  ldr x0,[x8, #0xf00]
7102ef73f4  cbz x0,0x7102ef7430
7102ef73f8  mov w8,#0x2c0
7102ef73fc  str wzr,[sp, #0x4c]
7102ef7400  add x1,sp,#0x4c
7102ef7404  str x8,[sp]
7102ef7408  ldr x8,[x0]
7102ef740c  ldr x8,[x8, #0x30]
7102ef7410  mov x2,sp
7102ef7414  blr x8
7102ef7418  tbz w0,#0x0,0x7102ef7430
7102ef741c  mov w1,#0x2c0
7102ef7420  mov w0,#0x10
7102ef7424  bl 0x710392e290
7102ef7428  mov x21,x0
7102ef742c  cbnz x0,0x7102ef7434
7102ef7430  mov x21,xzr
7102ef7434  mov x0,x21
7102ef7438  mov x1,x19
7102ef743c  mov x2,x20
7102ef7440  bl 0x7102ef9c90
7102ef7444  ldr x20,[x19, #0x978]
7102ef7448  str x21,[x19, #0x978]
7102ef744c  cbz x20,0x7102ef7464
7102ef7450  mov x0,x20
7102ef7454  bl 0x7102efc9d0
7102ef7458  mov x0,x20
7102ef745c  bl 0x710392eb40
7102ef7460  ldr x21,[x19, #0x978]
7102ef7464  ldr x8,[x21, #0x2b0]
7102ef7468  ldr x8,[x8, #0x340]
7102ef746c  ldr x9,[x21, #0x2b8]
7102ef7470  ldr s0,[x9, #0x1b8]
7102ef7474  ldr s1,[x9, #0x1bc]
7102ef7478  fsub s1,s1,s0
7102ef747c  ldp w9,w10,[x8]
7102ef7480  eor w9,w9,w9, LSL #0xb
7102ef7484  str w10,[x8]
7102ef7488  ldp w10,w11,[x8, #0x8]
7102ef748c  eor w9,w9,w9, LSR #0x8
7102ef7490  eor w9,w9,w11
7102ef7494  eor w9,w9,w11, LSR #0x13
7102ef7498  ucvtf s2,w9
7102ef749c  stp w10,w11,[x8, #0x4]
7102ef74a0  str w9,[x8, #0xc]
7102ef74a4  adrp x8,0x7104473000
7102ef74a8  ldr x9,[x21, #0x2b8]
7102ef74ac  fmul s1,s1,s2
7102ef74b0  ldr s2,[x8, #0x710]
7102ef74b4  mov w8,#0x4
7102ef74b8  str w8,[x21, #0x24]
7102ef74bc  ldr x8,[x21, #0x2b0]
7102ef74c0  fmul s4,s1,s2
7102ef74c4  fadd s0,s0,s4
7102ef74c8  str s0,[x21, #0x28]
7102ef74cc  ldr x8,[x8, #0x340]
7102ef74d0  ldr s0,[x9, #0x1b8]
7102ef74d4  ldr s1,[x9, #0x1bc]
7102ef74d8  fsub s1,s1,s0
7102ef74dc  ldp w9,w10,[x8]
7102ef74e0  str w10,[x8]
7102ef74e4  ldp w10,w11,[x8, #0x8]
7102ef74e8  eor w9,w9,w9, LSL #0xb
7102ef74ec  eor w9,w9,w9, LSR #0x8
7102ef74f0  eor w9,w9,w11
7102ef74f4  eor w9,w9,w11, LSR #0x13
7102ef74f8  ucvtf s3,w9
7102ef74fc  fmul s1,s1,s3
7102ef7500  fmul s4,s1,s2
7102ef7504  fadd s0,s0,s4
7102ef7508  stp w10,w11,[x8, #0x4]
7102ef750c  str w9,[x8, #0xc]
7102ef7510  mov w8,#0x5
7102ef7514  str w8,[x21, #0x30]
7102ef7518  str s0,[x21, #0x34]
7102ef751c  ldr x0,[x19, #0x978]
7102ef7520  ldr x1,[x19, #0x980]
7102ef7524  ldr x2,[x19, #0x988]
7102ef7528  bl 0x7102efca80
7102ef752c  ldr x0,[x19, #0x978]
7102ef7530  ldr x1,[x19, #0x990]
7102ef7534  ldr x2,[x19, #0x998]
7102ef7538  bl 0x7102efcf00
7102ef753c  ldr x0,[x19, #0x978]
7102ef7540  ldr x1,[x19, #0x9a0]
7102ef7544  bl 0x7102efcfe0
7102ef7548  ldr x8,[x19, #0x300]
7102ef754c  ldr x9,[x8, #0x18]
7102ef7550  ldp x8,x9,[x9]
7102ef7554  cmp x8,x9
7102ef7558  b.eq 0x7102ef75fc
7102ef755c  mov x10,#0xdf99
7102ef7560  movk x10,#0xb569, LSL #16
7102ef7564  movk x10,#0x7, LSL #32
7102ef7568  ldr x11,[x8], #0x8
7102ef756c  ldr x12,[x11, #0xa0]
7102ef7570  and x12,x12,#0xffffffffff
7102ef7574  cmp x12,x10
7102ef7578  b.eq 0x7102ef7588
7102ef757c  cmp x9,x8
7102ef7580  b.ne 0x7102ef7568
7102ef7584  b 0x7102ef75fc
7102ef7588  cbz x11,0x7102ef75fc
7102ef758c  ldr x8,[x11, #0x130]
7102ef7590  str x8,[x19, #0x9a8]
7102ef7594  cbz x8,0x7102ef75fc
7102ef7598  ldp x0,x1,[x8]
7102ef759c  adrp x2,0x71042a1000
7102ef75a0  add x2,x2,#0x67e
7102ef75a4  bl 0x71025f55b0
7102ef75a8  ldr x8,[x19, #0x9a8]
7102ef75ac  ldp x0,x1,[x8]
7102ef75b0  adrp x2,0x71043bc000
7102ef75b4  add x2,x2,#0xb6c
7102ef75b8  bl 0x71025f55b0
7102ef75bc  ldr x8,[x19, #0x9a8]
7102ef75c0  ldp x0,x1,[x8]
7102ef75c4  adrp x2,0x710436a000
7102ef75c8  add x2,x2,#0x9e7
7102ef75cc  bl 0x71025f55b0
7102ef75d0  ldr x8,[x19, #0x9a8]
7102ef75d4  cbz x8,0x7102ef75fc
7102ef75d8  ldp x0,x1,[x8]
7102ef75dc  adrp x2,0x71042a1000
7102ef75e0  add x2,x2,#0x676
7102ef75e4  bl 0x71025f5420
7102ef75e8  ldr x8,[x19, #0x9a8]
7102ef75ec  ldp x0,x1,[x8]
7102ef75f0  adrp x2,0x7104441000
7102ef75f4  add x2,x2,#0xec7
7102ef75f8  bl 0x71025f55b0
7102ef75fc  ldrb w8,[x19, #0x18]
7102ef7600  cbz w8,0x7102ef760c
7102ef7604  mov x0,x19
7102ef7608  bl 0x7102ef7b90
7102ef760c  mov w0,#0x10
7102ef7610  mov w1,#0x20
7102ef7614  bl 0x710392e290
7102ef7618  mov x20,x0
7102ef761c  cbnz x0,0x7102ef7668
7102ef7620  adrp x8,0x7105332000
7102ef7624  ldr x0,[x8, #0xf00]
7102ef7628  cbz x0,0x7102ef7664
7102ef762c  mov w8,#0x20
7102ef7630  str wzr,[sp, #0x4c]
7102ef7634  add x1,sp,#0x4c
7102ef7638  str x8,[sp]
7102ef763c  ldr x8,[x0]
7102ef7640  ldr x8,[x8, #0x30]
7102ef7644  mov x2,sp
7102ef7648  blr x8
7102ef764c  tbz w0,#0x0,0x7102ef7664
7102ef7650  mov w0,#0x10
7102ef7654  mov w1,#0x20
7102ef7658  bl 0x710392e290
7102ef765c  mov x20,x0
7102ef7660  cbnz x0,0x7102ef7668
7102ef7664  mov x20,xzr
7102ef7668  mov x8,#0x55b8
7102ef766c  movk x8,#0x8a99, LSL #16
7102ef7670  movk x8,#0x1c, LSL #32
7102ef7674  mov x21,x20
7102ef7678  mov x9,#0xd9ba
7102ef767c  movk x9,#0x9d22, LSL #16
7102ef7680  str x8,[x21, #0x18]!
7102ef7684  mov x8,#0x2e7e
7102ef7688  movk x8,#0x3f6f, LSL #16
7102ef768c  movk x8,#0x18, LSL #32
7102ef7690  movk x9,#0x19, LSL #32
7102ef7694  stp x8,x9,[x20]
7102ef7698  mov x9,#0x3985
7102ef769c  movk x9,#0x5eb9, LSL #16
7102ef76a0  movk x9,#0x1b, LSL #32
7102ef76a4  str x9,[x20, #0x10]
7102ef76a8  mov w22,#0x1
7102ef76ac  mov w23,#0x101
7102ef76b0  mov x24,x20
7102ef76b4  ands x8,x8,#0xffffffffff
7102ef76b8  b.ne 0x7102ef76cc
7102ef76bc  b 0x7102ef7704
7102ef76c0  ldr x8,[x24, #0x8]!
7102ef76c4  ands x8,x8,#0xffffffffff
7102ef76c8  b.eq 0x7102ef7704
7102ef76cc  ldr x10,[x19, #0x310]
7102ef76d0  ldp x9,x10,[x10, #0xd0]
7102ef76d4  cmp x9,x10
7102ef76d8  b.eq 0x7102ef7704
7102ef76dc  ldr w11,[x9, #0x8]
7102ef76e0  cmp w11,#0x1
7102ef76e4  b.hi 0x7102ef76f8
7102ef76e8  ldr x25,[x9]
7102ef76ec  ldr x11,[x25, #0x68]
7102ef76f0  cmp x8,x11
7102ef76f4  b.eq 0x7102ef7710
7102ef76f8  add x9,x9,#0x10
7102ef76fc  cmp x10,x9
7102ef7700  b.ne 0x7102ef76dc
7102ef7704  cmp x24,x21
7102ef7708  b.ne 0x7102ef76c0
7102ef770c  b 0x7102ef7758
7102ef7710  cbz x25,0x7102ef7704
7102ef7714  add x0,x25,#0x108
7102ef7718  strb wzr,[x25, #0x110]
7102ef771c  bl 0x71025e9d50
7102ef7720  ldrb w8,[x25, #0xe0]
7102ef7724  cbz w8,0x7102ef7734
7102ef7728  ldr x8,[x25, #0xc8]
7102ef772c  cbz x8,0x7102ef7734
7102ef7730  strh w23,[x8, #0x30]
7102ef7734  ldr x8,[x25, #0xd8]
7102ef7738  cbz x8,0x7102ef7740
7102ef773c  strb w22,[x8, #0x21]
7102ef7740  ldrb w8,[x25, #0xe0]
7102ef7744  cbz w8,0x7102ef7704
7102ef7748  ldr x8,[x25, #0xb0]
7102ef774c  strb wzr,[x8, #0x10]
7102ef7750  cmp x24,x21
7102ef7754  b.ne 0x7102ef76c0
7102ef7758  cbz x20,0x7102ef7764
7102ef775c  mov x0,x20
7102ef7760  bl 0x710392eb40
7102ef7764  adrp x8,0x71052b9000
7102ef7768  ldr x0,[x8, #0x390]
7102ef776c  cbz x0,0x7102ef77a0
7102ef7770  orr w8,wzr,#0x3f800000
7102ef7774  str w8,[sp, #0x8]
7102ef7778  mov x8,#0xbf800000
7102ef777c  stp xzr,xzr,[sp, #0x10]
7102ef7780  movk x8,#0x2, LSL #32
7102ef7784  mov x1,sp
7102ef7788  stur xzr,[sp, #0x37]
7102ef778c  str xzr,[sp, #0x30]
7102ef7790  str xzr,[sp]
7102ef7794  stp x8,xzr,[sp, #0x20]
7102ef7798  bl 0x710056c360
7102ef779c  str w0,[x19, #0x95c]
7102ef77a0  ldp x29,x30,[sp, #0xa0]
7102ef77a4  ldp x20,x19,[sp, #0x90]
7102ef77a8  ldp x22,x21,[sp, #0x80]
7102ef77ac  ldp x24,x23,[sp, #0x70]
7102ef77b0  ldp x26,x25,[sp, #0x60]
7102ef77b4  ldp x28,x27,[sp, #0x50]
7102ef77b8  add sp,sp,#0xb0
7102ef77bc  ret
