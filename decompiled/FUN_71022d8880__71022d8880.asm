// addr:      71022d8880
// offset:    0x22d8880
// name:      FUN_71022d8880
// mangled:   
// size:      2672

71022d8880  stp x28,x27,[sp, #-0x60]!
71022d8884  stp x26,x25,[sp, #0x10]
71022d8888  stp x24,x23,[sp, #0x20]
71022d888c  stp x22,x21,[sp, #0x30]
71022d8890  stp x20,x19,[sp, #0x40]
71022d8894  stp x29,x30,[sp, #0x50]
71022d8898  add x29,sp,#0x50
71022d889c  sub sp,sp,#0x270
71022d88a0  mov w0,#0x10
71022d88a4  orr w1,wzr,#0xf0
71022d88a8  bl 0x710392e290
71022d88ac  mov x28,x0
71022d88b0  cbnz x0,0x71022d88fc
71022d88b4  adrp x8,0x7105332000
71022d88b8  ldr x0,[x8, #0xf00]
71022d88bc  cbz x0,0x71022d88f8
71022d88c0  orr w8,wzr,#0xf0
71022d88c4  str wzr,[sp, #0x40]
71022d88c8  add x1,sp,#0x40
71022d88cc  str x8,[sp, #0xd8]
71022d88d0  ldr x8,[x0]
71022d88d4  ldr x8,[x8, #0x30]
71022d88d8  add x2,sp,#0xd8
71022d88dc  blr x8
71022d88e0  tbz w0,#0x0,0x71022d88f8
71022d88e4  mov w0,#0x10
71022d88e8  orr w1,wzr,#0xf0
71022d88ec  bl 0x710392e290
71022d88f0  mov x28,x0
71022d88f4  cbnz x0,0x71022d88fc
71022d88f8  mov x28,xzr
71022d88fc  adrp x8,0x71050b6000
71022d8900  add x8,x8,#0x2f0
71022d8904  add x0,x28,#0x50
71022d8908  strb wzr,[x28, #0x10]
71022d890c  stp x8,xzr,[x28]
71022d8910  bl 0x7103724550
71022d8914  adrp x8,0x71050a1000
71022d8918  add x8,x8,#0x70
71022d891c  str x8,[x28, #0x50]
71022d8920  adrp x8,0x71050b7000
71022d8924  add x8,x8,#0x518
71022d8928  strh wzr,[x28, #0xe0]
71022d892c  str wzr,[x28, #0xe4]
71022d8930  str x8,[x28]
71022d8934  adrp x19,0x7105324000
71022d8938  str xzr,[x28, #0xe8]
71022d893c  ldr x8,[x19, #0xee8]
71022d8940  cbnz x8,0x71022d91e4
71022d8944  mov w0,#0x10
71022d8948  mov w1,#0x10
71022d894c  bl 0x710392e290
71022d8950  mov x20,x0
71022d8954  cbnz x0,0x71022d89a0
71022d8958  adrp x8,0x7105332000
71022d895c  ldr x0,[x8, #0xf00]
71022d8960  cbz x0,0x71022d899c
71022d8964  mov w8,#0x10
71022d8968  str wzr,[sp, #0x40]
71022d896c  add x1,sp,#0x40
71022d8970  str x8,[sp, #0xd8]
71022d8974  ldr x8,[x0]
71022d8978  ldr x8,[x8, #0x30]
71022d897c  add x2,sp,#0xd8
71022d8980  blr x8
71022d8984  tbz w0,#0x0,0x71022d899c
71022d8988  mov w0,#0x10
71022d898c  mov w1,#0x10
71022d8990  bl 0x710392e290
71022d8994  mov x20,x0
71022d8998  cbnz x0,0x71022d89a0
71022d899c  mov x20,xzr
71022d89a0  adrp x8,0x71050aa000
71022d89a4  add x8,x8,#0x148
71022d89a8  mov w1,#0x3370
71022d89ac  mov w0,#0x10
71022d89b0  str x8,[x20]
71022d89b4  bl 0x710392e290
71022d89b8  mov x21,x0
71022d89bc  cbnz x0,0x71022d8a08
71022d89c0  adrp x8,0x7105332000
71022d89c4  ldr x0,[x8, #0xf00]
71022d89c8  cbz x0,0x71022d8a04
71022d89cc  mov w8,#0x3370
71022d89d0  str wzr,[sp, #0x40]
71022d89d4  add x1,sp,#0x40
71022d89d8  str x8,[sp, #0xd8]
71022d89dc  ldr x8,[x0]
71022d89e0  ldr x8,[x8, #0x30]
71022d89e4  add x2,sp,#0xd8
71022d89e8  blr x8
71022d89ec  tbz w0,#0x0,0x71022d8a04
71022d89f0  mov w1,#0x3370
71022d89f4  mov w0,#0x10
71022d89f8  bl 0x710392e290
71022d89fc  mov x21,x0
71022d8a00  cbnz x0,0x71022d8a08
71022d8a04  mov x21,xzr
71022d8a08  mov w8,#0xffffffff
71022d8a0c  mov x22,x21
71022d8a10  strb wzr,[x21, #0xa4]
71022d8a14  stp xzr,xzr,[x21, #0x10]
71022d8a18  mov w23,#0x3200
71022d8a1c  stp x21,xzr,[x21]
71022d8a20  mov w1,wzr
71022d8a24  mov x2,x23
71022d8a28  str w8,[x21, #0xa0]
71022d8a2c  stp xzr,x8,[x21, #0x90]
71022d8a30  stp xzr,xzr,[x21, #0x80]
71022d8a34  stp xzr,xzr,[x21, #0x70]
71022d8a38  stp xzr,xzr,[x21, #0x60]
71022d8a3c  stp xzr,xzr,[x21, #0x50]
71022d8a40  stp xzr,xzr,[x21, #0x40]
71022d8a44  stp xzr,xzr,[x21, #0x30]
71022d8a48  stp xzr,xzr,[x21, #0x20]
71022d8a4c  str xzr,[x22, #0xd0]!
71022d8a50  mov x8,x22
71022d8a54  add x0,x22,#0x60
71022d8a58  stur wzr,[x22, #-0x10]
71022d8a5c  str xzr,[x8, #-0x28]!
71022d8a60  str x8,[sp, #0x28]
71022d8a64  mov x8,x22
71022d8a68  stur x22,[x22, #-0x8]
71022d8a6c  stp xzr,xzr,[x22, #-0x20]
71022d8a70  str xzr,[x8, #0x18]!
71022d8a74  str xzr,[x22, #0x30]
71022d8a78  stp xzr,xzr,[x22, #0x20]
71022d8a7c  stp xzr,x8,[x22, #0x8]
71022d8a80  stp xzr,xzr,[x22, #0x48]
71022d8a84  stp xzr,xzr,[x22, #0x38]
71022d8a88  bl 0x71039c02a0
71022d8a8c  mov w8,#0x3260
71022d8a90  mov x9,xzr
71022d8a94  mov w10,#0x1
71022d8a98  add x8,x22,x8
71022d8a9c  add x11,x21,x9
71022d8aa0  add x9,x9,#0x100
71022d8aa4  cmp x9,x23
71022d8aa8  str xzr,[x11, #0x190]
71022d8aac  strb wzr,[x11, #0x1a0]
71022d8ab0  str xzr,[x11, #0x130]
71022d8ab4  stp xzr,xzr,[x11, #0x138]
71022d8ab8  str w10,[x11, #0x144]
71022d8abc  str xzr,[x11, #0x210]
71022d8ac0  strb wzr,[x11, #0x220]
71022d8ac4  str xzr,[x11, #0x1b0]
71022d8ac8  stp xzr,xzr,[x11, #0x1b8]
71022d8acc  str w10,[x11, #0x1c4]
71022d8ad0  b.ne 0x71022d8a9c
71022d8ad4  stp xzr,xzr,[x8, #0x28]
71022d8ad8  adrp x9,0x7101aef000
71022d8adc  add x9,x9,#0x90
71022d8ae0  stp xzr,xzr,[x8, #0x18]
71022d8ae4  str xzr,[x8]
71022d8ae8  stp xzr,xzr,[x8, #0x8]
71022d8aec  mov w8,#0x1
71022d8af0  str w8,[x21, #0x3368]
71022d8af4  ldrsw x8,[x21, #0x94]
71022d8af8  cmp w8,#0x13
71022d8afc  stp x9,xzr,[x21, #0x28]
71022d8b00  adrp x9,0x7101aef000
71022d8b04  add x9,x9,#0xa0
71022d8b08  stp x9,xzr,[x21, #0x38]
71022d8b0c  b.cs 0x71022d92e4
71022d8b10  add x8,x21,x8, LSL #0x2
71022d8b14  str wzr,[x8, #0x48]
71022d8b18  ldr x8,[x21, #0xa8]
71022d8b1c  ldr x0,[x21, #0xd0]
71022d8b20  str x8,[x21, #0xb0]
71022d8b24  bl 0x7101aef220
71022d8b28  ldr x8,[x21, #0xb8]
71022d8b2c  ldr x23,[x21, #0xa8]
71022d8b30  str x22,[x21, #0xc8]
71022d8b34  stp xzr,xzr,[x21, #0xd0]
71022d8b38  sub x8,x8,x23
71022d8b3c  asr x8,x8,#0x2
71022d8b40  cmp x8,#0x63
71022d8b44  str x22,[sp, #0x30]
71022d8b48  b.hi 0x71022d8bf8
71022d8b4c  ldr x8,[x21, #0xb0]
71022d8b50  sub x24,x8,x23
71022d8b54  mov w1,#0x190
71022d8b58  mov w0,#0x10
71022d8b5c  mov x26,x20
71022d8b60  mov x22,x19
71022d8b64  asr x19,x24,#0x2
71022d8b68  bl 0x710392e290
71022d8b6c  mov x25,x0
71022d8b70  cbnz x0,0x71022d8bbc
71022d8b74  adrp x8,0x7105332000
71022d8b78  ldr x0,[x8, #0xf00]
71022d8b7c  cbz x0,0x71022d8bb8
71022d8b80  mov w8,#0x190
71022d8b84  str wzr,[sp, #0x40]
71022d8b88  add x1,sp,#0x40
71022d8b8c  str x8,[sp, #0xd8]
71022d8b90  ldr x8,[x0]
71022d8b94  ldr x8,[x8, #0x30]
71022d8b98  add x2,sp,#0xd8
71022d8b9c  blr x8
71022d8ba0  tbz w0,#0x0,0x71022d8bb8
71022d8ba4  mov w1,#0x190
71022d8ba8  mov w0,#0x10
71022d8bac  bl 0x710392e290
71022d8bb0  mov x25,x0
71022d8bb4  cbnz x0,0x71022d8bbc
71022d8bb8  mov x25,xzr
71022d8bbc  add x20,x25,x19, LSL #0x2
71022d8bc0  add x19,x25,#0x190
71022d8bc4  cmp x24,#0x1
71022d8bc8  b.lt 0x71022d8bdc
71022d8bcc  mov x0,x25
71022d8bd0  mov x1,x23
71022d8bd4  mov x2,x24
71022d8bd8  bl 0x71039c00e0
71022d8bdc  stp x25,x20,[x21, #0xa8]
71022d8be0  mov x20,x26
71022d8be4  str x19,[x21, #0xb8]
71022d8be8  mov x19,x22
71022d8bec  cbz x23,0x71022d8bf8
71022d8bf0  mov x0,x23
71022d8bf4  bl 0x710392eb40
71022d8bf8  sub x0,x29,#0x70
71022d8bfc  bl 0x710353ad40
71022d8c00  mov x8,xzr
71022d8c04  sub x9,x29,#0xb8
71022d8c08  adrp x10,0x7104421000
71022d8c0c  add x10,x10,#0xa91
71022d8c10  stur xzr,[x29, #-0xb8]
71022d8c14  b 0x71022d8c20
71022d8c18  add x8,x8,#0x2
71022d8c1c  strb w12,[x11, #0x9]
71022d8c20  add x12,x10,x8
71022d8c24  ldrb w13,[x12]
71022d8c28  cbz w13,0x71022d8c40
71022d8c2c  ldrb w12,[x12, #0x1]
71022d8c30  add x11,x9,x8
71022d8c34  strb w13,[x11, #0x8]
71022d8c38  cbnz w12,0x71022d8c18
71022d8c3c  add x8,x8,#0x1
71022d8c40  sub x9,x29,#0xb8
71022d8c44  add x24,x9,#0x8
71022d8c48  mov w26,#0x9dc5
71022d8c4c  movk w26,#0x811c, LSL #16
71022d8c50  mov w10,w26
71022d8c54  strb wzr,[x24, w8, UXTW ]
71022d8c58  stur w8,[x29, #-0xb4]
71022d8c5c  ldurb w8,[x29, #-0xb0]
71022d8c60  cbz w8,0x71022d8c84
71022d8c64  add x9,x9,#0x9
71022d8c68  mov w11,#0x89
71022d8c6c  mov w10,w26
71022d8c70  mul w10,w10,w11
71022d8c74  and w8,w8,#0xff
71022d8c78  eor w10,w10,w8
71022d8c7c  ldrb w8,[x9], #0x1
71022d8c80  cbnz w8,0x71022d8c70
71022d8c84  mov x0,x24
71022d8c88  stur w10,[x29, #-0xb8]
71022d8c8c  strh wzr,[sp, #0x1d8]
71022d8c90  strb wzr,[sp, #0xd8]
71022d8c94  str wzr,[sp, #0x1e8]
71022d8c98  bl 0x710353ba40
71022d8c9c  tbz w0,#0x0,0x71022d91c8
71022d8ca0  ldur x22,[x29, #-0x70]
71022d8ca4  ldr x8,[x22]
71022d8ca8  ldr x9,[x8, #0x10]
71022d8cac  add x8,sp,#0x40
71022d8cb0  mov x0,x22
71022d8cb4  mov x1,x24
71022d8cb8  blr x9
71022d8cbc  ldr w8,[sp, #0x40]
71022d8cc0  lsr w8,w8,#0x1f
71022d8cc4  eor w9,w8,#0x1
71022d8cc8  strb w9,[x22, #0x234]
71022d8ccc  cbnz w8,0x71022d91c8
71022d8cd0  sub x0,x29,#0x70
71022d8cd4  add x1,sp,#0xd8
71022d8cd8  stp x22,x20,[sp, #0x8]
71022d8cdc  bl 0x710353aea0
71022d8ce0  ldr x24,[sp, #0x30]
71022d8ce4  tbz w0,#0x0,0x71022d919c
71022d8ce8  add x8,sp,#0x90
71022d8cec  add x9,sp,#0x40
71022d8cf0  add x23,x9,#0xc
71022d8cf4  add x20,x8,#0x9
71022d8cf8  add x8,x9,#0xd
71022d8cfc  str x8,[sp, #0x38]
71022d8d00  mov w19,#0x89
71022d8d04  str x28,[sp, #0x20]
71022d8d08  ldrb w8,[sp, #0x1e8]
71022d8d0c  tbnz w8,#0x4,0x71022d918c
71022d8d10  ldr w8,[x21, #0xc0]
71022d8d14  add w22,w8,#0x1
71022d8d18  str w22,[x21, #0xc0]
71022d8d1c  ldp x9,x8,[x21, #0xb0]
71022d8d20  cmp x9,x8
71022d8d24  b.eq 0x71022d8d3c
71022d8d28  str w22,[x9]
71022d8d2c  ldr x8,[x21, #0xb0]
71022d8d30  add x8,x8,#0x4
71022d8d34  str x8,[x21, #0xb0]
71022d8d38  b 0x71022d8e40
71022d8d3c  ldr x10,[sp, #0x28]
71022d8d40  ldr x25,[x10]
71022d8d44  sub x26,x9,x25
71022d8d48  asr x28,x26,#0x2
71022d8d4c  add x9,x28,#0x1
71022d8d50  lsr x10,x9,#0x3e
71022d8d54  cbnz x10,0x71022d92e8
71022d8d58  sub x8,x8,x25
71022d8d5c  asr x10,x8,#0x2
71022d8d60  orr x11,xzr,#0x1ffffffffffffffe
71022d8d64  cmp x10,x11
71022d8d68  b.hi 0x71022d8d88
71022d8d6c  asr x8,x8,#0x1
71022d8d70  cmp x8,x9
71022d8d74  csel x24,x9,x8,cc
71022d8d78  cbz x24,0x71022d8df0
71022d8d7c  lsr x8,x24,#0x3e
71022d8d80  cbz x8,0x71022d8d8c
71022d8d84  b 0x71022d92e4
71022d8d88  orr x24,xzr,#0x3fffffffffffffff
71022d8d8c  lsl x8,x24,#0x2
71022d8d90  cmp x8,#0x0
71022d8d94  csinc x1,x8,xzr,ne
71022d8d98  mov w0,#0x10
71022d8d9c  str x1,[sp, #0x18]
71022d8da0  bl 0x710392e290
71022d8da4  mov x27,x0
71022d8da8  cbnz x0,0x71022d8df4
71022d8dac  adrp x8,0x7105332000
71022d8db0  ldr x0,[x8, #0xf00]
71022d8db4  cbz x0,0x71022d8df0
71022d8db8  ldr x8,[sp, #0x18]
71022d8dbc  str wzr,[sp, #0x90]
71022d8dc0  add x1,sp,#0x90
71022d8dc4  add x2,sp,#0x40
71022d8dc8  str x8,[sp, #0x40]
71022d8dcc  ldr x8,[x0]
71022d8dd0  ldr x8,[x8, #0x30]
71022d8dd4  blr x8
71022d8dd8  tbz w0,#0x0,0x71022d8df0
71022d8ddc  ldr x1,[sp, #0x18]
71022d8de0  mov w0,#0x10
71022d8de4  bl 0x710392e290
71022d8de8  mov x27,x0
71022d8dec  cbnz x0,0x71022d8df4
71022d8df0  mov x27,xzr
71022d8df4  add x28,x27,x28, LSL #0x2
71022d8df8  add x24,x27,x24, LSL #0x2
71022d8dfc  cmp x26,#0x1
71022d8e00  str w22,[x28], #0x4
71022d8e04  b.lt 0x71022d8e18
71022d8e08  mov x0,x27
71022d8e0c  mov x1,x25
71022d8e10  mov x2,x26
71022d8e14  bl 0x71039c00e0
71022d8e18  stp x27,x28,[x21, #0xa8]
71022d8e1c  ldr x28,[sp, #0x20]
71022d8e20  str x24,[x21, #0xb8]
71022d8e24  ldr x24,[sp, #0x30]
71022d8e28  mov w26,#0x9dc5
71022d8e2c  movk w26,#0x811c, LSL #16
71022d8e30  add x13,sp,#0x90
71022d8e34  cbz x25,0x71022d8e44
71022d8e38  mov x0,x25
71022d8e3c  bl 0x710392eb40
71022d8e40  add x13,sp,#0x90
71022d8e44  mov x8,#0x6173
71022d8e48  movk x8,#0x6576, LSL #16
71022d8e4c  movk x8,#0x2f3a, LSL #32
71022d8e50  movk x8,#0x6173, LSL #48
71022d8e54  stp xzr,x8,[sp, #0x90]
71022d8e58  mov x8,#0x6576
71022d8e5c  movk x8,#0x645f, LSL #16
71022d8e60  movk x8,#0x7461, LSL #32
71022d8e64  movk x8,#0x2f61, LSL #48
71022d8e68  str x8,[sp, #0xa0]
71022d8e6c  mov w8,#0x6572
71022d8e70  movk w8,#0x6c70, LSL #16
71022d8e74  str w8,[sp, #0xa8]
71022d8e78  mov w8,#0x7961
71022d8e7c  strh w8,[sp, #0xac]
71022d8e80  mov w8,#0x16
71022d8e84  str w8,[sp, #0x94]
71022d8e88  ldrb w8,[sp, #0x98]
71022d8e8c  mov w9,w26
71022d8e90  strb wzr,[sp, #0xae]
71022d8e94  cbz w8,0x71022d8eb4
71022d8e98  mov x10,x20
71022d8e9c  mov w9,w26
71022d8ea0  mul w9,w9,w19
71022d8ea4  and w8,w8,#0xff
71022d8ea8  eor w9,w9,w8
71022d8eac  ldrb w8,[x10], #0x1
71022d8eb0  cbnz w8,0x71022d8ea0
71022d8eb4  mov w8,#0x17
71022d8eb8  stp w9,w8,[sp, #0x90]
71022d8ebc  mov w8,#0x2f
71022d8ec0  strh w8,[sp, #0xae]
71022d8ec4  ldrb w8,[sp, #0x98]
71022d8ec8  mov w9,w26
71022d8ecc  cbz w8,0x71022d8eec
71022d8ed0  mov x10,x20
71022d8ed4  mov w9,w26
71022d8ed8  mul w9,w9,w19
71022d8edc  and w8,w8,#0xff
71022d8ee0  eor w9,w9,w8
71022d8ee4  ldrb w8,[x10], #0x1
71022d8ee8  cbnz w8,0x71022d8ed8
71022d8eec  str w9,[sp, #0x90]
71022d8ef0  ldr w9,[sp, #0x94]
71022d8ef4  cmp w9,#0x3e
71022d8ef8  b.gt 0x71022d8f34
71022d8efc  add x8,sp,#0xd8
71022d8f00  sub w9,w9,#0x1
71022d8f04  ldrb w10,[x8]
71022d8f08  cbz w10,0x71022d8f30
71022d8f0c  ldrsw x11,[sp, #0x94]
71022d8f10  add w9,w9,#0x1
71022d8f14  add x8,x8,#0x1
71022d8f18  add w12,w11,#0x1
71022d8f1c  add x11,x13,x11
71022d8f20  cmp w9,#0x3e
71022d8f24  str w12,[sp, #0x94]
71022d8f28  strb w10,[x11, #0x8]
71022d8f2c  b.lt 0x71022d8f04
71022d8f30  ldr w9,[sp, #0x94]
71022d8f34  add x8,x13,#0x8
71022d8f38  strb wzr,[x8, w9, SXTW ]
71022d8f3c  ldrb w8,[sp, #0x98]
71022d8f40  cbz w8,0x71022d8f98
71022d8f44  ldr x12,[sp, #0x38]
71022d8f48  mov x9,x20
71022d8f4c  mov w10,w8
71022d8f50  mov w11,w26
71022d8f54  mul w11,w11,w19
71022d8f58  and w10,w10,#0xff
71022d8f5c  eor w11,w11,w10
71022d8f60  ldrb w10,[x9], #0x1
71022d8f64  cbnz w10,0x71022d8f54
71022d8f68  mov x10,xzr
71022d8f6c  str w11,[sp, #0x90]
71022d8f70  stp w22,wzr,[sp, #0x40]
71022d8f74  add w9,w10,#0x1
71022d8f78  cmp w9,#0x3e
71022d8f7c  strb w8,[x23, x10, LSL ]
71022d8f80  b.hi 0x71022d8fac
71022d8f84  ldrb w8,[x20, x10, LSL ]
71022d8f88  add x9,x10,#0x1
71022d8f8c  mov x10,x9
71022d8f90  cbnz w8,0x71022d8f74
71022d8f94  b 0x71022d8fb0
71022d8f98  ldr x12,[sp, #0x38]
71022d8f9c  mov x9,xzr
71022d8fa0  str w26,[sp, #0x90]
71022d8fa4  stp w22,wzr,[sp, #0x40]
71022d8fa8  b 0x71022d8fb0
71022d8fac  add w9,w10,#0x1
71022d8fb0  add x8,sp,#0x40
71022d8fb4  add x8,x8,w9, UXTW 
71022d8fb8  strb wzr,[x8, #0xc]
71022d8fbc  ldrb w27,[sp, #0x4c]
71022d8fc0  mov w8,w26
71022d8fc4  str w9,[sp, #0x48]
71022d8fc8  cbz w27,0x71022d8fec
71022d8fcc  mov x9,x12
71022d8fd0  mov w10,w27
71022d8fd4  mov w8,w26
71022d8fd8  mul w8,w8,w19
71022d8fdc  and w10,w10,#0xff
71022d8fe0  eor w8,w8,w10
71022d8fe4  ldrb w10,[x9], #0x1
71022d8fe8  cbnz w10,0x71022d8fd8
71022d8fec  str w8,[sp, #0x44]
71022d8ff0  ldr x25,[x24]
71022d8ff4  cbz x25,0x71022d903c
71022d8ff8  mov x26,x24
71022d8ffc  b 0x71022d9008
71022d9000  mov x26,x25
71022d9004  mov x25,x8
71022d9008  ldr w8,[x25, #0x1c]
71022d900c  cmp w22,w8
71022d9010  b.cs 0x71022d9020
71022d9014  ldr x8,[x25]
71022d9018  cbnz x8,0x71022d9000
71022d901c  b 0x71022d90fc
71022d9020  cmp w8,w22
71022d9024  b.cs 0x71022d9044
71022d9028  mov x26,x25
71022d902c  ldr x8,[x26, #0x8]!
71022d9030  cbz x8,0x71022d9044
71022d9034  mov x25,x8
71022d9038  b 0x71022d9008
71022d903c  mov x25,x24
71022d9040  mov x26,x24
71022d9044  ldr x8,[x26]
71022d9048  cbnz x8,0x71022d9184
71022d904c  mov w0,#0x10
71022d9050  mov w1,#0x68
71022d9054  bl 0x710392e290
71022d9058  mov x1,x0
71022d905c  cbnz x0,0x71022d90a8
71022d9060  adrp x8,0x7105332000
71022d9064  ldr x0,[x8, #0xf00]
71022d9068  cbz x0,0x71022d90a4
71022d906c  mov w8,#0x68
71022d9070  stur wzr,[x29, #-0x5c]
71022d9074  sub x1,x29,#0x5c
71022d9078  stur x8,[x29, #-0x68]
71022d907c  ldr x8,[x0]
71022d9080  ldr x8,[x8, #0x30]
71022d9084  sub x2,x29,#0x68
71022d9088  blr x8
71022d908c  tbz w0,#0x0,0x71022d90a4
71022d9090  mov w0,#0x10
71022d9094  mov w1,#0x68
71022d9098  bl 0x710392e290
71022d909c  mov x1,x0
71022d90a0  cbnz x0,0x71022d90a8
71022d90a4  mov x1,xzr
71022d90a8  stp w22,wzr,[x1, #0x1c]
71022d90ac  ldr x12,[sp, #0x38]
71022d90b0  mov x8,xzr
71022d90b4  tst w27,#0xff
71022d90b8  b.ne 0x71022d90d8
71022d90bc  b 0x71022d9110
71022d90c0  add x11,x12,x8
71022d90c4  strb w10,[x9, #0x29]
71022d90c8  ldrb w27,[x11, #0x1]
71022d90cc  add x8,x8,#0x2
71022d90d0  tst w27,#0xff
71022d90d4  b.eq 0x71022d9110
71022d90d8  add w10,w8,#0x1
71022d90dc  add x9,x1,x8
71022d90e0  cmp w10,#0x3f
71022d90e4  strb w27,[x9, #0x28]
71022d90e8  b.cs 0x71022d910c
71022d90ec  ldrb w10,[x12, x8, LSL ]
71022d90f0  cbnz w10,0x71022d90c0
71022d90f4  add x8,x8,#0x1
71022d90f8  b 0x71022d9110
71022d90fc  mov x26,x25
71022d9100  ldr x8,[x26]
71022d9104  cbnz x8,0x71022d9184
71022d9108  b 0x71022d904c
71022d910c  add w8,w8,#0x1
71022d9110  add x9,x1,w8, UXTW 
71022d9114  strb wzr,[x9, #0x28]
71022d9118  str w8,[x1, #0x24]
71022d911c  ldrb w8,[x1, #0x28]
71022d9120  mov w10,#0x9dc5
71022d9124  movk w10,#0x811c, LSL #16
71022d9128  cbz w8,0x71022d914c
71022d912c  add x9,x1,#0x29
71022d9130  mov w10,#0x9dc5
71022d9134  movk w10,#0x811c, LSL #16
71022d9138  mul w10,w10,w19
71022d913c  and w8,w8,#0xff
71022d9140  eor w10,w10,w8
71022d9144  ldrb w8,[x9], #0x1
71022d9148  cbnz w8,0x71022d9138
71022d914c  str w10,[x1, #0x20]
71022d9150  stp xzr,xzr,[x1]
71022d9154  str x25,[x1, #0x10]
71022d9158  str x1,[x26]
71022d915c  ldr x8,[x21, #0xc8]
71022d9160  ldr x8,[x8]
71022d9164  cbz x8,0x71022d9170
71022d9168  str x8,[x21, #0xc8]
71022d916c  ldr x1,[x26]
71022d9170  ldr x0,[x21, #0xd0]
71022d9174  bl 0x71003e59f0
71022d9178  ldr x8,[x21, #0xd8]
71022d917c  add x8,x8,#0x1
71022d9180  str x8,[x21, #0xd8]
71022d9184  mov w26,#0x9dc5
71022d9188  movk w26,#0x811c, LSL #16
71022d918c  sub x0,x29,#0x70
71022d9190  add x1,sp,#0xd8
71022d9194  bl 0x710353aea0
71022d9198  tbnz w0,#0x0,0x71022d8d08
71022d919c  ldr x19,[sp, #0x8]
71022d91a0  ldrb w8,[x19, #0x234]
71022d91a4  cbz w8,0x71022d91c0
71022d91a8  ldr x8,[x19]
71022d91ac  ldr x9,[x8, #0x20]
71022d91b0  add x8,sp,#0x40
71022d91b4  mov x0,x19
71022d91b8  blr x9
71022d91bc  strb wzr,[x19, #0x234]
71022d91c0  ldr x20,[sp, #0x10]
71022d91c4  adrp x19,0x7105324000
71022d91c8  ldur x0,[x29, #-0x70]
71022d91cc  cbz x0,0x71022d91dc
71022d91d0  ldr x8,[x0]
71022d91d4  ldr x8,[x8, #0x8]
71022d91d8  blr x8
71022d91dc  str x21,[x20, #0x8]
71022d91e0  str x20,[x19, #0xee8]
71022d91e4  adrp x19,0x710532f000
71022d91e8  ldr x8,[x19, #0x860]
71022d91ec  cbnz x8,0x71022d92c0
71022d91f0  mov w0,#0x10
71022d91f4  mov w1,#0x8
71022d91f8  bl 0x710392e290
71022d91fc  mov x20,x0
71022d9200  cbnz x0,0x71022d924c
71022d9204  adrp x8,0x7105332000
71022d9208  ldr x0,[x8, #0xf00]
71022d920c  cbz x0,0x71022d9248
71022d9210  mov w8,#0x8
71022d9214  str wzr,[sp, #0x40]
71022d9218  add x1,sp,#0x40
71022d921c  str x8,[sp, #0xd8]
71022d9220  ldr x8,[x0]
71022d9224  ldr x8,[x8, #0x30]
71022d9228  add x2,sp,#0xd8
71022d922c  blr x8
71022d9230  tbz w0,#0x0,0x71022d9248
71022d9234  mov w0,#0x10
71022d9238  mov w1,#0x8
71022d923c  bl 0x710392e290
71022d9240  mov x20,x0
71022d9244  cbnz x0,0x71022d924c
71022d9248  mov x20,xzr
71022d924c  mov w0,#0x10
71022d9250  mov w1,#0x20
71022d9254  bl 0x710392e290
71022d9258  cbnz x0,0x71022d92a0
71022d925c  adrp x8,0x7105332000
71022d9260  ldr x0,[x8, #0xf00]
71022d9264  cbz x0,0x71022d929c
71022d9268  mov w8,#0x20
71022d926c  str wzr,[sp, #0x40]
71022d9270  add x1,sp,#0x40
71022d9274  str x8,[sp, #0xd8]
71022d9278  ldr x8,[x0]
71022d927c  ldr x8,[x8, #0x30]
71022d9280  add x2,sp,#0xd8
71022d9284  blr x8
71022d9288  tbz w0,#0x0,0x71022d929c
71022d928c  mov w0,#0x10
71022d9290  mov w1,#0x20
71022d9294  bl 0x710392e290
71022d9298  cbnz x0,0x71022d92a0
71022d929c  mov x0,xzr
71022d92a0  mov x8,x0
71022d92a4  mov w9,#0x1
71022d92a8  str xzr,[x0, #0x10]
71022d92ac  str xzr,[x8, #0x8]!
71022d92b0  str x8,[x0]
71022d92b4  str w9,[x0, #0x18]
71022d92b8  str x0,[x20]
71022d92bc  str x20,[x19, #0x860]
71022d92c0  mov x0,x28
71022d92c4  add sp,sp,#0x270
71022d92c8  ldp x29,x30,[sp, #0x50]
71022d92cc  ldp x20,x19,[sp, #0x40]
71022d92d0  ldp x22,x21,[sp, #0x30]
71022d92d4  ldp x24,x23,[sp, #0x20]
71022d92d8  ldp x26,x25,[sp, #0x10]
71022d92dc  ldp x28,x27,[sp], #0x60
71022d92e0  ret
71022d92e4  bl 0x71039c2650
71022d92e8  ldr x0,[sp, #0x28]
71022d92ec  bl 0x71039c0c00
