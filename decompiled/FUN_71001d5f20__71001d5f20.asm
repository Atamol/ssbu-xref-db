// addr:      71001d5f20
// offset:    0x1d5f20
// name:      FUN_71001d5f20
// mangled:   
// size:      244

71001d5f20  stp x29,x30,[sp, #-0x10]!
71001d5f24  mov x29,sp
71001d5f28  cbz w3,0x71001d5f6c
71001d5f2c  ldr x10,[x0, #0xa0]
71001d5f30  ldp x9,x10,[x10]
71001d5f34  sub x10,x10,x9
71001d5f38  mov w8,w3
71001d5f3c  asr x10,x10,#0x3
71001d5f40  cmp x10,x8
71001d5f44  b.ls 0x71001d5fe0
71001d5f48  ldr x8,[x9, x8, LSL #0x3]
71001d5f4c  cbz x8,0x71001d5fa4
71001d5f50  cmp w2,#0x11
71001d5f54  b.cc 0x71001d5fbc
71001d5f58  adrp x0,0x710439c000
71001d5f5c  add x0,x0,#0x845
71001d5f60  orr w1,wzr,#0x3e
71001d5f64  orr w2,wzr,#0xe0000003
71001d5f68  b 0x71001d5fd8
71001d5f6c  cmp w2,#0x11
71001d5f70  b.cc 0x71001d5f84
71001d5f74  adrp x0,0x710439c000
71001d5f78  add x0,x0,#0x845
71001d5f7c  orr w1,wzr,#0x3e
71001d5f80  b 0x71001d5fec
71001d5f84  add x8,x0,w2, UXTW  #0x3
71001d5f88  ldr x9,[x8, #0x10]!
71001d5f8c  cbz x9,0x71001d6004
71001d5f90  adrp x0,0x710439c000
71001d5f94  add x0,x0,#0x845
71001d5f98  mov w1,#0x44
71001d5f9c  orr w2,wzr,#0xe000000f
71001d5fa0  b 0x71001d5ff0
71001d5fa4  adrp x0,0x7104307000
71001d5fa8  add x0,x0,#0x9e3
71001d5fac  mov w1,#0x9f
71001d5fb0  mov w2,#0x8
71001d5fb4  movk w2,#0xe000, LSL #16
71001d5fb8  b 0x71001d5ff0
71001d5fbc  add x8,x8,w2, UXTW  #0x3
71001d5fc0  ldr x9,[x8, #0x8]!
71001d5fc4  cbz x9,0x71001d6004
71001d5fc8  adrp x0,0x710439c000
71001d5fcc  add x0,x0,#0x845
71001d5fd0  mov w1,#0x44
71001d5fd4  orr w2,wzr,#0xe000000f
71001d5fd8  mov w3,wzr
71001d5fdc  bl 0x71001b1300
71001d5fe0  adrp x0,0x7104307000
71001d5fe4  add x0,x0,#0x9e3
71001d5fe8  mov w1,#0xa6
71001d5fec  orr w2,wzr,#0xe0000003
71001d5ff0  mov w3,wzr
71001d5ff4  bl 0x71001b1300
71001d5ff8  mov w0,wzr
71001d5ffc  ldp x29,x30,[sp], #0x10
71001d6000  ret
71001d6004  str x1,[x8]
71001d6008  mov w0,#0x1
71001d600c  ldp x29,x30,[sp], #0x10
71001d6010  ret
