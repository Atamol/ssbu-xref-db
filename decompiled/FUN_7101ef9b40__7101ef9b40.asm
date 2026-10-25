// addr:      7101ef9b40
// offset:    0x1ef9b40
// name:      FUN_7101ef9b40
// mangled:   
// size:      1072

7101ef9b40  sub sp,sp,#0x60
7101ef9b44  str x25,[sp, #0x10]
7101ef9b48  stp x24,x23,[sp, #0x20]
7101ef9b4c  stp x22,x21,[sp, #0x30]
7101ef9b50  stp x20,x19,[sp, #0x40]
7101ef9b54  stp x29,x30,[sp, #0x50]
7101ef9b58  add x29,sp,#0x50
7101ef9b5c  cmp w1,#0x0
7101ef9b60  mov w8,#0x5
7101ef9b64  orr w9,wzr,#0x3
7101ef9b68  csel w21,w9,w8,eq
7101ef9b6c  ldr x8,[x0, #0x10]
7101ef9b70  ldr x8,[x8]
7101ef9b74  ldr x8,[x8]
7101ef9b78  add x9,x8,#0x8
7101ef9b7c  add x22,x0,#0x210
7101ef9b80  mov x19,x0
7101ef9b84  cmp x22,x9
7101ef9b88  b.eq 0x7101ef9bfc
7101ef9b8c  ldr x9,[x8, #0x10]
7101ef9b90  ldr x9,[x9]
7101ef9b94  ldr x10,[x19, #0x218]
7101ef9b98  str x9,[x10]
7101ef9b9c  ldr x9,[x8, #0x10]
7101ef9ba0  ldr x9,[x9, #0x8]
7101ef9ba4  ldr x10,[x19, #0x218]
7101ef9ba8  str x9,[x10, #0x8]
7101ef9bac  ldr x9,[x8, #0x10]
7101ef9bb0  ldr x8,[x19, #0x218]
7101ef9bb4  cmp x8,x9
7101ef9bb8  b.eq 0x7101ef9bfc
7101ef9bbc  ldr x10,[x9, #0x18]
7101ef9bc0  ldr x10,[x10]
7101ef9bc4  ldr x11,[x8, #0x18]
7101ef9bc8  str x10,[x11]
7101ef9bcc  ldr x10,[x9, #0x18]
7101ef9bd0  ldr x10,[x10, #0x8]
7101ef9bd4  ldr x11,[x8, #0x18]
7101ef9bd8  str x10,[x11, #0x8]
7101ef9bdc  ldr x10,[x9, #0x18]
7101ef9be0  ldr x10,[x10, #0x10]
7101ef9be4  ldr x11,[x8, #0x18]
7101ef9be8  str x10,[x11, #0x10]
7101ef9bec  ldr x9,[x9, #0x18]
7101ef9bf0  ldr x9,[x9, #0x18]
7101ef9bf4  ldr x8,[x8, #0x18]
7101ef9bf8  str x9,[x8, #0x18]
7101ef9bfc  ldr w8,[x19, #0x4]
7101ef9c00  cbz w8,0x7101ef9d74
7101ef9c04  ldr w8,[x19]
7101ef9c08  cmp w8,#0x2
7101ef9c0c  b.cs 0x7101ef9f6c
7101ef9c10  adrp x24,0x71050b3000
7101ef9c14  add x24,x24,#0xe88
7101ef9c18  ldr w4,[x19, #0x8]
7101ef9c1c  ldr x2,[x24, x8, LSL #0x3]
7101ef9c20  adrp x1,0x71043cf000
7101ef9c24  add x1,x1,#0xcc8
7101ef9c28  mov x8,sp
7101ef9c2c  mov x0,x22
7101ef9c30  mov w3,w21
7101ef9c34  mov x23,sp
7101ef9c38  bl 0x7103776640
7101ef9c3c  add x20,x19,#0x220
7101ef9c40  cmp x20,x23
7101ef9c44  b.eq 0x7101ef9c7c
7101ef9c48  ldr x8,[sp, #0x8]
7101ef9c4c  str xzr,[sp, #0x8]
7101ef9c50  ldr x23,[x19, #0x228]
7101ef9c54  str x8,[x19, #0x228]
7101ef9c58  cbz x23,0x7101ef9c7c
7101ef9c5c  ldr x0,[x23, #0x18]
7101ef9c60  adrp x8,0x710523d000
7101ef9c64  add x8,x8,#0x9a8
7101ef9c68  stp x8,xzr,[x23, #0x10]
7101ef9c6c  cbz x0,0x7101ef9c74
7101ef9c70  bl 0x710392eb40
7101ef9c74  mov x0,x23
7101ef9c78  bl 0x710392eb40
7101ef9c7c  ldr x23,[sp, #0x8]
7101ef9c80  adrp x25,0x710523d000
7101ef9c84  add x25,x25,#0x988
7101ef9c88  stp x25,xzr,[sp]
7101ef9c8c  cbz x23,0x7101ef9cb0
7101ef9c90  ldr x0,[x23, #0x18]
7101ef9c94  adrp x8,0x710523d000
7101ef9c98  add x8,x8,#0x9a8
7101ef9c9c  stp x8,xzr,[x23, #0x10]
7101ef9ca0  cbz x0,0x7101ef9ca8
7101ef9ca4  bl 0x710392eb40
7101ef9ca8  mov x0,x23
7101ef9cac  bl 0x710392eb40
7101ef9cb0  adrp x1,0x7104443000
7101ef9cb4  add x1,x1,#0xf63
7101ef9cb8  mov x8,sp
7101ef9cbc  mov x0,x20
7101ef9cc0  bl 0x7103776640
7101ef9cc4  ldr x23,[sp, #0x8]
7101ef9cc8  fmov s0,0x3f800000
7101ef9ccc  adrp x1,0x7104328000
7101ef9cd0  add x1,x1,#0x277
7101ef9cd4  mov x0,x23
7101ef9cd8  bl 0x7103778300
7101ef9cdc  stp x25,xzr,[sp]
7101ef9ce0  cbz x23,0x7101ef9d04
7101ef9ce4  ldr x0,[x23, #0x18]
7101ef9ce8  adrp x8,0x710523d000
7101ef9cec  add x8,x8,#0x9a8
7101ef9cf0  stp x8,xzr,[x23, #0x10]
7101ef9cf4  cbz x0,0x7101ef9cfc
7101ef9cf8  bl 0x710392eb40
7101ef9cfc  mov x0,x23
7101ef9d00  bl 0x710392eb40
7101ef9d04  ldr w8,[x19]
7101ef9d08  cmp w8,#0x2
7101ef9d0c  b.cs 0x7101ef9f6c
7101ef9d10  ldr x2,[x24, x8, LSL #0x3]
7101ef9d14  ldr w4,[x19, #0x8]
7101ef9d18  adrp x1,0x71043cf000
7101ef9d1c  add x1,x1,#0xcc8
7101ef9d20  mov x8,sp
7101ef9d24  mov x0,x22
7101ef9d28  mov w3,w21
7101ef9d2c  mov x23,sp
7101ef9d30  bl 0x7103776910
7101ef9d34  add x8,x19,#0x230
7101ef9d38  cmp x8,x23
7101ef9d3c  b.eq 0x7101ef9d58
7101ef9d40  ldr x8,[sp, #0x8]
7101ef9d44  str xzr,[sp, #0x8]
7101ef9d48  ldr x0,[x19, #0x238]
7101ef9d4c  str x8,[x19, #0x238]
7101ef9d50  cbz x0,0x7101ef9d58
7101ef9d54  bl 0x710392eb40
7101ef9d58  ldr x0,[sp, #0x8]
7101ef9d5c  adrp x8,0x710523d000
7101ef9d60  add x8,x8,#0x9a8
7101ef9d64  stp x8,xzr,[sp]
7101ef9d68  cbz x0,0x7101ef9e34
7101ef9d6c  bl 0x710392eb40
7101ef9d70  b 0x7101ef9e34
7101ef9d74  ldr w8,[x19]
7101ef9d78  cmp w8,#0x2
7101ef9d7c  b.cs 0x7101ef9f6c
7101ef9d80  adrp x9,0x71050b3000
7101ef9d84  add x9,x9,#0xe88
7101ef9d88  ldr w4,[x19, #0x8]
7101ef9d8c  ldr x2,[x9, x8, LSL #0x3]
7101ef9d90  adrp x1,0x710436c000
7101ef9d94  add x1,x1,#0xbe6
7101ef9d98  mov x8,sp
7101ef9d9c  mov x0,x22
7101ef9da0  mov w3,w21
7101ef9da4  mov x23,sp
7101ef9da8  bl 0x7103776640
7101ef9dac  add x20,x19,#0x220
7101ef9db0  cmp x20,x23
7101ef9db4  b.eq 0x7101ef9dec
7101ef9db8  ldr x8,[sp, #0x8]
7101ef9dbc  str xzr,[sp, #0x8]
7101ef9dc0  ldr x21,[x19, #0x228]
7101ef9dc4  str x8,[x19, #0x228]
7101ef9dc8  cbz x21,0x7101ef9dec
7101ef9dcc  ldr x0,[x21, #0x18]
7101ef9dd0  adrp x8,0x710523d000
7101ef9dd4  add x8,x8,#0x9a8
7101ef9dd8  stp x8,xzr,[x21, #0x10]
7101ef9ddc  cbz x0,0x7101ef9de4
7101ef9de0  bl 0x710392eb40
7101ef9de4  mov x0,x21
7101ef9de8  bl 0x710392eb40
7101ef9dec  ldr x21,[sp, #0x8]
7101ef9df0  adrp x8,0x710523d000
7101ef9df4  add x8,x8,#0x988
7101ef9df8  stp x8,xzr,[sp]
7101ef9dfc  cbz x21,0x7101ef9e20
7101ef9e00  ldr x0,[x21, #0x18]
7101ef9e04  adrp x8,0x710523d000
7101ef9e08  add x8,x8,#0x9a8
7101ef9e0c  stp x8,xzr,[x21, #0x10]
7101ef9e10  cbz x0,0x7101ef9e18
7101ef9e14  bl 0x710392eb40
7101ef9e18  mov x0,x21
7101ef9e1c  bl 0x710392eb40
7101ef9e20  ldr x0,[x19, #0x228]
7101ef9e24  fmov s0,0x3f800000
7101ef9e28  adrp x1,0x71042d6000
7101ef9e2c  add x1,x1,#0xb3e
7101ef9e30  bl 0x7103778300
7101ef9e34  adrp x1,0x710438d000
7101ef9e38  add x1,x1,#0x355
7101ef9e3c  mov x8,sp
7101ef9e40  mov x0,x20
7101ef9e44  bl 0x7103776910
7101ef9e48  ldr x0,[sp, #0x8]
7101ef9e4c  ldr x8,[x0]
7101ef9e50  cbz x8,0x7101ef9e60
7101ef9e54  ldrb w9,[x8, #0x58]
7101ef9e58  and w9,w9,#0xfe
7101ef9e5c  strb w9,[x8, #0x58]
7101ef9e60  adrp x21,0x710523d000
7101ef9e64  add x21,x21,#0x9a8
7101ef9e68  stp x21,xzr,[sp]
7101ef9e6c  cbz x0,0x7101ef9e74
7101ef9e70  bl 0x710392eb40
7101ef9e74  adrp x1,0x71042f8000
7101ef9e78  add x1,x1,#0xc45
7101ef9e7c  mov x8,sp
7101ef9e80  mov x0,x20
7101ef9e84  bl 0x7103776910
7101ef9e88  ldr x0,[sp, #0x8]
7101ef9e8c  ldr x8,[x0]
7101ef9e90  cbz x8,0x7101ef9ea0
7101ef9e94  ldrb w9,[x8, #0x58]
7101ef9e98  and w9,w9,#0xfe
7101ef9e9c  strb w9,[x8, #0x58]
7101ef9ea0  stp x21,xzr,[sp]
7101ef9ea4  cbz x0,0x7101ef9eac
7101ef9ea8  bl 0x710392eb40
7101ef9eac  adrp x1,0x71042f8000
7101ef9eb0  add x1,x1,#0xc45
7101ef9eb4  mov x8,sp
7101ef9eb8  mov x0,x20
7101ef9ebc  mov x22,sp
7101ef9ec0  bl 0x7103776640
7101ef9ec4  add x8,x19,#0x248
7101ef9ec8  cmp x8,x22
7101ef9ecc  b.eq 0x7101ef9efc
7101ef9ed0  ldr x8,[sp, #0x8]
7101ef9ed4  str xzr,[sp, #0x8]
7101ef9ed8  ldr x20,[x19, #0x250]
7101ef9edc  str x8,[x19, #0x250]
7101ef9ee0  cbz x20,0x7101ef9efc
7101ef9ee4  ldr x0,[x20, #0x18]
7101ef9ee8  stp x21,xzr,[x20, #0x10]
7101ef9eec  cbz x0,0x7101ef9ef4
7101ef9ef0  bl 0x710392eb40
7101ef9ef4  mov x0,x20
7101ef9ef8  bl 0x710392eb40
7101ef9efc  ldr x20,[sp, #0x8]
7101ef9f00  adrp x8,0x710523d000
7101ef9f04  add x8,x8,#0x988
7101ef9f08  stp x8,xzr,[sp]
7101ef9f0c  cbz x20,0x7101ef9f28
7101ef9f10  ldr x0,[x20, #0x18]
7101ef9f14  stp x21,xzr,[x20, #0x10]
7101ef9f18  cbz x0,0x7101ef9f20
7101ef9f1c  bl 0x710392eb40
7101ef9f20  mov x0,x20
7101ef9f24  bl 0x710392eb40
7101ef9f28  ldr w8,[x19]
7101ef9f2c  ldr x0,[x19, #0x250]
7101ef9f30  cbz w8,0x7101ef9f40
7101ef9f34  adrp x1,0x7104443000
7101ef9f38  add x1,x1,#0xf71
7101ef9f3c  b 0x7101ef9f48
7101ef9f40  adrp x1,0x710424f000
7101ef9f44  add x1,x1,#0xd0e
7101ef9f48  fmov s0,0x3f800000
7101ef9f4c  bl 0x7103778300
7101ef9f50  ldp x29,x30,[sp, #0x50]
7101ef9f54  ldr x25,[sp, #0x10]
7101ef9f58  ldp x20,x19,[sp, #0x40]
7101ef9f5c  ldp x22,x21,[sp, #0x30]
7101ef9f60  ldp x24,x23,[sp, #0x20]
7101ef9f64  add sp,sp,#0x60
7101ef9f68  ret
7101ef9f6c  bl 0x71039c2650
