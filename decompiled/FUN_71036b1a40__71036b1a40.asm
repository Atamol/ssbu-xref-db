// addr:      71036b1a40
// offset:    0x36b1a40
// name:      FUN_71036b1a40
// mangled:   
// size:      1572

71036b1a40  sub sp,sp,#0x90
71036b1a44  stp x28,x27,[sp, #0x30]
71036b1a48  stp x26,x25,[sp, #0x40]
71036b1a4c  stp x24,x23,[sp, #0x50]
71036b1a50  stp x22,x21,[sp, #0x60]
71036b1a54  stp x20,x19,[sp, #0x70]
71036b1a58  stp x29,x30,[sp, #0x80]
71036b1a5c  add x29,sp,#0x80
71036b1a60  ldr x8,[x0, #0x8]
71036b1a64  ldr x8,[x8]
71036b1a68  mov x19,x0
71036b1a6c  mov w1,#0xa8
71036b1a70  mov w0,#0x10
71036b1a74  str x8,[sp, #0x8]
71036b1a78  bl 0x710392e290
71036b1a7c  mov x21,x0
71036b1a80  cbnz x0,0x71036b1acc
71036b1a84  adrp x8,0x7105332000
71036b1a88  ldr x0,[x8, #0xf00]
71036b1a8c  cbz x0,0x71036b1ac8
71036b1a90  mov w8,#0xa8
71036b1a94  str wzr,[sp, #0x2c]
71036b1a98  add x1,sp,#0x2c
71036b1a9c  str x8,[sp, #0x10]
71036b1aa0  ldr x8,[x0]
71036b1aa4  ldr x8,[x8, #0x30]
71036b1aa8  add x2,sp,#0x10
71036b1aac  blr x8
71036b1ab0  tbz w0,#0x0,0x71036b1ac8
71036b1ab4  mov w1,#0xa8
71036b1ab8  mov w0,#0x10
71036b1abc  bl 0x710392e290
71036b1ac0  mov x21,x0
71036b1ac4  cbnz x0,0x71036b1acc
71036b1ac8  mov x21,xzr
71036b1acc  adrp x8,0x7105239000
71036b1ad0  add x8,x8,#0xed0
71036b1ad4  mov x27,x21
71036b1ad8  stp x8,x19,[x21]
71036b1adc  adrp x9,0x7105239000
71036b1ae0  add x9,x9,#0x610
71036b1ae4  adrp x8,0x7105239000
71036b1ae8  add x8,x8,#0xf88
71036b1aec  mov x28,x21
71036b1af0  mov x20,x21
71036b1af4  mov x24,x21
71036b1af8  mov x22,x21
71036b1afc  mov x25,#0xe995
71036b1b00  movk x25,#0x5bd1, LSL #16
71036b1b04  movk x25,#0xa793, LSL #32
71036b1b08  movk x25,#0xc6a4, LSL #48
71036b1b0c  mov w26,#0x6b64
71036b1b10  movk w26,#0xe654, LSL #16
71036b1b14  str xzr,[x27, #0x18]!
71036b1b18  stp xzr,xzr,[x21, #0x20]
71036b1b1c  str x9,[x21, #0x10]
71036b1b20  str x8,[x28, #0x30]!
71036b1b24  str xzr,[x20, #0x38]!
71036b1b28  stp xzr,xzr,[x21, #0x40]
71036b1b2c  str x9,[x24, #0x50]!
71036b1b30  stp xzr,xzr,[x21, #0x60]
71036b1b34  str xzr,[x21, #0x58]
71036b1b38  stp xzr,xzr,[x21, #0x88]
71036b1b3c  str xzr,[x21, #0x80]
71036b1b40  str x9,[x22, #0x78]!
71036b1b44  str xzr,[x22, #0x28]
71036b1b48  ldr x8,[x19, #0x8]
71036b1b4c  ldr x23,[x8]
71036b1b50  ldr x8,[x23]
71036b1b54  ldr x8,[x8, #0x38]
71036b1b58  mov x0,x23
71036b1b5c  blr x8
71036b1b60  adrp x9,0x710439b000
71036b1b64  add x9,x9,#0xbc8
71036b1b68  mov w10,#0x14
71036b1b6c  ldr x9,[x9]
71036b1b70  mov w11,#0x6e6f
71036b1b74  mov x8,xzr
71036b1b78  stp xzr,xzr,[sp, #0x10]
71036b1b7c  strb w10,[sp, #0x10]
71036b1b80  sturh w11,[sp, #0x19]
71036b1b84  add x0,x0,#0x80
71036b1b88  add x10,sp,#0x10
71036b1b8c  stur x9,[sp, #0x11]
71036b1b90  mov w11,#0x74
71036b1b94  mov w9,#0x2
71036b1b98  str xzr,[sp, #0x20]
71036b1b9c  strb wzr,[sp, #0x1b]
71036b1ba0  b 0x71036b1bac
71036b1ba4  ldrb w11,[x10, x9, LSL ]
71036b1ba8  add x9,x9,#0x1
71036b1bac  and x11,x11,#0xff
71036b1bb0  mul x11,x11,x25
71036b1bb4  eor x11,x11,x11, LSR #0x2f
71036b1bb8  mul x11,x11,x25
71036b1bbc  eor x8,x11,x8
71036b1bc0  mul x11,x8,x25
71036b1bc4  add x8,x11,x26
71036b1bc8  cmp x9,#0xb
71036b1bcc  b.ne 0x71036b1ba4
71036b1bd0  mov x9,#-0x6b65
71036b1bd4  movk x9,#0x19ab, LSL #16
71036b1bd8  sub x9,x9,x11
71036b1bdc  add x8,x9,x8, LSL #0x15
71036b1be0  mov w9,#0x109
71036b1be4  eor x8,x8,x8, LSR #0x18
71036b1be8  mul x8,x8,x9
71036b1bec  mov w9,#0x15
71036b1bf0  eor x8,x8,x8, LSR #0xe
71036b1bf4  mul x8,x8,x9
71036b1bf8  eor x8,x8,x8, LSR #0x1c
71036b1bfc  add x1,x8,x8, LSL #0x1f
71036b1c00  add x2,sp,#0x10
71036b1c04  bl 0x7103682860
71036b1c08  cbz x0,0x71036b1c94
71036b1c0c  ldr w8,[x0, #0x48]
71036b1c10  eor w8,w8,w8, ASR #0x1f
71036b1c14  cmp w8,#0xf
71036b1c18  b.ne 0x71036b2010
71036b1c1c  ldr x8,[x0, #0x50]
71036b1c20  ldr x9,[x0, #0x38]
71036b1c24  cbz x9,0x71036b1c74
71036b1c28  ldr x9,[x9]
71036b1c2c  ldr x10,[x0, #0x40]
71036b1c30  cmp x9,x10
71036b1c34  b.ne 0x71036b1c74
71036b1c38  ldr x9,[x0, #0x30]
71036b1c3c  str x9,[x27]
71036b1c40  cbz x9,0x71036b1c78
71036b1c44  ldr x9,[x9, #0x8]
71036b1c48  str x9,[x21, #0x20]
71036b1c4c  ldr x9,[x9]
71036b1c50  str x9,[x21, #0x28]
71036b1c54  cbz x8,0x71036b1c88
71036b1c58  ldr x9,[x8, #0x8]
71036b1c5c  cbz x9,0x71036b1c88
71036b1c60  str x8,[x21, #0x38]
71036b1c64  ldr x8,[x8, #0x8]
71036b1c68  str x8,[x21, #0x40]
71036b1c6c  ldr x8,[x8]
71036b1c70  b 0x71036b1c90
71036b1c74  str xzr,[x27]
71036b1c78  mov x9,xzr
71036b1c7c  str xzr,[x21, #0x20]
71036b1c80  str x9,[x21, #0x28]
71036b1c84  cbnz x8,0x71036b1c58
71036b1c88  mov x8,xzr
71036b1c8c  stp xzr,xzr,[x20]
71036b1c90  str x8,[x28, #0x18]
71036b1c94  ldr x8,[x23]
71036b1c98  ldr x8,[x8, #0x38]
71036b1c9c  mov x0,x23
71036b1ca0  blr x8
71036b1ca4  mov w8,#0x6372
71036b1ca8  orr w20,wzr,#0xc
71036b1cac  add x1,sp,#0x10
71036b1cb0  sturh w8,[sp, #0x15]
71036b1cb4  mov w8,#0x7274
71036b1cb8  movk w8,#0x735f, LSL #16
71036b1cbc  mov x2,x24
71036b1cc0  stp xzr,xzr,[sp, #0x18]
71036b1cc4  strb w20,[sp, #0x10]
71036b1cc8  stur w8,[sp, #0x11]
71036b1ccc  strb wzr,[sp, #0x17]
71036b1cd0  bl 0x71036b2070
71036b1cd4  ldrb w8,[sp, #0x10]
71036b1cd8  tbz w8,#0x0,0x71036b1cfc
71036b1cdc  adrp x8,0x71052a8000
71036b1ce0  ldr x24,[sp, #0x20]
71036b1ce4  ldr x8,[x8, #0xa70]
71036b1ce8  cbz x8,0x71036b1cf4
71036b1cec  mov x0,x24
71036b1cf0  bl 0x71039c19b0
71036b1cf4  mov x0,x24
71036b1cf8  bl 0x710392eb40
71036b1cfc  ldr x8,[x23]
71036b1d00  ldr x8,[x8, #0x38]
71036b1d04  mov x0,x23
71036b1d08  blr x8
71036b1d0c  mov w8,#0x7473
71036b1d10  sturh w8,[sp, #0x15]
71036b1d14  mov w8,#0x7274
71036b1d18  movk w8,#0x645f, LSL #16
71036b1d1c  add x1,sp,#0x10
71036b1d20  mov x2,x22
71036b1d24  stp xzr,xzr,[sp, #0x18]
71036b1d28  strb w20,[sp, #0x10]
71036b1d2c  stur w8,[sp, #0x11]
71036b1d30  strb wzr,[sp, #0x17]
71036b1d34  bl 0x71036b2070
71036b1d38  ldrb w8,[sp, #0x10]
71036b1d3c  tbz w8,#0x0,0x71036b1d60
71036b1d40  adrp x8,0x71052a8000
71036b1d44  ldr x22,[sp, #0x20]
71036b1d48  ldr x8,[x8, #0xa70]
71036b1d4c  cbz x8,0x71036b1d58
71036b1d50  mov x0,x22
71036b1d54  bl 0x71039c19b0
71036b1d58  mov x0,x22
71036b1d5c  bl 0x710392eb40
71036b1d60  ldr x8,[x21, #0x38]
71036b1d64  orr w9,wzr,#0x3f800000
71036b1d68  str w9,[x8, #0x10]
71036b1d6c  ldr x0,[x19, #0x38]
71036b1d70  str x21,[x19, #0x38]
71036b1d74  cbz x0,0x71036b1d84
71036b1d78  ldr x8,[x0]
71036b1d7c  ldr x8,[x8, #0x8]
71036b1d80  blr x8
71036b1d84  mov w1,#0x50
71036b1d88  mov w0,#0x10
71036b1d8c  orr w20,wzr,#0x80000001
71036b1d90  bl 0x710392e290
71036b1d94  mov x21,x0
71036b1d98  cbnz x0,0x71036b1de4
71036b1d9c  adrp x8,0x7105332000
71036b1da0  ldr x0,[x8, #0xf00]
71036b1da4  cbz x0,0x71036b1de0
71036b1da8  mov w8,#0x50
71036b1dac  str wzr,[sp, #0x2c]
71036b1db0  add x1,sp,#0x2c
71036b1db4  str x8,[sp, #0x10]
71036b1db8  ldr x8,[x0]
71036b1dbc  ldr x8,[x8, #0x30]
71036b1dc0  add x2,sp,#0x10
71036b1dc4  blr x8
71036b1dc8  tbz w0,#0x0,0x71036b1de0
71036b1dcc  mov w1,#0x50
71036b1dd0  mov w0,#0x10
71036b1dd4  bl 0x710392e290
71036b1dd8  mov x21,x0
71036b1ddc  cbnz x0,0x71036b1de4
71036b1de0  mov x21,xzr
71036b1de4  adrp x8,0x7105239000
71036b1de8  add x8,x8,#0xe40
71036b1dec  mov x24,x21
71036b1df0  stp x8,x19,[x21]
71036b1df4  adrp x8,0x7105239000
71036b1df8  add x8,x8,#0x610
71036b1dfc  mov x22,x21
71036b1e00  mov x23,x21
71036b1e04  str xzr,[x24, #0x18]!
71036b1e08  str x8,[x21, #0x10]
71036b1e0c  adrp x8,0x7105239000
71036b1e10  add x8,x8,#0xeb0
71036b1e14  stp xzr,xzr,[x21, #0x20]
71036b1e18  str x8,[x22, #0x30]!
71036b1e1c  str xzr,[x23, #0x38]!
71036b1e20  stp xzr,xzr,[x21, #0x40]
71036b1e24  ldr x8,[x19, #0x8]
71036b1e28  ldr x0,[x8]
71036b1e2c  ldr x8,[x0]
71036b1e30  ldr x8,[x8, #0x38]
71036b1e34  blr x8
71036b1e38  mov w9,#0xa
71036b1e3c  mov w10,#0x6c62
71036b1e40  movk w10,#0x6e65, LSL #16
71036b1e44  mov x8,xzr
71036b1e48  stp xzr,xzr,[sp, #0x10]
71036b1e4c  strb w9,[sp, #0x10]
71036b1e50  mov w12,#0x64
71036b1e54  add x0,x0,#0x80
71036b1e58  stur w10,[sp, #0x11]
71036b1e5c  mov w11,#0x62
71036b1e60  mov w9,#0x2
71036b1e64  add x10,sp,#0x10
71036b1e68  str xzr,[sp, #0x20]
71036b1e6c  sturh w12,[sp, #0x15]
71036b1e70  b 0x71036b1e7c
71036b1e74  ldrb w11,[x10, x9, LSL ]
71036b1e78  add x9,x9,#0x1
71036b1e7c  and x11,x11,#0xff
71036b1e80  mul x11,x11,x25
71036b1e84  eor x11,x11,x11, LSR #0x2f
71036b1e88  mul x11,x11,x25
71036b1e8c  eor x8,x11,x8
71036b1e90  mul x11,x8,x25
71036b1e94  add x8,x11,x26
71036b1e98  cmp x9,#0x6
71036b1e9c  b.ne 0x71036b1e74
71036b1ea0  mov x9,#-0x6b65
71036b1ea4  movk x9,#0x19ab, LSL #16
71036b1ea8  sub x9,x9,x11
71036b1eac  add x8,x9,x8, LSL #0x15
71036b1eb0  mov w9,#0x109
71036b1eb4  eor x8,x8,x8, LSR #0x18
71036b1eb8  mul x8,x8,x9
71036b1ebc  mov w9,#0x15
71036b1ec0  eor x8,x8,x8, LSR #0xe
71036b1ec4  mul x8,x8,x9
71036b1ec8  eor x8,x8,x8, LSR #0x1c
71036b1ecc  mul x1,x8,x20
71036b1ed0  add x2,sp,#0x10
71036b1ed4  bl 0x7103682860
71036b1ed8  cbz x0,0x71036b1f64
71036b1edc  ldr w8,[x0, #0x48]
71036b1ee0  eor w8,w8,w8, ASR #0x1f
71036b1ee4  cmp w8,#0xd
71036b1ee8  b.ne 0x71036b2038
71036b1eec  ldr x8,[x0, #0x50]
71036b1ef0  ldr x9,[x0, #0x38]
71036b1ef4  cbz x9,0x71036b1f44
71036b1ef8  ldr x9,[x9]
71036b1efc  ldr x10,[x0, #0x40]
71036b1f00  cmp x9,x10
71036b1f04  b.ne 0x71036b1f44
71036b1f08  ldr x9,[x0, #0x30]
71036b1f0c  str x9,[x24]
71036b1f10  cbz x9,0x71036b1f48
71036b1f14  ldr x9,[x9, #0x8]
71036b1f18  str x9,[x21, #0x20]
71036b1f1c  ldr x9,[x9]
71036b1f20  str x9,[x21, #0x28]
71036b1f24  cbz x8,0x71036b1f58
71036b1f28  ldr x9,[x8, #0x8]
71036b1f2c  cbz x9,0x71036b1f58
71036b1f30  str x8,[x21, #0x38]
71036b1f34  ldr x8,[x8, #0x8]
71036b1f38  str x8,[x21, #0x40]
71036b1f3c  ldr x8,[x8]
71036b1f40  b 0x71036b1f60
71036b1f44  str xzr,[x24]
71036b1f48  mov x9,xzr
71036b1f4c  str xzr,[x21, #0x20]
71036b1f50  str x9,[x21, #0x28]
71036b1f54  cbnz x8,0x71036b1f28
71036b1f58  mov x8,xzr
71036b1f5c  stp xzr,xzr,[x23]
71036b1f60  str x8,[x22, #0x18]
71036b1f64  ldr x0,[x19, #0x40]
71036b1f68  str x21,[x19, #0x40]
71036b1f6c  cbz x0,0x71036b1f7c
71036b1f70  ldr x8,[x0]
71036b1f74  ldr x8,[x8, #0x8]
71036b1f78  blr x8
71036b1f7c  ldr x0,[sp, #0x8]
71036b1f80  ldr x8,[x0]
71036b1f84  ldr x8,[x8, #0x38]
71036b1f88  blr x8
71036b1f8c  adrp x8,0x710427f000
71036b1f90  add x8,x8,#0x4f3
71036b1f94  mov w9,#0x7573
71036b1f98  movk w9,#0x746c, LSL #16
71036b1f9c  ldr x8,[x8]
71036b1fa0  orr w10,wzr,#0x18
71036b1fa4  add x2,x19,#0x10
71036b1fa8  add x1,sp,#0x10
71036b1fac  str xzr,[sp, #0x20]
71036b1fb0  stp xzr,xzr,[sp, #0x10]
71036b1fb4  strb w10,[sp, #0x10]
71036b1fb8  stur x8,[sp, #0x11]
71036b1fbc  stur w9,[sp, #0x19]
71036b1fc0  strb wzr,[sp, #0x1d]
71036b1fc4  bl 0x71036b2070
71036b1fc8  ldrb w8,[sp, #0x10]
71036b1fcc  tbz w8,#0x0,0x71036b1ff0
71036b1fd0  adrp x8,0x71052a8000
71036b1fd4  ldr x19,[sp, #0x20]
71036b1fd8  ldr x8,[x8, #0xa70]
71036b1fdc  cbz x8,0x71036b1fe8
71036b1fe0  mov x0,x19
71036b1fe4  bl 0x71039c19b0
71036b1fe8  mov x0,x19
71036b1fec  bl 0x710392eb40
71036b1ff0  ldp x29,x30,[sp, #0x80]
71036b1ff4  ldp x20,x19,[sp, #0x70]
71036b1ff8  ldp x22,x21,[sp, #0x60]
71036b1ffc  ldp x24,x23,[sp, #0x50]
71036b2000  ldp x26,x25,[sp, #0x40]
71036b2004  ldp x28,x27,[sp, #0x30]
71036b2008  add sp,sp,#0x90
71036b200c  ret
71036b2010  cmp w8,#0x13
71036b2014  b.hi 0x71036b2034
71036b2018  mov w9,#0x1
71036b201c  lsl w9,w9,w8
71036b2020  mov w10,#0x7fff
71036b2024  movk w10,#0x7, LSL #16
71036b2028  tst w9,w10
71036b202c  b.ne 0x71036b2058
71036b2030  cmp w8,#0x13
71036b2034  bl 0x71036b2390
71036b2038  cmp w8,#0x13
71036b203c  b.hi 0x71036b2060
71036b2040  mov w9,#0x1
71036b2044  lsl w9,w9,w8
71036b2048  mov w10,#0xdfff
71036b204c  movk w10,#0x7, LSL #16
71036b2050  tst w9,w10
71036b2054  b.eq 0x71036b205c
71036b2058  bl 0x7103741710
71036b205c  cmp w8,#0x13
71036b2060  bl 0x71036b21a0
