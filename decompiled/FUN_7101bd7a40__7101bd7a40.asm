// addr:      7101bd7a40
// offset:    0x1bd7a40
// name:      FUN_7101bd7a40
// mangled:   
// size:      9880

7101bd7a40  str d8,[sp, #-0x70]!
7101bd7a44  stp x28,x27,[sp, #0x10]
7101bd7a48  stp x26,x25,[sp, #0x20]
7101bd7a4c  stp x24,x23,[sp, #0x30]
7101bd7a50  stp x22,x21,[sp, #0x40]
7101bd7a54  stp x20,x19,[sp, #0x50]
7101bd7a58  stp x29,x30,[sp, #0x60]
7101bd7a5c  add x29,sp,#0x60
7101bd7a60  sub sp,sp,#0x190
7101bd7a64  mov x19,x0
7101bd7a68  ldr x0,[x0, #0x180]
7101bd7a6c  mov w22,w1
7101bd7a70  cbz x0,0x7101bd7a94
7101bd7a74  ldr x8,[x0]
7101bd7a78  ldr x8,[x8, #0x68]
7101bd7a7c  blr x8
7101bd7a80  tbz w0,#0x0,0x7101bd7a94
7101bd7a84  ldr x8,[x19, #0x180]
7101bd7a88  ldr w23,[x8, #0x254]
7101bd7a8c  tbnz w22,#0x0,0x7101bd7ba8
7101bd7a90  b 0x7101bd7ac4
7101bd7a94  ldr x0,[x19, #0x178]
7101bd7a98  cbz x0,0x7101bd7abc
7101bd7a9c  ldr x8,[x0]
7101bd7aa0  ldr x8,[x8, #0x68]
7101bd7aa4  blr x8
7101bd7aa8  tbz w0,#0x0,0x7101bd7abc
7101bd7aac  ldr x8,[x19, #0x178]
7101bd7ab0  ldr w23,[x8, #0x2a4]
7101bd7ab4  tbz w22,#0x0,0x7101bd7ac4
7101bd7ab8  b 0x7101bd7ba8
7101bd7abc  mov w23,#0xffffffff
7101bd7ac0  tbnz w22,#0x0,0x7101bd7ba8
7101bd7ac4  ldr w1,[x19, #0x1c0]
7101bd7ac8  cmn w1,#0x1
7101bd7acc  b.eq 0x7101bd7e1c
7101bd7ad0  add x0,x19,#0x188
7101bd7ad4  mov w2,wzr
7101bd7ad8  bl 0x7103771a80
7101bd7adc  ldr x0,[x19, #0x188]
7101bd7ae0  ldr x8,[x0]
7101bd7ae4  ldr x8,[x8, #0x70]
7101bd7ae8  mov w1,wzr
7101bd7aec  blr x8
7101bd7af0  ldr w8,[x19, #0x1c0]
7101bd7af4  str w8,[x19, #0x1bc]
7101bd7af8  mov w8,#0xffffffff
7101bd7afc  str w8,[x19, #0x1c0]
7101bd7b00  ldr w8,[x19, #0x1b8]
7101bd7b04  cmp w8,w23
7101bd7b08  b.ne 0x7101bd7ba8
7101bd7b0c  ldr x0,[x19, #0x178]
7101bd7b10  ldr x8,[x0]
7101bd7b14  ldr x8,[x8, #0x78]
7101bd7b18  ldr w21,[x19, #0x1b4]
7101bd7b1c  blr x8
7101bd7b20  tbz w0,#0x0,0x7101bd7e88
7101bd7b24  ldr x0,[x19, #0x188]
7101bd7b28  ldr x8,[x0]
7101bd7b2c  ldr x8,[x8, #0x78]
7101bd7b30  blr x8
7101bd7b34  tbnz w0,#0x0,0x7101bd7eb0
7101bd7b38  ldrsw x8,[x19, #0x1b8]
7101bd7b3c  cmp w8,#0x1
7101bd7b40  b.lt 0x7101bd7eb8
7101bd7b44  ldr x9,[x19, #0x178]
7101bd7b48  ldr w9,[x9, #0x2b8]
7101bd7b4c  cmp w9,#0x4
7101bd7b50  b.ne 0x7101bd7eb8
7101bd7b54  ldp x9,x10,[x19, #0x198]
7101bd7b58  sub x10,x10,x9
7101bd7b5c  mov x11,#0x5c29
7101bd7b60  movk x11,#0xc28f, LSL #16
7101bd7b64  movk x11,#0x28f5, LSL #32
7101bd7b68  movk x11,#0x8f5c, LSL #48
7101bd7b6c  asr x10,x10,#0x5
7101bd7b70  mul x10,x10,x11
7101bd7b74  sub x8,x8,#0x1
7101bd7b78  cmp x10,x8
7101bd7b7c  b.ls 0x7101bda0c8
7101bd7b80  mov w10,#0x320
7101bd7b84  madd x8,x8,x10,x9
7101bd7b88  ldrh w9,[x19, #0x1b0]
7101bd7b8c  ldrh w8,[x8, #0x10]
7101bd7b90  cmp w8,w9
7101bd7b94  b.ne 0x7101bd7eb8
7101bd7b98  mov w20,wzr
7101bd7b9c  mov w8,#0x2
7101bd7ba0  str w8,[x19, #0x1b4]
7101bd7ba4  b 0x7101bd7ebc
7101bd7ba8  mov x28,x19
7101bd7bac  ldr x8,[x28, #0x10]!
7101bd7bb0  str w23,[x28, #0x1a8]
7101bd7bb4  mov x11,x28
7101bd7bb8  add x20,x19,#0x1b8
7101bd7bbc  ldr x9,[x11, #0x8]!
7101bd7bc0  cmp x9,x8
7101bd7bc4  b.eq 0x7101bda0b0
7101bd7bc8  ldr x8,[x8]
7101bd7bcc  ldr x8,[x8]
7101bd7bd0  ldr x10,[x8]
7101bd7bd4  ldr x8,[x10, #0x10]
7101bd7bd8  ldr x8,[x8, #0x8]
7101bd7bdc  ldr x0,[x19, #0x190]
7101bd7be0  str x11,[sp, #0x58]
7101bd7be4  stur w22,[x29, #-0x58]
7101bd7be8  cbz x8,0x7101bd7cac
7101bd7bec  ldp x8,x9,[x0, #0x180]
7101bd7bf0  sub x11,x9,x8
7101bd7bf4  lsr x11,x11,#0x3
7101bd7bf8  cmp w11,#0x1
7101bd7bfc  b.lt 0x7101bd7cac
7101bd7c00  mov x24,xzr
7101bd7c04  adrp x25,0x710523d000
7101bd7c08  add x25,x25,#0x988
7101bd7c0c  add x21,x10,#0x8
7101bd7c10  adrp x26,0x710523d000
7101bd7c14  add x26,x26,#0x9a8
7101bd7c18  sub x9,x9,x8
7101bd7c1c  lsr x10,x9,#0x3
7101bd7c20  cmp x24,w10, SXTW 
7101bd7c24  b.ge 0x7101bd7c40
7101bd7c28  asr x9,x9,#0x3
7101bd7c2c  cmp x9,x24
7101bd7c30  b.ls 0x7101bda0a8
7101bd7c34  ldr x8,[x8, x24, LSL #0x3]
7101bd7c38  ldr x1,[x8, #0x88]
7101bd7c3c  b 0x7101bd7c44
7101bd7c40  mov x1,xzr
7101bd7c44  sub x8,x29,#0xd8
7101bd7c48  mov x0,x21
7101bd7c4c  bl 0x7103776640
7101bd7c50  ldur x22,[x29, #-0xd0]
7101bd7c54  ldr x8,[x22, #0x8]
7101bd7c58  cbz x8,0x7101bd7c70
7101bd7c5c  ldr x8,[x8, #0x18]
7101bd7c60  cbz x8,0x7101bd7c70
7101bd7c64  ldrb w9,[x8, #0x58]
7101bd7c68  and w9,w9,#0xfe
7101bd7c6c  strb w9,[x8, #0x58]
7101bd7c70  stp x25,xzr,[x29, #-0xd8]
7101bd7c74  cbz x22,0x7101bd7c90
7101bd7c78  ldr x0,[x22, #0x18]
7101bd7c7c  stp x26,xzr,[x22, #0x10]
7101bd7c80  cbz x0,0x7101bd7c88
7101bd7c84  bl 0x710392eb40
7101bd7c88  mov x0,x22
7101bd7c8c  bl 0x710392eb40
7101bd7c90  ldr x0,[x19, #0x190]
7101bd7c94  ldp x8,x9,[x0, #0x180]
7101bd7c98  sub x10,x9,x8
7101bd7c9c  add x24,x24,#0x1
7101bd7ca0  lsr x10,x10,#0x3
7101bd7ca4  cmp x24,w10, SXTW 
7101bd7ca8  b.lt 0x7101bd7c18
7101bd7cac  ldr x8,[x0]
7101bd7cb0  ldr x8,[x8, #0x60]
7101bd7cb4  mov w1,wzr
7101bd7cb8  blr x8
7101bd7cbc  cbz w23,0x7101bd7dac
7101bd7cc0  ldp x25,x8,[x19, #0x198]
7101bd7cc4  sub x8,x8,x25
7101bd7cc8  mov x9,#0x5c29
7101bd7ccc  movk x9,#0xc28f, LSL #16
7101bd7cd0  movk x9,#0x28f5, LSL #32
7101bd7cd4  movk x9,#0x8f5c, LSL #48
7101bd7cd8  asr x8,x8,#0x5
7101bd7cdc  mul x8,x8,x9
7101bd7ce0  ldr x24,[sp, #0x58]
7101bd7ce4  sxtw x9,w23
7101bd7ce8  sub x26,x9,#0x1
7101bd7cec  cmp x8,x26
7101bd7cf0  b.ls 0x7101bd8e58
7101bd7cf4  ldr x10,[x24]
7101bd7cf8  ldr x9,[x28]
7101bd7cfc  cmp x10,x9
7101bd7d00  b.eq 0x7101bda0b0
7101bd7d04  ldr x9,[x9]
7101bd7d08  ldr x9,[x9]
7101bd7d0c  ldr x9,[x9]
7101bd7d10  ldr x10,[x9, #0x10]
7101bd7d14  ldr x10,[x10, #0x8]
7101bd7d18  cbz x10,0x7101bd8e58
7101bd7d1c  add x0,x9,#0x8
7101bd7d20  mov w9,#0x320
7101bd7d24  madd x9,x26,x9,x25
7101bd7d28  ldrh w9,[x9, #0x10]
7101bd7d2c  ldrh w10,[x19, #0x1b0]
7101bd7d30  cmp w9,w10
7101bd7d34  b.ne 0x7101bd7f58
7101bd7d38  ldrsw x9,[x20]
7101bd7d3c  mov w22,wzr
7101bd7d40  cmp w9,#0x1
7101bd7d44  b.lt 0x7101bd7d68
7101bd7d48  cmp x8,x9
7101bd7d4c  b.cc 0x7101bd7d68
7101bd7d50  sub x9,x9,#0x1
7101bd7d54  cmp x8,x9
7101bd7d58  b.ls 0x7101bda0c8
7101bd7d5c  mov w8,#0x320
7101bd7d60  madd x8,x9,x8,x25
7101bd7d64  ldrb w22,[x8, #0xaa]
7101bd7d68  mov w8,#0x320
7101bd7d6c  madd x20,x26,x8,x25
7101bd7d70  str x0,[sp, #0x40]
7101bd7d74  ldrb w8,[x20, #0x4]!
7101bd7d78  mov x10,x20
7101bd7d7c  ldrb w9,[x10, #0x1]!
7101bd7d80  eor w8,w9,w8
7101bd7d84  tst w8,#0x3f
7101bd7d88  str x10,[sp, #0x20]
7101bd7d8c  b.eq 0x7101bd8228
7101bd7d90  mov w8,#0x320
7101bd7d94  madd x8,x26,x8,x25
7101bd7d98  ldrb w9,[x8, #0xab]
7101bd7d9c  ldrb w8,[x8, #0xaa]
7101bd7da0  cmp w9,w8
7101bd7da4  cset w23,ls
7101bd7da8  b 0x7101bd822c
7101bd7dac  ldr x20,[sp, #0x58]
7101bd7db0  ldr x8,[x20]
7101bd7db4  ldr x9,[x28]
7101bd7db8  cmp x8,x9
7101bd7dbc  b.eq 0x7101bda0b0
7101bd7dc0  ldr x10,[x9]
7101bd7dc4  ldr x10,[x10]
7101bd7dc8  ldr x10,[x10]
7101bd7dcc  ldr x11,[x10, #0x10]
7101bd7dd0  ldr x11,[x11, #0x8]
7101bd7dd4  cbz x11,0x7101bd7fb8
7101bd7dd8  add x0,x10,#0x8
7101bd7ddc  adrp x1,0x71043be000
7101bd7de0  add x1,x1,#0x4cd
7101bd7de4  sub x8,x29,#0xd8
7101bd7de8  bl 0x71037780e0
7101bd7dec  ldur x19,[x29, #-0xd0]
7101bd7df0  ldr x8,[x19]
7101bd7df4  cbz x8,0x7101bd7f98
7101bd7df8  ldr x8,[x19, #0x8]
7101bd7dfc  cbz x8,0x7101bd7e0c
7101bd7e00  fmov s0,0x3f800000
7101bd7e04  sub x0,x29,#0xd8
7101bd7e08  bl 0x710377aee0
7101bd7e0c  adrp x8,0x710523d000
7101bd7e10  add x8,x8,#0x9e8
7101bd7e14  stp x8,xzr,[x29, #-0xd8]
7101bd7e18  b 0x7101bd7fa8
7101bd7e1c  mov x20,x19
7101bd7e20  ldr x8,[x20, #0x10]!
7101bd7e24  ldr x9,[x20, #0x8]
7101bd7e28  cmp x9,x8
7101bd7e2c  b.eq 0x7101bda0bc
7101bd7e30  ldr x8,[x8]
7101bd7e34  ldr x8,[x8]
7101bd7e38  ldr x8,[x8]
7101bd7e3c  ldr x9,[x8, #0x10]
7101bd7e40  ldr x9,[x9, #0x8]
7101bd7e44  cbz x9,0x7101bd80d4
7101bd7e48  add x0,x8,#0x8
7101bd7e4c  adrp x1,0x710438c000
7101bd7e50  add x1,x1,#0x87c
7101bd7e54  sub x8,x29,#0xd8
7101bd7e58  bl 0x7103776910
7101bd7e5c  ldur x0,[x29, #-0xd0]
7101bd7e60  ldr x8,[x0]
7101bd7e64  cbz x8,0x7101bd80c0
7101bd7e68  ldrb w21,[x8, #0x58]
7101bd7e6c  adrp x9,0x710523d000
7101bd7e70  add x9,x9,#0x9a8
7101bd7e74  stp x9,xzr,[x29, #-0xd8]
7101bd7e78  cbz x0,0x7101bd7e80
7101bd7e7c  bl 0x710392eb40
7101bd7e80  tbnz w21,#0x0,0x7101bd7b00
7101bd7e84  b 0x7101bd80d4
7101bd7e88  ldr x0,[x19, #0x180]
7101bd7e8c  ldr x8,[x0]
7101bd7e90  ldr x8,[x8, #0x78]
7101bd7e94  blr x8
7101bd7e98  tbz w0,#0x0,0x7101bd7eb8
7101bd7e9c  ldr x0,[x19, #0x188]
7101bd7ea0  ldr x8,[x0]
7101bd7ea4  ldr x8,[x8, #0x78]
7101bd7ea8  blr x8
7101bd7eac  tbz w0,#0x0,0x7101bd813c
7101bd7eb0  mov w8,#0x2
7101bd7eb4  str w8,[x19, #0x1b4]
7101bd7eb8  mov w20,#0xffffffff
7101bd7ebc  ldr w8,[x19, #0x1b4]
7101bd7ec0  cmp w21,w8
7101bd7ec4  b.eq 0x7101bd8e58
7101bd7ec8  tbnz w20,#0x1f,0x7101bd84f8
7101bd7ecc  add x0,x19,#0x188
7101bd7ed0  mov w1,w20
7101bd7ed4  mov w2,wzr
7101bd7ed8  bl 0x7103771a80
7101bd7edc  ldr w8,[x19, #0x1bc]
7101bd7ee0  cmp w8,w20
7101bd7ee4  b.ne 0x7101bd84f8
7101bd7ee8  mov x0,x19
7101bd7eec  ldr x8,[x0, #0x10]!
7101bd7ef0  ldr x9,[x0, #0x8]
7101bd7ef4  cmp x9,x8
7101bd7ef8  b.eq 0x7101bda0c4
7101bd7efc  ldr x8,[x8]
7101bd7f00  ldr x8,[x8]
7101bd7f04  ldr x8,[x8]
7101bd7f08  ldr x9,[x8, #0x10]
7101bd7f0c  ldr x9,[x9, #0x8]
7101bd7f10  cbz x9,0x7101bd84f8
7101bd7f14  add x0,x8,#0x8
7101bd7f18  adrp x1,0x71043df000
7101bd7f1c  add x1,x1,#0xfb6
7101bd7f20  sub x8,x29,#0xd8
7101bd7f24  bl 0x71037780e0
7101bd7f28  ldur x20,[x29, #-0xd0]
7101bd7f2c  ldr x8,[x20]
7101bd7f30  cbz x8,0x7101bd84e0
7101bd7f34  ldr x8,[x20, #0x8]
7101bd7f38  cbz x8,0x7101bd7f48
7101bd7f3c  fmov s0,0x3f800000
7101bd7f40  sub x0,x29,#0xd8
7101bd7f44  bl 0x710377aee0
7101bd7f48  adrp x8,0x710523d000
7101bd7f4c  add x8,x8,#0x9e8
7101bd7f50  stp x8,xzr,[x29, #-0xd8]
7101bd7f54  b 0x7101bd84f0
7101bd7f58  adrp x1,0x71043be000
7101bd7f5c  add x1,x1,#0x4cd
7101bd7f60  sub x8,x29,#0xd8
7101bd7f64  bl 0x71037780e0
7101bd7f68  ldur x19,[x29, #-0xd0]
7101bd7f6c  ldr x8,[x19]
7101bd7f70  cbz x8,0x7101bd81a4
7101bd7f74  ldr x8,[x19, #0x8]
7101bd7f78  cbz x8,0x7101bd7f88
7101bd7f7c  fmov s0,0x3f800000
7101bd7f80  sub x0,x29,#0xd8
7101bd7f84  bl 0x710377aee0
7101bd7f88  adrp x8,0x710523d000
7101bd7f8c  add x8,x8,#0x9e8
7101bd7f90  stp x8,xzr,[x29, #-0xd8]
7101bd7f94  b 0x7101bd81b4
7101bd7f98  adrp x8,0x710523d000
7101bd7f9c  add x8,x8,#0x9e8
7101bd7fa0  stp x8,xzr,[x29, #-0xd8]
7101bd7fa4  cbz x19,0x7101bd7fb0
7101bd7fa8  mov x0,x19
7101bd7fac  bl 0x710392eb40
7101bd7fb0  ldr x8,[x20]
7101bd7fb4  ldr x9,[x28]
7101bd7fb8  cmp x8,x9
7101bd7fbc  b.eq 0x7101bda0b0
7101bd7fc0  ldr x10,[x9]
7101bd7fc4  ldr x10,[x10]
7101bd7fc8  ldr x10,[x10]
7101bd7fcc  ldr x11,[x10, #0x10]
7101bd7fd0  ldr x11,[x11, #0x8]
7101bd7fd4  cbz x11,0x7101bd803c
7101bd7fd8  add x0,x10,#0x8
7101bd7fdc  adrp x1,0x7104432000
7101bd7fe0  add x1,x1,#0xf0e
7101bd7fe4  sub x8,x29,#0xd8
7101bd7fe8  bl 0x71037780e0
7101bd7fec  ldur x19,[x29, #-0xd0]
7101bd7ff0  ldr x8,[x19]
7101bd7ff4  cbz x8,0x7101bd801c
7101bd7ff8  ldr x8,[x19, #0x8]
7101bd7ffc  cbz x8,0x7101bd800c
7101bd8000  fmov s0,0x3f800000
7101bd8004  sub x0,x29,#0xd8
7101bd8008  bl 0x710377aee0
7101bd800c  adrp x8,0x710523d000
7101bd8010  add x8,x8,#0x9e8
7101bd8014  stp x8,xzr,[x29, #-0xd8]
7101bd8018  b 0x7101bd802c
7101bd801c  adrp x8,0x710523d000
7101bd8020  add x8,x8,#0x9e8
7101bd8024  stp x8,xzr,[x29, #-0xd8]
7101bd8028  cbz x19,0x7101bd8034
7101bd802c  mov x0,x19
7101bd8030  bl 0x710392eb40
7101bd8034  ldr x8,[x20]
7101bd8038  ldr x9,[x28]
7101bd803c  cmp x8,x9
7101bd8040  b.eq 0x7101bda0b0
7101bd8044  ldr x10,[x9]
7101bd8048  ldr x10,[x10]
7101bd804c  ldr x10,[x10]
7101bd8050  ldr x11,[x10, #0x10]
7101bd8054  ldr x11,[x11, #0x8]
7101bd8058  cbz x11,0x7101bd8460
7101bd805c  add x0,x10,#0x8
7101bd8060  adrp x1,0x7104401000
7101bd8064  add x1,x1,#0x61b
7101bd8068  sub x8,x29,#0xd8
7101bd806c  bl 0x71037780e0
7101bd8070  ldur x19,[x29, #-0xd0]
7101bd8074  ldr x8,[x19]
7101bd8078  cbz x8,0x7101bd80a0
7101bd807c  ldr x8,[x19, #0x8]
7101bd8080  cbz x8,0x7101bd8090
7101bd8084  fmov s0,0x3f800000
7101bd8088  sub x0,x29,#0xd8
7101bd808c  bl 0x710377aee0
7101bd8090  adrp x8,0x710523d000
7101bd8094  add x8,x8,#0x9e8
7101bd8098  stp x8,xzr,[x29, #-0xd8]
7101bd809c  b 0x7101bd80b0
7101bd80a0  adrp x8,0x710523d000
7101bd80a4  add x8,x8,#0x9e8
7101bd80a8  stp x8,xzr,[x29, #-0xd8]
7101bd80ac  cbz x19,0x7101bd80b8
7101bd80b0  mov x0,x19
7101bd80b4  bl 0x710392eb40
7101bd80b8  ldr x8,[x20]
7101bd80bc  b 0x7101bd845c
7101bd80c0  adrp x8,0x710523d000
7101bd80c4  add x8,x8,#0x9a8
7101bd80c8  stp x8,xzr,[x29, #-0xd8]
7101bd80cc  cbz x0,0x7101bd80d4
7101bd80d0  bl 0x710392eb40
7101bd80d4  ldp x8,x9,[x19, #0x10]
7101bd80d8  cmp x9,x8
7101bd80dc  b.eq 0x7101bda0bc
7101bd80e0  ldr x8,[x8]
7101bd80e4  ldr x8,[x8]
7101bd80e8  ldr x8,[x8]
7101bd80ec  ldr x9,[x8, #0x10]
7101bd80f0  ldr x9,[x9, #0x8]
7101bd80f4  cbz x9,0x7101bd7b00
7101bd80f8  add x0,x8,#0x8
7101bd80fc  adrp x1,0x710438c000
7101bd8100  add x1,x1,#0x87c
7101bd8104  sub x8,x29,#0xd8
7101bd8108  bl 0x7103776910
7101bd810c  ldur x0,[x29, #-0xd0]
7101bd8110  ldr x8,[x0]
7101bd8114  cbz x8,0x7101bd8124
7101bd8118  ldrb w9,[x8, #0x58]
7101bd811c  orr w9,w9,#0x1
7101bd8120  strb w9,[x8, #0x58]
7101bd8124  adrp x8,0x710523d000
7101bd8128  add x8,x8,#0x9a8
7101bd812c  stp x8,xzr,[x29, #-0xd8]
7101bd8130  cbz x0,0x7101bd7b00
7101bd8134  bl 0x710392eb40
7101bd8138  b 0x7101bd7b00
7101bd813c  ldrsw x8,[x19, #0x1b8]
7101bd8140  cmp w8,#0x1
7101bd8144  b.lt 0x7101bd7eb8
7101bd8148  mov x0,x19
7101bd814c  ldr x9,[x0, #0x10]!
7101bd8150  ldr x10,[x0, #0x8]
7101bd8154  cmp x10,x9
7101bd8158  b.eq 0x7101bda0c4
7101bd815c  ldr x9,[x9]
7101bd8160  ldr x9,[x9]
7101bd8164  ldr x9,[x9]
7101bd8168  adrp x10,0x710593b000
7101bd816c  ldr x10,[x10, #0x988]
7101bd8170  ldr x10,[x10, #0x8]
7101bd8174  ldr w10,[x10]
7101bd8178  ldr x9,[x9]
7101bd817c  ldr x9,[x9, #0x600]
7101bd8180  ldr w11,[x9, #0x494]
7101bd8184  lsr w10,w10,w11
7101bd8188  cmp w10,#0x1
7101bd818c  b.hi 0x7101bd7eb8
7101bd8190  ldrb w10,[x9, #0x4aa]
7101bd8194  cbz w10,0x7101bd7eb8
7101bd8198  ldrb w9,[x9, #0x1a4]
7101bd819c  tbnz w9,#0x1,0x7101bd7b54
7101bd81a0  b 0x7101bd7eb8
7101bd81a4  adrp x8,0x710523d000
7101bd81a8  add x8,x8,#0x9e8
7101bd81ac  stp x8,xzr,[x29, #-0xd8]
7101bd81b0  cbz x19,0x7101bd81bc
7101bd81b4  mov x0,x19
7101bd81b8  bl 0x710392eb40
7101bd81bc  ldr x8,[x24]
7101bd81c0  ldr x9,[x28]
7101bd81c4  cmp x8,x9
7101bd81c8  b.eq 0x7101bda0b0
7101bd81cc  ldr x10,[x9]
7101bd81d0  ldr x10,[x10]
7101bd81d4  ldr x10,[x10]
7101bd81d8  ldr x11,[x10, #0x10]
7101bd81dc  ldr x11,[x11, #0x8]
7101bd81e0  cbz x11,0x7101bd83dc
7101bd81e4  add x0,x10,#0x8
7101bd81e8  adrp x1,0x7104432000
7101bd81ec  add x1,x1,#0xf0e
7101bd81f0  sub x8,x29,#0xd8
7101bd81f4  bl 0x71037780e0
7101bd81f8  ldur x19,[x29, #-0xd0]
7101bd81fc  ldr x8,[x19]
7101bd8200  cbz x8,0x7101bd83bc
7101bd8204  ldr x8,[x19, #0x8]
7101bd8208  cbz x8,0x7101bd8218
7101bd820c  fmov s0,0x3f800000
7101bd8210  sub x0,x29,#0xd8
7101bd8214  bl 0x710377aee0
7101bd8218  adrp x8,0x710523d000
7101bd821c  add x8,x8,#0x9e8
7101bd8220  stp x8,xzr,[x29, #-0xd8]
7101bd8224  b 0x7101bd83cc
7101bd8228  mov w23,#0x2
7101bd822c  ldr x0,[sp, #0x40]
7101bd8230  adrp x1,0x7104308000
7101bd8234  add x1,x1,#0x5aa
7101bd8238  sub x8,x29,#0xd8
7101bd823c  bl 0x71037780e0
7101bd8240  ldur x21,[x29, #-0xd0]
7101bd8244  ldr x8,[x21]
7101bd8248  cbz x8,0x7101bd8270
7101bd824c  ldr x8,[x21, #0x8]
7101bd8250  cbz x8,0x7101bd8260
7101bd8254  fmov s0,0x3f800000
7101bd8258  sub x0,x29,#0xd8
7101bd825c  bl 0x710377aee0
7101bd8260  adrp x8,0x710523d000
7101bd8264  add x8,x8,#0x9e8
7101bd8268  stp x8,xzr,[x29, #-0xd8]
7101bd826c  b 0x7101bd8280
7101bd8270  adrp x8,0x710523d000
7101bd8274  add x8,x8,#0x9e8
7101bd8278  stp x8,xzr,[x29, #-0xd8]
7101bd827c  cbz x21,0x7101bd8288
7101bd8280  mov x0,x21
7101bd8284  bl 0x710392eb40
7101bd8288  mov w8,#0x320
7101bd828c  madd x9,x26,x8,x25
7101bd8290  sturb wzr,[x29, #-0xd0]
7101bd8294  stur xzr,[x29, #-0xd8]
7101bd8298  ldrb w8,[x9, #0xa8]!
7101bd829c  stp x20,x9,[sp, #0x10]
7101bd82a0  cmp w8,#0x2
7101bd82a4  str w22,[sp, #0xc]
7101bd82a8  b.ne 0x7101bd82bc
7101bd82ac  mov w8,#0x320
7101bd82b0  madd x8,x26,x8,x25
7101bd82b4  ldrb w8,[x8, #0x8]
7101bd82b8  cbz w8,0x7101bd8350
7101bd82bc  ldr x9,[sp, #0x20]
7101bd82c0  ldrb w8,[x20]
7101bd82c4  ldrb w9,[x9]
7101bd82c8  eor w8,w9,w8
7101bd82cc  tst w8,#0x3f
7101bd82d0  b.eq 0x7101bd8350
7101bd82d4  ldr x9,[x24]
7101bd82d8  ldr x8,[x28]
7101bd82dc  cmp x9,x8
7101bd82e0  b.eq 0x7101bda0b0
7101bd82e4  ldr x8,[x8]
7101bd82e8  ldr x8,[x8]
7101bd82ec  ldr x8,[x8]
7101bd82f0  ldr x9,[x8, #0x10]
7101bd82f4  ldr x9,[x9, #0x8]
7101bd82f8  cbz x9,0x7101bd87a4
7101bd82fc  adrp x9,0x7104422000
7101bd8300  add x9,x9,#0x23b
7101bd8304  adrp x10,0x7104318000
7101bd8308  add x10,x10,#0xd6b
7101bd830c  cmp w23,#0x1
7101bd8310  add x0,x8,#0x8
7101bd8314  csel x1,x10,x9,ne
7101bd8318  sub x8,x29,#0x80
7101bd831c  bl 0x71037780e0
7101bd8320  ldur x21,[x29, #-0x78]
7101bd8324  ldr x8,[x21]
7101bd8328  cbz x8,0x7101bd878c
7101bd832c  ldr x8,[x21, #0x8]
7101bd8330  cbz x8,0x7101bd8340
7101bd8334  fmov s0,0x3f800000
7101bd8338  sub x0,x29,#0x80
7101bd833c  bl 0x710377aee0
7101bd8340  adrp x8,0x710523d000
7101bd8344  add x8,x8,#0x9e8
7101bd8348  stp x8,xzr,[x29, #-0x80]
7101bd834c  b 0x7101bd879c
7101bd8350  ldr x9,[x24]
7101bd8354  ldr x8,[x28]
7101bd8358  cmp x9,x8
7101bd835c  b.eq 0x7101bda0b0
7101bd8360  ldr x10,[x8]
7101bd8364  ldr x10,[x10]
7101bd8368  ldr x10,[x10]
7101bd836c  ldr x11,[x10, #0x10]
7101bd8370  ldr x11,[x11, #0x8]
7101bd8374  cbz x11,0x7101bd88bc
7101bd8378  add x0,x10,#0x8
7101bd837c  adrp x1,0x71042b4000
7101bd8380  add x1,x1,#0x23e
7101bd8384  sub x8,x29,#0x80
7101bd8388  bl 0x71037780e0
7101bd838c  ldur x21,[x29, #-0x78]
7101bd8390  ldr x8,[x21]
7101bd8394  cbz x8,0x7101bd889c
7101bd8398  ldr x8,[x21, #0x8]
7101bd839c  cbz x8,0x7101bd83ac
7101bd83a0  fmov s0,0x3f800000
7101bd83a4  sub x0,x29,#0x80
7101bd83a8  bl 0x710377aee0
7101bd83ac  adrp x8,0x710523d000
7101bd83b0  add x8,x8,#0x9e8
7101bd83b4  stp x8,xzr,[x29, #-0x80]
7101bd83b8  b 0x7101bd88ac
7101bd83bc  adrp x8,0x710523d000
7101bd83c0  add x8,x8,#0x9e8
7101bd83c4  stp x8,xzr,[x29, #-0xd8]
7101bd83c8  cbz x19,0x7101bd83d4
7101bd83cc  mov x0,x19
7101bd83d0  bl 0x710392eb40
7101bd83d4  ldr x8,[x24]
7101bd83d8  ldr x9,[x28]
7101bd83dc  cmp x8,x9
7101bd83e0  b.eq 0x7101bda0b0
7101bd83e4  ldr x10,[x9]
7101bd83e8  ldr x10,[x10]
7101bd83ec  ldr x10,[x10]
7101bd83f0  ldr x11,[x10, #0x10]
7101bd83f4  ldr x11,[x11, #0x8]
7101bd83f8  cbz x11,0x7101bd8460
7101bd83fc  add x0,x10,#0x8
7101bd8400  adrp x1,0x7104401000
7101bd8404  add x1,x1,#0x61b
7101bd8408  sub x8,x29,#0xd8
7101bd840c  bl 0x71037780e0
7101bd8410  ldur x19,[x29, #-0xd0]
7101bd8414  ldr x8,[x19]
7101bd8418  cbz x8,0x7101bd8440
7101bd841c  ldr x8,[x19, #0x8]
7101bd8420  cbz x8,0x7101bd8430
7101bd8424  fmov s0,0x3f800000
7101bd8428  sub x0,x29,#0xd8
7101bd842c  bl 0x710377aee0
7101bd8430  adrp x8,0x710523d000
7101bd8434  add x8,x8,#0x9e8
7101bd8438  stp x8,xzr,[x29, #-0xd8]
7101bd843c  b 0x7101bd8450
7101bd8440  adrp x8,0x710523d000
7101bd8444  add x8,x8,#0x9e8
7101bd8448  stp x8,xzr,[x29, #-0xd8]
7101bd844c  cbz x19,0x7101bd8458
7101bd8450  mov x0,x19
7101bd8454  bl 0x710392eb40
7101bd8458  ldr x8,[x24]
7101bd845c  ldr x9,[x28]
7101bd8460  cmp x8,x9
7101bd8464  b.eq 0x7101bda0b0
7101bd8468  ldr x8,[x9]
7101bd846c  ldr x8,[x8]
7101bd8470  ldr x8,[x8]
7101bd8474  ldr x9,[x8, #0x10]
7101bd8478  ldr x9,[x9, #0x8]
7101bd847c  cbz x9,0x7101bd8e58
7101bd8480  add x0,x8,#0x8
7101bd8484  adrp x1,0x7104329000
7101bd8488  add x1,x1,#0xe3b
7101bd848c  sub x8,x29,#0xd8
7101bd8490  bl 0x71037780e0
7101bd8494  ldur x19,[x29, #-0xd0]
7101bd8498  ldr x8,[x19]
7101bd849c  cbz x8,0x7101bd84c4
7101bd84a0  ldr x8,[x19, #0x8]
7101bd84a4  cbz x8,0x7101bd84b4
7101bd84a8  fmov s0,0x3f800000
7101bd84ac  sub x0,x29,#0xd8
7101bd84b0  bl 0x710377aee0
7101bd84b4  adrp x8,0x710523d000
7101bd84b8  add x8,x8,#0x9e8
7101bd84bc  stp x8,xzr,[x29, #-0xd8]
7101bd84c0  b 0x7101bd84d4
7101bd84c4  adrp x8,0x710523d000
7101bd84c8  add x8,x8,#0x9e8
7101bd84cc  stp x8,xzr,[x29, #-0xd8]
7101bd84d0  cbz x19,0x7101bd8e58
7101bd84d4  mov x0,x19
7101bd84d8  bl 0x710392eb40
7101bd84dc  b 0x7101bd8e58
7101bd84e0  adrp x8,0x710523d000
7101bd84e4  add x8,x8,#0x9e8
7101bd84e8  stp x8,xzr,[x29, #-0xd8]
7101bd84ec  cbz x20,0x7101bd84f8
7101bd84f0  mov x0,x20
7101bd84f4  bl 0x710392eb40
7101bd84f8  ldr x0,[x19, #0x188]
7101bd84fc  ldr x8,[x0]
7101bd8500  ldr x8,[x8, #0x70]
7101bd8504  mov w1,#0x1
7101bd8508  blr x8
7101bd850c  ldr x0,[x19, #0x178]
7101bd8510  ldr x8,[x0]
7101bd8514  ldr x8,[x8, #0x68]
7101bd8518  blr x8
7101bd851c  tbz w0,#0x0,0x7101bd8550
7101bd8520  ldr x8,[x19, #0x178]
7101bd8524  ldrsw x9,[x8, #0x2c8]
7101bd8528  tbnz w9,#0x1f,0x7101bd85c4
7101bd852c  ldr w10,[x8, #0x2c0]
7101bd8530  cmp w9,w10
7101bd8534  b.ge 0x7101bd85c4
7101bd8538  ldr x8,[x8, #0x168]
7101bd853c  ldr x8,[x8, x9, LSL #0x3]
7101bd8540  add x1,x8,#0x8
7101bd8544  sub x0,x29,#0x80
7101bd8548  bl 0x7103776390
7101bd854c  b 0x7101bd85cc
7101bd8550  ldr x0,[x19, #0x180]
7101bd8554  ldr x8,[x0]
7101bd8558  ldr x8,[x8, #0x68]
7101bd855c  blr x8
7101bd8560  tbz w0,#0x0,0x7101bd8d78
7101bd8564  mov x0,x19
7101bd8568  ldr x8,[x0, #0x10]!
7101bd856c  ldr x9,[x0, #0x8]
7101bd8570  cmp x9,x8
7101bd8574  b.eq 0x7101bda0c4
7101bd8578  ldr x8,[x8]
7101bd857c  ldr x8,[x8]
7101bd8580  ldr x8,[x8]
7101bd8584  ldr x9,[x8, #0x10]
7101bd8588  ldr x9,[x9, #0x8]
7101bd858c  cbz x9,0x7101bd8d64
7101bd8590  ldr x10,[x19, #0x180]
7101bd8594  ldp x11,x12,[x10, #0x180]
7101bd8598  ldrsw x9,[x19, #0x1b8]
7101bd859c  sub x12,x12,x11
7101bd85a0  lsr x13,x12,#0x3
7101bd85a4  cmp w9,w13
7101bd85a8  b.ge 0x7101bd8698
7101bd85ac  asr x12,x12,#0x3
7101bd85b0  cmp x12,x9
7101bd85b4  b.ls 0x7101bda0d0
7101bd85b8  ldr x9,[x11, x9, LSL #0x3]
7101bd85bc  ldr x1,[x9, #0x88]
7101bd85c0  b 0x7101bd869c
7101bd85c4  sub x0,x29,#0x80
7101bd85c8  bl 0x7103776290
7101bd85cc  ldur x8,[x29, #-0x78]
7101bd85d0  ldr x8,[x8, #0x8]
7101bd85d4  cbz x8,0x7101bd8740
7101bd85d8  adrp x1,0x71042a3000
7101bd85dc  add x1,x1,#0x880
7101bd85e0  sub x8,x29,#0xd8
7101bd85e4  sub x0,x29,#0x80
7101bd85e8  bl 0x71037780e0
7101bd85ec  ldur x20,[x29, #-0xd0]
7101bd85f0  ldr x8,[x20]
7101bd85f4  cbz x8,0x7101bd861c
7101bd85f8  ldr x8,[x20, #0x8]
7101bd85fc  cbz x8,0x7101bd860c
7101bd8600  fmov s0,0x3f800000
7101bd8604  sub x0,x29,#0xd8
7101bd8608  bl 0x710377aee0
7101bd860c  adrp x8,0x710523d000
7101bd8610  add x8,x8,#0x9e8
7101bd8614  stp x8,xzr,[x29, #-0xd8]
7101bd8618  b 0x7101bd862c
7101bd861c  adrp x8,0x710523d000
7101bd8620  add x8,x8,#0x9e8
7101bd8624  stp x8,xzr,[x29, #-0xd8]
7101bd8628  cbz x20,0x7101bd8634
7101bd862c  mov x0,x20
7101bd8630  bl 0x710392eb40
7101bd8634  adrp x1,0x710424f000
7101bd8638  add x1,x1,#0x3b6
7101bd863c  sub x8,x29,#0x90
7101bd8640  sub x0,x29,#0x80
7101bd8644  bl 0x7103776640
7101bd8648  ldur x20,[x29, #-0x88]
7101bd864c  ldr x8,[x20, #0x8]
7101bd8650  cbz x8,0x7101bd8710
7101bd8654  adrp x1,0x7104412000
7101bd8658  add x1,x1,#0xfd0
7101bd865c  sub x8,x29,#0xd8
7101bd8660  sub x0,x29,#0x90
7101bd8664  bl 0x71037780e0
7101bd8668  ldur x21,[x29, #-0xd0]
7101bd866c  ldr x8,[x21]
7101bd8670  cbz x8,0x7101bd86f8
7101bd8674  ldr x8,[x21, #0x8]
7101bd8678  cbz x8,0x7101bd8688
7101bd867c  fmov s0,0x3f800000
7101bd8680  sub x0,x29,#0xd8
7101bd8684  bl 0x710377aee0
7101bd8688  adrp x8,0x710523d000
7101bd868c  add x8,x8,#0x9e8
7101bd8690  stp x8,xzr,[x29, #-0xd8]
7101bd8694  b 0x7101bd8708
7101bd8698  mov x1,xzr
7101bd869c  add x0,x8,#0x8
7101bd86a0  sub x8,x29,#0x80
7101bd86a4  bl 0x7103776640
7101bd86a8  ldur x20,[x29, #-0x78]
7101bd86ac  ldr x8,[x20, #0x8]
7101bd86b0  cbz x8,0x7101bd8d34
7101bd86b4  adrp x1,0x71042a3000
7101bd86b8  add x1,x1,#0x880
7101bd86bc  sub x8,x29,#0xd8
7101bd86c0  sub x0,x29,#0x80
7101bd86c4  bl 0x71037780e0
7101bd86c8  ldur x21,[x29, #-0xd0]
7101bd86cc  ldr x8,[x21]
7101bd86d0  cbz x8,0x7101bd8ae4
7101bd86d4  ldr x8,[x21, #0x8]
7101bd86d8  cbz x8,0x7101bd86e8
7101bd86dc  fmov s0,0x3f800000
7101bd86e0  sub x0,x29,#0xd8
7101bd86e4  bl 0x710377aee0
7101bd86e8  adrp x8,0x710523d000
7101bd86ec  add x8,x8,#0x9e8
7101bd86f0  stp x8,xzr,[x29, #-0xd8]
7101bd86f4  b 0x7101bd8af4
7101bd86f8  adrp x8,0x710523d000
7101bd86fc  add x8,x8,#0x9e8
7101bd8700  stp x8,xzr,[x29, #-0xd8]
7101bd8704  cbz x21,0x7101bd8710
7101bd8708  mov x0,x21
7101bd870c  bl 0x710392eb40
7101bd8710  adrp x8,0x710523d000
7101bd8714  add x8,x8,#0x988
7101bd8718  stp x8,xzr,[x29, #-0x90]
7101bd871c  cbz x20,0x7101bd8740
7101bd8720  ldr x0,[x20, #0x18]
7101bd8724  adrp x8,0x710523d000
7101bd8728  add x8,x8,#0x9a8
7101bd872c  stp x8,xzr,[x20, #0x10]
7101bd8730  cbz x0,0x7101bd8738
7101bd8734  bl 0x710392eb40
7101bd8738  mov x0,x20
7101bd873c  bl 0x710392eb40
7101bd8740  ldr x0,[x19, #0x178]
7101bd8744  ldr x8,[x0]
7101bd8748  ldr x8,[x8, #0x70]
7101bd874c  mov w1,wzr
7101bd8750  blr x8
7101bd8754  ldur x19,[x29, #-0x78]
7101bd8758  adrp x8,0x710523d000
7101bd875c  add x8,x8,#0x988
7101bd8760  stp x8,xzr,[x29, #-0x80]
7101bd8764  cbz x19,0x7101bd8d78
7101bd8768  ldr x0,[x19, #0x18]
7101bd876c  adrp x8,0x710523d000
7101bd8770  add x8,x8,#0x9a8
7101bd8774  stp x8,xzr,[x19, #0x10]
7101bd8778  cbz x0,0x7101bd8780
7101bd877c  bl 0x710392eb40
7101bd8780  mov x0,x19
7101bd8784  bl 0x710392eb40
7101bd8788  b 0x7101bd8d78
7101bd878c  adrp x8,0x710523d000
7101bd8790  add x8,x8,#0x9e8
7101bd8794  stp x8,xzr,[x29, #-0x80]
7101bd8798  cbz x21,0x7101bd87a4
7101bd879c  mov x0,x21
7101bd87a0  bl 0x710392eb40
7101bd87a4  mov w8,#0x320
7101bd87a8  madd x22,x26,x8,x25
7101bd87ac  ldrb w8,[x22, #0xa9]!
7101bd87b0  cmp w8,#0x4
7101bd87b4  b.cc 0x7101bd8830
7101bd87b8  sub w9,w8,#0x5
7101bd87bc  cmp w9,#0x3
7101bd87c0  b.cs 0x7101bd89fc
7101bd87c4  ldr x9,[x24]
7101bd87c8  ldr x8,[x28]
7101bd87cc  cmp x9,x8
7101bd87d0  b.eq 0x7101bda0b0
7101bd87d4  ldr x10,[x8]
7101bd87d8  ldr x10,[x10]
7101bd87dc  ldr x10,[x10]
7101bd87e0  ldr x11,[x10, #0x10]
7101bd87e4  ldr x11,[x11, #0x8]
7101bd87e8  cbz x11,0x7101bd8e9c
7101bd87ec  add x0,x10,#0x8
7101bd87f0  adrp x1,0x71042e6000
7101bd87f4  add x1,x1,#0xfbe
7101bd87f8  sub x8,x29,#0x80
7101bd87fc  bl 0x71037780e0
7101bd8800  ldur x21,[x29, #-0x78]
7101bd8804  ldr x8,[x21]
7101bd8808  cbz x8,0x7101bd8e7c
7101bd880c  ldr x8,[x21, #0x8]
7101bd8810  cbz x8,0x7101bd8820
7101bd8814  fmov s0,0x3f800000
7101bd8818  sub x0,x29,#0x80
7101bd881c  bl 0x710377aee0
7101bd8820  adrp x8,0x710523d000
7101bd8824  add x8,x8,#0x9e8
7101bd8828  stp x8,xzr,[x29, #-0x80]
7101bd882c  b 0x7101bd8e8c
7101bd8830  ldr x9,[x24]
7101bd8834  ldr x8,[x28]
7101bd8838  cmp x9,x8
7101bd883c  b.eq 0x7101bda0b0
7101bd8840  ldr x10,[x8]
7101bd8844  ldr x10,[x10]
7101bd8848  ldr x10,[x10]
7101bd884c  ldr x11,[x10, #0x10]
7101bd8850  ldr x11,[x11, #0x8]
7101bd8854  cbz x11,0x7101bd8b80
7101bd8858  add x0,x10,#0x8
7101bd885c  adrp x1,0x7104280000
7101bd8860  add x1,x1,#0x8a1
7101bd8864  sub x8,x29,#0x80
7101bd8868  bl 0x71037780e0
7101bd886c  ldur x21,[x29, #-0x78]
7101bd8870  ldr x8,[x21]
7101bd8874  cbz x8,0x7101bd8b60
7101bd8878  ldr x8,[x21, #0x8]
7101bd887c  cbz x8,0x7101bd888c
7101bd8880  fmov s0,0x3f800000
7101bd8884  sub x0,x29,#0x80
7101bd8888  bl 0x710377aee0
7101bd888c  adrp x8,0x710523d000
7101bd8890  add x8,x8,#0x9e8
7101bd8894  stp x8,xzr,[x29, #-0x80]
7101bd8898  b 0x7101bd8b70
7101bd889c  adrp x8,0x710523d000
7101bd88a0  add x8,x8,#0x9e8
7101bd88a4  stp x8,xzr,[x29, #-0x80]
7101bd88a8  cbz x21,0x7101bd88b4
7101bd88ac  mov x0,x21
7101bd88b0  bl 0x710392eb40
7101bd88b4  ldr x9,[x24]
7101bd88b8  ldr x8,[x28]
7101bd88bc  cmp x9,x8
7101bd88c0  b.eq 0x7101bda0b0
7101bd88c4  ldr x8,[x8]
7101bd88c8  ldr x8,[x8]
7101bd88cc  ldr x8,[x8]
7101bd88d0  ldr x9,[x8, #0x10]
7101bd88d4  ldr x9,[x9, #0x8]
7101bd88d8  cbz x9,0x7101bd8938
7101bd88dc  add x0,x8,#0x8
7101bd88e0  adrp x1,0x7104422000
7101bd88e4  add x1,x1,#0x23b
7101bd88e8  sub x8,x29,#0x80
7101bd88ec  bl 0x71037780e0
7101bd88f0  ldur x21,[x29, #-0x78]
7101bd88f4  ldr x8,[x21]
7101bd88f8  cbz x8,0x7101bd8920
7101bd88fc  ldr x8,[x21, #0x8]
7101bd8900  cbz x8,0x7101bd8910
7101bd8904  fmov s0,0x3f800000
7101bd8908  sub x0,x29,#0x80
7101bd890c  bl 0x710377aee0
7101bd8910  adrp x8,0x710523d000
7101bd8914  add x8,x8,#0x9e8
7101bd8918  stp x8,xzr,[x29, #-0x80]
7101bd891c  b 0x7101bd8930
7101bd8920  adrp x8,0x710523d000
7101bd8924  add x8,x8,#0x9e8
7101bd8928  stp x8,xzr,[x29, #-0x80]
7101bd892c  cbz x21,0x7101bd8938
7101bd8930  mov x0,x21
7101bd8934  bl 0x710392eb40
7101bd8938  mov w8,#0x320
7101bd893c  madd x22,x26,x8,x25
7101bd8940  ldrb w8,[x22, #0xa9]!
7101bd8944  cmp w8,#0x4
7101bd8948  b.cc 0x7101bd8990
7101bd894c  sub w9,w8,#0x5
7101bd8950  cmp w9,#0x3
7101bd8954  b.cs 0x7101bd8a70
7101bd8958  ldr x9,[x24]
7101bd895c  ldr x8,[x28]
7101bd8960  cmp x9,x8
7101bd8964  b.eq 0x7101bda0b0
7101bd8968  ldr x8,[x8]
7101bd896c  ldr x8,[x8]
7101bd8970  ldr x8,[x8]
7101bd8974  ldr x9,[x8, #0x10]
7101bd8978  ldr x9,[x9, #0x8]
7101bd897c  cbz x9,0x7101bd8c74
7101bd8980  add x0,x8,#0x8
7101bd8984  adrp x1,0x71043be000
7101bd8988  add x1,x1,#0x4d6
7101bd898c  b 0x7101bd8aac
7101bd8990  ldr x9,[x24]
7101bd8994  ldr x8,[x28]
7101bd8998  cmp x9,x8
7101bd899c  b.eq 0x7101bda0b0
7101bd89a0  ldr x8,[x8]
7101bd89a4  ldr x8,[x8]
7101bd89a8  ldr x8,[x8]
7101bd89ac  ldr x9,[x8, #0x10]
7101bd89b0  ldr x9,[x9, #0x8]
7101bd89b4  cbz x9,0x7101bd8c50
7101bd89b8  add x0,x8,#0x8
7101bd89bc  adrp x1,0x710437c000
7101bd89c0  add x1,x1,#0x37c
7101bd89c4  sub x8,x29,#0x80
7101bd89c8  bl 0x71037780e0
7101bd89cc  ldur x21,[x29, #-0x78]
7101bd89d0  ldr x8,[x21]
7101bd89d4  cbz x8,0x7101bd8c38
7101bd89d8  ldr x8,[x21, #0x8]
7101bd89dc  cbz x8,0x7101bd89ec
7101bd89e0  fmov s0,0x3f800000
7101bd89e4  sub x0,x29,#0x80
7101bd89e8  bl 0x710377aee0
7101bd89ec  adrp x8,0x710523d000
7101bd89f0  add x8,x8,#0x9e8
7101bd89f4  stp x8,xzr,[x29, #-0x80]
7101bd89f8  b 0x7101bd8c48
7101bd89fc  cmp w8,#0x4
7101bd8a00  b.ne 0x7101bd8f68
7101bd8a04  ldr x9,[x24]
7101bd8a08  ldr x8,[x28]
7101bd8a0c  cmp x9,x8
7101bd8a10  b.eq 0x7101bda0b0
7101bd8a14  ldr x10,[x8]
7101bd8a18  ldr x10,[x10]
7101bd8a1c  ldr x10,[x10]
7101bd8a20  ldr x11,[x10, #0x10]
7101bd8a24  ldr x11,[x11, #0x8]
7101bd8a28  cbz x11,0x7101bd8eec
7101bd8a2c  add x0,x10,#0x8
7101bd8a30  adrp x1,0x71042e6000
7101bd8a34  add x1,x1,#0xfb1
7101bd8a38  sub x8,x29,#0x80
7101bd8a3c  bl 0x71037780e0
7101bd8a40  ldur x21,[x29, #-0x78]
7101bd8a44  ldr x8,[x21]
7101bd8a48  cbz x8,0x7101bd8ecc
7101bd8a4c  ldr x8,[x21, #0x8]
7101bd8a50  cbz x8,0x7101bd8a60
7101bd8a54  fmov s0,0x3f800000
7101bd8a58  sub x0,x29,#0x80
7101bd8a5c  bl 0x710377aee0
7101bd8a60  adrp x8,0x710523d000
7101bd8a64  add x8,x8,#0x9e8
7101bd8a68  stp x8,xzr,[x29, #-0x80]
7101bd8a6c  b 0x7101bd8edc
7101bd8a70  cmp w8,#0x4
7101bd8a74  b.ne 0x7101bd8c74
7101bd8a78  ldr x9,[x24]
7101bd8a7c  ldr x8,[x28]
7101bd8a80  cmp x9,x8
7101bd8a84  b.eq 0x7101bda0b0
7101bd8a88  ldr x8,[x8]
7101bd8a8c  ldr x8,[x8]
7101bd8a90  ldr x8,[x8]
7101bd8a94  ldr x9,[x8, #0x10]
7101bd8a98  ldr x9,[x9, #0x8]
7101bd8a9c  cbz x9,0x7101bd8c74
7101bd8aa0  add x0,x8,#0x8
7101bd8aa4  adrp x1,0x710435b000
7101bd8aa8  add x1,x1,#0x5c7
7101bd8aac  sub x8,x29,#0x80
7101bd8ab0  bl 0x71037780e0
7101bd8ab4  ldur x21,[x29, #-0x78]
7101bd8ab8  ldr x8,[x21]
7101bd8abc  cbz x8,0x7101bd8c5c
7101bd8ac0  ldr x8,[x21, #0x8]
7101bd8ac4  cbz x8,0x7101bd8ad4
7101bd8ac8  fmov s0,0x3f800000
7101bd8acc  sub x0,x29,#0x80
7101bd8ad0  bl 0x710377aee0
7101bd8ad4  adrp x8,0x710523d000
7101bd8ad8  add x8,x8,#0x9e8
7101bd8adc  stp x8,xzr,[x29, #-0x80]
7101bd8ae0  b 0x7101bd8c6c
7101bd8ae4  adrp x8,0x710523d000
7101bd8ae8  add x8,x8,#0x9e8
7101bd8aec  stp x8,xzr,[x29, #-0xd8]
7101bd8af0  cbz x21,0x7101bd8afc
7101bd8af4  mov x0,x21
7101bd8af8  bl 0x710392eb40
7101bd8afc  adrp x1,0x710424f000
7101bd8b00  add x1,x1,#0x3b6
7101bd8b04  sub x8,x29,#0x90
7101bd8b08  sub x0,x29,#0x80
7101bd8b0c  bl 0x7103776640
7101bd8b10  ldur x21,[x29, #-0x88]
7101bd8b14  ldr x8,[x21, #0x8]
7101bd8b18  cbz x8,0x7101bd8d04
7101bd8b1c  adrp x1,0x7104412000
7101bd8b20  add x1,x1,#0xfd0
7101bd8b24  sub x8,x29,#0xd8
7101bd8b28  sub x0,x29,#0x90
7101bd8b2c  bl 0x71037780e0
7101bd8b30  ldur x22,[x29, #-0xd0]
7101bd8b34  ldr x8,[x22]
7101bd8b38  cbz x8,0x7101bd8cec
7101bd8b3c  ldr x8,[x22, #0x8]
7101bd8b40  cbz x8,0x7101bd8b50
7101bd8b44  fmov s0,0x3f800000
7101bd8b48  sub x0,x29,#0xd8
7101bd8b4c  bl 0x710377aee0
7101bd8b50  adrp x8,0x710523d000
7101bd8b54  add x8,x8,#0x9e8
7101bd8b58  stp x8,xzr,[x29, #-0xd8]
7101bd8b5c  b 0x7101bd8cfc
7101bd8b60  adrp x8,0x710523d000
7101bd8b64  add x8,x8,#0x9e8
7101bd8b68  stp x8,xzr,[x29, #-0x80]
7101bd8b6c  cbz x21,0x7101bd8b78
7101bd8b70  mov x0,x21
7101bd8b74  bl 0x710392eb40
7101bd8b78  ldr x9,[x24]
7101bd8b7c  ldr x8,[x28]
7101bd8b80  cmp x9,x8
7101bd8b84  b.eq 0x7101bda0b0
7101bd8b88  ldr x8,[x8]
7101bd8b8c  ldr x8,[x8]
7101bd8b90  ldr x8,[x8]
7101bd8b94  ldr x9,[x8, #0x10]
7101bd8b98  ldr x9,[x9, #0x8]
7101bd8b9c  cbz x9,0x7101bd8bfc
7101bd8ba0  add x0,x8,#0x8
7101bd8ba4  adrp x1,0x7104412000
7101bd8ba8  add x1,x1,#0x8a9
7101bd8bac  sub x8,x29,#0x80
7101bd8bb0  bl 0x71037780e0
7101bd8bb4  ldur x21,[x29, #-0x78]
7101bd8bb8  ldr x8,[x21]
7101bd8bbc  cbz x8,0x7101bd8be4
7101bd8bc0  ldr x8,[x21, #0x8]
7101bd8bc4  cbz x8,0x7101bd8bd4
7101bd8bc8  fmov s0,0x3f800000
7101bd8bcc  sub x0,x29,#0x80
7101bd8bd0  bl 0x710377aee0
7101bd8bd4  adrp x8,0x710523d000
7101bd8bd8  add x8,x8,#0x9e8
7101bd8bdc  stp x8,xzr,[x29, #-0x80]
7101bd8be0  b 0x7101bd8bf4
7101bd8be4  adrp x8,0x710523d000
7101bd8be8  add x8,x8,#0x9e8
7101bd8bec  stp x8,xzr,[x29, #-0x80]
7101bd8bf0  cbz x21,0x7101bd8bfc
7101bd8bf4  mov x0,x21
7101bd8bf8  bl 0x710392eb40
7101bd8bfc  mov x0,x19
7101bd8c00  bl 0x7101bda0e0
7101bd8c04  cmp w23,#0x1
7101bd8c08  b.ne 0x7101bd8f70
7101bd8c0c  ldr x0,[sp, #0x40]
7101bd8c10  adrp x1,0x710436c000
7101bd8c14  add x1,x1,#0x1c9
7101bd8c18  sub x8,x29,#0x80
7101bd8c1c  bl 0x7103776910
7101bd8c20  ldur x21,[x29, #-0x78]
7101bd8c24  ldr x8,[x21]
7101bd8c28  cbz x8,0x7101bd8fc0
7101bd8c2c  adrp x1,0x7104308000
7101bd8c30  add x1,x1,#0x389
7101bd8c34  b 0x7101bd8cd4
7101bd8c38  adrp x8,0x710523d000
7101bd8c3c  add x8,x8,#0x9e8
7101bd8c40  stp x8,xzr,[x29, #-0x80]
7101bd8c44  cbz x21,0x7101bd8c50
7101bd8c48  mov x0,x21
7101bd8c4c  bl 0x710392eb40
7101bd8c50  mov x0,x19
7101bd8c54  bl 0x7101bda0e0
7101bd8c58  b 0x7101bd8c74
7101bd8c5c  adrp x8,0x710523d000
7101bd8c60  add x8,x8,#0x9e8
7101bd8c64  stp x8,xzr,[x29, #-0x80]
7101bd8c68  cbz x21,0x7101bd8c74
7101bd8c6c  mov x0,x21
7101bd8c70  bl 0x710392eb40
7101bd8c74  ldr x0,[sp, #0x40]
7101bd8c78  adrp x1,0x710436c000
7101bd8c7c  add x1,x1,#0x1c9
7101bd8c80  sub x8,x29,#0x80
7101bd8c84  bl 0x7103776910
7101bd8c88  ldur x21,[x29, #-0x78]
7101bd8c8c  ldr x8,[x21]
7101bd8c90  cbz x8,0x7101bd8fc0
7101bd8c94  ldr x8,[sp, #0x18]
7101bd8c98  ldrb w8,[x8]
7101bd8c9c  cmp w8,#0x2
7101bd8ca0  b.ne 0x7101bd8cb4
7101bd8ca4  mov w8,#0x320
7101bd8ca8  madd x8,x26,x8,x25
7101bd8cac  ldrb w8,[x8, #0x8]
7101bd8cb0  cbz w8,0x7101bd8ce0
7101bd8cb4  cbz w23,0x7101bd8f94
7101bd8cb8  adrp x1,0x71042e6000
7101bd8cbc  add x1,x1,#0xf9b
7101bd8cc0  sub x0,x29,#0xd8
7101bd8cc4  mov w2,w23
7101bd8cc8  sub x20,x29,#0xd8
7101bd8ccc  bl 0x710062dc20
7101bd8cd0  add x1,x20,#0x8
7101bd8cd4  sub x0,x29,#0x80
7101bd8cd8  bl 0x710377a120
7101bd8cdc  b 0x7101bd8fc0
7101bd8ce0  adrp x1,0x71042c4000
7101bd8ce4  add x1,x1,#0xc2b
7101bd8ce8  b 0x7101bd8cd4
7101bd8cec  adrp x8,0x710523d000
7101bd8cf0  add x8,x8,#0x9e8
7101bd8cf4  stp x8,xzr,[x29, #-0xd8]
7101bd8cf8  cbz x22,0x7101bd8d04
7101bd8cfc  mov x0,x22
7101bd8d00  bl 0x710392eb40
7101bd8d04  adrp x8,0x710523d000
7101bd8d08  add x8,x8,#0x988
7101bd8d0c  stp x8,xzr,[x29, #-0x90]
7101bd8d10  cbz x21,0x7101bd8d34
7101bd8d14  ldr x0,[x21, #0x18]
7101bd8d18  adrp x8,0x710523d000
7101bd8d1c  add x8,x8,#0x9a8
7101bd8d20  stp x8,xzr,[x21, #0x10]
7101bd8d24  cbz x0,0x7101bd8d2c
7101bd8d28  bl 0x710392eb40
7101bd8d2c  mov x0,x21
7101bd8d30  bl 0x710392eb40
7101bd8d34  adrp x8,0x710523d000
7101bd8d38  add x8,x8,#0x988
7101bd8d3c  stp x8,xzr,[x29, #-0x80]
7101bd8d40  cbz x20,0x7101bd8d64
7101bd8d44  ldr x0,[x20, #0x18]
7101bd8d48  adrp x8,0x710523d000
7101bd8d4c  add x8,x8,#0x9a8
7101bd8d50  stp x8,xzr,[x20, #0x10]
7101bd8d54  cbz x0,0x7101bd8d5c
7101bd8d58  bl 0x710392eb40
7101bd8d5c  mov x0,x20
7101bd8d60  bl 0x710392eb40
7101bd8d64  ldr x0,[x19, #0x180]
7101bd8d68  ldr x8,[x0]
7101bd8d6c  ldr x8,[x8, #0x70]
7101bd8d70  mov w1,wzr
7101bd8d74  blr x8
7101bd8d78  adrp x8,0x710532f000
7101bd8d7c  ldr x8,[x8, #0x8d0]
7101bd8d80  ldr x0,[x8, #0x8]
7101bd8d84  ldp x8,x9,[x0, #0x40]
7101bd8d88  sub x9,x9,x8
7101bd8d8c  asr x9,x9,#0x3
7101bd8d90  cmp x9,#0x2
7101bd8d94  b.cc 0x7101bd8da8
7101bd8d98  ldr x19,[x8, #0x8]
7101bd8d9c  ldrb w8,[x0, #0x191]
7101bd8da0  cbnz w8,0x7101bd8e24
7101bd8da4  b 0x7101bd8db4
7101bd8da8  mov x19,xzr
7101bd8dac  ldrb w8,[x0, #0x191]
7101bd8db0  cbnz w8,0x7101bd8e24
7101bd8db4  mov w2,#0x4
7101bd8db8  mov x1,x19
7101bd8dbc  bl 0x7103313f20
7101bd8dc0  tbz w0,#0x0,0x7101bd8e24
7101bd8dc4  sub x0,x29,#0xd8
7101bd8dc8  mov x1,x19
7101bd8dcc  bl 0x71024076d0
7101bd8dd0  ldur x8,[x29, #-0xc8]
7101bd8dd4  adrp x9,0x7104f73000
7101bd8dd8  add x9,x9,#0xd50
7101bd8ddc  stur x9,[x29, #-0xd0]
7101bd8de0  cbz x8,0x7101bd8e50
7101bd8de4  adrp x8,0x7106dd5000
7101bd8de8  ldrb w8,[x8, #0x3a8]
7101bd8dec  cmp w8,#0x1
7101bd8df0  b.ne 0x7101bd8e50
7101bd8df4  adrp x9,0x7106dd5000
7101bd8df8  ldur w8,[x29, #-0xc0]
7101bd8dfc  ldr w9,[x9, #0x3ac]
7101bd8e00  cmp w8,w9
7101bd8e04  b.ne 0x7101bd8e50
7101bd8e08  ldur x8,[x29, #-0xc8]
7101bd8e0c  ldr wzr,[x8, #0x38]!
7101bd8e10  ldaxr w9,[x8]
7101bd8e14  sub w9,w9,#0x1
7101bd8e18  stlxr w10,w9,[x8]
7101bd8e1c  cbnz w10,0x7101bd8e10
7101bd8e20  b 0x7101bd8e50
7101bd8e24  mov x8,#0x650000000000
7101bd8e28  movk x8,#0x87, LSL #48
7101bd8e2c  sturb wzr,[x29, #-0xb8]
7101bd8e30  stp xzr,x8,[x29, #-0xc8]
7101bd8e34  mov x8,#-0x1
7101bd8e38  stp x8,xzr,[x29, #-0xb0]
7101bd8e3c  adrp x8,0x7104f73000
7101bd8e40  add x8,x8,#0xd50
7101bd8e44  stur wzr,[x29, #-0xd8]
7101bd8e48  stur xzr,[x29, #-0xa0]
7101bd8e4c  stur x8,[x29, #-0xd0]
7101bd8e50  stur xzr,[x29, #-0xc8]
7101bd8e54  sturb wzr,[x29, #-0xb8]
7101bd8e58  add sp,sp,#0x190
7101bd8e5c  ldp x29,x30,[sp, #0x60]
7101bd8e60  ldp x20,x19,[sp, #0x50]
7101bd8e64  ldp x22,x21,[sp, #0x40]
7101bd8e68  ldp x24,x23,[sp, #0x30]
7101bd8e6c  ldp x26,x25,[sp, #0x20]
7101bd8e70  ldp x28,x27,[sp, #0x10]
7101bd8e74  ldr d8,[sp], #0x70
7101bd8e78  ret
7101bd8e7c  adrp x8,0x710523d000
7101bd8e80  add x8,x8,#0x9e8
7101bd8e84  stp x8,xzr,[x29, #-0x80]
7101bd8e88  cbz x21,0x7101bd8e94
7101bd8e8c  mov x0,x21
7101bd8e90  bl 0x710392eb40
7101bd8e94  ldr x9,[x24]
7101bd8e98  ldr x8,[x28]
7101bd8e9c  cmp x9,x8
7101bd8ea0  b.eq 0x7101bda0b0
7101bd8ea4  ldr x8,[x8]
7101bd8ea8  ldr x8,[x8]
7101bd8eac  ldr x8,[x8]
7101bd8eb0  ldr x9,[x8, #0x10]
7101bd8eb4  ldr x9,[x9, #0x8]
7101bd8eb8  cbz x9,0x7101bd8f68
7101bd8ebc  add x0,x8,#0x8
7101bd8ec0  adrp x1,0x710438c000
7101bd8ec4  add x1,x1,#0x88e
7101bd8ec8  b 0x7101bd8f18
7101bd8ecc  adrp x8,0x710523d000
7101bd8ed0  add x8,x8,#0x9e8
7101bd8ed4  stp x8,xzr,[x29, #-0x80]
7101bd8ed8  cbz x21,0x7101bd8ee4
7101bd8edc  mov x0,x21
7101bd8ee0  bl 0x710392eb40
7101bd8ee4  ldr x9,[x24]
7101bd8ee8  ldr x8,[x28]
7101bd8eec  cmp x9,x8
7101bd8ef0  b.eq 0x7101bda0b0
7101bd8ef4  ldr x8,[x8]
7101bd8ef8  ldr x8,[x8]
7101bd8efc  ldr x8,[x8]
7101bd8f00  ldr x9,[x8, #0x10]
7101bd8f04  ldr x9,[x9, #0x8]
7101bd8f08  cbz x9,0x7101bd8f68
7101bd8f0c  add x0,x8,#0x8
7101bd8f10  adrp x1,0x71043df000
7101bd8f14  add x1,x1,#0xfca
7101bd8f18  sub x8,x29,#0x80
7101bd8f1c  bl 0x71037780e0
7101bd8f20  ldur x21,[x29, #-0x78]
7101bd8f24  ldr x8,[x21]
7101bd8f28  cbz x8,0x7101bd8f50
7101bd8f2c  ldr x8,[x21, #0x8]
7101bd8f30  cbz x8,0x7101bd8f40
7101bd8f34  fmov s0,0x3f800000
7101bd8f38  sub x0,x29,#0x80
7101bd8f3c  bl 0x710377aee0
7101bd8f40  adrp x8,0x710523d000
7101bd8f44  add x8,x8,#0x9e8
7101bd8f48  stp x8,xzr,[x29, #-0x80]
7101bd8f4c  b 0x7101bd8f60
7101bd8f50  adrp x8,0x710523d000
7101bd8f54  add x8,x8,#0x9e8
7101bd8f58  stp x8,xzr,[x29, #-0x80]
7101bd8f5c  cbz x21,0x7101bd8f68
7101bd8f60  mov x0,x21
7101bd8f64  bl 0x710392eb40
7101bd8f68  cmp w23,#0x1
7101bd8f6c  b.eq 0x7101bd8c0c
7101bd8f70  ldr x0,[sp, #0x40]
7101bd8f74  adrp x1,0x7104308000
7101bd8f78  add x1,x1,#0x377
7101bd8f7c  sub x8,x29,#0x80
7101bd8f80  bl 0x7103776910
7101bd8f84  ldur x21,[x29, #-0x78]
7101bd8f88  ldr x8,[x21]
7101bd8f8c  cbz x8,0x7101bd8fc0
7101bd8f90  cbnz w23,0x7101bd8cb8
7101bd8f94  mov w8,#0x320
7101bd8f98  madd x8,x26,x8,x25
7101bd8f9c  ldrb w9,[x8, #0xab]
7101bd8fa0  ldrb w8,[x8, #0xaa]
7101bd8fa4  sub w8,w9,w8
7101bd8fa8  bic w3,w8,w8, ASR #0x1f
7101bd8fac  adrp x1,0x710437c000
7101bd8fb0  add x1,x1,#0x391
7101bd8fb4  sub x0,x29,#0x80
7101bd8fb8  mov w2,#0x1
7101bd8fbc  bl 0x710377a280
7101bd8fc0  adrp x8,0x710523d000
7101bd8fc4  add x8,x8,#0x9a8
7101bd8fc8  stp x8,xzr,[x29, #-0x80]
7101bd8fcc  cbz x21,0x7101bd8fd8
7101bd8fd0  mov x0,x21
7101bd8fd4  bl 0x710392eb40
7101bd8fd8  ldrsb x20,[x22]
7101bd8fdc  cmp x20,#0x7
7101bd8fe0  b.hi 0x7101bd90d8
7101bd8fe4  ldr x0,[sp, #0x40]
7101bd8fe8  adrp x1,0x71042b4000
7101bd8fec  add x1,x1,#0x248
7101bd8ff0  sub x8,x29,#0x80
7101bd8ff4  bl 0x7103776910
7101bd8ff8  ldur x21,[x29, #-0x78]
7101bd8ffc  ldr x8,[x21]
7101bd9000  cbz x8,0x7101bd9018
7101bd9004  adrp x8,0x71050ac000
7101bd9008  add x8,x8,#0x2a0
7101bd900c  sub x0,x29,#0x80
7101bd9010  ldr x1,[x8, x20, LSL #0x3]
7101bd9014  bl 0x710377a120
7101bd9018  adrp x20,0x710523d000
7101bd901c  add x20,x20,#0x9a8
7101bd9020  stp x20,xzr,[x29, #-0x80]
7101bd9024  cbz x21,0x7101bd9030
7101bd9028  mov x0,x21
7101bd902c  bl 0x710392eb40
7101bd9030  ldrsb x23,[x22]
7101bd9034  cmp x23,#0x3
7101bd9038  b.hi 0x7101bd90d8
7101bd903c  ldr x27,[sp, #0x40]
7101bd9040  adrp x1,0x7104443000
7101bd9044  add x1,x1,#0x524
7101bd9048  sub x8,x29,#0x90
7101bd904c  mov x0,x27
7101bd9050  bl 0x7103776910
7101bd9054  ldur x21,[x29, #-0x88]
7101bd9058  ldr x8,[x21]
7101bd905c  cbz x8,0x7101bd9118
7101bd9060  adrp x8,0x71050ac000
7101bd9064  add x8,x8,#0x2e0
7101bd9068  sub x0,x29,#0x90
7101bd906c  ldr x1,[x8, x23, LSL #0x3]
7101bd9070  bl 0x710377a120
7101bd9074  adrp x1,0x71043ad000
7101bd9078  add x1,x1,#0x665
7101bd907c  sub x8,x29,#0xe8
7101bd9080  mov x0,x27
7101bd9084  bl 0x7103776910
7101bd9088  ldur x23,[x29, #-0xe0]
7101bd908c  ldr x8,[x23]
7101bd9090  cbz x8,0x7101bd9380
7101bd9094  ldrb w9,[x22]
7101bd9098  sub w10,w9,#0x2
7101bd909c  cmp w10,#0x2
7101bd90a0  b.cc 0x7101bd9134
7101bd90a4  cbz w9,0x7101bd9134
7101bd90a8  cmp w9,#0x1
7101bd90ac  b.ne 0x7101bd92e0
7101bd90b0  ldrb w9,[x8, #0x58]
7101bd90b4  orr w9,w9,#0x1
7101bd90b8  strb w9,[x8, #0x58]
7101bd90bc  mov w8,#0x320
7101bd90c0  madd x8,x26,x8,x25
7101bd90c4  ldrb w8,[x8, #0xbc]
7101bd90c8  cbz w8,0x7101bd9370
7101bd90cc  adrp x1,0x710436c000
7101bd90d0  add x1,x1,#0x1de
7101bd90d4  b 0x7101bd9378
7101bd90d8  ldr x9,[x24]
7101bd90dc  ldr x8,[x28]
7101bd90e0  cmp x9,x8
7101bd90e4  b.eq 0x7101bda0b0
7101bd90e8  ldr x8,[x8]
7101bd90ec  ldr x8,[x8]
7101bd90f0  ldr x8,[x8]
7101bd90f4  ldr x9,[x8, #0x10]
7101bd90f8  ldr x9,[x9, #0x8]
7101bd90fc  ldr x23,[sp, #0x40]
7101bd9100  cbz x9,0x7101bd942c
7101bd9104  add x0,x8,#0x8
7101bd9108  adrp x1,0x710425f000
7101bd910c  add x1,x1,#0x256
7101bd9110  sub x8,x29,#0x80
7101bd9114  b 0x7101bd93e0
7101bd9118  stp x20,xzr,[x29, #-0x90]
7101bd911c  cbz x21,0x7101bd9128
7101bd9120  mov x0,x21
7101bd9124  bl 0x710392eb40
7101bd9128  adrp x22,0x71043df000
7101bd912c  add x22,x22,#0xfdc
7101bd9130  b 0x7101bd93a8
7101bd9134  ldrb w9,[x8, #0x58]
7101bd9138  orr w9,w9,#0x1
7101bd913c  strb w9,[x8, #0x58]
7101bd9140  mov w8,#0x320
7101bd9144  madd x8,x26,x8,x25
7101bd9148  ldrb w8,[x8, #0x13]
7101bd914c  cmp w8,#0x2
7101bd9150  b.eq 0x7101bd9348
7101bd9154  cmp w8,#0x1
7101bd9158  b.eq 0x7101bd92f0
7101bd915c  cbnz w8,0x7101bda094
7101bd9160  mov w8,#0x320
7101bd9164  madd x8,x26,x8,x25
7101bd9168  mov x13,#0x6e6d
7101bd916c  movk x13,#0x5f75, LSL #16
7101bd9170  orr x11,xzr,#0x1800000000
7101bd9174  movk x13,#0x6f6c, LSL #32
7101bd9178  movk x13,#0x6163, LSL #48
7101bd917c  mov w10,#0x9dc5
7101bd9180  movk w10,#0x811c, LSL #16
7101bd9184  add x12,sp,#0xc0
7101bd9188  ldrh w9,[x8, #0x16]
7101bd918c  add x1,x12,#0x8
7101bd9190  stp x11,x13,[sp, #0xc0]
7101bd9194  mov x11,#0x5f6c
7101bd9198  movk x11,#0x7572, LSL #16
7101bd919c  movk x11,#0x656c, LSL #32
7101bd91a0  movk x11,#0x625f, LSL #48
7101bd91a4  str x11,[sp, #0xd0]
7101bd91a8  mov w11,#0x746f
7101bd91ac  strh w11,[sp, #0xd8]
7101bd91b0  mov w11,#0x6f74
7101bd91b4  movk w11,#0x5f6d, LSL #16
7101bd91b8  stur w11,[sp, #0xda]
7101bd91bc  mov w11,#0x3030
7101bd91c0  add x8,x12,#0x9
7101bd91c4  mov w12,#0x6d
7101bd91c8  mov w13,w10
7101bd91cc  strh w11,[sp, #0xde]
7101bd91d0  mov w11,#0x89
7101bd91d4  strb wzr,[sp, #0xe0]
7101bd91d8  mul w13,w13,w11
7101bd91dc  and w12,w12,#0xff
7101bd91e0  eor w13,w13,w12
7101bd91e4  ldrb w12,[x8], #0x1
7101bd91e8  cbnz w12,0x7101bd91d8
7101bd91ec  str w13,[sp, #0xc0]
7101bd91f0  mov x13,#0x656d
7101bd91f4  movk x13,#0x5f6c, LSL #16
7101bd91f8  orr x8,xzr,#0x1e00000000
7101bd91fc  movk x13,#0x7572, LSL #32
7101bd9200  movk x13,#0x656c, LSL #48
7101bd9204  stp x8,x13,[sp, #0x78]
7101bd9208  mov x13,#0x735f
7101bd920c  movk x13,#0x6c65, LSL #16
7101bd9210  movk x13,#0x6365, LSL #32
7101bd9214  movk x13,#0x5f74, LSL #48
7101bd9218  str x13,[sp, #0x88]
7101bd921c  mov x13,#0x6974
7101bd9220  movk x13,#0x656d, LSL #16
7101bd9224  movk x13,#0x695f, LSL #32
7101bd9228  movk x13,#0x696e, LSL #48
7101bd922c  str x13,[sp, #0x90]
7101bd9230  mov w13,#0x6966
7101bd9234  movk w13,#0x696e, LSL #16
7101bd9238  str w13,[sp, #0x98]
7101bd923c  add x12,sp,#0x78
7101bd9240  mov w13,#0x7974
7101bd9244  strh w13,[sp, #0x9c]
7101bd9248  add x8,x12,#0x8
7101bd924c  add x12,x12,#0x9
7101bd9250  strb wzr,[sp, #0x9e]
7101bd9254  mov w13,#0x6d
7101bd9258  mul w10,w10,w11
7101bd925c  and w13,w13,#0xff
7101bd9260  eor w10,w10,w13
7101bd9264  ldrb w13,[x12], #0x1
7101bd9268  cbnz w13,0x7101bd9258
7101bd926c  str w10,[sp, #0x78]
7101bd9270  cbz w9,0x7101bda004
7101bd9274  mov w10,#0xb3c5
7101bd9278  movk w10,#0x91a2, LSL #16
7101bd927c  mov w8,#0x8889
7101bd9280  movk w8,#0x8888, LSL #16
7101bd9284  umull x10,w9,w10
7101bd9288  umull x8,w9,w8
7101bd928c  mov w12,#0x4240
7101bd9290  movk w12,#0xf, LSL #16
7101bd9294  mov w13,#0x3e8
7101bd9298  sub x0,x29,#0xe8
7101bd929c  lsr x8,x8,#0x25
7101bd92a0  lsr x10,x10,#0x2b
7101bd92a4  mul x10,x10,x12
7101bd92a8  mov w11,#0xffffffc4
7101bd92ac  cmp w8,#0x3e7
7101bd92b0  mov w12,#0x3e7
7101bd92b4  madd w9,w8,w11,w9
7101bd92b8  csel x8,x8,x12,cc
7101bd92bc  madd x8,x8,x13,x10
7101bd92c0  and w11,w9,#0xffff
7101bd92c4  and x9,x9,#0xffff
7101bd92c8  cmp w11,#0x3e7
7101bd92cc  csel x9,x9,x12,cc
7101bd92d0  add x3,x8,x9
7101bd92d4  mov w2,#0x1
7101bd92d8  bl 0x710377a280
7101bd92dc  b 0x7101bda010
7101bd92e0  ldrb w9,[x8, #0x58]
7101bd92e4  and w9,w9,#0xfe
7101bd92e8  strb w9,[x8, #0x58]
7101bd92ec  b 0x7101bd9380
7101bd92f0  mov w8,#0x320
7101bd92f4  madd x8,x26,x8,x25
7101bd92f8  ldrb w3,[x8, #0x18]
7101bd92fc  adrp x1,0x710435b000
7101bd9300  add x1,x1,#0x5de
7101bd9304  sub x0,x29,#0xe8
7101bd9308  mov w2,#0x1
7101bd930c  bl 0x710377a280
7101bd9310  ldr x9,[x24]
7101bd9314  ldr x8,[x28]
7101bd9318  cmp x9,x8
7101bd931c  b.eq 0x7101bda0b0
7101bd9320  ldr x8,[x8]
7101bd9324  ldr x8,[x8]
7101bd9328  ldr x8,[x8]
7101bd932c  ldr x9,[x8, #0x10]
7101bd9330  ldr x9,[x9, #0x8]
7101bd9334  cbz x9,0x7101bda094
7101bd9338  add x0,x8,#0x8
7101bd933c  adrp x1,0x710425f000
7101bd9340  add x1,x1,#0x240
7101bd9344  b 0x7101bda044
7101bd9348  mov w8,#0x320
7101bd934c  madd x8,x26,x8,x25
7101bd9350  ldrb w8,[x8, #0x19]
7101bd9354  cmp w8,#0xb
7101bd9358  b.hi 0x7101bd9fb4
7101bd935c  adrp x9,0x7104ada000
7101bd9360  add x9,x9,#0x640
7101bd9364  sxtb x8,w8
7101bd9368  ldr w3,[x9, x8, LSL #0x2]
7101bd936c  b 0x7101bd9fb8
7101bd9370  adrp x1,0x710434a000
7101bd9374  add x1,x1,#0x1e9
7101bd9378  sub x0,x29,#0xe8
7101bd937c  bl 0x710377a120
7101bd9380  adrp x22,0x71043df000
7101bd9384  add x22,x22,#0xfdc
7101bd9388  stp x20,xzr,[x29, #-0xe8]
7101bd938c  cbz x23,0x7101bd9398
7101bd9390  mov x0,x23
7101bd9394  bl 0x710392eb40
7101bd9398  stp x20,xzr,[x29, #-0x90]
7101bd939c  cbz x21,0x7101bd93a8
7101bd93a0  mov x0,x21
7101bd93a4  bl 0x710392eb40
7101bd93a8  ldr x9,[x24]
7101bd93ac  ldr x8,[x28]
7101bd93b0  cmp x9,x8
7101bd93b4  ldr x23,[sp, #0x40]
7101bd93b8  b.eq 0x7101bda0b0
7101bd93bc  ldr x8,[x8]
7101bd93c0  ldr x8,[x8]
7101bd93c4  ldr x8,[x8]
7101bd93c8  ldr x9,[x8, #0x10]
7101bd93cc  ldr x9,[x9, #0x8]
7101bd93d0  cbz x9,0x7101bd942c
7101bd93d4  add x0,x8,#0x8
7101bd93d8  sub x8,x29,#0x80
7101bd93dc  mov x1,x22
7101bd93e0  bl 0x71037780e0
7101bd93e4  ldur x21,[x29, #-0x78]
7101bd93e8  ldr x8,[x21]
7101bd93ec  cbz x8,0x7101bd9414
7101bd93f0  ldr x8,[x21, #0x8]
7101bd93f4  cbz x8,0x7101bd9404
7101bd93f8  fmov s0,0x3f800000
7101bd93fc  sub x0,x29,#0x80
7101bd9400  bl 0x710377aee0
7101bd9404  adrp x8,0x710523d000
7101bd9408  add x8,x8,#0x9e8
7101bd940c  stp x8,xzr,[x29, #-0x80]
7101bd9410  b 0x7101bd9424
7101bd9414  adrp x8,0x710523d000
7101bd9418  add x8,x8,#0x9e8
7101bd941c  stp x8,xzr,[x29, #-0x80]
7101bd9420  cbz x21,0x7101bd942c
7101bd9424  mov x0,x21
7101bd9428  bl 0x710392eb40
7101bd942c  mov w8,#0x320
7101bd9430  str x26,[sp, #0x30]
7101bd9434  madd x26,x26,x8,x25
7101bd9438  ldrb w2,[x26, #0xab]!
7101bd943c  adrp x1,0x7104454000
7101bd9440  add x1,x1,#0x8cd
7101bd9444  sub x0,x29,#0xd8
7101bd9448  sub x20,x29,#0xd8
7101bd944c  bl 0x710062dc20
7101bd9450  ldr x9,[x24]
7101bd9454  ldr x8,[x28]
7101bd9458  cmp x9,x8
7101bd945c  b.eq 0x7101bda0b0
7101bd9460  ldr x8,[x8]
7101bd9464  ldr x8,[x8]
7101bd9468  ldr x8,[x8]
7101bd946c  add x9,x20,#0x8
7101bd9470  str x9,[sp, #0x60]
7101bd9474  ldr x9,[x8, #0x10]
7101bd9478  ldr x9,[x9, #0x8]
7101bd947c  cbz x9,0x7101bd94d8
7101bd9480  ldr x1,[sp, #0x60]
7101bd9484  add x0,x8,#0x8
7101bd9488  sub x8,x29,#0x80
7101bd948c  bl 0x71037780e0
7101bd9490  ldur x21,[x29, #-0x78]
7101bd9494  ldr x8,[x21]
7101bd9498  cbz x8,0x7101bd94c0
7101bd949c  ldr x8,[x21, #0x8]
7101bd94a0  cbz x8,0x7101bd94b0
7101bd94a4  fmov s0,0x3f800000
7101bd94a8  sub x0,x29,#0x80
7101bd94ac  bl 0x710377aee0
7101bd94b0  adrp x8,0x710523d000
7101bd94b4  add x8,x8,#0x9e8
7101bd94b8  stp x8,xzr,[x29, #-0x80]
7101bd94bc  b 0x7101bd94d0
7101bd94c0  adrp x8,0x710523d000
7101bd94c4  add x8,x8,#0x9e8
7101bd94c8  stp x8,xzr,[x29, #-0x80]
7101bd94cc  cbz x21,0x7101bd94d8
7101bd94d0  mov x0,x21
7101bd94d4  bl 0x710392eb40
7101bd94d8  ldr x1,[x19, #0x188]
7101bd94dc  str x25,[sp, #0x38]
7101bd94e0  ldp x8,x9,[x1, #0x180]
7101bd94e4  sub x8,x9,x8
7101bd94e8  lsr x8,x8,#0x3
7101bd94ec  cmp w8,#0x1
7101bd94f0  b.lt 0x7101bd95b8
7101bd94f4  mov w21,wzr
7101bd94f8  mov w22,#0x32
7101bd94fc  adrp x20,0x710523d000
7101bd9500  add x20,x20,#0x9c8
7101bd9504  sub x0,x29,#0x80
7101bd9508  mov w2,w21
7101bd950c  bl 0x7103771d60
7101bd9510  ldur x24,[x29, #-0x78]
7101bd9514  ldr x25,[x24]
7101bd9518  cbz x25,0x7101bd9578
7101bd951c  ldr x8,[x25]
7101bd9520  ldr x8,[x8, #0x1f8]
7101bd9524  mov x0,x25
7101bd9528  mov w1,wzr
7101bd952c  blr x8
7101bd9530  ldr x8,[x25]
7101bd9534  ldr x8,[x8, #0x200]
7101bd9538  mov x0,x25
7101bd953c  blr x8
7101bd9540  tbz w0,#0x0,0x7101bd955c
7101bd9544  ldr x8,[x25]
7101bd9548  ldr x8,[x8, #0x210]
7101bd954c  mov x0,x25
7101bd9550  blr x8
7101bd9554  eor w8,w0,#0x1
7101bd9558  b 0x7101bd9560
7101bd955c  mov w8,#0x1
7101bd9560  ldr x9,[x25]
7101bd9564  ldr x9,[x9, #0x388]
7101bd9568  and w1,w8,#0x1
7101bd956c  mov x0,x25
7101bd9570  mov w2,wzr
7101bd9574  blr x9
7101bd9578  ldr x0,[x19, #0x188]
7101bd957c  mov w1,w21
7101bd9580  mov w2,w22
7101bd9584  mov w3,wzr
7101bd9588  bl 0x7103771930
7101bd958c  stp x20,xzr,[x29, #-0x80]
7101bd9590  cbz x24,0x7101bd959c
7101bd9594  mov x0,x24
7101bd9598  bl 0x710392eb40
7101bd959c  ldr x1,[x19, #0x188]
7101bd95a0  ldp x8,x9,[x1, #0x180]
7101bd95a4  sub x8,x9,x8
7101bd95a8  add w21,w21,#0x1
7101bd95ac  lsr x8,x8,#0x3
7101bd95b0  cmp w21,w8
7101bd95b4  b.lt 0x7101bd9504
7101bd95b8  ldrb w8,[x26]
7101bd95bc  cbz w8,0x7101bd9b90
7101bd95c0  add x8,x19,#0x1c8
7101bd95c4  str x8,[sp, #0x28]
7101bd95c8  mov w10,#0x320
7101bd95cc  ldp x9,x8,[sp, #0x30]
7101bd95d0  madd x8,x9,x10,x8
7101bd95d4  fmov s8,0x3f800000
7101bd95d8  mov x24,xzr
7101bd95dc  adrp x25,0x710523d000
7101bd95e0  add x25,x25,#0x9a8
7101bd95e4  add x20,x8,#0xaa
7101bd95e8  add x9,x8,#0x318
7101bd95ec  add x8,x8,#0x60
7101bd95f0  stp x8,x9,[sp, #0x48]
7101bd95f4  sub x0,x29,#0xd8
7101bd95f8  adrp x1,0x710424f000
7101bd95fc  add x1,x1,#0x3cb
7101bd9600  mov w2,w24
7101bd9604  bl 0x710062dc20
7101bd9608  ldr x1,[sp, #0x60]
7101bd960c  sub x8,x29,#0x90
7101bd9610  mov x0,x23
7101bd9614  bl 0x7103776640
7101bd9618  ldur x22,[x29, #-0x88]
7101bd961c  ldr x8,[x22, #0x8]
7101bd9620  cbz x8,0x7101bd9b58
7101bd9624  mov w0,#0x10
7101bd9628  mov w1,#0x8
7101bd962c  bl 0x710392e290
7101bd9630  mov x21,x0
7101bd9634  cbnz x0,0x7101bd9680
7101bd9638  adrp x8,0x7105332000
7101bd963c  ldr x0,[x8, #0xf00]
7101bd9640  cbz x0,0x7101bd967c
7101bd9644  mov w8,#0x8
7101bd9648  stur wzr,[x29, #-0xe8]
7101bd964c  sub x1,x29,#0xe8
7101bd9650  stur x8,[x29, #-0x80]
7101bd9654  ldr x8,[x0]
7101bd9658  ldr x8,[x8, #0x30]
7101bd965c  sub x2,x29,#0x80
7101bd9660  blr x8
7101bd9664  tbz w0,#0x0,0x7101bd967c
7101bd9668  mov w0,#0x10
7101bd966c  mov w1,#0x8
7101bd9670  bl 0x710392e290
7101bd9674  mov x21,x0
7101bd9678  cbnz x0,0x7101bd9680
7101bd967c  mov x21,xzr
7101bd9680  str xzr,[x21]
7101bd9684  ldr x8,[x22, #0x8]
7101bd9688  cbz x8,0x7101bd96f0
7101bd968c  ldr x0,[x8, #0x60]
7101bd9690  cbz x0,0x7101bd96f0
7101bd9694  ldr x8,[x8, #0x18]
7101bd9698  add x1,x8,#0xb0
7101bd969c  bl 0x7103796f20
7101bd96a0  str x0,[x21]
7101bd96a4  cbz x0,0x7101bd9714
7101bd96a8  ldrb w8,[x20]
7101bd96ac  cmp x24,x8
7101bd96b0  ldr x8,[x0]
7101bd96b4  cset w1,cc
7101bd96b8  ldr x8,[x8, #0x1f8]
7101bd96bc  mov x22,x0
7101bd96c0  blr x8
7101bd96c4  ldr x8,[x22]
7101bd96c8  ldr x8,[x8, #0x200]
7101bd96cc  mov x0,x22
7101bd96d0  blr x8
7101bd96d4  tbz w0,#0x0,0x7101bd96f8
7101bd96d8  ldr x8,[x22]
7101bd96dc  ldr x8,[x8, #0x210]
7101bd96e0  mov x0,x22
7101bd96e4  blr x8
7101bd96e8  eor w8,w0,#0x1
7101bd96ec  b 0x7101bd96fc
7101bd96f0  str xzr,[x21]
7101bd96f4  b 0x7101bd9714
7101bd96f8  mov w8,#0x1
7101bd96fc  ldr x9,[x22]
7101bd9700  ldr x9,[x9, #0x388]
7101bd9704  and w1,w8,#0x1
7101bd9708  mov x0,x22
7101bd970c  mov w2,wzr
7101bd9710  blr x9
7101bd9714  sub x8,x29,#0xe8
7101bd9718  sub x0,x29,#0x90
7101bd971c  adrp x1,0x71043ad000
7101bd9720  add x1,x1,#0xa80
7101bd9724  bl 0x7103776910
7101bd9728  ldr x8,[sp, #0x50]
7101bd972c  ldrb w8,[x8]
7101bd9730  cbz w8,0x7101bd9858
7101bd9734  sub x8,x29,#0x80
7101bd9738  sub x0,x29,#0x90
7101bd973c  adrp x1,0x710434a000
7101bd9740  add x1,x1,#0x68e
7101bd9744  bl 0x7103776910
7101bd9748  ldrb w8,[x20]
7101bd974c  cmp x24,x8
7101bd9750  b.cs 0x7101bd9868
7101bd9754  ldr x8,[sp, #0x48]
7101bd9758  cbz x24,0x7101bd9780
7101bd975c  sub w8,w24,#0x1
7101bd9760  cmp w8,#0x7
7101bd9764  b.cs 0x7101bda0b8
7101bd9768  ldp x10,x9,[sp, #0x30]
7101bd976c  mov w11,#0x320
7101bd9770  madd x9,x10,x11,x9
7101bd9774  mov w10,#0x48
7101bd9778  umaddl x8,w8,w10,x9
7101bd977c  add x8,x8,#0x120
7101bd9780  ldrsh w2,[x8, #0x3c]
7101bd9784  sub x1,x29,#0xe8
7101bd9788  mov x0,x19
7101bd978c  mov x23,x28
7101bd9790  bl 0x7101bda220
7101bd9794  mov x27,x0
7101bd9798  mov w0,#0x10
7101bd979c  mov w1,#0x20
7101bd97a0  str x25,[sp, #0x68]
7101bd97a4  bl 0x710392e290
7101bd97a8  cbnz x0,0x7101bd97f0
7101bd97ac  adrp x8,0x7105332000
7101bd97b0  ldr x0,[x8, #0xf00]
7101bd97b4  cbz x0,0x7101bd97ec
7101bd97b8  mov w8,#0x20
7101bd97bc  stur wzr,[x29, #-0x54]
7101bd97c0  sub x1,x29,#0x54
7101bd97c4  stur x8,[x29, #-0x70]
7101bd97c8  ldr x8,[x0]
7101bd97cc  ldr x8,[x8, #0x30]
7101bd97d0  sub x2,x29,#0x70
7101bd97d4  blr x8
7101bd97d8  tbz w0,#0x0,0x7101bd97ec
7101bd97dc  mov w0,#0x10
7101bd97e0  mov w1,#0x20
7101bd97e4  bl 0x710392e290
7101bd97e8  cbnz x0,0x7101bd97f0
7101bd97ec  mov x0,xzr
7101bd97f0  stp xzr,xzr,[x0, #0x10]
7101bd97f4  mov x28,x0
7101bd97f8  stp xzr,xzr,[x0]
7101bd97fc  ldur x8,[x29, #-0x78]
7101bd9800  mov x1,x27
7101bd9804  str x0,[sp, #0x70]
7101bd9808  ldr x9,[x8]
7101bd980c  str x9,[x0]
7101bd9810  ldr x8,[x8, #0x8]
7101bd9814  str x8,[x0, #0x8]
7101bd9818  ldur x22,[x29, #-0x78]
7101bd981c  ldr x8,[x22, #0x10]
7101bd9820  str x8,[x28, #0x10]
7101bd9824  ldr x8,[x22, #0x18]
7101bd9828  add x0,sp,#0x68
7101bd982c  str x8,[x28, #0x18]
7101bd9830  bl 0x710337d450
7101bd9834  stp x25,xzr,[sp, #0x68]
7101bd9838  cbz x28,0x7101bd9844
7101bd983c  mov x0,x28
7101bd9840  bl 0x710392eb40
7101bd9844  mov x28,x23
7101bd9848  ldr x23,[sp, #0x40]
7101bd984c  stp x25,xzr,[x29, #-0x80]
7101bd9850  cbnz x22,0x7101bd98f4
7101bd9854  b 0x7101bd98fc
7101bd9858  ldur x0,[x29, #-0xe0]
7101bd985c  mov w1,#0x1
7101bd9860  bl 0x71037790a0
7101bd9864  b 0x7101bd98fc
7101bd9868  ldr x22,[sp, #0x28]
7101bd986c  sub x0,x29,#0x80
7101bd9870  mov w1,#0x1
7101bd9874  mov x2,x22
7101bd9878  bl 0x7103779d90
7101bd987c  ldrb w27,[x22, #0x3]
7101bd9880  ldur x22,[x29, #-0x78]
7101bd9884  ldr x0,[x22, #0x8]
7101bd9888  cbz x0,0x7101bd98a4
7101bd988c  bl 0x71000597e0
7101bd9890  cbz x0,0x7101bd98a4
7101bd9894  ldrb w8,[x0, #0x14]
7101bd9898  tst w8,#0x3
7101bd989c  b.eq 0x7101bd98a4
7101bd98a0  strb w27,[x0, #0xf]
7101bd98a4  ldr x8,[x22, #0x18]
7101bd98a8  cbz x8,0x7101bd98c4
7101bd98ac  ldr x8,[x8, #0x118]
7101bd98b0  cbz x8,0x7101bd98c4
7101bd98b4  ldrb w9,[x8, #0x14]
7101bd98b8  tst w9,#0x3
7101bd98bc  b.eq 0x7101bd98c4
7101bd98c0  strb w27,[x8, #0xf]
7101bd98c4  ldr x0,[x22, #0x10]
7101bd98c8  cbz x0,0x7101bd98e4
7101bd98cc  ldr x8,[x0]
7101bd98d0  ldr x8,[x8, #0x58]
7101bd98d4  mov w1,wzr
7101bd98d8  blr x8
7101bd98dc  cbz x0,0x7101bd98e4
7101bd98e0  strb w27,[x0, #0xf]
7101bd98e4  ldur x0,[x29, #-0xe0]
7101bd98e8  mov w1,#0x1
7101bd98ec  bl 0x71037790a0
7101bd98f0  stp x25,xzr,[x29, #-0x80]
7101bd98f4  mov x0,x22
7101bd98f8  bl 0x710392eb40
7101bd98fc  ldrb w8,[x20]
7101bd9900  cmp x24,x8
7101bd9904  b.cs 0x7101bd997c
7101bd9908  ldr x8,[sp, #0x48]
7101bd990c  cbz x24,0x7101bd9934
7101bd9910  sub w8,w24,#0x1
7101bd9914  cmp w8,#0x7
7101bd9918  b.cs 0x7101bda0b8
7101bd991c  ldp x10,x9,[sp, #0x30]
7101bd9920  mov w11,#0x320
7101bd9924  madd x9,x10,x11,x9
7101bd9928  mov w10,#0x48
7101bd992c  umaddl x8,w8,w10,x9
7101bd9930  add x8,x8,#0x120
7101bd9934  adrp x9,0x710593b000
7101bd9938  ldr x9,[x9, #0x5f0]
7101bd993c  cbz x9,0x7101bd999c
7101bd9940  ldr x9,[x9]
7101bd9944  mov w10,#0x5998
7101bd9948  movk w10,#0x2, LSL #16
7101bd994c  ldr x11,[x9, x10, LSL #0x0]
7101bd9950  cbz x11,0x7101bd9a40
7101bd9954  ldr x8,[x8, #0x10]
7101bd9958  sub x12,x11,#0x1
7101bd995c  ands x13,x12,x11
7101bd9960  b.eq 0x7101bd99a8
7101bd9964  cmp x8,x11
7101bd9968  mov x10,x8
7101bd996c  b.cc 0x7101bd99ac
7101bd9970  udiv x10,x8,x11
7101bd9974  msub x10,x10,x11,x8
7101bd9978  b 0x7101bd99ac
7101bd997c  ldur x22,[x29, #-0x88]
7101bd9980  ldr x8,[x22, #0x8]
7101bd9984  cbz x8,0x7101bd9abc
7101bd9988  sub x8,x29,#0x80
7101bd998c  sub x0,x29,#0x90
7101bd9990  adrp x1,0x71042f8000
7101bd9994  add x1,x1,#0x1a7
7101bd9998  b 0x7101bd9a70
7101bd999c  adrp x1,0x71042f8000
7101bd99a0  add x1,x1,#0x1a7
7101bd99a4  b 0x7101bd9a5c
7101bd99a8  and x10,x12,x8
7101bd99ac  mov w14,#0x5990
7101bd99b0  movk w14,#0x2, LSL #16
7101bd99b4  ldr x9,[x9, x14, LSL #0x0]
7101bd99b8  ldr x9,[x9, x10, LSL #0x3]
7101bd99bc  cbz x9,0x7101bd9a44
7101bd99c0  ldr x9,[x9]
7101bd99c4  cbz x9,0x7101bd9a44
7101bd99c8  cbz x13,0x7101bd9a0c
7101bd99cc  ldr x12,[x9, #0x8]
7101bd99d0  cmp x12,x8
7101bd99d4  b.ne 0x7101bd99e8
7101bd99d8  ldr x12,[x9, #0x10]
7101bd99dc  cmp x12,x8
7101bd99e0  b.ne 0x7101bd9a00
7101bd99e4  b 0x7101bd9a44
7101bd99e8  cmp x12,x11
7101bd99ec  b.cc 0x7101bd99f8
7101bd99f0  udiv x13,x12,x11
7101bd99f4  msub x12,x13,x11,x12
7101bd99f8  cmp x12,x10
7101bd99fc  b.ne 0x7101bd9a40
7101bd9a00  ldr x9,[x9]
7101bd9a04  cbnz x9,0x7101bd99cc
7101bd9a08  b 0x7101bd9a44
7101bd9a0c  ldr x11,[x9, #0x8]
7101bd9a10  and x13,x11,x12
7101bd9a14  cmp x11,x8
7101bd9a18  ccmp x13,x10,#0x4,ne
7101bd9a1c  b.ne 0x7101bd9a40
7101bd9a20  cmp x11,x8
7101bd9a24  b.ne 0x7101bd9a34
7101bd9a28  ldr x11,[x9, #0x10]
7101bd9a2c  cmp x11,x8
7101bd9a30  b.eq 0x7101bd9a44
7101bd9a34  ldr x9,[x9]
7101bd9a38  cbnz x9,0x7101bd9a0c
7101bd9a3c  b 0x7101bd9a44
7101bd9a40  mov x9,xzr
7101bd9a44  cmp x9,#0x0
7101bd9a48  adrp x8,0x71042f8000
7101bd9a4c  add x8,x8,#0x1a7
7101bd9a50  adrp x9,0x7104443000
7101bd9a54  add x9,x9,#0x536
7101bd9a58  csel x1,x8,x9,eq
7101bd9a5c  ldur x22,[x29, #-0x88]
7101bd9a60  ldr x8,[x22, #0x8]
7101bd9a64  cbz x8,0x7101bd9abc
7101bd9a68  sub x8,x29,#0x80
7101bd9a6c  sub x0,x29,#0x90
7101bd9a70  bl 0x71037780e0
7101bd9a74  ldur x27,[x29, #-0x78]
7101bd9a78  ldr x8,[x27]
7101bd9a7c  cbz x8,0x7101bd9aa4
7101bd9a80  ldr x8,[x27, #0x8]
7101bd9a84  cbz x8,0x7101bd9a94
7101bd9a88  mov v0.16B,v8.16B
7101bd9a8c  sub x0,x29,#0x80
7101bd9a90  bl 0x710377aee0
7101bd9a94  adrp x8,0x710523d000
7101bd9a98  add x8,x8,#0x9e8
7101bd9a9c  stp x8,xzr,[x29, #-0x80]
7101bd9aa0  b 0x7101bd9ab4
7101bd9aa4  adrp x8,0x710523d000
7101bd9aa8  add x8,x8,#0x9e8
7101bd9aac  stp x8,xzr,[x29, #-0x80]
7101bd9ab0  cbz x27,0x7101bd9abc
7101bd9ab4  mov x0,x27
7101bd9ab8  bl 0x710392eb40
7101bd9abc  ldrb w8,[x26]
7101bd9ac0  cmp w8,#0x5
7101bd9ac4  mov w8,#0x1
7101bd9ac8  cinc w2,w8,cs
7101bd9acc  sub x0,x29,#0xd8
7101bd9ad0  adrp x1,0x7104291000
7101bd9ad4  add x1,x1,#0xadc
7101bd9ad8  bl 0x710062dc20
7101bd9adc  ldr x8,[x22, #0x8]
7101bd9ae0  cbz x8,0x7101bd9b3c
7101bd9ae4  ldr x1,[sp, #0x60]
7101bd9ae8  sub x8,x29,#0x80
7101bd9aec  sub x0,x29,#0x90
7101bd9af0  bl 0x71037780e0
7101bd9af4  ldur x27,[x29, #-0x78]
7101bd9af8  ldr x8,[x27]
7101bd9afc  cbz x8,0x7101bd9b24
7101bd9b00  ldr x8,[x27, #0x8]
7101bd9b04  cbz x8,0x7101bd9b14
7101bd9b08  mov v0.16B,v8.16B
7101bd9b0c  sub x0,x29,#0x80
7101bd9b10  bl 0x710377aee0
7101bd9b14  adrp x8,0x710523d000
7101bd9b18  add x8,x8,#0x9e8
7101bd9b1c  stp x8,xzr,[x29, #-0x80]
7101bd9b20  b 0x7101bd9b34
7101bd9b24  adrp x8,0x710523d000
7101bd9b28  add x8,x8,#0x9e8
7101bd9b2c  stp x8,xzr,[x29, #-0x80]
7101bd9b30  cbz x27,0x7101bd9b3c
7101bd9b34  mov x0,x27
7101bd9b38  bl 0x710392eb40
7101bd9b3c  ldur x0,[x29, #-0xe0]
7101bd9b40  stp x25,xzr,[x29, #-0xe8]
7101bd9b44  cbz x0,0x7101bd9b4c
7101bd9b48  bl 0x710392eb40
7101bd9b4c  cbz x21,0x7101bd9b58
7101bd9b50  mov x0,x21
7101bd9b54  bl 0x710392eb40
7101bd9b58  adrp x8,0x710523d000
7101bd9b5c  add x8,x8,#0x988
7101bd9b60  stp x8,xzr,[x29, #-0x90]
7101bd9b64  cbz x22,0x7101bd9b80
7101bd9b68  ldr x0,[x22, #0x18]
7101bd9b6c  stp x25,xzr,[x22, #0x10]
7101bd9b70  cbz x0,0x7101bd9b78
7101bd9b74  bl 0x710392eb40
7101bd9b78  mov x0,x22
7101bd9b7c  bl 0x710392eb40
7101bd9b80  ldrb w8,[x26]
7101bd9b84  add x24,x24,#0x1
7101bd9b88  cmp x24,x8
7101bd9b8c  b.cc 0x7101bd95f4
7101bd9b90  ldr x20,[sp, #0x58]
7101bd9b94  ldur w22,[x29, #-0x58]
7101bd9b98  ldr x25,[sp, #0x18]
7101bd9b9c  ldp x24,x23,[sp, #0x30]
7101bd9ba0  tbnz w22,#0x0,0x7101bd9c0c
7101bd9ba4  ldr x0,[sp, #0x40]
7101bd9ba8  adrp x1,0x710433a000
7101bd9bac  add x1,x1,#0x54
7101bd9bb0  sub x8,x29,#0x80
7101bd9bb4  bl 0x7103776910
7101bd9bb8  ldur x21,[x29, #-0x78]
7101bd9bbc  ldr x8,[x21]
7101bd9bc0  cbz x8,0x7101bd9bf4
7101bd9bc4  ldr x0,[x21, #0x10]
7101bd9bc8  cbz x0,0x7101bd9be4
7101bd9bcc  mov w8,#0x320
7101bd9bd0  madd x8,x24,x8,x23
7101bd9bd4  add x1,x8,#0x80
7101bd9bd8  mov w2,#0xffffffff
7101bd9bdc  mov w3,#0x1
7101bd9be0  bl 0x71037a2270
7101bd9be4  adrp x8,0x710523d000
7101bd9be8  add x8,x8,#0x9a8
7101bd9bec  stp x8,xzr,[x29, #-0x80]
7101bd9bf0  b 0x7101bd9c04
7101bd9bf4  adrp x8,0x710523d000
7101bd9bf8  add x8,x8,#0x9a8
7101bd9bfc  stp x8,xzr,[x29, #-0x80]
7101bd9c00  cbz x21,0x7101bd9c0c
7101bd9c04  mov x0,x21
7101bd9c08  bl 0x710392eb40
7101bd9c0c  mov w8,#0x320
7101bd9c10  madd x8,x24,x8,x23
7101bd9c14  ldrb w8,[x8, #0xbd]
7101bd9c18  cbz w8,0x7101bd9c8c
7101bd9c1c  ldrb w8,[x25]
7101bd9c20  cmp w8,#0x2
7101bd9c24  b.ne 0x7101bd9c38
7101bd9c28  mov w8,#0x320
7101bd9c2c  madd x8,x24,x8,x23
7101bd9c30  ldrb w8,[x8, #0x8]
7101bd9c34  cbz w8,0x7101bd9cc4
7101bd9c38  ldr x8,[sp, #0x10]
7101bd9c3c  ldr x9,[sp, #0x20]
7101bd9c40  ldrb w8,[x8]
7101bd9c44  ldrb w9,[x9]
7101bd9c48  eor w8,w9,w8
7101bd9c4c  tst w8,#0x3f
7101bd9c50  b.eq 0x7101bd9cc4
7101bd9c54  ldr x9,[x20]
7101bd9c58  ldr x8,[x28]
7101bd9c5c  cmp x9,x8
7101bd9c60  b.eq 0x7101bda0b0
7101bd9c64  ldr x8,[x8]
7101bd9c68  ldr x8,[x8]
7101bd9c6c  ldr x8,[x8]
7101bd9c70  ldr x9,[x8, #0x10]
7101bd9c74  ldr x9,[x9, #0x8]
7101bd9c78  cbz x9,0x7101bd9d48
7101bd9c7c  add x0,x8,#0x8
7101bd9c80  adrp x1,0x71042b4000
7101bd9c84  add x1,x1,#0x25b
7101bd9c88  b 0x7101bd9cf8
7101bd9c8c  ldr x9,[x20]
7101bd9c90  ldr x8,[x28]
7101bd9c94  cmp x9,x8
7101bd9c98  b.eq 0x7101bda0b0
7101bd9c9c  ldr x8,[x8]
7101bd9ca0  ldr x8,[x8]
7101bd9ca4  ldr x8,[x8]
7101bd9ca8  ldr x9,[x8, #0x10]
7101bd9cac  ldr x9,[x9, #0x8]
7101bd9cb0  cbz x9,0x7101bd9d48
7101bd9cb4  add x0,x8,#0x8
7101bd9cb8  adrp x1,0x7104329000
7101bd9cbc  add x1,x1,#0xe3b
7101bd9cc0  b 0x7101bd9cf8
7101bd9cc4  ldr x9,[x20]
7101bd9cc8  ldr x8,[x28]
7101bd9ccc  cmp x9,x8
7101bd9cd0  b.eq 0x7101bda0b0
7101bd9cd4  ldr x8,[x8]
7101bd9cd8  ldr x8,[x8]
7101bd9cdc  ldr x8,[x8]
7101bd9ce0  ldr x9,[x8, #0x10]
7101bd9ce4  ldr x9,[x9, #0x8]
7101bd9ce8  cbz x9,0x7101bd9d48
7101bd9cec  add x0,x8,#0x8
7101bd9cf0  adrp x1,0x7104432000
7101bd9cf4  add x1,x1,#0xf1c
7101bd9cf8  sub x8,x29,#0x80
7101bd9cfc  bl 0x71037780e0
7101bd9d00  ldur x21,[x29, #-0x78]
7101bd9d04  ldr x8,[x21]
7101bd9d08  cbz x8,0x7101bd9d30
7101bd9d0c  ldr x8,[x21, #0x8]
7101bd9d10  cbz x8,0x7101bd9d20
7101bd9d14  fmov s0,0x3f800000
7101bd9d18  sub x0,x29,#0x80
7101bd9d1c  bl 0x710377aee0
7101bd9d20  adrp x8,0x710523d000
7101bd9d24  add x8,x8,#0x9e8
7101bd9d28  stp x8,xzr,[x29, #-0x80]
7101bd9d2c  b 0x7101bd9d40
7101bd9d30  adrp x8,0x710523d000
7101bd9d34  add x8,x8,#0x9e8
7101bd9d38  stp x8,xzr,[x29, #-0x80]
7101bd9d3c  cbz x21,0x7101bd9d48
7101bd9d40  mov x0,x21
7101bd9d44  bl 0x710392eb40
7101bd9d48  ldrb w8,[x25]
7101bd9d4c  cmp w8,#0x2
7101bd9d50  b.eq 0x7101bd9dd0
7101bd9d54  cmp w8,#0x1
7101bd9d58  b.eq 0x7101bd9d98
7101bd9d5c  cbnz w8,0x7101bd9e70
7101bd9d60  ldr x9,[x20]
7101bd9d64  ldr x8,[x28]
7101bd9d68  cmp x9,x8
7101bd9d6c  b.eq 0x7101bda0b0
7101bd9d70  ldr x8,[x8]
7101bd9d74  ldr x8,[x8]
7101bd9d78  ldr x8,[x8]
7101bd9d7c  ldr x9,[x8, #0x10]
7101bd9d80  ldr x9,[x9, #0x8]
7101bd9d84  cbz x9,0x7101bd9e70
7101bd9d88  add x0,x8,#0x8
7101bd9d8c  adrp x1,0x71043cf000
7101bd9d90  add x1,x1,#0x32b
7101bd9d94  b 0x7101bd9e20
7101bd9d98  ldr x9,[x20]
7101bd9d9c  ldr x8,[x28]
7101bd9da0  cmp x9,x8
7101bd9da4  b.eq 0x7101bda0b0
7101bd9da8  ldr x8,[x8]
7101bd9dac  ldr x8,[x8]
7101bd9db0  ldr x8,[x8]
7101bd9db4  ldr x9,[x8, #0x10]
7101bd9db8  ldr x9,[x9, #0x8]
7101bd9dbc  cbz x9,0x7101bd9e70
7101bd9dc0  add x0,x8,#0x8
7101bd9dc4  adrp x1,0x7104412000
7101bd9dc8  add x1,x1,#0x8e0
7101bd9dcc  b 0x7101bd9e20
7101bd9dd0  ldr x9,[x20]
7101bd9dd4  ldr x8,[x28]
7101bd9dd8  cmp x9,x8
7101bd9ddc  b.eq 0x7101bda0b0
7101bd9de0  ldr x8,[x8]
7101bd9de4  ldr x8,[x8]
7101bd9de8  ldr x8,[x8]
7101bd9dec  ldr x9,[x8, #0x10]
7101bd9df0  ldr x9,[x9, #0x8]
7101bd9df4  cbz x9,0x7101bd9e70
7101bd9df8  mov w9,#0x320
7101bd9dfc  madd x9,x24,x9,x23
7101bd9e00  ldrb w9,[x9, #0x8]
7101bd9e04  adrp x10,0x7104318000
7101bd9e08  add x10,x10,#0xd94
7101bd9e0c  adrp x11,0x71042a2000
7101bd9e10  add x11,x11,#0xeea
7101bd9e14  cmp w9,#0x0
7101bd9e18  add x0,x8,#0x8
7101bd9e1c  csel x1,x11,x10,eq
7101bd9e20  sub x8,x29,#0x80
7101bd9e24  bl 0x71037780e0
7101bd9e28  ldur x21,[x29, #-0x78]
7101bd9e2c  ldr x8,[x21]
7101bd9e30  cbz x8,0x7101bd9e58
7101bd9e34  ldr x8,[x21, #0x8]
7101bd9e38  cbz x8,0x7101bd9e48
7101bd9e3c  fmov s0,0x3f800000
7101bd9e40  sub x0,x29,#0x80
7101bd9e44  bl 0x710377aee0
7101bd9e48  adrp x8,0x710523d000
7101bd9e4c  add x8,x8,#0x9e8
7101bd9e50  stp x8,xzr,[x29, #-0x80]
7101bd9e54  b 0x7101bd9e68
7101bd9e58  adrp x8,0x710523d000
7101bd9e5c  add x8,x8,#0x9e8
7101bd9e60  stp x8,xzr,[x29, #-0x80]
7101bd9e64  cbz x21,0x7101bd9e70
7101bd9e68  mov x0,x21
7101bd9e6c  bl 0x710392eb40
7101bd9e70  ldr x0,[sp, #0x40]
7101bd9e74  adrp x1,0x71042e7000
7101bd9e78  add x1,x1,#0x239
7101bd9e7c  sub x8,x29,#0x90
7101bd9e80  bl 0x7103776910
7101bd9e84  ldur x21,[x29, #-0x88]
7101bd9e88  ldr x8,[x21]
7101bd9e8c  cbz x8,0x7101bd9eb0
7101bd9e90  ldrb w2,[x25]
7101bd9e94  adrp x1,0x7104412000
7101bd9e98  add x1,x1,#0x8b9
7101bd9e9c  sub x0,x29,#0xd8
7101bd9ea0  bl 0x710062dc20
7101bd9ea4  ldr x1,[sp, #0x60]
7101bd9ea8  sub x0,x29,#0x90
7101bd9eac  bl 0x710377a120
7101bd9eb0  tbnz w22,#0x0,0x7101bd9f98
7101bd9eb4  ldr x0,[x19, #0x178]
7101bd9eb8  ldr x8,[x0]
7101bd9ebc  ldr x8,[x8, #0x68]
7101bd9ec0  blr x8
7101bd9ec4  tbz w0,#0x0,0x7101bd9ee4
7101bd9ec8  ldr x0,[x19, #0x178]
7101bd9ecc  ldr x8,[x0]
7101bd9ed0  ldr x8,[x8, #0x70]
7101bd9ed4  mov w1,#0x1
7101bd9ed8  blr x8
7101bd9edc  ldr w22,[sp, #0xc]
7101bd9ee0  b 0x7101bd9f10
7101bd9ee4  ldr x0,[x19, #0x180]
7101bd9ee8  ldr x8,[x0]
7101bd9eec  ldr x8,[x8, #0x68]
7101bd9ef0  blr x8
7101bd9ef4  ldr w22,[sp, #0xc]
7101bd9ef8  tbz w0,#0x0,0x7101bd9f10
7101bd9efc  ldr x0,[x19, #0x180]
7101bd9f00  ldr x8,[x0]
7101bd9f04  ldr x8,[x8, #0x70]
7101bd9f08  mov w1,#0x1
7101bd9f0c  blr x8
7101bd9f10  mov w8,#0x320
7101bd9f14  madd x8,x24,x8,x23
7101bd9f18  str wzr,[x19, #0x1c0]
7101bd9f1c  ldrb w8,[x8, #0xaa]
7101bd9f20  cmp w22,w8
7101bd9f24  b.ne 0x7101bd9f30
7101bd9f28  ldr w8,[x19, #0x1bc]
7101bd9f2c  cbz w8,0x7101bd9f98
7101bd9f30  ldr x9,[x20]
7101bd9f34  ldr x8,[x28]
7101bd9f38  cmp x9,x8
7101bd9f3c  b.eq 0x7101bda0b0
7101bd9f40  ldr x8,[x8]
7101bd9f44  ldr x8,[x8]
7101bd9f48  ldr x8,[x8]
7101bd9f4c  ldr x9,[x8, #0x10]
7101bd9f50  ldr x9,[x9, #0x8]
7101bd9f54  cbz x9,0x7101bd9f98
7101bd9f58  add x0,x8,#0x8
7101bd9f5c  adrp x1,0x710438c000
7101bd9f60  add x1,x1,#0x87c
7101bd9f64  sub x8,x29,#0x80
7101bd9f68  bl 0x7103776910
7101bd9f6c  ldur x0,[x29, #-0x78]
7101bd9f70  ldr x8,[x0]
7101bd9f74  cbz x8,0x7101bd9f84
7101bd9f78  ldrb w9,[x8, #0x58]
7101bd9f7c  and w9,w9,#0xfe
7101bd9f80  strb w9,[x8, #0x58]
7101bd9f84  adrp x8,0x710523d000
7101bd9f88  add x8,x8,#0x9a8
7101bd9f8c  stp x8,xzr,[x29, #-0x80]
7101bd9f90  cbz x0,0x7101bd9f98
7101bd9f94  bl 0x710392eb40
7101bd9f98  adrp x8,0x710523d000
7101bd9f9c  add x8,x8,#0x9a8
7101bd9fa0  stp x8,xzr,[x29, #-0x90]
7101bd9fa4  cbz x21,0x7101bd7b0c
7101bd9fa8  mov x0,x21
7101bd9fac  bl 0x710392eb40
7101bd9fb0  b 0x7101bd7b0c
7101bd9fb4  mov w3,#0x96
7101bd9fb8  adrp x1,0x71043be000
7101bd9fbc  add x1,x1,#0x4e9
7101bd9fc0  sub x0,x29,#0xe8
7101bd9fc4  mov w2,#0x1
7101bd9fc8  bl 0x710377a280
7101bd9fcc  ldr x9,[x24]
7101bd9fd0  ldr x8,[x28]
7101bd9fd4  cmp x9,x8
7101bd9fd8  b.eq 0x7101bda0b0
7101bd9fdc  ldr x8,[x8]
7101bd9fe0  ldr x8,[x8]
7101bd9fe4  ldr x8,[x8]
7101bd9fe8  ldr x9,[x8, #0x10]
7101bd9fec  ldr x9,[x9, #0x8]
7101bd9ff0  cbz x9,0x7101bda094
7101bd9ff4  add x0,x8,#0x8
7101bd9ff8  adrp x1,0x7104291000
7101bd9ffc  add x1,x1,#0xac9
7101bda000  b 0x7101bda044
7101bda004  sub x0,x29,#0xe8
7101bda008  mov x1,x8
7101bda00c  bl 0x710377a120
7101bda010  ldr x9,[x24]
7101bda014  ldr x8,[x28]
7101bda018  cmp x9,x8
7101bda01c  b.eq 0x7101bda0b0
7101bda020  ldr x8,[x8]
7101bda024  ldr x8,[x8]
7101bda028  ldr x8,[x8]
7101bda02c  ldr x9,[x8, #0x10]
7101bda030  ldr x9,[x9, #0x8]
7101bda034  cbz x9,0x7101bda094
7101bda038  add x0,x8,#0x8
7101bda03c  adrp x1,0x71042c4000
7101bda040  add x1,x1,#0xc43
7101bda044  sub x8,x29,#0x80
7101bda048  bl 0x71037780e0
7101bda04c  ldur x22,[x29, #-0x78]
7101bda050  ldr x8,[x22]
7101bda054  cbz x8,0x7101bda07c
7101bda058  ldr x8,[x22, #0x8]
7101bda05c  cbz x8,0x7101bda06c
7101bda060  fmov s0,0x3f800000
7101bda064  sub x0,x29,#0x80
7101bda068  bl 0x710377aee0
7101bda06c  adrp x8,0x710523d000
7101bda070  add x8,x8,#0x9e8
7101bda074  stp x8,xzr,[x29, #-0x80]
7101bda078  b 0x7101bda08c
7101bda07c  adrp x8,0x710523d000
7101bda080  add x8,x8,#0x9e8
7101bda084  stp x8,xzr,[x29, #-0x80]
7101bda088  cbz x22,0x7101bda094
7101bda08c  mov x0,x22
7101bda090  bl 0x710392eb40
7101bda094  adrp x22,0x71042a2000
7101bda098  add x22,x22,#0xedd
7101bda09c  stp x20,xzr,[x29, #-0xe8]
7101bda0a0  cbnz x23,0x7101bd9390
7101bda0a4  b 0x7101bd9398
7101bda0a8  add x0,x0,#0x180
7101bda0ac  bl 0x71039c1330
7101bda0b0  mov x0,x28
7101bda0b4  bl 0x71039c1330
7101bda0b8  bl 0x71039c2650
7101bda0bc  mov x0,x20
7101bda0c0  bl 0x71039c1330
7101bda0c4  bl 0x71039c1330
7101bda0c8  add x0,x19,#0x198
7101bda0cc  bl 0x71039c1330
7101bda0d0  add x0,x10,#0x180
7101bda0d4  bl 0x71039c1330
