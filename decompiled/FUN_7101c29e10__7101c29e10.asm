// addr:      7101c29e10
// offset:    0x1c29e10
// name:      FUN_7101c29e10
// mangled:   
// size:      564

7101c29e10  stp x28,x27,[sp, #-0x60]!
7101c29e14  stp x26,x25,[sp, #0x10]
7101c29e18  stp x24,x23,[sp, #0x20]
7101c29e1c  stp x22,x21,[sp, #0x30]
7101c29e20  stp x20,x19,[sp, #0x40]
7101c29e24  stp x29,x30,[sp, #0x50]
7101c29e28  add x29,sp,#0x50
7101c29e2c  ldrb w8,[x0, #0x90]
7101c29e30  cbz w8,0x7101c2a020
7101c29e34  mov x20,x0
7101c29e38  ldr x8,[x20, #0x58]!
7101c29e3c  ldr x9,[x20, #0x8]
7101c29e40  mov x19,x0
7101c29e44  cmp x9,x8
7101c29e48  b.eq 0x7101c2a020
7101c29e4c  mov x24,xzr
7101c29e50  mov w25,#0x48
7101c29e54  adrp x21,0x710437c000
7101c29e58  add x21,x21,#0x4b5
7101c29e5c  adrp x27,0x710532f000
7101c29e60  adrp x26,0x7104862000
7101c29e64  add x26,x26,#0x960
7101c29e68  cbz x24,0x7101c2a00c
7101c29e6c  ldr x22,[x19, #0x40]
7101c29e70  ldr x8,[x22]
7101c29e74  ldr x23,[x8]
7101c29e78  str wzr,[x8, #0x10]
7101c29e7c  ldr x8,[x23, #0x10]
7101c29e80  str x23,[x8]
7101c29e84  str w25,[x8, #0x8]
7101c29e88  ldp x9,x8,[x23, #0x10]
7101c29e8c  add x10,x9,#0x10
7101c29e90  str x10,[x23, #0x10]
7101c29e94  ldr x10,[x8, #0xc8]
7101c29e98  str x9,[x23, #0x10]
7101c29e9c  cmp x10,x23
7101c29ea0  b.eq 0x7101c29ec0
7101c29ea4  mov x0,x23
7101c29ea8  mov x1,x21
7101c29eac  bl 0x71038f4b20
7101c29eb0  orr w1,wzr,#0xfffffffe
7101c29eb4  mov x0,x23
7101c29eb8  bl 0x71038f4fc0
7101c29ebc  b 0x7101c29f2c
7101c29ec0  ldr x8,[x8, #0x40]
7101c29ec4  ldr w9,[x8, #0xc]
7101c29ec8  cmp w9,#0x2
7101c29ecc  b.cc 0x7101c29edc
7101c29ed0  ldr x8,[x8, #0x10]
7101c29ed4  add x1,x8,#0x10
7101c29ed8  b 0x7101c29f20
7101c29edc  ldr x9,[x8, #0x18]
7101c29ee0  ldrb w8,[x8, #0xb]
7101c29ee4  mov w10,#0xffffffff
7101c29ee8  lsl x8,x10,x8
7101c29eec  mvn w8,w8
7101c29ef0  and x8,x8,#0x2
7101c29ef4  add x1,x9,x8, LSL #0x5
7101c29ef8  ldr w8,[x1, #0x18]
7101c29efc  cmp w8,#0x13
7101c29f00  b.ne 0x7101c29f10
7101c29f04  ldr x8,[x1, #0x10]
7101c29f08  cmp x8,#0x2
7101c29f0c  b.eq 0x7101c29f20
7101c29f10  ldrsw x8,[x1, #0x1c]
7101c29f14  add x1,x1,x8, LSL #0x5
7101c29f18  cbnz w8,0x7101c29ef8
7101c29f1c  mov x1,x26
7101c29f20  mov x0,x23
7101c29f24  mov x2,x21
7101c29f28  bl 0x71038f4d40
7101c29f2c  ldr x9,[x23, #0x10]
7101c29f30  sub x8,x9,#0x10
7101c29f34  cmp x8,x26
7101c29f38  b.eq 0x7101c29f98
7101c29f3c  ldur w9,[x9, #-0x8]
7101c29f40  and w9,w9,#0xf
7101c29f44  cmp w9,#0x6
7101c29f48  b.ne 0x7101c29f98
7101c29f4c  ldr x8,[x22]
7101c29f50  ldr x8,[x8]
7101c29f54  ldr x10,[x8, #0x10]
7101c29f58  sxtw x9,w24
7101c29f5c  str x9,[x10]
7101c29f60  mov w9,#0x13
7101c29f64  str w9,[x10, #0x8]
7101c29f68  ldr x9,[x8, #0x10]
7101c29f6c  add x9,x9,#0x10
7101c29f70  str x9,[x8, #0x10]
7101c29f74  ldr x8,[x22]
7101c29f78  ldr w9,[x8, #0x10]
7101c29f7c  add w9,w9,#0x1
7101c29f80  mov w1,#0x1
7101c29f84  mov x0,x22
7101c29f88  str w9,[x8, #0x10]
7101c29f8c  bl 0x7103377130
7101c29f90  mov w22,w0
7101c29f94  b 0x7101c29fa0
7101c29f98  mov w22,wzr
7101c29f9c  str x8,[x23, #0x10]
7101c29fa0  ldp x8,x9,[x19, #0x58]
7101c29fa4  sub x9,x9,x8
7101c29fa8  asr x9,x9,#0x3
7101c29fac  cmp x9,x24
7101c29fb0  b.ls 0x7101c2a03c
7101c29fb4  ldr x23,[x8, x24, LSL #0x3]
7101c29fb8  ldr x8,[x27, #0x730]
7101c29fbc  ldr x28,[x8, #0x8]
7101c29fc0  ldr x0,[x28, #0x178]
7101c29fc4  mov x1,x23
7101c29fc8  bl 0x71032b1e40
7101c29fcc  tbnz w0,#0x1f,0x7101c2a008
7101c29fd0  ldr x0,[x28, #0x178]
7101c29fd4  mov x1,x23
7101c29fd8  bl 0x71032b1e40
7101c29fdc  lsr w9,w0,#0x5
7101c29fe0  mov w8,#0x1
7101c29fe4  add x9,x19,w9, UXTW  #0x2
7101c29fe8  lsl w8,w8,w0
7101c29fec  cbz w22,0x7101c29ffc
7101c29ff0  ldr w10,[x9, #0x80]
7101c29ff4  orr w8,w10,w8
7101c29ff8  b 0x7101c2a004
7101c29ffc  ldr w10,[x9, #0x80]
7101c2a000  bic w8,w10,w8
7101c2a004  str w8,[x9, #0x80]
7101c2a008  ldp x8,x9,[x19, #0x58]
7101c2a00c  sub x10,x9,x8
7101c2a010  add x24,x24,#0x1
7101c2a014  asr x10,x10,#0x3
7101c2a018  cmp x10,x24
7101c2a01c  b.hi 0x7101c29e68
7101c2a020  ldp x29,x30,[sp, #0x50]
7101c2a024  ldp x20,x19,[sp, #0x40]
7101c2a028  ldp x22,x21,[sp, #0x30]
7101c2a02c  ldp x24,x23,[sp, #0x20]
7101c2a030  ldp x26,x25,[sp, #0x10]
7101c2a034  ldp x28,x27,[sp], #0x60
7101c2a038  ret
7101c2a03c  mov x0,x20
7101c2a040  bl 0x71039c1330
