// addr:      7101ac4ba0
// offset:    0x1ac4ba0
// name:      FUN_7101ac4ba0
// mangled:   
// size:      6728

7101ac4ba0  str d10,[sp, #-0x80]!
7101ac4ba4  stp d9,d8,[sp, #0x10]
7101ac4ba8  stp x28,x27,[sp, #0x20]
7101ac4bac  stp x26,x25,[sp, #0x30]
7101ac4bb0  stp x24,x23,[sp, #0x40]
7101ac4bb4  stp x22,x21,[sp, #0x50]
7101ac4bb8  stp x20,x19,[sp, #0x60]
7101ac4bbc  stp x29,x30,[sp, #0x70]
7101ac4bc0  add x29,sp,#0x70
7101ac4bc4  sub sp,sp,#0x260
7101ac4bc8  mov w8,#0x5a
7101ac4bcc  str w8,[x0, #0x3a8]
7101ac4bd0  strb wzr,[sp, #0x158]
7101ac4bd4  str xzr,[sp, #0x150]
7101ac4bd8  mov x25,x0
7101ac4bdc  ldr x0,[x0, #0x300]
7101ac4be0  ldp x27,x8,[x0]
7101ac4be4  sub x8,x8,x27
7101ac4be8  orr x9,xzr,#-0x1111111111111112
7101ac4bec  movk x9,#0xeeef
7101ac4bf0  ldrsw x24,[x25, #0x2f8]
7101ac4bf4  asr x8,x8,#0x6
7101ac4bf8  mul x8,x8,x9
7101ac4bfc  cmp x8,x24
7101ac4c00  b.ls 0x7101ac65e4
7101ac4c04  orr w8,wzr,#0x3c0
7101ac4c08  madd x19,x24,x8,x27
7101ac4c0c  add x26,x25,#0x230
7101ac4c10  ldrb w8,[x19, #0x6c]!
7101ac4c14  mov w20,w1
7101ac4c18  adrp x1,0x71043ae000
7101ac4c1c  add x1,x1,#0x1be
7101ac4c20  mov x0,x26
7101ac4c24  str w8,[sp, #0x80]
7101ac4c28  sub x8,x29,#0xc0
7101ac4c2c  bl 0x7103776910
7101ac4c30  ldursw x8,[x19, #-0x4]
7101ac4c34  mov x9,#-0x7777
7101ac4c38  movk x9,#0x8888, LSL #16
7101ac4c3c  mul x9,x8,x9
7101ac4c40  lsr x9,x9,#0x20
7101ac4c44  add w9,w9,w8
7101ac4c48  asr w10,w9,#0x5
7101ac4c4c  add w9,w10,w9, LSR #0x1f
7101ac4c50  mov w10,#0xffffffc4
7101ac4c54  madd w8,w9,w10,w8
7101ac4c58  cmp w9,#0x3e7
7101ac4c5c  mov w10,#0x3e7
7101ac4c60  csel w9,w9,w10,lt
7101ac4c64  cmp w8,#0x3e7
7101ac4c68  mov w21,#0x3e8
7101ac4c6c  adrp x1,0x7104421000
7101ac4c70  add x1,x1,#0xe2f
7101ac4c74  csel w8,w8,w10,lt
7101ac4c78  madd w3,w9,w21,w8
7101ac4c7c  sub x0,x29,#0xc0
7101ac4c80  mov w2,#0x1
7101ac4c84  str x19,[sp, #0x88]
7101ac4c88  bl 0x710377a280
7101ac4c8c  ldur x0,[x29, #-0xb8]
7101ac4c90  adrp x19,0x710523d000
7101ac4c94  add x19,x19,#0x9a8
7101ac4c98  stp x19,xzr,[x29, #-0xc0]
7101ac4c9c  cbz x0,0x7101ac4ca4
7101ac4ca0  bl 0x710392eb40
7101ac4ca4  adrp x1,0x710435b000
7101ac4ca8  add x1,x1,#0x927
7101ac4cac  sub x8,x29,#0xc0
7101ac4cb0  mov x0,x26
7101ac4cb4  bl 0x7103776910
7101ac4cb8  ldr x8,[sp, #0x88]
7101ac4cbc  ldrb w8,[x8]
7101ac4cc0  sub w8,w8,#0x1
7101ac4cc4  cmp w8,#0x11
7101ac4cc8  b.hi 0x7101ac4d80
7101ac4ccc  adrp x9,0x71044f8000
7101ac4cd0  add x9,x9,#0x1d0
7101ac4cd4  adrp x1,0x71042f7000
7101ac4cd8  add x1,x1,#0xd39
7101ac4cdc  ldrsw x8,[x9, x8, LSL #0x2]
7101ac4ce0  add x8,x8,x9
7101ac4ce4  br x8
7101ac4ce8  adrp x1,0x71043be000
7101ac4cec  add x1,x1,#0x1b1
7101ac4cf0  b 0x7101ac4da4
7101ac4cf4  adrp x1,0x71042d5000
7101ac4cf8  add x1,x1,#0xd44
7101ac4cfc  b 0x7101ac4da4
7101ac4d00  orr w8,wzr,#0x3c0
7101ac4d04  adrp x9,0x71043ce000
7101ac4d08  add x9,x9,#0xf13
7101ac4d0c  madd x8,x24,x8,x27
7101ac4d10  adrp x10,0x7104308000
7101ac4d14  add x10,x10,#0x3d
7101ac4d18  b 0x7101ac4d98
7101ac4d1c  adrp x1,0x7104400000
7101ac4d20  add x1,x1,#0xf54
7101ac4d24  b 0x7101ac4da4
7101ac4d28  orr w8,wzr,#0x3c0
7101ac4d2c  adrp x9,0x7104432000
7101ac4d30  add x9,x9,#0xb7b
7101ac4d34  madd x8,x24,x8,x27
7101ac4d38  adrp x10,0x7104349000
7101ac4d3c  add x10,x10,#0xdfd
7101ac4d40  b 0x7101ac4d98
7101ac4d44  adrp x1,0x71042b3000
7101ac4d48  add x1,x1,#0xe4d
7101ac4d4c  b 0x7101ac4da4
7101ac4d50  adrp x1,0x710437c000
7101ac4d54  add x1,x1,#0xbd
7101ac4d58  b 0x7101ac4da4
7101ac4d5c  adrp x1,0x71043ce000
7101ac4d60  add x1,x1,#0xf35
7101ac4d64  b 0x7101ac4da4
7101ac4d68  adrp x1,0x71042d5000
7101ac4d6c  add x1,x1,#0xd68
7101ac4d70  b 0x7101ac4da4
7101ac4d74  adrp x1,0x71043ad000
7101ac4d78  add x1,x1,#0x282
7101ac4d7c  b 0x7101ac4da4
7101ac4d80  orr w8,wzr,#0x3c0
7101ac4d84  madd x8,x24,x8,x27
7101ac4d88  adrp x9,0x71043ce000
7101ac4d8c  add x9,x9,#0xef7
7101ac4d90  adrp x10,0x71043be000
7101ac4d94  add x10,x10,#0x1b1
7101ac4d98  ldrb w8,[x8, #0x6f]
7101ac4d9c  cmp w8,#0x0
7101ac4da0  csel x1,x10,x9,eq
7101ac4da4  sub x0,x29,#0xc0
7101ac4da8  bl 0x710377a120
7101ac4dac  ldur x0,[x29, #-0xb8]
7101ac4db0  stp x19,xzr,[x29, #-0xc0]
7101ac4db4  cbz x0,0x7101ac4dbc
7101ac4db8  bl 0x710392eb40
7101ac4dbc  adrp x1,0x7104291000
7101ac4dc0  add x1,x1,#0xdb1
7101ac4dc4  sub x8,x29,#0xc0
7101ac4dc8  mov x0,x26
7101ac4dcc  bl 0x7103776910
7101ac4dd0  ldr x8,[sp, #0x88]
7101ac4dd4  ldrb w8,[x8]
7101ac4dd8  sub w8,w8,#0x1
7101ac4ddc  cmp w8,#0x11
7101ac4de0  b.hi 0x7101ac4e98
7101ac4de4  adrp x9,0x71044f8000
7101ac4de8  add x9,x9,#0x218
7101ac4dec  adrp x1,0x71042f7000
7101ac4df0  add x1,x1,#0xd39
7101ac4df4  ldrsw x8,[x9, x8, LSL #0x2]
7101ac4df8  add x8,x8,x9
7101ac4dfc  br x8
7101ac4e00  adrp x1,0x71043be000
7101ac4e04  add x1,x1,#0x1b1
7101ac4e08  b 0x7101ac4ebc
7101ac4e0c  adrp x1,0x71042d5000
7101ac4e10  add x1,x1,#0xd44
7101ac4e14  b 0x7101ac4ebc
7101ac4e18  orr w8,wzr,#0x3c0
7101ac4e1c  adrp x9,0x71043ce000
7101ac4e20  add x9,x9,#0xf13
7101ac4e24  madd x8,x24,x8,x27
7101ac4e28  adrp x10,0x7104308000
7101ac4e2c  add x10,x10,#0x3d
7101ac4e30  b 0x7101ac4eb0
7101ac4e34  adrp x1,0x7104400000
7101ac4e38  add x1,x1,#0xf54
7101ac4e3c  b 0x7101ac4ebc
7101ac4e40  orr w8,wzr,#0x3c0
7101ac4e44  adrp x9,0x7104432000
7101ac4e48  add x9,x9,#0xb7b
7101ac4e4c  madd x8,x24,x8,x27
7101ac4e50  adrp x10,0x7104349000
7101ac4e54  add x10,x10,#0xdfd
7101ac4e58  b 0x7101ac4eb0
7101ac4e5c  adrp x1,0x71042b3000
7101ac4e60  add x1,x1,#0xe4d
7101ac4e64  b 0x7101ac4ebc
7101ac4e68  adrp x1,0x710437c000
7101ac4e6c  add x1,x1,#0xbd
7101ac4e70  b 0x7101ac4ebc
7101ac4e74  adrp x1,0x71043ce000
7101ac4e78  add x1,x1,#0xf35
7101ac4e7c  b 0x7101ac4ebc
7101ac4e80  adrp x1,0x71042d5000
7101ac4e84  add x1,x1,#0xd68
7101ac4e88  b 0x7101ac4ebc
7101ac4e8c  adrp x1,0x71043ad000
7101ac4e90  add x1,x1,#0x282
7101ac4e94  b 0x7101ac4ebc
7101ac4e98  orr w8,wzr,#0x3c0
7101ac4e9c  madd x8,x24,x8,x27
7101ac4ea0  adrp x9,0x71043ce000
7101ac4ea4  add x9,x9,#0xef7
7101ac4ea8  adrp x10,0x71043be000
7101ac4eac  add x10,x10,#0x1b1
7101ac4eb0  ldrb w8,[x8, #0x6f]
7101ac4eb4  cmp w8,#0x0
7101ac4eb8  csel x1,x10,x9,eq
7101ac4ebc  sub x0,x29,#0xc0
7101ac4ec0  bl 0x710377a120
7101ac4ec4  ldur x0,[x29, #-0xb8]
7101ac4ec8  stp x19,xzr,[x29, #-0xc0]
7101ac4ecc  cbz x0,0x7101ac4ed4
7101ac4ed0  bl 0x710392eb40
7101ac4ed4  orr w8,wzr,#0x3c0
7101ac4ed8  madd x19,x24,x8,x27
7101ac4edc  add x0,x25,#0x2e0
7101ac4ee0  adrp x1,0x7104411000
7101ac4ee4  add x1,x1,#0x1db
7101ac4ee8  add x8,sp,#0x140
7101ac4eec  stur x0,[x29, #-0x68]
7101ac4ef0  bl 0x7103776640
7101ac4ef4  adrp x1,0x71042c3000
7101ac4ef8  add x1,x1,#0x645
7101ac4efc  add x8,sp,#0x130
7101ac4f00  add x0,sp,#0x140
7101ac4f04  bl 0x7103776910
7101ac4f08  ldrh w8,[x19, #0x14]!
7101ac4f0c  cbz w8,0x7101ac4f30
7101ac4f10  ldr x22,[sp, #0x138]
7101ac4f14  ldr x0,[x22, #0x10]
7101ac4f18  cbz x0,0x7101ac4f44
7101ac4f1c  mov w2,#0xffffffff
7101ac4f20  mov w3,#0x1
7101ac4f24  mov x1,x19
7101ac4f28  bl 0x71037a2270
7101ac4f2c  b 0x7101ac4f44
7101ac4f30  adrp x1,0x71043df000
7101ac4f34  add x1,x1,#0xbed
7101ac4f38  add x0,sp,#0x130
7101ac4f3c  bl 0x710377a120
7101ac4f40  ldr x22,[sp, #0x138]
7101ac4f44  adrp x8,0x710523d000
7101ac4f48  add x8,x8,#0x9a8
7101ac4f4c  stp x8,xzr,[sp, #0x130]
7101ac4f50  cbz x22,0x7101ac4f5c
7101ac4f54  mov x0,x22
7101ac4f58  bl 0x710392eb40
7101ac4f5c  adrp x1,0x710437a000
7101ac4f60  add x1,x1,#0xe67
7101ac4f64  add x8,sp,#0x120
7101ac4f68  add x0,sp,#0x140
7101ac4f6c  bl 0x7103776910
7101ac4f70  ldrh w8,[x19]
7101ac4f74  cbz w8,0x7101ac4f98
7101ac4f78  ldr x22,[sp, #0x128]
7101ac4f7c  ldr x0,[x22, #0x10]
7101ac4f80  cbz x0,0x7101ac4fac
7101ac4f84  mov w2,#0xffffffff
7101ac4f88  mov w3,#0x1
7101ac4f8c  mov x1,x19
7101ac4f90  bl 0x71037a2270
7101ac4f94  b 0x7101ac4fac
7101ac4f98  adrp x1,0x71043df000
7101ac4f9c  add x1,x1,#0xbed
7101ac4fa0  add x0,sp,#0x120
7101ac4fa4  bl 0x710377a120
7101ac4fa8  ldr x22,[sp, #0x128]
7101ac4fac  adrp x8,0x710523d000
7101ac4fb0  add x8,x8,#0x9a8
7101ac4fb4  stp x8,xzr,[sp, #0x120]
7101ac4fb8  cbz x22,0x7101ac4fc4
7101ac4fbc  mov x0,x22
7101ac4fc0  bl 0x710392eb40
7101ac4fc4  orr w8,wzr,#0x3c0
7101ac4fc8  madd x8,x24,x8,x27
7101ac4fcc  mov w9,#0x4240
7101ac4fd0  movk w9,#0xf, LSL #16
7101ac4fd4  ldp w10,w8,[x8, #0x8]
7101ac4fd8  and w11,w10,#0xfff
7101ac4fdc  ubfx w12,w10,#0x15,#0x5
7101ac4fe0  ubfx w13,w10,#0xc,#0x4
7101ac4fe4  mul w11,w11,w9
7101ac4fe8  mul w9,w12,w9
7101ac4fec  madd w11,w13,w21,w11
7101ac4ff0  ubfx w13,w10,#0x10,#0x5
7101ac4ff4  lsr w10,w10,#0x1a
7101ac4ff8  madd w9,w10,w21,w9
7101ac4ffc  ldur x0,[x29, #-0x68]
7101ac5000  and w8,w8,#0x3f
7101ac5004  add w21,w9,w8
7101ac5008  adrp x1,0x71042d6000
7101ac500c  add x1,x1,#0xb88
7101ac5010  sub x8,x29,#0xc0
7101ac5014  add w19,w11,w13
7101ac5018  bl 0x7103776910
7101ac501c  adrp x1,0x7104339000
7101ac5020  add x1,x1,#0xca6
7101ac5024  sub x0,x29,#0xc0
7101ac5028  mov w2,#0x2
7101ac502c  mov w3,w19
7101ac5030  mov w4,w21
7101ac5034  bl 0x710377a280
7101ac5038  ldur x0,[x29, #-0xb8]
7101ac503c  adrp x22,0x710523d000
7101ac5040  add x22,x22,#0x9a8
7101ac5044  stp x22,xzr,[x29, #-0xc0]
7101ac5048  cbz x0,0x7101ac5050
7101ac504c  bl 0x710392eb40
7101ac5050  mov w8,#0x1
7101ac5054  orr w9,wzr,#0x3c0
7101ac5058  adrp x19,0x7105324000
7101ac505c  strb w8,[x25, #0x3ac]
7101ac5060  madd x21,x24,x9,x27
7101ac5064  ldr x8,[x19, #0xee8]
7101ac5068  ldr w1,[x21]
7101ac506c  ldr x0,[x8, #0x8]
7101ac5070  bl 0x7101af0cc0
7101ac5074  cbz w0,0x7101ac519c
7101ac5078  adrp x1,0x7104443000
7101ac507c  add x1,x1,#0x93d
7101ac5080  sub x8,x29,#0xc0
7101ac5084  mov x0,x26
7101ac5088  bl 0x7103776910
7101ac508c  fmov s8,0x3f800000
7101ac5090  ldr x0,[x25, #0x238]
7101ac5094  adrp x1,0x7104412000
7101ac5098  add x1,x1,#0x490
7101ac509c  mov v0.16B,v8.16B
7101ac50a0  bl 0x7103778300
7101ac50a4  ldr x0,[x25, #0x2e8]
7101ac50a8  mov v0.16B,v8.16B
7101ac50ac  adrp x1,0x7104400000
7101ac50b0  add x1,x1,#0xf02
7101ac50b4  bl 0x7103778300
7101ac50b8  ldr x19,[x25, #0x2f0]
7101ac50bc  mov w0,#0x10
7101ac50c0  mov w1,#0x20
7101ac50c4  str x22,[sp, #0x110]
7101ac50c8  bl 0x710392e290
7101ac50cc  cbnz x0,0x7101ac5114
7101ac50d0  adrp x8,0x7105332000
7101ac50d4  ldr x0,[x8, #0xf00]
7101ac50d8  cbz x0,0x7101ac5110
7101ac50dc  mov w8,#0x20
7101ac50e0  str wzr,[sp, #0xe8]
7101ac50e4  add x1,sp,#0xe8
7101ac50e8  str x8,[sp, #0x198]
7101ac50ec  ldr x8,[x0]
7101ac50f0  ldr x8,[x8, #0x30]
7101ac50f4  add x2,sp,#0x198
7101ac50f8  blr x8
7101ac50fc  tbz w0,#0x0,0x7101ac5110
7101ac5100  mov w0,#0x10
7101ac5104  mov w1,#0x20
7101ac5108  bl 0x710392e290
7101ac510c  cbnz x0,0x7101ac5114
7101ac5110  mov x0,xzr
7101ac5114  stp xzr,xzr,[x0, #0x10]
7101ac5118  mov x23,x0
7101ac511c  stp xzr,xzr,[x0]
7101ac5120  ldur x8,[x29, #-0xb8]
7101ac5124  add x1,sp,#0x110
7101ac5128  mov w4,wzr
7101ac512c  str x0,[sp, #0x118]
7101ac5130  ldr x9,[x8]
7101ac5134  str x9,[x0]
7101ac5138  ldr x8,[x8, #0x8]
7101ac513c  str x8,[x0, #0x8]
7101ac5140  ldur x22,[x29, #-0xb8]
7101ac5144  ldr x8,[x22, #0x10]
7101ac5148  str x8,[x23, #0x10]
7101ac514c  ldr x8,[x22, #0x18]
7101ac5150  str x8,[x23, #0x18]
7101ac5154  orr w8,wzr,#0x3c0
7101ac5158  madd x8,x24,x8,x27
7101ac515c  ldr w2,[x8, #0x300]
7101ac5160  ldr w3,[x21]
7101ac5164  mov x0,x19
7101ac5168  bl 0x7101ad2060
7101ac516c  adrp x8,0x710523d000
7101ac5170  add x8,x8,#0x9a8
7101ac5174  stp x8,xzr,[sp, #0x110]
7101ac5178  cbz x23,0x7101ac5184
7101ac517c  mov x0,x23
7101ac5180  bl 0x710392eb40
7101ac5184  adrp x8,0x710523d000
7101ac5188  add x8,x8,#0x9a8
7101ac518c  stp x8,xzr,[x29, #-0xc0]
7101ac5190  cbz x22,0x7101ac52c0
7101ac5194  mov x0,x22
7101ac5198  b 0x7101ac52bc
7101ac519c  orr w8,wzr,#0x3c0
7101ac51a0  madd x8,x24,x8,x27
7101ac51a4  ldr w9,[x8, #0x300]
7101ac51a8  cmp w9,#0x145
7101ac51ac  b.ne 0x7101ac51fc
7101ac51b0  ldr x9,[x19, #0xee8]
7101ac51b4  ldr x9,[x9, #0x8]
7101ac51b8  ldr w8,[x21]
7101ac51bc  ldr x10,[x9, #0xe8]!
7101ac51c0  cbz x10,0x7101ac51f4
7101ac51c4  mov x11,x9
7101ac51c8  ldr w12,[x10, #0x1c]
7101ac51cc  cmp w12,w8
7101ac51d0  cset w12,cc
7101ac51d4  csel x11,x11,x10,cc
7101ac51d8  ldr x10,[x10, w12, UXTW #0x3]
7101ac51dc  cbnz x10,0x7101ac51c8
7101ac51e0  cmp x11,x9
7101ac51e4  b.eq 0x7101ac51f4
7101ac51e8  ldr w9,[x11, #0x1c]
7101ac51ec  cmp w9,w8
7101ac51f0  b.ls 0x7101ac52e0
7101ac51f4  strb wzr,[x25, #0x3ac]
7101ac51f8  b 0x7101ac531c
7101ac51fc  add x22,x8,#0x300
7101ac5200  adrp x1,0x71043df000
7101ac5204  add x1,x1,#0xb75
7101ac5208  sub x8,x29,#0xc0
7101ac520c  mov x0,x26
7101ac5210  bl 0x7103776640
7101ac5214  fmov s8,0x3f800000
7101ac5218  ldr x0,[x25, #0x238]
7101ac521c  adrp x1,0x7104291000
7101ac5220  add x1,x1,#0x704
7101ac5224  mov v0.16B,v8.16B
7101ac5228  bl 0x7103778300
7101ac522c  ldr x0,[x25, #0x2e8]
7101ac5230  mov v0.16B,v8.16B
7101ac5234  adrp x1,0x7104400000
7101ac5238  add x1,x1,#0xf02
7101ac523c  bl 0x7103778300
7101ac5240  ldr x19,[x25, #0x2f0]
7101ac5244  add x0,sp,#0x100
7101ac5248  sub x1,x29,#0xc0
7101ac524c  bl 0x7103776390
7101ac5250  ldr w2,[x22]
7101ac5254  ldr w3,[x21]
7101ac5258  add x1,sp,#0x100
7101ac525c  mov w4,#0x1
7101ac5260  mov x0,x19
7101ac5264  adrp x22,0x710523d000
7101ac5268  add x22,x22,#0x9a8
7101ac526c  bl 0x7101ad1f10
7101ac5270  ldr x19,[sp, #0x108]
7101ac5274  adrp x21,0x710523d000
7101ac5278  add x21,x21,#0x988
7101ac527c  stp x21,xzr,[sp, #0x100]
7101ac5280  cbz x19,0x7101ac529c
7101ac5284  ldr x0,[x19, #0x18]
7101ac5288  stp x22,xzr,[x19, #0x10]
7101ac528c  cbz x0,0x7101ac5294
7101ac5290  bl 0x710392eb40
7101ac5294  mov x0,x19
7101ac5298  bl 0x710392eb40
7101ac529c  ldur x19,[x29, #-0xb8]
7101ac52a0  stp x21,xzr,[x29, #-0xc0]
7101ac52a4  cbz x19,0x7101ac52c0
7101ac52a8  ldr x0,[x19, #0x18]
7101ac52ac  stp x22,xzr,[x19, #0x10]
7101ac52b0  cbz x0,0x7101ac52b8
7101ac52b4  bl 0x710392eb40
7101ac52b8  mov x0,x19
7101ac52bc  bl 0x710392eb40
7101ac52c0  ldrb w8,[x25, #0x3ac]
7101ac52c4  cbz w8,0x7101ac531c
7101ac52c8  ldr x0,[x25, #0x238]
7101ac52cc  adrp x1,0x7104280000
7101ac52d0  add x1,x1,#0x524
7101ac52d4  tbnz w20,#0x0,0x7101ac536c
7101ac52d8  bl 0x7103778760
7101ac52dc  b 0x7101ac5374
7101ac52e0  fmov s8,0x3f800000
7101ac52e4  ldr x0,[x25, #0x238]
7101ac52e8  adrp x1,0x710425e000
7101ac52ec  add x1,x1,#0xe2f
7101ac52f0  mov v0.16B,v8.16B
7101ac52f4  mov w8,#0x1
7101ac52f8  strb w8,[x25, #0x3ac]
7101ac52fc  bl 0x7103778300
7101ac5300  ldr x0,[x25, #0x2e8]
7101ac5304  mov v0.16B,v8.16B
7101ac5308  adrp x1,0x7104291000
7101ac530c  add x1,x1,#0x6f7
7101ac5310  bl 0x7103778300
7101ac5314  ldrb w8,[x25, #0x3ac]
7101ac5318  cbnz w8,0x7101ac52c8
7101ac531c  ldr x19,[x25, #0x238]
7101ac5320  ldr x0,[x19, #0x8]
7101ac5324  cbz x0,0x7101ac534c
7101ac5328  adrp x1,0x7104308000
7101ac532c  add x1,x1,#0x61
7101ac5330  bl 0x71037964b0
7101ac5334  cbz x0,0x7101ac534c
7101ac5338  ldr x8,[x0]
7101ac533c  ldr x8,[x8, #0x130]
7101ac5340  blr x8
7101ac5344  tbnz w0,#0x0,0x7101ac5360
7101ac5348  ldr x19,[x25, #0x238]
7101ac534c  fmov s0,0x3f800000
7101ac5350  adrp x1,0x7104308000
7101ac5354  add x1,x1,#0x61
7101ac5358  mov x0,x19
7101ac535c  bl 0x7103778300
7101ac5360  ldr x0,[x25, #0x238]
7101ac5364  adrp x1,0x71042e6000
7101ac5368  add x1,x1,#0xc01
7101ac536c  fmov s0,0x3f800000
7101ac5370  bl 0x7103778300
7101ac5374  mov w0,#0x10
7101ac5378  orr w1,wzr,#0xf0
7101ac537c  str x26,[sp, #0x8]
7101ac5380  str x25,[sp, #0x68]
7101ac5384  bl 0x710392e290
7101ac5388  cbnz x0,0x7101ac53d0
7101ac538c  adrp x8,0x7105332000
7101ac5390  ldr x0,[x8, #0xf00]
7101ac5394  cbz x0,0x7101ac53cc
7101ac5398  orr w8,wzr,#0xf0
7101ac539c  str wzr,[sp, #0x198]
7101ac53a0  add x1,sp,#0x198
7101ac53a4  stur x8,[x29, #-0xc0]
7101ac53a8  ldr x8,[x0]
7101ac53ac  ldr x8,[x8, #0x30]
7101ac53b0  sub x2,x29,#0xc0
7101ac53b4  blr x8
7101ac53b8  tbz w0,#0x0,0x7101ac53cc
7101ac53bc  mov w0,#0x10
7101ac53c0  orr w1,wzr,#0xf0
7101ac53c4  bl 0x710392e290
7101ac53c8  cbnz x0,0x7101ac53d0
7101ac53cc  mov x0,xzr
7101ac53d0  ldr w25,[sp, #0x80]
7101ac53d4  mov x26,#-0x3f00000000000000
7101ac53d8  add x8,x0,#0xf0
7101ac53dc  stp x0,x0,[sp, #0xe8]
7101ac53e0  str x8,[sp, #0xf8]
7101ac53e4  str x24,[sp, #0x60]
7101ac53e8  cmp w25,#0x9
7101ac53ec  str x27,[sp, #0x70]
7101ac53f0  b.eq 0x7101ac5684
7101ac53f4  mov x9,x24
7101ac53f8  orr w8,wzr,#0x3c0
7101ac53fc  mul x8,x9,x8
7101ac5400  orr x22,xzr,#-0x5555555555555556
7101ac5404  mov x24,xzr
7101ac5408  movk x22,#0xaaa, LSL #48
7101ac540c  add x23,x27,x8
7101ac5410  b 0x7101ac541c
7101ac5414  mov x0,xzr
7101ac5418  b 0x7101ac552c
7101ac541c  add x8,x23,x24
7101ac5420  ldrb w9,[x8, #0x90]
7101ac5424  cbz w9,0x7101ac559c
7101ac5428  ldr x21,[x8, #0x80]
7101ac542c  and x10,x21,#-0x100000000000000
7101ac5430  and x9,x21,#0xffffffffff
7101ac5434  cmp x10,x26
7101ac5438  ccmp x9,#0x0,#0x4,eq
7101ac543c  b.eq 0x7101ac559c
7101ac5440  ldrb w12,[x8, #0x92]
7101ac5444  ldr w28,[x8, #0x98]
7101ac5448  ldp x8,x9,[sp, #0xf0]
7101ac544c  cmp x8,x9
7101ac5450  b.cs 0x7101ac5470
7101ac5454  str w28,[x8]
7101ac5458  str x21,[x8, #0x8]
7101ac545c  str w12,[x8, #0x10]
7101ac5460  ldr x8,[sp, #0xf0]
7101ac5464  add x8,x8,#0x18
7101ac5468  str x8,[sp, #0xf0]
7101ac546c  b 0x7101ac559c
7101ac5470  ldr x19,[sp, #0xe8]
7101ac5474  sub x20,x8,x19
7101ac5478  orr x10,xzr,#-0x5555555555555556
7101ac547c  movk x10,#0xaaab
7101ac5480  asr x8,x20,#0x3
7101ac5484  mul x25,x8,x10
7101ac5488  add x8,x25,#0x1
7101ac548c  cmp x8,x22
7101ac5490  b.hi 0x7101ac65dc
7101ac5494  sub x9,x9,x19
7101ac5498  asr x9,x9,#0x3
7101ac549c  mul x9,x9,x10
7101ac54a0  orr x10,xzr,#0x5555555555555555
7101ac54a4  movk x10,#0x555, LSL #48
7101ac54a8  cmp x9,x10
7101ac54ac  mov x27,x22
7101ac54b0  b.cs 0x7101ac54c4
7101ac54b4  lsl x9,x9,#0x1
7101ac54b8  cmp x9,x8
7101ac54bc  csel x27,x8,x9,cc
7101ac54c0  cbz x27,0x7101ac5414
7101ac54c4  add x8,x27,x27, LSL #0x1
7101ac54c8  lsl x8,x8,#0x3
7101ac54cc  cmp x8,#0x0
7101ac54d0  csinc x22,x8,xzr,ne
7101ac54d4  mov w0,#0x10
7101ac54d8  mov x1,x22
7101ac54dc  str w12,[sp, #0xa4]
7101ac54e0  bl 0x710392e290
7101ac54e4  cbnz x0,0x7101ac5528
7101ac54e8  adrp x8,0x7105332000
7101ac54ec  ldr x0,[x8, #0xf00]
7101ac54f0  cbz x0,0x7101ac5524
7101ac54f4  str wzr,[sp, #0x198]
7101ac54f8  stur x22,[x29, #-0xc0]
7101ac54fc  ldr x8,[x0]
7101ac5500  ldr x8,[x8, #0x30]
7101ac5504  add x1,sp,#0x198
7101ac5508  sub x2,x29,#0xc0
7101ac550c  blr x8
7101ac5510  tbz w0,#0x0,0x7101ac5524
7101ac5514  mov w0,#0x10
7101ac5518  mov x1,x22
7101ac551c  bl 0x710392e290
7101ac5520  cbnz x0,0x7101ac5528
7101ac5524  mov x0,xzr
7101ac5528  ldr w12,[sp, #0xa4]
7101ac552c  orr x9,xzr,#0x5555555555555555
7101ac5530  movk x9,#0xd555, LSL #48
7101ac5534  smulh x9,x20,x9
7101ac5538  orr w11,wzr,#0x18
7101ac553c  madd x8,x25,x11,x0
7101ac5540  madd x22,x27,x11,x0
7101ac5544  str x21,[x8, #0x8]
7101ac5548  add x25,x8,#0x18
7101ac554c  cmp x20,#0x1
7101ac5550  str w28,[x8]
7101ac5554  str w12,[x8, #0x10]
7101ac5558  asr x10,x9,#0x2
7101ac555c  add x9,x10,x9, LSR #0x3f
7101ac5560  madd x21,x9,x11,x8
7101ac5564  b.lt 0x7101ac5578
7101ac5568  mov x0,x21
7101ac556c  mov x1,x19
7101ac5570  mov x2,x20
7101ac5574  bl 0x71039c00e0
7101ac5578  stp x21,x25,[sp, #0xe8]
7101ac557c  ldr x27,[sp, #0x70]
7101ac5580  ldr w25,[sp, #0x80]
7101ac5584  str x22,[sp, #0xf8]
7101ac5588  orr x22,xzr,#-0x5555555555555556
7101ac558c  movk x22,#0xaaa, LSL #48
7101ac5590  cbz x19,0x7101ac559c
7101ac5594  mov x0,x19
7101ac5598  bl 0x710392eb40
7101ac559c  add x24,x24,#0x50
7101ac55a0  cmp x24,#0x280
7101ac55a4  b.ne 0x7101ac541c
7101ac55a8  ldp x19,x20,[sp, #0xe8]
7101ac55ac  sub x8,x20,x19
7101ac55b0  orr x10,xzr,#-0x5555555555555556
7101ac55b4  movk x10,#0xaaab
7101ac55b8  asr x9,x8,#0x3
7101ac55bc  mul x22,x9,x10
7101ac55c0  cmp x8,#0x1
7101ac55c4  b.lt 0x7101ac563c
7101ac55c8  orr x8,xzr,#0x5555555555555555
7101ac55cc  movk x8,#0x555, LSL #48
7101ac55d0  cmp x22,x8
7101ac55d4  csel x23,x22,x8,lt
7101ac55d8  add x8,x23,x23, LSL #0x1
7101ac55dc  lsl x8,x8,#0x3
7101ac55e0  cmp x8,#0x0
7101ac55e4  csinc x24,x8,xzr,ne
7101ac55e8  mov w0,#0x10
7101ac55ec  mov x1,x24
7101ac55f0  bl 0x710392e290
7101ac55f4  cbnz x0,0x7101ac565c
7101ac55f8  adrp x8,0x7105332000
7101ac55fc  ldr x0,[x8, #0xf00]
7101ac5600  cbz x0,0x7101ac5634
7101ac5604  str wzr,[sp, #0x198]
7101ac5608  stur x24,[x29, #-0xc0]
7101ac560c  ldr x8,[x0]
7101ac5610  ldr x8,[x8, #0x30]
7101ac5614  add x1,sp,#0x198
7101ac5618  sub x2,x29,#0xc0
7101ac561c  blr x8
7101ac5620  tbz w0,#0x0,0x7101ac5634
7101ac5624  mov w0,#0x10
7101ac5628  mov x1,x24
7101ac562c  bl 0x710392e290
7101ac5630  cbnz x0,0x7101ac565c
7101ac5634  lsr x23,x23,#0x1
7101ac5638  cbnz x23,0x7101ac55d8
7101ac563c  mov x0,x19
7101ac5640  mov x1,x20
7101ac5644  mov x2,x22
7101ac5648  mov x3,xzr
7101ac564c  mov x4,xzr
7101ac5650  bl 0x7101ac7410
7101ac5654  ldr x24,[sp, #0x60]
7101ac5658  b 0x7101ac5684
7101ac565c  ldr x24,[sp, #0x60]
7101ac5660  mov x21,x0
7101ac5664  mov x0,x19
7101ac5668  mov x1,x20
7101ac566c  mov x2,x22
7101ac5670  mov x3,x21
7101ac5674  mov x4,x23
7101ac5678  bl 0x7101ac7410
7101ac567c  mov x0,x21
7101ac5680  bl 0x710392eb40
7101ac5684  orr w13,wzr,#0x3c0
7101ac5688  madd x20,x24,x13,x27
7101ac568c  cmp w25,#0x9
7101ac5690  sub x9,x29,#0xc0
7101ac5694  cset w10,ne
7101ac5698  add x8,sp,#0x198
7101ac569c  str w10,[sp, #0x5c]
7101ac56a0  add x10,x9,#0x8
7101ac56a4  fmov s8,0x3f800000
7101ac56a8  fmov s9,wzr
7101ac56ac  str x10,[sp, #0x48]
7101ac56b0  add x10,x8,#0x8
7101ac56b4  add x8,x8,#0x9
7101ac56b8  mov x23,xzr
7101ac56bc  str x10,[sp, #0x40]
7101ac56c0  add x10,x20,#0x6f
7101ac56c4  str x8,[sp, #0x30]
7101ac56c8  add x8,x9,#0x9
7101ac56cc  mov w14,#0x50
7101ac56d0  adrp x28,0x710523d000
7101ac56d4  add x28,x28,#0x988
7101ac56d8  str x10,[sp, #0x50]
7101ac56dc  str x8,[sp, #0x38]
7101ac56e0  b 0x7101ac56fc
7101ac56e4  orr w10,wzr,#0x6
7101ac56e8  b 0x7101ac5954
7101ac56ec  orr w10,wzr,#0x7
7101ac56f0  b 0x7101ac5954
7101ac56f4  mov w10,#0x8
7101ac56f8  b 0x7101ac5954
7101ac56fc  mul x8,x24,x13
7101ac5700  add x8,x27,x8
7101ac5704  madd x21,x23,x14,x8
7101ac5708  ldrb w8,[x21, #0x90]!
7101ac570c  cbz w8,0x7101ac6158
7101ac5710  and w8,w23,#0xff
7101ac5714  mov w9,#0xcccd
7101ac5718  movk w9,#0xcccc, LSL #16
7101ac571c  umull x8,w8,w9
7101ac5720  lsr x22,x8,#0x22
7101ac5724  cmp w25,#0x9
7101ac5728  b.ne 0x7101ac57fc
7101ac572c  madd x11,x24,x13,x27
7101ac5730  ldr x9,[sp, #0x88]
7101ac5734  add w10,w22,w22, LSL #0x2
7101ac5738  sub w10,w23,w10
7101ac573c  umaddl x11,w22,w14,x11
7101ac5740  ldrb w9,[x9]
7101ac5744  add x10,x11,w10, SXTW  #0x4
7101ac5748  ldr x28,[x10, #0x318]
7101ac574c  ldr w10,[x10, #0x320]
7101ac5750  cmp w9,#0x9
7101ac5754  mov x8,xzr
7101ac5758  cset w9,eq
7101ac575c  str w10,[sp, #0x94]
7101ac5760  add x10,x20,x8
7101ac5764  ldr x11,[x10, #0x80]
7101ac5768  and x12,x28,#-0x100000000000000
7101ac576c  cmp x12,x26
7101ac5770  and x13,x11,#0xffffffffff
7101ac5774  b.ne 0x7101ac57a8
7101ac5778  and x12,x28,#0xffffffffff
7101ac577c  cbz x12,0x7101ac57a8
7101ac5780  and x14,x11,#-0x100000000000000
7101ac5784  mov w12,wzr
7101ac5788  cmp x14,x26
7101ac578c  b.ne 0x7101ac57c4
7101ac5790  cbz x13,0x7101ac57c4
7101ac5794  eor x11,x11,x28
7101ac5798  tst x11,#0xffffffffff
7101ac579c  b.eq 0x7101ac57b8
7101ac57a0  mov w12,wzr
7101ac57a4  b 0x7101ac57c4
7101ac57a8  and x11,x11,#-0x100000000000000
7101ac57ac  cmp x11,x26
7101ac57b0  ccmp x13,#0x0,#0x4,eq
7101ac57b4  b.ne 0x7101ac57a0
7101ac57b8  ldrb w10,[x10, #0x91]
7101ac57bc  cmp w22,w10
7101ac57c0  cset w12,eq
7101ac57c4  add x8,x8,#0x50
7101ac57c8  orr w9,w9,w12
7101ac57cc  cmp x8,#0x280
7101ac57d0  b.ne 0x7101ac5760
7101ac57d4  tst w9,#0x1
7101ac57d8  adrp x8,0x710435b000
7101ac57dc  add x8,x8,#0x131
7101ac57e0  adrp x9,0x7104443000
7101ac57e4  add x9,x9,#0xe4
7101ac57e8  str w23,[sp, #0xa4]
7101ac57ec  csel x19,x9,x8,ne
7101ac57f0  mov w2,w23
7101ac57f4  mov w8,w23
7101ac57f8  b 0x7101ac5888
7101ac57fc  ldp x8,x9,[sp, #0xe8]
7101ac5800  cmp x9,x8
7101ac5804  b.eq 0x7101ac6158
7101ac5808  mul x10,x24,x13
7101ac580c  add x10,x27,x10
7101ac5810  madd x10,x23,x14,x10
7101ac5814  ldr w10,[x10, #0x98]
7101ac5818  ldr w11,[x8]
7101ac581c  cmp w11,w10
7101ac5820  mov x11,x8
7101ac5824  b.eq 0x7101ac5844
7101ac5828  add x11,x8,#0x18
7101ac582c  cmp x9,x11
7101ac5830  b.eq 0x7101ac6158
7101ac5834  ldr w12,[x11], #0x18
7101ac5838  cmp w12,w10
7101ac583c  b.ne 0x7101ac582c
7101ac5840  sub x11,x11,#0x18
7101ac5844  cmp x11,x9
7101ac5848  b.eq 0x7101ac6158
7101ac584c  sub x8,x11,x8
7101ac5850  lsr x8,x8,#0x3
7101ac5854  mov w9,#0xaaab
7101ac5858  movk w9,#0xaaaa, LSL #16
7101ac585c  mul w9,w8,w9
7101ac5860  madd x8,x24,x13,x27
7101ac5864  madd x8,x23,x14,x8
7101ac5868  ldr x28,[x8, #0x80]
7101ac586c  ldrb w8,[x8, #0x92]
7101ac5870  cmp w9,#0x3
7101ac5874  cinc w2,w9,gt
7101ac5878  str w8,[sp, #0x94]
7101ac587c  str w9,[sp, #0xa4]
7101ac5880  adrp x19,0x71042b4000
7101ac5884  add x19,x19,#0x55c
7101ac5888  ldur x0,[x29, #-0x68]
7101ac588c  add x8,sp,#0xd8
7101ac5890  adrp x1,0x710436b000
7101ac5894  add x1,x1,#0xe16
7101ac5898  bl 0x7103776640
7101ac589c  ldr x0,[sp, #0xe0]
7101ac58a0  mov v0.16B,v8.16B
7101ac58a4  mov x1,x19
7101ac58a8  str x0,[sp, #0x98]
7101ac58ac  bl 0x7103778300
7101ac58b0  cmp w25,#0x9
7101ac58b4  b.ne 0x7101ac58c8
7101ac58b8  mov w10,wzr
7101ac58bc  orr w9,wzr,#0x3c0
7101ac58c0  mov w11,#0x50
7101ac58c4  b 0x7101ac5954
7101ac58c8  cmp x23,#0x8
7101ac58cc  orr w9,wzr,#0x3c0
7101ac58d0  mov w11,#0x50
7101ac58d4  b.cs 0x7101ac61e4
7101ac58d8  mul x8,x24,x9
7101ac58dc  add x8,x27,x8
7101ac58e0  madd x8,x23,x11,x8
7101ac58e4  ldrb w8,[x8, #0x93]
7101ac58e8  cbz w8,0x7101ac5938
7101ac58ec  cmp w8,#0x10
7101ac58f0  b.cc 0x7101ac5940
7101ac58f4  cmp w8,#0x16
7101ac58f8  b.cc 0x7101ac5948
7101ac58fc  cmp w8,#0x20
7101ac5900  b.cc 0x7101ac5950
7101ac5904  cmp w8,#0x2b
7101ac5908  mov w10,#0x5
7101ac590c  b.cc 0x7101ac5954
7101ac5910  cmp w8,#0x31
7101ac5914  b.cc 0x7101ac56e4
7101ac5918  cmp w8,#0x3d
7101ac591c  b.cc 0x7101ac56ec
7101ac5920  cmp w8,#0x4c
7101ac5924  b.cc 0x7101ac56f4
7101ac5928  cmp w8,#0x64
7101ac592c  mov w8,#0x9
7101ac5930  csinc w10,w8,wzr,ls
7101ac5934  b 0x7101ac5954
7101ac5938  mov w10,#0x1
7101ac593c  b 0x7101ac5954
7101ac5940  mov w10,#0x2
7101ac5944  b 0x7101ac5954
7101ac5948  orr w10,wzr,#0x3
7101ac594c  b 0x7101ac5954
7101ac5950  mov w10,#0x4
7101ac5954  str w10,[sp, #0x7c]
7101ac5958  ldr x10,[sp, #0x88]
7101ac595c  madd x8,x24,x9,x27
7101ac5960  ldrb w27,[x10]
7101ac5964  madd x8,x23,x11,x8
7101ac5968  ldr x10,[sp, #0x50]
7101ac596c  ldrb w10,[x10]
7101ac5970  ldrb w8,[x8, #0x91]
7101ac5974  ldrb w9,[x21]
7101ac5978  cmp w10,#0x0
7101ac597c  ldr w10,[sp, #0xa4]
7101ac5980  csinv w8,w8,wzr,ne
7101ac5984  cmp w25,#0x9
7101ac5988  csel w8,w22,w8,eq
7101ac598c  cmp w27,#0x10
7101ac5990  ccmp w9,#0x2,#0x0,eq
7101ac5994  ccmp w25,#0x9,#0x4,ne
7101ac5998  str w8,[sp, #0x84]
7101ac599c  csinc w8,w9,wzr,ne
7101ac59a0  ldr w9,[sp, #0x5c]
7101ac59a4  cmp w10,#0x3
7101ac59a8  str w8,[sp, #0x90]
7101ac59ac  cset w8,gt
7101ac59b0  and w8,w8,w9
7101ac59b4  add w19,w10,w8
7101ac59b8  adrp x8,0x710532f000
7101ac59bc  ldr x8,[x8, #0x730]
7101ac59c0  ldr x21,[x8, #0x8]
7101ac59c4  ldr x24,[x21, #0x168]
7101ac59c8  mov x0,x24
7101ac59cc  mov x1,x28
7101ac59d0  bl 0x71032632a0
7101ac59d4  mov x1,#0xb807
7101ac59d8  movk x1,#0xb1cc, LSL #16
7101ac59dc  movk x1,#0x11, LSL #32
7101ac59e0  tbnz w0,#0x0,0x7101ac5a00
7101ac59e4  add x0,x21,#0x160
7101ac59e8  mov x1,x28
7101ac59ec  bl 0x71032648e0
7101ac59f0  mov x1,#0xf67e
7101ac59f4  movk x1,#0x3829, LSL #16
7101ac59f8  movk x1,#0x14, LSL #32
7101ac59fc  tbz w0,#0x0,0x7101ac5a0c
7101ac5a00  mov x0,x24
7101ac5a04  bl 0x71032631a0
7101ac5a08  mov x28,x0
7101ac5a0c  ldur x0,[x29, #-0x68]
7101ac5a10  sub x8,x29,#0xd0
7101ac5a14  adrp x1,0x710436b000
7101ac5a18  add x1,x1,#0xe16
7101ac5a1c  mov w2,w19
7101ac5a20  bl 0x7103776640
7101ac5a24  ldur x25,[x29, #-0xc8]
7101ac5a28  ldr x10,[x25, #0x8]
7101ac5a2c  tst x28,#0xffffffffff
7101ac5a30  and x9,x28,#-0x100000000000000
7101ac5a34  cset w8,ne
7101ac5a38  cmp x9,x26
7101ac5a3c  cset w9,eq
7101ac5a40  adrp x22,0x710523d000
7101ac5a44  add x22,x22,#0x9a8
7101ac5a48  cbz x10,0x7101ac5fa4
7101ac5a4c  ldr x10,[x10, #0x18]
7101ac5a50  cbz x10,0x7101ac5a70
7101ac5a54  and w8,w9,w8
7101ac5a58  ldrb w9,[x10, #0x58]
7101ac5a5c  and w9,w9,#0xfe
7101ac5a60  orr w8,w9,w8
7101ac5a64  strb w8,[x10, #0x58]
7101ac5a68  ldr x8,[x25, #0x8]
7101ac5a6c  cbz x8,0x7101ac5fa4
7101ac5a70  sub x8,x29,#0xe0
7101ac5a74  sub x0,x29,#0xd0
7101ac5a78  adrp x1,0x7104443000
7101ac5a7c  add x1,x1,#0x8d6
7101ac5a80  bl 0x7103776910
7101ac5a84  sub x8,x29,#0xf0
7101ac5a88  sub x0,x29,#0xd0
7101ac5a8c  adrp x1,0x7104454000
7101ac5a90  add x1,x1,#0xba8
7101ac5a94  bl 0x7103776910
7101ac5a98  ldr x8,[sp, #0x68]
7101ac5a9c  ldr w1,[sp, #0x94]
7101ac5aa0  mov w2,#0x1
7101ac5aa4  mov x0,x28
7101ac5aa8  ldr x19,[x8, #0x2f0]
7101ac5aac  bl 0x7103238a70
7101ac5ab0  tst x0,#0xffffffffff
7101ac5ab4  stur x0,[x29, #-0xc0]
7101ac5ab8  b.eq 0x7101ac5ad0
7101ac5abc  ldr x0,[x19]
7101ac5ac0  ldrsw x2,[x0, #0x70]
7101ac5ac4  ldr w3,[x0, #0x68]
7101ac5ac8  sub x1,x29,#0xc0
7101ac5acc  bl 0x710323c4e0
7101ac5ad0  ldr x8,[sp, #0x68]
7101ac5ad4  ldr x0,[x8, #0x2f0]
7101ac5ad8  ldr w2,[sp, #0x94]
7101ac5adc  mov w3,#0x1
7101ac5ae0  mov x1,x28
7101ac5ae4  bl 0x710323f330
7101ac5ae8  ldr x8,[x0, #0x8]
7101ac5aec  ldr x8,[x8]
7101ac5af0  ldur x24,[x29, #-0xd8]
7101ac5af4  cbz x8,0x7101ac5bf4
7101ac5af8  ldr x8,[x24]
7101ac5afc  cbz x8,0x7101ac5bf4
7101ac5b00  ldur x19,[x29, #-0xe8]
7101ac5b04  ldr x8,[x19]
7101ac5b08  cbz x8,0x7101ac5bf4
7101ac5b0c  mov x21,x0
7101ac5b10  mov x0,x24
7101ac5b14  mov x1,x21
7101ac5b18  bl 0x7103778b80
7101ac5b1c  mov x0,x19
7101ac5b20  mov x1,x21
7101ac5b24  bl 0x7103778b80
7101ac5b28  adrp x8,0x710532f000
7101ac5b2c  ldr x8,[x8, #0x730]
7101ac5b30  ldr x22,[x8, #0x8]
7101ac5b34  ldr x0,[x22, #0x2a8]
7101ac5b38  ldr w2,[sp, #0x94]
7101ac5b3c  mov x1,x28
7101ac5b40  bl 0x7103280ec0
7101ac5b44  ldr x8,[x22, #0x2a8]
7101ac5b48  ldr x22,[x8, #0x8]
7101ac5b4c  mov v0.16B,v9.16B
7101ac5b50  mov w21,w0
7101ac5b54  mov x2,#0xcf4f
7101ac5b58  movk x2,#0xae7, LSL #16
7101ac5b5c  mov w1,w21
7101ac5b60  movk x2,#0x12, LSL #32
7101ac5b64  mov x0,x22
7101ac5b68  bl 0x710326ad60
7101ac5b6c  str d0,[sp, #0x20]
7101ac5b70  mov v0.16B,v9.16B
7101ac5b74  mov x2,#0xffd9
7101ac5b78  movk x2,#0x7de0, LSL #16
7101ac5b7c  mov x0,x22
7101ac5b80  mov w1,w21
7101ac5b84  movk x2,#0x12, LSL #32
7101ac5b88  bl 0x710326ad60
7101ac5b8c  str d0,[sp, #0x10]
7101ac5b90  mov v0.16B,v8.16B
7101ac5b94  mov x2,#0xc649
7101ac5b98  movk x2,#0x95a1, LSL #16
7101ac5b9c  mov x0,x22
7101ac5ba0  mov w1,w21
7101ac5ba4  movk x2,#0xf, LSL #32
7101ac5ba8  adrp x22,0x710523d000
7101ac5bac  add x22,x22,#0x9a8
7101ac5bb0  bl 0x710326ad60
7101ac5bb4  ldr q1,[sp, #0x20]
7101ac5bb8  mov v10.16B,v0.16B
7101ac5bbc  movi v0.2D,#0x0
7101ac5bc0  mov v0.S[0x0],v1.S[0x0]
7101ac5bc4  ldr q1,[sp, #0x10]
7101ac5bc8  mov v0.S[0x1],v1.S[0x0]
7101ac5bcc  sub x1,x29,#0xc0
7101ac5bd0  stur q0,[x29, #-0xc0]
7101ac5bd4  mov v0.16B,v10.16B
7101ac5bd8  mov x0,x24
7101ac5bdc  bl 0x7103779770
7101ac5be0  mov v0.16B,v10.16B
7101ac5be4  sub x1,x29,#0xc0
7101ac5be8  mov x0,x19
7101ac5bec  bl 0x7103779770
7101ac5bf0  b 0x7101ac5c10
7101ac5bf4  mov w1,#0x1
7101ac5bf8  mov x0,x24
7101ac5bfc  bl 0x71037790a0
7101ac5c00  ldur x19,[x29, #-0xe8]
7101ac5c04  mov w1,#0x1
7101ac5c08  mov x0,x19
7101ac5c0c  bl 0x71037790a0
7101ac5c10  ldr w8,[sp, #0x84]
7101ac5c14  cmp w27,#0x12
7101ac5c18  csinv w8,w8,wzr,ne
7101ac5c1c  cmp w8,#0x4
7101ac5c20  sturb wzr,[x29, #-0xb8]
7101ac5c24  stur xzr,[x29, #-0xc0]
7101ac5c28  b.cs 0x7101ac5c88
7101ac5c2c  add w1,w8,#0x1
7101ac5c30  add x8,sp,#0x198
7101ac5c34  adrp x0,0x71042a1000
7101ac5c38  add x0,x0,#0x88a
7101ac5c3c  bl 0x71003a4ca0
7101ac5c40  ldp x15,x14,[sp, #0x38]
7101ac5c44  mov x8,xzr
7101ac5c48  sub x13,x29,#0xc0
7101ac5c4c  b 0x7101ac5c58
7101ac5c50  add x8,x8,#0x2
7101ac5c54  strb w9,[x10, #0x9]
7101ac5c58  add x9,x14,x8
7101ac5c5c  ldrb w11,[x9]
7101ac5c60  cbz w11,0x7101ac5e54
7101ac5c64  add w12,w8,#0x1
7101ac5c68  add x10,x13,x8
7101ac5c6c  cmp w12,#0x3f
7101ac5c70  strb w11,[x10, #0x8]
7101ac5c74  b.cs 0x7101ac5e50
7101ac5c78  ldrb w9,[x9, #0x1]
7101ac5c7c  cbnz w9,0x7101ac5c50
7101ac5c80  add x8,x8,#0x1
7101ac5c84  b 0x7101ac5e54
7101ac5c88  ldr w8,[sp, #0x90]
7101ac5c8c  ldp x27,x21,[sp, #0x38]
7101ac5c90  ldr x13,[sp, #0x30]
7101ac5c94  cmp w8,#0x2
7101ac5c98  mov w14,#0x89
7101ac5c9c  b.eq 0x7101ac5d08
7101ac5ca0  cmp w8,#0x1
7101ac5ca4  b.ne 0x7101ac5dac
7101ac5ca8  ldr w8,[sp, #0xa4]
7101ac5cac  add w1,w8,#0x1
7101ac5cb0  add x8,sp,#0x198
7101ac5cb4  adrp x0,0x7104410000
7101ac5cb8  add x0,x0,#0xef8
7101ac5cbc  bl 0x71003a4ca0
7101ac5cc0  mov w14,#0x89
7101ac5cc4  mov x8,xzr
7101ac5cc8  sub x13,x29,#0xc0
7101ac5ccc  b 0x7101ac5cd8
7101ac5cd0  add x8,x8,#0x2
7101ac5cd4  strb w9,[x10, #0x9]
7101ac5cd8  add x9,x21,x8
7101ac5cdc  ldrb w11,[x9]
7101ac5ce0  cbz w11,0x7101ac5e9c
7101ac5ce4  add w12,w8,#0x1
7101ac5ce8  add x10,x13,x8
7101ac5cec  cmp w12,#0x3f
7101ac5cf0  strb w11,[x10, #0x8]
7101ac5cf4  b.cs 0x7101ac5e98
7101ac5cf8  ldrb w9,[x9, #0x1]
7101ac5cfc  cbnz w9,0x7101ac5cd0
7101ac5d00  add x8,x8,#0x1
7101ac5d04  b 0x7101ac5e9c
7101ac5d08  orr x8,xzr,#0xf00000000
7101ac5d0c  str x8,[sp, #0x198]
7101ac5d10  mov x8,#0x6c70
7101ac5d14  movk x8,#0x7961, LSL #16
7101ac5d18  movk x8,#0x7265, LSL #32
7101ac5d1c  movk x8,#0x635f, LSL #48
7101ac5d20  mov x11,#0x6c6f
7101ac5d24  movk x11,#0x726f, LSL #16
7101ac5d28  str x8,[sp, #0x1a0]
7101ac5d2c  orr w10,wzr,#0x70
7101ac5d30  mov x8,x13
7101ac5d34  mov w9,#0x9dc5
7101ac5d38  movk w9,#0x811c, LSL #16
7101ac5d3c  movk x11,#0x635f, LSL #32
7101ac5d40  movk x11,#0x70, LSL #48
7101ac5d44  str x11,[sp, #0x1a8]
7101ac5d48  sub x12,x29,#0xc0
7101ac5d4c  mul w9,w9,w14
7101ac5d50  and w10,w10,#0xff
7101ac5d54  eor w9,w9,w10
7101ac5d58  ldrb w10,[x8], #0x1
7101ac5d5c  cbnz w10,0x7101ac5d4c
7101ac5d60  mov x8,xzr
7101ac5d64  str w9,[sp, #0x198]
7101ac5d68  orr w9,wzr,#0x70
7101ac5d6c  tst w9,#0xff
7101ac5d70  b.eq 0x7101ac5ef0
7101ac5d74  add w10,w8,#0x1
7101ac5d78  add x11,x27,x8
7101ac5d7c  cmp w10,#0x3f
7101ac5d80  sturb w9,[x11, #-0x1]
7101ac5d84  b.cs 0x7101ac5edc
7101ac5d88  ldrb w9,[x13, x8, LSL ]
7101ac5d8c  cbz w9,0x7101ac5eec
7101ac5d90  add x10,x13,x8
7101ac5d94  strb w9,[x27, x8, LSL ]
7101ac5d98  ldrb w9,[x10, #0x1]
7101ac5d9c  add x8,x8,#0x2
7101ac5da0  tst w9,#0xff
7101ac5da4  b.ne 0x7101ac5d74
7101ac5da8  b 0x7101ac5ef0
7101ac5dac  orr x8,xzr,#0xf00000000
7101ac5db0  str x8,[sp, #0x198]
7101ac5db4  mov x8,#0x6c70
7101ac5db8  movk x8,#0x7961, LSL #16
7101ac5dbc  movk x8,#0x7265, LSL #32
7101ac5dc0  movk x8,#0x635f, LSL #48
7101ac5dc4  mov x11,#0x6c6f
7101ac5dc8  movk x11,#0x726f, LSL #16
7101ac5dcc  str x8,[sp, #0x1a0]
7101ac5dd0  orr w10,wzr,#0x70
7101ac5dd4  mov x8,x13
7101ac5dd8  mov w9,#0x9dc5
7101ac5ddc  movk w9,#0x811c, LSL #16
7101ac5de0  movk x11,#0x665f, LSL #32
7101ac5de4  movk x11,#0x70, LSL #48
7101ac5de8  str x11,[sp, #0x1a8]
7101ac5dec  sub x12,x29,#0xc0
7101ac5df0  mul w9,w9,w14
7101ac5df4  and w10,w10,#0xff
7101ac5df8  eor w9,w9,w10
7101ac5dfc  ldrb w10,[x8], #0x1
7101ac5e00  cbnz w10,0x7101ac5df0
7101ac5e04  mov x8,xzr
7101ac5e08  str w9,[sp, #0x198]
7101ac5e0c  orr w9,wzr,#0x70
7101ac5e10  tst w9,#0xff
7101ac5e14  b.eq 0x7101ac5f34
7101ac5e18  add w10,w8,#0x1
7101ac5e1c  add x11,x27,x8
7101ac5e20  cmp w10,#0x3f
7101ac5e24  sturb w9,[x11, #-0x1]
7101ac5e28  b.cs 0x7101ac5ee4
7101ac5e2c  ldrb w9,[x13, x8, LSL ]
7101ac5e30  cbz w9,0x7101ac5f30
7101ac5e34  add x10,x13,x8
7101ac5e38  strb w9,[x27, x8, LSL ]
7101ac5e3c  ldrb w9,[x10, #0x1]
7101ac5e40  add x8,x8,#0x2
7101ac5e44  tst w9,#0xff
7101ac5e48  b.ne 0x7101ac5e18
7101ac5e4c  b 0x7101ac5f34
7101ac5e50  add w8,w8,#0x1
7101ac5e54  add x9,x13,#0x8
7101ac5e58  strb wzr,[x9, w8, UXTW ]
7101ac5e5c  stur w8,[x29, #-0xbc]
7101ac5e60  ldurb w8,[x29, #-0xb8]
7101ac5e64  mov w11,#0x89
7101ac5e68  mov w9,#0x9dc5
7101ac5e6c  movk w9,#0x811c, LSL #16
7101ac5e70  cbz w8,0x7101ac5f70
7101ac5e74  mov x10,x15
7101ac5e78  mov w9,#0x9dc5
7101ac5e7c  movk w9,#0x811c, LSL #16
7101ac5e80  mul w9,w9,w11
7101ac5e84  and w8,w8,#0xff
7101ac5e88  eor w9,w9,w8
7101ac5e8c  ldrb w8,[x10], #0x1
7101ac5e90  cbnz w8,0x7101ac5e80
7101ac5e94  b 0x7101ac5f70
7101ac5e98  add w8,w8,#0x1
7101ac5e9c  add x9,x13,#0x8
7101ac5ea0  strb wzr,[x9, w8, UXTW ]
7101ac5ea4  stur w8,[x29, #-0xbc]
7101ac5ea8  ldurb w8,[x29, #-0xb8]
7101ac5eac  mov w9,#0x9dc5
7101ac5eb0  movk w9,#0x811c, LSL #16
7101ac5eb4  cbz w8,0x7101ac5f70
7101ac5eb8  mov x10,x27
7101ac5ebc  mov w9,#0x9dc5
7101ac5ec0  movk w9,#0x811c, LSL #16
7101ac5ec4  mul w9,w9,w14
7101ac5ec8  and w8,w8,#0xff
7101ac5ecc  eor w9,w9,w8
7101ac5ed0  ldrb w8,[x10], #0x1
7101ac5ed4  cbnz w8,0x7101ac5ec4
7101ac5ed8  b 0x7101ac5f70
7101ac5edc  add w8,w8,#0x1
7101ac5ee0  b 0x7101ac5ef0
7101ac5ee4  add w8,w8,#0x1
7101ac5ee8  b 0x7101ac5f34
7101ac5eec  add x8,x8,#0x1
7101ac5ef0  add x9,x12,#0x8
7101ac5ef4  strb wzr,[x9, w8, UXTW ]
7101ac5ef8  stur w8,[x29, #-0xbc]
7101ac5efc  ldurb w8,[x29, #-0xb8]
7101ac5f00  mov w9,#0x9dc5
7101ac5f04  movk w9,#0x811c, LSL #16
7101ac5f08  cbz w8,0x7101ac5f70
7101ac5f0c  mov x10,x27
7101ac5f10  mov w9,#0x9dc5
7101ac5f14  movk w9,#0x811c, LSL #16
7101ac5f18  mul w9,w9,w14
7101ac5f1c  and w8,w8,#0xff
7101ac5f20  eor w9,w9,w8
7101ac5f24  ldrb w8,[x10], #0x1
7101ac5f28  cbnz w8,0x7101ac5f18
7101ac5f2c  b 0x7101ac5f70
7101ac5f30  add x8,x8,#0x1
7101ac5f34  add x9,x12,#0x8
7101ac5f38  strb wzr,[x9, w8, UXTW ]
7101ac5f3c  stur w8,[x29, #-0xbc]
7101ac5f40  ldurb w8,[x29, #-0xb8]
7101ac5f44  mov w9,#0x9dc5
7101ac5f48  movk w9,#0x811c, LSL #16
7101ac5f4c  cbz w8,0x7101ac5f70
7101ac5f50  mov x10,x27
7101ac5f54  mov w9,#0x9dc5
7101ac5f58  movk w9,#0x811c, LSL #16
7101ac5f5c  mul w9,w9,w14
7101ac5f60  and w8,w8,#0xff
7101ac5f64  eor w9,w9,w8
7101ac5f68  ldrb w8,[x10], #0x1
7101ac5f6c  cbnz w8,0x7101ac5f5c
7101ac5f70  ldr x1,[sp, #0x48]
7101ac5f74  mov v0.16B,v8.16B
7101ac5f78  mov x0,x25
7101ac5f7c  stur w9,[x29, #-0xc0]
7101ac5f80  bl 0x7103778300
7101ac5f84  stp x22,xzr,[x29, #-0xf0]
7101ac5f88  cbz x19,0x7101ac5f94
7101ac5f8c  mov x0,x19
7101ac5f90  bl 0x710392eb40
7101ac5f94  stp x22,xzr,[x29, #-0xe0]
7101ac5f98  cbz x24,0x7101ac5fa4
7101ac5f9c  mov x0,x24
7101ac5fa0  bl 0x710392eb40
7101ac5fa4  ldr w8,[sp, #0x90]
7101ac5fa8  ldr x19,[sp, #0x98]
7101ac5fac  cmp w8,#0x2
7101ac5fb0  b.eq 0x7101ac6028
7101ac5fb4  ldr x24,[sp, #0x60]
7101ac5fb8  ldr x27,[sp, #0x70]
7101ac5fbc  cmp w8,#0x3
7101ac5fc0  b.ne 0x7101ac6084
7101ac5fc4  ldur x0,[x29, #-0x68]
7101ac5fc8  ldr w2,[sp, #0xa4]
7101ac5fcc  sub x8,x29,#0xc0
7101ac5fd0  adrp x1,0x7104291000
7101ac5fd4  add x1,x1,#0x724
7101ac5fd8  bl 0x7103776910
7101ac5fdc  ldur x19,[x29, #-0xb8]
7101ac5fe0  ldr x0,[x19, #0x10]
7101ac5fe4  cbz x0,0x7101ac600c
7101ac5fe8  orr w8,wzr,#0x3c0
7101ac5fec  mul x8,x24,x8
7101ac5ff0  add x8,x27,x8
7101ac5ff4  mov w9,#0x50
7101ac5ff8  madd x8,x23,x9,x8
7101ac5ffc  add x1,x8,#0xb8
7101ac6000  mov w3,#0x1
7101ac6004  mov w2,#0xffffffff
7101ac6008  bl 0x71037a2270
7101ac600c  adrp x28,0x710523d000
7101ac6010  add x28,x28,#0x988
7101ac6014  stp x22,xzr,[x29, #-0xc0]
7101ac6018  cbz x19,0x7101ac6108
7101ac601c  mov x0,x19
7101ac6020  bl 0x710392eb40
7101ac6024  b 0x7101ac6108
7101ac6028  ldur x0,[x29, #-0x68]
7101ac602c  ldr w2,[sp, #0xa4]
7101ac6030  sub x8,x29,#0xc0
7101ac6034  adrp x1,0x7104291000
7101ac6038  add x1,x1,#0x724
7101ac603c  bl 0x7103776910
7101ac6040  ldr w3,[sp, #0x7c]
7101ac6044  sub x0,x29,#0xc0
7101ac6048  mov w2,#0x1
7101ac604c  adrp x1,0x710438c000
7101ac6050  add x1,x1,#0xc0f
7101ac6054  bl 0x710377a280
7101ac6058  ldur x0,[x29, #-0xb8]
7101ac605c  ldr x24,[sp, #0x60]
7101ac6060  ldr x27,[sp, #0x70]
7101ac6064  stp x22,xzr,[x29, #-0xc0]
7101ac6068  cbz x0,0x7101ac6070
7101ac606c  bl 0x710392eb40
7101ac6070  adrp x28,0x710523d000
7101ac6074  add x28,x28,#0x988
7101ac6078  stp x28,xzr,[x29, #-0xd0]
7101ac607c  cbnz x25,0x7101ac6114
7101ac6080  b 0x7101ac612c
7101ac6084  adrp x8,0x710532f000
7101ac6088  ldr x8,[x8, #0x730]
7101ac608c  ldur x0,[x29, #-0x68]
7101ac6090  ldr w2,[sp, #0xa4]
7101ac6094  adrp x1,0x7104291000
7101ac6098  add x1,x1,#0x724
7101ac609c  ldr x21,[x8, #0x8]
7101ac60a0  sub x8,x29,#0xe0
7101ac60a4  bl 0x7103776910
7101ac60a8  ldr x0,[x21, #0x168]
7101ac60ac  ldr w2,[sp, #0x94]
7101ac60b0  mov x1,x28
7101ac60b4  bl 0x7103263540
7101ac60b8  ldr x1,[x21, #0x168]
7101ac60bc  mov w19,w0
7101ac60c0  sub x0,x29,#0xc0
7101ac60c4  mov x2,x28
7101ac60c8  bl 0x7103262310
7101ac60cc  ldr x2,[sp, #0x48]
7101ac60d0  add x8,sp,#0x198
7101ac60d4  adrp x0,0x710439b000
7101ac60d8  add x0,x0,#0x815
7101ac60dc  mov w1,w19
7101ac60e0  bl 0x71003a4ca0
7101ac60e4  ldr x1,[sp, #0x40]
7101ac60e8  sub x0,x29,#0xe0
7101ac60ec  bl 0x710377a120
7101ac60f0  ldur x0,[x29, #-0xd8]
7101ac60f4  stp x22,xzr,[x29, #-0xe0]
7101ac60f8  cbz x0,0x7101ac6100
7101ac60fc  bl 0x710392eb40
7101ac6100  adrp x28,0x710523d000
7101ac6104  add x28,x28,#0x988
7101ac6108  ldr x19,[sp, #0x98]
7101ac610c  stp x28,xzr,[x29, #-0xd0]
7101ac6110  cbz x25,0x7101ac612c
7101ac6114  ldr x0,[x25, #0x18]
7101ac6118  stp x22,xzr,[x25, #0x10]
7101ac611c  cbz x0,0x7101ac6124
7101ac6120  bl 0x710392eb40
7101ac6124  mov x0,x25
7101ac6128  bl 0x710392eb40
7101ac612c  ldr w25,[sp, #0x80]
7101ac6130  stp x28,xzr,[sp, #0xd8]
7101ac6134  cbz x19,0x7101ac6150
7101ac6138  ldr x0,[x19, #0x18]
7101ac613c  stp x22,xzr,[x19, #0x10]
7101ac6140  cbz x0,0x7101ac6148
7101ac6144  bl 0x710392eb40
7101ac6148  mov x0,x19
7101ac614c  bl 0x710392eb40
7101ac6150  orr w13,wzr,#0x3c0
7101ac6154  mov w14,#0x50
7101ac6158  add x23,x23,#0x1
7101ac615c  cmp x23,#0xa
7101ac6160  b.cc 0x7101ac56fc
7101ac6164  ldr x22,[sp, #0x68]
7101ac6168  ldr x23,[sp, #0x8]
7101ac616c  cmp w25,#0x9
7101ac6170  adrp x21,0x710523d000
7101ac6174  add x21,x21,#0x9a8
7101ac6178  b.ne 0x7101ac6220
7101ac617c  ldur x0,[x29, #-0x68]
7101ac6180  adrp x1,0x7104400000
7101ac6184  add x1,x1,#0xf10
7101ac6188  sub x8,x29,#0xc0
7101ac618c  bl 0x7103776910
7101ac6190  adrp x1,0x7104291000
7101ac6194  add x1,x1,#0x710
7101ac6198  sub x0,x29,#0xc0
7101ac619c  bl 0x710377a120
7101ac61a0  ldur x0,[x29, #-0xb8]
7101ac61a4  stp x21,xzr,[x29, #-0xc0]
7101ac61a8  cbz x0,0x7101ac61b0
7101ac61ac  bl 0x710392eb40
7101ac61b0  ldur x0,[x29, #-0x68]
7101ac61b4  adrp x1,0x71042f7000
7101ac61b8  add x1,x1,#0xd5b
7101ac61bc  sub x8,x29,#0xc0
7101ac61c0  bl 0x7103776910
7101ac61c4  adrp x1,0x71043ce000
7101ac61c8  add x1,x1,#0xf4e
7101ac61cc  sub x0,x29,#0xc0
7101ac61d0  bl 0x710377a120
7101ac61d4  ldur x0,[x29, #-0xb8]
7101ac61d8  stp x21,xzr,[x29, #-0xc0]
7101ac61dc  cbnz x0,0x7101ac621c
7101ac61e0  b 0x7101ac6220
7101ac61e4  ldr x22,[sp, #0x68]
7101ac61e8  ldr x23,[sp, #0x8]
7101ac61ec  adrp x28,0x710523d000
7101ac61f0  add x28,x28,#0x988
7101ac61f4  ldr x19,[sp, #0x98]
7101ac61f8  adrp x21,0x710523d000
7101ac61fc  add x21,x21,#0x9a8
7101ac6200  stp x28,xzr,[sp, #0xd8]
7101ac6204  cbz x19,0x7101ac6220
7101ac6208  ldr x0,[x19, #0x18]
7101ac620c  stp x21,xzr,[x19, #0x10]
7101ac6210  cbz x0,0x7101ac6218
7101ac6214  bl 0x710392eb40
7101ac6218  mov x0,x19
7101ac621c  bl 0x710392eb40
7101ac6220  ldr x8,[sp, #0x88]
7101ac6224  ldrb w8,[x8]
7101ac6228  cmp w8,#0x9
7101ac622c  b.eq 0x7101ac62ec
7101ac6230  cmp w8,#0x12
7101ac6234  b.ne 0x7101ac6320
7101ac6238  ldp x9,x8,[sp, #0xe8]
7101ac623c  sub x8,x8,x9
7101ac6240  mov w9,#0xaaab
7101ac6244  movk w9,#0xaaaa, LSL #16
7101ac6248  lsr x8,x8,#0x3
7101ac624c  adrp x1,0x710435b000
7101ac6250  add x1,x1,#0x14e
7101ac6254  add x0,sp,#0x150
7101ac6258  mul w19,w8,w9
7101ac625c  bl 0x710062dc20
7101ac6260  adrp x1,0x710424e000
7101ac6264  add x1,x1,#0x707
7101ac6268  add x0,sp,#0x150
7101ac626c  mov w2,w19
7101ac6270  bl 0x710149ebc0
7101ac6274  orr w8,wzr,#0x3c0
7101ac6278  mul x8,x24,x8
7101ac627c  add x8,x27,x8
7101ac6280  ldr s0,[x8, #0x308]
7101ac6284  adrp x8,0x7104472000
7101ac6288  ldr s1,[x8, #0x598]
7101ac628c  mov w8,#0x3e8
7101ac6290  fdiv s1,s0,s1
7101ac6294  ldur x0,[x29, #-0x68]
7101ac6298  fcvtzs w19,s1
7101ac629c  mul w8,w19,w8
7101ac62a0  scvtf s1,w8
7101ac62a4  sub x8,x29,#0xc0
7101ac62a8  fsub s0,s0,s1
7101ac62ac  adrp x1,0x7104308000
7101ac62b0  add x1,x1,#0x68e
7101ac62b4  fcvtzs w20,s0
7101ac62b8  bl 0x7103776910
7101ac62bc  adrp x1,0x710438c000
7101ac62c0  add x1,x1,#0x3fc
7101ac62c4  sub x0,x29,#0xc0
7101ac62c8  mov w2,#0x2
7101ac62cc  mov w3,w19
7101ac62d0  mov w4,w20
7101ac62d4  bl 0x710377a280
7101ac62d8  ldur x0,[x29, #-0xb8]
7101ac62dc  stp x21,xzr,[x29, #-0xc0]
7101ac62e0  cbz x0,0x7101ac636c
7101ac62e4  bl 0x710392eb40
7101ac62e8  b 0x7101ac636c
7101ac62ec  orr w8,wzr,#0x3c0
7101ac62f0  mul x8,x24,x8
7101ac62f4  add x8,x27,x8
7101ac62f8  ldrb w8,[x8, #0x311]
7101ac62fc  adrp x9,0x710435b000
7101ac6300  add x9,x9,#0x13c
7101ac6304  adrp x10,0x7104421000
7101ac6308  add x10,x10,#0xd9a
7101ac630c  cmp w8,#0x0
7101ac6310  csel x1,x10,x9,eq
7101ac6314  add x0,sp,#0x150
7101ac6318  bl 0x710062dc20
7101ac631c  b 0x7101ac636c
7101ac6320  ldp x9,x8,[sp, #0xe8]
7101ac6324  sub x8,x8,x9
7101ac6328  adrp x9,0x71043be000
7101ac632c  add x9,x9,#0x1d0
7101ac6330  lsr x8,x8,#0x3
7101ac6334  mov w11,#0xaaab
7101ac6338  movk w11,#0xaaaa, LSL #16
7101ac633c  mul w19,w8,w11
7101ac6340  adrp x10,0x7104454000
7101ac6344  add x10,x10,#0x570
7101ac6348  cmp w19,#0x5
7101ac634c  csel x1,x10,x9,lt
7101ac6350  add x0,sp,#0x150
7101ac6354  bl 0x710062dc20
7101ac6358  adrp x1,0x710424e000
7101ac635c  add x1,x1,#0x707
7101ac6360  add x0,sp,#0x150
7101ac6364  mov w2,w19
7101ac6368  bl 0x710149ebc0
7101ac636c  ldr x8,[x22, #0x300]
7101ac6370  ldrsw x9,[x22, #0x2f8]
7101ac6374  ldr x10,[x8]
7101ac6378  orr w8,wzr,#0x3c0
7101ac637c  madd x13,x9,x8,x10
7101ac6380  ldr s0,[x13, #0x9c]
7101ac6384  ldp w8,w11,[x13, #0x70]
7101ac6388  ldrb w13,[x13, #0x6c]
7101ac638c  cmp w8,#0x0
7101ac6390  cset w8,ne
7101ac6394  cmp w11,#0x0
7101ac6398  cset w11,ne
7101ac639c  fcmp s0,#0.0
7101ac63a0  cset w12,gt
7101ac63a4  cmp w13,#0x12
7101ac63a8  b.ne 0x7101ac6430
7101ac63ac  orr w8,wzr,#0x3c0
7101ac63b0  madd x8,x9,x8,x10
7101ac63b4  ldrb w9,[x8, #0x90]
7101ac63b8  ldrb w10,[x8, #0xe0]
7101ac63bc  cmp w9,#0x1
7101ac63c0  mov w11,#0x2
7101ac63c4  cset w9,eq
7101ac63c8  csinc w11,w11,wzr,eq
7101ac63cc  cmp w10,#0x1
7101ac63d0  ldrb w10,[x8, #0x130]
7101ac63d4  csel w9,w9,w11,ne
7101ac63d8  cmp w10,#0x1
7101ac63dc  ldrb w10,[x8, #0x180]
7101ac63e0  cinc w9,w9,eq
7101ac63e4  cmp w10,#0x1
7101ac63e8  ldrb w10,[x8, #0x1d0]
7101ac63ec  cinc w9,w9,eq
7101ac63f0  cmp w10,#0x1
7101ac63f4  ldrb w10,[x8, #0x220]
7101ac63f8  cinc w9,w9,eq
7101ac63fc  cmp w10,#0x1
7101ac6400  ldrb w10,[x8, #0x270]
7101ac6404  ldrb w8,[x8, #0x2c0]
7101ac6408  cinc w9,w9,eq
7101ac640c  cmp w10,#0x1
7101ac6410  cinc w9,w9,eq
7101ac6414  cmp w8,#0x1
7101ac6418  cinc w8,w9,eq
7101ac641c  cmp w8,#0x2
7101ac6420  mov w8,#0x8
7101ac6424  mov w9,#0x10
7101ac6428  csel w8,w9,w8,eq
7101ac642c  b 0x7101ac6438
7101ac6430  bfm w8,w11,#0x1f,#0x0
7101ac6434  bfm w8,w12,#0x1e,#0x0
7101ac6438  cmp w8,#0x10
7101ac643c  ccmp w8,#0x8,#0x4,ne
7101ac6440  b.ne 0x7101ac6454
7101ac6444  ldr x0,[x22, #0x238]
7101ac6448  adrp x1,0x710437c000
7101ac644c  add x1,x1,#0xda
7101ac6450  b 0x7101ac6460
7101ac6454  ldr x0,[x22, #0x238]
7101ac6458  adrp x1,0x71043df000
7101ac645c  add x1,x1,#0xb87
7101ac6460  fmov s0,0x3f800000
7101ac6464  bl 0x7103778300
7101ac6468  adrp x1,0x7104443000
7101ac646c  add x1,x1,#0x8ee
7101ac6470  add x8,sp,#0xc8
7101ac6474  mov x0,x23
7101ac6478  bl 0x7103776910
7101ac647c  adrp x1,0x710433a000
7101ac6480  add x1,x1,#0x373
7101ac6484  add x8,sp,#0xb8
7101ac6488  mov x0,x23
7101ac648c  bl 0x7103776910
7101ac6490  ldr x8,[x22, #0x300]
7101ac6494  ldrsw x9,[x22, #0x2f8]
7101ac6498  orr w10,wzr,#0x3c0
7101ac649c  add x0,sp,#0xc8
7101ac64a0  ldr x8,[x8]
7101ac64a4  madd x8,x9,x10,x8
7101ac64a8  add x2,x8,#0x8
7101ac64ac  add x1,sp,#0xb8
7101ac64b0  bl 0x7101ac6fd0
7101ac64b4  ldr x0,[sp, #0xc0]
7101ac64b8  stp x21,xzr,[sp, #0xb8]
7101ac64bc  cbz x0,0x7101ac64c4
7101ac64c0  bl 0x710392eb40
7101ac64c4  ldr x0,[sp, #0xd0]
7101ac64c8  stp x21,xzr,[sp, #0xc8]
7101ac64cc  cbz x0,0x7101ac64d4
7101ac64d0  bl 0x710392eb40
7101ac64d4  adrp x1,0x7104319000
7101ac64d8  add x1,x1,#0x40
7101ac64dc  add x8,sp,#0xa8
7101ac64e0  mov x0,x23
7101ac64e4  bl 0x7103776640
7101ac64e8  add x1,sp,#0xa8
7101ac64ec  mov x0,x22
7101ac64f0  bl 0x7101ac71e0
7101ac64f4  ldr x19,[sp, #0xb0]
7101ac64f8  stp x28,xzr,[sp, #0xa8]
7101ac64fc  cbz x19,0x7101ac6518
7101ac6500  ldr x0,[x19, #0x18]
7101ac6504  stp x21,xzr,[x19, #0x10]
7101ac6508  cbz x0,0x7101ac6510
7101ac650c  bl 0x710392eb40
7101ac6510  mov x0,x19
7101ac6514  bl 0x710392eb40
7101ac6518  ldr x0,[x22, #0x2e8]
7101ac651c  fmov s0,0x3f800000
7101ac6520  add x8,sp,#0x150
7101ac6524  add x1,x8,#0x8
7101ac6528  bl 0x7103778300
7101ac652c  orr w8,wzr,#0x3c0
7101ac6530  mul x8,x24,x8
7101ac6534  add x8,x27,x8
7101ac6538  ldur x0,[x29, #-0x68]
7101ac653c  adrp x1,0x71042e7000
7101ac6540  add x1,x1,#0x3ae
7101ac6544  ldr w19,[x8, #0x10]
7101ac6548  sub x8,x29,#0xc0
7101ac654c  bl 0x7103776910
7101ac6550  ubfx w3,w19,#0xc,#0x4
7101ac6554  ubfx w4,w19,#0x5,#0x6
7101ac6558  and w5,w19,#0x1f
7101ac655c  adrp x1,0x7104329000
7101ac6560  add x1,x1,#0xafb
7101ac6564  sub x0,x29,#0xc0
7101ac6568  orr w2,wzr,#0x3
7101ac656c  bl 0x710377a280
7101ac6570  ldur x0,[x29, #-0xb8]
7101ac6574  stp x21,xzr,[x29, #-0xc0]
7101ac6578  cbz x0,0x7101ac6580
7101ac657c  bl 0x710392eb40
7101ac6580  ldr x0,[sp, #0xe8]
7101ac6584  cbz x0,0x7101ac6590
7101ac6588  str x0,[sp, #0xf0]
7101ac658c  bl 0x710392eb40
7101ac6590  ldr x19,[sp, #0x148]
7101ac6594  stp x28,xzr,[sp, #0x140]
7101ac6598  cbz x19,0x7101ac65b4
7101ac659c  ldr x0,[x19, #0x18]
7101ac65a0  stp x21,xzr,[x19, #0x10]
7101ac65a4  cbz x0,0x7101ac65ac
7101ac65a8  bl 0x710392eb40
7101ac65ac  mov x0,x19
7101ac65b0  bl 0x710392eb40
7101ac65b4  add sp,sp,#0x260
7101ac65b8  ldp d9,d8,[sp, #0x10]
7101ac65bc  ldp x29,x30,[sp, #0x70]
7101ac65c0  ldp x20,x19,[sp, #0x60]
7101ac65c4  ldp x22,x21,[sp, #0x50]
7101ac65c8  ldp x24,x23,[sp, #0x40]
7101ac65cc  ldp x26,x25,[sp, #0x30]
7101ac65d0  ldp x28,x27,[sp, #0x20]
7101ac65d4  ldr d10,[sp], #0x80
7101ac65d8  ret
7101ac65dc  add x0,sp,#0xe8
7101ac65e0  bl 0x71039c0c00
7101ac65e4  bl 0x71039c1330
