// addr:      7101cf0870
// offset:    0x1cf0870
// name:      FUN_7101cf0870
// mangled:   
// size:      2268

7101cf0870  str d8,[sp, #-0x60]!
7101cf0874  str x28,[sp, #0x8]
7101cf0878  stp x26,x25,[sp, #0x10]
7101cf087c  stp x24,x23,[sp, #0x20]
7101cf0880  stp x22,x21,[sp, #0x30]
7101cf0884  stp x20,x19,[sp, #0x40]
7101cf0888  stp x29,x30,[sp, #0x50]
7101cf088c  add x29,sp,#0x50
7101cf0890  sub sp,sp,#0x450
7101cf0894  cmp w1,#0x61
7101cf0898  b.hi 0x7101cf08b8
7101cf089c  ldr x8,[x0, #0x160]
7101cf08a0  mov x19,x0
7101cf08a4  cbz x8,0x7101cf08b8
7101cf08a8  ldr w8,[x19, #0xc8]
7101cf08ac  orr w8,w8,#0x4
7101cf08b0  cmp w8,#0x4
7101cf08b4  b.ne 0x7101cf08dc
7101cf08b8  add sp,sp,#0x450
7101cf08bc  ldp x29,x30,[sp, #0x50]
7101cf08c0  ldr x28,[sp, #0x8]
7101cf08c4  ldp x20,x19,[sp, #0x40]
7101cf08c8  ldp x22,x21,[sp, #0x30]
7101cf08cc  ldp x24,x23,[sp, #0x20]
7101cf08d0  ldp x26,x25,[sp, #0x10]
7101cf08d4  ldr d8,[sp], #0x60
7101cf08d8  ret
7101cf08dc  adrp x25,0x710532f000
7101cf08e0  ldr x24,[x25, #0x8f8]
7101cf08e4  orr w8,wzr,#0x18
7101cf08e8  smaddl x21,w1,w8,x19
7101cf08ec  mov w20,w1
7101cf08f0  ldr x1,[x21, #0x170]
7101cf08f4  sxtw x23,w20
7101cf08f8  ldr x0,[x24, #0x8]
7101cf08fc  bl 0x710334fcb0
7101cf0900  cmp w0,#0x3
7101cf0904  b.ne 0x7101cf091c
7101cf0908  orr w8,wzr,#0x18
7101cf090c  madd x8,x23,x8,x19
7101cf0910  ldr w8,[x8, #0x17c]
7101cf0914  cmp w8,#0x1
7101cf0918  b.eq 0x7101cf08b8
7101cf091c  orr w8,wzr,#0x18
7101cf0920  madd x8,x23,x8,x19
7101cf0924  add x22,x8,#0x178
7101cf0928  ldr w8,[x8, #0x178]
7101cf092c  cmp w8,#0x3
7101cf0930  b.eq 0x7101cf0994
7101cf0934  ldr x9,[x24, #0x8]
7101cf0938  ldr x8,[x9, #0x108]
7101cf093c  cbz x8,0x7101cf0990
7101cf0940  ldr x8,[x9, #0x100]
7101cf0944  cbz x8,0x7101cf0990
7101cf0948  add x10,x9,#0x100
7101cf094c  mov x11,x10
7101cf0950  mov x12,x8
7101cf0954  ldr w13,[x12, #0x20]
7101cf0958  cmp w13,#0x1
7101cf095c  cset w13,lt
7101cf0960  csel x11,x11,x12,lt
7101cf0964  ldr x12,[x12, w13, UXTW #0x3]
7101cf0968  cbnz x12,0x7101cf0954
7101cf096c  cmp x11,x10
7101cf0970  b.eq 0x7101cf0980
7101cf0974  ldr w10,[x11, #0x20]
7101cf0978  cmp w10,#0x1
7101cf097c  b.le 0x7101cf09e0
7101cf0980  mov w8,wzr
7101cf0984  str w8,[x22]
7101cf0988  tbz w20,#0x1f,0x7101cf0994
7101cf098c  b 0x7101cf0a48
7101cf0990  str wzr,[x22]
7101cf0994  ldr x8,[x19, #0x160]
7101cf0998  ldr w9,[x8, #0x58]
7101cf099c  cmp w9,w20
7101cf09a0  b.le 0x7101cf0a48
7101cf09a4  ldr x10,[x8, #0x208]
7101cf09a8  ldr x9,[x8, #0x200]
7101cf09ac  sub x10,x10,x9
7101cf09b0  orr x11,xzr,#-0x5555555555555556
7101cf09b4  movk x11,#0xaaab
7101cf09b8  asr x10,x10,#0x4
7101cf09bc  mul x10,x10,x11
7101cf09c0  cmp x10,x23
7101cf09c4  b.ls 0x7101cf1144
7101cf09c8  orr w8,wzr,#0x30
7101cf09cc  madd x8,x23,x8,x9
7101cf09d0  add x1,x8,#0x20
7101cf09d4  sub x0,x29,#0x60
7101cf09d8  bl 0x7103776390
7101cf09dc  b 0x7101cf0a50
7101cf09e0  add x9,x9,#0x100
7101cf09e4  b 0x7101cf09f0
7101cf09e8  mov x9,x8
7101cf09ec  mov x8,x10
7101cf09f0  ldr w10,[x8, #0x20]
7101cf09f4  cmp w10,#0x2
7101cf09f8  b.lt 0x7101cf0a0c
7101cf09fc  ldr x10,[x8]
7101cf0a00  mov x9,x8
7101cf0a04  cbnz x10,0x7101cf09e8
7101cf0a08  b 0x7101cf0a20
7101cf0a0c  cmp w10,#0x1
7101cf0a10  b.eq 0x7101cf0a20
7101cf0a14  ldr x10,[x8, #0x8]!
7101cf0a18  mov x9,x8
7101cf0a1c  cbnz x10,0x7101cf09e8
7101cf0a20  ldr x8,[x9]
7101cf0a24  ldr w8,[x8, #0x28]
7101cf0a28  cmp w8,#0x1
7101cf0a2c  cset w9,eq
7101cf0a30  cmp w8,#0x2
7101cf0a34  orr w8,wzr,#0x3
7101cf0a38  lsl w9,w9,#0x1
7101cf0a3c  csel w8,w8,w9,eq
7101cf0a40  str w8,[x22]
7101cf0a44  tbz w20,#0x1f,0x7101cf0994
7101cf0a48  sub x0,x29,#0x60
7101cf0a4c  bl 0x7103776290
7101cf0a50  ldr w8,[x22]
7101cf0a54  add x24,x21,#0x170
7101cf0a58  cmp w8,#0x3
7101cf0a5c  b.ne 0x7101cf0af8
7101cf0a60  ldr x1,[x24]
7101cf0a64  add x21,x21,#0x168
7101cf0a68  cbz x1,0x7101cf0b18
7101cf0a6c  ldr x8,[x25, #0x8f8]
7101cf0a70  ldr x0,[x8, #0x8]
7101cf0a74  ldr w2,[x21]
7101cf0a78  bl 0x710334c7d0
7101cf0a7c  mvn w8,w0
7101cf0a80  tst w8,#0xffff
7101cf0a84  b.eq 0x7101cf0b9c
7101cf0a88  and w8,w0,#0xffff
7101cf0a8c  mov w22,w0
7101cf0a90  mov w2,wzr
7101cf0a94  cmp w8,#0x3
7101cf0a98  strb wzr,[sp, #0x228]
7101cf0a9c  str xzr,[sp, #0x220]
7101cf0aa0  b.hi 0x7101cf0ab4
7101cf0aa4  adrp x8,0x710446a000
7101cf0aa8  add x8,x8,#0x5c0
7101cf0aac  sxth x9,w22
7101cf0ab0  ldr w2,[x8, x9, LSL #0x2]
7101cf0ab4  adrp x1,0x710432a000
7101cf0ab8  add x1,x1,#0x1d6
7101cf0abc  add x0,sp,#0x220
7101cf0ac0  add x26,sp,#0x220
7101cf0ac4  bl 0x710062dc20
7101cf0ac8  fmov s8,0x3f800000
7101cf0acc  ldur x0,[x29, #-0x58]
7101cf0ad0  mov v0.16B,v8.16B
7101cf0ad4  add x1,x26,#0x8
7101cf0ad8  bl 0x7103778300
7101cf0adc  ldur x0,[x29, #-0x58]
7101cf0ae0  mov v0.16B,v8.16B
7101cf0ae4  adrp x1,0x71042e7000
7101cf0ae8  add x1,x1,#0x3f1
7101cf0aec  bl 0x7103778300
7101cf0af0  tbz w20,#0x1f,0x7101cf0ba4
7101cf0af4  b 0x7101cf0bdc
7101cf0af8  orr w8,wzr,#0x18
7101cf0afc  madd x8,x23,x8,x19
7101cf0b00  ldr w8,[x8, #0x17c]
7101cf0b04  cmp w8,#0x1
7101cf0b08  b.eq 0x7101cf0e10
7101cf0b0c  sub x0,x29,#0x60
7101cf0b10  bl 0x7101cf2220
7101cf0b14  b 0x7101cf0e7c
7101cf0b18  ldr x8,[x25, #0x8f8]
7101cf0b1c  ldr x22,[x8, #0x8]
7101cf0b20  ldp x8,x9,[x22, #0x110]
7101cf0b24  cmp x8,x9
7101cf0b28  b.ne 0x7101cf0b74
7101cf0b2c  ldr w2,[x22, #0xd8]
7101cf0b30  add x0,sp,#0x220
7101cf0b34  mov x1,x22
7101cf0b38  bl 0x710334c400
7101cf0b3c  ldr x0,[x22, #0x110]
7101cf0b40  cbz x0,0x7101cf0b58
7101cf0b44  add x26,x22,#0x110
7101cf0b48  str x0,[x22, #0x118]
7101cf0b4c  bl 0x710392eb40
7101cf0b50  stp xzr,xzr,[x26, #0x8]
7101cf0b54  str xzr,[x26]
7101cf0b58  ldr x8,[sp, #0x220]
7101cf0b5c  str x8,[x22, #0x110]
7101cf0b60  ldr x8,[sp, #0x228]
7101cf0b64  str x8,[x22, #0x118]
7101cf0b68  ldr x8,[sp, #0x230]
7101cf0b6c  str x8,[x22, #0x120]
7101cf0b70  ldp x8,x9,[x22, #0x110]
7101cf0b74  sub x9,x9,x8
7101cf0b78  asr x9,x9,#0x3
7101cf0b7c  cmp x9,x23
7101cf0b80  b.ls 0x7101cf0b94
7101cf0b84  ldr x1,[x8, x23, LSL #0x3]
7101cf0b88  str x1,[x24]
7101cf0b8c  cbnz x1,0x7101cf0a6c
7101cf0b90  b 0x7101cf0b9c
7101cf0b94  ldr x1,[x24]
7101cf0b98  cbnz x1,0x7101cf0a6c
7101cf0b9c  orr w22,wzr,#0xffff
7101cf0ba0  tbnz w20,#0x1f,0x7101cf0bdc
7101cf0ba4  ldr x8,[x19, #0x160]
7101cf0ba8  ldr x9,[x8, #0x208]
7101cf0bac  ldr x8,[x8, #0x200]
7101cf0bb0  sub x9,x9,x8
7101cf0bb4  orr x10,xzr,#-0x5555555555555556
7101cf0bb8  movk x10,#0xaaab
7101cf0bbc  asr x9,x9,#0x4
7101cf0bc0  mul x9,x9,x10
7101cf0bc4  cmp x9,x23
7101cf0bc8  b.ls 0x7101cf0bdc
7101cf0bcc  orr w9,wzr,#0x30
7101cf0bd0  mul x9,x23,x9
7101cf0bd4  ldr w3,[x8, x9, LSL #0x0]
7101cf0bd8  b 0x7101cf0be0
7101cf0bdc  mov w3,wzr
7101cf0be0  and w8,w22,#0xffff
7101cf0be4  cmp w8,#0x4
7101cf0be8  b.hi 0x7101cf0f20
7101cf0bec  and x8,x22,#0xffff
7101cf0bf0  adrp x9,0x71044fa000
7101cf0bf4  add x9,x9,#0x108
7101cf0bf8  ldrsw x8,[x9, x8, LSL #0x2]
7101cf0bfc  add x8,x8,x9
7101cf0c00  br x8
7101cf0c04  ldr x0,[x19, #0xd8]
7101cf0c08  sub x2,x29,#0x60
7101cf0c0c  mov x1,x21
7101cf0c10  bl 0x7101cf2530
7101cf0c14  b 0x7101cf0df4
7101cf0c18  ldr x0,[x19, #0xd8]
7101cf0c1c  sub x2,x29,#0x60
7101cf0c20  mov x1,x21
7101cf0c24  bl 0x7101cf2800
7101cf0c28  b 0x7101cf0df4
7101cf0c2c  ldur x0,[x29, #-0x58]
7101cf0c30  ldr x20,[x19, #0xd8]
7101cf0c34  fmov s0,0x3f800000
7101cf0c38  adrp x1,0x710433a000
7101cf0c3c  add x1,x1,#0x322
7101cf0c40  bl 0x7103778300
7101cf0c44  adrp x1,0x71042e7000
7101cf0c48  add x1,x1,#0x3e2
7101cf0c4c  add x8,sp,#0x220
7101cf0c50  sub x0,x29,#0x60
7101cf0c54  add x26,sp,#0x220
7101cf0c58  bl 0x7103776910
7101cf0c5c  ldr x8,[x25, #0x8f8]
7101cf0c60  ldr x2,[x24]
7101cf0c64  add x3,sp,#0x220
7101cf0c68  ldr x0,[x8, #0x8]
7101cf0c6c  mov x1,x20
7101cf0c70  bl 0x710334fb10
7101cf0c74  mov w22,w0
7101cf0c78  cmp w0,#0x3
7101cf0c7c  ldr x0,[sp, #0x228]
7101cf0c80  cset w20,eq
7101cf0c84  adrp x8,0x710523d000
7101cf0c88  add x8,x8,#0x9a8
7101cf0c8c  str x8,[sp, #0x220]
7101cf0c90  str xzr,[sp, #0x228]
7101cf0c94  cbz x0,0x7101cf0c9c
7101cf0c98  bl 0x710392eb40
7101cf0c9c  add x8,sp,#0x18e
7101cf0ca0  str wzr,[sp, #0x234]
7101cf0ca4  strh wzr,[sp, #0x238]
7101cf0ca8  strh wzr,[sp, #0x230]
7101cf0cac  ldr x9,[x25, #0x8f8]
7101cf0cb0  add x2,sp,#0x220
7101cf0cb4  str xzr,[sp, #0x228]
7101cf0cb8  mov x1,x21
7101cf0cbc  str xzr,[sp, #0x220]
7101cf0cc0  stur xzr,[x8, #0xff]
7101cf0cc4  mov x8,#0xff0000000000
7101cf0cc8  movk x8,#0x13ff, LSL #48
7101cf0ccc  str x8,[sp, #0x3c8]
7101cf0cd0  mov x8,#0xff0000000000
7101cf0cd4  movk x8,#0x5aff, LSL #48
7101cf0cd8  str x8,[sp, #0x3d0]
7101cf0cdc  mov x8,#0xff0000000000
7101cf0ce0  movk x8,#0xc1ff, LSL #48
7101cf0ce4  str xzr,[sp, #0x288]
7101cf0ce8  str xzr,[sp, #0x280]
7101cf0cec  str xzr,[sp, #0x278]
7101cf0cf0  str xzr,[sp, #0x3a8]
7101cf0cf4  strh wzr,[sp, #0x3b0]
7101cf0cf8  strh wzr,[sp, #0x3dc]
7101cf0cfc  str wzr,[sp, #0x3d8]
7101cf0d00  str x8,[sp, #0x438]
7101cf0d04  ldr x0,[x9, #0x8]
7101cf0d08  bl 0x710334f120
7101cf0d0c  mov w21,w0
7101cf0d10  cmp w22,#0x3
7101cf0d14  b.ne 0x7101cf0d3c
7101cf0d18  cmp w21,#0x3
7101cf0d1c  b.ne 0x7101cf0d3c
7101cf0d20  ldrb w8,[sp, #0x3d8]
7101cf0d24  cmp w8,#0xb
7101cf0d28  csel w2,wzr,w8,hi
7101cf0d2c  adrp x1,0x71043f0000
7101cf0d30  add x1,x1,#0xb8f
7101cf0d34  sub x0,x29,#0x60
7101cf0d38  bl 0x7103778430
7101cf0d3c  cmp w21,#0x3
7101cf0d40  b.ne 0x7101cf0df8
7101cf0d44  ldrh w8,[sp, #0x230]
7101cf0d48  ldr x9,[sp, #0x228]
7101cf0d4c  mov x21,sp
7101cf0d50  ldr x10,[sp, #0x220]
7101cf0d54  add x1,x26,#0x18
7101cf0d58  add x0,x21,#0x14
7101cf0d5c  strh w8,[sp, #0x10]
7101cf0d60  stp x10,x9,[sp]
7101cf0d64  bl 0x71016bc6e0
7101cf0d68  ldr x8,[sp, #0x288]
7101cf0d6c  ldr x9,[sp, #0x280]
7101cf0d70  stp x9,x8,[sp, #0x60]
7101cf0d74  ldr x8,[sp, #0x278]
7101cf0d78  str x8,[sp, #0x58]
7101cf0d7c  ldrb w8,[sp, #0x294]
7101cf0d80  cbz w8,0x7101cf0f5c
7101cf0d84  strb w8,[sp, #0x74]
7101cf0d88  ldrb w8,[sp, #0x295]
7101cf0d8c  cbz w8,0x7101cf0f28
7101cf0d90  strb w8,[sp, #0x75]
7101cf0d94  ldrb w8,[sp, #0x296]
7101cf0d98  cbz w8,0x7101cf0f30
7101cf0d9c  strb w8,[sp, #0x76]
7101cf0da0  ldrb w8,[sp, #0x297]
7101cf0da4  cbz w8,0x7101cf0f38
7101cf0da8  strb w8,[sp, #0x77]
7101cf0dac  ldrb w8,[sp, #0x298]
7101cf0db0  cbz w8,0x7101cf0f40
7101cf0db4  strb w8,[sp, #0x78]
7101cf0db8  ldrb w8,[sp, #0x299]
7101cf0dbc  cbz w8,0x7101cf0f48
7101cf0dc0  strb w8,[sp, #0x79]
7101cf0dc4  ldrb w8,[sp, #0x29a]
7101cf0dc8  cbz w8,0x7101cf0f50
7101cf0dcc  strb w8,[sp, #0x7a]
7101cf0dd0  ldrb w8,[sp, #0x29b]
7101cf0dd4  cbz w8,0x7101cf0f58
7101cf0dd8  strb w8,[sp, #0x7b]
7101cf0ddc  mov w8,#0x8
7101cf0de0  b 0x7101cf0f5c
7101cf0de4  ldr x0,[x19, #0xd8]
7101cf0de8  sub x2,x29,#0x60
7101cf0dec  mov x1,x21
7101cf0df0  bl 0x7101cf23e0
7101cf0df4  mov w20,w0
7101cf0df8  orr w9,wzr,#0x18
7101cf0dfc  madd x9,x23,x9,x19
7101cf0e00  and w8,w20,#0x1
7101cf0e04  str w8,[x9, #0x17c]
7101cf0e08  cmp w8,#0x1
7101cf0e0c  b.ne 0x7101cf0b0c
7101cf0e10  adrp x1,0x71043be000
7101cf0e14  add x1,x1,#0xebf
7101cf0e18  add x8,sp,#0x220
7101cf0e1c  sub x0,x29,#0x60
7101cf0e20  bl 0x71037780e0
7101cf0e24  ldr x19,[sp, #0x228]
7101cf0e28  ldr x0,[x19, #0x8]
7101cf0e2c  cbz x0,0x7101cf0e44
7101cf0e30  ldr x8,[x0]
7101cf0e34  ldr x8,[x8, #0x148]
7101cf0e38  blr x8
7101cf0e3c  mov w20,w0
7101cf0e40  b 0x7101cf0e48
7101cf0e44  mov w20,wzr
7101cf0e48  adrp x8,0x710523d000
7101cf0e4c  add x8,x8,#0x9e8
7101cf0e50  str x8,[sp, #0x220]
7101cf0e54  str xzr,[sp, #0x228]
7101cf0e58  cbz x19,0x7101cf0e64
7101cf0e5c  mov x0,x19
7101cf0e60  bl 0x710392eb40
7101cf0e64  tbz w20,#0x0,0x7101cf0e7c
7101cf0e68  ldur x0,[x29, #-0x58]
7101cf0e6c  fmov s0,0x3f800000
7101cf0e70  adrp x1,0x7104433000
7101cf0e74  add x1,x1,#0x949
7101cf0e78  bl 0x7103778300
7101cf0e7c  adrp x8,0x7105325000
7101cf0e80  ldr x9,[x8, #0xcc0]
7101cf0e84  ldr x8,[x24]
7101cf0e88  ldr x9,[x9, #0x8]
7101cf0e8c  ldr x10,[x9, #0x8]!
7101cf0e90  cbz x10,0x7101cf0ec4
7101cf0e94  mov x11,x9
7101cf0e98  ldr x12,[x10, #0x20]
7101cf0e9c  cmp x12,x8
7101cf0ea0  cset w12,cc
7101cf0ea4  csel x11,x11,x10,cc
7101cf0ea8  ldr x10,[x10, w12, UXTW #0x3]
7101cf0eac  cbnz x10,0x7101cf0e98
7101cf0eb0  cmp x11,x9
7101cf0eb4  b.eq 0x7101cf0ec4
7101cf0eb8  ldr x9,[x11, #0x20]
7101cf0ebc  cmp x9,x8
7101cf0ec0  b.ls 0x7101cf0f10
7101cf0ec4  ldur x0,[x29, #-0x58]
7101cf0ec8  adrp x1,0x71043e0000
7101cf0ecc  add x1,x1,#0x2fd
7101cf0ed0  fmov s0,0x3f800000
7101cf0ed4  bl 0x7103778300
7101cf0ed8  ldur x19,[x29, #-0x58]
7101cf0edc  adrp x8,0x710523d000
7101cf0ee0  add x8,x8,#0x988
7101cf0ee4  stp x8,xzr,[x29, #-0x60]
7101cf0ee8  cbz x19,0x7101cf08b8
7101cf0eec  ldr x0,[x19, #0x18]
7101cf0ef0  adrp x8,0x710523d000
7101cf0ef4  add x8,x8,#0x9a8
7101cf0ef8  stp x8,xzr,[x19, #0x10]
7101cf0efc  cbz x0,0x7101cf0f04
7101cf0f00  bl 0x710392eb40
7101cf0f04  mov x0,x19
7101cf0f08  bl 0x710392eb40
7101cf0f0c  b 0x7101cf08b8
7101cf0f10  ldur x0,[x29, #-0x58]
7101cf0f14  adrp x1,0x710425f000
7101cf0f18  add x1,x1,#0xca0
7101cf0f1c  b 0x7101cf0ed0
7101cf0f20  mov w20,wzr
7101cf0f24  b 0x7101cf0df8
7101cf0f28  mov w8,#0x1
7101cf0f2c  b 0x7101cf0f5c
7101cf0f30  mov w8,#0x2
7101cf0f34  b 0x7101cf0f5c
7101cf0f38  orr w8,wzr,#0x3
7101cf0f3c  b 0x7101cf0f5c
7101cf0f40  mov w8,#0x4
7101cf0f44  b 0x7101cf0f5c
7101cf0f48  mov w8,#0x5
7101cf0f4c  b 0x7101cf0f5c
7101cf0f50  orr w8,wzr,#0x6
7101cf0f54  b 0x7101cf0f5c
7101cf0f58  orr w8,wzr,#0x7
7101cf0f5c  add x9,x21,#0x70
7101cf0f60  add x9,x9,x8
7101cf0f64  strb wzr,[x9, #0x4]
7101cf0f68  str w8,[sp, #0x70]
7101cf0f6c  add x8,sp,#0x220
7101cf0f70  add x0,x21,#0x80
7101cf0f74  add x1,x8,#0x80
7101cf0f78  mov w2,#0x108
7101cf0f7c  bl 0x71039c00e0
7101cf0f80  ldrh w9,[sp, #0x3b0]
7101cf0f84  str wzr,[sp, #0x188]
7101cf0f88  cbz w9,0x7101cf100c
7101cf0f8c  strh w9,[sp, #0x190]
7101cf0f90  ldrh w9,[sp, #0x3b2]
7101cf0f94  mov x8,sp
7101cf0f98  add x8,x8,#0x190
7101cf0f9c  cbz w9,0x7101cf1018
7101cf0fa0  strh w9,[sp, #0x192]
7101cf0fa4  ldrh w9,[sp, #0x3b4]
7101cf0fa8  cbz w9,0x7101cf1020
7101cf0fac  strh w9,[sp, #0x194]
7101cf0fb0  ldrh w9,[sp, #0x3b6]
7101cf0fb4  cbz w9,0x7101cf1028
7101cf0fb8  strh w9,[sp, #0x196]
7101cf0fbc  ldrh w9,[sp, #0x3b8]
7101cf0fc0  cbz w9,0x7101cf1030
7101cf0fc4  strh w9,[sp, #0x198]
7101cf0fc8  ldrh w9,[sp, #0x3ba]
7101cf0fcc  cbz w9,0x7101cf1038
7101cf0fd0  strh w9,[sp, #0x19a]
7101cf0fd4  ldrh w9,[sp, #0x3bc]
7101cf0fd8  cbz w9,0x7101cf1040
7101cf0fdc  strh w9,[sp, #0x19c]
7101cf0fe0  ldrh w9,[sp, #0x3be]
7101cf0fe4  cbz w9,0x7101cf1048
7101cf0fe8  strh w9,[sp, #0x19e]
7101cf0fec  ldrh w9,[sp, #0x3c0]
7101cf0ff0  cbz w9,0x7101cf1050
7101cf0ff4  strh w9,[sp, #0x1a0]
7101cf0ff8  ldrh w9,[sp, #0x3c2]
7101cf0ffc  cbz w9,0x7101cf1058
7101cf1000  strh w9,[sp, #0x1a2]
7101cf1004  mov w9,#0xa
7101cf1008  b 0x7101cf105c
7101cf100c  mov x8,sp
7101cf1010  add x8,x8,#0x190
7101cf1014  b 0x7101cf105c
7101cf1018  mov w9,#0x1
7101cf101c  b 0x7101cf105c
7101cf1020  mov w9,#0x2
7101cf1024  b 0x7101cf105c
7101cf1028  orr w9,wzr,#0x3
7101cf102c  b 0x7101cf105c
7101cf1030  mov w9,#0x4
7101cf1034  b 0x7101cf105c
7101cf1038  mov w9,#0x5
7101cf103c  b 0x7101cf105c
7101cf1040  orr w9,wzr,#0x6
7101cf1044  b 0x7101cf105c
7101cf1048  orr w9,wzr,#0x7
7101cf104c  b 0x7101cf105c
7101cf1050  mov w9,#0x8
7101cf1054  b 0x7101cf105c
7101cf1058  mov w9,#0x9
7101cf105c  mov x11,sp
7101cf1060  add x11,x11,w9, UXTW  #0x1
7101cf1064  strh wzr,[x11, #0x190]
7101cf1068  str w9,[sp, #0x18c]
7101cf106c  ldrh w9,[sp, #0x190]
7101cf1070  mov w10,#0x9dc5
7101cf1074  movk w10,#0x811c, LSL #16
7101cf1078  cbz w9,0x7101cf1098
7101cf107c  add x8,x8,#0x2
7101cf1080  mov w11,#0x89
7101cf1084  mul w10,w10,w11
7101cf1088  and w9,w9,#0xffff
7101cf108c  eor w10,w10,w9
7101cf1090  ldrh w9,[x8], #0x2
7101cf1094  cbnz w9,0x7101cf1084
7101cf1098  ldr x8,[sp, #0x3d0]
7101cf109c  str x8,[sp, #0x1b0]
7101cf10a0  ldr x8,[sp, #0x3c8]
7101cf10a4  ldr x9,[sp, #0x3f0]
7101cf10a8  str x9,[sp, #0x1d0]
7101cf10ac  ldr x9,[sp, #0x3e0]
7101cf10b0  ldur x0,[x29, #-0x58]
7101cf10b4  str x8,[sp, #0x1a8]
7101cf10b8  ldr x8,[sp, #0x3e8]
7101cf10bc  stp x9,x8,[sp, #0x1c0]
7101cf10c0  ldr x8,[sp, #0x3d8]
7101cf10c4  str x8,[sp, #0x1b8]
7101cf10c8  ldr x8,[sp, #0x410]
7101cf10cc  str x8,[sp, #0x1f0]
7101cf10d0  ldr x8,[sp, #0x408]
7101cf10d4  str x8,[sp, #0x1e8]
7101cf10d8  ldr x8,[sp, #0x400]
7101cf10dc  str x8,[sp, #0x1e0]
7101cf10e0  ldr x8,[sp, #0x3f8]
7101cf10e4  str x8,[sp, #0x1d8]
7101cf10e8  ldr x8,[sp, #0x430]
7101cf10ec  str x8,[sp, #0x210]
7101cf10f0  ldr x8,[sp, #0x428]
7101cf10f4  str x8,[sp, #0x208]
7101cf10f8  ldr x8,[sp, #0x420]
7101cf10fc  str x8,[sp, #0x200]
7101cf1100  ldr x8,[sp, #0x418]
7101cf1104  str x8,[sp, #0x1f8]
7101cf1108  ldr x8,[sp, #0x438]
7101cf110c  str x8,[sp, #0x218]
7101cf1110  ldrh w8,[sp, #0x9c]
7101cf1114  mov w9,#0x1
7101cf1118  fmov s0,0x3f800000
7101cf111c  str w10,[sp, #0x188]
7101cf1120  adrp x10,0x710438c000
7101cf1124  add x10,x10,#0xc91
7101cf1128  strb w9,[sp, #0x8c]
7101cf112c  adrp x9,0x71042a3000
7101cf1130  add x9,x9,#0x221
7101cf1134  cmp w8,#0x0
7101cf1138  csel x1,x9,x10,eq
7101cf113c  bl 0x7103778300
7101cf1140  b 0x7101cf0df8
7101cf1144  add x0,x8,#0x200
7101cf1148  bl 0x71039c1330
