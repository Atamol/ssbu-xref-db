// addr:      7101f18c10
// offset:    0x1f18c10
// name:      FUN_7101f18c10
// mangled:   
// size:      960

7101f18c10  stp x28,x21,[sp, #-0x30]!
7101f18c14  stp x20,x19,[sp, #0x10]
7101f18c18  stp x29,x30,[sp, #0x20]
7101f18c1c  add x29,sp,#0x20
7101f18c20  sub sp,sp,#0x2, LSL #12
7101f18c24  sub sp,sp,#0x1a0
7101f18c28  mov w8,#0x56e5
7101f18c2c  ldrb w8,[x0, x8, LSL ]
7101f18c30  mov x19,x0
7101f18c34  cbz w8,0x7101f18c8c
7101f18c38  adrp x8,0x7105339000
7101f18c3c  ldr x20,[x8, #0xfd0]
7101f18c40  ldr w8,[x20, #0x48]
7101f18c44  cbz w8,0x7101f18f5c
7101f18c48  adrp x21,0x710533a000
7101f18c4c  ldr x8,[x21, #0x80]
7101f18c50  ldr x8,[x8]
7101f18c54  ldr x0,[x8, #0x8]
7101f18c58  bl 0x71036ec100
7101f18c5c  ldr x0,[x20, #0xe0]
7101f18c60  cbz x0,0x7101f18c70
7101f18c64  ldr x8,[x0]
7101f18c68  ldr x8,[x8, #0x30]
7101f18c6c  blr x8
7101f18c70  str wzr,[x20, #0x48]
7101f18c74  str wzr,[x20, #0x15c]
7101f18c78  ldr x8,[x21, #0x80]
7101f18c7c  ldr x8,[x8]
7101f18c80  ldr x0,[x8, #0x8]
7101f18c84  bl 0x71036ec2b0
7101f18c88  b 0x7101f18f5c
7101f18c8c  ldr w9,[x19, #0x2ac]
7101f18c90  ldr x8,[x19, #0x3d0]
7101f18c94  cbz w9,0x7101f18da4
7101f18c98  ldrb w9,[x8, #0x8]
7101f18c9c  cbnz w9,0x7101f18f5c
7101f18ca0  ldr x8,[x8]
7101f18ca4  ldr x8,[x8]
7101f18ca8  ldr x8,[x8, #0x10]
7101f18cac  ldr x8,[x8, #0x8]
7101f18cb0  cbz x8,0x7101f18cc8
7101f18cb4  ldr x8,[x8, #0x18]
7101f18cb8  cbz x8,0x7101f18cc8
7101f18cbc  ldrb w9,[x8, #0x58]
7101f18cc0  and w9,w9,#0xfe
7101f18cc4  strb w9,[x8, #0x58]
7101f18cc8  adrp x8,0x7105339000
7101f18ccc  ldr x20,[x8, #0xfd0]
7101f18cd0  ldr w8,[x20, #0x48]
7101f18cd4  cbz w8,0x7101f18d18
7101f18cd8  adrp x21,0x710533a000
7101f18cdc  ldr x8,[x21, #0x80]
7101f18ce0  ldr x8,[x8]
7101f18ce4  ldr x0,[x8, #0x8]
7101f18ce8  bl 0x71036ebe40
7101f18cec  ldr x0,[x20, #0xe0]
7101f18cf0  cbz x0,0x7101f18d00
7101f18cf4  ldr x8,[x0]
7101f18cf8  ldr x8,[x8, #0x30]
7101f18cfc  blr x8
7101f18d00  str wzr,[x20, #0x48]
7101f18d04  str wzr,[x20, #0x15c]
7101f18d08  ldr x8,[x21, #0x80]
7101f18d0c  ldr x8,[x8]
7101f18d10  ldr x0,[x8, #0x8]
7101f18d14  bl 0x71036ec2b0
7101f18d18  adrp x8,0x7105314000
7101f18d1c  ldr x8,[x8, #0x510]
7101f18d20  ldr x8,[x8]
7101f18d24  ldr x8,[x8, #0x188]
7101f18d28  ldr x8,[x8]
7101f18d2c  ldr x8,[x8, #0x28]
7101f18d30  ldr x8,[x8]
7101f18d34  ldr x8,[x8]
7101f18d38  ldr w9,[x8, #0x8]
7101f18d3c  add w10,w9,#0x1
7101f18d40  mov w11,#0xc9ff
7101f18d44  movk w11,#0x3b9a, LSL #16
7101f18d48  cmp w10,w11
7101f18d4c  csinc w9,w11,w9,cs
7101f18d50  adrp x1,0x7104349000
7101f18d54  add x1,x1,#0x9b8
7101f18d58  sub x0,x29,#0x28
7101f18d5c  str w9,[x8, #0x8]
7101f18d60  bl 0x710375aa90
7101f18d64  ldur x20,[x29, #-0x28]
7101f18d68  ldr w8,[x19, #0x598]
7101f18d6c  adrp x1,0x71043df000
7101f18d70  add x1,x1,#0x813
7101f18d74  ldr x9,[x20]
7101f18d78  str x8,[sp, #0x8]
7101f18d7c  mov w8,#0x4020
7101f18d80  add x0,x9,x8
7101f18d84  add x2,sp,#0x8
7101f18d88  bl 0x71039c5fa0
7101f18d8c  ldr w8,[x19, #0x540]
7101f18d90  and w8,w8,#0xf000
7101f18d94  cmp w8,#0x2, LSL #12
7101f18d98  b.ls 0x7101f18e28
7101f18d9c  ldrsw x8,[x19, #0x684]
7101f18da0  b 0x7101f18e2c
7101f18da4  mov w9,#0x1
7101f18da8  strb w9,[x8, #0x8]
7101f18dac  ldr x9,[x8]
7101f18db0  ldr x9,[x9]
7101f18db4  ldr x0,[x9, #0x10]
7101f18db8  ldr x9,[x0, #0x8]
7101f18dbc  cbz x9,0x7101f18de0
7101f18dc0  ldr x9,[x9, #0x18]
7101f18dc4  cbz x9,0x7101f18de0
7101f18dc8  ldrb w10,[x9, #0x58]
7101f18dcc  orr w10,w10,#0x1
7101f18dd0  strb w10,[x9, #0x58]
7101f18dd4  ldr x8,[x8]
7101f18dd8  ldr x8,[x8]
7101f18ddc  ldr x0,[x8, #0x10]
7101f18de0  fmov s0,0x3f800000
7101f18de4  adrp x1,0x7104421000
7101f18de8  add x1,x1,#0x55
7101f18dec  bl 0x7103778300
7101f18df0  adrp x8,0x710533a000
7101f18df4  ldr x8,[x8, #0x80]
7101f18df8  ldr x8,[x8]
7101f18dfc  ldr x8,[x8, #0x8]
7101f18e00  strb wzr,[x8, #0x131]
7101f18e04  ldr x8,[x19, #0x410]
7101f18e08  ldr x9,[x19, #0x418]
7101f18e0c  cmp x8,x9
7101f18e10  b.eq 0x7101f18f5c
7101f18e14  adrp x8,0x710532f000
7101f18e18  ldr x8,[x8, #0x8d0]
7101f18e1c  ldr x0,[x8, #0x8]
7101f18e20  bl 0x71033148b0
7101f18e24  b 0x7101f18f5c
7101f18e28  mov x8,xzr
7101f18e2c  ldr x9,[x20]
7101f18e30  str x8,[sp, #0x8]
7101f18e34  mov w8,#0x4020
7101f18e38  add x0,x9,x8
7101f18e3c  adrp x1,0x710435a000
7101f18e40  add x1,x1,#0xc64
7101f18e44  add x2,sp,#0x8
7101f18e48  bl 0x71039c5fa0
7101f18e4c  ldrb w8,[x19, #0x541]
7101f18e50  tst w8,#0xc0
7101f18e54  b.eq 0x7101f18e60
7101f18e58  ldrsw x8,[x19, #0x690]
7101f18e5c  b 0x7101f18e64
7101f18e60  mov x8,xzr
7101f18e64  ldr x9,[x20]
7101f18e68  str x8,[sp, #0x8]
7101f18e6c  mov w8,#0x4020
7101f18e70  add x0,x9,x8
7101f18e74  adrp x1,0x71043df000
7101f18e78  add x1,x1,#0x828
7101f18e7c  add x2,sp,#0x8
7101f18e80  bl 0x71039c5fa0
7101f18e84  ldr w8,[x19, #0x540]
7101f18e88  and w8,w8,#0xf000
7101f18e8c  cmp w8,#0x2, LSL #12
7101f18e90  b.ls 0x7101f18e9c
7101f18e94  ldrsw x8,[x19, #0x688]
7101f18e98  b 0x7101f18ea0
7101f18e9c  mov x8,xzr
7101f18ea0  ldr x9,[x20]
7101f18ea4  str x8,[sp, #0x8]
7101f18ea8  mov w8,#0x4020
7101f18eac  add x0,x9,x8
7101f18eb0  adrp x1,0x7104349000
7101f18eb4  add x1,x1,#0x9c3
7101f18eb8  add x2,sp,#0x8
7101f18ebc  bl 0x71039c5fa0
7101f18ec0  ldr w8,[x19, #0x540]
7101f18ec4  and w8,w8,#0xf000
7101f18ec8  cmp w8,#0x2, LSL #12
7101f18ecc  b.ls 0x7101f18ed8
7101f18ed0  ldrb w8,[x19, #0x68c]
7101f18ed4  b 0x7101f18edc
7101f18ed8  mov x8,xzr
7101f18edc  ldr x9,[x20]
7101f18ee0  str x8,[sp, #0x8]
7101f18ee4  mov w8,#0x4020
7101f18ee8  add x0,x9,x8
7101f18eec  adrp x1,0x7104412000
7101f18ef0  add x1,x1,#0xd7
7101f18ef4  add x2,sp,#0x8
7101f18ef8  bl 0x71039c5fa0
7101f18efc  adrp x8,0x710593b000
7101f18f00  ldr x8,[x8, #0x580]
7101f18f04  ldr x1,[x8]
7101f18f08  mov w8,#0x7300
7101f18f0c  ldrsw x8,[x1, x8, LSL #0x0]
7101f18f10  cmn w8,#0x1
7101f18f14  b.eq 0x7101f18f30
7101f18f18  ldr x9,[x1, #0x72c0]
7101f18f1c  cmp x9,x8
7101f18f20  b.ls 0x7101f18fcc
7101f18f24  mov w9,#0xcc0
7101f18f28  madd x8,x8,x9,x1
7101f18f2c  add x1,x8,#0xcc0
7101f18f30  ldr x8,[x20]
7101f18f34  mov w9,#0x4020
7101f18f38  add x0,x8,x9
7101f18f3c  bl 0x71039c5fb0
7101f18f40  stur xzr,[x29, #-0x28]
7101f18f44  ldr x0,[x20]
7101f18f48  str xzr,[x20]
7101f18f4c  cbz x0,0x7101f18f54
7101f18f50  bl 0x710392eb40
7101f18f54  mov x0,x20
7101f18f58  bl 0x710392eb40
7101f18f5c  adrp x8,0x7105339000
7101f18f60  ldr x8,[x8, #0xfd0]
7101f18f64  ldr w8,[x8, #0x48]
7101f18f68  cbnz w8,0x7101f18fb4
7101f18f6c  ldr x20,[x19, #0x330]
7101f18f70  ldr x8,[x20, #0x80]
7101f18f74  add x1,x8,#0xc0
7101f18f78  add x0,sp,#0x8
7101f18f7c  bl 0x7101af5880
7101f18f80  add x1,sp,#0x8
7101f18f84  mov w3,#0x1
7101f18f88  mov x0,x20
7101f18f8c  mov w2,wzr
7101f18f90  bl 0x7101af8570
7101f18f94  ldr x8,[x19, #0x340]
7101f18f98  strb wzr,[x8, #0x1ce]
7101f18f9c  ldrsw x8,[x19, #0x2a4]
7101f18fa0  cmp w8,#0x13
7101f18fa4  b.cs 0x7101f18fcc
7101f18fa8  add x8,x19,x8, LSL #0x2
7101f18fac  orr w9,wzr,#0x18
7101f18fb0  str w9,[x8, #0x258]
7101f18fb4  add sp,sp,#0x2, LSL #12
7101f18fb8  add sp,sp,#0x1a0
7101f18fbc  ldp x29,x30,[sp, #0x20]
7101f18fc0  ldp x20,x19,[sp, #0x10]
7101f18fc4  ldp x28,x21,[sp], #0x30
7101f18fc8  ret
7101f18fcc  bl 0x71039c2650
