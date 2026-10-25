// addr:      71001faff0
// offset:    0x1faff0
// name:      FUN_71001faff0
// mangled:   
// size:      264

71001faff0  str x21,[sp, #-0x30]!
71001faff4  stp x20,x19,[sp, #0x10]
71001faff8  stp x29,x30,[sp, #0x20]
71001faffc  add x29,sp,#0x20
71001fb000  adrp x8,0x71052a4000
71001fb004  ldr x8,[x8, #0xda8]
71001fb008  adrp x21,0x71052a4000
71001fb00c  ldrb w8,[x8]
71001fb010  ldr x21,[x21, #0xdb0]
71001fb014  mov x19,x0
71001fb018  add x20,x21,#0x28
71001fb01c  cbz w8,0x71001fb058
71001fb020  adrp x8,0x71052a4000
71001fb024  ldr x8,[x8, #0xdb8]
71001fb028  ldr x0,[x8]
71001fb02c  bl 0x7101717960
71001fb030  ldr w8,[x0]
71001fb034  cbz w8,0x71001fb058
71001fb038  ldr x10,[x21, #0xa0]
71001fb03c  ldp x9,x10,[x10]
71001fb040  sub x10,x10,x9
71001fb044  asr x10,x10,#0x3
71001fb048  cmp x10,x8
71001fb04c  b.ls 0x71001fb070
71001fb050  ldr x8,[x9, x8, LSL #0x3]
71001fb054  add x20,x8,#0x20
71001fb058  ldr x8,[x20]
71001fb05c  cbz x8,0x71001fb088
71001fb060  ldr x8,[x8, #0x10]
71001fb064  cbz x8,0x71001fb088
71001fb068  ldr x20,[x8, #0x10]
71001fb06c  b 0x71001fb08c
71001fb070  adrp x0,0x71042c4000
71001fb074  add x0,x0,#0x35f
71001fb078  mov w1,#0x47
71001fb07c  orr w2,wzr,#0xe0000003
71001fb080  mov w3,wzr
71001fb084  bl 0x71001b1300
71001fb088  mov x20,xzr
71001fb08c  ldr x8,[x20, #0x78]!
71001fb090  ldr x8,[x8, #0x10]
71001fb094  mov x0,x20
71001fb098  blr x8
71001fb09c  ldr x8,[x19, #0x2c8]
71001fb0a0  ldr x9,[x19, #0x2d0]
71001fb0a4  cmp x8,x9
71001fb0a8  b.eq 0x71001fb0d0
71001fb0ac  ldr x9,[x19]
71001fb0b0  ldr w1,[x8]
71001fb0b4  mov x0,x19
71001fb0b8  ldrh w2,[x8, #0x4]
71001fb0bc  ldr x9,[x9, #0x40]
71001fb0c0  blr x9
71001fb0c4  tbnz w0,#0x0,0x71001fb09c
71001fb0c8  mov w19,wzr
71001fb0cc  b 0x71001fb0d4
71001fb0d0  mov w19,#0x1
71001fb0d4  ldr x8,[x20]
71001fb0d8  ldr x8,[x8, #0x20]
71001fb0dc  mov x0,x20
71001fb0e0  blr x8
71001fb0e4  mov w0,w19
71001fb0e8  ldp x29,x30,[sp, #0x20]
71001fb0ec  ldp x20,x19,[sp, #0x10]
71001fb0f0  ldr x21,[sp], #0x30
71001fb0f4  ret
