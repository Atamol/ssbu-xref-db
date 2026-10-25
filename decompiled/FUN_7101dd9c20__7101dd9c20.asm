// addr:      7101dd9c20
// offset:    0x1dd9c20
// name:      FUN_7101dd9c20
// mangled:   
// size:      988

7101dd9c20  sub sp,sp,#0x40
7101dd9c24  str x21,[sp, #0x10]
7101dd9c28  stp x20,x19,[sp, #0x20]
7101dd9c2c  stp x29,x30,[sp, #0x30]
7101dd9c30  add x29,sp,#0x30
7101dd9c34  mov x19,x0
7101dd9c38  add x0,x0,#0x50
7101dd9c3c  ldr x8,[x19, #0x48]
7101dd9c40  ldr x1,[x8]
7101dd9c44  adrp x2,0x7104545000
7101dd9c48  add x2,x2,#0x948
7101dd9c4c  mov w3,#0x1
7101dd9c50  bl 0x71032cbf30
7101dd9c54  ldr x8,[x19, #0x50]
7101dd9c58  ldr x8,[x8]
7101dd9c5c  add x9,x8,#0x8
7101dd9c60  add x10,x19,#0x60
7101dd9c64  cmp x10,x9
7101dd9c68  b.eq 0x7101dd9cdc
7101dd9c6c  ldr x9,[x8, #0x10]
7101dd9c70  ldr x9,[x9]
7101dd9c74  ldr x10,[x19, #0x68]
7101dd9c78  str x9,[x10]
7101dd9c7c  ldr x9,[x8, #0x10]
7101dd9c80  ldr x9,[x9, #0x8]
7101dd9c84  ldr x10,[x19, #0x68]
7101dd9c88  str x9,[x10, #0x8]
7101dd9c8c  ldr x9,[x8, #0x10]
7101dd9c90  ldr x8,[x19, #0x68]
7101dd9c94  cmp x8,x9
7101dd9c98  b.eq 0x7101dd9cdc
7101dd9c9c  ldr x10,[x9, #0x18]
7101dd9ca0  ldr x10,[x10]
7101dd9ca4  ldr x11,[x8, #0x18]
7101dd9ca8  str x10,[x11]
7101dd9cac  ldr x10,[x9, #0x18]
7101dd9cb0  ldr x10,[x10, #0x8]
7101dd9cb4  ldr x11,[x8, #0x18]
7101dd9cb8  str x10,[x11, #0x8]
7101dd9cbc  ldr x10,[x9, #0x18]
7101dd9cc0  ldr x10,[x10, #0x10]
7101dd9cc4  ldr x11,[x8, #0x18]
7101dd9cc8  str x10,[x11, #0x10]
7101dd9ccc  ldr x9,[x9, #0x18]
7101dd9cd0  ldr x9,[x9, #0x18]
7101dd9cd4  ldr x8,[x8, #0x18]
7101dd9cd8  str x9,[x8, #0x18]
7101dd9cdc  ldr x8,[x19, #0x48]
7101dd9ce0  ldr x1,[x8]
7101dd9ce4  add x0,x19,#0x58
7101dd9ce8  adrp x2,0x7104545000
7101dd9cec  add x2,x2,#0x950
7101dd9cf0  mov w3,#0x1
7101dd9cf4  bl 0x71032cbf30
7101dd9cf8  ldr x8,[x19, #0x58]
7101dd9cfc  ldr x8,[x8]
7101dd9d00  add x9,x8,#0x8
7101dd9d04  add x10,x19,#0x70
7101dd9d08  cmp x10,x9
7101dd9d0c  b.eq 0x7101dd9d80
7101dd9d10  ldr x9,[x8, #0x10]
7101dd9d14  ldr x9,[x9]
7101dd9d18  ldr x10,[x19, #0x78]
7101dd9d1c  str x9,[x10]
7101dd9d20  ldr x9,[x8, #0x10]
7101dd9d24  ldr x9,[x9, #0x8]
7101dd9d28  ldr x10,[x19, #0x78]
7101dd9d2c  str x9,[x10, #0x8]
7101dd9d30  ldr x9,[x8, #0x10]
7101dd9d34  ldr x8,[x19, #0x78]
7101dd9d38  cmp x8,x9
7101dd9d3c  b.eq 0x7101dd9d80
7101dd9d40  ldr x10,[x9, #0x18]
7101dd9d44  ldr x10,[x10]
7101dd9d48  ldr x11,[x8, #0x18]
7101dd9d4c  str x10,[x11]
7101dd9d50  ldr x10,[x9, #0x18]
7101dd9d54  ldr x10,[x10, #0x8]
7101dd9d58  ldr x11,[x8, #0x18]
7101dd9d5c  str x10,[x11, #0x8]
7101dd9d60  ldr x10,[x9, #0x18]
7101dd9d64  ldr x10,[x10, #0x10]
7101dd9d68  ldr x11,[x8, #0x18]
7101dd9d6c  str x10,[x11, #0x10]
7101dd9d70  ldr x9,[x9, #0x18]
7101dd9d74  ldr x9,[x9, #0x18]
7101dd9d78  ldr x8,[x8, #0x18]
7101dd9d7c  str x9,[x8, #0x18]
7101dd9d80  ldr x9,[x19, #0x48]
7101dd9d84  adrp x8,0x710532f000
7101dd9d88  ldr x8,[x8, #0x8b8]
7101dd9d8c  ldr x20,[x9]
7101dd9d90  adrp x9,0x710532f000
7101dd9d94  add x9,x9,#0x4d8
7101dd9d98  ldarb w9,[x9]
7101dd9d9c  tbz w9,#0x0,0x7101dd9fa4
7101dd9da0  ldr x11,[x20, #0x28]!
7101dd9da4  cbz x11,0x7101dd9dec
7101dd9da8  mov x10,#0xc8e6
7101dd9dac  movk x10,#0x3608, LSL #16
7101dd9db0  movk x10,#0x10, LSL #32
7101dd9db4  mov x9,x20
7101dd9db8  ldr x12,[x11, #0x20]
7101dd9dbc  and x12,x12,#0xfffffffffe
7101dd9dc0  cmp x12,x10
7101dd9dc4  cset w12,cc
7101dd9dc8  csel x9,x9,x11,cc
7101dd9dcc  ldr x11,[x11, w12, UXTW #0x3]
7101dd9dd0  cbnz x11,0x7101dd9db8
7101dd9dd4  cmp x9,x20
7101dd9dd8  b.eq 0x7101dd9dec
7101dd9ddc  ldr x11,[x9, #0x20]
7101dd9de0  and x11,x11,#0xffffffffff
7101dd9de4  cmp x11,x10
7101dd9de8  b.ls 0x7101dd9f9c
7101dd9dec  adrp x20,0x710532f000
7101dd9df0  add x20,x20,#0x4a4
7101dd9df4  ldr w9,[x20]
7101dd9df8  orr w10,wzr,#0xffffff
7101dd9dfc  cmp w9,w10
7101dd9e00  b.eq 0x7101dd9e34
7101dd9e04  ldr x0,[x8, #0x8]
7101dd9e08  adrp x1,0x7104545000
7101dd9e0c  add x1,x1,#0x940
7101dd9e10  mov w2,#0x9
7101dd9e14  bl 0x710330a8f0
7101dd9e18  cbz w0,0x7101dd9e34
7101dd9e1c  adrp x8,0x7105334000
7101dd9e20  ldr x8,[x8, #0x920]
7101dd9e24  mov w1,w0
7101dd9e28  ldr x0,[x8]
7101dd9e2c  mov x2,x20
7101dd9e30  bl 0x7103563a20
7101dd9e34  ldr x20,[x19, #0x40]
7101dd9e38  cbz x20,0x7101dd9f88
7101dd9e3c  mov w0,#0x10
7101dd9e40  orr w1,wzr,#0x38
7101dd9e44  bl 0x710392e290
7101dd9e48  cbnz x0,0x7101dd9e90
7101dd9e4c  adrp x8,0x7105332000
7101dd9e50  ldr x0,[x8, #0xf00]
7101dd9e54  cbz x0,0x7101dd9e8c
7101dd9e58  orr w8,wzr,#0x38
7101dd9e5c  str wzr,[sp]
7101dd9e60  mov x1,sp
7101dd9e64  str x8,[sp, #0x18]
7101dd9e68  ldr x8,[x0]
7101dd9e6c  ldr x8,[x8, #0x30]
7101dd9e70  add x2,sp,#0x18
7101dd9e74  blr x8
7101dd9e78  tbz w0,#0x0,0x7101dd9e8c
7101dd9e7c  mov w0,#0x10
7101dd9e80  orr w1,wzr,#0x38
7101dd9e84  bl 0x710392e290
7101dd9e88  cbnz x0,0x7101dd9e90
7101dd9e8c  mov x0,xzr
7101dd9e90  adrp x21,0x71050b0000
7101dd9e94  add x21,x21,#0xb40
7101dd9e98  adrp x8,0x7101dd9000
7101dd9e9c  add x8,x8,#0x540
7101dd9ea0  stp xzr,xzr,[x0, #0x28]
7101dd9ea4  str x21,[x0]
7101dd9ea8  str x19,[x0, #0x10]
7101dd9eac  adrp x1,0x7104281000
7101dd9eb0  add x1,x1,#0x76
7101dd9eb4  stp x8,xzr,[x0, #0x18]
7101dd9eb8  mov x2,sp
7101dd9ebc  str wzr,[x0, #0x8]
7101dd9ec0  str x0,[sp]
7101dd9ec4  mov x0,x20
7101dd9ec8  bl 0x7103376af0
7101dd9ecc  ldr x0,[sp]
7101dd9ed0  str xzr,[sp]
7101dd9ed4  cbz x0,0x7101dd9ee4
7101dd9ed8  ldr x8,[x0]
7101dd9edc  ldr x8,[x8, #0x8]
7101dd9ee0  blr x8
7101dd9ee4  ldr x20,[x19, #0x40]
7101dd9ee8  mov w0,#0x10
7101dd9eec  orr w1,wzr,#0x38
7101dd9ef0  bl 0x710392e290
7101dd9ef4  cbnz x0,0x7101dd9f3c
7101dd9ef8  adrp x8,0x7105332000
7101dd9efc  ldr x0,[x8, #0xf00]
7101dd9f00  cbz x0,0x7101dd9f38
7101dd9f04  orr w8,wzr,#0x38
7101dd9f08  str wzr,[sp, #0xc]
7101dd9f0c  add x1,sp,#0xc
7101dd9f10  str x8,[sp, #0x18]
7101dd9f14  ldr x8,[x0]
7101dd9f18  ldr x8,[x8, #0x30]
7101dd9f1c  add x2,sp,#0x18
7101dd9f20  blr x8
7101dd9f24  tbz w0,#0x0,0x7101dd9f38
7101dd9f28  mov w0,#0x10
7101dd9f2c  orr w1,wzr,#0x38
7101dd9f30  bl 0x710392e290
7101dd9f34  cbnz x0,0x7101dd9f3c
7101dd9f38  mov x0,xzr
7101dd9f3c  adrp x8,0x7101dd9000
7101dd9f40  add x8,x8,#0x590
7101dd9f44  str x21,[x0]
7101dd9f48  stp xzr,xzr,[x0, #0x28]
7101dd9f4c  adrp x1,0x7104412000
7101dd9f50  add x1,x1,#0xe3e
7101dd9f54  str x19,[x0, #0x10]
7101dd9f58  add x2,sp,#0x18
7101dd9f5c  stp x8,xzr,[x0, #0x18]
7101dd9f60  str wzr,[x0, #0x8]
7101dd9f64  str x0,[sp, #0x18]
7101dd9f68  mov x0,x20
7101dd9f6c  bl 0x7103376af0
7101dd9f70  ldr x0,[sp, #0x18]
7101dd9f74  str xzr,[sp, #0x18]
7101dd9f78  cbz x0,0x7101dd9f88
7101dd9f7c  ldr x8,[x0]
7101dd9f80  ldr x8,[x8, #0x8]
7101dd9f84  blr x8
7101dd9f88  ldp x29,x30,[sp, #0x30]
7101dd9f8c  ldr x21,[sp, #0x10]
7101dd9f90  ldp x20,x19,[sp, #0x20]
7101dd9f94  add sp,sp,#0x40
7101dd9f98  ret
7101dd9f9c  add x20,x9,#0x28
7101dd9fa0  b 0x7101dd9df4
7101dd9fa4  adrp x0,0x710532f000
7101dd9fa8  add x0,x0,#0x4d8
7101dd9fac  mov x21,x8
7101dd9fb0  bl 0x71039c06b0
7101dd9fb4  mov x8,x21
7101dd9fb8  cbz w0,0x7101dd9da0
7101dd9fbc  adrp x1,0x710532f000
7101dd9fc0  add x1,x1,#0x4a4
7101dd9fc4  orr w8,wzr,#0xffffff
7101dd9fc8  adrp x0,0x710353e000
7101dd9fcc  add x0,x0,#0x700
7101dd9fd0  str w8,[x1]
7101dd9fd4  adrp x2,0x7104f17000
7101dd9fd8  add x2,x2,#0x0
7101dd9fdc  bl 0x71000001c0
7101dd9fe0  adrp x0,0x710532f000
7101dd9fe4  add x0,x0,#0x4d8
7101dd9fe8  bl 0x71039c06c0
7101dd9fec  mov x8,x21
7101dd9ff0  ldr x11,[x20, #0x28]!
7101dd9ff4  cbnz x11,0x7101dd9da8
7101dd9ff8  b 0x7101dd9dec
