// addr:      7101ad6b90
// offset:    0x1ad6b90
// name:      FUN_7101ad6b90
// mangled:   
// size:      1084

7101ad6b90  sub sp,sp,#0x50
7101ad6b94  stp x24,x23,[sp, #0x10]
7101ad6b98  stp x22,x21,[sp, #0x20]
7101ad6b9c  stp x20,x19,[sp, #0x30]
7101ad6ba0  stp x29,x30,[sp, #0x40]
7101ad6ba4  add x29,sp,#0x40
7101ad6ba8  ldr w8,[x0, #0x164]
7101ad6bac  mov x19,x0
7101ad6bb0  cbz w8,0x7101ad6bd8
7101ad6bb4  ldr x8,[x19, #0x198]
7101ad6bb8  ldr w8,[x8, #0xe8]
7101ad6bbc  cbz w8,0x7101ad6c24
7101ad6bc0  ldp x29,x30,[sp, #0x40]
7101ad6bc4  ldp x20,x19,[sp, #0x30]
7101ad6bc8  ldp x22,x21,[sp, #0x20]
7101ad6bcc  ldp x24,x23,[sp, #0x10]
7101ad6bd0  add sp,sp,#0x50
7101ad6bd4  ret
7101ad6bd8  ldr x20,[x19, #0x40]
7101ad6bdc  ldr x8,[x20]
7101ad6be0  cbz x8,0x7101ad6de8
7101ad6be4  adrp x1,0x71042b2000
7101ad6be8  add x1,x1,#0xa84
7101ad6bec  add x0,sp,#0x8
7101ad6bf0  str xzr,[sp, #0x8]
7101ad6bf4  bl 0x71037aea50
7101ad6bf8  ldr x20,[x20]
7101ad6bfc  ldr x0,[x20]
7101ad6c00  cbz x0,0x7101ad6d98
7101ad6c04  ldr x8,[x0, #0x18]
7101ad6c08  ldr x8,[x8, #0x40]
7101ad6c0c  ldr w9,[x8, #0xc]
7101ad6c10  cmp w9,#0x2
7101ad6c14  b.cc 0x7101ad6d3c
7101ad6c18  ldr x8,[x8, #0x10]
7101ad6c1c  add x1,x8,#0x10
7101ad6c20  b 0x7101ad6d88
7101ad6c24  adrp x8,0x710532f000
7101ad6c28  ldr x8,[x8, #0x7e8]
7101ad6c2c  ldr x8,[x8, #0x8]
7101ad6c30  ldrb w9,[x8, #0x161]
7101ad6c34  cbz w9,0x7101ad6bc0
7101ad6c38  ldr w8,[x8, #0xe8]
7101ad6c3c  cmp w8,#0x2
7101ad6c40  b.ne 0x7101ad6bc0
7101ad6c44  mov x0,x19
7101ad6c48  ldr x8,[x0, #0x10]!
7101ad6c4c  ldr x9,[x0, #0x8]
7101ad6c50  sub x9,x9,x8
7101ad6c54  asr x9,x9,#0x3
7101ad6c58  cmp x9,#0x1
7101ad6c5c  b.ls 0x7101ad6fc4
7101ad6c60  ldr x8,[x8, #0x8]
7101ad6c64  ldr x8,[x8]
7101ad6c68  ldr x0,[x8]
7101ad6c6c  bl 0x7103775fa0
7101ad6c70  adrp x9,0x710593b000
7101ad6c74  ldr x9,[x9, #0x988]
7101ad6c78  ldr w8,[x19, #0x18c]
7101ad6c7c  mov w10,#0x1
7101ad6c80  lsl w8,w10,w8
7101ad6c84  mov x1,#0xf9ab
7101ad6c88  movk x1,#0xb148, LSL #16
7101ad6c8c  movk x1,#0xff13, LSL #32
7101ad6c90  movk x1,#0xd9ff, LSL #48
7101ad6c94  mov w2,#0x1
7101ad6c98  ldr x9,[x9, #0x8]
7101ad6c9c  ldr w10,[x9]
7101ad6ca0  bic w8,w10,w8
7101ad6ca4  str w8,[x9]
7101ad6ca8  adrp x8,0x710532f000
7101ad6cac  ldr x0,[x8, #0x8d0]
7101ad6cb0  bl 0x71033145d0
7101ad6cb4  adrp x20,0x7105314000
7101ad6cb8  ldr x8,[x20, #0x510]
7101ad6cbc  ldr x8,[x8]
7101ad6cc0  ldr x8,[x8, #0x1c8]
7101ad6cc4  ldr x8,[x8]
7101ad6cc8  ldr x8,[x8]
7101ad6ccc  ldrb w1,[x8, #0x3f0]
7101ad6cd0  cmp w1,#0x3
7101ad6cd4  b.eq 0x7101ad6d10
7101ad6cd8  adrp x8,0x710532f000
7101ad6cdc  ldr x8,[x8, #0x730]
7101ad6ce0  ldr x8,[x8, #0x8]
7101ad6ce4  ldr x0,[x8, #0x368]
7101ad6ce8  mov w2,wzr
7101ad6cec  bl 0x710329d690
7101ad6cf0  ldr x8,[x20, #0x510]
7101ad6cf4  ldr x9,[x8]
7101ad6cf8  ldr x9,[x9, #0x1c8]
7101ad6cfc  ldr x9,[x9]
7101ad6d00  ldr x9,[x9]
7101ad6d04  ldr w10,[x9, #0x3ec]
7101ad6d08  cmp w0,w10
7101ad6d0c  b.ls 0x7101ad6ea0
7101ad6d10  ldrb w8,[x19, #0x590]
7101ad6d14  cbz w8,0x7101ad6e88
7101ad6d18  ldrsw x8,[x19, #0x15c]
7101ad6d1c  cmp w8,#0x13
7101ad6d20  strb wzr,[x19, #0x590]
7101ad6d24  b.cs 0x7101ad6fc8
7101ad6d28  add x8,x19,x8, LSL #0x2
7101ad6d2c  mov w9,#0x8
7101ad6d30  str w9,[x8, #0x110]
7101ad6d34  strb wzr,[x19, #0x598]
7101ad6d38  b 0x7101ad6bc0
7101ad6d3c  ldr x9,[x8, #0x18]
7101ad6d40  ldrb w8,[x8, #0xb]
7101ad6d44  mov w10,#0xffffffff
7101ad6d48  lsl x8,x10,x8
7101ad6d4c  mvn w8,w8
7101ad6d50  and x8,x8,#0x2
7101ad6d54  add x1,x9,x8, LSL #0x5
7101ad6d58  adrp x8,0x7104862000
7101ad6d5c  add x8,x8,#0x960
7101ad6d60  ldr w9,[x1, #0x18]
7101ad6d64  cmp w9,#0x13
7101ad6d68  b.ne 0x7101ad6d78
7101ad6d6c  ldr x9,[x1, #0x10]
7101ad6d70  cmp x9,#0x2
7101ad6d74  b.eq 0x7101ad6d88
7101ad6d78  ldrsw x9,[x1, #0x1c]
7101ad6d7c  add x1,x1,x9, LSL #0x5
7101ad6d80  cbnz w9,0x7101ad6d60
7101ad6d84  mov x1,x8
7101ad6d88  adrp x2,0x710435b000
7101ad6d8c  add x2,x2,#0x1a7
7101ad6d90  bl 0x71038f4d40
7101ad6d94  ldr x0,[x20]
7101ad6d98  add x1,sp,#0x8
7101ad6d9c  bl 0x710372d940
7101ad6da0  ldr x21,[sp, #0x8]
7101ad6da4  cbz x21,0x7101ad6de8
7101ad6da8  ldp x8,x23,[x21, #0x8]
7101ad6dac  ldr w20,[x8]
7101ad6db0  mov x22,xzr
7101ad6db4  b 0x7101ad6dbc
7101ad6db8  add x22,x22,#0x1
7101ad6dbc  ldrb w8,[x23, x22, LSL ]
7101ad6dc0  cmp w8,#0x73
7101ad6dc4  b.eq 0x7101ad6dd0
7101ad6dc8  cbnz w8,0x7101ad6db8
7101ad6dcc  b 0x7101ad6df0
7101ad6dd0  ldr x24,[x21, #0x8]
7101ad6dd4  ldr x0,[x24, x22, LSL #0x3]
7101ad6dd8  cbz x0,0x7101ad6de0
7101ad6ddc  bl 0x710392eb40
7101ad6de0  str xzr,[x24, x22, LSL #0x3]
7101ad6de4  b 0x7101ad6db8
7101ad6de8  mov w20,wzr
7101ad6dec  b 0x7101ad6dfc
7101ad6df0  mov x0,x21
7101ad6df4  bl 0x710392eb40
7101ad6df8  str xzr,[sp, #0x8]
7101ad6dfc  mov x0,x19
7101ad6e00  ldr x8,[x0, #0x10]!
7101ad6e04  ldr x9,[x0, #0x8]
7101ad6e08  sub x9,x9,x8
7101ad6e0c  asr x9,x9,#0x3
7101ad6e10  cmp x9,#0x1
7101ad6e14  b.ls 0x7101ad6fc4
7101ad6e18  ldr x8,[x8, #0x8]
7101ad6e1c  ldr w2,[x19, #0x184]
7101ad6e20  mov w9,#0x4ffff
7101ad6e24  add w10,w9,#0x4b0, LSL #12
7101ad6e28  ldr x8,[x8]
7101ad6e2c  add x21,x0,#0x168
7101ad6e30  cmp w2,w10
7101ad6e34  b.le 0x7101ad6e40
7101ad6e38  mov w1,#0x9
7101ad6e3c  b 0x7101ad6f68
7101ad6e40  orr w10,w9,#0x200000
7101ad6e44  cmp w2,w10
7101ad6e48  b.le 0x7101ad6e54
7101ad6e4c  orr w1,wzr,#0x7
7101ad6e50  b 0x7101ad6f68
7101ad6e54  cmp w2,#0x200, LSL #12
7101ad6e58  b.lt 0x7101ad6e64
7101ad6e5c  mov w1,#0x5
7101ad6e60  b 0x7101ad6f68
7101ad6e64  orr w10,w9,#0x100000
7101ad6e68  cmp w2,w10
7101ad6e6c  b.le 0x7101ad6e78
7101ad6e70  orr w1,wzr,#0x6
7101ad6e74  b 0x7101ad6f68
7101ad6e78  cmp w2,#0x100, LSL #12
7101ad6e7c  b.lt 0x7101ad6ed0
7101ad6e80  mov w1,#0x4
7101ad6e84  b 0x7101ad6f68
7101ad6e88  ldrsw x8,[x19, #0x15c]
7101ad6e8c  cmp w8,#0x13
7101ad6e90  b.cs 0x7101ad6fc8
7101ad6e94  add x8,x19,x8, LSL #0x2
7101ad6e98  mov w9,#0x5
7101ad6e9c  b 0x7101ad6f44
7101ad6ea0  ldrb w9,[x9, #0x3f0]
7101ad6ea4  str w9,[x19, #0x57c]
7101ad6ea8  ldr x9,[x8]
7101ad6eac  ldr x9,[x9, #0x1c8]
7101ad6eb0  ldr x9,[x9]
7101ad6eb4  ldr x9,[x9]
7101ad6eb8  ldrb w10,[x9, #0x3f0]
7101ad6ebc  cmp w10,#0x3
7101ad6ec0  b.ne 0x7101ad6ee4
7101ad6ec4  add x8,x9,#0x3f0
7101ad6ec8  orr w9,wzr,#0x3
7101ad6ecc  b 0x7101ad6f28
7101ad6ed0  add w10,w9,#0xae, LSL #12
7101ad6ed4  cmp w2,w10
7101ad6ed8  b.le 0x7101ad6f10
7101ad6edc  mov w1,#0x8
7101ad6ee0  b 0x7101ad6f68
7101ad6ee4  str wzr,[x9, #0x3ec]
7101ad6ee8  ldr x8,[x8]
7101ad6eec  ldr x8,[x8, #0x1c8]
7101ad6ef0  ldr x8,[x8]
7101ad6ef4  ldr x9,[x8]
7101ad6ef8  add x8,x9,#0x3f0
7101ad6efc  ldrb w9,[x9, #0x3f0]
7101ad6f00  cmp w9,#0x2
7101ad6f04  b.hi 0x7101ad6f20
7101ad6f08  add w9,w9,#0x1
7101ad6f0c  b 0x7101ad6f28
7101ad6f10  cmp w2,w9
7101ad6f14  b.le 0x7101ad6f4c
7101ad6f18  mov w1,#0x2
7101ad6f1c  b 0x7101ad6f68
7101ad6f20  cmp w9,#0x3
7101ad6f24  b.ne 0x7101ad6f2c
7101ad6f28  strb w9,[x8]
7101ad6f2c  ldrsw x8,[x19, #0x15c]
7101ad6f30  cmp w8,#0x13
7101ad6f34  strb wzr,[x19, #0x598]
7101ad6f38  b.cs 0x7101ad6fc8
7101ad6f3c  add x8,x19,x8, LSL #0x2
7101ad6f40  orr w9,wzr,#0x7
7101ad6f44  str w9,[x8, #0x110]
7101ad6f48  b 0x7101ad6bc0
7101ad6f4c  cmp w2,#0x10, LSL #12
7101ad6f50  b.lt 0x7101ad6f5c
7101ad6f54  mov w1,#0x1
7101ad6f58  b 0x7101ad6f68
7101ad6f5c  cmp w2,#0x1
7101ad6f60  orr w9,wzr,#0x3
7101ad6f64  csel w1,w9,wzr,lt
7101ad6f68  ldr x0,[x8]
7101ad6f6c  bl 0x7103775dc0
7101ad6f70  orr w8,wzr,#0x30
7101ad6f74  smaddl x23,w20,w8,x19
7101ad6f78  mov x0,x21
7101ad6f7c  mov w1,wzr
7101ad6f80  add x22,x23,#0x1a0
7101ad6f84  bl 0x71032d6810
7101ad6f88  ldr x0,[x19, #0x198]
7101ad6f8c  mov x1,x22
7101ad6f90  mov w2,w20
7101ad6f94  bl 0x7101ad3b90
7101ad6f98  ldr w8,[x23, #0x1c0]
7101ad6f9c  str w8,[x19, #0x578]
7101ad6fa0  mov x0,x19
7101ad6fa4  mov w1,w20
7101ad6fa8  ldp x29,x30,[sp, #0x40]
7101ad6fac  ldp x20,x19,[sp, #0x30]
7101ad6fb0  mov w2,wzr
7101ad6fb4  ldp x22,x21,[sp, #0x20]
7101ad6fb8  ldp x24,x23,[sp, #0x10]
7101ad6fbc  add sp,sp,#0x50
7101ad6fc0  b 0x7101ad7870
7101ad6fc4  bl 0x71039c1330
7101ad6fc8  bl 0x71039c2650
