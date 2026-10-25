// addr:      71023b4cf0
// offset:    0x23b4cf0
// name:      FUN_71023b4cf0
// mangled:   
// size:      1984

71023b4cf0  sub sp,sp,#0x140
71023b4cf4  str x28,[sp, #0xf0]
71023b4cf8  stp x24,x23,[sp, #0x100]
71023b4cfc  stp x22,x21,[sp, #0x110]
71023b4d00  stp x20,x19,[sp, #0x120]
71023b4d04  stp x29,x30,[sp, #0x130]
71023b4d08  add x29,sp,#0x130
71023b4d0c  adrp x21,0x710532f000
71023b4d10  ldr x20,[x21, #0x8b0]
71023b4d14  ldr w8,[x0, #0x184]
71023b4d18  mov x19,x0
71023b4d1c  cbz w8,0x71023b4d8c
71023b4d20  ldr x8,[x20, #0x8]
71023b4d24  ldrb w8,[x8, #0x328]
71023b4d28  cbz w8,0x71023b4d34
71023b4d2c  ldrb w8,[x19, #0x19c]
71023b4d30  cbz w8,0x71023b4ebc
71023b4d34  ldr x8,[x19]
71023b4d38  ldr x9,[x8, #0x28]
71023b4d3c  ldr x10,[x9, #0x60]
71023b4d40  cbnz x10,0x71023b5370
71023b4d44  ldp x10,x9,[x9, #0x30]
71023b4d48  cmp x10,x9
71023b4d4c  b.ne 0x71023b5370
71023b4d50  ldr x9,[x8, #0x20]
71023b4d54  ldr x9,[x9, #0x10]
71023b4d58  cbnz x9,0x71023b5370
71023b4d5c  ldr w8,[x8, #0x40]
71023b4d60  cmp w8,#0x3
71023b4d64  b.ne 0x71023b5394
71023b4d68  mov w8,#0x1
71023b4d6c  strb w8,[x19, #0x19c]
71023b4d70  ldrsw x8,[x19, #0x17c]
71023b4d74  cmp w8,#0x13
71023b4d78  b.cs 0x71023b54ac
71023b4d7c  add x8,x19,x8, LSL #0x2
71023b4d80  mov w9,#0x5
71023b4d84  str w9,[x8, #0x130]
71023b4d88  b 0x71023b5370
71023b4d8c  ldr x24,[x19]
71023b4d90  ldr w8,[x24, #0x44]
71023b4d94  mov w9,#0x1b77
71023b4d98  movk w9,#0x3239, LSL #16
71023b4d9c  add x22,sp,#0x80
71023b4da0  cmp w8,w9
71023b4da4  b.ne 0x71023b4dd8
71023b4da8  add x0,x24,#0x4c
71023b4dac  adrp x1,0x71043ff000
71023b4db0  add x1,x1,#0x6b
71023b4db4  bl 0x71039c0060
71023b4db8  add x8,x19,#0x19d
71023b4dbc  cbz w0,0x71023b4de4
71023b4dc0  ldrb w9,[x8]
71023b4dc4  cbnz w9,0x71023b4de4
71023b4dc8  ldrb w8,[x19, #0x19f]
71023b4dcc  cbz w8,0x71023b538c
71023b4dd0  add x8,x19,#0x19f
71023b4dd4  b 0x71023b4de4
71023b4dd8  add x8,x19,#0x19d
71023b4ddc  ldrb w9,[x8]
71023b4de0  cbz w9,0x71023b4dc8
71023b4de4  mov w9,#0x1
71023b4de8  strb wzr,[x8]
71023b4dec  mov x13,#0x7053
71023b4df0  movk x13,#0x7269, LSL #16
71023b4df4  mov w8,#0x9dc5
71023b4df8  movk w8,#0x811c, LSL #16
71023b4dfc  adrp x10,0x71050ba000
71023b4e00  add x10,x10,#0x538
71023b4e04  mov w11,#0x101
71023b4e08  str x10,[x22, #0x60]
71023b4e0c  sturh w11,[x29, #-0x48]
71023b4e10  orr x12,xzr,#0xf00000000
71023b4e14  movk x13,#0x7469, LSL #32
71023b4e18  movk x13,#0x5373, LSL #48
71023b4e1c  mov x14,#0x7465
71023b4e20  movk x14,#0x6353, LSL #16
71023b4e24  sturb w9,[x29, #-0x46]
71023b4e28  movk x14,#0x6e65, LSL #32
71023b4e2c  movk x14,#0x65, LSL #48
71023b4e30  str x14,[sp, #0x28]
71023b4e34  stp x12,x13,[sp, #0x18]
71023b4e38  mov w11,#0x53
71023b4e3c  mov w10,#0x9
71023b4e40  mov w9,#0x89
71023b4e44  add x12,sp,#0x18
71023b4e48  mov w13,w8
71023b4e4c  mul w13,w13,w9
71023b4e50  and w11,w11,#0xff
71023b4e54  eor w13,w13,w11
71023b4e58  ldrb w11,[x12, x10, LSL ]
71023b4e5c  add x10,x10,#0x1
71023b4e60  cbnz w11,0x71023b4e4c
71023b4e64  str w13,[sp, #0x18]
71023b4e68  ldr x11,[x24, #0x38]
71023b4e6c  cbz x11,0x71023b4f74
71023b4e70  mov x10,xzr
71023b4e74  add x11,x11,#0x10
71023b4e78  add x12,sp,#0x80
71023b4e7c  str wzr,[sp, #0x80]
71023b4e80  b 0x71023b4e8c
71023b4e84  add x10,x10,#0x2
71023b4e88  strb w13,[x14, #0x9]
71023b4e8c  add x13,x11,x10
71023b4e90  ldrb w15,[x13]
71023b4e94  cbz w15,0x71023b4f84
71023b4e98  add w16,w10,#0x1
71023b4e9c  add x14,x12,x10
71023b4ea0  cmp w16,#0x3f
71023b4ea4  strb w15,[x14, #0x8]
71023b4ea8  b.cs 0x71023b4f80
71023b4eac  ldrb w13,[x13, #0x1]
71023b4eb0  cbnz w13,0x71023b4e84
71023b4eb4  add x10,x10,#0x1
71023b4eb8  b 0x71023b4f84
71023b4ebc  mov w8,#0x1
71023b4ec0  strb w8,[x19, #0x19c]
71023b4ec4  adrp x8,0x710532f000
71023b4ec8  ldr x8,[x8, #0x7a0]
71023b4ecc  cbz x8,0x71023b4d34
71023b4ed0  ldr x22,[x8]
71023b4ed4  ldrb w8,[x22]
71023b4ed8  tbz w8,#0x1,0x71023b4d34
71023b4edc  adrp x8,0x71052b9000
71023b4ee0  ldr x8,[x8, #0x4f8]
71023b4ee4  ldr x8,[x8]
71023b4ee8  ldr x0,[x8, #0x20]
71023b4eec  cbz x0,0x71023b4f08
71023b4ef0  mov w8,#0x5920
71023b4ef4  ldrb w8,[x0, x8, LSL ]
71023b4ef8  cmp w8,#0x6
71023b4efc  b.ne 0x71023b4f08
71023b4f00  mov w1,wzr
71023b4f04  bl 0x7100653490
71023b4f08  orr w8,wzr,#0x3
71023b4f0c  str w8,[x22, #0x48]
71023b4f10  ldr w8,[x22, #0x98]
71023b4f14  cmp w8,#0x2
71023b4f18  b.eq 0x71023b4d34
71023b4f1c  ldr w8,[x22, #0xe8]
71023b4f20  cmp w8,#0x2
71023b4f24  b.eq 0x71023b4d34
71023b4f28  ldr w8,[x22, #0x138]
71023b4f2c  cmp w8,#0x2
71023b4f30  b.eq 0x71023b4d34
71023b4f34  ldr w8,[x22, #0x188]
71023b4f38  cmp w8,#0x2
71023b4f3c  b.eq 0x71023b4d34
71023b4f40  ldr w8,[x22, #0x1d8]
71023b4f44  cmp w8,#0x2
71023b4f48  b.eq 0x71023b4d34
71023b4f4c  ldr w8,[x22, #0x228]
71023b4f50  cmp w8,#0x2
71023b4f54  b.eq 0x71023b4d34
71023b4f58  ldr w8,[x22, #0x278]
71023b4f5c  cmp w8,#0x2
71023b4f60  b.eq 0x71023b4d34
71023b4f64  ldr w8,[x22]
71023b4f68  orr w8,w8,#0x20
71023b4f6c  str w8,[x22]
71023b4f70  b 0x71023b4d34
71023b4f74  strb wzr,[sp, #0x88]
71023b4f78  str xzr,[sp, #0x80]
71023b4f7c  b 0x71023b4fb8
71023b4f80  add w10,w10,#0x1
71023b4f84  add x12,sp,#0x80
71023b4f88  add x11,x12,#0x8
71023b4f8c  strb wzr,[x11, w10, UXTW ]
71023b4f90  ldrb w11,[sp, #0x88]
71023b4f94  str w10,[sp, #0x84]
71023b4f98  cbz w11,0x71023b4fb4
71023b4f9c  add x10,x12,#0x9
71023b4fa0  mul w8,w8,w9
71023b4fa4  and w11,w11,#0xff
71023b4fa8  eor w8,w8,w11
71023b4fac  ldrb w11,[x10], #0x1
71023b4fb0  cbnz w11,0x71023b4fa0
71023b4fb4  str w8,[sp, #0x80]
71023b4fb8  ldr x0,[x24, #0x20]
71023b4fbc  add x1,sp,#0x18
71023b4fc0  add x2,sp,#0x80
71023b4fc4  sub x3,x29,#0x50
71023b4fc8  bl 0x71037266d0
71023b4fcc  mov w23,#0x1
71023b4fd0  str w23,[x24, #0x30]
71023b4fd4  ldr x8,[x20, #0x8]
71023b4fd8  ldr w8,[x8, #0x138]
71023b4fdc  cbnz w8,0x71023b5370
71023b4fe0  adrp x8,0x710532f000
71023b4fe4  ldr x8,[x8, #0x730]
71023b4fe8  strb wzr,[sp, #0xd8]
71023b4fec  stp xzr,xzr,[x22, #0x48]
71023b4ff0  mov x1,#0xc863
71023b4ff4  movk x1,#0xdaf3, LSL #16
71023b4ff8  stp xzr,xzr,[x22, #0x38]
71023b4ffc  movk x1,#0xe, LSL #32
71023b5000  strh wzr,[sp, #0x74]
71023b5004  strb wzr,[sp, #0x70]
71023b5008  str xzr,[sp, #0x18]
71023b500c  strh wzr,[sp, #0xc]
71023b5010  strh wzr,[sp, #0x14]
71023b5014  str wzr,[sp, #0x10]
71023b5018  strh wzr,[sp, #0x7c]
71023b501c  str wzr,[sp, #0x78]
71023b5020  stp xzr,xzr,[x22, #0x28]
71023b5024  stp xzr,xzr,[x22, #0x18]
71023b5028  stp xzr,xzr,[x22, #0x8]
71023b502c  str xzr,[sp, #0x80]
71023b5030  stp xzr,xzr,[sp, #0x60]
71023b5034  stp xzr,xzr,[sp, #0x50]
71023b5038  stp xzr,xzr,[sp, #0x40]
71023b503c  stp xzr,xzr,[sp, #0x30]
71023b5040  stp xzr,xzr,[sp, #0x20]
71023b5044  ldr x24,[x8, #0x8]
71023b5048  ldr x0,[x24, #0x168]
71023b504c  bl 0x71032631a0
71023b5050  ldr x8,[x24, #0x178]
71023b5054  mov x20,x0
71023b5058  ldr x0,[x8, #0x8]
71023b505c  mov x1,#0xb51
71023b5060  movk x1,#0xd503, LSL #16
71023b5064  movk x1,#0x16, LSL #32
71023b5068  bl 0x71032b23e0
71023b506c  ldr x8,[x21, #0x8b0]
71023b5070  ldr x8,[x8, #0x8]
71023b5074  mov x10,#0x10000000000
71023b5078  movk x10,#0x100, LSL #48
71023b507c  mov x11,#0x303
71023b5080  movk x11,#0xa04, LSL #16
71023b5084  orr x15,xzr,#0x101010101010101
71023b5088  mov w9,#0xffffffff
71023b508c  movk x11,#0xc0b, LSL #32
71023b5090  movk x11,#0x100, LSL #48
71023b5094  stp x20,x10,[x8, #0x148]
71023b5098  mov w12,#0x205
71023b509c  mov w10,#0x2
71023b50a0  orr w13,wzr,#0x1010101
71023b50a4  mov x14,#0x404
71023b50a8  movk x14,#0x303, LSL #16
71023b50ac  movk x15,#0x501
71023b50b0  add x1,x8,#0x16b
71023b50b4  strb wzr,[x8, #0x328]
71023b50b8  movk x14,#0xb0a, LSL #32
71023b50bc  movk x14,#0xc, LSL #48
71023b50c0  stp x9,x11,[x8, #0x158]
71023b50c4  movk x15,#0x202, LSL #16
71023b50c8  strh w12,[x8, #0x168]
71023b50cc  strb w10,[x8, #0x16a]
71023b50d0  str w13,[x1]
71023b50d4  add x1,x8,#0x16f
71023b50d8  add x2,x8,#0x177
71023b50dc  mov w16,#0xd0d
71023b50e0  mov w17,#0x304
71023b50e4  movk w17,#0x2, LSL #16
71023b50e8  mov w18,#0x102
71023b50ec  str x14,[x1]
71023b50f0  add x1,x8,#0x17f
71023b50f4  add x3,x8,#0x181
71023b50f8  str x15,[x2]
71023b50fc  add x15,x8,#0x185
71023b5100  add x2,x8,#0x187
71023b5104  strh w16,[x1]
71023b5108  str w17,[x3]
71023b510c  strh w18,[x15]
71023b5110  str x13,[x2]
71023b5114  add x16,x8,#0x197
71023b5118  ldp x15,x18,[x22, #0x8]
71023b511c  ldr x2,[sp, #0x80]
71023b5120  str x15,[x16]
71023b5124  ldp x16,x3,[x22, #0x28]
71023b5128  ldp x1,x15,[x22, #0x18]
71023b512c  add x17,x8,#0x1b7
71023b5130  ldp x4,x6,[x22, #0x38]
71023b5134  str x16,[x17]
71023b5138  add x16,x8,#0x18f
71023b513c  ldp x7,x17,[x22, #0x48]
71023b5140  ldrb w5,[sp, #0xd8]
71023b5144  str x2,[x16]
71023b5148  add x16,x8,#0x1af
71023b514c  str x15,[x16]
71023b5150  add x15,x8,#0x1a7
71023b5154  str x1,[x15]
71023b5158  add x15,x8,#0x19f
71023b515c  add x16,x8,#0x1c7
71023b5160  str x4,[x16]
71023b5164  mov x16,#0xff0000000000
71023b5168  movk x16,#0x5aff, LSL #48
71023b516c  str x18,[x15]
71023b5170  mov x15,#0xff0000000000
71023b5174  movk x15,#0x13ff, LSL #48
71023b5178  add x18,x8,#0x1bf
71023b517c  add x1,x8,#0x1d7
71023b5180  add x2,x8,#0x1cf
71023b5184  strb w5,[x8, #0x1e7]
71023b5188  add x5,x8,#0x1df
71023b518c  str x3,[x18]
71023b5190  str x7,[x1]
71023b5194  str x6,[x2]
71023b5198  str x17,[x5]
71023b519c  mov x18,#0x3
71023b51a0  stp x15,x16,[x8, #0x1e8]
71023b51a4  ldr w7,[sp, #0x78]
71023b51a8  ldrh w20,[sp, #0x7c]
71023b51ac  strh w20,[x8, #0x1fc]
71023b51b0  str w7,[x8, #0x1f8]
71023b51b4  ldrh w7,[sp, #0x74]
71023b51b8  orr x3,xzr,#0x101010101010101
71023b51bc  mov x20,#0xff0000000000
71023b51c0  movk x18,#0x100, LSL #32
71023b51c4  orr x2,xzr,#0x101010101010101
71023b51c8  movk x3,#0x2
71023b51cc  movk x20,#0xc1ff, LSL #48
71023b51d0  mov w1,#0x501
71023b51d4  movk w1,#0x202, LSL #16
71023b51d8  movk x2,#0xd0d, LSL #32
71023b51dc  movk x2,#0x304, LSL #48
71023b51e0  movk x3,#0x102, LSL #16
71023b51e4  add x17,x8,#0x223
71023b51e8  add x5,x8,#0x227
71023b51ec  add x6,x8,#0x22f
71023b51f0  str x20,[x8, #0x200]
71023b51f4  add x20,x8,#0x233
71023b51f8  str x18,[x8, #0x208]
71023b51fc  add x18,x8,#0x23b
71023b5200  str x11,[x8, #0x218]
71023b5204  add x11,x8,#0x243
71023b5208  strh w12,[x8, #0x220]
71023b520c  strh w7,[x8, #0x1fe]
71023b5210  str x9,[x8, #0x210]
71023b5214  strb w10,[x8, #0x222]
71023b5218  str w13,[x17]
71023b521c  str x14,[x5]
71023b5220  str w1,[x6]
71023b5224  str x2,[x20]
71023b5228  add x12,x8,#0x247
71023b522c  str x3,[x18]
71023b5230  add x7,x8,#0x257
71023b5234  add x13,x8,#0x24f
71023b5238  str wzr,[x11]
71023b523c  ldp x11,x18,[sp, #0x18]
71023b5240  ldp x2,x3,[sp, #0x28]
71023b5244  add x20,x8,#0x25f
71023b5248  str x3,[x20]
71023b524c  str x2,[x7]
71023b5250  add x17,x8,#0x277
71023b5254  str x18,[x13]
71023b5258  add x14,x8,#0x26f
71023b525c  add x5,x8,#0x267
71023b5260  str x11,[x12]
71023b5264  ldp x11,x12,[sp, #0x38]
71023b5268  ldp x13,x18,[sp, #0x48]
71023b526c  add x7,x8,#0x27f
71023b5270  str x18,[x7]
71023b5274  str x13,[x17]
71023b5278  add x1,x8,#0x297
71023b527c  str x12,[x14]
71023b5280  add x6,x8,#0x28f
71023b5284  add x3,x8,#0x287
71023b5288  str x11,[x5]
71023b528c  ldp x11,x12,[sp, #0x58]
71023b5290  ldr x13,[sp, #0x68]
71023b5294  ldrb w14,[sp, #0x70]
71023b5298  strb w14,[x8, #0x29f]
71023b529c  str x13,[x1]
71023b52a0  str x12,[x6]
71023b52a4  add x2,x8,#0x2bd
71023b52a8  add x20,x8,#0x2b9
71023b52ac  mov w4,#0x100
71023b52b0  str x11,[x3]
71023b52b4  str x15,[x8, #0x2a0]
71023b52b8  str x16,[x8, #0x2a8]
71023b52bc  ldr w11,[sp, #0x10]
71023b52c0  ldrh w12,[sp, #0x14]
71023b52c4  strh w12,[x8, #0x2b4]
71023b52c8  str w11,[x8, #0x2b0]
71023b52cc  ldrh w11,[sp, #0xc]
71023b52d0  strb w10,[x8, #0x2b8]
71023b52d4  strh w11,[x8, #0x2b6]
71023b52d8  ldrh w11,[sp, #0x8]
71023b52dc  ldr w10,[sp, #0x4]
71023b52e0  ldrb w12,[sp, #0xa]
71023b52e4  strh w11,[x2]
71023b52e8  mov x11,#0x1
71023b52ec  str w10,[x20]
71023b52f0  add x10,x8,#0x2cc
71023b52f4  strb w12,[x8, #0x2bf]
71023b52f8  str x0,[x8, #0x2c0]
71023b52fc  strh w4,[x8, #0x2c8]
71023b5300  strb w23,[x8, #0x2ca]
71023b5304  movk x11,#0x101, LSL #32
71023b5308  movk x11,#0x100, LSL #48
71023b530c  str x11,[x10]
71023b5310  ldr w10,[x8, #0x138]
71023b5314  str w9,[x8, #0x138]
71023b5318  str w9,[x8, #0x140]
71023b531c  orr w9,wzr,#0x3
71023b5320  strb w23,[x8, #0x2d4]
71023b5324  stp xzr,xzr,[x8, #0x8]
71023b5328  str wzr,[x8, #0x130]
71023b532c  str wzr,[x8, #0x13c]
71023b5330  strb wzr,[x8, #0x144]
71023b5334  str w23,[x8, #0x134]
71023b5338  stp w9,w23,[x8, #0xe8]
71023b533c  stp xzr,xzr,[x8, #0x120]
71023b5340  stp xzr,xzr,[x8, #0x110]
71023b5344  stp xzr,xzr,[x8, #0x100]
71023b5348  stp xzr,xzr,[x8, #0xf0]
71023b534c  cbz w10,0x71023b5368
71023b5350  mov x9,#0x9
71023b5354  movk x9,#0x8, LSL #32
71023b5358  str x9,[x8, #0xf0]
71023b535c  mov w9,#0x4
71023b5360  str w9,[x8, #0x134]
71023b5364  str w9,[x8, #0xf8]
71023b5368  add x0,x19,#0x190
71023b536c  bl 0x7101845ea0
71023b5370  ldp x29,x30,[sp, #0x130]
71023b5374  ldr x28,[sp, #0xf0]
71023b5378  ldp x20,x19,[sp, #0x120]
71023b537c  ldp x22,x21,[sp, #0x110]
71023b5380  ldp x24,x23,[sp, #0x100]
71023b5384  add sp,sp,#0x140
71023b5388  ret
71023b538c  mov w9,wzr
71023b5390  b 0x71023b4dec
71023b5394  ldr x9,[x20, #0x8]
71023b5398  ldrb w10,[x9, #0x328]
71023b539c  cbz w10,0x71023b5428
71023b53a0  ldr x8,[x21, #0x8b0]
71023b53a4  ldr x8,[x8, #0x8]
71023b53a8  ldr x9,[x8, #0x310]
71023b53ac  str x9,[x8, #0x318]
71023b53b0  ldrsw x9,[x8, #0x134]
71023b53b4  strb wzr,[x8, #0x328]
71023b53b8  tbnz w9,#0x1f,0x71023b53e4
71023b53bc  mov x11,xzr
71023b53c0  add x10,x8,#0xe8
71023b53c4  cmp x11,#0x13
71023b53c8  b.cs 0x71023b54ac
71023b53cc  ldr w12,[x10, x11, LSL #0x2]
71023b53d0  cmp w12,#0x9
71023b53d4  b.eq 0x71023b5370
71023b53d8  cmp x11,x9
71023b53dc  add x11,x11,#0x1
71023b53e0  b.lt 0x71023b53c4
71023b53e4  ldr w9,[x8, #0x138]
71023b53e8  cbz w9,0x71023b5370
71023b53ec  orr x9,xzr,#0x300000000
71023b53f0  stp xzr,x9,[x8, #0x128]
71023b53f4  mov w9,#0xffffffff
71023b53f8  mov x10,#0x8
71023b53fc  str x9,[x8, #0x138]
71023b5400  str w9,[x8, #0x140]
71023b5404  mov x9,#0x900000000
71023b5408  movk x10,#0x4, LSL #32
71023b540c  stp xzr,xzr,[x8, #0x8]
71023b5410  strb wzr,[x8, #0x144]
71023b5414  stp xzr,xzr,[x8, #0x118]
71023b5418  stp xzr,xzr,[x8, #0x108]
71023b541c  stp xzr,xzr,[x8, #0xf8]
71023b5420  stp x9,x10,[x8, #0xe8]
71023b5424  b 0x71023b5370
71023b5428  ldr w9,[x9, #0x138]
71023b542c  cbnz w9,0x71023b5370
71023b5430  cmp w8,#0x4
71023b5434  strb wzr,[x19, #0x19c]
71023b5438  b.ne 0x71023b5458
71023b543c  mov w8,#0x1
71023b5440  strb w8,[x19, #0x19d]
71023b5444  ldr w8,[x19, #0x17c]
71023b5448  cmp w8,#0x13
71023b544c  b.cs 0x71023b54ac
71023b5450  orr w9,wzr,#0x6
71023b5454  b 0x71023b5468
71023b5458  ldr w8,[x19, #0x17c]
71023b545c  cmp w8,#0x13
71023b5460  b.cs 0x71023b54ac
71023b5464  orr w9,wzr,#0xe
71023b5468  add x8,x19,w8, SXTW  #0x2
71023b546c  str w9,[x8, #0x130]
71023b5470  adrp x8,0x7105329000
71023b5474  ldr x8,[x8, #0xf98]
71023b5478  ldr x8,[x8]
71023b547c  ldr x19,[x8, #0x20]
71023b5480  ldr x0,[x19, #0x8]
71023b5484  bl 0x710323b9e0
71023b5488  ldr x8,[x19, #0x10]
71023b548c  ldr x9,[x19, #0x28]
71023b5490  str x8,[x19, #0x18]
71023b5494  ldr x10,[x19, #0x40]
71023b5498  ldr x8,[x19, #0x58]
71023b549c  str x9,[x19, #0x30]
71023b54a0  str x10,[x19, #0x48]
71023b54a4  str x8,[x19, #0x60]
71023b54a8  b 0x71023b5370
71023b54ac  bl 0x71039c2650
