// addr:      71001fc170
// offset:    0x1fc170
// name:      FUN_71001fc170
// mangled:   
// size:      512

71001fc170  sub sp,sp,#0xf0
71001fc174  stp x26,x25,[sp, #0xa0]
71001fc178  stp x24,x23,[sp, #0xb0]
71001fc17c  stp x22,x21,[sp, #0xc0]
71001fc180  stp x20,x19,[sp, #0xd0]
71001fc184  stp x29,x30,[sp, #0xe0]
71001fc188  add x29,sp,#0xe0
71001fc18c  adrp x8,0x71052a6000
71001fc190  ldr x8,[x8, #0xe78]
71001fc194  ldr x25,[x8]
71001fc198  ldr w8,[x25, #0x8]
71001fc19c  mov x19,x3
71001fc1a0  mov x21,x2
71001fc1a4  mov x20,x1
71001fc1a8  mov x22,x0
71001fc1ac  cmp w8,#0x1
71001fc1b0  b.ne 0x71001fc1e4
71001fc1b4  mov x0,x19
71001fc1b8  add x23,x25,#0x130
71001fc1bc  bl 0x71001beb00
71001fc1c0  mov x24,x0
71001fc1c4  mov x0,x23
71001fc1c8  bl 0x71001beb00
71001fc1cc  cmp x24,x0
71001fc1d0  b.ne 0x71001fc1e4
71001fc1d4  ldr w8,[x19, #0x88]
71001fc1d8  ldr w9,[x25, #0x1b8]
71001fc1dc  cmp w8,w9
71001fc1e0  b.eq 0x71001fc2f8
71001fc1e4  mov w26,wzr
71001fc1e8  add x23,x22,#0x2f8
71001fc1ec  add x24,x22,#0xf0
71001fc1f0  sturb wzr,[x29, #-0x44]
71001fc1f4  sub x4,x29,#0x44
71001fc1f8  mov x0,x20
71001fc1fc  mov x1,x24
71001fc200  mov x2,x19
71001fc204  mov x3,x21
71001fc208  bl 0x7100218560
71001fc20c  cbz x0,0x71001fc248
71001fc210  mov x25,x0
71001fc214  mov x0,x20
71001fc218  add w26,w26,#0x1
71001fc21c  bl 0x71001c38c0
71001fc220  bl 0x71001beb30
71001fc224  strh w0,[x25, #0xac]
71001fc228  ldr x8,[x23]
71001fc22c  ldr x8,[x8, #0x18]
71001fc230  mov w2,#0x1
71001fc234  mov x0,x23
71001fc238  mov x1,x25
71001fc23c  blr x8
71001fc240  ldr x8,[x21, #0x18]
71001fc244  cbnz x8,0x71001fc1f4
71001fc248  mov w23,#0x1
71001fc24c  cbnz w26,0x71001fc350
71001fc250  ldurb w8,[x29, #-0x44]
71001fc254  cbnz w8,0x71001fc350
71001fc258  ldr x8,[x21, #0x18]
71001fc25c  cbz x8,0x71001fc2f8
71001fc260  add x0,sp,#0x8
71001fc264  mov x1,x19
71001fc268  bl 0x71001bebd0
71001fc26c  add x2,sp,#0x8
71001fc270  mov x0,x22
71001fc274  mov x1,x21
71001fc278  bl 0x71001f10d0
71001fc27c  eor w23,w0,#0x1
71001fc280  tbnz w23,#0x0,0x71001fc348
71001fc284  ldr w8,[x20, #0x9c]
71001fc288  cbz w8,0x71001fc348
71001fc28c  adrp x8,0x71052a4000
71001fc290  ldr x8,[x8, #0xda8]
71001fc294  adrp x22,0x71052a4000
71001fc298  ldrb w8,[x8]
71001fc29c  ldr x22,[x22, #0xdb0]
71001fc2a0  add x21,x22,#0x28
71001fc2a4  cbz w8,0x71001fc2e0
71001fc2a8  adrp x8,0x71052a4000
71001fc2ac  ldr x8,[x8, #0xdb8]
71001fc2b0  ldr x0,[x8]
71001fc2b4  bl 0x7101717960
71001fc2b8  ldr w8,[x0]
71001fc2bc  cbz w8,0x71001fc2e0
71001fc2c0  ldr x10,[x22, #0xa0]
71001fc2c4  ldp x9,x10,[x10]
71001fc2c8  sub x10,x10,x9
71001fc2cc  asr x10,x10,#0x3
71001fc2d0  cmp x10,x8
71001fc2d4  b.ls 0x71001fc300
71001fc2d8  ldr x8,[x9, x8, LSL #0x3]
71001fc2dc  add x21,x8,#0x20
71001fc2e0  ldr x8,[x21]
71001fc2e4  cbz x8,0x71001fc318
71001fc2e8  ldr x8,[x8, #0x10]
71001fc2ec  cbz x8,0x71001fc318
71001fc2f0  ldr x21,[x8, #0x10]
71001fc2f4  b 0x71001fc31c
71001fc2f8  mov w23,#0x1
71001fc2fc  b 0x71001fc350
71001fc300  adrp x0,0x71042c4000
71001fc304  add x0,x0,#0x35f
71001fc308  mov w1,#0x47
71001fc30c  orr w2,wzr,#0xe0000003
71001fc310  mov w3,wzr
71001fc314  bl 0x71001b1300
71001fc318  mov x21,xzr
71001fc31c  ldr x8,[x21, #0x78]!
71001fc320  ldr x8,[x8, #0x10]
71001fc324  mov x0,x21
71001fc328  blr x8
71001fc32c  mov x0,x20
71001fc330  mov x1,x19
71001fc334  bl 0x71001c3f10
71001fc338  ldr x8,[x21]
71001fc33c  ldr x8,[x8, #0x20]
71001fc340  mov x0,x21
71001fc344  blr x8
71001fc348  add x0,sp,#0x8
71001fc34c  bl 0x71001bef00
71001fc350  and w0,w23,#0x1
71001fc354  ldp x29,x30,[sp, #0xe0]
71001fc358  ldp x20,x19,[sp, #0xd0]
71001fc35c  ldp x22,x21,[sp, #0xc0]
71001fc360  ldp x24,x23,[sp, #0xb0]
71001fc364  ldp x26,x25,[sp, #0xa0]
71001fc368  add sp,sp,#0xf0
71001fc36c  ret
