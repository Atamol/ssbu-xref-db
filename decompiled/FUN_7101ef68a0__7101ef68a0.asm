// addr:      7101ef68a0
// offset:    0x1ef68a0
// name:      FUN_7101ef68a0
// mangled:   
// size:      1480

7101ef68a0  sub sp,sp,#0x120
7101ef68a4  str x28,[sp, #0xd0]
7101ef68a8  stp x24,x23,[sp, #0xe0]
7101ef68ac  stp x22,x21,[sp, #0xf0]
7101ef68b0  stp x20,x19,[sp, #0x100]
7101ef68b4  stp x29,x30,[sp, #0x110]
7101ef68b8  add x29,sp,#0x110
7101ef68bc  adrp x8,0x7105314000
7101ef68c0  add x8,x8,#0x4d8
7101ef68c4  ldarb w8,[x8]
7101ef68c8  subs w9,w1,w2
7101ef68cc  mov w19,w3
7101ef68d0  mov w22,w2
7101ef68d4  mov w23,w1
7101ef68d8  mov x20,x0
7101ef68dc  cneg w21,w9,mi
7101ef68e0  tbz w8,#0x0,0x7101ef6e28
7101ef68e4  adrp x8,0x710530d000
7101ef68e8  ldr w8,[x8, #0x560]
7101ef68ec  cmp w8,#0x0
7101ef68f0  cset w8,eq
7101ef68f4  add w9,w21,#0xa
7101ef68f8  csel w24,w9,w21,eq
7101ef68fc  lsl w2,w21,w8
7101ef6900  add x21,x20,#0x258
7101ef6904  adrp x1,0x71042c5000
7101ef6908  add x1,x1,#0x607
7101ef690c  mov x0,x21
7101ef6910  bl 0x7103778430
7101ef6914  adrp x1,0x71042d6000
7101ef6918  add x1,x1,#0xb28
7101ef691c  sub x8,x29,#0x50
7101ef6920  mov x0,x21
7101ef6924  mov w2,w24
7101ef6928  bl 0x7103776910
7101ef692c  adrp x1,0x71043e0000
7101ef6930  add x1,x1,#0x9b5
7101ef6934  sub x8,x29,#0x60
7101ef6938  mov x0,x21
7101ef693c  mov w2,w23
7101ef6940  bl 0x7103776910
7101ef6944  adrp x1,0x7104270000
7101ef6948  add x1,x1,#0x7e9
7101ef694c  sub x8,x29,#0x70
7101ef6950  mov x0,x21
7101ef6954  mov w2,w22
7101ef6958  bl 0x7103776910
7101ef695c  ldur x22,[x29, #-0x58]
7101ef6960  ldr x8,[x22]
7101ef6964  cbz x8,0x7101ef6980
7101ef6968  movi v0.2D,#0x0
7101ef696c  add x9,x8,#0x30
7101ef6970  add x8,x8,#0x34
7101ef6974  ld1 {v0.S}[0],[x9]
7101ef6978  ld1 {v0.S}[1],[x8]
7101ef697c  b 0x7101ef698c
7101ef6980  adrp x8,0x71052a8000
7101ef6984  ldr x8,[x8, #0xa80]
7101ef6988  ldr q0,[x8]
7101ef698c  ldur x8,[x29, #-0x68]
7101ef6990  ldr x8,[x8]
7101ef6994  cbz x8,0x7101ef69b0
7101ef6998  movi v1.2D,#0x0
7101ef699c  add x9,x8,#0x30
7101ef69a0  add x8,x8,#0x34
7101ef69a4  ld1 {v1.S}[0],[x9]
7101ef69a8  ld1 {v1.S}[1],[x8]
7101ef69ac  b 0x7101ef69bc
7101ef69b0  adrp x8,0x71052a8000
7101ef69b4  ldr x8,[x8, #0xa80]
7101ef69b8  ldr q1,[x8]
7101ef69bc  fsub v1.4S,v0.4S,v1.4S
7101ef69c0  dup s0,v1.S[0x1]
7101ef69c4  str q1,[sp]
7101ef69c8  bl 0x71039c2660
7101ef69cc  ldur x8,[x29, #-0x48]
7101ef69d0  ldr x9,[x8]
7101ef69d4  cbz x9,0x7101ef6a10
7101ef69d8  adrp x10,0x7104472000
7101ef69dc  ldr s1,[x10, #0xfbc]
7101ef69e0  adrp x10,0x7104471000
7101ef69e4  ldr s2,[x10, #0xd10]
7101ef69e8  adrp x10,0x7104473000
7101ef69ec  fmul s0,s0,s1
7101ef69f0  ldr s1,[x10, #0xb0]
7101ef69f4  ldrb w10,[x9, #0x58]
7101ef69f8  orr w10,w10,#0x10
7101ef69fc  fdiv s0,s0,s2
7101ef6a00  fadd s0,s0,s1
7101ef6a04  stur xzr,[x9, #0x3c]
7101ef6a08  strb w10,[x9, #0x58]
7101ef6a0c  str s0,[x9, #0x44]
7101ef6a10  ldr x9,[x22]
7101ef6a14  cbz x9,0x7101ef6da8
7101ef6a18  movi v0.2D,#0x0
7101ef6a1c  add x10,x9,#0x30
7101ef6a20  add x9,x9,#0x34
7101ef6a24  ld1 {v0.S}[0],[x10]
7101ef6a28  ld1 {v0.S}[1],[x9]
7101ef6a2c  ldr x9,[x8]
7101ef6a30  cbz x9,0x7101ef6dbc
7101ef6a34  ldr q2,[sp]
7101ef6a38  movi v1.4S,#0x3f, LSL #24
7101ef6a3c  ldrb w10,[x9, #0x58]
7101ef6a40  orr w10,w10,#0x10
7101ef6a44  fmul v1.4S,v2.4S,v1.4S
7101ef6a48  fsub v0.4S,v0.4S,v1.4S
7101ef6a4c  str d0,[x9, #0x30]
7101ef6a50  strb w10,[x9, #0x58]
7101ef6a54  ldr x0,[x8]
7101ef6a58  bl 0x710377aae0
7101ef6a5c  cbz x0,0x7101ef6a68
7101ef6a60  mov w8,#0x1
7101ef6a64  strb w8,[x0, #0x13a]
7101ef6a68  adrp x1,0x7104281000
7101ef6a6c  add x1,x1,#0x2fb
7101ef6a70  sub x8,x29,#0x80
7101ef6a74  mov x0,x21
7101ef6a78  bl 0x7103776910
7101ef6a7c  ldur x8,[x29, #-0x78]
7101ef6a80  ldr x0,[x8, #0x8]
7101ef6a84  cbz x0,0x7101ef6aa8
7101ef6a88  adrp x8,0x710593b000
7101ef6a8c  ldr x8,[x8, #0xc38]
7101ef6a90  cbz x8,0x7101ef6aa8
7101ef6a94  ldr x8,[x8, #0x8]
7101ef6a98  ldr x1,[x8, #0x88]
7101ef6a9c  cbz x1,0x7101ef6aa8
7101ef6aa0  mov w2,wzr
7101ef6aa4  bl 0x710379e9c0
7101ef6aa8  ldr x0,[x20, #0x2c8]
7101ef6aac  mov w23,#0x6500
7101ef6ab0  movk w23,#0x87, LSL #16
7101ef6ab4  add x21,x20,#0x2b8
7101ef6ab8  cbz x0,0x7101ef6b18
7101ef6abc  ldr x8,[x0]
7101ef6ac0  ldr x8,[x8, #0x20]
7101ef6ac4  blr x8
7101ef6ac8  tbnz w0,#0x0,0x7101ef6b18
7101ef6acc  adrp x8,0x710593b000
7101ef6ad0  ldr x8,[x8, #0x438]
7101ef6ad4  ldr x8,[x8]
7101ef6ad8  ldrb w8,[x8, #0x1]
7101ef6adc  cbz w8,0x7101ef6b18
7101ef6ae0  ldr w8,[x20, #0x2d4]
7101ef6ae4  cmp w8,w23
7101ef6ae8  b.ne 0x7101ef6b18
7101ef6aec  adrp x8,0x7106dd5000
7101ef6af0  ldrb w8,[x8, #0x3a8]
7101ef6af4  cmp w8,#0x1
7101ef6af8  b.ne 0x7101ef6b18
7101ef6afc  adrp x9,0x7106dd5000
7101ef6b00  ldr w8,[x20, #0x2d0]
7101ef6b04  ldr w9,[x9, #0x3ac]
7101ef6b08  cmp w8,w9
7101ef6b0c  b.ne 0x7101ef6b18
7101ef6b10  ldrb w8,[x20, #0x2d8]
7101ef6b14  cbz w8,0x7101ef6df0
7101ef6b18  adrp x24,0x710532f000
7101ef6b1c  ldr x8,[x24, #0x8d0]
7101ef6b20  ldr x0,[x8, #0x8]
7101ef6b24  ldrb w8,[x0, #0x191]
7101ef6b28  cbnz w8,0x7101ef6bc0
7101ef6b2c  mov x22,#0x66a6
7101ef6b30  movk x22,#0x88b9, LSL #16
7101ef6b34  movk x22,#0x1a, LSL #32
7101ef6b38  mov w2,#0x4
7101ef6b3c  mov x1,x22
7101ef6b40  bl 0x7103313f20
7101ef6b44  tbz w0,#0x0,0x7101ef6bc0
7101ef6b48  add x0,sp,#0x50
7101ef6b4c  mov x1,x22
7101ef6b50  bl 0x71024076d0
7101ef6b54  ldr w9,[sp, #0x50]
7101ef6b58  ldr x8,[sp, #0x60]
7101ef6b5c  str w9,[x21]
7101ef6b60  cbz x8,0x7101ef6be8
7101ef6b64  ldr w9,[x20, #0x2d4]
7101ef6b68  cmp w9,w23
7101ef6b6c  b.ne 0x7101ef6c38
7101ef6b70  adrp x9,0x7106dd5000
7101ef6b74  ldr w9,[x9, #0x3ac]
7101ef6b78  ldr w10,[x20, #0x2d0]
7101ef6b7c  cmp w10,w9
7101ef6b80  b.ne 0x7101ef6dcc
7101ef6b84  ldr x9,[x20, #0x2c8]
7101ef6b88  cbz x9,0x7101ef6bb0
7101ef6b8c  adrp x10,0x7106dd5000
7101ef6b90  ldrb w10,[x10, #0x3a8]
7101ef6b94  cmp w10,#0x1
7101ef6b98  b.ne 0x7101ef6bb0
7101ef6b9c  ldr wzr,[x9, #0x38]!
7101ef6ba0  ldaxr w10,[x9]
7101ef6ba4  sub w10,w10,#0x1
7101ef6ba8  stlxr w11,w10,[x9]
7101ef6bac  cbnz w11,0x7101ef6ba0
7101ef6bb0  str xzr,[x20, #0x2c8]
7101ef6bb4  add x9,x20,#0x2d8
7101ef6bb8  strb wzr,[x20, #0x2d8]
7101ef6bbc  b 0x7101ef6dd4
7101ef6bc0  adrp x8,0x7104f73000
7101ef6bc4  add x8,x8,#0xd30
7101ef6bc8  stp wzr,w23,[sp, #0x68]
7101ef6bcc  stp x8,xzr,[sp, #0x58]
7101ef6bd0  mov x8,#-0x1
7101ef6bd4  strb wzr,[sp, #0x70]
7101ef6bd8  str wzr,[sp, #0x50]
7101ef6bdc  str xzr,[sp, #0x88]
7101ef6be0  stp x8,xzr,[sp, #0x78]
7101ef6be4  str wzr,[x21]
7101ef6be8  ldr x8,[x20, #0x2c8]
7101ef6bec  cbz x8,0x7101ef6c28
7101ef6bf0  adrp x9,0x7106dd5000
7101ef6bf4  ldrb w9,[x9, #0x3a8]
7101ef6bf8  cmp w9,#0x1
7101ef6bfc  b.ne 0x7101ef6c28
7101ef6c00  adrp x10,0x7106dd5000
7101ef6c04  ldr w9,[x20, #0x2d0]
7101ef6c08  ldr w10,[x10, #0x3ac]
7101ef6c0c  cmp w9,w10
7101ef6c10  b.ne 0x7101ef6c28
7101ef6c14  ldr wzr,[x8, #0x38]!
7101ef6c18  ldaxr w9,[x8]
7101ef6c1c  sub w9,w9,#0x1
7101ef6c20  stlxr w10,w9,[x8]
7101ef6c24  cbnz w10,0x7101ef6c18
7101ef6c28  str xzr,[x20, #0x2c8]
7101ef6c2c  add x9,x20,#0x2d8
7101ef6c30  strb wzr,[x9]
7101ef6c34  ldr x8,[sp, #0x60]
7101ef6c38  ldp x9,x10,[sp, #0x78]
7101ef6c3c  ldr x11,[sp, #0x88]
7101ef6c40  str x11,[x20, #0x2f0]
7101ef6c44  str x10,[x20, #0x2e8]
7101ef6c48  str x9,[x20, #0x2e0]
7101ef6c4c  adrp x20,0x7104f73000
7101ef6c50  add x20,x20,#0xd50
7101ef6c54  str x20,[sp, #0x58]
7101ef6c58  cbz x8,0x7101ef6c94
7101ef6c5c  adrp x9,0x7106dd5000
7101ef6c60  ldrb w9,[x9, #0x3a8]
7101ef6c64  cmp w9,#0x1
7101ef6c68  b.ne 0x7101ef6c94
7101ef6c6c  adrp x10,0x7106dd5000
7101ef6c70  ldr w9,[sp, #0x68]
7101ef6c74  ldr w10,[x10, #0x3ac]
7101ef6c78  cmp w9,w10
7101ef6c7c  b.ne 0x7101ef6c94
7101ef6c80  ldr wzr,[x8, #0x38]!
7101ef6c84  ldaxr w9,[x8]
7101ef6c88  sub w9,w9,#0x1
7101ef6c8c  stlxr w10,w9,[x8]
7101ef6c90  cbnz w10,0x7101ef6c84
7101ef6c94  str xzr,[sp, #0x60]
7101ef6c98  tbnz w19,#0x0,0x7101ef6d44
7101ef6c9c  ldr x8,[x24, #0x8d0]
7101ef6ca0  ldr x0,[x8, #0x8]
7101ef6ca4  ldrb w8,[x0, #0x191]
7101ef6ca8  cbnz w8,0x7101ef6d20
7101ef6cac  mov x19,#0xac0b
7101ef6cb0  movk x19,#0x524a, LSL #16
7101ef6cb4  movk x19,#0x18, LSL #32
7101ef6cb8  mov w2,#0x4
7101ef6cbc  mov x1,x19
7101ef6cc0  bl 0x7103313f20
7101ef6cc4  tbz w0,#0x0,0x7101ef6d20
7101ef6cc8  add x0,sp,#0x10
7101ef6ccc  mov x1,x19
7101ef6cd0  bl 0x71024076d0
7101ef6cd4  ldr x8,[sp, #0x20]
7101ef6cd8  str x20,[sp, #0x18]
7101ef6cdc  cbz x8,0x7101ef6d3c
7101ef6ce0  adrp x8,0x7106dd5000
7101ef6ce4  ldrb w8,[x8, #0x3a8]
7101ef6ce8  cmp w8,#0x1
7101ef6cec  b.ne 0x7101ef6d3c
7101ef6cf0  adrp x9,0x7106dd5000
7101ef6cf4  ldr w8,[sp, #0x28]
7101ef6cf8  ldr w9,[x9, #0x3ac]
7101ef6cfc  cmp w8,w9
7101ef6d00  b.ne 0x7101ef6d3c
7101ef6d04  ldr x8,[sp, #0x20]
7101ef6d08  ldr wzr,[x8, #0x38]!
7101ef6d0c  ldaxr w9,[x8]
7101ef6d10  sub w9,w9,#0x1
7101ef6d14  stlxr w10,w9,[x8]
7101ef6d18  cbnz w10,0x7101ef6d0c
7101ef6d1c  b 0x7101ef6d3c
7101ef6d20  mov x8,#-0x1
7101ef6d24  stp x20,xzr,[sp, #0x18]
7101ef6d28  stp wzr,w23,[sp, #0x28]
7101ef6d2c  strb wzr,[sp, #0x30]
7101ef6d30  str wzr,[sp, #0x10]
7101ef6d34  str xzr,[sp, #0x48]
7101ef6d38  stp x8,xzr,[sp, #0x38]
7101ef6d3c  str xzr,[sp, #0x20]
7101ef6d40  strb wzr,[sp, #0x30]
7101ef6d44  ldur x0,[x29, #-0x78]
7101ef6d48  adrp x19,0x710523d000
7101ef6d4c  add x19,x19,#0x9a8
7101ef6d50  stp x19,xzr,[x29, #-0x80]
7101ef6d54  cbz x0,0x7101ef6d5c
7101ef6d58  bl 0x710392eb40
7101ef6d5c  ldur x0,[x29, #-0x68]
7101ef6d60  stp x19,xzr,[x29, #-0x70]
7101ef6d64  cbz x0,0x7101ef6d6c
7101ef6d68  bl 0x710392eb40
7101ef6d6c  ldur x0,[x29, #-0x58]
7101ef6d70  stp x19,xzr,[x29, #-0x60]
7101ef6d74  cbz x0,0x7101ef6d7c
7101ef6d78  bl 0x710392eb40
7101ef6d7c  ldur x0,[x29, #-0x48]
7101ef6d80  stp x19,xzr,[x29, #-0x50]
7101ef6d84  cbz x0,0x7101ef6d8c
7101ef6d88  bl 0x710392eb40
7101ef6d8c  ldp x29,x30,[sp, #0x110]
7101ef6d90  ldr x28,[sp, #0xd0]
7101ef6d94  ldp x20,x19,[sp, #0x100]
7101ef6d98  ldp x22,x21,[sp, #0xf0]
7101ef6d9c  ldp x24,x23,[sp, #0xe0]
7101ef6da0  add sp,sp,#0x120
7101ef6da4  ret
7101ef6da8  adrp x9,0x71052a8000
7101ef6dac  ldr x9,[x9, #0xa80]
7101ef6db0  ldr q0,[x9]
7101ef6db4  ldr x9,[x8]
7101ef6db8  cbnz x9,0x7101ef6a34
7101ef6dbc  mov x0,xzr
7101ef6dc0  bl 0x710377aae0
7101ef6dc4  cbnz x0,0x7101ef6a60
7101ef6dc8  b 0x7101ef6a68
7101ef6dcc  str w9,[x20, #0x2d0]
7101ef6dd0  add x9,x20,#0x2d8
7101ef6dd4  str x8,[x20, #0x2c8]
7101ef6dd8  add x8,x8,#0x38
7101ef6ddc  ldaxr w10,[x8]
7101ef6de0  add w10,w10,#0x1
7101ef6de4  stlxr w11,w10,[x8]
7101ef6de8  cbnz w11,0x7101ef6ddc
7101ef6dec  b 0x7101ef6c30
7101ef6df0  ldr x0,[x20, #0x2c8]
7101ef6df4  cbz x0,0x7101ef6b18
7101ef6df8  ldr x8,[x0]
7101ef6dfc  ldr x8,[x8, #0x20]
7101ef6e00  blr x8
7101ef6e04  tbnz w0,#0x0,0x7101ef6b18
7101ef6e08  ldr x0,[x20, #0x2c8]
7101ef6e0c  ldr x8,[x0]
7101ef6e10  ldr x8,[x8, #0x68]
7101ef6e14  blr x8
7101ef6e18  tbnz w0,#0x0,0x7101ef6b18
7101ef6e1c  mov x0,x21
7101ef6e20  bl 0x710373b7f0
7101ef6e24  b 0x7101ef6b18
7101ef6e28  adrp x0,0x7105314000
7101ef6e2c  add x0,x0,#0x4d8
7101ef6e30  bl 0x71039c06b0
7101ef6e34  cbz w0,0x7101ef68e4
7101ef6e38  bl 0x7101764000
7101ef6e3c  adrp x0,0x7101763000
7101ef6e40  add x0,x0,#0xc40
7101ef6e44  adrp x1,0x71052c5000
7101ef6e48  add x1,x1,#0x180
7101ef6e4c  adrp x2,0x7104f17000
7101ef6e50  add x2,x2,#0x0
7101ef6e54  bl 0x71000001c0
7101ef6e58  adrp x0,0x7105314000
7101ef6e5c  add x0,x0,#0x4d8
7101ef6e60  bl 0x71039c06c0
7101ef6e64  b 0x7101ef68e4
