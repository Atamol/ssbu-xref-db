// addr:      71001ed0c0
// offset:    0x1ed0c0
// name:      FUN_71001ed0c0
// mangled:   
// size:      236

71001ed0c0  stp x22,x21,[sp, #-0x30]!
71001ed0c4  stp x20,x19,[sp, #0x10]
71001ed0c8  stp x29,x30,[sp, #0x20]
71001ed0cc  add x29,sp,#0x20
71001ed0d0  adrp x8,0x71052a4000
71001ed0d4  ldr x8,[x8, #0xda8]
71001ed0d8  adrp x22,0x71052a4000
71001ed0dc  ldrb w8,[x8]
71001ed0e0  ldr x22,[x22, #0xdb0]
71001ed0e4  mov x19,x1
71001ed0e8  mov x20,x0
71001ed0ec  add x21,x22,#0x28
71001ed0f0  cbz w8,0x71001ed12c
71001ed0f4  adrp x8,0x71052a4000
71001ed0f8  ldr x8,[x8, #0xdb8]
71001ed0fc  ldr x0,[x8]
71001ed100  bl 0x7101717960
71001ed104  ldr w8,[x0]
71001ed108  cbz w8,0x71001ed12c
71001ed10c  ldr x10,[x22, #0xa0]
71001ed110  ldp x9,x10,[x10]
71001ed114  sub x10,x10,x9
71001ed118  asr x10,x10,#0x3
71001ed11c  cmp x10,x8
71001ed120  b.ls 0x71001ed144
71001ed124  ldr x8,[x9, x8, LSL #0x3]
71001ed128  add x21,x8,#0x20
71001ed12c  ldr x8,[x21]
71001ed130  cbz x8,0x71001ed15c
71001ed134  ldr x8,[x8, #0x10]
71001ed138  cbz x8,0x71001ed15c
71001ed13c  ldr x21,[x8, #0x10]
71001ed140  b 0x71001ed160
71001ed144  adrp x0,0x71042c4000
71001ed148  add x0,x0,#0x35f
71001ed14c  mov w1,#0x47
71001ed150  orr w2,wzr,#0xe0000003
71001ed154  mov w3,wzr
71001ed158  bl 0x71001b1300
71001ed15c  mov x21,xzr
71001ed160  ldr x8,[x21, #0x78]!
71001ed164  ldr x8,[x8, #0x10]
71001ed168  mov x0,x21
71001ed16c  blr x8
71001ed170  ldr x8,[x20, #0x18]
71001ed174  cbz x8,0x71001ed180
71001ed178  mov w19,wzr
71001ed17c  b 0x71001ed188
71001ed180  str x19,[x20, #0x18]
71001ed184  mov w19,#0x1
71001ed188  ldr x8,[x21]
71001ed18c  ldr x8,[x8, #0x20]
71001ed190  mov x0,x21
71001ed194  blr x8
71001ed198  mov w0,w19
71001ed19c  ldp x29,x30,[sp, #0x20]
71001ed1a0  ldp x20,x19,[sp, #0x10]
71001ed1a4  ldp x22,x21,[sp], #0x30
71001ed1a8  ret
