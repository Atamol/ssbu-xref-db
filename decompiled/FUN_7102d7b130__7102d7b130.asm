// addr:      7102d7b130
// offset:    0x2d7b130
// name:      FUN_7102d7b130
// mangled:   
// size:      428

7102d7b130  str d8,[sp, #-0x40]!
7102d7b134  str x23,[sp, #0x8]
7102d7b138  stp x22,x21,[sp, #0x10]
7102d7b13c  stp x20,x19,[sp, #0x20]
7102d7b140  stp x29,x30,[sp, #0x30]
7102d7b144  add x29,sp,#0x30
7102d7b148  ldr x8,[x0, #0x38]
7102d7b14c  mov w20,#0x1
7102d7b150  strb w20,[x8, #0xa5]
7102d7b154  mov x19,x0
7102d7b158  ldr x0,[x0, #0x38]
7102d7b15c  ldr x8,[x0]
7102d7b160  ldr x8,[x8, #0x38]
7102d7b164  blr x8
7102d7b168  ldp x21,x22,[x19, #0x40]
7102d7b16c  cmp x21,x22
7102d7b170  b.eq 0x7102d7b1c8
7102d7b174  fmov s8,0x41f00000
7102d7b178  adrp x23,0x7104559000
7102d7b17c  add x23,x23,#0x6c0
7102d7b180  ldr x8,[x21]
7102d7b184  ldrsb x9,[x8, #0xbc]
7102d7b188  cmp x9,#0x3
7102d7b18c  b.cs 0x7102d7b2d8
7102d7b190  ldr s0,[x23,x9, lsl #2]
7102d7b194  fadd s0,s0,s8
7102d7b198  fcmp s0,#0.0
7102d7b19c  b.lt 0x7102d7b1a4
7102d7b1a0  str s0,[x8, #0xa8]
7102d7b1a4  strb wzr,[x8, #0xa6]
7102d7b1a8  ldr x8,[x21]
7102d7b1ac  strb w20,[x8, #0xa5]
7102d7b1b0  ldr x0,[x21], #0x8
7102d7b1b4  ldr x8,[x0]
7102d7b1b8  ldr x8,[x8, #0x38]
7102d7b1bc  blr x8
7102d7b1c0  cmp x22,x21
7102d7b1c4  b.ne 0x7102d7b180
7102d7b1c8  ldr x8,[x19, #0x8]
7102d7b1cc  ldr x9,[x8, #0x338]
7102d7b1d0  ldr x9,[x9]
7102d7b1d4  ldr x0,[x9, #0x8]
7102d7b1d8  cbz x0,0x7102d7b1f4
7102d7b1dc  ldr x8,[x0]
7102d7b1e0  ldr x8,[x8, #0x58]
7102d7b1e4  mov w1,#0x9
7102d7b1e8  mov w2,#0xffffffff
7102d7b1ec  blr x8
7102d7b1f0  ldr x8,[x19, #0x8]
7102d7b1f4  ldr x8,[x8, #0x300]
7102d7b1f8  ldr x9,[x8, #0x18]
7102d7b1fc  ldp x8,x9,[x9]
7102d7b200  cmp x8,x9
7102d7b204  b.eq 0x7102d7b2c0
7102d7b208  mov x10,#0xdf99
7102d7b20c  movk x10,#0xb569, LSL #16
7102d7b210  movk x10,#0x7, LSL #32
7102d7b214  mov x11,x8
7102d7b218  ldr x12,[x11], #0x8
7102d7b21c  ldr x13,[x12, #0xa0]
7102d7b220  and x13,x13,#0xffffffffff
7102d7b224  cmp x13,x10
7102d7b228  b.eq 0x7102d7b238
7102d7b22c  cmp x9,x11
7102d7b230  b.ne 0x7102d7b218
7102d7b234  b 0x7102d7b260
7102d7b238  ldr x10,[x12, #0x130]
7102d7b23c  cbz x10,0x7102d7b260
7102d7b240  ldp x0,x1,[x10]
7102d7b244  adrp x2,0x71042a1000
7102d7b248  add x2,x2,#0x67e
7102d7b24c  bl 0x71025f55b0
7102d7b250  ldr x8,[x19, #0x8]
7102d7b254  ldr x8,[x8, #0x300]
7102d7b258  ldr x9,[x8, #0x18]
7102d7b25c  ldp x8,x9,[x9]
7102d7b260  cmp x8,x9
7102d7b264  b.eq 0x7102d7b2c0
7102d7b268  mov x10,#0x8e51
7102d7b26c  movk x10,#0x9266, LSL #16
7102d7b270  movk x10,#0x7, LSL #32
7102d7b274  ldr x11,[x8], #0x8
7102d7b278  ldr x12,[x11, #0xa0]
7102d7b27c  and x12,x12,#0xffffffffff
7102d7b280  cmp x12,x10
7102d7b284  b.eq 0x7102d7b294
7102d7b288  cmp x9,x8
7102d7b28c  b.ne 0x7102d7b274
7102d7b290  b 0x7102d7b2c0
7102d7b294  ldr x8,[x11, #0x130]
7102d7b298  cbz x8,0x7102d7b2c0
7102d7b29c  ldp x0,x1,[x8]
7102d7b2a0  ldr x23,[sp, #0x8]
7102d7b2a4  ldp x29,x30,[sp, #0x30]
7102d7b2a8  adrp x2,0x71042d4000
7102d7b2ac  add x2,x2,#0x77a
7102d7b2b0  ldp x20,x19,[sp, #0x20]
7102d7b2b4  ldp x22,x21,[sp, #0x10]
7102d7b2b8  ldr d8,[sp], #0x40
7102d7b2bc  b 0x71025f5420
7102d7b2c0  ldp x29,x30,[sp, #0x30]
7102d7b2c4  ldr x23,[sp, #0x8]
7102d7b2c8  ldp x20,x19,[sp, #0x20]
7102d7b2cc  ldp x22,x21,[sp, #0x10]
7102d7b2d0  ldr d8,[sp], #0x40
7102d7b2d4  ret
7102d7b2d8  bl 0x71039c2650
