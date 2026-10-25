// addr:      7101e6b8e0
// offset:    0x1e6b8e0
// name:      FUN_7101e6b8e0
// mangled:   
// size:      792

7101e6b8e0  str d8,[sp, #-0x60]!
7101e6b8e4  stp x26,x25,[sp, #0x10]
7101e6b8e8  stp x24,x23,[sp, #0x20]
7101e6b8ec  stp x22,x21,[sp, #0x30]
7101e6b8f0  stp x20,x19,[sp, #0x40]
7101e6b8f4  stp x29,x30,[sp, #0x50]
7101e6b8f8  add x29,sp,#0x50
7101e6b8fc  mov x19,x0
7101e6b900  strb wzr,[x0, #0x4c0]
7101e6b904  strb wzr,[x0, #0x494]
7101e6b908  add x0,x0,#0x310
7101e6b90c  mov w1,wzr
7101e6b910  bl 0x7101e98dd0
7101e6b914  ldr x21,[x19, #0x330]
7101e6b918  ldr x8,[x21, #0x18]
7101e6b91c  ldr x20,[x8, #0x8]
7101e6b920  cbz x20,0x7101e6ba08
7101e6b924  ldrb w9,[x8, #0x10]
7101e6b928  cbz w9,0x7101e6b9f4
7101e6b92c  ldr x8,[x8]
7101e6b930  ldr x23,[x8, #0x80]
7101e6b934  add x22,x8,#0x88
7101e6b938  cmp x23,x22
7101e6b93c  b.eq 0x7101e6b9f4
7101e6b940  ldr x0,[x23, #0x68]
7101e6b944  ldr x8,[x0]
7101e6b948  ldr x8,[x8, #0x148]
7101e6b94c  blr x8
7101e6b950  tbz w0,#0x0,0x7101e6b990
7101e6b954  ldr x8,[x20]
7101e6b958  ldr x1,[x23, #0x68]
7101e6b95c  mov x0,x20
7101e6b960  ldr x8,[x8, #0x120]
7101e6b964  blr x8
7101e6b968  tbz w0,#0x0,0x7101e6b990
7101e6b96c  ldr x0,[x23, #0x68]
7101e6b970  ldr x8,[x0]
7101e6b974  ldr x8,[x8, #0x178]
7101e6b978  blr x8
7101e6b97c  ldr x0,[x23, #0x68]
7101e6b980  ldr x8,[x0]
7101e6b984  ldr x8,[x8, #0x140]
7101e6b988  mov w1,wzr
7101e6b98c  blr x8
7101e6b990  ldr x8,[x23, #0x8]
7101e6b994  cbz x8,0x7101e6b9a8
7101e6b998  mov x23,x8
7101e6b99c  ldr x8,[x8]
7101e6b9a0  cbnz x8,0x7101e6b998
7101e6b9a4  b 0x7101e6b9d4
7101e6b9a8  mov x8,x23
7101e6b9ac  ldr x9,[x8, #0x10]!
7101e6b9b0  ldr x10,[x9]
7101e6b9b4  cmp x10,x23
7101e6b9b8  b.eq 0x7101e6b9e0
7101e6b9bc  ldr x9,[x8]
7101e6b9c0  mov x8,x9
7101e6b9c4  ldr x23,[x8, #0x10]!
7101e6b9c8  ldr x10,[x23]
7101e6b9cc  cmp x10,x9
7101e6b9d0  b.ne 0x7101e6b9bc
7101e6b9d4  cmp x23,x22
7101e6b9d8  b.ne 0x7101e6b940
7101e6b9dc  b 0x7101e6b9ec
7101e6b9e0  mov x23,x9
7101e6b9e4  cmp x23,x22
7101e6b9e8  b.ne 0x7101e6b940
7101e6b9ec  ldr x8,[x21, #0x18]
7101e6b9f0  ldr x20,[x8, #0x8]
7101e6b9f4  ldr x8,[x20]
7101e6b9f8  ldr x8,[x8, #0x168]
7101e6b9fc  fmov s0,0x3f800000
7101e6ba00  mov x0,x20
7101e6ba04  blr x8
7101e6ba08  fmov s8,0x3f800000
7101e6ba0c  ldr x0,[x19, #0x210]
7101e6ba10  adrp x1,0x7104412000
7101e6ba14  add x1,x1,#0xf3e
7101e6ba18  mov v0.16B,v8.16B
7101e6ba1c  mov w8,#0x1
7101e6ba20  strb w8,[x19, #0x338]
7101e6ba24  add x20,x19,#0x1f8
7101e6ba28  strb wzr,[x19, #0x218]
7101e6ba2c  bl 0x7103778300
7101e6ba30  ldr x8,[x19, #0x200]
7101e6ba34  ldrb w9,[x8, #0x8]!
7101e6ba38  cmp w9,#0x1
7101e6ba3c  cset w9,ne
7101e6ba40  mov w24,#0x48
7101e6ba44  umaddl x22,w9,w24,x8
7101e6ba48  adrp x21,0x71042f8000
7101e6ba4c  add x21,x21,#0x978
7101e6ba50  mov x1,x21
7101e6ba54  add x0,x22,#0x18
7101e6ba58  bl 0x710377a120
7101e6ba5c  add x0,x22,#0x28
7101e6ba60  mov x1,x21
7101e6ba64  bl 0x710377a120
7101e6ba68  add x0,x22,#0x38
7101e6ba6c  mov x1,x21
7101e6ba70  bl 0x710377a120
7101e6ba74  ldr x8,[x19, #0x200]
7101e6ba78  ldrb w9,[x8, #0x8]!
7101e6ba7c  cmp w9,#0x1
7101e6ba80  cset w9,ne
7101e6ba84  umaddl x22,w9,w24,x8
7101e6ba88  ldr x0,[x22, #0x10]
7101e6ba8c  mov v0.16B,v8.16B
7101e6ba90  adrp x21,0x710433a000
7101e6ba94  add x21,x21,#0x880
7101e6ba98  mov x1,x21
7101e6ba9c  bl 0x7103778300
7101e6baa0  ldr x0,[x22, #0x10]
7101e6baa4  mov v0.16B,v8.16B
7101e6baa8  adrp x22,0x710425f000
7101e6baac  add x22,x22,#0xba5
7101e6bab0  mov x1,x22
7101e6bab4  bl 0x7103778300
7101e6bab8  mov w1,#0x1
7101e6babc  mov x0,x20
7101e6bac0  bl 0x7101e96fc0
7101e6bac4  mov x25,#0x23f5
7101e6bac8  movk x25,#0x57a5, LSL #16
7101e6bacc  movk x25,#0xf, LSL #32
7101e6bad0  str x25,[sp, #0x8]
7101e6bad4  ldr x8,[x19, #0x200]
7101e6bad8  ldrb w9,[x8, #0x8]
7101e6badc  ldr x0,[x8]
7101e6bae0  cmp w9,#0x1
7101e6bae4  cset w1,ne
7101e6bae8  add x2,sp,#0x8
7101e6baec  bl 0x7103772070
7101e6baf0  ldr x8,[x19, #0x200]
7101e6baf4  ldrb w9,[x8, #0x8]!
7101e6baf8  cmp w9,#0x0
7101e6bafc  cset w9,ne
7101e6bb00  umaddl x26,w9,w24,x8
7101e6bb04  adrp x23,0x710425f000
7101e6bb08  add x23,x23,#0xae1
7101e6bb0c  mov x1,x23
7101e6bb10  add x0,x26,#0x18
7101e6bb14  bl 0x710377a120
7101e6bb18  add x0,x26,#0x28
7101e6bb1c  mov x1,x23
7101e6bb20  bl 0x710377a120
7101e6bb24  add x0,x26,#0x38
7101e6bb28  mov x1,x23
7101e6bb2c  bl 0x710377a120
7101e6bb30  ldr x8,[x19, #0x200]
7101e6bb34  ldrb w9,[x8, #0x8]!
7101e6bb38  cmp w9,#0x0
7101e6bb3c  cset w9,ne
7101e6bb40  umaddl x23,w9,w24,x8
7101e6bb44  ldr x0,[x23, #0x10]
7101e6bb48  mov v0.16B,v8.16B
7101e6bb4c  mov x1,x21
7101e6bb50  bl 0x7103778300
7101e6bb54  ldr x0,[x23, #0x10]
7101e6bb58  mov v0.16B,v8.16B
7101e6bb5c  mov x1,x22
7101e6bb60  bl 0x7103778300
7101e6bb64  mov x0,x20
7101e6bb68  mov w1,wzr
7101e6bb6c  bl 0x7101e96fc0
7101e6bb70  str x25,[sp, #0x8]
7101e6bb74  ldr x8,[x19, #0x200]
7101e6bb78  ldrb w9,[x8, #0x8]
7101e6bb7c  ldr x0,[x8]
7101e6bb80  cmp w9,#0x0
7101e6bb84  cset w1,ne
7101e6bb88  add x2,sp,#0x8
7101e6bb8c  bl 0x7103772070
7101e6bb90  ldr x8,[x19, #0x200]
7101e6bb94  strb wzr,[x8, #0x98]
7101e6bb98  ldrsw x8,[x19, #0x1cc]
7101e6bb9c  cmp w8,#0x13
7101e6bba0  b.cs 0x7101e6bbf4
7101e6bba4  add x8,x19,x8, LSL #0x2
7101e6bba8  orr w9,wzr,#0x3
7101e6bbac  str w9,[x8, #0x180]
7101e6bbb0  ldr w8,[x19, #0x1cc]
7101e6bbb4  cmp w8,#0x11
7101e6bbb8  b.gt 0x7101e6bbd8
7101e6bbbc  add w8,w8,#0x1
7101e6bbc0  cmp w8,#0x13
7101e6bbc4  str w8,[x19, #0x1cc]
7101e6bbc8  b.cs 0x7101e6bbf4
7101e6bbcc  add x8,x19,w8, SXTW  #0x2
7101e6bbd0  mov w9,#0xd
7101e6bbd4  str w9,[x8, #0x180]
7101e6bbd8  ldp x29,x30,[sp, #0x50]
7101e6bbdc  ldp x20,x19,[sp, #0x40]
7101e6bbe0  ldp x22,x21,[sp, #0x30]
7101e6bbe4  ldp x24,x23,[sp, #0x20]
7101e6bbe8  ldp x26,x25,[sp, #0x10]
7101e6bbec  ldr d8,[sp], #0x60
7101e6bbf0  ret
7101e6bbf4  bl 0x71039c2650
