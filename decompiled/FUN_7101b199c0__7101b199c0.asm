// addr:      7101b199c0
// offset:    0x1b199c0
// name:      FUN_7101b199c0
// mangled:   
// size:      1384

7101b199c0  sub sp,sp,#0x90
7101b199c4  str x21,[sp, #0x60]
7101b199c8  stp x20,x19,[sp, #0x70]
7101b199cc  stp x29,x30,[sp, #0x80]
7101b199d0  add x29,sp,#0x80
7101b199d4  sub w8,w1,#0x1
7101b199d8  mov x19,x2
7101b199dc  mov x20,x0
7101b199e0  mov w21,#0x9dc5
7101b199e4  movk w21,#0x811c, LSL #16
7101b199e8  strb wzr,[sp, #0x20]
7101b199ec  cmp w8,#0x9
7101b199f0  str x21,[sp, #0x18]
7101b199f4  b.hi 0x7101b19ab8
7101b199f8  adrp x9,0x71044f8000
7101b199fc  add x9,x9,#0x664
7101b19a00  ldrsw x8,[x9, x8, LSL #0x2]
7101b19a04  add x8,x8,x9
7101b19a08  br x8
7101b19a0c  ldr x0,[x20, #0xe0]
7101b19a10  fmov s0,0x3f800000
7101b19a14  adrp x1,0x710438c000
7101b19a18  add x1,x1,#0x528
7101b19a1c  bl 0x7103778300
7101b19a20  mov x9,#0x7472
7101b19a24  movk x9,#0x705f, LSL #16
7101b19a28  movk x9,#0x706f, LSL #32
7101b19a2c  movk x9,#0x7075, LSL #48
7101b19a30  str x9,[sp, #0x28]
7101b19a34  mov w9,#0x635f
7101b19a38  strh w9,[sp, #0x30]
7101b19a3c  mov x9,#0x7461
7101b19a40  movk x9,#0x6765, LSL #16
7101b19a44  movk x9,#0x726f, LSL #32
7101b19a48  movk x9,#0x5f79, LSL #48
7101b19a4c  stur x9,[sp, #0x32]
7101b19a50  mov w9,#0x6f63
7101b19a54  movk w9,#0x6c6c, LSL #16
7101b19a58  mov x8,#0x6e6d
7101b19a5c  movk x8,#0x5f75, LSL #16
7101b19a60  strb wzr,[sp, #0x44]
7101b19a64  stur w9,[sp, #0x3a]
7101b19a68  mov w9,#0x6365
7101b19a6c  movk x8,#0x6e69, LSL #32
7101b19a70  movk x8,#0x6573, LSL #48
7101b19a74  strh w9,[sp, #0x3e]
7101b19a78  mov w9,#0x6974
7101b19a7c  movk w9,#0x6e6f, LSL #16
7101b19a80  str x8,[sp, #0x20]
7101b19a84  add x8,sp,#0x18
7101b19a88  str w9,[sp, #0x40]
7101b19a8c  mov w9,#0x24
7101b19a90  add x8,x8,#0x9
7101b19a94  str w9,[sp, #0x1c]
7101b19a98  mov w10,#0x6d
7101b19a9c  mov w9,#0x89
7101b19aa0  mul w11,w21,w9
7101b19aa4  and w10,w10,#0xff
7101b19aa8  eor w21,w11,w10
7101b19aac  ldrb w10,[x8], #0x1
7101b19ab0  cbnz w10,0x7101b19aa0
7101b19ab4  b 0x7101b19e98
7101b19ab8  ldr x0,[x20, #0xe0]
7101b19abc  adrp x1,0x7104432000
7101b19ac0  add x1,x1,#0xbe3
7101b19ac4  b 0x7101b19d58
7101b19ac8  ldr x0,[x20, #0xe0]
7101b19acc  fmov s0,0x3f800000
7101b19ad0  adrp x1,0x710425e000
7101b19ad4  add x1,x1,#0xeba
7101b19ad8  bl 0x7103778300
7101b19adc  mov x8,#0x6e6d
7101b19ae0  movk x8,#0x5f75, LSL #16
7101b19ae4  mov x10,#0x7472
7101b19ae8  movk x10,#0x705f, LSL #16
7101b19aec  movk x8,#0x6e69, LSL #32
7101b19af0  movk x8,#0x6573, LSL #48
7101b19af4  add x9,sp,#0x18
7101b19af8  movk x10,#0x706f, LSL #32
7101b19afc  movk x10,#0x7075, LSL #48
7101b19b00  stp x8,x10,[sp, #0x20]
7101b19b04  add x8,x9,#0x9
7101b19b08  mov w9,#0x635f
7101b19b0c  strh w9,[sp, #0x30]
7101b19b10  mov x9,#0x7461
7101b19b14  movk x9,#0x6765, LSL #16
7101b19b18  movk x9,#0x726f, LSL #32
7101b19b1c  movk x9,#0x5f79, LSL #48
7101b19b20  stur x9,[sp, #0x32]
7101b19b24  mov x9,#0x7073
7101b19b28  movk x9,#0x7269, LSL #16
7101b19b2c  movk x9,#0x7469, LSL #32
7101b19b30  movk x9,#0x73, LSL #48
7101b19b34  stur x9,[sp, #0x3a]
7101b19b38  mov w9,#0x21
7101b19b3c  str w9,[sp, #0x1c]
7101b19b40  mov w10,#0x6d
7101b19b44  mov w9,#0x89
7101b19b48  mul w11,w21,w9
7101b19b4c  and w10,w10,#0xff
7101b19b50  eor w21,w11,w10
7101b19b54  ldrb w10,[x8], #0x1
7101b19b58  cbnz w10,0x7101b19b48
7101b19b5c  b 0x7101b19e98
7101b19b60  ldr x0,[x20, #0xe0]
7101b19b64  fmov s0,0x3f800000
7101b19b68  adrp x1,0x71043ad000
7101b19b6c  add x1,x1,#0x349
7101b19b70  bl 0x7103778300
7101b19b74  mov x8,#0x6e6d
7101b19b78  movk x8,#0x5f75, LSL #16
7101b19b7c  movk x8,#0x6e69, LSL #32
7101b19b80  movk x8,#0x6573, LSL #48
7101b19b84  add x9,sp,#0x18
7101b19b88  str x8,[sp, #0x20]
7101b19b8c  add x8,x9,#0x9
7101b19b90  mov w9,#0x635f
7101b19b94  strh w9,[sp, #0x30]
7101b19b98  mov x9,#0x7461
7101b19b9c  movk x9,#0x6765, LSL #16
7101b19ba0  movk x9,#0x726f, LSL #32
7101b19ba4  movk x9,#0x5f79, LSL #48
7101b19ba8  stur x9,[sp, #0x32]
7101b19bac  mov w9,#0x746f
7101b19bb0  movk w9,#0x6568, LSL #16
7101b19bb4  stur w9,[sp, #0x3a]
7101b19bb8  mov x10,#0x7472
7101b19bbc  movk x10,#0x705f, LSL #16
7101b19bc0  mov w9,#0x72
7101b19bc4  strh w9,[sp, #0x3e]
7101b19bc8  movk x10,#0x706f, LSL #32
7101b19bcc  movk x10,#0x7075, LSL #48
7101b19bd0  str x10,[sp, #0x28]
7101b19bd4  orr w9,wzr,#0x1f
7101b19bd8  str w9,[sp, #0x1c]
7101b19bdc  mov w10,#0x6d
7101b19be0  mov w9,#0x89
7101b19be4  mul w11,w21,w9
7101b19be8  and w10,w10,#0xff
7101b19bec  eor w21,w11,w10
7101b19bf0  ldrb w10,[x8], #0x1
7101b19bf4  cbnz w10,0x7101b19be4
7101b19bf8  b 0x7101b19e98
7101b19bfc  ldr x0,[x20, #0xe0]
7101b19c00  adrp x1,0x7104308000
7101b19c04  add x1,x1,#0x105
7101b19c08  b 0x7101b19d58
7101b19c0c  ldr x0,[x20, #0xe0]
7101b19c10  adrp x1,0x71043be000
7101b19c14  add x1,x1,#0x26d
7101b19c18  b 0x7101b19d58
7101b19c1c  ldr x0,[x20, #0xe0]
7101b19c20  fmov s0,0x3f800000
7101b19c24  adrp x1,0x71043be000
7101b19c28  add x1,x1,#0x27f
7101b19c2c  bl 0x7103778300
7101b19c30  mov x8,#0x6e6d
7101b19c34  movk x8,#0x5f75, LSL #16
7101b19c38  mov x10,#0x7472
7101b19c3c  movk x10,#0x705f, LSL #16
7101b19c40  movk x8,#0x6e69, LSL #32
7101b19c44  movk x8,#0x6573, LSL #48
7101b19c48  add x9,sp,#0x18
7101b19c4c  movk x10,#0x706f, LSL #32
7101b19c50  movk x10,#0x7075, LSL #48
7101b19c54  stp x8,x10,[sp, #0x20]
7101b19c58  add x8,x9,#0x9
7101b19c5c  mov w9,#0x635f
7101b19c60  strh w9,[sp, #0x30]
7101b19c64  mov x9,#0x7461
7101b19c68  movk x9,#0x6765, LSL #16
7101b19c6c  movk x9,#0x726f, LSL #32
7101b19c70  movk x9,#0x5f79, LSL #48
7101b19c74  stur x9,[sp, #0x32]
7101b19c78  mov w9,#0x6762
7101b19c7c  movk w9,#0x6d, LSL #16
7101b19c80  stur w9,[sp, #0x3a]
7101b19c84  mov w9,#0x1d
7101b19c88  str w9,[sp, #0x1c]
7101b19c8c  mov w10,#0x6d
7101b19c90  mov w9,#0x89
7101b19c94  mul w11,w21,w9
7101b19c98  and w10,w10,#0xff
7101b19c9c  eor w21,w11,w10
7101b19ca0  ldrb w10,[x8], #0x1
7101b19ca4  cbnz w10,0x7101b19c94
7101b19ca8  b 0x7101b19e98
7101b19cac  ldr x0,[x20, #0xe0]
7101b19cb0  fmov s0,0x3f800000
7101b19cb4  adrp x1,0x7104412000
7101b19cb8  add x1,x1,#0x533
7101b19cbc  bl 0x7103778300
7101b19cc0  mov x9,#0x7472
7101b19cc4  movk x9,#0x705f, LSL #16
7101b19cc8  movk x9,#0x706f, LSL #32
7101b19ccc  movk x9,#0x7075, LSL #48
7101b19cd0  str x9,[sp, #0x28]
7101b19cd4  mov w9,#0x635f
7101b19cd8  strh w9,[sp, #0x30]
7101b19cdc  mov x9,#0x7461
7101b19ce0  movk x9,#0x6765, LSL #16
7101b19ce4  movk x9,#0x726f, LSL #32
7101b19ce8  movk x9,#0x5f79, LSL #48
7101b19cec  mov x8,#0x6e6d
7101b19cf0  movk x8,#0x5f75, LSL #16
7101b19cf4  strb wzr,[sp, #0x40]
7101b19cf8  stur x9,[sp, #0x32]
7101b19cfc  mov w9,#0x6974
7101b19d00  movk w9,#0x6b63, LSL #16
7101b19d04  stur w9,[sp, #0x3a]
7101b19d08  movk x8,#0x6e69, LSL #32
7101b19d0c  movk x8,#0x6573, LSL #48
7101b19d10  str x8,[sp, #0x20]
7101b19d14  mov w9,#0x7465
7101b19d18  add x8,sp,#0x18
7101b19d1c  strh w9,[sp, #0x3e]
7101b19d20  mov w9,#0x20
7101b19d24  add x8,x8,#0x9
7101b19d28  str w9,[sp, #0x1c]
7101b19d2c  mov w10,#0x6d
7101b19d30  mov w9,#0x89
7101b19d34  mul w11,w21,w9
7101b19d38  and w10,w10,#0xff
7101b19d3c  eor w21,w11,w10
7101b19d40  ldrb w10,[x8], #0x1
7101b19d44  cbnz w10,0x7101b19d34
7101b19d48  b 0x7101b19e98
7101b19d4c  ldr x0,[x20, #0xe0]
7101b19d50  adrp x1,0x71043be000
7101b19d54  add x1,x1,#0x291
7101b19d58  fmov s0,0x3f800000
7101b19d5c  bl 0x7103778300
7101b19d60  mov w21,wzr
7101b19d64  b 0x7101b19ea0
7101b19d68  ldr x0,[x20, #0xe0]
7101b19d6c  fmov s0,0x3f800000
7101b19d70  adrp x1,0x7104308000
7101b19d74  add x1,x1,#0x117
7101b19d78  bl 0x7103778300
7101b19d7c  mov x8,#0x6e6d
7101b19d80  movk x8,#0x5f75, LSL #16
7101b19d84  movk x8,#0x6e69, LSL #32
7101b19d88  movk x8,#0x6573, LSL #48
7101b19d8c  add x9,sp,#0x18
7101b19d90  str x8,[sp, #0x20]
7101b19d94  add x8,x9,#0x9
7101b19d98  mov w9,#0x635f
7101b19d9c  strh w9,[sp, #0x30]
7101b19da0  mov x9,#0x7461
7101b19da4  movk x9,#0x6765, LSL #16
7101b19da8  movk x9,#0x726f, LSL #32
7101b19dac  movk x9,#0x5f79, LSL #48
7101b19db0  stur x9,[sp, #0x32]
7101b19db4  mov w9,#0x7473
7101b19db8  movk w9,#0x6761, LSL #16
7101b19dbc  stur w9,[sp, #0x3a]
7101b19dc0  mov x10,#0x7472
7101b19dc4  movk x10,#0x705f, LSL #16
7101b19dc8  mov w9,#0x65
7101b19dcc  strh w9,[sp, #0x3e]
7101b19dd0  movk x10,#0x706f, LSL #32
7101b19dd4  movk x10,#0x7075, LSL #48
7101b19dd8  str x10,[sp, #0x28]
7101b19ddc  orr w9,wzr,#0x1f
7101b19de0  str w9,[sp, #0x1c]
7101b19de4  mov w10,#0x6d
7101b19de8  mov w9,#0x89
7101b19dec  mul w11,w21,w9
7101b19df0  and w10,w10,#0xff
7101b19df4  eor w21,w11,w10
7101b19df8  ldrb w10,[x8], #0x1
7101b19dfc  cbnz w10,0x7101b19dec
7101b19e00  b 0x7101b19e98
7101b19e04  ldr x0,[x20, #0xe0]
7101b19e08  fmov s0,0x3f800000
7101b19e0c  adrp x1,0x71042d5000
7101b19e10  add x1,x1,#0xe11
7101b19e14  bl 0x7103778300
7101b19e18  mov x8,#0x6e6d
7101b19e1c  movk x8,#0x5f75, LSL #16
7101b19e20  mov x10,#0x7472
7101b19e24  movk x10,#0x705f, LSL #16
7101b19e28  movk x8,#0x6e69, LSL #32
7101b19e2c  movk x8,#0x6573, LSL #48
7101b19e30  add x9,sp,#0x18
7101b19e34  movk x10,#0x706f, LSL #32
7101b19e38  movk x10,#0x7075, LSL #48
7101b19e3c  stp x8,x10,[sp, #0x20]
7101b19e40  add x8,x9,#0x9
7101b19e44  mov w9,#0x635f
7101b19e48  strh w9,[sp, #0x30]
7101b19e4c  mov x9,#0x7461
7101b19e50  movk x9,#0x6765, LSL #16
7101b19e54  movk x9,#0x726f, LSL #32
7101b19e58  movk x9,#0x5f79, LSL #48
7101b19e5c  stur x9,[sp, #0x32]
7101b19e60  mov x9,#0x7073
7101b19e64  movk x9,#0x7269, LSL #16
7101b19e68  movk x9,#0x7469, LSL #32
7101b19e6c  movk x9,#0x73, LSL #48
7101b19e70  stur x9,[sp, #0x3a]
7101b19e74  mov w9,#0x21
7101b19e78  str w9,[sp, #0x1c]
7101b19e7c  mov w10,#0x6d
7101b19e80  mov w9,#0x89
7101b19e84  mul w11,w21,w9
7101b19e88  and w10,w10,#0xff
7101b19e8c  eor w21,w11,w10
7101b19e90  ldrb w10,[x8], #0x1
7101b19e94  cbnz w10,0x7101b19e84
7101b19e98  str w21,[sp, #0x18]
7101b19e9c  mov w21,#0x21
7101b19ea0  add x0,x20,#0xd8
7101b19ea4  adrp x1,0x71042f6000
7101b19ea8  add x1,x1,#0x4eb
7101b19eac  add x8,sp,#0x8
7101b19eb0  bl 0x7103776910
7101b19eb4  ldr w8,[x19, #0x4]
7101b19eb8  cbz w8,0x7101b19ec4
7101b19ebc  add x1,x19,#0x8
7101b19ec0  b 0x7101b19ed0
7101b19ec4  cbz w21,0x7101b19f04
7101b19ec8  add x8,sp,#0x18
7101b19ecc  add x1,x8,#0x8
7101b19ed0  add x0,sp,#0x8
7101b19ed4  bl 0x710377a120
7101b19ed8  ldr x0,[sp, #0x10]
7101b19edc  adrp x8,0x710523d000
7101b19ee0  add x8,x8,#0x9a8
7101b19ee4  stp x8,xzr,[sp, #0x8]
7101b19ee8  cbz x0,0x7101b19ef0
7101b19eec  bl 0x710392eb40
7101b19ef0  ldp x29,x30,[sp, #0x80]
7101b19ef4  ldr x21,[sp, #0x60]
7101b19ef8  ldp x20,x19,[sp, #0x70]
7101b19efc  add sp,sp,#0x90
7101b19f00  ret
7101b19f04  ldr x8,[sp, #0x10]
7101b19f08  ldr x0,[x8, #0x10]
7101b19f0c  cbz x0,0x7101b19ed8
7101b19f10  sub x1,x29,#0x14
7101b19f14  mov w2,wzr
7101b19f18  mov w3,wzr
7101b19f1c  stur wzr,[x29, #-0x14]
7101b19f20  bl 0x71037a2270
7101b19f24  b 0x7101b19ed8
