// addr:      71002aa870
// offset:    0x2aa870
// name:      FUN_71002aa870
// mangled:   
// size:      344

71002aa870  stp x22,x21,[sp, #-0x30]!
71002aa874  stp x20,x19,[sp, #0x10]
71002aa878  stp x29,x30,[sp, #0x20]
71002aa87c  add x29,sp,#0x20
71002aa880  adrp x22,0x71052a4000
71002aa884  ldr x22,[x22, #0xda8]
71002aa888  adrp x21,0x71052a4000
71002aa88c  ldrb w8,[x22]
71002aa890  ldr x21,[x21, #0xdb0]
71002aa894  mov x19,x0
71002aa898  add x20,x21,#0x28
71002aa89c  cbz w8,0x71002aa8d8
71002aa8a0  adrp x8,0x71052a4000
71002aa8a4  ldr x8,[x8, #0xdb8]
71002aa8a8  ldr x0,[x8]
71002aa8ac  bl 0x7101717960
71002aa8b0  ldr w8,[x0]
71002aa8b4  cbz w8,0x71002aa8d8
71002aa8b8  ldr x10,[x21, #0xa0]
71002aa8bc  ldp x9,x10,[x10]
71002aa8c0  sub x10,x10,x9
71002aa8c4  asr x10,x10,#0x3
71002aa8c8  cmp x10,x8
71002aa8cc  b.ls 0x71002aa8f0
71002aa8d0  ldr x8,[x9, x8, LSL #0x3]
71002aa8d4  add x20,x8,#0x20
71002aa8d8  ldr x8,[x20]
71002aa8dc  cbz x8,0x71002aa908
71002aa8e0  ldr x8,[x8, #0x10]
71002aa8e4  cbz x8,0x71002aa908
71002aa8e8  ldr x20,[x8, #0x10]
71002aa8ec  b 0x71002aa90c
71002aa8f0  adrp x0,0x71042c4000
71002aa8f4  add x0,x0,#0x35f
71002aa8f8  mov w1,#0x47
71002aa8fc  orr w2,wzr,#0xe0000003
71002aa900  mov w3,wzr
71002aa904  bl 0x71001b1300
71002aa908  mov x20,xzr
71002aa90c  ldr x8,[x20, #0x78]!
71002aa910  ldr x8,[x8, #0x10]
71002aa914  mov x0,x20
71002aa918  blr x8
71002aa91c  ldrb w8,[x22]
71002aa920  add x22,x21,#0x28
71002aa924  cbz w8,0x71002aa960
71002aa928  adrp x8,0x71052a4000
71002aa92c  ldr x8,[x8, #0xdb8]
71002aa930  ldr x0,[x8]
71002aa934  bl 0x7101717960
71002aa938  ldr w8,[x0]
71002aa93c  cbz w8,0x71002aa960
71002aa940  ldr x10,[x21, #0xa0]
71002aa944  ldp x9,x10,[x10]
71002aa948  sub x10,x10,x9
71002aa94c  asr x10,x10,#0x3
71002aa950  cmp x10,x8
71002aa954  b.ls 0x71002aa9b0
71002aa958  ldr x8,[x9, x8, LSL #0x3]
71002aa95c  add x22,x8,#0x20
71002aa960  ldr x8,[x22]
71002aa964  ldr x8,[x8, #0x10]
71002aa968  ldr x0,[x8, #0x18]
71002aa96c  ldr w1,[x19, #0x44]
71002aa970  bl 0x71001cd7d0
71002aa974  cbz x0,0x71002aa988
71002aa978  bl 0x71001d0a10
71002aa97c  str wzr,[x19, #0x44]
71002aa980  mov w19,#0x1
71002aa984  b 0x71002aa98c
71002aa988  mov w19,wzr
71002aa98c  ldr x8,[x20]
71002aa990  ldr x8,[x8, #0x20]
71002aa994  mov x0,x20
71002aa998  blr x8
71002aa99c  mov w0,w19
71002aa9a0  ldp x29,x30,[sp, #0x20]
71002aa9a4  ldp x20,x19,[sp, #0x10]
71002aa9a8  ldp x22,x21,[sp], #0x30
71002aa9ac  ret
71002aa9b0  adrp x0,0x71042c4000
71002aa9b4  add x0,x0,#0x35f
71002aa9b8  mov w1,#0x47
71002aa9bc  orr w2,wzr,#0xe0000003
71002aa9c0  mov w3,wzr
71002aa9c4  bl 0x71001b1300
