// addr:      7101ee8990
// offset:    0x1ee8990
// name:      FUN_7101ee8990
// mangled:   
// size:      2180

7101ee8990  sub sp,sp,#0x120
7101ee8994  stp x28,x25,[sp, #0xd0]
7101ee8998  stp x24,x23,[sp, #0xe0]
7101ee899c  stp x22,x21,[sp, #0xf0]
7101ee89a0  stp x20,x19,[sp, #0x100]
7101ee89a4  stp x29,x30,[sp, #0x110]
7101ee89a8  add x29,sp,#0x110
7101ee89ac  ldr x8,[x0, #0x1a0]
7101ee89b0  mov x19,x0
7101ee89b4  ldr x0,[x8, #0x10]
7101ee89b8  mov w22,w2
7101ee89bc  mov x20,x1
7101ee89c0  cbz x0,0x7101ee89d8
7101ee89c4  add x1,sp,#0x78
7101ee89c8  mov w2,wzr
7101ee89cc  mov w3,wzr
7101ee89d0  str wzr,[sp, #0x78]
7101ee89d4  bl 0x71037a2270
7101ee89d8  ldr x8,[x19, #0x1b0]
7101ee89dc  ldr x0,[x8, #0x10]
7101ee89e0  cbz x0,0x7101ee89f8
7101ee89e4  add x1,sp,#0x78
7101ee89e8  mov w2,wzr
7101ee89ec  mov w3,wzr
7101ee89f0  str wzr,[sp, #0x78]
7101ee89f4  bl 0x71037a2270
7101ee89f8  and x8,x20,#-0x100000000000000
7101ee89fc  orr x9,xzr,#0x800000000000000
7101ee8a00  cmp x8,x9
7101ee8a04  b.ne 0x7101ee91a8
7101ee8a08  and x8,x20,#0xffffffffff
7101ee8a0c  cbz x8,0x7101ee91a8
7101ee8a10  ldr x8,[x19]
7101ee8a14  ldr x8,[x8]
7101ee8a18  add x1,x8,#0x8
7101ee8a1c  sub x0,x29,#0x50
7101ee8a20  add x21,x19,#0x198
7101ee8a24  bl 0x7103776390
7101ee8a28  adrp x8,0x710532f000
7101ee8a2c  ldr x8,[x8, #0x730]
7101ee8a30  ldr x25,[x8, #0x8]
7101ee8a34  ldrb w8,[x19, #0x1cc]
7101ee8a38  cbz w8,0x7101ee8a84
7101ee8a3c  adrp x1,0x7104433000
7101ee8a40  add x1,x1,#0x85a
7101ee8a44  add x8,sp,#0x28
7101ee8a48  sub x0,x29,#0x50
7101ee8a4c  mov w2,w22
7101ee8a50  bl 0x7103776910
7101ee8a54  ldr x0,[x25, #0x1b8]
7101ee8a58  mov x1,x20
7101ee8a5c  add x23,x25,#0x1b8
7101ee8a60  bl 0x71032b6c10
7101ee8a64  cmn w0,#0x1
7101ee8a68  b.eq 0x7101ee8c00
7101ee8a6c  mov w1,w0
7101ee8a70  adrp x0,0x71042b2000
7101ee8a74  add x0,x0,#0x794
7101ee8a78  add x8,sp,#0x78
7101ee8a7c  bl 0x71003a4ca0
7101ee8a80  b 0x7101ee8c08
7101ee8a84  adrp x8,0x710532f000
7101ee8a88  ldr x1,[x8, #0x8e0]
7101ee8a8c  add x0,sp,#0x28
7101ee8a90  mov x2,x20
7101ee8a94  bl 0x710333dd70
7101ee8a98  adrp x1,0x71042b4000
7101ee8a9c  add x1,x1,#0xbd0
7101ee8aa0  add x8,sp,#0x68
7101ee8aa4  sub x0,x29,#0x50
7101ee8aa8  mov w2,w22
7101ee8aac  bl 0x7103776640
7101ee8ab0  add x0,sp,#0x28
7101ee8ab4  bl 0x7101addb00
7101ee8ab8  mov w23,w0
7101ee8abc  add x0,sp,#0x28
7101ee8ac0  bl 0x7101addb00
7101ee8ac4  mov w1,w0
7101ee8ac8  add x0,sp,#0x78
7101ee8acc  add x2,sp,#0x68
7101ee8ad0  bl 0x7101addcc0
7101ee8ad4  ldr x8,[sp, #0x80]
7101ee8ad8  ldr x8,[x8]
7101ee8adc  cbz x8,0x7101ee8b88
7101ee8ae0  add x8,x19,w22, SXTW  #0x2
7101ee8ae4  ldr w10,[x8, #0x1d4]
7101ee8ae8  orr w9,wzr,#0xffffff
7101ee8aec  cmp w10,w9
7101ee8af0  b.eq 0x7101ee8b88
7101ee8af4  adrp x9,0x7105332000
7101ee8af8  ldr x9,[x9, #0xf20]
7101ee8afc  ldr w11,[x9, #0x18]
7101ee8b00  cmp w11,w10
7101ee8b04  b.ls 0x7101ee8b88
7101ee8b08  ldr x11,[x9, #0x8]
7101ee8b0c  add x12,x11,x10, LSL #0x3
7101ee8b10  ldrb w12,[x12, #0x4]
7101ee8b14  cbz w12,0x7101ee8b88
7101ee8b18  lsl x10,x10,#0x3
7101ee8b1c  ldr w10,[x11, x10, LSL #0x0]
7101ee8b20  orr w11,wzr,#0xffffff
7101ee8b24  cmp w10,w11
7101ee8b28  b.eq 0x7101ee8b88
7101ee8b2c  ldr w11,[x9, #0x1c]
7101ee8b30  cmp w11,w10
7101ee8b34  b.ls 0x7101ee8b88
7101ee8b38  ldr x11,[x9, #0x10]
7101ee8b3c  orr w9,wzr,#0x18
7101ee8b40  madd x9,x10,x9,x11
7101ee8b44  ldrb w12,[x9, #0xc]
7101ee8b48  cbz w12,0x7101ee8b88
7101ee8b4c  cbz x9,0x7101ee8b88
7101ee8b50  orr w12,wzr,#0x18
7101ee8b54  madd x10,x10,x12,x11
7101ee8b58  add x10,x10,#0xd
7101ee8b5c  ldarb w10,[x10]
7101ee8b60  and w10,w10,#0xff
7101ee8b64  cmp w10,#0x3
7101ee8b68  b.ne 0x7101ee8b88
7101ee8b6c  ldr x9,[x9]
7101ee8b70  cbz x9,0x7101ee8b88
7101ee8b74  ldr x22,[sp, #0x80]
7101ee8b78  add x1,x8,#0x1d4
7101ee8b7c  mov x0,x22
7101ee8b80  bl 0x7103778c70
7101ee8b84  b 0x7101ee8b98
7101ee8b88  ldr x22,[sp, #0x80]
7101ee8b8c  mov w1,#0x1
7101ee8b90  mov x0,x22
7101ee8b94  bl 0x71037790a0
7101ee8b98  adrp x24,0x710523d000
7101ee8b9c  add x24,x24,#0x9a8
7101ee8ba0  stp x24,xzr,[sp, #0x78]
7101ee8ba4  cbz x22,0x7101ee8bb0
7101ee8ba8  mov x0,x22
7101ee8bac  bl 0x710392eb40
7101ee8bb0  add x1,sp,#0x68
7101ee8bb4  mov w0,w23
7101ee8bb8  bl 0x7101addf20
7101ee8bbc  adrp x1,0x71043cd000
7101ee8bc0  add x1,x1,#0xab4
7101ee8bc4  add x8,sp,#0x58
7101ee8bc8  add x0,sp,#0x68
7101ee8bcc  bl 0x7103776910
7101ee8bd0  ldr x0,[x25, #0x1b8]
7101ee8bd4  mov x1,x20
7101ee8bd8  add x23,x25,#0x1b8
7101ee8bdc  bl 0x71032b6c10
7101ee8be0  cmn w0,#0x1
7101ee8be4  b.eq 0x7101ee8e58
7101ee8be8  mov w1,w0
7101ee8bec  adrp x0,0x71042b2000
7101ee8bf0  add x0,x0,#0x794
7101ee8bf4  add x8,sp,#0x78
7101ee8bf8  bl 0x71003a4ca0
7101ee8bfc  b 0x7101ee8e60
7101ee8c00  strb wzr,[sp, #0x80]
7101ee8c04  str xzr,[sp, #0x78]
7101ee8c08  add x8,sp,#0x78
7101ee8c0c  add x1,x8,#0x8
7101ee8c10  add x0,sp,#0x28
7101ee8c14  mov w2,#0x1
7101ee8c18  mov w3,#0x1
7101ee8c1c  bl 0x710377a280
7101ee8c20  adrp x1,0x7104443000
7101ee8c24  add x1,x1,#0xee5
7101ee8c28  add x8,sp,#0x68
7101ee8c2c  sub x0,x29,#0x50
7101ee8c30  mov w2,w22
7101ee8c34  bl 0x7103776910
7101ee8c38  adrp x1,0x7104443000
7101ee8c3c  add x1,x1,#0xeff
7101ee8c40  add x8,sp,#0x58
7101ee8c44  sub x0,x29,#0x50
7101ee8c48  mov w2,w22
7101ee8c4c  bl 0x7103776910
7101ee8c50  ldr x0,[x23]
7101ee8c54  mov x1,x20
7101ee8c58  bl 0x71032b6c10
7101ee8c5c  cmn w0,#0x1
7101ee8c60  b.eq 0x7101ee8c7c
7101ee8c64  mov w1,w0
7101ee8c68  adrp x0,0x710426e000
7101ee8c6c  add x0,x0,#0x471
7101ee8c70  add x8,sp,#0x78
7101ee8c74  bl 0x71003a4ca0
7101ee8c78  b 0x7101ee8c84
7101ee8c7c  strb wzr,[sp, #0x80]
7101ee8c80  str xzr,[sp, #0x78]
7101ee8c84  add x8,sp,#0x78
7101ee8c88  adrp x24,0x710593b000
7101ee8c8c  add x22,x8,#0x8
7101ee8c90  ldr x8,[x24, #0xc60]
7101ee8c94  mov x1,x22
7101ee8c98  ldr x0,[x8]
7101ee8c9c  bl 0x71037a4570
7101ee8ca0  tbz w0,#0x0,0x7101ee8d78
7101ee8ca4  ldr x8,[x24, #0xc60]
7101ee8ca8  ldr x0,[x8]
7101ee8cac  mov x1,x22
7101ee8cb0  bl 0x71037a4450
7101ee8cb4  cbz x0,0x7101ee8d78
7101ee8cb8  ldrh w11,[x0]
7101ee8cbc  cbz w11,0x7101ee8d78
7101ee8cc0  mov w8,wzr
7101ee8cc4  mov w9,#0x1
7101ee8cc8  orr w10,wzr,#0x3
7101ee8ccc  mov x12,x0
7101ee8cd0  orr w13,w11,#0x1
7101ee8cd4  and w11,w11,#0xffff
7101ee8cd8  and w13,w13,#0xffff
7101ee8cdc  cmp w13,#0xf
7101ee8ce0  b.ne 0x7101ee8cfc
7101ee8ce4  cmp w11,#0xe
7101ee8ce8  b.ne 0x7101ee8d0c
7101ee8cec  ldrh w11,[x12, #0x6]
7101ee8cf0  lsr w11,w11,#0x1
7101ee8cf4  add w11,w11,#0x4
7101ee8cf8  b 0x7101ee8d14
7101ee8cfc  cmp w11,#0xa
7101ee8d00  mov w11,#0x1
7101ee8d04  cinc w9,w9,eq
7101ee8d08  b 0x7101ee8d14
7101ee8d0c  cmp w11,#0xf
7101ee8d10  csel w11,w10,wzr,eq
7101ee8d14  add w8,w11,w8
7101ee8d18  add x12,x0,w8, UXTW  #0x1
7101ee8d1c  ldrh w11,[x12]
7101ee8d20  cbnz w11,0x7101ee8cd0
7101ee8d24  cmp w9,#0x3
7101ee8d28  b.lt 0x7101ee8d78
7101ee8d2c  ldr x8,[sp, #0x60]
7101ee8d30  ldr x0,[x8, #0x10]
7101ee8d34  cbz x0,0x7101ee8d4c
7101ee8d38  add x1,sp,#0x78
7101ee8d3c  mov w2,wzr
7101ee8d40  mov w3,wzr
7101ee8d44  str wzr,[sp, #0x78]
7101ee8d48  bl 0x71037a2270
7101ee8d4c  ldr x0,[x23]
7101ee8d50  mov x1,x20
7101ee8d54  bl 0x71032b6c10
7101ee8d58  cmn w0,#0x1
7101ee8d5c  b.eq 0x7101ee91c4
7101ee8d60  mov w1,w0
7101ee8d64  adrp x0,0x710426e000
7101ee8d68  add x0,x0,#0x471
7101ee8d6c  add x8,sp,#0x78
7101ee8d70  bl 0x71003a4ca0
7101ee8d74  b 0x7101ee91cc
7101ee8d78  ldr x0,[x23]
7101ee8d7c  mov x1,x20
7101ee8d80  bl 0x71032b6c10
7101ee8d84  cmn w0,#0x1
7101ee8d88  b.eq 0x7101ee8da4
7101ee8d8c  mov w1,w0
7101ee8d90  adrp x0,0x710426e000
7101ee8d94  add x0,x0,#0x471
7101ee8d98  add x8,sp,#0x78
7101ee8d9c  bl 0x71003a4ca0
7101ee8da0  b 0x7101ee8dac
7101ee8da4  strb wzr,[sp, #0x80]
7101ee8da8  str xzr,[sp, #0x78]
7101ee8dac  add x8,sp,#0x78
7101ee8db0  add x1,x8,#0x8
7101ee8db4  add x0,sp,#0x58
7101ee8db8  bl 0x710377a120
7101ee8dbc  ldr x8,[sp, #0x70]
7101ee8dc0  ldr x0,[x8, #0x10]
7101ee8dc4  cbz x0,0x7101ee8ddc
7101ee8dc8  add x1,sp,#0x78
7101ee8dcc  mov w2,wzr
7101ee8dd0  mov w3,wzr
7101ee8dd4  str wzr,[sp, #0x78]
7101ee8dd8  bl 0x71037a2270
7101ee8ddc  ldur x0,[x29, #-0x48]
7101ee8de0  adrp x1,0x710433a000
7101ee8de4  add x1,x1,#0x9cc
7101ee8de8  fmov s0,0x3f800000
7101ee8dec  bl 0x7103778300
7101ee8df0  fmov s0,wzr
7101ee8df4  add x0,x19,#0x160
7101ee8df8  bl 0x710377b010
7101ee8dfc  ldrb w8,[x19, #0x1cd]
7101ee8e00  cbnz w8,0x7101ee8e20
7101ee8e04  mov w8,#0x1
7101ee8e08  strb w8,[x19, #0x1cd]
7101ee8e0c  ldur x0,[x29, #-0x48]
7101ee8e10  fmov s0,0x3f800000
7101ee8e14  adrp x1,0x71043f1000
7101ee8e18  add x1,x1,#0xe7
7101ee8e1c  bl 0x7103778300
7101ee8e20  ldr x0,[sp, #0x60]
7101ee8e24  adrp x22,0x710523d000
7101ee8e28  add x22,x22,#0x9a8
7101ee8e2c  stp x22,xzr,[sp, #0x58]
7101ee8e30  cbz x0,0x7101ee8e38
7101ee8e34  bl 0x710392eb40
7101ee8e38  ldr x0,[sp, #0x70]
7101ee8e3c  stp x22,xzr,[sp, #0x68]
7101ee8e40  cbz x0,0x7101ee8e48
7101ee8e44  bl 0x710392eb40
7101ee8e48  ldr x0,[sp, #0x30]
7101ee8e4c  stp x22,xzr,[sp, #0x28]
7101ee8e50  cbnz x0,0x7101ee90d4
7101ee8e54  b 0x7101ee90d8
7101ee8e58  strb wzr,[sp, #0x80]
7101ee8e5c  str xzr,[sp, #0x78]
7101ee8e60  add x8,sp,#0x78
7101ee8e64  add x1,x8,#0x8
7101ee8e68  add x0,sp,#0x58
7101ee8e6c  mov w2,#0x1
7101ee8e70  mov w3,#0x1
7101ee8e74  bl 0x710377a280
7101ee8e78  adrp x1,0x71042e7000
7101ee8e7c  add x1,x1,#0xa7e
7101ee8e80  add x8,sp,#0x18
7101ee8e84  add x0,sp,#0x68
7101ee8e88  bl 0x7103776910
7101ee8e8c  adrp x1,0x7104319000
7101ee8e90  add x1,x1,#0x6c3
7101ee8e94  add x8,sp,#0x8
7101ee8e98  add x0,sp,#0x68
7101ee8e9c  bl 0x7103776910
7101ee8ea0  ldr x0,[x23]
7101ee8ea4  mov x1,x20
7101ee8ea8  bl 0x71032b6c10
7101ee8eac  cmn w0,#0x1
7101ee8eb0  b.eq 0x7101ee8ecc
7101ee8eb4  mov w1,w0
7101ee8eb8  adrp x0,0x710426e000
7101ee8ebc  add x0,x0,#0x471
7101ee8ec0  add x8,sp,#0x78
7101ee8ec4  bl 0x71003a4ca0
7101ee8ec8  b 0x7101ee8ed4
7101ee8ecc  strb wzr,[sp, #0x80]
7101ee8ed0  str xzr,[sp, #0x78]
7101ee8ed4  add x8,sp,#0x78
7101ee8ed8  adrp x25,0x710593b000
7101ee8edc  add x22,x8,#0x8
7101ee8ee0  ldr x8,[x25, #0xc60]
7101ee8ee4  mov x1,x22
7101ee8ee8  ldr x0,[x8]
7101ee8eec  bl 0x71037a4570
7101ee8ef0  tbz w0,#0x0,0x7101ee8fc8
7101ee8ef4  ldr x8,[x25, #0xc60]
7101ee8ef8  ldr x0,[x8]
7101ee8efc  mov x1,x22
7101ee8f00  bl 0x71037a4450
7101ee8f04  cbz x0,0x7101ee8fc8
7101ee8f08  ldrh w11,[x0]
7101ee8f0c  cbz w11,0x7101ee8fc8
7101ee8f10  mov w8,wzr
7101ee8f14  mov w9,#0x1
7101ee8f18  orr w10,wzr,#0x3
7101ee8f1c  mov x12,x0
7101ee8f20  orr w13,w11,#0x1
7101ee8f24  and w11,w11,#0xffff
7101ee8f28  and w13,w13,#0xffff
7101ee8f2c  cmp w13,#0xf
7101ee8f30  b.ne 0x7101ee8f4c
7101ee8f34  cmp w11,#0xe
7101ee8f38  b.ne 0x7101ee8f5c
7101ee8f3c  ldrh w11,[x12, #0x6]
7101ee8f40  lsr w11,w11,#0x1
7101ee8f44  add w11,w11,#0x4
7101ee8f48  b 0x7101ee8f64
7101ee8f4c  cmp w11,#0xa
7101ee8f50  mov w11,#0x1
7101ee8f54  cinc w9,w9,eq
7101ee8f58  b 0x7101ee8f64
7101ee8f5c  cmp w11,#0xf
7101ee8f60  csel w11,w10,wzr,eq
7101ee8f64  add w8,w11,w8
7101ee8f68  add x12,x0,w8, UXTW  #0x1
7101ee8f6c  ldrh w11,[x12]
7101ee8f70  cbnz w11,0x7101ee8f20
7101ee8f74  cmp w9,#0x3
7101ee8f78  b.lt 0x7101ee8fc8
7101ee8f7c  ldr x8,[sp, #0x10]
7101ee8f80  ldr x0,[x8, #0x10]
7101ee8f84  cbz x0,0x7101ee8f9c
7101ee8f88  add x1,sp,#0x78
7101ee8f8c  mov w2,wzr
7101ee8f90  mov w3,wzr
7101ee8f94  str wzr,[sp, #0x78]
7101ee8f98  bl 0x71037a2270
7101ee8f9c  ldr x0,[x23]
7101ee8fa0  mov x1,x20
7101ee8fa4  bl 0x71032b6c10
7101ee8fa8  cmn w0,#0x1
7101ee8fac  b.eq 0x7101ee91ec
7101ee8fb0  mov w1,w0
7101ee8fb4  adrp x0,0x710426e000
7101ee8fb8  add x0,x0,#0x471
7101ee8fbc  add x8,sp,#0x78
7101ee8fc0  bl 0x71003a4ca0
7101ee8fc4  b 0x7101ee91f4
7101ee8fc8  ldr x0,[x23]
7101ee8fcc  mov x1,x20
7101ee8fd0  bl 0x71032b6c10
7101ee8fd4  cmn w0,#0x1
7101ee8fd8  b.eq 0x7101ee8ff4
7101ee8fdc  mov w1,w0
7101ee8fe0  adrp x0,0x710426e000
7101ee8fe4  add x0,x0,#0x471
7101ee8fe8  add x8,sp,#0x78
7101ee8fec  bl 0x71003a4ca0
7101ee8ff0  b 0x7101ee8ffc
7101ee8ff4  strb wzr,[sp, #0x80]
7101ee8ff8  str xzr,[sp, #0x78]
7101ee8ffc  add x8,sp,#0x78
7101ee9000  add x1,x8,#0x8
7101ee9004  add x0,sp,#0x8
7101ee9008  bl 0x710377a120
7101ee900c  ldr x8,[sp, #0x20]
7101ee9010  ldr x0,[x8, #0x10]
7101ee9014  cbz x0,0x7101ee902c
7101ee9018  add x1,sp,#0x78
7101ee901c  mov w2,wzr
7101ee9020  mov w3,wzr
7101ee9024  str wzr,[sp, #0x78]
7101ee9028  bl 0x71037a2270
7101ee902c  ldr x22,[sp, #0x70]
7101ee9030  adrp x1,0x710433a000
7101ee9034  add x1,x1,#0x9cc
7101ee9038  fmov s0,0x3f800000
7101ee903c  mov x0,x22
7101ee9040  bl 0x7103778300
7101ee9044  add x0,sp,#0x28
7101ee9048  add x1,sp,#0x68
7101ee904c  bl 0x7101adddd0
7101ee9050  fmov s0,wzr
7101ee9054  add x0,x19,#0x120
7101ee9058  bl 0x710377b010
7101ee905c  ldr x8,[x19, #0x148]
7101ee9060  ldr x0,[x8, #0x8]
7101ee9064  cbz x0,0x7101ee9078
7101ee9068  ldr x8,[x0]
7101ee906c  ldr x8,[x8, #0x140]
7101ee9070  mov w1,wzr
7101ee9074  blr x8
7101ee9078  add x0,x19,#0x150
7101ee907c  bl 0x710377b140
7101ee9080  ldr x0,[sp, #0x10]
7101ee9084  stp x24,xzr,[sp, #0x8]
7101ee9088  cbz x0,0x7101ee9090
7101ee908c  bl 0x710392eb40
7101ee9090  ldr x0,[sp, #0x20]
7101ee9094  stp x24,xzr,[sp, #0x18]
7101ee9098  cbz x0,0x7101ee90a0
7101ee909c  bl 0x710392eb40
7101ee90a0  ldr x0,[sp, #0x60]
7101ee90a4  stp x24,xzr,[sp, #0x58]
7101ee90a8  cbz x0,0x7101ee90b0
7101ee90ac  bl 0x710392eb40
7101ee90b0  adrp x8,0x710523d000
7101ee90b4  add x8,x8,#0x988
7101ee90b8  stp x8,xzr,[sp, #0x68]
7101ee90bc  cbz x22,0x7101ee90d8
7101ee90c0  ldr x0,[x22, #0x18]
7101ee90c4  stp x24,xzr,[x22, #0x10]
7101ee90c8  cbz x0,0x7101ee90d0
7101ee90cc  bl 0x710392eb40
7101ee90d0  mov x0,x22
7101ee90d4  bl 0x710392eb40
7101ee90d8  ldr x0,[x23]
7101ee90dc  mov x1,x20
7101ee90e0  add x22,x19,#0x1a8
7101ee90e4  bl 0x71032b6c10
7101ee90e8  cmn w0,#0x1
7101ee90ec  b.eq 0x7101ee9108
7101ee90f0  mov w1,w0
7101ee90f4  adrp x0,0x71042b2000
7101ee90f8  add x0,x0,#0x794
7101ee90fc  add x8,sp,#0x78
7101ee9100  bl 0x71003a4ca0
7101ee9104  b 0x7101ee9110
7101ee9108  strb wzr,[sp, #0x80]
7101ee910c  str xzr,[sp, #0x78]
7101ee9110  add x8,sp,#0x78
7101ee9114  add x1,x8,#0x8
7101ee9118  mov w2,#0x1
7101ee911c  mov w3,#0x1
7101ee9120  mov x0,x21
7101ee9124  bl 0x710377a280
7101ee9128  ldr x0,[x23]
7101ee912c  mov x1,x20
7101ee9130  bl 0x71032b6c10
7101ee9134  cmn w0,#0x1
7101ee9138  b.eq 0x7101ee9154
7101ee913c  mov w1,w0
7101ee9140  adrp x0,0x710426e000
7101ee9144  add x0,x0,#0x471
7101ee9148  add x8,sp,#0x78
7101ee914c  bl 0x71003a4ca0
7101ee9150  b 0x7101ee915c
7101ee9154  strb wzr,[sp, #0x80]
7101ee9158  str xzr,[sp, #0x78]
7101ee915c  add x8,sp,#0x78
7101ee9160  add x1,x8,#0x8
7101ee9164  mov x0,x22
7101ee9168  bl 0x710377a120
7101ee916c  mov w8,#0x1
7101ee9170  strb w8,[x19, #0x1cf]
7101ee9174  ldur x19,[x29, #-0x48]
7101ee9178  adrp x8,0x710523d000
7101ee917c  add x8,x8,#0x988
7101ee9180  stp x8,xzr,[x29, #-0x50]
7101ee9184  cbz x19,0x7101ee91a8
7101ee9188  ldr x0,[x19, #0x18]
7101ee918c  adrp x8,0x710523d000
7101ee9190  add x8,x8,#0x9a8
7101ee9194  stp x8,xzr,[x19, #0x10]
7101ee9198  cbz x0,0x7101ee91a0
7101ee919c  bl 0x710392eb40
7101ee91a0  mov x0,x19
7101ee91a4  bl 0x710392eb40
7101ee91a8  ldp x29,x30,[sp, #0x110]
7101ee91ac  ldp x20,x19,[sp, #0x100]
7101ee91b0  ldp x22,x21,[sp, #0xf0]
7101ee91b4  ldp x24,x23,[sp, #0xe0]
7101ee91b8  ldp x28,x25,[sp, #0xd0]
7101ee91bc  add sp,sp,#0x120
7101ee91c0  ret
7101ee91c4  strb wzr,[sp, #0x80]
7101ee91c8  str xzr,[sp, #0x78]
7101ee91cc  add x8,sp,#0x78
7101ee91d0  add x1,x8,#0x8
7101ee91d4  add x0,sp,#0x68
7101ee91d8  bl 0x710377a120
7101ee91dc  ldur x0,[x29, #-0x48]
7101ee91e0  adrp x1,0x710425f000
7101ee91e4  add x1,x1,#0xce6
7101ee91e8  b 0x7101ee8de8
7101ee91ec  strb wzr,[sp, #0x80]
7101ee91f0  str xzr,[sp, #0x78]
7101ee91f4  add x8,sp,#0x78
7101ee91f8  add x1,x8,#0x8
7101ee91fc  add x0,sp,#0x18
7101ee9200  bl 0x710377a120
7101ee9204  ldr x22,[sp, #0x70]
7101ee9208  adrp x1,0x710425f000
7101ee920c  add x1,x1,#0xce6
7101ee9210  b 0x7101ee9038
