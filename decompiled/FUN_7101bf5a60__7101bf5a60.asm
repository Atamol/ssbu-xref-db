// addr:      7101bf5a60
// offset:    0x1bf5a60
// name:      FUN_7101bf5a60
// mangled:   
// size:      2848

7101bf5a60  stp x28,x27,[sp, #-0x60]!
7101bf5a64  stp x26,x25,[sp, #0x10]
7101bf5a68  stp x24,x23,[sp, #0x20]
7101bf5a6c  stp x22,x21,[sp, #0x30]
7101bf5a70  stp x20,x19,[sp, #0x40]
7101bf5a74  stp x29,x30,[sp, #0x50]
7101bf5a78  add x29,sp,#0x50
7101bf5a7c  sub sp,sp,#0x270
7101bf5a80  ldr x8,[x0, #0x138]
7101bf5a84  ldrb w9,[x8, #0x316]
7101bf5a88  mov x19,x0
7101bf5a8c  cbz w9,0x7101bf5a9c
7101bf5a90  mov w8,#0x1
7101bf5a94  strb w8,[x19, #0x4e8]
7101bf5a98  b 0x7101bf6424
7101bf5a9c  ldrb w9,[x19, #0x4e8]
7101bf5aa0  cbnz w9,0x7101bf6424
7101bf5aa4  ldr x9,[x19, #0x128]
7101bf5aa8  ldr x9,[x9]
7101bf5aac  ldr x9,[x9]
7101bf5ab0  ldr x9,[x9, #0x600]
7101bf5ab4  ldr w20,[x8, #0x2a4]
7101bf5ab8  ldrb w10,[x9, #0x4aa]
7101bf5abc  cbz w10,0x7101bf5ad0
7101bf5ac0  ldrb w10,[x9, #0x1b0]
7101bf5ac4  tbnz w10,#0x1,0x7101bf5ad8
7101bf5ac8  ldrb w9,[x9, #0x1b4]
7101bf5acc  tbnz w9,#0x1,0x7101bf5ae8
7101bf5ad0  mov w24,wzr
7101bf5ad4  b 0x7101bf5d88
7101bf5ad8  mov w9,#0xffffffff
7101bf5adc  ldrb w10,[x19, #0x4e0]
7101bf5ae0  cbnz w10,0x7101bf5b34
7101bf5ae4  b 0x7101bf5af4
7101bf5ae8  mov w9,#0x1
7101bf5aec  ldrb w10,[x19, #0x4e0]
7101bf5af0  cbnz w10,0x7101bf5b34
7101bf5af4  ldr x10,[x19, #0x488]
7101bf5af8  ldr x10,[x10, x20, LSL #0x3]
7101bf5afc  add x11,x19,#0x4d4
7101bf5b00  cmn w20,#0x1
7101bf5b04  str x10,[x11]
7101bf5b08  b.eq 0x7101bf5b18
7101bf5b0c  ldr w10,[x8, #0x28c]
7101bf5b10  sdiv w10,w20,w10
7101bf5b14  b 0x7101bf5b1c
7101bf5b18  mov w10,#0xffffffff
7101bf5b1c  scvtf s0,w10
7101bf5b20  ldr s1,[x8, #0x274]
7101bf5b24  fmul s0,s1,s0
7101bf5b28  ldr s1,[x8, #0x260]
7101bf5b2c  fsub s0,s0,s1
7101bf5b30  str s0,[x19, #0x4dc]
7101bf5b34  ldr w8,[x19, #0x4d0]
7101bf5b38  add w8,w8,w9
7101bf5b3c  mov w9,#0x5556
7101bf5b40  movk w9,#0x5555, LSL #16
7101bf5b44  smull x9,w8,w9
7101bf5b48  lsr x10,x9,#0x3f
7101bf5b4c  lsr x9,x9,#0x20
7101bf5b50  add w9,w9,w10
7101bf5b54  add w9,w9,w9, LSL #0x1
7101bf5b58  sub w8,w8,w9
7101bf5b5c  asr w9,w8,#0x1f
7101bf5b60  and w9,w9,#0x3
7101bf5b64  add w8,w8,w9
7101bf5b68  mov x0,x19
7101bf5b6c  str w8,[x19, #0x4d0]
7101bf5b70  bl 0x7101bf69c0
7101bf5b74  ldr x9,[x19, #0x488]
7101bf5b78  ldr x8,[x19, #0x490]
7101bf5b7c  subs x10,x8,x9
7101bf5b80  b.eq 0x7101bf5bc0
7101bf5b84  ldr w12,[x19, #0x4d4]
7101bf5b88  asr x13,x10,#0x3
7101bf5b8c  mov x11,x9
7101bf5b90  cmp x13,#0x0
7101bf5b94  cinc x14,x13,lt
7101bf5b98  asr x14,x14,#0x1
7101bf5b9c  add x15,x11,x14, LSL #0x3
7101bf5ba0  ldr w16,[x15], #0x8
7101bf5ba4  mvn x17,x14
7101bf5ba8  add x13,x13,x17
7101bf5bac  cmp w16,w12
7101bf5bb0  csel x13,x13,x14,lt
7101bf5bb4  csel x11,x15,x11,lt
7101bf5bb8  cbnz x13,0x7101bf5b90
7101bf5bbc  b 0x7101bf5bc4
7101bf5bc0  mov x11,x9
7101bf5bc4  lsr x10,x10,#0x3
7101bf5bc8  sub x9,x11,x9
7101bf5bcc  sub w10,w10,#0x1
7101bf5bd0  lsr x9,x9,#0x3
7101bf5bd4  cmp x11,x8
7101bf5bd8  csel w20,w10,w9,eq
7101bf5bdc  add x21,x19,#0x138
7101bf5be0  cmn w20,#0x1
7101bf5be4  b.eq 0x7101bf5bf8
7101bf5be8  ldr x8,[x21]
7101bf5bec  ldr w8,[x8, #0x28c]
7101bf5bf0  sdiv w8,w20,w8
7101bf5bf4  b 0x7101bf5bfc
7101bf5bf8  mov w8,#0xffffffff
7101bf5bfc  scvtf s0,w8
7101bf5c00  ldr x8,[x19, #0x138]
7101bf5c04  ldr s1,[x8, #0x274]
7101bf5c08  fmul s0,s1,s0
7101bf5c0c  ldr s1,[x19, #0x4dc]
7101bf5c10  fsub s0,s0,s1
7101bf5c14  ldr s2,[x8, #0x26c]
7101bf5c18  ldr s1,[x8, #0x268]
7101bf5c1c  fcmp s2,s0
7101bf5c20  fcsel s2,s2,s0,mi
7101bf5c24  fcmp s1,s0
7101bf5c28  fcsel s0,s1,s2,gt
7101bf5c2c  orr w9,wzr,#0x3f800000
7101bf5c30  str x9,[x8, #0x248]
7101bf5c34  str s0,[x8, #0x264]
7101bf5c38  str s0,[x8, #0x260]
7101bf5c3c  ldr x22,[x19, #0x138]
7101bf5c40  add x0,sp,#0xf0
7101bf5c44  bl 0x7103763c70
7101bf5c48  ldr x8,[x22]
7101bf5c4c  ldr x8,[x8, #0x18]
7101bf5c50  add x1,sp,#0xf0
7101bf5c54  mov x0,x22
7101bf5c58  blr x8
7101bf5c5c  ldr x0,[sp, #0xf8]
7101bf5c60  adrp x8,0x710523d000
7101bf5c64  add x8,x8,#0x7d8
7101bf5c68  stp x8,xzr,[sp, #0xf0]
7101bf5c6c  cbz x0,0x7101bf5c74
7101bf5c70  bl 0x710392eb40
7101bf5c74  mov w3,#0x1
7101bf5c78  mov x0,x21
7101bf5c7c  mov w1,w20
7101bf5c80  mov w2,wzr
7101bf5c84  mov w22,#0x1
7101bf5c88  bl 0x7103783c10
7101bf5c8c  ldr x0,[x19, #0x138]
7101bf5c90  ldr x8,[x0]
7101bf5c94  ldr x8,[x8, #0x70]
7101bf5c98  mov w1,#0x1
7101bf5c9c  blr x8
7101bf5ca0  strb w22,[x19, #0x4e0]
7101bf5ca4  adrp x8,0x710532f000
7101bf5ca8  ldr x8,[x8, #0x8d0]
7101bf5cac  ldr x0,[x8, #0x8]
7101bf5cb0  ldp x8,x9,[x0, #0x40]
7101bf5cb4  sub x9,x9,x8
7101bf5cb8  asr x9,x9,#0x3
7101bf5cbc  cmp x9,#0x9
7101bf5cc0  b.cc 0x7101bf5cd4
7101bf5cc4  ldr x21,[x8, #0x40]
7101bf5cc8  ldrb w8,[x0, #0x191]
7101bf5ccc  cbnz w8,0x7101bf5d50
7101bf5cd0  b 0x7101bf5ce0
7101bf5cd4  mov x21,xzr
7101bf5cd8  ldrb w8,[x0, #0x191]
7101bf5cdc  cbnz w8,0x7101bf5d50
7101bf5ce0  mov w2,#0x4
7101bf5ce4  mov x1,x21
7101bf5ce8  bl 0x7103313f20
7101bf5cec  tbz w0,#0x0,0x7101bf5d50
7101bf5cf0  add x0,sp,#0x98
7101bf5cf4  mov x1,x21
7101bf5cf8  bl 0x71024076d0
7101bf5cfc  ldr x8,[sp, #0xa8]
7101bf5d00  adrp x9,0x7104f73000
7101bf5d04  add x9,x9,#0xd50
7101bf5d08  str x9,[sp, #0xa0]
7101bf5d0c  cbz x8,0x7101bf5d7c
7101bf5d10  adrp x8,0x7106dd5000
7101bf5d14  ldrb w8,[x8, #0x3a8]
7101bf5d18  cmp w8,#0x1
7101bf5d1c  b.ne 0x7101bf5d7c
7101bf5d20  adrp x9,0x7106dd5000
7101bf5d24  ldr w8,[sp, #0xb0]
7101bf5d28  ldr w9,[x9, #0x3ac]
7101bf5d2c  cmp w8,w9
7101bf5d30  b.ne 0x7101bf5d7c
7101bf5d34  ldr x8,[sp, #0xa8]
7101bf5d38  ldr wzr,[x8, #0x38]!
7101bf5d3c  ldaxr w9,[x8]
7101bf5d40  sub w9,w9,#0x1
7101bf5d44  stlxr w10,w9,[x8]
7101bf5d48  cbnz w10,0x7101bf5d3c
7101bf5d4c  b 0x7101bf5d7c
7101bf5d50  mov x8,#0x650000000000
7101bf5d54  movk x8,#0x87, LSL #48
7101bf5d58  strb wzr,[sp, #0xb8]
7101bf5d5c  stp xzr,x8,[sp, #0xa8]
7101bf5d60  mov x8,#-0x1
7101bf5d64  stp x8,xzr,[sp, #0xc0]
7101bf5d68  adrp x8,0x7104f73000
7101bf5d6c  add x8,x8,#0xd50
7101bf5d70  str wzr,[sp, #0x98]
7101bf5d74  str xzr,[sp, #0xd0]
7101bf5d78  str x8,[sp, #0xa0]
7101bf5d7c  mov w24,#0x1
7101bf5d80  str xzr,[sp, #0xa8]
7101bf5d84  strb wzr,[sp, #0xb8]
7101bf5d88  ldr x8,[x19, #0x488]
7101bf5d8c  ldr x20,[x8, w20, UXTW #0x3]
7101bf5d90  ldr w8,[x19, #0x4e4]
7101bf5d94  lsr x25,x20,#0x20
7101bf5d98  cmp w8,w25
7101bf5d9c  b.ne 0x7101bf5da8
7101bf5da0  cbnz w24,0x7101bf63ac
7101bf5da4  b 0x7101bf6424
7101bf5da8  adrp x8,0x710532f000
7101bf5dac  ldr x8,[x8, #0x730]
7101bf5db0  ldr x26,[x8, #0x8]
7101bf5db4  mov x21,#0xff0000000000
7101bf5db8  movk x21,#0xf8ff, LSL #48
7101bf5dbc  tbnz w25,#0x1f,0x7101bf5dec
7101bf5dc0  ldr x9,[x19, #0x4f8]
7101bf5dc4  ldr x8,[x19, #0x4f0]
7101bf5dc8  sub x9,x9,x8
7101bf5dcc  asr x9,x9,#0x3
7101bf5dd0  sub w10,w9,#0x1
7101bf5dd4  cmp w10,w25
7101bf5dd8  b.lt 0x7101bf5dec
7101bf5ddc  asr x10,x20,#0x20
7101bf5de0  cmp x9,x10
7101bf5de4  b.ls 0x7101bf6578
7101bf5de8  ldr x21,[x8, x10, LSL #0x3]
7101bf5dec  ldr x1,[x26, #0x3b8]
7101bf5df0  add x0,sp,#0x50
7101bf5df4  mov x2,x21
7101bf5df8  add x22,sp,#0x50
7101bf5dfc  bl 0x71032b5d50
7101bf5e00  add x0,x19,#0x178
7101bf5e04  adrp x1,0x710424e000
7101bf5e08  add x1,x1,#0x707
7101bf5e0c  mov w2,w20
7101bf5e10  strb wzr,[sp, #0x49]
7101bf5e14  strb wzr,[sp, #0x8]
7101bf5e18  bl 0x710377a4a0
7101bf5e1c  add x22,x22,#0x8
7101bf5e20  adrp x1,0x7104401000
7101bf5e24  add x1,x1,#0x430
7101bf5e28  add x0,sp,#0x8
7101bf5e2c  mov x2,x22
7101bf5e30  add x23,x19,#0x188
7101bf5e34  bl 0x71014c8900
7101bf5e38  add x1,sp,#0x8
7101bf5e3c  mov x0,x23
7101bf5e40  bl 0x710377a120
7101bf5e44  ldr x0,[x26, #0x3b8]
7101bf5e48  mov x1,x21
7101bf5e4c  add x23,x19,#0x198
7101bf5e50  bl 0x71032b5800
7101bf5e54  tst x0,#0xffffffffff
7101bf5e58  lsr x8,x0,#0x38
7101bf5e5c  mov w9,#0xc1
7101bf5e60  ccmp x8,x9,#0x0,ne
7101bf5e64  mov w8,#0x1
7101bf5e68  cinc x8,x8,eq
7101bf5e6c  orr w9,wzr,#0x18
7101bf5e70  madd x9,x8,x9,x19
7101bf5e74  ldrb w10,[x9]
7101bf5e78  tbnz w10,#0x0,0x7101bf5e84
7101bf5e7c  add x1,x9,#0x1
7101bf5e80  b 0x7101bf5e90
7101bf5e84  orr w9,wzr,#0x18
7101bf5e88  madd x8,x8,x9,x19
7101bf5e8c  ldr x1,[x8, #0x10]
7101bf5e90  mov x0,x23
7101bf5e94  bl 0x710377a120
7101bf5e98  add x0,x19,#0x3f8
7101bf5e9c  mov x2,x22
7101bf5ea0  bl 0x7101bf6e80
7101bf5ea4  ldrsw x8,[x19, #0x32c]
7101bf5ea8  cmp w8,#0x13
7101bf5eac  b.cs 0x7101bf656c
7101bf5eb0  add x8,x19,x8, LSL #0x2
7101bf5eb4  mov w21,#0x1
7101bf5eb8  str w21,[x8, #0x2e0]
7101bf5ebc  mov x10,#0x41800000
7101bf5ec0  movk x10,#0x4248, LSL #48
7101bf5ec4  str w25,[x19, #0x4e4]
7101bf5ec8  add x22,sp,#0xf0
7101bf5ecc  orr x25,xzr,#0x3333333333333333
7101bf5ed0  asr x9,x20,#0x20
7101bf5ed4  ldr x8,[x19, #0x4a0]
7101bf5ed8  stp xzr,x10,[sp, #0xf0]
7101bf5edc  mov x10,#0x3f800000
7101bf5ee0  movk x10,#0x101, LSL #32
7101bf5ee4  movk x10,#0x1, LSL #48
7101bf5ee8  str x10,[sp, #0x100]
7101bf5eec  orr w10,wzr,#0x18
7101bf5ef0  add x0,sp,#0xf0
7101bf5ef4  movk x25,#0x333, LSL #48
7101bf5ef8  strh wzr,[sp, #0x108]
7101bf5efc  strb w21,[sp, #0x10a]
7101bf5f00  madd x23,x9,x10,x8
7101bf5f04  str xzr,[sp, #0x140]
7101bf5f08  str xzr,[sp, #0x170]
7101bf5f0c  str xzr,[sp, #0x1a0]
7101bf5f10  str xzr,[sp, #0x1d0]
7101bf5f14  str xzr,[sp, #0x200]
7101bf5f18  strb wzr,[sp, #0x111]
7101bf5f1c  sturh wzr,[x22, #0x1f]
7101bf5f20  stur wzr,[x22, #0x1b]
7101bf5f24  bl 0x710337e790
7101bf5f28  str w21,[sp, #0xf0]
7101bf5f2c  str wzr,[sp, #0x104]
7101bf5f30  mov x27,x23
7101bf5f34  sturh w21,[x22, #0x19]
7101bf5f38  orr x26,xzr,#-0x3333333333333334
7101bf5f3c  movk x26,#0xcccd
7101bf5f40  strb w21,[sp, #0x10b]
7101bf5f44  strb w21,[sp, #0x111]
7101bf5f48  ldr x8,[x27, #0x8]!
7101bf5f4c  ldr x9,[x23]
7101bf5f50  stp xzr,xzr,[sp, #0xe0]
7101bf5f54  sub x8,x8,x9
7101bf5f58  mov w9,#0xcccd
7101bf5f5c  movk w9,#0xcccc, LSL #16
7101bf5f60  lsr x8,x8,#0x4
7101bf5f64  mul w8,w8,w9
7101bf5f68  str w8,[sp, #0xf4]
7101bf5f6c  str xzr,[sp, #0xd8]
7101bf5f70  ldr x8,[x27]
7101bf5f74  ldr x9,[x23]
7101bf5f78  subs x21,x8,x9
7101bf5f7c  b.eq 0x7101bf6038
7101bf5f80  asr x8,x21,#0x4
7101bf5f84  mul x28,x8,x26
7101bf5f88  cmp x28,x25
7101bf5f8c  b.hi 0x7101bf6570
7101bf5f90  mov w0,#0x10
7101bf5f94  mov x1,x21
7101bf5f98  bl 0x710392e290
7101bf5f9c  mov x22,x0
7101bf5fa0  cbnz x0,0x7101bf5fe8
7101bf5fa4  adrp x8,0x7105332000
7101bf5fa8  ldr x0,[x8, #0xf00]
7101bf5fac  cbz x0,0x7101bf5fe4
7101bf5fb0  stur wzr,[x29, #-0x80]
7101bf5fb4  stur x21,[x29, #-0xb0]
7101bf5fb8  ldr x8,[x0]
7101bf5fbc  ldr x8,[x8, #0x30]
7101bf5fc0  sub x1,x29,#0x80
7101bf5fc4  sub x2,x29,#0xb0
7101bf5fc8  blr x8
7101bf5fcc  tbz w0,#0x0,0x7101bf5fe4
7101bf5fd0  mov w0,#0x10
7101bf5fd4  mov x1,x21
7101bf5fd8  bl 0x710392e290
7101bf5fdc  mov x22,x0
7101bf5fe0  cbnz x0,0x7101bf5fe8
7101bf5fe4  mov x22,xzr
7101bf5fe8  mov w8,#0x50
7101bf5fec  madd x8,x28,x8,x22
7101bf5ff0  str x8,[sp, #0xe8]
7101bf5ff4  stp x22,x22,[sp, #0xd8]
7101bf5ff8  ldr x21,[x23]
7101bf5ffc  ldr x23,[x27]
7101bf6000  cmp x21,x23
7101bf6004  b.eq 0x7101bf6044
7101bf6008  mov x0,x22
7101bf600c  mov x1,x21
7101bf6010  bl 0x71037a46b0
7101bf6014  ldr x8,[sp, #0xe0]
7101bf6018  add x21,x21,#0x50
7101bf601c  cmp x23,x21
7101bf6020  add x22,x8,#0x50
7101bf6024  str x22,[sp, #0xe0]
7101bf6028  b.ne 0x7101bf6008
7101bf602c  mov x27,x22
7101bf6030  ldr x22,[sp, #0xd8]
7101bf6034  b 0x7101bf6048
7101bf6038  mov x22,xzr
7101bf603c  mov x27,xzr
7101bf6040  b 0x7101bf6048
7101bf6044  mov x27,x22
7101bf6048  mov w0,#0x10
7101bf604c  mov w1,#0x20
7101bf6050  bl 0x710392e290
7101bf6054  mov x21,x0
7101bf6058  cbnz x0,0x7101bf60a4
7101bf605c  adrp x8,0x7105332000
7101bf6060  ldr x0,[x8, #0xf00]
7101bf6064  cbz x0,0x7101bf60a0
7101bf6068  mov w8,#0x20
7101bf606c  stur wzr,[x29, #-0x80]
7101bf6070  sub x1,x29,#0x80
7101bf6074  stur x8,[x29, #-0xb0]
7101bf6078  ldr x8,[x0]
7101bf607c  ldr x8,[x8, #0x30]
7101bf6080  sub x2,x29,#0xb0
7101bf6084  blr x8
7101bf6088  tbz w0,#0x0,0x7101bf60a0
7101bf608c  mov w0,#0x10
7101bf6090  mov w1,#0x20
7101bf6094  bl 0x710392e290
7101bf6098  mov x21,x0
7101bf609c  cbnz x0,0x7101bf60a4
7101bf60a0  mov x21,xzr
7101bf60a4  adrp x8,0x71050ac000
7101bf60a8  add x8,x8,#0xa70
7101bf60ac  mov x0,x21
7101bf60b0  str x8,[x21]
7101bf60b4  subs x23,x27,x22
7101bf60b8  str xzr,[x0, #0x8]!
7101bf60bc  stp xzr,xzr,[x21, #0x10]
7101bf60c0  b.eq 0x7101bf616c
7101bf60c4  asr x8,x23,#0x4
7101bf60c8  mul x26,x8,x26
7101bf60cc  cmp x26,x25
7101bf60d0  b.hi 0x7101bf6574
7101bf60d4  mov w0,#0x10
7101bf60d8  mov x1,x23
7101bf60dc  bl 0x710392e290
7101bf60e0  cbnz x0,0x7101bf6124
7101bf60e4  adrp x8,0x7105332000
7101bf60e8  ldr x0,[x8, #0xf00]
7101bf60ec  cbz x0,0x7101bf6120
7101bf60f0  stur wzr,[x29, #-0x80]
7101bf60f4  stur x23,[x29, #-0xb0]
7101bf60f8  ldr x8,[x0]
7101bf60fc  ldr x8,[x8, #0x30]
7101bf6100  sub x1,x29,#0x80
7101bf6104  sub x2,x29,#0xb0
7101bf6108  blr x8
7101bf610c  tbz w0,#0x0,0x7101bf6120
7101bf6110  mov w0,#0x10
7101bf6114  mov x1,x23
7101bf6118  bl 0x710392e290
7101bf611c  cbnz x0,0x7101bf6124
7101bf6120  mov x0,xzr
7101bf6124  mov w8,#0x50
7101bf6128  madd x8,x26,x8,x0
7101bf612c  cmp x22,x27
7101bf6130  stp x0,x0,[x21, #0x8]
7101bf6134  str x8,[x21, #0x18]
7101bf6138  b.eq 0x7101bf6164
7101bf613c  mov x1,x22
7101bf6140  bl 0x71037a46b0
7101bf6144  ldr x8,[x21, #0x10]
7101bf6148  add x22,x22,#0x50
7101bf614c  cmp x27,x22
7101bf6150  add x0,x8,#0x50
7101bf6154  str x0,[x21, #0x10]
7101bf6158  b.ne 0x7101bf613c
7101bf615c  ldr x8,[x21]
7101bf6160  b 0x7101bf616c
7101bf6164  adrp x8,0x71050ac000
7101bf6168  add x8,x8,#0xa70
7101bf616c  ldr x8,[x8, #0x10]
7101bf6170  mov x0,x21
7101bf6174  add x22,x19,#0x260
7101bf6178  blr x8
7101bf617c  sub x23,x29,#0xb0
7101bf6180  mov x8,x0
7101bf6184  stur x0,[x29, #-0x90]
7101bf6188  cmp x22,x23
7101bf618c  b.eq 0x7101bf61c0
7101bf6190  cmp x23,x8
7101bf6194  b.eq 0x7101bf6444
7101bf6198  ldr x0,[x19, #0x280]
7101bf619c  cmp x22,x0
7101bf61a0  b.eq 0x7101bf649c
7101bf61a4  stur x0,[x29, #-0x90]
7101bf61a8  str x8,[x19, #0x280]
7101bf61ac  cmp x23,x0
7101bf61b0  b.ne 0x7101bf61cc
7101bf61b4  ldr x8,[x0]
7101bf61b8  ldr x8,[x8, #0x20]
7101bf61bc  b 0x7101bf61d8
7101bf61c0  mov x0,x8
7101bf61c4  cmp x23,x0
7101bf61c8  b.eq 0x7101bf61b4
7101bf61cc  cbz x0,0x7101bf61dc
7101bf61d0  ldr x8,[x0]
7101bf61d4  ldr x8,[x8, #0x28]
7101bf61d8  blr x8
7101bf61dc  ldr x8,[x21]
7101bf61e0  ldr x8,[x8, #0x28]
7101bf61e4  mov x0,x21
7101bf61e8  blr x8
7101bf61ec  ldr x21,[sp, #0xd8]
7101bf61f0  cbz x21,0x7101bf6240
7101bf61f4  ldr x22,[sp, #0xe0]
7101bf61f8  cmp x22,x21
7101bf61fc  b.eq 0x7101bf648c
7101bf6200  ldur x0,[x22, #-0x10]
7101bf6204  sub x23,x22,#0x50
7101bf6208  cmp x23,x0
7101bf620c  ccmp x0,#0x0,#0x4,ne
7101bf6210  b.eq 0x7101bf6218
7101bf6214  bl 0x710392eb40
7101bf6218  sturh wzr,[x22, #-0x50]
7101bf621c  stur x23,[x22, #-0x10]
7101bf6220  cmp x21,x23
7101bf6224  stur wzr,[x22, #-0x8]
7101bf6228  mov x22,x23
7101bf622c  b.ne 0x7101bf6200
7101bf6230  ldr x0,[sp, #0xd8]
7101bf6234  str x21,[sp, #0xe0]
7101bf6238  cbz x0,0x7101bf6240
7101bf623c  bl 0x710392eb40
7101bf6240  ldr x8,[x19, #0x128]
7101bf6244  ldr x8,[x8]
7101bf6248  add x0,x19,#0x140
7101bf624c  add x4,x19,#0x250
7101bf6250  adrp x2,0x710425f000
7101bf6254  add x2,x2,#0x806
7101bf6258  add x3,sp,#0xf0
7101bf625c  add x21,sp,#0xf0
7101bf6260  add x1,x8,#0x8
7101bf6264  bl 0x7103781a20
7101bf6268  ldr x0,[x19, #0x140]
7101bf626c  ldr x8,[x0]
7101bf6270  ldr x8,[x8, #0x70]
7101bf6274  mov w1,#0x1
7101bf6278  blr x8
7101bf627c  ldr x0,[sp, #0x200]
7101bf6280  add x8,x21,#0xf0
7101bf6284  cmp x8,x0
7101bf6288  b.eq 0x7101bf629c
7101bf628c  cbz x0,0x7101bf62a8
7101bf6290  ldr x8,[x0]
7101bf6294  ldr x8,[x8, #0x28]
7101bf6298  b 0x7101bf62a4
7101bf629c  ldr x8,[x0]
7101bf62a0  ldr x8,[x8, #0x20]
7101bf62a4  blr x8
7101bf62a8  ldr x0,[sp, #0x1d0]
7101bf62ac  add x8,sp,#0xf0
7101bf62b0  add x8,x8,#0xc0
7101bf62b4  cmp x8,x0
7101bf62b8  b.eq 0x7101bf62cc
7101bf62bc  cbz x0,0x7101bf62d8
7101bf62c0  ldr x8,[x0]
7101bf62c4  ldr x8,[x8, #0x28]
7101bf62c8  b 0x7101bf62d4
7101bf62cc  ldr x8,[x0]
7101bf62d0  ldr x8,[x8, #0x20]
7101bf62d4  blr x8
7101bf62d8  ldr x0,[sp, #0x1a0]
7101bf62dc  add x8,sp,#0xf0
7101bf62e0  add x8,x8,#0x90
7101bf62e4  cmp x8,x0
7101bf62e8  b.eq 0x7101bf62fc
7101bf62ec  cbz x0,0x7101bf6308
7101bf62f0  ldr x8,[x0]
7101bf62f4  ldr x8,[x8, #0x28]
7101bf62f8  b 0x7101bf6304
7101bf62fc  ldr x8,[x0]
7101bf6300  ldr x8,[x8, #0x20]
7101bf6304  blr x8
7101bf6308  ldr x0,[sp, #0x170]
7101bf630c  add x8,sp,#0xf0
7101bf6310  add x8,x8,#0x60
7101bf6314  cmp x8,x0
7101bf6318  b.eq 0x7101bf632c
7101bf631c  cbz x0,0x7101bf6338
7101bf6320  ldr x8,[x0]
7101bf6324  ldr x8,[x8, #0x28]
7101bf6328  b 0x7101bf6334
7101bf632c  ldr x8,[x0]
7101bf6330  ldr x8,[x8, #0x20]
7101bf6334  blr x8
7101bf6338  ldr x0,[sp, #0x140]
7101bf633c  add x8,sp,#0xf0
7101bf6340  add x8,x8,#0x30
7101bf6344  cmp x8,x0
7101bf6348  b.eq 0x7101bf635c
7101bf634c  cbz x0,0x7101bf6368
7101bf6350  ldr x8,[x0]
7101bf6354  ldr x8,[x8, #0x28]
7101bf6358  b 0x7101bf6364
7101bf635c  ldr x8,[x0]
7101bf6360  ldr x8,[x8, #0x20]
7101bf6364  blr x8
7101bf6368  ldr x8,[x19, #0x140]
7101bf636c  ldr x9,[x19, #0x160]
7101bf6370  ldrb w8,[x8, #0x315]
7101bf6374  ldr x9,[x9]
7101bf6378  cbz x9,0x7101bf638c
7101bf637c  ldrb w10,[x9, #0x58]
7101bf6380  and w10,w10,#0xfe
7101bf6384  orr w10,w10,w8
7101bf6388  strb w10,[x9, #0x58]
7101bf638c  ldr x9,[x19, #0x170]
7101bf6390  ldr x9,[x9]
7101bf6394  cbz x9,0x7101bf63a8
7101bf6398  ldrb w10,[x9, #0x58]
7101bf639c  and w10,w10,#0xfe
7101bf63a0  orr w8,w10,w8
7101bf63a4  strb w8,[x9, #0x58]
7101bf63a8  strb w24,[x19, #0x4e0]
7101bf63ac  asr x8,x20,#0x20
7101bf63b0  mov w10,#0x28
7101bf63b4  strb wzr,[sp, #0x111]
7101bf63b8  strb wzr,[sp, #0xf0]
7101bf63bc  mul x8,x8,x10
7101bf63c0  ldr x9,[x19, #0x4b8]
7101bf63c4  ldr w8,[x9, x8, LSL #0x0]
7101bf63c8  ldr x9,[x19, #0x128]
7101bf63cc  adrp x10,0x710436c000
7101bf63d0  add x10,x10,#0x288
7101bf63d4  cmp w8,#0x0
7101bf63d8  ldr x20,[x9]
7101bf63dc  adrp x9,0x7104359000
7101bf63e0  add x9,x9,#0xc60
7101bf63e4  csel x2,x9,x10,gt
7101bf63e8  ldr w10,[x19, #0x4d0]
7101bf63ec  adrp x8,0x7104867000
7101bf63f0  add x8,x8,#0xc2e
7101bf63f4  adrp x9,0x71043ad000
7101bf63f8  add x9,x9,#0x6ca
7101bf63fc  adrp x1,0x7104401000
7101bf6400  add x1,x1,#0x467
7101bf6404  add x0,sp,#0xf0
7101bf6408  cmp w10,#0x0
7101bf640c  csel x3,x9,x8,eq
7101bf6410  bl 0x71014c8530
7101bf6414  ldr x0,[x20, #0x10]
7101bf6418  fmov s0,0x3f800000
7101bf641c  add x1,sp,#0xf0
7101bf6420  bl 0x7103778300
7101bf6424  add sp,sp,#0x270
7101bf6428  ldp x29,x30,[sp, #0x50]
7101bf642c  ldp x20,x19,[sp, #0x40]
7101bf6430  ldp x22,x21,[sp, #0x30]
7101bf6434  ldp x24,x23,[sp, #0x20]
7101bf6438  ldp x26,x25,[sp, #0x10]
7101bf643c  ldp x28,x27,[sp], #0x60
7101bf6440  ret
7101bf6444  ldr x9,[x19, #0x280]
7101bf6448  cmp x9,x22
7101bf644c  b.eq 0x7101bf64dc
7101bf6450  ldur x9,[x29, #-0xb0]
7101bf6454  ldr x9,[x9, #0x18]
7101bf6458  mov x0,x8
7101bf645c  mov x1,x22
7101bf6460  blr x9
7101bf6464  ldur x0,[x29, #-0x90]
7101bf6468  ldr x8,[x0]
7101bf646c  ldr x8,[x8, #0x20]
7101bf6470  blr x8
7101bf6474  ldr x0,[x19, #0x280]
7101bf6478  stur x0,[x29, #-0x90]
7101bf647c  str x22,[x19, #0x280]
7101bf6480  cmp x23,x0
7101bf6484  b.ne 0x7101bf61cc
7101bf6488  b 0x7101bf61b4
7101bf648c  mov x0,x21
7101bf6490  str x21,[sp, #0xe0]
7101bf6494  cbnz x0,0x7101bf623c
7101bf6498  b 0x7101bf6240
7101bf649c  ldr x8,[x0]
7101bf64a0  ldr x8,[x8, #0x18]
7101bf64a4  sub x1,x29,#0xb0
7101bf64a8  sub x22,x29,#0xb0
7101bf64ac  blr x8
7101bf64b0  ldr x0,[x19, #0x280]
7101bf64b4  ldr x8,[x0]
7101bf64b8  ldr x8,[x8, #0x20]
7101bf64bc  blr x8
7101bf64c0  ldur x8,[x29, #-0x90]
7101bf64c4  str x8,[x19, #0x280]
7101bf64c8  stur x22,[x29, #-0x90]
7101bf64cc  sub x0,x29,#0xb0
7101bf64d0  cmp x23,x0
7101bf64d4  b.ne 0x7101bf61cc
7101bf64d8  b 0x7101bf61b4
7101bf64dc  ldur x9,[x29, #-0xb0]
7101bf64e0  ldr x9,[x9, #0x18]
7101bf64e4  sub x1,x29,#0x80
7101bf64e8  mov x0,x8
7101bf64ec  blr x9
7101bf64f0  ldur x0,[x29, #-0x90]
7101bf64f4  ldr x8,[x0]
7101bf64f8  ldr x8,[x8, #0x20]
7101bf64fc  blr x8
7101bf6500  stur xzr,[x29, #-0x90]
7101bf6504  ldr x0,[x19, #0x280]
7101bf6508  ldr x8,[x0]
7101bf650c  ldr x8,[x8, #0x18]
7101bf6510  sub x1,x29,#0xb0
7101bf6514  sub x25,x29,#0xb0
7101bf6518  blr x8
7101bf651c  ldr x0,[x19, #0x280]
7101bf6520  ldr x8,[x0]
7101bf6524  ldr x8,[x8, #0x20]
7101bf6528  blr x8
7101bf652c  str xzr,[x19, #0x280]
7101bf6530  ldur x8,[x29, #-0x80]
7101bf6534  stur x25,[x29, #-0x90]
7101bf6538  ldr x8,[x8, #0x18]
7101bf653c  sub x0,x29,#0x80
7101bf6540  mov x1,x22
7101bf6544  blr x8
7101bf6548  ldur x8,[x29, #-0x80]
7101bf654c  ldr x8,[x8, #0x20]
7101bf6550  sub x0,x29,#0x80
7101bf6554  blr x8
7101bf6558  str x22,[x19, #0x280]
7101bf655c  ldur x0,[x29, #-0x90]
7101bf6560  cmp x23,x0
7101bf6564  b.ne 0x7101bf61cc
7101bf6568  b 0x7101bf61b4
7101bf656c  bl 0x71039c2650
7101bf6570  add x0,sp,#0xd8
7101bf6574  bl 0x71039c0c00
7101bf6578  add x0,x19,#0x4f0
7101bf657c  bl 0x71039c1330
