// addr:      7102df4b60
// offset:    0x2df4b60
// name:      FUN_7102df4b60
// mangled:   
// size:      1288

7102df4b60  sub sp,sp,#0x60
7102df4b64  str x25,[sp, #0x10]
7102df4b68  stp x24,x23,[sp, #0x20]
7102df4b6c  stp x22,x21,[sp, #0x30]
7102df4b70  stp x20,x19,[sp, #0x40]
7102df4b74  stp x29,x30,[sp, #0x50]
7102df4b78  add x29,sp,#0x50
7102df4b7c  mov w8,#0x1
7102df4b80  strh w8,[x0, #0x20]
7102df4b84  adrp x8,0x7104466000
7102df4b88  stp x2,x3,[x0]
7102df4b8c  mov w3,#0x1
7102df4b90  ldr q0,[x8, #0x2b0]
7102df4b94  stp x1,xzr,[x0, #0x10]
7102df4b98  adrp x22,0x710532a000
7102df4b9c  mov x19,x0
7102df4ba0  str wzr,[x0, #0x24]
7102df4ba4  strb wzr,[x0, #0x28]
7102df4ba8  stur xzr,[x0, #0x2c]
7102df4bac  stp xzr,xzr,[x0, #0x60]
7102df4bb0  stp xzr,xzr,[x0, #0x40]
7102df4bb4  str q0,[x0, #0x50]
7102df4bb8  ldr x9,[x22, #0x9d8]
7102df4bbc  ldr x8,[x1, #0x308]
7102df4bc0  ldr x9,[x9]
7102df4bc4  ldr x1,[x9, #0x1c0]
7102df4bc8  ldr x2,[x8, #0x8]
7102df4bcc  add x0,sp,#0x18
7102df4bd0  bl 0x710315a0a0
7102df4bd4  ldr x8,[sp, #0x18]
7102df4bd8  str xzr,[sp, #0x18]
7102df4bdc  ldr x20,[x19, #0x68]
7102df4be0  str x8,[x19, #0x68]
7102df4be4  cbz x20,0x7102df4c0c
7102df4be8  mov x0,x20
7102df4bec  bl 0x71025e8370
7102df4bf0  mov x0,x20
7102df4bf4  bl 0x710392eb40
7102df4bf8  str xzr,[sp, #0x18]
7102df4bfc  ldr x8,[x19, #0x68]
7102df4c00  ldrb w9,[x8, #0x10]
7102df4c04  cbnz w9,0x7102df4c88
7102df4c08  b 0x7102df4c18
7102df4c0c  str xzr,[sp, #0x18]
7102df4c10  ldrb w9,[x8, #0x10]
7102df4c14  cbnz w9,0x7102df4c88
7102df4c18  ldr x20,[x8, #0x8]
7102df4c1c  mov w9,#0x1
7102df4c20  strb w9,[x8, #0x10]
7102df4c24  ldrb w9,[x8, #0x11]
7102df4c28  ldrb w8,[x20, #0x1c]
7102df4c2c  cbz w9,0x7102df4c60
7102df4c30  cbnz w8,0x7102df4c88
7102df4c34  adrp x8,0x71052b8000
7102df4c38  ldr x8,[x8, #0xf00]
7102df4c3c  ldr x8,[x8]
7102df4c40  add x0,x8,#0xa30
7102df4c44  ldr x8,[x8, #0xa30]
7102df4c48  ldr x8,[x8, #0x10]
7102df4c4c  mov x1,x20
7102df4c50  blr x8
7102df4c54  mov w8,#0x1
7102df4c58  strb w8,[x20, #0x1c]
7102df4c5c  b 0x7102df4c88
7102df4c60  cbz w8,0x7102df4c88
7102df4c64  adrp x8,0x71052b8000
7102df4c68  ldr x8,[x8, #0xf00]
7102df4c6c  ldr x8,[x8]
7102df4c70  add x0,x8,#0xa30
7102df4c74  ldr x8,[x8, #0xa30]
7102df4c78  ldr x8,[x8, #0x18]
7102df4c7c  mov x1,x20
7102df4c80  blr x8
7102df4c84  strb wzr,[x20, #0x1c]
7102df4c88  ldr x8,[x19, #0x68]
7102df4c8c  ldr x8,[x8, #0x8]
7102df4c90  mov w23,#0x1
7102df4c94  str w23,[x8, #0x10]
7102df4c98  ldr x8,[x19, #0x10]
7102df4c9c  strb wzr,[x19, #0x70]
7102df4ca0  ldr x9,[x8, #0x310]
7102df4ca4  adrp x10,0x710446a000
7102df4ca8  ldr q2,[x10, #0x350]
7102df4cac  ldp x8,x9,[x9, #0xd0]
7102df4cb0  cmp x8,x9
7102df4cb4  b.eq 0x7102df4cec
7102df4cb8  mov x10,#0x4795
7102df4cbc  movk x10,#0x55d7, LSL #16
7102df4cc0  movk x10,#0x6, LSL #32
7102df4cc4  ldr w11,[x8, #0x8]
7102df4cc8  cmp w11,#0x1
7102df4ccc  b.hi 0x7102df4ce0
7102df4cd0  ldr x24,[x8]
7102df4cd4  ldr x11,[x24, #0x68]
7102df4cd8  cmp x11,x10
7102df4cdc  b.eq 0x7102df4e38
7102df4ce0  add x8,x8,#0x10
7102df4ce4  cmp x9,x8
7102df4ce8  b.ne 0x7102df4cc4
7102df4cec  fmov s0,wzr
7102df4cf0  ext v1.16B,v2.16B,v2.16B,0x8
7102df4cf4  ldr x8,[x19, #0x10]
7102df4cf8  mov v1.S[0x1],v0.S[0x0]
7102df4cfc  strb w23,[x19, #0x70]
7102df4d00  mov v2.D[0x1],v1.D[0x0]
7102df4d04  str q2,[x19, #0x40]
7102df4d08  ldr x8,[x8, #0x310]
7102df4d0c  ldp x9,x10,[x8, #0xd0]
7102df4d10  cmp x9,x10
7102df4d14  b.eq 0x7102df4d4c
7102df4d18  mov x11,#0xfc3f
7102df4d1c  movk x11,#0xf430, LSL #16
7102df4d20  movk x11,#0xa, LSL #32
7102df4d24  ldr w8,[x9, #0x8]
7102df4d28  cmp w8,#0x1
7102df4d2c  b.hi 0x7102df4d40
7102df4d30  ldr x8,[x9]
7102df4d34  ldr x12,[x8, #0x68]
7102df4d38  cmp x12,x11
7102df4d3c  b.eq 0x7102df4e7c
7102df4d40  add x9,x9,#0x10
7102df4d44  cmp x10,x9
7102df4d48  b.ne 0x7102df4d24
7102df4d4c  str xzr,[x19, #0x18]
7102df4d50  ldr x8,[x22, #0x9d8]
7102df4d54  ldr x8,[x8]
7102df4d58  ldr x10,[x8, #0x1f8]
7102df4d5c  ldr x8,[x19, #0x10]
7102df4d60  mov x9,x10
7102df4d64  ldr x11,[x9, #0x50]!
7102df4d68  cbz x11,0x7102df4dac
7102df4d6c  add x12,x10,#0x50
7102df4d70  b 0x7102df4d7c
7102df4d74  mov x12,x11
7102df4d78  mov x11,x13
7102df4d7c  ldr x13,[x11, #0x20]
7102df4d80  cmp x13,x8
7102df4d84  b.ls 0x7102df4d98
7102df4d88  ldr x13,[x11]
7102df4d8c  mov x12,x11
7102df4d90  cbnz x13,0x7102df4d74
7102df4d94  b 0x7102df4db0
7102df4d98  b.cs 0x7102df4db0
7102df4d9c  ldr x13,[x11, #0x8]!
7102df4da0  mov x12,x11
7102df4da4  cbnz x13,0x7102df4d74
7102df4da8  b 0x7102df4db0
7102df4dac  mov x12,x9
7102df4db0  ldr x11,[x12]
7102df4db4  ldr x11,[x11, #0x28]
7102df4db8  str wzr,[x11, #0x1c]
7102df4dbc  ldr x11,[x10, #0x20]
7102df4dc0  cmp x11,x8
7102df4dc4  b.ne 0x7102df4e1c
7102df4dc8  ldr x11,[x9]
7102df4dcc  cbz x11,0x7102df4e0c
7102df4dd0  add x9,x10,#0x50
7102df4dd4  b 0x7102df4de0
7102df4dd8  mov x9,x11
7102df4ddc  mov x11,x10
7102df4de0  ldr x10,[x11, #0x20]
7102df4de4  cmp x10,x8
7102df4de8  b.ls 0x7102df4dfc
7102df4dec  ldr x10,[x11]
7102df4df0  mov x9,x11
7102df4df4  cbnz x10,0x7102df4dd8
7102df4df8  b 0x7102df4e0c
7102df4dfc  b.cs 0x7102df4e0c
7102df4e00  ldr x10,[x11, #0x8]!
7102df4e04  mov x9,x11
7102df4e08  cbnz x10,0x7102df4dd8
7102df4e0c  ldr x8,[x9]
7102df4e10  ldr x8,[x8, #0x28]
7102df4e14  ldr s0,[x8, #0x1c]
7102df4e18  bl 0x7103737c30
7102df4e1c  ldp x29,x30,[sp, #0x50]
7102df4e20  ldr x25,[sp, #0x10]
7102df4e24  ldp x20,x19,[sp, #0x40]
7102df4e28  ldp x22,x21,[sp, #0x30]
7102df4e2c  ldp x24,x23,[sp, #0x20]
7102df4e30  add sp,sp,#0x60
7102df4e34  ret
7102df4e38  cbz x24,0x7102df4f3c
7102df4e3c  ldr x8,[x24, #0xd8]
7102df4e40  str q2,[sp]
7102df4e44  cbnz x8,0x7102df4e70
7102df4e48  add x0,x24,#0x90
7102df4e4c  mov x1,xzr
7102df4e50  bl 0x71026533a0
7102df4e54  mov x8,x0
7102df4e58  ldr x0,[x24, #0xd8]
7102df4e5c  str x8,[x24, #0xd8]
7102df4e60  cbz x0,0x7102df4e70
7102df4e64  ldr x8,[x0]
7102df4e68  ldr x8,[x8, #0x8]
7102df4e6c  blr x8
7102df4e70  cmp x24,#0x0
7102df4e74  cset w25,eq
7102df4e78  b 0x7102df4f4c
7102df4e7c  str x8,[x19, #0x18]
7102df4e80  cbz x8,0x7102df4ed4
7102df4e84  add x0,x8,#0x108
7102df4e88  mov w9,#0x1
7102df4e8c  strb w9,[x8, #0x110]
7102df4e90  bl 0x71025e9d50
7102df4e94  ldr x8,[x19, #0x18]
7102df4e98  cbz x8,0x7102df4d50
7102df4e9c  ldrb w9,[x8, #0xe0]
7102df4ea0  cbz w9,0x7102df4eb0
7102df4ea4  ldr x9,[x8, #0xc8]
7102df4ea8  cbz x9,0x7102df4eb0
7102df4eac  strh wzr,[x9, #0x30]
7102df4eb0  ldr x9,[x8, #0xd8]
7102df4eb4  cbz x9,0x7102df4ebc
7102df4eb8  strb wzr,[x9, #0x21]
7102df4ebc  ldrb w9,[x8, #0xe0]
7102df4ec0  cbz w9,0x7102df4ed0
7102df4ec4  ldr x8,[x8, #0xb0]
7102df4ec8  mov w9,#0x1
7102df4ecc  strb w9,[x8, #0x10]
7102df4ed0  ldr x8,[x19, #0x18]
7102df4ed4  cbz x8,0x7102df4d50
7102df4ed8  ldrb w9,[x8, #0xe0]
7102df4edc  cbz w9,0x7102df4ef0
7102df4ee0  ldr x9,[x8, #0xc8]
7102df4ee4  cbz x9,0x7102df4ef0
7102df4ee8  mov w10,#0x101
7102df4eec  strh w10,[x9, #0x32]
7102df4ef0  ldr x8,[x8, #0xd8]
7102df4ef4  cbz x8,0x7102df4f00
7102df4ef8  mov w9,#0x1
7102df4efc  strb w9,[x8, #0x22]
7102df4f00  ldr x20,[x19, #0x18]
7102df4f04  cbz x20,0x7102df4d50
7102df4f08  ldr x8,[x20, #0xd8]
7102df4f0c  cbnz x8,0x7102df4d50
7102df4f10  add x0,x20,#0x90
7102df4f14  mov x1,xzr
7102df4f18  bl 0x71026533a0
7102df4f1c  mov x8,x0
7102df4f20  ldr x0,[x20, #0xd8]
7102df4f24  str x8,[x20, #0xd8]
7102df4f28  cbz x0,0x7102df4d50
7102df4f2c  ldr x8,[x0]
7102df4f30  ldr x8,[x8, #0x8]
7102df4f34  blr x8
7102df4f38  b 0x7102df4d50
7102df4f3c  cmp x24,#0x0
7102df4f40  cset w25,eq
7102df4f44  cbz x24,0x7102df4cec
7102df4f48  str q2,[sp]
7102df4f4c  ldr x20,[x24, #0xd8]
7102df4f50  ldr x8,[x20]
7102df4f54  ldr x8,[x8, #0x10]
7102df4f58  mov x0,x20
7102df4f5c  blr x8
7102df4f60  ldr x8,[x20, #0x8]
7102df4f64  ldrb w9,[x8, #0xa8]
7102df4f68  cbz w9,0x7102df4fb8
7102df4f6c  ldr x0,[x8, #0x48]
7102df4f70  ldr x8,[x0]
7102df4f74  ldr x8,[x8, #0x10]
7102df4f78  mov w1,wzr
7102df4f7c  blr x8
7102df4f80  ldr x8,[x20, #0x8]
7102df4f84  ldrb w9,[x8, #0xa8]
7102df4f88  cbz w9,0x7102df4fb8
7102df4f8c  ldr x21,[x8, #0x48]
7102df4f90  ldr x8,[x21]
7102df4f94  ldr x8,[x8, #0x10]
7102df4f98  mov w1,#0x1
7102df4f9c  mov x0,x21
7102df4fa0  blr x8
7102df4fa4  ldr x8,[x21]
7102df4fa8  ldr x8,[x8, #0x10]
7102df4fac  mov w1,#0x2
7102df4fb0  mov x0,x21
7102df4fb4  blr x8
7102df4fb8  ldr q2,[sp]
7102df4fbc  strb wzr,[x20, #0x20]
7102df4fc0  tbnz w25,#0x0,0x7102df4cec
7102df4fc4  ldr x8,[x24, #0xd8]
7102df4fc8  cbz x8,0x7102df4ff8
7102df4fcc  ldr x8,[x8, #0x8]
7102df4fd0  ldr x0,[x8, #0x8]
7102df4fd4  ldr x8,[x0]
7102df4fd8  ldr x8,[x8, #0x18]
7102df4fdc  adrp x1,0x7104420000
7102df4fe0  add x1,x1,#0x767
7102df4fe4  blr x8
7102df4fe8  mov w20,w0
7102df4fec  ldr x8,[x24, #0xd8]
7102df4ff0  cbnz x8,0x7102df5004
7102df4ff4  b 0x7102df504c
7102df4ff8  mov w20,#0xffffffff
7102df4ffc  ldr x8,[x24, #0xd8]
7102df5000  cbz x8,0x7102df504c
7102df5004  ldr x8,[x8, #0x8]
7102df5008  ldr x0,[x8, #0x8]
7102df500c  ldr x8,[x0]
7102df5010  ldr x8,[x8, #0x10]
7102df5014  blr x8
7102df5018  cmp w0,w20
7102df501c  b.ls 0x7102df504c
7102df5020  ldr x8,[x24, #0xd8]
7102df5024  ldr x8,[x8, #0x8]
7102df5028  ldr x0,[x8, #0x48]
7102df502c  ldr x8,[x0]
7102df5030  ldr x8,[x8, #0x38]
7102df5034  mov w1,wzr
7102df5038  blr x8
7102df503c  mov w8,w20
7102df5040  add x8,x1,x8, LSL #0x6
7102df5044  add x8,x8,#0x30
7102df5048  b 0x7102df5060
7102df504c  ldr x0,[x24, #0x90]
7102df5050  ldr x8,[x0]
7102df5054  ldr x8,[x8, #0x158]
7102df5058  blr x8
7102df505c  add x8,x0,#0x30
7102df5060  ldr q2,[x8]
7102df5064  b 0x7102df4cec
