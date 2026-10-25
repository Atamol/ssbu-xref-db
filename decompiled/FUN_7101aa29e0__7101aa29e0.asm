// addr:      7101aa29e0
// offset:    0x1aa29e0
// name:      FUN_7101aa29e0
// mangled:   
// size:      1008

7101aa29e0  sub sp,sp,#0x90
7101aa29e4  stp x22,x21,[sp, #0x60]
7101aa29e8  stp x20,x19,[sp, #0x70]
7101aa29ec  stp x29,x30,[sp, #0x80]
7101aa29f0  add x29,sp,#0x80
7101aa29f4  ldr x8,[x0, #0x1a0]
7101aa29f8  ldr x21,[x8]
7101aa29fc  ldr w8,[x0, #0x17c]
7101aa2a00  mov x19,x0
7101aa2a04  cbz w8,0x7101aa2b3c
7101aa2a08  ldr x8,[x21, #0x10]
7101aa2a0c  ldr x0,[x8, #0x8]
7101aa2a10  cbz x0,0x7101aa2a34
7101aa2a14  adrp x1,0x7104421000
7101aa2a18  add x1,x1,#0x55
7101aa2a1c  bl 0x71037964b0
7101aa2a20  cbz x0,0x7101aa2a34
7101aa2a24  ldr x8,[x0]
7101aa2a28  ldr x8,[x8, #0x138]
7101aa2a2c  blr x8
7101aa2a30  tbz w0,#0x0,0x7101aa2db8
7101aa2a34  ldr x0,[x19, #0x1b0]
7101aa2a38  ldr x8,[x0]
7101aa2a3c  ldr x8,[x8, #0x68]
7101aa2a40  blr x8
7101aa2a44  tbnz w0,#0x0,0x7101aa2a5c
7101aa2a48  ldr x0,[x19, #0x1b0]
7101aa2a4c  ldr x8,[x0]
7101aa2a50  ldr x8,[x8, #0x60]
7101aa2a54  mov w1,#0x1
7101aa2a58  blr x8
7101aa2a5c  ldr x8,[x19, #0x198]
7101aa2a60  ldr x8,[x8]
7101aa2a64  ldr x8,[x8]
7101aa2a68  ldr x8,[x8, #0x600]
7101aa2a6c  ldrb w9,[x8, #0x4aa]
7101aa2a70  cbz w9,0x7101aa2a94
7101aa2a74  ldrb w8,[x8, #0x1ac]
7101aa2a78  tbz w8,#0x1,0x7101aa2a94
7101aa2a7c  ldrsw x8,[x19, #0x174]
7101aa2a80  cmp w8,#0x13
7101aa2a84  b.cs 0x7101aa2dcc
7101aa2a88  add x8,x19,x8, LSL #0x2
7101aa2a8c  mov w9,#0xd
7101aa2a90  str w9,[x8, #0x128]
7101aa2a94  ldr x8,[x19, #0x1b0]
7101aa2a98  ldr w8,[x8, #0x25c]
7101aa2a9c  tbnz w8,#0x1f,0x7101aa2db8
7101aa2aa0  ldr x8,[x19, #0x198]
7101aa2aa4  ldr x8,[x8]
7101aa2aa8  add x0,x8,#0x8
7101aa2aac  adrp x1,0x710439d000
7101aa2ab0  add x1,x1,#0x562
7101aa2ab4  add x8,sp,#0x10
7101aa2ab8  bl 0x7103776640
7101aa2abc  ldr x20,[sp, #0x18]
7101aa2ac0  fmov s0,0x3f800000
7101aa2ac4  adrp x1,0x71043cf000
7101aa2ac8  add x1,x1,#0x594
7101aa2acc  mov x0,x20
7101aa2ad0  bl 0x7103778300
7101aa2ad4  adrp x22,0x710523d000
7101aa2ad8  add x22,x22,#0x988
7101aa2adc  stp x22,xzr,[sp, #0x10]
7101aa2ae0  cbz x20,0x7101aa2b04
7101aa2ae4  ldr x0,[x20, #0x18]
7101aa2ae8  adrp x8,0x710523d000
7101aa2aec  add x8,x8,#0x9a8
7101aa2af0  stp x8,xzr,[x20, #0x10]
7101aa2af4  cbz x0,0x7101aa2afc
7101aa2af8  bl 0x710392eb40
7101aa2afc  mov x0,x20
7101aa2b00  bl 0x710392eb40
7101aa2b04  ldr x1,[x19, #0x1b0]
7101aa2b08  ldr w8,[x1, #0x25c]
7101aa2b0c  sub w8,w8,#0x1
7101aa2b10  cmp w8,#0x4
7101aa2b14  b.hi 0x7101aa2cc8
7101aa2b18  adrp x9,0x71044f7000
7101aa2b1c  add x9,x9,#0xd64
7101aa2b20  ldrsw x8,[x9, x8, LSL #0x2]
7101aa2b24  add x8,x8,x9
7101aa2b28  br x8
7101aa2b2c  mov w8,#0x1
7101aa2b30  adrp x20,0x710438c000
7101aa2b34  add x20,x20,#0x3c4
7101aa2b38  b 0x7101aa2cd4
7101aa2b3c  adrp x8,0x710532f000
7101aa2b40  ldr x8,[x8, #0x8d0]
7101aa2b44  ldr x0,[x8, #0x8]
7101aa2b48  ldp x8,x9,[x0, #0x40]
7101aa2b4c  sub x9,x9,x8
7101aa2b50  asr x9,x9,#0x3
7101aa2b54  cmp x9,#0x6
7101aa2b58  b.cc 0x7101aa2b6c
7101aa2b5c  ldr x20,[x8, #0x28]
7101aa2b60  ldrb w8,[x0, #0x191]
7101aa2b64  cbnz w8,0x7101aa2be8
7101aa2b68  b 0x7101aa2b78
7101aa2b6c  mov x20,xzr
7101aa2b70  ldrb w8,[x0, #0x191]
7101aa2b74  cbnz w8,0x7101aa2be8
7101aa2b78  mov w2,#0x4
7101aa2b7c  mov x1,x20
7101aa2b80  bl 0x7103313f20
7101aa2b84  tbz w0,#0x0,0x7101aa2be8
7101aa2b88  add x0,sp,#0x20
7101aa2b8c  mov x1,x20
7101aa2b90  bl 0x71024076d0
7101aa2b94  ldr x8,[sp, #0x30]
7101aa2b98  adrp x9,0x7104f73000
7101aa2b9c  add x9,x9,#0xd50
7101aa2ba0  str x9,[sp, #0x28]
7101aa2ba4  cbz x8,0x7101aa2c14
7101aa2ba8  adrp x8,0x7106dd5000
7101aa2bac  ldrb w8,[x8, #0x3a8]
7101aa2bb0  cmp w8,#0x1
7101aa2bb4  b.ne 0x7101aa2c14
7101aa2bb8  adrp x9,0x7106dd5000
7101aa2bbc  ldr w8,[sp, #0x38]
7101aa2bc0  ldr w9,[x9, #0x3ac]
7101aa2bc4  cmp w8,w9
7101aa2bc8  b.ne 0x7101aa2c14
7101aa2bcc  ldr x8,[sp, #0x30]
7101aa2bd0  ldr wzr,[x8, #0x38]!
7101aa2bd4  ldaxr w9,[x8]
7101aa2bd8  sub w9,w9,#0x1
7101aa2bdc  stlxr w10,w9,[x8]
7101aa2be0  cbnz w10,0x7101aa2bd4
7101aa2be4  b 0x7101aa2c14
7101aa2be8  mov x8,#0x650000000000
7101aa2bec  movk x8,#0x87, LSL #48
7101aa2bf0  strb wzr,[sp, #0x40]
7101aa2bf4  stp xzr,x8,[sp, #0x30]
7101aa2bf8  mov x8,#-0x1
7101aa2bfc  stp x8,xzr,[sp, #0x48]
7101aa2c00  adrp x8,0x7104f73000
7101aa2c04  add x8,x8,#0xd50
7101aa2c08  str wzr,[sp, #0x20]
7101aa2c0c  str xzr,[sp, #0x58]
7101aa2c10  str x8,[sp, #0x28]
7101aa2c14  str xzr,[sp, #0x30]
7101aa2c18  strb wzr,[sp, #0x40]
7101aa2c1c  ldr x8,[x19, #0x1a0]
7101aa2c20  ldr x0,[x8]
7101aa2c24  mov w2,#0x5000
7101aa2c28  movk w2,#0x1, LSL #16
7101aa2c2c  mov w1,#0x1
7101aa2c30  bl 0x7103775dc0
7101aa2c34  ldr x0,[x21, #0x10]
7101aa2c38  fmov s0,0x3f800000
7101aa2c3c  adrp x1,0x7104421000
7101aa2c40  add x1,x1,#0x55
7101aa2c44  bl 0x7103778300
7101aa2c48  ldr x0,[x19, #0x1a8]
7101aa2c4c  ldr x8,[x0]
7101aa2c50  ldr x8,[x8, #0x70]
7101aa2c54  mov w1,wzr
7101aa2c58  blr x8
7101aa2c5c  ldr x0,[x19, #0x1a8]
7101aa2c60  ldr x8,[x0]
7101aa2c64  ldr x8,[x8, #0x60]
7101aa2c68  mov w1,wzr
7101aa2c6c  blr x8
7101aa2c70  ldr x0,[x19, #0x1b0]
7101aa2c74  ldr x8,[x0]
7101aa2c78  ldr x8,[x8, #0x70]
7101aa2c7c  mov w1,#0x1
7101aa2c80  blr x8
7101aa2c84  b 0x7101aa2db8
7101aa2c88  mov w8,#0x5
7101aa2c8c  adrp x20,0x710437c000
7101aa2c90  add x20,x20,#0x99
7101aa2c94  b 0x7101aa2cd4
7101aa2c98  orr w8,wzr,#0x3
7101aa2c9c  adrp x20,0x7104421000
7101aa2ca0  add x20,x20,#0xd68
7101aa2ca4  b 0x7101aa2cd4
7101aa2ca8  mov w8,#0x2
7101aa2cac  adrp x20,0x7104280000
7101aa2cb0  add x20,x20,#0x4e7
7101aa2cb4  b 0x7101aa2cd4
7101aa2cb8  mov w8,#0x4
7101aa2cbc  adrp x20,0x71043df000
7101aa2cc0  add x20,x20,#0xb29
7101aa2cc4  b 0x7101aa2cd4
7101aa2cc8  mov w8,wzr
7101aa2ccc  adrp x20,0x710435b000
7101aa2cd0  add x20,x20,#0xcc
7101aa2cd4  ldr w2,[x19, #0x52c]
7101aa2cd8  add x0,sp,#0x10
7101aa2cdc  strb w8,[x19, #0x209]
7101aa2ce0  bl 0x7103771d60
7101aa2ce4  ldr x21,[sp, #0x18]
7101aa2ce8  ldr x0,[x21]
7101aa2cec  cbz x0,0x7101aa2d04
7101aa2cf0  ldr x8,[x0]
7101aa2cf4  ldr x8,[x8, #0x2f0]
7101aa2cf8  mov w1,wzr
7101aa2cfc  mov w2,wzr
7101aa2d00  blr x8
7101aa2d04  adrp x8,0x710523d000
7101aa2d08  add x8,x8,#0x9c8
7101aa2d0c  stp x8,xzr,[sp, #0x10]
7101aa2d10  cbz x21,0x7101aa2d1c
7101aa2d14  mov x0,x21
7101aa2d18  bl 0x710392eb40
7101aa2d1c  ldr x8,[x19, #0x1b0]
7101aa2d20  ldr w8,[x8, #0x25c]
7101aa2d24  str w8,[x19, #0x52c]
7101aa2d28  ldr x8,[x19, #0x198]
7101aa2d2c  ldr x8,[x8]
7101aa2d30  add x0,x8,#0x8
7101aa2d34  adrp x1,0x710439d000
7101aa2d38  add x1,x1,#0x562
7101aa2d3c  mov x8,sp
7101aa2d40  bl 0x7103776640
7101aa2d44  adrp x1,0x71043cf000
7101aa2d48  add x1,x1,#0xca4
7101aa2d4c  add x8,sp,#0x10
7101aa2d50  mov x0,sp
7101aa2d54  bl 0x7103776910
7101aa2d58  add x0,sp,#0x10
7101aa2d5c  mov x1,x20
7101aa2d60  bl 0x710377a120
7101aa2d64  ldr x0,[sp, #0x18]
7101aa2d68  adrp x21,0x710523d000
7101aa2d6c  add x21,x21,#0x9a8
7101aa2d70  stp x21,xzr,[sp, #0x10]
7101aa2d74  cbz x0,0x7101aa2d7c
7101aa2d78  bl 0x710392eb40
7101aa2d7c  ldr x20,[sp, #0x8]
7101aa2d80  stp x22,xzr,[sp]
7101aa2d84  cbz x20,0x7101aa2da0
7101aa2d88  ldr x0,[x20, #0x18]
7101aa2d8c  stp x21,xzr,[x20, #0x10]
7101aa2d90  cbz x0,0x7101aa2d98
7101aa2d94  bl 0x710392eb40
7101aa2d98  mov x0,x20
7101aa2d9c  bl 0x710392eb40
7101aa2da0  ldrsw x8,[x19, #0x174]
7101aa2da4  cmp w8,#0x13
7101aa2da8  b.cs 0x7101aa2dcc
7101aa2dac  add x8,x19,x8, LSL #0x2
7101aa2db0  mov w9,#0xd
7101aa2db4  str w9,[x8, #0x128]
7101aa2db8  ldp x29,x30,[sp, #0x80]
7101aa2dbc  ldp x20,x19,[sp, #0x70]
7101aa2dc0  ldp x22,x21,[sp, #0x60]
7101aa2dc4  add sp,sp,#0x90
7101aa2dc8  ret
7101aa2dcc  bl 0x71039c2650
