// addr:      71000fc110
// offset:    0xfc110
// name:      FUN_71000fc110
// mangled:   
// size:      480

71000fc110  sub sp,sp,#0x40
71000fc114  str x21,[sp, #0x10]
71000fc118  stp x20,x19,[sp, #0x20]
71000fc11c  stp x29,x30,[sp, #0x30]
71000fc120  add x29,sp,#0x30
71000fc124  adrp x21,0x71052a5000
71000fc128  ldr x21,[x21, #0x80]
71000fc12c  mov x19,x0
71000fc130  ldr x0,[x21]
71000fc134  bl 0x7100146ba0
71000fc138  sub w8,w0,#0x5
71000fc13c  cmp w8,#0x3
71000fc140  b.hi 0x71000fc168
71000fc144  adrp x9,0x7104496000
71000fc148  add x9,x9,#0x37c
71000fc14c  ldrsw x8,[x9, x8, LSL #0x2]
71000fc150  add x8,x8,x9
71000fc154  br x8
71000fc158  mov w8,#0x1
71000fc15c  orr w9,wzr,#0x3
71000fc160  mov w10,#0xc406
71000fc164  b 0x71000fc220
71000fc168  ldr x8,[x21]
71000fc16c  ldrb w9,[x8, #0x162]
71000fc170  cmp w9,#0x0
71000fc174  cset w9,eq
71000fc178  add x8,x8,w9, UXTW  #0x3
71000fc17c  ldr x0,[x8, #0x168]
71000fc180  bl 0x71000df790
71000fc184  tbz w0,#0x0,0x71000fc29c
71000fc188  add x20,x19,#0x64
71000fc18c  mov x0,sp
71000fc190  mov x1,x20
71000fc194  bl 0x71000bce50
71000fc198  ldr w8,[sp]
71000fc19c  cbz w8,0x71000fc2a4
71000fc1a0  mov w8,#0x13
71000fc1a4  mov x0,sp
71000fc1a8  mov x1,x20
71000fc1ac  strb w8,[x19, #0x130]
71000fc1b0  bl 0x71000bce50
71000fc1b4  add x0,x19,#0x220
71000fc1b8  mov x1,sp
71000fc1bc  bl 0x71000bcf30
71000fc1c0  ldr x8,[x21]
71000fc1c4  ldrb w9,[x8, #0x162]
71000fc1c8  cmp w9,#0x0
71000fc1cc  cset w9,eq
71000fc1d0  add x8,x8,w9, UXTW  #0x3
71000fc1d4  ldr x0,[x8, #0x168]
71000fc1d8  bl 0x71000d8f90
71000fc1dc  adrp x9,0x71052a5000
71000fc1e0  ldr x9,[x9, #0x238]
71000fc1e4  mov w0,#0x5
71000fc1e8  adrp x8,0x7104290000
71000fc1ec  add x8,x8,#0xd05
71000fc1f0  b 0x71000fc280
71000fc1f4  mov w8,#0x1
71000fc1f8  orr w9,wzr,#0x3
71000fc1fc  mov w10,#0xa471
71000fc200  b 0x71000fc220
71000fc204  mov w8,#0x1
71000fc208  orr w9,wzr,#0x3
71000fc20c  mov w10,#0xc420
71000fc210  b 0x71000fc220
71000fc214  mov w8,#0x1
71000fc218  orr w9,wzr,#0x3
71000fc21c  mov w10,#0xc421
71000fc220  strb w8,[x19, #0xfa]
71000fc224  mov x8,sp
71000fc228  orr x20,x8,#0x4
71000fc22c  mov x0,x20
71000fc230  strb w9,[x19, #0x130]
71000fc234  str w10,[sp]
71000fc238  bl 0x71039c0a80
71000fc23c  add x1,sp,#0x18
71000fc240  mov x0,x20
71000fc244  str wzr,[sp, #0x18]
71000fc248  bl 0x71039c0a90
71000fc24c  add x0,x19,#0x220
71000fc250  mov x1,sp
71000fc254  bl 0x71000bcf30
71000fc258  ldr x8,[x21]
71000fc25c  ldr x0,[x8, #0x8]
71000fc260  ldr x8,[x0]
71000fc264  ldr x8,[x8, #0x28]
71000fc268  blr x8
71000fc26c  adrp x9,0x71052a5000
71000fc270  ldr x9,[x9, #0x240]
71000fc274  mov x0,xzr
71000fc278  adrp x8,0x71043ac000
71000fc27c  add x8,x8,#0x982
71000fc280  stp x9,xzr,[x19, #0x30]
71000fc284  str x8,[x19, #0x40]
71000fc288  ldp x29,x30,[sp, #0x30]
71000fc28c  ldr x21,[sp, #0x10]
71000fc290  ldp x20,x19,[sp, #0x20]
71000fc294  add sp,sp,#0x40
71000fc298  ret
71000fc29c  mov w0,#0x5
71000fc2a0  b 0x71000fc288
71000fc2a4  ldr w1,[x19, #0xf0]
71000fc2a8  ldr x0,[x21]
71000fc2ac  bl 0x7100149290
71000fc2b0  adrp x8,0x71052a4000
71000fc2b4  ldr x8,[x8, #0xc70]
71000fc2b8  ldr x20,[x8]
71000fc2bc  bl 0x71000bb680
71000fc2c0  mov x8,x0
71000fc2c4  mov x0,xzr
71000fc2c8  ldr x8,[x8]
71000fc2cc  ldr x10,[x20, #0x30]
71000fc2d0  mov w9,#0x2710
71000fc2d4  madd x9,x8,x9,x10
71000fc2d8  adrp x8,0x710435a000
71000fc2dc  add x8,x8,#0x5e3
71000fc2e0  str x9,[x19, #0x210]
71000fc2e4  adrp x9,0x71052a5000
71000fc2e8  ldr x9,[x9, #0x328]
71000fc2ec  b 0x71000fc280
