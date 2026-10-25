// addr:      7102d8c600
// offset:    0x2d8c600
// name:      FUN_7102d8c600
// mangled:   
// size:      280

7102d8c600  str x19,[sp, #-0x20]!
7102d8c604  stp x29,x30,[sp, #0x10]
7102d8c608  add x29,sp,#0x10
7102d8c60c  mov x19,x0
7102d8c610  ldr x0,[x0, #0x38]
7102d8c614  ldr x8,[x0]
7102d8c618  ldr x8,[x8, #0x38]
7102d8c61c  blr x8
7102d8c620  ldr x8,[x19, #0x8]
7102d8c624  ldr x9,[x8, #0x338]
7102d8c628  ldr x9,[x9]
7102d8c62c  ldr x0,[x9, #0x8]
7102d8c630  cbz x0,0x7102d8c64c
7102d8c634  ldr x8,[x0]
7102d8c638  ldr x8,[x8, #0x58]
7102d8c63c  mov w2,#0xffffffff
7102d8c640  mov w1,#0x10
7102d8c644  blr x8
7102d8c648  ldr x8,[x19, #0x8]
7102d8c64c  ldr x8,[x8, #0x300]
7102d8c650  ldr x9,[x8, #0x18]
7102d8c654  ldp x8,x9,[x9]
7102d8c658  cmp x8,x9
7102d8c65c  b.eq 0x7102d8c70c
7102d8c660  mov x10,#0xdf99
7102d8c664  movk x10,#0xb569, LSL #16
7102d8c668  movk x10,#0x7, LSL #32
7102d8c66c  mov x11,x8
7102d8c670  ldr x12,[x11], #0x8
7102d8c674  ldr x13,[x12, #0xa0]
7102d8c678  and x13,x13,#0xffffffffff
7102d8c67c  cmp x13,x10
7102d8c680  b.eq 0x7102d8c690
7102d8c684  cmp x9,x11
7102d8c688  b.ne 0x7102d8c670
7102d8c68c  b 0x7102d8c6b8
7102d8c690  ldr x10,[x12, #0x130]
7102d8c694  cbz x10,0x7102d8c6b8
7102d8c698  ldp x0,x1,[x10]
7102d8c69c  adrp x2,0x71042a1000
7102d8c6a0  add x2,x2,#0x67e
7102d8c6a4  bl 0x71025f55b0
7102d8c6a8  ldr x8,[x19, #0x8]
7102d8c6ac  ldr x8,[x8, #0x300]
7102d8c6b0  ldr x9,[x8, #0x18]
7102d8c6b4  ldp x8,x9,[x9]
7102d8c6b8  cmp x8,x9
7102d8c6bc  b.eq 0x7102d8c70c
7102d8c6c0  mov x10,#0x3730
7102d8c6c4  movk x10,#0xc547, LSL #16
7102d8c6c8  movk x10,#0x7, LSL #32
7102d8c6cc  ldr x11,[x8], #0x8
7102d8c6d0  ldr x12,[x11, #0xa0]
7102d8c6d4  and x12,x12,#0xffffffffff
7102d8c6d8  cmp x12,x10
7102d8c6dc  b.eq 0x7102d8c6ec
7102d8c6e0  cmp x9,x8
7102d8c6e4  b.ne 0x7102d8c6cc
7102d8c6e8  b 0x7102d8c70c
7102d8c6ec  ldr x8,[x11, #0x130]
7102d8c6f0  cbz x8,0x7102d8c70c
7102d8c6f4  ldp x0,x1,[x8]
7102d8c6f8  adrp x2,0x710439b000
7102d8c6fc  add x2,x2,#0x5a0
7102d8c700  ldp x29,x30,[sp, #0x10]
7102d8c704  ldr x19,[sp], #0x20
7102d8c708  b 0x71025f5420
7102d8c70c  ldp x29,x30,[sp, #0x10]
7102d8c710  ldr x19,[sp], #0x20
7102d8c714  ret
