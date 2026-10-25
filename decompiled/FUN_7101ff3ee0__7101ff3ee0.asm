// addr:      7101ff3ee0
// offset:    0x1ff3ee0
// name:      FUN_7101ff3ee0
// mangled:   
// size:      436

7101ff3ee0  stp x24,x23,[sp, #-0x40]!
7101ff3ee4  stp x22,x21,[sp, #0x10]
7101ff3ee8  stp x20,x19,[sp, #0x20]
7101ff3eec  stp x29,x30,[sp, #0x30]
7101ff3ef0  add x29,sp,#0x30
7101ff3ef4  ldur x8,[x0, #-0x8]
7101ff3ef8  cbz x8,0x7101ff407c
7101ff3efc  ldr x20,[x8, #0x48]
7101ff3f00  cbz x20,0x7101ff407c
7101ff3f04  ldr x9,[x0, #0x20]
7101ff3f08  ldr x9,[x9]
7101ff3f0c  ldr x8,[x0, #0x10]
7101ff3f10  adrp x23,0x7104862000
7101ff3f14  add x23,x23,#0x960
7101ff3f18  adrp x2,0x710430c000
7101ff3f1c  add x2,x2,#0x66a
7101ff3f20  add x9,x9,#0x10
7101ff3f24  cmp x9,x8
7101ff3f28  sub x22,x8,x9
7101ff3f2c  csel x1,x9,x23,cc
7101ff3f30  mov x19,x0
7101ff3f34  lsr x24,x22,#0x4
7101ff3f38  bl 0x71038f4d40
7101ff3f3c  ldr x9,[x19, #0x10]
7101ff3f40  sub x8,x9,#0x10
7101ff3f44  ldur w9,[x9, #-0x8]
7101ff3f48  and w9,w9,#0xf
7101ff3f4c  cmp w9,#0x2
7101ff3f50  b.eq 0x7101ff3f68
7101ff3f54  cmp w9,#0x7
7101ff3f58  b.ne 0x7101ff3f70
7101ff3f5c  ldr x9,[x8]
7101ff3f60  add x9,x9,#0x28
7101ff3f64  b 0x7101ff3f74
7101ff3f68  ldr x9,[x8]
7101ff3f6c  b 0x7101ff3f74
7101ff3f70  mov x9,xzr
7101ff3f74  str x8,[x19, #0x10]
7101ff3f78  blr x9
7101ff3f7c  mov w2,#0x1
7101ff3f80  mov x1,x19
7101ff3f84  mov x21,x0
7101ff3f88  bl 0x7101ff2160
7101ff3f8c  cmp w24,#0x2
7101ff3f90  b.lt 0x7101ff3fec
7101ff3f94  mov w1,#0x2
7101ff3f98  mov x0,x19
7101ff3f9c  mov x2,xzr
7101ff3fa0  bl 0x71038f45b0
7101ff3fa4  mov x2,x0
7101ff3fa8  cmp w24,#0x2
7101ff3fac  b.eq 0x7101ff404c
7101ff3fb0  ldr x8,[x19, #0x20]
7101ff3fb4  ldr x8,[x8]
7101ff3fb8  ldr x9,[x19, #0x10]
7101ff3fbc  add x8,x8,#0x30
7101ff3fc0  cmp x8,x9
7101ff3fc4  csel x8,x8,x23,cc
7101ff3fc8  ldr w9,[x8, #0x8]
7101ff3fcc  and w9,w9,#0xf
7101ff3fd0  cmp w9,#0x2
7101ff3fd4  b.eq 0x7101ff403c
7101ff3fd8  cmp w9,#0x7
7101ff3fdc  b.ne 0x7101ff4044
7101ff3fe0  ldr x8,[x8]
7101ff3fe4  add x8,x8,#0x28
7101ff3fe8  b 0x7101ff4048
7101ff3fec  tbnz w24,#0x1f,0x7101ff3ff8
7101ff3ff0  mov w2,wzr
7101ff3ff4  b 0x7101ff404c
7101ff3ff8  ldr x8,[x19, #0x20]
7101ff3ffc  ldr x8,[x8]
7101ff4000  lsl x10,x22,#0x1c
7101ff4004  ldr x9,[x19, #0x10]
7101ff4008  eor x10,x10,#-0x100000000
7101ff400c  add x8,x8,x10, ASR #0x1c
7101ff4010  add x8,x8,#0x10
7101ff4014  cmp x9,x8
7101ff4018  b.cs 0x7101ff4034
7101ff401c  add x10,x9,#0x10
7101ff4020  str x10,[x19, #0x10]
7101ff4024  str wzr,[x9, #0x8]
7101ff4028  ldr x9,[x19, #0x10]
7101ff402c  cmp x9,x8
7101ff4030  b.cc 0x7101ff401c
7101ff4034  mov w2,wzr
7101ff4038  b 0x7101ff4058
7101ff403c  ldr x8,[x8]
7101ff4040  b 0x7101ff4048
7101ff4044  mov x8,xzr
7101ff4048  ldr x20,[x8, #0x60]
7101ff404c  ldr x8,[x19, #0x10]
7101ff4050  neg x9,x22, LSL #0x1c
7101ff4054  add x8,x8,x9, ASR #0x1c
7101ff4058  str x8,[x19, #0x10]
7101ff405c  ldr x8,[x20]
7101ff4060  ldr x8,[x8, #0x1b8]
7101ff4064  mov x0,x20
7101ff4068  mov x1,x21
7101ff406c  blr x8
7101ff4070  cbz x21,0x7101ff407c
7101ff4074  mov x0,x21
7101ff4078  bl 0x710392eb40
7101ff407c  ldp x29,x30,[sp, #0x30]
7101ff4080  mov w0,wzr
7101ff4084  ldp x20,x19,[sp, #0x20]
7101ff4088  ldp x22,x21,[sp, #0x10]
7101ff408c  ldp x24,x23,[sp], #0x40
7101ff4090  ret
