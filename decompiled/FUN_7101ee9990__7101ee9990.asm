// addr:      7101ee9990
// offset:    0x1ee9990
// name:      FUN_7101ee9990
// mangled:   
// size:      12376

7101ee9990  str d10,[sp, #-0x80]!
7101ee9994  stp d9,d8,[sp, #0x10]
7101ee9998  stp x28,x27,[sp, #0x20]
7101ee999c  stp x26,x25,[sp, #0x30]
7101ee99a0  stp x24,x23,[sp, #0x40]
7101ee99a4  stp x22,x21,[sp, #0x50]
7101ee99a8  stp x20,x19,[sp, #0x60]
7101ee99ac  stp x29,x30,[sp, #0x70]
7101ee99b0  add x29,sp,#0x70
7101ee99b4  sub sp,sp,#0x320
7101ee99b8  mov x24,x0
7101ee99bc  add x0,x0,#0xf68
7101ee99c0  ldr x1,[x24]
7101ee99c4  adrp x2,0x7104545000
7101ee99c8  add x2,x2,#0xda0
7101ee99cc  mov w3,#0x1
7101ee99d0  mov w19,#0x3000
7101ee99d4  movk w19,#0x2, LSL #16
7101ee99d8  bl 0x71032cbf30
7101ee99dc  ldr x8,[x24, #0xf68]
7101ee99e0  ldr x0,[x8]
7101ee99e4  mov w1,#0x1
7101ee99e8  mov w2,w19
7101ee99ec  bl 0x7103775dc0
7101ee99f0  adrp x8,0x710532f000
7101ee99f4  ldr x20,[x8, #0x8b8]
7101ee99f8  adrp x8,0x710532f000
7101ee99fc  add x8,x8,#0x4d8
7101ee9a00  ldr x19,[x24]
7101ee9a04  ldarb w8,[x8]
7101ee9a08  tbz w8,#0x0,0x7101eec918
7101ee9a0c  ldr x10,[x19, #0x28]!
7101ee9a10  cbz x10,0x7101ee9a58
7101ee9a14  mov x9,#0x29f5
7101ee9a18  movk x9,#0x45a8, LSL #16
7101ee9a1c  movk x9,#0x11, LSL #32
7101ee9a20  mov x8,x19
7101ee9a24  ldr x11,[x10, #0x20]
7101ee9a28  and x11,x11,#0xffffffffff
7101ee9a2c  cmp x11,x9
7101ee9a30  cset w11,cc
7101ee9a34  csel x8,x8,x10,cc
7101ee9a38  ldr x10,[x10, w11, UXTW #0x3]
7101ee9a3c  cbnz x10,0x7101ee9a24
7101ee9a40  cmp x8,x19
7101ee9a44  b.eq 0x7101ee9a58
7101ee9a48  ldr x10,[x8, #0x20]
7101ee9a4c  and x10,x10,#0xfffffffffe
7101ee9a50  cmp x10,x9
7101ee9a54  b.ls 0x7101eec8b8
7101ee9a58  adrp x19,0x710532f000
7101ee9a5c  add x19,x19,#0x4a4
7101ee9a60  ldr w8,[x19]
7101ee9a64  orr w9,wzr,#0xffffff
7101ee9a68  cmp w8,w9
7101ee9a6c  b.eq 0x7101ee9aa0
7101ee9a70  ldr x0,[x20, #0x8]
7101ee9a74  adrp x1,0x7104545000
7101ee9a78  add x1,x1,#0xda8
7101ee9a7c  mov w2,#0x4
7101ee9a80  bl 0x710330a8f0
7101ee9a84  cbz w0,0x7101ee9aa0
7101ee9a88  adrp x8,0x7105334000
7101ee9a8c  ldr x8,[x8, #0x920]
7101ee9a90  mov w1,w0
7101ee9a94  ldr x0,[x8]
7101ee9a98  mov x2,x19
7101ee9a9c  bl 0x7103563a20
7101ee9aa0  mov w8,#0x1
7101ee9aa4  strb w8,[x24, #0xfd2]
7101ee9aa8  ldr x8,[x24, #0xf68]
7101ee9aac  ldr x10,[x8]
7101ee9ab0  ldp x8,x9,[x24, #0xf0]
7101ee9ab4  sub x8,x9,x8
7101ee9ab8  lsr x8,x8,#0x3
7101ee9abc  mov w20,#0xda13
7101ee9ac0  movk w20,#0x684b, LSL #16
7101ee9ac4  mul w19,w8,w20
7101ee9ac8  ldr x8,[x10, #0x10]
7101ee9acc  ldr x0,[x8, #0x8]
7101ee9ad0  fmov s8,wzr
7101ee9ad4  add x22,x10,#0x8
7101ee9ad8  str x10,[sp, #0x8]
7101ee9adc  cbz x0,0x7101ee9b00
7101ee9ae0  adrp x1,0x71042a3000
7101ee9ae4  add x1,x1,#0x79b
7101ee9ae8  bl 0x71037964b0
7101ee9aec  cbz x0,0x7101ee9b00
7101ee9af0  ldr x8,[x0]
7101ee9af4  ldr x8,[x8, #0x1a8]
7101ee9af8  blr x8
7101ee9afc  mov v8.16B,v0.16B
7101ee9b00  fcvtzs w9,s8
7101ee9b04  cmp w19,#0x3
7101ee9b08  b.gt 0x7101ee9bd0
7101ee9b0c  scvtf s0,w9
7101ee9b10  fmov s1,0x3fc00000
7101ee9b14  orr w8,wzr,#0x3fc00000
7101ee9b18  str w8,[x24, #0xfcc]
7101ee9b1c  adrp x1,0x710424f000
7101ee9b20  add x1,x1,#0xc84
7101ee9b24  sub x8,x29,#0xd0
7101ee9b28  mov x0,x22
7101ee9b2c  fdiv s8,s0,s1
7101ee9b30  bl 0x7103776910
7101ee9b34  ldur x19,[x29, #-0xc8]
7101ee9b38  ldr x0,[x19]
7101ee9b3c  ldr w21,[x24, #0xfcc]
7101ee9b40  bl 0x710377aae0
7101ee9b44  cbz x0,0x7101ee9ba4
7101ee9b48  ldr w10,[x0, #0xd4]
7101ee9b4c  mov w8,#0x1
7101ee9b50  strb w8,[x0, #0x141]
7101ee9b54  cmp w10,#0x1
7101ee9b58  str w21,[x0, #0x128]
7101ee9b5c  b.lt 0x7101ee9ba4
7101ee9b60  adrp x8,0x7105334000
7101ee9b64  ldr x8,[x8, #0x920]
7101ee9b68  ldr x8,[x8]
7101ee9b6c  lsr x9,x10,#0x18
7101ee9b70  orr w11,wzr,#0x300
7101ee9b74  madd x11,x9,x11,x8
7101ee9b78  cbz x11,0x7101ee9ba4
7101ee9b7c  ldr w11,[x11, #0x4]
7101ee9b80  cmp w11,w10
7101ee9b84  b.ne 0x7101ee9ba4
7101ee9b88  orr w10,wzr,#0x300
7101ee9b8c  madd x10,x9,x10,x8
7101ee9b90  ldrb w10,[x10, #0x2d7]
7101ee9b94  cbnz w10,0x7101ee9ba4
7101ee9b98  orr w10,wzr,#0x300
7101ee9b9c  madd x8,x9,x10,x8
7101ee9ba0  str w21,[x8, #0x260]
7101ee9ba4  fcvtzs w8,s8
7101ee9ba8  str w8,[sp, #0x1c]
7101ee9bac  adrp x8,0x710523d000
7101ee9bb0  add x8,x8,#0x9a8
7101ee9bb4  stp x8,xzr,[x29, #-0xd0]
7101ee9bb8  cbz x19,0x7101ee9bdc
7101ee9bbc  mov x0,x19
7101ee9bc0  bl 0x710392eb40
7101ee9bc4  ldrb w8,[x24, #0xfc8]
7101ee9bc8  cbnz w8,0x7101ee9be4
7101ee9bcc  b 0x7101ee9c0c
7101ee9bd0  orr w8,wzr,#0x3f800000
7101ee9bd4  str w9,[sp, #0x1c]
7101ee9bd8  str w8,[x24, #0xfcc]
7101ee9bdc  ldrb w8,[x24, #0xfc8]
7101ee9be0  cbz w8,0x7101ee9c0c
7101ee9be4  ldp x8,x9,[x24, #0xf0]
7101ee9be8  cmp x8,x9
7101ee9bec  b.eq 0x7101ee9c0c
7101ee9bf0  ldr w10,[x8, #0xc]
7101ee9bf4  cmp w10,#0x1
7101ee9bf8  b.ne 0x7101ee9c00
7101ee9bfc  str wzr,[x8, #0xc]
7101ee9c00  add x8,x8,#0xd8
7101ee9c04  cmp x9,x8
7101ee9c08  b.ne 0x7101ee9bf0
7101ee9c0c  ldr x8,[x24, #0xf68]
7101ee9c10  ldp x9,x10,[x24, #0xf0]
7101ee9c14  ldr x8,[x8]
7101ee9c18  add x21,x8,#0x8
7101ee9c1c  sub x8,x10,x9
7101ee9c20  lsr x8,x8,#0x3
7101ee9c24  mul w2,w8,w20
7101ee9c28  adrp x1,0x71042e7000
7101ee9c2c  add x1,x1,#0xabe
7101ee9c30  mov x0,x21
7101ee9c34  str w2,[sp, #0xa0]
7101ee9c38  bl 0x7103778430
7101ee9c3c  adrp x19,0x7105314000
7101ee9c40  add x19,x19,#0x4d8
7101ee9c44  ldarb w8,[x19]
7101ee9c48  tbz w8,#0x0,0x7101eec964
7101ee9c4c  str x22,[sp]
7101ee9c50  ldarb w8,[x19]
7101ee9c54  tbz w8,#0x0,0x7101eec9a4
7101ee9c58  ldr w8,[sp, #0xa0]
7101ee9c5c  cmp w8,#0x2
7101ee9c60  cset w8,gt
7101ee9c64  str w8,[sp, #0xa4]
7101ee9c68  ldp x27,x8,[x24, #0xf0]
7101ee9c6c  add x23,sp,#0x258
7101ee9c70  mov w25,#0x9dc5
7101ee9c74  movk w25,#0x811c, LSL #16
7101ee9c78  cmp x27,x8
7101ee9c7c  str x8,[sp, #0x60]
7101ee9c80  b.eq 0x7101eeb760
7101ee9c84  ldr w8,[sp, #0xa0]
7101ee9c88  cmp w8,#0x2
7101ee9c8c  add x8,sp,#0x1b0
7101ee9c90  add x10,x8,#0x8
7101ee9c94  add x26,sp,#0x168
7101ee9c98  sub x28,x29,#0xd0
7101ee9c9c  add x8,x8,#0x9
7101ee9ca0  str x8,[sp, #0x10]
7101ee9ca4  str x10,[sp, #0xa8]
7101ee9ca8  add x10,x26,#0x8
7101ee9cac  add x8,x28,#0x9
7101ee9cb0  fmov s8,0x3f800000
7101ee9cb4  stp x10,x21,[sp, #0x48]
7101ee9cb8  add x10,x28,#0x8
7101ee9cbc  str x8,[sp, #0x30]
7101ee9cc0  add x8,x26,#0xa
7101ee9cc4  fmov s9,wzr
7101ee9cc8  cset w9,gt
7101ee9ccc  str x10,[sp, #0x68]
7101ee9cd0  add x10,sp,#0x258
7101ee9cd4  str x8,[sp, #0x28]
7101ee9cd8  add x8,x26,#0x9
7101ee9cdc  add x10,x10,#0x8
7101ee9ce0  str x8,[sp, #0x20]
7101ee9ce4  lsl x8,x9,#0x3
7101ee9ce8  str x24,[sp, #0x58]
7101ee9cec  stp x8,x10,[sp, #0x38]
7101ee9cf0  b 0x7101ee9d0c
7101ee9cf4  stp x21,x21,[x27, #0xc0]
7101ee9cf8  str x24,[x27, #0xd0]
7101ee9cfc  ldr w21,[sp, #0xa0]
7101ee9d00  add x23,sp,#0x258
7101ee9d04  cbnz x28,0x7101eeb504
7101ee9d08  b 0x7101eeb50c
7101ee9d0c  ldrsw x8,[x27]
7101ee9d10  adrp x0,0x71052c5000
7101ee9d14  add x0,x0,#0x730
7101ee9d18  mov w9,#0x260
7101ee9d1c  madd x1,x8,x9,x0
7101ee9d20  ldr w8,[x1, #0xc]!
7101ee9d24  str w8,[sp, #0xb4]
7101ee9d28  bl 0x71017a7d70
7101ee9d2c  strb wzr,[sp, #0x1b8]
7101ee9d30  str xzr,[sp, #0x1b0]
7101ee9d34  ldrb w8,[x24, #0xfb8]
7101ee9d38  mov x20,x0
7101ee9d3c  cbz w8,0x7101ee9d5c
7101ee9d40  ldr w8,[x27, #0x10]
7101ee9d44  add w2,w8,#0x1
7101ee9d48  add x0,sp,#0x1b0
7101ee9d4c  adrp x1,0x71042a1000
7101ee9d50  add x1,x1,#0x88a
7101ee9d54  bl 0x710062dc20
7101ee9d58  b 0x7101ee9e20
7101ee9d5c  ldr w8,[x27, #0xc]
7101ee9d60  cmp w8,#0x2
7101ee9d64  b.eq 0x7101ee9dc8
7101ee9d68  cmp w8,#0x1
7101ee9d6c  b.ne 0x7101eea340
7101ee9d70  mov x8,#0x6c70
7101ee9d74  movk x8,#0x7961, LSL #16
7101ee9d78  movk x8,#0x7265, LSL #32
7101ee9d7c  movk x8,#0x635f, LSL #48
7101ee9d80  str x8,[sp, #0x1b8]
7101ee9d84  mov x8,#0x6c6f
7101ee9d88  movk x8,#0x726f, LSL #16
7101ee9d8c  movk x8,#0x635f, LSL #32
7101ee9d90  movk x8,#0x70, LSL #48
7101ee9d94  str x8,[sp, #0x1c0]
7101ee9d98  ldr x8,[sp, #0x10]
7101ee9d9c  orr w11,wzr,#0xf
7101ee9da0  orr w10,wzr,#0x70
7101ee9da4  mov w9,w25
7101ee9da8  str w11,[sp, #0x1b4]
7101ee9dac  mov w11,#0x89
7101ee9db0  mul w9,w9,w11
7101ee9db4  and w10,w10,#0xff
7101ee9db8  eor w9,w9,w10
7101ee9dbc  ldrb w10,[x8], #0x1
7101ee9dc0  cbnz w10,0x7101ee9db0
7101ee9dc4  b 0x7101ee9e1c
7101ee9dc8  mov x8,#0x6c70
7101ee9dcc  movk x8,#0x7961, LSL #16
7101ee9dd0  movk x8,#0x7265, LSL #32
7101ee9dd4  movk x8,#0x635f, LSL #48
7101ee9dd8  str x8,[sp, #0x1b8]
7101ee9ddc  mov x8,#0x6c6f
7101ee9de0  movk x8,#0x726f, LSL #16
7101ee9de4  movk x8,#0x665f, LSL #32
7101ee9de8  movk x8,#0x70, LSL #48
7101ee9dec  str x8,[sp, #0x1c0]
7101ee9df0  ldr x8,[sp, #0x10]
7101ee9df4  orr w11,wzr,#0xf
7101ee9df8  orr w10,wzr,#0x70
7101ee9dfc  mov w9,w25
7101ee9e00  str w11,[sp, #0x1b4]
7101ee9e04  mov w11,#0x89
7101ee9e08  mul w9,w9,w11
7101ee9e0c  and w10,w10,#0xff
7101ee9e10  eor w9,w9,w10
7101ee9e14  ldrb w10,[x8], #0x1
7101ee9e18  cbnz w10,0x7101ee9e08
7101ee9e1c  str w9,[sp, #0x1b0]
7101ee9e20  ldr w2,[sp, #0xb4]
7101ee9e24  sub x8,x29,#0xd0
7101ee9e28  mov x0,x21
7101ee9e2c  adrp x1,0x71043e0000
7101ee9e30  add x1,x1,#0x974
7101ee9e34  bl 0x7103776640
7101ee9e38  ldr w22,[sp, #0xa0]
7101ee9e3c  sub x0,x29,#0xd0
7101ee9e40  adrp x1,0x71042e7000
7101ee9e44  add x1,x1,#0xabe
7101ee9e48  mov w2,w22
7101ee9e4c  bl 0x7103778430
7101ee9e50  ldur x19,[x29, #-0xc8]
7101ee9e54  ldr x1,[sp, #0xa8]
7101ee9e58  mov v0.16B,v8.16B
7101ee9e5c  mov x0,x19
7101ee9e60  bl 0x7103778300
7101ee9e64  cmp w22,#0x2
7101ee9e68  b.ne 0x7101ee9e98
7101ee9e6c  ldr w8,[sp, #0xb4]
7101ee9e70  cbz w8,0x7101ee9e84
7101ee9e74  mov x0,x19
7101ee9e78  adrp x1,0x7104443000
7101ee9e7c  add x1,x1,#0xf13
7101ee9e80  b 0x7101ee9e90
7101ee9e84  mov x0,x19
7101ee9e88  adrp x1,0x710424f000
7101ee9e8c  add x1,x1,#0xcaa
7101ee9e90  mov v0.16B,v8.16B
7101ee9e94  bl 0x7103778300
7101ee9e98  adrp x8,0x710523d000
7101ee9e9c  add x8,x8,#0x988
7101ee9ea0  stp x8,xzr,[x29, #-0xd0]
7101ee9ea4  cbz x19,0x7101ee9ec8
7101ee9ea8  ldr x0,[x19, #0x18]
7101ee9eac  adrp x8,0x710523d000
7101ee9eb0  add x8,x8,#0x9a8
7101ee9eb4  stp x8,xzr,[x19, #0x10]
7101ee9eb8  cbz x0,0x7101ee9ec0
7101ee9ebc  bl 0x710392eb40
7101ee9ec0  mov x0,x19
7101ee9ec4  bl 0x710392eb40
7101ee9ec8  ldr w2,[sp, #0xb4]
7101ee9ecc  sub x8,x29,#0xd0
7101ee9ed0  mov x0,x21
7101ee9ed4  adrp x1,0x71043e0000
7101ee9ed8  add x1,x1,#0x986
7101ee9edc  bl 0x7103776640
7101ee9ee0  ldr w21,[sp, #0xa0]
7101ee9ee4  add x8,x27,#0xa0
7101ee9ee8  cmp x8,x28
7101ee9eec  stur x8,[x29, #-0x68]
7101ee9ef0  b.eq 0x7101ee9f28
7101ee9ef4  ldur x8,[x29, #-0xc8]
7101ee9ef8  stur xzr,[x29, #-0xc8]
7101ee9efc  ldr x19,[x27, #0xa8]
7101ee9f00  str x8,[x27, #0xa8]
7101ee9f04  cbz x19,0x7101ee9f28
7101ee9f08  ldr x0,[x19, #0x18]
7101ee9f0c  adrp x8,0x710523d000
7101ee9f10  add x8,x8,#0x9a8
7101ee9f14  stp x8,xzr,[x19, #0x10]
7101ee9f18  cbz x0,0x7101ee9f20
7101ee9f1c  bl 0x710392eb40
7101ee9f20  mov x0,x19
7101ee9f24  bl 0x710392eb40
7101ee9f28  ldur x19,[x29, #-0xc8]
7101ee9f2c  adrp x8,0x710523d000
7101ee9f30  add x8,x8,#0x988
7101ee9f34  stp x8,xzr,[x29, #-0xd0]
7101ee9f38  cbz x19,0x7101ee9f5c
7101ee9f3c  ldr x0,[x19, #0x18]
7101ee9f40  adrp x8,0x710523d000
7101ee9f44  add x8,x8,#0x9a8
7101ee9f48  stp x8,xzr,[x19, #0x10]
7101ee9f4c  cbz x0,0x7101ee9f54
7101ee9f50  bl 0x710392eb40
7101ee9f54  mov x0,x19
7101ee9f58  bl 0x710392eb40
7101ee9f5c  ldur x0,[x29, #-0x68]
7101ee9f60  ldr w2,[sp, #0xb4]
7101ee9f64  sub x8,x29,#0xd0
7101ee9f68  adrp x1,0x7104270000
7101ee9f6c  add x1,x1,#0x768
7101ee9f70  bl 0x71037780e0
7101ee9f74  add x8,x27,#0xb0
7101ee9f78  cmp x8,x28
7101ee9f7c  b.eq 0x7101ee9f98
7101ee9f80  ldur x8,[x29, #-0xc8]
7101ee9f84  stur xzr,[x29, #-0xc8]
7101ee9f88  ldr x0,[x27, #0xb8]
7101ee9f8c  str x8,[x27, #0xb8]
7101ee9f90  cbz x0,0x7101ee9f98
7101ee9f94  bl 0x710392eb40
7101ee9f98  ldur x0,[x29, #-0xc8]
7101ee9f9c  adrp x8,0x710523d000
7101ee9fa0  add x8,x8,#0x9e8
7101ee9fa4  stp x8,xzr,[x29, #-0xd0]
7101ee9fa8  cbz x0,0x7101ee9fb0
7101ee9fac  bl 0x710392eb40
7101ee9fb0  ldur x0,[x29, #-0x68]
7101ee9fb4  adrp x1,0x71042e7000
7101ee9fb8  add x1,x1,#0xabe
7101ee9fbc  mov w2,w21
7101ee9fc0  bl 0x7103778430
7101ee9fc4  ldr x0,[x27, #0xa8]
7101ee9fc8  ldr x1,[sp, #0xa8]
7101ee9fcc  mov v0.16B,v8.16B
7101ee9fd0  bl 0x7103778300
7101ee9fd4  ldrb w8,[x24, #0xfb8]
7101ee9fd8  cbz w8,0x7101eea008
7101ee9fdc  ldr w8,[x27, #0xc]
7101ee9fe0  ldr x0,[x27, #0xa8]
7101ee9fe4  cmp w8,#0x2
7101ee9fe8  b.ne 0x7101ee9ff8
7101ee9fec  adrp x1,0x71043be000
7101ee9ff0  add x1,x1,#0xe45
7101ee9ff4  b 0x7101eea000
7101ee9ff8  adrp x1,0x710439d000
7101ee9ffc  add x1,x1,#0xc4b
7101eea000  mov v0.16B,v8.16B
7101eea004  bl 0x7103778300
7101eea008  ldur x0,[x29, #-0x68]
7101eea00c  add x8,sp,#0x158
7101eea010  adrp x1,0x7104433000
7101eea014  add x1,x1,#0x8a1
7101eea018  strb wzr,[sp, #0x170]
7101eea01c  str xzr,[sp, #0x168]
7101eea020  bl 0x7103776910
7101eea024  ldr w8,[x27, #0xc]
7101eea028  cmp w8,#0x2
7101eea02c  b.eq 0x7101eea0f0
7101eea030  cmp w8,#0x1
7101eea034  b.ne 0x7101eea1bc
7101eea038  ldr x0,[x27, #0xa8]
7101eea03c  mov v0.16B,v8.16B
7101eea040  adrp x1,0x71042d6000
7101eea044  add x1,x1,#0xafd
7101eea048  bl 0x7103778300
7101eea04c  ldr x12,[sp, #0x30]
7101eea050  orr x8,xzr,#0x600000000
7101eea054  stur x8,[x29, #-0xd0]
7101eea058  mov w8,#0x6d63
7101eea05c  movk w8,#0x5f6e, LSL #16
7101eea060  stur w8,[x29, #-0xc8]
7101eea064  mov w8,#0x7063
7101eea068  sturh w8,[x29, #-0xc4]
7101eea06c  mov x8,x12
7101eea070  mov w10,#0x63
7101eea074  mov w9,w25
7101eea078  mov w14,#0x89
7101eea07c  sturb wzr,[x29, #-0xc2]
7101eea080  mul w9,w9,w14
7101eea084  and w10,w10,#0xff
7101eea088  eor w9,w9,w10
7101eea08c  ldrb w10,[x8], #0x1
7101eea090  cbnz w10,0x7101eea080
7101eea094  ldr x13,[sp, #0x28]
7101eea098  mov x8,xzr
7101eea09c  stur w9,[x29, #-0xd0]
7101eea0a0  mov w9,#0x63
7101eea0a4  tst w9,#0xff
7101eea0a8  b.eq 0x7101eea4a4
7101eea0ac  ldrb w11,[x12, x8, LSL ]
7101eea0b0  add x10,x13,x8
7101eea0b4  sturb w9,[x10, #-0x2]
7101eea0b8  cbz w11,0x7101eea480
7101eea0bc  add x9,x12,x8
7101eea0c0  sturb w11,[x10, #-0x1]
7101eea0c4  ldrb w10,[x9, #0x1]
7101eea0c8  cbz w10,0x7101eea490
7101eea0cc  add w11,w8,#0x3
7101eea0d0  cmp w11,#0x3e
7101eea0d4  strb w10,[x13, x8, LSL ]
7101eea0d8  b.hi 0x7101eea4a0
7101eea0dc  ldrb w9,[x9, #0x2]
7101eea0e0  add x8,x8,#0x3
7101eea0e4  tst w9,#0xff
7101eea0e8  b.ne 0x7101eea0ac
7101eea0ec  b 0x7101eea4a4
7101eea0f0  ldr x0,[x27, #0xa8]
7101eea0f4  mov v0.16B,v8.16B
7101eea0f8  adrp x1,0x71042a3000
7101eea0fc  add x1,x1,#0x7ab
7101eea100  bl 0x7103778300
7101eea104  ldur x0,[x29, #-0x68]
7101eea108  adrp x1,0x71042d6000
7101eea10c  add x1,x1,#0xb11
7101eea110  mov w2,w21
7101eea114  bl 0x7103778430
7101eea118  ldr x12,[sp, #0x30]
7101eea11c  orr x8,xzr,#0x600000000
7101eea120  stur x8,[x29, #-0xd0]
7101eea124  mov w8,#0x6d63
7101eea128  movk w8,#0x5f6e, LSL #16
7101eea12c  stur w8,[x29, #-0xc8]
7101eea130  mov w8,#0x7066
7101eea134  sturh w8,[x29, #-0xc4]
7101eea138  mov x8,x12
7101eea13c  mov w10,#0x63
7101eea140  mov w9,w25
7101eea144  mov w14,#0x89
7101eea148  sturb wzr,[x29, #-0xc2]
7101eea14c  mul w9,w9,w14
7101eea150  and w10,w10,#0xff
7101eea154  eor w9,w9,w10
7101eea158  ldrb w10,[x8], #0x1
7101eea15c  cbnz w10,0x7101eea14c
7101eea160  ldr x13,[sp, #0x28]
7101eea164  mov x8,xzr
7101eea168  stur w9,[x29, #-0xd0]
7101eea16c  mov w9,#0x63
7101eea170  tst w9,#0xff
7101eea174  b.eq 0x7101eea4e0
7101eea178  ldrb w11,[x12, x8, LSL ]
7101eea17c  add x10,x13,x8
7101eea180  sturb w9,[x10, #-0x2]
7101eea184  cbz w11,0x7101eea488
7101eea188  add x9,x12,x8
7101eea18c  sturb w11,[x10, #-0x1]
7101eea190  ldrb w10,[x9, #0x1]
7101eea194  cbz w10,0x7101eea498
7101eea198  add w11,w8,#0x3
7101eea19c  cmp w11,#0x3e
7101eea1a0  strb w10,[x13, x8, LSL ]
7101eea1a4  b.hi 0x7101eea4dc
7101eea1a8  ldrb w9,[x9, #0x2]
7101eea1ac  add x8,x8,#0x3
7101eea1b0  tst w9,#0xff
7101eea1b4  b.ne 0x7101eea178
7101eea1b8  b 0x7101eea4e0
7101eea1bc  ldrb w8,[x24, #0xfba]
7101eea1c0  cbz w8,0x7101eea354
7101eea1c4  ldr x0,[x27, #0xa8]
7101eea1c8  mov v0.16B,v8.16B
7101eea1cc  adrp x1,0x71042a3000
7101eea1d0  add x1,x1,#0x7ab
7101eea1d4  bl 0x7103778300
7101eea1d8  ldr x8,[x27, #0x90]
7101eea1dc  and x9,x8,#-0x100000000000000
7101eea1e0  orr x10,xzr,#0x1e00000000000000
7101eea1e4  cmp x9,x10
7101eea1e8  b.ne 0x7101eea44c
7101eea1ec  and x8,x8,#0xffffffffff
7101eea1f0  cbz x8,0x7101eea44c
7101eea1f4  ldur x19,[x29, #-0x68]
7101eea1f8  mov x0,x19
7101eea1fc  adrp x1,0x71042f8000
7101eea200  add x1,x1,#0xbb6
7101eea204  mov w2,w21
7101eea208  bl 0x7103778430
7101eea20c  sub x8,x29,#0xd0
7101eea210  mov x0,x19
7101eea214  adrp x1,0x7104308000
7101eea218  add x1,x1,#0xbc1
7101eea21c  bl 0x7103776910
7101eea220  ldr x1,[x27, #0x90]
7101eea224  mov x0,x24
7101eea228  bl 0x7103240430
7101eea22c  ldur x19,[x29, #-0xc8]
7101eea230  mov x1,x0
7101eea234  mov x0,x19
7101eea238  bl 0x7103778b80
7101eea23c  adrp x8,0x710523d000
7101eea240  add x8,x8,#0x9a8
7101eea244  stp x8,xzr,[x29, #-0xd0]
7101eea248  cbz x19,0x7101eea254
7101eea24c  mov x0,x19
7101eea250  bl 0x710392eb40
7101eea254  ldur x0,[x29, #-0x68]
7101eea258  sub x8,x29,#0xd0
7101eea25c  adrp x1,0x710424f000
7101eea260  add x1,x1,#0xcb4
7101eea264  bl 0x7103776910
7101eea268  adrp x8,0x710523d000
7101eea26c  add x8,x8,#0x9a8
7101eea270  mov w0,#0x10
7101eea274  mov w1,#0x20
7101eea278  str x8,[sp, #0x148]
7101eea27c  bl 0x710392e290
7101eea280  cbnz x0,0x7101eea2c8
7101eea284  adrp x8,0x7105332000
7101eea288  ldr x0,[x8, #0xf00]
7101eea28c  cbz x0,0x7101eea2c4
7101eea290  mov w8,#0x20
7101eea294  stur wzr,[x29, #-0xe0]
7101eea298  sub x1,x29,#0xe0
7101eea29c  str x8,[sp, #0x258]
7101eea2a0  ldr x8,[x0]
7101eea2a4  ldr x8,[x8, #0x30]
7101eea2a8  add x2,sp,#0x258
7101eea2ac  blr x8
7101eea2b0  tbz w0,#0x0,0x7101eea2c4
7101eea2b4  mov w0,#0x10
7101eea2b8  mov w1,#0x20
7101eea2bc  bl 0x710392e290
7101eea2c0  cbnz x0,0x7101eea2c8
7101eea2c4  mov x0,xzr
7101eea2c8  stp xzr,xzr,[x0, #0x10]
7101eea2cc  mov x22,x0
7101eea2d0  stp xzr,xzr,[x0]
7101eea2d4  ldur x8,[x29, #-0xc8]
7101eea2d8  str x0,[sp, #0x150]
7101eea2dc  ldr x9,[x8]
7101eea2e0  str x9,[x0]
7101eea2e4  ldr x8,[x8, #0x8]
7101eea2e8  str x8,[x0, #0x8]
7101eea2ec  ldur x19,[x29, #-0xc8]
7101eea2f0  ldr x8,[x19, #0x10]
7101eea2f4  str x8,[x22, #0x10]
7101eea2f8  ldr x8,[x19, #0x18]
7101eea2fc  str x8,[x22, #0x18]
7101eea300  ldr x1,[x27, #0x90]
7101eea304  add x0,sp,#0x148
7101eea308  bl 0x710337d450
7101eea30c  adrp x8,0x710523d000
7101eea310  add x8,x8,#0x9a8
7101eea314  stp x8,xzr,[sp, #0x148]
7101eea318  cbz x22,0x7101eea324
7101eea31c  mov x0,x22
7101eea320  bl 0x710392eb40
7101eea324  adrp x8,0x710523d000
7101eea328  add x8,x8,#0x9a8
7101eea32c  stp x8,xzr,[x29, #-0xd0]
7101eea330  cbz x19,0x7101eea460
7101eea334  mov x0,x19
7101eea338  bl 0x710392eb40
7101eea33c  b 0x7101eea460
7101eea340  add x0,sp,#0x1b0
7101eea344  adrp x1,0x7104410000
7101eea348  add x1,x1,#0xef8
7101eea34c  mov w2,w20
7101eea350  b 0x7101ee9d54
7101eea354  ldrb w8,[x24, #0xfd0]
7101eea358  ldr x0,[x27, #0xa8]
7101eea35c  cbz w8,0x7101eea5b4
7101eea360  mov v0.16B,v8.16B
7101eea364  adrp x1,0x71042a3000
7101eea368  add x1,x1,#0x7ab
7101eea36c  bl 0x7103778300
7101eea370  ldur x0,[x29, #-0x68]
7101eea374  adrp x1,0x71042d6000
7101eea378  add x1,x1,#0xb11
7101eea37c  mov w2,w21
7101eea380  bl 0x7103778430
7101eea384  adrp x8,0x710523d000
7101eea388  add x8,x8,#0x9a8
7101eea38c  mov w0,#0x10
7101eea390  mov w1,#0x20
7101eea394  str x8,[sp, #0x138]
7101eea398  bl 0x710392e290
7101eea39c  cbnz x0,0x7101eea3e4
7101eea3a0  adrp x8,0x7105332000
7101eea3a4  ldr x0,[x8, #0xf00]
7101eea3a8  cbz x0,0x7101eea3e0
7101eea3ac  mov w8,#0x20
7101eea3b0  str wzr,[sp, #0x258]
7101eea3b4  add x1,sp,#0x258
7101eea3b8  stur x8,[x29, #-0xd0]
7101eea3bc  ldr x8,[x0]
7101eea3c0  ldr x8,[x8, #0x30]
7101eea3c4  sub x2,x29,#0xd0
7101eea3c8  blr x8
7101eea3cc  tbz w0,#0x0,0x7101eea3e0
7101eea3d0  mov w0,#0x10
7101eea3d4  mov w1,#0x20
7101eea3d8  bl 0x710392e290
7101eea3dc  cbnz x0,0x7101eea3e4
7101eea3e0  mov x0,xzr
7101eea3e4  stp xzr,xzr,[x0, #0x10]
7101eea3e8  stp xzr,xzr,[x0]
7101eea3ec  ldr x8,[sp, #0x160]
7101eea3f0  str x0,[sp, #0x140]
7101eea3f4  ldr x9,[x8]
7101eea3f8  str x9,[x0]
7101eea3fc  ldr x8,[x8, #0x8]
7101eea400  str x8,[x0, #0x8]
7101eea404  ldr x8,[sp, #0x160]
7101eea408  ldr x0,[x8, #0x10]
7101eea40c  ldr x19,[sp, #0x140]
7101eea410  str x0,[x19, #0x10]
7101eea414  ldr x8,[x8, #0x18]
7101eea418  str x8,[x19, #0x18]
7101eea41c  ldr w8,[x27, #0x4]
7101eea420  add w9,w8,#0x1
7101eea424  cmp w9,#0x1
7101eea428  b.hi 0x7101eea5c8
7101eea42c  ldr w8,[sp, #0xb4]
7101eea430  add w3,w8,#0x1
7101eea434  add x0,sp,#0x138
7101eea438  mov w2,#0x1
7101eea43c  adrp x1,0x7104338000
7101eea440  add x1,x1,#0xa8c
7101eea444  bl 0x710377a280
7101eea448  b 0x7101eea644
7101eea44c  ldur x0,[x29, #-0x68]
7101eea450  adrp x1,0x71042d6000
7101eea454  add x1,x1,#0xb11
7101eea458  mov w2,w21
7101eea45c  bl 0x7103778430
7101eea460  ldr x8,[sp, #0x160]
7101eea464  ldr x0,[x8, #0x10]
7101eea468  cbz x0,0x7101eea65c
7101eea46c  add x1,x27,#0x34
7101eea470  mov w3,#0x1
7101eea474  mov w2,#0xffffffff
7101eea478  bl 0x71037a2270
7101eea47c  b 0x7101eea65c
7101eea480  add x8,x8,#0x1
7101eea484  b 0x7101eea4a4
7101eea488  add x8,x8,#0x1
7101eea48c  b 0x7101eea4e0
7101eea490  add x8,x8,#0x2
7101eea494  b 0x7101eea4a4
7101eea498  add x8,x8,#0x2
7101eea49c  b 0x7101eea4e0
7101eea4a0  add w8,w8,#0x3
7101eea4a4  add x9,x26,#0x8
7101eea4a8  strb wzr,[x9, w8, UXTW ]
7101eea4ac  str w8,[sp, #0x16c]
7101eea4b0  ldrb w8,[sp, #0x170]
7101eea4b4  mov w9,w25
7101eea4b8  cbz w8,0x7101eea6f8
7101eea4bc  ldr x10,[sp, #0x20]
7101eea4c0  mov w9,w25
7101eea4c4  mul w9,w9,w14
7101eea4c8  and w8,w8,#0xff
7101eea4cc  eor w9,w9,w8
7101eea4d0  ldrb w8,[x10], #0x1
7101eea4d4  cbnz w8,0x7101eea4c4
7101eea4d8  b 0x7101eea6f8
7101eea4dc  add w8,w8,#0x3
7101eea4e0  add x9,x26,#0x8
7101eea4e4  strb wzr,[x9, w8, UXTW ]
7101eea4e8  str w8,[sp, #0x16c]
7101eea4ec  ldrb w8,[sp, #0x170]
7101eea4f0  mov w9,w25
7101eea4f4  cbz w8,0x7101eea514
7101eea4f8  ldr x10,[sp, #0x20]
7101eea4fc  mov w9,w25
7101eea500  mul w9,w9,w14
7101eea504  and w8,w8,#0xff
7101eea508  eor w9,w9,w8
7101eea50c  ldrb w8,[x10], #0x1
7101eea510  cbnz w8,0x7101eea500
7101eea514  ldr x8,[sp, #0x160]
7101eea518  str w9,[sp, #0x168]
7101eea51c  ldr x0,[x8, #0x10]
7101eea520  cbz x0,0x7101eea534
7101eea524  add x1,x27,#0x74
7101eea528  mov w3,#0x1
7101eea52c  mov w2,#0xffffffff
7101eea530  bl 0x71037a2270
7101eea534  ldur x0,[x29, #-0x68]
7101eea538  add x8,sp,#0x258
7101eea53c  adrp x1,0x7104281000
7101eea540  add x1,x1,#0x2b6
7101eea544  bl 0x7103776910
7101eea548  ldr x19,[sp, #0x260]
7101eea54c  ldr x20,[x19, #0x10]
7101eea550  cbz x20,0x7101eea594
7101eea554  ldrb w3,[x27, #0x29]
7101eea558  sub x0,x29,#0xd0
7101eea55c  mov w1,#0x20
7101eea560  mov w2,wzr
7101eea564  mov w4,wzr
7101eea568  mov w5,wzr
7101eea56c  stp xzr,xzr,[x29, #-0xa0]
7101eea570  stp xzr,xzr,[x29, #-0xb0]
7101eea574  stp xzr,xzr,[x29, #-0xc0]
7101eea578  stp xzr,xzr,[x29, #-0xd0]
7101eea57c  bl 0x71037ad940
7101eea580  mov w2,w0
7101eea584  sub x1,x29,#0xd0
7101eea588  mov x0,x20
7101eea58c  mov w3,wzr
7101eea590  bl 0x71037a2270
7101eea594  adrp x8,0x710523d000
7101eea598  add x8,x8,#0x9a8
7101eea59c  str x8,[sp, #0x258]
7101eea5a0  str xzr,[sp, #0x260]
7101eea5a4  cbz x19,0x7101eea6fc
7101eea5a8  mov x0,x19
7101eea5ac  bl 0x710392eb40
7101eea5b0  b 0x7101eea6fc
7101eea5b4  mov v0.16B,v8.16B
7101eea5b8  adrp x1,0x71042d6000
7101eea5bc  add x1,x1,#0xafd
7101eea5c0  bl 0x7103778300
7101eea5c4  b 0x7101eea65c
7101eea5c8  cmp w8,#0x3c
7101eea5cc  b.hi 0x7101eea61c
7101eea5d0  adrp x9,0x7105314000
7101eea5d4  ldr x9,[x9, #0x510]
7101eea5d8  ldr x10,[x9]
7101eea5dc  adrp x9,0x7105314000
7101eea5e0  add x9,x9,#0x518
7101eea5e4  ldrb w11,[x10]
7101eea5e8  cbnz w11,0x7101eea600
7101eea5ec  ldr x9,[x10, #0x58]
7101eea5f0  mov w10,#0xf7d8
7101eea5f4  ldr x9,[x9]
7101eea5f8  ldr x9,[x9]
7101eea5fc  madd x9,x8,x10,x9
7101eea600  ldrb w8,[x9]
7101eea604  cbz w8,0x7101eea62c
7101eea608  cbz x0,0x7101eea644
7101eea60c  add x1,x9,#0xc
7101eea610  mov w3,#0x1
7101eea614  mov w2,#0xffffffff
7101eea618  b 0x7101eea640
7101eea61c  adrp x9,0x7105314000
7101eea620  add x9,x9,#0x518
7101eea624  ldrb w8,[x9]
7101eea628  cbnz w8,0x7101eea608
7101eea62c  cbz x0,0x7101eea644
7101eea630  sub x1,x29,#0xd0
7101eea634  mov w2,wzr
7101eea638  mov w3,wzr
7101eea63c  stur wzr,[x29, #-0xd0]
7101eea640  bl 0x71037a2270
7101eea644  adrp x8,0x710523d000
7101eea648  add x8,x8,#0x9a8
7101eea64c  stp x8,xzr,[sp, #0x138]
7101eea650  cbz x19,0x7101eea65c
7101eea654  mov x0,x19
7101eea658  bl 0x710392eb40
7101eea65c  sub x8,x29,#0xd0
7101eea660  adrp x0,0x71042b2000
7101eea664  add x0,x0,#0x93a
7101eea668  mov w1,w20
7101eea66c  bl 0x71003a4ca0
7101eea670  ldr x12,[sp, #0x68]
7101eea674  mov x8,xzr
7101eea678  mov w13,#0x89
7101eea67c  add x9,x12,x8
7101eea680  ldrb w11,[x9]
7101eea684  cbz w11,0x7101eea6c4
7101eea688  add x10,x26,x8
7101eea68c  strb w11,[x10, #0x8]
7101eea690  ldrb w11,[x9, #0x1]
7101eea694  cbz w11,0x7101eea6b8
7101eea698  ldrb w9,[x9, #0x2]
7101eea69c  strb w11,[x10, #0x9]
7101eea6a0  cbz w9,0x7101eea6c0
7101eea6a4  add x8,x8,#0x3
7101eea6a8  cmp w8,#0x3f
7101eea6ac  strb w9,[x10, #0xa]
7101eea6b0  b.cc 0x7101eea67c
7101eea6b4  b 0x7101eea6c4
7101eea6b8  add x8,x8,#0x1
7101eea6bc  b 0x7101eea6c4
7101eea6c0  add x8,x8,#0x2
7101eea6c4  add x9,x26,#0x8
7101eea6c8  strb wzr,[x9, w8, UXTW ]
7101eea6cc  str w8,[sp, #0x16c]
7101eea6d0  ldrb w8,[sp, #0x170]
7101eea6d4  mov w9,w25
7101eea6d8  cbz w8,0x7101eea6f8
7101eea6dc  ldr x10,[sp, #0x20]
7101eea6e0  mov w9,w25
7101eea6e4  mul w9,w9,w13
7101eea6e8  and w8,w8,#0xff
7101eea6ec  eor w9,w9,w8
7101eea6f0  ldrb w8,[x10], #0x1
7101eea6f4  cbnz w8,0x7101eea6e4
7101eea6f8  str w9,[sp, #0x168]
7101eea6fc  ldur x0,[x29, #-0x68]
7101eea700  sub x8,x29,#0xd0
7101eea704  adrp x1,0x71043ae000
7101eea708  add x1,x1,#0xa1
7101eea70c  bl 0x7103776910
7101eea710  ldr x2,[sp, #0x48]
7101eea714  sub x0,x29,#0xd0
7101eea718  mov w1,#0x1
7101eea71c  bl 0x710377a310
7101eea720  ldur x0,[x29, #-0xc8]
7101eea724  adrp x8,0x710523d000
7101eea728  add x8,x8,#0x9a8
7101eea72c  stp x8,xzr,[x29, #-0xd0]
7101eea730  cbz x0,0x7101eea738
7101eea734  bl 0x710392eb40
7101eea738  adrp x8,0x710593b000
7101eea73c  ldr x8,[x8, #0x990]
7101eea740  cbz x8,0x7101eea7a4
7101eea744  ldrsw x9,[x27]
7101eea748  cmp w9,#0x8
7101eea74c  b.cs 0x7101eec9e4
7101eea750  ldr x8,[x8, #0x8]
7101eea754  ldr w1,[x8, x9, LSL #0x2]
7101eea758  cmn w1,#0x1
7101eea75c  b.eq 0x7101eea7a4
7101eea760  adrp x8,0x71052c5000
7101eea764  ldr x8,[x8, #0x120]
7101eea768  cbz x8,0x7101eea7a4
7101eea76c  ldr x0,[x8, #0x8]
7101eea770  ldr w3,[sp, #0x1c]
7101eea774  mov v0.16B,v8.16B
7101eea778  mov v1.16B,v8.16B
7101eea77c  mov x2,#0x5e9b
7101eea780  movk x2,#0xc0ba, LSL #16
7101eea784  mov w5,#0xa
7101eea788  movk x2,#0x13, LSL #32
7101eea78c  mov w4,#0xffffffff
7101eea790  mov w6,w5
7101eea794  mov w7,wzr
7101eea798  bl 0x710175dfc0
7101eea79c  mov w8,#0x1
7101eea7a0  strb w8,[x24, #0xfd3]
7101eea7a4  adrp x8,0x710532f000
7101eea7a8  ldr x8,[x8, #0x730]
7101eea7ac  ldur x0,[x29, #-0x68]
7101eea7b0  ldr x25,[x8, #0x8]
7101eea7b4  sub x8,x29,#0xd0
7101eea7b8  adrp x1,0x71042d4000
7101eea7bc  add x1,x1,#0x25c
7101eea7c0  bl 0x7103776910
7101eea7c4  ldr x1,[x27, #0x18]
7101eea7c8  ldr x0,[x25, #0x168]
7101eea7cc  bl 0x7103263f80
7101eea7d0  mov x1,x0
7101eea7d4  mov x0,x24
7101eea7d8  mov w2,#0x11
7101eea7dc  bl 0x710323f600
7101eea7e0  ldur x19,[x29, #-0xc8]
7101eea7e4  mov x1,x0
7101eea7e8  mov x0,x19
7101eea7ec  bl 0x7103778b80
7101eea7f0  adrp x8,0x710523d000
7101eea7f4  add x8,x8,#0x9a8
7101eea7f8  stp x8,xzr,[x29, #-0xd0]
7101eea7fc  cbz x19,0x7101eea808
7101eea800  mov x0,x19
7101eea804  bl 0x710392eb40
7101eea808  ldp x8,x9,[x24, #0xf0]
7101eea80c  sub x8,x9,x8
7101eea810  mov x9,#0xda13
7101eea814  movk x9,#0x684b, LSL #16
7101eea818  asr x8,x8,#0x3
7101eea81c  movk x9,#0xa12f, LSL #32
7101eea820  movk x9,#0x84bd, LSL #48
7101eea824  mul x8,x8,x9
7101eea828  ldr x20,[x27, #0x18]
7101eea82c  cmp x8,#0x5
7101eea830  b.cc 0x7101eea88c
7101eea834  adrp x8,0x710532f000
7101eea838  ldr x8,[x8, #0x730]
7101eea83c  ldr x21,[x8, #0x8]
7101eea840  add x19,x21,#0x160
7101eea844  mov x0,x19
7101eea848  mov x1,x20
7101eea84c  bl 0x7103264990
7101eea850  tbz w0,#0x0,0x7101eea864
7101eea854  ldr x0,[x21, #0x168]
7101eea858  mov x1,#0x453e
7101eea85c  movk x1,#0xb28d, LSL #16
7101eea860  b 0x7101eea880
7101eea864  mov x0,x19
7101eea868  mov x1,x20
7101eea86c  bl 0x7103264ab0
7101eea870  tbz w0,#0x0,0x7101eea88c
7101eea874  ldr x0,[x21, #0x168]
7101eea878  mov x1,#0x67a6
7101eea87c  movk x1,#0xb3e5, LSL #16
7101eea880  movk x1,#0x13, LSL #32
7101eea884  bl 0x71032631a0
7101eea888  mov x20,x0
7101eea88c  ldrb w2,[x27, #0x28]
7101eea890  orr w3,wzr,#0x3
7101eea894  mov x0,x24
7101eea898  mov x1,x20
7101eea89c  bl 0x710323f330
7101eea8a0  mov x19,x0
7101eea8a4  ldrb w2,[x27, #0x28]
7101eea8a8  ldr x0,[x25, #0x2a8]
7101eea8ac  mov x1,x20
7101eea8b0  bl 0x7103280ec0
7101eea8b4  ldr x9,[sp, #0x38]
7101eea8b8  adrp x8,0x710455d000
7101eea8bc  add x8,x8,#0x6a8
7101eea8c0  ldr x2,[x8, x9, LSL #0x0]
7101eea8c4  ldr x8,[x25, #0x2a8]
7101eea8c8  adrp x10,0x710455d000
7101eea8cc  add x10,x10,#0x6e8
7101eea8d0  str x25,[sp, #0x98]
7101eea8d4  ldr x25,[x10, x9, LSL #0x0]
7101eea8d8  adrp x10,0x710455d000
7101eea8dc  add x10,x10,#0x728
7101eea8e0  ldr x26,[x10, x9, LSL #0x0]
7101eea8e4  ldr x28,[x8, #0x8]
7101eea8e8  mov v0.16B,v9.16B
7101eea8ec  mov w22,w0
7101eea8f0  mov x0,x28
7101eea8f4  mov w1,w22
7101eea8f8  bl 0x710326ad60
7101eea8fc  str d0,[sp, #0x80]
7101eea900  mov v0.16B,v9.16B
7101eea904  mov x0,x28
7101eea908  mov w1,w22
7101eea90c  mov x2,x25
7101eea910  bl 0x710326ad60
7101eea914  str d0,[sp, #0x70]
7101eea918  mov v0.16B,v8.16B
7101eea91c  mov x0,x28
7101eea920  mov w1,w22
7101eea924  mov x2,x26
7101eea928  bl 0x710326ad60
7101eea92c  ldur x0,[x29, #-0x68]
7101eea930  sub x8,x29,#0xe0
7101eea934  adrp x1,0x7104401000
7101eea938  add x1,x1,#0xd32
7101eea93c  mov v10.16B,v0.16B
7101eea940  bl 0x7103776910
7101eea944  ldur x22,[x29, #-0xd8]
7101eea948  mov x0,x22
7101eea94c  mov x1,x19
7101eea950  bl 0x7103778b80
7101eea954  mov w0,#0x10
7101eea958  mov w1,#0x20
7101eea95c  bl 0x710392e290
7101eea960  mov x25,x0
7101eea964  cbnz x0,0x7101eea9b0
7101eea968  adrp x8,0x7105332000
7101eea96c  ldr x0,[x8, #0xf00]
7101eea970  cbz x0,0x7101eea9ac
7101eea974  mov w8,#0x20
7101eea978  str wzr,[sp, #0x258]
7101eea97c  add x1,sp,#0x258
7101eea980  stur x8,[x29, #-0xd0]
7101eea984  ldr x8,[x0]
7101eea988  ldr x8,[x8, #0x30]
7101eea98c  sub x2,x29,#0xd0
7101eea990  blr x8
7101eea994  tbz w0,#0x0,0x7101eea9ac
7101eea998  mov w0,#0x10
7101eea99c  mov w1,#0x20
7101eea9a0  bl 0x710392e290
7101eea9a4  mov x25,x0
7101eea9a8  cbnz x0,0x7101eea9b0
7101eea9ac  mov x25,xzr
7101eea9b0  stp xzr,xzr,[x25, #0x10]
7101eea9b4  movi v0.2D,#0x0
7101eea9b8  stp xzr,xzr,[x25]
7101eea9bc  ldr x8,[x22]
7101eea9c0  mov v1.16B,v0.16B
7101eea9c4  ldr q0,[sp, #0x80]
7101eea9c8  str x8,[x25]
7101eea9cc  ldr x8,[x22, #0x8]
7101eea9d0  mov v1.S[0x0],v0.S[0x0]
7101eea9d4  ldr q0,[sp, #0x70]
7101eea9d8  str x8,[x25, #0x8]
7101eea9dc  ldur x8,[x29, #-0xd8]
7101eea9e0  ldr x9,[x8, #0x10]
7101eea9e4  mov v1.S[0x1],v0.S[0x0]
7101eea9e8  mov v0.16B,v10.16B
7101eea9ec  str x9,[x25, #0x10]
7101eea9f0  ldr x8,[x8, #0x18]
7101eea9f4  sub x1,x29,#0xd0
7101eea9f8  mov x0,x25
7101eea9fc  str x8,[x25, #0x18]
7101eeaa00  str q1,[sp, #0x80]
7101eeaa04  stur q1,[x23, #0x68]
7101eeaa08  bl 0x7103779770
7101eeaa0c  ldr w21,[sp, #0xa0]
7101eeaa10  ldr x26,[sp, #0x40]
7101eeaa14  cbz x25,0x7101eeaa20
7101eeaa18  mov x0,x25
7101eeaa1c  bl 0x710392eb40
7101eeaa20  ldur x0,[x29, #-0x68]
7101eeaa24  sub x8,x29,#0xf0
7101eeaa28  adrp x1,0x7104433000
7101eeaa2c  add x1,x1,#0x8b5
7101eeaa30  bl 0x7103776910
7101eeaa34  ldur x22,[x29, #-0xe8]
7101eeaa38  mov x0,x22
7101eeaa3c  mov x1,x19
7101eeaa40  bl 0x7103778b80
7101eeaa44  mov w0,#0x10
7101eeaa48  mov w1,#0x20
7101eeaa4c  bl 0x710392e290
7101eeaa50  ldr x28,[sp, #0x98]
7101eeaa54  mov x19,x0
7101eeaa58  cbnz x0,0x7101eeaaa4
7101eeaa5c  adrp x8,0x7105332000
7101eeaa60  ldr x0,[x8, #0xf00]
7101eeaa64  cbz x0,0x7101eeaaa0
7101eeaa68  mov w8,#0x20
7101eeaa6c  str wzr,[sp, #0x258]
7101eeaa70  add x1,sp,#0x258
7101eeaa74  stur x8,[x29, #-0xd0]
7101eeaa78  ldr x8,[x0]
7101eeaa7c  ldr x8,[x8, #0x30]
7101eeaa80  sub x2,x29,#0xd0
7101eeaa84  blr x8
7101eeaa88  tbz w0,#0x0,0x7101eeaaa0
7101eeaa8c  mov w0,#0x10
7101eeaa90  mov w1,#0x20
7101eeaa94  bl 0x710392e290
7101eeaa98  mov x19,x0
7101eeaa9c  cbnz x0,0x7101eeaaa4
7101eeaaa0  mov x19,xzr
7101eeaaa4  stp xzr,xzr,[x19, #0x10]
7101eeaaa8  sub x1,x29,#0xd0
7101eeaaac  stp xzr,xzr,[x19]
7101eeaab0  ldr x8,[x22]
7101eeaab4  ldr q0,[sp, #0x80]
7101eeaab8  mov x0,x19
7101eeaabc  str x8,[x19]
7101eeaac0  ldr x8,[x22, #0x8]
7101eeaac4  str x8,[x19, #0x8]
7101eeaac8  ldur x8,[x29, #-0xe8]
7101eeaacc  ldr x9,[x8, #0x10]
7101eeaad0  str x9,[x19, #0x10]
7101eeaad4  ldr x8,[x8, #0x18]
7101eeaad8  str x8,[x19, #0x18]
7101eeaadc  stur q0,[x23, #0x68]
7101eeaae0  mov v0.16B,v10.16B
7101eeaae4  bl 0x7103779770
7101eeaae8  cbz x19,0x7101eeaaf4
7101eeaaec  mov x0,x19
7101eeaaf0  bl 0x710392eb40
7101eeaaf4  ldr x19,[x27, #0x18]
7101eeaaf8  ldr x22,[x28, #0x168]
7101eeaafc  mov x0,x22
7101eeab00  mov x1,x19
7101eeab04  bl 0x71032638e0
7101eeab08  ldrb w8,[x24, #0xfba]
7101eeab0c  cbz w8,0x7101eeab6c
7101eeab10  tbz w0,#0x0,0x7101eeab64
7101eeab14  mov x1,#0x1d87
7101eeab18  movk x1,#0x57ab, LSL #16
7101eeab1c  mov x0,x22
7101eeab20  movk x1,#0x12, LSL #32
7101eeab24  bl 0x71032631a0
7101eeab28  and x10,x19,#-0x100000000000000
7101eeab2c  mov x12,#-0x3f00000000000000
7101eeab30  and x9,x19,#0xffffffffff
7101eeab34  and x8,x0,#0xffffffffff
7101eeab38  cmp x10,x12
7101eeab3c  b.ne 0x7101eeabdc
7101eeab40  cbz x9,0x7101eeabdc
7101eeab44  and x11,x0,#-0x100000000000000
7101eeab48  cmp x11,x12
7101eeab4c  b.ne 0x7101eeabe0
7101eeab50  cbz x8,0x7101eeabe0
7101eeab54  eor x8,x0,x19
7101eeab58  tst x8,#0xffffffffff
7101eeab5c  cset w2,eq
7101eeab60  b 0x7101eeac10
7101eeab64  ldrb w2,[x27, #0x28]
7101eeab68  b 0x7101eeac10
7101eeab6c  ldr w8,[x27, #0xc]
7101eeab70  cmp w8,#0x2
7101eeab74  b.eq 0x7101eeab10
7101eeab78  eor w8,w0,#0x1
7101eeab7c  tbnz w8,#0x0,0x7101eeab10
7101eeab80  ldr x0,[x27, #0xa8]
7101eeab84  mov v0.16B,v8.16B
7101eeab88  adrp x1,0x7104413000
7101eeab8c  add x1,x1,#0x12a
7101eeab90  bl 0x7103778300
7101eeab94  ldur x0,[x29, #-0x68]
7101eeab98  sub x8,x29,#0xd0
7101eeab9c  adrp x1,0x7104270000
7101eeaba0  add x1,x1,#0x780
7101eeaba4  bl 0x7103776910
7101eeaba8  ldur x19,[x29, #-0xc8]
7101eeabac  ldr x0,[x19, #0x10]
7101eeabb0  cbz x0,0x7101eeabc4
7101eeabb4  add x1,x27,#0x54
7101eeabb8  mov w3,#0x1
7101eeabbc  mov w2,#0xffffffff
7101eeabc0  bl 0x71037a2270
7101eeabc4  adrp x8,0x710523d000
7101eeabc8  add x8,x8,#0x9a8
7101eeabcc  stp x8,xzr,[x29, #-0xd0]
7101eeabd0  cbz x19,0x7101eead64
7101eeabd4  mov x0,x19
7101eeabd8  b 0x7101eead60
7101eeabdc  and x11,x0,#-0x100000000000000
7101eeabe0  cmp x10,x12
7101eeabe4  cset w10,eq
7101eeabe8  cmp x9,#0x0
7101eeabec  cset w9,ne
7101eeabf0  cmp x8,#0x0
7101eeabf4  cset w8,ne
7101eeabf8  cmp x11,x12
7101eeabfc  and w9,w10,w9
7101eeac00  cset w10,eq
7101eeac04  and w8,w8,w10
7101eeac08  eor w8,w8,w9
7101eeac0c  eor w2,w8,#0x1
7101eeac10  mov x0,x22
7101eeac14  mov x1,x19
7101eeac18  bl 0x7103263540
7101eeac1c  ldr x1,[x28, #0x168]
7101eeac20  mov w22,w0
7101eeac24  sub x0,x29,#0xd0
7101eeac28  mov x2,x19
7101eeac2c  bl 0x7103262310
7101eeac30  ldr x2,[sp, #0x68]
7101eeac34  add x8,sp,#0x258
7101eeac38  adrp x0,0x71042f6000
7101eeac3c  add x0,x0,#0x3c0
7101eeac40  mov w1,w22
7101eeac44  bl 0x71003a4ca0
7101eeac48  adrp x8,0x710593b000
7101eeac4c  ldr x8,[x8, #0xc60]
7101eeac50  ldr x0,[x8]
7101eeac54  mov x1,x26
7101eeac58  bl 0x71037a4570
7101eeac5c  tbz w0,#0x0,0x7101eead14
7101eeac60  adrp x8,0x710593b000
7101eeac64  ldr x8,[x8, #0xc60]
7101eeac68  ldr x0,[x8]
7101eeac6c  mov x1,x26
7101eeac70  bl 0x71037a4450
7101eeac74  cbz x0,0x7101eead14
7101eeac78  ldrh w10,[x0]
7101eeac7c  cbz w10,0x7101eead14
7101eeac80  mov w8,wzr
7101eeac84  mov w9,#0x1
7101eeac88  mov x11,x0
7101eeac8c  orr w13,wzr,#0x3
7101eeac90  orr w12,w10,#0x1
7101eeac94  and w10,w10,#0xffff
7101eeac98  and w12,w12,#0xffff
7101eeac9c  cmp w12,#0xf
7101eeaca0  b.ne 0x7101eeacbc
7101eeaca4  cmp w10,#0xe
7101eeaca8  b.ne 0x7101eeaccc
7101eeacac  ldrh w10,[x11, #0x6]
7101eeacb0  lsr w10,w10,#0x1
7101eeacb4  add w10,w10,#0x4
7101eeacb8  b 0x7101eeacd4
7101eeacbc  cmp w10,#0xa
7101eeacc0  mov w10,#0x1
7101eeacc4  cinc w9,w9,eq
7101eeacc8  b 0x7101eeacd4
7101eeaccc  cmp w10,#0xf
7101eeacd0  csel w10,w13,wzr,eq
7101eeacd4  add w8,w10,w8
7101eeacd8  add x11,x0,w8, UXTW  #0x1
7101eeacdc  ldrh w10,[x11]
7101eeace0  cbnz w10,0x7101eeac90
7101eeace4  cmp w9,#0x2
7101eeace8  b.lt 0x7101eead14
7101eeacec  ldr x0,[x27, #0xa8]
7101eeacf0  mov v0.16B,v8.16B
7101eeacf4  adrp x1,0x7104281000
7101eeacf8  add x1,x1,#0x2c6
7101eeacfc  bl 0x7103778300
7101eead00  ldur x0,[x29, #-0x68]
7101eead04  sub x8,x29,#0xd0
7101eead08  adrp x1,0x7104281000
7101eead0c  add x1,x1,#0x2d4
7101eead10  b 0x7101eead38
7101eead14  ldr x0,[x27, #0xa8]
7101eead18  mov v0.16B,v8.16B
7101eead1c  adrp x1,0x7104413000
7101eead20  add x1,x1,#0x12a
7101eead24  bl 0x7103778300
7101eead28  ldur x0,[x29, #-0x68]
7101eead2c  sub x8,x29,#0xd0
7101eead30  adrp x1,0x7104270000
7101eead34  add x1,x1,#0x780
7101eead38  bl 0x7103776910
7101eead3c  sub x0,x29,#0xd0
7101eead40  mov w1,#0x1
7101eead44  mov x2,x26
7101eead48  bl 0x710377a310
7101eead4c  ldur x0,[x29, #-0xc8]
7101eead50  adrp x8,0x710523d000
7101eead54  add x8,x8,#0x9a8
7101eead58  stp x8,xzr,[x29, #-0xd0]
7101eead5c  cbz x0,0x7101eead64
7101eead60  bl 0x710392eb40
7101eead64  ldr x0,[x27, #0xa8]
7101eead68  mov v0.16B,v8.16B
7101eead6c  adrp x1,0x71043cf000
7101eead70  add x1,x1,#0xc63
7101eead74  bl 0x7103778300
7101eead78  ldur x0,[x29, #-0x68]
7101eead7c  add x8,sp,#0x258
7101eead80  adrp x1,0x7104443000
7101eead84  add x1,x1,#0xf1e
7101eead88  bl 0x7103776910
7101eead8c  ldr x19,[sp, #0x260]
7101eead90  ldr x22,[x19, #0x10]
7101eead94  cbz x22,0x7101eeadd8
7101eead98  ldr w3,[x27, #0x98]
7101eead9c  sub x0,x29,#0xd0
7101eeada0  mov w1,#0x20
7101eeada4  mov w2,wzr
7101eeada8  mov w4,wzr
7101eeadac  mov w5,wzr
7101eeadb0  stp xzr,xzr,[x29, #-0xa0]
7101eeadb4  stp xzr,xzr,[x29, #-0xb0]
7101eeadb8  stp xzr,xzr,[x29, #-0xc0]
7101eeadbc  stp xzr,xzr,[x29, #-0xd0]
7101eeadc0  bl 0x71037ad940
7101eeadc4  mov w2,w0
7101eeadc8  sub x1,x29,#0xd0
7101eeadcc  mov x0,x22
7101eeadd0  mov w3,wzr
7101eeadd4  bl 0x71037a2270
7101eeadd8  adrp x8,0x710523d000
7101eeaddc  add x8,x8,#0x9a8
7101eeade0  str x8,[sp, #0x258]
7101eeade4  str xzr,[sp, #0x260]
7101eeade8  cbz x19,0x7101eeadf4
7101eeadec  mov x0,x19
7101eeadf0  bl 0x710392eb40
7101eeadf4  ldr x0,[x27, #0xa8]
7101eeadf8  mov v0.16B,v8.16B
7101eeadfc  adrp x1,0x7104308000
7101eeae00  add x1,x1,#0xc19
7101eeae04  bl 0x7103778300
7101eeae08  ldrb w8,[x24, #0xfbb]
7101eeae0c  cbz w8,0x7101eeb370
7101eeae10  ldr x8,[x27, #0x20]
7101eeae14  and x9,x8,#-0x100000000000000
7101eeae18  orr x10,xzr,#0x7f00000000000000
7101eeae1c  cmp x9,x10
7101eeae20  b.ne 0x7101eeb370
7101eeae24  and x8,x8,#0xffffffffff
7101eeae28  cbz x8,0x7101eeb370
7101eeae2c  ldur x0,[x29, #-0x68]
7101eeae30  add x8,sp,#0x258
7101eeae34  adrp x1,0x71042c5000
7101eeae38  add x1,x1,#0x5e8
7101eeae3c  add x22,x28,#0x1e0
7101eeae40  bl 0x7103776640
7101eeae44  add x8,sp,#0x248
7101eeae48  add x0,sp,#0x258
7101eeae4c  adrp x1,0x710426d000
7101eeae50  add x1,x1,#0xc22
7101eeae54  bl 0x7103776910
7101eeae58  add x8,sp,#0x238
7101eeae5c  add x0,sp,#0x258
7101eeae60  adrp x1,0x710438d000
7101eeae64  add x1,x1,#0x307
7101eeae68  bl 0x7103776910
7101eeae6c  add x8,sp,#0x228
7101eeae70  add x0,sp,#0x258
7101eeae74  adrp x1,0x710436c000
7101eeae78  add x1,x1,#0xb8d
7101eeae7c  bl 0x7103776910
7101eeae80  add x8,sp,#0x218
7101eeae84  add x0,sp,#0x258
7101eeae88  adrp x1,0x7104308000
7101eeae8c  add x1,x1,#0xbce
7101eeae90  bl 0x7103776910
7101eeae94  add x8,sp,#0x208
7101eeae98  add x0,sp,#0x258
7101eeae9c  adrp x1,0x710434a000
7101eeaea0  add x1,x1,#0xb85
7101eeaea4  bl 0x7103776910
7101eeaea8  ldr x1,[x27, #0x20]
7101eeaeac  mov x0,x24
7101eeaeb0  mov w2,#0x17
7101eeaeb4  bl 0x710323faf0
7101eeaeb8  ldr x19,[sp, #0x250]
7101eeaebc  mov x25,x0
7101eeaec0  mov x1,x25
7101eeaec4  mov x0,x19
7101eeaec8  bl 0x7103778b80
7101eeaecc  ldr x0,[sp, #0x240]
7101eeaed0  mov x1,x25
7101eeaed4  bl 0x7103778b80
7101eeaed8  ldr x0,[sp, #0x230]
7101eeaedc  mov x1,x25
7101eeaee0  bl 0x7103778b80
7101eeaee4  ldr x0,[sp, #0x220]
7101eeaee8  mov x1,x25
7101eeaeec  bl 0x7103778b80
7101eeaef0  ldr x1,[x27, #0x20]
7101eeaef4  mov x0,x24
7101eeaef8  mov w2,#0x19
7101eeaefc  bl 0x710323faf0
7101eeaf00  mov x1,x0
7101eeaf04  ldr x0,[sp, #0x210]
7101eeaf08  bl 0x7103778b80
7101eeaf0c  orr w8,wzr,#0x3f800000
7101eeaf10  str xzr,[sp, #0x1f8]
7101eeaf14  add x3,sp,#0x1f8
7101eeaf18  str w8,[sp, #0x200]
7101eeaf1c  ldr x1,[x27, #0x20]
7101eeaf20  mov x0,x22
7101eeaf24  mov w2,wzr
7101eeaf28  bl 0x71032abaf0
7101eeaf2c  mov w0,#0x10
7101eeaf30  mov w1,#0x20
7101eeaf34  bl 0x710392e290
7101eeaf38  mov x22,x0
7101eeaf3c  cbnz x0,0x7101eeaf88
7101eeaf40  adrp x8,0x7105332000
7101eeaf44  ldr x0,[x8, #0xf00]
7101eeaf48  cbz x0,0x7101eeaf84
7101eeaf4c  mov w8,#0x20
7101eeaf50  stur wzr,[x29, #-0x84]
7101eeaf54  sub x1,x29,#0x84
7101eeaf58  stur x8,[x29, #-0xd0]
7101eeaf5c  ldr x8,[x0]
7101eeaf60  ldr x8,[x8, #0x30]
7101eeaf64  sub x2,x29,#0xd0
7101eeaf68  blr x8
7101eeaf6c  tbz w0,#0x0,0x7101eeaf84
7101eeaf70  mov w0,#0x10
7101eeaf74  mov w1,#0x20
7101eeaf78  bl 0x710392e290
7101eeaf7c  mov x22,x0
7101eeaf80  cbnz x0,0x7101eeaf88
7101eeaf84  mov x22,xzr
7101eeaf88  stp xzr,xzr,[x22, #0x10]
7101eeaf8c  movi v0.2D,#0x0
7101eeaf90  stp xzr,xzr,[x22]
7101eeaf94  ldr x8,[x19]
7101eeaf98  sub x1,x29,#0xd0
7101eeaf9c  mov x0,x22
7101eeafa0  str x8,[x22]
7101eeafa4  ldr x8,[x19, #0x8]
7101eeafa8  str x8,[x22, #0x8]
7101eeafac  ldr x8,[sp, #0x250]
7101eeafb0  ldr x9,[x8, #0x10]
7101eeafb4  str x9,[x22, #0x10]
7101eeafb8  ldr x8,[x8, #0x18]
7101eeafbc  str x8,[x22, #0x18]
7101eeafc0  add x8,sp,#0x1f8
7101eeafc4  ld1 {v0.S}[0],[x8]
7101eeafc8  orr x8,x8,#0x4
7101eeafcc  ld1 {v0.S}[1],[x8]
7101eeafd0  str q0,[sp, #0x80]
7101eeafd4  stur q0,[x23, #0x68]
7101eeafd8  ldr s0,[sp, #0x200]
7101eeafdc  bl 0x7103779770
7101eeafe0  cbz x22,0x7101eeafec
7101eeafe4  mov x0,x22
7101eeafe8  bl 0x710392eb40
7101eeafec  mov w0,#0x10
7101eeaff0  mov w1,#0x20
7101eeaff4  bl 0x710392e290
7101eeaff8  mov x19,x0
7101eeaffc  cbnz x0,0x7101eeb048
7101eeb000  adrp x8,0x7105332000
7101eeb004  ldr x0,[x8, #0xf00]
7101eeb008  cbz x0,0x7101eeb044
7101eeb00c  mov w8,#0x20
7101eeb010  stur wzr,[x29, #-0x84]
7101eeb014  sub x1,x29,#0x84
7101eeb018  stur x8,[x29, #-0xd0]
7101eeb01c  ldr x8,[x0]
7101eeb020  ldr x8,[x8, #0x30]
7101eeb024  sub x2,x29,#0xd0
7101eeb028  blr x8
7101eeb02c  tbz w0,#0x0,0x7101eeb044
7101eeb030  mov w0,#0x10
7101eeb034  mov w1,#0x20
7101eeb038  bl 0x710392e290
7101eeb03c  mov x19,x0
7101eeb040  cbnz x0,0x7101eeb048
7101eeb044  mov x19,xzr
7101eeb048  stp xzr,xzr,[x19, #0x10]
7101eeb04c  sub x1,x29,#0xd0
7101eeb050  stp xzr,xzr,[x19]
7101eeb054  ldr x8,[sp, #0x240]
7101eeb058  ldr x9,[x8]
7101eeb05c  str x9,[x19]
7101eeb060  ldr x8,[x8, #0x8]
7101eeb064  str x8,[x19, #0x8]
7101eeb068  ldr x8,[sp, #0x240]
7101eeb06c  ldr x9,[x8, #0x10]
7101eeb070  str x9,[x19, #0x10]
7101eeb074  ldr x8,[x8, #0x18]
7101eeb078  ldr q0,[sp, #0x80]
7101eeb07c  str x8,[x19, #0x18]
7101eeb080  stur q0,[x23, #0x68]
7101eeb084  ldr s0,[sp, #0x200]
7101eeb088  mov x0,x19
7101eeb08c  bl 0x7103779770
7101eeb090  cbz x19,0x7101eeb09c
7101eeb094  mov x0,x19
7101eeb098  bl 0x710392eb40
7101eeb09c  mov w0,#0x10
7101eeb0a0  mov w1,#0x20
7101eeb0a4  bl 0x710392e290
7101eeb0a8  mov x19,x0
7101eeb0ac  cbnz x0,0x7101eeb0f8
7101eeb0b0  adrp x8,0x7105332000
7101eeb0b4  ldr x0,[x8, #0xf00]
7101eeb0b8  cbz x0,0x7101eeb0f4
7101eeb0bc  mov w8,#0x20
7101eeb0c0  stur wzr,[x29, #-0x84]
7101eeb0c4  sub x1,x29,#0x84
7101eeb0c8  stur x8,[x29, #-0xd0]
7101eeb0cc  ldr x8,[x0]
7101eeb0d0  ldr x8,[x8, #0x30]
7101eeb0d4  sub x2,x29,#0xd0
7101eeb0d8  blr x8
7101eeb0dc  tbz w0,#0x0,0x7101eeb0f4
7101eeb0e0  mov w0,#0x10
7101eeb0e4  mov w1,#0x20
7101eeb0e8  bl 0x710392e290
7101eeb0ec  mov x19,x0
7101eeb0f0  cbnz x0,0x7101eeb0f8
7101eeb0f4  mov x19,xzr
7101eeb0f8  stp xzr,xzr,[x19, #0x10]
7101eeb0fc  sub x1,x29,#0xd0
7101eeb100  stp xzr,xzr,[x19]
7101eeb104  ldr x8,[sp, #0x230]
7101eeb108  ldr x9,[x8]
7101eeb10c  str x9,[x19]
7101eeb110  ldr x8,[x8, #0x8]
7101eeb114  str x8,[x19, #0x8]
7101eeb118  ldr x8,[sp, #0x230]
7101eeb11c  ldr x9,[x8, #0x10]
7101eeb120  str x9,[x19, #0x10]
7101eeb124  ldr x8,[x8, #0x18]
7101eeb128  ldr q0,[sp, #0x80]
7101eeb12c  str x8,[x19, #0x18]
7101eeb130  stur q0,[x23, #0x68]
7101eeb134  ldr s0,[sp, #0x200]
7101eeb138  mov x0,x19
7101eeb13c  bl 0x7103779770
7101eeb140  cbz x19,0x7101eeb14c
7101eeb144  mov x0,x19
7101eeb148  bl 0x710392eb40
7101eeb14c  mov w0,#0x10
7101eeb150  mov w1,#0x20
7101eeb154  bl 0x710392e290
7101eeb158  mov x19,x0
7101eeb15c  cbnz x0,0x7101eeb1a8
7101eeb160  adrp x8,0x7105332000
7101eeb164  ldr x0,[x8, #0xf00]
7101eeb168  cbz x0,0x7101eeb1a4
7101eeb16c  mov w8,#0x20
7101eeb170  stur wzr,[x29, #-0x84]
7101eeb174  sub x1,x29,#0x84
7101eeb178  stur x8,[x29, #-0xd0]
7101eeb17c  ldr x8,[x0]
7101eeb180  ldr x8,[x8, #0x30]
7101eeb184  sub x2,x29,#0xd0
7101eeb188  blr x8
7101eeb18c  tbz w0,#0x0,0x7101eeb1a4
7101eeb190  mov w0,#0x10
7101eeb194  mov w1,#0x20
7101eeb198  bl 0x710392e290
7101eeb19c  mov x19,x0
7101eeb1a0  cbnz x0,0x7101eeb1a8
7101eeb1a4  mov x19,xzr
7101eeb1a8  stp xzr,xzr,[x19, #0x10]
7101eeb1ac  sub x1,x29,#0xd0
7101eeb1b0  stp xzr,xzr,[x19]
7101eeb1b4  ldr x8,[sp, #0x220]
7101eeb1b8  ldr x9,[x8]
7101eeb1bc  str x9,[x19]
7101eeb1c0  ldr x8,[x8, #0x8]
7101eeb1c4  str x8,[x19, #0x8]
7101eeb1c8  ldr x8,[sp, #0x220]
7101eeb1cc  ldr x9,[x8, #0x10]
7101eeb1d0  str x9,[x19, #0x10]
7101eeb1d4  ldr x8,[x8, #0x18]
7101eeb1d8  ldr q0,[sp, #0x80]
7101eeb1dc  str x8,[x19, #0x18]
7101eeb1e0  stur q0,[x23, #0x68]
7101eeb1e4  ldr s0,[sp, #0x200]
7101eeb1e8  mov x0,x19
7101eeb1ec  bl 0x7103779770
7101eeb1f0  cbz x19,0x7101eeb1fc
7101eeb1f4  mov x0,x19
7101eeb1f8  bl 0x710392eb40
7101eeb1fc  mov w0,#0x10
7101eeb200  mov w1,#0x20
7101eeb204  bl 0x710392e290
7101eeb208  mov x19,x0
7101eeb20c  cbnz x0,0x7101eeb258
7101eeb210  adrp x8,0x7105332000
7101eeb214  ldr x0,[x8, #0xf00]
7101eeb218  cbz x0,0x7101eeb254
7101eeb21c  mov w8,#0x20
7101eeb220  stur wzr,[x29, #-0x84]
7101eeb224  sub x1,x29,#0x84
7101eeb228  stur x8,[x29, #-0xd0]
7101eeb22c  ldr x8,[x0]
7101eeb230  ldr x8,[x8, #0x30]
7101eeb234  sub x2,x29,#0xd0
7101eeb238  blr x8
7101eeb23c  tbz w0,#0x0,0x7101eeb254
7101eeb240  mov w0,#0x10
7101eeb244  mov w1,#0x20
7101eeb248  bl 0x710392e290
7101eeb24c  mov x19,x0
7101eeb250  cbnz x0,0x7101eeb258
7101eeb254  mov x19,xzr
7101eeb258  stp xzr,xzr,[x19, #0x10]
7101eeb25c  sub x1,x29,#0xd0
7101eeb260  stp xzr,xzr,[x19]
7101eeb264  ldr x8,[sp, #0x210]
7101eeb268  ldr x9,[x8]
7101eeb26c  str x9,[x19]
7101eeb270  ldr x8,[x8, #0x8]
7101eeb274  str x8,[x19, #0x8]
7101eeb278  ldr x22,[sp, #0x210]
7101eeb27c  ldr x8,[x22, #0x10]
7101eeb280  str x8,[x19, #0x10]
7101eeb284  ldr x8,[x22, #0x18]
7101eeb288  ldr q0,[sp, #0x80]
7101eeb28c  str x8,[x19, #0x18]
7101eeb290  stur q0,[x23, #0x68]
7101eeb294  ldr s0,[sp, #0x200]
7101eeb298  mov x0,x19
7101eeb29c  bl 0x7103779770
7101eeb2a0  cbz x19,0x7101eeb2ac
7101eeb2a4  mov x0,x19
7101eeb2a8  bl 0x710392eb40
7101eeb2ac  adrp x8,0x710523d000
7101eeb2b0  add x8,x8,#0x9a8
7101eeb2b4  str x8,[sp, #0x208]
7101eeb2b8  str xzr,[sp, #0x210]
7101eeb2bc  cbz x22,0x7101eeb2c8
7101eeb2c0  mov x0,x22
7101eeb2c4  bl 0x710392eb40
7101eeb2c8  ldr x0,[sp, #0x220]
7101eeb2cc  adrp x8,0x710523d000
7101eeb2d0  add x8,x8,#0x9a8
7101eeb2d4  str x8,[sp, #0x218]
7101eeb2d8  str xzr,[sp, #0x220]
7101eeb2dc  cbz x0,0x7101eeb2e4
7101eeb2e0  bl 0x710392eb40
7101eeb2e4  ldr x0,[sp, #0x230]
7101eeb2e8  adrp x8,0x710523d000
7101eeb2ec  add x8,x8,#0x9a8
7101eeb2f0  str x8,[sp, #0x228]
7101eeb2f4  str xzr,[sp, #0x230]
7101eeb2f8  cbz x0,0x7101eeb300
7101eeb2fc  bl 0x710392eb40
7101eeb300  ldr x0,[sp, #0x240]
7101eeb304  adrp x8,0x710523d000
7101eeb308  add x8,x8,#0x9a8
7101eeb30c  str x8,[sp, #0x238]
7101eeb310  str xzr,[sp, #0x240]
7101eeb314  cbz x0,0x7101eeb31c
7101eeb318  bl 0x710392eb40
7101eeb31c  ldr x0,[sp, #0x250]
7101eeb320  adrp x8,0x710523d000
7101eeb324  add x8,x8,#0x9a8
7101eeb328  str x8,[sp, #0x248]
7101eeb32c  str xzr,[sp, #0x250]
7101eeb330  cbz x0,0x7101eeb338
7101eeb334  bl 0x710392eb40
7101eeb338  ldr x19,[sp, #0x260]
7101eeb33c  adrp x8,0x710523d000
7101eeb340  add x8,x8,#0x988
7101eeb344  str x8,[sp, #0x258]
7101eeb348  str xzr,[sp, #0x260]
7101eeb34c  cbz x19,0x7101eeb370
7101eeb350  ldr x0,[x19, #0x18]
7101eeb354  adrp x8,0x710523d000
7101eeb358  add x8,x8,#0x9a8
7101eeb35c  stp x8,xzr,[x19, #0x10]
7101eeb360  cbz x0,0x7101eeb368
7101eeb364  bl 0x710392eb40
7101eeb368  mov x0,x19
7101eeb36c  bl 0x710392eb40
7101eeb370  ldrb w2,[x27, #0x28]
7101eeb374  ldr x0,[x28, #0x2a8]
7101eeb378  mov x1,x20
7101eeb37c  bl 0x7103280ec0
7101eeb380  ldr x8,[x28, #0x2a8]
7101eeb384  mov w1,w0
7101eeb388  ldr x0,[x8, #0x8]
7101eeb38c  mov x8,#0xeb67
7101eeb390  movk x8,#0x190e, LSL #16
7101eeb394  mov x9,#0x32e2
7101eeb398  movk x9,#0xc498, LSL #16
7101eeb39c  cmp w21,#0x2
7101eeb3a0  movk x9,#0x11, LSL #32
7101eeb3a4  mov w3,wzr
7101eeb3a8  movk x8,#0x11, LSL #32
7101eeb3ac  csel x2,x9,x8,gt
7101eeb3b0  bl 0x710326aa20
7101eeb3b4  mov x26,x27
7101eeb3b8  ldr x28,[x26, #0xc0]!
7101eeb3bc  ldr x22,[x26, #0x8]
7101eeb3c0  mov w19,w0
7101eeb3c4  cmp x22,x28
7101eeb3c8  b.eq 0x7101eeb3ec
7101eeb3cc  ldr x8,[x22, #-0x10]!
7101eeb3d0  ldr x8,[x8]
7101eeb3d4  mov x0,x22
7101eeb3d8  blr x8
7101eeb3dc  cmp x28,x22
7101eeb3e0  b.ne 0x7101eeb3cc
7101eeb3e4  ldr x25,[x26]
7101eeb3e8  b 0x7101eeb3f0
7101eeb3ec  mov x25,x28
7101eeb3f0  ldr x8,[x27, #0xd0]
7101eeb3f4  sub x8,x8,x25
7101eeb3f8  sxtw x24,w19
7101eeb3fc  asr x8,x8,#0x4
7101eeb400  cmp x8,x24
7101eeb404  str x28,[x27, #0xc8]
7101eeb408  b.cs 0x7101eeb50c
7101eeb40c  tbnz w19,#0x1f,0x7101eec9e4
7101eeb410  sub x8,x28,x25
7101eeb414  asr x23,x8,#0x4
7101eeb418  lsl x8,x24,#0x4
7101eeb41c  cmp w19,#0x0
7101eeb420  csinc x22,x8,xzr,ne
7101eeb424  mov w0,#0x10
7101eeb428  mov x1,x22
7101eeb42c  bl 0x710392e290
7101eeb430  cbnz x0,0x7101eeb474
7101eeb434  adrp x8,0x7105332000
7101eeb438  ldr x0,[x8, #0xf00]
7101eeb43c  cbz x0,0x7101eeb470
7101eeb440  str wzr,[sp, #0x258]
7101eeb444  stur x22,[x29, #-0xd0]
7101eeb448  ldr x8,[x0]
7101eeb44c  ldr x8,[x8, #0x30]
7101eeb450  add x1,sp,#0x258
7101eeb454  sub x2,x29,#0xd0
7101eeb458  blr x8
7101eeb45c  tbz w0,#0x0,0x7101eeb470
7101eeb460  mov w0,#0x10
7101eeb464  mov x1,x22
7101eeb468  bl 0x710392e290
7101eeb46c  cbnz x0,0x7101eeb474
7101eeb470  mov x0,xzr
7101eeb474  add x21,x0,x23, LSL #0x4
7101eeb478  add x24,x0,x24, LSL #0x4
7101eeb47c  cmp x28,x25
7101eeb480  b.eq 0x7101ee9cf4
7101eeb484  mov x23,x21
7101eeb488  mov x8,x23
7101eeb48c  adrp x9,0x710523d000
7101eeb490  add x9,x9,#0x9e8
7101eeb494  str x9,[x23, #-0x10]!
7101eeb498  sub x22,x28,#0x10
7101eeb49c  cmp x28,x8
7101eeb4a0  stur xzr,[x8, #-0x8]
7101eeb4a4  b.eq 0x7101eeb4c0
7101eeb4a8  ldur x9,[x28, #-0x8]
7101eeb4ac  stur xzr,[x28, #-0x8]
7101eeb4b0  ldur x0,[x8, #-0x8]
7101eeb4b4  stur x9,[x8, #-0x8]
7101eeb4b8  cbz x0,0x7101eeb4c0
7101eeb4bc  bl 0x710392eb40
7101eeb4c0  cmp x25,x22
7101eeb4c4  mov x28,x22
7101eeb4c8  b.ne 0x7101eeb488
7101eeb4cc  ldp x28,x22,[x27, #0xc0]
7101eeb4d0  cmp x22,x28
7101eeb4d4  stp x23,x21,[x27, #0xc0]
7101eeb4d8  str x24,[x27, #0xd0]
7101eeb4dc  b.eq 0x7101ee9cfc
7101eeb4e0  ldr w21,[sp, #0xa0]
7101eeb4e4  add x23,sp,#0x258
7101eeb4e8  ldr x8,[x22, #-0x10]!
7101eeb4ec  ldr x8,[x8]
7101eeb4f0  mov x0,x22
7101eeb4f4  blr x8
7101eeb4f8  cmp x28,x22
7101eeb4fc  b.ne 0x7101eeb4e8
7101eeb500  cbz x28,0x7101eeb50c
7101eeb504  mov x0,x28
7101eeb508  bl 0x710392eb40
7101eeb50c  ldr x24,[sp, #0x58]
7101eeb510  cmp w19,#0x1
7101eeb514  b.lt 0x7101eeb660
7101eeb518  ldr x8,[sp, #0x98]
7101eeb51c  mov w28,wzr
7101eeb520  add x22,x8,#0x2a0
7101eeb524  ldur x0,[x29, #-0x68]
7101eeb528  sub x8,x29,#0xd0
7101eeb52c  adrp x1,0x7104308000
7101eeb530  add x1,x1,#0xbe4
7101eeb534  mov w2,w28
7101eeb538  bl 0x7103776640
7101eeb53c  sub x0,x29,#0xd0
7101eeb540  adrp x1,0x71042e7000
7101eeb544  add x1,x1,#0xabe
7101eeb548  mov w2,w21
7101eeb54c  bl 0x7103778430
7101eeb550  ldur x25,[x29, #-0xc8]
7101eeb554  ldr x1,[sp, #0xa8]
7101eeb558  mov v0.16B,v8.16B
7101eeb55c  mov x0,x25
7101eeb560  bl 0x7103778300
7101eeb564  ldrb w2,[x27, #0x28]
7101eeb568  ldr w4,[sp, #0xa4]
7101eeb56c  mov x0,x22
7101eeb570  mov x1,x20
7101eeb574  mov w3,w28
7101eeb578  bl 0x7103281470
7101eeb57c  ldr x8,[x25, #0x18]
7101eeb580  ldr x8,[x8]
7101eeb584  cbz x8,0x7101eeb598
7101eeb588  ldrb w9,[x8, #0x58]
7101eeb58c  orr w9,w9,#0x10
7101eeb590  stp s0,s1,[x8, #0x30]
7101eeb594  strb w9,[x8, #0x58]
7101eeb598  ldr w2,[sp, #0xb4]
7101eeb59c  add x8,sp,#0x258
7101eeb5a0  sub x0,x29,#0xd0
7101eeb5a4  adrp x1,0x71043f1000
7101eeb5a8  add x1,x1,#0xf4
7101eeb5ac  bl 0x71037780e0
7101eeb5b0  ldp x8,x9,[x27, #0xc8]
7101eeb5b4  cmp x8,x9
7101eeb5b8  b.cs 0x7101eeb5fc
7101eeb5bc  add x9,sp,#0x258
7101eeb5c0  cmp x8,x9
7101eeb5c4  adrp x9,0x710523d000
7101eeb5c8  add x9,x9,#0x9e8
7101eeb5cc  stp x9,xzr,[x8]
7101eeb5d0  b.eq 0x7101eeb5ec
7101eeb5d4  ldr x9,[sp, #0x260]
7101eeb5d8  str xzr,[sp, #0x260]
7101eeb5dc  ldr x0,[x8, #0x8]
7101eeb5e0  str x9,[x8, #0x8]
7101eeb5e4  cbz x0,0x7101eeb5ec
7101eeb5e8  bl 0x710392eb40
7101eeb5ec  ldr x8,[x27, #0xc8]
7101eeb5f0  add x8,x8,#0x10
7101eeb5f4  str x8,[x27, #0xc8]
7101eeb5f8  b 0x7101eeb608
7101eeb5fc  add x1,sp,#0x258
7101eeb600  mov x0,x26
7101eeb604  bl 0x7101b09e60
7101eeb608  ldr x0,[sp, #0x260]
7101eeb60c  adrp x8,0x710523d000
7101eeb610  add x8,x8,#0x9e8
7101eeb614  str x8,[sp, #0x258]
7101eeb618  str xzr,[sp, #0x260]
7101eeb61c  cbz x0,0x7101eeb624
7101eeb620  bl 0x710392eb40
7101eeb624  adrp x8,0x710523d000
7101eeb628  add x8,x8,#0x988
7101eeb62c  stp x8,xzr,[x29, #-0xd0]
7101eeb630  cbz x25,0x7101eeb654
7101eeb634  ldr x0,[x25, #0x18]
7101eeb638  adrp x8,0x710523d000
7101eeb63c  add x8,x8,#0x9a8
7101eeb640  stp x8,xzr,[x25, #0x10]
7101eeb644  cbz x0,0x7101eeb64c
7101eeb648  bl 0x710392eb40
7101eeb64c  mov x0,x25
7101eeb650  bl 0x710392eb40
7101eeb654  add w28,w28,#0x1
7101eeb658  cmp w19,w28
7101eeb65c  b.ne 0x7101eeb524
7101eeb660  ldur x20,[x29, #-0x68]
7101eeb664  mov x0,x20
7101eeb668  adrp x1,0x7104401000
7101eeb66c  add x1,x1,#0xd42
7101eeb670  mov w2,w19
7101eeb674  bl 0x7103778430
7101eeb678  add x8,sp,#0x258
7101eeb67c  mov x0,x20
7101eeb680  adrp x1,0x71042e7000
7101eeb684  add x1,x1,#0xad0
7101eeb688  bl 0x7103776910
7101eeb68c  ldr x19,[sp, #0x260]
7101eeb690  ldr x20,[x19, #0x10]
7101eeb694  cbz x20,0x7101eeb6d8
7101eeb698  ldr w3,[x27, #0x9c]
7101eeb69c  sub x0,x29,#0xd0
7101eeb6a0  mov w1,#0x20
7101eeb6a4  mov w2,wzr
7101eeb6a8  mov w4,wzr
7101eeb6ac  mov w5,wzr
7101eeb6b0  stp xzr,xzr,[x29, #-0xa0]
7101eeb6b4  stp xzr,xzr,[x29, #-0xb0]
7101eeb6b8  stp xzr,xzr,[x29, #-0xc0]
7101eeb6bc  stp xzr,xzr,[x29, #-0xd0]
7101eeb6c0  bl 0x71037ad940
7101eeb6c4  mov w2,w0
7101eeb6c8  sub x1,x29,#0xd0
7101eeb6cc  mov x0,x20
7101eeb6d0  mov w3,wzr
7101eeb6d4  bl 0x71037a2270
7101eeb6d8  ldr x21,[sp, #0x50]
7101eeb6dc  adrp x8,0x710523d000
7101eeb6e0  add x8,x8,#0x9a8
7101eeb6e4  mov w25,#0x9dc5
7101eeb6e8  movk w25,#0x811c, LSL #16
7101eeb6ec  add x26,sp,#0x168
7101eeb6f0  sub x28,x29,#0xd0
7101eeb6f4  str x8,[sp, #0x258]
7101eeb6f8  str xzr,[sp, #0x260]
7101eeb6fc  cbz x19,0x7101eeb708
7101eeb700  mov x0,x19
7101eeb704  bl 0x710392eb40
7101eeb708  ldur x0,[x29, #-0xe8]
7101eeb70c  adrp x8,0x710523d000
7101eeb710  add x8,x8,#0x9a8
7101eeb714  stp x8,xzr,[x29, #-0xf0]
7101eeb718  cbz x0,0x7101eeb720
7101eeb71c  bl 0x710392eb40
7101eeb720  ldur x0,[x29, #-0xd8]
7101eeb724  adrp x8,0x710523d000
7101eeb728  add x8,x8,#0x9a8
7101eeb72c  stp x8,xzr,[x29, #-0xe0]
7101eeb730  cbz x0,0x7101eeb738
7101eeb734  bl 0x710392eb40
7101eeb738  ldr x0,[sp, #0x160]
7101eeb73c  adrp x8,0x710523d000
7101eeb740  add x8,x8,#0x9a8
7101eeb744  stp x8,xzr,[sp, #0x158]
7101eeb748  cbz x0,0x7101eeb750
7101eeb74c  bl 0x710392eb40
7101eeb750  ldr x8,[sp, #0x60]
7101eeb754  add x27,x27,#0xd8
7101eeb758  cmp x27,x8
7101eeb75c  b.ne 0x7101ee9d0c
7101eeb760  ldr x27,[sp]
7101eeb764  adrp x1,0x7104433000
7101eeb768  add x1,x1,#0x886
7101eeb76c  sub x8,x29,#0xd0
7101eeb770  mov w2,wzr
7101eeb774  sub x20,x29,#0xd0
7101eeb778  mov x0,x27
7101eeb77c  add x19,x24,#0x108
7101eeb780  bl 0x7103776640
7101eeb784  cmp x19,x20
7101eeb788  b.eq 0x7101eeb7c0
7101eeb78c  ldur x8,[x29, #-0xc8]
7101eeb790  stur xzr,[x29, #-0xc8]
7101eeb794  ldr x20,[x24, #0x110]
7101eeb798  str x8,[x24, #0x110]
7101eeb79c  cbz x20,0x7101eeb7c0
7101eeb7a0  ldr x0,[x20, #0x18]
7101eeb7a4  adrp x8,0x710523d000
7101eeb7a8  add x8,x8,#0x9a8
7101eeb7ac  stp x8,xzr,[x20, #0x10]
7101eeb7b0  cbz x0,0x7101eeb7b8
7101eeb7b4  bl 0x710392eb40
7101eeb7b8  mov x0,x20
7101eeb7bc  bl 0x710392eb40
7101eeb7c0  ldur x20,[x29, #-0xc8]
7101eeb7c4  add x26,sp,#0x258
7101eeb7c8  adrp x23,0x710523d000
7101eeb7cc  add x23,x23,#0x988
7101eeb7d0  stp x23,xzr,[x29, #-0xd0]
7101eeb7d4  cbz x20,0x7101eeb7f8
7101eeb7d8  ldr x0,[x20, #0x18]
7101eeb7dc  adrp x8,0x710523d000
7101eeb7e0  add x8,x8,#0x9a8
7101eeb7e4  stp x8,xzr,[x20, #0x10]
7101eeb7e8  cbz x0,0x7101eeb7f0
7101eeb7ec  bl 0x710392eb40
7101eeb7f0  mov x0,x20
7101eeb7f4  bl 0x710392eb40
7101eeb7f8  mov x0,x19
7101eeb7fc  bl 0x7101eedbe0
7101eeb800  adrp x1,0x7104433000
7101eeb804  add x1,x1,#0x886
7101eeb808  sub x8,x29,#0xd0
7101eeb80c  mov w2,#0x1
7101eeb810  mov x0,x27
7101eeb814  add x19,x24,#0x1c0
7101eeb818  sub x20,x29,#0xd0
7101eeb81c  bl 0x7103776640
7101eeb820  cmp x19,x20
7101eeb824  b.eq 0x7101eeb85c
7101eeb828  ldur x8,[x29, #-0xc8]
7101eeb82c  stur xzr,[x29, #-0xc8]
7101eeb830  ldr x20,[x24, #0x1c8]
7101eeb834  str x8,[x24, #0x1c8]
7101eeb838  cbz x20,0x7101eeb85c
7101eeb83c  ldr x0,[x20, #0x18]
7101eeb840  adrp x8,0x710523d000
7101eeb844  add x8,x8,#0x9a8
7101eeb848  stp x8,xzr,[x20, #0x10]
7101eeb84c  cbz x0,0x7101eeb854
7101eeb850  bl 0x710392eb40
7101eeb854  mov x0,x20
7101eeb858  bl 0x710392eb40
7101eeb85c  ldur x20,[x29, #-0xc8]
7101eeb860  stp x23,xzr,[x29, #-0xd0]
7101eeb864  cbz x20,0x7101eeb888
7101eeb868  ldr x0,[x20, #0x18]
7101eeb86c  adrp x8,0x710523d000
7101eeb870  add x8,x8,#0x9a8
7101eeb874  stp x8,xzr,[x20, #0x10]
7101eeb878  cbz x0,0x7101eeb880
7101eeb87c  bl 0x710392eb40
7101eeb880  mov x0,x20
7101eeb884  bl 0x710392eb40
7101eeb888  mov x0,x19
7101eeb88c  bl 0x7101eedbe0
7101eeb890  adrp x1,0x7104433000
7101eeb894  add x1,x1,#0x886
7101eeb898  sub x8,x29,#0xd0
7101eeb89c  mov w2,#0x2
7101eeb8a0  mov x0,x27
7101eeb8a4  add x19,x24,#0x278
7101eeb8a8  sub x20,x29,#0xd0
7101eeb8ac  bl 0x7103776640
7101eeb8b0  cmp x19,x20
7101eeb8b4  b.eq 0x7101eeb8ec
7101eeb8b8  ldur x8,[x29, #-0xc8]
7101eeb8bc  stur xzr,[x29, #-0xc8]
7101eeb8c0  ldr x20,[x24, #0x280]
7101eeb8c4  str x8,[x24, #0x280]
7101eeb8c8  cbz x20,0x7101eeb8ec
7101eeb8cc  ldr x0,[x20, #0x18]
7101eeb8d0  adrp x8,0x710523d000
7101eeb8d4  add x8,x8,#0x9a8
7101eeb8d8  stp x8,xzr,[x20, #0x10]
7101eeb8dc  cbz x0,0x7101eeb8e4
7101eeb8e0  bl 0x710392eb40
7101eeb8e4  mov x0,x20
7101eeb8e8  bl 0x710392eb40
7101eeb8ec  ldur x20,[x29, #-0xc8]
7101eeb8f0  stp x23,xzr,[x29, #-0xd0]
7101eeb8f4  cbz x20,0x7101eeb918
7101eeb8f8  ldr x0,[x20, #0x18]
7101eeb8fc  adrp x8,0x710523d000
7101eeb900  add x8,x8,#0x9a8
7101eeb904  stp x8,xzr,[x20, #0x10]
7101eeb908  cbz x0,0x7101eeb910
7101eeb90c  bl 0x710392eb40
7101eeb910  mov x0,x20
7101eeb914  bl 0x710392eb40
7101eeb918  mov x0,x19
7101eeb91c  bl 0x7101eedbe0
7101eeb920  adrp x1,0x7104433000
7101eeb924  add x1,x1,#0x886
7101eeb928  sub x8,x29,#0xd0
7101eeb92c  orr w2,wzr,#0x3
7101eeb930  mov x0,x27
7101eeb934  add x19,x24,#0x330
7101eeb938  sub x20,x29,#0xd0
7101eeb93c  bl 0x7103776640
7101eeb940  cmp x19,x20
7101eeb944  b.eq 0x7101eeb97c
7101eeb948  ldur x8,[x29, #-0xc8]
7101eeb94c  stur xzr,[x29, #-0xc8]
7101eeb950  ldr x20,[x24, #0x338]
7101eeb954  str x8,[x24, #0x338]
7101eeb958  cbz x20,0x7101eeb97c
7101eeb95c  ldr x0,[x20, #0x18]
7101eeb960  adrp x8,0x710523d000
7101eeb964  add x8,x8,#0x9a8
7101eeb968  stp x8,xzr,[x20, #0x10]
7101eeb96c  cbz x0,0x7101eeb974
7101eeb970  bl 0x710392eb40
7101eeb974  mov x0,x20
7101eeb978  bl 0x710392eb40
7101eeb97c  ldur x20,[x29, #-0xc8]
7101eeb980  stp x23,xzr,[x29, #-0xd0]
7101eeb984  cbz x20,0x7101eeb9a8
7101eeb988  ldr x0,[x20, #0x18]
7101eeb98c  adrp x8,0x710523d000
7101eeb990  add x8,x8,#0x9a8
7101eeb994  stp x8,xzr,[x20, #0x10]
7101eeb998  cbz x0,0x7101eeb9a0
7101eeb99c  bl 0x710392eb40
7101eeb9a0  mov x0,x20
7101eeb9a4  bl 0x710392eb40
7101eeb9a8  mov x0,x19
7101eeb9ac  bl 0x7101eedbe0
7101eeb9b0  adrp x1,0x7104433000
7101eeb9b4  add x1,x1,#0x886
7101eeb9b8  sub x8,x29,#0xd0
7101eeb9bc  mov w2,#0x4
7101eeb9c0  mov x0,x27
7101eeb9c4  add x19,x24,#0x3e8
7101eeb9c8  sub x20,x29,#0xd0
7101eeb9cc  bl 0x7103776640
7101eeb9d0  cmp x19,x20
7101eeb9d4  b.eq 0x7101eeba0c
7101eeb9d8  ldur x8,[x29, #-0xc8]
7101eeb9dc  stur xzr,[x29, #-0xc8]
7101eeb9e0  ldr x20,[x24, #0x3f0]
7101eeb9e4  str x8,[x24, #0x3f0]
7101eeb9e8  cbz x20,0x7101eeba0c
7101eeb9ec  ldr x0,[x20, #0x18]
7101eeb9f0  adrp x8,0x710523d000
7101eeb9f4  add x8,x8,#0x9a8
7101eeb9f8  stp x8,xzr,[x20, #0x10]
7101eeb9fc  cbz x0,0x7101eeba04
7101eeba00  bl 0x710392eb40
7101eeba04  mov x0,x20
7101eeba08  bl 0x710392eb40
7101eeba0c  ldur x20,[x29, #-0xc8]
7101eeba10  stp x23,xzr,[x29, #-0xd0]
7101eeba14  cbz x20,0x7101eeba38
7101eeba18  ldr x0,[x20, #0x18]
7101eeba1c  adrp x8,0x710523d000
7101eeba20  add x8,x8,#0x9a8
7101eeba24  stp x8,xzr,[x20, #0x10]
7101eeba28  cbz x0,0x7101eeba30
7101eeba2c  bl 0x710392eb40
7101eeba30  mov x0,x20
7101eeba34  bl 0x710392eb40
7101eeba38  mov x0,x19
7101eeba3c  bl 0x7101eedbe0
7101eeba40  adrp x1,0x7104433000
7101eeba44  add x1,x1,#0x886
7101eeba48  mov w2,#0x5
7101eeba4c  sub x8,x29,#0xd0
7101eeba50  mov x0,x27
7101eeba54  add x19,x24,#0x4a0
7101eeba58  sub x20,x29,#0xd0
7101eeba5c  bl 0x7103776640
7101eeba60  cmp x19,x20
7101eeba64  b.eq 0x7101eeba9c
7101eeba68  ldur x8,[x29, #-0xc8]
7101eeba6c  stur xzr,[x29, #-0xc8]
7101eeba70  ldr x20,[x24, #0x4a8]
7101eeba74  str x8,[x24, #0x4a8]
7101eeba78  cbz x20,0x7101eeba9c
7101eeba7c  ldr x0,[x20, #0x18]
7101eeba80  adrp x8,0x710523d000
7101eeba84  add x8,x8,#0x9a8
7101eeba88  stp x8,xzr,[x20, #0x10]
7101eeba8c  cbz x0,0x7101eeba94
7101eeba90  bl 0x710392eb40
7101eeba94  mov x0,x20
7101eeba98  bl 0x710392eb40
7101eeba9c  ldur x20,[x29, #-0xc8]
7101eebaa0  stp x23,xzr,[x29, #-0xd0]
7101eebaa4  cbz x20,0x7101eebac8
7101eebaa8  ldr x0,[x20, #0x18]
7101eebaac  adrp x8,0x710523d000
7101eebab0  add x8,x8,#0x9a8
7101eebab4  stp x8,xzr,[x20, #0x10]
7101eebab8  cbz x0,0x7101eebac0
7101eebabc  bl 0x710392eb40
7101eebac0  mov x0,x20
7101eebac4  bl 0x710392eb40
7101eebac8  mov x0,x19
7101eebacc  bl 0x7101eedbe0
7101eebad0  adrp x1,0x7104433000
7101eebad4  add x1,x1,#0x886
7101eebad8  sub x8,x29,#0xd0
7101eebadc  orr w2,wzr,#0x6
7101eebae0  mov x0,x27
7101eebae4  add x19,x24,#0x558
7101eebae8  sub x20,x29,#0xd0
7101eebaec  bl 0x7103776640
7101eebaf0  cmp x19,x20
7101eebaf4  b.eq 0x7101eebb2c
7101eebaf8  ldur x8,[x29, #-0xc8]
7101eebafc  stur xzr,[x29, #-0xc8]
7101eebb00  ldr x20,[x24, #0x560]
7101eebb04  str x8,[x24, #0x560]
7101eebb08  cbz x20,0x7101eebb2c
7101eebb0c  ldr x0,[x20, #0x18]
7101eebb10  adrp x8,0x710523d000
7101eebb14  add x8,x8,#0x9a8
7101eebb18  stp x8,xzr,[x20, #0x10]
7101eebb1c  cbz x0,0x7101eebb24
7101eebb20  bl 0x710392eb40
7101eebb24  mov x0,x20
7101eebb28  bl 0x710392eb40
7101eebb2c  ldur x20,[x29, #-0xc8]
7101eebb30  stp x23,xzr,[x29, #-0xd0]
7101eebb34  cbz x20,0x7101eebb58
7101eebb38  ldr x0,[x20, #0x18]
7101eebb3c  adrp x8,0x710523d000
7101eebb40  add x8,x8,#0x9a8
7101eebb44  stp x8,xzr,[x20, #0x10]
7101eebb48  cbz x0,0x7101eebb50
7101eebb4c  bl 0x710392eb40
7101eebb50  mov x0,x20
7101eebb54  bl 0x710392eb40
7101eebb58  mov x0,x19
7101eebb5c  bl 0x7101eedbe0
7101eebb60  adrp x1,0x7104433000
7101eebb64  add x1,x1,#0x886
7101eebb68  sub x8,x29,#0xd0
7101eebb6c  orr w2,wzr,#0x7
7101eebb70  mov x0,x27
7101eebb74  add x19,x24,#0x610
7101eebb78  sub x20,x29,#0xd0
7101eebb7c  bl 0x7103776640
7101eebb80  cmp x19,x20
7101eebb84  b.eq 0x7101eebbbc
7101eebb88  ldur x8,[x29, #-0xc8]
7101eebb8c  stur xzr,[x29, #-0xc8]
7101eebb90  ldr x20,[x24, #0x618]
7101eebb94  str x8,[x24, #0x618]
7101eebb98  cbz x20,0x7101eebbbc
7101eebb9c  ldr x0,[x20, #0x18]
7101eebba0  adrp x8,0x710523d000
7101eebba4  add x8,x8,#0x9a8
7101eebba8  stp x8,xzr,[x20, #0x10]
7101eebbac  cbz x0,0x7101eebbb4
7101eebbb0  bl 0x710392eb40
7101eebbb4  mov x0,x20
7101eebbb8  bl 0x710392eb40
7101eebbbc  ldur x20,[x29, #-0xc8]
7101eebbc0  stp x23,xzr,[x29, #-0xd0]
7101eebbc4  cbz x20,0x7101eebbe8
7101eebbc8  ldr x0,[x20, #0x18]
7101eebbcc  adrp x8,0x710523d000
7101eebbd0  add x8,x8,#0x9a8
7101eebbd4  stp x8,xzr,[x20, #0x10]
7101eebbd8  cbz x0,0x7101eebbe0
7101eebbdc  bl 0x710392eb40
7101eebbe0  mov x0,x20
7101eebbe4  bl 0x710392eb40
7101eebbe8  mov x0,x19
7101eebbec  bl 0x7101eedbe0
7101eebbf0  adrp x1,0x7104433000
7101eebbf4  add x1,x1,#0x886
7101eebbf8  sub x8,x29,#0xd0
7101eebbfc  mov w2,#0x8
7101eebc00  mov x0,x27
7101eebc04  add x19,x24,#0x6c8
7101eebc08  sub x20,x29,#0xd0
7101eebc0c  bl 0x7103776640
7101eebc10  cmp x19,x20
7101eebc14  b.eq 0x7101eebc4c
7101eebc18  ldur x8,[x29, #-0xc8]
7101eebc1c  stur xzr,[x29, #-0xc8]
7101eebc20  ldr x20,[x24, #0x6d0]
7101eebc24  str x8,[x24, #0x6d0]
7101eebc28  cbz x20,0x7101eebc4c
7101eebc2c  ldr x0,[x20, #0x18]
7101eebc30  adrp x8,0x710523d000
7101eebc34  add x8,x8,#0x9a8
7101eebc38  stp x8,xzr,[x20, #0x10]
7101eebc3c  cbz x0,0x7101eebc44
7101eebc40  bl 0x710392eb40
7101eebc44  mov x0,x20
7101eebc48  bl 0x710392eb40
7101eebc4c  ldur x20,[x29, #-0xc8]
7101eebc50  stp x23,xzr,[x29, #-0xd0]
7101eebc54  cbz x20,0x7101eebc78
7101eebc58  ldr x0,[x20, #0x18]
7101eebc5c  adrp x8,0x710523d000
7101eebc60  add x8,x8,#0x9a8
7101eebc64  stp x8,xzr,[x20, #0x10]
7101eebc68  cbz x0,0x7101eebc70
7101eebc6c  bl 0x710392eb40
7101eebc70  mov x0,x20
7101eebc74  bl 0x710392eb40
7101eebc78  mov x0,x19
7101eebc7c  bl 0x7101eedbe0
7101eebc80  mov w21,#0x9
7101eebc84  adrp x1,0x7104433000
7101eebc88  add x1,x1,#0x886
7101eebc8c  sub x8,x29,#0xd0
7101eebc90  mov x0,x27
7101eebc94  mov w2,w21
7101eebc98  add x19,x24,#0x780
7101eebc9c  sub x20,x29,#0xd0
7101eebca0  bl 0x7103776640
7101eebca4  cmp x19,x20
7101eebca8  b.eq 0x7101eebce0
7101eebcac  ldur x8,[x29, #-0xc8]
7101eebcb0  stur xzr,[x29, #-0xc8]
7101eebcb4  ldr x20,[x24, #0x788]
7101eebcb8  str x8,[x24, #0x788]
7101eebcbc  cbz x20,0x7101eebce0
7101eebcc0  ldr x0,[x20, #0x18]
7101eebcc4  adrp x8,0x710523d000
7101eebcc8  add x8,x8,#0x9a8
7101eebccc  stp x8,xzr,[x20, #0x10]
7101eebcd0  cbz x0,0x7101eebcd8
7101eebcd4  bl 0x710392eb40
7101eebcd8  mov x0,x20
7101eebcdc  bl 0x710392eb40
7101eebce0  ldur x20,[x29, #-0xc8]
7101eebce4  stp x23,xzr,[x29, #-0xd0]
7101eebce8  cbz x20,0x7101eebd0c
7101eebcec  ldr x0,[x20, #0x18]
7101eebcf0  adrp x8,0x710523d000
7101eebcf4  add x8,x8,#0x9a8
7101eebcf8  stp x8,xzr,[x20, #0x10]
7101eebcfc  cbz x0,0x7101eebd04
7101eebd00  bl 0x710392eb40
7101eebd04  mov x0,x20
7101eebd08  bl 0x710392eb40
7101eebd0c  mov x0,x19
7101eebd10  bl 0x7101eedbe0
7101eebd14  mov w20,#0xa
7101eebd18  adrp x1,0x7104433000
7101eebd1c  add x1,x1,#0x886
7101eebd20  sub x8,x29,#0xd0
7101eebd24  mov x0,x27
7101eebd28  mov w2,w20
7101eebd2c  add x19,x24,#0x838
7101eebd30  sub x22,x29,#0xd0
7101eebd34  bl 0x7103776640
7101eebd38  cmp x19,x22
7101eebd3c  b.eq 0x7101eebd74
7101eebd40  ldur x8,[x29, #-0xc8]
7101eebd44  stur xzr,[x29, #-0xc8]
7101eebd48  ldr x22,[x24, #0x840]
7101eebd4c  str x8,[x24, #0x840]
7101eebd50  cbz x22,0x7101eebd74
7101eebd54  ldr x0,[x22, #0x18]
7101eebd58  adrp x8,0x710523d000
7101eebd5c  add x8,x8,#0x9a8
7101eebd60  stp x8,xzr,[x22, #0x10]
7101eebd64  cbz x0,0x7101eebd6c
7101eebd68  bl 0x710392eb40
7101eebd6c  mov x0,x22
7101eebd70  bl 0x710392eb40
7101eebd74  ldur x22,[x29, #-0xc8]
7101eebd78  stp x23,xzr,[x29, #-0xd0]
7101eebd7c  cbz x22,0x7101eebda0
7101eebd80  ldr x0,[x22, #0x18]
7101eebd84  adrp x8,0x710523d000
7101eebd88  add x8,x8,#0x9a8
7101eebd8c  stp x8,xzr,[x22, #0x10]
7101eebd90  cbz x0,0x7101eebd98
7101eebd94  bl 0x710392eb40
7101eebd98  mov x0,x22
7101eebd9c  bl 0x710392eb40
7101eebda0  mov x0,x19
7101eebda4  bl 0x7101eedbe0
7101eebda8  adrp x1,0x7104433000
7101eebdac  add x1,x1,#0x886
7101eebdb0  mov w2,#0xb
7101eebdb4  sub x8,x29,#0xd0
7101eebdb8  mov x0,x27
7101eebdbc  add x19,x24,#0x8f0
7101eebdc0  sub x22,x29,#0xd0
7101eebdc4  bl 0x7103776640
7101eebdc8  cmp x19,x22
7101eebdcc  b.eq 0x7101eebe04
7101eebdd0  ldur x8,[x29, #-0xc8]
7101eebdd4  stur xzr,[x29, #-0xc8]
7101eebdd8  ldr x22,[x24, #0x8f8]
7101eebddc  str x8,[x24, #0x8f8]
7101eebde0  cbz x22,0x7101eebe04
7101eebde4  ldr x0,[x22, #0x18]
7101eebde8  adrp x8,0x710523d000
7101eebdec  add x8,x8,#0x9a8
7101eebdf0  stp x8,xzr,[x22, #0x10]
7101eebdf4  cbz x0,0x7101eebdfc
7101eebdf8  bl 0x710392eb40
7101eebdfc  mov x0,x22
7101eebe00  bl 0x710392eb40
7101eebe04  ldur x22,[x29, #-0xc8]
7101eebe08  stp x23,xzr,[x29, #-0xd0]
7101eebe0c  cbz x22,0x7101eebe30
7101eebe10  ldr x0,[x22, #0x18]
7101eebe14  adrp x8,0x710523d000
7101eebe18  add x8,x8,#0x9a8
7101eebe1c  stp x8,xzr,[x22, #0x10]
7101eebe20  cbz x0,0x7101eebe28
7101eebe24  bl 0x710392eb40
7101eebe28  mov x0,x22
7101eebe2c  bl 0x710392eb40
7101eebe30  mov x0,x19
7101eebe34  bl 0x7101eedbe0
7101eebe38  adrp x1,0x7104433000
7101eebe3c  add x1,x1,#0x886
7101eebe40  sub x8,x29,#0xd0
7101eebe44  orr w2,wzr,#0xc
7101eebe48  mov x0,x27
7101eebe4c  add x19,x24,#0x9a8
7101eebe50  sub x22,x29,#0xd0
7101eebe54  bl 0x7103776640
7101eebe58  cmp x19,x22
7101eebe5c  b.eq 0x7101eebe94
7101eebe60  ldur x8,[x29, #-0xc8]
7101eebe64  stur xzr,[x29, #-0xc8]
7101eebe68  ldr x22,[x24, #0x9b0]
7101eebe6c  str x8,[x24, #0x9b0]
7101eebe70  cbz x22,0x7101eebe94
7101eebe74  ldr x0,[x22, #0x18]
7101eebe78  adrp x8,0x710523d000
7101eebe7c  add x8,x8,#0x9a8
7101eebe80  stp x8,xzr,[x22, #0x10]
7101eebe84  cbz x0,0x7101eebe8c
7101eebe88  bl 0x710392eb40
7101eebe8c  mov x0,x22
7101eebe90  bl 0x710392eb40
7101eebe94  ldur x22,[x29, #-0xc8]
7101eebe98  stp x23,xzr,[x29, #-0xd0]
7101eebe9c  cbz x22,0x7101eebec0
7101eebea0  ldr x0,[x22, #0x18]
7101eebea4  adrp x8,0x710523d000
7101eebea8  add x8,x8,#0x9a8
7101eebeac  stp x8,xzr,[x22, #0x10]
7101eebeb0  cbz x0,0x7101eebeb8
7101eebeb4  bl 0x710392eb40
7101eebeb8  mov x0,x22
7101eebebc  bl 0x710392eb40
7101eebec0  mov x0,x19
7101eebec4  bl 0x7101eedbe0
7101eebec8  adrp x1,0x710437c000
7101eebecc  add x1,x1,#0xd22
7101eebed0  sub x8,x29,#0xd0
7101eebed4  mov x0,x27
7101eebed8  mov w2,wzr
7101eebedc  add x19,x24,#0xa60
7101eebee0  sub x22,x29,#0xd0
7101eebee4  bl 0x7103776640
7101eebee8  cmp x19,x22
7101eebeec  b.eq 0x7101eebf24
7101eebef0  ldur x8,[x29, #-0xc8]
7101eebef4  stur xzr,[x29, #-0xc8]
7101eebef8  ldr x22,[x24, #0xa68]
7101eebefc  str x8,[x24, #0xa68]
7101eebf00  cbz x22,0x7101eebf24
7101eebf04  ldr x0,[x22, #0x18]
7101eebf08  adrp x8,0x710523d000
7101eebf0c  add x8,x8,#0x9a8
7101eebf10  stp x8,xzr,[x22, #0x10]
7101eebf14  cbz x0,0x7101eebf1c
7101eebf18  bl 0x710392eb40
7101eebf1c  mov x0,x22
7101eebf20  bl 0x710392eb40
7101eebf24  ldur x22,[x29, #-0xc8]
7101eebf28  stp x23,xzr,[x29, #-0xd0]
7101eebf2c  cbz x22,0x7101eebf50
7101eebf30  ldr x0,[x22, #0x18]
7101eebf34  adrp x8,0x710523d000
7101eebf38  add x8,x8,#0x9a8
7101eebf3c  stp x8,xzr,[x22, #0x10]
7101eebf40  cbz x0,0x7101eebf48
7101eebf44  bl 0x710392eb40
7101eebf48  mov x0,x22
7101eebf4c  bl 0x710392eb40
7101eebf50  mov x0,x19
7101eebf54  bl 0x7101eedbe0
7101eebf58  adrp x1,0x710437c000
7101eebf5c  add x1,x1,#0xd22
7101eebf60  sub x8,x29,#0xd0
7101eebf64  mov w2,#0x1
7101eebf68  mov x0,x27
7101eebf6c  add x19,x24,#0xb18
7101eebf70  sub x22,x29,#0xd0
7101eebf74  bl 0x7103776640
7101eebf78  cmp x19,x22
7101eebf7c  b.eq 0x7101eebfb4
7101eebf80  ldur x8,[x29, #-0xc8]
7101eebf84  stur xzr,[x29, #-0xc8]
7101eebf88  ldr x22,[x24, #0xb20]
7101eebf8c  str x8,[x24, #0xb20]
7101eebf90  cbz x22,0x7101eebfb4
7101eebf94  ldr x0,[x22, #0x18]
7101eebf98  adrp x8,0x710523d000
7101eebf9c  add x8,x8,#0x9a8
7101eebfa0  stp x8,xzr,[x22, #0x10]
7101eebfa4  cbz x0,0x7101eebfac
7101eebfa8  bl 0x710392eb40
7101eebfac  mov x0,x22
7101eebfb0  bl 0x710392eb40
7101eebfb4  ldur x22,[x29, #-0xc8]
7101eebfb8  stp x23,xzr,[x29, #-0xd0]
7101eebfbc  cbz x22,0x7101eebfe0
7101eebfc0  ldr x0,[x22, #0x18]
7101eebfc4  adrp x8,0x710523d000
7101eebfc8  add x8,x8,#0x9a8
7101eebfcc  stp x8,xzr,[x22, #0x10]
7101eebfd0  cbz x0,0x7101eebfd8
7101eebfd4  bl 0x710392eb40
7101eebfd8  mov x0,x22
7101eebfdc  bl 0x710392eb40
7101eebfe0  mov x0,x19
7101eebfe4  bl 0x7101eedbe0
7101eebfe8  adrp x1,0x710437c000
7101eebfec  add x1,x1,#0xd22
7101eebff0  sub x8,x29,#0xd0
7101eebff4  mov w2,#0x2
7101eebff8  mov x0,x27
7101eebffc  add x19,x24,#0xbd0
7101eec000  sub x22,x29,#0xd0
7101eec004  bl 0x7103776640
7101eec008  cmp x19,x22
7101eec00c  b.eq 0x7101eec044
7101eec010  ldur x8,[x29, #-0xc8]
7101eec014  stur xzr,[x29, #-0xc8]
7101eec018  ldr x22,[x24, #0xbd8]
7101eec01c  str x8,[x24, #0xbd8]
7101eec020  cbz x22,0x7101eec044
7101eec024  ldr x0,[x22, #0x18]
7101eec028  adrp x8,0x710523d000
7101eec02c  add x8,x8,#0x9a8
7101eec030  stp x8,xzr,[x22, #0x10]
7101eec034  cbz x0,0x7101eec03c
7101eec038  bl 0x710392eb40
7101eec03c  mov x0,x22
7101eec040  bl 0x710392eb40
7101eec044  ldur x22,[x29, #-0xc8]
7101eec048  stp x23,xzr,[x29, #-0xd0]
7101eec04c  cbz x22,0x7101eec070
7101eec050  ldr x0,[x22, #0x18]
7101eec054  adrp x8,0x710523d000
7101eec058  add x8,x8,#0x9a8
7101eec05c  stp x8,xzr,[x22, #0x10]
7101eec060  cbz x0,0x7101eec068
7101eec064  bl 0x710392eb40
7101eec068  mov x0,x22
7101eec06c  bl 0x710392eb40
7101eec070  mov x0,x19
7101eec074  bl 0x7101eedbe0
7101eec078  adrp x1,0x710437c000
7101eec07c  add x1,x1,#0xd22
7101eec080  sub x8,x29,#0xd0
7101eec084  orr w2,wzr,#0x3
7101eec088  mov x0,x27
7101eec08c  add x19,x24,#0xc88
7101eec090  sub x22,x29,#0xd0
7101eec094  bl 0x7103776640
7101eec098  cmp x19,x22
7101eec09c  b.eq 0x7101eec0d4
7101eec0a0  ldur x8,[x29, #-0xc8]
7101eec0a4  stur xzr,[x29, #-0xc8]
7101eec0a8  ldr x22,[x24, #0xc90]
7101eec0ac  str x8,[x24, #0xc90]
7101eec0b0  cbz x22,0x7101eec0d4
7101eec0b4  ldr x0,[x22, #0x18]
7101eec0b8  adrp x8,0x710523d000
7101eec0bc  add x8,x8,#0x9a8
7101eec0c0  stp x8,xzr,[x22, #0x10]
7101eec0c4  cbz x0,0x7101eec0cc
7101eec0c8  bl 0x710392eb40
7101eec0cc  mov x0,x22
7101eec0d0  bl 0x710392eb40
7101eec0d4  ldur x22,[x29, #-0xc8]
7101eec0d8  stp x23,xzr,[x29, #-0xd0]
7101eec0dc  cbz x22,0x7101eec100
7101eec0e0  ldr x0,[x22, #0x18]
7101eec0e4  adrp x8,0x710523d000
7101eec0e8  add x8,x8,#0x9a8
7101eec0ec  stp x8,xzr,[x22, #0x10]
7101eec0f0  cbz x0,0x7101eec0f8
7101eec0f4  bl 0x710392eb40
7101eec0f8  mov x0,x22
7101eec0fc  bl 0x710392eb40
7101eec100  mov x0,x19
7101eec104  bl 0x7101eedbe0
7101eec108  adrp x1,0x710437c000
7101eec10c  add x1,x1,#0xd22
7101eec110  sub x8,x29,#0xd0
7101eec114  mov w2,#0x4
7101eec118  mov x0,x27
7101eec11c  add x19,x24,#0xd40
7101eec120  sub x22,x29,#0xd0
7101eec124  bl 0x7103776640
7101eec128  cmp x19,x22
7101eec12c  b.eq 0x7101eec164
7101eec130  ldur x8,[x29, #-0xc8]
7101eec134  stur xzr,[x29, #-0xc8]
7101eec138  ldr x22,[x24, #0xd48]
7101eec13c  str x8,[x24, #0xd48]
7101eec140  cbz x22,0x7101eec164
7101eec144  ldr x0,[x22, #0x18]
7101eec148  adrp x8,0x710523d000
7101eec14c  add x8,x8,#0x9a8
7101eec150  stp x8,xzr,[x22, #0x10]
7101eec154  cbz x0,0x7101eec15c
7101eec158  bl 0x710392eb40
7101eec15c  mov x0,x22
7101eec160  bl 0x710392eb40
7101eec164  ldur x22,[x29, #-0xc8]
7101eec168  stp x23,xzr,[x29, #-0xd0]
7101eec16c  cbz x22,0x7101eec190
7101eec170  ldr x0,[x22, #0x18]
7101eec174  adrp x8,0x710523d000
7101eec178  add x8,x8,#0x9a8
7101eec17c  stp x8,xzr,[x22, #0x10]
7101eec180  cbz x0,0x7101eec188
7101eec184  bl 0x710392eb40
7101eec188  mov x0,x22
7101eec18c  bl 0x710392eb40
7101eec190  mov x0,x19
7101eec194  bl 0x7101eedbe0
7101eec198  adrp x1,0x710437c000
7101eec19c  add x1,x1,#0xd22
7101eec1a0  mov w2,#0x5
7101eec1a4  sub x8,x29,#0xd0
7101eec1a8  mov x0,x27
7101eec1ac  add x19,x24,#0xdf8
7101eec1b0  sub x22,x29,#0xd0
7101eec1b4  bl 0x7103776640
7101eec1b8  cmp x19,x22
7101eec1bc  b.eq 0x7101eec1f4
7101eec1c0  ldur x8,[x29, #-0xc8]
7101eec1c4  stur xzr,[x29, #-0xc8]
7101eec1c8  ldr x22,[x24, #0xe00]
7101eec1cc  str x8,[x24, #0xe00]
7101eec1d0  cbz x22,0x7101eec1f4
7101eec1d4  ldr x0,[x22, #0x18]
7101eec1d8  adrp x8,0x710523d000
7101eec1dc  add x8,x8,#0x9a8
7101eec1e0  stp x8,xzr,[x22, #0x10]
7101eec1e4  cbz x0,0x7101eec1ec
7101eec1e8  bl 0x710392eb40
7101eec1ec  mov x0,x22
7101eec1f0  bl 0x710392eb40
7101eec1f4  ldur x22,[x29, #-0xc8]
7101eec1f8  stp x23,xzr,[x29, #-0xd0]
7101eec1fc  cbz x22,0x7101eec220
7101eec200  ldr x0,[x22, #0x18]
7101eec204  adrp x8,0x710523d000
7101eec208  add x8,x8,#0x9a8
7101eec20c  stp x8,xzr,[x22, #0x10]
7101eec210  cbz x0,0x7101eec218
7101eec214  bl 0x710392eb40
7101eec218  mov x0,x22
7101eec21c  bl 0x710392eb40
7101eec220  mov x0,x19
7101eec224  bl 0x7101eedbe0
7101eec228  adrp x1,0x710437c000
7101eec22c  add x1,x1,#0xd22
7101eec230  sub x8,x29,#0xd0
7101eec234  orr w2,wzr,#0x6
7101eec238  mov x0,x27
7101eec23c  add x19,x24,#0xeb0
7101eec240  sub x22,x29,#0xd0
7101eec244  bl 0x7103776640
7101eec248  cmp x19,x22
7101eec24c  b.eq 0x7101eec284
7101eec250  ldur x8,[x29, #-0xc8]
7101eec254  stur xzr,[x29, #-0xc8]
7101eec258  ldr x22,[x24, #0xeb8]
7101eec25c  str x8,[x24, #0xeb8]
7101eec260  cbz x22,0x7101eec284
7101eec264  ldr x0,[x22, #0x18]
7101eec268  adrp x8,0x710523d000
7101eec26c  add x8,x8,#0x9a8
7101eec270  stp x8,xzr,[x22, #0x10]
7101eec274  cbz x0,0x7101eec27c
7101eec278  bl 0x710392eb40
7101eec27c  mov x0,x22
7101eec280  bl 0x710392eb40
7101eec284  ldur x22,[x29, #-0xc8]
7101eec288  stp x23,xzr,[x29, #-0xd0]
7101eec28c  cbz x22,0x7101eec2b0
7101eec290  ldr x0,[x22, #0x18]
7101eec294  adrp x8,0x710523d000
7101eec298  add x8,x8,#0x9a8
7101eec29c  stp x8,xzr,[x22, #0x10]
7101eec2a0  cbz x0,0x7101eec2a8
7101eec2a4  bl 0x710392eb40
7101eec2a8  mov x0,x22
7101eec2ac  bl 0x710392eb40
7101eec2b0  mov x0,x19
7101eec2b4  bl 0x7101eedbe0
7101eec2b8  adrp x8,0x710532f000
7101eec2bc  ldr x19,[x8, #0x8d0]
7101eec2c0  adrp x8,0x710532f000
7101eec2c4  ldr x8,[x8, #0x730]
7101eec2c8  ldr x8,[x8, #0x8]
7101eec2cc  ldr x0,[x8, #0x278]
7101eec2d0  mov x1,#0x8df
7101eec2d4  movk x1,#0x40b8, LSL #16
7101eec2d8  movk x1,#0x19, LSL #32
7101eec2dc  bl 0x71032575c0
7101eec2e0  mov x1,x0
7101eec2e4  mov w2,#0x1
7101eec2e8  mov x0,x19
7101eec2ec  bl 0x71033145d0
7101eec2f0  ldr s0,[x24, #0xfcc]
7101eec2f4  ldr x0,[x19, #0x8]
7101eec2f8  fmov s1,0x3f800000
7101eec2fc  ldrb w8,[x0, #0x191]
7101eec300  fcmp s0,s1
7101eec304  b.le 0x7101eec394
7101eec308  cbnz w8,0x7101eec420
7101eec30c  mov x19,#0xa9b0
7101eec310  movk x19,#0x9aeb, LSL #16
7101eec314  movk x19,#0x14, LSL #32
7101eec318  mov w2,#0x4
7101eec31c  mov x1,x19
7101eec320  bl 0x7103313f20
7101eec324  tbz w0,#0x0,0x7101eec420
7101eec328  add x0,sp,#0xf8
7101eec32c  mov x1,x19
7101eec330  add x22,sp,#0xf8
7101eec334  bl 0x71024076d0
7101eec338  ldr x9,[sp, #0x108]
7101eec33c  add x8,x22,#0x10
7101eec340  adrp x10,0x7104f73000
7101eec344  add x10,x10,#0xd50
7101eec348  str x10,[sp, #0x100]
7101eec34c  cbz x9,0x7101eec48c
7101eec350  adrp x9,0x7106dd5000
7101eec354  ldrb w9,[x9, #0x3a8]
7101eec358  cmp w9,#0x1
7101eec35c  b.ne 0x7101eec908
7101eec360  adrp x10,0x7106dd5000
7101eec364  ldr w9,[sp, #0x110]
7101eec368  ldr w10,[x10, #0x3ac]
7101eec36c  cmp w9,w10
7101eec370  b.ne 0x7101eec908
7101eec374  ldr x9,[sp, #0x108]
7101eec378  ldr wzr,[x9, #0x38]!
7101eec37c  ldaxr w10,[x9]
7101eec380  sub w10,w10,#0x1
7101eec384  add x22,sp,#0xf8
7101eec388  stlxr w11,w10,[x9]
7101eec38c  cbnz w11,0x7101eec37c
7101eec390  b 0x7101eec48c
7101eec394  cbnz w8,0x7101eec458
7101eec398  mov x19,#0x309b
7101eec39c  movk x19,#0x1092, LSL #16
7101eec3a0  movk x19,#0xf, LSL #32
7101eec3a4  mov w2,#0x4
7101eec3a8  mov x1,x19
7101eec3ac  bl 0x7103313f20
7101eec3b0  tbz w0,#0x0,0x7101eec458
7101eec3b4  add x0,sp,#0xb8
7101eec3b8  mov x1,x19
7101eec3bc  add x22,sp,#0xb8
7101eec3c0  bl 0x71024076d0
7101eec3c4  ldr x9,[sp, #0xc8]
7101eec3c8  add x8,x22,#0x10
7101eec3cc  adrp x10,0x7104f73000
7101eec3d0  add x10,x10,#0xd50
7101eec3d4  str x10,[sp, #0xc0]
7101eec3d8  cbz x9,0x7101eec48c
7101eec3dc  adrp x9,0x7106dd5000
7101eec3e0  ldrb w9,[x9, #0x3a8]
7101eec3e4  cmp w9,#0x1
7101eec3e8  b.ne 0x7101eec910
7101eec3ec  adrp x10,0x7106dd5000
7101eec3f0  ldr w9,[sp, #0xd0]
7101eec3f4  ldr w10,[x10, #0x3ac]
7101eec3f8  cmp w9,w10
7101eec3fc  b.ne 0x7101eec910
7101eec400  ldr x9,[sp, #0xc8]
7101eec404  ldr wzr,[x9, #0x38]!
7101eec408  ldaxr w10,[x9]
7101eec40c  sub w10,w10,#0x1
7101eec410  add x22,sp,#0xb8
7101eec414  stlxr w11,w10,[x9]
7101eec418  cbnz w11,0x7101eec408
7101eec41c  b 0x7101eec48c
7101eec420  mov x9,#0x650000000000
7101eec424  movk x9,#0x87, LSL #48
7101eec428  add x22,sp,#0xf8
7101eec42c  stp xzr,x9,[sp, #0x108]
7101eec430  mov x9,#-0x1
7101eec434  stp x9,xzr,[sp, #0x120]
7101eec438  adrp x9,0x7104f73000
7101eec43c  add x9,x9,#0xd50
7101eec440  add x8,x22,#0x10
7101eec444  strb wzr,[sp, #0x118]
7101eec448  str wzr,[sp, #0xf8]
7101eec44c  str xzr,[sp, #0x130]
7101eec450  str x9,[sp, #0x100]
7101eec454  b 0x7101eec48c
7101eec458  mov x9,#0x650000000000
7101eec45c  movk x9,#0x87, LSL #48
7101eec460  add x22,sp,#0xb8
7101eec464  stp xzr,x9,[sp, #0xc8]
7101eec468  mov x9,#-0x1
7101eec46c  stp x9,xzr,[sp, #0xe0]
7101eec470  adrp x9,0x7104f73000
7101eec474  add x9,x9,#0xd50
7101eec478  add x8,x22,#0x10
7101eec47c  strb wzr,[sp, #0xd8]
7101eec480  str wzr,[sp, #0xb8]
7101eec484  str xzr,[sp, #0xf0]
7101eec488  str x9,[sp, #0xc0]
7101eec48c  str xzr,[x8]
7101eec490  strb wzr,[x22, #0x20]
7101eec494  ldrb w8,[x24, #0xfbc]
7101eec498  cbz w8,0x7101eec858
7101eec49c  ldr x1,[x24]
7101eec4a0  add x0,x24,#0xf70
7101eec4a4  adrp x2,0x7104545000
7101eec4a8  add x2,x2,#0xdb0
7101eec4ac  mov w3,#0x1
7101eec4b0  bl 0x71032cbf30
7101eec4b4  ldr x8,[x24, #0xf70]
7101eec4b8  ldr x0,[x8]
7101eec4bc  mov w8,#0x3000
7101eec4c0  movk w8,#0x2, LSL #16
7101eec4c4  add w2,w8,#0x1
7101eec4c8  mov w1,#0x1
7101eec4cc  bl 0x7103775dc0
7101eec4d0  ldr x8,[x24, #0xf70]
7101eec4d4  ldr x19,[x8]
7101eec4d8  ldrb w8,[x24, #0xfbe]
7101eec4dc  add x22,x19,#0x8
7101eec4e0  cmp w8,#0x1
7101eec4e4  b.eq 0x7101eec500
7101eec4e8  cmp w8,#0x2
7101eec4ec  b.ne 0x7101eec510
7101eec4f0  ldr x0,[x19, #0x10]
7101eec4f4  adrp x1,0x710439d000
7101eec4f8  add x1,x1,#0xc33
7101eec4fc  b 0x7101eec51c
7101eec500  ldr x0,[x19, #0x10]
7101eec504  adrp x1,0x71043e0000
7101eec508  add x1,x1,#0x969
7101eec50c  b 0x7101eec51c
7101eec510  ldr x0,[x19, #0x10]
7101eec514  adrp x1,0x71042c5000
7101eec518  add x1,x1,#0x5fd
7101eec51c  fmov s0,0x3f800000
7101eec520  bl 0x7103778300
7101eec524  mov x8,#0x500000000
7101eec528  sub x9,x29,#0xd0
7101eec52c  mov w10,#0x7469
7101eec530  movk w10,#0x6d65, LSL #16
7101eec534  stur x8,[x29, #-0xd0]
7101eec538  add x1,x9,#0x8
7101eec53c  add x8,x9,#0x9
7101eec540  mov w9,#0x5f
7101eec544  stur w10,[x29, #-0xc8]
7101eec548  sturh w9,[x29, #-0xc4]
7101eec54c  mov w9,#0x69
7101eec550  mov w23,#0x89
7101eec554  mov w10,w25
7101eec558  mul w10,w10,w23
7101eec55c  and w9,w9,#0xff
7101eec560  eor w10,w10,w9
7101eec564  ldrb w9,[x8], #0x1
7101eec568  cbnz w9,0x7101eec558
7101eec56c  stur w10,[x29, #-0xd0]
7101eec570  ldrb w9,[x24, #0xfc4]
7101eec574  mov w8,#0x6f
7101eec578  orr w10,wzr,#0x7
7101eec57c  sturb w8,[x29, #-0xc3]
7101eec580  stur w10,[x29, #-0xcc]
7101eec584  cbz w9,0x7101eec5c8
7101eec588  mov w9,#0x5f6e
7101eec58c  mov w10,#0x8
7101eec590  sub x11,x29,#0xd0
7101eec594  sturh w9,[x29, #-0xc2]
7101eec598  stur w10,[x29, #-0xcc]
7101eec59c  add x10,x11,#0x9
7101eec5a0  mov w11,#0x69
7101eec5a4  mov w9,w25
7101eec5a8  sturb wzr,[x29, #-0xc0]
7101eec5ac  mul w9,w9,w23
7101eec5b0  and w11,w11,#0xff
7101eec5b4  eor w9,w9,w11
7101eec5b8  ldrb w11,[x10], #0x1
7101eec5bc  cbnz w11,0x7101eec5ac
7101eec5c0  mov w21,#0x8
7101eec5c4  b 0x7101eec5fc
7101eec5c8  mov w9,#0x6666
7101eec5cc  movk w9,#0x5f, LSL #16
7101eec5d0  sub x10,x29,#0xd0
7101eec5d4  stur w9,[x26, #0x76]
7101eec5d8  add x10,x10,#0x9
7101eec5dc  mov w11,#0x69
7101eec5e0  mov w9,w25
7101eec5e4  stur w21,[x29, #-0xcc]
7101eec5e8  mul w9,w9,w23
7101eec5ec  and w11,w11,#0xff
7101eec5f0  eor w9,w9,w11
7101eec5f4  ldrb w11,[x10], #0x1
7101eec5f8  cbnz w11,0x7101eec5e8
7101eec5fc  ldrb w11,[x24, #0xfc5]
7101eec600  add w10,w21,#0x1
7101eec604  stp w9,w10,[x29, #-0xd0]
7101eec608  sub x9,x29,#0xd0
7101eec60c  add x9,x9,#0x8
7101eec610  add x10,x9,x10
7101eec614  strb w8,[x9, w21, UXTW ]
7101eec618  orr w8,w21,#0x2
7101eec61c  stur w8,[x29, #-0xcc]
7101eec620  cbz w11,0x7101eec660
7101eec624  mov w11,#0x6e
7101eec628  strb w11,[x10]
7101eec62c  strb wzr,[x9, w8, UXTW ]
7101eec630  ldurb w9,[x29, #-0xc8]
7101eec634  mov w8,w25
7101eec638  cbz w9,0x7101eec6a4
7101eec63c  sub x8,x29,#0xd0
7101eec640  add x10,x8,#0x9
7101eec644  mov w8,w25
7101eec648  mul w8,w8,w23
7101eec64c  and w9,w9,#0xff
7101eec650  eor w8,w8,w9
7101eec654  ldrb w9,[x10], #0x1
7101eec658  cbnz w9,0x7101eec648
7101eec65c  b 0x7101eec6a4
7101eec660  mov w11,#0x66
7101eec664  strb w11,[x10]
7101eec668  add w10,w8,#0x1
7101eec66c  stur w10,[x29, #-0xcc]
7101eec670  strb w11,[x9, w8, UXTW ]
7101eec674  strb wzr,[x9, w10, UXTW ]
7101eec678  ldurb w9,[x29, #-0xc8]
7101eec67c  mov w8,w25
7101eec680  cbz w9,0x7101eec6a4
7101eec684  sub x8,x29,#0xd0
7101eec688  add x10,x8,#0x9
7101eec68c  mov w8,w25
7101eec690  mul w8,w8,w23
7101eec694  and w9,w9,#0xff
7101eec698  eor w8,w8,w9
7101eec69c  ldrb w9,[x10], #0x1
7101eec6a0  cbnz w9,0x7101eec690
7101eec6a4  stur w8,[x29, #-0xd0]
7101eec6a8  ldr x0,[x19, #0x10]
7101eec6ac  fmov s0,0x3f800000
7101eec6b0  bl 0x7103778300
7101eec6b4  mov x10,#0x6863
7101eec6b8  movk x10,#0x7261, LSL #16
7101eec6bc  orr x8,xzr,#0x700000000
7101eec6c0  add x9,sp,#0x258
7101eec6c4  movk x10,#0x6567, LSL #32
7101eec6c8  movk x10,#0x5f, LSL #48
7101eec6cc  str x8,[sp, #0x258]
7101eec6d0  add x1,x9,#0x8
7101eec6d4  str x10,[sp, #0x260]
7101eec6d8  add x8,x9,#0x9
7101eec6dc  mov w9,#0x63
7101eec6e0  mov w10,w25
7101eec6e4  mul w10,w10,w23
7101eec6e8  and w9,w9,#0xff
7101eec6ec  eor w10,w10,w9
7101eec6f0  ldrb w9,[x8], #0x1
7101eec6f4  cbnz w9,0x7101eec6e4
7101eec6f8  str w10,[sp, #0x258]
7101eec6fc  ldrb w8,[x24, #0xfc6]
7101eec700  cbz w8,0x7101eec758
7101eec704  ldrb w8,[x24, #0xfc4]
7101eec708  cbnz w8,0x7101eec714
7101eec70c  ldrb w8,[x24, #0xfc5]
7101eec710  cbz w8,0x7101eec8c0
7101eec714  mov w8,#0x6e6f
7101eec718  movk w8,#0x6f5f, LSL #16
7101eec71c  orr w9,wzr,#0xc
7101eec720  add x11,sp,#0x258
7101eec724  add x12,sp,#0x258
7101eec728  stur w8,[x12, #0xf]
7101eec72c  mov w10,#0x6e
7101eec730  str w9,[sp, #0x25c]
7101eec734  add x8,x11,#0x9
7101eec738  mov w9,#0x63
7101eec73c  sturh w10,[x12, #0x13]
7101eec740  mul w10,w25,w23
7101eec744  and w9,w9,#0xff
7101eec748  eor w25,w10,w9
7101eec74c  ldrb w9,[x8], #0x1
7101eec750  cbnz w9,0x7101eec740
7101eec754  b 0x7101eec788
7101eec758  mov w8,#0x666f
7101eec75c  movk w8,#0x66, LSL #16
7101eec760  stur w8,[x26, #0xf]
7101eec764  add x8,sp,#0x258
7101eec768  add x8,x8,#0x9
7101eec76c  mov w9,#0x63
7101eec770  str w20,[sp, #0x25c]
7101eec774  mul w10,w25,w23
7101eec778  and w9,w9,#0xff
7101eec77c  eor w25,w10,w9
7101eec780  ldrb w9,[x8], #0x1
7101eec784  cbnz w9,0x7101eec774
7101eec788  str w25,[sp, #0x258]
7101eec78c  ldr x0,[x19, #0x10]
7101eec790  fmov s0,0x3f800000
7101eec794  bl 0x7103778300
7101eec798  adrp x1,0x71043ae000
7101eec79c  add x1,x1,#0x1be
7101eec7a0  add x8,sp,#0x1b0
7101eec7a4  mov x0,x22
7101eec7a8  bl 0x7103776910
7101eec7ac  ldrh w1,[x24, #0xfc0]
7101eec7b0  add x0,sp,#0x1b0
7101eec7b4  bl 0x7101c09200
7101eec7b8  adrp x1,0x710439d000
7101eec7bc  add x1,x1,#0xc3d
7101eec7c0  add x8,sp,#0x168
7101eec7c4  mov x0,x22
7101eec7c8  bl 0x7103776910
7101eec7cc  ldrb w2,[x24, #0xfc2]
7101eec7d0  add x0,sp,#0x168
7101eec7d4  mov w1,#0x1
7101eec7d8  bl 0x710377a310
7101eec7dc  adrp x1,0x710438d000
7101eec7e0  add x1,x1,#0x2fa
7101eec7e4  sub x8,x29,#0xe0
7101eec7e8  mov x0,x22
7101eec7ec  bl 0x7103776910
7101eec7f0  ldrb w8,[x24, #0xfc3]
7101eec7f4  cmp w8,#0xb
7101eec7f8  b.hi 0x7101eec810
7101eec7fc  adrp x9,0x7104ada000
7101eec800  add x9,x9,#0xa70
7101eec804  sxtb x8,w8
7101eec808  ldr w2,[x9, x8, LSL #0x2]
7101eec80c  b 0x7101eec814
7101eec810  mov w2,#0x96
7101eec814  sub x0,x29,#0xe0
7101eec818  mov w1,#0x1
7101eec81c  bl 0x710377a310
7101eec820  ldur x0,[x29, #-0xd8]
7101eec824  adrp x19,0x710523d000
7101eec828  add x19,x19,#0x9a8
7101eec82c  stp x19,xzr,[x29, #-0xe0]
7101eec830  cbz x0,0x7101eec838
7101eec834  bl 0x710392eb40
7101eec838  ldr x0,[sp, #0x170]
7101eec83c  stp x19,xzr,[sp, #0x168]
7101eec840  cbz x0,0x7101eec848
7101eec844  bl 0x710392eb40
7101eec848  ldr x0,[sp, #0x1b8]
7101eec84c  stp x19,xzr,[sp, #0x1b0]
7101eec850  cbz x0,0x7101eec858
7101eec854  bl 0x710392eb40
7101eec858  ldr x8,[sp, #0x8]
7101eec85c  ldr s0,[x24, #0xfcc]
7101eec860  adrp x1,0x71042a3000
7101eec864  add x1,x1,#0x79b
7101eec868  ldr x0,[x8, #0x10]
7101eec86c  bl 0x7103778300
7101eec870  ldrsw x8,[x24, #0xdc]
7101eec874  cmp w8,#0x13
7101eec878  b.cs 0x7101eec9e4
7101eec87c  add x8,x24,x8, LSL #0x2
7101eec880  orr w9,wzr,#0x3
7101eec884  str w9,[x8, #0x90]
7101eec888  mov w8,#0x1
7101eec88c  strb w8,[x24, #0xfd1]
7101eec890  add sp,sp,#0x320
7101eec894  ldp d9,d8,[sp, #0x10]
7101eec898  ldp x29,x30,[sp, #0x70]
7101eec89c  ldp x20,x19,[sp, #0x60]
7101eec8a0  ldp x22,x21,[sp, #0x50]
7101eec8a4  ldp x24,x23,[sp, #0x40]
7101eec8a8  ldp x26,x25,[sp, #0x30]
7101eec8ac  ldp x28,x27,[sp, #0x20]
7101eec8b0  ldr d10,[sp], #0x80
7101eec8b4  ret
7101eec8b8  add x19,x8,#0x28
7101eec8bc  b 0x7101ee9a60
7101eec8c0  mov w8,#0x6e6f
7101eec8c4  movk w8,#0x6f5f, LSL #16
7101eec8c8  add x11,sp,#0x258
7101eec8cc  mov w9,#0x6666
7101eec8d0  stur w8,[x11, #0xf]
7101eec8d4  add x8,sp,#0x258
7101eec8d8  mov w10,#0xd
7101eec8dc  sturh w9,[x11, #0x13]
7101eec8e0  add x8,x8,#0x9
7101eec8e4  mov w9,#0x63
7101eec8e8  str w10,[sp, #0x25c]
7101eec8ec  strb wzr,[sp, #0x26d]
7101eec8f0  mul w10,w25,w23
7101eec8f4  and w9,w9,#0xff
7101eec8f8  eor w25,w10,w9
7101eec8fc  ldrb w9,[x8], #0x1
7101eec900  cbnz w9,0x7101eec8f0
7101eec904  b 0x7101eec788
7101eec908  add x22,sp,#0xf8
7101eec90c  b 0x7101eec48c
7101eec910  add x22,sp,#0xb8
7101eec914  b 0x7101eec48c
7101eec918  adrp x0,0x710532f000
7101eec91c  add x0,x0,#0x4d8
7101eec920  bl 0x71039c06b0
7101eec924  cbz w0,0x7101ee9a0c
7101eec928  adrp x1,0x710532f000
7101eec92c  add x1,x1,#0x4a4
7101eec930  orr w8,wzr,#0xffffff
7101eec934  adrp x0,0x710353e000
7101eec938  add x0,x0,#0x700
7101eec93c  str w8,[x1]
7101eec940  adrp x2,0x7104f17000
7101eec944  add x2,x2,#0x0
7101eec948  bl 0x71000001c0
7101eec94c  adrp x0,0x710532f000
7101eec950  add x0,x0,#0x4d8
7101eec954  bl 0x71039c06c0
7101eec958  ldr x10,[x19, #0x28]!
7101eec95c  cbnz x10,0x7101ee9a14
7101eec960  b 0x7101ee9a58
7101eec964  adrp x0,0x7105314000
7101eec968  add x0,x0,#0x4d8
7101eec96c  bl 0x71039c06b0
7101eec970  cbz w0,0x7101ee9c4c
7101eec974  bl 0x7101764000
7101eec978  adrp x0,0x7101763000
7101eec97c  add x0,x0,#0xc40
7101eec980  adrp x1,0x71052c5000
7101eec984  add x1,x1,#0x180
7101eec988  adrp x2,0x7104f17000
7101eec98c  add x2,x2,#0x0
7101eec990  bl 0x71000001c0
7101eec994  adrp x0,0x7105314000
7101eec998  add x0,x0,#0x4d8
7101eec99c  bl 0x71039c06c0
7101eec9a0  b 0x7101ee9c4c
7101eec9a4  adrp x0,0x7105314000
7101eec9a8  add x0,x0,#0x4d8
7101eec9ac  bl 0x71039c06b0
7101eec9b0  cbz w0,0x7101ee9c58
7101eec9b4  bl 0x7101764000
7101eec9b8  adrp x0,0x7101763000
7101eec9bc  add x0,x0,#0xc40
7101eec9c0  adrp x1,0x71052c5000
7101eec9c4  add x1,x1,#0x180
7101eec9c8  adrp x2,0x7104f17000
7101eec9cc  add x2,x2,#0x0
7101eec9d0  bl 0x71000001c0
7101eec9d4  adrp x0,0x7105314000
7101eec9d8  add x0,x0,#0x4d8
7101eec9dc  bl 0x71039c06c0
7101eec9e0  b 0x7101ee9c58
7101eec9e4  bl 0x71039c2650
