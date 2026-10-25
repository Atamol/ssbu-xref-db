// addr:      71030a9aa0
// offset:    0x30a9aa0
// name:      FUN_71030a9aa0
// mangled:   
// size:      17400

71030a9aa0  str d10,[sp, #-0x80]!
71030a9aa4  stp d9,d8,[sp, #0x10]
71030a9aa8  stp x28,x27,[sp, #0x20]
71030a9aac  stp x26,x25,[sp, #0x30]
71030a9ab0  stp x24,x23,[sp, #0x40]
71030a9ab4  stp x22,x21,[sp, #0x50]
71030a9ab8  stp x20,x19,[sp, #0x60]
71030a9abc  stp x29,x30,[sp, #0x70]
71030a9ac0  add x29,sp,#0x70
71030a9ac4  sub sp,sp,#0x210
71030a9ac8  adrp x8,0x7104468000
71030a9acc  mov v8.16B,v0.16B
71030a9ad0  ldr q0,[x8, #0xca0]
71030a9ad4  adrp x8,0x710446a000
71030a9ad8  ldr q1,[x8, #0x360]
71030a9adc  adrp x8,0x7104465000
71030a9ae0  ldr q2,[x8, #0x6b0]
71030a9ae4  adrp x8,0x710446a000
71030a9ae8  ldr q3,[x8, #0x350]
71030a9aec  add x21,sp,#0x120
71030a9af0  mov x19,x0
71030a9af4  stp q0,q1,[x21, #0x60]
71030a9af8  stp q2,q3,[x21, #0x80]
71030a9afc  ldr w8,[x0, #0x1100]
71030a9b00  cmp w8,#0x8
71030a9b04  b.hi 0x71030aceec
71030a9b08  mov w9,#0x1150
71030a9b0c  add x22,x19,x9
71030a9b10  adrp x9,0x7104526000
71030a9b14  add x9,x9,#0x6b0
71030a9b18  ldrsw x8,[x9, x8, LSL #0x2]
71030a9b1c  add x8,x8,x9
71030a9b20  br x8
71030a9b24  ldr x8,[x19, #0x340]
71030a9b28  ldp w9,w10,[x8]
71030a9b2c  ldr s1,[x19, #0x740]
71030a9b30  ldr s0,[x19, #0x744]
71030a9b34  fsub s0,s0,s1
71030a9b38  str w10,[x8]
71030a9b3c  ldp w10,w11,[x8, #0x8]
71030a9b40  eor w9,w9,w9, LSL #0xb
71030a9b44  eor w9,w9,w9, LSR #0x8
71030a9b48  eor w9,w9,w11
71030a9b4c  eor w9,w9,w11, LSR #0x13
71030a9b50  ucvtf s2,w9
71030a9b54  stp w10,w11,[x8, #0x4]
71030a9b58  str w9,[x8, #0xc]
71030a9b5c  adrp x8,0x7104473000
71030a9b60  fmul s2,s0,s2
71030a9b64  ldr s0,[x8, #0x710]
71030a9b68  adrp x8,0x71052b9000
71030a9b6c  fmul s3,s2,s0
71030a9b70  fadd s1,s1,s3
71030a9b74  str s1,[x19, #0x1154]
71030a9b78  ldr x8,[x8, #0x4f8]
71030a9b7c  ldr x8,[x8]
71030a9b80  ldr w8,[x8, #0xa0]
71030a9b84  cmp w8,#0x2
71030a9b88  b.lt 0x71030a9bbc
71030a9b8c  ldr x10,[x19, #0x930]
71030a9b90  ldr x9,[x19, #0x928]
71030a9b94  subs x10,x10,x9
71030a9b98  b.eq 0x71030a9bbc
71030a9b9c  lsr x10,x10,#0x2
71030a9ba0  sub w8,w8,#0x1
71030a9ba4  sub w10,w10,#0x1
71030a9ba8  cmp w10,w8
71030a9bac  csel w8,w10,w8,lt
71030a9bb0  ldr s2,[x9,w8, sxtw #2]
71030a9bb4  fmul s1,s2,s1
71030a9bb8  str s1,[x19, #0x1154]
71030a9bbc  ldr x8,[x19, #0x340]
71030a9bc0  ldp w9,w10,[x8]
71030a9bc4  ldr s1,[x19, #0x754]
71030a9bc8  ldr s2,[x19, #0x758]
71030a9bcc  fsub s2,s2,s1
71030a9bd0  eor w9,w9,w9, LSL #0xb
71030a9bd4  str w10,[x8]
71030a9bd8  eor w9,w9,w9, LSR #0x8
71030a9bdc  ldp w10,w11,[x8, #0x8]
71030a9be0  eor w9,w9,w11
71030a9be4  eor w9,w9,w11, LSR #0x13
71030a9be8  ucvtf s3,w9
71030a9bec  fmul s2,s2,s3
71030a9bf0  fmul s3,s2,s0
71030a9bf4  fadd s1,s1,s3
71030a9bf8  stp w10,w11,[x8, #0x4]
71030a9bfc  str w9,[x8, #0xc]
71030a9c00  ldr x8,[x19, #0x340]
71030a9c04  ldr s2,[x19, #0x758]
71030a9c08  str s1,[x19, #0x115c]
71030a9c0c  ldr s1,[x19, #0x754]
71030a9c10  ldp w9,w10,[x8]
71030a9c14  eor w9,w9,w9, LSL #0xb
71030a9c18  str w10,[x8]
71030a9c1c  ldp w10,w11,[x8, #0x8]
71030a9c20  eor w9,w9,w9, LSR #0x8
71030a9c24  eor w9,w9,w11
71030a9c28  eor w9,w9,w11, LSR #0x13
71030a9c2c  ucvtf s3,w9
71030a9c30  fsub s2,s2,s1
71030a9c34  fmul s2,s2,s3
71030a9c38  fmul s3,s2,s0
71030a9c3c  fadd s0,s1,s3
71030a9c40  stp w10,w11,[x8, #0x4]
71030a9c44  str w9,[x8, #0xc]
71030a9c48  ldr x10,[x19, #0x340]
71030a9c4c  str s0,[x19, #0x1164]
71030a9c50  ldr s0,[x19, #0x74c]
71030a9c54  mov w11,#0x1
71030a9c58  fcvtzu w8,s0
71030a9c5c  ldr s0,[x19, #0x750]
71030a9c60  fcvtzu w9,s0
71030a9c64  sub w11,w11,w8
71030a9c68  add w9,w11,w9
71030a9c6c  ldp w11,w12,[x10]
71030a9c70  str w12,[x10]
71030a9c74  ldp w12,w13,[x10, #0x8]
71030a9c78  eor w11,w11,w11, LSL #0xb
71030a9c7c  eor w11,w11,w11, LSR #0x8
71030a9c80  eor w11,w11,w13
71030a9c84  eor w11,w11,w13, LSR #0x13
71030a9c88  stp w12,w13,[x10, #0x4]
71030a9c8c  str w11,[x10, #0xc]
71030a9c90  udiv w10,w11,w9
71030a9c94  msub w9,w10,w9,w11
71030a9c98  add w8,w9,w8
71030a9c9c  ucvtf s0,w8
71030a9ca0  ldr x8,[x19, #0x300]
71030a9ca4  str s0,[x19, #0x112c]
71030a9ca8  ldr x9,[x8, #0x18]
71030a9cac  ldp x8,x9,[x9]
71030a9cb0  cmp x8,x9
71030a9cb4  b.eq 0x71030aa7e8
71030a9cb8  mov x10,#0x6ec
71030a9cbc  movk x10,#0x9357, LSL #16
71030a9cc0  movk x10,#0xc, LSL #32
71030a9cc4  ldr x20,[x8], #0x8
71030a9cc8  ldr x11,[x20, #0xa0]
71030a9ccc  and x11,x11,#0xffffffffff
71030a9cd0  cmp x11,x10
71030a9cd4  b.eq 0x71030aa6d8
71030a9cd8  cmp x9,x8
71030a9cdc  b.ne 0x71030a9cc4
71030a9ce0  b 0x71030aa7e8
71030a9ce4  mov w8,#0x2
71030a9ce8  b 0x71030acee8
71030a9cec  ldr x20,[x19, #0x10d8]
71030a9cf0  cbnz x20,0x71030a9d04
71030a9cf4  ldr x8,[x19, #0x10e0]
71030a9cf8  cbnz x8,0x71030a9d04
71030a9cfc  ldr x8,[x19, #0x10e8]
71030a9d00  cbz x8,0x71030aa65c
71030a9d04  movi v2.2D,#0x0
71030a9d08  ldr x8,[x19, #0x890]
71030a9d0c  mov v3.16B,v2.16B
71030a9d10  mov v4.16B,v2.16B
71030a9d14  add x9,x8,#0x4
71030a9d18  add x10,x8,#0x28
71030a9d1c  ld1 {v4.S}[0],[x9]
71030a9d20  add x9,x8,#0x8
71030a9d24  ld1 {v4.S}[1],[x9]
71030a9d28  add x9,x8,#0x24
71030a9d2c  ld1 {v3.S}[0],[x9]
71030a9d30  add x9,x8,#0x44
71030a9d34  add x8,x8,#0x48
71030a9d38  ld1 {v2.S}[0],[x9]
71030a9d3c  ld1 {v2.S}[1],[x8]
71030a9d40  adrp x8,0x7104473000
71030a9d44  ldr s0,[x19, #0x748]
71030a9d48  ldr s1,[x8, #0x928]
71030a9d4c  fcmp s8,#0.0
71030a9d50  ld1 {v3.S}[1],[x10]
71030a9d54  fdiv s0,s0,s1
71030a9d58  ldr s1,[x19, #0x1154]
71030a9d5c  fmul s0,s0,s8
71030a9d60  fadd s0,s1,s0
71030a9d64  str s0,[x19, #0x1154]
71030a9d68  ldr s0,[x19, #0x11e8]
71030a9d6c  b.le 0x71030aa520
71030a9d70  fcmp s0,#0.0
71030a9d74  str q2,[sp, #0x80]
71030a9d78  b.le 0x71030a9d84
71030a9d7c  fsub s0,s0,s8
71030a9d80  str s0,[x19, #0x11e8]
71030a9d84  cbz x20,0x71030a9edc
71030a9d88  ldr x8,[x20, #0x38]
71030a9d8c  cbz x8,0x71030a9edc
71030a9d90  adrp x8,0x7105314000
71030a9d94  add x8,x8,#0x4d8
71030a9d98  ldarb w8,[x8]
71030a9d9c  tbz w8,#0x0,0x71030add00
71030a9da0  adrp x8,0x71052c5000
71030a9da4  ldrb w8,[x8, #0x18a]
71030a9da8  cbnz w8,0x71030a9edc
71030a9dac  ldr x8,[x20, #0x38]
71030a9db0  ldr x0,[x8, #0x130]
71030a9db4  ldr x8,[x0]
71030a9db8  ldr x8,[x8, #0xb0]
71030a9dbc  mov w1,wzr
71030a9dc0  stp q4,q3,[sp, #0x60]
71030a9dc4  blr x8
71030a9dc8  ldp q1,q3,[sp, #0x60]
71030a9dcc  fcmp s0,#0.0
71030a9dd0  b.le 0x71030a9edc
71030a9dd4  mov v9.16B,v0.16B
71030a9dd8  ldr s0,[x19, #0x11e8]
71030a9ddc  fcmp s0,#0.0
71030a9de0  b.hi 0x71030a9e44
71030a9de4  ldr x8,[x19, #0x320]
71030a9de8  ldr w2,[x19, #0x1198]
71030a9dec  sub x0,x29,#0xc0
71030a9df0  str q1,[x21]
71030a9df4  ldr x8,[x8, #0x48]
71030a9df8  ldr x1,[x8, #0x320]
71030a9dfc  add x4,sp,#0x120
71030a9e00  mov w6,#0x1
71030a9e04  mov w3,wzr
71030a9e08  mov w5,wzr
71030a9e0c  bl 0x71025f0150
71030a9e10  ldur x8,[x29, #-0xb0]
71030a9e14  cbz x8,0x71030a9e38
71030a9e18  ldp x9,x10,[x29, #-0xc0]
71030a9e1c  str x9,[x10]
71030a9e20  str x10,[x9, #0x8]
71030a9e24  ldr x9,[x8, #0x10]
71030a9e28  sub x9,x9,#0x1
71030a9e2c  str x9,[x8, #0x10]
71030a9e30  stp xzr,xzr,[x29, #-0xb8]
71030a9e34  stur xzr,[x29, #-0xc0]
71030a9e38  mov w8,#0x42700000
71030a9e3c  str w8,[x19, #0x11e8]
71030a9e40  ldp q1,q3,[sp, #0x60]
71030a9e44  ldr x8,[x19, #0x338]
71030a9e48  str q1,[x21]
71030a9e4c  ldr x22,[x8]
71030a9e50  ldr x0,[x22, #0x8]
71030a9e54  cbz x0,0x71030a9ed0
71030a9e58  add x1,sp,#0xe0
71030a9e5c  mov w2,#0x1
71030a9e60  str xzr,[sp, #0xe0]
71030a9e64  bl 0x7102405040
71030a9e68  cmn w0,#0x1
71030a9e6c  b.eq 0x71030a9ecc
71030a9e70  mov w20,w0
71030a9e74  cmp w0,#0x18
71030a9e78  b.hi 0x71030a9eb4
71030a9e7c  ldr x8,[x22, #0x8]
71030a9e80  mov w9,#0x50
71030a9e84  smaddl x8,w20,w9,x8
71030a9e88  ldr x0,[x8, #0x68]
71030a9e8c  ldr x8,[x0]
71030a9e90  cbz x8,0x71030a9eb4
71030a9e94  ldr w9,[x0, #0x8]
71030a9e98  cmn w9,#0x1
71030a9e9c  b.eq 0x71030a9eb4
71030a9ea0  ldr w8,[x8, #0x20]
71030a9ea4  cmp w9,w8
71030a9ea8  b.ne 0x71030a9eb4
71030a9eac  add x1,sp,#0x120
71030a9eb0  bl 0x7103736cf0
71030a9eb4  ldr x0,[x22, #0x8]
71030a9eb8  ldr x8,[x0]
71030a9ebc  ldr x8,[x8, #0x58]
71030a9ec0  mov w1,wzr
71030a9ec4  mov w2,w20
71030a9ec8  blr x8
71030a9ecc  ldr q3,[sp, #0x70]
71030a9ed0  ldr s0,[x19, #0x1154]
71030a9ed4  fsub s0,s0,s9
71030a9ed8  str s0,[x19, #0x1154]
71030a9edc  ldr s0,[x19, #0x11ec]
71030a9ee0  fcmp s0,#0.0
71030a9ee4  b.le 0x71030a9ef0
71030a9ee8  fsub s0,s0,s8
71030a9eec  str s0,[x19, #0x11ec]
71030a9ef0  ldr x20,[x19, #0x10e0]
71030a9ef4  cbz x20,0x71030aa048
71030a9ef8  ldr x8,[x20, #0x38]
71030a9efc  cbz x8,0x71030aa048
71030a9f00  adrp x8,0x7105314000
71030a9f04  add x8,x8,#0x4d8
71030a9f08  ldarb w8,[x8]
71030a9f0c  tbz w8,#0x0,0x71030add4c
71030a9f10  adrp x8,0x71052c5000
71030a9f14  ldrb w8,[x8, #0x18a]
71030a9f18  cbnz w8,0x71030aa048
71030a9f1c  ldr x8,[x20, #0x38]
71030a9f20  mov w1,wzr
71030a9f24  ldr x0,[x8, #0x130]
71030a9f28  str q3,[sp, #0x70]
71030a9f2c  ldr x8,[x0]
71030a9f30  ldr x8,[x8, #0xb0]
71030a9f34  blr x8
71030a9f38  ldr q1,[sp, #0x70]
71030a9f3c  fcmp s0,#0.0
71030a9f40  b.le 0x71030aa048
71030a9f44  mov v9.16B,v0.16B
71030a9f48  ldr s0,[x19, #0x11ec]
71030a9f4c  fcmp s0,#0.0
71030a9f50  b.hi 0x71030a9fb4
71030a9f54  ldr x8,[x19, #0x320]
71030a9f58  ldr w2,[x19, #0x1198]
71030a9f5c  sub x0,x29,#0xc0
71030a9f60  str q1,[x21]
71030a9f64  ldr x8,[x8, #0x48]
71030a9f68  ldr x1,[x8, #0x320]
71030a9f6c  add x4,sp,#0x120
71030a9f70  mov w6,#0x1
71030a9f74  mov w3,wzr
71030a9f78  mov w5,wzr
71030a9f7c  bl 0x71025f0150
71030a9f80  ldur x8,[x29, #-0xb0]
71030a9f84  cbz x8,0x71030a9fa8
71030a9f88  ldp x9,x10,[x29, #-0xc0]
71030a9f8c  str x9,[x10]
71030a9f90  str x10,[x9, #0x8]
71030a9f94  ldr x9,[x8, #0x10]
71030a9f98  sub x9,x9,#0x1
71030a9f9c  str x9,[x8, #0x10]
71030a9fa0  stp xzr,xzr,[x29, #-0xb8]
71030a9fa4  stur xzr,[x29, #-0xc0]
71030a9fa8  ldr q1,[sp, #0x70]
71030a9fac  mov w8,#0x42700000
71030a9fb0  str w8,[x19, #0x11ec]
71030a9fb4  ldr x8,[x19, #0x338]
71030a9fb8  str q1,[x21]
71030a9fbc  ldr x22,[x8]
71030a9fc0  ldr x0,[x22, #0x8]
71030a9fc4  cbz x0,0x71030aa03c
71030a9fc8  add x1,sp,#0xe0
71030a9fcc  mov w2,#0x1
71030a9fd0  str xzr,[sp, #0xe0]
71030a9fd4  bl 0x7102405040
71030a9fd8  cmn w0,#0x1
71030a9fdc  b.eq 0x71030aa03c
71030a9fe0  mov w20,w0
71030a9fe4  cmp w0,#0x18
71030a9fe8  b.hi 0x71030aa024
71030a9fec  ldr x8,[x22, #0x8]
71030a9ff0  mov w9,#0x50
71030a9ff4  smaddl x8,w20,w9,x8
71030a9ff8  ldr x0,[x8, #0x68]
71030a9ffc  ldr x8,[x0]
71030aa000  cbz x8,0x71030aa024
71030aa004  ldr w9,[x0, #0x8]
71030aa008  cmn w9,#0x1
71030aa00c  b.eq 0x71030aa024
71030aa010  ldr w8,[x8, #0x20]
71030aa014  cmp w9,w8
71030aa018  b.ne 0x71030aa024
71030aa01c  add x1,sp,#0x120
71030aa020  bl 0x7103736cf0
71030aa024  ldr x0,[x22, #0x8]
71030aa028  ldr x8,[x0]
71030aa02c  ldr x8,[x8, #0x58]
71030aa030  mov w1,wzr
71030aa034  mov w2,w20
71030aa038  blr x8
71030aa03c  ldr s0,[x19, #0x1154]
71030aa040  fsub s0,s0,s9
71030aa044  str s0,[x19, #0x1154]
71030aa048  ldr s0,[x19, #0x11f0]
71030aa04c  fcmp s0,#0.0
71030aa050  b.le 0x71030aa05c
71030aa054  fsub s0,s0,s8
71030aa058  str s0,[x19, #0x11f0]
71030aa05c  ldr x20,[x19, #0x10e8]
71030aa060  cbz x20,0x71030aa65c
71030aa064  ldr x8,[x20, #0x38]
71030aa068  cbz x8,0x71030aa65c
71030aa06c  adrp x8,0x7105314000
71030aa070  add x8,x8,#0x4d8
71030aa074  ldarb w8,[x8]
71030aa078  tbz w8,#0x0,0x71030add98
71030aa07c  adrp x8,0x71052c5000
71030aa080  ldrb w8,[x8, #0x18a]
71030aa084  cbnz w8,0x71030aa65c
71030aa088  ldr x8,[x20, #0x38]
71030aa08c  ldr x0,[x8, #0x130]
71030aa090  ldr x8,[x0]
71030aa094  ldr x8,[x8, #0xb0]
71030aa098  mov w1,wzr
71030aa09c  blr x8
71030aa0a0  fcmp s0,#0.0
71030aa0a4  b.le 0x71030aa65c
71030aa0a8  mov v9.16B,v0.16B
71030aa0ac  ldr s0,[x19, #0x11f0]
71030aa0b0  fcmp s0,#0.0
71030aa0b4  b.hi 0x71030aa118
71030aa0b8  ldr q0,[sp, #0x80]
71030aa0bc  ldr x8,[x19, #0x320]
71030aa0c0  sub x0,x29,#0xc0
71030aa0c4  ldr w2,[x19, #0x1198]
71030aa0c8  add x4,sp,#0x120
71030aa0cc  mov w6,#0x1
71030aa0d0  str q0,[x21]
71030aa0d4  ldr x8,[x8, #0x48]
71030aa0d8  ldr x1,[x8, #0x320]
71030aa0dc  mov w3,wzr
71030aa0e0  mov w5,wzr
71030aa0e4  bl 0x71025f0150
71030aa0e8  ldur x8,[x29, #-0xb0]
71030aa0ec  cbz x8,0x71030aa110
71030aa0f0  ldp x9,x10,[x29, #-0xc0]
71030aa0f4  str x9,[x10]
71030aa0f8  str x10,[x9, #0x8]
71030aa0fc  ldr x9,[x8, #0x10]
71030aa100  sub x9,x9,#0x1
71030aa104  str x9,[x8, #0x10]
71030aa108  stp xzr,xzr,[x29, #-0xb8]
71030aa10c  stur xzr,[x29, #-0xc0]
71030aa110  mov w8,#0x42700000
71030aa114  str w8,[x19, #0x11f0]
71030aa118  ldr q0,[sp, #0x80]
71030aa11c  ldr x8,[x19, #0x338]
71030aa120  str q0,[x21]
71030aa124  ldr x22,[x8]
71030aa128  ldr x0,[x22, #0x8]
71030aa12c  cbz x0,0x71030aa1a4
71030aa130  add x1,sp,#0xe0
71030aa134  mov w2,#0x1
71030aa138  str xzr,[sp, #0xe0]
71030aa13c  bl 0x7102405040
71030aa140  cmn w0,#0x1
71030aa144  b.eq 0x71030aa1a4
71030aa148  mov w20,w0
71030aa14c  cmp w0,#0x18
71030aa150  b.hi 0x71030aa18c
71030aa154  ldr x8,[x22, #0x8]
71030aa158  mov w9,#0x50
71030aa15c  smaddl x8,w20,w9,x8
71030aa160  ldr x0,[x8, #0x68]
71030aa164  ldr x8,[x0]
71030aa168  cbz x8,0x71030aa18c
71030aa16c  ldr w9,[x0, #0x8]
71030aa170  cmn w9,#0x1
71030aa174  b.eq 0x71030aa18c
71030aa178  ldr w8,[x8, #0x20]
71030aa17c  cmp w9,w8
71030aa180  b.ne 0x71030aa18c
71030aa184  add x1,sp,#0x120
71030aa188  bl 0x7103736cf0
71030aa18c  ldr x0,[x22, #0x8]
71030aa190  ldr x8,[x0]
71030aa194  ldr x8,[x8, #0x58]
71030aa198  mov w1,wzr
71030aa19c  mov w2,w20
71030aa1a0  blr x8
71030aa1a4  ldr s0,[x19, #0x1154]
71030aa1a8  fsub s0,s0,s9
71030aa1ac  b 0x71030aa658
71030aa1b0  mov w1,#0x1
71030aa1b4  mov x0,x19
71030aa1b8  mov w2,wzr
71030aa1bc  stp q3,q2,[sp, #0x50]
71030aa1c0  stp q1,q0,[sp, #0x70]
71030aa1c4  bl 0x71030ae260
71030aa1c8  ldr x8,[x19, #0x300]
71030aa1cc  ldr x9,[x8, #0x18]
71030aa1d0  ldp x8,x9,[x9]
71030aa1d4  cmp x8,x9
71030aa1d8  b.eq 0x71030aa914
71030aa1dc  mov x10,#0x6ec
71030aa1e0  movk x10,#0x9357, LSL #16
71030aa1e4  movk x10,#0xc, LSL #32
71030aa1e8  ldr x11,[x8], #0x8
71030aa1ec  ldr x12,[x11, #0xa0]
71030aa1f0  and x12,x12,#0xffffffffff
71030aa1f4  cmp x12,x10
71030aa1f8  b.eq 0x71030aa904
71030aa1fc  cmp x9,x8
71030aa200  b.ne 0x71030aa1e8
71030aa204  b 0x71030aa914
71030aa208  ldr s0,[x19, #0x1104]
71030aa20c  adrp x8,0x7104472000
71030aa210  fadd s1,s0,s8
71030aa214  ldr s0,[x8, #0xe0c]
71030aa218  fcmp s1,s0
71030aa21c  str s1,[x19, #0x1104]
71030aa220  b.le 0x71030aa230
71030aa224  ldrb w8,[x22, #0x2]
71030aa228  cbz w8,0x71030abc94
71030aa22c  ldr s1,[x19, #0x1104]
71030aa230  fmov s0,0x41f00000
71030aa234  fcmp s1,s0
71030aa238  b.le 0x71030aa290
71030aa23c  ldrb w8,[x22, #0x3]
71030aa240  cbnz w8,0x71030aa290
71030aa244  ldr x8,[x19, #0x11f8]
71030aa248  ldp x20,x23,[x8]
71030aa24c  cmp x20,x23
71030aa250  b.eq 0x71030aa288
71030aa254  mov w24,#0x1
71030aa258  mov x25,#-0x1
71030aa25c  ldr x8,[x20]
71030aa260  ldr x9,[x8, #0x8]
71030aa264  strb w24,[x8, #0x128]
71030aa268  cbz x9,0x71030aa27c
71030aa26c  str x25,[x9, #0xd8]
71030aa270  ldr x0,[x8, #0x8]
71030aa274  mov w1,wzr
71030aa278  bl 0x7100532bc0
71030aa27c  add x20,x20,#0x8
71030aa280  cmp x23,x20
71030aa284  b.ne 0x71030aa25c
71030aa288  mov w8,#0x1
71030aa28c  strb w8,[x22, #0x3]
71030aa290  ldrb w8,[x19, #0xf9d]
71030aa294  cbz w8,0x71030acb64
71030aa298  ldrb w8,[x19, #0xf9e]
71030aa29c  cbz w8,0x71030acb64
71030aa2a0  ldrb w8,[x22]
71030aa2a4  cbnz w8,0x71030acb64
71030aa2a8  ldr w8,[x19, #0x113c]
71030aa2ac  cbz w8,0x71030abda8
71030aa2b0  cmp w8,#0x1
71030aa2b4  b.eq 0x71030ac0c8
71030aa2b8  cmp w8,#0x2
71030aa2bc  b.ne 0x71030ac164
71030aa2c0  ldr x9,[x19, #0x988]
71030aa2c4  ldr x1,[x9, #0x320]
71030aa2c8  ldr x9,[x1, #0x40]
71030aa2cc  ldp x20,x10,[x9]
71030aa2d0  mov x8,#0x1e65
71030aa2d4  movk x8,#0x2bed, LSL #16
71030aa2d8  movk x8,#0xc, LSL #32
71030aa2dc  cmp x10,x20
71030aa2e0  b.eq 0x71030aa328
71030aa2e4  cmp x20,x10
71030aa2e8  b.eq 0x71030aa320
71030aa2ec  ldr x11,[x20, #0x10]
71030aa2f0  and x11,x11,#0xffffffffff
71030aa2f4  cmp x11,x8
71030aa2f8  b.eq 0x71030aa320
71030aa2fc  add x11,x20,#0x70
71030aa300  cmp x10,x11
71030aa304  b.eq 0x71030aa328
71030aa308  ldr x12,[x11, #0x10]
71030aa30c  add x11,x11,#0x70
71030aa310  and x12,x12,#0xffffffffff
71030aa314  cmp x12,x8
71030aa318  b.ne 0x71030aa300
71030aa31c  sub x20,x11,#0x70
71030aa320  cmp x20,x10
71030aa324  b.ne 0x71030aa32c
71030aa328  add x20,x9,#0x20
71030aa32c  ldr x9,[x20, #0x10]
71030aa330  and x9,x9,#0xffffffffff
71030aa334  cmp x9,x8
71030aa338  b.ne 0x71030ac194
71030aa33c  ldr x2,[x20, #0x8]
71030aa340  sub x0,x29,#0xc0
71030aa344  bl 0x7102626be0
71030aa348  sub x1,x29,#0xc0
71030aa34c  mov x0,x20
71030aa350  mov x2,xzr
71030aa354  bl 0x71025f0f50
71030aa358  b 0x71030ac19c
71030aa35c  mov x0,x19
71030aa360  mov w1,wzr
71030aa364  mov w2,wzr
71030aa368  bl 0x71030ae260
71030aa36c  ldr x8,[x19, #0x11e0]
71030aa370  cbz x8,0x71030aa39c
71030aa374  ldp x0,x1,[x8]
71030aa378  adrp x2,0x71042a1000
71030aa37c  add x2,x2,#0x676
71030aa380  bl 0x71025f55b0
71030aa384  ldr x8,[x19, #0x11e0]
71030aa388  cbz x8,0x71030aa39c
71030aa38c  ldp x0,x1,[x8]
71030aa390  adrp x2,0x7104441000
71030aa394  add x2,x2,#0xec7
71030aa398  bl 0x71025f55b0
71030aa39c  mov w8,#0x8
71030aa3a0  str x8,[x19, #0x1100]
71030aa3a4  orr w8,wzr,#0x6
71030aa3a8  str w8,[x19, #0xa84]
71030aa3ac  add x8,x19,#0xa8c
71030aa3b0  str xzr,[x8]
71030aa3b4  ldr w8,[x19, #0xa80]
71030aa3b8  mov w20,#0x1104
71030aa3bc  cmp w8,#0x2
71030aa3c0  b.eq 0x71030aa6a4
71030aa3c4  cmp w8,#0x1
71030aa3c8  b.ne 0x71030ab4bc
71030aa3cc  ldr x8,[x19, #0x9c0]
71030aa3d0  cbz x8,0x71030ab32c
71030aa3d4  add x0,x8,#0x108
71030aa3d8  mov w9,#0x1
71030aa3dc  strb w9,[x8, #0x110]
71030aa3e0  bl 0x71025e9d50
71030aa3e4  ldr x8,[x19, #0x9c0]
71030aa3e8  cbz x8,0x71030ab32c
71030aa3ec  ldrb w9,[x8, #0x118]
71030aa3f0  and w9,w9,#0xfe
71030aa3f4  strb w9,[x8, #0x118]
71030aa3f8  ldr x0,[x19, #0x9c0]
71030aa3fc  b 0x71030ab330
71030aa400  orr w8,wzr,#0x6
71030aa404  str x8,[x19, #0x1100]
71030aa408  ldrb w8,[x22, #0x4c]
71030aa40c  cbz w8,0x71030ab8c8
71030aa410  ldr x8,[x19, #0x300]
71030aa414  ldr x9,[x8, #0x18]
71030aa418  ldp x8,x9,[x9]
71030aa41c  cmp x8,x9
71030aa420  b.eq 0x71030ab8c8
71030aa424  mov x10,#0x821c
71030aa428  movk x10,#0x81e3, LSL #16
71030aa42c  movk x10,#0xa, LSL #32
71030aa430  ldr x11,[x8], #0x8
71030aa434  ldr x12,[x11, #0xa0]
71030aa438  and x12,x12,#0xffffffffff
71030aa43c  cmp x12,x10
71030aa440  b.eq 0x71030ab834
71030aa444  cmp x9,x8
71030aa448  b.ne 0x71030aa430
71030aa44c  b 0x71030ab8c8
71030aa450  ldr x0,[x19, #0x10b0]
71030aa454  ldr x8,[x0, #0x30]
71030aa458  cbz x8,0x71030aa468
71030aa45c  ldrb w8,[x8, #0x10]
71030aa460  cmp w8,#0x0
71030aa464  cset w8,ne
71030aa468  tbnz w8,#0x0,0x71030aa4a4
71030aa46c  ldrb w8,[x0, #0x40]
71030aa470  cbnz w8,0x71030aa4a4
71030aa474  ldr x8,[x19, #0x1058]
71030aa478  cbz x8,0x71030aceec
71030aa47c  ldr x8,[x8, #0xd8]
71030aa480  cbz x8,0x71030aa4a4
71030aa484  ldr s0,[x8, #0x10]
71030aa488  adrp x8,0x7104472000
71030aa48c  ldr s1,[x8, #0x4f0]
71030aa490  fcmp s0,s1
71030aa494  b.le 0x71030aa4a4
71030aa498  bl 0x710313ef20
71030aa49c  str wzr,[x19, #0x115c]
71030aa4a0  str wzr,[x19, #0x1164]
71030aa4a4  ldr x8,[x19, #0x1058]
71030aa4a8  cbz x8,0x71030aceec
71030aa4ac  ldr x8,[x8, #0xd8]
71030aa4b0  cbz x8,0x71030aceec
71030aa4b4  ldr s0,[x8, #0x10]
71030aa4b8  adrp x8,0x7104472000
71030aa4bc  ldr s1,[x8, #0x58c]
71030aa4c0  fcmp s0,s1
71030aa4c4  b.lt 0x71030aceec
71030aa4c8  orr w8,wzr,#0x7
71030aa4cc  str w8,[x19, #0x1100]
71030aa4d0  ldr x8,[x19, #0x300]
71030aa4d4  ldr x9,[x8, #0x18]
71030aa4d8  ldp x8,x9,[x9]
71030aa4dc  cmp x8,x9
71030aa4e0  b.eq 0x71030aceec
71030aa4e4  mov x10,#0x6ec
71030aa4e8  movk x10,#0x9357, LSL #16
71030aa4ec  movk x10,#0xc, LSL #32
71030aa4f0  ldr x11,[x8], #0x8
71030aa4f4  ldr x12,[x11, #0xa0]
71030aa4f8  and x12,x12,#0xffffffffff
71030aa4fc  cmp x12,x10
71030aa500  b.eq 0x71030abd3c
71030aa504  cmp x9,x8
71030aa508  b.ne 0x71030aa4f0
71030aa50c  b 0x71030aceec
71030aa510  mov w8,#0x1104
71030aa514  add x22,x19,x8
71030aa518  add x23,x19,#0xa84
71030aa51c  b 0x71030ab5c0
71030aa520  fcmp s0,#0.0
71030aa524  b.le 0x71030aa530
71030aa528  fsub s0,s0,s8
71030aa52c  str s0,[x19, #0x11e8]
71030aa530  cbz x20,0x71030aa584
71030aa534  ldr x8,[x20, #0x38]
71030aa538  cbz x8,0x71030aa584
71030aa53c  adrp x8,0x7105314000
71030aa540  add x8,x8,#0x4d8
71030aa544  ldarb w8,[x8]
71030aa548  tbz w8,#0x0,0x71030addd8
71030aa54c  adrp x8,0x71052c5000
71030aa550  ldrb w8,[x8, #0x18a]
71030aa554  cbnz w8,0x71030aa584
71030aa558  ldr x8,[x20, #0x38]
71030aa55c  ldr x0,[x8, #0x130]
71030aa560  ldr x8,[x0]
71030aa564  ldr x8,[x8, #0xb0]
71030aa568  mov w1,wzr
71030aa56c  blr x8
71030aa570  fcmp s0,#0.0
71030aa574  b.le 0x71030aa584
71030aa578  ldr s1,[x19, #0x1154]
71030aa57c  fsub s0,s1,s0
71030aa580  str s0,[x19, #0x1154]
71030aa584  ldr s0,[x19, #0x11ec]
71030aa588  fcmp s0,#0.0
71030aa58c  b.le 0x71030aa598
71030aa590  fsub s0,s0,s8
71030aa594  str s0,[x19, #0x11ec]
71030aa598  ldr x20,[x19, #0x10e0]
71030aa59c  cbz x20,0x71030aa5f0
71030aa5a0  ldr x8,[x20, #0x38]
71030aa5a4  cbz x8,0x71030aa5f0
71030aa5a8  adrp x8,0x7105314000
71030aa5ac  add x8,x8,#0x4d8
71030aa5b0  ldarb w8,[x8]
71030aa5b4  tbz w8,#0x0,0x71030ade18
71030aa5b8  adrp x8,0x71052c5000
71030aa5bc  ldrb w8,[x8, #0x18a]
71030aa5c0  cbnz w8,0x71030aa5f0
71030aa5c4  ldr x8,[x20, #0x38]
71030aa5c8  ldr x0,[x8, #0x130]
71030aa5cc  ldr x8,[x0]
71030aa5d0  ldr x8,[x8, #0xb0]
71030aa5d4  mov w1,wzr
71030aa5d8  blr x8
71030aa5dc  fcmp s0,#0.0
71030aa5e0  b.le 0x71030aa5f0
71030aa5e4  ldr s1,[x19, #0x1154]
71030aa5e8  fsub s0,s1,s0
71030aa5ec  str s0,[x19, #0x1154]
71030aa5f0  ldr s0,[x19, #0x11f0]
71030aa5f4  fcmp s0,#0.0
71030aa5f8  b.le 0x71030aa604
71030aa5fc  fsub s0,s0,s8
71030aa600  str s0,[x19, #0x11f0]
71030aa604  ldr x20,[x19, #0x10e8]
71030aa608  cbz x20,0x71030aa65c
71030aa60c  ldr x8,[x20, #0x38]
71030aa610  cbz x8,0x71030aa65c
71030aa614  adrp x8,0x7105314000
71030aa618  add x8,x8,#0x4d8
71030aa61c  ldarb w8,[x8]
71030aa620  tbz w8,#0x0,0x71030ade58
71030aa624  adrp x8,0x71052c5000
71030aa628  ldrb w8,[x8, #0x18a]
71030aa62c  cbnz w8,0x71030aa65c
71030aa630  ldr x8,[x20, #0x38]
71030aa634  ldr x0,[x8, #0x130]
71030aa638  ldr x8,[x0]
71030aa63c  ldr x8,[x8, #0xb0]
71030aa640  mov w1,wzr
71030aa644  blr x8
71030aa648  fcmp s0,#0.0
71030aa64c  b.le 0x71030aa65c
71030aa650  ldr s1,[x19, #0x1154]
71030aa654  fsub s0,s1,s0
71030aa658  str s0,[x19, #0x1154]
71030aa65c  ldr s0,[x19, #0x1104]
71030aa660  fadd s0,s0,s8
71030aa664  ldrb w8,[x19, #0x18]
71030aa668  str s0,[x19, #0x1104]
71030aa66c  cbz w8,0x71030aceec
71030aa670  fcmp s8,#0.0
71030aa674  b.le 0x71030aceec
71030aa678  ldr s0,[x19, #0x1154]
71030aa67c  fcmp s0,#0.0
71030aa680  b.hi 0x71030aceec
71030aa684  ldr x8,[x19, #0x11e0]
71030aa688  cbz x8,0x71030aa69c
71030aa68c  ldp x0,x1,[x8]
71030aa690  adrp x2,0x71042a1000
71030aa694  add x2,x2,#0x67e
71030aa698  bl 0x71025f55b0
71030aa69c  orr w8,wzr,#0x3
71030aa6a0  b 0x71030acee8
71030aa6a4  ldr x8,[x19, #0x9b8]
71030aa6a8  cbz x8,0x71030ab3b4
71030aa6ac  add x0,x8,#0x108
71030aa6b0  mov w9,#0x1
71030aa6b4  strb w9,[x8, #0x110]
71030aa6b8  bl 0x71025e9d50
71030aa6bc  ldr x8,[x19, #0x9b8]
71030aa6c0  cbz x8,0x71030ab3b4
71030aa6c4  ldrb w9,[x8, #0x118]
71030aa6c8  and w9,w9,#0xfe
71030aa6cc  strb w9,[x8, #0x118]
71030aa6d0  ldr x0,[x19, #0x9b8]
71030aa6d4  b 0x71030ab3b8
71030aa6d8  ldr x8,[x20, #0x110]
71030aa6dc  ldp x22,x23,[x8]
71030aa6e0  cmp x22,x23
71030aa6e4  b.eq 0x71030aa7e8
71030aa6e8  mov w24,#0x1
71030aa6ec  mov x25,#-0x1
71030aa6f0  ldr x8,[x22]
71030aa6f4  ldr x9,[x8, #0x8]
71030aa6f8  strb w24,[x8, #0x128]
71030aa6fc  cbz x9,0x71030aa710
71030aa700  str x25,[x9, #0xd8]
71030aa704  ldr x0,[x8, #0x8]
71030aa708  mov w1,wzr
71030aa70c  bl 0x7100532bc0
71030aa710  add x22,x22,#0x8
71030aa714  cmp x23,x22
71030aa718  b.ne 0x71030aa6f0
71030aa71c  ldr x9,[x20, #0x110]
71030aa720  ldp x8,x9,[x9]
71030aa724  cmp x8,x9
71030aa728  b.eq 0x71030aa7e8
71030aa72c  ldr x20,[x8]
71030aa730  cbz x20,0x71030aa7e8
71030aa734  ldr x8,[x20, #0x60]
71030aa738  cbz x8,0x71030aa76c
71030aa73c  ldrh w9,[x8, #0x8]
71030aa740  sub w9,w9,#0x1
71030aa744  sxth w10,w9
71030aa748  cmp w10,#0x0
71030aa74c  strh w9,[x8, #0x8]
71030aa750  b.gt 0x71030aa768
71030aa754  ldr x0,[x20, #0x60]
71030aa758  cbz x0,0x71030aa768
71030aa75c  ldr x8,[x0]
71030aa760  ldr x8,[x8, #0x8]
71030aa764  blr x8
71030aa768  str xzr,[x20, #0x60]
71030aa76c  mov w1,#0x28
71030aa770  mov w0,#0x10
71030aa774  bl 0x710392e290
71030aa778  cbnz x0,0x71030aa7c0
71030aa77c  adrp x8,0x7105332000
71030aa780  ldr x0,[x8, #0xf00]
71030aa784  cbz x0,0x71030aa7bc
71030aa788  mov w8,#0x28
71030aa78c  str wzr,[sp, #0x120]
71030aa790  add x1,sp,#0x120
71030aa794  stur x8,[x29, #-0xc0]
71030aa798  ldr x8,[x0]
71030aa79c  ldr x8,[x8, #0x30]
71030aa7a0  sub x2,x29,#0xc0
71030aa7a4  blr x8
71030aa7a8  tbz w0,#0x0,0x71030aa7bc
71030aa7ac  mov w1,#0x28
71030aa7b0  mov w0,#0x10
71030aa7b4  bl 0x710392e290
71030aa7b8  cbnz x0,0x71030aa7c0
71030aa7bc  mov x0,xzr
71030aa7c0  mov w8,#0x1
71030aa7c4  str w8,[x0, #0x8]
71030aa7c8  adrp x8,0x710516d000
71030aa7cc  add x8,x8,#0x598
71030aa7d0  str x8,[x0]
71030aa7d4  adrp x8,0x71030ad000
71030aa7d8  add x8,x8,#0xea0
71030aa7dc  stp x19,x8,[x0, #0x10]
71030aa7e0  str xzr,[x0, #0x20]
71030aa7e4  str x0,[x20, #0x60]
71030aa7e8  ldr x8,[x19, #0x1050]
71030aa7ec  cbz x8,0x71030aa850
71030aa7f0  add x0,x8,#0x108
71030aa7f4  mov w9,#0x1
71030aa7f8  strb w9,[x8, #0x110]
71030aa7fc  bl 0x71025e9d50
71030aa800  ldr x8,[x19, #0x1050]
71030aa804  cbz x8,0x71030aa850
71030aa808  ldrb w9,[x8, #0x118]
71030aa80c  and w9,w9,#0xfe
71030aa810  strb w9,[x8, #0x118]
71030aa814  ldr x8,[x19, #0x1050]
71030aa818  cbz x8,0x71030aa850
71030aa81c  ldrb w9,[x8, #0xe0]
71030aa820  cbz w9,0x71030aa830
71030aa824  ldr x9,[x8, #0xc8]
71030aa828  cbz x9,0x71030aa830
71030aa82c  strh wzr,[x9, #0x30]
71030aa830  ldr x9,[x8, #0xd8]
71030aa834  cbz x9,0x71030aa83c
71030aa838  strb wzr,[x9, #0x21]
71030aa83c  ldrb w9,[x8, #0xe0]
71030aa840  cbz w9,0x71030aa850
71030aa844  ldr x8,[x8, #0xb0]
71030aa848  mov w9,#0x1
71030aa84c  strb w9,[x8, #0x10]
71030aa850  ldr x8,[x19, #0x1058]
71030aa854  cbz x8,0x71030aa880
71030aa858  add x0,x8,#0x108
71030aa85c  strb wzr,[x8, #0x110]
71030aa860  bl 0x71025e9d50
71030aa864  ldr x8,[x19, #0x1058]
71030aa868  cbz x8,0x71030aa880
71030aa86c  ldrb w9,[x8, #0x118]
71030aa870  orr w9,w9,#0x1
71030aa874  strb w9,[x8, #0x118]
71030aa878  ldr x0,[x19, #0x1058]
71030aa87c  b 0x71030aa884
71030aa880  mov x0,xzr
71030aa884  fmov s0,wzr
71030aa888  mov w1,#0x1
71030aa88c  bl 0x710260fdd0
71030aa890  ldr x8,[x19, #0x1058]
71030aa894  cbz x8,0x71030aa8d0
71030aa898  ldrb w9,[x8, #0xe0]
71030aa89c  cbz w9,0x71030aa8b0
71030aa8a0  ldr x9,[x8, #0xc8]
71030aa8a4  cbz x9,0x71030aa8b0
71030aa8a8  mov w10,#0x101
71030aa8ac  strh w10,[x9, #0x30]
71030aa8b0  ldr x9,[x8, #0xd8]
71030aa8b4  cbz x9,0x71030aa8c0
71030aa8b8  mov w10,#0x1
71030aa8bc  strb w10,[x9, #0x21]
71030aa8c0  ldrb w9,[x8, #0xe0]
71030aa8c4  cbz w9,0x71030aa8d0
71030aa8c8  ldr x8,[x8, #0xb0]
71030aa8cc  strb wzr,[x8, #0x10]
71030aa8d0  ldr x0,[x19, #0x10d8]
71030aa8d4  cbz x0,0x71030aa8dc
71030aa8d8  bl 0x710313ef20
71030aa8dc  ldr x0,[x19, #0x10e0]
71030aa8e0  cbz x0,0x71030aa8e8
71030aa8e4  bl 0x710313ef20
71030aa8e8  ldr x0,[x19, #0x10e8]
71030aa8ec  cbz x0,0x71030aa8f4
71030aa8f0  bl 0x710313ef20
71030aa8f4  mov w8,#0x1
71030aa8f8  str xzr,[x19, #0x1110]
71030aa8fc  str x8,[x19, #0x1100]
71030aa900  b 0x71030aceec
71030aa904  ldr x8,[x11, #0x110]
71030aa908  ldp x0,x1,[x8]
71030aa90c  mov w2,#0x1
71030aa910  bl 0x71025f4d80
71030aa914  ldr x8,[x19, #0x1050]
71030aa918  cbz x8,0x71030aa97c
71030aa91c  add x0,x8,#0x108
71030aa920  strb wzr,[x8, #0x110]
71030aa924  bl 0x71025e9d50
71030aa928  ldr x8,[x19, #0x1050]
71030aa92c  cbz x8,0x71030aa97c
71030aa930  ldrb w9,[x8, #0x118]
71030aa934  orr w9,w9,#0x1
71030aa938  strb w9,[x8, #0x118]
71030aa93c  ldr x8,[x19, #0x1050]
71030aa940  cbz x8,0x71030aa97c
71030aa944  ldrb w9,[x8, #0xe0]
71030aa948  cbz w9,0x71030aa95c
71030aa94c  ldr x9,[x8, #0xc8]
71030aa950  cbz x9,0x71030aa95c
71030aa954  mov w10,#0x101
71030aa958  strh w10,[x9, #0x30]
71030aa95c  ldr x9,[x8, #0xd8]
71030aa960  cbz x9,0x71030aa96c
71030aa964  mov w10,#0x1
71030aa968  strb w10,[x9, #0x21]
71030aa96c  ldrb w9,[x8, #0xe0]
71030aa970  cbz w9,0x71030aa97c
71030aa974  ldr x8,[x8, #0xb0]
71030aa978  strb wzr,[x8, #0x10]
71030aa97c  ldr x8,[x19, #0x1058]
71030aa980  cbz x8,0x71030aa9b0
71030aa984  add x0,x8,#0x108
71030aa988  mov w9,#0x1
71030aa98c  strb w9,[x8, #0x110]
71030aa990  bl 0x71025e9d50
71030aa994  ldr x8,[x19, #0x1058]
71030aa998  cbz x8,0x71030aa9b0
71030aa99c  ldrb w9,[x8, #0x118]
71030aa9a0  and w9,w9,#0xfe
71030aa9a4  strb w9,[x8, #0x118]
71030aa9a8  ldr x0,[x19, #0x1058]
71030aa9ac  b 0x71030aa9b4
71030aa9b0  mov x0,xzr
71030aa9b4  fmov s0,wzr
71030aa9b8  mov w1,#0x1
71030aa9bc  bl 0x710260fdd0
71030aa9c0  ldr x8,[x19, #0x1058]
71030aa9c4  cbz x8,0x71030aa9fc
71030aa9c8  ldrb w9,[x8, #0xe0]
71030aa9cc  cbz w9,0x71030aa9dc
71030aa9d0  ldr x9,[x8, #0xc8]
71030aa9d4  cbz x9,0x71030aa9dc
71030aa9d8  strh wzr,[x9, #0x30]
71030aa9dc  ldr x9,[x8, #0xd8]
71030aa9e0  cbz x9,0x71030aa9e8
71030aa9e4  strb wzr,[x9, #0x21]
71030aa9e8  ldrb w9,[x8, #0xe0]
71030aa9ec  cbz w9,0x71030aa9fc
71030aa9f0  ldr x8,[x8, #0xb0]
71030aa9f4  mov w9,#0x1
71030aa9f8  strb w9,[x8, #0x10]
71030aa9fc  ldr x8,[x19, #0x338]
71030aaa00  str wzr,[x19, #0x1104]
71030aaa04  stp xzr,xzr,[x29, #-0xc0]
71030aaa08  ldr x22,[x8]
71030aaa0c  ldr x0,[x22, #0x8]
71030aaa10  cbz x0,0x71030aaa88
71030aaa14  add x1,sp,#0x120
71030aaa18  mov w2,#0x1
71030aaa1c  str xzr,[sp, #0x120]
71030aaa20  bl 0x7102405040
71030aaa24  cmn w0,#0x1
71030aaa28  b.eq 0x71030aaa88
71030aaa2c  mov w20,w0
71030aaa30  cmp w0,#0x18
71030aaa34  b.hi 0x71030aaa70
71030aaa38  ldr x8,[x22, #0x8]
71030aaa3c  mov w9,#0x50
71030aaa40  smaddl x8,w20,w9,x8
71030aaa44  ldr x0,[x8, #0x68]
71030aaa48  ldr x8,[x0]
71030aaa4c  cbz x8,0x71030aaa70
71030aaa50  ldr w9,[x0, #0x8]
71030aaa54  cmn w9,#0x1
71030aaa58  b.eq 0x71030aaa70
71030aaa5c  ldr w8,[x8, #0x20]
71030aaa60  cmp w9,w8
71030aaa64  b.ne 0x71030aaa70
71030aaa68  sub x1,x29,#0xc0
71030aaa6c  bl 0x7103736cf0
71030aaa70  ldr x0,[x22, #0x8]
71030aaa74  ldr x8,[x0]
71030aaa78  ldr x8,[x8, #0x58]
71030aaa7c  mov w1,#0x1
71030aaa80  mov w2,w20
71030aaa84  blr x8
71030aaa88  ldr x1,[x19, #0x320]
71030aaa8c  mov x2,#0x9dbc
71030aaa90  movk x2,#0xeffe, LSL #16
71030aaa94  movk x2,#0x10, LSL #32
71030aaa98  add x0,sp,#0x168
71030aaa9c  mov w3,wzr
71030aaaa0  bl 0x7102627ec0
71030aaaa4  ldr x8,[sp, #0x178]
71030aaaa8  cbz x8,0x71030aaacc
71030aaaac  ldp x9,x10,[sp, #0x168]
71030aaab0  str x9,[x10]
71030aaab4  str x10,[x9, #0x8]
71030aaab8  ldr x9,[x8, #0x10]
71030aaabc  sub x9,x9,#0x1
71030aaac0  str x9,[x8, #0x10]
71030aaac4  stp xzr,xzr,[sp, #0x170]
71030aaac8  str xzr,[sp, #0x168]
71030aaacc  ldr x20,[x19, #0x10d8]
71030aaad0  cbz x20,0x71030aab2c
71030aaad4  ldrb w8,[x20, #0x40]
71030aaad8  cbz w8,0x71030aab28
71030aaadc  ldr x22,[x20, #0x30]
71030aaae0  cbz x22,0x71030aab18
71030aaae4  ldrb w8,[x22, #0x10]
71030aaae8  cbz w8,0x71030aab18
71030aaaec  ldrb w8,[x22, #0x50]
71030aaaf0  strb wzr,[x22, #0x10]
71030aaaf4  cbz w8,0x71030aab18
71030aaaf8  ldr x8,[x22]
71030aaafc  ldr w0,[x8, #0x8]
71030aab00  bl 0x71003ac560
71030aab04  ldr x8,[x0]
71030aab08  ldr x8,[x8, #0x48]
71030aab0c  mov w1,wzr
71030aab10  blr x8
71030aab14  strb wzr,[x22, #0x50]
71030aab18  ldr x8,[x20]
71030aab1c  ldr x8,[x8, #0x30]
71030aab20  mov x0,x20
71030aab24  blr x8
71030aab28  strb wzr,[x20, #0x40]
71030aab2c  ldr x20,[x19, #0x10e0]
71030aab30  cbz x20,0x71030aab8c
71030aab34  ldrb w8,[x20, #0x40]
71030aab38  cbz w8,0x71030aab88
71030aab3c  ldr x22,[x20, #0x30]
71030aab40  cbz x22,0x71030aab78
71030aab44  ldrb w8,[x22, #0x10]
71030aab48  cbz w8,0x71030aab78
71030aab4c  ldrb w8,[x22, #0x50]
71030aab50  strb wzr,[x22, #0x10]
71030aab54  cbz w8,0x71030aab78
71030aab58  ldr x8,[x22]
71030aab5c  ldr w0,[x8, #0x8]
71030aab60  bl 0x71003ac560
71030aab64  ldr x8,[x0]
71030aab68  ldr x8,[x8, #0x48]
71030aab6c  mov w1,wzr
71030aab70  blr x8
71030aab74  strb wzr,[x22, #0x50]
71030aab78  ldr x8,[x20]
71030aab7c  ldr x8,[x8, #0x30]
71030aab80  mov x0,x20
71030aab84  blr x8
71030aab88  strb wzr,[x20, #0x40]
71030aab8c  ldr x20,[x19, #0x10e8]
71030aab90  cbz x20,0x71030aabec
71030aab94  ldrb w8,[x20, #0x40]
71030aab98  cbz w8,0x71030aabe8
71030aab9c  ldr x22,[x20, #0x30]
71030aaba0  cbz x22,0x71030aabd8
71030aaba4  ldrb w8,[x22, #0x10]
71030aaba8  cbz w8,0x71030aabd8
71030aabac  ldrb w8,[x22, #0x50]
71030aabb0  strb wzr,[x22, #0x10]
71030aabb4  cbz w8,0x71030aabd8
71030aabb8  ldr x8,[x22]
71030aabbc  ldr w0,[x8, #0x8]
71030aabc0  bl 0x71003ac560
71030aabc4  ldr x8,[x0]
71030aabc8  ldr x8,[x8, #0x48]
71030aabcc  mov w1,wzr
71030aabd0  blr x8
71030aabd4  strb wzr,[x22, #0x50]
71030aabd8  ldr x8,[x20]
71030aabdc  ldr x8,[x8, #0x30]
71030aabe0  mov x0,x20
71030aabe4  blr x8
71030aabe8  strb wzr,[x20, #0x40]
71030aabec  ldr x8,[x19, #0x300]
71030aabf0  ldr x9,[x8, #0x18]
71030aabf4  ldp x8,x9,[x9]
71030aabf8  cmp x8,x9
71030aabfc  b.eq 0x71030aad3c
71030aac00  mov x10,#0xcf90
71030aac04  movk x10,#0x6a44, LSL #16
71030aac08  movk x10,#0xf, LSL #32
71030aac0c  ldr x20,[x8], #0x8
71030aac10  ldr x11,[x20, #0xa0]
71030aac14  and x11,x11,#0xffffffffff
71030aac18  cmp x11,x10
71030aac1c  b.eq 0x71030aac2c
71030aac20  cmp x9,x8
71030aac24  b.ne 0x71030aac0c
71030aac28  b 0x71030aad3c
71030aac2c  ldr x8,[x20, #0x110]
71030aac30  ldp x22,x23,[x8]
71030aac34  cmp x22,x23
71030aac38  b.eq 0x71030aad3c
71030aac3c  mov w24,#0x1
71030aac40  mov x25,#-0x1
71030aac44  ldr x8,[x22]
71030aac48  ldr x9,[x8, #0x8]
71030aac4c  strb w24,[x8, #0x128]
71030aac50  cbz x9,0x71030aac64
71030aac54  str x25,[x9, #0xd8]
71030aac58  ldr x0,[x8, #0x8]
71030aac5c  mov w1,wzr
71030aac60  bl 0x7100532bc0
71030aac64  add x22,x22,#0x8
71030aac68  cmp x23,x22
71030aac6c  b.ne 0x71030aac44
71030aac70  ldr x9,[x20, #0x110]
71030aac74  ldp x8,x9,[x9]
71030aac78  cmp x8,x9
71030aac7c  b.eq 0x71030aad3c
71030aac80  ldr x20,[x8]
71030aac84  cbz x20,0x71030aad3c
71030aac88  ldr x8,[x20, #0x60]
71030aac8c  cbz x8,0x71030aacc0
71030aac90  ldrh w9,[x8, #0x8]
71030aac94  sub w9,w9,#0x1
71030aac98  sxth w10,w9
71030aac9c  cmp w10,#0x0
71030aaca0  strh w9,[x8, #0x8]
71030aaca4  b.gt 0x71030aacbc
71030aaca8  ldr x0,[x20, #0x60]
71030aacac  cbz x0,0x71030aacbc
71030aacb0  ldr x8,[x0]
71030aacb4  ldr x8,[x8, #0x8]
71030aacb8  blr x8
71030aacbc  str xzr,[x20, #0x60]
71030aacc0  mov w1,#0x28
71030aacc4  mov w0,#0x10
71030aacc8  bl 0x710392e290
71030aaccc  cbnz x0,0x71030aad14
71030aacd0  adrp x8,0x7105332000
71030aacd4  ldr x0,[x8, #0xf00]
71030aacd8  cbz x0,0x71030aad10
71030aacdc  mov w8,#0x28
71030aace0  str wzr,[sp, #0x120]
71030aace4  add x1,sp,#0x120
71030aace8  stur x8,[x29, #-0xc0]
71030aacec  ldr x8,[x0]
71030aacf0  ldr x8,[x8, #0x30]
71030aacf4  sub x2,x29,#0xc0
71030aacf8  blr x8
71030aacfc  tbz w0,#0x0,0x71030aad10
71030aad00  mov w1,#0x28
71030aad04  mov w0,#0x10
71030aad08  bl 0x710392e290
71030aad0c  cbnz x0,0x71030aad14
71030aad10  mov x0,xzr
71030aad14  mov w8,#0x1
71030aad18  str w8,[x0, #0x8]
71030aad1c  adrp x8,0x710516d000
71030aad20  add x8,x8,#0x598
71030aad24  str x8,[x0]
71030aad28  adrp x8,0x71030ae000
71030aad2c  add x8,x8,#0x930
71030aad30  stp x19,x8,[x0, #0x10]
71030aad34  str xzr,[x0, #0x20]
71030aad38  str x0,[x20, #0x60]
71030aad3c  movi v0.2D,#0x0
71030aad40  mov w0,wzr
71030aad44  bl 0x7100492c30
71030aad48  stp q1,q0,[sp, #0x20]
71030aad4c  str q2,[sp, #0x10]
71030aad50  str q3,[sp, #0x40]
71030aad54  stp q0,q1,[x21]
71030aad58  stp q2,q3,[x21, #0x20]
71030aad5c  ldr x8,[x19, #0x7e0]
71030aad60  ldr s0,[x8, #0x4]
71030aad64  add x9,x8,#0x8
71030aad68  add x8,x8,#0xc
71030aad6c  ld1 {v0.S}[1],[x9]
71030aad70  ld1 {v0.S}[2],[x8]
71030aad74  mov v0.S[0x3],v3.S[0x3]
71030aad78  str q0,[x21, #0x30]
71030aad7c  ldr x8,[x19, #0x1070]
71030aad80  cbz x8,0x71030aae34
71030aad84  add x0,x8,#0x108
71030aad88  mov w9,#0x1
71030aad8c  strb w9,[x8, #0x110]
71030aad90  bl 0x71025e9d50
71030aad94  ldr x8,[x19, #0x1070]
71030aad98  cbz x8,0x71030aae34
71030aad9c  ldrb w9,[x8, #0x118]
71030aada0  and w9,w9,#0xfe
71030aada4  strb w9,[x8, #0x118]
71030aada8  ldr x20,[x19, #0x1070]
71030aadac  cbz x20,0x71030aae34
71030aadb0  ldr x0,[x20, #0x90]
71030aadb4  ldr x8,[x0]
71030aadb8  ldr x8,[x8, #0x148]
71030aadbc  add x1,sp,#0x120
71030aadc0  blr x8
71030aadc4  ldr x20,[x20, #0xd8]
71030aadc8  cbz x20,0x71030aae34
71030aadcc  ldr x8,[sp, #0x138]
71030aadd0  stur x8,[x29, #-0xa8]
71030aadd4  ldr x8,[sp, #0x130]
71030aadd8  stur x8,[x29, #-0xb0]
71030aaddc  ldr x8,[sp, #0x128]
71030aade0  stur x8,[x29, #-0xb8]
71030aade4  ldr x8,[sp, #0x120]
71030aade8  stur x8,[x29, #-0xc0]
71030aadec  ldr x8,[sp, #0x158]
71030aadf0  stur x8,[x29, #-0x88]
71030aadf4  ldr x8,[sp, #0x150]
71030aadf8  stur x8,[x29, #-0x90]
71030aadfc  ldr x8,[sp, #0x148]
71030aae00  stur x8,[x29, #-0x98]
71030aae04  ldr x8,[sp, #0x140]
71030aae08  stur x8,[x29, #-0xa0]
71030aae0c  ldr x8,[x20, #0x8]
71030aae10  ldrb w9,[x8, #0xa8]
71030aae14  cbz w9,0x71030aae2c
71030aae18  ldr x0,[x8, #0x48]
71030aae1c  ldr x8,[x0]
71030aae20  ldr x8,[x8, #0x20]
71030aae24  sub x1,x29,#0xc0
71030aae28  blr x8
71030aae2c  mov w8,#0x1
71030aae30  strb w8,[x20, #0x20]
71030aae34  ldr x0,[x19, #0x1070]
71030aae38  fmov s0,wzr
71030aae3c  mov w1,#0x1
71030aae40  bl 0x710260fdd0
71030aae44  ldr x8,[x19, #0x1070]
71030aae48  cbz x8,0x71030aae60
71030aae4c  ldrb w9,[x8, #0xe0]
71030aae50  cbz w9,0x71030aae60
71030aae54  ldr x8,[x8, #0xc8]
71030aae58  cbz x8,0x71030aae60
71030aae5c  strh wzr,[x8, #0x30]
71030aae60  ldr x8,[x19, #0x300]
71030aae64  ldr x9,[x8, #0x18]
71030aae68  ldp x8,x9,[x9]
71030aae6c  cmp x8,x9
71030aae70  b.eq 0x71030aafb0
71030aae74  mov x10,#0xf2f3
71030aae78  movk x10,#0x904b, LSL #16
71030aae7c  movk x10,#0xf, LSL #32
71030aae80  ldr x20,[x8], #0x8
71030aae84  ldr x11,[x20, #0xa0]
71030aae88  and x11,x11,#0xffffffffff
71030aae8c  cmp x11,x10
71030aae90  b.eq 0x71030aaea0
71030aae94  cmp x9,x8
71030aae98  b.ne 0x71030aae80
71030aae9c  b 0x71030aafb0
71030aaea0  ldr x8,[x20, #0x110]
71030aaea4  ldp x22,x23,[x8]
71030aaea8  cmp x22,x23
71030aaeac  b.eq 0x71030aafb0
71030aaeb0  mov w24,#0x1
71030aaeb4  mov x25,#-0x1
71030aaeb8  ldr x8,[x22]
71030aaebc  ldr x9,[x8, #0x8]
71030aaec0  strb w24,[x8, #0x128]
71030aaec4  cbz x9,0x71030aaed8
71030aaec8  str x25,[x9, #0xd8]
71030aaecc  ldr x0,[x8, #0x8]
71030aaed0  mov w1,wzr
71030aaed4  bl 0x7100532bc0
71030aaed8  add x22,x22,#0x8
71030aaedc  cmp x23,x22
71030aaee0  b.ne 0x71030aaeb8
71030aaee4  ldr x9,[x20, #0x110]
71030aaee8  ldp x8,x9,[x9]
71030aaeec  cmp x8,x9
71030aaef0  b.eq 0x71030aafb0
71030aaef4  ldr x20,[x8]
71030aaef8  cbz x20,0x71030aafb0
71030aaefc  ldr x8,[x20, #0x60]
71030aaf00  cbz x8,0x71030aaf34
71030aaf04  ldrh w9,[x8, #0x8]
71030aaf08  sub w9,w9,#0x1
71030aaf0c  sxth w10,w9
71030aaf10  cmp w10,#0x0
71030aaf14  strh w9,[x8, #0x8]
71030aaf18  b.gt 0x71030aaf30
71030aaf1c  ldr x0,[x20, #0x60]
71030aaf20  cbz x0,0x71030aaf30
71030aaf24  ldr x8,[x0]
71030aaf28  ldr x8,[x8, #0x8]
71030aaf2c  blr x8
71030aaf30  str xzr,[x20, #0x60]
71030aaf34  mov w1,#0x28
71030aaf38  mov w0,#0x10
71030aaf3c  bl 0x710392e290
71030aaf40  cbnz x0,0x71030aaf88
71030aaf44  adrp x8,0x7105332000
71030aaf48  ldr x0,[x8, #0xf00]
71030aaf4c  cbz x0,0x71030aaf84
71030aaf50  mov w8,#0x28
71030aaf54  str wzr,[sp, #0xe0]
71030aaf58  add x1,sp,#0xe0
71030aaf5c  stur x8,[x29, #-0xc0]
71030aaf60  ldr x8,[x0]
71030aaf64  ldr x8,[x8, #0x30]
71030aaf68  sub x2,x29,#0xc0
71030aaf6c  blr x8
71030aaf70  tbz w0,#0x0,0x71030aaf84
71030aaf74  mov w1,#0x28
71030aaf78  mov w0,#0x10
71030aaf7c  bl 0x710392e290
71030aaf80  cbnz x0,0x71030aaf88
71030aaf84  mov x0,xzr
71030aaf88  mov w8,#0x1
71030aaf8c  str w8,[x0, #0x8]
71030aaf90  adrp x8,0x710516d000
71030aaf94  add x8,x8,#0x598
71030aaf98  str x8,[x0]
71030aaf9c  adrp x8,0x71030ae000
71030aafa0  add x8,x8,#0xa60
71030aafa4  stp x19,x8,[x0, #0x10]
71030aafa8  str xzr,[x0, #0x20]
71030aafac  str x0,[x20, #0x60]
71030aafb0  ldp q0,q1,[sp, #0x30]
71030aafb4  str q0,[sp, #0xe0]
71030aafb8  ldr q0,[sp, #0x20]
71030aafbc  str q0,[sp, #0xf0]
71030aafc0  ldr q0,[sp, #0x10]
71030aafc4  stp q0,q1,[sp, #0x100]
71030aafc8  ldr x8,[x19, #0x7f8]
71030aafcc  ldr s0,[x8, #0x4]
71030aafd0  add x9,x8,#0x8
71030aafd4  add x8,x8,#0xc
71030aafd8  ld1 {v0.S}[1],[x9]
71030aafdc  ld1 {v0.S}[2],[x8]
71030aafe0  mov v0.S[0x3],v1.S[0x3]
71030aafe4  str q0,[sp, #0x110]
71030aafe8  ldr x8,[x19, #0x1068]
71030aafec  cbz x8,0x71030ab0a0
71030aaff0  add x0,x8,#0x108
71030aaff4  mov w9,#0x1
71030aaff8  strb w9,[x8, #0x110]
71030aaffc  bl 0x71025e9d50
71030ab000  ldr x8,[x19, #0x1068]
71030ab004  cbz x8,0x71030ab0a0
71030ab008  ldrb w9,[x8, #0x118]
71030ab00c  and w9,w9,#0xfe
71030ab010  strb w9,[x8, #0x118]
71030ab014  ldr x20,[x19, #0x1068]
71030ab018  cbz x20,0x71030ab0a0
71030ab01c  ldr x0,[x20, #0x90]
71030ab020  ldr x8,[x0]
71030ab024  ldr x8,[x8, #0x148]
71030ab028  add x1,sp,#0xe0
71030ab02c  blr x8
71030ab030  ldr x20,[x20, #0xd8]
71030ab034  cbz x20,0x71030ab0a0
71030ab038  ldr x8,[sp, #0xf8]
71030ab03c  stur x8,[x29, #-0xa8]
71030ab040  ldr x8,[sp, #0xf0]
71030ab044  stur x8,[x29, #-0xb0]
71030ab048  ldr x8,[sp, #0xe8]
71030ab04c  stur x8,[x29, #-0xb8]
71030ab050  ldr x8,[sp, #0xe0]
71030ab054  stur x8,[x29, #-0xc0]
71030ab058  ldr x8,[sp, #0x118]
71030ab05c  stur x8,[x29, #-0x88]
71030ab060  ldr x8,[sp, #0x110]
71030ab064  stur x8,[x29, #-0x90]
71030ab068  ldr x8,[sp, #0x108]
71030ab06c  stur x8,[x29, #-0x98]
71030ab070  ldr x8,[sp, #0x100]
71030ab074  stur x8,[x29, #-0xa0]
71030ab078  ldr x8,[x20, #0x8]
71030ab07c  ldrb w9,[x8, #0xa8]
71030ab080  cbz w9,0x71030ab098
71030ab084  ldr x0,[x8, #0x48]
71030ab088  ldr x8,[x0]
71030ab08c  ldr x8,[x8, #0x20]
71030ab090  sub x1,x29,#0xc0
71030ab094  blr x8
71030ab098  mov w8,#0x1
71030ab09c  strb w8,[x20, #0x20]
71030ab0a0  ldr x0,[x19, #0x1068]
71030ab0a4  fmov s0,wzr
71030ab0a8  mov w1,#0x1
71030ab0ac  bl 0x710260fdd0
71030ab0b0  ldr x8,[x19, #0x1068]
71030ab0b4  cbz x8,0x71030ab0cc
71030ab0b8  ldrb w9,[x8, #0xe0]
71030ab0bc  cbz w9,0x71030ab0cc
71030ab0c0  ldr x8,[x8, #0xc8]
71030ab0c4  cbz x8,0x71030ab0cc
71030ab0c8  strh wzr,[x8, #0x30]
71030ab0cc  ldr x0,[x19, #0x10f0]
71030ab0d0  bl 0x710313ef20
71030ab0d4  ldr x0,[x19, #0x10f8]
71030ab0d8  bl 0x710313ef20
71030ab0dc  ldr q0,[sp, #0x80]
71030ab0e0  mov w20,#0x851f
71030ab0e4  movk w20,#0x51eb, LSL #16
71030ab0e8  str q0,[x21, #0x60]
71030ab0ec  ldr q0,[sp, #0x70]
71030ab0f0  mov w22,#0x64
71030ab0f4  str q0,[x21, #0x70]
71030ab0f8  ldr q0,[sp, #0x60]
71030ab0fc  str q0,[x21, #0x80]
71030ab100  ldr q0,[sp, #0x50]
71030ab104  str q0,[x21, #0x90]
71030ab108  ldr x8,[x19, #0x340]
71030ab10c  ldp w9,w10,[x8]
71030ab110  eor w9,w9,w9, LSL #0xb
71030ab114  str w10,[x8]
71030ab118  eor w9,w9,w9, LSR #0x8
71030ab11c  ldp w10,w11,[x8, #0x8]
71030ab120  eor w9,w9,w11
71030ab124  eor w9,w9,w11, LSR #0x13
71030ab128  stp w10,w11,[x8, #0x4]
71030ab12c  umull x10,w9,w20
71030ab130  lsr x10,x10,#0x25
71030ab134  msub w10,w10,w22,w9
71030ab138  str w9,[x8, #0xc]
71030ab13c  ucvtf s0,w10
71030ab140  ldr s1,[x19, #0x75c]
71030ab144  fcmp s1,s0
71030ab148  b.le 0x71030ab23c
71030ab14c  ldr x0,[x19, #0x10c0]
71030ab150  bl 0x710313ef20
71030ab154  ldr x8,[x19, #0x830]
71030ab158  ldr s0,[x8, #0x4]
71030ab15c  add x9,x8,#0x8
71030ab160  add x8,x8,#0xc
71030ab164  ld1 {v0.S}[1],[x9]
71030ab168  ld1 {v0.S}[2],[x8]
71030ab16c  sub x8,x29,#0x100
71030ab170  add x8,x8,#0x3c
71030ab174  ld1 {v0.S}[3],[x8]
71030ab178  str q0,[x21, #0x90]
71030ab17c  ldr x23,[x19, #0x1060]
71030ab180  cbz x23,0x71030ab234
71030ab184  ldr x0,[x23, #0x90]
71030ab188  ldr x8,[x0]
71030ab18c  ldr x8,[x8, #0x148]
71030ab190  sub x1,x29,#0x100
71030ab194  blr x8
71030ab198  ldr x23,[x23, #0xd8]
71030ab19c  cbz x23,0x71030ab208
71030ab1a0  ldur x8,[x29, #-0xe8]
71030ab1a4  stur x8,[x29, #-0xa8]
71030ab1a8  ldur x8,[x29, #-0xf0]
71030ab1ac  stur x8,[x29, #-0xb0]
71030ab1b0  ldur x8,[x29, #-0xf8]
71030ab1b4  stur x8,[x29, #-0xb8]
71030ab1b8  ldur x8,[x29, #-0x100]
71030ab1bc  stur x8,[x29, #-0xc0]
71030ab1c0  ldur x8,[x29, #-0xc8]
71030ab1c4  stur x8,[x29, #-0x88]
71030ab1c8  ldur x8,[x29, #-0xd0]
71030ab1cc  stur x8,[x29, #-0x90]
71030ab1d0  ldur x8,[x29, #-0xd8]
71030ab1d4  stur x8,[x29, #-0x98]
71030ab1d8  ldur x8,[x29, #-0xe0]
71030ab1dc  stur x8,[x29, #-0xa0]
71030ab1e0  ldr x8,[x23, #0x8]
71030ab1e4  ldrb w9,[x8, #0xa8]
71030ab1e8  cbz w9,0x71030ab200
71030ab1ec  ldr x0,[x8, #0x48]
71030ab1f0  ldr x8,[x0]
71030ab1f4  ldr x8,[x8, #0x20]
71030ab1f8  sub x1,x29,#0xc0
71030ab1fc  blr x8
71030ab200  mov w8,#0x1
71030ab204  strb w8,[x23, #0x20]
71030ab208  ldr x8,[x19, #0x1060]
71030ab20c  mov w23,#0x1
71030ab210  cbz x8,0x71030aba78
71030ab214  add x0,x8,#0x108
71030ab218  strb w23,[x8, #0x110]
71030ab21c  bl 0x71025e9d50
71030ab220  ldr x8,[x19, #0x1060]
71030ab224  cbz x8,0x71030aba78
71030ab228  ldrb w9,[x8, #0x118]
71030ab22c  and w9,w9,#0xfe
71030ab230  strb w9,[x8, #0x118]
71030ab234  mov w23,#0x1
71030ab238  b 0x71030aba78
71030ab23c  ldr x0,[x19, #0x10b8]
71030ab240  bl 0x710313ef20
71030ab244  ldr x8,[x19, #0x818]
71030ab248  ldr s0,[x8, #0x4]
71030ab24c  add x9,x8,#0x8
71030ab250  add x8,x8,#0xc
71030ab254  ld1 {v0.S}[1],[x9]
71030ab258  ld1 {v0.S}[2],[x8]
71030ab25c  sub x8,x29,#0x100
71030ab260  add x8,x8,#0x3c
71030ab264  ld1 {v0.S}[3],[x8]
71030ab268  str q0,[x21, #0x90]
71030ab26c  ldr x23,[x19, #0x1060]
71030ab270  cbz x23,0x71030aba78
71030ab274  ldr x0,[x23, #0x90]
71030ab278  ldr x8,[x0]
71030ab27c  ldr x8,[x8, #0x148]
71030ab280  sub x1,x29,#0x100
71030ab284  blr x8
71030ab288  ldr x23,[x23, #0xd8]
71030ab28c  cbz x23,0x71030ab2f8
71030ab290  ldur x8,[x29, #-0xe8]
71030ab294  stur x8,[x29, #-0xa8]
71030ab298  ldur x8,[x29, #-0xf0]
71030ab29c  stur x8,[x29, #-0xb0]
71030ab2a0  ldur x8,[x29, #-0xf8]
71030ab2a4  stur x8,[x29, #-0xb8]
71030ab2a8  ldur x8,[x29, #-0x100]
71030ab2ac  stur x8,[x29, #-0xc0]
71030ab2b0  ldur x8,[x29, #-0xc8]
71030ab2b4  stur x8,[x29, #-0x88]
71030ab2b8  ldur x8,[x29, #-0xd0]
71030ab2bc  stur x8,[x29, #-0x90]
71030ab2c0  ldur x8,[x29, #-0xd8]
71030ab2c4  stur x8,[x29, #-0x98]
71030ab2c8  ldur x8,[x29, #-0xe0]
71030ab2cc  stur x8,[x29, #-0xa0]
71030ab2d0  ldr x8,[x23, #0x8]
71030ab2d4  ldrb w9,[x8, #0xa8]
71030ab2d8  cbz w9,0x71030ab2f0
71030ab2dc  ldr x0,[x8, #0x48]
71030ab2e0  ldr x8,[x0]
71030ab2e4  ldr x8,[x8, #0x20]
71030ab2e8  sub x1,x29,#0xc0
71030ab2ec  blr x8
71030ab2f0  mov w8,#0x1
71030ab2f4  strb w8,[x23, #0x20]
71030ab2f8  ldr x8,[x19, #0x1060]
71030ab2fc  cbz x8,0x71030aba74
71030ab300  add x0,x8,#0x108
71030ab304  mov w9,#0x1
71030ab308  strb w9,[x8, #0x110]
71030ab30c  bl 0x71025e9d50
71030ab310  ldr x8,[x19, #0x1060]
71030ab314  cbz x8,0x71030aba74
71030ab318  ldrb w9,[x8, #0x118]
71030ab31c  mov w23,wzr
71030ab320  and w9,w9,#0xfe
71030ab324  strb w9,[x8, #0x118]
71030ab328  b 0x71030aba78
71030ab32c  mov x0,xzr
71030ab330  fmov s9,wzr
71030ab334  mov v0.16B,v9.16B
71030ab338  mov w1,#0x1
71030ab33c  bl 0x710260fdd0
71030ab340  ldr x8,[x19, #0x9c0]
71030ab344  cbz x8,0x71030ab3a4
71030ab348  ldrb w9,[x8, #0xe0]
71030ab34c  cbz w9,0x71030ab35c
71030ab350  ldr x9,[x8, #0xc8]
71030ab354  cbz x9,0x71030ab35c
71030ab358  strh wzr,[x9, #0x32]
71030ab35c  ldr x8,[x8, #0xd8]
71030ab360  cbz x8,0x71030ab368
71030ab364  strb wzr,[x8, #0x22]
71030ab368  ldr x8,[x19, #0x9c0]
71030ab36c  cbz x8,0x71030ab3a4
71030ab370  ldrb w9,[x8, #0xe0]
71030ab374  cbz w9,0x71030ab384
71030ab378  ldr x9,[x8, #0xc8]
71030ab37c  cbz x9,0x71030ab384
71030ab380  strh wzr,[x9, #0x30]
71030ab384  ldr x9,[x8, #0xd8]
71030ab388  cbz x9,0x71030ab390
71030ab38c  strb wzr,[x9, #0x21]
71030ab390  ldrb w9,[x8, #0xe0]
71030ab394  cbz w9,0x71030ab3a4
71030ab398  ldr x8,[x8, #0xb0]
71030ab39c  mov w9,#0x1
71030ab3a0  strb w9,[x8, #0x10]
71030ab3a4  ldr x22,[x19, #0x9c0]
71030ab3a8  mov v10.16B,v9.16B
71030ab3ac  cbnz x22,0x71030ab438
71030ab3b0  b 0x71030ab4ac
71030ab3b4  mov x0,xzr
71030ab3b8  fmov s9,wzr
71030ab3bc  mov v0.16B,v9.16B
71030ab3c0  mov w1,#0x1
71030ab3c4  bl 0x710260fdd0
71030ab3c8  ldr x8,[x19, #0x9b8]
71030ab3cc  cbz x8,0x71030ab42c
71030ab3d0  ldrb w9,[x8, #0xe0]
71030ab3d4  cbz w9,0x71030ab3e4
71030ab3d8  ldr x9,[x8, #0xc8]
71030ab3dc  cbz x9,0x71030ab3e4
71030ab3e0  strh wzr,[x9, #0x32]
71030ab3e4  ldr x8,[x8, #0xd8]
71030ab3e8  cbz x8,0x71030ab3f0
71030ab3ec  strb wzr,[x8, #0x22]
71030ab3f0  ldr x8,[x19, #0x9b8]
71030ab3f4  cbz x8,0x71030ab42c
71030ab3f8  ldrb w9,[x8, #0xe0]
71030ab3fc  cbz w9,0x71030ab40c
71030ab400  ldr x9,[x8, #0xc8]
71030ab404  cbz x9,0x71030ab40c
71030ab408  strh wzr,[x9, #0x30]
71030ab40c  ldr x9,[x8, #0xd8]
71030ab410  cbz x9,0x71030ab418
71030ab414  strb wzr,[x9, #0x21]
71030ab418  ldrb w9,[x8, #0xe0]
71030ab41c  cbz w9,0x71030ab42c
71030ab420  ldr x8,[x8, #0xb0]
71030ab424  mov w9,#0x1
71030ab428  strb w9,[x8, #0x10]
71030ab42c  ldr x22,[x19, #0x9b8]
71030ab430  mov v10.16B,v9.16B
71030ab434  cbz x22,0x71030ab4ac
71030ab438  fmov s10,wzr
71030ab43c  ldr x8,[x22, #0xd8]
71030ab440  mov v9.16B,v10.16B
71030ab444  cbz x8,0x71030ab498
71030ab448  ldr x8,[x8, #0x8]
71030ab44c  ldr x0,[x8, #0x10]
71030ab450  ldr w8,[x8, #0xac]
71030ab454  cmp w8,#0x1
71030ab458  b.eq 0x71030abd24
71030ab45c  mov v9.16B,v10.16B
71030ab460  cbnz w8,0x71030ab498
71030ab464  ldr x8,[x0]
71030ab468  ldr x8,[x8, #0x38]
71030ab46c  mov w1,wzr
71030ab470  blr x8
71030ab474  cbz x0,0x71030ab488
71030ab478  ldr x8,[x0]
71030ab47c  ldr x8,[x8, #0x40]
71030ab480  mov w1,wzr
71030ab484  blr x8
71030ab488  ldr x8,[x0]
71030ab48c  ldr x8,[x8, #0x88]
71030ab490  blr x8
71030ab494  mov v9.16B,v0.16B
71030ab498  ldrb w8,[x22, #0xe0]
71030ab49c  cbz w8,0x71030ab4ac
71030ab4a0  ldr x8,[x22, #0xc8]
71030ab4a4  cbz x8,0x71030ab4ac
71030ab4a8  ldr s10,[x8, #0x34]
71030ab4ac  fcmp s9,s10
71030ab4b0  ldr w8,[x19, #0xa80]
71030ab4b4  fcsel s0,s10,s9,mi
71030ab4b8  str s0,[x19, #0xa90]
71030ab4bc  add x22,x19,x20
71030ab4c0  add x23,x19,#0xa84
71030ab4c4  cmp w8,#0x2
71030ab4c8  b.eq 0x71030ab4fc
71030ab4cc  cmp w8,#0x1
71030ab4d0  b.ne 0x71030ab57c
71030ab4d4  ldr x20,[x19, #0xa40]
71030ab4d8  ldr x8,[x20, #0x38]
71030ab4dc  cbz x8,0x71030ab520
71030ab4e0  ldr x0,[x8, #0x130]
71030ab4e4  ldr x8,[x0]
71030ab4e8  ldr x8,[x8, #0x120]
71030ab4ec  mov w1,wzr
71030ab4f0  blr x8
71030ab4f4  ldr x20,[x19, #0xa40]
71030ab4f8  b 0x71030ab520
71030ab4fc  ldr x20,[x19, #0xa48]
71030ab500  ldr x8,[x20, #0x38]
71030ab504  cbz x8,0x71030ab520
71030ab508  ldr x0,[x8, #0x130]
71030ab50c  ldr x8,[x0]
71030ab510  ldr x8,[x8, #0x120]
71030ab514  mov w1,wzr
71030ab518  blr x8
71030ab51c  ldr x20,[x19, #0xa48]
71030ab520  mov x24,x20
71030ab524  ldrb w8,[x24, #0x40]!
71030ab528  cbz w8,0x71030ab578
71030ab52c  ldr x25,[x20, #0x30]
71030ab530  cbz x25,0x71030ab568
71030ab534  ldrb w8,[x25, #0x10]
71030ab538  cbz w8,0x71030ab568
71030ab53c  ldrb w8,[x25, #0x50]
71030ab540  strb wzr,[x25, #0x10]
71030ab544  cbz w8,0x71030ab568
71030ab548  ldr x8,[x25]
71030ab54c  ldr w0,[x8, #0x8]
71030ab550  bl 0x71003ac560
71030ab554  ldr x8,[x0]
71030ab558  ldr x8,[x8, #0x48]
71030ab55c  mov w1,wzr
71030ab560  blr x8
71030ab564  strb wzr,[x25, #0x50]
71030ab568  ldr x8,[x20]
71030ab56c  ldr x8,[x8, #0x30]
71030ab570  mov x0,x20
71030ab574  blr x8
71030ab578  strb wzr,[x24]
71030ab57c  ldr x1,[x19, #0x320]
71030ab580  mov x2,#0xa3fa
71030ab584  movk x2,#0xc810, LSL #16
71030ab588  movk x2,#0xe, LSL #32
71030ab58c  add x0,sp,#0x98
71030ab590  mov w3,wzr
71030ab594  bl 0x7102627ec0
71030ab598  ldr x8,[sp, #0xa8]
71030ab59c  cbz x8,0x71030ab5c0
71030ab5a0  ldp x9,x10,[sp, #0x98]
71030ab5a4  str x9,[x10]
71030ab5a8  str x10,[x9, #0x8]
71030ab5ac  ldr x9,[x8, #0x10]
71030ab5b0  sub x9,x9,#0x1
71030ab5b4  str x9,[x8, #0x10]
71030ab5b8  stp xzr,xzr,[sp, #0xa0]
71030ab5bc  str xzr,[sp, #0x98]
71030ab5c0  ldr s0,[x22]
71030ab5c4  fadd s0,s0,s8
71030ab5c8  str s0,[x22]
71030ab5cc  ldr w8,[x23]
71030ab5d0  cmp w8,#0x6
71030ab5d4  b.eq 0x71030aceec
71030ab5d8  ldr x20,[x19, #0x10b0]
71030ab5dc  ldrb w8,[x20, #0x40]
71030ab5e0  cbz w8,0x71030ab630
71030ab5e4  ldr x22,[x20, #0x30]
71030ab5e8  cbz x22,0x71030ab620
71030ab5ec  ldrb w8,[x22, #0x10]
71030ab5f0  cbz w8,0x71030ab620
71030ab5f4  ldrb w8,[x22, #0x50]
71030ab5f8  strb wzr,[x22, #0x10]
71030ab5fc  cbz w8,0x71030ab620
71030ab600  ldr x8,[x22]
71030ab604  ldr w0,[x8, #0x8]
71030ab608  bl 0x71003ac560
71030ab60c  ldr x8,[x0]
71030ab610  ldr x8,[x8, #0x48]
71030ab614  mov w1,wzr
71030ab618  blr x8
71030ab61c  strb wzr,[x22, #0x50]
71030ab620  ldr x8,[x20]
71030ab624  ldr x8,[x8, #0x30]
71030ab628  mov x0,x20
71030ab62c  blr x8
71030ab630  strb wzr,[x20, #0x40]
71030ab634  ldr x8,[x19, #0x11e0]
71030ab638  cbz x8,0x71030ab6ac
71030ab63c  ldp x0,x1,[x8]
71030ab640  adrp x2,0x71042a1000
71030ab644  add x2,x2,#0x67e
71030ab648  bl 0x71025f5420
71030ab64c  ldr x8,[x19, #0x11e0]
71030ab650  cbz x8,0x71030ab6ac
71030ab654  ldp x0,x1,[x8]
71030ab658  adrp x2,0x71043bc000
71030ab65c  add x2,x2,#0xb6c
71030ab660  bl 0x71025f5420
71030ab664  ldr x8,[x19, #0x11e0]
71030ab668  cbz x8,0x71030ab6ac
71030ab66c  ldp x0,x1,[x8]
71030ab670  adrp x2,0x710436a000
71030ab674  add x2,x2,#0x9e7
71030ab678  bl 0x71025f5420
71030ab67c  ldr x8,[x19, #0x11e0]
71030ab680  cbz x8,0x71030ab6ac
71030ab684  ldp x0,x1,[x8]
71030ab688  adrp x2,0x71042a1000
71030ab68c  add x2,x2,#0x676
71030ab690  bl 0x71025f55b0
71030ab694  ldr x8,[x19, #0x11e0]
71030ab698  cbz x8,0x71030ab6ac
71030ab69c  ldp x0,x1,[x8]
71030ab6a0  adrp x2,0x7104441000
71030ab6a4  add x2,x2,#0xec7
71030ab6a8  bl 0x71025f55b0
71030ab6ac  ldr x8,[x19, #0x1070]
71030ab6b0  cbz x8,0x71030ab6c8
71030ab6b4  add x0,x8,#0x108
71030ab6b8  strb wzr,[x8, #0x110]
71030ab6bc  bl 0x71025e9d50
71030ab6c0  ldr x0,[x19, #0x1070]
71030ab6c4  b 0x71030ab6cc
71030ab6c8  mov x0,xzr
71030ab6cc  fmov s0,wzr
71030ab6d0  mov w1,#0x1
71030ab6d4  bl 0x710260fdd0
71030ab6d8  ldr x8,[x19, #0x1070]
71030ab6dc  cbz x8,0x71030ab6f8
71030ab6e0  ldrb w9,[x8, #0xe0]
71030ab6e4  cbz w9,0x71030ab6f8
71030ab6e8  ldr x8,[x8, #0xc8]
71030ab6ec  cbz x8,0x71030ab6f8
71030ab6f0  mov w9,#0x101
71030ab6f4  strh w9,[x8, #0x30]
71030ab6f8  ldr x8,[x19, #0x1068]
71030ab6fc  cbz x8,0x71030ab714
71030ab700  add x0,x8,#0x108
71030ab704  strb wzr,[x8, #0x110]
71030ab708  bl 0x71025e9d50
71030ab70c  ldr x0,[x19, #0x1068]
71030ab710  b 0x71030ab718
71030ab714  mov x0,xzr
71030ab718  fmov s0,wzr
71030ab71c  mov w1,#0x1
71030ab720  bl 0x710260fdd0
71030ab724  ldr x8,[x19, #0x1068]
71030ab728  cbz x8,0x71030ab744
71030ab72c  ldrb w9,[x8, #0xe0]
71030ab730  cbz w9,0x71030ab744
71030ab734  ldr x8,[x8, #0xc8]
71030ab738  cbz x8,0x71030ab744
71030ab73c  mov w9,#0x101
71030ab740  strh w9,[x8, #0x30]
71030ab744  ldr x0,[x19, #0x1060]
71030ab748  fmov s0,wzr
71030ab74c  mov w1,#0x1
71030ab750  bl 0x710260fdd0
71030ab754  ldr x8,[x19, #0x1060]
71030ab758  cbz x8,0x71030ab774
71030ab75c  ldrb w9,[x8, #0xe0]
71030ab760  cbz w9,0x71030ab774
71030ab764  ldr x8,[x8, #0xc8]
71030ab768  cbz x8,0x71030ab774
71030ab76c  mov w9,#0x101
71030ab770  strh w9,[x8, #0x30]
71030ab774  ldr x20,[x19, #0x10b8]
71030ab778  ldrb w8,[x20, #0x40]
71030ab77c  cbz w8,0x71030ab7cc
71030ab780  ldr x22,[x20, #0x30]
71030ab784  cbz x22,0x71030ab7bc
71030ab788  ldrb w8,[x22, #0x10]
71030ab78c  cbz w8,0x71030ab7bc
71030ab790  ldrb w8,[x22, #0x50]
71030ab794  strb wzr,[x22, #0x10]
71030ab798  cbz w8,0x71030ab7bc
71030ab79c  ldr x8,[x22]
71030ab7a0  ldr w0,[x8, #0x8]
71030ab7a4  bl 0x71003ac560
71030ab7a8  ldr x8,[x0]
71030ab7ac  ldr x8,[x8, #0x48]
71030ab7b0  mov w1,wzr
71030ab7b4  blr x8
71030ab7b8  strb wzr,[x22, #0x50]
71030ab7bc  ldr x8,[x20]
71030ab7c0  ldr x8,[x8, #0x30]
71030ab7c4  mov x0,x20
71030ab7c8  blr x8
71030ab7cc  strb wzr,[x20, #0x40]
71030ab7d0  ldr x20,[x19, #0x10c0]
71030ab7d4  ldrb w8,[x20, #0x40]
71030ab7d8  cbz w8,0x71030ab828
71030ab7dc  ldr x22,[x20, #0x30]
71030ab7e0  cbz x22,0x71030ab818
71030ab7e4  ldrb w8,[x22, #0x10]
71030ab7e8  cbz w8,0x71030ab818
71030ab7ec  ldrb w8,[x22, #0x50]
71030ab7f0  strb wzr,[x22, #0x10]
71030ab7f4  cbz w8,0x71030ab818
71030ab7f8  ldr x8,[x22]
71030ab7fc  ldr w0,[x8, #0x8]
71030ab800  bl 0x71003ac560
71030ab804  ldr x8,[x0]
71030ab808  ldr x8,[x8, #0x48]
71030ab80c  mov w1,wzr
71030ab810  blr x8
71030ab814  strb wzr,[x22, #0x50]
71030ab818  ldr x8,[x20]
71030ab81c  ldr x8,[x8, #0x30]
71030ab820  mov x0,x20
71030ab824  blr x8
71030ab828  strb wzr,[x20, #0x40]
71030ab82c  str wzr,[x19, #0x1100]
71030ab830  b 0x71030aceec
71030ab834  ldr x25,[x11, #0x110]
71030ab838  strb wzr,[x22, #0x4c]
71030ab83c  ldp x22,x23,[x25, #0x18]
71030ab840  cmp x22,x23
71030ab844  b.eq 0x71030ab8c8
71030ab848  mov w24,#0xf5ac
71030ab84c  movk w24,#0x4f55, LSL #16
71030ab850  mov x26,x22
71030ab854  adrp x20,0x71043ab000
71030ab858  add x20,x20,#0xf32
71030ab85c  ldr x27,[x26]
71030ab860  ldr w8,[x27, #0x18]
71030ab864  cmp w8,w24
71030ab868  b.ne 0x71030ab87c
71030ab86c  add x0,x27,#0x20
71030ab870  mov x1,x20
71030ab874  bl 0x71039c0060
71030ab878  cbz w0,0x71030abd84
71030ab87c  add x26,x26,#0x8
71030ab880  cmp x23,x26
71030ab884  b.ne 0x71030ab85c
71030ab888  cmp x22,x23
71030ab88c  b.eq 0x71030ab8c8
71030ab890  adrp x20,0x7104328000
71030ab894  add x20,x20,#0x552
71030ab898  ldr x25,[x22]
71030ab89c  ldr w8,[x25, #0x18]
71030ab8a0  add w9,w24,#0x1b0
71030ab8a4  cmp w8,w9
71030ab8a8  b.ne 0x71030ab8bc
71030ab8ac  add x0,x25,#0x20
71030ab8b0  mov x1,x20
71030ab8b4  bl 0x71039c0060
71030ab8b8  cbz w0,0x71030ac174
71030ab8bc  add x22,x22,#0x8
71030ab8c0  cmp x23,x22
71030ab8c4  b.ne 0x71030ab898
71030ab8c8  ldr x8,[x19, #0x1058]
71030ab8cc  cbz x8,0x71030ab920
71030ab8d0  ldr x0,[x8, #0xd8]
71030ab8d4  adrp x8,0x7104473000
71030ab8d8  ldr s0,[x8, #0x708]
71030ab8dc  mov w1,#0x1
71030ab8e0  bl 0x71025ee450
71030ab8e4  ldr x8,[x19, #0x1058]
71030ab8e8  cbz x8,0x71030ab920
71030ab8ec  ldrb w9,[x8, #0xe0]
71030ab8f0  cbz w9,0x71030ab900
71030ab8f4  ldr x9,[x8, #0xc8]
71030ab8f8  cbz x9,0x71030ab900
71030ab8fc  strh wzr,[x9, #0x30]
71030ab900  ldr x9,[x8, #0xd8]
71030ab904  cbz x9,0x71030ab90c
71030ab908  strb wzr,[x9, #0x21]
71030ab90c  ldrb w9,[x8, #0xe0]
71030ab910  cbz w9,0x71030ab920
71030ab914  ldr x8,[x8, #0xb0]
71030ab918  mov w9,#0x1
71030ab91c  strb w9,[x8, #0x10]
71030ab920  ldr x8,[x19, #0x11f8]
71030ab924  ldp x0,x1,[x8]
71030ab928  mov w2,#0x1
71030ab92c  bl 0x71025f4d80
71030ab930  ldr x8,[x19, #0x11e0]
71030ab934  cbz x8,0x71030ab960
71030ab938  ldp x0,x1,[x8]
71030ab93c  adrp x2,0x71042a1000
71030ab940  add x2,x2,#0x676
71030ab944  bl 0x71025f55b0
71030ab948  ldr x8,[x19, #0x11e0]
71030ab94c  cbz x8,0x71030ab960
71030ab950  ldp x0,x1,[x8]
71030ab954  adrp x2,0x7104441000
71030ab958  add x2,x2,#0xec7
71030ab95c  bl 0x71025f55b0
71030ab960  ldr x8,[x19, #0x338]
71030ab964  stp xzr,xzr,[x29, #-0xc0]
71030ab968  ldr x22,[x8]
71030ab96c  ldr x0,[x22, #0x8]
71030ab970  cbz x0,0x71030ab9e8
71030ab974  add x1,sp,#0x120
71030ab978  mov w2,#0x1
71030ab97c  str xzr,[sp, #0x120]
71030ab980  bl 0x7102405040
71030ab984  cmn w0,#0x1
71030ab988  b.eq 0x71030ab9e8
71030ab98c  mov w20,w0
71030ab990  cmp w0,#0x18
71030ab994  b.hi 0x71030ab9d0
71030ab998  ldr x8,[x22, #0x8]
71030ab99c  mov w9,#0x50
71030ab9a0  smaddl x8,w20,w9,x8
71030ab9a4  ldr x0,[x8, #0x68]
71030ab9a8  ldr x8,[x0]
71030ab9ac  cbz x8,0x71030ab9d0
71030ab9b0  ldr w9,[x0, #0x8]
71030ab9b4  cmn w9,#0x1
71030ab9b8  b.eq 0x71030ab9d0
71030ab9bc  ldr w8,[x8, #0x20]
71030ab9c0  cmp w9,w8
71030ab9c4  b.ne 0x71030ab9d0
71030ab9c8  sub x1,x29,#0xc0
71030ab9cc  bl 0x7103736cf0
71030ab9d0  ldr x0,[x22, #0x8]
71030ab9d4  ldr x8,[x0]
71030ab9d8  ldr x8,[x8, #0x58]
71030ab9dc  mov w1,#0x2
71030ab9e0  mov w2,w20
71030ab9e4  blr x8
71030ab9e8  ldr x1,[x19, #0x320]
71030ab9ec  mov x2,#0x7615
71030ab9f0  movk x2,#0x54fa, LSL #16
71030ab9f4  movk x2,#0x13, LSL #32
71030ab9f8  add x0,sp,#0xc8
71030ab9fc  mov w3,#0x1
71030aba00  bl 0x7102627ec0
71030aba04  ldr x8,[sp, #0xd8]
71030aba08  cbz x8,0x71030aba2c
71030aba0c  ldp x9,x10,[sp, #0xc8]
71030aba10  str x9,[x10]
71030aba14  str x10,[x9, #0x8]
71030aba18  ldr x9,[x8, #0x10]
71030aba1c  sub x9,x9,#0x1
71030aba20  str x9,[x8, #0x10]
71030aba24  stp xzr,xzr,[sp, #0xd0]
71030aba28  str xzr,[sp, #0xc8]
71030aba2c  ldr x1,[x19, #0x320]
71030aba30  mov x2,#0x4683
71030aba34  movk x2,#0x23fd, LSL #16
71030aba38  movk x2,#0x13, LSL #32
71030aba3c  add x0,sp,#0xb0
71030aba40  mov w3,#0x1
71030aba44  bl 0x7102627ec0
71030aba48  ldr x8,[sp, #0xc0]
71030aba4c  cbz x8,0x71030aceec
71030aba50  ldp x9,x10,[sp, #0xb0]
71030aba54  str x9,[x10]
71030aba58  str x10,[x9, #0x8]
71030aba5c  ldr x9,[x8, #0x10]
71030aba60  sub x9,x9,#0x1
71030aba64  str x9,[x8, #0x10]
71030aba68  stp xzr,xzr,[sp, #0xb8]
71030aba6c  str xzr,[sp, #0xb0]
71030aba70  b 0x71030aceec
71030aba74  mov w23,wzr
71030aba78  mov w8,#0x2
71030aba7c  str w8,[x19, #0x1130]
71030aba80  ldr x8,[x19, #0x340]
71030aba84  str w23,[x19, #0x1134]
71030aba88  ldp w9,w10,[x8]
71030aba8c  str w10,[x8]
71030aba90  ldp w10,w11,[x8, #0x8]
71030aba94  eor w9,w9,w9, LSL #0xb
71030aba98  eor w9,w9,w9, LSR #0x8
71030aba9c  eor w9,w9,w11
71030abaa0  eor w9,w9,w11, LSR #0x13
71030abaa4  stp w10,w11,[x8, #0x4]
71030abaa8  str w9,[x8, #0xc]
71030abaac  umull x8,w9,w20
71030abab0  lsr x8,x8,#0x25
71030abab4  msub w8,w8,w22,w9
71030abab8  ldr w9,[x19, #0x1140]
71030ababc  movi v6.2D,#0x0
71030abac0  cmp w8,w9
71030abac4  b.le 0x71030abb24
71030abac8  ldr w10,[x19, #0x1144]
71030abacc  add w9,w10,w9
71030abad0  cmp w8,w9
71030abad4  b.le 0x71030abba8
71030abad8  ldr s0,[x19, #0x760]
71030abadc  fcvtzs w8,s0
71030abae0  ldr s0,[x19, #0x764]
71030abae4  ldr w9,[x19, #0x114c]
71030abae8  cmp w9,#0x0
71030abaec  fcvtzs w11,s0
71030abaf0  ldr s0,[x19, #0x768]
71030abaf4  cinc w10,w9,lt
71030abaf8  asr w10,w10,#0x1
71030abafc  sub w8,w8,w10
71030abb00  str w8,[x19, #0x1140]
71030abb04  fcvtzs w8,s0
71030abb08  sub w10,w11,w10
71030abb0c  str w10,[x19, #0x1144]
71030abb10  add w8,w9,w8
71030abb14  str wzr,[x19, #0x113c]
71030abb18  str w8,[x19, #0x1148]
71030abb1c  str wzr,[x19, #0xf90]
71030abb20  b 0x71030abc88
71030abb24  ldr s0,[x19, #0x760]
71030abb28  mov w8,#0x1
71030abb2c  str w8,[x19, #0x113c]
71030abb30  fcvtzs w8,s0
71030abb34  ldr w9,[x19, #0x114c]
71030abb38  ldr s0,[x19, #0x764]
71030abb3c  cmp w9,#0x0
71030abb40  add w8,w9,w8
71030abb44  cinc w9,w9,lt
71030abb48  str w8,[x19, #0x1140]
71030abb4c  asr w9,w9,#0x1
71030abb50  fcvtzs w8,s0
71030abb54  ldr s0,[x19, #0x768]
71030abb58  fcvtzs w10,s0
71030abb5c  mov v0.16B,v6.16B
71030abb60  sub w8,w8,w9
71030abb64  str w8,[x19, #0x1144]
71030abb68  sub w8,w10,w9
71030abb6c  add x9,x19,#0x8ac
71030abb70  add x10,x19,#0x8b0
71030abb74  str w8,[x19, #0x1148]
71030abb78  ldr w8,[x19, #0x780]
71030abb7c  str w8,[x19, #0x116c]
71030abb80  add x8,x19,#0x878
71030abb84  ld1 {v0.S}[0],[x8]
71030abb88  add x8,x19,#0x860
71030abb8c  ld1 {v6.S}[0],[x8]
71030abb90  add x8,x19,#0x864
71030abb94  ld1 {v6.S}[1],[x8]
71030abb98  add x8,x19,#0x868
71030abb9c  ld1 {v6.S}[2],[x8]
71030abba0  add x8,x19,#0x8a8
71030abba4  b 0x71030abc28
71030abba8  ldr s0,[x19, #0x760]
71030abbac  mov w8,#0x2
71030abbb0  str w8,[x19, #0x113c]
71030abbb4  fcvtzs w8,s0
71030abbb8  ldr w9,[x19, #0x114c]
71030abbbc  ldr s0,[x19, #0x764]
71030abbc0  cmp w9,#0x0
71030abbc4  cinc w10,w9,lt
71030abbc8  asr w10,w10,#0x1
71030abbcc  sub w8,w8,w10
71030abbd0  str w8,[x19, #0x1140]
71030abbd4  fcvtzs w8,s0
71030abbd8  ldr s0,[x19, #0x768]
71030abbdc  add w8,w9,w8
71030abbe0  fcvtzs w9,s0
71030abbe4  mov v0.16B,v6.16B
71030abbe8  str w8,[x19, #0x1144]
71030abbec  sub w8,w9,w10
71030abbf0  add x9,x19,#0x8b8
71030abbf4  add x10,x19,#0x8bc
71030abbf8  str w8,[x19, #0x1148]
71030abbfc  ldr w8,[x19, #0x784]
71030abc00  str w8,[x19, #0x116c]
71030abc04  add x8,x19,#0x884
71030abc08  ld1 {v0.S}[0],[x8]
71030abc0c  add x8,x19,#0x86c
71030abc10  ld1 {v6.S}[0],[x8]
71030abc14  add x8,x19,#0x870
71030abc18  ld1 {v6.S}[1],[x8]
71030abc1c  add x8,x19,#0x874
71030abc20  ld1 {v6.S}[2],[x8]
71030abc24  add x8,x19,#0x8b4
71030abc28  ldr s1,[x8]
71030abc2c  ldr x8,[x19, #0x1210]
71030abc30  ldr x8,[x8, #0x8]
71030abc34  ldr s2,[x10]
71030abc38  ldr s3,[x9]
71030abc3c  str wzr,[x8, #0x10]
71030abc40  ldr w8,[x19, #0x113c]
71030abc44  str w8,[x19, #0xf90]
71030abc48  cbz w8,0x71030abc88
71030abc4c  mov v1.S[0x1],v3.S[0x0]
71030abc50  movi d3,#0x0
71030abc54  mov v4.16B,v3.16B
71030abc58  mov v5.16B,v3.16B
71030abc5c  mov w8,#0x1
71030abc60  mov v3.S[0x0],v2.S[0x0]
71030abc64  str w8,[x19, #0xf94]
71030abc68  mov v4.S[0x0],v0.S[0x2]
71030abc6c  mov v5.S[0x0],v6.S[0x2]
71030abc70  mov v1.D[0x1],v3.D[0x0]
71030abc74  mov v0.D[0x1],v4.D[0x0]
71030abc78  mov v6.D[0x1],v5.D[0x0]
71030abc7c  str q1,[x19, #0xfc0]
71030abc80  str q0,[x19, #0xfb0]
71030abc84  str q6,[x19, #0xfa0]
71030abc88  mov w8,#0x4
71030abc8c  str wzr,[x19, #0x1150]
71030abc90  b 0x71030acee8
71030abc94  ldr x8,[x19, #0x1058]
71030abc98  cbz x8,0x71030abce8
71030abc9c  ldr x0,[x8, #0xd8]
71030abca0  mov w1,#0x1
71030abca4  bl 0x71025ee450
71030abca8  ldr x8,[x19, #0x1058]
71030abcac  cbz x8,0x71030abce8
71030abcb0  ldrb w9,[x8, #0xe0]
71030abcb4  cbz w9,0x71030abcc8
71030abcb8  ldr x9,[x8, #0xc8]
71030abcbc  cbz x9,0x71030abcc8
71030abcc0  mov w10,#0x101
71030abcc4  strh w10,[x9, #0x30]
71030abcc8  ldr x9,[x8, #0xd8]
71030abccc  cbz x9,0x71030abcd8
71030abcd0  mov w10,#0x1
71030abcd4  strb w10,[x9, #0x21]
71030abcd8  ldrb w9,[x8, #0xe0]
71030abcdc  cbz w9,0x71030abce8
71030abce0  ldr x8,[x8, #0xb0]
71030abce4  strb wzr,[x8, #0x10]
71030abce8  mov w8,#0x1
71030abcec  strb w8,[x22, #0x2]
71030abcf0  ldr x8,[x19, #0x11e0]
71030abcf4  cbz x8,0x71030aa22c
71030abcf8  ldp x0,x1,[x8]
71030abcfc  adrp x2,0x71042a1000
71030abd00  add x2,x2,#0x676
71030abd04  bl 0x71025f5420
71030abd08  ldr x8,[x19, #0x11e0]
71030abd0c  cbz x8,0x71030aa22c
71030abd10  ldp x0,x1,[x8]
71030abd14  adrp x2,0x7104441000
71030abd18  add x2,x2,#0xec7
71030abd1c  bl 0x71025f5420
71030abd20  b 0x71030aa22c
71030abd24  ldr x8,[x0]
71030abd28  ldr x8,[x8, #0x38]
71030abd2c  mov w1,#0x1
71030abd30  blr x8
71030abd34  cbnz x0,0x71030ab478
71030abd38  b 0x71030ab488
71030abd3c  ldr x8,[x11, #0x110]
71030abd40  ldp x20,x22,[x8]
71030abd44  cmp x20,x22
71030abd48  b.eq 0x71030aceec
71030abd4c  mov w23,#0x1
71030abd50  mov x24,#-0x1
71030abd54  ldr x8,[x20]
71030abd58  ldr x9,[x8, #0x8]
71030abd5c  strb w23,[x8, #0x128]
71030abd60  cbz x9,0x71030abd74
71030abd64  str x24,[x9, #0xd8]
71030abd68  ldr x0,[x8, #0x8]
71030abd6c  mov w1,wzr
71030abd70  bl 0x7100532bc0
71030abd74  add x20,x20,#0x8
71030abd78  cmp x22,x20
71030abd7c  b.ne 0x71030abd54
71030abd80  b 0x71030aceec
71030abd84  cbz x27,0x71030ab888
71030abd88  ldr x8,[x27, #0x8]
71030abd8c  ldr x8,[x8, #0x108]
71030abd90  cbz x8,0x71030ab888
71030abd94  strb wzr,[x8, #0x44]
71030abd98  ldp x22,x23,[x25, #0x18]
71030abd9c  cmp x22,x23
71030abda0  b.ne 0x71030ab890
71030abda4  b 0x71030ab8c8
71030abda8  ldr x8,[x19, #0x9e0]
71030abdac  cbz x8,0x71030abe18
71030abdb0  ldrb w9,[x8, #0x35]
71030abdb4  cbz w9,0x71030abe18
71030abdb8  ldr w24,[x8, #0x3c]
71030abdbc  adrp x8,0x7105334000
71030abdc0  ldr x8,[x8, #0x920]
71030abdc4  ldr x23,[x8]
71030abdc8  mov w8,#0x9498
71030abdcc  movk w8,#0x1, LSL #16
71030abdd0  add x20,x23,x8
71030abdd4  mov x0,x20
71030abdd8  bl 0x71039c19c0
71030abddc  cmp w24,#0x1
71030abde0  b.lt 0x71030abe10
71030abde4  lsr x8,x24,#0x18
71030abde8  orr w9,wzr,#0x300
71030abdec  madd x9,x8,x9,x23
71030abdf0  cbz x9,0x71030abe10
71030abdf4  ldr w9,[x9, #0x4]
71030abdf8  cmp w9,w24
71030abdfc  b.ne 0x71030abe10
71030abe00  orr w9,wzr,#0x300
71030abe04  madd x8,x8,x9,x23
71030abe08  mov w9,#0x1
71030abe0c  strb w9,[x8, #0x2d8]
71030abe10  mov x0,x20
71030abe14  bl 0x71039c19d0
71030abe18  ldr x8,[x19, #0x9f8]
71030abe1c  cbz x8,0x71030abe88
71030abe20  ldrb w9,[x8, #0x35]
71030abe24  cbz w9,0x71030abe88
71030abe28  ldr w24,[x8, #0x3c]
71030abe2c  adrp x8,0x7105334000
71030abe30  ldr x8,[x8, #0x920]
71030abe34  ldr x23,[x8]
71030abe38  mov w8,#0x9498
71030abe3c  movk w8,#0x1, LSL #16
71030abe40  add x20,x23,x8
71030abe44  mov x0,x20
71030abe48  bl 0x71039c19c0
71030abe4c  cmp w24,#0x1
71030abe50  b.lt 0x71030abe80
71030abe54  lsr x8,x24,#0x18
71030abe58  orr w9,wzr,#0x300
71030abe5c  madd x9,x8,x9,x23
71030abe60  cbz x9,0x71030abe80
71030abe64  ldr w9,[x9, #0x4]
71030abe68  cmp w9,w24
71030abe6c  b.ne 0x71030abe80
71030abe70  orr w9,wzr,#0x300
71030abe74  madd x8,x8,x9,x23
71030abe78  mov w9,#0x1
71030abe7c  strb w9,[x8, #0x2d8]
71030abe80  mov x0,x20
71030abe84  bl 0x71039c19d0
71030abe88  ldr x8,[x19, #0xa10]
71030abe8c  cbz x8,0x71030abef8
71030abe90  ldrb w9,[x8, #0x35]
71030abe94  cbz w9,0x71030abef8
71030abe98  ldr w24,[x8, #0x3c]
71030abe9c  adrp x8,0x7105334000
71030abea0  ldr x8,[x8, #0x920]
71030abea4  ldr x23,[x8]
71030abea8  mov w8,#0x9498
71030abeac  movk w8,#0x1, LSL #16
71030abeb0  add x20,x23,x8
71030abeb4  mov x0,x20
71030abeb8  bl 0x71039c19c0
71030abebc  cmp w24,#0x1
71030abec0  b.lt 0x71030abef0
71030abec4  lsr x8,x24,#0x18
71030abec8  orr w9,wzr,#0x300
71030abecc  madd x9,x8,x9,x23
71030abed0  cbz x9,0x71030abef0
71030abed4  ldr w9,[x9, #0x4]
71030abed8  cmp w9,w24
71030abedc  b.ne 0x71030abef0
71030abee0  orr w9,wzr,#0x300
71030abee4  madd x8,x8,x9,x23
71030abee8  mov w9,#0x1
71030abeec  strb w9,[x8, #0x2d8]
71030abef0  mov x0,x20
71030abef4  bl 0x71039c19d0
71030abef8  ldr x8,[x19, #0xa28]
71030abefc  cbz x8,0x71030abf68
71030abf00  ldrb w9,[x8, #0x35]
71030abf04  cbz w9,0x71030abf68
71030abf08  ldr w24,[x8, #0x3c]
71030abf0c  adrp x8,0x7105334000
71030abf10  ldr x8,[x8, #0x920]
71030abf14  ldr x23,[x8]
71030abf18  mov w8,#0x9498
71030abf1c  movk w8,#0x1, LSL #16
71030abf20  add x20,x23,x8
71030abf24  mov x0,x20
71030abf28  bl 0x71039c19c0
71030abf2c  cmp w24,#0x1
71030abf30  b.lt 0x71030abf60
71030abf34  lsr x8,x24,#0x18
71030abf38  orr w9,wzr,#0x300
71030abf3c  madd x9,x8,x9,x23
71030abf40  cbz x9,0x71030abf60
71030abf44  ldr w9,[x9, #0x4]
71030abf48  cmp w9,w24
71030abf4c  b.ne 0x71030abf60
71030abf50  orr w9,wzr,#0x300
71030abf54  madd x8,x8,x9,x23
71030abf58  mov w9,#0x1
71030abf5c  strb w9,[x8, #0x2d8]
71030abf60  mov x0,x20
71030abf64  bl 0x71039c19d0
71030abf68  ldrb w8,[x19, #0xab9]
71030abf6c  cbz w8,0x71030abfb8
71030abf70  ldrsw x9,[x19, #0xabc]
71030abf74  cmp w9,#0x37
71030abf78  b.hi 0x71030abfac
71030abf7c  adrp x8,0x71052b6000
71030abf80  ldr x8,[x8, #0xfd8]
71030abf84  ldr x8,[x8]
71030abf88  ldr x8,[x8, #0xc0]
71030abf8c  add x9,x8,x9
71030abf90  ldrb w10,[x9, #0x464]
71030abf94  cbz w10,0x71030abfac
71030abf98  add x9,x9,#0x464
71030abf9c  strb wzr,[x9]
71030abfa0  ldr w9,[x8]
71030abfa4  sub w9,w9,#0x1
71030abfa8  str w9,[x8]
71030abfac  mov w8,#0xffffffff
71030abfb0  str w8,[x19, #0xabc]
71030abfb4  strb wzr,[x19, #0xab9]
71030abfb8  ldrb w8,[x19, #0xb09]
71030abfbc  strb wzr,[x19, #0xaba]
71030abfc0  cbz w8,0x71030ac00c
71030abfc4  ldrsw x9,[x19, #0xb0c]
71030abfc8  cmp w9,#0x37
71030abfcc  b.hi 0x71030ac000
71030abfd0  adrp x8,0x71052b6000
71030abfd4  ldr x8,[x8, #0xfd8]
71030abfd8  ldr x8,[x8]
71030abfdc  ldr x8,[x8, #0xc0]
71030abfe0  add x9,x8,x9
71030abfe4  ldrb w10,[x9, #0x464]
71030abfe8  cbz w10,0x71030ac000
71030abfec  add x9,x9,#0x464
71030abff0  strb wzr,[x9]
71030abff4  ldr w9,[x8]
71030abff8  sub w9,w9,#0x1
71030abffc  str w9,[x8]
71030ac000  mov w8,#0xffffffff
71030ac004  str w8,[x19, #0xb0c]
71030ac008  strb wzr,[x19, #0xb09]
71030ac00c  ldrb w8,[x19, #0xb59]
71030ac010  strb wzr,[x19, #0xb0a]
71030ac014  cbz w8,0x71030ac060
71030ac018  ldrsw x9,[x19, #0xb5c]
71030ac01c  cmp w9,#0x37
71030ac020  b.hi 0x71030ac054
71030ac024  adrp x8,0x71052b6000
71030ac028  ldr x8,[x8, #0xfd8]
71030ac02c  ldr x8,[x8]
71030ac030  ldr x8,[x8, #0xc0]
71030ac034  add x9,x8,x9
71030ac038  ldrb w10,[x9, #0x464]
71030ac03c  cbz w10,0x71030ac054
71030ac040  add x9,x9,#0x464
71030ac044  strb wzr,[x9]
71030ac048  ldr w9,[x8]
71030ac04c  sub w9,w9,#0x1
71030ac050  str w9,[x8]
71030ac054  mov w8,#0xffffffff
71030ac058  str w8,[x19, #0xb5c]
71030ac05c  strb wzr,[x19, #0xb59]
71030ac060  ldrb w8,[x19, #0xba9]
71030ac064  add x20,x19,#0x9e0
71030ac068  strb wzr,[x19, #0xb5a]
71030ac06c  cbz w8,0x71030ac0b8
71030ac070  ldrsw x9,[x19, #0xbac]
71030ac074  cmp w9,#0x37
71030ac078  b.hi 0x71030ac0ac
71030ac07c  adrp x8,0x71052b6000
71030ac080  ldr x8,[x8, #0xfd8]
71030ac084  ldr x8,[x8]
71030ac088  ldr x8,[x8, #0xc0]
71030ac08c  add x9,x8,x9
71030ac090  ldrb w10,[x9, #0x464]
71030ac094  cbz w10,0x71030ac0ac
71030ac098  add x9,x9,#0x464
71030ac09c  strb wzr,[x9]
71030ac0a0  ldr w9,[x8]
71030ac0a4  sub w9,w9,#0x1
71030ac0a8  str w9,[x8]
71030ac0ac  mov w8,#0xffffffff
71030ac0b0  str w8,[x19, #0xbac]
71030ac0b4  strb wzr,[x19, #0xba9]
71030ac0b8  strb wzr,[x19, #0xbaa]
71030ac0bc  ldr x20,[x20]
71030ac0c0  cbnz x20,0x71030acaf0
71030ac0c4  b 0x71030acb5c
71030ac0c8  ldr x9,[x19, #0x988]
71030ac0cc  ldr x1,[x9, #0x320]
71030ac0d0  ldr x9,[x1, #0x40]
71030ac0d4  ldp x20,x10,[x9]
71030ac0d8  mov x8,#0x6d34
71030ac0dc  movk x8,#0xecd3, LSL #16
71030ac0e0  movk x8,#0xd, LSL #32
71030ac0e4  cmp x10,x20
71030ac0e8  b.eq 0x71030ac130
71030ac0ec  cmp x20,x10
71030ac0f0  b.eq 0x71030ac128
71030ac0f4  ldr x11,[x20, #0x10]
71030ac0f8  and x11,x11,#0xffffffffff
71030ac0fc  cmp x11,x8
71030ac100  b.eq 0x71030ac128
71030ac104  add x11,x20,#0x70
71030ac108  cmp x10,x11
71030ac10c  b.eq 0x71030ac130
71030ac110  ldr x12,[x11, #0x10]
71030ac114  add x11,x11,#0x70
71030ac118  and x12,x12,#0xffffffffff
71030ac11c  cmp x12,x8
71030ac120  b.ne 0x71030ac108
71030ac124  sub x20,x11,#0x70
71030ac128  cmp x20,x10
71030ac12c  b.ne 0x71030ac134
71030ac130  add x20,x9,#0x20
71030ac134  ldr x9,[x20, #0x10]
71030ac138  and x9,x9,#0xffffffffff
71030ac13c  cmp x9,x8
71030ac140  b.ne 0x71030ac214
71030ac144  ldr x2,[x20, #0x8]
71030ac148  sub x0,x29,#0xc0
71030ac14c  bl 0x7102626be0
71030ac150  sub x1,x29,#0xc0
71030ac154  mov x0,x20
71030ac158  mov x2,xzr
71030ac15c  bl 0x71025f0f50
71030ac160  b 0x71030ac21c
71030ac164  add x20,x19,#0x9e0
71030ac168  ldr x20,[x20]
71030ac16c  cbnz x20,0x71030acaf0
71030ac170  b 0x71030acb5c
71030ac174  cbz x25,0x71030ab8c8
71030ac178  ldr x8,[x25, #0x8]
71030ac17c  ldr x8,[x8, #0x108]
71030ac180  cbz x8,0x71030ab8c8
71030ac184  strb wzr,[x8, #0x44]
71030ac188  ldr x8,[x19, #0x1058]
71030ac18c  cbnz x8,0x71030ab8d0
71030ac190  b 0x71030ab920
71030ac194  stp xzr,xzr,[x29, #-0xb8]
71030ac198  stur xzr,[x29, #-0xc0]
71030ac19c  add x8,x19,#0x9d0
71030ac1a0  sub x9,x29,#0xc0
71030ac1a4  cmp x8,x9
71030ac1a8  b.eq 0x71030ac2bc
71030ac1ac  ldr x10,[x19, #0x9e0]
71030ac1b0  ldur x9,[x29, #-0xb0]
71030ac1b4  cmp x10,x9
71030ac1b8  b.eq 0x71030ac2c0
71030ac1bc  cbz x9,0x71030ac294
71030ac1c0  cbz x10,0x71030ac1e8
71030ac1c4  ldr x11,[x8]
71030ac1c8  ldr x12,[x19, #0x9d8]
71030ac1cc  str x11,[x12]
71030ac1d0  str x12,[x11, #0x8]
71030ac1d4  ldr x11,[x10, #0x10]
71030ac1d8  sub x11,x11,#0x1
71030ac1dc  str x11,[x10, #0x10]
71030ac1e0  stp xzr,xzr,[x8, #0x8]
71030ac1e4  str xzr,[x8]
71030ac1e8  ldr x11,[x9, #0x20]
71030ac1ec  add x10,x9,#0x18
71030ac1f0  str x10,[x19, #0x9d0]
71030ac1f4  str x11,[x19, #0x9d8]
71030ac1f8  str x8,[x9, #0x20]
71030ac1fc  str x8,[x11]
71030ac200  ldr x8,[x9, #0x10]
71030ac204  add x8,x8,#0x1
71030ac208  str x8,[x9, #0x10]
71030ac20c  str x9,[x19, #0x9e0]
71030ac210  b 0x71030ac2bc
71030ac214  stp xzr,xzr,[x29, #-0xb8]
71030ac218  stur xzr,[x29, #-0xc0]
71030ac21c  add x8,x19,#0x9d0
71030ac220  sub x9,x29,#0xc0
71030ac224  cmp x8,x9
71030ac228  b.eq 0x71030ac428
71030ac22c  ldr x10,[x19, #0x9e0]
71030ac230  ldur x9,[x29, #-0xb0]
71030ac234  cmp x10,x9
71030ac238  b.eq 0x71030ac42c
71030ac23c  cbz x9,0x71030ac400
71030ac240  cbz x10,0x71030ac268
71030ac244  ldr x11,[x8]
71030ac248  ldr x12,[x19, #0x9d8]
71030ac24c  str x11,[x12]
71030ac250  str x12,[x11, #0x8]
71030ac254  ldr x11,[x10, #0x10]
71030ac258  sub x11,x11,#0x1
71030ac25c  str x11,[x10, #0x10]
71030ac260  stp xzr,xzr,[x8, #0x8]
71030ac264  str xzr,[x8]
71030ac268  ldr x11,[x9, #0x20]
71030ac26c  add x10,x9,#0x18
71030ac270  str x10,[x19, #0x9d0]
71030ac274  str x11,[x19, #0x9d8]
71030ac278  str x8,[x9, #0x20]
71030ac27c  str x8,[x11]
71030ac280  ldr x8,[x9, #0x10]
71030ac284  add x8,x8,#0x1
71030ac288  str x8,[x9, #0x10]
71030ac28c  str x9,[x19, #0x9e0]
71030ac290  b 0x71030ac428
71030ac294  cbz x10,0x71030ac2bc
71030ac298  ldr x9,[x19, #0x9d0]
71030ac29c  ldr x11,[x19, #0x9d8]
71030ac2a0  str x9,[x11]
71030ac2a4  str x11,[x9, #0x8]
71030ac2a8  ldr x9,[x10, #0x10]
71030ac2ac  sub x9,x9,#0x1
71030ac2b0  str x9,[x10, #0x10]
71030ac2b4  stp xzr,xzr,[x8, #0x8]
71030ac2b8  str xzr,[x8]
71030ac2bc  ldur x9,[x29, #-0xb0]
71030ac2c0  cbz x9,0x71030ac2e4
71030ac2c4  ldp x8,x10,[x29, #-0xc0]
71030ac2c8  str x8,[x10]
71030ac2cc  str x10,[x8, #0x8]
71030ac2d0  ldr x8,[x9, #0x10]
71030ac2d4  sub x8,x8,#0x1
71030ac2d8  str x8,[x9, #0x10]
71030ac2dc  stp xzr,xzr,[x29, #-0xb8]
71030ac2e0  stur xzr,[x29, #-0xc0]
71030ac2e4  ldr x9,[x19, #0x988]
71030ac2e8  ldr x1,[x9, #0x320]
71030ac2ec  ldr x9,[x1, #0x40]
71030ac2f0  ldp x20,x10,[x9]
71030ac2f4  mov x8,#0x4983
71030ac2f8  movk x8,#0xb0c5, LSL #16
71030ac2fc  movk x8,#0xf, LSL #32
71030ac300  cmp x10,x20
71030ac304  b.eq 0x71030ac34c
71030ac308  cmp x20,x10
71030ac30c  b.eq 0x71030ac344
71030ac310  ldr x11,[x20, #0x10]
71030ac314  and x11,x11,#0xffffffffff
71030ac318  cmp x11,x8
71030ac31c  b.eq 0x71030ac344
71030ac320  add x11,x20,#0x70
71030ac324  cmp x10,x11
71030ac328  b.eq 0x71030ac34c
71030ac32c  ldr x12,[x11, #0x10]
71030ac330  add x11,x11,#0x70
71030ac334  and x12,x12,#0xffffffffff
71030ac338  cmp x12,x8
71030ac33c  b.ne 0x71030ac324
71030ac340  sub x20,x11,#0x70
71030ac344  cmp x20,x10
71030ac348  b.ne 0x71030ac350
71030ac34c  add x20,x9,#0x20
71030ac350  ldr x9,[x20, #0x10]
71030ac354  and x9,x9,#0xffffffffff
71030ac358  cmp x9,x8
71030ac35c  b.ne 0x71030ac380
71030ac360  ldr x2,[x20, #0x8]
71030ac364  sub x0,x29,#0xc0
71030ac368  bl 0x7102626be0
71030ac36c  sub x1,x29,#0xc0
71030ac370  mov x0,x20
71030ac374  mov x2,xzr
71030ac378  bl 0x71025f0f50
71030ac37c  b 0x71030ac388
71030ac380  stp xzr,xzr,[x29, #-0xb8]
71030ac384  stur xzr,[x29, #-0xc0]
71030ac388  add x8,x19,#0x9e8
71030ac38c  sub x9,x29,#0xc0
71030ac390  cmp x8,x9
71030ac394  b.eq 0x71030ac594
71030ac398  ldr x10,[x19, #0x9f8]
71030ac39c  ldur x9,[x29, #-0xb0]
71030ac3a0  cmp x10,x9
71030ac3a4  b.eq 0x71030ac598
71030ac3a8  cbz x9,0x71030ac56c
71030ac3ac  cbz x10,0x71030ac3d4
71030ac3b0  ldr x11,[x8]
71030ac3b4  ldr x12,[x19, #0x9f0]
71030ac3b8  str x11,[x12]
71030ac3bc  str x12,[x11, #0x8]
71030ac3c0  ldr x11,[x10, #0x10]
71030ac3c4  sub x11,x11,#0x1
71030ac3c8  str x11,[x10, #0x10]
71030ac3cc  stp xzr,xzr,[x8, #0x8]
71030ac3d0  str xzr,[x8]
71030ac3d4  ldr x11,[x9, #0x20]
71030ac3d8  add x10,x9,#0x18
71030ac3dc  str x10,[x19, #0x9e8]
71030ac3e0  str x11,[x19, #0x9f0]
71030ac3e4  str x8,[x9, #0x20]
71030ac3e8  str x8,[x11]
71030ac3ec  ldr x8,[x9, #0x10]
71030ac3f0  add x8,x8,#0x1
71030ac3f4  str x8,[x9, #0x10]
71030ac3f8  str x9,[x19, #0x9f8]
71030ac3fc  b 0x71030ac594
71030ac400  cbz x10,0x71030ac428
71030ac404  ldr x9,[x19, #0x9d0]
71030ac408  ldr x11,[x19, #0x9d8]
71030ac40c  str x9,[x11]
71030ac410  str x11,[x9, #0x8]
71030ac414  ldr x9,[x10, #0x10]
71030ac418  sub x9,x9,#0x1
71030ac41c  str x9,[x10, #0x10]
71030ac420  stp xzr,xzr,[x8, #0x8]
71030ac424  str xzr,[x8]
71030ac428  ldur x9,[x29, #-0xb0]
71030ac42c  cbz x9,0x71030ac450
71030ac430  ldp x8,x10,[x29, #-0xc0]
71030ac434  str x8,[x10]
71030ac438  str x10,[x8, #0x8]
71030ac43c  ldr x8,[x9, #0x10]
71030ac440  sub x8,x8,#0x1
71030ac444  str x8,[x9, #0x10]
71030ac448  stp xzr,xzr,[x29, #-0xb8]
71030ac44c  stur xzr,[x29, #-0xc0]
71030ac450  ldr x9,[x19, #0x988]
71030ac454  ldr x1,[x9, #0x320]
71030ac458  ldr x9,[x1, #0x40]
71030ac45c  ldp x20,x10,[x9]
71030ac460  mov x8,#0x6f7c
71030ac464  movk x8,#0x72c4, LSL #16
71030ac468  movk x8,#0xe, LSL #32
71030ac46c  cmp x10,x20
71030ac470  b.eq 0x71030ac4b8
71030ac474  cmp x20,x10
71030ac478  b.eq 0x71030ac4b0
71030ac47c  ldr x11,[x20, #0x10]
71030ac480  and x11,x11,#0xffffffffff
71030ac484  cmp x11,x8
71030ac488  b.eq 0x71030ac4b0
71030ac48c  add x11,x20,#0x70
71030ac490  cmp x10,x11
71030ac494  b.eq 0x71030ac4b8
71030ac498  ldr x12,[x11, #0x10]
71030ac49c  add x11,x11,#0x70
71030ac4a0  and x12,x12,#0xffffffffff
71030ac4a4  cmp x12,x8
71030ac4a8  b.ne 0x71030ac490
71030ac4ac  sub x20,x11,#0x70
71030ac4b0  cmp x20,x10
71030ac4b4  b.ne 0x71030ac4bc
71030ac4b8  add x20,x9,#0x20
71030ac4bc  ldr x9,[x20, #0x10]
71030ac4c0  and x9,x9,#0xffffffffff
71030ac4c4  cmp x9,x8
71030ac4c8  b.ne 0x71030ac4ec
71030ac4cc  ldr x2,[x20, #0x8]
71030ac4d0  sub x0,x29,#0xc0
71030ac4d4  bl 0x7102626be0
71030ac4d8  sub x1,x29,#0xc0
71030ac4dc  mov x0,x20
71030ac4e0  mov x2,xzr
71030ac4e4  bl 0x71025f0f50
71030ac4e8  b 0x71030ac4f4
71030ac4ec  stp xzr,xzr,[x29, #-0xb8]
71030ac4f0  stur xzr,[x29, #-0xc0]
71030ac4f4  add x8,x19,#0x9e8
71030ac4f8  sub x9,x29,#0xc0
71030ac4fc  cmp x8,x9
71030ac500  b.eq 0x71030ac700
71030ac504  ldr x10,[x19, #0x9f8]
71030ac508  ldur x9,[x29, #-0xb0]
71030ac50c  cmp x10,x9
71030ac510  b.eq 0x71030ac704
71030ac514  cbz x9,0x71030ac6d8
71030ac518  cbz x10,0x71030ac540
71030ac51c  ldr x11,[x8]
71030ac520  ldr x12,[x19, #0x9f0]
71030ac524  str x11,[x12]
71030ac528  str x12,[x11, #0x8]
71030ac52c  ldr x11,[x10, #0x10]
71030ac530  sub x11,x11,#0x1
71030ac534  str x11,[x10, #0x10]
71030ac538  stp xzr,xzr,[x8, #0x8]
71030ac53c  str xzr,[x8]
71030ac540  ldr x11,[x9, #0x20]
71030ac544  add x10,x9,#0x18
71030ac548  str x10,[x19, #0x9e8]
71030ac54c  str x11,[x19, #0x9f0]
71030ac550  str x8,[x9, #0x20]
71030ac554  str x8,[x11]
71030ac558  ldr x8,[x9, #0x10]
71030ac55c  add x8,x8,#0x1
71030ac560  str x8,[x9, #0x10]
71030ac564  str x9,[x19, #0x9f8]
71030ac568  b 0x71030ac700
71030ac56c  cbz x10,0x71030ac594
71030ac570  ldr x9,[x19, #0x9e8]
71030ac574  ldr x11,[x19, #0x9f0]
71030ac578  str x9,[x11]
71030ac57c  str x11,[x9, #0x8]
71030ac580  ldr x9,[x10, #0x10]
71030ac584  sub x9,x9,#0x1
71030ac588  str x9,[x10, #0x10]
71030ac58c  stp xzr,xzr,[x8, #0x8]
71030ac590  str xzr,[x8]
71030ac594  ldur x9,[x29, #-0xb0]
71030ac598  cbz x9,0x71030ac5bc
71030ac59c  ldp x8,x10,[x29, #-0xc0]
71030ac5a0  str x8,[x10]
71030ac5a4  str x10,[x8, #0x8]
71030ac5a8  ldr x8,[x9, #0x10]
71030ac5ac  sub x8,x8,#0x1
71030ac5b0  str x8,[x9, #0x10]
71030ac5b4  stp xzr,xzr,[x29, #-0xb8]
71030ac5b8  stur xzr,[x29, #-0xc0]
71030ac5bc  ldr x9,[x19, #0x988]
71030ac5c0  ldr x1,[x9, #0x320]
71030ac5c4  ldr x9,[x1, #0x40]
71030ac5c8  ldp x20,x10,[x9]
71030ac5cc  mov x8,#0x1839
71030ac5d0  movk x8,#0x29cc, LSL #16
71030ac5d4  movk x8,#0xf, LSL #32
71030ac5d8  cmp x10,x20
71030ac5dc  b.eq 0x71030ac624
71030ac5e0  cmp x20,x10
71030ac5e4  b.eq 0x71030ac61c
71030ac5e8  ldr x11,[x20, #0x10]
71030ac5ec  and x11,x11,#0xffffffffff
71030ac5f0  cmp x11,x8
71030ac5f4  b.eq 0x71030ac61c
71030ac5f8  add x11,x20,#0x70
71030ac5fc  cmp x10,x11
71030ac600  b.eq 0x71030ac624
71030ac604  ldr x12,[x11, #0x10]
71030ac608  add x11,x11,#0x70
71030ac60c  and x12,x12,#0xffffffffff
71030ac610  cmp x12,x8
71030ac614  b.ne 0x71030ac5fc
71030ac618  sub x20,x11,#0x70
71030ac61c  cmp x20,x10
71030ac620  b.ne 0x71030ac628
71030ac624  add x20,x9,#0x20
71030ac628  ldr x9,[x20, #0x10]
71030ac62c  and x9,x9,#0xffffffffff
71030ac630  cmp x9,x8
71030ac634  b.ne 0x71030ac658
71030ac638  ldr x2,[x20, #0x8]
71030ac63c  sub x0,x29,#0xc0
71030ac640  bl 0x7102626be0
71030ac644  sub x1,x29,#0xc0
71030ac648  mov x0,x20
71030ac64c  mov x2,xzr
71030ac650  bl 0x71025f0f50
71030ac654  b 0x71030ac660
71030ac658  stp xzr,xzr,[x29, #-0xb8]
71030ac65c  stur xzr,[x29, #-0xc0]
71030ac660  add x8,x19,#0xa00
71030ac664  sub x9,x29,#0xc0
71030ac668  cmp x8,x9
71030ac66c  b.eq 0x71030ac86c
71030ac670  ldr x10,[x19, #0xa10]
71030ac674  ldur x9,[x29, #-0xb0]
71030ac678  cmp x10,x9
71030ac67c  b.eq 0x71030ac870
71030ac680  cbz x9,0x71030ac844
71030ac684  cbz x10,0x71030ac6ac
71030ac688  ldr x11,[x8]
71030ac68c  ldr x12,[x19, #0xa08]
71030ac690  str x11,[x12]
71030ac694  str x12,[x11, #0x8]
71030ac698  ldr x11,[x10, #0x10]
71030ac69c  sub x11,x11,#0x1
71030ac6a0  str x11,[x10, #0x10]
71030ac6a4  stp xzr,xzr,[x8, #0x8]
71030ac6a8  str xzr,[x8]
71030ac6ac  ldr x11,[x9, #0x20]
71030ac6b0  add x10,x9,#0x18
71030ac6b4  str x10,[x19, #0xa00]
71030ac6b8  str x11,[x19, #0xa08]
71030ac6bc  str x8,[x9, #0x20]
71030ac6c0  str x8,[x11]
71030ac6c4  ldr x8,[x9, #0x10]
71030ac6c8  add x8,x8,#0x1
71030ac6cc  str x8,[x9, #0x10]
71030ac6d0  str x9,[x19, #0xa10]
71030ac6d4  b 0x71030ac86c
71030ac6d8  cbz x10,0x71030ac700
71030ac6dc  ldr x9,[x19, #0x9e8]
71030ac6e0  ldr x11,[x19, #0x9f0]
71030ac6e4  str x9,[x11]
71030ac6e8  str x11,[x9, #0x8]
71030ac6ec  ldr x9,[x10, #0x10]
71030ac6f0  sub x9,x9,#0x1
71030ac6f4  str x9,[x10, #0x10]
71030ac6f8  stp xzr,xzr,[x8, #0x8]
71030ac6fc  str xzr,[x8]
71030ac700  ldur x9,[x29, #-0xb0]
71030ac704  cbz x9,0x71030ac728
71030ac708  ldp x8,x10,[x29, #-0xc0]
71030ac70c  str x8,[x10]
71030ac710  str x10,[x8, #0x8]
71030ac714  ldr x8,[x9, #0x10]
71030ac718  sub x8,x8,#0x1
71030ac71c  str x8,[x9, #0x10]
71030ac720  stp xzr,xzr,[x29, #-0xb8]
71030ac724  stur xzr,[x29, #-0xc0]
71030ac728  ldr x9,[x19, #0x988]
71030ac72c  ldr x1,[x9, #0x320]
71030ac730  ldr x9,[x1, #0x40]
71030ac734  ldp x20,x10,[x9]
71030ac738  mov x8,#0x7a36
71030ac73c  movk x8,#0x7116, LSL #16
71030ac740  movk x8,#0xc, LSL #32
71030ac744  cmp x10,x20
71030ac748  b.eq 0x71030ac790
71030ac74c  cmp x20,x10
71030ac750  b.eq 0x71030ac788
71030ac754  ldr x11,[x20, #0x10]
71030ac758  and x11,x11,#0xffffffffff
71030ac75c  cmp x11,x8
71030ac760  b.eq 0x71030ac788
71030ac764  add x11,x20,#0x70
71030ac768  cmp x10,x11
71030ac76c  b.eq 0x71030ac790
71030ac770  ldr x12,[x11, #0x10]
71030ac774  add x11,x11,#0x70
71030ac778  and x12,x12,#0xffffffffff
71030ac77c  cmp x12,x8
71030ac780  b.ne 0x71030ac768
71030ac784  sub x20,x11,#0x70
71030ac788  cmp x20,x10
71030ac78c  b.ne 0x71030ac794
71030ac790  add x20,x9,#0x20
71030ac794  ldr x9,[x20, #0x10]
71030ac798  and x9,x9,#0xffffffffff
71030ac79c  cmp x9,x8
71030ac7a0  b.ne 0x71030ac7c4
71030ac7a4  ldr x2,[x20, #0x8]
71030ac7a8  sub x0,x29,#0xc0
71030ac7ac  bl 0x7102626be0
71030ac7b0  sub x1,x29,#0xc0
71030ac7b4  mov x0,x20
71030ac7b8  mov x2,xzr
71030ac7bc  bl 0x71025f0f50
71030ac7c0  b 0x71030ac7cc
71030ac7c4  stp xzr,xzr,[x29, #-0xb8]
71030ac7c8  stur xzr,[x29, #-0xc0]
71030ac7cc  add x8,x19,#0xa18
71030ac7d0  sub x9,x29,#0xc0
71030ac7d4  cmp x8,x9
71030ac7d8  b.eq 0x71030ac9d8
71030ac7dc  ldr x10,[x19, #0xa28]
71030ac7e0  ldur x9,[x29, #-0xb0]
71030ac7e4  cmp x10,x9
71030ac7e8  b.eq 0x71030ac9dc
71030ac7ec  cbz x9,0x71030ac9b0
71030ac7f0  cbz x10,0x71030ac818
71030ac7f4  ldr x11,[x8]
71030ac7f8  ldr x12,[x19, #0xa20]
71030ac7fc  str x11,[x12]
71030ac800  str x12,[x11, #0x8]
71030ac804  ldr x11,[x10, #0x10]
71030ac808  sub x11,x11,#0x1
71030ac80c  str x11,[x10, #0x10]
71030ac810  stp xzr,xzr,[x8, #0x8]
71030ac814  str xzr,[x8]
71030ac818  ldr x11,[x9, #0x20]
71030ac81c  add x10,x9,#0x18
71030ac820  str x10,[x19, #0xa18]
71030ac824  str x11,[x19, #0xa20]
71030ac828  str x8,[x9, #0x20]
71030ac82c  str x8,[x11]
71030ac830  ldr x8,[x9, #0x10]
71030ac834  add x8,x8,#0x1
71030ac838  str x8,[x9, #0x10]
71030ac83c  str x9,[x19, #0xa28]
71030ac840  b 0x71030ac9d8
71030ac844  cbz x10,0x71030ac86c
71030ac848  ldr x9,[x19, #0xa00]
71030ac84c  ldr x11,[x19, #0xa08]
71030ac850  str x9,[x11]
71030ac854  str x11,[x9, #0x8]
71030ac858  ldr x9,[x10, #0x10]
71030ac85c  sub x9,x9,#0x1
71030ac860  str x9,[x10, #0x10]
71030ac864  stp xzr,xzr,[x8, #0x8]
71030ac868  str xzr,[x8]
71030ac86c  ldur x9,[x29, #-0xb0]
71030ac870  cbz x9,0x71030ac894
71030ac874  ldp x8,x10,[x29, #-0xc0]
71030ac878  str x8,[x10]
71030ac87c  str x10,[x8, #0x8]
71030ac880  ldr x8,[x9, #0x10]
71030ac884  sub x8,x8,#0x1
71030ac888  str x8,[x9, #0x10]
71030ac88c  stp xzr,xzr,[x29, #-0xb8]
71030ac890  stur xzr,[x29, #-0xc0]
71030ac894  ldr x9,[x19, #0x988]
71030ac898  ldr x1,[x9, #0x320]
71030ac89c  ldr x9,[x1, #0x40]
71030ac8a0  ldp x20,x10,[x9]
71030ac8a4  mov x8,#0x9f4d
71030ac8a8  movk x8,#0x98cd, LSL #16
71030ac8ac  movk x8,#0xb, LSL #32
71030ac8b0  cmp x10,x20
71030ac8b4  b.eq 0x71030ac8fc
71030ac8b8  cmp x20,x10
71030ac8bc  b.eq 0x71030ac8f4
71030ac8c0  ldr x11,[x20, #0x10]
71030ac8c4  and x11,x11,#0xffffffffff
71030ac8c8  cmp x11,x8
71030ac8cc  b.eq 0x71030ac8f4
71030ac8d0  add x11,x20,#0x70
71030ac8d4  cmp x10,x11
71030ac8d8  b.eq 0x71030ac8fc
71030ac8dc  ldr x12,[x11, #0x10]
71030ac8e0  add x11,x11,#0x70
71030ac8e4  and x12,x12,#0xffffffffff
71030ac8e8  cmp x12,x8
71030ac8ec  b.ne 0x71030ac8d4
71030ac8f0  sub x20,x11,#0x70
71030ac8f4  cmp x20,x10
71030ac8f8  b.ne 0x71030ac900
71030ac8fc  add x20,x9,#0x20
71030ac900  ldr x9,[x20, #0x10]
71030ac904  and x9,x9,#0xffffffffff
71030ac908  cmp x9,x8
71030ac90c  b.ne 0x71030ac930
71030ac910  ldr x2,[x20, #0x8]
71030ac914  sub x0,x29,#0xc0
71030ac918  bl 0x7102626be0
71030ac91c  sub x1,x29,#0xc0
71030ac920  mov x0,x20
71030ac924  mov x2,xzr
71030ac928  bl 0x71025f0f50
71030ac92c  b 0x71030ac938
71030ac930  stp xzr,xzr,[x29, #-0xb8]
71030ac934  stur xzr,[x29, #-0xc0]
71030ac938  add x8,x19,#0xa18
71030ac93c  sub x9,x29,#0xc0
71030ac940  cmp x8,x9
71030ac944  b.eq 0x71030aca6c
71030ac948  ldr x10,[x19, #0xa28]
71030ac94c  ldur x9,[x29, #-0xb0]
71030ac950  cmp x10,x9
71030ac954  b.eq 0x71030aca70
71030ac958  cbz x9,0x71030aca44
71030ac95c  cbz x10,0x71030ac984
71030ac960  ldr x11,[x8]
71030ac964  ldr x12,[x19, #0xa20]
71030ac968  str x11,[x12]
71030ac96c  str x12,[x11, #0x8]
71030ac970  ldr x11,[x10, #0x10]
71030ac974  sub x11,x11,#0x1
71030ac978  str x11,[x10, #0x10]
71030ac97c  stp xzr,xzr,[x8, #0x8]
71030ac980  str xzr,[x8]
71030ac984  ldr x11,[x9, #0x20]
71030ac988  add x10,x9,#0x18
71030ac98c  str x10,[x19, #0xa18]
71030ac990  str x11,[x19, #0xa20]
71030ac994  str x8,[x9, #0x20]
71030ac998  str x8,[x11]
71030ac99c  ldr x8,[x9, #0x10]
71030ac9a0  add x8,x8,#0x1
71030ac9a4  str x8,[x9, #0x10]
71030ac9a8  str x9,[x19, #0xa28]
71030ac9ac  b 0x71030aca6c
71030ac9b0  cbz x10,0x71030ac9d8
71030ac9b4  ldr x9,[x19, #0xa18]
71030ac9b8  ldr x11,[x19, #0xa20]
71030ac9bc  str x9,[x11]
71030ac9c0  str x11,[x9, #0x8]
71030ac9c4  ldr x9,[x10, #0x10]
71030ac9c8  sub x9,x9,#0x1
71030ac9cc  str x9,[x10, #0x10]
71030ac9d0  stp xzr,xzr,[x8, #0x8]
71030ac9d4  str xzr,[x8]
71030ac9d8  ldur x9,[x29, #-0xb0]
71030ac9dc  cbz x9,0x71030aca00
71030ac9e0  ldp x8,x10,[x29, #-0xc0]
71030ac9e4  str x8,[x10]
71030ac9e8  str x10,[x8, #0x8]
71030ac9ec  ldr x8,[x9, #0x10]
71030ac9f0  sub x8,x8,#0x1
71030ac9f4  str x8,[x9, #0x10]
71030ac9f8  stp xzr,xzr,[x29, #-0xb8]
71030ac9fc  stur xzr,[x29, #-0xc0]
71030aca00  ldr x8,[x19, #0x9e0]
71030aca04  cbz x8,0x71030aca10
71030aca08  mov w9,#0x1
71030aca0c  strb w9,[x8, #0xb9]
71030aca10  ldr x8,[x19, #0x9f8]
71030aca14  cbz x8,0x71030aca20
71030aca18  mov w9,#0x1
71030aca1c  strb w9,[x8, #0xb9]
71030aca20  ldr x8,[x19, #0xa28]
71030aca24  add x20,x19,#0x9e0
71030aca28  cbz x8,0x71030aca34
71030aca2c  mov w9,#0x1
71030aca30  strb w9,[x8, #0xb9]
71030aca34  add x0,x19,#0xab0
71030aca38  bl 0x710317dc90
71030aca3c  add x0,x19,#0xb00
71030aca40  b 0x71030acae4
71030aca44  cbz x10,0x71030aca6c
71030aca48  ldr x9,[x19, #0xa18]
71030aca4c  ldr x11,[x19, #0xa20]
71030aca50  str x9,[x11]
71030aca54  str x11,[x9, #0x8]
71030aca58  ldr x9,[x10, #0x10]
71030aca5c  sub x9,x9,#0x1
71030aca60  str x9,[x10, #0x10]
71030aca64  stp xzr,xzr,[x8, #0x8]
71030aca68  str xzr,[x8]
71030aca6c  ldur x9,[x29, #-0xb0]
71030aca70  cbz x9,0x71030aca94
71030aca74  ldp x8,x10,[x29, #-0xc0]
71030aca78  str x8,[x10]
71030aca7c  str x10,[x8, #0x8]
71030aca80  ldr x8,[x9, #0x10]
71030aca84  sub x8,x8,#0x1
71030aca88  str x8,[x9, #0x10]
71030aca8c  stp xzr,xzr,[x29, #-0xb8]
71030aca90  stur xzr,[x29, #-0xc0]
71030aca94  ldr x8,[x19, #0x9e0]
71030aca98  cbz x8,0x71030acaa4
71030aca9c  mov w9,#0x1
71030acaa0  strb w9,[x8, #0xb9]
71030acaa4  ldr x8,[x19, #0x9f8]
71030acaa8  cbz x8,0x71030acab4
71030acaac  mov w9,#0x1
71030acab0  strb w9,[x8, #0xb9]
71030acab4  ldr x8,[x19, #0xa10]
71030acab8  cbz x8,0x71030acac4
71030acabc  mov w9,#0x1
71030acac0  strb w9,[x8, #0xb9]
71030acac4  ldr x8,[x19, #0xa28]
71030acac8  add x20,x19,#0x9e0
71030acacc  cbz x8,0x71030acad8
71030acad0  mov w9,#0x1
71030acad4  strb w9,[x8, #0xb9]
71030acad8  add x0,x19,#0xb50
71030acadc  bl 0x710317dc90
71030acae0  add x0,x19,#0xba0
71030acae4  bl 0x710317dc90
71030acae8  ldr x20,[x20]
71030acaec  cbz x20,0x71030acb5c
71030acaf0  ldrb w8,[x20, #0x35]
71030acaf4  cbnz w8,0x71030acb5c
71030acaf8  mov w8,#0x1
71030acafc  strb w8,[x20, #0x35]
71030acb00  ldrb w8,[x20, #0xb8]
71030acb04  cmp w8,#0x0
71030acb08  orr w8,wzr,#0x1800000
71030acb0c  str wzr,[x20, #0x38]
71030acb10  ldr x1,[x20, #0x40]
71030acb14  add x3,x20,#0x50
71030acb18  add x4,x20,#0x60
71030acb1c  add x5,x20,#0x70
71030acb20  mov w7,#0xffffffff
71030acb24  cinc w2,w8,eq
71030acb28  adrp x8,0x7105334000
71030acb2c  ldr x8,[x8, #0x920]
71030acb30  ldr x0,[x8]
71030acb34  mov w6,wzr
71030acb38  str wzr,[sp]
71030acb3c  bl 0x7103563430
71030acb40  str w0,[x20, #0x3c]
71030acb44  mov x0,x20
71030acb48  bl 0x71025ef570
71030acb4c  ldr w8,[x20, #0x3c]
71030acb50  cmp w8,#0x0
71030acb54  cset w8,ne
71030acb58  strb w8,[x20, #0x34]
71030acb5c  mov w8,#0x1
71030acb60  strb w8,[x22]
71030acb64  ldrb w8,[x19, #0xf9c]
71030acb68  cbz w8,0x71030acebc
71030acb6c  ldrb w8,[x22, #0x1]
71030acb70  cbnz w8,0x71030acebc
71030acb74  ldr w8,[x19, #0x113c]
71030acb78  cbz w8,0x71030acbb4
71030acb7c  ldr x8,[x19, #0x1210]
71030acb80  ldr x8,[x8, #0x8]
71030acb84  mov w9,#0x1
71030acb88  str w9,[x8, #0x10]
71030acb8c  ldr w8,[x19, #0x113c]
71030acb90  ldr w23,[x19, #0x116c]
71030acb94  cmp w8,#0x2
71030acb98  str w8,[x19, #0xa80]
71030acb9c  str w9,[x19, #0xa84]
71030acba0  b.eq 0x71030acbd8
71030acba4  cmp w8,#0x1
71030acba8  b.eq 0x71030acc94
71030acbac  cbz w8,0x71030acbc0
71030acbb0  b 0x71030acd70
71030acbb4  ldr w23,[x19, #0x116c]
71030acbb8  orr x8,xzr,#0x100000000
71030acbbc  str x8,[x19, #0xa80]
71030acbc0  mov w8,#0x100
71030acbc4  str wzr,[x19, #0xa34]
71030acbc8  add x9,x19,#0xf48
71030acbcc  strh w8,[x19, #0xa38]
71030acbd0  mov w8,#0x1
71030acbd4  b 0x71030acd64
71030acbd8  ldr s0,[x19, #0xa98]
71030acbdc  fmov s1,0x41400000
71030acbe0  fadd s0,s0,s1
71030acbe4  ldr x20,[x19, #0xa48]
71030acbe8  str s0,[x19, #0xa30]
71030acbec  str s0,[x19, #0xa34]
71030acbf0  strh w9,[x19, #0xa38]
71030acbf4  ldr x8,[x20, #0x38]
71030acbf8  cbz x8,0x71030acc14
71030acbfc  ldr x0,[x8, #0x130]
71030acc00  ldr x8,[x0]
71030acc04  ldr x8,[x8, #0x120]
71030acc08  mov w1,wzr
71030acc0c  blr x8
71030acc10  ldr x20,[x19, #0xa48]
71030acc14  ldrb w8,[x20, #0x40]
71030acc18  cbz w8,0x71030acc68
71030acc1c  ldr x24,[x20, #0x30]
71030acc20  cbz x24,0x71030acc58
71030acc24  ldrb w8,[x24, #0x10]
71030acc28  cbz w8,0x71030acc58
71030acc2c  ldrb w8,[x24, #0x50]
71030acc30  strb wzr,[x24, #0x10]
71030acc34  cbz w8,0x71030acc58
71030acc38  ldr x8,[x24]
71030acc3c  ldr w0,[x8, #0x8]
71030acc40  bl 0x71003ac560
71030acc44  ldr x8,[x0]
71030acc48  ldr x8,[x8, #0x48]
71030acc4c  mov w1,wzr
71030acc50  blr x8
71030acc54  strb wzr,[x24, #0x50]
71030acc58  ldr x8,[x20]
71030acc5c  ldr x8,[x8, #0x30]
71030acc60  mov x0,x20
71030acc64  blr x8
71030acc68  strb wzr,[x20, #0x40]
71030acc6c  ldr x11,[x19, #0x990]
71030acc70  movi v0.2D,#0x0
71030acc74  ldr x10,[x19, #0xf48]
71030acc78  add x9,x19,#0xf48
71030acc7c  add x12,x11,#0x1b8
71030acc80  ld1 {v0.S}[0],[x12]
71030acc84  mov w8,wzr
71030acc88  add x13,x11,#0x1bc
71030acc8c  add x11,x11,#0x1c0
71030acc90  b 0x71030acd54
71030acc94  adrp x8,0x7104472000
71030acc98  ldr s0,[x19, #0xa98]
71030acc9c  ldr x20,[x19, #0xa40]
71030acca0  ldr s1,[x8, #0xeec]
71030acca4  mov w8,#0x1
71030acca8  strh w8,[x19, #0xa38]
71030accac  fadd s0,s0,s1
71030accb0  str s0,[x19, #0xa34]
71030accb4  str s0,[x19, #0xa30]
71030accb8  ldr x8,[x20, #0x38]
71030accbc  cbz x8,0x71030accd8
71030accc0  ldr x0,[x8, #0x130]
71030accc4  ldr x8,[x0]
71030accc8  ldr x8,[x8, #0x120]
71030acccc  mov w1,wzr
71030accd0  blr x8
71030accd4  ldr x20,[x19, #0xa40]
71030accd8  ldrb w8,[x20, #0x40]
71030accdc  cbz w8,0x71030acd2c
71030acce0  ldr x24,[x20, #0x30]
71030acce4  cbz x24,0x71030acd1c
71030acce8  ldrb w8,[x24, #0x10]
71030accec  cbz w8,0x71030acd1c
71030accf0  ldrb w8,[x24, #0x50]
71030accf4  strb wzr,[x24, #0x10]
71030accf8  cbz w8,0x71030acd1c
71030accfc  ldr x8,[x24]
71030acd00  ldr w0,[x8, #0x8]
71030acd04  bl 0x71003ac560
71030acd08  ldr x8,[x0]
71030acd0c  ldr x8,[x8, #0x48]
71030acd10  mov w1,wzr
71030acd14  blr x8
71030acd18  strb wzr,[x24, #0x50]
71030acd1c  ldr x8,[x20]
71030acd20  ldr x8,[x8, #0x30]
71030acd24  mov x0,x20
71030acd28  blr x8
71030acd2c  strb wzr,[x20, #0x40]
71030acd30  ldr x11,[x19, #0x990]
71030acd34  movi v0.2D,#0x0
71030acd38  ldr x10,[x19, #0xf48]
71030acd3c  add x9,x19,#0xf48
71030acd40  add x12,x11,#0x1ac
71030acd44  ld1 {v0.S}[0],[x12]
71030acd48  mov w8,wzr
71030acd4c  add x13,x11,#0x1b0
71030acd50  add x11,x11,#0x1b4
71030acd54  ld1 {v0.S}[1],[x13]
71030acd58  ldr x10,[x10, #0x8]
71030acd5c  ld1 {v0.S}[2],[x11]
71030acd60  str q0,[x10, #0x30]
71030acd64  ldr x9,[x9]
71030acd68  ldr x9,[x9, #0x8]
71030acd6c  str w8,[x9, #0x10]
71030acd70  ldr x8,[x19, #0x988]
71030acd74  str wzr,[x19, #0xa94]
71030acd78  ldr x8,[x8, #0x340]
71030acd7c  ldp w9,w10,[x8]
71030acd80  ldr s0,[x19, #0xa9c]
71030acd84  ldr s1,[x19, #0xaa0]
71030acd88  str w10,[x8]
71030acd8c  eor w9,w9,w9, LSL #0xb
71030acd90  ldp w10,w11,[x8, #0x8]
71030acd94  eor w9,w9,w9, LSR #0x8
71030acd98  eor w9,w9,w11
71030acd9c  eor w9,w9,w11, LSR #0x13
71030acda0  fsub s1,s1,s0
71030acda4  ucvtf s2,w9
71030acda8  stp w10,w11,[x8, #0x4]
71030acdac  str w9,[x8, #0xc]
71030acdb0  adrp x8,0x7104473000
71030acdb4  str w23,[x19, #0xbf4]
71030acdb8  ldr x20,[x19, #0x9f8]
71030acdbc  fmul s1,s1,s2
71030acdc0  ldr s2,[x8, #0x710]
71030acdc4  fmul s4,s1,s2
71030acdc8  fadd s0,s0,s4
71030acdcc  str s0,[x19, #0xa98]
71030acdd0  cbz x20,0x71030ace40
71030acdd4  ldrb w8,[x20, #0x35]
71030acdd8  cbnz w8,0x71030ace40
71030acddc  mov w8,#0x1
71030acde0  strb w8,[x20, #0x35]
71030acde4  ldrb w8,[x20, #0xb8]
71030acde8  cmp w8,#0x0
71030acdec  orr w8,wzr,#0x1800000
71030acdf0  str wzr,[x20, #0x38]
71030acdf4  ldr x1,[x20, #0x40]
71030acdf8  add x3,x20,#0x50
71030acdfc  add x4,x20,#0x60
71030ace00  add x5,x20,#0x70
71030ace04  mov w7,#0xffffffff
71030ace08  cinc w2,w8,eq
71030ace0c  adrp x8,0x7105334000
71030ace10  ldr x8,[x8, #0x920]
71030ace14  ldr x0,[x8]
71030ace18  mov w6,wzr
71030ace1c  str wzr,[sp]
71030ace20  bl 0x7103563430
71030ace24  str w0,[x20, #0x3c]
71030ace28  mov x0,x20
71030ace2c  bl 0x71025ef570
71030ace30  ldr w8,[x20, #0x3c]
71030ace34  cmp w8,#0x0
71030ace38  cset w8,ne
71030ace3c  strb w8,[x20, #0x34]
71030ace40  ldr x20,[x19, #0xa10]
71030ace44  cbz x20,0x71030aceb4
71030ace48  ldrb w8,[x20, #0x35]
71030ace4c  cbnz w8,0x71030aceb4
71030ace50  mov w8,#0x1
71030ace54  strb w8,[x20, #0x35]
71030ace58  ldrb w8,[x20, #0xb8]
71030ace5c  cmp w8,#0x0
71030ace60  orr w8,wzr,#0x1800000
71030ace64  str wzr,[x20, #0x38]
71030ace68  ldr x1,[x20, #0x40]
71030ace6c  add x3,x20,#0x50
71030ace70  add x4,x20,#0x60
71030ace74  add x5,x20,#0x70
71030ace78  mov w7,#0xffffffff
71030ace7c  cinc w2,w8,eq
71030ace80  adrp x8,0x7105334000
71030ace84  ldr x8,[x8, #0x920]
71030ace88  ldr x0,[x8]
71030ace8c  mov w6,wzr
71030ace90  str wzr,[sp]
71030ace94  bl 0x7103563430
71030ace98  str w0,[x20, #0x3c]
71030ace9c  mov x0,x20
71030acea0  bl 0x71025ef570
71030acea4  ldr w8,[x20, #0x3c]
71030acea8  cmp w8,#0x0
71030aceac  cset w8,ne
71030aceb0  strb w8,[x20, #0x34]
71030aceb4  mov w8,#0x1
71030aceb8  strb w8,[x22, #0x1]
71030acebc  ldr s0,[x19, #0x1104]
71030acec0  fmov s1,0x41a00000
71030acec4  fcmp s0,s1
71030acec8  b.le 0x71030aced4
71030acecc  ldrb w8,[x22, #0x4c]
71030aced0  cbz w8,0x71030adb60
71030aced4  ldr s0,[x19, #0x1104]
71030aced8  ldr s1,[x19, #0x112c]
71030acedc  fcmp s0,s1
71030acee0  b.le 0x71030aceec
71030acee4  mov w8,#0x5
71030acee8  str w8,[x19, #0x1100]
71030aceec  ldr w8,[x19, #0x1110]
71030acef0  cmp w8,#0x2
71030acef4  b.eq 0x71030acf40
71030acef8  cmp w8,#0x1
71030acefc  b.eq 0x71030acfc8
71030acf00  cbnz w8,0x71030ad1bc
71030acf04  ldr x8,[x19, #0x1070]
71030acf08  cbz x8,0x71030acf30
71030acf0c  add x0,x8,#0x108
71030acf10  mov w9,#0x1
71030acf14  strb w9,[x8, #0x110]
71030acf18  bl 0x71025e9d50
71030acf1c  ldr x8,[x19, #0x1070]
71030acf20  cbz x8,0x71030acf30
71030acf24  ldrb w9,[x8, #0x118]
71030acf28  and w9,w9,#0xfe
71030acf2c  strb w9,[x8, #0x118]
71030acf30  mov w8,#0x11a8
71030acf34  strb wzr,[x19, x8, LSL ]
71030acf38  mov w8,#0x1
71030acf3c  b 0x71030acfc0
71030acf40  ldr s0,[x19, #0x1108]
71030acf44  fadd s0,s0,s8
71030acf48  ldrsw x9,[x19, #0x7d8]
71030acf4c  mov w8,#0xffffffff
71030acf50  cmp w9,#0x2
71030acf54  str w8,[x19, #0x11a0]
71030acf58  str s0,[x19, #0x1108]
71030acf5c  b.lt 0x71030acfa4
71030acf60  ldr x8,[x19, #0x7e0]
71030acf64  mov x10,xzr
71030acf68  sub x9,x9,#0x1
71030acf6c  ldr s1,[x8]
71030acf70  scvtf s1,s1
71030acf74  fcmp s0,s1
71030acf78  add x11,x10,#0x1
71030acf7c  b.lt 0x71030acf94
71030acf80  ldr s1,[x8, #0x1c]
71030acf84  scvtf s1,s1
71030acf88  fcmp s0,s1
71030acf8c  b.pl 0x71030acf94
71030acf90  str w10,[x19, #0x11a0]
71030acf94  add x8,x8,#0x1c
71030acf98  cmp x11,x9
71030acf9c  mov x10,x11
71030acfa0  b.lt 0x71030acf6c
71030acfa4  mov x0,x19
71030acfa8  mov w1,wzr
71030acfac  bl 0x71030aed70
71030acfb0  ldr w8,[x19, #0x11a0]
71030acfb4  cmn w8,#0x1
71030acfb8  b.ne 0x71030ad1bc
71030acfbc  orr w8,wzr,#0x3
71030acfc0  str w8,[x19, #0x1110]
71030acfc4  b 0x71030ad1bc
71030acfc8  ldr x20,[x19, #0x10f0]
71030acfcc  ldr x8,[x20, #0x38]
71030acfd0  cbz x8,0x71030acff0
71030acfd4  adrp x8,0x7105314000
71030acfd8  add x8,x8,#0x4d8
71030acfdc  ldarb w8,[x8]
71030acfe0  tbz w8,#0x0,0x71030adc80
71030acfe4  adrp x8,0x71052c5000
71030acfe8  ldrb w8,[x8, #0x18a]
71030acfec  cbz w8,0x71030ad054
71030acff0  ldr s1,[x19, #0x115c]
71030acff4  fcmp s1,#0.0
71030acff8  b.hi 0x71030ad1bc
71030acffc  mov w8,#0x11a8
71030ad000  mov w9,#0x1
71030ad004  strb w9,[x19, x8, LSL ]
71030ad008  mov w8,#0x2
71030ad00c  str w8,[x19, #0x1110]
71030ad010  ldr x8,[x19, #0x300]
71030ad014  str wzr,[x19, #0x1108]
71030ad018  ldr x9,[x8, #0x18]
71030ad01c  ldp x8,x9,[x9]
71030ad020  cmp x8,x9
71030ad024  b.eq 0x71030ad0a0
71030ad028  mov x10,#0xcf90
71030ad02c  movk x10,#0x6a44, LSL #16
71030ad030  movk x10,#0xf, LSL #32
71030ad034  ldr x11,[x8], #0x8
71030ad038  ldr x12,[x11, #0xa0]
71030ad03c  and x12,x12,#0xffffffffff
71030ad040  cmp x12,x10
71030ad044  b.eq 0x71030ad090
71030ad048  cmp x9,x8
71030ad04c  b.ne 0x71030ad034
71030ad050  b 0x71030ad0a0
71030ad054  ldr x8,[x20, #0x38]
71030ad058  ldr x0,[x8, #0x130]
71030ad05c  ldr x8,[x0]
71030ad060  ldr x8,[x8, #0xb0]
71030ad064  mov w1,wzr
71030ad068  blr x8
71030ad06c  fmov s2,0x3f800000
71030ad070  ldr s1,[x19, #0x115c]
71030ad074  fcmp s0,s2
71030ad078  b.le 0x71030acff4
71030ad07c  fsub s1,s1,s0
71030ad080  str s1,[x19, #0x115c]
71030ad084  fcmp s1,#0.0
71030ad088  b.ls 0x71030acffc
71030ad08c  b 0x71030ad1bc
71030ad090  ldr x8,[x11, #0x110]
71030ad094  ldp x0,x1,[x8]
71030ad098  mov w2,#0x1
71030ad09c  bl 0x71025f4d80
71030ad0a0  ldr x9,[x19, #0x7e0]
71030ad0a4  movi v0.2D,#0x0
71030ad0a8  add x10,x9,#0x4
71030ad0ac  ld1 {v0.S}[0],[x10]
71030ad0b0  add x10,x9,#0x8
71030ad0b4  add x9,x9,#0xc
71030ad0b8  ld1 {v0.S}[1],[x10]
71030ad0bc  ld1 {v0.S}[2],[x9]
71030ad0c0  ldr x8,[x19, #0x338]
71030ad0c4  str q0,[x21, #0xa0]
71030ad0c8  ldr x22,[x8]
71030ad0cc  ldr x0,[x22, #0x8]
71030ad0d0  cbz x0,0x71030ad148
71030ad0d4  add x1,sp,#0x120
71030ad0d8  mov w2,#0x1
71030ad0dc  str xzr,[sp, #0x120]
71030ad0e0  bl 0x7102405040
71030ad0e4  cmn w0,#0x1
71030ad0e8  b.eq 0x71030ad148
71030ad0ec  mov w20,w0
71030ad0f0  cmp w0,#0x18
71030ad0f4  b.hi 0x71030ad130
71030ad0f8  ldr x8,[x22, #0x8]
71030ad0fc  mov w9,#0x50
71030ad100  smaddl x8,w20,w9,x8
71030ad104  ldr x0,[x8, #0x68]
71030ad108  ldr x8,[x0]
71030ad10c  cbz x8,0x71030ad130
71030ad110  ldr w9,[x0, #0x8]
71030ad114  cmn w9,#0x1
71030ad118  b.eq 0x71030ad130
71030ad11c  ldr w8,[x8, #0x20]
71030ad120  cmp w9,w8
71030ad124  b.ne 0x71030ad130
71030ad128  sub x1,x29,#0xc0
71030ad12c  bl 0x7103736cf0
71030ad130  ldr x0,[x22, #0x8]
71030ad134  ldr x8,[x0]
71030ad138  ldr x8,[x8, #0x58]
71030ad13c  orr w1,wzr,#0x3
71030ad140  mov w2,w20
71030ad144  blr x8
71030ad148  ldr x20,[x19, #0x10f0]
71030ad14c  ldrb w8,[x20, #0x40]
71030ad150  cbz w8,0x71030ad1a0
71030ad154  ldr x22,[x20, #0x30]
71030ad158  cbz x22,0x71030ad190
71030ad15c  ldrb w8,[x22, #0x10]
71030ad160  cbz w8,0x71030ad190
71030ad164  ldrb w8,[x22, #0x50]
71030ad168  strb wzr,[x22, #0x10]
71030ad16c  cbz w8,0x71030ad190
71030ad170  ldr x8,[x22]
71030ad174  ldr w0,[x8, #0x8]
71030ad178  bl 0x71003ac560
71030ad17c  ldr x8,[x0]
71030ad180  ldr x8,[x8, #0x48]
71030ad184  mov w1,wzr
71030ad188  blr x8
71030ad18c  strb wzr,[x22, #0x50]
71030ad190  ldr x8,[x20]
71030ad194  ldr x8,[x8, #0x30]
71030ad198  mov x0,x20
71030ad19c  blr x8
71030ad1a0  strb wzr,[x20, #0x40]
71030ad1a4  ldr x8,[x19, #0x11e0]
71030ad1a8  cbz x8,0x71030ad1bc
71030ad1ac  ldp x0,x1,[x8]
71030ad1b0  adrp x2,0x71042a1000
71030ad1b4  add x2,x2,#0x676
71030ad1b8  bl 0x71025f55b0
71030ad1bc  ldr w8,[x19, #0x1114]
71030ad1c0  cmp w8,#0x2
71030ad1c4  b.eq 0x71030ad210
71030ad1c8  cmp w8,#0x1
71030ad1cc  b.eq 0x71030ad298
71030ad1d0  cbnz w8,0x71030ad48c
71030ad1d4  ldr x8,[x19, #0x1068]
71030ad1d8  cbz x8,0x71030ad200
71030ad1dc  add x0,x8,#0x108
71030ad1e0  mov w9,#0x1
71030ad1e4  strb w9,[x8, #0x110]
71030ad1e8  bl 0x71025e9d50
71030ad1ec  ldr x8,[x19, #0x1068]
71030ad1f0  cbz x8,0x71030ad200
71030ad1f4  ldrb w9,[x8, #0x118]
71030ad1f8  and w9,w9,#0xfe
71030ad1fc  strb w9,[x8, #0x118]
71030ad200  mov w8,#0x11a9
71030ad204  strb wzr,[x19, x8, LSL ]
71030ad208  mov w8,#0x1
71030ad20c  b 0x71030ad290
71030ad210  ldr s0,[x19, #0x110c]
71030ad214  fadd s0,s0,s8
71030ad218  ldrsw x9,[x19, #0x7dc]
71030ad21c  mov w8,#0xffffffff
71030ad220  cmp w9,#0x2
71030ad224  str w8,[x19, #0x11a4]
71030ad228  str s0,[x19, #0x110c]
71030ad22c  b.lt 0x71030ad274
71030ad230  ldr x8,[x19, #0x7f8]
71030ad234  mov x10,xzr
71030ad238  sub x9,x9,#0x1
71030ad23c  ldr s1,[x8]
71030ad240  scvtf s1,s1
71030ad244  fcmp s0,s1
71030ad248  add x11,x10,#0x1
71030ad24c  b.lt 0x71030ad264
71030ad250  ldr s1,[x8, #0x1c]
71030ad254  scvtf s1,s1
71030ad258  fcmp s0,s1
71030ad25c  b.pl 0x71030ad264
71030ad260  str w10,[x19, #0x11a4]
71030ad264  add x8,x8,#0x1c
71030ad268  cmp x11,x9
71030ad26c  mov x10,x11
71030ad270  b.lt 0x71030ad23c
71030ad274  mov w1,#0x1
71030ad278  mov x0,x19
71030ad27c  bl 0x71030aed70
71030ad280  ldr w8,[x19, #0x11a4]
71030ad284  cmn w8,#0x1
71030ad288  b.ne 0x71030ad48c
71030ad28c  orr w8,wzr,#0x3
71030ad290  str w8,[x19, #0x1114]
71030ad294  b 0x71030ad48c
71030ad298  ldr x20,[x19, #0x10f8]
71030ad29c  ldr x8,[x20, #0x38]
71030ad2a0  cbz x8,0x71030ad2c0
71030ad2a4  adrp x8,0x7105314000
71030ad2a8  add x8,x8,#0x4d8
71030ad2ac  ldarb w8,[x8]
71030ad2b0  tbz w8,#0x0,0x71030adcc0
71030ad2b4  adrp x8,0x71052c5000
71030ad2b8  ldrb w8,[x8, #0x18a]
71030ad2bc  cbz w8,0x71030ad324
71030ad2c0  ldr s1,[x19, #0x1164]
71030ad2c4  fcmp s1,#0.0
71030ad2c8  b.hi 0x71030ad48c
71030ad2cc  mov w8,#0x11a9
71030ad2d0  mov w9,#0x1
71030ad2d4  strb w9,[x19, x8, LSL ]
71030ad2d8  mov w8,#0x2
71030ad2dc  str w8,[x19, #0x1114]
71030ad2e0  ldr x8,[x19, #0x300]
71030ad2e4  str wzr,[x19, #0x110c]
71030ad2e8  ldr x9,[x8, #0x18]
71030ad2ec  ldp x8,x9,[x9]
71030ad2f0  cmp x8,x9
71030ad2f4  b.eq 0x71030ad370
71030ad2f8  mov x10,#0xf2f3
71030ad2fc  movk x10,#0x904b, LSL #16
71030ad300  movk x10,#0xf, LSL #32
71030ad304  ldr x11,[x8], #0x8
71030ad308  ldr x12,[x11, #0xa0]
71030ad30c  and x12,x12,#0xffffffffff
71030ad310  cmp x12,x10
71030ad314  b.eq 0x71030ad360
71030ad318  cmp x9,x8
71030ad31c  b.ne 0x71030ad304
71030ad320  b 0x71030ad370
71030ad324  ldr x8,[x20, #0x38]
71030ad328  ldr x0,[x8, #0x130]
71030ad32c  ldr x8,[x0]
71030ad330  ldr x8,[x8, #0xb0]
71030ad334  mov w1,wzr
71030ad338  blr x8
71030ad33c  fmov s2,0x3f800000
71030ad340  ldr s1,[x19, #0x1164]
71030ad344  fcmp s0,s2
71030ad348  b.le 0x71030ad2c4
71030ad34c  fsub s1,s1,s0
71030ad350  str s1,[x19, #0x1164]
71030ad354  fcmp s1,#0.0
71030ad358  b.ls 0x71030ad2cc
71030ad35c  b 0x71030ad48c
71030ad360  ldr x8,[x11, #0x110]
71030ad364  ldp x0,x1,[x8]
71030ad368  mov w2,#0x1
71030ad36c  bl 0x71025f4d80
71030ad370  ldr x9,[x19, #0x7f8]
71030ad374  movi v0.2D,#0x0
71030ad378  add x10,x9,#0x4
71030ad37c  ld1 {v0.S}[0],[x10]
71030ad380  add x10,x9,#0x8
71030ad384  add x9,x9,#0xc
71030ad388  ld1 {v0.S}[1],[x10]
71030ad38c  ld1 {v0.S}[2],[x9]
71030ad390  ldr x8,[x19, #0x338]
71030ad394  str q0,[x21, #0xa0]
71030ad398  ldr x22,[x8]
71030ad39c  ldr x0,[x22, #0x8]
71030ad3a0  cbz x0,0x71030ad418
71030ad3a4  add x1,sp,#0x120
71030ad3a8  mov w2,#0x1
71030ad3ac  str xzr,[sp, #0x120]
71030ad3b0  bl 0x7102405040
71030ad3b4  cmn w0,#0x1
71030ad3b8  b.eq 0x71030ad418
71030ad3bc  mov w20,w0
71030ad3c0  cmp w0,#0x18
71030ad3c4  b.hi 0x71030ad400
71030ad3c8  ldr x8,[x22, #0x8]
71030ad3cc  mov w9,#0x50
71030ad3d0  smaddl x8,w20,w9,x8
71030ad3d4  ldr x0,[x8, #0x68]
71030ad3d8  ldr x8,[x0]
71030ad3dc  cbz x8,0x71030ad400
71030ad3e0  ldr w9,[x0, #0x8]
71030ad3e4  cmn w9,#0x1
71030ad3e8  b.eq 0x71030ad400
71030ad3ec  ldr w8,[x8, #0x20]
71030ad3f0  cmp w9,w8
71030ad3f4  b.ne 0x71030ad400
71030ad3f8  sub x1,x29,#0xc0
71030ad3fc  bl 0x7103736cf0
71030ad400  ldr x0,[x22, #0x8]
71030ad404  ldr x8,[x0]
71030ad408  ldr x8,[x8, #0x58]
71030ad40c  orr w1,wzr,#0x3
71030ad410  mov w2,w20
71030ad414  blr x8
71030ad418  ldr x20,[x19, #0x10f8]
71030ad41c  ldrb w8,[x20, #0x40]
71030ad420  cbz w8,0x71030ad470
71030ad424  ldr x22,[x20, #0x30]
71030ad428  cbz x22,0x71030ad460
71030ad42c  ldrb w8,[x22, #0x10]
71030ad430  cbz w8,0x71030ad460
71030ad434  ldrb w8,[x22, #0x50]
71030ad438  strb wzr,[x22, #0x10]
71030ad43c  cbz w8,0x71030ad460
71030ad440  ldr x8,[x22]
71030ad444  ldr w0,[x8, #0x8]
71030ad448  bl 0x71003ac560
71030ad44c  ldr x8,[x0]
71030ad450  ldr x8,[x8, #0x48]
71030ad454  mov w1,wzr
71030ad458  blr x8
71030ad45c  strb wzr,[x22, #0x50]
71030ad460  ldr x8,[x20]
71030ad464  ldr x8,[x8, #0x30]
71030ad468  mov x0,x20
71030ad46c  blr x8
71030ad470  strb wzr,[x20, #0x40]
71030ad474  ldr x8,[x19, #0x11e0]
71030ad478  cbz x8,0x71030ad48c
71030ad47c  ldp x0,x1,[x8]
71030ad480  adrp x2,0x7104441000
71030ad484  add x2,x2,#0xec7
71030ad488  bl 0x71025f55b0
71030ad48c  ldr w8,[x19, #0x1130]
71030ad490  cmp w8,#0x4
71030ad494  b.eq 0x71030ad4bc
71030ad498  cmp w8,#0x3
71030ad49c  b.eq 0x71030ad534
71030ad4a0  cmp w8,#0x2
71030ad4a4  b.ne 0x71030ad744
71030ad4a8  orr w8,wzr,#0x3
71030ad4ac  str w8,[x19, #0x1130]
71030ad4b0  mov w8,#0x11aa
71030ad4b4  strb wzr,[x19, x8, LSL ]
71030ad4b8  b 0x71030ad744
71030ad4bc  ldr s0,[x19, #0x1138]
71030ad4c0  fadd s0,s0,s8
71030ad4c4  mov w8,#0xffffffff
71030ad4c8  str w8,[x19, #0x11ac]
71030ad4cc  ldr w8,[x19, #0x1134]
71030ad4d0  str s0,[x19, #0x1138]
71030ad4d4  cbz w8,0x71030ad5ac
71030ad4d8  ldrsw x9,[x19, #0x814]
71030ad4dc  cmp w9,#0x2
71030ad4e0  b.lt 0x71030ad528
71030ad4e4  ldr x8,[x19, #0x830]
71030ad4e8  mov x10,xzr
71030ad4ec  sub x9,x9,#0x1
71030ad4f0  ldr s1,[x8]
71030ad4f4  scvtf s1,s1
71030ad4f8  fcmp s0,s1
71030ad4fc  add x11,x10,#0x1
71030ad500  b.lt 0x71030ad518
71030ad504  ldr s1,[x8, #0x1c]
71030ad508  scvtf s1,s1
71030ad50c  fcmp s0,s1
71030ad510  b.pl 0x71030ad518
71030ad514  str w10,[x19, #0x11ac]
71030ad518  add x8,x8,#0x1c
71030ad51c  cmp x11,x9
71030ad520  mov x10,x11
71030ad524  b.lt 0x71030ad4f0
71030ad528  mov w1,#0x1
71030ad52c  mov x0,x19
71030ad530  b 0x71030ad604
71030ad534  ldr w8,[x19, #0x1134]
71030ad538  cbz w8,0x71030ad620
71030ad53c  ldr x20,[x19, #0x10c0]
71030ad540  ldrb w8,[x20, #0xc0]
71030ad544  cbz w8,0x71030ad744
71030ad548  ldrb w8,[x20, #0x40]
71030ad54c  cbz w8,0x71030ad59c
71030ad550  ldr x22,[x20, #0x30]
71030ad554  cbz x22,0x71030ad58c
71030ad558  ldrb w8,[x22, #0x10]
71030ad55c  cbz w8,0x71030ad58c
71030ad560  ldrb w8,[x22, #0x50]
71030ad564  strb wzr,[x22, #0x10]
71030ad568  cbz w8,0x71030ad58c
71030ad56c  ldr x8,[x22]
71030ad570  ldr w0,[x8, #0x8]
71030ad574  bl 0x71003ac560
71030ad578  ldr x8,[x0]
71030ad57c  ldr x8,[x8, #0x48]
71030ad580  mov w1,wzr
71030ad584  blr x8
71030ad588  strb wzr,[x22, #0x50]
71030ad58c  ldr x8,[x20]
71030ad590  ldr x8,[x8, #0x30]
71030ad594  mov x0,x20
71030ad598  blr x8
71030ad59c  strb wzr,[x20, #0x40]
71030ad5a0  ldr x8,[x19, #0x338]
71030ad5a4  ldr x9,[x19, #0x830]
71030ad5a8  b 0x71030ad68c
71030ad5ac  ldrsw x9,[x19, #0x810]
71030ad5b0  cmp w9,#0x2
71030ad5b4  b.lt 0x71030ad5fc
71030ad5b8  ldr x8,[x19, #0x818]
71030ad5bc  mov x10,xzr
71030ad5c0  sub x9,x9,#0x1
71030ad5c4  ldr s1,[x8]
71030ad5c8  scvtf s1,s1
71030ad5cc  fcmp s0,s1
71030ad5d0  add x11,x10,#0x1
71030ad5d4  b.lt 0x71030ad5ec
71030ad5d8  ldr s1,[x8, #0x1c]
71030ad5dc  scvtf s1,s1
71030ad5e0  fcmp s0,s1
71030ad5e4  b.pl 0x71030ad5ec
71030ad5e8  str w10,[x19, #0x11ac]
71030ad5ec  add x8,x8,#0x1c
71030ad5f0  cmp x11,x9
71030ad5f4  mov x10,x11
71030ad5f8  b.lt 0x71030ad5c4
71030ad5fc  mov x0,x19
71030ad600  mov w1,wzr
71030ad604  bl 0x71030aeb90
71030ad608  ldr w8,[x19, #0x11ac]
71030ad60c  cmn w8,#0x1
71030ad610  b.ne 0x71030ad744
71030ad614  mov w8,#0x5
71030ad618  str w8,[x19, #0x1130]
71030ad61c  b 0x71030ad744
71030ad620  ldr x20,[x19, #0x10b8]
71030ad624  ldrb w8,[x20, #0xc0]
71030ad628  cbz w8,0x71030ad744
71030ad62c  ldrb w8,[x20, #0x40]
71030ad630  cbz w8,0x71030ad680
71030ad634  ldr x22,[x20, #0x30]
71030ad638  cbz x22,0x71030ad670
71030ad63c  ldrb w8,[x22, #0x10]
71030ad640  cbz w8,0x71030ad670
71030ad644  ldrb w8,[x22, #0x50]
71030ad648  strb wzr,[x22, #0x10]
71030ad64c  cbz w8,0x71030ad670
71030ad650  ldr x8,[x22]
71030ad654  ldr w0,[x8, #0x8]
71030ad658  bl 0x71003ac560
71030ad65c  ldr x8,[x0]
71030ad660  ldr x8,[x8, #0x48]
71030ad664  mov w1,wzr
71030ad668  blr x8
71030ad66c  strb wzr,[x22, #0x50]
71030ad670  ldr x8,[x20]
71030ad674  ldr x8,[x8, #0x30]
71030ad678  mov x0,x20
71030ad67c  blr x8
71030ad680  strb wzr,[x20, #0x40]
71030ad684  ldr x8,[x19, #0x338]
71030ad688  ldr x9,[x19, #0x818]
71030ad68c  movi v0.2D,#0x0
71030ad690  add x10,x9,#0x4
71030ad694  ld1 {v0.S}[0],[x10]
71030ad698  add x10,x9,#0x8
71030ad69c  add x9,x9,#0xc
71030ad6a0  ld1 {v0.S}[1],[x10]
71030ad6a4  ld1 {v0.S}[2],[x9]
71030ad6a8  str q0,[x21, #0xa0]
71030ad6ac  ldr x22,[x8]
71030ad6b0  ldr x0,[x22, #0x8]
71030ad6b4  cbz x0,0x71030ad72c
71030ad6b8  add x1,sp,#0x120
71030ad6bc  mov w2,#0x1
71030ad6c0  str xzr,[sp, #0x120]
71030ad6c4  bl 0x7102405040
71030ad6c8  cmn w0,#0x1
71030ad6cc  b.eq 0x71030ad72c
71030ad6d0  mov w20,w0
71030ad6d4  cmp w0,#0x18
71030ad6d8  b.hi 0x71030ad714
71030ad6dc  ldr x8,[x22, #0x8]
71030ad6e0  mov w9,#0x50
71030ad6e4  smaddl x8,w20,w9,x8
71030ad6e8  ldr x0,[x8, #0x68]
71030ad6ec  ldr x8,[x0]
71030ad6f0  cbz x8,0x71030ad714
71030ad6f4  ldr w9,[x0, #0x8]
71030ad6f8  cmn w9,#0x1
71030ad6fc  b.eq 0x71030ad714
71030ad700  ldr w8,[x8, #0x20]
71030ad704  cmp w9,w8
71030ad708  b.ne 0x71030ad714
71030ad70c  sub x1,x29,#0xc0
71030ad710  bl 0x7103736cf0
71030ad714  ldr x0,[x22, #0x8]
71030ad718  ldr x8,[x0]
71030ad71c  ldr x8,[x8, #0x58]
71030ad720  mov w1,#0x4
71030ad724  mov w2,w20
71030ad728  blr x8
71030ad72c  mov w8,#0x4
71030ad730  mov w9,#0x11aa
71030ad734  mov w10,#0x1
71030ad738  str w8,[x19, #0x1130]
71030ad73c  strb w10,[x19, x9, LSL ]
71030ad740  str wzr,[x19, #0x1138]
71030ad744  mov w8,#0x1220
71030ad748  ldrb w8,[x19, x8, LSL ]
71030ad74c  cbnz w8,0x71030adaf8
71030ad750  ldr x0,[x19, #0x10c8]
71030ad754  fmov s0,0x41f00000
71030ad758  bl 0x7103140fd0
71030ad75c  tbz w0,#0x0,0x71030ad878
71030ad760  ldr s0,[x19, #0x1170]
71030ad764  fcmp s0,#0.0
71030ad768  b.hi 0x71030ad87c
71030ad76c  ldr w8,[x19, #0x918]
71030ad770  str w8,[x19, #0x1170]
71030ad774  mov w8,#0x1
71030ad778  str w8,[x19, #0x111c]
71030ad77c  ldr x8,[x19, #0x1090]
71030ad780  cbz x8,0x71030ad7d0
71030ad784  ldr x0,[x8, #0xd8]
71030ad788  fmov s0,wzr
71030ad78c  mov w1,#0x1
71030ad790  bl 0x71025ee450
71030ad794  ldr x8,[x19, #0x1090]
71030ad798  cbz x8,0x71030ad7d0
71030ad79c  ldrb w9,[x8, #0xe0]
71030ad7a0  cbz w9,0x71030ad7b0
71030ad7a4  ldr x9,[x8, #0xc8]
71030ad7a8  cbz x9,0x71030ad7b0
71030ad7ac  strh wzr,[x9, #0x30]
71030ad7b0  ldr x9,[x8, #0xd8]
71030ad7b4  cbz x9,0x71030ad7bc
71030ad7b8  strb wzr,[x9, #0x21]
71030ad7bc  ldrb w9,[x8, #0xe0]
71030ad7c0  cbz w9,0x71030ad7d0
71030ad7c4  ldr x8,[x8, #0xb0]
71030ad7c8  mov w9,#0x1
71030ad7cc  strb w9,[x8, #0x10]
71030ad7d0  movi v0.2D,#0x0
71030ad7d4  str wzr,[x19, #0x1124]
71030ad7d8  add x9,x19,#0x848
71030ad7dc  ld1 {v0.S}[0],[x9]
71030ad7e0  add x9,x19,#0x84c
71030ad7e4  ld1 {v0.S}[1],[x9]
71030ad7e8  add x9,x19,#0x850
71030ad7ec  ld1 {v0.S}[2],[x9]
71030ad7f0  ldr x8,[x19, #0x338]
71030ad7f4  str q0,[x21, #0xa0]
71030ad7f8  ldr x22,[x8]
71030ad7fc  ldr x0,[x22, #0x8]
71030ad800  cbz x0,0x71030ad878
71030ad804  add x1,sp,#0x120
71030ad808  mov w2,#0x1
71030ad80c  str xzr,[sp, #0x120]
71030ad810  bl 0x7102405040
71030ad814  cmn w0,#0x1
71030ad818  b.eq 0x71030ad878
71030ad81c  mov w20,w0
71030ad820  cmp w0,#0x18
71030ad824  b.hi 0x71030ad860
71030ad828  ldr x8,[x22, #0x8]
71030ad82c  mov w9,#0x50
71030ad830  smaddl x8,w20,w9,x8
71030ad834  ldr x0,[x8, #0x68]
71030ad838  ldr x8,[x0]
71030ad83c  cbz x8,0x71030ad860
71030ad840  ldr w9,[x0, #0x8]
71030ad844  cmn w9,#0x1
71030ad848  b.eq 0x71030ad860
71030ad84c  ldr w8,[x8, #0x20]
71030ad850  cmp w9,w8
71030ad854  b.ne 0x71030ad860
71030ad858  sub x1,x29,#0xc0
71030ad85c  bl 0x7103736cf0
71030ad860  ldr x0,[x22, #0x8]
71030ad864  ldr x8,[x0]
71030ad868  ldr x8,[x8, #0x58]
71030ad86c  mov w1,#0x10
71030ad870  mov w2,w20
71030ad874  blr x8
71030ad878  ldr s0,[x19, #0x1170]
71030ad87c  fcmp s0,#0.0
71030ad880  b.le 0x71030ad88c
71030ad884  fsub s0,s0,s8
71030ad888  str s0,[x19, #0x1170]
71030ad88c  ldr w8,[x19, #0x111c]
71030ad890  cmp w8,#0x1
71030ad894  b.eq 0x71030ad8b8
71030ad898  cbnz w8,0x71030ad914
71030ad89c  ldr x8,[x19, #0x1090]
71030ad8a0  cbz x8,0x71030ad8b0
71030ad8a4  ldr x8,[x8, #0xd8]
71030ad8a8  cbz x8,0x71030ad8b0
71030ad8ac  strb wzr,[x8, #0x22]
71030ad8b0  str wzr,[x19, #0x1124]
71030ad8b4  b 0x71030ad914
71030ad8b8  ldr s0,[x19, #0x1124]
71030ad8bc  fadd s0,s0,s8
71030ad8c0  ldr x0,[x19, #0x1090]
71030ad8c4  str s0,[x19, #0x1124]
71030ad8c8  bl 0x710260ffb0
71030ad8cc  tbz w0,#0x0,0x71030ad914
71030ad8d0  ldr x8,[x19, #0x1090]
71030ad8d4  cbz x8,0x71030ad910
71030ad8d8  ldrb w9,[x8, #0xe0]
71030ad8dc  cbz w9,0x71030ad8f0
71030ad8e0  ldr x9,[x8, #0xc8]
71030ad8e4  cbz x9,0x71030ad8f0
71030ad8e8  mov w10,#0x101
71030ad8ec  strh w10,[x9, #0x30]
71030ad8f0  ldr x9,[x8, #0xd8]
71030ad8f4  cbz x9,0x71030ad900
71030ad8f8  mov w10,#0x1
71030ad8fc  strb w10,[x9, #0x21]
71030ad900  ldrb w9,[x8, #0xe0]
71030ad904  cbz w9,0x71030ad910
71030ad908  ldr x8,[x8, #0xb0]
71030ad90c  strb wzr,[x8, #0x10]
71030ad910  str wzr,[x19, #0x111c]
71030ad914  ldr x0,[x19, #0x10d0]
71030ad918  fmov s0,0x41f00000
71030ad91c  bl 0x7103140fd0
71030ad920  tbz w0,#0x0,0x71030ada34
71030ad924  ldr s0,[x19, #0x1174]
71030ad928  fcmp s0,#0.0
71030ad92c  b.hi 0x71030ada38
71030ad930  ldr w8,[x19, #0x918]
71030ad934  ldr x0,[x19, #0x1088]
71030ad938  fmov s0,wzr
71030ad93c  str w8,[x19, #0x1174]
71030ad940  mov w8,#0x1
71030ad944  mov w1,#0x1
71030ad948  str w8,[x19, #0x1120]
71030ad94c  bl 0x710260fdd0
71030ad950  ldr x8,[x19, #0x1088]
71030ad954  cbz x8,0x71030ad98c
71030ad958  ldrb w9,[x8, #0xe0]
71030ad95c  cbz w9,0x71030ad96c
71030ad960  ldr x9,[x8, #0xc8]
71030ad964  cbz x9,0x71030ad96c
71030ad968  strh wzr,[x9, #0x30]
71030ad96c  ldr x9,[x8, #0xd8]
71030ad970  cbz x9,0x71030ad978
71030ad974  strb wzr,[x9, #0x21]
71030ad978  ldrb w9,[x8, #0xe0]
71030ad97c  cbz w9,0x71030ad98c
71030ad980  ldr x8,[x8, #0xb0]
71030ad984  mov w9,#0x1
71030ad988  strb w9,[x8, #0x10]
71030ad98c  movi v0.2D,#0x0
71030ad990  str wzr,[x19, #0x1128]
71030ad994  add x9,x19,#0x854
71030ad998  ld1 {v0.S}[0],[x9]
71030ad99c  add x9,x19,#0x858
71030ad9a0  ld1 {v0.S}[1],[x9]
71030ad9a4  add x9,x19,#0x85c
71030ad9a8  ld1 {v0.S}[2],[x9]
71030ad9ac  ldr x8,[x19, #0x338]
71030ad9b0  str q0,[x21, #0xa0]
71030ad9b4  ldr x21,[x8]
71030ad9b8  ldr x0,[x21, #0x8]
71030ad9bc  cbz x0,0x71030ada34
71030ad9c0  add x1,sp,#0x120
71030ad9c4  mov w2,#0x1
71030ad9c8  str xzr,[sp, #0x120]
71030ad9cc  bl 0x7102405040
71030ad9d0  cmn w0,#0x1
71030ad9d4  b.eq 0x71030ada34
71030ad9d8  mov w20,w0
71030ad9dc  cmp w0,#0x18
71030ad9e0  b.hi 0x71030ada1c
71030ad9e4  ldr x8,[x21, #0x8]
71030ad9e8  mov w9,#0x50
71030ad9ec  smaddl x8,w20,w9,x8
71030ad9f0  ldr x0,[x8, #0x68]
71030ad9f4  ldr x8,[x0]
71030ad9f8  cbz x8,0x71030ada1c
71030ad9fc  ldr w9,[x0, #0x8]
71030ada00  cmn w9,#0x1
71030ada04  b.eq 0x71030ada1c
71030ada08  ldr w8,[x8, #0x20]
71030ada0c  cmp w9,w8
71030ada10  b.ne 0x71030ada1c
71030ada14  sub x1,x29,#0xc0
71030ada18  bl 0x7103736cf0
71030ada1c  ldr x0,[x21, #0x8]
71030ada20  ldr x8,[x0]
71030ada24  ldr x8,[x8, #0x58]
71030ada28  mov w1,#0x10
71030ada2c  mov w2,w20
71030ada30  blr x8
71030ada34  ldr s0,[x19, #0x1174]
71030ada38  fcmp s0,#0.0
71030ada3c  b.le 0x71030ada48
71030ada40  fsub s0,s0,s8
71030ada44  str s0,[x19, #0x1174]
71030ada48  ldr w8,[x19, #0x1120]
71030ada4c  cmp w8,#0x1
71030ada50  b.eq 0x71030ada74
71030ada54  cbnz w8,0x71030adad0
71030ada58  ldr x8,[x19, #0x1088]
71030ada5c  cbz x8,0x71030ada6c
71030ada60  ldr x8,[x8, #0xd8]
71030ada64  cbz x8,0x71030ada6c
71030ada68  strb wzr,[x8, #0x22]
71030ada6c  str wzr,[x19, #0x1128]
71030ada70  b 0x71030adad0
71030ada74  ldr s0,[x19, #0x1128]
71030ada78  fadd s0,s0,s8
71030ada7c  ldr x0,[x19, #0x1088]
71030ada80  str s0,[x19, #0x1128]
71030ada84  bl 0x710260ffb0
71030ada88  tbz w0,#0x0,0x71030adad0
71030ada8c  ldr x8,[x19, #0x1088]
71030ada90  cbz x8,0x71030adacc
71030ada94  ldrb w9,[x8, #0xe0]
71030ada98  cbz w9,0x71030adaac
71030ada9c  ldr x9,[x8, #0xc8]
71030adaa0  cbz x9,0x71030adaac
71030adaa4  mov w10,#0x101
71030adaa8  strh w10,[x9, #0x30]
71030adaac  ldr x9,[x8, #0xd8]
71030adab0  cbz x9,0x71030adabc
71030adab4  mov w10,#0x1
71030adab8  strb w10,[x9, #0x21]
71030adabc  ldrb w9,[x8, #0xe0]
71030adac0  cbz w9,0x71030adacc
71030adac4  ldr x8,[x8, #0xb0]
71030adac8  strb wzr,[x8, #0x10]
71030adacc  str wzr,[x19, #0x1120]
71030adad0  ldr x0,[x19, #0x10c8]
71030adad4  ldr x8,[x0]
71030adad8  ldr x8,[x8, #0x10]
71030adadc  mov v0.16B,v8.16B
71030adae0  blr x8
71030adae4  ldr x0,[x19, #0x10d0]
71030adae8  ldr x8,[x0]
71030adaec  ldr x8,[x8, #0x10]
71030adaf0  mov v0.16B,v8.16B
71030adaf4  blr x8
71030adaf8  mov v0.16B,v8.16B
71030adafc  add x0,x19,#0x980
71030adb00  bl 0x71030af4e0
71030adb04  mov v0.16B,v8.16B
71030adb08  add x0,x19,#0xf50
71030adb0c  bl 0x71030b1680
71030adb10  ldr w8,[x19, #0x1218]
71030adb14  cbz w8,0x71030adb24
71030adb18  subs w8,w8,#0x1
71030adb1c  b.ge 0x71030adb28
71030adb20  b 0x71030adb2c
71030adb24  mov w8,#0xffffffff
71030adb28  str w8,[x19, #0x1218]
71030adb2c  mov v0.16B,v8.16B
71030adb30  mov x0,x19
71030adb34  bl 0x71025dd540
71030adb38  add sp,sp,#0x210
71030adb3c  ldp d9,d8,[sp, #0x10]
71030adb40  ldp x29,x30,[sp, #0x70]
71030adb44  ldp x20,x19,[sp, #0x60]
71030adb48  ldp x22,x21,[sp, #0x50]
71030adb4c  ldp x24,x23,[sp, #0x40]
71030adb50  ldp x26,x25,[sp, #0x30]
71030adb54  ldp x28,x27,[sp, #0x20]
71030adb58  ldr d10,[sp], #0x80
71030adb5c  ret
71030adb60  ldr x8,[x19, #0x300]
71030adb64  ldr x9,[x8, #0x18]
71030adb68  ldp x8,x9,[x9]
71030adb6c  cmp x8,x9
71030adb70  b.eq 0x71030aced4
71030adb74  mov x10,#0x821c
71030adb78  movk x10,#0x81e3, LSL #16
71030adb7c  movk x10,#0xa, LSL #32
71030adb80  ldr x11,[x8], #0x8
71030adb84  ldr x12,[x11, #0xa0]
71030adb88  and x12,x12,#0xffffffffff
71030adb8c  cmp x12,x10
71030adb90  b.eq 0x71030adba0
71030adb94  cmp x9,x8
71030adb98  b.ne 0x71030adb80
71030adb9c  b 0x71030aced4
71030adba0  ldr x25,[x11, #0x110]
71030adba4  mov w8,#0x1
71030adba8  strb w8,[x22, #0x4c]
71030adbac  ldp x22,x23,[x25, #0x18]
71030adbb0  cmp x22,x23
71030adbb4  b.eq 0x71030aced4
71030adbb8  mov w24,#0xf5ac
71030adbbc  movk w24,#0x4f55, LSL #16
71030adbc0  mov x26,x22
71030adbc4  adrp x20,0x71043ab000
71030adbc8  add x20,x20,#0xf32
71030adbcc  ldr x27,[x26]
71030adbd0  ldr w8,[x27, #0x18]
71030adbd4  cmp w8,w24
71030adbd8  b.ne 0x71030adbec
71030adbdc  add x0,x27,#0x20
71030adbe0  mov x1,x20
71030adbe4  bl 0x71039c0060
71030adbe8  cbz w0,0x71030adc3c
71030adbec  add x26,x26,#0x8
71030adbf0  cmp x23,x26
71030adbf4  b.ne 0x71030adbcc
71030adbf8  cmp x22,x23
71030adbfc  b.eq 0x71030aced4
71030adc00  adrp x20,0x7104328000
71030adc04  add x20,x20,#0x552
71030adc08  ldr x25,[x22]
71030adc0c  ldr w8,[x25, #0x18]
71030adc10  add w9,w24,#0x1b0
71030adc14  cmp w8,w9
71030adc18  b.ne 0x71030adc2c
71030adc1c  add x0,x25,#0x20
71030adc20  mov x1,x20
71030adc24  bl 0x71039c0060
71030adc28  cbz w0,0x71030adc64
71030adc2c  add x22,x22,#0x8
71030adc30  cmp x23,x22
71030adc34  b.ne 0x71030adc08
71030adc38  b 0x71030aced4
71030adc3c  cbz x27,0x71030adbf8
71030adc40  ldr x8,[x27, #0x8]
71030adc44  ldr x8,[x8, #0x108]
71030adc48  cbz x8,0x71030adbf8
71030adc4c  mov w9,#0x1
71030adc50  strb w9,[x8, #0x44]
71030adc54  ldp x22,x23,[x25, #0x18]
71030adc58  cmp x22,x23
71030adc5c  b.ne 0x71030adc00
71030adc60  b 0x71030aced4
71030adc64  cbz x25,0x71030aced4
71030adc68  ldr x8,[x25, #0x8]
71030adc6c  ldr x8,[x8, #0x108]
71030adc70  cbz x8,0x71030aced4
71030adc74  mov w9,#0x1
71030adc78  strb w9,[x8, #0x44]
71030adc7c  b 0x71030aced4
71030adc80  adrp x0,0x7105314000
71030adc84  add x0,x0,#0x4d8
71030adc88  bl 0x71039c06b0
71030adc8c  cbz w0,0x71030acfe4
71030adc90  bl 0x7101764000
71030adc94  adrp x0,0x7101763000
71030adc98  add x0,x0,#0xc40
71030adc9c  adrp x1,0x71052c5000
71030adca0  add x1,x1,#0x180
71030adca4  adrp x2,0x7104f17000
71030adca8  add x2,x2,#0x0
71030adcac  bl 0x71000001c0
71030adcb0  adrp x0,0x7105314000
71030adcb4  add x0,x0,#0x4d8
71030adcb8  bl 0x71039c06c0
71030adcbc  b 0x71030acfe4
71030adcc0  adrp x0,0x7105314000
71030adcc4  add x0,x0,#0x4d8
71030adcc8  bl 0x71039c06b0
71030adccc  cbz w0,0x71030ad2b4
71030adcd0  bl 0x7101764000
71030adcd4  adrp x0,0x7101763000
71030adcd8  add x0,x0,#0xc40
71030adcdc  adrp x1,0x71052c5000
71030adce0  add x1,x1,#0x180
71030adce4  adrp x2,0x7104f17000
71030adce8  add x2,x2,#0x0
71030adcec  bl 0x71000001c0
71030adcf0  adrp x0,0x7105314000
71030adcf4  add x0,x0,#0x4d8
71030adcf8  bl 0x71039c06c0
71030adcfc  b 0x71030ad2b4
71030add00  adrp x0,0x7105314000
71030add04  add x0,x0,#0x4d8
71030add08  stp q4,q3,[sp, #0x60]
71030add0c  bl 0x71039c06b0
71030add10  ldp q4,q3,[sp, #0x60]
71030add14  cbz w0,0x71030a9da0
71030add18  bl 0x7101764000
71030add1c  adrp x0,0x7101763000
71030add20  add x0,x0,#0xc40
71030add24  adrp x1,0x71052c5000
71030add28  add x1,x1,#0x180
71030add2c  adrp x2,0x7104f17000
71030add30  add x2,x2,#0x0
71030add34  bl 0x71000001c0
71030add38  adrp x0,0x7105314000
71030add3c  add x0,x0,#0x4d8
71030add40  bl 0x71039c06c0
71030add44  ldp q4,q3,[sp, #0x60]
71030add48  b 0x71030a9da0
71030add4c  adrp x0,0x7105314000
71030add50  add x0,x0,#0x4d8
71030add54  str q3,[sp, #0x70]
71030add58  bl 0x71039c06b0
71030add5c  ldr q3,[sp, #0x70]
71030add60  cbz w0,0x71030a9f10
71030add64  bl 0x7101764000
71030add68  adrp x0,0x7101763000
71030add6c  add x0,x0,#0xc40
71030add70  adrp x1,0x71052c5000
71030add74  add x1,x1,#0x180
71030add78  adrp x2,0x7104f17000
71030add7c  add x2,x2,#0x0
71030add80  bl 0x71000001c0
71030add84  adrp x0,0x7105314000
71030add88  add x0,x0,#0x4d8
71030add8c  bl 0x71039c06c0
71030add90  ldr q3,[sp, #0x70]
71030add94  b 0x71030a9f10
71030add98  adrp x0,0x7105314000
71030add9c  add x0,x0,#0x4d8
71030adda0  bl 0x71039c06b0
71030adda4  cbz w0,0x71030aa07c
71030adda8  bl 0x7101764000
71030addac  adrp x0,0x7101763000
71030addb0  add x0,x0,#0xc40
71030addb4  adrp x1,0x71052c5000
71030addb8  add x1,x1,#0x180
71030addbc  adrp x2,0x7104f17000
71030addc0  add x2,x2,#0x0
71030addc4  bl 0x71000001c0
71030addc8  adrp x0,0x7105314000
71030addcc  add x0,x0,#0x4d8
71030addd0  bl 0x71039c06c0
71030addd4  b 0x71030aa07c
71030addd8  adrp x0,0x7105314000
71030adddc  add x0,x0,#0x4d8
71030adde0  bl 0x71039c06b0
71030adde4  cbz w0,0x71030aa54c
71030adde8  bl 0x7101764000
71030addec  adrp x0,0x7101763000
71030addf0  add x0,x0,#0xc40
71030addf4  adrp x1,0x71052c5000
71030addf8  add x1,x1,#0x180
71030addfc  adrp x2,0x7104f17000
71030ade00  add x2,x2,#0x0
71030ade04  bl 0x71000001c0
71030ade08  adrp x0,0x7105314000
71030ade0c  add x0,x0,#0x4d8
71030ade10  bl 0x71039c06c0
71030ade14  b 0x71030aa54c
71030ade18  adrp x0,0x7105314000
71030ade1c  add x0,x0,#0x4d8
71030ade20  bl 0x71039c06b0
71030ade24  cbz w0,0x71030aa5b8
71030ade28  bl 0x7101764000
71030ade2c  adrp x0,0x7101763000
71030ade30  add x0,x0,#0xc40
71030ade34  adrp x1,0x71052c5000
71030ade38  add x1,x1,#0x180
71030ade3c  adrp x2,0x7104f17000
71030ade40  add x2,x2,#0x0
71030ade44  bl 0x71000001c0
71030ade48  adrp x0,0x7105314000
71030ade4c  add x0,x0,#0x4d8
71030ade50  bl 0x71039c06c0
71030ade54  b 0x71030aa5b8
71030ade58  adrp x0,0x7105314000
71030ade5c  add x0,x0,#0x4d8
71030ade60  bl 0x71039c06b0
71030ade64  cbz w0,0x71030aa624
71030ade68  bl 0x7101764000
71030ade6c  adrp x0,0x7101763000
71030ade70  add x0,x0,#0xc40
71030ade74  adrp x1,0x71052c5000
71030ade78  add x1,x1,#0x180
71030ade7c  adrp x2,0x7104f17000
71030ade80  add x2,x2,#0x0
71030ade84  bl 0x71000001c0
71030ade88  adrp x0,0x7105314000
71030ade8c  add x0,x0,#0x4d8
71030ade90  bl 0x71039c06c0
71030ade94  b 0x71030aa624
