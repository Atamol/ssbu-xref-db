// addr:      71002aa5b0
// offset:    0x2aa5b0
// name:      FUN_71002aa5b0
// mangled:   
// size:      344

71002aa5b0  stp x22,x21,[sp, #-0x30]!
71002aa5b4  stp x20,x19,[sp, #0x10]
71002aa5b8  stp x29,x30,[sp, #0x20]
71002aa5bc  add x29,sp,#0x20
71002aa5c0  adrp x22,0x71052a4000
71002aa5c4  ldr x22,[x22, #0xda8]
71002aa5c8  adrp x21,0x71052a4000
71002aa5cc  ldrb w8,[x22]
71002aa5d0  ldr x21,[x21, #0xdb0]
71002aa5d4  mov x19,x0
71002aa5d8  add x20,x21,#0x28
71002aa5dc  cbz w8,0x71002aa618
71002aa5e0  adrp x8,0x71052a4000
71002aa5e4  ldr x8,[x8, #0xdb8]
71002aa5e8  ldr x0,[x8]
71002aa5ec  bl 0x7101717960
71002aa5f0  ldr w8,[x0]
71002aa5f4  cbz w8,0x71002aa618
71002aa5f8  ldr x10,[x21, #0xa0]
71002aa5fc  ldp x9,x10,[x10]
71002aa600  sub x10,x10,x9
71002aa604  asr x10,x10,#0x3
71002aa608  cmp x10,x8
71002aa60c  b.ls 0x71002aa630
71002aa610  ldr x8,[x9, x8, LSL #0x3]
71002aa614  add x20,x8,#0x20
71002aa618  ldr x8,[x20]
71002aa61c  cbz x8,0x71002aa648
71002aa620  ldr x8,[x8, #0x10]
71002aa624  cbz x8,0x71002aa648
71002aa628  ldr x20,[x8, #0x10]
71002aa62c  b 0x71002aa64c
71002aa630  adrp x0,0x71042c4000
71002aa634  add x0,x0,#0x35f
71002aa638  mov w1,#0x47
71002aa63c  orr w2,wzr,#0xe0000003
71002aa640  mov w3,wzr
71002aa644  bl 0x71001b1300
71002aa648  mov x20,xzr
71002aa64c  ldr x8,[x20, #0x78]!
71002aa650  ldr x8,[x8, #0x10]
71002aa654  mov x0,x20
71002aa658  blr x8
71002aa65c  ldrb w8,[x22]
71002aa660  add x22,x21,#0x28
71002aa664  cbz w8,0x71002aa6a0
71002aa668  adrp x8,0x71052a4000
71002aa66c  ldr x8,[x8, #0xdb8]
71002aa670  ldr x0,[x8]
71002aa674  bl 0x7101717960
71002aa678  ldr w8,[x0]
71002aa67c  cbz w8,0x71002aa6a0
71002aa680  ldr x10,[x21, #0xa0]
71002aa684  ldp x9,x10,[x10]
71002aa688  sub x10,x10,x9
71002aa68c  asr x10,x10,#0x3
71002aa690  cmp x10,x8
71002aa694  b.ls 0x71002aa6f0
71002aa698  ldr x8,[x9, x8, LSL #0x3]
71002aa69c  add x22,x8,#0x20
71002aa6a0  ldr x8,[x22]
71002aa6a4  ldr x8,[x8, #0x10]
71002aa6a8  ldr x0,[x8, #0x18]
71002aa6ac  ldr w1,[x19, #0x50]
71002aa6b0  bl 0x71001cd7d0
71002aa6b4  cbz x0,0x71002aa6c8
71002aa6b8  bl 0x71001d0a10
71002aa6bc  str wzr,[x19, #0x50]
71002aa6c0  mov w19,#0x1
71002aa6c4  b 0x71002aa6cc
71002aa6c8  mov w19,wzr
71002aa6cc  ldr x8,[x20]
71002aa6d0  ldr x8,[x8, #0x20]
71002aa6d4  mov x0,x20
71002aa6d8  blr x8
71002aa6dc  mov w0,w19
71002aa6e0  ldp x29,x30,[sp, #0x20]
71002aa6e4  ldp x20,x19,[sp, #0x10]
71002aa6e8  ldp x22,x21,[sp], #0x30
71002aa6ec  ret
71002aa6f0  adrp x0,0x71042c4000
71002aa6f4  add x0,x0,#0x35f
71002aa6f8  mov w1,#0x47
71002aa6fc  orr w2,wzr,#0xe0000003
71002aa700  mov w3,wzr
71002aa704  bl 0x71001b1300
