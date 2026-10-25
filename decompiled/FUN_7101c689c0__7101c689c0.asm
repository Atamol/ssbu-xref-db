// addr:      7101c689c0
// offset:    0x1c689c0
// name:      FUN_7101c689c0
// mangled:   
// size:      2412

7101c689c0  stp x28,x27,[sp, #-0x60]!
7101c689c4  stp x26,x25,[sp, #0x10]
7101c689c8  stp x24,x23,[sp, #0x20]
7101c689cc  stp x22,x21,[sp, #0x30]
7101c689d0  stp x20,x19,[sp, #0x40]
7101c689d4  stp x29,x30,[sp, #0x50]
7101c689d8  add x29,sp,#0x50
7101c689dc  sub sp,sp,#0x900
7101c689e0  mov x8,#-0x1
7101c689e4  add x9,sp,#0x410
7101c689e8  orr w10,wzr,#0x3c
7101c689ec  mov x11,#0x503
7101c689f0  str x8,[sp, #0x410]
7101c689f4  stur xzr,[x9, #0x54]
7101c689f8  strh wzr,[sp, #0x46c]
7101c689fc  strb wzr,[sp, #0x86c]
7101c68a00  movk x11,#0x2, LSL #32
7101c68a04  stur xzr,[x9, #0xd]
7101c68a08  add x23,x9,#0x4a0
7101c68a0c  mov x21,x1
7101c68a10  strh w10,[sp, #0x8b4]
7101c68a14  add x10,x9,#0x4a6
7101c68a18  mov x19,x0
7101c68a1c  str xzr,[sp, #0x418]
7101c68a20  str x8,[sp, #0x870]
7101c68a24  str xzr,[sp, #0x878]
7101c68a28  strh wzr,[sp, #0x880]
7101c68a2c  strh wzr,[sp, #0x8b0]
7101c68a30  strb wzr,[sp, #0x8b2]
7101c68a34  str x11,[x10]
7101c68a38  mov x11,#0xa
7101c68a3c  movk x11,#0x100, LSL #16
7101c68a40  add x10,x9,#0x4ae
7101c68a44  movk x11,#0x1, LSL #32
7101c68a48  movk x11,#0x103, LSL #48
7101c68a4c  str x11,[x10]
7101c68a50  mov w10,#0x100
7101c68a54  add x11,x9,#0x4cc
7101c68a58  strh w10,[sp, #0x8c6]
7101c68a5c  mov w10,#0x2
7101c68a60  strb w10,[sp, #0x8c8]
7101c68a64  add x10,x9,#0x4bc
7101c68a68  add x9,x9,#0x4c4
7101c68a6c  str x8,[x11]
7101c68a70  str x8,[x9]
7101c68a74  mov w9,#0xffffffff
7101c68a78  str x8,[x10]
7101c68a7c  adrp x8,0x710532f000
7101c68a80  ldr x8,[x8, #0x730]
7101c68a84  str w9,[sp, #0x8e4]
7101c68a88  cbz x8,0x7101c68ae8
7101c68a8c  ldr x24,[x8, #0x8]
7101c68a90  ldr x22,[x24, #0x178]
7101c68a94  ldr x0,[x22, #0x8]
7101c68a98  mov x1,#0x4f97
7101c68a9c  movk x1,#0x5678, LSL #16
7101c68aa0  movk x1,#0xd, LSL #32
7101c68aa4  bl 0x71032b23e0
7101c68aa8  mov x20,x0
7101c68aac  mov x0,x22
7101c68ab0  mov x1,x20
7101c68ab4  bl 0x71032b1e40
7101c68ab8  tbnz w0,#0x1f,0x7101c68ae8
7101c68abc  ldr x0,[x24, #0x178]
7101c68ac0  mov x1,x20
7101c68ac4  bl 0x71032b1e40
7101c68ac8  lsr w9,w0,#0x5
7101c68acc  add x10,sp,#0x410
7101c68ad0  add x9,x10,w9, UXTW  #0x2
7101c68ad4  ldr w10,[x9, #0x4c8]
7101c68ad8  mov w8,#0x1
7101c68adc  lsl w8,w8,w0
7101c68ae0  bic w8,w10,w8
7101c68ae4  str w8,[x9, #0x4c8]
7101c68ae8  ldur x8,[x21, #0x6c]
7101c68aec  ldur x9,[x21, #0x74]
7101c68af0  add x0,sp,#0x410
7101c68af4  ldur x10,[x21, #0x7c]
7101c68af8  add x1,sp,#0x8
7101c68afc  str xzr,[sp, #0x8]
7101c68b00  stp x9,x10,[x23, #0x8]
7101c68b04  str x8,[x23]
7101c68b08  strh wzr,[sp, #0x10]
7101c68b0c  add x23,sp,#0x410
7101c68b10  bl 0x71017ab0c0
7101c68b14  add x20,x19,#0x88
7101c68b18  adrp x1,0x710435b000
7101c68b1c  add x1,x1,#0x885
7101c68b20  sub x8,x29,#0x68
7101c68b24  mov x0,x20
7101c68b28  bl 0x7103776640
7101c68b2c  ldr x3,[x19, #0x78]
7101c68b30  ldrb w1,[sp, #0x8b1]
7101c68b34  sub x0,x29,#0x68
7101c68b38  add x2,sp,#0x8
7101c68b3c  bl 0x7101c6fec0
7101c68b40  ldur x22,[x29, #-0x60]
7101c68b44  adrp x8,0x710523d000
7101c68b48  add x8,x8,#0x988
7101c68b4c  stp x8,xzr,[x29, #-0x68]
7101c68b50  cbz x22,0x7101c68b74
7101c68b54  ldr x0,[x22, #0x18]
7101c68b58  adrp x8,0x710523d000
7101c68b5c  add x8,x8,#0x9a8
7101c68b60  stp x8,xzr,[x22, #0x10]
7101c68b64  cbz x0,0x7101c68b6c
7101c68b68  bl 0x710392eb40
7101c68b6c  mov x0,x22
7101c68b70  bl 0x710392eb40
7101c68b74  ldrb w1,[x21, #0x87]
7101c68b78  add x0,sp,#0x410
7101c68b7c  bl 0x7101c6f7f0
7101c68b80  adrp x1,0x71042e7000
7101c68b84  add x1,x1,#0x253
7101c68b88  add x8,sp,#0x8
7101c68b8c  mov x0,x20
7101c68b90  bl 0x7103776910
7101c68b94  add x1,x23,#0x8
7101c68b98  add x0,sp,#0x8
7101c68b9c  bl 0x710377a120
7101c68ba0  ldr x0,[sp, #0x10]
7101c68ba4  adrp x25,0x710523d000
7101c68ba8  add x25,x25,#0x9a8
7101c68bac  stp x25,xzr,[sp, #0x8]
7101c68bb0  cbz x0,0x7101c68bb8
7101c68bb4  bl 0x710392eb40
7101c68bb8  ldrb w22,[x21, #0x78]
7101c68bbc  adrp x0,0x7104308000
7101c68bc0  add x0,x0,#0x60b
7101c68bc4  add x8,sp,#0x410
7101c68bc8  mov w1,wzr
7101c68bcc  add x23,sp,#0x410
7101c68bd0  bl 0x71003a4ca0
7101c68bd4  add x1,x23,#0x8
7101c68bd8  add x8,sp,#0x8
7101c68bdc  mov x0,x20
7101c68be0  bl 0x7103776910
7101c68be4  adrp x1,0x710436c000
7101c68be8  add x1,x1,#0x45b
7101c68bec  add x0,sp,#0x8
7101c68bf0  bl 0x710377a120
7101c68bf4  ldr x0,[sp, #0x10]
7101c68bf8  stp x25,xzr,[sp, #0x8]
7101c68bfc  cbz x0,0x7101c68c04
7101c68c00  bl 0x710392eb40
7101c68c04  sub w8,w22,#0x4
7101c68c08  mov w26,#0x9dc5
7101c68c0c  movk w26,#0x811c, LSL #16
7101c68c10  cmp w8,#0x3
7101c68c14  b.hi 0x7101c68cb0
7101c68c18  adrp x9,0x71044f9000
7101c68c1c  add x9,x9,#0x4a0
7101c68c20  ldrsw x8,[x9, x8, LSL #0x2]
7101c68c24  add x8,x8,x9
7101c68c28  br x8
7101c68c2c  mov x10,#0x6e6d
7101c68c30  movk x10,#0x5f75, LSL #16
7101c68c34  orr x8,xzr,#0x1c00000000
7101c68c38  add x9,sp,#0x8
7101c68c3c  movk x10,#0x6e6f, LSL #32
7101c68c40  movk x10,#0x696c, LSL #48
7101c68c44  stp x8,x10,[sp, #0x8]
7101c68c48  add x22,x9,#0x8
7101c68c4c  add x8,x9,#0x9
7101c68c50  mov x9,#0x656e
7101c68c54  movk x9,#0x725f, LSL #16
7101c68c58  movk x9,#0x6f6f, LSL #32
7101c68c5c  movk x9,#0x5f6d, LSL #48
7101c68c60  str x9,[sp, #0x18]
7101c68c64  mov w9,#0x7473
7101c68c68  strh w9,[sp, #0x20]
7101c68c6c  strb wzr,[sp, #0x2c]
7101c68c70  mov x9,#0x6761
7101c68c74  movk x9,#0x5f65, LSL #16
7101c68c78  movk x9,#0x6172, LSL #32
7101c68c7c  movk x9,#0x646e, LSL #48
7101c68c80  stur x9,[sp, #0x22]
7101c68c84  mov w9,#0x6d6f
7101c68c88  strh w9,[sp, #0x2a]
7101c68c8c  mov w10,#0x6d
7101c68c90  mov w9,#0x89
7101c68c94  mov w11,w26
7101c68c98  mul w11,w11,w9
7101c68c9c  and w10,w10,#0xff
7101c68ca0  eor w11,w11,w10
7101c68ca4  ldrb w10,[x8], #0x1
7101c68ca8  cbnz w10,0x7101c68c98
7101c68cac  b 0x7101c68f3c
7101c68cb0  mov x10,#0x6e6d
7101c68cb4  movk x10,#0x5f75, LSL #16
7101c68cb8  mov x8,#0x2700000000
7101c68cbc  add x9,sp,#0x8
7101c68cc0  movk x10,#0x6e6f, LSL #32
7101c68cc4  movk x10,#0x696c, LSL #48
7101c68cc8  stp x8,x10,[sp, #0x8]
7101c68ccc  add x22,x9,#0x8
7101c68cd0  add x8,x9,#0x9
7101c68cd4  mov x9,#0x656e
7101c68cd8  movk x9,#0x725f, LSL #16
7101c68cdc  movk x9,#0x6f6f, LSL #32
7101c68ce0  movk x9,#0x5f6d, LSL #48
7101c68ce4  str x9,[sp, #0x18]
7101c68ce8  mov w9,#0x7473
7101c68cec  strh w9,[sp, #0x20]
7101c68cf0  mov x9,#0x6761
7101c68cf4  movk x9,#0x5f65, LSL #16
7101c68cf8  movk x9,#0x7270, LSL #32
7101c68cfc  movk x9,#0x7665, LSL #48
7101c68d00  stur x9,[sp, #0x22]
7101c68d04  mov w9,#0x6f69
7101c68d08  movk w9,#0x7375, LSL #16
7101c68d0c  stur w9,[sp, #0x2a]
7101c68d10  mov x11,#0x735f
7101c68d14  movk x11,#0x6c65, LSL #16
7101c68d18  mov w9,#0x796c
7101c68d1c  strh w9,[sp, #0x2e]
7101c68d20  movk x11,#0x6365, LSL #32
7101c68d24  movk x11,#0x74, LSL #48
7101c68d28  str x11,[sp, #0x30]
7101c68d2c  mov w10,#0x6d
7101c68d30  mov w9,#0x89
7101c68d34  mov w11,w26
7101c68d38  mul w11,w11,w9
7101c68d3c  and w10,w10,#0xff
7101c68d40  eor w11,w11,w10
7101c68d44  ldrb w10,[x8], #0x1
7101c68d48  cbnz w10,0x7101c68d38
7101c68d4c  b 0x7101c68f3c
7101c68d50  mov x9,#0x6e6d
7101c68d54  movk x9,#0x5f75, LSL #16
7101c68d58  movk x9,#0x6e6f, LSL #32
7101c68d5c  movk x9,#0x696c, LSL #48
7101c68d60  str x9,[sp, #0x10]
7101c68d64  mov x9,#0x656e
7101c68d68  movk x9,#0x725f, LSL #16
7101c68d6c  movk x9,#0x6f6f, LSL #32
7101c68d70  movk x9,#0x5f6d, LSL #48
7101c68d74  str x9,[sp, #0x18]
7101c68d78  mov w9,#0x7473
7101c68d7c  strh w9,[sp, #0x20]
7101c68d80  mov x9,#0x6761
7101c68d84  movk x9,#0x5f65, LSL #16
7101c68d88  movk x9,#0x6172, LSL #32
7101c68d8c  movk x9,#0x646e, LSL #48
7101c68d90  stur x9,[sp, #0x22]
7101c68d94  mov w9,#0x6d6f
7101c68d98  movk w9,#0x625f, LSL #16
7101c68d9c  stur w9,[sp, #0x2a]
7101c68da0  mov w9,#0x7461
7101c68da4  strh w9,[sp, #0x2e]
7101c68da8  mov x9,#0x6c74
7101c68dac  movk x9,#0x6665, LSL #16
7101c68db0  mov x8,#0x2c00000000
7101c68db4  str x8,[sp, #0x8]
7101c68db8  add x8,sp,#0x8
7101c68dbc  add x22,x8,#0x8
7101c68dc0  strb wzr,[sp, #0x3c]
7101c68dc4  add x8,x8,#0x9
7101c68dc8  movk x9,#0x6569, LSL #32
7101c68dcc  movk x9,#0x646c, LSL #48
7101c68dd0  str x9,[sp, #0x30]
7101c68dd4  mov w9,#0x655f
7101c68dd8  movk w9,#0x646e, LSL #16
7101c68ddc  str w9,[sp, #0x38]
7101c68de0  mov w10,#0x6d
7101c68de4  mov w9,#0x89
7101c68de8  mov w11,w26
7101c68dec  mul w11,w11,w9
7101c68df0  and w10,w10,#0xff
7101c68df4  eor w11,w11,w10
7101c68df8  ldrb w10,[x8], #0x1
7101c68dfc  cbnz w10,0x7101c68dec
7101c68e00  b 0x7101c68f3c
7101c68e04  mov x9,#0x6e6d
7101c68e08  movk x9,#0x5f75, LSL #16
7101c68e0c  movk x9,#0x6e6f, LSL #32
7101c68e10  movk x9,#0x696c, LSL #48
7101c68e14  str x9,[sp, #0x10]
7101c68e18  mov x9,#0x656e
7101c68e1c  movk x9,#0x725f, LSL #16
7101c68e20  movk x9,#0x6f6f, LSL #32
7101c68e24  movk x9,#0x5f6d, LSL #48
7101c68e28  str x9,[sp, #0x18]
7101c68e2c  mov w9,#0x7473
7101c68e30  strh w9,[sp, #0x20]
7101c68e34  mov x9,#0x6761
7101c68e38  movk x9,#0x5f65, LSL #16
7101c68e3c  movk x9,#0x6172, LSL #32
7101c68e40  movk x9,#0x646e, LSL #48
7101c68e44  stur x9,[sp, #0x22]
7101c68e48  mov w9,#0x6d6f
7101c68e4c  movk w9,#0x625f, LSL #16
7101c68e50  stur w9,[sp, #0x2a]
7101c68e54  mov w9,#0x7461
7101c68e58  mov x8,#0x2800000000
7101c68e5c  str x8,[sp, #0x8]
7101c68e60  add x8,sp,#0x8
7101c68e64  add x22,x8,#0x8
7101c68e68  strb wzr,[sp, #0x38]
7101c68e6c  strh w9,[sp, #0x2e]
7101c68e70  mov x9,#0x6c74
7101c68e74  movk x9,#0x6665, LSL #16
7101c68e78  movk x9,#0x6569, LSL #32
7101c68e7c  movk x9,#0x646c, LSL #48
7101c68e80  str x9,[sp, #0x30]
7101c68e84  add x8,x8,#0x9
7101c68e88  mov w10,#0x6d
7101c68e8c  mov w9,#0x89
7101c68e90  mov w11,w26
7101c68e94  mul w11,w11,w9
7101c68e98  and w10,w10,#0xff
7101c68e9c  eor w11,w11,w10
7101c68ea0  ldrb w10,[x8], #0x1
7101c68ea4  cbnz w10,0x7101c68e94
7101c68ea8  b 0x7101c68f3c
7101c68eac  orr x8,xzr,#0x2000000000
7101c68eb0  str x8,[sp, #0x8]
7101c68eb4  mov x8,#0x6e6d
7101c68eb8  movk x8,#0x5f75, LSL #16
7101c68ebc  add x9,sp,#0x8
7101c68ec0  add x22,x9,#0x8
7101c68ec4  movk x8,#0x6e6f, LSL #32
7101c68ec8  movk x8,#0x696c, LSL #48
7101c68ecc  str x8,[sp, #0x10]
7101c68ed0  add x8,x9,#0x9
7101c68ed4  mov x9,#0x656e
7101c68ed8  movk x9,#0x725f, LSL #16
7101c68edc  movk x9,#0x6f6f, LSL #32
7101c68ee0  movk x9,#0x5f6d, LSL #48
7101c68ee4  str x9,[sp, #0x18]
7101c68ee8  mov w9,#0x7473
7101c68eec  strh w9,[sp, #0x20]
7101c68ef0  mov x9,#0x6761
7101c68ef4  movk x9,#0x5f65, LSL #16
7101c68ef8  strb wzr,[sp, #0x30]
7101c68efc  mov w10,#0x6d
7101c68f00  movk x9,#0x6172, LSL #32
7101c68f04  movk x9,#0x646e, LSL #48
7101c68f08  stur x9,[sp, #0x22]
7101c68f0c  mov w9,#0x6d6f
7101c68f10  movk w9,#0x655f, LSL #16
7101c68f14  stur w9,[sp, #0x2a]
7101c68f18  mov w9,#0x646e
7101c68f1c  strh w9,[sp, #0x2e]
7101c68f20  mov w9,#0x89
7101c68f24  mov w11,w26
7101c68f28  mul w11,w11,w9
7101c68f2c  and w10,w10,#0xff
7101c68f30  eor w11,w11,w10
7101c68f34  ldrb w10,[x8], #0x1
7101c68f38  cbnz w10,0x7101c68f28
7101c68f3c  adrp x0,0x7104412000
7101c68f40  add x0,x0,#0xabd
7101c68f44  add x8,sp,#0x410
7101c68f48  mov w1,wzr
7101c68f4c  str w11,[sp, #0x8]
7101c68f50  add x23,sp,#0x410
7101c68f54  bl 0x71003a4ca0
7101c68f58  add x1,x23,#0x8
7101c68f5c  sub x8,x29,#0x68
7101c68f60  mov x0,x20
7101c68f64  bl 0x7103776910
7101c68f68  sub x0,x29,#0x68
7101c68f6c  mov x1,x22
7101c68f70  bl 0x710377a120
7101c68f74  ldur x0,[x29, #-0x60]
7101c68f78  stp x25,xzr,[x29, #-0x68]
7101c68f7c  cbz x0,0x7101c68f84
7101c68f80  bl 0x710392eb40
7101c68f84  ldrb w8,[x21, #0x88]
7101c68f88  cbz w8,0x7101c692c8
7101c68f8c  adrp x0,0x7104308000
7101c68f90  add x0,x0,#0x60b
7101c68f94  add x8,sp,#0x410
7101c68f98  mov w1,#0x1
7101c68f9c  add x22,sp,#0x410
7101c68fa0  bl 0x71003a4ca0
7101c68fa4  add x1,x22,#0x8
7101c68fa8  add x8,sp,#0x8
7101c68fac  mov x0,x20
7101c68fb0  add x22,sp,#0x8
7101c68fb4  bl 0x7103776910
7101c68fb8  adrp x1,0x710432a000
7101c68fbc  add x1,x1,#0x92
7101c68fc0  add x0,sp,#0x8
7101c68fc4  bl 0x710377a120
7101c68fc8  ldr x0,[sp, #0x10]
7101c68fcc  stp x25,xzr,[sp, #0x8]
7101c68fd0  cbz x0,0x7101c68fd8
7101c68fd4  bl 0x710392eb40
7101c68fd8  mov x8,xzr
7101c68fdc  adrp x9,0x7104433000
7101c68fe0  add x9,x9,#0x12d
7101c68fe4  str xzr,[sp, #0x8]
7101c68fe8  b 0x7101c68ff4
7101c68fec  add x8,x8,#0x2
7101c68ff0  strb w11,[x10, #0x9]
7101c68ff4  add x11,x9,x8
7101c68ff8  ldrb w12,[x11]
7101c68ffc  cbz w12,0x7101c69014
7101c69000  ldrb w11,[x11, #0x1]
7101c69004  add x10,x22,x8
7101c69008  strb w12,[x10, #0x8]
7101c6900c  cbnz w11,0x7101c68fec
7101c69010  add x8,x8,#0x1
7101c69014  add x9,sp,#0x8
7101c69018  add x22,x9,#0x8
7101c6901c  mov w10,w26
7101c69020  strb wzr,[x22, w8, UXTW ]
7101c69024  str w8,[sp, #0xc]
7101c69028  ldrb w8,[sp, #0x10]
7101c6902c  cbz w8,0x7101c69050
7101c69030  add x9,x9,#0x9
7101c69034  mov w11,#0x89
7101c69038  mov w10,w26
7101c6903c  mul w10,w10,w11
7101c69040  and w8,w8,#0xff
7101c69044  eor w10,w10,w8
7101c69048  ldrb w8,[x9], #0x1
7101c6904c  cbnz w8,0x7101c6903c
7101c69050  adrp x0,0x7104412000
7101c69054  add x0,x0,#0xabd
7101c69058  add x8,sp,#0x410
7101c6905c  mov w1,#0x1
7101c69060  str w10,[sp, #0x8]
7101c69064  add x23,sp,#0x410
7101c69068  bl 0x71003a4ca0
7101c6906c  add x1,x23,#0x8
7101c69070  sub x8,x29,#0x68
7101c69074  mov x0,x20
7101c69078  bl 0x7103776910
7101c6907c  sub x0,x29,#0x68
7101c69080  mov x1,x22
7101c69084  bl 0x710377a120
7101c69088  ldur x0,[x29, #-0x60]
7101c6908c  stp x25,xzr,[x29, #-0x68]
7101c69090  cbz x0,0x7101c69098
7101c69094  bl 0x710392eb40
7101c69098  mov w23,#0x2
7101c6909c  ldrb w8,[x21, #0x75]
7101c690a0  cbz w8,0x7101c692d4
7101c690a4  adrp x0,0x7104308000
7101c690a8  add x0,x0,#0x60b
7101c690ac  add x8,sp,#0x410
7101c690b0  mov w1,w23
7101c690b4  add w22,w23,#0x1
7101c690b8  add x24,sp,#0x410
7101c690bc  bl 0x71003a4ca0
7101c690c0  add x1,x24,#0x8
7101c690c4  add x8,sp,#0x8
7101c690c8  mov x0,x20
7101c690cc  add x24,sp,#0x8
7101c690d0  bl 0x7103776910
7101c690d4  adrp x1,0x71042d6000
7101c690d8  add x1,x1,#0x325
7101c690dc  add x0,sp,#0x8
7101c690e0  bl 0x710377a120
7101c690e4  ldr x0,[sp, #0x10]
7101c690e8  stp x25,xzr,[sp, #0x8]
7101c690ec  cbz x0,0x7101c690f4
7101c690f0  bl 0x710392eb40
7101c690f4  mov x8,xzr
7101c690f8  adrp x9,0x7104433000
7101c690fc  add x9,x9,#0x12d
7101c69100  str xzr,[sp, #0x8]
7101c69104  b 0x7101c69110
7101c69108  add x8,x8,#0x2
7101c6910c  strb w11,[x10, #0x9]
7101c69110  add x11,x9,x8
7101c69114  ldrb w12,[x11]
7101c69118  cbz w12,0x7101c69130
7101c6911c  ldrb w11,[x11, #0x1]
7101c69120  add x10,x24,x8
7101c69124  strb w12,[x10, #0x8]
7101c69128  cbnz w11,0x7101c69108
7101c6912c  add x8,x8,#0x1
7101c69130  add x9,sp,#0x8
7101c69134  add x24,x9,#0x8
7101c69138  mov w10,w26
7101c6913c  strb wzr,[x24, w8, UXTW ]
7101c69140  str w8,[sp, #0xc]
7101c69144  ldrb w8,[sp, #0x10]
7101c69148  cbz w8,0x7101c6916c
7101c6914c  add x9,x9,#0x9
7101c69150  mov w11,#0x89
7101c69154  mov w10,w26
7101c69158  mul w10,w10,w11
7101c6915c  and w8,w8,#0xff
7101c69160  eor w10,w10,w8
7101c69164  ldrb w8,[x9], #0x1
7101c69168  cbnz w8,0x7101c69158
7101c6916c  adrp x0,0x7104412000
7101c69170  add x0,x0,#0xabd
7101c69174  add x8,sp,#0x410
7101c69178  mov w1,w23
7101c6917c  str w10,[sp, #0x8]
7101c69180  add x27,sp,#0x410
7101c69184  bl 0x71003a4ca0
7101c69188  add x1,x27,#0x8
7101c6918c  sub x8,x29,#0x68
7101c69190  mov x0,x20
7101c69194  bl 0x7103776910
7101c69198  sub x0,x29,#0x68
7101c6919c  mov x1,x24
7101c691a0  bl 0x710377a120
7101c691a4  ldur x0,[x29, #-0x60]
7101c691a8  stp x25,xzr,[x29, #-0x68]
7101c691ac  cbz x0,0x7101c691b4
7101c691b0  bl 0x710392eb40
7101c691b4  ldrb w8,[x21, #0x8b]
7101c691b8  cbz w8,0x7101c692e0
7101c691bc  adrp x0,0x7104308000
7101c691c0  add x0,x0,#0x60b
7101c691c4  add x8,sp,#0x410
7101c691c8  mov w1,w22
7101c691cc  add w21,w22,#0x1
7101c691d0  add x23,sp,#0x410
7101c691d4  bl 0x71003a4ca0
7101c691d8  add x1,x23,#0x8
7101c691dc  add x8,sp,#0x8
7101c691e0  mov x0,x20
7101c691e4  add x23,sp,#0x8
7101c691e8  bl 0x7103776910
7101c691ec  adrp x1,0x7104318000
7101c691f0  add x1,x1,#0xf43
7101c691f4  add x0,sp,#0x8
7101c691f8  bl 0x710377a120
7101c691fc  ldr x0,[sp, #0x10]
7101c69200  stp x25,xzr,[sp, #0x8]
7101c69204  cbz x0,0x7101c6920c
7101c69208  bl 0x710392eb40
7101c6920c  mov x8,xzr
7101c69210  adrp x9,0x71042c4000
7101c69214  add x9,x9,#0xdfe
7101c69218  str xzr,[sp, #0x8]
7101c6921c  b 0x7101c69228
7101c69220  add x8,x8,#0x2
7101c69224  strb w11,[x10, #0x9]
7101c69228  add x11,x9,x8
7101c6922c  ldrb w12,[x11]
7101c69230  cbz w12,0x7101c69248
7101c69234  ldrb w11,[x11, #0x1]
7101c69238  add x10,x23,x8
7101c6923c  strb w12,[x10, #0x8]
7101c69240  cbnz w11,0x7101c69220
7101c69244  add x8,x8,#0x1
7101c69248  add x10,sp,#0x8
7101c6924c  add x23,x10,#0x8
7101c69250  strb wzr,[x23, w8, UXTW ]
7101c69254  ldrb w9,[sp, #0x10]
7101c69258  str w8,[sp, #0xc]
7101c6925c  cbz w9,0x7101c6927c
7101c69260  add x8,x10,#0x9
7101c69264  mov w10,#0x89
7101c69268  mul w11,w26,w10
7101c6926c  and w9,w9,#0xff
7101c69270  eor w26,w11,w9
7101c69274  ldrb w9,[x8], #0x1
7101c69278  cbnz w9,0x7101c69268
7101c6927c  adrp x0,0x7104412000
7101c69280  add x0,x0,#0xabd
7101c69284  add x8,sp,#0x410
7101c69288  mov w1,w22
7101c6928c  str w26,[sp, #0x8]
7101c69290  add x24,sp,#0x410
7101c69294  bl 0x71003a4ca0
7101c69298  add x1,x24,#0x8
7101c6929c  sub x8,x29,#0x68
7101c692a0  mov x0,x20
7101c692a4  bl 0x7103776910
7101c692a8  sub x0,x29,#0x68
7101c692ac  mov x1,x23
7101c692b0  bl 0x710377a120
7101c692b4  ldur x0,[x29, #-0x60]
7101c692b8  stp x25,xzr,[x29, #-0x68]
7101c692bc  cbz x0,0x7101c692e4
7101c692c0  bl 0x710392eb40
7101c692c4  b 0x7101c692e4
7101c692c8  mov w23,#0x1
7101c692cc  ldrb w8,[x21, #0x75]
7101c692d0  cbnz w8,0x7101c690a4
7101c692d4  mov w22,w23
7101c692d8  ldrb w8,[x21, #0x8b]
7101c692dc  cbnz w8,0x7101c691bc
7101c692e0  mov w21,w22
7101c692e4  adrp x0,0x71042e7000
7101c692e8  add x0,x0,#0x268
7101c692ec  add x8,sp,#0x410
7101c692f0  mov w1,w21
7101c692f4  add x20,sp,#0x410
7101c692f8  bl 0x71003a4ca0
7101c692fc  ldr x0,[x19, #0x90]
7101c69300  fmov s0,0x3f800000
7101c69304  add x1,x20,#0x8
7101c69308  bl 0x7103778300
7101c6930c  add sp,sp,#0x900
7101c69310  ldp x29,x30,[sp, #0x50]
7101c69314  ldp x20,x19,[sp, #0x40]
7101c69318  ldp x22,x21,[sp, #0x30]
7101c6931c  ldp x24,x23,[sp, #0x20]
7101c69320  ldp x26,x25,[sp, #0x10]
7101c69324  ldp x28,x27,[sp], #0x60
7101c69328  ret
