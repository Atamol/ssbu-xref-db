// addr:      71025aa140
// offset:    0x25aa140
// name:      FUN_71025aa140
// mangled:   
// size:      488

71025aa140  str d8,[sp, #-0x30]!
71025aa144  str x21,[sp, #0x8]
71025aa148  stp x20,x19,[sp, #0x10]
71025aa14c  stp x29,x30,[sp, #0x20]
71025aa150  add x29,sp,#0x20
71025aa154  ldr w8,[x0, #0x1fc]
71025aa158  mov x19,x0
71025aa15c  cbz w8,0x71025aa1e0
71025aa160  adrp x8,0x71052c4000
71025aa164  ldr x8,[x8, #0xc58]
71025aa168  ldr x8,[x8, #0x8]
71025aa16c  ldr x9,[x8, #0x80]
71025aa170  ldrb w9,[x9, #0x244]
71025aa174  ldr x20,[x8, #0x90]
71025aa178  cbz w9,0x71025aa184
71025aa17c  ldr w8,[x20, #0x10]
71025aa180  cbnz w8,0x71025aa310
71025aa184  add x0,x20,#0x30
71025aa188  bl 0x71039c0bc0
71025aa18c  cbnz w0,0x71025aa198
71025aa190  ldr w8,[x20, #0x28]
71025aa194  cbz w8,0x71025aa1a0
71025aa198  ldrb w8,[x20, #0x2d]
71025aa19c  cbz w8,0x71025aa2f8
71025aa1a0  ldr x8,[x19, #0x228]
71025aa1a4  ldr x8,[x8, #0x80]
71025aa1a8  mov w9,#0xcccd
71025aa1ac  movk w9,#0x3ecc, LSL #16
71025aa1b0  str w9,[x8, #0x5ac]
71025aa1b4  ldr w9,[x8, #0x5a8]
71025aa1b8  str w9,[x8, #0x5b0]
71025aa1bc  add x8,x8,#0x5b4
71025aa1c0  mov w9,#0xa
71025aa1c4  str x9,[x8]
71025aa1c8  ldrsw x8,[x19, #0x1f4]
71025aa1cc  cmp w8,#0x13
71025aa1d0  b.cs 0x71025aa324
71025aa1d4  add x8,x19,x8, LSL #0x2
71025aa1d8  orr w9,wzr,#0xe
71025aa1dc  b 0x71025aa30c
71025aa1e0  ldr x8,[x19, #0x228]
71025aa1e4  ldr x20,[x8, #0x80]
71025aa1e8  ldr w8,[x20, #0x5a4]
71025aa1ec  cmp w8,#0x6
71025aa1f0  ccmp w8,#0x0,#0x4,ne
71025aa1f4  b.ne 0x71025aa268
71025aa1f8  fmov s8,0x3f800000
71025aa1fc  ldr x0,[x20, #0x4f0]
71025aa200  adrp x1,0x7104421000
71025aa204  add x1,x1,#0x55
71025aa208  mov v0.16B,v8.16B
71025aa20c  bl 0x7103778300
71025aa210  ldr x0,[x20, #0x4f0]
71025aa214  mov v0.16B,v8.16B
71025aa218  adrp x1,0x71043f0000
71025aa21c  add x1,x1,#0xdfb
71025aa220  bl 0x7103778300
71025aa224  ldr x0,[x20, #0x4f0]
71025aa228  mov v0.16B,v8.16B
71025aa22c  adrp x1,0x71043f0000
71025aa230  add x1,x1,#0xfa9
71025aa234  bl 0x7103778300
71025aa238  ldr x0,[x20, #0x4f0]
71025aa23c  fmov s0,wzr
71025aa240  adrp x1,0x7104443000
71025aa244  add x1,x1,#0xccd
71025aa248  str wzr,[x20, #0x5b8]
71025aa24c  str xzr,[x20, #0x5b0]
71025aa250  str xzr,[x20, #0x5a8]
71025aa254  bl 0x7103778630
71025aa258  mov w8,#0x1
71025aa25c  str w8,[x20, #0x5a4]
71025aa260  ldr x8,[x19, #0x228]
71025aa264  ldr x20,[x8, #0x80]
71025aa268  mov w8,#0xcccd
71025aa26c  movk w8,#0x3ecc, LSL #16
71025aa270  str w8,[x20, #0x5ac]
71025aa274  ldr w8,[x20, #0x5a8]
71025aa278  str w8,[x20, #0x5b0]
71025aa27c  add x8,x20,#0x5b4
71025aa280  orr w9,wzr,#0x3c
71025aa284  mov w20,#0x1
71025aa288  str x9,[x8]
71025aa28c  strb w20,[x19, #0x209]
71025aa290  adrp x8,0x710532f000
71025aa294  ldr x8,[x8, #0x7d8]
71025aa298  cbz x8,0x71025aa310
71025aa29c  ldr x21,[x8, #0x8]
71025aa2a0  add x19,x21,#0xc8
71025aa2a4  mov x0,x19
71025aa2a8  bl 0x71039c19c0
71025aa2ac  ldr w8,[x21, #0xe8]
71025aa2b0  ldr x10,[x21, #0xa0]
71025aa2b4  strb w20,[x21, #0xf1]
71025aa2b8  strb wzr,[x21, #0xf5]
71025aa2bc  orr w8,w8,#0x4
71025aa2c0  str w8,[x21, #0xe8]
71025aa2c4  ldrb w9,[x21, #0xf4]
71025aa2c8  ldr x8,[x10, #0x80]
71025aa2cc  strb w9,[x8, #0x1cc]
71025aa2d0  mov w8,#0xffffffff
71025aa2d4  mov x9,#0xff0000000000
71025aa2d8  movk x9,#0x8ff, LSL #48
71025aa2dc  str w8,[x21, #0xec]
71025aa2e0  orr w8,wzr,#0x7
71025aa2e4  mov x0,x19
71025aa2e8  str x9,[x21, #0xf8]
71025aa2ec  str w8,[x21, #0x100]
71025aa2f0  bl 0x71039c19d0
71025aa2f4  b 0x71025aa310
71025aa2f8  ldrsw x8,[x19, #0x1f4]
71025aa2fc  cmp w8,#0x13
71025aa300  b.cs 0x71025aa324
71025aa304  add x8,x19,x8, LSL #0x2
71025aa308  mov w9,#0x16
71025aa30c  str w9,[x8, #0x1a8]
71025aa310  ldp x29,x30,[sp, #0x20]
71025aa314  ldr x21,[sp, #0x8]
71025aa318  ldp x20,x19,[sp, #0x10]
71025aa31c  ldr d8,[sp], #0x30
71025aa320  ret
71025aa324  bl 0x71039c2650
