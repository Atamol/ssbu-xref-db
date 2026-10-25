// addr:      71036a7dd0
// offset:    0x36a7dd0
// name:      FUN_71036a7dd0
// mangled:   
// size:      1076

71036a7dd0  sub sp,sp,#0x20
71036a7dd4  stp x29,x30,[sp, #0x10]
71036a7dd8  add x29,sp,#0x10
71036a7ddc  adrp x8,0x7105339000
71036a7de0  add x8,x8,#0xd80
71036a7de4  ldarb w8,[x8]
71036a7de8  tbz w8,#0x0,0x71036a7e08
71036a7dec  ldp x29,x30,[sp, #0x10]
71036a7df0  adrp x8,0x7105339000
71036a7df4  add x8,x8,#0x9e0
71036a7df8  orr w9,wzr,#0x18
71036a7dfc  umaddl x0,w0,w9,x8
71036a7e00  add sp,sp,#0x20
71036a7e04  ret
71036a7e08  adrp x8,0x7105339000
71036a7e0c  add x8,x8,#0xd80
71036a7e10  stur w0,[x29, #-0x4]
71036a7e14  mov x0,x8
71036a7e18  bl 0x71039c06b0
71036a7e1c  mov w8,w0
71036a7e20  ldur w0,[x29, #-0x4]
71036a7e24  cbz w8,0x71036a7dec
71036a7e28  adrp x8,0x71043bd000
71036a7e2c  add x8,x8,#0x11e
71036a7e30  ldur x10,[x8, #0x5]
71036a7e34  ldr x8,[x8]
71036a7e38  adrp x1,0x7105339000
71036a7e3c  add x1,x1,#0x9e0
71036a7e40  stp xzr,xzr,[x1]
71036a7e44  stur x10,[x1, #0x6]
71036a7e48  stur x8,[x1, #0x1]
71036a7e4c  adrp x8,0x71043de000
71036a7e50  add x8,x8,#0xc73
71036a7e54  stp xzr,xzr,[x1, #0x10]
71036a7e58  ldur x10,[x8, #0x5]
71036a7e5c  ldr x8,[x8]
71036a7e60  stp xzr,xzr,[x1, #0x20]
71036a7e64  mov w9,#0x1a
71036a7e68  add x11,x1,#0x10f
71036a7e6c  adrp x0,0x7103681000
71036a7e70  add x0,x0,#0xe90
71036a7e74  stp xzr,xzr,[x1, #0x30]
71036a7e78  adrp x2,0x7104f17000
71036a7e7c  add x2,x2,#0x0
71036a7e80  strb w9,[x1]
71036a7e84  strb w9,[x1, #0x18]
71036a7e88  strb wzr,[x1, #0xe]
71036a7e8c  strb wzr,[x1, #0x3e]
71036a7e90  stur x10,[x1, #0x1e]
71036a7e94  stur x8,[x1, #0x19]
71036a7e98  adrp x8,0x7104348000
71036a7e9c  add x8,x8,#0xe15
71036a7ea0  ldr x10,[x8]
71036a7ea4  ldur x8,[x8, #0x5]
71036a7ea8  stur x8,[x1, #0x36]
71036a7eac  adrp x8,0x7104442000
71036a7eb0  add x8,x8,#0x3bf
71036a7eb4  strb w9,[x1, #0x30]
71036a7eb8  stur x10,[x1, #0x31]
71036a7ebc  strb wzr,[x1, #0x26]
71036a7ec0  str xzr,[x1, #0x70]
71036a7ec4  strb wzr,[x1, #0x6f]
71036a7ec8  str xzr,[x1, #0x88]
71036a7ecc  strb wzr,[x1, #0x87]
71036a7ed0  str xzr,[x1, #0xa0]
71036a7ed4  strb wzr,[x1, #0x9f]
71036a7ed8  str xzr,[x1, #0xb8]
71036a7edc  strb wzr,[x1, #0xb7]
71036a7ee0  str xzr,[x1, #0xd0]
71036a7ee4  strb wzr,[x1, #0xcf]
71036a7ee8  str xzr,[x1, #0xe8]
71036a7eec  strb wzr,[x1, #0xe7]
71036a7ef0  str xzr,[x1, #0x100]
71036a7ef4  strb wzr,[x1, #0xff]
71036a7ef8  str xzr,[x1, #0x118]
71036a7efc  stp xzr,xzr,[x1, #0x40]
71036a7f00  strb w9,[x1, #0x48]
71036a7f04  ldr x9,[x8]
71036a7f08  ldur x8,[x8, #0x5]
71036a7f0c  stp xzr,xzr,[x1, #0x50]
71036a7f10  stur x8,[x1, #0x4e]
71036a7f14  orr w8,wzr,#0x1c
71036a7f18  stur x9,[x1, #0x49]
71036a7f1c  adrp x9,0x7104431000
71036a7f20  add x9,x9,#0xc45
71036a7f24  ldr x10,[x9]
71036a7f28  ldur x9,[x9, #0x6]
71036a7f2c  stur x9,[x1, #0x67]
71036a7f30  adrp x9,0x7104453000
71036a7f34  add x9,x9,#0x507
71036a7f38  stur x10,[x1, #0x61]
71036a7f3c  ldr x10,[x9]
71036a7f40  ldur x9,[x9, #0x6]
71036a7f44  stur x9,[x1, #0x7f]
71036a7f48  adrp x9,0x71043ce000
71036a7f4c  add x9,x9,#0x9e
71036a7f50  stur x10,[x1, #0x79]
71036a7f54  ldr x10,[x9]
71036a7f58  ldur x9,[x9, #0x6]
71036a7f5c  stur x9,[x1, #0x97]
71036a7f60  adrp x9,0x71043ce000
71036a7f64  add x9,x9,#0xad
71036a7f68  stur x10,[x1, #0x91]
71036a7f6c  ldr x10,[x9]
71036a7f70  ldur x9,[x9, #0x6]
71036a7f74  stur x9,[x1, #0xaf]
71036a7f78  adrp x9,0x7104464000
71036a7f7c  add x9,x9,#0x6dc
71036a7f80  stur x10,[x1, #0xa9]
71036a7f84  ldr x10,[x9]
71036a7f88  ldur x9,[x9, #0x6]
71036a7f8c  stur x9,[x1, #0xc7]
71036a7f90  adrp x9,0x710427f000
71036a7f94  add x9,x9,#0x5f9
71036a7f98  stur x10,[x1, #0xc1]
71036a7f9c  ldr x10,[x9]
71036a7fa0  ldur x9,[x9, #0x6]
71036a7fa4  stur x9,[x1, #0xdf]
71036a7fa8  adrp x9,0x710437b000
71036a7fac  add x9,x9,#0x259
71036a7fb0  stur x10,[x1, #0xd9]
71036a7fb4  ldr x10,[x9]
71036a7fb8  ldur x9,[x9, #0x6]
71036a7fbc  stur x9,[x1, #0xf7]
71036a7fc0  adrp x9,0x7104338000
71036a7fc4  add x9,x9,#0xe3d
71036a7fc8  stur x10,[x1, #0xf1]
71036a7fcc  ldr x10,[x9]
71036a7fd0  ldur x9,[x9, #0x6]
71036a7fd4  strb wzr,[x1, #0x56]
71036a7fd8  strb w8,[x1, #0x60]
71036a7fdc  strb w8,[x1, #0x78]
71036a7fe0  strb w8,[x1, #0x90]
71036a7fe4  strb w8,[x1, #0xa8]
71036a7fe8  strb w8,[x1, #0xc0]
71036a7fec  strb w8,[x1, #0xd8]
71036a7ff0  strb w8,[x1, #0xf0]
71036a7ff4  strb w8,[x1, #0x108]
71036a7ff8  str x9,[x11]
71036a7ffc  add x9,x1,#0x109
71036a8000  add x11,x1,#0x127
71036a8004  str x10,[x9]
71036a8008  adrp x9,0x7104317000
71036a800c  add x9,x9,#0xa7a
71036a8010  ldr x10,[x9]
71036a8014  ldur x9,[x9, #0x6]
71036a8018  strb wzr,[x1, #0x117]
71036a801c  str xzr,[x1, #0x130]
71036a8020  strb w8,[x1, #0x120]
71036a8024  str x9,[x11]
71036a8028  add x9,x1,#0x121
71036a802c  add x11,x1,#0x13f
71036a8030  str x10,[x9]
71036a8034  adrp x9,0x7104307000
71036a8038  add x9,x9,#0x18f
71036a803c  ldr x10,[x9]
71036a8040  ldur x9,[x9, #0x6]
71036a8044  strb wzr,[x1, #0x12f]
71036a8048  str xzr,[x1, #0x148]
71036a804c  strb w8,[x1, #0x138]
71036a8050  str x9,[x11]
71036a8054  add x9,x1,#0x139
71036a8058  add x11,x1,#0x157
71036a805c  str x10,[x9]
71036a8060  adrp x9,0x7104338000
71036a8064  add x9,x9,#0xe4c
71036a8068  ldr x10,[x9]
71036a806c  ldur x9,[x9, #0x6]
71036a8070  strb wzr,[x1, #0x147]
71036a8074  str xzr,[x1, #0x160]
71036a8078  strb w8,[x1, #0x150]
71036a807c  str x9,[x11]
71036a8080  add x9,x1,#0x151
71036a8084  add x11,x1,#0x16f
71036a8088  str x10,[x9]
71036a808c  adrp x9,0x7104328000
71036a8090  add x9,x9,#0xb08
71036a8094  ldr x10,[x9]
71036a8098  ldur x9,[x9, #0x6]
71036a809c  strb wzr,[x1, #0x15f]
71036a80a0  str xzr,[x1, #0x178]
71036a80a4  strb w8,[x1, #0x168]
71036a80a8  str x9,[x11]
71036a80ac  add x9,x1,#0x169
71036a80b0  add x11,x1,#0x187
71036a80b4  str x10,[x9]
71036a80b8  adrp x9,0x71042d4000
71036a80bc  add x9,x9,#0xf14
71036a80c0  ldr x10,[x9]
71036a80c4  ldur x9,[x9, #0x6]
71036a80c8  strb wzr,[x1, #0x177]
71036a80cc  str xzr,[x1, #0x190]
71036a80d0  strb w8,[x1, #0x180]
71036a80d4  str x9,[x11]
71036a80d8  add x9,x1,#0x181
71036a80dc  str x10,[x9]
71036a80e0  adrp x9,0x7104464000
71036a80e4  add x9,x9,#0x6eb
71036a80e8  ldr x10,[x9]
71036a80ec  ldur x9,[x9, #0x6]
71036a80f0  add x11,x1,#0x19f
71036a80f4  strb wzr,[x1, #0x18f]
71036a80f8  str xzr,[x1, #0x1a8]
71036a80fc  strb w8,[x1, #0x198]
71036a8100  str x9,[x11]
71036a8104  add x9,x1,#0x199
71036a8108  str x10,[x9]
71036a810c  adrp x9,0x71043ef000
71036a8110  add x9,x9,#0x3fd
71036a8114  ldr x10,[x9]
71036a8118  ldur x9,[x9, #0x6]
71036a811c  add x11,x1,#0x1b7
71036a8120  strb wzr,[x1, #0x1a7]
71036a8124  str xzr,[x1, #0x1c0]
71036a8128  strb w8,[x1, #0x1b0]
71036a812c  str x9,[x11]
71036a8130  add x9,x1,#0x1b1
71036a8134  str x10,[x9]
71036a8138  adrp x9,0x71043bd000
71036a813c  add x9,x9,#0x161
71036a8140  ldr x10,[x9]
71036a8144  ldur x9,[x9, #0x6]
71036a8148  add x11,x1,#0x1cf
71036a814c  strb wzr,[x1, #0x1bf]
71036a8150  str xzr,[x1, #0x1d8]
71036a8154  strb w8,[x1, #0x1c8]
71036a8158  str x9,[x11]
71036a815c  add x9,x1,#0x1c9
71036a8160  str x10,[x9]
71036a8164  adrp x9,0x7104420000
71036a8168  add x9,x9,#0xfc2
71036a816c  ldr x10,[x9]
71036a8170  ldur x9,[x9, #0x6]
71036a8174  add x11,x1,#0x1e7
71036a8178  strb wzr,[x1, #0x1d7]
71036a817c  str xzr,[x1, #0x1f0]
71036a8180  strb w8,[x1, #0x1e0]
71036a8184  str x9,[x11]
71036a8188  add x9,x1,#0x1e1
71036a818c  str x10,[x9]
71036a8190  adrp x9,0x7104290000
71036a8194  add x9,x9,#0x548
71036a8198  ldr x10,[x9]
71036a819c  ldur x9,[x9, #0x6]
71036a81a0  add x11,x1,#0x1ff
71036a81a4  strb wzr,[x1, #0x1ef]
71036a81a8  str xzr,[x1, #0x208]
71036a81ac  strb w8,[x1, #0x1f8]
71036a81b0  str x9,[x11]
71036a81b4  add x9,x1,#0x1f9
71036a81b8  str x10,[x9]
71036a81bc  strb w8,[x1, #0x210]
71036a81c0  adrp x8,0x710436a000
71036a81c4  add x8,x8,#0xf12
71036a81c8  ldr x9,[x8]
71036a81cc  ldur x8,[x8, #0x6]
71036a81d0  add x10,x1,#0x217
71036a81d4  strb wzr,[x1, #0x207]
71036a81d8  str xzr,[x1, #0x220]
71036a81dc  str x8,[x10]
71036a81e0  add x8,x1,#0x211
71036a81e4  str x9,[x8]
71036a81e8  strb wzr,[x1, #0x21f]
71036a81ec  bl 0x71000001c0
71036a81f0  adrp x0,0x7105339000
71036a81f4  add x0,x0,#0xd80
71036a81f8  bl 0x71039c06c0
71036a81fc  ldur w0,[x29, #-0x4]
71036a8200  b 0x71036a7dec
