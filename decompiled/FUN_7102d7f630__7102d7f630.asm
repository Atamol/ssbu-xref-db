// addr:      7102d7f630
// offset:    0x2d7f630
// name:      FUN_7102d7f630
// mangled:   
// size:      328

7102d7f630  str x21,[sp, #-0x30]!
7102d7f634  stp x20,x19,[sp, #0x10]
7102d7f638  stp x29,x30,[sp, #0x20]
7102d7f63c  add x29,sp,#0x20
7102d7f640  mov x19,x0
7102d7f644  ldr x0,[x0, #0x38]
7102d7f648  ldr x8,[x0]
7102d7f64c  ldr x8,[x8, #0x40]
7102d7f650  blr x8
7102d7f654  ldp x20,x21,[x19, #0x40]
7102d7f658  cmp x20,x21
7102d7f65c  b.eq 0x7102d7f678
7102d7f660  ldr x0,[x20], #0x8
7102d7f664  ldr x8,[x0]
7102d7f668  ldr x8,[x8, #0x40]
7102d7f66c  blr x8
7102d7f670  cmp x21,x20
7102d7f674  b.ne 0x7102d7f660
7102d7f678  ldr x8,[x19, #0x8]
7102d7f67c  ldr x9,[x8, #0x338]
7102d7f680  ldr x9,[x9]
7102d7f684  ldr x0,[x9, #0x8]
7102d7f688  cbz x0,0x7102d7f6a4
7102d7f68c  ldr x8,[x0]
7102d7f690  ldr x8,[x8, #0x58]
7102d7f694  mov w1,#0x1b
7102d7f698  mov w2,#0xffffffff
7102d7f69c  blr x8
7102d7f6a0  ldr x8,[x19, #0x8]
7102d7f6a4  ldr x8,[x8, #0x300]
7102d7f6a8  ldr x9,[x8, #0x18]
7102d7f6ac  ldp x8,x9,[x9]
7102d7f6b0  cmp x8,x9
7102d7f6b4  b.eq 0x7102d7f768
7102d7f6b8  mov x10,#0xdf99
7102d7f6bc  movk x10,#0xb569, LSL #16
7102d7f6c0  movk x10,#0x7, LSL #32
7102d7f6c4  mov x11,x8
7102d7f6c8  ldr x12,[x11], #0x8
7102d7f6cc  ldr x13,[x12, #0xa0]
7102d7f6d0  and x13,x13,#0xffffffffff
7102d7f6d4  cmp x13,x10
7102d7f6d8  b.eq 0x7102d7f6e8
7102d7f6dc  cmp x9,x11
7102d7f6e0  b.ne 0x7102d7f6c8
7102d7f6e4  b 0x7102d7f710
7102d7f6e8  ldr x10,[x12, #0x130]
7102d7f6ec  cbz x10,0x7102d7f710
7102d7f6f0  ldp x0,x1,[x10]
7102d7f6f4  adrp x2,0x71042a1000
7102d7f6f8  add x2,x2,#0x67e
7102d7f6fc  bl 0x71025f5420
7102d7f700  ldr x8,[x19, #0x8]
7102d7f704  ldr x8,[x8, #0x300]
7102d7f708  ldr x9,[x8, #0x18]
7102d7f70c  ldp x8,x9,[x9]
7102d7f710  cmp x8,x9
7102d7f714  b.eq 0x7102d7f768
7102d7f718  mov x10,#0x788
7102d7f71c  movk x10,#0xd842, LSL #16
7102d7f720  movk x10,#0x7, LSL #32
7102d7f724  ldr x11,[x8], #0x8
7102d7f728  ldr x12,[x11, #0xa0]
7102d7f72c  and x12,x12,#0xffffffffff
7102d7f730  cmp x12,x10
7102d7f734  b.eq 0x7102d7f744
7102d7f738  cmp x9,x8
7102d7f73c  b.ne 0x7102d7f724
7102d7f740  b 0x7102d7f768
7102d7f744  ldr x8,[x11, #0x130]
7102d7f748  cbz x8,0x7102d7f768
7102d7f74c  ldp x0,x1,[x8]
7102d7f750  adrp x2,0x7104452000
7102d7f754  add x2,x2,#0xb76
7102d7f758  ldp x29,x30,[sp, #0x20]
7102d7f75c  ldp x20,x19,[sp, #0x10]
7102d7f760  ldr x21,[sp], #0x30
7102d7f764  b 0x71025f55b0
7102d7f768  ldp x29,x30,[sp, #0x20]
7102d7f76c  ldp x20,x19,[sp, #0x10]
7102d7f770  ldr x21,[sp], #0x30
7102d7f774  ret
