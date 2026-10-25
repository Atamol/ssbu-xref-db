// addr:      7101da6780
// offset:    0x1da6780
// name:      FUN_7101da6780
// mangled:   
// size:      3108

7101da6780  sub sp,sp,#0x1c0
7101da6784  stp d9,d8,[sp, #0x150]
7101da6788  stp x28,x27,[sp, #0x160]
7101da678c  stp x26,x25,[sp, #0x170]
7101da6790  stp x24,x23,[sp, #0x180]
7101da6794  stp x22,x21,[sp, #0x190]
7101da6798  stp x20,x19,[sp, #0x1a0]
7101da679c  stp x29,x30,[sp, #0x1b0]
7101da67a0  add x29,sp,#0x1b0
7101da67a4  mov w19,w1
7101da67a8  mov x22,x0
7101da67ac  add x0,x0,#0x50
7101da67b0  adrp x1,0x710438d000
7101da67b4  add x1,x1,#0x7
7101da67b8  sub x8,x29,#0xc0
7101da67bc  bl 0x7103776640
7101da67c0  adrp x20,0x710532f000
7101da67c4  ldr x8,[x20, #0x730]
7101da67c8  ldr x28,[x8, #0x8]
7101da67cc  ldrh w21,[x22, #0x98]
7101da67d0  adrp x1,0x710439d000
7101da67d4  add x1,x1,#0x945
7101da67d8  sub x8,x29,#0xd0
7101da67dc  sub x0,x29,#0xc0
7101da67e0  bl 0x7103776640
7101da67e4  tbz w19,#0x0,0x7101da6a40
7101da67e8  orr w8,wzr,#0xffff
7101da67ec  cmp w21,w8
7101da67f0  b.eq 0x7101da6a40
7101da67f4  sxth w8,w21
7101da67f8  cmp w8,#0x7cf
7101da67fc  b.gt 0x7101da6a40
7101da6800  ldr x8,[x28, #0x1d8]
7101da6804  add x9,x8,w21, SXTH  #0x1
7101da6808  ldrh w9,[x9, #0x60]
7101da680c  ldp x10,x8,[x8, #0x20]
7101da6810  sub x8,x8,x10
7101da6814  lsr x8,x8,#0x6
7101da6818  mov w23,#0xcccd
7101da681c  movk w23,#0xcccc, LSL #16
7101da6820  mul w8,w8,w23
7101da6824  cmp w8,w9
7101da6828  b.ls 0x7101da6a40
7101da682c  ldur x8,[x29, #-0xc8]
7101da6830  ldr x8,[x8, #0x8]
7101da6834  sxth x25,w21
7101da6838  cbz x8,0x7101da6850
7101da683c  ldr x8,[x8, #0x18]
7101da6840  cbz x8,0x7101da6850
7101da6844  ldrb w9,[x8, #0x58]
7101da6848  orr w9,w9,#0x1
7101da684c  strb w9,[x8, #0x58]
7101da6850  ldur x19,[x29, #-0xb8]
7101da6854  fmov s0,0x3f800000
7101da6858  adrp x1,0x71042f8000
7101da685c  add x1,x1,#0x82f
7101da6860  mov x0,x19
7101da6864  bl 0x7103778300
7101da6868  sub x3,x29,#0xd0
7101da686c  mov w4,#0x2
7101da6870  mov x0,x22
7101da6874  mov x1,x21
7101da6878  mov w2,wzr
7101da687c  mov w5,wzr
7101da6880  bl 0x7101da7f90
7101da6884  ldr x8,[x28, #0x1d8]
7101da6888  lsl x24,x25,#0x1
7101da688c  add x9,x8,x24
7101da6890  ldp x10,x8,[x8, #0x20]
7101da6894  ldrh w9,[x9, #0x60]
7101da6898  sub x8,x8,x10
7101da689c  orr x11,xzr,#-0x3333333333333334
7101da68a0  movk x11,#0xcccd
7101da68a4  adrp x12,0x7105182000
7101da68a8  add x12,x12,#0xb08
7101da68ac  asr x8,x8,#0x6
7101da68b0  mul x8,x8,x11
7101da68b4  mov w11,#0x140
7101da68b8  madd x10,x9,x11,x10
7101da68bc  cmp x8,x9
7101da68c0  adrp x1,0x71042b1000
7101da68c4  add x1,x1,#0xeff
7101da68c8  add x8,sp,#0xd0
7101da68cc  sub x0,x29,#0xc0
7101da68d0  csel x27,x10,x12,hi
7101da68d4  bl 0x7103776640
7101da68d8  ldr x9,[x28, #0x1d8]
7101da68dc  add x8,x9,x24
7101da68e0  ldrh w10,[x8, #0x60]
7101da68e4  ldp x8,x11,[x9, #0x20]
7101da68e8  sub x11,x11,x8
7101da68ec  lsr x11,x11,#0x6
7101da68f0  mul w11,w11,w23
7101da68f4  cmp w11,w10
7101da68f8  b.ls 0x7101da6b00
7101da68fc  add x9,x9,x10, LSL #0x1
7101da6900  ldrh w9,[x9, #0x1000]
7101da6904  cmp w11,w9
7101da6908  b.ls 0x7101da6b00
7101da690c  mov w10,#0x140
7101da6910  mul x9,x9,x10
7101da6914  ldrsh w8,[x8, x9, LSL #0x0]
7101da6918  cmn w8,#0x1
7101da691c  b.eq 0x7101da6b00
7101da6920  fmov s8,0x3f800000
7101da6924  ldr x24,[sp, #0xd8]
7101da6928  adrp x1,0x710438b000
7101da692c  add x1,x1,#0x28f
7101da6930  mov v0.16B,v8.16B
7101da6934  mov x23,#0x26c7
7101da6938  movk x23,#0xe11d, LSL #16
7101da693c  movk x23,#0xff14, LSL #32
7101da6940  movk x23,#0x71ff, LSL #48
7101da6944  mov x0,x24
7101da6948  bl 0x7103778300
7101da694c  mov v0.16B,v8.16B
7101da6950  adrp x1,0x710437a000
7101da6954  add x1,x1,#0x53a
7101da6958  mov x0,x24
7101da695c  str x24,[sp, #0x18]
7101da6960  bl 0x7103778300
7101da6964  ldr x24,[x22]
7101da6968  mov w1,#0x13
7101da696c  mov x0,x23
7101da6970  bl 0x7103238e70
7101da6974  tst x0,#0xffffffffff
7101da6978  stur x0,[x29, #-0xb0]
7101da697c  b.eq 0x7101da6994
7101da6980  ldr x0,[x24]
7101da6984  ldrsw x2,[x0, #0x70]
7101da6988  ldr w3,[x0, #0x68]
7101da698c  sub x1,x29,#0xb0
7101da6990  bl 0x710323c4e0
7101da6994  ldr x0,[x22]
7101da6998  mov x1,x23
7101da699c  bl 0x710323f760
7101da69a0  mov x24,x0
7101da69a4  adrp x1,0x71042a0000
7101da69a8  add x1,x1,#0xe5b
7101da69ac  sub x8,x29,#0xb0
7101da69b0  add x0,sp,#0xd0
7101da69b4  bl 0x7103776640
7101da69b8  adrp x1,0x71043ef000
7101da69bc  add x1,x1,#0x356
7101da69c0  add x8,sp,#0x78
7101da69c4  sub x0,x29,#0xb0
7101da69c8  bl 0x7103776910
7101da69cc  ldr x23,[sp, #0x80]
7101da69d0  mov x0,x23
7101da69d4  mov x1,x24
7101da69d8  bl 0x7103778b80
7101da69dc  adrp x24,0x710523d000
7101da69e0  add x24,x24,#0x9a8
7101da69e4  stp x24,xzr,[sp, #0x78]
7101da69e8  cbz x23,0x7101da69f4
7101da69ec  mov x0,x23
7101da69f0  bl 0x710392eb40
7101da69f4  adrp x1,0x7104338000
7101da69f8  add x1,x1,#0xd31
7101da69fc  add x8,sp,#0x78
7101da6a00  sub x0,x29,#0xb0
7101da6a04  bl 0x7103776910
7101da6a08  adrp x1,0x710427e000
7101da6a0c  add x1,x1,#0x8d4
7101da6a10  add x0,sp,#0x78
7101da6a14  bl 0x710377a120
7101da6a18  ldr x0,[sp, #0x80]
7101da6a1c  stp x24,xzr,[sp, #0x78]
7101da6a20  cbz x0,0x7101da6a28
7101da6a24  bl 0x710392eb40
7101da6a28  ldur x23,[x29, #-0xa8]
7101da6a2c  adrp x8,0x710523d000
7101da6a30  add x8,x8,#0x988
7101da6a34  stp x8,xzr,[x29, #-0xb0]
7101da6a38  cbnz x23,0x7101da6c38
7101da6a3c  b 0x7101da6c68
7101da6a40  ldur x19,[x29, #-0xb8]
7101da6a44  fmov s0,0x3f800000
7101da6a48  adrp x1,0x71042c5000
7101da6a4c  add x1,x1,#0x345
7101da6a50  mov x0,x19
7101da6a54  bl 0x7103778300
7101da6a58  ldur x8,[x29, #-0xc8]
7101da6a5c  ldr x8,[x8, #0x8]
7101da6a60  cbz x8,0x7101da6a78
7101da6a64  ldr x8,[x8, #0x18]
7101da6a68  cbz x8,0x7101da6a78
7101da6a6c  ldrb w9,[x8, #0x58]
7101da6a70  and w9,w9,#0xfe
7101da6a74  strb w9,[x8, #0x58]
7101da6a78  sub x0,x29,#0xd0
7101da6a7c  bl 0x71025af650
7101da6a80  ldur x20,[x29, #-0xc8]
7101da6a84  adrp x21,0x710523d000
7101da6a88  add x21,x21,#0x988
7101da6a8c  stp x21,xzr,[x29, #-0xd0]
7101da6a90  cbz x20,0x7101da6ab4
7101da6a94  ldr x0,[x20, #0x18]
7101da6a98  adrp x8,0x710523d000
7101da6a9c  add x8,x8,#0x9a8
7101da6aa0  stp x8,xzr,[x20, #0x10]
7101da6aa4  cbz x0,0x7101da6aac
7101da6aa8  bl 0x710392eb40
7101da6aac  mov x0,x20
7101da6ab0  bl 0x710392eb40
7101da6ab4  stp x21,xzr,[x29, #-0xc0]
7101da6ab8  cbz x19,0x7101da6adc
7101da6abc  ldr x0,[x19, #0x18]
7101da6ac0  adrp x8,0x710523d000
7101da6ac4  add x8,x8,#0x9a8
7101da6ac8  stp x8,xzr,[x19, #0x10]
7101da6acc  cbz x0,0x7101da6ad4
7101da6ad0  bl 0x710392eb40
7101da6ad4  mov x0,x19
7101da6ad8  bl 0x710392eb40
7101da6adc  ldp d9,d8,[sp, #0x150]
7101da6ae0  ldp x29,x30,[sp, #0x1b0]
7101da6ae4  ldp x20,x19,[sp, #0x1a0]
7101da6ae8  ldp x22,x21,[sp, #0x190]
7101da6aec  ldp x24,x23,[sp, #0x180]
7101da6af0  ldp x26,x25,[sp, #0x170]
7101da6af4  ldp x28,x27,[sp, #0x160]
7101da6af8  add sp,sp,#0x1c0
7101da6afc  ret
7101da6b00  ldrh w8,[x27, #0x90]
7101da6b04  ldr x23,[sp, #0xd8]
7101da6b08  str x23,[sp, #0x18]
7101da6b0c  cbz w8,0x7101da6c54
7101da6b10  fmov s8,0x3f800000
7101da6b14  mov v0.16B,v8.16B
7101da6b18  adrp x1,0x710438b000
7101da6b1c  add x1,x1,#0x28f
7101da6b20  mov x0,x23
7101da6b24  bl 0x7103778300
7101da6b28  mov v0.16B,v8.16B
7101da6b2c  adrp x1,0x7104463000
7101da6b30  add x1,x1,#0x92a
7101da6b34  mov x0,x23
7101da6b38  bl 0x7103778300
7101da6b3c  ldr x8,[x20, #0x730]
7101da6b40  ldr x23,[x8, #0x8]
7101da6b44  ldrh w2,[x27, #0x90]
7101da6b48  add x1,x23,#0x210
7101da6b4c  sub x0,x29,#0xb0
7101da6b50  bl 0x71032a0c90
7101da6b54  ldr x0,[x23, #0x218]
7101da6b58  ldrh w1,[x27, #0x90]
7101da6b5c  bl 0x71032a1630
7101da6b60  ldr x24,[x22]
7101da6b64  mov w1,#0x13
7101da6b68  mov x23,x0
7101da6b6c  bl 0x7103238e70
7101da6b70  tst x0,#0xffffffffff
7101da6b74  str x0,[sp, #0x78]
7101da6b78  b.eq 0x7101da6b90
7101da6b7c  ldr x0,[x24]
7101da6b80  ldrsw x2,[x0, #0x70]
7101da6b84  ldr w3,[x0, #0x68]
7101da6b88  add x1,sp,#0x78
7101da6b8c  bl 0x710323c4e0
7101da6b90  ldr x0,[x22]
7101da6b94  mov x1,x23
7101da6b98  bl 0x710323f760
7101da6b9c  mov x24,x0
7101da6ba0  adrp x1,0x71042a0000
7101da6ba4  add x1,x1,#0xe5b
7101da6ba8  add x8,sp,#0x78
7101da6bac  add x0,sp,#0xd0
7101da6bb0  bl 0x7103776640
7101da6bb4  adrp x1,0x71043ef000
7101da6bb8  add x1,x1,#0x356
7101da6bbc  add x8,sp,#0x20
7101da6bc0  add x0,sp,#0x78
7101da6bc4  bl 0x7103776910
7101da6bc8  ldr x23,[sp, #0x28]
7101da6bcc  mov x0,x23
7101da6bd0  mov x1,x24
7101da6bd4  bl 0x7103778b80
7101da6bd8  adrp x24,0x710523d000
7101da6bdc  add x24,x24,#0x9a8
7101da6be0  stp x24,xzr,[sp, #0x20]
7101da6be4  cbz x23,0x7101da6bf0
7101da6be8  mov x0,x23
7101da6bec  bl 0x710392eb40
7101da6bf0  adrp x1,0x7104338000
7101da6bf4  add x1,x1,#0xd31
7101da6bf8  add x8,sp,#0x20
7101da6bfc  add x0,sp,#0x78
7101da6c00  bl 0x7103776910
7101da6c04  sub x8,x29,#0xb0
7101da6c08  add x1,x8,#0x8
7101da6c0c  add x0,sp,#0x20
7101da6c10  bl 0x710377a120
7101da6c14  ldr x0,[sp, #0x28]
7101da6c18  stp x24,xzr,[sp, #0x20]
7101da6c1c  cbz x0,0x7101da6c24
7101da6c20  bl 0x710392eb40
7101da6c24  ldr x23,[sp, #0x80]
7101da6c28  adrp x8,0x710523d000
7101da6c2c  add x8,x8,#0x988
7101da6c30  stp x8,xzr,[sp, #0x78]
7101da6c34  cbz x23,0x7101da6c68
7101da6c38  ldr x0,[x23, #0x18]
7101da6c3c  stp x24,xzr,[x23, #0x10]
7101da6c40  cbz x0,0x7101da6c48
7101da6c44  bl 0x710392eb40
7101da6c48  mov x0,x23
7101da6c4c  bl 0x710392eb40
7101da6c50  b 0x7101da6c68
7101da6c54  fmov s0,0x3f800000
7101da6c58  adrp x1,0x7104348000
7101da6c5c  add x1,x1,#0x100
7101da6c60  mov x0,x23
7101da6c64  bl 0x7103778300
7101da6c68  adrp x1,0x7104292000
7101da6c6c  add x1,x1,#0x1e3
7101da6c70  add x8,sp,#0xc0
7101da6c74  sub x0,x29,#0xc0
7101da6c78  bl 0x7103776640
7101da6c7c  ldrb w8,[x27, #0x6c]
7101da6c80  sub w8,w8,#0x1
7101da6c84  and x9,x8,#0xff
7101da6c88  lsl x9,x9,#0x3
7101da6c8c  mov w10,#0x301
7101da6c90  movk w10,#0x2, LSL #16
7101da6c94  lsr w9,w10,w9
7101da6c98  cmp w8,#0x3
7101da6c9c  csel w1,w9,wzr,cc
7101da6ca0  add x0,sp,#0x78
7101da6ca4  mov w2,wzr
7101da6ca8  add x23,sp,#0x78
7101da6cac  bl 0x710339dde0
7101da6cb0  fmov s8,0x3f800000
7101da6cb4  add x24,x23,#0x8
7101da6cb8  ldr x23,[sp, #0xc8]
7101da6cbc  mov x0,x23
7101da6cc0  mov v0.16B,v8.16B
7101da6cc4  mov x1,x24
7101da6cc8  bl 0x7103778300
7101da6ccc  ldrh w8,[x27, #0x6a]
7101da6cd0  cbz w8,0x7101da6d4c
7101da6cd4  fmov s0,0x3f800000
7101da6cd8  adrp x1,0x7104308000
7101da6cdc  add x1,x1,#0x9e5
7101da6ce0  mov x0,x23
7101da6ce4  str x25,[sp, #0x8]
7101da6ce8  bl 0x7103778300
7101da6cec  ldr x8,[x20, #0x730]
7101da6cf0  ldr x25,[x8, #0x8]
7101da6cf4  ldrh w2,[x27, #0x6a]
7101da6cf8  add x1,x25,#0x210
7101da6cfc  sub x0,x29,#0xb0
7101da6d00  bl 0x71032a0c90
7101da6d04  ldr x0,[x25, #0x218]
7101da6d08  ldrh w1,[x27, #0x6a]
7101da6d0c  bl 0x71032a1630
7101da6d10  mov x26,x0
7101da6d14  add x0,sp,#0x20
7101da6d18  bl 0x7103776290
7101da6d1c  ldrb w8,[x27, #0x6c]
7101da6d20  cmp w8,#0x3
7101da6d24  str x27,[sp, #0x10]
7101da6d28  b.hi 0x7101da6d64
7101da6d2c  adrp x9,0x71044fb000
7101da6d30  add x9,x9,#0x488
7101da6d34  ldrsw x8,[x9, x8, LSL #0x2]
7101da6d38  add x8,x8,x9
7101da6d3c  br x8
7101da6d40  adrp x1,0x710426d000
7101da6d44  add x1,x1,#0xc34
7101da6d48  b 0x7101da6d84
7101da6d4c  fmov s0,0x3f800000
7101da6d50  adrp x1,0x7104443000
7101da6d54  add x1,x1,#0xcf1
7101da6d58  mov x0,x23
7101da6d5c  bl 0x7103778300
7101da6d60  b 0x7101da6eac
7101da6d64  adrp x1,0x710425d000
7101da6d68  add x1,x1,#0x181
7101da6d6c  b 0x7101da6d84
7101da6d70  adrp x1,0x7104430000
7101da6d74  add x1,x1,#0xf2c
7101da6d78  b 0x7101da6d84
7101da6d7c  adrp x1,0x7104420000
7101da6d80  add x1,x1,#0x127
7101da6d84  add x8,sp,#0x68
7101da6d88  add x0,sp,#0xc0
7101da6d8c  bl 0x7103776640
7101da6d90  ldr x25,[sp, #0x70]
7101da6d94  ldr x27,[sp, #0x28]
7101da6d98  str xzr,[sp, #0x70]
7101da6d9c  str x25,[sp, #0x28]
7101da6da0  cbz x27,0x7101da6dc4
7101da6da4  ldr x0,[x27, #0x18]
7101da6da8  adrp x8,0x710523d000
7101da6dac  add x8,x8,#0x9a8
7101da6db0  stp x8,xzr,[x27, #0x10]
7101da6db4  cbz x0,0x7101da6dbc
7101da6db8  bl 0x710392eb40
7101da6dbc  mov x0,x27
7101da6dc0  bl 0x710392eb40
7101da6dc4  adrp x8,0x710523d000
7101da6dc8  add x8,x8,#0x988
7101da6dcc  mov w1,#0x13
7101da6dd0  stp x8,xzr,[sp, #0x68]
7101da6dd4  ldr x27,[x22]
7101da6dd8  mov x0,x26
7101da6ddc  bl 0x7103238e70
7101da6de0  tst x0,#0xffffffffff
7101da6de4  str x0,[sp, #0x68]
7101da6de8  b.eq 0x7101da6e00
7101da6dec  ldr x0,[x27]
7101da6df0  ldrsw x2,[x0, #0x70]
7101da6df4  ldr w3,[x0, #0x68]
7101da6df8  add x1,sp,#0x68
7101da6dfc  bl 0x710323c4e0
7101da6e00  ldr x0,[x22]
7101da6e04  mov x1,x26
7101da6e08  bl 0x710323f760
7101da6e0c  mov x27,x0
7101da6e10  adrp x1,0x71043ef000
7101da6e14  add x1,x1,#0x356
7101da6e18  add x8,sp,#0x68
7101da6e1c  add x0,sp,#0x20
7101da6e20  bl 0x7103776910
7101da6e24  ldr x26,[sp, #0x70]
7101da6e28  mov x0,x26
7101da6e2c  mov x1,x27
7101da6e30  bl 0x7103778b80
7101da6e34  adrp x27,0x710523d000
7101da6e38  add x27,x27,#0x9a8
7101da6e3c  stp x27,xzr,[sp, #0x68]
7101da6e40  cbz x26,0x7101da6e4c
7101da6e44  mov x0,x26
7101da6e48  bl 0x710392eb40
7101da6e4c  adrp x1,0x7104338000
7101da6e50  add x1,x1,#0xd31
7101da6e54  add x8,sp,#0x68
7101da6e58  add x0,sp,#0x20
7101da6e5c  bl 0x7103776910
7101da6e60  sub x8,x29,#0xb0
7101da6e64  add x1,x8,#0x8
7101da6e68  add x0,sp,#0x68
7101da6e6c  bl 0x710377a120
7101da6e70  ldr x0,[sp, #0x70]
7101da6e74  stp x27,xzr,[sp, #0x68]
7101da6e78  cbz x0,0x7101da6e80
7101da6e7c  bl 0x710392eb40
7101da6e80  adrp x8,0x710523d000
7101da6e84  add x8,x8,#0x988
7101da6e88  stp x8,xzr,[sp, #0x20]
7101da6e8c  cbz x25,0x7101da6ea8
7101da6e90  ldr x0,[x25, #0x18]
7101da6e94  stp x27,xzr,[x25, #0x10]
7101da6e98  cbz x0,0x7101da6ea0
7101da6e9c  bl 0x710392eb40
7101da6ea0  mov x0,x25
7101da6ea4  bl 0x710392eb40
7101da6ea8  ldp x25,x27,[sp, #0x8]
7101da6eac  ldr w8,[x22, #0xe0]
7101da6eb0  cmp w8,#0x4
7101da6eb4  b.cs 0x7101da73a0
7101da6eb8  mov w9,#0x54
7101da6ebc  madd x8,x8,x9,x22
7101da6ec0  orr w9,wzr,#0xffff
7101da6ec4  ldrh w8,[x8, #0x26a]
7101da6ec8  fmov s9,wzr
7101da6ecc  cmp x8,x9
7101da6ed0  b.eq 0x7101da6f3c
7101da6ed4  adrp x9,0x7105329000
7101da6ed8  ldr x9,[x9, #0xf98]
7101da6edc  ldr x9,[x9]
7101da6ee0  ldr x9,[x9, #0x30]
7101da6ee4  ubfx x10,x8,#0x4,#0x1c
7101da6ee8  cmp w10,#0x177
7101da6eec  b.cc 0x7101da6f44
7101da6ef0  mov w10,#0xffffe890
7101da6ef4  add w10,w8,w10
7101da6ef8  adrp x8,0x710532a000
7101da6efc  add x8,x8,#0x878
7101da6f00  and w11,w10,#0xffff
7101da6f04  cmp w11,#0x63
7101da6f08  b.hi 0x7101da6f58
7101da6f0c  and x10,x10,#0xffff
7101da6f10  mov w11,#0x50
7101da6f14  madd x9,x10,x11,x9
7101da6f18  mov w11,#0x8cc8
7101da6f1c  movk w11,#0x8, LSL #16
7101da6f20  mov w10,#0x8cc0
7101da6f24  movk w10,#0x8, LSL #16
7101da6f28  ldrsh w11,[x9, x11, LSL #0x0]
7101da6f2c  add x9,x9,x10
7101da6f30  cmn w11,#0x1
7101da6f34  csel x8,x8,x9,eq
7101da6f38  b 0x7101da6f58
7101da6f3c  mov w25,#0x1
7101da6f40  b 0x7101da700c
7101da6f44  mov w10,#0x50
7101da6f48  madd x8,x8,x10,x9
7101da6f4c  mov w9,#0x1940
7101da6f50  movk w9,#0x1, LSL #16
7101da6f54  add x8,x8,x9
7101da6f58  ldr w26,[x8, #0xc]
7101da6f5c  ldr x8,[x20, #0x730]
7101da6f60  orr x11,xzr,#-0x3333333333333334
7101da6f64  movk x11,#0xcccd
7101da6f68  ldr x8,[x8, #0x8]
7101da6f6c  ldr x10,[x8, #0x1d8]
7101da6f70  add x8,x10,x25, LSL #0x1
7101da6f74  ldp x9,x10,[x10, #0x20]
7101da6f78  ldrh w8,[x8, #0x60]
7101da6f7c  sub x10,x10,x9
7101da6f80  asr x10,x10,#0x6
7101da6f84  mul x10,x10,x11
7101da6f88  cmp w10,w8
7101da6f8c  b.ls 0x7101da6fcc
7101da6f90  mov w11,#0x140
7101da6f94  madd x9,x8,x11,x9
7101da6f98  cmp x10,x8
7101da6f9c  adrp x8,0x7105182000
7101da6fa0  add x8,x8,#0xb08
7101da6fa4  csel x8,x9,x8,hi
7101da6fa8  ldr s0,[x8, #0x74]
7101da6fac  ldr w1,[x8, #0x70]
7101da6fb0  mov w0,w26
7101da6fb4  bl 0x71025c9ac0
7101da6fb8  mov w25,w0
7101da6fbc  cmp w0,#0x63
7101da6fc0  b.ne 0x7101da6fd0
7101da6fc4  mov v9.16B,v8.16B
7101da6fc8  b 0x7101da700c
7101da6fcc  mov w25,#0x1
7101da6fd0  mov x0,x21
7101da6fd4  mov w1,w25
7101da6fd8  mov x20,x27
7101da6fdc  bl 0x71025c9e50
7101da6fe0  mov w27,w0
7101da6fe4  add w1,w25,#0x1
7101da6fe8  mov x0,x21
7101da6fec  bl 0x71025c9e50
7101da6ff0  subs w8,w0,w27
7101da6ff4  b.eq 0x7101da7008
7101da6ff8  sub w9,w26,w27
7101da6ffc  ucvtf s0,w9
7101da7000  ucvtf s1,w8
7101da7004  fdiv s9,s0,s1
7101da7008  mov x27,x20
7101da700c  adrp x1,0x71043cd000
7101da7010  add x1,x1,#0x314
7101da7014  sub x8,x29,#0xb0
7101da7018  add x0,sp,#0xc0
7101da701c  bl 0x7103776910
7101da7020  adrp x1,0x71042e4000
7101da7024  add x1,x1,#0xfdc
7101da7028  sub x0,x29,#0xb0
7101da702c  mov w2,#0x1
7101da7030  mov w3,w25
7101da7034  bl 0x710377a280
7101da7038  ldur x0,[x29, #-0xa8]
7101da703c  adrp x20,0x710523d000
7101da7040  add x20,x20,#0x9a8
7101da7044  stp x20,xzr,[x29, #-0xb0]
7101da7048  cbz x0,0x7101da7050
7101da704c  bl 0x710392eb40
7101da7050  adrp x1,0x7104452000
7101da7054  add x1,x1,#0x6db
7101da7058  sub x8,x29,#0xb0
7101da705c  add x0,sp,#0xc0
7101da7060  bl 0x7103776910
7101da7064  ldur x0,[x29, #-0xa8]
7101da7068  ldr x8,[x0]
7101da706c  cbz x8,0x7101da7088
7101da7070  orr w9,wzr,#0x3f800000
7101da7074  str w9,[x8, #0x4c]
7101da7078  ldrb w9,[x8, #0x58]
7101da707c  orr w9,w9,#0x10
7101da7080  str s9,[x8, #0x48]
7101da7084  strb w9,[x8, #0x58]
7101da7088  stp x20,xzr,[x29, #-0xb0]
7101da708c  cbz x0,0x7101da7094
7101da7090  bl 0x710392eb40
7101da7094  ldr x0,[x27, #0x60]
7101da7098  mov w1,#0x11
7101da709c  add x25,x22,#0x28
7101da70a0  bl 0x7103238d60
7101da70a4  tst x0,#0xffffffffff
7101da70a8  stur x0,[x29, #-0xb0]
7101da70ac  b.eq 0x7101da70c4
7101da70b0  ldr x0,[x25]
7101da70b4  ldrsw x2,[x0, #0x70]
7101da70b8  ldr w3,[x0, #0x68]
7101da70bc  sub x1,x29,#0xb0
7101da70c0  bl 0x710323c4e0
7101da70c4  ldr x1,[x27, #0x60]
7101da70c8  mov w2,#0x11
7101da70cc  mov x0,x25
7101da70d0  bl 0x710323f600
7101da70d4  mov x25,x0
7101da70d8  adrp x1,0x71042a3000
7101da70dc  add x1,x1,#0x587
7101da70e0  add x8,sp,#0x68
7101da70e4  sub x0,x29,#0xc0
7101da70e8  bl 0x7103776640
7101da70ec  ldr w8,[x22, #0xe0]
7101da70f0  cmp w8,#0x4
7101da70f4  b.cs 0x7101da73a0
7101da70f8  add x8,x22,x8, LSL #0x4
7101da70fc  ldr x0,[x8, #0x3b8]
7101da7100  mov x1,x21
7101da7104  bl 0x71025cb340
7101da7108  ldr x22,[sp, #0x70]
7101da710c  tbz w0,#0x0,0x7101da713c
7101da7110  fmov s8,0x3f800000
7101da7114  mov v0.16B,v8.16B
7101da7118  adrp x1,0x71042c5000
7101da711c  add x1,x1,#0x264
7101da7120  mov x0,x22
7101da7124  bl 0x7103778300
7101da7128  adrp x1,0x71042d6000
7101da712c  add x1,x1,#0x697
7101da7130  mov x0,x22
7101da7134  mov v0.16B,v8.16B
7101da7138  b 0x7101da714c
7101da713c  fmov s0,0x3f800000
7101da7140  adrp x1,0x710433a000
7101da7144  add x1,x1,#0x577
7101da7148  mov x0,x22
7101da714c  bl 0x7103778300
7101da7150  adrp x1,0x71042c5000
7101da7154  add x1,x1,#0x274
7101da7158  sub x8,x29,#0xb0
7101da715c  add x0,sp,#0x68
7101da7160  bl 0x7103776910
7101da7164  ldur x26,[x29, #-0xa8]
7101da7168  mov x0,x26
7101da716c  mov x1,x25
7101da7170  bl 0x7103778b80
7101da7174  stp x20,xzr,[x29, #-0xb0]
7101da7178  cbz x26,0x7101da7184
7101da717c  mov x0,x26
7101da7180  bl 0x710392eb40
7101da7184  adrp x1,0x71042d4000
7101da7188  add x1,x1,#0x25c
7101da718c  sub x8,x29,#0xb0
7101da7190  add x0,sp,#0x68
7101da7194  bl 0x7103776910
7101da7198  ldur x26,[x29, #-0xa8]
7101da719c  mov x0,x26
7101da71a0  mov x1,x25
7101da71a4  bl 0x7103778b80
7101da71a8  stp x20,xzr,[x29, #-0xb0]
7101da71ac  cbz x26,0x7101da71b8
7101da71b0  mov x0,x26
7101da71b4  bl 0x710392eb40
7101da71b8  fmov s0,0x3f800000
7101da71bc  mov x0,x22
7101da71c0  mov x1,x24
7101da71c4  bl 0x7103778300
7101da71c8  ldr x24,[x28, #0x1d8]
7101da71cc  mov x0,x24
7101da71d0  mov x1,x21
7101da71d4  bl 0x71032a9470
7101da71d8  mov x2,x0
7101da71dc  sub x0,x29,#0xb0
7101da71e0  mov x1,x24
7101da71e4  sub x21,x29,#0xb0
7101da71e8  bl 0x71032a9540
7101da71ec  add x1,x21,#0x8
7101da71f0  adrp x0,0x7104464000
7101da71f4  add x0,x0,#0x1d4
7101da71f8  add x8,sp,#0x20
7101da71fc  add x21,sp,#0x20
7101da7200  bl 0x71003a4ca0
7101da7204  adrp x1,0x71042f8000
7101da7208  add x1,x1,#0x83b
7101da720c  sub x8,x29,#0xb0
7101da7210  sub x0,x29,#0xc0
7101da7214  bl 0x7103776910
7101da7218  add x1,x21,#0x8
7101da721c  sub x0,x29,#0xb0
7101da7220  bl 0x710377a120
7101da7224  ldur x0,[x29, #-0xa8]
7101da7228  stp x20,xzr,[x29, #-0xb0]
7101da722c  cbz x0,0x7101da7234
7101da7230  bl 0x710392eb40
7101da7234  adrp x1,0x710438b000
7101da7238  add x1,x1,#0x306
7101da723c  sub x8,x29,#0xb0
7101da7240  sub x0,x29,#0xc0
7101da7244  bl 0x7103776640
7101da7248  ldrb w8,[x27, #0x68]
7101da724c  cmp w8,#0x3
7101da7250  b.hi 0x7101da7268
7101da7254  adrp x9,0x71044fb000
7101da7258  add x9,x9,#0x498
7101da725c  ldrsw x8,[x9, x8, LSL #0x2]
7101da7260  add x8,x8,x9
7101da7264  br x8
7101da7268  fmov s8,0x3f800000
7101da726c  ldur x21,[x29, #-0xa8]
7101da7270  adrp x1,0x7104464000
7101da7274  add x1,x1,#0x374
7101da7278  mov v0.16B,v8.16B
7101da727c  mov x0,x21
7101da7280  bl 0x7103778300
7101da7284  adrp x1,0x7104453000
7101da7288  add x1,x1,#0xa1
7101da728c  b 0x7101da7304
7101da7290  fmov s8,0x3f800000
7101da7294  ldur x21,[x29, #-0xa8]
7101da7298  adrp x1,0x7104453000
7101da729c  add x1,x1,#0xac
7101da72a0  mov v0.16B,v8.16B
7101da72a4  mov x0,x21
7101da72a8  bl 0x7103778300
7101da72ac  adrp x1,0x7104431000
7101da72b0  add x1,x1,#0x8aa
7101da72b4  b 0x7101da7304
7101da72b8  fmov s8,0x3f800000
7101da72bc  ldur x21,[x29, #-0xa8]
7101da72c0  adrp x1,0x710436a000
7101da72c4  add x1,x1,#0xc3e
7101da72c8  mov v0.16B,v8.16B
7101da72cc  mov x0,x21
7101da72d0  bl 0x7103778300
7101da72d4  adrp x1,0x710437a000
7101da72d8  add x1,x1,#0xe87
7101da72dc  b 0x7101da7304
7101da72e0  fmov s8,0x3f800000
7101da72e4  ldur x21,[x29, #-0xa8]
7101da72e8  adrp x1,0x7104442000
7101da72ec  add x1,x1,#0x147
7101da72f0  mov v0.16B,v8.16B
7101da72f4  mov x0,x21
7101da72f8  bl 0x7103778300
7101da72fc  adrp x1,0x710426e000
7101da7300  add x1,x1,#0x5e7
7101da7304  mov v0.16B,v8.16B
7101da7308  mov x0,x21
7101da730c  bl 0x7103778300
7101da7310  adrp x24,0x710523d000
7101da7314  add x24,x24,#0x988
7101da7318  stp x24,xzr,[x29, #-0xb0]
7101da731c  cbz x21,0x7101da7338
7101da7320  ldr x0,[x21, #0x18]
7101da7324  stp x20,xzr,[x21, #0x10]
7101da7328  cbz x0,0x7101da7330
7101da732c  bl 0x710392eb40
7101da7330  mov x0,x21
7101da7334  bl 0x710392eb40
7101da7338  stp x24,xzr,[sp, #0x68]
7101da733c  cbz x22,0x7101da7358
7101da7340  ldr x0,[x22, #0x18]
7101da7344  stp x20,xzr,[x22, #0x10]
7101da7348  cbz x0,0x7101da7350
7101da734c  bl 0x710392eb40
7101da7350  mov x0,x22
7101da7354  bl 0x710392eb40
7101da7358  stp x24,xzr,[sp, #0xc0]
7101da735c  cbz x23,0x7101da7378
7101da7360  ldr x0,[x23, #0x18]
7101da7364  stp x20,xzr,[x23, #0x10]
7101da7368  cbz x0,0x7101da7370
7101da736c  bl 0x710392eb40
7101da7370  mov x0,x23
7101da7374  bl 0x710392eb40
7101da7378  ldr x21,[sp, #0x18]
7101da737c  stp x24,xzr,[sp, #0xd0]
7101da7380  cbz x21,0x7101da6a80
7101da7384  ldr x0,[x21, #0x18]
7101da7388  stp x20,xzr,[x21, #0x10]
7101da738c  cbz x0,0x7101da7394
7101da7390  bl 0x710392eb40
7101da7394  mov x0,x21
7101da7398  bl 0x710392eb40
7101da739c  b 0x7101da6a80
7101da73a0  bl 0x71039c2650
