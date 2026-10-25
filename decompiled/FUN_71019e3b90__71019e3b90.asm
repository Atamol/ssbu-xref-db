// addr:      71019e3b90
// offset:    0x19e3b90
// name:      FUN_71019e3b90
// mangled:   
// size:      1304

71019e3b90  stp x26,x25,[sp, #-0x50]!
71019e3b94  stp x24,x23,[sp, #0x10]
71019e3b98  stp x22,x21,[sp, #0x20]
71019e3b9c  stp x20,x19,[sp, #0x30]
71019e3ba0  stp x29,x30,[sp, #0x40]
71019e3ba4  add x29,sp,#0x40
71019e3ba8  ldr x24,[x0, #0x80]
71019e3bac  mov x19,x0
71019e3bb0  mov x0,x24
71019e3bb4  ldr x8,[x0, #0x10]!
71019e3bb8  ldr x9,[x24, #0x18]
71019e3bbc  cmp x9,x8
71019e3bc0  b.eq 0x71019e40a4
71019e3bc4  ldr x8,[x8]
71019e3bc8  ldr x8,[x8]
71019e3bcc  ldr x0,[x8]
71019e3bd0  mov x21,x2
71019e3bd4  mov x20,x1
71019e3bd8  mov w2,#0x1000
71019e3bdc  mov w1,wzr
71019e3be0  mov x23,#-0x3f00000000000000
71019e3be4  bl 0x7103775dc0
71019e3be8  str x20,[x24, #0xf0]
71019e3bec  strb w21,[x24, #0xf8]
71019e3bf0  adrp x8,0x710532f000
71019e3bf4  ldr x8,[x8, #0x730]
71019e3bf8  ldr x22,[x8, #0x8]
71019e3bfc  ldr x21,[x22, #0x168]
71019e3c00  mov x1,#0xfb2b
71019e3c04  movk x1,#0xfdfd, LSL #16
71019e3c08  movk x1,#0x13, LSL #32
71019e3c0c  mov x0,x21
71019e3c10  bl 0x71032631a0
71019e3c14  and x26,x20,#-0x100000000000000
71019e3c18  and x25,x20,#0xffffffffff
71019e3c1c  and x8,x0,#0xffffffffff
71019e3c20  cmp x26,x23
71019e3c24  b.ne 0x71019e3cb4
71019e3c28  cbz x25,0x71019e3cb4
71019e3c2c  and x9,x0,#-0x100000000000000
71019e3c30  cmp x9,x23
71019e3c34  ccmp x8,#0x0,#0x4,eq
71019e3c38  eor x8,x0,x20
71019e3c3c  and x8,x8,#0xffffffffff
71019e3c40  ccmp x8,#0x0,#0x0,ne
71019e3c44  b.eq 0x71019e3cc4
71019e3c48  mov x1,#0x1f77
71019e3c4c  movk x1,#0xd706, LSL #16
71019e3c50  movk x1,#0x15, LSL #32
71019e3c54  mov x0,x21
71019e3c58  bl 0x71032631a0
71019e3c5c  and x8,x0,#-0x100000000000000
71019e3c60  cmp x8,x23
71019e3c64  b.ne 0x71019e3c7c
71019e3c68  and x8,x0,#0xffffffffff
71019e3c6c  cbz x8,0x71019e3c7c
71019e3c70  eor x8,x0,x20
71019e3c74  tst x8,#0xffffffffff
71019e3c78  b.eq 0x71019e3cf4
71019e3c7c  mov x1,#0x1d87
71019e3c80  movk x1,#0x57ab, LSL #16
71019e3c84  movk x1,#0x12, LSL #32
71019e3c88  mov x0,x21
71019e3c8c  bl 0x71032631a0
71019e3c90  and x9,x0,#-0x100000000000000
71019e3c94  and x8,x0,#0xffffffffff
71019e3c98  cmp x9,x23
71019e3c9c  b.ne 0x71019e3d18
71019e3ca0  cbz x8,0x71019e3d18
71019e3ca4  eor x8,x0,x20
71019e3ca8  tst x8,#0xffffffffff
71019e3cac  cset w8,eq
71019e3cb0  b 0x71019e3d48
71019e3cb4  and x9,x0,#-0x100000000000000
71019e3cb8  cmp x9,x23
71019e3cbc  ccmp x8,#0x0,#0x4,eq
71019e3cc0  b.ne 0x71019e3ccc
71019e3cc4  mov w23,#0x1
71019e3cc8  b 0x71019e3d54
71019e3ccc  mov x1,#0x1f77
71019e3cd0  movk x1,#0xd706, LSL #16
71019e3cd4  movk x1,#0x15, LSL #32
71019e3cd8  mov x0,x21
71019e3cdc  bl 0x71032631a0
71019e3ce0  and x9,x0,#-0x100000000000000
71019e3ce4  and x8,x0,#0xffffffffff
71019e3ce8  cmp x9,x23
71019e3cec  ccmp x8,#0x0,#0x4,eq
71019e3cf0  b.ne 0x71019e3cfc
71019e3cf4  mov w23,#0x2
71019e3cf8  b 0x71019e3d54
71019e3cfc  mov x1,#0x1d87
71019e3d00  movk x1,#0x57ab, LSL #16
71019e3d04  movk x1,#0x12, LSL #32
71019e3d08  mov x0,x21
71019e3d0c  bl 0x71032631a0
71019e3d10  and x8,x0,#0xffffffffff
71019e3d14  and x9,x0,#-0x100000000000000
71019e3d18  cmp x26,x23
71019e3d1c  cset w10,eq
71019e3d20  cmp x25,#0x0
71019e3d24  cset w11,ne
71019e3d28  cmp x8,#0x0
71019e3d2c  cset w8,ne
71019e3d30  cmp x9,x23
71019e3d34  cset w9,eq
71019e3d38  and w10,w10,w11
71019e3d3c  and w8,w8,w9
71019e3d40  eor w8,w8,w10
71019e3d44  eor w8,w8,#0x1
71019e3d48  cmp w8,#0x0
71019e3d4c  orr w8,wzr,#0x3
71019e3d50  csel x23,x8,xzr,ne
71019e3d54  ldr x20,[x24, #0x40]
71019e3d58  ldr x8,[x20]
71019e3d5c  ldr x21,[x8]
71019e3d60  str wzr,[x8, #0x10]
71019e3d64  ldr x8,[x21, #0x10]
71019e3d68  mov w25,#0x48
71019e3d6c  str x21,[x8]
71019e3d70  str w25,[x8, #0x8]
71019e3d74  ldp x9,x8,[x21, #0x10]
71019e3d78  add x10,x9,#0x10
71019e3d7c  str x10,[x21, #0x10]
71019e3d80  ldr x10,[x8, #0xc8]
71019e3d84  str x9,[x21, #0x10]
71019e3d88  cmp x10,x21
71019e3d8c  b.eq 0x71019e3db0
71019e3d90  adrp x1,0x71042f7000
71019e3d94  add x1,x1,#0xbd4
71019e3d98  mov x0,x21
71019e3d9c  bl 0x71038f4b20
71019e3da0  orr w1,wzr,#0xfffffffe
71019e3da4  mov x0,x21
71019e3da8  bl 0x71038f4fc0
71019e3dac  b 0x71019e3e28
71019e3db0  ldr x8,[x8, #0x40]
71019e3db4  ldr w9,[x8, #0xc]
71019e3db8  cmp w9,#0x2
71019e3dbc  b.cc 0x71019e3dcc
71019e3dc0  ldr x8,[x8, #0x10]
71019e3dc4  add x1,x8,#0x10
71019e3dc8  b 0x71019e3e18
71019e3dcc  ldr x9,[x8, #0x18]
71019e3dd0  ldrb w8,[x8, #0xb]
71019e3dd4  mov w10,#0xffffffff
71019e3dd8  lsl x8,x10,x8
71019e3ddc  mvn w8,w8
71019e3de0  and x8,x8,#0x2
71019e3de4  add x1,x9,x8, LSL #0x5
71019e3de8  adrp x8,0x7104862000
71019e3dec  add x8,x8,#0x960
71019e3df0  ldr w9,[x1, #0x18]
71019e3df4  cmp w9,#0x13
71019e3df8  b.ne 0x71019e3e08
71019e3dfc  ldr x9,[x1, #0x10]
71019e3e00  cmp x9,#0x2
71019e3e04  b.eq 0x71019e3e18
71019e3e08  ldrsw x9,[x1, #0x1c]
71019e3e0c  add x1,x1,x9, LSL #0x5
71019e3e10  cbnz w9,0x71019e3df0
71019e3e14  mov x1,x8
71019e3e18  adrp x2,0x71042f7000
71019e3e1c  add x2,x2,#0xbd4
71019e3e20  mov x0,x21
71019e3e24  bl 0x71038f4d40
71019e3e28  ldr x9,[x21, #0x10]
71019e3e2c  sub x8,x9,#0x10
71019e3e30  adrp x26,0x7104862000
71019e3e34  add x26,x26,#0x960
71019e3e38  cmp x8,x26
71019e3e3c  b.eq 0x71019e3e94
71019e3e40  ldur w9,[x9, #-0x8]
71019e3e44  and w9,w9,#0xf
71019e3e48  cmp w9,#0x6
71019e3e4c  b.ne 0x71019e3e94
71019e3e50  ldr x8,[x20]
71019e3e54  ldr x8,[x8]
71019e3e58  ldr x9,[x8, #0x10]
71019e3e5c  mov w10,#0x13
71019e3e60  str w10,[x9, #0x8]
71019e3e64  str x23,[x9]
71019e3e68  ldr x9,[x8, #0x10]
71019e3e6c  add x9,x9,#0x10
71019e3e70  str x9,[x8, #0x10]
71019e3e74  ldr x8,[x20]
71019e3e78  ldr w9,[x8, #0x10]
71019e3e7c  add w9,w9,#0x1
71019e3e80  mov x0,x20
71019e3e84  mov w1,wzr
71019e3e88  str w9,[x8, #0x10]
71019e3e8c  bl 0x7103377130
71019e3e90  b 0x71019e3e98
71019e3e94  str x8,[x21, #0x10]
71019e3e98  ldrb w21,[x24, #0xf8]
71019e3e9c  ldr x0,[x22, #0x258]
71019e3ea0  mov w1,w21
71019e3ea4  bl 0x710328cb60
71019e3ea8  ldr x20,[x24, #0x40]
71019e3eac  ldr x8,[x20]
71019e3eb0  ldr x23,[x8]
71019e3eb4  str wzr,[x8, #0x10]
71019e3eb8  ldr x8,[x23, #0x10]
71019e3ebc  str x23,[x8]
71019e3ec0  str w25,[x8, #0x8]
71019e3ec4  ldp x9,x8,[x23, #0x10]
71019e3ec8  add x10,x9,#0x10
71019e3ecc  str x10,[x23, #0x10]
71019e3ed0  ldr x10,[x8, #0xc8]
71019e3ed4  mov w22,w0
71019e3ed8  cmp x10,x23
71019e3edc  str x9,[x23, #0x10]
71019e3ee0  b.eq 0x71019e3f04
71019e3ee4  adrp x1,0x71043ad000
71019e3ee8  add x1,x1,#0x10b
71019e3eec  mov x0,x23
71019e3ef0  bl 0x71038f4b20
71019e3ef4  orr w1,wzr,#0xfffffffe
71019e3ef8  mov x0,x23
71019e3efc  bl 0x71038f4fc0
71019e3f00  b 0x71019e3f7c
71019e3f04  ldr x8,[x8, #0x40]
71019e3f08  ldr w9,[x8, #0xc]
71019e3f0c  cmp w9,#0x2
71019e3f10  b.cc 0x71019e3f20
71019e3f14  ldr x8,[x8, #0x10]
71019e3f18  add x1,x8,#0x10
71019e3f1c  b 0x71019e3f6c
71019e3f20  ldr x9,[x8, #0x18]
71019e3f24  ldrb w8,[x8, #0xb]
71019e3f28  mov w10,#0xffffffff
71019e3f2c  lsl x8,x10,x8
71019e3f30  mvn w8,w8
71019e3f34  and x8,x8,#0x2
71019e3f38  add x1,x9,x8, LSL #0x5
71019e3f3c  adrp x8,0x7104862000
71019e3f40  add x8,x8,#0x960
71019e3f44  ldr w9,[x1, #0x18]
71019e3f48  cmp w9,#0x13
71019e3f4c  b.ne 0x71019e3f5c
71019e3f50  ldr x9,[x1, #0x10]
71019e3f54  cmp x9,#0x2
71019e3f58  b.eq 0x71019e3f6c
71019e3f5c  ldrsw x9,[x1, #0x1c]
71019e3f60  add x1,x1,x9, LSL #0x5
71019e3f64  cbnz w9,0x71019e3f44
71019e3f68  mov x1,x8
71019e3f6c  adrp x2,0x71043ad000
71019e3f70  add x2,x2,#0x10b
71019e3f74  mov x0,x23
71019e3f78  bl 0x71038f4d40
71019e3f7c  ldr x9,[x23, #0x10]
71019e3f80  sub x8,x9,#0x10
71019e3f84  cmp x8,x26
71019e3f88  b.eq 0x71019e402c
71019e3f8c  ldur w9,[x9, #-0x8]
71019e3f90  and w9,w9,#0xf
71019e3f94  cmp w9,#0x6
71019e3f98  b.ne 0x71019e402c
71019e3f9c  ldr x9,[x20]
71019e3fa0  ldr x9,[x9]
71019e3fa4  ldr x11,[x9, #0x10]
71019e3fa8  sxtw x10,w22
71019e3fac  str x10,[x11]
71019e3fb0  mov w10,#0x13
71019e3fb4  str w10,[x11, #0x8]
71019e3fb8  ldr x11,[x9, #0x10]
71019e3fbc  add x11,x11,#0x10
71019e3fc0  str x11,[x9, #0x10]
71019e3fc4  ldr x9,[x20]
71019e3fc8  ldr w11,[x9, #0x10]
71019e3fcc  add w11,w11,#0x1
71019e3fd0  str w11,[x9, #0x10]
71019e3fd4  ldr x9,[x20]
71019e3fd8  mov w8,#0xaaab
71019e3fdc  movk w8,#0xaaaa, LSL #16
71019e3fe0  umull x8,w21,w8
71019e3fe4  lsr x8,x8,#0x21
71019e3fe8  add w8,w8,w8, LSL #0x1
71019e3fec  sub w8,w21,w8
71019e3ff0  mov x0,x20
71019e3ff4  mov w1,wzr
71019e3ff8  ldr x9,[x9]
71019e3ffc  ldr x11,[x9, #0x10]
71019e4000  str x8,[x11]
71019e4004  str w10,[x11, #0x8]
71019e4008  ldr x8,[x9, #0x10]
71019e400c  add x8,x8,#0x10
71019e4010  str x8,[x9, #0x10]
71019e4014  ldr x8,[x20]
71019e4018  ldr w9,[x8, #0x10]
71019e401c  add w9,w9,#0x1
71019e4020  str w9,[x8, #0x10]
71019e4024  bl 0x7103377130
71019e4028  b 0x71019e4030
71019e402c  str x8,[x23, #0x10]
71019e4030  ldr x8,[x24, #0x40]
71019e4034  ldr x0,[x8]
71019e4038  bl 0x7103376980
71019e403c  mov w8,#0xffffffff
71019e4040  add x0,x24,#0x48
71019e4044  str wzr,[x24, #0xdc]
71019e4048  str x8,[x24, #0xe0]
71019e404c  str w8,[x24, #0xe8]
71019e4050  mov w8,#0x1
71019e4054  stp xzr,xzr,[x24, #0x50]
71019e4058  stur xzr,[x24, #0xd4]
71019e405c  stur xzr,[x24, #0xcc]
71019e4060  stur xzr,[x24, #0xc4]
71019e4064  stur xzr,[x24, #0xbc]
71019e4068  stur xzr,[x24, #0xb4]
71019e406c  stur xzr,[x24, #0xac]
71019e4070  stur xzr,[x24, #0xa4]
71019e4074  stur xzr,[x24, #0x9c]
71019e4078  stur xzr,[x24, #0x94]
71019e407c  strb wzr,[x24, #0xec]
71019e4080  str w8,[x24, #0x90]
71019e4084  bl 0x71019e2fc0
71019e4088  strb wzr,[x19, #0x70]
71019e408c  ldp x29,x30,[sp, #0x40]
71019e4090  ldp x20,x19,[sp, #0x30]
71019e4094  ldp x22,x21,[sp, #0x20]
71019e4098  ldp x24,x23,[sp, #0x10]
71019e409c  ldp x26,x25,[sp], #0x50
71019e40a0  ret
71019e40a4  bl 0x71039c1330
