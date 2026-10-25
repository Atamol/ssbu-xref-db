// addr:      7101ac0920
// offset:    0x1ac0920
// name:      FUN_7101ac0920
// mangled:   
// size:      2492

7101ac0920  sub sp,sp,#0xe0
7101ac0924  str d8,[sp, #0xa0]
7101ac0928  str x23,[sp, #0xa8]
7101ac092c  stp x22,x21,[sp, #0xb0]
7101ac0930  stp x20,x19,[sp, #0xc0]
7101ac0934  stp x29,x30,[sp, #0xd0]
7101ac0938  add x29,sp,#0xd0
7101ac093c  ldr w8,[x0, #0x20c]
7101ac0940  mov x19,x0
7101ac0944  cbz w8,0x7101ac0ad4
7101ac0948  ldr x8,[x19, #0x238]
7101ac094c  ldr x0,[x8, #0x8]
7101ac0950  mov x21,x1
7101ac0954  cbz x0,0x7101ac0978
7101ac0958  adrp x1,0x71042f8000
7101ac095c  add x1,x1,#0x402
7101ac0960  bl 0x71037964b0
7101ac0964  cbz x0,0x7101ac0978
7101ac0968  ldr x8,[x0]
7101ac096c  ldr x8,[x8, #0x138]
7101ac0970  blr x8
7101ac0974  tbz w0,#0x0,0x7101ac12ac
7101ac0978  ldr x8,[x21, #0x8]
7101ac097c  ldrb w9,[x8, #0x4aa]
7101ac0980  add x20,x19,#0x230
7101ac0984  cbz w9,0x7101ac0eec
7101ac0988  ldrb w9,[x8, #0x1b0]
7101ac098c  tbnz w9,#0x1,0x7101ac09a0
7101ac0990  ldrb w9,[x8, #0x1ac]
7101ac0994  tbnz w9,#0x1,0x7101ac09a0
7101ac0998  ldrb w8,[x8, #0x1a8]
7101ac099c  tbz w8,#0x1,0x7101ac0eec
7101ac09a0  adrp x1,0x71042e7000
7101ac09a4  add x1,x1,#0x35a
7101ac09a8  sub x8,x29,#0x50
7101ac09ac  mov x0,x20
7101ac09b0  bl 0x7103776640
7101ac09b4  mov w0,#0x10
7101ac09b8  mov w1,#0x8
7101ac09bc  bl 0x710392e290
7101ac09c0  mov x22,x0
7101ac09c4  cbnz x0,0x7101ac0a10
7101ac09c8  adrp x8,0x7105332000
7101ac09cc  ldr x0,[x8, #0xf00]
7101ac09d0  cbz x0,0x7101ac0a0c
7101ac09d4  mov w8,#0x8
7101ac09d8  stur wzr,[x29, #-0x34]
7101ac09dc  sub x1,x29,#0x34
7101ac09e0  stur x8,[x29, #-0x40]
7101ac09e4  ldr x8,[x0]
7101ac09e8  ldr x8,[x8, #0x30]
7101ac09ec  sub x2,x29,#0x40
7101ac09f0  blr x8
7101ac09f4  tbz w0,#0x0,0x7101ac0a0c
7101ac09f8  mov w0,#0x10
7101ac09fc  mov w1,#0x8
7101ac0a00  bl 0x710392e290
7101ac0a04  mov x22,x0
7101ac0a08  cbnz x0,0x7101ac0a10
7101ac0a0c  mov x22,xzr
7101ac0a10  str xzr,[x22]
7101ac0a14  ldur x21,[x29, #-0x48]
7101ac0a18  ldr x8,[x21, #0x8]
7101ac0a1c  cbz x8,0x7101ac0eb0
7101ac0a20  ldr x0,[x8, #0x60]
7101ac0a24  cbz x0,0x7101ac0eb0
7101ac0a28  ldr x8,[x8, #0x18]
7101ac0a2c  add x1,x8,#0xb0
7101ac0a30  bl 0x7103796f20
7101ac0a34  str x0,[x22]
7101ac0a38  cbz x0,0x7101ac0eb4
7101ac0a3c  ldr x8,[x0]
7101ac0a40  ldr x8,[x8, #0x238]
7101ac0a44  mov w1,wzr
7101ac0a48  mov x23,x0
7101ac0a4c  blr x8
7101ac0a50  ldr x8,[x23]
7101ac0a54  ldr x8,[x8, #0x228]
7101ac0a58  mov x0,x23
7101ac0a5c  mov w1,wzr
7101ac0a60  blr x8
7101ac0a64  ldr x8,[x23]
7101ac0a68  ldr x8,[x8, #0x200]
7101ac0a6c  mov x0,x23
7101ac0a70  blr x8
7101ac0a74  tbz w0,#0x0,0x7101ac0eb4
7101ac0a78  ldr x8,[x23]
7101ac0a7c  ldr x8,[x8, #0x210]
7101ac0a80  mov x0,x23
7101ac0a84  blr x8
7101ac0a88  tbz w0,#0x0,0x7101ac0eb4
7101ac0a8c  ldr x8,[x23]
7101ac0a90  ldr x8,[x8, #0x238]
7101ac0a94  mov w1,#0x1
7101ac0a98  mov x0,x23
7101ac0a9c  blr x8
7101ac0aa0  ldr x8,[x23]
7101ac0aa4  ldr x8,[x8, #0x3c8]
7101ac0aa8  mov x0,x23
7101ac0aac  blr x8
7101ac0ab0  ldr x8,[x23]
7101ac0ab4  ldr x8,[x8, #0x10]
7101ac0ab8  mov x0,x23
7101ac0abc  blr x8
7101ac0ac0  ldr x8,[x23]
7101ac0ac4  ldr x8,[x8, #0x18]
7101ac0ac8  mov x0,x23
7101ac0acc  blr x8
7101ac0ad0  b 0x7101ac0eb4
7101ac0ad4  ldr x0,[x19, #0x248]
7101ac0ad8  mov w8,#0x2
7101ac0adc  str w8,[x19, #0x3a4]
7101ac0ae0  ldr x8,[x0]
7101ac0ae4  ldr x8,[x8, #0x60]
7101ac0ae8  mov w1,wzr
7101ac0aec  blr x8
7101ac0af0  ldr x0,[x19, #0x240]
7101ac0af4  ldr x8,[x0]
7101ac0af8  ldr x8,[x8, #0x60]
7101ac0afc  mov w1,wzr
7101ac0b00  blr x8
7101ac0b04  ldr x0,[x19, #0x250]
7101ac0b08  ldr x8,[x0]
7101ac0b0c  ldr x8,[x8, #0x60]
7101ac0b10  mov w1,#0x1
7101ac0b14  blr x8
7101ac0b18  ldr x0,[x19, #0x258]
7101ac0b1c  ldr x8,[x0]
7101ac0b20  ldr x8,[x8, #0x60]
7101ac0b24  mov w1,wzr
7101ac0b28  blr x8
7101ac0b2c  ldr x0,[x19, #0x260]
7101ac0b30  ldr x8,[x0]
7101ac0b34  ldr x8,[x8, #0x60]
7101ac0b38  mov w1,wzr
7101ac0b3c  blr x8
7101ac0b40  ldr x0,[x19, #0x268]
7101ac0b44  ldr x8,[x0]
7101ac0b48  ldr x8,[x8, #0x60]
7101ac0b4c  mov w1,wzr
7101ac0b50  blr x8
7101ac0b54  add x20,x19,#0x230
7101ac0b58  adrp x1,0x710424f000
7101ac0b5c  add x1,x1,#0x6ab
7101ac0b60  sub x8,x29,#0x50
7101ac0b64  mov x0,x20
7101ac0b68  bl 0x7103776910
7101ac0b6c  ldur x0,[x29, #-0x48]
7101ac0b70  ldr x8,[x0]
7101ac0b74  cbz x8,0x7101ac0b84
7101ac0b78  ldrb w9,[x8, #0x58]
7101ac0b7c  and w9,w9,#0xfe
7101ac0b80  strb w9,[x8, #0x58]
7101ac0b84  adrp x23,0x710523d000
7101ac0b88  add x23,x23,#0x9a8
7101ac0b8c  stp x23,xzr,[x29, #-0x50]
7101ac0b90  cbz x0,0x7101ac0b98
7101ac0b94  bl 0x710392eb40
7101ac0b98  adrp x1,0x7104412000
7101ac0b9c  add x1,x1,#0xb00
7101ac0ba0  sub x8,x29,#0x50
7101ac0ba4  mov x0,x20
7101ac0ba8  bl 0x7103776910
7101ac0bac  ldur x0,[x29, #-0x48]
7101ac0bb0  ldr x8,[x0]
7101ac0bb4  cbz x8,0x7101ac0bc4
7101ac0bb8  ldrb w9,[x8, #0x58]
7101ac0bbc  and w9,w9,#0xfe
7101ac0bc0  strb w9,[x8, #0x58]
7101ac0bc4  add x21,x19,#0x250
7101ac0bc8  stp x23,xzr,[x29, #-0x50]
7101ac0bcc  cbz x0,0x7101ac0bd4
7101ac0bd0  bl 0x710392eb40
7101ac0bd4  ldr x0,[x19, #0x240]
7101ac0bd8  ldr x8,[x0]
7101ac0bdc  ldr x8,[x8, #0x70]
7101ac0be0  mov w1,wzr
7101ac0be4  blr x8
7101ac0be8  ldr x0,[x19, #0x248]
7101ac0bec  ldr x8,[x0]
7101ac0bf0  ldr x8,[x8, #0x70]
7101ac0bf4  mov w1,wzr
7101ac0bf8  blr x8
7101ac0bfc  ldr x0,[x19, #0x250]
7101ac0c00  ldr x8,[x0]
7101ac0c04  ldr x8,[x8, #0x70]
7101ac0c08  mov w1,wzr
7101ac0c0c  blr x8
7101ac0c10  adrp x8,0x710532f000
7101ac0c14  ldr x8,[x8, #0x8d0]
7101ac0c18  ldr x0,[x8, #0x8]
7101ac0c1c  ldrb w8,[x0, #0x191]
7101ac0c20  cbnz w8,0x7101ac0ca0
7101ac0c24  mov x22,#0x3247
7101ac0c28  movk x22,#0x6bb, LSL #16
7101ac0c2c  movk x22,#0x12, LSL #32
7101ac0c30  mov w2,#0x4
7101ac0c34  mov x1,x22
7101ac0c38  bl 0x7103313f20
7101ac0c3c  tbz w0,#0x0,0x7101ac0ca0
7101ac0c40  add x0,sp,#0x40
7101ac0c44  mov x1,x22
7101ac0c48  bl 0x71024076d0
7101ac0c4c  ldr x8,[sp, #0x50]
7101ac0c50  adrp x9,0x7104f73000
7101ac0c54  add x9,x9,#0xd50
7101ac0c58  str x9,[sp, #0x48]
7101ac0c5c  cbz x8,0x7101ac0ccc
7101ac0c60  adrp x8,0x7106dd5000
7101ac0c64  ldrb w8,[x8, #0x3a8]
7101ac0c68  cmp w8,#0x1
7101ac0c6c  b.ne 0x7101ac0ccc
7101ac0c70  adrp x9,0x7106dd5000
7101ac0c74  ldr w8,[sp, #0x58]
7101ac0c78  ldr w9,[x9, #0x3ac]
7101ac0c7c  cmp w8,w9
7101ac0c80  b.ne 0x7101ac0ccc
7101ac0c84  ldr x8,[sp, #0x50]
7101ac0c88  ldr wzr,[x8, #0x38]!
7101ac0c8c  ldaxr w9,[x8]
7101ac0c90  sub w9,w9,#0x1
7101ac0c94  stlxr w10,w9,[x8]
7101ac0c98  cbnz w10,0x7101ac0c8c
7101ac0c9c  b 0x7101ac0ccc
7101ac0ca0  mov x8,#0x650000000000
7101ac0ca4  movk x8,#0x87, LSL #48
7101ac0ca8  strb wzr,[sp, #0x60]
7101ac0cac  stp xzr,x8,[sp, #0x50]
7101ac0cb0  mov x8,#-0x1
7101ac0cb4  stp x8,xzr,[sp, #0x68]
7101ac0cb8  adrp x8,0x7104f73000
7101ac0cbc  add x8,x8,#0xd50
7101ac0cc0  str wzr,[sp, #0x40]
7101ac0cc4  str xzr,[sp, #0x78]
7101ac0cc8  str x8,[sp, #0x48]
7101ac0ccc  mov w1,#0x5
7101ac0cd0  mov x0,x21
7101ac0cd4  mov w2,wzr
7101ac0cd8  str xzr,[sp, #0x50]
7101ac0cdc  strb wzr,[sp, #0x60]
7101ac0ce0  bl 0x7103771a80
7101ac0ce4  fmov s8,0x3f800000
7101ac0ce8  ldr x0,[x19, #0x238]
7101ac0cec  adrp x1,0x71042f8000
7101ac0cf0  add x1,x1,#0x402
7101ac0cf4  mov v0.16B,v8.16B
7101ac0cf8  bl 0x7103778300
7101ac0cfc  ldr x0,[x19, #0x2e8]
7101ac0d00  mov v0.16B,v8.16B
7101ac0d04  adrp x1,0x7104421000
7101ac0d08  add x1,x1,#0xd8e
7101ac0d0c  bl 0x7103778300
7101ac0d10  adrp x1,0x71042e7000
7101ac0d14  add x1,x1,#0x35a
7101ac0d18  sub x8,x29,#0x50
7101ac0d1c  mov x0,x20
7101ac0d20  bl 0x7103776640
7101ac0d24  mov w0,#0x10
7101ac0d28  mov w1,#0x8
7101ac0d2c  bl 0x710392e290
7101ac0d30  mov x21,x0
7101ac0d34  cbnz x0,0x7101ac0d80
7101ac0d38  adrp x8,0x7105332000
7101ac0d3c  ldr x0,[x8, #0xf00]
7101ac0d40  cbz x0,0x7101ac0d7c
7101ac0d44  mov w8,#0x8
7101ac0d48  stur wzr,[x29, #-0x34]
7101ac0d4c  sub x1,x29,#0x34
7101ac0d50  stur x8,[x29, #-0x40]
7101ac0d54  ldr x8,[x0]
7101ac0d58  ldr x8,[x8, #0x30]
7101ac0d5c  sub x2,x29,#0x40
7101ac0d60  blr x8
7101ac0d64  tbz w0,#0x0,0x7101ac0d7c
7101ac0d68  mov w0,#0x10
7101ac0d6c  mov w1,#0x8
7101ac0d70  bl 0x710392e290
7101ac0d74  mov x21,x0
7101ac0d78  cbnz x0,0x7101ac0d80
7101ac0d7c  mov x21,xzr
7101ac0d80  str xzr,[x21]
7101ac0d84  ldur x19,[x29, #-0x48]
7101ac0d88  ldr x8,[x19, #0x8]
7101ac0d8c  cbz x8,0x7101ac0dc0
7101ac0d90  ldr x0,[x8, #0x60]
7101ac0d94  cbz x0,0x7101ac0dc0
7101ac0d98  ldr x8,[x8, #0x18]
7101ac0d9c  add x1,x8,#0xb0
7101ac0da0  bl 0x7103796f20
7101ac0da4  str x0,[x21]
7101ac0da8  cbz x0,0x7101ac12d0
7101ac0dac  ldr x8,[x0]
7101ac0db0  ldr x8,[x8, #0x2f8]
7101ac0db4  blr x8
7101ac0db8  mov w22,w0
7101ac0dbc  b 0x7101ac0dc8
7101ac0dc0  mov w22,wzr
7101ac0dc4  str xzr,[x21]
7101ac0dc8  mov x0,x21
7101ac0dcc  bl 0x710392eb40
7101ac0dd0  adrp x21,0x710523d000
7101ac0dd4  add x21,x21,#0x988
7101ac0dd8  stp x21,xzr,[x29, #-0x50]
7101ac0ddc  cbz x19,0x7101ac0df8
7101ac0de0  ldr x0,[x19, #0x18]
7101ac0de4  stp x23,xzr,[x19, #0x10]
7101ac0de8  cbz x0,0x7101ac0df0
7101ac0dec  bl 0x710392eb40
7101ac0df0  mov x0,x19
7101ac0df4  bl 0x710392eb40
7101ac0df8  tbnz w22,#0x0,0x7101ac12ac
7101ac0dfc  adrp x1,0x71042e7000
7101ac0e00  add x1,x1,#0x35a
7101ac0e04  sub x8,x29,#0x50
7101ac0e08  mov x0,x20
7101ac0e0c  bl 0x7103776640
7101ac0e10  mov w0,#0x10
7101ac0e14  mov w1,#0x8
7101ac0e18  bl 0x710392e290
7101ac0e1c  mov x20,x0
7101ac0e20  cbnz x0,0x7101ac0e6c
7101ac0e24  adrp x8,0x7105332000
7101ac0e28  ldr x0,[x8, #0xf00]
7101ac0e2c  cbz x0,0x7101ac0e68
7101ac0e30  mov w8,#0x8
7101ac0e34  stur wzr,[x29, #-0x34]
7101ac0e38  sub x1,x29,#0x34
7101ac0e3c  stur x8,[x29, #-0x40]
7101ac0e40  ldr x8,[x0]
7101ac0e44  ldr x8,[x8, #0x30]
7101ac0e48  sub x2,x29,#0x40
7101ac0e4c  blr x8
7101ac0e50  tbz w0,#0x0,0x7101ac0e68
7101ac0e54  mov w0,#0x10
7101ac0e58  mov w1,#0x8
7101ac0e5c  bl 0x710392e290
7101ac0e60  mov x20,x0
7101ac0e64  cbnz x0,0x7101ac0e6c
7101ac0e68  mov x20,xzr
7101ac0e6c  str xzr,[x20]
7101ac0e70  ldur x19,[x29, #-0x48]
7101ac0e74  ldr x8,[x19, #0x8]
7101ac0e78  cbz x8,0x7101ac1280
7101ac0e7c  ldr x0,[x8, #0x60]
7101ac0e80  cbz x0,0x7101ac1280
7101ac0e84  ldr x8,[x8, #0x18]
7101ac0e88  add x1,x8,#0xb0
7101ac0e8c  bl 0x7103796f20
7101ac0e90  str x0,[x20]
7101ac0e94  cbz x0,0x7101ac1284
7101ac0e98  ldr x8,[x0]
7101ac0e9c  ldr x8,[x8, #0x2f0]
7101ac0ea0  mov w1,#0x1
7101ac0ea4  mov w2,wzr
7101ac0ea8  blr x8
7101ac0eac  b 0x7101ac1284
7101ac0eb0  str xzr,[x22]
7101ac0eb4  mov x0,x22
7101ac0eb8  bl 0x710392eb40
7101ac0ebc  adrp x8,0x710523d000
7101ac0ec0  add x8,x8,#0x988
7101ac0ec4  stp x8,xzr,[x29, #-0x50]
7101ac0ec8  cbz x21,0x7101ac0eec
7101ac0ecc  ldr x0,[x21, #0x18]
7101ac0ed0  adrp x8,0x710523d000
7101ac0ed4  add x8,x8,#0x9a8
7101ac0ed8  stp x8,xzr,[x21, #0x10]
7101ac0edc  cbz x0,0x7101ac0ee4
7101ac0ee0  bl 0x710392eb40
7101ac0ee4  mov x0,x21
7101ac0ee8  bl 0x710392eb40
7101ac0eec  adrp x1,0x71042e7000
7101ac0ef0  add x1,x1,#0x35a
7101ac0ef4  sub x8,x29,#0x50
7101ac0ef8  mov x0,x20
7101ac0efc  bl 0x7103776640
7101ac0f00  mov w0,#0x10
7101ac0f04  mov w1,#0x8
7101ac0f08  bl 0x710392e290
7101ac0f0c  mov x22,x0
7101ac0f10  cbnz x0,0x7101ac0f5c
7101ac0f14  adrp x8,0x7105332000
7101ac0f18  ldr x0,[x8, #0xf00]
7101ac0f1c  cbz x0,0x7101ac0f58
7101ac0f20  mov w8,#0x8
7101ac0f24  stur wzr,[x29, #-0x34]
7101ac0f28  sub x1,x29,#0x34
7101ac0f2c  stur x8,[x29, #-0x40]
7101ac0f30  ldr x8,[x0]
7101ac0f34  ldr x8,[x8, #0x30]
7101ac0f38  sub x2,x29,#0x40
7101ac0f3c  blr x8
7101ac0f40  tbz w0,#0x0,0x7101ac0f58
7101ac0f44  mov w0,#0x10
7101ac0f48  mov w1,#0x8
7101ac0f4c  bl 0x710392e290
7101ac0f50  mov x22,x0
7101ac0f54  cbnz x0,0x7101ac0f5c
7101ac0f58  mov x22,xzr
7101ac0f5c  str xzr,[x22]
7101ac0f60  ldur x21,[x29, #-0x48]
7101ac0f64  ldr x8,[x21, #0x8]
7101ac0f68  cbz x8,0x7101ac0f9c
7101ac0f6c  ldr x0,[x8, #0x60]
7101ac0f70  cbz x0,0x7101ac0f9c
7101ac0f74  ldr x8,[x8, #0x18]
7101ac0f78  add x1,x8,#0xb0
7101ac0f7c  bl 0x7103796f20
7101ac0f80  str x0,[x22]
7101ac0f84  cbz x0,0x7101ac12c8
7101ac0f88  ldr x8,[x0]
7101ac0f8c  ldr x8,[x8, #0x2f8]
7101ac0f90  blr x8
7101ac0f94  mov w23,w0
7101ac0f98  b 0x7101ac0fa4
7101ac0f9c  mov w23,wzr
7101ac0fa0  str xzr,[x22]
7101ac0fa4  mov x0,x22
7101ac0fa8  bl 0x710392eb40
7101ac0fac  adrp x8,0x710523d000
7101ac0fb0  add x8,x8,#0x988
7101ac0fb4  stp x8,xzr,[x29, #-0x50]
7101ac0fb8  cbz x21,0x7101ac0fdc
7101ac0fbc  ldr x0,[x21, #0x18]
7101ac0fc0  adrp x8,0x710523d000
7101ac0fc4  add x8,x8,#0x9a8
7101ac0fc8  stp x8,xzr,[x21, #0x10]
7101ac0fcc  cbz x0,0x7101ac0fd4
7101ac0fd0  bl 0x710392eb40
7101ac0fd4  mov x0,x21
7101ac0fd8  bl 0x710392eb40
7101ac0fdc  tbnz w23,#0x0,0x7101ac12ac
7101ac0fe0  fmov s8,0x3f800000
7101ac0fe4  ldr x0,[x19, #0x238]
7101ac0fe8  adrp x1,0x71042d6000
7101ac0fec  add x1,x1,#0x3b4
7101ac0ff0  mov v0.16B,v8.16B
7101ac0ff4  bl 0x7103778300
7101ac0ff8  ldr x0,[x19, #0x2e8]
7101ac0ffc  mov v0.16B,v8.16B
7101ac1000  adrp x1,0x71043ce000
7101ac1004  add x1,x1,#0xeea
7101ac1008  bl 0x7103778300
7101ac100c  adrp x1,0x710424f000
7101ac1010  add x1,x1,#0x6ab
7101ac1014  sub x8,x29,#0x50
7101ac1018  mov x0,x20
7101ac101c  bl 0x7103776910
7101ac1020  ldur x0,[x29, #-0x48]
7101ac1024  ldr x8,[x0]
7101ac1028  cbz x8,0x7101ac1060
7101ac102c  ldr x9,[x19, #0x300]
7101ac1030  ldp x10,x9,[x9]
7101ac1034  sub x9,x9,x10
7101ac1038  mov w10,#0xeeef
7101ac103c  movk w10,#0xeeee, LSL #16
7101ac1040  lsr x9,x9,#0x6
7101ac1044  mul w9,w9,w10
7101ac1048  ldrb w10,[x8, #0x58]
7101ac104c  cmp w9,#0x1
7101ac1050  cset w9,gt
7101ac1054  and w10,w10,#0xfe
7101ac1058  orr w9,w10,w9
7101ac105c  strb w9,[x8, #0x58]
7101ac1060  adrp x22,0x710523d000
7101ac1064  add x22,x22,#0x9a8
7101ac1068  stp x22,xzr,[x29, #-0x50]
7101ac106c  cbz x0,0x7101ac1074
7101ac1070  bl 0x710392eb40
7101ac1074  adrp x1,0x7104412000
7101ac1078  add x1,x1,#0xb00
7101ac107c  sub x8,x29,#0x50
7101ac1080  mov x0,x20
7101ac1084  bl 0x7103776910
7101ac1088  ldur x0,[x29, #-0x48]
7101ac108c  ldr x8,[x0]
7101ac1090  cbz x8,0x7101ac10c8
7101ac1094  ldr x9,[x19, #0x300]
7101ac1098  ldp x10,x9,[x9]
7101ac109c  sub x9,x9,x10
7101ac10a0  mov w10,#0xeeef
7101ac10a4  movk w10,#0xeeee, LSL #16
7101ac10a8  lsr x9,x9,#0x6
7101ac10ac  mul w9,w9,w10
7101ac10b0  ldrb w10,[x8, #0x58]
7101ac10b4  cmp w9,#0x1
7101ac10b8  cset w9,gt
7101ac10bc  and w10,w10,#0xfe
7101ac10c0  orr w9,w10,w9
7101ac10c4  strb w9,[x8, #0x58]
7101ac10c8  stp x22,xzr,[x29, #-0x50]
7101ac10cc  cbz x0,0x7101ac10d4
7101ac10d0  bl 0x710392eb40
7101ac10d4  adrp x8,0x710532f000
7101ac10d8  ldr x8,[x8, #0x8d0]
7101ac10dc  ldr x0,[x8, #0x8]
7101ac10e0  ldrb w8,[x0, #0x191]
7101ac10e4  cbnz w8,0x7101ac1164
7101ac10e8  mov x21,#0x8281
7101ac10ec  movk x21,#0xc06f, LSL #16
7101ac10f0  movk x21,#0x13, LSL #32
7101ac10f4  mov w2,#0x4
7101ac10f8  mov x1,x21
7101ac10fc  bl 0x7103313f20
7101ac1100  tbz w0,#0x0,0x7101ac1164
7101ac1104  mov x0,sp
7101ac1108  mov x1,x21
7101ac110c  bl 0x71024076d0
7101ac1110  ldr x8,[sp, #0x10]
7101ac1114  adrp x9,0x7104f73000
7101ac1118  add x9,x9,#0xd50
7101ac111c  str x9,[sp, #0x8]
7101ac1120  cbz x8,0x7101ac1190
7101ac1124  adrp x8,0x7106dd5000
7101ac1128  ldrb w8,[x8, #0x3a8]
7101ac112c  cmp w8,#0x1
7101ac1130  b.ne 0x7101ac1190
7101ac1134  adrp x9,0x7106dd5000
7101ac1138  ldr w8,[sp, #0x18]
7101ac113c  ldr w9,[x9, #0x3ac]
7101ac1140  cmp w8,w9
7101ac1144  b.ne 0x7101ac1190
7101ac1148  ldr x8,[sp, #0x10]
7101ac114c  ldr wzr,[x8, #0x38]!
7101ac1150  ldaxr w9,[x8]
7101ac1154  sub w9,w9,#0x1
7101ac1158  stlxr w10,w9,[x8]
7101ac115c  cbnz w10,0x7101ac1150
7101ac1160  b 0x7101ac1190
7101ac1164  mov x8,#0x650000000000
7101ac1168  movk x8,#0x87, LSL #48
7101ac116c  strb wzr,[sp, #0x20]
7101ac1170  stp xzr,x8,[sp, #0x10]
7101ac1174  mov x8,#-0x1
7101ac1178  stp x8,xzr,[sp, #0x28]
7101ac117c  adrp x8,0x7104f73000
7101ac1180  add x8,x8,#0xd50
7101ac1184  str wzr,[sp]
7101ac1188  str xzr,[sp, #0x38]
7101ac118c  str x8,[sp, #0x8]
7101ac1190  str xzr,[sp, #0x10]
7101ac1194  strb wzr,[sp, #0x20]
7101ac1198  ldrsw x8,[x19, #0x204]
7101ac119c  cmp w8,#0x13
7101ac11a0  b.cs 0x7101ac12d8
7101ac11a4  add x8,x19,x8, LSL #0x2
7101ac11a8  mov w9,#0x4
7101ac11ac  str w9,[x8, #0x1b8]
7101ac11b0  ldr x8,[x19, #0x300]
7101ac11b4  ldp x9,x8,[x8]
7101ac11b8  sub x8,x8,x9
7101ac11bc  mov w9,#0xeeef
7101ac11c0  movk w9,#0xeeee, LSL #16
7101ac11c4  lsr x8,x8,#0x6
7101ac11c8  mul w21,w8,w9
7101ac11cc  adrp x1,0x710424f000
7101ac11d0  add x1,x1,#0x6ab
7101ac11d4  sub x8,x29,#0x50
7101ac11d8  mov x0,x20
7101ac11dc  bl 0x7103776910
7101ac11e0  ldur x0,[x29, #-0x48]
7101ac11e4  ldr x8,[x0]
7101ac11e8  cbz x8,0x7101ac1204
7101ac11ec  ldrb w10,[x8, #0x58]
7101ac11f0  cmp w21,#0x1
7101ac11f4  cset w9,gt
7101ac11f8  and w10,w10,#0xfe
7101ac11fc  orr w9,w10,w9
7101ac1200  strb w9,[x8, #0x58]
7101ac1204  stp x22,xzr,[x29, #-0x50]
7101ac1208  cbz x0,0x7101ac1210
7101ac120c  bl 0x710392eb40
7101ac1210  adrp x1,0x7104412000
7101ac1214  add x1,x1,#0xb00
7101ac1218  sub x8,x29,#0x50
7101ac121c  mov x0,x20
7101ac1220  bl 0x7103776910
7101ac1224  ldur x0,[x29, #-0x48]
7101ac1228  ldr x8,[x0]
7101ac122c  cbz x8,0x7101ac1248
7101ac1230  ldrb w10,[x8, #0x58]
7101ac1234  cmp w21,#0x1
7101ac1238  cset w9,gt
7101ac123c  and w10,w10,#0xfe
7101ac1240  orr w9,w10,w9
7101ac1244  strb w9,[x8, #0x58]
7101ac1248  stp x22,xzr,[x29, #-0x50]
7101ac124c  cbz x0,0x7101ac1254
7101ac1250  bl 0x710392eb40
7101ac1254  ldr x0,[x19, #0x248]
7101ac1258  ldr x8,[x0]
7101ac125c  ldr x8,[x8, #0x60]
7101ac1260  mov w1,#0x1
7101ac1264  blr x8
7101ac1268  ldr x0,[x19, #0x240]
7101ac126c  ldr x8,[x0]
7101ac1270  ldr x8,[x8, #0x60]
7101ac1274  mov w1,#0x1
7101ac1278  blr x8
7101ac127c  b 0x7101ac12ac
7101ac1280  str xzr,[x20]
7101ac1284  mov x0,x20
7101ac1288  bl 0x710392eb40
7101ac128c  stp x21,xzr,[x29, #-0x50]
7101ac1290  cbz x19,0x7101ac12ac
7101ac1294  ldr x0,[x19, #0x18]
7101ac1298  stp x23,xzr,[x19, #0x10]
7101ac129c  cbz x0,0x7101ac12a4
7101ac12a0  bl 0x710392eb40
7101ac12a4  mov x0,x19
7101ac12a8  bl 0x710392eb40
7101ac12ac  ldr d8,[sp, #0xa0]
7101ac12b0  ldp x29,x30,[sp, #0xd0]
7101ac12b4  ldp x20,x19,[sp, #0xc0]
7101ac12b8  ldr x23,[sp, #0xa8]
7101ac12bc  ldp x22,x21,[sp, #0xb0]
7101ac12c0  add sp,sp,#0xe0
7101ac12c4  ret
7101ac12c8  mov w23,wzr
7101ac12cc  b 0x7101ac0fa4
7101ac12d0  mov w22,wzr
7101ac12d4  b 0x7101ac0dc8
7101ac12d8  bl 0x71039c2650
