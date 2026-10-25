// addr:      71024d18d0
// offset:    0x24d18d0
// name:      FUN_71024d18d0
// mangled:   
// size:      1728

71024d18d0  sub sp,sp,#0x130
71024d18d4  stp x28,x27,[sp, #0xd0]
71024d18d8  stp x26,x25,[sp, #0xe0]
71024d18dc  stp x24,x23,[sp, #0xf0]
71024d18e0  stp x22,x21,[sp, #0x100]
71024d18e4  stp x20,x19,[sp, #0x110]
71024d18e8  stp x29,x30,[sp, #0x120]
71024d18ec  add x29,sp,#0x120
71024d18f0  adrp x8,0x710532a000
71024d18f4  ldr x8,[x8, #0x868]
71024d18f8  ldr x8,[x8]
71024d18fc  mov w24,#0xffffffff
71024d1900  add x25,sp,#0x28
71024d1904  orr x9,xzr,#0x3f8000003f800000
71024d1908  stp x24,xzr,[sp, #0x28]
71024d190c  mov x20,x1
71024d1910  stp xzr,xzr,[sp, #0x88]
71024d1914  mov w23,w4
71024d1918  stp xzr,xzr,[sp, #0x78]
71024d191c  mov w21,w3
71024d1920  stp x9,xzr,[sp, #0x98]
71024d1924  mov w22,w2
71024d1928  mov x19,x0
71024d192c  stp xzr,xzr,[sp, #0x68]
71024d1930  stp xzr,xzr,[sp, #0x58]
71024d1934  stp xzr,xzr,[sp, #0x48]
71024d1938  stp xzr,xzr,[sp, #0x38]
71024d193c  stur xzr,[x25, #0x8d]
71024d1940  stp xzr,xzr,[sp, #0xa8]
71024d1944  ldr x1,[x8, #0x2b8]
71024d1948  ldr x8,[x8, #0x2c0]
71024d194c  cmp x1,x8
71024d1950  b.eq 0x71024d1988
71024d1954  ldr w9,[x1]
71024d1958  cmp w9,w22
71024d195c  b.ne 0x71024d196c
71024d1960  ldr w9,[x1, #0x4]
71024d1964  cmp w9,w21
71024d1968  b.eq 0x71024d197c
71024d196c  add x1,x1,#0x98
71024d1970  cmp x8,x1
71024d1974  b.ne 0x71024d1954
71024d1978  b 0x71024d1988
71024d197c  mov w2,#0x95
71024d1980  add x0,sp,#0x28
71024d1984  bl 0x71039c00e0
71024d1988  add x8,x25,w23, UXTW  #0x3
71024d198c  ldr x8,[x8, #0x8]
71024d1990  mov w9,#0xd308
71024d1994  movk w9,#0x3, LSL #16
71024d1998  mov x26,xzr
71024d199c  mov w10,w23
71024d19a0  add x27,x20,x9
71024d19a4  ldrb w9,[x27, #0x18]
71024d19a8  cbz w9,0x71024d19c4
71024d19ac  ldrb w9,[x27, #0x19]
71024d19b0  cbnz w9,0x71024d19c4
71024d19b4  ldr x9,[x27]
71024d19b8  eor x9,x9,x8
71024d19bc  tst x9,#0xffffffffff
71024d19c0  b.eq 0x71024d1a24
71024d19c4  add x26,x26,#0x1
71024d19c8  add x27,x27,#0x20
71024d19cc  cmp x26,#0x400
71024d19d0  b.cc 0x71024d19a4
71024d19d4  mov w8,#0xf3d7
71024d19d8  movk w8,#0x5, LSL #16
71024d19dc  ldrb w8,[x20, x8, LSL ]
71024d19e0  cbz w8,0x71024d19f0
71024d19e4  str w24,[x19]
71024d19e8  stp xzr,xzr,[x19, #0x8]
71024d19ec  b 0x71024d1f60
71024d19f0  mov w8,#0xd340
71024d19f4  movk w8,#0x3, LSL #16
71024d19f8  mov x26,xzr
71024d19fc  add x28,x20,x8
71024d1a00  ldurb w8,[x28, #-0x20]
71024d1a04  cbz w8,0x71024d1a34
71024d1a08  ldrb w8,[x28]
71024d1a0c  cbz w8,0x71024d1a3c
71024d1a10  add x26,x26,#0x2
71024d1a14  add x28,x28,#0x40
71024d1a18  cmp x26,#0x400
71024d1a1c  b.cc 0x71024d1a00
71024d1a20  b 0x71024d19e4
71024d1a24  orr w8,wzr,#0xffff
71024d1a28  cmp w26,w8
71024d1a2c  b.eq 0x71024d19d4
71024d1a30  b 0x71024d1f0c
71024d1a34  sub x28,x28,#0x20
71024d1a38  b 0x71024d1a40
71024d1a3c  add x26,x26,#0x1
71024d1a40  mov w8,#0x5308
71024d1a44  movk w8,#0x4, LSL #16
71024d1a48  add x27,x20,x8
71024d1a4c  mov w8,#0x3840
71024d1a50  umaddl x8,w22,w8,x20
71024d1a54  mov w9,#0x48
71024d1a58  umaddl x8,w21,w9,x8
71024d1a5c  orr w9,wzr,#0x18
71024d1a60  madd x8,x10,x9,x8
71024d1a64  mov w9,#0x8090
71024d1a68  add x9,x8,x9
71024d1a6c  ldr x8,[x9]
71024d1a70  cbz x8,0x71024d1f08
71024d1a74  ldr w23,[x8, #0x8]
71024d1a78  orr w8,wzr,#0xffffff
71024d1a7c  cmp w23,w8
71024d1a80  b.eq 0x71024d1f08
71024d1a84  adrp x8,0x7105332000
71024d1a88  ldr x24,[x8, #0xf20]
71024d1a8c  ldr w8,[x24, #0x48]
71024d1a90  cmp w8,w23
71024d1a94  b.ls 0x71024d1f08
71024d1a98  ldr x0,[x24]
71024d1a9c  stp x10,x0,[sp, #0x8]
71024d1aa0  str x9,[sp]
71024d1aa4  bl 0x71039c1a40
71024d1aa8  ldr x8,[x24, #0x40]
71024d1aac  mov w9,#0x48
71024d1ab0  madd x24,x23,x9,x8
71024d1ab4  ldr x0,[sp, #0x10]
71024d1ab8  ldrb w23,[x24, #0x8]
71024d1abc  bl 0x71039c1a50
71024d1ac0  tbz w23,#0x0,0x71024d1f08
71024d1ac4  cbz x24,0x71024d1f08
71024d1ac8  ldr w8,[x24]
71024d1acc  orr w9,wzr,#0xffffff
71024d1ad0  cmp w8,w9
71024d1ad4  b.eq 0x71024d1f08
71024d1ad8  mov x0,x24
71024d1adc  bl 0x7103543080
71024d1ae0  ldp x12,x11,[sp]
71024d1ae4  cmp w0,#0x3
71024d1ae8  b.ne 0x71024d1f08
71024d1aec  adrp x8,0x710532a000
71024d1af0  ldr x8,[x8, #0x868]
71024d1af4  ldr x8,[x8]
71024d1af8  mov w9,#0xffffffff
71024d1afc  stp x9,xzr,[sp, #0x28]
71024d1b00  orr x9,xzr,#0x3f8000003f800000
71024d1b04  stp xzr,xzr,[sp, #0x88]
71024d1b08  stp xzr,xzr,[sp, #0x78]
71024d1b0c  stp xzr,xzr,[sp, #0x68]
71024d1b10  stp xzr,xzr,[sp, #0x58]
71024d1b14  stp x9,xzr,[sp, #0x98]
71024d1b18  stp xzr,xzr,[sp, #0x48]
71024d1b1c  stp xzr,xzr,[sp, #0x38]
71024d1b20  stur xzr,[x25, #0x8d]
71024d1b24  stp xzr,xzr,[sp, #0xa8]
71024d1b28  ldr x23,[x8, #0x2b8]
71024d1b2c  ldr x13,[x8, #0x2c0]
71024d1b30  cmp x23,x13
71024d1b34  b.eq 0x71024d1b7c
71024d1b38  mov x1,x23
71024d1b3c  ldr w8,[x1]
71024d1b40  cmp w8,w22
71024d1b44  b.ne 0x71024d1b54
71024d1b48  ldr w8,[x1, #0x4]
71024d1b4c  cmp w8,w21
71024d1b50  b.eq 0x71024d1b64
71024d1b54  add x1,x1,#0x98
71024d1b58  cmp x13,x1
71024d1b5c  b.ne 0x71024d1b3c
71024d1b60  b 0x71024d1b7c
71024d1b64  mov w2,#0x95
71024d1b68  add x0,sp,#0x28
71024d1b6c  mov x24,x13
71024d1b70  bl 0x71039c00e0
71024d1b74  ldp x12,x11,[sp]
71024d1b78  mov x13,x24
71024d1b7c  add x8,sp,#0x28
71024d1b80  add x8,x8,x11, LSL #0x3
71024d1b84  ldr x8,[x8, #0x8]
71024d1b88  mov w9,#0xd321
71024d1b8c  movk w9,#0x3, LSL #16
71024d1b90  mov x24,xzr
71024d1b94  add x9,x20,x9
71024d1b98  ldurb w10,[x9, #-0x1]
71024d1b9c  cbz w10,0x71024d1bb8
71024d1ba0  ldrb w10,[x9]
71024d1ba4  cbnz w10,0x71024d1bb8
71024d1ba8  ldur x10,[x9, #-0x19]
71024d1bac  eor x10,x10,x8
71024d1bb0  tst x10,#0xffffffffff
71024d1bb4  b.eq 0x71024d1bcc
71024d1bb8  add x24,x24,#0x1
71024d1bbc  add x9,x9,#0x20
71024d1bc0  cmp x24,#0x400
71024d1bc4  b.cc 0x71024d1b98
71024d1bc8  orr w24,wzr,#0xffff
71024d1bcc  mov w8,#0xffffffff
71024d1bd0  stp x8,xzr,[sp, #0x28]
71024d1bd4  orr x8,xzr,#0x3f8000003f800000
71024d1bd8  cmp x23,x13
71024d1bdc  stp xzr,xzr,[sp, #0x88]
71024d1be0  stp xzr,xzr,[sp, #0x78]
71024d1be4  stp x8,xzr,[sp, #0x98]
71024d1be8  stp xzr,xzr,[sp, #0x68]
71024d1bec  stp xzr,xzr,[sp, #0x58]
71024d1bf0  stp xzr,xzr,[sp, #0x48]
71024d1bf4  stp xzr,xzr,[sp, #0x38]
71024d1bf8  stur xzr,[x25, #0x8d]
71024d1bfc  stp xzr,xzr,[sp, #0xa8]
71024d1c00  b.eq 0x71024d1c40
71024d1c04  ldr w8,[x23]
71024d1c08  cmp w8,w22
71024d1c0c  b.ne 0x71024d1c1c
71024d1c10  ldr w8,[x23, #0x4]
71024d1c14  cmp w8,w21
71024d1c18  b.eq 0x71024d1c2c
71024d1c1c  add x23,x23,#0x98
71024d1c20  cmp x13,x23
71024d1c24  b.ne 0x71024d1c04
71024d1c28  b 0x71024d1c40
71024d1c2c  mov w2,#0x95
71024d1c30  add x0,sp,#0x28
71024d1c34  mov x1,x23
71024d1c38  bl 0x71039c00e0
71024d1c3c  ldp x12,x11,[sp]
71024d1c40  add x8,sp,#0x28
71024d1c44  add x8,x8,x11, LSL #0x3
71024d1c48  ldr x8,[x8, #0x8]
71024d1c4c  add x21,x20,x26, LSL #0x5
71024d1c50  mov w9,#0xd308
71024d1c54  movk w9,#0x3, LSL #16
71024d1c58  str x8,[x21, x9, LSL #0x0]
71024d1c5c  orr w8,wzr,#0xffff
71024d1c60  cmp w24,w8
71024d1c64  b.ne 0x71024d1ce0
71024d1c68  ldr x8,[x12]
71024d1c6c  add x1,x8,#0x8
71024d1c70  adrp x2,0x7104328000
71024d1c74  add x2,x2,#0x86f
71024d1c78  add x0,sp,#0x28
71024d1c7c  bl 0x710353e1d0
71024d1c80  ldr w20,[sp, #0x28]
71024d1c84  orr w22,wzr,#0xffffff
71024d1c88  cmp w20,w22
71024d1c8c  adrp x23,0x7105332000
71024d1c90  b.eq 0x71024d1ca4
71024d1c94  ldr x0,[x23, #0xf20]
71024d1c98  mov w1,w20
71024d1c9c  bl 0x7103540b10
71024d1ca0  str w22,[sp, #0x28]
71024d1ca4  ldr x8,[x23, #0xf20]
71024d1ca8  ldr x8,[x8, #0x78]
71024d1cac  cmp w20,w22
71024d1cb0  mov w24,#0xffffffff
71024d1cb4  b.eq 0x71024d1de0
71024d1cb8  ldr x9,[x8]
71024d1cbc  ldr x10,[x9, #0x40]
71024d1cc0  ldr w10,[x10, #0x4]
71024d1cc4  cmp w10,w20
71024d1cc8  b.ls 0x71024d1de0
71024d1ccc  ldr x9,[x9, #0x60]
71024d1cd0  lsl x10,x20,#0x5
71024d1cd4  ldr x9,[x9, x10, LSL #0x0]
71024d1cd8  and x9,x9,#0xffffffffff
71024d1cdc  b 0x71024d1de4
71024d1ce0  mov w8,w24
71024d1ce4  add x8,x20,x8, LSL #0x5
71024d1ce8  mov w9,#0xd308
71024d1cec  movk w9,#0x3, LSL #16
71024d1cf0  add x8,x8,x9
71024d1cf4  orr w9,wzr,#0xfffe
71024d1cf8  cmp w24,w9
71024d1cfc  csel x8,x27,x8,eq
71024d1d00  ldp x9,x8,[x8, #0x8]
71024d1d04  stp x9,x8,[sp, #0x18]
71024d1d08  cbz x8,0x71024d1d20
71024d1d0c  add x8,x8,#0x8
71024d1d10  ldxr x9,[x8]
71024d1d14  add x9,x9,#0x1
71024d1d18  stxr w10,x9,[x8]
71024d1d1c  cbnz w10,0x71024d1d10
71024d1d20  add x0,sp,#0x28
71024d1d24  add x1,sp,#0x18
71024d1d28  bl 0x71035c2e50
71024d1d2c  ldp x8,x9,[sp, #0x28]
71024d1d30  mov w10,#0xd310
71024d1d34  movk w10,#0x3, LSL #16
71024d1d38  stp xzr,xzr,[sp, #0x28]
71024d1d3c  str x8,[x21, x10, LSL #0x0]
71024d1d40  mov w8,#0xd318
71024d1d44  movk w8,#0x3, LSL #16
71024d1d48  ldr x20,[x21, x8, LSL #0x0]
71024d1d4c  mov w24,#0xffffffff
71024d1d50  str x9,[x21, x8, LSL #0x0]
71024d1d54  cbz x20,0x71024d1d88
71024d1d58  add x8,x20,#0x8
71024d1d5c  ldaxr x9,[x8]
71024d1d60  sub x10,x9,#0x1
71024d1d64  stlxr w11,x10,[x8]
71024d1d68  cbnz w11,0x71024d1d5c
71024d1d6c  cbnz x9,0x71024d1d88
71024d1d70  ldr x8,[x20]
71024d1d74  ldr x8,[x8, #0x10]
71024d1d78  mov x0,x20
71024d1d7c  blr x8
71024d1d80  mov x0,x20
71024d1d84  bl 0x71039c2670
71024d1d88  ldr x20,[sp, #0x30]
71024d1d8c  cbz x20,0x71024d1dc0
71024d1d90  add x8,x20,#0x8
71024d1d94  ldaxr x9,[x8]
71024d1d98  sub x10,x9,#0x1
71024d1d9c  stlxr w11,x10,[x8]
71024d1da0  cbnz w11,0x71024d1d94
71024d1da4  cbnz x9,0x71024d1dc0
71024d1da8  ldr x8,[x20]
71024d1dac  ldr x8,[x8, #0x10]
71024d1db0  mov x0,x20
71024d1db4  blr x8
71024d1db8  mov x0,x20
71024d1dbc  bl 0x71039c2670
71024d1dc0  ldr x20,[sp, #0x20]
71024d1dc4  cbz x20,0x71024d1edc
71024d1dc8  add x8,x20,#0x8
71024d1dcc  ldaxr x9,[x8]
71024d1dd0  sub x10,x9,#0x1
71024d1dd4  stlxr w11,x10,[x8]
71024d1dd8  cbnz w11,0x71024d1dcc
71024d1ddc  b 0x71024d1ec0
71024d1de0  mov x9,xzr
71024d1de4  ldr x20,[x8, #0x8]
71024d1de8  str x9,[sp, #0x28]
71024d1dec  ldr x8,[x20, #0x8]
71024d1df0  ldr x1,[x20, #0x20]
71024d1df4  ldr w2,[x8, #0x8]
71024d1df8  adrp x4,0x7103542000
71024d1dfc  add x4,x4,#0x240
71024d1e00  add x0,sp,#0x28
71024d1e04  mov w3,#0x8
71024d1e08  bl 0x71039c2630
71024d1e0c  orr w8,wzr,#0xffffff
71024d1e10  cbz x0,0x71024d1e38
71024d1e14  ldr x9,[x0]
71024d1e18  lsr x9,x9,#0x28
71024d1e1c  cmp w9,w8
71024d1e20  b.eq 0x71024d1e38
71024d1e24  ldr x8,[x20, #0x8]
71024d1e28  ldr w8,[x8, #0x4]
71024d1e2c  cmp w8,w9
71024d1e30  orr w8,wzr,#0xffffff
71024d1e34  csel w8,w9,w8,hi
71024d1e38  add x0,sp,#0x28
71024d1e3c  sub x1,x29,#0x60
71024d1e40  mov w2,#0x4
71024d1e44  stur w8,[x29, #-0x60]
71024d1e48  bl 0x71035c2890
71024d1e4c  ldp x8,x9,[sp, #0x28]
71024d1e50  mov w10,#0xd310
71024d1e54  movk w10,#0x3, LSL #16
71024d1e58  stp xzr,xzr,[sp, #0x28]
71024d1e5c  str x8,[x21, x10, LSL #0x0]
71024d1e60  mov w8,#0xd318
71024d1e64  movk w8,#0x3, LSL #16
71024d1e68  ldr x20,[x21, x8, LSL #0x0]
71024d1e6c  str x9,[x21, x8, LSL #0x0]
71024d1e70  cbz x20,0x71024d1ea4
71024d1e74  add x8,x20,#0x8
71024d1e78  ldaxr x9,[x8]
71024d1e7c  sub x10,x9,#0x1
71024d1e80  stlxr w11,x10,[x8]
71024d1e84  cbnz w11,0x71024d1e78
71024d1e88  cbnz x9,0x71024d1ea4
71024d1e8c  ldr x8,[x20]
71024d1e90  ldr x8,[x8, #0x10]
71024d1e94  mov x0,x20
71024d1e98  blr x8
71024d1e9c  mov x0,x20
71024d1ea0  bl 0x71039c2670
71024d1ea4  ldr x20,[sp, #0x30]
71024d1ea8  cbz x20,0x71024d1edc
71024d1eac  add x8,x20,#0x8
71024d1eb0  ldaxr x9,[x8]
71024d1eb4  sub x10,x9,#0x1
71024d1eb8  stlxr w11,x10,[x8]
71024d1ebc  cbnz w11,0x71024d1eb0
71024d1ec0  cbnz x9,0x71024d1edc
71024d1ec4  ldr x8,[x20]
71024d1ec8  ldr x8,[x8, #0x10]
71024d1ecc  mov x0,x20
71024d1ed0  blr x8
71024d1ed4  mov x0,x20
71024d1ed8  bl 0x71039c2670
71024d1edc  mov w8,#0x1
71024d1ee0  strb w8,[x28]
71024d1ee4  mov w8,#0xd321
71024d1ee8  movk w8,#0x3, LSL #16
71024d1eec  strb wzr,[x21, x8, LSL ]
71024d1ef0  orr w8,wzr,#0xffff
71024d1ef4  cmp w26,w8
71024d1ef8  b.eq 0x71024d19e4
71024d1efc  orr w8,wzr,#0xfffe
71024d1f00  cmp w26,w8
71024d1f04  b.ne 0x71024d1f80
71024d1f08  orr w26,wzr,#0xfffe
71024d1f0c  mov w8,#0x1
71024d1f10  mov x0,x19
71024d1f14  strb w8,[x27, #0x19]
71024d1f18  str w26,[x19]
71024d1f1c  str xzr,[x19, #0x10]
71024d1f20  str xzr,[x0, #0x8]!
71024d1f24  ldp x20,x8,[x27, #0x8]
71024d1f28  cbz x8,0x71024d1f40
71024d1f2c  add x9,x8,#0x8
71024d1f30  ldxr x10,[x9]
71024d1f34  add x10,x10,#0x1
71024d1f38  stxr w11,x10,[x9]
71024d1f3c  cbnz w11,0x71024d1f30
71024d1f40  stp x20,x8,[x19, #0x8]
71024d1f44  cbz x20,0x71024d1f60
71024d1f48  bl 0x71035597d0
71024d1f4c  ldr x8,[x20]
71024d1f50  ldr x8,[x8, #0xa8]
71024d1f54  mov w1,#0x1
71024d1f58  mov x0,x20
71024d1f5c  blr x8
71024d1f60  ldp x29,x30,[sp, #0x120]
71024d1f64  ldp x20,x19,[sp, #0x110]
71024d1f68  ldp x22,x21,[sp, #0x100]
71024d1f6c  ldp x24,x23,[sp, #0xf0]
71024d1f70  ldp x26,x25,[sp, #0xe0]
71024d1f74  ldp x28,x27,[sp, #0xd0]
71024d1f78  add sp,sp,#0x130
71024d1f7c  ret
71024d1f80  mov w8,#0xd308
71024d1f84  movk w8,#0x3, LSL #16
71024d1f88  add x27,x21,x8
71024d1f8c  b 0x71024d1f0c
