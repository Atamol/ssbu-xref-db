// addr:      71016a5980
// offset:    0x16a5980
// name:      FUN_71016a5980
// mangled:   
// size:      1396

71016a5980  ldr x8,[x0, #0x8]
71016a5984  ldr x8,[x8, #0x8]
71016a5988  ldr x8,[x8, #0x80]
71016a598c  ldrb w8,[x8, #0x244]
71016a5990  cbz w8,0x71016a5998
71016a5994  ret
71016a5998  stp x28,x27,[sp, #-0x60]!
71016a599c  stp x26,x25,[sp, #0x10]
71016a59a0  stp x24,x23,[sp, #0x20]
71016a59a4  stp x22,x21,[sp, #0x30]
71016a59a8  stp x20,x19,[sp, #0x40]
71016a59ac  stp x29,x30,[sp, #0x50]
71016a59b0  add x29,sp,#0x50
71016a59b4  sub sp,sp,#0x6c0
71016a59b8  adrp x8,0x710533a000
71016a59bc  ldr x24,[x8, #0xa0]
71016a59c0  ldr x8,[x24, #0x30]
71016a59c4  mov x19,x0
71016a59c8  cbz x8,0x71016a5a04
71016a59cc  ldr x8,[x8, #0x2108]
71016a59d0  cbz x8,0x71016a5a04
71016a59d4  mov w9,#0x6980
71016a59d8  movk w9,#0x2, LSL #16
71016a59dc  add x0,x19,x9
71016a59e0  mov w9,#0xa048
71016a59e4  movk w9,#0x42, LSL #16
71016a59e8  str x0,[x8, x9, LSL #0x0]
71016a59ec  mov w9,#0x6988
71016a59f0  movk w9,#0x2, LSL #16
71016a59f4  str x8,[x19, x9, LSL #0x0]
71016a59f8  ldr x8,[x0]
71016a59fc  ldr x8,[x8, #0x18]
71016a5a00  blr x8
71016a5a04  add x0,sp,#0x3a8
71016a5a08  add x21,sp,#0x3a8
71016a5a0c  bl 0x7101695c80
71016a5a10  mov w20,#0x308
71016a5a14  add x0,sp,#0xa0
71016a5a18  mov w1,wzr
71016a5a1c  mov x2,x20
71016a5a20  add x22,sp,#0xa0
71016a5a24  bl 0x71039c02a0
71016a5a28  adrp x8,0x7105083000
71016a5a2c  add x8,x8,#0x180
71016a5a30  adrp x10,0x7105083000
71016a5a34  add x10,x10,#0x1a0
71016a5a38  stp x8,x10,[sp, #0x10]
71016a5a3c  adrp x8,0x7105083000
71016a5a40  add x8,x8,#0x1c0
71016a5a44  orr x10,x21,#0x2
71016a5a48  stp x21,x8,[sp, #0x20]
71016a5a4c  str x10,[sp, #0x30]
71016a5a50  add x8,x21,#0x1c
71016a5a54  adrp x10,0x7105083000
71016a5a58  add x10,x10,#0x1e0
71016a5a5c  stp x10,x8,[sp, #0x38]
71016a5a60  add x8,x21,#0x30
71016a5a64  adrp x10,0x7105083000
71016a5a68  add x10,x10,#0x200
71016a5a6c  add x9,sp,#0x10
71016a5a70  stp x10,x8,[sp, #0x48]
71016a5a74  adrp x8,0x7105083000
71016a5a78  add x8,x8,#0x220
71016a5a7c  add x10,x21,#0x40
71016a5a80  add x0,x9,#0x8
71016a5a84  stp x8,x10,[sp, #0x58]
71016a5a88  add x8,x21,#0x50
71016a5a8c  adrp x10,0x7105083000
71016a5a90  add x10,x10,#0x240
71016a5a94  add x1,sp,#0x90
71016a5a98  stp x10,x8,[sp, #0x68]
71016a5a9c  add x8,x21,#0x110
71016a5aa0  adrp x10,0x7105083000
71016a5aa4  add x10,x10,#0x260
71016a5aa8  str wzr,[sp, #0x78]
71016a5aac  stp x22,x20,[sp, #0x90]
71016a5ab0  add x20,x9,#0x70
71016a5ab4  stp x10,x8,[sp, #0x80]
71016a5ab8  bl 0x7101697850
71016a5abc  ldr x8,[sp, #0x80]
71016a5ac0  ldr x8,[x8]
71016a5ac4  add x1,sp,#0x90
71016a5ac8  mov x0,x20
71016a5acc  blr x8
71016a5ad0  adrp x8,0x71052b9000
71016a5ad4  add x8,x8,#0x2e0
71016a5ad8  ldr w25,[sp, #0x9c]
71016a5adc  ldarb w8,[x8]
71016a5ae0  tbz w8,#0x0,0x71016a5ed4
71016a5ae4  adrp x8,0x710593b000
71016a5ae8  ldr x8,[x8, #0x580]
71016a5aec  ldr x8,[x8]
71016a5af0  mov w9,#0x7300
71016a5af4  ldr w26,[x8, x9, LSL #0x0]
71016a5af8  bl 0x7103755220
71016a5afc  mov w21,w0
71016a5b00  mov w1,#0x28
71016a5b04  mov w0,#0x10
71016a5b08  bl 0x710392e290
71016a5b0c  mov x20,x0
71016a5b10  cbnz x0,0x71016a5b5c
71016a5b14  adrp x8,0x7105332000
71016a5b18  ldr x0,[x8, #0xf00]
71016a5b1c  cbz x0,0x71016a5b58
71016a5b20  mov w8,#0x28
71016a5b24  stur wzr,[x29, #-0x5c]
71016a5b28  sub x1,x29,#0x5c
71016a5b2c  str x8,[sp, #0x10]
71016a5b30  ldr x8,[x0]
71016a5b34  ldr x8,[x8, #0x30]
71016a5b38  add x2,sp,#0x10
71016a5b3c  blr x8
71016a5b40  tbz w0,#0x0,0x71016a5b58
71016a5b44  mov w1,#0x28
71016a5b48  mov w0,#0x10
71016a5b4c  bl 0x710392e290
71016a5b50  mov x20,x0
71016a5b54  cbnz x0,0x71016a5b5c
71016a5b58  mov x20,xzr
71016a5b5c  mov w8,#0x1
71016a5b60  str w8,[x20, #0x8]
71016a5b64  adrp x8,0x7105083000
71016a5b68  add x8,x8,#0x120
71016a5b6c  str x8,[x20]
71016a5b70  adrp x8,0x7101698000
71016a5b74  add x8,x8,#0x0
71016a5b78  stp x19,x8,[x20, #0x10]
71016a5b7c  str xzr,[x20, #0x20]
71016a5b80  ldr x22,[x24, #0x30]
71016a5b84  cbz x22,0x71016a5bc4
71016a5b88  add x23,x22,#0x40
71016a5b8c  mov x0,x23
71016a5b90  bl 0x71039c1a40
71016a5b94  ldr x27,[x22, #0x28]
71016a5b98  ldr x9,[x22, #0x18]
71016a5b9c  add x8,x27,#0x118
71016a5ba0  cmp x8,x9
71016a5ba4  b.ls 0x71016a5bd4
71016a5ba8  ldr x27,[x22, #0x10]
71016a5bac  ldr x9,[x22, #0x20]
71016a5bb0  add x8,x27,#0x118
71016a5bb4  cmp x8,x9
71016a5bb8  b.ls 0x71016a5bd4
71016a5bbc  mov x0,x23
71016a5bc0  bl 0x71039c1a50
71016a5bc4  mov w23,wzr
71016a5bc8  str w23,[x19, #0x70]
71016a5bcc  cbnz x20,0x71016a5e14
71016a5bd0  b 0x71016a5e2c
71016a5bd4  str x8,[x22, #0x28]
71016a5bd8  stp xzr,xzr,[x27]
71016a5bdc  ldr x8,[x22, #0x30]
71016a5be0  str w26,[sp, #0xc]
71016a5be4  cbz x8,0x71016a5c00
71016a5be8  ldr x8,[x22, #0x38]!
71016a5bec  str x8,[x27]
71016a5bf0  ldr x8,[x22]
71016a5bf4  mov w26,w25
71016a5bf8  str x27,[x8, #0x8]
71016a5bfc  b 0x71016a5c0c
71016a5c00  mov w26,w25
71016a5c04  str x27,[x22, #0x30]
71016a5c08  add x22,x22,#0x38
71016a5c0c  str x27,[x22]
71016a5c10  mov x22,x27
71016a5c14  adrp x8,0x710509d000
71016a5c18  add x8,x8,#0xfd8
71016a5c1c  mov w25,#0x1
71016a5c20  str xzr,[x22, #0x48]!
71016a5c24  stp x8,xzr,[x22, #-0x38]
71016a5c28  adrp x8,0x7104338000
71016a5c2c  add x8,x8,#0xcee
71016a5c30  mov x28,x22
71016a5c34  mov x0,x22
71016a5c38  stur x8,[x22, #-0x28]
71016a5c3c  stur wzr,[x22, #-0x20]
71016a5c40  stur xzr,[x22, #-0x10]
71016a5c44  str xzr,[x28, #-0x18]!
71016a5c48  stur w25,[x22, #-0x8]
71016a5c4c  str xzr,[x22, #0x8]
71016a5c50  stp xzr,xzr,[x22, #0x10]
71016a5c54  bl 0x71039c26d0
71016a5c58  add x0,x22,#0x2c
71016a5c5c  strb wzr,[x22, #0x2a]
71016a5c60  strh wzr,[x22, #0x28]
71016a5c64  str xzr,[x22, #0x20]
71016a5c68  bl 0x71039c0a80
71016a5c6c  strb wzr,[x22, #0x38]
71016a5c70  str xzr,[x22, #0x40]
71016a5c74  adrp x8,0x710593b000
71016a5c78  strb wzr,[x22, #0x48]
71016a5c7c  str xzr,[x22, #0x50]
71016a5c80  ldr w10,[x8]
71016a5c84  add w9,w10,#0x1
71016a5c88  str w9,[x8]
71016a5c8c  stur w10,[x22, #-0x20]
71016a5c90  cbnz w10,0x71016a5ca0
71016a5c94  mov w10,#0x2
71016a5c98  str w10,[x8]
71016a5c9c  str w9,[x27, #0x28]
71016a5ca0  adrp x8,0x710523c000
71016a5ca4  add x8,x8,#0x4e0
71016a5ca8  add x9,x27,#0xe0
71016a5cac  str x8,[x27, #0x10]
71016a5cb0  orr w8,wzr,#0x38
71016a5cb4  mov x0,x23
71016a5cb8  strb w25,[x27, #0xa0]
71016a5cbc  str xzr,[x27, #0xd0]
71016a5cc0  str x9,[x27, #0x30]
71016a5cc4  str w8,[x27, #0x38]
71016a5cc8  bl 0x71039c1a50
71016a5ccc  mov x0,x22
71016a5cd0  bl 0x71039c1a40
71016a5cd4  ldr x8,[x27, #0x88]
71016a5cd8  cbz x8,0x71016a5d0c
71016a5cdc  ldrh w9,[x8, #0x8]
71016a5ce0  sub w9,w9,#0x1
71016a5ce4  sxth w10,w9
71016a5ce8  cmp w10,#0x0
71016a5cec  strh w9,[x8, #0x8]
71016a5cf0  b.gt 0x71016a5d08
71016a5cf4  ldr x0,[x27, #0x88]
71016a5cf8  cbz x0,0x71016a5d08
71016a5cfc  ldr x8,[x0]
71016a5d00  ldr x8,[x8, #0x8]
71016a5d04  blr x8
71016a5d08  str xzr,[x27, #0x88]
71016a5d0c  str x20,[x27, #0x88]
71016a5d10  cbz x20,0x71016a5d20
71016a5d14  ldrh w8,[x20, #0x8]
71016a5d18  add w8,w8,#0x1
71016a5d1c  strh w8,[x20, #0x8]
71016a5d20  mov x0,x22
71016a5d24  bl 0x71039c1a50
71016a5d28  mov x0,x22
71016a5d2c  bl 0x71039c1a40
71016a5d30  ldr w8,[x27, #0x38]
71016a5d34  cmp w8,#0x38
71016a5d38  b.cc 0x71016a5d9c
71016a5d3c  ldr x8,[x28]
71016a5d40  mov x9,#0x8
71016a5d44  mov x10,#0x80
71016a5d48  movk x9,#0x200, LSL #32
71016a5d4c  movk x10,#0x40, LSL #32
71016a5d50  stp x9,x10,[x8]
71016a5d54  mov x9,#0x4000000040
71016a5d58  str x9,[x8, #0x10]
71016a5d5c  mov w9,#0x100
71016a5d60  strh w9,[x8, #0x18]
71016a5d64  ldurh w9,[x29, #-0x60]
71016a5d68  strh w9,[x8, #0x1a]
71016a5d6c  orr w9,wzr,#0x18
71016a5d70  stp w9,w26,[x8, #0x1c]
71016a5d74  orr w9,wzr,#0x1f
71016a5d78  str w9,[x8, #0x2c]
71016a5d7c  ldr w9,[sp, #0xc]
71016a5d80  stur xzr,[x8, #0x24]
71016a5d84  str w9,[x8, #0x30]
71016a5d88  strb w21,[x8, #0x34]
71016a5d8c  ldurh w9,[x29, #-0x5c]
71016a5d90  ldurb w10,[x29, #-0x5a]
71016a5d94  strb w10,[x8, #0x37]
71016a5d98  sturh w9,[x8, #0x35]
71016a5d9c  mov x0,x22
71016a5da0  bl 0x71039c1a50
71016a5da4  ldr w23,[x27, #0x28]
71016a5da8  cbz w23,0x71016a5e0c
71016a5dac  ldr x22,[x24, #0x30]
71016a5db0  cbz x22,0x71016a5e0c
71016a5db4  add x21,x22,#0x40
71016a5db8  mov x0,x21
71016a5dbc  bl 0x71039c1a40
71016a5dc0  ldr x24,[x22, #0x30]
71016a5dc4  cbz x24,0x71016a5e04
71016a5dc8  ldr w8,[x24, #0x28]
71016a5dcc  cmp w8,w23
71016a5dd0  b.eq 0x71016a5de0
71016a5dd4  ldr x24,[x24, #0x8]
71016a5dd8  cbnz x24,0x71016a5dc8
71016a5ddc  b 0x71016a5e04
71016a5de0  add x22,x24,#0x48
71016a5de4  mov x0,x22
71016a5de8  bl 0x71039c1a40
71016a5dec  ldrb w8,[x24, #0x80]
71016a5df0  cbnz w8,0x71016a5dfc
71016a5df4  mov w8,#0x1
71016a5df8  strb w8,[x24, #0x80]
71016a5dfc  mov x0,x22
71016a5e00  bl 0x71039c1a50
71016a5e04  mov x0,x21
71016a5e08  bl 0x71039c1a50
71016a5e0c  str w23,[x19, #0x70]
71016a5e10  cbz x20,0x71016a5e2c
71016a5e14  ldrh w8,[x20, #0x8]
71016a5e18  sub w8,w8,#0x1
71016a5e1c  sxth w9,w8
71016a5e20  cmp w9,#0x0
71016a5e24  strh w8,[x20, #0x8]
71016a5e28  b.le 0x71016a5e7c
71016a5e2c  cbz w23,0x71016a5e94
71016a5e30  adrp x8,0x7105083000
71016a5e34  add x8,x8,#0xa8
71016a5e38  str x8,[sp, #0x10]
71016a5e3c  adrp x8,0x71016a5000
71016a5e40  add x8,x8,#0xf00
71016a5e44  add x1,x19,#0x10
71016a5e48  str x19,[sp, #0x28]
71016a5e4c  add x19,sp,#0x10
71016a5e50  add x0,sp,#0x10
71016a5e54  stp x8,xzr,[sp, #0x18]
71016a5e58  str x19,[sp, #0x30]
71016a5e5c  bl 0x71003cb050
71016a5e60  ldr x0,[sp, #0x30]
71016a5e64  cmp x19,x0
71016a5e68  b.eq 0x71016a5ea8
71016a5e6c  cbz x0,0x71016a5eb4
71016a5e70  ldr x8,[x0]
71016a5e74  ldr x8,[x8, #0x28]
71016a5e78  b 0x71016a5eb0
71016a5e7c  ldr x8,[x20]
71016a5e80  ldr x8,[x8, #0x8]
71016a5e84  mov x0,x20
71016a5e88  blr x8
71016a5e8c  ldr w23,[x19, #0x70]
71016a5e90  cbnz w23,0x71016a5e30
71016a5e94  ldr x0,[x19, #0x30]
71016a5e98  add x8,x19,#0x10
71016a5e9c  cmp x8,x0
71016a5ea0  str xzr,[x19, #0x30]
71016a5ea4  b.ne 0x71016a5e6c
71016a5ea8  ldr x8,[x0]
71016a5eac  ldr x8,[x8, #0x20]
71016a5eb0  blr x8
71016a5eb4  add sp,sp,#0x6c0
71016a5eb8  ldp x29,x30,[sp, #0x50]
71016a5ebc  ldp x20,x19,[sp, #0x40]
71016a5ec0  ldp x22,x21,[sp, #0x30]
71016a5ec4  ldp x24,x23,[sp, #0x20]
71016a5ec8  ldp x26,x25,[sp, #0x10]
71016a5ecc  ldp x28,x27,[sp], #0x60
71016a5ed0  ret
71016a5ed4  adrp x0,0x71052b9000
71016a5ed8  add x0,x0,#0x2e0
71016a5edc  bl 0x71039c06b0
71016a5ee0  cbz w0,0x71016a5ae4
71016a5ee4  adrp x0,0x71052b9000
71016a5ee8  add x0,x0,#0x2e0
71016a5eec  bl 0x71039c06c0
71016a5ef0  b 0x71016a5ae4
