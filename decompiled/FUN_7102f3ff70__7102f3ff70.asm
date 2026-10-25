// addr:      7102f3ff70
// offset:    0x2f3ff70
// name:      FUN_7102f3ff70
// mangled:   
// size:      664

7102f3ff70  str d8,[sp, #-0x30]!
7102f3ff74  str x21,[sp, #0x8]
7102f3ff78  stp x20,x19,[sp, #0x10]
7102f3ff7c  stp x29,x30,[sp, #0x20]
7102f3ff80  add x29,sp,#0x20
7102f3ff84  mov x19,x0
7102f3ff88  ldr x0,[x0, #0x10]
7102f3ff8c  ldr w8,[x0, #0x18]
7102f3ff90  mov v8.16B,v0.16B
7102f3ff94  cmp w8,#0x3
7102f3ff98  b.hi 0x7102f3ffd4
7102f3ff9c  adrp x9,0x7104521000
7102f3ffa0  add x9,x9,#0x980
7102f3ffa4  ldrsw x8,[x9, x8, LSL #0x2]
7102f3ffa8  add x8,x8,x9
7102f3ffac  br x8
7102f3ffb0  str wzr,[x0, #0x20]
7102f3ffb4  b 0x7102f3ffd4
7102f3ffb8  ldr x8,[x0]
7102f3ffbc  ldr x8,[x8, #0x20]
7102f3ffc0  b 0x7102f3ffcc
7102f3ffc4  ldr x8,[x0]
7102f3ffc8  ldr x8,[x8, #0x38]
7102f3ffcc  mov v0.16B,v8.16B
7102f3ffd0  blr x8
7102f3ffd4  ldr x0,[x19, #0x18]
7102f3ffd8  ldr w8,[x0, #0x18]
7102f3ffdc  cmp w8,#0x3
7102f3ffe0  b.hi 0x7102f4001c
7102f3ffe4  adrp x9,0x7104521000
7102f3ffe8  add x9,x9,#0x990
7102f3ffec  ldrsw x8,[x9, x8, LSL #0x2]
7102f3fff0  add x8,x8,x9
7102f3fff4  br x8
7102f3fff8  str wzr,[x0, #0x20]
7102f3fffc  b 0x7102f4001c
7102f40000  ldr x8,[x0]
7102f40004  ldr x8,[x8, #0x20]
7102f40008  b 0x7102f40014
7102f4000c  ldr x8,[x0]
7102f40010  ldr x8,[x8, #0x38]
7102f40014  mov v0.16B,v8.16B
7102f40018  blr x8
7102f4001c  ldr x0,[x19, #0x20]
7102f40020  ldr w8,[x0, #0x18]
7102f40024  cmp w8,#0x3
7102f40028  b.hi 0x7102f40064
7102f4002c  adrp x9,0x7104521000
7102f40030  add x9,x9,#0x9a0
7102f40034  ldrsw x8,[x9, x8, LSL #0x2]
7102f40038  add x8,x8,x9
7102f4003c  br x8
7102f40040  str wzr,[x0, #0x20]
7102f40044  b 0x7102f40064
7102f40048  ldr x8,[x0]
7102f4004c  ldr x8,[x8, #0x20]
7102f40050  b 0x7102f4005c
7102f40054  ldr x8,[x0]
7102f40058  ldr x8,[x8, #0x38]
7102f4005c  mov v0.16B,v8.16B
7102f40060  blr x8
7102f40064  ldr x8,[x19, #0x10]
7102f40068  ldr w8,[x8, #0x18]
7102f4006c  cbnz w8,0x7102f401f4
7102f40070  ldr x8,[x19, #0x18]
7102f40074  ldr w8,[x8, #0x18]
7102f40078  cbnz w8,0x7102f401f4
7102f4007c  ldrb w8,[x19, #0x38]
7102f40080  cbnz w8,0x7102f401f4
7102f40084  ldr x8,[x19, #0x30]
7102f40088  ldr x8,[x8, #0x300]
7102f4008c  ldr x9,[x8, #0x18]
7102f40090  ldp x8,x9,[x9]
7102f40094  cmp x8,x9
7102f40098  b.eq 0x7102f401ec
7102f4009c  mov x20,#0xdf99
7102f400a0  movk x20,#0xb569, LSL #16
7102f400a4  movk x20,#0x7, LSL #32
7102f400a8  mov x10,x8
7102f400ac  ldr x11,[x10], #0x8
7102f400b0  ldr x12,[x11, #0xa0]
7102f400b4  and x12,x12,#0xffffffffff
7102f400b8  cmp x12,x20
7102f400bc  b.eq 0x7102f400cc
7102f400c0  cmp x9,x10
7102f400c4  b.ne 0x7102f400ac
7102f400c8  b 0x7102f401ac
7102f400cc  ldr x21,[x11, #0x130]
7102f400d0  cbz x21,0x7102f401ac
7102f400d4  ldp x0,x1,[x21]
7102f400d8  adrp x2,0x71042a1000
7102f400dc  add x2,x2,#0x67e
7102f400e0  bl 0x71025f5420
7102f400e4  ldp x0,x1,[x21]
7102f400e8  adrp x2,0x71043bc000
7102f400ec  add x2,x2,#0xb6c
7102f400f0  bl 0x71025f5420
7102f400f4  ldr x8,[x19, #0x30]
7102f400f8  ldr x8,[x8, #0x300]
7102f400fc  ldr x9,[x8, #0x48]
7102f40100  ldr x8,[x8, #0x60]
7102f40104  ldr x9,[x9]
7102f40108  movi d0,#0x0
7102f4010c  mov v2.16B,v0.16B
7102f40110  ldr q1,[x9, #0x40]
7102f40114  mov v2.S[0x0],v1.S[0x2]
7102f40118  mov v1.D[0x1],v2.D[0x0]
7102f4011c  mov v2.16B,v0.16B
7102f40120  str q1,[x8, #0x30]
7102f40124  ldr q1,[x9, #0x50]
7102f40128  mov v2.S[0x0],v1.S[0x2]
7102f4012c  mov v1.D[0x1],v2.D[0x0]
7102f40130  mov v2.16B,v0.16B
7102f40134  str q1,[x8, #0x40]
7102f40138  ldr q1,[x9, #0x60]
7102f4013c  mov v2.S[0x0],v1.S[0x2]
7102f40140  mov v1.D[0x1],v2.D[0x0]
7102f40144  mov v2.16B,v0.16B
7102f40148  str q1,[x8, #0x50]
7102f4014c  ldr q1,[x9, #0x70]
7102f40150  mov v2.S[0x0],v1.S[0x2]
7102f40154  mov v1.D[0x1],v2.D[0x0]
7102f40158  mov v2.16B,v0.16B
7102f4015c  str q1,[x8, #0x60]
7102f40160  ldr q1,[x9, #0x80]
7102f40164  mov v2.S[0x0],v1.S[0x2]
7102f40168  mov v1.D[0x1],v2.D[0x0]
7102f4016c  mov v2.16B,v0.16B
7102f40170  str q1,[x8, #0x70]
7102f40174  ldrb w10,[x9, #0x90]
7102f40178  strb w10,[x8, #0x80]
7102f4017c  ldr q1,[x9, #0xa0]
7102f40180  mov v2.S[0x0],v1.S[0x2]
7102f40184  mov v1.D[0x1],v2.D[0x0]
7102f40188  str q1,[x8, #0x90]
7102f4018c  ldr q1,[x9, #0xb0]
7102f40190  mov v0.S[0x0],v1.S[0x2]
7102f40194  mov v1.D[0x1],v0.D[0x0]
7102f40198  str q1,[x8, #0xa0]
7102f4019c  ldr x8,[x19, #0x30]
7102f401a0  ldr x8,[x8, #0x300]
7102f401a4  ldr x9,[x8, #0x18]
7102f401a8  ldp x8,x9,[x9]
7102f401ac  cmp x8,x9
7102f401b0  b.eq 0x7102f401ec
7102f401b4  ldr x10,[x8], #0x8
7102f401b8  ldr x11,[x10, #0xa0]
7102f401bc  and x11,x11,#0xffffffffff
7102f401c0  cmp x11,x20
7102f401c4  b.eq 0x7102f401d4
7102f401c8  cmp x9,x8
7102f401cc  b.ne 0x7102f401b4
7102f401d0  b 0x7102f401ec
7102f401d4  ldr x8,[x10, #0x130]
7102f401d8  cbz x8,0x7102f401ec
7102f401dc  ldp x0,x1,[x8]
7102f401e0  adrp x2,0x710436a000
7102f401e4  add x2,x2,#0x9e7
7102f401e8  bl 0x71025f5420
7102f401ec  mov w8,#0x1
7102f401f0  strb w8,[x19, #0x38]
7102f401f4  ldp x29,x30,[sp, #0x20]
7102f401f8  ldr x21,[sp, #0x8]
7102f401fc  ldp x20,x19,[sp, #0x10]
7102f40200  ldr d8,[sp], #0x30
7102f40204  ret
