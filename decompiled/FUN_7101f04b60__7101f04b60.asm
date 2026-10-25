// addr:      7101f04b60
// offset:    0x1f04b60
// name:      FUN_7101f04b60
// mangled:   
// size:      1160

7101f04b60  sub sp,sp,#0x50
7101f04b64  str x21,[sp, #0x20]
7101f04b68  stp x20,x19,[sp, #0x30]
7101f04b6c  stp x29,x30,[sp, #0x40]
7101f04b70  add x29,sp,#0x40
7101f04b74  ldr x8,[x0, #0x2a8]
7101f04b78  ldr w8,[x8, #0xf0]
7101f04b7c  mov x19,x0
7101f04b80  cmn w8,#0x1
7101f04b84  b.eq 0x7101f04dd4
7101f04b88  ldr x8,[x19, #0x2a0]
7101f04b8c  add x0,x8,#0x118
7101f04b90  adrp x1,0x71042c5000
7101f04b94  add x1,x1,#0x631
7101f04b98  add x8,sp,#0x10
7101f04b9c  bl 0x7103776640
7101f04ba0  adrp x1,0x7104338000
7101f04ba4  add x1,x1,#0xd31
7101f04ba8  mov x8,sp
7101f04bac  add x0,sp,#0x10
7101f04bb0  bl 0x7103776910
7101f04bb4  adrp x1,0x7104433000
7101f04bb8  add x1,x1,#0x91a
7101f04bbc  mov x0,sp
7101f04bc0  bl 0x710377a120
7101f04bc4  ldr x0,[sp, #0x8]
7101f04bc8  adrp x21,0x710523d000
7101f04bcc  add x21,x21,#0x9a8
7101f04bd0  stp x21,xzr,[sp]
7101f04bd4  cbz x0,0x7101f04bdc
7101f04bd8  bl 0x710392eb40
7101f04bdc  ldr x20,[sp, #0x18]
7101f04be0  adrp x8,0x710523d000
7101f04be4  add x8,x8,#0x988
7101f04be8  stp x8,xzr,[sp, #0x10]
7101f04bec  cbz x20,0x7101f04c08
7101f04bf0  ldr x0,[x20, #0x18]
7101f04bf4  stp x21,xzr,[x20, #0x10]
7101f04bf8  cbz x0,0x7101f04c00
7101f04bfc  bl 0x710392eb40
7101f04c00  mov x0,x20
7101f04c04  bl 0x710392eb40
7101f04c08  adrp x8,0x7105314000
7101f04c0c  add x8,x8,#0x4d8
7101f04c10  ldarb w9,[x8]
7101f04c14  tbz w9,#0x0,0x7101f04f10
7101f04c18  ldr w10,[x19]
7101f04c1c  ldarb w8,[x8]
7101f04c20  adrp x9,0x710530a000
7101f04c24  add x9,x9,#0x9c8
7101f04c28  mov w11,#0x1428
7101f04c2c  add x11,x9,x11
7101f04c30  cmp w10,#0x0
7101f04c34  csel x20,x9,x11,eq
7101f04c38  tbz w8,#0x0,0x7101f04f5c
7101f04c3c  adrp x8,0x710530a000
7101f04c40  ldrb w10,[x8, #0x975]
7101f04c44  ldr x8,[x19, #0x2a0]
7101f04c48  ldr w9,[x8, #0x130]
7101f04c4c  cmp w10,#0x2
7101f04c50  b.eq 0x7101f04ccc
7101f04c54  ldrh w10,[x20, #0x4a]
7101f04c58  cbnz w10,0x7101f04ccc
7101f04c5c  cmp w9,#0x2
7101f04c60  b.eq 0x7101f04dd4
7101f04c64  mov w10,#0xffffffff
7101f04c68  cmp w9,#0x3
7101f04c6c  str wzr,[x8, #0x104]
7101f04c70  stp xzr,xzr,[x8, #0x18]
7101f04c74  stur xzr,[x8, #0xfc]
7101f04c78  stur xzr,[x8, #0xf4]
7101f04c7c  stur xzr,[x8, #0xec]
7101f04c80  stur xzr,[x8, #0xe4]
7101f04c84  stur xzr,[x8, #0xdc]
7101f04c88  stur xzr,[x8, #0xd4]
7101f04c8c  stur xzr,[x8, #0xcc]
7101f04c90  stur xzr,[x8, #0xc4]
7101f04c94  stur xzr,[x8, #0xbc]
7101f04c98  str x10,[x8, #0x108]
7101f04c9c  str w10,[x8, #0x110]
7101f04ca0  strb wzr,[x8, #0x114]
7101f04ca4  str wzr,[x8, #0xb8]
7101f04ca8  b.eq 0x7101f04d9c
7101f04cac  cmp w9,#0x1
7101f04cb0  b.eq 0x7101f04d40
7101f04cb4  cbnz w9,0x7101f04db8
7101f04cb8  mov w9,#0x1
7101f04cbc  str w9,[x8, #0x104]
7101f04cc0  mov w9,#0x4
7101f04cc4  str w9,[x8, #0xbc]
7101f04cc8  b 0x7101f04db8
7101f04ccc  cmp w9,#0x3
7101f04cd0  b.eq 0x7101f04dd4
7101f04cd4  mov w10,#0xffffffff
7101f04cd8  cmp w9,#0x2
7101f04cdc  str wzr,[x8, #0x104]
7101f04ce0  stp xzr,xzr,[x8, #0x18]
7101f04ce4  stur xzr,[x8, #0xfc]
7101f04ce8  stur xzr,[x8, #0xf4]
7101f04cec  stur xzr,[x8, #0xec]
7101f04cf0  stur xzr,[x8, #0xe4]
7101f04cf4  stur xzr,[x8, #0xdc]
7101f04cf8  stur xzr,[x8, #0xd4]
7101f04cfc  stur xzr,[x8, #0xcc]
7101f04d00  stur xzr,[x8, #0xc4]
7101f04d04  stur xzr,[x8, #0xbc]
7101f04d08  str x10,[x8, #0x108]
7101f04d0c  str w10,[x8, #0x110]
7101f04d10  strb wzr,[x8, #0x114]
7101f04d14  str wzr,[x8, #0xb8]
7101f04d18  b.eq 0x7101f04d58
7101f04d1c  cmp w9,#0x1
7101f04d20  b.eq 0x7101f04d78
7101f04d24  cbnz w9,0x7101f04d84
7101f04d28  mov x9,#0x6
7101f04d2c  movk x9,#0x2, LSL #32
7101f04d30  stur x9,[x8, #0xbc]
7101f04d34  mov w9,#0x2
7101f04d38  str w9,[x8, #0x104]
7101f04d3c  b 0x7101f04d84
7101f04d40  mov x9,#0x4
7101f04d44  movk x9,#0x3, LSL #32
7101f04d48  stur x9,[x8, #0xbc]
7101f04d4c  mov w9,#0x2
7101f04d50  str w9,[x8, #0x104]
7101f04d54  b 0x7101f04db8
7101f04d58  mov x9,#0x6
7101f04d5c  movk x9,#0x2, LSL #32
7101f04d60  orr w10,wzr,#0x3
7101f04d64  str w10,[x8, #0x104]
7101f04d68  stur x9,[x8, #0xbc]
7101f04d6c  mov w9,#0x5
7101f04d70  str w9,[x8, #0xc4]
7101f04d74  b 0x7101f04d84
7101f04d78  str w9,[x8, #0x104]
7101f04d7c  orr w9,wzr,#0x6
7101f04d80  str w9,[x8, #0xbc]
7101f04d84  ldrsw x9,[x8, #0x134]
7101f04d88  cmp w9,#0x2
7101f04d8c  b.cs 0x7101f04fdc
7101f04d90  add x9,x8,x9, LSL #0x2
7101f04d94  orr w10,wzr,#0x3
7101f04d98  b 0x7101f04dcc
7101f04d9c  mov x9,#0x4
7101f04da0  movk x9,#0x3, LSL #32
7101f04da4  orr w10,wzr,#0x3
7101f04da8  str w10,[x8, #0x104]
7101f04dac  stur x9,[x8, #0xbc]
7101f04db0  orr w9,wzr,#0x7
7101f04db4  str w9,[x8, #0xc4]
7101f04db8  ldrsw x9,[x8, #0x134]
7101f04dbc  cmp w9,#0x2
7101f04dc0  b.cs 0x7101f04fdc
7101f04dc4  add x9,x8,x9, LSL #0x2
7101f04dc8  mov w10,#0x2
7101f04dcc  str w10,[x9, #0x128]
7101f04dd0  str w10,[x8, #0x130]
7101f04dd4  ldrsw x8,[x19, #0x1f4]
7101f04dd8  cmp w8,#0x13
7101f04ddc  b.cs 0x7101f04fdc
7101f04de0  add x8,x19,x8, LSL #0x2
7101f04de4  str wzr,[x8, #0x1a8]
7101f04de8  adrp x20,0x7105328000
7101f04dec  ldr x8,[x20, #0xe18]
7101f04df0  ldr x8,[x8]
7101f04df4  ldr w8,[x8, #0x39c]
7101f04df8  cbz w8,0x7101f04e28
7101f04dfc  ldr w8,[x19, #0x1f4]
7101f04e00  cmp w8,#0x11
7101f04e04  b.gt 0x7101f04efc
7101f04e08  add w8,w8,#0x1
7101f04e0c  cmp w8,#0x13
7101f04e10  str w8,[x19, #0x1f4]
7101f04e14  b.cs 0x7101f04fdc
7101f04e18  add x8,x19,w8, SXTW  #0x2
7101f04e1c  mov w9,#0x14
7101f04e20  str w9,[x8, #0x1a8]
7101f04e24  b 0x7101f04efc
7101f04e28  adrp x8,0x7105314000
7101f04e2c  add x8,x8,#0x4d8
7101f04e30  ldarb w8,[x8]
7101f04e34  tbz w8,#0x0,0x7101f04f9c
7101f04e38  adrp x8,0x710530a000
7101f04e3c  ldrb w8,[x8, #0x976]
7101f04e40  cbz w8,0x7101f04efc
7101f04e44  ldr w10,[x19]
7101f04e48  cmp w10,#0x2
7101f04e4c  b.cs 0x7101f04fdc
7101f04e50  ldr x11,[x19, #0x238]
7101f04e54  ldr x8,[x19, #0x230]
7101f04e58  cmp x11,x8
7101f04e5c  b.eq 0x7101f04fe0
7101f04e60  ldr x12,[x20, #0xe18]
7101f04e64  ldr x12,[x12]
7101f04e68  mov w13,#0x1b8
7101f04e6c  madd x10,x10,x13,x12
7101f04e70  ldrsw x10,[x10, #0x2c]
7101f04e74  mov x9,xzr
7101f04e78  cmp w10,w9
7101f04e7c  b.eq 0x7101f04e98
7101f04e80  lsl x11,x9,#0x4
7101f04e84  ldr x8,[x8, x11, LSL #0x0]
7101f04e88  ldr x8,[x8]
7101f04e8c  strb wzr,[x8, #0x274]
7101f04e90  ldr x11,[x19, #0x238]
7101f04e94  ldr x8,[x19, #0x230]
7101f04e98  sub x12,x11,x8
7101f04e9c  add w9,w9,#0x1
7101f04ea0  asr x12,x12,#0x4
7101f04ea4  cmp x12,x9
7101f04ea8  b.hi 0x7101f04e78
7101f04eac  cmp x12,x10
7101f04eb0  b.ls 0x7101f04fe0
7101f04eb4  lsl x9,x10,#0x4
7101f04eb8  ldr x8,[x8, x9, LSL #0x0]
7101f04ebc  ldr x20,[x8]
7101f04ec0  ldr x8,[x20, #0x238]
7101f04ec4  ldr x1,[x8]
7101f04ec8  cbz x1,0x7101f04efc
7101f04ecc  ldr x19,[x1, #0x18]
7101f04ed0  cbz x19,0x7101f04efc
7101f04ed4  mov x0,x19
7101f04ed8  bl 0x7100058290
7101f04edc  ldr x8,[x20, #0x238]
7101f04ee0  ldr x1,[x8]
7101f04ee4  mov x0,x19
7101f04ee8  ldp x29,x30,[sp, #0x40]
7101f04eec  ldr x21,[sp, #0x20]
7101f04ef0  ldp x20,x19,[sp, #0x30]
7101f04ef4  add sp,sp,#0x50
7101f04ef8  b 0x7100058250
7101f04efc  ldp x29,x30,[sp, #0x40]
7101f04f00  ldr x21,[sp, #0x20]
7101f04f04  ldp x20,x19,[sp, #0x30]
7101f04f08  add sp,sp,#0x50
7101f04f0c  ret
7101f04f10  adrp x0,0x7105314000
7101f04f14  add x0,x0,#0x4d8
7101f04f18  mov x20,x8
7101f04f1c  bl 0x71039c06b0
7101f04f20  mov x8,x20
7101f04f24  cbz w0,0x7101f04c18
7101f04f28  bl 0x7101764000
7101f04f2c  adrp x0,0x7101763000
7101f04f30  add x0,x0,#0xc40
7101f04f34  adrp x1,0x71052c5000
7101f04f38  add x1,x1,#0x180
7101f04f3c  adrp x2,0x7104f17000
7101f04f40  add x2,x2,#0x0
7101f04f44  bl 0x71000001c0
7101f04f48  adrp x0,0x7105314000
7101f04f4c  add x0,x0,#0x4d8
7101f04f50  bl 0x71039c06c0
7101f04f54  mov x8,x20
7101f04f58  b 0x7101f04c18
7101f04f5c  adrp x0,0x7105314000
7101f04f60  add x0,x0,#0x4d8
7101f04f64  bl 0x71039c06b0
7101f04f68  cbz w0,0x7101f04c3c
7101f04f6c  bl 0x7101764000
7101f04f70  adrp x0,0x7101763000
7101f04f74  add x0,x0,#0xc40
7101f04f78  adrp x1,0x71052c5000
7101f04f7c  add x1,x1,#0x180
7101f04f80  adrp x2,0x7104f17000
7101f04f84  add x2,x2,#0x0
7101f04f88  bl 0x71000001c0
7101f04f8c  adrp x0,0x7105314000
7101f04f90  add x0,x0,#0x4d8
7101f04f94  bl 0x71039c06c0
7101f04f98  b 0x7101f04c3c
7101f04f9c  adrp x0,0x7105314000
7101f04fa0  add x0,x0,#0x4d8
7101f04fa4  bl 0x71039c06b0
7101f04fa8  cbz w0,0x7101f04e38
7101f04fac  bl 0x7101764000
7101f04fb0  adrp x0,0x7101763000
7101f04fb4  add x0,x0,#0xc40
7101f04fb8  adrp x1,0x71052c5000
7101f04fbc  add x1,x1,#0x180
7101f04fc0  adrp x2,0x7104f17000
7101f04fc4  add x2,x2,#0x0
7101f04fc8  bl 0x71000001c0
7101f04fcc  adrp x0,0x7105314000
7101f04fd0  add x0,x0,#0x4d8
7101f04fd4  bl 0x71039c06c0
7101f04fd8  b 0x7101f04e38
7101f04fdc  bl 0x71039c2650
7101f04fe0  add x0,x19,#0x230
7101f04fe4  bl 0x71039c1330
