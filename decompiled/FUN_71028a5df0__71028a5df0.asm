// addr:      71028a5df0
// offset:    0x28a5df0
// name:      FUN_71028a5df0
// mangled:   
// size:      728

71028a5df0  stp x24,x23,[sp, #-0x40]!
71028a5df4  stp x22,x21,[sp, #0x10]
71028a5df8  stp x20,x19,[sp, #0x20]
71028a5dfc  stp x29,x30,[sp, #0x30]
71028a5e00  add x29,sp,#0x30
71028a5e04  ldp x8,x9,[x0, #0x1c0]
71028a5e08  sub x9,x9,x8
71028a5e0c  mov w23,w1
71028a5e10  asr x9,x9,#0x4
71028a5e14  mov w20,w1
71028a5e18  mov x19,x0
71028a5e1c  cmp x9,x23
71028a5e20  b.ls 0x71028a5e8c
71028a5e24  add x8,x8,x23, LSL #0x4
71028a5e28  ldp x9,x8,[x8]
71028a5e2c  cbz x8,0x71028a5e44
71028a5e30  add x10,x8,#0x8
71028a5e34  ldxr x11,[x10]
71028a5e38  add x11,x11,#0x1
71028a5e3c  stxr w12,x11,[x10]
71028a5e40  cbnz w12,0x71028a5e34
71028a5e44  ldr x21,[x19, #0x1a0]
71028a5e48  stp x9,x8,[x19, #0x198]
71028a5e4c  cbz x21,0x71028a5e80
71028a5e50  add x8,x21,#0x8
71028a5e54  ldaxr x9,[x8]
71028a5e58  sub x10,x9,#0x1
71028a5e5c  stlxr w11,x10,[x8]
71028a5e60  cbnz w11,0x71028a5e54
71028a5e64  cbnz x9,0x71028a5e80
71028a5e68  ldr x8,[x21]
71028a5e6c  ldr x8,[x8, #0x10]
71028a5e70  mov x0,x21
71028a5e74  blr x8
71028a5e78  mov x0,x21
71028a5e7c  bl 0x71039c2670
71028a5e80  mov w1,#0x1
71028a5e84  mov x0,x19
71028a5e88  bl 0x71025e46e0
71028a5e8c  ldr x21,[x19, #0x300]
71028a5e90  mov w8,#0x1
71028a5e94  lsl w22,w8,w20
71028a5e98  mov w1,w22
71028a5e9c  mov x0,x21
71028a5ea0  bl 0x710262bb40
71028a5ea4  mvn w1,w22
71028a5ea8  mov x0,x21
71028a5eac  bl 0x710262beb0
71028a5eb0  ldr x0,[x19, #0x300]
71028a5eb4  ldr x8,[x0, #0x48]
71028a5eb8  ldr x9,[x8, x23, LSL #0x3]
71028a5ebc  ldr x8,[x0, #0x60]
71028a5ec0  add x10,x9,#0x8
71028a5ec4  cmp x8,x10
71028a5ec8  b.eq 0x71028a5ee8
71028a5ecc  ldp x1,x2,[x9, #0x8]
71028a5ed0  mov x0,x8
71028a5ed4  bl 0x7102616cf0
71028a5ed8  ldr x0,[x19, #0x300]
71028a5edc  ldr x8,[x0, #0x48]
71028a5ee0  ldr x9,[x8, x23, LSL #0x3]
71028a5ee4  ldr x8,[x0, #0x60]
71028a5ee8  add x10,x9,#0x20
71028a5eec  add x8,x8,#0x18
71028a5ef0  cmp x8,x10
71028a5ef4  b.eq 0x71028a5f08
71028a5ef8  ldp x1,x2,[x9, #0x20]
71028a5efc  mov x0,x8
71028a5f00  bl 0x7102616cf0
71028a5f04  ldr x0,[x19, #0x300]
71028a5f08  mov w1,w20
71028a5f0c  bl 0x710262c200
71028a5f10  ldr x8,[x19, #0x300]
71028a5f14  ldr x9,[x8, #0x48]
71028a5f18  lsl x21,x23,#0x3
71028a5f1c  ldr x9,[x9, x21, LSL #0x0]
71028a5f20  movi d0,#0x0
71028a5f24  mov v2.16B,v0.16B
71028a5f28  ldr q1,[x9, #0x40]
71028a5f2c  ldr x8,[x8, #0x60]
71028a5f30  mov v2.S[0x0],v1.S[0x2]
71028a5f34  mov w1,w20
71028a5f38  mov v1.D[0x1],v2.D[0x0]
71028a5f3c  mov v2.16B,v0.16B
71028a5f40  str q1,[x8, #0x30]
71028a5f44  ldr q1,[x9, #0x50]
71028a5f48  mov v2.S[0x0],v1.S[0x2]
71028a5f4c  mov v1.D[0x1],v2.D[0x0]
71028a5f50  mov v2.16B,v0.16B
71028a5f54  str q1,[x8, #0x40]
71028a5f58  ldr q1,[x9, #0x60]
71028a5f5c  mov v2.S[0x0],v1.S[0x2]
71028a5f60  mov v1.D[0x1],v2.D[0x0]
71028a5f64  mov v2.16B,v0.16B
71028a5f68  str q1,[x8, #0x50]
71028a5f6c  ldr q1,[x9, #0x70]
71028a5f70  mov v2.S[0x0],v1.S[0x2]
71028a5f74  mov v1.D[0x1],v2.D[0x0]
71028a5f78  mov v2.16B,v0.16B
71028a5f7c  str q1,[x8, #0x60]
71028a5f80  ldr q1,[x9, #0x80]
71028a5f84  mov v2.S[0x0],v1.S[0x2]
71028a5f88  mov v1.D[0x1],v2.D[0x0]
71028a5f8c  mov v2.16B,v0.16B
71028a5f90  str q1,[x8, #0x70]
71028a5f94  ldrb w10,[x9, #0x90]
71028a5f98  strb w10,[x8, #0x80]
71028a5f9c  ldr q1,[x9, #0xa0]
71028a5fa0  mov v2.S[0x0],v1.S[0x2]
71028a5fa4  mov v1.D[0x1],v2.D[0x0]
71028a5fa8  str q1,[x8, #0x90]
71028a5fac  ldr q1,[x9, #0xb0]
71028a5fb0  mov v0.S[0x0],v1.S[0x2]
71028a5fb4  mov v1.D[0x1],v0.D[0x0]
71028a5fb8  str q1,[x8, #0xa0]
71028a5fbc  ldr x0,[x19, #0x308]
71028a5fc0  bl 0x7102624870
71028a5fc4  ldr x0,[x19, #0x308]
71028a5fc8  mov w1,w20
71028a5fcc  bl 0x7102624740
71028a5fd0  adrp x8,0x71050ef000
71028a5fd4  add x8,x8,#0xec8
71028a5fd8  ldr x0,[x19, #0x318]
71028a5fdc  ldr x1,[x8, x21, LSL #0x0]
71028a5fe0  bl 0x7102633910
71028a5fe4  adrp x8,0x71050ef000
71028a5fe8  add x8,x8,#0xee0
71028a5fec  ldr x0,[x19, #0x318]
71028a5ff0  ldr x1,[x8, x21, LSL #0x0]
71028a5ff4  mov w2,#0x1
71028a5ff8  mov w22,#0x1
71028a5ffc  bl 0x7102633a10
71028a6000  adrp x8,0x71050ef000
71028a6004  add x8,x8,#0xef8
71028a6008  ldr x0,[x19, #0x318]
71028a600c  ldr x1,[x8, x21, LSL #0x0]
71028a6010  mov w2,#0x1
71028a6014  bl 0x7102633b90
71028a6018  adrp x8,0x71050ef000
71028a601c  add x8,x8,#0xf10
71028a6020  ldr x0,[x19, #0x318]
71028a6024  ldr x1,[x8, x21, LSL #0x0]
71028a6028  bl 0x7102633800
71028a602c  ldr x8,[x19, #0x318]
71028a6030  adrp x9,0x71050ef000
71028a6034  add x9,x9,#0xf28
71028a6038  ldr x1,[x9, x21, LSL #0x0]
71028a603c  ldr x0,[x8, #0x10]
71028a6040  bl 0x71025f7350
71028a6044  ldr x8,[x19, #0x330]
71028a6048  ldr x0,[x8]
71028a604c  ldp x23,x24,[x0, #0x50]
71028a6050  cmp x23,x24
71028a6054  b.eq 0x71028a60b4
71028a6058  ldr x21,[x23]
71028a605c  ldr w9,[x21, #0xc]
71028a6060  ldrb w8,[x21, #0x18]
71028a6064  cmp w9,w20
71028a6068  b.ne 0x71028a6088
71028a606c  cbnz w8,0x71028a60a0
71028a6070  ldr x8,[x21]
71028a6074  ldr x8,[x8, #0x10]
71028a6078  mov x0,x21
71028a607c  blr x8
71028a6080  strb w22,[x21, #0x18]
71028a6084  b 0x71028a60a0
71028a6088  cbz w8,0x71028a60a0
71028a608c  ldr x8,[x21]
71028a6090  strb wzr,[x21, #0x18]
71028a6094  ldr x8,[x8, #0x18]
71028a6098  mov x0,x21
71028a609c  blr x8
71028a60a0  add x23,x23,#0x8
71028a60a4  cmp x24,x23
71028a60a8  b.ne 0x71028a6058
71028a60ac  ldr x8,[x19, #0x330]
71028a60b0  ldr x0,[x8]
71028a60b4  ldp x29,x30,[sp, #0x30]
71028a60b8  ldp x20,x19,[sp, #0x20]
71028a60bc  ldp x22,x21,[sp, #0x10]
71028a60c0  ldp x24,x23,[sp], #0x40
71028a60c4  b 0x7102630ae0
