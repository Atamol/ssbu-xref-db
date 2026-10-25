// addr:      71001fc3e0
// offset:    0x1fc3e0
// name:      FUN_71001fc3e0
// mangled:   
// size:      420

71001fc3e0  stp x22,x21,[sp, #-0x30]!
71001fc3e4  stp x20,x19,[sp, #0x10]
71001fc3e8  stp x29,x30,[sp, #0x20]
71001fc3ec  add x29,sp,#0x20
71001fc3f0  adrp x9,0x71052a6000
71001fc3f4  ldr x8,[x1]
71001fc3f8  ldr x9,[x9, #0x870]
71001fc3fc  str x8,[x9]
71001fc400  adrp x8,0x71052a4000
71001fc404  ldr x8,[x8, #0xda8]
71001fc408  adrp x22,0x71052a4000
71001fc40c  ldrb w8,[x8]
71001fc410  ldr x22,[x22, #0xdb0]
71001fc414  mov x20,x1
71001fc418  mov x19,x0
71001fc41c  add x21,x22,#0x28
71001fc420  cbz w8,0x71001fc45c
71001fc424  adrp x8,0x71052a4000
71001fc428  ldr x8,[x8, #0xdb8]
71001fc42c  ldr x0,[x8]
71001fc430  bl 0x7101717960
71001fc434  ldr w8,[x0]
71001fc438  cbz w8,0x71001fc45c
71001fc43c  ldr x10,[x22, #0xa0]
71001fc440  ldp x9,x10,[x10]
71001fc444  sub x10,x10,x9
71001fc448  asr x10,x10,#0x3
71001fc44c  cmp x10,x8
71001fc450  b.ls 0x71001fc56c
71001fc454  ldr x8,[x9, x8, LSL #0x3]
71001fc458  add x21,x8,#0x20
71001fc45c  ldr x8,[x21]
71001fc460  ldr x8,[x8, #0x10]
71001fc464  ldr x8,[x8, #0x10]
71001fc468  ldr w8,[x8, #0x1cc]
71001fc46c  cmp w8,#0x3
71001fc470  b.ne 0x71001fc4ec
71001fc474  ldr x21,[x19, #0x100]
71001fc478  ldr x8,[x19, #0x108]
71001fc47c  cmp x21,x8
71001fc480  b.eq 0x71001fc4a8
71001fc484  ldr x0,[x21, #0x8]
71001fc488  ldr x8,[x0]
71001fc48c  ldr x8,[x8, #0x18]
71001fc490  mov x1,x20
71001fc494  blr x8
71001fc498  add x21,x21,#0x10
71001fc49c  ldr x8,[x19, #0x108]
71001fc4a0  cmp x21,x8
71001fc4a4  b.ne 0x71001fc484
71001fc4a8  mov x0,x19
71001fc4ac  mov x1,x20
71001fc4b0  bl 0x71001fc710
71001fc4b4  ldr x20,[x19, #0x2c8]
71001fc4b8  ldr x8,[x19, #0x2d0]
71001fc4bc  cmp x20,x8
71001fc4c0  b.eq 0x71001fc4dc
71001fc4c4  ldr x0,[x20, #0x8]
71001fc4c8  bl 0x71001c3590
71001fc4cc  add x20,x20,#0x10
71001fc4d0  ldr x8,[x19, #0x2d0]
71001fc4d4  cmp x20,x8
71001fc4d8  b.ne 0x71001fc4c4
71001fc4dc  ldp x29,x30,[sp, #0x20]
71001fc4e0  ldp x20,x19,[sp, #0x10]
71001fc4e4  ldp x22,x21,[sp], #0x30
71001fc4e8  ret
71001fc4ec  ldr x21,[x19, #0x2c8]
71001fc4f0  ldr x8,[x19, #0x2d0]
71001fc4f4  cmp x21,x8
71001fc4f8  b.eq 0x71001fc514
71001fc4fc  ldr x0,[x21, #0x8]
71001fc500  bl 0x71001c3590
71001fc504  add x21,x21,#0x10
71001fc508  ldr x8,[x19, #0x2d0]
71001fc50c  cmp x21,x8
71001fc510  b.ne 0x71001fc4fc
71001fc514  mov x0,x19
71001fc518  mov x1,x20
71001fc51c  bl 0x71001fc590
71001fc520  ldr x21,[x19, #0x100]
71001fc524  ldr x8,[x19, #0x108]
71001fc528  cmp x21,x8
71001fc52c  b.eq 0x71001fc554
71001fc530  ldr x0,[x21, #0x8]
71001fc534  ldr x8,[x0]
71001fc538  ldr x8,[x8, #0x18]
71001fc53c  mov x1,x20
71001fc540  blr x8
71001fc544  add x21,x21,#0x10
71001fc548  ldr x8,[x19, #0x108]
71001fc54c  cmp x21,x8
71001fc550  b.ne 0x71001fc530
71001fc554  mov x0,x19
71001fc558  mov x1,x20
71001fc55c  ldp x29,x30,[sp, #0x20]
71001fc560  ldp x20,x19,[sp, #0x10]
71001fc564  ldp x22,x21,[sp], #0x30
71001fc568  b 0x71001fc710
71001fc56c  adrp x0,0x71042c4000
71001fc570  add x0,x0,#0x35f
71001fc574  mov w1,#0x47
71001fc578  orr w2,wzr,#0xe0000003
71001fc57c  mov w3,wzr
71001fc580  bl 0x71001b1300
