// addr:      7102d7b2e0
// offset:    0x2d7b2e0
// name:      FUN_7102d7b2e0
// mangled:   
// size:      328

7102d7b2e0  str x21,[sp, #-0x30]!
7102d7b2e4  stp x20,x19,[sp, #0x10]
7102d7b2e8  stp x29,x30,[sp, #0x20]
7102d7b2ec  add x29,sp,#0x20
7102d7b2f0  mov x19,x0
7102d7b2f4  ldr x0,[x0, #0x38]
7102d7b2f8  ldr x8,[x0]
7102d7b2fc  ldr x8,[x8, #0x40]
7102d7b300  blr x8
7102d7b304  ldp x20,x21,[x19, #0x40]
7102d7b308  cmp x20,x21
7102d7b30c  b.eq 0x7102d7b328
7102d7b310  ldr x0,[x20], #0x8
7102d7b314  ldr x8,[x0]
7102d7b318  ldr x8,[x8, #0x40]
7102d7b31c  blr x8
7102d7b320  cmp x21,x20
7102d7b324  b.ne 0x7102d7b310
7102d7b328  ldr x8,[x19, #0x8]
7102d7b32c  ldr x9,[x8, #0x338]
7102d7b330  ldr x9,[x9]
7102d7b334  ldr x0,[x9, #0x8]
7102d7b338  cbz x0,0x7102d7b354
7102d7b33c  ldr x8,[x0]
7102d7b340  ldr x8,[x8, #0x58]
7102d7b344  mov w1,#0x1b
7102d7b348  mov w2,#0xffffffff
7102d7b34c  blr x8
7102d7b350  ldr x8,[x19, #0x8]
7102d7b354  ldr x8,[x8, #0x300]
7102d7b358  ldr x9,[x8, #0x18]
7102d7b35c  ldp x8,x9,[x9]
7102d7b360  cmp x8,x9
7102d7b364  b.eq 0x7102d7b418
7102d7b368  mov x10,#0xdf99
7102d7b36c  movk x10,#0xb569, LSL #16
7102d7b370  movk x10,#0x7, LSL #32
7102d7b374  mov x11,x8
7102d7b378  ldr x12,[x11], #0x8
7102d7b37c  ldr x13,[x12, #0xa0]
7102d7b380  and x13,x13,#0xffffffffff
7102d7b384  cmp x13,x10
7102d7b388  b.eq 0x7102d7b398
7102d7b38c  cmp x9,x11
7102d7b390  b.ne 0x7102d7b378
7102d7b394  b 0x7102d7b3c0
7102d7b398  ldr x10,[x12, #0x130]
7102d7b39c  cbz x10,0x7102d7b3c0
7102d7b3a0  ldp x0,x1,[x10]
7102d7b3a4  adrp x2,0x71042a1000
7102d7b3a8  add x2,x2,#0x67e
7102d7b3ac  bl 0x71025f5420
7102d7b3b0  ldr x8,[x19, #0x8]
7102d7b3b4  ldr x8,[x8, #0x300]
7102d7b3b8  ldr x9,[x8, #0x18]
7102d7b3bc  ldp x8,x9,[x9]
7102d7b3c0  cmp x8,x9
7102d7b3c4  b.eq 0x7102d7b418
7102d7b3c8  mov x10,#0x8e51
7102d7b3cc  movk x10,#0x9266, LSL #16
7102d7b3d0  movk x10,#0x7, LSL #32
7102d7b3d4  ldr x11,[x8], #0x8
7102d7b3d8  ldr x12,[x11, #0xa0]
7102d7b3dc  and x12,x12,#0xffffffffff
7102d7b3e0  cmp x12,x10
7102d7b3e4  b.eq 0x7102d7b3f4
7102d7b3e8  cmp x9,x8
7102d7b3ec  b.ne 0x7102d7b3d4
7102d7b3f0  b 0x7102d7b418
7102d7b3f4  ldr x8,[x11, #0x130]
7102d7b3f8  cbz x8,0x7102d7b418
7102d7b3fc  ldp x0,x1,[x8]
7102d7b400  adrp x2,0x71042d4000
7102d7b404  add x2,x2,#0x77a
7102d7b408  ldp x29,x30,[sp, #0x20]
7102d7b40c  ldp x20,x19,[sp, #0x10]
7102d7b410  ldr x21,[sp], #0x30
7102d7b414  b 0x71025f55b0
7102d7b418  ldp x29,x30,[sp, #0x20]
7102d7b41c  ldp x20,x19,[sp, #0x10]
7102d7b420  ldr x21,[sp], #0x30
7102d7b424  ret
