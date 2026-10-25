// addr:      7101ce5ab0
// offset:    0x1ce5ab0
// name:      FUN_7101ce5ab0
// mangled:   
// size:      5476

7101ce5ab0  str d10,[sp, #-0x80]!
7101ce5ab4  stp d9,d8,[sp, #0x10]
7101ce5ab8  stp x28,x27,[sp, #0x20]
7101ce5abc  stp x26,x25,[sp, #0x30]
7101ce5ac0  stp x24,x23,[sp, #0x40]
7101ce5ac4  stp x22,x21,[sp, #0x50]
7101ce5ac8  stp x20,x19,[sp, #0x60]
7101ce5acc  stp x29,x30,[sp, #0x70]
7101ce5ad0  add x29,sp,#0x70
7101ce5ad4  sub sp,sp,#0x190
7101ce5ad8  adrp x21,0x710436c000
7101ce5adc  add x21,x21,#0x539
7101ce5ae0  mov x20,x1
7101ce5ae4  str x0,[sp, #0x48]
7101ce5ae8  sub x8,x29,#0xd0
7101ce5aec  mov x0,x1
7101ce5af0  mov x1,x21
7101ce5af4  str w3,[sp, #0x34]
7101ce5af8  mov x26,x2
7101ce5afc  bl 0x7103776640
7101ce5b00  ldr w19,[x26, #0x8]
7101ce5b04  sub x8,x29,#0xc0
7101ce5b08  mov x0,x20
7101ce5b0c  mov x1,x21
7101ce5b10  bl 0x7103776640
7101ce5b14  adrp x1,0x71042e7000
7101ce5b18  add x1,x1,#0x3ae
7101ce5b1c  add x8,sp,#0xa0
7101ce5b20  sub x0,x29,#0xc0
7101ce5b24  bl 0x7103776910
7101ce5b28  ubfx w2,w19,#0xc,#0x4
7101ce5b2c  ubfx w3,w19,#0x5,#0x6
7101ce5b30  and w4,w19,#0x1f
7101ce5b34  add x0,sp,#0xa0
7101ce5b38  orr w1,wzr,#0x3
7101ce5b3c  bl 0x710377a310
7101ce5b40  ldr x0,[sp, #0xa8]
7101ce5b44  adrp x24,0x710523d000
7101ce5b48  add x24,x24,#0x9a8
7101ce5b4c  stp x24,xzr,[sp, #0xa0]
7101ce5b50  cbz x0,0x7101ce5b58
7101ce5b54  bl 0x710392eb40
7101ce5b58  ldur x21,[x29, #-0xb8]
7101ce5b5c  adrp x8,0x710523d000
7101ce5b60  add x8,x8,#0x988
7101ce5b64  stp x8,xzr,[x29, #-0xc0]
7101ce5b68  cbz x21,0x7101ce5b84
7101ce5b6c  ldr x0,[x21, #0x18]
7101ce5b70  stp x24,xzr,[x21, #0x10]
7101ce5b74  cbz x0,0x7101ce5b7c
7101ce5b78  bl 0x710392eb40
7101ce5b7c  mov x0,x21
7101ce5b80  bl 0x710392eb40
7101ce5b84  sub x0,x29,#0xe0
7101ce5b88  mov x1,x20
7101ce5b8c  bl 0x7103776390
7101ce5b90  ldrsw x8,[x26, #0x2f8]
7101ce5b94  cmp w8,#0x16c
7101ce5b98  b.cs 0x7101ce5c24
7101ce5b9c  mov w9,#0x48
7101ce5ba0  adrp x10,0x710454a000
7101ce5ba4  add x10,x10,#0x7e8
7101ce5ba8  madd x8,x8,x9,x10
7101ce5bac  ldr w8,[x8, #0x8]
7101ce5bb0  cmp w8,#0x1
7101ce5bb4  b.eq 0x7101ce5c54
7101ce5bb8  cmp w8,#0x2
7101ce5bbc  b.ne 0x7101ce5c24
7101ce5bc0  adrp x1,0x7104319000
7101ce5bc4  add x1,x1,#0x40
7101ce5bc8  sub x8,x29,#0xc0
7101ce5bcc  sub x0,x29,#0xe0
7101ce5bd0  bl 0x7103776640
7101ce5bd4  fmov s8,0x3f800000
7101ce5bd8  ldur x21,[x29, #-0xb8]
7101ce5bdc  adrp x1,0x710439d000
7101ce5be0  add x1,x1,#0x5c9
7101ce5be4  mov v0.16B,v8.16B
7101ce5be8  mov x0,x21
7101ce5bec  bl 0x7103778300
7101ce5bf0  mov v0.16B,v8.16B
7101ce5bf4  adrp x1,0x7104280000
7101ce5bf8  add x1,x1,#0xb98
7101ce5bfc  mov x0,x21
7101ce5c00  bl 0x7103778300
7101ce5c04  adrp x1,0x7104280000
7101ce5c08  add x1,x1,#0xba5
7101ce5c0c  add x8,sp,#0xa0
7101ce5c10  sub x0,x29,#0xc0
7101ce5c14  bl 0x7103776910
7101ce5c18  adrp x1,0x710432a000
7101ce5c1c  add x1,x1,#0x17c
7101ce5c20  b 0x7101ce5cb4
7101ce5c24  adrp x1,0x7104319000
7101ce5c28  add x1,x1,#0x40
7101ce5c2c  sub x8,x29,#0xc0
7101ce5c30  sub x0,x29,#0xe0
7101ce5c34  bl 0x7103776640
7101ce5c38  ldur x21,[x29, #-0xb8]
7101ce5c3c  fmov s0,0x3f800000
7101ce5c40  adrp x1,0x710438c000
7101ce5c44  add x1,x1,#0xc37
7101ce5c48  mov x0,x21
7101ce5c4c  bl 0x7103778300
7101ce5c50  b 0x7101ce5ccc
7101ce5c54  adrp x1,0x7104319000
7101ce5c58  add x1,x1,#0x40
7101ce5c5c  sub x8,x29,#0xc0
7101ce5c60  sub x0,x29,#0xe0
7101ce5c64  bl 0x7103776640
7101ce5c68  fmov s8,0x3f800000
7101ce5c6c  ldur x21,[x29, #-0xb8]
7101ce5c70  adrp x1,0x710439d000
7101ce5c74  add x1,x1,#0x5c9
7101ce5c78  mov v0.16B,v8.16B
7101ce5c7c  mov x0,x21
7101ce5c80  bl 0x7103778300
7101ce5c84  mov v0.16B,v8.16B
7101ce5c88  adrp x1,0x71043cf000
7101ce5c8c  add x1,x1,#0x622
7101ce5c90  mov x0,x21
7101ce5c94  bl 0x7103778300
7101ce5c98  adrp x1,0x7104280000
7101ce5c9c  add x1,x1,#0xba5
7101ce5ca0  add x8,sp,#0xa0
7101ce5ca4  sub x0,x29,#0xc0
7101ce5ca8  bl 0x7103776910
7101ce5cac  adrp x1,0x71042f8000
7101ce5cb0  add x1,x1,#0x448
7101ce5cb4  add x0,sp,#0xa0
7101ce5cb8  bl 0x710377a120
7101ce5cbc  ldr x0,[sp, #0xa8]
7101ce5cc0  stp x24,xzr,[sp, #0xa0]
7101ce5cc4  cbz x0,0x7101ce5ccc
7101ce5cc8  bl 0x710392eb40
7101ce5ccc  adrp x8,0x710523d000
7101ce5cd0  add x8,x8,#0x988
7101ce5cd4  stp x8,xzr,[x29, #-0xc0]
7101ce5cd8  cbz x21,0x7101ce5cf4
7101ce5cdc  ldr x0,[x21, #0x18]
7101ce5ce0  stp x24,xzr,[x21, #0x10]
7101ce5ce4  cbz x0,0x7101ce5cec
7101ce5ce8  bl 0x710392eb40
7101ce5cec  mov x0,x21
7101ce5cf0  bl 0x710392eb40
7101ce5cf4  ldur x21,[x29, #-0xd8]
7101ce5cf8  adrp x8,0x710523d000
7101ce5cfc  add x8,x8,#0x988
7101ce5d00  stp x8,xzr,[x29, #-0xe0]
7101ce5d04  cbz x21,0x7101ce5d20
7101ce5d08  ldr x0,[x21, #0x18]
7101ce5d0c  stp x24,xzr,[x21, #0x10]
7101ce5d10  cbz x0,0x7101ce5d18
7101ce5d14  bl 0x710392eb40
7101ce5d18  mov x0,x21
7101ce5d1c  bl 0x710392eb40
7101ce5d20  ldr w8,[x26, #0x68]
7101ce5d24  mov w9,#0x8889
7101ce5d28  movk w9,#0x8888, LSL #16
7101ce5d2c  mov w10,#0xb3c5
7101ce5d30  movk w10,#0x91a2, LSL #16
7101ce5d34  mov w23,#0xffffffc4
7101ce5d38  mov w22,#0x3e7
7101ce5d3c  mul x9,x8,x9
7101ce5d40  mul x8,x8,x10
7101ce5d44  lsr x9,x9,#0x25
7101ce5d48  lsr x8,x8,#0x2b
7101ce5d4c  madd w9,w8,w23,w9
7101ce5d50  cmp w8,#0x3e7
7101ce5d54  csel w19,w8,w22,cc
7101ce5d58  cmp w9,#0x3e7
7101ce5d5c  adrp x1,0x7104443000
7101ce5d60  add x1,x1,#0x8ee
7101ce5d64  sub x8,x29,#0xc0
7101ce5d68  mov x0,x20
7101ce5d6c  csel w21,w9,w22,lt
7101ce5d70  bl 0x7103776910
7101ce5d74  adrp x1,0x710433a000
7101ce5d78  add x1,x1,#0x373
7101ce5d7c  add x8,sp,#0xa0
7101ce5d80  mov x0,x20
7101ce5d84  bl 0x7103776910
7101ce5d88  ldp w8,w9,[x26, #0x68]
7101ce5d8c  ldr s0,[x26, #0x94]
7101ce5d90  cmp w8,#0x0
7101ce5d94  cset w8,ne
7101ce5d98  cmp w9,#0x0
7101ce5d9c  ldrb w11,[x26, #0x64]
7101ce5da0  cset w9,ne
7101ce5da4  fcmp s0,#0.0
7101ce5da8  cset w10,gt
7101ce5dac  cmp w11,#0x12
7101ce5db0  b.ne 0x7101ce5e30
7101ce5db4  ldrb w9,[x26, #0xd8]
7101ce5db8  ldrb w8,[x26, #0x88]
7101ce5dbc  mov w10,#0x2
7101ce5dc0  cmp w9,#0x1
7101ce5dc4  cset w9,eq
7101ce5dc8  csinc w10,w10,wzr,eq
7101ce5dcc  cmp w8,#0x1
7101ce5dd0  csel w8,w9,w10,ne
7101ce5dd4  ldrb w9,[x26, #0x128]
7101ce5dd8  cmp w9,#0x1
7101ce5ddc  ldrb w9,[x26, #0x178]
7101ce5de0  cinc w8,w8,eq
7101ce5de4  cmp w9,#0x1
7101ce5de8  ldrb w9,[x26, #0x1c8]
7101ce5dec  cinc w8,w8,eq
7101ce5df0  cmp w9,#0x1
7101ce5df4  ldrb w9,[x26, #0x218]
7101ce5df8  cinc w8,w8,eq
7101ce5dfc  cmp w9,#0x1
7101ce5e00  ldrb w9,[x26, #0x268]
7101ce5e04  cinc w8,w8,eq
7101ce5e08  cmp w9,#0x1
7101ce5e0c  ldrb w9,[x26, #0x2b8]
7101ce5e10  cinc w8,w8,eq
7101ce5e14  cmp w9,#0x1
7101ce5e18  mov w9,#0x10
7101ce5e1c  cinc w8,w8,eq
7101ce5e20  cmp w8,#0x2
7101ce5e24  mov w8,#0x8
7101ce5e28  csel w8,w9,w8,eq
7101ce5e2c  b 0x7101ce5e38
7101ce5e30  bfm w8,w9,#0x1f,#0x0
7101ce5e34  bfm w8,w10,#0x1e,#0x0
7101ce5e38  sub w8,w8,#0x1
7101ce5e3c  mov w25,#0x3e8
7101ce5e40  cmp w8,#0xf
7101ce5e44  b.hi 0x7101ce5ea4
7101ce5e48  adrp x9,0x71044fa000
7101ce5e4c  add x9,x9,#0xc8
7101ce5e50  madd w21,w19,w25,w21
7101ce5e54  ldrsw x8,[x9, x8, LSL #0x2]
7101ce5e58  add x8,x8,x9
7101ce5e5c  br x8
7101ce5e60  adrp x1,0x7104443000
7101ce5e64  add x1,x1,#0x902
7101ce5e68  sub x0,x29,#0xc0
7101ce5e6c  bl 0x710377a120
7101ce5e70  adrp x1,0x71042e7000
7101ce5e74  add x1,x1,#0x3be
7101ce5e78  add x0,sp,#0xa0
7101ce5e7c  mov w2,#0x1
7101ce5e80  mov w3,w21
7101ce5e84  bl 0x710377a280
7101ce5e88  b 0x7101ce5f4c
7101ce5e8c  adrp x1,0x710425f000
7101ce5e90  add x1,x1,#0x5df
7101ce5e94  b 0x7101ce5ed0
7101ce5e98  adrp x1,0x710425f000
7101ce5e9c  add x1,x1,#0x5df
7101ce5ea0  b 0x7101ce5f28
7101ce5ea4  adrp x1,0x7104443000
7101ce5ea8  add x1,x1,#0x902
7101ce5eac  sub x0,x29,#0xc0
7101ce5eb0  bl 0x710377a120
7101ce5eb4  adrp x1,0x71042d6000
7101ce5eb8  add x1,x1,#0x422
7101ce5ebc  add x0,sp,#0xa0
7101ce5ec0  bl 0x710377a120
7101ce5ec4  b 0x7101ce5f4c
7101ce5ec8  adrp x1,0x71043ad000
7101ce5ecc  add x1,x1,#0x912
7101ce5ed0  sub x0,x29,#0xc0
7101ce5ed4  bl 0x710377a120
7101ce5ed8  ldr w4,[x26, #0x6c]
7101ce5edc  adrp x1,0x7104308000
7101ce5ee0  add x1,x1,#0x69f
7101ce5ee4  add x0,sp,#0xa0
7101ce5ee8  mov w2,#0x2
7101ce5eec  mov w3,wzr
7101ce5ef0  b 0x7101ce5f48
7101ce5ef4  adrp x1,0x710432a000
7101ce5ef8  add x1,x1,#0x15b
7101ce5efc  b 0x7101ce5f08
7101ce5f00  adrp x1,0x7104422000
7101ce5f04  add x1,x1,#0x591
7101ce5f08  add x0,sp,#0xa0
7101ce5f0c  bl 0x710377a120
7101ce5f10  ldr x0,[x20, #0x8]
7101ce5f14  adrp x1,0x71042d6000
7101ce5f18  add x1,x1,#0x441
7101ce5f1c  b 0x7101ce5f58
7101ce5f20  adrp x1,0x71043ad000
7101ce5f24  add x1,x1,#0x912
7101ce5f28  sub x0,x29,#0xc0
7101ce5f2c  bl 0x710377a120
7101ce5f30  ldr w4,[x26, #0x6c]
7101ce5f34  adrp x1,0x71042d6000
7101ce5f38  add x1,x1,#0x407
7101ce5f3c  add x0,sp,#0xa0
7101ce5f40  mov w2,#0x2
7101ce5f44  mov w3,w21
7101ce5f48  bl 0x710377a280
7101ce5f4c  ldr x0,[x20, #0x8]
7101ce5f50  adrp x1,0x7104308000
7101ce5f54  add x1,x1,#0x6c4
7101ce5f58  fmov s0,0x3f800000
7101ce5f5c  bl 0x7103778300
7101ce5f60  ldr x0,[sp, #0xa8]
7101ce5f64  stp x24,xzr,[sp, #0xa0]
7101ce5f68  cbz x0,0x7101ce5f70
7101ce5f6c  bl 0x710392eb40
7101ce5f70  ldur x0,[x29, #-0xb8]
7101ce5f74  stp x24,xzr,[x29, #-0xc0]
7101ce5f78  cbz x0,0x7101ce5f80
7101ce5f7c  bl 0x710392eb40
7101ce5f80  ldrb w8,[x26, #0x64]
7101ce5f84  sub w9,w8,#0x9
7101ce5f88  cmp w9,#0x8
7101ce5f8c  b.cs 0x7101ce6068
7101ce5f90  ldrb w8,[x26, #0x67]
7101ce5f94  cmp w8,#0x1
7101ce5f98  b.ne 0x7101ce5fa4
7101ce5f9c  mov w19,#0x1
7101ce5fa0  b 0x7101ce6018
7101ce5fa4  ldrb w9,[x26, #0xd8]
7101ce5fa8  ldrb w8,[x26, #0x88]
7101ce5fac  mov w10,#0x2
7101ce5fb0  cmp w9,#0x0
7101ce5fb4  cset w9,ne
7101ce5fb8  csinc w10,w10,wzr,ne
7101ce5fbc  cmp w8,#0x0
7101ce5fc0  csel w8,w9,w10,eq
7101ce5fc4  ldrb w9,[x26, #0x128]
7101ce5fc8  cmp w9,#0x0
7101ce5fcc  ldrb w9,[x26, #0x178]
7101ce5fd0  cinc w8,w8,ne
7101ce5fd4  cmp w9,#0x0
7101ce5fd8  ldrb w9,[x26, #0x1c8]
7101ce5fdc  cinc w8,w8,ne
7101ce5fe0  cmp w9,#0x0
7101ce5fe4  ldrb w9,[x26, #0x218]
7101ce5fe8  cinc w8,w8,ne
7101ce5fec  cmp w9,#0x0
7101ce5ff0  ldrb w9,[x26, #0x268]
7101ce5ff4  cinc w8,w8,ne
7101ce5ff8  cmp w9,#0x0
7101ce5ffc  ldrb w9,[x26, #0x2b8]
7101ce6000  cinc w8,w8,ne
7101ce6004  cmp w9,#0x0
7101ce6008  cinc w8,w8,ne
7101ce600c  cmp w8,#0x2
7101ce6010  cset w8,eq
7101ce6014  lsl x19,x8,#0x1
7101ce6018  adrp x1,0x710435b000
7101ce601c  add x1,x1,#0x927
7101ce6020  sub x8,x29,#0xc0
7101ce6024  mov x0,x20
7101ce6028  bl 0x7103776910
7101ce602c  adrp x1,0x7104291000
7101ce6030  add x1,x1,#0xdb1
7101ce6034  add x8,sp,#0xa0
7101ce6038  mov x0,x20
7101ce603c  bl 0x7103776910
7101ce6040  ldrb w8,[x26, #0x64]
7101ce6044  cmp w8,#0x1
7101ce6048  b.eq 0x7101ce6088
7101ce604c  cmp w8,#0x2
7101ce6050  b.eq 0x7101ce607c
7101ce6054  cmp w8,#0x12
7101ce6058  b.ne 0x7101ce6094
7101ce605c  adrp x21,0x7104454000
7101ce6060  add x21,x21,#0xb85
7101ce6064  b 0x7101ce60ac
7101ce6068  cmp w8,#0x3
7101ce606c  b.eq 0x7101ce5f90
7101ce6070  cbz w8,0x7101ce5f90
7101ce6074  orr w19,wzr,#0x3
7101ce6078  b 0x7101ce6018
7101ce607c  adrp x21,0x71043ad000
7101ce6080  add x21,x21,#0x8e8
7101ce6084  b 0x7101ce60ac
7101ce6088  adrp x21,0x710434a000
7101ce608c  add x21,x21,#0x4e7
7101ce6090  b 0x7101ce60ac
7101ce6094  adrp x8,0x7104468000
7101ce6098  add x8,x8,#0x6f0
7101ce609c  adrp x9,0x71050ae000
7101ce60a0  add x9,x9,#0x5e0
7101ce60a4  ldrsw x8,[x8, x19, LSL #0x2]
7101ce60a8  ldr x21,[x9, x8, LSL #0x3]
7101ce60ac  sub x0,x29,#0xc0
7101ce60b0  mov x1,x21
7101ce60b4  bl 0x710377a120
7101ce60b8  add x0,sp,#0xa0
7101ce60bc  mov x1,x21
7101ce60c0  bl 0x710377a120
7101ce60c4  ldr x0,[sp, #0xa8]
7101ce60c8  stp x24,xzr,[sp, #0xa0]
7101ce60cc  cbz x0,0x7101ce60d4
7101ce60d0  bl 0x710392eb40
7101ce60d4  ldur x0,[x29, #-0xb8]
7101ce60d8  stp x24,xzr,[x29, #-0xc0]
7101ce60dc  cbz x0,0x7101ce60e4
7101ce60e0  bl 0x710392eb40
7101ce60e4  adrp x1,0x71043ae000
7101ce60e8  add x1,x1,#0x1be
7101ce60ec  sub x8,x29,#0xf0
7101ce60f0  mov x0,x20
7101ce60f4  bl 0x7103776910
7101ce60f8  ldrsw x8,[x26, #0x60]
7101ce60fc  mov x9,#-0x7777
7101ce6100  movk x9,#0x8888, LSL #16
7101ce6104  mul x9,x8,x9
7101ce6108  lsr x9,x9,#0x20
7101ce610c  add w9,w9,w8
7101ce6110  asr w10,w9,#0x5
7101ce6114  add w9,w10,w9, LSR #0x1f
7101ce6118  madd w8,w9,w23,w8
7101ce611c  cmp w9,#0x3e7
7101ce6120  csel w9,w9,w22,lt
7101ce6124  cmp w8,#0x3e7
7101ce6128  csel w8,w8,w22,lt
7101ce612c  madd w2,w9,w25,w8
7101ce6130  sub x0,x29,#0xf0
7101ce6134  mov w1,#0x1
7101ce6138  bl 0x710377a310
7101ce613c  ldur x0,[x29, #-0xe8]
7101ce6140  stp x24,xzr,[x29, #-0xf0]
7101ce6144  cbz x0,0x7101ce614c
7101ce6148  bl 0x710392eb40
7101ce614c  orr x23,xzr,#-0x5555555555555556
7101ce6150  mov x25,xzr
7101ce6154  mov x22,#-0x3f00000000000000
7101ce6158  movk x23,#0xaaa, LSL #48
7101ce615c  add x27,x26,#0x78
7101ce6160  str xzr,[sp, #0xf8]
7101ce6164  add x8,x26,#0x2f8
7101ce6168  stp xzr,xzr,[sp, #0x100]
7101ce616c  str x8,[sp, #0x50]
7101ce6170  stur x26,[x29, #-0x68]
7101ce6174  add x19,x26,x25
7101ce6178  ldrb w8,[x19, #0x88]
7101ce617c  cbz w8,0x7101ce6344
7101ce6180  ldr x20,[x19, #0x78]
7101ce6184  and x9,x20,#-0x100000000000000
7101ce6188  and x8,x20,#0xffffffffff
7101ce618c  cmp x9,x22
7101ce6190  ccmp x8,#0x0,#0x4,eq
7101ce6194  b.eq 0x7101ce6344
7101ce6198  adrp x8,0x710532f000
7101ce619c  ldr x8,[x8, #0x730]
7101ce61a0  ldr x22,[x8, #0x8]
7101ce61a4  ldr x21,[x22, #0x168]
7101ce61a8  mov x0,x21
7101ce61ac  mov x1,x20
7101ce61b0  bl 0x71032632a0
7101ce61b4  mov x1,#0xb807
7101ce61b8  movk x1,#0xb1cc, LSL #16
7101ce61bc  movk x1,#0x11, LSL #32
7101ce61c0  tbnz w0,#0x0,0x7101ce61e0
7101ce61c4  add x0,x22,#0x160
7101ce61c8  mov x1,x20
7101ce61cc  bl 0x71032648e0
7101ce61d0  mov x1,#0xf67e
7101ce61d4  movk x1,#0x3829, LSL #16
7101ce61d8  movk x1,#0x14, LSL #32
7101ce61dc  tbz w0,#0x0,0x7101ce61ec
7101ce61e0  mov x0,x21
7101ce61e4  bl 0x71032631a0
7101ce61e8  mov x20,x0
7101ce61ec  ldp x8,x9,[sp, #0x100]
7101ce61f0  ldrb w28,[x19, #0x8a]
7101ce61f4  ldr w24,[x19, #0x90]
7101ce61f8  cmp x8,x9
7101ce61fc  b.cs 0x7101ce6220
7101ce6200  str w24,[x8]
7101ce6204  str x20,[x8, #0x8]
7101ce6208  mov x22,#-0x3f00000000000000
7101ce620c  str w28,[x8, #0x10]
7101ce6210  ldr x8,[sp, #0x100]
7101ce6214  add x8,x8,#0x18
7101ce6218  str x8,[sp, #0x100]
7101ce621c  b 0x7101ce6344
7101ce6220  ldr x21,[sp, #0xf8]
7101ce6224  sub x22,x8,x21
7101ce6228  orr x10,xzr,#-0x5555555555555556
7101ce622c  movk x10,#0xaaab
7101ce6230  asr x8,x22,#0x3
7101ce6234  mul x19,x8,x10
7101ce6238  add x8,x19,#0x1
7101ce623c  cmp x8,x23
7101ce6240  b.hi 0x7101ce700c
7101ce6244  sub x9,x9,x21
7101ce6248  asr x9,x9,#0x3
7101ce624c  mul x9,x9,x10
7101ce6250  orr x10,xzr,#0x5555555555555555
7101ce6254  movk x10,#0x555, LSL #48
7101ce6258  cmp x9,x10
7101ce625c  mov x26,x23
7101ce6260  b.cs 0x7101ce6274
7101ce6264  lsl x9,x9,#0x1
7101ce6268  cmp x9,x8
7101ce626c  csel x26,x8,x9,cc
7101ce6270  cbz x26,0x7101ce62d0
7101ce6274  add x8,x26,x26, LSL #0x1
7101ce6278  lsl x8,x8,#0x3
7101ce627c  cmp x8,#0x0
7101ce6280  csinc x23,x8,xzr,ne
7101ce6284  mov w0,#0x10
7101ce6288  mov x1,x23
7101ce628c  bl 0x710392e290
7101ce6290  cbnz x0,0x7101ce62d4
7101ce6294  adrp x8,0x7105332000
7101ce6298  ldr x0,[x8, #0xf00]
7101ce629c  cbz x0,0x7101ce62d0
7101ce62a0  str wzr,[sp, #0xa0]
7101ce62a4  stur x23,[x29, #-0xc0]
7101ce62a8  ldr x8,[x0]
7101ce62ac  ldr x8,[x8, #0x30]
7101ce62b0  add x1,sp,#0xa0
7101ce62b4  sub x2,x29,#0xc0
7101ce62b8  blr x8
7101ce62bc  tbz w0,#0x0,0x7101ce62d0
7101ce62c0  mov w0,#0x10
7101ce62c4  mov x1,x23
7101ce62c8  bl 0x710392e290
7101ce62cc  cbnz x0,0x7101ce62d4
7101ce62d0  mov x0,xzr
7101ce62d4  orr x9,xzr,#0x5555555555555555
7101ce62d8  movk x9,#0xd555, LSL #48
7101ce62dc  smulh x9,x22,x9
7101ce62e0  orr w11,wzr,#0x18
7101ce62e4  madd x8,x19,x11,x0
7101ce62e8  madd x19,x26,x11,x0
7101ce62ec  str x20,[x8, #0x8]
7101ce62f0  add x23,x8,#0x18
7101ce62f4  cmp x22,#0x1
7101ce62f8  str w24,[x8]
7101ce62fc  str w28,[x8, #0x10]
7101ce6300  asr x10,x9,#0x2
7101ce6304  add x9,x10,x9, LSR #0x3f
7101ce6308  madd x20,x9,x11,x8
7101ce630c  b.lt 0x7101ce6320
7101ce6310  mov x0,x20
7101ce6314  mov x1,x21
7101ce6318  mov x2,x22
7101ce631c  bl 0x71039c00e0
7101ce6320  ldur x26,[x29, #-0x68]
7101ce6324  stp x20,x23,[sp, #0xf8]
7101ce6328  orr x23,xzr,#-0x5555555555555556
7101ce632c  mov x22,#-0x3f00000000000000
7101ce6330  movk x23,#0xaaa, LSL #48
7101ce6334  str x19,[sp, #0x108]
7101ce6338  cbz x21,0x7101ce6344
7101ce633c  mov x0,x21
7101ce6340  bl 0x710392eb40
7101ce6344  add x25,x25,#0x50
7101ce6348  cmp x25,#0x280
7101ce634c  b.ne 0x7101ce6174
7101ce6350  ldp x20,x21,[sp, #0xf8]
7101ce6354  sub x8,x21,x20
7101ce6358  orr x10,xzr,#-0x5555555555555556
7101ce635c  movk x10,#0xaaab
7101ce6360  asr x9,x8,#0x3
7101ce6364  mul x22,x9,x10
7101ce6368  cmp x8,#0x1
7101ce636c  adrp x19,0x7105332000
7101ce6370  b.lt 0x7101ce63e4
7101ce6374  orr x8,xzr,#0x5555555555555555
7101ce6378  movk x8,#0x555, LSL #48
7101ce637c  cmp x22,x8
7101ce6380  csel x23,x22,x8,lt
7101ce6384  add x8,x23,x23, LSL #0x1
7101ce6388  lsl x8,x8,#0x3
7101ce638c  cmp x8,#0x0
7101ce6390  csinc x24,x8,xzr,ne
7101ce6394  mov w0,#0x10
7101ce6398  mov x1,x24
7101ce639c  bl 0x710392e290
7101ce63a0  cbnz x0,0x7101ce6400
7101ce63a4  ldr x0,[x19, #0xf00]
7101ce63a8  cbz x0,0x7101ce63dc
7101ce63ac  str wzr,[sp, #0xa0]
7101ce63b0  stur x24,[x29, #-0xc0]
7101ce63b4  ldr x8,[x0]
7101ce63b8  ldr x8,[x8, #0x30]
7101ce63bc  add x1,sp,#0xa0
7101ce63c0  sub x2,x29,#0xc0
7101ce63c4  blr x8
7101ce63c8  tbz w0,#0x0,0x7101ce63dc
7101ce63cc  mov w0,#0x10
7101ce63d0  mov x1,x24
7101ce63d4  bl 0x710392e290
7101ce63d8  cbnz x0,0x7101ce6400
7101ce63dc  lsr x23,x23,#0x1
7101ce63e0  cbnz x23,0x7101ce6384
7101ce63e4  mov x0,x20
7101ce63e8  mov x1,x21
7101ce63ec  mov x2,x22
7101ce63f0  mov x3,xzr
7101ce63f4  mov x4,xzr
7101ce63f8  bl 0x7101ce7020
7101ce63fc  b 0x7101ce6424
7101ce6400  mov x25,x0
7101ce6404  mov x0,x20
7101ce6408  mov x1,x21
7101ce640c  mov x2,x22
7101ce6410  mov x3,x25
7101ce6414  mov x4,x23
7101ce6418  bl 0x7101ce7020
7101ce641c  mov x0,x25
7101ce6420  bl 0x710392eb40
7101ce6424  ldr w8,[sp, #0x34]
7101ce6428  and w8,w8,#0x1
7101ce642c  ldr x13,[sp, #0x50]
7101ce6430  fmov s8,0x3f800000
7101ce6434  fmov s9,wzr
7101ce6438  mov w23,#0x89
7101ce643c  adrp x25,0x710523d000
7101ce6440  add x25,x25,#0x9a8
7101ce6444  mov x22,#-0x3f00000000000000
7101ce6448  str w8,[sp, #0x5c]
7101ce644c  add x8,sp,#0xa0
7101ce6450  add x9,x8,#0x8
7101ce6454  add x8,x8,#0x9
7101ce6458  str x9,[sp, #0x38]
7101ce645c  sub x9,x29,#0xc0
7101ce6460  add x24,x9,#0x8
7101ce6464  add x9,x9,#0x9
7101ce6468  stp x8,x9,[sp, #0x20]
7101ce646c  ldr x21,[x27]
7101ce6470  and x9,x21,#-0x100000000000000
7101ce6474  and x8,x21,#0xffffffffff
7101ce6478  cmp x9,x22
7101ce647c  ccmp x8,#0x0,#0x4,eq
7101ce6480  b.eq 0x7101ce6d60
7101ce6484  ldp x8,x9,[sp, #0xf8]
7101ce6488  cmp x9,x8
7101ce648c  b.eq 0x7101ce6d60
7101ce6490  ldr w10,[x27, #0x18]
7101ce6494  ldr w11,[x8]
7101ce6498  cmp w11,w10
7101ce649c  mov x11,x8
7101ce64a0  b.eq 0x7101ce64c0
7101ce64a4  add x11,x8,#0x18
7101ce64a8  cmp x9,x11
7101ce64ac  b.eq 0x7101ce6d60
7101ce64b0  ldr w12,[x11], #0x18
7101ce64b4  cmp w12,w10
7101ce64b8  b.ne 0x7101ce64a8
7101ce64bc  sub x11,x11,#0x18
7101ce64c0  cmp x11,x9
7101ce64c4  b.eq 0x7101ce6d60
7101ce64c8  sub x8,x11,x8
7101ce64cc  lsr x8,x8,#0x3
7101ce64d0  mov w9,#0xaaab
7101ce64d4  movk w9,#0xaaaa, LSL #16
7101ce64d8  mul w28,w8,w9
7101ce64dc  adrp x8,0x710532f000
7101ce64e0  ldr x8,[x8, #0x730]
7101ce64e4  ldr x19,[x8, #0x8]
7101ce64e8  ldrb w8,[x27, #0x12]
7101ce64ec  ldr x20,[x19, #0x168]
7101ce64f0  mov x0,x20
7101ce64f4  mov x1,x21
7101ce64f8  str w8,[sp, #0x60]
7101ce64fc  bl 0x71032632a0
7101ce6500  mov x1,#0xb807
7101ce6504  movk x1,#0xb1cc, LSL #16
7101ce6508  movk x1,#0x11, LSL #32
7101ce650c  tbnz w0,#0x0,0x7101ce652c
7101ce6510  add x0,x19,#0x160
7101ce6514  mov x1,x21
7101ce6518  bl 0x71032648e0
7101ce651c  mov x1,#0xf67e
7101ce6520  movk x1,#0x3829, LSL #16
7101ce6524  movk x1,#0x14, LSL #32
7101ce6528  tbz w0,#0x0,0x7101ce6538
7101ce652c  mov x0,x20
7101ce6530  bl 0x71032631a0
7101ce6534  mov x21,x0
7101ce6538  ldr w2,[sp, #0x5c]
7101ce653c  ldrb w20,[x27, #0x13]
7101ce6540  add x8,sp,#0xe8
7101ce6544  sub x0,x29,#0xd0
7101ce6548  adrp x1,0x710425f000
7101ce654c  add x1,x1,#0x5c8
7101ce6550  mov w3,w28
7101ce6554  bl 0x7103776910
7101ce6558  ldrb w9,[x26, #0x64]
7101ce655c  ldrb w8,[x27, #0x10]
7101ce6560  cmp w9,#0x10
7101ce6564  ccmp w8,#0x2,#0x0,eq
7101ce6568  csinc w25,w8,wzr,ne
7101ce656c  cmp w25,#0x3
7101ce6570  b.eq 0x7101ce65d8
7101ce6574  cmp w25,#0x2
7101ce6578  b.eq 0x7101ce6588
7101ce657c  cmp w25,#0x1
7101ce6580  b.ne 0x7101ce6d44
7101ce6584  b 0x7101ce663c
7101ce6588  cbz w20,0x7101ce6688
7101ce658c  cmp w20,#0x10
7101ce6590  b.cc 0x7101ce6690
7101ce6594  cmp w20,#0x16
7101ce6598  b.cc 0x7101ce6698
7101ce659c  cmp w20,#0x20
7101ce65a0  b.cc 0x7101ce66a0
7101ce65a4  cmp w20,#0x2b
7101ce65a8  mov w3,#0x5
7101ce65ac  b.cc 0x7101ce66bc
7101ce65b0  cmp w20,#0x31
7101ce65b4  b.cc 0x7101ce66a8
7101ce65b8  cmp w20,#0x3d
7101ce65bc  b.cc 0x7101ce66b0
7101ce65c0  cmp w20,#0x4c
7101ce65c4  b.cc 0x7101ce66b8
7101ce65c8  cmp w20,#0x64
7101ce65cc  mov w8,#0x9
7101ce65d0  csinc w3,w8,wzr,ls
7101ce65d4  b 0x7101ce66bc
7101ce65d8  ldrb w8,[x26, #0x67]
7101ce65dc  cmp w8,#0x1
7101ce65e0  b.ne 0x7101ce663c
7101ce65e4  orr x8,xzr,#0x600000000
7101ce65e8  stur x8,[x29, #-0xc0]
7101ce65ec  mov w8,#0x6d63
7101ce65f0  movk w8,#0x5f6e, LSL #16
7101ce65f4  stur w8,[x29, #-0xb8]
7101ce65f8  mov w8,#0x7066
7101ce65fc  sturh w8,[x29, #-0xb4]
7101ce6600  ldr x8,[sp, #0x28]
7101ce6604  mov w10,#0x63
7101ce6608  mov w9,#0x9dc5
7101ce660c  movk w9,#0x811c, LSL #16
7101ce6610  sturb wzr,[x29, #-0xb2]
7101ce6614  mul w9,w9,w23
7101ce6618  and w10,w10,#0xff
7101ce661c  eor w9,w9,w10
7101ce6620  ldrb w10,[x8], #0x1
7101ce6624  cbnz w10,0x7101ce6614
7101ce6628  add x0,sp,#0xe8
7101ce662c  mov x1,x24
7101ce6630  stur w9,[x29, #-0xc0]
7101ce6634  bl 0x710377a120
7101ce6638  b 0x7101ce66d0
7101ce663c  ldr x0,[x19, #0x168]
7101ce6640  ldr w2,[sp, #0x60]
7101ce6644  mov x1,x21
7101ce6648  bl 0x7103263540
7101ce664c  ldr x1,[x19, #0x168]
7101ce6650  mov w20,w0
7101ce6654  sub x0,x29,#0xc0
7101ce6658  mov x2,x21
7101ce665c  bl 0x7103262310
7101ce6660  add x8,sp,#0xa0
7101ce6664  adrp x0,0x710439b000
7101ce6668  add x0,x0,#0x815
7101ce666c  mov w1,w20
7101ce6670  mov x2,x24
7101ce6674  bl 0x71003a4ca0
7101ce6678  ldr x1,[sp, #0x38]
7101ce667c  add x0,sp,#0xe8
7101ce6680  bl 0x710377a120
7101ce6684  b 0x7101ce66d0
7101ce6688  mov w3,#0x1
7101ce668c  b 0x7101ce66bc
7101ce6690  mov w3,#0x2
7101ce6694  b 0x7101ce66bc
7101ce6698  orr w3,wzr,#0x3
7101ce669c  b 0x7101ce66bc
7101ce66a0  mov w3,#0x4
7101ce66a4  b 0x7101ce66bc
7101ce66a8  orr w3,wzr,#0x6
7101ce66ac  b 0x7101ce66bc
7101ce66b0  orr w3,wzr,#0x7
7101ce66b4  b 0x7101ce66bc
7101ce66b8  mov w3,#0x8
7101ce66bc  add x0,sp,#0xe8
7101ce66c0  mov w2,#0x1
7101ce66c4  adrp x1,0x710438c000
7101ce66c8  add x1,x1,#0xc0f
7101ce66cc  bl 0x710377a280
7101ce66d0  ldr w2,[sp, #0x5c]
7101ce66d4  cmp w28,#0x3
7101ce66d8  cinc w3,w28,gt
7101ce66dc  add x8,sp,#0x90
7101ce66e0  sub x0,x29,#0xd0
7101ce66e4  adrp x1,0x7104280000
7101ce66e8  add x1,x1,#0xb7f
7101ce66ec  bl 0x7103776640
7101ce66f0  sub x8,x29,#0xc0
7101ce66f4  add x0,sp,#0x90
7101ce66f8  adrp x1,0x71042b4000
7101ce66fc  add x1,x1,#0x55c
7101ce6700  bl 0x71037780e0
7101ce6704  sub x0,x29,#0xc0
7101ce6708  bl 0x710377b140
7101ce670c  ldur x0,[x29, #-0xb8]
7101ce6710  adrp x8,0x710523d000
7101ce6714  add x8,x8,#0x9e8
7101ce6718  stp x8,xzr,[x29, #-0xc0]
7101ce671c  cbz x0,0x7101ce6724
7101ce6720  bl 0x710392eb40
7101ce6724  ldr x26,[sp, #0x98]
7101ce6728  ldr x10,[x26, #0x8]
7101ce672c  tst x21,#0xffffffffff
7101ce6730  and x9,x21,#-0x100000000000000
7101ce6734  cset w8,ne
7101ce6738  cmp x9,x22
7101ce673c  cset w9,eq
7101ce6740  cbz x10,0x7101ce6760
7101ce6744  ldr x10,[x10, #0x18]
7101ce6748  cbz x10,0x7101ce6760
7101ce674c  and w8,w9,w8
7101ce6750  ldrb w9,[x10, #0x58]
7101ce6754  and w9,w9,#0xfe
7101ce6758  orr w8,w9,w8
7101ce675c  strb w8,[x10, #0x58]
7101ce6760  ldur x8,[x29, #-0x68]
7101ce6764  ldrb w8,[x8, #0x67]
7101ce6768  cbz w8,0x7101ce6998
7101ce676c  ldrb w20,[x27, #0x11]
7101ce6770  ldr x8,[x26, #0x8]
7101ce6774  cbz x8,0x7101ce69a4
7101ce6778  add x8,sp,#0x80
7101ce677c  add x0,sp,#0x90
7101ce6780  adrp x1,0x7104443000
7101ce6784  add x1,x1,#0x8d6
7101ce6788  bl 0x7103776910
7101ce678c  add x8,sp,#0x70
7101ce6790  add x0,sp,#0x90
7101ce6794  adrp x1,0x7104454000
7101ce6798  add x1,x1,#0xba8
7101ce679c  bl 0x7103776910
7101ce67a0  ldr x8,[sp, #0x48]
7101ce67a4  ldr w1,[sp, #0x60]
7101ce67a8  mov w2,#0x1
7101ce67ac  mov x0,x21
7101ce67b0  ldr x19,[x8, #0x238]
7101ce67b4  bl 0x7103238a70
7101ce67b8  tst x0,#0xffffffffff
7101ce67bc  stur x0,[x29, #-0xc0]
7101ce67c0  b.eq 0x7101ce67d8
7101ce67c4  ldr x0,[x19]
7101ce67c8  ldrsw x2,[x0, #0x70]
7101ce67cc  ldr w3,[x0, #0x68]
7101ce67d0  sub x1,x29,#0xc0
7101ce67d4  bl 0x710323c4e0
7101ce67d8  ldr x8,[sp, #0x48]
7101ce67dc  ldr x0,[x8, #0x238]
7101ce67e0  ldr w2,[sp, #0x60]
7101ce67e4  mov w3,#0x1
7101ce67e8  mov x1,x21
7101ce67ec  bl 0x710323f330
7101ce67f0  ldr x8,[x0, #0x8]
7101ce67f4  mov x22,x0
7101ce67f8  ldr x0,[sp, #0x88]
7101ce67fc  ldr x8,[x8]
7101ce6800  str x0,[sp, #0x40]
7101ce6804  cbz x8,0x7101ce68fc
7101ce6808  ldr x8,[x0]
7101ce680c  cbz x8,0x7101ce68fc
7101ce6810  ldr x19,[sp, #0x78]
7101ce6814  ldr x8,[x19]
7101ce6818  cbz x8,0x7101ce68fc
7101ce681c  mov x1,x22
7101ce6820  str x19,[sp, #0x18]
7101ce6824  bl 0x7103778b80
7101ce6828  mov x0,x19
7101ce682c  mov x1,x22
7101ce6830  bl 0x7103778b80
7101ce6834  adrp x8,0x710532f000
7101ce6838  ldr x8,[x8, #0x730]
7101ce683c  ldr x19,[x8, #0x8]
7101ce6840  ldr x0,[x19, #0x2a8]
7101ce6844  ldr w2,[sp, #0x60]
7101ce6848  mov x1,x21
7101ce684c  bl 0x7103280ec0
7101ce6850  ldr x8,[x19, #0x2a8]
7101ce6854  ldr x22,[x8, #0x8]
7101ce6858  mov v0.16B,v9.16B
7101ce685c  mov w21,w0
7101ce6860  mov x2,#0xcf4f
7101ce6864  movk x2,#0xae7, LSL #16
7101ce6868  mov w1,w21
7101ce686c  movk x2,#0x12, LSL #32
7101ce6870  mov x0,x22
7101ce6874  bl 0x710326ad60
7101ce6878  str d0,[sp, #0x60]
7101ce687c  mov v0.16B,v9.16B
7101ce6880  mov x2,#0xffd9
7101ce6884  movk x2,#0x7de0, LSL #16
7101ce6888  mov x0,x22
7101ce688c  mov w1,w21
7101ce6890  movk x2,#0x12, LSL #32
7101ce6894  bl 0x710326ad60
7101ce6898  str d0,[sp]
7101ce689c  mov v0.16B,v8.16B
7101ce68a0  mov x2,#0xc649
7101ce68a4  movk x2,#0x95a1, LSL #16
7101ce68a8  mov x0,x22
7101ce68ac  mov w1,w21
7101ce68b0  movk x2,#0xf, LSL #32
7101ce68b4  bl 0x710326ad60
7101ce68b8  ldr q1,[sp, #0x60]
7101ce68bc  mov v10.16B,v0.16B
7101ce68c0  movi v0.2D,#0x0
7101ce68c4  mov v0.S[0x0],v1.S[0x0]
7101ce68c8  ldr q1,[sp]
7101ce68cc  mov v0.S[0x1],v1.S[0x0]
7101ce68d0  ldr x0,[sp, #0x40]
7101ce68d4  stur q0,[x29, #-0xc0]
7101ce68d8  mov v0.16B,v10.16B
7101ce68dc  sub x1,x29,#0xc0
7101ce68e0  bl 0x7103779770
7101ce68e4  ldr x0,[sp, #0x18]
7101ce68e8  mov v0.16B,v10.16B
7101ce68ec  sub x1,x29,#0xc0
7101ce68f0  mov x21,x0
7101ce68f4  bl 0x7103779770
7101ce68f8  b 0x7101ce6914
7101ce68fc  mov w1,#0x1
7101ce6900  bl 0x71037790a0
7101ce6904  ldr x0,[sp, #0x78]
7101ce6908  mov w1,#0x1
7101ce690c  mov x21,x0
7101ce6910  bl 0x71037790a0
7101ce6914  ldur x8,[x29, #-0x68]
7101ce6918  ldrb w8,[x8, #0x64]
7101ce691c  sturb wzr,[x29, #-0xb8]
7101ce6920  stur xzr,[x29, #-0xc0]
7101ce6924  cmp w8,#0x12
7101ce6928  csinv w8,w20,wzr,ne
7101ce692c  cmp w8,#0x4
7101ce6930  mov x22,#-0x3f00000000000000
7101ce6934  b.cs 0x7101ce69bc
7101ce6938  add w1,w8,#0x1
7101ce693c  add x8,sp,#0xa0
7101ce6940  adrp x0,0x71042a1000
7101ce6944  add x0,x0,#0x88a
7101ce6948  bl 0x71003a4ca0
7101ce694c  ldr x12,[sp, #0x38]
7101ce6950  mov x8,xzr
7101ce6954  adrp x19,0x710523d000
7101ce6958  add x19,x19,#0x9a8
7101ce695c  add x9,x12,x8
7101ce6960  ldrb w10,[x9]
7101ce6964  cbz w10,0x7101ce6ba4
7101ce6968  ldrb w11,[x9, #0x1]
7101ce696c  strb w10,[x24, x8, LSL ]
7101ce6970  cbz w11,0x7101ce6b98
7101ce6974  ldrb w9,[x9, #0x2]
7101ce6978  add x10,x24,x8
7101ce697c  strb w11,[x10, #0x1]
7101ce6980  cbz w9,0x7101ce6ba0
7101ce6984  add x8,x8,#0x3
7101ce6988  cmp w8,#0x3f
7101ce698c  strb w9,[x10, #0x2]
7101ce6990  b.cc 0x7101ce695c
7101ce6994  b 0x7101ce6ba4
7101ce6998  mov w20,#0xffffffff
7101ce699c  ldr x8,[x26, #0x8]
7101ce69a0  cbnz x8,0x7101ce6778
7101ce69a4  adrp x8,0x710523d000
7101ce69a8  add x8,x8,#0x988
7101ce69ac  adrp x19,0x710523d000
7101ce69b0  add x19,x19,#0x9a8
7101ce69b4  stp x8,xzr,[sp, #0x90]
7101ce69b8  b 0x7101ce6d28
7101ce69bc  ldr x13,[sp, #0x20]
7101ce69c0  cmp w25,#0x2
7101ce69c4  b.eq 0x7101ce6a30
7101ce69c8  cmp w25,#0x1
7101ce69cc  b.ne 0x7101ce6ae4
7101ce69d0  add w1,w28,#0x1
7101ce69d4  add x8,sp,#0xa0
7101ce69d8  adrp x0,0x7104410000
7101ce69dc  add x0,x0,#0xef8
7101ce69e0  bl 0x71003a4ca0
7101ce69e4  ldr x12,[sp, #0x38]
7101ce69e8  mov x8,xzr
7101ce69ec  adrp x19,0x710523d000
7101ce69f0  add x19,x19,#0x9a8
7101ce69f4  add x9,x12,x8
7101ce69f8  ldrb w10,[x9]
7101ce69fc  cbz w10,0x7101ce6c04
7101ce6a00  ldrb w11,[x9, #0x1]
7101ce6a04  strb w10,[x24, x8, LSL ]
7101ce6a08  cbz w11,0x7101ce6be8
7101ce6a0c  ldrb w9,[x9, #0x2]
7101ce6a10  add x10,x24,x8
7101ce6a14  strb w11,[x10, #0x1]
7101ce6a18  cbz w9,0x7101ce6c00
7101ce6a1c  add x8,x8,#0x3
7101ce6a20  cmp w8,#0x3f
7101ce6a24  strb w9,[x10, #0x2]
7101ce6a28  b.cc 0x7101ce69f4
7101ce6a2c  b 0x7101ce6c04
7101ce6a30  orr x8,xzr,#0xf00000000
7101ce6a34  str x8,[sp, #0xa0]
7101ce6a38  mov x8,#0x6c70
7101ce6a3c  movk x8,#0x7961, LSL #16
7101ce6a40  movk x8,#0x7265, LSL #32
7101ce6a44  movk x8,#0x635f, LSL #48
7101ce6a48  mov x11,#0x6c6f
7101ce6a4c  movk x11,#0x726f, LSL #16
7101ce6a50  str x8,[sp, #0xa8]
7101ce6a54  orr w10,wzr,#0x70
7101ce6a58  mov x8,x13
7101ce6a5c  mov w9,#0x9dc5
7101ce6a60  movk w9,#0x811c, LSL #16
7101ce6a64  movk x11,#0x635f, LSL #32
7101ce6a68  movk x11,#0x70, LSL #48
7101ce6a6c  str x11,[sp, #0xb0]
7101ce6a70  mul w9,w9,w23
7101ce6a74  and w10,w10,#0xff
7101ce6a78  eor w9,w9,w10
7101ce6a7c  ldrb w10,[x8], #0x1
7101ce6a80  cbnz w10,0x7101ce6a70
7101ce6a84  mov x8,xzr
7101ce6a88  str w9,[sp, #0xa0]
7101ce6a8c  orr w9,wzr,#0x70
7101ce6a90  adrp x19,0x710523d000
7101ce6a94  add x19,x19,#0x9a8
7101ce6a98  tst w9,#0xff
7101ce6a9c  b.eq 0x7101ce6c5c
7101ce6aa0  ldrb w11,[x13, x8, LSL ]
7101ce6aa4  strb w9,[x24, x8, LSL ]
7101ce6aa8  cbz w11,0x7101ce6bf0
7101ce6aac  add x9,x13,x8
7101ce6ab0  add x10,x24,x8
7101ce6ab4  strb w11,[x10, #0x1]
7101ce6ab8  ldrb w11,[x9, #0x1]
7101ce6abc  cbz w11,0x7101ce6c48
7101ce6ac0  add w12,w8,#0x3
7101ce6ac4  cmp w12,#0x3e
7101ce6ac8  strb w11,[x10, #0x2]
7101ce6acc  b.hi 0x7101ce6c58
7101ce6ad0  ldrb w9,[x9, #0x2]
7101ce6ad4  add x8,x8,#0x3
7101ce6ad8  tst w9,#0xff
7101ce6adc  b.ne 0x7101ce6aa0
7101ce6ae0  b 0x7101ce6c5c
7101ce6ae4  orr x8,xzr,#0xf00000000
7101ce6ae8  str x8,[sp, #0xa0]
7101ce6aec  mov x8,#0x6c70
7101ce6af0  movk x8,#0x7961, LSL #16
7101ce6af4  movk x8,#0x7265, LSL #32
7101ce6af8  movk x8,#0x635f, LSL #48
7101ce6afc  mov x11,#0x6c6f
7101ce6b00  movk x11,#0x726f, LSL #16
7101ce6b04  str x8,[sp, #0xa8]
7101ce6b08  orr w10,wzr,#0x70
7101ce6b0c  mov x8,x13
7101ce6b10  mov w9,#0x9dc5
7101ce6b14  movk w9,#0x811c, LSL #16
7101ce6b18  movk x11,#0x665f, LSL #32
7101ce6b1c  movk x11,#0x70, LSL #48
7101ce6b20  str x11,[sp, #0xb0]
7101ce6b24  adrp x19,0x710523d000
7101ce6b28  add x19,x19,#0x9a8
7101ce6b2c  mul w9,w9,w23
7101ce6b30  and w10,w10,#0xff
7101ce6b34  eor w9,w9,w10
7101ce6b38  ldrb w10,[x8], #0x1
7101ce6b3c  cbnz w10,0x7101ce6b2c
7101ce6b40  mov x8,xzr
7101ce6b44  str w9,[sp, #0xa0]
7101ce6b48  orr w9,wzr,#0x70
7101ce6b4c  tst w9,#0xff
7101ce6b50  b.eq 0x7101ce6ca4
7101ce6b54  ldrb w11,[x13, x8, LSL ]
7101ce6b58  strb w9,[x24, x8, LSL ]
7101ce6b5c  cbz w11,0x7101ce6bf8
7101ce6b60  add x9,x13,x8
7101ce6b64  add x10,x24,x8
7101ce6b68  strb w11,[x10, #0x1]
7101ce6b6c  ldrb w11,[x9, #0x1]
7101ce6b70  cbz w11,0x7101ce6c50
7101ce6b74  add w12,w8,#0x3
7101ce6b78  cmp w12,#0x3e
7101ce6b7c  strb w11,[x10, #0x2]
7101ce6b80  b.hi 0x7101ce6ca0
7101ce6b84  ldrb w9,[x9, #0x2]
7101ce6b88  add x8,x8,#0x3
7101ce6b8c  tst w9,#0xff
7101ce6b90  b.ne 0x7101ce6b54
7101ce6b94  b 0x7101ce6ca4
7101ce6b98  add x8,x8,#0x1
7101ce6b9c  b 0x7101ce6ba4
7101ce6ba0  add x8,x8,#0x2
7101ce6ba4  sub x9,x29,#0xc0
7101ce6ba8  add x9,x9,#0x8
7101ce6bac  strb wzr,[x9, w8, UXTW ]
7101ce6bb0  stur w8,[x29, #-0xbc]
7101ce6bb4  ldurb w8,[x29, #-0xb8]
7101ce6bb8  mov w9,#0x9dc5
7101ce6bbc  movk w9,#0x811c, LSL #16
7101ce6bc0  cbz w8,0x7101ce6ce4
7101ce6bc4  ldr x10,[sp, #0x28]
7101ce6bc8  mov w9,#0x9dc5
7101ce6bcc  movk w9,#0x811c, LSL #16
7101ce6bd0  mul w9,w9,w23
7101ce6bd4  and w8,w8,#0xff
7101ce6bd8  eor w9,w9,w8
7101ce6bdc  ldrb w8,[x10], #0x1
7101ce6be0  cbnz w8,0x7101ce6bd0
7101ce6be4  b 0x7101ce6ce4
7101ce6be8  add x8,x8,#0x1
7101ce6bec  b 0x7101ce6c04
7101ce6bf0  add x8,x8,#0x1
7101ce6bf4  b 0x7101ce6c5c
7101ce6bf8  add x8,x8,#0x1
7101ce6bfc  b 0x7101ce6ca4
7101ce6c00  add x8,x8,#0x2
7101ce6c04  sub x9,x29,#0xc0
7101ce6c08  add x9,x9,#0x8
7101ce6c0c  strb wzr,[x9, w8, UXTW ]
7101ce6c10  stur w8,[x29, #-0xbc]
7101ce6c14  ldurb w8,[x29, #-0xb8]
7101ce6c18  mov w9,#0x9dc5
7101ce6c1c  movk w9,#0x811c, LSL #16
7101ce6c20  cbz w8,0x7101ce6ce4
7101ce6c24  ldr x10,[sp, #0x28]
7101ce6c28  mov w9,#0x9dc5
7101ce6c2c  movk w9,#0x811c, LSL #16
7101ce6c30  mul w9,w9,w23
7101ce6c34  and w8,w8,#0xff
7101ce6c38  eor w9,w9,w8
7101ce6c3c  ldrb w8,[x10], #0x1
7101ce6c40  cbnz w8,0x7101ce6c30
7101ce6c44  b 0x7101ce6ce4
7101ce6c48  add x8,x8,#0x2
7101ce6c4c  b 0x7101ce6c5c
7101ce6c50  add x8,x8,#0x2
7101ce6c54  b 0x7101ce6ca4
7101ce6c58  add w8,w8,#0x3
7101ce6c5c  sub x9,x29,#0xc0
7101ce6c60  add x9,x9,#0x8
7101ce6c64  strb wzr,[x9, w8, UXTW ]
7101ce6c68  stur w8,[x29, #-0xbc]
7101ce6c6c  ldurb w8,[x29, #-0xb8]
7101ce6c70  mov w9,#0x9dc5
7101ce6c74  movk w9,#0x811c, LSL #16
7101ce6c78  cbz w8,0x7101ce6ce4
7101ce6c7c  ldr x10,[sp, #0x28]
7101ce6c80  mov w9,#0x9dc5
7101ce6c84  movk w9,#0x811c, LSL #16
7101ce6c88  mul w9,w9,w23
7101ce6c8c  and w8,w8,#0xff
7101ce6c90  eor w9,w9,w8
7101ce6c94  ldrb w8,[x10], #0x1
7101ce6c98  cbnz w8,0x7101ce6c88
7101ce6c9c  b 0x7101ce6ce4
7101ce6ca0  add w8,w8,#0x3
7101ce6ca4  sub x9,x29,#0xc0
7101ce6ca8  add x9,x9,#0x8
7101ce6cac  strb wzr,[x9, w8, UXTW ]
7101ce6cb0  stur w8,[x29, #-0xbc]
7101ce6cb4  ldurb w8,[x29, #-0xb8]
7101ce6cb8  mov w9,#0x9dc5
7101ce6cbc  movk w9,#0x811c, LSL #16
7101ce6cc0  cbz w8,0x7101ce6ce4
7101ce6cc4  ldr x10,[sp, #0x28]
7101ce6cc8  mov w9,#0x9dc5
7101ce6ccc  movk w9,#0x811c, LSL #16
7101ce6cd0  mul w9,w9,w23
7101ce6cd4  and w8,w8,#0xff
7101ce6cd8  eor w9,w9,w8
7101ce6cdc  ldrb w8,[x10], #0x1
7101ce6ce0  cbnz w8,0x7101ce6cd0
7101ce6ce4  mov v0.16B,v8.16B
7101ce6ce8  mov x0,x26
7101ce6cec  mov x1,x24
7101ce6cf0  stur w9,[x29, #-0xc0]
7101ce6cf4  bl 0x7103778300
7101ce6cf8  stp x19,xzr,[sp, #0x70]
7101ce6cfc  cbz x21,0x7101ce6d08
7101ce6d00  mov x0,x21
7101ce6d04  bl 0x710392eb40
7101ce6d08  ldr x0,[sp, #0x40]
7101ce6d0c  stp x19,xzr,[sp, #0x80]
7101ce6d10  cbz x0,0x7101ce6d18
7101ce6d14  bl 0x710392eb40
7101ce6d18  adrp x8,0x710523d000
7101ce6d1c  add x8,x8,#0x988
7101ce6d20  stp x8,xzr,[sp, #0x90]
7101ce6d24  cbz x26,0x7101ce6d40
7101ce6d28  ldr x0,[x26, #0x18]
7101ce6d2c  stp x19,xzr,[x26, #0x10]
7101ce6d30  cbz x0,0x7101ce6d38
7101ce6d34  bl 0x710392eb40
7101ce6d38  mov x0,x26
7101ce6d3c  bl 0x710392eb40
7101ce6d40  ldur x26,[x29, #-0x68]
7101ce6d44  ldr x0,[sp, #0xf0]
7101ce6d48  adrp x25,0x710523d000
7101ce6d4c  add x25,x25,#0x9a8
7101ce6d50  stp x25,xzr,[sp, #0xe8]
7101ce6d54  cbz x0,0x7101ce6d5c
7101ce6d58  bl 0x710392eb40
7101ce6d5c  ldr x13,[sp, #0x50]
7101ce6d60  add x27,x27,#0x50
7101ce6d64  cmp x27,x13
7101ce6d68  b.ne 0x7101ce646c
7101ce6d6c  ldp x9,x8,[sp, #0xf8]
7101ce6d70  sub x8,x8,x9
7101ce6d74  mov w9,#0xaaab
7101ce6d78  movk w9,#0xaaaa, LSL #16
7101ce6d7c  lsr x8,x8,#0x3
7101ce6d80  mul w4,w8,w9
7101ce6d84  ldr w8,[sp, #0x34]
7101ce6d88  sturb wzr,[x29, #-0xb8]
7101ce6d8c  stur xzr,[x29, #-0xc0]
7101ce6d90  tbz w8,#0x0,0x7101ce6db4
7101ce6d94  cmp w4,#0x4
7101ce6d98  mov w8,#0x4
7101ce6d9c  csel w2,w4,w8,lt
7101ce6da0  adrp x1,0x710439d000
7101ce6da4  add x1,x1,#0x5a1
7101ce6da8  sub x0,x29,#0xc0
7101ce6dac  bl 0x710062dc20
7101ce6db0  b 0x7101ce6e68
7101ce6db4  ldrb w8,[x26, #0x64]
7101ce6db8  cmp w8,#0x12
7101ce6dbc  b.ne 0x7101ce6e40
7101ce6dc0  adrp x1,0x710439d000
7101ce6dc4  add x1,x1,#0x5b6
7101ce6dc8  sub x0,x29,#0xc0
7101ce6dcc  mov w2,w4
7101ce6dd0  bl 0x710062dc20
7101ce6dd4  adrp x8,0x7104472000
7101ce6dd8  ldr s0,[x26, #0x300]
7101ce6ddc  adrp x1,0x7104308000
7101ce6de0  add x1,x1,#0x68e
7101ce6de4  ldr s1,[x8, #0x598]
7101ce6de8  mov w8,#0x3e8
7101ce6dec  fdiv s1,s0,s1
7101ce6df0  fcvtzs w20,s1
7101ce6df4  mul w8,w20,w8
7101ce6df8  scvtf s1,w8
7101ce6dfc  add x8,sp,#0xa0
7101ce6e00  fsub s0,s0,s1
7101ce6e04  sub x0,x29,#0xd0
7101ce6e08  fcvtzs w21,s0
7101ce6e0c  bl 0x7103776910
7101ce6e10  adrp x1,0x71042a3000
7101ce6e14  add x1,x1,#0x200
7101ce6e18  add x0,sp,#0xa0
7101ce6e1c  mov w2,#0x2
7101ce6e20  mov w3,w20
7101ce6e24  mov w4,w21
7101ce6e28  bl 0x710377a280
7101ce6e2c  ldr x0,[sp, #0xa8]
7101ce6e30  stp x25,xzr,[sp, #0xa0]
7101ce6e34  cbz x0,0x7101ce6e68
7101ce6e38  bl 0x710392eb40
7101ce6e3c  b 0x7101ce6e68
7101ce6e40  cmp w4,#0x5
7101ce6e44  mov w8,#0x4
7101ce6e48  cinc w2,w8,lt
7101ce6e4c  mov w8,#0x2
7101ce6e50  mov w9,#0x5
7101ce6e54  csel w3,w8,w9,lt
7101ce6e58  adrp x1,0x71043be000
7101ce6e5c  add x1,x1,#0x7c8
7101ce6e60  sub x0,x29,#0xc0
7101ce6e64  bl 0x710062dc20
7101ce6e68  ldur x20,[x29, #-0xc8]
7101ce6e6c  fmov s0,0x3f800000
7101ce6e70  sub x8,x29,#0xc0
7101ce6e74  add x1,x8,#0x8
7101ce6e78  mov x0,x20
7101ce6e7c  bl 0x7103778300
7101ce6e80  ldr x0,[sp, #0xf8]
7101ce6e84  cbz x0,0x7101ce6e90
7101ce6e88  str x0,[sp, #0x100]
7101ce6e8c  bl 0x710392eb40
7101ce6e90  adrp x1,0x71042b4000
7101ce6e94  add x1,x1,#0x53f
7101ce6e98  sub x8,x29,#0xc0
7101ce6e9c  sub x0,x29,#0xd0
7101ce6ea0  bl 0x7103776910
7101ce6ea4  adrp x1,0x7104433000
7101ce6ea8  add x1,x1,#0x2f2
7101ce6eac  sub x0,x29,#0xc0
7101ce6eb0  bl 0x710377a120
7101ce6eb4  ldur x0,[x29, #-0xb8]
7101ce6eb8  stp x25,xzr,[x29, #-0xc0]
7101ce6ebc  cbz x0,0x7101ce6ec4
7101ce6ec0  bl 0x710392eb40
7101ce6ec4  adrp x8,0x710532f000
7101ce6ec8  ldr x8,[x8, #0x730]
7101ce6ecc  ldr x23,[x8, #0x8]
7101ce6ed0  ldrsw x8,[x26, #0x2f8]
7101ce6ed4  add x0,x23,#0x170
7101ce6ed8  cmp w8,#0x16b
7101ce6edc  b.hi 0x7101ce6ef8
7101ce6ee0  adrp x9,0x710454a000
7101ce6ee4  add x9,x9,#0x7e8
7101ce6ee8  mov w10,#0x48
7101ce6eec  madd x8,x8,x10,x9
7101ce6ef0  ldr w1,[x8, #0x4]
7101ce6ef4  b 0x7101ce6efc
7101ce6ef8  mov w1,#0xffffffff
7101ce6efc  bl 0x71032b24e0
7101ce6f00  mov x19,x0
7101ce6f04  adrp x1,0x7104319000
7101ce6f08  add x1,x1,#0x2e
7101ce6f0c  add x8,sp,#0xf8
7101ce6f10  sub x0,x29,#0xd0
7101ce6f14  bl 0x7103776910
7101ce6f18  ldr x1,[x23, #0x178]
7101ce6f1c  sub x0,x29,#0xc0
7101ce6f20  mov x2,x19
7101ce6f24  sub x21,x29,#0xc0
7101ce6f28  bl 0x71032b1a60
7101ce6f2c  add x21,x21,#0x8
7101ce6f30  adrp x0,0x7104452000
7101ce6f34  add x0,x0,#0xf57
7101ce6f38  add x8,sp,#0xa0
7101ce6f3c  mov x1,x21
7101ce6f40  add x22,sp,#0xa0
7101ce6f44  bl 0x71003a4ca0
7101ce6f48  add x22,x22,#0x8
7101ce6f4c  add x0,sp,#0xf8
7101ce6f50  mov x1,x22
7101ce6f54  bl 0x710377a120
7101ce6f58  ldr x0,[sp, #0x100]
7101ce6f5c  stp x25,xzr,[sp, #0xf8]
7101ce6f60  cbz x0,0x7101ce6f68
7101ce6f64  bl 0x710392eb40
7101ce6f68  adrp x1,0x7104291000
7101ce6f6c  add x1,x1,#0xdc1
7101ce6f70  add x8,sp,#0xf8
7101ce6f74  sub x0,x29,#0xd0
7101ce6f78  bl 0x7103776910
7101ce6f7c  ldr x1,[x23, #0x178]
7101ce6f80  sub x0,x29,#0xc0
7101ce6f84  mov x2,x19
7101ce6f88  bl 0x71032b1a60
7101ce6f8c  adrp x0,0x7104452000
7101ce6f90  add x0,x0,#0xf57
7101ce6f94  add x8,sp,#0xa0
7101ce6f98  mov x1,x21
7101ce6f9c  bl 0x71003a4ca0
7101ce6fa0  add x0,sp,#0xf8
7101ce6fa4  mov x1,x22
7101ce6fa8  bl 0x710377a120
7101ce6fac  ldr x0,[sp, #0x100]
7101ce6fb0  stp x25,xzr,[sp, #0xf8]
7101ce6fb4  cbz x0,0x7101ce6fbc
7101ce6fb8  bl 0x710392eb40
7101ce6fbc  adrp x8,0x710523d000
7101ce6fc0  add x8,x8,#0x988
7101ce6fc4  stp x8,xzr,[x29, #-0xd0]
7101ce6fc8  cbz x20,0x7101ce6fe4
7101ce6fcc  ldr x0,[x20, #0x18]
7101ce6fd0  stp x25,xzr,[x20, #0x10]
7101ce6fd4  cbz x0,0x7101ce6fdc
7101ce6fd8  bl 0x710392eb40
7101ce6fdc  mov x0,x20
7101ce6fe0  bl 0x710392eb40
7101ce6fe4  add sp,sp,#0x190
7101ce6fe8  ldp d9,d8,[sp, #0x10]
7101ce6fec  ldp x29,x30,[sp, #0x70]
7101ce6ff0  ldp x20,x19,[sp, #0x60]
7101ce6ff4  ldp x22,x21,[sp, #0x50]
7101ce6ff8  ldp x24,x23,[sp, #0x40]
7101ce6ffc  ldp x26,x25,[sp, #0x30]
7101ce7000  ldp x28,x27,[sp, #0x20]
7101ce7004  ldr d10,[sp], #0x80
7101ce7008  ret
7101ce700c  add x0,sp,#0xf8
7101ce7010  bl 0x71039c0c00
