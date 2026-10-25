// addr:      7102d8c720
// offset:    0x2d8c720
// name:      FUN_7102d8c720
// mangled:   
// size:      280

7102d8c720  str x19,[sp, #-0x20]!
7102d8c724  stp x29,x30,[sp, #0x10]
7102d8c728  add x29,sp,#0x10
7102d8c72c  mov x19,x0
7102d8c730  ldr x0,[x0, #0x38]
7102d8c734  ldr x8,[x0]
7102d8c738  ldr x8,[x8, #0x40]
7102d8c73c  blr x8
7102d8c740  ldr x8,[x19, #0x8]
7102d8c744  ldr x9,[x8, #0x338]
7102d8c748  ldr x9,[x9]
7102d8c74c  ldr x0,[x9, #0x8]
7102d8c750  cbz x0,0x7102d8c76c
7102d8c754  ldr x8,[x0]
7102d8c758  ldr x8,[x8, #0x58]
7102d8c75c  mov w1,#0x1b
7102d8c760  mov w2,#0xffffffff
7102d8c764  blr x8
7102d8c768  ldr x8,[x19, #0x8]
7102d8c76c  ldr x8,[x8, #0x300]
7102d8c770  ldr x9,[x8, #0x18]
7102d8c774  ldp x8,x9,[x9]
7102d8c778  cmp x8,x9
7102d8c77c  b.eq 0x7102d8c82c
7102d8c780  mov x10,#0xdf99
7102d8c784  movk x10,#0xb569, LSL #16
7102d8c788  movk x10,#0x7, LSL #32
7102d8c78c  mov x11,x8
7102d8c790  ldr x12,[x11], #0x8
7102d8c794  ldr x13,[x12, #0xa0]
7102d8c798  and x13,x13,#0xffffffffff
7102d8c79c  cmp x13,x10
7102d8c7a0  b.eq 0x7102d8c7b0
7102d8c7a4  cmp x9,x11
7102d8c7a8  b.ne 0x7102d8c790
7102d8c7ac  b 0x7102d8c7d8
7102d8c7b0  ldr x10,[x12, #0x130]
7102d8c7b4  cbz x10,0x7102d8c7d8
7102d8c7b8  ldp x0,x1,[x10]
7102d8c7bc  adrp x2,0x71042a1000
7102d8c7c0  add x2,x2,#0x67e
7102d8c7c4  bl 0x71025f5420
7102d8c7c8  ldr x8,[x19, #0x8]
7102d8c7cc  ldr x8,[x8, #0x300]
7102d8c7d0  ldr x9,[x8, #0x18]
7102d8c7d4  ldp x8,x9,[x9]
7102d8c7d8  cmp x8,x9
7102d8c7dc  b.eq 0x7102d8c82c
7102d8c7e0  mov x10,#0x3730
7102d8c7e4  movk x10,#0xc547, LSL #16
7102d8c7e8  movk x10,#0x7, LSL #32
7102d8c7ec  ldr x11,[x8], #0x8
7102d8c7f0  ldr x12,[x11, #0xa0]
7102d8c7f4  and x12,x12,#0xffffffffff
7102d8c7f8  cmp x12,x10
7102d8c7fc  b.eq 0x7102d8c80c
7102d8c800  cmp x9,x8
7102d8c804  b.ne 0x7102d8c7ec
7102d8c808  b 0x7102d8c82c
7102d8c80c  ldr x8,[x11, #0x130]
7102d8c810  cbz x8,0x7102d8c82c
7102d8c814  ldp x0,x1,[x8]
7102d8c818  adrp x2,0x710439b000
7102d8c81c  add x2,x2,#0x5a0
7102d8c820  ldp x29,x30,[sp, #0x10]
7102d8c824  ldr x19,[sp], #0x20
7102d8c828  b 0x71025f55b0
7102d8c82c  ldp x29,x30,[sp, #0x10]
7102d8c830  ldr x19,[sp], #0x20
7102d8c834  ret
