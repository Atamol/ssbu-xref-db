// addr:      7101ad99a0
// offset:    0x1ad99a0
// name:      FUN_7101ad99a0
// mangled:   
// size:      1196

7101ad99a0  sub sp,sp,#0x130
7101ad99a4  str x28,[sp, #0xd0]
7101ad99a8  stp x26,x25,[sp, #0xe0]
7101ad99ac  stp x24,x23,[sp, #0xf0]
7101ad99b0  stp x22,x21,[sp, #0x100]
7101ad99b4  stp x20,x19,[sp, #0x110]
7101ad99b8  stp x29,x30,[sp, #0x120]
7101ad99bc  add x29,sp,#0x120
7101ad99c0  tbnz w1,#0x1f,0x7101ad9e2c
7101ad99c4  ldp x23,x8,[x0, #0x10]
7101ad99c8  cmp x23,x8
7101ad99cc  b.eq 0x7101ad9e2c
7101ad99d0  sub x8,x8,x23
7101ad99d4  orr x9,xzr,#-0x5555555555555556
7101ad99d8  asr x8,x8,#0x4
7101ad99dc  movk x9,#0xaaab
7101ad99e0  mul x8,x8,x9
7101ad99e4  sxtw x24,w1
7101ad99e8  cmp x8,x24
7101ad99ec  b.ls 0x7101ad9e2c
7101ad99f0  orr w8,wzr,#0x30
7101ad99f4  madd x20,x24,x8,x23
7101ad99f8  ldr w22,[x0, #0x28]
7101ad99fc  ldr x21,[x0, #0x8]
7101ad9a00  mov x0,x20
7101ad9a04  mov x1,x2
7101ad9a08  mov x19,x2
7101ad9a0c  bl 0x7101adddd0
7101ad9a10  adrp x25,0x710532f000
7101ad9a14  ldr x8,[x25, #0x730]
7101ad9a18  ldr x26,[x8, #0x8]
7101ad9a1c  ldr x1,[x20]
7101ad9a20  ldr x0,[x26, #0x1b8]
7101ad9a24  bl 0x71032b6c10
7101ad9a28  cmn w0,#0x1
7101ad9a2c  b.eq 0x7101ad9a48
7101ad9a30  mov w1,w0
7101ad9a34  adrp x0,0x71042b2000
7101ad9a38  add x0,x0,#0x794
7101ad9a3c  add x8,sp,#0x78
7101ad9a40  bl 0x71003a4ca0
7101ad9a44  b 0x7101ad9a50
7101ad9a48  strb wzr,[sp, #0x80]
7101ad9a4c  str xzr,[sp, #0x78]
7101ad9a50  adrp x1,0x71043cd000
7101ad9a54  add x1,x1,#0xab4
7101ad9a58  add x8,sp,#0x68
7101ad9a5c  mov x0,x19
7101ad9a60  bl 0x7103776910
7101ad9a64  add x8,sp,#0x78
7101ad9a68  add x1,x8,#0x8
7101ad9a6c  add x0,sp,#0x68
7101ad9a70  mov w2,#0x1
7101ad9a74  mov w3,w22
7101ad9a78  bl 0x710377a280
7101ad9a7c  ldr x1,[x20]
7101ad9a80  ldr x0,[x26, #0x1b8]
7101ad9a84  bl 0x71032b6c10
7101ad9a88  cmn w0,#0x1
7101ad9a8c  b.eq 0x7101ad9aa8
7101ad9a90  mov w1,w0
7101ad9a94  adrp x0,0x710426e000
7101ad9a98  add x0,x0,#0x471
7101ad9a9c  add x8,sp,#0x20
7101ad9aa0  bl 0x71003a4ca0
7101ad9aa4  b 0x7101ad9ab0
7101ad9aa8  strb wzr,[sp, #0x28]
7101ad9aac  str xzr,[sp, #0x20]
7101ad9ab0  adrp x1,0x71042e7000
7101ad9ab4  add x1,x1,#0xa7e
7101ad9ab8  add x8,sp,#0x10
7101ad9abc  mov x0,x19
7101ad9ac0  bl 0x7103776910
7101ad9ac4  adrp x1,0x7104319000
7101ad9ac8  add x1,x1,#0x6c3
7101ad9acc  mov x8,sp
7101ad9ad0  mov x0,x19
7101ad9ad4  bl 0x7103776910
7101ad9ad8  add x8,sp,#0x20
7101ad9adc  adrp x26,0x710593b000
7101ad9ae0  add x22,x8,#0x8
7101ad9ae4  ldr x8,[x26, #0xc60]
7101ad9ae8  mov x1,x22
7101ad9aec  ldr x0,[x8]
7101ad9af0  bl 0x71037a4570
7101ad9af4  tbz w0,#0x0,0x7101ad9bbc
7101ad9af8  ldr x8,[x26, #0xc60]
7101ad9afc  ldr x0,[x8]
7101ad9b00  mov x1,x22
7101ad9b04  bl 0x71037a4450
7101ad9b08  cbz x0,0x7101ad9bbc
7101ad9b0c  ldrh w11,[x0]
7101ad9b10  cbz w11,0x7101ad9bbc
7101ad9b14  mov w8,wzr
7101ad9b18  mov w9,#0x1
7101ad9b1c  orr w10,wzr,#0x3
7101ad9b20  mov x12,x0
7101ad9b24  orr w13,w11,#0x1
7101ad9b28  and w11,w11,#0xffff
7101ad9b2c  and w13,w13,#0xffff
7101ad9b30  cmp w13,#0xf
7101ad9b34  b.ne 0x7101ad9b50
7101ad9b38  cmp w11,#0xe
7101ad9b3c  b.ne 0x7101ad9b60
7101ad9b40  ldrh w11,[x12, #0x6]
7101ad9b44  lsr w11,w11,#0x1
7101ad9b48  add w11,w11,#0x4
7101ad9b4c  b 0x7101ad9b68
7101ad9b50  cmp w11,#0xa
7101ad9b54  mov w11,#0x1
7101ad9b58  cinc w9,w9,eq
7101ad9b5c  b 0x7101ad9b68
7101ad9b60  cmp w11,#0xf
7101ad9b64  csel w11,w10,wzr,eq
7101ad9b68  add w8,w11,w8
7101ad9b6c  add x12,x0,w8, UXTW  #0x1
7101ad9b70  ldrh w11,[x12]
7101ad9b74  cbnz w11,0x7101ad9b24
7101ad9b78  cmp w9,#0x3
7101ad9b7c  b.lt 0x7101ad9bbc
7101ad9b80  ldr x8,[sp, #0x8]
7101ad9b84  ldr x0,[x8, #0x10]
7101ad9b88  cbz x0,0x7101ad9ba0
7101ad9b8c  sub x1,x29,#0x60
7101ad9b90  mov w2,wzr
7101ad9b94  mov w3,wzr
7101ad9b98  stur wzr,[x29, #-0x60]
7101ad9b9c  bl 0x71037a2270
7101ad9ba0  add x0,sp,#0x10
7101ad9ba4  mov x1,x22
7101ad9ba8  bl 0x710377a120
7101ad9bac  ldr x0,[x19, #0x8]
7101ad9bb0  adrp x1,0x710425f000
7101ad9bb4  add x1,x1,#0xce6
7101ad9bb8  b 0x7101ad9bf4
7101ad9bbc  mov x0,sp
7101ad9bc0  mov x1,x22
7101ad9bc4  bl 0x710377a120
7101ad9bc8  ldr x8,[sp, #0x18]
7101ad9bcc  ldr x0,[x8, #0x10]
7101ad9bd0  cbz x0,0x7101ad9be8
7101ad9bd4  sub x1,x29,#0x60
7101ad9bd8  mov w2,wzr
7101ad9bdc  mov w3,wzr
7101ad9be0  stur wzr,[x29, #-0x60]
7101ad9be4  bl 0x71037a2270
7101ad9be8  ldr x0,[x19, #0x8]
7101ad9bec  adrp x1,0x710433a000
7101ad9bf0  add x1,x1,#0x9cc
7101ad9bf4  fmov s0,0x3f800000
7101ad9bf8  bl 0x7103778300
7101ad9bfc  ldr x8,[x25, #0x730]
7101ad9c00  ldr x26,[x8, #0x8]
7101ad9c04  mov x0,x20
7101ad9c08  bl 0x7101addb00
7101ad9c0c  mov w22,w0
7101ad9c10  sub x0,x29,#0x60
7101ad9c14  mov w1,w22
7101ad9c18  mov x2,x19
7101ad9c1c  bl 0x7101addcc0
7101ad9c20  cmp w22,#0x6
7101ad9c24  b.hi 0x7101ad9ca8
7101ad9c28  mov w8,w22
7101ad9c2c  adrp x9,0x71044f8000
7101ad9c30  add x9,x9,#0x35c
7101ad9c34  ldrsw x8,[x9, x8, LSL #0x2]
7101ad9c38  add x8,x8,x9
7101ad9c3c  br x8
7101ad9c40  ldr x8,[x25, #0x730]
7101ad9c44  ldr x8,[x8, #0x8]
7101ad9c48  orr w9,wzr,#0x30
7101ad9c4c  madd x9,x24,x9,x23
7101ad9c50  ldr x1,[x9, #0x20]
7101ad9c54  ldr x8,[x8, #0x268]
7101ad9c58  ldr x0,[x8, #0x8]
7101ad9c5c  bl 0x710327fb30
7101ad9c60  mov x1,x0
7101ad9c64  mov w2,#0x15
7101ad9c68  mov x0,x21
7101ad9c6c  bl 0x710323f8d0
7101ad9c70  b 0x7101ad9d70
7101ad9c74  ldr x8,[x25, #0x730]
7101ad9c78  ldr x8,[x8, #0x8]
7101ad9c7c  orr w9,wzr,#0x30
7101ad9c80  madd x9,x24,x9,x23
7101ad9c84  ldr x1,[x9, #0x20]
7101ad9c88  ldr x8,[x8, #0x178]
7101ad9c8c  ldr x0,[x8, #0x8]
7101ad9c90  bl 0x71032b23e0
7101ad9c94  mov x1,x0
7101ad9c98  orr w2,wzr,#0xe
7101ad9c9c  mov x0,x21
7101ad9ca0  bl 0x710323f4a0
7101ad9ca4  b 0x7101ad9d70
7101ad9ca8  ldur x21,[x29, #-0x58]
7101ad9cac  mov w1,#0x1
7101ad9cb0  mov x0,x21
7101ad9cb4  bl 0x71037790a0
7101ad9cb8  b 0x7101ad9d80
7101ad9cbc  ldr x8,[x25, #0x730]
7101ad9cc0  orr w9,wzr,#0x30
7101ad9cc4  madd x9,x24,x9,x23
7101ad9cc8  ldr x8,[x8, #0x8]
7101ad9ccc  ldr x1,[x9, #0x20]
7101ad9cd0  ldr x0,[x8, #0x168]
7101ad9cd4  bl 0x71032631a0
7101ad9cd8  mov x22,x0
7101ad9cdc  ldr x1,[x20]
7101ad9ce0  ldr x0,[x26, #0x1b8]
7101ad9ce4  bl 0x71032b9580
7101ad9ce8  mvn w8,w0
7101ad9cec  tst w8,#0xff
7101ad9cf0  b.eq 0x7101ad9d5c
7101ad9cf4  sxtb w2,w0
7101ad9cf8  mov w3,#0x1
7101ad9cfc  mov x0,x21
7101ad9d00  mov x1,x22
7101ad9d04  b 0x7101ad9d6c
7101ad9d08  ldr x8,[x25, #0x730]
7101ad9d0c  orr w9,wzr,#0x30
7101ad9d10  madd x9,x24,x9,x23
7101ad9d14  ldr x8,[x8, #0x8]
7101ad9d18  ldr x1,[x9, #0x20]
7101ad9d1c  ldr x0,[x8, #0x168]
7101ad9d20  bl 0x71032631a0
7101ad9d24  stur wzr,[x29, #-0x44]
7101ad9d28  mov x22,x0
7101ad9d2c  ldr x0,[x26, #0x1b8]
7101ad9d30  ldr x1,[x20]
7101ad9d34  sub x2,x29,#0x44
7101ad9d38  bl 0x71032b8880
7101ad9d3c  ldur w8,[x29, #-0x44]
7101ad9d40  mov w2,w0
7101ad9d44  mov w3,#0x24
7101ad9d48  mov x0,x21
7101ad9d4c  mov x1,x22
7101ad9d50  sub w4,w8,#0x1
7101ad9d54  bl 0x71032407a0
7101ad9d58  b 0x7101ad9d70
7101ad9d5c  mov w3,#0x1
7101ad9d60  mov x0,x21
7101ad9d64  mov x1,x22
7101ad9d68  mov w2,wzr
7101ad9d6c  bl 0x710323f330
7101ad9d70  ldur x21,[x29, #-0x58]
7101ad9d74  mov x1,x0
7101ad9d78  mov x0,x21
7101ad9d7c  bl 0x7103778b80
7101ad9d80  adrp x22,0x710523d000
7101ad9d84  add x22,x22,#0x9a8
7101ad9d88  stp x22,xzr,[x29, #-0x60]
7101ad9d8c  cbz x21,0x7101ad9d98
7101ad9d90  mov x0,x21
7101ad9d94  bl 0x710392eb40
7101ad9d98  mov x0,x20
7101ad9d9c  bl 0x7101addb00
7101ad9da0  mov x1,x19
7101ad9da4  bl 0x7101addf20
7101ad9da8  adrp x1,0x7104292000
7101ad9dac  add x1,x1,#0x511
7101ad9db0  sub x8,x29,#0x60
7101ad9db4  mov x0,x19
7101ad9db8  bl 0x7103776640
7101ad9dbc  ldur x19,[x29, #-0x58]
7101ad9dc0  fmov s0,0x3f800000
7101ad9dc4  adrp x1,0x71043cd000
7101ad9dc8  add x1,x1,#0x335
7101ad9dcc  mov x0,x19
7101ad9dd0  bl 0x7103778300
7101ad9dd4  adrp x8,0x710523d000
7101ad9dd8  add x8,x8,#0x988
7101ad9ddc  stp x8,xzr,[x29, #-0x60]
7101ad9de0  cbz x19,0x7101ad9dfc
7101ad9de4  ldr x0,[x19, #0x18]
7101ad9de8  stp x22,xzr,[x19, #0x10]
7101ad9dec  cbz x0,0x7101ad9df4
7101ad9df0  bl 0x710392eb40
7101ad9df4  mov x0,x19
7101ad9df8  bl 0x710392eb40
7101ad9dfc  ldr x0,[sp, #0x8]
7101ad9e00  stp x22,xzr,[sp]
7101ad9e04  cbz x0,0x7101ad9e0c
7101ad9e08  bl 0x710392eb40
7101ad9e0c  ldr x0,[sp, #0x18]
7101ad9e10  stp x22,xzr,[sp, #0x10]
7101ad9e14  cbz x0,0x7101ad9e1c
7101ad9e18  bl 0x710392eb40
7101ad9e1c  ldr x0,[sp, #0x70]
7101ad9e20  stp x22,xzr,[sp, #0x68]
7101ad9e24  cbz x0,0x7101ad9e2c
7101ad9e28  bl 0x710392eb40
7101ad9e2c  ldp x29,x30,[sp, #0x120]
7101ad9e30  ldr x28,[sp, #0xd0]
7101ad9e34  ldp x20,x19,[sp, #0x110]
7101ad9e38  ldp x22,x21,[sp, #0x100]
7101ad9e3c  ldp x24,x23,[sp, #0xf0]
7101ad9e40  ldp x26,x25,[sp, #0xe0]
7101ad9e44  add sp,sp,#0x130
7101ad9e48  ret
