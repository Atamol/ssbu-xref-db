// addr:      71002ae990
// offset:    0x2ae990
// name:      FUN_71002ae990
// mangled:   
// size:      252

71002ae990  str x21,[sp, #-0x30]!
71002ae994  stp x20,x19,[sp, #0x10]
71002ae998  stp x29,x30,[sp, #0x20]
71002ae99c  add x29,sp,#0x20
71002ae9a0  mov w20,w1
71002ae9a4  and w21,w1,#0xffff
71002ae9a8  mov w1,#0x1
71002ae9ac  mov x19,x0
71002ae9b0  bl 0x710022a520
71002ae9b4  adrp x8,0x71052a8000
71002ae9b8  ldr x8,[x8, #0x958]
71002ae9bc  add x8,x8,#0x10
71002ae9c0  str x8,[x19]
71002ae9c4  cbz w21,0x71002aea64
71002ae9c8  mov x0,x19
71002ae9cc  mov w1,w20
71002ae9d0  bl 0x710022b380
71002ae9d4  adrp x8,0x71052a4000
71002ae9d8  ldr x8,[x8, #0xda8]
71002ae9dc  adrp x21,0x71052a4000
71002ae9e0  ldrb w8,[x8]
71002ae9e4  ldr x21,[x21, #0xdb0]
71002ae9e8  add x20,x21,#0x70
71002ae9ec  cbz w8,0x71002aea28
71002ae9f0  adrp x8,0x71052a4000
71002ae9f4  ldr x8,[x8, #0xdb8]
71002ae9f8  ldr x0,[x8]
71002ae9fc  bl 0x7101717960
71002aea00  ldr w8,[x0]
71002aea04  cbz w8,0x71002aea28
71002aea08  ldr x10,[x21, #0xa0]
71002aea0c  ldp x9,x10,[x10]
71002aea10  sub x10,x10,x9
71002aea14  asr x10,x10,#0x3
71002aea18  cmp x10,x8
71002aea1c  b.ls 0x71002aea74
71002aea20  ldr x8,[x9, x8, LSL #0x3]
71002aea24  add x20,x8,#0x68
71002aea28  ldr x8,[x20]
71002aea2c  ldr x8,[x8, #0x10]
71002aea30  ldr x20,[x8, #0x10]
71002aea34  ldr x8,[x19]
71002aea38  ldr x8,[x8, #0xb0]
71002aea3c  ldrh w21,[x19, #0x48]
71002aea40  mov x0,x19
71002aea44  blr x8
71002aea48  mov x2,x0
71002aea4c  mov x0,x20
71002aea50  mov w1,w21
71002aea54  ldp x29,x30,[sp, #0x20]
71002aea58  ldp x20,x19,[sp, #0x10]
71002aea5c  ldr x21,[sp], #0x30
71002aea60  b 0x7100242360
71002aea64  ldp x29,x30,[sp, #0x20]
71002aea68  ldp x20,x19,[sp, #0x10]
71002aea6c  ldr x21,[sp], #0x30
71002aea70  ret
71002aea74  adrp x0,0x71042c4000
71002aea78  add x0,x0,#0x35f
71002aea7c  mov w1,#0x47
71002aea80  orr w2,wzr,#0xe0000003
71002aea84  mov w3,wzr
71002aea88  bl 0x71001b1300
