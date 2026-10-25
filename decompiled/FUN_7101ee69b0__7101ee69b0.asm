// addr:      7101ee69b0
// offset:    0x1ee69b0
// name:      FUN_7101ee69b0
// mangled:   
// size:      1132

7101ee69b0  sub sp,sp,#0x40
7101ee69b4  str x21,[sp, #0x10]
7101ee69b8  stp x20,x19,[sp, #0x20]
7101ee69bc  stp x29,x30,[sp, #0x30]
7101ee69c0  add x29,sp,#0x30
7101ee69c4  ldr x19,[x0, #0x80]
7101ee69c8  mov x0,x19
7101ee69cc  bl 0x7101ee4220
7101ee69d0  ldr x9,[x19]
7101ee69d4  cbz x9,0x7101ee69fc
7101ee69d8  ldp x8,x11,[x19, #0x8]
7101ee69dc  and x10,x11,#0x1
7101ee69e0  orr x12,x10,x8
7101ee69e4  cbz x12,0x7101ee69fc
7101ee69e8  add x0,x9,x11, ASR #0x1
7101ee69ec  cbz x10,0x7101ee69f8
7101ee69f0  ldr x9,[x0]
7101ee69f4  ldr x8,[x9, x8, LSL #0x0]
7101ee69f8  blr x8
7101ee69fc  ldr w8,[x19, #0xdc]
7101ee6a00  add w8,w8,#0x1
7101ee6a04  str w8,[x19, #0xdc]
7101ee6a08  ldr x8,[x19, #0xb08]
7101ee6a0c  ldr x0,[x8, #0x8]
7101ee6a10  cbz x0,0x7101ee6a34
7101ee6a14  adrp x1,0x71043ae000
7101ee6a18  add x1,x1,#0xc3
7101ee6a1c  bl 0x71037964b0
7101ee6a20  cbz x0,0x7101ee6a34
7101ee6a24  ldr x8,[x0]
7101ee6a28  ldr x8,[x8, #0x138]
7101ee6a2c  blr x8
7101ee6a30  tbz w0,#0x0,0x7101ee6c94
7101ee6a34  ldr w8,[x19, #0xb20]
7101ee6a38  add w9,w8,#0x1
7101ee6a3c  add w10,w8,#0x2
7101ee6a40  cmp w9,#0x0
7101ee6a44  csinc w8,w10,w8,lt
7101ee6a48  and w8,w8,#0xfffffffe
7101ee6a4c  sub w8,w9,w8
7101ee6a50  str w8,[x19, #0xb20]
7101ee6a54  mov w8,#0x1
7101ee6a58  strb w8,[x19, #0xb24]
7101ee6a5c  ldr w8,[x19, #0x100]
7101ee6a60  add x20,x19,#0xf8
7101ee6a64  cbz w8,0x7101ee6a7c
7101ee6a68  ldr w8,[x19, #0xb40]
7101ee6a6c  orr w8,w8,#0x2
7101ee6a70  add x21,x19,#0xb40
7101ee6a74  cmp w8,#0x3
7101ee6a78  b 0x7101ee6acc
7101ee6a7c  adrp x8,0x7105314000
7101ee6a80  add x8,x8,#0x4d8
7101ee6a84  ldarb w8,[x8]
7101ee6a88  tbz w8,#0x0,0x7101ee6d9c
7101ee6a8c  adrp x8,0x71052c5000
7101ee6a90  ldrb w8,[x8, #0x1c5]
7101ee6a94  cbz w8,0x7101ee6ac0
7101ee6a98  adrp x8,0x71052c5000
7101ee6a9c  ldrb w8,[x8, #0x1b0]
7101ee6aa0  cmp w8,#0x20
7101ee6aa4  b.hi 0x7101ee6d44
7101ee6aa8  mov w9,#0x1
7101ee6aac  orr x10,xzr,#0x180000000
7101ee6ab0  lsl x9,x9,x8
7101ee6ab4  movk x10,#0x2000
7101ee6ab8  tst x9,x10
7101ee6abc  b.eq 0x7101ee6d44
7101ee6ac0  ldr w8,[x19, #0xb40]
7101ee6ac4  add x21,x19,#0xb40
7101ee6ac8  cmp w8,#0x1
7101ee6acc  cset w1,eq
7101ee6ad0  ldr x0,[x20]
7101ee6ad4  ldr x8,[x0]
7101ee6ad8  ldr x8,[x8, #0x60]
7101ee6adc  blr x8
7101ee6ae0  ldr x0,[x20]
7101ee6ae4  ldr w9,[x21]
7101ee6ae8  cmp w9,#0x1
7101ee6aec  ldr w8,[x0, #0x254]
7101ee6af0  b.ne 0x7101ee6b20
7101ee6af4  cmp w8,#0x1
7101ee6af8  b.eq 0x7101ee6b3c
7101ee6afc  mov w1,#0x1
7101ee6b00  mov x0,x20
7101ee6b04  mov w2,wzr
7101ee6b08  bl 0x7103771a80
7101ee6b0c  ldr x8,[x19, #0xb28]
7101ee6b10  ldr x8,[x8, #0x8]
7101ee6b14  mov w9,#0x20
7101ee6b18  movk w9,#0x4, LSL #16
7101ee6b1c  b 0x7101ee6b38
7101ee6b20  cmn w8,#0x1
7101ee6b24  b.eq 0x7101ee6b3c
7101ee6b28  bl 0x710376b960
7101ee6b2c  ldr x8,[x19, #0xb28]
7101ee6b30  ldr x8,[x8, #0x8]
7101ee6b34  mov w9,#0x40000
7101ee6b38  str w9,[x8, #0x18]
7101ee6b3c  ldrb w8,[x19, #0xb24]
7101ee6b40  cbz w8,0x7101ee6bb0
7101ee6b44  ldr x0,[x19, #0xb08]
7101ee6b48  fmov s0,0x3f800000
7101ee6b4c  adrp x1,0x71043ae000
7101ee6b50  add x1,x1,#0xc3
7101ee6b54  bl 0x7103778300
7101ee6b58  ldr w8,[x19, #0xb20]
7101ee6b5c  cmp w8,#0x1
7101ee6b60  b.eq 0x7101ee6b8c
7101ee6b64  cbnz w8,0x7101ee6bb0
7101ee6b68  ldr x0,[x19, #0xb08]
7101ee6b6c  fmov s0,0x3f800000
7101ee6b70  adrp x1,0x710439d000
7101ee6b74  add x1,x1,#0xcb5
7101ee6b78  bl 0x7103778300
7101ee6b7c  add x0,x19,#0xb10
7101ee6b80  adrp x1,0x710435c000
7101ee6b84  add x1,x1,#0x31
7101ee6b88  b 0x7101ee6bac
7101ee6b8c  ldr x0,[x19, #0xb08]
7101ee6b90  fmov s0,0x3f800000
7101ee6b94  adrp x1,0x71042c5000
7101ee6b98  add x1,x1,#0x6a7
7101ee6b9c  bl 0x7103778300
7101ee6ba0  add x0,x19,#0xb10
7101ee6ba4  adrp x1,0x7104443000
7101ee6ba8  add x1,x1,#0xf7b
7101ee6bac  bl 0x710377a120
7101ee6bb0  ldr w8,[x19, #0x100]
7101ee6bb4  cbz w8,0x7101ee6bcc
7101ee6bb8  ldr w8,[x19, #0xb40]
7101ee6bbc  orr w8,w8,#0x2
7101ee6bc0  cmp w8,#0x3
7101ee6bc4  b.eq 0x7101ee6c1c
7101ee6bc8  b 0x7101ee6c58
7101ee6bcc  adrp x8,0x7105314000
7101ee6bd0  add x8,x8,#0x4d8
7101ee6bd4  ldarb w8,[x8]
7101ee6bd8  tbz w8,#0x0,0x7101ee6ddc
7101ee6bdc  adrp x8,0x71052c5000
7101ee6be0  ldrb w8,[x8, #0x1c5]
7101ee6be4  cbz w8,0x7101ee6c10
7101ee6be8  adrp x8,0x71052c5000
7101ee6bec  ldrb w8,[x8, #0x1b0]
7101ee6bf0  cmp w8,#0x20
7101ee6bf4  b.hi 0x7101ee6d74
7101ee6bf8  mov w9,#0x1
7101ee6bfc  orr x10,xzr,#0x180000000
7101ee6c00  lsl x9,x9,x8
7101ee6c04  movk x10,#0x2000
7101ee6c08  tst x9,x10
7101ee6c0c  b.eq 0x7101ee6d74
7101ee6c10  ldr w8,[x19, #0xb40]
7101ee6c14  cmp w8,#0x1
7101ee6c18  b.ne 0x7101ee6c58
7101ee6c1c  ldr x8,[x19, #0xf0]
7101ee6c20  ldr x8,[x8]
7101ee6c24  add x0,x8,#0x8
7101ee6c28  adrp x1,0x7104401000
7101ee6c2c  add x1,x1,#0xd24
7101ee6c30  mov x8,sp
7101ee6c34  bl 0x71037780e0
7101ee6c38  ldr x20,[sp, #0x8]
7101ee6c3c  ldr x0,[x20, #0x8]
7101ee6c40  cbz x0,0x7101ee6c9c
7101ee6c44  ldr x8,[x0]
7101ee6c48  ldr x8,[x8, #0x148]
7101ee6c4c  blr x8
7101ee6c50  mov w21,w0
7101ee6c54  b 0x7101ee6ca0
7101ee6c58  ldr x8,[x19, #0xf0]
7101ee6c5c  ldr x8,[x8]
7101ee6c60  add x0,x8,#0x8
7101ee6c64  adrp x1,0x71043be000
7101ee6c68  add x1,x1,#0xde9
7101ee6c6c  mov x8,sp
7101ee6c70  bl 0x71037780e0
7101ee6c74  ldr x20,[sp, #0x8]
7101ee6c78  ldr x0,[x20, #0x8]
7101ee6c7c  cbz x0,0x7101ee6cd4
7101ee6c80  ldr x8,[x0]
7101ee6c84  ldr x8,[x8, #0x148]
7101ee6c88  blr x8
7101ee6c8c  mov w21,w0
7101ee6c90  b 0x7101ee6cd8
7101ee6c94  mov w8,wzr
7101ee6c98  b 0x7101ee6a58
7101ee6c9c  mov w21,wzr
7101ee6ca0  adrp x8,0x710523d000
7101ee6ca4  add x8,x8,#0x9e8
7101ee6ca8  stp x8,xzr,[sp]
7101ee6cac  cbz x20,0x7101ee6cb8
7101ee6cb0  mov x0,x20
7101ee6cb4  bl 0x710392eb40
7101ee6cb8  tbnz w21,#0x0,0x7101ee6d10
7101ee6cbc  ldr x8,[x19, #0xf0]
7101ee6cc0  ldr x8,[x8]
7101ee6cc4  ldr x0,[x8, #0x10]
7101ee6cc8  adrp x1,0x7104401000
7101ee6ccc  add x1,x1,#0xd24
7101ee6cd0  b 0x7101ee6d08
7101ee6cd4  mov w21,wzr
7101ee6cd8  adrp x8,0x710523d000
7101ee6cdc  add x8,x8,#0x9e8
7101ee6ce0  stp x8,xzr,[sp]
7101ee6ce4  cbz x20,0x7101ee6cf0
7101ee6ce8  mov x0,x20
7101ee6cec  bl 0x710392eb40
7101ee6cf0  tbnz w21,#0x0,0x7101ee6d10
7101ee6cf4  ldr x8,[x19, #0xf0]
7101ee6cf8  ldr x8,[x8]
7101ee6cfc  ldr x0,[x8, #0x10]
7101ee6d00  adrp x1,0x71043be000
7101ee6d04  add x1,x1,#0xde9
7101ee6d08  fmov s0,0x3f800000
7101ee6d0c  bl 0x7103778300
7101ee6d10  ldr w8,[x19, #0xd8]
7101ee6d14  cmp w8,#0x3
7101ee6d18  b.ne 0x7101ee6d30
7101ee6d1c  ldp x29,x30,[sp, #0x30]
7101ee6d20  ldr x21,[sp, #0x10]
7101ee6d24  ldp x20,x19,[sp, #0x20]
7101ee6d28  add sp,sp,#0x40
7101ee6d2c  b 0x71039c6470
7101ee6d30  ldp x29,x30,[sp, #0x30]
7101ee6d34  ldr x21,[sp, #0x10]
7101ee6d38  ldp x20,x19,[sp, #0x20]
7101ee6d3c  add sp,sp,#0x40
7101ee6d40  b 0x71039c6480
7101ee6d44  sub w8,w8,#0xe
7101ee6d48  cmp w8,#0x17
7101ee6d4c  b.hi 0x7101ee6d60
7101ee6d50  mov w9,#0x7f7
7101ee6d54  movk w9,#0x80, LSL #16
7101ee6d58  lsr w8,w9,w8
7101ee6d5c  tbnz w8,#0x0,0x7101ee6ac0
7101ee6d60  ldr w8,[x19, #0x100]
7101ee6d64  cbnz w8,0x7101ee6a68
7101ee6d68  add x21,x19,#0xb40
7101ee6d6c  mov w1,#0x1
7101ee6d70  b 0x7101ee6ad0
7101ee6d74  sub w8,w8,#0xe
7101ee6d78  cmp w8,#0x17
7101ee6d7c  b.hi 0x7101ee6d90
7101ee6d80  mov w9,#0x7f7
7101ee6d84  movk w9,#0x80, LSL #16
7101ee6d88  lsr w8,w9,w8
7101ee6d8c  tbnz w8,#0x0,0x7101ee6c10
7101ee6d90  ldr w8,[x19, #0x100]
7101ee6d94  cbnz w8,0x7101ee6bb8
7101ee6d98  b 0x7101ee6c1c
7101ee6d9c  adrp x0,0x7105314000
7101ee6da0  add x0,x0,#0x4d8
7101ee6da4  bl 0x71039c06b0
7101ee6da8  cbz w0,0x7101ee6a8c
7101ee6dac  bl 0x7101764000
7101ee6db0  adrp x0,0x7101763000
7101ee6db4  add x0,x0,#0xc40
7101ee6db8  adrp x1,0x71052c5000
7101ee6dbc  add x1,x1,#0x180
7101ee6dc0  adrp x2,0x7104f17000
7101ee6dc4  add x2,x2,#0x0
7101ee6dc8  bl 0x71000001c0
7101ee6dcc  adrp x0,0x7105314000
7101ee6dd0  add x0,x0,#0x4d8
7101ee6dd4  bl 0x71039c06c0
7101ee6dd8  b 0x7101ee6a8c
7101ee6ddc  adrp x0,0x7105314000
7101ee6de0  add x0,x0,#0x4d8
7101ee6de4  bl 0x71039c06b0
7101ee6de8  cbz w0,0x7101ee6bdc
7101ee6dec  bl 0x7101764000
7101ee6df0  adrp x0,0x7101763000
7101ee6df4  add x0,x0,#0xc40
7101ee6df8  adrp x1,0x71052c5000
7101ee6dfc  add x1,x1,#0x180
7101ee6e00  adrp x2,0x7104f17000
7101ee6e04  add x2,x2,#0x0
7101ee6e08  bl 0x71000001c0
7101ee6e0c  adrp x0,0x7105314000
7101ee6e10  add x0,x0,#0x4d8
7101ee6e14  bl 0x71039c06c0
7101ee6e18  b 0x7101ee6bdc
