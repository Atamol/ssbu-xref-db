// addr:      7101ec6b10
// offset:    0x1ec6b10
// name:      FUN_7101ec6b10
// mangled:   
// size:      1848

7101ec6b10  stp x28,x27,[sp, #-0x60]!
7101ec6b14  stp x26,x25,[sp, #0x10]
7101ec6b18  stp x24,x23,[sp, #0x20]
7101ec6b1c  stp x22,x21,[sp, #0x30]
7101ec6b20  stp x20,x19,[sp, #0x40]
7101ec6b24  stp x29,x30,[sp, #0x50]
7101ec6b28  add x29,sp,#0x50
7101ec6b2c  sub sp,sp,#0x1e0
7101ec6b30  sub x9,x29,#0xc0
7101ec6b34  mov x10,#0x6e6d
7101ec6b38  movk x10,#0x5f75, LSL #16
7101ec6b3c  mov x11,#0x6572
7101ec6b40  movk x11,#0x7461, LSL #16
7101ec6b44  add x24,x9,#0x8
7101ec6b48  add x16,x9,#0x9
7101ec6b4c  mov x9,#0x7265
7101ec6b50  movk x9,#0x675f, LSL #16
7101ec6b54  add x13,sp,#0x98
7101ec6b58  mov x15,#0x2200000000
7101ec6b5c  movk x10,#0x7473, LSL #32
7101ec6b60  movk x10,#0x6367, LSL #48
7101ec6b64  stp x15,x10,[x29, #-0xc0]
7101ec6b68  mov w8,#0x9dc5
7101ec6b6c  movk w8,#0x811c, LSL #16
7101ec6b70  movk x11,#0x5f65, LSL #32
7101ec6b74  movk x11,#0x6465, LSL #48
7101ec6b78  stur x11,[x29, #-0xb0]
7101ec6b7c  mov w12,#0x7469
7101ec6b80  sturh w12,[x29, #-0xa8]
7101ec6b84  mov x14,#0x635f
7101ec6b88  movk x14,#0x6768, LSL #16
7101ec6b8c  movk x9,#0x6975, LSL #32
7101ec6b90  movk x9,#0x6564, LSL #48
7101ec6b94  stur x9,[x13, #0xfa]
7101ec6b98  mov x19,x0
7101ec6b9c  movk x14,#0x6c5f, LSL #32
7101ec6ba0  movk x14,#0x7961, LSL #48
7101ec6ba4  stur x14,[x13, #0xf2]
7101ec6ba8  sturb wzr,[x29, #-0x96]
7101ec6bac  mov w17,#0x6d
7101ec6bb0  mov w9,#0x89
7101ec6bb4  mov w18,w8
7101ec6bb8  mul w18,w18,w9
7101ec6bbc  and w17,w17,#0xff
7101ec6bc0  eor w18,w18,w17
7101ec6bc4  ldrb w17,[x16], #0x1
7101ec6bc8  cbnz w17,0x7101ec6bb8
7101ec6bcc  mov x16,#0x6f5f
7101ec6bd0  movk x16,#0x6570, LSL #16
7101ec6bd4  str x11,[sp, #0x138]
7101ec6bd8  movk x16,#0x6172, LSL #32
7101ec6bdc  movk x16,#0x6974, LSL #48
7101ec6be0  strh w12,[sp, #0x140]
7101ec6be4  stp x15,x10,[sp, #0x128]
7101ec6be8  add x15,sp,#0x128
7101ec6bec  stur x16,[x13, #0xaa]
7101ec6bf0  mov x16,#0x6e6f
7101ec6bf4  movk x16,#0x675f, LSL #16
7101ec6bf8  movk x16,#0x6975, LSL #32
7101ec6bfc  movk x16,#0x6564, LSL #48
7101ec6c00  add x23,x15,#0x8
7101ec6c04  add x15,x15,#0x9
7101ec6c08  stur x16,[x13, #0xb2]
7101ec6c0c  mov w16,#0x6d
7101ec6c10  mov w17,w8
7101ec6c14  stur w18,[x29, #-0xc0]
7101ec6c18  strb wzr,[sp, #0x152]
7101ec6c1c  mul w17,w17,w9
7101ec6c20  and w16,w16,#0xff
7101ec6c24  eor w17,w17,w16
7101ec6c28  ldrb w16,[x15], #0x1
7101ec6c2c  cbnz w16,0x7101ec6c1c
7101ec6c30  mov x15,#0x2400000000
7101ec6c34  add x16,sp,#0xe0
7101ec6c38  mov w0,#0x6975
7101ec6c3c  movk w0,#0x6564, LSL #16
7101ec6c40  stp x15,x10,[sp, #0xe0]
7101ec6c44  add x22,x16,#0x8
7101ec6c48  add x15,x16,#0x9
7101ec6c4c  mov x16,#0x6c5f
7101ec6c50  movk x16,#0x7961, LSL #16
7101ec6c54  str w17,[sp, #0x128]
7101ec6c58  movk x16,#0x7265, LSL #32
7101ec6c5c  movk x16,#0x705f, LSL #48
7101ec6c60  mov w17,#0x6e61
7101ec6c64  movk w17,#0x6c65, LSL #16
7101ec6c68  str x11,[sp, #0xf0]
7101ec6c6c  strh w12,[sp, #0xf8]
7101ec6c70  stur x16,[x13, #0x62]
7101ec6c74  stur w17,[x13, #0x6a]
7101ec6c78  mov w18,#0x675f
7101ec6c7c  str w0,[sp, #0x108]
7101ec6c80  mov w0,#0x6d
7101ec6c84  mov w1,w8
7101ec6c88  strh w18,[sp, #0x106]
7101ec6c8c  strb wzr,[sp, #0x10c]
7101ec6c90  mul w1,w1,w9
7101ec6c94  and w0,w0,#0xff
7101ec6c98  eor w1,w1,w0
7101ec6c9c  ldrb w0,[x15], #0x1
7101ec6ca0  cbnz w0,0x7101ec6c90
7101ec6ca4  add x0,sp,#0x98
7101ec6ca8  str w1,[sp, #0xe0]
7101ec6cac  mov x1,#0x5f6f
7101ec6cb0  movk x1,#0x7567, LSL #16
7101ec6cb4  add x21,x0,#0x8
7101ec6cb8  add x2,x0,#0x9
7101ec6cbc  mov x0,#0x625f
7101ec6cc0  movk x0,#0x6e74, LSL #16
7101ec6cc4  str x11,[sp, #0xa8]
7101ec6cc8  mov x15,#0x2100000000
7101ec6ccc  movk x0,#0x755f, LSL #32
7101ec6cd0  movk x0,#0x646e, LSL #48
7101ec6cd4  movk x1,#0x6469, LSL #32
7101ec6cd8  movk x1,#0x65, LSL #48
7101ec6cdc  strh w12,[sp, #0xb0]
7101ec6ce0  mov w3,#0x6d
7101ec6ce4  stp x15,x10,[sp, #0x98]
7101ec6ce8  mov w4,w8
7101ec6cec  stur x0,[x13, #0x1a]
7101ec6cf0  stur x1,[x13, #0x22]
7101ec6cf4  mul w4,w4,w9
7101ec6cf8  and w3,w3,#0xff
7101ec6cfc  eor w4,w4,w3
7101ec6d00  ldrb w3,[x2], #0x1
7101ec6d04  cbnz w3,0x7101ec6cf4
7101ec6d08  stp x15,x10,[sp, #0x50]
7101ec6d0c  add x15,sp,#0x50
7101ec6d10  add x20,x15,#0x8
7101ec6d14  add x2,x15,#0x9
7101ec6d18  mov x15,#0x625f
7101ec6d1c  movk x15,#0x6e74, LSL #16
7101ec6d20  str w4,[sp, #0x98]
7101ec6d24  movk x15,#0x725f, LSL #32
7101ec6d28  movk x15,#0x6465, LSL #48
7101ec6d2c  mov w3,#0x6d
7101ec6d30  mov w4,w8
7101ec6d34  str x11,[sp, #0x60]
7101ec6d38  strh w12,[sp, #0x68]
7101ec6d3c  stur x15,[sp, #0x6a]
7101ec6d40  stur x1,[sp, #0x72]
7101ec6d44  and w1,w3,#0xff
7101ec6d48  mul w3,w4,w9
7101ec6d4c  eor w4,w3,w1
7101ec6d50  ldrb w3,[x2], #0x1
7101ec6d54  cbnz w3,0x7101ec6d44
7101ec6d58  adrp x26,0x7105329000
7101ec6d5c  ldr x1,[x26, #0xd78]
7101ec6d60  str w4,[sp, #0x50]
7101ec6d64  ldr x1,[x1, #0x8]
7101ec6d68  ldr w2,[x1, #0x750]
7101ec6d6c  cmp w2,#0x1
7101ec6d70  b.ne 0x7101ec6f08
7101ec6d74  ldr w1,[x1, #0x5d8]
7101ec6d78  cbnz w1,0x7101ec6f08
7101ec6d7c  stp x10,x11,[x29, #-0xb8]
7101ec6d80  sub x1,x29,#0xc0
7101ec6d84  sturh w12,[x29, #-0xa8]
7101ec6d88  mov w3,#0x2b
7101ec6d8c  add x1,x1,#0x9
7101ec6d90  stur x14,[x13, #0xf2]
7101ec6d94  mov w14,#0x7265
7101ec6d98  movk w14,#0x675f, LSL #16
7101ec6d9c  stur w14,[x13, #0xfa]
7101ec6da0  mov w14,#0x6975
7101ec6da4  mov w2,#0x6d
7101ec6da8  sturh w14,[x29, #-0x9a]
7101ec6dac  mov x14,#0x6564
7101ec6db0  movk x14,#0x6c5f, LSL #16
7101ec6db4  movk x14,#0x6665, LSL #32
7101ec6db8  movk x14,#0x6874, LSL #48
7101ec6dbc  stur x14,[x29, #-0x98]
7101ec6dc0  mov w14,#0x6e61
7101ec6dc4  movk w14,#0x64, LSL #16
7101ec6dc8  stur w3,[x29, #-0xbc]
7101ec6dcc  mov w3,w8
7101ec6dd0  stur w14,[x29, #-0x90]
7101ec6dd4  mul w3,w3,w9
7101ec6dd8  and w2,w2,#0xff
7101ec6ddc  eor w3,w3,w2
7101ec6de0  ldrb w2,[x1], #0x1
7101ec6de4  cbnz w2,0x7101ec6dd4
7101ec6de8  stp x10,x11,[sp, #0xe8]
7101ec6dec  add x1,sp,#0xe0
7101ec6df0  strh w12,[sp, #0xf8]
7101ec6df4  add x1,x1,#0x9
7101ec6df8  stur x16,[x13, #0x62]
7101ec6dfc  mov x16,#0x6975
7101ec6e00  movk x16,#0x6564, LSL #16
7101ec6e04  movk x16,#0x6c5f, LSL #32
7101ec6e08  movk x16,#0x6665, LSL #48
7101ec6e0c  stur w17,[x13, #0x6a]
7101ec6e10  mov w17,#0x2d
7101ec6e14  str x16,[sp, #0x108]
7101ec6e18  mov w16,#0x6874
7101ec6e1c  strh w18,[sp, #0x106]
7101ec6e20  strh w16,[sp, #0x110]
7101ec6e24  mov w16,w8
7101ec6e28  stur w14,[x13, #0x7a]
7101ec6e2c  mov w14,#0x6d
7101ec6e30  stur w3,[x29, #-0xc0]
7101ec6e34  str w17,[sp, #0xe4]
7101ec6e38  mul w16,w16,w9
7101ec6e3c  and w14,w14,#0xff
7101ec6e40  eor w16,w16,w14
7101ec6e44  ldrb w14,[x1], #0x1
7101ec6e48  cbnz w14,0x7101ec6e38
7101ec6e4c  add x14,sp,#0x98
7101ec6e50  str w16,[sp, #0xe0]
7101ec6e54  mov x16,#0x5f65
7101ec6e58  movk x16,#0x656c, LSL #16
7101ec6e5c  add x1,x14,#0x9
7101ec6e60  mov w14,#0x5f6f
7101ec6e64  movk w14,#0x7567, LSL #16
7101ec6e68  stp x10,x11,[sp, #0xa0]
7101ec6e6c  strh w12,[sp, #0xb0]
7101ec6e70  stur x0,[x13, #0x1a]
7101ec6e74  movk x16,#0x7466, LSL #32
7101ec6e78  movk x16,#0x6168, LSL #48
7101ec6e7c  stur w14,[x13, #0x22]
7101ec6e80  mov w13,#0x6469
7101ec6e84  mov w18,#0x646e
7101ec6e88  mov w17,#0x2a
7101ec6e8c  mov w0,#0x6d
7101ec6e90  mov w2,w8
7101ec6e94  strh w13,[sp, #0xbe]
7101ec6e98  str x16,[sp, #0xc0]
7101ec6e9c  strh w18,[sp, #0xc8]
7101ec6ea0  strb wzr,[sp, #0xca]
7101ec6ea4  str w17,[sp, #0x9c]
7101ec6ea8  mul w2,w2,w9
7101ec6eac  and w0,w0,#0xff
7101ec6eb0  eor w2,w2,w0
7101ec6eb4  ldrb w0,[x1], #0x1
7101ec6eb8  cbnz w0,0x7101ec6ea8
7101ec6ebc  stp x10,x11,[sp, #0x58]
7101ec6ec0  add x10,sp,#0x50
7101ec6ec4  add x10,x10,#0x9
7101ec6ec8  mov w11,#0x6d
7101ec6ecc  str w2,[sp, #0x98]
7101ec6ed0  strh w12,[sp, #0x68]
7101ec6ed4  stur x15,[sp, #0x6a]
7101ec6ed8  stur w14,[sp, #0x72]
7101ec6edc  strh w13,[sp, #0x76]
7101ec6ee0  str x16,[sp, #0x78]
7101ec6ee4  strh w18,[sp, #0x80]
7101ec6ee8  strb wzr,[sp, #0x82]
7101ec6eec  str w17,[sp, #0x54]
7101ec6ef0  mul w8,w8,w9
7101ec6ef4  and w11,w11,#0xff
7101ec6ef8  eor w8,w8,w11
7101ec6efc  ldrb w11,[x10], #0x1
7101ec6f00  cbnz w11,0x7101ec6ef0
7101ec6f04  str w8,[sp, #0x50]
7101ec6f08  ldr x0,[x19, #0x8]
7101ec6f0c  bl 0x7101ec57e0
7101ec6f10  ldr x0,[x19, #0x8]
7101ec6f14  adrp x1,0x710437c000
7101ec6f18  add x1,x1,#0xc66
7101ec6f1c  sub x8,x29,#0x68
7101ec6f20  bl 0x7103776640
7101ec6f24  adrp x1,0x71042a1000
7101ec6f28  add x1,x1,#0xaf1
7101ec6f2c  add x8,sp,#0x40
7101ec6f30  sub x0,x29,#0x68
7101ec6f34  bl 0x7103776910
7101ec6f38  ldur x25,[x29, #-0x60]
7101ec6f3c  adrp x27,0x710523d000
7101ec6f40  add x27,x27,#0x988
7101ec6f44  stp x27,xzr,[x29, #-0x68]
7101ec6f48  cbz x25,0x7101ec6f6c
7101ec6f4c  ldr x0,[x25, #0x18]
7101ec6f50  adrp x8,0x710523d000
7101ec6f54  add x8,x8,#0x9a8
7101ec6f58  stp x8,xzr,[x25, #0x10]
7101ec6f5c  cbz x0,0x7101ec6f64
7101ec6f60  bl 0x710392eb40
7101ec6f64  mov x0,x25
7101ec6f68  bl 0x710392eb40
7101ec6f6c  add x0,sp,#0x40
7101ec6f70  mov x1,x24
7101ec6f74  bl 0x710377a120
7101ec6f78  ldr x0,[x19, #0x8]
7101ec6f7c  adrp x1,0x7104401000
7101ec6f80  add x1,x1,#0xcf9
7101ec6f84  sub x8,x29,#0x68
7101ec6f88  bl 0x7103776640
7101ec6f8c  adrp x1,0x71042a1000
7101ec6f90  add x1,x1,#0xaf1
7101ec6f94  add x8,sp,#0x30
7101ec6f98  sub x0,x29,#0x68
7101ec6f9c  bl 0x7103776910
7101ec6fa0  ldur x24,[x29, #-0x60]
7101ec6fa4  stp x27,xzr,[x29, #-0x68]
7101ec6fa8  cbz x24,0x7101ec6fcc
7101ec6fac  ldr x0,[x24, #0x18]
7101ec6fb0  adrp x8,0x710523d000
7101ec6fb4  add x8,x8,#0x9a8
7101ec6fb8  stp x8,xzr,[x24, #0x10]
7101ec6fbc  cbz x0,0x7101ec6fc4
7101ec6fc0  bl 0x710392eb40
7101ec6fc4  mov x0,x24
7101ec6fc8  bl 0x710392eb40
7101ec6fcc  add x0,sp,#0x30
7101ec6fd0  mov x1,x23
7101ec6fd4  bl 0x710377a120
7101ec6fd8  ldr x0,[x19, #0x8]
7101ec6fdc  adrp x1,0x710438d000
7101ec6fe0  add x1,x1,#0x2ad
7101ec6fe4  sub x8,x29,#0x68
7101ec6fe8  bl 0x7103776640
7101ec6fec  adrp x1,0x71042a1000
7101ec6ff0  add x1,x1,#0xaf1
7101ec6ff4  add x8,sp,#0x20
7101ec6ff8  sub x0,x29,#0x68
7101ec6ffc  bl 0x7103776910
7101ec7000  ldur x23,[x29, #-0x60]
7101ec7004  stp x27,xzr,[x29, #-0x68]
7101ec7008  cbz x23,0x7101ec702c
7101ec700c  ldr x0,[x23, #0x18]
7101ec7010  adrp x8,0x710523d000
7101ec7014  add x8,x8,#0x9a8
7101ec7018  stp x8,xzr,[x23, #0x10]
7101ec701c  cbz x0,0x7101ec7024
7101ec7020  bl 0x710392eb40
7101ec7024  mov x0,x23
7101ec7028  bl 0x710392eb40
7101ec702c  add x0,sp,#0x20
7101ec7030  mov x1,x22
7101ec7034  bl 0x710377a120
7101ec7038  ldr x0,[x19, #0x8]
7101ec703c  adrp x1,0x710436c000
7101ec7040  add x1,x1,#0xafb
7101ec7044  sub x8,x29,#0x68
7101ec7048  bl 0x7103776640
7101ec704c  adrp x1,0x71043ad000
7101ec7050  add x1,x1,#0xfe3
7101ec7054  add x8,sp,#0x10
7101ec7058  sub x0,x29,#0x68
7101ec705c  bl 0x7103776910
7101ec7060  ldur x22,[x29, #-0x60]
7101ec7064  stp x27,xzr,[x29, #-0x68]
7101ec7068  cbz x22,0x7101ec708c
7101ec706c  ldr x0,[x22, #0x18]
7101ec7070  adrp x8,0x710523d000
7101ec7074  add x8,x8,#0x9a8
7101ec7078  stp x8,xzr,[x22, #0x10]
7101ec707c  cbz x0,0x7101ec7084
7101ec7080  bl 0x710392eb40
7101ec7084  mov x0,x22
7101ec7088  bl 0x710392eb40
7101ec708c  add x0,sp,#0x10
7101ec7090  mov x1,x21
7101ec7094  bl 0x710377a120
7101ec7098  ldr x0,[x19, #0x8]
7101ec709c  adrp x1,0x710438d000
7101ec70a0  add x1,x1,#0x2c2
7101ec70a4  sub x8,x29,#0x68
7101ec70a8  bl 0x7103776640
7101ec70ac  adrp x1,0x71043ad000
7101ec70b0  add x1,x1,#0xfe3
7101ec70b4  mov x8,sp
7101ec70b8  sub x0,x29,#0x68
7101ec70bc  bl 0x7103776910
7101ec70c0  ldur x21,[x29, #-0x60]
7101ec70c4  stp x27,xzr,[x29, #-0x68]
7101ec70c8  cbz x21,0x7101ec70ec
7101ec70cc  ldr x0,[x21, #0x18]
7101ec70d0  adrp x8,0x710523d000
7101ec70d4  add x8,x8,#0x9a8
7101ec70d8  stp x8,xzr,[x21, #0x10]
7101ec70dc  cbz x0,0x7101ec70e4
7101ec70e0  bl 0x710392eb40
7101ec70e4  mov x0,x21
7101ec70e8  bl 0x710392eb40
7101ec70ec  mov x0,sp
7101ec70f0  mov x1,x20
7101ec70f4  bl 0x710377a120
7101ec70f8  ldr x0,[x19, #0x8]
7101ec70fc  ldr x20,[x26, #0xd78]
7101ec7100  adrp x1,0x71042b4000
7101ec7104  add x1,x1,#0xb43
7101ec7108  sub x8,x29,#0x78
7101ec710c  bl 0x7103776640
7101ec7110  adrp x1,0x710424f000
7101ec7114  add x1,x1,#0xc76
7101ec7118  sub x8,x29,#0x68
7101ec711c  sub x0,x29,#0x78
7101ec7120  bl 0x7103776910
7101ec7124  ldur x19,[x29, #-0x70]
7101ec7128  stp x27,xzr,[x29, #-0x78]
7101ec712c  cbz x19,0x7101ec7150
7101ec7130  ldr x0,[x19, #0x18]
7101ec7134  adrp x8,0x710523d000
7101ec7138  add x8,x8,#0x9a8
7101ec713c  stp x8,xzr,[x19, #0x10]
7101ec7140  cbz x0,0x7101ec7148
7101ec7144  bl 0x710392eb40
7101ec7148  mov x0,x19
7101ec714c  bl 0x710392eb40
7101ec7150  ldr x8,[x20, #0x8]
7101ec7154  ldur x19,[x29, #-0x60]
7101ec7158  ldr w10,[x8, #0x74c]
7101ec715c  ldr x9,[x19]
7101ec7160  cmp w10,#0x1
7101ec7164  b.ne 0x7101ec717c
7101ec7168  cbz x9,0x7101ec71c0
7101ec716c  ldrb w8,[x9, #0x58]
7101ec7170  and w8,w8,#0xfe
7101ec7174  strb w8,[x9, #0x58]
7101ec7178  b 0x7101ec71c0
7101ec717c  cbz x9,0x7101ec7190
7101ec7180  ldrb w8,[x9, #0x58]
7101ec7184  orr w8,w8,#0x1
7101ec7188  strb w8,[x9, #0x58]
7101ec718c  ldr x8,[x20, #0x8]
7101ec7190  ldr w9,[x8, #0x750]
7101ec7194  cmp w9,#0x1
7101ec7198  b.ne 0x7101ec71a4
7101ec719c  ldr w8,[x8, #0x5d8]
7101ec71a0  cbz w8,0x7101ec71b0
7101ec71a4  adrp x1,0x71042e7000
7101ec71a8  add x1,x1,#0xa4f
7101ec71ac  b 0x7101ec71b8
7101ec71b0  adrp x1,0x710436c000
7101ec71b4  add x1,x1,#0xb08
7101ec71b8  sub x0,x29,#0x68
7101ec71bc  bl 0x710377a120
7101ec71c0  adrp x20,0x710523d000
7101ec71c4  add x20,x20,#0x9a8
7101ec71c8  stp x20,xzr,[x29, #-0x68]
7101ec71cc  cbz x19,0x7101ec71d8
7101ec71d0  mov x0,x19
7101ec71d4  bl 0x710392eb40
7101ec71d8  ldr x0,[sp, #0x8]
7101ec71dc  stp x20,xzr,[sp]
7101ec71e0  cbz x0,0x7101ec71e8
7101ec71e4  bl 0x710392eb40
7101ec71e8  ldr x0,[sp, #0x18]
7101ec71ec  stp x20,xzr,[sp, #0x10]
7101ec71f0  cbz x0,0x7101ec71f8
7101ec71f4  bl 0x710392eb40
7101ec71f8  ldr x0,[sp, #0x28]
7101ec71fc  stp x20,xzr,[sp, #0x20]
7101ec7200  cbz x0,0x7101ec7208
7101ec7204  bl 0x710392eb40
7101ec7208  ldr x0,[sp, #0x38]
7101ec720c  stp x20,xzr,[sp, #0x30]
7101ec7210  cbz x0,0x7101ec7218
7101ec7214  bl 0x710392eb40
7101ec7218  ldr x0,[sp, #0x48]
7101ec721c  stp x20,xzr,[sp, #0x40]
7101ec7220  cbz x0,0x7101ec7228
7101ec7224  bl 0x710392eb40
7101ec7228  add sp,sp,#0x1e0
7101ec722c  ldp x29,x30,[sp, #0x50]
7101ec7230  ldp x20,x19,[sp, #0x40]
7101ec7234  ldp x22,x21,[sp, #0x30]
7101ec7238  ldp x24,x23,[sp, #0x20]
7101ec723c  ldp x26,x25,[sp, #0x10]
7101ec7240  ldp x28,x27,[sp], #0x60
7101ec7244  ret
