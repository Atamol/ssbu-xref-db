// addr:      71002ac140
// offset:    0x2ac140
// name:      FUN_71002ac140
// mangled:   
// size:      372

71002ac140  sub sp,sp,#0x60
71002ac144  str x21,[sp, #0x30]
71002ac148  stp x20,x19,[sp, #0x40]
71002ac14c  stp x29,x30,[sp, #0x50]
71002ac150  add x29,sp,#0x50
71002ac154  adrp x8,0x71052a4000
71002ac158  ldr x8,[x8, #0xda8]
71002ac15c  adrp x21,0x71052a4000
71002ac160  ldrb w8,[x8]
71002ac164  ldr x21,[x21, #0xdb0]
71002ac168  mov x19,x0
71002ac16c  add x20,x21,#0x28
71002ac170  cbz w8,0x71002ac1ac
71002ac174  adrp x8,0x71052a4000
71002ac178  ldr x8,[x8, #0xdb8]
71002ac17c  ldr x0,[x8]
71002ac180  bl 0x7101717960
71002ac184  ldr w8,[x0]
71002ac188  cbz w8,0x71002ac1ac
71002ac18c  ldr x10,[x21, #0xa0]
71002ac190  ldp x9,x10,[x10]
71002ac194  sub x10,x10,x9
71002ac198  asr x10,x10,#0x3
71002ac19c  cmp x10,x8
71002ac1a0  b.ls 0x71002ac29c
71002ac1a4  ldr x8,[x9, x8, LSL #0x3]
71002ac1a8  add x20,x8,#0x20
71002ac1ac  ldr x8,[x20]
71002ac1b0  ldr x8,[x8, #0x10]
71002ac1b4  ldr x0,[x8, #0x18]
71002ac1b8  ldr w1,[x19, #0xa0]
71002ac1bc  bl 0x71001cd7d0
71002ac1c0  cbz x0,0x71002ac21c
71002ac1c4  ldr x0,[x19, #0xb0]
71002ac1c8  cbnz x0,0x71002ac1e0
71002ac1cc  ldr x8,[x19]
71002ac1d0  ldr x8,[x8, #0x68]
71002ac1d4  mov x0,x19
71002ac1d8  blr x8
71002ac1dc  str x0,[x19, #0xb0]
71002ac1e0  ldp x8,x9,[x0, #0x58]
71002ac1e4  ldr x10,[x0, #0x68]
71002ac1e8  stp x8,x9,[sp, #0x18]
71002ac1ec  str x10,[sp, #0x28]
71002ac1f0  adrp x8,0x71052a5000
71002ac1f4  ldr x8,[x8, #0x110]
71002ac1f8  ldr w9,[sp, #0x18]
71002ac1fc  cmp w9,#0x0
71002ac200  csel x8,x8,xzr,ge
71002ac204  cbz x8,0x71002ac238
71002ac208  ldr x8,[x19, #0xb8]
71002ac20c  cbz x8,0x71002ac27c
71002ac210  mov w9,#0x1
71002ac214  strb w9,[x8]
71002ac218  b 0x71002ac27c
71002ac21c  mov w8,#0x4
71002ac220  movk w8,#0x8001, LSL #16
71002ac224  add x0,sp,#0x18
71002ac228  mov x1,sp
71002ac22c  str w8,[sp]
71002ac230  bl 0x71001b4200
71002ac234  b 0x71002ac27c
71002ac238  mov w8,#0x7
71002ac23c  movk w8,#0x8072, LSL #16
71002ac240  add x0,sp,#0x18
71002ac244  mov x1,sp
71002ac248  str w8,[sp]
71002ac24c  bl 0x71001b4260
71002ac250  ldr x8,[x19, #0xb8]
71002ac254  cbz x8,0x71002ac25c
71002ac258  strb wzr,[x8]
71002ac25c  tbz w0,#0x0,0x71002ac27c
71002ac260  orr w8,wzr,#0x10001
71002ac264  mov x0,sp
71002ac268  sub x1,x29,#0x14
71002ac26c  stur w8,[x29, #-0x14]
71002ac270  bl 0x71001b4200
71002ac274  mov x1,sp
71002ac278  b 0x71002ac280
71002ac27c  add x1,sp,#0x18
71002ac280  mov x0,x19
71002ac284  bl 0x71001d4010
71002ac288  ldp x29,x30,[sp, #0x50]
71002ac28c  ldr x21,[sp, #0x30]
71002ac290  ldp x20,x19,[sp, #0x40]
71002ac294  add sp,sp,#0x60
71002ac298  ret
71002ac29c  adrp x0,0x71042c4000
71002ac2a0  add x0,x0,#0x35f
71002ac2a4  mov w1,#0x47
71002ac2a8  orr w2,wzr,#0xe0000003
71002ac2ac  mov w3,wzr
71002ac2b0  bl 0x71001b1300
