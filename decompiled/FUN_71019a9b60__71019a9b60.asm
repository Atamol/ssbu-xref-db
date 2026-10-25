// addr:      71019a9b60
// offset:    0x19a9b60
// name:      FUN_71019a9b60
// mangled:   
// size:      2828

71019a9b60  sub sp,sp,#0xf0
71019a9b64  str x23,[sp, #0xb0]
71019a9b68  stp x22,x21,[sp, #0xc0]
71019a9b6c  stp x20,x19,[sp, #0xd0]
71019a9b70  stp x29,x30,[sp, #0xe0]
71019a9b74  add x29,sp,#0xe0
71019a9b78  ldr w8,[x0, #0x2d4]
71019a9b7c  mov x19,x0
71019a9b80  cbz w8,0x71019a9bd8
71019a9b84  add x0,x19,#0x330
71019a9b88  bl 0x7103345840
71019a9b8c  ldr w8,[x19, #0x3e8]
71019a9b90  cmp w8,#0x2
71019a9b94  b.ne 0x71019a9c50
71019a9b98  ldr w8,[x19, #0x3f8]
71019a9b9c  cmp w8,#0x1
71019a9ba0  b.lt 0x71019a9d80
71019a9ba4  ldr w8,[x19, #0x3fc]
71019a9ba8  cmp w8,#0x1
71019a9bac  b.lt 0x71019a9d80
71019a9bb0  ldr w9,[x19, #0x2cc]
71019a9bb4  cmp w9,#0x11
71019a9bb8  b.gt 0x71019aa410
71019a9bbc  add w9,w9,#0x1
71019a9bc0  add x8,x19,#0x2cc
71019a9bc4  cmp w9,#0x13
71019a9bc8  str w9,[x8]
71019a9bcc  b.cs 0x71019aa668
71019a9bd0  mov w10,#0x2
71019a9bd4  b 0x71019a9ec4
71019a9bd8  ldr x8,[x19, #0x20]
71019a9bdc  ldr x8,[x8]
71019a9be0  ldr x8,[x8]
71019a9be4  ldr x8,[x8, #0x600]
71019a9be8  mov w9,#0x1
71019a9bec  strb w9,[x8, #0x4aa]
71019a9bf0  adrp x21,0x710532f000
71019a9bf4  ldr x9,[x21, #0x7b0]
71019a9bf8  adrp x8,0x71050a7000
71019a9bfc  add x8,x8,#0x280
71019a9c00  stp x8,x19,[sp, #0x40]
71019a9c04  add x8,sp,#0x40
71019a9c08  str x8,[sp, #0x60]
71019a9c0c  ldr x8,[x9, #0x8]
71019a9c10  add x22,sp,#0x70
71019a9c14  add x0,sp,#0x40
71019a9c18  add x1,sp,#0x70
71019a9c1c  str x22,[sp, #0x90]
71019a9c20  add x20,x8,#0x1b0
71019a9c24  bl 0x71019ad020
71019a9c28  add x0,sp,#0x70
71019a9c2c  mov x1,x20
71019a9c30  bl 0x71003cb050
71019a9c34  ldr x0,[sp, #0x90]
71019a9c38  cmp x22,x0
71019a9c3c  b.eq 0x71019aa084
71019a9c40  cbz x0,0x71019aa090
71019a9c44  ldr x8,[x0]
71019a9c48  ldr x8,[x8, #0x28]
71019a9c4c  b 0x71019aa08c
71019a9c50  adrp x8,0x710532f000
71019a9c54  ldr x8,[x8, #0x7b0]
71019a9c58  ldr x9,[x8, #0x8]
71019a9c5c  ldr w9,[x9, #0xa28]
71019a9c60  cmp w9,#0x2
71019a9c64  b.ne 0x71019a9ef4
71019a9c68  ldr x0,[x19, #0x538]
71019a9c6c  mov w22,#0x6500
71019a9c70  movk w22,#0x87, LSL #16
71019a9c74  add x20,x19,#0x528
71019a9c78  cbz x0,0x71019a9cd8
71019a9c7c  ldr x8,[x0]
71019a9c80  ldr x8,[x8, #0x20]
71019a9c84  blr x8
71019a9c88  tbnz w0,#0x0,0x71019a9cd8
71019a9c8c  adrp x8,0x710593b000
71019a9c90  ldr x8,[x8, #0x438]
71019a9c94  ldr x8,[x8]
71019a9c98  ldrb w8,[x8, #0x1]
71019a9c9c  cbz w8,0x71019a9cd8
71019a9ca0  ldr w8,[x19, #0x544]
71019a9ca4  cmp w8,w22
71019a9ca8  b.ne 0x71019a9cd8
71019a9cac  adrp x23,0x7106dd5000
71019a9cb0  ldrb w8,[x23, #0x3a8]
71019a9cb4  cmp w8,#0x1
71019a9cb8  b.ne 0x71019a9cd8
71019a9cbc  adrp x8,0x7106dd5000
71019a9cc0  ldr w9,[x19, #0x540]
71019a9cc4  ldr w8,[x8, #0x3ac]
71019a9cc8  cmp w9,w8
71019a9ccc  b.ne 0x71019a9cd8
71019a9cd0  ldrb w8,[x19, #0x548]
71019a9cd4  cbz w8,0x71019aa560
71019a9cd8  adrp x8,0x710532f000
71019a9cdc  ldr x8,[x8, #0x8d0]
71019a9ce0  ldr x0,[x8, #0x8]
71019a9ce4  ldrb w8,[x0, #0x191]
71019a9ce8  cbnz w8,0x71019aa310
71019a9cec  mov x21,#0xbb4b
71019a9cf0  movk x21,#0xda7f, LSL #16
71019a9cf4  movk x21,#0x19, LSL #32
71019a9cf8  mov w2,#0x4
71019a9cfc  mov x1,x21
71019a9d00  bl 0x7103313f20
71019a9d04  tbz w0,#0x0,0x71019aa310
71019a9d08  add x0,sp,#0x70
71019a9d0c  mov x1,x21
71019a9d10  bl 0x71024076d0
71019a9d14  ldr w9,[sp, #0x70]
71019a9d18  ldr x8,[sp, #0x80]
71019a9d1c  str w9,[x20]
71019a9d20  cbz x8,0x71019aa338
71019a9d24  ldr w9,[x19, #0x544]
71019a9d28  cmp w9,w22
71019a9d2c  b.ne 0x71019aa388
71019a9d30  adrp x9,0x7106dd5000
71019a9d34  ldr w9,[x9, #0x3ac]
71019a9d38  ldr w10,[x19, #0x540]
71019a9d3c  cmp w10,w9
71019a9d40  b.ne 0x71019aa53c
71019a9d44  ldr x9,[x19, #0x538]
71019a9d48  cbz x9,0x71019a9d70
71019a9d4c  adrp x10,0x7106dd5000
71019a9d50  ldrb w10,[x10, #0x3a8]
71019a9d54  cmp w10,#0x1
71019a9d58  b.ne 0x71019a9d70
71019a9d5c  ldr wzr,[x9, #0x38]!
71019a9d60  ldaxr w10,[x9]
71019a9d64  sub w10,w10,#0x1
71019a9d68  stlxr w11,w10,[x9]
71019a9d6c  cbnz w11,0x71019a9d60
71019a9d70  str xzr,[x19, #0x538]
71019a9d74  add x9,x19,#0x548
71019a9d78  strb wzr,[x19, #0x548]
71019a9d7c  b 0x71019aa544
71019a9d80  mov x8,#0x2
71019a9d84  movk x8,#0x3, LSL #32
71019a9d88  str x8,[x19, #0x3f8]
71019a9d8c  adrp x8,0x71043be000
71019a9d90  add x8,x8,#0x92b
71019a9d94  str x8,[x19, #0x308]
71019a9d98  adrp x8,0x710424e000
71019a9d9c  add x8,x8,#0xdf4
71019a9da0  str x8,[x19, #0x310]
71019a9da4  mov w8,#0x100
71019a9da8  str wzr,[x19, #0x400]
71019a9dac  strh w8,[x19, #0x320]
71019a9db0  adrp x8,0x710532f000
71019a9db4  ldr x8,[x8, #0x7b0]
71019a9db8  ldr x20,[x8, #0x8]
71019a9dbc  mov x0,x20
71019a9dc0  bl 0x71039c1a40
71019a9dc4  mov w8,#0xa51
71019a9dc8  movk w8,#0x1, LSL #16
71019a9dcc  mov w9,#0x1
71019a9dd0  strb w9,[x20, x8, LSL ]
71019a9dd4  mov w8,#0xa4e
71019a9dd8  movk w8,#0x1, LSL #16
71019a9ddc  str wzr,[x20, #0xa28]
71019a9de0  strh wzr,[x20, #0xa20]
71019a9de4  strb wzr,[x20, x8, LSL ]
71019a9de8  mov w8,#0xa4a
71019a9dec  movk w8,#0x1, LSL #16
71019a9df0  str wzr,[x20, x8, LSL #0x0]
71019a9df4  ldrsw x8,[x20, #0x164]
71019a9df8  cmp w8,#0x13
71019a9dfc  b.cs 0x71019aa668
71019a9e00  add x8,x20,x8, LSL #0x2
71019a9e04  str wzr,[x8, #0x118]
71019a9e08  ldr w8,[x20, #0x164]
71019a9e0c  cmp w8,#0x11
71019a9e10  b.gt 0x71019a9e30
71019a9e14  add w8,w8,#0x1
71019a9e18  cmp w8,#0x13
71019a9e1c  str w8,[x20, #0x164]
71019a9e20  b.cs 0x71019aa668
71019a9e24  add x8,x20,w8, SXTW  #0x2
71019a9e28  mov w9,#0xb
71019a9e2c  str w9,[x8, #0x118]
71019a9e30  mov x0,x20
71019a9e34  bl 0x71039c1a50
71019a9e38  ldrsw x8,[x19, #0x2cc]
71019a9e3c  cmp w8,#0x13
71019a9e40  b.cs 0x71019aa668
71019a9e44  add x8,x19,x8, LSL #0x2
71019a9e48  orr w9,wzr,#0xc
71019a9e4c  str w9,[x8, #0x280]
71019a9e50  ldr w9,[x19, #0x2cc]
71019a9e54  cmp w9,#0x11
71019a9e58  b.gt 0x71019aa410
71019a9e5c  add w9,w9,#0x1
71019a9e60  add x8,x19,#0x2cc
71019a9e64  cmp w9,#0x13
71019a9e68  str w9,[x8]
71019a9e6c  b.cs 0x71019aa668
71019a9e70  add x9,x19,w9, SXTW  #0x2
71019a9e74  mov w10,#0x1
71019a9e78  str w10,[x9, #0x280]
71019a9e7c  ldr w9,[x19, #0x2cc]
71019a9e80  cmp w9,#0x11
71019a9e84  b.gt 0x71019aa410
71019a9e88  add w9,w9,#0x1
71019a9e8c  cmp w9,#0x13
71019a9e90  str w9,[x8]
71019a9e94  b.cs 0x71019aa668
71019a9e98  add x9,x19,w9, SXTW  #0x2
71019a9e9c  mov w10,#0x15
71019a9ea0  str w10,[x9, #0x280]
71019a9ea4  ldr w9,[x19, #0x2cc]
71019a9ea8  cmp w9,#0x11
71019a9eac  b.gt 0x71019aa410
71019a9eb0  add w9,w9,#0x1
71019a9eb4  cmp w9,#0x13
71019a9eb8  str w9,[x8]
71019a9ebc  b.cs 0x71019aa668
71019a9ec0  mov w10,#0x20
71019a9ec4  add x9,x19,w9, SXTW  #0x2
71019a9ec8  str w10,[x9, #0x280]
71019a9ecc  ldr w9,[x19, #0x2cc]
71019a9ed0  cmp w9,#0x11
71019a9ed4  b.gt 0x71019aa410
71019a9ed8  add w9,w9,#0x1
71019a9edc  cmp w9,#0x13
71019a9ee0  str w9,[x8]
71019a9ee4  b.cs 0x71019aa668
71019a9ee8  add x8,x19,w9, SXTW  #0x2
71019a9eec  mov w9,#0x17
71019a9ef0  b 0x71019aa40c
71019a9ef4  ldr x9,[x19, #0x20]
71019a9ef8  ldr x9,[x9]
71019a9efc  ldr x9,[x9]
71019a9f00  ldr x9,[x9, #0x600]
71019a9f04  ldrb w10,[x9, #0x4aa]
71019a9f08  cbz w10,0x71019aa470
71019a9f0c  ldrb w9,[x9, #0x1ac]
71019a9f10  tbz w9,#0x1,0x71019aa470
71019a9f14  mov x9,#0x2
71019a9f18  movk x9,#0x3, LSL #32
71019a9f1c  str x9,[x19, #0x3f8]
71019a9f20  adrp x9,0x71043be000
71019a9f24  add x9,x9,#0x92b
71019a9f28  str x9,[x19, #0x308]
71019a9f2c  adrp x9,0x710424e000
71019a9f30  add x9,x9,#0xdf4
71019a9f34  str x9,[x19, #0x310]
71019a9f38  mov w9,#0x100
71019a9f3c  str wzr,[x19, #0x400]
71019a9f40  strh w9,[x19, #0x320]
71019a9f44  ldr x20,[x8, #0x8]
71019a9f48  mov x0,x20
71019a9f4c  bl 0x71039c1a40
71019a9f50  mov w8,#0xa51
71019a9f54  movk w8,#0x1, LSL #16
71019a9f58  mov w9,#0x1
71019a9f5c  strb w9,[x20, x8, LSL ]
71019a9f60  mov w8,#0xa4e
71019a9f64  movk w8,#0x1, LSL #16
71019a9f68  str wzr,[x20, #0xa28]
71019a9f6c  strh wzr,[x20, #0xa20]
71019a9f70  strb wzr,[x20, x8, LSL ]
71019a9f74  mov w8,#0xa4a
71019a9f78  movk w8,#0x1, LSL #16
71019a9f7c  str wzr,[x20, x8, LSL #0x0]
71019a9f80  ldrsw x8,[x20, #0x164]
71019a9f84  cmp w8,#0x13
71019a9f88  b.cs 0x71019aa668
71019a9f8c  add x8,x20,x8, LSL #0x2
71019a9f90  str wzr,[x8, #0x118]
71019a9f94  ldr w8,[x20, #0x164]
71019a9f98  cmp w8,#0x11
71019a9f9c  b.gt 0x71019a9fbc
71019a9fa0  add w8,w8,#0x1
71019a9fa4  cmp w8,#0x13
71019a9fa8  str w8,[x20, #0x164]
71019a9fac  b.cs 0x71019aa668
71019a9fb0  add x8,x20,w8, SXTW  #0x2
71019a9fb4  mov w9,#0xb
71019a9fb8  str w9,[x8, #0x118]
71019a9fbc  mov x0,x20
71019a9fc0  bl 0x71039c1a50
71019a9fc4  ldrsw x8,[x19, #0x2cc]
71019a9fc8  cmp w8,#0x13
71019a9fcc  b.cs 0x71019aa668
71019a9fd0  add x8,x19,x8, LSL #0x2
71019a9fd4  orr w9,wzr,#0xc
71019a9fd8  str w9,[x8, #0x280]
71019a9fdc  ldr w8,[x19, #0x2cc]
71019a9fe0  cmp w8,#0x11
71019a9fe4  b.gt 0x71019aa054
71019a9fe8  add w8,w8,#0x1
71019a9fec  cmp w8,#0x13
71019a9ff0  str w8,[x19, #0x2cc]
71019a9ff4  b.cs 0x71019aa668
71019a9ff8  add x8,x19,w8, SXTW  #0x2
71019a9ffc  mov w9,#0x1
71019aa000  str w9,[x8, #0x280]
71019aa004  ldr w8,[x19, #0x2cc]
71019aa008  cmp w8,#0x11
71019aa00c  b.gt 0x71019aa054
71019aa010  add w8,w8,#0x1
71019aa014  cmp w8,#0x13
71019aa018  str w8,[x19, #0x2cc]
71019aa01c  b.cs 0x71019aa668
71019aa020  add x8,x19,w8, SXTW  #0x2
71019aa024  mov w9,#0x15
71019aa028  str w9,[x8, #0x280]
71019aa02c  ldr w8,[x19, #0x2cc]
71019aa030  cmp w8,#0x11
71019aa034  b.gt 0x71019aa054
71019aa038  add w8,w8,#0x1
71019aa03c  cmp w8,#0x13
71019aa040  str w8,[x19, #0x2cc]
71019aa044  b.cs 0x71019aa668
71019aa048  add x8,x19,w8, SXTW  #0x2
71019aa04c  mov w9,#0x20
71019aa050  str w9,[x8, #0x280]
71019aa054  adrp x8,0x710532f000
71019aa058  ldr x8,[x8, #0x8d0]
71019aa05c  ldr x0,[x8, #0x8]
71019aa060  ldp x8,x9,[x0, #0x40]
71019aa064  sub x9,x9,x8
71019aa068  asr x9,x9,#0x3
71019aa06c  cmp x9,#0x4
71019aa070  b.cc 0x71019aa488
71019aa074  ldr x20,[x8, #0x18]
71019aa078  ldrb w8,[x0, #0x191]
71019aa07c  cbnz w8,0x71019aa504
71019aa080  b 0x71019aa494
71019aa084  ldr x8,[x0]
71019aa088  ldr x8,[x8, #0x20]
71019aa08c  blr x8
71019aa090  ldr x0,[sp, #0x60]
71019aa094  add x8,sp,#0x40
71019aa098  cmp x8,x0
71019aa09c  b.eq 0x71019aa0b0
71019aa0a0  cbz x0,0x71019aa0bc
71019aa0a4  ldr x8,[x0]
71019aa0a8  ldr x8,[x8, #0x28]
71019aa0ac  b 0x71019aa0b8
71019aa0b0  ldr x8,[x0]
71019aa0b4  ldr x8,[x8, #0x20]
71019aa0b8  blr x8
71019aa0bc  ldr x8,[x21, #0x7b0]
71019aa0c0  ldr x9,[x19, #0x328]
71019aa0c4  ldr w9,[x9, #0xb0]
71019aa0c8  ldr x8,[x8, #0x8]
71019aa0cc  str w9,[x8, #0x178]
71019aa0d0  adrp x8,0x7105314000
71019aa0d4  add x8,x8,#0x4d8
71019aa0d8  ldarb w8,[x8]
71019aa0dc  tbz w8,#0x0,0x71019aa628
71019aa0e0  adrp x8,0x7105307000
71019aa0e4  ldr w22,[x8, #0xd50]
71019aa0e8  ldr x21,[x21, #0x7b0]
71019aa0ec  mov w0,#0x10
71019aa0f0  mov w1,#0x4
71019aa0f4  bl 0x710392e290
71019aa0f8  mov x20,x0
71019aa0fc  cbnz x0,0x71019aa148
71019aa100  adrp x8,0x7105332000
71019aa104  ldr x0,[x8, #0xf00]
71019aa108  cbz x0,0x71019aa144
71019aa10c  mov w8,#0x4
71019aa110  str wzr,[sp, #0x40]
71019aa114  add x1,sp,#0x40
71019aa118  str x8,[sp, #0x70]
71019aa11c  ldr x8,[x0]
71019aa120  ldr x8,[x8, #0x30]
71019aa124  add x2,sp,#0x70
71019aa128  blr x8
71019aa12c  tbz w0,#0x0,0x71019aa144
71019aa130  mov w0,#0x10
71019aa134  mov w1,#0x4
71019aa138  bl 0x710392e290
71019aa13c  mov x20,x0
71019aa140  cbnz x0,0x71019aa148
71019aa144  mov x20,xzr
71019aa148  str w22,[x20]
71019aa14c  ldr x21,[x21, #0x8]
71019aa150  mov x0,x21
71019aa154  bl 0x71039c1a40
71019aa158  mov w8,#0xa50
71019aa15c  movk w8,#0x1, LSL #16
71019aa160  ldrb w8,[x21, x8, LSL ]
71019aa164  cbz w8,0x71019aa1d8
71019aa168  mov w8,#0xa51
71019aa16c  movk w8,#0x1, LSL #16
71019aa170  mov w9,#0x1
71019aa174  strb w9,[x21, x8, LSL ]
71019aa178  str w9,[x21, #0xa28]
71019aa17c  mov w8,#0xa4a
71019aa180  movk w8,#0x1, LSL #16
71019aa184  mov w9,#0x1
71019aa188  movk w9,#0x100, LSL #16
71019aa18c  strh wzr,[x21, #0xa20]
71019aa190  add x2,x20,#0x4
71019aa194  str w9,[x21, x8, LSL #0x0]
71019aa198  mov w8,#0xa4e
71019aa19c  movk w8,#0x1, LSL #16
71019aa1a0  mov w9,#0xa30
71019aa1a4  movk w9,#0x1, LSL #16
71019aa1a8  strh wzr,[x21, x8, LSL #0x0]
71019aa1ac  mov w8,#0xffffffff
71019aa1b0  add x0,x21,x9
71019aa1b4  str w8,[x21, #0x214]
71019aa1b8  mov x1,x20
71019aa1bc  bl 0x71014bfc60
71019aa1c0  ldrsw x8,[x21, #0x164]
71019aa1c4  cmp w8,#0x13
71019aa1c8  b.cs 0x71019aa668
71019aa1cc  add x8,x21,x8, LSL #0x2
71019aa1d0  mov w9,#0x5
71019aa1d4  str w9,[x8, #0x118]
71019aa1d8  mov x0,x21
71019aa1dc  bl 0x71039c1a50
71019aa1e0  cbz x20,0x71019aa1ec
71019aa1e4  mov x0,x20
71019aa1e8  bl 0x710392eb40
71019aa1ec  mov w8,#0x1
71019aa1f0  add x10,x19,#0x3dc
71019aa1f4  str xzr,[x19, #0x340]
71019aa1f8  strb w8,[x19, #0x404]
71019aa1fc  str xzr,[x19, #0x338]
71019aa200  add x9,x19,#0x39c
71019aa204  str xzr,[x10]
71019aa208  add x10,x19,#0x3d4
71019aa20c  str xzr,[x10]
71019aa210  add x10,x19,#0x3cc
71019aa214  str xzr,[x10]
71019aa218  add x10,x19,#0x3c4
71019aa21c  str xzr,[x10]
71019aa220  add x10,x19,#0x3bc
71019aa224  str xzr,[x10]
71019aa228  add x10,x19,#0x3b4
71019aa22c  str xzr,[x10]
71019aa230  add x10,x19,#0x3ac
71019aa234  str xzr,[x10]
71019aa238  add x10,x19,#0x3a4
71019aa23c  str xzr,[x10]
71019aa240  str xzr,[x9]
71019aa244  mov w9,#0xffffffff
71019aa248  str x9,[x19, #0x3e8]
71019aa24c  str w9,[x19, #0x3f0]
71019aa250  ldr x9,[x19, #0x328]
71019aa254  str wzr,[x19, #0x3e4]
71019aa258  strb wzr,[x19, #0x3f4]
71019aa25c  str w8,[x19, #0x398]
71019aa260  ldrsw x1,[x9, #0xb0]
71019aa264  cmn w1,#0x1
71019aa268  b.eq 0x71019aa470
71019aa26c  cmp w1,#0x9
71019aa270  adrp x8,0x7105339000
71019aa274  add x8,x8,#0x830
71019aa278  b.hi 0x71019aa29c
71019aa27c  adrp x9,0x7105339000
71019aa280  ldr x9,[x9, #0x8b0]
71019aa284  ldrb w9,[x9, #0x8]
71019aa288  cbz w9,0x71019aa29c
71019aa28c  adrp x8,0x7105339000
71019aa290  add x8,x8,#0x860
71019aa294  ldr x8,[x8, x1, LSL #0x3]
71019aa298  cbz x8,0x71019aa2d4
71019aa29c  ldr x8,[x8, #0x10]
71019aa2a0  ldr w8,[x8, #0x9c]
71019aa2a4  sub w8,w8,#0x1
71019aa2a8  cmp w8,#0x6
71019aa2ac  b.hi 0x71019aa2d4
71019aa2b0  adrp x9,0x7104753000
71019aa2b4  add x9,x9,#0xde0
71019aa2b8  fmov s0,0x3f800000
71019aa2bc  ldr w8,[x9, w8, SXTW #0x2]
71019aa2c0  fmov s1,wzr
71019aa2c4  sub w8,w8,#0x1
71019aa2c8  cmp w8,#0x2
71019aa2cc  fcsel s0,s1,s0,cc
71019aa2d0  b 0x71019aa2d8
71019aa2d4  fmov s0,0x3f800000
71019aa2d8  adrp x8,0x71052c5000
71019aa2dc  ldr x8,[x8, #0x120]
71019aa2e0  ldr x0,[x8, #0x8]
71019aa2e4  fmov s1,0x3f800000
71019aa2e8  mov x2,#0x19fc
71019aa2ec  movk x2,#0x5fc4, LSL #16
71019aa2f0  movk x2,#0x16, LSL #32
71019aa2f4  mov w3,wzr
71019aa2f8  mov w4,wzr
71019aa2fc  mov w5,wzr
71019aa300  mov w6,wzr
71019aa304  mov w7,wzr
71019aa308  bl 0x710175dfc0
71019aa30c  b 0x71019aa470
71019aa310  adrp x8,0x7104f73000
71019aa314  add x8,x8,#0xd30
71019aa318  stp wzr,w22,[sp, #0x88]
71019aa31c  stp x8,xzr,[sp, #0x78]
71019aa320  mov x8,#-0x1
71019aa324  strb wzr,[sp, #0x90]
71019aa328  str wzr,[sp, #0x70]
71019aa32c  str xzr,[sp, #0xa8]
71019aa330  stp x8,xzr,[sp, #0x98]
71019aa334  str wzr,[x20]
71019aa338  ldr x8,[x19, #0x538]
71019aa33c  cbz x8,0x71019aa378
71019aa340  adrp x9,0x7106dd5000
71019aa344  ldrb w9,[x9, #0x3a8]
71019aa348  cmp w9,#0x1
71019aa34c  b.ne 0x71019aa378
71019aa350  adrp x10,0x7106dd5000
71019aa354  ldr w9,[x19, #0x540]
71019aa358  ldr w10,[x10, #0x3ac]
71019aa35c  cmp w9,w10
71019aa360  b.ne 0x71019aa378
71019aa364  ldr wzr,[x8, #0x38]!
71019aa368  ldaxr w9,[x8]
71019aa36c  sub w9,w9,#0x1
71019aa370  stlxr w10,w9,[x8]
71019aa374  cbnz w10,0x71019aa368
71019aa378  str xzr,[x19, #0x538]
71019aa37c  add x9,x19,#0x548
71019aa380  strb wzr,[x9]
71019aa384  ldr x8,[sp, #0x80]
71019aa388  ldp x9,x10,[sp, #0x98]
71019aa38c  ldr x11,[sp, #0xa8]
71019aa390  str x9,[x19, #0x550]
71019aa394  adrp x9,0x7104f73000
71019aa398  add x9,x9,#0xd50
71019aa39c  str x11,[x19, #0x560]
71019aa3a0  str x10,[x19, #0x558]
71019aa3a4  str x9,[sp, #0x78]
71019aa3a8  cbz x8,0x71019aa3e4
71019aa3ac  adrp x9,0x7106dd5000
71019aa3b0  ldrb w9,[x9, #0x3a8]
71019aa3b4  cmp w9,#0x1
71019aa3b8  b.ne 0x71019aa3e4
71019aa3bc  adrp x10,0x7106dd5000
71019aa3c0  ldr w9,[sp, #0x88]
71019aa3c4  ldr w10,[x10, #0x3ac]
71019aa3c8  cmp w9,w10
71019aa3cc  b.ne 0x71019aa3e4
71019aa3d0  ldr wzr,[x8, #0x38]!
71019aa3d4  ldaxr w9,[x8]
71019aa3d8  sub w9,w9,#0x1
71019aa3dc  stlxr w10,w9,[x8]
71019aa3e0  cbnz w10,0x71019aa3d4
71019aa3e4  mov x8,#0x2
71019aa3e8  str xzr,[sp, #0x80]
71019aa3ec  str wzr,[x19, #0x400]
71019aa3f0  movk x8,#0x3, LSL #32
71019aa3f4  str x8,[x19, #0x3f8]
71019aa3f8  ldrsw x8,[x19, #0x2cc]
71019aa3fc  cmp w8,#0x13
71019aa400  b.cs 0x71019aa668
71019aa404  add x8,x19,x8, LSL #0x2
71019aa408  mov w9,#0x13
71019aa40c  str w9,[x8, #0x280]
71019aa410  ldr x8,[x19, #0x328]
71019aa414  ldrsw x8,[x8, #0xb0]
71019aa418  cmn w8,#0x1
71019aa41c  b.eq 0x71019aa470
71019aa420  cmp w8,#0xa
71019aa424  b.cs 0x71019aa668
71019aa428  adrp x9,0x7105339000
71019aa42c  ldr x9,[x9, #0x8d8]
71019aa430  ldr x9,[x9, #0x8]
71019aa434  add x8,x9,x8, LSL #0x3
71019aa438  ldr x8,[x8, #0x8]
71019aa43c  ldr w9,[x8, #0xa8]
71019aa440  cmp w9,#0x1
71019aa444  b.eq 0x71019aa450
71019aa448  ldrb w9,[x8, #0xdd]
71019aa44c  cbz w9,0x71019aa470
71019aa450  mov w9,#0x100
71019aa454  sturh w9,[x8, #0xdd]
71019aa458  ldrsw x9,[x8, #0xa4]
71019aa45c  cmp w9,#0x13
71019aa460  b.cs 0x71019aa668
71019aa464  add x8,x8,x9, LSL #0x2
71019aa468  mov w9,#0x2
71019aa46c  str w9,[x8, #0x58]
71019aa470  ldp x29,x30,[sp, #0xe0]
71019aa474  ldr x23,[sp, #0xb0]
71019aa478  ldp x20,x19,[sp, #0xd0]
71019aa47c  ldp x22,x21,[sp, #0xc0]
71019aa480  add sp,sp,#0xf0
71019aa484  ret
71019aa488  mov x20,xzr
71019aa48c  ldrb w8,[x0, #0x191]
71019aa490  cbnz w8,0x71019aa504
71019aa494  mov w2,#0x4
71019aa498  mov x1,x20
71019aa49c  bl 0x7103313f20
71019aa4a0  tbz w0,#0x0,0x71019aa504
71019aa4a4  mov x0,sp
71019aa4a8  mov x1,x20
71019aa4ac  bl 0x71024076d0
71019aa4b0  ldr x8,[sp, #0x10]
71019aa4b4  adrp x9,0x7104f73000
71019aa4b8  add x9,x9,#0xd50
71019aa4bc  str x9,[sp, #0x8]
71019aa4c0  cbz x8,0x71019aa530
71019aa4c4  adrp x8,0x7106dd5000
71019aa4c8  ldrb w8,[x8, #0x3a8]
71019aa4cc  cmp w8,#0x1
71019aa4d0  b.ne 0x71019aa530
71019aa4d4  adrp x9,0x7106dd5000
71019aa4d8  ldr w8,[sp, #0x18]
71019aa4dc  ldr w9,[x9, #0x3ac]
71019aa4e0  cmp w8,w9
71019aa4e4  b.ne 0x71019aa530
71019aa4e8  ldr x8,[sp, #0x10]
71019aa4ec  ldr wzr,[x8, #0x38]!
71019aa4f0  ldaxr w9,[x8]
71019aa4f4  sub w9,w9,#0x1
71019aa4f8  stlxr w10,w9,[x8]
71019aa4fc  cbnz w10,0x71019aa4f0
71019aa500  b 0x71019aa530
71019aa504  mov x8,#0x650000000000
71019aa508  movk x8,#0x87, LSL #48
71019aa50c  strb wzr,[sp, #0x20]
71019aa510  stp xzr,x8,[sp, #0x10]
71019aa514  mov x8,#-0x1
71019aa518  stp x8,xzr,[sp, #0x28]
71019aa51c  adrp x8,0x7104f73000
71019aa520  add x8,x8,#0xd50
71019aa524  str wzr,[sp]
71019aa528  str xzr,[sp, #0x38]
71019aa52c  str x8,[sp, #0x8]
71019aa530  str xzr,[sp, #0x10]
71019aa534  strb wzr,[sp, #0x20]
71019aa538  b 0x71019aa410
71019aa53c  str w9,[x19, #0x540]
71019aa540  add x9,x19,#0x548
71019aa544  str x8,[x19, #0x538]
71019aa548  add x8,x8,#0x38
71019aa54c  ldaxr w10,[x8]
71019aa550  add w10,w10,#0x1
71019aa554  stlxr w11,w10,[x8]
71019aa558  cbnz w11,0x71019aa54c
71019aa55c  b 0x71019aa380
71019aa560  ldr x0,[x19, #0x538]
71019aa564  cbz x0,0x71019a9cd8
71019aa568  ldr x8,[x0]
71019aa56c  ldr x8,[x8, #0x20]
71019aa570  blr x8
71019aa574  tbnz w0,#0x0,0x71019a9cd8
71019aa578  ldr x0,[x19, #0x538]
71019aa57c  ldr x8,[x0]
71019aa580  ldr x8,[x8, #0x68]
71019aa584  blr x8
71019aa588  tbnz w0,#0x0,0x71019a9cd8
71019aa58c  mov x0,x20
71019aa590  mov w1,wzr
71019aa594  bl 0x710373b540
71019aa598  add x21,x19,#0x530
71019aa59c  mov x0,x21
71019aa5a0  str wzr,[x19, #0x528]
71019aa5a4  bl 0x71039602c0
71019aa5a8  adrp x8,0x7104f73000
71019aa5ac  add x8,x8,#0xd50
71019aa5b0  str x8,[x19, #0x530]
71019aa5b4  ldr x8,[x19, #0x538]
71019aa5b8  cbz x8,0x71019aa5f0
71019aa5bc  ldrb w9,[x23, #0x3a8]
71019aa5c0  cmp w9,#0x1
71019aa5c4  b.ne 0x71019aa5f0
71019aa5c8  adrp x9,0x7106dd5000
71019aa5cc  ldr w10,[x19, #0x540]
71019aa5d0  ldr w9,[x9, #0x3ac]
71019aa5d4  cmp w10,w9
71019aa5d8  b.ne 0x71019aa5f0
71019aa5dc  ldr wzr,[x8, #0x38]!
71019aa5e0  ldaxr w9,[x8]
71019aa5e4  sub w9,w9,#0x1
71019aa5e8  stlxr w10,w9,[x8]
71019aa5ec  cbnz w10,0x71019aa5e0
71019aa5f0  adrp x8,0x7104f73000
71019aa5f4  add x8,x8,#0xd30
71019aa5f8  stp xzr,xzr,[x21, #0x10]
71019aa5fc  stp xzr,xzr,[x21]
71019aa600  str x8,[x19, #0x530]
71019aa604  mov x8,#-0x1
71019aa608  str xzr,[x19, #0x538]
71019aa60c  str wzr,[x19, #0x540]
71019aa610  str w22,[x19, #0x544]
71019aa614  strb wzr,[x19, #0x548]
71019aa618  str x8,[x19, #0x550]
71019aa61c  str xzr,[x19, #0x558]
71019aa620  str wzr,[x19, #0x564]
71019aa624  b 0x71019a9cd8
71019aa628  adrp x0,0x7105314000
71019aa62c  add x0,x0,#0x4d8
71019aa630  bl 0x71039c06b0
71019aa634  cbz w0,0x71019aa0e0
71019aa638  bl 0x7101764000
71019aa63c  adrp x0,0x7101763000
71019aa640  add x0,x0,#0xc40
71019aa644  adrp x1,0x71052c5000
71019aa648  add x1,x1,#0x180
71019aa64c  adrp x2,0x7104f17000
71019aa650  add x2,x2,#0x0
71019aa654  bl 0x71000001c0
71019aa658  adrp x0,0x7105314000
71019aa65c  add x0,x0,#0x4d8
71019aa660  bl 0x71039c06c0
71019aa664  b 0x71019aa0e0
71019aa668  bl 0x71039c2650
