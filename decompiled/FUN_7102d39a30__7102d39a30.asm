// addr:      7102d39a30
// offset:    0x2d39a30
// name:      FUN_7102d39a30
// mangled:   
// size:      10496

7102d39a30  sub sp,sp,#0xe0
7102d39a34  stp x28,x27,[sp, #0x80]
7102d39a38  stp x26,x25,[sp, #0x90]
7102d39a3c  stp x24,x23,[sp, #0xa0]
7102d39a40  stp x22,x21,[sp, #0xb0]
7102d39a44  stp x20,x19,[sp, #0xc0]
7102d39a48  stp x29,x30,[sp, #0xd0]
7102d39a4c  add x29,sp,#0xd0
7102d39a50  mov w21,w1
7102d39a54  mov x28,x0
7102d39a58  str w1,[x0, #0x38]
7102d39a5c  cbz w1,0x7102d39a78
7102d39a60  ldr x8,[x28]
7102d39a64  ldr w8,[x8, #0x8]
7102d39a68  sub w8,w8,#0x15d
7102d39a6c  cmp w8,#0x1
7102d39a70  b.hi 0x7102d39a78
7102d39a74  str wzr,[x28, #0x38]
7102d39a78  ldrb w27,[x28, #0x34]
7102d39a7c  cbz w27,0x7102d39b30
7102d39a80  ldr x19,[x28, #0x40]
7102d39a84  mov x22,x19
7102d39a88  ldr x20,[x22, #0x38]!
7102d39a8c  cmp x22,x20
7102d39a90  b.eq 0x7102d39aac
7102d39a94  mov x0,x20
7102d39a98  bl 0x7102d346a0
7102d39a9c  ldr x20,[x20]
7102d39aa0  cmp x22,x20
7102d39aa4  b.ne 0x7102d39a94
7102d39aa8  ldr x20,[x22]
7102d39aac  cmp x22,x20
7102d39ab0  b.eq 0x7102d39ae0
7102d39ab4  mov w23,#0x1
7102d39ab8  ldr x0,[x20, #0x30]
7102d39abc  cbz x0,0x7102d39ad0
7102d39ac0  ldr w1,[x20, #0x38]
7102d39ac4  add x2,x20,#0x3c
7102d39ac8  mov w3,#0x1
7102d39acc  bl 0x7102d44300
7102d39ad0  strb w23,[x20, #0x91]
7102d39ad4  ldr x20,[x20]
7102d39ad8  cmp x22,x20
7102d39adc  b.ne 0x7102d39ab8
7102d39ae0  strb wzr,[x19, #0x8]
7102d39ae4  ldr x8,[x28, #0x60]
7102d39ae8  ldp x19,x20,[x8, #0x10]
7102d39aec  cmp x19,x20
7102d39af0  b.eq 0x7102d39b18
7102d39af4  mov w22,#0x1
7102d39af8  ldr x8,[x19, #0x8]
7102d39afc  cbz x8,0x7102d39b0c
7102d39b00  add x0,x8,#0x108
7102d39b04  strb w22,[x8, #0x110]
7102d39b08  bl 0x71025e9d50
7102d39b0c  add x19,x19,#0x18
7102d39b10  cmp x20,x19
7102d39b14  b.ne 0x7102d39af8
7102d39b18  ldr x0,[x28, #0x58]
7102d39b1c  strb wzr,[x0, #0x8]
7102d39b20  bl 0x7102d42de0
7102d39b24  ldr x0,[x28, #0x48]
7102d39b28  bl 0x7102d41dd0
7102d39b2c  strb wzr,[x28, #0x34]
7102d39b30  ldr x0,[x28, #0x40]
7102d39b34  bl 0x7102d36460
7102d39b38  ldr x8,[x28]
7102d39b3c  ldr w8,[x8, #0x8]
7102d39b40  ldr x19,[x28, #0x58]
7102d39b44  sub w10,w8,#0x15d
7102d39b48  ldr x8,[x19]
7102d39b4c  cmp w10,#0x2
7102d39b50  ldr x9,[x8]
7102d39b54  b.cs 0x7102d39b6c
7102d39b58  ldr w9,[x9, #0x8]
7102d39b5c  cmp w9,#0x15e
7102d39b60  b.ne 0x7102d39ecc
7102d39b64  mov w1,wzr
7102d39b68  b 0x7102d39edc
7102d39b6c  ldrb w9,[x9, #0x18]
7102d39b70  eor w9,w9,#0x1
7102d39b74  orr w1,w9,w21, LSL #0x1
7102d39b78  str w1,[x19, #0x10]
7102d39b7c  ldr x8,[x8]
7102d39b80  ldr x0,[x8, #0x300]
7102d39b84  mov w2,#0xffffffff
7102d39b88  bl 0x710262b8c0
7102d39b8c  ldr x8,[x19]
7102d39b90  ldr x8,[x8]
7102d39b94  ldr x8,[x8, #0x330]
7102d39b98  ldr x8,[x8]
7102d39b9c  ldp x22,x23,[x8, #0x50]
7102d39ba0  cmp x22,x23
7102d39ba4  b.eq 0x7102d39c04
7102d39ba8  ldr w19,[x19, #0x10]
7102d39bac  mov w24,#0x1
7102d39bb0  ldr x20,[x22]
7102d39bb4  ldr w9,[x20, #0xc]
7102d39bb8  ldrb w8,[x20, #0x18]
7102d39bbc  cmp w9,w19
7102d39bc0  b.ne 0x7102d39be0
7102d39bc4  cbnz w8,0x7102d39bf8
7102d39bc8  ldr x8,[x20]
7102d39bcc  ldr x8,[x8, #0x10]
7102d39bd0  mov x0,x20
7102d39bd4  blr x8
7102d39bd8  strb w24,[x20, #0x18]
7102d39bdc  b 0x7102d39bf8
7102d39be0  cbz w8,0x7102d39bf8
7102d39be4  ldr x8,[x20]
7102d39be8  strb wzr,[x20, #0x18]
7102d39bec  ldr x8,[x8, #0x18]
7102d39bf0  mov x0,x20
7102d39bf4  blr x8
7102d39bf8  add x22,x22,#0x8
7102d39bfc  cmp x23,x22
7102d39c00  b.ne 0x7102d39bb0
7102d39c04  adrp x8,0x7104306000
7102d39c08  add x8,x8,#0x918
7102d39c0c  adrp x9,0x710439b000
7102d39c10  add x9,x9,#0x571
7102d39c14  ldr x19,[x28, #0x68]
7102d39c18  adrp x10,0x71042d4000
7102d39c1c  add x10,x10,#0x75d
7102d39c20  stp x8,x9,[sp, #0x30]
7102d39c24  adrp x8,0x710426e000
7102d39c28  add x8,x8,#0x1aa
7102d39c2c  mov w22,w21
7102d39c30  stp x10,x8,[sp, #0x40]
7102d39c34  adrp x8,0x7104441000
7102d39c38  add x8,x8,#0xc8e
7102d39c3c  str x8,[sp, #0x50]
7102d39c40  adrp x8,0x710427e000
7102d39c44  add x8,x8,#0xdde
7102d39c48  cmp w21,#0x5
7102d39c4c  str x8,[sp, #0x58]
7102d39c50  b.hi 0x7102d39c6c
7102d39c54  ldr x8,[x19]
7102d39c58  ldr x8,[x8]
7102d39c5c  ldr x0,[x8, #0x318]
7102d39c60  add x8,sp,#0x30
7102d39c64  ldr x1,[x8, x22, LSL #0x3]
7102d39c68  bl 0x7102633800
7102d39c6c  adrp x8,0x710437a000
7102d39c70  add x8,x8,#0x9d2
7102d39c74  adrp x9,0x710426e000
7102d39c78  add x9,x9,#0x1c5
7102d39c7c  adrp x10,0x710426e000
7102d39c80  add x10,x10,#0x1d9
7102d39c84  stp x8,x9,[sp, #0x30]
7102d39c88  adrp x8,0x710436a000
7102d39c8c  add x8,x8,#0x7f7
7102d39c90  stp x10,x8,[sp, #0x40]
7102d39c94  adrp x9,0x7104317000
7102d39c98  add x9,x9,#0x288
7102d39c9c  adrp x8,0x710428f000
7102d39ca0  add x8,x8,#0xaae
7102d39ca4  cmp w21,#0x5
7102d39ca8  stp x9,x8,[sp, #0x50]
7102d39cac  b.hi 0x7102d39ccc
7102d39cb0  ldr x8,[x19]
7102d39cb4  ldr x8,[x8]
7102d39cb8  ldr x0,[x8, #0x318]
7102d39cbc  add x8,sp,#0x30
7102d39cc0  ldr x1,[x8, x22, LSL #0x3]
7102d39cc4  mov w2,#0x1
7102d39cc8  bl 0x7102633b90
7102d39ccc  adrp x8,0x71042f6000
7102d39cd0  add x8,x8,#0xd0
7102d39cd4  adrp x9,0x7104410000
7102d39cd8  add x9,x9,#0xad6
7102d39cdc  adrp x10,0x7104338000
7102d39ce0  add x10,x10,#0x5b5
7102d39ce4  stp x8,x9,[sp, #0x30]
7102d39ce8  adrp x8,0x7104328000
7102d39cec  add x8,x8,#0x2b1
7102d39cf0  stp x10,x8,[sp, #0x40]
7102d39cf4  adrp x9,0x71042a1000
7102d39cf8  add x9,x9,#0x43c
7102d39cfc  adrp x8,0x7104431000
7102d39d00  add x8,x8,#0x37e
7102d39d04  cmp w21,#0x5
7102d39d08  stp x9,x8,[sp, #0x50]
7102d39d0c  b.hi 0x7102d39d2c
7102d39d10  ldr x8,[x19]
7102d39d14  ldr x8,[x8]
7102d39d18  ldr x0,[x8, #0x318]
7102d39d1c  add x8,sp,#0x30
7102d39d20  ldr x1,[x8, x22, LSL #0x3]
7102d39d24  mov w2,#0x1
7102d39d28  bl 0x7102633a10
7102d39d2c  ldr x23,[x28, #0x60]
7102d39d30  ldr x8,[x23, #0x40]
7102d39d34  ldr x9,[x23]
7102d39d38  str x8,[x23, #0x48]
7102d39d3c  ldr x19,[x9, #0x8]
7102d39d40  ldp x20,x24,[x19, #0xe8]
7102d39d44  cmp x20,x24
7102d39d48  b.eq 0x7102d39e0c
7102d39d4c  and w25,w21,#0xff
7102d39d50  mov w26,#0x1
7102d39d54  b 0x7102d39d5c
7102d39d58  ldr x9,[x23]
7102d39d5c  ldr x8,[x20, #0x8]
7102d39d60  ands x10,x8,#0xffffffffff
7102d39d64  b.eq 0x7102d39e00
7102d39d68  ldr x9,[x9]
7102d39d6c  ldr x9,[x9, #0x310]
7102d39d70  ldp x11,x12,[x9, #0xd0]
7102d39d74  cmp x11,x12
7102d39d78  b.eq 0x7102d39e00
7102d39d7c  ldr w9,[x11, #0x8]
7102d39d80  cmp w9,#0x1
7102d39d84  b.hi 0x7102d39d98
7102d39d88  ldr x9,[x11]
7102d39d8c  ldr x13,[x9, #0x68]
7102d39d90  cmp x10,x13
7102d39d94  b.eq 0x7102d39da8
7102d39d98  add x11,x11,#0x10
7102d39d9c  cmp x12,x11
7102d39da0  b.ne 0x7102d39d7c
7102d39da4  b 0x7102d39e00
7102d39da8  cbz x9,0x7102d39e00
7102d39dac  ldp x10,x11,[x19, #0xe8]
7102d39db0  cmp x10,x11
7102d39db4  b.eq 0x7102d39df4
7102d39db8  ldr x12,[x10, #0x8]
7102d39dbc  eor x12,x12,x8
7102d39dc0  tst x12,#0xffffffffff
7102d39dc4  b.eq 0x7102d39dd8
7102d39dc8  add x10,x10,#0x10
7102d39dcc  cmp x11,x10
7102d39dd0  b.ne 0x7102d39db8
7102d39dd4  b 0x7102d39df4
7102d39dd8  ldrsb w8,[x10]
7102d39ddc  tbnz w8,#0x1f,0x7102d39df4
7102d39de0  cmp w25,w8
7102d39de4  b.eq 0x7102d39df4
7102d39de8  add x0,x9,#0x108
7102d39dec  strb wzr,[x9, #0x110]
7102d39df0  b 0x7102d39dfc
7102d39df4  add x0,x9,#0x108
7102d39df8  strb w26,[x9, #0x110]
7102d39dfc  bl 0x71025e9d50
7102d39e00  add x20,x20,#0x10
7102d39e04  cmp x20,x24
7102d39e08  b.ne 0x7102d39d58
7102d39e0c  cmp w21,#0x5
7102d39e10  str xzr,[x23, #0x58]
7102d39e14  b.hi 0x7102d3a490
7102d39e18  adrp x8,0x710451b000
7102d39e1c  add x8,x8,#0x298
7102d39e20  ldrsw x9,[x8, x22, LSL #0x2]
7102d39e24  add x8,x9,x8
7102d39e28  br x8
7102d39e2c  ldr x8,[x23]
7102d39e30  ldr x9,[x8]
7102d39e34  ldr x10,[x9, #0x310]
7102d39e38  ldp x9,x10,[x10, #0xd0]
7102d39e3c  cmp x9,x10
7102d39e40  b.eq 0x7102d39e78
7102d39e44  mov x11,#0x121a
7102d39e48  movk x11,#0xaa5d, LSL #16
7102d39e4c  movk x11,#0x13, LSL #32
7102d39e50  ldr w12,[x9, #0x8]
7102d39e54  cmp w12,#0x1
7102d39e58  b.hi 0x7102d39e6c
7102d39e5c  ldr x12,[x9]
7102d39e60  ldr x13,[x12, #0x68]
7102d39e64  cmp x13,x11
7102d39e68  b.eq 0x7102d39e7c
7102d39e6c  add x9,x9,#0x10
7102d39e70  cmp x10,x9
7102d39e74  b.ne 0x7102d39e50
7102d39e78  mov x12,xzr
7102d39e7c  stp x12,xzr,[x23, #0x58]
7102d39e80  ldr x9,[x8]
7102d39e84  ldr x10,[x9, #0x310]
7102d39e88  ldp x9,x10,[x10, #0xd0]
7102d39e8c  cmp x9,x10
7102d39e90  b.eq 0x7102d3a3cc
7102d39e94  mov x11,#0x9dba
7102d39e98  movk x11,#0xeff3, LSL #16
7102d39e9c  movk x11,#0x15, LSL #32
7102d39ea0  ldr w12,[x9, #0x8]
7102d39ea4  cmp w12,#0x1
7102d39ea8  b.hi 0x7102d39ebc
7102d39eac  ldr x12,[x9]
7102d39eb0  ldr x13,[x12, #0x68]
7102d39eb4  cmp x13,x11
7102d39eb8  b.eq 0x7102d3a3d0
7102d39ebc  add x9,x9,#0x10
7102d39ec0  cmp x10,x9
7102d39ec4  b.ne 0x7102d39ea0
7102d39ec8  b 0x7102d3a3cc
7102d39ecc  ldrb w9,[x8, #0x12]
7102d39ed0  cmp w9,#0x0
7102d39ed4  mov w9,#0x1
7102d39ed8  cinc w1,w9,ne
7102d39edc  str w1,[x19, #0x10]
7102d39ee0  ldr x8,[x8]
7102d39ee4  ldr x0,[x8, #0x300]
7102d39ee8  mov w2,#0xffffffff
7102d39eec  bl 0x710262b8c0
7102d39ef0  ldr x8,[x19]
7102d39ef4  ldr x8,[x8]
7102d39ef8  ldr x8,[x8, #0x330]
7102d39efc  ldr x8,[x8]
7102d39f00  ldp x21,x22,[x8, #0x50]
7102d39f04  cmp x21,x22
7102d39f08  b.eq 0x7102d39f68
7102d39f0c  ldr w19,[x19, #0x10]
7102d39f10  mov w23,#0x1
7102d39f14  ldr x20,[x21]
7102d39f18  ldr w9,[x20, #0xc]
7102d39f1c  ldrb w8,[x20, #0x18]
7102d39f20  cmp w9,w19
7102d39f24  b.ne 0x7102d39f44
7102d39f28  cbnz w8,0x7102d39f5c
7102d39f2c  ldr x8,[x20]
7102d39f30  ldr x8,[x8, #0x10]
7102d39f34  mov x0,x20
7102d39f38  blr x8
7102d39f3c  strb w23,[x20, #0x18]
7102d39f40  b 0x7102d39f5c
7102d39f44  cbz w8,0x7102d39f5c
7102d39f48  ldr x8,[x20]
7102d39f4c  strb wzr,[x20, #0x18]
7102d39f50  ldr x8,[x8, #0x18]
7102d39f54  mov x0,x20
7102d39f58  blr x8
7102d39f5c  add x21,x21,#0x8
7102d39f60  cmp x22,x21
7102d39f64  b.ne 0x7102d39f14
7102d39f68  ldr x22,[x28, #0x60]
7102d39f6c  ldr x8,[x22]
7102d39f70  ldr x9,[x8]
7102d39f74  ldr w9,[x9, #0x8]
7102d39f78  cmp w9,#0x15e
7102d39f7c  b.ne 0x7102d39f88
7102d39f80  mov w21,wzr
7102d39f84  b 0x7102d39f98
7102d39f88  ldrb w8,[x8, #0x12]
7102d39f8c  cmp w8,#0x0
7102d39f90  mov w8,#0x1
7102d39f94  cinc w21,w8,ne
7102d39f98  mov w1,#0xb0
7102d39f9c  mov w0,#0x10
7102d39fa0  bl 0x710392e290
7102d39fa4  mov x20,x0
7102d39fa8  cbnz x0,0x7102d39ff4
7102d39fac  adrp x8,0x7105332000
7102d39fb0  ldr x0,[x8, #0xf00]
7102d39fb4  cbz x0,0x7102d39ff0
7102d39fb8  mov w8,#0xb0
7102d39fbc  str wzr,[sp, #0x60]
7102d39fc0  add x1,sp,#0x60
7102d39fc4  str x8,[sp, #0x30]
7102d39fc8  ldr x8,[x0]
7102d39fcc  ldr x8,[x8, #0x30]
7102d39fd0  add x2,sp,#0x30
7102d39fd4  blr x8
7102d39fd8  tbz w0,#0x0,0x7102d39ff0
7102d39fdc  mov w1,#0xb0
7102d39fe0  mov w0,#0x10
7102d39fe4  bl 0x710392e290
7102d39fe8  mov x20,x0
7102d39fec  cbnz x0,0x7102d39ff4
7102d39ff0  mov x20,xzr
7102d39ff4  adrp x8,0x7104558000
7102d39ff8  add x8,x8,#0xe20
7102d39ffc  add x23,x20,#0x10
7102d3a000  ldp x9,x10,[x8]
7102d3a004  stp x9,x10,[x20]
7102d3a008  ldp x9,x10,[x8, #0x10]
7102d3a00c  stp x9,x10,[x20, #0x10]
7102d3a010  ldp x9,x10,[x8, #0x20]
7102d3a014  stp x9,x10,[x20, #0x20]
7102d3a018  ldp x9,x10,[x8, #0x30]
7102d3a01c  stp x9,x10,[x20, #0x30]
7102d3a020  ldp x9,x10,[x8, #0x40]
7102d3a024  stp x9,x10,[x20, #0x40]
7102d3a028  ldp x9,x10,[x8, #0x50]
7102d3a02c  stp x9,x10,[x20, #0x50]
7102d3a030  ldp x9,x10,[x8, #0x60]
7102d3a034  stp x9,x10,[x20, #0x60]
7102d3a038  ldp x9,x10,[x8, #0x70]
7102d3a03c  stp x9,x10,[x20, #0x70]
7102d3a040  ldp x9,x10,[x8, #0x80]
7102d3a044  stp x9,x10,[x20, #0x80]
7102d3a048  ldp x9,x10,[x8, #0x90]
7102d3a04c  stp x9,x10,[x20, #0x90]
7102d3a050  ldp x9,x8,[x8, #0xa0]
7102d3a054  stp x9,x8,[x20, #0xa0]
7102d3a058  ldr x8,[x22, #0x40]
7102d3a05c  str x8,[x22, #0x48]
7102d3a060  ldr x8,[x20]
7102d3a064  ands x8,x8,#0xffffffffff
7102d3a068  b.eq 0x7102d3a4f0
7102d3a06c  ldr x9,[x22]
7102d3a070  ldr x9,[x9]
7102d3a074  ldr x10,[x9, #0x310]
7102d3a078  ldp x9,x10,[x10, #0xd0]
7102d3a07c  cmp x9,x10
7102d3a080  b.eq 0x7102d3a4f0
7102d3a084  ldr w11,[x9, #0x8]
7102d3a088  cmp w11,#0x1
7102d3a08c  b.hi 0x7102d3a0a0
7102d3a090  ldr x19,[x9]
7102d3a094  ldr x11,[x19, #0x68]
7102d3a098  cmp x8,x11
7102d3a09c  b.eq 0x7102d3a49c
7102d3a0a0  add x9,x9,#0x10
7102d3a0a4  cmp x10,x9
7102d3a0a8  b.ne 0x7102d3a084
7102d3a0ac  b 0x7102d3a4f0
7102d3a0b0  ldr x8,[x23]
7102d3a0b4  ldr x9,[x8]
7102d3a0b8  ldr x10,[x9, #0x310]
7102d3a0bc  ldp x9,x10,[x10, #0xd0]
7102d3a0c0  cmp x9,x10
7102d3a0c4  b.eq 0x7102d3a0fc
7102d3a0c8  mov x11,#0x3f20
7102d3a0cc  movk x11,#0xfc00, LSL #16
7102d3a0d0  movk x11,#0x18, LSL #32
7102d3a0d4  ldr w12,[x9, #0x8]
7102d3a0d8  cmp w12,#0x1
7102d3a0dc  b.hi 0x7102d3a0f0
7102d3a0e0  ldr x12,[x9]
7102d3a0e4  ldr x13,[x12, #0x68]
7102d3a0e8  cmp x13,x11
7102d3a0ec  b.eq 0x7102d3a100
7102d3a0f0  add x9,x9,#0x10
7102d3a0f4  cmp x10,x9
7102d3a0f8  b.ne 0x7102d3a0d4
7102d3a0fc  mov x12,xzr
7102d3a100  stp x12,xzr,[x23, #0x58]
7102d3a104  ldr x9,[x8]
7102d3a108  ldr x10,[x9, #0x310]
7102d3a10c  ldp x9,x10,[x10, #0xd0]
7102d3a110  cmp x9,x10
7102d3a114  b.eq 0x7102d3a3cc
7102d3a118  mov x11,#0xd365
7102d3a11c  movk x11,#0x99f0, LSL #16
7102d3a120  movk x11,#0x1a, LSL #32
7102d3a124  ldr w12,[x9, #0x8]
7102d3a128  cmp w12,#0x1
7102d3a12c  b.hi 0x7102d3a140
7102d3a130  ldr x12,[x9]
7102d3a134  ldr x13,[x12, #0x68]
7102d3a138  cmp x13,x11
7102d3a13c  b.eq 0x7102d3a3d0
7102d3a140  add x9,x9,#0x10
7102d3a144  cmp x10,x9
7102d3a148  b.ne 0x7102d3a124
7102d3a14c  b 0x7102d3a3cc
7102d3a150  ldr x8,[x23]
7102d3a154  ldr x9,[x8]
7102d3a158  ldr x10,[x9, #0x310]
7102d3a15c  ldp x9,x10,[x10, #0xd0]
7102d3a160  cmp x9,x10
7102d3a164  b.eq 0x7102d3a19c
7102d3a168  mov x11,#0x894a
7102d3a16c  movk x11,#0xe2c4, LSL #16
7102d3a170  movk x11,#0x14, LSL #32
7102d3a174  ldr w12,[x9, #0x8]
7102d3a178  cmp w12,#0x1
7102d3a17c  b.hi 0x7102d3a190
7102d3a180  ldr x12,[x9]
7102d3a184  ldr x13,[x12, #0x68]
7102d3a188  cmp x13,x11
7102d3a18c  b.eq 0x7102d3a1a0
7102d3a190  add x9,x9,#0x10
7102d3a194  cmp x10,x9
7102d3a198  b.ne 0x7102d3a174
7102d3a19c  mov x12,xzr
7102d3a1a0  stp x12,xzr,[x23, #0x58]
7102d3a1a4  ldr x9,[x8]
7102d3a1a8  ldr x10,[x9, #0x310]
7102d3a1ac  ldp x9,x10,[x10, #0xd0]
7102d3a1b0  cmp x9,x10
7102d3a1b4  b.eq 0x7102d3a3cc
7102d3a1b8  mov x11,#0xd1ed
7102d3a1bc  movk x11,#0xd9a6, LSL #16
7102d3a1c0  movk x11,#0x16, LSL #32
7102d3a1c4  ldr w12,[x9, #0x8]
7102d3a1c8  cmp w12,#0x1
7102d3a1cc  b.hi 0x7102d3a1e0
7102d3a1d0  ldr x12,[x9]
7102d3a1d4  ldr x13,[x12, #0x68]
7102d3a1d8  cmp x13,x11
7102d3a1dc  b.eq 0x7102d3a3d0
7102d3a1e0  add x9,x9,#0x10
7102d3a1e4  cmp x10,x9
7102d3a1e8  b.ne 0x7102d3a1c4
7102d3a1ec  b 0x7102d3a3cc
7102d3a1f0  ldr x8,[x23]
7102d3a1f4  ldr x9,[x8]
7102d3a1f8  ldr x10,[x9, #0x310]
7102d3a1fc  ldp x9,x10,[x10, #0xd0]
7102d3a200  cmp x9,x10
7102d3a204  b.eq 0x7102d3a23c
7102d3a208  mov x11,#0x4c5c
7102d3a20c  movk x11,#0x4398, LSL #16
7102d3a210  movk x11,#0x12, LSL #32
7102d3a214  ldr w12,[x9, #0x8]
7102d3a218  cmp w12,#0x1
7102d3a21c  b.hi 0x7102d3a230
7102d3a220  ldr x12,[x9]
7102d3a224  ldr x13,[x12, #0x68]
7102d3a228  cmp x13,x11
7102d3a22c  b.eq 0x7102d3a240
7102d3a230  add x9,x9,#0x10
7102d3a234  cmp x10,x9
7102d3a238  b.ne 0x7102d3a214
7102d3a23c  mov x12,xzr
7102d3a240  stp x12,xzr,[x23, #0x58]
7102d3a244  ldr x9,[x8]
7102d3a248  ldr x10,[x9, #0x310]
7102d3a24c  ldp x9,x10,[x10, #0xd0]
7102d3a250  cmp x9,x10
7102d3a254  b.eq 0x7102d3a3cc
7102d3a258  mov x11,#0x262d
7102d3a25c  movk x11,#0xc920, LSL #16
7102d3a260  movk x11,#0x14, LSL #32
7102d3a264  ldr w12,[x9, #0x8]
7102d3a268  cmp w12,#0x1
7102d3a26c  b.hi 0x7102d3a280
7102d3a270  ldr x12,[x9]
7102d3a274  ldr x13,[x12, #0x68]
7102d3a278  cmp x13,x11
7102d3a27c  b.eq 0x7102d3a3d0
7102d3a280  add x9,x9,#0x10
7102d3a284  cmp x10,x9
7102d3a288  b.ne 0x7102d3a264
7102d3a28c  b 0x7102d3a3cc
7102d3a290  ldr x8,[x23]
7102d3a294  ldr x9,[x8]
7102d3a298  ldr x10,[x9, #0x310]
7102d3a29c  ldp x9,x10,[x10, #0xd0]
7102d3a2a0  cmp x9,x10
7102d3a2a4  b.eq 0x7102d3a2dc
7102d3a2a8  mov x11,#0xa84d
7102d3a2ac  movk x11,#0x2ff1, LSL #16
7102d3a2b0  movk x11,#0x18, LSL #32
7102d3a2b4  ldr w12,[x9, #0x8]
7102d3a2b8  cmp w12,#0x1
7102d3a2bc  b.hi 0x7102d3a2d0
7102d3a2c0  ldr x12,[x9]
7102d3a2c4  ldr x13,[x12, #0x68]
7102d3a2c8  cmp x13,x11
7102d3a2cc  b.eq 0x7102d3a2e0
7102d3a2d0  add x9,x9,#0x10
7102d3a2d4  cmp x10,x9
7102d3a2d8  b.ne 0x7102d3a2b4
7102d3a2dc  mov x12,xzr
7102d3a2e0  stp x12,xzr,[x23, #0x58]
7102d3a2e4  ldr x9,[x8]
7102d3a2e8  ldr x10,[x9, #0x310]
7102d3a2ec  ldp x9,x10,[x10, #0xd0]
7102d3a2f0  cmp x9,x10
7102d3a2f4  b.eq 0x7102d3a3cc
7102d3a2f8  mov x11,#0x4b93
7102d3a2fc  movk x11,#0x6663, LSL #16
7102d3a300  movk x11,#0x1a, LSL #32
7102d3a304  ldr w12,[x9, #0x8]
7102d3a308  cmp w12,#0x1
7102d3a30c  b.hi 0x7102d3a320
7102d3a310  ldr x12,[x9]
7102d3a314  ldr x13,[x12, #0x68]
7102d3a318  cmp x13,x11
7102d3a31c  b.eq 0x7102d3a3d0
7102d3a320  add x9,x9,#0x10
7102d3a324  cmp x10,x9
7102d3a328  b.ne 0x7102d3a304
7102d3a32c  b 0x7102d3a3cc
7102d3a330  ldr x8,[x23]
7102d3a334  ldr x9,[x8]
7102d3a338  ldr x10,[x9, #0x310]
7102d3a33c  ldp x9,x10,[x10, #0xd0]
7102d3a340  cmp x9,x10
7102d3a344  b.eq 0x7102d3a37c
7102d3a348  mov x11,#0xfde0
7102d3a34c  movk x11,#0x5c29, LSL #16
7102d3a350  movk x11,#0x17, LSL #32
7102d3a354  ldr w12,[x9, #0x8]
7102d3a358  cmp w12,#0x1
7102d3a35c  b.hi 0x7102d3a370
7102d3a360  ldr x12,[x9]
7102d3a364  ldr x13,[x12, #0x68]
7102d3a368  cmp x13,x11
7102d3a36c  b.eq 0x7102d3a380
7102d3a370  add x9,x9,#0x10
7102d3a374  cmp x10,x9
7102d3a378  b.ne 0x7102d3a354
7102d3a37c  mov x12,xzr
7102d3a380  stp x12,xzr,[x23, #0x58]
7102d3a384  ldr x9,[x8]
7102d3a388  ldr x10,[x9, #0x310]
7102d3a38c  ldp x9,x10,[x10, #0xd0]
7102d3a390  cmp x9,x10
7102d3a394  b.eq 0x7102d3a3cc
7102d3a398  mov x11,#0xb925
7102d3a39c  movk x11,#0xe5f5, LSL #16
7102d3a3a0  movk x11,#0x19, LSL #32
7102d3a3a4  ldr w12,[x9, #0x8]
7102d3a3a8  cmp w12,#0x1
7102d3a3ac  b.hi 0x7102d3a3c0
7102d3a3b0  ldr x12,[x9]
7102d3a3b4  ldr x13,[x12, #0x68]
7102d3a3b8  cmp x13,x11
7102d3a3bc  b.eq 0x7102d3a3d0
7102d3a3c0  add x9,x9,#0x10
7102d3a3c4  cmp x10,x9
7102d3a3c8  b.ne 0x7102d3a3a4
7102d3a3cc  mov x12,xzr
7102d3a3d0  str x12,[x23, #0x60]
7102d3a3d4  ldr x8,[x8]
7102d3a3d8  ldrb w9,[x8, #0xc8]
7102d3a3dc  cbz w9,0x7102d3b788
7102d3a3e0  ldr x8,[x8, #0x310]
7102d3a3e4  ldr x20,[x8, #0x118]
7102d3a3e8  cbz x20,0x7102d3b788
7102d3a3ec  mov x0,x20
7102d3a3f0  mov w1,wzr
7102d3a3f4  bl 0x710261f440
7102d3a3f8  ldr x8,[x23]
7102d3a3fc  ldr x8,[x8]
7102d3a400  ldrb w8,[x8, #0x18]
7102d3a404  cbz w8,0x7102d3a44c
7102d3a408  cmp w21,#0x5
7102d3a40c  b.hi 0x7102d3b788
7102d3a410  adrp x8,0x710451b000
7102d3a414  add x8,x8,#0x2b0
7102d3a418  ldrsw x9,[x8, x22, LSL #0x2]
7102d3a41c  add x8,x9,x8
7102d3a420  br x8
7102d3a424  ldr x8,[x20]
7102d3a428  ldrb w9,[x8, #0x80]
7102d3a42c  cbz w9,0x7102d3b788
7102d3a430  ldr x0,[x8, #0x30]
7102d3a434  ldr x8,[x0]
7102d3a438  ldr x8,[x8, #0x180]
7102d3a43c  mov x1,#0x1a8b
7102d3a440  movk x1,#0x569, LSL #16
7102d3a444  movk x1,#0xd, LSL #32
7102d3a448  b 0x7102d3b780
7102d3a44c  cmp w21,#0x5
7102d3a450  b.hi 0x7102d3b788
7102d3a454  adrp x8,0x710451b000
7102d3a458  add x8,x8,#0x2c8
7102d3a45c  ldrsw x9,[x8, x22, LSL #0x2]
7102d3a460  add x8,x9,x8
7102d3a464  br x8
7102d3a468  ldr x8,[x20]
7102d3a46c  ldrb w9,[x8, #0x80]
7102d3a470  cbz w9,0x7102d3b788
7102d3a474  ldr x0,[x8, #0x30]
7102d3a478  ldr x8,[x0]
7102d3a47c  ldr x8,[x8, #0x180]
7102d3a480  mov x1,#0x337c
7102d3a484  movk x1,#0x96da, LSL #16
7102d3a488  movk x1,#0x17, LSL #32
7102d3a48c  b 0x7102d3b780
7102d3a490  ldr x8,[x23]
7102d3a494  str xzr,[x23, #0x60]
7102d3a498  b 0x7102d3a3d4
7102d3a49c  cbz x19,0x7102d3a4f0
7102d3a4a0  add x0,x19,#0x108
7102d3a4a4  strb wzr,[x19, #0x110]
7102d3a4a8  bl 0x71025e9d50
7102d3a4ac  ldrb w8,[x19, #0xe0]
7102d3a4b0  cbz w8,0x7102d3a4c4
7102d3a4b4  ldr x8,[x19, #0xc8]
7102d3a4b8  cbz x8,0x7102d3a4c4
7102d3a4bc  mov w9,#0x101
7102d3a4c0  strh w9,[x8, #0x30]
7102d3a4c4  ldr x8,[x19, #0xd8]
7102d3a4c8  cbz x8,0x7102d3a4d4
7102d3a4cc  mov w9,#0x1
7102d3a4d0  strb w9,[x8, #0x21]
7102d3a4d4  ldrb w8,[x19, #0xe0]
7102d3a4d8  cbz w8,0x7102d3a4e4
7102d3a4dc  ldr x8,[x19, #0xb0]
7102d3a4e0  strb wzr,[x8, #0x10]
7102d3a4e4  ldrb w8,[x19, #0x118]
7102d3a4e8  orr w8,w8,#0x1
7102d3a4ec  strb w8,[x19, #0x118]
7102d3a4f0  ldr x8,[x23]
7102d3a4f4  add x25,x20,#0x20
7102d3a4f8  ands x8,x8,#0xffffffffff
7102d3a4fc  b.eq 0x7102d3a598
7102d3a500  ldr x9,[x22]
7102d3a504  ldr x9,[x9]
7102d3a508  ldr x10,[x9, #0x310]
7102d3a50c  ldp x9,x10,[x10, #0xd0]
7102d3a510  cmp x9,x10
7102d3a514  b.eq 0x7102d3a598
7102d3a518  ldr w11,[x9, #0x8]
7102d3a51c  cmp w11,#0x1
7102d3a520  b.hi 0x7102d3a534
7102d3a524  ldr x19,[x9]
7102d3a528  ldr x11,[x19, #0x68]
7102d3a52c  cmp x8,x11
7102d3a530  b.eq 0x7102d3a544
7102d3a534  add x9,x9,#0x10
7102d3a538  cmp x10,x9
7102d3a53c  b.ne 0x7102d3a518
7102d3a540  b 0x7102d3a598
7102d3a544  cbz x19,0x7102d3a598
7102d3a548  add x0,x19,#0x108
7102d3a54c  strb wzr,[x19, #0x110]
7102d3a550  bl 0x71025e9d50
7102d3a554  ldrb w8,[x19, #0xe0]
7102d3a558  cbz w8,0x7102d3a56c
7102d3a55c  ldr x8,[x19, #0xc8]
7102d3a560  cbz x8,0x7102d3a56c
7102d3a564  mov w9,#0x101
7102d3a568  strh w9,[x8, #0x30]
7102d3a56c  ldr x8,[x19, #0xd8]
7102d3a570  cbz x8,0x7102d3a57c
7102d3a574  mov w9,#0x1
7102d3a578  strb w9,[x8, #0x21]
7102d3a57c  ldrb w8,[x19, #0xe0]
7102d3a580  cbz w8,0x7102d3a58c
7102d3a584  ldr x8,[x19, #0xb0]
7102d3a588  strb wzr,[x8, #0x10]
7102d3a58c  ldrb w8,[x19, #0x118]
7102d3a590  orr w8,w8,#0x1
7102d3a594  strb w8,[x19, #0x118]
7102d3a598  ldr x8,[x25]
7102d3a59c  add x24,x20,#0x30
7102d3a5a0  ands x8,x8,#0xffffffffff
7102d3a5a4  b.eq 0x7102d3a640
7102d3a5a8  ldr x9,[x22]
7102d3a5ac  ldr x9,[x9]
7102d3a5b0  ldr x10,[x9, #0x310]
7102d3a5b4  ldp x9,x10,[x10, #0xd0]
7102d3a5b8  cmp x9,x10
7102d3a5bc  b.eq 0x7102d3a640
7102d3a5c0  ldr w11,[x9, #0x8]
7102d3a5c4  cmp w11,#0x1
7102d3a5c8  b.hi 0x7102d3a5dc
7102d3a5cc  ldr x19,[x9]
7102d3a5d0  ldr x11,[x19, #0x68]
7102d3a5d4  cmp x8,x11
7102d3a5d8  b.eq 0x7102d3a5ec
7102d3a5dc  add x9,x9,#0x10
7102d3a5e0  cmp x10,x9
7102d3a5e4  b.ne 0x7102d3a5c0
7102d3a5e8  b 0x7102d3a640
7102d3a5ec  cbz x19,0x7102d3a640
7102d3a5f0  add x0,x19,#0x108
7102d3a5f4  strb wzr,[x19, #0x110]
7102d3a5f8  bl 0x71025e9d50
7102d3a5fc  ldrb w8,[x19, #0xe0]
7102d3a600  cbz w8,0x7102d3a614
7102d3a604  ldr x8,[x19, #0xc8]
7102d3a608  cbz x8,0x7102d3a614
7102d3a60c  mov w9,#0x101
7102d3a610  strh w9,[x8, #0x30]
7102d3a614  ldr x8,[x19, #0xd8]
7102d3a618  cbz x8,0x7102d3a624
7102d3a61c  mov w9,#0x1
7102d3a620  strb w9,[x8, #0x21]
7102d3a624  ldrb w8,[x19, #0xe0]
7102d3a628  cbz w8,0x7102d3a634
7102d3a62c  ldr x8,[x19, #0xb0]
7102d3a630  strb wzr,[x8, #0x10]
7102d3a634  ldrb w8,[x19, #0x118]
7102d3a638  orr w8,w8,#0x1
7102d3a63c  strb w8,[x19, #0x118]
7102d3a640  ldr x8,[x24]
7102d3a644  add x26,x20,#0x40
7102d3a648  ands x8,x8,#0xffffffffff
7102d3a64c  b.eq 0x7102d3a6e8
7102d3a650  ldr x9,[x22]
7102d3a654  ldr x9,[x9]
7102d3a658  ldr x10,[x9, #0x310]
7102d3a65c  ldp x9,x10,[x10, #0xd0]
7102d3a660  cmp x9,x10
7102d3a664  b.eq 0x7102d3a6e8
7102d3a668  ldr w11,[x9, #0x8]
7102d3a66c  cmp w11,#0x1
7102d3a670  b.hi 0x7102d3a684
7102d3a674  ldr x19,[x9]
7102d3a678  ldr x11,[x19, #0x68]
7102d3a67c  cmp x8,x11
7102d3a680  b.eq 0x7102d3a694
7102d3a684  add x9,x9,#0x10
7102d3a688  cmp x10,x9
7102d3a68c  b.ne 0x7102d3a668
7102d3a690  b 0x7102d3a6e8
7102d3a694  cbz x19,0x7102d3a6e8
7102d3a698  add x0,x19,#0x108
7102d3a69c  strb wzr,[x19, #0x110]
7102d3a6a0  bl 0x71025e9d50
7102d3a6a4  ldrb w8,[x19, #0xe0]
7102d3a6a8  cbz w8,0x7102d3a6bc
7102d3a6ac  ldr x8,[x19, #0xc8]
7102d3a6b0  cbz x8,0x7102d3a6bc
7102d3a6b4  mov w9,#0x101
7102d3a6b8  strh w9,[x8, #0x30]
7102d3a6bc  ldr x8,[x19, #0xd8]
7102d3a6c0  cbz x8,0x7102d3a6cc
7102d3a6c4  mov w9,#0x1
7102d3a6c8  strb w9,[x8, #0x21]
7102d3a6cc  ldrb w8,[x19, #0xe0]
7102d3a6d0  cbz w8,0x7102d3a6dc
7102d3a6d4  ldr x8,[x19, #0xb0]
7102d3a6d8  strb wzr,[x8, #0x10]
7102d3a6dc  ldrb w8,[x19, #0x118]
7102d3a6e0  orr w8,w8,#0x1
7102d3a6e4  strb w8,[x19, #0x118]
7102d3a6e8  stp x25,x23,[sp, #0x10]
7102d3a6ec  ldr x8,[x26]
7102d3a6f0  add x25,x20,#0x50
7102d3a6f4  ands x8,x8,#0xffffffffff
7102d3a6f8  b.eq 0x7102d3a794
7102d3a6fc  ldr x9,[x22]
7102d3a700  ldr x9,[x9]
7102d3a704  ldr x10,[x9, #0x310]
7102d3a708  ldp x9,x10,[x10, #0xd0]
7102d3a70c  cmp x9,x10
7102d3a710  b.eq 0x7102d3a794
7102d3a714  ldr w11,[x9, #0x8]
7102d3a718  cmp w11,#0x1
7102d3a71c  b.hi 0x7102d3a730
7102d3a720  ldr x19,[x9]
7102d3a724  ldr x11,[x19, #0x68]
7102d3a728  cmp x8,x11
7102d3a72c  b.eq 0x7102d3a740
7102d3a730  add x9,x9,#0x10
7102d3a734  cmp x10,x9
7102d3a738  b.ne 0x7102d3a714
7102d3a73c  b 0x7102d3a794
7102d3a740  cbz x19,0x7102d3a794
7102d3a744  add x0,x19,#0x108
7102d3a748  strb wzr,[x19, #0x110]
7102d3a74c  bl 0x71025e9d50
7102d3a750  ldrb w8,[x19, #0xe0]
7102d3a754  cbz w8,0x7102d3a768
7102d3a758  ldr x8,[x19, #0xc8]
7102d3a75c  cbz x8,0x7102d3a768
7102d3a760  mov w9,#0x101
7102d3a764  strh w9,[x8, #0x30]
7102d3a768  ldr x8,[x19, #0xd8]
7102d3a76c  cbz x8,0x7102d3a778
7102d3a770  mov w9,#0x1
7102d3a774  strb w9,[x8, #0x21]
7102d3a778  ldrb w8,[x19, #0xe0]
7102d3a77c  cbz w8,0x7102d3a788
7102d3a780  ldr x8,[x19, #0xb0]
7102d3a784  strb wzr,[x8, #0x10]
7102d3a788  ldrb w8,[x19, #0x118]
7102d3a78c  orr w8,w8,#0x1
7102d3a790  strb w8,[x19, #0x118]
7102d3a794  ldr x8,[x25]
7102d3a798  str x28,[sp, #0x28]
7102d3a79c  add x28,x20,#0x60
7102d3a7a0  ands x8,x8,#0xffffffffff
7102d3a7a4  b.eq 0x7102d3a840
7102d3a7a8  ldr x9,[x22]
7102d3a7ac  ldr x9,[x9]
7102d3a7b0  ldr x10,[x9, #0x310]
7102d3a7b4  ldp x9,x10,[x10, #0xd0]
7102d3a7b8  cmp x9,x10
7102d3a7bc  b.eq 0x7102d3a840
7102d3a7c0  ldr w11,[x9, #0x8]
7102d3a7c4  cmp w11,#0x1
7102d3a7c8  b.hi 0x7102d3a7dc
7102d3a7cc  ldr x19,[x9]
7102d3a7d0  ldr x11,[x19, #0x68]
7102d3a7d4  cmp x8,x11
7102d3a7d8  b.eq 0x7102d3a7ec
7102d3a7dc  add x9,x9,#0x10
7102d3a7e0  cmp x10,x9
7102d3a7e4  b.ne 0x7102d3a7c0
7102d3a7e8  b 0x7102d3a840
7102d3a7ec  cbz x19,0x7102d3a840
7102d3a7f0  add x0,x19,#0x108
7102d3a7f4  strb wzr,[x19, #0x110]
7102d3a7f8  bl 0x71025e9d50
7102d3a7fc  ldrb w8,[x19, #0xe0]
7102d3a800  cbz w8,0x7102d3a814
7102d3a804  ldr x8,[x19, #0xc8]
7102d3a808  cbz x8,0x7102d3a814
7102d3a80c  mov w9,#0x101
7102d3a810  strh w9,[x8, #0x30]
7102d3a814  ldr x8,[x19, #0xd8]
7102d3a818  cbz x8,0x7102d3a824
7102d3a81c  mov w9,#0x1
7102d3a820  strb w9,[x8, #0x21]
7102d3a824  ldrb w8,[x19, #0xe0]
7102d3a828  cbz w8,0x7102d3a834
7102d3a82c  ldr x8,[x19, #0xb0]
7102d3a830  strb wzr,[x8, #0x10]
7102d3a834  ldrb w8,[x19, #0x118]
7102d3a838  orr w8,w8,#0x1
7102d3a83c  strb w8,[x19, #0x118]
7102d3a840  ldr x8,[x28]
7102d3a844  str w27,[sp, #0x24]
7102d3a848  add x27,x20,#0x70
7102d3a84c  ands x8,x8,#0xffffffffff
7102d3a850  b.eq 0x7102d3a8ec
7102d3a854  ldr x9,[x22]
7102d3a858  ldr x9,[x9]
7102d3a85c  ldr x10,[x9, #0x310]
7102d3a860  ldp x9,x10,[x10, #0xd0]
7102d3a864  cmp x9,x10
7102d3a868  b.eq 0x7102d3a8ec
7102d3a86c  ldr w11,[x9, #0x8]
7102d3a870  cmp w11,#0x1
7102d3a874  b.hi 0x7102d3a888
7102d3a878  ldr x19,[x9]
7102d3a87c  ldr x11,[x19, #0x68]
7102d3a880  cmp x8,x11
7102d3a884  b.eq 0x7102d3a898
7102d3a888  add x9,x9,#0x10
7102d3a88c  cmp x10,x9
7102d3a890  b.ne 0x7102d3a86c
7102d3a894  b 0x7102d3a8ec
7102d3a898  cbz x19,0x7102d3a8ec
7102d3a89c  add x0,x19,#0x108
7102d3a8a0  strb wzr,[x19, #0x110]
7102d3a8a4  bl 0x71025e9d50
7102d3a8a8  ldrb w8,[x19, #0xe0]
7102d3a8ac  cbz w8,0x7102d3a8c0
7102d3a8b0  ldr x8,[x19, #0xc8]
7102d3a8b4  cbz x8,0x7102d3a8c0
7102d3a8b8  mov w9,#0x101
7102d3a8bc  strh w9,[x8, #0x30]
7102d3a8c0  ldr x8,[x19, #0xd8]
7102d3a8c4  cbz x8,0x7102d3a8d0
7102d3a8c8  mov w9,#0x1
7102d3a8cc  strb w9,[x8, #0x21]
7102d3a8d0  ldrb w8,[x19, #0xe0]
7102d3a8d4  cbz w8,0x7102d3a8e0
7102d3a8d8  ldr x8,[x19, #0xb0]
7102d3a8dc  strb wzr,[x8, #0x10]
7102d3a8e0  ldrb w8,[x19, #0x118]
7102d3a8e4  orr w8,w8,#0x1
7102d3a8e8  strb w8,[x19, #0x118]
7102d3a8ec  ldr x8,[x27]
7102d3a8f0  add x23,x20,#0x80
7102d3a8f4  ands x8,x8,#0xffffffffff
7102d3a8f8  b.eq 0x7102d3a994
7102d3a8fc  ldr x9,[x22]
7102d3a900  ldr x9,[x9]
7102d3a904  ldr x10,[x9, #0x310]
7102d3a908  ldp x9,x10,[x10, #0xd0]
7102d3a90c  cmp x9,x10
7102d3a910  b.eq 0x7102d3a994
7102d3a914  ldr w11,[x9, #0x8]
7102d3a918  cmp w11,#0x1
7102d3a91c  b.hi 0x7102d3a930
7102d3a920  ldr x19,[x9]
7102d3a924  ldr x11,[x19, #0x68]
7102d3a928  cmp x8,x11
7102d3a92c  b.eq 0x7102d3a940
7102d3a930  add x9,x9,#0x10
7102d3a934  cmp x10,x9
7102d3a938  b.ne 0x7102d3a914
7102d3a93c  b 0x7102d3a994
7102d3a940  cbz x19,0x7102d3a994
7102d3a944  add x0,x19,#0x108
7102d3a948  strb wzr,[x19, #0x110]
7102d3a94c  bl 0x71025e9d50
7102d3a950  ldrb w8,[x19, #0xe0]
7102d3a954  cbz w8,0x7102d3a968
7102d3a958  ldr x8,[x19, #0xc8]
7102d3a95c  cbz x8,0x7102d3a968
7102d3a960  mov w9,#0x101
7102d3a964  strh w9,[x8, #0x30]
7102d3a968  ldr x8,[x19, #0xd8]
7102d3a96c  cbz x8,0x7102d3a978
7102d3a970  mov w9,#0x1
7102d3a974  strb w9,[x8, #0x21]
7102d3a978  ldrb w8,[x19, #0xe0]
7102d3a97c  cbz w8,0x7102d3a988
7102d3a980  ldr x8,[x19, #0xb0]
7102d3a984  strb wzr,[x8, #0x10]
7102d3a988  ldrb w8,[x19, #0x118]
7102d3a98c  orr w8,w8,#0x1
7102d3a990  strb w8,[x19, #0x118]
7102d3a994  ldr x8,[x23]
7102d3a998  add x14,x20,#0x90
7102d3a99c  ands x8,x8,#0xffffffffff
7102d3a9a0  b.eq 0x7102d3aa54
7102d3a9a4  ldr x9,[x22]
7102d3a9a8  ldr x9,[x9]
7102d3a9ac  ldr x10,[x9, #0x310]
7102d3a9b0  ldp x9,x10,[x10, #0xd0]
7102d3a9b4  cmp x9,x10
7102d3a9b8  b.eq 0x7102d3aa54
7102d3a9bc  ldr w11,[x9, #0x8]
7102d3a9c0  cmp w11,#0x1
7102d3a9c4  b.hi 0x7102d3a9d8
7102d3a9c8  ldr x19,[x9]
7102d3a9cc  ldr x11,[x19, #0x68]
7102d3a9d0  cmp x8,x11
7102d3a9d4  b.eq 0x7102d3a9e8
7102d3a9d8  add x9,x9,#0x10
7102d3a9dc  cmp x10,x9
7102d3a9e0  b.ne 0x7102d3a9bc
7102d3a9e4  b 0x7102d3aa54
7102d3a9e8  cbz x19,0x7102d3aa54
7102d3a9ec  add x0,x19,#0x108
7102d3a9f0  str x24,[sp, #0x8]
7102d3a9f4  mov x24,x27
7102d3a9f8  mov x27,x14
7102d3a9fc  strb wzr,[x19, #0x110]
7102d3aa00  bl 0x71025e9d50
7102d3aa04  ldrb w8,[x19, #0xe0]
7102d3aa08  cbz w8,0x7102d3aa1c
7102d3aa0c  ldr x8,[x19, #0xc8]
7102d3aa10  cbz x8,0x7102d3aa1c
7102d3aa14  mov w9,#0x101
7102d3aa18  strh w9,[x8, #0x30]
7102d3aa1c  ldr x8,[x19, #0xd8]
7102d3aa20  cbz x8,0x7102d3aa2c
7102d3aa24  mov w9,#0x1
7102d3aa28  strb w9,[x8, #0x21]
7102d3aa2c  ldrb w8,[x19, #0xe0]
7102d3aa30  mov x14,x27
7102d3aa34  cbz w8,0x7102d3aa40
7102d3aa38  ldr x8,[x19, #0xb0]
7102d3aa3c  strb wzr,[x8, #0x10]
7102d3aa40  ldrb w8,[x19, #0x118]
7102d3aa44  mov x27,x24
7102d3aa48  ldr x24,[sp, #0x8]
7102d3aa4c  orr w8,w8,#0x1
7102d3aa50  strb w8,[x19, #0x118]
7102d3aa54  ldr x8,[x14]
7102d3aa58  add x13,x20,#0xa0
7102d3aa5c  ands x8,x8,#0xffffffffff
7102d3aa60  b.eq 0x7102d3ab2c
7102d3aa64  ldr x9,[x22]
7102d3aa68  ldr x9,[x9]
7102d3aa6c  ldr x10,[x9, #0x310]
7102d3aa70  ldp x9,x10,[x10, #0xd0]
7102d3aa74  cmp x9,x10
7102d3aa78  b.eq 0x7102d3ab2c
7102d3aa7c  ldr w11,[x9, #0x8]
7102d3aa80  cmp w11,#0x1
7102d3aa84  b.hi 0x7102d3aa98
7102d3aa88  ldr x19,[x9]
7102d3aa8c  ldr x11,[x19, #0x68]
7102d3aa90  cmp x8,x11
7102d3aa94  b.eq 0x7102d3aaa8
7102d3aa98  add x9,x9,#0x10
7102d3aa9c  cmp x10,x9
7102d3aaa0  b.ne 0x7102d3aa7c
7102d3aaa4  b 0x7102d3ab2c
7102d3aaa8  cbz x19,0x7102d3ab2c
7102d3aaac  add x0,x19,#0x108
7102d3aab0  stp x26,x24,[sp]
7102d3aab4  mov x26,x25
7102d3aab8  mov x25,x28
7102d3aabc  mov x24,x27
7102d3aac0  mov x28,x14
7102d3aac4  mov x27,x13
7102d3aac8  strb wzr,[x19, #0x110]
7102d3aacc  bl 0x71025e9d50
7102d3aad0  ldrb w8,[x19, #0xe0]
7102d3aad4  cbz w8,0x7102d3aae8
7102d3aad8  ldr x8,[x19, #0xc8]
7102d3aadc  cbz x8,0x7102d3aae8
7102d3aae0  mov w9,#0x101
7102d3aae4  strh w9,[x8, #0x30]
7102d3aae8  ldr x8,[x19, #0xd8]
7102d3aaec  cbz x8,0x7102d3aaf8
7102d3aaf0  mov w9,#0x1
7102d3aaf4  strb w9,[x8, #0x21]
7102d3aaf8  ldrb w8,[x19, #0xe0]
7102d3aafc  mov x13,x27
7102d3ab00  mov x14,x28
7102d3ab04  cbz w8,0x7102d3ab10
7102d3ab08  ldr x8,[x19, #0xb0]
7102d3ab0c  strb wzr,[x8, #0x10]
7102d3ab10  ldrb w8,[x19, #0x118]
7102d3ab14  orr w8,w8,#0x1
7102d3ab18  strb w8,[x19, #0x118]
7102d3ab1c  mov x27,x24
7102d3ab20  mov x28,x25
7102d3ab24  mov x25,x26
7102d3ab28  ldp x26,x24,[sp]
7102d3ab2c  ldr x8,[x13]
7102d3ab30  ands x8,x8,#0xffffffffff
7102d3ab34  b.eq 0x7102d3ac00
7102d3ab38  ldr x9,[x22]
7102d3ab3c  ldr x9,[x9]
7102d3ab40  ldr x10,[x9, #0x310]
7102d3ab44  ldp x9,x10,[x10, #0xd0]
7102d3ab48  cmp x9,x10
7102d3ab4c  b.eq 0x7102d3ac00
7102d3ab50  ldr w11,[x9, #0x8]
7102d3ab54  cmp w11,#0x1
7102d3ab58  b.hi 0x7102d3ab6c
7102d3ab5c  ldr x19,[x9]
7102d3ab60  ldr x11,[x19, #0x68]
7102d3ab64  cmp x8,x11
7102d3ab68  b.eq 0x7102d3ab7c
7102d3ab6c  add x9,x9,#0x10
7102d3ab70  cmp x10,x9
7102d3ab74  b.ne 0x7102d3ab50
7102d3ab78  b 0x7102d3ac00
7102d3ab7c  cbz x19,0x7102d3ac00
7102d3ab80  add x0,x19,#0x108
7102d3ab84  stp x26,x24,[sp]
7102d3ab88  mov x26,x25
7102d3ab8c  mov x25,x28
7102d3ab90  mov x24,x27
7102d3ab94  mov x28,x14
7102d3ab98  mov x27,x13
7102d3ab9c  strb wzr,[x19, #0x110]
7102d3aba0  bl 0x71025e9d50
7102d3aba4  ldrb w8,[x19, #0xe0]
7102d3aba8  cbz w8,0x7102d3abbc
7102d3abac  ldr x8,[x19, #0xc8]
7102d3abb0  cbz x8,0x7102d3abbc
7102d3abb4  mov w9,#0x101
7102d3abb8  strh w9,[x8, #0x30]
7102d3abbc  ldr x8,[x19, #0xd8]
7102d3abc0  cbz x8,0x7102d3abcc
7102d3abc4  mov w9,#0x1
7102d3abc8  strb w9,[x8, #0x21]
7102d3abcc  ldrb w8,[x19, #0xe0]
7102d3abd0  mov x13,x27
7102d3abd4  mov x14,x28
7102d3abd8  cbz w8,0x7102d3abe4
7102d3abdc  ldr x8,[x19, #0xb0]
7102d3abe0  strb wzr,[x8, #0x10]
7102d3abe4  ldrb w8,[x19, #0x118]
7102d3abe8  orr w8,w8,#0x1
7102d3abec  strb w8,[x19, #0x118]
7102d3abf0  mov x27,x24
7102d3abf4  mov x28,x25
7102d3abf8  mov x25,x26
7102d3abfc  ldp x26,x24,[sp]
7102d3ac00  ldr w8,[x20, #0x8]
7102d3ac04  cmp w21,w8
7102d3ac08  b.ne 0x7102d3acd0
7102d3ac0c  ldr x8,[x20]
7102d3ac10  ands x9,x8,#0xffffffffff
7102d3ac14  b.eq 0x7102d3acd0
7102d3ac18  ldr x8,[x22]
7102d3ac1c  ldr x8,[x8]
7102d3ac20  ldr x8,[x8, #0x310]
7102d3ac24  ldp x10,x11,[x8, #0xd0]
7102d3ac28  cmp x10,x11
7102d3ac2c  b.eq 0x7102d3acd0
7102d3ac30  ldr w8,[x10, #0x8]
7102d3ac34  cmp w8,#0x1
7102d3ac38  b.hi 0x7102d3ac4c
7102d3ac3c  ldr x8,[x10]
7102d3ac40  ldr x12,[x8, #0x68]
7102d3ac44  cmp x9,x12
7102d3ac48  b.eq 0x7102d3ac5c
7102d3ac4c  add x10,x10,#0x10
7102d3ac50  cmp x11,x10
7102d3ac54  b.ne 0x7102d3ac30
7102d3ac58  b 0x7102d3acd0
7102d3ac5c  cbz x8,0x7102d3acd0
7102d3ac60  ldrb w9,[x8, #0x118]
7102d3ac64  and w9,w9,#0xfe
7102d3ac68  strb w9,[x8, #0x118]
7102d3ac6c  ldrb w9,[x8, #0xe0]
7102d3ac70  str x24,[sp, #0x8]
7102d3ac74  cbz w9,0x7102d3ac84
7102d3ac78  ldr x9,[x8, #0xc8]
7102d3ac7c  cbz x9,0x7102d3ac84
7102d3ac80  strh wzr,[x9, #0x30]
7102d3ac84  ldr x9,[x8, #0xd8]
7102d3ac88  mov x24,x27
7102d3ac8c  cbz x9,0x7102d3ac94
7102d3ac90  strb wzr,[x9, #0x21]
7102d3ac94  ldrb w9,[x8, #0xe0]
7102d3ac98  mov x27,x14
7102d3ac9c  mov x19,x13
7102d3aca0  cbz w9,0x7102d3acb0
7102d3aca4  ldr x9,[x8, #0xb0]
7102d3aca8  mov w10,#0x1
7102d3acac  strb w10,[x9, #0x10]
7102d3acb0  add x0,x8,#0x108
7102d3acb4  mov w9,#0x1
7102d3acb8  strb w9,[x8, #0x110]
7102d3acbc  bl 0x71025e9d50
7102d3acc0  mov x14,x27
7102d3acc4  mov x27,x24
7102d3acc8  ldr x24,[sp, #0x8]
7102d3accc  mov x13,x19
7102d3acd0  ldr w8,[x20, #0x18]
7102d3acd4  cmp w21,w8
7102d3acd8  b.ne 0x7102d3ada4
7102d3acdc  ldr x8,[sp, #0x18]
7102d3ace0  ldr x8,[x8]
7102d3ace4  ands x9,x8,#0xffffffffff
7102d3ace8  b.eq 0x7102d3ada4
7102d3acec  ldr x8,[x22]
7102d3acf0  ldr x8,[x8]
7102d3acf4  ldr x8,[x8, #0x310]
7102d3acf8  ldp x10,x11,[x8, #0xd0]
7102d3acfc  cmp x10,x11
7102d3ad00  b.eq 0x7102d3ada4
7102d3ad04  ldr w8,[x10, #0x8]
7102d3ad08  cmp w8,#0x1
7102d3ad0c  b.hi 0x7102d3ad20
7102d3ad10  ldr x8,[x10]
7102d3ad14  ldr x12,[x8, #0x68]
7102d3ad18  cmp x9,x12
7102d3ad1c  b.eq 0x7102d3ad30
7102d3ad20  add x10,x10,#0x10
7102d3ad24  cmp x11,x10
7102d3ad28  b.ne 0x7102d3ad04
7102d3ad2c  b 0x7102d3ada4
7102d3ad30  cbz x8,0x7102d3ada4
7102d3ad34  ldrb w9,[x8, #0x118]
7102d3ad38  and w9,w9,#0xfe
7102d3ad3c  strb w9,[x8, #0x118]
7102d3ad40  ldrb w9,[x8, #0xe0]
7102d3ad44  str x24,[sp, #0x8]
7102d3ad48  cbz w9,0x7102d3ad58
7102d3ad4c  ldr x9,[x8, #0xc8]
7102d3ad50  cbz x9,0x7102d3ad58
7102d3ad54  strh wzr,[x9, #0x30]
7102d3ad58  ldr x9,[x8, #0xd8]
7102d3ad5c  mov x24,x27
7102d3ad60  cbz x9,0x7102d3ad68
7102d3ad64  strb wzr,[x9, #0x21]
7102d3ad68  ldrb w9,[x8, #0xe0]
7102d3ad6c  mov x27,x14
7102d3ad70  mov x19,x13
7102d3ad74  cbz w9,0x7102d3ad84
7102d3ad78  ldr x9,[x8, #0xb0]
7102d3ad7c  mov w10,#0x1
7102d3ad80  strb w10,[x9, #0x10]
7102d3ad84  add x0,x8,#0x108
7102d3ad88  mov w9,#0x1
7102d3ad8c  strb w9,[x8, #0x110]
7102d3ad90  bl 0x71025e9d50
7102d3ad94  mov x14,x27
7102d3ad98  mov x27,x24
7102d3ad9c  ldr x24,[sp, #0x8]
7102d3ada0  mov x13,x19
7102d3ada4  ldr w8,[x20, #0x28]
7102d3ada8  cmp w21,w8
7102d3adac  b.ne 0x7102d3ae78
7102d3adb0  ldr x8,[sp, #0x10]
7102d3adb4  ldr x8,[x8]
7102d3adb8  ands x9,x8,#0xffffffffff
7102d3adbc  b.eq 0x7102d3ae78
7102d3adc0  ldr x8,[x22]
7102d3adc4  ldr x8,[x8]
7102d3adc8  ldr x8,[x8, #0x310]
7102d3adcc  ldp x10,x11,[x8, #0xd0]
7102d3add0  cmp x10,x11
7102d3add4  b.eq 0x7102d3ae78
7102d3add8  ldr w8,[x10, #0x8]
7102d3addc  cmp w8,#0x1
7102d3ade0  b.hi 0x7102d3adf4
7102d3ade4  ldr x8,[x10]
7102d3ade8  ldr x12,[x8, #0x68]
7102d3adec  cmp x9,x12
7102d3adf0  b.eq 0x7102d3ae04
7102d3adf4  add x10,x10,#0x10
7102d3adf8  cmp x11,x10
7102d3adfc  b.ne 0x7102d3add8
7102d3ae00  b 0x7102d3ae78
7102d3ae04  cbz x8,0x7102d3ae78
7102d3ae08  ldrb w9,[x8, #0x118]
7102d3ae0c  and w9,w9,#0xfe
7102d3ae10  strb w9,[x8, #0x118]
7102d3ae14  ldrb w9,[x8, #0xe0]
7102d3ae18  str x24,[sp, #0x8]
7102d3ae1c  cbz w9,0x7102d3ae2c
7102d3ae20  ldr x9,[x8, #0xc8]
7102d3ae24  cbz x9,0x7102d3ae2c
7102d3ae28  strh wzr,[x9, #0x30]
7102d3ae2c  ldr x9,[x8, #0xd8]
7102d3ae30  mov x24,x26
7102d3ae34  cbz x9,0x7102d3ae3c
7102d3ae38  strb wzr,[x9, #0x21]
7102d3ae3c  ldrb w9,[x8, #0xe0]
7102d3ae40  mov x26,x14
7102d3ae44  mov x19,x13
7102d3ae48  cbz w9,0x7102d3ae58
7102d3ae4c  ldr x9,[x8, #0xb0]
7102d3ae50  mov w10,#0x1
7102d3ae54  strb w10,[x9, #0x10]
7102d3ae58  add x0,x8,#0x108
7102d3ae5c  mov w9,#0x1
7102d3ae60  strb w9,[x8, #0x110]
7102d3ae64  bl 0x71025e9d50
7102d3ae68  mov x14,x26
7102d3ae6c  mov x26,x24
7102d3ae70  ldr x24,[sp, #0x8]
7102d3ae74  mov x13,x19
7102d3ae78  ldr w8,[x20, #0x38]
7102d3ae7c  cmp w21,w8
7102d3ae80  b.ne 0x7102d3af40
7102d3ae84  ldr x8,[x24]
7102d3ae88  ands x9,x8,#0xffffffffff
7102d3ae8c  b.eq 0x7102d3af40
7102d3ae90  ldr x8,[x22]
7102d3ae94  ldr x8,[x8]
7102d3ae98  ldr x8,[x8, #0x310]
7102d3ae9c  ldp x10,x11,[x8, #0xd0]
7102d3aea0  cmp x10,x11
7102d3aea4  b.eq 0x7102d3af40
7102d3aea8  ldr w8,[x10, #0x8]
7102d3aeac  cmp w8,#0x1
7102d3aeb0  b.hi 0x7102d3aec4
7102d3aeb4  ldr x8,[x10]
7102d3aeb8  ldr x12,[x8, #0x68]
7102d3aebc  cmp x9,x12
7102d3aec0  b.eq 0x7102d3aed4
7102d3aec4  add x10,x10,#0x10
7102d3aec8  cmp x11,x10
7102d3aecc  b.ne 0x7102d3aea8
7102d3aed0  b 0x7102d3af40
7102d3aed4  cbz x8,0x7102d3af40
7102d3aed8  ldrb w9,[x8, #0x118]
7102d3aedc  and w9,w9,#0xfe
7102d3aee0  strb w9,[x8, #0x118]
7102d3aee4  ldrb w9,[x8, #0xe0]
7102d3aee8  cbz w9,0x7102d3aef8
7102d3aeec  ldr x9,[x8, #0xc8]
7102d3aef0  cbz x9,0x7102d3aef8
7102d3aef4  strh wzr,[x9, #0x30]
7102d3aef8  ldr x9,[x8, #0xd8]
7102d3aefc  mov x24,x25
7102d3af00  cbz x9,0x7102d3af08
7102d3af04  strb wzr,[x9, #0x21]
7102d3af08  ldrb w9,[x8, #0xe0]
7102d3af0c  mov x25,x14
7102d3af10  mov x19,x13
7102d3af14  cbz w9,0x7102d3af24
7102d3af18  ldr x9,[x8, #0xb0]
7102d3af1c  mov w10,#0x1
7102d3af20  strb w10,[x9, #0x10]
7102d3af24  add x0,x8,#0x108
7102d3af28  mov w9,#0x1
7102d3af2c  strb w9,[x8, #0x110]
7102d3af30  bl 0x71025e9d50
7102d3af34  mov x13,x19
7102d3af38  mov x14,x25
7102d3af3c  mov x25,x24
7102d3af40  ldr w8,[x20, #0x48]
7102d3af44  cmp w21,w8
7102d3af48  b.ne 0x7102d3b000
7102d3af4c  ldr x8,[x26]
7102d3af50  ands x9,x8,#0xffffffffff
7102d3af54  b.eq 0x7102d3b000
7102d3af58  ldr x8,[x22]
7102d3af5c  ldr x8,[x8]
7102d3af60  ldr x8,[x8, #0x310]
7102d3af64  ldp x10,x11,[x8, #0xd0]
7102d3af68  cmp x10,x11
7102d3af6c  b.eq 0x7102d3b000
7102d3af70  ldr w8,[x10, #0x8]
7102d3af74  cmp w8,#0x1
7102d3af78  b.hi 0x7102d3af8c
7102d3af7c  ldr x8,[x10]
7102d3af80  ldr x12,[x8, #0x68]
7102d3af84  cmp x9,x12
7102d3af88  b.eq 0x7102d3af9c
7102d3af8c  add x10,x10,#0x10
7102d3af90  cmp x11,x10
7102d3af94  b.ne 0x7102d3af70
7102d3af98  b 0x7102d3b000
7102d3af9c  cbz x8,0x7102d3b000
7102d3afa0  ldrb w9,[x8, #0x118]
7102d3afa4  and w9,w9,#0xfe
7102d3afa8  strb w9,[x8, #0x118]
7102d3afac  ldrb w9,[x8, #0xe0]
7102d3afb0  cbz w9,0x7102d3afc0
7102d3afb4  ldr x9,[x8, #0xc8]
7102d3afb8  cbz x9,0x7102d3afc0
7102d3afbc  strh wzr,[x9, #0x30]
7102d3afc0  ldr x9,[x8, #0xd8]
7102d3afc4  cbz x9,0x7102d3afcc
7102d3afc8  strb wzr,[x9, #0x21]
7102d3afcc  ldrb w9,[x8, #0xe0]
7102d3afd0  mov x24,x14
7102d3afd4  mov x19,x13
7102d3afd8  cbz w9,0x7102d3afe8
7102d3afdc  ldr x9,[x8, #0xb0]
7102d3afe0  mov w10,#0x1
7102d3afe4  strb w10,[x9, #0x10]
7102d3afe8  add x0,x8,#0x108
7102d3afec  mov w9,#0x1
7102d3aff0  strb w9,[x8, #0x110]
7102d3aff4  bl 0x71025e9d50
7102d3aff8  mov x13,x19
7102d3affc  mov x14,x24
7102d3b000  ldr w8,[x20, #0x58]
7102d3b004  cmp w21,w8
7102d3b008  b.ne 0x7102d3b0c8
7102d3b00c  ldr x8,[x25]
7102d3b010  ands x9,x8,#0xffffffffff
7102d3b014  b.eq 0x7102d3b0c8
7102d3b018  ldr x8,[x22]
7102d3b01c  ldr x8,[x8]
7102d3b020  ldr x8,[x8, #0x310]
7102d3b024  ldp x10,x11,[x8, #0xd0]
7102d3b028  cmp x10,x11
7102d3b02c  b.eq 0x7102d3b0c8
7102d3b030  ldr w8,[x10, #0x8]
7102d3b034  cmp w8,#0x1
7102d3b038  b.hi 0x7102d3b04c
7102d3b03c  ldr x8,[x10]
7102d3b040  ldr x12,[x8, #0x68]
7102d3b044  cmp x9,x12
7102d3b048  b.eq 0x7102d3b05c
7102d3b04c  add x10,x10,#0x10
7102d3b050  cmp x11,x10
7102d3b054  b.ne 0x7102d3b030
7102d3b058  b 0x7102d3b0c8
7102d3b05c  cbz x8,0x7102d3b0c8
7102d3b060  ldrb w9,[x8, #0x118]
7102d3b064  and w9,w9,#0xfe
7102d3b068  strb w9,[x8, #0x118]
7102d3b06c  ldrb w9,[x8, #0xe0]
7102d3b070  cbz w9,0x7102d3b080
7102d3b074  ldr x9,[x8, #0xc8]
7102d3b078  cbz x9,0x7102d3b080
7102d3b07c  strh wzr,[x9, #0x30]
7102d3b080  ldr x9,[x8, #0xd8]
7102d3b084  cbz x9,0x7102d3b08c
7102d3b088  strb wzr,[x9, #0x21]
7102d3b08c  ldrb w9,[x8, #0xe0]
7102d3b090  mov x24,x23
7102d3b094  mov x23,x14
7102d3b098  mov x19,x13
7102d3b09c  cbz w9,0x7102d3b0ac
7102d3b0a0  ldr x9,[x8, #0xb0]
7102d3b0a4  mov w10,#0x1
7102d3b0a8  strb w10,[x9, #0x10]
7102d3b0ac  add x0,x8,#0x108
7102d3b0b0  mov w9,#0x1
7102d3b0b4  strb w9,[x8, #0x110]
7102d3b0b8  bl 0x71025e9d50
7102d3b0bc  mov x13,x19
7102d3b0c0  mov x14,x23
7102d3b0c4  mov x23,x24
7102d3b0c8  ldr w8,[x20, #0x68]
7102d3b0cc  cmp w21,w8
7102d3b0d0  b.ne 0x7102d3b190
7102d3b0d4  ldr x8,[x28]
7102d3b0d8  ands x9,x8,#0xffffffffff
7102d3b0dc  b.eq 0x7102d3b190
7102d3b0e0  ldr x8,[x22]
7102d3b0e4  ldr x8,[x8]
7102d3b0e8  ldr x8,[x8, #0x310]
7102d3b0ec  ldp x10,x11,[x8, #0xd0]
7102d3b0f0  cmp x10,x11
7102d3b0f4  b.eq 0x7102d3b190
7102d3b0f8  ldr w8,[x10, #0x8]
7102d3b0fc  cmp w8,#0x1
7102d3b100  b.hi 0x7102d3b114
7102d3b104  ldr x8,[x10]
7102d3b108  ldr x12,[x8, #0x68]
7102d3b10c  cmp x9,x12
7102d3b110  b.eq 0x7102d3b124
7102d3b114  add x10,x10,#0x10
7102d3b118  cmp x11,x10
7102d3b11c  b.ne 0x7102d3b0f8
7102d3b120  b 0x7102d3b190
7102d3b124  cbz x8,0x7102d3b190
7102d3b128  ldrb w9,[x8, #0x118]
7102d3b12c  and w9,w9,#0xfe
7102d3b130  strb w9,[x8, #0x118]
7102d3b134  ldrb w9,[x8, #0xe0]
7102d3b138  cbz w9,0x7102d3b148
7102d3b13c  ldr x9,[x8, #0xc8]
7102d3b140  cbz x9,0x7102d3b148
7102d3b144  strh wzr,[x9, #0x30]
7102d3b148  ldr x9,[x8, #0xd8]
7102d3b14c  cbz x9,0x7102d3b154
7102d3b150  strb wzr,[x9, #0x21]
7102d3b154  ldrb w9,[x8, #0xe0]
7102d3b158  mov x24,x23
7102d3b15c  mov x23,x14
7102d3b160  mov x19,x13
7102d3b164  cbz w9,0x7102d3b174
7102d3b168  ldr x9,[x8, #0xb0]
7102d3b16c  mov w10,#0x1
7102d3b170  strb w10,[x9, #0x10]
7102d3b174  add x0,x8,#0x108
7102d3b178  mov w9,#0x1
7102d3b17c  strb w9,[x8, #0x110]
7102d3b180  bl 0x71025e9d50
7102d3b184  mov x13,x19
7102d3b188  mov x14,x23
7102d3b18c  mov x23,x24
7102d3b190  ldr w8,[x20, #0x78]
7102d3b194  ldr x28,[sp, #0x28]
7102d3b198  cmp w21,w8
7102d3b19c  b.ne 0x7102d3b25c
7102d3b1a0  ldr x8,[x27]
7102d3b1a4  ands x9,x8,#0xffffffffff
7102d3b1a8  b.eq 0x7102d3b25c
7102d3b1ac  ldr x8,[x22]
7102d3b1b0  ldr x8,[x8]
7102d3b1b4  ldr x8,[x8, #0x310]
7102d3b1b8  ldp x10,x11,[x8, #0xd0]
7102d3b1bc  cmp x10,x11
7102d3b1c0  b.eq 0x7102d3b25c
7102d3b1c4  ldr w8,[x10, #0x8]
7102d3b1c8  cmp w8,#0x1
7102d3b1cc  b.hi 0x7102d3b1e0
7102d3b1d0  ldr x8,[x10]
7102d3b1d4  ldr x12,[x8, #0x68]
7102d3b1d8  cmp x9,x12
7102d3b1dc  b.eq 0x7102d3b1f0
7102d3b1e0  add x10,x10,#0x10
7102d3b1e4  cmp x11,x10
7102d3b1e8  b.ne 0x7102d3b1c4
7102d3b1ec  b 0x7102d3b25c
7102d3b1f0  cbz x8,0x7102d3b25c
7102d3b1f4  ldrb w9,[x8, #0x118]
7102d3b1f8  and w9,w9,#0xfe
7102d3b1fc  strb w9,[x8, #0x118]
7102d3b200  ldrb w9,[x8, #0xe0]
7102d3b204  cbz w9,0x7102d3b214
7102d3b208  ldr x9,[x8, #0xc8]
7102d3b20c  cbz x9,0x7102d3b214
7102d3b210  strh wzr,[x9, #0x30]
7102d3b214  ldr x9,[x8, #0xd8]
7102d3b218  cbz x9,0x7102d3b220
7102d3b21c  strb wzr,[x9, #0x21]
7102d3b220  ldrb w9,[x8, #0xe0]
7102d3b224  mov x24,x23
7102d3b228  mov x23,x14
7102d3b22c  mov x19,x13
7102d3b230  cbz w9,0x7102d3b240
7102d3b234  ldr x9,[x8, #0xb0]
7102d3b238  mov w10,#0x1
7102d3b23c  strb w10,[x9, #0x10]
7102d3b240  add x0,x8,#0x108
7102d3b244  mov w9,#0x1
7102d3b248  strb w9,[x8, #0x110]
7102d3b24c  bl 0x71025e9d50
7102d3b250  mov x13,x19
7102d3b254  mov x14,x23
7102d3b258  mov x23,x24
7102d3b25c  ldr w8,[x20, #0x88]
7102d3b260  ldr w27,[sp, #0x24]
7102d3b264  cmp w21,w8
7102d3b268  b.ne 0x7102d3b320
7102d3b26c  ldr x8,[x23]
7102d3b270  ands x9,x8,#0xffffffffff
7102d3b274  b.eq 0x7102d3b320
7102d3b278  ldr x8,[x22]
7102d3b27c  ldr x8,[x8]
7102d3b280  ldr x8,[x8, #0x310]
7102d3b284  ldp x10,x11,[x8, #0xd0]
7102d3b288  cmp x10,x11
7102d3b28c  b.eq 0x7102d3b320
7102d3b290  ldr w8,[x10, #0x8]
7102d3b294  cmp w8,#0x1
7102d3b298  b.hi 0x7102d3b2ac
7102d3b29c  ldr x8,[x10]
7102d3b2a0  ldr x12,[x8, #0x68]
7102d3b2a4  cmp x9,x12
7102d3b2a8  b.eq 0x7102d3b2bc
7102d3b2ac  add x10,x10,#0x10
7102d3b2b0  cmp x11,x10
7102d3b2b4  b.ne 0x7102d3b290
7102d3b2b8  b 0x7102d3b320
7102d3b2bc  cbz x8,0x7102d3b320
7102d3b2c0  ldrb w9,[x8, #0x118]
7102d3b2c4  and w9,w9,#0xfe
7102d3b2c8  strb w9,[x8, #0x118]
7102d3b2cc  ldrb w9,[x8, #0xe0]
7102d3b2d0  cbz w9,0x7102d3b2e0
7102d3b2d4  ldr x9,[x8, #0xc8]
7102d3b2d8  cbz x9,0x7102d3b2e0
7102d3b2dc  strh wzr,[x9, #0x30]
7102d3b2e0  ldr x9,[x8, #0xd8]
7102d3b2e4  cbz x9,0x7102d3b2ec
7102d3b2e8  strb wzr,[x9, #0x21]
7102d3b2ec  ldrb w9,[x8, #0xe0]
7102d3b2f0  mov x23,x14
7102d3b2f4  mov x19,x13
7102d3b2f8  cbz w9,0x7102d3b308
7102d3b2fc  ldr x9,[x8, #0xb0]
7102d3b300  mov w10,#0x1
7102d3b304  strb w10,[x9, #0x10]
7102d3b308  add x0,x8,#0x108
7102d3b30c  mov w9,#0x1
7102d3b310  strb w9,[x8, #0x110]
7102d3b314  bl 0x71025e9d50
7102d3b318  mov x13,x19
7102d3b31c  mov x14,x23
7102d3b320  ldr w8,[x20, #0x98]
7102d3b324  cmp w21,w8
7102d3b328  b.ne 0x7102d3b3d8
7102d3b32c  ldr x8,[x14]
7102d3b330  ands x9,x8,#0xffffffffff
7102d3b334  b.eq 0x7102d3b3d8
7102d3b338  ldr x8,[x22]
7102d3b33c  ldr x8,[x8]
7102d3b340  ldr x8,[x8, #0x310]
7102d3b344  ldp x10,x11,[x8, #0xd0]
7102d3b348  cmp x10,x11
7102d3b34c  b.eq 0x7102d3b3d8
7102d3b350  ldr w8,[x10, #0x8]
7102d3b354  cmp w8,#0x1
7102d3b358  b.hi 0x7102d3b36c
7102d3b35c  ldr x8,[x10]
7102d3b360  ldr x12,[x8, #0x68]
7102d3b364  cmp x9,x12
7102d3b368  b.eq 0x7102d3b37c
7102d3b36c  add x10,x10,#0x10
7102d3b370  cmp x11,x10
7102d3b374  b.ne 0x7102d3b350
7102d3b378  b 0x7102d3b3d8
7102d3b37c  cbz x8,0x7102d3b3d8
7102d3b380  ldrb w9,[x8, #0x118]
7102d3b384  and w9,w9,#0xfe
7102d3b388  strb w9,[x8, #0x118]
7102d3b38c  ldrb w9,[x8, #0xe0]
7102d3b390  cbz w9,0x7102d3b3a0
7102d3b394  ldr x9,[x8, #0xc8]
7102d3b398  cbz x9,0x7102d3b3a0
7102d3b39c  strh wzr,[x9, #0x30]
7102d3b3a0  ldr x9,[x8, #0xd8]
7102d3b3a4  cbz x9,0x7102d3b3ac
7102d3b3a8  strb wzr,[x9, #0x21]
7102d3b3ac  ldrb w9,[x8, #0xe0]
7102d3b3b0  mov x19,x13
7102d3b3b4  cbz w9,0x7102d3b3c4
7102d3b3b8  ldr x9,[x8, #0xb0]
7102d3b3bc  mov w10,#0x1
7102d3b3c0  strb w10,[x9, #0x10]
7102d3b3c4  add x0,x8,#0x108
7102d3b3c8  mov w9,#0x1
7102d3b3cc  strb w9,[x8, #0x110]
7102d3b3d0  bl 0x71025e9d50
7102d3b3d4  mov x13,x19
7102d3b3d8  ldr w8,[x20, #0xa8]
7102d3b3dc  cmp w21,w8
7102d3b3e0  b.ne 0x7102d3b488
7102d3b3e4  ldr x8,[x13]
7102d3b3e8  ands x9,x8,#0xffffffffff
7102d3b3ec  b.eq 0x7102d3b488
7102d3b3f0  ldr x8,[x22]
7102d3b3f4  ldr x8,[x8]
7102d3b3f8  ldr x8,[x8, #0x310]
7102d3b3fc  ldp x10,x11,[x8, #0xd0]
7102d3b400  cmp x10,x11
7102d3b404  b.eq 0x7102d3b488
7102d3b408  ldr w8,[x10, #0x8]
7102d3b40c  cmp w8,#0x1
7102d3b410  b.hi 0x7102d3b424
7102d3b414  ldr x8,[x10]
7102d3b418  ldr x12,[x8, #0x68]
7102d3b41c  cmp x9,x12
7102d3b420  b.eq 0x7102d3b434
7102d3b424  add x10,x10,#0x10
7102d3b428  cmp x11,x10
7102d3b42c  b.ne 0x7102d3b408
7102d3b430  b 0x7102d3b488
7102d3b434  cbz x8,0x7102d3b488
7102d3b438  ldrb w9,[x8, #0x118]
7102d3b43c  and w9,w9,#0xfe
7102d3b440  strb w9,[x8, #0x118]
7102d3b444  ldrb w9,[x8, #0xe0]
7102d3b448  cbz w9,0x7102d3b458
7102d3b44c  ldr x9,[x8, #0xc8]
7102d3b450  cbz x9,0x7102d3b458
7102d3b454  strh wzr,[x9, #0x30]
7102d3b458  ldr x9,[x8, #0xd8]
7102d3b45c  cbz x9,0x7102d3b464
7102d3b460  strb wzr,[x9, #0x21]
7102d3b464  ldrb w9,[x8, #0xe0]
7102d3b468  cbz w9,0x7102d3b478
7102d3b46c  ldr x9,[x8, #0xb0]
7102d3b470  mov w10,#0x1
7102d3b474  strb w10,[x9, #0x10]
7102d3b478  add x0,x8,#0x108
7102d3b47c  mov w9,#0x1
7102d3b480  strb w9,[x8, #0x110]
7102d3b484  bl 0x71025e9d50
7102d3b488  stp xzr,xzr,[x22, #0x58]
7102d3b48c  tbnz w21,#0x1,0x7102d3b4a0
7102d3b490  mov x9,#0x2a50
7102d3b494  movk x9,#0xaddd, LSL #16
7102d3b498  movk x9,#0x15, LSL #32
7102d3b49c  b 0x7102d3b4b8
7102d3b4a0  and w8,w21,#0x3
7102d3b4a4  cmp w8,#0x2
7102d3b4a8  b.ne 0x7102d3b504
7102d3b4ac  mov x9,#0x4202
7102d3b4b0  movk x9,#0xdad5, LSL #16
7102d3b4b4  movk x9,#0x14, LSL #32
7102d3b4b8  ldr x8,[x22]
7102d3b4bc  ldr x10,[x8]
7102d3b4c0  ldr x11,[x10, #0x310]
7102d3b4c4  ldp x10,x11,[x11, #0xd0]
7102d3b4c8  cmp x10,x11
7102d3b4cc  b.eq 0x7102d3b4f8
7102d3b4d0  ldr w12,[x10, #0x8]
7102d3b4d4  cmp w12,#0x1
7102d3b4d8  b.hi 0x7102d3b4ec
7102d3b4dc  ldr x12,[x10]
7102d3b4e0  ldr x13,[x12, #0x68]
7102d3b4e4  cmp x9,x13
7102d3b4e8  b.eq 0x7102d3b4fc
7102d3b4ec  add x10,x10,#0x10
7102d3b4f0  cmp x11,x10
7102d3b4f4  b.ne 0x7102d3b4d0
7102d3b4f8  mov x12,xzr
7102d3b4fc  str x12,[x22, #0x60]
7102d3b500  b 0x7102d3b508
7102d3b504  ldr x8,[x22]
7102d3b508  ldr x8,[x8]
7102d3b50c  ldrb w9,[x8, #0xc8]
7102d3b510  cbz w9,0x7102d3b5c4
7102d3b514  ldr x8,[x8, #0x310]
7102d3b518  ldr x21,[x8, #0x118]
7102d3b51c  cbz x21,0x7102d3b5c4
7102d3b520  mov x0,x21
7102d3b524  mov w1,wzr
7102d3b528  bl 0x710261f440
7102d3b52c  ldr x8,[x22]
7102d3b530  ldrb w10,[x8, #0x12]
7102d3b534  ldr x8,[x21]
7102d3b538  ldrb w9,[x8, #0x80]
7102d3b53c  cbz w10,0x7102d3b560
7102d3b540  cbz w9,0x7102d3b584
7102d3b544  ldr x0,[x8, #0x30]
7102d3b548  ldr x8,[x0]
7102d3b54c  ldr x8,[x8, #0x180]
7102d3b550  mov x1,#0x1bbe
7102d3b554  movk x1,#0x7, LSL #16
7102d3b558  movk x1,#0x8, LSL #32
7102d3b55c  b 0x7102d3b57c
7102d3b560  cbz w9,0x7102d3b584
7102d3b564  ldr x0,[x8, #0x30]
7102d3b568  ldr x8,[x0]
7102d3b56c  ldr x8,[x8, #0x180]
7102d3b570  mov x1,#0xc714
7102d3b574  movk x1,#0x6f6f, LSL #16
7102d3b578  movk x1,#0x9, LSL #32
7102d3b57c  mov w2,#0x1
7102d3b580  blr x8
7102d3b584  ldr x8,[x22]
7102d3b588  ldr x8,[x8]
7102d3b58c  ldr w8,[x8, #0x8]
7102d3b590  cmp w8,#0x15e
7102d3b594  b.ne 0x7102d3b5c4
7102d3b598  ldr x8,[x21]
7102d3b59c  ldrb w9,[x8, #0x80]
7102d3b5a0  cbz w9,0x7102d3b5c4
7102d3b5a4  ldr x0,[x8, #0x30]
7102d3b5a8  ldr x8,[x0]
7102d3b5ac  ldr x8,[x8, #0x180]
7102d3b5b0  mov x1,#0x2ce7
7102d3b5b4  movk x1,#0x3407, LSL #16
7102d3b5b8  movk x1,#0xe, LSL #32
7102d3b5bc  mov w2,#0x1
7102d3b5c0  blr x8
7102d3b5c4  cbz x20,0x7102d3c300
7102d3b5c8  mov x0,x20
7102d3b5cc  bl 0x710392eb40
7102d3b5d0  cbnz w27,0x7102d3c304
7102d3b5d4  ldp x29,x30,[sp, #0xd0]
7102d3b5d8  ldp x20,x19,[sp, #0xc0]
7102d3b5dc  ldp x22,x21,[sp, #0xb0]
7102d3b5e0  ldp x24,x23,[sp, #0xa0]
7102d3b5e4  ldp x26,x25,[sp, #0x90]
7102d3b5e8  ldp x28,x27,[sp, #0x80]
7102d3b5ec  add sp,sp,#0xe0
7102d3b5f0  ret
7102d3b5f4  ldr x8,[x20]
7102d3b5f8  ldrb w9,[x8, #0x80]
7102d3b5fc  cbz w9,0x7102d3b788
7102d3b600  ldr x0,[x8, #0x30]
7102d3b604  ldr x8,[x0]
7102d3b608  ldr x8,[x8, #0x180]
7102d3b60c  mov x1,#0xdf09
7102d3b610  movk x1,#0x4f0, LSL #16
7102d3b614  movk x1,#0x12, LSL #32
7102d3b618  b 0x7102d3b780
7102d3b61c  ldr x8,[x20]
7102d3b620  ldrb w9,[x8, #0x80]
7102d3b624  cbz w9,0x7102d3b788
7102d3b628  ldr x0,[x8, #0x30]
7102d3b62c  ldr x8,[x0]
7102d3b630  ldr x8,[x8, #0x180]
7102d3b634  mov x1,#0x8bd3
7102d3b638  movk x1,#0xf7b6, LSL #16
7102d3b63c  movk x1,#0xe, LSL #32
7102d3b640  b 0x7102d3b780
7102d3b644  ldr x8,[x20]
7102d3b648  ldrb w9,[x8, #0x80]
7102d3b64c  cbz w9,0x7102d3b788
7102d3b650  ldr x0,[x8, #0x30]
7102d3b654  ldr x8,[x0]
7102d3b658  ldr x8,[x8, #0x180]
7102d3b65c  mov x1,#0xf728
7102d3b660  movk x1,#0x61e2, LSL #16
7102d3b664  movk x1,#0xc, LSL #32
7102d3b668  b 0x7102d3b780
7102d3b66c  ldr x8,[x20]
7102d3b670  ldrb w9,[x8, #0x80]
7102d3b674  cbz w9,0x7102d3b788
7102d3b678  ldr x0,[x8, #0x30]
7102d3b67c  ldr x8,[x0]
7102d3b680  ldr x8,[x8, #0x180]
7102d3b684  mov x1,#0xa9ff
7102d3b688  movk x1,#0xe606, LSL #16
7102d3b68c  movk x1,#0x12, LSL #32
7102d3b690  b 0x7102d3b780
7102d3b694  ldr x8,[x20]
7102d3b698  ldrb w9,[x8, #0x80]
7102d3b69c  cbz w9,0x7102d3b788
7102d3b6a0  ldr x0,[x8, #0x30]
7102d3b6a4  ldr x8,[x0]
7102d3b6a8  ldr x8,[x8, #0x180]
7102d3b6ac  mov x1,#0xb6a6
7102d3b6b0  movk x1,#0x15f5, LSL #16
7102d3b6b4  movk x1,#0x11, LSL #32
7102d3b6b8  b 0x7102d3b780
7102d3b6bc  ldr x8,[x20]
7102d3b6c0  ldrb w9,[x8, #0x80]
7102d3b6c4  cbz w9,0x7102d3b788
7102d3b6c8  ldr x0,[x8, #0x30]
7102d3b6cc  ldr x8,[x0]
7102d3b6d0  ldr x8,[x8, #0x180]
7102d3b6d4  mov x1,#0x829
7102d3b6d8  movk x1,#0x10c2, LSL #16
7102d3b6dc  movk x1,#0x1c, LSL #32
7102d3b6e0  b 0x7102d3b780
7102d3b6e4  ldr x8,[x20]
7102d3b6e8  ldrb w9,[x8, #0x80]
7102d3b6ec  cbz w9,0x7102d3b788
7102d3b6f0  ldr x0,[x8, #0x30]
7102d3b6f4  ldr x8,[x0]
7102d3b6f8  ldr x8,[x8, #0x180]
7102d3b6fc  mov x1,#0xe45b
7102d3b700  movk x1,#0x2312, LSL #16
7102d3b704  movk x1,#0x1c, LSL #32
7102d3b708  b 0x7102d3b780
7102d3b70c  ldr x8,[x20]
7102d3b710  ldrb w9,[x8, #0x80]
7102d3b714  cbz w9,0x7102d3b788
7102d3b718  ldr x0,[x8, #0x30]
7102d3b71c  ldr x8,[x0]
7102d3b720  ldr x8,[x8, #0x180]
7102d3b724  mov x1,#0xecfd
7102d3b728  movk x1,#0xcd2b, LSL #16
7102d3b72c  movk x1,#0x18, LSL #32
7102d3b730  b 0x7102d3b780
7102d3b734  ldr x8,[x20]
7102d3b738  ldrb w9,[x8, #0x80]
7102d3b73c  cbz w9,0x7102d3b788
7102d3b740  ldr x0,[x8, #0x30]
7102d3b744  ldr x8,[x0]
7102d3b748  ldr x8,[x8, #0x180]
7102d3b74c  mov x1,#0x1568
7102d3b750  movk x1,#0x6e64, LSL #16
7102d3b754  movk x1,#0x16, LSL #32
7102d3b758  b 0x7102d3b780
7102d3b75c  ldr x8,[x20]
7102d3b760  ldrb w9,[x8, #0x80]
7102d3b764  cbz w9,0x7102d3b788
7102d3b768  ldr x0,[x8, #0x30]
7102d3b76c  ldr x8,[x0]
7102d3b770  ldr x8,[x8, #0x180]
7102d3b774  mov x1,#0xf794
7102d3b778  movk x1,#0x3118, LSL #16
7102d3b77c  movk x1,#0x1b, LSL #32
7102d3b780  mov w2,#0x1
7102d3b784  blr x8
7102d3b788  ldr x20,[x28, #0x40]
7102d3b78c  mov x0,x20
7102d3b790  bl 0x7102d36460
7102d3b794  ldr x8,[x20]
7102d3b798  ldr x9,[x8]
7102d3b79c  ldrb w9,[x9, #0x18]
7102d3b7a0  cbz w9,0x7102d3c300
7102d3b7a4  cmp w21,#0x5
7102d3b7a8  str x28,[sp, #0x28]
7102d3b7ac  str w27,[sp, #0x24]
7102d3b7b0  b.hi 0x7102d3b7c8
7102d3b7b4  adrp x9,0x710451b000
7102d3b7b8  add x9,x9,#0x2e0
7102d3b7bc  ldrsw x10,[x9, x22, LSL #0x2]
7102d3b7c0  add x9,x10,x9
7102d3b7c4  br x9
7102d3b7c8  ldr x19,[x8, #0x8]
7102d3b7cc  stp xzr,xzr,[sp, #0x40]
7102d3b7d0  str xzr,[sp, #0x38]
7102d3b7d4  ldr x8,[x19, #0x250]
7102d3b7d8  ldr x9,[x19, #0x248]
7102d3b7dc  add x23,sp,#0x30
7102d3b7e0  subs x22,x8,x9
7102d3b7e4  b.eq 0x7102d3bd08
7102d3b7e8  orr x24,xzr,#-0x3333333333333334
7102d3b7ec  asr x8,x22,#0x2
7102d3b7f0  movk x24,#0xcccd
7102d3b7f4  mul x25,x8,x24
7102d3b7f8  orr x8,xzr,#-0x3333333333333334
7102d3b7fc  movk x8,#0xccc, LSL #48
7102d3b800  cmp x25,x8
7102d3b804  b.hi 0x7102d3c328
7102d3b808  mov w0,#0x10
7102d3b80c  mov x1,x22
7102d3b810  bl 0x710392e290
7102d3b814  mov x21,x0
7102d3b818  cbnz x0,0x7102d3b860
7102d3b81c  adrp x8,0x7105332000
7102d3b820  ldr x0,[x8, #0xf00]
7102d3b824  cbz x0,0x7102d3b85c
7102d3b828  stur wzr,[x29, #-0x60]
7102d3b82c  str x22,[sp, #0x60]
7102d3b830  ldr x8,[x0]
7102d3b834  ldr x8,[x8, #0x30]
7102d3b838  sub x1,x29,#0x60
7102d3b83c  add x2,sp,#0x60
7102d3b840  blr x8
7102d3b844  tbz w0,#0x0,0x7102d3b85c
7102d3b848  mov w0,#0x10
7102d3b84c  mov x1,x22
7102d3b850  bl 0x710392e290
7102d3b854  mov x21,x0
7102d3b858  cbnz x0,0x7102d3b860
7102d3b85c  mov x21,xzr
7102d3b860  mov w8,#0x14
7102d3b864  madd x8,x25,x8,x21
7102d3b868  mov x28,x21
7102d3b86c  stp x21,x21,[sp, #0x38]
7102d3b870  str x8,[sp, #0x48]
7102d3b874  ldr x1,[x19, #0x248]
7102d3b878  ldr x8,[x19, #0x250]
7102d3b87c  sub x2,x8,x1
7102d3b880  cmp x2,#0x1
7102d3b884  b.lt 0x7102d3bd10
7102d3b888  umulh x8,x2,x24
7102d3b88c  mov x0,x21
7102d3b890  lsr x22,x8,#0x4
7102d3b894  bl 0x71039c00e0
7102d3b898  mov w8,#0x14
7102d3b89c  madd x21,x22,x8,x21
7102d3b8a0  str x21,[sp, #0x40]
7102d3b8a4  b 0x7102d3bd10
7102d3b8a8  ldr x19,[x8, #0x8]
7102d3b8ac  stp xzr,xzr,[sp, #0x40]
7102d3b8b0  str xzr,[sp, #0x38]
7102d3b8b4  ldr x8,[x19, #0x2f0]
7102d3b8b8  ldr x9,[x19, #0x2e8]
7102d3b8bc  add x23,sp,#0x30
7102d3b8c0  subs x22,x8,x9
7102d3b8c4  b.eq 0x7102d3bd1c
7102d3b8c8  orr x24,xzr,#-0x3333333333333334
7102d3b8cc  asr x8,x22,#0x2
7102d3b8d0  movk x24,#0xcccd
7102d3b8d4  mul x25,x8,x24
7102d3b8d8  orr x8,xzr,#-0x3333333333333334
7102d3b8dc  movk x8,#0xccc, LSL #48
7102d3b8e0  cmp x25,x8
7102d3b8e4  b.hi 0x7102d3c328
7102d3b8e8  mov w0,#0x10
7102d3b8ec  mov x1,x22
7102d3b8f0  bl 0x710392e290
7102d3b8f4  mov x21,x0
7102d3b8f8  cbnz x0,0x7102d3b940
7102d3b8fc  adrp x8,0x7105332000
7102d3b900  ldr x0,[x8, #0xf00]
7102d3b904  cbz x0,0x7102d3b93c
7102d3b908  stur wzr,[x29, #-0x60]
7102d3b90c  str x22,[sp, #0x60]
7102d3b910  ldr x8,[x0]
7102d3b914  ldr x8,[x8, #0x30]
7102d3b918  sub x1,x29,#0x60
7102d3b91c  add x2,sp,#0x60
7102d3b920  blr x8
7102d3b924  tbz w0,#0x0,0x7102d3b93c
7102d3b928  mov w0,#0x10
7102d3b92c  mov x1,x22
7102d3b930  bl 0x710392e290
7102d3b934  mov x21,x0
7102d3b938  cbnz x0,0x7102d3b940
7102d3b93c  mov x21,xzr
7102d3b940  mov w8,#0x14
7102d3b944  madd x8,x25,x8,x21
7102d3b948  mov x28,x21
7102d3b94c  stp x21,x21,[sp, #0x38]
7102d3b950  str x8,[sp, #0x48]
7102d3b954  ldr x1,[x19, #0x2e8]
7102d3b958  ldr x8,[x19, #0x2f0]
7102d3b95c  sub x2,x8,x1
7102d3b960  cmp x2,#0x1
7102d3b964  b.lt 0x7102d3bd24
7102d3b968  umulh x8,x2,x24
7102d3b96c  mov x0,x21
7102d3b970  lsr x22,x8,#0x4
7102d3b974  bl 0x71039c00e0
7102d3b978  mov w8,#0x14
7102d3b97c  madd x21,x22,x8,x21
7102d3b980  str x21,[sp, #0x40]
7102d3b984  b 0x7102d3bd24
7102d3b988  ldr x19,[x8, #0x8]
7102d3b98c  stp xzr,xzr,[sp, #0x40]
7102d3b990  str xzr,[sp, #0x38]
7102d3b994  ldr x8,[x19, #0x2a0]
7102d3b998  ldr x9,[x19, #0x298]
7102d3b99c  add x23,sp,#0x30
7102d3b9a0  subs x22,x8,x9
7102d3b9a4  b.eq 0x7102d3bd30
7102d3b9a8  orr x24,xzr,#-0x3333333333333334
7102d3b9ac  asr x8,x22,#0x2
7102d3b9b0  movk x24,#0xcccd
7102d3b9b4  mul x25,x8,x24
7102d3b9b8  orr x8,xzr,#-0x3333333333333334
7102d3b9bc  movk x8,#0xccc, LSL #48
7102d3b9c0  cmp x25,x8
7102d3b9c4  b.hi 0x7102d3c328
7102d3b9c8  mov w0,#0x10
7102d3b9cc  mov x1,x22
7102d3b9d0  bl 0x710392e290
7102d3b9d4  mov x21,x0
7102d3b9d8  cbnz x0,0x7102d3ba20
7102d3b9dc  adrp x8,0x7105332000
7102d3b9e0  ldr x0,[x8, #0xf00]
7102d3b9e4  cbz x0,0x7102d3ba1c
7102d3b9e8  stur wzr,[x29, #-0x60]
7102d3b9ec  str x22,[sp, #0x60]
7102d3b9f0  ldr x8,[x0]
7102d3b9f4  ldr x8,[x8, #0x30]
7102d3b9f8  sub x1,x29,#0x60
7102d3b9fc  add x2,sp,#0x60
7102d3ba00  blr x8
7102d3ba04  tbz w0,#0x0,0x7102d3ba1c
7102d3ba08  mov w0,#0x10
7102d3ba0c  mov x1,x22
7102d3ba10  bl 0x710392e290
7102d3ba14  mov x21,x0
7102d3ba18  cbnz x0,0x7102d3ba20
7102d3ba1c  mov x21,xzr
7102d3ba20  mov w8,#0x14
7102d3ba24  madd x8,x25,x8,x21
7102d3ba28  mov x28,x21
7102d3ba2c  stp x21,x21,[sp, #0x38]
7102d3ba30  str x8,[sp, #0x48]
7102d3ba34  ldr x1,[x19, #0x298]
7102d3ba38  ldr x8,[x19, #0x2a0]
7102d3ba3c  sub x2,x8,x1
7102d3ba40  cmp x2,#0x1
7102d3ba44  b.lt 0x7102d3bd38
7102d3ba48  umulh x8,x2,x24
7102d3ba4c  mov x0,x21
7102d3ba50  lsr x22,x8,#0x4
7102d3ba54  bl 0x71039c00e0
7102d3ba58  mov w8,#0x14
7102d3ba5c  madd x21,x22,x8,x21
7102d3ba60  str x21,[sp, #0x40]
7102d3ba64  b 0x7102d3bd38
7102d3ba68  ldr x19,[x8, #0x8]
7102d3ba6c  stp xzr,xzr,[sp, #0x40]
7102d3ba70  str xzr,[sp, #0x38]
7102d3ba74  ldr x8,[x19, #0x2c8]
7102d3ba78  ldr x9,[x19, #0x2c0]
7102d3ba7c  add x23,sp,#0x30
7102d3ba80  subs x22,x8,x9
7102d3ba84  b.eq 0x7102d3bd44
7102d3ba88  orr x24,xzr,#-0x3333333333333334
7102d3ba8c  asr x8,x22,#0x2
7102d3ba90  movk x24,#0xcccd
7102d3ba94  mul x25,x8,x24
7102d3ba98  orr x8,xzr,#-0x3333333333333334
7102d3ba9c  movk x8,#0xccc, LSL #48
7102d3baa0  cmp x25,x8
7102d3baa4  b.hi 0x7102d3c328
7102d3baa8  mov w0,#0x10
7102d3baac  mov x1,x22
7102d3bab0  bl 0x710392e290
7102d3bab4  mov x21,x0
7102d3bab8  cbnz x0,0x7102d3bb00
7102d3babc  adrp x8,0x7105332000
7102d3bac0  ldr x0,[x8, #0xf00]
7102d3bac4  cbz x0,0x7102d3bafc
7102d3bac8  stur wzr,[x29, #-0x60]
7102d3bacc  str x22,[sp, #0x60]
7102d3bad0  ldr x8,[x0]
7102d3bad4  ldr x8,[x8, #0x30]
7102d3bad8  sub x1,x29,#0x60
7102d3badc  add x2,sp,#0x60
7102d3bae0  blr x8
7102d3bae4  tbz w0,#0x0,0x7102d3bafc
7102d3bae8  mov w0,#0x10
7102d3baec  mov x1,x22
7102d3baf0  bl 0x710392e290
7102d3baf4  mov x21,x0
7102d3baf8  cbnz x0,0x7102d3bb00
7102d3bafc  mov x21,xzr
7102d3bb00  mov w8,#0x14
7102d3bb04  madd x8,x25,x8,x21
7102d3bb08  mov x28,x21
7102d3bb0c  stp x21,x21,[sp, #0x38]
7102d3bb10  str x8,[sp, #0x48]
7102d3bb14  ldr x1,[x19, #0x2c0]
7102d3bb18  ldr x8,[x19, #0x2c8]
7102d3bb1c  sub x2,x8,x1
7102d3bb20  cmp x2,#0x1
7102d3bb24  b.lt 0x7102d3bd4c
7102d3bb28  umulh x8,x2,x24
7102d3bb2c  mov x0,x21
7102d3bb30  lsr x22,x8,#0x4
7102d3bb34  bl 0x71039c00e0
7102d3bb38  mov w8,#0x14
7102d3bb3c  madd x21,x22,x8,x21
7102d3bb40  str x21,[sp, #0x40]
7102d3bb44  b 0x7102d3bd4c
7102d3bb48  ldr x19,[x8, #0x8]
7102d3bb4c  stp xzr,xzr,[sp, #0x40]
7102d3bb50  str xzr,[sp, #0x38]
7102d3bb54  ldr x8,[x19, #0x278]
7102d3bb58  ldr x9,[x19, #0x270]
7102d3bb5c  add x23,sp,#0x30
7102d3bb60  subs x22,x8,x9
7102d3bb64  b.eq 0x7102d3bd58
7102d3bb68  orr x24,xzr,#-0x3333333333333334
7102d3bb6c  asr x8,x22,#0x2
7102d3bb70  movk x24,#0xcccd
7102d3bb74  mul x25,x8,x24
7102d3bb78  orr x8,xzr,#-0x3333333333333334
7102d3bb7c  movk x8,#0xccc, LSL #48
7102d3bb80  cmp x25,x8
7102d3bb84  b.hi 0x7102d3c328
7102d3bb88  mov w0,#0x10
7102d3bb8c  mov x1,x22
7102d3bb90  bl 0x710392e290
7102d3bb94  mov x21,x0
7102d3bb98  cbnz x0,0x7102d3bbe0
7102d3bb9c  adrp x8,0x7105332000
7102d3bba0  ldr x0,[x8, #0xf00]
7102d3bba4  cbz x0,0x7102d3bbdc
7102d3bba8  stur wzr,[x29, #-0x60]
7102d3bbac  str x22,[sp, #0x60]
7102d3bbb0  ldr x8,[x0]
7102d3bbb4  ldr x8,[x8, #0x30]
7102d3bbb8  sub x1,x29,#0x60
7102d3bbbc  add x2,sp,#0x60
7102d3bbc0  blr x8
7102d3bbc4  tbz w0,#0x0,0x7102d3bbdc
7102d3bbc8  mov w0,#0x10
7102d3bbcc  mov x1,x22
7102d3bbd0  bl 0x710392e290
7102d3bbd4  mov x21,x0
7102d3bbd8  cbnz x0,0x7102d3bbe0
7102d3bbdc  mov x21,xzr
7102d3bbe0  mov w8,#0x14
7102d3bbe4  madd x8,x25,x8,x21
7102d3bbe8  mov x28,x21
7102d3bbec  stp x21,x21,[sp, #0x38]
7102d3bbf0  str x8,[sp, #0x48]
7102d3bbf4  ldr x1,[x19, #0x270]
7102d3bbf8  ldr x8,[x19, #0x278]
7102d3bbfc  sub x2,x8,x1
7102d3bc00  cmp x2,#0x1
7102d3bc04  b.lt 0x7102d3bd60
7102d3bc08  umulh x8,x2,x24
7102d3bc0c  mov x0,x21
7102d3bc10  lsr x22,x8,#0x4
7102d3bc14  bl 0x71039c00e0
7102d3bc18  mov w8,#0x14
7102d3bc1c  madd x21,x22,x8,x21
7102d3bc20  str x21,[sp, #0x40]
7102d3bc24  b 0x7102d3bd60
7102d3bc28  ldr x19,[x8, #0x8]
7102d3bc2c  stp xzr,xzr,[sp, #0x40]
7102d3bc30  str xzr,[sp, #0x38]
7102d3bc34  ldr x8,[x19, #0x318]
7102d3bc38  ldr x9,[x19, #0x310]
7102d3bc3c  add x23,sp,#0x30
7102d3bc40  subs x22,x8,x9
7102d3bc44  b.eq 0x7102d3bd6c
7102d3bc48  orr x24,xzr,#-0x3333333333333334
7102d3bc4c  asr x8,x22,#0x2
7102d3bc50  movk x24,#0xcccd
7102d3bc54  mul x25,x8,x24
7102d3bc58  orr x8,xzr,#-0x3333333333333334
7102d3bc5c  movk x8,#0xccc, LSL #48
7102d3bc60  cmp x25,x8
7102d3bc64  b.hi 0x7102d3c328
7102d3bc68  mov w0,#0x10
7102d3bc6c  mov x1,x22
7102d3bc70  bl 0x710392e290
7102d3bc74  mov x21,x0
7102d3bc78  cbnz x0,0x7102d3bcc0
7102d3bc7c  adrp x8,0x7105332000
7102d3bc80  ldr x0,[x8, #0xf00]
7102d3bc84  cbz x0,0x7102d3bcbc
7102d3bc88  stur wzr,[x29, #-0x60]
7102d3bc8c  str x22,[sp, #0x60]
7102d3bc90  ldr x8,[x0]
7102d3bc94  ldr x8,[x8, #0x30]
7102d3bc98  sub x1,x29,#0x60
7102d3bc9c  add x2,sp,#0x60
7102d3bca0  blr x8
7102d3bca4  tbz w0,#0x0,0x7102d3bcbc
7102d3bca8  mov w0,#0x10
7102d3bcac  mov x1,x22
7102d3bcb0  bl 0x710392e290
7102d3bcb4  mov x21,x0
7102d3bcb8  cbnz x0,0x7102d3bcc0
7102d3bcbc  mov x21,xzr
7102d3bcc0  mov w8,#0x14
7102d3bcc4  madd x8,x25,x8,x21
7102d3bcc8  mov x28,x21
7102d3bccc  stp x21,x21,[sp, #0x38]
7102d3bcd0  str x8,[sp, #0x48]
7102d3bcd4  ldr x1,[x19, #0x310]
7102d3bcd8  ldr x8,[x19, #0x318]
7102d3bcdc  sub x2,x8,x1
7102d3bce0  cmp x2,#0x1
7102d3bce4  b.lt 0x7102d3bd74
7102d3bce8  umulh x8,x2,x24
7102d3bcec  mov x0,x21
7102d3bcf0  lsr x22,x8,#0x4
7102d3bcf4  bl 0x71039c00e0
7102d3bcf8  mov w8,#0x14
7102d3bcfc  madd x21,x22,x8,x21
7102d3bd00  str x21,[sp, #0x40]
7102d3bd04  b 0x7102d3bd74
7102d3bd08  mov x21,xzr
7102d3bd0c  mov x28,xzr
7102d3bd10  add x8,x23,#0x20
7102d3bd14  add x9,x19,#0x260
7102d3bd18  b 0x7102d3bd7c
7102d3bd1c  mov x21,xzr
7102d3bd20  mov x28,xzr
7102d3bd24  add x8,x23,#0x20
7102d3bd28  add x9,x19,#0x300
7102d3bd2c  b 0x7102d3bd7c
7102d3bd30  mov x21,xzr
7102d3bd34  mov x28,xzr
7102d3bd38  add x8,x23,#0x20
7102d3bd3c  add x9,x19,#0x2b0
7102d3bd40  b 0x7102d3bd7c
7102d3bd44  mov x21,xzr
7102d3bd48  mov x28,xzr
7102d3bd4c  add x8,x23,#0x20
7102d3bd50  add x9,x19,#0x2d8
7102d3bd54  b 0x7102d3bd7c
7102d3bd58  mov x21,xzr
7102d3bd5c  mov x28,xzr
7102d3bd60  add x8,x23,#0x20
7102d3bd64  add x9,x19,#0x288
7102d3bd68  b 0x7102d3bd7c
7102d3bd6c  mov x21,xzr
7102d3bd70  mov x28,xzr
7102d3bd74  add x8,x23,#0x20
7102d3bd78  add x9,x19,#0x328
7102d3bd7c  ldr x9,[x9]
7102d3bd80  adrp x10,0x7105134000
7102d3bd84  add x10,x10,#0x40
7102d3bd88  cmp x28,x21
7102d3bd8c  str x9,[x8]
7102d3bd90  str x10,[sp, #0x30]
7102d3bd94  b.eq 0x7102d3c2e8
7102d3bd98  add x8,x20,#0x10
7102d3bd9c  str x8,[sp, #0x18]
7102d3bda0  add x8,x20,#0x38
7102d3bda4  add x22,x20,#0x98
7102d3bda8  add x24,x20,#0x28
7102d3bdac  str x8,[sp, #0x10]
7102d3bdb0  add x8,x20,#0xa8
7102d3bdb4  str x8,[sp, #0x8]
7102d3bdb8  ldp w1,w2,[x28, #0x4]
7102d3bdbc  stp w1,w2,[sp, #0x60]
7102d3bdc0  ldr w3,[x28, #0xc]
7102d3bdc4  add w8,w1,#0x80
7102d3bdc8  add w9,w2,#0x80
7102d3bdcc  orr w8,w8,w9
7102d3bdd0  add w9,w3,#0x80
7102d3bdd4  orr w8,w8,w9
7102d3bdd8  cmp w8,#0xff
7102d3bddc  str w3,[sp, #0x68]
7102d3bde0  b.hi 0x7102d3c2dc
7102d3bde4  ldr w27,[x28]
7102d3bde8  ldr w26,[x28, #0x10]
7102d3bdec  mov x0,x22
7102d3bdf0  bl 0x7102d35700
7102d3bdf4  cbz x0,0x7102d3be14
7102d3bdf8  ldr x0,[x0, #0x20]
7102d3bdfc  cbz x0,0x7102d3be14
7102d3be00  add x1,sp,#0x60
7102d3be04  mov x2,x27
7102d3be08  mov w3,w26
7102d3be0c  bl 0x7102d34fa0
7102d3be10  b 0x7102d3c2dc
7102d3be14  ldr x8,[x24]
7102d3be18  cbz x8,0x7102d3be24
7102d3be1c  cmp x8,x24
7102d3be20  b.ne 0x7102d3bf74
7102d3be24  ldr x19,[x20]
7102d3be28  mov w0,#0x10
7102d3be2c  mov w1,#0xc8
7102d3be30  bl 0x710392e290
7102d3be34  mov x25,x0
7102d3be38  cbnz x0,0x7102d3be84
7102d3be3c  adrp x8,0x7105332000
7102d3be40  ldr x0,[x8, #0xf00]
7102d3be44  cbz x0,0x7102d3be80
7102d3be48  mov w8,#0xc8
7102d3be4c  stur wzr,[x29, #-0x54]
7102d3be50  sub x1,x29,#0x54
7102d3be54  stur x8,[x29, #-0x60]
7102d3be58  ldr x8,[x0]
7102d3be5c  ldr x8,[x8, #0x30]
7102d3be60  sub x2,x29,#0x60
7102d3be64  blr x8
7102d3be68  tbz w0,#0x0,0x7102d3be80
7102d3be6c  mov w0,#0x10
7102d3be70  mov w1,#0xc8
7102d3be74  bl 0x710392e290
7102d3be78  mov x25,x0
7102d3be7c  cbnz x0,0x7102d3be84
7102d3be80  mov x25,xzr
7102d3be84  orr x8,xzr,#-0x100000000
7102d3be88  str x8,[x25, #0x20]
7102d3be8c  mov w8,#0x4
7102d3be90  mov w0,#0x10
7102d3be94  orr w1,wzr,#0x18
7102d3be98  str wzr,[x25, #0x28]
7102d3be9c  stp xzr,xzr,[x25]
7102d3bea0  str xzr,[x25, #0x30]
7102d3bea4  str w8,[x25, #0x48]
7102d3bea8  str xzr,[x25, #0x50]
7102d3beac  str w8,[x25, #0x58]
7102d3beb0  str xzr,[x25, #0x60]
7102d3beb4  str w8,[x25, #0x68]
7102d3beb8  str xzr,[x25, #0x70]
7102d3bebc  str w8,[x25, #0x78]
7102d3bec0  strh wzr,[x25, #0xc0]
7102d3bec4  str xzr,[x25, #0xb8]
7102d3bec8  strh wzr,[x25, #0x90]
7102d3becc  strh wzr,[x25, #0xb4]
7102d3bed0  stur xzr,[x25, #0xac]
7102d3bed4  stur xzr,[x25, #0xa4]
7102d3bed8  stur xzr,[x25, #0x9c]
7102d3bedc  stur xzr,[x25, #0x94]
7102d3bee0  stp x19,xzr,[x25, #0x10]
7102d3bee4  stp xzr,xzr,[x25, #0x38]
7102d3bee8  stp xzr,xzr,[x25, #0x80]
7102d3beec  bl 0x710392e290
7102d3bef0  cbnz x0,0x7102d3bf38
7102d3bef4  adrp x8,0x7105332000
7102d3bef8  ldr x0,[x8, #0xf00]
7102d3befc  cbz x0,0x7102d3bf34
7102d3bf00  orr w8,wzr,#0x18
7102d3bf04  stur wzr,[x29, #-0x54]
7102d3bf08  sub x1,x29,#0x54
7102d3bf0c  stur x8,[x29, #-0x60]
7102d3bf10  ldr x8,[x0]
7102d3bf14  ldr x8,[x8, #0x30]
7102d3bf18  sub x2,x29,#0x60
7102d3bf1c  blr x8
7102d3bf20  tbz w0,#0x0,0x7102d3bf34
7102d3bf24  mov w0,#0x10
7102d3bf28  orr w1,wzr,#0x18
7102d3bf2c  bl 0x710392e290
7102d3bf30  cbnz x0,0x7102d3bf38
7102d3bf34  mov x0,xzr
7102d3bf38  ldr x8,[sp, #0x18]
7102d3bf3c  stp x8,x25,[x0, #0x8]
7102d3bf40  ldr x8,[x20, #0x10]
7102d3bf44  str x8,[x0]
7102d3bf48  str x0,[x8, #0x8]
7102d3bf4c  ldr x8,[x20, #0x20]
7102d3bf50  add x8,x8,#0x1
7102d3bf54  str x0,[x20, #0x10]
7102d3bf58  ldr x9,[x20, #0x30]
7102d3bf5c  str x8,[x20, #0x20]
7102d3bf60  ldr x8,[x0, #0x10]
7102d3bf64  stp x24,x9,[x8]
7102d3bf68  str x8,[x20, #0x30]
7102d3bf6c  str x8,[x9]
7102d3bf70  ldr x8,[x20, #0x28]
7102d3bf74  cbz x8,0x7102d3c2dc
7102d3bf78  cmp x8,x24
7102d3bf7c  b.eq 0x7102d3c2dc
7102d3bf80  ldr x25,[x20, #0x30]
7102d3bf84  ldr x8,[x25]
7102d3bf88  cbz x8,0x7102d3bf9c
7102d3bf8c  ldr x9,[x25, #0x8]
7102d3bf90  str x8,[x9]
7102d3bf94  str x9,[x8, #0x8]
7102d3bf98  stp xzr,xzr,[x25]
7102d3bf9c  add x1,sp,#0x60
7102d3bfa0  mov x0,x25
7102d3bfa4  mov x2,x27
7102d3bfa8  mov w3,w26
7102d3bfac  bl 0x7102d34fa0
7102d3bfb0  ldp w8,w9,[sp, #0x60]
7102d3bfb4  ldr w10,[sp, #0x68]
7102d3bfb8  ldr x27,[x20, #0xa0]
7102d3bfbc  ubfiz x19,x8,#0x10,#0x8
7102d3bfc0  bfm x19,x9,#0x38,#0x7
7102d3bfc4  bfxil x19,x10,#0x0,#0x8
7102d3bfc8  cbz x27,0x7102d3c0a0
7102d3bfcc  sub x11,x27,#0x1
7102d3bfd0  ands x12,x11,x27
7102d3bfd4  b.eq 0x7102d3bff0
7102d3bfd8  cmp x27,x19
7102d3bfdc  mov x23,x19
7102d3bfe0  b.hi 0x7102d3bff4
7102d3bfe4  udiv x13,x19,x27
7102d3bfe8  msub x23,x13,x27,x19
7102d3bfec  b 0x7102d3bff4
7102d3bff0  and x23,x11,x19
7102d3bff4  ldr x13,[x22]
7102d3bff8  ldr x13,[x13, x23, LSL #0x3]
7102d3bffc  cbz x13,0x7102d3c0a0
7102d3c000  ldr x26,[x13]
7102d3c004  cbz x26,0x7102d3c0a0
7102d3c008  cbz x12,0x7102d3c060
7102d3c00c  ldr x11,[x26, #0x8]
7102d3c010  cmp x11,x19
7102d3c014  b.eq 0x7102d3c030
7102d3c018  cmp x11,x27
7102d3c01c  b.cc 0x7102d3c028
7102d3c020  udiv x12,x11,x27
7102d3c024  msub x11,x12,x27,x11
7102d3c028  cmp x11,x23
7102d3c02c  b.ne 0x7102d3c0a0
7102d3c030  ldr w11,[x26, #0x10]
7102d3c034  cmp w11,w8
7102d3c038  b.ne 0x7102d3c054
7102d3c03c  ldr w11,[x26, #0x14]
7102d3c040  cmp w11,w9
7102d3c044  b.ne 0x7102d3c054
7102d3c048  ldr w11,[x26, #0x18]
7102d3c04c  cmp w11,w10
7102d3c050  b.eq 0x7102d3c2c4
7102d3c054  ldr x26,[x26]
7102d3c058  cbnz x26,0x7102d3c00c
7102d3c05c  b 0x7102d3c0a0
7102d3c060  ldr x12,[x26, #0x8]
7102d3c064  and x13,x12,x11
7102d3c068  cmp x12,x19
7102d3c06c  ccmp x13,x23,#0x4,ne
7102d3c070  b.ne 0x7102d3c0a0
7102d3c074  ldr w12,[x26, #0x10]
7102d3c078  cmp w12,w8
7102d3c07c  b.ne 0x7102d3c098
7102d3c080  ldr w12,[x26, #0x14]
7102d3c084  cmp w12,w9
7102d3c088  b.ne 0x7102d3c098
7102d3c08c  ldr w12,[x26, #0x18]
7102d3c090  cmp w12,w10
7102d3c094  b.eq 0x7102d3c2c4
7102d3c098  ldr x26,[x26]
7102d3c09c  cbnz x26,0x7102d3c060
7102d3c0a0  mov w0,#0x10
7102d3c0a4  mov w1,#0x28
7102d3c0a8  bl 0x710392e290
7102d3c0ac  mov x26,x0
7102d3c0b0  cbnz x0,0x7102d3c0fc
7102d3c0b4  adrp x8,0x7105332000
7102d3c0b8  ldr x0,[x8, #0xf00]
7102d3c0bc  cbz x0,0x7102d3c0f8
7102d3c0c0  mov w8,#0x28
7102d3c0c4  stur wzr,[x29, #-0x54]
7102d3c0c8  sub x1,x29,#0x54
7102d3c0cc  stur x8,[x29, #-0x60]
7102d3c0d0  ldr x8,[x0]
7102d3c0d4  ldr x8,[x8, #0x30]
7102d3c0d8  sub x2,x29,#0x60
7102d3c0dc  blr x8
7102d3c0e0  tbz w0,#0x0,0x7102d3c0f8
7102d3c0e4  mov w0,#0x10
7102d3c0e8  mov w1,#0x28
7102d3c0ec  bl 0x710392e290
7102d3c0f0  mov x26,x0
7102d3c0f4  cbnz x0,0x7102d3c0fc
7102d3c0f8  mov x26,xzr
7102d3c0fc  ldr x8,[sp, #0x60]
7102d3c100  ldr w9,[sp, #0x68]
7102d3c104  str w9,[x26, #0x18]
7102d3c108  stp x19,x8,[x26, #0x8]
7102d3c10c  str xzr,[x26, #0x20]
7102d3c110  str xzr,[x26]
7102d3c114  ldr x8,[x20, #0xb0]
7102d3c118  add x8,x8,#0x1
7102d3c11c  ucvtf s0,x8
7102d3c120  ldr s1,[x20, #0xb8]
7102d3c124  cbz x27,0x7102d3c138
7102d3c128  ucvtf s2,x27
7102d3c12c  fmul s2,s1,s2
7102d3c130  fcmp s2,s0
7102d3c134  b.pl 0x7102d3c250
7102d3c138  lsl x8,x27,#0x1
7102d3c13c  cmp x27,#0x3
7102d3c140  b.cc 0x7102d3c154
7102d3c144  sub x9,x27,#0x1
7102d3c148  tst x9,x27
7102d3c14c  cset w9,ne
7102d3c150  b 0x7102d3c158
7102d3c154  mov w9,#0x1
7102d3c158  fdiv s0,s0,s1
7102d3c15c  orr x8,x9,x8
7102d3c160  fcvtpu x9,s0
7102d3c164  cmp x8,x9
7102d3c168  csel x27,x9,x8,cc
7102d3c16c  subs x8,x27,#0x1
7102d3c170  b.ne 0x7102d3c17c
7102d3c174  mov w27,#0x2
7102d3c178  b 0x7102d3c190
7102d3c17c  tst x8,x27
7102d3c180  b.eq 0x7102d3c190
7102d3c184  mov x0,x27
7102d3c188  bl 0x71039c26e0
7102d3c18c  mov x27,x0
7102d3c190  ldr x23,[x20, #0xa0]
7102d3c194  cmp x27,x23
7102d3c198  b.ls 0x7102d3c1ac
7102d3c19c  mov x0,x22
7102d3c1a0  mov x1,x27
7102d3c1a4  bl 0x7102d36180
7102d3c1a8  b 0x7102d3c220
7102d3c1ac  b.cs 0x7102d3c220
7102d3c1b0  cmp x23,#0x3
7102d3c1b4  b.cc 0x7102d3c1c8
7102d3c1b8  sub x8,x23,#0x1
7102d3c1bc  tst x8,x23
7102d3c1c0  cset w8,eq
7102d3c1c4  b 0x7102d3c1cc
7102d3c1c8  mov w8,wzr
7102d3c1cc  ldr x9,[x20, #0xb0]
7102d3c1d0  ucvtf s0,x9
7102d3c1d4  ldr s1,[x20, #0xb8]
7102d3c1d8  fdiv s0,s0,s1
7102d3c1dc  fcvtpu x0,s0
7102d3c1e0  cbz w8,0x7102d3c204
7102d3c1e4  sub x8,x0,#0x1
7102d3c1e8  clz x8,x8
7102d3c1ec  neg x8,x8
7102d3c1f0  mov w9,#0x1
7102d3c1f4  lsl x8,x9,x8
7102d3c1f8  cmp x0,#0x2
7102d3c1fc  csel x0,x0,x8,cc
7102d3c200  b 0x7102d3c208
7102d3c204  bl 0x71039c26e0
7102d3c208  cmp x27,x0
7102d3c20c  csel x1,x0,x27,cc
7102d3c210  cmp x1,x23
7102d3c214  b.cs 0x7102d3c220
7102d3c218  mov x0,x22
7102d3c21c  b 0x7102d3c1a4
7102d3c220  ldr x27,[x20, #0xa0]
7102d3c224  sub x8,x27,#0x1
7102d3c228  tst x8,x27
7102d3c22c  b.eq 0x7102d3c240
7102d3c230  cmp x27,x19
7102d3c234  b.ls 0x7102d3c248
7102d3c238  mov x23,x19
7102d3c23c  b 0x7102d3c250
7102d3c240  and x23,x8,x19
7102d3c244  b 0x7102d3c250
7102d3c248  udiv x8,x19,x27
7102d3c24c  msub x23,x8,x27,x19
7102d3c250  ldr x9,[x22]
7102d3c254  ldr x8,[x9, x23, LSL #0x3]
7102d3c258  cbz x8,0x7102d3c268
7102d3c25c  ldr x9,[x8]
7102d3c260  str x9,[x26]
7102d3c264  b 0x7102d3c2b4
7102d3c268  ldr x10,[sp, #0x8]
7102d3c26c  ldr x8,[x10]
7102d3c270  str x8,[x26]
7102d3c274  str x26,[x10]
7102d3c278  str x10,[x9, x23, LSL #0x3]
7102d3c27c  ldr x8,[x26]
7102d3c280  cbz x8,0x7102d3c2b8
7102d3c284  ldr x8,[x8, #0x8]
7102d3c288  sub x9,x27,#0x1
7102d3c28c  tst x9,x27
7102d3c290  b.eq 0x7102d3c2a8
7102d3c294  cmp x8,x27
7102d3c298  b.cc 0x7102d3c2ac
7102d3c29c  udiv x9,x8,x27
7102d3c2a0  msub x8,x9,x27,x8
7102d3c2a4  b 0x7102d3c2ac
7102d3c2a8  and x8,x8,x9
7102d3c2ac  ldr x9,[x22]
7102d3c2b0  add x8,x9,x8, LSL #0x3
7102d3c2b4  str x26,[x8]
7102d3c2b8  ldr x8,[x20, #0xb0]
7102d3c2bc  add x8,x8,#0x1
7102d3c2c0  str x8,[x20, #0xb0]
7102d3c2c4  str x25,[x26, #0x20]
7102d3c2c8  ldr x8,[x20, #0x40]
7102d3c2cc  ldr x9,[sp, #0x10]
7102d3c2d0  stp x9,x8,[x25]
7102d3c2d4  str x25,[x20, #0x40]
7102d3c2d8  str x25,[x8]
7102d3c2dc  add x28,x28,#0x14
7102d3c2e0  cmp x28,x21
7102d3c2e4  b.ne 0x7102d3bdb8
7102d3c2e8  ldr x0,[sp, #0x38]
7102d3c2ec  cbz x0,0x7102d3c2f8
7102d3c2f0  str x0,[sp, #0x40]
7102d3c2f4  bl 0x710392eb40
7102d3c2f8  ldr x28,[sp, #0x28]
7102d3c2fc  ldr w27,[sp, #0x24]
7102d3c300  cbz w27,0x7102d3b5d4
7102d3c304  mov x0,x28
7102d3c308  ldp x29,x30,[sp, #0xd0]
7102d3c30c  ldp x20,x19,[sp, #0xc0]
7102d3c310  ldp x22,x21,[sp, #0xb0]
7102d3c314  ldp x24,x23,[sp, #0xa0]
7102d3c318  ldp x26,x25,[sp, #0x90]
7102d3c31c  ldp x28,x27,[sp, #0x80]
7102d3c320  add sp,sp,#0xe0
7102d3c324  b 0x7102d3c330
7102d3c328  add x0,x23,#0x8
7102d3c32c  bl 0x71039c0c00
