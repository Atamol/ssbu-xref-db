// addr:      71001ed1b0
// offset:    0x1ed1b0
// name:      FUN_71001ed1b0
// mangled:   
// size:      232

71001ed1b0  str x21,[sp, #-0x30]!
71001ed1b4  stp x20,x19,[sp, #0x10]
71001ed1b8  stp x29,x30,[sp, #0x20]
71001ed1bc  add x29,sp,#0x20
71001ed1c0  adrp x8,0x71052a4000
71001ed1c4  ldr x8,[x8, #0xda8]
71001ed1c8  adrp x21,0x71052a4000
71001ed1cc  ldrb w8,[x8]
71001ed1d0  ldr x21,[x21, #0xdb0]
71001ed1d4  mov x19,x0
71001ed1d8  add x20,x21,#0x28
71001ed1dc  cbz w8,0x71001ed218
71001ed1e0  adrp x8,0x71052a4000
71001ed1e4  ldr x8,[x8, #0xdb8]
71001ed1e8  ldr x0,[x8]
71001ed1ec  bl 0x7101717960
71001ed1f0  ldr w8,[x0]
71001ed1f4  cbz w8,0x71001ed218
71001ed1f8  ldr x10,[x21, #0xa0]
71001ed1fc  ldp x9,x10,[x10]
71001ed200  sub x10,x10,x9
71001ed204  asr x10,x10,#0x3
71001ed208  cmp x10,x8
71001ed20c  b.ls 0x71001ed230
71001ed210  ldr x8,[x9, x8, LSL #0x3]
71001ed214  add x20,x8,#0x20
71001ed218  ldr x8,[x20]
71001ed21c  cbz x8,0x71001ed248
71001ed220  ldr x8,[x8, #0x10]
71001ed224  cbz x8,0x71001ed248
71001ed228  ldr x20,[x8, #0x10]
71001ed22c  b 0x71001ed24c
71001ed230  adrp x0,0x71042c4000
71001ed234  add x0,x0,#0x35f
71001ed238  mov w1,#0x47
71001ed23c  orr w2,wzr,#0xe0000003
71001ed240  mov w3,wzr
71001ed244  bl 0x71001b1300
71001ed248  mov x20,xzr
71001ed24c  ldr x8,[x20, #0x78]!
71001ed250  ldr x8,[x8, #0x10]
71001ed254  mov x0,x20
71001ed258  blr x8
71001ed25c  ldr x8,[x19, #0x18]
71001ed260  cbz x8,0x71001ed270
71001ed264  str xzr,[x19, #0x18]
71001ed268  mov w19,#0x1
71001ed26c  b 0x71001ed274
71001ed270  mov w19,wzr
71001ed274  ldr x8,[x20]
71001ed278  ldr x8,[x8, #0x20]
71001ed27c  mov x0,x20
71001ed280  blr x8
71001ed284  mov w0,w19
71001ed288  ldp x29,x30,[sp, #0x20]
71001ed28c  ldp x20,x19,[sp, #0x10]
71001ed290  ldr x21,[sp], #0x30
71001ed294  ret
