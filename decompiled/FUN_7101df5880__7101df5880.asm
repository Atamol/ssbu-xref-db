// addr:      7101df5880
// offset:    0x1df5880
// name:      FUN_7101df5880
// mangled:   
// size:      1780

7101df5880  sub sp,sp,#0x110
7101df5884  stp x28,x27,[sp, #0xb0]
7101df5888  stp x26,x25,[sp, #0xc0]
7101df588c  stp x24,x23,[sp, #0xd0]
7101df5890  stp x22,x21,[sp, #0xe0]
7101df5894  stp x20,x19,[sp, #0xf0]
7101df5898  stp x29,x30,[sp, #0x100]
7101df589c  add x29,sp,#0x100
7101df58a0  ldrb w8,[x0, #0x6c1]
7101df58a4  mov x20,x0
7101df58a8  cbz w8,0x7101df5b6c
7101df58ac  add x19,x20,#0x18
7101df58b0  adrp x1,0x710435b000
7101df58b4  add x1,x1,#0xcc8
7101df58b8  add x8,sp,#0x10
7101df58bc  mov x0,x19
7101df58c0  bl 0x7103776910
7101df58c4  ldr x0,[sp, #0x18]
7101df58c8  ldr x8,[x0]
7101df58cc  cbz x8,0x7101df58dc
7101df58d0  ldrb w9,[x8, #0x58]
7101df58d4  orr w9,w9,#0x1
7101df58d8  strb w9,[x8, #0x58]
7101df58dc  adrp x21,0x710523d000
7101df58e0  add x21,x21,#0x9a8
7101df58e4  stp x21,xzr,[sp, #0x10]
7101df58e8  cbz x0,0x7101df58f0
7101df58ec  bl 0x710392eb40
7101df58f0  adrp x1,0x7104292000
7101df58f4  add x1,x1,#0x162
7101df58f8  add x8,sp,#0x10
7101df58fc  mov x0,x19
7101df5900  bl 0x7103776910
7101df5904  ldr w3,[x20, #0x6c4]
7101df5908  adrp x1,0x71043ad000
7101df590c  add x1,x1,#0xcec
7101df5910  add x0,sp,#0x10
7101df5914  mov w2,#0x1
7101df5918  bl 0x710377a280
7101df591c  ldr x0,[sp, #0x18]
7101df5920  stp x21,xzr,[sp, #0x10]
7101df5924  cbz x0,0x7101df592c
7101df5928  bl 0x710392eb40
7101df592c  add x0,x20,#0x60
7101df5930  sub x1,x29,#0x70
7101df5934  stur xzr,[x29, #-0x70]
7101df5938  stp xzr,xzr,[x29, #-0x68]
7101df593c  bl 0x7101e02ee0
7101df5940  ldp x9,x8,[x29, #-0x70]
7101df5944  mov w21,wzr
7101df5948  str wzr,[sp, #0x88]
7101df594c  stp xzr,xzr,[sp, #0x78]
7101df5950  cmp x8,x9
7101df5954  b.eq 0x7101df5a80
7101df5958  orr x25,xzr,#-0x3333333333333334
7101df595c  mov x26,xzr
7101df5960  mov w21,wzr
7101df5964  mov w22,#0x1
7101df5968  orr w23,wzr,#0xffff
7101df596c  adrp x24,0x710532f000
7101df5970  movk x25,#0xcccd
7101df5974  add x28,sp,#0x78
7101df5978  adrp x27,0x7105182000
7101df597c  add x27,x27,#0xb08
7101df5980  ldr x10,[x9, x26, LSL #0x3]
7101df5984  ldrh w0,[x10]
7101df5988  cmp w0,w23
7101df598c  b.eq 0x7101df5a14
7101df5990  bl 0x71025ca5d0
7101df5994  ldp x9,x8,[x29, #-0x70]
7101df5998  sub x10,x8,x9
7101df599c  asr x10,x10,#0x3
7101df59a0  cmp x10,x26
7101df59a4  b.ls 0x7101df5f68
7101df59a8  ldr x12,[x9, x26, LSL #0x3]
7101df59ac  ldrsh w12,[x12, #0x8]
7101df59b0  mov w11,wzr
7101df59b4  cmn w12,#0x1
7101df59b8  b.eq 0x7101df5a58
7101df59bc  cmp w12,#0x7cf
7101df59c0  b.gt 0x7101df5a58
7101df59c4  sxtw x11,w12
7101df59c8  ldr x12,[x24, #0x730]
7101df59cc  ldr x12,[x12, #0x8]
7101df59d0  ldr x13,[x12, #0x1d8]
7101df59d4  add x11,x13,x11, LSL #0x1
7101df59d8  ldrh w11,[x11, #0x60]
7101df59dc  ldp x12,x13,[x13, #0x20]
7101df59e0  sub x13,x13,x12
7101df59e4  asr x13,x13,#0x6
7101df59e8  mul x13,x13,x25
7101df59ec  cmp w13,w11
7101df59f0  b.ls 0x7101df5a54
7101df59f4  mov w14,#0x140
7101df59f8  madd x12,x11,x14,x12
7101df59fc  cmp x13,x11
7101df5a00  csel x11,x12,x27,hi
7101df5a04  ldrb w12,[x11, #0x5e]
7101df5a08  cbz w12,0x7101df5a20
7101df5a0c  mov w11,#0x4
7101df5a10  b 0x7101df5a58
7101df5a14  sub x10,x8,x9
7101df5a18  asr x10,x10,#0x3
7101df5a1c  b 0x7101df5a70
7101df5a20  ldrb w11,[x11, #0x6c]
7101df5a24  sub w11,w11,#0x1
7101df5a28  cmp w11,#0x2
7101df5a2c  b.hi 0x7101df5a54
7101df5a30  and x11,x11,#0xff
7101df5a34  lsl x11,x11,#0x3
7101df5a38  mov w12,#0x301
7101df5a3c  movk w12,#0x2, LSL #16
7101df5a40  lsr w11,w12,w11
7101df5a44  and w12,w11,#0xff
7101df5a48  cmp w12,#0x5
7101df5a4c  b.cc 0x7101df5a58
7101df5a50  b 0x7101df5f70
7101df5a54  mov w11,wzr
7101df5a58  and x11,x11,#0xff
7101df5a5c  lsl x11,x11,#0x2
7101df5a60  add w21,w0,w21
7101df5a64  ldr w12,[x28, x11, LSL #0x0]
7101df5a68  add w12,w12,#0x1
7101df5a6c  str w12,[x28, x11, LSL #0x0]
7101df5a70  mov w26,w22
7101df5a74  add w22,w22,#0x1
7101df5a78  cmp x10,x26
7101df5a7c  b.hi 0x7101df5980
7101df5a80  ldr w8,[x20, #0x6d8]
7101df5a84  cmp w8,w21
7101df5a88  b.eq 0x7101df5a90
7101df5a8c  str w21,[x20, #0x6d8]
7101df5a90  adrp x25,0x710523d000
7101df5a94  add x25,x25,#0x9a8
7101df5a98  adrp x1,0x71042b4000
7101df5a9c  add x1,x1,#0xa41
7101df5aa0  add x8,sp,#0x68
7101df5aa4  mov x0,x19
7101df5aa8  cbz w21,0x7101df5bac
7101df5aac  bl 0x7103776640
7101df5ab0  adrp x1,0x7104401000
7101df5ab4  add x1,x1,#0xa40
7101df5ab8  add x8,sp,#0x10
7101df5abc  add x0,sp,#0x68
7101df5ac0  bl 0x7103776910
7101df5ac4  ldr w3,[x20, #0x6d8]
7101df5ac8  adrp x1,0x710438c000
7101df5acc  add x1,x1,#0xfda
7101df5ad0  add x0,sp,#0x10
7101df5ad4  mov w2,#0x1
7101df5ad8  bl 0x710377a280
7101df5adc  ldr x0,[sp, #0x18]
7101df5ae0  stp x25,xzr,[sp, #0x10]
7101df5ae4  cbz x0,0x7101df5aec
7101df5ae8  bl 0x710392eb40
7101df5aec  ldr x20,[sp, #0x70]
7101df5af0  adrp x21,0x710523d000
7101df5af4  add x21,x21,#0x988
7101df5af8  stp x21,xzr,[sp, #0x68]
7101df5afc  cbz x20,0x7101df5b18
7101df5b00  ldr x0,[x20, #0x18]
7101df5b04  stp x25,xzr,[x20, #0x10]
7101df5b08  cbz x0,0x7101df5b10
7101df5b0c  bl 0x710392eb40
7101df5b10  mov x0,x20
7101df5b14  bl 0x710392eb40
7101df5b18  adrp x1,0x71042b4000
7101df5b1c  add x1,x1,#0xa41
7101df5b20  add x8,sp,#0x68
7101df5b24  mov x0,x19
7101df5b28  bl 0x7103776640
7101df5b2c  adrp x1,0x7104401000
7101df5b30  add x1,x1,#0xa40
7101df5b34  add x8,sp,#0x10
7101df5b38  add x0,sp,#0x68
7101df5b3c  bl 0x7103776910
7101df5b40  ldr x0,[sp, #0x18]
7101df5b44  ldr x8,[x0]
7101df5b48  cbz x8,0x7101df5b58
7101df5b4c  ldrb w9,[x8, #0x58]
7101df5b50  orr w9,w9,#0x1
7101df5b54  strb w9,[x8, #0x58]
7101df5b58  stp x25,xzr,[sp, #0x10]
7101df5b5c  cbz x0,0x7101df5b64
7101df5b60  bl 0x710392eb40
7101df5b64  str x21,[sp, #0x68]
7101df5b68  b 0x7101df5bf4
7101df5b6c  add x0,x20,#0x18
7101df5b70  adrp x1,0x710435b000
7101df5b74  add x1,x1,#0xcc8
7101df5b78  add x8,sp,#0x10
7101df5b7c  bl 0x7103776910
7101df5b80  ldr x0,[sp, #0x18]
7101df5b84  ldr x8,[x0]
7101df5b88  cbz x8,0x7101df5b98
7101df5b8c  ldrb w9,[x8, #0x58]
7101df5b90  and w9,w9,#0xfe
7101df5b94  strb w9,[x8, #0x58]
7101df5b98  adrp x8,0x710523d000
7101df5b9c  add x8,x8,#0x9a8
7101df5ba0  stp x8,xzr,[sp, #0x10]
7101df5ba4  cbnz x0,0x7101df5f44
7101df5ba8  b 0x7101df5f48
7101df5bac  bl 0x7103776640
7101df5bb0  adrp x1,0x7104401000
7101df5bb4  add x1,x1,#0xa40
7101df5bb8  add x8,sp,#0x10
7101df5bbc  add x0,sp,#0x68
7101df5bc0  bl 0x7103776910
7101df5bc4  ldr x0,[sp, #0x18]
7101df5bc8  ldr x8,[x0]
7101df5bcc  cbz x8,0x7101df5bdc
7101df5bd0  ldrb w9,[x8, #0x58]
7101df5bd4  and w9,w9,#0xfe
7101df5bd8  strb w9,[x8, #0x58]
7101df5bdc  stp x25,xzr,[sp, #0x10]
7101df5be0  cbz x0,0x7101df5be8
7101df5be4  bl 0x710392eb40
7101df5be8  adrp x8,0x710523d000
7101df5bec  add x8,x8,#0x988
7101df5bf0  str x8,[sp, #0x68]
7101df5bf4  ldr x20,[sp, #0x70]
7101df5bf8  str xzr,[sp, #0x70]
7101df5bfc  cbz x20,0x7101df5c18
7101df5c00  ldr x0,[x20, #0x18]
7101df5c04  stp x25,xzr,[x20, #0x10]
7101df5c08  cbz x0,0x7101df5c10
7101df5c0c  bl 0x710392eb40
7101df5c10  mov x0,x20
7101df5c14  bl 0x710392eb40
7101df5c18  add x8,sp,#0x10
7101df5c1c  mov w21,wzr
7101df5c20  mov w20,wzr
7101df5c24  mov w24,wzr
7101df5c28  adrp x22,0x7104270000
7101df5c2c  add x22,x22,#0x4b2
7101df5c30  adrp x23,0x710523d000
7101df5c34  add x23,x23,#0x988
7101df5c38  add x8,x8,#0x8
7101df5c3c  str x8,[sp, #0x8]
7101df5c40  add x8,sp,#0x10
7101df5c44  mov x0,x19
7101df5c48  mov x1,x22
7101df5c4c  bl 0x7103776640
7101df5c50  add x8,sp,#0x68
7101df5c54  add x0,sp,#0x10
7101df5c58  adrp x1,0x7104270000
7101df5c5c  add x1,x1,#0x4c8
7101df5c60  mov w2,w21
7101df5c64  bl 0x7103776640
7101df5c68  ldr x26,[sp, #0x18]
7101df5c6c  stp x23,xzr,[sp, #0x10]
7101df5c70  cbz x26,0x7101df5c8c
7101df5c74  ldr x0,[x26, #0x18]
7101df5c78  stp x25,xzr,[x26, #0x10]
7101df5c7c  cbz x0,0x7101df5c84
7101df5c80  bl 0x710392eb40
7101df5c84  mov x0,x26
7101df5c88  bl 0x710392eb40
7101df5c8c  add x8,sp,#0x10
7101df5c90  mov x0,x19
7101df5c94  mov x1,x22
7101df5c98  bl 0x7103776640
7101df5c9c  add x8,sp,#0x58
7101df5ca0  add x0,sp,#0x10
7101df5ca4  adrp x1,0x7104308000
7101df5ca8  add x1,x1,#0x95d
7101df5cac  mov w2,w21
7101df5cb0  bl 0x7103776910
7101df5cb4  ldr x26,[sp, #0x18]
7101df5cb8  stp x23,xzr,[sp, #0x10]
7101df5cbc  cbz x26,0x7101df5cd8
7101df5cc0  ldr x0,[x26, #0x18]
7101df5cc4  stp x25,xzr,[x26, #0x10]
7101df5cc8  cbz x0,0x7101df5cd0
7101df5ccc  bl 0x710392eb40
7101df5cd0  mov x0,x26
7101df5cd4  bl 0x710392eb40
7101df5cd8  cmp w24,#0x4
7101df5cdc  b.hi 0x7101df5e58
7101df5ce0  sxtw x8,w24
7101df5ce4  adrp x9,0x7104545000
7101df5ce8  add x9,x9,#0x9b8
7101df5cec  ldrb w1,[x9, x8, LSL ]
7101df5cf0  add x9,sp,#0x78
7101df5cf4  ldr w26,[x9, x1, LSL #0x2]
7101df5cf8  add x25,x8,#0x1
7101df5cfc  cmp w26,#0x1
7101df5d00  b.lt 0x7101df5d94
7101df5d04  ldr x28,[sp, #0x70]
7101df5d08  ldr x8,[x28, #0x8]
7101df5d0c  cbz x8,0x7101df5d24
7101df5d10  ldr x8,[x8, #0x18]
7101df5d14  cbz x8,0x7101df5d24
7101df5d18  ldrb w9,[x8, #0x58]
7101df5d1c  orr w9,w9,#0x1
7101df5d20  strb w9,[x8, #0x58]
7101df5d24  ldr x27,[sp, #0x60]
7101df5d28  ldr x8,[x27]
7101df5d2c  cbz x8,0x7101df5d3c
7101df5d30  ldrb w9,[x8, #0x58]
7101df5d34  orr w9,w9,#0x1
7101df5d38  strb w9,[x8, #0x58]
7101df5d3c  add x0,sp,#0x68
7101df5d40  mov w2,#0xffffffff
7101df5d44  mov w3,wzr
7101df5d48  mov w4,wzr
7101df5d4c  bl 0x71025b12c0
7101df5d50  add x8,sp,#0x10
7101df5d54  adrp x0,0x710432a000
7101df5d58  add x0,x0,#0x5b5
7101df5d5c  mov w1,w21
7101df5d60  bl 0x71003a4ca0
7101df5d64  ldr x1,[sp, #0x8]
7101df5d68  add x0,sp,#0x58
7101df5d6c  mov w2,#0x1
7101df5d70  mov w3,w26
7101df5d74  bl 0x710377a280
7101df5d78  add w20,w20,#0x1
7101df5d7c  mov w24,w25
7101df5d80  adrp x25,0x710523d000
7101df5d84  add x25,x25,#0x9a8
7101df5d88  stp x25,xzr,[sp, #0x58]
7101df5d8c  cbnz x27,0x7101df5ea0
7101df5d90  b 0x7101df5ea8
7101df5d94  cmp w25,#0x4
7101df5d98  b.hi 0x7101df5e58
7101df5d9c  adrp x9,0x7104545000
7101df5da0  add x9,x9,#0x9b8
7101df5da4  ldrb w1,[x9, x25, LSL ]
7101df5da8  add x9,sp,#0x78
7101df5dac  ldr w26,[x9, x1, LSL #0x2]
7101df5db0  add x25,x8,#0x2
7101df5db4  cmp w26,#0x0
7101df5db8  b.gt 0x7101df5d04
7101df5dbc  cmp w25,#0x4
7101df5dc0  b.hi 0x7101df5e58
7101df5dc4  adrp x9,0x7104545000
7101df5dc8  add x9,x9,#0x9b8
7101df5dcc  ldrb w1,[x9, x25, LSL ]
7101df5dd0  add x9,sp,#0x78
7101df5dd4  ldr w26,[x9, x1, LSL #0x2]
7101df5dd8  add x25,x8,#0x3
7101df5ddc  cmp w26,#0x0
7101df5de0  b.gt 0x7101df5d04
7101df5de4  cmp w25,#0x4
7101df5de8  b.hi 0x7101df5e58
7101df5dec  adrp x9,0x7104545000
7101df5df0  add x9,x9,#0x9b8
7101df5df4  ldrb w1,[x9, x25, LSL ]
7101df5df8  add x9,sp,#0x78
7101df5dfc  ldr w26,[x9, x1, LSL #0x2]
7101df5e00  add x25,x8,#0x4
7101df5e04  cmp w26,#0x0
7101df5e08  b.gt 0x7101df5d04
7101df5e0c  cmp w25,#0x4
7101df5e10  b.hi 0x7101df5e58
7101df5e14  adrp x9,0x7104545000
7101df5e18  add x9,x9,#0x9b8
7101df5e1c  ldrb w1,[x9, x25, LSL ]
7101df5e20  add x9,sp,#0x78
7101df5e24  ldr w26,[x9, x1, LSL #0x2]
7101df5e28  add x25,x8,#0x5
7101df5e2c  cmp w26,#0x0
7101df5e30  b.gt 0x7101df5d04
7101df5e34  cmp w25,#0x4
7101df5e38  b.hi 0x7101df5e58
7101df5e3c  adrp x9,0x7104545000
7101df5e40  add x9,x9,#0x9b8
7101df5e44  ldrb w1,[x9, x25, LSL ]
7101df5e48  add x25,x8,#0x6
7101df5e4c  add x8,sp,#0x78
7101df5e50  ldr w26,[x8, x1, LSL #0x2]
7101df5e54  b 0x7101df5d04
7101df5e58  ldr x28,[sp, #0x70]
7101df5e5c  ldr x8,[x28, #0x8]
7101df5e60  cbz x8,0x7101df5e78
7101df5e64  ldr x8,[x8, #0x18]
7101df5e68  cbz x8,0x7101df5e78
7101df5e6c  ldrb w9,[x8, #0x58]
7101df5e70  and w9,w9,#0xfe
7101df5e74  strb w9,[x8, #0x58]
7101df5e78  ldr x27,[sp, #0x60]
7101df5e7c  ldr x8,[x27]
7101df5e80  adrp x25,0x710523d000
7101df5e84  add x25,x25,#0x9a8
7101df5e88  cbz x8,0x7101df5e98
7101df5e8c  ldrb w9,[x8, #0x58]
7101df5e90  and w9,w9,#0xfe
7101df5e94  strb w9,[x8, #0x58]
7101df5e98  stp x25,xzr,[sp, #0x58]
7101df5e9c  cbz x27,0x7101df5ea8
7101df5ea0  mov x0,x27
7101df5ea4  bl 0x710392eb40
7101df5ea8  stp x23,xzr,[sp, #0x68]
7101df5eac  cbz x28,0x7101df5ec8
7101df5eb0  ldr x0,[x28, #0x18]
7101df5eb4  stp x25,xzr,[x28, #0x10]
7101df5eb8  cbz x0,0x7101df5ec0
7101df5ebc  bl 0x710392eb40
7101df5ec0  mov x0,x28
7101df5ec4  bl 0x710392eb40
7101df5ec8  add w21,w21,#0x1
7101df5ecc  cmp w21,#0x5
7101df5ed0  b.ne 0x7101df5c40
7101df5ed4  cbz w20,0x7101df5f38
7101df5ed8  adrp x1,0x7104270000
7101df5edc  add x1,x1,#0x4b2
7101df5ee0  add x8,sp,#0x68
7101df5ee4  mov x0,x19
7101df5ee8  bl 0x7103776640
7101df5eec  adrp x0,0x71043e0000
7101df5ef0  add x0,x0,#0x695
7101df5ef4  add x8,sp,#0x10
7101df5ef8  mov w1,w20
7101df5efc  add x19,sp,#0x10
7101df5f00  bl 0x71003a4ca0
7101df5f04  add x1,x19,#0x8
7101df5f08  ldr x19,[sp, #0x70]
7101df5f0c  fmov s0,0x3f800000
7101df5f10  mov x0,x19
7101df5f14  bl 0x7103778300
7101df5f18  stp x23,xzr,[sp, #0x68]
7101df5f1c  cbz x19,0x7101df5f38
7101df5f20  ldr x0,[x19, #0x18]
7101df5f24  stp x25,xzr,[x19, #0x10]
7101df5f28  cbz x0,0x7101df5f30
7101df5f2c  bl 0x710392eb40
7101df5f30  mov x0,x19
7101df5f34  bl 0x710392eb40
7101df5f38  ldur x0,[x29, #-0x70]
7101df5f3c  cbz x0,0x7101df5f48
7101df5f40  stur x0,[x29, #-0x68]
7101df5f44  bl 0x710392eb40
7101df5f48  ldp x29,x30,[sp, #0x100]
7101df5f4c  ldp x20,x19,[sp, #0xf0]
7101df5f50  ldp x22,x21,[sp, #0xe0]
7101df5f54  ldp x24,x23,[sp, #0xd0]
7101df5f58  ldp x26,x25,[sp, #0xc0]
7101df5f5c  ldp x28,x27,[sp, #0xb0]
7101df5f60  add sp,sp,#0x110
7101df5f64  ret
7101df5f68  sub x0,x29,#0x70
7101df5f6c  bl 0x71039c1330
7101df5f70  bl 0x71039c2650
