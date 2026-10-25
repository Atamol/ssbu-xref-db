// addr:      7101d30af0
// offset:    0x1d30af0
// name:      FUN_7101d30af0
// mangled:   
// size:      796

7101d30af0  sub sp,sp,#0x80
7101d30af4  stp x20,x19,[sp, #0x60]
7101d30af8  stp x29,x30,[sp, #0x70]
7101d30afc  add x29,sp,#0x70
7101d30b00  mov w19,w1
7101d30b04  mov x20,x0
7101d30b08  add x0,x0,#0xd0
7101d30b0c  adrp x1,0x710425f000
7101d30b10  add x1,x1,#0x6ec
7101d30b14  sub x8,x29,#0x28
7101d30b18  bl 0x7103776910
7101d30b1c  cmp w19,#0x4
7101d30b20  b.cs 0x7101d30bec
7101d30b24  add x8,x20,w19, SXTW  #0x3
7101d30b28  ldr x8,[x8, #0xe8]
7101d30b2c  ldr w8,[x8, #0x254]
7101d30b30  cmp w19,#0x3
7101d30b34  strb wzr,[sp, #0x8]
7101d30b38  str xzr,[sp]
7101d30b3c  b.hi 0x7101d30c10
7101d30b40  mov w9,w19
7101d30b44  adrp x10,0x71044fa000
7101d30b48  add x10,x10,#0x490
7101d30b4c  ldrsw x9,[x10, x9, LSL #0x2]
7101d30b50  add x9,x9,x10
7101d30b54  br x9
7101d30b58  mov x11,#0x7462
7101d30b5c  movk x11,#0x5f6e, LSL #16
7101d30b60  movk x11,#0x656b, LSL #32
7101d30b64  movk x11,#0x5f79, LSL #48
7101d30b68  str x11,[sp, #0x10]
7101d30b6c  mov w11,#0x746f
7101d30b70  strh w11,[sp, #0x18]
7101d30b74  mov x11,#0x5f68
7101d30b78  movk x11,#0x6568, LSL #16
7101d30b7c  mov x10,#0x6e6d
7101d30b80  movk x10,#0x5f75, LSL #16
7101d30b84  strb wzr,[sp, #0x24]
7101d30b88  movk x11,#0x706c, LSL #32
7101d30b8c  movk x11,#0x765f, LSL #48
7101d30b90  stur x11,[sp, #0x1a]
7101d30b94  movk x10,#0x706f, LSL #32
7101d30b98  movk x10,#0x5f74, LSL #48
7101d30b9c  str x10,[sp, #0x8]
7101d30ba0  mov w11,#0x6269
7101d30ba4  mov x10,sp
7101d30ba8  strh w11,[sp, #0x22]
7101d30bac  orr w11,wzr,#0x1c
7101d30bb0  mov w9,#0x9dc5
7101d30bb4  movk w9,#0x811c, LSL #16
7101d30bb8  add x10,x10,#0x9
7101d30bbc  str w11,[sp, #0x4]
7101d30bc0  mov w12,#0x6d
7101d30bc4  mov w11,#0x89
7101d30bc8  mul w9,w9,w11
7101d30bcc  and w12,w12,#0xff
7101d30bd0  eor w9,w9,w12
7101d30bd4  ldrb w12,[x10], #0x1
7101d30bd8  cbnz w12,0x7101d30bc8
7101d30bdc  orr w10,wzr,#0x1c
7101d30be0  str w9,[sp]
7101d30be4  cbnz w8,0x7101d30d54
7101d30be8  b 0x7101d30d60
7101d30bec  ldur x19,[x29, #-0x20]
7101d30bf0  ldr x0,[x19, #0x10]
7101d30bf4  cbz x0,0x7101d30de4
7101d30bf8  mov x1,sp
7101d30bfc  mov w2,wzr
7101d30c00  mov w3,wzr
7101d30c04  str wzr,[sp]
7101d30c08  bl 0x71037a2270
7101d30c0c  b 0x7101d30de4
7101d30c10  ldur x8,[x29, #-0x20]
7101d30c14  ldr x0,[x8, #0x10]
7101d30c18  cbz x0,0x7101d30de0
7101d30c1c  sub x1,x29,#0x14
7101d30c20  mov w2,wzr
7101d30c24  mov w3,wzr
7101d30c28  stur wzr,[x29, #-0x14]
7101d30c2c  bl 0x71037a2270
7101d30c30  b 0x7101d30de0
7101d30c34  mov x11,#0x7462
7101d30c38  movk x11,#0x5f6e, LSL #16
7101d30c3c  movk x11,#0x656b, LSL #32
7101d30c40  movk x11,#0x5f79, LSL #48
7101d30c44  str x11,[sp, #0x10]
7101d30c48  mov w11,#0x746f
7101d30c4c  strh w11,[sp, #0x18]
7101d30c50  mov x11,#0x5f68
7101d30c54  movk x11,#0x6568, LSL #16
7101d30c58  mov x10,#0x6e6d
7101d30c5c  movk x10,#0x5f75, LSL #16
7101d30c60  strb wzr,[sp, #0x26]
7101d30c64  movk x11,#0x706c, LSL #32
7101d30c68  movk x11,#0x735f, LSL #48
7101d30c6c  stur x11,[sp, #0x1a]
7101d30c70  movk x10,#0x706f, LSL #32
7101d30c74  movk x10,#0x5f74, LSL #48
7101d30c78  str x10,[sp, #0x8]
7101d30c7c  mov w11,#0x616d
7101d30c80  movk w11,#0x6873, LSL #16
7101d30c84  stur w11,[sp, #0x22]
7101d30c88  mov x10,sp
7101d30c8c  orr w11,wzr,#0x1e
7101d30c90  str w11,[sp, #0x4]
7101d30c94  mov w9,#0x9dc5
7101d30c98  movk w9,#0x811c, LSL #16
7101d30c9c  add x10,x10,#0x9
7101d30ca0  mov w12,#0x6d
7101d30ca4  mov w11,#0x89
7101d30ca8  mul w9,w9,w11
7101d30cac  and w12,w12,#0xff
7101d30cb0  eor w9,w9,w12
7101d30cb4  ldrb w12,[x10], #0x1
7101d30cb8  cbnz w12,0x7101d30ca8
7101d30cbc  orr w10,wzr,#0x1e
7101d30cc0  str w9,[sp]
7101d30cc4  cbnz w8,0x7101d30d54
7101d30cc8  b 0x7101d30d60
7101d30ccc  mov x10,#0x6e6d
7101d30cd0  movk x10,#0x5f75, LSL #16
7101d30cd4  mov x12,#0x7462
7101d30cd8  movk x12,#0x5f6e, LSL #16
7101d30cdc  movk x10,#0x706f, LSL #32
7101d30ce0  movk x10,#0x5f74, LSL #48
7101d30ce4  movk x12,#0x656b, LSL #32
7101d30ce8  movk x12,#0x5f79, LSL #48
7101d30cec  mov x11,sp
7101d30cf0  stp x10,x12,[sp, #0x8]
7101d30cf4  mov w10,#0x746f
7101d30cf8  strh w10,[sp, #0x18]
7101d30cfc  mov x10,#0x5f68
7101d30d00  movk x10,#0x6568, LSL #16
7101d30d04  movk x10,#0x706c, LSL #32
7101d30d08  movk x10,#0x6a5f, LSL #48
7101d30d0c  stur x10,[sp, #0x1a]
7101d30d10  mov w10,#0x6d75
7101d30d14  movk w10,#0x70, LSL #16
7101d30d18  stur w10,[sp, #0x22]
7101d30d1c  mov w9,#0x9dc5
7101d30d20  movk w9,#0x811c, LSL #16
7101d30d24  add x11,x11,#0x9
7101d30d28  mov w10,#0x1d
7101d30d2c  str w10,[sp, #0x4]
7101d30d30  mov w13,#0x6d
7101d30d34  mov w12,#0x89
7101d30d38  mul w9,w9,w12
7101d30d3c  and w13,w13,#0xff
7101d30d40  eor w9,w9,w13
7101d30d44  ldrb w13,[x11], #0x1
7101d30d48  cbnz w13,0x7101d30d38
7101d30d4c  str w9,[sp]
7101d30d50  cbz w8,0x7101d30d60
7101d30d54  mov x8,sp
7101d30d58  add x1,x8,#0x8
7101d30d5c  b 0x7101d30dd8
7101d30d60  mov x9,sp
7101d30d64  mov w11,#0x5f
7101d30d68  add x1,x9,#0x8
7101d30d6c  add w8,w10,#0x1
7101d30d70  add w12,w10,#0x2
7101d30d74  strb w11,[x1, w10, UXTW ]
7101d30d78  mov w11,#0x6f
7101d30d7c  strb w11,[x1, w8, UXTW ]
7101d30d80  mov w8,#0x66
7101d30d84  add w11,w10,#0x4
7101d30d88  add w10,w10,#0x3
7101d30d8c  strb w8,[x1, w12, UXTW ]
7101d30d90  str w11,[sp, #0x4]
7101d30d94  strb w8,[x1, w10, UXTW ]
7101d30d98  mov w8,#0x9dc5
7101d30d9c  movk w8,#0x811c, LSL #16
7101d30da0  strb wzr,[x1, w11, UXTW ]
7101d30da4  ldrb w10,[sp, #0x8]
7101d30da8  cbz w10,0x7101d30dc8
7101d30dac  add x9,x9,#0x9
7101d30db0  mov w11,#0x89
7101d30db4  mul w8,w8,w11
7101d30db8  and w10,w10,#0xff
7101d30dbc  eor w8,w8,w10
7101d30dc0  ldrb w10,[x9], #0x1
7101d30dc4  cbnz w10,0x7101d30db4
7101d30dc8  str w8,[sp]
7101d30dcc  b 0x7101d30dd8
7101d30dd0  adrp x1,0x7104454000
7101d30dd4  add x1,x1,#0xcf7
7101d30dd8  sub x0,x29,#0x28
7101d30ddc  bl 0x710377a120
7101d30de0  ldur x19,[x29, #-0x20]
7101d30de4  adrp x8,0x710523d000
7101d30de8  add x8,x8,#0x9a8
7101d30dec  stp x8,xzr,[x29, #-0x28]
7101d30df0  cbz x19,0x7101d30dfc
7101d30df4  mov x0,x19
7101d30df8  bl 0x710392eb40
7101d30dfc  ldp x29,x30,[sp, #0x70]
7101d30e00  ldp x20,x19,[sp, #0x60]
7101d30e04  add sp,sp,#0x80
7101d30e08  ret
