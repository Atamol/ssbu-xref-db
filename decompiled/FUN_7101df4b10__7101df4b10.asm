// addr:      7101df4b10
// offset:    0x1df4b10
// name:      FUN_7101df4b10
// mangled:   
// size:      2632

7101df4b10  sub sp,sp,#0x120
7101df4b14  stp x28,x25,[sp, #0xd0]
7101df4b18  stp x24,x23,[sp, #0xe0]
7101df4b1c  stp x22,x21,[sp, #0xf0]
7101df4b20  stp x20,x19,[sp, #0x100]
7101df4b24  stp x29,x30,[sp, #0x110]
7101df4b28  add x29,sp,#0x110
7101df4b2c  ldr x22,[x0, #0x670]
7101df4b30  sub w24,w1,#0x2
7101df4b34  mov w20,w1
7101df4b38  mov x19,x0
7101df4b3c  add x21,x0,#0x670
7101df4b40  cmp w24,#0xb
7101df4b44  str wzr,[x0, #0x688]
7101df4b48  str x22,[x0, #0x678]
7101df4b4c  b.hi 0x7101df4d98
7101df4b50  adrp x8,0x71044fb000
7101df4b54  add x8,x8,#0x848
7101df4b58  ldrsw x9,[x8, x24, LSL #0x2]
7101df4b5c  add x8,x9,x8
7101df4b60  br x8
7101df4b64  mov w0,#0x10
7101df4b68  orr w1,wzr,#0x1c
7101df4b6c  bl 0x710392e290
7101df4b70  mov x23,x0
7101df4b74  cbnz x0,0x7101df4bc0
7101df4b78  adrp x8,0x7105332000
7101df4b7c  ldr x0,[x8, #0xf00]
7101df4b80  cbz x0,0x7101df4bbc
7101df4b84  orr w8,wzr,#0x1c
7101df4b88  str wzr,[sp, #0x30]
7101df4b8c  add x1,sp,#0x30
7101df4b90  str x8,[sp, #0x78]
7101df4b94  ldr x8,[x0]
7101df4b98  ldr x8,[x8, #0x30]
7101df4b9c  add x2,sp,#0x78
7101df4ba0  blr x8
7101df4ba4  tbz w0,#0x0,0x7101df4bbc
7101df4ba8  mov w0,#0x10
7101df4bac  orr w1,wzr,#0x1c
7101df4bb0  bl 0x710392e290
7101df4bb4  mov x23,x0
7101df4bb8  cbnz x0,0x7101df4bc0
7101df4bbc  mov x23,xzr
7101df4bc0  mov x8,#0x3
7101df4bc4  mov x9,#0x6
7101df4bc8  movk x8,#0x4, LSL #32
7101df4bcc  movk x9,#0x8, LSL #32
7101df4bd0  mov x10,#0x15
7101df4bd4  add x25,x23,#0x1c
7101df4bd8  movk x10,#0x1, LSL #32
7101df4bdc  stp x8,x9,[x23]
7101df4be0  mov w8,#0x14
7101df4be4  str x10,[x23, #0x10]
7101df4be8  str w8,[x23, #0x18]
7101df4bec  cbnz x22,0x7101df504c
7101df4bf0  b 0x7101df5060
7101df4bf4  mov w0,#0x10
7101df4bf8  orr w1,wzr,#0x18
7101df4bfc  bl 0x710392e290
7101df4c00  mov x23,x0
7101df4c04  cbnz x0,0x7101df4c50
7101df4c08  adrp x8,0x7105332000
7101df4c0c  ldr x0,[x8, #0xf00]
7101df4c10  cbz x0,0x7101df4c4c
7101df4c14  orr w8,wzr,#0x18
7101df4c18  str wzr,[sp, #0x30]
7101df4c1c  add x1,sp,#0x30
7101df4c20  str x8,[sp, #0x78]
7101df4c24  ldr x8,[x0]
7101df4c28  ldr x8,[x8, #0x30]
7101df4c2c  add x2,sp,#0x78
7101df4c30  blr x8
7101df4c34  tbz w0,#0x0,0x7101df4c4c
7101df4c38  mov w0,#0x10
7101df4c3c  orr w1,wzr,#0x18
7101df4c40  bl 0x710392e290
7101df4c44  mov x23,x0
7101df4c48  cbnz x0,0x7101df4c50
7101df4c4c  mov x23,xzr
7101df4c50  mov x8,#0x17
7101df4c54  mov x9,#0x15
7101df4c58  movk x8,#0x5, LSL #32
7101df4c5c  movk x9,#0x7, LSL #32
7101df4c60  stp x8,x9,[x23]
7101df4c64  mov x8,#0xd
7101df4c68  add x25,x23,#0x18
7101df4c6c  movk x8,#0x14, LSL #32
7101df4c70  str x8,[x23, #0x10]
7101df4c74  cbnz x22,0x7101df504c
7101df4c78  b 0x7101df5060
7101df4c7c  mov w1,#0x24
7101df4c80  mov w0,#0x10
7101df4c84  bl 0x710392e290
7101df4c88  mov x23,x0
7101df4c8c  cbnz x0,0x7101df4cd8
7101df4c90  adrp x8,0x7105332000
7101df4c94  ldr x0,[x8, #0xf00]
7101df4c98  cbz x0,0x7101df4cd4
7101df4c9c  mov w8,#0x24
7101df4ca0  str wzr,[sp, #0x30]
7101df4ca4  add x1,sp,#0x30
7101df4ca8  str x8,[sp, #0x78]
7101df4cac  ldr x8,[x0]
7101df4cb0  ldr x8,[x8, #0x30]
7101df4cb4  add x2,sp,#0x78
7101df4cb8  blr x8
7101df4cbc  tbz w0,#0x0,0x7101df4cd4
7101df4cc0  mov w1,#0x24
7101df4cc4  mov w0,#0x10
7101df4cc8  bl 0x710392e290
7101df4ccc  mov x23,x0
7101df4cd0  cbnz x0,0x7101df4cd8
7101df4cd4  mov x23,xzr
7101df4cd8  mov x8,#0x2
7101df4cdc  mov x9,#0x1
7101df4ce0  movk x8,#0x9, LSL #32
7101df4ce4  movk x9,#0x15, LSL #32
7101df4ce8  stp x8,x9,[x23]
7101df4cec  mov x8,#0xd
7101df4cf0  mov x9,#0x12
7101df4cf4  movk x8,#0x3, LSL #32
7101df4cf8  movk x9,#0xe, LSL #32
7101df4cfc  add x25,x23,#0x24
7101df4d00  stp x8,x9,[x23, #0x10]
7101df4d04  mov w8,#0x14
7101df4d08  str w8,[x23, #0x20]
7101df4d0c  cbnz x22,0x7101df504c
7101df4d10  b 0x7101df5060
7101df4d14  mov w0,#0x10
7101df4d18  mov w1,#0x20
7101df4d1c  bl 0x710392e290
7101df4d20  mov x23,x0
7101df4d24  cbnz x0,0x7101df4d70
7101df4d28  adrp x8,0x7105332000
7101df4d2c  ldr x0,[x8, #0xf00]
7101df4d30  cbz x0,0x7101df4d6c
7101df4d34  mov w8,#0x20
7101df4d38  str wzr,[sp, #0x30]
7101df4d3c  add x1,sp,#0x30
7101df4d40  str x8,[sp, #0x78]
7101df4d44  ldr x8,[x0]
7101df4d48  ldr x8,[x8, #0x30]
7101df4d4c  add x2,sp,#0x78
7101df4d50  blr x8
7101df4d54  tbz w0,#0x0,0x7101df4d6c
7101df4d58  mov w0,#0x10
7101df4d5c  mov w1,#0x20
7101df4d60  bl 0x710392e290
7101df4d64  mov x23,x0
7101df4d68  cbnz x0,0x7101df4d70
7101df4d6c  mov x23,xzr
7101df4d70  mov x8,#0x2
7101df4d74  mov x9,#0x15
7101df4d78  movk x8,#0x1, LSL #32
7101df4d7c  movk x9,#0xd, LSL #32
7101df4d80  mov x10,#0x5
7101df4d84  add x25,x23,#0x20
7101df4d88  stp x8,x9,[x23]
7101df4d8c  mov x8,#0x10
7101df4d90  movk x10,#0x13, LSL #32
7101df4d94  b 0x7101df5040
7101df4d98  mov w8,#0x1
7101df4d9c  str w8,[sp, #0x18]
7101df4da0  ldr x9,[x19, #0x680]
7101df4da4  cmp x9,x22
7101df4da8  b.ne 0x7101df5534
7101df4dac  cbz x22,0x7101df4dc4
7101df4db0  mov x0,x22
7101df4db4  str x22,[x19, #0x678]
7101df4db8  bl 0x710392eb40
7101df4dbc  stp xzr,xzr,[x21, #0x8]
7101df4dc0  str xzr,[x21]
7101df4dc4  mov w0,#0x10
7101df4dc8  mov w1,#0x4
7101df4dcc  bl 0x710392e290
7101df4dd0  cbnz x0,0x7101df4e18
7101df4dd4  adrp x8,0x7105332000
7101df4dd8  ldr x0,[x8, #0xf00]
7101df4ddc  cbz x0,0x7101df4e14
7101df4de0  mov w8,#0x4
7101df4de4  str wzr,[sp, #0x30]
7101df4de8  add x1,sp,#0x30
7101df4dec  str x8,[sp, #0x78]
7101df4df0  ldr x8,[x0]
7101df4df4  ldr x8,[x8, #0x30]
7101df4df8  add x2,sp,#0x78
7101df4dfc  blr x8
7101df4e00  tbz w0,#0x0,0x7101df4e14
7101df4e04  mov w0,#0x10
7101df4e08  mov w1,#0x4
7101df4e0c  bl 0x710392e290
7101df4e10  cbnz x0,0x7101df4e18
7101df4e14  mov x0,xzr
7101df4e18  add x8,x0,#0x4
7101df4e1c  str x0,[x19, #0x670]
7101df4e20  str x8,[x19, #0x680]
7101df4e24  ldr w9,[sp, #0x18]
7101df4e28  str w9,[x0]
7101df4e2c  str x8,[x19, #0x678]
7101df4e30  b 0x7101df506c
7101df4e34  mov w0,#0x10
7101df4e38  mov w1,#0x20
7101df4e3c  bl 0x710392e290
7101df4e40  mov x23,x0
7101df4e44  cbnz x0,0x7101df4e90
7101df4e48  adrp x8,0x7105332000
7101df4e4c  ldr x0,[x8, #0xf00]
7101df4e50  cbz x0,0x7101df4e8c
7101df4e54  mov w8,#0x20
7101df4e58  str wzr,[sp, #0x30]
7101df4e5c  add x1,sp,#0x30
7101df4e60  str x8,[sp, #0x78]
7101df4e64  ldr x8,[x0]
7101df4e68  ldr x8,[x8, #0x30]
7101df4e6c  add x2,sp,#0x78
7101df4e70  blr x8
7101df4e74  tbz w0,#0x0,0x7101df4e8c
7101df4e78  mov w0,#0x10
7101df4e7c  mov w1,#0x20
7101df4e80  bl 0x710392e290
7101df4e84  mov x23,x0
7101df4e88  cbnz x0,0x7101df4e90
7101df4e8c  mov x23,xzr
7101df4e90  mov x8,#0x8
7101df4e94  mov x9,#0x15
7101df4e98  movk x8,#0x17, LSL #32
7101df4e9c  movk x9,#0x2, LSL #32
7101df4ea0  mov x10,#0x1
7101df4ea4  add x25,x23,#0x20
7101df4ea8  stp x8,x9,[x23]
7101df4eac  mov x8,#0x16
7101df4eb0  movk x10,#0x5, LSL #32
7101df4eb4  b 0x7101df5040
7101df4eb8  mov w0,#0x10
7101df4ebc  mov w1,#0x20
7101df4ec0  bl 0x710392e290
7101df4ec4  mov x23,x0
7101df4ec8  cbnz x0,0x7101df4f14
7101df4ecc  adrp x8,0x7105332000
7101df4ed0  ldr x0,[x8, #0xf00]
7101df4ed4  cbz x0,0x7101df4f10
7101df4ed8  mov w8,#0x20
7101df4edc  str wzr,[sp, #0x30]
7101df4ee0  add x1,sp,#0x30
7101df4ee4  str x8,[sp, #0x78]
7101df4ee8  ldr x8,[x0]
7101df4eec  ldr x8,[x8, #0x30]
7101df4ef0  add x2,sp,#0x78
7101df4ef4  blr x8
7101df4ef8  tbz w0,#0x0,0x7101df4f10
7101df4efc  mov w0,#0x10
7101df4f00  mov w1,#0x20
7101df4f04  bl 0x710392e290
7101df4f08  mov x23,x0
7101df4f0c  cbnz x0,0x7101df4f14
7101df4f10  mov x23,xzr
7101df4f14  mov x8,#0x17
7101df4f18  mov x9,#0x5
7101df4f1c  movk x8,#0x15, LSL #32
7101df4f20  movk x9,#0x7, LSL #32
7101df4f24  mov x10,#0x2
7101df4f28  add x25,x23,#0x20
7101df4f2c  stp x8,x9,[x23]
7101df4f30  mov x8,#0x6
7101df4f34  movk x10,#0x3, LSL #32
7101df4f38  b 0x7101df5040
7101df4f3c  mov w0,#0x10
7101df4f40  mov w1,#0x20
7101df4f44  bl 0x710392e290
7101df4f48  mov x23,x0
7101df4f4c  cbnz x0,0x7101df4f98
7101df4f50  adrp x8,0x7105332000
7101df4f54  ldr x0,[x8, #0xf00]
7101df4f58  cbz x0,0x7101df4f94
7101df4f5c  mov w8,#0x20
7101df4f60  str wzr,[sp, #0x30]
7101df4f64  add x1,sp,#0x30
7101df4f68  str x8,[sp, #0x78]
7101df4f6c  ldr x8,[x0]
7101df4f70  ldr x8,[x8, #0x30]
7101df4f74  add x2,sp,#0x78
7101df4f78  blr x8
7101df4f7c  tbz w0,#0x0,0x7101df4f94
7101df4f80  mov w0,#0x10
7101df4f84  mov w1,#0x20
7101df4f88  bl 0x710392e290
7101df4f8c  mov x23,x0
7101df4f90  cbnz x0,0x7101df4f98
7101df4f94  mov x23,xzr
7101df4f98  mov x8,#0x5
7101df4f9c  mov x9,#0x3
7101df4fa0  movk x8,#0x7, LSL #32
7101df4fa4  movk x9,#0x1, LSL #32
7101df4fa8  mov x10,#0x15
7101df4fac  add x25,x23,#0x20
7101df4fb0  stp x8,x9,[x23]
7101df4fb4  mov x8,#0x9
7101df4fb8  movk x10,#0x16, LSL #32
7101df4fbc  b 0x7101df5040
7101df4fc0  mov w0,#0x10
7101df4fc4  mov w1,#0x20
7101df4fc8  bl 0x710392e290
7101df4fcc  mov x23,x0
7101df4fd0  cbnz x0,0x7101df501c
7101df4fd4  adrp x8,0x7105332000
7101df4fd8  ldr x0,[x8, #0xf00]
7101df4fdc  cbz x0,0x7101df5018
7101df4fe0  mov w8,#0x20
7101df4fe4  str wzr,[sp, #0x30]
7101df4fe8  add x1,sp,#0x30
7101df4fec  str x8,[sp, #0x78]
7101df4ff0  ldr x8,[x0]
7101df4ff4  ldr x8,[x8, #0x30]
7101df4ff8  add x2,sp,#0x78
7101df4ffc  blr x8
7101df5000  tbz w0,#0x0,0x7101df5018
7101df5004  mov w0,#0x10
7101df5008  mov w1,#0x20
7101df500c  bl 0x710392e290
7101df5010  mov x23,x0
7101df5014  cbnz x0,0x7101df501c
7101df5018  mov x23,xzr
7101df501c  mov x8,#0x4
7101df5020  mov x9,#0x5
7101df5024  movk x8,#0x1, LSL #32
7101df5028  movk x9,#0x15, LSL #32
7101df502c  mov x10,#0xd
7101df5030  add x25,x23,#0x20
7101df5034  stp x8,x9,[x23]
7101df5038  mov x8,#0x13
7101df503c  movk x10,#0x10, LSL #32
7101df5040  movk x8,#0x14, LSL #32
7101df5044  stp x10,x8,[x23, #0x10]
7101df5048  cbz x22,0x7101df5060
7101df504c  mov x0,x22
7101df5050  str x22,[x19, #0x678]
7101df5054  bl 0x710392eb40
7101df5058  stp xzr,xzr,[x21, #0x8]
7101df505c  str xzr,[x21]
7101df5060  str x23,[x19, #0x670]
7101df5064  str x25,[x19, #0x678]
7101df5068  str x25,[x19, #0x680]
7101df506c  add x22,x19,#0x40
7101df5070  adrp x1,0x71043ad000
7101df5074  add x1,x1,#0xfe3
7101df5078  add x8,sp,#0x68
7101df507c  mov x0,x22
7101df5080  bl 0x7103776910
7101df5084  adrp x1,0x71042b4000
7101df5088  add x1,x1,#0x8bc
7101df508c  add x0,sp,#0x68
7101df5090  bl 0x710377a120
7101df5094  ldr x10,[x19, #0x678]
7101df5098  ldr x9,[x19, #0x670]
7101df509c  sub x10,x10,x9
7101df50a0  ldr w8,[x19, #0x688]
7101df50a4  asr x10,x10,#0x2
7101df50a8  cmp x10,x8
7101df50ac  b.ls 0x7101df5548
7101df50b0  ldr w1,[x9, x8, LSL #0x2]
7101df50b4  add x0,sp,#0x78
7101df50b8  add x21,sp,#0x78
7101df50bc  bl 0x71025c6970
7101df50c0  adrp x1,0x7104431000
7101df50c4  add x1,x1,#0x6d5
7101df50c8  add x8,sp,#0x30
7101df50cc  mov x0,x22
7101df50d0  bl 0x7103776910
7101df50d4  add x1,x21,#0x8
7101df50d8  add x0,sp,#0x30
7101df50dc  bl 0x710377a120
7101df50e0  ldr x0,[sp, #0x38]
7101df50e4  adrp x21,0x710523d000
7101df50e8  add x21,x21,#0x9a8
7101df50ec  stp x21,xzr,[sp, #0x30]
7101df50f0  cbz x0,0x7101df50f8
7101df50f4  bl 0x710392eb40
7101df50f8  cmp w24,#0x2
7101df50fc  b.cc 0x7101df5114
7101df5100  sub w8,w20,#0xb
7101df5104  cmp w8,#0x1
7101df5108  b.hi 0x7101df511c
7101df510c  mov w20,#0x5
7101df5110  b 0x7101df5120
7101df5114  mov w20,#0xb
7101df5118  b 0x7101df5120
7101df511c  mov w20,#0x4
7101df5120  adrp x1,0x71042a3000
7101df5124  add x1,x1,#0x7be
7101df5128  mov x0,x22
7101df512c  mov w2,w20
7101df5130  bl 0x7103778430
7101df5134  add x8,sp,#0x30
7101df5138  add x0,x8,#0x20
7101df513c  stp xzr,xzr,[sp, #0x40]
7101df5140  bl 0x7103776290
7101df5144  str wzr,[sp, #0x38]
7101df5148  adrp x8,0x71052a8000
7101df514c  ldr x8,[x8, #0xa80]
7101df5150  ldr q0,[x8]
7101df5154  ldr x8,[sp, #0x58]
7101df5158  str q0,[sp, #0x40]
7101df515c  str xzr,[x8, #0x8]
7101df5160  mov w8,#0x1
7101df5164  str xzr,[sp, #0x18]
7101df5168  stp xzr,xzr,[sp, #0x20]
7101df516c  stp w20,w8,[sp, #0x30]
7101df5170  ldr x9,[x19, #0x678]
7101df5174  ldr x8,[x19, #0x670]
7101df5178  cmp x9,x8
7101df517c  b.eq 0x7101df5274
7101df5180  add x9,sp,#0x78
7101df5184  mov x20,xzr
7101df5188  mov w22,#0x9dc5
7101df518c  movk w22,#0x811c, LSL #16
7101df5190  add x23,x9,#0x8
7101df5194  mov w24,#0x89
7101df5198  ldr w1,[x8, x20, LSL #0x2]
7101df519c  add x0,sp,#0x78
7101df51a0  bl 0x71025c6970
7101df51a4  ldp x8,x9,[sp, #0x20]
7101df51a8  cmp x8,x9
7101df51ac  b.cs 0x7101df51f8
7101df51b0  mov x10,x8
7101df51b4  mov x9,xzr
7101df51b8  str wzr,[x10], #0x8
7101df51bc  add x11,x23,x9
7101df51c0  ldrb w12,[x11]
7101df51c4  cbz w12,0x7101df5214
7101df51c8  strb w12,[x10, x9, LSL ]
7101df51cc  ldrb w13,[x11, #0x1]
7101df51d0  cbz w13,0x7101df5208
7101df51d4  add x12,x10,x9
7101df51d8  strb w13,[x12, #0x1]
7101df51dc  ldrb w11,[x11, #0x2]
7101df51e0  cbz w11,0x7101df5210
7101df51e4  add x9,x9,#0x3
7101df51e8  cmp w9,#0x3f
7101df51ec  strb w11,[x12, #0x2]
7101df51f0  b.cc 0x7101df51bc
7101df51f4  b 0x7101df5214
7101df51f8  add x0,sp,#0x18
7101df51fc  add x1,sp,#0x78
7101df5200  bl 0x71019c1c50
7101df5204  b 0x7101df5258
7101df5208  add x9,x9,#0x1
7101df520c  b 0x7101df5214
7101df5210  add x9,x9,#0x2
7101df5214  add x10,x8,#0x8
7101df5218  strb wzr,[x10, w9, UXTW ]
7101df521c  str w9,[x8, #0x4]
7101df5220  ldrb w9,[x8, #0x8]
7101df5224  mov w11,w22
7101df5228  cbz w9,0x7101df5248
7101df522c  add x10,x8,#0x9
7101df5230  mov w11,w22
7101df5234  mul w11,w11,w24
7101df5238  and w9,w9,#0xff
7101df523c  eor w11,w11,w9
7101df5240  ldrb w9,[x10], #0x1
7101df5244  cbnz w9,0x7101df5234
7101df5248  str w11,[x8]
7101df524c  ldr x8,[sp, #0x20]
7101df5250  add x8,x8,#0x48
7101df5254  str x8,[sp, #0x20]
7101df5258  ldr x9,[x19, #0x678]
7101df525c  ldr x8,[x19, #0x670]
7101df5260  sub x9,x9,x8
7101df5264  add w20,w20,#0x1
7101df5268  asr x9,x9,#0x2
7101df526c  cmp x9,x20
7101df5270  b.hi 0x7101df5198
7101df5274  add x0,x19,#0x18
7101df5278  adrp x1,0x710436c000
7101df527c  add x1,x1,#0xc09
7101df5280  add x8,sp,#0x78
7101df5284  bl 0x7103776640
7101df5288  ldp x23,x22,[sp, #0x18]
7101df528c  str xzr,[sp]
7101df5290  stp xzr,xzr,[sp, #0x8]
7101df5294  subs x20,x22,x23
7101df5298  b.eq 0x7101df53e4
7101df529c  mov x9,#0x8e39
7101df52a0  movk x9,#0x38e3, LSL #16
7101df52a4  asr x8,x20,#0x3
7101df52a8  movk x9,#0xe38e, LSL #32
7101df52ac  movk x9,#0x8e38, LSL #48
7101df52b0  mul x24,x8,x9
7101df52b4  mov x8,#0xe38f
7101df52b8  movk x8,#0x8e38, LSL #16
7101df52bc  movk x8,#0x38e3, LSL #32
7101df52c0  movk x8,#0x38e, LSL #48
7101df52c4  cmp x24,x8
7101df52c8  b.cs 0x7101df5550
7101df52cc  mov w0,#0x10
7101df52d0  mov x1,x20
7101df52d4  bl 0x710392e290
7101df52d8  cbnz x0,0x7101df531c
7101df52dc  adrp x8,0x7105332000
7101df52e0  ldr x0,[x8, #0xf00]
7101df52e4  cbz x0,0x7101df5318
7101df52e8  stur wzr,[x29, #-0x44]
7101df52ec  stur x20,[x29, #-0x50]
7101df52f0  ldr x8,[x0]
7101df52f4  ldr x8,[x8, #0x30]
7101df52f8  sub x1,x29,#0x44
7101df52fc  sub x2,x29,#0x50
7101df5300  blr x8
7101df5304  tbz w0,#0x0,0x7101df5318
7101df5308  mov w0,#0x10
7101df530c  mov x1,x20
7101df5310  bl 0x710392e290
7101df5314  cbnz x0,0x7101df531c
7101df5318  mov x0,xzr
7101df531c  mov w8,#0x48
7101df5320  madd x8,x24,x8,x0
7101df5324  cmp x23,x22
7101df5328  stp x0,x0,[sp]
7101df532c  str x8,[sp, #0x10]
7101df5330  b.eq 0x7101df53e4
7101df5334  mov w8,#0x9dc5
7101df5338  movk w8,#0x811c, LSL #16
7101df533c  mov w9,#0x89
7101df5340  mov x11,x0
7101df5344  mov x10,xzr
7101df5348  str wzr,[x11], #0x8
7101df534c  add x12,x23,x10
7101df5350  ldrb w13,[x12, #0x8]
7101df5354  cbz w13,0x7101df5394
7101df5358  strb w13,[x11, x10, LSL ]
7101df535c  ldrb w14,[x12, #0x9]
7101df5360  cbz w14,0x7101df5388
7101df5364  add x13,x11,x10
7101df5368  strb w14,[x13, #0x1]
7101df536c  ldrb w12,[x12, #0xa]
7101df5370  cbz w12,0x7101df5390
7101df5374  add x10,x10,#0x3
7101df5378  cmp w10,#0x3f
7101df537c  strb w12,[x13, #0x2]
7101df5380  b.cc 0x7101df534c
7101df5384  b 0x7101df5394
7101df5388  add x10,x10,#0x1
7101df538c  b 0x7101df5394
7101df5390  add x10,x10,#0x2
7101df5394  add x11,x0,#0x8
7101df5398  strb wzr,[x11, w10, UXTW ]
7101df539c  str w10,[x0, #0x4]
7101df53a0  ldrb w10,[x0, #0x8]
7101df53a4  mov w12,w8
7101df53a8  cbz w10,0x7101df53c8
7101df53ac  add x11,x0,#0x9
7101df53b0  mov w12,w8
7101df53b4  mul w12,w12,w9
7101df53b8  and w10,w10,#0xff
7101df53bc  eor w12,w12,w10
7101df53c0  ldrb w10,[x11], #0x1
7101df53c4  cbnz w10,0x7101df53b4
7101df53c8  str w12,[x0]
7101df53cc  ldr x10,[sp, #0x8]
7101df53d0  add x23,x23,#0x48
7101df53d4  cmp x23,x22
7101df53d8  add x0,x10,#0x48
7101df53dc  str x0,[sp, #0x8]
7101df53e0  b.ne 0x7101df5340
7101df53e4  add x0,x19,#0x610
7101df53e8  add x1,x19,#0x10
7101df53ec  mov x2,sp
7101df53f0  add x3,sp,#0x30
7101df53f4  add x4,sp,#0x78
7101df53f8  bl 0x71032ccb70
7101df53fc  ldr x0,[sp]
7101df5400  cbz x0,0x7101df540c
7101df5404  str x0,[sp, #0x8]
7101df5408  bl 0x710392eb40
7101df540c  ldr x19,[sp, #0x80]
7101df5410  adrp x20,0x710523d000
7101df5414  add x20,x20,#0x988
7101df5418  stp x20,xzr,[sp, #0x78]
7101df541c  cbz x19,0x7101df5438
7101df5420  ldr x0,[x19, #0x18]
7101df5424  stp x21,xzr,[x19, #0x10]
7101df5428  cbz x0,0x7101df5430
7101df542c  bl 0x710392eb40
7101df5430  mov x0,x19
7101df5434  bl 0x710392eb40
7101df5438  ldr x0,[sp, #0x18]
7101df543c  cbz x0,0x7101df5448
7101df5440  str x0,[sp, #0x20]
7101df5444  bl 0x710392eb40
7101df5448  ldr x19,[sp, #0x58]
7101df544c  stp x20,xzr,[sp, #0x50]
7101df5450  cbz x19,0x7101df546c
7101df5454  ldr x0,[x19, #0x18]
7101df5458  stp x21,xzr,[x19, #0x10]
7101df545c  cbz x0,0x7101df5464
7101df5460  bl 0x710392eb40
7101df5464  mov x0,x19
7101df5468  bl 0x710392eb40
7101df546c  ldr x0,[sp, #0x70]
7101df5470  stp x21,xzr,[sp, #0x68]
7101df5474  cbz x0,0x7101df547c
7101df5478  bl 0x710392eb40
7101df547c  ldp x29,x30,[sp, #0x110]
7101df5480  ldp x20,x19,[sp, #0x100]
7101df5484  ldp x22,x21,[sp, #0xf0]
7101df5488  ldp x24,x23,[sp, #0xe0]
7101df548c  ldp x28,x25,[sp, #0xd0]
7101df5490  add sp,sp,#0x120
7101df5494  ret
7101df5498  mov w1,#0x28
7101df549c  mov w0,#0x10
7101df54a0  bl 0x710392e290
7101df54a4  mov x23,x0
7101df54a8  cbnz x0,0x7101df54f4
7101df54ac  adrp x8,0x7105332000
7101df54b0  ldr x0,[x8, #0xf00]
7101df54b4  cbz x0,0x7101df54f0
7101df54b8  mov w8,#0x28
7101df54bc  str wzr,[sp, #0x30]
7101df54c0  add x1,sp,#0x30
7101df54c4  str x8,[sp, #0x78]
7101df54c8  ldr x8,[x0]
7101df54cc  ldr x8,[x8, #0x30]
7101df54d0  add x2,sp,#0x78
7101df54d4  blr x8
7101df54d8  tbz w0,#0x0,0x7101df54f0
7101df54dc  mov w1,#0x28
7101df54e0  mov w0,#0x10
7101df54e4  bl 0x710392e290
7101df54e8  mov x23,x0
7101df54ec  cbnz x0,0x7101df54f4
7101df54f0  mov x23,xzr
7101df54f4  mov x8,#0x4
7101df54f8  mov x9,#0x3
7101df54fc  movk x8,#0x1, LSL #32
7101df5500  movk x9,#0x5, LSL #32
7101df5504  stp x8,x9,[x23]
7101df5508  mov x8,#0x7
7101df550c  mov x9,#0xb
7101df5510  movk x8,#0xa, LSL #32
7101df5514  movk x9,#0x15, LSL #32
7101df5518  stp x8,x9,[x23, #0x10]
7101df551c  mov x8,#0xd
7101df5520  add x25,x23,#0x28
7101df5524  movk x8,#0x14, LSL #32
7101df5528  str x8,[x23, #0x20]
7101df552c  cbnz x22,0x7101df504c
7101df5530  b 0x7101df5060
7101df5534  str w8,[x22]
7101df5538  ldr x8,[x19, #0x678]
7101df553c  add x8,x8,#0x4
7101df5540  str x8,[x19, #0x678]
7101df5544  b 0x7101df506c
7101df5548  mov x0,x21
7101df554c  bl 0x71039c1330
7101df5550  mov x0,sp
7101df5554  bl 0x71039c0c00
