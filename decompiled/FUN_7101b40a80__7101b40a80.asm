// addr:      7101b40a80
// offset:    0x1b40a80
// name:      FUN_7101b40a80
// mangled:   
// size:      1204

7101b40a80  sub sp,sp,#0x60
7101b40a84  stp x22,x21,[sp, #0x30]
7101b40a88  stp x20,x19,[sp, #0x40]
7101b40a8c  stp x29,x30,[sp, #0x50]
7101b40a90  add x29,sp,#0x50
7101b40a94  ldr x8,[x0, #0x8]
7101b40a98  ldr x8,[x8]
7101b40a9c  mov x19,x0
7101b40aa0  add x0,x8,#0x8
7101b40aa4  add x8,sp,#0x10
7101b40aa8  mov w20,w2
7101b40aac  bl 0x7103776640
7101b40ab0  ldr x8,[x19]
7101b40ab4  ldr x22,[x8, #0x78]
7101b40ab8  mov x0,sp
7101b40abc  add x1,sp,#0x10
7101b40ac0  mov w21,w20
7101b40ac4  bl 0x7103776390
7101b40ac8  mov w8,#0xb8
7101b40acc  umaddl x20,w20,w8,x19
7101b40ad0  adrp x1,0x710435b000
7101b40ad4  add x1,x1,#0x2e8
7101b40ad8  add x8,sp,#0x20
7101b40adc  mov x0,sp
7101b40ae0  str x22,[x20, #0x70]
7101b40ae4  add x22,sp,#0x20
7101b40ae8  bl 0x71037780e0
7101b40aec  add x8,x20,#0x78
7101b40af0  cmp x8,x22
7101b40af4  b.eq 0x7101b40b18
7101b40af8  mov w8,#0xb8
7101b40afc  madd x8,x21,x8,x19
7101b40b00  ldr x9,[sp, #0x28]
7101b40b04  str xzr,[sp, #0x28]
7101b40b08  ldr x0,[x8, #0x80]
7101b40b0c  str x9,[x8, #0x80]
7101b40b10  cbz x0,0x7101b40b18
7101b40b14  bl 0x710392eb40
7101b40b18  ldr x0,[sp, #0x28]
7101b40b1c  adrp x20,0x710523d000
7101b40b20  add x20,x20,#0x9e8
7101b40b24  stp x20,xzr,[sp, #0x20]
7101b40b28  cbz x0,0x7101b40b30
7101b40b2c  bl 0x710392eb40
7101b40b30  adrp x1,0x7104432000
7101b40b34  add x1,x1,#0xcbd
7101b40b38  add x8,sp,#0x20
7101b40b3c  mov x0,sp
7101b40b40  add x22,sp,#0x20
7101b40b44  bl 0x71037780e0
7101b40b48  mov w8,#0xb8
7101b40b4c  madd x8,x21,x8,x19
7101b40b50  add x8,x8,#0x88
7101b40b54  cmp x8,x22
7101b40b58  b.eq 0x7101b40b7c
7101b40b5c  mov w8,#0xb8
7101b40b60  madd x8,x21,x8,x19
7101b40b64  ldr x9,[sp, #0x28]
7101b40b68  str xzr,[sp, #0x28]
7101b40b6c  ldr x0,[x8, #0x90]
7101b40b70  str x9,[x8, #0x90]
7101b40b74  cbz x0,0x7101b40b7c
7101b40b78  bl 0x710392eb40
7101b40b7c  ldr x0,[sp, #0x28]
7101b40b80  stp x20,xzr,[sp, #0x20]
7101b40b84  cbz x0,0x7101b40b8c
7101b40b88  bl 0x710392eb40
7101b40b8c  adrp x1,0x710436b000
7101b40b90  add x1,x1,#0xfb2
7101b40b94  add x8,sp,#0x20
7101b40b98  mov x0,sp
7101b40b9c  add x22,sp,#0x20
7101b40ba0  bl 0x71037780e0
7101b40ba4  mov w8,#0xb8
7101b40ba8  madd x8,x21,x8,x19
7101b40bac  add x8,x8,#0x98
7101b40bb0  cmp x8,x22
7101b40bb4  b.eq 0x7101b40bd8
7101b40bb8  mov w8,#0xb8
7101b40bbc  madd x8,x21,x8,x19
7101b40bc0  ldr x9,[sp, #0x28]
7101b40bc4  str xzr,[sp, #0x28]
7101b40bc8  ldr x0,[x8, #0xa0]
7101b40bcc  str x9,[x8, #0xa0]
7101b40bd0  cbz x0,0x7101b40bd8
7101b40bd4  bl 0x710392eb40
7101b40bd8  ldr x0,[sp, #0x28]
7101b40bdc  stp x20,xzr,[sp, #0x20]
7101b40be0  cbz x0,0x7101b40be8
7101b40be4  bl 0x710392eb40
7101b40be8  adrp x1,0x7104339000
7101b40bec  add x1,x1,#0xe65
7101b40bf0  add x8,sp,#0x20
7101b40bf4  mov x0,sp
7101b40bf8  add x22,sp,#0x20
7101b40bfc  bl 0x71037780e0
7101b40c00  mov w8,#0xb8
7101b40c04  madd x8,x21,x8,x19
7101b40c08  add x8,x8,#0xa8
7101b40c0c  cmp x8,x22
7101b40c10  b.eq 0x7101b40c34
7101b40c14  mov w8,#0xb8
7101b40c18  madd x8,x21,x8,x19
7101b40c1c  ldr x9,[sp, #0x28]
7101b40c20  str xzr,[sp, #0x28]
7101b40c24  ldr x0,[x8, #0xb0]
7101b40c28  str x9,[x8, #0xb0]
7101b40c2c  cbz x0,0x7101b40c34
7101b40c30  bl 0x710392eb40
7101b40c34  ldr x0,[sp, #0x28]
7101b40c38  stp x20,xzr,[sp, #0x20]
7101b40c3c  cbz x0,0x7101b40c44
7101b40c40  bl 0x710392eb40
7101b40c44  adrp x1,0x7104308000
7101b40c48  add x1,x1,#0x17f
7101b40c4c  add x8,sp,#0x20
7101b40c50  mov x0,sp
7101b40c54  add x22,sp,#0x20
7101b40c58  bl 0x71037780e0
7101b40c5c  mov w8,#0xb8
7101b40c60  madd x8,x21,x8,x19
7101b40c64  add x8,x8,#0xb8
7101b40c68  cmp x8,x22
7101b40c6c  b.eq 0x7101b40c90
7101b40c70  mov w8,#0xb8
7101b40c74  madd x8,x21,x8,x19
7101b40c78  ldr x9,[sp, #0x28]
7101b40c7c  str xzr,[sp, #0x28]
7101b40c80  ldr x0,[x8, #0xc0]
7101b40c84  str x9,[x8, #0xc0]
7101b40c88  cbz x0,0x7101b40c90
7101b40c8c  bl 0x710392eb40
7101b40c90  ldr x0,[sp, #0x28]
7101b40c94  stp x20,xzr,[sp, #0x20]
7101b40c98  cbz x0,0x7101b40ca0
7101b40c9c  bl 0x710392eb40
7101b40ca0  adrp x1,0x710425e000
7101b40ca4  add x1,x1,#0xffb
7101b40ca8  add x8,sp,#0x20
7101b40cac  mov x0,sp
7101b40cb0  add x22,sp,#0x20
7101b40cb4  bl 0x71037780e0
7101b40cb8  mov w8,#0xb8
7101b40cbc  madd x8,x21,x8,x19
7101b40cc0  add x8,x8,#0xc8
7101b40cc4  cmp x8,x22
7101b40cc8  b.eq 0x7101b40cec
7101b40ccc  mov w8,#0xb8
7101b40cd0  madd x8,x21,x8,x19
7101b40cd4  ldr x9,[sp, #0x28]
7101b40cd8  str xzr,[sp, #0x28]
7101b40cdc  ldr x0,[x8, #0xd0]
7101b40ce0  str x9,[x8, #0xd0]
7101b40ce4  cbz x0,0x7101b40cec
7101b40ce8  bl 0x710392eb40
7101b40cec  ldr x0,[sp, #0x28]
7101b40cf0  stp x20,xzr,[sp, #0x20]
7101b40cf4  cbz x0,0x7101b40cfc
7101b40cf8  bl 0x710392eb40
7101b40cfc  adrp x1,0x710424f000
7101b40d00  add x1,x1,#0x137
7101b40d04  add x8,sp,#0x20
7101b40d08  mov x0,sp
7101b40d0c  add x22,sp,#0x20
7101b40d10  bl 0x71037780e0
7101b40d14  mov w8,#0xb8
7101b40d18  madd x8,x21,x8,x19
7101b40d1c  add x8,x8,#0xd8
7101b40d20  cmp x8,x22
7101b40d24  b.eq 0x7101b40d48
7101b40d28  mov w8,#0xb8
7101b40d2c  madd x8,x21,x8,x19
7101b40d30  ldr x9,[sp, #0x28]
7101b40d34  str xzr,[sp, #0x28]
7101b40d38  ldr x0,[x8, #0xe0]
7101b40d3c  str x9,[x8, #0xe0]
7101b40d40  cbz x0,0x7101b40d48
7101b40d44  bl 0x710392eb40
7101b40d48  ldr x0,[sp, #0x28]
7101b40d4c  stp x20,xzr,[sp, #0x20]
7101b40d50  cbz x0,0x7101b40d58
7101b40d54  bl 0x710392eb40
7101b40d58  adrp x1,0x710437c000
7101b40d5c  add x1,x1,#0x1ac
7101b40d60  add x8,sp,#0x20
7101b40d64  mov x0,sp
7101b40d68  add x22,sp,#0x20
7101b40d6c  bl 0x71037780e0
7101b40d70  mov w8,#0xb8
7101b40d74  madd x8,x21,x8,x19
7101b40d78  add x8,x8,#0xe8
7101b40d7c  cmp x8,x22
7101b40d80  b.eq 0x7101b40da4
7101b40d84  mov w8,#0xb8
7101b40d88  madd x8,x21,x8,x19
7101b40d8c  ldr x9,[sp, #0x28]
7101b40d90  str xzr,[sp, #0x28]
7101b40d94  ldr x0,[x8, #0xf0]
7101b40d98  str x9,[x8, #0xf0]
7101b40d9c  cbz x0,0x7101b40da4
7101b40da0  bl 0x710392eb40
7101b40da4  ldr x0,[sp, #0x28]
7101b40da8  stp x20,xzr,[sp, #0x20]
7101b40dac  cbz x0,0x7101b40db4
7101b40db0  bl 0x710392eb40
7101b40db4  adrp x1,0x7104280000
7101b40db8  add x1,x1,#0x718
7101b40dbc  add x8,sp,#0x20
7101b40dc0  mov x0,sp
7101b40dc4  add x20,sp,#0x20
7101b40dc8  bl 0x7103776910
7101b40dcc  mov w8,#0xb8
7101b40dd0  madd x8,x21,x8,x19
7101b40dd4  add x8,x8,#0xf8
7101b40dd8  cmp x8,x20
7101b40ddc  b.eq 0x7101b40e00
7101b40de0  mov w8,#0xb8
7101b40de4  madd x8,x21,x8,x19
7101b40de8  ldr x9,[sp, #0x28]
7101b40dec  str xzr,[sp, #0x28]
7101b40df0  ldr x0,[x8, #0x100]
7101b40df4  str x9,[x8, #0x100]
7101b40df8  cbz x0,0x7101b40e00
7101b40dfc  bl 0x710392eb40
7101b40e00  ldr x0,[sp, #0x28]
7101b40e04  adrp x20,0x710523d000
7101b40e08  add x20,x20,#0x9a8
7101b40e0c  stp x20,xzr,[sp, #0x20]
7101b40e10  cbz x0,0x7101b40e18
7101b40e14  bl 0x710392eb40
7101b40e18  adrp x1,0x7104280000
7101b40e1c  add x1,x1,#0x723
7101b40e20  add x8,sp,#0x20
7101b40e24  mov x0,sp
7101b40e28  add x22,sp,#0x20
7101b40e2c  bl 0x7103776910
7101b40e30  mov w8,#0xb8
7101b40e34  madd x8,x21,x8,x19
7101b40e38  add x8,x8,#0x108
7101b40e3c  cmp x8,x22
7101b40e40  b.eq 0x7101b40e64
7101b40e44  mov w8,#0xb8
7101b40e48  madd x8,x21,x8,x19
7101b40e4c  ldr x9,[sp, #0x28]
7101b40e50  str xzr,[sp, #0x28]
7101b40e54  ldr x0,[x8, #0x110]
7101b40e58  str x9,[x8, #0x110]
7101b40e5c  cbz x0,0x7101b40e64
7101b40e60  bl 0x710392eb40
7101b40e64  ldr x0,[sp, #0x28]
7101b40e68  stp x20,xzr,[sp, #0x20]
7101b40e6c  cbz x0,0x7101b40e74
7101b40e70  bl 0x710392eb40
7101b40e74  adrp x1,0x7104421000
7101b40e78  add x1,x1,#0xfe6
7101b40e7c  add x8,sp,#0x20
7101b40e80  mov x0,sp
7101b40e84  add x22,sp,#0x20
7101b40e88  bl 0x7103776910
7101b40e8c  mov w8,#0xb8
7101b40e90  madd x8,x21,x8,x19
7101b40e94  add x8,x8,#0x118
7101b40e98  cmp x8,x22
7101b40e9c  b.eq 0x7101b40ec0
7101b40ea0  mov w8,#0xb8
7101b40ea4  madd x8,x21,x8,x19
7101b40ea8  ldr x9,[sp, #0x28]
7101b40eac  str xzr,[sp, #0x28]
7101b40eb0  ldr x0,[x8, #0x120]
7101b40eb4  str x9,[x8, #0x120]
7101b40eb8  cbz x0,0x7101b40ec0
7101b40ebc  bl 0x710392eb40
7101b40ec0  ldr x0,[sp, #0x28]
7101b40ec4  stp x20,xzr,[sp, #0x20]
7101b40ec8  cbz x0,0x7101b40ed0
7101b40ecc  bl 0x710392eb40
7101b40ed0  ldr x19,[sp, #0x8]
7101b40ed4  adrp x21,0x710523d000
7101b40ed8  add x21,x21,#0x988
7101b40edc  stp x21,xzr,[sp]
7101b40ee0  cbz x19,0x7101b40efc
7101b40ee4  ldr x0,[x19, #0x18]
7101b40ee8  stp x20,xzr,[x19, #0x10]
7101b40eec  cbz x0,0x7101b40ef4
7101b40ef0  bl 0x710392eb40
7101b40ef4  mov x0,x19
7101b40ef8  bl 0x710392eb40
7101b40efc  ldr x19,[sp, #0x18]
7101b40f00  stp x21,xzr,[sp, #0x10]
7101b40f04  cbz x19,0x7101b40f20
7101b40f08  ldr x0,[x19, #0x18]
7101b40f0c  stp x20,xzr,[x19, #0x10]
7101b40f10  cbz x0,0x7101b40f18
7101b40f14  bl 0x710392eb40
7101b40f18  mov x0,x19
7101b40f1c  bl 0x710392eb40
7101b40f20  ldp x29,x30,[sp, #0x50]
7101b40f24  ldp x20,x19,[sp, #0x40]
7101b40f28  ldp x22,x21,[sp, #0x30]
7101b40f2c  add sp,sp,#0x60
7101b40f30  ret
